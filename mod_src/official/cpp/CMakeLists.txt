
set(MOD_TARGETS)
add_mod_targets_from_this_dir(MOD_TARGETS)

set(BuildAllTargetName BuildAllOfficialMods)

add_custom_target(${BuildAllTargetName})

if(MOD_TARGETS)
    add_dependencies(${BuildAllTargetName} ${MOD_TARGETS})
endif()