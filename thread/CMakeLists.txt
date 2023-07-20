
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(project_name)

add_executable(example example.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-pthread")

target_link_libraries(example pthread)


