
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl update_game(struct render_context * __ptr64,struct render_context * __ptr64,struct
   user_input * __ptr64) */

void __cdecl update_game(render_context *param_1,render_context *param_2,user_input *param_3)

{
  body *pbVar1;
  int *piVar2;
  int_2_u_0_s_0 iVar3;
  char cVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  queued_sound *pqVar7;
  queued_sound *pqVar8;
  undefined8 uVar9;
  int_2 iVar10;
  int_2 iVar11;
  char **ppcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  LPVOID pvVar19;
  real_2_u_0 *prVar20;
  biome_core *pbVar21;
  real_2 *prVar22;
  char *pcVar23;
  real_2 rVar24;
  ulonglong uVar25;
  real_2_u_0 rVar26;
  real_2_u_0 rVar27;
  render_context *prVar28;
  ulonglong uVar29;
  real_2_u_0_s_0 rVar30;
  byte bVar31;
  uint uVar32;
  body *pbVar33;
  ulonglong uVar34;
  longlong lVar35;
  char *pcVar36;
  uint uVar37;
  uchar *puVar38;
  uint *puVar39;
  longlong lVar40;
  real_2 rVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  int iVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar54;
  int iVar56;
  undefined1 auVar55 [16];
  int iVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  float fVar62;
  real_2_u_0 rVar63;
  real_2_u_0 rVar64;
  float fVar65;
  spawn_creature_params local_cf8;
  int local_ce8;
  int iStack_ce4;
  int iStack_ce0;
  int iStack_cdc;
  int local_cd8;
  int iStack_cd4;
  int iStack_cd0;
  int iStack_ccc;
  id_t local_cc8;
  LARGE_INTEGER local_cb8;
  uint local_cb0;
  LARGE_INTEGER local_8b8 [128];
  char local_4b8 [1144];
  undefined1 auVar61 [16];
  
                    /* INLINE_REGION_START: get_context */
  piVar18 = TlsGetValue(tls_index);
                    /* INLINE_REGION_END */
  if (*piVar18 == 0) {
    begin_trace_stage("update_game");
    fVar58 = (param_3->mouse).field0_0x0._s_0.x;
                    /* INLINE_REGION_START: operator-, abs_per_axis, sd_rectangle */
    fVar42 = ABS(fVar58 - w.sm.block_center.field0_0x0._s_0.x);
    fVar48 = ABS((param_3->mouse).field0_0x0._s_0.y - w.sm.block_center.field0_0x0._s_0.y);
    if ((w.sm.block_zone.field0_0x0._s_0.x <= fVar42) ||
       (w.sm.block_zone.field0_0x0._s_0.y <= fVar48)) {
      uVar17 = w.sm.block_zone.field0_0x0._s_0.x;
      if (fVar42 <= w.sm.block_zone.field0_0x0._s_0.x) {
        uVar17 = fVar42;
      }
      fVar43 = -w.sm.block_zone.field0_0x0._s_0.x;
      if (-w.sm.block_zone.field0_0x0._s_0.x <= (float)uVar17) {
        fVar43 = (float)uVar17;
      }
      uVar17 = w.sm.block_zone.field0_0x0._s_0.y;
      if (fVar48 <= w.sm.block_zone.field0_0x0._s_0.y) {
        uVar17 = fVar48;
      }
      fVar49 = -w.sm.block_zone.field0_0x0._s_0.y;
      if (-w.sm.block_zone.field0_0x0._s_0.y <= (float)uVar17) {
        fVar49 = (float)uVar17;
      }
      fVar43 = SQRT((fVar48 - fVar49) * (fVar48 - fVar49) +
                    (fVar42 - fVar43) * (fVar42 - fVar43) + 0.0);
    }
    else {
      fVar43 = fVar42 - w.sm.block_zone.field0_0x0._s_0.x;
      if (fVar42 - w.sm.block_zone.field0_0x0._s_0.x <= fVar48 - w.sm.block_zone.field0_0x0._s_0.y)
      {
        fVar43 = fVar48 - w.sm.block_zone.field0_0x0._s_0.y;
      }
    }
                    /* INLINE_REGION_END */
    if (!(bool)(~(w.im.body_id != 0 && 0.0 < fVar58) & 0.03 < fVar43)) {
      param_3->buttons[0] = '\0';
      param_3->pressed_buttons[0] = '\0';
      param_3->mouse_wheel = 0.0;
                    /* INLINE_REGION_START: clear_input_state */
    }
    lVar40 = DAT_1402092f0;
    if (w.show_console == true) {
      (param_3->dmouse).field0_0x0 = (real_2_u_0)0x0;
      param_3->n_text_stream = 0;
      param_3->text_modifiers = 0;
      param_3->mouse_wheel = 0.0;
      param_3->mouse_hwheel = 0.0;
      param_3->buttons[0] = '\0';
      param_3->buttons[1] = '\0';
      param_3->buttons[2] = '\0';
      param_3->buttons[3] = '\0';
      param_3->buttons[4] = '\0';
      param_3->buttons[5] = '\0';
      param_3->buttons[6] = '\0';
      param_3->buttons[7] = '\0';
      param_3->buttons[8] = '\0';
      param_3->buttons[9] = '\0';
      param_3->buttons[10] = '\0';
      param_3->buttons[0xb] = '\0';
      param_3->buttons[0xc] = '\0';
      param_3->buttons[0xd] = '\0';
      param_3->buttons[0xe] = '\0';
      param_3->buttons[0xf] = '\0';
      param_3->buttons[0x10] = '\0';
      param_3->buttons[0x11] = '\0';
      param_3->buttons[0x12] = '\0';
      param_3->buttons[0x13] = '\0';
      param_3->buttons[0x14] = '\0';
      param_3->buttons[0x15] = '\0';
      param_3->buttons[0x16] = '\0';
      param_3->buttons[0x17] = '\0';
      param_3->buttons[0x18] = '\0';
      param_3->buttons[0x19] = '\0';
      param_3->buttons[0x1a] = '\0';
      param_3->buttons[0x1b] = '\0';
      param_3->buttons[0x1c] = '\0';
      param_3->buttons[0x1d] = '\0';
      param_3->buttons[0x1e] = '\0';
      param_3->buttons[0x1f] = '\0';
      param_3->pressed_buttons[0] = '\0';
      param_3->pressed_buttons[1] = '\0';
      param_3->pressed_buttons[2] = '\0';
      param_3->pressed_buttons[3] = '\0';
      param_3->pressed_buttons[4] = '\0';
      param_3->pressed_buttons[5] = '\0';
      param_3->pressed_buttons[6] = '\0';
      param_3->pressed_buttons[7] = '\0';
      param_3->pressed_buttons[8] = '\0';
      param_3->pressed_buttons[9] = '\0';
      param_3->pressed_buttons[10] = '\0';
      param_3->pressed_buttons[0xb] = '\0';
      param_3->pressed_buttons[0xc] = '\0';
      param_3->pressed_buttons[0xd] = '\0';
      param_3->pressed_buttons[0xe] = '\0';
      param_3->pressed_buttons[0xf] = '\0';
      param_3->pressed_buttons[0x10] = '\0';
      param_3->pressed_buttons[0x11] = '\0';
      param_3->pressed_buttons[0x12] = '\0';
      param_3->pressed_buttons[0x13] = '\0';
      param_3->pressed_buttons[0x14] = '\0';
      param_3->pressed_buttons[0x15] = '\0';
      param_3->pressed_buttons[0x16] = '\0';
      param_3->pressed_buttons[0x17] = '\0';
      param_3->pressed_buttons[0x18] = '\0';
      param_3->pressed_buttons[0x19] = '\0';
      param_3->pressed_buttons[0x1a] = '\0';
      param_3->pressed_buttons[0x1b] = '\0';
      param_3->pressed_buttons[0x1c] = '\0';
      param_3->pressed_buttons[0x1d] = '\0';
      param_3->pressed_buttons[0x1e] = '\0';
      param_3->pressed_buttons[0x1f] = '\0';
      param_3->released_buttons[0] = '\0';
      param_3->released_buttons[1] = '\0';
      param_3->released_buttons[2] = '\0';
      param_3->released_buttons[3] = '\0';
      param_3->released_buttons[4] = '\0';
      param_3->released_buttons[5] = '\0';
      param_3->released_buttons[6] = '\0';
      param_3->released_buttons[7] = '\0';
      param_3->released_buttons[8] = '\0';
      param_3->released_buttons[9] = '\0';
      param_3->released_buttons[10] = '\0';
      param_3->released_buttons[0xb] = '\0';
      param_3->released_buttons[0xc] = '\0';
      param_3->released_buttons[0xd] = '\0';
      param_3->released_buttons[0xe] = '\0';
      param_3->released_buttons[0xf] = '\0';
      param_3->released_buttons[0x10] = '\0';
      param_3->released_buttons[0x11] = '\0';
      param_3->released_buttons[0x12] = '\0';
      param_3->released_buttons[0x13] = '\0';
      param_3->released_buttons[0x14] = '\0';
      param_3->released_buttons[0x15] = '\0';
      param_3->released_buttons[0x16] = '\0';
      param_3->released_buttons[0x17] = '\0';
      param_3->released_buttons[0x14] = '\0';
      param_3->released_buttons[0x15] = '\0';
      param_3->released_buttons[0x16] = '\0';
      param_3->released_buttons[0x17] = '\0';
      param_3->released_buttons[0x18] = '\0';
      param_3->released_buttons[0x19] = '\0';
      param_3->released_buttons[0x1a] = '\0';
      param_3->released_buttons[0x1b] = '\0';
      *(undefined8 *)(param_3->released_buttons + 0x1c) = 0;
      param_3->gamepad_prev_buttons = (param_3->gamepad).buttons;
      (param_3->gamepad).buttons = 0;
      (param_3->gamepad).left_trigger = 0.0;
      (param_3->gamepad).right_trigger = 0.0;
      param_3->cursor_type = 0;
      lVar40 = DAT_1402092f0;
    }
    DAT_1402092f0 = lVar40;
    if (0 < n_threads) {
      uVar13 = n_threads & 7;
      if ((uint)n_threads < 8) {
        uVar25 = 0;
      }
      else {
        uVar14 = n_threads & 0x7ffffff8;
        uVar25 = 0;
        do {
          *(undefined4 *)(*(longlong *)(lVar40 + uVar25 * 8) + 0xd8) = 0;
          *(undefined4 *)(*(longlong *)(lVar40 + 8 + uVar25 * 8) + 0xd8) = 0;
          *(undefined4 *)(*(longlong *)(lVar40 + 0x10 + uVar25 * 8) + 0xd8) = 0;
          *(undefined4 *)(*(longlong *)(lVar40 + 0x18 + uVar25 * 8) + 0xd8) = 0;
          *(undefined4 *)(*(longlong *)(lVar40 + 0x20 + uVar25 * 8) + 0xd8) = 0;
          *(undefined4 *)(*(longlong *)(lVar40 + 0x28 + uVar25 * 8) + 0xd8) = 0;
          *(undefined4 *)(*(longlong *)(lVar40 + 0x30 + uVar25 * 8) + 0xd8) = 0;
          *(undefined4 *)(*(longlong *)(lVar40 + 0x38 + uVar25 * 8) + 0xd8) = 0;
          uVar25 = uVar25 + 8;
        } while (uVar14 != uVar25);
        if ((ulonglong)uVar13 == 0) goto LAB_1401525c7;
      }
      uVar29 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar40 + uVar25 * 8 + uVar29 * 8) + 0xd8) = 0;
        uVar29 = uVar29 + 1;
      } while (uVar13 != uVar29);
    }
