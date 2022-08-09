cmake_minimum_required(VERSION 3.22)
project(6)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(chess chess-main.cpp ChessBoard.cpp piece/Piece.cpp piece/King.cpp piece/Knight.cpp)

add_executable(web web-main.cpp)
target_link_libraries(web ${Boost_LIBRARIES})
