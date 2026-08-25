#pragma once
#include "nucleus_interface.h"
#include "resolving.h"
#include "hooking.h"

inline int PrimordialisLog(std::string text) { return reinterpret_cast<int(*)(const char*)>(ResolveSymbol("log_printf"))(text.c_str()); }

Nucleus api
{
    ResolveSymbol,
    CreateHook,
    {},
    GetCurrentContext,
    SetCurrentContext,
    LogSourced
};