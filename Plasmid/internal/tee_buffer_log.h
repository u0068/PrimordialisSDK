#pragma once
#include <windows.h>
#include <filesystem>
#include <sstream>
#include <streambuf>
#include <iostream>
#include <fstream>

namespace fs = std::filesystem;

// Windows console color palette colors
enum COLOR {
    FOREGROUND = 0x01, // Redundant. Usage: (FOREGROUND * RED)
    BACKGROUND = 0x10, // Usage: (BACKGROUND * RED)

    BLACK = 0x0,
    BLUE = 0x1,
    GREEN = 0x2,
    RED = 0x4,
    LIGHT = 0x8,

    WHITE = RED | GREEN | BLUE,
    YELLOW = RED | GREEN,
    CYAN = GREEN | BLUE,
    MAGENTA = BLUE | RED,
    GRAY = LIGHT | BLACK,

    COL_MUTED = GRAY,
    COL_NORMAL = WHITE,
    COL_ERROR = LIGHT | RED,
    COL_WARNING = YELLOW,
    COL_SUCCESS = LIGHT | GREEN,
    COL_CRITICAL = FOREGROUND * (LIGHT | YELLOW) | BACKGROUND * RED,
};

namespace P {
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

    namespace Internal {
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

        class LogStream {
        public:
            LogStream(
                std::ostream& output,
                std::string prefix,
                std::string suffix = "\n",
                const int color = COL_NORMAL,
                const bool important = false
            )
                : output(output),
                  prefix(std::move(prefix)),
                  suffix(std::move(suffix)),
                  color(color),
                  important(important) {}

            ~LogStream() {
                Write();
                if (important) {
                    AttentionToConsole();
                }
            }

            template<typename T>
            LogStream& operator<<(const T& value) {
                buffer << value;
                return *this;
            }

            void Write() {
                const HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

                CONSOLE_SCREEN_BUFFER_INFO info{};
                const bool has_console =
                        console != INVALID_HANDLE_VALUE &&
                        GetConsoleScreenBufferInfo(console, &info);

                if (has_console)
                    SetConsoleTextAttribute(console, color);

                output << prefix << buffer.str() << suffix;
                output.flush();

                if (has_console)
                    SetConsoleTextAttribute(console, info.wAttributes);
            }

        private:
            std::ostream& output;
            std::string prefix;
            std::string suffix;
            const int color;
            const bool important;
            std::stringstream buffer;
        };
    }
}