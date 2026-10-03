cmake_minimum_required(VERSION 3.5)

add_library(AdapterCPP INTERFACE)

target_compile_features(AdapterCPP INTERFACE cxx_std_20)

target_compile_definitions(AdapterCPP INTERFACE
        NOMINMAX
)

target_include_directories(AdapterCPP
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
        mod_src/official/cpp/Nucleus/shared
)