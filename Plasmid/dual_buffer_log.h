#pragma once
#include <sstream>
#include <streambuf>
#include <iostream>
#include <fstream>

namespace fs = std::filesystem;

class DualBuf : public std::streambuf
{
public:
    DualBuf(std::streambuf* a, std::streambuf* b)
        : a(a), b(b)
    {
    }

protected:
    std::streamsize xsputn(const char* s, std::streamsize count) override
    {
        const auto a_written = a->sputn(s, count);
        const auto b_written = b->sputn(s, count);

        if (a_written != count || b_written != count)
            return 0;

        return count;
    }

    int_type overflow(int_type c) override
    {
        if (c == traits_type::eof())
            return traits_type::not_eof(c);

        if (a and a->sputc(traits_type::to_char_type(c)) == traits_type::eof())
            return traits_type::eof();

        if (b and b->sputc(traits_type::to_char_type(c)) == traits_type::eof())
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

class LogStream
{
public:
    LogStream(std::ostream& output, std::string prefix, std::string suffix="\n")
        : output(output), prefix(std::move(prefix)), suffix(std::move(suffix))
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
        output << prefix << buffer.str() << suffix;
        output.flush();
    }

    std::ostream& output;
    std::string prefix;
    std::string suffix;
    std::stringstream buffer;
};