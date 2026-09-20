#pragma once
#include <filesystem>
#include <windows.h>

// Pretty much every mod will need these so ill include them in the api header
#include "include/hook_manager.h"
#include "include/module_manager.h"
#include "include/threads.h"
#include "include/math.h"
#include "include/cells.h"
#include "include/creatures.h"
#include "include/ui.h"
#include "include/mutations.h"
// #include "include/general.h"

#include "generated/game_functions/essential.h"
#include "generated/globals.h"

// The namespace for all the plasmid stuff
namespace P {
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
    P::mod_path = mod_path;
    P::mod_name = mod_name;
    P::translation_values.reserve(2048);
    P::Internal::PlasmidLog(COL_MUTED) << "Initialised Plasmid!";
    P::InitialiseMod();
    P::Log(COL_MUTED) << "Initialised Mod!";
}
