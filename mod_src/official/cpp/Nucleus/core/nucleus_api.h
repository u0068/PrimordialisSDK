#pragma once
#include "nucleus_interface.h"
#include "resolution_manager.h"
#include "hook_manager.h"
#include "logging.h"
#include "module_manager.h"
#include "mods.h"

#include "math_utils.h"
#include "cells.h"
#include "general.h"
#include "mutations.h"
#include "threads.h"
#include "ui.h"
#include "../shared/enums.h"

inline Nucleus api
{
    .CreateHook = CreateHook,
    .hook_chains = {},
    .GetCurrentContext = GetCurrentContext,
    .SetCurrentContext = SetCurrentContext,

    .RegisterModule = RegisterModule,
    .GetModule = GetModule,

    .IsThreadSafe = IsThreadSafe,
    .LaneSync = LaneSync,

    .GetExtraFields = GetExtraFields,
    .PowerCell = PowerCell,
    .AddCellDescription = AddCellDescription,
    .SetCellNameAndDesc = SetCellNameAndDesc,

    .HashId = HashId,
    .AngleDifference = AngleDifference,
    .AngleTo = AngleTo,

    .ResolveSymbol = ResolveSymbol,
    .Log = Log,
    .AddTranslation = AddTranslation,
    .UintToStr = UintToStr,


    .profile_path = ModParser::profile_path.string().c_str()
};
