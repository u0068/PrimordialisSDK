#pragma once

#include <windows.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct Codebook Codebook;
typedef union Floor Floor;
typedef struct FrameInfo FrameInfo;
typedef struct HBRUSH__ HBRUSH__;
typedef struct HGLRC__ HGLRC__;
typedef struct HICON__ HICON__;
typedef struct HINSTANCE__ HINSTANCE__;
typedef struct HWND__ HWND__;
typedef struct IAudioClient IAudioClient;
typedef struct IAudioRenderClient IAudioRenderClient;
typedef struct IDispatch IDispatch;
typedef struct IMMDevice IMMDevice;
typedef struct IRecordInfo IRecordInfo;
typedef struct IStorage IStorage;
typedef struct IStream IStream;
typedef struct ITypeComp ITypeComp;
typedef struct IUnknown IUnknown;
typedef union LZ4_streamHC_u LZ4_streamHC_u;
typedef union LZ4_stream_u LZ4_stream_u;
typedef struct Mapping Mapping;
typedef struct MappingChannel MappingChannel;
typedef struct MsfGifBuffer MsfGifBuffer;
typedef struct Residue Residue;
typedef struct TlsDtorNode TlsDtorNode;
typedef struct _ACTIVATION_CONTEXT _ACTIVATION_CONTEXT;
typedef struct _ACTIVATION_CONTEXT_STACK _ACTIVATION_CONTEXT_STACK;
typedef struct _ASSEMBLY_STORAGE_MAP _ASSEMBLY_STORAGE_MAP;
typedef struct _CHPEV2_CPUAREA_INFO _CHPEV2_CPUAREA_INFO;
typedef struct _CHPEV2_PROCESS_INFO _CHPEV2_PROCESS_INFO;
typedef struct _CONTEXT _CONTEXT;
typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS;
typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD;
typedef struct _EXCEPTION_REGISTRATION_RECORD _EXCEPTION_REGISTRATION_RECORD;
typedef struct _FILETIME _FILETIME;
typedef struct _GUID _GUID;
typedef struct _HeapManager _HeapManager;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY;
typedef union union _LARGE_INTEGER union _LARGE_INTEGER;
typedef struct _LEAP_SECOND_DATA _LEAP_SECOND_DATA;
typedef struct _LIST_ENTRY _LIST_ENTRY;
typedef struct _M128A _M128A;
typedef struct _NT_TIB _NT_TIB;
typedef struct _PEB _PEB;
typedef struct _PEB_LDR_DATA _PEB_LDR_DATA;
typedef struct _RTC_ALLOCA_NODE _RTC_ALLOCA_NODE;
typedef struct _RTC_vardesc _RTC_vardesc;
typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
typedef struct _RTL_BITMAP _RTL_BITMAP;
typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION;
typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG;
typedef struct _RTL_USER_PROCESS_PARAMETERS _RTL_USER_PROCESS_PARAMETERS;
typedef struct _SLIST_ENTRY _SLIST_ENTRY;
typedef union _SLIST_HEADER _SLIST_HEADER;
typedef struct _TEB_ACTIVE_FRAME _TEB_ACTIVE_FRAME;
typedef struct _TP_CLEANUP_GROUP _TP_CLEANUP_GROUP;
typedef struct _TP_POOL _TP_POOL;
typedef struct _TypeDescriptor _TypeDescriptor;
typedef union _ULARGE_INTEGER _ULARGE_INTEGER;
typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE;
typedef struct __acrt_thread_parameter __acrt_thread_parameter;
typedef struct __crt_locale_data __crt_locale_data;
typedef struct __crt_multibyte_data __crt_multibyte_data;
typedef struct __crt_qualified_locale_data_downlevel __crt_qualified_locale_data_downlevel;
typedef struct __crt_signal_action_t __crt_signal_action_t;
typedef struct _iobuf _iobuf;
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
typedef struct lconv lconv;
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
typedef struct stbi__context stbi__context;
typedef struct stbrp_node stbrp_node;
typedef struct stbtt__active_edge stbtt__active_edge;
typedef struct stbtt__hheap_chunk stbtt__hheap_chunk;
typedef struct stbtt_packedchar stbtt_packedchar;
typedef struct stbtt_vertex stbtt_vertex;
typedef struct tWAVEFORMATEX tWAVEFORMATEX;
typedef struct tagARRAYDESC tagARRAYDESC;
typedef struct tagBSTRBLOB tagBSTRBLOB;
typedef struct tagCLIPDATA tagCLIPDATA;
typedef union tagCY tagCY;
typedef struct tagDEC tagDEC;
typedef struct tagELEMDESC tagELEMDESC;
typedef struct tagFUNCDESC tagFUNCDESC;
typedef struct tagPARAMDESCEX tagPARAMDESCEX;
typedef struct tagPROPVARIANT tagPROPVARIANT;
typedef struct tagSAFEARRAY tagSAFEARRAY;
typedef struct tagTYPEDESC tagTYPEDESC;
typedef struct tagVARDESC tagVARDESC;
typedef struct tagVARIANT tagVARIANT;
typedef struct tagVersionedStream tagVersionedStream;
typedef struct tm tm;
typedef struct trace_node trace_node;
typedef struct trace_t trace_t;
typedef struct translation_list translation_list;
typedef struct tss_ptd tss_ptd;
typedef struct tunnel_tile tunnel_tile;
typedef struct uint8_4 uint8_4;
typedef struct undo_state undo_state;
typedef struct user_input user_input;
typedef struct workshop_body_plan workshop_body_plan;

typedef struct mtx_t
{
    uint64_t _Type;
    void* _Ptr;
    void* _Cv;
    uint32_t _Owner;
    uint32_t _Cnt;
} mtx_t;

typedef struct thrd_t
{
    void* _Handle;
    uint32_t _Tid;
} thrd_t;

typedef struct tss_ptd
{
    tss_ptd* next;
    tss_ptd* prev;
    unnamed_9445 data[8192];
    bool tss_dtor_used;
} tss_ptd;

typedef struct tss_t
{
    uint32_t _Idx;
} tss_t;

typedef struct once_flag
{
    void* _Opaque;
} once_flag;

typedef struct uint8_2
{
    uint8_t x;
    uint8_t y;
    unnamed_6367 data[2];
} uint8_2;

typedef struct uint8_3
{
    uint8_t x;
    uint8_t y;
    uint8_t z;
    uint8_2 xy;
    uint8_t __x0;
    uint8_2 yz;
    unnamed_10368 data[3];
} uint8_3;

typedef struct uint8_4
{
    uint8_t x;
    uint8_t y;
    uint8_t z;
    uint8_t w;
    uint8_2 xy;
    uint8_t __x0;
    uint8_2 yz;
    uint8_3 xyz;
    uint8_t _x0;
    uint8_3 yzw;
    unnamed_4128 data[4];
} uint8_4;

typedef struct int_2
{
    int32_t x;
    int32_t y;
    unnamed_10243 data[8];
} int_2;

typedef struct uint_2
{
    uint32_t x;
    uint32_t y;
    unnamed_4864 data[8];
} uint_2;

typedef struct uint_3
{
    uint32_t x;
    uint32_t y;
    uint32_t z;
    uint_2 xy;
    uint32_t __x0;
    uint_2 yz;
    unnamed_4451 data[12];
} uint_3;

typedef struct uint_4
{
    uint32_t x;
    uint32_t y;
    uint32_t z;
    uint32_t w;
    uint_2 xy;
    uint32_t __x0;
    uint_2 yz;
    uint_3 xyz;
    uint32_t _x0;
    uint_3 yzw;
    unnamed_4559 data[16];
} uint_4;

typedef struct int_3
{
    int32_t x;
    int32_t y;
    int32_t z;
    int_2 xy;
    int32_t __x0;
    int_2 yz;
    unnamed_6251 data[12];
} int_3;

typedef struct real_2
{
    float x;
    float y;
    unnamed_10482 data[8];
} real_2;

typedef struct int_2x2
{
    unnamed_10501 columns[16];
    unnamed_6184 data[16];
} int_2x2;

typedef struct real_2x2
{
    unnamed_10522 columns[16];
    unnamed_10523 data[16];
} real_2x2;

typedef struct real_3
{
    float x;
    float y;
    float z;
    real_2 xy;
    float __x0;
    real_2 yz;
    unnamed_10544 data[12];
} real_3;

