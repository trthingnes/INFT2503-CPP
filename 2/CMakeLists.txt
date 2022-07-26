cmake_minimum_required(VERSION 3.22)
project(2)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(print print.cpp)
add_executable(syntax syntax.cpp)
add_executable(number number.cpp)
add_executable(sum sum.cpp)