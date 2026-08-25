#pragma once
#include "modloader.h"

inline std::vector<Mod*> GetModDeps(Mod& mod)
{
    std::vector<Mod*> deps{};
    for (auto& dep : mod.info["dependencies"].items())
        for (auto& other : ModManager::mods)
            if (other.name == dep.key())
                deps.push_back(&other);
    return deps;
}

inline void EnableDeps()
{
    for (auto& mod : ModManager::mods)
        mod.dep_enabled = false;
    for (auto& mod : ModManager::mods)
        if (mod.user_enabled)
            for (auto dep : GetModDeps(mod))
                dep->dep_enabled = true;
}