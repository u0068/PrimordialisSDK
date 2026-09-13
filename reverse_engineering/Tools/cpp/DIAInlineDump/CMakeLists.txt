cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)

add_executable(DIAInlineDump main.cpp)

target_include_directories(DIAInlineDump PRIVATE
        "C:/Program Files/Microsoft Visual Studio/18/Insiders/DIA SDK/include"
)

target_link_libraries(DIAInlineDump PRIVATE
        "C:/Program Files/Microsoft Visual Studio/18/Insiders/DIA SDK/lib/amd64/diaguids.lib"
        nlohmann_json
        )