#pragma once
#include <lua.hpp>
#include <plasmid_api.h>
#include <include/primordialis_log.h>
#include "yaml-cpp/yaml.h"
#include "internal/nucleus_interface.h"

void RunLuaFile(lua_State *L, const std::filesystem::path& path) {
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

void LuaInitHook(lua_State *L) {
    RunLuaFile(L, P::mod_path / "pre.lua");
    P::Next<void>(L);
    RunLuaFile(L, P::mod_path / "post.lua");
}

void SaveLuaModlist() {
    std::ofstream file(P::mod_path/"mod_list.lua");

    if (!file) return;

    file.clear();
    file << "LUA_MODLOADER_MOD_LIST = {\n";

    YAML::Node mods_yml = YAML::LoadFile((nucleus->profile_path / "mods.yml").string());
    for (std::size_t i = 0; i < mods_yml.size(); i++) {
        if (mods_yml[i]["enabled"].as<bool>() and mods_yml[i]["is_lua"].as<bool>()) {
            file << "\t\"" << mods_yml[i]["name"] << "\",\n";
        }
    }

    file << "}";
    file.close();
}

inline void P::InitialiseMod() {
    SaveLuaModlist();
    P::Hook<"run_lua_init_script">(LuaInitHook);
}