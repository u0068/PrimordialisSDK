
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
update_and_render_game
          (render_context *param_1,render_context *param_2,recording_buffer *param_3,float param_4,
          window_t *param_5)

{
  bool *pbVar1;
  user_input *puVar2;
  ushort uVar3;
  plan_cell *ppVar4;
  int_2_u_0_s_0 iVar5;
  longlong lVar6;
  real_2_u_0 rVar7;
  float fVar8;
  byte bVar9;
  int iVar10;
  BOOL BVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  LPVOID pvVar15;
  undefined4 extraout_var;
  LPVOID pvVar16;
  uchar *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  real_2 rVar22;
  longlong lVar23;
  undefined4 uVar26;
  render_context *prVar24;
  real_2 *prVar25;
  byte bVar27;
  ulonglong uVar28;
  real_2_u_0 rVar29;
  real_4x4_u_0 *prVar30;
  undefined4 uVar34;
  float *pfVar31;
  user_input *puVar32;
  longlong lVar33;
  uint uVar35;
  float fVar36;
  undefined4 uVar40;
  real_4_u_0 *prVar37;
  undefined4 uVar41;
  recording_buffer *prVar38;
  undefined8 uVar39;
  body *pbVar42;
  int iVar43;
  bool bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 in_register_000012c4 [60];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  float fVar59;
  undefined1 auVar60 [64];
  float fVar61;
  undefined1 auVar62 [64];
  undefined8 in_stack_fffffffffffff6f8;
  ulonglong in_stack_fffffffffffff700;
  undefined8 in_stack_fffffffffffff708;
  float local_8d8;
  undefined1 local_898 [8];
  HWND__ *pHStack_890;
  undefined8 uStack_888;
  char *pcStack_880;
  undefined1 local_878 [24];
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined1 local_858 [32];
  DWORD local_838;
  undefined4 uStack_834;
  char *pcStack_830;
  LPARAM LStack_828;
  LPOFNHOOKPROC pLStack_820;
  undefined1 auStack_818 [24];
  real_3_u_0 local_7f8;
  real_3_u_0 local_7e8;
  real_4_u_0 local_7d8;
  init_world_params local_7c8;
  undefined8 local_7b8;
  real_4_u_0 local_7ac;
  real_4_u_0 local_79c;
  undefined1 local_78c [20];
  real_4_u_0 local_778;
  real_4_u_0 local_768;
  real_4_u_0 local_758;
  undefined1 local_748 [32];
  undefined1 local_728 [32];
  float local_708;
  undefined1 local_6f8 [32];
  undefined1 local_6d8 [32];
  float local_6b8;
  real_4x4_u_0 local_6a8;
  font_info local_668;
  font_info local_5a8;
  _FILETIME local_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  
  uVar41 = (undefined4)((ulonglong)in_stack_fffffffffffff6f8 >> 0x20);
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffff708 >> 0x20);
  auVar60._4_60_ = in_register_000012c4;
  auVar60._0_4_ = param_4;
  auVar60 = ZEXT1664(auVar60._0_16_);
  piVar14 = TlsGetValue(tls_index);
  uVar35 = w.dead;
  bVar44 = w.game_mode == 2;
  if (1 < *(int *)(*(longlong *)(piVar14 + 2) + 0x10)) {
    if (audio_ready == false) {
      if (*piVar14 == 0) {
        auVar46 = ZEXT816(0);
        loading_circles[10] = (circle_render_info)ZEXT1632(auVar46);
        loading_circles[6] = (circle_render_info)ZEXT1632(auVar46);
        loading_circles[0] = (circle_render_info)ZEXT1632(auVar46);
        loading_tip_text = (char *)0x0;
        w.done_loading = 0;
        w.loading_screen = 1;
        loading_circles[1] = loading_circles[0];
        loading_circles[2] = loading_circles[0];
        loading_circles[3] = loading_circles[0];
        loading_circles[4] = loading_circles[0];
        loading_circles[5] = loading_circles[0];
        loading_circles[7] = loading_circles[6];
        loading_circles[8] = loading_circles[6];
        loading_circles[9] = loading_circles[6];
        loading_circles[0xb] = loading_circles[10];
      }
      auVar60 = ZEXT1664(auVar60._0_16_);
      iVar10 = lane_split_into_two(1);
      if (iVar10 != 0) {
        load_sounds();
        goto LAB_14014cf1a;
      }
    }
    else if (w.starting_game != 0) {
      if ((*piVar14 == 0) && ((longlong)ac.current_song != 0)) {
        if (ac.initialized == true) {
          LOCK();
          sounds.music_loop[ac.current_song].field4_0x20.next_target_volume = 0.0;
          UNLOCK();
        }
        ac.current_song = 0;
      }
      pvVar15 = TlsGetValue(tls_index);
      EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar15 + 8) + 0x18);
      auVar46 = auVar60._0_16_;
      if (*piVar14 == 0) {
        save_settings();
        auVar46 = auVar60._0_16_;
        if (uVar35 == 0 || bVar44) {
          save_world();
          auVar46 = auVar60._0_16_;
        }
        w.menu = 0;
        (param_5->input).dmouse.field0_0x0 = (real_2_u_0)0x0;
        (param_5->input).n_text_stream = 0;
        (param_5->input).text_modifiers = 0;
        auVar45 = ZEXT816(0);
        auVar50 = ZEXT1632(auVar45);
        (param_5->input).mouse_wheel = (float)auVar50._0_4_;
        (param_5->input).mouse_hwheel = (float)auVar50._4_4_;
        (param_5->input).buttons[0] = auVar50[8];
        (param_5->input).buttons[1] = auVar50[9];
        (param_5->input).buttons[2] = auVar50[10];
        (param_5->input).buttons[3] = auVar50[0xb];
        (param_5->input).buttons[4] = auVar50[0xc];
        (param_5->input).buttons[5] = auVar50[0xd];
        (param_5->input).buttons[6] = auVar50[0xe];
        (param_5->input).buttons[7] = auVar50[0xf];
        (param_5->input).buttons[8] = auVar50[0x10];
        (param_5->input).buttons[9] = auVar50[0x11];
        (param_5->input).buttons[10] = auVar50[0x12];
        (param_5->input).buttons[0xb] = auVar50[0x13];
        (param_5->input).buttons[0xc] = auVar50[0x14];
        (param_5->input).buttons[0xd] = auVar50[0x15];
        (param_5->input).buttons[0xe] = auVar50[0x16];
        (param_5->input).buttons[0xf] = auVar50[0x17];
        (param_5->input).buttons[0x10] = auVar50[0x18];
        (param_5->input).buttons[0x11] = auVar50[0x19];
        (param_5->input).buttons[0x12] = auVar50[0x1a];
        (param_5->input).buttons[0x13] = auVar50[0x1b];
        (param_5->input).buttons[0x14] = auVar50[0x1c];
        (param_5->input).buttons[0x15] = auVar50[0x1d];
        (param_5->input).buttons[0x16] = auVar50[0x1e];
        (param_5->input).buttons[0x17] = auVar50[0x1f];
        *(undefined1 (*) [32])((param_5->input).buttons + 0x18) = auVar50;
        *(undefined1 (*) [32])((param_5->input).pressed_buttons + 0x18) = ZEXT1632(auVar45);
        *(undefined1 (*) [32])((param_5->input).released_buttons + 4) = ZEXT1632(auVar45);
        (param_5->input).gamepad_prev_buttons = (param_5->input).gamepad.buttons;
        (param_5->input).gamepad.buttons = 0;
        (param_5->input).gamepad.left_trigger = 0.0;
        (param_5->input).gamepad.right_trigger = 0.0;
        (param_5->input).cursor_type = 0;
        if (settings.background_effects != 0) {
          auVar60 = ZEXT1664(auVar46);
          (*glBindFramebuffer)(0x8d40,param_1->background_frame_buffer);
          (*glFramebufferTexture2D)
                    (0x8d40,0x8ce0,0xde1,
                     *(uint *)((longlong)&param_1->field14_0xc8 +
                              (longlong)param_1->current_background_texture * 4 + 0xc),0);
          glViewport(0,0,(param_1->resolution).field0_0x0._s_0.x,
                     (param_1->resolution).field0_0x0._s_0.y);
          (*glUseProgram)(blend_cells_program);
          current_uniforms = blend_cells_program_uniforms;
          (*glUniform1i)(blend_cells_program_uniforms[0],0);
          (*glActiveTexture)(0x84c0);
          glBindTexture(0xde1,(param_1->field14_0xc8)._s_0.cell_color_texture);
          (*glUniform1i)(current_uniforms[1],1);
          (*glActiveTexture)(0x84c1);
          glBindTexture(0xde1);
          uStack_4c8 = 0x3f80000000000000;
          uStack_4c0 = 0xbf800000;
          local_4e8.dwLowDateTime = 0xbf800000;
          local_4e8.dwHighDateTime = 0xbf800000;
          uStack_4e0 = 0xbf80000000000000;
          uStack_4d8 = 0x3f800000;
          uStack_4d0 = 0x3f8000003f800000;
          auVar60 = ZEXT1664(auVar60._0_16_);
          (*glBufferSubData)(0x8892,0,0x30,&local_4e8);
          (*glEnableVertexAttribArray)(0);
          in_stack_fffffffffffff700 = 0;
          (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
          (*glVertexAttribDivisor)(0,0);
          glDrawArrays(6,0,4);
          auVar46 = auVar60._0_16_;
        }
        loading_circles[0] = (circle_render_info)ZEXT1632(ZEXT816(0));
        loading_tip_text = (char *)0x0;
        w.starting_game = 0;
        w.done_loading = 0;
        w.loading_screen = 1;
        loading_circles[1] = loading_circles[0];
        loading_circles[2] = loading_circles[0];
        loading_circles[3] = loading_circles[0];
        loading_circles[4] = loading_circles[0];
        loading_circles[5] = loading_circles[0];
        loading_circles[6] = loading_circles[0];
        loading_circles[7] = loading_circles[0];
        loading_circles[8] = loading_circles[0];
        loading_circles[9] = loading_circles[0];
        loading_circles[10] = loading_circles[0];
        loading_circles[0xb] = loading_circles[0];
      }
      auVar60 = ZEXT1664(auVar46);
      iVar10 = lane_split_into_two(1);
      if (iVar10 != 0) {
        if (*piVar14 == 0) {
          w.game_mode = w.starting_mode;
        }
        if (w.starting_mode == 2) {
          if ((w.has_sandbox == 0) || (w.starting_new_run != 0)) {
            local_7c8.no_creatures = w.sandbox_start_params.no_creatures;
            local_7c8.loading = w.sandbox_start_params.loading;
            local_7c8._10_2_ = w.sandbox_start_params._10_2_;
            local_7c8.keep_seed = w.sandbox_start_params.keep_seed;
            local_7c8._1_3_ = w.sandbox_start_params._1_3_;
            local_7c8.map_type = w.sandbox_start_params.map_type;
            init_world(&local_7c8);
            if (*piVar14 == 0) {
              post_sandbox_init();
            }
          }
          else {
LAB_14014e52a:
            load_world(param_1,false);
          }
        }
        else if (w.starting_mode == 1) {
          if (w.starting_new_run == 0) goto LAB_14014e52a;
          if (w.has_save != 0) {
            w.run.level = 0;
            w.run.ending = 0;
            w.run.creature_deaths = 0;
            w.run.death_biome = 0;
            w.run.start_time = 0.0;
            w.run.end_time = 0.0;
            w.run.frames = 0;
            w.run.seed = 0;
            w.run.biomes_explored = 0;
            w.run.xp = 0;
            auVar60 = ZEXT1664(auVar60._0_16_);
            load_world(param_1,true);
            w.run.frames = w.frame_number;
            (*best_GetSystemTimeAsFileTime)(&local_4e8);
            auVar46._8_8_ = 0;
            auVar46._0_4_ = local_4e8.dwLowDateTime;
            auVar46._4_4_ = local_4e8.dwHighDateTime;
            auVar46 = vunpcklps_avx(auVar46,___xmm_00000000000000004530000043300000);
            auVar45 = vsubpd_avx(auVar46,___xmm_45300000000000004330000000000000);
            auVar46 = vshufpd_avx(auVar45,auVar45,1);
            w.run.end_time = (auVar46._0_8_ + auVar45._0_8_) * 1e-07 + -11644473600.0;
            w.run.ending = 2;
            w.run.seed = w.base_seed;
            save_run_stats(&w.run);
          }
          init_world(&params);
        }
        else if (w.starting_mode == 0) {
          w.selected_body = 0;
          w.camera_pos.field0_0x0 = (real_2_u_0)(real_2_u_0_s_0)0x0;
          (param_1->camera_pos).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x0;
          (param_1->camera_pos).field0_0x0._s_0.z = 0.0;
          init_world(&params);
          w.dead = 1;
        }
LAB_14014cf1a:
        TlsGetValue(tls_index);
        EnterSynchronizationBarrier();
        if (*piVar14 == 0) {
          w.done_loading = 1;
        }
        lane_merge();
      }
    }
  }
  if (*piVar14 == 0) {
    if ((w.done_loading != 0) && (w.start_animation_done != 0)) {
      lane_merge();
      set_wall_map(param_1,&w.map);
      glBindTexture(0xde1);
      glTexImage2D(0xde1,0,0x822e,icon_texture.size.field0_0x0._s_0.x,
                   CONCAT44(uVar41,icon_texture.size.field0_0x0._s_0.y),
                   in_stack_fffffffffffff700 & 0xffffffff00000000,CONCAT44(uVar34,0x1903),0x1406,
                   icon_atlas);
      glBindTexture();
      render_icons = false;
      w.done_loading = 0;
      w.loading_screen = 0;
    }
    delta_t = auVar60._0_4_ + delta_t;
    n_gamepad_anchors = 0;
    if ((param_5->frame_input).buttons_blocked == true) {
      (param_5->input).buttons[0x10] = '\0';
      (param_5->input).buttons[0x11] = '\0';
      (param_5->input).buttons[0x12] = '\0';
      (param_5->input).buttons[0x13] = '\0';
      (param_5->input).buttons[0x14] = '\0';
      (param_5->input).buttons[0x15] = '\0';
      (param_5->input).buttons[0x16] = '\0';
      (param_5->input).buttons[0x17] = '\0';
      (param_5->input).buttons[0x18] = '\0';
      (param_5->input).buttons[0x19] = '\0';
      (param_5->input).buttons[0x1a] = '\0';
      (param_5->input).buttons[0x1b] = '\0';
      (param_5->input).buttons[0x1c] = '\0';
      (param_5->input).buttons[0x1d] = '\0';
      (param_5->input).buttons[0x1e] = '\0';
      (param_5->input).buttons[0x1f] = '\0';
      (param_5->input).buttons[2] = '\0';
      (param_5->input).buttons[3] = '\0';
      (param_5->input).buttons[4] = '\0';
      (param_5->input).buttons[5] = '\0';
      (param_5->input).buttons[6] = '\0';
      (param_5->input).buttons[7] = '\0';
      (param_5->input).buttons[8] = '\0';
      (param_5->input).buttons[9] = '\0';
      (param_5->input).buttons[10] = '\0';
      (param_5->input).buttons[0xb] = '\0';
      (param_5->input).buttons[0xc] = '\0';
      (param_5->input).buttons[0xd] = '\0';
      (param_5->input).buttons[0xe] = '\0';
      (param_5->input).buttons[0xf] = '\0';
      (param_5->input).buttons[0x10] = '\0';
      (param_5->input).buttons[0x11] = '\0';
      (param_5->input).pressed_buttons[2] = '\0';
      (param_5->input).pressed_buttons[3] = '\0';
      (param_5->input).pressed_buttons[4] = '\0';
      (param_5->input).pressed_buttons[5] = '\0';
      (param_5->input).pressed_buttons[6] = '\0';
      (param_5->input).pressed_buttons[7] = '\0';
      (param_5->input).pressed_buttons[8] = '\0';
      (param_5->input).pressed_buttons[9] = '\0';
      (param_5->input).pressed_buttons[10] = '\0';
      (param_5->input).pressed_buttons[0xb] = '\0';
      (param_5->input).pressed_buttons[0xc] = '\0';
      (param_5->input).pressed_buttons[0xd] = '\0';
      (param_5->input).pressed_buttons[0xe] = '\0';
      (param_5->input).pressed_buttons[0xf] = '\0';
      (param_5->input).pressed_buttons[0x10] = '\0';
      (param_5->input).pressed_buttons[0x11] = '\0';
      (param_5->input).pressed_buttons[0x10] = '\0';
      (param_5->input).pressed_buttons[0x11] = '\0';
      (param_5->input).pressed_buttons[0x12] = '\0';
      (param_5->input).pressed_buttons[0x13] = '\0';
      (param_5->input).pressed_buttons[0x14] = '\0';
      (param_5->input).pressed_buttons[0x15] = '\0';
      (param_5->input).pressed_buttons[0x16] = '\0';
      (param_5->input).pressed_buttons[0x17] = '\0';
      (param_5->input).pressed_buttons[0x18] = '\0';
      (param_5->input).pressed_buttons[0x19] = '\0';
      (param_5->input).pressed_buttons[0x1a] = '\0';
      (param_5->input).pressed_buttons[0x1b] = '\0';
      (param_5->input).pressed_buttons[0x1c] = '\0';
      (param_5->input).pressed_buttons[0x1d] = '\0';
      (param_5->input).pressed_buttons[0x1e] = '\0';
      (param_5->input).pressed_buttons[0x1f] = '\0';
      (param_5->frame_input).buttons[2] = '\0';
      (param_5->frame_input).buttons[3] = '\0';
      (param_5->frame_input).buttons[4] = '\0';
      (param_5->frame_input).buttons[5] = '\0';
      (param_5->frame_input).buttons[6] = '\0';
      (param_5->frame_input).buttons[7] = '\0';
      (param_5->frame_input).buttons[8] = '\0';
      (param_5->frame_input).buttons[9] = '\0';
      (param_5->frame_input).buttons[10] = '\0';
      (param_5->frame_input).buttons[0xb] = '\0';
      (param_5->frame_input).buttons[0xc] = '\0';
      (param_5->frame_input).buttons[0xd] = '\0';
      (param_5->frame_input).buttons[0xe] = '\0';
      (param_5->frame_input).buttons[0xf] = '\0';
      (param_5->frame_input).buttons[0x10] = '\0';
      (param_5->frame_input).buttons[0x11] = '\0';
      (param_5->frame_input).buttons[0x10] = '\0';
      (param_5->frame_input).buttons[0x11] = '\0';
      (param_5->frame_input).buttons[0x12] = '\0';
      (param_5->frame_input).buttons[0x13] = '\0';
      (param_5->frame_input).buttons[0x14] = '\0';
      (param_5->frame_input).buttons[0x15] = '\0';
      (param_5->frame_input).buttons[0x16] = '\0';
      (param_5->frame_input).buttons[0x17] = '\0';
      (param_5->frame_input).buttons[0x18] = '\0';
      (param_5->frame_input).buttons[0x19] = '\0';
      (param_5->frame_input).buttons[0x1a] = '\0';
      (param_5->frame_input).buttons[0x1b] = '\0';
      (param_5->frame_input).buttons[0x1c] = '\0';
      (param_5->frame_input).buttons[0x1d] = '\0';
      (param_5->frame_input).buttons[0x1e] = '\0';
      (param_5->frame_input).buttons[0x1f] = '\0';
      (param_5->frame_input).pressed_buttons[2] = '\0';
      (param_5->frame_input).pressed_buttons[3] = '\0';
      (param_5->frame_input).pressed_buttons[4] = '\0';
      (param_5->frame_input).pressed_buttons[5] = '\0';
      (param_5->frame_input).pressed_buttons[6] = '\0';
      (param_5->frame_input).pressed_buttons[7] = '\0';
      (param_5->frame_input).pressed_buttons[8] = '\0';
      (param_5->frame_input).pressed_buttons[9] = '\0';
      (param_5->frame_input).pressed_buttons[10] = '\0';
      (param_5->frame_input).pressed_buttons[0xb] = '\0';
      (param_5->frame_input).pressed_buttons[0xc] = '\0';
      (param_5->frame_input).pressed_buttons[0xd] = '\0';
      (param_5->frame_input).pressed_buttons[0xe] = '\0';
      (param_5->frame_input).pressed_buttons[0xf] = '\0';
      (param_5->frame_input).pressed_buttons[0x10] = '\0';
      (param_5->frame_input).pressed_buttons[0x11] = '\0';
      (param_5->frame_input).pressed_buttons[0x10] = '\0';
      (param_5->frame_input).pressed_buttons[0x11] = '\0';
      (param_5->frame_input).pressed_buttons[0x12] = '\0';
      (param_5->frame_input).pressed_buttons[0x13] = '\0';
      (param_5->frame_input).pressed_buttons[0x14] = '\0';
      (param_5->frame_input).pressed_buttons[0x15] = '\0';
      (param_5->frame_input).pressed_buttons[0x16] = '\0';
      (param_5->frame_input).pressed_buttons[0x17] = '\0';
      (param_5->frame_input).pressed_buttons[0x18] = '\0';
      (param_5->frame_input).pressed_buttons[0x19] = '\0';
      (param_5->frame_input).pressed_buttons[0x1a] = '\0';
      (param_5->frame_input).pressed_buttons[0x1b] = '\0';
      (param_5->frame_input).pressed_buttons[0x1c] = '\0';
      (param_5->frame_input).pressed_buttons[0x1d] = '\0';
      (param_5->frame_input).pressed_buttons[0x1e] = '\0';
      (param_5->frame_input).pressed_buttons[0x1f] = '\0';
    }
    (param_5->frame_input).buttons_blocked = false;
    if ((w.selected_body < 1) ||
       (w.bodies.field0_0x0.index_table[w.bodies.n_max_elements + 0x7fffffffU & w.selected_body].id
        != w.selected_body)) {
      uVar41 = 0;
      bVar44 = false;
    }
    else {
      bVar44 = w.bodies.field3_0x20.elements != (body *)0x0;
      uVar41 = (undefined4)((ulonglong)w.bodies.field0_0x0._0_8_ >> 0x20);
    }
    if ((((param_5->frame_input).gamepad.buttons & 0x80) != 0) &&
       (((param_5->frame_input).gamepad_prev_buttons & 0x80) == 0)) {
      w._4_4_ = (w._4_4_ * 2 & 0x2000U | w._4_4_) ^ 0x1000;
    }
    if (w.game_mode != 0 && w.menu == 0) {
      if (w.gamepad_cursor_mode != 0) goto LAB_14014d112;
      fVar19 = (param_5->frame_input).gamepad.left_stick.field0_0x0._s_0.x * 0.707;
      fVar51 = (param_5->frame_input).gamepad.left_stick.field0_0x0._s_0.y * 0.707;
      bVar9 = 0;
LAB_14014d136:
      if (!(bool)(bVar44 ^ 1U | w.game_mode != 2)) goto LAB_14014d146;
      uVar28 = (ulonglong)(uint)fVar19;
      uVar21 = (ulonglong)(uint)fVar51 << 0x20;
    }
    else {
      w._4_4_ = w._4_4_ & 0xffffefff;
LAB_14014d112:
      fVar19 = (param_5->frame_input).gamepad.left_stick.field0_0x0._s_0.x * 0.707;
      bVar9 = param_5->focused;
      fVar51 = (param_5->frame_input).gamepad.left_stick.field0_0x0._s_0.y * 0.707;
      if (w.game_mode != 0 && w.menu == 0) goto LAB_14014d136;
LAB_14014d146:
      uVar21 = CONCAT44(uVar41,fVar19 + (param_5->frame_input).gamepad.right_stick.field0_0x0._s_0.x
                       );
      uVar28 = (ulonglong)
               (uint)(fVar51 + (param_5->frame_input).gamepad.right_stick.field0_0x0._s_0.y) << 0x20
      ;
    }
    uVar21 = uVar21 | uVar28;
    fVar19 = (float)uVar21;
    uVar35 = w._4_4_ | 0x800;
    if (fVar19 != 0.0) {
      w._4_4_ = uVar35;
    }
    if (NAN(fVar19)) {
      w._4_4_ = uVar35;
    }
    if ((uVar21 & 0x7fffffff00000000) != 0) {
      w._4_4_ = uVar35;
    }
    fVar36 = (float)(uVar21 >> 0x20);
    fVar51 = fVar36 * fVar36 + fVar19 * fVar19 + 0.0;
    if (1.0 < fVar51) {
      auVar46 = vsqrtss_avx(ZEXT416((uint)fVar51),ZEXT416((uint)fVar51));
      fVar51 = 1.0 / auVar46._0_4_;
      uVar21 = CONCAT44(fVar36,fVar51 * fVar19) | (ulonglong)(uint)(fVar51 * fVar36) << 0x20;
    }
    w._4_4_ = w._4_4_ & 0xffffbfff | (uint)((bVar9 ^ 1) & (byte)((uint)w._4_4_ >> 0xb) & 1) << 0xe;
    if (bVar9 == 0) {
      bVar9 = (param_5->frame_input).pressed_buttons[0xe];
      if ((bVar9 & 1) == 0) goto LAB_14014d303;
LAB_14014d2c5:
      settings.show_fps = (uint)(settings.show_fps == 0);
      if ((bVar9 & 2) != 0) goto LAB_14014d2db;
LAB_14014d307:
      auVar46 = auVar60._0_16_;
    }
    else {
      fVar19 = (float)uVar21;
      if (fVar19 != 0.0 || (uVar21 & 0x7fffffff00000000) != 0) {
        fVar20 = (float)(uVar21 >> 0x20);
        fVar51 = fVar20 * fVar20 + fVar19 * fVar19 + 0.0;
        fVar36 = auVar60._0_4_ *
                 ((param_5->frame_input).gamepad.right_trigger * -0.8 + 1.0) *
                 settings.gamepad_cursor_sens;
        rVar22.field0_0x0._s_0.y = fVar51 * fVar20 * fVar36;
        rVar22.field0_0x0._s_0.x = fVar51 * fVar19 * fVar36;
        move_cursor(param_5,rVar22);
      }
      update_gamepad_clicks(&param_5->frame_input);
      bVar9 = (param_5->frame_input).pressed_buttons[0xe];
      if ((bVar9 & 1) != 0) goto LAB_14014d2c5;
LAB_14014d303:
      if ((bVar9 & 2) == 0) goto LAB_14014d307;
LAB_14014d2db:
      auVar46 = auVar60._0_16_;
      w._4_4_ = w._4_4_ ^ 0x20;
    }
    if (((w._16064_4_ & 1) == 0) && (auVar46 = auVar60._0_16_, w.game_mode == 2)) {
      bVar9 = (param_5->frame_input).pressed_buttons[0xf];
      if ((bVar9 & 1) == 0) {
        if ((bVar9 & 2) == 0) goto LAB_14014d752;
        memset();
        auVar46 = auVar60._0_16_;
        bVar9 = w.hide_cursor;
        bVar27 = bVar9 | DAT_1401fb378;
        BVar11 = 1;
        if ((w.hide_cursor == 0 && (DAT_1401fb378 & 1) == 0) ||
           (BVar11 = 0, (bVar9 & DAT_1401fb378) == 1)) {
          ShowCursor(BVar11);
          auVar46 = auVar60._0_16_;
          DAT_1401fb378 = ~bVar27 & 1;
        }
        local_858._0_12_ = ZEXT812(0);
        local_858._12_4_ = 0;
        uStack_834._0_2_ = 0;
        uStack_834._2_2_ = 0;
        LStack_828 = 0;
        pLStack_820 = (LPOFNHOOKPROC)0x0;
        auStack_818 = ZEXT424(0);
        stack0xfffffffffffff76c = ZEXT828(local_858._4_8_);
        local_898._0_4_ = 0x98;
        pHStack_890 = main_hwnd;
        local_878._16_8_ = &local_4e8;
        local_878._0_16_ = local_858._0_16_;
        uStack_860 = 0x400;
        uStack_888 = 0;
        pcStack_880 = "Body Plan";
        local_878._12_4_ = 1;
        local_878._0_12_ = local_858._0_12_;
        uStack_85c = 0;
        local_858._16_8_ = "body plans";
        local_858._24_8_ = 0;
        pcStack_830 = ".bod";
        local_838 = 0x1000a;
        auVar60 = ZEXT1664(auVar46);
        BVar11 = GetOpenFileNameA((LPOPENFILENAMEA)local_898);
        auVar46 = auVar60._0_16_;
        if (BVar11 != 0) {
          load_body_plan(&w.em.plan,(char *)&local_4e8);
          update_edit_menu_plan(&w.em,(int *)0x0);
          apply_edit_menu();
          auVar46 = auVar60._0_16_;
          if (((0 < w.selected_body) &&
              (uVar35 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
              w.bodies.field0_0x0.index_table[uVar35].id == w.selected_body)) &&
             (w.bodies.field3_0x20.elements != (body *)0x0)) {
            pbVar42 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar35].index;
            abstractify_body(pbVar42);
            pbVar42->health = 0.0;
            if (0 < (pbVar42->plan).n_plan_cells) {
              lVar33 = 0;
              lVar23 = 0;
              do {
                ppVar4 = (pbVar42->plan).plan_cells;
                iVar5 = (pbVar42->plan).region.l.field0_0x0._s_0;
                pbVar42->health =
                     materials_list[*(int *)((longlong)&ppVar4->material_index + lVar33)].max_health
                     + pbVar42->health;
                lVar6 = *(longlong *)((longlong)&(ppVar4->body_coord).field0_0x0 + lVar33);
                iVar10 = iVar5.x;
                pbVar42->cell_map
                [(int)(lVar6 - ((ulonglong)iVar5 & 0xffffffff00000000) >> 0x20) *
                 ((pbVar42->plan).region.u.field0_0x0._s_0.x - iVar10) + ((int)lVar6 - iVar10)] = -1
                ;
                lVar23 = lVar23 + 1;
                lVar33 = lVar33 + 0x34;
              } while (lVar23 < (pbVar42->plan).n_plan_cells);
            }
            deabstractify_body(pbVar42);
            auVar46 = auVar60._0_16_;
          }
        }
      }
      else {
        memcpy();
        auVar46 = auVar60._0_16_;
        bVar9 = w.hide_cursor;
        bVar27 = bVar9 | DAT_1401fb378;
        BVar11 = 1;
        if ((w.hide_cursor == 0 && (DAT_1401fb378 & 1) == 0) ||
           (BVar11 = 0, (bVar9 & DAT_1401fb378) == 1)) {
          ShowCursor(BVar11);
          auVar46 = auVar60._0_16_;
          DAT_1401fb378 = ~bVar27 & 1;
        }
        local_858._0_12_ = ZEXT812(0);
        local_858._12_4_ = 0;
        uStack_834._0_2_ = 0;
        uStack_834._2_2_ = 0;
        LStack_828 = 0;
        pLStack_820 = (LPOFNHOOKPROC)0x0;
        auStack_818 = ZEXT424(0);
        stack0xfffffffffffff76c = ZEXT828(local_858._4_8_);
        local_898._0_4_ = 0x98;
        pHStack_890 = main_hwnd;
        local_878._16_8_ = &local_4e8;
        local_878._0_16_ = local_858._0_16_;
        uStack_860 = 0x400;
        uStack_888 = 0;
        pcStack_880 = "Body Plan";
        local_878._12_4_ = 1;
        local_878._0_12_ = local_858._0_12_;
        uStack_85c = 0;
        local_858._16_8_ = "body plans";
        local_858._24_8_ = 0;
        pcStack_830 = ".bod";
        local_838 = 0x1000a;
        auVar60 = ZEXT1664(auVar46);
        BVar11 = GetSaveFileNameA((LPOPENFILENAMEA)local_898);
        auVar46 = auVar60._0_16_;
        if (BVar11 != 0) {
          save_body_plan(&w.em.plan,(char *)&local_4e8);
          auVar46 = auVar60._0_16_;
        }
      }
      (param_5->input).dmouse.field0_0x0 = (real_2_u_0)0x0;
      (param_5->input).n_text_stream = 0;
      (param_5->input).text_modifiers = 0;
      auVar45._0_12_ = ZEXT812(0);
      auVar45._12_4_ = 0;
      auVar50 = ZEXT1632(auVar45);
      (param_5->input).mouse_wheel = (float)auVar50._0_4_;
      (param_5->input).mouse_hwheel = (float)auVar50._4_4_;
      (param_5->input).buttons[0] = auVar50[8];
      (param_5->input).buttons[1] = auVar50[9];
      (param_5->input).buttons[2] = auVar50[10];
      (param_5->input).buttons[3] = auVar50[0xb];
      (param_5->input).buttons[4] = auVar50[0xc];
      (param_5->input).buttons[5] = auVar50[0xd];
      (param_5->input).buttons[6] = auVar50[0xe];
      (param_5->input).buttons[7] = auVar50[0xf];
      (param_5->input).buttons[8] = auVar50[0x10];
      (param_5->input).buttons[9] = auVar50[0x11];
      (param_5->input).buttons[10] = auVar50[0x12];
      (param_5->input).buttons[0xb] = auVar50[0x13];
      (param_5->input).buttons[0xc] = auVar50[0x14];
      (param_5->input).buttons[0xd] = auVar50[0x15];
      (param_5->input).buttons[0xe] = auVar50[0x16];
      (param_5->input).buttons[0xf] = auVar50[0x17];
      (param_5->input).buttons[0x10] = auVar50[0x18];
      (param_5->input).buttons[0x11] = auVar50[0x19];
      (param_5->input).buttons[0x12] = auVar50[0x1a];
      (param_5->input).buttons[0x13] = auVar50[0x1b];
      (param_5->input).buttons[0x14] = auVar50[0x1c];
      (param_5->input).buttons[0x15] = auVar50[0x1d];
      (param_5->input).buttons[0x16] = auVar50[0x1e];
      (param_5->input).buttons[0x17] = auVar50[0x1f];
      *(undefined1 (*) [32])((param_5->input).buttons + 0x18) = auVar50;
      auVar50 = ZEXT1632(auVar45);
      *(undefined1 (*) [32])((param_5->input).pressed_buttons + 0x18) = auVar50;
      *(undefined1 (*) [32])((param_5->input).released_buttons + 4) = auVar50;
      (param_5->input).gamepad_prev_buttons = (param_5->input).gamepad.buttons;
      (param_5->input).gamepad.buttons = 0;
      (param_5->input).gamepad.left_trigger = 0.0;
      (param_5->input).gamepad.right_trigger = 0.0;
      (param_5->input).cursor_type = 0;
      (param_5->frame_input).dmouse.field0_0x0 = (real_2_u_0)0x0;
      (param_5->frame_input).n_text_stream = 0;
      (param_5->frame_input).text_modifiers = 0;
      (param_5->frame_input).mouse_wheel = (float)auVar50._0_4_;
      (param_5->frame_input).mouse_hwheel = (float)auVar50._4_4_;
      (param_5->frame_input).buttons[0] = auVar50[8];
      (param_5->frame_input).buttons[1] = auVar50[9];
      (param_5->frame_input).buttons[2] = auVar50[10];
      (param_5->frame_input).buttons[3] = auVar50[0xb];
      (param_5->frame_input).buttons[4] = auVar50[0xc];
      (param_5->frame_input).buttons[5] = auVar50[0xd];
      (param_5->frame_input).buttons[6] = auVar50[0xe];
      (param_5->frame_input).buttons[7] = auVar50[0xf];
      (param_5->frame_input).buttons[8] = auVar50[0x10];
      (param_5->frame_input).buttons[9] = auVar50[0x11];
      (param_5->frame_input).buttons[10] = auVar50[0x12];
      (param_5->frame_input).buttons[0xb] = auVar50[0x13];
      (param_5->frame_input).buttons[0xc] = auVar50[0x14];
      (param_5->frame_input).buttons[0xd] = auVar50[0x15];
      (param_5->frame_input).buttons[0xe] = auVar50[0x16];
      (param_5->frame_input).buttons[0xf] = auVar50[0x17];
      (param_5->frame_input).buttons[0x10] = auVar50[0x18];
      (param_5->frame_input).buttons[0x11] = auVar50[0x19];
      (param_5->frame_input).buttons[0x12] = auVar50[0x1a];
      (param_5->frame_input).buttons[0x13] = auVar50[0x1b];
      (param_5->frame_input).buttons[0x14] = auVar50[0x1c];
      (param_5->frame_input).buttons[0x15] = auVar50[0x1d];
      (param_5->frame_input).buttons[0x16] = auVar50[0x1e];
      (param_5->frame_input).buttons[0x17] = auVar50[0x1f];
      *(undefined1 (*) [32])((param_5->frame_input).buttons + 0x18) = auVar50;
      *(undefined1 (*) [32])((param_5->frame_input).pressed_buttons + 0x18) = ZEXT1632(auVar45);
      *(undefined1 (*) [32])((param_5->frame_input).released_buttons + 4) = ZEXT1632(auVar45);
      (param_5->frame_input).gamepad_prev_buttons = (param_5->frame_input).gamepad.buttons;
      (param_5->frame_input).gamepad.buttons = 0;
      (param_5->frame_input).gamepad.left_trigger = 0.0;
      (param_5->frame_input).gamepad.right_trigger = 0.0;
      (param_5->frame_input).cursor_type = 0;
    }
