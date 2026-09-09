# Auto-detect tools
file(GLOB TOOLS CONFIGURE_DEPENDS
        RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        *)

foreach(TOOL ${TOOLS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${TOOL})
        add_subdirectory(${TOOL})
    endif()
endforeach()