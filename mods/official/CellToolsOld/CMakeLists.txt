set(MOD_NAME)
get_filename_component(MOD_NAME . NAME)

add_plasmid_mod(${MOD_NAME}
        main.cpp
)

target_link_libraries(${MOD_NAME} PRIVATE
        imgui
)