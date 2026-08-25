cmake_minimum_required(VERSION 3.2)
project(miniz-cpp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(miniz INTERFACE)

target_include_directories(miniz INTERFACE
        ../miniz
)