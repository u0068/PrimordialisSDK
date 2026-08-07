
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
do_pause_menu(window_t *param_1,render_context *param_2,render_context *param_3,user_input *param_4,
             recording_buffer *param_5,float param_6,float param_7,bool param_8)

{
  real_4 *prVar1;
  real_4 *prVar2;
  real_4 *prVar3;
  font_info *pfVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  real_2_u_0 rVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  real_4_u_0 rVar12;
  bool bVar13;
  queued_sound *pqVar14;
  queued_sound *pqVar15;
  char **ppcVar16;
  translation_list *ptVar17;
  byte bVar18;
  button_out bVar19;
  button_out bVar20;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  DWORD DVar21;
  DWORD DVar22;
  int extraout_EAX_03;
  int extraout_EAX_04;
  int extraout_EAX_05;
  int extraout_EAX_06;
  int extraout_EAX_07;
  int extraout_EAX_08;
  int extraout_EAX_09;
  int extraout_EAX_10;
  int extraout_EAX_11;
  int extraout_EAX_12;
  int extraout_EAX_13;
  int extraout_EAX_14;
  int extraout_EAX_15;
  int extraout_EAX_16;
  int extraout_EAX_17;
  int extraout_EAX_18;
  int extraout_EAX_19;
  int extraout_EAX_20;
  int extraout_EAX_21;
  int extraout_EAX_22;
  int extraout_EAX_23;
  int extraout_EAX_24;
  int extraout_EAX_25;
  int extraout_EAX_26;
  int extraout_EAX_27;
  int extraout_EAX_28;
  int extraout_EAX_29;
  int extraout_EAX_30;
  int extraout_EAX_31;
  int extraout_EAX_32;
  int extraout_EAX_33;
  int extraout_EAX_34;
  int extraout_EAX_35;
  int extraout_EAX_36;
  int extraout_EAX_37;
  int extraout_EAX_38;
  int extraout_EAX_39;
  int extraout_EAX_40;
  int extraout_EAX_41;
  int extraout_EAX_42;
  int extraout_EAX_43;
  int extraout_EAX_44;
  int extraout_EAX_45;
  int extraout_EAX_46;
  int extraout_EAX_47;
  int extraout_EAX_48;
  int extraout_EAX_49;
  int extraout_EAX_50;
  int extraout_EAX_51;
  int extraout_EAX_52;
  int extraout_EAX_53;
  int extraout_EAX_54;
  int extraout_EAX_55;
  int extraout_EAX_56;
  int extraout_EAX_57;
  int extraout_EAX_58;
  int extraout_EAX_59;
  int extraout_EAX_60;
  int extraout_EAX_61;
  int extraout_EAX_62;
  int extraout_EAX_63;
  int extraout_EAX_64;
  int extraout_EAX_65;
  int extraout_EAX_66;
  int extraout_EAX_67;
  int extraout_EAX_68;
  int extraout_EAX_69;
  int extraout_EAX_70;
  int extraout_EAX_71;
  int extraout_EAX_72;
  int extraout_EAX_73;
  int extraout_EAX_74;
  int extraout_EAX_75;
  int extraout_EAX_76;
  int extraout_EAX_77;
  int extraout_EAX_78;
  int extraout_EAX_79;
  int extraout_EAX_80;
  int extraout_EAX_81;
  int extraout_EAX_82;
  int extraout_EAX_83;
  int extraout_EAX_84;
  int extraout_EAX_85;
  int extraout_EAX_86;
  int extraout_EAX_87;
  int extraout_EAX_88;
  int extraout_EAX_89;
  int extraout_EAX_90;
  int extraout_EAX_91;
  int extraout_EAX_92;
  int extraout_EAX_93;
  int extraout_EAX_94;
  int extraout_EAX_95;
  int extraout_EAX_96;
  int extraout_EAX_97;
  int extraout_EAX_98;
  int extraout_EAX_99;
  int extraout_EAX_x00100;
  int extraout_EAX_x00101;
  int extraout_EAX_x00102;
  int extraout_EAX_x00103;
  int extraout_EAX_x00104;
  int extraout_EAX_x00105;
  int extraout_EAX_x00106;
  int extraout_EAX_x00107;
  int extraout_EAX_x00108;
  int extraout_EAX_x00109;
  real_2 rVar23;
  undefined4 extraout_var;
  real_4 *prVar24;
  HMONITOR pHVar25;
  undefined8 *puVar26;
  BOOL BVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  user_input *puVar31;
  char *pcVar32;
  real_2 *prVar33;
  real_2_u_0 rVar34;
  byte bVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  char *pcVar41;
  float fVar42;
  real_3_u_0 *prVar43;
  real_4_u_0 *prVar44;
  float fVar45;
  float fVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  char *pcVar50;
  char *pcVar51;
  bool bVar52;
  bool bVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  real_4_u_0 rVar57;
  undefined1 auVar58 [16];
  undefined8 uVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  float fVar76;
  undefined1 auVar77 [32];
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar81 [16];
  undefined1 auVar82 [64];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  float fVar88;
  float fVar90;
  undefined1 auVar91 [64];
  undefined1 auVar92 [16];
  undefined1 auVar93 [64];
  undefined1 auVar94 [64];
  undefined1 auVar95 [64];
  undefined1 auVar96 [64];
  int *piVar97;
  float fStack_39e4;
  float fStack_39e0;
  float fStack_39dc;
  real_2_u_0 local_39d8;
  undefined8 uStack_39d0;
  window_t *local_39c8;
  uint local_39bc;
  real_2_u_0 local_39b8;
  undefined8 uStack_39b0;
  real_2_u_0 local_39a8;
  undefined8 uStack_39a0;
  render_context_u_296 *local_3998;
  undefined8 local_3990;
  undefined4 local_3988;
  real_3_u_0 rStack_3984;
  real_3_u_0 rStack_3978;
  real_3_u_0 rStack_396c;
  real_3_u_0 rStack_3960;
  real_3_u_0 rStack_3954;
  real_3_u_0 rStack_3948;
  real_3_u_0 rStack_393c;
  real_3_u_0 rStack_3930;
  real_3_u_0 rStack_3924;
  real_3_u_0 rStack_3918;
  real_3_u_0 rStack_390c;
  real_3_u_0 rStack_3900;
  real_3_u_0 rStack_38f4;
  real_3_u_0 rStack_38e8;
  real_3_u_0 rStack_38dc;
  real_3_u_0 rStack_38d0;
  real_3_u_0 rStack_38c4;
  real_3_u_0 rStack_38b8;
  real_3_u_0 rStack_38ac;
  real_3_u_0 rStack_38a0;
  real_3_u_0 rStack_3894;
  real_3_u_0 rStack_3888;
  real_3_u_0 rStack_387c;
  real_3_u_0 rStack_3870;
  real_3_u_0 rStack_3864;
  real_3_u_0 rStack_3858;
  real_3_u_0 rStack_384c;
  real_3_u_0 rStack_3840;
  real_3_u_0 rStack_3834;
  real_3_u_0 rStack_3828;
  real_3_u_0 rStack_381c;
  real_3_u_0 rStack_3810;
  real_3_u_0 rStack_3804;
  real_3_u_0 rStack_37f8;
  real_3_u_0 rStack_37ec;
  real_3_u_0 rStack_37e0;
  real_3_u_0 rStack_37d4;
  real_3_u_0 rStack_37c8;
  real_3_u_0 rStack_37bc;
  real_3_u_0 rStack_37b0;
  real_3_u_0 rStack_37a4;
  real_3_u_0 rStack_3798;
  real_3_u_0 rStack_378c;
  real_3_u_0 rStack_3780;
  real_3_u_0 rStack_3774;
  real_3_u_0 rStack_3768;
  real_3_u_0 rStack_375c;
  real_3_u_0 rStack_3750;
  real_3_u_0 rStack_3744;
  real_3_u_0 rStack_3738;
  real_3_u_0 rStack_372c;
  real_3_u_0 rStack_3720;
  real_3_u_0 rStack_3714;
  real_3_u_0 rStack_3708;
  real_3_u_0 rStack_36fc;
  real_3_u_0 rStack_36f0;
  real_3_u_0 rStack_36e4;
  real_3_u_0 rStack_36d8;
  real_3_u_0 rStack_36cc;
  real_3_u_0 rStack_36c0;
  real_3_u_0 rStack_36b4;
  real_3_u_0 rStack_36a8;
  real_3_u_0 rStack_369c;
  real_3_u_0 rStack_3690;
  real_3_u_0 rStack_3684;
  real_3_u_0 rStack_3678;
  real_3_u_0 rStack_366c;
  real_3_u_0 rStack_3660;
  real_3_u_0 rStack_3654;
  real_3_u_0 rStack_3648;
  real_3_u_0 local_363c;
  real_3_u_0 local_3630;
  real_3_u_0 local_3624;
  real_3_u_0 local_3618;
  real_3_u_0 local_360c;
  real_3_u_0 local_3600;
  real_3_u_0 local_35f4;
  real_3_u_0 local_35e8;
  real_3_u_0 local_35dc;
  real_3_u_0 local_35d0;
  real_3_u_0 local_35c4;
  real_3_u_0 local_35b8;
  real_4_u_0 local_35a8;
  real_3_u_0 local_3598;
  real_3_u_0 rStack_3588;
  real_4_u_0 local_3578;
  real_4_u_0 local_3568;
  real_3_u_0 local_3558;
  real_3_u_0 local_3548;
  real_3_u_0 local_3538;
  real_3_u_0 local_3528;
  real_4_u_0 local_3518;
  real_3_u_0 local_3504;
  real_3_u_0 rStack_34f8;
  real_3_u_0 rStack_34ec;
  real_3_u_0 rStack_34e0;
  real_3_u_0 local_34d4;
  real_4_u_0 local_34c8;
  undefined1 local_34b8 [36];
  real_4_u_0 local_3494;
  real_2_u_0 local_3484;
  float local_347c;
  float local_3478;
  undefined1 local_3470 [36];
  real_4_u_0 local_344c;
  real_2_u_0 local_343c;
  float local_3434;
  float local_3430;
  real_4_u_0 local_3428;
  real_4_u_0 local_3418;
  real_4_u_0 local_3408;
  real_4_u_0 local_33f8;
  real_4_u_0 local_33e8;
  real_4_u_0 rStack_33d8;
  real_4_u_0 rStack_33c8;
  real_4_u_0 rStack_33b8;
  real_4_u_0 rStack_33a8;
  real_4_u_0 rStack_3398;
  real_4_u_0 rStack_3388;
  real_4_u_0 rStack_3378;
  real_4_u_0 rStack_3368;
  real_4_u_0 rStack_3358;
  real_4_u_0 rStack_3348;
  real_4_u_0 rStack_3338;
  real_4_u_0 rStack_3328;
  real_4_u_0 rStack_3318;
  real_4_u_0 rStack_3308;
  real_4_u_0 rStack_32f8;
  real_4_u_0 rStack_32e8;
  real_4_u_0 rStack_32d8;
  real_4_u_0 rStack_32c8;
  real_4_u_0 rStack_32b8;
  real_4_u_0 rStack_32a8;
  real_4_u_0 rStack_3298;
  real_4_u_0 rStack_3288;
  real_4_u_0 rStack_3278;
  real_4_u_0 rStack_3268;
  real_4_u_0 rStack_3258;
  real_4_u_0 rStack_3248;
  real_4_u_0 rStack_3238;
  real_4_u_0 rStack_3228;
  real_4_u_0 rStack_3218;
  real_4_u_0 rStack_3208;
  real_4_u_0 rStack_31f8;
  real_4_u_0 rStack_31e8;
  real_4_u_0 rStack_31d8;
  real_4_u_0 rStack_31c8;
  real_4_u_0 rStack_31b8;
  real_4_u_0 rStack_31a8;
  real_4_u_0 rStack_3198;
  real_4_u_0 rStack_3188;
  real_4_u_0 rStack_3178;
  real_4_u_0 rStack_3168;
  real_4_u_0 rStack_3158;
  real_4_u_0 rStack_3148;
  real_4_u_0 rStack_3138;
  real_4_u_0 local_3128;
  real_4_u_0 local_3118;
  real_2_u_0 local_3108;
  undefined8 uStack_3100;
  real_2_u_0 local_30f8;
  undefined8 uStack_30f0;
  real_2_u_0 local_30e8;
  undefined8 uStack_30e0;
  real_4_u_0 local_30d8;
  real_4_u_0 local_30c8;
  real_4_u_0 local_30b8;
  undefined1 local_30a8 [32];
  undefined1 local_3088 [32];
  undefined1 local_3068 [32];
  undefined1 auStack_3048 [32];
  undefined1 auStack_3028 [32];
  undefined1 auStack_3008 [32];
  undefined1 auStack_2fe8 [32];
  undefined1 auStack_2fc8 [32];
  undefined1 local_2fa8 [64];
  float local_2f68;
  font_info local_2ba8;
  font_info local_2ae8;
  undefined1 local_2a28 [104];
  uchar *puStack_29c0;
  undefined8 uStack_29b8;
  uchar *puStack_29b0;
  undefined8 local_29a8;
  uchar *puStack_29a0;
  undefined8 uStack_2998;
  uchar *puStack_2990;
  undefined8 uStack_2988;
  undefined8 uStack_2980;
  stbtt_packedchar *psStack_2978;
  undefined1 local_2968 [136];
  uchar *puStack_28e0;
  undefined8 uStack_28d8;
  uchar *puStack_28d0;
  undefined8 uStack_28c8;
  undefined8 uStack_28c0;
  stbtt_packedchar *psStack_28b8;
  undefined1 auStack_28a8 [136];
  uchar *puStack_2820;
  int iStack_2818;
  int iStack_2814;
  uchar *puStack_2810;
  int iStack_2808;
  int iStack_2804;
  undefined8 uStack_2800;
  stbtt_packedchar *psStack_27f8;
  font_info fStack_27e8;
  font_info fStack_2728;
  font_info fStack_2668;
  font_info fStack_25a8;
  font_info fStack_24e8;
  font_info fStack_2428;
  font_info fStack_2368;
  font_info fStack_22a8;
  font_info fStack_21e8;
  font_info fStack_2128;
  font_info fStack_2068;
  font_info fStack_1fa8;
  font_info fStack_1ee8;
  font_info fStack_1e28;
  font_info fStack_1d68;
  font_info fStack_1ca8;
  font_info fStack_1be8;
  font_info fStack_1b28;
  font_info fStack_1a68;
  font_info fStack_19a8;
  font_info fStack_18e8;
  font_info fStack_1828;
  undefined1 auStack_1768 [136];
  uchar *puStack_16e0;
  undefined8 uStack_16d8;
  uchar *puStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  stbtt_packedchar *psStack_16b8;
  font_info fStack_16a8;
  font_info fStack_15e8;
  font_info fStack_1528;
  font_info fStack_1468;
  font_info fStack_13a8;
  font_info fStack_12e8;
  font_info fStack_1228;
  undefined1 auStack_1168 [136];
  uchar *puStack_10e0;
  undefined8 uStack_10d8;
  uchar *puStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  stbtt_packedchar *psStack_10b8;
  font_info fStack_10a8;
  undefined1 auStack_fe8 [136];
  uchar *puStack_f60;
  undefined8 uStack_f58;
  uchar *puStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  stbtt_packedchar *psStack_f38;
  font_info fStack_f28;
  font_info fStack_e68;
  font_info fStack_da8;
  font_info fStack_ce8;
  font_info fStack_c28;
  font_info fStack_b68;
  font_info fStack_aa8;
  undefined1 auStack_9e8 [96];
  undefined1 auStack_988 [32];
  undefined8 uStack_968;
  uchar *puStack_960;
  undefined8 uStack_958;
  uchar *puStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  stbtt_packedchar *psStack_938;
  undefined1 local_928 [136];
  uchar *puStack_8a0;
  undefined8 uStack_898;
  uchar *local_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  stbtt_packedchar *psStack_878;
  undefined1 local_868 [136];
  uchar *puStack_7e0;
  undefined8 uStack_7d8;
  uchar *local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  stbtt_packedchar *psStack_7b8;
  undefined1 local_7a8 [136];
  uchar *puStack_720;
  undefined8 uStack_718;
  uchar *local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  stbtt_packedchar *psStack_6f8;
  char acStack_6e8 [128];
  undefined1 local_668 [64];
  float local_628;
  char acStack_268 [128];
  char acStack_1e8 [416];
  undefined8 uStack_48;
  undefined4 uVar35;
  undefined1 auVar89 [64];
  
  uStack_48 = 0x140059ee6;
  n_gamepad_anchors = 0;
  auVar95 = ZEXT464((uint)param_6);
  fVar88 = (float)(param_3->resolution).field0_0x0._s_0.x /
           (float)(param_3->resolution).field0_0x0._s_0.y;
  auVar89 = ZEXT1664(CONCAT124(in_ZMM5._4_12_,fVar88));
  local_39c8 = param_1;
  if (w.game_mode == 0) {
    local_3518.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_3518._s_0.z = 0.0;
    local_3518._s_0.w = background_alpha;
    local_3528.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_3528._s_0.z = 0.0;
    draw_rectangle(param_3,(real_3 *)&local_3528._s_0,
                   (real_2)((ulonglong)(uint)(fVar88 + 0.1) | 0x3f8ccccd00000000),
                   (real_4 *)&local_3518._s_0);
  }
  else {
    fVar88 = time * 0.1;
    sinf();
    if (DAT_1401fa094 == '\0') {
      local_34c8._s_0.x = fVar88 * 0.05 + 0.25;
      local_34c8._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_34c8._s_0.w = 1.0;
      draw_menu_background(param_3,time,w.start_trans,background_alpha,(real_4 *)&local_34c8._s_0);
    }
  }
  time = auVar95._0_4_ + time;
  DAT_1401fa094 = '\0';
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc
               ) < DAT_1401fa0a0) && (_Init_thread_header(&DAT_1401fa0a0), DAT_1401fa0a0 == -1)) {
    DAT_1401fa098 = settings.window_x;
    DAT_1401fa09c = settings.window_y;
    _Init_thread_footer(&DAT_1401fa0a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc
               ) < DAT_1401fa0ac) && (_Init_thread_header(&DAT_1401fa0ac), DAT_1401fa0ac == -1)) {
    DAT_1401fa0a4 = settings.resolution_x;
    DAT_1401fa0a8 = settings.resolution_y;
    _Init_thread_footer(&DAT_1401fa0ac);
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  if (0.0 < confirmation_timer) {
    uVar29 = 0x67844063 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      uVar47 = (ulonglong)(int)uVar48;
      if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX == 0)) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    snprintf(local_2fa8,0x100,pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    uVar29 = 0x67844063 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      uVar47 = (ulonglong)(int)uVar48;
      if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_00 == 0)) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    snprintf(local_668,0x100,pcVar51);
    local_30a8 = ZEXT1232(ZEXT812(0));
    auVar63._28_4_ = 0;
    auVar63._0_28_ = local_3068._4_28_;
    local_3068 = auVar63 << 0x20;
    auVar89 = ZEXT1664(auVar89._0_16_);
    auVar95 = ZEXT1664(auVar95._0_16_);
    local_3088 = local_30a8;
    rVar23 = get_text_size(local_668,&(param_3->field29_0x128)._s_0.default_font,
                           (text_params *)local_30a8);
    fVar88 = rVar23.field0_0x0._0_4_;
    local_30b8._s_0.x = 1.0;
    local_30b8._s_0.y = 1.0;
    local_30b8._s_0.z = 1.0;
    local_30b8._s_0.w = 1.0;
    local_30c8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3a83126f3a83126f;
    local_30c8._8_8_ = 0x3f7333333a83126f;
    auVar56 = vmaxss_avx(SUB6416(ZEXT464(0x3e8a3d71),0),ZEXT416((uint)(fVar88 * 0.5 + 0.05)));
    local_3538.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f0ccccd00000000;
    local_3538._s_0.z = 0.0;
    draw_rounded_rectangle_outlined
              (param_3,(real_3 *)&local_3538._s_0,
               (real_2)(CONCAT44(rVar23.field0_0x0._4_4_,auVar56._0_4_) | 0x3e19999a00000000),0.05,
               0.01,(real_4 *)&local_30c8._s_0,(real_4 *)&local_30b8._s_0);
    uStack_708._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_708._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_700 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_6f8 = (param_3->field29_0x128).font_infos[1].char_data;
    local_7a8._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    local_7a8._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_720 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_718._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_718._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    local_710 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    local_7a8._0_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0xb8);
    local_7a8._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    local_7a8._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    local_7a8._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    local_7a8._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    local_7a8._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    local_7a8._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    local_7a8._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    local_7a8._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    local_7a8._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    local_7a8._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    local_7a8._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    local_7a8._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    local_7a8._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    local_7a8._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    local_7a8._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    local_7a8._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    local_7a8._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    local_7a8._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    local_7a8._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    local_30d8.xy.field0_0x0 = (real_2)(param_3->foreground_color).field0_0x0.xy.field0_0x0;
    local_30d8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT1664(auVar89._0_16_);
    auVar95 = ZEXT1664(auVar95._0_16_);
    draw_text(local_2fa8,fVar88 * -0.5,0.6,(real_4 *)&local_30d8._s_0,(real_2)0xbf800000,
              (font_info *)local_7a8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    uVar29 = 0x7aed8fdb % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      uVar47 = (ulonglong)(int)uVar48;
      if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_01 == 0)) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    local_3548.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f000000bdf5c28f;
    local_3548._s_0.z = 0.0;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_3548._s_0,(real_2)0x3d23d70a3dcccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) == 0) {
      confirmation_timer = confirmation_timer - auVar95._0_4_;
      if (0.0 <= confirmation_timer) goto LAB_14005a547;
      bVar52 = true;
    }
    else {
      DAT_1401fa098 = settings.window_x;
      DAT_1401fa09c = settings.window_y;
      DAT_1401fa0a4 = settings.resolution_x;
      DAT_1401fa0a8 = settings.resolution_y;
      confirmation_timer = 0.0;
LAB_14005a547:
      bVar52 = false;
    }
    uVar37 = 0xfc160d8f % w.translations.max_entries;
    uVar38 = uVar37;
    do {
      lVar40 = (longlong)(int)uVar38;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_02 == 0)) goto LAB_14005a5a3;
      uVar38 = uVar38 + 1;
      if (uVar38 == uVar39) {
        uVar38 = 0;
      }
    } while (uVar38 != uVar37);
    lVar40 = (longlong)(int)uVar37;
