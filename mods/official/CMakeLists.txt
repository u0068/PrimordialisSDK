# Auto-detect mods
file(GLOB ../../lua/mods CONFIGURE_DEPENDS
        RELATIVE ..
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