#include "lua.h"
#include "lauxlib.h"
#include "log_setup.h"
#include "mod_loader.h"
#include "include/primordialis_log.h"

void LuaInitHook(lua_State *L) {
    luaL_loadfile(L, (ModManager::luasome_path/"pre.lua").string().c_str());
    luaL_loadfile(L, "data/scripts/init.lua");
    luaL_loadfile(L, (ModManager::luasome_path/"post.lua").string().c_str());
    int error = 0;
    error = lua_pcall(L, 0, 0, 0);
    if (error) {
        auto error_string = lua_tostring(L, -1);
        P::PrimordialisLog(std::format("lua warning: {}\n", error_string));
        P::Log(COL_WARNING) << "lua warning: " << error_string;
    }
}

void ModManager::DoLuaInitHook() {
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