#pragma once
#include "nucleus_interface.h"
#include "resolution_manager.h"
#include "hook_manager.h"
#include "module_manager.h"

inline int PrimordialisLog(std::string text) { return reinterpret_cast<int(*)(const char*)>(ResolveSymbol("log_printf"))(text.c_str()); }

Nucleus api
{
    ResolveSymbol,
    CreateHook,
    {},
    GetCurrentContext,
    SetCurrentContext,
    LogSourced,
    RegisterModule,
    GetModule
};