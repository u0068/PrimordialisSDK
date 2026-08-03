cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(PrimordialisSDK)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_subdirectory(Pilus)

add_subdirectory(Nucleus)

add_subdirectory(Plasmid)



file(GLOB MOD_DIRS CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/Plasmid/mod_src/*"
)

set(MOD_TARGETS)

foreach(MOD_DIR ${MOD_DIRS})
    if(IS_DIRECTORY ${MOD_DIR})
        #add_subdirectory(${MOD_DIR})
        get_filename_component(MOD_NAME ${MOD_DIR} NAME)
        list(APPEND MOD_TARGETS ${MOD_NAME})
    endif()
endforeach()

add_custom_target(BuildAllMods)

add_dependencies(BuildAllMods
        NucleusRuntimeAPI
        ${MOD_TARGETS}
)