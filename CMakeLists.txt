cmake_minimum_required(VERSION 3.5.0)

set(CMAKE_EXPORT_COMPILECOMMANDS ON)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++-18" )
set(CMAKE_CXX_STANDARD 17)

project(write_cpp_in_rust VERSION 0.1.0 LANGUAGES CXX)

include_directories(include)

add_executable(for_in_loop examples/for_in_loop.cpp)
add_executable(infinite_loop examples/infinite_loop.cpp)
