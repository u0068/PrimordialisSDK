#pragma once

#include <windows.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct DName DName;
typedef struct DNameNode DNameNode;
typedef struct HGLRC__ HGLRC__;
typedef struct HWND__ HWND__;
typedef struct IAudioClient IAudioClient;
typedef struct IAudioRenderClient IAudioRenderClient;
typedef struct IMMDevice IMMDevice;
typedef struct _RTL_SRWLOCK _RTL_SRWLOCK;
typedef struct acid_particle_16 acid_particle_16;
typedef struct biome_core biome_core;
typedef struct biome_edge biome_edge;
typedef struct biome_entrance biome_entrance;
typedef struct biome_modifier biome_modifier;
typedef struct biome_node biome_node;
typedef struct biome_type biome_type;
typedef struct body body;
typedef struct bone bone;
typedef struct boss_gate boss_gate;
typedef struct boss_part_t boss_part_t;
typedef struct bounding_box_2 bounding_box_2;
typedef struct cell cell;
typedef struct cell_item cell_item;
typedef struct cell_pickup cell_pickup;
typedef struct circle_render_info circle_render_info;
typedef struct color_swatch_render_info color_swatch_render_info;
typedef struct command_result_t command_result_t;
typedef struct contact contact;
typedef struct creature_spawner creature_spawner;
typedef struct digger_t digger_t;
typedef struct doorway doorway;
typedef struct draggable_button draggable_button;
typedef struct explosion_render_info explosion_render_info;
typedef struct explosion_t explosion_t;
typedef struct id_index id_index;
typedef struct int_2 int_2;
typedef struct lane_group_t lane_group_t;
typedef struct laser_t laser_t;
typedef struct light_reciever_t light_reciever_t;
typedef struct lightning_emitter lightning_emitter;
typedef struct lightning_t lightning_t;
typedef struct line_render_info line_render_info;
typedef struct link_attractor_t link_attractor_t;
typedef struct looping_sound looping_sound;
typedef struct lua_State lua_State;
typedef struct magnetic_field_t magnetic_field_t;
typedef struct memory_manager memory_manager;
typedef struct mutation_item mutation_item;
typedef struct mutation_pickup mutation_pickup;
typedef struct particle_pusher_t particle_pusher_t;
typedef struct particle_t particle_t;
typedef struct plan_cell plan_cell;
typedef struct profiler_frame profiler_frame;
typedef struct queued_sound queued_sound;
typedef struct radiant_render_info radiant_render_info;
typedef struct real_2 real_2;
typedef struct real_3 real_3;
typedef struct real_4 real_4;
typedef struct render_context render_context;
typedef struct room_t room_t;
typedef struct saved_body_plan saved_body_plan;
typedef struct sound_t sound_t;
typedef struct stashed_body_plan stashed_body_plan;
typedef struct static_button static_button;
typedef struct static_cell static_cell;
typedef struct stbtt__active_edge stbtt__active_edge;
typedef struct stbtt__hheap_chunk stbtt__hheap_chunk;
typedef struct stbtt_packedchar stbtt_packedchar;
typedef struct stbtt_vertex stbtt_vertex;
typedef struct tWAVEFORMATEX tWAVEFORMATEX;
typedef struct trace_node trace_node;
typedef struct trace_t trace_t;
typedef struct translation_list translation_list;
typedef struct tss_ptd tss_ptd;
typedef struct tunnel_tile tunnel_tile;
typedef struct uint8_4 uint8_4;
typedef struct undo_state undo_state;
typedef struct user_input user_input;
typedef struct workshop_body_plan workshop_body_plan;

typedef struct real_2
{
    union
    {
        struct
        {
            float x;
            float y;
        } real_2_u_0_s_0;

        float data[2];
    } real_2_u_0;

} real_2;

typedef struct real_3
{
    union
    {
        struct
        {
            float x;
            float y;
            float z;
        } real_3_u_0_s_0;

        real_2 xy;
        struct
        {
            float __x0;
            real_2 yz;
        } real_3_u_0_s_2;

        float data[3];
    } real_3_u_0;

} real_3;

typedef struct real_4
{
    union
    {
        struct
        {
            float x;
            float y;
            float z;
            float w;
        } real_4_u_0_s_0;

        real_2 xy;
        struct
        {
            float __x0;
            real_2 yz;
        } real_4_u_0_s_2;

        real_3 xyz;
        struct
        {
            float _x0;
            real_3 yzw;
        } real_4_u_0_s_4;

        float data[4];
    } real_4_u_0;

} real_4;

typedef struct arc_render_info
{
    real_3 x;
    real_2 d0;
    real_2 d1;
    float R;
    float r;
    real_4 color;
} arc_render_info;

typedef struct final_boss_state
{
    union
    {
        struct
        {
            uint8_t active : 1;
            uint8_t ready : 1;
        } final_boss_state_u_0_s_0;

        uint8_t active_flags;
    } final_boss_state_u_0;

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
    float extra_radius;
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
} final_boss_state;

typedef struct pickup_node
{
    int mutation_index;
    real_2 x_rel;
    float r;
    float r_dot;
    float alpha;
    bool is_selected;
} pickup_node;

typedef struct int_2
{
    union
    {
        struct
        {
            int x;
            int y;
        } int_2_u_0_s_0;

        int data[2];
    } int_2_u_0;

} int_2;

typedef struct int_3
{
    union
    {
        struct
        {
            int x;
            int y;
            int z;
        } int_3_u_0_s_0;

        int_2 xy;
        struct
        {
            int __x0;
            int_2 yz;
        } int_3_u_0_s_2;

        int data[3];
    } int_3_u_0;

} int_3;

typedef struct bounding_box_3
{
    int_3 l;
    int_3 u;
} bounding_box_3;

typedef struct floodfill_piece
{
    int start_index;
    int n_cells;
    int n_hearts;
    int n_cancers;
    float health;
    float cost;
    bounding_box_3 region;
} floodfill_piece;

typedef struct biome_weights
{
    int_3 biomes;
    real_3 weights;
} biome_weights;

typedef struct stbtt__buf
{
    uint8_t* data;
    int cursor;
    int size;
} stbtt__buf;

typedef struct hexagon_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} hexagon_render_info;

typedef struct explosion_render_info
{
    real_3 x;
    float r;
    float time;
    float duration;
    float distortion;
    real_4 color1;
    real_4 color2;
} explosion_render_info;

typedef struct hex_uint
{
    uint32_t value;
} hex_uint;

typedef struct stbtt_packedchar
{
    uint16_t x0;
    uint16_t y0;
    uint16_t x1;
    uint16_t y1;
    float xoff;
    float yoff;
    float xadvance;
    float xoff2;
    float yoff2;
} stbtt_packedchar;

typedef struct creature_spawner
{
    int body_id;
    int creature_index;
    real_2 spawn_location;
    int xp;
} creature_spawner;

typedef struct particle_pusher_t
{
    real_2 x;
    real_2 d;
    float strength;
    float inv_dsq;
} particle_pusher_t;

typedef struct ring_render_info
{
    real_3 x;
    float ri;
    float ro;
    real_4 color;
} ring_render_info;

typedef struct thrd_t
{
    void* _Handle;
    uint32_t _Tid;
} thrd_t;

typedef struct portal_t
{
    real_2 x;
    real_2 x_dot;
} portal_t;

typedef struct bounding_box_2
{
    int_2 l;
    int_2 u;
} bounding_box_2;