typedef struct real_4
{
    float x;
    float y;
    float z;
    float w;
    real_2 xy;
    float __x0;
    real_2 yz;
    real_3 xyz;
    float _x0;
    real_3 yzw;
    unnamed_10523 data[16];
} real_4;

typedef struct real_3x3
{
    unnamed_10577 columns[36];
    unnamed_10578 data[36];
} real_3x3;

typedef struct real_4x4
{
    unnamed_10599 columns[64];
    unnamed_10600 data[64];
} real_4x4;

typedef struct context_t
{
    int32_t lane_index;
    lane_group_t* group;
    lane_context_t current_lane_context;
    unnamed_10638 lane_stack[64];
    int32_t n_lane_stack;
    int32_t fiber_index;
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
    int32_t current_profiler_frame;
    circle_render_info* circles;
    int32_t n_circles;
} context_t;

typedef struct lane_group_t
{
    int32_t group_index;
    void* shared;
    int32_t n_lanes;
    uint64_t fiber_mask;
} lane_group_t;

typedef struct lane_context_t
{
    int32_t lane_index;
    unnamed_10656* group;
} lane_context_t;

typedef struct memory_manager
{
    expandable_buffer stack;
    uint64_t stack_used;
    uint64_t checkpoint;
    unnamed_10662 stallocs[32768];
    int32_t n_stallocs;
} memory_manager;

typedef struct print_buffer_t
{
    char* base;
    char* end;
    char* buffer;
} print_buffer_t;

typedef struct trace_t
{
    trace_node* trace_nodes;
    int32_t n_trace_nodes;
    int32_t type;
    int32_t frame_number;
} trace_t;

typedef struct trace_node
{
    trace_node* parent;
    trace_node* previous;
    trace_node* next;
    trace_node* first_child;
    trace_node* last_child;
    bool traversed_children;
    bool traversed;
    unnamed_4120* name;
    double start_time;
    double end_time;
} trace_node;

typedef struct profiler_frame
{
    unnamed_10671 traces[72];
    int32_t n_traces;
} profiler_frame;

typedef struct circle_render_info
{
    real_3 x;
    float r;
    real_4 color;
} circle_render_info;

typedef struct expandable_buffer
{
    uint8_t* memory;
    uint64_t reserved_size;
    uint64_t committed_size;
} expandable_buffer;

typedef struct stack_allocation
{
    void* data;
} stack_allocation;

typedef struct printer
{
    int32_t count;
    print_format format;
} printer;

typedef struct print_format
{
    int32_t argument;
} print_format;

typedef struct looping_sound
{
    int32_t type;
    sound_t sound;
    float volume;
    float target_volume;
    float next_target_volume;
    int32_t next_target_volume_data;
    float lerp_rate;
    double pos;
    int32_t loop_overlap;
    int32_t* start_points;
    int32_t n_start_points;
    bool ready;
} looping_sound;

typedef struct sound_t
{
    int16_t* data;
    int32_t n_channels;
    int32_t n_samples;
} sound_t;

typedef struct user_input
{
    real_2 mouse;
    real_2 dmouse;
    real_2 cursor_x;
    float mouse_wheel;
    float mouse_hwheel;
    unnamed_10288 buttons[32];
    unnamed_10288 pressed_buttons[32];
    unnamed_10288 released_buttons[32];
    bool click_blocked;
    bool right_click_blocked;
    bool escape_blocked;
    bool hover_blocked;
    bool buttons_blocked;
    void* active_ui_element;
    int32_t hovered_ui_element;
    int32_t old_hovered_ui_element;
    int32_t cursor_type;
    unnamed_10797 text_stream[512];
    int32_t n_text_stream;
    uint32_t text_modifiers;
    gamepad_t gamepad;
    int16_t gamepad_prev_buttons;
} user_input;

typedef struct workshop_published_item
{
    uint64_t id;
    unnamed_10801 name[129];
} workshop_published_item;

typedef struct workshop_body_plan
{
    uint64_t workshop_id;
    unnamed_10804 name[512];
    unnamed_10804 path[512];
    real_2 pos;
} workshop_body_plan;

typedef struct text_element
{
    uint8_t type;
    char c;
    uint8_t modifiers;
} text_element;

typedef struct gamepad_t
{
    uint32_t gamepads_connected;
    int16_t buttons;
    float left_trigger;
    float right_trigger;
    real_2 left_stick;
    real_2 right_stick;
} gamepad_t;

typedef struct bounding_box_2
{
    int_2 l;
    int_2 u;
} bounding_box_2;

typedef struct box_real_2
{
    real_2 l;
    real_2 u;
} box_real_2;

typedef struct stbtt_fontinfo
{
    void* userdata;
    uint8_t* data;
    int32_t fontstart;
    int32_t numGlyphs;
    int32_t loca;
    int32_t head;
    int32_t glyf;
    int32_t hhea;
    int32_t hmtx;
    int32_t kern;
    int32_t gpos;
    int32_t svg;
    int32_t index_map;
    int32_t indexToLocFormat;
    stbtt__buf cff;
    stbtt__buf charstrings;
    stbtt__buf gsubrs;
    stbtt__buf subrs;
    stbtt__buf fontdicts;
    stbtt__buf fdselect;
} stbtt_fontinfo;

typedef struct stbtt_vertex
{
    int16_t x;
    int16_t y;
    int16_t cx;
    int16_t cy;
    int16_t cx1;
    int16_t cy1;
    uint8_t type;
    uint8_t padding;
} stbtt_vertex;

typedef struct stbtt__buf
{
    uint8_t* data;
    int32_t cursor;
    int32_t size;
} stbtt__buf;

typedef struct stbtt__point
{
    float x;
    float y;
} stbtt__point;

typedef struct stbtt__bitmap
{
    int32_t w;
    int32_t h;
    int32_t stride;
    uint8_t* pixels;
} stbtt__bitmap;

typedef struct stbtt__edge
{
    float x0;
    float y0;
    float x1;
    float y1;
    int32_t invert;
} stbtt__edge;

typedef struct stbtt_pack_context
{
    void* user_allocator_context;
    void* pack_info;
    int32_t width;
    int32_t height;
    int32_t stride_in_bytes;
    int32_t padding;
    int32_t skip_missing;
    uint32_t h_oversample;
    uint32_t v_oversample;
    uint8_t* pixels;
    void* nodes;
} stbtt_pack_context;

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

