cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)

project(Luazyme)

add_executable(Luazyme
        luazyme.cpp)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/Luazyme.exe
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis"
        COMMENT "Copying Luazyme.exe to Primordialis"
)