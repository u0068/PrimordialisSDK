#pragma once
#include "log_setup.h"
#include <MinHook.h>

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
