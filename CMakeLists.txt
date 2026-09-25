cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(PrimordialisSDK)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

function(add_subdirectory_if_exists dir)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${dir}/CMakeLists.txt")
        add_subdirectory(${dir})
    endif()
endfunction()

add_subdirectory_if_exists(third_party)

add_subdirectory_if_exists(Plasmid)

add_subdirectory_if_exists(mod_src)

# If you just want to make mods, you probably wont need the stuff below

add_subdirectory_if_exists(Pilus)

#add_subdirectory_if_exists(lua/Luasome)

add_subdirectory_if_exists(misc_tools/Luazyme)

add_subdirectory_if_exists(reverse_engineering/Tools/cpp)

add_subdirectory_if_exists(Nucleus)