#set(CMAKE_CXX_COMPILER "clang++")
list(APPEND CMAKE_CXX_FLAGS "-Wall -Wextra -Wshadow -Wconversion -std=c++2a")
#set(CMAKE_BUILD_TYPE Debug)

add_executable(test_JSON test_json.cpp )
target_include_directories(test_JSON PRIVATE ../include ../../bux/include)
target_link_libraries(test_JSON json Bux)