typedef struct cell
{
    int32_t id;
    unnamed_11042 id_packed[64];
    int32_t body_id;
    unnamed_11042 body_id_packed[64];
    int32_t bone_id;
    unnamed_11042 bone_id_packed[64];
    int32_t material_index;
    unnamed_11042 material_index_packed[64];
    float voltage;
    unnamed_10600 voltage_packed[64];
    float voltage_dot;
    unnamed_10600 voltage_dot_packed[64];
    float peak_voltage;
    unnamed_10600 peak_voltage_packed[64];
    unnamed_11043 directional_voltage[384];
    unnamed_11043 directional_eq_voltage[384];
    unnamed_11043 directional_conductance[384];
    float shock;
    unnamed_10600 shock_packed[64];
    float temperature;
    unnamed_10600 temperature_packed[64];
    float frozen_multiplier;
    unnamed_10600 frozen_multiplier_packed[64];
    float maturity;
    unnamed_10600 maturity_packed[64];
    float health;
    unnamed_10600 health_packed[64];
    float damage;
    unnamed_10600 damage_packed[64];
    float bloodless_damage;
    unnamed_10600 bloodless_damage_packed[64];
    float screenshakeless_damage;
    unnamed_10600 screenshakeless_damage_packed[64];
    float burn_damage;
    unnamed_10600 burn_damage_packed[64];
    float ice_damage;
    unnamed_10600 ice_damage_packed[64];
    float healing;
    unnamed_10600 healing_packed[64];
    float dealt;
    unnamed_10600 dealt_packed[64];
    float explosive_damage_multiplier;
    unnamed_10600 explosive_damage_multiplier_packed[64];
    float heat_damage_multiplier;
    unnamed_10600 heat_damage_multiplier_packed[64];
    float poison;
    unnamed_10600 poison_packed[64];
    float mutagen;
    unnamed_10600 mutagen_packed[64];
    int32_t mutagen_material_index;
    unnamed_11042 mutagen_material_index_packed[64];
    float leeching;
    unnamed_10600 leeching_packed[64];
    float value;
    unnamed_10600 value_packed[64];
    float value2;
    unnamed_10600 value2_packed[64];
    int32_t n_colors;
    unnamed_11042 n_colors_packed[64];
    float mass;
    unnamed_10600 mass_packed[64];
    float x;
    unnamed_10600 x_packed[64];
    float y;
    unnamed_10600 y_packed[64];
    float x_dot;
    unnamed_10600 x_dot_packed[64];
    float y_dot;
    unnamed_10600 y_dot_packed[64];
    float rot_x;
    unnamed_10600 rot_x_packed[64];
    float rot_y;
    unnamed_10600 rot_y_packed[64];
    float curl_x;
    unnamed_10600 curl_x_packed[64];
    float curl_y;
    unnamed_10600 curl_y_packed[64];
    float r;
    unnamed_10600 r_packed[64];
    float base_r;
    unnamed_10600 base_r_packed[64];
    float range_multiplier;
    unnamed_10600 range_multiplier_packed[64];
    unnamed_11043 spacing[384];
    float target_spacing;
    unnamed_10600 target_spacing_packed[64];
    uint32_t flags;
    unnamed_11044 flags_packed[64];
    type_11045_with_uint32_t open_sides : 6;
    type_11046_with_uint32_t touched : 1;
    type_11047_with_uint32_t health_gated : 1;
    type_9778_with_uint32_t kill : 1;
    type_9779_with_uint32_t floodfill_needed : 1;
    type_9780_with_uint32_t linking : 1;
    type_9781_with_uint32_t link_attracting : 1;
    type_9782_with_uint32_t self_touching : 1;
    type_11048_with_uint32_t poison_immune : 2;
    type_9785_with_uint32_t nontrivial_bone : 1;
    type_11049_with_uint32_t temp_rigid : 1;
    type_11050_with_uint32_t cell_collision : 1;
    type_11051_with_uint32_t no_explosive_regen_delay : 1;
    type_11052_with_uint32_t has_brain_fn : 1;
    type_11053_with_uint32_t recolored : 1;
    type_11054_with_uint32_t sync_health : 1;
    type_11055_with_uint32_t custom_mass : 1;
    float light_radius;
    unnamed_10600 light_radius_packed[64];
    int32_t n_contacts;
    unnamed_11042 n_contacts_packed[64];
    float stickyness;
    unnamed_10600 stickyness_packed[64];
    float stickyness_timer;
    unnamed_10600 stickyness_timer_packed[64];
    float wall_force;
    unnamed_10600 wall_force_packed[64];
    int32_t attached;
    unnamed_11042 attached_packed[64];
    int32_t linked;
    unnamed_11042 linked_packed[64];
    float phasing;
    unnamed_10600 phasing_packed[64];
    float drag_reduction;
    unnamed_10600 drag_reduction_packed[64];
    float detected_light;
    unnamed_10600 detected_light_packed[64];
    float map_light;
    unnamed_10600 map_light_packed[64];
    float voltage_multiplier;
    unnamed_10600 voltage_multiplier_packed[64];
    float rigidity;
    unnamed_10600 rigidity_packed[64];
    float stasis;
    unnamed_10600 stasis_packed[64];
    uint32_t floodfilled;
    unnamed_11044 floodfilled_packed[64];
    float old_voltage;
    unnamed_10600 old_voltage_packed[64];
    float old_temperature;
    unnamed_10600 old_temperature_packed[64];
    float old_health;
    unnamed_10600 old_health_packed[64];
    float equilibrium_voltage;
    unnamed_10600 equilibrium_voltage_packed[64];
    float total_conductance;
    unnamed_10600 total_conductance_packed[64];
    float equilibrium_temperature;
    unnamed_10600 equilibrium_temperature_packed[64];
    float total_heat_conductance;
    unnamed_10600 total_heat_conductance_packed[64];
    float wall_temperature;
    unnamed_10600 wall_temperature_packed[64];
    unnamed_11057 extra_fields[2816];
} cell;

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
    unnamed_11068 neighbors[48];
    cell* next_in_body;
    cell* next_in_bone;
} cell_extra;

typedef struct contact
{
    cell* o;
    real_2 normal;
    float spacing;
    float depth;
    int32_t c_sharpness;
    int32_t o_sharpness;
} contact;

typedef struct wall_t
{
    float dist;
    real_2 gradient;
    real_2 flow;
    float air_dist;
} wall_t;

typedef struct body
{
    int32_t id;
    int32_t creature_index;
    body_plan plan;
    int32_t* cell_map;
    cell* first_cell;
    cell* last_cell;
    int32_t parent_id;
    int32_t holder_id;
    float team;
    float original_team;
    float charm_duration;
    boss_part_t* boss_part;
    float cost_limit;
    float max_health;
    float total_cost;
    float age;
    int32_t xp;
    int32_t next_levelup;
    int32_t last_levelup;
    int32_t level;
    float xp_timer;
    float xp_alpha;
    float cost_discount;
    float bonus_health_multiplier;
    float abstract_acceleration;
    type_10769_with_uint32_t loaded : 1;
    type_11084_with_uint32_t floodfill_needed : 1;
    type_11085_with_uint32_t rooted : 1;
    type_11086_with_uint32_t touched : 1;
    type_11087_with_uint32_t is_boss : 1;
    type_11088_with_uint32_t show_damage_numbers : 1;
    type_11046_with_uint32_t snap : 1;
    type_11047_with_uint32_t pickupable : 1;
    type_9778_with_uint32_t activated : 1;
    type_9779_with_uint32_t is_safe : 1;
    type_9780_with_uint32_t kill : 1;
    type_11089_with_uint32_t kill_slowly : 2;
    type_9783_with_uint32_t unload : 1;
    type_9784_with_uint32_t plan_modified : 1;
    type_9785_with_uint32_t cell_collision : 1;
    type_11049_with_uint32_t no_regen_delay : 1;
    uint32_t regen_boost;
    float avg_phasing;
    real_2 spawn_x;
    int32_t n_cells;
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
    type_11090_with_uint32_t portal_index : 8;
    type_9778_with_uint32_t in_portal : 1;
    uint32_t portal_info;
    float portal_timer;
    brain_t brain;
    wall_t nearest_wall;
    mutation_item_list mutation_items;
    mutation_item* mutations;
    int32_t n_mutations;
    int32_t max_mutations;
} body;

typedef struct body_id_table
{
    id_index* index_table;
    expandable_buffer index_table_memory;
    int32_t n_max_elements;
    int32_t next_id;
    body* elements;
    expandable_buffer elements_memory;
    int32_t n_elements;
} body_id_table;

typedef struct body_plan
{
    plan_cell* plan_cells;
    int32_t n_plan_cells;
    int32_t max_plan_cells;
    int32_t n_dragged_cells;
    int32_t* plan_id_map;
    bounding_box_2 region;
    int32_t half_hex_rotation;
} body_plan;

typedef struct boss_part_t
{
    int32_t type;
    int32_t creature_index;
    int32_t body_id;
    int32_t part_index;
    unnamed_11105 pinned_cells[256];
    int32_t n_pinned_cells;
    real_2 offset;
    real_2 base_x;
    real_2 x;
    real_2 x_dot;
    real_2 orientation;
} boss_part_t;

typedef struct brain_t
{
    real_2 movement;
    float rotation;
    float movement_weight;
    float rotation_weight;
    real_2 grab_target;
    float grab_weight;
    float grab_dir;
    unnamed_11108 abilities[3];
    unnamed_11110* fun;
    real_2 old_movement;
    float old_rotation;
    real_2 old_grab_target;
    float old_grab_weight;
    float old_grab_dir;
    unnamed_11108 old_abilities[3];
    int32_t target;
    int32_t old_target;
    int32_t action;
    real_2 target_point;
    unnamed_11112 values[256];
} brain_t;

typedef struct mutation_item_list
{
    mutation_item* items;
    int32_t n_items;
    int32_t max_items;
} mutation_item_list;

typedef struct mutation_item
{
    int32_t mutation_index;
    unnamed_6184 imbues[16];
    real_2 pos;
    float r;
    float r_dot;
} mutation_item;

typedef struct id_index
{
    int32_t id;
    int32_t index;
} id_index;

