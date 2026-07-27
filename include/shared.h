#pragma once

struct NucleusRuntimeAPI
{
    void (*Log)(const char*);
    void* (*ResolveSymbol)(const char*);
    bool (*AddHook)(void*, void*);
};
