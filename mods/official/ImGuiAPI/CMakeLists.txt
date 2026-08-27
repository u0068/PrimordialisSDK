set(MOD_NAME)
get_filename_component(MOD_NAME . NAME)

add_plasmid_mod(${MOD_NAME}
        main.cpp

        ASSETS
        info.json
        ImGui.dll
)

target_include_directories(${MOD_NAME} PUBLIC
        .
)

target_link_libraries(${MOD_NAME} PRIVATE
        imgui
)