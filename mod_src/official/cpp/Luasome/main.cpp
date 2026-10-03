#pragma once
#include <format>
#include <lua.hpp>
#include <plasmid_api.h>
#include <include/primordialis_log.h>
#include "yaml-cpp/yaml.h"
#include "internal/nucleus_interface.h"
#include "generated/game_functions/misc.h"

void RunLuaFile(lua_State *L, const std::filesystem::path& path) {
    // P::Log(COL_MUTED) << "Running " << path.filename();

    int error = luaL_loadfile(L, path.string().c_str());

    if (error != 0) {
        const char *message = lua_tostring(L, -1);

        P::PrimordialisLog(
            std::format("lua warning: {}\n", message)
        );

        P::ELog() << "lua warning: " << message;

        lua_pop(L, 1);
        return;
    }

    error = lua_pcall(L, 0, 0, 0);

    if (error != 0) {
        const char *message = lua_tostring(L, -1);

        P::PrimordialisLog(
            std::format("lua warning: {}\n", message)
        );

        P::ELog() << "lua warning: " << message;

        lua_pop(L, 1);
    }
};

int gamelua_get_mods_dir(lua_State* L)
{
    lua_pushstring(L, P::mod_path.parent_path().string().c_str());
    return 1; // Lua C functions need to return int
}

int gamelua_get_own_dir(lua_State* L)
{
    lua_pushstring(L, P::mod_path.string().c_str());
    return 1;
}

int gamelua_log(lua_State* L)
{
    int color = lua_gettop(L) > 1 ? (int)lua_tointeger(L, 2) : COL_NORMAL;
    P::Log(color) << lua_tostring(L, 1);
    return 1;
}

int gamelua_elog(lua_State* L)
{
    int color = lua_gettop(L) > 1 ? (int)lua_tointeger(L, 2) : COL_ERROR;
    P::ELog(color) << lua_tostring(L, 1);
    return 1;
}

void LuaInitHook(lua_State *L) {
    // P::Log() << "LuaInitHook L = " << L;

    lua_pushcfunction(L, gamelua_get_mods_dir);
    lua_setfield(L, LUA_GLOBALSINDEX, "get_mods_dir");
    lua_pushcfunction(L, gamelua_get_own_dir);
    lua_setfield(L, LUA_GLOBALSINDEX, "get_own_dir");
    lua_pushcfunction(L, gamelua_log);
    lua_setfield(L, LUA_GLOBALSINDEX, "log");
    lua_pushcfunction(L, gamelua_elog);
    lua_setfield(L, LUA_GLOBALSINDEX, "elog");

    RunLuaFile(L, P::mod_path / "pre.lua");
    P::Next<void>(L);
    RunLuaFile(L, P::mod_path / "post.lua");
}

void SaveLuaModlist() {
    std::ofstream file(P::mod_path/"mod_list.lua");

    if (!file) {
        P::ELog() << "mod_list.lua not found!";
        return;
    }

    file.clear();
    file << "LUA_MODLOADER_MOD_LIST = {\n";

    // YAML::Node mods_yml = YAML::LoadFile((nucleus->profile_path / "mods.yml").string());
    // for (std::size_t i = 0; i < mods_yml.size(); i++) {
    //     if (mods_yml[i]["enabled"].as<bool>() and mods_yml[i]["is_lua"].as<bool>()) {
    //         file << "\t\"" << mods_yml[i]["name"] << "\",\n";
    //     }
    // }
    for (const auto& entry: fs::recursive_directory_iterator(P::mod_path.parent_path())) {
        if (!entry.is_regular_file()) {
            continue;
        }
        auto filename = entry.path().filename().string();
        if (filename == "init.lua") {
            const std::string name = entry.path().parent_path().filename().string();
            P::Log(COL_MUTED) << "Found lua mod " << name;
            file << "\t\"" << name << "\",\n";
        }
    }

    file << "}";
    file.close();
}

// Force reload lua once on startup
static bool has_reinited{false};
void reinit_game_hook(P::window_t *window) {
    has_reinited = true;
    P::Next<void>(window);
}
void update_game_hook(P::window_t *window) {
    P::Next<void>(window);

    if (not has_reinited) {
        window->frame_input.pressed_buttons[0xe] = 0x10;
    }
}

inline void P::InitialiseMod() {
    P::autoreload = true;
    SaveLuaModlist();
    P::Hook<"run_lua_init_script">(LuaInitHook);
    P::Hook<"update_window">(update_game_hook);
    P::Hook<"reinit_game">(reinit_game_hook);
}