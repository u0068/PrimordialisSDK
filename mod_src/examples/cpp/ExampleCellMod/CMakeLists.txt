set(MOD_NAME)
get_filename_component(MOD_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)

# Put your source code files here:
add_plasmid_mod(${MOD_NAME}
        main.cpp
)

# Put your included directories here:
target_include_directories(${MOD_NAME} PUBLIC
        materials
)