LAB_14005a5a3:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    local_3558.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f0000003df5c28f;
    local_3558._s_0.z = 0.0;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_3558._s_0,(real_2)0x3d23d70a3dcccccd,
                            pcVar51);
    if (bVar52 || ((ushort)bVar19 & 1) != 0) {
      settings.window_x = DAT_1401fa098;
      settings.window_y = DAT_1401fa09c;
      if (settings.fullscreen == 0) {
        auVar56 = vpunpckldq_avx(ZEXT416(DAT_1401fa098),ZEXT416(DAT_1401fa09c));
        auVar56 = vpslldq_avx(auVar56,8);
        local_30a8._0_16_ = auVar56;
        DVar21 = GetWindowLongA((HWND)main_hwnd,-0x10);
        DVar22 = GetWindowLongA((HWND)main_hwnd,-0x14);
        AdjustWindowRectEx((LPRECT)local_30a8,DVar21,0,DVar22);
        SetWindowPos((HWND)main_hwnd,(HWND)0x0,0,0,local_30a8._8_4_ - local_30a8._0_4_,
                     local_30a8._12_4_ - local_30a8._4_4_,0x226);
      }
      if ((settings.resolution_x != DAT_1401fa0a4) || (settings.resolution_y != DAT_1401fa0a8)) {
        settings.resolution_x = DAT_1401fa0a4;
        settings.resolution_y = DAT_1401fa0a8;
        reinit_gl_context(local_39c8);
      }
      confirmation_timer = 0.0;
    }
  }
  next_gui_element = 1;
  param_4->hovered_ui_element = 0;
  if (((DAT_1401fa0b8 == '\x01') && (param_4->click_blocked == false)) &&
     ((param_4->pressed_buttons[0] & 2) != 0)) {
    DAT_1401fa0b8 = '\0';
    param_4->click_blocked = true;
  }
  uVar39 = w.dead;
  bVar52 = w.game_mode == 2;
  if ((param_8) && (w.loading_screen == 0)) {
    sprintf(local_2fa8,"%s/world.run");
    DVar21 = GetFileAttributesA(local_2fa8);
    w._16064_4_ = (w._16064_4_ & 0xffffffbf) + (DVar21 & 0x10) * 4 ^ 0x40;
    if ((w._16064_4_ & 0x40) != 0) {
      sandbox_save_version = get_saved_world_version(2);
    }
    sprintf(local_668,"%s/world.run");
    DVar21 = GetFileAttributesA(local_668);
    w._16064_4_ = (w._16064_4_ & 0xffffffdf) + (DVar21 & 0x10) * 2 ^ 0x20;
    if ((w._16064_4_ & 0x20) != 0) {
      save_version = get_saved_world_version(1);
    }
  }
  if (w.starting_game == 0) {
    menu_alpha = 1.0;
    background_alpha = 0.0;
    if (w.game_mode != 0) {
      background_alpha = 0.8;
    }
    w.start_trans = param_7;
  }
  else {
    param_4->click_blocked = true;
    fVar88 = auVar95._0_4_ * -12.0;
    expf();
    fVar55 = 1.0;
    menu_alpha = (1.0 - fVar88) * 0.0 + fVar88 * menu_alpha;
    fVar88 = auVar95._0_4_ * -9.0;
    expf();
    background_alpha = (fVar55 - fVar88) + fVar88 * background_alpha;
    if (0.999 < background_alpha) {
      background_alpha = 1.0;
    }
  }
  (*glBindFramebuffer)(0x8d40,param_3->frame_buffer);
  glViewport(0,0,(param_3->resolution).field0_0x0._s_0.x,(param_3->resolution).field0_0x0._s_0.y);
  (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_3->field14_0xc8)._s_0.color_texture,0);
  local_2fa8._0_4_ = 5.05364e-41;
  (*glDrawBuffers)(1,(uint *)local_2fa8);
  fVar88 = menu_alpha;
  prVar1 = &param_3->background_color;
  local_30e8 = (param_3->background_color).field0_0x0.xy.field0_0x0;
  uStack_30e0 = *(undefined8 *)
                 ((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4);
  local_30f8 = (param_3->foreground_color).field0_0x0.xy.field0_0x0;
  uStack_30f0 = *(undefined8 *)
                 ((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
  local_3108 = (param_3->highlight_color).field0_0x0.xy.field0_0x0;
  uStack_3100 = *(undefined8 *)
                 ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
  (param_3->background_color).field0_0x0._s_0.w =
       menu_alpha * (param_3->background_color).field0_0x0._s_0.w;
  (param_3->foreground_color).field0_0x0._s_0.w =
       fVar88 * (param_3->foreground_color).field0_0x0._s_0.w;
  (param_3->highlight_color).field0_0x0._s_0.w =
       fVar88 * (param_3->highlight_color).field0_0x0._s_0.w;
  bVar53 = w.game_mode == 0;
  local_39a8 = (param_3->background_color).field0_0x0.xy.field0_0x0;
  uStack_39a0 = *(undefined8 *)
                 ((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4);
  local_39d8 = (param_3->foreground_color).field0_0x0.xy.field0_0x0;
  uStack_39d0 = *(undefined8 *)
                 ((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
  local_39b8 = (param_3->highlight_color).field0_0x0.xy.field0_0x0;
  uStack_39b0 = *(undefined8 *)
                 ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc
               ) < DAT_1401fa0cc) && (_Init_thread_header(&DAT_1401fa0cc), DAT_1401fa0cc == -1)) {
    DAT_1401fa0c4 = 1.0;
    DAT_1401fa0c8 = 0.15;
    _Init_thread_footer(&DAT_1401fa0cc);
  }
  bVar52 = uVar39 == 0 || bVar52;
  prVar2 = &param_3->foreground_color;
  prVar3 = &param_3->highlight_color;
  auVar87 = ZEXT464(*(uint *)(&__real_3ee666663e99999a + (ulonglong)bVar53 * 4));
  auVar56 = vminss_avx(ZEXT416(*(uint *)(&__real_3f8000003f000000 +
                                        (ulonglong)(settings_tab == 0) * 4)),
                       ZEXT416((uint)((auVar89._0_4_ + -0.05) - max_gui_x)));
  auVar82 = ZEXT1664(auVar56);
  fVar88 = auVar95._0_4_ * -12.0;
  expf();
  DAT_1401fa0c4 = auVar82._0_4_ * (1.0 - fVar88) + fVar88 * DAT_1401fa0c4;
  auVar93 = ZEXT464((uint)DAT_1401fa0c8);
  auVar82 = ZEXT464((uint)(DAT_1401fa0c4 + -1.0));
  (prVar1->field0_0x0).xy.field0_0x0 = (real_2_u_0)0x0;
  *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) = 0;
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  uVar29 = (ulonglong)w.translations.max_entries;
  uVar48 = 0xf3ec82d0U % uVar29;
  do {
    auVar70 = auVar95._0_16_;
    auVar81 = auVar93._0_16_;
    auVar65 = auVar89._0_16_;
    auVar60 = auVar87._0_16_;
    auVar56 = auVar82._0_16_;
    lVar40 = (longlong)(int)uVar48;
    if (ppcVar16[lVar40] == (char *)0x0) goto LAB_14005ab58;
    strcmp();
    auVar70 = auVar95._0_16_;
    auVar81 = auVar93._0_16_;
    auVar65 = auVar89._0_16_;
    auVar60 = auVar87._0_16_;
    auVar56 = auVar82._0_16_;
    if (extraout_EAX_03 == 0) goto LAB_14005ab58;
    uVar37 = (int)uVar48 + 1;
    uVar48 = (ulonglong)uVar37;
    if (uVar37 == uVar39) {
      uVar48 = 0;
    }
    iVar28 = (int)(0xf3ec82d0U % uVar29);
  } while ((int)uVar48 != iVar28);
  lVar40 = (longlong)iVar28;
LAB_14005ab58:
  if (w.translations.values[lVar40].text == (char **)0x0) {
    pcVar51 = unknown_string;
  }
  else {
    pcVar32 = w.translations.values[lVar40].text[w.language_index];
    pcVar51 = unknown_string;
    if (pcVar32 != (char *)0x0) {
      pcVar51 = pcVar32;
    }
  }
  pfVar4 = &(param_3->field29_0x128)._s_0.default_font;
  local_2fa8._0_4_ = 0.0;
  local_2fa8._4_4_ = 0.0;
  local_2fa8._40_24_ = ZEXT424(0);
  local_2fa8._8_4_ = 0.0;
  local_2fa8._12_4_ = 0.0;
  local_2fa8._16_4_ = 0.0;
  local_2fa8._20_4_ = 0.0;
  local_2fa8._24_8_ = (real_2_u_0)0x0;
  local_2f68 = 0.0;
  auVar89 = ZEXT1664(auVar56);
  auVar95 = ZEXT1664(auVar60);
  auVar82 = ZEXT1664(auVar65);
  auVar87 = ZEXT1664(auVar81);
  auVar91 = ZEXT1664(auVar70);
  local_2fa8._32_4_ = local_2fa8._0_4_;
  local_2fa8._36_4_ = local_2fa8._4_4_;
  rVar23 = get_text_size(pcVar51,pfVar4,(text_params *)local_2fa8);
  auVar93 = ZEXT464((uint)*(float *)(&__real_3e99999a3f0ccccd + (ulonglong)(settings_tab == 0) * 4))
  ;
  auVar56 = vmaxss_avx(SUB6416(ZEXT464(0x3e8a3d71),0),
                       ZEXT416((uint)(rVar23.field0_0x0._0_4_ * 0.5 + 0.05)));
  auVar94 = ZEXT1664(auVar56);
  uVar39 = w.confirm_newgame;
  if (uVar39 != 0) {
    fVar54 = auVar56._0_4_ + -0.06;
    fVar88 = (param_4->mouse).field0_0x0._s_0.x;
    fVar55 = (param_4->mouse).field0_0x0._s_0.y;
    auVar65._8_4_ = 0x7fffffff;
    auVar65._0_8_ = 0x7fffffff7fffffff;
    auVar65._12_4_ = 0x7fffffff;
    auVar56 = vandps_avx(ZEXT416((uint)fVar88),auVar65);
    auVar60 = vandps_avx(ZEXT416((uint)(fVar55 - *(float *)(&__real_3e99999a3f0ccccd +
                                                           (ulonglong)(settings_tab == 0) * 4))),
                         auVar65);
    fVar76 = auVar56._0_4_;
    fVar78 = auVar60._0_4_;
    if ((fVar54 <= fVar76) || (0.09 <= fVar78)) {
      auVar81._0_4_ = -fVar54;
      auVar81._4_4_ = 0x80000000;
      auVar81._8_4_ = 0x80000000;
      auVar81._12_4_ = 0x80000000;
      auVar56 = vminss_avx(ZEXT416((uint)fVar54),auVar56);
      auVar56 = vmaxss_avx(auVar81,auVar56);
      auVar60 = vminss_avx(SUB6416(ZEXT464(0x3db851ec),0),auVar60);
      fVar76 = fVar76 - auVar56._0_4_;
      fVar78 = fVar78 - auVar60._0_4_;
      auVar56 = ZEXT416((uint)(fVar78 * fVar78 + fVar76 * fVar76 + 0.0));
      auVar56 = vsqrtss_avx(auVar56,auVar56);
      fVar54 = auVar56._0_4_;
    }
    else {
      auVar56 = vmaxss_avx(ZEXT416((uint)(fVar76 - fVar54)),ZEXT416((uint)(fVar78 + -0.09)));
      fVar54 = auVar56._0_4_;
    }
    if (((fVar54 < 0.06) &&
        (auVar56 = vandps_avx(ZEXT416((uint)(fVar88 - auVar89._0_4_)),auVar65), auVar56._0_4_ <= 0.2
        )) && (auVar56 = vandps_avx(ZEXT416((uint)(fVar55 - auVar87._0_4_)),auVar65),
              auVar56._0_4_ <= 0.04)) {
      param_4->hover_blocked = true;
    }
  }
  uVar37 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  local_3998 = &param_3->field29_0x128;
  if (w.game_mode == 0) {
    local_39bc = 0;
    bVar53 = false;
    if (w.has_save != 0) goto LAB_14005ac56;
  }
  else {
LAB_14005ac56:
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0x8b5f9be5U % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_04 == 0)) goto LAB_14005acb1;
      uVar39 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar39;
      if (uVar39 == uVar37) {
        uVar48 = 0;
      }
      iVar28 = (int)(0x8b5f9be5U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
LAB_14005acb1:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar32 = unknown_string;
    }
    else {
      pcVar50 = w.translations.values[lVar40].text[w.language_index];
      pcVar32 = unknown_string;
      if (pcVar50 != (char *)0x0) {
        pcVar32 = pcVar50;
      }
    }
    local_34d4._s_0.x = (float)auVar89._0_4_;
    auVar56._0_12_ = ZEXT812(0);
    auVar56._12_4_ = 0;
    auVar56 = vblendps_avx(auVar56,auVar87._0_16_,1);
    local_34d4._s_2.yz.field0_0x0 = (real_2)vmovlps_avx(auVar56);
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_34d4._s_0,(real_2)0x3d23d70a3e4ccccd,
                            pcVar32);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fVar88 = auVar87._0_4_;
    if (((w.game_mode == 0) && (0xff < (ushort)bVar19)) && (save_version != 0x12)) {
      uStack_7c8._0_4_ = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->fdselect).cursor;
      uStack_7c8._4_4_ = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->fdselect).size;
      uStack_7c0 = *(undefined8 *)((longlong)local_3998 + 0xa8);
      psStack_7b8 = local_3998->font_infos[0].char_data;
      local_868._128_4_ = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->subrs).cursor;
      local_868._132_4_ = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->subrs).size;
      puStack_7e0 = local_3998->font_infos[0].info.fontdicts.data;
      uStack_7d8._0_4_ = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->fontdicts).cursor;
      uStack_7d8._4_4_ = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->fontdicts).size;
      local_7d0 = local_3998->font_infos[0].info.fdselect.data;
      local_868._0_8_ = *(undefined8 *)local_3998;
      local_868._8_8_ = local_3998->font_infos[0].info.userdata;
      local_868._16_8_ = local_3998->font_infos[0].info.data;
      local_868._24_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->fontstart;
      local_868._28_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->numGlyphs;
      local_868._32_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->loca;
      local_868._36_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->head;
      local_868._40_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->glyf;
      local_868._44_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->hhea;
      local_868._48_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->hmtx;
      local_868._52_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->kern;
      local_868._56_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->gpos;
      local_868._60_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->svg;
      local_868._64_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->index_map;
      local_868._68_4_ = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->indexToLocFormat;
      local_868._72_8_ = local_3998->font_infos[0].info.cff.data;
      local_868._80_4_ = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->cff).cursor;
      local_868._84_4_ = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->cff).size;
      local_868._88_8_ = local_3998->font_infos[0].info.charstrings.data;
      local_868._96_32_ = *(undefined1 (*) [32])((longlong)local_3998 + 0x60);
      local_3118 = ___xmm_3f80000000000000000000003f800000;
      auVar86 = ZEXT464((uint)(fVar88 + 0.1));
      uVar29 = 0x5836cc95 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      do {
        auVar58 = auVar91._0_16_;
        auVar61 = auVar94._0_16_;
        auVar70 = auVar93._0_16_;
        auVar81 = auVar87._0_16_;
        auVar65 = auVar82._0_16_;
        auVar60 = auVar95._0_16_;
        auVar56 = auVar89._0_16_;
        fVar88 = auVar86._0_4_;
        uVar47 = (ulonglong)(int)uVar48;
        if (ppcVar16[uVar47] == (char *)0x0) break;
        auVar89 = ZEXT1664(auVar56);
        auVar86 = ZEXT1664(auVar86._0_16_);
        auVar95 = ZEXT1664(auVar60);
        auVar82 = ZEXT1664(auVar65);
        auVar87 = ZEXT1664(auVar81);
        auVar93 = ZEXT1664(auVar70);
        auVar94 = ZEXT1664(auVar61);
        auVar91 = ZEXT1664(auVar58);
        strcmp();
        auVar58 = auVar91._0_16_;
        auVar61 = auVar94._0_16_;
        auVar70 = auVar93._0_16_;
        auVar81 = auVar87._0_16_;
        auVar65 = auVar82._0_16_;
        auVar60 = auVar95._0_16_;
        auVar56 = auVar89._0_16_;
        fVar88 = auVar86._0_4_;
        if (extraout_EAX_05 == 0) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar32 = unknown_string;
      }
      else {
        pcVar50 = w.translations.values[uVar47].text[w.language_index];
        pcVar32 = unknown_string;
        if (pcVar50 != (char *)0x0) {
          pcVar32 = pcVar50;
        }
      }
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      auVar93 = ZEXT1664(auVar70);
      auVar94 = ZEXT1664(auVar61);
      auVar91 = ZEXT1664(auVar58);
      draw_text(pcVar32,auVar56._0_4_,fVar88,(real_4 *)&local_3118._s_0,(real_2)0x0,
                (font_info *)local_868,&default_shadow);
      fVar88 = auVar87._0_4_;
    }
    pqVar14 = ac.queued_sounds;
    bVar53 = false;
    local_39bc = 0;
    if (((ushort)bVar19 & 1) != 0) {
      if (w.game_mode == 0) {
        w.starting_new_run = 0;
        w.starting_mode = 1;
        bVar53 = true;
        local_39bc = 0;
      }
      else {
        uVar39 = (seed >> 0x10 ^ seed) * 0x7feb352d;
        uVar39 = (uVar39 >> 0xf ^ uVar39) * -0x7b935975;
        seed = uVar39 >> 0x10 ^ uVar39;
        uVar29 = (ulonglong)seed;
        local_39bc = 1;
        bVar53 = false;
        if (((ac.initialized == true) && (0 < sounds.menu_click.n_samples)) &&
           (sounds.menu_click.data != (short *)0x0)) {
          if (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds) {
            bVar53 = false;
            uVar39 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
            ac.queued_sounds[(int)uVar39].sound = (sound_t *)0x1401eb1e0;
            uVar64 = vmovlps_avx(SUB6416(ZEXT464(0x40000000),0));
            pqVar14[(int)uVar39].params.volume = (float)(int)uVar64;
            pqVar14[(int)uVar39].params.delay = (float)(int)((ulonglong)uVar64 >> 0x20);
            pqVar14[(int)uVar39].params.pitch_shift = (float)uVar29 * 2.3283064e-10 * 6.0 + -3.0;
            *(undefined1 (*) [16])&pqVar14[(int)uVar39].params.lowpass_dist = ZEXT816(0);
            *(undefined8 *)((longlong)pqVar14[(int)uVar39].filtered + 5) = 0;
            LOCK();
            ac.last_queued_sound = ac.last_queued_sound + 1;
            UNLOCK();
          }
          else {
            bVar53 = false;
          }
        }
      }
    }
    auVar87 = ZEXT464((uint)(fVar88 + -0.08));
    uVar39 = w.confirm_newgame;
  }
  if (uVar39 != 0) {
    uVar64 = *(undefined8 *)
              ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
    *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uVar64;
    (param_3->background_color).field0_0x0._s_0.w =
         (param_3->background_color).field0_0x0._s_0.w * 0.5;
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  uVar29 = (ulonglong)w.translations.max_entries;
  uVar48 = 0xebc6ced5U % uVar29;
  do {
    lVar40 = (longlong)(int)uVar48;
    if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_06 == 0)) goto LAB_14005b194;
    uVar37 = (int)uVar48 + 1;
    uVar48 = (ulonglong)uVar37;
    if (uVar37 == uVar39) {
      uVar48 = 0;
    }
    iVar28 = (int)(0xebc6ced5U % uVar29);
  } while ((int)uVar48 != iVar28);
  lVar40 = (longlong)iVar28;
LAB_14005b194:
  if (w.translations.values[lVar40].text == (char **)0x0) {
    pcVar32 = unknown_string;
  }
  else {
    pcVar50 = w.translations.values[lVar40].text[w.language_index];
    pcVar32 = unknown_string;
    if (pcVar50 != (char *)0x0) {
      pcVar32 = pcVar50;
    }
  }
  local_35c4._s_0.x = (float)auVar89._0_4_;
  local_35c4._s_0.y = (float)auVar87._0_4_;
  local_35c4._s_0.z = 0.0;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_35c4._s_0,(real_2)0x3d23d70a3e4ccccd,
                          pcVar32);
  fVar88 = auVar87._0_4_;
  if (((ushort)bVar19 & 1) == 0) {
LAB_14005b240:
    if (w.confirm_newgame == 0) goto LAB_14005b249;
LAB_14005b265:
    local_3568.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_3568._s_0.z = 1.0;
    local_3568._s_0.w = menu_alpha;
    local_3578.xy.field0_0x0 = (real_2)(real_2_u_0)0x3a83126f3a83126f;
    local_3578._s_0.w = menu_alpha * 0.95;
    local_3578._s_0.z = 0.001;
    local_35d0._s_0.x = 0.0;
    local_35d0._s_0.y = (float)auVar93._0_4_;
    local_35d0._s_0.z = 0.0;
    fVar88 = 0.05;
    draw_rounded_rectangle_outlined
              (param_3,(real_3 *)&local_35d0._s_0,
               (real_2)(CONCAT44(extraout_var,auVar94._0_4_) | 0x3e19999a00000000),0.05,0.01,
               (real_4 *)&local_3578._s_0,(real_4 *)&local_3568._s_0);
    uStack_888._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_888._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_880 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_878 = (param_3->field29_0x128).font_infos[1].char_data;
    local_928._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    local_928._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_8a0 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_898._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_898._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    local_890 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    local_928._0_4_ = pfVar4->texture;
    local_928._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    local_928._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    local_928._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    local_928._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    local_928._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    local_928._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    local_928._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    local_928._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    local_928._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    local_928._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    local_928._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    local_928._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    local_928._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    local_928._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    local_928._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    local_928._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    local_928._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    local_928._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    local_928._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    local_928._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    local_3128.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    local_3128._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT1664(auVar89._0_16_);
    auVar95 = ZEXT1664(auVar95._0_16_);
    auVar82 = ZEXT1664(auVar82._0_16_);
    auVar87 = ZEXT1664(auVar87._0_16_);
    auVar94 = ZEXT1664(auVar93._0_16_);
    auVar91 = ZEXT1664(auVar91._0_16_);
    draw_text(pcVar51,0.0,auVar93._0_4_ + fVar88,(real_4 *)&local_3128._s_0,(real_2)0x0,
              (font_info *)local_928,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
      w.confirm_newgame = 0;
    }
    uVar29 = 0x7aed8fdb % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      fVar88 = auVar94._0_4_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      strcmp();
      fVar88 = auVar94._0_4_;
      if (extraout_EAX_07 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    fVar88 = fVar88 + -0.05;
    local_35dc._s_0.x = -0.12;
    local_35dc._s_0.z = 0.0;
    local_35dc._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_35dc._s_0,(real_2)0x3d23d70a3dcccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      w.starting_new_run = 1;
      w.starting_mode = 1;
      bVar53 = true;
    }
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xfc160d8fU % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_08 == 0)) goto LAB_14005b564;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xfc160d8fU % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
LAB_14005b564:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    local_35e8._s_0.x = 0.12;
    local_35e8._s_0.z = 0.0;
    local_35e8._s_0.y = fVar88;
    do_text_button(param_3,param_4,(real_3 *)&local_35e8._s_0,(real_2)0x3d23d70a3dcccccd,pcVar51);
    fVar88 = auVar87._0_4_;
  }
  else {
    if (w.has_save == 0) {
      w.starting_new_run = 1;
      w.starting_mode = 1;
      bVar53 = true;
      goto LAB_14005b240;
    }
    w._4_4_ = w._4_4_ ^ 1;
    if (w.confirm_newgame != 0) goto LAB_14005b265;
LAB_14005b249:
    next_gui_element = next_gui_element + 2;
  }
  rVar12._8_8_ = uStack_39a0;
  rVar12.xy.field0_0x0 = (real_2)(real_2)local_39a8;
  prVar1->field0_0x0 = rVar12;
  if (settings_tab == 5) {
    uVar64 = *(undefined8 *)
              ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
    *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uVar64;
    (param_3->background_color).field0_0x0._s_0.w =
         auVar95._0_4_ * (param_3->background_color).field0_0x0._s_0.w;
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  fVar88 = fVar88 + -0.08;
  uVar29 = 0x4f3420a6 % (ulonglong)w.translations.max_entries;
  uVar48 = uVar29;
  do {
    uVar47 = (ulonglong)(int)uVar48;
    if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_09 == 0)) break;
    uVar37 = (int)uVar48 + 1;
    uVar48 = (ulonglong)uVar37;
    if (uVar37 == uVar39) {
      uVar48 = 0;
    }
    uVar47 = uVar29;
  } while ((int)uVar48 != (int)uVar29);
  if (w.translations.values[uVar47].text == (char **)0x0) {
    pcVar51 = unknown_string;
  }
  else {
    pcVar32 = w.translations.values[uVar47].text[w.language_index];
    pcVar51 = unknown_string;
    if (pcVar32 != (char *)0x0) {
      pcVar51 = pcVar32;
    }
  }
  local_35f4._s_0.x = (float)auVar89._0_4_;
  local_35f4._s_0.z = 0.0;
  local_35f4._s_0.y = fVar88;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_35f4._s_0,(real_2)0x3d23d70a3e4ccccd,
                          pcVar51);
  iVar28 = settings_tab;
  if (((ushort)bVar19 & 1) == 0) {
    prVar1->field0_0x0 = (real_4_u_0)ZEXT816(0);
    if (iVar28 == 2) {
      uVar64 = *(undefined8 *)
                ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
      (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uVar64;
      (param_3->background_color).field0_0x0._s_0.w =
           auVar95._0_4_ * (param_3->background_color).field0_0x0._s_0.w;
    }
  }
  else {
    settings_tab = (uint)(settings_tab != 5) * 5;
    prVar1->field0_0x0 = (real_4_u_0)ZEXT816(0);
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  fVar88 = fVar88 + -0.15;
  uVar29 = (ulonglong)w.translations.max_entries;
  uVar48 = 0x8b518b33U % uVar29;
  do {
    lVar40 = (longlong)(int)uVar48;
    if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_10 == 0)) goto LAB_14005b7c4;
    uVar37 = (int)uVar48 + 1;
    uVar48 = (ulonglong)uVar37;
    if (uVar37 == uVar39) {
      uVar48 = 0;
    }
    iVar28 = (int)(0x8b518b33U % uVar29);
  } while ((int)uVar48 != iVar28);
  lVar40 = (longlong)iVar28;
LAB_14005b7c4:
  if (w.translations.values[lVar40].text == (char **)0x0) {
    pcVar51 = unknown_string;
  }
  else {
    pcVar32 = w.translations.values[lVar40].text[w.language_index];
    pcVar51 = unknown_string;
    if (pcVar32 != (char *)0x0) {
      pcVar51 = pcVar32;
    }
  }
  local_3600._s_0.x = (float)auVar89._0_4_;
  local_3600._s_0.z = 0.0;
  local_3600._s_0.y = fVar88;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_3600._s_0,(real_2)0x3d23d70a3e4ccccd,
                          pcVar51);
  iVar28 = settings_tab;
  if (((ushort)bVar19 & 1) == 0) {
    prVar1->field0_0x0 = (real_4_u_0)ZEXT816(0);
    if (iVar28 == 1) {
      uVar64 = *(undefined8 *)
                ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
      (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uVar64;
      (param_3->background_color).field0_0x0._s_0.w =
           auVar95._0_4_ * (param_3->background_color).field0_0x0._s_0.w;
    }
  }
  else {
    settings_tab = (uint)(settings_tab != 2) * 2;
    prVar1->field0_0x0 = (real_4_u_0)ZEXT816(0);
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  fVar88 = fVar88 + -0.08;
  uVar29 = (ulonglong)w.translations.max_entries;
  uVar48 = 0xd9d2184fU % uVar29;
  do {
    lVar40 = (longlong)(int)uVar48;
    if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_11 == 0)) goto LAB_14005b904;
    uVar37 = (int)uVar48 + 1;
    uVar48 = (ulonglong)uVar37;
    if (uVar37 == uVar39) {
      uVar48 = 0;
    }
    iVar28 = (int)(0xd9d2184fU % uVar29);
  } while ((int)uVar48 != iVar28);
  lVar40 = (longlong)iVar28;
