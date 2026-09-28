#pragma once
#include <fstream>
#include <iostream>
#include <internal/tee_buffer_log.h>

inline std::string err = "[ERROR]: ";

static void InitConsole() {
    if (!AllocConsole()) {
        if (GetLastError() != ERROR_ACCESS_DENIED) {
            return;
        }
    }

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);
    freopen_s(&file, "CONOUT$", "w", stderr);

    // std::cout.clear();
    // std::cerr.clear();
}

inline std::ostream& GetTeeLog() {
    static std::ofstream log_file("mod_log.txt");

    static P::Internal::TeeBuf log_buffer(
        // nullptr, nullptr
        std::cout.rdbuf(),
        log_file.rdbuf()
    );

    static std::ostream dual_log(&log_buffer);

    return dual_log;
}

inline P::Internal::LogStream LogSourced(const std::string& source, const int color = COL_NORMAL, const bool important = false) {
    return {
        GetTeeLog(),
        "[" + source + "]\n  ",
        "\n",
        color,
        important
    };
}
