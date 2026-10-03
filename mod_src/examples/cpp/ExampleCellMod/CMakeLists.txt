set(MOD_NAME)
get_filename_component(MOD_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)

# Put your source code files here:
add_cpp_mod(${MOD_NAME}
        main.cpp

        ASSETS
            info/
)

# Put your included directories here:
target_include_directories(${MOD_NAME} PUBLIC
        materials
)