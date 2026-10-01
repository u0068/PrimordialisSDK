#pragma once
#include "nucleus_interface.h"
#include "resolution_manager.h"
#include "hook_manager.h"
#include "logging.h"
#include "module_manager.h"
#include "mods.h"

inline Nucleus api
{
    CreateHook,
    {},
    GetCurrentContext,
    SetCurrentContext,
    RegisterModule,
    GetModule,
    ResolveSymbol,
    Log,
    ModParser::profile_path.string().c_str()
};
