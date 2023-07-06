#include <wolv/net/socket_server.hpp>
#include <map>

namespace websock::http {

    using u8 = wolv::u8;

    /**
     * @brief A simple websocket server
     */
    class server : public wolv::net::SocketServer {
    public:

        /**
         * @brief A client connected to the server
         */
        class client {
        public:

            client() = default;
            client(server* parent, wolv::net::SocketHandle socket) : m_parent(parent), m_socket(socket) {}

            /**
             * @brief Send data to the client
             * @param data The data to send
             */
            void send(const std::string& data);

            /**
             * @brief Send data to the client
             * @param data The data to send
             */
            void send(const std::vector<u8>& data);

            /**
             * Send a ping to the client
             * @param callback The callback to call when the client responds with a pong
             */
            void ping(const std::function<void()>& callback = nullptr);

            /**
             * @brief Disconnect the client
             * @param reason The reason for disconnecting
             */
            void disconnect(const std::string& reason = "Closing connection");

        private:
            friend class server;

            bool m_initialized = false;
            server* m_parent{};
            wolv::net::SocketHandle m_socket{wolv::net::SocketNone};
        };

        /**
         * Start a server on the given port
         * @param port The port to listen on
         * @param localOnly Whether to only listen on the local interface
         */
        explicit server(int port, bool localOnly = true);

        /**
         * Start a server on the given port
         * @param port The port to listen on
         * @param numClients The maximum number of clients to accept
         * @param localOnly Whether to only listen on the local interface
         */
        explicit server(int port, int numClients, bool localOnly = true);

        /**
         * @brief Send data to all connected clients
         * @param data The data to send
         * @note This will not send to clients that have not yet completed the handshake
         */
        void sendAll(const std::string& data);

        /**
         * @brief Begin listening for connections
         */
        void listen();

        inline bool isBound() {
            return wolv::net::SocketServer::isListening();
        }

        inline void setOnMessage(const std::function<void(const client&, const std::string&)>& callback) {
            m_onMessage = callback;
        }

        inline void setOnClose(const std::function<void(const client&)>& callback) {
            m_onClose = callback;
        }

        inline void setOnOpen(const std::function<void(const client&)>& callback) {
            m_onOpen = callback;
        }

    private:

        enum Mode {
            HTTP,
            WEBSOCKET
        };

        std::vector<u8> read(wolv::net::SocketHandle socket, std::vector<u8> data);
        std::map<wolv::net::SocketHandle, client> m_clients;
        std::function<void(const client&, const std::string&)> m_onMessage;
        std::function<void(const client&)> m_onClose;
        std::function<void(const client&)> m_onOpen;

        std::thread m_listenThread{};
    };

}