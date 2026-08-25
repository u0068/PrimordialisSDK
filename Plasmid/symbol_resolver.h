#pragma once
#include "nucleus_interface.h"

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
    T* ptr = nullptr;
    std::once_flag flag;

    T& Ref()
    {
        std::call_once(flag, [&]()
        {
            ptr = Resolve<T*>(name);
            if (!ptr)
                std::abort();

        });
        return *ptr;
    }

public:

    explicit ResolvedData(const char* name)
        : name(name)
    {}

    operator T&()
    {
        return Ref();
    }

    T* operator->()
    {
        return &Ref();
    }

    ResolvedData& operator=(const T& value)
    {
        Ref() = value;
        return *this;
    }
};