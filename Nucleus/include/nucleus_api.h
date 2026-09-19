#pragma once
#include "internal/nucleus_interface.h"
#include "resolution_manager.h"
#include "hook_manager.h"
#include "module_manager.h"

inline Nucleus api
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
