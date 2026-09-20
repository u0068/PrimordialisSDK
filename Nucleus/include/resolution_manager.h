#pragma once
#include "log_setup.h"
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
            NLog(COL_ERROR) << "SymInitialize failed: " << GetLastError();
        }

        NLog(COL_MUTED) << "DbgHelp initialized";
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
        NLog(COL_ERROR) << "Failed to resolve symbol '" << name << "': " << GetLastError();
        std::abort();
        return nullptr;
    }
    addr = reinterpret_cast<void *>(symbol->Address);
    if (addr == nullptr) {
        NLog(COL_ERROR) << "Failed to resolve symbol '" << name << "': " << GetLastError();
        std::abort();
    }
    return addr;
}
