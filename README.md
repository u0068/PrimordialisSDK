Primordialis SDK is a modding SDK for Primordialis.
# Contents:
- Pilus Modloader (DEPRECATED)
- Nucleus Modloader + runtime api
- Plasmid C++ Modding API
- Mods:
  - Various official and example mods
- Lua:
  - Luasome Lua Modding API
- Reverse Engineering:
  - Ghidra Scripts
  - Decompiled game code
  - Misc SDK dev tools
  - PDB parser (WIP)

## Expect bugs and breaking changes.
Everything is in very early development and will break sooner or later.

# Loading Mods into Primordialis:
To load mods into Primordialis, its recommended that you use the [Gale Mod Manager](https://github.com/Kesomannen/gale).\
Support for R2ModMan is coming soon!\
For developing mods, it may be more convenient to use the raw Nucleus modloader, with the (now deprecated) Pilus modloader gui, which are avaiable in releases.

# Making Mods:
To make mods, you need the Plasmid Modding API source code, and any IDE that can build
C++ shared libraries such as [Visual Studio](https://visualstudio.microsoft.com/), [VSCode](https://code.visualstudio.com/), or [CLion](https://www.jetbrains.com/clion/).\
I recommend CLion, as it has excellent C++ support and should work out-of-the-box.\
**Release build mods are not compatible with Debug build mods!\
Make sure that all mods you are loading have matching build modes configurations.**\
Support for other languages (C, C#, Lua, Python, jai) is planned.\
You can download Plasmid.zip from releases, clone the entire SDK repo,
or use the following git commands to get only Plasmid, mod source code, and dependencies:
```bash
git clone --filter=blob:none --sparse --recurse-submodules https://github.com/u0068/PrimordialisSDK
cd PrimordialisSDK
git sparse-checkout add Plasmid
git sparse-checkout add mod_src
git sparse-checkout add third_party
```
To peek into the game's code, use a decompiler, such as [Ghidra](http://ghidra.net/).\
Load the Primordialis PDB before decompiling, by following the steps given in the
Ghidra Docs (or just search it up).\
Primordialis is compiled with clang version 22.1.8\
We decompile the SSE3 exe rather than the AVX exe, because it tends to be more readable.\
If a function fails to decompile, try using a different build, such as the AVX exe,
or a different version of the game.\
Some decompiled functions are already in `PrimordialisSDK/Decompiled`.\
Share your decompiled functions by putting them in there and pushing to the repo.\
**Warning: Interpreting decompiled code is not for the faint of heart!**\
Use this invite to join the Primordialis Server and get the Modder role:\
https://discord.gg/AB48c9tZ57
# Contributing to the SDK
To contribute, clone the entire repo:
```bash
git clone --recurse-submodules https://github.com/you/PrimordialisSDK
```
Alternatively, you can sparsely checkout only the parts you want to contribute to.\
For example, this is how you would only get the Plasmid source code,
without anything else. 
```bash
git clone --filter=blob:none --sparse --recurse-submodules https://github.com/u0068/PrimordialisSDK.git
cd PrimordialisSDK
git sparse-checkout add Plasmid
```
Use this invite to join the Primordialis Server and get the Mod SDK Dev role:\
https://discord.gg/Fz5RaRBNj8
## CONTRIBUTION POLICY:
- Everything must be as simple to use and understand as possible, both for the users and maintainers.
- Code must be organised and documented.
- Commits must be small and focused.
- Commit messages must concisely and adequately describe the changes made.
- Ask for help if you need any.
## AI USE POLICY:
- AI here refers to any generative models such as LLMs.
- This only applies to contributing to the development of the SDK. You can freely use AI for making your own mods. 
- Contributing using AI is allowed as long as it is used **responsibly**.
- ### Examples of responsible AI use:
  - Using AI for anything where you are the only person who will see the output.
  - Asking AI to explain how to do something, e.g. using CMake, Ghidra, Git, etc
  - Asking AI to explain what a piece of code does.
  - Asking AI to teach you programming concepts, e.g. C++ templates, pointers, references, etc
  - Using AI to generate **simple** pieces of code.
  - Using AI to generate boilerplate code.
  - Using AI to make minor edits to code.
  - Using AI to find bugs.
  - Using AI to **help** design systems, e.g. a hook management system
    - AI usually overcomplicates things, and writes much more code than it needs,
      which puts a large burden on maintainers.\
      If the AI's output seems complicated, that's usually because it is, and must be simplified.
    - If you don't know how to design most of the system yourself, you don't have a good enough
      understanding of it to verify that the AI's output is good.\
      Ask a human for help.
  - If you are unsure if your use of AI is responsible, ask a key contributor.
- ### Examples of irresponsible AI use:
  - Pushing AI code without reviewing it entirely.
  - Pushing AI code that you don't understand.
    - If you don't understand it, that is because:
      - It is overcomplicated, and must be simplified.
      - It uses programming concepts you don't understand. Ask a human or AI for help.
      - You don't have a good enough grasp on what you are trying to do. Ask a human for help.
        <br><br>
- All code made with the help of AI must be clearly disclosed as such, for example:
  - ```c++
    // Generated by ChatGPT
    void ExampleFunction(){}
  - ```c++
    // Generated by Gemini and edited by [USERNAME]
    void ExampleFunction(){}
  - ```c++
    // Made by [USERNAME] and edited by Claude Code
    void ExampleFunction(){}
  - ```c++
    // Made by [USERNAME] and ChatGPT
    void ExampleFunction(){}

# TO-DO:
- Make tutorials for:
  - Loading mods
  - Making mods
  - Contributing to the SDK
  - Multilanguage support

See the README.md's inside the projects for their TO-DO lists.
# DONE:
- Put Ghidra scripts in SDK repo (DONE)
- Improve error messages everywhere
