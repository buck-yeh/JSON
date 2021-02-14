#set(CMAKE_CXX_COMPILER_ID "Clang")
string(APPEND CMAKE_CXX_FLAGS " -Wall -Wextra -Wshadow -Wconversion -std=c++2a")
#set(CMAKE_BUILD_TYPE Debug)

add_executable(test_JSON test_json.cpp)
target_include_directories(test_JSON PRIVATE ../include ../../bux/include)
target_link_libraries(test_JSON json bux fmt stdc++)

enable_testing()
add_test(NAME test_leaves
         COMMAND test_JSON null.json true.json false.json
         )
add_test(NAME test_ints
         COMMAND test_JSON int1.json int2.json int3.json
         )
add_test(NAME test_floats
         COMMAND test_JSON float1.json float2.json float3.json float4.json float5.json float6.json
         )
add_test(NAME test_real
         COMMAND test_JSON real1.json
         )
add_test(NAME test_warn
         COMMAND test_JSON warn1.json
         )
add_test(NAME test_error1
         COMMAND test_JSON error1.json
         )
set_tests_properties(test_error1 PROPERTIES WILL_FAIL true)
