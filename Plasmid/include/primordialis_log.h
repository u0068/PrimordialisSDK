#pragma once
#include "plasmid_api.h"

namespace P {
    // Writes to the primoridalis log
    // There is almost no reason to use this instead of P::Log(), which prints to both console and mod_log.txt
    inline int PrimordialisLog(std::string text) {
        return log_printf(text.c_str());
    }

    // I cant get this to actually work for some reason. I think ghidra is lying to me about something.
    // Prints to the in-game display
    // template<typename... Args>
    // int GamePrint(std::string format, Args... args) {
    //     auto *context = GetContext();
    //     auto &buffer = context->game_buffer;
    //     return snprintf(buffer.buffer, buffer.end - buffer.buffer, format.c_str(), args...);
    // }
}