typedef struct body_plan
{
    plan_cell* plan_cells;
    int n_plan_cells;
    int max_plan_cells;
    int n_dragged_cells;
    int* plan_id_map;
    bounding_box_2 region;
    int half_hex_rotation;
} body_plan;

typedef struct undo_state
{
    body_plan plan;
    int_2 last_drawn_point;
    int mode;
} undo_state;

typedef struct trace_node
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
} trace_node;

typedef struct stbtt__csctx
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
} stbtt__csctx;

typedef struct gamepad_t
{
    uint32_t gamepads_connected;
    short buttons;
    float left_trigger;
    float right_trigger;
    real_2 left_stick;
    real_2 right_stick;
} gamepad_t;

typedef struct lane_context_t
{
    int lane_index;
    lane_group_t* group;
} lane_context_t;

typedef struct lightning_t
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
            uint32_t n_points : 16;
            uint32_t type : 1;
        } lightning_t_u_160_s_0;

        uint32_t n_points_and_type;
    } lightning_t_u_160;

    real_4 color;
} lightning_t;

typedef struct wall_t
{
    float dist;
    real_2 gradient;
    real_2 flow;
    float air_dist;
} wall_t;

typedef struct color_swatch_render_info
{
    real_3 x;
    float r;
    real_4 color;
    float scale;
    uint32_t pinned;
} color_swatch_render_info;

typedef struct stbtt__active_edge
{
    stbtt__active_edge* next;
    float fx;
    float fdx;
    float fdy;
    float direction;
    float sy;
    float ey;
} stbtt__active_edge;

typedef struct box_real_2
{
    real_2 l;
    real_2 u;
} box_real_2;

typedef union id_t
{
    struct
    {
        uint64_t lo;
        uint64_t hi;
    } id_t_s_0;

    char string[16];
} id_t;

typedef struct mutation_type
{
    id_t id;
    float weight;
    float cum_weight;
    real_2 uv;
    int extra_data_offset;
    int n_imbues;
    uint32_t no_stacking : 1;
} mutation_type;

typedef struct mutation_pickup
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
} mutation_pickup;

typedef struct text_params
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
    float fixed_width;
} text_params;

typedef struct file_info
{
    uint32_t is_directory : 1;
} file_info;

typedef struct trace_t
{
    trace_node* trace_nodes;
    int n_trace_nodes;
    int type;
    int frame_number;
} trace_t;

typedef struct profiler_frame
{
    trace_t traces[3];
    int n_traces;
} profiler_frame;

typedef struct stbtt_aligned_quad
{
    float x0;
    float y0;
    float s0;
    float t0;
    float x1;
    float y1;
    float s1;
    float t1;
} stbtt_aligned_quad;

typedef struct singing_channel
{
    float volume;
    float target_volume;
    float phase;
    union
    {
        float next_target_volume;
        int64_t next_target_volume_data;
    } singing_channel_u_12;

} singing_channel;

typedef struct laser_render_info
{
    real_3 x;
    real_2 d;
    float r;
    real_4 color;
} laser_render_info;

typedef struct lightning_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} lightning_render_info;

typedef struct slider_t
{
    float t;
    float width;
    float radius;
    float radius_dot;
    bool dragging;
    bool was_hovered;
    bool active;
} slider_t;

typedef struct exp_data
{
    double invln2N;
    double shift;
    double negln2hiN;
    double negln2loN;
    double poly[4];
    double exp2_shift;
    double exp2_poly[5];
    int64_t tab[512];
} exp_data;

typedef struct print_buffer_t
{
    char* base;
    char* end;
    char* buffer;
} print_buffer_t;

// typedef struct lfClass2
// {
//     uint16_t leaf;
//     CV_prop32_t property;
//     uint64_t field;
//     uint64_t derived;
//     uint64_t vshape;
//     uint16_t count;
//     uint8_t data;
// } lfClass2;

typedef struct texture_t
{
    uint32_t handle;
    int_2 size;
} texture_t;

typedef struct print_format
{
    int argument;
} print_format;

typedef struct printer
{
    int count;
    print_format format;
} printer;

typedef struct stbtt_vertex
{
    short x;
    short y;
    short cx;
    short cy;
    short cx1;
    short cy1;
    uint8_t type;
    uint8_t padding;
} stbtt_vertex;

typedef struct magnetic_field_t
{
    cell* c;
    real_3 moment;
} magnetic_field_t;

typedef struct translation_map_kash_t
{
    char* key;
    uint32_t hash;
} translation_map_kash_t;

typedef struct textbox
{
    char* text;
    int max_text;
    int n_text;
    int cursor;
    int selection_start;
    int selection_end;
    int active;
} textbox;

typedef struct mutation_item_list
{
    mutation_item* items;
    int n_items;
    int max_items;
} mutation_item_list;

typedef struct explosion_t
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
    } explosion_t_u_32;

    uint32_t ignore_body;
    uint32_t recolor : 1;
} explosion_t;

typedef struct static_button
{
    float r;
    float r_dot;
    float state;
    float tooltip_alpha;
    bool was_hovered;
} static_button;

typedef struct expandable_buffer
{
    uint8_t* memory;
    uint64_t reserved_size;
    uint64_t committed_size;
} expandable_buffer;

typedef struct tooltip_t
{
    real_2 box_size;
    real_2 pos;
    float alpha;
    int last_hovered_index;
    int last_hovered_type;
    int last_hovered_imbue;
    real_2 last_hovered_mutation_pos;
    uint32_t is_combo : 1;
    uint32_t consumable_instructions;
} tooltip_t;

typedef struct edit_menu
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
    } edit_menu_u_64;

    int max_cell_items;
    int n_cell_items;
    int* queued_dropped_bodies;
    int n_queued_dropped_bodies;
    int max_queued_dropped_bodies;
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
    uint8_t* dragged_open_sides;
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
    } edit_menu_u_8472;

    int n_stashed;
    int max_stashed;
    union
    {
        saved_body_plan* saved;
        expandable_buffer saved_memory;
    } edit_menu_u_8504;

    int n_saved;
    int max_saved;
    union
    {
        workshop_body_plan* workshop;
        expandable_buffer workshop_memory;
    } edit_menu_u_8536;

    int n_workshop;
    int max_workshop;
    union
    {
        static_button* panel_buttons;
        expandable_buffer panel_buttons_memory;
    } edit_menu_u_8568;

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
    uint8_t* dists;
    bounding_box_2 visible_region;
    int n_warnings[3];
    int warning_index[3];
    real_2 warning_box_size[3];
    char* stash_dir;
    tooltip_t tooltip;
} edit_menu;

typedef struct circle_render_info
{
    real_3 x;
    float r;
    real_4 color;
} circle_render_info;

typedef struct saver_t
{
    uint32_t pending_save;
    uint32_t pending_map_edits;
    char temp_player_filename[256];
    char temp_world_filename[256];
    char final_player_filename[256];
    char final_world_filename[256];
    uint8_t* serialized_player;
    uint64_t max_serialized_player_size;
    uint64_t serialized_player_size;
    uint64_t player_written_size;
    uint8_t* serialized_world;
    uint64_t max_serialized_world_size;
    uint64_t serialized_world_size;
    uint64_t world_written_size;
    void* world_file;
    void* player_file;
    void* world_filemapping;
    void* player_filemapping;
    uint8_t* world_mapview;
    uint8_t* player_mapview;
    char temp_map_edits_filename[256];
    char final_map_edits_filename[256];
    uint8_t* serialized_map_edits;
    uint64_t max_serialized_map_edits_size;
    uint64_t serialized_map_edits_size;
    uint64_t map_edits_written_size;
    void* map_edits_file;
    void* map_edits_filemapping;
    uint8_t* map_edits_mapview;
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
} saver_t;

