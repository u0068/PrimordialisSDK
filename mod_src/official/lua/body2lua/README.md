# Body2Lua
Adds console/api commands to convert creature bodies to lua tables and back.\
Intended for making modding body-plan changing creatures easy.\
Probably doesn't work well with combos, I'll fix that eventually.\
Not to be confused with bod2lua by Gunno, which converts .bod files to lines of lua code
## Documentation
- `body2lua(string filename = "temp.lua", int body_id = player_body_id)`
  - Saves the living cells of the specified body to the specified file. Uses the player body and temp.lua if not specified.

- `lua2body(string filename = "temp.lua", int body_id = player_body_id)`
  - Places the cells from specified file onto the specified body. Uses the player body and temp.lua if not specified.
## Examples
- `body2lua()`
    - Saves the player's body to temp.lua
- `lua2body()`
    - Loads the cells from temp.lua into the player's body
- `body2lua("funky_fish.lua")`
  - Saves the player's body to funky_fish.lua
- `lua2body("funky_fish.lua")`
  - Loads funky_fish.lua to the player's body
- `body2lua("funky_fish.lua", 1234)`
    - Saves the body with id 1234 to funky_fish.lua
- `lua2body("funky_fish.lua", 1234)`
    - Loads funky_fish.lua to the body with id 1234