LAB_14005b904:
  if (w.translations.values[lVar40].text == (char **)0x0) {
    pcVar51 = unknown_string;
  }
  else {
    pcVar32 = w.translations.values[lVar40].text[w.language_index];
    pcVar51 = unknown_string;
    if (pcVar32 != (char *)0x0) {
      pcVar51 = pcVar32;
    }
  }
  local_360c._s_0.x = (float)auVar89._0_4_;
  local_360c._s_0.z = 0.0;
  local_360c._s_0.y = fVar88;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_360c._s_0,(real_2)0x3d23d70a3e4ccccd,
                          pcVar51);
  iVar28 = settings_tab;
  if (((ushort)bVar19 & 1) == 0) {
    prVar1->field0_0x0 = (real_4_u_0)ZEXT816(0);
    if (iVar28 == 4) {
      uVar64 = *(undefined8 *)
                ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
      (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uVar64;
      (param_3->background_color).field0_0x0._s_0.w =
           auVar95._0_4_ * (param_3->background_color).field0_0x0._s_0.w;
    }
  }
  else {
    settings_tab = (int)(settings_tab != 1);
    prVar1->field0_0x0 = (real_4_u_0)ZEXT816(0);
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  fVar88 = fVar88 + -0.08;
  uVar29 = 0x539a3ed5 % (ulonglong)w.translations.max_entries;
  uVar48 = uVar29;
  do {
    uVar47 = (ulonglong)(int)uVar48;
    if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_12 == 0)) break;
    uVar37 = (int)uVar48 + 1;
    uVar48 = (ulonglong)uVar37;
    if (uVar37 == uVar39) {
      uVar48 = 0;
    }
    uVar47 = uVar29;
  } while ((int)uVar48 != (int)uVar29);
  if (w.translations.values[uVar47].text == (char **)0x0) {
    pcVar51 = unknown_string;
  }
  else {
    pcVar32 = w.translations.values[uVar47].text[w.language_index];
    pcVar51 = unknown_string;
    if (pcVar32 != (char *)0x0) {
      pcVar51 = pcVar32;
    }
  }
  local_3618._s_0.x = (float)auVar89._0_4_;
  local_3618._s_0.z = 0.0;
  local_3618._s_0.y = fVar88;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_3618._s_0,(real_2)0x3d23d70a3e4ccccd,
                          pcVar51);
  iVar28 = settings_tab;
  if (((ushort)bVar19 & 1) == 0) {
    prVar1->field0_0x0 = (real_4_u_0)ZEXT816(0);
    if (iVar28 == 3) {
      uVar64 = *(undefined8 *)
                ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
      (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uVar64;
      (param_3->background_color).field0_0x0._s_0.w =
           auVar95._0_4_ * (param_3->background_color).field0_0x0._s_0.w;
    }
  }
  else {
    settings_tab = (uint)(settings_tab != 4) << 2;
    prVar1->field0_0x0 = (real_4_u_0)ZEXT816(0);
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  fVar88 = fVar88 + -0.15;
  uVar29 = (ulonglong)w.translations.max_entries;
  uVar48 = 0xe21ea2bbU % uVar29;
  do {
    lVar40 = (longlong)(int)uVar48;
    if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_13 == 0)) goto LAB_14005bb74;
    uVar37 = (int)uVar48 + 1;
    uVar48 = (ulonglong)uVar37;
    if (uVar37 == uVar39) {
      uVar48 = 0;
    }
    iVar28 = (int)(0xe21ea2bbU % uVar29);
  } while ((int)uVar48 != iVar28);
  lVar40 = (longlong)iVar28;
LAB_14005bb74:
  if (w.translations.values[lVar40].text == (char **)0x0) {
    pcVar51 = unknown_string;
  }
  else {
    pcVar32 = w.translations.values[lVar40].text[w.language_index];
    pcVar51 = unknown_string;
    if (pcVar32 != (char *)0x0) {
      pcVar51 = pcVar32;
    }
  }
  local_3624._s_0.x = (float)auVar89._0_4_;
  local_3624._s_0.z = 0.0;
  local_3624._s_0.y = fVar88;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_3624._s_0,(real_2)0x3d23d70a3e4ccccd,
                          pcVar51);
  if (((ushort)bVar19 & 1) != 0) {
    settings_tab = (uint)(settings_tab != 3) * 3;
  }
  fVar88 = fVar88 + -0.15;
  rVar57._0_12_ = ZEXT812(0);
  rVar57._s_0.w = 0.0;
  prVar1->field0_0x0 = rVar57;
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  if (w.game_mode != 0) {
    uVar29 = 0x53799175 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      uVar47 = (ulonglong)(int)uVar48;
      if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_14 == 0)) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    local_3630._s_0.x = (float)auVar89._0_4_;
    local_3630._s_0.z = 0.0;
    local_3630._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_3630._s_0,(real_2)0x3d23d70a3e4ccccd,
                            pcVar51);
    if ((((ushort)bVar19 & 1) != 0) && (w.starting_game == 0)) {
      save_settings();
      w.starting_new_run = 0;
      w.starting_game = 1;
      w.starting_mode = 0;
      w.start_trans = 3.0;
    }
    fVar88 = fVar88 + -0.08;
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  pcVar51 = "menu_quit";
  if (bVar52) {
    pcVar51 = "menu_save_quit";
  }
  cVar5 = *pcVar51;
  if (cVar5 == '\0') {
    uVar37 = 0x1505;
  }
  else {
    uVar37 = 0x1505;
    do {
      pcVar51 = pcVar51 + 1;
      uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
      cVar5 = *pcVar51;
    } while (cVar5 != '\0');
  }
  uVar29 = (ulonglong)w.translations.max_entries;
  uVar48 = (ulonglong)uVar37 % uVar29;
  do {
    local_363c._s_0.x = (float)auVar89._0_4_;
    lVar40 = (longlong)(int)uVar48;
    if (ppcVar16[lVar40] == (char *)0x0) goto LAB_14005bde4;
    strcmp();
    local_363c._s_0.x = (float)auVar89._0_4_;
    if (extraout_EAX_15 == 0) goto LAB_14005bde4;
    uVar38 = (int)uVar48 + 1;
    uVar48 = (ulonglong)uVar38;
    if (uVar38 == uVar39) {
      uVar48 = 0;
    }
    iVar28 = (int)((ulonglong)uVar37 % uVar29);
  } while ((int)uVar48 != iVar28);
  lVar40 = (longlong)iVar28;
