#pragma once
#include <fstream>
#include <iostream>

#include "enums.h"
#include "generated/game_functions/essential.h"

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

// Writes to the primoridalis log
// There is almost no reason to use this instead of P::Log(), which prints to both console and mod_log.txt
inline int PrimordialisLog(std::string text) {
    return Game::log_printf(text.c_str());
}

// I cant get this to actually work for some reason. I think ghidra is lying to me about something.
// Prints to the in-game display
// template<typename... Args>
// int GamePrint(std::string format, Args... args) {
//     auto *context = GetContext();
//     auto &buffer = context->game_buffer;
//     return snprintf(buffer.buffer, buffer.end - buffer.buffer, format.c_str(), args...);
// }

inline void BringConsoleToFront() {
    // Get the handle to the console window
    HWND hConsole = GetConsoleWindow();
    if (!hConsole) return;

    // Restore window if it is minimized
    ShowWindow(hConsole, SW_RESTORE);

    // Attempt to bring to foreground
    if (!SetForegroundWindow(hConsole)) {
        // Fallback: Flash the taskbar button to alert the user
        FLASHWINFO fw = {sizeof(fw), hConsole, FLASHW_ALL | FLASHW_TIMERNOFG, 3, 0};
        FlashWindowEx(&fw);
    }
}

// Brings the console to the front and pauses the game, to demand attention to the error
inline void AttentionToConsole() {
    BringConsoleToFront();
    system("pause");
}

class TeeBuf : public std::streambuf {
public:
    TeeBuf(std::streambuf* a, std::streambuf* b)
        : a(a), b(b) {}

protected:
    std::streamsize xsputn(const char* s, const std::streamsize count) override {
        const auto a_written = a->sputn(s, count);
        const auto b_written = b->sputn(s, count);

        if (a_written != count || b_written != count) {
            return 0;
        }

        return count;
    }

    int_type overflow(const int_type c) override {
        if (c == traits_type::eof()) {
            return traits_type::not_eof(c);
        }
        if (a and a->sputc(traits_type::to_char_type(c)) == traits_type::eof()) {
            return traits_type::eof();
        }
        if (b and b->sputc(traits_type::to_char_type(c)) == traits_type::eof()) {
            return traits_type::eof();
        }
        return c;
    }

    int sync() override {
        return a->pubsync() == 0 &&
               b->pubsync() == 0
                   ? 0
                   : -1;
    }

private:
    std::streambuf* a;
    std::streambuf* b;
};

static std::ofstream log_file("mod_log.txt");

static TeeBuf log_buffer(
    // nullptr, nullptr
    std::cout.rdbuf(),
    log_file.rdbuf()
);

static std::ostream tee_log(&log_buffer);

inline void Log(const char* message, int color = COL_NORMAL, bool important = false) {
    const HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO info{};
    const bool has_console =
            console != INVALID_HANDLE_VALUE &&
            GetConsoleScreenBufferInfo(console, &info);

    if (has_console)
        SetConsoleTextAttribute(console, color);

    tee_log << message;
    tee_log.flush();

    if (has_console)
        SetConsoleTextAttribute(console, info.wAttributes);

    if (important) {
        AttentionToConsole();
    }
}

inline void ELog(const char* message, int color = COL_ERROR) {
    Log(message, color, true);
}