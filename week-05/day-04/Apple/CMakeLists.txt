cmake_minimum_required(VERSION 3.12)
project(apples)

set(CMAKE_CXX_STANDARD 14)

add_executable(apples_run main.cpp)

include_directories(apple)
add_subdirectory(apple)
add_subdirectory(Apple_test)

target_link_libraries(apples_run apple)