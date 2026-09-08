#pragma once
#include <fstream>
#include <iostream>
#include <dual_buffer_log.h>

inline std::string err = "[ERROR]: ";

static void InitConsole()
{
    if (!AllocConsole())
    {
        if (GetLastError() != ERROR_ACCESS_DENIED)
            return;
    }

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);
    freopen_s(&file, "CONOUT$", "w", stderr);

    // std::cout.clear();
    // std::cerr.clear();
}

inline std::ostream& GetDualLog()
{
    InitConsole();

    static std::ofstream log_file("mod_log.txt");

    static DualBuf log_buffer(
        std::cout.rdbuf(),
        log_file.rdbuf()
    );

    static std::ostream dual_log(&log_buffer);

    return dual_log;
}

inline LogStream LogSourced(const std::string& source)
{
    return LogStream(
        GetDualLog(),
        "[" + source + "]\n  ",
        "\n"
    );
}

inline LogStream Log()
{
    return LogSourced("NUCLEUS");
}