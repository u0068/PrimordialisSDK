set(MOD_NAME)
get_filename_component(MOD_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)

add_plasmid_mod(${MOD_NAME}
        main.cpp

        ASSETS
            lua/
)

target_link_libraries(${MOD_NAME} PRIVATE
        ${CMAKE_SOURCE_DIR}/third_party/lua/lib/lua51.lib
        lua_headers
        yaml-cpp::yaml-cpp
)