typedef struct uint8_2
{
    union
    {
        struct
        {
            uint8_t x;
            uint8_t y;
        } uint8_2_u_0_s_0;

        uint8_t data[2];
    } uint8_2_u_0;

} uint8_2;

typedef struct translation_list
{
    char ** text;
    char* formatted;
    uint64_t max_formatted;
} translation_list;

typedef struct uint8_3
{
    union
    {
        struct
        {
            uint8_t x;
            uint8_t y;
            uint8_t z;
        } uint8_3_u_0_s_0;

        uint8_2 xy;
        struct
        {
            uint8_t __x0;
            uint8_2 yz;
        } uint8_3_u_0_s_2;

        uint8_t data[3];
    } uint8_3_u_0;

} uint8_3;

typedef struct uint8_4
{
    union
    {
        struct
        {
            uint8_t x;
            uint8_t y;
            uint8_t z;
            uint8_t w;
        } uint8_4_u_0_s_0;

        uint8_2 xy;
        struct
        {
            uint8_t __x0;
            uint8_2 yz;
        } uint8_4_u_0_s_2;

        uint8_3 xyz;
        struct
        {
            uint8_t _x0;
            uint8_3 yzw;
        } uint8_4_u_0_s_4;

        uint8_t data[4];
    } uint8_4_u_0;

} uint8_4;

typedef struct mutation_item
{
    int mutation_index;
    int imbues[4];
    real_2 pos;
    float r;
    float r_dot;
} mutation_item;

typedef struct creature_t
{
    uint32_t id;
    uint32_t ___id_null_termination;
    char* filename;
    mutation_item mutations[32];
    int n_mutations;
    float cost_discount;
    float abstract_speed;
    uint32_t show_damage_numbers : 1;
    uint32_t snap : 1;
    uint32_t pickupable : 1;
    uint32_t die_on_activation : 1;
    uint32_t hidden : 1;
    body_plan plan;
    void* ai_func;
    void* spawn_func;
    void* death_func;
    void* boss_drop_func;
    void* generation_func;
    char lua_func[128];
    char lua_spawn_func[128];
    char lua_death_func[128];
} creature_t;

typedef struct slider_params
{
    float full_width;
    real_2 pos;
    bool active;
} slider_params;

typedef struct translation_map
{
    char ** keys;
    translation_list* values;
    uint32_t max_entries;
} translation_map;

typedef struct unnamed_type_colors
{
    real_3 color0;
    real_3 color1;
    real_3 color2;
    real_3 color3;
    real_3 color4;
} unnamed_type_colors;

typedef struct color_bar_render_info
{
    float min;
    float low;
    float mid;
    float high;
    float max;
    unnamed_type_colors colors;
    uint32_t do_square;
} color_bar_render_info;

typedef struct id_t_index
{
    id_t id;
    int index;
} id_t_index;

typedef struct rle_pair
{
    float value;
    int count;
} rle_pair;

typedef struct healthbar_t
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
} healthbar_t;

typedef struct strand
{
    char* str;
    int len;
} strand;

typedef struct spawn_creature_params
{
    int body_id;
    real_2 orientation;
    uint32_t spawn_cells : 1;
    uint32_t plant : 1;
    uint32_t dont_load_plan : 1;
} spawn_creature_params;

typedef struct biome_entrance
{
    int core_a;
    int core_b;
    int n_entrances;
    uint32_t boss_id;
    int boss_xp;
    spawn_creature_params boss_params;
    int achievement_index;
    uint32_t not_boss : 1;
    uint32_t direct : 1;
    uint32_t optional : 1;
    uint32_t room_exit : 1;
} biome_entrance;

typedef struct uint_2
{
    union
    {
        struct
        {
            uint32_t x;
            uint32_t y;
        } uint_2_u_0_s_0;

        uint32_t data[2];
    } uint_2_u_0;

} uint_2;

typedef struct uint_3
{
    union
    {
        struct
        {
            uint32_t x;
            uint32_t y;
            uint32_t z;
        } uint_3_u_0_s_0;

        uint_2 xy;
        struct
        {
            uint32_t __x0;
            uint_2 yz;
        } uint_3_u_0_s_2;

        uint32_t data[3];
    } uint_3_u_0;

} uint_3;

typedef struct uint_4
{
    union
    {
        struct
        {
            uint32_t x;
            uint32_t y;
            uint32_t z;
            uint32_t w;
        } uint_4_u_0_s_0;

        uint_2 xy;
        struct
        {
            uint32_t __x0;
            uint_2 yz;
        } uint_4_u_0_s_2;

        uint_3 xyz;
        struct
        {
            uint32_t _x0;
            uint_3 yzw;
        } uint_4_u_0_s_4;

        uint32_t data[4];
    } uint_4_u_0;

} uint_4;

typedef struct cell_extra
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
} cell_extra;

