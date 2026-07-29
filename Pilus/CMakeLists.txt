cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)

project(Pilus)

add_subdirectory(external/SFML)

add_executable(Pilus WIN32 src/modloader_main.cpp src/modloader.h)

target_link_libraries(Pilus PRIVATE SFML::Graphics)
