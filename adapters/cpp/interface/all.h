#pragma once
#include <filesystem>
#include <windows.h>

#include "interface/cells.h"
#include "interface/creatures.h"
#include "interface/general.h"
#include "interface/hook_manager.h"
#include "interface/logstream.h"
#include "interface/module_manager.h"
#include "interface/symbol_resolver.h"

#include "../generated/game_functions/essential.h"
#include "../generated/globals.h"

// The namespace for all the plasmid stuff
namespace A {
    inline fs::path mod_path;

    // You must implement this in your mod!
    // The implementation should hook your functions to game functions, for example:
    // void P::InitialiseMod() {
    //     Hook<"init_materials_list">(OnInitMats);
    // }
    inline void InitialiseMod();
};

extern"C" __declspec(dllexport)
inline void Initialise(Nucleus *api, const char *mod_path, const char *mod_name) {
    nucleus = api;
    A::mod_path = mod_path;
    A::mod_name = mod_name;
    A::Internal::ALog(COL_MUTED) << "Initialised Adapter!";
    A::InitialiseMod();
    A::Log(COL_MUTED) << "Initialised Mod!";
}