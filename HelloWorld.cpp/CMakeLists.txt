cmake_minimum_required(VERSION 4.0)
project(HelloWorld_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(HelloWorld_cpp main.cpp
        mainVariables.cpp
        mainVariables.h)
