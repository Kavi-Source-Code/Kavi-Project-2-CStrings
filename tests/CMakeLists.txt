cmake_minimum_required(VERSION 3.10)

add_executable(cstr_tests
    ${CMAKE_SOURCE_DIR}/cstr.cpp
    ${CMAKE_SOURCE_DIR}/tests/test_cstr.cpp
)

target_include_directories(cstr_tests PRIVATE ${CMAKE_SOURCE_DIR})

# Place the test executable in the top-level build directory so CI can find it reliably
set_target_properties(cstr_tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

enable_testing()
add_test(NAME cstr_tests COMMAND cstr_tests)
