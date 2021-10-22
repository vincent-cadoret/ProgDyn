cmake_minimum_required(VERSION 3.15)
project(ProgDyn C)

set(CMAKE_C_STANDARD 99)

add_executable(ProgDyn main.c src/function.c header/function.h)
add_custom_target(documentation ALL COMMAND doxygen)