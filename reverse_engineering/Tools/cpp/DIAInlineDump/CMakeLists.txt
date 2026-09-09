cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)

add_executable(DIAInlineDump main.cpp)

target_include_directories(DIAInlineDump PUBLIC
        "C:/Program Files/Microsoft Visual Studio/18/Insiders/DIA SDK/include"
        "../../../third_party")

target_link_libraries(DIAInlineDump PUBLIC
        "C:/Program Files/Microsoft Visual Studio/18/Insiders/DIA SDK/lib/amd64/diaguids.lib")