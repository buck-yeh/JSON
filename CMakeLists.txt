cmake_minimum_required (VERSION 3.18)
cmake_policy(VERSION 3.18)

#set(CMAKE_CXX_COMPILER_ID "Clang")

if(NOT DEFINED DEPENDEE_ROOT)
set(DEPENDEE_ROOT "..")
endif()

if(DEFINED FETCH_DEPENDEES)
include(FetchContent)

FetchContent_Declare(
  FetchedBux
  GIT_REPOSITORY https://github.com/buck-yeh/bux.git
  GIT_TAG        main
  SOURCE_DIR     ${DEPENDEE_ROOT}/bux
)
FetchContent_MakeAvailable(FetchedBux)
endif()

project(JSON)

IF(DEFINED FETCH_DEPENDEES)
    if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        string(APPEND CMAKE_CXX_FLAGS " /I ${fetchedbux_SOURCE_DIR}/include")
    else()
        string(APPEND CMAKE_CXX_FLAGS " -I${fetchedbux_SOURCE_DIR}/include")
    endif()
ENDIF()
message("Root/CMAKE_CXX_FLAGS = ${CMAKE_CXX_FLAGS}")

add_subdirectory (src)
add_subdirectory (test)
