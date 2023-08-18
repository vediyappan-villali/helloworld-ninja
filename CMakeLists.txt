cmake_minimum_required (VERSION 3.16)

project(HELLOWORLD VERSION 0.1)

set(CMAKE_CXX_STANDARD 14)

add_executable(helloworld hello_world.c)

message("CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")

target_link_libraries(helloworld ${CMAKE_SOURCE_DIR}/calculator.a)
