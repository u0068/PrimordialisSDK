#pragma once
#include <string>
#include <unordered_map>

inline std::unordered_map<std::string, void*> modules{};

inline void RegisterModule(std::string name, void* module)
{
    modules[name] = module;
}

inline void* GetModule(std::string name)
{
    auto it = modules.find(name);
    return it != modules.end() ? it->second : nullptr;
}