set(MOD_NAME)
get_filename_component(MOD_NAME . NAME)

add_plasmid_mod(${MOD_NAME}
        main.cpp

        ASSETS
        info.json
)

target_include_directories(${MOD_NAME} PRIVATE
        .
        ../ImGuiAPI
)

target_link_libraries(${MOD_NAME} PRIVATE
        imgui
)