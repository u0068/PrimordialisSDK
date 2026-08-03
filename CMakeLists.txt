cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(PrimordialisSDK)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_subdirectory(Pilus)

add_subdirectory(Nucleus)

add_subdirectory(Plasmid)


add_custom_target(BuildAllModsNuc)

add_dependencies(BuildAllModsNuc
        NucleusRuntimeAPI
        BuildAllMods
)