typedef struct plan_cell
{
    int32_t material_index;
    real_4 color;
    int_2 body_coord;
    int32_t respawn_timer;
    uint8_t selected_symmetry_index;
    uint8_t pending_selected;
    uint32_t selected;
    uint32_t floodfilled;
    float r;
    float r_dot;
    type_10769_with_uint32_t temporary : 1;
} plan_cell;

typedef struct bone_id_table
{
    id_index* index_table;
    expandable_buffer index_table_memory;
    int32_t n_max_elements;
    int32_t next_id;
    bone* elements;
    expandable_buffer elements_memory;
    int32_t n_elements;
} bone_id_table;

typedef struct bone
{
    int32_t id;
    float mass;
    float inertia;
    float spacing;
    real_2 center_of_mass;
    real_2 center_of_mass_dot;
    real_2 orientation;
    float omega;
    int32_t n_cells;
    real_2 plan_center;
    cell* first_cell;
    cell* last_cell;
    uint32_t merge_id;
    type_10769_with_uint32_t floodfill_needed : 1;
} bone;

typedef struct translation_list
{
    char** text;
    char* formatted;
    uint64_t max_formatted;
} translation_list;

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
    uint32_t color_texture;
    uint32_t post_color_texture;
    uint32_t post_effects_texture;
    unnamed_4864 background_textures[8];
    uint32_t cell_color_texture;
    uint32_t cell_material_texture;
    uint32_t lighting_texture;
    uint32_t edit_distance_texture;
    unnamed_11195 textures[36];
    int32_t current_background_texture;
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
    font_info small_font;
    font_info default_font;
    font_info medium_font;
    font_info big_font;
    unnamed_11197 font_infos[736];
    float time;
} render_context;

typedef struct font_info
{
    uint32_t texture;
    stbtt_fontinfo info;
    float size;
    stbtt_packedchar* char_data;
} font_info;

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

typedef struct recording_buffer
{
    uint32_t frame_buffer;
    uint32_t* textures;
    int32_t n_textures;
    uint8_4* data;
    int_2 resolution;
    int32_t buffer_length;
    int32_t current_frame;
    int32_t n_frames;
    bool initialized;
    float centiseconds;
} recording_buffer;

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

typedef struct map_t
{
    uint32_t seed;
    bounding_box_2 map_range;
    biome_core* cores;
    int32_t n_cores;
    float* wall_values;
    float* visual_wall_values;
    real_2* flow;
    real_3* color;
    int32_t* biomes;
    int32_t* biome_cores;
    float* light;
    float* bumpyness;
    float* temperature;
    int32_t* room_ids;
    uint8_t* track_dists;
    uint32_t* flags;
    uint32_t* blocked_spawns;
    uint8_t* edits;
    uint8_t* save_hexes;
    int_2 save_origin;
    int32_t map_edits_number;
    int32_t saved_map_edits_number;
    room_t* rooms;
    int32_t n_rooms;
    creature_spawner* spawners;
    int32_t max_spawners;
    int32_t n_spawners;
    doorway* doors;
    int32_t n_doors;
    static_cell* static_cells;
    int32_t n_static_cells;
    tunnel_tile* tunnel_tiles;
    int32_t n_tunnel_tiles;
    line_render_info* safe_zone_lines;
    int32_t n_safe_zone_lines;
    float* explored;
    int32_t map_type;
    bool no_creatures;
    biome_node* biome_nodes;
    int32_t n_biome_nodes;
    biome_edge* biome_edges;
    int32_t n_biome_edges;
    biome_entrance* biome_entrances;
    int32_t n_biome_entrances;
    real_2* background_vertex_x;
    real_4* background_vertex_color;
    int32_t n_background_triangles;
} map_t;

typedef struct biome_core
{
    int32_t biome_index;
    int32_t guardian_id;
    int32_t track_length;
    int32_t bronze_time;
    int32_t n_checkpoints;
    int32_t target_size;
    int32_t n_hexes;
    bounding_box_2 bounds;
    unnamed_11105 entrance_points[256];
    int32_t n_entrance_points;
    uint64_t mergable_cores;
    unnamed_11042 modifiers[64];
    int32_t n_modifiers;
    int32_t n_default_modifiers;
    type_10769_with_uint32_t no_creatures : 1;
} biome_core;

typedef struct room_t
{
    type_10769_with_uint32_t cleared : 1;
    int32_t first_spawner;
    int32_t n_spawners;
} room_t;

typedef struct creature_spawner
{
    int32_t body_id;
    int32_t creature_index;
    real_2 spawn_location;
    int32_t xp;
} creature_spawner;

typedef struct doorway
{
    unnamed_6251 rooms[12];
    int32_t n_rooms;
    int_2 pos;
    int32_t first_cell;
    int32_t n_cells;
    float value;
    unnamed_11288 adjacent_doors[24];
    type_11289_with_uint32_t changed : 2;
} doorway;

typedef struct static_cell
{
    real_2 x;
    uint32_t alive;
    real_3 color;
    unnamed_11288 neighbors[24];
    uint32_t open_sides;
} static_cell;

typedef struct tunnel_tile
{
    int_2 pos;
    int32_t index;
    float value;
} tunnel_tile;

typedef struct line_render_info
{
    real_3 x;
    real_2 d;
    float r;
    real_4 color;
} line_render_info;

typedef struct biome_node
{
    int32_t core_index;
    real_2 x;
    float r;
    type_10769_with_uint32_t fill : 1;
    type_11084_with_uint32_t snap : 1;
    map_template templ;
    biome_edge* first_edge;
    unnamed_11300* pre_generation_fn;
    unnamed_11300* post_generation_fn;
    unnamed_11300* template_generation_fn;
} biome_node;

typedef struct biome_edge
{
    biome_node* node;
    biome_edge* next;
    real_2 dir;
    float spacing;
    float randomness;
    float stiffness;
    float bias;
    type_10769_with_uint32_t virtual_edge : 1;
} biome_edge;

typedef struct biome_entrance
{
    int32_t core_a;
    int32_t core_b;
    int32_t n_entrances;
    uint32_t boss_id;
    int32_t boss_xp;
    spawn_creature_params boss_params;
    int32_t achievement_index;
    type_10769_with_uint32_t not_boss : 1;
    type_11084_with_uint32_t direct : 1;
    type_11085_with_uint32_t optional : 1;
    type_11086_with_uint32_t room_exit : 1;
} biome_entrance;

typedef struct map_template
{
    bounding_box_2 region;
    uint8_t* data;
    int_2* points;
    int32_t n_points;
    float* wall_values;
    real_2* flow;
    int32_t* biome_ids;
} map_template;

typedef struct spawn_creature_params
{
    int32_t body_id;
    real_2 orientation;
    type_10769_with_uint32_t spawn_cells : 1;
    type_11084_with_uint32_t plant : 1;
    type_11085_with_uint32_t dont_load_plan : 1;
} spawn_creature_params;

typedef union id_t
{
    uint64_t lo;
    uint64_t hi;
    unnamed_5500 string[16];
} id_t;

typedef struct textbox
{
    char* text;
    int32_t max_text;
    int32_t n_text;
    int32_t cursor;
    int32_t selection_start;
    int32_t selection_end;
    int32_t active;
} textbox;

typedef struct translation_map
{
    char** keys;
    translation_list* values;
    uint32_t max_entries;
} translation_map;

typedef struct translation_map_kash_t
{
    char* key;
    uint32_t hash;
} translation_map_kash_t;

typedef struct sound_params
{
    float volume;
    float delay;
    float pitch_shift;
    float lowpass_dist;
    int32_t type;
} sound_params;

typedef struct serialized_data
{
    uint8_t* data;
    int32_t size;
} serialized_data;

