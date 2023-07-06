#pragma once

#include <string>
#include <vector>
#include "fmt/format.h"
#include <map>

namespace websock::util {

    std::string hexView(const std::vector<uint8_t>& data, size_t bytesPerLine = 16, bool showAddr = true) {
        std::string out;
        auto buf = std::back_inserter(out);
        fmt::format_to(buf, "      ");
        for (size_t i = 0; i < bytesPerLine; i++) {
            fmt::format_to(buf, "{:02X} ", i);
        }
        fmt::format_to(buf, "\n");

        for (size_t i = 0; i < data.size(); i += bytesPerLine) {
            if (showAddr) {
                fmt::format_to(buf, "{:04X}  ", i);
            }
            for (size_t j = 0; j < bytesPerLine; j++) {
                if (i + j < data.size()) {
                    fmt::format_to(buf, "{:02X} ", data[i + j]);
                } else {
                    fmt::format_to(buf, "    ");
                }
            }
            fmt::format_to(buf, " ");
            for (size_t j = 0; j < bytesPerLine; j++) {
                if (i + j < data.size()) {
                    if (data[i + j] >= 32 && data[i + j] <= 126) {
                        fmt::format_to(buf, "{}", static_cast<char>(data[i + j]));
                    } else {
                        fmt::format_to(buf, ".");
                    }
                } else {
                    fmt::format_to(buf, " ");
                }
            }
            fmt::format_to(buf, "\n");
        }

        return out;
    }

}