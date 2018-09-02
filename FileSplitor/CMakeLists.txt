cmake_minimum_required(VERSION 3.12)
project(FileSplitor C)

set(CMAKE_C_STANDARD 99)

add_executable(FileSplitor main.c function.h function.c)