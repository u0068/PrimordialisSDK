cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(Nucleus)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_library(Nucleus SHARED
        nucleus_main.cpp)

target_include_directories(Nucleus
        PRIVATE
        ../Plasmid/include/
)

add_subdirectory(external/minhook)

target_link_libraries(Nucleus PRIVATE minhook)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/Nucleus.dll
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods"
        COMMENT "Copying Nucleus.dll to Primordialis mods"
)