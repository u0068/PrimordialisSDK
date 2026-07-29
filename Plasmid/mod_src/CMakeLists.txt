# Add mod and copy to mods folder
function(add_plasmid_mod NAME)

    add_library(${NAME} SHARED
            ${ARGN}
    )

    target_link_libraries(${NAME}
            PRIVATE Plasmid
    )

    set_target_properties(${NAME}
            PROPERTIES
            OUTPUT_NAME ${NAME}
    )

    add_custom_command(
            TARGET ${NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:${NAME}>
            "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods"
    )

endfunction()

# Auto-detect mods
file(GLOB MODS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/*)

foreach(MOD ${MODS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${MOD})
        add_subdirectory(${MOD})
    endif()
endforeach()
