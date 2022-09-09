cmake_minimum_required(VERSION 3.5)

project(tamrinat LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tamrinat main.cpp)

install(TARGETS tamrinat
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
