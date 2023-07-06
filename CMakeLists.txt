cmake_minimum_required(VERSION 3.25)
project(Simple)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        libwolv
        GIT_REPOSITORY https://github.com/WerWolv/libwolv.git
        GIT_TAG master
)
FetchContent_MakeAvailable(libwolv)

# libfmt
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt
        GIT_TAG master
)
FetchContent_MakeAvailable(fmt)

add_library(Simple STATIC
        source/src/websock_serv.cpp
        source/src/websock_frame.cpp)

target_include_directories(Simple PUBLIC source/include)
target_link_libraries(Simple PUBLIC libwolv-net libwolv-utils libwolv-hash fmt::fmt)

# tests
add_executable(SimpleTest
        source/tests/serv_test.cpp
        )

target_include_directories(SimpleTest PUBLIC source/include)
target_link_libraries(SimpleTest PUBLIC Simple)