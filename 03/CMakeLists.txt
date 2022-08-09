cmake_minimum_required(VERSION 3.22)
project(3)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(circle circle.cpp)
add_executable(commodity commodity.cpp)
add_executable(string string.cpp)