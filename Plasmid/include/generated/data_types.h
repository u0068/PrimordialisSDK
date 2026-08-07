#pragma once

#include <windows.h>
#include "typedefs.h"

struct DName;
struct DNameNode;
struct HGLRC__;
struct HWND__;
struct IAudioClient;
struct IAudioRenderClient;
struct IMMDevice;
struct _RTL_SRWLOCK;
struct acid_particle_16;
struct biome_core;
struct biome_edge;
struct biome_entrance;
struct biome_modifier;
struct biome_node;
struct biome_type;
struct body;
struct bone;
struct boss_gate;
struct boss_part_t;
struct bounding_box_2;
struct cachedint;
struct cell;
struct cell_item;
struct cell_pickup;
struct circle_render_info;
struct color_swatch_render_info;
struct command_result_t;
struct contact;
struct creature_spawner;
struct doorway;
struct draggable_button;
struct explosion_render_info;
struct explosion_t;
struct id_index;
struct lane_group_t;
struct laser_t;
struct light_reciever_t;
struct lightning_emitter;
struct lightning_t;
struct line_render_info;
struct link_attractor_t;
struct looping_sound;
struct lua_State;
struct magnetic_field_t;
struct memory_manager;
struct mutation_item;
struct mutation_pickup;
struct particle_pusher_t;
struct particle_t;
struct plan_cell;
struct profiler_frame;
struct queued_sound;
struct radiant_render_info;
struct real_2;
struct real_3;
struct real_4;
struct render_context;
struct room_t;
struct saved_body_plan;
struct sound_t;
struct stashed_body_plan;
struct static_button;
struct static_cell;
struct stbtt__active_edge;
struct stbtt__hheap_chunk;
struct stbtt_packedchar;
struct stbtt_vertex;
struct tWAVEFORMATEX;
struct trace_node;
struct trace_t;
struct translation_list;
struct tss_ptd;
struct tunnel_tile;
struct uint8_4;
struct undo_state;
struct user_input;
struct workshop_body_plan;

