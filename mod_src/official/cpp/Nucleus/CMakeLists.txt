
add_plasmid_mod(Nucleus
        src/main.cpp
        src/mod_parser.cpp

        ASSETS
            info/
)

target_link_libraries(Nucleus
        PRIVATE Plasmid
)

target_include_directories(Nucleus PRIVATE
        include/
)

target_compile_definitions(Nucleus PRIVATE
        NOMINMAX
)

target_link_libraries(Nucleus PRIVATE
        minhook
        yaml-cpp::yaml-cpp
        miniz
)