LAB_1401525c7:
    if (w.dead == 0) {
      uVar17 = settings.field3_0xc.keybinds.map + 7;
      if (-1 < settings.field3_0xc.keybinds.map) {
        uVar17 = settings.field3_0xc.keybinds.map;
      }
      uVar14 = w._4_4_ & 0xffffff7b |
               ((uint)(param_3->pressed_buttons[(int)uVar17 >> 3] >>
                      ((byte)settings.field3_0xc.keybinds.map & 7)) << 7 ^ w._4_4_) & 0x80;
      uVar13 = w.scroll_blocked;
      w._4_4_ = uVar14;
      if (uVar13 == 0) goto LAB_14015262d;
LAB_14015260f:
      param_3->mouse_wheel = 0.0;
                    /* INLINE_REGION_START: get_element */
      if (0 < w.selected_body) goto LAB_14015263b;
LAB_14015271d:
      w.selected_body = 0;
      bVar6 = false;
      pbVar33 = (body *)0x0;
      if (w.final_boss.dead == false) goto LAB_140152687;
LAB_140152738:
      w.boss_heart_omega_2 = 0.0;
      w.boss_heart_omega_dot_2 = 0.0;
      w.boss_heart_accel = 0.0;
      w.boss_heart_vel = 0.0;
      w.boss_heart_omega_dot = 0.0;
      w.boss_heart_omega = 0.0;
    }
    else {
      if (w.scroll_blocked != 0) goto LAB_14015260f;
LAB_14015262d:
      if (w.selected_body < 1) goto LAB_14015271d;
LAB_14015263b:
      uVar13 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body;
                    /* INLINE_REGION_END */
      if ((w.bodies.field0_0x0.index_table[uVar13].id != w.selected_body) ||
         (w.bodies.field3_0x20.elements == (body *)0x0)) goto LAB_14015271d;
      pbVar33 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar13].index;
      bVar6 = true;
      if (w.final_boss.dead != false) goto LAB_140152738;
