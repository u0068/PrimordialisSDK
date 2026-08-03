#pragma once

template<typename... Args>
void PlasmidLog(Args... args)
{
    char buffer[2048];
    sprintf_s(buffer,  args...);
    printf("[PLASMID (%s)]\n  %s", MOD_NAME, buffer);
}