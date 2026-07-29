#pragma once
#include "plasmid_init.h"

template<typename T>
T& Resolve(const char* name)
{
    static std::unordered_map<std::string, T> cache;

    auto& addr = cache[name];

    if (!addr)
        addr = reinterpret_cast<T>(nucleus->ResolveSymbol(name));

    return addr;
}

template<typename T>
class ResolvedData
{
    const char* name;
    T value{};

public:

    explicit ResolvedData(const char* n)
        : name(n)
    {}

    // Leave this implicit
    operator T()
    {
        if (!value)
            value = Resolve<T>(name);

        return value;
    }
};