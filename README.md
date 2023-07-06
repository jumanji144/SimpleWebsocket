# Simple Websocket Server
Simple websocket server for c++20, mostly intended for local use.

## Usage
```cpp
#include <iostream>
#include <string>
#include <thread>
#include <websock_serv.hpp>

int main() {
    
    // Create a local only server running on port 8080 with 5 possible connections
    websock::server server(8080, true, 5);
    
    if(server.getError().has_value()) {
        std::cout << "Error: " << server.getError().value() << std::endl;
        return 1;
    }
    
    // Set the on_message callback
    server.setOnMessage([](auto client, auto message) {
        std::cout << "Message recieved" << message << std::endl;
        client.send("Message recieved");
    });
    
    // Set the on_connect callback
    server.setOnConnect([](auto client) {
        std::cout << "Client connected" << std::endl;
    });
    
    // Set the on_disconnect callback
    server.setOnClose([](auto client) {
        std::cout << "Client disconnected" << std::endl;
    });
    
    // Start the server, this is a blocking operation
    server.listen();
    
}