typedef struct cell
{
    union
    {
        int id;
        int id_packed[16];
    } cell_u_0;

    union
    {
        int body_id;
        int body_id_packed[16];
    } cell_u_64;

    union
    {
        int bone_id;
        int bone_id_packed[16];
    } cell_u_128;

    union
    {
        int material_index;
        int material_index_packed[16];
    } cell_u_192;

    union
    {
        float voltage;
        float voltage_packed[16];
    } cell_u_256;

    union
    {
        float voltage_dot;
        float voltage_dot_packed[16];
    } cell_u_320;

    union
    {
        float peak_voltage;
        float peak_voltage_packed[16];
    } cell_u_384;

    float directional_voltage[96];
    float directional_eq_voltage[96];
    float directional_conductance[96];
    union
    {
        float shock;
        float shock_packed[16];
    } cell_u_1600;

    union
    {
        float temperature;
        float temperature_packed[16];
    } cell_u_1664;

    union
    {
        float frozen_multiplier;
        float frozen_multiplier_packed[16];
    } cell_u_1728;

    union
    {
        float maturity;
        float maturity_packed[16];
    } cell_u_1792;

    union
    {
        float health;
        float health_packed[16];
    } cell_u_1856;

    union
    {
        float damage;
        float damage_packed[16];
    } cell_u_1920;

    union
    {
        float bloodless_damage;
        float bloodless_damage_packed[16];
    } cell_u_1984;

    union
    {
        float screenshakeless_damage;
        float screenshakeless_damage_packed[16];
    } cell_u_2048;

    union
    {
        float burn_damage;
        float burn_damage_packed[16];
    } cell_u_2112;

    union
    {
        float ice_damage;
        float ice_damage_packed[16];
    } cell_u_2176;

    union
    {
        float healing;
        float healing_packed[16];
    } cell_u_2240;

    union
    {
        float dealt;
        float dealt_packed[16];
    } cell_u_2304;

    union
    {
        float explosive_damage_multiplier;
        float explosive_damage_multiplier_packed[16];
    } cell_u_2368;

    union
    {
        float heat_damage_multiplier;
        float heat_damage_multiplier_packed[16];
    } cell_u_2432;

    union
    {
        float poison;
        float poison_packed[16];
    } cell_u_2496;

    union
    {
        float mutagen;
        float mutagen_packed[16];
    } cell_u_2560;

    union
    {
        int mutagen_material_index;
        int mutagen_material_index_packed[16];
    } cell_u_2624;

    union
    {
        float leeching;
        float leeching_packed[16];
    } cell_u_2688;

    union
    {
        float value;
        float value_packed[16];
    } cell_u_2752;

    union
    {
        float value2;
        float value2_packed[16];
    } cell_u_2816;

    union
    {
        int n_colors;
        int n_colors_packed[16];
    } cell_u_2880;

    union
    {
        float mass;
        float mass_packed[16];
    } cell_u_2944;

    union
    {
        float x;
        float x_packed[16];
    } cell_u_3008;

    union
    {
        float y;
        float y_packed[16];
    } cell_u_3072;

    union
    {
        float x_dot;
        float x_dot_packed[16];
    } cell_u_3136;

    union
    {
        float y_dot;
        float y_dot_packed[16];
    } cell_u_3200;

    union
    {
        float rot_x;
        float rot_x_packed[16];
    } cell_u_3264;

    union
    {
        float rot_y;
        float rot_y_packed[16];
    } cell_u_3328;

    union
    {
        float curl_x;
        float curl_x_packed[16];
    } cell_u_3392;

    union
    {
        float curl_y;
        float curl_y_packed[16];
    } cell_u_3456;

    union
    {
        float r;
        float r_packed[16];
    } cell_u_3520;

    union
    {
        float base_r;
        float base_r_packed[16];
    } cell_u_3584;

    union
    {
        float range_multiplier;
        float range_multiplier_packed[16];
    } cell_u_3648;

    float spacing[96];
    union
    {
        float target_spacing;
        float target_spacing_packed[16];
    } cell_u_4096;

    union
    {
        uint32_t flags;
        uint32_t flags_packed[16];
        struct
        {
            uint32_t open_sides : 6;
            uint32_t touched : 1;
            uint32_t health_gated : 1;
            uint32_t kill : 1;
            uint32_t floodfill_needed : 1;
            uint32_t linking : 1;
            uint32_t link_attracting : 1;
            uint32_t self_touching : 1;
            uint32_t poison_immune : 2;
            uint32_t nontrivial_bone : 1;
            uint32_t temp_rigid : 1;
            uint32_t cell_collision : 1;
            uint32_t no_explosive_regen_delay : 1;
            uint32_t has_brain_fn : 1;
            uint32_t recolored : 1;
            uint32_t sync_health : 1;
            uint32_t custom_mass : 1;
        } cell_u_4160_s_2;

    } cell_u_4160;

    union
    {
        float light_radius;
        float light_radius_packed[16];
    } cell_u_4224;

    union
    {
        int n_contacts;
        int n_contacts_packed[16];
    } cell_u_4288;

    union
    {
        float stickyness;
        float stickyness_packed[16];
    } cell_u_4352;

    union
    {
        float stickyness_timer;
        float stickyness_timer_packed[16];
    } cell_u_4416;

    union
    {
        float wall_force;
        float wall_force_packed[16];
    } cell_u_4480;

    union
    {
        int attached;
        int attached_packed[16];
    } cell_u_4544;

    union
    {
        int linked;
        int linked_packed[16];
    } cell_u_4608;

    union
    {
        float phasing;
        float phasing_packed[16];
    } cell_u_4672;

    union
    {
        float drag_reduction;
        float drag_reduction_packed[16];
    } cell_u_4736;

    union
    {
        float detected_light;
        float detected_light_packed[16];
    } cell_u_4800;

    union
    {
        float map_light;
        float map_light_packed[16];
    } cell_u_4864;

    union
    {
        float voltage_multiplier;
        float voltage_multiplier_packed[16];
    } cell_u_4928;

    union
    {
        float rigidity;
        float rigidity_packed[16];
    } cell_u_4992;

    union
    {
        float stasis;
        float stasis_packed[16];
    } cell_u_5056;

    union
    {
        uint32_t floodfilled;
        uint32_t floodfilled_packed[16];
    } cell_u_5120;

    union
    {
        float old_voltage;
        float old_voltage_packed[16];
    } cell_u_5184;

    union
    {
        float old_temperature;
        float old_temperature_packed[16];
    } cell_u_5248;

    union
    {
        float old_health;
        float old_health_packed[16];
    } cell_u_5312;

    union
    {
        float equilibrium_voltage;
        float equilibrium_voltage_packed[16];
    } cell_u_5376;

    union
    {
        float total_conductance;
        float total_conductance_packed[16];
    } cell_u_5440;

    union
    {
        float equilibrium_temperature;
        float equilibrium_temperature_packed[16];
    } cell_u_5504;

    union
    {
        float total_heat_conductance;
        float total_heat_conductance_packed[16];
    } cell_u_5568;

    union
    {
        float wall_temperature;
        float wall_temperature_packed[16];
    } cell_u_5632;

    cell_extra extra_fields[16];
} cell;

typedef struct map_floodfill_piece
{
    int id;
    int n_hexes;
    bounding_box_2 bounds;
} map_floodfill_piece;

typedef struct button_out
{
    bool clicked;
    bool hovered;
} button_out;

// typedef struct pow_log_data
// {
//     double ln2hi;
//     double ln2lo;
//     double poly[7];
//     unnamed_0092 tab[128];
// } pow_log_data;

typedef struct material_t
{
    uint32_t id;
    char* name;
    int next_variant;
    uint32_t tags;
    uint32_t tier;
    float drop_weight;
    int spawn_with[4];
    float base_cost;
    float random_cost;
    float genome_size;
    float growth_rate;
    float max_health;
    float transfer_rate;
    float regen;
    float regen_delay_multiplier;
    union
    {
        struct
        {
            uint32_t attach_to_cells : 1;
            uint32_t attach_to_walls : 1;
            uint32_t poison_immune : 2;
            uint32_t no_electric_growth : 1;
            uint32_t penetrate_walls : 1;
            uint32_t self_touching : 1;
            uint32_t is_cancer : 1;
            uint32_t is_directional : 1;
            uint32_t show_adjacency : 1;
            uint32_t show_direction : 1;
            uint32_t show_neighbor_direction : 1;
            uint32_t is_hard : 1;
            uint32_t play_note : 1;
            uint32_t no_recolor : 1;
            uint32_t sync_health : 1;
            uint32_t is_stem : 1;
        } material_t_u_80_s_0;

        uint32_t flags;
    } material_t_u_80;

    float density;
    float sharpness;
    float leeching;
    float hardness;
    float max_radial_force;
    float max_angular_force;
    float base_radius;
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
    void* physics_update_fn;
    void* force_update_fn;
    void* electric_update_fn;
    void* connection_update_fn;
    void* brain_fn;
    void* destroyed_fn;
} material_t;

typedef struct exp2f_data
{
    int64_t tab[32];
    double shift_scaled;
    double poly[3];
    double shift;
    double invln2_scaled;
    double poly_scaled[3];
} exp2f_data;

typedef struct stbtt__hheap
{
    stbtt__hheap_chunk* head;
    void* first_free;
    int num_remaining_in_head_chunk;
} stbtt__hheap;

typedef struct sound_t
{
    short* data;
    int n_channels;
    int n_samples;
} sound_t;

typedef struct stbtt_kerningentry
{
    int glyph1;
    int glyph2;
    int advance;
} stbtt_kerningentry;

typedef struct boss_part_t
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
} boss_part_t;

typedef struct room_t
{
    uint32_t cleared : 1;
    int first_spawner;
    int n_spawners;
} room_t;

typedef struct translation_info
{
    int mutagen_material_index;
    int combine_material_index;
} translation_info;

typedef struct fiber_init_data
{
    int fiber_index;
    lane_group_t* group;
} fiber_init_data;

