set(MOD_NAME)
get_filename_component(MOD_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)

add_plasmid_mod(${MOD_NAME}
        main.cpp
)

target_include_directories(${MOD_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(${MOD_NAME} PRIVATE
        imgui
)