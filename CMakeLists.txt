cmake_minimum_required(VERSION 3.0)

project(HELLO)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SRC src/fish.cpp src/pig.cpp)

include_directories(include)

add_executable(cmake_main ${SRC} hello.cpp)

