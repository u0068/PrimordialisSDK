add_library(lua_headers INTERFACE)

target_include_directories(lua_headers INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/headers
)