#pragma once
#include <fstream>
#include <iostream>
#include <dual_buffer_log.h>

inline std::string err = "[ERROR]: ";

inline std::ostream& GetDualLog()
{
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
        "[" + source + "]\n  "
    );
}

inline LogStream Log()
{
    return LogSourced("NUCLEUS");
}