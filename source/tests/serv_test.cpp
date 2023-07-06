#include <websock_serv.hpp>
#include <wolv/net/socket_client.hpp>
#include <iostream>
#include <cstring>

using u8 = wolv::u8;

#define PORT 8765

// Simple echo server

int main() {
    websock::http::server serv(PORT, true);

    serv.setOnMessage([](websock::http::server::client client, auto message) {
        std::cout << "Message from client: " << message << std::endl;
        client.send(message);
    });
    serv.setOnClose([](websock::http::server::client client) {
        std::cout << "Client disconnected" << std::endl;
    });
    serv.setOnOpen([](websock::http::server::client client) {
        std::cout << "Client connected" << std::endl;
    });

    if(!serv.isBound()) {
        std::cout << "Failed to bind to port 8765" << std::endl;
        std::cout << "Error: " << serv.getError().value() << std::endl;
        std::cout << "Message: " << std::strerror(errno) << std::endl;
        return 1;
    }

    std::thread t([&serv]() {
        while (true) {
            serv.listen();
        }
    });

    while (true) {
        std::string input;
        std::getline(std::cin, input);
        serv.sendAll(input);
    }

    return 0;
}