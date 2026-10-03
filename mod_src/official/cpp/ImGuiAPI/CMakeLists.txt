set(MOD_NAME)
get_filename_component(MOD_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)

add_cpp_mod(${MOD_NAME}
        main.cpp

        ASSETS
            info/
)

target_include_directories(${MOD_NAME} PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(${MOD_NAME} PRIVATE
        imgui
)