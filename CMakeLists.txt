cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(PlasmidMod)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_library(PlasmidMod SHARED
        mod_src/${MOD_NAME}.cpp)

add_subdirectory(external/minhook)

target_link_libraries(PlasmidMod PRIVATE minhook)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E rename
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/PlasmidMod.dll
        ${MOD_NAME}.dll
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/${MOD_NAME}.dll
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods"
        COMMENT "Copying PlasmidMod.dll to Primordialis mods"
)

project(NucleusRuntimeAPI)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_library(NucleusRuntimeAPI SHARED
        mod_src/nucleus_runtime_api.cpp
        include/shared.h)

#add_subdirectory(external/minhook)

target_link_libraries(NucleusRuntimeAPI PRIVATE minhook)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/NucleusRuntimeAPI.dll
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods"
        COMMENT "Copying NucleusRuntimeAPI.dll to Primordialis mods"
)