#pragma once
#include "nucleus_interface.h"
#include "logstream.h"

template<typename T>
T* GetModule(const std::string& name) {
    P::Log(COL_MUTED) << "Getting module: " << name;
    void* module = nucleus->GetModule(name);
    if (module) {
        return static_cast<T *>(module);
    }
    P::ELog(COL_ERROR) << "Error: Module " << name << " not found!"
            "\nMake sure that the name is spelled correctly, "
            "and the mod that defines the module is loaded before all mods that use it.";
    return nullptr;
}

inline void RegisterModule(const std::string& name, void* module) {
    P::Log(COL_INFO) << "Registering module: " << name;
    nucleus->RegisterModule(name, module);
}
