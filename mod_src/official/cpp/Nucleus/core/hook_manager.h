#pragma once
#include "include/plasmid_log.h"
#include <MinHook.h>

inline void InitMinHook() {
    if (MH_Initialize() != MH_OK) {
        Game::Log(COL_CRITICAL) << "MinHook init failed";
        Game::Log(COL_ERROR) << "Mods will not work!";
        Game::AttentionToConsole();
        return;
    }
    Game::Log(COL_MUTED) << "MinHook initialized";
}

inline bool HookWrapper(void* target, void* hook, void** trampoline) {

    auto status = MH_CreateHook(
        target,
        hook,
        trampoline);

    if (status != MH_OK) {
        Game::Log(COL_ERROR) << "MH_CreateHook failed: " << status;
        if (status == MH_ERROR_FUNCTION_NOT_FOUND) {
            Game::Log(COL_ERROR) << "Specified function was not found!";
        }
        else if (status == MH_ERROR_NOT_EXECUTABLE) {
            Game::Log(COL_ERROR) << "Specified function is not executable!";
        }
        else if (status == MH_ERROR_UNSUPPORTED_FUNCTION) {
            Game::Log(COL_ERROR) << "Specified function cannot be hooked!";
        }
        Game::AttentionToConsole();
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK) {
        Game::Log(COL_ERROR) << "MH_EnableHook failed: " << status;
        if (status == MH_ERROR_FUNCTION_NOT_FOUND) {
            Game::Log(COL_ERROR) << "Specified function was not found!";
        }
        else if (status == MH_ERROR_NOT_EXECUTABLE) {
            Game::Log(COL_ERROR) << "Specified function is not executable!";
        }
        else if (status == MH_ERROR_UNSUPPORTED_FUNCTION) {
            Game::Log(COL_ERROR) << "Specified function cannot be hooked!";
        }
        Game::AttentionToConsole();
        return false;
    }

    return true;
}

inline void* CreateHook(const char* name, void* hook) {
    void* target = ResolveSymbol(name);
    void* trampoline = nullptr;

    Game::Log(COL_MUTED) << "Creating hook for " << name << " at " << target << " to " << hook;

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
