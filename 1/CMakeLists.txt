cmake_minimum_required(VERSION 3.22)
project(1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(console console.cpp)
add_executable(file file.cpp)
