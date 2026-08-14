# Pilus Modloader
A WIP modloader for Primordialis C++ and Lua mods made using Luasome, Plasmid and Nucleus APIs.

## AIMS:
- Make making and loading mods as easy as possible
## TODO:
- Save and load modlists
  - Modlists contain mod configs (DONE)
- Restore mod .zip support
- Uninstaller
- Only run Luasome when starting the game through Pilus
- Ask before updating, auto-update setting.
- Compatibility detection.
- Download updates for Mods.
- Fix bugs:
  - Subscript out of range crash
  - Corrupted config file causes memory leak
## DONE:
- Exclude Nucleus from modlist reordering (DONE)
- Switch to DearImgui (DOING)
  - Modlist (DONE)
    - Drag to reorder (DONE)
    - Checkbox to enable (DONE)
    - Config button (DONE)
  - Start game (DONE)
  - Mod info (DONE)
  - Mod config (DONE)
  - Make it all pretty (DONE)
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
  - Can't close through CLion (DONE)
