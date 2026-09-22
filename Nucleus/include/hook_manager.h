#pragma once
#include "include/plasmid_log.h"
#include <MinHook.h>

inline void InitMinHook() {
    if (MH_Initialize() != MH_OK) {
        P::Log(COL_CRITICAL) << "MinHook init failed";
        return;
    }
    P::Log(COL_MUTED) << "MinHook initialized";
}

inline bool HookWrapper(void* target, void* hook, void** trampoline) {

    auto status = MH_CreateHook(
        target,
        hook,
        trampoline);

    if (status != MH_OK) {
        P::Log(COL_ERROR) << "MH_CreateHook failed: " << status;
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK) {
        P::Log(COL_ERROR) << "MH_EnableHook failed: " << status;
        return false;
    }

    return true;
}

inline void* CreateHook(const char* name, void* hook) {
    void* target = ResolveSymbol(name);
    void* trampoline = nullptr;

    P::Log(COL_MUTED) << "Creating hook for " << name << " at " << target << " to " << hook;

    HookWrapper(
        target,
        hook,
        &trampoline
    );

    return trampoline;
}

inline thread_local void* current_context;

inline void* GetCurrentContext() {
    return current_context;
}

inline void SetCurrentContext(void* context) {
    current_context = context;
}
