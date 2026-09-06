#pragma once
#include "loader_logging.h"
#include <windows.h>
#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

inline void InitDbgHelp()
{
    static std::once_flag flag;
    std::call_once(flag, []()
    {
        SymSetOptions(
            SYMOPT_UNDNAME |
            SYMOPT_DEFERRED_LOADS);

        if (!SymInitialize(
            GetCurrentProcess(),
            nullptr,
            TRUE))
        {
            Log() << "SymInitialize failed: "<<GetLastError()<<"\n";
        }

        Log()<<"DbgHelp initialized\n";
    });
}

inline void* ResolveSymbol(const char* name)
{
    void* addr;
    // Log("Resolving Symbol %s\n", name);

    char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
    memset(buffer, 0, sizeof(buffer));

    auto* symbol = reinterpret_cast<SYMBOL_INFO*>(buffer);

    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
    symbol->MaxNameLen = MAX_SYM_NAME;

    if (!SymFromName(GetCurrentProcess(), name, symbol))
    {
        Log()<<"Failed to resolve symbol '"<<name<<"': "<<GetLastError()<<"\n";
        std::abort();
        return nullptr;
    }
    addr = reinterpret_cast<void*>(symbol->Address);
    if (addr == nullptr)
    {
        Log()<<"Failed to resolve symbol '"<<name<<"': "<<GetLastError()<<"\n";
        std::abort();
    }
    // Log("Successfully resolved symbol '%s' at address %p\n",
    //     name,
    //     addr
    // );
    return addr;
}
