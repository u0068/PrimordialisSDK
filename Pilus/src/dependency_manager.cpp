#pragma once
#include "mod_loader.h"
#include "dependency_manager.h"

inline std::vector<Mod *> GetModDeps(Mod& mod) {
    std::vector<Mod *> deps{};
    for (auto& dep: mod.get_deps().items())
        for (auto& other: ModParser::mods)
            if (other.name == dep.key())
                deps.push_back(&other);
    return deps;
}

inline std::vector<int> GetModDepIndices(Mod& mod) {
    std::vector<int> deps{};
    for (auto& dep: mod.get_deps().items())
        for (int idx = 0; idx < ModParser::mods.size(); idx++)
            if (ModParser::mods[idx].name == dep.key())
                deps.push_back(idx);
    return deps;
}

inline void EnableDeps() {
    for (auto& mod: ModParser::mods)
        mod.dep_enabled = false;
    for (auto& mod: ModParser::mods)
        if (mod.is_enabled())
            for (auto dep: GetModDeps(mod))
                dep->dep_enabled = true;
}

inline void SortDeps() {
    for (auto& mod: ModParser::mods)
        for (auto dep: GetModDeps(mod))
            if (dep > &mod)
                std::iter_swap(dep, &mod);
}

inline bool DependsOn(int mod_idx, int dependency) {
    for (auto dep: GetModDeps(ModParser::mods[mod_idx])) {
        if (dep == &ModParser::mods[dependency])
            return true;
    }

    return false;
}

inline bool IsDependentOf(int mod_idx, int dependency) {
    return DependsOn(mod_idx, dependency);
}

inline void CollectDependencies(
    int mod_idx,
    std::unordered_set<int>& result) {
    for (auto dep: GetModDepIndices(ModParser::mods[mod_idx]))
        result.insert(dep).second;
    // if (result.insert(dep).second)
    //     CollectDependencies(dep, result);
}

inline void CollectDependents(
    int mod_idx,
    std::unordered_set<int>& result) {
    for (int idx = 0; idx < ModParser::mods.size(); idx++)
        if (DependsOn(idx, mod_idx) && result.insert(idx).second)
            CollectDependents(idx, result);
}

inline bool MoveMod(int mod_idx, int direction, std::unordered_set<int> group) {
    auto& mods = ModParser::mods;

    group.insert(mod_idx);

    if (direction < 0)
        CollectDependencies(mod_idx, group);
    else
        CollectDependents(mod_idx, group);

    int next = mod_idx + direction;

    if (next < 0 || next >= mods.size())
        return false;

    if (group.contains(next)) {
        MoveMod(next, direction, group);
        return false;
    }

    std::swap(mods[mod_idx], mods[next]);
    return true;
}

inline bool ValidateDeps() {
    for (int mod_idx = 0; mod_idx < ModParser::mods.size(); mod_idx++)
        for (int dep_idx: GetModDepIndices(ModParser::mods[mod_idx]))
            if (dep_idx > mod_idx)
                return false;
    return true;
}
