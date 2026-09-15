
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* void __cdecl do_sandbox_overlay(struct sandbox_menu * __ptr64,struct render_context *
   __ptr64,struct render_context * __ptr64,struct user_input * __ptr64,float,unsigned int) */

void __cdecl
do_sandbox_overlay(sandbox_menu *param_1,render_context *param_2,render_context *param_3,
                  user_input *param_4,float param_5,uint param_6)

{
  real_4x4 *prVar1;
  float *pfVar2;
  void *_Src;
  static_button *psVar3;
  undefined8 *puVar4;
  real_2_u_0_s_0 rVar5;
  undefined8 uVar6;
  char cVar7;
  char *pcVar8;
  plan_cell *ppVar9;
  float *pfVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  queued_sound *pqVar15;
  queued_sound *pqVar16;
  material_t *pmVar17;
  real_3 *prVar18;
  char **ppcVar19;
  real_2 *prVar20;
  creature_t *pcVar21;
  bool bVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  LPVOID pvVar28;
  tool_render_info *ptVar29;
  body *pbVar30;
  ring_render_info *prVar31;
  real_2_u_0 rVar32;
  cell_render_info *pcVar33;
  mutation_item *pmVar34;
  undefined8 uVar35;
  icon_render_info *piVar36;
  icon_render_info *piVar37;
  hexagon_render_info *phVar38;
  real_2_u_0 rVar39;
  uchar *puVar40;
  int_2_u_0 *piVar41;
  undefined4 uVar42;
  longlong lVar43;
  char *pcVar44;
  longlong lVar45;
  real_2 rVar46;
  uint *puVar47;
  int_2_u_0 iVar48;
  int_2_u_0 iVar49;
  uchar uVar50;
  char *pcVar51;
  real_2 rVar52;
  real_2 rVar53;
  real_2 rVar54;
  undefined8 uVar55;
  real_2 rVar56;
  real_2 rVar57;
  real_2 rVar58;
  real_2 rVar59;
  int_2_u_0 iVar60;
  int_2_u_0 iVar61;
  byte bVar62;
  uint uVar63;
  float *pfVar64;
  __uint64 _Var65;
  int iVar66;
  real_2 rVar67;
  real_2 rVar68;
  int_2_u_0_s_0 iVar69;
  undefined4 uVar70;
  longlong lVar71;
  int *piVar72;
  int iVar73;
  undefined4 uVar74;
  real_2 rVar75;
  uint uVar76;
  int iVar77;
  undefined4 uVar78;
  body *pbVar79;
  int_2_u_0_s_0 iVar80;
  int iVar81;
  ulonglong uVar82;
  body *pbVar83;
  int_2_u_0 iVar84;
  int_2_u_0 iVar85;
  int_2_u_0 iVar86;
  int_2_u_0 iVar87;
  ulonglong uVar88;
  real_2 rVar89;
  creature_t *pcVar90;
  int iVar91;
  creature_t *pcVar92;
  biome_type *pbVar93;
  uint uVar94;
  ulonglong uVar95;
  real_4 *prVar96;
  int_2_u_0 iVar97;
  bool bVar98;
  bool bVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [12];
  int iVar107;
  int iVar108;
  undefined1 auVar106 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar112;
  float fVar113;
  real_2_u_0 rVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  real_4_u_0 *prVar130;
  real_2_u_0 *_Dst;
  text_params *in_stack_ffffffffffffeac8;
  text_params *ptVar131;
  uint *puVar132;
  undefined8 uVar133;
  float local_1508;
  float local_1504;
  int_2_u_0 local_14f8;
  body *local_14f0;
  ulonglong local_14c8;
  undefined1 local_14b8 [80];
  ulonglong local_1468;
  undefined1 local_1458 [16];
  float local_1448;
  real_3_u_0 local_13ec;
  real_3_u_0 local_13e0;
  real_3_u_0 local_13d4;
  undefined4 local_13c8;
  undefined4 local_13c4;
  undefined4 local_13c0;
  undefined4 local_13bc;
  real_4_u_0 local_13b8;
  real_4_u_0 local_13a8;
  real_4_u_0 local_1398;
  real_4_u_0 local_1388;
  real_4_u_0 local_1378;
  real_4_u_0 local_1368;
  slider_params local_1358;
  slider_params local_1348;
  slider_params local_1338;
  slider_params local_1328;
  real_4_u_0 local_1318;
  real_3_u_0 local_1308;
  real_3_u_0 local_12f8;
  real_3_u_0 local_12e8;
  real_3_u_0 local_12d8;
  real_3_u_0 local_12c8;
  real_3_u_0 local_12b8;
  real_3_u_0 local_12a8;
  real_3_u_0 local_1298;
  real_3_u_0 local_1288;
  real_3_u_0 local_1278;
  real_4_u_0 local_1268;
  real_4_u_0 local_1258;
  real_4_u_0 local_1248;
  spawn_creature_params local_1238;
  ulonglong local_1228;
  undefined8 uStack_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  real_4_u_0 local_1208;
  real_4_u_0 local_11f8;
  real_2_u_0 local_11e8;
  undefined8 uStack_11e0;
  real_4_u_0 local_11d8;
  real_4_u_0 local_11c8;
  real_2_u_0 local_11b8;
  undefined8 uStack_11b0;
  real_4_u_0 local_11a8;
  real_4_u_0 local_1198;
  real_2_u_0 local_1188;
  undefined8 uStack_1180;
  real_4_u_0 local_1178;
  real_4_u_0 local_1168;
  real_4_u_0 local_1158;
  real_2_u_0 local_1148;
  undefined8 uStack_1140;
  real_4_u_0 local_1138;
  real_4_u_0 local_1128;
  real_4_u_0 local_1118;
  real_4_u_0 local_1108;
  spawn_creature_params local_10f8;
  real_4_u_0 local_10e8;
  real_4_u_0 local_10d8;
  undefined1 local_10c8 [32];
  real_4_u_0 local_10a8;
  real_4_u_0 local_1098;
  real_4_u_0 local_1088;
  real_4_u_0 local_1078;
  text_params local_1068;
  text_params local_1018;
  text_params local_fc8;
  text_params local_f78;
  text_params local_f28;
  undefined1 local_ed8 [16];
  undefined1 local_ec8 [16];
  undefined1 local_eb8 [16];
  undefined1 local_ea8 [16];
  float local_e98;
  undefined1 local_e88 [16];
  undefined1 local_e78 [16];
  undefined1 local_e68 [16];
  undefined1 local_e58 [16];
  float local_e48;
  text_params local_e40;
  cell_item local_df8;
  real_4x4_u_0 local_da8;
  real_4x4_u_0 local_d68;
  real_4x4_u_0 local_d28;
  real_4x4_u_0 local_ce8;
  real_4x4_u_0 local_ca8;
  real_4x4_u_0 local_c68;
  real_4x4_u_0 local_c28;
  real_4x4_u_0 local_be8;
  real_4x4_u_0 local_ba8;
  undefined1 local_b68 [8];
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  real_2_u_0 local_760 [23];
  real_2_u_0 local_6a8 [23];
  font_info local_5f0;
  real_2_u_0 local_538 [23];
  real_2_u_0 local_480 [23];
  real_2_u_0 local_3c8 [23];
  real_2_u_0 local_310 [23];
  real_2_u_0 local_258 [23];
  real_2_u_0 local_1a0 [43];
  undefined8 uStack_48;
  
  uStack_48 = 0x1400a5706;
                    /* INLINE_REGION_START: get_context */
  pvVar28 = TlsGetValue(tls_index);
                    /* INLINE_REGION_END */
  if (w.menu == 1) {
    param_1->tool = -1;
  }
  if ((w.menu == 2) && ((&DAT_1401caee0)[param_1->tool] == '\0')) {
    param_1->tool = -1;
  }
                    /* INLINE_REGION_START: use_render_context */
  (*glBindFramebuffer)(0x8d40,param_3->frame_buffer);
  glViewport(0,0,(param_3->resolution).field0_0x0._s_0.x,(param_3->resolution).field0_0x0._s_0.y);
  (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_3->field14_0xc8)._s_0.color_texture,0);
  local_b68._0_4_ = 0x8ce0;
  (*glDrawBuffers)(1,(uint *)local_b68);
  local_1508 = 0.0;
                    /* INLINE_REGION_END */
  if (w.im.body_id == 0) {
    local_1508 = (float)(param_3->resolution).field0_0x0._s_0.x /
                 (float)(param_3->resolution).field0_0x0._s_0.y;
  }
  ptVar29 = (tool_render_info *)stalloc_(0x2d0);
  uVar42 = (undefined4)((ulonglong)in_stack_ffffffffffffeac8 >> 0x20);
                    /* INLINE_REGION_START: get_living_body */
  if (w.selected_body < 1) {
    local_14f0 = (body *)0x0;
  }
  else {
    uVar24 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body;
    if ((w.bodies.field0_0x0.index_table[uVar24].id == w.selected_body) &&
       (w.bodies.field3_0x20.elements != (body *)0x0)) {
      local_14f0 = (body *)0x0;
      if (w.bodies.field3_0x20.elements[w.bodies.field0_0x0.index_table[uVar24].index].parent_id ==
          0) {
        local_14f0 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar24].index;
      }
    }
    else {
      local_14f0 = (body *)0x0;
    }
  }
                    /* INLINE_REGION_END */
  local_14b8._0_8_ = (longlong)pvVar28 + 0x6c;
  fVar112 = local_1508 + -0.25;
  iVar26 = param_1->tool;
  if ((iVar26 == 5) || (iVar26 == 3)) {
    fVar123 = 0.24;
    uVar82 = 0;
    do {
      fVar100 = (param_4->mouse).field0_0x0._s_0.x - fVar112;
      fVar129 = (param_4->mouse).field0_0x0._s_0.y - fVar123;
      fVar100 = fVar129 * fVar129 + fVar100 * fVar100 + 0.0;
      bVar22 = param_4->click_blocked;
      if (0.0016 < fVar100) {
LAB_1400a5a46:
        bVar23 = 0;
        param_4->click_blocked = bVar22;
      }
      else {
        if (bVar22 != false) {
          bVar22 = true;
          goto LAB_1400a5a46;
        }
        bVar23 = param_4->pressed_buttons[0] >> 1;
        param_4->click_blocked = (bool)(bVar23 & 1);
      }
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
      }
      prVar20 = gamepad_anchors;
      lVar43 = (longlong)n_gamepad_anchors;
      if (n_gamepad_anchors < max_gamepad_anchors) {
        n_gamepad_anchors = n_gamepad_anchors + 1;
        gamepad_anchors[lVar43].field0_0x0._s_0.x = fVar112;
        prVar20[lVar43].field0_0x0._s_0.y = fVar123;
      }
      fVar101 = 0.0;
      fVar129 = 0.0;
      iVar26 = next_gui_element + 1;
      if (fVar100 <= 0.0016) {
        param_4->hovered_ui_element = next_gui_element;
        next_gui_element = iVar26;
        param_4->hover_blocked = true;
        fVar101 = 0.5;
        fVar129 = 1.0;
        iVar26 = next_gui_element;
      }
      next_gui_element = iVar26;
      fVar115 = NAN;
      if (uVar82 != 4) {
        fVar115 = (float)uVar82;
      }
      fVar118 = param_1->selected_team;
      fVar116 = 1.0;
      if ((uVar82 != 4 || !NAN(fVar118)) && fVar115 != fVar118) {
        fVar116 = fVar101;
      }
      if (0.0 < fVar116) {
        local_1318._s_0.x = 1.0;
        if ((uVar82 != 4 || !NAN(fVar118)) && fVar115 != fVar118) {
          local_1318._s_0.x = fVar129;
        }
        local_13d4._s_0.z = 0.0;
        local_13d4._s_0.x = fVar112;
        local_13d4._s_0.y = fVar123;
        local_1318._s_0.y = local_1318._s_0.x;
        local_1318._s_0.z = local_1318._s_0.x;
        local_1318._s_0.w = fVar116;
        draw_ring(param_3,(real_3 *)&local_13d4._s_0,0.045,0.055,(real_4 *)&local_1318._s_0);
      }
      local_13e0._s_0.z = 0.0;
      local_13e0._s_0.x = fVar112;
      local_13e0._s_0.y = fVar123;
      draw_circle(param_3,(real_3 *)&local_13e0._s_0,param_1->team_buttons[uVar82].r,
                  (real_4 *)(&DAT_1401caef0 + uVar82 * 0x10));
      psVar3 = param_1->team_buttons + uVar82;
      if ((fVar100 <= 0.0016) && (psVar3->was_hovered == false)) {
        uVar24 = (*(uint *)local_14b8._0_8_ >> 0x10 ^ *(uint *)local_14b8._0_8_) * 0x7feb352d;
        uVar24 = (uVar24 >> 0xf ^ uVar24) * -0x7b935975;
        uVar24 = uVar24 >> 0x10 ^ uVar24;
        *(uint *)local_14b8._0_8_ = uVar24;
        pqVar16 = ac.queued_sounds;
        if ((ac.initialized == true) &&
           (((0 < sounds.menu_tick.n_samples && (sounds.menu_tick.data != (short *)0x0)) &&
            (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
          uVar25 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar25].sound = (sound_t *)0x1401fe480;
          pqVar16[(int)uVar25].params.volume = 0.5;
          pqVar16[(int)uVar25].params.delay = 0.0;
          pqVar16[(int)uVar25].params.pitch_shift = (float)uVar24 * 2.3283064e-10 * 6.0 + -3.0;
          pqVar15 = pqVar16 + (int)uVar25;
          (pqVar15->params).lowpass_dist = 0.0;
          (pqVar15->params).type = 0;
          *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
          *(undefined8 *)((longlong)pqVar16[(int)uVar25].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
      if ((bVar23 & 1) != 0) {
        param_1->selected_team = fVar115;
        psVar3->r_dot = psVar3->r_dot + -10.0;
      }
      fVar101 = expf(param_5 * -20.0);
      fVar101 = (1.0 - fVar101) * fVar129 + fVar101 * psVar3->tooltip_alpha;
      uVar24 = -(uint)(ABS(fVar101 - fVar129) < 0.001);
      psVar3->tooltip_alpha = (float)(uVar24 & (uint)fVar129 | ~uVar24 & (uint)fVar101);
      psVar3->was_hovered = fVar100 <= 0.0016;
      fVar100 = expf(param_5 * -10.0);
      fVar115 = psVar3->r + -0.04;
      fVar118 = psVar3->r_dot / 300.0;
      fVar129 = cosf(param_5 * 30.0);
      fVar101 = sinf(param_5 * 30.0);
      psVar3->r = (fVar115 * fVar129 + fVar118 * fVar101) * fVar100 + 0.04;
      psVar3->r_dot = (fVar118 * fVar129 - fVar115 * fVar101) * 300.0 * fVar100;
      fVar100 = psVar3->tooltip_alpha;
      if (0.0 < fVar100) {
        local_e78._0_12_ = ZEXT812(0);
        local_e78._12_4_ = 0;
        local_e48 = 0.0;
        local_e88._12_4_ = 0x3b03126f;
        local_e88._0_12_ = local_e78._0_12_;
        local_e68._12_4_ = 0;
        local_e68._4_8_ = local_e78._4_8_;
        local_e68._0_4_ = 0x3f800000;
        local_e58 = local_e78;
        memcpy(&local_5f0,(void *)((longlong)&param_3->field29_0x128 + 0xb8),0xb8);
        uVar24 = w.translations.max_entries;
        ppcVar19 = w.translations.keys;
        local_1248.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
        local_1248._s_0.z = 1.0;
        pcVar51 = (&PTR_s_team_red_1401caf40)[uVar82];
        cVar7 = *pcVar51;
        if (cVar7 == '\0') {
          uVar25 = 0x1505;
        }
        else {
          uVar25 = 0x1505;
          pcVar44 = pcVar51;
          do {
            pcVar44 = pcVar44 + 1;
            uVar25 = uVar25 + ((int)cVar7 ^ uVar25 * 0x21);
            cVar7 = *pcVar44;
          } while (cVar7 != '\0');
        }
        uVar88 = (ulonglong)w.translations.max_entries;
        uVar95 = (ulonglong)uVar25 % uVar88;
        local_1248._s_0.w = fVar100;
        do {
          lVar43 = (longlong)(int)uVar95;
          if ((ppcVar19[lVar43] == (char *)0x0) ||
             (iVar26 = strcmp(ppcVar19[lVar43],pcVar51), iVar26 == 0)) goto LAB_1400a5f8b;
          uVar94 = (int)uVar95 + 1;
          uVar95 = (ulonglong)uVar94;
          if (uVar94 == uVar24) {
            uVar95 = 0;
          }
          iVar26 = (int)((ulonglong)uVar25 % uVar88);
        } while ((int)uVar95 != iVar26);
        lVar43 = (longlong)iVar26;
LAB_1400a5f8b:
        pcVar51 = unknown_string;
        if ((w.translations.values[lVar43].text != (char **)0x0) &&
           (pcVar51 = w.translations.values[lVar43].text[w.language_index], pcVar51 == (char *)0x0))
        {
          pcVar51 = unknown_string;
        }
        in_stack_ffffffffffffeac8 = (text_params *)local_e88;
        draw_text(pcVar51,fVar112 + -0.07,fVar123,(real_4 *)&local_1248._s_0,(real_2)0x3f800000,
                  &local_5f0,in_stack_ffffffffffffeac8);
      }
      uVar42 = (undefined4)((ulonglong)in_stack_ffffffffffffeac8 >> 0x20);
      fVar123 = fVar123 + -0.12;
      uVar82 = uVar82 + 1;
    } while (uVar82 != 5);
    iVar26 = param_1->tool;
  }
  pfVar64 = &param_1->explosion_radius;
  local_1328.active = iVar26 == 7;
  local_1328.full_width = 0.7;
  local_1328.pos.field0_0x0._s_0.y = -0.35;
  local_1328.pos.field0_0x0._s_0.x = fVar112;
  update_slider(&param_1->explosion_slider,&local_1328,pfVar64,5.0,100.0,param_4,param_5,
                (uint *)local_14b8._0_8_);
  local_1338.active = iVar26 == 7;
  local_1338.full_width = 0.7;
  local_1338.pos.field0_0x0._s_0.y = -0.35;
  local_1338.pos.field0_0x0._s_0.x = fVar112;
  draw_slider(param_3,&param_1->explosion_slider,&local_1338);
  iVar26 = param_1->tool;
  pfVar2 = &param_1->terraform_radius;
  local_1348.active = iVar26 == 10;
  local_1348.full_width = 0.7;
  local_1348.pos.field0_0x0._s_0.y = -0.35;
  ptVar131 = (text_params *)CONCAT44(uVar42,param_5);
  _Dst = (real_2_u_0 *)param_4;
  puVar132 = (uint *)local_14b8._0_8_;
  local_1348.pos.field0_0x0._s_0.x = fVar112;
  update_slider(&param_1->terraform_slider,&local_1348,pfVar2,100.0,1000.0,param_4,param_5,
                (uint *)local_14b8._0_8_);
  local_1358.active = iVar26 == 10;
  local_1358.full_width = 0.7;
  local_1358.pos.field0_0x0._s_0.y = -0.35;
  local_1358.pos.field0_0x0._s_0.x = fVar112;
  draw_slider(param_3,&param_1->terraform_slider,&local_1358);
  if (param_1->tool == 10) {
    fVar101 = -0.35;
    fVar100 = 0.0;
    lVar43 = 0;
    fVar129 = 0.0;
    do {
      fVar123 = fVar129;
      local_1468 = (ulonglong)(uint)fVar100;
      uVar24 = (param_1->field11_0x18c).terraform_flags;
      uVar25 = (uint)lVar43;
      fVar101 = fVar101 + -0.12;
      fVar129 = fVar112;
      fVar115 = fVar101;
      if (lVar43 != 2) {
        fVar129 = fVar123;
        fVar115 = fVar100;
      }
      fVar100 = fVar115;
      fVar115 = (param_4->mouse).field0_0x0._s_0.x - fVar112;
      fVar118 = (param_4->mouse).field0_0x0._s_0.y - fVar101;
      fVar115 = fVar118 * fVar118 + fVar115 * fVar115 + 0.0;
      bVar22 = param_4->click_blocked;
      if (0.0016 < fVar115) {
LAB_1400a63a3:
        bVar23 = 0;
        param_4->click_blocked = bVar22;
      }
      else {
        if (bVar22 != false) {
          bVar22 = true;
          goto LAB_1400a63a3;
        }
        bVar23 = param_4->pressed_buttons[0] >> 1;
        param_4->click_blocked = (bool)(bVar23 & 1);
      }
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
      }
      prVar20 = gamepad_anchors;
      lVar45 = (longlong)n_gamepad_anchors;
      if (n_gamepad_anchors < max_gamepad_anchors) {
        n_gamepad_anchors = n_gamepad_anchors + 1;
        gamepad_anchors[lVar45].field0_0x0._s_0.x = fVar112;
        prVar20[lVar45].field0_0x0._s_0.y = fVar101;
      }
      fVar116 = 0.04;
      fVar102 = 1.0;
      fVar118 = 0.0;
      iVar26 = next_gui_element + 1;
      if (fVar115 <= 0.0016) {
        param_4->hovered_ui_element = next_gui_element;
        next_gui_element = iVar26;
        param_4->hover_blocked = true;
        fVar116 = 0.049999997;
        fVar118 = fVar102;
        iVar26 = next_gui_element;
        if (param_1->terraform_buttons[lVar43].was_hovered == false) {
          uVar94 = (*(uint *)local_14b8._0_8_ >> 0x10 ^ *(uint *)local_14b8._0_8_) * 0x7feb352d;
          uVar94 = (uVar94 >> 0xf ^ uVar94) * -0x7b935975;
          uVar94 = uVar94 >> 0x10 ^ uVar94;
          *(uint *)local_14b8._0_8_ = uVar94;
          pqVar16 = ac.queued_sounds;
          fVar116 = 0.049999997;
          iVar26 = next_gui_element;
          if ((((ac.initialized == true) && (fVar116 = 0.049999997, 0 < sounds.menu_tick.n_samples))
              && (fVar116 = 0.049999997, sounds.menu_tick.data != (short *)0x0)) &&
             (fVar116 = 0.049999997,
             ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
            uVar27 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
            ac.queued_sounds[(int)uVar27].sound = (sound_t *)0x1401fe480;
            pqVar16[(int)uVar27].params.volume = 0.5;
            pqVar16[(int)uVar27].params.delay = 0.0;
            pqVar16[(int)uVar27].params.pitch_shift = (float)uVar94 * 2.3283064e-10 * 6.0 + -3.0;
            pqVar15 = pqVar16 + (int)uVar27;
            (pqVar15->params).lowpass_dist = 0.0;
            (pqVar15->params).type = 0;
            *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
            *(undefined8 *)((longlong)pqVar16[(int)uVar27].filtered + 5) = 0;
            LOCK();
            ac.last_queued_sound = ac.last_queued_sound + 1;
            UNLOCK();
            fVar116 = 0.049999997;
            iVar26 = next_gui_element;
          }
        }
      }
      next_gui_element = iVar26;
      psVar3 = param_1->terraform_buttons + lVar43;
      param_1->terraform_buttons[lVar43].was_hovered = fVar115 <= 0.0016;
      if ((bVar23 & 1) != 0) {
        (param_1->field11_0x18c).terraform_flags =
             (param_1->field11_0x18c).terraform_flags ^ 1 << ((byte)lVar43 & 0x1f);
        psVar3->r_dot = psVar3->r_dot + -10.0;
      }
      fVar115 = expf(param_5 * -20.0);
      fVar115 = (1.0 - fVar115) * fVar118 + fVar115 * psVar3->tooltip_alpha;
      uVar94 = -(uint)(ABS(fVar115 - fVar118) < 0.001);
      psVar3->tooltip_alpha = (float)(uVar94 & (uint)fVar118 | ~uVar94 & (uint)fVar115);
      fVar115 = expf(param_5 * -10.0);
      fVar124 = psVar3->r - fVar116;
      fVar121 = psVar3->r_dot / 300.0;
      fVar118 = cosf(param_5 * 30.0);
      fVar102 = sinf(param_5 * 30.0);
      psVar3->r = (fVar124 * fVar118 + fVar121 * fVar102) * fVar115 + fVar116;
      psVar3->r_dot = (fVar121 * fVar118 - fVar124 * fVar102) * 300.0 * fVar115;
      fVar115 = psVar3->tooltip_alpha;
      if (0.0 < fVar115) {
        local_ec8 = ZEXT416(0);
        local_e98 = 0.0;
        local_ed8._0_12_ = local_ec8._0_12_;
        local_ed8._12_4_ = 0x3b03126f;
        local_eb8 = ZEXT416(0x3f800000);
        local_ea8 = local_ec8;
        memcpy(local_760 + 0x17,(void *)((longlong)&param_3->field29_0x128 + 0xb8),0xb8);
        uVar94 = w.translations.max_entries;
        ppcVar19 = w.translations.keys;
        local_1258.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
        local_1258._s_0.z = 1.0;
        pcVar51 = (&PTR_s_terraform_coarse_1401caf70)[lVar43];
        cVar7 = *pcVar51;
        if (cVar7 == '\0') {
          uVar27 = 0x1505;
        }
        else {
          uVar27 = 0x1505;
          pcVar44 = pcVar51;
          do {
            pcVar44 = pcVar44 + 1;
            uVar27 = uVar27 + ((int)cVar7 ^ uVar27 * 0x21);
            cVar7 = *pcVar44;
          } while (cVar7 != '\0');
        }
        uVar82 = (ulonglong)w.translations.max_entries;
        uVar95 = (ulonglong)uVar27 % uVar82;
        local_1258._s_0.w = fVar115;
        do {
          lVar45 = (longlong)(int)uVar95;
          if ((ppcVar19[lVar45] == (char *)0x0) ||
             (iVar26 = strcmp(ppcVar19[lVar45],pcVar51), iVar26 == 0)) goto LAB_1400a6814;
          uVar63 = (int)uVar95 + 1;
          if (uVar63 == uVar94) {
            uVar63 = 0;
          }
          uVar95 = (ulonglong)uVar63;
          uVar76 = (uint)((ulonglong)uVar27 % uVar82);
        } while (uVar63 != uVar76);
        lVar45 = (longlong)(int)uVar76;
LAB_1400a6814:
        pcVar51 = unknown_string;
        if ((w.translations.values[lVar45].text != (char **)0x0) &&
           (pcVar51 = w.translations.values[lVar45].text[w.language_index], pcVar51 == (char *)0x0))
        {
          pcVar51 = unknown_string;
        }
        ptVar131 = (text_params *)local_ed8;
        _Dst = local_760 + 0x17;
        draw_text(pcVar51,fVar112 + -0.07,fVar101,(real_4 *)&local_1258._s_0,(real_2)0x3f800000,
                  (font_info *)&_Dst->_s_0,ptVar131);
      }
      fVar115 = *(float *)(&__real_3dcccccd3f800000 +
                          (ulonglong)((uVar24 >> (uVar25 & 0x1f) & 1) == 0) * 4);
      uVar24 = (param_1->field11_0x18c).terraform_flags;
      fVar118 = expf(param_5 * -20.0);
      fVar116 = fVar118 * psVar3->state +
                (1.0 - fVar118) * (float)((uVar24 >> (uVar25 & 0x1f) & 1) != 0);
      psVar3->state = fVar116;
      fVar118 = psVar3->r;
      lVar45 = lVar43 + 1;
      ptVar29[lVar43].x.field0_0x0._s_0.x = fVar112;
      ptVar29[lVar43].x.field0_0x0._s_0.y = fVar101;
      ptVar29[lVar43].x.field0_0x0._s_0.z = 0.0;
      ptVar29[lVar43].r = fVar118;
      prVar96 = &ptVar29[lVar43].color;
      (prVar96->field0_0x0)._s_0.x = fVar115;
      (prVar96->field0_0x0)._s_0.y = fVar115;
      (prVar96->field0_0x0)._s_0.z = fVar115;
      (prVar96->field0_0x0)._s_0.w = 1.0;
      ptVar29[lVar43].id = uVar25 | 0x18;
      ptVar29[lVar43].state = fVar116;
      lVar43 = lVar45;
    } while (lVar45 != 4);
    local_ba8._0_8_ = *(undefined8 *)&(param_3->camera).field0_0x0;
    local_ba8._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
    local_ba8._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
    local_ba8._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
    local_ba8._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
    local_ba8._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
    local_ba8.columns[3].field0_0x0 =
         (real_4)*(undefined1 (*) [16])&(param_3->camera).field0_0x0.columns[3].field0_0x0;
    draw_tool_icons(ptVar29,4,(real_4x4 *)local_ba8.columns);
    fVar123 = fVar123 + -0.049999997;
    local_1468 = local_1468 << 0x20;
  }
  else {
    fVar123 = -0.049999997;
    local_1468 = 0;
  }
  fVar112 = param_5 * -20.0;
  local_1504 = param_5 * 30.0;
  fVar100 = local_1508 + -0.1;
  _Src = (void *)((longlong)&param_3->field29_0x128 + 0xb8);
  fVar129 = 0.9;
  lVar43 = 0;
  do {
    iVar26 = param_1->tool;
    iVar73 = (int)lVar43;
    fVar101 = param_1->tool_buttons[lVar43].r;
    fVar115 = (param_4->mouse).field0_0x0._s_0.x - fVar100;
    fVar118 = (param_4->mouse).field0_0x0._s_0.y - fVar129;
    fVar115 = fVar118 * fVar118 + fVar115 * fVar115 + 0.0;
    fVar101 = fVar101 * fVar101;
    bVar22 = param_4->click_blocked;
    if (fVar101 < fVar115) {
LAB_1400a6a5e:
      uVar24 = 0;
      param_4->click_blocked = bVar22;
    }
    else {
      if (bVar22 != false) {
        bVar22 = true;
        goto LAB_1400a6a5e;
      }
      uVar24 = param_4->pressed_buttons[0] >> 1 & 1;
      param_4->click_blocked = SUB41(uVar24,0);
    }
    if (gamepad_anchors == (real_2 *)0x0) {
      max_gamepad_anchors = 0x400;
      gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
    }
    prVar20 = gamepad_anchors;
    lVar45 = (longlong)n_gamepad_anchors;
    if (n_gamepad_anchors < max_gamepad_anchors) {
      n_gamepad_anchors = n_gamepad_anchors + 1;
      gamepad_anchors[lVar45].field0_0x0._s_0.x = fVar100;
      prVar20[lVar45].field0_0x0._s_0.y = fVar129;
    }
    iVar77 = next_gui_element + 1;
    if (fVar115 <= fVar101) {
      param_4->hovered_ui_element = next_gui_element;
      next_gui_element = iVar77;
      uVar24 = uVar24 | 0x100;
      iVar77 = next_gui_element;
    }
    next_gui_element = iVar77;
    fVar101 = *(float *)(&__real_3f8000003e800000 + (ulonglong)(iVar26 == iVar73) * 4);
    psVar3 = param_1->tool_buttons + lVar43;
    fVar115 = 1.0;
    if ((lVar43 == 10) &&
       ((w.map.map_type == 3 || ((w.final_boss.field0_0x0.active_flags & 1) != 0)))) {
LAB_1400a6b35:
      fVar101 = fVar101 * 0.3;
      if (uVar24 < 0x100) {
        uVar24 = 0;
        goto LAB_1400a6ce0;
      }
      param_4->hover_blocked = true;
      uVar24 = 0;
      fVar118 = 0.06;
      cVar7 = psVar3->was_hovered;
joined_r0x0001400a6bbd:
      if (cVar7 == '\0') {
        uVar25 = (*(uint *)local_14b8._0_8_ >> 0x10 ^ *(uint *)local_14b8._0_8_) * 0x7feb352d;
        uVar25 = (uVar25 >> 0xf ^ uVar25) * -0x7b935975;
        uVar25 = uVar25 >> 0x10 ^ uVar25;
        *(uint *)local_14b8._0_8_ = uVar25;
        pqVar16 = ac.queued_sounds;
        if ((((ac.initialized == true) && (0 < sounds.menu_tick.n_samples)) &&
            (sounds.menu_tick.data != (short *)0x0)) &&
           (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
          uVar94 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar94].sound = (sound_t *)0x1401fe480;
          pqVar16[(int)uVar94].params.volume = 0.5;
          pqVar16[(int)uVar94].params.delay = 0.0;
          pqVar16[(int)uVar94].params.pitch_shift = (float)uVar25 * 2.3283064e-10 * 6.0 + -3.0;
          pqVar15 = pqVar16 + (int)uVar94;
          (pqVar15->params).lowpass_dist = 0.0;
          (pqVar15->params).type = 0;
          *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
          *(undefined8 *)((longlong)pqVar16[(int)uVar94].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
      bVar22 = true;
    }
    else {
      if (w.menu != 2) {
        if (lVar43 != 8 || local_14f0 != (body *)0x0) goto LAB_1400a6b84;
        goto LAB_1400a6b35;
      }
      if (((&DAT_1401caee0)[lVar43] & (lVar43 != 8 || local_14f0 != (body *)0x0)) == 0)
      goto LAB_1400a6b35;
LAB_1400a6b84:
      if (0xff < uVar24) {
        param_4->hover_blocked = true;
        fVar118 = fVar101 * 1.5;
        fVar101 = fVar115;
        if (fVar118 <= 1.0) {
          fVar101 = fVar118;
        }
        fVar118 = 0.072000004;
        cVar7 = psVar3->was_hovered;
        goto joined_r0x0001400a6bbd;
      }
LAB_1400a6ce0:
      bVar22 = false;
      fVar115 = 0.0;
      fVar118 = 0.06;
    }
    fVar116 = expf(fVar112);
    fVar116 = (1.0 - fVar116) * fVar115 + fVar116 * psVar3->tooltip_alpha;
    uVar25 = -(uint)(ABS(fVar116 - fVar115) < 0.001);
    psVar3->tooltip_alpha = (float)(uVar25 & (uint)fVar115 | ~uVar25 & (uint)fVar116);
    psVar3->was_hovered = bVar22;
    if ((uVar24 & 1) != 0) {
      if (iVar73 == 5) {
        if (param_1->tool == 5) {
LAB_1400a6e22:
          param_1->tool = -1;
        }
        else {
          param_1->tool = 5;
          param_1->selected_creature = -1;
        }
      }
      else if (iVar73 == 2) {
        if (w.selected_body == 0) {
          if (param_1->tool == 2) goto LAB_1400a6e22;
          param_1->tool = 2;
        }
        else if ((w.selected_body < 1) ||
                (uVar24 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
                w.bodies.field0_0x0.index_table[uVar24].id != w.selected_body)) {
          w.selected_body = 0;
        }
        else {
          iVar26 = w.bodies.field0_0x0.index_table[uVar24].index;
          w.selected_body = 0;
          if (w.bodies.field3_0x20.elements != (body *)0x0) {
            if ((longlong)w.bodies.field3_0x20.elements[iVar26].creature_index == 0) {
              w.bodies.field3_0x20.elements[iVar26].brain.fun = (void *)0x0;
            }
            else {
              w.bodies.field3_0x20.elements[iVar26].brain.fun =
                   creature_list[w.bodies.field3_0x20.elements[iVar26].creature_index].ai_func;
            }
          }
        }
      }
      else if (iVar73 == 0) {
        w._4_1_ = w._4_1_ ^ 0x40;
      }
      else {
        if (param_1->tool == iVar73) goto LAB_1400a6e22;
        param_1->tool = iVar73;
      }
      psVar3->r_dot = psVar3->r_dot + -10.0;
    }
    if (iVar73 == 2) {
      bVar22 = w.selected_body != 0;
    }
    else if (iVar73 == 0) {
      bVar22 = w.frozen;
    }
    else {
      bVar22 = param_1->tool == iVar73;
    }
    fVar116 = (float)bVar22;
    fVar115 = expf(fVar112);
    fVar115 = (1.0 - fVar115) * fVar116 + fVar115 * psVar3->state;
    uVar24 = -(uint)(ABS(fVar115 - fVar116) < 0.001);
    psVar3->state = (float)(uVar24 & (uint)fVar116 | ~uVar24 & (uint)fVar115);
    fVar115 = expf(param_5 * -10.0);
    fVar124 = psVar3->r - fVar118;
    fVar121 = psVar3->r_dot / 300.0;
    fVar116 = cosf(local_1504);
    fVar102 = sinf(local_1504);
    fVar118 = (fVar124 * fVar116 + fVar121 * fVar102) * fVar115 + fVar118;
    psVar3->r = fVar118;
    psVar3->r_dot = (fVar121 * fVar116 - fVar124 * fVar102) * 300.0 * fVar115;
    fVar115 = psVar3->state;
    ptVar29[lVar43].x.field0_0x0._s_0.x = fVar100;
    ptVar29[lVar43].x.field0_0x0._s_0.y = fVar129;
    ptVar29[lVar43].x.field0_0x0._s_0.z = 0.0;
    ptVar29[lVar43].r = fVar118;
    ptVar29[lVar43].color.field0_0x0._s_0.x = fVar101;
    ptVar29[lVar43].color.field0_0x0._s_0.y = fVar101;
    ptVar29[lVar43].color.field0_0x0._s_0.z = fVar101;
    ptVar29[lVar43].color.field0_0x0._s_0.w = 1.0;
    ptVar29[lVar43].id = iVar73 + 0xd;
    ptVar29[lVar43].state = fVar115;
    fVar101 = psVar3->tooltip_alpha;
    if (0.0 < fVar101) {
      local_f28._0_8_ = 0;
      local_f28.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_f28._48_8_ = 0;
      local_f28._56_8_ = 0;
      local_f28._16_8_ = 0;
      local_f28.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_f28.wrap_indent = 0.0;
      local_f28._8_8_ = 0x3b03126f00000000;
      local_f28._32_8_ = 0x3f800000;
      memcpy(local_760,_Src,0xb8);
      uVar24 = w.translations.max_entries;
      ppcVar19 = w.translations.keys;
      local_1268.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_1268._s_0.z = 1.0;
      pcVar51 = (&stool_names)[lVar43];
      cVar7 = *pcVar51;
      if (cVar7 == '\0') {
        uVar25 = 0x1505;
      }
      else {
        uVar25 = 0x1505;
        pcVar44 = pcVar51;
        do {
          pcVar44 = pcVar44 + 1;
          uVar25 = uVar25 + ((int)cVar7 ^ uVar25 * 0x21);
          cVar7 = *pcVar44;
        } while (cVar7 != '\0');
      }
      uVar95 = (ulonglong)w.translations.max_entries;
      uVar82 = (ulonglong)uVar25 % uVar95;
      local_1268._s_0.w = fVar101;
      do {
        lVar45 = (longlong)(int)uVar82;
        if ((ppcVar19[lVar45] == (char *)0x0) ||
           (iVar26 = strcmp(ppcVar19[lVar45],pcVar51), iVar26 == 0)) goto LAB_1400a70e4;
        uVar94 = (int)uVar82 + 1;
        uVar82 = (ulonglong)uVar94;
        if (uVar94 == uVar24) {
          uVar82 = 0;
        }
        iVar26 = (int)((ulonglong)uVar25 % uVar95);
      } while ((int)uVar82 != iVar26);
      lVar45 = (longlong)iVar26;
LAB_1400a70e4:
      pcVar51 = unknown_string;
      if ((w.translations.values[lVar45].text != (char **)0x0) &&
         (pcVar51 = w.translations.values[lVar45].text[w.language_index], pcVar51 == (char *)0x0)) {
        pcVar51 = unknown_string;
      }
      ptVar131 = &local_f28;
      _Dst = local_760;
      draw_text(pcVar51,fVar100 + -0.089999996,fVar129,(real_4 *)&local_1268._s_0,(real_2)0x3f800000
                ,(font_info *)&_Dst->_s_0,ptVar131);
    }
    lVar43 = lVar43 + 1;
    fVar129 = fVar129 + -0.17999999;
  } while (lVar43 != 0xb);
  local_be8._0_8_ = *(undefined8 *)&(param_3->camera).field0_0x0;
  local_be8._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
  local_be8._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
  local_be8._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
  local_be8._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
  local_be8._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
  local_be8._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
  local_be8._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
  draw_tool_icons(ptVar29,0xb,(real_4x4 *)local_be8.columns);
  stunalloc(ptVar29);
  fVar115 = tanf(param_2->fov * 0.5);
  fVar115 = 1.0 / fVar115;
  fVar100 = (param_2->camera_pos).field0_0x0._s_0.z;
  fVar102 = fVar115 / fVar100;
  rVar5 = (param_4->mouse).field0_0x0._s_0;
  fVar101 = rVar5.x;
  fVar118 = rVar5.y;
  fVar129 = fVar100 / (((param_2->camera_axes).field0_0x0.data[5] * fVar118 +
                       (param_2->camera_axes).field0_0x0.data[2] * fVar101) -
                      (param_2->camera_axes).field0_0x0.data[8] * fVar115);
  uVar35 = *(undefined8 *)&(param_2->camera_pos).field0_0x0;
  uVar55 = *(undefined8 *)((longlong)&(param_2->camera_axes).field0_0x0 + 0x18);
  uVar133 = *(undefined8 *)((longlong)&(param_2->camera_axes).field0_0x0 + 0xc);
  uVar6 = *(undefined8 *)&(param_2->camera_axes).field0_0x0;
  fVar116 = (float)uVar35 -
            fVar129 * ((fVar101 * (float)uVar6 + fVar118 * (float)uVar133) - fVar115 * (float)uVar55
                      );
  fVar118 = (float)((ulonglong)uVar35 >> 0x20) -
            fVar129 * ((fVar101 * (float)((ulonglong)uVar6 >> 0x20) +
                       fVar118 * (float)((ulonglong)uVar133 >> 0x20)) -
                      fVar115 * (float)((ulonglong)uVar55 >> 0x20));
  rVar46.field0_0x0 = (real_2_u_0)((ulonglong)(uint)fVar116 | CONCAT44(fVar118,fVar118) << 0x20);
  fVar129 = (param_4->dmouse).field0_0x0._s_0.x;
  fVar101 = (param_4->dmouse).field0_0x0._s_0.y;
  iVar26 = param_1->tool;
  if (iVar26 == 2) {
    param_4->cursor_type = 5;
    local_f78._0_8_ = 0;
    local_f78.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_f78._48_8_ = 0;
    local_f78._56_8_ = 0;
    local_f78._16_8_ = 0;
    local_f78.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_f78.wrap_indent = 0.0;
    local_f78._8_8_ = 0x3b03126f00000000;
    local_f78._32_8_ = 0x3f800000;
    _Dst = local_258 + 0x17;
    memcpy(_Dst,_Src,0xb8);
    uVar24 = w.translations.max_entries;
    ppcVar19 = w.translations.keys;
    local_1078._s_0.x = 1.0;
    local_1078._s_0.y = 1.0;
    local_1078._s_0.z = 1.0;
    local_1078._s_0.w = 1.0;
    uVar95 = (ulonglong)w.translations.max_entries;
    uVar82 = 0xea2fab13U % uVar95;
    do {
      lVar43 = (longlong)(int)uVar82;
      if ((ppcVar19[lVar43] == (char *)0x0) ||
         (iVar26 = strcmp(ppcVar19[lVar43],"prompt_possess"), iVar26 == 0)) goto LAB_1400a738b;
      uVar25 = (int)uVar82 + 1;
      uVar82 = (ulonglong)uVar25;
      if (uVar25 == uVar24) {
        uVar82 = 0;
      }
      iVar26 = (int)(0xea2fab13U % uVar95);
    } while ((int)uVar82 != iVar26);
    lVar43 = (longlong)iVar26;
LAB_1400a738b:
    if (w.translations.values[lVar43].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar44 = w.translations.values[lVar43].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar44 != (char *)0x0) {
        pcVar51 = pcVar44;
      }
    }
    ptVar131 = &local_f78;
    draw_text(pcVar51,0.0,-0.8,(real_4 *)&local_1078._s_0,(real_2)0x0,(font_info *)&_Dst->_s_0,
              ptVar131);
    pbVar30 = get_best_hovered_body(rVar46,fVar102);
    if (pbVar30 != (body *)0x0) {
      local_1278._4_4_ =
           ((pbVar30->cost_centroid).field0_0x0._s_0.y - (param_2->camera_pos).field0_0x0._s_0.y) *
           fVar102;
      local_1278._0_4_ =
           ((pbVar30->cost_centroid).field0_0x0._s_0.x - (param_2->camera_pos).field0_0x0._s_0.x) *
           fVar102;
      local_1088._s_0.x = 1.0;
      local_1088._s_0.y = 1.0;
      local_1088._s_0.z = 1.0;
      local_1088._s_0.w = 1.0;
      local_1278._s_0.z = 0.0;
      draw_ring(param_3,(real_3 *)&local_1278._s_0,0.05,0.06,(real_4 *)&local_1088._s_0);
      if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
        w.selected_body = pbVar30->id;
        if (settings.copy_plan_on_possess != 0) {
          copy_body_plan(&w.em.plan,&pbVar30->plan);
          update_edit_menu_plan(&w.em,(int *)0x0);
          push_undo_state(&w.em);
        }
        param_1->tool = -1;
        param_4->click_blocked = true;
      }
    }
    iVar26 = param_1->tool;
  }
  if (iVar26 == 1) {
    param_4->cursor_type = 4;
    uVar24 = param_1->dragged_body;
    if ((((int)uVar24 < 1) ||
        (w.bodies.field0_0x0.index_table[w.bodies.n_max_elements + 0x7fffffffU & uVar24].id !=
         uVar24)) || (w.bodies.field3_0x20.elements == (body *)0x0)) {
      param_1->dragged_body = 0;
      pbVar30 = get_best_hovered_body(rVar46,fVar102);
      if (pbVar30 != (body *)0x0) {
        local_1288._4_4_ =
             ((pbVar30->cost_centroid).field0_0x0._s_0.y - (param_2->camera_pos).field0_0x0._s_0.y)
             * fVar102;
        local_1288._0_4_ =
             ((pbVar30->cost_centroid).field0_0x0._s_0.x - (param_2->camera_pos).field0_0x0._s_0.x)
             * fVar102;
        local_1098.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
        local_1098._8_8_ = 0x3f8000003f800000;
        local_1288._s_0.z = 0.0;
        draw_ring(param_3,(real_3 *)&local_1288._s_0,0.05,0.06,(real_4 *)&local_1098._s_0);
        if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
          param_1->dragged_body = pbVar30->id;
        }
      }
    }
  }
  prVar1 = &param_3->camera;
  iVar26 = param_1->tool;
  if (iVar26 == 3) {
    param_4->cursor_type = 5;
    local_fc8._0_8_ = 0;
    local_fc8.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_fc8._48_8_ = 0;
    local_fc8._56_8_ = 0;
    local_fc8._16_8_ = 0;
    local_fc8.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_fc8.wrap_indent = 0.0;
    local_fc8._8_8_ = 0x3b03126f00000000;
    local_fc8._32_8_ = 0x3f800000;
    _Dst = local_258;
    memcpy(_Dst,_Src,0xb8);
    uVar24 = w.translations.max_entries;
    ppcVar19 = w.translations.keys;
    local_10a8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_10a8._8_8_ = 0x3f8000003f800000;
    uVar82 = 0x439856d % (ulonglong)w.translations.max_entries;
    uVar95 = uVar82;
    do {
      uVar88 = (ulonglong)(int)uVar95;
      if ((ppcVar19[uVar88] == (char *)0x0) ||
         (iVar26 = strcmp(ppcVar19[uVar88],"prompt_team"), iVar26 == 0)) break;
      uVar25 = (int)uVar95 + 1;
      uVar95 = (ulonglong)uVar25;
      if (uVar25 == uVar24) {
        uVar95 = 0;
      }
      uVar88 = uVar82;
    } while ((int)uVar95 != (int)uVar82);
    if (w.translations.values[uVar88].text == (char **)0x0) {
      pcVar51 = unknown_string;
    }
    else {
      pcVar44 = w.translations.values[uVar88].text[w.language_index];
      pcVar51 = unknown_string;
      if (pcVar44 != (char *)0x0) {
        pcVar51 = pcVar44;
      }
    }
    ptVar131 = &local_fc8;
    draw_text(pcVar51,0.0,-0.8,(real_4 *)&local_10a8._s_0,(real_2)0x0,(font_info *)&_Dst->_s_0,
              ptVar131);
    uVar82 = 0;
    if ((((w.hovered < 1) ||
         (uVar24 = w.max_cells + 0x7fffffffU & w.hovered,
         w.field66_0x3b10.cell_index_table[uVar24].id != w.hovered)) ||
        (w.field67_0x3b28.cells == (cell *)0x0)) ||
       ((uVar24 = w.field67_0x3b28.cells[w.field66_0x3b10.cell_index_table[uVar24].index >> 4].
                  field1_0x40.body_id_packed[w.field66_0x3b10.cell_index_table[uVar24].index & 0xf],
        (int)uVar24 < 1 ||
        (uVar25 = w.bodies.n_max_elements + 0x7fffffffU & uVar24,
        w.bodies.field0_0x0.index_table[uVar25].id != uVar24)))) {
      pbVar30 = (body *)0x0;
    }
    else {
      pbVar30 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar25].index;
    }
    prVar31 = (ring_render_info *)stalloc_((longlong)w.bodies.n_elements * 0x24 + 0x24);
    pbVar79 = pbVar30;
    if (0 < w.bodies.n_elements) {
      fVar121 = 30.0;
      if (30.0 <= 0.1 / fVar102) {
        fVar121 = 0.1 / fVar102;
      }
      fVar121 = fVar121 * fVar121;
      fVar124 = 0.05;
      if (fVar102 * 25.0 <= 0.05) {
        fVar124 = fVar102 * 25.0;
      }
      prVar96 = &prVar31->color;
      lVar43 = 0;
      uVar82 = 0;
      do {
        uVar35 = w.bodies.field3_0x20.elements;
        fVar119 = *(float *)((longlong)&(w.bodies.field3_0x20.elements)->team + lVar43);
        rVar89.field0_0x0._s_0.y =
             (*(float *)(((w.bodies.field3_0x20.elements)->brain).abilities + lVar43 + -0x68) -
             (param_2->camera_pos).field0_0x0._s_0.y) * fVar102;
        rVar89.field0_0x0._s_0.x =
             (*(float *)(((w.bodies.field3_0x20.elements)->brain).abilities + lVar43 + -0x6c) -
             (param_2->camera_pos).field0_0x0._s_0.x) * fVar102;
        iVar26 = (int)fVar119;
        if (iVar26 < 1) {
          iVar26 = 0;
        }
        if (3 < iVar26) {
          iVar26 = 4;
        }
        if (NAN(fVar119)) {
          iVar26 = 4;
        }
        *(real_2_u_0 *)((longlong)(prVar96 + -2) + 0xc) = rVar89.field0_0x0;
        *(undefined4 *)((longlong)(prVar96 + -1) + 4) = 0;
        *(float *)((longlong)(prVar96 + -1) + 8) = fVar124 * 0.8;
        *(float *)((longlong)(prVar96 + -1) + 0xc) = fVar124;
        uVar55 = *(undefined8 *)(&UNK_1401caef8 + (uint)(iVar26 << 4));
        (prVar96->field0_0x0).xy.field0_0x0 = *(real_2_u_0 *)(&DAT_1401caef0 + (uint)(iVar26 << 4));
        *(undefined8 *)((longlong)&(prVar96->field0_0x0)._s_2.yz.field0_0x0 + 4) = uVar55;
        if (gamepad_anchors == (real_2 *)0x0) {
          max_gamepad_anchors = 0x400;
          gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
          if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a7a37;
        }
        else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a7a37:
          lVar45 = (longlong)n_gamepad_anchors;
          n_gamepad_anchors = n_gamepad_anchors + 1;
          gamepad_anchors[lVar45].field0_0x0 = rVar89.field0_0x0;
        }
        if (pbVar30 == (body *)0x0) {
          pbVar83 = (body *)((longlong)&((body *)uVar35)->id + lVar43);
          fVar119 = fVar116 - (pbVar83->cost_centroid).field0_0x0._s_0.x;
          fVar113 = fVar118 - (pbVar83->cost_centroid).field0_0x0._s_0.y;
          fVar119 = fVar113 * fVar113 + fVar119 * fVar119 + 0.0;
          if (fVar119 < fVar121) {
            pbVar79 = pbVar83;
            fVar121 = fVar119;
          }
        }
        uVar82 = uVar82 + 1;
        lVar43 = lVar43 + 0x2e0;
        prVar96 = (real_4 *)((longlong)(prVar96 + 2) + 4);
      } while ((longlong)uVar82 < (longlong)w.bodies.n_elements);
    }
    iVar26 = (int)uVar82;
    if (pbVar79 != (body *)0x0) {
      rVar32._s_0.y =
           ((pbVar79->cost_centroid).field0_0x0._s_0.y - (param_2->camera_pos).field0_0x0._s_0.y) *
           fVar102;
      rVar32._s_0.x =
           ((pbVar79->cost_centroid).field0_0x0._s_0.x - (param_2->camera_pos).field0_0x0._s_0.x) *
           fVar102;
      uVar82 = uVar82 & 0xffffffff;
      iVar26 = iVar26 + 1;
      prVar31[uVar82].x.field0_0x0.xy.field0_0x0 = rVar32;
      puVar4 = (undefined8 *)((longlong)&prVar31[uVar82].x.field0_0x0._s_2.yz.field0_0x0 + 4);
      *puVar4 = 0x3d4ccccd00000000;
      puVar4[1] = 0x3f8000003d75c28f;
      *(undefined8 *)((longlong)&prVar31[uVar82].color.field0_0x0.xy.field0_0x0 + 4) =
           0x3f8000003f800000;
      prVar31[uVar82].color.field0_0x0._s_0.w = 1.0;
      if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
        pbVar79->team = param_1->selected_team;
        param_4->click_blocked = true;
      }
    }
    local_c28._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
    local_c28._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
    local_c28.data[4] = (param_3->camera).field0_0x0.data[4];
    local_c28.data[5] = (param_3->camera).field0_0x0.data[5];
    local_c28.data[6] = (param_3->camera).field0_0x0.data[6];
    local_c28.data[7] = (param_3->camera).field0_0x0.data[7];
    local_c28.columns[2].field0_0x0 =
         (real_4)*(undefined1 (*) [16])&(param_3->camera).field0_0x0.columns[2].field0_0x0;
    local_c28.columns[3].field0_0x0 =
         (real_4)*(undefined1 (*) [16])&(param_3->camera).field0_0x0.columns[3].field0_0x0;
    draw_rings(prVar31,iVar26,(real_4x4 *)local_c28.columns);
    stunalloc(prVar31);
    iVar26 = param_1->tool;
  }
  if (iVar26 == 5) {
    if (param_1->selected_creature < 0) {
      w.scroll_blocked = 1;
      if ((longlong)n_creatures < 2) {
        iVar26 = 0;
        _Var65 = 0;
      }
      else {
        if (n_creatures == 2) {
          iVar73 = 0;
          lVar43 = 1;
          iVar26 = 0;
LAB_1400a7e6f:
          if (creature_list[lVar43].hidden == 0) {
            iVar26 = iVar26 + 1;
            iVar73 = iVar73 + creature_list[lVar43].plan.n_plan_cells;
          }
        }
        else {
          uVar82 = (longlong)n_creatures - 1;
          piVar72 = &creature_list[2].plan.n_plan_cells;
          iVar73 = 0;
          lVar43 = 1;
          iVar26 = 0;
          do {
            if ((*(byte *)(piVar72 + -0x1a1) & 0x10) == 0) {
              iVar26 = iVar26 + 1;
              iVar73 = iVar73 + piVar72[-0x19e];
            }
            if ((*(byte *)(piVar72 + -3) & 0x10) == 0) {
              iVar26 = iVar26 + 1;
              iVar73 = iVar73 + *piVar72;
            }
            piVar72 = piVar72 + 0x33c;
            lVar45 = lVar43 - (uVar82 & 0xfffffffffffffffe);
            lVar43 = lVar43 + 2;
          } while (lVar45 != -1);
          if ((uVar82 & 1) != 0) goto LAB_1400a7e6f;
        }
        _Var65 = (longlong)iVar73 * 0x48;
      }
      pcVar33 = (cell_render_info *)stalloc_(_Var65);
      local_1228 = local_1228 & 0xffffffff00000000;
      phVar38 = (hexagon_render_info *)stalloc_((longlong)iVar26 * 0x24);
      iVar73 = (int)(iVar26 - 1U) / 0x13;
      fVar121 = (float)(int)((uint)(9 < iVar73 * -0x13 + iVar26 + -1) + iVar73 * 2) * 0.8660254 *
                0.2;
      fVar124 = fVar121 + -2.0 + 0.27712813;
      auVar105._4_8_ = 0;
      auVar105._0_4_ = fVar124;
      if (fVar124 <= 0.0) {
        auVar105 = ZEXT812(0) << 0x20;
      }
      fVar119 = ABS((param_4->mouse).field0_0x0._s_0.x + -1.025);
      local_1458 = ZEXT416((uint)fVar119);
      if (fVar124 <= 0.0) {
        fVar113 = 0.05;
      }
      else {
        fVar121 = 3.97 / fVar121;
        fVar113 = 0.05;
        if (0.05 <= fVar121) {
          fVar113 = fVar121;
        }
      }
      fVar121 = auVar105._0_4_ / (2.0 - fVar113);
      if (((0.0075 <= fVar119) || (param_4->hover_blocked = true, param_4->click_blocked != false))
         || ((param_4->pressed_buttons[0] & 2) == 0)) {
        if (DAT_14020d9a4 == 1) {
          fVar128 = (param_4->mouse).field0_0x0._s_0.y;
          fVar103 = DAT_14020d9a8;
          fVar127 = DAT_14020d9ac;
          goto LAB_1400a904c;
        }
      }
      else {
        fVar128 = (param_4->mouse).field0_0x0._s_0.y;
        fVar103 = fVar113 * -0.5 + 1.0;
        uVar24 = -(uint)(fVar113 * 0.5 < ABS((fVar103 - (1.0 / fVar121) * DAT_14020d9a0) - fVar128))
        ;
        fVar127 = (float)(~uVar24 & (uint)DAT_14020d9a0 |
                         (uint)((fVar103 - fVar128) * fVar121) & uVar24);
        DAT_14020d9a4 = 1;
        DAT_14020d9a8 = fVar128;
        DAT_14020d9ac = fVar127;
        param_4->click_blocked = true;
        fVar103 = fVar128;
LAB_1400a904c:
        DAT_14020d9a0 = (fVar103 - fVar128) * fVar121 + fVar127;
        if (((param_4->released_buttons[0] & 2) != 0) ||
           (((param_4->pressed_buttons[0] | param_4->buttons[0]) & 2) == 0)) {
          DAT_14020d9a4 = 0;
        }
      }
      bVar23 = DAT_14020d9b0;
      if ((param_4->pressed_buttons[0] & 0x10) == 0 || (DAT_14020d9b0 & 1) != 0) {
        if ((DAT_14020d9b0 & 1) != 0) {
          fVar121 = (param_4->mouse).field0_0x0._s_0.y;
          goto LAB_1400a90ee;
        }
      }
      else {
        DAT_14020d9b0 = 1;
        fVar121 = (param_4->mouse).field0_0x0._s_0.y;
        DAT_14020d9b8 = 0.0;
        DAT_14020d9b4 = fVar121;
LAB_1400a90ee:
        DAT_14020d9a0 = param_5 * 12.0 * (DAT_14020d9b4 - fVar121) + DAT_14020d9a0;
        fVar121 = (param_4->dmouse).field0_0x0._s_0.x;
        fVar128 = (param_4->dmouse).field0_0x0._s_0.y;
        DAT_14020d9b8 = SQRT(fVar128 * fVar128 + fVar121 * fVar121 + 0.0) + DAT_14020d9b8;
        if ((((param_4->pressed_buttons[0] & 0x16) != 0 & bVar23) != 0) ||
           (((param_4->released_buttons[0] & 0x10) != 0 && (0.1 < DAT_14020d9b8)))) {
          DAT_14020d9b0 = 0;
        }
      }
      fVar121 = param_4->mouse_wheel * -0.1 + DAT_14020d9a0;
      if (fVar121 <= auVar105._0_4_) {
        auVar105._4_8_ = auVar105._4_8_;
        auVar105._0_4_ = fVar121;
      }
      DAT_14020d9a0 = 0.0;
      if (0.0 <= auVar105._0_4_) {
        DAT_14020d9a0 = auVar105._0_4_;
      }
      fVar127 = DAT_14020d9a0 + 0.86143595;
      fVar103 = -0.90000004;
      local_1448 = 0.5;
      fVar121 = local_1448;
      local_1448 = 0.5;
      pcVar90 = creature_list;
      pcVar21 = creature_list;
      fVar128 = fVar127;
      uVar82 = 0;
LAB_1400a9210:
      do {
        pcVar92 = pcVar21;
        pcVar90 = pcVar90 + 1;
        pcVar21 = pcVar92 + 1;
      } while (pcVar92[1].hidden != 0);
      fVar117 = (param_4->mouse).field0_0x0._s_0.x;
      fVar125 = (param_4->mouse).field0_0x0._s_0.y;
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
        if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a9252;
      }
      else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a9252:
        lVar43 = (longlong)n_gamepad_anchors;
        rVar53.field0_0x0._s_0.y = fVar128;
        rVar53.field0_0x0._s_0.x = fVar103;
        n_gamepad_anchors = n_gamepad_anchors + 1;
        gamepad_anchors[lVar43].field0_0x0 = rVar53.field0_0x0;
      }
      fVar125 = ABS(fVar125 - fVar128);
      fVar117 = ABS(fVar117 - fVar103);
      fVar120 = fVar117 * 0.5 + fVar125 * -0.8660254 + 0.0;
      if (fVar120 < 0.0) {
        fVar125 = fVar125 + (fVar120 + fVar120) * 0.8660254;
        fVar117 = fVar117 + (fVar120 + fVar120) * -0.5;
      }
      fVar120 = 0.054848272;
      if (fVar125 <= 0.054848272) {
        fVar120 = fVar125;
      }
      fVar104 = -0.054848272;
      if (-0.054848272 <= fVar120) {
        fVar104 = fVar120;
      }
      fVar117 = fVar117 + -0.095;
      fVar120 = 0.02;
      if (SQRT(fVar117 * fVar117 + (fVar125 - fVar104) * (fVar125 - fVar104) + 0.0) *
          (float)(-(uint)(fVar117 != 0.0) &
                 *(uint *)(&__real_3f800000bf800000 + (ulonglong)(0.0 < fVar117) * 4)) < 0.0) {
        param_4->hover_blocked = true;
        param_4->cursor_type = 0;
        fVar120 = 0.2;
        if ((param_4->click_blocked == false) &&
           (fVar120 = 0.2, (param_4->pressed_buttons[0] & 2) != 0)) {
          param_1->selected_creature =
               (int)((ulonglong)((longlong)pcVar90 - (longlong)creature_list) >> 3) * -0x1eeaf9d1;
          param_4->click_blocked = true;
          fVar120 = 0.2;
        }
      }
      puVar40 = stalloc_((longlong)pcVar92[1].plan.n_dragged_cells +
                         (longlong)pcVar92[1].plan.n_plan_cells);
      local_13ec._s_0.z = 0.0;
      puVar132 = (uint *)((ulonglong)puVar132 & 0xffffffff00000000);
      local_13ec._s_0.x = fVar103;
      local_13ec._s_0.y = fVar128;
      add_thumbnail_cells(&pcVar92[1].plan,pcVar33,(int *)&local_1228,puVar40,
                          (real_3 *)&local_13ec._s_0,0.085499994,false,0.0);
      stunalloc(puVar40);
      uVar95 = uVar82 + 1;
      phVar38[uVar82].x.field0_0x0._s_0.x = fVar103;
      phVar38[uVar82].x.field0_0x0._s_0.y = fVar128;
      *(undefined8 *)((longlong)&phVar38[uVar82].x.field0_0x0._s_2.yz.field0_0x0 + 4) = 0;
      phVar38[uVar82].r.field0_0x0._s_0.y = 0.109696545;
      phVar38[uVar82].color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
      phVar38[uVar82].color.field0_0x0._s_0.z = 1.0;
      phVar38[uVar82].color.field0_0x0._s_0.w = fVar120;
      if (uVar82 != iVar26 - 1U) {
        fVar103 = fVar103 + 0.2;
        iVar73 = (int)((uVar82 & 0xffffffff) * 0xaf286bcb >> 0x20);
        iVar73 = (int)uVar82 + (((uint)((int)uVar82 - iVar73) >> 1) + iVar73 >> 4) * -0x13;
        pcVar90 = pcVar21;
        uVar82 = uVar95;
        if (iVar73 == 0x12) {
          fVar128 = fVar128 + -0.17320508;
          fVar103 = -0.90000004;
        }
        else if (iVar73 == 9) {
          fVar128 = fVar128 + -0.17320508;
          fVar103 = -0.8;
        }
        goto LAB_1400a9210;
      }
      fVar103 = ((fVar127 + 0.2) - fVar128) * 0.5 + 0.02375;
      fVar128 = fVar103 + -0.015;
      fVar103 = fVar103 + 0.03;
      local_10c8._0_8_ = 0x3f8000003f800000;
      local_10c8._8_8_ = 0x3f8000003f800000;
      local_10d8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3a83126f3a83126f;
      local_10d8._8_8_ = 0x3f4ccccd3a83126f;
      local_1298.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_1298._s_0.z = 0.0;
      ptVar131 = (text_params *)local_10c8;
      draw_rounded_rectangle_outlined
                (param_3,(real_3 *)&local_1298._s_0,
                 (real_2)((ulonglong)(uint)fVar103 << 0x20 | 0x3f87ae14),0.03,0.01,
                 (real_4 *)&local_10d8._s_0,(real_4 *)ptVar131);
      (param_1->block_zone).field0_0x0._s_0.x = 1.06;
      (param_1->block_zone).field0_0x0._s_0.y = fVar103;
      (param_1->block_center).field0_0x0 = (real_2_u_0)0x0;
      if (0.0 < fVar124) {
        uVar24 = 0x3f000000;
        if ((DAT_14020d9a4 & 1) == 0) {
          uVar24 = 0x3f800000;
        }
        local_10e8._s_0.x =
             (float)(-(uint)(fVar119 < 0.0075) & 0x3f000000 | ~-(uint)(fVar119 < 0.0075) & uVar24);
        local_10e8._s_0.w = 0.95;
        local_10e8._s_0.y = local_10e8._s_0.x;
        local_10e8._s_0.z = local_10e8._s_0.x;
        draw_line(param_3,(real_2)((ulonglong)
                                   (uint)(0.9925 - ((1.985 - fVar113) * DAT_14020d9a0) / fVar124) <<
                                   0x20 | 0x3f833333),
                  (real_2)((ulonglong)((int)fVar113 + 0x80000000) << 0x20),0.0075,
                  (real_4 *)&local_10e8._s_0);
      }
      local_c68._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
      local_c68._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
      local_c68._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
      local_c68._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
      local_c68._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
      local_c68._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
      local_c68._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
      local_c68._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
      draw_regular_hexagons(phVar38,(int)uVar95,(real_4x4 *)local_c68.columns);
      (*glBindFramebuffer)(0x8d40,param_3->cell_frame_buffer);
      bVar23 = 0;
      glViewport(0,0,(param_3->resolution).field0_0x0._s_0.x,(param_3->resolution).field0_0x0._s_0.y
                );
      (*glBlendFuncSeparate)(1,1,1,1);
      glClearColor();
      glClear(0x4000);
      local_ca8._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
      local_ca8._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
      local_ca8.data[4] = (param_3->camera).field0_0x0.data[4];
      local_ca8.data[5] = (param_3->camera).field0_0x0.data[5];
      local_ca8.data[6] = (param_3->camera).field0_0x0.data[6];
      local_ca8.data[7] = (param_3->camera).field0_0x0.data[7];
      local_ca8.columns[2].field0_0x0 =
           (real_4)*(undefined1 (*) [16])&(param_3->camera).field0_0x0.columns[2].field0_0x0;
      local_ca8._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
      local_ca8._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
      draw_cells(pcVar33,(int)local_1228,(real_4x4 *)local_ca8.columns,w.frame_number,false);
      (*glBindFramebuffer)(0x8d40,param_3->frame_buffer);
      glViewport(0,0,(param_3->resolution).field0_0x0._s_0.x,(param_3->resolution).field0_0x0._s_0.y
                );
      (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_3->field14_0xc8)._s_0.color_texture,0);
      local_b68._0_4_ = 0x8ce0;
      (*glDrawBuffers)(1,(uint *)local_b68);
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
      (*glUseProgram)(blend_cells_program);
      current_uniforms = (int *)&blend_cells_program_uniforms;
      (*glUniform1i)((uint)blend_cells_program_uniforms,0);
      (*glActiveTexture)(0x84c0);
      glBindTexture(0xde1,(param_3->field14_0xc8)._s_0.cell_color_texture);
      (*glUniform1i)(current_uniforms[1],1);
      (*glActiveTexture)(0x84c1);
      glBindTexture(0xde1,(param_3->field14_0xc8)._s_0.cell_material_texture);
      local_b48 = 0x3f80000000000000;
      uStack_b40 = 0xbf800000;
      local_b58 = 0x3f800000;
      uStack_b50 = 0x3f8000003f800000;
      uStack_b60 = 0xbf80000000000000;
      local_b68 = (undefined1  [8])0xbf800000bf800000;
      (*glBufferSubData)(0x8892,0,0x30,local_b68);
      (*glEnableVertexAttribArray)(0);
      _Dst = (real_2_u_0 *)0x0;
      (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
      (*glVertexAttribDivisor)(0,0);
      glDrawArrays(6,0,4);
      stunalloc(phVar38);
      stunalloc(pcVar33);
      fVar124 = (param_4->mouse).field0_0x0._s_0.x + -1.015;
      fVar119 = (param_4->mouse).field0_0x0._s_0.y - fVar128;
      fVar124 = fVar119 * fVar119 + fVar124 * fVar124 + 0.0;
      bVar22 = param_4->click_blocked;
      if (fVar124 <= 0.00062500004) {
        if (bVar22 == false) {
          bVar23 = param_4->pressed_buttons[0] >> 1;
          bVar22 = (bool)(bVar23 & 1);
        }
        else {
          bVar22 = true;
          bVar23 = 0;
        }
      }
      param_4->click_blocked = bVar22;
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
      }
      lVar43 = (longlong)n_gamepad_anchors;
      if (n_gamepad_anchors < max_gamepad_anchors) {
        n_gamepad_anchors = n_gamepad_anchors + 1;
        gamepad_anchors[lVar43].field0_0x0 =
             (real_2_u_0)((ulonglong)(uint)fVar128 << 0x20 | 0x3f81eb85);
      }
      if (0.00062500004 < fVar124) {
        local_1448 = 1.0;
        fVar121 = local_1448;
        local_1448 = 1.0;
        next_gui_element = next_gui_element + 1;
      }
      else {
        iVar26 = next_gui_element + 1;
        param_4->hovered_ui_element = next_gui_element;
        next_gui_element = iVar26;
        param_4->hover_blocked = true;
      }
      if ((bVar23 & 1) != 0) {
        param_1->tool = -1;
        param_4->click_blocked = true;
        local_1448 = fVar121;
      }
      local_1368._s_0.x = local_1448;
      local_1368._s_0.y = local_1448;
      local_1368._s_0.z = local_1448;
      local_1368._s_0.w = 1.0;
      draw_line(param_3,(real_2)((ulonglong)(uint)(fVar128 + -0.015) << 0x20 | 0x3f800000),
                (real_2)0x3cf5c28f3cf5c28f,0.005,(real_4 *)&local_1368._s_0);
      local_1378._s_0.x = local_1448;
      local_1378._s_0.y = local_1448;
      local_1378._s_0.z = local_1448;
      local_1378._s_0.w = 1.0;
      draw_line(param_3,(real_2)((ulonglong)(uint)(fVar128 + 0.015) << 0x20 | 0x3f800000),
                (real_2)0xbcf5c28f3cf5c28f,0.005,(real_4 *)&local_1378._s_0);
      uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
      if (DAT_14020d9b0 == 1) {
        param_4->cursor_type = 7;
      }
      iVar26 = param_1->tool;
      goto joined_r0x0001400a9b9f;
    }
    param_4->cursor_type = 5;
    uVar24 = w.translations.max_entries;
    ppcVar19 = w.translations.keys;
    pcVar51 = "RB";
    if (w.use_gamepad == 0) {
      pcVar51 = "Ctrl";
    }
    uVar95 = (ulonglong)w.translations.max_entries;
    uVar82 = 0x9030b290U % uVar95;
    do {
      lVar43 = (longlong)(int)uVar82;
      if ((ppcVar19[lVar43] == (char *)0x0) ||
         (iVar26 = strcmp(ppcVar19[lVar43],"prompt_spawn"), iVar26 == 0)) goto LAB_1400a7c0b;
      uVar25 = (int)uVar82 + 1;
      uVar82 = (ulonglong)uVar25;
      if (uVar25 == uVar24) {
        uVar82 = 0;
      }
      iVar26 = (int)(0x9030b290U % uVar95);
    } while ((int)uVar82 != iVar26);
    lVar43 = (longlong)iVar26;