typedef struct material_t
{
    uint32_t id;
    char* name;
    int32_t next_variant;
    uint32_t tags;
    uint32_t tier;
    float drop_weight;
    unnamed_6184 spawn_with[16];
    float base_cost;
    float random_cost;
    float genome_size;
    float growth_rate;
    float max_health;
    float transfer_rate;
    float regen;
    float regen_delay_multiplier;
    type_10769_with_uint32_t attach_to_cells : 1;
    type_11084_with_uint32_t attach_to_walls : 1;
    type_11381_with_uint32_t poison_immune : 2;
    type_11087_with_uint32_t no_electric_growth : 1;
    type_11088_with_uint32_t penetrate_walls : 1;
    type_11046_with_uint32_t self_touching : 1;
    type_11047_with_uint32_t is_cancer : 1;
    type_9778_with_uint32_t is_directional : 1;
    type_9779_with_uint32_t show_adjacency : 1;
    type_9780_with_uint32_t show_direction : 1;
    type_9781_with_uint32_t show_neighbor_direction : 1;
    type_9782_with_uint32_t is_hard : 1;
    type_9783_with_uint32_t play_note : 1;
    type_9784_with_uint32_t no_recolor : 1;
    type_9785_with_uint32_t sync_health : 1;
    type_11049_with_uint32_t is_stem : 1;
    uint32_t flags;
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
    int32_t texture_type;
    real_2 uv;
    int32_t combine_material_index1;
    int32_t combine_material_index2;
    unnamed_11383* physics_update_fn;
    unnamed_11383* force_update_fn;
    unnamed_11383* electric_update_fn;
    unnamed_11383* connection_update_fn;
    unnamed_11383* brain_fn;
    unnamed_11383* destroyed_fn;
} material_t;

typedef struct bounding_box_3
{
    int_3 l;
    int_3 u;
} bounding_box_3;

typedef struct cell_pickup
{
    int32_t material_index;
    real_2 x;
    real_2 x_dot;
    float r;
    float r_dot;
    float alpha;
    float text_alpha;
    type_10769_with_uint32_t selected : 1;
    type_11084_with_uint32_t is_combo : 1;
    uint32_t flags;
} cell_pickup;

typedef struct undo_state
{
    body_plan plan;
    int_2 last_drawn_point;
    int32_t mode;
} undo_state;

typedef struct edit_menu
{
    real_2* selection_points;
    int32_t n_selection_points;
    float time;
    int_2 last_drawn_point;
    float theta;
    float scale;
    float radius;
    real_2 body_center_pos;
    int32_t mode;
    float mode_trans;
    int32_t tool;
    int32_t selected_cell_item;
    cell_item* cell_items;
    expandable_buffer cell_items_memory;
    int32_t max_cell_items;
    int32_t n_cell_items;
    int32_t* queued_dropped_bodies;
    int32_t n_queued_dropped_bodies;
    int32_t max_queued_dropped_bodies;
    unnamed_11437 cell_item_counts[8192];
    real_2 symmetry_visual_x;
    real_2 symmetry_visual_x_dot;
    float symmetry_mode_trans;
    int32_t symmetry_mode;
    bool drawing;
    bool modified;
    bool want_show_unlock_window;
    slider_t size_slider;
    body_plan plan;
    plan_cell* dragged_cells;
    uint8_t* dragged_open_sides;
    int32_t n_dragged_cells;
    int32_t max_dragged_cells;
    plan_cell* clipboard_cells;
    int32_t n_clipboard_cells;
    int32_t max_clipboard_cells;
    undo_state* undo_stack;
    int32_t n_undo_states;
    int32_t undo_stack_pointer;
    int32_t max_undo_states;
    stashed_body_plan* stashed;
    expandable_buffer stashed_memory;
    int32_t n_stashed;
    int32_t max_stashed;
    saved_body_plan* saved;
    expandable_buffer saved_memory;
    int32_t n_saved;
    int32_t max_saved;
    workshop_body_plan* workshop;
    expandable_buffer workshop_memory;
    int32_t n_workshop;
    int32_t max_workshop;
    static_button* panel_buttons;
    expandable_buffer panel_buttons_memory;
    int32_t max_panel_buttons;
    textbox rename_box;
    real_2 rename_box_alignment;
    int32_t rename_index;
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
    int32_t n_colors;
    int32_t dragged_button;
    real_2 drag_start;
    float drag_dist;
    unnamed_11448 tool_buttons[60];
    unnamed_11449 panel_tool_buttons[80];
    static_button mode_button;
    unnamed_11448 symmetry_mode_buttons[60];
    static_button icon_button;
    static_button left_button;
    static_button right_button;
    static_button close_button;
    uint8_t* dists;
    bounding_box_2 visible_region;
    unnamed_6251 n_warnings[12];
    unnamed_6251 warning_index[12];
    unnamed_11450 warning_box_size[24];
    char* stash_dir;
    tooltip_t tooltip;
} edit_menu;

typedef struct cell_item
{
    int32_t type;
    int32_t material_index;
    int32_t body_id;
    draggable_button button;
    type_10769_with_uint32_t filtered : 1;
    type_11084_with_uint32_t activated : 1;
} cell_item;

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

typedef struct stashed_body_plan
{
    body_plan plan;
    unnamed_10804 name[512];
    real_2 pos;
} stashed_body_plan;

typedef struct saved_body_plan
{
    type_10769_with_uint32_t is_folder : 1;
    type_11084_with_uint32_t expanded : 1;
    type_11460_with_uint32_t level : 30;
    unnamed_10804 name[512];
    real_2 pos;
    float expand_t;
} saved_body_plan;

typedef struct static_button
{
    float r;
    float r_dot;
    float state;
    float tooltip_alpha;
    bool was_hovered;
} static_button;

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

typedef struct tooltip_t
{
    real_2 box_size;
    real_2 pos;
    float alpha;
    int32_t last_hovered_index;
    int32_t last_hovered_type;
    int32_t last_hovered_imbue;
    real_2 last_hovered_mutation_pos;
    type_10769_with_uint32_t is_combo : 1;
    uint32_t consumable_instructions;
} tooltip_t;

typedef struct particle_t
{
    int32_t type;
    real_2 x;
    real_2 x_dot;
    real_2 x_spawn;
    int32_t target;
    float r;
    float r_dot;
    int32_t time;
    int32_t duration;
    real_4 color;
    real_4 color_initial;
    real_4 color_final;
    real_4 emission;
    float emission_radius;
    uint32_t mutagen_material_index;
    type_10769_with_uint32_t affects_gameplay : 1;
} particle_t;

typedef struct floodfill_piece
{
    int32_t start_index;
    int32_t n_cells;
    int32_t n_hearts;
    int32_t n_cancers;
    float health;
    float cost;
    bounding_box_3 region;
} floodfill_piece;

typedef struct translation_info
{
    int32_t mutagen_material_index;
    int32_t combine_material_index;
} translation_info;

typedef struct creature_t
{
    uint32_t id;
    uint32_t ___id_null_termination;
    char* filename;
    unnamed_11519 mutations[1152];
    int32_t n_mutations;
    float cost_discount;
    float abstract_speed;
    type_10769_with_uint32_t show_damage_numbers : 1;
    type_11084_with_uint32_t snap : 1;
    type_11085_with_uint32_t pickupable : 1;
    type_11086_with_uint32_t die_on_activation : 1;
    type_11087_with_uint32_t hidden : 1;
    body_plan plan;
    unnamed_11110* ai_func;
    unnamed_11521* spawn_func;
    unnamed_11110* death_func;
    unnamed_11110* boss_drop_func;
    unnamed_11523* generation_func;
    unnamed_5186 lua_func[128];
    unnamed_5186 lua_spawn_func[128];
    unnamed_5186 lua_death_func[128];
} creature_t;

typedef struct button_out
{
    bool clicked;
    bool hovered;
} button_out;

typedef struct mat_and_color
{
    int32_t material_index;
    real_4 color;
} mat_and_color;

typedef struct color_bar_render_info
{
    float min;
    float low;
    float mid;
    float high;
    float max;
    color_bar_render_info colors;
    uint32_t do_square;
} color_bar_render_info;

typedef struct color_bar_render_info
{
    real_3 color0;
    real_3 color1;
    real_3 color2;
    real_3 color3;
    real_3 color4;
} color_bar_render_info::<unnamed-type-colors>;

typedef struct mutation_pickup
{
    unnamed_11596 nodes[448];
    int32_t n_nodes;
    unnamed_6184 imbues[16];
    int32_t n_imbues;
    real_2 x;
    real_2 x_dot;
    float alpha;
    int32_t selected;
    int32_t pending_imbues;
    bool did_spawn;
} mutation_pickup;

typedef struct pickup_node
{
    int32_t mutation_index;
    real_2 x_rel;
    float r;
    float r_dot;
    float alpha;
    bool is_selected;
} pickup_node;

