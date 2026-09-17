cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(PrimordialisSDK)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_subdirectory(third_party)

add_subdirectory(Plasmid)

add_subdirectory(mod_src)

# If you just want to make mods, you probably wont need the stuff below
# Remove any add_subdirectory that you are not using

add_subdirectory(Pilus)

add_subdirectory(lua/Luazyme)

add_subdirectory(reverse_engineering/Tools/cpp)

add_subdirectory(LoaderProxy)