LAB_14005bde4:
  if (w.translations.values[lVar40].text == (char **)0x0) {
    pcVar51 = unknown_string;
  }
  else {
    pcVar32 = w.translations.values[lVar40].text[w.language_index];
    pcVar51 = unknown_string;
    if (pcVar32 != (char *)0x0) {
      pcVar51 = pcVar32;
    }
  }
  local_363c._s_0.z = 0.0;
  local_363c._s_0.y = fVar88;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_363c._s_0,(real_2)0x3d23d70a3e4ccccd,
                          pcVar51);
  auVar60 = auVar91._0_16_;
  auVar56 = auVar82._0_16_;
  if (((ushort)bVar19 & 1) != 0) {
    save_settings();
    if (bVar52) {
      save_world();
    }
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  (prVar1->field0_0x0).xy.field0_0x0 = local_39a8;
  *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       uStack_39a0;
  fVar88 = DAT_1401fa0c4;
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  max_gui_x = *(float *)(&__real_bf19999a3f19999a + (ulonglong)(settings_tab == 0) * 4);
  switch(settings_tab) {
  case 1:
    auStack_9e8._0_4_ = pfVar4->texture;
    auStack_9e8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    auStack_9e8._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    auStack_9e8._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    auStack_9e8._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    auStack_9e8._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    auStack_9e8._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    auStack_9e8._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    auStack_9e8._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    auStack_9e8._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    auStack_9e8._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    auStack_9e8._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    auStack_9e8._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    auStack_9e8._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    auStack_9e8._64_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0xf8);
    auStack_988 = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    uStack_968._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    uStack_968._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_960 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_958._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_958._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    puStack_950 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    uStack_948._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_948._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_940 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_938 = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3138.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3138._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT864(CONCAT44((int)((ulonglong)((double)DAT_1401fa0c8 + 0.2) >> 0x20),
                               (float)((double)DAT_1401fa0c8 + 0.2)));
    auVar87 = ZEXT464((uint)(DAT_1401fa0c4 + -0.1));
    auVar89 = ZEXT464((uint)(DAT_1401fa0c4 + -0.1 + -0.02));
    uVar29 = 0x256178d5 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar70 = auVar91._0_16_;
      auVar81 = auVar82._0_16_;
      auVar65 = auVar87._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar87 = ZEXT1664(auVar65);
      auVar82 = ZEXT1664(auVar81);
      auVar91 = ZEXT1664(auVar70);
      strcmp();
      auVar70 = auVar91._0_16_;
      auVar81 = auVar82._0_16_;
      auVar65 = auVar87._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_16 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar93 = ZEXT1664(auVar81);
    auVar91 = ZEXT1664(auVar70);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3138._s_0,(real_2)0x3f800000,
              (font_info *)auStack_9e8,&default_shadow);
    sfx_timer = auVar91._0_4_ + sfx_timer;
    auVar56 = vinsertps_avx(auVar82._0_16_,auVar95._0_16_,0x10);
    auVar92._0_4_ = auVar56._0_4_ + 0.32000002;
    auVar92._4_4_ = auVar56._4_4_ + 0.0;
    auVar92._8_4_ = auVar56._8_4_ + 0.0;
    auVar92._12_4_ = auVar56._12_4_ + 0.0;
    auVar94 = ZEXT1664(auVar92);
    rStack_3588.xy.field0_0x0 = (real_2)vmovlps_avx(auVar92);
    rStack_3588._s_0.z = 0.0;
    do_slider(param_3,param_4,(real_3 *)&rStack_3588._s_0,(real_2)0x3cf5c28f3e99999a,
              &settings.effects_volume,0.0,1.0);
    sprintf(local_668,"%.0f%%");
    fStack_aa8.texture = pfVar4->texture;
    fStack_aa8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_aa8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_aa8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_aa8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_aa8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_aa8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_aa8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_aa8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_aa8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_aa8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_aa8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_aa8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_aa8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_aa8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_aa8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_aa8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_aa8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_aa8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_aa8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    fStack_aa8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_aa8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_aa8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_aa8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_aa8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_aa8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_aa8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_aa8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_aa8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_aa8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_aa8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_aa8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_aa8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_aa8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_aa8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_aa8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3148.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3148._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    fVar88 = auVar82._0_4_ + 0.6 + 0.04;
    auVar89 = ZEXT1664(auVar89._0_16_);
    auVar82 = ZEXT1664(auVar95._0_16_);
    auVar87 = ZEXT464((uint)fVar88);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    auVar91 = ZEXT1664(auVar91._0_16_);
    draw_text(local_668,fVar88,auVar95._0_4_,(real_4 *)&rStack_3148._s_0,(real_2)0xbf800000,
              &fStack_aa8,&default_shadow);
    pqVar14 = ac.queued_sounds;
    if ((param_4->active_ui_element == &settings.effects_volume) && (0.5 < sfx_timer)) {
      uVar39 = (seed >> 0x10 ^ seed) * 0x7feb352d;
      uVar39 = (uVar39 >> 0xf ^ uVar39) * -0x7b935975;
      seed = uVar39 >> 0x10 ^ uVar39;
      uVar29 = (ulonglong)seed;
      if ((ac.initialized == true) &&
         (((0 < sounds.explosion.n_samples && (sounds.explosion.data != (short *)0x0)) &&
          (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
        uVar39 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar39].sound = (sound_t *)0x1401eb0d0;
        uVar64 = vmovlps_avx(SUB6416(ZEXT464(0x3f800000),0));
        pqVar14[(int)uVar39].params.volume = (float)(int)uVar64;
        pqVar14[(int)uVar39].params.delay = (float)(int)((ulonglong)uVar64 >> 0x20);
        pqVar14[(int)uVar39].params.pitch_shift = (float)uVar29 * 2.3283064e-10 * 6.0 + -6.0;
        pqVar15 = pqVar14 + (int)uVar39;
        (pqVar15->params).lowpass_dist = 0.0;
        (pqVar15->params).type = 0;
        *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
        *(undefined8 *)((longlong)pqVar14[(int)uVar39].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
      sfx_timer = 0.0;
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    ac.target_game_sfx_volume = settings.effects_volume;
    fStack_b68.texture = pfVar4->texture;
    fStack_b68._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_b68.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_b68.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_b68.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_b68.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_b68.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_b68.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_b68.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_b68.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_b68.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_b68.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_b68.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_b68.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_b68.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_b68.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_b68.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_b68.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_b68.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_b68.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    fStack_b68.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_b68.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_b68.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_b68.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_b68.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_b68.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_b68.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_b68.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_b68.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_b68.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_b68.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_b68.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_b68.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_b68.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_b68._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_b68.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3158.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3158._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar82._0_4_ + -0.07));
    uVar29 = 0x136558d5 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar70 = auVar91._0_16_;
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar87._0_16_;
      auVar56 = auVar95._0_16_;
      fVar88 = auVar89._0_4_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar89._0_16_);
      auVar95 = ZEXT1664(auVar56);
      auVar87 = ZEXT1664(auVar60);
      auVar93 = ZEXT1664(auVar65);
      auVar94 = ZEXT1664(auVar81);
      auVar91 = ZEXT1664(auVar70);
      strcmp();
      auVar70 = auVar91._0_16_;
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar87._0_16_;
      auVar56 = auVar95._0_16_;
      fVar88 = auVar89._0_4_;
      if (extraout_EAX_36 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar82 = ZEXT1664(auVar60);
    auVar87 = ZEXT1664(auVar65);
    auVar95 = ZEXT1664(auVar81);
    auVar93 = ZEXT1664(auVar70);
    draw_text(pcVar51,fVar88,auVar56._0_4_,(real_4 *)&rStack_3158._s_0,(real_2)0x3f800000,
              &fStack_b68,&default_shadow);
    rStack_3648._s_0.x = (float)auVar95._0_4_;
    rStack_3648._s_0.y = (float)auVar89._0_4_;
    rStack_3648._s_0.z = 0.0;
    do_slider(param_3,param_4,(real_3 *)&rStack_3648._s_0,(real_2)0x3cf5c28f3e99999a,
              &settings.music_volume,0.0,1.0);
    sprintf(local_668,"%.0f%%");
    fStack_c28.texture = pfVar4->texture;
    fStack_c28._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_c28.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_c28.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_c28.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_c28.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_c28.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_c28.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_c28.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_c28.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_c28.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_c28.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_c28.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_c28.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_c28.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_c28.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_c28.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_c28.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_c28.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_c28.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    fStack_c28.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_c28.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_c28.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_c28.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_c28.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_c28.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_c28.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_c28.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_c28.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_c28.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_c28.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_c28.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_c28.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_c28.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_c28._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_c28.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3168.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3168._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar87._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    draw_text(local_668,auVar82._0_4_,auVar89._0_4_,(real_4 *)&rStack_3168._s_0,(real_2)0xbf800000,
              &fStack_c28,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    ac.target_music_volume = settings.music_volume;
    pcVar51 = "menu_show_fps_on";
    if (settings.show_fps == 0) {
      pcVar51 = "menu_show_fps_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = auVar95._0_4_ + -0.07;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    fVar55 = DAT_1401fa0c4;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_39 == 0))
      goto code_r0x00014005e0f4;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005e0f4:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3654._s_0.z = 0.0;
    rStack_3654._s_0.x = fVar55;
    rStack_3654._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3654._s_0,(real_2)0x3d0f5c293ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.show_fps = (uint)(settings.show_fps == 0);
    }
    pcVar51 = "menu_cap_framerate_on";
    if (settings.cap_framerate == 0) {
      pcVar51 = "menu_cap_framerate_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.07;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_40 == 0))
      goto code_r0x00014005e234;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005e234:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3660._s_0.z = 0.0;
    rStack_3660._s_0.x = fVar55;
    rStack_3660._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3660._s_0,(real_2)0x3d0f5c293ecccccd,
                            pcVar51);
    if (((ushort)bVar19 & 1) != 0) {
      settings.cap_framerate = (uint)(settings.cap_framerate == 0);
    }
    auVar89 = ZEXT464((uint)(fVar55 + -0.1));
    if (settings.cap_framerate == 0) {
      fVar55 = (param_3->foreground_color).field0_0x0._s_0.z;
      uVar64 = *(undefined8 *)&(param_3->foreground_color).field0_0x0;
      auVar66._0_4_ = (float)uVar64 * 0.05;
      auVar66._4_4_ = (float)((ulonglong)uVar64 >> 0x20) * 0.05;
      auVar66._8_8_ = 0;
      rVar34 = (real_2_u_0)vmovlps_avx(auVar66);
      (param_3->foreground_color).field0_0x0.xy.field0_0x0 = rVar34;
      (param_3->foreground_color).field0_0x0._s_0.z = fVar55 * 0.05;
    }
    auVar82 = ZEXT464((uint)(fVar88 + -0.07));
    fStack_39dc = (float)settings.framerate_cap;
    snprintf(acStack_6e8,0x80,"%d");
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_ce8.texture = pfVar4->texture;
    fStack_ce8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_ce8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_ce8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_ce8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_ce8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_ce8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_ce8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_ce8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_ce8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_ce8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_ce8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_ce8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_ce8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_ce8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_ce8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_ce8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_ce8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_ce8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_ce8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    fStack_ce8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_ce8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_ce8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_ce8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_ce8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_ce8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_ce8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_ce8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_ce8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_ce8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_ce8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_ce8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_ce8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_ce8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_ce8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_ce8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3178.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3178._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    fVar88 = auVar89._0_4_ + -0.02;
    auVar95 = ZEXT464((uint)fVar88);
    auVar94 = ZEXT464((uint)(fVar88 + -0.1));
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xe2661fa9U % uVar29;
    do {
      auVar70 = auVar93._0_16_;
      auVar81 = auVar89._0_16_;
      auVar65 = auVar87._0_16_;
      auVar56 = auVar95._0_16_;
      auVar60 = auVar82._0_16_;
      fVar88 = auVar94._0_4_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x00014005e417;
      auVar95 = ZEXT1664(auVar56);
      auVar82 = ZEXT1664(auVar60);
      auVar94 = ZEXT1664(auVar94._0_16_);
      auVar87 = ZEXT1664(auVar65);
      auVar89 = ZEXT1664(auVar81);
      auVar93 = ZEXT1664(auVar70);
      strcmp();
      auVar70 = auVar93._0_16_;
      auVar81 = auVar89._0_16_;
      auVar65 = auVar87._0_16_;
      auVar56 = auVar95._0_16_;
      auVar60 = auVar82._0_16_;
      fVar88 = auVar94._0_4_;
      if (extraout_EAX_41 == 0) goto code_r0x00014005e417;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xe2661fa9U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005e417:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar82 = ZEXT1664(auVar60);
    auVar93 = ZEXT1664(auVar65);
    auVar94 = ZEXT1664(auVar81);
    auVar91 = ZEXT1664(auVar70);
    draw_text(pcVar51,fVar88,auVar60._0_4_,(real_4 *)&rStack_3178._s_0,(real_2)0x3f800000,
              &fStack_ce8,&default_shadow);
    fStack_da8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_da8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_da8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_da8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_da8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_da8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_da8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_da8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_da8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_da8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_da8.texture = pfVar4->texture;
    fStack_da8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_da8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_da8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_da8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_da8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_da8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_da8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_da8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_da8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_da8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_da8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_da8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_da8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_da8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_da8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_da8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_da8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_da8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_da8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    fStack_da8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_da8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_da8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_da8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_da8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_da8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3188.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3188._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    auVar91 = ZEXT1664(auVar91._0_16_);
    draw_text(acStack_6e8,auVar89._0_4_,auVar82._0_4_,(real_4 *)&rStack_3188._s_0,(real_2)0x3f800000
              ,&fStack_da8,&default_shadow);
    fVar88 = auVar94._0_4_ + 0.32000002;
    rStack_366c._s_0.y = (float)auVar87._0_4_;
    rStack_366c._s_0.z = 0.0;
    rStack_366c._s_0.x = fVar88;
    do_slider(param_3,param_4,(real_3 *)&rStack_366c._s_0,(real_2)0x3cf5c28f3e99999a,&fStack_39dc,
              30.0,300.0);
    settings.framerate_cap = (uint)(longlong)fStack_39dc;
    (prVar2->field0_0x0).xy.field0_0x0 = local_39d8;
    *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39d0;
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_39e0 = (float)settings.thread_count;
    auVar89 = ZEXT464((uint)(auVar87._0_4_ + -0.07));
    uVar29 = 0x696a0674 % (ulonglong)w.translations.max_entries;
    uVar48 = 0x4516c0cf % (ulonglong)w.translations.max_entries;
    uVar47 = uVar48;
    do {
      auVar81 = auVar91._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar89._0_16_;
      auVar56 = auVar95._0_16_;
      uVar49 = (ulonglong)(int)uVar47;
      if (ppcVar16[uVar49] == (char *)0x0) break;
      strcmp();
      auVar81 = auVar91._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar89._0_16_;
      auVar56 = auVar95._0_16_;
      if (extraout_EAX_42 == 0) break;
      uVar37 = (int)uVar47 + 1;
      uVar47 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar47 = 0;
      }
      uVar49 = uVar48;
    } while ((int)uVar47 != (int)uVar48);
    ptVar17 = w.translations.values;
    if (w.translations.values[uVar49].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar49].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    local_2fa8._0_4_ = 0.0;
    local_2fa8._4_4_ = 0.0;
    local_2fa8._40_24_ = ZEXT424(0);
    local_2fa8._8_4_ = 0.0;
    local_2fa8._12_4_ = 0.0;
    local_2fa8._16_4_ = 0.0;
    local_2fa8._20_4_ = 0.0;
    local_2fa8._24_8_ = (real_2_u_0)0x0;
    local_2f68 = 0.0;
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar87 = ZEXT1664(auVar65);
    auVar93 = ZEXT1664(auVar81);
    local_2fa8._32_4_ = local_2fa8._0_4_;
    local_2fa8._36_4_ = local_2fa8._4_4_;
    rVar23 = get_text_size(pcVar51,pfVar4,(text_params *)local_2fa8);
    fStack_e68.texture = pfVar4->texture;
    fStack_e68._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_e68.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_e68.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_e68.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_e68.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_e68.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_e68.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_e68.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_e68.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_e68.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_e68.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_e68.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_e68.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_e68.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_e68.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_e68.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_e68.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_e68.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_e68.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    fStack_e68.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_e68.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_e68.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_e68.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_e68.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_e68.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_e68.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_e68.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_e68.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_e68.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_e68.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_e68.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_e68.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_e68.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_e68._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_e68.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3198.xy.field0_0x0 = (real_2)(real_2)local_39d8;
    rStack_3198._8_8_ = uStack_39d0;
    auVar82 = ZEXT464((uint)((auVar89._0_4_ + -0.03) - rVar23.field0_0x0._0_4_));
    uVar48 = uVar29;
    do {
      auVar81 = auVar93._0_16_;
      auVar65 = auVar87._0_16_;
      auVar56 = auVar89._0_16_;
      auVar60 = auVar95._0_16_;
      fVar55 = auVar82._0_4_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar82._0_16_);
      auVar87 = ZEXT1664(auVar65);
      auVar93 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar93._0_16_;
      auVar65 = auVar87._0_16_;
      auVar56 = auVar89._0_16_;
      auVar60 = auVar95._0_16_;
      fVar55 = auVar82._0_4_;
      if (extraout_EAX_43 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (ptVar17[uVar47].text == (char **)0x0) {
      pcVar32 = unknown_string;
    }
    else {
      pcVar50 = ptVar17[uVar47].text[w.language_index];
      pcVar32 = unknown_string;
      if (pcVar50 != (char *)0x0) {
        pcVar32 = pcVar50;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar32,fVar55,auVar60._0_4_,(real_4 *)&rStack_3198._s_0,(real_2)0x3f800000,
              &fStack_e68,&default_shadow);
    auVar65 = auVar87._0_16_;
    auVar60 = auVar82._0_16_;
    auVar56 = auVar95._0_16_;
    fVar55 = auVar89._0_4_;
    if (settings.thread_count != 0) {
      pcVar51 = acStack_268;
      snprintf(pcVar51,0x80,"%d");
      auVar65 = auVar87._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar95._0_16_;
      fVar55 = auVar89._0_4_;
    }
    fStack_f28.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_f28.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_f28._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_f28.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_f28.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_f28.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_f28.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_f28.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_f28.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_f28.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_f28.texture = pfVar4->texture;
    fStack_f28._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_f28.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_f28.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_f28.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_f28.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_f28.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_f28.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_f28.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_f28.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_f28.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_f28.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_f28.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_f28.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_f28.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_f28.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_f28.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_f28.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_f28.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_f28.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    fStack_f28.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_f28.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_f28.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_f28.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_f28.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_f28.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_31a8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_31a8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    draw_text(pcVar51,fVar55,auVar56._0_4_,(real_4 *)&rStack_31a8._s_0,(real_2)0x3f800000,
              &fStack_f28,&default_shadow);
    rStack_3678._s_0.y = (float)auVar89._0_4_;
    rStack_3678._s_0.z = 0.0;
    rStack_3678._s_0.x = fVar88;
    do_slider(param_3,param_4,(real_3 *)&rStack_3678._s_0,(real_2)0x3cf5c28f3e99999a,&fStack_39e0,
              2.0,48.0);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    settings.thread_count = (uint)(longlong)fStack_39e0;
    if (settings.thread_count < 3) {
      settings.thread_count = 0;
    }
    pcVar51 = "menu_fullscreen_on";
    if (settings.fullscreen == 0) {
      pcVar51 = "menu_fullscreen_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = auVar89._0_4_ + -0.07;
    auVar89 = ZEXT464((uint)DAT_1401fa0c4);
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_44 == 0))
      goto code_r0x00014005e9d4;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005e9d4:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3684._s_0.x = (float)auVar89._0_4_;
    rStack_3684._s_0.z = 0.0;
    rStack_3684._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3684._s_0,(real_2)0x3d0f5c293ecccccd,
                            pcVar51);
    if (((ushort)bVar19 & 1) != 0) {
      settings.fullscreen = (uint)(settings.fullscreen == 0);
      toggle_fullscreen();
    }
    if (settings.fullscreen == 0) {
      if (dropdown_active == true) {
        rVar34 = (prVar3->field0_0x0).xy.field0_0x0;
        uVar64 = *(undefined8 *)
                  ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
        prVar24 = prVar1;
        goto code_r0x00014005eaca;
      }
    }
    else {
      dropdown_active = false;
      fVar55 = (param_3->foreground_color).field0_0x0._s_0.z;
      uVar64 = *(undefined8 *)&(param_3->foreground_color).field0_0x0;
      auVar67._0_4_ = (float)uVar64 * 0.05;
      auVar67._4_4_ = (float)((ulonglong)uVar64 >> 0x20) * 0.05;
      auVar67._8_8_ = 0;
      rVar34 = (real_2_u_0)vmovlps_avx(auVar67);
      (param_3->foreground_color).field0_0x0.xy.field0_0x0 = rVar34;
      (param_3->foreground_color).field0_0x0._s_0.z = fVar55 * 0.05;
      rVar34 = (real_2_u_0)0x0;
      uVar64 = 0;
      prVar24 = prVar3;
code_r0x00014005eaca:
      (prVar24->field0_0x0).xy.field0_0x0 = rVar34;
      *(undefined8 *)((longlong)&(prVar24->field0_0x0)._s_2.yz.field0_0x0 + 4) = uVar64;
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    auVar87 = ZEXT464((uint)(fVar88 + -0.07));
    uStack_f48._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_f48._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_f40 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_f38 = (param_3->field29_0x128).font_infos[1].char_data;
    auStack_fe8._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    auStack_fe8._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_f60 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_f58._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_f58._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    puStack_f50 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    auStack_fe8._0_4_ = pfVar4->texture;
    auStack_fe8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    auStack_fe8._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    auStack_fe8._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    auStack_fe8._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    auStack_fe8._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    auStack_fe8._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    auStack_fe8._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    auStack_fe8._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    auStack_fe8._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    auStack_fe8._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    auStack_fe8._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    auStack_fe8._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    auStack_fe8._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    auStack_fe8._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    auStack_fe8._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    auStack_fe8._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    auStack_fe8._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    auStack_fe8._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    auStack_fe8._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    auStack_fe8._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    rStack_31b8 = prVar2->field0_0x0;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xbb729be5U % uVar29;
    do {
      auVar81 = auVar82._0_16_;
      auVar65 = auVar95._0_16_;
      auVar60 = auVar87._0_16_;
      auVar56 = auVar89._0_16_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x00014005eba7;
      auVar89 = ZEXT1664(auVar56);
      auVar87 = ZEXT1664(auVar60);
      auVar95 = ZEXT1664(auVar65);
      auVar82 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar82._0_16_;
      auVar65 = auVar95._0_16_;
      auVar60 = auVar87._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_45 == 0) goto code_r0x00014005eba7;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xbb729be5U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005eba7:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_31b8._s_0,(real_2)0x3f800000,
              (font_info *)auStack_fe8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    iVar28 = param_4->hovered_ui_element;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0x8934cbbbU % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_46 == 0))
      goto code_r0x00014005ec8b;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar30 = (int)(0x8934cbbbU % uVar29);
    } while ((int)uVar48 != iVar30);
    lVar40 = (longlong)iVar30;
code_r0x00014005ec8b:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3690._s_0.x = auVar89._0_4_ + 0.55;
    auVar93 = ZEXT464((uint)rStack_3690._s_0.x);
    rStack_3690._s_0.y = (float)auVar95._0_4_;
    rStack_3690._s_0.z = 0.0;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3690._s_0,(real_2)0x3d0f5c293e19999a,
                            pcVar51);
    if (settings.fullscreen == 0) {
      if (((ushort)bVar19 & 1) != 0) {
        dropdown_active = (bool)(dropdown_active ^ 1);
      }
    }
    else {
      param_4->hovered_ui_element = iVar28;
    }
    local_2fa8._4_4_ = 0.0;
    local_2fa8._8_4_ = 0.0;
    local_2fa8._12_4_ = 0.0;
    local_2fa8._16_4_ = 0.0;
    local_2fa8._20_4_ = 0.0;
    local_2fa8._24_8_ = (real_2_u_0)0x0;
    local_2fa8._32_4_ = 0.0;
    local_2fa8._36_4_ = 0.0;
    local_2fa8._0_4_ = 5.60519e-44;
    auVar89 = ZEXT1664(auVar89._0_16_);
    auVar95 = ZEXT1664(auVar95._0_16_);
    auVar82 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar87 = ZEXT1664(auVar87._0_16_);
    pHVar25 = MonitorFromWindow((HWND)main_hwnd,1);
    GetMonitorInfoA(pHVar25,(LPMONITORINFO)local_2fa8);
    auVar80 = auVar93._0_16_;
    auVar79 = auVar82._0_16_;
    auVar67 = auVar95._0_16_;
    auVar66 = auVar89._0_16_;
    auVar72 = auVar87._0_16_;
    auVar59._4_4_ = local_2fa8._16_4_;
    auVar59._0_4_ = local_2fa8._12_4_;
    auVar68._4_4_ = local_2fa8._8_4_;
    auVar68._0_4_ = local_2fa8._4_4_;
    auVar59._8_8_ = 0;
    auVar68._8_8_ = 0;
    auVar92 = vpsubd_avx(auVar59,auVar68);
    auVar61 = vpshufd_avx(auVar92,0x44);
    auVar10 = vperm2f128_avx(res_options._72_32_,res_options._104_32_,0x31);
    auVar77._16_16_ = res_options._104_16_;
    auVar77._0_16_ = res_options._72_16_;
    auVar63 = vshufps_avx(auVar77,auVar10,0x88);
    auVar11 = vperm2f128_avx(res_options._8_32_,res_options._40_32_,0x31);
    auVar74._16_16_ = res_options._40_16_;
    auVar74._0_16_ = res_options._8_16_;
    auVar9 = vshufps_avx(auVar74,auVar11,0x88);
    auVar81 = vpshufd_avx(auVar92,0);
    auVar56 = vpcmpgtd_avx(auVar9._0_16_,auVar81);
    auVar60 = vpcmpgtd_avx(auVar9._16_16_,auVar81);
    auVar65 = vpcmpgtd_avx(auVar63._0_16_,auVar81);
    auVar81 = vpcmpgtd_avx(auVar63._16_16_,auVar81);
    auVar63 = vshufps_avx(auVar77,auVar10,0xdd);
    auVar9 = vshufps_avx(auVar74,auVar11,0xdd);
    auVar58 = vpshufd_avx(auVar92,0x55);
    auVar70 = vpcmpgtd_avx(auVar9._0_16_,auVar58);
    auVar70 = vpor_avx(auVar56,auVar70);
    auVar56 = vpcmpgtd_avx(auVar9._16_16_,auVar58);
    auVar56 = vpor_avx(auVar56,auVar60);
    auVar56 = vpackssdw_avx(auVar70,auVar56);
    auVar60 = vpcmpgtd_avx(auVar63._0_16_,auVar58);
    auVar65 = vpor_avx(auVar65,auVar60);
    auVar60 = vpcmpgtd_avx(auVar63._16_16_,auVar58);
    auVar60 = vpor_avx(auVar60,auVar81);
    auVar60 = vpackssdw_avx(auVar65,auVar60);
    auVar56 = vpacksswb_avx(auVar56,auVar60);
    auVar60 = vpcmpgtd_avx(res_options._144_16_,auVar61);
    uVar39 = vmovmskps_avx(auVar60);
    iVar28 = (uint)((uVar39 & 3) == 0) + (uint)((uVar39 & 0xc) == 0) +
             POPCOUNT((ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff) +
             (uint)((int)res_options[0x11].field0_0x0._4_4_ <= auVar92._4_4_ &&
                   (int)res_options[0x11].field0_0x0._0_4_ <= auVar92._0_4_);
    if (iVar28 == 0) {
      dropdown_active = false;
code_r0x00014005f0e5:
      next_gui_element = next_gui_element + iVar28;
    }
    else {
      if (dropdown_active != true) goto code_r0x00014005f0e5;
      auVar56 = vmaxss_avx(ZEXT416((uint)max_gui_x),ZEXT416(0x3f87ae14));
      fVar88 = auVar89._0_4_ + 0.89;
      max_gui_x = auVar56._0_4_;
      auVar56 = vmaxss_avx(ZEXT416((uint)((float)iVar28 * 0.05 + -0.3)),
                           ZEXT416((uint)((float)iVar28 * 0.1 + -0.93)));
      auVar87 = ZEXT1664(auVar56);
      iVar28 = 0;
      rVar34 = (real_2_u_0)0x3f8000003f800000;
      fVar55 = -0.1;
      lVar40 = 0;
      do {
        iVar30 = res_options[lVar40].field0_0x0._s_0.x;
        if ((iVar30 <= auVar92._0_4_) &&
           (iVar7 = res_options[lVar40].field0_0x0._s_0.y, iVar7 <= auVar92._4_4_)) {
          fVar54 = menu_alpha *
                   *(float *)(&__real_3dcccccd3ccccccd +
                             (ulonglong)(iVar7 == settings.window_y && iVar30 == settings.window_x)
                             * 4);
          (param_3->background_color).field0_0x0.xy.field0_0x0 = rVar34;
          (param_3->background_color).field0_0x0._s_0.z = 1.0;
          (param_3->background_color).field0_0x0._s_0.w = fVar54;
          auVar89 = ZEXT1664(auVar89._0_16_);
          auVar95 = ZEXT1664(auVar95._0_16_);
          auVar82 = ZEXT1664(auVar82._0_16_);
          auVar93 = ZEXT1664(auVar93._0_16_);
          auVar87 = ZEXT1664(auVar87._0_16_);
          sprintf(local_2fa8,"%d x %d");
          fVar54 = (float)iVar28;
          iVar28 = iVar28 + 1;
          rStack_369c._s_0.y = auVar87._0_4_ + fVar55 * fVar54;
          rStack_369c._s_0.z = 0.0;
          rStack_369c._s_0.x = fVar88;
          bVar20 = do_text_button(param_3,param_4,(real_3 *)&rStack_369c._s_0,
                                  (real_2)0x3d4ccccd3e2e147b,local_2fa8);
          if (((ushort)bVar20 & 1) != 0) {
            settings.window_x = res_options[lVar40].field0_0x0._s_0.x;
            settings.window_y = res_options[lVar40].field0_0x0._s_0.y;
            auVar9._4_4_ = settings.window_y;
            auVar9._0_4_ = settings.window_x;
            auVar9._8_16_ = local_30a8._16_16_;
            auVar9._24_8_ = 0;
            local_30a8 = auVar9 << 0x40;
            DVar21 = GetWindowLongA((HWND)main_hwnd,-0x10);
            DVar22 = GetWindowLongA((HWND)main_hwnd,-0x14);
            AdjustWindowRectEx((LPRECT)local_30a8,DVar21,0,DVar22);
            SetWindowPos((HWND)main_hwnd,(HWND)0x0,0,0,local_30a8._8_4_ - local_30a8._0_4_,
                         local_30a8._12_4_ - local_30a8._4_4_,0x226);
            confirmation_timer = 10.0;
          }
        }
        auVar80 = auVar93._0_16_;
        auVar79 = auVar82._0_16_;
        auVar67 = auVar95._0_16_;
        auVar66 = auVar89._0_16_;
        lVar40 = lVar40 + 1;
      } while (lVar40 != 0x14);
      auVar72 = ZEXT416((uint)param_6);
      if ((dropdown_active == true) &&
         ((((param_4->pressed_buttons[0] & 2) != 0 && ((ushort)bVar19 < 0x100)) ||
          ((param_4->pressed_buttons[3] & 8) != 0)))) {
        dropdown_active = false;
        param_4->escape_blocked = true;
      }
    }
    if (settings.fullscreen == 0) {
      uVar64 = *(undefined8 *)
                ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
      (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uVar64;
      (param_3->background_color).field0_0x0._s_0.w =
           (param_3->background_color).field0_0x0._s_0.w * 0.5;
    }
    else {
      x_box.active = 0;
      y_box.active = 0;
    }
    fVar88 = auVar66._0_4_ + 0.2;
    rStack_36a8._s_0.x = fVar88 + -0.1;
    rStack_36a8._s_0.y = (float)auVar67._0_4_;
    rStack_36a8._s_0.z = 0.0;
    auVar89 = ZEXT1664(auVar66);
    auVar95 = ZEXT464((uint)fVar88);
    auVar87 = ZEXT1664(auVar67);
    auVar94 = ZEXT1664(auVar79);
    auVar91 = ZEXT1664(auVar80);
    auVar86 = ZEXT464((uint)rStack_36a8._s_0.x);
    auVar96 = ZEXT1664(auVar72);
    iVar28 = do_int_textbox(param_3,param_4,auVar72._0_4_,&x_box,(real_3 *)&rStack_36a8._s_0,
                            (real_2)0x3d23d70a3da3d70a,&settings.window_x);
    fStack_10a8.texture = pfVar4->texture;
    fStack_10a8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_10a8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_10a8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_10a8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_10a8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_10a8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_10a8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_10a8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_10a8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_10a8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_10a8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_10a8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_10a8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_10a8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_10a8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_10a8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_10a8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_10a8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_10a8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_10a8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_10a8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_10a8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_10a8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_10a8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_10a8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_10a8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_10a8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_10a8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_10a8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_10a8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_10a8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_10a8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_10a8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_10a8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_10a8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_31c8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_31c8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT1664(auVar89._0_16_);
    auVar82 = ZEXT1664(auVar95._0_16_);
    auVar93 = ZEXT1664(auVar87._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    auVar91 = ZEXT1664(auVar91._0_16_);
    auVar86 = ZEXT1664(auVar86._0_16_);
    auVar96 = ZEXT1664(auVar96._0_16_);
    draw_text("x",auVar95._0_4_,auVar87._0_4_,(real_4 *)&rStack_31c8._s_0,(real_2)0x0,&fStack_10a8,
              &default_shadow);
    rStack_36b4._s_0.x = auVar82._0_4_ + 0.1;
    auVar95 = ZEXT464((uint)rStack_36b4._s_0.x);
    rStack_36b4._s_0.y = (float)auVar93._0_4_;
    rStack_36b4._s_0.z = 0.0;
    iVar30 = do_int_textbox(param_3,param_4,auVar96._0_4_,&y_box,(real_3 *)&rStack_36b4._s_0,
                            (real_2)0x3d23d70a3da3d70a,&settings.window_y);
    if (iVar28 == 3) {
      y_box.active = 1;
      y_box.selection_start = 0;
      y_box.selection_end = 0;
      strlen();
      iVar28 = 3;
      iVar30 = 1;
      y_box.cursor = extraout_EAX_47;
    }
    else if (iVar30 == 3) {
      x_box.active = 1;
      x_box.selection_start = 0;
      x_box.selection_end = 0;
      strlen();
      iVar28 = 1;
      iVar30 = 3;
      x_box.cursor = extraout_EAX_48;
    }
    fVar88 = auVar93._0_4_;
    if ((settings.fullscreen == 0) && ((iVar30 != 1 && iVar28 == 2 || (iVar28 != 1 && iVar30 == 2)))
       ) {
      local_2fa8._0_4_ = 0.0;
      local_2fa8._4_4_ = 0.0;
      local_2fa8._8_4_ = settings.window_x;
      local_2fa8._12_4_ = settings.window_y;
      DVar21 = GetWindowLongA((HWND)main_hwnd,-0x10);
      DVar22 = GetWindowLongA((HWND)main_hwnd,-0x14);
      AdjustWindowRectEx((LPRECT)local_2fa8,DVar21,0,DVar22);
      SetWindowPos((HWND)main_hwnd,(HWND)0x0,0,0,local_2fa8._8_4_ - local_2fa8._0_4_,
                   local_2fa8._12_4_ - local_2fa8._4_4_,0x226);
      fVar88 = auVar93._0_4_;
      confirmation_timer = 10.0;
    }
    (prVar1->field0_0x0).xy.field0_0x0 = local_39a8;
    *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39a0;
    (prVar2->field0_0x0).xy.field0_0x0 = local_39d8;
    *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39d0;
    (prVar3->field0_0x0).xy.field0_0x0 = local_39b8;
    *(undefined8 *)((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39b0;
    if (dropdown_active == true) {
      (prVar1->field0_0x0).xy.field0_0x0 = local_39b8;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uStack_39b0;
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    auVar87 = ZEXT464((uint)(fVar88 + -0.07));
    uStack_10c8._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_10c8._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_10c0 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_10b8 = (param_3->field29_0x128).font_infos[1].char_data;
    auStack_1168._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    auStack_1168._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_10e0 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_10d8._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_10d8._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    puStack_10d0 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    auStack_1168._0_4_ = pfVar4->texture;
    auStack_1168._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    auStack_1168._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    auStack_1168._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    auStack_1168._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    auStack_1168._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    auStack_1168._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    auStack_1168._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    auStack_1168._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    auStack_1168._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    auStack_1168._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    auStack_1168._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    auStack_1168._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    auStack_1168._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    auStack_1168._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    auStack_1168._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    auStack_1168._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    auStack_1168._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    auStack_1168._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    auStack_1168._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    auStack_1168._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    rStack_31d8._8_8_ = uStack_39d0;
    rStack_31d8.xy.field0_0x0 = (real_2)(real_2)local_39d8;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xca35c990U % uVar29;
    do {
      auVar58 = auVar95._0_16_;
      auVar61 = auVar86._0_16_;
      auVar70 = auVar91._0_16_;
      auVar81 = auVar94._0_16_;
      auVar60 = auVar82._0_16_;
      auVar65 = auVar87._0_16_;
      auVar56 = auVar89._0_16_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x00014005f527;
      auVar89 = ZEXT1664(auVar56);
      auVar82 = ZEXT1664(auVar60);
      auVar87 = ZEXT1664(auVar65);
      auVar94 = ZEXT1664(auVar81);
      auVar91 = ZEXT1664(auVar70);
      auVar86 = ZEXT1664(auVar61);
      auVar95 = ZEXT1664(auVar58);
      strcmp();
      auVar58 = auVar95._0_16_;
      auVar61 = auVar86._0_16_;
      auVar70 = auVar91._0_16_;
      auVar81 = auVar94._0_16_;
      auVar60 = auVar82._0_16_;
      auVar65 = auVar87._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_49 == 0) goto code_r0x00014005f527;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xca35c990U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005f527:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    auVar93 = ZEXT1664(auVar70);
    auVar94 = ZEXT1664(auVar61);
    auVar91 = ZEXT1664(auVar58);
    draw_text(pcVar51,auVar56._0_4_,auVar65._0_4_,(real_4 *)&rStack_31d8._s_0,(real_2)0x3f800000,
              (font_info *)auStack_1168,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0x8934cbbbU % uVar29;
    do {
      rStack_36c0._s_0.x = (float)auVar93._0_4_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x00014005f5f4;
      strcmp();
      rStack_36c0._s_0.x = (float)auVar93._0_4_;
      if (extraout_EAX_50 == 0) goto code_r0x00014005f5f4;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0x8934cbbbU % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005f5f4:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_36c0._s_0.y = (float)auVar82._0_4_;
    rStack_36c0._s_0.z = 0.0;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_36c0._s_0,(real_2)0x3d0f5c293e19999a,
                            pcVar51);
    if (((ushort)bVar19 & 1) != 0) {
      dropdown_active = (bool)(dropdown_active ^ 1);
    }
    local_2fa8._4_4_ = 0.0;
    local_2fa8._8_4_ = 0.0;
    local_2fa8._12_4_ = 0.0;
    local_2fa8._16_4_ = 0.0;
    local_2fa8._20_4_ = 0.0;
    local_2fa8._24_8_ = (real_2_u_0)0x0;
    local_2fa8._32_4_ = 0.0;
    local_2fa8._36_4_ = 0.0;
    local_2fa8._0_4_ = 5.60519e-44;
    auVar89 = ZEXT1664(auVar89._0_16_);
    auVar95 = ZEXT1664(auVar95._0_16_);
    auVar82 = ZEXT1664(auVar82._0_16_);
    auVar87 = ZEXT1664(auVar87._0_16_);
    auVar93 = ZEXT1664(auVar94._0_16_);
    auVar94 = ZEXT1664(auVar91._0_16_);
    pHVar25 = MonitorFromWindow((HWND)main_hwnd,1);
    GetMonitorInfoA(pHVar25,(LPMONITORINFO)local_2fa8);
    auVar10 = vperm2f128_avx(res_options._72_32_,res_options._104_32_,0x31);
    auVar75._16_16_ = res_options._104_16_;
    auVar75._0_16_ = res_options._72_16_;
    auVar63 = vshufps_avx(auVar75,auVar10,0x88);
    auVar11 = vperm2f128_avx(res_options._8_32_,res_options._40_32_,0x31);
    auVar62._16_16_ = res_options._40_16_;
    auVar62._0_16_ = res_options._8_16_;
    auVar9 = vshufps_avx(auVar62,auVar11,0x88);
    auVar10 = vshufps_avx(auVar75,auVar10,0xdd);
    auVar11 = vshufps_avx(auVar62,auVar11,0xdd);
    auVar79._8_8_ = 0;
    auVar79._0_8_ = CONCAT44(max_resolution.field0_0x0._s_0.y,max_resolution.field0_0x0._s_0.x);
    auVar61 = vpshufd_avx(auVar79,0x44);
    auVar81 = vpshufd_avx(auVar79,0);
    auVar56 = vpcmpgtd_avx(auVar9._0_16_,auVar81);
    auVar60 = vpcmpgtd_avx(auVar9._16_16_,auVar81);
    auVar65 = vpcmpgtd_avx(auVar63._0_16_,auVar81);
    auVar81 = vpcmpgtd_avx(auVar63._16_16_,auVar81);
    auVar80._8_8_ = 0;
    auVar80._0_8_ = CONCAT44(max_resolution.field0_0x0._s_0.y,max_resolution.field0_0x0._s_0.x);
    auVar58 = vpshufd_avx(auVar80,0x55);
    auVar70 = vpcmpgtd_avx(auVar11._0_16_,auVar58);
    auVar70 = vpor_avx(auVar56,auVar70);
    auVar56 = vpcmpgtd_avx(auVar11._16_16_,auVar58);
    auVar56 = vpor_avx(auVar56,auVar60);
    auVar56 = vpackssdw_avx(auVar70,auVar56);
    auVar60 = vpcmpgtd_avx(auVar10._0_16_,auVar58);
    auVar65 = vpor_avx(auVar65,auVar60);
    auVar60 = vpcmpgtd_avx(auVar10._16_16_,auVar58);
    auVar60 = vpor_avx(auVar60,auVar81);
    auVar60 = vpackssdw_avx(auVar65,auVar60);
    auVar56 = vpacksswb_avx(auVar56,auVar60);
    auVar60 = vpcmpgtd_avx(res_options._144_16_,auVar61);
    uVar39 = vmovmskps_avx(auVar60);
    iVar28 = (uint)((uVar39 & 3) == 0) + (uint)((uVar39 & 0xc) == 0) +
             POPCOUNT((ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff) +
             (uint)((int)res_options[0x11].field0_0x0._4_4_ <= max_resolution.field0_0x0._s_0.y &&
                   (int)res_options[0x11].field0_0x0._0_4_ <= max_resolution.field0_0x0._s_0.x);
    if (iVar28 == 0) {
      dropdown_active = false;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc) < iRam00000001401fa0f0) {
      auVar89 = ZEXT1664(auVar89._0_16_);
      auVar95 = ZEXT1664(auVar95._0_16_);
      auVar82 = ZEXT1664(auVar82._0_16_);
      auVar87 = ZEXT1664(auVar87._0_16_);
      auVar93 = ZEXT1664(auVar93._0_16_);
      auVar94 = ZEXT1664(auVar94._0_16_);
      _Init_thread_header(&iRam00000001401fa0f0);
      if (iRam00000001401fa0f0 == -1) {
        new_resolution_x = settings.resolution_x;
        _Init_thread_footer(&iRam00000001401fa0f0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc) < iRam00000001401fa0f8) {
      auVar89 = ZEXT1664(auVar89._0_16_);
      auVar95 = ZEXT1664(auVar95._0_16_);
      auVar82 = ZEXT1664(auVar82._0_16_);
      auVar87 = ZEXT1664(auVar87._0_16_);
      auVar93 = ZEXT1664(auVar93._0_16_);
      auVar94 = ZEXT1664(auVar94._0_16_);
      _Init_thread_header(&iRam00000001401fa0f8);
      if (iRam00000001401fa0f8 == -1) {
        new_resolution_y = settings.resolution_y;
        _Init_thread_footer(&iRam00000001401fa0f8);
      }
    }
    rStack_36d8._s_0.x = (float)auVar93._0_4_;
    auVar70 = auVar94._0_16_;
    auVar81 = auVar87._0_16_;
    auVar60 = auVar95._0_16_;
    auVar56 = auVar89._0_16_;
    auVar65 = auVar82._0_16_;
    if (dropdown_active == true) {
      auVar56 = vmaxss_avx(ZEXT416((uint)max_gui_x),ZEXT416(0x3f87ae14));
      auVar86 = ZEXT464((uint)(auVar89._0_4_ + 0.89));
      max_gui_x = auVar56._0_4_;
      auVar56 = vmaxss_avx(ZEXT416((uint)((float)iVar28 * 0.05 + -0.3)),
                           ZEXT416((uint)((float)iVar28 * 0.1 + -0.93)));
      auVar91 = ZEXT1664(auVar56);
      iVar28 = 0;
      rVar34 = (real_2_u_0)0x3f8000003f800000;
      fVar88 = -0.1;
      lVar40 = 0;
      do {
        iVar30 = res_options[lVar40].field0_0x0._s_0.x;
        if ((iVar30 <= max_resolution.field0_0x0._s_0.x) &&
           (iVar7 = res_options[lVar40].field0_0x0._s_0.y, iVar7 <= max_resolution.field0_0x0._s_0.y
           )) {
          fVar55 = menu_alpha *
                   *(float *)(&__real_3dcccccd3ccccccd +
                             (ulonglong)
                             (iVar7 == settings.resolution_y && iVar30 == settings.resolution_x) * 4
                             );
          (param_3->background_color).field0_0x0.xy.field0_0x0 = rVar34;
          (param_3->background_color).field0_0x0._s_0.z = 1.0;
          (param_3->background_color).field0_0x0._s_0.w = fVar55;
          auVar89 = ZEXT1664(auVar89._0_16_);
          auVar95 = ZEXT1664(auVar95._0_16_);
          auVar82 = ZEXT1664(auVar82._0_16_);
          auVar87 = ZEXT1664(auVar87._0_16_);
          auVar91 = ZEXT1664(auVar91._0_16_);
          auVar86 = ZEXT1664(auVar86._0_16_);
          auVar93 = ZEXT1664(auVar93._0_16_);
          auVar94 = ZEXT1664(auVar94._0_16_);
          sprintf(local_2fa8,"%d x %d");
          rStack_36cc._s_0.x = (float)auVar86._0_4_;
          fVar55 = (float)iVar28;
          iVar28 = iVar28 + 1;
          rStack_36cc._s_0.y = auVar91._0_4_ + fVar55 * fVar88;
          rStack_36cc._s_0.z = 0.0;
          bVar20 = do_text_button(param_3,param_4,(real_3 *)&rStack_36cc._s_0,
                                  (real_2)0x3d4ccccd3e2e147b,local_2fa8);
          if (((ushort)bVar20 & 1) != 0) {
            settings.resolution_x = res_options[lVar40].field0_0x0._s_0.x;
            settings.resolution_y = res_options[lVar40].field0_0x0._s_0.y;
            new_resolution_x = settings.resolution_x;
            new_resolution_y = settings.resolution_y;
            reinit_gl_context(local_39c8);
            confirmation_timer = 10.0;
          }
        }
        rStack_36d8._s_0.x = (float)auVar93._0_4_;
        auVar70 = auVar94._0_16_;
        auVar81 = auVar87._0_16_;
        auVar60 = auVar95._0_16_;
        auVar56 = auVar89._0_16_;
        auVar65 = auVar82._0_16_;
        lVar40 = lVar40 + 1;
      } while (lVar40 != 0x14);
      if ((dropdown_active == true) &&
         ((((param_4->pressed_buttons[0] & 2) != 0 && ((ushort)bVar19 < 0x100)) ||
          ((param_4->pressed_buttons[3] & 8) != 0)))) {
        dropdown_active = false;
        param_4->escape_blocked = true;
      }
    }
    else {
      next_gui_element = next_gui_element + iVar28;
    }
    uVar64 = *(undefined8 *)
              ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
    *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uVar64;
    (param_3->background_color).field0_0x0._s_0.w =
         (param_3->background_color).field0_0x0._s_0.w * 0.5;
    rStack_36d8._s_0.y = (float)auVar65._0_4_;
    rStack_36d8._s_0.z = 0.0;
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar93 = ZEXT1664(auVar81);
    auVar94 = ZEXT1664(auVar70);
    auVar91 = ZEXT464((uint)param_6);
    iVar28 = do_int_textbox(param_3,param_4,param_6,&x_box,(real_3 *)&rStack_36d8._s_0,
                            (real_2)0x3d23d70a3da3d70a,&new_resolution_x);
    fStack_1228.texture = pfVar4->texture;
    fStack_1228._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1228.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1228.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1228.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1228.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1228.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1228.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1228.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1228.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1228.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1228.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1228.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1228.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1228.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1228.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1228.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1228.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1228.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1228.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1228.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1228.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1228.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1228.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1228.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1228.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_1228.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1228.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1228.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1228.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1228.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1228.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1228.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1228.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1228._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1228.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_31e8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_31e8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    auVar91 = ZEXT1664(auVar91._0_16_);
    draw_text("x",auVar95._0_4_,auVar82._0_4_,(real_4 *)&rStack_31e8._s_0,(real_2)0x0,&fStack_1228,
              &default_shadow);
    rStack_36e4._s_0.x = (float)auVar94._0_4_;
    rStack_36e4._s_0.y = (float)auVar87._0_4_;
    rStack_36e4._s_0.z = 0.0;
    iVar30 = do_int_textbox(param_3,param_4,auVar91._0_4_,&y_box,(real_3 *)&rStack_36e4._s_0,
                            (real_2)0x3d23d70a3da3d70a,&new_resolution_y);
    fVar88 = auVar89._0_4_;
    fVar55 = auVar87._0_4_;
    if (iVar28 == 3) {
      y_box.active = 1;
      y_box.selection_start = 0;
      y_box.selection_end = 0;
      strlen();
      fVar88 = auVar89._0_4_;
      fVar55 = auVar87._0_4_;
      y_box.cursor = extraout_EAX_51;
code_r0x00014005fc0a:
      iVar30 = 1;
      iVar28 = 3;
    }
    else {
      if (iVar30 == 3) {
        x_box.active = 1;
        x_box.selection_start = 0;
        x_box.selection_end = 0;
        strlen();
        fVar88 = auVar89._0_4_;
        fVar55 = auVar87._0_4_;
        x_box.cursor = extraout_EAX_52;
        goto code_r0x00014005fc0a;
      }
      if (((iVar28 == 2 && iVar30 != 1) || (iVar28 != 1 && iVar30 == 2)) &&
         ((new_resolution_x != settings.resolution_x || (new_resolution_y != settings.resolution_y))
         )) {
        settings.resolution_x = new_resolution_x;
        settings.resolution_y = new_resolution_y;
        if (new_resolution_x < 1) {
          settings.resolution_x = 0x500;
        }
        if (new_resolution_y < 1) {
          settings.resolution_y = 0x2d0;
        }
        reinit_gl_context(local_39c8);
        fVar88 = auVar89._0_4_;
        fVar55 = auVar87._0_4_;
        confirmation_timer = 10.0;
      }
    }
    if (iVar28 == 0 && iVar30 == 0) {
      new_resolution_x = settings.resolution_x;
      new_resolution_y = settings.resolution_y;
    }
    (prVar1->field0_0x0).xy.field0_0x0 = local_39a8;
    *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39a0;
    (prVar2->field0_0x0).xy.field0_0x0 = local_39d8;
    *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39d0;
    (prVar3->field0_0x0).xy.field0_0x0 = local_39b8;
    *(undefined8 *)((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39b0;
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_12e8.texture = pfVar4->texture;
    fStack_12e8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_12e8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_12e8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_12e8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_12e8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_12e8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_12e8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_12e8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_12e8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_12e8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_12e8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_12e8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_12e8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_12e8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_12e8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_12e8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_12e8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_12e8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_12e8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_12e8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_12e8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_12e8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_12e8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_12e8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_12e8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_12e8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_12e8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_12e8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_12e8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_12e8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_12e8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_12e8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_12e8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_12e8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_12e8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    auVar95 = ZEXT464((uint)(fVar55 + -0.07));
    auVar82 = ZEXT464((uint)(fVar88 + -0.1));
    rStack_31f8.xy.field0_0x0 = (real_2)(real_2)local_39d8;
    rStack_31f8._8_8_ = uStack_39d0;
    auVar89 = ZEXT464((uint)(fVar88 + -0.1 + -0.02));
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xff52f513U % uVar29;
    do {
      auVar81 = auVar91._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar95._0_16_;
      fVar88 = auVar89._0_4_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x00014005fd57;
      auVar89 = ZEXT1664(auVar89._0_16_);
      auVar95 = ZEXT1664(auVar56);
      auVar82 = ZEXT1664(auVar60);
      auVar93 = ZEXT1664(auVar65);
      auVar91 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar91._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar95._0_16_;
      fVar88 = auVar89._0_4_;
      if (extraout_EAX_53 == 0) goto code_r0x00014005fd57;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xff52f513U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005fd57:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar82 = ZEXT1664(auVar60);
    auVar93 = ZEXT1664(auVar65);
    auVar94 = ZEXT1664(auVar81);
    draw_text(pcVar51,fVar88,auVar56._0_4_,(real_4 *)&rStack_31f8._s_0,(real_2)0x3f800000,
              &fStack_12e8,&default_shadow);
    rStack_36f0._s_0.x = auVar82._0_4_ + 0.32000002;
    rStack_36f0._s_0.y = (float)auVar89._0_4_;
    rStack_36f0._s_0.z = 0.0;
    bVar19 = do_slider(param_3,param_4,(real_3 *)&rStack_36f0._s_0,(real_2)0x3cf5c28f3e99999a,
                       &settings.brightness,0.1,2.0);
    sprintf(local_2fa8,"%.2f");
    fStack_13a8.texture = pfVar4->texture;
    fStack_13a8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_13a8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_13a8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_13a8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_13a8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_13a8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_13a8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_13a8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_13a8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_13a8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_13a8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_13a8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_13a8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_13a8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_13a8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_13a8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_13a8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_13a8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_13a8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_13a8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_13a8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_13a8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_13a8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_13a8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_13a8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_13a8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_13a8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_13a8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_13a8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_13a8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_13a8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_13a8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_13a8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_13a8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_13a8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3208.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3208._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    draw_text(local_2fa8,auVar82._0_4_ + 0.6 + 0.04,auVar89._0_4_,(real_4 *)&rStack_3208._s_0,
              (real_2)0xbf800000,&fStack_13a8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((param_4->active_ui_element == &settings.brightness) || (0xff < (ushort)bVar19)) &&
       (DAT_1401fa094 = '\x01', param_4->active_ui_element == &settings.brightness)) {
      auVar56 = vandps_avx(ZEXT416((uint)(settings.brightness * 100.0)),
                           ___xmm_80000000800000008000000080000000);
      auVar72._8_4_ = 0x3effffff;
      auVar72._0_8_ = 0x3effffff3effffff;
      auVar72._12_4_ = 0x3effffff;
      auVar56 = vorps_avx(auVar56,auVar72);
      auVar56 = ZEXT416((uint)(settings.brightness * 100.0 + auVar56._0_4_));
      auVar56 = vroundss_avx(auVar56,auVar56,0xb);
      settings.brightness = auVar56._0_4_ * 0.01;
    }
    fStack_1468.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1468.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1468._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1468.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1468.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1468.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1468.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1468.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1468.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1468.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1468.texture = pfVar4->texture;
    fStack_1468._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1468.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1468.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1468.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1468.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1468.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1468.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1468.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1468.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1468.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1468.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1468.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1468.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1468.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1468.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1468.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1468.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1468.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1468.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1468.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1468.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1468.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1468.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1468.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1468.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3218.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3218._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT464((uint)(auVar95._0_4_ + -0.07));
    fVar88 = auVar87._0_4_ + 0.1 + -0.1;
    auVar82 = ZEXT464((uint)fVar88);
    auVar95 = ZEXT464((uint)(fVar88 + -0.02));
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0x8b51952aU % uVar29;
    do {
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar89._0_16_;
      fVar88 = auVar95._0_4_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x000140060057;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar95._0_16_);
      auVar82 = ZEXT1664(auVar60);
      auVar93 = ZEXT1664(auVar65);
      auVar94 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar89._0_16_;
      fVar88 = auVar95._0_4_;
      if (extraout_EAX_54 == 0) goto code_r0x000140060057;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0x8b51952aU % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140060057:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar82 = ZEXT1664(auVar60);
    auVar93 = ZEXT1664(auVar65);
    auVar94 = ZEXT1664(auVar81);
    draw_text(pcVar51,fVar88,auVar56._0_4_,(real_4 *)&rStack_3218._s_0,(real_2)0x3f800000,
              &fStack_1468,&default_shadow);
    rStack_36fc._s_0.x = auVar82._0_4_ + 0.32000002;
    rStack_36fc._s_0.y = (float)auVar89._0_4_;
    rStack_36fc._s_0.z = 0.0;
    bVar19 = do_slider(param_3,param_4,(real_3 *)&rStack_36fc._s_0,(real_2)0x3cf5c28f3e99999a,
                       &settings.contrast,0.9,1.1);
    sprintf(local_2fa8,"%+.1f%%");
    fStack_1528.texture = pfVar4->texture;
    fStack_1528._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1528.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1528.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1528.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1528.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1528.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1528.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1528.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1528.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1528.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1528.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1528.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1528.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1528.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1528.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1528.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1528.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1528.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1528.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1528.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1528.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1528.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1528.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1528.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1528.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_1528.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1528.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1528.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1528.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1528.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1528.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1528.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1528.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1528._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1528.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3228.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3228._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    draw_text(local_2fa8,auVar82._0_4_ + 0.6 + 0.04,auVar89._0_4_,(real_4 *)&rStack_3228._s_0,
              (real_2)0xbf800000,&fStack_1528,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((param_4->active_ui_element == &settings.contrast) || (0xff < (ushort)bVar19)) &&
       (DAT_1401fa094 = '\x01', param_4->active_ui_element == &settings.contrast)) {
      auVar56 = vandps_avx(ZEXT416((uint)(settings.contrast * 1000.0)),
                           ___xmm_80000000800000008000000080000000);
      auVar73._8_4_ = 0x3effffff;
      auVar73._0_8_ = 0x3effffff3effffff;
      auVar73._12_4_ = 0x3effffff;
      auVar56 = vorps_avx(auVar56,auVar73);
      auVar56 = ZEXT416((uint)(settings.contrast * 1000.0 + auVar56._0_4_));
      auVar56 = vroundss_avx(auVar56,auVar56,0xb);
      settings.contrast = auVar56._0_4_ * 0.001;
    }
    pcVar51 = "menu_replay_recorder_on";
    if (settings.replay_recorder == 0) {
      pcVar51 = "menu_replay_recorder_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = auVar87._0_4_ + 0.1;
    fVar55 = auVar95._0_4_ + -0.07;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_55 == 0))
      goto code_r0x000140060324;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140060324:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3708._s_0.z = 0.0;
    rStack_3708._s_0.x = fVar88;
    rStack_3708._s_0.y = fVar55;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3708._s_0,(real_2)0x3d0f5c293ecccccd,
                            pcVar51);
    if (((ushort)bVar19 & 1) != 0) {
      bVar52 = settings.replay_recorder == 0;
      settings.replay_recorder = (uint)bVar52;
      if (bVar52) {
        init_recording_buffer(param_5,(int_2)settings._180_8_,settings.gif_frames);
      }
      else {
        glDeleteTextures(param_5->n_textures,param_5->textures);
        (*glDeleteFramebuffers)(1,&param_5->frame_buffer);
        free(param_5->textures);
        free(param_5->data);
        auVar63 = ZEXT1232(ZEXT812(0));
        param_5->resolution = (int_2)auVar63._0_8_;
        param_5->buffer_length = auVar63._8_4_;
        param_5->current_frame = auVar63._12_4_;
        param_5->n_frames = auVar63._16_4_;
        param_5->initialized = (bool)auVar63[0x14];
        *(int3 *)&param_5->field_0x35 = auVar63._21_3_;
        param_5->centiseconds = (float)auVar63._24_4_;
        *(int *)&param_5->field_0x3c = auVar63._28_4_;
        param_5->frame_buffer = auVar63._0_4_;
        *(int *)&param_5->field_0x4 = auVar63._4_4_;
        param_5->textures = (uint *)auVar63._8_8_;
        param_5->n_textures = auVar63._16_4_;
        *(int *)&param_5->field_0x14 = auVar63._20_4_;
        param_5->data = (uint8_4 *)auVar63._24_8_;
      }
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    auVar89 = ZEXT464((uint)(fVar55 + -0.07));
    auVar95 = ZEXT464((uint)(fVar88 + -0.1));
    uVar29 = 0x399a67db % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar93 = ZEXT1664(auVar65);
      auVar94 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_82 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar82 = ZEXT1664(auVar60);
    auVar93 = ZEXT1664(auVar65);
    auVar94 = ZEXT1664(auVar81);
    sprintf(local_30a8,pcVar51);
    fStack_15e8.texture = pfVar4->texture;
    fStack_15e8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_15e8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_15e8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_15e8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_15e8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_15e8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_15e8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_15e8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_15e8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_15e8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_15e8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_15e8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_15e8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_15e8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_15e8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_15e8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_15e8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_15e8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_15e8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_15e8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_15e8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_15e8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_15e8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_15e8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_15e8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_15e8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_15e8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_15e8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_15e8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_15e8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_15e8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_15e8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_15e8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_15e8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_15e8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3238.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3238._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    draw_text(local_30a8,auVar82._0_4_ + -0.02,auVar89._0_4_,(real_4 *)&rStack_3238._s_0,
              (real_2)0x3f800000,&fStack_15e8,&default_shadow);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc) < iRam00000001401fa110) &&
       (_Init_thread_header(&iRam00000001401fa110), iRam00000001401fa110 == -1)) {
      replay_slider = (float)settings.gif_frames;
      _Init_thread_footer(&iRam00000001401fa110);
    }
    rStack_3714._s_0.x = auVar87._0_4_ + 0.32000002;
    rStack_3714._s_0.y = (float)auVar95._0_4_;
    rStack_3714._s_0.z = 0.0;
    do_slider(param_3,param_4,(real_3 *)&rStack_3714._s_0,(real_2)0x3cf5c28f3e99999a,&replay_slider,
              1.0,1800.0);
    fVar55 = auVar95._0_4_;
    fVar88 = auVar87._0_4_;
    if (param_4->active_ui_element == &replay_slider) {
      settings.gif_frames = (int)replay_slider;
    }
    else {
      replay_slider = (float)settings.gif_frames;
      if ((settings.replay_recorder != 0) && (settings.gif_frames != param_5->n_textures)) {
        init_recording_buffer(param_5,(int_2)settings._180_8_,settings.gif_frames);
        fVar55 = auVar95._0_4_;
        fVar88 = auVar87._0_4_;
      }
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    pcVar51 = "menu_background_effects_on";
    if (settings.background_effects == 0) {
      pcVar51 = "menu_background_effects_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + 0.1;
    fVar55 = fVar55 + -0.07;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_83 == 0))
      goto code_r0x000140062a84;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140062a84:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3720._s_0.z = 0.0;
    rStack_3720._s_0.x = fVar88;
    rStack_3720._s_0.y = fVar55;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3720._s_0,(real_2)0x3d0f5c293ecccccd,
                            pcVar51);
    if (((ushort)bVar19 & 1) != 0) {
      settings.background_effects = (uint)(settings.background_effects == 0);
      gl_init_wall_shader();
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    pcVar51 = "menu_reflections_on";
    if (settings.reflections == 0) {
      pcVar51 = "menu_reflections_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar55 = fVar55 + -0.07;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_84 == 0))
      goto code_r0x000140062bc4;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140062bc4:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_372c._s_0.z = 0.0;
    rStack_372c._s_0.x = fVar88;
    rStack_372c._s_0.y = fVar55;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_372c._s_0,(real_2)0x3d0f5c293ecccccd,
                            pcVar51);
    if (((ushort)bVar19 & 1) != 0) {
      settings.reflections = (uint)(settings.reflections == 0);
      gl_init_wall_shader();
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    pcVar51 = "menu_distortions_on";
    if (settings.distortions == 0) {
      pcVar51 = "menu_distortions_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar55 = fVar55 + -0.07;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_85 == 0))
      goto code_r0x000140062d04;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140062d04:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3738._s_0.z = 0.0;
    rStack_3738._s_0.x = fVar88;
    rStack_3738._s_0.y = fVar55;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3738._s_0,(real_2)0x3d0f5c293ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.distortions = (uint)(settings.distortions == 0);
    }
    pcVar51 = "menu_limit_particles_on";
    if (settings.limit_particles == 0) {
      pcVar51 = "menu_limit_particles_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar55 = fVar55 + -0.07;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_86 == 0))
      goto code_r0x000140062e44;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140062e44:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3744._s_0.z = 0.0;
    rStack_3744._s_0.x = fVar88;
    rStack_3744._s_0.y = fVar55;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3744._s_0,(real_2)0x3d0f5c293ecccccd,
                            pcVar51);
    if (((ushort)bVar19 & 1) != 0) {
      settings.limit_particles = (uint)(settings.limit_particles == 0);
    }
    if (settings.limit_particles == 0) {
      fVar54 = (param_3->foreground_color).field0_0x0._s_0.z;
      uVar64 = *(undefined8 *)&(param_3->foreground_color).field0_0x0;
      auVar69._0_4_ = (float)uVar64 * 0.05;
      auVar69._4_4_ = (float)((ulonglong)uVar64 >> 0x20) * 0.05;
      auVar69._8_8_ = 0;
      rVar34 = (real_2_u_0)vmovlps_avx(auVar69);
      (param_3->foreground_color).field0_0x0.xy.field0_0x0 = rVar34;
      (param_3->foreground_color).field0_0x0._s_0.z = fVar54 * 0.05;
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_39e4 = (float)settings.max_particles;
    fVar55 = fVar55 + -0.07;
    uVar29 = 0x373de163 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      uVar47 = (ulonglong)(int)uVar48;
      if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_87 == 0)) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    sprintf(acStack_1e8,pcVar51);
    fStack_16a8.texture = pfVar4->texture;
    fStack_16a8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_16a8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_16a8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_16a8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_16a8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_16a8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_16a8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_16a8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_16a8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_16a8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_16a8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_16a8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_16a8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_16a8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_16a8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_16a8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_16a8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_16a8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_16a8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_16a8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_16a8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_16a8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_16a8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_16a8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_16a8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_16a8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_16a8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_16a8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_16a8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_16a8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_16a8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_16a8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_16a8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_16a8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_16a8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3248.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3248._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT1664(auVar93._0_16_);
    auVar95 = ZEXT1664(auVar94._0_16_);
    draw_text(acStack_1e8,fVar88 + -0.02,fVar55,(real_4 *)&rStack_3248._s_0,(real_2)0x3f800000,
              &fStack_16a8,&default_shadow);
    rStack_3750._s_0.x = fVar88 + 0.32000002;
    rStack_3750._s_0.z = 0.0;
    rStack_3750._s_0.y = fVar55;
    do_slider(param_3,param_4,(real_3 *)&rStack_3750._s_0,(real_2)0x3cf5c28f3e99999a,&fStack_39e4,
              100.0,10000.0);
    auVar60 = auVar95._0_16_;
    auVar56 = auVar89._0_16_;
    settings.max_particles = (uint)(longlong)fStack_39e4;
    (prVar2->field0_0x0).xy.field0_0x0 = local_39d8;
    *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39d0;
    break;
  case 2:
    auVar89 = ZEXT464((uint)DAT_1401fa0c8);
    uVar64 = *(undefined8 *)
              ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
    *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uVar64;
    fVar55 = auVar95._0_4_;
    if (cRam00000001401fa114 == '\0') {
      fVar55 = (fVar55 + fVar55) * (param_3->background_color).field0_0x0._s_0.w;
    }
    else {
      fVar55 = fVar55 * (param_3->background_color).field0_0x0._s_0.w;
    }
    fVar88 = fVar88 + -0.24000001;
    (param_3->background_color).field0_0x0._s_0.w = fVar55;
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    uVar29 = 0x61e38b33 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      strcmp();
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_19 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar58._0_12_ = ZEXT812(0);
    auVar58._12_4_ = 0;
    auVar56 = vblendps_avx(auVar58,auVar56,1);
    auVar89 = ZEXT1664(auVar56);
    rStack_34e0._s_2.yz.field0_0x0 = (real_2)vmovlps_avx(auVar56);
    rStack_34e0._s_0.x = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_34e0._s_0,(real_2)0x3d4ccccd3e4ccccd,
                            pcVar51);
    cVar5 = cRam00000001401fa114;
    fVar55 = auVar95._0_4_;
    if (((ushort)bVar19 & 1) == 0) {
      uVar64 = *(undefined8 *)
                ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
      (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uVar64;
      if (cVar5 != '\x01') goto code_r0x00014005dcaa;
      fVar55 = (fVar55 + fVar55) * (param_3->background_color).field0_0x0._s_0.w;
    }
    else {
      cRam00000001401fa114 = '\0';
      uVar64 = *(undefined8 *)
                ((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4);
      (prVar1->field0_0x0).xy.field0_0x0 = (prVar3->field0_0x0).xy.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uVar64;
code_r0x00014005dcaa:
      fVar55 = fVar55 * (param_3->background_color).field0_0x0._s_0.w;
    }
    fVar88 = fVar88 + 0.42000002;
    (param_3->background_color).field0_0x0._s_0.w = fVar55;
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xa1128b33U % uVar29;
    do {
      auVar56 = auVar89._0_16_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x00014005dd2b;
      strcmp();
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_37 == 0) goto code_r0x00014005dd2b;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xa1128b33U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005dd2b:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_34ec._s_2.yz.field0_0x0 = (real_2)vmovlps_avx(auVar56);
    rStack_34ec._s_0.x = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_34ec._s_0,(real_2)0x3d4ccccd3e4ccccd,
                            pcVar51);
    if (((ushort)bVar19 & 1) == 0) {
      bVar52 = cRam00000001401fa114 != '\0';
      (prVar1->field0_0x0).xy.field0_0x0 = local_39a8;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uStack_39a0;
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = DAT_1401fa0c8 + -0.11;
      if (bVar52) goto code_r0x00014005dfd0;
      rStack_375c._s_0.x = DAT_1401fa0c4;
      rStack_375c._s_0.z = 0.0;
      uVar29 = 0x1bbf9af4 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      fVar55 = DAT_1401fa0c4;
      rStack_375c._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_66 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_375c._s_0,
                         (real_2)0x3cf5c28f3f000000,settings.field3_0xc.buttons);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3768._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0x842f56f4U % uVar29;
      rStack_3768._s_0.x = fVar55;
      rStack_3768._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_95 == 0))
        goto code_r0x0001400649bb;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0x842f56f4U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x0001400649bb:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3768._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.backward);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3774._s_0.z = 0.0;
      uVar29 = 0x41f55184 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_3774._s_0.x = fVar55;
      rStack_3774._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_96 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3774._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.left);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3780._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xc2636db8U % uVar29;
      rStack_3780._s_0.x = fVar55;
      rStack_3780._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_97 == 0))
        goto code_r0x000140064b8b;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xc2636db8U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x000140064b8b:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3780._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.right);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_378c._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xab10de1aU % uVar29;
      rStack_378c._s_0.x = fVar55;
      rStack_378c._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_98 == 0))
        goto code_r0x000140064c7b;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xab10de1aU % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x000140064c7b:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_378c._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.ability);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3798._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xab10de19U % uVar29;
      rStack_3798._s_0.x = fVar55;
      rStack_3798._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_99 == 0))
        goto code_r0x000140064d6b;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xab10de19U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x000140064d6b:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3798._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.ability1);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_37a4._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xab10de1cU % uVar29;
      rStack_37a4._s_0.x = fVar55;
      rStack_37a4._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_x00100 == 0))
        goto code_r0x000140064e5b;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xab10de1cU % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x000140064e5b:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_37a4._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.ability2);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_37b0._s_0.z = 0.0;
      uVar29 = 0x41f489f3 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_37b0._s_0.x = fVar55;
      rStack_37b0._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_x00101 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_37b0._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.extend);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_37bc._s_0.z = 0.0;
      uVar29 = 0x41f7c8a9 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_37bc._s_0.x = fVar55;
      rStack_37bc._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_x00102 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_37bc._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.retract);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_37c8._s_0.z = 0.0;
      uVar29 = 0x2d6b791a % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_37c8._s_0.x = fVar55;
      rStack_37c8._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_x00103 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_37c8._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.interact);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_37d4._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xd4c37752U % uVar29;
      rStack_37d4._s_0.x = fVar55;
      rStack_37d4._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_x00104 == 0))
        goto code_r0x0001400651eb;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xd4c37752U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x0001400651eb:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_37d4._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.map);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_37e0._s_0.z = 0.0;
      uVar29 = 0x24be3f0 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_37e0._s_0.x = fVar55;
      rStack_37e0._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_x00105 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_37e0._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.zoom_in);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_37ec._s_0.z = 0.0;
      uVar29 = 0x4e143c66 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_37ec._s_0.x = fVar55;
      rStack_37ec._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_x00106 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_37ec._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.zoom_out);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_37f8._s_0.z = 0.0;
      uVar29 = 0x41fab1d6 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_37f8._s_0.x = fVar55;
      rStack_37f8._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_x00107 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_37f8._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.edit);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3804._s_0.z = 0.0;
      uVar29 = 0x6ac80f1a % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_3804._s_0.x = fVar55;
      rStack_3804._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_x00108 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3804._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.inspect);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      auVar60 = auVar91._0_16_;
      auVar56 = auVar82._0_16_;
      if (settings.enable_console == 0) break;
      rStack_3810._s_0.y = fVar88 + -0.09;
      rStack_3810._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xda34f349U % uVar29;
      rStack_3810._s_0.x = fVar55;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_x00109 == 0))
        goto code_r0x00014006567b;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xda34f349U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x00014006567b:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      piVar97 = &settings.field3_0xc.keybinds.console;
      prVar43 = &rStack_3810;
    }
    else {
      cRam00000001401fa114 = '\x01';
      (prVar1->field0_0x0).xy.field0_0x0 = local_39a8;
      *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uStack_39a0;
      fVar88 = DAT_1401fa0c8 + -0.11;
code_r0x00014005dfd0:
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      rStack_381c._s_0.x = DAT_1401fa0c4;
      rStack_381c._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xc7e62be5U % uVar29;
      fVar55 = DAT_1401fa0c4;
      rStack_381c._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_38 == 0))
        goto code_r0x00014005e054;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xc7e62be5U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x00014005e054:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_381c._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.brush_bigger);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3828._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xe4e62be5U % uVar29;
      rStack_3828._s_0.x = fVar55;
      rStack_3828._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_56 == 0))
        goto code_r0x00014006054b;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xe4e62be5U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x00014006054b:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3828._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.brush_smaller);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3834._s_0.z = 0.0;
      uVar29 = 0x1177e692 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_3834._s_0.x = fVar55;
      rStack_3834._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_57 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3834._s_0,
                         (real_2)0x3cf5c28f3f000000,settings.field3_0xc.buttons + 0x11);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3840._s_0.z = 0.0;
      uVar29 = 0x6519fe92 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_3840._s_0.x = fVar55;
      rStack_3840._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_58 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3840._s_0,
                         (real_2)0x3cf5c28f3f000000,settings.field3_0xc.buttons + 0x12);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_384c._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xee7d0692U % uVar29;
      rStack_384c._s_0.x = fVar55;
      rStack_384c._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_59 == 0))
        goto code_r0x0001400607fb;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xee7d0692U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x0001400607fb:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_384c._s_0,
                         (real_2)0x3cf5c28f3f000000,settings.field3_0xc.buttons + 0x13);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3858._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xe7669c3dU % uVar29;
      rStack_3858._s_0.x = fVar55;
      rStack_3858._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_60 == 0))
        goto code_r0x0001400608eb;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xe7669c3dU % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x0001400608eb:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3858._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.toggle_symmetry);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3864._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xf50a4973U % uVar29;
      rStack_3864._s_0.x = fVar55;
      rStack_3864._s_0.y = fVar88;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_61 == 0))
        goto code_r0x0001400609db;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xf50a4973U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x0001400609db:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3864._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.toggle_icons);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3870._s_0.z = 0.0;
      uVar29 = 0x270b9062 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_3870._s_0.x = fVar55;
      rStack_3870._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_62 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3870._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.editor_up);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_387c._s_0.z = 0.0;
      uVar29 = 0x5040b290 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_387c._s_0.x = fVar55;
      rStack_387c._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_63 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_387c._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.editor_down);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      fVar88 = fVar88 + -0.06;
      rStack_3888._s_0.z = 0.0;
      uVar29 = 0x503c0184 % (ulonglong)w.translations.max_entries;
      uVar48 = uVar29;
      rStack_3888._s_0.x = fVar55;
      rStack_3888._s_0.y = fVar88;
      do {
        uVar47 = (ulonglong)(int)uVar48;
        if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_64 == 0)) break;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        uVar47 = uVar29;
      } while ((int)uVar48 != (int)uVar29);
      if (w.translations.values[uVar47].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[uVar47].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&rStack_3888._s_0,
                         (real_2)0x3cf5c28f3f000000,&settings.field3_0xc.keybinds.editor_left);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      rStack_3894._s_0.y = fVar88 + -0.06;
      rStack_3894._s_0.z = 0.0;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xa7c6cdb8U % uVar29;
      rStack_3894._s_0.x = fVar55;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_65 == 0))
        goto code_r0x000140060d6b;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xa7c6cdb8U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x000140060d6b:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      piVar97 = &settings.field3_0xc.keybinds.editor_right;
      prVar43 = &rStack_3894;
    }
    do_keybind_setting(param_3,param_4,pcVar51,(real_3 *)&prVar43->_s_0,(real_2)0x3cf5c28f3f000000,
                       piVar97);
    auVar60 = auVar91._0_16_;
    auVar56 = auVar82._0_16_;
    break;
  case 3:
    auVar89 = ZEXT464((uint)DAT_1401fa0c4);
    auStack_1768._0_4_ = pfVar4->texture;
    auStack_1768._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    auStack_1768._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    auStack_1768._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    auStack_1768._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    auStack_1768._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    auStack_1768._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    auStack_1768._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    auStack_1768._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    auStack_1768._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    auStack_1768._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    auStack_1768._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    auStack_1768._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    auStack_1768._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    auStack_1768._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    auStack_1768._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    auStack_1768._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    auStack_1768._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    auStack_1768._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    auStack_1768._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    auStack_1768._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    auStack_1768._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    auStack_1768._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_16e0 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_16d8._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_16d8._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    puStack_16d0 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    uStack_16c8._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_16c8._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_16c0 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_16b8 = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3258.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3258._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(DAT_1401fa0c8 + 0.22));
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xdc532b68U % uVar29;
    do {
      auVar81 = auVar91._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x00014005c1e1;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar91 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar91._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_18 == 0) goto code_r0x00014005c1e1;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xdc532b68U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005c1e1:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3258._s_0,(real_2)0x0,
              (font_info *)auStack_1768,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1828.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1828.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1828._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1828.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1828.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1828.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1828.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1828.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1828.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1828.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1828.texture = pfVar4->texture;
    fStack_1828._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1828.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1828.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1828.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1828.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1828.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1828.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1828.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1828.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1828.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1828.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1828.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1828.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1828.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1828.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1828.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1828.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1828.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1828.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1828.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1828.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1828.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1828.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1828.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1828.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3268.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3268._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x2ba81264 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_20 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3268._s_0,(real_2)0x0,
              &fStack_1828,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_18e8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_18e8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_18e8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_18e8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_18e8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_18e8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_18e8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_18e8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_18e8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_18e8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_18e8.texture = pfVar4->texture;
    fStack_18e8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_18e8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_18e8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_18e8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_18e8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_18e8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_18e8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_18e8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_18e8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_18e8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_18e8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_18e8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_18e8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_18e8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_18e8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_18e8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_18e8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_18e8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_18e8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_18e8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_18e8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_18e8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_18e8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_18e8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_18e8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3278.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3278._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.12));
    uVar29 = 0x2639eab0 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_21 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3278._s_0,(real_2)0x0,
              &fStack_18e8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_19a8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_19a8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_19a8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_19a8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_19a8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_19a8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_19a8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_19a8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_19a8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_19a8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_19a8.texture = pfVar4->texture;
    fStack_19a8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_19a8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_19a8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_19a8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_19a8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_19a8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_19a8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_19a8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_19a8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_19a8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_19a8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_19a8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_19a8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_19a8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_19a8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_19a8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_19a8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_19a8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_19a8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_19a8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_19a8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_19a8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_19a8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_19a8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_19a8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3288.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3288._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x2bae23b4 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_22 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3288._s_0,(real_2)0x0,
              &fStack_19a8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1a68.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1a68.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1a68._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1a68.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1a68.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1a68.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1a68.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1a68.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1a68.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1a68.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1a68.texture = pfVar4->texture;
    fStack_1a68._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1a68.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1a68.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1a68.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1a68.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1a68.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1a68.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1a68.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1a68.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1a68.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1a68.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1a68.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1a68.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1a68.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1a68.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1a68.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1a68.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1a68.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1a68.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1a68.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1a68.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1a68.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1a68.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1a68.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1a68.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3298.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3298._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.12));
    uVar29 = 0x2b2dcfdb % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_23 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3298._s_0,(real_2)0x0,
              &fStack_1a68,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1b28.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1b28.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1b28._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1b28.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1b28.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1b28.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1b28.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1b28.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1b28.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1b28.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1b28.texture = pfVar4->texture;
    fStack_1b28._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1b28.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1b28.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1b28.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1b28.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1b28.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1b28.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1b28.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1b28.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1b28.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1b28.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1b28.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1b28.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1b28.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1b28.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1b28.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1b28.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1b28.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1b28.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1b28.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1b28.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1b28.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1b28.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1b28.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1b28.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_32a8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_32a8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x71584ae5 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_24 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_32a8._s_0,(real_2)0x0,
              &fStack_1b28,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1be8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1be8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1be8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1be8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1be8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1be8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1be8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1be8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1be8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1be8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1be8.texture = pfVar4->texture;
    fStack_1be8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1be8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1be8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1be8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1be8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1be8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1be8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1be8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1be8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1be8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1be8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1be8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1be8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1be8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1be8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1be8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1be8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1be8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1be8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1be8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1be8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1be8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1be8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1be8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1be8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_32b8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_32b8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.12));
    uVar29 = 0x626ce5db % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_25 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_32b8._s_0,(real_2)0x0,
              &fStack_1be8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1ca8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1ca8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1ca8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1ca8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1ca8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1ca8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1ca8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1ca8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1ca8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1ca8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1ca8.texture = pfVar4->texture;
    fStack_1ca8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1ca8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1ca8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1ca8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1ca8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1ca8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1ca8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1ca8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1ca8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1ca8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1ca8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1ca8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1ca8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1ca8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1ca8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1ca8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1ca8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1ca8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1ca8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1ca8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1ca8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1ca8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1ca8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1ca8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1ca8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_32c8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_32c8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x1210fe8 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_26 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_32c8._s_0,(real_2)0x0,
              &fStack_1ca8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1d68.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1d68.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1d68._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1d68.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1d68.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1d68.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1d68.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1d68.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1d68.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1d68.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1d68.texture = pfVar4->texture;
    fStack_1d68._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1d68.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1d68.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1d68.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1d68.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1d68.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1d68.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1d68.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1d68.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1d68.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1d68.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1d68.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1d68.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1d68.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1d68.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1d68.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1d68.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1d68.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1d68.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1d68.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1d68.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1d68.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1d68.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1d68.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1d68.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_32d8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_32d8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x5deef732 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_27 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_32d8._s_0,(real_2)0x0,
              &fStack_1d68,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1e28.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1e28.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1e28._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1e28.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1e28.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1e28.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1e28.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1e28.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1e28.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1e28.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1e28.texture = pfVar4->texture;
    fStack_1e28._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1e28.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1e28.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1e28.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1e28.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1e28.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1e28.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1e28.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1e28.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1e28.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1e28.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1e28.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1e28.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1e28.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1e28.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1e28.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1e28.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1e28.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1e28.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1e28.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1e28.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1e28.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1e28.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1e28.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1e28.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_32e8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_32e8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xba0ade56U % uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x00014005cebe;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_28 == 0) goto code_r0x00014005cebe;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xba0ade56U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005cebe:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_32e8._s_0,(real_2)0x0,
              &fStack_1e28,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1ee8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1ee8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1ee8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1ee8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1ee8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1ee8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1ee8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1ee8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1ee8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1ee8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1ee8.texture = pfVar4->texture;
    fStack_1ee8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1ee8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1ee8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1ee8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1ee8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1ee8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1ee8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1ee8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1ee8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1ee8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1ee8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1ee8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1ee8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1ee8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1ee8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1ee8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1ee8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1ee8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1ee8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1ee8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1ee8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1ee8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1ee8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1ee8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1ee8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_32f8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_32f8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x5deef988 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_29 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_32f8._s_0,(real_2)0x0,
              &fStack_1ee8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_1fa8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_1fa8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_1fa8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_1fa8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_1fa8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_1fa8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_1fa8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_1fa8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_1fa8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_1fa8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_1fa8.texture = pfVar4->texture;
    fStack_1fa8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_1fa8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_1fa8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_1fa8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_1fa8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_1fa8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_1fa8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_1fa8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_1fa8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_1fa8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_1fa8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_1fa8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_1fa8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_1fa8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_1fa8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_1fa8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_1fa8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_1fa8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_1fa8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_1fa8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_1fa8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_1fa8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_1fa8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_1fa8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_1fa8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3308.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3308._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.12));
    uVar29 = 0x79c31f74 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_30 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3308._s_0,(real_2)0x0,
              &fStack_1fa8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_2068.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_2068.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_2068._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_2068.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_2068.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_2068.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_2068.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_2068.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_2068.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_2068.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_2068.texture = pfVar4->texture;
    fStack_2068._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_2068.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_2068.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_2068.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_2068.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_2068.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_2068.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_2068.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_2068.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_2068.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_2068.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_2068.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_2068.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_2068.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_2068.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_2068.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_2068.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_2068.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_2068.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_2068.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_2068.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_2068.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_2068.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_2068.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_2068.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3318.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3318._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x5184b759 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_31 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3318._s_0,(real_2)0x0,
              &fStack_2068,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_2128.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_2128.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_2128._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_2128.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_2128.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_2128.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_2128.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_2128.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_2128.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_2128.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_2128.texture = pfVar4->texture;
    fStack_2128._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_2128.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_2128.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_2128.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_2128.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_2128.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_2128.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_2128.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_2128.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_2128.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_2128.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_2128.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_2128.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_2128.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_2128.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_2128.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_2128.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_2128.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_2128.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_2128.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_2128.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_2128.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_2128.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_2128.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_2128.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3328.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3328._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.12));
    uVar29 = 0x229a1a23 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_32 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3328._s_0,(real_2)0x0,
              &fStack_2128,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_21e8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_21e8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_21e8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_21e8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_21e8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_21e8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_21e8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_21e8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_21e8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_21e8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_21e8.texture = pfVar4->texture;
    fStack_21e8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_21e8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_21e8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_21e8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_21e8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_21e8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_21e8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_21e8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_21e8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_21e8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_21e8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_21e8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_21e8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_21e8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_21e8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_21e8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_21e8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_21e8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_21e8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_21e8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_21e8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_21e8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_21e8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_21e8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_21e8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3338.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3338._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x46a092e6 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar87 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar87._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_33 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_3338._s_0,(real_2)0x0,
              &fStack_21e8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_22a8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_22a8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_22a8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_22a8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_22a8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_22a8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_22a8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_22a8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_22a8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_22a8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_22a8.texture = pfVar4->texture;
    fStack_22a8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_22a8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_22a8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_22a8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_22a8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_22a8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_22a8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_22a8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_22a8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_22a8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_22a8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_22a8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_22a8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_22a8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_22a8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_22a8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_22a8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_22a8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_22a8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_22a8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_22a8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_22a8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_22a8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_22a8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_22a8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3348.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3348._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT464((uint)(auVar95._0_4_ + -0.06));
    uVar29 = 0x5deec9a9 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar60 = auVar87._0_16_;
      auVar56 = auVar82._0_16_;
      fVar88 = auVar89._0_4_;
      fVar55 = auVar95._0_4_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar89._0_16_);
      auVar95 = ZEXT1664(auVar95._0_16_);
      auVar82 = ZEXT1664(auVar56);
      auVar87 = ZEXT1664(auVar60);
      strcmp();
      auVar60 = auVar87._0_16_;
      auVar56 = auVar82._0_16_;
      fVar88 = auVar89._0_4_;
      fVar55 = auVar95._0_4_;
      if (extraout_EAX_34 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    draw_text(pcVar51,fVar88,fVar55,(real_4 *)&rStack_3348._s_0,(real_2)0x0,&fStack_22a8,
              &default_shadow);
    auVar60 = auVar95._0_16_;
    auVar56 = auVar89._0_16_;
    break;
  case 4:
    pcVar51 = "menu_show_tutorial_on";
    if (settings.show_tutorial == 0) {
      pcVar51 = "menu_show_tutorial_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = DAT_1401fa0c8 + 0.16;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    fVar55 = DAT_1401fa0c4;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_35 == 0))
      goto code_r0x00014005d784;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x00014005d784:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_38a0._s_0.z = 0.0;
    rStack_38a0._s_0.x = fVar55;
    rStack_38a0._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_38a0._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      bVar52 = settings.show_tutorial == 0;
      settings.show_tutorial = (uint)bVar52;
      if (bVar52) {
        if (w.game_mode != 0) {
          w.tutorial_stage = 1;
          w.current_tutorial = "tutorial_intro";
        }
      }
      else {
        w.tutorial_stage = 0;
      }
    }
    pcVar51 = "menu_warn_disconnected_on";
    if (settings.show_disconnected_warning == 0) {
      pcVar51 = "menu_warn_disconnected_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_68 == 0))
      goto code_r0x000140061104;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061104:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_38ac._s_0.z = 0.0;
    rStack_38ac._s_0.x = fVar55;
    rStack_38ac._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_38ac._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.show_disconnected_warning = (uint)(settings.show_disconnected_warning == 0);
    }
    pcVar51 = "menu_error_sounds_on";
    if (settings.error_sound == 0) {
      pcVar51 = "menu_error_sounds_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_69 == 0))
      goto code_r0x000140061244;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061244:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_38b8._s_0.z = 0.0;
    rStack_38b8._s_0.x = fVar55;
    rStack_38b8._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_38b8._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.error_sound = (uint)(settings.error_sound == 0);
    }
    pcVar51 = "menu_always_show_storage_on";
    if (settings.always_show_storage == 0) {
      pcVar51 = "menu_always_show_storage_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_70 == 0))
      goto code_r0x000140061384;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061384:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_38c4._s_0.z = 0.0;
    rStack_38c4._s_0.x = fVar55;
    rStack_38c4._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_38c4._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.always_show_storage = (uint)(settings.always_show_storage == 0);
    }
    pcVar51 = "menu_pushable_cell_buttons_on";
    if (settings.pushable_cell_buttons == 0) {
      pcVar51 = "menu_pushable_cell_buttons_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_71 == 0))
      goto code_r0x0001400614c4;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x0001400614c4:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_38d0._s_0.z = 0.0;
    rStack_38d0._s_0.x = fVar55;
    rStack_38d0._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_38d0._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.pushable_cell_buttons = (uint)(settings.pushable_cell_buttons == 0);
    }
    pcVar51 = "menu_copy_plan_on_possess_on";
    if (settings.copy_plan_on_possess == 0) {
      pcVar51 = "menu_copy_plan_on_possess_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_72 == 0))
      goto code_r0x000140061604;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061604:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_38dc._s_0.z = 0.0;
    rStack_38dc._s_0.x = fVar55;
    rStack_38dc._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_38dc._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.copy_plan_on_possess = (uint)(settings.copy_plan_on_possess == 0);
    }
    pcVar51 = "menu_clip_cursor_on";
    if (settings.clip_cursor == 0) {
      pcVar51 = "menu_clip_cursor_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_73 == 0))
      goto code_r0x000140061744;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061744:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_38e8._s_0.z = 0.0;
    rStack_38e8._s_0.x = fVar55;
    rStack_38e8._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_38e8._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.clip_cursor = (uint)(settings.clip_cursor == 0);
    }
    pcVar51 = "menu_hardware_cursor_on";
    if (settings.hardware_cursor == 0) {
      pcVar51 = "menu_hardware_cursor_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_74 == 0))
      goto code_r0x000140061884;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061884:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_38f4._s_0.z = 0.0;
    rStack_38f4._s_0.x = fVar55;
    rStack_38f4._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_38f4._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    if (((ushort)bVar19 & 1) != 0) {
      bVar52 = settings.hardware_cursor == 0;
      settings.hardware_cursor = (uint)bVar52;
      bVar18 = w.hide_cursor | !bVar52;
      bVar36 = bVar18 | DAT_1401fb378;
      BVar27 = 1;
      if ((bVar18 == 0 && (DAT_1401fb378 & 1) == 0) || (BVar27 = 0, (bVar18 & DAT_1401fb378) == 1))
      {
        ShowCursor(BVar27);
        DAT_1401fb378 = ~bVar36 & 1;
      }
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    pcVar51 = "menu_toggle_seek_on";
    if (settings.toggle_seek == 0) {
      pcVar51 = "menu_toggle_seek_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_75 == 0))
      goto code_r0x000140061a04;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061a04:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_3900._s_0.z = 0.0;
    rStack_3900._s_0.x = fVar55;
    rStack_3900._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3900._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.toggle_seek = (uint)(settings.toggle_seek == 0);
    }
    pcVar51 = "menu_toggle_ability_on";
    if (settings.toggle_ability == 0) {
      pcVar51 = "menu_toggle_ability_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_76 == 0))
      goto code_r0x000140061b44;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061b44:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_390c._s_0.z = 0.0;
    rStack_390c._s_0.x = fVar55;
    rStack_390c._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_390c._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      settings.toggle_ability = (uint)(settings.toggle_ability == 0);
    }
    fStack_2368.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_2368.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_2368._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_2368.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_2368.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_2368.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_2368.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_2368.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_2368.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_2368.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_2368.texture = pfVar4->texture;
    fStack_2368._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_2368.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_2368.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_2368.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_2368.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_2368.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_2368.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_2368.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_2368.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_2368.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_2368.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_2368.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_2368.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_2368.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_2368.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_2368.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_2368.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_2368.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_2368.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_2368.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_2368.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_2368.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_2368.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_2368.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_2368.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3358.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3358._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT464((uint)(fVar88 + -0.08));
    auVar87 = ZEXT464((uint)(fVar55 + -0.1));
    auVar95 = ZEXT464((uint)(fVar55 + -0.1 + -0.02));
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xa8305873U % uVar29;
    do {
      auVar81 = auVar91._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar87._0_16_;
      auVar56 = auVar89._0_16_;
      fVar88 = auVar95._0_4_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x000140061cb7;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar95._0_16_);
      auVar87 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar91 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar91._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar87._0_16_;
      auVar56 = auVar89._0_16_;
      fVar88 = auVar95._0_4_;
      if (extraout_EAX_77 == 0) goto code_r0x000140061cb7;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xa8305873U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061cb7:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar82 = ZEXT1664(auVar60);
    auVar93 = ZEXT1664(auVar65);
    auVar94 = ZEXT1664(auVar81);
    draw_text(pcVar51,fVar88,auVar56._0_4_,(real_4 *)&rStack_3358._s_0,(real_2)0x3f800000,
              &fStack_2368,&default_shadow);
    rStack_3918._s_0.x = auVar82._0_4_ + 0.32000002;
    rStack_3918._s_0.y = (float)auVar89._0_4_;
    rStack_3918._s_0.z = 0.0;
    do_slider(param_3,param_4,(real_3 *)&rStack_3918._s_0,(real_2)0x3cf5c28f3e99999a,
              &settings.gamepad_cursor_sens,0.1,5.0);
    sprintf(local_2fa8,"%.2f");
    fStack_2428.texture = pfVar4->texture;
    fStack_2428._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_2428.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_2428.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_2428.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_2428.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_2428.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_2428.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_2428.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_2428.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_2428.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_2428.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_2428.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_2428.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_2428.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_2428.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_2428.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_2428.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_2428.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_2428.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_2428.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_2428.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_2428.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_2428.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_2428.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_2428.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_2428.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_2428.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_2428.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_2428.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_2428.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_2428.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_2428.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_2428.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_2428._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_2428.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3368.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3368._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    draw_text(local_2fa8,auVar82._0_4_ + 0.6 + 0.04,auVar89._0_4_,(real_4 *)&rStack_3368._s_0,
              (real_2)0xbf800000,&fStack_2428,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_24e8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_24e8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_24e8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_24e8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_24e8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_24e8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_24e8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_24e8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_24e8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_24e8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_24e8.texture = pfVar4->texture;
    fStack_24e8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_24e8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_24e8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_24e8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_24e8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_24e8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_24e8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_24e8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_24e8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_24e8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_24e8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_24e8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_24e8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_24e8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_24e8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_24e8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_24e8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_24e8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_24e8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_24e8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_24e8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_24e8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_24e8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_24e8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_24e8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3378.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3378._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT464((uint)(auVar95._0_4_ + -0.08));
    fVar88 = auVar87._0_4_ + 0.1 + -0.1;
    auVar82 = ZEXT464((uint)fVar88);
    auVar95 = ZEXT464((uint)(fVar88 + -0.02));
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xf818ff85U % uVar29;
    do {
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar89._0_16_;
      fVar88 = auVar95._0_4_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x000140061f57;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar95._0_16_);
      auVar82 = ZEXT1664(auVar60);
      auVar93 = ZEXT1664(auVar65);
      auVar94 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar89._0_16_;
      fVar88 = auVar95._0_4_;
      if (extraout_EAX_78 == 0) goto code_r0x000140061f57;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xf818ff85U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140061f57:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar82 = ZEXT1664(auVar60);
    auVar93 = ZEXT1664(auVar65);
    auVar94 = ZEXT1664(auVar81);
    draw_text(pcVar51,fVar88,auVar56._0_4_,(real_4 *)&rStack_3378._s_0,(real_2)0x3f800000,
              &fStack_24e8,&default_shadow);
    rStack_3924._s_0.x = auVar82._0_4_ + 0.32000002;
    rStack_3924._s_0.y = (float)auVar89._0_4_;
    rStack_3924._s_0.z = 0.0;
    do_slider(param_3,param_4,(real_3 *)&rStack_3924._s_0,(real_2)0x3cf5c28f3e99999a,
              &settings.gamepad_deadzone,0.0,0.5);
    sprintf(local_2fa8,"%.0f%%");
    fStack_25a8.texture = pfVar4->texture;
    fStack_25a8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_25a8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_25a8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_25a8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_25a8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_25a8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_25a8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_25a8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_25a8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_25a8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_25a8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_25a8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_25a8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_25a8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_25a8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_25a8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_25a8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_25a8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_25a8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_25a8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_25a8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_25a8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_25a8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_25a8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_25a8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_25a8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_25a8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_25a8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_25a8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_25a8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_25a8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_25a8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_25a8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_25a8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_25a8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_3388.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3388._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    draw_text(local_2fa8,auVar82._0_4_ + 0.6 + 0.04,auVar89._0_4_,(real_4 *)&rStack_3388._s_0,
              (real_2)0xbf800000,&fStack_25a8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fStack_2668.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_2668.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_2668._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_2668.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    fStack_2668.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_2668.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_2668.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_2668.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_2668.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_2668.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_2668.texture = pfVar4->texture;
    fStack_2668._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_2668.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_2668.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_2668.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_2668.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_2668.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_2668.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_2668.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_2668.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_2668.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_2668.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_2668.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_2668.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_2668.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_2668.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_2668.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_2668.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_2668.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_2668.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_2668.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_2668.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_2668.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_2668.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_2668.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_2668.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    rStack_3398.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_3398._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar89 = ZEXT464((uint)(auVar95._0_4_ + -0.08));
    fVar88 = auVar87._0_4_ + 0.1 + -0.1;
    auVar82 = ZEXT464((uint)fVar88);
    auVar95 = ZEXT464((uint)(fVar88 + -0.02));
    uVar29 = 0x27c92c29 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar89._0_16_;
      fVar88 = auVar95._0_4_;
      uVar47 = (ulonglong)(int)uVar48;
      if (ppcVar16[uVar47] == (char *)0x0) break;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar95._0_16_);
      auVar82 = ZEXT1664(auVar60);
      auVar93 = ZEXT1664(auVar65);
      auVar94 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar94._0_16_;
      auVar65 = auVar93._0_16_;
      auVar60 = auVar82._0_16_;
      auVar56 = auVar89._0_16_;
      fVar88 = auVar95._0_4_;
      if (extraout_EAX_79 == 0) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar82 = ZEXT1664(auVar60);
    auVar93 = ZEXT1664(auVar65);
    auVar94 = ZEXT1664(auVar81);
    draw_text(pcVar51,fVar88,auVar56._0_4_,(real_4 *)&rStack_3398._s_0,(real_2)0x3f800000,
              &fStack_2668,&default_shadow);
    rStack_3930._s_0.x = auVar82._0_4_ + 0.32000002;
    rStack_3930._s_0.y = (float)auVar89._0_4_;
    rStack_3930._s_0.z = 0.0;
    do_slider(param_3,param_4,(real_3 *)&rStack_3930._s_0,(real_2)0x3cf5c28f3e99999a,
              &settings.screenshake,0.0,1.0);
    sprintf(local_2fa8,"%.0f%%");
    fStack_2728.texture = pfVar4->texture;
    fStack_2728._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    fStack_2728.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    fStack_2728.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    fStack_2728.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    fStack_2728.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    fStack_2728.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    fStack_2728.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    fStack_2728.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    fStack_2728.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    fStack_2728.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    fStack_2728.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    fStack_2728.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    fStack_2728.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    fStack_2728.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    fStack_2728.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    fStack_2728.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    fStack_2728.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    fStack_2728.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    fStack_2728.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
    ;
    fStack_2728.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    fStack_2728.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    fStack_2728.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    fStack_2728.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    fStack_2728.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    fStack_2728.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    fStack_2728.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    fStack_2728.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    fStack_2728.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    fStack_2728.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    fStack_2728.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    fStack_2728.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    fStack_2728.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    fStack_2728.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    fStack_2728._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    fStack_2728.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    rStack_33a8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    rStack_33a8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar95 = ZEXT1664(auVar89._0_16_);
    auVar87 = ZEXT1664(auVar82._0_16_);
    auVar93 = ZEXT1664(auVar93._0_16_);
    auVar94 = ZEXT1664(auVar94._0_16_);
    draw_text(local_2fa8,auVar82._0_4_ + 0.6 + 0.04,auVar89._0_4_,(real_4 *)&rStack_33a8._s_0,
              (real_2)0xbf800000,&fStack_2728,&default_shadow);
    fVar55 = auVar95._0_4_;
    fVar88 = auVar87._0_4_;
    if (param_4->active_ui_element == &settings.screenshake) {
      rVar23 = rand_normal_2(&seed);
      fVar55 = auVar95._0_4_;
      fVar88 = auVar87._0_4_;
      w.screenshake.field0_0x0._s_0.y =
           rVar23.field0_0x0._4_4_ * 5.0 + w.screenshake.field0_0x0._s_0.y;
      w.screenshake.field0_0x0._s_0.x =
           rVar23.field0_0x0._0_4_ * 5.0 + w.screenshake.field0_0x0._s_0.x;
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    pcVar51 = "menu_pause_on_unfocus_on";
    if (settings.pause_on_unfocus == 0) {
      pcVar51 = "menu_pause_on_unfocus_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar88 = fVar88 + 0.1;
    fVar55 = fVar55 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_80 == 0))
      goto code_r0x0001400624b4;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x0001400624b4:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    rStack_393c._s_0.z = 0.0;
    rStack_393c._s_0.x = fVar88;
    rStack_393c._s_0.y = fVar55;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_393c._s_0,(real_2)0x3d23d70a3ecccccd,
                            pcVar51);
    auVar60 = auVar94._0_16_;
    auVar56 = auVar93._0_16_;
    if (((ushort)bVar19 & 1) != 0) {
      settings.pause_on_unfocus = (uint)(settings.pause_on_unfocus == 0);
      bVar18 = w.hide_cursor | settings.hardware_cursor == 0;
      bVar36 = bVar18 | DAT_1401fb378;
      BVar27 = 1;
      if ((bVar18 == 0 && (DAT_1401fb378 & 1) == 0) || (BVar27 = 0, (bVar18 & DAT_1401fb378) == 1))
      {
        ShowCursor(BVar27);
        auVar60 = auVar94._0_16_;
        auVar56 = auVar93._0_16_;
        DAT_1401fb378 = ~bVar36 & 1;
      }
    }
    auVar61._0_12_ = ZEXT812(0);
    auVar61._12_4_ = 0;
    auStack_2fe8 = ZEXT1632(auVar61);
    local_3068 = ZEXT1632(auVar61);
    local_30a8 = ZEXT1632(auVar61);
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    local_3088 = local_30a8;
    auStack_3048 = local_3068;
    auStack_3028 = local_3068;
    auStack_3008 = local_3068;
    auStack_2fc8 = auStack_2fe8;
    get_keycode_name(settings.field3_0xc.keybinds.console,local_30a8,0x100);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    pcVar51 = "menu_console_on";
    if (settings.enable_console == 0) {
      pcVar51 = "menu_console_off";
    }
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    fVar55 = fVar55 + -0.08;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_81 == 0))
      goto code_r0x0001400626a4;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x0001400626a4:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    sprintf(local_668,pcVar51);
    rStack_3948._s_0.z = 0.0;
    rStack_3948._s_0.x = fVar88;
    rStack_3948._s_0.y = fVar55;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3948._s_0,(real_2)0x3d23d70a3ecccccd,
                            local_668);
    auVar60 = auVar95._0_16_;
    auVar56 = auVar89._0_16_;
    if (((ushort)bVar19 & 1) != 0) {
      settings.enable_console = (uint)(settings.enable_console == 0);
    }
    break;
  case 5:
    auVar89 = ZEXT464((uint)DAT_1401fa0c4);
    auVar95 = ZEXT464((uint)DAT_1401fa0c8);
    if ((w.has_sandbox != 0) && (w.game_mode != 2)) {
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xce04a0a6U % uVar29;
      do {
        lVar40 = (longlong)(int)uVar48;
        if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_17 == 0))
        goto code_r0x000140060405;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xce04a0a6U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x000140060405:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      rStack_34f8._s_0.x = (float)auVar89._0_4_;
      auVar60._0_12_ = ZEXT812(0);
      auVar60._12_4_ = 0;
      auVar56 = vblendps_avx(auVar60,auVar95._0_16_,1);
      rStack_34f8._s_2.yz.field0_0x0 = (real_2)vmovlps_avx(auVar56);
      puVar31 = param_4;
      bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_34f8._s_0,(real_2)0x3d23d70a3e4ccccd
                              ,pcVar51);
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      uVar35 = (undefined4)((ulonglong)puVar31 >> 0x20);
      fVar88 = auVar95._0_4_;
      if ((0xff < (ushort)bVar19) && (sandbox_save_version != 0x12)) {
        fStack_27e8.info.fdselect.cursor =
             (((stbtt_fontinfo *)((longlong)local_3998 + 8))->fdselect).cursor;
        fStack_27e8.info.fdselect.size =
             (((stbtt_fontinfo *)((longlong)local_3998 + 8))->fdselect).size;
        fStack_27e8._168_8_ = *(undefined8 *)((longlong)local_3998 + 0xa8);
        fStack_27e8.char_data = local_3998->font_infos[0].char_data;
        fStack_27e8.info.subrs.cursor =
             (((stbtt_fontinfo *)((longlong)local_3998 + 8))->subrs).cursor;
        fStack_27e8.info.subrs.size = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->subrs).size;
        fStack_27e8.info.fontdicts.data = local_3998->font_infos[0].info.fontdicts.data;
        fStack_27e8.info.fontdicts.cursor =
             (((stbtt_fontinfo *)((longlong)local_3998 + 8))->fontdicts).cursor;
        fStack_27e8.info.fontdicts.size =
             (((stbtt_fontinfo *)((longlong)local_3998 + 8))->fontdicts).size;
        fStack_27e8.info.fdselect.data = local_3998->font_infos[0].info.fdselect.data;
        fStack_27e8._0_8_ = *(undefined8 *)local_3998;
        fStack_27e8.info.userdata = local_3998->font_infos[0].info.userdata;
        fStack_27e8.info.data = local_3998->font_infos[0].info.data;
        fStack_27e8.info.fontstart = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->fontstart;
        fStack_27e8.info.numGlyphs = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->numGlyphs;
        fStack_27e8.info.loca = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->loca;
        fStack_27e8.info.head = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->head;
        fStack_27e8.info.glyf = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->glyf;
        fStack_27e8.info.hhea = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->hhea;
        fStack_27e8.info.hmtx = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->hmtx;
        fStack_27e8.info.kern = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->kern;
        fStack_27e8.info.gpos = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->gpos;
        fStack_27e8.info.svg = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->svg;
        fStack_27e8.info.index_map = ((stbtt_fontinfo *)((longlong)local_3998 + 8))->index_map;
        fStack_27e8.info.indexToLocFormat =
             ((stbtt_fontinfo *)((longlong)local_3998 + 8))->indexToLocFormat;
        fStack_27e8.info.cff.data = local_3998->font_infos[0].info.cff.data;
        fStack_27e8.info.cff.cursor = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->cff).cursor;
        fStack_27e8.info.cff.size = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->cff).size;
        fStack_27e8.info.charstrings.data = local_3998->font_infos[0].info.charstrings.data;
        fStack_27e8.info.charstrings.cursor =
             (((stbtt_fontinfo *)((longlong)local_3998 + 8))->charstrings).cursor;
        fStack_27e8.info.charstrings.size =
             (((stbtt_fontinfo *)((longlong)local_3998 + 8))->charstrings).size;
        fStack_27e8.info.gsubrs.data = local_3998->font_infos[0].info.gsubrs.data;
        fStack_27e8.info.gsubrs.cursor =
             (((stbtt_fontinfo *)((longlong)local_3998 + 8))->gsubrs).cursor;
        fStack_27e8.info.gsubrs.size = (((stbtt_fontinfo *)((longlong)local_3998 + 8))->gsubrs).size
        ;
        fStack_27e8.info.subrs.data = local_3998->font_infos[0].info.subrs.data;
        rStack_33b8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f800000;
        rStack_33b8._8_8_ = 0x3f80000000000000;
        auVar87 = ZEXT464((uint)(fVar88 + 0.1));
        pcVar51 = (char *)(0x5836cc95 % (ulonglong)w.translations.max_entries);
        pcVar32 = pcVar51;
        pcVar50 = pcVar51;
        do {
          uVar35 = (undefined4)((ulonglong)pcVar32 >> 0x20);
          auVar81 = auVar91._0_16_;
          auVar65 = auVar82._0_16_;
          auVar60 = auVar95._0_16_;
          auVar56 = auVar89._0_16_;
          fVar88 = auVar87._0_4_;
          pcVar41 = (char *)(longlong)(int)pcVar50;
          if (ppcVar16[(longlong)pcVar41] == (char *)0x0) break;
          pcVar32 = "menu_warn_old_save";
          auVar89 = ZEXT1664(auVar56);
          auVar95 = ZEXT1664(auVar60);
          auVar87 = ZEXT1664(auVar87._0_16_);
          auVar82 = ZEXT1664(auVar65);
          auVar91 = ZEXT1664(auVar81);
          strcmp();
          uVar35 = (undefined4)((ulonglong)pcVar32 >> 0x20);
          auVar81 = auVar91._0_16_;
          auVar65 = auVar82._0_16_;
          auVar60 = auVar95._0_16_;
          auVar56 = auVar89._0_16_;
          fVar88 = auVar87._0_4_;
          if (extraout_EAX_67 == 0) break;
          uVar37 = (int)pcVar50 + 1;
          pcVar50 = (char *)(ulonglong)uVar37;
          if (uVar37 == uVar39) {
            pcVar50 = (char *)0x0;
          }
          pcVar41 = pcVar51;
        } while ((int)pcVar50 != (int)pcVar51);
        if (w.translations.values[(longlong)pcVar41].text == (char **)0x0) {
          pcVar51 = unknown_string;
        }
        else {
          pcVar32 = w.translations.values[(longlong)pcVar41].text[w.language_index];
          pcVar51 = unknown_string;
          if (pcVar32 != (char *)0x0) {
            pcVar51 = pcVar32;
          }
        }
        auVar89 = ZEXT1664(auVar56);
        auVar95 = ZEXT1664(auVar60);
        auVar82 = ZEXT1664(auVar65);
        auVar91 = ZEXT1664(auVar81);
        draw_text(pcVar51,auVar56._0_4_,fVar88,(real_4 *)&rStack_33b8._s_0,(real_2)0x0,&fStack_27e8,
                  &default_shadow);
        fVar88 = auVar95._0_4_;
      }
      if (((ushort)bVar19 & 1) != 0) {
        w.starting_new_run = 0;
        w.starting_mode = 2;
        bVar53 = true;
      }
      fVar55 = -0.08;
      fVar88 = fVar88 + -0.08;
      rStack_33c8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
      rStack_33c8._8_8_ =
           *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4)
      ;
      draw_line(param_3,(real_2)(CONCAT44(uVar35,auVar89._0_4_ + -0.4) |
                                (ulonglong)(uint)fVar88 << 0x20),(real_2)0x3f4ccccd,0.003,
                (real_4 *)&rStack_33c8._s_0);
      auVar95 = ZEXT464((uint)(fVar88 + fVar55));
    }
    local_2fa8._0_4_ = 2.455453;
    local_2fa8._4_4_ = 1.4013e-45;
    local_2fa8._8_4_ = 2.4565842;
    local_2fa8._12_4_ = 1.4013e-45;
    local_2fa8._24_8_ = "menu_map_beach";
    if (settings.win_unlocks == 0) {
      local_2fa8._24_8_ = "menu_map_locked";
    }
    local_2fa8._16_4_ = 2.4531002;
    local_2fa8._20_4_ = 1.4013e-45;
    rStack_3954._s_0.x = auVar89._0_4_ + -0.25;
    rStack_3954._s_0.y = (float)auVar95._0_4_;
    rStack_3954._s_0.z = 0.0;
    bVar19 = do_triangle_button(param_3,param_4,(real_3 *)&rStack_3954._s_0,
                                (real_2)0x3d23d70a3d23d70a,(real_2)0x3cf5c28fbc75c28f);
    if (((ushort)bVar19 & 1) != 0) {
      uVar39 = w.sandbox_start_params.map_type + 6;
      if (-1 < (int)(w.sandbox_start_params.map_type + 3U)) {
        uVar39 = w.sandbox_start_params.map_type + 3U;
      }
      w.sandbox_start_params.map_type =
           (w.sandbox_start_params.map_type - (uVar39 & 0xfffffffc)) + 3;
    }
    rStack_3960._s_0.x = auVar89._0_4_ + 0.25;
    rStack_3960._s_0.y = (float)auVar95._0_4_;
    rStack_3960._s_0.z = 0.0;
    bVar19 = do_triangle_button(param_3,param_4,(real_3 *)&rStack_3960._s_0,
                                (real_2)0x3d23d70a3d23d70a,(real_2)0x3cf5c28f3c75c28f);
    if (((ushort)bVar19 & 1) != 0) {
      uVar39 = w.sandbox_start_params.map_type + 4;
      if (-1 < (int)(w.sandbox_start_params.map_type + 1U)) {
        uVar39 = w.sandbox_start_params.map_type + 1U;
      }
      w.sandbox_start_params.map_type =
           (w.sandbox_start_params.map_type - (uVar39 & 0xfffffffc)) + 1;
    }
    rStack_396c._s_0.x = (float)auVar89._0_4_;
    rStack_396c._s_0.y = (float)auVar95._0_4_;
    rStack_396c._s_0.z = 0.0;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_396c._s_0,(real_2)0x3d23d70a3e4ccccd,
                            "");
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    if (((ushort)bVar19 & 1) != 0) {
      uVar37 = w.sandbox_start_params.map_type + 4;
      if (-1 < (int)(w.sandbox_start_params.map_type + 1U)) {
        uVar37 = w.sandbox_start_params.map_type + 1U;
      }
      w.sandbox_start_params.map_type =
           (w.sandbox_start_params.map_type - (uVar37 & 0xfffffffc)) + 1;
    }
    iStack_2808 = (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.
                  cursor;
    iStack_2804 = (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.
                  size;
    uStack_2800 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_27f8 = (param_3->field29_0x128).font_infos[1].char_data;
    auStack_28a8._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    auStack_28a8._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_2820 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    iStack_2818 = (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts
                  .cursor;
    iStack_2814 = (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts
                  .size;
    puStack_2810 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    auStack_28a8._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    auStack_28a8._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    auStack_28a8._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    auStack_28a8._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    auStack_28a8._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    auStack_28a8._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    auStack_28a8._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    auStack_28a8._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    auStack_28a8._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    auStack_28a8._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    auStack_28a8._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    auStack_28a8._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    auStack_28a8._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    auStack_28a8._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    auStack_28a8._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    auStack_28a8._0_8_ = *(undefined8 *)pfVar4;
    auStack_28a8._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    auStack_28a8._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    auStack_28a8._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    auStack_28a8._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    rStack_33d8 = prVar2->field0_0x0;
    pcVar51 = *(char **)(local_2fa8 + (longlong)w.sandbox_start_params.map_type * 8);
    cVar5 = *pcVar51;
    if (cVar5 == '\0') {
      uVar37 = 0x1505;
    }
    else {
      uVar37 = 0x1505;
      do {
        pcVar51 = pcVar51 + 1;
        uVar37 = uVar37 + ((int)cVar5 ^ uVar37 * 0x21);
        cVar5 = *pcVar51;
      } while (cVar5 != '\0');
    }
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = (ulonglong)uVar37 % uVar29;
    do {
      auVar81 = auVar91._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x0001400634e7;
      auVar89 = ZEXT1664(auVar56);
      auVar95 = ZEXT1664(auVar60);
      auVar82 = ZEXT1664(auVar65);
      auVar91 = ZEXT1664(auVar81);
      strcmp();
      auVar81 = auVar91._0_16_;
      auVar65 = auVar82._0_16_;
      auVar60 = auVar95._0_16_;
      auVar56 = auVar89._0_16_;
      if (extraout_EAX_88 == 0) goto code_r0x0001400634e7;
      uVar38 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar38;
      if (uVar38 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)((ulonglong)uVar37 % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x0001400634e7:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar89 = ZEXT1664(auVar56);
    auVar95 = ZEXT1664(auVar60);
    auVar82 = ZEXT1664(auVar65);
    auVar87 = ZEXT1664(auVar81);
    draw_text(pcVar51,auVar56._0_4_,auVar60._0_4_,(real_4 *)&rStack_33d8._s_0,(real_2)0x0,
              (font_info *)auStack_28a8,&default_shadow);
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fVar88 = auVar95._0_4_;
    if (w.sandbox_start_params.map_type == 0) {
      fVar88 = fVar88 + -0.08;
      if (w.sandbox_start_params.no_creatures == false) {
        uVar29 = 0xd9380b90 % (ulonglong)w.translations.max_entries;
        iVar28 = (int)uVar29;
        do {
          lVar40 = (longlong)(int)uVar29;
          if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_90 == 0))
          goto code_r0x000140063611;
          uVar37 = (int)uVar29 + 1;
          uVar29 = (ulonglong)uVar37;
          if (uVar37 == uVar39) {
            uVar29 = 0;
          }
        } while ((int)uVar29 != iVar28);
      }
      else {
        uVar29 = 0xd9718a96 % (ulonglong)w.translations.max_entries;
        iVar28 = (int)uVar29;
        do {
          lVar40 = (longlong)(int)uVar29;
          if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_89 == 0))
          goto code_r0x000140063611;
          uVar37 = (int)uVar29 + 1;
          uVar29 = (ulonglong)uVar37;
          if (uVar37 == uVar39) {
            uVar29 = 0;
          }
        } while ((int)uVar29 != iVar28);
      }
      lVar40 = (longlong)iVar28;
code_r0x000140063611:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
      rStack_3978._s_0.x = (float)auVar89._0_4_;
      rStack_3978._s_0.z = 0.0;
      rStack_3978._s_0.y = fVar88;
      bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3978._s_0,(real_2)0x3d23d70a3ecccccd
                              ,pcVar51);
      fVar88 = auVar95._0_4_;
      if (((ushort)bVar19 & 1) != 0) {
        w.sandbox_start_params.no_creatures = (bool)(w.sandbox_start_params.no_creatures ^ 1);
      }
    }
    uVar39 = w.translations.max_entries;
    ppcVar16 = w.translations.keys;
    fVar88 = fVar88 + -0.19999999;
    bVar52 = w.sandbox_start_params.map_type == 3;
    bVar13 = settings.win_unlocks == 0;
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xc8f0a0a6U % uVar29;
    do {
      lVar40 = (longlong)(int)uVar48;
      if ((ppcVar16[lVar40] == (char *)0x0) || (strcmp(), extraout_EAX_91 == 0))
      goto code_r0x000140063714;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xc8f0a0a6U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
code_r0x000140063714:
    rStack_3984._s_0.x = (float)auVar89._0_4_;
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    if (bVar52 && bVar13) {
      fVar55 = (param_3->foreground_color).field0_0x0._s_0.z;
      uVar64 = *(undefined8 *)&(param_3->foreground_color).field0_0x0;
      auVar70._0_4_ = (float)uVar64 * 0.01;
      auVar70._4_4_ = (float)((ulonglong)uVar64 >> 0x20) * 0.01;
      auVar70._8_8_ = 0;
      rVar34 = (real_2_u_0)vmovlps_avx(auVar70);
      (param_3->foreground_color).field0_0x0.xy.field0_0x0 = rVar34;
      (param_3->foreground_color).field0_0x0._s_0.z = fVar55 * 0.01;
      uVar64 = *(undefined8 *)
                ((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
      (prVar3->field0_0x0).xy.field0_0x0 = (prVar2->field0_0x0).xy.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uVar64;
      uVar39 = w.translations.max_entries;
      ppcVar16 = w.translations.keys;
      uVar29 = (ulonglong)w.translations.max_entries;
      uVar48 = 0xb0cabf76U % uVar29;
      do {
        rStack_3984._s_0.x = (float)auVar89._0_4_;
        lVar40 = (longlong)(int)uVar48;
        if (ppcVar16[lVar40] == (char *)0x0) goto code_r0x000140063804;
        strcmp();
        rStack_3984._s_0.x = (float)auVar89._0_4_;
        if (extraout_EAX_92 == 0) goto code_r0x000140063804;
        uVar37 = (int)uVar48 + 1;
        uVar48 = (ulonglong)uVar37;
        if (uVar37 == uVar39) {
          uVar48 = 0;
        }
        iVar28 = (int)(0xb0cabf76U % uVar29);
      } while ((int)uVar48 != iVar28);
      lVar40 = (longlong)iVar28;
code_r0x000140063804:
      if (w.translations.values[lVar40].text == (char **)0x0) {
        pcVar51 = unknown_string;
      }
      else {
        pcVar32 = w.translations.values[lVar40].text[w.language_index];
        pcVar51 = unknown_string;
        if (pcVar32 != (char *)0x0) {
          pcVar51 = pcVar32;
        }
      }
    }
    rStack_3984._s_0.z = 0.0;
    rStack_3984._s_0.y = fVar88;
    bVar19 = do_text_button(param_3,param_4,(real_3 *)&rStack_3984._s_0,(real_2)0x3d23d70a3e4ccccd,
                            pcVar51);
    pqVar14 = ac.queued_sounds;
    auVar60 = auVar87._0_16_;
    auVar56 = auVar82._0_16_;
    if (((ushort)bVar19 & 1) == 0) {
code_r0x0001400639a0:
      (prVar2->field0_0x0).xy.field0_0x0 = local_39d8;
      *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uStack_39d0;
      (prVar3->field0_0x0).xy.field0_0x0 = local_39b8;
      *(undefined8 *)((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
           uStack_39b0;
      break;
    }
    if (bVar52 && bVar13) {
      uVar39 = (seed >> 0x10 ^ seed) * 0x7feb352d;
      uVar39 = (uVar39 >> 0xf ^ uVar39) * -0x7b935975;
      seed = uVar39 >> 0x10 ^ uVar39;
      uVar29 = (ulonglong)seed;
      if ((((ac.initialized == true) && (0 < sounds.error.n_samples)) &&
          (sounds.error.data != (short *)0x0)) &&
         (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
        uVar39 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar39].sound = (sound_t *)0x1401eb230;
        uVar64 = vmovlps_avx(SUB6416(ZEXT464(0x3f800000),0));
        pqVar14[(int)uVar39].params.volume = (float)(int)uVar64;
        pqVar14[(int)uVar39].params.delay = (float)(int)((ulonglong)uVar64 >> 0x20);
        pqVar14[(int)uVar39].params.pitch_shift =
             (float)uVar29 * 2.3283064e-10 + (float)uVar29 * 2.3283064e-10 + -1.0;
        pqVar15 = pqVar14 + (int)uVar39;
        (pqVar15->params).lowpass_dist = 0.0;
        (pqVar15->params).type = 0;
        *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
        *(undefined8 *)((longlong)pqVar14[(int)uVar39].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
      goto code_r0x0001400639a0;
    }
    w.starting_new_run = 1;
    w.starting_mode = 2;
    (prVar2->field0_0x0).xy.field0_0x0 = local_39d8;
    *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39d0;
    (prVar3->field0_0x0).xy.field0_0x0 = local_39b8;
    *(undefined8 *)((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
         uStack_39b0;
    goto code_r0x0001400639cf;
  }
  if (bVar53) {
code_r0x0001400639cf:
    pqVar14 = ac.queued_sounds;
    if (w.starting_game == 0) {
      local_3988 = 0;
      local_3990 = 0;
      if ((ac.initialized == true) &&
         (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
        uVar39 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar39].sound = (sound_t *)0x0;
        pqVar14[(int)uVar39].params.volume = 0.0;
        pqVar14[(int)uVar39].params.delay = 0.0;
        pqVar14[(int)uVar39].params.pitch_shift = 0.0;
        pqVar14[(int)uVar39].params.lowpass_dist = 0.0;
        pqVar14[(int)uVar39].params.type = 2;
        pqVar14[(int)uVar39].filtered[0] = 0.0;
        pqVar14[(int)uVar39].filtered[1] = 0.0;
        *(undefined8 *)((longlong)pqVar14[(int)uVar39].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
      w.starting_game = 1;
      w.start_trans = 0.0;
    }
  }
  local_668._0_32_ = ZEXT1232(ZEXT812(0));
  local_628 = 0.0;
  auVar87 = ZEXT1664(auVar56);
  auVar94 = ZEXT1664(auVar60);
  local_668._32_32_ = local_668._0_32_;
  rVar23 = get_text_size("discord",pfVar4,(text_params *)local_668);
  local_2968._0_4_ = pfVar4->texture;
  local_2968._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
  local_2968._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
  local_2968._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
  local_2968._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
  local_2968._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
  local_2968._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
  local_2968._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
  local_2968._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
  local_2968._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
  local_2968._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
  local_2968._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
  local_2968._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
  local_2968._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
  local_2968._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
  local_2968._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
  local_2968._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
  local_2968._80_4_ =
       (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
  local_2968._84_4_ =
       (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
  local_2968._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
  local_2968._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
  local_2968._128_4_ =
       (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
  local_2968._132_4_ =
       (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
  puStack_28e0 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
  uStack_28d8._0_4_ =
       (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
  uStack_28d8._4_4_ =
       (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
  puStack_28d0 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
  uStack_28c8._0_4_ =
       (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
  uStack_28c8._4_4_ =
       (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
  uStack_28c0 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
  psStack_28b8 = (param_3->field29_0x128).font_infos[1].char_data;
  local_33e8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
  local_33e8._8_8_ =
       *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
  auVar56 = vblendps_avx(auVar87._0_16_,___xmm_0000000000000000bf80000000000000,0xe);
  auVar83._0_4_ = rVar23.field0_0x0._0_4_ * -0.5 + auVar56._0_4_ + -0.05;
  auVar83._4_4_ = rVar23.field0_0x0._4_4_ * 0.5 + auVar56._4_4_ + 0.05;
  auVar83._8_4_ = auVar56._8_4_ + 0.0 + 0.0;
  auVar83._12_4_ = auVar56._12_4_ + 0.0 + 0.0;
  auVar56 = vmovshdup_avx(auVar83);
  prVar44 = &local_33e8;
  auVar89 = ZEXT864((ulonglong)rVar23.field0_0x0);
  auVar95 = ZEXT1664(auVar83);
  auVar82 = ZEXT1664(auVar56);
  auVar93 = ZEXT1664(auVar87._0_16_);
  auVar94 = ZEXT1664(auVar94._0_16_);
  draw_text("discord",auVar83._0_4_,auVar56._0_4_,(real_4 *)&prVar44->_s_0,(real_2)0x0,
            (font_info *)local_2968,&default_shadow);
  auVar87 = ZEXT464(0x3f000000);
  auVar56 = vshufps_avx(auVar89._0_16_,auVar89._0_16_,0xf5);
  local_3598.xy.field0_0x0 = (real_2)vmovlps_avx(auVar95._0_16_);
  local_3598._s_0.z = 0.0;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_3598._s_0,
                          (real_2)(CONCAT44((int)((ulonglong)prVar44 >> 0x20),
                                            auVar89._0_4_ * 0.5 + 0.03) |
                                  (ulonglong)(uint)(auVar56._0_4_ * 0.5 + 0.03) << 0x20),"");
  fVar88 = auVar95._0_4_;
  fVar55 = auVar82._0_4_;
  fVar54 = auVar94._0_4_;
  if (((ushort)bVar19 & 1) != 0) {
    if (steamless == false) {
      puVar26 = (undefined8 *)
                SteamInternal_ContextInit
                          (`class_ISteamFriends*___ptr64___cdecl_SteamFriends(void)'::__l2::
                           s_CallbackCounterAndContext);
      (**(code **)(*(longlong *)*puVar26 + 0xf0))
                ((longlong *)*puVar26,"https://discord.gg/HppfTRxGbe",0);
      fVar88 = auVar95._0_4_;
      fVar55 = auVar82._0_4_;
      fVar54 = auVar94._0_4_;
    }
    else {
      bVar52 = copy_to_clipboard("https://discord.gg/HppfTRxGbe");
      fVar88 = auVar95._0_4_;
      fVar55 = auVar82._0_4_;
      fVar54 = auVar94._0_4_;
      if (bVar52) {
        copied_popup = 2.0;
      }
    }
  }
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  if (steamless == true) {
    auVar71._0_12_ = ZEXT812(0);
    auVar71._12_4_ = 0;
    auVar56 = vmaxss_avx(auVar71,ZEXT416((uint)(copied_popup - fVar54)));
    copied_popup = auVar56._0_4_;
    local_2a28._0_4_ = pfVar4->texture;
    local_2a28._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    local_2a28._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    local_2a28._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    local_2a28._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    local_2a28._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    local_2a28._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    local_2a28._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    local_2a28._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    local_2a28._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    local_2a28._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    local_2a28._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    local_2a28._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    local_2a28._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    local_2a28._64_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0xf8);
    local_2a28._96_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    local_2a28._100_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    puStack_29c0 = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    uStack_29b8._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    uStack_29b8._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    puStack_29b0 = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    local_29a8._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    local_29a8._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_29a0 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_2998._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_2998._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    puStack_2990 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    uStack_2988._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_2988._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_2980 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_2978 = (param_3->field29_0x128).font_infos[1].char_data;
    local_35a8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_35a8._s_0.z = 1.0;
    auVar56 = vminss_avx(auVar56,ZEXT416(0x3f800000));
    auVar89 = ZEXT464((uint)(fVar55 + 0.1));
    local_35a8._s_0.w = (float)auVar56._0_4_;
    auVar95 = ZEXT464((uint)(fVar88 + -0.02));
    uVar29 = (ulonglong)w.translations.max_entries;
    uVar48 = 0xde0344c6U % uVar29;
    do {
      auVar60 = auVar93._0_16_;
      auVar56 = auVar87._0_16_;
      fVar55 = auVar95._0_4_;
      fVar88 = auVar89._0_4_;
      lVar40 = (longlong)(int)uVar48;
      if (ppcVar16[lVar40] == (char *)0x0) goto LAB_140063d7e;
      auVar89 = ZEXT1664(auVar89._0_16_);
      auVar95 = ZEXT1664(auVar95._0_16_);
      auVar87 = ZEXT1664(auVar56);
      auVar93 = ZEXT1664(auVar60);
      strcmp();
      auVar60 = auVar93._0_16_;
      auVar56 = auVar87._0_16_;
      fVar55 = auVar95._0_4_;
      fVar88 = auVar89._0_4_;
      if (extraout_EAX_93 == 0) goto LAB_140063d7e;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      iVar28 = (int)(0xde0344c6U % uVar29);
    } while ((int)uVar48 != iVar28);
    lVar40 = (longlong)iVar28;
LAB_140063d7e:
    if (w.translations.values[lVar40].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[lVar40].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    auVar87 = ZEXT1664(auVar56);
    auVar93 = ZEXT1664(auVar60);
    draw_text(pcVar51,fVar55,fVar88,(real_4 *)&local_35a8._s_0,(real_2)0x3f80000000000000,
              (font_info *)local_2a28,&default_shadow);
  }
  if (DAT_1401fa0b8 == '\x01') {
    param_4->hovered_ui_element = next_gui_element;
  }
  next_gui_element = next_gui_element + 1;
  fVar88 = 0.3 - auVar93._0_4_;
  local_3504._s_2.yz.field0_0x0 = (real_2)vmovlps_avx(SUB6416(ZEXT464(0xbf666666),0));
  local_3504._s_0.x = fVar88;
  bVar19 = do_text_button(param_3,param_4,(real_3 *)&local_3504._s_0,(real_2)0x3d4ccccd3e99999a,
                          version_string);
  uVar39 = w.translations.max_entries;
  ppcVar16 = w.translations.keys;
  fVar55 = auVar93._0_4_;
  if (((ushort)bVar19 & 1) != 0) {
    DAT_1401fa0b8 = '\x01';
  }
  if (w.game_mode != 0) {
    uVar29 = 0x539329e6 % (ulonglong)w.translations.max_entries;
    uVar48 = uVar29;
    do {
      uVar47 = (ulonglong)(int)uVar48;
      if ((ppcVar16[uVar47] == (char *)0x0) || (strcmp(), extraout_EAX_94 == 0)) break;
      uVar37 = (int)uVar48 + 1;
      uVar48 = (ulonglong)uVar37;
      if (uVar37 == uVar39) {
        uVar48 = 0;
      }
      uVar47 = uVar29;
    } while ((int)uVar48 != (int)uVar29);
    if (w.translations.values[uVar47].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar32 = w.translations.values[uVar47].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar32 != (char *)0x0) {
        pcVar51 = pcVar32;
      }
    }
    sprintf(local_668,pcVar51);
    local_2ae8.texture = pfVar4->texture;
    local_2ae8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
    local_2ae8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    local_2ae8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    local_2ae8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    local_2ae8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    local_2ae8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    local_2ae8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    local_2ae8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    local_2ae8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    local_2ae8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    local_2ae8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    local_2ae8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    local_2ae8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    local_2ae8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    local_2ae8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    local_2ae8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    local_2ae8.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    local_2ae8.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    local_2ae8.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    local_2ae8.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    local_2ae8.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    local_2ae8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    local_2ae8.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    local_2ae8.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    local_2ae8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    local_2ae8.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    local_2ae8.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    local_2ae8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    local_2ae8.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    local_2ae8.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    local_2ae8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    local_2ae8.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    local_2ae8.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    local_2ae8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    local_2ae8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    local_33f8.xy.field0_0x0 = (real_2)(prVar2->field0_0x0).xy.field0_0x0;
    local_33f8._8_8_ =
         *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4);
    auVar87 = ZEXT1664(auVar87._0_16_);
    auVar89 = ZEXT1664(auVar93._0_16_);
    draw_text(local_668,fVar88 + 0.43,-0.9,(real_4 *)&local_33f8._s_0,(real_2)0xbf800000,&local_2ae8
              ,&default_shadow);
    fVar55 = auVar89._0_4_;
  }
  uVar39 = local_39bc;
  if (DAT_1401fa0b8 == '\x01') {
    if (((param_4->pressed_buttons[3] & 8) == 0) &&
       ((((param_4->gamepad).buttons & 0x10) == 0 || ((param_4->gamepad_prev_buttons & 0x10) != 0)))
       ) {
      fVar88 = fVar55 + fVar55 + -0.2 + -0.8;
      local_34b8._8_4_ = 0.0;
      local_34b8._0_8_ = 0;
      local_34b8._16_12_ = ZEXT812(0);
      local_34b8._28_4_ = 0;
      auVar95 = ZEXT1664(local_34b8._16_16_);
      local_3470._8_8_ = 0x3b03126f00000000;
      local_3470._0_8_ = 0;
      local_3470._32_4_ = 1.0;
      local_343c = (real_2_u_0)0x0;
      local_3430 = 0.03;
      local_3470._16_16_ = local_34b8._16_16_;
      local_344c = (real_4_u_0)local_34b8._16_16_;
      local_3434 = fVar88;
      rVar23 = get_text_size(patch_notes,pfVar4,(text_params *)local_3470);
      fVar55 = auVar87._0_4_ * rVar23.field0_0x0._0_4_;
      fVar54 = auVar87._0_4_ * rVar23.field0_0x0._4_4_;
      local_3408._s_0.z = 1.0;
      local_3408.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_3408._s_0.w = 1.0;
      auVar89 = ZEXT1664((undefined1  [16])local_3408);
      local_3418.xy.field0_0x0 = (real_2)(real_2_u_0)0x3a83126f3a83126f;
      local_3418._8_8_ = 0x3f7333333a83126f;
      fVar76 = 0.1;
      local_35b8.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_35b8._s_0.z = 0.0;
      draw_rounded_rectangle_outlined
                (param_3,(real_3 *)&local_35b8._s_0,
                 (real_2)((ulonglong)(uint)(fVar55 + 0.1) | 0x3f99999a00000000),0.05,0.01,
                 (real_4 *)&local_3418._s_0,(real_4 *)&local_3408._s_0);
      local_34b8._12_4_ = 0.002;
      local_34b8._32_4_ = 1.0;
      local_3494 = auVar95._0_16_;
      local_3484 = (real_2_u_0)0x0;
      local_3478 = 0.03;
      local_2ba8.texture = pfVar4->texture;
      local_2ba8._4_4_ = *(undefined4 *)&pfVar4->field_0x4;
      local_2ba8.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
      local_2ba8.info.data = (param_3->field29_0x128).font_infos[1].info.data;
      local_2ba8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
      local_2ba8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
      local_2ba8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
      local_2ba8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
      local_2ba8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
      local_2ba8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
      local_2ba8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
      local_2ba8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
      local_2ba8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
      local_2ba8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
      local_2ba8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
      local_2ba8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
      local_2ba8.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
      local_2ba8.info.cff.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
      local_2ba8.info.cff.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
      local_2ba8.info.charstrings.data =
           (param_3->field29_0x128).font_infos[1].info.charstrings.data;
      local_2ba8.info.charstrings.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.
           cursor;
      local_2ba8.info.charstrings.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size
      ;
      local_2ba8.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
      local_2ba8.info.gsubrs.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
      local_2ba8.info.gsubrs.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
      local_2ba8.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
      local_2ba8.info.subrs.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
      local_2ba8.info.subrs.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
      local_2ba8.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
      local_2ba8.info.fontdicts.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor
      ;
      local_2ba8.info.fontdicts.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
      local_2ba8.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
      local_2ba8.info.fdselect.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
      local_2ba8.info.fdselect.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
      local_2ba8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
      local_2ba8.char_data = (param_3->field29_0x128).font_infos[1].char_data;
      local_3428 = auVar89._0_16_;
      auVar89 = ZEXT1264(ZEXT812(0));
      local_347c = fVar88;
      draw_text(patch_notes,0.0 - fVar55,patch_notes_scroll + 0.95,(real_4 *)&local_3428._s_0,
                (real_2)0x3f800000bf800000,&local_2ba8,(text_params *)local_34b8);
      auVar56 = vmaxss_avx(auVar89._0_16_,ZEXT416((uint)(fVar54 + fVar54 + -2.0 + fVar76)));
      auVar56 = vminss_avx(auVar56,ZEXT416((uint)(param_4->mouse_wheel * -0.1 + patch_notes_scroll))
                          );
      auVar56 = vmaxss_avx(auVar89._0_16_,auVar56);
      patch_notes_scroll = auVar56._0_4_;
      iVar28 = param_4->hovered_ui_element;
      pqVar14 = ac.queued_sounds;
      goto joined_r0x000140064036;
    }
    DAT_1401fa0b8 = '\0';
    param_4->escape_blocked = true;
  }
  iVar28 = param_4->hovered_ui_element;
  pqVar14 = ac.queued_sounds;
joined_r0x000140064036:
  ac.queued_sounds = pqVar14;
                    /* WARNING: Read-only address (ram,0x0001401bcf60) is written */
                    /* WARNING: Read-only address (ram,0x0001401bdaf0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bdbb0) is written */
  if ((iVar28 != 0) && (iVar28 != param_4->old_hovered_ui_element)) {
    uVar37 = (seed >> 0x10 ^ seed) * 0x7feb352d;
    uVar37 = (uVar37 >> 0xf ^ uVar37) * -0x7b935975;
    seed = uVar37 >> 0x10 ^ uVar37;
    uVar29 = (ulonglong)seed;
    if ((ac.initialized == true) &&
       (((0 < sounds.menu_tick.n_samples && (sounds.menu_tick.data != (short *)0x0)) &&
        (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
      uVar37 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
      pqVar14[(int)uVar37].sound = (sound_t *)0x1401eb1d0;
      uVar64 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
      pqVar14[(int)uVar37].params.volume = (float)(int)uVar64;
      pqVar14[(int)uVar37].params.delay = (float)(int)((ulonglong)uVar64 >> 0x20);
      pqVar14[(int)uVar37].params.pitch_shift = (float)uVar29 * 2.3283064e-10 * 6.0 + -3.0;
      pqVar15 = pqVar14 + (int)uVar37;
      (pqVar15->params).lowpass_dist = 0.0;
      (pqVar15->params).type = 0;
      *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
      *(undefined8 *)((longlong)pqVar14[(int)uVar37].filtered + 5) = 0;
      LOCK();
      ac.last_queued_sound = ac.last_queued_sound + 1;
      UNLOCK();
    }
  }
  pqVar14 = ac.queued_sounds;
  if (((param_4->pressed_buttons[0] & 2) != 0) &&
     (((~param_4->click_blocked | (byte)uVar39) & 1) == 0)) {
    uVar37 = (seed >> 0x10 ^ seed) * 0x7feb352d;
    uVar37 = (uVar37 >> 0xf ^ uVar37) * -0x7b935975;
    seed = uVar37 >> 0x10 ^ uVar37;
    uVar29 = (ulonglong)seed;
    if (((ac.initialized == true) &&
        ((0 < sounds.menu_click.n_samples && (sounds.menu_click.data != (short *)0x0)))) &&
       (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
      uVar37 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
      ac.queued_sounds[(int)uVar37].sound = (sound_t *)0x1401eb1e0;
      uVar64 = vmovlps_avx(SUB6416(ZEXT464(0x3f800000),0));
      pqVar14[(int)uVar37].params.volume = (float)(int)uVar64;
      pqVar14[(int)uVar37].params.delay = (float)(int)((ulonglong)uVar64 >> 0x20);
      pqVar14[(int)uVar37].params.pitch_shift = (float)uVar29 * 2.3283064e-10 * 6.0 + -3.0;
      pqVar15 = pqVar14 + (int)uVar37;
      (pqVar15->params).lowpass_dist = 0.0;
      (pqVar15->params).type = 0;
      *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
      *(undefined8 *)((longlong)pqVar14[(int)uVar37].filtered + 5) = 0;
      LOCK();
      ac.last_queued_sound = ac.last_queued_sound + 1;
      UNLOCK();
    }
  }
  param_4->old_hovered_ui_element = param_4->hovered_ui_element;
  (prVar1->field0_0x0).xy.field0_0x0 = local_30e8;
  *(undefined8 *)((longlong)&(param_3->background_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       uStack_30e0;
  (prVar2->field0_0x0).xy.field0_0x0 = local_30f8;
  *(undefined8 *)((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       uStack_30f0;
  (prVar3->field0_0x0).xy.field0_0x0 = local_3108;
  *(undefined8 *)((longlong)&(param_3->highlight_color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       uStack_3100;
  uVar6 = (param_4->gamepad).buttons;
  if (((param_4->pressed_buttons[3] & 8) != 0) ||
     ((uVar37 = uVar39, (uVar6 & 0x10) != 0 && ((param_4->gamepad_prev_buttons & 0x10) == 0)))) {
    uVar37 = 1;
    if (param_4->escape_blocked != false) {
      uVar37 = uVar39 & 0xff;
    }
  }
  iVar28 = 0;
  uVar39 = 0;
  if ((uVar6 & 8) != 0) {
    uVar39 = (uint)((param_4->gamepad_prev_buttons & 8) == 0);
  }
  if ((uVar6 & 4) != 0) {
    iVar28 = (int)(short)(((*(uint *)&param_4->gamepad_prev_buttons >> 2 & 1) != 0) - 1);
  }
  if ((uVar6 & 1) == 0) {
    uVar38 = 0;
  }
  else {
    uVar38 = ~*(uint *)&param_4->gamepad_prev_buttons & 1;
  }
  iVar30 = 0;
  if ((uVar6 & 2) != 0) {
    iVar30 = (int)(short)(((*(uint *)&param_4->gamepad_prev_buttons >> 1 & 1) != 0) - 1);
  }
  prVar33 = (real_2 *)0x0;
  fVar55 = (float)(int)(iVar28 + uVar39);
  fVar88 = (param_4->mouse).field0_0x0._s_0.x;
  if ((iVar28 + uVar39 != 0) || (iVar30 + uVar38 != 0)) {
    if (param_4->active_ui_element == (void *)0x0) {
      rVar34._s_0 = (param_4->mouse).field0_0x0._s_0;
      fVar78 = rVar34._s_0.x;
      fVar42 = rVar34._s_0.y;
      fVar54 = fVar78;
      fVar76 = fVar42;
      if (0 < (longlong)n_gamepad_anchors) {
        auVar84._8_4_ = 0x80000000;
        auVar84._0_8_ = 0x8000000080000000;
        auVar84._12_4_ = 0x80000000;
        auVar89 = ZEXT1664(auVar84);
        fVar54 = fVar88 * 0.9 - DAT_1401fa0c4;
        auVar56 = vandps_avx(ZEXT416((uint)fVar54),auVar84);
        auVar85._8_4_ = 0x3effffff;
        auVar85._0_8_ = 0x3effffff3effffff;
        auVar85._12_4_ = 0x3effffff;
        auVar95 = ZEXT1664(auVar85);
        auVar56 = vorps_avx(auVar85,auVar56);
        auVar56 = ZEXT416((uint)(fVar54 + auVar56._0_4_));
        auVar56 = vroundss_avx(auVar56,auVar56,0xb);
        fVar54 = INFINITY;
        lVar40 = 0;
        do {
          rVar8 = (real_2_u_0)*(real_2_u_0 *)&gamepad_anchors[lVar40].field0_0x0._s_0;
          fVar76 = rVar8._0_4_ - fVar78;
          fVar45 = rVar8._s_0.y - fVar42;
          if (0.001 <= fVar45 * fVar45 + fVar76 * fVar76 + 0.0) {
            fVar76 = rVar8._0_4_ * 0.9 + -DAT_1401fa0c4;
            auVar60 = vandps_avx(ZEXT416((uint)fVar76),auVar89._0_16_);
            auVar60 = vorps_avx(auVar60,auVar95._0_16_);
            auVar60 = ZEXT416((uint)(fVar76 + auVar60._0_4_));
            auVar60 = vroundss_avx(auVar60,auVar60,0xb);
            fVar45 = (auVar60._0_4_ + DAT_1401fa0c4) * 1.1111112 -
                     ((DAT_1401fa0c4 + auVar56._0_4_) * 1.1111112 * 0.98 + fVar88 * 0.02);
            fVar46 = rVar8._s_0.y - (param_4->mouse).field0_0x0._s_0.y;
            fVar76 = fVar46 * fVar46 + fVar45 * fVar45 + 0.0;
            if (fVar76 <= 1e-06) {
              fVar45 = 0.0;
              fVar46 = 0.0;
            }
            else {
              auVar60 = vsqrtss_avx(ZEXT416((uint)fVar76),ZEXT416((uint)fVar76));
              fVar90 = 1.0 / auVar60._0_4_;
              auVar89 = ZEXT1664(auVar89._0_16_);
              auVar95 = ZEXT1664(auVar95._0_16_);
              fVar45 = fVar45 * fVar90;
              fVar46 = fVar46 * fVar90;
            }
            fVar45 = fVar46 * (float)(int)(iVar30 + uVar38) + fVar45 * fVar55 + 0.0;
            if ((0.1 < fVar45) && (fVar76 = (1.2 - fVar45) * fVar76, fVar76 < fVar54)) {
              rVar34 = rVar8;
              fVar54 = fVar76;
            }
          }
          lVar40 = lVar40 + 1;
        } while (n_gamepad_anchors != lVar40);
        prVar33 = gamepad_anchors;
        fVar54 = rVar34._s_0.x;
        fVar76 = rVar34._s_0.y;
      }
      rVar34 = (real_2_u_0)
               (CONCAT44((int)((ulonglong)prVar33 >> 0x20),fVar54 - fVar78) |
               (ulonglong)(uint)(fVar76 - fVar42) << 0x20);
    }
    else {
      rVar34._s_0.y = 0.0;
      rVar34._s_0.x = fVar55 * 0.006;
    }
    move_cursor(local_39c8,(real_2)rVar34);
  }
  gamepad_anchors = (real_2 *)0x0;
  return SUB41(uVar37,0);
}