typedef struct explosion_t
{
    real_2 x;
    float r;
    int32_t duration;
    float damage;
    float knockback;
    float heat;
    float stasis;
    real_3 hsv;
    real_3 rgb;
    uint32_t ignore_body;
    type_10769_with_uint32_t recolor : 1;
} explosion_t;

typedef struct lightning_t
{
    int32_t a;
    int32_t b;
    real_2 dir;
    float range;
    float damage;
    float shock;
    int32_t lifetime;
    unnamed_11649 points[128];
    type_11650_with_uint32_t n_points : 16;
    type_11049_with_uint32_t type : 1;
    uint32_t n_points_and_type;
    real_4 color;
} lightning_t;

typedef struct raycast_result
{
    wall_t wall;
    float length;
} raycast_result;

typedef struct cell_pool
{
    unnamed_11437 material_indices[8192];
    unnamed_11676 material_cum_chances[8192];
    int32_t n_materials;
} cell_pool;

typedef struct biome_modifier
{
    char* id;
    unnamed_11691* generation_fn;
    unnamed_11110* creature_fn;
    float chance;
} biome_modifier;

typedef struct biome_type
{
    uint32_t id;
    real_3 color;
    float light;
    float bumpyness;
    float temperature;
    type_10769_with_uint32_t tracked : 1;
    type_11084_with_uint32_t explored : 1;
    type_11085_with_uint32_t no_modifiers : 1;
    uint32_t custom_cell_spawning;
    uint32_t flags;
    int32_t ambient_music_id;
    int32_t battle_music_id;
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
    int32_t cell_max_neighbors;
    cell_pool pool;
    unnamed_11698 creature_ids[1024];
    unnamed_11699 creature_xps[1024];
    unnamed_11700 creature_cum_chances[1024];
    unnamed_11700 creature_teams[1024];
    int32_t n_creatures;
    unnamed_11698 plant_ids[1024];
    unnamed_11699 plant_xps[1024];
    unnamed_11700 plant_teams[1024];
    unnamed_11700 plant_cum_chances[1024];
    int32_t n_plants;
    unnamed_11042 modifiers[64];
    int32_t n_modifiers;
} biome_type;

typedef struct laser_t
{
    int32_t cell_id;
    real_2 x;
    real_2 dir;
    float heat;
    float width;
    float length;
    type_10769_with_uint32_t sensor : 1;
} laser_t;

typedef struct radiant_render_info
{
    real_3 x;
    float r;
    float distortion;
    real_4 color;
} radiant_render_info;

typedef struct color_swatch_render_info
{
    real_3 x;
    float r;
    real_4 color;
    float scale;
    uint32_t pinned;
} color_swatch_render_info;

typedef struct link_attractor_t
{
    real_2 x;
    float strength;
    int32_t bone_id;
} link_attractor_t;

typedef struct magnetic_field_t
{
    cell* c;
    real_3 moment;
} magnetic_field_t;

typedef struct particle_pusher_t
{
    real_2 x;
    real_2 d;
    float strength;
    float inv_dsq;
} particle_pusher_t;

typedef struct big_lightning_vertex
{
    real_2 x;
    real_4 color;
} big_lightning_vertex;

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

typedef struct stbtt__csctx
{
    int32_t bounds;
    int32_t started;
    float first_x;
    float first_y;
    float x;
    float y;
    int32_t min_x;
    int32_t max_x;
    int32_t min_y;
    int32_t max_y;
    stbtt_vertex* pvertices;
    int32_t num_vertices;
} stbtt__csctx;

typedef struct stbtt__hheap
{
    stbtt__hheap_chunk* head;
    void* first_free;
    int32_t num_remaining_in_head_chunk;
} stbtt__hheap;

typedef struct stbtt__hheap_chunk
{
    stbtt__hheap_chunk* next;
} stbtt__hheap_chunk;

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

typedef union float_conv
{
    float f;
    int32_t i;
} float_conv;

typedef struct hex_uint
{
    uint32_t value;
} hex_uint;

typedef struct file_info
{
    type_10769_with_uint32_t is_directory : 1;
} file_info;

typedef struct circular_buffer_t
{
    uint8_t* buffer;
    uint64_t size;
} circular_buffer_t;

typedef struct queued_sound
{
    sound_t* sound;
    sound_params params;
    unnamed_10482 filtered[8];
    int32_t n_played_samples;
    bool kill;
} queued_sound;

typedef struct brown_sound
{
    float value;
    float filtered_value;
    float volume;
    float target_volume;
    float next_target_volume;
    int32_t next_target_volume_data;
    float lowpass;
    float target_lowpass;
    float next_lowpass;
    int32_t next_lowpass_data;
    float lerp_rate;
} brown_sound;

typedef struct singing_channel
{
    float volume;
    float target_volume;
    float phase;
    float next_target_volume;
    int32_t next_target_volume_data;
} singing_channel;

typedef struct run_stats
{
    double start_time;
    double end_time;
    uint32_t frames;
    uint32_t seed;
    int32_t biomes_explored;
    int32_t xp;
    int32_t level;
    uint32_t ending;
    int32_t creature_deaths;
    uint32_t death_biome;
} run_stats;

typedef struct stbtt_kerningentry
{
    int32_t glyph1;
    int32_t glyph2;
    int32_t advance;
} stbtt_kerningentry;

typedef struct stbtt_pack_range
{
    float font_size;
    int32_t first_unicode_codepoint_in_range;
    int32_t* array_of_unicode_codepoints;
    int32_t num_chars;
    stbtt_packedchar* chardata_for_range;
    uint8_t h_oversample;
    uint8_t v_oversample;
} stbtt_pack_range;

typedef struct strand
{
    char* str;
    int32_t len;
} strand;

typedef struct rectangle_space
{
    int_2 max_size;
    bounding_box_2* free_regions;
    int32_t n_free_regions;
} rectangle_space;

typedef struct texture_t
{
    uint32_t handle;
    int_2 size;
} texture_t;

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

typedef struct bitmap_t
{
    uint8_4* data;
    int_2 size;
    uint32_t texture;
} bitmap_t;

typedef struct ring_render_info
{
    real_3 x;
    float ri;
    float ro;
    real_4 color;
} ring_render_info;

typedef struct arc_render_info
{
    real_3 x;
    real_2 d0;
    real_2 d1;
    float R;
    float r;
    real_4 color;
} arc_render_info;

typedef struct rectangle_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} rectangle_render_info;

typedef struct hexagon_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} hexagon_render_info;

typedef struct icon_render_info
{
    real_3 x;
    float r;
    real_4 color;
    real_2 uv;
} icon_render_info;

typedef struct tool_render_info
{
    real_3 x;
    float r;
    real_4 color;
    uint32_t id;
    float state;
} tool_render_info;

typedef struct cell_render_info
{
    real_3 x;
    real_2 body_x;
    real_2 r;
    float r_scale;
    real_4 color;
    float w_mult;
    float spark;
    int32_t texture_type;
    real_2 uv;
    uint32_t open_sides;
} cell_render_info;

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

typedef struct lightning_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} lightning_render_info;

typedef struct laser_render_info
{
    real_3 x;
    real_2 d;
    float r;
    real_4 color;
} laser_render_info;

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

typedef struct light_render_info
{
    real_3 x;
    float r;
    real_4 color;
} light_render_info;

typedef struct id_t_index
{
    id_t id;
    int32_t index;
} id_t_index;

typedef struct mutation_type
{
    id_t id;
    float weight;
    float cum_weight;
    real_2 uv;
    int32_t extra_data_offset;
    int32_t n_imbues;
    type_10769_with_uint32_t no_stacking : 1;
} mutation_type;

typedef struct rle_pair
{
    float value;
    int32_t count;
} rle_pair;

typedef struct boss_gate
{
    int_2 pos;
    int32_t boss_id;
    int32_t first_cell;
    int32_t n_cells;
    int32_t achievement_index;
} boss_gate;

typedef struct acid_particle_16
{
    unnamed_10600 x[64];
    unnamed_10600 y[64];
    unnamed_10600 x_dot[64];
    unnamed_10600 y_dot[64];
    unnamed_10600 r[64];
    unnamed_10600 r_dot[64];
    unnamed_11042 time[64];
    unnamed_12916 color_initial[256];
    unnamed_12916 color_final[256];
} acid_particle_16;

typedef struct decompressed_map_data
{
    int32_t version_number;
    bounding_box_2 region;
    uint8_t* data;
    int32_t size;
} decompressed_map_data;

