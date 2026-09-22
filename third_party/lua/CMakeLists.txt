add_library(lua_headers INTERFACE
        headers/lua.hpp)

target_include_directories(lua_headers INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/headers
)