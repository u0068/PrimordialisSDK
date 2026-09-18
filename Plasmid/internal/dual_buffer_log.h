#pragma once
#include <windows.h>
#include <filesystem>
#include <sstream>
#include <streambuf>
#include <iostream>
#include <fstream>

namespace fs = std::filesystem;

class DualBuf : public std::streambuf {
public:
    DualBuf(std::streambuf *a, std::streambuf *b)
        : a(a), b(b) {}

protected:
    std::streamsize xsputn(const char *s, const std::streamsize count) override {
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
    std::streambuf *a;
    std::streambuf *b;
};

// Windows console color pallete colors
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

    MUTED_COL = GRAY,
    NORMAL_COL = WHITE,
    ERROR_COL = LIGHT | RED,
    WARNING_COL = YELLOW,
    SUCCESS_COL = LIGHT | GREEN,
    CRITICAL_COL = FOREGROUND * BLACK | BACKGROUND * ERROR_COL,
};

class LogStream {
public:
    LogStream(
        std::ostream &output,
        std::string prefix,
        std::string suffix = "\n",
        COLOR color = NORMAL_COL
    )
        : output(output),
          prefix(std::move(prefix)),
          suffix(std::move(suffix)),
          color(color) {}

    ~LogStream() {
        Write();
    }

    template<typename T>
    LogStream &operator<<(const T &value) {
        buffer << value;
        return *this;
    }

private:
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

    std::ostream &output;
    std::string prefix;
    std::string suffix;
    COLOR color;
    std::stringstream buffer;
};
