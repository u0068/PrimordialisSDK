#pragma once
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include "mod_loader.h"
#include <include/primordialis_log.h>

inline void LuaInitHook(lua_State *L) {
    auto run_file = [L](const std::filesystem::path& path) {
        int error = luaL_loadfile(L, path.string().c_str());

        if (error != 0) {
            const char *message = lua_tostring(L, -1);

            P::PrimordialisLog(
                std::format("lua warning: {}\n", message)
            );

            P::Log(COL_WARNING) << "lua warning: " << message;

            lua_pop(L, 1);
            return;
        }

        error = lua_pcall(L, 0, 0, 0);

        if (error != 0) {
            const char *message = lua_tostring(L, -1);

            P::PrimordialisLog(
                std::format("lua warning: {}\n", message)
            );

            P::Log(COL_WARNING) << "lua warning: " << message;

            lua_pop(L, 1);
        }
    };

    run_file(ModManager::luasome_path / "pre.lua");
    run_file("data/scripts/init.lua");
    run_file(ModManager::luasome_path / "post.lua");
}

inline void DoLuaInitHook() {
    P::Hook<"run_lua_init_script">(LuaInitHook);
}


// std::string ModConfigToLua(json config)
// {
//     std::stringstream lua;
//     lua << "\t{\n";
//     for (auto& el : config.items())
//         lua << "\t\t" << el.key() << " = " << el.value() << ",\n";
//     lua << "\t},\n";
//     return lua.str();
// }
//
// void ModManager::SaveLuaModlist() {
//     std::ofstream file(lua_mod_list_path);
//
//     if (!file) return;
//
//     file.clear();
//     file << "LUA_MODLOADER_MOD_LIST = {\n";
//
//     for (auto &mod: enabled_mods) {
//         // if (!mod.is_lua())
//         //     continue;
//         // if (!mod.user_enabled)
//         //     continue;
//         // if (mod.config_defaults.empty())
//         // {
//         file << "\t\"" << mod.name << "\",\n";
//         //     continue;
//         // }
//         //
//         // file << "\t{\"" << mod.name << "\",\n";
//         // file << ModConfigToLua(mod.config_values);
//         // file << "\t},\n";
//     }
//
//     file << "} -- Make sure that all mods are before this line!!!";
//     file.close();
// }