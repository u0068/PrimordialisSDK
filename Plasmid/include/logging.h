#pragma once
#include <sstream>
#include <streambuf>
#include <filesystem>
#include <fstream>
#include <iostream>

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

inline std::ofstream file_log("plasmid_log.txt");

inline TeeBuf log_buffer(
    std::cout.rdbuf(),
    file_log.rdbuf()
);

inline std::ostream console_log(&log_buffer);
const std::string err{"[ERROR]\t"};

class LogStream
{
public:
    LogStream(std::ostream& output, std::string prefix)
        : output(output), prefix(std::move(prefix))
    {
    }

    ~LogStream()
    {
        Write();
    }

    template<typename T>
    LogStream& operator<<(const T& value)
    {
        buffer << value;
        return *this;
    }

private:
    void Write()
    {
        output << prefix << buffer.str();
        output.flush();
    }

    std::ostream& output;
    std::string prefix;
    std::stringstream buffer;
};

LogStream LogSourced(const std::string& source)
{
    return LogStream(
        console_log,
        "[" + source + "]\n  "
    );
}