cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

add_library(Plasmid INTERFACE)

target_include_directories(Plasmid
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_subdirectory(mod_src)