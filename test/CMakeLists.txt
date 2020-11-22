cmake_minimum_required (VERSION 2.8.1)

#set(CMAKE_CXX_COMPILER "clang++")
list(APPEND CMAKE_CXX_FLAGS "-Wall -Wextra -Wshadow -Wconversion -std=c++2a")
#set(CMAKE_BUILD_TYPE Debug)

include_directories("../../lib/bux")

add_executable(parseJSON main.cpp ParseJSON.cpp JsonObjs.cpp Parser.cpp Scanner.cpp)
target_link_libraries(parseJSON Bux)
