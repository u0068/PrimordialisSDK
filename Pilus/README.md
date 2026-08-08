# Pilus Modloader
A WIP modloader for Primordialis C++ and Lua mods using the Nucleus and Plasmid APIs.

## AIMS:
- Make making and loading mods as easy as possible
## TODO:
- Automatically detect the presence of Nucleus and the PDB, and download them if absent.
- Download updates for Pilus, Mods, Nucleus and PDB
- Versioning for everything.
- Organise code into separate files
- Switch to DearImgui
- Exclude Nucleus from modlist reordering
- Fix bugs:
  - Subscript out of range crash
  - Can't close through CLion
## DONE:
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
