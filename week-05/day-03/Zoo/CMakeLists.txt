cmake_minimum_required(VERSION 3.12)
project(Zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Zoo main.cpp Animal.cpp Animal.h Mammal.cpp Mammal.h Reptile.cpp Reptile.h Bird.cpp Bird.h)