#pragma once
#include <mutex>
#include <windows.h>
#include <dbghelp.h>
#include <psapi.h>

#include "enums.h"
#include "interface/logstream.h"

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
            A::ELog(COL_CRITICAL) << "SymInitialize failed: " << GetLastError() << "\n"
                                      << "Mods will not work!\n"
                                         "This error may be caused by loading 2 instances of Nucleus";
        }

        A::Log(COL_MUTED) << "DbgHelp initialized";
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
        A::ELog(COL_CRITICAL) << "Failed to resolve symbol '" << name << "': " << GetLastError();
        return nullptr;
    }
    addr = reinterpret_cast<void *>(symbol->Address);
    if (addr == nullptr) {
        A::ELog(COL_CRITICAL) << "Failed to resolve symbol '" << name << "': " << GetLastError();
    }
    return addr;
}

inline uint64_t GetModuleBaseAddress(const char* moduleName) {
    HMODULE hModule = GetModuleHandleA(moduleName);
    if (!hModule) return 0;

    MODULEINFO modInfo;
    if (GetModuleInformation(GetCurrentProcess(), hModule, &modInfo, sizeof(MODULEINFO))) {
        return (uint64_t)modInfo.lpBaseOfDll;
    }
    return 0;
}

// Fragile, unsafe workaround until I find a better way to resolve local functions
template<typename T>
T ResolveRVA(int rva) {
    return reinterpret_cast<T>(nucleus->GAME_BASE + rva);
}