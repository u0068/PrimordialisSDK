# Pilus Modloader
A WIP modloader for Primordialis C++ and Lua mods made using Luasome, Plasmid and Nucleus APIs.

## AIMS:
- Make making and loading mods as easy as possible
## TODO:
- Switch to DearImgui (DOING)
- Uninstaller
- Only run Luasome when starting the game through Pilus
- Ask before updating, auto-update setting.
- Compatibility detection.
- Download updates for Mods.
- Exclude Nucleus from modlist reordering
- Fix bugs:
  - Subscript out of range crash
  - Can't close through CLion
  - Corrupted config file causes memory leak
## DONE:
- Versioning for everything. (DONE)
- Make config use json for human readability (DONE)
- Luasome API support (DONE)
- Automatically detect the presence of correct PDB and Nucleus, and download if absent. (DONE)
- Automatically download updater and Nucleus (DONE)
- Pilus updater (DONE)
- Organise code into separate files (DONE)
- Start process suspended (DONE)
- Modlist (DONE)
- Basic UI (DONE)
  - Mod list editor (DONE)
    - Enable/Disable mods (DONE)
    - Change load order (DONE)
- Inject Mod DLLs (DONE)
  - 1 Hardcoded DLL (DONE)
  - DLL specified on modlist (DONE)
  - DLL from folder (DONE)
  - Multiple DLLs (DONE)
  - Mod config editor (DONE)
- Fixed Bugs:
