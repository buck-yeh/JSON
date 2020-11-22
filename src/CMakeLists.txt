#set(CMAKE_CXX_COMPILER "clang++")
IF(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wshadow -Wconversion -Wno-maybe-uninitialized -std=c++2a")
ELSEIF(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
ENDIF()

add_library(json STATIC ParseJSON.cpp JsonObjs.cpp Parser.cpp Scanner.cpp)
target_include_directories(json PRIVATE ../include ../../bux/include)
