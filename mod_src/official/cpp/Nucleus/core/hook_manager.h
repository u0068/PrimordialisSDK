#pragma once
#include <MinHook.h>
#include "logging.h"

inline void InitMinHook() {
    if (MH_Initialize() != MH_OK) {
        A::Log(COL_CRITICAL) << "MinHook init failed";
        A::Log(COL_ERROR) << "Mods will not work!";
        AttentionToConsole();
        return;
    }
    A::Log(COL_MUTED) << "MinHook initialized";
}

inline bool HookWrapper(void* target, void* hook, void** trampoline) {

    auto status = MH_CreateHook(
        target,
        hook,
        trampoline);

    if (status != MH_OK) {
        A::Log(COL_ERROR) << "MH_CreateHook failed: " << status;
        if (status == MH_ERROR_FUNCTION_NOT_FOUND) {
            A::Log(COL_ERROR) << "Specified function was not found!";
        }
        else if (status == MH_ERROR_NOT_EXECUTABLE) {
            A::Log(COL_ERROR) << "Specified function is not executable!";
        }
        else if (status == MH_ERROR_UNSUPPORTED_FUNCTION) {
            A::Log(COL_ERROR) << "Specified function cannot be hooked!";
        }
        AttentionToConsole();
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK) {
        A::Log(COL_ERROR) << "MH_EnableHook failed: " << status;
        if (status == MH_ERROR_FUNCTION_NOT_FOUND) {
            A::Log(COL_ERROR) << "Specified function was not found!";
        }
        else if (status == MH_ERROR_NOT_EXECUTABLE) {
            A::Log(COL_ERROR) << "Specified function is not executable!";
        }
        else if (status == MH_ERROR_UNSUPPORTED_FUNCTION) {
            A::Log(COL_ERROR) << "Specified function cannot be hooked!";
        }
        AttentionToConsole();
        return false;
    }

    return true;
}

inline void* CreateHook(const char* name, void* hook) {
    void* target = ResolveSymbol(name);
    void* trampoline = nullptr;

    A::Log(COL_MUTED) << "Creating hook for " << name << " at " << target << " to " << hook;

    HookWrapper(
        target,
        hook,
        &trampoline
    );

    return trampoline;
}

inline DWORD current_context_fls = FLS_OUT_OF_INDEXES;

inline void InitHookContextStorage()
{
    current_context_fls = FlsAlloc(nullptr);

    if (current_context_fls == FLS_OUT_OF_INDEXES) {
        P::ELog() << "FLS_OUT_OF_INDEXES";
    }
}

inline void* GetCurrentContext()
{
    return FlsGetValue(current_context_fls);
}

inline void SetCurrentContext(void* context)
{
    FlsSetValue(current_context_fls, context);
}