typedef struct init_world_params
{
    bool keep_seed;
    int32_t map_type;
    bool no_creatures;
    bool loading;
} init_world_params;

typedef struct slider_params
{
    float full_width;
    real_2 pos;
    bool active;
} slider_params;

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

typedef struct sandbox_menu
{
    int32_t tool;
    unnamed_13003 tool_buttons[220];
    float selected_team;
    unnamed_13004 team_buttons[100];
    float* mutation_r;
    float* mutation_r_dot;
    slider_t explosion_slider;
    float explosion_radius;
    slider_t terraform_slider;
    float terraform_radius;
    int32_t terraform_biome_index;
    type_10769_with_uint32_t terraform_coarse : 1;
    type_11084_with_uint32_t terraform_flow : 1;
    type_11085_with_uint32_t terraform_biome : 1;
    type_11086_with_uint32_t terraform_grid : 1;
    type_11087_with_uint32_t terraform_biome_hide : 1;
    type_11088_with_uint32_t map_export_mode : 1;
    uint32_t terraform_flags;
    unnamed_11449 terraform_buttons[80];
    float* cell_r;
    float* cell_r_dot;
    float* biome_r;
    float* biome_r_dot;
    real_2 block_zone;
    real_2 block_center;
    int32_t selected_creature;
    int32_t dragged_body;
    tooltip_t tooltip;
} sandbox_menu;

typedef struct command_result_t
{
    char* command;
    char* result;
    char* error;
} command_result_t;

typedef struct multithread_loop_info
{
    user_input* input;
    int32_t start;
    int32_t end;
    int32_t iteration;
} multithread_loop_info;

typedef struct bone_contact
{
    cell* c;
    cell* o;
    real_2 normal;
    float spacing;
    float depth;
    int32_t c_sharpness;
    int32_t o_sharpness;
} bone_contact;

typedef struct digger_t
{
    real_2 x;
    float r;
    int32_t duration;
} digger_t;

typedef struct portal_t
{
    real_2 x;
    real_2 x_dot;
} portal_t;

typedef struct light_reciever_t
{
    real_2 x;
    real_3 hsv;
    float radius_sq;
} light_reciever_t;

typedef struct lightning_emitter
{
    real_2 x;
    real_2 dir;
} lightning_emitter;

typedef struct player_command_t
{
    real_2 movement;
    real_2 grab_target;
    float grab_weight;
    float grab_dir;
    unnamed_13082 abilities[1];
} player_command_t;

typedef struct biome_weights
{
    int_3 biomes;
    real_3 weights;
} biome_weights;

typedef struct map_floodfill_piece
{
    int32_t id;
    int32_t n_hexes;
    bounding_box_2 bounds;
} map_floodfill_piece;

typedef struct fiber_init_data
{
    int32_t fiber_index;
    lane_group_t* group;
} fiber_init_data;

typedef struct saver_t
{
    volatile uint32_t pending_save;
    volatile uint32_t pending_map_edits;
    unnamed_10791 temp_player_filename[256];
    unnamed_10791 temp_world_filename[256];
    unnamed_10791 final_player_filename[256];
    unnamed_10791 final_world_filename[256];
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
    unnamed_10791 temp_map_edits_filename[256];
    unnamed_10791 final_map_edits_filename[256];
    uint8_t* serialized_map_edits;
    uint64_t max_serialized_map_edits_size;
    uint64_t serialized_map_edits_size;
    uint64_t map_edits_written_size;
    void* map_edits_file;
    void* map_edits_filemapping;
    uint8_t* map_edits_mapview;
    char* save_dir;
    unnamed_6245 settings_filename[1024];
    unnamed_6245 run_history_filename[1024];
    unnamed_6245 recording_dir[1024];
    unnamed_6245 normal_save_dir[1024];
    unnamed_6245 sandbox_save_dir[1024];
    unnamed_6245 user_body_plans_dir[1024];
    unnamed_6245 temp_dir[1024];
    unnamed_6245 workshop_dir[1024];
    unnamed_6245 appdata_path[1024];
    unnamed_6245 userdata_path[1024];
} saver_t;

typedef struct settings_t
{
    uint32_t settings_version;
    float effects_volume;
    float music_volume;
    keybinds_t keybinds;
    unnamed_13537 buttons[120];
    uint32_t toggle_seek;
    uint32_t toggle_ability;
    uint32_t show_fps;
    uint32_t fullscreen;
    uint32_t clip_cursor;
    uint32_t hardware_cursor;
    float gamepad_cursor_sens;
    float gamepad_deadzone;
    int32_t window_x;
    int32_t window_y;
    int32_t resolution_x;
    int32_t resolution_y;
    uint32_t replay_recorder;
    int32_t gif_resolution_x;
    int32_t gif_resolution_y;
    int32_t gif_frames;
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

typedef struct keybinds_t
{
    int32_t forward;
    int32_t backward;
    int32_t left;
    int32_t right;
    int32_t control_mode;
    int32_t ability;
    int32_t ability1;
    int32_t ability2;
    int32_t extend;
    int32_t retract;
    int32_t interact;
    int32_t map;
    int32_t zoom_in;
    int32_t zoom_out;
    int32_t edit;
    int32_t inspect;
    int32_t brush_bigger;
    int32_t brush_smaller;
    int32_t tool_select;
    int32_t tool_draw;
    int32_t tool_fill;
    unnamed_6251 tools[12];
    int32_t toggle_symmetry;
    int32_t toggle_icons;
    int32_t editor_up;
    int32_t editor_down;
    int32_t editor_left;
    int32_t editor_right;
    int32_t editor_zoom_in;
    int32_t editor_zoom_out;
    int32_t console;
} keybinds_t;

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
    int32_t output_samples_per_internal_sample;
    float* game_sfx_buffer;
    int32_t game_sfx_pos;
    int32_t game_sfx_size;
    float* music_buffer;
    int32_t music_pos;
    int32_t music_size;
    float game_sfx_volume;
    float target_game_sfx_volume;
    float music_volume;
    float target_music_volume;
    queued_sound* queued_sounds;
    int32_t max_queued_sounds;
    volatile uint32_t next_queued_sound;
    volatile uint32_t last_queued_sound;
    queued_sound* playing_sounds;
    int32_t n_playing_sounds;
    int32_t max_playing_sounds;
    looping_sound* looping_sounds;
    int32_t n_looping_sounds;
    int32_t max_looping_sounds;
    brown_sound brown_noise;
    unnamed_13552 singing[1536];
    int32_t current_song;
    float music_transition_speed;
    float target_music_transition_speed;
    float next_target_music_transition_speed;
    int32_t next_target_music_transition_speed_data;
} audio_context;

typedef struct particle_type_t
{
    bool streak;
    bool draw_on_top;
} particle_type_t;

