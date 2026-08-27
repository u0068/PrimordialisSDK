#pragma once
#include <unordered_set>

#include "mod_loader.h"

inline std::vector<Mod*> GetModDeps(Mod& mod)
{
    std::vector<Mod*> deps{};
    for (auto& dep : mod.get_deps().items())
        for (auto& other : ModManager::mods)
            if (other.name == dep.key())
                console_log << other.name << "\n";
    return deps;
}

inline std::vector<int> GetModDepIndices(Mod& mod)
{
    std::vector<int> deps{};
    for (auto& dep : mod.get_deps().items())
        for (int idx=0; idx<ModManager::mods.size(); idx++)
            if (ModManager::mods[idx].name == dep.key())
                deps.push_back(idx);
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

inline void SortDeps()
{
    for (auto& mod : ModManager::mods)
        for (auto dep : GetModDeps(mod))
            if (dep > &mod)
                std::iter_swap(dep, &mod);
}

inline bool DependsOn(int mod_idx, int dependency)
{
    for (auto dep : GetModDeps(ModManager::mods[mod_idx]))
    {
        if (dep == &ModManager::mods[dependency])
            return true;
    }

    return false;
}

inline bool IsDependentOf(int mod_idx, int dependency)
{
    return DependsOn(mod_idx, dependency);
}

inline void CollectDependencies(
    int mod_idx,
    std::unordered_set<int>& result)
{
    for (auto dep : GetModDepIndices(ModManager::mods[mod_idx]))
        if (result.insert(dep).second)
            CollectDependencies(dep, result);
}

inline void CollectDependents(
    int mod_idx,
    std::unordered_set<int>& result)
{
    for (int idx=0; idx<ModManager::mods.size(); idx++)
        if (DependsOn(idx, mod_idx) && result.insert(idx).second)
            CollectDependents(idx, result);
}

inline bool MoveMod(int mod_idx, int direction, std::unordered_set<int> group={})
{
    auto& mods = ModManager::mods;

    group.insert(mod_idx);

    if (direction < 0)
        CollectDependencies(mod_idx, group);
    else
        CollectDependents(mod_idx, group);

    int next = mod_idx + direction;

    if (next < 0 || next >= mods.size())
        return false;

    if (group.contains(next))
    {
        MoveMod(next, direction, group);
        return false;
    }

    std::swap(mods[mod_idx], mods[next]);
    return true;
}

inline bool ValidateDeps()
{
    for (int mod_idx=0; mod_idx<ModManager::mods.size(); mod_idx++)
        for (int dep_idx : GetModDepIndices(ModManager::mods[mod_idx]))
            if (dep_idx > mod_idx)
                return false;
    return true;
}