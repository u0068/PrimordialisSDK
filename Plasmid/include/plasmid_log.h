#pragma once
#include "nucleus_interface.h"

template<typename... Args>
void PlasmidLog(Args... args)
{
    char buffer[128];
    sprintf_s(buffer,  "PLASMID (%s)", MOD_NAME);
    LogTemplate(buffer, args...);
}