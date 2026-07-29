#pragma once
#include <cstdint>
#include <string>
#include <unordered_map>
#include <windows.h>
#include <vcruntime_typeinfo.h>
#include <vector>
#include "nucleus_interface.h"
#include "generated/data_types.h"

inline NucleusRuntimeAPI* nucleus;

extern"C" __declspec(dllexport)
inline void Initialise(NucleusRuntimeAPI* api)
{
    nucleus = api;
    printf("Mod Initialised!\n");
}