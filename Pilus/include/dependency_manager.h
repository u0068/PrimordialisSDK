#pragma once
#include <unordered_set>

inline void SortDeps();

inline bool ValidateDeps();

inline void EnableDeps();

inline bool MoveMod(int mod_idx, int direction, std::unordered_set<int> group={});