typedef struct bone_id_table
{
    union
    {
        id_index* index_table;
        expandable_buffer index_table_memory;
    } bone_id_table_u_0;

    int n_max_elements;
    int next_id;
    union
    {
        bone* elements;
        expandable_buffer elements_memory;
    } bone_id_table_u_32;

    int n_elements;
} bone_id_table;

typedef struct circular_buffer_t
{
    uint8_t* buffer;
    uint64_t size;
} circular_buffer_t;

typedef struct brown_sound
{
    float value;
    float filtered_value;
    float volume;
    float target_volume;
    union
    {
        float next_target_volume;
        int64_t next_target_volume_data;
    } brown_sound_u_16;

    float lowpass;
    float target_lowpass;
    union
    {
        float next_lowpass;
        int64_t next_lowpass_data;
    } brown_sound_u_28;

    float lerp_rate;
} brown_sound;

typedef struct audio_context
{
    bool initialized;
    IMMDevice* device;
    IAudioClient* audio_client;
    IAudioRenderClient* render_client;
    tWAVEFORMATEX* wfx;
    uint32_t buffer_frame_count;
    uint32_t n_frames_available;
    uint32_t n_frames_padding;
    uint32_t internal_sample_rate;
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
    uint64_t next_queued_sound;
    uint64_t last_queued_sound;
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
        int64_t next_target_music_transition_speed_data;
    } audio_context_u_1752;

} audio_context;

typedef struct map_t
{
    uint32_t seed;
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
    uint8_t* track_dists;
    uint32_t* flags;
    uint32_t* blocked_spawns;
    uint8_t* edits;
    uint8_t* save_hexes;
    int_2 save_origin;
    int map_edits_number;
    int saved_map_edits_number;
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
    real_2* background_vertex_x;
    real_4* background_vertex_color;
    int n_background_triangles;
} map_t;

typedef struct line_render_info
{
    real_3 x;
    real_2 d;
    float r;
    real_4 color;
} line_render_info;

typedef struct raycast_result
{
    wall_t wall;
    float length;
} raycast_result;

typedef struct stbtt_pack_range
{
    float font_size;
    int first_unicode_codepoint_in_range;
    int* array_of_unicode_codepoints;
    int num_chars;
    stbtt_packedchar* chardata_for_range;
    uint8_t h_oversample;
    uint8_t v_oversample;
} stbtt_pack_range;

typedef struct saved_body_plan
{
    uint32_t is_folder : 1;
    uint32_t expanded : 1;
    uint32_t level : 30;
    char name[512];
    real_2 pos;
    float expand_t;
} saved_body_plan;

typedef struct looping_sound
{
    int type;
    sound_t sound;
    float volume;
    float target_volume;
    union
    {
        float next_target_volume;
        int64_t next_target_volume_data;
    } looping_sound_u_32;

    float lerp_rate;
    double pos;
    int loop_overlap;
    int* start_points;
    int n_start_points;
    bool ready;
} looping_sound;

typedef struct stbtt__edge
{
    float x0;
    float y0;
    float x1;
    float y1;
    int invert;
} stbtt__edge;

typedef struct doorway
{
    int rooms[3];
    int n_rooms;
    int_2 pos;
    int first_cell;
    int n_cells;
    float value;
    int adjacent_doors[6];
    uint32_t changed : 2;
} doorway;

typedef struct game_sounds_t
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
} game_sounds_t;

typedef struct mtx_t
{
    uint64_t _Type;
    void* _Ptr;
    void* _Cv;
    uint32_t _Owner;
    uint32_t _Cnt;
} mtx_t;

typedef struct tunnel_tile
{
    int_2 pos;
    int index;
    float value;
} tunnel_tile;

typedef struct workshop_body_plan
{
    uint64_t workshop_id;
    char name[512];
    char path[512];
    real_2 pos;
} workshop_body_plan;

typedef struct run_stats
{
    double start_time;
    double end_time;
    uint32_t frames;
    uint32_t seed;
    int biomes_explored;
    int xp;
    int level;
    uint32_t ending;
    int creature_deaths;
    uint32_t death_biome;
} run_stats;

typedef struct body_id_table
{
    union
    {
        id_index* index_table;
        expandable_buffer index_table_memory;
    } body_id_table_u_0;

    int n_max_elements;
    int next_id;
    union
    {
        body* elements;
        expandable_buffer elements_memory;
    } body_id_table_u_32;

    int n_elements;
} body_id_table;

typedef struct decompressed_map_data
{
    int version_number;
    bounding_box_2 region;
    uint8_t* data;
    int size;
} decompressed_map_data;

typedef struct tss_t
{
    uint32_t _Idx;
} tss_t;

typedef struct stbtt_fontinfo
{
    void* userdata;
    uint8_t* data;
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
} stbtt_fontinfo;

typedef struct font_info
{
    uint32_t texture;
    stbtt_fontinfo info;
    float size;
    stbtt_packedchar* char_data;
} font_info;

typedef struct text_info
{
    char* text;
    real_2 x;
    real_4 color;
    real_2 alignment;
    font_info font;
    text_params params;
    real_4 background_color;
    float background_radius;
} text_info;

typedef struct pDNameNode
{
    int64_t _padding_;
    DName* me;
} pDNameNode;

typedef struct digger_t
{
    real_2 x;
    float r;
    int duration;
} digger_t;

typedef struct fenv_t
{
    uint64_t _Fe_ctl;
    uint64_t _Fe_stat;
} fenv_t;

typedef struct light_render_info
{
    real_3 x;
    float r;
    real_4 color;
} light_render_info;

typedef struct mat_and_color
{
    int material_index;
    real_4 color;
} mat_and_color;

typedef struct bitmap_t
{
    uint8_4* data;
    int_2 size;
    uint32_t texture;
} bitmap_t;

typedef struct rectangle_space
{
    int_2 max_size;
    bounding_box_2* free_regions;
    int n_free_regions;
} rectangle_space;

typedef struct inspector_menu
{
    int body_id;
    int_2 selected_cell_coord;
    int selected_variable;
    float min;
    float max;
    float low;
    float high;
    uint32_t show_cell_icons : 1;
    uint32_t dragging : 1;
    uint32_t graph_open : 1;
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
} inspector_menu;

typedef struct charNode
{
    int64_t _padding_;
    char me;
} charNode;

typedef struct stbtt__bitmap
{
    int w;
    int h;
    int stride;
    uint8_t* pixels;
} stbtt__bitmap;

typedef struct cell_pickup
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
            uint32_t selected : 1;
            uint32_t is_combo : 1;
        } cell_pickup_u_36_s_0;

        uint32_t flags;
    } cell_pickup_u_36;

} cell_pickup;

typedef struct text_element
{
    uint8_t type;
    union
    {
        char c;
        uint8_t modifiers;
    } text_element_u_1;

} text_element;

typedef struct user_input
{
    real_2 mouse;
    real_2 dmouse;
    real_2 cursor_x;
    float mouse_wheel;
    float mouse_hwheel;
    uint8_t buttons[32];
    uint8_t pressed_buttons[32];
    uint8_t released_buttons[32];
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
    uint32_t text_modifiers;
    gamepad_t gamepad;
    short gamepad_prev_buttons;
} user_input;

typedef struct pairNode
{
    int64_t _padding_;
    DNameNode* left;
    DNameNode* right;
    int myLen;
} pairNode;

typedef struct recording_buffer
{
    uint32_t frame_buffer;
    uint32_t* textures;
    int n_textures;
    uint8_4* data;
    int_2 resolution;
    int buffer_length;
    int current_frame;
    int n_frames;
    bool initialized;
    float centiseconds;
} recording_buffer;

