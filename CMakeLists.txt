cmake_minimum_required(VERSION 3.14.0)

set(CMAKE_EXPORT_COMPILECOMMANDS ON)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++-18" )
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(write_cpp_in_rust VERSION 0.1.0 LANGUAGES CXX)

# Dependencies
include(FetchContent)

FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt
  GIT_TAG        e69e5f977d458f2650bb346dadf2ad30c5320281) # 10.2.1
FetchContent_MakeAvailable(fmt)
# --- --- ---

include_directories(include)

add_subdirectory(src)
add_subdirectory(examples)
