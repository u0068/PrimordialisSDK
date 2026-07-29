cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(NucleusRuntimeAPI)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_library(NucleusRuntimeAPI SHARED
        nucleus.cpp)

add_subdirectory(external/minhook)

target_link_libraries(NucleusRuntimeAPI PRIVATE minhook)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/NucleusRuntimeAPI.dll
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods"
        COMMENT "Copying NucleusRuntimeAPI.dll to Primordialis mods"
)