typedef struct once_flag
{
    void* _Opaque;
} once_flag;

typedef struct particle_t
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
    uint32_t mutagen_material_index;
    uint32_t affects_gameplay : 1;
} particle_t;

typedef struct stbtt__hheap_chunk
{
    stbtt__hheap_chunk* next;
} stbtt__hheap_chunk;

typedef struct radiant_render_info
{
    real_3 x;
    float r;
    float distortion;
    real_4 color;
} radiant_render_info;

typedef struct srwlock_guard
{
    _RTL_SRWLOCK* lck;
} srwlock_guard;

typedef struct sandbox_menu
{
    int tool;
    static_button tool_buttons[11];
    float selected_team;
    static_button team_buttons[5];
    float* mutation_r;
    float* mutation_r_dot;
    slider_t explosion_slider;
    float explosion_radius;
    slider_t terraform_slider;
    float terraform_radius;
    int terraform_biome_index;
    union
    {
        struct
        {
            uint32_t terraform_coarse : 1;
            uint32_t terraform_flow : 1;
            uint32_t terraform_biome : 1;
            uint32_t terraform_grid : 1;
            uint32_t terraform_biome_hide : 1;
            uint32_t map_export_mode : 1;
        } sandbox_menu_u_396_s_0;

        uint32_t terraform_flags;
    } sandbox_menu_u_396;

    static_button terraform_buttons[4];
    float* cell_r;
    float* cell_r_dot;
    float* biome_r;
    float* biome_r_dot;
    real_2 block_zone;
    real_2 block_center;
    int selected_creature;
    int dragged_body;
    tooltip_t tooltip;
} sandbox_menu;

typedef struct stack_allocation
{
    void* data;
} stack_allocation;

typedef struct memory_manager
{
    expandable_buffer stack;
    uint64_t stack_used;
    uint64_t checkpoint;
    stack_allocation stallocs[4096];
    int n_stallocs;
} memory_manager;

typedef struct keybinds_t
{
    int forward;
    int backward;
    int left;
    int right;
    int control_mode;
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
        } keybinds_t_u_72_s_0;

        int tools[3];
    } keybinds_t_u_72;

    int toggle_symmetry;
    int toggle_icons;
    int editor_up;
    int editor_down;
    int editor_left;
    int editor_right;
    int editor_zoom_in;
    int editor_zoom_out;
    int console;
} keybinds_t;

typedef struct settings_t
{
    uint32_t settings_version;
    float effects_volume;
    float music_volume;
    union
    {
        keybinds_t keybinds;
        int buttons[30];
    } settings_t_u_12;

    uint32_t toggle_seek;
    uint32_t toggle_ability;
    uint32_t show_fps;
    uint32_t fullscreen;
    uint32_t clip_cursor;
    uint32_t hardware_cursor;
    float gamepad_cursor_sens;
    float gamepad_deadzone;
    int window_x;
    int window_y;
    int resolution_x;
    int resolution_y;
    uint32_t replay_recorder;
    int gif_resolution_x;
    int gif_resolution_y;
    int gif_frames;
    uint32_t cap_framerate;
    uint32_t framerate_cap;
    uint32_t thread_count;
    float screenshake;
    float brightness;
    float contrast;
    uint32_t background_effects;
    uint32_t reflections;
    uint32_t distortions;
    uint32_t limit_particles;
    uint32_t max_particles;
    uint32_t pause_on_unfocus;
    uint32_t show_tutorial;
    uint32_t show_disconnected_warning;
    uint32_t error_sound;
    uint32_t always_show_storage;
    uint32_t pushable_cell_buttons;
    uint32_t copy_plan_on_possess;
    uint32_t show_cell_icons;
    uint32_t enable_console;
    uint32_t win_unlocks;
} settings_t;

typedef struct real_3x3
{
    union
    {
        real_3 columns[3];
        float data[9];
    } real_3x3_u_0;

} real_3x3;

typedef struct map_template
{
    bounding_box_2 region;
    uint8_t* data;
    int_2* points;
    int n_points;
    float* wall_values;
    real_2* flow;
    int* biome_ids;
} map_template;

typedef struct biome_node
{
    int core_index;
    real_2 x;
    float r;
    uint32_t fill : 1;
    uint32_t snap : 1;
    map_template templ;
    biome_edge* first_edge;
    void* pre_generation_fn;
    void* post_generation_fn;
    void* template_generation_fn;
} biome_node;

typedef struct stbtt_bakedchar
{
    uint16_t x0;
    uint16_t y0;
    uint16_t x1;
    uint16_t y1;
    float xoff;
    float yoff;
    float xadvance;
} stbtt_bakedchar;

typedef struct biome_core
{
    int biome_index;
    int guardian_id;
    int track_length;
    int bronze_time;
    int n_checkpoints;
    int target_size;
    int n_hexes;
    bounding_box_2 bounds;
    int_2 entrance_points[32];
    int n_entrance_points;
    uint64_t mergable_cores;
    int modifiers[16];
    int n_modifiers;
    int n_default_modifiers;
    uint32_t no_creatures : 1;
} biome_core;

typedef struct lane_group_t
{
    int group_index;
    void* shared;
    int n_lanes;
    uint64_t fiber_mask;
} lane_group_t;

typedef struct draggable_button
{
    real_2 x;
    real_2 x_dot;
    real_2 x_brown;
    real_2 x_brown_dot;
    real_2 x_offset;
    float r;
    float r_dot;
    float selection_theta;
    float wiggle_phase;
    float hovered;
    float selected;
    bool was_hovered;
    bool pinned;
} draggable_button;

typedef struct stbtt__point
{
    float x;
    float y;
} stbtt__point;

typedef struct id_index
{
    int id;
    int index;
} id_index;

typedef struct cell_pool
{
    int material_indices[2048];
    float material_cum_chances[2048];
    int n_materials;
} cell_pool;

typedef struct biome_type
{
    uint32_t id;
    real_3 color;
    float light;
    float bumpyness;
    float temperature;
    uint32_t tracked : 1;
    uint32_t explored : 1;
    uint32_t no_modifiers : 1;
    uint32_t custom_cell_spawning;
    uint32_t flags;
    int ambient_music_id;
    int battle_music_id;
    float noise_amount;
    float fbm_amount;
    float fbm_base_frequency;
    float fbm_octaves;
    float fbm_gain;
    float neighbor_fbm;
    float neighbor_amount;
    float base_amount;
    float min_value;
    float cell_chance;
    int cell_max_neighbors;
    cell_pool pool;
    uint32_t creature_ids[256];
    int creature_xps[256];
    float creature_cum_chances[256];
    float creature_teams[256];
    int n_creatures;
    uint32_t plant_ids[256];
    int plant_xps[256];
    float plant_teams[256];
    float plant_cum_chances[256];
    int n_plants;
    int modifiers[16];
    int n_modifiers;
} biome_type;

typedef struct plan_cell
{
    int material_index;
    real_4 color;
    int_2 body_coord;
    int respawn_timer;
    union
    {
        struct
        {
            uint8_t selected_symmetry_index;
            uint8_t pending_selected;
        } plan_cell_u_32_s_0;

        uint32_t selected;
    } plan_cell_u_32;

    uint32_t floodfilled;
    float r;
    float r_dot;
    uint32_t temporary : 1;
} plan_cell;

typedef struct context_t
{
    union
    {
        struct
        {
            int lane_index;
            lane_group_t* group;
        } context_t_u_0_s_0;

        lane_context_t current_lane_context;
    } context_t_u_0;

    lane_context_t lane_stack[4];
    int n_lane_stack;
    int fiber_index;
    memory_manager* manager;
    uint32_t seed;
    uint32_t visual_seed;
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
} context_t;

