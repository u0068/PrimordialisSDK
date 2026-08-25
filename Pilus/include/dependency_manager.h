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
        if (mod.is_enabled())
            for (auto dep : GetModDeps(mod))
                dep->dep_enabled = true;
}

// inline std::unordered_map<std::string, int> CountAllRefs()
// {
//     std::unordered_map<std::string, int> ref_map{};
//     for (auto& mod : ModManager::mods)
//         if (mod.is_enabled())
//             for (auto dep : GetModDeps(mod))
//                 ref_map[dep->name]++;
//     return ref_map;
// }
//
// inline void SortDeps()
// {
//     auto ref_map = CountAllRefs();
//     for (auto& mod : ModManager::mods)
//     {
//
//     }
// }

inline void SortDeps()
{
    for (auto& mod : ModManager::mods)
        if (mod.is_enabled())
            for (auto dep : GetModDeps(mod))
                if (dep > &mod)
                    std::iter_swap(dep, &mod);
}