LAB_14014d752:
    bVar9 = w.hide_cursor | settings.hardware_cursor == 0;
    bVar27 = bVar9 | DAT_1401fb378;
    BVar11 = 1;
    if ((bVar9 == 0 && (DAT_1401fb378 & 1) == 0) || (BVar11 = 0, (bVar9 & DAT_1401fb378) == 1)) {
      auVar60 = ZEXT1664(auVar46);
      ShowCursor(BVar11);
      auVar46 = auVar60._0_16_;
      DAT_1401fb378 = ~bVar27 & 1;
    }
    auVar60 = ZEXT1664(auVar46);
    SteamAPI_RunCallbacks();
  }
  iVar43 = w.game_mode;
  iVar10 = w.menu;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = (param_1->resolution).field0_0x0;
  auVar46 = vcvtdq2ps_avx(auVar47);
  auVar45 = vmovshdup_avx(auVar46);
  fVar51 = auVar46._0_4_ / auVar45._0_4_;
  auVar55 = ZEXT1664(CONCAT124(auVar46._4_12_,fVar51));
  auVar46 = vcvtdq2ps_avx(ZEXT416((uint)(int)(param_5->size).field0_0x0._s_0.y));
  auVar62 = ZEXT1664(auVar46);
  fVar19 = auVar46._0_4_;
  auVar45 = vcvtdq2ps_avx(ZEXT416((uint)(int)(param_5->size).field0_0x0._s_0.x));
  auVar57 = ZEXT1664(auVar45);
  auVar47 = vminss_avx(auVar45,ZEXT416((uint)(fVar51 * fVar19)));
  draw_width = auVar47._0_4_;
  auVar48._0_4_ = auVar45._0_4_ / fVar51;
  auVar48._4_12_ = auVar45._4_12_;
  auVar46 = vminss_avx(auVar46,auVar48);
  draw_height = auVar46._0_4_;
  if (w.loading_screen == 0) {
    if (*piVar14 == 0) {
      if (w.menu == 4 || w.game_mode != 0) {
        paused = w.menu != 0;
        iVar13 = w.menu;
        if ((w.menu == 4) && (iVar13 = 4, w.dead != 0)) goto LAB_14014d84c;
      }
      else {
        w.menu = 0;
        iVar13 = 0;
LAB_14014d84c:
        paused = false;
      }
      param_5->clip_cursor = (bool)((paused ^ 1U) & w.game_mode != 0);
      if ((iVar13 == 2) && (0 < w.em.searchbox.n_text)) {
        (param_5->frame_input).escape_blocked = true;
      }
      iVar18 = iVar13;
      if (iVar13 != 4 && iVar43 != 0) {
        uVar41 = settings.field3_0xc.keybinds.edit + 7;
        if (-1 < settings.field3_0xc.keybinds.edit) {
          uVar41 = settings.field3_0xc.keybinds.edit;
        }
        if (((param_5->frame_input).pressed_buttons[(int)uVar41 >> 3] >>
             (settings.field3_0xc.keybinds.edit & 7U) & 1) == 0) {
          if (((((param_5->frame_input).gamepad.buttons & 0x20) != 0) && (iVar13 != 1)) &&
             (((param_5->frame_input).gamepad_prev_buttons & 0x20U) == 0)) goto LAB_14014e6eb;
        }
        else {
          iVar18 = 1;
          if (iVar13 != 1) {
LAB_14014e6eb:
            iVar18 = (uint)(iVar13 != 2) * 2;
            w.menu = iVar18;
            (param_5->frame_input).click_blocked = true;
            (param_5->frame_input).right_click_blocked = true;
          }
        }
        if ((((param_5->frame_input).pressed_buttons[0xf] & 4) != 0) &&
           (settings.replay_recorder != 0)) {
          iVar18 = (uint)(iVar18 != 3) * 3;
          w.menu = iVar18;
        }
        if ((((((param_5->frame_input).pressed_buttons[3] & 8) != 0) ||
             ((((param_5->frame_input).gamepad.buttons & 0x10) != 0 &&
              (((param_5->frame_input).gamepad_prev_buttons & 0x10) == 0)))) &&
            ((param_5->frame_input).escape_blocked == false)) && (iVar18 != 1)) {
          if (iVar18 == 0) {
            w.menu = 1;
            save_settings();
            (param_5->frame_input).escape_blocked = true;
            iVar18 = w.menu;
          }
          else {
            w.menu = 0;
            (param_5->frame_input).escape_blocked = true;
            iVar18 = 0;
          }
        }
      }
      paused = iVar18 != 0;
    }
  }
  else if (*piVar14 == 0) {
    if ((w.starting_new_run == 0) || (2.2 <= w.start_trans)) {
      w.start_animation_done = 1;
      if (loading_tip_text == (char *)0x0) {
        _time64((long64 *)local_898);
        snprintf((char *)&local_4e8,0x100,"tip_%d");
        loading_tip_text = get_translation_formatted((char *)&local_4e8,(translation_info)0x0);
        auVar45 = auVar57._0_16_;
      }
      (*glBindFramebuffer)(0x8d40,param_2->frame_buffer);
      glViewport(0,0,(param_2->resolution).field0_0x0._s_0.x,(param_2->resolution).field0_0x0._s_0.y
                );
      prVar37 = (real_4_u_0 *)0x0;
      (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_2->field14_0xc8)._s_0.color_texture,0);
      local_4e8.dwLowDateTime = 0x8ce0;
      (*glDrawBuffers)(1,&local_4e8.dwLowDateTime);
      fVar51 = 0.0;
      auVar55 = ZEXT464(0x3f800000);
      glClearColor(0,0,0,auVar55._0_8_);
      glClear(0x4000);
      if (loading_tip_text != (char *)0x0) {
        local_6b8 = 0.0;
        local_6f8 = ZEXT1632(CONCAT412(0x3b03126f,ZEXT812(0)));
        local_6d8._4_28_ = ZEXT828(SUB128(ZEXT812(0),4));
        local_6d8._0_4_ = 0x3f800000;
        local_5a8._0_8_ = *(undefined8 *)((longlong)&param_2->field29_0x128 + 0xb8);
        local_5a8.info.userdata = (param_2->field29_0x128).font_infos[1].info.userdata;
        local_5a8.info.data = (param_2->field29_0x128).font_infos[1].info.data;
        local_5a8.info.fontstart = *(int *)((longlong)&param_2->field29_0x128 + 0xd0);
        local_5a8.info.numGlyphs = *(int *)((longlong)&param_2->field29_0x128 + 0xd4);
        local_5a8.info.loca = *(int *)((longlong)&param_2->field29_0x128 + 0xd8);
        local_5a8.info.head = *(int *)((longlong)&param_2->field29_0x128 + 0xdc);
        local_5a8.info.glyf = *(int *)((longlong)&param_2->field29_0x128 + 0xe0);
        local_5a8.info.hhea = *(int *)((longlong)&param_2->field29_0x128 + 0xe4);
        local_5a8.info.hmtx = *(int *)((longlong)&param_2->field29_0x128 + 0xe8);
        local_5a8.info.kern = *(int *)((longlong)&param_2->field29_0x128 + 0xec);
        local_5a8.info.gpos = *(int *)((longlong)&param_2->field29_0x128 + 0xf0);
        local_5a8.info.svg = *(int *)((longlong)&param_2->field29_0x128 + 0xf4);
        local_5a8.info.index_map = *(int *)((longlong)&param_2->field29_0x128 + 0xf8);
        local_5a8.info.indexToLocFormat = *(int *)((longlong)&param_2->field29_0x128 + 0xfc);
        local_5a8.info.cff.data = (param_2->field29_0x128).font_infos[1].info.cff.data;
        local_5a8.info.cff.cursor =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).cff.cursor;
        local_5a8.info.cff.size =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).cff.size;
        local_5a8.info.charstrings.data =
             (param_2->field29_0x128).font_infos[1].info.charstrings.data;
        local_5a8.info.charstrings.cursor =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).charstrings.
             cursor;
        local_5a8.info.charstrings.size =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).charstrings.
             size;
        local_5a8.info.gsubrs.data = (param_2->field29_0x128).font_infos[1].info.gsubrs.data;
        local_5a8.info.gsubrs.cursor =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).gsubrs.cursor;
        local_5a8.info.gsubrs.size =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).gsubrs.size;
        local_5a8.info.subrs.data = (param_2->field29_0x128).font_infos[1].info.subrs.data;
        local_5a8.info.subrs.cursor =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).subrs.cursor;
        local_5a8.info.subrs.size =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).subrs.size;
        local_5a8.info.fontdicts.data = (param_2->field29_0x128).font_infos[1].info.fontdicts.data;
        local_5a8.info.fontdicts.cursor =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).fontdicts.
             cursor;
        local_5a8.info.fontdicts.size =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).fontdicts.size
        ;
        local_5a8.info.fdselect.data = (param_2->field29_0x128).font_infos[1].info.fdselect.data;
        local_5a8.info.fdselect.cursor =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).fdselect.
             cursor;
        local_5a8.info.fdselect.size =
             (((font_info *)((longlong)&(param_2->field29_0x128)._s_0 + 0xb8))->info).fdselect.size;
        local_5a8._168_8_ = *(undefined8 *)((longlong)&param_2->field29_0x128 + 0x160);
        local_5a8.char_data = (param_2->field29_0x128).font_infos[1].char_data;
        local_758._s_0.x = 1.0;
        local_758._s_0.y = 1.0;
        local_758._s_0.z = 1.0;
        local_758._s_0.w = 1.0;
        prVar37 = &local_758;
        auVar55 = ZEXT1664(auVar55._0_16_);
        auVar60 = ZEXT1664(auVar60._0_16_);
        draw_text(loading_tip_text,0.0,-0.75,(real_4 *)&prVar37->_s_0,(real_2)0x0,&local_5a8,
                  (text_params *)local_6f8);
      }
      fVar36 = param_2->time + param_2->time;
      auVar62 = ZEXT464((uint)fVar36);
      auVar57 = ZEXT464((uint)fVar36);
      cosf();
      auVar54 = ZEXT1664(auVar57._0_16_);
      auVar57 = ZEXT1664(auVar62._0_16_);
      sinf();
      auVar62 = ZEXT1664(auVar57._0_16_);
      fVar36 = param_2->time * 7.0;
      auVar56 = ZEXT464((uint)fVar36);
      auVar57 = ZEXT464((uint)fVar36);
      cosf();
      auVar58 = ZEXT1664(auVar57._0_16_);
      auVar57 = ZEXT1664(auVar56._0_16_);
      sinf();
      auVar46 = vinsertps_avx(auVar58._0_16_,auVar62._0_16_,0x10);
      auVar47 = vinsertps_avx(auVar54._0_16_,auVar57._0_16_,0x10);
      auVar54 = ZEXT1664(CONCAT412(auVar46._12_4_ * 0.0 + auVar47._12_4_ * 0.0,
                                   CONCAT48(auVar46._8_4_ * 0.0 + auVar47._8_4_ * 0.0,
                                            CONCAT44(auVar46._4_4_ * 0.5 + auVar47._4_4_ * 0.1,
                                                     auVar46._0_4_ * 0.1 + auVar47._0_4_ * 0.5))));
      auVar57 = ZEXT464((uint)(auVar60._0_4_ * -8.0));
      auVar56 = ZEXT1664(auVar60._0_16_);
      auVar62 = ZEXT1664(CONCAT412(auVar60._12_4_ ^ 0x80000000,
                                   CONCAT48(auVar60._8_4_ ^ 0x80000000,
                                            auVar60._0_8_ ^ 0x8000000080000000)));
      fVar36 = 0.1;
      auVar60 = ZEXT464(0x3e4ccccd);
      lVar33 = 0;
      fVar20 = 0.5;
      fVar59 = 0.8;
      do {
        auVar58 = ZEXT1664(auVar57._0_16_);
        expf();
        fVar8 = auVar55._0_4_ - auVar58._0_4_;
        fVar51 = fVar51 * fVar8 +
                 auVar58._0_4_ * *(float *)((longlong)&loading_circles[0].x.field0_0x0 + lVar33 + 8)
        ;
        uVar39 = *(undefined8 *)((longlong)&loading_circles[0].x.field0_0x0 + lVar33);
        auVar46 = vmovsldup_avx(auVar58._0_16_);
        auVar47 = vmovsldup_avx(ZEXT416((uint)fVar8));
        auVar52._0_4_ = auVar54._0_4_ * auVar47._0_4_ + auVar46._0_4_ * (float)uVar39;
        auVar52._4_4_ =
             auVar54._4_4_ * auVar47._4_4_ + auVar46._4_4_ * (float)((ulonglong)uVar39 >> 0x20);
        auVar52._8_4_ = auVar54._8_4_ * auVar47._8_4_ + auVar46._8_4_ * 0.0;
        auVar52._12_4_ = auVar54._12_4_ * auVar47._12_4_ + auVar46._12_4_ * 0.0;
        auVar54 = ZEXT1664(auVar52);
        uVar39 = vmovlps_avx(auVar52);
        *(undefined8 *)((longlong)&loading_circles[0].x.field0_0x0 + lVar33) = uVar39;
        *(float *)((longlong)&loading_circles[0].x.field0_0x0 + lVar33 + 8) = fVar51;
        auVar58 = ZEXT1664(auVar62._0_16_);
        expf();
        *(float *)((longlong)&loading_circles[0].r + lVar33) =
             fVar36 * (auVar55._0_4_ - auVar58._0_4_) +
             auVar58._0_4_ * *(float *)((longlong)&loading_circles[0].r + lVar33);
        auVar58 = ZEXT1664(auVar62._0_16_);
        expf();
        uVar41 = (undefined4)((ulonglong)prVar37 >> 0x20);
        auVar46 = vinsertps_avx(auVar58._0_16_,auVar60._0_16_,0x10);
        auVar48 = vshufps_avx(auVar46,auVar46,0x40);
        uVar35 = *(uint *)((longlong)&loading_circles[0].color.field0_0x0 + lVar33 + 8);
        auVar53._4_4_ = 0;
        auVar53._0_4_ = uVar35;
        auVar53._8_4_ = uVar35;
        auVar53._12_4_ = 0;
        auVar52 = ZEXT416((uint)(auVar55._0_4_ - auVar58._0_4_));
        auVar46 = vinsertps_avx(auVar53,auVar52,0x30);
        auVar47 = vmovlps_avx(auVar46,*(undefined8 *)
                                       ((longlong)&loading_circles[0].color.field0_0x0 + lVar33));
        auVar46 = vinsertps_avx(auVar52,ZEXT416((uint)(auVar58._0_4_ *
                                                      *(float *)((longlong)
                                                                 &loading_circles[0].color.
                                                                  field0_0x0 + lVar33 + 0xc))),0x10)
        ;
        auVar46 = vshufps_avx(auVar46,auVar46,0x40);
        *(float *)((longlong)&loading_circles[0].color.field0_0x0 + lVar33) =
             auVar48._0_4_ * auVar47._0_4_ + auVar46._0_4_;
        *(float *)((longlong)&loading_circles[0].color.field0_0x0 + lVar33 + 4) =
             auVar48._4_4_ * auVar47._4_4_ + auVar46._4_4_;
        *(float *)((longlong)&loading_circles[0].color.field0_0x0 + lVar33 + 8) =
             auVar48._8_4_ * auVar47._8_4_ + auVar46._8_4_;
        *(float *)((longlong)&loading_circles[0].color.field0_0x0 + lVar33 + 0xc) =
             auVar48._12_4_ * auVar47._12_4_ + auVar46._12_4_;
        auVar60 = ZEXT464((uint)(fVar20 * auVar60._0_4_));
        fVar36 = fVar36 * fVar59;
        lVar33 = lVar33 + 0x20;
      } while (lVar33 != 0x180);
      local_6a8._0_8_ = *(undefined8 *)&(param_2->camera).field0_0x0;
      local_6a8._8_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 8);
      local_6a8._16_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x10);
      local_6a8._24_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x18);
      local_6a8._32_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x20);
      local_6a8._40_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x28);
      local_6a8._48_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x30);
      local_6a8._56_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x38);
      prVar30 = &local_6a8;
      auVar60 = ZEXT1664(auVar56._0_16_);
      draw_circles(loading_circles,0xc,(real_4x4 *)prVar30->columns);
      uVar34 = (undefined4)((ulonglong)prVar30 >> 0x20);
      fVar51 = auVar60._0_4_;
      local_8d8 = auVar45._0_4_;
      if (settings.hardware_cursor == 0) {
        if (w.hide_cursor == 0) {
          (*glBindFramebuffer)(0x8d40,param_2->frame_buffer);
          glViewport(0,0,(param_2->resolution).field0_0x0._s_0.x,
                     (param_2->resolution).field0_0x0._s_0.y);
          uVar34 = 0;
          (*glFramebufferTexture2D)
                    (0x8d40,0x8ce0,0xde1,(param_2->field14_0xc8)._s_0.color_texture,0);
          local_4e8.dwLowDateTime = 0x8ce0;
          (*glDrawBuffers)(1,&local_4e8.dwLowDateTime);
          local_768._s_0.x = 1.0;
          local_768._s_0.y = 1.0;
          local_768._s_0.z = 1.0;
          local_768._s_0.w = 1.0;
          local_7f8.xy.field0_0x0 = (real_2)(param_5->frame_input).mouse.field0_0x0;
          local_7f8._s_0.z = 0.0;
          prVar37 = &local_768;
          draw_cursor(param_2,(real_3 *)&local_7f8._s_0,0.07,(real_4 *)&prVar37->_s_0,
                      (param_5->frame_input).cursor_type);
          uVar41 = (undefined4)((ulonglong)prVar37 >> 0x20);
          fVar51 = auVar60._0_4_;
        }
      }
      else {
        current_cursor_icon = (param_5->frame_input).cursor_type;
      }
      param_2->time = fVar51 + param_2->time;
      uVar40 = 0;
      uVar26 = 0;
      (*glBindFramebuffer)(0x8d40,0);
      glViewport(CONCAT44(uVar40,(int)(fVar20 * (local_8d8 - draw_width))),
                 CONCAT44(uVar26,(int)(fVar20 * (fVar19 - draw_height))),
                 CONCAT44(uVar34,(int)draw_width),CONCAT44(uVar41,(int)draw_height));
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
      local_898 = (undefined1  [8])0x3f8000003f800000;
      (*glUseProgram)(fullscreen_texture_no_lighting_program);
      pfVar31 = (float *)local_898;
    }
    else {
      fVar19 = auVar60._0_4_ + param_1->time;
      param_1->time = fVar19;
      fVar51 = w.start_trans;
      if ((0.3 < w.start_trans) && (DAT_1401fb370 == '\0')) {
        local_78c._4_12_ = ZEXT812(0);
        local_78c._16_4_ = 0;
        local_78c._0_4_ = 0.7;
        play_sound(&sounds.run_start,(sound_params *)local_78c);
      }
      DAT_1401fb370 = 0.3 < fVar51;
      w.start_trans = auVar60._0_4_ * 3.0 + w.start_trans;
      w.start_animation_done = (uint)(2.2 <= w.start_trans);
      (*glBindFramebuffer)(0x8d40,param_1->lighting_frame_buffer);
      iVar10 = (param_1->resolution).field0_0x0._s_0.x;
      iVar43 = (param_1->resolution).field0_0x0._s_0.y;
      iVar13 = iVar43 + 3;
      if (-1 < iVar43) {
        iVar13 = iVar43;
      }
      iVar43 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar43 = iVar10;
      }
      glViewport(0,0,iVar43 >> 2,iVar13 >> 2);
      (*glBlendFuncSeparate)(1,1,1,1);
      glClearColor(0,0,0);
      glClear(0x4000);
      (*glUseProgram)(menu_lighting_program);
      current_uniforms = menu_lighting_program_uniforms;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = (param_1->resolution).field0_0x0;
      auVar46 = vcvtdq2ps_avx(auVar49);
      auVar45 = vmovshdup_avx(auVar46);
      (*glUniform1f)(menu_lighting_program_uniforms[0],auVar46._0_4_ / auVar45._0_4_);
      (*glUniform1f)(current_uniforms[1],fVar19);
      (*glBindBuffer)(0x8892,gl_general_buffers[0]);
      local_4e8.dwLowDateTime = 0xbf800000;
      local_4e8.dwHighDateTime = 0xbf800000;
      uStack_4e0 = 0x3f800000bf800000;
      uStack_4d8 = 0x3f8000003f800000;
      uStack_4d0 = 0xbf8000003f800000;
      auVar55 = ZEXT1664(auVar55._0_16_);
      auVar57 = ZEXT1664(auVar57._0_16_);
      auVar60 = ZEXT1664(auVar60._0_16_);
      auVar62 = ZEXT1664(auVar62._0_16_);
      (*glBufferSubData)(0x8892,0,0x20,&local_4e8);
      (*glEnableVertexAttribArray)(0);
      (*glVertexAttribPointer)(0,2,0x1406,'\0',0,(void *)0x0);
      (*glVertexAttribDivisor)(0,0);
      glDrawArrays(6,0,4);
      (*glBindFramebuffer)(0x8d40,param_1->frame_buffer);
      glViewport(0,0,(param_1->resolution).field0_0x0._s_0.x,(param_1->resolution).field0_0x0._s_0.y
                );
      (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_1->field14_0xc8)._s_0.color_texture,0);
      local_4e8.dwLowDateTime = 0x8ce0;
      (*glDrawBuffers)(1,&local_4e8.dwLowDateTime);
      glClearColor(0,0,0);
      glClear(0x4000);
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
      fVar51 = fVar19 * 0.1;
      fVar36 = fVar51;
      sinf();
      local_79c._s_0.x = fVar51 * 0.05 + 0.25;
      local_79c._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_79c._s_0.w = 1.0;
      draw_menu_background(param_1,fVar19,w.start_trans,0.0,(real_4 *)&local_79c._s_0);
      if (settings.background_effects == 0) {
        draw_cells_to_screen(param_1);
      }
      (*glBindFramebuffer)(0x8d40,param_1->post_process_frame_buffer);
      if (settings.background_effects != 0) {
        iVar10 = param_1->current_background_texture;
        (*glFramebufferTexture2D)
                  (0x8d40,0x8ce2,0xde1,
                   *(uint *)((longlong)&param_1->field14_0xc8 +
                            (longlong)
                            (int)((iVar10 - ((iVar10 - (iVar10 + 1 >> 0x1f)) + 1U & 0xfffffffe)) + 1
                                 ) * 4 + 0xc),0);
      }
      pHStack_890._0_4_ = 0x8ce2;
      local_898 = (undefined1  [8])0x8ce100008ce0;
      (*glDrawBuffers)(3,(uint *)local_898);
      glDisable(0xbe2);
      fVar51 = 1.0;
      draw_walls(param_1,(map_t *)0x0,1.0);
      glEnable(0xbe2);
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
      if (settings.background_effects != 0) {
        (*glBindFramebuffer)(0x8d40,param_1->background_frame_buffer);
        (*glFramebufferTexture2D)
                  (0x8d40,0x8ce0,0xde1,
                   *(uint *)((longlong)&param_1->field14_0xc8 +
                            (longlong)param_1->current_background_texture * 4 + 0xc),0);
        sinf();
        local_7ac._s_0.x = fVar36 * 0.05 + 0.15;
        local_7ac._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
        local_7ac._s_0.w = 1.0;
        draw_menu_background(param_2,fVar19,w.start_trans,0.0,(real_4 *)&local_7ac._s_0);
      }
      (*glBindFramebuffer)(0x8d40,param_2->frame_buffer);
      glViewport(0,0,(param_2->resolution).field0_0x0._s_0.x,(param_2->resolution).field0_0x0._s_0.y
                );
      (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_2->field14_0xc8)._s_0.color_texture,0);
      local_4e8.dwLowDateTime = 0x8ce0;
      (*glDrawBuffers)(1,&local_4e8.dwLowDateTime);
      local_7d8.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_7d8._s_0.z = 0.0;
      fVar19 = auVar60._0_4_ * -9.0;
      expf();
      local_7d8._s_0.w = fVar51 - fVar19;
      local_7e8.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_7e8._s_0.z = 0.0;
      rVar29 = (real_2_u_0)(CONCAT44(extraout_var,auVar55._0_4_ + 0.1) | 0x3f8ccccd00000000);
      prVar37 = &local_7d8;
      draw_rectangle(param_2,(real_3 *)&local_7e8._s_0,(real_2)rVar29._s_0,(real_4 *)&prVar37->_s_0)
      ;
      fVar19 = rVar29._s_0.y;
      uVar40 = (undefined4)((ulonglong)prVar37 >> 0x20);
      uVar41 = 0;
      uVar34 = 0;
      (*glBindFramebuffer)(0x8d40,0);
      glViewport(CONCAT44(uVar41,(int)((auVar57._0_4_ - draw_width) * 0.5)),
                 CONCAT44(uVar34,(int)((auVar62._0_4_ - draw_height) * 0.5)),
                 CONCAT44(fVar19,(int)draw_width),CONCAT44(uVar40,(int)draw_height));
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
      if (settings.distortions == 0) {
        draw_to_screen_no_lighting(param_1,(param_1->field14_0xc8)._s_0.post_color_texture);
      }
      else {
        draw_to_screen_post_process(param_1,(real_2)0x3f8000003f800000);
      }
      local_7b8 = 0x3f8000003f800000;
      (*glUseProgram)(fullscreen_texture_no_lighting_program);
      pfVar31 = (float *)&local_7b8;
    }
    current_uniforms = fullscreen_texture_no_lighting_program_uniforms;
    (*glUniform2fv)(fullscreen_texture_no_lighting_program_uniforms[0],1,pfVar31);
    (*glUniform1f)(current_uniforms[1],settings.brightness);
    (*glUniform1f)(current_uniforms[2],settings.contrast);
    (*glUniform1i)(current_uniforms[3],0);
    (*glActiveTexture)(0x84c0);
    glBindTexture(0xde1);
    uStack_4c8 = 0x3f80000000000000;
    uStack_4c0 = 0xbf800000;
    local_4e8.dwLowDateTime = 0xbf800000;
    local_4e8.dwHighDateTime = 0xbf800000;
    uStack_4e0 = 0xbf80000000000000;
    uStack_4d8 = 0x3f800000;
    uStack_4d0 = 0x3f8000003f800000;
    (*glBufferSubData)(0x8892,0,0x30,&local_4e8);
    (*glEnableVertexAttribArray)(0);
    (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
    (*glVertexAttribDivisor)(0,0);
    glDrawArrays(6,0,4);
    return;
  }
  pvVar15 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar15 + 8) + 0x18);
  auVar47 = auVar62._0_16_;
  auVar45 = auVar60._0_16_;
  auVar46 = auVar57._0_16_;
  if (paused == false) {
    pvVar15 = TlsGetValue(tls_index);
    pvVar16 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar16 + 8) + 0x18);
    iVar43 = (*context_list)->current_profiler_frame;
    *(int *)((longlong)pvVar15 + 200) = iVar43;
    puVar17 = *(uchar **)((longlong)pvVar15 + 0xc0);
    if (puVar17 == (uchar *)0x0) {
      puVar17 = dynamic_alloc(0xa000);
      *(uchar **)((longlong)pvVar15 + 0xc0) = puVar17;
      memset();
      iVar43 = *(int *)((longlong)pvVar15 + 200);
    }
    uVar35 = iVar43 + 1U & 0x1ff;
    *(uint *)((longlong)pvVar15 + 200) = uVar35;
    puVar17 = puVar17 + (ulonglong)(uVar35 * 0x50) + 0x48;
    puVar17[0] = '\0';
    puVar17[1] = '\0';
    puVar17[2] = '\0';
    puVar17[3] = '\0';
    if (*piVar14 == 0) {
      if (iVar10 == 2) {
        apply_edit_menu();
      }
      if (w.game_mode != 0) {
        w._4_4_ = w._4_4_ & 0xfffffffe;
      }
      if (w.block_mouse != 0) {
        (param_5->input).buttons[0] = '\0';
        (param_5->input).pressed_buttons[0] = '\0';
        (param_5->input).click_blocked = true;
        (param_5->input).hover_blocked = true;
      }
    }
    auVar47 = auVar62._0_16_;
    auVar45 = auVar60._0_16_;
    auVar46 = auVar57._0_16_;
    if (settings.cap_framerate == 0) {
      uVar35 = 1;
    }
    else {
      uVar35 = (settings.framerate_cap + 0x77) / settings.framerate_cap;
    }
    if ((int)uVar35 < 1 || delta_t <= 0.008333334) {
      iVar43 = 0;
      iVar10 = *piVar14;
    }
    else {
      iVar43 = 0;
      auVar55 = ZEXT464(0xbc088889);
      auVar54 = ZEXT464(0x3c088889);
      iVar10 = 1;
      do {
        auVar55 = ZEXT1664(auVar55._0_16_);
        auVar54 = ZEXT1664(auVar54._0_16_);
        auVar57 = ZEXT1664(auVar57._0_16_);
        auVar60 = ZEXT1664(auVar60._0_16_);
        auVar62 = ZEXT1664(auVar62._0_16_);
        TlsGetValue(tls_index);
        prVar24 = (render_context *)0x0;
        EnterSynchronizationBarrier();
        if (*piVar14 == 0) {
          delta_t = auVar55._0_4_ + delta_t;
        }
        start_trace(0);
        update_game(param_1,prVar24,&param_5->input);
        end_frame_trace();
        auVar47 = auVar62._0_16_;
        auVar45 = auVar60._0_16_;
        auVar46 = auVar57._0_16_;
        if (*piVar14 == 0) {
          *(undefined1 (*) [32])(param_5->input).released_buttons = ZEXT1232(ZEXT812(0));
          *(undefined1 (*) [32])(param_5->input).pressed_buttons = ZEXT1232(ZEXT812(0));
          puVar17 = (param_5->input).buttons + 1;
          *puVar17 = *puVar17 & 0xd3;
          (param_5->input).mouse_wheel = 0.0;
          (param_5->input).mouse_hwheel = 0.0;
          (param_5->input).dmouse.field0_0x0 = (real_2_u_0)0x0;
          bVar9 = (param_5->input).buttons[0];
          pbVar1 = &(param_5->input).click_blocked;
          *pbVar1 = (bool)(*pbVar1 & bVar9 >> 1);
          pbVar1 = &(param_5->input).right_click_blocked;
          *pbVar1 = (bool)(*pbVar1 & bVar9 >> 2);
          (param_5->input).escape_blocked = false;
          (param_5->input).hover_blocked = false;
          (param_5->input).n_text_stream = 0;
          (param_5->input).gamepad_prev_buttons = (param_5->input).gamepad.buttons;
          (param_5->input).gamepad.left_trigger = 0.0;
          (param_5->input).gamepad.right_trigger = 0.0;
          (param_5->input).cursor_type = 0;
        }
        if ((w.frame_number & 3U) == 0) {
          iVar43 = 1;
        }
      } while ((auVar54._0_4_ < delta_t) &&
              (bVar44 = iVar10 < (int)uVar35, iVar10 = iVar10 + 1, bVar44));
      iVar10 = *piVar14;
    }
    if (iVar10 == 0) {
      param_1->time = auVar45._0_4_ + param_1->time;
    }
  }
  else {
    if (*piVar14 == 0) {
      *(undefined1 (*) [32])(param_5->input).released_buttons = ZEXT1232(ZEXT812(0));
      *(undefined1 (*) [32])(param_5->input).pressed_buttons = ZEXT1232(ZEXT812(0));
      puVar17 = (param_5->input).buttons + 1;
      *puVar17 = *puVar17 & 0xd3;
      (param_5->input).mouse_wheel = 0.0;
      (param_5->input).mouse_hwheel = 0.0;
      (param_5->input).dmouse.field0_0x0 = (real_2_u_0)0x0;
      bVar9 = (param_5->input).buttons[0];
      pbVar1 = &(param_5->input).click_blocked;
      *pbVar1 = (bool)(*pbVar1 & bVar9 >> 1);
      pbVar1 = &(param_5->input).right_click_blocked;
      *pbVar1 = (bool)(*pbVar1 & bVar9 >> 2);
      (param_5->input).escape_blocked = false;
      (param_5->input).hover_blocked = false;
      (param_5->input).n_text_stream = 0;
      (param_5->input).gamepad_prev_buttons = (param_5->input).gamepad.buttons;
      (param_5->input).gamepad.left_trigger = 0.0;
      (param_5->input).gamepad.right_trigger = 0.0;
      (param_5->input).cursor_type = 0;
    }
    iVar43 = 0;
  }
  auVar60 = ZEXT1664(auVar46);
  auVar55 = ZEXT1664(auVar45);
  auVar57 = ZEXT1664(auVar47);
  pvVar15 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar15 + 8) + 0x18,0);
  if (*piVar14 == 0) {
    if (0.016666668 < delta_t) {
      delta_t = 0.016666668;
    }
    param_2->time = auVar55._0_4_ + param_2->time;
    (*glBindFramebuffer)(0x8d40,param_2->frame_buffer);
    glViewport(0,0,(param_2->resolution).field0_0x0._s_0.x,(param_2->resolution).field0_0x0._s_0.y);
    (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_2->field14_0xc8)._s_0.color_texture,0);
    local_4e8.dwLowDateTime = 0x8ce0;
    (*glDrawBuffers)(1,&local_4e8.dwLowDateTime);
    glClearColor(0,0,0,0);
    glClear(0x4000);
    (*glBindFramebuffer)(0x8d40,param_1->frame_buffer);
    glViewport(0,0,(param_1->resolution).field0_0x0._s_0.x,(param_1->resolution).field0_0x0._s_0.y);
    (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_1->field14_0xc8)._s_0.color_texture,0);
    local_4e8.dwLowDateTime = 0x8ce0;
    (*glDrawBuffers)(1,&local_4e8.dwLowDateTime);
    glClearColor(0,0,0,0x3f800000);
    glClear(0x4000);
  }
  puVar2 = &param_5->frame_input;
  puVar32 = puVar2;
  prVar38 = param_3;
  render_game(param_1,param_2,puVar2,param_3,auVar55._0_4_,param_5);
  uVar41 = (undefined4)((ulonglong)puVar32 >> 0x20);
  uVar34 = (undefined4)((ulonglong)prVar38 >> 0x20);
  if (*piVar14 != 0) {
    return;
  }
  uVar35 = (uint)(param_5->frame_input).click_blocked;
  if ((param_5->frame_input).hover_blocked == false) {
    uVar12 = uVar35 << 0x16;
  }
  else {
    uVar12 = 0x400000;
    if (uVar35 == 0) {
      uVar12 = (uint)((((param_5->frame_input).pressed_buttons[0] |
                       (param_5->frame_input).buttons[0]) & 2) == 0) << 0x16;
    }
  }
  w._4_4_ = w._4_4_ & 0xffbfffff | uVar12;
  uVar40 = 0;
  uVar26 = 0;
  (*glBindFramebuffer)(0x8d40,0);
  uVar39 = CONCAT44(uVar34,(int)draw_height);
  fVar19 = 0.5;
  glViewport(CONCAT44(uVar40,(int)((auVar60._0_4_ - draw_width) * 0.5)),
             CONCAT44(uVar26,(int)((auVar57._0_4_ - draw_height) * 0.5)),
             CONCAT44(uVar41,(int)draw_width),uVar39);
  uVar41 = (undefined4)((ulonglong)uVar39 >> 0x20);
  glClearColor(0,0,0,0);
  glClear(0x4100);
  if (settings.distortions == 0) {
    local_898 = (undefined1  [8])0x3f8000003f800000;
    (*glUseProgram)(fullscreen_texture_no_lighting_program);
    current_uniforms = fullscreen_texture_no_lighting_program_uniforms;
    (*glUniform2fv)(fullscreen_texture_no_lighting_program_uniforms[0],1,(float *)local_898);
    (*glUniform1f)(current_uniforms[1],settings.brightness);
    (*glUniform1f)(current_uniforms[2],settings.contrast);
    (*glUniform1i)(current_uniforms[3],0);
    (*glActiveTexture)(0x84c0);
    glBindTexture(0xde1);
    uStack_4c8 = 0x3f80000000000000;
    uStack_4c0 = 0xbf800000;
    local_4e8.dwLowDateTime = 0xbf800000;
    local_4e8.dwHighDateTime = 0xbf800000;
    uStack_4e0 = 0xbf80000000000000;
    uStack_4d8 = 0x3f800000;
    uStack_4d0 = 0x3f8000003f800000;
    auVar60 = ZEXT1664(auVar60._0_16_);
    auVar55 = ZEXT1664(auVar55._0_16_);
    auVar57 = ZEXT1664(auVar57._0_16_);
    (*glBufferSubData)(0x8892,0,0x30,&local_4e8);
    (*glEnableVertexAttribArray)(0);
    uVar41 = 0;
    (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
    (*glVertexAttribDivisor)(0,0);
    glDrawArrays(6,0,4);
  }
  else {
    draw_to_screen_post_process(param_1,(real_2)0x3f8000003f800000);
  }
  iVar10 = settings.gif_frames + 3;
  if (-1 < settings.gif_frames) {
    iVar10 = settings.gif_frames;
  }
  uVar34 = 0;
  iVar13 = 0;
  if (iVar10 >> 2 <= death_frames) {
    iVar43 = iVar13;
  }
  if ((w.dead != 0) && (w.game_mode == 1)) {
    if ((char)iVar43 == '\0') goto LAB_14014eee7;
    iVar13 = death_frames + 1;
  }
  death_frames = iVar13;
  if ((char)iVar43 == '\x01') {
    uVar34 = 0;
    add_recording_frame(param_1,param_3);
  }
LAB_14014eee7:
  uVar40 = 0;
  uVar26 = 0;
  (*glBindFramebuffer)(0x8d40,0);
  glViewport(CONCAT44(uVar40,(int)((auVar60._0_4_ - draw_width) * fVar19)),
             CONCAT44(uVar26,(int)((auVar57._0_4_ - draw_height) * fVar19)),
             CONCAT44(uVar34,(int)draw_width),CONCAT44(uVar41,(int)draw_height));
  (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
  local_898 = (undefined1  [8])0x3f8000003f800000;
  (*glUseProgram)(fullscreen_texture_no_lighting_program);
  current_uniforms = fullscreen_texture_no_lighting_program_uniforms;
  (*glUniform2fv)(fullscreen_texture_no_lighting_program_uniforms[0],1,(float *)local_898);
  (*glUniform1f)(current_uniforms[1],settings.brightness);
  (*glUniform1f)(current_uniforms[2],settings.contrast);
  (*glUniform1i)(current_uniforms[3],0);
  (*glActiveTexture)(0x84c0);
  glBindTexture(0xde1);
  uStack_4c8 = 0x3f80000000000000;
  uStack_4c0 = 0xbf800000;
  local_4e8.dwLowDateTime = 0xbf800000;
  local_4e8.dwHighDateTime = 0xbf800000;
  uStack_4e0 = 0xbf80000000000000;
  uStack_4d8 = 0x3f800000;
  uStack_4d0 = 0x3f8000003f800000;
  auVar60 = ZEXT1664(auVar55._0_16_);
  (*glBufferSubData)(0x8892,0,0x30,&local_4e8);
  (*glEnableVertexAttribArray)(0);
  (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
  (*glVertexAttribDivisor)(0,0);
  glDrawArrays(6);
  smoothed_frame_time = smoothed_frame_time * 0.97 + auVar60._0_4_ * 0.03;
  if (settings.show_fps != 0) {
    sprintf((char *)&local_4e8,"%2.1f ms\n%2.1f fps");
    local_708 = 0.0;
    local_748 = ZEXT1632(CONCAT412(0x3b03126f,ZEXT812(0)));
    local_728._4_28_ = ZEXT828(SUB128(ZEXT812(0),4));
    local_728._0_4_ = 0x3f800000;
    local_668._0_8_ = *(undefined8 *)&param_2->field29_0x128;
    local_668.info.userdata = (param_2->field29_0x128).font_infos[0].info.userdata;
    local_668.info.data = (param_2->field29_0x128).font_infos[0].info.data;
    local_668.info.fontstart = *(int *)((longlong)&param_2->field29_0x128 + 0x18);
    local_668.info.numGlyphs = *(int *)((longlong)&param_2->field29_0x128 + 0x1c);
    local_668.info.loca = *(int *)((longlong)&param_2->field29_0x128 + 0x20);
    local_668.info.head = *(int *)((longlong)&param_2->field29_0x128 + 0x24);
    local_668.info.glyf = *(int *)((longlong)&param_2->field29_0x128 + 0x28);
    local_668.info.hhea = *(int *)((longlong)&param_2->field29_0x128 + 0x2c);
    local_668.info.hmtx = *(int *)((longlong)&param_2->field29_0x128 + 0x30);
    local_668.info.kern = *(int *)((longlong)&param_2->field29_0x128 + 0x34);
    local_668.info.gpos = *(int *)((longlong)&param_2->field29_0x128 + 0x38);
    local_668.info.svg = *(int *)((longlong)&param_2->field29_0x128 + 0x3c);
    local_668.info.index_map = *(int *)((longlong)&param_2->field29_0x128 + 0x40);
    local_668.info.indexToLocFormat = *(int *)((longlong)&param_2->field29_0x128 + 0x44);
    local_668.info.cff.data = (param_2->field29_0x128).font_infos[0].info.cff.data;
    local_668.info.cff.cursor = *(int *)((longlong)&param_2->field29_0x128 + 0x50);
    local_668.info.cff.size = *(int *)((longlong)&param_2->field29_0x128 + 0x54);
    local_668.info.charstrings.data = (param_2->field29_0x128).font_infos[0].info.charstrings.data;
    local_668.info.charstrings.cursor = *(int *)((longlong)&param_2->field29_0x128 + 0x60);
    local_668.info.charstrings.size = *(int *)((longlong)&param_2->field29_0x128 + 100);
    local_668.info.gsubrs.data = (param_2->field29_0x128).font_infos[0].info.gsubrs.data;
    local_668.info.gsubrs.cursor = *(int *)((longlong)&param_2->field29_0x128 + 0x70);
    local_668.info.gsubrs.size = *(int *)((longlong)&param_2->field29_0x128 + 0x74);
    local_668.info.subrs.data = (param_2->field29_0x128).font_infos[0].info.subrs.data;
    local_668.info.subrs.cursor = *(int *)((longlong)&param_2->field29_0x128 + 0x80);
    local_668.info.subrs.size = *(int *)((longlong)&param_2->field29_0x128 + 0x84);
    local_668.info.fontdicts.data = (param_2->field29_0x128).font_infos[0].info.fontdicts.data;
    local_668.info.fontdicts.cursor = *(int *)((longlong)&param_2->field29_0x128 + 0x90);
    local_668.info.fontdicts.size = *(int *)((longlong)&param_2->field29_0x128 + 0x94);
    local_668.info.fdselect.data = (param_2->field29_0x128).font_infos[0].info.fdselect.data;
    local_668.info.fdselect.cursor = *(int *)((longlong)&param_2->field29_0x128 + 0xa0);
    local_668.info.fdselect.size = *(int *)((longlong)&param_2->field29_0x128 + 0xa4);
    local_668._168_8_ = *(undefined8 *)((longlong)&param_2->field29_0x128 + 0xa8);
    local_668.char_data = (param_2->field29_0x128).font_infos[0].char_data;
    local_778.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_778._8_8_ = 0x3e99999a3f800000;
    draw_text((char *)&local_4e8,0.05 - draw_width / draw_height,0.95,(real_4 *)&local_778._s_0,
              (real_2)0x3f800000bf800000,&local_668,(text_params *)local_748);
  }
  if (w.gamepad_cursor_mode == 0) {
    return;
  }
  uVar3 = (param_5->frame_input).gamepad.buttons;
  iVar10 = 0;
  uVar35 = 0;
  if ((uVar3 & 8) != 0) {
    uVar35 = (uint)(((param_5->frame_input).gamepad_prev_buttons & 8) == 0);
  }
  if ((uVar3 & 4) != 0) {
    iVar10 = (int)(short)(((*(uint *)&(param_5->frame_input).gamepad_prev_buttons >> 2 & 1) != 0) -
                         1);
  }
  if ((uVar3 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = ~*(uint *)&(param_5->frame_input).gamepad_prev_buttons & 1;
  }
  iVar10 = iVar10 + uVar35;
  prVar25 = (real_2 *)0x0;
  if ((uVar3 & 2) == 0) {
    if (uVar12 == 0 && iVar10 == 0) {
      return;
    }
  }
  else {
    uVar12 = (int)(short)(((*(uint *)&(param_5->frame_input).gamepad_prev_buttons >> 1 & 1) != 0) -
                         1) + uVar12;
    if (uVar12 == 0 && iVar10 == 0) {
      return;
    }
  }
  if ((param_5->frame_input).active_ui_element == (void *)0x0) {
    rVar29._s_0 = (puVar2->mouse).field0_0x0._s_0;
    fVar36 = rVar29._s_0.x;
    fVar20 = rVar29._s_0.y;
    fVar19 = fVar36;
    fVar51 = fVar20;
    if (0 < (longlong)n_gamepad_anchors) {
      fVar19 = INFINITY;
      lVar33 = 0;
      do {
        rVar7 = (real_2_u_0)*(real_2_u_0 *)&gamepad_anchors[lVar33].field0_0x0._s_0;
        fVar59 = rVar7._0_4_ - fVar36;
        fVar8 = rVar7._s_0.y - fVar20;
        fVar51 = fVar8 * fVar8 + fVar59 * fVar59 + 0.0;
        if (0.001 <= fVar51) {
          auVar46 = vsqrtss_avx(ZEXT416((uint)fVar51),ZEXT416((uint)fVar51));
          fVar61 = 1.0 / auVar46._0_4_;
          fVar59 = fVar8 * fVar61 * (float)(int)uVar12 + fVar59 * fVar61 * (float)iVar10 + 0.0;
          if ((0.1 < fVar59) && (fVar51 = fVar51 * (1.2 - fVar59), fVar51 < fVar19)) {
            rVar29 = rVar7;
            fVar19 = fVar51;
          }
        }
        lVar33 = lVar33 + 1;
      } while (n_gamepad_anchors != lVar33);
      prVar25 = gamepad_anchors;
      fVar19 = rVar29._s_0.x;
      fVar51 = rVar29._s_0.y;
    }
    move_cursor(param_5,(real_2)(CONCAT44((int)((ulonglong)prVar25 >> 0x20),fVar19 - fVar36) |
                                (ulonglong)(uint)(fVar51 - fVar20) << 0x20));
  }
                    /* WARNING: Read-only address (ram,0x0001401bd140) is written */
                    /* WARNING: Read-only address (ram,0x0001401bd150) is written */
  return;
}

