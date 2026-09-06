#pragma once
#include <dual_buffer_log.h>

inline std::ofstream log_file("mod_log.txt");

inline std::string err = "[ERROR]: ";

inline DualBuf log_buffer(
    std::cout.rdbuf(),
    log_file.rdbuf()
);

inline std::ostream console_log(&log_buffer);

inline LogStream LogSourced(const std::string& source)
{
    return LogStream(
        console_log,
        "[" + source + "]\n  "
    );
}

inline LogStream Log()
{
    return LogSourced(
        "NUCLEUS"
    );
}