LAB_1400a7c0b:
    if (w.translations.values[lVar43].text == (char **)0x0) {
      pcVar44 = unknown_string;
    }
    else {
      pcVar8 = w.translations.values[lVar43].text[w.language_index];
      pcVar44 = unknown_string;
      if (pcVar8 != (char *)0x0) {
        pcVar44 = pcVar8;
      }
    }
    snprintf(local_b68,0x100,pcVar44,pcVar51);
    local_1018._0_8_ = 0;
    local_1018.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_1018._16_8_ = 0;
    local_1018.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_1018._48_8_ = 0;
    local_1018._56_8_ = 0;
    local_1018.wrap_indent = 0.0;
    local_1018._8_8_ = 0x3b03126f00000000;
    local_1018._32_8_ = 0x3f800000;
    _Dst = local_3c8 + 0x17;
    memcpy(_Dst,_Src,0xb8);
    local_10c8._16_8_ = 0x3f8000003f800000;
    local_10c8._24_8_ = 0x3f8000003f800000;
    ptVar131 = &local_1018;
    draw_text(local_b68,0.0,-0.8,(real_4 *)(local_10c8 + 0x10),(real_2)0x0,(font_info *)&_Dst->_s_0,
              ptVar131);
    if ((param_4->click_blocked != false) || ((param_4->pressed_buttons[0] & 2) == 0))
    goto LAB_1400a80ca;
    local_1238.body_id = 0;
    local_1238.orientation.field0_0x0 = (real_2_u_0)0x0;
    local_1238._12_4_ = 1;
    pbVar30 = spawn_creature(param_1->selected_creature,rVar46,&local_1238);
    uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
    if (pbVar30 == (body *)0x0) {
      uVar24 = (*(uint *)local_14b8._0_8_ >> 0x10 ^ *(uint *)local_14b8._0_8_) * 0x7feb352d;
      uVar24 = (uVar24 >> 0xf ^ uVar24) * -0x7b935975;
      uVar24 = uVar24 >> 0x10 ^ uVar24;
      *(uint *)local_14b8._0_8_ = uVar24;
      pqVar16 = ac.queued_sounds;
      if ((((ac.initialized == true) && (0 < sounds.error.n_samples)) &&
          (sounds.error.data != (short *)0x0)) &&
         (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
        fVar121 = (float)uVar24 * 2.3283064e-10;
        uVar24 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar24].sound = (sound_t *)0x1401fe4e0;
        pqVar16[(int)uVar24].params.volume = 1.0;
        pqVar16[(int)uVar24].params.delay = 0.0;
        pqVar16[(int)uVar24].params.pitch_shift = fVar121 + fVar121 + -1.0;
        pqVar15 = pqVar16 + (int)uVar24;
        (pqVar15->params).lowpass_dist = 0.0;
        (pqVar15->params).type = 0;
        *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
        *(undefined8 *)((longlong)pqVar16[(int)uVar24].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
LAB_1400a80c2:
      param_4->click_blocked = true;
      goto LAB_1400a80ca;
    }
    pbVar30->team = param_1->selected_team;
    if ((((param_4->pressed_buttons[2] | param_4->buttons[2]) & 2) != 0) ||
       (((param_4->gamepad).buttons & 0x200) != 0)) goto LAB_1400a80c2;
    param_1->tool = -1;
    param_4->click_blocked = true;
    iVar26 = param_1->tool;
    if (iVar26 != 4) goto LAB_1400a9ba5;
LAB_1400a80d7:
    uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
    param_4->cursor_type = 5;
    if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
      if (w.selected_body != 0) {
        if ((w.selected_body < 1) ||
           (uVar24 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
           w.bodies.field0_0x0.index_table[uVar24].id != w.selected_body)) {
          w.selected_body = 0;
        }
        else {
          iVar26 = w.bodies.field0_0x0.index_table[uVar24].index;
          w.selected_body = 0;
          if (w.bodies.field3_0x20.elements != (body *)0x0) {
            if ((longlong)w.bodies.field3_0x20.elements[iVar26].creature_index == 0) {
              w.bodies.field3_0x20.elements[iVar26].brain.fun = (void *)0x0;
            }
            else {
              w.bodies.field3_0x20.elements[iVar26].brain.fun =
                   creature_list[w.bodies.field3_0x20.elements[iVar26].creature_index].ai_func;
            }
          }
        }
      }
      local_10f8._0_8_ = 0;
      local_10f8._8_8_ = 0;
      uVar24 = str_to_id("PLYR");
      iVar26 = get_creature_index(uVar24);
      pbVar30 = spawn_creature(iVar26,rVar46,&local_10f8);
      uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
      if (pbVar30 == (body *)0x0) {
        uVar24 = (*(uint *)local_14b8._0_8_ >> 0x10 ^ *(uint *)local_14b8._0_8_) * 0x7feb352d;
        uVar24 = (uVar24 >> 0xf ^ uVar24) * -0x7b935975;
        uVar24 = uVar24 >> 0x10 ^ uVar24;
        *(uint *)local_14b8._0_8_ = uVar24;
        pqVar16 = ac.queued_sounds;
        if ((((ac.initialized == true) && (0 < sounds.error.n_samples)) &&
            (sounds.error.data != (short *)0x0)) &&
           (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
          fVar121 = (float)uVar24 * 2.3283064e-10;
          uVar24 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar24].sound = (sound_t *)0x1401fe4e0;
          pqVar16[(int)uVar24].params.volume = 1.0;
          pqVar16[(int)uVar24].params.delay = 0.0;
          pqVar16[(int)uVar24].params.pitch_shift = fVar121 + fVar121 + -1.0;
          pqVar15 = pqVar16 + (int)uVar24;
          (pqVar15->params).lowpass_dist = 0.0;
          (pqVar15->params).type = 0;
          *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
          *(undefined8 *)((longlong)pqVar16[(int)uVar24].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
      else {
        w.selected_body = pbVar30->id;
        pbVar30->team = w.last_team;
        lVar43 = (longlong)w.last_mutations.max_items;
        (pbVar30->field75_0x2d0).mutation_items.max_items = w.last_mutations.max_items;
        pmVar34 = (mutation_item *)dynamic_alloc(lVar43 * 0x24);
        uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
        (pbVar30->field75_0x2d0).mutation_items.items = pmVar34;
        if (0 < w.last_mutations.n_items) {
          lVar45 = 4;
          lVar43 = 0;
          do {
            iVar26 = *(int *)((longlong)(w.last_mutations.items)->imbues + lVar45 + -8);
            give_mutation(pbVar30,iVar26,
                          (int *)((longlong)(w.last_mutations.items)->imbues + lVar45 + -4),
                          mutations_list[iVar26].n_imbues,false);
            uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
            lVar43 = lVar43 + 1;
            lVar45 = lVar45 + 0x24;
          } while (lVar43 < w.last_mutations.n_items);
        }
        param_1->tool = -1;
        apply_edit_menu();
        pbVar30->health = 0.0;
        if (0 < (pbVar30->plan).n_plan_cells) {
          lVar43 = 0;
          lVar45 = 0;
          do {
            ppVar9 = (pbVar30->plan).plan_cells;
            iVar69 = (pbVar30->plan).region.l.field0_0x0._s_0;
            pbVar30->health =
                 materials_list[*(int *)((longlong)&ppVar9->material_index + lVar43)].max_health +
                 pbVar30->health;
            lVar71 = *(longlong *)((longlong)&(ppVar9->body_coord).field0_0x0 + lVar43);
            iVar26 = iVar69.x;
            pbVar30->cell_map
            [(int)(lVar71 - ((ulonglong)iVar69 & 0xffffffff00000000) >> 0x20) *
             ((pbVar30->plan).region.u.field0_0x0._s_0.x - iVar26) + ((int)lVar71 - iVar26)] = -1;
            lVar45 = lVar45 + 1;
            lVar43 = lVar43 + 0x34;
          } while (lVar45 < (pbVar30->plan).n_plan_cells);
        }
        deabstractify_body(pbVar30);
      }
      param_4->click_blocked = true;
    }
    iVar26 = param_1->tool;
    if (iVar26 == 6) goto LAB_1400a9bae;
LAB_1400a8326:
    if (iVar26 != 7) goto LAB_1400a9e8b;
LAB_1400a832f:
    param_4->cursor_type = 5;
    local_1128.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_1128._8_8_ = 0x3dcccccd3f800000;
    local_12b8.xy.field0_0x0 = (real_2)(param_4->mouse).field0_0x0;
    local_12b8._s_0.z = 0.0;
    draw_ring(param_3,(real_3 *)&local_12b8._s_0,*pfVar64 * fVar102,*pfVar64 * fVar102 + 0.003,
              (real_4 *)&local_1128._s_0);
    if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
      local_1138.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f0000003f800000;
      local_1138._8_8_ = 0x3f8000003dcccccd;
      local_1148 = (real_2_u_0)0x3e8000003f800000;
      uStack_1140 = 0x3f8000003c23d70b;
      prVar130 = &local_1138;
      _Dst = &local_1148;
      puVar132 = (uint *)CONCAT44((int)((ulonglong)puVar132 >> 0x20),0x3f800000);
      create_explosion(rVar46,*pfVar64,0x10,0.8,8.0,(real_4 *)&_Dst->_s_0,(real_4 *)&prVar130->_s_0,
                       1.0);
      uVar42 = (undefined4)((ulonglong)prVar130 >> 0x20);
    }
    iVar26 = param_1->tool;
    if (iVar26 == 8) goto LAB_1400a9e94;
LAB_1400a8429:
    bVar22 = false;
    if (iVar26 == 9) goto LAB_1400a843d;
joined_r0x0001400ab0d7:
    if (iVar26 == 10) {
      uVar70 = (undefined4)((ulonglong)puVar132 >> 0x20);
      local_1508 = local_1508 + -0.4;
      if (((param_1->field11_0x18c).terraform_flags & 0x14) == 4) {
        lVar43 = (longlong)w.n_biome_types;
        iVar26 = 0;
        if (1 < lVar43) {
          if ((uint)w.n_biome_types < 9) {
            iVar26 = 0;
            lVar45 = 1;
          }
          else {
            uVar95 = lVar43 - 1U & 0xfffffffffffffff8;
            lVar45 = uVar95 + 1;
            puVar47 = (uint *)&w.field137_0x3f10.biome_types[8].field_0x1c;
            iVar26 = 0;
            iVar73 = 0;
            iVar77 = 0;
            iVar91 = 0;
            iVar66 = 0;
            iVar81 = 0;
            iVar107 = 0;
            iVar108 = 0;
            uVar82 = uVar95;
            do {
              iVar66 = iVar66 + (puVar47[-0xa22d] & 1);
              iVar81 = iVar81 + (puVar47[-0x8b02] & 1);
              iVar107 = iVar107 + (puVar47[-0x73d7] & 1);
              iVar108 = iVar108 + (puVar47[-0x5cac] & 1);
              iVar26 = iVar26 + (puVar47[-0x4581] & 1);
              iVar73 = iVar73 + (puVar47[-0x2e56] & 1);
              iVar77 = iVar77 + (puVar47[-0x172b] & 1);
              iVar91 = iVar91 + (*puVar47 & 1);
              puVar47 = puVar47 + 0xb958;
              uVar82 = uVar82 - 8;
            } while (uVar82 != 0);
            iVar26 = iVar91 + iVar108 + iVar73 + iVar81 + iVar77 + iVar107 + iVar26 + iVar66;
            if (lVar43 - 1U == uVar95) goto LAB_1400ab244;
          }
          puVar47 = (uint *)&(w.field137_0x3f10.biome_types + lVar45 * 0x5cac)->field_0x1c;
          lVar43 = lVar43 - lVar45;
          do {
            iVar26 = iVar26 + (*puVar47 & 1);
            puVar47 = puVar47 + 0x172b;
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
        }
LAB_1400ab244:
        phVar38 = (hexagon_render_info *)stalloc_((ulonglong)(uint)(iVar26 * 2) * 0x24);
        fVar121 = DAT_14020da14;
        fVar113 = (float)iVar26 * 0.12;
        fVar119 = fVar113 * 0.5;
        fVar124 = fVar119 + 0.03;
        fVar127 = fVar124 + 0.0;
        fVar103 = fVar113 + -2.0 + 0.12;
        fVar128 = local_1508 + 0.06 + 0.025;
        if (fVar103 <= 0.0) {
          fVar117 = 0.05;
        }
        else {
          fVar117 = 0.05;
          if (0.05 <= 3.97 / fVar113) {
            fVar117 = 3.97 / fVar113;
          }
        }
        fVar113 = 1.0;
        if (fVar119 <= 1.0) {
          fVar113 = fVar119;
        }
        fVar120 = ABS((param_4->mouse).field0_0x0._s_0.x - fVar128);
        fVar119 = ABS((param_4->mouse).field0_0x0._s_0.y);
        fVar125 = ABS((param_4->mouse).field0_0x0._s_0.x - local_1508);
        if ((0.085 <= fVar125) || (fVar124 <= fVar119)) {
          fVar104 = 0.085;
          if (fVar125 <= 0.085) {
            fVar104 = fVar125;
          }
          fVar124 = (float)(~-(uint)(fVar124 < fVar119) & (uint)fVar119 |
                           -(uint)(fVar124 < fVar119) & (uint)fVar127);
          fVar122 = -fVar127;
          if (-fVar127 <= fVar124) {
            fVar122 = fVar124;
          }
          fVar124 = SQRT((fVar119 - fVar122) * (fVar119 - fVar122) +
                         (fVar125 - fVar104) * (fVar125 - fVar104) + 0.0);
        }
        else {
          fVar124 = fVar125 + -0.085;
          if (fVar125 + -0.085 <= fVar119 - fVar127) {
            fVar124 = fVar119 - fVar127;
          }
        }
        rVar39._s_0.y = 0.0;
        rVar39._s_0.x = local_1508;
        if (fVar124 <= 0.03) {
          fVar124 = fVar103;
          if (fVar103 <= 0.0) {
            fVar124 = 0.0;
          }
          w.scroll_blocked = 1;
          fVar119 = fVar124 / (2.0 - fVar117);
          if (((0.0075 <= fVar120) ||
              (param_4->hover_blocked = true, param_4->click_blocked != false)) ||
             ((param_4->pressed_buttons[0] & 2) == 0)) {
            if (DAT_14020da18 == 1) {
              fVar125 = (param_4->mouse).field0_0x0._s_0.y;
              fVar104 = DAT_14020da1c;
              fVar122 = DAT_14020da20;
              goto LAB_1400ab4d6;
            }
          }
          else {
            fVar125 = (param_4->mouse).field0_0x0._s_0.y;
            fVar104 = fVar117 * -0.5 + 1.0;
            uVar24 = -(uint)(fVar117 * 0.5 <
                            ABS((fVar104 - (1.0 / fVar119) * DAT_14020da14) - fVar125));
            fVar122 = (float)(~uVar24 & (uint)DAT_14020da14 |
                             (uint)((fVar104 - fVar125) * fVar119) & uVar24);
            DAT_14020da18 = 1;
            DAT_14020da1c = fVar125;
            DAT_14020da20 = fVar122;
            param_4->click_blocked = true;
            fVar104 = fVar125;
LAB_1400ab4d6:
            DAT_14020da14 = (fVar104 - fVar125) * fVar119 + fVar122;
            if (((param_4->released_buttons[0] & 2) != 0) ||
               (((param_4->pressed_buttons[0] | param_4->buttons[0]) & 2) == 0)) {
              DAT_14020da18 = 0;
            }
          }
          bVar23 = DAT_14020da24;
          if ((param_4->pressed_buttons[0] & 0x10) == 0 || (DAT_14020da24 & 1) != 0) {
            if ((DAT_14020da24 & 1) != 0) {
              fVar119 = (param_4->mouse).field0_0x0._s_0.y;
              goto LAB_1400ab551;
            }
          }
          else {
            DAT_14020da24 = 1;
            fVar119 = (param_4->mouse).field0_0x0._s_0.y;
            DAT_14020da2c = 0.0;
            DAT_14020da28 = fVar119;
LAB_1400ab551:
            DAT_14020da14 = param_5 * 12.0 * (DAT_14020da28 - fVar119) + DAT_14020da14;
            fVar119 = (param_4->dmouse).field0_0x0._s_0.x;
            fVar125 = (param_4->dmouse).field0_0x0._s_0.y;
            DAT_14020da2c = SQRT(fVar125 * fVar125 + fVar119 * fVar119 + 0.0) + DAT_14020da2c;
            if ((((param_4->pressed_buttons[0] & 0x16) != 0 & bVar23) != 0) ||
               (((param_4->released_buttons[0] & 0x10) != 0 && (0.1 < DAT_14020da2c)))) {
              DAT_14020da24 = 0;
            }
          }
          fVar119 = param_4->mouse_wheel * -0.1 + DAT_14020da14;
          if (fVar119 <= fVar124) {
            fVar124 = fVar119;
          }
          DAT_14020da14 = 0.0;
          if (0.0 <= fVar124) {
            DAT_14020da14 = fVar124;
          }
        }
        fVar121 = fVar113 + -0.06 + fVar121;
        uVar82 = 0;
        uVar55 = w.field137_0x3f10.biome_types;
        uVar35 = w.field137_0x3f10.biome_types;
        lVar43 = 0;
LAB_1400ab660:
        do {
          pbVar93 = (biome_type *)uVar35;
          uVar55 = uVar55 + 0x5cac;
          uVar35 = pbVar93 + 1;
        } while (pbVar93[1].tracked == 0);
        fVar124 = (param_4->mouse).field0_0x0._s_0.x;
        fVar119 = (param_4->mouse).field0_0x0._s_0.y;
        if (gamepad_anchors == (real_2 *)0x0) {
          max_gamepad_anchors = 0x400;
          gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
          if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400ab6a2;
        }
        else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400ab6a2:
          lVar45 = (longlong)n_gamepad_anchors;
          rVar58.field0_0x0._s_0.y = fVar121;
          rVar58.field0_0x0._s_0.x = local_1508;
          n_gamepad_anchors = n_gamepad_anchors + 1;
          gamepad_anchors[lVar45].field0_0x0 = rVar58.field0_0x0;
        }
        fVar119 = ABS(fVar119 - fVar121);
        fVar124 = ABS(fVar124 - local_1508);
        fVar113 = fVar124 * 0.5 + fVar119 * -0.8660254 + 0.0;
        if (fVar113 < 0.0) {
          fVar119 = fVar119 + (fVar113 + fVar113) * 0.8660254;
          fVar124 = fVar124 + (fVar113 + fVar113) * -0.5;
        }
        fVar113 = 0.028867513;
        if (fVar119 <= 0.028867513) {
          fVar113 = fVar119;
        }
        fVar125 = -0.028867513;
        if (-0.028867513 <= fVar113) {
          fVar125 = fVar113;
        }
        fVar124 = fVar124 + -0.05;
        if (0.0 <= SQRT(fVar124 * fVar124 + (fVar119 - fVar125) * (fVar119 - fVar125) + 0.0) *
                   (float)(-(uint)(fVar124 != 0.0) &
                          *(uint *)(&__real_3f800000bf800000 + (ulonglong)(0.0 < fVar124) * 4))) {
          fVar124 = *(float *)(&__real_3f8000003ca3d70a +
                              (ulonglong)
                              (((longlong)(uVar55 - w.field137_0x3f10._0_8_) >> 2) *
                               0x15316bf36579ef83 - (longlong)param_1->terraform_biome_index == 0) *
                              4);
          fVar119 = 0.05;
        }
        else {
          param_4->hover_blocked = true;
          param_4->cursor_type = 0;
          fVar119 = 0.065;
          fVar124 = 0.2;
          if (param_4->click_blocked == false) {
            fVar119 = 0.065;
            fVar124 = 0.2;
            if ((param_4->pressed_buttons[0] & 2) != 0) {
              param_1->biome_r_dot[uVar82] = param_1->biome_r_dot[uVar82] + -5.0;
              param_1->terraform_biome_index =
                   (int)((ulonglong)(uVar55 - w.field137_0x3f10._0_8_) >> 2) * 0x6579ef83;
              param_4->click_blocked = true;
              fVar119 = 0.065;
              fVar124 = 0.2;
            }
          }
        }
        pfVar64 = param_1->biome_r;
        pfVar10 = param_1->biome_r_dot;
        fVar113 = expf(param_5 * -5.0);
        fVar126 = pfVar64[uVar82] - fVar119;
        fVar122 = pfVar10[uVar82] / 150.0;
        fVar125 = cosf(local_1504);
        fVar104 = sinf(local_1504);
        uVar70 = (undefined4)((ulonglong)puVar132 >> 0x20);
        pfVar64[uVar82] = (fVar126 * fVar125 + fVar122 * fVar104) * fVar113 + fVar119;
        pfVar10[uVar82] = (fVar122 * fVar125 - fVar126 * fVar104) * 150.0 * fVar113;
        fVar119 = param_1->biome_r[uVar82];
        fVar113 = 0.15;
        if (fVar119 <= 0.15) {
          fVar113 = fVar119;
        }
        fVar119 = 0.0;
        if (0.0 <= fVar113) {
          fVar119 = fVar113;
        }
        param_1->biome_r[uVar82] = fVar119;
        fVar119 = param_1->biome_r[uVar82];
        phVar38[lVar43].x.field0_0x0._s_0.x = local_1508;
        phVar38[lVar43].x.field0_0x0._s_0.y = fVar121;
        phVar38[lVar43].x.field0_0x0._s_0.z = 0.0;
        phVar38[lVar43].r.field0_0x0._s_0.x = fVar119 * 1.1547005;
        phVar38[lVar43].r.field0_0x0._s_0.y = 0.0;
        phVar38[lVar43].color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
        phVar38[lVar43].color.field0_0x0._s_0.z = 1.0;
        phVar38[lVar43].color.field0_0x0._s_0.w = fVar124;
        fVar124 = param_1->biome_r[uVar82];
        fVar119 = pbVar93[1].color.field0_0x0._s_0.z;
        rVar32 = pbVar93[1].color.field0_0x0.xy.field0_0x0;
        phVar38[lVar43 + 1].x.field0_0x0._s_0.x = local_1508;
        phVar38[lVar43 + 1].x.field0_0x0._s_0.y = fVar121;
        phVar38[lVar43 + 1].x.field0_0x0._s_0.z = 0.0;
        phVar38[lVar43 + 1].r.field0_0x0._s_0.x = fVar124 * 1.1547005 + -0.005;
        phVar38[lVar43 + 1].r.field0_0x0._s_0.y = 0.0;
        phVar38[lVar43 + 1].color.field0_0x0.xy.field0_0x0 = rVar32;
        phVar38[lVar43 + 1].color.field0_0x0._s_0.z = fVar119;
        phVar38[lVar43 + 1].color.field0_0x0._s_0.w = 1.0;
        if (uVar82 != iVar26 - 1) {
          fVar121 = fVar121 + -0.12;
          uVar82 = uVar82 + 1;
          uVar55 = uVar35;
          lVar43 = lVar43 + 2;
          goto LAB_1400ab660;
        }
        local_11d8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
        local_11d8._8_8_ = 0x3f8000003f800000;
        local_11e8 = (real_2_u_0)0x3a83126f3a83126f;
        uStack_11e0 = 0x3f4ccccd3a83126f;
        local_12f8._s_0.z = 0.0;
        prVar130 = &local_11d8;
        _Dst = &local_11e8;
        local_12f8.xy.field0_0x0 = (real_2)rVar39;
        draw_rounded_rectangle_outlined
                  (param_3,(real_3 *)&local_12f8._s_0,
                   (real_2)((ulonglong)(uint)fVar127 << 0x20 | 0x3dae147b),0.03,0.01,
                   (real_4 *)&_Dst->_s_0,(real_4 *)&prVar130->_s_0);
        uVar42 = (undefined4)((ulonglong)prVar130 >> 0x20);
        (param_1->block_zone).field0_0x0._s_0.x = 0.085;
        (param_1->block_zone).field0_0x0._s_0.y = fVar127;
        (param_1->block_center).field0_0x0._s_0.x = local_1508;
        (param_1->block_center).field0_0x0._s_0.y = 0.0;
        if (0.0 < fVar103) {
          uVar24 = 0x3f000000;
          if ((DAT_14020da18 & 1) == 0) {
            uVar24 = 0x3f800000;
          }
          uVar25 = -(uint)(fVar120 < 0.0075);
          local_11f8._s_0.x = (float)(uVar25 & 0x3f000000 | ~uVar25 & uVar24);
          local_11f8._s_0.w = 0.95;
          rVar59.field0_0x0._s_0.y = 0.9925 - ((1.985 - fVar117) * DAT_14020da14) / fVar103;
          rVar59.field0_0x0._s_0.x = fVar128;
          local_11f8._s_0.y = local_11f8._s_0.x;
          local_11f8._s_0.z = local_11f8._s_0.x;
          draw_line(param_3,rVar59,(real_2)((ulonglong)((int)fVar117 + 0x80000000) << 0x20),0.0075,
                    (real_4 *)&local_11f8._s_0);
        }
        local_da8._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
        local_da8._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
        local_da8._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
        local_da8._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
        local_da8._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
        local_da8._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
        local_da8._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
        local_da8._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
        draw_regular_hexagons(phVar38,(int)(lVar43 + 2),(real_4x4 *)local_da8.columns);
        stunalloc(phVar38);
        if (DAT_14020da24 == 1) {
          param_4->cursor_type = 7;
        }
      }
      fVar121 = (float)(local_1468 >> 0x20);
      if (((param_1->field11_0x18c).terraform_flags & 4) != 0) {
        fVar124 = 0.0;
        if (((param_1->field11_0x18c).terraform_flags & 0x10) != 0) {
          fVar124 = 1.0;
        }
        fVar112 = expf(fVar112);
        DAT_14020da30 = fVar112 * DAT_14020da30 + (1.0 - fVar112) * fVar124;
        fVar123 = fVar123 * DAT_14020da30 + (1.0 - DAT_14020da30) * (local_1508 + -0.085) + -0.03;
        fVar112 = (param_4->mouse).field0_0x0._s_0.x - fVar123;
        fVar124 = (param_4->mouse).field0_0x0._s_0.y - fVar121;
        fVar112 = fVar124 * fVar124 + fVar112 * fVar112 + 0.0;
        bVar23 = param_4->click_blocked;
        if (0.00062500004 < fVar112) {
LAB_1400abd57:
          bVar62 = 0;
        }
        else {
          if ((bool)bVar23 != false) {
            bVar23 = 1;
            goto LAB_1400abd57;
          }
          bVar62 = param_4->pressed_buttons[0] >> 1;
          bVar23 = bVar62 & 1;
        }
        param_4->click_blocked = (bool)bVar23;
        if (gamepad_anchors == (real_2 *)0x0) {
          max_gamepad_anchors = 0x400;
          gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
        }
        lVar43 = (longlong)n_gamepad_anchors;
        if (n_gamepad_anchors < max_gamepad_anchors) {
          n_gamepad_anchors = n_gamepad_anchors + 1;
          gamepad_anchors[lVar43].field0_0x0 = (real_2_u_0)(local_1468 | (uint)fVar123);
        }
        if (0.00062500004 < fVar112) {
          local_13c8 = 0x3f800000;
          next_gui_element = next_gui_element + 1;
        }
        else {
          iVar26 = next_gui_element + 1;
          param_4->hovered_ui_element = next_gui_element;
          next_gui_element = iVar26;
          param_4->hover_blocked = true;
          local_13c8 = 0x3f000000;
        }
        if ((bVar62 & 1) != 0) {
          *(byte *)&param_1->field11_0x18c = *(byte *)&param_1->field11_0x18c ^ 0x10;
          param_4->click_blocked = true;
        }
        uVar24 = (uint)gl_general_buffers;
        fVar112 = (DAT_14020da30 + DAT_14020da30 + -1.0) * 0.015;
        fVar124 = fVar112 + fVar123;
        local_13bc = 0x3f800000;
        local_13c4 = local_13c8;
        local_13c0 = local_13c8;
        (*glUseProgram)(triangle_program);
        current_uniforms = (int *)&triangle_program_uniforms;
        (*glUniformMatrix4fv)((int)triangle_program_uniforms,1,'\0',(float *)prVar1);
        (*glBindBuffer)(0x8892,uVar24);
        local_b68._4_4_ = fVar121 + 0.0;
        local_b68._0_4_ = fVar123 - fVar112;
        local_b58 = CONCAT44(fVar121 + -0.03,fVar124);
        uStack_b60._0_4_ = fVar124;
        uStack_b60._4_4_ = fVar121 + 0.03;
        (*glBufferSubData)(0x8892,0,0x18,local_b68);
        (*glEnableVertexAttribArray)(0);
        (*glVertexAttribPointer)(0,2,0x1406,'\0',0,(void *)0x0);
        (*glVertexAttribDivisor)(0,0);
        (*glBufferSubData)(0x8892,0x18,0x10,&local_13c8);
        (*glEnableVertexAttribArray)(1);
        _Dst = (real_2_u_0 *)0x0;
        (*glVertexAttribPointer)(1,4,0x1406,'\0',0x10,(void *)0x18);
        (*glVertexAttribDivisor)(1,1);
        (*glDrawArraysInstanced)(6,0,3,1);
      }
      param_4->cursor_type = 1;
      local_1208.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_1208._8_8_ = 0x3dcccccd3f800000;
      local_1308.xy.field0_0x0 = (real_2)(param_4->mouse).field0_0x0;
      local_1308._s_0.z = 0.0;
      prVar130 = &local_1208;
      draw_ring(param_3,(real_3 *)&local_1308._s_0,fVar102 * *pfVar2,fVar102 * *pfVar2 + 0.003,
                (real_4 *)&prVar130->_s_0);
      uVar74 = (undefined4)((ulonglong)prVar130 >> 0x20);
      fVar124 = DAT_1401fe030 * 0.005 * fVar116 + 0.0 + DAT_1401fe038 * 0.005 * fVar118;
      fVar119 = DAT_1401fe03c * 0.005 * fVar118 + DAT_1401fe034 * 0.005 * fVar116 + 0.0;
      fVar112 = (float)roundf();
      fVar123 = (float)roundf();
      fVar102 = (float)roundf();
      iVar26 = (int)fVar123;
      fVar121 = ABS(fVar102 - (-fVar124 - fVar119));
      if ((ABS(fVar112 - fVar124) <= ABS(fVar123 - fVar119)) || (ABS(fVar112 - fVar124) <= fVar121))
      {
        iVar73 = (int)fVar112;
        if (ABS(fVar123 - fVar119) <= fVar121) {
          local_14f8._s_0.y = iVar26;
          local_14f8._s_0.x = iVar73;
        }
        else {
          local_14f8._s_0.y = -((int)fVar102 + iVar73);
          local_14f8._s_0.x = iVar73;
        }
      }
      else {
        local_14f8._s_0.y = iVar26;
        local_14f8._s_0.x = -(iVar26 + (int)fVar102);
      }
      bVar23 = param_4->pressed_buttons[0] | param_4->buttons[0];
      fVar112 = 0.0;
      if (param_4->click_blocked == false) {
        fVar123 = param_5 * 12.0 + 0.0;
        if ((bVar23 & 2) != 0) goto LAB_1400ac8eb;
LAB_1400ac196:
        if ((bVar23 & 4) == 0) goto LAB_1400ac8f7;
LAB_1400ac19e:
        fVar112 = fVar112 + param_5 * -12.0;
        uVar50 = param_4->pressed_buttons[0xe];
        uVar24 = (param_1->field11_0x18c).terraform_flags;
      }
      else {
        fVar123 = 0.0;
        if ((bVar23 & 2) == 0) goto LAB_1400ac196;
LAB_1400ac8eb:
        fVar112 = fVar123;
        if ((bVar23 & 4) != 0) goto LAB_1400ac19e;
LAB_1400ac8f7:
        uVar50 = param_4->pressed_buttons[0xe];
        uVar24 = (param_1->field11_0x18c).terraform_flags;
      }
      if ((char)uVar50 < '\0') {
        uVar24 = uVar24 ^ 0x20;
        (param_1->field11_0x18c).terraform_flags = uVar24;
      }
      if ((uVar24 & 0x20) == 0) {
        if ((fVar112 != 0.0) || (NAN(fVar112))) {
          fVar123 = *pfVar2;
          fVar113 = fVar123 * 0.0057735024;
          fVar102 = floorf(fVar124 - fVar113);
          fVar121 = floorf(fVar119 - fVar113);
          uVar25 = (int)fVar121 - 1;
          fVar121 = ceilf(fVar124 + fVar113);
          fVar124 = ceilf(fVar113 + fVar119);
          uVar94 = (int)fVar124 + 1;
          bVar98 = true;
          if ((uVar24 & 1) == 0) {
            if ((uVar24 & 2) == 0) {
              bVar98 = (uVar24 & 4) == 0;
              goto LAB_1400ac9ab;
            }
            bVar98 = false;
            if ((int)uVar25 <= (int)uVar94) goto LAB_1400ad2b5;
LAB_1400ac9bf:
            bVar14 = false;
          }
          else {
LAB_1400ac9ab:
            if ((int)uVar94 < (int)uVar25) goto LAB_1400ac9bf;
LAB_1400ad2b5:
            fVar123 = fVar123 * fVar123;
            bVar14 = false;
            do {
              if ((int)fVar102 + -1 <= (int)fVar121 + 1) {
                iVar26 = uVar25 + 1;
                iVar77 = uVar25 - 1;
                fVar124 = (float)(int)uVar25 * 100.0;
                fVar113 = (float)(int)uVar25 * 173.20508;
                fVar127 = (float)iVar26 * 100.0;
                fVar103 = (float)iVar26 * 173.20508;
                fVar119 = (float)iVar77 * 100.0;
                fVar128 = (float)iVar77 * 173.20508;
                iVar73 = (int)fVar102;
                do {
                  uVar24 = iVar73 - 1;
                  if ((((w.map.map_range.l.field0_0x0._s_0.x <= (int)uVar24) &&
                       ((int)uVar24 < w.map.map_range.u.field0_0x0._s_0.x)) &&
                      (w.map.map_range.l.field0_0x0._s_0.y <= (int)uVar25)) &&
                     ((int)uVar25 < w.map.map_range.u.field0_0x0._s_0.y)) {
                    fVar104 = (float)(int)uVar24 * 200.0 + 0.0;
                    fVar120 = (float)((uint)(float)(int)uVar24 & 0x80000000) + 0.0;
                    lVar43 = (((ulonglong)uVar25 << 0x20) -
                              ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20
                             ) * (CONCAT44(w.map.map_range.u.field0_0x0._s_0.y,
                                           w.map.map_range.u.field0_0x0._s_0.x) -
                                 CONCAT44(w.map.map_range.l.field0_0x0._s_0.y,
                                          w.map.map_range.l.field0_0x0._s_0.x)) +
                             ((ulonglong)uVar24 -
                             CONCAT44(w.map.map_range.l.field0_0x0._s_0.y,
                                      w.map.map_range.l.field0_0x0._s_0.x));
                    iVar91 = (int)lVar43;
                    fVar117 = w.map.wall_values[iVar91];
                    fVar125 = fVar116 - (fVar124 + fVar104);
                    fVar122 = fVar118 - (fVar113 + fVar120);
                    iVar66 = iVar91 >> 3;
                    bVar23 = (byte)lVar43;
                    if ((fVar122 * fVar122 + fVar125 * fVar125 + 0.0 < fVar123) ||
                       (iVar97._s_0.y = uVar25, iVar97._s_0.x = uVar24, iVar97 == local_14f8)) {
                      uVar24 = (param_1->field11_0x18c).terraform_flags;
                      fVar125 = 0.0;
                      if ((0.0 <= fVar112) || (((uVar24 & 1) == 0 || (fVar117 <= 0.0)))) {
                        fVar125 = fVar117;
                        if (((uVar24 & 1) != 0) && (fVar125 = 0.0, 0.0 <= fVar117)) {
                          fVar125 = fVar117;
                        }
                        fVar125 = (float)(~-(uint)(0.0 < fVar112) & (uint)fVar117 |
                                         (uint)fVar125 & -(uint)(0.0 < fVar112));
                      }
                      if (bVar98) {
                        fVar125 = (float)(-(uint)(fVar125 != 0.0) &
                                         *(uint *)(&__real_3f800000bf800000 +
                                                  (ulonglong)(0.0 < fVar125) * 4)) * -0.0 + fVar125
                                  + fVar112;
                        fVar125 = (float)(~-(uint)(0.0 <= fVar125) & 0x80000000) + fVar125;
                        fVar117 = 5.0;
                        if (fVar125 <= 5.0) {
                          fVar117 = fVar125;
                        }
                        fVar125 = -5.0;
                        if (-5.0 <= fVar117) {
                          fVar125 = fVar117;
                        }
                        w.map.wall_values[iVar91] = fVar125;
                        w.map.visual_wall_values[iVar91] = fVar125;
                        uVar24 = (param_1->field11_0x18c).terraform_flags;
                      }
                      if ((uVar24 & 2) != 0) {
                        fVar117 = w.map.flow[iVar91].field0_0x0._s_0.x;
                        fVar125 = w.map.flow[iVar91].field0_0x0._s_0.y;
                        if (fVar112 <= 0.0) {
                          fVar120 = SQRT(fVar125 * fVar125 + fVar117 * fVar117 + 0.0);
                          if (fVar120 <= -fVar112) {
                            w.map.flow[iVar91].field0_0x0 = (real_2_u_0)0x0;
                            goto LAB_1400adb00;
                          }
                          fVar120 = fVar112 / fVar120 + 1.0;
                          fVar117 = fVar117 * fVar120;
                          fVar125 = fVar120 * fVar125;
                        }
                        else {
                          fVar117 = fVar117 + fVar129 * (fVar100 / fVar115) * fVar112 * 0.1;
                          fVar125 = fVar125 + (fVar100 / fVar115) * fVar101 * fVar112 * 0.1;
                        }
                        rVar75.field0_0x0._s_0.y = fVar125;
                        rVar75.field0_0x0._s_0.x = fVar117;
                        w.map.flow[iVar91].field0_0x0 = rVar75.field0_0x0;
                      }
LAB_1400adb00:
                      bVar62 = *(byte *)&param_1->field11_0x18c;
                      w.map.edits[iVar66] = w.map.edits[iVar66] | (byte)(1 << (bVar23 & 7));
                      if ((bVar62 & 4) == 0) goto LAB_1400ad430;
                    }
                    else {
                      if ((!bVar98) && ((*(byte *)&param_1->field11_0x18c & 4) == 0))
                      goto LAB_1400ad430;
                      if (((w.map.map_range.u.field0_0x0._s_0.x <= iVar73 ||
                            iVar73 < w.map.map_range.l.field0_0x0._s_0.x) ||
                          (((int)uVar25 < w.map.map_range.l.field0_0x0._s_0.y ||
                           (w.map.map_range.u.field0_0x0._s_0.y <= (int)uVar25)))) ||
                         ((fVar122 = fVar116 - ((float)iVar73 * 200.0 + 0.0 + fVar124),
                          fVar125 = fVar118 - ((float)((uint)(float)iVar73 & 0x80000000) + 0.0 +
                                              fVar113),
                          fVar123 <= fVar125 * fVar125 + fVar122 * fVar122 + 0.0 &&
                          (iVar86._s_0.y = uVar25, iVar86._s_0.x = iVar73, iVar86 != local_14f8))))
                      {
                        if ((((w.map.map_range.u.field0_0x0._s_0.x <= (int)uVar24 ||
                               (int)uVar24 < w.map.map_range.l.field0_0x0._s_0.x) ||
                             (iVar26 < w.map.map_range.l.field0_0x0._s_0.y)) ||
                            (w.map.map_range.u.field0_0x0._s_0.y <= iVar26)) ||
                           ((fVar122 = fVar116 - (fVar104 + fVar127),
                            fVar125 = fVar118 - (fVar120 + fVar103),
                            fVar123 <= fVar125 * fVar125 + fVar122 * fVar122 + 0.0 &&
                            (iVar87._s_0.y = iVar26, iVar87._s_0.x = uVar24, iVar87 != local_14f8)))
                           ) {
                          iVar81 = iVar73 + -2;
                          if ((((w.map.map_range.u.field0_0x0._s_0.x <= iVar81 ||
                                 iVar81 < w.map.map_range.l.field0_0x0._s_0.x) ||
                               ((iVar26 < w.map.map_range.l.field0_0x0._s_0.y ||
                                (w.map.map_range.u.field0_0x0._s_0.y <= iVar26)))) ||
                              ((fVar122 = fVar116 - ((float)iVar81 * 200.0 + 0.0 + fVar127),
                               fVar125 = fVar118 - ((float)((uint)(float)iVar81 & 0x80000000) + 0.0
                                                   + fVar103),
                               fVar123 <= fVar125 * fVar125 + fVar122 * fVar122 + 0.0 &&
                               (iVar60._s_0.y = iVar26, iVar60._s_0.x = iVar81, iVar60 != local_14f8
                               )))) && ((((((w.map.map_range.u.field0_0x0._s_0.x <= iVar81 ||
                                            iVar81 < w.map.map_range.l.field0_0x0._s_0.x) ||
                                            (int)uVar25 < w.map.map_range.l.field0_0x0._s_0.y ||
                                           (w.map.map_range.u.field0_0x0._s_0.y <= (int)uVar25)) ||
                                          ((fVar122 = fVar116 - ((float)iVar81 * 200.0 + 0.0 +
                                                                fVar124),
                                           fVar125 = fVar118 - ((float)((uint)(float)iVar81 &
                                                                       0x80000000) + 0.0 + fVar113),
                                           fVar123 <= fVar125 * fVar125 + fVar122 * fVar122 + 0.0 &&
                                           (iVar61._s_0.y = uVar25, iVar61._s_0.x = iVar81,
                                           iVar61 != local_14f8)))) &&
                                         ((((w.map.map_range.u.field0_0x0._s_0.x <= (int)uVar24 ||
                                            (int)uVar24 < w.map.map_range.l.field0_0x0._s_0.x) ||
                                            iVar77 < w.map.map_range.l.field0_0x0._s_0.y ||
                                           (w.map.map_range.u.field0_0x0._s_0.y <= iVar77)) ||
                                          ((fVar125 = fVar116 - (fVar104 + fVar119),
                                           fVar120 = fVar118 - (fVar120 + fVar128),
                                           fVar123 <= fVar120 * fVar120 + fVar125 * fVar125 + 0.0 &&
                                           (iVar48._s_0.y = iVar77, iVar48._s_0.x = uVar24,
                                           iVar48 != local_14f8)))))) &&
                                        ((((w.map.map_range.u.field0_0x0._s_0.x <= iVar73 ||
                                           iVar73 < w.map.map_range.l.field0_0x0._s_0.x) ||
                                           iVar77 < w.map.map_range.l.field0_0x0._s_0.y ||
                                          (w.map.map_range.u.field0_0x0._s_0.y <= iVar77)) ||
                                         ((fVar120 = fVar116 - ((float)iVar73 * 200.0 + 0.0 +
                                                               fVar119),
                                          fVar125 = fVar118 - ((float)((uint)(float)iVar73 &
                                                                      0x80000000) + 0.0 + fVar128),
                                          fVar123 <= fVar125 * fVar125 + fVar120 * fVar120 + 0.0 &&
                                          (iVar49._s_0.y = iVar77, iVar49._s_0.x = iVar73,
                                          iVar49 != local_14f8)))))))) goto LAB_1400ad430;
                        }
                      }
                      if (fVar117 <= 5.0) {
                        if (fVar117 < -5.0) {
                          w.map.edits[iVar66] = w.map.edits[iVar66] | (byte)(1 << (bVar23 & 7));
                          fVar117 = -5.0;
                          goto joined_r0x0001400ad9f0;
                        }
                      }
                      else {
                        w.map.edits[iVar66] = w.map.edits[iVar66] | (byte)(1 << (bVar23 & 7));
                        fVar117 = 5.0;
joined_r0x0001400ad9f0:
                        if (bVar98) {
                          w.map.wall_values[iVar91] = fVar117;
                          w.map.visual_wall_values[iVar91] = fVar117;
                        }
                      }
                      if (((*(byte *)&param_1->field11_0x18c & 4) == 0) ||
                         (w.map.biomes[iVar91] != 0)) goto LAB_1400ad430;
                    }
                    uVar35 = w.field137_0x3f10.biome_types;
                    iVar66 = param_1->terraform_biome_index;
                    if (((w.map.flags[iVar91] & 1) != 0) ||
                       ((w.field137_0x3f10.biome_types[iVar66].flags & 1) != 0)) {
                      bVar14 = true;
                    }
                    w.map.biomes[iVar91] = iVar66;
                    prVar18 = w.map.color;
                    w.map.color[iVar91].field0_0x0._s_0.z =
                         (((biome_type *)(uVar35 + (longlong)iVar66 * 0x5cac))->color).field0_0x0.
                         _s_0.z;
                    prVar18[iVar91].field0_0x0.xy.field0_0x0 =
                         (((biome_type *)(uVar35 + (longlong)iVar66 * 0x5cac))->color).field0_0x0.xy
                         .field0_0x0;
                    w.map.light[iVar91] =
                         ((biome_type *)(uVar35 + (longlong)iVar66 * 0x5cac))->light;
                    w.map.flags[iVar91] =
                         ((biome_type *)(uVar35 + (longlong)iVar66 * 0x5cac))->flags;
                    w.map.bumpyness[iVar91] =
                         ((biome_type *)(uVar35 + (longlong)iVar66 * 0x5cac))->bumpyness;
                    w.map.temperature[iVar91] =
                         ((biome_type *)(uVar35 + (longlong)iVar66 * 0x5cac))->temperature;
                  }
LAB_1400ad430:
                  iVar73 = iVar73 + 1;
                } while ((int)fVar121 + 3 != iVar73);
              }
              bVar99 = uVar25 != uVar94;
              uVar25 = uVar25 + 1;
            } while (bVar99);
          }
          if (bVar98) {
            lVar43 = CONCAT44(w.map.map_range.u.field0_0x0._s_0.y,
                              w.map.map_range.u.field0_0x0._s_0.x);
            iVar26 = w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_;
            uVar82 = (ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y;
            glBindTexture(0xde1,param_2->wall_texture);
            uVar35 = CONCAT44(uVar74,(int)(lVar43 - (uVar82 << 0x20) >> 0x20));
            uVar133 = CONCAT44(uVar70,0x1406);
            uVar55 = CONCAT44(uVar42,0x1903);
            _Dst = (real_2_u_0 *)((ulonglong)_Dst & 0xffffffff00000000);
            glTexImage2D(0xde1,0,0x822e,iVar26,uVar35,_Dst,uVar55,uVar133,w.map.visual_wall_values);
            uVar42 = (undefined4)((ulonglong)uVar55 >> 0x20);
            uVar70 = (undefined4)((ulonglong)uVar133 >> 0x20);
            uVar74 = (undefined4)((ulonglong)uVar35 >> 0x20);
            glBindTexture(0xde1,0);
          }
          uVar24 = (param_1->field11_0x18c).terraform_flags;
          if ((uVar24 & 2) != 0) {
            lVar43 = CONCAT44(w.map.map_range.u.field0_0x0._s_0.y,
                              w.map.map_range.u.field0_0x0._s_0.x);
            uVar82 = (ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y;
            iVar26 = w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_;
            glBindTexture(0xde1,param_2->map_flow_texture);
            glTexImage2D(0xde1,0,0x8230,iVar26,
                         CONCAT44(uVar74,(int)(lVar43 - (uVar82 << 0x20) >> 0x20)),
                         (ulonglong)_Dst & 0xffffffff00000000,CONCAT44(uVar42,0x8227),
                         CONCAT44(uVar70,0x1406),w.map.flow);
            glBindTexture(0xde1,0);
            uVar24 = (param_1->field11_0x18c).terraform_flags;
          }
          if ((uVar24 & 4) != 0) {
            update_biomes(param_2,&w.map);
          }
          if (bVar14) {
            set_safe_zone_lines(&w.map);
          }
          w.map.map_edits_number = w.map.map_edits_number + 1;
        }
      }
      else {
        if ((fVar112 != 0.0) || (NAN(fVar112))) {
          fVar123 = *pfVar2;
          fVar101 = fVar123 * 0.0057735024;
          fVar100 = floorf(fVar124 - fVar101);
          fVar129 = floorf(fVar119 - fVar101);
          uVar24 = (int)fVar129 - 1;
          fVar129 = ceilf(fVar119 + fVar101);
          if ((int)uVar24 <= (int)((int)fVar129 + 1U)) {
            iVar73 = (int)fVar100 + -1;
            fVar100 = ceilf(fVar124 + fVar101);
            iVar26 = -(int)fVar100;
            do {
              if (iVar73 <= (int)fVar100 + 1) {
                fVar115 = (float)(int)uVar24 * 100.0;
                fVar101 = (float)(int)uVar24 * 173.20508;
                uVar42 = w.map.map_range.l.field0_0x0._s_0.x;
                uVar70 = w.map.map_range.l.field0_0x0._s_0.y;
                uVar74 = w.map.map_range.u.field0_0x0._s_0.x;
                uVar78 = w.map.map_range.u.field0_0x0._s_0.y;
                iVar77 = iVar73;
                if (0.0 < fVar112) {
                  do {
                    if (((((int)uVar42 <= iVar77) && (iVar77 < (int)uVar74)) &&
                        ((int)uVar70 <= (int)uVar24)) &&
                       (((int)uVar24 < (int)uVar78 &&
                        ((fVar121 = fVar116 - ((float)iVar77 * 200.0 + 0.0 + fVar115),
                         fVar102 = fVar118 - ((float)((uint)(float)iVar77 & 0x80000000) + 0.0 +
                                             fVar101),
                         fVar102 * fVar102 + fVar121 * fVar121 + 0.0 < fVar123 * fVar123 ||
                         (iVar84._s_0.y = uVar24, iVar84._s_0.x = iVar77, iVar84 == local_14f8))))))
                    {
                      iVar91 = (int)(((ulonglong)uVar24 << 0x20) -
                                     ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20)
                                    >> 0x20) *
                               (w.map.map_range.u.field0_0x0._s_0.x -
                               w.map.map_range.l.field0_0x0._0_4_) +
                               (iVar77 - w.map.map_range.l.field0_0x0._0_4_);
                      w.map.save_hexes[iVar91 >> 3] =
                           w.map.save_hexes[iVar91 >> 3] | (byte)(1 << ((byte)iVar91 & 7));
                      uVar42 = w.map.map_range.l.field0_0x0._s_0.x;
                      uVar70 = w.map.map_range.l.field0_0x0._s_0.y;
                      uVar74 = w.map.map_range.u.field0_0x0._s_0.x;
                      uVar78 = w.map.map_range.u.field0_0x0._s_0.y;
                    }
                    iVar91 = iVar77 + iVar26;
                    iVar77 = iVar77 + 1;
                  } while (iVar91 != 1);
                }
                else {
                  do {
                    if (((((int)uVar42 <= iVar77) && (iVar77 < (int)uVar74)) &&
                        (((int)uVar70 <= (int)uVar24 && ((int)uVar24 < (int)uVar78)))) &&
                       ((fVar121 = fVar116 - ((float)iVar77 * 200.0 + 0.0 + fVar115),
                        fVar102 = fVar118 - ((float)((uint)(float)iVar77 & 0x80000000) + 0.0 +
                                            fVar101),
                        fVar102 * fVar102 + fVar121 * fVar121 + 0.0 < fVar123 * fVar123 ||
                        (iVar85._s_0.y = uVar24, iVar85._s_0.x = iVar77, iVar85 == local_14f8)))) {
                      iVar91 = (int)(((ulonglong)uVar24 << 0x20) -
                                     ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20)
                                    >> 0x20) *
                               (w.map.map_range.u.field0_0x0._s_0.x -
                               w.map.map_range.l.field0_0x0._0_4_) +
                               (iVar77 - w.map.map_range.l.field0_0x0._0_4_);
                      w.map.save_hexes[iVar91 >> 3] =
                           w.map.save_hexes[iVar91 >> 3] & ~(byte)(1 << ((byte)iVar91 & 7));
                      uVar42 = w.map.map_range.l.field0_0x0._s_0.x;
                      uVar70 = w.map.map_range.l.field0_0x0._s_0.y;
                      uVar74 = w.map.map_range.u.field0_0x0._s_0.x;
                      uVar78 = w.map.map_range.u.field0_0x0._s_0.y;
                    }
                    iVar91 = iVar77 + iVar26;
                    iVar77 = iVar77 + 1;
                  } while (iVar91 != 1);
                }
              }
              bVar98 = uVar24 != (int)fVar129 + 1U;
              uVar24 = uVar24 + 1;
            } while (bVar98);
          }
          uVar24 = (int)((longlong)w.map.save_origin.field0_0x0 -
                         ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20) *
                   (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_) +
                   (w.map.save_origin.field0_0x0._0_4_ - w.map.map_range.l.field0_0x0._0_4_);
          if ((w.map.save_hexes[(int)uVar24 >> 3] >> (uVar24 & 7) & 1) == 0) {
            w.map.save_origin.field0_0x0 = (int_2_u_0)(int_2_u_0)local_14f8._s_0;
          }
        }
        if ((char)param_4->pressed_buttons[9] < '\0') {
          w.map.save_origin.field0_0x0 = (int_2_u_0)(int_2_u_0)local_14f8._s_0;
        }
        if ((param_4->pressed_buttons[10] & 1) != 0) {
          _Var65 = (__uint64)
                   ((int)(CONCAT44(w.map.map_range.u.field0_0x0._s_0.y,
                                   w.map.map_range.u.field0_0x0._s_0.x) -
                          ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20) *
                   (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_));
          TlsGetValue(tls_index);
          puVar40 = stalloc_(_Var65);
          lVar43 = 0;
          memset(puVar40,0,_Var65);
          piVar41 = (int_2_u_0 *)stalloc_(0xfd00);
          piVar41->_s_0 = (int_2_u_0_s_0)local_14f8;
          puVar40[(int)((longlong)local_14f8 -
                        ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20) *
                  (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_) +
                  (local_14f8._s_0.x - w.map.map_range.l.field0_0x0._0_4_)] = '\x01';
          uVar24 = 1;
          do {
            iVar69 = piVar41[lVar43]._s_0;
            iVar26 = iVar69.x;
            uVar25 = iVar26 + 1;
            iVar73 = iVar69.y;
            if ((((w.map.map_range.l.field0_0x0._s_0.x <= (int)uVar25) &&
                 ((int)uVar25 < w.map.map_range.u.field0_0x0._s_0.x)) &&
                (w.map.map_range.l.field0_0x0._s_0.y <= iVar73)) &&
               (iVar73 < w.map.map_range.u.field0_0x0._s_0.y)) {
              uVar94 = (int)((longlong)iVar69 -
                             ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20)
                       * (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                       + (uVar25 - w.map.map_range.l.field0_0x0._0_4_);
              if (((puVar40[(int)uVar94] != '\0') || (w.map.wall_values[(int)uVar94] <= 0.0)) ||
                 ((w.map.save_hexes[(int)uVar94 >> 3] >> (uVar94 & 7) & 1) != 0)) {
LAB_1400ac470:
                puVar40[(int)uVar94] = '\x01';
                goto LAB_1400ac475;
              }
              piVar41[(int)uVar24] =
                   (int_2_u_0)((ulonglong)iVar69 & 0xffffffff00000000 | (ulonglong)uVar25);
              if ((int)uVar24 < 0x1f9f) {
                uVar24 = uVar24 + 1;
                goto LAB_1400ac470;
              }
LAB_1400adbdb:
              pqVar16 = ac.queued_sounds;
              uVar24 = (DAT_1401fd1cc >> 0x10 ^ DAT_1401fd1cc) * 0x7feb352d;
              uVar24 = (uVar24 >> 0xf ^ uVar24) * -0x7b935975;
              DAT_1401fd1cc = uVar24 >> 0x10 ^ uVar24;
              uVar82 = (ulonglong)DAT_1401fd1cc;
              if ((((ac.initialized == true) && (0 < sounds.error.n_samples)) &&
                  (sounds.error.data != (short *)0x0)) &&
                 (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
                uVar24 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
                ac.queued_sounds[(int)uVar24].sound = (sound_t *)0x1401fe4e0;
                pqVar16[(int)uVar24].params.volume = 1.0;
                pqVar16[(int)uVar24].params.delay = 0.0;
                pqVar16[(int)uVar24].params.pitch_shift =
                     (float)uVar82 * 2.3283064e-10 + (float)uVar82 * 2.3283064e-10 + -1.0;
                pqVar15 = pqVar16 + (int)uVar24;
                (pqVar15->params).lowpass_dist = 0.0;
                (pqVar15->params).type = 0;
                *(undefined8 *)(&(pqVar15->params).lowpass_dist + 2) = 0;
                *(undefined8 *)((longlong)pqVar16[(int)uVar24].filtered + 5) = 0;
                LOCK();
                ac.last_queued_sound = ac.last_queued_sound + 1;
                UNLOCK();
              }
              goto LAB_1400adcb7;
            }
LAB_1400ac475:
            iVar80 = (int_2_u_0_s_0)((longlong)iVar69 + 0x100000000);
            iVar77 = iVar80.y;
            if (((w.map.map_range.l.field0_0x0._s_0.x <= iVar26) &&
                (iVar26 < w.map.map_range.u.field0_0x0._s_0.x)) &&
               ((w.map.map_range.l.field0_0x0._s_0.y <= iVar77 &&
                (iVar77 < w.map.map_range.u.field0_0x0._s_0.y)))) {
              uVar94 = (int)((longlong)iVar80 -
                             ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20)
                       * (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                       + (iVar26 - w.map.map_range.l.field0_0x0._0_4_);
              if (((puVar40[(int)uVar94] == '\0') && (0.0 < w.map.wall_values[(int)uVar94])) &&
                 ((w.map.save_hexes[(int)uVar94 >> 3] >> (uVar94 & 7) & 1) == 0)) {
                piVar41[(int)uVar24]._s_0 = iVar80;
                if (0x1f9e < (int)uVar24) goto LAB_1400adbdb;
                uVar24 = uVar24 + 1;
              }
              puVar40[(int)uVar94] = '\x01';
            }
            uVar94 = iVar26 - 1;
            if (((w.map.map_range.l.field0_0x0._s_0.x <= (int)uVar94) &&
                ((int)uVar94 < w.map.map_range.u.field0_0x0._s_0.x)) &&
               ((w.map.map_range.l.field0_0x0._s_0.y <= iVar77 &&
                (iVar77 < w.map.map_range.u.field0_0x0._s_0.y)))) {
              uVar27 = (int)((longlong)iVar80 -
                             ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20)
                       * (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                       + (uVar94 - w.map.map_range.l.field0_0x0._0_4_);
              if (((puVar40[(int)uVar27] == '\0') && (0.0 < w.map.wall_values[(int)uVar27])) &&
                 ((w.map.save_hexes[(int)uVar27 >> 3] >> (uVar27 & 7) & 1) == 0)) {
                iVar80 = (int_2_u_0_s_0)((ulonglong)iVar80 & 0xffffffff00000000 | (ulonglong)uVar94)
                ;
                piVar41[(int)uVar24]._s_0 = iVar80;
                if (0x1f9e < (int)uVar24) goto LAB_1400adbdb;
                uVar24 = uVar24 + 1;
              }
              puVar40[(int)uVar27] = '\x01';
            }
            uVar27 = iVar80.x;
            auVar106._4_4_ = w.map.map_range.l.field0_0x0._s_0.y;
            auVar106._0_4_ = w.map.map_range.l.field0_0x0._s_0.x;
            auVar106._8_4_ = w.map.map_range.u.field0_0x0._s_0.x;
            auVar106._12_4_ = w.map.map_range.u.field0_0x0._s_0.y;
            auVar109._0_8_ =
                 CONCAT44(-(uint)(iVar73 < w.map.map_range.l.field0_0x0._s_0.y),
                          -(uint)((int)uVar94 < w.map.map_range.l.field0_0x0._s_0.x)) ^
                 0xffffffffffffffff;
            auVar109._8_4_ = -(uint)((int)uVar94 < w.map.map_range.u.field0_0x0._s_0.x);
            auVar109._12_4_ = -(uint)(iVar73 < w.map.map_range.u.field0_0x0._s_0.y);
            iVar73 = movmskps(iVar73,auVar109);
            if (iVar73 == 0xf) {
              uVar76 = (int)((longlong)iVar69 -
                             ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20)
                       * (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                       + (uVar94 - w.map.map_range.l.field0_0x0._0_4_);
              uVar63 = uVar24;
              uVar27 = uVar76;
              if (((puVar40[(int)uVar76] == '\0') && (0.0 < w.map.wall_values[(int)uVar76])) &&
                 (uVar27 = uVar76 & 7, (w.map.save_hexes[(int)uVar76 >> 3] >> uVar27 & 1) == 0)) {
                piVar41[(int)uVar24] =
                     (int_2_u_0)((ulonglong)iVar69 & 0xffffffff00000000 | (ulonglong)uVar94);
                if (0x1f9e < (int)uVar24) goto LAB_1400adbdb;
                uVar63 = uVar24 + 1;
                uVar27 = uVar24;
              }
              uVar24 = uVar63;
              puVar40[(int)uVar76] = '\x01';
              auVar106._4_4_ = w.map.map_range.l.field0_0x0._s_0.y;
              auVar106._0_4_ = w.map.map_range.l.field0_0x0._s_0.x;
              auVar106._8_4_ = w.map.map_range.u.field0_0x0._s_0.x;
              auVar106._12_4_ = w.map.map_range.u.field0_0x0._s_0.y;
            }
            iVar80 = (int_2_u_0_s_0)((longlong)iVar69 - 0x100000000);
            iVar73 = iVar80.y;
            auVar110._0_8_ =
                 CONCAT44(-(uint)(iVar73 < auVar106._4_4_),-(uint)(iVar26 < auVar106._0_4_)) ^
                 0xffffffffffffffff;
            auVar110._8_4_ = -(uint)(iVar26 < auVar106._8_4_);
            auVar110._12_4_ = -(uint)(iVar73 < auVar106._12_4_);
            iVar77 = movmskps(uVar27,auVar110);
            if (iVar77 == 0xf) {
              uVar94 = (int)((longlong)iVar80 -
                             ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20)
                       * (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                       + (iVar26 - w.map.map_range.l.field0_0x0._0_4_);
              iVar69 = (int_2_u_0_s_0)(longlong)(int)uVar94;
              if (((puVar40[(longlong)iVar69] == '\0') &&
                  (0.0 < w.map.wall_values[(longlong)iVar69])) &&
                 ((w.map.save_hexes[(int)uVar94 >> 3] >> (uVar94 & 7) & 1) == 0)) {
                piVar41[(int)uVar24]._s_0 = iVar80;
                if (0x1f9e < (int)uVar24) goto LAB_1400adbdb;
                uVar24 = uVar24 + 1;
              }
              puVar40[(longlong)iVar69] = '\x01';
              auVar106._4_4_ = w.map.map_range.l.field0_0x0._s_0.y;
              auVar106._0_4_ = w.map.map_range.l.field0_0x0._s_0.x;
              auVar106._8_4_ = w.map.map_range.u.field0_0x0._s_0.x;
              auVar106._12_4_ = w.map.map_range.u.field0_0x0._s_0.y;
            }
            auVar111._0_8_ =
                 CONCAT44(-(uint)(iVar73 < auVar106._4_4_),-(uint)((int)uVar25 < auVar106._0_4_)) ^
                 0xffffffffffffffff;
            auVar111._8_4_ = -(uint)((int)uVar25 < auVar106._8_4_);
            auVar111._12_4_ = -(uint)(iVar73 < auVar106._12_4_);
            iVar26 = movmskps(iVar69.x,auVar111);
            if (iVar26 == 0xf) {
              uVar94 = (int)((longlong)iVar80 -
                             ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20)
                       * (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                       + (uVar25 - w.map.map_range.l.field0_0x0._0_4_);
              if (((puVar40[(int)uVar94] == '\0') && (0.0 < w.map.wall_values[(int)uVar94])) &&
                 ((w.map.save_hexes[(int)uVar94 >> 3] >> (uVar94 & 7) & 1) == 0)) {
                piVar41[(int)uVar24] =
                     (int_2_u_0)((ulonglong)iVar80 & 0xffffffff00000000 | (ulonglong)uVar25);
                if (0x1f9e < (int)uVar24) goto LAB_1400adbdb;
                uVar24 = uVar24 + 1;
              }
              puVar40[(int)uVar94] = '\x01';
            }
            lVar43 = lVar43 + 1;
          } while (lVar43 < (int)uVar24);
          if (0 < (int)uVar24) {
            uVar82 = 0;
            do {
              iVar69 = piVar41[uVar82]._s_0;
              iVar73 = iVar69.x;
              iVar26 = (int)((longlong)iVar69 -
                             ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20)
                       * (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                       + (iVar73 - w.map.map_range.l.field0_0x0._0_4_);
              w.map.save_hexes[iVar26 >> 3] =
                   w.map.save_hexes[iVar26 >> 3] | (byte)(1 << ((byte)iVar26 & 7));
              iVar26 = iVar73 + 1;
              iVar77 = iVar69.y;
              if ((iVar77 < w.map.map_range.u.field0_0x0._s_0.y &&
                  iVar26 < w.map.map_range.u.field0_0x0._s_0.x) &&
                  (w.map.map_range.l.field0_0x0._s_0.y <= iVar77 &&
                  w.map.map_range.l.field0_0x0._s_0.x <= iVar26)) {
                iVar91 = (int)((longlong)iVar69 -
                               ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >>
                              0x20) *
                         (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                         + (iVar26 - w.map.map_range.l.field0_0x0._0_4_);
                w.map.save_hexes[iVar91 >> 3] =
                     w.map.save_hexes[iVar91 >> 3] | (byte)(1 << ((byte)iVar91 & 7));
              }
              lVar43 = (longlong)iVar69 + 0x100000000;
              iVar91 = (int)((ulonglong)lVar43 >> 0x20);
              if (iVar91 < w.map.map_range.u.field0_0x0._s_0.y &&
                  ((iVar73 < w.map.map_range.u.field0_0x0._s_0.x &&
                   w.map.map_range.l.field0_0x0._s_0.x <= iVar73) &&
                  w.map.map_range.l.field0_0x0._s_0.y <= iVar91)) {
                iVar66 = (int)(lVar43 - ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y <<
                                        0x20) >> 0x20) *
                         (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                         + (iVar73 - w.map.map_range.l.field0_0x0._0_4_);
                w.map.save_hexes[iVar66 >> 3] =
                     w.map.save_hexes[iVar66 >> 3] | (byte)(1 << ((byte)iVar66 & 7));
              }
              iVar66 = iVar73 + -1;
              if (((w.map.map_range.l.field0_0x0._s_0.x <= iVar66) &&
                  (iVar66 < w.map.map_range.u.field0_0x0._s_0.x)) &&
                 ((w.map.map_range.l.field0_0x0._s_0.y <= iVar91 &&
                  (iVar91 < w.map.map_range.u.field0_0x0._s_0.y)))) {
                iVar91 = (int)(lVar43 - ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y <<
                                        0x20) >> 0x20) *
                         (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                         + (iVar66 - w.map.map_range.l.field0_0x0._0_4_);
                w.map.save_hexes[iVar91 >> 3] =
                     w.map.save_hexes[iVar91 >> 3] | (byte)(1 << ((byte)iVar91 & 7));
              }
              if (((w.map.map_range.l.field0_0x0._s_0.x <= iVar66) &&
                  (iVar66 < w.map.map_range.u.field0_0x0._s_0.x)) &&
                 ((w.map.map_range.l.field0_0x0._s_0.y <= iVar77 &&
                  (iVar77 < w.map.map_range.u.field0_0x0._s_0.y)))) {
                iVar77 = (int)((longlong)iVar69 -
                               ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >>
                              0x20) *
                         (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                         + (iVar66 - w.map.map_range.l.field0_0x0._0_4_);
                w.map.save_hexes[iVar77 >> 3] =
                     w.map.save_hexes[iVar77 >> 3] | (byte)(1 << ((byte)iVar77 & 7));
              }
              lVar43 = (longlong)iVar69 + -0x100000000;
              iVar77 = (int)((ulonglong)lVar43 >> 0x20);
              if ((((w.map.map_range.l.field0_0x0._s_0.x <= iVar73) &&
                   (iVar73 < w.map.map_range.u.field0_0x0._s_0.x)) &&
                  (w.map.map_range.l.field0_0x0._s_0.y <= iVar77)) &&
                 (iVar77 < w.map.map_range.u.field0_0x0._s_0.y)) {
                iVar73 = (int)(lVar43 - ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y <<
                                        0x20) >> 0x20) *
                         (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                         + (iVar73 - w.map.map_range.l.field0_0x0._0_4_);
                w.map.save_hexes[iVar73 >> 3] =
                     w.map.save_hexes[iVar73 >> 3] | (byte)(1 << ((byte)iVar73 & 7));
              }
              if (((w.map.map_range.l.field0_0x0._s_0.x <= iVar26) &&
                  (iVar26 < w.map.map_range.u.field0_0x0._s_0.x)) &&
                 ((w.map.map_range.l.field0_0x0._s_0.y <= iVar77 &&
                  (iVar77 < w.map.map_range.u.field0_0x0._s_0.y)))) {
                iVar26 = (int)(lVar43 - ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y <<
                                        0x20) >> 0x20) *
                         (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_)
                         + (iVar26 - w.map.map_range.l.field0_0x0._0_4_);
                w.map.save_hexes[iVar26 >> 3] =
                     w.map.save_hexes[iVar26 >> 3] | (byte)(1 << ((byte)iVar26 & 7));
              }
              uVar82 = uVar82 + 1;
            } while (uVar24 != uVar82);
          }
LAB_1400adcb7:
          stunalloc(piVar41);
          stunalloc(puVar40);
        }
      }
    }
    bVar98 = true;
    if (bVar22) goto LAB_1400acab1;
  }
  else {
LAB_1400a80ca:
    uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
    iVar26 = param_1->tool;
joined_r0x0001400a9b9f:
    if (iVar26 == 4) goto LAB_1400a80d7;
LAB_1400a9ba5:
    if (iVar26 != 6) goto LAB_1400a8326;
LAB_1400a9bae:
    param_4->cursor_type = 6;
    uVar24 = w.translations.max_entries;
    ppcVar19 = w.translations.keys;
    pcVar51 = "RB";
    if (w.use_gamepad == 0) {
      pcVar51 = "Ctrl";
    }
    uVar82 = 0x3ee98da9 % (ulonglong)w.translations.max_entries;
    uVar95 = uVar82;
    do {
      uVar88 = (ulonglong)(int)uVar95;
      if ((ppcVar19[uVar88] == (char *)0x0) ||
         (iVar26 = strcmp(ppcVar19[uVar88],"prompt_delete"), iVar26 == 0)) break;
      uVar25 = (int)uVar95 + 1;
      uVar95 = (ulonglong)uVar25;
      if (uVar25 == uVar24) {
        uVar95 = 0;
      }
      uVar88 = uVar82;
    } while ((int)uVar95 != (int)uVar82);
    if (w.translations.values[uVar88].text == (char **)0x0) {
      pcVar44 = unknown_string;
    }
    else {
      pcVar8 = w.translations.values[uVar88].text[w.language_index];
      pcVar44 = unknown_string;
      if (pcVar8 != (char *)0x0) {
        pcVar44 = pcVar8;
      }
    }
    snprintf(local_b68,0x100,pcVar44,pcVar51);
    local_1068._0_8_ = 0;
    local_1068.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_1068._16_8_ = 0;
    local_1068.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_1068._48_8_ = 0;
    local_1068._56_8_ = 0;
    local_1068.wrap_indent = 0.0;
    local_1068._8_8_ = 0x3b03126f00000000;
    local_1068._32_8_ = 0x3f800000;
    _Dst = local_3c8;
    memcpy(_Dst,_Src,0xb8);
    local_1108._s_0.x = 1.0;
    local_1108._s_0.y = 1.0;
    local_1108._s_0.z = 1.0;
    local_1108._s_0.w = 1.0;
    ptVar131 = &local_1068;
    draw_text(local_b68,0.0,-0.8,(real_4 *)&local_1108._s_0,(real_2)0x0,(font_info *)&_Dst->_s_0,
              ptVar131);
    pbVar30 = get_best_hovered_body(rVar46,fVar102);
    uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
    if (pbVar30 != (body *)0x0) {
      local_12a8._4_4_ =
           ((pbVar30->cost_centroid).field0_0x0._s_0.y - (param_2->camera_pos).field0_0x0._s_0.y) *
           fVar102;
      local_12a8._0_4_ =
           ((pbVar30->cost_centroid).field0_0x0._s_0.x - (param_2->camera_pos).field0_0x0._s_0.x) *
           fVar102;
      local_1118._s_0.x = 1.0;
      local_1118._s_0.y = 1.0;
      local_1118._s_0.z = 1.0;
      local_1118._s_0.w = 1.0;
      local_12a8._s_0.z = 0.0;
      draw_ring(param_3,(real_3 *)&local_12a8._s_0,0.05,0.06,(real_4 *)&local_1118._s_0);
      uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
      if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
        if (0 < w.n_cells) {
          uVar24 = w.n_cells + 1;
          uVar35 = w.field67_0x3b28.cells;
          do {
            uVar25 = uVar24 - 2 >> 4;
            uVar82 = (ulonglong)(uVar24 - 2 & 0xf);
            if ((((cell *)(uVar35 + (ulonglong)uVar25 * 0x2140))->field1_0x40).body_id_packed
                [uVar82] == pbVar30->id) {
              delete_cell((cell *)((longlong)
                                   &((cell *)(uVar35 + (ulonglong)uVar25 * 0x2140))->field0_0x0 +
                                  uVar82 * 4),false);
              uVar35 = w.field67_0x3b28.cells;
            }
            uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
            uVar24 = uVar24 - 1;
          } while (1 < uVar24);
        }
        delete_body(pbVar30);
        param_4->click_blocked = true;
        if ((((param_4->pressed_buttons[2] | param_4->buttons[2]) & 2) == 0) &&
           (((param_4->gamepad).buttons & 0x200) == 0)) {
          param_1->tool = -1;
        }
      }
    }
    iVar26 = param_1->tool;
    if (iVar26 == 7) goto LAB_1400a832f;
LAB_1400a9e8b:
    if (iVar26 != 8) goto LAB_1400a8429;
LAB_1400a9e94:
    if (local_14f0 != (body *)0x0) {
      piVar36 = (icon_render_info *)stalloc_((longlong)n_materials * 0x50);
      piVar37 = (icon_render_info *)stalloc_((longlong)n_mutation_types * 0x28);
      if (DAT_14020d9bc < 1) {
        local_14b8._0_4_ = 0;
        fVar124 = (float)(int)((uint)(9 < (n_mutation_types + -2) % 0x13) +
                              ((n_mutation_types + -2) / 0x13) * 2) * 0.5 * 0.8660254 * 0.2;
        bVar22 = false;
        uVar82 = 0;
        fVar121 = fVar124;
        if (1 < n_mutation_types) {
          uVar24 = n_mutation_types - 1;
          fVar119 = -0.90000004;
          uVar95 = 1;
          uVar88 = 0;
          bVar22 = false;
          do {
            if (gamepad_anchors == (real_2 *)0x0) {
              max_gamepad_anchors = 0x400;
              gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
              if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400aa48c;
            }
            else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400aa48c:
              lVar43 = (longlong)n_gamepad_anchors;
              rVar46.field0_0x0._s_0.y = fVar121;
              rVar46.field0_0x0._s_0.x = fVar119;
              n_gamepad_anchors = n_gamepad_anchors + 1;
              gamepad_anchors[lVar43].field0_0x0 = rVar46.field0_0x0;
            }
            fVar113 = (param_4->mouse).field0_0x0._s_0.x - fVar119;
            fVar128 = (param_4->mouse).field0_0x0._s_0.y - fVar121;
            fVar103 = 0.07;
            iVar26 = (int)uVar95;
            if (fVar128 * fVar128 + fVar113 * fVar113 + 0.0 <= 0.0049) {
              param_4->hover_blocked = true;
              (param_1->tooltip).last_hovered_index = iVar26;
              (param_1->tooltip).last_hovered_type = 1;
              (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.x = fVar119;
              (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.y = fVar121;
              if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
                param_1->mutation_r_dot[uVar95] = param_1->mutation_r_dot[uVar95] + -10.0;
                DAT_14020da00 = 0;
                DAT_14020d9bc = mutations_list[uVar95].n_imbues;
                DAT_14020da04 = iVar26;
                if (DAT_14020d9bc == 0) {
                  give_mutation(local_14f0,iVar26,(int *)0x0,0,false);
                }
                param_4->click_blocked = true;
              }
              if ((param_4->right_click_blocked == false) &&
                 ((param_4->pressed_buttons[0] & 4) != 0)) {
                lVar43 = (longlong)w.body_auxiliary_size * -0x2c8590b21642c859 *
                         ((longlong)local_14f0 - w.bodies.field3_0x20._0_8_ >> 5);
                uVar50 = w.field64_0x3af0.body_auxiliary_data[uVar95 + lVar43];
                if (uVar50 != '\0') {
                  local_1458._0_8_ = uVar88;
                  uVar25 = (local_14f0->field75_0x2d0).mutation_items.n_items;
                  iVar73 = uVar25 + 1;
                  lVar45 = 0x24;
                  do {
                    lVar71 = lVar45;
                    iVar73 = iVar73 + -1;
                    if (iVar73 < 1) goto LAB_1400aa72b;
                    pmVar34 = (local_14f0->field75_0x2d0).mutation_items.items;
                    iVar77 = *(int *)((longlong)pmVar34[(ulonglong)uVar25 - 2].imbues + lVar71 + -4)
                    ;
                    lVar45 = lVar71 + -0x24;
                  } while ((mutations_list[iVar77].id._s_0.lo != mutations_list[uVar95].id._s_0.lo)
                          || (mutations_list[iVar77].id._s_0.hi != mutations_list[uVar95].id._s_0.hi
                             ));
                  memcpy((void *)((longlong)pmVar34[(ulonglong)uVar25 - 2].imbues + lVar71 + -4),
                         (void *)((longlong)pmVar34[(ulonglong)uVar25 - 1].imbues + lVar71 + -4),
                         -lVar45);
                  piVar72 = &(local_14f0->field75_0x2d0).mutation_items.n_items;
                  *piVar72 = *piVar72 + -1;
                  lVar43 = (longlong)w.body_auxiliary_size * -0x2c8590b21642c859 *
                           ((longlong)local_14f0 - w.bodies.field3_0x20._0_8_ >> 5);
                  uVar50 = w.field64_0x3af0.body_auxiliary_data[uVar95 + lVar43];
LAB_1400aa72b:
                  w.field64_0x3af0.body_auxiliary_data[uVar95 + lVar43] = uVar50 + 0xff;
                }
                param_4->right_click_blocked = true;
              }
              bVar22 = true;
              fVar103 = 0.084;
            }
            pfVar64 = param_1->mutation_r;
            pfVar10 = param_1->mutation_r_dot;
            fVar113 = expf(param_5 * -10.0);
            fVar125 = pfVar64[uVar95] - fVar103;
            fVar117 = pfVar10[uVar95] / 300.0;
            fVar128 = cosf(local_1504);
            fVar127 = sinf(local_1504);
            pfVar64[uVar95] = (fVar125 * fVar128 + fVar117 * fVar127) * fVar113 + fVar103;
            pfVar10[uVar95] = (fVar117 * fVar128 - fVar125 * fVar127) * 300.0 * fVar113;
            rVar32 = (real_2_u_0)0x3e99999a3e99999a;
            uVar35 = 0x3e99999a3e99999a;
            if (w.field64_0x3af0.body_auxiliary_data
                [uVar95 + (longlong)w.body_auxiliary_size * -0x2c8590b21642c859 *
                          ((longlong)local_14f0 - w.bodies.field3_0x20._0_8_ >> 5)] != '\0') {
              rVar32 = (real_2_u_0)0x3f8000003f800000;
              uVar35 = 0x3f8000003f800000;
              if ((char)w.field64_0x3af0.body_auxiliary_data
                        [uVar95 + (longlong)w.body_auxiliary_size * -0x2c8590b21642c859 *
                                  ((longlong)local_14f0 - w.bodies.field3_0x20._0_8_ >> 5)] < '\0')
              {
                rVar32 = (real_2_u_0)0x3f8000003f800000;
                uVar35 = 0x3f80000000000000;
              }
            }
            fVar113 = param_1->mutation_r[uVar95];
            rVar114 = mutations_list[uVar95].uv.field0_0x0;
            piVar37[uVar88].x.field0_0x0._s_0.x = fVar119;
            piVar37[uVar88].x.field0_0x0._s_0.y = fVar121;
            piVar37[uVar88].x.field0_0x0._s_0.z = 0.0;
            piVar37[uVar88].r = fVar113;
            piVar37[uVar88].color.field0_0x0.xy.field0_0x0 = rVar32;
            *(undefined8 *)((longlong)&piVar37[uVar88].color.field0_0x0._s_2.yz.field0_0x0 + 4) =
                 uVar35;
            piVar37[uVar88].uv.field0_0x0 = rVar114;
            uVar82 = (ulonglong)uVar24;
            if (uVar95 == uVar24) break;
            fVar119 = fVar119 + 0.2;
            uVar25 = (iVar26 - 1U) % 0x13;
            if (uVar25 == 0x12) {
              fVar121 = fVar121 + -0.17320508;
              fVar119 = -0.90000004;
            }
            else if (uVar25 == 9) {
              fVar121 = fVar121 + -0.17320508;
              fVar119 = -0.8;
            }
            uVar88 = uVar88 + 1;
            uVar95 = uVar95 + 1;
            uVar82 = uVar88;
          } while ((longlong)uVar95 < (longlong)n_mutation_types);
        }
        local_1458._0_8_ = uVar82;
        fVar124 = ((fVar124 + 0.2) - fVar121) * 0.5 + 0.0175;
        fVar121 = 1.03;
      }
      else {
        uVar82 = (ulonglong)w.em.n_cell_items;
        uVar24 = w.em.n_cell_items - 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_1458._8_8_;
        local_1458 = auVar11 << 0x40;
        fVar124 = (float)(int)((uint)(9 < (int)uVar24 % 0x13) + ((int)uVar24 / 0x13) * 2) * 0.5 *
                  0.8660254 * 0.2;
        fVar121 = fVar124;
        if ((longlong)uVar82 < 1) {
          auVar13._12_4_ = 0;
          auVar13._0_12_ = local_14b8._4_12_;
          local_14b8._0_16_ = auVar13 << 0x20;
          bVar22 = false;
        }
        else {
          fVar119 = -0.90000004;
          uVar25 = 0;
          lVar43 = 4;
          uVar95 = 0;
          bVar22 = false;
          auVar12._12_4_ = 0;
          auVar12._0_12_ = local_14b8._4_12_;
          local_14b8._0_16_ = auVar12 << 0x20;
          uVar35 = w.em.field12_0x40.cell_items;
          do {
            pmVar17 = materials_list;
            if (*(int *)(uVar35 + lVar43 + -4) == 0) {
              iVar26 = *(int *)((longlong)&((cell_item *)uVar35)->type + lVar43);
              fVar113 = (param_4->mouse).field0_0x0._s_0.x;
              fVar128 = (param_4->mouse).field0_0x0._s_0.y;
              fVar103 = param_1->cell_r[uVar95];
              if (gamepad_anchors == (real_2 *)0x0) {
                max_gamepad_anchors = 0x400;
                gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
                if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400aa04c;
              }
              else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400aa04c:
                lVar45 = (longlong)n_gamepad_anchors;
                rVar54.field0_0x0._s_0.y = fVar121;
                rVar54.field0_0x0._s_0.x = fVar119;
                n_gamepad_anchors = n_gamepad_anchors + 1;
                gamepad_anchors[lVar45].field0_0x0 = rVar54.field0_0x0;
              }
              fVar113 = fVar113 - fVar119;
              fVar128 = fVar128 - fVar121;
              fVar127 = 0.07;
              if (fVar128 * fVar128 + fVar113 * fVar113 + 0.0 <= fVar103 * fVar103) {
                param_4->hover_blocked = true;
                param_4->cursor_type = 0;
                (param_1->tooltip).last_hovered_index = iVar26;
                (param_1->tooltip).last_hovered_type = 0;
                (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.x = fVar119;
                (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.y = fVar121;
                iVar73 = DAT_14020d9bc;
                if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
                  lVar45 = (longlong)DAT_14020da00;
                  DAT_14020d9bc = DAT_14020d9bc + -1;
                  bVar22 = DAT_14020d9bc == 0;
                  iVar77 = DAT_14020da00 + 1;
                  DAT_14020da00 = iVar77;
                  *(int *)(&DAT_14020d9c0 + lVar45 * 4) = iVar26;
                  param_1->cell_r_dot[uVar95] = param_1->cell_r_dot[uVar95] + -10.0;
                  param_4->click_blocked = true;
                  if (bVar22 || iVar73 < 1) {
                    give_mutation(local_14f0,DAT_14020da04,(int *)&DAT_14020d9c0,iVar77,false);
                  }
                }
                bVar22 = true;
                fVar127 = 0.091;
              }
              pfVar64 = param_1->cell_r;
              pfVar10 = param_1->cell_r_dot;
              fVar113 = expf(param_5 * -5.0);
              fVar125 = pfVar64[uVar95] - fVar127;
              fVar117 = pfVar10[uVar95] / 150.0;
              fVar128 = cosf(local_1504);
              fVar103 = sinf(local_1504);
              pfVar64[uVar95] = (fVar125 * fVar128 + fVar117 * fVar103) * fVar113 + fVar127;
              pfVar10[uVar95] = (fVar117 * fVar128 - fVar125 * fVar103) * 150.0 * fVar113;
              fVar113 = param_1->cell_r[uVar95];
              fVar128 = 0.21000001;
              if (fVar113 <= 0.21000001) {
                fVar128 = fVar113;
              }
              fVar113 = 0.0;
              if (0.0 <= fVar128) {
                fVar113 = fVar128;
              }
              param_1->cell_r[uVar95] = fVar113;
              fVar113 = param_1->cell_r[uVar95];
              _local_b68 = pmVar17[iVar26].base_color.field0_0x0;
              rVar32 = pmVar17[iVar26].uv.field0_0x0;
              lVar45 = (longlong)(int)local_14b8._0_4_;
              local_14b8._0_4_ = local_14b8._0_4_ + 1;
              piVar36[lVar45].x.field0_0x0._s_0.x = fVar119;
              piVar36[lVar45].x.field0_0x0._s_0.y = fVar121;
              piVar36[lVar45].x.field0_0x0._s_0.z = 0.0;
              piVar36[lVar45].r = fVar113;
              piVar36[lVar45].color.field0_0x0 = _local_b68;
              piVar36[lVar45].uv.field0_0x0 = rVar32;
              if (uVar24 == uVar95) break;
              fVar119 = fVar119 + 0.2;
              uVar35 = w.em.field12_0x40.cell_items;
              if (uVar25 % 0x13 == 0x12) {
                fVar121 = fVar121 + -0.17320508;
                fVar119 = -0.90000004;
              }
              else if (uVar25 % 0x13 == 9) {
                fVar121 = fVar121 + -0.17320508;
                fVar119 = -0.8;
              }
            }
            uVar95 = uVar95 + 1;
            uVar25 = uVar25 + 1;
            lVar43 = lVar43 + 0x50;
          } while (uVar82 != uVar95);
        }
        fVar124 = ((fVar124 + 0.2) - fVar121) * 0.5;
        fVar121 = 1.0;
      }
      rVar114._0_4_ = fVar121 + 0.03;
      rVar114._4_4_ = fVar124 + 0.03;
      rVar67.field0_0x0._s_0.y = rVar114._4_4_;
      rVar67.field0_0x0._s_0.x = rVar114._0_4_;
      local_1158.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_1158._8_8_ = 0x3f8000003f800000;
      local_1168.xy.field0_0x0 = (real_2)(real_2_u_0)0x3a83126f3a83126f;
      local_1168._8_8_ = 0x3f4ccccd3a83126f;
      local_12c8.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_12c8._s_0.z = 0.0;
      draw_rounded_rectangle_outlined
                (param_3,(real_3 *)&local_12c8._s_0,rVar67,0.03,0.01,(real_4 *)&local_1168._s_0,
                 (real_4 *)&local_1158._s_0);
      uVar24 = w.translations.max_entries;
      ppcVar19 = w.translations.keys;
      if (DAT_14020d9bc < 1) {
        uVar82 = 0x2a2b82a9 % (ulonglong)w.translations.max_entries;
        uVar95 = uVar82;
        do {
          uVar88 = (ulonglong)(int)uVar95;
          if ((ppcVar19[uVar88] == (char *)0x0) ||
             (iVar26 = strcmp(ppcVar19[uVar88],"prompt_mutate"), iVar26 == 0)) break;
          uVar25 = (int)uVar95 + 1;
          uVar95 = (ulonglong)uVar25;
          if (uVar25 == uVar24) {
            uVar95 = 0;
          }
          uVar88 = uVar82;
        } while ((int)uVar95 != (int)uVar82);
        if (w.translations.values[uVar88].text == (char **)0x0) {
          pcVar51 = unknown_string;
        }
        else {
          pcVar44 = w.translations.values[uVar88].text[w.language_index];
          pcVar51 = unknown_string;
          if (pcVar44 != (char *)0x0) {
            pcVar51 = pcVar44;
          }
        }
      }
      else {
        sprintf((char *)&local_1228,"mut_%s_name",(char *)(mutations_list + DAT_14020da04));
        pcVar51 = get_translation_formatted((char *)&local_1228,(translation_info)0x0,(char *)0x0);
        uVar24 = w.translations.max_entries;
        ppcVar19 = w.translations.keys;
        uVar82 = (ulonglong)w.translations.max_entries;
        uVar95 = 0x90ab6ec5U % uVar82;
        do {
          lVar43 = (longlong)(int)uVar95;
          if ((ppcVar19[lVar43] == (char *)0x0) ||
             (iVar26 = strcmp(ppcVar19[lVar43],"prompt_imbue"), iVar26 == 0)) goto LAB_1400aaada;
          uVar25 = (int)uVar95 + 1;
          uVar95 = (ulonglong)uVar25;
          if (uVar25 == uVar24) {
            uVar95 = 0;
          }
          iVar26 = (int)(0x90ab6ec5U % uVar82);
        } while ((int)uVar95 != iVar26);
        lVar43 = (longlong)iVar26;
LAB_1400aaada:
        if (w.translations.values[lVar43].text == (char **)0x0) {
          pcVar44 = unknown_string;
        }
        else {
          pcVar8 = w.translations.values[lVar43].text[w.language_index];
          pcVar44 = unknown_string;
          if (pcVar8 != (char *)0x0) {
            pcVar44 = pcVar8;
          }
        }
        snprintf(local_b68,0x400,pcVar44,pcVar51);
        pcVar51 = local_b68;
      }
      fVar124 = fVar124 + -0.015;
      fVar121 = fVar121 + -0.015;
      _Dst = local_538 + 0x17;
      memcpy(_Dst,_Src,0xb8);
      local_1178.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_1178._8_8_ = 0x3f8000003f800000;
      ptVar131 = (text_params *)&DAT_1401cadf8;
      draw_text(pcVar51,0.0,rVar114._4_4_ + -0.01,(real_4 *)&local_1178._s_0,
                (real_2)0x3f80000000000000,(font_info *)&_Dst->_s_0,(text_params *)&DAT_1401cadf8);
      (param_1->block_zone).field0_0x0 = rVar114;
      (param_1->block_center).field0_0x0 = (real_2_u_0)0x0;
      local_ce8._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
      local_ce8._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
      local_ce8._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
      local_ce8._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
      local_ce8._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
      local_ce8._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
      local_ce8._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
      local_ce8._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
      draw_cell_icons(piVar36,local_14b8._0_4_,(real_4x4 *)local_ce8.columns,
                      (real_2)0x3f80000000000000);
      local_d28._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
      local_d28._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
      local_d28.columns[1].field0_0x0 =
           (real_4)*(undefined1 (*) [16])&(param_3->camera).field0_0x0.columns[1].field0_0x0;
      local_d28.columns[2].field0_0x0 =
           (real_4)*(undefined1 (*) [16])&(param_3->camera).field0_0x0.columns[2].field0_0x0;
      local_d28._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
      local_d28._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
      draw_mutation_icons(piVar37,local_1458._0_4_,(real_4x4 *)local_d28.columns);
      uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
      if (0 < local_1458._0_4_) {
        pfVar64 = &(piVar37->x).field0_0x0._s_0.y;
        uVar82 = 0;
        uVar35 = w.field64_0x3af0.body_auxiliary_data;
        uVar55 = w.bodies.field3_0x20.elements;
        iVar26 = w.body_auxiliary_size;
        do {
          uVar50 = *(uchar *)(uVar35 + uVar82 + 1 +
                                       ((longlong)local_14f0 - uVar55 >> 5) *
                                       (longlong)iVar26 * -0x2c8590b21642c859);
          if (uVar50 != '\0') {
            local_1188 = (param_3->foreground_color).field0_0x0.xy.field0_0x0;
            uStack_1180 = *(undefined8 *)
                           ((longlong)&(param_3->foreground_color).field0_0x0._s_2.yz.field0_0x0 + 4
                           );
            memcpy(local_538,&param_3->field29_0x128,0xb8);
            local_e40._0_8_ = 0;
            local_e40.orientation.field0_0x0._s_0.y = 0.0;
            local_e40._16_8_ = 0;
            local_e40.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
            local_1218 = 0;
            uStack_1210 = 0;
            local_1228 = 0;
            uStack_1220 = 0;
            snprintf(&local_1228,0x20,"%d",(int)(char)uVar50);
            local_e40.shadow = 0.002;
            local_e40.shadow_color.field0_0x0._s_0.w = 1.0;
            local_e40.outline_color.field0_0x0.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
            local_e40.outline_color.field0_0x0._8_8_ = 0;
            local_e40.clip_size.field0_0x0 = (real_2_u_0)0x0;
            local_e40.wrap_width = 0.0;
            local_e40.wrap_indent = 0.0;
            local_1198.xy.field0_0x0 = (real_2)(real_2)local_1188;
            local_1198._8_8_ = uStack_1180;
            ptVar131 = &local_e40;
            _Dst = local_538;
            draw_text((char *)&local_1228,((real_3_u_0_s_0 *)(pfVar64 + -1))->x + 0.07,
                      *pfVar64 + -0.07,(real_4 *)&local_1198._s_0,(real_2)0x0,
                      (font_info *)&local_538[0]._s_0,ptVar131);
            uVar35 = w.field64_0x3af0.body_auxiliary_data;
            uVar55 = w.bodies.field3_0x20.elements;
            iVar26 = w.body_auxiliary_size;
          }
          uVar42 = (undefined4)((ulonglong)ptVar131 >> 0x20);
          uVar82 = uVar82 + 1;
          pfVar64 = pfVar64 + 10;
        } while ((local_1458._0_8_ & 0xffffffff) != uVar82);
      }
      stunalloc(piVar37);
      stunalloc(piVar36);
      fVar119 = (param_4->mouse).field0_0x0._s_0.x - fVar121;
      fVar113 = (param_4->mouse).field0_0x0._s_0.y - fVar124;
      fVar119 = fVar113 * fVar113 + fVar119 * fVar119 + 0.0;
      if (0.00062500004 < fVar119) {
        bVar23 = 0;
        param_4->click_blocked = param_4->click_blocked;
      }
      else if (param_4->click_blocked == false) {
        bVar23 = param_4->pressed_buttons[0] >> 1;
        param_4->click_blocked = (bool)(bVar23 & 1);
      }
      else {
        bVar23 = 0;
        param_4->click_blocked = true;
      }
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
      }
      lVar43 = (longlong)n_gamepad_anchors;
      if (n_gamepad_anchors < max_gamepad_anchors) {
        rVar68.field0_0x0._s_0.y = fVar124;
        rVar68.field0_0x0._s_0.x = fVar121;
        n_gamepad_anchors = n_gamepad_anchors + 1;
        gamepad_anchors[lVar43].field0_0x0 = rVar68.field0_0x0;
      }
      if (0.00062500004 < fVar119) {
        fVar119 = 1.0;
        next_gui_element = next_gui_element + 1;
      }
      else {
        iVar26 = next_gui_element + 1;
        param_4->hovered_ui_element = next_gui_element;
        next_gui_element = iVar26;
        param_4->hover_blocked = true;
        fVar119 = 0.5;
      }
      if ((bVar23 & 1) != 0) {
        param_1->tool = -1;
        param_4->click_blocked = true;
      }
      local_1388._s_0.w = 1.0;
      rVar56.field0_0x0._s_0.y = fVar124 + -0.015;
      rVar56.field0_0x0._s_0.x = fVar121 + -0.015;
      local_1388._s_0.x = fVar119;
      local_1388._s_0.y = fVar119;
      local_1388._s_0.z = fVar119;
      draw_line(param_3,rVar56,(real_2)0x3cf5c28f3cf5c28f,0.005,(real_4 *)&local_1388._s_0);
      local_1398._s_0.w = 1.0;
      rVar57.field0_0x0._s_0.y = fVar124 + 0.015;
      rVar57.field0_0x0._s_0.x = fVar121 + -0.015;
      local_1398._s_0.x = fVar119;
      local_1398._s_0.y = fVar119;
      local_1398._s_0.z = fVar119;
      draw_line(param_3,rVar57,(real_2)0xbcf5c28f3cf5c28f,0.005,(real_4 *)&local_1398._s_0);
      iVar26 = param_1->tool;
      if (iVar26 != 9) goto joined_r0x0001400ab0d7;
LAB_1400a843d:
      piVar36 = (icon_render_info *)stalloc_((longlong)n_materials * 0x50);
      lVar43 = (longlong)n_materials;
      TlsGetValue(tls_index);
      puVar40 = stalloc_(lVar43 << 2);
      iVar73 = 0;
      memset(puVar40,0,lVar43 << 2);
      iVar26 = w.em.n_cell_items;
      if (w.em.n_cell_items < 1) {
        iVar77 = -1;
      }
      else {
        iVar77 = 0;
        lVar43 = 4;
        lVar45 = 0;
        uVar35 = w.em.field12_0x40.cell_items;
        do {
          if ((*(int *)(uVar35 + lVar43 + -4) == 0) &&
             (lVar71 = (longlong)*(int *)((longlong)&((cell_item *)uVar35)->type + lVar43),
             *(int *)(puVar40 + lVar71 * 4) == 0)) {
            *(int *)(puVar40 + lVar71 * 4) = (int)lVar45 + 1;
            iVar77 = iVar77 + 1;
            uVar35 = w.em.field12_0x40.cell_items;
            iVar26 = w.em.n_cell_items;
          }
          lVar45 = lVar45 + 1;
          lVar43 = lVar43 + 0x50;
        } while (lVar45 < iVar26);
        iVar77 = iVar77 + -1;
      }
      fVar124 = (float)(int)((uint)(9 < iVar77 % 0x13) + (iVar77 / 0x13) * 2) * 0.5 * 0.8660254 *
                0.2;
      fVar121 = fVar124;
      if (iVar26 < 1) {
        local_14c8 = 0x7fc0000000000000;
        local_1448 = NAN;
        fVar119 = 0.0;
      }
      else {
        local_1448 = NAN;
        local_14c8 = 0x7fc00000;
        fVar113 = -0.90000004;
        iVar73 = 0;
        fVar119 = 0.0;
        iVar91 = 0;
        uVar35 = w.em.field12_0x40.cell_items;
        uVar82 = 0;
        do {
          pmVar17 = materials_list;
          iVar66 = (((cell_item *)(uVar35 + uVar82 * 0x50))->field1_0x4).material_index;
          lVar43 = (longlong)iVar66;
          uVar95 = uVar82 + 1;
          if (uVar95 == *(uint *)(puVar40 + lVar43 * 4)) {
            if (gamepad_anchors == (real_2 *)0x0) {
              max_gamepad_anchors = 0x400;
              gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
              if (n_gamepad_anchors < max_gamepad_anchors) goto LAB_1400a8639;
            }
            else if (n_gamepad_anchors < max_gamepad_anchors) {
LAB_1400a8639:
              lVar45 = (longlong)n_gamepad_anchors;
              rVar52.field0_0x0._s_0.y = fVar121;
              rVar52.field0_0x0._s_0.x = fVar113;
              n_gamepad_anchors = n_gamepad_anchors + 1;
              gamepad_anchors[lVar45].field0_0x0 = rVar52.field0_0x0;
            }
            fVar128 = (param_4->mouse).field0_0x0._s_0.x - fVar113;
            fVar103 = (param_4->mouse).field0_0x0._s_0.y - fVar121;
            if (fVar103 * fVar103 + fVar128 * fVar128 + 0.0 <=
                param_1->cell_r[uVar82] * param_1->cell_r[uVar82]) {
              param_4->hover_blocked = true;
              param_4->cursor_type = 0;
              (param_1->tooltip).last_hovered_index = iVar66;
              (param_1->tooltip).last_hovered_type = 0;
              (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.x = fVar113;
              (param_1->tooltip).last_hovered_mutation_pos.field0_0x0._s_0.y = fVar121;
              if ((param_4->click_blocked == false) && ((param_4->pressed_buttons[0] & 2) != 0)) {
                lVar45 = (longlong)DAT_14020da10;
                iVar26 = DAT_14020da10 + 1;
                DAT_14020da10 = iVar26;
                (&DAT_14020da08)[lVar45] = iVar66;
                param_1->cell_r_dot[uVar82] = param_1->cell_r_dot[uVar82] + -10.0;
                param_4->click_blocked = true;
                if (iVar26 == 2) {
                  if (0 < (longlong)n_materials) {
                    piVar72 = &materials_list->combine_material_index2;
                    uVar88 = 0;
                    do {
                      if ((((int)((material_t *)(piVar72 + -0x3a))->id < -0x7f000000) &&
                          (piVar72[-1] == DAT_14020da08)) && (*piVar72 == DAT_14020da0c))
                      goto LAB_1400a87fe;
                      uVar88 = uVar88 + 1;
                      piVar72 = piVar72 + 0x48;
                    } while ((longlong)n_materials != uVar88);
                  }
                  uVar24 = combine_materials(DAT_14020da08,DAT_14020da0c);
                  uVar88 = (ulonglong)uVar24;
LAB_1400a87fe:
                  rVar46.field0_0x0 = w.camera_pos.field0_0x0;
                  if (w.menu == 0) {
                    uVar24 = local_1458._0_4_ & 0xfffffffc;
                    lVar45 = (longlong)w.max_cell_pickups;
                    local_1458._0_4_ = uVar24;
                    if (w.max_cell_pickups <= w.n_cell_pickups) {
                      w.max_cell_pickups = w.max_cell_pickups * 2;
                      bVar22 = expand_memory(&w.field128_0x3eb0.cell_pickups_memory,lVar45 * 0x50);
                      if (!bVar22) goto LAB_1400a88e3;
                    }
                    uVar35 = w.field128_0x3eb0.cell_pickups;
                    lVar45 = (longlong)w.n_cell_pickups;
                    w.field128_0x3eb0.cell_pickups[lVar45].material_index = (int)uVar88;
                    (((cell_pickup *)(uVar35 + lVar45 * 0x28))->x).field0_0x0._s_0 =
                         (real_2_u_0_s_0)rVar46.field0_0x0;
                    (((cell_pickup *)(uVar35 + lVar45 * 0x28))->x_dot).field0_0x0 = (real_2_u_0)0x0;
                    (&((cell_pickup *)(uVar35 + lVar45 * 0x28))->x_dot)[1] = (real_2_u_0)0x0;
                    ((cell_pickup *)(uVar35 + lVar45 * 0x28))->alpha = 0.0;
                    ((cell_pickup *)(uVar35 + lVar45 * 0x28))->text_alpha = 0.0;
                    (((cell_pickup *)(uVar35 + lVar45 * 0x28))->field7_0x24).flags = uVar24;
                    w.n_cell_pickups = w.n_cell_pickups + 1;
                  }
                  else {
                    local_df8.button.x.field0_0x0 = (real_2_u_0)0x0;
                    local_df8.button.hovered = 0.0;
                    local_df8.button.selected = 0.0;
                    local_df8.button.was_hovered = false;
                    local_df8.button.pinned = false;
                    local_df8.button._66_2_ = 0;
                    local_df8._76_4_ = 0;
                    local_df8.button.r = 0.0;
                    local_df8.button.r_dot = 0.0;
                    local_df8.button.selection_theta = 0.0;
                    local_df8.button.wiggle_phase = 0.0;
                    local_df8.button.x_brown_dot.field0_0x0 = (real_2_u_0)0x0;
                    local_df8.button.x_offset.field0_0x0 = (real_2_u_0)0x0;
                    local_df8.button.x_dot.field0_0x0 = (real_2_u_0)0x0;
                    local_df8.button.x_brown.field0_0x0 = (real_2_u_0)0x0;
                    local_df8._0_8_ = uVar88 << 0x20;
                    create_cell_item(&local_df8);
                  }
LAB_1400a88e3:
                  DAT_14020da10 = 0;
                  param_1->tool = -1;
                }
              }
              bVar22 = true;
              fVar128 = 0.091;
            }
            else {
              fVar128 = 0.07;
            }
            pfVar64 = param_1->cell_r;
            pfVar10 = param_1->cell_r_dot;
            fVar103 = expf(param_5 * -5.0);
            fVar120 = pfVar64[uVar82] - fVar128;
            fVar125 = pfVar10[uVar82] / 150.0;
            fVar127 = cosf(local_1504);
            fVar117 = sinf(local_1504);
            pfVar64[uVar82] = (fVar120 * fVar127 + fVar125 * fVar117) * fVar103 + fVar128;
            pfVar10[uVar82] = (fVar125 * fVar127 - fVar120 * fVar117) * 150.0 * fVar103;
            fVar128 = param_1->cell_r[uVar82];
            fVar103 = 0.21000001;
            if (fVar128 <= 0.21000001) {
              fVar103 = fVar128;
            }
            fVar128 = 0.0;
            if (0.0 <= fVar103) {
              fVar128 = fVar103;
            }
            param_1->cell_r[uVar82] = fVar128;
            fVar128 = param_1->cell_r[uVar82];
            _local_b68 = pmVar17[lVar43].base_color.field0_0x0;
            rVar32 = pmVar17[lVar43].uv.field0_0x0;
            piVar36[iVar73].x.field0_0x0._s_0.x = fVar113;
            piVar36[iVar73].x.field0_0x0._s_0.y = fVar121;
            piVar36[iVar73].x.field0_0x0._s_0.z = 0.0;
            piVar36[iVar73].r = fVar128;
            piVar36[iVar73].color.field0_0x0 = _local_b68;
            piVar36[iVar73].uv.field0_0x0 = rVar32;
            if ((DAT_14020da10 != 0) && (DAT_14020da08 == iVar66)) {
              fVar119 = param_1->cell_r[uVar82] + 0.01;
              local_14c8 = (ulonglong)(uint)fVar121;
              local_1448 = fVar113;
            }
            iVar73 = iVar73 + 1;
            if (iVar91 == iVar77) break;
            fVar113 = fVar113 + 0.2;
            if (iVar91 % 0x13 == 0x12) {
              fVar121 = fVar121 + -0.17320508;
              fVar113 = -0.90000004;
            }
            else if (iVar91 % 0x13 == 9) {
              fVar121 = fVar121 + -0.17320508;
              fVar113 = -0.8;
            }
            iVar91 = iVar91 + 1;
            uVar35 = w.em.field12_0x40.cell_items;
            iVar26 = w.em.n_cell_items;
          }
          uVar82 = uVar95;
        } while ((longlong)uVar95 < (longlong)iVar26);
        local_14c8 = local_14c8 << 0x20;
      }
      stunalloc(puVar40);
      fVar124 = ((fVar124 + 0.2) - fVar121) * 0.5;
      fVar121 = fVar124 + -0.015;
      fVar124 = fVar124 + 0.03;
      local_11a8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
      local_11a8._8_8_ = 0x3f8000003f800000;
      local_11b8 = (real_2_u_0)0x3a83126f3a83126f;
      uStack_11b0 = 0x3a83126f3a83126f;
      local_12d8.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_12d8._s_0.z = 0.0;
      prVar130 = &local_11a8;
      _Dst = &local_11b8;
      draw_rounded_rectangle_outlined
                (param_3,(real_3 *)&local_12d8._s_0,
                 (real_2)((ulonglong)(uint)fVar124 << 0x20 | 0x3f83d70a),0.03,0.01,
                 (real_4 *)&_Dst->_s_0,(real_4 *)&prVar130->_s_0);
      uVar42 = (undefined4)((ulonglong)prVar130 >> 0x20);
      (param_1->block_zone).field0_0x0._s_0.x = 1.03;
      (param_1->block_zone).field0_0x0._s_0.y = fVar124;
      (param_1->block_center).field0_0x0 = (real_2_u_0)0x0;
      if (!NAN(local_1448)) {
        local_11c8.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
        local_11c8._8_8_ = 0x3f8000003f800000;
        local_12e8.xy.field0_0x0 = (real_2)(local_14c8 | (uint)local_1448);
        local_12e8._s_0.z = 0.0;
        draw_circle(param_3,(real_3 *)&local_12e8._s_0,fVar119,(real_4 *)&local_11c8._s_0);
      }
      local_d68._0_8_ = *(undefined8 *)&prVar1->field0_0x0;
      local_d68._8_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 8);
      local_d68._16_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x10);
      local_d68._24_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x18);
      local_d68._32_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x20);
      local_d68._40_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x28);
      local_d68._48_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x30);
      local_d68._56_8_ = *(undefined8 *)((longlong)&(param_3->camera).field0_0x0 + 0x38);
      draw_cell_icons(piVar36,iVar73,(real_4x4 *)local_d68.columns,(real_2)0x3f80000000000000);
      stunalloc(piVar36);
      fVar124 = (param_4->mouse).field0_0x0._s_0.x + -0.985;
      fVar119 = (param_4->mouse).field0_0x0._s_0.y - fVar121;
      fVar124 = fVar119 * fVar119 + fVar124 * fVar124 + 0.0;
      bVar98 = param_4->click_blocked;
      if (0.00062500004 < fVar124) {
LAB_1400a8d1d:
        bVar23 = 0;
        param_4->click_blocked = bVar98;
      }
      else {
        if (bVar98 != false) {
          bVar98 = true;
          goto LAB_1400a8d1d;
        }
        bVar23 = param_4->pressed_buttons[0] >> 1;
        param_4->click_blocked = (bool)(bVar23 & 1);
      }
      if (gamepad_anchors == (real_2 *)0x0) {
        max_gamepad_anchors = 0x400;
        gamepad_anchors = (real_2 *)dynamic_alloc(0x2000);
      }
      lVar43 = (longlong)n_gamepad_anchors;
      if (n_gamepad_anchors < max_gamepad_anchors) {
        n_gamepad_anchors = n_gamepad_anchors + 1;
        gamepad_anchors[lVar43].field0_0x0 =
             (real_2_u_0)((ulonglong)(uint)fVar121 << 0x20 | 0x3f7c28f6);
      }
      if (0.00062500004 < fVar124) {
        fVar124 = 1.0;
        next_gui_element = next_gui_element + 1;
      }
      else {
        iVar26 = next_gui_element + 1;
        param_4->hovered_ui_element = next_gui_element;
        next_gui_element = iVar26;
        param_4->hover_blocked = true;
        fVar124 = 0.5;
      }
      if ((bVar23 & 1) != 0) {
        param_1->tool = -1;
        param_4->click_blocked = true;
      }
      local_13a8._s_0.w = 1.0;
      local_13a8._s_0.x = fVar124;
      local_13a8._s_0.y = fVar124;
      local_13a8._s_0.z = fVar124;
      draw_line(param_3,(real_2)((ulonglong)(uint)(fVar121 + -0.015) << 0x20 | 0x3f7851ec),
                (real_2)0x3cf5c28f3cf5c28f,0.005,(real_4 *)&local_13a8._s_0);
      local_13b8._s_0.w = 1.0;
      local_13b8._s_0.x = fVar124;
      local_13b8._s_0.y = fVar124;
      local_13b8._s_0.z = fVar124;
      draw_line(param_3,(real_2)((ulonglong)(uint)(fVar121 + 0.015) << 0x20 | 0x3f7851ec),
                (real_2)0xbcf5c28f3cf5c28f,0.005,(real_4 *)&local_13b8._s_0);
      iVar26 = param_1->tool;
      goto joined_r0x0001400ab0d7;
    }
    param_1->tool = -1;
    DAT_14020d9bc = 0;
    DAT_14020da00 = 0;
  }
  if ((param_1->tooltip).alpha <= 0.0) {
    return;
  }
  bVar98 = false;
LAB_1400acab1:
  do_tooltip(param_3,&param_1->tooltip,param_5,bVar98,1,(translation_info)0x0,false,INFINITY,false);
  return;
}

