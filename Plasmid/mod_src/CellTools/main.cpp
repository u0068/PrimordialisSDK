#define MOD_NAME "Cell Tools"

#include "plasmid_api.h"
#include "imgui_setup.h"

namespace P = APIUtil;

void P::OnInitMaterials() {}

void P::InitialiseMod()
{
    Log("Hello World!\n");
    do_imgui_hooks();
}