typedef struct stashed_body_plan
{
    body_plan plan;
    char name[512];
    real_2 pos;
} stashed_body_plan;

typedef struct sound_params
{
    float volume;
    float delay;
    float pitch_shift;
    float lowpass_dist;
    int type;
} sound_params;

typedef struct real_4x4
{
    union
    {
        real_4 columns[4];
        float data[16];
    } real_4x4_u_0;

} real_4x4;

typedef struct render_context
{
    float fov;
    real_3 camera_pos;
    real_3 old_camera_pos;
    real_3x3 camera_axes;
    real_4x4 camera;
    real_4 background_color;
    real_4 foreground_color;
    real_4 highlight_color;
    uint32_t frame_buffer;
    uint32_t cell_frame_buffer;
    uint32_t lighting_frame_buffer;
    uint32_t post_process_frame_buffer;
    uint32_t background_frame_buffer;
    uint32_t thumbnail_frame_buffer;
    union
    {
        struct
        {
            uint32_t color_texture;
            uint32_t post_color_texture;
            uint32_t post_effects_texture;
            uint32_t background_textures[2];
            uint32_t cell_color_texture;
            uint32_t cell_material_texture;
            uint32_t lighting_texture;
            uint32_t edit_distance_texture;
        } render_context_u_200_s_0;

        uint32_t textures[9];
    } render_context_u_200;

    int current_background_texture;
    uint32_t thumbnail_texture;
    uint32_t wall_texture;
    uint32_t biome_texture;
    uint32_t map_flow_texture;
    uint32_t map_color_texture;
    uint32_t map_wall_color1_texture;
    uint32_t map_wall_color2_texture;
    uint32_t map_wall_params_texture;
    uint32_t map_lighting_texture;
    uint32_t map_bumpyness_texture;
    uint32_t map_temperature_texture;
    uint32_t map_explored_texture;
    int_2 resolution;
    union
    {
        struct
        {
            font_info small_font;
            font_info default_font;
            font_info medium_font;
            font_info big_font;
        } render_context_u_296_s_0;

        font_info font_infos[4];
    } render_context_u_296;

    float time;
} render_context;

typedef struct window_t
{
    HWND__* hwnd;
    HGLRC__* hglrc;
    real_2 size;
    user_input input;
    user_input frame_input;
    union _LARGE_INTEGER timer_frequency;
    union _LARGE_INTEGER last_time;
    union _LARGE_INTEGER this_time;
    render_context rc;
    render_context ui;
    recording_buffer rb;
    bool clip_cursor;
    bool focused;
} window_t;

typedef struct multithread_loop_info
{
    user_input* input;
    int start;
    int end;
    int iteration;
} multithread_loop_info;

typedef struct int_2x2
{
    union
    {
        int_2 columns[2];
        int data[4];
    } int_2x2_u_0;

} int_2x2;

typedef struct cell_item
{
    int type;
    union
    {
        int material_index;
        int body_id;
    } cell_item_u_4;

    draggable_button button;
    uint32_t filtered : 1;
    uint32_t activated : 1;
} cell_item;

typedef struct workshop_published_item
{
    uint64_t id;
    char name[129];
} workshop_published_item;

typedef struct biome_edge
{
    biome_node* node;
    biome_edge* next;
    real_2 dir;
    float spacing;
    float randomness;
    float stiffness;
    float bias;
    uint32_t virtual_edge : 1;
} biome_edge;

typedef struct serialized_data
{
    uint8_t* data;
    int size;
} serialized_data;

typedef struct queued_sound
{
    sound_t* sound;
    sound_params params;
    float filtered[2];
    int n_played_samples;
    bool kill;
} queued_sound;

typedef struct light_reciever_t
{
    real_2 x;
    real_3 hsv;
    float radius_sq;
} light_reciever_t;

typedef struct biome_modifier
{
    char* id;
    void* generation_fn;
    void* creature_fn;
    float chance;
} biome_modifier;

typedef struct srwlock_shared_guard
{
    _RTL_SRWLOCK* lck;
} srwlock_shared_guard;

typedef struct real_2x2
{
    union
    {
        real_2 columns[2];
        float data[4];
    } real_2x2_u_0;

} real_2x2;

typedef struct tool_render_info
{
    real_3 x;
    float r;
    real_4 color;
    uint32_t id;
    float state;
} tool_render_info;

typedef struct lightning_emitter
{
    real_2 x;
    real_2 dir;
} lightning_emitter;

typedef struct laser_t
{
    int cell_id;
    real_2 x;
    real_2 dir;
    float heat;
    float width;
    float length;
    uint32_t sensor : 1;
} laser_t;

typedef struct stbtt_pack_context
{
    void* user_allocator_context;
    void* pack_info;
    int width;
    int height;
    int stride_in_bytes;
    int padding;
    int skip_missing;
    uint32_t h_oversample;
    uint32_t v_oversample;
    uint8_t* pixels;
    void* nodes;
} stbtt_pack_context;

typedef struct brain_t
{
    real_2 movement;
    float rotation;
    float movement_weight;
    float rotation_weight;
    real_2 grab_target;
    float grab_weight;
    float grab_dir;
    bool abilities[3];
    void* fun;
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
} brain_t;

typedef struct particle_type_t
{
    bool streak;
    bool draw_on_top;
} particle_type_t;

typedef struct lua_State
{
} lua_State;

typedef struct body
{
    int id;
    int creature_index;
    body_plan plan;
    int* cell_map;
    cell* first_cell;
    cell* last_cell;
    int parent_id;
    int holder_id;
    float team;
    float original_team;
    float charm_duration;
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
    float abstract_acceleration;
    uint32_t loaded : 1;
    uint32_t floodfill_needed : 1;
    uint32_t rooted : 1;
    uint32_t touched : 1;
    uint32_t is_boss : 1;
    uint32_t show_damage_numbers : 1;
    uint32_t snap : 1;
    uint32_t pickupable : 1;
    uint32_t activated : 1;
    uint32_t is_safe : 1;
    uint32_t kill : 1;
    uint32_t kill_slowly : 2;
    uint32_t unload : 1;
    uint32_t plan_modified : 1;
    uint32_t cell_collision : 1;
    uint32_t no_regen_delay : 1;
    uint32_t regen_boost;
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
    float text_alpha;
    float damage_number;
    float damage_number_timer;
    union
    {
        struct
        {
            uint32_t portal_index : 8;
            uint32_t in_portal : 1;
        } body_u_340_s_0;

        uint32_t portal_info;
    } body_u_340;

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
        } body_u_736_s_1;

    } body_u_736;

} body;

typedef struct pcharNode
{
    int64_t _padding_;
    char* me;
    int myLen;
} pcharNode;

typedef struct acid_particle_16
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
} acid_particle_16;

typedef struct command_result_t
{
    char* command;
    char* result;
    char* error;
} command_result_t;

typedef struct player_command_t
{
    real_2 movement;
    real_2 grab_target;
    float grab_weight;
    float grab_dir;
    bool abilities[1];
} player_command_t;

typedef struct tss_ptd
{
    tss_ptd* next;
    tss_ptd* prev;
    void * data[1024];
    bool tss_dtor_used;
} tss_ptd;

typedef struct bone
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
    uint32_t merge_id;
    uint32_t floodfill_needed : 1;
} bone;

typedef struct big_lightning_vertex
{
    real_2 x;
    real_4 color;
} big_lightning_vertex;

