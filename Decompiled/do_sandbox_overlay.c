
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
do_sandbox_overlay(sandbox_menu *param_1,render_context *param_2,render_context *param_3,
                  user_input *param_4,float param_5,uint param_6)

{
  real_4x4 *prVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  char cVar5;
  char *pcVar6;
  plan_cell *ppVar7;
  int_2_u_0_s_0 iVar8;
  float *pfVar9;
  real_2_u_0 rVar10;
  real_2_u_0 *prVar11;
  real_4_u_0 rVar12;
  queued_sound *pqVar13;
  cell_item *pcVar14;
  cell_pickup *pcVar15;
  queued_sound *pqVar16;
  material_t *pmVar17;
  char **ppcVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int iVar22;
  int extraout_EAX_03;
  float fVar23;
  int extraout_EAX_04;
  int extraout_EAX_05;
  int extraout_EAX_06;
  LPVOID pvVar24;
  tool_render_info *ptVar25;
  body *pbVar26;
  ring_render_info *prVar27;
  cell_render_info *pcVar28;
  hexagon_render_info *phVar29;
  mutation_item *pmVar30;
  uchar *puVar31;
  undefined4 extraout_var;
  real_2 *prVar32;
  undefined8 uVar33;
  icon_render_info *piVar34;
  icon_render_info *piVar35;
  char *pcVar36;
  undefined4 uVar40;
  real_2 rVar37;
  longlong lVar38;
  ulong64 uVar39;
  uchar uVar41;
  undefined4 uVar45;
  cell_render_info *pcVar42;
  undefined8 uVar43;
  real_2 rVar44;
  byte bVar46;
  longlong lVar47;
  creature_t *pcVar48;
  real_2_u_0 *prVar49;
  ulonglong uVar50;
  body *pbVar51;
  int *piVar52;
  real_4x4_u_0 *prVar53;
  int iVar54;
  longlong lVar55;
  int iVar56;
  byte bVar57;
  uint uVar58;
  uint uVar59;
  int iVar60;
  int iVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  real_4 *prVar64;
  float *pfVar65;
  ulonglong uVar66;
  creature_t *pcVar67;
  creature_t *pcVar68;
  uint uVar69;
  body *pbVar70;
  real_2_u_0 rVar71;
  bool bVar72;
  undefined1 auVar73 [12];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [64];
  float fVar77;
  undefined1 auVar79 [16];
  float fVar78;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [16];
  float fVar84;
  undefined1 in_ZMM5 [64];
  undefined1 auVar85 [64];
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [64];
  undefined1 auVar91 [16];
  undefined1 auVar92 [64];
  undefined1 auVar93 [64];
  float fVar94;
  undefined1 auVar95 [64];
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [64];
  undefined1 auVar99 [16];
  undefined1 auVar100 [64];
  undefined1 auVar101 [64];
  body *local_1228;
  float local_1220;
  float local_1210;
  float local_1204;
  ulonglong local_1200;
  real_2 *local_11f0;
  ulonglong local_11e8;
  real_3_u_0 local_11cc;
  real_3_u_0 local_11c0;
  real_3_u_0 local_11b4;
  real_4_u_0 local_11a8;
  real_4_u_0 local_1198;
  real_4_u_0 local_1188;
  real_4_u_0 local_1178;
  real_4_u_0 local_1168;
  real_4_u_0 local_1158;
  slider_params local_1148;
  slider_params local_1138;
  real_3_u_0 local_1128;
  real_3_u_0 local_1118;
  real_3_u_0 local_1108;
  real_3_u_0 local_10f8;
  real_3_u_0 local_10e8;
  real_3_u_0 local_10d8;
  real_3_u_0 local_10c8;
  real_3_u_0 local_10b8;
  real_4_u_0 local_10a8;
  real_4_u_0 local_1098;
  spawn_creature_params local_1088;
  undefined1 local_1078 [32];
  undefined1 local_1058 [16];
  undefined1 local_1048 [16];
  real_4_u_0 local_1038;
  real_4_u_0 local_1028;
  real_4_u_0 local_1018;
  real_4_u_0 local_1008;
  real_2_u_0 local_ff8;
  undefined8 uStack_ff0;
  real_4_u_0 local_fe8;
  real_4_u_0 local_fd8;
  real_4_u_0 local_fc8;
  real_4_u_0 local_fb8;
  real_4_u_0 local_fa8;
  real_4_u_0 local_f98;
  real_4_u_0 local_f88;
  real_4_u_0 local_f78;
  spawn_creature_params local_f68;
  real_4_u_0 local_f58;
  real_4_u_0 local_f48;
  real_4_u_0 local_f38;
  real_4_u_0 local_f28;
  real_4_u_0 local_f18;
  real_4_u_0 local_f08;
  real_4_u_0 local_ef8;
  real_4_u_0 local_ee8;
  real_4_u_0 local_ed8;
  undefined1 local_ec8 [32];
  undefined1 local_ea8 [32];
  float local_e88;
  undefined1 local_e78 [32];
  undefined1 local_e58 [32];
  float local_e38;
  undefined1 local_e28 [32];
  undefined1 local_e08 [32];
  float local_de8;
  text_params local_dd8;
  undefined1 local_d88 [32];
  undefined1 local_d68 [32];
  float local_d48;
  text_params local_d38;
  undefined1 local_cf0 [36];
  undefined1 local_ccc [32];
  real_4x4_u_0 local_ca8;
  real_4x4_u_0 local_c68;
  real_4x4_u_0 local_c28;
  real_4x4_u_0 local_be8;
  real_4x4_u_0 local_ba8;
  real_4x4_u_0 local_b68;
  real_4x4_u_0 local_b28;
  font_info local_ae8;
  font_info local_a28;
  font_info local_968;
  undefined1 local_8a8 [136];
  uchar *puStack_820;
  undefined8 uStack_818;
  uchar *puStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  stbtt_packedchar *psStack_7f8;
  undefined1 local_7e8 [136];
  uchar *puStack_760;
  undefined8 uStack_758;
  uchar *puStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  stbtt_packedchar *psStack_738;
  undefined1 local_728 [136];
  uchar *puStack_6a0;
  undefined8 uStack_698;
  undefined1 auStack_690 [32];
  undefined1 local_668 [96];
  undefined1 local_608 [32];
  undefined8 local_5e8;
  uchar *puStack_5e0;
  undefined8 uStack_5d8;
  uchar *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  stbtt_packedchar *psStack_5b8;
  undefined1 local_5a8 [96];
  undefined1 local_548 [32];
  undefined8 local_528;
  uchar *puStack_520;
  undefined8 uStack_518;
  uchar *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  stbtt_packedchar *psStack_4f8;
  real_2_u_0 local_4e8;
  real_2_u_0 rStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400a2b26;
  pvVar24 = TlsGetValue(tls_index);
  if (w.menu == 1) {
    param_1->tool = -1;
  }
  if ((w.menu == 2) && (stool_enabled_in_editor[param_1->tool] == false)) {
    param_1->tool = -1;
  }
  (*glBindFramebuffer)(0x8d40,param_3->frame_buffer);
  glViewport(0,0,(param_3->resolution).field0_0x0._s_0.x,(param_3->resolution).field0_0x0._s_0.y);
  (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_3->field14_0xc8)._s_0.color_texture,0);
  local_4e8._s_0.x = 5.05364e-41;
  (*glDrawBuffers)(1,(uint *)local_4e8.data);
  auVar75._0_12_ = ZEXT812(0);
  auVar75._12_4_ = 0;
  if (w.im.body_id == 0) {
    auVar75._0_4_ =
         (float)(param_3->resolution).field0_0x0._s_0.x /
         (float)(param_3->resolution).field0_0x0._s_0.y;
    auVar75._4_12_ = in_ZMM5._4_12_;
  }
  auVar85 = ZEXT1664(auVar75);
  ptVar25 = (tool_render_info *)stalloc(0x208);
  if (((w.selected_body < 1) ||
      (uVar20 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
      w.bodies.field0_0x0.index_table[uVar20].id != w.selected_body)) ||
     (w.bodies.field3_0x20.elements == (body *)0x0)) {
    local_1228 = (body *)0x0;
  }
  else {
    local_1228 = (body *)0x0;
    if (w.bodies.field3_0x20.elements[w.bodies.field0_0x0.index_table[uVar20].index].parent_id == 0)
    {
      local_1228 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar20].index;
    }
  }
  puVar4 = (uint *)((longlong)pvVar24 + 0x6c);
  fVar77 = auVar85._0_4_ + -0.25;
  auVar90 = ZEXT464((uint)fVar77);
  iVar22 = param_1->tool;
  if ((iVar22 == 3) || (iVar22 == 5)) {
    auVar93 = ZEXT464((uint)(param_5 * -20.0));
    auVar95 = ZEXT464(0x3e75c28f);
    auVar92 = ZEXT1264(ZEXT812(0));
    auVar98 = ZEXT464(0x3f800000);
    uVar50 = 0;
    do {
      fVar78 = param_1->team_buttons[uVar50].r;
      fVar84 = (param_4->mouse).field0_0x0._s_0.x - auVar90._0_4_;
      fVar94 = (param_4->mouse).field0_0x0._s_0.y - auVar95._0_4_;
      fVar86 = auVar92._0_4_;
      fVar84 = fVar94 * fVar94 + fVar86 + fVar84 * fVar84;
      fVar78 = fVar78 * fVar78;
      bVar46 = param_4->click_blocked;
      if (fVar78 < fVar84) {
LAB_1400a2e2b:
        bVar57 = 0;
      }
      else {
        if ((bool)bVar46 != false) {
          bVar46 = 1;
          goto LAB_1400a2e2b;
        }
        bVar57 = param_4->pressed_buttons[0] >> 1;
        bVar46 = bVar57 & 1;
      }
      param_4->click_blocked = (bool)bVar46;
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
        fVar86 = auVar92._0_4_;
        iVar22 = n_gamepad_anchors;
        if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a2e6c;
      }
      else {
        iVar22 = n_gamepad_anchors;
        if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a2e6c:
          prVar32 = gamepad_anchors;
          n_gamepad_anchors = iVar22 + 1;
          gamepad_anchors[iVar22].field0_0x0._s_0.x = auVar90._0_4_;
          prVar32[iVar22].field0_0x0._s_0.y = auVar95._0_4_;
        }
      }
      auVar91._0_12_ = ZEXT812(0);
      auVar91._12_4_ = 0;
      auVar81._0_12_ = ZEXT812(0);
      auVar81._12_4_ = 0;
      auVar75 = auVar98._0_16_;
      iVar22 = next_gui_element + 1;
      if (fVar84 <= fVar78) {
        param_4->hovered_ui_element = next_gui_element;
        next_gui_element = iVar22;
        param_4->hover_blocked = true;
        auVar91 = SUB6416(ZEXT464(0x3f000000),0);
        auVar81 = auVar75;
        iVar22 = next_gui_element;
      }
      next_gui_element = iVar22;
      auVar92 = ZEXT1664(auVar81);
      if ((longlong)uVar50 < 0) {
        auVar79 = ZEXT416((uint)(float)uVar50);
      }
      else {
        auVar79._0_4_ = (float)(longlong)uVar50;
        auVar79._4_12_ = in_ZMM5._4_12_;
      }
      auVar76 = ZEXT464(0x7fc00000);
      if (uVar50 != 4) {
        auVar76 = ZEXT1664(auVar79);
      }
      fVar94 = param_1->selected_team;
      bVar19 = auVar76._0_4_ != fVar94;
      auVar79 = auVar75;
      if ((uVar50 != 4 || !NAN(fVar94)) && bVar19) {
        auVar79 = auVar91;
      }
      if (fVar86 < auVar79._0_4_) {
        if ((uVar50 != 4 || !NAN(fVar94)) && bVar19) {
          auVar75 = auVar81;
        }
        auVar75 = vinsertps_avx(auVar75,auVar79,0x10);
        local_ed8 = (real_4_u_0)vshufps_avx(auVar75,auVar75,0x40);
        local_11b4._s_0.x = (float)auVar90._0_4_;
        local_11b4._s_0.y = (float)auVar95._0_4_;
        local_11b4._s_0.z = 0.0;
        draw_ring(param_3,(real_3 *)&local_11b4._s_0,0.045,0.055,(real_4 *)&local_ed8._s_0);
      }
      pfVar65 = &param_1->team_buttons[uVar50].r;
      local_11c0._s_0.x = (float)auVar90._0_4_;
      local_11c0._s_0.y = (float)auVar95._0_4_;
      local_11c0._s_0.z = 0.0;
      draw_circle(param_3,(real_3 *)&local_11c0._s_0,*pfVar65,
                  (real_4 *)(&DAT_1401b9ef0 + uVar50 * 0x10));
      if ((fVar84 <= fVar78) && (*(bool *)(pfVar65 + 4) == false)) {
        param_4->hover_blocked = true;
        uVar20 = (*puVar4 >> 0x10 ^ *puVar4) * 0x7feb352d;
        uVar20 = (uVar20 >> 0xf ^ uVar20) * -0x7b935975;
        uVar20 = uVar20 >> 0x10 ^ uVar20;
        *puVar4 = uVar20;
        pqVar16 = ac.queued_sounds;
        if ((ac.initialized == true) &&
           (((0 < sounds.menu_tick.n_samples && (sounds.menu_tick.data != (short *)0x0)) &&
            (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
          uVar21 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar21].sound = (sound_t *)0x1401eb1d0;
          uVar33 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
          pqVar16[(int)uVar21].params.volume = (float)(int)uVar33;
          pqVar16[(int)uVar21].params.delay = (float)(int)((ulonglong)uVar33 >> 0x20);
          pqVar16[(int)uVar21].params.pitch_shift = (float)uVar20 * 2.3283064e-10 * 6.0 + -3.0;
          pqVar13 = pqVar16 + (int)uVar21;
          (pqVar13->params).lowpass_dist = 0.0;
          (pqVar13->params).type = 0;
          *(undefined8 *)(&(pqVar13->params).lowpass_dist + 2) = 0;
          *(undefined8 *)((longlong)pqVar16[(int)uVar21].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
      if ((bVar57 & 1) != 0) {
        param_1->selected_team = auVar76._0_4_;
        pfVar65[1] = pfVar65[1] + -10.0;
      }
      auVar76 = ZEXT1664(auVar93._0_16_);
      expf();
      fVar94 = auVar92._0_4_ * (auVar98._0_4_ - auVar76._0_4_) + auVar76._0_4_ * pfVar65[3];
      auVar75 = vandps_avx(ZEXT416((uint)(fVar94 - auVar92._0_4_)),
                           ___xmm_7fffffff7fffffff7fffffff7fffffff);
      auVar75 = vcmpss_avx(auVar75,ZEXT416(0x3a83126f),1);
      auVar75 = vblendvps_avx(ZEXT416((uint)fVar94),auVar92._0_16_,auVar75);
      pfVar65[3] = auVar75._0_4_;
      *(bool *)(pfVar65 + 4) = fVar84 <= fVar78;
      fVar78 = param_5 * -10.0;
      expf();
      auVar76 = ZEXT464((uint)(*pfVar65 + -0.04));
      fVar84 = 300.0;
      fVar94 = pfVar65[1] / 300.0;
      auVar100 = ZEXT464((uint)(param_5 * 30.0));
      auVar92 = ZEXT464((uint)(param_5 * 30.0));
      cosf();
      auVar101 = ZEXT1664(auVar92._0_16_);
      auVar92 = ZEXT1664(auVar100._0_16_);
      sinf();
      fVar86 = auVar95._0_4_;
      *pfVar65 = fVar78 * (auVar101._0_4_ * auVar76._0_4_ + fVar94 * auVar92._0_4_) + 0.04;
      pfVar65[1] = fVar78 * fVar84 * (fVar94 * auVar101._0_4_ - auVar76._0_4_ * auVar92._0_4_);
      uVar20 = w.translations.max_entries;
      ppcVar18 = w.translations.keys;
      auVar92 = ZEXT1264(ZEXT812(0));
      if (0.0 < pfVar65[3]) {
        local_d38._0_8_ = 0;
        local_d38._16_8_ = 0;
        local_d38.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
        local_d38.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
        local_d38._48_8_ = 0;
        local_d38._56_8_ = 0;
        local_d38.wrap_indent = 0.0;
        local_d38._8_8_ = 0x3b03126f00000000;
        local_d38._32_8_ = 0x3f800000;
        local_5a8._0_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0xb8);
        local_5a8._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
        local_5a8._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
        local_5a8._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
        local_5a8._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
        local_5a8._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
        local_5a8._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
        local_5a8._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
        local_5a8._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
        local_5a8._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
        local_5a8._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
        local_5a8._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
        local_5a8._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
        local_5a8._64_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0xf8);
        local_548 = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
        local_528._0_4_ =
             (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
        local_528._4_4_ =
             (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
        puStack_520 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
        uStack_518._0_4_ =
             (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.
             cursor;
        uStack_518._4_4_ =
             (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size
        ;
        puStack_510 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
        uStack_508._0_4_ =
             (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.
             cursor;
        uStack_508._4_4_ =
             (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
        uStack_500 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
        psStack_4f8 = (param_3->field29_0x128).font_infos[1].char_data;
        local_1098.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
        local_1098._s_0.z = 1.0;
        pcVar36 = (&PTR_s_team_red_1401b9f40)[uVar50];
        cVar5 = *pcVar36;
        if (cVar5 == '\0') {
          uVar21 = 0x1505;
        }
        else {
          uVar21 = 0x1505;
          do {
            pcVar36 = pcVar36 + 1;
            uVar21 = uVar21 + ((int)cVar5 ^ uVar21 * 0x21);
            cVar5 = *pcVar36;
          } while (cVar5 != '\0');
        }
        uVar63 = (ulonglong)w.translations.max_entries;
        uVar62 = (ulonglong)uVar21 % uVar63;
        local_1098._s_0.w = pfVar65[3];
        do {
          auVar74 = auVar98._0_16_;
          auVar79 = auVar93._0_16_;
          auVar91 = auVar92._0_16_;
          auVar81 = auVar90._0_16_;
          auVar75 = in_ZMM5._0_16_;
          auVar99 = auVar95._0_16_;
          lVar47 = (longlong)(int)uVar62;
          if (ppcVar18[lVar47] == (char *)0x0) goto LAB_1400a33a4;
          in_ZMM5 = ZEXT1664(auVar75);
          auVar90 = ZEXT1664(auVar81);
          auVar92 = ZEXT1664(auVar91);
          auVar93 = ZEXT1664(auVar79);
          auVar95 = ZEXT1664(auVar99);
          auVar98 = ZEXT1664(auVar74);
          strcmp();
          auVar74 = auVar98._0_16_;
          auVar79 = auVar93._0_16_;
          auVar91 = auVar92._0_16_;
          auVar81 = auVar90._0_16_;
          auVar75 = in_ZMM5._0_16_;
          auVar99 = auVar95._0_16_;
          if (extraout_EAX == 0) goto LAB_1400a33a4;
          uVar58 = (int)uVar62 + 1;
          if (uVar58 == uVar20) {
            uVar58 = 0;
          }
          uVar62 = (ulonglong)uVar58;
          uVar59 = (uint)((ulonglong)uVar21 % uVar63);
        } while (uVar58 != uVar59);
        lVar47 = (longlong)(int)uVar59;
LAB_1400a33a4:
        pcVar36 = unknown_string;
        if ((w.translations.values[lVar47].text != (char **)0x0) &&
           (pcVar36 = w.translations.values[lVar47].text[w.language_index], pcVar36 == (char *)0x0))
        {
          pcVar36 = unknown_string;
        }
        in_ZMM5 = ZEXT1664(auVar75);
        auVar90 = ZEXT1664(auVar81);
        auVar92 = ZEXT1664(auVar91);
        auVar93 = ZEXT1664(auVar79);
        auVar95 = ZEXT1664(auVar99);
        auVar98 = ZEXT1664(auVar74);
        draw_text(pcVar36,fVar77 + -0.07,auVar99._0_4_,(real_4 *)&local_1098._s_0,(real_2)0x3f800000
                  ,(font_info *)local_5a8,&local_d38);
        fVar86 = auVar95._0_4_;
      }
      auVar95 = ZEXT464((uint)(fVar86 + -0.12));
      uVar50 = uVar50 + 1;
    } while (uVar50 != 5);
    iVar22 = param_1->tool;
    auVar85 = ZEXT464((uint)auVar85._0_4_);
  }
  else {
    auVar93 = ZEXT464((uint)(param_5 * -20.0));
  }
  local_1204 = param_5 * 30.0;
  pfVar65 = &param_1->explosion_radius;
  local_1138.active = iVar22 == 7;
  local_1138.full_width = 0.7;
  local_1138.pos.field0_0x0._s_0.x = (float)auVar90._0_4_;
  local_1138.pos.field0_0x0._s_0.y = -0.35;
  update_slider(&param_1->explosion_slider,&local_1138,pfVar65,5.0,100.0,param_4,param_5,puVar4);
  local_1148.active = iVar22 == 7;
  local_1148.full_width = 0.7;
  local_1148.pos.field0_0x0._s_0.x = (float)auVar90._0_4_;
  local_1148.pos.field0_0x0._s_0.y = -0.35;
  draw_slider(param_3,&param_1->explosion_slider,&local_1148);
  fVar77 = auVar85._0_4_ + -0.1;
  auVar85 = ZEXT464((uint)fVar77);
  puVar2 = (undefined8 *)((longlong)&param_3->field29_0x128 + 0xb8);
  auVar92 = ZEXT464(0x3f4f5c28);
  auVar90 = ZEXT1264(ZEXT812(0));
  auVar99._8_4_ = 0x7fffffff;
  auVar99._0_8_ = 0x7fffffff7fffffff;
  auVar99._12_4_ = 0x7fffffff;
  uVar50 = 0;
  uVar20 = auVar93._0_4_;
  do {
    auVar98 = ZEXT1664(auVar99);
    auVar95 = ZEXT464(0x3f800000);
    uVar21 = param_1->tool;
    fVar78 = param_1->tool_buttons[uVar50].r;
    fVar86 = auVar85._0_4_;
    fVar84 = (param_4->mouse).field0_0x0._s_0.x - fVar86;
    fVar94 = (param_4->mouse).field0_0x0._s_0.y - auVar92._0_4_;
    fVar84 = fVar94 * fVar94 + fVar84 * fVar84 + auVar90._0_4_;
    fVar78 = fVar78 * fVar78;
    bVar19 = param_4->click_blocked;
    if (fVar78 < fVar84) {
LAB_1400a3623:
      uVar58 = 0;
      param_4->click_blocked = bVar19;
    }
    else {
      if (bVar19 != false) {
        bVar19 = true;
        goto LAB_1400a3623;
      }
      uVar58 = param_4->pressed_buttons[0] >> 1 & 1;
      param_4->click_blocked = SUB41(uVar58,0);
    }
    if (gamepad_anchors == (real_2 *)0x0) {
      max_gamepad_anchors = 0x400;
      gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
      fVar86 = auVar85._0_4_;
    }
    prVar32 = gamepad_anchors;
    lVar47 = (longlong)n_gamepad_anchors;
    if (n_gamepad_anchors < max_gamepad_anchors) {
      n_gamepad_anchors = n_gamepad_anchors + 1;
      gamepad_anchors[lVar47].field0_0x0._s_0.x = fVar86;
      prVar32[lVar47].field0_0x0._s_0.y = auVar92._0_4_;
    }
    iVar22 = next_gui_element + 1;
    if (fVar84 <= fVar78) {
      param_4->hovered_ui_element = next_gui_element;
      next_gui_element = iVar22;
      uVar58 = uVar58 | 0x100;
      iVar22 = next_gui_element;
    }
    next_gui_element = iVar22;
    fVar78 = *(float *)(&__real_3f8000003e800000 + (ulonglong)(uVar50 == uVar21) * 4);
    auVar90 = ZEXT464((uint)fVar78);
    pfVar9 = &param_1->tool_buttons[uVar50].r;
    auVar75 = auVar95._0_16_;
    if (w.menu == 2) {
      if ((stool_enabled_in_editor[uVar50] & (uVar50 != 8 || local_1228 != (body *)0x0)) != 0)
      goto LAB_1400a3724;
LAB_1400a36e0:
      auVar90 = ZEXT464((uint)(fVar78 * 0.3));
      if (uVar58 < 0x100) {
        uVar58 = 0;
        goto LAB_1400a3898;
      }
      param_4->hover_blocked = true;
      uVar58 = 0;
      fVar78 = 0.06;
      cVar5 = *(char *)(pfVar9 + 4);
joined_r0x0001400a370f:
      if (cVar5 == '\0') {
        uVar21 = (*puVar4 >> 0x10 ^ *puVar4) * 0x7feb352d;
        uVar21 = (uVar21 >> 0xf ^ uVar21) * -0x7b935975;
        uVar21 = uVar21 >> 0x10 ^ uVar21;
        *puVar4 = uVar21;
        pqVar16 = ac.queued_sounds;
        if (((ac.initialized == true) && (0 < sounds.menu_tick.n_samples)) &&
           ((sounds.menu_tick.data != (short *)0x0 &&
            (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
          uVar59 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar59].sound = (sound_t *)0x1401eb1d0;
          uVar33 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
          pqVar16[(int)uVar59].params.volume = (float)(int)uVar33;
          pqVar16[(int)uVar59].params.delay = (float)(int)((ulonglong)uVar33 >> 0x20);
          pqVar16[(int)uVar59].params.pitch_shift = (float)uVar21 * 2.3283064e-10 * 6.0 + -3.0;
          pqVar13 = pqVar16 + (int)uVar59;
          (pqVar13->params).lowpass_dist = 0.0;
          (pqVar13->params).type = 0;
          *(undefined8 *)(&(pqVar13->params).lowpass_dist + 2) = 0;
          *(undefined8 *)((longlong)pqVar16[(int)uVar59].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
      bVar19 = true;
    }
    else {
      if (uVar50 == 8 && local_1228 == (body *)0x0) goto LAB_1400a36e0;
LAB_1400a3724:
      if (0xff < uVar58) {
        param_4->hover_blocked = true;
        auVar81 = vminss_avx(auVar75,ZEXT416((uint)(fVar78 * 1.5)));
        auVar90 = ZEXT1664(auVar81);
        fVar78 = 0.072000004;
        cVar5 = *(char *)(pfVar9 + 4);
        goto joined_r0x0001400a370f;
      }
LAB_1400a3898:
      auVar75 = ZEXT816(0);
      bVar19 = false;
      fVar78 = 0.06;
    }
    auVar76 = ZEXT1664(auVar75);
    auVar85 = ZEXT1664(auVar93._0_16_);
    expf();
    fVar84 = auVar76._0_4_ * (auVar95._0_4_ - auVar85._0_4_) + auVar85._0_4_ * pfVar9[3];
    auVar75 = vandps_avx(auVar98._0_16_,ZEXT416((uint)(fVar84 - auVar76._0_4_)));
    auVar75 = vcmpss_avx(auVar75,ZEXT416(0x3a83126f),1);
    auVar75 = vblendvps_avx(ZEXT416((uint)fVar84),auVar76._0_16_,auVar75);
    pfVar9[3] = auVar75._0_4_;
    *(bool *)(pfVar9 + 4) = bVar19;
    iVar22 = (int)uVar50;
    if ((uVar58 & 1) != 0) {
      if (iVar22 == 5) {
        if (uVar50 == (uint)param_1->tool) {
LAB_1400a39c8:
          param_1->tool = -1;
        }
        else {
          param_1->tool = 5;
          param_1->selected_creature = -1;
        }
      }
      else if (iVar22 == 2) {
        if (w.selected_body == 0) {
          if (uVar50 == (uint)param_1->tool) goto LAB_1400a39c8;
          param_1->tool = 2;
        }
        else if ((w.selected_body < 1) ||
                (uVar21 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
                w.bodies.field0_0x0.index_table[uVar21].id != w.selected_body)) {
          w.selected_body = 0;
        }
        else {
          iVar61 = w.bodies.field0_0x0.index_table[uVar21].index;
          w.selected_body = 0;
          if (w.bodies.field3_0x20.elements != (body *)0x0) {
            if ((longlong)w.bodies.field3_0x20.elements[iVar61].creature_index == 0) {
              w.bodies.field3_0x20.elements[iVar61].brain.fun = (_func___cdecl_void_body_ptr *)0x0;
            }
            else {
              w.bodies.field3_0x20.elements[iVar61].brain.fun =
                   creature_list[w.bodies.field3_0x20.elements[iVar61].creature_index].ai_func;
            }
          }
        }
      }
      else if (iVar22 == 0) {
        w._4_1_ = w._4_1_ ^ 0x40;
      }
      else {
        if (uVar50 == (uint)param_1->tool) goto LAB_1400a39c8;
        param_1->tool = iVar22;
      }
      pfVar9[1] = pfVar9[1] + -10.0;
    }
    if (iVar22 == 2) {
      bVar19 = w.selected_body != 0;
    }
    else if (iVar22 == 0) {
      bVar19 = w.frozen;
    }
    else {
      bVar19 = uVar50 == (uint)param_1->tool;
    }
    auVar76 = ZEXT1664(CONCAT124(in_ZMM5._4_12_,(float)bVar19));
    auVar85 = ZEXT1664(auVar93._0_16_);
    expf();
    fVar84 = auVar76._0_4_ * (auVar95._0_4_ - auVar85._0_4_) + auVar85._0_4_ * pfVar9[2];
    auVar95 = ZEXT1664(auVar98._0_16_);
    auVar75 = vandps_avx(auVar98._0_16_,ZEXT416((uint)(fVar84 - auVar76._0_4_)));
    auVar75 = vcmpss_avx(auVar75,ZEXT416(0x3a83126f),1);
    auVar75 = vblendvps_avx(ZEXT416((uint)fVar84),auVar76._0_16_,auVar75);
    pfVar9[2] = auVar75._0_4_;
    auVar85 = ZEXT464((uint)(param_5 * -10.0));
    expf();
    auVar93 = ZEXT1664(auVar85._0_16_);
    fVar84 = *pfVar9 - fVar78;
    fVar88 = 300.0;
    fVar86 = pfVar9[1] / 300.0;
    auVar85 = ZEXT464((uint)local_1204);
    fVar94 = local_1204;
    cosf();
    auVar85 = ZEXT1664(auVar85._0_16_);
    sinf();
    auVar99 = auVar95._0_16_;
    fVar78 = fVar78 + auVar93._0_4_ * (auVar85._0_4_ * fVar84 + fVar86 * fVar94);
    *pfVar9 = fVar78;
    pfVar9[1] = auVar93._0_4_ * fVar88 * (auVar85._0_4_ * fVar86 - fVar84 * fVar94);
    fVar84 = pfVar9[2];
    auVar85 = ZEXT464((uint)fVar77);
    ptVar25[uVar50].x.field0_0x0._s_0.x = fVar77;
    fVar94 = auVar92._0_4_;
    ptVar25[uVar50].x.field0_0x0._s_0.y = fVar94;
    ptVar25[uVar50].x.field0_0x0._s_0.z = 0.0;
    auVar75 = vinsertps_avx(ZEXT416((uint)fVar78),auVar90._0_16_,0x10);
    auVar75 = vshufps_avx(auVar75,auVar75,0x54);
    *(undefined1 (*) [16])&ptVar25[uVar50].r = auVar75;
    ptVar25[uVar50].color.field0_0x0._s_0.w = 1.0;
    ptVar25[uVar50].id = iVar22 + 0xd;
    ptVar25[uVar50].state = fVar84;
    uVar21 = w.translations.max_entries;
    ppcVar18 = w.translations.keys;
    auVar90 = ZEXT1264(ZEXT812(0));
    if (0.0 < pfVar9[3]) {
      local_d48 = 0.0;
      local_d88 = ZEXT1632(CONCAT412(0x3b03126f,SUB3212(ZEXT832(0),0) << 0x20));
      local_d68._4_28_ = SUB3228(ZEXT832(0),0);
      local_d68._0_4_ = 0x3f800000;
      local_668._0_8_ = *puVar2;
      local_668._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
      local_668._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
      local_668._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
      local_668._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
      local_668._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
      local_668._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
      local_668._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
      local_668._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
      local_668._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
      local_668._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
      local_668._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
      local_668._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
      local_668._64_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0xf8);
      local_608 = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
      local_5e8._0_4_ =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
      local_5e8._4_4_ =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
      puStack_5e0 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
      uStack_5d8._0_4_ =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor
      ;
      uStack_5d8._4_4_ =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
      puStack_5d0 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
      uStack_5c8._0_4_ =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
      uStack_5c8._4_4_ =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
      uStack_5c0 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
      psStack_5b8 = (param_3->field29_0x128).font_infos[1].char_data;
      local_10a8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_10a8._s_0.z = 1.0;
      pcVar36 = stool_names[uVar50];
      cVar5 = *pcVar36;
      if (cVar5 == '\0') {
        uVar58 = 0x1505;
      }
      else {
        uVar58 = 0x1505;
        do {
          pcVar36 = pcVar36 + 1;
          uVar58 = uVar58 + ((int)cVar5 ^ uVar58 * 0x21);
          cVar5 = *pcVar36;
        } while (cVar5 != '\0');
      }
      uVar62 = (ulonglong)w.translations.max_entries;
      uVar63 = (ulonglong)uVar58 % uVar62;
      local_10a8._s_0.w = pfVar9[3];
      do {
        auVar99 = auVar95._0_16_;
        auVar91 = auVar90._0_16_;
        auVar81 = auVar85._0_16_;
        auVar75 = in_ZMM5._0_16_;
        auVar79 = auVar92._0_16_;
        lVar47 = (longlong)(int)uVar63;
        if (ppcVar18[lVar47] == (char *)0x0) goto LAB_1400a3c9b;
        in_ZMM5 = ZEXT1664(auVar75);
        auVar85 = ZEXT1664(auVar81);
        auVar90 = ZEXT1664(auVar91);
        auVar92 = ZEXT1664(auVar79);
        auVar95 = ZEXT1664(auVar99);
        strcmp();
        auVar99 = auVar95._0_16_;
        auVar91 = auVar90._0_16_;
        auVar81 = auVar85._0_16_;
        auVar75 = in_ZMM5._0_16_;
        auVar79 = auVar92._0_16_;
        if (extraout_EAX_00 == 0) goto LAB_1400a3c9b;
        uVar59 = (int)uVar63 + 1;
        if (uVar59 == uVar21) {
          uVar59 = 0;
        }
        uVar63 = (ulonglong)uVar59;
        uVar69 = (uint)((ulonglong)uVar58 % uVar62);
      } while (uVar59 != uVar69);
      lVar47 = (longlong)(int)uVar69;
LAB_1400a3c9b:
      pcVar36 = unknown_string;
      if ((w.translations.values[lVar47].text != (char **)0x0) &&
         (pcVar36 = w.translations.values[lVar47].text[w.language_index], pcVar36 == (char *)0x0)) {
        pcVar36 = unknown_string;
      }
      in_ZMM5 = ZEXT1664(auVar75);
      auVar85 = ZEXT1664(auVar81);
      auVar90 = ZEXT1664(auVar91);
      auVar92 = ZEXT1664(auVar79);
      auVar93 = ZEXT1664(auVar99);
      draw_text(pcVar36,fVar77 + -0.089999996,auVar79._0_4_,(real_4 *)&local_10a8._s_0,
                (real_2)0x3f800000,(font_info *)local_668,(text_params *)local_d88);
      fVar94 = auVar92._0_4_;
      auVar99 = auVar93._0_16_;
    }
    uVar50 = uVar50 + 1;
    auVar92 = ZEXT464((uint)(fVar94 + -0.17999999));
    auVar93 = ZEXT464(uVar20);
  } while (uVar50 != 10);
  local_b28._0_8_ = *(undefined8 *)&(param_3->camera).field0_0x0;
  local_b28._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
  local_b28._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
  local_b28._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
  local_b28._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
  local_b28._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
  local_b28._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
  local_b28._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
  draw_tool_icons(ptVar25,10,(real_4x4 *)local_b28.columns);
  stunalloc(ptVar25);
  uVar40 = (undefined4)((ulonglong)ptVar25 >> 0x20);
  fVar94 = param_2->fov * 0.5;
  tanf();
  fVar94 = 1.0 / fVar94;
  fVar77 = (param_2->camera_pos).field0_0x0._s_0.z;
  fVar78 = (param_4->mouse).field0_0x0._s_0.x;
  fVar84 = (param_4->mouse).field0_0x0._s_0.y;
  auVar85 = ZEXT464((uint)(fVar94 / fVar77));
  fVar77 = fVar77 / ((fVar84 * (param_2->camera_axes).field0_0x0.data[5] +
                     fVar78 * (param_2->camera_axes).field0_0x0.data[2]) -
                    fVar94 * (param_2->camera_axes).field0_0x0.data[8]);
  fVar86 = (param_2->camera_pos).field0_0x0._s_0.x -
           ((fVar78 * (param_2->camera_axes).field0_0x0.data[0] +
            fVar84 * (param_2->camera_axes).field0_0x0.data[3]) -
           fVar94 * (param_2->camera_axes).field0_0x0.data[6]) * fVar77;
  auVar90 = ZEXT464((uint)fVar86);
  fVar77 = (param_2->camera_pos).field0_0x0._s_0.y -
           ((fVar84 * (param_2->camera_axes).field0_0x0.data[4] +
            fVar78 * (param_2->camera_axes).field0_0x0.data[1]) -
           fVar94 * (param_2->camera_axes).field0_0x0.data[7]) * fVar77;
  auVar92 = ZEXT464((uint)fVar77);
  rVar37.field0_0x0 = (real_2_u_0)(CONCAT44(uVar40,fVar86) | (ulonglong)(uint)fVar77 << 0x20);
  iVar22 = param_1->tool;
  uVar40 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar22 == 2) {
    param_4->cursor_type = 5;
    uVar21 = w.translations.max_entries;
    ppcVar18 = w.translations.keys;
    local_dd8._0_8_ = 0;
    local_dd8._16_8_ = 0;
    local_dd8.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_dd8.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_dd8._48_8_ = 0;
    local_dd8._56_8_ = 0;
    local_dd8.wrap_indent = 0.0;
    local_dd8._8_8_ = 0x3b03126f00000000;
    local_dd8._32_8_ = 0x3f800000;
    local_728._0_8_ = *puVar2;
    local_728._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    local_728._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    local_728._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    local_728._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    local_728._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    local_728._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    local_728._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    local_728._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    local_728._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    local_728._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    local_728._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    local_728._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    local_728._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    local_728._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    local_728._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    local_728._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    local_728._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    local_728._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    local_728._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    local_728._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    local_728._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_6a0 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_698._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_698._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    auStack_690 = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x150);
    local_ee8._s_0.z = 1.0;
    local_ee8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_ee8._s_0.w = 1.0;
    auVar93 = ZEXT1664((undefined1  [16])local_ee8);
    uVar20 = 0xea2fab13 % w.translations.max_entries;
    uVar58 = uVar20;
    do {
      auVar79 = auVar85._0_16_;
      auVar91 = auVar93._0_16_;
      auVar81 = auVar92._0_16_;
      auVar75 = auVar90._0_16_;
      lVar47 = (longlong)(int)uVar58;
      if (ppcVar18[lVar47] == (char *)0x0) goto LAB_1400a3f03;
      auVar90 = ZEXT1664(auVar75);
      auVar92 = ZEXT1664(auVar81);
      auVar93 = ZEXT1664(auVar91);
      auVar85 = ZEXT1664(auVar79);
      strcmp();
      auVar79 = auVar85._0_16_;
      auVar91 = auVar93._0_16_;
      auVar81 = auVar92._0_16_;
      auVar75 = auVar90._0_16_;
      if (extraout_EAX_01 == 0) goto LAB_1400a3f03;
      uVar58 = uVar58 + 1;
      if (uVar58 == uVar21) {
        uVar58 = 0;
      }
    } while (uVar58 != uVar20);
    lVar47 = (longlong)(int)uVar20;
LAB_1400a3f03:
    if (w.translations.values[lVar47].text == (char **)0x0) {
      pcVar36 = unknown_string;
    }
    else {
      pcVar6 = w.translations.values[lVar47].text[w.language_index];
      pcVar36 = unknown_string;
      if (pcVar6 != (char *)0x0) {
        pcVar36 = pcVar6;
      }
    }
    auVar90 = ZEXT1664(auVar75);
    auVar92 = ZEXT1664(auVar81);
    auVar93 = ZEXT1664(auVar91);
    auVar85 = ZEXT1664(auVar79);
    draw_text(pcVar36,0.0,-0.8,(real_4 *)&local_ee8._s_0,(real_2)0x0,(font_info *)local_728,
              &local_dd8);
    pbVar26 = get_best_hovered_body(rVar37,auVar85._0_4_);
    if (pbVar26 != (body *)0x0) {
      local_10b8.xy.field0_0x0 =
           (real_2)(CONCAT44(uVar40,auVar85._0_4_ *
                                    ((pbVar26->cost_centroid).field0_0x0._s_0.x -
                                    (param_2->camera_pos).field0_0x0._s_0.x)) |
                   (ulonglong)
                   (uint)(auVar85._0_4_ *
                         ((pbVar26->cost_centroid).field0_0x0._s_0.y -
                         (param_2->camera_pos).field0_0x0._s_0.y)) << 0x20);
      local_ef8 = auVar93._0_16_;
      local_10b8._s_0.z = 0.0;
      draw_ring(param_3,(real_3 *)&local_10b8._s_0,0.05,0.06,(real_4 *)&local_ef8._s_0);
      if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
        w.selected_body = pbVar26->id;
        if (settings.copy_plan_on_possess != 0) {
          copy_body_plan(&w.em.plan,&pbVar26->plan);
          update_edit_menu_plan(&w.em,(int *)0x0);
          push_undo_state(&w.em);
        }
        param_1->tool = -1;
        param_4->click_blocked = true;
      }
    }
    iVar22 = param_1->tool;
  }
  if (iVar22 == 1) {
    param_4->cursor_type = 4;
    uVar20 = param_1->dragged_body;
    if ((((int)uVar20 < 1) ||
        (w.bodies.field0_0x0.index_table[w.bodies.n_max_elements + 0x7fffffffU & uVar20].id !=
         uVar20)) || (w.bodies.field3_0x20.elements == (body *)0x0)) {
      param_1->dragged_body = 0;
      pbVar26 = get_best_hovered_body(rVar37,auVar85._0_4_);
      if (pbVar26 != (body *)0x0) {
        local_10c8.xy.field0_0x0 =
             (real_2)(CONCAT44(uVar40,auVar85._0_4_ *
                                      ((pbVar26->cost_centroid).field0_0x0._s_0.x -
                                      (param_2->camera_pos).field0_0x0._s_0.x)) |
                     (ulonglong)
                     (uint)(auVar85._0_4_ *
                           ((pbVar26->cost_centroid).field0_0x0._s_0.y -
                           (param_2->camera_pos).field0_0x0._s_0.y)) << 0x20);
        local_f08._s_0.z = 1.0;
        local_f08.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
        local_f08._s_0.w = 1.0;
        local_10c8._s_0.z = 0.0;
        draw_ring(param_3,(real_3 *)&local_10c8._s_0,0.05,0.06,(real_4 *)&local_f08._s_0);
        if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
          param_1->dragged_body = pbVar26->id;
        }
      }
    }
  }
  prVar1 = &param_3->camera;
  iVar22 = param_1->tool;
  if (iVar22 == 3) {
    param_4->cursor_type = 5;
    uVar20 = w.translations.max_entries;
    rVar71 = (real_2_u_0)w.translations.keys;
    local_de8 = 0.0;
    local_e28 = ZEXT1632(CONCAT412(0x3b03126f,ZEXT812(0)));
    local_e08._4_28_ = ZEXT828(SUB128(ZEXT812(0),4));
    local_e08._0_4_ = 0x3f800000;
    local_7e8._0_8_ = *puVar2;
    local_7e8._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    local_7e8._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    local_7e8._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    local_7e8._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    local_7e8._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    local_7e8._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    local_7e8._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    local_7e8._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    local_7e8._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    local_7e8._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    local_7e8._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    local_7e8._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    local_7e8._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    local_7e8._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    local_7e8._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    local_7e8._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    local_7e8._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    local_7e8._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    local_7e8._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    local_7e8._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    local_7e8._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_760 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_758._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_758._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    puStack_750 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    uStack_748._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_748._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_740 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_738 = (param_3->field29_0x128).font_infos[1].char_data;
    local_f18._s_0.z = 1.0;
    local_f18.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_f18._s_0.w = 1.0;
    uVar50 = 0x439856d % (ulonglong)w.translations.max_entries;
    uVar63 = uVar50;
    do {
      auVar91 = auVar85._0_16_;
      auVar81 = auVar92._0_16_;
      auVar75 = auVar90._0_16_;
      uVar62 = (ulonglong)(int)uVar63;
      if (*(char **)((longlong)rVar71 + uVar62 * 8) == (char *)0x0) break;
      auVar90 = ZEXT1664(auVar75);
      auVar92 = ZEXT1664(auVar81);
      auVar85 = ZEXT1664(auVar91);
      strcmp();
      auVar91 = auVar85._0_16_;
      auVar81 = auVar92._0_16_;
      auVar75 = auVar90._0_16_;
      if (extraout_EAX_02 == 0) break;
      uVar21 = (int)uVar63 + 1;
      uVar63 = (ulonglong)uVar21;
      if (uVar21 == uVar20) {
        uVar63 = 0;
      }
      uVar62 = uVar50;
    } while ((int)uVar63 != (int)uVar50);
    if (w.translations.values[uVar62].text == (char **)0x0) {
      pcVar36 = unknown_string;
    }
    else {
      pcVar6 = w.translations.values[uVar62].text[w.language_index];
      pcVar36 = unknown_string;
      if (pcVar6 != (char *)0x0) {
        pcVar36 = pcVar6;
      }
    }
    auVar85 = ZEXT1664(auVar75);
    auVar90 = ZEXT1664(auVar81);
    auVar92 = ZEXT1664(auVar91);
    draw_text(pcVar36,0.0,-0.8,(real_4 *)&local_f18._s_0,(real_2)0x0,(font_info *)local_7e8,
              (text_params *)local_e28);
    uVar50 = 0;
    if (((w.hovered < 1) ||
        (uVar20 = w.max_cells + 0x7fffffffU & w.hovered,
        w.field57_0x3a48.cell_index_table[uVar20].id != w.hovered)) ||
       ((w.field58_0x3a60.cells == (cell *)0x0 ||
        ((uVar20 = w.field58_0x3a60.cells[w.field57_0x3a48.cell_index_table[uVar20].index >> 4].
                   field1_0x40.body_id_packed[w.field57_0x3a48.cell_index_table[uVar20].index & 0xf]
         , (int)uVar20 < 1 ||
         (uVar21 = w.bodies.n_max_elements + 0x7fffffffU & uVar20,
         w.bodies.field0_0x0.index_table[uVar21].id != uVar20)))))) {
      pbVar26 = (body *)0x0;
    }
    else {
      pbVar26 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar21].index;
    }
    prVar27 = (ring_render_info *)stalloc((longlong)w.bodies.n_elements * 0x24 + 0x24);
    auVar75 = auVar92._0_16_;
    pbVar51 = pbVar26;
    if (0 < w.bodies.n_elements) {
      auVar74._0_4_ = 0.1 / auVar92._0_4_;
      auVar74._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar75 = vmaxss_avx(SUB6416(ZEXT464(0x41f00000),0),auVar74);
      auVar93 = ZEXT464((uint)(auVar75._0_4_ * auVar75._0_4_));
      auVar75 = vminss_avx(SUB6416(ZEXT464(0x3d4ccccd),0),ZEXT416((uint)(auVar92._0_4_ * 25.0)));
      auVar95 = ZEXT1664(auVar75);
      auVar98 = ZEXT464((uint)(auVar75._0_4_ * 0.8));
      prVar64 = &prVar27->color;
      auVar76 = ZEXT1264(ZEXT812(0));
      lVar47 = 0;
      uVar50 = 0;
      do {
        uVar33 = w.bodies.field3_0x20.elements;
        fVar77 = *(float *)((longlong)&(w.bodies.field3_0x20.elements)->team + lVar47);
        rVar71 = (real_2_u_0)
                 (CONCAT44(rVar71._s_0.y,
                           auVar92._0_4_ *
                           (*(float *)(((w.bodies.field3_0x20.elements)->brain).abilities +
                                      lVar47 + -0x68) - (param_2->camera_pos).field0_0x0._s_0.x)) |
                 (ulonglong)
                 (uint)(auVar92._0_4_ *
                       (*(float *)(((w.bodies.field3_0x20.elements)->brain).abilities +
                                  lVar47 + -100) - (param_2->camera_pos).field0_0x0._s_0.y)) << 0x20
                 );
        iVar22 = (int)fVar77;
        if (iVar22 < 1) {
          iVar22 = 0;
        }
        if (3 < iVar22) {
          iVar22 = 4;
        }
        if (NAN(fVar77)) {
          iVar22 = 4;
        }
        *(real_2_u_0 *)((longlong)(prVar64 + -2) + 0xc) = (real_2_u_0_s_0)rVar71;
        *(undefined4 *)((longlong)(prVar64 + -1) + 4) = 0;
        *(int *)((longlong)(prVar64 + -1) + 8) = auVar98._0_4_;
        *(int *)((longlong)(prVar64 + -1) + 0xc) = auVar95._0_4_;
        uVar43 = *(undefined8 *)(&UNK_1401b9ef8 + (uint)(iVar22 << 4));
        (prVar64->field0_0x0).xy.field0_0x0 = *(real_2_u_0 *)(&DAT_1401b9ef0 + (uint)(iVar22 << 4));
        *(undefined8 *)((longlong)&(prVar64->field0_0x0)._s_2.yz.field0_0x0 + 4) = uVar43;
        if (gamepad_anchors == (real_2 *)0x0) {
          max_gamepad_anchors = 0x400;
          gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
          if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a45b3;
        }
        else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a45b3:
          lVar38 = (longlong)n_gamepad_anchors;
          n_gamepad_anchors = n_gamepad_anchors + 1;
          gamepad_anchors[lVar38].field0_0x0 = rVar71;
        }
        auVar75 = auVar92._0_16_;
        if (pbVar26 == (body *)0x0) {
          pbVar70 = (body *)((longlong)&((body *)uVar33)->id + lVar47);
          fVar77 = auVar85._0_4_ - (pbVar70->cost_centroid).field0_0x0._s_0.x;
          fVar78 = auVar90._0_4_ - (pbVar70->cost_centroid).field0_0x0._s_0.y;
          fVar77 = fVar78 * fVar78 + auVar76._0_4_ + fVar77 * fVar77;
          fVar78 = auVar93._0_4_;
          auVar81 = vminss_avx(ZEXT416((uint)fVar77),auVar93._0_16_);
          auVar93 = ZEXT1664(auVar81);
          if (fVar77 < fVar78) {
            pbVar51 = pbVar70;
          }
        }
        uVar50 = uVar50 + 1;
        lVar47 = lVar47 + 0x2d0;
        prVar64 = (real_4 *)((longlong)(prVar64 + 2) + 4);
      } while ((longlong)uVar50 < (longlong)w.bodies.n_elements);
    }
    iVar22 = (int)uVar50;
    if (pbVar51 != (body *)0x0) {
      uVar50 = uVar50 & 0xffffffff;
      iVar22 = iVar22 + 1;
      prVar27[uVar50].x.field0_0x0.xy.field0_0x0 =
           (real_2_u_0)
           (CONCAT44(uVar40,auVar75._0_4_ *
                            ((pbVar51->cost_centroid).field0_0x0._s_0.x -
                            (param_2->camera_pos).field0_0x0._s_0.x)) |
           (ulonglong)
           (uint)(auVar75._0_4_ *
                 ((pbVar51->cost_centroid).field0_0x0._s_0.y -
                 (param_2->camera_pos).field0_0x0._s_0.y)) << 0x20);
      puVar3 = (undefined8 *)((longlong)&prVar27[uVar50].x.field0_0x0._s_2.yz.field0_0x0 + 4);
      *puVar3 = 0x3d4ccccd00000000;
      puVar3[1] = 0x3f8000003d75c28f;
      *(undefined8 *)((longlong)&prVar27[uVar50].color.field0_0x0.xy.field0_0x0 + 4) =
           0x3f8000003f800000;
      prVar27[uVar50].color.field0_0x0._s_0.w = 1.0;
      if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
        pbVar51->team = param_1->selected_team;
        param_4->click_blocked = true;
      }
    }
    local_b68._0_32_ = *(undefined1 (*) [32])&prVar1->field0_0x0;
    local_b68._32_32_ = *(undefined1 (*) [32])((longlong)&(param_3->camera).field0_0x0 + 0x20);
    auVar85 = ZEXT1664(auVar75);
    draw_rings(prVar27,iVar22,(real_4x4 *)local_b68.columns);
    stunalloc(prVar27);
    iVar22 = param_1->tool;
  }
  if (iVar22 == 5) {
    if (param_1->selected_creature < 0) {
      w.scroll_blocked = 1;
      if ((longlong)n_creatures < 2) {
        iVar22 = 0;
        uVar39 = 0;
      }
      else {
        if (n_creatures == 2) {
          iVar61 = 0;
          lVar47 = 1;
          iVar22 = 0;
LAB_1400a49ff:
          if (creature_list[lVar47].hidden == 0) {
            iVar22 = iVar22 + 1;
            iVar61 = iVar61 + creature_list[lVar47].plan.n_plan_cells;
          }
        }
        else {
          uVar50 = (longlong)n_creatures - 1;
          piVar52 = &creature_list[2].plan.n_plan_cells;
          iVar61 = 0;
          lVar47 = 1;
          iVar22 = 0;
          do {
            if ((*(byte *)(piVar52 + -0x1a2) & 2) == 0) {
              iVar22 = iVar22 + 1;
              iVar61 = iVar61 + piVar52[-0x19e];
            }
            if ((*(byte *)(piVar52 + -4) & 2) == 0) {
              iVar22 = iVar22 + 1;
              iVar61 = iVar61 + *piVar52;
            }
            piVar52 = piVar52 + 0x33c;
            lVar38 = lVar47 - (uVar50 & 0xfffffffffffffffe);
            lVar47 = lVar47 + 2;
          } while (lVar38 != -1);
          if ((uVar50 & 1) != 0) goto LAB_1400a49ff;
        }
        uVar39 = (longlong)iVar61 * 0x48;
      }
      pcVar28 = (cell_render_info *)stalloc(uVar39);
      auVar82._28_4_ = 0;
      auVar82._0_28_ = local_1078._4_28_;
      local_1078 = auVar82 << 0x20;
      phVar29 = (hexagon_render_info *)stalloc((longlong)iVar22 * 0x24);
      iVar61 = (int)(iVar22 - 1U) / 0x13;
      fVar78 = (float)(int)((uint)(9 < iVar61 * -0x13 + iVar22 + -1) + iVar61 * 2) * 0.8660254 * 0.2
      ;
      fVar77 = fVar78 + -2.0 + 0.27712813;
      local_1058 = vandps_avx(ZEXT416((uint)((param_4->mouse).field0_0x0._s_0.x + -1.025)),
                              ___xmm_7fffffff7fffffff7fffffff7fffffff);
      local_1048 = vmaxss_avx(SUB6416(ZEXT464(0x3d4ccccd),0),ZEXT416((uint)(3.97 / fVar78)));
      auVar75 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)fVar77),1);
      auVar83._8_4_ = 0x3d4ccccd;
      auVar83._0_8_ = 0x3d4ccccd3d4ccccd;
      auVar83._12_4_ = 0x3d4ccccd;
      auVar75 = vblendvps_avx(auVar83,local_1048,auVar75);
      auVar81 = vmaxss_avx(ZEXT416((uint)fVar77),ZEXT816(0));
      fVar84 = auVar75._0_4_;
      fVar78 = auVar81._0_4_ / (2.0 - fVar84);
      if (((0.0075 <= local_1058._0_4_) ||
          (param_4->hover_blocked = true, param_4->click_blocked != false)) ||
         ((param_4->pressed_buttons[0] & 2) == 0)) {
        if (DAT_1401fa5c4 == 1) {
          fVar94 = (param_4->mouse).field0_0x0._s_0.y;
          fVar84 = scroll_start_y;
          fVar86 = scroll_start;
          goto LAB_1400a5be9;
        }
      }
      else {
        fVar94 = (param_4->mouse).field0_0x0._s_0.y;
        fVar86 = fVar84 * -0.5 + 1.0;
        auVar75 = vandps_avx(ZEXT416((uint)((fVar86 - scroll_pos * (1.0 / fVar78)) - fVar94)),
                             ___xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar75 = vcmpss_avx(ZEXT416((uint)(fVar84 * 0.5)),auVar75,1);
        auVar75 = vblendvps_avx(ZEXT416((uint)scroll_pos),
                                ZEXT416((uint)(fVar78 * (fVar86 - fVar94))),auVar75);
        fVar86 = auVar75._0_4_;
        DAT_1401fa5c4 = 1;
        scroll_start_y = fVar94;
        scroll_start = fVar86;
        param_4->click_blocked = true;
        fVar84 = fVar94;
LAB_1400a5be9:
        scroll_pos = (fVar84 - fVar94) * fVar78 + fVar86;
        if (((param_4->released_buttons[0] & 2) != 0) ||
           (((param_4->pressed_buttons[0] | param_4->buttons[0]) & 2) == 0)) {
          DAT_1401fa5c4 = 0;
        }
      }
      bVar46 = DAT_1401fa5d0;
      local_11f0 = (real_2 *)(ulonglong)auVar85._0_4_;
      if ((param_4->pressed_buttons[0] & 0x10) == 0 || (DAT_1401fa5d0 & 1) != 0) {
        if ((DAT_1401fa5d0 & 1) == 0) goto LAB_1400a5d12;
        fVar78 = (param_4->mouse).field0_0x0._s_0.y;
      }
      else {
        DAT_1401fa5d0 = 1;
        fVar78 = (param_4->mouse).field0_0x0._s_0.y;
        autoscroll_dist = 0.0;
        autoscroll_y = fVar78;
      }
      scroll_pos = param_5 * 12.0 * (autoscroll_y - fVar78) + scroll_pos;
      fVar78 = (param_4->dmouse).field0_0x0._s_0.x;
      fVar84 = (param_4->dmouse).field0_0x0._s_0.y;
      auVar75 = ZEXT416((uint)(fVar84 * fVar84 + fVar78 * fVar78 + 0.0));
      auVar75 = vsqrtss_avx(auVar75,auVar75);
      autoscroll_dist = autoscroll_dist + auVar75._0_4_;
      if ((((param_4->pressed_buttons[0] & 0x16) != 0 & bVar46) != 0) ||
         (((param_4->released_buttons[0] & 0x10) != 0 && (0.1 < autoscroll_dist)))) {
        DAT_1401fa5d0 = 0;
      }
LAB_1400a5d12:
      pcVar42 = (cell_render_info *)0x0;
      auVar75 = vminss_avx(auVar81,ZEXT416((uint)(param_4->mouse_wheel * -0.1 + scroll_pos)));
      auVar97._0_12_ = ZEXT812(0);
      auVar97._12_4_ = 0;
      auVar95 = ZEXT1664(auVar97);
      auVar75 = vmaxss_avx(auVar97,auVar75);
      scroll_pos = auVar75._0_4_;
      fVar78 = scroll_pos + 0.86143595;
      fVar84 = -0.90000004;
      uVar50 = 0;
      local_1220 = 0.5;
      fVar86 = local_1220;
      local_1220 = 0.5;
      auVar90 = ZEXT464(0xbd60a895);
      auVar98 = ZEXT464(0xbdc28f5c);
      auVar93 = ZEXT1664(CONCAT412(0xbf800000,CONCAT48(0xbf800000,0xbf800000bf800000)));
      auVar76 = ZEXT464(0x3ca3d70a);
      auVar92 = ZEXT464(0x3e4ccccd);
      pcVar67 = creature_list;
      fVar94 = fVar78;
LAB_1400a5d95:
      do {
        uVar62 = (ulonglong)(uint)fVar94;
        pcVar48 = pcVar67;
        uVar63 = uVar50;
        do {
          uVar45 = (undefined4)((ulonglong)pcVar42 >> 0x20);
          pcVar67 = pcVar48;
          do {
            pcVar68 = pcVar67;
            pcVar48 = pcVar48 + 1;
            pcVar67 = pcVar68 + 1;
          } while (pcVar68[1].hidden != 0);
          fVar88 = (param_4->mouse).field0_0x0._s_0.x;
          fVar87 = (param_4->mouse).field0_0x0._s_0.y;
          auVar100 = ZEXT464((uint)fVar87);
          if (gamepad_anchors == (real_2 *)0x0) {
            max_gamepad_anchors = 0x400;
            prVar32 = (real_2 *)dynamic_alloc(0x2000);
            fVar87 = auVar100._0_4_;
            gamepad_anchors = prVar32;
            if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a5e05;
          }
          else {
            prVar32 = gamepad_anchors;
            if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a5e05:
              prVar32 = gamepad_anchors;
              lVar47 = (longlong)n_gamepad_anchors;
              n_gamepad_anchors = n_gamepad_anchors + 1;
              gamepad_anchors[lVar47].field0_0x0 =
                   (real_2_u_0)(CONCAT44(uVar45,fVar84) | uVar62 << 0x20);
            }
          }
          fVar87 = ABS((float)((uint)((ulonglong)prVar32 >> 0x20) | (uint)(fVar87 - fVar94)));
          fVar23 = ABS(fVar88 - fVar84);
          fVar96 = auVar95._0_4_;
          fVar88 = fVar23 * 0.5 + fVar96 + fVar87 * -0.8660254;
          if (fVar88 < fVar96) {
            fVar87 = fVar87 + (fVar88 + fVar88) * 0.8660254;
            fVar23 = fVar23 + (fVar88 + fVar88) * -0.5;
          }
          auVar75 = vminss_avx(SUB6416(ZEXT464(0x3d60a895),0),ZEXT416((uint)fVar87));
          auVar75 = vmaxss_avx(auVar90._0_16_,auVar75);
          fVar87 = fVar87 - auVar75._0_4_;
          fVar23 = auVar98._0_4_ + fVar23;
          auVar75 = ZEXT416((uint)(fVar23 * fVar23 + fVar96 + fVar87 * fVar87));
          auVar91 = vsqrtss_avx(auVar75,auVar75);
          auVar75 = vcmpss_avx(auVar95._0_16_,ZEXT416((uint)fVar23),1);
          auVar75 = vblendvps_avx(auVar93._0_16_,___xmm_3f8000003f8000003f8000003f800000,auVar75);
          auVar81 = vcmpss_avx(auVar95._0_16_,ZEXT416((uint)fVar23),4);
          auVar75 = vandps_avx(auVar81,auVar75);
          auVar100 = ZEXT1664(auVar76._0_16_);
          if (auVar75._0_4_ * auVar91._0_4_ < fVar96) {
            param_4->hover_blocked = true;
            param_4->cursor_type = 0;
            auVar75 = auVar92._0_16_;
            auVar100 = ZEXT1664(auVar75);
            if ((param_4->click_blocked == false) &&
               (auVar100 = ZEXT1664(auVar75), (param_4->pressed_buttons[0] & 2) != 0)) {
              param_1->selected_creature =
                   (int)((ulonglong)((longlong)pcVar48 - (longlong)creature_list) >> 3) *
                   -0x1eeaf9d1;
              param_4->click_blocked = true;
              auVar100 = ZEXT1664(auVar75);
            }
          }
          puVar31 = stalloc((longlong)pcVar68[1].plan.n_dragged_cells +
                            (longlong)pcVar68[1].plan.n_plan_cells);
          local_11cc._s_0.z = 0.0;
          pcVar42 = pcVar28;
          local_11cc._s_0.x = fVar84;
          local_11cc._s_0.y = fVar94;
          add_thumbnail_cells(&pcVar68[1].plan,pcVar28,(int *)local_1078,puVar31,
                              (real_3 *)&local_11cc._s_0,0.085499994,false);
          stunalloc(puVar31);
          uVar50 = uVar63 + 1;
          phVar29[uVar63].x.field0_0x0._s_0.x = fVar84;
          phVar29[uVar63].x.field0_0x0._s_0.y = fVar94;
          *(undefined8 *)((longlong)&phVar29[uVar63].x.field0_0x0._s_2.yz.field0_0x0 + 4) = 0;
          phVar29[uVar63].r.field0_0x0._s_0.y = 0.109696545;
          phVar29[uVar63].color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
          phVar29[uVar63].color.field0_0x0._s_0.z = 1.0;
          phVar29[uVar63].color.field0_0x0._s_0.w = auVar100._0_4_;
          if (uVar63 == iVar22 - 1U) {
            fVar84 = ((fVar78 + 0.2) - fVar94) * 0.5 + 0.02375;
            fVar78 = fVar84 + -0.015;
            fVar84 = fVar84 + 0.03;
            local_f38._s_0.x = 1.0;
            local_f38._s_0.y = 1.0;
            local_f38._s_0.z = 1.0;
            local_f38._s_0.w = 1.0;
            local_f48.xy.field0_0x0 = (real_2)(real_2_u_0)0x3a83126f3a83126f;
            local_f48._8_8_ = 0x3f4ccccd3a83126f;
            local_10d8.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
            local_10d8._s_0.z = 0.0;
            draw_rounded_rectangle_outlined
                      (param_3,(real_3 *)&local_10d8._s_0,
                       (real_2)((ulonglong)(uint)fVar84 << 0x20 | 0x3f87ae14),0.03,0.01,
                       (real_4 *)&local_f48._s_0,(real_4 *)&local_f38._s_0);
            fVar94 = 0.0;
            (param_1->block_zone).field0_0x0._s_0.x = 1.06;
            (param_1->block_zone).field0_0x0._s_0.y = fVar84;
            if (0.0 < fVar77) {
              auVar75 = SUB6416(ZEXT464(0x3f000000),0);
              if ((DAT_1401fa5c4 & 1) == 0) {
                auVar75 = SUB6416(ZEXT464(0x3f800000),0);
              }
              auVar81 = vcmpss_avx(local_1058,SUB6416(ZEXT464(0x3bf5c28f),0),1);
              auVar75 = vblendvps_avx(auVar75,SUB6416(ZEXT464(0x3f000000),0),auVar81);
              auVar75 = vblendps_avx(auVar75,___xmm_00000000000000003f73333300000000,0xe);
              local_f58 = (real_4_u_0)vshufps_avx(auVar75,auVar75,0x40);
              fVar94 = 0.0;
              draw_line(param_3,(real_2)((ulonglong)
                                         (uint)(0.9925 - ((1.985 - (float)local_1048._0_4_) *
                                                         scroll_pos) / fVar77) << 0x20 | 0x3f833333)
                        ,(real_2)((ulonglong)(local_1048._0_4_ + 0x80000000) << 0x20),0.0075,
                        (real_4 *)&local_f58._s_0);
            }
            local_ba8._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
            local_ba8._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
            local_ba8._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
            local_ba8._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
            local_ba8._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
            local_ba8._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
            local_ba8._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
            local_ba8._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
            draw_regular_hexagons(phVar29,(int)uVar50,(real_4x4 *)local_ba8.columns);
            (*glBindFramebuffer)(0x8d40,param_3->cell_frame_buffer);
            bVar46 = 0;
            glViewport(0,0,(param_3->resolution).field0_0x0._s_0.x,
                       (param_3->resolution).field0_0x0._s_0.y);
            (*glBlendFuncSeparate)(1,1,1,1);
            glClearColor(0,0,0,0);
            glClear(0x4000);
            local_be8._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
            local_be8._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
            local_be8._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
            local_be8._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
            local_be8._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
            local_be8._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
            local_be8._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
            local_be8._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
            draw_cells(pcVar28,local_1078._0_4_,(real_4x4 *)local_be8.columns,w.frame_number,false);
            (*glBindFramebuffer)(0x8d40,param_3->frame_buffer);
            glViewport(0,0,(param_3->resolution).field0_0x0._s_0.x,
                       (param_3->resolution).field0_0x0._s_0.y);
            (*glFramebufferTexture2D)
                      (0x8d40,0x8ce0,0xde1,(param_3->field14_0xc8)._s_0.color_texture,0);
            local_4e8._s_0.x = 5.05364e-41;
            (*glDrawBuffers)(1,(uint *)local_4e8.data);
            (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
            (*glUseProgram)(blend_cells_program);
            current_uniforms = blend_cells_program_uniforms;
            (*glUniform1i)(blend_cells_program_uniforms[0],0);
            (*glActiveTexture)(0x84c0);
            glBindTexture(0xde1,(param_3->field14_0xc8)._s_0.cell_color_texture);
            (*glUniform1i)(current_uniforms[1],1);
            (*glActiveTexture)(0x84c1);
            glBindTexture(0xde1);
            uStack_4c8 = 0x3f80000000000000;
            uStack_4c0 = 0xbf800000;
            local_4e8 = (real_2_u_0)0xbf800000bf800000;
            rStack_4e0 = (real_2_u_0)0xbf80000000000000;
            uStack_4d8 = 0x3f800000;
            uStack_4d0 = 0x3f8000003f800000;
            (*glBufferSubData)(0x8892,0,0x30,&local_4e8);
            (*glEnableVertexAttribArray)(0);
            (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
            (*glVertexAttribDivisor)(0,0);
            glDrawArrays(6,0,4);
            stunalloc(phVar29);
            stunalloc(pcVar28);
            fVar77 = (param_4->mouse).field0_0x0._s_0.x + -1.015;
            fVar84 = (param_4->mouse).field0_0x0._s_0.y - fVar78;
            fVar77 = fVar84 * fVar84 + fVar77 * fVar77 + fVar94;
            auVar90 = ZEXT464(0x3a23d70b);
            fVar84 = 0.00062500004;
            bVar19 = param_4->click_blocked;
            if (fVar77 <= 0.00062500004) {
              if (bVar19 == false) {
                bVar46 = param_4->pressed_buttons[0] >> 1;
                bVar19 = (bool)(bVar46 & 1);
              }
              else {
                bVar19 = true;
                bVar46 = 0;
              }
            }
            param_4->click_blocked = bVar19;
            if (gamepad_anchors == (real_2 *)0x0) {
              max_gamepad_anchors = 0x400;
              gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
              fVar84 = auVar90._0_4_;
            }
            lVar47 = (longlong)n_gamepad_anchors;
            if (n_gamepad_anchors < max_gamepad_anchors) {
              n_gamepad_anchors = n_gamepad_anchors + 1;
              gamepad_anchors[lVar47].field0_0x0 =
                   (real_2_u_0)((ulonglong)(uint)fVar78 << 0x20 | 0x3f81eb85);
            }
            if (fVar84 < fVar77) {
              local_1220 = 1.0;
              fVar86 = local_1220;
              local_1220 = 1.0;
              next_gui_element = next_gui_element + 1;
            }
            else {
              iVar22 = next_gui_element + 1;
              param_4->hovered_ui_element = next_gui_element;
              next_gui_element = iVar22;
              param_4->hover_blocked = true;
            }
            if ((bVar46 & 1) != 0) {
              param_1->tool = -1;
              param_4->click_blocked = true;
              local_1220 = fVar86;
            }
            auVar90 = ZEXT464((uint)local_1220);
            local_1158._s_0.x = local_1220;
            local_1158._s_0.y = local_1220;
            local_1158._s_0.z = local_1220;
            local_1158._s_0.w = 1.0;
            auVar92 = ZEXT464(0x3ba3d70a);
            draw_line(param_3,(real_2)((ulonglong)(uint)(fVar78 + -0.015) << 0x20 | 0x3f800000),
                      (real_2)0x3cf5c28f3cf5c28f,0.005,(real_4 *)&local_1158._s_0);
            local_1168._s_0.x = (float)auVar90._0_4_;
            local_1168._s_0.w = 1.0;
            local_1168._s_0.y = local_1168._s_0.x;
            local_1168._s_0.z = local_1168._s_0.x;
            draw_line(param_3,(real_2)((ulonglong)(uint)(fVar78 + 0.015) << 0x20 | 0x3f800000),
                      (real_2)0xbcf5c28f3cf5c28f,auVar92._0_4_,(real_4 *)&local_1168._s_0);
            if (DAT_1401fa5d0 == 1) {
              param_4->cursor_type = 7;
            }
            auVar85 = ZEXT464(auVar85._0_4_);
            iVar22 = param_1->tool;
            goto joined_r0x0001400a4982;
          }
          fVar84 = auVar92._0_4_ + fVar84;
          iVar61 = (int)((uVar63 & 0xffffffff) * 0xaf286bcb >> 0x20);
          iVar61 = (int)uVar63 + (((uint)((int)uVar63 - iVar61) >> 1) + iVar61 >> 4) * -0x13;
          if (iVar61 == 0x12) {
            fVar94 = fVar94 + -0.17320508;
            fVar84 = -0.90000004;
            goto LAB_1400a5d95;
          }
          pcVar48 = pcVar67;
          uVar63 = uVar50;
        } while (iVar61 != 9);
        fVar94 = fVar94 + -0.17320508;
        fVar84 = -0.8;
      } while( true );
    }
    param_4->cursor_type = 5;
    uVar21 = w.translations.max_entries;
    ppcVar18 = w.translations.keys;
    uVar20 = 0x9030b290 % w.translations.max_entries;
    uVar58 = uVar20;
    do {
      lVar47 = (longlong)(int)uVar58;
      if ((ppcVar18[lVar47] == (char *)0x0) || (strcmp(), extraout_EAX_03 == 0)) goto LAB_1400a4768;
      uVar58 = uVar58 + 1;
      if (uVar58 == uVar21) {
        uVar58 = 0;
      }
    } while (uVar58 != uVar20);
    lVar47 = (longlong)(int)uVar20;
LAB_1400a4768:
    if (w.translations.values[lVar47].text == (char **)0x0) {
      pcVar36 = unknown_string;
    }
    else {
      pcVar6 = w.translations.values[lVar47].text[w.language_index];
      pcVar36 = unknown_string;
      if (pcVar6 != (char *)0x0) {
        pcVar36 = pcVar6;
      }
    }
    snprintf((char *)&local_4e8,0x100,pcVar36);
    local_e38 = 0.0;
    local_e78 = ZEXT1632(CONCAT412(0x3b03126f,ZEXT812(0)));
    local_e58._4_28_ = ZEXT828(SUB128(ZEXT812(0),4));
    local_e58._0_4_ = 0x3f800000;
    local_8a8._0_8_ = *puVar2;
    local_8a8._8_8_ = (param_3->field29_0x128).font_infos[1].info.userdata;
    local_8a8._16_8_ = (param_3->field29_0x128).font_infos[1].info.data;
    local_8a8._24_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    local_8a8._28_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    local_8a8._32_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    local_8a8._36_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    local_8a8._40_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    local_8a8._44_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    local_8a8._48_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    local_8a8._52_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    local_8a8._56_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    local_8a8._60_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    local_8a8._64_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    local_8a8._68_4_ = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    local_8a8._72_8_ = (param_3->field29_0x128).font_infos[1].info.cff.data;
    local_8a8._80_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    local_8a8._84_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    local_8a8._88_8_ = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    local_8a8._96_32_ = *(undefined1 (*) [32])((longlong)&param_3->field29_0x128 + 0x118);
    local_8a8._128_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    local_8a8._132_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    puStack_820 = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    uStack_818._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    uStack_818._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    puStack_810 = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    uStack_808._0_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    uStack_808._4_4_ =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    uStack_800 = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    psStack_7f8 = (param_3->field29_0x128).font_infos[1].char_data;
    local_f28._s_0.z = 1.0;
    local_f28.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_f28._s_0.w = 1.0;
    auVar85 = ZEXT1664(auVar85._0_16_);
    draw_text((char *)&local_4e8,0.0,-0.8,(real_4 *)&local_f28._s_0,(real_2)0x0,
              (font_info *)local_8a8,(text_params *)local_e78);
    if ((param_4->click_blocked != false) || ((param_4->pressed_buttons[0] & 2) == 0))
    goto LAB_1400a4c43;
    local_1088.body_id = 0;
    local_1088.orientation.field0_0x0 = (real_2_u_0)0x0;
    local_1088._12_4_ = 1;
    pbVar26 = spawn_creature(param_1->selected_creature,rVar37,&local_1088);
    if (pbVar26 == (body *)0x0) {
      uVar20 = (*puVar4 >> 0x10 ^ *puVar4) * 0x7feb352d;
      uVar20 = (uVar20 >> 0xf ^ uVar20) * -0x7b935975;
      uVar20 = uVar20 >> 0x10 ^ uVar20;
      *puVar4 = uVar20;
      pqVar16 = ac.queued_sounds;
      if ((((ac.initialized == true) && (0 < sounds.error.n_samples)) &&
          (sounds.error.data != (short *)0x0)) &&
         (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
        fVar77 = (float)uVar20 * 2.3283064e-10;
        uVar20 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar20].sound = (sound_t *)0x1401eb230;
        uVar33 = vmovlps_avx(SUB6416(ZEXT464(0x3f800000),0));
        pqVar16[(int)uVar20].params.volume = (float)(int)uVar33;
        pqVar16[(int)uVar20].params.delay = (float)(int)((ulonglong)uVar33 >> 0x20);
        pqVar16[(int)uVar20].params.pitch_shift = fVar77 + fVar77 + -1.0;
        *(undefined1 (*) [16])&pqVar16[(int)uVar20].params.lowpass_dist = ZEXT816(0);
        *(undefined8 *)((longlong)pqVar16[(int)uVar20].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
LAB_1400a4c3b:
      param_4->click_blocked = true;
      goto LAB_1400a4c43;
    }
    pbVar26->team = param_1->selected_team;
    if ((((param_4->pressed_buttons[2] | param_4->buttons[2]) & 2) != 0) ||
       (((param_4->gamepad).buttons & 0x200) != 0)) goto LAB_1400a4c3b;
    param_1->tool = -1;
    param_4->click_blocked = true;
    iVar22 = param_1->tool;
  }
  else {
LAB_1400a4c43:
    iVar22 = param_1->tool;
  }
joined_r0x0001400a4982:
  if (iVar22 == 4) {
    param_4->cursor_type = 5;
    if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
      if (w.selected_body != 0) {
        if ((w.selected_body < 1) ||
           (uVar20 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
           w.bodies.field0_0x0.index_table[uVar20].id != w.selected_body)) {
          w.selected_body = 0;
        }
        else {
          iVar22 = w.bodies.field0_0x0.index_table[uVar20].index;
          w.selected_body = 0;
          if (w.bodies.field3_0x20.elements != (body *)0x0) {
            if ((longlong)w.bodies.field3_0x20.elements[iVar22].creature_index == 0) {
              w.bodies.field3_0x20.elements[iVar22].brain.fun = (_func___cdecl_void_body_ptr *)0x0;
            }
            else {
              w.bodies.field3_0x20.elements[iVar22].brain.fun =
                   creature_list[w.bodies.field3_0x20.elements[iVar22].creature_index].ai_func;
            }
          }
        }
      }
      local_f68._0_12_ = ZEXT812(0);
      local_f68._12_4_ = 0;
      uVar20 = str_to_id("PLYR");
      iVar22 = get_creature_index(uVar20);
      pbVar26 = spawn_creature(iVar22,rVar37,&local_f68);
      if (pbVar26 == (body *)0x0) {
        uVar20 = (*puVar4 >> 0x10 ^ *puVar4) * 0x7feb352d;
        uVar20 = (uVar20 >> 0xf ^ uVar20) * -0x7b935975;
        uVar20 = uVar20 >> 0x10 ^ uVar20;
        *puVar4 = uVar20;
        pqVar16 = ac.queued_sounds;
        if ((((ac.initialized == true) && (0 < sounds.error.n_samples)) &&
            (sounds.error.data != (short *)0x0)) &&
           (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
          fVar77 = (float)uVar20 * 2.3283064e-10;
          uVar20 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar20].sound = (sound_t *)0x1401eb230;
          uVar33 = vmovlps_avx(SUB6416(ZEXT464(0x3f800000),0));
          pqVar16[(int)uVar20].params.volume = (float)(int)uVar33;
          pqVar16[(int)uVar20].params.delay = (float)(int)((ulonglong)uVar33 >> 0x20);
          pqVar16[(int)uVar20].params.pitch_shift = fVar77 + fVar77 + -1.0;
          *(undefined1 (*) [16])&pqVar16[(int)uVar20].params.lowpass_dist = ZEXT816(0);
          *(undefined8 *)((longlong)pqVar16[(int)uVar20].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
      else {
        w.selected_body = pbVar26->id;
        pbVar26->team = w.last_team;
        lVar47 = (longlong)w.last_mutations.max_items;
        (pbVar26->field70_0x2c0).mutation_items.max_items = w.last_mutations.max_items;
        pmVar30 = (mutation_item *)dynamic_alloc(lVar47 * 0x24);
        (pbVar26->field70_0x2c0).mutation_items.items = pmVar30;
        if (0 < w.last_mutations.n_items) {
          lVar47 = 4;
          lVar38 = 0;
          do {
            iVar22 = *(int *)((longlong)(w.last_mutations.items)->imbues + lVar47 + -8);
            give_mutation(pbVar26,iVar22,
                          (int *)((longlong)(w.last_mutations.items)->imbues + lVar47 + -4),
                          mutations_list[iVar22].n_imbues,false);
            lVar38 = lVar38 + 1;
            lVar47 = lVar47 + 0x24;
          } while (lVar38 < w.last_mutations.n_items);
        }
        param_1->tool = -1;
        apply_edit_menu();
        pbVar26->health = 0.0;
        if (0 < (pbVar26->plan).n_plan_cells) {
          lVar47 = 0;
          lVar38 = 0;
          do {
            ppVar7 = (pbVar26->plan).plan_cells;
            iVar8 = (pbVar26->plan).region.l.field0_0x0._s_0;
            pbVar26->health =
                 materials_list[*(int *)((longlong)&ppVar7->material_index + lVar47)].max_health +
                 pbVar26->health;
            lVar55 = *(longlong *)((longlong)&(ppVar7->body_coord).field0_0x0 + lVar47);
            iVar22 = iVar8.x;
            pbVar26->cell_map
            [(int)(lVar55 - ((ulonglong)iVar8 & 0xffffffff00000000) >> 0x20) *
             ((pbVar26->plan).region.u.field0_0x0._s_0.x - iVar22) + ((int)lVar55 - iVar22)] = -1;
            lVar38 = lVar38 + 1;
            lVar47 = lVar47 + 0x34;
          } while (lVar38 < (pbVar26->plan).n_plan_cells);
        }
        deabstractify_body(pbVar26);
      }
      param_4->click_blocked = true;
    }
    fVar77 = auVar85._0_4_;
    iVar22 = param_1->tool;
    if (iVar22 == 6) goto LAB_1400a66c4;
LAB_1400a4e83:
    if (iVar22 != 7) goto LAB_1400a6a07;
LAB_1400a4e8c:
    param_4->cursor_type = 5;
    local_f98.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_f98._8_8_ = 0x3dcccccd3f800000;
    local_10f8.xy.field0_0x0 = (real_2)(param_4->mouse).field0_0x0;
    local_10f8._s_0.z = 0.0;
    draw_ring(param_3,(real_3 *)&local_10f8._s_0,fVar77 * *pfVar65,fVar77 * *pfVar65 + 0.003,
              (real_4 *)&local_f98._s_0);
    if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
      local_fa8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f0000003f800000;
      local_fa8._8_8_ = 0x3f8000003dcccccd;
      local_fb8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3e8000003f800000;
      local_fb8._8_8_ = 0x3f8000003c23d70b;
      create_explosion(rVar37,*pfVar65,0x10,0.8,16.0,(real_4 *)&local_fb8._s_0,
                       (real_4 *)&local_fa8._s_0,1.0);
    }
    iVar22 = param_1->tool;
    if (iVar22 == 8) goto LAB_1400a6a10;
LAB_1400a4f7c:
    bVar19 = false;
joined_r0x0001400a7be3:
    if (iVar22 == 9) {
      piVar34 = (icon_render_info *)stalloc((longlong)n_materials * 0x50);
      lVar47 = (longlong)n_materials;
      TlsGetValue(tls_index);
      puVar31 = stalloc(lVar47 << 2);
      iVar61 = 0;
      memset();
      iVar22 = w.em.n_cell_items;
      if (w.em.n_cell_items < 1) {
        iVar56 = -1;
      }
      else {
        iVar56 = 0;
        lVar47 = 0;
        lVar38 = 0;
        uVar33 = w.em.field12_0x40.cell_items;
        do {
          lVar55 = (longlong)*(int *)((longlong)&((cell_item *)uVar33)->material_index + lVar47);
          if (*(int *)(puVar31 + lVar55 * 4) == 0) {
            *(int *)(puVar31 + lVar55 * 4) = (int)lVar38 + 1;
            iVar56 = iVar56 + 1;
            uVar33 = w.em.field12_0x40.cell_items;
            iVar22 = w.em.n_cell_items;
          }
          lVar38 = lVar38 + 1;
          lVar47 = lVar47 + 0x48;
        } while (lVar38 < iVar22);
        iVar56 = iVar56 + -1;
      }
      fVar77 = (float)(int)((uint)(9 < iVar56 % 0x13) + (iVar56 / 0x13) * 2) * 0.5 * 0.8660254 * 0.2
      ;
      if (iVar22 < 1) {
        fVar78 = 0.0;
        local_1210 = NAN;
        local_1200 = 0x7fc0000000000000;
        auVar85 = ZEXT1664(ZEXT416((uint)fVar77));
      }
      else {
        auVar93 = ZEXT464((uint)(param_5 * -5.0));
        local_1200 = 0x7fc00000;
        local_1210 = NAN;
        auVar92 = ZEXT1264(ZEXT812(0));
        fVar84 = 150.0;
        auVar85 = ZEXT1664(ZEXT416((uint)fVar77));
        iVar60 = 0;
        iVar54 = 0;
        auVar90 = ZEXT1664(SUB6416(ZEXT464(0xbf666667),0));
        fVar78 = 0.0;
        uVar33 = w.em.field12_0x40.cell_items;
        uVar50 = 0;
        do {
          while( true ) {
            pmVar17 = materials_list;
            fVar94 = 0.0;
            iVar61 = ((cell_item *)(uVar33 + uVar50 * 0x48))->material_index;
            lVar47 = (longlong)iVar61;
            uVar63 = uVar50 + 1;
            if (uVar63 != *(uint *)(puVar31 + lVar47 * 4)) break;
            lVar38 = lVar47;
            if (gamepad_anchors == (real_2 *)0x0) {
              max_gamepad_anchors = 0x400;
              gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
              fVar94 = auVar92._0_4_;
              uVar62 = (ulonglong)auVar85._0_4_;
              if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a517d;
            }
            else {
              uVar62 = (ulonglong)auVar85._0_4_;
              if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a517d:
                lVar55 = (longlong)n_gamepad_anchors;
                n_gamepad_anchors = n_gamepad_anchors + 1;
                gamepad_anchors[lVar55].field0_0x0 =
                     (real_2_u_0)
                     (CONCAT44((int)((ulonglong)lVar38 >> 0x20),auVar90._0_4_) | uVar62 << 0x20);
              }
            }
            auVar91 = auVar85._0_16_;
            auVar75 = auVar90._0_16_;
            auVar81 = auVar93._0_16_;
            fVar86 = (param_4->mouse).field0_0x0._s_0.x - auVar90._0_4_;
            fVar88 = (param_4->mouse).field0_0x0._s_0.y - auVar85._0_4_;
            if (fVar88 * fVar88 + fVar86 * fVar86 + fVar94 <=
                param_1->cell_r[uVar50] * param_1->cell_r[uVar50]) {
              param_4->hover_blocked = true;
              param_4->cursor_type = 0;
              (param_1->tooltip).last_hovered_index = iVar61;
              (param_1->tooltip).last_hovered_type = 0;
              (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.x = auVar90._0_4_;
              (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.y = auVar85._0_4_;
              bVar19 = true;
              if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
                lVar38 = (longlong)n_combo_materials;
                iVar22 = n_combo_materials + 1;
                n_combo_materials = iVar22;
                combo_materials[lVar38] = iVar61;
                param_1->cell_r_dot[uVar50] = param_1->cell_r_dot[uVar50] + -10.0;
                param_4->click_blocked = true;
                if (iVar22 == 2) {
                  if (0 < (longlong)n_materials) {
                    piVar52 = &materials_list->combine_material_index2;
                    uVar66 = 0;
                    do {
                      if ((((int)((material_t *)(piVar52 + -0x38))->id < -0x7f000000) &&
                          (piVar52[-1] == combo_materials[0])) && (*piVar52 == combo_materials[1]))
                      goto LAB_1400a5329;
                      uVar66 = uVar66 + 1;
                      piVar52 = piVar52 + 0x46;
                    } while ((longlong)n_materials != uVar66);
                  }
                  uVar20 = combine_materials(combo_materials[0],combo_materials[1]);
                  uVar66 = (ulonglong)uVar20;
LAB_1400a5329:
                  rVar37.field0_0x0 = w.camera_pos.field0_0x0;
                  auVar91 = auVar85._0_16_;
                  auVar75 = auVar90._0_16_;
                  auVar81 = auVar93._0_16_;
                  iVar22 = (int)uVar66;
                  if (w.menu == 0) {
                    uVar20 = (uint)local_11f0 & 0xfffffffc;
                    lVar38 = (longlong)w.max_cell_pickups;
                    local_11f0 = (real_2 *)((ulonglong)local_11f0 & 0xfffffffffffffffc);
                    if (w.max_cell_pickups <= w.n_cell_pickups) {
                      w.max_cell_pickups = w.max_cell_pickups * 2;
                      bVar72 = expand_memory(&w.field116_0x3da0.cell_pickups_memory,lVar38 * 0x50);
                      auVar91 = auVar85._0_16_;
                      auVar75 = auVar90._0_16_;
                      auVar81 = auVar93._0_16_;
                      if (!bVar72) goto LAB_1400a549f;
                      uVar20 = (uint)local_11f0;
                    }
                    uVar33 = w.field116_0x3da0.cell_pickups;
                    lVar38 = (longlong)w.n_cell_pickups;
                    w.field116_0x3da0.cell_pickups[lVar38].material_index = iVar22;
                    (((cell_pickup *)(uVar33 + lVar38 * 0x28))->x).field0_0x0._s_0 =
                         (real_2_u_0_s_0)rVar37.field0_0x0;
                    auVar73 = ZEXT812(0);
                    pcVar15 = (cell_pickup *)(uVar33 + lVar38 * 0x28);
                    pcVar15->x_dot = (real_2)auVar73._0_8_;
                    pcVar15->r = (float)auVar73._8_4_;
                    pcVar15->r_dot = 0.0;
                    ((cell_pickup *)(uVar33 + lVar38 * 0x28))->alpha = 0.0;
                    ((cell_pickup *)(uVar33 + lVar38 * 0x28))->text_alpha = 0.0;
                    (((cell_pickup *)(uVar33 + lVar38 * 0x28))->field7_0x24).flags = uVar20;
                    w.n_cell_pickups = w.n_cell_pickups + 1;
                  }
                  else {
                    lVar38 = (longlong)w.em.max_cell_items;
                    if (w.em.max_cell_items <= w.em.n_cell_items) {
                      w.em.max_cell_items = w.em.max_cell_items * 2;
                      bVar72 = expand_memory(&w.em.field12_0x40.cell_items_memory,lVar38 * 0x90);
                      auVar91 = auVar85._0_16_;
                      auVar75 = auVar90._0_16_;
                      auVar81 = auVar93._0_16_;
                      if (!bVar72) goto LAB_1400a549f;
                    }
                    pvVar24 = TlsGetValue(tls_index);
                    auVar91 = auVar85._0_16_;
                    auVar75 = auVar90._0_16_;
                    auVar81 = auVar93._0_16_;
                    uVar20 = (*(uint *)((longlong)pvVar24 + 0x6c) >> 0x10 ^
                             *(uint *)((longlong)pvVar24 + 0x6c)) * 0x7feb352d;
                    uVar20 = (uVar20 >> 0xf ^ uVar20) * -0x7b935975;
                    uVar20 = uVar20 >> 0x10 ^ uVar20;
                    *(uint *)((longlong)pvVar24 + 0x6c) = uVar20;
                    uVar33 = w.em.field12_0x40.cell_items;
                    lVar38 = (longlong)w.em.n_cell_items;
                    w.em.field12_0x40.cell_items[lVar38].material_index = iVar22;
                    pcVar14 = (cell_item *)(uVar33 + lVar38 * 0x48);
                    auVar82 = ZEXT1232(ZEXT812(0));
                    (pcVar14->button).x = (real_2)auVar82._0_8_;
                    (pcVar14->button).x_dot = (real_2)auVar82._8_8_;
                    (pcVar14->button).x_brown = (real_2)auVar82._16_8_;
                    (pcVar14->button).x_brown_dot = (real_2)auVar82._24_8_;
                    pcVar14 = (cell_item *)(uVar33 + lVar38 * 0x48);
                    (pcVar14->button).x_brown = (real_2)auVar82._0_8_;
                    (pcVar14->button).x_brown_dot = (real_2)auVar82._8_8_;
                    (pcVar14->button).x_offset = (real_2)auVar82._16_8_;
                    (pcVar14->button).r = (float)auVar82._24_4_;
                    (pcVar14->button).r_dot = (float)auVar82._28_4_;
                    (((cell_item *)(uVar33 + lVar38 * 0x48))->button).selection_theta =
                         (float)uVar20 * 2.3283064e-10 * 100.0;
                    pcVar14 = (cell_item *)(uVar33 + lVar38 * 0x48);
                    (pcVar14->button).hovered = 0.0;
                    (pcVar14->button).selected = 0.0;
                    *(undefined8 *)(&(pcVar14->button).hovered + 2) = 0;
                    piVar52 = w.em.cell_item_counts + iVar22;
                    *piVar52 = *piVar52 + 1;
                    w.em.n_cell_items = w.em.n_cell_items + 1;
                  }
LAB_1400a549f:
                  n_combo_materials = 0;
                  param_1->tool = -1;
                }
              }
              fVar94 = 0.091;
            }
            else {
              fVar94 = 0.07;
            }
            pfVar65 = param_1->cell_r;
            pfVar9 = param_1->cell_r_dot;
            auVar90 = ZEXT1664(auVar81);
            auVar95 = ZEXT1664(auVar75);
            auVar93 = ZEXT1664(auVar81);
            auVar85 = ZEXT1664(auVar91);
            expf();
            auVar92 = ZEXT1664(auVar90._0_16_);
            fVar86 = pfVar65[uVar50] - fVar94;
            fVar87 = pfVar9[uVar50] / fVar84;
            auVar90 = ZEXT464((uint)local_1204);
            fVar88 = local_1204;
            cosf();
            auVar90 = ZEXT1664(auVar90._0_16_);
            sinf();
            pfVar65[uVar50] = fVar94 + auVar92._0_4_ * (fVar86 * auVar90._0_4_ + fVar87 * fVar88);
            pfVar9[uVar50] = auVar92._0_4_ * fVar84 * (auVar90._0_4_ * fVar87 - fVar86 * fVar88);
            auVar75 = vminss_avx(SUB6416(ZEXT464(0x3e570a3e),0),
                                 ZEXT416((uint)param_1->cell_r[uVar50]));
            auVar89._0_12_ = ZEXT812(0);
            auVar89._12_4_ = 0;
            auVar92 = ZEXT1664(auVar89);
            auVar75 = vmaxss_avx(auVar89,auVar75);
            param_1->cell_r[uVar50] = auVar75._0_4_;
            local_4e8 = pmVar17[lVar47].base_color.field0_0x0.xy.field0_0x0;
            rStack_4e0 = *(real_2_u_0 *)
                          ((longlong)&pmVar17[lVar47].base_color.field0_0x0._s_2.yz.field0_0x0 + 4);
            rVar71 = pmVar17[lVar47].uv.field0_0x0;
            auVar75 = vinsertps_avx(auVar95._0_16_,auVar85._0_16_,0x1c);
            auVar75 = vshufps_avx(auVar75,ZEXT416((uint)param_1->cell_r[uVar50]),0x14);
            piVar34[iVar54].x = (real_3)auVar75._0_12_;
            piVar34[iVar54].r = (float)auVar75._12_4_;
            piVar34[iVar54].color.field0_0x0.xy.field0_0x0 = local_4e8;
            *(real_2_u_0 *)((longlong)&piVar34[iVar54].color.field0_0x0._s_2.yz.field0_0x0 + 4) =
                 rStack_4e0;
            piVar34[iVar54].uv.field0_0x0 = rVar71;
            if ((n_combo_materials != 0) && (combo_materials[0] == iVar61)) {
              fVar78 = param_1->cell_r[uVar50] + 0.01;
              local_1200 = uVar62;
              local_1210 = auVar95._0_4_;
            }
            iVar61 = iVar54 + 1;
            if (iVar60 == iVar56) goto LAB_1400a56bf;
            iVar54 = iVar54 + 1;
            auVar90 = ZEXT464((uint)(auVar95._0_4_ + 0.2));
            if (iVar60 % 0x13 == 0x12) {
              auVar85 = ZEXT464((uint)(auVar85._0_4_ + -0.17320508));
              auVar90 = ZEXT464(0xbf666667);
            }
            else if (iVar60 % 0x13 == 9) {
              auVar85 = ZEXT464((uint)(auVar85._0_4_ + -0.17320508));
              auVar90 = ZEXT464(0xbf4ccccd);
            }
            iVar60 = iVar60 + 1;
            uVar33 = w.em.field12_0x40.cell_items;
            uVar50 = uVar63;
            iVar22 = w.em.n_cell_items;
            iVar61 = iVar54;
            if ((longlong)w.em.n_cell_items <= (longlong)uVar63) goto LAB_1400a56bf;
          }
          uVar50 = uVar63;
          iVar61 = iVar54;
        } while ((longlong)uVar63 < (longlong)iVar22);
LAB_1400a56bf:
        local_1200 = local_1200 << 0x20;
      }
      stunalloc(puVar31);
      fVar84 = ((fVar77 + 0.2) - auVar85._0_4_) * 0.5;
      fVar77 = fVar84 + -0.015;
      fVar84 = fVar84 + 0.03;
      local_1018._s_0.z = 1.0;
      local_1018.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_1018._s_0.w = 1.0;
      auVar85 = ZEXT1664((undefined1  [16])local_1018);
      local_1028._s_0.x = 0.001;
      local_1028._s_0.y = 0.001;
      local_1028._s_0.z = 0.001;
      local_1028._s_0.w = 0.001;
      local_1118.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_1118._s_0.z = 0.0;
      draw_rounded_rectangle_outlined
                (param_3,(real_3 *)&local_1118._s_0,
                 (real_2)((ulonglong)(uint)fVar84 << 0x20 | 0x3f83d70a),0.03,0.01,
                 (real_4 *)&local_1028._s_0,(real_4 *)&local_1018._s_0);
      (param_1->block_zone).field0_0x0._s_0.x = 1.03;
      (param_1->block_zone).field0_0x0._s_0.y = fVar84;
      if (!NAN(local_1210)) {
        local_1038 = auVar85._0_16_;
        local_1128.xy.field0_0x0 = (real_2)(local_1200 | CONCAT44(extraout_var,local_1210));
        local_1128._s_0.z = 0.0;
        draw_circle(param_3,(real_3 *)&local_1128._s_0,fVar78,(real_4 *)&local_1038._s_0);
      }
      local_ca8._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
      local_ca8._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
      local_ca8._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
      local_ca8._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
      local_ca8._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
      local_ca8._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
      local_ca8._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
      local_ca8._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
      draw_cell_icons(piVar34,iVar61,(real_4x4 *)local_ca8.columns,(real_2)0x3f80000000000000);
      stunalloc(piVar34);
      fVar78 = (param_4->mouse).field0_0x0._s_0.x + -0.985;
      fVar84 = (param_4->mouse).field0_0x0._s_0.y - fVar77;
      fVar78 = fVar84 * fVar84 + fVar78 * fVar78 + 0.0;
      fVar84 = 0.00062500004;
      if (0.00062500004 < fVar78) {
        bVar46 = 0;
        param_4->click_blocked = param_4->click_blocked;
      }
      else if (param_4->click_blocked == false) {
        bVar46 = param_4->pressed_buttons[0] >> 1;
        param_4->click_blocked = (bool)(bVar46 & 1);
      }
      else {
        bVar46 = 0;
        param_4->click_blocked = true;
      }
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        fVar84 = 0.00062500004;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
      }
      lVar47 = (longlong)n_gamepad_anchors;
      if (n_gamepad_anchors < max_gamepad_anchors) {
        n_gamepad_anchors = n_gamepad_anchors + 1;
        gamepad_anchors[lVar47].field0_0x0 =
             (real_2_u_0)((ulonglong)(uint)fVar77 << 0x20 | 0x3f7c28f6);
      }
      fVar94 = 1.0;
      iVar22 = next_gui_element + 1;
      if (fVar78 <= fVar84) {
        param_4->hovered_ui_element = next_gui_element;
        next_gui_element = iVar22;
        param_4->hover_blocked = true;
        fVar94 = 0.5;
        iVar22 = next_gui_element;
      }
      next_gui_element = iVar22;
      if ((bVar46 & 1) != 0) {
        param_1->tool = -1;
        param_4->click_blocked = true;
      }
      local_1198._s_0.w = 1.0;
      fVar78 = 0.005;
      local_1198._s_0.x = fVar94;
      local_1198._s_0.y = fVar94;
      local_1198._s_0.z = fVar94;
      draw_line(param_3,(real_2)((ulonglong)(uint)(fVar77 + -0.015) << 0x20 | 0x3f7851ec),
                (real_2)0x3cf5c28f3cf5c28f,0.005,(real_4 *)&local_1198._s_0);
      local_11a8._s_0.w = 1.0;
      local_11a8._s_0.x = fVar94;
      local_11a8._s_0.y = fVar94;
      local_11a8._s_0.z = fVar94;
      draw_line(param_3,(real_2)((ulonglong)(uint)(fVar77 + 0.015) << 0x20 | 0x3f7851ec),
                (real_2)0xbcf5c28f3cf5c28f,fVar78,(real_4 *)&local_11a8._s_0);
    }
    bVar72 = true;
    if (bVar19) goto LAB_1400a7bf6;
                    /* WARNING: Read-only address (ram,0x0001401bce20) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401be4e0) is written */
    fVar77 = (param_1->tooltip).alpha;
  }
  else {
    fVar77 = auVar85._0_4_;
    if (iVar22 != 6) goto LAB_1400a4e83;
LAB_1400a66c4:
    param_4->cursor_type = 6;
    uVar20 = w.translations.max_entries;
    ppcVar18 = w.translations.keys;
    uVar50 = 0x3ee98da9 % (ulonglong)w.translations.max_entries;
    uVar63 = uVar50;
    do {
      uVar62 = (ulonglong)(int)uVar63;
      if ((ppcVar18[uVar62] == (char *)0x0) || (strcmp(), extraout_EAX_04 == 0)) break;
      uVar21 = (int)uVar63 + 1;
      uVar63 = (ulonglong)uVar21;
      if (uVar21 == uVar20) {
        uVar63 = 0;
      }
      uVar62 = uVar50;
    } while ((int)uVar63 != (int)uVar50);
    if (w.translations.values[uVar62].text == (char **)0x0) {
      pcVar36 = unknown_string;
    }
    else {
      pcVar6 = w.translations.values[uVar62].text[w.language_index];
      pcVar36 = unknown_string;
      if (pcVar6 != (char *)0x0) {
        pcVar36 = pcVar6;
      }
    }
    snprintf((char *)&local_4e8,0x100,pcVar36);
    local_e88 = 0.0;
    local_ec8 = ZEXT1632(CONCAT412(0x3b03126f,ZEXT812(0)));
    local_ea8._4_28_ = ZEXT828(SUB128(ZEXT812(0),4));
    local_ea8._0_4_ = 0x3f800000;
    local_968._0_8_ = *puVar2;
    local_968.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
    local_968.info.data = (param_3->field29_0x128).font_infos[1].info.data;
    local_968.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
    local_968.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
    local_968.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
    local_968.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
    local_968.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
    local_968.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
    local_968.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
    local_968.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
    local_968.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
    local_968.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
    local_968.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
    local_968.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
    local_968.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
    local_968.info.cff.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
    local_968.info.cff.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
    local_968.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data;
    local_968.info.charstrings.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.cursor
    ;
    local_968.info.charstrings.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size;
    local_968.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
    local_968.info.gsubrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
    local_968.info.gsubrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
    local_968.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
    local_968.info.subrs.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
    local_968.info.subrs.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
    local_968.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
    local_968.info.fontdicts.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor;
    local_968.info.fontdicts.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
    local_968.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
    local_968.info.fdselect.cursor =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
    local_968.info.fdselect.size =
         (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
    local_968._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
    local_968.char_data = (param_3->field29_0x128).font_infos[1].char_data;
    local_f78._s_0.z = 1.0;
    local_f78.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_f78._s_0.w = 1.0;
    auVar90 = ZEXT1664((undefined1  [16])local_f78);
    auVar85 = ZEXT1664(auVar85._0_16_);
    draw_text((char *)&local_4e8,0.0,-0.8,(real_4 *)&local_f78._s_0,(real_2)0x0,&local_968,
              (text_params *)local_ec8);
    uVar20 = param_1->dragged_body;
    if ((((int)uVar20 < 1) ||
        (w.bodies.field0_0x0.index_table[w.bodies.n_max_elements + 0x7fffffffU & uVar20].id !=
         uVar20)) || (w.bodies.field3_0x20.elements == (body *)0x0)) {
      param_1->dragged_body = 0;
    }
    pbVar26 = get_best_hovered_body(rVar37,auVar85._0_4_);
    fVar77 = auVar85._0_4_;
    if (pbVar26 != (body *)0x0) {
      local_10e8.xy.field0_0x0 =
           (real_2)(CONCAT44(uVar40,fVar77 * ((pbVar26->cost_centroid).field0_0x0._s_0.x -
                                             (param_2->camera_pos).field0_0x0._s_0.x)) |
                   (ulonglong)
                   (uint)(fVar77 * ((pbVar26->cost_centroid).field0_0x0._s_0.y -
                                   (param_2->camera_pos).field0_0x0._s_0.y)) << 0x20);
      local_f88 = auVar90._0_16_;
      local_10e8._s_0.z = 0.0;
      draw_ring(param_3,(real_3 *)&local_10e8._s_0,0.05,0.06,(real_4 *)&local_f88._s_0);
      fVar77 = auVar85._0_4_;
      if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
        if (0 < w.n_cells) {
          uVar20 = w.n_cells + 1;
          uVar33 = w.field58_0x3a60.cells;
          do {
            uVar21 = uVar20 - 2 >> 4;
            uVar50 = (ulonglong)(uVar20 - 2 & 0xf);
            if ((((cell *)(uVar33 + (ulonglong)uVar21 * 0x2080))->field1_0x40).body_id_packed
                [uVar50] == pbVar26->id) {
              delete_cell((cell *)((longlong)
                                   &((cell *)(uVar33 + (ulonglong)uVar21 * 0x2080))->field0_0x0 +
                                  uVar50 * 4),false);
              uVar33 = w.field58_0x3a60.cells;
            }
            uVar20 = uVar20 - 1;
          } while (1 < uVar20);
        }
        delete_body(pbVar26);
        fVar77 = auVar85._0_4_;
        param_4->click_blocked = true;
        if ((((param_4->pressed_buttons[2] | param_4->buttons[2]) & 2) == 0) &&
           (((param_4->gamepad).buttons & 0x200) == 0)) {
          param_1->tool = -1;
        }
      }
    }
    iVar22 = param_1->tool;
    if (iVar22 == 7) goto LAB_1400a4e8c;
LAB_1400a6a07:
    if (iVar22 != 8) goto LAB_1400a4f7c;
LAB_1400a6a10:
    if (local_1228 != (body *)0x0) {
      piVar34 = (icon_render_info *)stalloc((longlong)n_materials * 0x50);
      piVar35 = (icon_render_info *)stalloc((longlong)n_mutation_types * 0x28);
      iVar22 = w.em.n_cell_items;
      if (n_pending_imbues < 1) {
        uVar40 = 0;
        iVar22 = 0;
        fVar77 = (float)(int)((uint)(9 < (n_mutation_types + -2) % 0x13) +
                             ((n_mutation_types + -2) / 0x13) * 2) * 0.5 * 0.8660254 * 0.2;
        local_11e8 = 0;
        bVar19 = false;
        fVar78 = fVar77;
        if (1 < n_mutation_types) {
          uVar20 = n_mutation_types - 1;
          auVar85 = ZEXT464(0xbf666667);
          uVar50 = 1;
          uVar63 = 0;
          auVar92 = ZEXT1664(CONCAT412(0x3e99999a,CONCAT48(0x3e99999a,0x3e99999a3e99999a)));
          auVar90 = ZEXT464((uint)fVar77);
          bVar19 = false;
          do {
            uVar40 = 0;
            if (gamepad_anchors == (real_2 *)0x0) {
              max_gamepad_anchors = 0x400;
              gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
              if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a6fd5;
            }
            else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a6fd5:
              lVar47 = (longlong)n_gamepad_anchors;
              n_gamepad_anchors = n_gamepad_anchors + 1;
              gamepad_anchors[lVar47].field0_0x0 =
                   (real_2_u_0)(CONCAT44(uVar40,auVar85._0_4_) | (ulonglong)auVar90._0_4_ << 0x20);
            }
            fVar78 = (param_4->mouse).field0_0x0._s_0.x - auVar85._0_4_;
            fVar84 = (param_4->mouse).field0_0x0._s_0.y - auVar90._0_4_;
            fVar94 = 0.07;
            iVar61 = (int)uVar50;
            if (fVar84 * fVar84 + fVar78 * fVar78 + 0.0 <= 0.0049) {
              param_4->hover_blocked = true;
              (param_1->tooltip).last_hovered_index = iVar61;
              (param_1->tooltip).last_hovered_type = 1;
              (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.x = auVar85._0_4_;
              (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.y = auVar90._0_4_;
              if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
                param_1->mutation_r_dot[uVar50] = param_1->mutation_r_dot[uVar50] + -10.0;
                n_imbues = 0;
                n_pending_imbues = mutations_list[uVar50].n_imbues;
                selected_mutation = iVar61;
                if (n_pending_imbues == 0) {
                  give_mutation(local_1228,iVar61,(int *)0x0,0,false);
                }
                param_4->click_blocked = true;
              }
              if ((param_4->right_click_blocked == false) &&
                 ((param_4->pressed_buttons[0] & 4) != 0)) {
                lVar47 = (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                         ((longlong)local_1228 - w.bodies.field3_0x20._0_8_ >> 4);
                uVar41 = w.field55_0x3a28.body_auxiliary_data[uVar50 + lVar47];
                if (uVar41 != '\0') {
                  uVar21 = (local_1228->field70_0x2c0).mutation_items.n_items;
                  iVar56 = uVar21 + 1;
                  lVar38 = 0x24;
                  do {
                    iVar56 = iVar56 + -1;
                    if (iVar56 < 1) goto LAB_1400a71f5;
                    lVar55 = lVar38 + -4;
                    lVar38 = lVar38 + -0x24;
                  } while (mutations_list[uVar50].id !=
                           mutations_list
                           [*(int *)((longlong)
                                     (local_1228->field70_0x2c0).mutation_items.items
                                     [(ulonglong)uVar21 - 2].imbues + lVar55)].id);
                  memcpy();
                  piVar52 = &(local_1228->field70_0x2c0).mutation_items.n_items;
                  *piVar52 = *piVar52 + -1;
                  lVar47 = (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                           ((longlong)local_1228 - w.bodies.field3_0x20._0_8_ >> 4);
                  uVar41 = w.field55_0x3a28.body_auxiliary_data[uVar50 + lVar47];
LAB_1400a71f5:
                  w.field55_0x3a28.body_auxiliary_data[uVar50 + lVar47] = uVar41 + 0xff;
                }
                param_4->right_click_blocked = true;
              }
              bVar19 = true;
              fVar94 = 0.084;
            }
            pfVar65 = param_1->mutation_r;
            pfVar9 = param_1->mutation_r_dot;
            fVar86 = param_5 * -10.0;
            expf();
            fVar78 = pfVar65[uVar50] - fVar94;
            auVar95 = ZEXT464(0x43960000);
            auVar93 = ZEXT464((uint)(pfVar9[uVar50] / 300.0));
            fVar84 = local_1204;
            fVar88 = local_1204;
            cosf();
            sinf();
            pfVar65[uVar50] = fVar94 + fVar86 * (fVar78 * fVar88 + auVar93._0_4_ * fVar84);
            pfVar9[uVar50] = fVar86 * auVar95._0_4_ * (auVar93._0_4_ * fVar88 - fVar78 * fVar84);
            puVar31 = w.field55_0x3a28.body_auxiliary_data +
                      (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                      ((longlong)local_1228 - w.bodies.field3_0x20._0_8_ >> 4);
            uVar41 = puVar31[uVar50];
            auVar75 = ZEXT816(0);
            if (-1 < (char)uVar41) {
              auVar75 = SUB6416(ZEXT464(0x3f800000),0);
            }
            auVar80._8_4_ = 0x3f800000;
            auVar80._0_8_ = 0x3f8000003f800000;
            auVar80._12_4_ = 0x3f800000;
            auVar75 = vinsertps_avx(auVar80,auVar75,0x10);
            rVar71 = mutations_list[uVar50].uv.field0_0x0;
            uVar40 = (undefined4)(uVar63 * 5 >> 0x20);
            auVar81 = vinsertps_avx(auVar85._0_16_,auVar90._0_16_,0x1c);
            auVar81 = vshufps_avx(auVar81,ZEXT416((uint)param_1->mutation_r[uVar50]),0x14);
            piVar35[uVar63].x = (real_3)auVar81._0_12_;
            piVar35[uVar63].r = (float)auVar81._12_4_;
            auVar81 = vpshufd_avx(ZEXT416((uint)CONCAT71((int7)((ulonglong)puVar31 >> 8),
                                                         uVar41 == '\0')),0);
            auVar81 = vpslld_avx(auVar81,0x1f);
            auVar75 = vblendvps_avx(auVar75,auVar92._0_16_,auVar81);
            rVar12 = (real_4_u_0)vshufps_avx(auVar75,auVar75,0x10);
            piVar35[uVar63].color.field0_0x0 = rVar12;
            piVar35[uVar63].uv.field0_0x0 = rVar71;
            local_11e8 = (ulonglong)uVar20;
            if (uVar50 == uVar20) break;
            auVar85 = ZEXT464((uint)(auVar85._0_4_ + 0.2));
            uVar21 = (iVar61 - 1U) % 0x13;
            if (uVar21 == 0x12) {
              auVar90 = ZEXT464((uint)(auVar90._0_4_ + -0.17320508));
              auVar85 = ZEXT464(0xbf666667);
            }
            else if (uVar21 == 9) {
              auVar90 = ZEXT464((uint)(auVar90._0_4_ + -0.17320508));
              auVar85 = ZEXT464(0xbf4ccccd);
            }
            uVar63 = uVar63 + 1;
            uVar50 = uVar50 + 1;
            local_11e8 = uVar63;
          } while ((longlong)uVar50 < (longlong)n_mutation_types);
          fVar78 = auVar90._0_4_;
        }
        fVar77 = ((fVar77 + 0.2) - fVar78) * 0.5 + 0.0175;
        fVar78 = 1.03;
      }
      else {
        uVar20 = w.em.n_cell_items - 1;
        iVar61 = (int)uVar20 / 0x13;
        piVar52 = (int *)0x0;
        uVar40 = 0;
        fVar77 = (float)(int)((uint)(9 < iVar61 * -0x13 + w.em.n_cell_items + -1) + iVar61 * 2) *
                 0.5 * 0.8660254 * 0.2;
        local_11e8 = 0;
        if (0 < w.em.n_cell_items) {
          local_11f0 = &piVar34->uv;
          auVar85 = ZEXT464(0xbf666667);
          uVar50 = 0;
          auVar92 = ZEXT1264(ZEXT812(0));
          fVar78 = 150.0;
          auVar90 = ZEXT1664(ZEXT416((uint)fVar77));
          bVar19 = false;
LAB_1400a6b31:
          do {
            uVar21 = auVar90._0_4_;
            lVar47 = uVar50 * 0x48;
            prVar49 = &local_11f0[uVar50 * 5].field0_0x0;
            uVar62 = uVar50 & 0xffffffff;
            rVar71 = (real_2_u_0)local_11f0;
            uVar63 = uVar50;
            do {
              pmVar17 = materials_list;
              fVar88 = rVar71._s_0.y;
              iVar61 = *(int *)((longlong)&(w.em.field12_0x40.cell_items)->material_index + lVar47);
              fVar84 = (param_4->mouse).field0_0x0._s_0.x;
              fVar94 = (param_4->mouse).field0_0x0._s_0.y;
              fVar86 = param_1->cell_r[uVar63];
              if (gamepad_anchors == (real_2 *)0x0) {
                max_gamepad_anchors = 0x400;
                gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
                fVar88 = rVar71._s_0.y;
                if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a6bb3;
              }
              else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a6bb3:
                lVar38 = (longlong)n_gamepad_anchors;
                rVar71 = (real_2_u_0)(CONCAT44(fVar88,auVar85._0_4_) | (ulonglong)uVar21 << 0x20);
                n_gamepad_anchors = n_gamepad_anchors + 1;
                piVar52 = (int *)0x0;
                gamepad_anchors[lVar38].field0_0x0 = rVar71;
              }
              fVar84 = fVar84 - auVar85._0_4_;
              fVar94 = fVar94 - auVar90._0_4_;
              auVar93 = ZEXT464(0x3d8f5c29);
              if (fVar94 * fVar94 + auVar92._0_4_ + fVar84 * fVar84 <= fVar86 * fVar86) {
                param_4->hover_blocked = true;
                param_4->cursor_type = 0;
                (param_1->tooltip).last_hovered_index = iVar61;
                (param_1->tooltip).last_hovered_type = 0;
                (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.x = auVar85._0_4_;
                (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.y = auVar90._0_4_;
                iVar56 = n_pending_imbues;
                bVar19 = true;
                if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
                  lVar38 = (longlong)n_imbues;
                  n_pending_imbues = n_pending_imbues + -1;
                  bVar72 = n_pending_imbues == 0;
                  iVar54 = n_imbues + 1;
                  piVar52 = imbues;
                  n_imbues = iVar54;
                  imbues[lVar38] = iVar61;
                  param_1->cell_r_dot[uVar63] = param_1->cell_r_dot[uVar63] + -10.0;
                  param_4->click_blocked = true;
                  if (bVar72 || iVar56 < 1) {
                    rVar71 = (real_2_u_0)0x0;
                    give_mutation(local_1228,selected_mutation,imbues,iVar54,false);
                  }
                }
                auVar93 = ZEXT464(0x3dba5e35);
              }
              pfVar65 = param_1->cell_r;
              pfVar9 = param_1->cell_r_dot;
              fVar94 = param_5 * -5.0;
              expf();
              auVar95 = ZEXT464((uint)(pfVar65[uVar63] - auVar93._0_4_));
              fVar88 = pfVar9[uVar63] / fVar78;
              fVar84 = local_1204;
              fVar86 = local_1204;
              cosf();
              sinf();
              uVar40 = (undefined4)((ulonglong)piVar52 >> 0x20);
              pfVar65[uVar63] = auVar93._0_4_ + fVar94 * (auVar95._0_4_ * fVar86 + fVar88 * fVar84);
              pfVar9[uVar63] = fVar94 * fVar78 * (fVar86 * fVar88 - auVar95._0_4_ * fVar84);
              auVar75 = vminss_avx(SUB6416(ZEXT464(0x3e570a3e),0),
                                   ZEXT416((uint)param_1->cell_r[uVar63]));
              auVar75 = vmaxss_avx(auVar92._0_16_,auVar75);
              param_1->cell_r[uVar63] = auVar75._0_4_;
              local_4e8 = pmVar17[iVar61].base_color.field0_0x0.xy.field0_0x0;
              rStack_4e0 = *(real_2_u_0 *)
                            ((longlong)&pmVar17[iVar61].base_color.field0_0x0._s_2.yz.field0_0x0 + 4
                            );
              rVar10 = pmVar17[iVar61].uv.field0_0x0;
              auVar75 = vinsertps_avx(auVar85._0_16_,auVar90._0_16_,0x1c);
              auVar75 = vshufps_avx(auVar75,ZEXT416((uint)param_1->cell_r[uVar63]),0x14);
              *(undefined1 (*) [16])(prVar49 + -4) = auVar75;
              prVar49[-2] = local_4e8;
              prVar49[-1] = rStack_4e0;
              *prVar49 = rVar10;
              if (uVar20 == uVar63) goto LAB_1400a7405;
              iVar61 = (int)(uVar62 * 0xaf286bcb >> 0x20);
              uVar50 = uVar63 + 1;
              auVar85 = ZEXT464((uint)(auVar85._0_4_ + 0.2));
              iVar61 = (int)uVar63 + (((uint)((int)uVar62 - iVar61) >> 1) + iVar61 >> 4) * -0x13;
              if (iVar61 == 0x12) {
                auVar90 = ZEXT464((uint)(auVar90._0_4_ + -0.17320508));
                auVar85 = ZEXT464(0xbf666667);
                goto LAB_1400a6b31;
              }
              uVar62 = (ulonglong)((int)uVar62 + 1);
              lVar47 = lVar47 + 0x48;
              prVar49 = prVar49 + 5;
              uVar63 = uVar50;
            } while (iVar61 != 9);
            auVar90 = ZEXT464((uint)(auVar90._0_4_ + -0.17320508));
            auVar85 = ZEXT464(0xbf4ccccd);
          } while( true );
        }
        auVar90 = ZEXT1664(ZEXT416((uint)fVar77));
        iVar22 = 0;
        bVar19 = false;
LAB_1400a7405:
        fVar77 = ((fVar77 + 0.2) - auVar90._0_4_) * 0.5;
        fVar78 = 1.0;
      }
      fVar86 = -0.015;
      fVar84 = fVar78 + 0.03;
      fVar94 = fVar77 + 0.03;
      local_fc8._s_0.z = 1.0;
      local_fc8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_fc8._s_0.w = 1.0;
      auVar85 = ZEXT1664((undefined1  [16])local_fc8);
      local_fd8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3a83126f3a83126f;
      local_fd8._8_8_ = 0x3f4ccccd3a83126f;
      local_1108.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_1108._s_0.z = 0.0;
      draw_rounded_rectangle_outlined
                (param_3,(real_3 *)&local_1108._s_0,
                 (real_2)(CONCAT44(uVar40,fVar84) | (ulonglong)(uint)fVar94 << 0x20),0.03,0.01,
                 (real_4 *)&local_fd8._s_0,(real_4 *)&local_fc8._s_0);
      uVar20 = w.translations.max_entries;
      ppcVar18 = w.translations.keys;
      if (n_pending_imbues < 1) {
        uVar50 = 0x2a2b82a9 % (ulonglong)w.translations.max_entries;
        uVar63 = uVar50;
        do {
          local_fe8 = auVar85._0_16_;
          uVar62 = (ulonglong)(int)uVar63;
          if (ppcVar18[uVar62] == (char *)0x0) break;
          strcmp();
          local_fe8 = auVar85._0_16_;
          if (extraout_EAX_06 == 0) break;
          uVar21 = (int)uVar63 + 1;
          uVar63 = (ulonglong)uVar21;
          if (uVar21 == uVar20) {
            uVar63 = 0;
          }
          uVar62 = uVar50;
        } while ((int)uVar63 != (int)uVar50);
        if (w.translations.values[uVar62].text == (char **)0x0) {
          prVar49 = (real_2_u_0 *)unknown_string;
        }
        else {
          prVar11 = (real_2_u_0 *)w.translations.values[uVar62].text[w.language_index];
          prVar49 = (real_2_u_0 *)unknown_string;
          if (prVar11 != (real_2_u_0 *)0x0) {
            prVar49 = prVar11;
          }
        }
      }
      else {
        sprintf(local_1078,"mut_%s_name");
        get_translation_formatted(local_1078,(translation_info)0x0);
        uVar21 = w.translations.max_entries;
        ppcVar18 = w.translations.keys;
        uVar20 = 0x90ab6ec5 % w.translations.max_entries;
        uVar58 = uVar20;
        do {
          lVar47 = (longlong)(int)uVar58;
          if ((ppcVar18[lVar47] == (char *)0x0) || (strcmp(), extraout_EAX_05 == 0))
          goto LAB_1400a75a8;
          uVar58 = uVar58 + 1;
          if (uVar58 == uVar21) {
            uVar58 = 0;
          }
        } while (uVar58 != uVar20);
        lVar47 = (longlong)(int)uVar20;
LAB_1400a75a8:
        if (w.translations.values[lVar47].text == (char **)0x0) {
          pcVar36 = unknown_string;
        }
        else {
          pcVar6 = w.translations.values[lVar47].text[w.language_index];
          pcVar36 = unknown_string;
          if (pcVar6 != (char *)0x0) {
            pcVar36 = pcVar6;
          }
        }
        snprintf((char *)&local_4e8,0x400,pcVar36);
        local_fe8 = auVar85._0_16_;
        prVar49 = &local_4e8;
      }
      fVar77 = fVar77 + fVar86;
      fVar78 = fVar78 + fVar86;
      local_a28.info.fdselect.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.cursor;
      local_a28.info.fdselect.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
      local_a28._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0x160);
      local_a28.char_data = (param_3->field29_0x128).font_infos[1].char_data;
      local_a28.info.subrs.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
      local_a28.info.subrs.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
      local_a28.info.fontdicts.data = (param_3->field29_0x128).font_infos[1].info.fontdicts.data;
      local_a28.info.fontdicts.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.cursor
      ;
      local_a28.info.fontdicts.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size;
      local_a28.info.fdselect.data = (param_3->field29_0x128).font_infos[1].info.fdselect.data;
      local_a28._0_8_ = *puVar2;
      local_a28.info.userdata = (param_3->field29_0x128).font_infos[1].info.userdata;
      local_a28.info.data = (param_3->field29_0x128).font_infos[1].info.data;
      local_a28.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0xd0);
      local_a28.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0xd4);
      local_a28.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0xd8);
      local_a28.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0xdc);
      local_a28.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0xe0);
      local_a28.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0xe4);
      local_a28.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0xe8);
      local_a28.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0xec);
      local_a28.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0xf0);
      local_a28.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0xf4);
      local_a28.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0xf8);
      local_a28.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0xfc);
      local_a28.info.cff.data = (param_3->field29_0x128).font_infos[1].info.cff.data;
      local_a28.info.cff.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
      local_a28.info.cff.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).cff.size;
      local_a28.info.charstrings.data = (param_3->field29_0x128).font_infos[1].info.charstrings.data
      ;
      local_a28.info.charstrings.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.
           cursor;
      local_a28.info.charstrings.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).charstrings.size
      ;
      local_a28.info.gsubrs.data = (param_3->field29_0x128).font_infos[1].info.gsubrs.data;
      local_a28.info.gsubrs.cursor =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
      local_a28.info.gsubrs.size =
           (((font_info *)((longlong)&(param_3->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
      local_a28.info.subrs.data = (param_3->field29_0x128).font_infos[1].info.subrs.data;
      auVar85 = ZEXT1264(ZEXT812(0));
      draw_text((char *)prVar49,0.0,fVar94 + -0.01,(real_4 *)&local_fe8._s_0,
                (real_2)0x3f80000000000000,&local_a28,&default_shadow);
      (param_1->block_zone).field0_0x0._s_0.x = fVar84;
      (param_1->block_zone).field0_0x0._s_0.y = fVar94;
      local_c28._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
      local_c28._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
      local_c28._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
      local_c28._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
      local_c28._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
      local_c28._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
      local_c28._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
      local_c28._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
      auVar85 = ZEXT1664(auVar85._0_16_);
      draw_cell_icons(piVar34,iVar22,(real_4x4 *)local_c28.columns,(real_2)0x3f80000000000000);
      local_c68._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
      local_c68._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
      local_c68._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
      local_c68._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
      local_c68._32_32_ = *(undefined1 (*) [32])((longlong)&(param_3->camera).field0_0x0 + 0x20);
      prVar53 = &local_c68;
      auVar85 = ZEXT1664(auVar85._0_16_);
      draw_mutation_icons(piVar35,(int)local_11e8,(real_4x4 *)prVar53->columns);
      uVar40 = (undefined4)((ulonglong)prVar53 >> 0x20);
      if (0 < (int)local_11e8) {
        pfVar65 = &(piVar35->x).field0_0x0._s_0.y;
        uVar50 = 0;
        auVar90 = ZEXT1264(ZEXT812(0));
        auVar92 = ZEXT464(0xbd8f5c29);
        auVar93 = ZEXT464(0x3d8f5c29);
        uVar33 = w.field55_0x3a28.body_auxiliary_data;
        uVar43 = w.bodies.field3_0x20.elements;
        iVar22 = w.body_auxiliary_size;
        do {
          pcVar36 = (char *)((longlong)iVar22 * 0x4fa4fa4fa4fa4fa5);
          if (*(uchar *)(uVar33 + uVar50 + 1 +
                                  ((longlong)local_1228 - uVar43 >> 4) * (longlong)pcVar36) != '\0')
          {
            local_ff8 = (param_3->foreground_color).field0_0x0.xy.field0_0x0;
            uStack_ff0 = *(undefined8 *)
                          ((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4)
            ;
            local_ae8._0_8_ = *(undefined8 *)&param_3->field29_0x128;
            local_ae8.info.userdata = (param_3->field29_0x128).font_infos[0].info.userdata;
            local_ae8.info.data = (param_3->field29_0x128).font_infos[0].info.data;
            local_ae8.info.fontstart = *(int *)((longlong)&param_3->field29_0x128 + 0x18);
            local_ae8.info.numGlyphs = *(int *)((longlong)&param_3->field29_0x128 + 0x1c);
            local_ae8.info.loca = *(int *)((longlong)&param_3->field29_0x128 + 0x20);
            local_ae8.info.head = *(int *)((longlong)&param_3->field29_0x128 + 0x24);
            local_ae8.info.glyf = *(int *)((longlong)&param_3->field29_0x128 + 0x28);
            local_ae8.info.hhea = *(int *)((longlong)&param_3->field29_0x128 + 0x2c);
            local_ae8.info.hmtx = *(int *)((longlong)&param_3->field29_0x128 + 0x30);
            local_ae8.info.kern = *(int *)((longlong)&param_3->field29_0x128 + 0x34);
            local_ae8.info.gpos = *(int *)((longlong)&param_3->field29_0x128 + 0x38);
            local_ae8.info.svg = *(int *)((longlong)&param_3->field29_0x128 + 0x3c);
            local_ae8.info.index_map = *(int *)((longlong)&param_3->field29_0x128 + 0x40);
            local_ae8.info.indexToLocFormat = *(int *)((longlong)&param_3->field29_0x128 + 0x44);
            local_ae8.info.cff.data = (param_3->field29_0x128).font_infos[0].info.cff.data;
            local_ae8.info.cff.cursor = *(int *)((longlong)&param_3->field29_0x128 + 0x50);
            local_ae8.info.cff.size = *(int *)((longlong)&param_3->field29_0x128 + 0x54);
            local_ae8.info.charstrings.data =
                 (param_3->field29_0x128).font_infos[0].info.charstrings.data;
            local_ae8.info.charstrings.cursor = *(int *)((longlong)&param_3->field29_0x128 + 0x60);
            local_ae8.info.charstrings.size = *(int *)((longlong)&param_3->field29_0x128 + 100);
            local_ae8.info.gsubrs.data = (param_3->field29_0x128).font_infos[0].info.gsubrs.data;
            local_ae8.info.gsubrs.cursor = *(int *)((longlong)&param_3->field29_0x128 + 0x70);
            local_ae8.info.gsubrs.size = *(int *)((longlong)&param_3->field29_0x128 + 0x74);
            local_ae8.info.subrs.data = (param_3->field29_0x128).font_infos[0].info.subrs.data;
            local_ae8.info.subrs.cursor = *(int *)((longlong)&param_3->field29_0x128 + 0x80);
            local_ae8.info.subrs.size = *(int *)((longlong)&param_3->field29_0x128 + 0x84);
            local_ae8.info.fontdicts.data =
                 (param_3->field29_0x128).font_infos[0].info.fontdicts.data;
            local_ae8.info.fontdicts.cursor = *(int *)((longlong)&param_3->field29_0x128 + 0x90);
            local_ae8.info.fontdicts.size = *(int *)((longlong)&param_3->field29_0x128 + 0x94);
            local_ae8.info.fdselect.data = (param_3->field29_0x128).font_infos[0].info.fdselect.data
            ;
            local_ae8.info.fdselect.cursor = *(int *)((longlong)&param_3->field29_0x128 + 0xa0);
            local_ae8.info.fdselect.size = *(int *)((longlong)&param_3->field29_0x128 + 0xa4);
            local_ae8._168_8_ = *(undefined8 *)((longlong)&param_3->field29_0x128 + 0xa8);
            local_ae8.char_data = (param_3->field29_0x128).font_infos[0].char_data;
            local_cf0._0_8_ = 0;
            local_cf0._8_4_ = 0.0;
            local_cf0._16_16_ = auVar90._0_16_;
            local_1078 = ZEXT832(0) << 0x20;
            pcVar36 = "%d";
            auVar90 = ZEXT1664(local_cf0._16_16_);
            auVar95 = ZEXT1664(auVar92._0_16_);
            auVar85 = ZEXT1664(auVar85._0_16_);
            auVar98 = ZEXT1664(auVar93._0_16_);
            snprintf(local_1078,0x20,"%d");
            local_cf0._12_4_ = 0.002;
            local_cf0._32_4_ = 1.0;
            local_ccc = ZEXT1232(ZEXT812(0));
            local_1008.xy.field0_0x0 = (real_2)(real_2)local_ff8;
            local_1008._8_8_ = uStack_ff0;
            auVar90 = ZEXT1664(auVar90._0_16_);
            auVar92 = ZEXT1664(auVar95._0_16_);
            auVar85 = ZEXT1664(auVar85._0_16_);
            auVar93 = ZEXT1664(auVar98._0_16_);
            draw_text(local_1078,auVar98._0_4_ + ((real_3_u_0_s_0 *)(pfVar65 + -1))->x,
                      auVar95._0_4_ + *pfVar65,(real_4 *)&local_1008._s_0,(real_2)0x0,&local_ae8,
                      (text_params *)local_cf0);
            uVar33 = w.field55_0x3a28.body_auxiliary_data;
            uVar43 = w.bodies.field3_0x20.elements;
            iVar22 = w.body_auxiliary_size;
          }
          uVar40 = (undefined4)((ulonglong)pcVar36 >> 0x20);
          uVar50 = uVar50 + 1;
          pfVar65 = pfVar65 + 10;
        } while ((local_11e8 & 0xffffffff) != uVar50);
      }
      stunalloc(piVar35);
      stunalloc(piVar34);
      fVar84 = (param_4->mouse).field0_0x0._s_0.x - fVar78;
      fVar94 = (param_4->mouse).field0_0x0._s_0.y - fVar77;
      fVar84 = fVar94 * fVar94 + auVar85._0_4_ + fVar84 * fVar84;
      auVar85 = ZEXT464(0x3a23d70b);
      fVar94 = 0.00062500004;
      if (0.00062500004 < fVar84) {
        bVar46 = 0;
        param_4->click_blocked = param_4->click_blocked;
      }
      else if (param_4->click_blocked == false) {
        bVar46 = param_4->pressed_buttons[0] >> 1;
        param_4->click_blocked = (bool)(bVar46 & 1);
      }
      else {
        bVar46 = 0;
        param_4->click_blocked = true;
      }
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
        fVar94 = auVar85._0_4_;
      }
      lVar47 = (longlong)n_gamepad_anchors;
      if (n_gamepad_anchors < max_gamepad_anchors) {
        n_gamepad_anchors = n_gamepad_anchors + 1;
        gamepad_anchors[lVar47].field0_0x0 =
             (real_2_u_0)(CONCAT44(uVar40,fVar78) | (ulonglong)(uint)fVar77 << 0x20);
      }
      if (fVar94 < fVar84) {
        fVar84 = 1.0;
        next_gui_element = next_gui_element + 1;
      }
      else {
        iVar22 = next_gui_element + 1;
        param_4->hovered_ui_element = next_gui_element;
        next_gui_element = iVar22;
        param_4->hover_blocked = true;
        fVar84 = 0.5;
      }
      if ((bVar46 & 1) != 0) {
        param_1->tool = -1;
        param_4->click_blocked = true;
      }
      local_1178._s_0.w = 1.0;
      rVar37.field0_0x0._s_0.y = fVar77 + fVar86;
      rVar37.field0_0x0._s_0.x = fVar78 + fVar86;
      fVar94 = 0.005;
      local_1178._s_0.x = fVar84;
      local_1178._s_0.y = fVar84;
      local_1178._s_0.z = fVar84;
      draw_line(param_3,rVar37,(real_2)0x3cf5c28f3cf5c28f,0.005,(real_4 *)&local_1178._s_0);
      local_1188._s_0.w = 1.0;
      rVar44.field0_0x0._s_0.y = fVar77 + 0.015;
      rVar44.field0_0x0._s_0.x = fVar78 + fVar86;
      local_1188._s_0.x = fVar84;
      local_1188._s_0.y = fVar84;
      local_1188._s_0.z = fVar84;
      draw_line(param_3,rVar44,(real_2)0xbcf5c28f3cf5c28f,fVar94,(real_4 *)&local_1188._s_0);
      iVar22 = param_1->tool;
      goto joined_r0x0001400a7be3;
    }
    param_1->tool = -1;
    n_pending_imbues = 0;
    n_imbues = 0;
    fVar77 = (param_1->tooltip).alpha;
  }
  if (fVar77 <= 0.0) {
    return;
  }
  bVar72 = false;
LAB_1400a7bf6:
  do_tooltip(param_3,&param_1->tooltip,param_5,bVar72,1,(translation_info)0x0,false,INFINITY,false);
                    /* WARNING: Read-only address (ram,0x0001401bce20) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401be4e0) is written */
  return;
}

