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

    set_target_properties(${NAME}
            PROPERTIES
            OUTPUT_NAME ${NAME}
    )

    set(MOD_DIR "${MODS_DIR}/${NAME}")

    add_custom_command(TARGET ${NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E make_directory
            "${MOD_DIR}"

            COMMAND ${CMAKE_COMMAND} -E copy
            "$<TARGET_FILE:${NAME}>"
            "${MOD_DIR}"
    )

    foreach(ASSET ${MOD_ASSETS})
        add_custom_command(TARGET ${NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_CURRENT_SOURCE_DIR}/${ASSET}"
                "${MOD_DIR}"
        )
        target_sources(${NAME} PRIVATE
                "${CMAKE_CURRENT_SOURCE_DIR}/${ASSET}"
        )
    endforeach()
endfunction()

# Auto-detect mods
file(GLOB MODS CONFIGURE_DEPENDS
        RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        *)

set(MOD_TARGETS)

foreach(MOD ${MODS})
    message("Found mod: ${MOD}")
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${MOD})
        add_subdirectory(${MOD})
        get_filename_component(MOD_NAME ${MOD} NAME)
        list(APPEND MOD_TARGETS ${MOD_NAME})
    endif()
endforeach()

add_custom_target(BuildAllMods)

if(MOD_TARGETS)
    add_dependencies(BuildAllMods ${MOD_TARGETS})
endif()