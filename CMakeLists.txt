project(sequenceSort)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

add_executable(sequenceSort classdef.cpp main.cpp)