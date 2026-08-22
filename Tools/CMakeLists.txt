
# Auto-detect tools
file(GLOB TOOLS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/*)

set(TOOL_TARGETS)

foreach(TOOL ${TOOLS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${TOOL})
        add_subdirectory(${TOOL})
        get_filename_component(TOOL_NAME ${TOOL} NAME)
        list(APPEND TOOL_TARGETS ${TOOL_NAME})
    endif()
endforeach()