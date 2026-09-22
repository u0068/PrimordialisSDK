#pragma once
#include "include/plasmid_log.h"
#include <mutex>
#include <windows.h>
#include <dbghelp.h>

#pragma comment(lib, "dbghelp.lib")

inline void InitDbgHelp() {
    static std::once_flag flag;
    std::call_once(flag, []() {
        SymSetOptions(
            SYMOPT_UNDNAME |
            SYMOPT_DEFERRED_LOADS);

        if (!SymInitialize(
            GetCurrentProcess(),
            nullptr,
            TRUE)) {
            P::Log(COL_CRITICAL) << "SymInitialize failed: " << GetLastError();
        }

        P::Log(COL_MUTED) << "DbgHelp initialized";
    });
}

inline void* ResolveSymbol(const char* name) {
    void* addr;

    char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
    memset(buffer, 0, sizeof(buffer));

    auto* symbol = reinterpret_cast<SYMBOL_INFO *>(buffer);

    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
    symbol->MaxNameLen = MAX_SYM_NAME;

    if (!SymFromName(GetCurrentProcess(), name, symbol)) {
        P::Log(COL_CRITICAL) << "Failed to resolve symbol '" << name << "': " << GetLastError();
        P::AttentionToConsole();
        return nullptr;
    }
    addr = reinterpret_cast<void *>(symbol->Address);
    if (addr == nullptr) {
        P::Log(COL_CRITICAL) << "Failed to resolve symbol '" << name << "': " << GetLastError();
        P::AttentionToConsole();
    }
    return addr;
}
