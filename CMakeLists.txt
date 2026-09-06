cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(PrimordialisSDK)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_subdirectory(third_party)

add_subdirectory(Pilus)

add_subdirectory(Plasmid)

add_subdirectory(mods)

add_subdirectory(lua/Luazyme)

add_subdirectory(reverse_engineering/Tools)

add_subdirectory(LoaderProxy)