cmake_minimum_required(VERSION 3.20)

project(Nucleus LANGUAGES CXX)

add_library(Nucleus SHARED
        src/main.cpp
        src/mod_manager.cpp
)

target_include_directories(Nucleus PRIVATE
        include/
)

target_compile_definitions(Nucleus PRIVATE
        NOMINMAX
)

target_link_libraries(Nucleus PRIVATE
        Plasmid
        minhook
        yaml-cpp::yaml-cpp
        miniz
        ${CMAKE_SOURCE_DIR}/third_party/lua/lua51.lib
        lua_headers
#        nlohmann_json
)

set_target_properties(Nucleus PROPERTIES
        OUTPUT_NAME "Nucleus"
        MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/Nucleus.dll
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods"
        COMMENT "Copying LoaderProxy to Primordialis"
)