LAB_140152687:
                    /* INLINE_REGION_START: clamp */
      auVar52._8_8_ = 0;
      auVar52._0_4_ = w.boss_heart_movement;
      auVar52._4_4_ = w.boss_heart_rotation;
      auVar52 = minps(___xmm_00000000000000003f8000003f800000,auVar52);
      auVar52 = maxps(___xmm_0000000000000000bf800000bf800000,auVar52);
      w._14896_8_ = auVar52._0_8_;
                    /* INLINE_REGION_END */
      w.boss_heart_accel = auVar52._0_4_ * 0.05 + w.boss_heart_vel * -0.01;
      w.boss_heart_vel = w.boss_heart_vel + w.boss_heart_accel;
      w.boss_heart_omega_dot = auVar52._4_4_ * 3e-05;
      w.boss_heart_omega = (w.boss_heart_omega + w.boss_heart_omega_dot) * 0.95;
      w.boss_heart_omega_2 = w.boss_heart_omega_2 * 0.999 + w.boss_heart_omega * 0.001;
      w.boss_heart_omega_dot_2 = w.boss_heart_omega_dot_2 * 0.999 + w.boss_heart_omega_dot * 0.001;
    }
    if (w.game_mode == 0) {
      w.vision_radius = 1000.0;
    }
    else {
      if (settings.field3_0xc.keybinds.zoom_out == 10) {
        auVar45._0_4_ = -param_3->mouse_wheel;
        auVar45._4_4_ = 0x80000000;
        auVar45._8_4_ = 0x80000000;
        auVar45._12_4_ = 0x80000000;
LAB_1401527b8:
                    /* INLINE_REGION_START: max */
        if (auVar45._0_4_ <= 0.0) {
          auVar55._12_4_ = 0;
          auVar55._0_12_ = auVar45._4_12_;
          auVar45 = auVar55 << 0x20;
        }
                    /* INLINE_REGION_END */
        fVar58 = auVar45._0_4_;
        if (settings.field3_0xc.keybinds.zoom_in != 10) goto LAB_1401527ca;
LAB_14015281f:
        auVar50._0_4_ = -param_3->mouse_wheel;
        auVar50._4_4_ = 0x80000000;
        auVar50._8_4_ = 0x80000000;
        auVar50._12_4_ = 0x80000000;
LAB_14015282c:
        if (auVar50._0_4_ <= 0.0) {
          auVar5._12_4_ = 0;
          auVar5._0_12_ = auVar50._4_12_;
          auVar50 = auVar5 << 0x20;
        }
        fVar58 = fVar58 - auVar50._0_4_;
      }
      else {
        if (settings.field3_0xc.keybinds.zoom_out == 0xb) {
          auVar45 = ZEXT416((uint)param_3->mouse_wheel);
          goto LAB_1401527b8;
        }
        uVar17 = settings.field3_0xc.keybinds.zoom_out + 7;
        if (-1 < settings.field3_0xc.keybinds.zoom_out) {
          uVar17 = settings.field3_0xc.keybinds.zoom_out;
        }
        fVar58 = (float)(((param_3->pressed_buttons[(int)uVar17 >> 3] |
                          param_3->buttons[(int)uVar17 >> 3]) >>
                          (settings.field3_0xc.keybinds.zoom_out & 7U) & 1) != 0) * 0.2 + 0.0;
        if (settings.field3_0xc.keybinds.zoom_in == 10) goto LAB_14015281f;
LAB_1401527ca:
        if (settings.field3_0xc.keybinds.zoom_in == 0xb) {
          auVar50 = ZEXT416((uint)param_3->mouse_wheel);
          goto LAB_14015282c;
        }
        uVar17 = settings.field3_0xc.keybinds.zoom_in + 7;
        if (-1 < settings.field3_0xc.keybinds.zoom_in) {
          uVar17 = settings.field3_0xc.keybinds.zoom_in;
        }
        fVar58 = fVar58 + (float)(((param_3->pressed_buttons[(int)uVar17 >> 3] |
                                   param_3->buttons[(int)uVar17 >> 3]) >>
                                   (settings.field3_0xc.keybinds.zoom_in & 7U) & 1) != 0) * -0.2;
      }
      fVar58 = powf(1.1,((float)((ushort)(param_3->gamepad).buttons >> 8 & 1) -
                        (param_3->gamepad).left_trigger) * 0.2 + fVar58);
      if (w.won == 0) {
        if (bVar6) {
          w.vision_radius = pbVar33->vision_radius;
        }
        else {
          w.vision_radius = 1000.0;
        }
        if ((char)(w.map_mode << 7) < '\0') {
                    /* INLINE_REGION_START: clamp */
          fVar42 = 50000.0;
          if (fVar58 * w.map_camera_dist <= 50000.0) {
            fVar42 = fVar58 * w.map_camera_dist;
          }
          w.map_camera_dist = 1800.0;
          if (1800.0 <= fVar42) {
            w.map_camera_dist = fVar42;
          }
                    /* INLINE_REGION_END */
          w.map_prompt_timer = 0;
          fVar58 = w.map_camera_dist;
        }
        else {
          fVar42 = (float)(param_1->resolution).field0_0x0._s_0.x /
                   (float)(param_1->resolution).field0_0x0._s_0.y;
          fVar42 = (1.0 / SQRT(fVar42 * fVar42 + 1.0)) * 1530.0;
                    /* INLINE_REGION_START: clamp */
          if (fVar58 * w.normal_camera_dist <= fVar42) {
            fVar42 = fVar58 * w.normal_camera_dist;
          }
          fVar58 = 40.0;
          w.normal_camera_dist = 40.0;
          if (40.0 <= fVar42) {
            fVar58 = fVar42;
            w.normal_camera_dist = fVar42;
          }
        }
      }
      else {
        w.vision_radius = w.vision_radius * 0.9995 + 1.0;
                    /* INLINE_REGION_START: operator+ */
        fVar42 = w.final_boss.x.field0_0x0._s_0.x + 5000.0 + -750.0;
        fVar58 = w.final_boss.x.field0_0x0._s_0.y + 10000.0 + 900.0;
                    /* INLINE_REGION_END */
        if (w.credits_timer < 0x2df1) {
                    /* INLINE_REGION_END
                       INLINE_REGION_START: operator*, operator+ */
          w.camera_pos.field0_0x0._s_0.y = w.camera_pos.field0_0x0._s_0.y * 0.998 + fVar58 * 0.002;
          w.camera_pos.field0_0x0._s_0.x = w.camera_pos.field0_0x0._s_0.x * 0.998 + fVar42 * 0.002;
                    /* INLINE_REGION_END */
          fVar58 = w.normal_camera_dist * 0.9995 + 0.25;
        }
        else {
          fVar48 = sinf((float)w.frame_number * 0.0013247181);
          fVar43 = sinf((float)w.frame_number * 0.0016180341);
          fVar49 = sinf((float)w.frame_number * 0.001);
                    /* INLINE_REGION_START: operator*, operator+ */
          w.camera_pos.field0_0x0._s_0.y =
               w.camera_pos.field0_0x0._s_0.y * 0.9995 + (fVar43 * 100.0 + fVar58) * 0.0005;
          w.camera_pos.field0_0x0._s_0.x =
               w.camera_pos.field0_0x0._s_0.x * 0.9995 + (fVar42 + fVar48 * 200.0 + 1000.0) * 0.0005
          ;
                    /* INLINE_REGION_END */
          fVar58 = w.normal_camera_dist * 0.9995 + (fVar49 * 200.0 + 300.0 + 500.0) * 0.0005;
        }
        w._4_4_ = w._4_4_ & 0xffffff7f;
        w.normal_camera_dist = fVar58;
      }
      fVar42 = powf(fVar58 / w.camera_dist,0.1);
      w.camera_dist = fVar42 * w.camera_dist;
                    /* INLINE_REGION_START: abs */
      if (ABS(fVar58 / w.camera_dist + -1.0) < 0.01) {
        w.camera_dist = fVar58;
      }
    }
                    /* INLINE_REGION_END */
    if (0 < w.map_prompt_timer) {
      w.map_prompt_timer = w.map_prompt_timer + -1;
    }
    fVar58 = tanf(param_1->fov * 0.5);
    uVar9 = w.bodies.field3_0x20.elements;
    rVar63 = DAT_1401fd1f0;
    if ((bool)(1 < w.frame_number & bVar6)) {
                    /* INLINE_REGION_START: operator!=, normsq */
      rVar30 = (pbVar33->cost_centroid).field0_0x0._s_0;
      fVar42 = rVar30.x;
                    /* INLINE_REGION_END
                       INLINE_REGION_START: reset_player_position */
      if (((NAN(fVar42)) || (fVar48 = rVar30.y, NAN(fVar48))) ||
         (((w.final_boss.field0_0x0.active_flags & 1) == 0 &&
          (1.6777216e+11 < fVar48 * fVar48 + fVar42 * fVar42 + 0.0)))) {
        prVar20 = &w.final_boss.x.field0_0x0;
        if ((w.final_boss.field0_0x0.active_flags & 1) == 0) {
          prVar20 = &DAT_14020e498;
        }
        rVar64 = (real_2_u_0)*(real_2_u_0 *)&prVar20->_s_0;
        w.camera_pos.field0_0x0 = rVar64;
        if (((0 < w.selected_body) &&
            (uVar13 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
            w.bodies.field0_0x0.index_table[uVar13].id == w.selected_body)) &&
           (w.bodies.field3_0x20.elements != (body *)0x0)) {
          iVar15 = w.bodies.field0_0x0.index_table[uVar13].index;
          pbVar1 = w.bodies.field3_0x20.elements + iVar15;
          abstractify_body(pbVar1);
          (((body *)(uVar9 + (longlong)iVar15 * 0x2e0))->cost_centroid).field0_0x0._s_0 =
               (real_2_u_0_s_0)rVar64;
          (((body *)(uVar9 + (longlong)iVar15 * 0x2e0))->center_of_mass).field0_0x0._s_0 =
               (real_2_u_0_s_0)rVar64;
          (((body *)(uVar9 + (longlong)iVar15 * 0x2e0))->old_center_of_mass).field0_0x0._s_0 =
               (real_2_u_0_s_0)rVar64;
          (((body *)(uVar9 + (longlong)iVar15 * 0x2e0))->center_of_mass_dot).field0_0x0 =
               (real_2_u_0)0x0;
          (((body *)(uVar9 + (longlong)iVar15 * 0x2e0))->orientation).field0_0x0 = rVar63;
          deabstractify_body(pbVar1);
                    /* INLINE_REGION_END */
          rVar30 = (pbVar33->cost_centroid).field0_0x0._s_0;
        }
      }
      iVar15 = get_biome(&w.map,(real_2)rVar30);
      if (iVar15 != 0) {
        DAT_14020e498 = (pbVar33->center_of_mass).field0_0x0;
        DAT_1401fd1f0 = (pbVar33->orientation).field0_0x0;
      }
      if (ZPULL(*(undefined4 *)&w.field137_0x3f10.biome_types[iVar15].field_0x1c,1,1) == 0) {
        *(uint *)&w.field137_0x3f10.biome_types[iVar15].field_0x1c =
             *(undefined4 *)&w.field137_0x3f10.biome_types[iVar15].field_0x1c | 2;
        pbVar21 = get_biome_core(&w.map,(real_2)(pbVar33->cost_centroid).field0_0x0._s_0);
        uVar9 = w.field140_0x3f30.biome_modifiers;
        if (pbVar21 != (biome_core *)0x0) {
          lVar40 = (longlong)pbVar21->n_default_modifiers;
          iVar15 = pbVar21->n_modifiers;
          if ((pbVar21->n_default_modifiers < iVar15) &&
             (uVar25 = (ulonglong)(uint)w.n_message_queue, (uint)w.n_message_queue < 0x11)) {
            do {
              uVar13 = w.translations.max_entries;
              ppcVar12 = w.translations.keys;
              if ((uint)uVar25 < 0x11) {
                pcVar36 = ((biome_modifier *)(uVar9 + (longlong)pbVar21->modifiers[lVar40] * 0x20))
                          ->id;
                cVar4 = *pcVar36;
                if (cVar4 == '\0') {
                  uVar14 = 0x1505;
                }
                else {
                  uVar14 = 0x1505;
                  pcVar23 = pcVar36;
                  do {
                    pcVar23 = pcVar23 + 1;
                    uVar14 = uVar14 + ((int)cVar4 ^ uVar14 * 0x21);
                    cVar4 = *pcVar23;
                  } while (cVar4 != '\0');
                }
                uVar29 = (ulonglong)w.translations.max_entries;
                uVar34 = (ulonglong)uVar14 % uVar29;
                do {
                  lVar35 = (longlong)(int)uVar34;
                  if ((ppcVar12[lVar35] == (char *)0x0) ||
                     (iVar15 = strcmp(ppcVar12[lVar35],pcVar36), iVar15 == 0)) goto LAB_140152e71;
                  uVar32 = (int)uVar34 + 1;
                  uVar34 = (ulonglong)uVar32;
                  if (uVar32 == uVar13) {
                    uVar34 = 0;
                  }
                  iVar15 = (int)((ulonglong)uVar14 % uVar29);
                } while ((int)uVar34 != iVar15);
                lVar35 = (longlong)iVar15;
LAB_140152e71:
                pcVar36 = unknown_string;
                if ((w.translations.values[lVar35].text != (char **)0x0) &&
                   (pcVar36 = w.translations.values[lVar35].text[w.language_index],
                   pcVar36 == (char *)0x0)) {
                  pcVar36 = unknown_string;
                }
                w.n_message_queue = (uint)uVar25 + 1;
                w.message_queue[uVar25] = pcVar36;
                uVar25 = (ulonglong)(uint)w.n_message_queue;
                iVar15 = pbVar21->n_modifiers;
              }
              lVar40 = lVar40 + 1;
            } while (lVar40 < iVar15);
          }
        }
      }
      w.last_team = pbVar33->team;
      if ((w.last_mutations.items != (pbVar33->field75_0x2d0).mutation_items.items) &&
         (w.free_last_mutations != 0)) {
        free();
        w.free_last_mutations = 0;
      }
      iVar11.field0_0x0 = w.map.map_range.u.field0_0x0;
      iVar10.field0_0x0 = w.map.map_range.l.field0_0x0;
      w.last_mutations = (pbVar33->field75_0x2d0).mutation_items;
      rVar30 = (pbVar33->center_of_mass).field0_0x0._s_0;
      fVar42 = rVar30.x * 0.005;
      fVar48 = rVar30.y * 0.005;
      fVar65 = DAT_1401fe038 * fVar48 + DAT_1401fe030 * fVar42 + 0.0;
      fVar62 = DAT_1401fe034 * fVar42 + 0.0 + DAT_1401fe03c * fVar48;
      fVar42 = (float)roundf();
      fVar48 = (float)roundf();
      fVar43 = (float)roundf();
      fVar59 = ABS(fVar48 - fVar62);
      fVar49 = ABS(fVar42 - fVar65);
      fVar62 = ABS(fVar43 - (-fVar65 - fVar62));
      if ((fVar49 <= fVar59) || (fVar49 <= fVar62)) {
        iVar15 = (int)fVar42;
        if (fVar59 <= fVar62) goto LAB_140153004;
        lVar40 = CONCAT44(-((int)fVar43 + iVar15),iVar15);
      }
      else {
        iVar15 = -((int)fVar48 + (int)fVar43);
LAB_140153004:
        lVar40 = CONCAT44((int)fVar48,iVar15);
      }
      iVar51 = iVar10.field0_0x0._0_4_;
      iVar15 = (int)lVar40;
      iVar54 = (int)((ulonglong)lVar40 >> 0x20);
      if ((iVar54 < iVar11.field0_0x0._4_4_ &&
           ((iVar15 < iVar11.field0_0x0._0_4_ && iVar51 <= iVar15) &&
           iVar10.field0_0x0._4_4_ <= iVar54)) && (w.map.cores != (biome_core *)0x0)) {
        iVar54 = iVar11.field0_0x0._0_4_ - iVar51;
        iVar16 = (int)(lVar40 - ((ulonglong)iVar10.field0_0x0 & 0xffffffff00000000) >> 0x20) *
                 iVar54 + (iVar15 - iVar51);
        iVar15 = w.map.biome_cores[iVar16];
        pbVar21 = w.map.cores + iVar15;
        iVar51 = pbVar21->n_checkpoints;
        if (iVar51 != 0) {
          if (pbVar21 != w.current_race_core) {
            w.completed_race_checkpoints = 0;
            iVar51 = pbVar21->n_checkpoints;
            w.current_race_core = pbVar21;
          }
          if (0 < iVar51) {
            if (w.map.track_dists[iVar16] == '\x01') {
              if ((-1 << ((byte)iVar51 & 0x1f) | w.completed_race_checkpoints) == 0xffffffff) {
                w.last_race_time = w.frame_number - w.race_start_frame;
                w.last_race_flash = 1.0;
                if (w.last_race_time < w.best_race_time) {
                  if (w.best_race_time == 0x7fffffff) {
                    w.visual_best_race_time = (float)w.last_race_time;
                  }
                  w.best_race_flash = 1.0;
                  w.best_race_time = w.last_race_time;
                }
              }
              w.race_start_frame = w.frame_number;
              w.completed_race_checkpoints = 1;
              iVar51 = pbVar21->n_checkpoints;
            }
            if (1 < iVar51) {
              lVar35 = (longlong)
                       ((int)((longlong)iVar11.field0_0x0 -
                              ((ulonglong)iVar10.field0_0x0 & 0xffffffff00000000) >> 0x20) * iVar54)
              ;
              puVar38 = w.map.track_dists + iVar16 + lVar35;
              lVar40 = 1;
              do {
                if (*puVar38 == '\x01') {
                  w.completed_race_checkpoints =
                       w.completed_race_checkpoints | 1 << ((byte)lVar40 & 0x1f);
                  iVar51 = pbVar21->n_checkpoints;
                }
                lVar40 = lVar40 + 1;
                puVar38 = puVar38 + lVar35;
              } while (lVar40 < iVar51);
            }
          }
          iVar51 = pbVar21->bronze_time;
          fVar42 = powf(0.9,(float)w.completed_race_targets);
          if (w.best_race_time <= (int)(fVar42 * (float)iVar51)) {
            if (0 < (longlong)w.map.n_biome_nodes) {
              lVar40 = 0;
              do {
                if (*(int *)((longlong)&(w.map.biome_nodes)->core_index + lVar40) == iVar15) {
                  rVar24.field0_0x0._s_0.y =
                       *(float *)((longlong)&((w.map.biome_nodes)->x).field0_0x0 + lVar40 + 4) *
                       0.005;
                  rVar24.field0_0x0._s_0.x =
                       *(float *)((longlong)&((w.map.biome_nodes)->x).field0_0x0 + lVar40) * 0.005;
                  rVar24 = hex_cellf(rVar24);
                  fVar48 = DAT_1401fe060 + DAT_1401fe058 * 2.0;
                  fVar43 = DAT_1401fe05c + DAT_1401fe05c + DAT_1401fe064;
                  fVar42 = rand_normal(&w.seed);
                  rVar41.field0_0x0._s_0.y =
                       fVar43 * 200.0 +
                       rVar24.field0_0x0._4_4_ * 173.20508 + rVar24.field0_0x0._0_4_ * 0.0 + 0.0 +
                       fVar42;
                  rVar41.field0_0x0._s_0.x =
                       fVar48 * 200.0 +
                       rVar24.field0_0x0._0_4_ * 200.0 + 0.0 + rVar24.field0_0x0._4_4_ * 100.0 +
                       fVar42;
                  local_cb8.s.LowPart = str_to_id("BRNZ");
                  local_cb8.s.HighPart = str_to_id("SLVR");
                  local_cb0 = str_to_id("GOLD");
                  iVar15 = 0;
                  if (0 < w.completed_race_targets) {
                    iVar15 = w.completed_race_targets;
                  }
                  iVar51 = 2;
                  if (iVar15 < 2) {
                    iVar51 = iVar15;
                  }
                  iVar15 = get_creature_index(*(uint *)((longlong)&local_cb8 +
                                                       (ulonglong)(uint)(iVar51 << 2)));
                  local_cf8.body_id = 0;
                  local_cf8.orientation.field0_0x0 = (real_2_u_0)0x3f80000000000000;
                  local_cf8._12_4_ = 0;
                  spawn_creature_to_grow
                            (iVar15,rVar41,(float)*(int *)(&DAT_1401cb208 + (uint)(iVar51 << 2)),
                             &local_cf8);
                  break;
                }
                lVar40 = lVar40 + 0x78;
              } while ((longlong)w.map.n_biome_nodes * 0x78 - lVar40 != 0);
            }
            w.completed_race_targets = w.completed_race_targets + 1;
          }
        }
      }
    }
    fVar42 = w.camera_dist;
    iVar15 = w.game_mode;
    fVar48 = 1.0;
    if (w.game_mode == 2 && !bVar6) {
      bVar31 = param_3->pressed_buttons[0] | param_3->buttons[0];
      if (((bVar31 & 0x10) != 0) ||
         ((rVar63 = w.camera_pos.field0_0x0, (bVar31 & 4) != 0 && (w.sm.tool != 10)))) {
        fVar43 = (w.camera_dist * 0.5) / (1.0 / fVar58);
        rVar30 = (param_3->dmouse).field0_0x0._s_0;
        fVar49 = fVar43 * rVar30.x;
        fVar43 = fVar43 * rVar30.y;
        fVar58 = fVar49 * 0.0;
        fVar42 = fVar43 * 0.0;
        rVar63._0_4_ = (w.camera_pos.field0_0x0._0_4_ - fVar49) + fVar42;
        rVar63._s_0.y = (w.camera_pos.field0_0x0._4_4_ - fVar58) - fVar43;
        fVar42 = (w.camera_dist - fVar58) + fVar42;
      }
      fVar58 = ((param_3->gamepad).right_trigger * -0.8 + 1.0) * 10.0;
      rVar30 = (param_3->gamepad).right_stick.field0_0x0._s_0;
      iVar51 = (int)(((uint)(settings.field3_0xc.keybinds.editor_up >> 0x1f) >> 0x1d) +
                    settings.field3_0xc.keybinds.editor_up) >> 3;
      iVar54 = (int)(((uint)(settings.field3_0xc.keybinds.editor_down >> 0x1f) >> 0x1d) +
                    settings.field3_0xc.keybinds.editor_down) >> 3;
      iVar16 = (int)(((uint)(settings.field3_0xc.keybinds.editor_left >> 0x1f) >> 0x1d) +
                    settings.field3_0xc.keybinds.editor_left) >> 3;
      iVar56 = (int)(((uint)(settings.field3_0xc.keybinds.editor_right >> 0x1f) >> 0x1d) +
                    settings.field3_0xc.keybinds.editor_right) >> 3;
      local_cd8 = settings.field3_0xc.keybinds.editor_up;
      iStack_cd4 = settings.field3_0xc.keybinds.editor_down;
      iStack_cd0 = settings.field3_0xc.keybinds.editor_left;
      iStack_ccc = settings.field3_0xc.keybinds.editor_right;
      iVar15 = iStack_ccc;
      iStack_ccc._0_1_ = (byte)settings.field3_0xc.keybinds.editor_right;
      rVar64._s_0.x =
           fVar58 * rVar30.x +
           *(float *)(&__real_40a0000041c80000 +
                     (ulonglong)(((param_3->pressed_buttons[2] | param_3->buttons[2]) & 2) == 0) * 4
                     ) *
           (float)(int)((uint)(((param_3->pressed_buttons[iVar56] | param_3->buttons[iVar56]) >>
                                ((byte)iStack_ccc & 7) & 1) != 0) -
                       (uint)(((param_3->pressed_buttons[iVar16] | param_3->buttons[iVar16]) >>
                               (settings.field3_0xc.keybinds.editor_left & 7U) & 1) != 0)) +
           rVar63._s_0.x;
      rVar64._s_0.y =
           fVar58 * rVar30.y +
           *(float *)(&__real_40a0000041c80000 +
                     (ulonglong)(((param_3->pressed_buttons[2] | param_3->buttons[2]) & 2) == 0) * 4
                     ) *
           (float)(int)((uint)(((param_3->pressed_buttons[iVar51] | param_3->buttons[iVar51]) >>
                                (settings.field3_0xc.keybinds.editor_up & 7U) & 1) != 0) -
                       (uint)(((param_3->pressed_buttons[iVar54] | param_3->buttons[iVar54]) >>
                               (settings.field3_0xc.keybinds.editor_down & 7U) & 1) != 0)) +
           rVar63._s_0.y;
      iStack_ccc = iVar15;
LAB_1401536de:
      w.dead = 1;
      fVar58 = INFINITY;
    }
    else {
      rVar64 = w.camera_pos.field0_0x0;
      if (!bVar6) goto LAB_1401536de;
      INSERT(w._4_4_,pbVar33->parent_id != 0,2,1);
      w._4_4_ = uVar17;
      (pbVar33->brain).fun = player_brain;
      fVar43 = (pbVar33->center_of_mass).field0_0x0._s_0.x;
      fVar49 = (pbVar33->center_of_mass).field0_0x0._s_0.y;
      fVar58 = INFINITY;
      if ((iVar15 == 1) && (w.final_boss.dead != false)) {
        fVar58 = w.final_boss.x.field0_0x0._s_0.x + 7000.0;
        if ((fVar58 + 1000.0 < fVar43) && (fVar49 < w.final_boss.x.field0_0x0._s_0.y + 11300.0)) {
          w._4_4_ = uVar17 | 8;
          w.run.ending = 1;
          w.run.xp = pbVar33->xp;
          w.run.level = pbVar33->level;
          w.run.frames = w.frame_number;
          (*best_GetSystemTimeAsFileTime)((_FILETIME *)&local_cb8.s);
          auVar46._0_8_ = (double)CONCAT44(0x43300000,local_cb8.s.LowPart);
          auVar46._8_4_ = local_cb8.s.HighPart;
          auVar46._12_4_ = 0x45300000;
          w.run.end_time =
               ((auVar46._8_8_ - 1.9342813113834067e+25) + (auVar46._0_8_ - 4503599627370496.0)) *
               1e-07 + -11644473600.0;
          w.run.biomes_explored = 0;
          if (0 < w.n_biome_types) {
            if (w.n_biome_types == 1) {
              uVar25 = 0;
              iVar15 = 0;
            }
            else {
              puVar39 = (uint *)&w.field137_0x3f10.biome_types[1].field_0x1c;
              uVar25 = 0;
              iVar15 = 0;
              do {
                if ((~puVar39[-0x172b] & 3) == 0) {
                  iVar15 = iVar15 + 1;
                  w.run.biomes_explored = iVar15;
                }
                if ((~*puVar39 & 3) == 0) {
                  iVar15 = iVar15 + 1;
                  w.run.biomes_explored = iVar15;
                }
                uVar25 = uVar25 + 2;
                puVar39 = puVar39 + 0x2e56;
              } while ((w.n_biome_types & 0x7ffffffe) != uVar25);
              if ((w.n_biome_types & 1U) == 0) goto LAB_140153764;
            }
            if ((~*(uint *)&w.field137_0x3f10.biome_types[uVar25].field_0x1c & 3) == 0) {
              w.run.biomes_explored = iVar15 + 1;
            }
          }
LAB_140153764:
          if (w.game_mode == 1) {
            save_run_stats(&w.run);
            settings.win_unlocks = 1;
            save_settings();
          }
          else {
            settings.win_unlocks = 1;
            save_settings();
          }
          pqVar8 = ac.queued_sounds;
          if (w.game_mode == 1) {
            give_achievement("ACH_WIN");
            pqVar8 = ac.queued_sounds;
          }
          ac.queued_sounds = pqVar8;
          if ((((ac.initialized == true) && (0 < sounds.run_complete.n_samples)) &&
              (sounds.run_complete.data != (short *)0x0)) &&
             (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
            uVar13 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
            pqVar8[(int)uVar13].sound = (sound_t *)0x1401fe410;
            pqVar8[(int)uVar13].params.volume = 1.0;
            pqVar8[(int)uVar13].params.delay = 0.0;
            pqVar8[(int)uVar13].params.pitch_shift = 0.0;
            pqVar8[(int)uVar13].params.lowpass_dist = 0.0;
            piVar2 = &pqVar8[(int)uVar13].params.type;
            *(undefined8 *)piVar2 = 0;
            *(undefined8 *)(piVar2 + 2) = 0;
            pqVar8[(int)uVar13].kill = false;
            LOCK();
            ac.last_queued_sound = ac.last_queued_sound + 1;
            UNLOCK();
          }
          pqVar8 = ac.queued_sounds;
          if (((ac.initialized == true) && (0 < sounds.run_complete_music.n_samples)) &&
             ((sounds.run_complete_music.data != (short *)0x0 &&
              (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
            uVar13 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
            ac.queued_sounds[(int)uVar13].sound = (sound_t *)0x1401fe420;
            auVar44 = ZEXT812(0x3f800000);
            pqVar7 = pqVar8 + (int)uVar13;
            (pqVar7->params).volume = (float)auVar44._0_4_;
            (pqVar7->params).delay = (float)auVar44._4_4_;
            (pqVar7->params).pitch_shift = (float)auVar44._8_4_;
            (pqVar7->params).lowpass_dist = 0.0;
            pqVar8[(int)uVar13].params.type = 1;
            pqVar8[(int)uVar13].filtered[0] = 0.0;
            pqVar8[(int)uVar13].filtered[1] = 0.0;
            *(undefined8 *)((longlong)pqVar8[(int)uVar13].filtered + 5) = 0;
            LOCK();
            ac.last_queued_sound = ac.last_queued_sound + 1;
            UNLOCK();
          }
          w.selected_body = 0;
        }
        if (fVar58 <= fVar43) {
          fVar43 = fVar58;
        }
      }
      local_cc8.string[0] = 'E';
      local_cc8.string[1] = 'C';
      local_cc8.string[2] = 'H';
      local_cc8.string[3] = 'O';
      local_cc8.string[4] = 'L';
      local_cc8.string[5] = 'O';
      local_cc8.string[6] = 'C';
      local_cc8.string[7] = 'A';
      local_cc8._s_0.hi = 0x4e4f4954;
      iVar15 = get_mutation_index(&local_cc8);
      w.wall_vision = 0.0;
      if (w.field64_0x3af0.body_auxiliary_data
          [(longlong)iVar15 +
           (longlong)w.body_auxiliary_size * -0x2c8590b21642c859 *
           ((longlong)pbVar33 - w.bodies.field3_0x20._0_8_ >> 5)] != '\0') {
        w.wall_vision = 1.0;
      }
      rVar64._s_0.y = fVar49;
      rVar64._s_0.x = fVar43;
    }
    w.debug_view_mode = w.debug_view_mode % 4;
    (param_1->camera_pos).field0_0x0.xy.field0_0x0._s_0 = (real_2_u_0_s_0)rVar64;
    (param_1->camera_pos).field0_0x0._s_0.z = fVar42;
    if (w.im.body_id != 0) {
      iVar3 = (param_1->resolution).field0_0x0._s_0;
      fVar42 = tanf(param_1->fov * 0.5);
      (param_1->camera_pos).field0_0x0._s_0.x =
           (((float)iVar3.x / (float)iVar3.y) * 0.5) /
           ((1.0 / fVar42) / (param_1->camera_pos).field0_0x0._s_0.z) +
           (param_1->camera_pos).field0_0x0._s_0.x;
    }
    auVar47._0_12_ = ZEXT812(0x3f800000);
    auVar47._12_4_ = 0;
    *(undefined1 (*) [16])&(param_1->camera_axes).field0_0x0 = auVar47;
    *(undefined8 *)((longlong)&(param_1->camera_axes).field0_0x0 + 0x10) = 0x800000003f800000;
    *(undefined8 *)((longlong)&(param_1->camera_axes).field0_0x0 + 0x18) = 0x80000000;
    (param_1->camera_axes).field0_0x0.data[8] = 1.0;
    auVar45 = ___xmm_0000000000000000bf800000bf800000;
    auVar52 = ___xmm_00000000000000003f8000003f800000;
    uVar17 = settings.field3_0xc.keybinds.extend + 7;
    if (-1 < settings.field3_0xc.keybinds.extend) {
      uVar17 = settings.field3_0xc.keybinds.extend;
    }
    iVar15 = (int)uVar17 >> 3;
    if (settings.toggle_seek == 0) {
      uVar17 = settings.field3_0xc.keybinds.retract + 7;
      if (-1 < settings.field3_0xc.keybinds.retract) {
        uVar17 = settings.field3_0xc.keybinds.retract;
      }
      uVar13 = ((uint)(((param_3->pressed_buttons[iVar15] | param_3->buttons[iVar15]) >>
                        (settings.field3_0xc.keybinds.extend & 7U) & 1) != 0) +
               ((byte)((param_3->pressed_buttons[(int)uVar17 >> 3] |
                       param_3->buttons[(int)uVar17 >> 3]) >>
                      ((byte)settings.field3_0xc.keybinds.retract & 7)) & 1) * 2) * 0x40000;
LAB_140153afd:
      w._4_4_ = w._4_4_ & 0xfff3ffff | uVar13;
    }
    else {
      if ((param_3->pressed_buttons[iVar15] >> (settings.field3_0xc.keybinds.extend & 7U) & 1) != 0)
      {
        w._4_4_ = w._4_4_ & 0xfff3ffff | (uint)(w.seek_toggled != 1) << 0x12;
      }
      uVar17 = settings.field3_0xc.keybinds.retract + 7;
      if (-1 < settings.field3_0xc.keybinds.retract) {
        uVar17 = settings.field3_0xc.keybinds.retract;
      }
      if ((param_3->pressed_buttons[(int)uVar17 >> 3] >> (settings.field3_0xc.keybinds.retract & 7U)
          & 1) != 0) {
        uVar13 = (uint)(w.seek_toggled != 2) << 0x13;
        goto LAB_140153afd;
      }
    }
    uVar17 = settings.field3_0xc.keybinds.ability + 7;
    if (-1 < settings.field3_0xc.keybinds.ability) {
      uVar17 = settings.field3_0xc.keybinds.ability;
    }
    iVar15 = (int)uVar17 >> 3;
    if (settings.toggle_ability == 0) {
      uVar13 = 0x8000;
      if (((param_3->pressed_buttons[iVar15] | param_3->buttons[iVar15]) >>
           (settings.field3_0xc.keybinds.ability & 7U) & 1) == 0) {
        uVar13 = (*(uint *)&(param_3->gamepad).buttons & 0x1000) << 3;
      }
      uVar17 = settings.field3_0xc.keybinds.ability1 + 7;
      if (-1 < settings.field3_0xc.keybinds.ability1) {
        uVar17 = settings.field3_0xc.keybinds.ability1;
      }
      uVar14 = 0x10000;
      if (((param_3->pressed_buttons[(int)uVar17 >> 3] | param_3->buttons[(int)uVar17 >> 3]) >>
           (settings.field3_0xc.keybinds.ability1 & 7U) & 1) == 0) {
        uVar14 = (*(uint *)&(param_3->gamepad).buttons & 0x2000) << 3;
      }
      uVar14 = w._4_4_ & 0xfffe7fff | uVar13 | uVar14;
      uVar17 = settings.field3_0xc.keybinds.ability2 + 7;
      if (-1 < settings.field3_0xc.keybinds.ability2) {
        uVar17 = settings.field3_0xc.keybinds.ability2;
      }
      uVar13 = 0x20000;
      if (((param_3->pressed_buttons[(int)uVar17 >> 3] | param_3->buttons[(int)uVar17 >> 3]) >>
           (settings.field3_0xc.keybinds.ability2 & 7U) & 1) == 0) {
        uVar13 = (*(uint *)&(param_3->gamepad).buttons & 0x8000) << 2;
      }
    }
    else {
      uVar13 = 0x8000;
      if (((param_3->pressed_buttons[iVar15] >> (settings.field3_0xc.keybinds.ability & 7U) & 1) ==
           0) && (uVar13 = 0, ((param_3->gamepad).buttons & 0x1000) != 0)) {
        uVar13 = (uint)((param_3->gamepad_prev_buttons & 0x1000) == 0) << 0xf;
      }
      uVar17 = settings.field3_0xc.keybinds.ability1 + 7;
      if (-1 < settings.field3_0xc.keybinds.ability1) {
        uVar17 = settings.field3_0xc.keybinds.ability1;
      }
      uVar14 = 0x10000;
      if (((param_3->pressed_buttons[(int)uVar17 >> 3] >>
            (settings.field3_0xc.keybinds.ability1 & 7U) & 1) == 0) &&
         (uVar14 = 0, ((param_3->gamepad).buttons & 0x2000) != 0)) {
        uVar14 = (uint)((param_3->gamepad_prev_buttons & 0x2000) == 0) << 0x10;
      }
      uVar14 = w._4_4_ & 0xfffe7fff | w._4_4_ & 0x8000 ^ uVar13 | w._4_4_ & 0x10000 ^ uVar14;
      uVar17 = settings.field3_0xc.keybinds.ability2 + 7;
      if (-1 < settings.field3_0xc.keybinds.ability2) {
        uVar17 = settings.field3_0xc.keybinds.ability2;
      }
      uVar13 = 0x20000;
      if (((param_3->pressed_buttons[(int)uVar17 >> 3] >>
            (settings.field3_0xc.keybinds.ability2 & 7U) & 1) == 0) &&
         (uVar13 = 0, (param_3->gamepad).buttons < 0)) {
        uVar13 = (uint)(-1 < param_3->gamepad_prev_buttons) << 0x11;
      }
      uVar13 = w._4_4_ & 0x20000 ^ uVar13;
    }
    uVar32 = uVar14 & 0xfffdffff | uVar13;
    if (w.n_player_commands < w.input_delay) {
      w.n_player_commands = w.n_player_commands + 1;
    }
    else {
      iVar15 = w.player_command_start + 1;
      w.player_command_start = 0;
      if (iVar15 != 0x168) {
        w.player_command_start = iVar15;
      }
    }
    uVar25 = (ulonglong)(longlong)(w.n_player_commands + w.player_command_start) % 0x168;
    prVar22 = &w.player_commands[uVar25].movement;
    if ((uVar14 & 0x1000) == 0) {
      uVar37 = (uint)(ushort)(param_3->gamepad).buttons;
      fVar42 = (param_3->gamepad).right_trigger;
      fVar43 = (param_3->gamepad).left_stick.field0_0x0._s_0.x;
      fVar49 = (param_3->gamepad).left_stick.field0_0x0._s_0.y;
      fVar62 = (param_3->gamepad).right_stick.field0_0x0._s_0.x;
    }
    else {
      fVar42 = 0.0;
      uVar37 = 0;
      fVar43 = 0.0;
      fVar49 = 0.0;
      fVar62 = 0.0;
    }
    auVar53._0_8_ = CONCAT44(fVar42 - (float)(uVar37 >> 9 & 1),fVar62) ^ 0x80000000;
    auVar53._8_4_ = 0x80000000;
    auVar53._12_4_ = 0;
    auVar55 = minps(___xmm_00000000000000003f8000003f800000,auVar53);
    auVar55 = maxps(___xmm_0000000000000000bf800000bf800000,auVar55);
    w._4_4_ = uVar32;
    w.camera_pos.field0_0x0 = rVar64;
    prVar22->field0_0x0 = auVar55._0_8_;
    uVar17 = settings.field3_0xc.keybinds.forward;
    iVar15 = settings.field3_0xc.keybinds.forward;
    iStack_ce4 = settings.field3_0xc.keybinds.backward;
    iVar51 = settings.field3_0xc.keybinds.left;
    iStack_cdc = settings.field3_0xc.keybinds.right;
    iVar54 = (int)(((uint)(settings.field3_0xc.keybinds.forward >> 0x1f) >> 0x1d) +
                  settings.field3_0xc.keybinds.forward) >> 3;
    iVar16 = (int)(((uint)(settings.field3_0xc.keybinds.backward >> 0x1f) >> 0x1d) +
                  settings.field3_0xc.keybinds.backward) >> 3;
    iVar56 = (int)(((uint)(settings.field3_0xc.keybinds.left >> 0x1f) >> 0x1d) +
                  settings.field3_0xc.keybinds.left) >> 3;
    iVar57 = (int)(((uint)(settings.field3_0xc.keybinds.right >> 0x1f) >> 0x1d) +
                  settings.field3_0xc.keybinds.right) >> 3;
    local_ce8 = settings.field3_0xc.keybinds.forward;
    iVar15 = local_ce8;
    iStack_ce0 = settings.field3_0xc.keybinds.left;
    iVar51 = iStack_ce0;
    iStack_ce0._0_1_ = (byte)settings.field3_0xc.keybinds.left;
    uVar37 = settings.field3_0xc.keybinds.backward & 7;
    auVar60._0_4_ =
         (float)(int)((uint)(((param_3->pressed_buttons[iVar56] | param_3->buttons[iVar56]) >>
                              ((byte)iStack_ce0 & 7) & 1) != 0) -
                     (uint)(((param_3->pressed_buttons[iVar57] | param_3->buttons[iVar57]) >>
                             (settings.field3_0xc.keybinds.right & 7U) & 1) != 0)) + auVar55._0_4_;
    (prVar22->field0_0x0)._s_0.x = auVar60._0_4_;
    local_ce8._0_1_ = (byte)uVar17;
    auVar61._4_8_ = 0;
    auVar61._0_4_ = auVar60._0_4_;
    auVar61._12_4_ = auVar55._4_4_;
    auVar60._8_8_ = auVar61._8_8_;
    auVar60._4_4_ =
         auVar55._4_4_ +
         (float)(int)((uint)(((param_3->pressed_buttons[iVar54] | param_3->buttons[iVar54]) >>
                              ((byte)local_ce8 & 7) & 1) != 0) -
                     (uint)(((param_3->pressed_buttons[iVar16] | param_3->buttons[iVar16]) >> uVar37
                            & 1) != 0));
    auVar52 = minps(auVar52,auVar60);
    auVar52 = maxps(auVar45,auVar52);
    prVar22->field0_0x0 = auVar52._0_8_;
    w.player_commands[uVar25].grab_target.field0_0x0 = (real_2_u_0)0x0;
    w.player_commands[uVar25].grab_weight = 0.0;
    w.player_commands[uVar25].grab_dir = 1.0;
    if ((uVar14 & 0xc0000) != 0) {
      rVar26._s_0.y =
           (param_3->cursor_x).field0_0x0._s_0.y +
           w.player_commands[uVar25].grab_target.field0_0x0._s_0.y;
      rVar26._s_0.x =
           (param_3->cursor_x).field0_0x0._s_0.x +
           w.player_commands[uVar25].grab_target.field0_0x0._s_0.x;
      w.player_commands[uVar25].grab_target.field0_0x0 = rVar26;
      w.player_commands[uVar25].grab_weight = 1.0;
      fVar48 = 2.0;
      if ((uVar14 & 0x80000) != 0) {
        w.player_commands[uVar25].grab_dir = -1.0;
      }
    }
    if (0.010000001 < fVar49 * fVar49 + fVar43 * fVar43 + 0.0) {
      rVar27._s_0.y =
           fVar49 * 200.0 + w.camera_pos.field0_0x0._s_0.y +
           w.player_commands[uVar25].grab_target.field0_0x0._s_0.y;
      rVar27._s_0.x =
           fVar43 * 200.0 + w.camera_pos.field0_0x0._s_0.x +
           w.player_commands[uVar25].grab_target.field0_0x0._s_0.x;
      w.player_commands[uVar25].grab_target.field0_0x0 = rVar27;
      w.player_commands[uVar25].grab_weight = fVar48;
    }
    w.player_commands[uVar25].abilities[0] = (bool)((byte)(uVar32 >> 0xf) & 1);
    w.player_commands[uVar25].field_0x19 = (byte)(uVar32 >> 0x10) & 1;
    w.player_commands[uVar25].field_0x1a = (char)(uVar13 >> 0x11);
    local_ce8 = iVar15;
    iStack_ce0 = iVar51;
    if (w.game_mode == 2) {
      sandbox_cell_update(&w.sm,param_1,param_3);
    }
    else if (w.game_mode == 1) {
      w._4_4_ = uVar14 & 0xfffdffbf | uVar13;
    }
  }
  else {
    fVar58 = INFINITY;
  }
                    /* INLINE_REGION_START: lane_sync */
  pvVar19 = TlsGetValue(tls_index);
  prVar28 = (render_context *)0x0;
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar19 + 8) + 0x18);
                    /* INLINE_REGION_END */
  bVar31 = w.game_mode != 0 & w._4_1_ >> 6;
  if (bVar31 == 0) {
    update_cells(param_1,prVar28,param_3);
    iVar15 = *piVar18;
    if ((iVar15 != 0) || (w.im.body_id == 0)) goto LAB_1401520e7;
    do_inspector_game_update();
  }
  else {
    update_cells_frozen(param_1,prVar28,param_3);
  }
  iVar15 = *piVar18;
LAB_1401520e7:
  if (iVar15 == 0) {
                    /* INLINE_REGION_START: get_element */
                    /* INLINE_REGION_END */
    if (((0 < w.selected_body) &&
        (uVar13 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
        w.bodies.field0_0x0.index_table[uVar13].id == w.selected_body)) &&
       (w.bodies.field3_0x20.elements != (body *)0x0)) {
      rVar30 = w.bodies.field3_0x20.elements[w.bodies.field0_0x0.index_table[uVar13].index].
               center_of_mass.field0_0x0._s_0;
                    /* INLINE_REGION_START: min */
      w.camera_pos.field0_0x0._s_0.x = rVar30.x;
      if (fVar58 <= w.camera_pos.field0_0x0._s_0.x) {
        w.camera_pos.field0_0x0._s_0.x = fVar58;
      }
      w.camera_pos.field0_0x0._s_0.y = rVar30.y;
    }
                    /* INLINE_REGION_END */
    begin_trace_stage("auto-save");
    if ((w.game_mode == 1 & w._4_1_ >> 2) == 1) {
                    /* INLINE_REGION_START: delete_save */
      sprintf((char *)&local_cb8.QuadPart,"%s/player.bod",DAT_1401fa6d0);
      sprintf((char *)&local_8b8[0].QuadPart,"%s/world.run",DAT_1401fa6d0);
      sprintf(local_4b8,"%s/map_edits.map",DAT_1401fa6d0);
      DeleteFileA((LPCSTR)&local_cb8.QuadPart);
      DeleteFileA((LPCSTR)&local_8b8[0].QuadPart);
      DeleteFileA(local_4b8);
                    /* INLINE_REGION_END */
    }
    else if (((w.game_mode != 0) && (w.menu != 4)) &&
            ((w.frame_number * -0x69d0369d + 0x1b4e810U >> 4 | w.frame_number * 0x30000000) <
             0x369d03)) {
                    /* INLINE_REGION_START: queue_saving_world */
      queue_saving_map_edits();
      queue_saving_world_and_player();
    }
                    /* INLINE_REGION_END
                       INLINE_REGION_START: end_trace_stage */
    pvVar19 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar19 + 0xa8) != 0)) {
      QueryPerformanceFrequency(&local_cb8);
      QueryPerformanceCounter(local_8b8);
      *(double *)(*(longlong *)((longlong)pvVar19 + 0xb8) + 0x40) =
           (double)local_8b8[0].QuadPart /
           (double)CONCAT44(local_cb8.s.HighPart,local_cb8.s.LowPart);
      *(undefined8 *)((longlong)pvVar19 + 0xb8) = **(undefined8 **)((longlong)pvVar19 + 0xb8);
    }
                    /* INLINE_REGION_END */
    if (bVar31 == 0) {
      w.frame_number = w.frame_number + 1;
    }
                    /* INLINE_REGION_START: end_trace_stage */
    pvVar19 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar19 + 0xa8) != 0)) {
      QueryPerformanceFrequency(&local_cb8);
      QueryPerformanceCounter(local_8b8);
      *(double *)(*(longlong *)((longlong)pvVar19 + 0xb8) + 0x40) =
           (double)local_8b8[0].QuadPart /
           (double)CONCAT44(local_cb8.s.HighPart,local_cb8.s.LowPart);
      *(undefined8 *)((longlong)pvVar19 + 0xb8) = **(undefined8 **)((longlong)pvVar19 + 0xb8);
    }
  }
                    /* INLINE_REGION_END */
  return;
}

