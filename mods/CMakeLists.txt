# Add mod and copy to mods folder

set(MODS_DIR "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods")

function(add_plasmid_mod NAME)
    cmake_parse_arguments(
            MOD
            ""
            ""
            "ASSETS"
            ${ARGN}
    )

    add_library(${NAME} SHARED
            ${MOD_UNPARSED_ARGUMENTS}
    )

    target_link_libraries(${NAME}
            PRIVATE Plasmid
    )

    set(MOD_DIR "${MODS_DIR}/${NAME}")

    set_target_properties(${NAME}
            PROPERTIES
            OUTPUT_NAME ${NAME}
            #            RUNTIME_OUTPUT_DIRECTORY ${MOD_DIR}
    )

    add_custom_command(TARGET ${NAME} PRE_BUILD
            COMMAND ${CMAKE_COMMAND} -E make_directory
            "${MOD_DIR}"
    )
    add_custom_command(TARGET ${NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            "$<TARGET_FILE:${NAME}>"
            "${MOD_DIR}"
    )

    foreach(ASSET ${MOD_ASSETS})
        set(ASSET_PATH
                "${CMAKE_CURRENT_SOURCE_DIR}/${ASSET}"
        )

        set_property(
                DIRECTORY
                APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
                "${ASSET_PATH}"
        )

        file(COPY
                "${ASSET_PATH}"
                DESTINATION "${MOD_DIR}"
        )
    endforeach()
endfunction()

add_subdirectory(official/cpp)
add_subdirectory(examples/cpp)