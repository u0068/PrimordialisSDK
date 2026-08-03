#pragma once

template<typename... Args>
void PlasmidLog(Args... args)
{
    char buffer[128];
    sprintf_s(buffer,  "PLASMID (%s)", MOD_NAME);
    LogTemplate(buffer, args...);
}