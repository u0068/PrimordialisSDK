
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl update_game(render_context *param_1,render_context *param_2,user_input *param_3)

{
  body *pbVar1;
  int *piVar2;
  char cVar3;
  real_2_u_0 rVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  queued_sound *pqVar8;
  context_t **ppcVar9;
  queued_sound *pqVar10;
  real_2 rVar11;
  undefined8 uVar12;
  char **ppcVar13;
  float fVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int extraout_EAX;
  undefined4 uVar18;
  int *piVar19;
  LPVOID pvVar20;
  real_2 *prVar21;
  biome_core *pbVar22;
  uint uVar23;
  char *pcVar24;
  ulonglong uVar25;
  real_2_u_0_s_0 rVar26;
  render_context *prVar27;
  ulonglong uVar28;
  byte bVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  uint *puVar33;
  body *pbVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [64];
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [16];
  undefined1 in_ZMM9 [64];
  id_t local_898;
  LARGE_INTEGER local_888 [128];
  LARGE_INTEGER local_488 [134];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM9._0_16_;
  piVar19 = TlsGetValue(tls_index);
  if (*piVar19 == 0) {
    begin_trace_stage("update_game");
    rVar26 = (param_3->mouse).field0_0x0._s_0;
    auVar48 = vpinsrd_avx(ZEXT416((uint)rVar26.y),rVar26.x,1);
    auVar54 = vpand_avx(auVar48,___xmm_7fffffff7fffffff7fffffff7fffffff);
    auVar40 = vpinsrd_avx(ZEXT416(w.sm.block_zone.field0_0x0._4_4_),w.sm.block_zone.field0_0x0._0_4_
                          ,1);
    auVar48 = vcmpps_avx(auVar54,auVar40,1);
    auVar46 = vshufps_avx(auVar48,auVar48,0x50);
    auVar48 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
    if ((SUB161((auVar48 & ~auVar46) >> 0x3f,0) & 1) == 0 && -1 < SUB161(auVar48 & ~auVar46,0xf)) {
      auVar54 = vsubps_avx(auVar54,auVar40);
      auVar48 = vmovshdup_avx(auVar54);
      auVar48 = vmaxss_avx(auVar48,auVar54);
      fVar37 = auVar48._0_4_;
    }
    else {
      auVar46._0_8_ = auVar40._0_8_ ^ 0x8000000080000000;
      auVar46._8_4_ = auVar40._8_4_ ^ 0x80000000;
      auVar46._12_4_ = auVar40._12_4_ ^ 0x80000000;
      fVar37 = (float)auVar46._0_8_;
      auVar40 = vminps_avx(auVar40,auVar54);
      auVar48 = vcmpps_avx(auVar40,auVar46,1);
      auVar48 = vshufps_avx(auVar48,auVar48,0x50);
      uVar15 = vmovmskpd_avx(auVar48);
      if ((uVar15 & 2) == 0) {
        auVar48 = vmovshdup_avx(auVar40);
        fVar44 = auVar48._0_4_;
      }
      else {
        auVar48 = vshufps_avx(auVar46,auVar46,0xf5);
        fVar44 = auVar48._0_4_;
      }
      if ((uVar15 & 1) == 0) {
        fVar37 = auVar40._0_4_;
      }
      auVar48 = vmovshdup_avx(auVar54);
      fVar44 = auVar48._0_4_ - fVar44;
      fVar37 = auVar54._0_4_ - fVar37;
      auVar48 = ZEXT416((uint)(fVar37 * fVar37 + fVar44 * fVar44 + 0.0));
      auVar48 = vsqrtss_avx(auVar48,auVar48);
      fVar37 = auVar48._0_4_;
    }
    if (!(bool)(~(w.im.body_id != 0 && 0.0 < (param_3->mouse).field0_0x0._s_0.x) & 0.03 < fVar37)) {
      param_3->buttons[0] = '\0';
      param_3->pressed_buttons[0] = '\0';
      param_3->mouse_wheel = 0.0;
    }
    ppcVar9 = context_list;
    if (w.show_console == true) {
      (param_3->dmouse).field0_0x0 = (real_2_u_0)0x0;
      param_3->n_text_stream = 0;
      param_3->text_modifiers = 0;
      auVar42 = ZEXT832(0) << 0x20;
      param_3->mouse_wheel = (float)auVar42._0_4_;
      param_3->mouse_hwheel = (float)auVar42._4_4_;
      param_3->buttons[0] = auVar42[8];
      param_3->buttons[1] = auVar42[9];
      param_3->buttons[2] = auVar42[10];
      param_3->buttons[3] = auVar42[0xb];
      param_3->buttons[4] = auVar42[0xc];
      param_3->buttons[5] = auVar42[0xd];
      param_3->buttons[6] = auVar42[0xe];
      param_3->buttons[7] = auVar42[0xf];
      param_3->buttons[8] = auVar42[0x10];
      param_3->buttons[9] = auVar42[0x11];
      param_3->buttons[10] = auVar42[0x12];
      param_3->buttons[0xb] = auVar42[0x13];
      param_3->buttons[0xc] = auVar42[0x14];
      param_3->buttons[0xd] = auVar42[0x15];
      param_3->buttons[0xe] = auVar42[0x16];
      param_3->buttons[0xf] = auVar42[0x17];
      param_3->buttons[0x10] = auVar42[0x18];
      param_3->buttons[0x11] = auVar42[0x19];
      param_3->buttons[0x12] = auVar42[0x1a];
      param_3->buttons[0x13] = auVar42[0x1b];
      param_3->buttons[0x14] = auVar42[0x1c];
      param_3->buttons[0x15] = auVar42[0x1d];
      param_3->buttons[0x16] = auVar42[0x1e];
      param_3->buttons[0x17] = auVar42[0x1f];
      *(undefined1 (*) [32])(param_3->buttons + 0x18) = auVar42;
      *(undefined1 (*) [32])(param_3->pressed_buttons + 0x18) = ZEXT832(0) << 0x20;
      *(undefined1 (*) [32])(param_3->released_buttons + 4) = ZEXT832(0) << 0x20;
      param_3->gamepad_prev_buttons = (param_3->gamepad).buttons;
      (param_3->gamepad).buttons = 0;
      (param_3->gamepad).left_trigger = 0.0;
      (param_3->gamepad).right_trigger = 0.0;
      param_3->cursor_type = 0;
      ppcVar9 = context_list;
    }
    context_list = ppcVar9;
    if (0 < n_threads) {
      uVar15 = n_threads & 7;
      if ((uint)n_threads < 8) {
        uVar25 = 0;
      }
      else {
        uVar17 = n_threads & 0x7ffffff8;
        uVar25 = 0;
        do {
          ppcVar9[uVar25]->n_circles = 0;
          ppcVar9[uVar25 + 1]->n_circles = 0;
          ppcVar9[uVar25 + 2]->n_circles = 0;
          ppcVar9[uVar25 + 3]->n_circles = 0;
          ppcVar9[uVar25 + 4]->n_circles = 0;
          ppcVar9[uVar25 + 5]->n_circles = 0;
          ppcVar9[uVar25 + 6]->n_circles = 0;
          ppcVar9[uVar25 + 7]->n_circles = 0;
          uVar25 = uVar25 + 8;
        } while (uVar17 != uVar25);
        if ((ulonglong)uVar15 == 0) goto LAB_1401442b7;
      }
      uVar28 = 0;
      do {
        ppcVar9[uVar25 + uVar28]->n_circles = 0;
        uVar28 = uVar28 + 1;
      } while (uVar15 != uVar28);
    }
LAB_1401442b7:
    if (w.dead == 0) {
      uVar18 = settings.field3_0xc.keybinds.map + 7;
      if (-1 < settings.field3_0xc.keybinds.map) {
        uVar18 = settings.field3_0xc.keybinds.map;
      }
      uVar17 = w._4_4_ & 0xffffff7b |
               ((uint)(param_3->pressed_buttons[(int)uVar18 >> 3] >>
                      ((byte)settings.field3_0xc.keybinds.map & 7)) << 7 ^ w._4_4_) & 0x80;
      uVar15 = w.scroll_blocked;
      w._4_4_ = uVar17;
      if (uVar15 == 0) goto LAB_1401442c8;
LAB_140144314:
      param_3->mouse_wheel = 0.0;
      if (w.selected_body < 1) goto LAB_14014435e;
LAB_140144325:
      uVar15 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body;
      if ((w.bodies.field0_0x0.index_table[uVar15].id != w.selected_body) ||
         (w.bodies.field3_0x20.elements == (body *)0x0)) goto LAB_14014435e;
      pbVar34 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar15].index;
      bVar7 = true;
    }
    else {
      if (w.scroll_blocked != 0) goto LAB_140144314;
LAB_1401442c8:
      if (0 < w.selected_body) goto LAB_140144325;
LAB_14014435e:
      w.selected_body = 0;
      bVar7 = false;
      pbVar34 = (body *)0x0;
    }
    w.boss_heart_accel = 0.0;
    w.boss_heart_omega_dot = 0.0;
    fVar44 = 0.0;
    fVar37 = 0.0;
    fVar14 = 0.0;
    fVar45 = 0.0;
    if (w.final_boss.dead == false) {
      auVar48._8_8_ = 0;
      auVar48._0_4_ = w.boss_heart_movement;
      auVar48._4_4_ = w.boss_heart_rotation;
      auVar54._8_4_ = 0x3f800000;
      auVar54._0_8_ = 0x3f8000003f800000;
      auVar54._12_4_ = 0x3f800000;
      auVar48 = vminps_avx(auVar54,auVar48);
      auVar40._8_4_ = 0xbf800000;
      auVar40._0_8_ = 0xbf800000bf800000;
      auVar40._12_4_ = 0xbf800000;
      auVar48 = vmaxps_avx(auVar40,auVar48);
      w._14696_8_ = vmovlps_avx(auVar48);
      w.boss_heart_accel = auVar48._0_4_ * 0.05 + w.boss_heart_vel * -0.01;
      auVar48 = vmovshdup_avx(auVar48);
      w.boss_heart_omega_dot = auVar48._0_4_ * 3e-05;
      fVar37 = (w.boss_heart_omega_dot + w.boss_heart_omega) * 0.95;
      fVar44 = w.boss_heart_vel + w.boss_heart_accel;
      fVar14 = w.boss_heart_omega_2 * 0.999 + fVar37 * 0.001;
      fVar45 = w.boss_heart_omega_dot_2 * 0.999 + w.boss_heart_omega_dot * 0.001;
    }
    w.boss_heart_omega_dot_2 = fVar45;
    w.boss_heart_omega_2 = fVar14;
    w.boss_heart_omega = fVar37;
    w.boss_heart_vel = fVar44;
    if (w.game_mode == 0) {
      w.vision_radius = 1000.0;
    }
    else {
      if (settings.field3_0xc.keybinds.zoom_out == 10) {
        auVar38._0_4_ = -param_3->mouse_wheel;
        auVar38._4_4_ = 0x80000000;
        auVar38._8_4_ = 0x80000000;
        auVar38._12_4_ = 0x80000000;
LAB_140144494:
        vmaxss_avx(auVar38,ZEXT416(0) << 0x20);
        if (settings.field3_0xc.keybinds.zoom_in != 10) goto LAB_1401444a7;
LAB_1401444f7:
        auVar47._0_4_ = -param_3->mouse_wheel;
        auVar47._4_4_ = 0x80000000;
        auVar47._8_4_ = 0x80000000;
        auVar47._12_4_ = 0x80000000;
LAB_140144504:
        auVar49._0_12_ = ZEXT812(0);
        auVar49._12_4_ = 0;
        vmaxss_avx(auVar47,auVar49);
      }
      else {
        if (settings.field3_0xc.keybinds.zoom_out == 0xb) {
          auVar38 = ZEXT416((uint)param_3->mouse_wheel);
          goto LAB_140144494;
        }
        if (settings.field3_0xc.keybinds.zoom_in == 10) goto LAB_1401444f7;
LAB_1401444a7:
        if (settings.field3_0xc.keybinds.zoom_in == 0xb) {
          auVar47 = ZEXT416((uint)param_3->mouse_wheel);
          goto LAB_140144504;
        }
      }
      uVar18 = 0;
      fVar37 = 1.1;
      powf();
      if (w.won == 0) {
        if (bVar7) {
          w.vision_radius = pbVar34->vision_radius;
        }
        else {
          w.vision_radius = 1000.0;
        }
        if ((char)(w.map_mode << 7) < '\0') {
          auVar48 = vminss_avx(SUB6416(ZEXT464(0x47435000),0),
                               ZEXT416((uint)(fVar37 * w.map_camera_dist)));
          auVar48 = vmaxss_avx(SUB6416(ZEXT464(0x44e10000),0),auVar48);
          auVar55 = ZEXT1664(auVar48);
          w.map_camera_dist = auVar48._0_4_;
          w.map_prompt_timer = 0;
        }
        else {
          fVar44 = (float)(param_1->resolution).field0_0x0._s_0.x /
                   (float)(param_1->resolution).field0_0x0._s_0.y;
          auVar48 = ZEXT416((uint)(fVar44 * fVar44 + 1.0));
          auVar48 = vsqrtss_avx(auVar48,auVar48);
          auVar48 = vminss_avx(ZEXT416((uint)((1.0 / auVar48._0_4_) * 1530.0)),
                               ZEXT416((uint)(fVar37 * w.normal_camera_dist)));
          auVar48 = vmaxss_avx(SUB6416(ZEXT464(0x42200000),0),auVar48);
          auVar55 = ZEXT1664(auVar48);
          w.normal_camera_dist = auVar48._0_4_;
        }
      }
      else {
        w.vision_radius = w.vision_radius * 0.9995 + 1.0;
        fVar37 = w.final_boss.x.field0_0x0._s_0.x + 5000.0 + -750.0;
        fVar44 = w.final_boss.x.field0_0x0._s_0.y + 10000.0 + 900.0;
        if (w.credits_timer < 0x2df1) {
          w.camera_pos.field0_0x0 =
               (real_2_u_0)
               (CONCAT44(uVar18,fVar37 * 0.002 + w.camera_pos.field0_0x0._s_0.x * 0.998) |
               (ulonglong)(uint)(fVar44 * 0.002 + w.camera_pos.field0_0x0._s_0.y * 0.998) << 0x20);
          w.normal_camera_dist = w.normal_camera_dist * 0.9995 + 0.25;
        }
        else {
          fVar14 = (float)w.frame_number * 0.0013247181;
          sinf();
          fVar45 = 200.0;
          fVar37 = fVar37 + fVar14 * 200.0 + 1000.0;
          fVar14 = (float)w.frame_number * 0.0016180341;
          sinf();
          fVar44 = fVar14 * 100.0 + fVar44;
          fVar14 = (float)w.frame_number * 0.001;
          sinf();
          w.camera_pos.field0_0x0 =
               (real_2_u_0)
               (CONCAT44(uVar18,fVar37 * 0.0005 + w.camera_pos.field0_0x0._s_0.x * 0.9995) |
               (ulonglong)(uint)(fVar44 * 0.0005 + w.camera_pos.field0_0x0._s_0.y * 0.9995) << 0x20)
          ;
          w.normal_camera_dist =
               w.normal_camera_dist * 0.9995 + (fVar45 * fVar14 + 300.0 + 500.0) * 0.0005;
        }
        auVar55 = ZEXT464((uint)w.normal_camera_dist);
        w._4_4_ = w._4_4_ & 0xffffff7f;
      }
      auVar43 = ZEXT1664(CONCAT124(auVar55._4_12_,auVar55._0_4_ / w.camera_dist));
      powf();
      w.camera_dist = auVar43._0_4_ * w.camera_dist;
      auVar48 = vandps_avx(ZEXT416((uint)(auVar55._0_4_ / w.camera_dist + -1.0)),
                           ___xmm_7fffffff7fffffff7fffffff7fffffff);
      if (auVar48._0_4_ < 0.01) {
        w.camera_dist = auVar55._0_4_;
      }
    }
    if (0 < w.map_prompt_timer) {
      w.map_prompt_timer = w.map_prompt_timer + -1;
    }
    fVar37 = param_1->fov * 0.5;
    tanf();
    uVar12 = w.bodies.field3_0x20.elements;
    rVar11 = last_valid_orientation;
    if ((bool)(1 < w.frame_number & bVar7)) {
      rVar26 = (pbVar34->cost_centroid).field0_0x0._s_0;
      fVar44 = rVar26.x;
      if (((NAN(fVar44)) || (fVar14 = rVar26.y, NAN(fVar14))) ||
         (((w.final_boss.field0_0x0.active_flags & 1) == 0 &&
          (1.6777216e+11 < fVar14 * fVar14 + fVar44 * fVar44 + 0.0)))) {
        prVar21 = &w.final_boss.x;
        if ((w.final_boss.field0_0x0.active_flags & 1) == 0) {
          prVar21 = &last_valid_x;
        }
        rVar4 = (real_2_u_0)prVar21->field0_0x0;
        w.camera_pos.field0_0x0 = rVar4;
        if (((0 < w.selected_body) &&
            (uVar15 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
            w.bodies.field0_0x0.index_table[uVar15].id == w.selected_body)) &&
           (w.bodies.field3_0x20.elements != (body *)0x0)) {
          iVar16 = w.bodies.field0_0x0.index_table[uVar15].index;
          pbVar1 = w.bodies.field3_0x20.elements + iVar16;
          abstractify_body(pbVar1);
          (((body *)(uVar12 + (longlong)iVar16 * 0x2d0))->cost_centroid).field0_0x0._s_0 =
               (real_2_u_0_s_0)rVar4;
          (((body *)(uVar12 + (longlong)iVar16 * 0x2d0))->center_of_mass).field0_0x0._s_0 =
               (real_2_u_0_s_0)rVar4;
          (((body *)(uVar12 + (longlong)iVar16 * 0x2d0))->old_center_of_mass).field0_0x0._s_0 =
               (real_2_u_0_s_0)rVar4;
          (((body *)(uVar12 + (longlong)iVar16 * 0x2d0))->center_of_mass_dot).field0_0x0 =
               (real_2_u_0)0x0;
          (((body *)(uVar12 + (longlong)iVar16 * 0x2d0))->orientation).field0_0x0._s_0 =
               (real_2_u_0_s_0)rVar11.field0_0x0;
          deabstractify_body(pbVar1);
          rVar26 = (pbVar34->cost_centroid).field0_0x0._s_0;
        }
      }
      iVar16 = get_biome(&w.map,(real_2)rVar26);
      if (iVar16 != 0) {
        last_valid_x.field0_0x0 =
             (real_2_u_0)*(real_2_u_0 *)&(pbVar34->center_of_mass).field0_0x0._s_0;
        last_valid_orientation.field0_0x0 =
             (real_2_u_0)*(real_2_u_0 *)&(pbVar34->orientation).field0_0x0._s_0;
      }
      if (ZPULL(*(undefined4 *)&w.field125_0x3e00.biome_types[iVar16].field_0x1c,1,1) == 0) {
        *(uint *)&w.field125_0x3e00.biome_types[iVar16].field_0x1c =
             *(undefined4 *)&w.field125_0x3e00.biome_types[iVar16].field_0x1c | 2;
        pbVar22 = get_biome_core(&w.map,(real_2)(pbVar34->cost_centroid).field0_0x0._s_0);
        uVar12 = w.field128_0x3e20.biome_modifiers;
        if (pbVar22 != (biome_core *)0x0) {
          lVar32 = (longlong)pbVar22->n_default_modifiers;
          iVar16 = pbVar22->n_modifiers;
          if ((pbVar22->n_default_modifiers < iVar16) &&
             (uVar25 = (ulonglong)(uint)w.n_message_queue, (uint)w.n_message_queue < 0x11)) {
            do {
              uVar15 = w.translations.max_entries;
              ppcVar13 = w.translations.keys;
              if ((uint)uVar25 < 0x11) {
                pcVar24 = ((biome_modifier *)(uVar12 + (longlong)pbVar22->modifiers[lVar32] * 0x20))
                          ->id;
                cVar3 = *pcVar24;
                if (cVar3 == '\0') {
                  uVar17 = 0x1505;
                }
                else {
                  uVar17 = 0x1505;
                  do {
                    pcVar24 = pcVar24 + 1;
                    uVar17 = uVar17 + ((int)cVar3 ^ uVar17 * 0x21);
                    cVar3 = *pcVar24;
                  } while (cVar3 != '\0');
                }
                uVar28 = (ulonglong)w.translations.max_entries;
                uVar31 = (ulonglong)uVar17 % uVar28;
                do {
                  lVar35 = (longlong)(int)uVar31;
                  if ((ppcVar13[lVar35] == (char *)0x0) || (strcmp(), extraout_EAX == 0))
                  goto LAB_140144b36;
                  uVar30 = (int)uVar31 + 1;
                  if (uVar30 == uVar15) {
                    uVar30 = 0;
                  }
                  uVar31 = (ulonglong)uVar30;
                  uVar23 = (uint)((ulonglong)uVar17 % uVar28);
                } while (uVar30 != uVar23);
                lVar35 = (longlong)(int)uVar23;
LAB_140144b36:
                pcVar24 = unknown_string;
                if ((w.translations.values[lVar35].text != (char **)0x0) &&
                   (pcVar24 = w.translations.values[lVar35].text[w.language_index],
                   pcVar24 == (char *)0x0)) {
                  pcVar24 = unknown_string;
                }
                w.n_message_queue = (uint)uVar25 + 1;
                w.message_queue[uVar25] = pcVar24;
                uVar25 = (ulonglong)(uint)w.n_message_queue;
                iVar16 = pbVar22->n_modifiers;
              }
              lVar32 = lVar32 + 1;
            } while (lVar32 < iVar16);
          }
        }
      }
      w.last_team = pbVar34->team;
      if ((w.last_mutations.items != (pbVar34->field70_0x2c0).mutation_items.items) &&
         (w.free_last_mutations != 0)) {
        free(w.last_mutations.items);
        w.free_last_mutations = 0;
      }
      w.last_mutations = (pbVar34->field70_0x2c0).mutation_items;
    }
    fVar44 = w.camera_dist;
    iVar16 = w.game_mode;
    fVar14 = 1.0;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = w.camera_pos.field0_0x0;
    auVar55 = ZEXT1664(auVar56);
    if (w.game_mode == 2 && !bVar7) {
      if (((param_3->pressed_buttons[0] | param_3->buttons[0]) & 0x14) != 0) {
        fVar36 = (w.camera_dist * 0.5) / (1.0 / fVar37);
        fVar37 = fVar36 * (param_3->dmouse).field0_0x0._s_0.x;
        fVar45 = fVar37 * 0.0;
        auVar48 = vinsertps_avx(ZEXT416((uint)fVar37),ZEXT416((uint)fVar45),0x10);
        auVar54 = vsubps_avx(auVar56,auVar48);
        fVar36 = fVar36 * (param_3->dmouse).field0_0x0._s_0.y;
        fVar44 = fVar36 * 0.0;
        auVar48 = vmovsldup_avx(ZEXT416((uint)fVar36));
        auVar51._0_4_ = auVar54._0_4_ + fVar44;
        auVar51._4_4_ = auVar54._4_4_ + 0.0;
        auVar51._8_4_ = auVar54._8_4_ + 0.0;
        auVar51._12_4_ = auVar54._12_4_ + 0.0;
        auVar48 = vsubps_avx(auVar54,auVar48);
        auVar56 = vblendps_avx(auVar51,auVar48,2);
        fVar44 = fVar44 + (w.camera_dist - fVar45);
      }
      w.dead = 1;
      auVar6._4_4_ = settings.field3_0xc.keybinds.editor_down;
      auVar6._0_4_ = settings.field3_0xc.keybinds.editor_up;
      auVar6._8_4_ = settings.field3_0xc.keybinds.editor_left;
      auVar6._12_4_ = settings.field3_0xc.keybinds.editor_right;
      auVar48 = vpsrad_avx(auVar6,0x1f);
      auVar48 = vpsrld_avx(auVar48,0x1d);
      auVar48 = vpaddd_avx(auVar6,auVar48);
      auVar48 = vpsrad_avx(auVar48,3);
      rVar26 = (param_3->gamepad).right_stick.field0_0x0._s_0;
      auVar48 = vpinsrd_avx(ZEXT416((uint)(((param_3->pressed_buttons[auVar48._12_4_] |
                                            param_3->buttons[auVar48._12_4_]) >>
                                            ((byte)settings.field3_0xc.keybinds.editor_down & 7) & 1
                                           ) != 0) -
                                    (uint)(((param_3->pressed_buttons[auVar48._8_4_] |
                                            param_3->buttons[auVar48._8_4_]) >>
                                            (settings.field3_0xc.keybinds.editor_left & 7U) & 1) !=
                                          0)),
                            (uint)(((param_3->pressed_buttons[auVar48._0_4_] |
                                    param_3->buttons[auVar48._0_4_]) >>
                                    (settings.field3_0xc.keybinds.editor_up & 7U) & 1) != 0) -
                            (uint)(((param_3->pressed_buttons[auVar48._4_4_] |
                                    param_3->buttons[auVar48._4_4_]) >>
                                    (settings.field3_0xc.keybinds.editor_down & 7U) & 1) != 0),1);
      auVar48 = vcvtdq2ps_avx(auVar48);
      fVar37 = *(float *)(&__real_40a0000041c80000 +
                         (ulonglong)(((param_3->pressed_buttons[2] | param_3->buttons[2]) & 2) == 0)
                         * 4);
      auVar54 = vmovsldup_avx(ZEXT416((uint)(((param_3->gamepad).right_trigger * -0.8 + 1.0) * 10.0)
                                     ));
      auVar55 = ZEXT1664(CONCAT412(auVar56._12_4_ + fVar37 * auVar48._12_4_ + auVar54._12_4_ * 0.0,
                                   CONCAT48(auVar56._8_4_ + fVar37 * auVar48._8_4_ +
                                            auVar54._8_4_ * 0.0,
                                            CONCAT44(auVar56._4_4_ + fVar37 * auVar48._4_4_ +
                                                     auVar54._4_4_ * rVar26.y,
                                                     auVar56._0_4_ + fVar37 * auVar48._0_4_ +
                                                     auVar54._0_4_ * rVar26.x))));
    }
    else if (bVar7) {
      INSERT(w._4_4_,pbVar34->parent_id != 0,2,1);
      w._4_4_ = uVar18;
      (pbVar34->brain).fun = player_brain;
      fVar37 = (pbVar34->center_of_mass).field0_0x0._s_0.x;
      fVar45 = (pbVar34->center_of_mass).field0_0x0._s_0.y;
      if ((iVar16 == 1) && (w.final_boss.dead != false)) {
        auVar55 = ZEXT464((uint)fVar37);
        auVar54 = ZEXT416((uint)fVar37);
        fVar36 = w.final_boss.x.field0_0x0._s_0.x + 7000.0;
        auVar43 = ZEXT464((uint)fVar36);
        auVar48 = ZEXT416((uint)fVar36);
        if ((fVar36 + 1000.0 < fVar37) && (fVar45 < w.final_boss.x.field0_0x0._s_0.y + 11300.0)) {
          w._4_4_ = uVar18 | 8;
          w.run.ending = 1;
          w.run.xp = pbVar34->xp;
          w.run.level = pbVar34->level;
          w.run.frames = w.frame_number;
          (*best_GetSystemTimeAsFileTime)((_FILETIME *)&local_888[0].s);
          auVar39._8_8_ = 0;
          auVar39._0_8_ = local_888[0].QuadPart;
          auVar48 = vunpcklps_avx(auVar39,___xmm_00000000000000004530000043300000);
          auVar54 = vsubpd_avx(auVar48,___xmm_45300000000000004330000000000000);
          auVar48 = vshufpd_avx(auVar54,auVar54,1);
          w.run.end_time = (auVar48._0_8_ + auVar54._0_8_) * 1e-07 + -11644473600.0;
          w.run.biomes_explored = 0;
          if (0 < w.n_biome_types) {
            if (w.n_biome_types == 1) {
              uVar25 = 0;
              iVar16 = 0;
            }
            else {
              puVar33 = (uint *)&w.field125_0x3e00.biome_types[1].field_0x1c;
              uVar25 = 0;
              iVar16 = 0;
              do {
                if ((~puVar33[-0x172a] & 3) == 0) {
                  iVar16 = iVar16 + 1;
                  w.run.biomes_explored = iVar16;
                }
                if ((~*puVar33 & 3) == 0) {
                  iVar16 = iVar16 + 1;
                  w.run.biomes_explored = iVar16;
                }
                uVar25 = uVar25 + 2;
                puVar33 = puVar33 + 0x2e54;
              } while ((w.n_biome_types & 0x7ffffffe) != uVar25);
              if ((w.n_biome_types & 1U) == 0) goto LAB_140144f5c;
            }
            if ((~*(uint *)&w.field125_0x3e00.biome_types[uVar25].field_0x1c & 3) == 0) {
              w.run.biomes_explored = iVar16 + 1;
            }
          }
LAB_140144f5c:
          if (w.game_mode == 1) {
            save_run_stats(&w.run);
            settings.win_unlocks = 1;
            save_settings();
            auVar54 = auVar55._0_16_;
            auVar48 = auVar43._0_16_;
          }
          else {
            settings.win_unlocks = 1;
            save_settings();
            auVar54 = auVar55._0_16_;
            auVar48 = auVar43._0_16_;
          }
          pqVar10 = ac.queued_sounds;
          if (w.game_mode == 1) {
            give_achievement("ACH_WIN");
            auVar54 = auVar55._0_16_;
            auVar48 = auVar43._0_16_;
            pqVar10 = ac.queued_sounds;
          }
          ac.queued_sounds = pqVar10;
          if ((((ac.initialized == true) && (0 < sounds.run_complete.n_samples)) &&
              (sounds.run_complete.data != (short *)0x0)) &&
             (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
            uVar15 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
            pqVar10[(int)uVar15].sound = (sound_t *)0x1401eb160;
            pqVar10[(int)uVar15].params.volume = 1.0;
            pqVar10[(int)uVar15].params.delay = 0.0;
            pqVar10[(int)uVar15].params.pitch_shift = 0.0;
            pqVar10[(int)uVar15].params.lowpass_dist = 0.0;
            piVar2 = &pqVar10[(int)uVar15].params.type;
            *(undefined8 *)piVar2 = 0;
            *(undefined8 *)(piVar2 + 2) = 0;
            pqVar10[(int)uVar15].kill = false;
            LOCK();
            ac.last_queued_sound = ac.last_queued_sound + 1;
            UNLOCK();
          }
          pqVar10 = ac.queued_sounds;
          if (((ac.initialized == true) && (0 < sounds.run_complete_music.n_samples)) &&
             ((sounds.run_complete_music.data != (short *)0x0 &&
              (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
            uVar15 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
            ac.queued_sounds[(int)uVar15].sound = (sound_t *)0x1401eb170;
            pqVar8 = pqVar10 + (int)uVar15;
            auVar40 = SUB6416(ZEXT464(0x3f800000),0);
            (pqVar8->params).volume = (float)auVar40._0_4_;
            (pqVar8->params).delay = (float)auVar40._4_4_;
            (pqVar8->params).pitch_shift = (float)auVar40._8_4_;
            (pqVar8->params).lowpass_dist = (float)auVar40._12_4_;
            pqVar10[(int)uVar15].params.type = 1;
            pqVar10[(int)uVar15].filtered[0] = 0.0;
            pqVar10[(int)uVar15].filtered[1] = 0.0;
            *(undefined8 *)((longlong)pqVar10[(int)uVar15].filtered + 5) = 0;
            LOCK();
            ac.last_queued_sound = ac.last_queued_sound + 1;
            UNLOCK();
          }
          w.selected_body = 0;
        }
        auVar48 = vminss_avx(auVar54,auVar48);
        fVar37 = auVar48._0_4_;
      }
      local_898.string[0] = 'E';
      local_898.string[1] = 'C';
      local_898.string[2] = 'H';
      local_898.string[3] = 'O';
      local_898.string[4] = 'L';
      local_898.string[5] = 'O';
      local_898.string[6] = 'C';
      local_898.string[7] = 'A';
      local_898._s_0.hi = 0x4e4f4954;
      iVar16 = get_mutation_index(&local_898);
      w.wall_vision = 0.0;
      if (w.field55_0x3a28.body_auxiliary_data
          [(longlong)iVar16 +
           (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
           ((longlong)pbVar34 - w.bodies.field3_0x20._0_8_ >> 4)] != '\0') {
        w.wall_vision = 1.0;
      }
      auVar48 = vpinsrd_avx(ZEXT416((uint)fVar37),fVar45,1);
      auVar55 = ZEXT1664(auVar48);
    }
    else {
      w._4_4_ = w._4_4_ | 4;
    }
    auVar48 = auVar55._0_16_;
    w.debug_view_mode = w.debug_view_mode % 4;
    rVar4 = (real_2_u_0)vmovlps_avx(auVar48);
    (param_1->camera_pos).field0_0x0.xy.field0_0x0 = rVar4;
    (param_1->camera_pos).field0_0x0._s_0.z = fVar44;
    if (w.im.body_id != 0) {
      auVar41._8_8_ = 0;
      auVar41._0_8_ = (param_1->resolution).field0_0x0;
      auVar48 = vcvtdq2ps_avx(auVar41);
      auVar54 = vmovshdup_avx(auVar48);
      auVar43 = ZEXT1664(CONCAT124(auVar48._4_12_,auVar48._0_4_ / auVar54._0_4_));
      fVar44 = 0.5;
      fVar37 = param_1->fov * 0.5;
      tanf();
      auVar48 = auVar55._0_16_;
      (param_1->camera_pos).field0_0x0._s_0.x =
           (fVar44 * auVar43._0_4_) / ((fVar14 / fVar37) / (param_1->camera_pos).field0_0x0._s_0.z)
           + (param_1->camera_pos).field0_0x0._s_0.x;
    }
    *(undefined8 *)&(param_1->camera_axes).field0_0x0 = 0x3f800000;
    *(undefined8 *)((longlong)&(param_1->camera_axes).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(param_1->camera_axes).field0_0x0 + 0x10) = 0x800000003f800000;
    *(undefined8 *)((longlong)&(param_1->camera_axes).field0_0x0 + 0x18) = 0x80000000;
    (param_1->camera_axes).field0_0x0.data[8] = 1.0;
    w.camera_pos.field0_0x0 = (real_2_u_0)vmovlps_avx(auVar48);
    uVar18 = settings.field3_0xc.keybinds.extend + 7;
    if (-1 < settings.field3_0xc.keybinds.extend) {
      uVar18 = settings.field3_0xc.keybinds.extend;
    }
    iVar16 = (int)uVar18 >> 3;
    if (settings.toggle_seek == 0) {
      uVar18 = settings.field3_0xc.keybinds.retract + 7;
      if (-1 < settings.field3_0xc.keybinds.retract) {
        uVar18 = settings.field3_0xc.keybinds.retract;
      }
      uVar15 = ((uint)(((param_3->pressed_buttons[iVar16] | param_3->buttons[iVar16]) >>
                        (settings.field3_0xc.keybinds.extend & 7U) & 1) != 0) +
               ((byte)((param_3->pressed_buttons[(int)uVar18 >> 3] |
                       param_3->buttons[(int)uVar18 >> 3]) >>
                      ((byte)settings.field3_0xc.keybinds.retract & 7)) & 1) * 2) * 0x40000;
LAB_1401452d6:
      w._4_4_ = w._4_4_ & 0xfff3ffff | uVar15;
    }
    else {
      if ((param_3->pressed_buttons[iVar16] >> (settings.field3_0xc.keybinds.extend & 7U) & 1) != 0)
      {
        w._4_4_ = w._4_4_ & 0xfff3ffff | (uint)(w.seek_toggled != 1) << 0x12;
      }
      uVar18 = settings.field3_0xc.keybinds.retract + 7;
      if (-1 < settings.field3_0xc.keybinds.retract) {
        uVar18 = settings.field3_0xc.keybinds.retract;
      }
      if ((param_3->pressed_buttons[(int)uVar18 >> 3] >> (settings.field3_0xc.keybinds.retract & 7U)
          & 1) != 0) {
        uVar15 = (uint)(w.seek_toggled != 2) << 0x13;
        goto LAB_1401452d6;
      }
    }
    uVar18 = settings.field3_0xc.keybinds.ability + 7;
    if (-1 < settings.field3_0xc.keybinds.ability) {
      uVar18 = settings.field3_0xc.keybinds.ability;
    }
    iVar16 = (int)uVar18 >> 3;
    if (settings.toggle_ability == 0) {
      uVar15 = 0x8000;
      if (((param_3->pressed_buttons[iVar16] | param_3->buttons[iVar16]) >>
           (settings.field3_0xc.keybinds.ability & 7U) & 1) == 0) {
        uVar15 = (*(uint *)&(param_3->gamepad).buttons & 0x1000) << 3;
      }
      uVar18 = settings.field3_0xc.keybinds.ability1 + 7;
      if (-1 < settings.field3_0xc.keybinds.ability1) {
        uVar18 = settings.field3_0xc.keybinds.ability1;
      }
      uVar17 = 0x10000;
      if (((param_3->pressed_buttons[(int)uVar18 >> 3] | param_3->buttons[(int)uVar18 >> 3]) >>
           (settings.field3_0xc.keybinds.ability1 & 7U) & 1) == 0) {
        uVar17 = (*(uint *)&(param_3->gamepad).buttons & 0x2000) << 3;
      }
      uVar17 = w._4_4_ & 0xfffe7fff | uVar15 | uVar17;
      uVar18 = settings.field3_0xc.keybinds.ability2 + 7;
      if (-1 < settings.field3_0xc.keybinds.ability2) {
        uVar18 = settings.field3_0xc.keybinds.ability2;
      }
      uVar15 = 0x20000;
      if (((param_3->pressed_buttons[(int)uVar18 >> 3] | param_3->buttons[(int)uVar18 >> 3]) >>
           (settings.field3_0xc.keybinds.ability2 & 7U) & 1) == 0) {
        uVar15 = (*(uint *)&(param_3->gamepad).buttons & 0x8000) << 2;
      }
    }
    else {
      uVar15 = 0x8000;
      if (((param_3->pressed_buttons[iVar16] >> (settings.field3_0xc.keybinds.ability & 7U) & 1) ==
           0) && (uVar15 = 0, ((param_3->gamepad).buttons & 0x1000) != 0)) {
        uVar15 = (uint)((param_3->gamepad_prev_buttons & 0x1000) == 0) << 0xf;
      }
      uVar18 = settings.field3_0xc.keybinds.ability1 + 7;
      if (-1 < settings.field3_0xc.keybinds.ability1) {
        uVar18 = settings.field3_0xc.keybinds.ability1;
      }
      uVar17 = 0x10000;
      if (((param_3->pressed_buttons[(int)uVar18 >> 3] >>
            (settings.field3_0xc.keybinds.ability1 & 7U) & 1) == 0) &&
         (uVar17 = 0, ((param_3->gamepad).buttons & 0x2000) != 0)) {
        uVar17 = (uint)((param_3->gamepad_prev_buttons & 0x2000) == 0) << 0x10;
      }
      uVar17 = w._4_4_ & 0xfffe7fff | w._4_4_ & 0x8000 ^ uVar15 | w._4_4_ & 0x10000 ^ uVar17;
      uVar18 = settings.field3_0xc.keybinds.ability2 + 7;
      if (-1 < settings.field3_0xc.keybinds.ability2) {
        uVar18 = settings.field3_0xc.keybinds.ability2;
      }
      uVar15 = 0x20000;
      if (((param_3->pressed_buttons[(int)uVar18 >> 3] >>
            (settings.field3_0xc.keybinds.ability2 & 7U) & 1) == 0) &&
         (uVar15 = 0, (param_3->gamepad).buttons < 0)) {
        uVar15 = (uint)(-1 < param_3->gamepad_prev_buttons) << 0x11;
      }
      uVar15 = w._4_4_ & 0x20000 ^ uVar15;
    }
    uVar30 = uVar17 & 0xfffdffff | uVar15;
    if (w.n_player_commands < w.input_delay) {
      w.n_player_commands = w.n_player_commands + 1;
    }
    else {
      iVar16 = w.player_command_start + 1;
      w.player_command_start = 0;
      if (iVar16 != 0x168) {
        w.player_command_start = iVar16;
      }
    }
    uVar25 = (ulonglong)(longlong)(w.n_player_commands + w.player_command_start) % 0x168;
    prVar21 = &w.player_commands[uVar25].movement;
    if ((uVar17 & 0x1000) == 0) {
      uVar23 = (uint)(ushort)(param_3->gamepad).buttons;
      fVar37 = (param_3->gamepad).right_trigger;
      fVar44 = (param_3->gamepad).left_stick.field0_0x0._s_0.x;
      fVar45 = (param_3->gamepad).left_stick.field0_0x0._s_0.y;
      fVar36 = (param_3->gamepad).right_stick.field0_0x0._s_0.x;
    }
    else {
      fVar37 = 0.0;
      uVar23 = 0;
      fVar44 = 0.0;
      fVar45 = 0.0;
      fVar36 = 0.0;
    }
    auVar52._0_4_ = -fVar36;
    auVar52._4_4_ = 0x80000000;
    auVar52._8_4_ = 0x80000000;
    auVar52._12_4_ = 0x80000000;
    auVar48 = vinsertps_avx(auVar52,ZEXT416((uint)(fVar37 - (float)(uVar23 >> 9 & 1))),0x1c);
    auVar50._8_4_ = 0x3f800000;
    auVar50._0_8_ = 0x3f8000003f800000;
    auVar50._12_4_ = 0x3f800000;
    auVar48 = vminps_avx(auVar50,auVar48);
    auVar53._8_4_ = 0xbf800000;
    auVar53._0_8_ = 0xbf800000bf800000;
    auVar53._12_4_ = 0xbf800000;
    auVar48 = vmaxps_avx(auVar53,auVar48);
    rVar4 = (real_2_u_0)vmovlps_avx(auVar48);
    w._4_4_ = uVar30;
    prVar21->field0_0x0 = rVar4;
    uVar18 = settings.field3_0xc.keybinds.forward;
    auVar5._4_4_ = settings.field3_0xc.keybinds.backward;
    auVar5._0_4_ = settings.field3_0xc.keybinds.forward;
    auVar5._8_4_ = settings.field3_0xc.keybinds.left;
    auVar5._12_4_ = settings.field3_0xc.keybinds.right;
    auVar54 = vpsrad_avx(auVar5,0x1f);
    auVar54 = vpsrld_avx(auVar54,0x1d);
    auVar54 = vpaddd_avx(auVar5,auVar54);
    auVar54 = vpsrad_avx(auVar54,3);
    uVar23 = settings.field3_0xc.keybinds.backward & 7;
    rVar26.x = 0.0;
    rVar26.y = 0.0;
    fVar37 = auVar48._0_4_ +
             (float)(int)((uint)(((param_3->pressed_buttons[auVar54._8_4_] |
                                  param_3->buttons[auVar54._8_4_]) >>
                                  ((byte)settings.field3_0xc.keybinds.forward & 7) & 1) != 0) -
                         (uint)(((param_3->pressed_buttons[auVar54._12_4_] |
                                 param_3->buttons[auVar54._12_4_]) >>
                                 (settings.field3_0xc.keybinds.right & 7U) & 1) != 0));
    (prVar21->field0_0x0)._s_0.x = fVar37;
    auVar48 = vmovshdup_avx(auVar48);
    auVar48 = vinsertps_avx(ZEXT416((uint)fVar37),
                            ZEXT416((uint)(auVar48._0_4_ +
                                          (float)(int)((uint)(((param_3->pressed_buttons
                                                                [auVar54._0_4_] |
                                                               param_3->buttons[auVar54._0_4_]) >>
                                                               (uVar18 & 7) & 1) != 0) -
                                                      (uint)(((param_3->pressed_buttons
                                                               [auVar54._4_4_] |
                                                              param_3->buttons[auVar54._4_4_]) >>
                                                              uVar23 & 1) != 0)))),0x10);
    auVar48 = vminps_avx(auVar50,auVar48);
    auVar48 = vmaxps_avx(auVar53,auVar48);
    rVar4 = (real_2_u_0)vmovlps_avx(auVar48);
    prVar21->field0_0x0 = rVar4;
    w.player_commands[uVar25].grab_target.field0_0x0 = (real_2_u_0)0x0;
    w.player_commands[uVar25].grab_weight = 0.0;
    w.player_commands[uVar25].grab_dir = 1.0;
    if ((uVar17 & 0xc0000) != 0) {
      rVar26.y = (param_3->cursor_x).field0_0x0._s_0.y +
                 w.player_commands[uVar25].grab_target.field0_0x0._s_0.y;
      rVar26.x = (param_3->cursor_x).field0_0x0._s_0.x +
                 w.player_commands[uVar25].grab_target.field0_0x0._s_0.x;
      w.player_commands[uVar25].grab_target.field0_0x0._s_0 = rVar26;
      w.player_commands[uVar25].grab_weight = 1.0;
      fVar14 = 2.0;
      if ((uVar17 & 0x80000) != 0) {
        w.player_commands[uVar25].grab_dir = -1.0;
      }
    }
    if (0.010000001 < fVar45 * fVar45 + fVar44 * fVar44 + 0.0) {
      w.player_commands[uVar25].grab_target.field0_0x0 =
           (real_2_u_0)
           (CONCAT44(rVar26.y,fVar44 * 200.0 + w.camera_pos.field0_0x0._s_0.x +
                              w.player_commands[uVar25].grab_target.field0_0x0._s_0.x) |
           (ulonglong)
           (uint)(fVar45 * 200.0 + w.camera_pos.field0_0x0._s_0.y +
                 w.player_commands[uVar25].grab_target.field0_0x0._s_0.y) << 0x20);
      w.player_commands[uVar25].grab_weight = fVar14;
    }
    w.player_commands[uVar25].abilities[0] = (bool)((byte)(uVar30 >> 0xf) & 1);
    w.player_commands[uVar25].field_0x19 = (byte)(uVar30 >> 0x10) & 1;
    w.player_commands[uVar25].field_0x1a = (char)(uVar15 >> 0x11);
    if (w.game_mode == 2) {
      sandbox_cell_update(&w.sm,param_1,param_3);
    }
    else if (w.game_mode == 1) {
      w._4_4_ = uVar17 & 0xfffdffbf | uVar15;
    }
  }
  pvVar20 = TlsGetValue(tls_index);
  prVar27 = (render_context *)0x0;
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar20 + 8) + 0x18);
  bVar29 = w.game_mode != 0 & w._4_1_ >> 6;
  if (bVar29 == 0) {
    update_cells(param_1,prVar27,param_3);
    iVar16 = *piVar19;
    if ((iVar16 != 0) || (w.im.body_id == 0)) goto LAB_140143e69;
    do_inspector_game_update();
  }
  else {
    update_cells_frozen(param_1,prVar27,param_3);
  }
  iVar16 = *piVar19;
LAB_140143e69:
  if (iVar16 == 0) {
    begin_trace_stage("auto-save");
    if ((w.game_mode == 1 & w._4_1_ >> 2) == 1) {
      sprintf((char *)&local_888[0].QuadPart,"%s/player.bod");
      sprintf((char *)&local_488[0].QuadPart,"%s/world.run");
      DeleteFileA((LPCSTR)&local_888[0].QuadPart);
      DeleteFileA((LPCSTR)&local_488[0].QuadPart);
    }
    else if (((w.game_mode != 0) && (w.menu != 4)) &&
            ((w.frame_number * -0x69d0369d + 0x1b4e810U >> 4 | w.frame_number * 0x30000000) <
             0x369d03)) {
      queue_saving_world();
    }
    pvVar20 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar20 + 0xa8) != 0)) {
      QueryPerformanceFrequency(local_888);
      QueryPerformanceCounter(local_488);
      *(double *)(*(longlong *)((longlong)pvVar20 + 0xb8) + 0x40) =
           (double)local_488[0].QuadPart / (double)local_888[0].QuadPart;
      *(undefined8 *)((longlong)pvVar20 + 0xb8) = **(undefined8 **)((longlong)pvVar20 + 0xb8);
    }
    if (bVar29 == 0) {
      w.frame_number = w.frame_number + 1;
    }
    pvVar20 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar20 + 0xa8) != 0)) {
      QueryPerformanceFrequency(local_888);
      QueryPerformanceCounter(local_488);
      *(double *)(*(longlong *)((longlong)pvVar20 + 0xb8) + 0x40) =
           (double)local_488[0].QuadPart / (double)local_888[0].QuadPart;
      *(undefined8 *)((longlong)pvVar20 + 0xb8) = **(undefined8 **)((longlong)pvVar20 + 0xb8);
    }
  }
  return;
}

