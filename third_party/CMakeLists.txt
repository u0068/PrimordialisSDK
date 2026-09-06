# Auto-detect deps
file(GLOB DEPS CONFIGURE_DEPENDS
        RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
        *)

foreach(DEP ${DEPS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${DEP})
        add_subdirectory(${DEP})
    endif()
endforeach()

# Fetch the rest
include(FetchContent)

FetchContent_Declare(
        yaml-cpp
        GIT_REPOSITORY https://github.com/jbeder/yaml-cpp.git
        GIT_TAG master
)
FetchContent_Declare(
        minhook
        GIT_REPOSITORY https://github.com/TsudaKageyu/minhook.git
        GIT_TAG master
)
FetchContent_MakeAvailable(
        yaml-cpp
        minhook
)