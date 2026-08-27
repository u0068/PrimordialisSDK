cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)

project(Pilus)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_executable(Pilus WIN32
        src/main.cpp
        src/injector.cpp
        src/mod_manager.cpp
        src/update_manager.cpp
        src/ui.cpp
)

target_include_directories(Pilus PRIVATE
    include/
)

target_compile_definitions(Pilus PRIVATE
        NOMINMAX
)

target_link_libraries(Pilus PRIVATE
        imgui_static
        nlohmann_json
        miniz
)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/Pilus.exe
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis"
        COMMENT "Copying Pilus.exe to Primordialis"
)

# Pilus Updater
project(PilusUpdater)

add_executable(PilusUpdater
        pilus_updater/pilus_updater.cpp
)

target_compile_features(PilusUpdater PRIVATE cxx_std_20)

target_link_libraries(PilusUpdater PRIVATE
        kernel32
)

set_target_properties(PilusUpdater PROPERTIES
        WIN32_EXECUTABLE TRUE
)