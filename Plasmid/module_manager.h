#pragma once
#include "nucleus_interface.h"

namespace P
{
    template<typename T>
    T* GetModule(const std::string& name)
    {
        Log() << "Getting module: " << name << "\n";
        void* module = nucleus->GetModule(name);
        if (module)
            return static_cast<T*>(module);
        Log() << "Error: Module " << name << " not found!"
                "\nMake sure that the name is spelled correctly,"
                "and the mod that defines the module is before all mods that use it.\n";
        return nullptr;
    }

    inline void RegisterModule(const std::string& name, void* module)
    {
        Log() << "Registering module: " << name << "\n";
        nucleus->RegisterModule(name, module);
    }
}