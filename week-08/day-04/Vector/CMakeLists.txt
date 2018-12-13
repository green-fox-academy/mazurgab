cmake_minimum_required(VERSION 3.12)
project(Vector C)

set(CMAKE_C_STANDARD 99)

add_executable(Vector main.c vector.h vector.c)