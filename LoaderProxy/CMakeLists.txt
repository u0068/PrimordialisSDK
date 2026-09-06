cmake_minimum_required(VERSION 3.20)

project(LoaderProxy LANGUAGES CXX)

add_library(LoaderProxy SHARED
        src/main.cpp
        src/injector.cpp
        src/mod_manager.cpp
)

target_include_directories(LoaderProxy PRIVATE
        include/
)

target_compile_definitions(LoaderProxy PRIVATE
        NOMINMAX
)

target_link_libraries(LoaderProxy PRIVATE
        Plasmid
        minhook
        nlohmann_json
        miniz
)

set_target_properties(LoaderProxy PROPERTIES
        OUTPUT_NAME "steam_api64"
        MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/steam_api64.dll
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis"
        COMMENT "Copying LoaderProxy to Primordialis"
)