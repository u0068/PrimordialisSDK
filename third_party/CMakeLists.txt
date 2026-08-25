# Auto-detect deps
file(GLOB DEPS CONFIGURE_DEPENDS
        RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        *)

foreach(DEP ${DEPS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${DEP})
        add_subdirectory(${DEP})
    endif()
endforeach()