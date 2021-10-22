cmake_minimum_required(VERSION 3.15)
project(ProgDyn C)

set(CMAKE_C_STANDARD 99)

add_executable(ProgDyn main.c src/test.c header/test.h src/dichotomy.c header/dichotomy.h "src/knapsack.c" "header/knapsack.h" src/pgcb.c header/pgcb.h)
add_custom_target(Doxyfile ALL COMMAND doxygen)