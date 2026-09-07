# Magnetic Field Visualiser mod
Spawn the blob to visualise magnetic fields.

## Default Settings, put this in mod_list.lua
```lua
	{ "magnetic_field_visualiser", {
		field_line_length = 100,	-- max length of the field lines
		field_line_step_size = 2,	-- distance between filed line dots
		field_line_count = 18,		-- number of field lines per update, works best with a multiple of 6 but not 4
		
		grid_mode = true,			-- spawn field lines in a grid instead of around each magnets. better for high magnet density
		grid_size = 16,				-- size of grid around visualiser
		grid_spacing = 3,			-- spacing between field spawners on grid
		grid_field_line_length = 3,	-- max length of grid field lines
		
		show_dir_fields = true,		-- show fields of directional (exposed) magnets
		show_z_fields = true,		-- show fields of z-facing (enclosed) magnets

		flow_speed = 4,				-- dot flow speed
		max_dot_size = 1/8,			-- max dot size
		dot_saturation = 0.5,		-- dot color saturation
		dot_opacity = 0.5,			-- dot opacity
		
		-- note that dir fields and z fields do not interact with each other.
	}},
```