struct real_2
{
    union
    {
        struct
        {
            float x;
            float y;
        };
        float data[2];
    };
};
struct real_3
{
    union
    {
        struct
        {
            float x;
            float y;
            float z;
        };
        real_2 xy;
        struct
        {
            float __x0;
            real_2 yz;
        };
        float data[3];
    };
};
struct real_4
{
    union
    {
        struct
        {
            float x;
            float y;
            float z;
            float w;
        };
        real_2 xy;
        struct
        {
            float __x0;
            real_2 yz;
        };
        real_3 xyz;
        struct
        {
            float _x0;
            real_3 yzw;
        };
        float data[4];
    };
};
struct arc_render_info
{
    real_3 x;
    real_2 d0;
    real_2 d1;
    float R;
    float r;
    real_4 color;
};
struct final_boss_state
{
    union
    {
        struct
        {
            uchar active : 1;
            uchar ready : 1;
        };
        uchar active_flags;
    };
    bool dead;
    real_2 x;
    float health;
    float max_health;
    int attack;
    int stage;
    int rotation;
    float timer;
    float t;
    float radius;
    real_2 stretch;
    real_2 offset;
    real_2 healthbar_pos;
    float temperature;
    float spawn_t;
    float death_t;
    float cell_cost;
    float max_grown;
    float total_health;
    float total_max_health;
};
struct pickup_node
{
    int mutation_index;
    real_2 x_rel;
    float r;
    float r_dot;
    float alpha;
    bool is_selected;
};
struct int_2
{
    union
    {
        struct
        {
            int x;
            int y;
        };
        int data[2];
    };
};
struct int_3
{
    union
    {
        struct
        {
            int x;
            int y;
            int z;
        };
        int_2 xy;
        struct
        {
            int __x0;
            int_2 yz;
        };
        int data[3];
    };
};
struct bounding_box_3
{
    int_3 l;
    int_3 u;
};
struct floodfill_piece
{
    int start_index;
    int n_cells;
    int n_hearts;
    int n_cancers;
    float health;
    float cost;
    bounding_box_3 region;
};
struct thread_init_data
{
    int thread_index;
    lane_group_t* group;
};
struct biome_weights
{
    int_3 biomes;
    real_3 weights;
};
struct stbtt__buf
{
    uchar* data;
    int cursor;
    int size;
};
struct hexagon_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
};
struct explosion_render_info
{
    real_3 x;
    float r;
    float time;
    float duration;
    float distortion;
    real_4 color1;
    real_4 color2;
};
struct hex_uint
{
    uint value;
};
struct stbtt_packedchar
{
    ushort x0;
    ushort y0;
    ushort x1;
    ushort y1;
    float xoff;
    float yoff;
    float xadvance;
    float xoff2;
    float yoff2;
};
struct creature_spawner
{
    int body_id;
    int creature_index;
    real_2 spawn_location;
    int xp;
};
struct particle_pusher_t
{
    real_2 x;
    real_2 d;
    float strength;
    float inv_dsq;
};
struct ring_render_info
{
    real_3 x;
    float ri;
    float ro;
    real_4 color;
};
struct thrd_t
{
    void* _Handle;
    uint _Tid;
};
struct portal_t
{
    real_2 x;
    real_2 x_dot;
};
struct bounding_box_2
{
    int_2 l;
    int_2 u;
};
struct body_plan
{
    plan_cell* plan_cells;
    int n_plan_cells;
    int max_plan_cells;
    int n_dragged_cells;
    int* plan_id_map;
    bounding_box_2 region;
    int half_hex_rotation;
};
struct undo_state
{
    body_plan plan;
    int_2 last_drawn_point;
    int mode;
};
struct trace_node
{
    trace_node* parent;
    trace_node* previous;
    trace_node* next;
    trace_node* first_child;
    trace_node* last_child;
    bool traversed_children;
    bool traversed;
    char* name;
    double start_time;
    double end_time;
};
struct stbtt__csctx
{
    int bounds;
    int started;
    float first_x;
    float first_y;
    float x;
    float y;
    int min_x;
    int max_x;
    int min_y;
    int max_y;
    stbtt_vertex* pvertices;
    int num_vertices;
};
struct gamepad_t
{
    uint gamepads_connected;
    short buttons;
    float left_trigger;
    float right_trigger;
    real_2 left_stick;
    real_2 right_stick;
};
struct lane_context_t
{
    int lane_index;
    lane_group_t* group;
};
struct lightning_t
{
    int a;
    int b;
    real_2 dir;
    float range;
    float damage;
    float shock;
    int lifetime;
    real_2 points[16];
    union
    {
        struct
        {
            uint n_points : 16;
            uint type : 1;
        };
        uint n_points_and_type;
    };
    real_4 color;
};
struct wall_t
{
    float dist;
    real_2 gradient;
    real_2 flow;
    float air_dist;
};
struct color_swatch_render_info
{
    real_3 x;
    float r;
    real_4 color;
    float scale;
    uint pinned;
};
struct stbtt__active_edge
{
    stbtt__active_edge* next;
    float fx;
    float fdx;
    float fdy;
    float direction;
    float sy;
    float ey;
};
struct box_real_2
{
    real_2 l;
    real_2 u;
};
union id_t
{
    struct
    {
        ulonglong lo;
        ulonglong hi;
    };
    char string[16];
};
struct mutation_type
{
    id_t id;
    float weight;
    float cum_weight;
    real_2 uv;
    int extra_data_offset;
    int n_imbues;
    uint no_stacking : 1;
};
struct mutation_pickup
{
    pickup_node nodes[16];
    int n_nodes;
    int imbues[4];
    int n_imbues;
    real_2 x;
    real_2 x_dot;
    float alpha;
    int selected;
    int pending_imbues;
    bool did_spawn;
};
struct text_params
{
    float scale;
    real_2 orientation;
    float shadow;
    float outline;
    real_4 shadow_color;
    real_4 outline_color;
    real_2 clip_size;
    float wrap_width;
    float wrap_indent;
};
struct file_info
{
    uint is_directory : 1;
};
struct trace_t
{
    trace_node* trace_nodes;
    int n_trace_nodes;
    int type;
    int frame_number;
};
struct profiler_frame
{
    trace_t traces[3];
    int n_traces;
};
struct stbtt_aligned_quad
{
    float x0;
    float y0;
    float s0;
    float t0;
    float x1;
    float y1;
    float s1;
    float t1;
};
struct singing_channel
{
    float volume;
    float target_volume;
    float phase;
    union
    {
        float next_target_volume;
        long next_target_volume_data;
    };
};
struct laser_render_info
{
    real_3 x;
    real_2 d;
    float r;
    real_4 color;
};
struct lightning_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
};
struct slider_t
{
    float t;
    float width;
    float radius;
    float radius_dot;
    bool dragging;
    bool was_hovered;
    bool active;
};
struct exp_data
{
    double invln2N;
    double shift;
    double negln2hiN;
    double negln2loN;
    double poly[4];
    double exp2_shift;
    double exp2_poly[5];
    ulong64 tab[512];
};
struct print_buffer_t
{
    char* base;
    char* end;
    char* buffer;
};
// struct lfClass2
// {
//     ushort leaf;
//     CV_prop32_t property;
//     ulong field;
//     ulong derived;
//     ulong vshape;
//     ushort count;
//     uchar data;
// };
struct texture_t
{
    uint handle;
    int_2 size;
};
struct print_format
{
    int argument;
};
struct printer
{
    int count;
    print_format format;
};
struct stbtt_vertex
{
    short x;
    short y;
    short cx;
    short cy;
    short cx1;
    short cy1;
    uchar type;
    uchar padding;
};
struct magnetic_field_t
{
    cell* c;
    real_3 moment;
};
struct translation_map_kash_t
{
    char* key;
    uint hash;
};
struct textbox
{
    char* text;
    int max_text;
    int n_text;
    int cursor;
    int selection_start;
    int selection_end;
    int active;
};
struct mutation_item_list
{
    mutation_item* items;
    int n_items;
    int max_items;
};
struct explosion_t
{
    real_2 x;
    float r;
    int duration;
    float damage;
    float knockback;
    float heat;
    float stasis;
    union
    {
        real_3 hsv;
        real_3 rgb;
    };
    uint ignore_body;
    uint recolor : 1;
};
struct static_button
{
    float r;
    float r_dot;
    float state;
    float tooltip_alpha;
    bool was_hovered;
};
struct expandable_buffer
{
    uchar* memory;
    ulonglong reserved_size;
    ulonglong committed_size;
};
struct tooltip_t
{
    real_2 box_size;
    real_2 pos;
    float alpha;
    int last_hovered_index;
    int last_hovered_type;
    int last_hovered_imbue;
    real_2 last_hovered_mutation_pos;
    uint is_combo : 1;
};
struct edit_menu
{
    real_2* selection_points;
    int n_selection_points;
    float time;
    int_2 last_drawn_point;
    float theta;
    float scale;
    float radius;
    real_2 body_center_pos;
    int mode;
    float mode_trans;
    int tool;
    int selected_cell_item;
    union
    {
        cell_item* cell_items;
        expandable_buffer cell_items_memory;
    };
    int max_cell_items;
    int n_cell_items;
    int cell_item_counts[2048];
    real_2 symmetry_visual_x;
    real_2 symmetry_visual_x_dot;
    float symmetry_mode_trans;
    int symmetry_mode;
    bool drawing;
    bool modified;
    bool want_show_unlock_window;
    slider_t size_slider;
    body_plan plan;
    plan_cell* dragged_cells;
    uchar* dragged_open_sides;
    int n_dragged_cells;
    int max_dragged_cells;
    plan_cell* clipboard_cells;
    int n_clipboard_cells;
    int max_clipboard_cells;
    undo_state* undo_stack;
    int n_undo_states;
    int undo_stack_pointer;
    int max_undo_states;
    union
    {
        stashed_body_plan* stashed;
        expandable_buffer stashed_memory;
    };
    int n_stashed;
    int max_stashed;
    union
    {
        saved_body_plan* saved;
        expandable_buffer saved_memory;
    };
    int n_saved;
    int max_saved;
    union
    {
        workshop_body_plan* workshop;
        expandable_buffer workshop_memory;
    };
    int n_workshop;
    int max_workshop;
    union
    {
        static_button* panel_buttons;
        expandable_buffer panel_buttons_memory;
    };
    int max_panel_buttons;
    textbox rename_box;
    real_2 rename_box_alignment;
    int rename_index;
    real_2 rename_box_pos;
    textbox savebox;
    bool savebox_active;
    textbox searchbox;
    bool searchbox_active;
    static_button search_button;
    static_button search_cancel_button;
    float max_cost;
    float max_genome_size;
    draggable_button* color_buttons;
    real_4* colors;
    int n_colors;
    int dragged_button;
    real_2 drag_start;
    float drag_dist;
    static_button tool_buttons[3];
    static_button panel_tool_buttons[4];
    static_button mode_button;
    static_button symmetry_mode_buttons[3];
    static_button icon_button;
    static_button left_button;
    static_button right_button;
    static_button close_button;
    uchar* dists;
    bounding_box_2 visible_region;
    int n_warnings[3];
    int warning_index[3];
    real_2 warning_box_size[3];
    char* stash_dir;
    tooltip_t tooltip;
};
struct circle_render_info
{
    real_3 x;
    float r;
    real_4 color;
};
struct saver_t
{
    uint pending_save;
    char temp_player_filename[256];
    char temp_world_filename[256];
    char final_player_filename[256];
    char final_world_filename[256];
    uchar* serialized_player;
    ulonglong max_serialized_player_size;
    ulonglong serialized_player_size;
    ulonglong player_written_size;
    uchar* serialized_world;
    ulonglong max_serialized_world_size;
    ulonglong serialized_world_size;
    ulonglong world_written_size;
    void* world_file;
    void* player_file;
    void* world_filemapping;
    void* player_filemapping;
    uchar* world_mapview;
    uchar* player_mapview;
    char* save_dir;
    char settings_filename[1024];
    char run_history_filename[1024];
    char recording_dir[1024];
    char normal_save_dir[1024];
    char sandbox_save_dir[1024];
    char user_body_plans_dir[1024];
    char temp_dir[1024];
    char workshop_dir[1024];
    char appdata_path[1024];
    char userdata_path[1024];
};
struct uint8_2
{
    union
    {
        struct
        {
            uchar x;
            uchar y;
        };
        uchar data[2];
    };
};
struct translation_list
{
    char ** text;
    char* formatted;
    ulonglong max_formatted;
};
struct uint8_3
{
    union
    {
        struct
        {
            uchar x;
            uchar y;
            uchar z;
        };
        uint8_2 xy;
        struct
        {
            uchar __x0;
            uint8_2 yz;
        };
        uchar data[3];
    };
};
struct uint8_4
{
    union
    {
        struct
        {
            uchar x;
            uchar y;
            uchar z;
            uchar w;
        };
        uint8_2 xy;
        struct
        {
            uchar __x0;
            uint8_2 yz;
        };
        uint8_3 xyz;
        struct
        {
            uchar _x0;
            uint8_3 yzw;
        };
        uchar data[4];
    };
};
struct mutation_item
{
    int mutation_index;
    int imbues[4];
    real_2 pos;
    float r;
    float r_dot;
};
struct creature_t
{
    uint id;
    uint ___id_null_termination;
    char* filename;
    mutation_item mutations[32];
    int n_mutations;
    float cost_discount;
    uint show_damage_numbers : 1;
    uint hidden : 1;
    uint snap : 1;
    body_plan plan;
    void (*ai_func)(body *);
    void (*spawn_func)(body *, real_2);
    void (*death_func)(body *);
    bool (*generation_func)(body *, real_2);
    char lua_func[128];
    char lua_spawn_func[128];
    char lua_death_func[128];
};
struct slider_params
{
    float full_width;
    real_2 pos;
    bool active;
};
struct translation_map
{
    char ** keys;
    translation_list* values;
    uint max_entries;
};
struct unnamed_type_colors
{
    real_3 color0;
    real_3 color1;
    real_3 color2;
    real_3 color3;
    real_3 color4;
};
struct color_bar_render_info
{
    float min;
    float low;
    float mid;
    float high;
    float max;
    unnamed_type_colors colors;
    uint do_square;
};
struct id_t_index
{
    id_t id;
    int index;
};
struct rle_pair
{
    float value;
    int count;
};
struct healthbar_t
{
    float health;
    float cost;
    float min_cost;
    float recent_damage;
    float recent_healing;
    float shock;
    float poison;
    float burn;
    float damage_timer;
    float can_rebirth;
};
struct strand
{
    char* str;
    int len;
};
struct spawn_creature_params
{
    int body_id;
    real_2 orientation;
    uint spawn_cells : 1;
    uint plant : 1;
    uint dont_load_plan : 1;
};
struct biome_entrance
{
    int core_a;
    int core_b;
    int n_entrances;
    uint boss_id;
    int boss_xp;
    spawn_creature_params boss_params;
    int achievement_index;
    uint not_boss : 1;
    uint direct : 1;
    uint optional : 1;
    uint room_exit : 1;
};
// mat_and_color None[12];
// struct work_task
// {
//     void (*func)(context_t *, void *);
//     void* data;
// };
struct uint_2
{
    union
    {
        struct
        {
            uint x;
            uint y;
        };
        uint data[2];
    };
};
struct uint_3
{
    union
    {
        struct
        {
            uint x;
            uint y;
            uint z;
        };
        uint_2 xy;
        struct
        {
            uint __x0;
            uint_2 yz;
        };
        uint data[3];
    };
};
struct uint_4
{
    union
    {
        struct
        {
            uint x;
            uint y;
            uint z;
            uint w;
        };
        uint_2 xy;
        struct
        {
            uint __x0;
            uint_2 yz;
        };
        uint_3 xyz;
        struct
        {
            uint _x0;
            uint_3 yzw;
        };
        uint data[4];
    };
};
struct cell_extra
{
    int_2 body_coord;
    real_4 color;
    contact* contacts;
    real_2 attached_world_pos;
    real_2 old_x;
    real_2 old_x_dot;
    real_2 old_curl;
    real_2 old_poison;
    real_2 global_body_force;
    wall_t wall;
    real_2 wall_x;
    cell * neighbors[6];
    cell* next_in_body;
    cell* next_in_bone;
};
struct cell
{
    union
    {
        int id;
        int id_packed[16];
    };
    union
    {
        int body_id;
        int body_id_packed[16];
    };
    union
    {
        int bone_id;
        int bone_id_packed[16];
    };
    union
    {
        int material_index;
        int material_index_packed[16];
    };
    union
    {
        float voltage;
        float voltage_packed[16];
    };
    union
    {
        float voltage_dot;
        float voltage_dot_packed[16];
    };
    union
    {
        float peak_voltage;
        float peak_voltage_packed[16];
    };
    float directional_voltage[96];
    float directional_eq_voltage[96];
    float directional_conductance[96];
    union
    {
        float shock;
        float shock_packed[16];
    };
    union
    {
        float temperature;
        float temperature_packed[16];
    };
    union
    {
        float frozen_multiplier;
        float frozen_multiplier_packed[16];
    };
    union
    {
        float maturity;
        float maturity_packed[16];
    };
    union
    {
        float health;
        float health_packed[16];
    };
    union
    {
        float damage;
        float damage_packed[16];
    };
    union
    {
        float bloodless_damage;
        float bloodless_damage_packed[16];
    };
    union
    {
        float screenshakeless_damage;
        float screenshakeless_damage_packed[16];
    };
    union
    {
        float burn_damage;
        float burn_damage_packed[16];
    };
    union
    {
        float ice_damage;
        float ice_damage_packed[16];
    };
    union
    {
        float healing;
        float healing_packed[16];
    };
    union
    {
        float dealt;
        float dealt_packed[16];
    };
    union
    {
        float explosive_damage_multiplier;
        float explosive_damage_multiplier_packed[16];
    };
    union
    {
        float heat_damage_multiplier;
        float heat_damage_multiplier_packed[16];
    };
    union
    {
        float poison;
        float poison_packed[16];
    };
    union
    {
        float mutagen;
        float mutagen_packed[16];
    };
    union
    {
        int mutagen_material_index;
        int mutagen_material_index_packed[16];
    };
    union
    {
        float leeching;
        float leeching_packed[16];
    };
    union
    {
        float value;
        float value_packed[16];
    };
    union
    {
        float value2;
        float value2_packed[16];
    };
    union
    {
        int n_colors;
        int n_colors_packed[16];
    };
    union
    {
        float mass;
        float mass_packed[16];
    };
    union
    {
        float x;
        float x_packed[16];
    };
    union
    {
        float y;
        float y_packed[16];
    };
    union
    {
        float x_dot;
        float x_dot_packed[16];
    };
    union
    {
        float y_dot;
        float y_dot_packed[16];
    };
    union
    {
        float rot_x;
        float rot_x_packed[16];
    };
    union
    {
        float rot_y;
        float rot_y_packed[16];
    };
    union
    {
        float curl_x;
        float curl_x_packed[16];
    };
    union
    {
        float curl_y;
        float curl_y_packed[16];
    };
    union
    {
        float r;
        float r_packed[16];
    };
    union
    {
        float base_r;
        float base_r_packed[16];
    };
    float spacing[96];
    union
    {
        float target_spacing;
        float target_spacing_packed[16];
    };
    union
    {
        uint flags;
        uint flags_packed[16];
        struct
        {
            uint open_sides : 6;
            uint touched : 1;
            uint health_gated : 1;
            uint floodfill_needed : 1;
            uint linking : 1;
            uint link_attracting : 1;
            uint self_touching : 1;
            uint poison_immune : 1;
            uint kill : 1;
            uint nontrivial_bone : 1;
            uint temp_rigid : 1;
            uint stem_cell : 1;
            uint cell_collision : 1;
            uint no_explosive_regen_delay : 1;
            uint has_brain_fn : 1;
            uint recolored : 1;
        };
    };
    union
    {
        float light_radius;
        float light_radius_packed[16];
    };
    union
    {
        int n_contacts;
        int n_contacts_packed[16];
    };
    union
    {
        float stickyness;
        float stickyness_packed[16];
    };
    union
    {
        float stickyness_timer;
        float stickyness_timer_packed[16];
    };
    union
    {
        float wall_force;
        float wall_force_packed[16];
    };
    union
    {
        int attached;
        int attached_packed[16];
    };
    union
    {
        int linked;
        int linked_packed[16];
    };
    union
    {
        float phasing;
        float phasing_packed[16];
    };
    union
    {
        float detected_light;
        float detected_light_packed[16];
    };
    union
    {
        float voltage_multiplier;
        float voltage_multiplier_packed[16];
    };
    union
    {
        float rigidity;
        float rigidity_packed[16];
    };
    union
    {
        float stasis;
        float stasis_packed[16];
    };
    union
    {
        uint floodfilled;
        uint floodfilled_packed[16];
    };
    union
    {
        float old_voltage;
        float old_voltage_packed[16];
    };
    union
    {
        float old_temperature;
        float old_temperature_packed[16];
    };
    union
    {
        float old_health;
        float old_health_packed[16];
    };
    union
    {
        float equilibrium_voltage;
        float equilibrium_voltage_packed[16];
    };
    union
    {
        float total_conductance;
        float total_conductance_packed[16];
    };
    union
    {
        float equilibrium_temperature;
        float equilibrium_temperature_packed[16];
    };
    union
    {
        float total_heat_conductance;
        float total_heat_conductance_packed[16];
    };
    union
    {
        float wall_temperature;
        float wall_temperature_packed[16];
    };
    cell_extra extra_fields[16];
};
struct map_floodfill_piece
{
    int id;
    int n_hexes;
    bounding_box_2 bounds;
};
struct button_out
{
    bool clicked;
    bool hovered;
};
// struct pow_log_data
// {
//     double ln2hi;
//     double ln2lo;
//     double poly[7];
//     unnamed_tag_000047F2 tab[128];
// };
struct material_t
{
    uint id;
    char* name;
    int next_variant;
    uint tags;
    uint tier;
    float drop_weight;
    int spawn_with[4];
    float base_cost;
    float random_cost;
    float genome_size;
    float growth_rate;
    float max_health;
    float transfer_rate;
    float regen;
    union
    {
        struct
        {
            uint attach_to_cells : 1;
            uint attach_to_walls : 1;
            uint poison_immune : 1;
            uint no_electric_growth : 1;
            uint penetrate_walls : 1;
            uint self_touching : 1;
            uint is_cancer : 1;
            uint is_directional : 1;
            uint show_adjacency : 1;
            uint show_direction : 1;
            uint is_hard : 1;
            uint play_note : 1;
            uint no_recolor : 1;
        };
        uint flags;
    };
    float density;
    float sharpness;
    float leeching;
    float hardness;
    float max_radial_force;
    float max_angular_force;
    float radial_compliance;
    float angular_compliance;
    float plasticity;
    float friction;
    float restitution;
    float drag;
    float tangent_drag;
    float movement_force;
    float conductivity;
    float leak_conductivity;
    float capacitance;
    float inv_capacitance;
    float directional_conductivity;
    float heat_conductivity;
    float leak_heat_conductivity;
    float heat_capacity;
    float inv_heat_capacity;
    real_4 base_color;
    float light_radius;
    float light_intensity;
    real_3 emission;
    int texture_type;
    real_2 uv;
    int combine_material_index1;
    int combine_material_index2;
    void (*physics_update_fn)(cell *);
    void (*force_update_fn)(cell *);
    void (*electric_update_fn)(cell *);
    void (*connection_update_fn)(cell *);
    void (*brain_fn)(cell *);
    void (*destroyed_fn)(cell *);
};
struct exp2f_data
{
    ulong64 tab[32];
    double shift_scaled;
    double poly[3];
    double shift;
    double invln2_scaled;
    double poly_scaled[3];
};
struct stbtt__hheap
{
    stbtt__hheap_chunk* head;
    void* first_free;
    int num_remaining_in_head_chunk;
};
struct sound_t
{
    short* data;
    int n_channels;
    int n_samples;
};
struct stbtt_kerningentry
{
    int glyph1;
    int glyph2;
    int advance;
};
struct boss_part_t
{
    int type;
    int creature_index;
    int body_id;
    int part_index;
    int_2 pinned_cells[32];
    int n_pinned_cells;
    real_2 offset;
    real_2 base_x;
    real_2 x;
    real_2 x_dot;
    real_2 orientation;
};
struct room_t
{
    uint cleared : 1;
    int first_spawner;
    int n_spawners;
};
struct translation_info
{
    int mutagen_material_index;
    int combine_material_index;
};
// struct lfClass
// {
//     ushort leaf;
//     ushort count;
//     CV_prop_t property;
//     ulong field;
//     ulong derived;
//     ulong vshape;
//     uchar data;
// };
struct bone_id_table
{
    union
    {
        id_index* index_table;
        expandable_buffer index_table_memory;
    };
    int n_max_elements;
    int next_id;
    union
    {
        bone* elements;
        expandable_buffer elements_memory;
    };
    int n_elements;
};
struct circular_buffer_t
{
    uchar* buffer;
    ulonglong size;
};
struct brown_sound
{
    float value;
    float filtered_value;
    float volume;
    float target_volume;
    union
    {
        float next_target_volume;
        long next_target_volume_data;
    };
    float lowpass;
    float target_lowpass;
    union
    {
        float next_lowpass;
        long next_lowpass_data;
    };
    float lerp_rate;
};
struct audio_context
{
    bool initialized;
    IMMDevice* device;
    IAudioClient* audio_client;
    IAudioRenderClient* render_client;
    tWAVEFORMATEX* wfx;
    uint buffer_frame_count;
    uint n_frames_available;
    uint n_frames_padding;
    uint internal_sample_rate;
    int output_samples_per_internal_sample;
    float* game_sfx_buffer;
    int game_sfx_pos;
    int game_sfx_size;
    float* music_buffer;
    int music_pos;
    int music_size;
    float game_sfx_volume;
    float target_game_sfx_volume;
    float music_volume;
    float target_music_volume;
    queued_sound* queued_sounds;
    int max_queued_sounds;
    ulong next_queued_sound;
    ulong last_queued_sound;
    queued_sound* playing_sounds;
    int n_playing_sounds;
    int max_playing_sounds;
    looping_sound* looping_sounds;
    int n_looping_sounds;
    int max_looping_sounds;
    brown_sound brown_noise;
    singing_channel singing[96];
    int current_song;
    float music_transition_speed;
    float target_music_transition_speed;
    union
    {
        float next_target_music_transition_speed;
        long next_target_music_transition_speed_data;
    };
};
struct map_t
{
    uint seed;
    bounding_box_2 map_range;
    biome_core* cores;
    int n_cores;
    float* wall_values;
    float* visual_wall_values;
    real_2* flow;
    real_3* color;
    int* biomes;
    int* biome_cores;
    float* light;
    float* bumpyness;
    float* temperature;
    int* room_ids;
    uint* flags;
    uint* blocked_spawns;
    room_t* rooms;
    int n_rooms;
    creature_spawner* spawners;
    int max_spawners;
    int n_spawners;
    doorway* doors;
    int n_doors;
    static_cell* static_cells;
    int n_static_cells;
    tunnel_tile* tunnel_tiles;
    int n_tunnel_tiles;
    line_render_info* safe_zone_lines;
    int n_safe_zone_lines;
    float* explored;
    int map_type;
    bool no_creatures;
    biome_node* biome_nodes;
    int n_biome_nodes;
    biome_edge* biome_edges;
    int n_biome_edges;
    biome_entrance* biome_entrances;
    int n_biome_entrances;
};
struct line_render_info
{
    real_3 x;
    real_2 d;
    float r;
    real_4 color;
};
struct raycast_result
{
    wall_t wall;
    float length;
};
struct stbtt_pack_range
{
    float font_size;
    int first_unicode_codepoint_in_range;
    int* array_of_unicode_codepoints;
    int num_chars;
    stbtt_packedchar* chardata_for_range;
    uchar h_oversample;
    uchar v_oversample;
};
struct saved_body_plan
{
    uint is_folder : 1;
    uint expanded : 1;
    uint level : 30;
    char name[512];
    real_2 pos;
    float expand_t;
};
struct looping_sound
{
    int type;
    sound_t sound;
    float volume;
    float target_volume;
    union
    {
        float next_target_volume;
        long next_target_volume_data;
    };
    float lerp_rate;
    double pos;
    int loop_overlap;
    int* start_points;
    int n_start_points;
    bool ready;
};
struct stbtt__edge
{
    float x0;
    float y0;
    float x1;
    float y1;
    int invert;
};
struct doorway
{
    int rooms[3];
    int n_rooms;
    int_2 pos;
    int first_cell;
    int n_cells;
    float value;
    int adjacent_doors[6];
    uint changed : 2;
};
struct game_sounds_t
{
    sound_t squish;
    sound_t explosion;
    sound_t collision;
    sound_t bubble;
    sound_t lightning;
    sound_t thunder;
    sound_t grow;
    sound_t death;
    sound_t death_music;
    sound_t run_start;
    sound_t run_complete;
    sound_t run_complete_music;
    sound_t squee;
    sound_t sizzle;
    sound_t shatter;
    sound_t levelup;
    sound_t xp_tick;
    sound_t menu_tick;
    sound_t menu_click;
    sound_t acid_spray;
    sound_t ink_spray;
    sound_t vacuum;
    sound_t spike;
    sound_t error;
    looping_sound* shocked_loop;
    looping_sound* laser_loop;
    looping_sound* portal_loop;
    looping_sound* music_loop;
};
struct mtx_t
{
    ulonglong _Type;
    void* _Ptr;
    void* _Cv;
    uint _Owner;
    uint _Cnt;
};
// struct cParams_t
// {
//     lz4hc_strat_e strat;
//     int nbSearches;
//     uint targetLength;
// };
struct tunnel_tile
{
    int_2 pos;
    int index;
    float value;
};
struct workshop_body_plan
{
    ulonglong workshop_id;
    char name[512];
    char path[512];
    real_2 pos;
};
struct run_stats
{
    double start_time;
    double end_time;
    uint frames;
    uint seed;
    int biomes_explored;
    int xp;
    int level;
    uint ending;
    int creature_deaths;
    uint death_biome;
};
struct body_id_table
{
    union
    {
        id_index* index_table;
        expandable_buffer index_table_memory;
    };
    int n_max_elements;
    int next_id;
    union
    {
        body* elements;
        expandable_buffer elements_memory;
    };
    int n_elements;
};
struct tss_t
{
    uint _Idx;
};
struct genode
{
    int type;
    int_2 p;
    real_2 dir;
    float length;
};
// struct tm
// {
//     int tm_sec;
//     int tm_min;
//     int tm_hour;
//     int tm_mday;
//     int tm_mon;
//     int tm_year;
//     int tm_wday;
//     int tm_yday;
//     int tm_isdst;
// };
struct stbtt_fontinfo
{
    void* userdata;
    uchar* data;
    int fontstart;
    int numGlyphs;
    int loca;
    int head;
    int glyf;
    int hhea;
    int hmtx;
    int kern;
    int gpos;
    int svg;
    int index_map;
    int indexToLocFormat;
    stbtt__buf cff;
    stbtt__buf charstrings;
    stbtt__buf gsubrs;
    stbtt__buf subrs;
    stbtt__buf fontdicts;
    stbtt__buf fdselect;
};
struct font_info
{
    uint texture;
    stbtt_fontinfo info;
    float size;
    stbtt_packedchar* char_data;
};
struct text_info
{
    char* text;
    real_2 x;
    real_4 color;
    real_2 alignment;
    font_info font;
    text_params params;
    real_4 background_color;
    float background_radius;
};
struct pDNameNode
{
    longlong _padding_;
    DName* me;
};
struct light_render_info
{
    real_3 x;
    float r;
    real_4 color;
};
struct fenv_t
{
    ulong _Fe_ctl;
    ulong _Fe_stat;
};
struct mat_and_color
{
    int material_index;
    real_4 color;
};
struct bitmap_t
{
    uint8_4* data;
    int_2 size;
    uint texture;
};
struct rectangle_space
{
    int_2 max_size;
    bounding_box_2* free_regions;
    int n_free_regions;
};
struct inspector_menu
{
    int body_id;
    int_2 selected_cell_coord;
    int selected_variable;
    float min;
    float max;
    float low;
    float high;
    uint show_cell_icons : 1;
    uint dragging : 1;
    uint graph_open : 1;
    float graph_values[1200];
    int n_graph_values;
    int next_graph_value;
    float graph_height;
    float graph_toggle_r;
    float graph_toggle_r_dot;
    float scale;
    real_2 center;
    real_2 drag_start;
    tooltip_t tooltip;
};
struct charNode
{
    longlong _padding_;
    char me;
};
struct stbtt__bitmap
{
    int w;
    int h;
    int stride;
    uchar* pixels;
};
struct cell_pickup
{
    int material_index;
    real_2 x;
    real_2 x_dot;
    float r;
    float r_dot;
    float alpha;
    float text_alpha;
    union
    {
        struct
        {
            uint selected : 1;
            uint is_combo : 1;
        };
        uint flags;
    };
};
struct text_element
{
    uchar type;
    union
    {
        char c;
        uchar modifiers;
    };
};
struct user_input
{
    real_2 mouse;
    real_2 dmouse;
    real_2 cursor_x;
    float mouse_wheel;
    float mouse_hwheel;
    uchar buttons[32];
    uchar pressed_buttons[32];
    uchar released_buttons[32];
    bool click_blocked;
    bool right_click_blocked;
    bool escape_blocked;
    bool hover_blocked;
    bool buttons_blocked;
    void* active_ui_element;
    int hovered_ui_element;
    int old_hovered_ui_element;
    int cursor_type;
    text_element text_stream[256];
    int n_text_stream;
    uint text_modifiers;
    gamepad_t gamepad;
    short gamepad_prev_buttons;
};
struct pairNode
{
    longlong _padding_;
    DNameNode* left;
    DNameNode* right;
    int myLen;
};
struct recording_buffer
{
    uint frame_buffer;
    uint* textures;
    int n_textures;
    uint8_4* data;
    int_2 resolution;
    int buffer_length;
    int current_frame;
    int n_frames;
    bool initialized;
    float centiseconds;
};
struct once_flag
{
    void* _Opaque;
};
struct particle_t
{
    int type;
    real_2 x;
    real_2 x_dot;
    real_2 x_spawn;
    int target;
    float r;
    float r_dot;
    int time;
    int duration;
    real_4 color;
    real_4 color_initial;
    real_4 color_final;
    real_4 emission;
    float emission_radius;
    bool affects_gameplay;
};
struct stbtt__hheap_chunk
{
    stbtt__hheap_chunk* next;
};
struct radiant_render_info
{
    real_3 x;
    float r;
    float distortion;
    real_4 color;
};
struct srwlock_guard
{
    _RTL_SRWLOCK* lck;
};
struct sandbox_menu
{
    int tool;
    static_button tool_buttons[10];
    float selected_team;
    static_button team_buttons[5];
    float* mutation_r;
    float* mutation_r_dot;
    slider_t explosion_slider;
    float explosion_radius;
    float* cell_r;
    float* cell_r_dot;
    real_2 block_zone;
    int selected_creature;
    int dragged_body;
    tooltip_t tooltip;
};
struct stack_allocation
{
    void* data;
};
struct memory_manager
{
    expandable_buffer stack;
    ulonglong stack_used;
    ulonglong checkpoint;
    stack_allocation stallocs[4096];
    int n_stallocs;
};
struct keybinds_t
{
    int forward;
    int backward;
    int left;
    int right;
    int ability;
    int ability1;
    int ability2;
    int extend;
    int retract;
    int interact;
    int map;
    int zoom_in;
    int zoom_out;
    int edit;
    int inspect;
    int brush_bigger;
    int brush_smaller;
    union
    {
        struct
        {
            int tool_select;
            int tool_draw;
            int tool_fill;
        };
        int tools[3];
    };
    int toggle_symmetry;
    int toggle_icons;
    int editor_up;
    int editor_down;
    int editor_left;
    int editor_right;
    int editor_zoom_in;
    int editor_zoom_out;
    int console;
};
struct settings_t
{
    uint settings_version;
    float effects_volume;
    float music_volume;
    union
    {
        keybinds_t keybinds;
        int buttons[29];
    };
    uint toggle_seek;
    uint toggle_ability;
    uint show_fps;
    uint fullscreen;
    uint clip_cursor;
    uint hardware_cursor;
    float gamepad_cursor_sens;
    float gamepad_deadzone;
    int window_x;
    int window_y;
    int resolution_x;
    int resolution_y;
    uint replay_recorder;
    int gif_resolution_x;
    int gif_resolution_y;
    int gif_frames;
    uint cap_framerate;
    uint framerate_cap;
    uint thread_count;
    float screenshake;
    float brightness;
    float contrast;
    uint background_effects;
    uint reflections;
    uint distortions;
    uint limit_particles;
    uint max_particles;
    uint pause_on_unfocus;
    uint show_tutorial;
    uint show_disconnected_warning;
    uint error_sound;
    uint always_show_storage;
    uint pushable_cell_buttons;
    uint copy_plan_on_possess;
    uint show_cell_icons;
    uint enable_console;
    uint win_unlocks;
};
struct real_3x3
{
    union
    {
        real_3 columns[3];
        float data[9];
    };
};
struct biome_node
{
    int core_index;
    real_2 x;
    float r;
    uint snap : 1;
    biome_edge* first_edge;
    void (*pre_generation_fn)(biome_node *);
    void (*post_generation_fn)(biome_node *);
};
struct stbtt_bakedchar
{
    ushort x0;
    ushort y0;
    ushort x1;
    ushort y1;
    float xoff;
    float yoff;
    float xadvance;
};
struct biome_core
{
    int biome_index;
    int guardian_id;
    int target_size;
    int n_hexes;
    bounding_box_2 bounds;
    int_2 entrance_points[32];
    int n_entrance_points;
    ulonglong mergable_cores;
    int modifiers[16];
    int n_modifiers;
    int n_default_modifiers;
    uint no_creatures : 1;
};
struct lane_group_t
{
    int group_index;
    void* shared;
    int n_lanes;
    _RTL_BARRIER barrier;
};
struct draggable_button
{
    real_2 x;
    real_2 x_dot;
    real_2 x_brown;
    real_2 x_brown_dot;
    real_2 x_offset;
    float r;
    float r_dot;
    float selection_theta;
    float hovered;
    float selected;
    bool was_hovered;
    bool pinned;
};
struct stbtt__point
{
    float x;
    float y;
};
struct id_index
{
    int id;
    int index;
};
struct cell_pool
{
    int material_indices[2048];
    float material_cum_chances[2048];
    int n_materials;
};
struct biome_type
{
    uint id;
    real_3 color;
    float light;
    float bumpyness;
    float temperature;
    uint tracked : 1;
    uint explored : 1;
    uint no_modifiers : 1;
    uint custom_cell_spawning;
    int ambient_music_id;
    int battle_music_id;
    float noise_amount;
    float fbm_amount;
    float fbm_base_frequency;
    float fbm_octives;
    float fbm_gain;
    float neighbor_fbm;
    float neighbor_amount;
    float base_amount;
    float min_value;
    float cell_chance;
    int cell_max_neighbors;
    cell_pool pool;
    uint creature_ids[256];
    int creature_xps[256];
    float creature_cum_chances[256];
    float creature_teams[256];
    int n_creatures;
    uint plant_ids[256];
    int plant_xps[256];
    float plant_cum_chances[256];
    int n_plants;
    int modifiers[16];
    int n_modifiers;
};
struct plan_cell
{
    int material_index;
    real_4 color;
    int_2 body_coord;
    int respawn_timer;
    union
    {
        struct
        {
            uchar selected_symmetry_index;
            uchar pending_selected;
        };
        uint selected;
    };
    uint floodfilled;
    float r;
    float r_dot;
    uint temporary : 1;
};
struct context_t
{
    union
    {
        struct
        {
            int lane_index;
            lane_group_t* group;
        };
        lane_context_t current_lane_context;
    };
    lane_context_t lane_stack[4];
    int n_lane_stack;
    int barrier_number;
    int thread_id;
    memory_manager* manager;
    uint seed;
    uint visual_seed;
    lua_State* L;
    print_buffer_t log_buffer;
    print_buffer_t game_buffer;
    trace_t* current_trace;
    trace_t* latest_trace;
    trace_node* current_trace_node;
    profiler_frame* profiler_frames;
    int current_profiler_frame;
    circle_render_info* circles;
    int n_circles;
};
struct stashed_body_plan
{
    body_plan plan;
    char name[512];
    real_2 pos;
};
struct sound_params
{
    float volume;
    float delay;
    float pitch_shift;
    float lowpass_dist;
    int type;
};
struct real_4x4
{
    union
    {
        real_4 columns[4];
        float data[16];
    };
};
struct render_context
{
    float fov;
    real_3 camera_pos;
    real_3 old_camera_pos;
    real_3x3 camera_axes;
    real_4x4 camera;
    real_4 background_color;
    real_4 foreground_color;
    real_4 highlight_color;
    uint frame_buffer;
    uint cell_frame_buffer;
    uint lighting_frame_buffer;
    uint post_process_frame_buffer;
    uint background_frame_buffer;
    uint thumbnail_frame_buffer;
    union
    {
        struct
        {
            uint color_texture;
            uint post_color_texture;
            uint post_effects_texture;
            uint background_textures[2];
            uint cell_color_texture;
            uint cell_material_texture;
            uint lighting_texture;
            uint edit_distance_texture;
        };
        uint textures[9];
    };
    int current_background_texture;
    uint thumbnail_texture;
    uint wall_texture;
    uint biome_texture;
    uint map_flow_texture;
    uint map_color_texture;
    uint map_wall_color1_texture;
    uint map_wall_color2_texture;
    uint map_wall_params_texture;
    uint map_lighting_texture;
    uint map_bumpyness_texture;
    uint map_temperature_texture;
    uint map_explored_texture;
    int_2 resolution;
    union
    {
        struct
        {
            font_info small_font;
            font_info default_font;
            font_info medium_font;
            font_info big_font;
        };
        font_info font_infos[4];
    };
    float time;
};
struct window_t
{
    HWND__* hwnd;
    HGLRC__* hglrc;
    real_2 size;
    user_input input;
    user_input frame_input;
    _LARGE_INTEGER timer_frequency;
    _LARGE_INTEGER last_time;
    _LARGE_INTEGER this_time;
    render_context rc;
    render_context ui;
    recording_buffer rb;
    bool clip_cursor;
    bool focused;
};
struct multithread_loop_info
{
    user_input* input;
    int start;
    int end;
    int iteration;
};
struct int_2x2
{
    union
    {
        int_2 columns[2];
        int data[4];
    };
};
struct cell_item
{
    int material_index;
    draggable_button button;
    uint filtered : 1;
};
struct workshop_published_item
{
    ulonglong id;
    char name[129];
};
struct biome_edge
{
    biome_node* node;
    biome_edge* next;
    real_2 dir;
    float spacing;
    float randomness;
    float stiffness;
    float bias;
    uint virtual_edge : 1;
};
// struct tWAVEFORMATEX
// {
//     ushort wFormatTag;
//     ushort nChannels;
//     ulong nSamplesPerSec;
//     ulong nAvgBytesPerSec;
//     ushort nBlockAlign;
//     ushort wBitsPerSample;
//     ushort cbSize;
// };
struct serialized_data
{
    uchar* data;
    int size;
};
struct queued_sound
{
    sound_t* sound;
    sound_params params;
    float filtered[2];
    int n_played_samples;
    bool kill;
};
struct light_reciever_t
{
    real_2 x;
    real_3 hsv;
    float radius_sq;
};
struct biome_modifier
{
    char* id;
    void (*generation_fn)(biome_core *);
    void (*creature_fn)(body *);
    float chance;
};
struct srwlock_shared_guard
{
    _RTL_SRWLOCK* lck;
};
struct real_2x2
{
    union
    {
        real_2 columns[2];
        float data[4];
    };
};
struct tool_render_info
{
    real_3 x;
    float r;
    real_4 color;
    uint id;
    float state;
};
struct lightning_emitter
{
    real_2 x;
    real_2 dir;
};
struct laser_t
{
    int cell_id;
    real_2 x;
    real_2 dir;
    float heat;
    float width;
    float length;
};
struct stbtt_pack_context
{
    void* user_allocator_context;
    void* pack_info;
    int width;
    int height;
    int stride_in_bytes;
    int padding;
    int skip_missing;
    uint h_oversample;
    uint v_oversample;
    uchar* pixels;
    void* nodes;
};
struct brain_t
{
    real_2 movement;
    float rotation;
    real_2 grab_target;
    float grab_weight;
    float grab_dir;
    bool abilities[3];
    void (*fun)(body *);
    real_2 old_movement;
    float old_rotation;
    real_2 old_grab_target;
    float old_grab_weight;
    float old_grab_dir;
    bool old_abilities[3];
    int target;
    int old_target;
    int action;
    real_2 target_point;
    double values[32];
};
struct particle_type_t
{
    bool streak;
    bool draw_on_top;
};
struct lua_State
{
};
struct body
{
    int id;
    int creature_index;
    body_plan plan;
    int* cell_map;
    cell* first_cell;
    cell* last_cell;
    int parent_id;
    float team;
    boss_part_t* boss_part;
    float cost_limit;
    float max_health;
    float total_cost;
    float age;
    int xp;
    int next_levelup;
    int last_levelup;
    int level;
    float xp_timer;
    float xp_alpha;
    float cost_discount;
    float bonus_health_multiplier;
    uint loaded : 1;
    uint floodfill_needed : 1;
    uint rooted : 1;
    uint snap : 1;
    uint touched : 1;
    uint is_boss : 1;
    uint is_safe : 1;
    uint kill : 1;
    uint kill_slowly : 1;
    uint unload : 1;
    uint show_damage_numbers : 1;
    uint plan_modified : 1;
    uint cell_collision : 1;
    uint no_regen_delay : 1;
    uint regen_boost;
    float avg_phasing;
    real_2 spawn_x;
    int n_cells;
    real_2 center_of_mass;
    real_2 old_center_of_mass;
    real_2 center_of_mass_dot;
    real_2 old_center_of_mass_dot;
    float radius;
    float mass;
    float invmass;
    float cell_cost;
    float max_grown;
    float health;
    float damage;
    float damage_timer;
    float poison_damage;
    float burn_damage;
    float healing;
    real_2 cost_centroid;
    real_2 orientation;
    real_2 old_orientation;
    float omega;
    real_2 global_body_force;
    float wall_force;
    float old_wall_force;
    float avg_shock;
    float avg_temperature;
    float vision_radius;
    float damage_number;
    float damage_number_timer;
    union
    {
        struct
        {
            uint portal_index : 8;
            uint in_portal : 1;
        };
        uint portal_info;
    };
    float portal_timer;
    brain_t brain;
    wall_t nearest_wall;
    union
    {
        mutation_item_list mutation_items;
        struct
        {
            mutation_item* mutations;
            int n_mutations;
            int max_mutations;
        };
    };
};
struct pcharNode
{
    longlong _padding_;
    char* me;
    int myLen;
};
struct acid_particle_16
{
    float x[16];
    float y[16];
    float x_dot[16];
    float y_dot[16];
    float r[16];
    float r_dot[16];
    int time[16];
    real_4 color_initial[16];
    real_4 color_final[16];
};
struct command_result_t
{
    char* command;
    char* result;
    char* error;
};
struct player_command_t
{
    real_2 movement;
    real_2 grab_target;
    float grab_weight;
    float grab_dir;
    bool abilities[1];
};
struct tss_ptd
{
    tss_ptd* next;
    tss_ptd* prev;
    void * data[1024];
    bool tss_dtor_used;
};
struct bone
{
    int id;
    float mass;
    float inertia;
    float spacing;
    real_2 center_of_mass;
    real_2 center_of_mass_dot;
    real_2 orientation;
    float omega;
    int n_cells;
    real_2 plan_center;
    cell* first_cell;
    cell* last_cell;
    uint merge_id;
    uint floodfill_needed : 1;
};
struct big_lightning_vertex
{
    real_2 x;
    real_4 color;
};
struct init_world_params
{
    bool keep_seed;
    int map_type;
    bool no_creatures;
    bool loading;
};
struct static_cell
{
    real_2 x;
    uint alive;
    real_3 color;
    int neighbors[6];
    uint open_sides;
};
// struct type_info
// {
//     longlong _padding_;
//     __std_type_info_data _Data;
// };
union float_conv
{
    float f;
    int i;
};
struct contact
{
    cell* o;
    real_2 normal;
    float spacing;
    float depth;
    int c_sharpness;
    int o_sharpness;
};
struct bone_contact
{
    cell* c;
    cell* o;
    real_2 normal;
    float spacing;
    float depth;
    int c_sharpness;
    int o_sharpness;
};
struct icon_render_info
{
    real_3 x;
    float r;
    real_4 color;
    real_2 uv;
};
struct world
{
    int menu;
    uint confirm_newgame : 1;
    uint confirm_quit : 1;
    uint dead : 1;
    uint won : 1;
    uint show_body_preview : 1;
    uint show_trace : 1;
    uint frozen : 1;
    uint map_mode : 1;
    uint use_battle_music : 1;
    uint scroll_blocked : 1;
    uint lava_walls : 1;
    uint use_gamepad : 1;
    uint gamepad_cursor_mode : 1;
    uint left_cursor_mode : 1;
    uint hide_cursor : 1;
    uint ability_toggled0 : 1;
    uint ability_toggled1 : 1;
    uint ability_toggled2 : 1;
    uint seek_toggled : 2;
    uint portals_enabled : 2;
    uint block_mouse : 1;
    uint free_last_mutations : 1;
    int game_mode;
    int debug_view_mode;
    int exploding_corpses;
    real_2 camera_pos;
    float normal_camera_dist;
    float map_camera_dist;
    float camera_dist;
    float vision_radius;
    real_2 screenshake;
    real_2 screenshake_dot;
    uint credits_timer;
    float threat_level;
    int current_biome_ambient;
    int current_biome_battle;
    edit_menu em;
    sandbox_menu sm;
    inspector_menu im;
    int selected_body;
    float last_team;
    mutation_item_list last_mutations;
    real_2 spawn_x;
    float boss_heart_movement;
    float boss_heart_rotation;
    float boss_heart_accel;
    float boss_heart_vel;
    float boss_heart_omega;
    float boss_heart_omega_2;
    float boss_heart_omega_dot;
    float boss_heart_omega_dot_2;
    portal_t portals[2];
    body_id_table bodies;
    bone_id_table bones;
    union
    {
        uchar* body_auxiliary_data;
        expandable_buffer body_auxiliary_data_memory;
    };
    int body_auxiliary_size;
    union
    {
        id_index* cell_index_table;
        expandable_buffer cell_index_table_memory;
    };
    union
    {
        cell* cells;
        expandable_buffer cells_memory;
    };
    int n_cells;
    int max_cells;
    int next_cell_id;
    boss_gate* boss_gates;
    int n_boss_gates;
    lightning_emitter* lightning_emitters;
    int n_lightning_emitters;
    int max_lightning_emitters;
    int selected;
    int hovered;
    map_t map;
    int* hash_data;
    int* hashed_cells;
    int max_hashed_cells;
    real_3* hashed_pos;
    int* grid_data;
    int* grid_bodies;
    real_2* grid_pos;
    boss_part_t* boss_parts;
    int n_boss_parts;
    union
    {
        lightning_t* lightnings;
        expandable_buffer lightnings_memory;
    };
    int n_lightnings;
    int max_lightnings;
    union
    {
        laser_t* lasers;
        expandable_buffer lasers_memory;
    };
    int n_lasers;
    int max_lasers;
    union
    {
        explosion_t* explosions;
        expandable_buffer explosions_memory;
    };
    int n_explosions;
    int max_explosions;
    union
    {
        explosion_render_info* explosion_visuals;
        expandable_buffer explosion_visuals_memory;
    };
    int n_explosion_visuals;
    int max_explosion_visuals;
    union
    {
        radiant_render_info* radiant_visuals;
        expandable_buffer radiant_visuals_memory;
    };
    int n_radiant_visuals;
    int max_radiant_visuals;
    union
    {
        circle_render_info* stasis_visuals;
        expandable_buffer stasis_visuals_memory;
    };
    int n_stasis_visuals;
    int max_stasis_visuals;
    union
    {
        color_swatch_render_info* paint_visuals;
        expandable_buffer paint_visuals_memory;
    };
    int n_paint_visuals;
    int max_paint_visuals;
    union
    {
        particle_pusher_t* particle_pushers;
        expandable_buffer particle_pushers_memory;
    };
    int n_particle_pushers;
    int max_particle_pushers;
    union
    {
        link_attractor_t* link_attractors;
        expandable_buffer link_attractors_memory;
    };
    int n_link_attractors;
    int max_link_attractors;
    union
    {
        magnetic_field_t* magnetic_fields;
        expandable_buffer magnetic_fields_memory;
    };
    int n_magnetic_fields;
    int max_magnetic_fields;
    light_reciever_t* light_recievers;
    cell ** light_reciever_cells;
    int* light_reciever_values;
    int n_light_recievers;
    union
    {
        mutation_pickup* mutation_pickups;
        expandable_buffer mutation_pickups_memory;
    };
    int n_mutation_pickups;
    int max_mutation_pickups;
    union
    {
        cell_pickup* cell_pickups;
        expandable_buffer cell_pickups_memory;
    };
    int n_cell_pickups;
    int max_cell_pickups;
    union
    {
        particle_t* particles;
        expandable_buffer particles_memory;
    };
    int n_particles;
    int max_particles;
    union
    {
        acid_particle_16* acid_particles;
        expandable_buffer acid_particles_memory;
    };
    int n_acid_particles;
    int max_acid_particle_groups;
    union
    {
        biome_type* biome_types;
        expandable_buffer biome_types_memory;
    };
    int max_biome_types;
    int n_biome_types;
    union
    {
        biome_modifier* biome_modifiers;
        expandable_buffer biome_modifiers_memory;
    };
    int max_biome_modifiers;
    int n_biome_modifiers;
    tooltip_t tooltip;
    real_2 tooltip_x;
    real_2 tooltip_pickup_x;
    bool tooltip_active;
    real_2 gamepad_cursor_x;
    uint base_seed;
    uint seed;
    uint editor_seed;
    int frame_number;
    int tutorial_stage;
    char* current_tutorial;
    int map_prompt_timer;
    real_2 end_text_x;
    float fade_in;
    float wall_vision;
    float start_trans;
    uint loading_screen : 1;
    uint done_loading : 1;
    uint starting_game : 1;
    uint starting_new_run : 1;
    uint starting_sandbox : 1;
    uint has_save : 1;
    uint has_sandbox : 1;
    uint starting_mode;
    uint start_animation_done;
    init_world_params sandbox_start_params;
    float jet_volume;
    float acid_volume;
    float ink_volume;
    float vacuum_volume;
    float xp_volume;
    float lightning_volume;
    float thunder_volume;
    float singing_volume[96];
    final_boss_state final_boss;
    run_stats run;
    char * message_queue[16];
    int n_message_queue;
    float message_timer;
    print_buffer_t game_print_buffer;
    float game_print_timer;
    uint queued_seed;
    bool use_fixed_seed;
    bool is_seeded;
    lua_State* console_L;
    textbox console_box;
    command_result_t* console_history;
    int max_console_history;
    int n_console_history;
    int selected_command;
    bool show_console;
    char* stash_dir;
    translation_map translations;
    int n_languages;
    int language_index;
    int n_tips;
    workshop_published_item workshop_published[50];
    int n_workshop_published;
    int total_workshop_published;
    int workshop_published_page;
    render_context* rc;
    player_command_t player_commands[360];
    int player_command_start;
    int n_player_commands;
    int input_delay;
};
struct rectangle_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
};
struct link_attractor_t
{
    real_2 x;
    float strength;
    int bone_id;
};
// struct lfTaggedUnion
// {
//     ushort leaf;
//     CV_prop32_t property;
//     ushort casecount;
//     ulong caselist;
//     uchar data;
// };
struct cnd_t
{
    void* _Ptr;
};
// struct lconv
// {
//     char* decimal_point;
//     char* thousands_sep;
//     char* grouping;
//     char* int_curr_symbol;
//     char* currency_symbol;
//     char* mon_decimal_point;
//     char* mon_thousands_sep;
//     char* mon_grouping;
//     char* positive_sign;
//     char* negative_sign;
//     char int_frac_digits;
//     char frac_digits;
//     char p_cs_precedes;
//     char p_sep_by_space;
//     char n_cs_precedes;
//     char n_sep_by_space;
//     char p_sign_posn;
//     char n_sign_posn;
//     wchar_t* _W_decimal_point;
//     wchar_t* _W_thousands_sep;
//     wchar_t* _W_int_curr_symbol;
//     wchar_t* _W_currency_symbol;
//     wchar_t* _W_mon_decimal_point;
//     wchar_t* _W_mon_thousands_sep;
//     wchar_t* _W_positive_sign;
//     wchar_t* _W_negative_sign;
// };
// struct code_page_info
// {
//     int code_page;
//     ushort mbulinfo[6];
//     uchar[8] rgrange[4];
// };
struct boss_gate
{
    int_2 pos;
    int boss_id;
    int first_cell;
    int n_cells;
    int achievement_index;
};
struct cell_render_info
{
    real_3 x;
    real_2 body_x;
    real_2 r;
    float r_scale;
    real_4 color;
    float w_mult;
    float spark;
    int texture_type;
    real_2 uv;
    uint open_sides;
};
struct components_type
{
    uint _mantissa : 23;
    uint _exponent : 8;
    uint _sign : 1;
};
struct process_end_policy_properties
{
};
struct pmf_21b2b88d
{
};
struct pmf_72c97792
{
};
struct pmf_6a51ca05
{
};
struct windowing_model_policy_properties
{
};
// struct tss_global_data_t
// {
//     _RTL_SRWLOCK lock;
//     ulong tss_ptd_idx;
//     _func___cdecl_void_void_ptr ** dtor_table;
//     tss_ptd* ptd_list;
//     uint last_idx;
// };
struct cachedint
{
    int _value;
    bool _valid;
};
struct guard
{
    cachedint* _parent;
    cachedint _copy;
    bool _enabled;
};
// struct guard
// {
// };
struct scoped_get_last_error_reset
{
    ulong _old_last_error;
};
struct begin_thread_init_policy_properties
{
};
struct write_result
{
    ulong error_code;
    ulong char_count;
    ulong lf_count;
};
struct scoped_global_state_reset
{
};
struct scoped_fp_state_reset
{
    fenv_t _environment;
    bool _requires_reset;
};
struct fp_control_word_guard
{
    uint _original_control_word;
    uint _mask;
};
struct developer_information_policy_properties
{
};
struct big_integer
{
    uint _used;
    uint _data[115];
};
struct floating_point_value
{
    void* _value;
    bool _is_double;
};
struct floating_point_string
{
    int _exponent;
    uint _mantissa_count;
    uchar _mantissa[768];
    bool _is_negative;
};
struct unpack_index
{
    ushort _offset;
    uchar _zeroes;
    uchar _size;
};
// struct components_type
// {
//     ulong64 _mantissa : 52;
//     ulong64 _exponent : 11;
//     ulong64 _sign : 1;
// };
// struct StubPtr160_far64&_To_color_bar_render_info
// {
// };
struct exception
{
    longlong _padding_;
    __std_exception_data _Data;
};
struct bad_typeid
{
};
struct nothrow_t
{
};
struct exception_ptr
{
    void* _Data1;
    void* _Data2;
};
struct nested_exception
{
    longlong _padding_;
    exception_ptr _Exc;
};
struct bad_cast
{
};
struct strong_ordering
{
    schar _Value;
};
struct bad_optional_access
{
};
struct partial_ordering
{
    schar _Value;
};
struct bad_alloc
{
};
struct bad_array_new_length
{
};
struct in_place_t
{
};
struct bad_variant_access
{
};
struct bad_exception
{
};
struct nullopt_t
{
};
struct weak_ordering
{
    schar _Value;
};
struct dangling
{
};
struct errentry
{
    ulong oscode;
    int errnocode;
};
struct environment_strings_traits
{
};
struct beginthread_thunk_data
{
    int (*real_entry)(void *);
    void* data;
};
struct filwbuf_context
{
    bool _is_split_character;
    uchar _leftover_low_order_byte;
};
// struct formatting_buffer
// {
//     char _member_buffer[1024];
//     ulonglong _dynamic_buffer_size;
//     __crt_unique_heap_ptrchar,__crt_internal_free_policy _dynamic_buffer;
// };
// struct state_transition_pair
// {
//     state next_state;
//     character_type current_class;
// };
// struct parameter_data
// {
//     parameter_type _actual_type;
//     char _format_type;
//     char* _valist_it;
//     length_modifier _length;
// };
// struct parameter_data
// {
//     parameter_type _actual_type;
//     wchar_t _format_type;
//     char* _valist_it;
//     length_modifier _length;
// };
// struct parameter_data
// {
//     parameter_type _actual_type;
//     char _format_type;
//     char* _valist_it;
//     length_modifier _length;
// };
// struct parameter_data
// {
//     parameter_type _actual_type;
//     wchar_t _format_type;
//     char* _valist_it;
//     length_modifier _length;
// };
struct file_options
{
    char crt_flags;
    ulong access;
    ulong create;
    ulong share;
    ulong attributes;
    ulong flags;
};