typedef struct init_world_params
{
    bool keep_seed;
    int map_type;
    bool no_creatures;
    bool loading;
} init_world_params;

typedef struct static_cell
{
    real_2 x;
    uint32_t alive;
    real_3 color;
    int neighbors[6];
    uint32_t open_sides;
} static_cell;

// typedef struct type_info
// {
//     int64_t _padding_;
//     __std_type_info_data _Data;
// } type_info;

typedef union float_conv
{
    float f;
    int i;
} float_conv;

typedef struct contact
{
    cell* o;
    real_2 normal;
    float spacing;
    float depth;
    int c_sharpness;
    int o_sharpness;
} contact;

typedef struct bone_contact
{
    cell* c;
    cell* o;
    real_2 normal;
    float spacing;
    float depth;
    int c_sharpness;
    int o_sharpness;
} bone_contact;

typedef struct icon_render_info
{
    real_3 x;
    float r;
    real_4 color;
    real_2 uv;
} icon_render_info;

typedef struct world
{
    int menu;
    uint32_t confirm_newgame : 1;
    uint32_t confirm_quit : 1;
    uint32_t dead : 1;
    uint32_t won : 1;
    uint32_t show_body_preview : 1;
    uint32_t show_trace : 1;
    uint32_t frozen : 1;
    uint32_t map_mode : 1;
    uint32_t use_battle_music : 1;
    uint32_t scroll_blocked : 1;
    uint32_t lava_walls : 1;
    uint32_t glowing_walls : 1;
    uint32_t use_gamepad : 1;
    uint32_t gamepad_cursor_mode : 1;
    uint32_t left_cursor_mode : 1;
    uint32_t hide_cursor : 1;
    uint32_t ability_toggled0 : 1;
    uint32_t ability_toggled1 : 1;
    uint32_t ability_toggled2 : 1;
    uint32_t seek_toggled : 2;
    uint32_t control_mode : 1;
    uint32_t portals_enabled : 2;
    uint32_t block_mouse : 1;
    uint32_t free_last_mutations : 1;
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
    uint32_t credits_timer;
    float threat_level;
    int current_biome_ambient;
    int current_biome_battle;
    edit_menu em;
    sandbox_menu sm;
    inspector_menu im;
    int selected_body;
    float last_team;
    mutation_item_list last_mutations;
    biome_core* current_race_core;
    uint32_t completed_race_checkpoints;
    int race_start_frame;
    int last_race_time;
    int best_race_time;
    float last_race_flash;
    float best_race_flash;
    int completed_race_targets;
    float visual_best_race_time;
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
        uint8_t* body_auxiliary_data;
        expandable_buffer body_auxiliary_data_memory;
    } world_u_15104;

    int body_auxiliary_size;
    union
    {
        id_index* cell_index_table;
        expandable_buffer cell_index_table_memory;
    } world_u_15136;

    union
    {
        cell* cells;
        expandable_buffer cells_memory;
    } world_u_15160;

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
    } world_u_15672;

    int n_lightnings;
    int max_lightnings;
    union
    {
        laser_t* lasers;
        expandable_buffer lasers_memory;
    } world_u_15704;

    int n_lasers;
    int max_lasers;
    union
    {
        explosion_t* explosions;
        expandable_buffer explosions_memory;
    } world_u_15736;

    int n_explosions;
    int max_explosions;
    union
    {
        explosion_render_info* explosion_visuals;
        expandable_buffer explosion_visuals_memory;
    } world_u_15768;

    int n_explosion_visuals;
    int max_explosion_visuals;
    union
    {
        digger_t* diggers;
        expandable_buffer diggers_memory;
    } world_u_15800;

    int n_diggers;
    int max_diggers;
    union
    {
        radiant_render_info* radiant_visuals;
        expandable_buffer radiant_visuals_memory;
    } world_u_15832;

    int n_radiant_visuals;
    int max_radiant_visuals;
    union
    {
        circle_render_info* stasis_visuals;
        expandable_buffer stasis_visuals_memory;
    } world_u_15864;

    int n_stasis_visuals;
    int max_stasis_visuals;
    union
    {
        color_swatch_render_info* paint_visuals;
        expandable_buffer paint_visuals_memory;
    } world_u_15896;

    int n_paint_visuals;
    int max_paint_visuals;
    union
    {
        particle_pusher_t* particle_pushers;
        expandable_buffer particle_pushers_memory;
    } world_u_15928;

    int n_particle_pushers;
    int max_particle_pushers;
    union
    {
        link_attractor_t* link_attractors;
        expandable_buffer link_attractors_memory;
    } world_u_15960;

    int n_link_attractors;
    int max_link_attractors;
    union
    {
        magnetic_field_t* magnetic_fields;
        expandable_buffer magnetic_fields_memory;
    } world_u_15992;

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
    } world_u_16056;

    int n_mutation_pickups;
    int max_mutation_pickups;
    union
    {
        cell_pickup* cell_pickups;
        expandable_buffer cell_pickups_memory;
    } world_u_16088;

    int n_cell_pickups;
    int max_cell_pickups;
    union
    {
        particle_t* particles;
        expandable_buffer particles_memory;
    } world_u_16120;

    int n_particles;
    int max_particles;
    union
    {
        acid_particle_16* acid_particles;
        expandable_buffer acid_particles_memory;
    } world_u_16152;

    int n_acid_particles;
    int max_acid_particle_groups;
    union
    {
        biome_type* biome_types;
        expandable_buffer biome_types_memory;
    } world_u_16184;

    int max_biome_types;
    int n_biome_types;
    union
    {
        biome_modifier* biome_modifiers;
        expandable_buffer biome_modifiers_memory;
    } world_u_16216;

    int max_biome_modifiers;
    int n_biome_modifiers;
    tooltip_t tooltip;
    real_2 tooltip_x;
    real_2 tooltip_pickup_x;
    bool tooltip_active;
    real_2 gamepad_cursor_x;
    uint32_t base_seed;
    uint32_t seed;
    uint32_t editor_seed;
    int frame_number;
    double last_frame_time;
    int tutorial_stage;
    char* current_tutorial;
    int map_prompt_timer;
    real_2 end_text_x;
    float fade_in;
    float wall_vision;
    float start_trans;
    uint32_t loading_screen : 1;
    uint32_t done_loading : 1;
    uint32_t starting_game : 1;
    uint32_t starting_new_run : 1;
    uint32_t starting_sandbox : 1;
    uint32_t has_save : 1;
    uint32_t has_sandbox : 1;
    uint32_t starting_mode;
    uint32_t start_animation_done;
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
    uint32_t queued_seed;
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
} world;

typedef struct rectangle_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} rectangle_render_info;

typedef struct link_attractor_t
{
    real_2 x;
    float strength;
    int bone_id;
} link_attractor_t;

typedef struct boss_gate
{
    int_2 pos;
    int boss_id;
    int first_cell;
    int n_cells;
    int achievement_index;
} boss_gate;

typedef struct cell_render_info
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
    uint32_t open_sides;
} cell_render_info;

typedef struct tss_global_data_t
{
    _RTL_SRWLOCK lock;
    uint64_t tss_ptd_idx;
    void* dtor_table;
    tss_ptd* ptd_list;
    uint32_t last_idx;
} tss_global_data_t;

typedef struct fp_control_word_guard
{
    uint32_t _original_control_word;
    uint32_t _mask;
} fp_control_word_guard;

typedef struct windowing_model_policy_properties
{
} windowing_model_policy_properties;

typedef struct developer_information_policy_properties
{
} developer_information_policy_properties;
