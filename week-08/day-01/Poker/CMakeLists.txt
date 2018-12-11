cmake_minimum_required(VERSION 3.12)
project(poker)

set(CMAKE_CXX_STANDARD 14)

add_executable(poker_run main.cpp)

include_directories(poker)
add_subdirectory(poker)
add_subdirectory(Poker_test)

target_link_libraries(poker_run poker)