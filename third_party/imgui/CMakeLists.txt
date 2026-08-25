# Setup libraries
include(FetchContent)
FetchContent_Declare(glfw GIT_REPOSITORY https://github.com/glfw/glfw.git GIT_TAG master)

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(glfw)

add_library(imgui STATIC
        imgui.cpp
        imgui_demo.cpp
        imgui_draw.cpp
        imgui_tables.cpp
        imgui_widgets.cpp

        backends/imgui_impl_glfw.cpp
        backends/imgui_impl_opengl3.cpp
        backends/imgui_impl_win32.cpp
)

target_include_directories(imgui PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/backends
)

target_link_libraries(imgui PUBLIC
        glfw
        opengl32
)

# DLL VERSION

add_library(imgui_dll SHARED
        imgui.cpp
        imgui_demo.cpp
        imgui_draw.cpp
        imgui_tables.cpp
        imgui_widgets.cpp

        backends/imgui_impl_glfw.cpp
        backends/imgui_impl_opengl3.cpp
        backends/imgui_impl_win32.cpp
)

target_include_directories(imgui_dll PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/backends
)

target_link_libraries(imgui_dll PUBLIC
        glfw
        opengl32
)

set_target_properties(imgui_dll
        PROPERTIES
        OUTPUT_NAME ImGui
)

add_custom_command(
        TARGET imgui_dll POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:imgui_dll>
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods"
)

