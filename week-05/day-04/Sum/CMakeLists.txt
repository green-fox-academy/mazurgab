cmake_minimum_required(VERSION 3.12)
project(sum)

set(CMAKE_CXX_STANDARD 14)

add_executable(sum_run main.cpp)

include_directories(sum)
add_subdirectory(sum)
add_subdirectory(sum_test)

target_link_libraries(sum_run sum)