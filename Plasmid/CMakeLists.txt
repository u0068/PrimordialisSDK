cmake_minimum_required(VERSION 3.5)

add_library(Plasmid INTERFACE)

target_compile_features(Plasmid INTERFACE cxx_std_20)

target_include_directories(Plasmid
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)