#include <websock_frame.h>
#include <iostream>
#include <bitset>

using namespace websock;

frame websock::decodeFrame(const std::vector<u8>& data) {
    u8 firstByte = data[0];
    struct frame::header header = reinterpret_cast<struct frame::header&>(firstByte);
    header.op = static_cast<opcode>(firstByte & 0b00001111);
    frame f;
    f.header = header;
    f.masked = (data[1] & 0b10000000) != 0;
    f.payloadLength = data[1] & 0b01111111;
    size_t offset = 2;
    if (f.payloadLength == 126) {
        f.payloadLength = (data[2] << 8) | data[3];
        offset += 2;
    } else if (f.payloadLength == 127) {
        f.payloadLength = ((u64) data[2] << 56) | ((u64) data[3] << 48) | ((u64) data[4] << 40) | ((u64) data[5] << 32)
                | ((u64) data[6] << 24) | ((u64) data[7] << 16) | ((u64) data[8] << 8) | data[9];
        offset += 8;
    }
    if (f.masked) {
        f.maskingKey[0] = data[offset];
        f.maskingKey[1] = data[offset + 1];
        f.maskingKey[2] = data[offset + 2];
        f.maskingKey[3] = data[offset + 3];
        offset += 4;
    }
    f.payload = std::vector<u8>(data.begin() + offset, data.begin() + offset + f.payloadLength);
    // unmask payload
    if (f.masked) {
        for (size_t i = 0; i < f.payloadLength; i++) {
            f.payload[i] ^= f.maskingKey[i % 4];
        }
    }
    return f;
}

std::vector<u8> websock::encodeFrame(const frame& f) {
    std::vector<u8> out;
    u8 firstByte = f.header.fin << 7 | f.header.rsv1 << 6 | f.header.rsv2 << 5 | f.header.rsv3 << 4 | f.header.op;
    out.push_back(firstByte);
    u8 secondByte = f.masked << 7;
    if(f.payloadLength > 65535) {
        secondByte |= 127;
        out.push_back(secondByte);
        out.push_back((f.payloadLength >> 56) & 0xFF);
        out.push_back((f.payloadLength >> 48) & 0xFF);
        out.push_back((f.payloadLength >> 40) & 0xFF);
        out.push_back((f.payloadLength >> 32) & 0xFF);
        out.push_back((f.payloadLength >> 24) & 0xFF);
        out.push_back((f.payloadLength >> 16) & 0xFF);
        out.push_back((f.payloadLength >> 8) & 0xFF);
        out.push_back(f.payloadLength & 0xFF);
    } else if(f.payloadLength > 125) {
        secondByte |= 126;
        out.push_back(secondByte);
        out.push_back((f.payloadLength >> 8) & 0xFF);
        out.push_back(f.payloadLength & 0xFF);
    } else {
        secondByte |= f.payloadLength;
        out.push_back(secondByte);
    }
    if(f.masked) {
        out.push_back(f.maskingKey[0]);
        out.push_back(f.maskingKey[1]);
        out.push_back(f.maskingKey[2]);
        out.push_back(f.maskingKey[3]);
    }
    // mask payload
    if(f.masked) {
        for(size_t i = 0; i < f.payloadLength; i++) {
            out.push_back(f.payload[i] ^ f.maskingKey[i % 4]);
        }
    } else {
        out.insert(out.end(), f.payload.begin(), f.payload.end());
    }
    return out;
}

frame websock::createStringFrame(std::string str, opcode op) {
    frame f;
    f.header.fin = true;
    f.header.op = op;

    f.masked = false;
    f.payloadLength = str.length();
    f.payload = std::vector<u8>(str.begin(), str.end());
    return f;
}

frame websock::createBinaryFrame(const std::vector<u8> &data, opcode op) {
    frame f;
    f.header.fin = true;
    f.header.op = op;

    f.masked = false;
    f.payloadLength = data.size();
    f.payload = data;
    return f;
}