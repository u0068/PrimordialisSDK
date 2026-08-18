#pragma once
#include <sstream>
#include <streambuf>>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

class TeeBuf : public std::streambuf
{
public:
    TeeBuf(std::streambuf* a, std::streambuf* b)
        : a(a), b(b)
    {
    }

protected:
    int_type overflow(int_type c) override
    {
        if (c == traits_type::eof())
            return traits_type::not_eof(c);

        const char ch = traits_type::to_char_type(c);

        if (a->sputc(ch) == traits_type::eof())
            return traits_type::eof();

        if (b->sputc(ch) == traits_type::eof())
            return traits_type::eof();

        return c;
    }

    int sync() override
    {
        return a->pubsync() == 0 &&
               b->pubsync() == 0
            ? 0
            : -1;
    }

private:
    std::streambuf* a;
    std::streambuf* b;
};

inline std::stringstream console_buffer;
inline std::ofstream file_log("pilus_log.txt");

inline TeeBuf log_buffer(
    console_buffer.rdbuf(),
    file_log.rdbuf()
);

inline std::ostream console_log(&log_buffer);
const std::string err{"[ERROR]\t"};
