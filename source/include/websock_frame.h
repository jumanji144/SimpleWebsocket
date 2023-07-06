#include <wolv/types.hpp>
#include <string>
#include <vector>

namespace websock {

    using namespace wolv;

    enum opcode : u8 {
        CONTINUATION = 0x0,
        TEXT = 0x1,
        BINARY = 0x2,
        CLOSE = 0x8,
        PING = 0x9,
        PONG = 0xA
    };

    struct frame {
        struct header {
            bool fin : 1;
            bool rsv1 : 1;
            bool rsv2 : 1;
            bool rsv3 : 1;
            opcode op : 4;
        } header{};
        bool masked{false};
        u64 payloadLength{0};
        u8 maskingKey[4];
        std::vector<u8> payload{};
    };

    frame decodeFrame(const std::vector<u8>& data);
    std::vector<u8> encodeFrame(const frame& f);

    frame createStringFrame(std::string str, opcode op=opcode::TEXT);
    frame createBinaryFrame(const std::vector<u8>& data, opcode op=opcode::BINARY);

}