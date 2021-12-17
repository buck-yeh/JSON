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

add_subdirectory (src)
add_subdirectory (test)