typedef struct world
{
    int32_t menu;
    type_10769_with_uint32_t confirm_newgame : 1;
    type_11084_with_uint32_t confirm_quit : 1;
    type_11085_with_uint32_t dead : 1;
    type_11086_with_uint32_t won : 1;
    type_11087_with_uint32_t show_body_preview : 1;
    type_11088_with_uint32_t show_trace : 1;
    type_11046_with_uint32_t frozen : 1;
    type_11047_with_uint32_t map_mode : 1;
    type_9778_with_uint32_t use_battle_music : 1;
    type_9779_with_uint32_t scroll_blocked : 1;
    type_9780_with_uint32_t lava_walls : 1;
    type_9781_with_uint32_t glowing_walls : 1;
    type_9782_with_uint32_t use_gamepad : 1;
    type_9783_with_uint32_t gamepad_cursor_mode : 1;
    type_9784_with_uint32_t left_cursor_mode : 1;
    type_9785_with_uint32_t hide_cursor : 1;
    type_11049_with_uint32_t ability_toggled0 : 1;
    type_11050_with_uint32_t ability_toggled1 : 1;
    type_11051_with_uint32_t ability_toggled2 : 1;
    type_13614_with_uint32_t seek_toggled : 2;
    type_11054_with_uint32_t control_mode : 1;
    type_13615_with_uint32_t portals_enabled : 2;
    type_13616_with_uint32_t block_mouse : 1;
    type_13617_with_uint32_t free_last_mutations : 1;
    int32_t game_mode;
    int32_t debug_view_mode;
    int32_t exploding_corpses;
    real_2 camera_pos;
    float normal_camera_dist;
    float map_camera_dist;
    float camera_dist;
    float vision_radius;
    real_2 screenshake;
    real_2 screenshake_dot;
    uint32_t credits_timer;
    float threat_level;
    int32_t current_biome_ambient;
    int32_t current_biome_battle;
    edit_menu em;
    sandbox_menu sm;
    inspector_menu im;
    int32_t selected_body;
    float last_team;
    mutation_item_list last_mutations;
    biome_core* current_race_core;
    uint32_t completed_race_checkpoints;
    int32_t race_start_frame;
    int32_t last_race_time;
    int32_t best_race_time;
    float last_race_flash;
    float best_race_flash;
    int32_t completed_race_targets;
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
    unnamed_13619 portals[32];
    body_id_table bodies;
    bone_id_table bones;
    uint8_t* body_auxiliary_data;
    expandable_buffer body_auxiliary_data_memory;
    int32_t body_auxiliary_size;
    id_index* cell_index_table;
    expandable_buffer cell_index_table_memory;
    cell* cells;
    expandable_buffer cells_memory;
    int32_t n_cells;
    int32_t max_cells;
    int32_t next_cell_id;
    boss_gate* boss_gates;
    int32_t n_boss_gates;
    lightning_emitter* lightning_emitters;
    int32_t n_lightning_emitters;
    int32_t max_lightning_emitters;
    int32_t selected;
    int32_t hovered;
    map_t map;
    int32_t* hash_data;
    int32_t* hashed_cells;
    int32_t max_hashed_cells;
    real_3* hashed_pos;
    int32_t* grid_data;
    int32_t* grid_bodies;
    real_2* grid_pos;
    boss_part_t* boss_parts;
    int32_t n_boss_parts;
    lightning_t* lightnings;
    expandable_buffer lightnings_memory;
    int32_t n_lightnings;
    int32_t max_lightnings;
    laser_t* lasers;
    expandable_buffer lasers_memory;
    int32_t n_lasers;
    int32_t max_lasers;
    explosion_t* explosions;
    expandable_buffer explosions_memory;
    int32_t n_explosions;
    int32_t max_explosions;
    explosion_render_info* explosion_visuals;
    expandable_buffer explosion_visuals_memory;
    int32_t n_explosion_visuals;
    int32_t max_explosion_visuals;
    digger_t* diggers;
    expandable_buffer diggers_memory;
    int32_t n_diggers;
    int32_t max_diggers;
    radiant_render_info* radiant_visuals;
    expandable_buffer radiant_visuals_memory;
    int32_t n_radiant_visuals;
    int32_t max_radiant_visuals;
    circle_render_info* stasis_visuals;
    expandable_buffer stasis_visuals_memory;
    int32_t n_stasis_visuals;
    int32_t max_stasis_visuals;
    color_swatch_render_info* paint_visuals;
    expandable_buffer paint_visuals_memory;
    int32_t n_paint_visuals;
    int32_t max_paint_visuals;
    particle_pusher_t* particle_pushers;
    expandable_buffer particle_pushers_memory;
    int32_t n_particle_pushers;
    int32_t max_particle_pushers;
    link_attractor_t* link_attractors;
    expandable_buffer link_attractors_memory;
    int32_t n_link_attractors;
    int32_t max_link_attractors;
    magnetic_field_t* magnetic_fields;
    expandable_buffer magnetic_fields_memory;
    int32_t n_magnetic_fields;
    int32_t max_magnetic_fields;
    light_reciever_t* light_recievers;
    unnamed_11067* light_reciever_cells;
    int32_t* light_reciever_values;
    int32_t n_light_recievers;
    mutation_pickup* mutation_pickups;
    expandable_buffer mutation_pickups_memory;
    int32_t n_mutation_pickups;
    int32_t max_mutation_pickups;
    cell_pickup* cell_pickups;
    expandable_buffer cell_pickups_memory;
    int32_t n_cell_pickups;
    int32_t max_cell_pickups;
    particle_t* particles;
    expandable_buffer particles_memory;
    int32_t n_particles;
    int32_t max_particles;
    acid_particle_16* acid_particles;
    expandable_buffer acid_particles_memory;
    int32_t n_acid_particles;
    int32_t max_acid_particle_groups;
    biome_type* biome_types;
    expandable_buffer biome_types_memory;
    int32_t max_biome_types;
    int32_t n_biome_types;
    biome_modifier* biome_modifiers;
    expandable_buffer biome_modifiers_memory;
    int32_t max_biome_modifiers;
    int32_t n_biome_modifiers;
    tooltip_t tooltip;
    real_2 tooltip_x;
    real_2 tooltip_pickup_x;
    bool tooltip_active;
    real_2 gamepad_cursor_x;
    uint32_t base_seed;
    uint32_t seed;
    uint32_t editor_seed;
    int32_t frame_number;
    double last_frame_time;
    int32_t tutorial_stage;
    char* current_tutorial;
    int32_t map_prompt_timer;
    real_2 end_text_x;
    float fade_in;
    float wall_vision;
    volatile float start_trans;
    type_13620_with_unnamed_5042 loading_screen : 1;
    type_13621_with_unnamed_5042 done_loading : 1;
    type_13622_with_unnamed_5042 starting_game : 1;
    type_13623_with_unnamed_5042 starting_new_run : 1;
    type_13624_with_unnamed_5042 starting_sandbox : 1;
    type_13625_with_unnamed_5042 has_save : 1;
    type_13626_with_unnamed_5042 has_sandbox : 1;
    volatile uint32_t starting_mode;
    volatile uint32_t start_animation_done;
    init_world_params sandbox_start_params;
    float jet_volume;
    float acid_volume;
    float ink_volume;
    float vacuum_volume;
    float xp_volume;
    float lightning_volume;
    float thunder_volume;
    unnamed_11043 singing_volume[384];
    final_boss_state final_boss;
    run_stats run;
    unnamed_13628 message_queue[128];
    int32_t n_message_queue;
    float message_timer;
    print_buffer_t game_print_buffer;
    float game_print_timer;
    uint32_t queued_seed;
    bool use_fixed_seed;
    bool is_seeded;
    lua_State* console_L;
    textbox console_box;
    command_result_t* console_history;
    int32_t max_console_history;
    int32_t n_console_history;
    int32_t selected_command;
    bool show_console;
    char* stash_dir;
    translation_map translations;
    int32_t n_languages;
    int32_t language_index;
    int32_t n_tips;
    unnamed_10768 workshop_published[7200];
    int32_t n_workshop_published;
    int32_t total_workshop_published;
    int32_t workshop_published_page;
    render_context* rc;
    unnamed_13629 player_commands[10080];
    int32_t player_command_start;
    int32_t n_player_commands;
    int32_t input_delay;
} world;

typedef struct inspector_menu
{
    int32_t body_id;
    int_2 selected_cell_coord;
    int32_t selected_variable;
    float min;
    float max;
    float low;
    float high;
    type_10769_with_uint32_t show_cell_icons : 1;
    type_11084_with_uint32_t dragging : 1;
    type_11085_with_uint32_t graph_open : 1;
    unnamed_13632 graph_values[4800];
    int32_t n_graph_values;
    int32_t next_graph_value;
    float graph_height;
    float graph_toggle_r;
    float graph_toggle_r_dot;
    float scale;
    real_2 center;
    real_2 drag_start;
    tooltip_t tooltip;
} inspector_menu;

typedef struct final_boss_state
{
    type_7248_with_uint8_t active : 1;
    type_7565_with_uint8_t ready : 1;
    uint8_t active_flags;
    bool dead;
    real_2 x;
    float health;
    float max_health;
    int32_t attack;
    int32_t stage;
    int32_t rotation;
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

typedef struct fenv_t
{
    uint32_t _Fe_ctl;
    uint32_t _Fe_stat;
} fenv_t;

typedef struct exp2f_data
{
    unnamed_18123 tab[256];
    double shift_scaled;
    unnamed_18124 poly[24];
    double shift;
    double invln2_scaled;
    unnamed_18124 poly_scaled[24];
} exp2f_data;

typedef struct exp_data
{
    double invln2N;
    double shift;
    double negln2hiN;
    double negln2loN;
    unnamed_18456 poly[32];
    double exp2_shift;
    unnamed_18457 exp2_poly[40];
    unnamed_18458 tab[4096];
} exp_data;
