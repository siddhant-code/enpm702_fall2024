cmake_minimum_required(VERSION 3.20.0)
project(rm VERSION 0.1.0)

add_executable(rm src/lecture1.cpp)
set_property(TARGET rm PROPERTY CXX_STANDARD 17)