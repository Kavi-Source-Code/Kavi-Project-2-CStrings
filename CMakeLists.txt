cmake_minimum_required(VERSION 3.10)
project(cstr_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main_exec main.cpp cstr.cpp)

add_subdirectory(tests)
