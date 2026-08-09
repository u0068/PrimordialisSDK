cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)

project(Pilus)

add_subdirectory(external/SFML)

add_executable(Pilus WIN32
        src/modloader_main.cpp
        src/modloader.h
        src/injector.cpp
        src/ui.cpp
        src/modmanager.cpp
        src/update.cpp
        src/update.h
)

target_link_libraries(Pilus PRIVATE
        SFML::Graphics
        winhttp
        bcrypt
)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/Pilus.exe
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis"
        COMMENT "Copying Pilus.exe to Primordialis"
)

project(PilusUpdater)

add_executable(PilusUpdater
        src/pilus_updater.cpp
)

target_compile_features(PilusUpdater PRIVATE cxx_std_20)

target_link_libraries(PilusUpdater PRIVATE
        kernel32
)

set_target_properties(PilusUpdater PROPERTIES
        WIN32_EXECUTABLE TRUE
)