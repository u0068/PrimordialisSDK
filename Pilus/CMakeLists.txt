cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)

# Setup libraries
include(FetchContent)
FetchContent_Declare(glfw GIT_REPOSITORY https://github.com/glfw/glfw.git GIT_TAG master)

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(glfw)

# Dear ImGui
add_library(imgui STATIC
        external/imgui/imgui.cpp
        external/imgui/imgui_draw.cpp
        external/imgui/imgui_tables.cpp
        external/imgui/imgui_widgets.cpp

        external/imgui/backends/imgui_impl_glfw.cpp
        external/imgui/backends/imgui_impl_opengl3.cpp
)

target_include_directories(imgui PUBLIC
        external/imgui
        external/imgui/backends
)

target_link_libraries(imgui PUBLIC
        glfw
        opengl32
)

# Pilus
project(Pilus)

add_executable(Pilus
        src/modloader_main.cpp
        src/modloader.h
        src/injector.cpp
        src/modmanager.cpp
        src/updater.cpp
        src/updater.h
        src/ui.cpp
        src/imgui_helpers.h
)

target_compile_definitions(Pilus PRIVATE
        NOMINMAX
)

target_link_libraries(Pilus PRIVATE
        imgui
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
        src/pilus_updater.cpp
)

target_compile_features(PilusUpdater PRIVATE cxx_std_20)

target_link_libraries(PilusUpdater PRIVATE
        kernel32
)

set_target_properties(PilusUpdater PROPERTIES
        WIN32_EXECUTABLE TRUE
)