# Plasmid API
A WIP modding API for C++ mods, made for the [Pilus Modloader](https://github.com/u0068/Pilus)

## AIMS:
- C++ API (Plasmid)
- Runtime API (Nucleus)
- Extend the LUA API
## TODO:
- Lua API
- External mod config and assets
- Documentation
  - Examples
  - Tutorials
  - Comments
- Optimise if easy to do while remaining readable
- Hook functions
  - Simple hooks (DONE)
  - Multiple hooks per address (DONE)
  - Middleware
- Helper functions
  - mod_main() (DONE)
  - Cell creation (DONE)
- Organisation
  - Organise directories
  - Organise files
    - Make file names make sense
  - Organise code
  - Organise function resolutions
    - Easily find, enable/disable relevant functions to speed up build time
  - Organise data label resolutions
  - Organise data types
  - Ghidra script to output already organised stuff
  - Separate mod dev stuff from API dev (eg CMakeLists)
## DONE:
- Unscuff the super scuffed temporary solutions (DONE)
- Precompute relevant symbol ~~addresses~~ resolutions (DONE)
  - Functions (DONE)
  - Labels (DONE)
- Precompute data type definitions (DONE)
  - Structs (DONE)
  - Unions (DONE)
  - Enums (DONE)
- Make a DLL (DONE)
