#pragma once
#include <MinHook.h>
#include <windows.h>
#include "nucleus_interface.h"
#include "logging.h"

#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

inline std::ofstream log_file("plasmid_log.txt");

inline TeeBuf log_buffer(
    std::cout.rdbuf(),
    log_file.rdbuf()
);

inline std::ostream console_log(&log_buffer);

inline LogStream LogSourced(const std::string& source)
{
    return LogStream(
        console_log,
        "[" + source + "]\n  "
    );
}

inline LogStream Log()
{
    return LogSourced(
        "NUCLEUS"
    );
}

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

inline int PrimordialisLog(std::string text) { return reinterpret_cast<int(*)(const char*)>(ResolveSymbol("log_printf"))(text.c_str()); }

inline bool HookWrapper(void* target, void* hook, void** trampoline)
{
    // Log("Attempting Hooking address %p\n", target);

    auto status = MH_CreateHook(
        target,
        hook,
        trampoline);

    if (status != MH_OK)
    {
        Log()<<"MH_CreateHook failed: "<<status<<"\n";
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK)
    {
        Log()<<"MH_EnableHook failed: "<<status<<"\n";
        return false;
    }

    // Log("Hooking successful!\n\tTarget: %p\n\tHook: %p\n\tTrampoline: %p\n", target, hook, trampoline);

    return true;
}

inline void* CreateHook(const char* name, void* hook){

    void* target = ResolveSymbol(name);
    void* trampoline = nullptr;

    Log()<<"Creating hook for "<<name<<" at "<<target<<" to "<<hook<<"\n";

    HookWrapper(
        target,
        hook,
        &trampoline
    );

    return trampoline;
}

inline thread_local void* current_context;

inline void* GetCurrentContext()
{
    return current_context;
}

inline void SetCurrentContext(void* context)
{
    current_context = context;
}

Nucleus api
{
    ResolveSymbol,
    CreateHook,
    {},
    GetCurrentContext,
    SetCurrentContext,
    LogSourced
};