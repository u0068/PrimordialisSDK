#pragma once

struct NucleusRuntimeAPI
{
    void (*Log)(const char*);
    void* (*ResolveSymbol)(const char*);
    void* (*CreateHook)(const char* name, void* detour);
};