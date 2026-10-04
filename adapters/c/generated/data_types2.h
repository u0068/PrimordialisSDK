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
} mtx_t;

typedef struct mtx_t
{
} mtx_t;

typedef struct thrd_t
{
} thrd_t;

typedef struct thrd_t
{
} thrd_t;

typedef struct tss_ptd
{
} tss_ptd;

typedef struct tss_t
{
} tss_t;

typedef struct tss_ptd
{
    tss_ptd* next;
    tss_ptd* prev;
    unnamed data[8192];
} tss_ptd;

typedef struct tss_t
{
} tss_t;

typedef struct once_flag
{
} once_flag;

typedef struct once_flag
{
} once_flag;

typedef struct uint8_2
{
} uint8_2;

typedef struct uint8_2
{
    unnamed data[2];
    unnamed operator[];
    MemberFunctionType(index=10353, return_type=TypeRef(index=10351), class_type=TypeRef(index=10348), this_type=TypeRef(index=10352), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
} uint8_2;

typedef struct uint8_3
{
} uint8_3;

typedef struct uint8_3
{
    uint8_2 xy;
    uint8_2 yz;
    unnamed data[3];
    unnamed operator[];
    MemberFunctionType(index=10370, return_type=TypeRef(index=10351), class_type=TypeRef(index=10365), this_type=TypeRef(index=10369), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
    unnamed zxy;
    MemberFunctionType(index=10371, return_type=TypeRef(index=10365), class_type=TypeRef(index=10365), this_type=TypeRef(index=10369), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed yzx;
    MemberFunctionType(index=10371, return_type=TypeRef(index=10365), class_type=TypeRef(index=10365), this_type=TypeRef(index=10369), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
} uint8_3;

typedef struct uint8_4
{
} uint8_4;

typedef struct uint8_4
{
    uint8_2 xy;
    uint8_2 yz;
    uint8_3 xyz;
    uint8_3 yzw;
    unnamed data[4];
    unnamed operator[];
    MemberFunctionType(index=10386, return_type=TypeRef(index=10351), class_type=TypeRef(index=10382), this_type=TypeRef(index=10385), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
    unnamed zxy;
    MemberFunctionType(index=10387, return_type=TypeRef(index=10382), class_type=TypeRef(index=10382), this_type=TypeRef(index=10385), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed yzx;
    MemberFunctionType(index=10387, return_type=TypeRef(index=10382), class_type=TypeRef(index=10382), this_type=TypeRef(index=10385), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
} uint8_4;

typedef struct int_2
{
} int_2;

typedef struct int_2
{
    unnamed data[8];
    unnamed operator[];
    MemberFunctionType(index=10403, return_type=TypeRef(index=10401), class_type=TypeRef(index=10398), this_type=TypeRef(index=10402), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
} int_2;

typedef struct uint_2
{
} uint_2;

typedef struct uint_2
{
    unnamed data[8];
    unnamed operator[];
    MemberFunctionType(index=10418, return_type=TypeRef(index=7601), class_type=TypeRef(index=10414), this_type=TypeRef(index=10417), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
} uint_2;

typedef struct uint_3
{
} uint_3;

typedef struct uint_3
{
    uint_2 xy;
    uint_2 yz;
    unnamed data[12];
    unnamed operator[];
    MemberFunctionType(index=10435, return_type=TypeRef(index=7601), class_type=TypeRef(index=10431), this_type=TypeRef(index=10434), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
    unnamed zxy;
    MemberFunctionType(index=10436, return_type=TypeRef(index=10431), class_type=TypeRef(index=10431), this_type=TypeRef(index=10434), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed yzx;
    MemberFunctionType(index=10436, return_type=TypeRef(index=10431), class_type=TypeRef(index=10431), this_type=TypeRef(index=10434), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
} uint_3;

typedef struct uint_4
{
} uint_4;

typedef struct uint_4
{
    uint_2 xy;
    uint_2 yz;
    uint_3 xyz;
    uint_3 yzw;
    unnamed data[16];
    unnamed operator[];
    MemberFunctionType(index=10451, return_type=TypeRef(index=7601), class_type=TypeRef(index=10447), this_type=TypeRef(index=10450), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
    unnamed zxy;
    MemberFunctionType(index=10452, return_type=TypeRef(index=10447), class_type=TypeRef(index=10447), this_type=TypeRef(index=10450), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed yzx;
    MemberFunctionType(index=10452, return_type=TypeRef(index=10447), class_type=TypeRef(index=10447), this_type=TypeRef(index=10450), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
} uint_4;

typedef struct int_3
{
} int_3;

typedef struct int_3
{
    int_2 xy;
    int_2 yz;
    unnamed data[12];
    unnamed operator[];
    MemberFunctionType(index=10467, return_type=TypeRef(index=10401), class_type=TypeRef(index=10463), this_type=TypeRef(index=10466), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
    unnamed zxy;
    MemberFunctionType(index=10468, return_type=TypeRef(index=10463), class_type=TypeRef(index=10463), this_type=TypeRef(index=10466), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed yzx;
    MemberFunctionType(index=10468, return_type=TypeRef(index=10463), class_type=TypeRef(index=10463), this_type=TypeRef(index=10466), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
} int_3;

typedef struct real_2
{
} real_2;

typedef struct real_2
{
    unnamed data[8];
    unnamed operator[];
    MemberFunctionType(index=10485, return_type=TypeRef(index=10483), class_type=TypeRef(index=10479), this_type=TypeRef(index=10484), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
} real_2;

typedef struct int_2x2
{
} int_2x2;

typedef struct int_2x2
{
    unnamed columns[16];
    unnamed data[16];
    unnamed operator[];
    MemberFunctionType(index=10504, return_type=TypeRef(index=10502), class_type=TypeRef(index=10498), this_type=TypeRef(index=10503), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
} int_2x2;

typedef struct real_2x2
{
} real_2x2;

typedef struct real_2x2
{
    unnamed columns[16];
    unnamed data[16];
    unnamed operator[];
    MemberFunctionType(index=10526, return_type=TypeRef(index=10524), class_type=TypeRef(index=10519), this_type=TypeRef(index=10525), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
} real_2x2;

typedef struct real_3
{
} real_3;

typedef struct real_3
{
    real_2 xy;
    real_2 yz;
    unnamed data[12];
    unnamed operator[];
    MemberFunctionType(index=10546, return_type=TypeRef(index=10483), class_type=TypeRef(index=10541), this_type=TypeRef(index=10545), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
    unnamed zxy;
    MemberFunctionType(index=10547, return_type=TypeRef(index=10541), class_type=TypeRef(index=10541), this_type=TypeRef(index=10545), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed yzx;
    MemberFunctionType(index=10547, return_type=TypeRef(index=10541), class_type=TypeRef(index=10541), this_type=TypeRef(index=10545), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
} real_3;

typedef struct real_4
{
} real_4;

typedef struct real_4
{
    real_2 xy;
    real_2 yz;
    real_3 xyz;
    real_3 yzw;
    unnamed data[16];
    unnamed operator[];
    MemberFunctionType(index=10562, return_type=TypeRef(index=10483), class_type=TypeRef(index=10558), this_type=TypeRef(index=10561), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
    unnamed zxy;
    MemberFunctionType(index=10563, return_type=TypeRef(index=10558), class_type=TypeRef(index=10558), this_type=TypeRef(index=10561), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed yzx;
    MemberFunctionType(index=10563, return_type=TypeRef(index=10558), class_type=TypeRef(index=10558), this_type=TypeRef(index=10561), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
} real_4;

typedef struct real_3x3
{
} real_3x3;

typedef struct real_3x3
{
    unnamed columns[36];
    unnamed data[36];
    unnamed operator[];
    MemberFunctionType(index=10581, return_type=TypeRef(index=10579), class_type=TypeRef(index=10574), this_type=TypeRef(index=10580), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
} real_3x3;

typedef struct real_4x4
{
} real_4x4;

typedef struct real_4x4
{
    unnamed columns[64];
    unnamed data[64];
    unnamed operator[];
    MemberFunctionType(index=10603, return_type=TypeRef(index=10601), class_type=TypeRef(index=10596), this_type=TypeRef(index=10602), calling_convention=0, options=0, parameter_count=1, argument_list=TypeRef(index=4258), this_adjustment=0)
} real_4x4;

typedef struct context_t
{
} context_t;

typedef struct lane_group_t
{
} lane_group_t;

typedef struct lane_context_t
{
} lane_context_t;

typedef struct memory_manager
{
} memory_manager;

typedef struct lua_State
{
} lua_State;

typedef struct print_buffer_t
{
} print_buffer_t;

typedef struct trace_t
{
} trace_t;

typedef struct trace_node
{
} trace_node;

typedef struct profiler_frame
{
} profiler_frame;

typedef struct circle_render_info
{
} circle_render_info;

typedef struct context_t
{
    lane_group_t* group;
    lane_context_t current_lane_context;
    unnamed lane_stack[64];
    memory_manager* manager;
    lua_State* L;
    print_buffer_t log_buffer;
    print_buffer_t game_buffer;
    trace_t* current_trace;
    trace_t* latest_trace;
    trace_node* current_trace_node;
    profiler_frame* profiler_frames;
    circle_render_info* circles;
} context_t;

typedef struct lane_group_t
{
} lane_group_t;

typedef struct lane_context_t
{
    unnamed* group;
} lane_context_t;

typedef struct expandable_buffer
{
} expandable_buffer;

typedef struct stack_allocation
{
} stack_allocation;

typedef struct memory_manager
{
    expandable_buffer stack;
    unnamed stallocs[32768];
} memory_manager;

typedef struct print_buffer_t
{
} print_buffer_t;

typedef struct trace_t
{
    trace_node* trace_nodes;
} trace_t;

typedef struct trace_node
{
    trace_node* parent;
    trace_node* previous;
    trace_node* next;
    trace_node* first_child;
    trace_node* last_child;
    unnamed* name;
} trace_node;

typedef struct profiler_frame
{
    unnamed traces[72];
} profiler_frame;

typedef struct circle_render_info
{
    real_3 x;
    real_4 color;
} circle_render_info;

typedef struct expandable_buffer
{
} expandable_buffer;

typedef struct stack_allocation
{
} stack_allocation;

typedef struct printer
{
} printer;

typedef struct print_format
{
} print_format;

typedef struct printer
{
    print_format format;
} printer;

typedef struct print_format
{
} print_format;

typedef struct looping_sound
{
} looping_sound;

typedef struct sound_t
{
} sound_t;

typedef struct looping_sound
{
    sound_t sound;
} looping_sound;

typedef struct sound_t
{
} sound_t;

typedef struct user_input
{
} user_input;

typedef struct workshop_published_item
{
} workshop_published_item;

typedef struct workshop_body_plan
{
} workshop_body_plan;

typedef struct text_element
{
} text_element;

typedef struct gamepad_t
{
} gamepad_t;

typedef struct user_input
{
    real_2 mouse;
    real_2 dmouse;
    real_2 cursor_x;
    unnamed buttons[32];
    unnamed pressed_buttons[32];
    unnamed released_buttons[32];
    unnamed text_stream[512];
    gamepad_t gamepad;
} user_input;

typedef struct workshop_published_item
{
    unnamed name[129];
} workshop_published_item;

typedef struct workshop_body_plan
{
    unnamed name[512];
    unnamed path[512];
    real_2 pos;
} workshop_body_plan;

typedef struct text_element
{
} text_element;

typedef struct gamepad_t
{
    real_2 left_stick;
    real_2 right_stick;
} gamepad_t;

typedef struct bounding_box_2
{
} bounding_box_2;

typedef struct bounding_box_2
{
    int_2 l;
    int_2 u;
} bounding_box_2;

typedef struct box_real_2
{
} box_real_2;

typedef struct box_real_2
{
    real_2 l;
    real_2 u;
} box_real_2;

typedef struct stbtt_fontinfo
{
} stbtt_fontinfo;

typedef struct stbtt_vertex
{
} stbtt_vertex;

typedef struct stbtt__buf
{
} stbtt__buf;

typedef struct stbtt_fontinfo
{
    stbtt__buf cff;
    stbtt__buf charstrings;
    stbtt__buf gsubrs;
    stbtt__buf subrs;
    stbtt__buf fontdicts;
    stbtt__buf fdselect;
} stbtt_fontinfo;

typedef struct stbtt_vertex
{
} stbtt_vertex;

typedef struct stbtt__buf
{
} stbtt__buf;

typedef struct stbtt__point
{
} stbtt__point;

typedef struct stbtt__point
{
} stbtt__point;

typedef struct stbtt__bitmap
{
} stbtt__bitmap;

typedef struct stbtt__bitmap
{
} stbtt__bitmap;

typedef struct stbtt__edge
{
} stbtt__edge;

typedef struct stbtt__edge
{
} stbtt__edge;

typedef struct stbtt_pack_context
{
} stbtt_pack_context;

typedef struct stbtt_pack_context
{
} stbtt_pack_context;

typedef struct stbtt_bakedchar
{
} stbtt_bakedchar;

typedef struct stbtt_bakedchar
{
} stbtt_bakedchar;

typedef struct cell
{
} cell;

typedef struct cell_extra
{
} cell_extra;

typedef struct cell
{
    unnamed id_packed[64];
    unnamed body_id_packed[64];
    unnamed bone_id_packed[64];
    unnamed material_index_packed[64];
    unnamed voltage_packed[64];
    unnamed voltage_dot_packed[64];
    unnamed peak_voltage_packed[64];
    unnamed directional_voltage[384];
    unnamed directional_eq_voltage[384];
    unnamed directional_conductance[384];
    unnamed shock_packed[64];
    unnamed temperature_packed[64];
    unnamed frozen_multiplier_packed[64];
    unnamed maturity_packed[64];
    unnamed health_packed[64];
    unnamed damage_packed[64];
    unnamed bloodless_damage_packed[64];
    unnamed screenshakeless_damage_packed[64];
    unnamed burn_damage_packed[64];
    unnamed ice_damage_packed[64];
    unnamed healing_packed[64];
    unnamed dealt_packed[64];
    unnamed explosive_damage_multiplier_packed[64];
    unnamed heat_damage_multiplier_packed[64];
    unnamed poison_packed[64];
    unnamed mutagen_packed[64];
    unnamed mutagen_material_index_packed[64];
    unnamed leeching_packed[64];
    unnamed value_packed[64];
    unnamed value2_packed[64];
    unnamed n_colors_packed[64];
    unnamed mass_packed[64];
    unnamed x_packed[64];
    unnamed y_packed[64];
    unnamed x_dot_packed[64];
    unnamed y_dot_packed[64];
    unnamed rot_x_packed[64];
    unnamed rot_y_packed[64];
    unnamed curl_x_packed[64];
    unnamed curl_y_packed[64];
    unnamed r_packed[64];
    unnamed base_r_packed[64];
    unnamed range_multiplier_packed[64];
    unnamed spacing[384];
    unnamed target_spacing_packed[64];
    unnamed flags_packed[64];
    unnamed open_sides : 6;
    unnamed touched : 1;
    unnamed health_gated : 1;
    unnamed kill : 1;
    unnamed floodfill_needed : 1;
    unnamed linking : 1;
    unnamed link_attracting : 1;
    unnamed self_touching : 1;
    unnamed poison_immune : 2;
    unnamed nontrivial_bone : 1;
    unnamed temp_rigid : 1;
    unnamed cell_collision : 1;
    unnamed no_explosive_regen_delay : 1;
    unnamed has_brain_fn : 1;
    unnamed recolored : 1;
    unnamed sync_health : 1;
    unnamed custom_mass : 1;
    unnamed light_radius_packed[64];
    unnamed n_contacts_packed[64];
    unnamed stickyness_packed[64];
    unnamed stickyness_timer_packed[64];
    unnamed wall_force_packed[64];
    unnamed attached_packed[64];
    unnamed linked_packed[64];
    unnamed phasing_packed[64];
    unnamed drag_reduction_packed[64];
    unnamed detected_light_packed[64];
    unnamed map_light_packed[64];
    unnamed voltage_multiplier_packed[64];
    unnamed rigidity_packed[64];
    unnamed stasis_packed[64];
    unnamed floodfilled_packed[64];
    unnamed old_voltage_packed[64];
    unnamed old_temperature_packed[64];
    unnamed old_health_packed[64];
    unnamed equilibrium_voltage_packed[64];
    unnamed total_conductance_packed[64];
    unnamed equilibrium_temperature_packed[64];
    unnamed total_heat_conductance_packed[64];
    unnamed wall_temperature_packed[64];
    unnamed extra_fields[2816];
    unnamed extra;
    MemberFunctionType(index=11060, return_type=TypeRef(index=11058), class_type=TypeRef(index=11041), this_type=TypeRef(index=11059), calling_convention=0, options=0, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed get_x;
    MemberFunctionType(index=11061, return_type=TypeRef(index=10479), class_type=TypeRef(index=11041), this_type=TypeRef(index=11059), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed get_x_dot;
    MemberFunctionType(index=11061, return_type=TypeRef(index=10479), class_type=TypeRef(index=11041), this_type=TypeRef(index=11059), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed get_rot;
    MemberFunctionType(index=11061, return_type=TypeRef(index=10479), class_type=TypeRef(index=11041), this_type=TypeRef(index=11059), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
    unnamed get_curl;
    MemberFunctionType(index=11061, return_type=TypeRef(index=10479), class_type=TypeRef(index=11041), this_type=TypeRef(index=11059), calling_convention=0, options=1, parameter_count=0, argument_list=TypeRef(index=4101), this_adjustment=0)
} cell;

typedef struct contact
{
} contact;

typedef struct wall_t
{
} wall_t;

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
    unnamed neighbors[48];
    cell* next_in_body;
    cell* next_in_bone;
} cell_extra;

typedef struct contact
{
    cell* o;
    real_2 normal;
} contact;

typedef struct wall_t
{
    real_2 gradient;
    real_2 flow;
} wall_t;

typedef struct body
{
} body;

typedef struct body_id_table
{
} body_id_table;

typedef struct body_plan
{
} body_plan;

typedef struct boss_part_t
{
} boss_part_t;

typedef struct brain_t
{
} brain_t;

typedef struct mutation_item_list
{
} mutation_item_list;

typedef struct mutation_item
{
} mutation_item;

typedef struct body
{
    body_plan plan;
    cell* first_cell;
    cell* last_cell;
    boss_part_t* boss_part;
    unnamed loaded : 1;
    unnamed floodfill_needed : 1;
    unnamed rooted : 1;
    unnamed touched : 1;
    unnamed is_boss : 1;
    unnamed show_damage_numbers : 1;
    unnamed snap : 1;
    unnamed pickupable : 1;
    unnamed activated : 1;
    unnamed is_safe : 1;
    unnamed kill : 1;
    unnamed kill_slowly : 2;
    unnamed unload : 1;
    unnamed plan_modified : 1;
    unnamed cell_collision : 1;
    unnamed no_regen_delay : 1;
    real_2 spawn_x;
    real_2 center_of_mass;
    real_2 old_center_of_mass;
    real_2 center_of_mass_dot;
    real_2 old_center_of_mass_dot;
    real_2 cost_centroid;
    real_2 orientation;
    real_2 old_orientation;
    real_2 global_body_force;
    unnamed portal_index : 8;
    unnamed in_portal : 1;
    brain_t brain;
    wall_t nearest_wall;
    mutation_item_list mutation_items;
    mutation_item* mutations;
} body;

typedef struct id_index
{
} id_index;

typedef struct body_id_table
{
    id_index* index_table;
    expandable_buffer index_table_memory;
    body* elements;
    expandable_buffer elements_memory;
} body_id_table;

typedef struct plan_cell
{
} plan_cell;

typedef struct body_plan
{
    plan_cell* plan_cells;
    bounding_box_2 region;
} body_plan;

typedef struct boss_part_t
{
    unnamed pinned_cells[256];
    real_2 offset;
    real_2 base_x;
    real_2 x;
    real_2 x_dot;
    real_2 orientation;
} boss_part_t;

typedef struct brain_t
{
    real_2 movement;
    real_2 grab_target;
    unnamed abilities[3];
    unnamed* fun;
    real_2 old_movement;
    real_2 old_grab_target;
    unnamed old_abilities[3];
    real_2 target_point;
    unnamed values[256];
} brain_t;

typedef struct mutation_item_list
{
    mutation_item* items;
} mutation_item_list;

typedef struct mutation_item
{
    unnamed imbues[16];
    real_2 pos;
} mutation_item;

typedef struct id_index
{
} id_index;

typedef struct plan_cell
{
    real_4 color;
    int_2 body_coord;
    unnamed temporary : 1;
} plan_cell;

typedef struct bone_id_table
{
} bone_id_table;

typedef struct bone
{
} bone;

typedef struct bone_id_table
{
    id_index* index_table;
    expandable_buffer index_table_memory;
    bone* elements;
    expandable_buffer elements_memory;
} bone_id_table;

typedef struct bone
{
    real_2 center_of_mass;
    real_2 center_of_mass_dot;
    real_2 orientation;
    real_2 plan_center;
    cell* first_cell;
    cell* last_cell;
    unnamed floodfill_needed : 1;
} bone;

typedef struct translation_list
{
} translation_list;

typedef struct translation_list
{
    unnamed* text;
} translation_list;

typedef struct render_context
{
} render_context;

typedef struct font_info
{
} font_info;

typedef struct render_context
{
    real_3 camera_pos;
    real_3 old_camera_pos;
    real_3x3 camera_axes;
    real_4x4 camera;
    real_4 background_color;
    real_4 foreground_color;
    real_4 highlight_color;
    unnamed background_textures[8];
    unnamed textures[36];
    int_2 resolution;
    font_info small_font;
    font_info default_font;
    font_info medium_font;
    font_info big_font;
    unnamed font_infos[736];
} render_context;

typedef struct stbtt_packedchar
{
} stbtt_packedchar;

typedef struct font_info
{
    stbtt_fontinfo info;
    stbtt_packedchar* char_data;
} font_info;

typedef struct stbtt_packedchar
{
} stbtt_packedchar;

typedef struct recording_buffer
{
} recording_buffer;

typedef struct recording_buffer
{
    uint8_4* data;
    int_2 resolution;
} recording_buffer;

typedef struct stbtt_aligned_quad
{
} stbtt_aligned_quad;

typedef struct stbtt_aligned_quad
{
} stbtt_aligned_quad;

typedef struct map_t
{
} map_t;

typedef struct biome_core
{
} biome_core;

typedef struct room_t
{
} room_t;

typedef struct creature_spawner
{
} creature_spawner;

typedef struct doorway
{
} doorway;

typedef struct static_cell
{
} static_cell;

typedef struct tunnel_tile
{
} tunnel_tile;

typedef struct line_render_info
{
} line_render_info;

typedef struct biome_node
{
} biome_node;

typedef struct biome_edge
{
} biome_edge;

typedef struct biome_entrance
{
} biome_entrance;

typedef struct map_t
{
    bounding_box_2 map_range;
    biome_core* cores;
    real_2* flow;
    real_3* color;
    int_2 save_origin;
    room_t* rooms;
    creature_spawner* spawners;
    doorway* doors;
    static_cell* static_cells;
    tunnel_tile* tunnel_tiles;
    line_render_info* safe_zone_lines;
    biome_node* biome_nodes;
    biome_edge* biome_edges;
    biome_entrance* biome_entrances;
    real_2* background_vertex_x;
    real_4* background_vertex_color;
} map_t;

typedef struct biome_core
{
    bounding_box_2 bounds;
    unnamed entrance_points[256];
    unnamed modifiers[64];
    unnamed no_creatures : 1;
} biome_core;

typedef struct room_t
{
    unnamed cleared : 1;
} room_t;

typedef struct creature_spawner
{
    real_2 spawn_location;
} creature_spawner;

typedef struct doorway
{
    unnamed rooms[12];
    int_2 pos;
    unnamed adjacent_doors[24];
    unnamed changed : 2;
} doorway;

typedef struct static_cell
{
    real_2 x;
    real_3 color;
    unnamed neighbors[24];
} static_cell;

typedef struct tunnel_tile
{
    int_2 pos;
} tunnel_tile;

typedef struct line_render_info
{
    real_3 x;
    real_2 d;
    real_4 color;
} line_render_info;

typedef struct map_template
{
} map_template;

typedef struct biome_node
{
    real_2 x;
    unnamed fill : 1;
    unnamed snap : 1;
    map_template templ;
    biome_edge* first_edge;
    unnamed* pre_generation_fn;
    unnamed* post_generation_fn;
    unnamed* template_generation_fn;
} biome_node;

typedef struct biome_edge
{
    biome_node* node;
    biome_edge* next;
    real_2 dir;
    unnamed virtual_edge : 1;
} biome_edge;

typedef struct spawn_creature_params
{
} spawn_creature_params;

typedef struct biome_entrance
{
    spawn_creature_params boss_params;
    unnamed not_boss : 1;
    unnamed direct : 1;
    unnamed optional : 1;
    unnamed room_exit : 1;
} biome_entrance;

typedef struct map_template
{
    bounding_box_2 region;
    int_2* points;
    real_2* flow;
} map_template;

typedef struct spawn_creature_params
{
    real_2 orientation;
    unnamed spawn_cells : 1;
    unnamed plant : 1;
    unnamed dont_load_plan : 1;
} spawn_creature_params;

typedef union id_t
{
} id_t;

typedef union id_t
{
    unnamed string[16];
} id_t;

typedef struct textbox
{
} textbox;

typedef struct textbox
{
} textbox;

typedef struct translation_map
{
} translation_map;

typedef struct translation_map_kash_t
{
} translation_map_kash_t;

typedef struct translation_map
{
    unnamed* keys;
    translation_list* values;
    unnamed operator[];
    MethodListType(index=11355, methods=[MethodListEntry(attributes=3, underlying=TypeRef(index=11351), vtable_offset=None), MethodListEntry(attributes=3, underlying=TypeRef(index=11354), vtable_offset=None)])
} translation_map;

typedef struct translation_map_kash_t
{
} translation_map_kash_t;

typedef struct sound_params
{
} sound_params;

typedef struct sound_params
{
} sound_params;

typedef struct serialized_data
{
} serialized_data;

typedef struct serialized_data
{
} serialized_data;

typedef struct material_t
{
} material_t;

typedef struct material_t
{
    unnamed spawn_with[16];
    unnamed attach_to_cells : 1;
    unnamed attach_to_walls : 1;
    unnamed poison_immune : 2;
    unnamed no_electric_growth : 1;
    unnamed penetrate_walls : 1;
    unnamed self_touching : 1;
    unnamed is_cancer : 1;
    unnamed is_directional : 1;
    unnamed show_adjacency : 1;
    unnamed show_direction : 1;
    unnamed show_neighbor_direction : 1;
    unnamed is_hard : 1;
    unnamed play_note : 1;
    unnamed no_recolor : 1;
    unnamed sync_health : 1;
    unnamed is_stem : 1;
    real_4 base_color;
    real_3 emission;
    real_2 uv;
    unnamed* physics_update_fn;
    unnamed* force_update_fn;
    unnamed* electric_update_fn;
    unnamed* connection_update_fn;
    unnamed* brain_fn;
    unnamed* destroyed_fn;
} material_t;

typedef struct bounding_box_3
{
} bounding_box_3;

typedef struct bounding_box_3
{
    int_3 l;
    int_3 u;
} bounding_box_3;

typedef struct cell_pickup
{
} cell_pickup;

typedef struct cell_pickup
{
    real_2 x;
    real_2 x_dot;
    unnamed selected : 1;
    unnamed is_combo : 1;
} cell_pickup;

typedef struct undo_state
{
} undo_state;

typedef struct edit_menu
{
} edit_menu;

typedef struct undo_state
{
    body_plan plan;
    int_2 last_drawn_point;
} undo_state;

typedef struct cell_item
{
} cell_item;

typedef struct slider_t
{
} slider_t;

typedef struct stashed_body_plan
{
} stashed_body_plan;

typedef struct saved_body_plan
{
} saved_body_plan;

typedef struct static_button
{
} static_button;

typedef struct draggable_button
{
} draggable_button;

typedef struct tooltip_t
{
} tooltip_t;

typedef struct edit_menu
{
    real_2* selection_points;
    int_2 last_drawn_point;
    real_2 body_center_pos;
    cell_item* cell_items;
    expandable_buffer cell_items_memory;
    unnamed cell_item_counts[8192];
    real_2 symmetry_visual_x;
    real_2 symmetry_visual_x_dot;
    slider_t size_slider;
    body_plan plan;
    plan_cell* dragged_cells;
    plan_cell* clipboard_cells;
    undo_state* undo_stack;
    stashed_body_plan* stashed;
    expandable_buffer stashed_memory;
    saved_body_plan* saved;
    expandable_buffer saved_memory;
    workshop_body_plan* workshop;
    expandable_buffer workshop_memory;
    static_button* panel_buttons;
    expandable_buffer panel_buttons_memory;
    textbox rename_box;
    real_2 rename_box_alignment;
    real_2 rename_box_pos;
    textbox savebox;
    textbox searchbox;
    static_button search_button;
    static_button search_cancel_button;
    draggable_button* color_buttons;
    real_4* colors;
    real_2 drag_start;
    unnamed tool_buttons[60];
    unnamed panel_tool_buttons[80];
    static_button mode_button;
    unnamed symmetry_mode_buttons[60];
    static_button icon_button;
    static_button left_button;
    static_button right_button;
    static_button close_button;
    bounding_box_2 visible_region;
    unnamed n_warnings[12];
    unnamed warning_index[12];
    unnamed warning_box_size[24];
    tooltip_t tooltip;
} edit_menu;

typedef struct cell_item
{
    draggable_button button;
    unnamed filtered : 1;
    unnamed activated : 1;
} cell_item;

typedef struct slider_t
{
} slider_t;

typedef struct stashed_body_plan
{
    body_plan plan;
    unnamed name[512];
    real_2 pos;
} stashed_body_plan;

typedef struct saved_body_plan
{
    unnamed is_folder : 1;
    unnamed expanded : 1;
    unnamed level : 30;
    unnamed name[512];
    real_2 pos;
} saved_body_plan;

typedef struct static_button
{
} static_button;

typedef struct draggable_button
{
    real_2 x;
    real_2 x_dot;
    real_2 x_brown;
    real_2 x_brown_dot;
    real_2 x_offset;
} draggable_button;

typedef struct tooltip_t
{
    real_2 box_size;
    real_2 pos;
    real_2 last_hovered_mutation_pos;
    unnamed is_combo : 1;
} tooltip_t;

typedef struct particle_t
{
} particle_t;

typedef struct particle_t
{
    real_2 x;
    real_2 x_dot;
    real_2 x_spawn;
    real_4 color;
    real_4 color_initial;
    real_4 color_final;
    real_4 emission;
    unnamed affects_gameplay : 1;
} particle_t;

typedef struct floodfill_piece
{
} floodfill_piece;

typedef struct floodfill_piece
{
    bounding_box_3 region;
} floodfill_piece;

typedef struct translation_info
{
} translation_info;

typedef struct translation_info
{
} translation_info;

typedef struct creature_t
{
} creature_t;

typedef struct creature_t
{
    unnamed mutations[1152];
    unnamed show_damage_numbers : 1;
    unnamed snap : 1;
    unnamed pickupable : 1;
    unnamed die_on_activation : 1;
    unnamed hidden : 1;
    body_plan plan;
    unnamed* ai_func;
    unnamed* spawn_func;
    unnamed* death_func;
    unnamed* boss_drop_func;
    unnamed* generation_func;
    unnamed lua_func[128];
    unnamed lua_spawn_func[128];
    unnamed lua_death_func[128];
} creature_t;

typedef struct button_out
{
} button_out;

typedef struct button_out
{
} button_out;

typedef struct mat_and_color
{
} mat_and_color;

typedef struct mat_and_color
{
    real_4 color;
} mat_and_color;

typedef struct color_bar_render_info
{
} color_bar_render_info;

typedef struct color_bar_render_info
{
} color_bar_render_info::<unnamed-type-colors>;

typedef struct color_bar_render_info
{
    color_bar_render_info colors;
    color_bar_render_info <unnamed-type-colors>;
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
} mutation_pickup;

typedef struct pickup_node
{
} pickup_node;

typedef struct mutation_pickup
{
    unnamed nodes[448];
    unnamed imbues[16];
    real_2 x;
    real_2 x_dot;
} mutation_pickup;

typedef struct pickup_node
{
    real_2 x_rel;
} pickup_node;

typedef struct explosion_t
{
} explosion_t;

typedef struct explosion_t
{
    real_2 x;
    real_3 hsv;
    real_3 rgb;
    unnamed recolor : 1;
} explosion_t;

typedef struct lightning_t
{
} lightning_t;

typedef struct lightning_t
{
    real_2 dir;
    unnamed points[128];
    unnamed n_points : 16;
    unnamed type : 1;
    real_4 color;
} lightning_t;

typedef struct raycast_result
{
} raycast_result;

typedef struct raycast_result
{
    wall_t wall;
} raycast_result;

typedef struct cell_pool
{
} cell_pool;

typedef struct cell_pool
{
    unnamed material_indices[8192];
    unnamed material_cum_chances[8192];
} cell_pool;

typedef struct biome_modifier
{
} biome_modifier;

typedef struct biome_modifier
{
    unnamed* generation_fn;
    unnamed* creature_fn;
} biome_modifier;

typedef struct biome_type
{
} biome_type;

typedef struct biome_type
{
    real_3 color;
    unnamed tracked : 1;
    unnamed explored : 1;
    unnamed no_modifiers : 1;
    cell_pool pool;
    unnamed creature_ids[1024];
    unnamed creature_xps[1024];
    unnamed creature_cum_chances[1024];
    unnamed creature_teams[1024];
    unnamed plant_ids[1024];
    unnamed plant_xps[1024];
    unnamed plant_teams[1024];
    unnamed plant_cum_chances[1024];
    unnamed modifiers[64];
} biome_type;

typedef struct laser_t
{
} laser_t;

typedef struct laser_t
{
    real_2 x;
    real_2 dir;
    unnamed sensor : 1;
} laser_t;

typedef struct radiant_render_info
{
} radiant_render_info;

typedef struct radiant_render_info
{
    real_3 x;
    real_4 color;
} radiant_render_info;

typedef struct color_swatch_render_info
{
} color_swatch_render_info;

typedef struct color_swatch_render_info
{
    real_3 x;
    real_4 color;
} color_swatch_render_info;

typedef struct link_attractor_t
{
} link_attractor_t;

typedef struct link_attractor_t
{
    real_2 x;
} link_attractor_t;

typedef struct magnetic_field_t
{
} magnetic_field_t;

typedef struct magnetic_field_t
{
    cell* c;
    real_3 moment;
} magnetic_field_t;

typedef struct particle_pusher_t
{
} particle_pusher_t;

typedef struct particle_pusher_t
{
    real_2 x;
    real_2 d;
} particle_pusher_t;

typedef struct big_lightning_vertex
{
} big_lightning_vertex;

typedef struct big_lightning_vertex
{
    real_2 x;
    real_4 color;
} big_lightning_vertex;

typedef struct window_t
{
} window_t;

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
} window_t;

typedef struct stbtt__csctx
{
} stbtt__csctx;

typedef struct stbtt__csctx
{
    stbtt_vertex* pvertices;
} stbtt__csctx;

typedef struct stbtt__hheap
{
} stbtt__hheap;

typedef struct stbtt__hheap_chunk
{
} stbtt__hheap_chunk;

typedef struct stbtt__hheap
{
    stbtt__hheap_chunk* head;
} stbtt__hheap;

typedef struct stbtt__hheap_chunk
{
    stbtt__hheap_chunk* next;
} stbtt__hheap_chunk;

typedef struct stbtt__active_edge
{
} stbtt__active_edge;

typedef struct stbtt__active_edge
{
    stbtt__active_edge* next;
} stbtt__active_edge;

typedef union float_conv
{
} float_conv;

typedef union float_conv
{
} float_conv;

typedef struct hex_uint
{
} hex_uint;

typedef struct hex_uint
{
} hex_uint;

typedef struct file_info
{
} file_info;

typedef struct file_info
{
    unnamed is_directory : 1;
} file_info;

typedef struct circular_buffer_t
{
} circular_buffer_t;

typedef struct circular_buffer_t
{
} circular_buffer_t;

typedef struct queued_sound
{
} queued_sound;

typedef struct queued_sound
{
    sound_t* sound;
    sound_params params;
    unnamed filtered[8];
} queued_sound;

typedef struct brown_sound
{
} brown_sound;

typedef struct brown_sound
{
} brown_sound;

typedef struct singing_channel
{
} singing_channel;

typedef struct singing_channel
{
} singing_channel;

typedef struct run_stats
{
} run_stats;

typedef struct run_stats
{
} run_stats;

typedef struct stbtt_kerningentry
{
} stbtt_kerningentry;

typedef struct stbtt_kerningentry
{
} stbtt_kerningentry;

typedef struct stbtt_pack_range
{
} stbtt_pack_range;

typedef struct stbtt_pack_range
{
    stbtt_packedchar* chardata_for_range;
} stbtt_pack_range;

typedef struct strand
{
} strand;

typedef struct strand
{
} strand;

typedef struct rectangle_space
{
} rectangle_space;

typedef struct rectangle_space
{
    int_2 max_size;
    bounding_box_2* free_regions;
} rectangle_space;

typedef struct texture_t
{
} texture_t;

typedef struct texture_t
{
    int_2 size;
} texture_t;

typedef struct text_params
{
} text_params;

typedef struct text_params
{
    real_2 orientation;
    real_4 shadow_color;
    real_4 outline_color;
    real_2 clip_size;
} text_params;

typedef struct bitmap_t
{
} bitmap_t;

typedef struct bitmap_t
{
    uint8_4* data;
    int_2 size;
} bitmap_t;

typedef struct ring_render_info
{
} ring_render_info;

typedef struct ring_render_info
{
    real_3 x;
    real_4 color;
} ring_render_info;

typedef struct arc_render_info
{
} arc_render_info;

typedef struct arc_render_info
{
    real_3 x;
    real_2 d0;
    real_2 d1;
    real_4 color;
} arc_render_info;

typedef struct rectangle_render_info
{
} rectangle_render_info;

typedef struct rectangle_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} rectangle_render_info;

typedef struct hexagon_render_info
{
} hexagon_render_info;

typedef struct hexagon_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} hexagon_render_info;

typedef struct icon_render_info
{
} icon_render_info;

typedef struct icon_render_info
{
    real_3 x;
    real_4 color;
    real_2 uv;
} icon_render_info;

typedef struct tool_render_info
{
} tool_render_info;

typedef struct tool_render_info
{
    real_3 x;
    real_4 color;
} tool_render_info;

typedef struct cell_render_info
{
} cell_render_info;

typedef struct cell_render_info
{
    real_3 x;
    real_2 body_x;
    real_2 r;
    real_4 color;
    real_2 uv;
} cell_render_info;

typedef struct healthbar_t
{
} healthbar_t;

typedef struct healthbar_t
{
} healthbar_t;

typedef struct lightning_render_info
{
} lightning_render_info;

typedef struct lightning_render_info
{
    real_3 x;
    real_2 r;
    real_4 color;
} lightning_render_info;

typedef struct laser_render_info
{
} laser_render_info;

typedef struct laser_render_info
{
    real_3 x;
    real_2 d;
    real_4 color;
} laser_render_info;

typedef struct explosion_render_info
{
} explosion_render_info;

typedef struct explosion_render_info
{
    real_3 x;
    real_4 color1;
    real_4 color2;
} explosion_render_info;

typedef struct light_render_info
{
} light_render_info;

typedef struct light_render_info
{
    real_3 x;
    real_4 color;
} light_render_info;

typedef struct id_t_index
{
} id_t_index;

typedef struct id_t_index
{
    id_t id;
} id_t_index;

typedef struct mutation_type
{
} mutation_type;

typedef struct mutation_type
{
    id_t id;
    real_2 uv;
    unnamed no_stacking : 1;
} mutation_type;

typedef struct rle_pair
{
} rle_pair;

typedef struct rle_pair
{
} rle_pair;

typedef struct boss_gate
{
} boss_gate;

typedef struct boss_gate
{
    int_2 pos;
} boss_gate;

typedef struct acid_particle_16
{
} acid_particle_16;

typedef struct acid_particle_16
{
    unnamed x[64];
    unnamed y[64];
    unnamed x_dot[64];
    unnamed y_dot[64];
    unnamed r[64];
    unnamed r_dot[64];
    unnamed time[64];
    unnamed color_initial[256];
    unnamed color_final[256];
} acid_particle_16;

typedef struct decompressed_map_data
{
} decompressed_map_data;

typedef struct decompressed_map_data
{
    bounding_box_2 region;
} decompressed_map_data;

typedef struct init_world_params
{
} init_world_params;

typedef struct init_world_params
{
} init_world_params;

typedef struct slider_params
{
} slider_params;

typedef struct slider_params
{
    real_2 pos;
} slider_params;

typedef struct text_info
{
} text_info;

typedef struct text_info
{
    real_2 x;
    real_4 color;
    real_2 alignment;
    font_info font;
    text_params params;
    real_4 background_color;
} text_info;

typedef struct sandbox_menu
{
} sandbox_menu;

typedef struct sandbox_menu
{
    unnamed tool_buttons[220];
    unnamed team_buttons[100];
    slider_t explosion_slider;
    slider_t terraform_slider;
    unnamed terraform_coarse : 1;
    unnamed terraform_flow : 1;
    unnamed terraform_biome : 1;
    unnamed terraform_grid : 1;
    unnamed terraform_biome_hide : 1;
    unnamed map_export_mode : 1;
    unnamed terraform_buttons[80];
    real_2 block_zone;
    real_2 block_center;
    tooltip_t tooltip;
} sandbox_menu;

typedef struct command_result_t
{
} command_result_t;

typedef struct command_result_t
{
} command_result_t;

typedef struct multithread_loop_info
{
} multithread_loop_info;

typedef struct multithread_loop_info
{
    user_input* input;
} multithread_loop_info;

typedef struct bone_contact
{
} bone_contact;

typedef struct bone_contact
{
    cell* c;
    cell* o;
    real_2 normal;
} bone_contact;

typedef struct digger_t
{
} digger_t;

typedef struct digger_t
{
    real_2 x;
} digger_t;

typedef struct portal_t
{
} portal_t;

typedef struct portal_t
{
    real_2 x;
    real_2 x_dot;
} portal_t;

typedef struct light_reciever_t
{
} light_reciever_t;

typedef struct light_reciever_t
{
    real_2 x;
    real_3 hsv;
} light_reciever_t;

typedef struct lightning_emitter
{
} lightning_emitter;

typedef struct lightning_emitter
{
    real_2 x;
    real_2 dir;
} lightning_emitter;

typedef struct player_command_t
{
} player_command_t;

typedef struct player_command_t
{
    real_2 movement;
    real_2 grab_target;
    unnamed abilities[1];
} player_command_t;

typedef struct biome_weights
{
} biome_weights;

typedef struct biome_weights
{
    int_3 biomes;
    real_3 weights;
} biome_weights;

typedef struct map_floodfill_piece
{
} map_floodfill_piece;

typedef struct map_floodfill_piece
{
    bounding_box_2 bounds;
} map_floodfill_piece;

typedef struct fiber_init_data
{
} fiber_init_data;

typedef struct fiber_init_data
{
    lane_group_t* group;
} fiber_init_data;

typedef struct saver_t
{
} saver_t;

typedef struct saver_t
{
    unnamed pending_save;
    ModifierType(index=5042, underlying=TypeRef(index=117), const=False, volatile=True, unaligned=False)
    unnamed pending_map_edits;
    ModifierType(index=5042, underlying=TypeRef(index=117), const=False, volatile=True, unaligned=False)
    unnamed temp_player_filename[256];
    unnamed temp_world_filename[256];
    unnamed final_player_filename[256];
    unnamed final_world_filename[256];
    unnamed temp_map_edits_filename[256];
    unnamed final_map_edits_filename[256];
    unnamed settings_filename[1024];
    unnamed run_history_filename[1024];
    unnamed recording_dir[1024];
    unnamed normal_save_dir[1024];
    unnamed sandbox_save_dir[1024];
    unnamed user_body_plans_dir[1024];
    unnamed temp_dir[1024];
    unnamed workshop_dir[1024];
    unnamed appdata_path[1024];
    unnamed userdata_path[1024];
} saver_t;

typedef struct settings_t
{
} settings_t;

typedef struct keybinds_t
{
} keybinds_t;

typedef struct settings_t
{
    keybinds_t keybinds;
    unnamed buttons[120];
} settings_t;

typedef struct keybinds_t
{
    unnamed tools[12];
} keybinds_t;

typedef struct game_sounds_t
{
} game_sounds_t;

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
} audio_context;

typedef struct audio_context
{
    IMMDevice* device;
    IAudioClient* audio_client;
    IAudioRenderClient* render_client;
    tWAVEFORMATEX* wfx;
    queued_sound* queued_sounds;
    unnamed next_queued_sound;
    ModifierType(index=5034, underlying=TypeRef(index=34), const=False, volatile=True, unaligned=False)
    unnamed last_queued_sound;
    ModifierType(index=5034, underlying=TypeRef(index=34), const=False, volatile=True, unaligned=False)
    queued_sound* playing_sounds;
    looping_sound* looping_sounds;
    brown_sound brown_noise;
    unnamed singing[1536];
} audio_context;

typedef struct particle_type_t
{
} particle_type_t;

typedef struct particle_type_t
{
} particle_type_t;

typedef struct world
{
} world;

typedef struct inspector_menu
{
} inspector_menu;

typedef struct final_boss_state
{
} final_boss_state;

typedef struct world
{
    unnamed confirm_newgame : 1;
    unnamed confirm_quit : 1;
    unnamed dead : 1;
    unnamed won : 1;
    unnamed show_body_preview : 1;
    unnamed show_trace : 1;
    unnamed frozen : 1;
    unnamed map_mode : 1;
    unnamed use_battle_music : 1;
    unnamed scroll_blocked : 1;
    unnamed lava_walls : 1;
    unnamed glowing_walls : 1;
    unnamed use_gamepad : 1;
    unnamed gamepad_cursor_mode : 1;
    unnamed left_cursor_mode : 1;
    unnamed hide_cursor : 1;
    unnamed ability_toggled0 : 1;
    unnamed ability_toggled1 : 1;
    unnamed ability_toggled2 : 1;
    unnamed seek_toggled : 2;
    unnamed control_mode : 1;
    unnamed portals_enabled : 2;
    unnamed block_mouse : 1;
    unnamed free_last_mutations : 1;
    real_2 camera_pos;
    real_2 screenshake;
    real_2 screenshake_dot;
    edit_menu em;
    sandbox_menu sm;
    inspector_menu im;
    mutation_item_list last_mutations;
    biome_core* current_race_core;
    real_2 spawn_x;
    unnamed portals[32];
    body_id_table bodies;
    bone_id_table bones;
    expandable_buffer body_auxiliary_data_memory;
    id_index* cell_index_table;
    expandable_buffer cell_index_table_memory;
    cell* cells;
    expandable_buffer cells_memory;
    boss_gate* boss_gates;
    lightning_emitter* lightning_emitters;
    map_t map;
    real_3* hashed_pos;
    real_2* grid_pos;
    boss_part_t* boss_parts;
    lightning_t* lightnings;
    expandable_buffer lightnings_memory;
    laser_t* lasers;
    expandable_buffer lasers_memory;
    explosion_t* explosions;
    expandable_buffer explosions_memory;
    explosion_render_info* explosion_visuals;
    expandable_buffer explosion_visuals_memory;
    digger_t* diggers;
    expandable_buffer diggers_memory;
    radiant_render_info* radiant_visuals;
    expandable_buffer radiant_visuals_memory;
    circle_render_info* stasis_visuals;
    expandable_buffer stasis_visuals_memory;
    color_swatch_render_info* paint_visuals;
    expandable_buffer paint_visuals_memory;
    particle_pusher_t* particle_pushers;
    expandable_buffer particle_pushers_memory;
    link_attractor_t* link_attractors;
    expandable_buffer link_attractors_memory;
    magnetic_field_t* magnetic_fields;
    expandable_buffer magnetic_fields_memory;
    light_reciever_t* light_recievers;
    unnamed* light_reciever_cells;
    mutation_pickup* mutation_pickups;
    expandable_buffer mutation_pickups_memory;
    cell_pickup* cell_pickups;
    expandable_buffer cell_pickups_memory;
    particle_t* particles;
    expandable_buffer particles_memory;
    acid_particle_16* acid_particles;
    expandable_buffer acid_particles_memory;
    biome_type* biome_types;
    expandable_buffer biome_types_memory;
    biome_modifier* biome_modifiers;
    expandable_buffer biome_modifiers_memory;
    tooltip_t tooltip;
    real_2 tooltip_x;
    real_2 tooltip_pickup_x;
    real_2 gamepad_cursor_x;
    real_2 end_text_x;
    unnamed start_trans;
    ModifierType(index=9004, underlying=TypeRef(index=64), const=False, volatile=True, unaligned=False)
    unnamed loading_screen : 1;
    unnamed done_loading : 1;
    unnamed starting_game : 1;
    unnamed starting_new_run : 1;
    unnamed starting_sandbox : 1;
    unnamed has_save : 1;
    unnamed has_sandbox : 1;
    unnamed starting_mode;
    ModifierType(index=5042, underlying=TypeRef(index=117), const=False, volatile=True, unaligned=False)
    unnamed start_animation_done;
    ModifierType(index=5042, underlying=TypeRef(index=117), const=False, volatile=True, unaligned=False)
    init_world_params sandbox_start_params;
    unnamed singing_volume[384];
    final_boss_state final_boss;
    run_stats run;
    unnamed message_queue[128];
    print_buffer_t game_print_buffer;
    lua_State* console_L;
    textbox console_box;
    command_result_t* console_history;
    translation_map translations;
    unnamed workshop_published[7200];
    render_context* rc;
    unnamed player_commands[10080];
} world;

typedef struct inspector_menu
{
    int_2 selected_cell_coord;
    unnamed show_cell_icons : 1;
    unnamed dragging : 1;
    unnamed graph_open : 1;
    unnamed graph_values[4800];
    real_2 center;
    real_2 drag_start;
    tooltip_t tooltip;
} inspector_menu;

typedef struct final_boss_state
{
    unnamed active : 1;
    unnamed ready : 1;
    real_2 x;
    real_2 stretch;
    real_2 offset;
    real_2 healthbar_pos;
} final_boss_state;

typedef struct fenv_t
{
} fenv_t;

typedef struct exp2f_data
{
    unnamed tab[256];
    unnamed poly[24];
    unnamed poly_scaled[24];
} exp2f_data;

typedef struct exp_data
{
    unnamed poly[32];
    unnamed exp2_poly[40];
    unnamed tab[4096];
} exp_data;

typedef struct fenv_t
{
} fenv_t;
