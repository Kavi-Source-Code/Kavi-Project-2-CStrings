cmake_minimum_required(VERSION 3.10)

add_executable(cstr_tests
    ${CMAKE_SOURCE_DIR}/cstr.cpp
    ${CMAKE_SOURCE_DIR}/tests/test_cstr.cpp
)

target_include_directories(cstr_tests PRIVATE ${CMAKE_SOURCE_DIR})

enable_testing()
add_test(NAME cstr_tests COMMAND cstr_tests)
