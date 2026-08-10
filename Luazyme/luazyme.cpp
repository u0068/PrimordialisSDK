#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <regex>
#include <windows.h>
#include <winbase.h>

namespace fs = std::filesystem;

void copy_directory_recursively(const fs::path& src, const fs::path& dest) {
    try {
        copy(src, dest, fs::copy_options::recursive | fs::copy_options::overwrite_existing);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void PatchInitLua(fs::path init_lua_path)
{
    fs::path temp_init_lua_path = init_lua_path.parent_path() / "init.temp";

    std::ifstream init_file;
    std::ofstream temp_init_file;
    init_file.open(init_lua_path);
    temp_init_file.open(temp_init_lua_path);

    std::string init_content, line;
    while (std::getline(init_file, line)) {
        init_content += line + "\n";
    }

    std::cout << "Converting mod...\n";

    std::string data_path_string = "data/scripts/lua_mods/";
    std::size_t pos = init_content.find(data_path_string);
    if (pos != std::string::npos)
    {
        init_content.erase(pos, data_path_string.length());
    }
    std::cout << "Mod path converted.\n";

    std::string api_version_string = "api_version = ";
    init_content.replace(init_content.find(api_version_string), api_version_string.length()+1, "api_version = 6");
    std::cout << "Mod API version updated.\n";

    init_file.close();

    temp_init_file << init_content;
    temp_init_file.close();

    fs::remove(init_lua_path);
    fs::rename(temp_init_lua_path, init_lua_path);
}

void main()
{
    std::cout << "Welcome to Luazyme!\n";

    fs::path legacy_mod_path = fs::current_path() / "data/scripts/lua_mods/mods";
    fs::path luasome_mod_path = fs::current_path() / "mods";

    if (!exists(legacy_mod_path))
    {
        std::cout
            << "Legacy mod path not found!\n"
            << "Make sure that Luazyme.exe is in the Primordialis folder in your steam library\n";
        std::system("pause");
        return;
    }
    if (!exists(luasome_mod_path))
    {
        std::cout
            << "Luasome mod path not found!\n"
            << "Make sure that Pilus modloader is set up and Luazyme.exe is in the Primordialis folder in your steam library\n";
        std::system("pause");
        return;
    }

    std::cout << "Start converting your Legacy Lua mods to Luasome mods:\n";
    // std::system("pause");

    for (const auto& entry : fs::directory_iterator(legacy_mod_path))
    {
        std::string mod_name = entry.path().filename().stem().string();
        std::cout << "Found Mod: " << mod_name << "\n";

        std::cout << "Convert " << mod_name << " to Luasome? (Y/N): ";
        std::string accept;
        std::cin >> accept;
        if (accept != "y" && accept != "Y")
        {
            std::cout << "Skipping mod conversion.\n";
            continue;
        }

        fs::path new_mod_path = luasome_mod_path / mod_name;
        copy_directory_recursively(entry.path(), new_mod_path);

        PatchInitLua(new_mod_path / "init.lua");
    }

    std::cout << "Finished!\n";
    std::system("pause");
}