#pragma once
#include "wolv/utils/string.hpp"

#include "sha1.hpp"
#include "base64.hpp"

#include <string>
#include <map>

namespace websock::util {

    struct http_request {
        std::string method;
        std::string path;
        std::string version;
        std::map<std::string, std::string> headers;
        std::string body;
    };

    http_request parseHttpRequest(const std::string& request) {
        http_request req;
        auto lines = wolv::util::splitString(request, "\r\n");
        auto httpLine = wolv::util::splitString(lines[0], " ");
        req.method = httpLine[0];
        req.path = httpLine[1];
        req.version = httpLine[2];
        for (int i = 1; i < lines.size(); i++) {
            if(lines[i].empty()) break;
            auto header = wolv::util::splitString(lines[i], ": ");
            req.headers[header[0]] = header[1];
        }
        req.body = lines[lines.size() - 1];
        return req;
    }

    std::vector<unsigned char> datarize(const std::string& str) {
        return {str.begin(), str.end()};
    }
}