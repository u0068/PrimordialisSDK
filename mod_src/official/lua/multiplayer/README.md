# Multiplayer Mod
This mod adds very basic multiplayer, held together by duct tape and hot glue.
Local multiplayer by default, use steam remote play to play online (see end of this file for more details).

### Limitations:
- Extra Players need to share the Host's screen and keyboard.
- Extra Players can't control seeking, they seek at the host by default.
- Extra Players can't edit their own body plan directly so they must either be possessed by the Host to change their bodyplan, or copy the Host's bodyplan using a keybind.
  - Turning on "Switch bodyplan when possessing" in the settings would make using multiple bodyplans much more convenient
  - Extra Players can't automatically change their bodyplan's forward direction through the "copy bodyplan" keybind, that must be done in the editor instead.
- Extra Players can't pick up cells, mutations or xp.
- Survival mode needs you to find naturally spawning extra players.

## How to use:
Set up your desired binds and mutations\
Spawn Extra Players from the bottom of the creature list\
Use the binds you set in config to move the Extra Players\
In sandbox, ask the Host to possess the Extra Player to edit their bodyplan\
Alternatively, press the COPY_BODYPLAN bind to copy the body plan of the Host (only copies living cells)\
If there is no overlap between the Host's and Extra Player's body plan when copying, the Extra Player will be instantly killed.

## Configuration:
At the moment, you need to manually edit the mod's config file to configure the mod.

## How to use remote play with primordialis:
Just move the `steam_appid.txt` file from the mod folder into your `steamapps/common/Primordialis` folder and launch the game directly from `primordialis.exe`\
Launching the game through steam will not work.\
Only the host needs to do this.\
The other players don't need to have Primodialis because thats how remote play works.