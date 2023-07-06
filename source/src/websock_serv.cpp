#include <websock_serv.hpp>
#include <websock_frame.h>
#include "util/util.hpp"

#include <utility>

using namespace websock::http;
using namespace websock;
using namespace wolv;

server::server(int port, bool localOnly) : wolv::net::SocketServer(port, 1024, 5, localOnly) {}
server::server(int port, int numClients, bool localOnly) : wolv::net::SocketServer(port, 1024, numClients, localOnly) {}

std::map<net::SocketHandle, std::vector<frame>> frameBuffer;
std::map<net::SocketHandle, std::function<void()>> pingCallbacks;

void server::listen() {
    while(this->isActive()) {
        wolv::net::SocketServer::accept([this](net::SocketHandle socket, std::vector<u8> data) {
            return this->read(socket, std::move(data));
        }, [this](net::SocketHandle socket) {
            auto &c = this->m_clients[socket];
            if (this->m_onClose) this->m_onClose(c);
            this->m_clients.erase(socket);
        }, true);
    }
}

frame prepareCloseFrame(const std::string& reason) {
    frame f;
    f.header.fin = true;
    f.header.op = CLOSE;
    f.payload = {0x03, 0xE8}; // 1000
    f.payload.insert(f.payload.end(), reason.begin(), reason.end());
    f.payloadLength = f.payload.size();
    return f;
}

std::vector<u8> server::read(net::SocketHandle socket, std::vector<u8> data) {
    auto& c = this->m_clients[socket];
    if(c.m_socket == wolv::net::SocketNone) {
        c.m_socket = socket;
        c.m_parent = this;
        c.m_initialized = false;
    }
    auto it = this->m_clients.find(socket);
    if(!c.m_initialized) {
        // parse request
        auto request = util::parseHttpRequest(std::string(data.begin(), data.end()));
        if(request.headers["Upgrade"].empty()) {
            return util::datarize("HTTP/1.1 400 Bad Request\r\n\r\nOnly accepting websocket requests\r\n");
        }
        // generate websocket key
        auto websocketKey = request.headers["Sec-WebSocket-Key"];
        auto newKey = websocketKey + "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
        auto sha1 = SHA1();
        sha1.update(newKey);
        auto hash = sha1.final_bytes();
        auto base64 = base64::encode({begin(hash), end(hash)});
        std::string response = std::string(
                "HTTP/1.1 101 Switching Protocols\r\n"
                "Upgrade: websocket\r\n"
                "Connection: Upgrade\r\n"
                "Sec-WebSocket-Accept: )") + base64 + "\r\n\r\n";
        if(this->m_onOpen) this->m_onOpen(c);
        c.m_initialized = true;
        return util::datarize(response);
    } else {
        frame f = decodeFrame(data);
        switch (f.header.op) {
            case PING: {
                // send pong, application data must be same as ping
                return encodeFrame(createBinaryFrame(f.payload, PONG));
            }
            case PONG: {
                if(pingCallbacks.find(socket) != pingCallbacks.end()) {
                    pingCallbacks[socket]();
                    pingCallbacks.erase(socket);
                }
                break;
            }
            case CLOSE: {
                // close connection
                if(this->m_onClose) this->m_onClose(c);
                this->m_clients.erase(socket);

                frame close_frame = prepareCloseFrame("Closed by server");
                return encodeFrame(close_frame);
            }
            default: {
                auto buffer = frameBuffer[socket];
                if(f.header.fin) {
                    std::vector<u8> finalPayload;
                    if(buffer.empty()) {
                        finalPayload = f.payload;
                    } else {
                        // finish all frames
                        buffer.push_back(f);
                        for(auto& frame : buffer) {
                            finalPayload.insert(finalPayload.end(), frame.payload.begin(), frame.payload.end());
                        }
                    }
                    if(this->m_onMessage) this->m_onMessage(c, std::string(f.payload.begin(), f.payload.end()));
                } else {
                    buffer.push_back(f);
                    frameBuffer[socket] = buffer;
                }
            }
        }
        return {};
    }
}

void server::sendAll(const std::string &data) {
    for(auto& [_, client] : this->m_clients) {
        client.send(data);
    }
}

void server::client::send(const std::string &data) {
    frame f = createStringFrame(data);
    auto encoded = encodeFrame(f);
    this->m_parent->send(this->m_socket, encoded);
}

void server::client::send(const std::vector<u8> &data) {
    frame f = createBinaryFrame(data);
    auto encoded = encodeFrame(f);
    this->m_parent->send(this->m_socket, encoded);
}

void server::client::ping(const std::function<void()>& callback) {
    frame f;
    f.header.fin = true;
    f.header.op = PING;
    auto encoded = encodeFrame(f);
    pingCallbacks[this->m_socket] = callback;
    this->m_parent->send(this->m_socket, encoded);
}

void server::client::disconnect(const std::string &reason) {
    frame f = prepareCloseFrame(reason);
    auto encoded = encodeFrame(f);
    this->m_parent->send(this->m_socket, encoded);
    this->m_parent->close(this->m_socket);
}
