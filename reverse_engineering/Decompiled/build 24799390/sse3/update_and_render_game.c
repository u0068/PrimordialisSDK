
/* WARNING: Type propagation algorithm not settling */
/* void __cdecl update_and_render_game(struct render_context * __ptr64,struct render_context *
   __ptr64,struct recording_buffer * __ptr64,float,struct window_t * __ptr64) */

void __cdecl
update_and_render_game
          (render_context *param_1,render_context *param_2,recording_buffer *param_3,float param_4,
          window_t *param_5)

{
  bool *pbVar1;
  int_2_u_0_s_0 iVar2;
  undefined8 uVar3;
  ushort uVar4;
  plan_cell *ppVar5;
  longlong lVar6;
  real_2_u_0 rVar7;
  double dVar8;
  char *pcVar9;
  byte bVar10;
  int iVar11;
  BOOL BVar12;
  int iVar13;
  int *piVar14;
  LPVOID pvVar15;
  LPVOID pvVar16;
  uchar *puVar17;
  real_2_u_0 rVar18;
  int iVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  real_2 rVar22;
  longlong lVar23;
  render_context *prVar24;
  real_2 rVar25;
  byte bVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  LARGE_INTEGER *pLVar30;
  longlong lVar31;
  uint uVar32;
  body *pbVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  undefined8 in_stack_fffffffffffff708;
  ulonglong in_stack_fffffffffffff710;
  undefined8 in_stack_fffffffffffff718;
  undefined4 uVar50;
  LARGE_INTEGER local_8a8;
  HWND__ *pHStack_8a0;
  undefined8 local_898;
  char *pcStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  LARGE_INTEGER *local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  char *local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  char *pcStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  recording_buffer *local_808;
  render_context *local_800;
  uchar *local_7f8;
  user_input *local_7f0;
  real_3_u_0 local_7e8;
  real_3_u_0 local_7d8;
  real_4_u_0 local_7c8;
  init_world_params local_7b8;
  LARGE_INTEGER local_7a8;
  real_4_u_0 local_79c;
  real_4_u_0 local_78c;
  sound_params local_77c;
  real_4_u_0 local_768;
  real_4_u_0 local_758;
  real_4_u_0 local_748;
  text_params local_738;
  text_params local_6e8;
  real_4x4_u_0 local_698;
  LARGE_INTEGER local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  font_info local_258;
  font_info local_1a0;
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffff708 >> 0x20);
  uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffff718 >> 0x20);
                    /* INLINE_REGION_START: get_context */
  piVar14 = TlsGetValue(tls_index);
  uVar32 = w.dead;
                    /* INLINE_REGION_END */
  bVar34 = w.game_mode == 2;
  if (1 < *(int *)(*(longlong *)(piVar14 + 2) + 0x10)) {
    if (audio_ready == false) {
      if (*piVar14 == 0) {
        memset(&DAT_14020e6d0,0,0x180);
        DAT_14020e850 = (char *)0x0;
        w.done_loading = 0;
        w.loading_screen = 1;
      }
      iVar11 = lane_split_into_two(1);
      if (iVar11 != 0) {
        load_sounds();
        goto LAB_14015d113;
      }
    }
    else if (w.starting_game != 0) {
                    /* INLINE_REGION_START: set_song */
      if ((*piVar14 == 0) && ((longlong)ac.current_song != 0)) {
        if (ac.initialized == true) {
          LOCK();
          sounds.music_loop[ac.current_song].field4_0x20.next_target_volume = 0.0;
          UNLOCK();
        }
        ac.current_song = 0;
      }
                    /* INLINE_REGION_END
                       INLINE_REGION_START: lane_sync */
      pvVar15 = TlsGetValue(tls_index);
      EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar15 + 8) + 0x18);
                    /* INLINE_REGION_END */
      if (*piVar14 == 0) {
        save_settings();
        if (uVar32 == 0 || bVar34) {
          save_world();
        }
        w.menu = 0;
                    /* INLINE_REGION_START: clear_input_state */
        (param_5->input).dmouse.field0_0x0 = (real_2_u_0)0x0;
        (param_5->input).n_text_stream = 0;
        (param_5->input).text_modifiers = 0;
        (param_5->input).mouse_wheel = 0.0;
        (param_5->input).mouse_hwheel = 0.0;
        (param_5->input).buttons[0] = '\0';
        (param_5->input).buttons[1] = '\0';
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
        (param_5->input).pressed_buttons[0] = '\0';
        (param_5->input).pressed_buttons[1] = '\0';
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
        (param_5->input).released_buttons[0] = '\0';
        (param_5->input).released_buttons[1] = '\0';
        (param_5->input).released_buttons[2] = '\0';
        (param_5->input).released_buttons[3] = '\0';
        (param_5->input).released_buttons[4] = '\0';
        (param_5->input).released_buttons[5] = '\0';
        (param_5->input).released_buttons[6] = '\0';
        (param_5->input).released_buttons[7] = '\0';
        (param_5->input).released_buttons[8] = '\0';
        (param_5->input).released_buttons[9] = '\0';
        (param_5->input).released_buttons[10] = '\0';
        (param_5->input).released_buttons[0xb] = '\0';
        (param_5->input).released_buttons[0xc] = '\0';
        (param_5->input).released_buttons[0xd] = '\0';
        (param_5->input).released_buttons[0xe] = '\0';
        (param_5->input).released_buttons[0xf] = '\0';
        (param_5->input).released_buttons[0x10] = '\0';
        (param_5->input).released_buttons[0x11] = '\0';
        (param_5->input).released_buttons[0x12] = '\0';
        (param_5->input).released_buttons[0x13] = '\0';
        (param_5->input).released_buttons[0x14] = '\0';
        (param_5->input).released_buttons[0x15] = '\0';
        (param_5->input).released_buttons[0x16] = '\0';
        (param_5->input).released_buttons[0x17] = '\0';
        (param_5->input).released_buttons[0x14] = '\0';
        (param_5->input).released_buttons[0x15] = '\0';
        (param_5->input).released_buttons[0x16] = '\0';
        (param_5->input).released_buttons[0x17] = '\0';
        (param_5->input).released_buttons[0x18] = '\0';
        (param_5->input).released_buttons[0x19] = '\0';
        (param_5->input).released_buttons[0x1a] = '\0';
        (param_5->input).released_buttons[0x1b] = '\0';
        *(undefined8 *)((param_5->input).released_buttons + 0x1c) = 0;
        (param_5->input).gamepad_prev_buttons = (param_5->input).gamepad.buttons;
        (param_5->input).gamepad.buttons = 0;
        (param_5->input).gamepad.left_trigger = 0.0;
        (param_5->input).gamepad.right_trigger = 0.0;
        (param_5->input).cursor_type = 0;
                    /* INLINE_REGION_END */
        if (settings.background_effects != 0) {
          (*glBindFramebuffer)(0x8d40,param_1->background_frame_buffer);
          (*glFramebufferTexture2D)
                    (0x8d40,0x8ce0,0xde1,
                     *(uint *)((longlong)&param_1->field14_0xc8 +
                              (longlong)param_1->current_background_texture * 4 + 0xc),0);
          glViewport(0,0,(param_1->resolution).field0_0x0._s_0.x,
                     (param_1->resolution).field0_0x0._s_0.y);
                    /* INLINE_REGION_START: draw_cells_to_screen */
          (*glUseProgram)(blend_cells_program);
          current_uniforms = (int *)&blend_cells_program_uniforms;
          (*glUniform1i)((uint)blend_cells_program_uniforms,0);
          (*glActiveTexture)(0x84c0);
          glBindTexture(0xde1,(param_1->field14_0xc8)._s_0.cell_color_texture);
          (*glUniform1i)(current_uniforms[1],1);
          (*glActiveTexture)(0x84c1);
          glBindTexture(0xde1);
          local_638 = 0x3f80000000000000;
          uStack_630 = 0xbf800000;
          local_648 = 0x3f800000;
          uStack_640 = 0x3f8000003f800000;
          local_658.QuadPart = -0x407fffff40800000;
          uStack_650 = 0xbf80000000000000;
          (*glBufferSubData)(0x8892,0,0x30,&local_658);
          (*glEnableVertexAttribArray)(0);
          in_stack_fffffffffffff710 = 0;
          (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
          (*glVertexAttribDivisor)(0,0);
          glDrawArrays(6,0,4);
        }
                    /* INLINE_REGION_END */
        memset(&DAT_14020e6d0,0,0x180);
        DAT_14020e850 = (char *)0x0;
        w.starting_game = 0;
        w.done_loading = 0;
        w.loading_screen = 1;
      }
      iVar11 = lane_split_into_two(1);
      if (iVar11 != 0) {
        if (*piVar14 == 0) {
          w.game_mode = w.starting_mode;
        }
        if (w.starting_mode == 2) {
          if ((w.has_sandbox == 0) || (w.starting_new_run != 0)) {
            local_7b8.no_creatures = w.sandbox_start_params.no_creatures;
            local_7b8.loading = w.sandbox_start_params.loading;
            local_7b8._10_2_ = w.sandbox_start_params._10_2_;
            local_7b8.keep_seed = w.sandbox_start_params.keep_seed;
            local_7b8._1_3_ = w.sandbox_start_params._1_3_;
            local_7b8.map_type = w.sandbox_start_params.map_type;
            init_world(&local_7b8);
            if (*piVar14 == 0) {
              post_sandbox_init();
            }
          }
          else {
LAB_14015e853:
            load_world(param_1,false);
          }
        }
        else if (w.starting_mode == 1) {
          if (w.starting_new_run == 0) goto LAB_14015e853;
          if (w.has_save != 0) {
            w.run.level = 0;
            w.run.ending = 0;
            w.run.creature_deaths = 0;
            w.run.death_biome = 0;
            w.run.frames = 0;
            w.run.seed = 0;
            w.run.biomes_explored = 0;
            w.run.xp = 0;
            w.run.start_time = 0.0;
            w.run.end_time = 0.0;
            load_world(param_1,true);
            w.run.frames = w.frame_number;
            (*best_GetSystemTimeAsFileTime)((_FILETIME *)&local_658.s);
            auVar41._0_8_ = (double)CONCAT44(0x43300000,local_658.s.LowPart);
            auVar41._8_4_ = local_658.s.HighPart;
            auVar41._12_4_ = 0x45300000;
            w.run.end_time =
                 ((auVar41._8_8_ - 1.9342813113834067e+25) + (auVar41._0_8_ - 4503599627370496.0)) *
                 1e-07 + -11644473600.0;
            w.run.ending = 2;
            w.run.seed = w.base_seed;
            save_run_stats(&w.run);
          }
          init_world((init_world_params *)&DAT_1401cba6c);
        }
        else if (w.starting_mode == 0) {
          w.selected_body = 0;
          w.camera_pos.field0_0x0 = (real_2_u_0)(real_2_u_0_s_0)0x0;
          (param_1->camera_pos).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x0;
          (param_1->camera_pos).field0_0x0._s_0.z = 0.0;
          init_world((init_world_params *)&DAT_1401cba6c);
          w.dead = 1;
        }
LAB_14015d113:
                    /* INLINE_REGION_START: lane_sync, clear_input_state, draw_to_screen_no_lighting
                        */
        TlsGetValue(tls_index);
        EnterSynchronizationBarrier();
        if (*piVar14 == 0) {
          w.done_loading = 1;
        }
        lane_merge();
      }
    }
  }
                    /* INLINE_REGION_END */
  if (*piVar14 == 0) {
    if ((w.done_loading != 0) && (w.start_animation_done != 0)) {
      lane_merge();
      set_wall_map(param_1,&w.map);
                    /* INLINE_REGION_START: update_icon_texture */
      glBindTexture(0xde1);
      glTexImage2D(0xde1,0,0x822e,icon_texture.size.field0_0x0._s_0.x,
                   CONCAT44(uVar20,icon_texture.size.field0_0x0._s_0.y),
                   in_stack_fffffffffffff710 & 0xffffffff00000000,CONCAT44(uVar50,0x1903),0x1406,
                   icon_atlas);
      glBindTexture();
                    /* INLINE_REGION_END */
      render_icons = false;
      w.done_loading = 0;
      w.loading_screen = 0;
    }
    DAT_14020e85c = DAT_14020e85c + param_4;
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
                    /* INLINE_REGION_START: get_element */
    if ((w.selected_body < 1) ||
       (w.bodies.field0_0x0.index_table[w.bodies.n_max_elements + 0x7fffffffU & w.selected_body].id
        != w.selected_body)) {
      bVar34 = false;
    }
    else {
                    /* INLINE_REGION_END
                       INLINE_REGION_START: operator+= */
      bVar34 = w.bodies.field3_0x20.elements != (body *)0x0;
    }
                    /* INLINE_REGION_END */
    if ((((param_5->frame_input).gamepad.buttons & 0x80) != 0) &&
       (((param_5->frame_input).gamepad_prev_buttons & 0x80) == 0)) {
      w._4_4_ = (w._4_4_ * 2 & 0x2000U | w._4_4_) ^ 0x1000;
    }
    if (w.game_mode != 0 && w.menu == 0) {
      if (w.gamepad_cursor_mode != 0) goto LAB_14015d309;
                    /* INLINE_REGION_START: operator* */
      fVar39 = (param_5->frame_input).gamepad.left_stick.field0_0x0._s_0.x * 0.707;
      fVar35 = (param_5->frame_input).gamepad.left_stick.field0_0x0._s_0.y * 0.707;
      bVar10 = 0;
LAB_14015d331:
      if (bVar34 && w.game_mode == 2) goto LAB_14015d341;
      uVar29 = (ulonglong)(uint)fVar39;
      uVar21 = (ulonglong)(uint)fVar35 << 0x20;
    }
    else {
      w._4_4_ = w._4_4_ & 0xffffefff;
LAB_14015d309:
      bVar10 = param_5->focused;
      fVar39 = (param_5->frame_input).gamepad.left_stick.field0_0x0._s_0.x * 0.707;
      fVar35 = (param_5->frame_input).gamepad.left_stick.field0_0x0._s_0.y * 0.707;
      if (w.game_mode != 0 && w.menu == 0) goto LAB_14015d331;
LAB_14015d341:
      uVar21 = (ulonglong)
               (uint)(fVar39 + (param_5->frame_input).gamepad.right_stick.field0_0x0._s_0.x);
      uVar29 = (ulonglong)
               (uint)(fVar35 + (param_5->frame_input).gamepad.right_stick.field0_0x0._s_0.y) << 0x20
      ;
    }
                    /* INLINE_REGION_END
                       INLINE_REGION_START: operator!= */
    uVar21 = uVar21 | uVar29;
    fVar35 = (float)uVar21;
    uVar32 = w._4_4_ | 0x800;
    if (fVar35 != 0.0) {
      w._4_4_ = uVar32;
    }
    if (NAN(fVar35)) {
      w._4_4_ = uVar32;
    }
    if ((uVar21 & 0x7fffffff00000000) != 0) {
      w._4_4_ = uVar32;
    }
    fVar39 = (float)(uVar21 >> 0x20);
                    /* INLINE_REGION_END
                       INLINE_REGION_START: normsq, normalize */
    fVar42 = fVar39 * fVar39 + fVar35 * fVar35 + 0.0;
    if (1.0 < fVar42) {
      fVar42 = 1.0 / SQRT(fVar42);
      uVar21 = CONCAT44(fVar42 * fVar39,fVar35 * fVar42);
    }
                    /* INLINE_REGION_END */
    w._4_4_ = w._4_4_ & 0xffffbfff | (uint)((bVar10 ^ 1) & (byte)((uint)w._4_4_ >> 0xb) & 1) << 0xe;
    if (bVar10 == 0) {
      bVar10 = (param_5->frame_input).pressed_buttons[0xe];
    }
    else {
                    /* INLINE_REGION_START: operator!= */
      fVar35 = (float)uVar21;
      if (fVar35 != 0.0 || (uVar21 & 0x7fffffff00000000) != 0) {
                    /* INLINE_REGION_END
                       INLINE_REGION_START: normsq, operator*= */
        fVar39 = (float)(uVar21 >> 0x20);
        fVar42 = fVar39 * fVar39 + fVar35 * fVar35 + 0.0;
                    /* INLINE_REGION_END */
                    /* INLINE_REGION_START: operator* */
        fVar45 = ((param_5->frame_input).gamepad.right_trigger * -0.8 + 1.0) *
                 settings.gamepad_cursor_sens * param_4;
        rVar22.field0_0x0._s_0.y = fVar45 * fVar42 * fVar39;
        rVar22.field0_0x0._s_0.x = fVar35 * fVar42 * fVar45;
        move_cursor(param_5,rVar22);
      }
                    /* INLINE_REGION_END */
      update_gamepad_clicks(&param_5->frame_input);
      bVar10 = (param_5->frame_input).pressed_buttons[0xe];
    }
    if ((bVar10 & 1) != 0) {
      settings.show_fps = (uint)(settings.show_fps == 0);
    }
    if ((bVar10 & 2) != 0) {
      w._4_4_ = w._4_4_ ^ 0x20;
    }
    if (((w._16352_4_ & 1) == 0) && (w.game_mode == 2)) {
      if (((param_5->input).pressed_buttons[0xe] & 0x40) == 0) {
        bVar10 = (param_5->frame_input).pressed_buttons[0xf];
        if ((bVar10 & 1) == 0) {
          if ((bVar10 & 2) == 0) goto LAB_14015dadc;
          memset(&local_658,0,0x400);
                    /* INLINE_REGION_START: set_cursor_visible */
          bVar10 = w.hide_cursor;
          bVar26 = bVar10 | DAT_14020e868;
          BVar12 = 1;
          if ((w.hide_cursor == 0 && (DAT_14020e868 & 1) == 0) ||
             (BVar12 = 0, (bVar10 & DAT_14020e868) == 1)) {
            ShowCursor(BVar12);
            DAT_14020e868 = ~bVar26 & 1;
          }
                    /* INLINE_REGION_END
                       INLINE_REGION_START: file_dialogue */
          local_898 = 0;
          local_888 = 0;
          uStack_850 = 0;
          local_828 = 0;
          uStack_820 = 0;
          local_838 = 0;
          uStack_830 = 0;
          local_868 = 0;
          uStack_860 = 0;
          local_818 = 0;
          local_8a8.QuadPart = 0x98;
          pHStack_8a0 = main_hwnd;
          uStack_870 = 0x400;
          pcStack_890 = "Body Plan";
          uStack_880 = 0x100000000;
          local_858 = "body plans";
          pcStack_840 = ".bod";
          local_848 = 0x1000a;
          local_878 = &local_658;
          BVar12 = GetOpenFileNameA((LPOPENFILENAMEA)&local_8a8.s);
          if (BVar12 != 0) {
                    /* INLINE_REGION_END */
            load_body_plan(&w.em.plan,(char *)&local_658.QuadPart);
            update_edit_menu_plan(&w.em,(int *)0x0);
            apply_edit_menu();
                    /* INLINE_REGION_START: get_element */
                    /* INLINE_REGION_END */
            if (((0 < w.selected_body) &&
                (uVar32 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
                w.bodies.field0_0x0.index_table[uVar32].id == w.selected_body)) &&
               (w.bodies.field3_0x20.elements != (body *)0x0)) {
              pbVar33 = w.bodies.field3_0x20.elements +
                        w.bodies.field0_0x0.index_table[uVar32].index;
              abstractify_body(pbVar33);
              pbVar33->health = 0.0;
              if (0 < (pbVar33->plan).n_plan_cells) {
                lVar31 = 0;
                lVar23 = 0;
                do {
                  ppVar5 = (pbVar33->plan).plan_cells;
                    /* INLINE_REGION_START: index_2 */
                  iVar2 = (pbVar33->plan).region.l.field0_0x0._s_0;
                  pbVar33->health =
                       materials_list[*(int *)((longlong)&ppVar5->material_index + lVar31)].
                       max_health + pbVar33->health;
                  lVar6 = *(longlong *)((longlong)&(ppVar5->body_coord).field0_0x0 + lVar31);
                  iVar11 = iVar2.x;
                    /* INLINE_REGION_END */
                  pbVar33->cell_map
                  [(int)(lVar6 - ((ulonglong)iVar2 & 0xffffffff00000000) >> 0x20) *
                   ((pbVar33->plan).region.u.field0_0x0._s_0.x - iVar11) + ((int)lVar6 - iVar11)] =
                       -1;
                  lVar23 = lVar23 + 1;
                  lVar31 = lVar31 + 0x34;
                } while (lVar23 < (pbVar33->plan).n_plan_cells);
              }
              deabstractify_body(pbVar33);
            }
          }
        }
        else {
          memcpy(&local_658,"body_plan",0x400);
                    /* INLINE_REGION_START: set_cursor_visible */
          bVar10 = w.hide_cursor;
          bVar26 = bVar10 | DAT_14020e868;
          BVar12 = 1;
          if ((w.hide_cursor == 0 && (DAT_14020e868 & 1) == 0) ||
             (BVar12 = 0, (bVar10 & DAT_14020e868) == 1)) {
            ShowCursor(BVar12);
            DAT_14020e868 = ~bVar26 & 1;
          }
                    /* INLINE_REGION_END
                       INLINE_REGION_START: file_dialogue */
          local_898 = 0;
          local_888 = 0;
          uStack_850 = 0;
          local_828 = 0;
          uStack_820 = 0;
          local_838 = 0;
          uStack_830 = 0;
          local_868 = 0;
          uStack_860 = 0;
          local_818 = 0;
          local_8a8.QuadPart = 0x98;
          pHStack_8a0 = main_hwnd;
          uStack_870 = 0x400;
          pcStack_890 = "Body Plan";
          uStack_880 = 0x100000000;
          local_858 = "body plans";
          pcStack_840 = ".bod";
          local_848 = 0x1000a;
          local_878 = &local_658;
          BVar12 = GetSaveFileNameA((LPOPENFILENAMEA)&local_8a8.s);
          if (BVar12 != 0) {
                    /* INLINE_REGION_END */
            save_body_plan(&w.em.plan,(char *)&local_658.QuadPart);
          }
        }
      }
      else {
        memcpy(&local_658,"template",0x400);
                    /* INLINE_REGION_START: set_cursor_visible */
        bVar10 = w.hide_cursor;
        bVar26 = bVar10 | DAT_14020e868;
        BVar12 = 1;
        if ((w.hide_cursor == 0 && (DAT_14020e868 & 1) == 0) ||
           (BVar12 = 0, (bVar10 & DAT_14020e868) == 1)) {
          ShowCursor(BVar12);
          DAT_14020e868 = ~bVar26 & 1;
        }
                    /* INLINE_REGION_END
                       INLINE_REGION_START: file_dialogue */
        local_898 = 0;
        local_888 = 0;
        uStack_850 = 0;
        local_828 = 0;
        uStack_820 = 0;
        local_838 = 0;
        uStack_830 = 0;
        local_868 = 0;
        uStack_860 = 0;
        local_818 = 0;
        local_8a8.QuadPart = 0x98;
        pHStack_8a0 = main_hwnd;
        uStack_870 = 0x400;
        pcStack_890 = "Map Template";
        uStack_880 = 0x100000000;
        local_858 = "data/map templates";
        pcStack_840 = ".map";
        local_848 = 0x1000a;
        local_878 = &local_658;
        BVar12 = GetSaveFileNameA((LPOPENFILENAMEA)&local_8a8.s);
        if (BVar12 != 0) {
                    /* INLINE_REGION_END */
          save_map_template((char *)&local_658.QuadPart);
        }
      }
      (param_5->input).dmouse.field0_0x0 = (real_2_u_0)0x0;
      (param_5->input).n_text_stream = 0;
      (param_5->input).text_modifiers = 0;
      (param_5->input).mouse_wheel = 0.0;
      (param_5->input).mouse_hwheel = 0.0;
      (param_5->input).buttons[0] = '\0';
      (param_5->input).buttons[1] = '\0';
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
      (param_5->input).pressed_buttons[0] = '\0';
      (param_5->input).pressed_buttons[1] = '\0';
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
      (param_5->input).released_buttons[0] = '\0';
      (param_5->input).released_buttons[1] = '\0';
      (param_5->input).released_buttons[2] = '\0';
      (param_5->input).released_buttons[3] = '\0';
      (param_5->input).released_buttons[4] = '\0';
      (param_5->input).released_buttons[5] = '\0';
      (param_5->input).released_buttons[6] = '\0';
      (param_5->input).released_buttons[7] = '\0';
      (param_5->input).released_buttons[8] = '\0';
      (param_5->input).released_buttons[9] = '\0';
      (param_5->input).released_buttons[10] = '\0';
      (param_5->input).released_buttons[0xb] = '\0';
      (param_5->input).released_buttons[0xc] = '\0';
      (param_5->input).released_buttons[0xd] = '\0';
      (param_5->input).released_buttons[0xe] = '\0';
      (param_5->input).released_buttons[0xf] = '\0';
      (param_5->input).released_buttons[0x10] = '\0';
      (param_5->input).released_buttons[0x11] = '\0';
      (param_5->input).released_buttons[0x12] = '\0';
      (param_5->input).released_buttons[0x13] = '\0';
      (param_5->input).released_buttons[0x14] = '\0';
      (param_5->input).released_buttons[0x15] = '\0';
      (param_5->input).released_buttons[0x16] = '\0';
      (param_5->input).released_buttons[0x17] = '\0';
      (param_5->input).released_buttons[0x14] = '\0';
      (param_5->input).released_buttons[0x15] = '\0';
      (param_5->input).released_buttons[0x16] = '\0';
      (param_5->input).released_buttons[0x17] = '\0';
      (param_5->input).released_buttons[0x18] = '\0';
      (param_5->input).released_buttons[0x19] = '\0';
      (param_5->input).released_buttons[0x1a] = '\0';
      (param_5->input).released_buttons[0x1b] = '\0';
      *(undefined8 *)((param_5->input).released_buttons + 0x1c) = 0;
      (param_5->input).gamepad_prev_buttons = (param_5->input).gamepad.buttons;
      (param_5->input).gamepad.buttons = 0;
      (param_5->input).gamepad.left_trigger = 0.0;
      (param_5->input).gamepad.right_trigger = 0.0;
      (param_5->input).cursor_type = 0;
      (param_5->frame_input).dmouse.field0_0x0 = (real_2_u_0)0x0;
      (param_5->frame_input).n_text_stream = 0;
      (param_5->frame_input).text_modifiers = 0;
      (param_5->frame_input).mouse_wheel = 0.0;
      (param_5->frame_input).mouse_hwheel = 0.0;
      (param_5->frame_input).buttons[0] = '\0';
      (param_5->frame_input).buttons[1] = '\0';
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
      (param_5->frame_input).pressed_buttons[0] = '\0';
      (param_5->frame_input).pressed_buttons[1] = '\0';
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
      (param_5->frame_input).released_buttons[0] = '\0';
      (param_5->frame_input).released_buttons[1] = '\0';
      (param_5->frame_input).released_buttons[2] = '\0';
      (param_5->frame_input).released_buttons[3] = '\0';
      (param_5->frame_input).released_buttons[4] = '\0';
      (param_5->frame_input).released_buttons[5] = '\0';
      (param_5->frame_input).released_buttons[6] = '\0';
      (param_5->frame_input).released_buttons[7] = '\0';
      (param_5->frame_input).released_buttons[8] = '\0';
      (param_5->frame_input).released_buttons[9] = '\0';
      (param_5->frame_input).released_buttons[10] = '\0';
      (param_5->frame_input).released_buttons[0xb] = '\0';
      (param_5->frame_input).released_buttons[0xc] = '\0';
      (param_5->frame_input).released_buttons[0xd] = '\0';
      (param_5->frame_input).released_buttons[0xe] = '\0';
      (param_5->frame_input).released_buttons[0xf] = '\0';
      (param_5->frame_input).released_buttons[0x10] = '\0';
      (param_5->frame_input).released_buttons[0x11] = '\0';
      (param_5->frame_input).released_buttons[0x12] = '\0';
      (param_5->frame_input).released_buttons[0x13] = '\0';
      (param_5->frame_input).released_buttons[0x14] = '\0';
      (param_5->frame_input).released_buttons[0x15] = '\0';
      (param_5->frame_input).released_buttons[0x16] = '\0';
      (param_5->frame_input).released_buttons[0x17] = '\0';
      (param_5->frame_input).released_buttons[0x14] = '\0';
      (param_5->frame_input).released_buttons[0x15] = '\0';
      (param_5->frame_input).released_buttons[0x16] = '\0';
      (param_5->frame_input).released_buttons[0x17] = '\0';
      (param_5->frame_input).released_buttons[0x18] = '\0';
      (param_5->frame_input).released_buttons[0x19] = '\0';
      (param_5->frame_input).released_buttons[0x1a] = '\0';
      (param_5->frame_input).released_buttons[0x1b] = '\0';
      *(undefined8 *)((param_5->frame_input).released_buttons + 0x1c) = 0;
      (param_5->frame_input).gamepad_prev_buttons = (param_5->frame_input).gamepad.buttons;
      (param_5->frame_input).gamepad.buttons = 0;
      (param_5->frame_input).gamepad.left_trigger = 0.0;
      (param_5->frame_input).gamepad.right_trigger = 0.0;
      (param_5->frame_input).cursor_type = 0;
    }
LAB_14015dadc:
                    /* INLINE_REGION_START: set_cursor_visible */
    bVar10 = w.hide_cursor | settings.hardware_cursor == 0;
    bVar26 = bVar10 | DAT_14020e868;
    BVar12 = 1;
    if ((bVar10 == 0 && (DAT_14020e868 & 1) == 0) || (BVar12 = 0, (bVar10 & DAT_14020e868) == 1)) {
      ShowCursor(BVar12);
      DAT_14020e868 = ~bVar26 & 1;
    }
                    /* INLINE_REGION_END */
    SteamAPI_RunCallbacks();
  }
  iVar27 = w.game_mode;
  iVar11 = w.menu;
  iVar2 = (param_1->resolution).field0_0x0._s_0;
  fVar35 = (float)iVar2.x / (float)iVar2.y;
                    /* INLINE_REGION_START: min */
  fVar42 = (float)(int)(param_5->size).field0_0x0._s_0.y;
  fVar39 = (float)(int)(param_5->size).field0_0x0._s_0.x;
  draw_width = fVar39;
  if (fVar35 * fVar42 <= fVar39) {
    draw_width = fVar35 * fVar42;
  }
                    /* INLINE_REGION_END
                       INLINE_REGION_START: min */
  draw_height = fVar42;
  if (fVar39 / fVar35 <= fVar42) {
    draw_height = fVar39 / fVar35;
  }
                    /* INLINE_REGION_END */
  if (w.loading_screen == 0) {
    if (*piVar14 == 0) {
      if (w.menu == 4 || w.game_mode != 0) {
        DAT_14020e858 = w.menu != 0;
        iVar13 = w.menu;
        if ((w.menu == 4) && (iVar13 = 4, w.dead != 0)) goto LAB_14015dbcf;
      }
      else {
        w.menu = 0;
        iVar13 = 0;
LAB_14015dbcf:
        DAT_14020e858 = 0;
      }
                    /* INLINE_REGION_END */
      param_5->clip_cursor = (bool)((DAT_14020e858 ^ 1) & w.game_mode != 0);
      if ((iVar13 == 2) && (0 < w.em.searchbox.n_text)) {
        (param_5->frame_input).escape_blocked = true;
      }
      iVar19 = iVar13;
      if (iVar13 != 4 && iVar27 != 0) {
        uVar20 = settings.field3_0xc.keybinds.edit + 7;
        if (-1 < settings.field3_0xc.keybinds.edit) {
          uVar20 = settings.field3_0xc.keybinds.edit;
        }
        if (((param_5->frame_input).pressed_buttons[(int)uVar20 >> 3] >>
             (settings.field3_0xc.keybinds.edit & 7U) & 1) == 0) {
          if (((((param_5->frame_input).gamepad.buttons & 0x20) != 0) && (iVar13 != 1)) &&
             (((param_5->frame_input).gamepad_prev_buttons & 0x20U) == 0)) goto LAB_14015ea1c;
        }
        else {
          iVar19 = 1;
          if (iVar13 != 1) {
LAB_14015ea1c:
            iVar19 = (uint)(iVar13 != 2) * 2;
            w.menu = iVar19;
            (param_5->frame_input).click_blocked = true;
            (param_5->frame_input).right_click_blocked = true;
          }
        }
        if ((((param_5->frame_input).pressed_buttons[0xf] & 4) != 0) &&
           (settings.replay_recorder != 0)) {
          iVar19 = (uint)(iVar19 != 3) * 3;
          w.menu = iVar19;
        }
        if ((((((param_5->frame_input).pressed_buttons[3] & 8) != 0) ||
             ((((param_5->frame_input).gamepad.buttons & 0x10) != 0 &&
              (((param_5->frame_input).gamepad_prev_buttons & 0x10) == 0)))) &&
            ((param_5->frame_input).escape_blocked == false)) && (iVar19 != 1)) {
          if (iVar19 == 0) {
            w.menu = 1;
            save_settings();
            (param_5->frame_input).escape_blocked = true;
            iVar19 = w.menu;
          }
          else {
            w.menu = 0;
            (param_5->frame_input).escape_blocked = true;
            iVar19 = 0;
          }
        }
      }
      DAT_14020e858 = iVar19 != 0;
    }
  }
  else if (*piVar14 == 0) {
    if ((w.starting_new_run == 0) || (2.2 <= w.start_trans)) {
      w.start_animation_done = 1;
      if (DAT_14020e850 == (char *)0x0) {
                    /* INLINE_REGION_START: time */
        _time64(&local_8a8.QuadPart);
                    /* INLINE_REGION_END */
                    /* INLINE_REGION_START: rand */
        uVar32 = (local_8a8.s.LowPart >> 0x10 ^ local_8a8.s.LowPart) * 0x7feb352d;
        uVar32 = (uVar32 >> 0xf ^ uVar32) * -0x7b935975;
        iVar11 = (int)((float)w.n_tips * (float)(uVar32 >> 0x10 ^ uVar32) * 2.3283064e-10);
        if (w.n_tips + -1 < iVar11) {
          iVar11 = w.n_tips + -1;
        }
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        snprintf(&local_658,0x100,"tip_%d",iVar11);
                    /* INLINE_REGION_END
                       INLINE_REGION_START: get_translation_formatted */
        DAT_14020e850 =
             get_translation_formatted
                       ((char *)&local_658.QuadPart,(translation_info)0x0,(char *)0x0);
      }
                    /* INLINE_REGION_END
                       INLINE_REGION_START: use_render_context */
      (*glBindFramebuffer)(0x8d40,param_2->frame_buffer);
      glViewport(0,0,(param_2->resolution).field0_0x0._s_0.x,(param_2->resolution).field0_0x0._s_0.y
                );
      (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_2->field14_0xc8)._s_0.color_texture,0);
      local_658.s.LowPart = 0x8ce0;
      (*glDrawBuffers)(1,(uint *)&local_658.QuadPart);
      fVar35 = 0.0;
                    /* INLINE_REGION_END */
      glClearColor();
      glClear(0x4000);
      pcVar9 = DAT_14020e850;
      if (DAT_14020e850 != (char *)0x0) {
        local_6e8._0_8_ = 0;
        local_6e8.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
        local_6e8._48_8_ = 0;
        local_6e8._56_8_ = 0;
        local_6e8._16_8_ = 0;
        local_6e8.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
        local_6e8.wrap_indent = 0.0;
        local_6e8._8_8_ = 0x3b03126f00000000;
        local_6e8._32_8_ = 0x3f800000;
        memcpy(&local_1a0,(void *)((longlong)&param_2->field29_0x128 + 0xb8),0xb8);
        local_748.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
        local_748._8_8_ = 0x3f8000003f800000;
        draw_text(pcVar9,0.0,-0.75,(real_4 *)&local_748._s_0,(real_2)0x0,&local_1a0,&local_6e8);
      }
      fVar48 = param_2->time + param_2->time;
                    /* INLINE_REGION_START: operator* */
      fVar45 = cosf(fVar48);
      fVar48 = sinf(fVar48);
                    /* INLINE_REGION_END */
      fVar46 = param_2->time * 7.0;
                    /* INLINE_REGION_START: operator*, operator+= */
      fVar49 = cosf(fVar46);
      fVar46 = sinf(fVar46);
      fVar45 = fVar45 * 0.5 + fVar49 * 0.1;
      fVar48 = fVar46 * 0.1 + fVar48 * 0.5;
      fVar49 = 0.2;
      fVar46 = 0.1;
      lVar31 = 0;
      do {
                    /* INLINE_REGION_END
                       INLINE_REGION_START: operator*, operator+ */
        fVar36 = expf(param_4 * -8.0);
        fVar43 = 1.0 - fVar36;
        fVar35 = fVar35 * fVar43 + *(float *)((longlong)&DAT_14020e6d8 + lVar31) * fVar36;
        fVar45 = fVar43 * fVar45 +
                 fVar36 * (float)*(undefined8 *)((longlong)&DAT_14020e6d0 + lVar31);
        fVar48 = fVar43 * fVar48 +
                 fVar36 * (float)((ulonglong)*(undefined8 *)((longlong)&DAT_14020e6d0 + lVar31) >>
                                 0x20);
        *(ulonglong *)((longlong)&DAT_14020e6d0 + lVar31) = CONCAT44(fVar48,fVar45);
        *(float *)((longlong)&DAT_14020e6d8 + lVar31) = fVar35;
                    /* INLINE_REGION_END */
        fVar36 = expf(-param_4);
        *(float *)((longlong)&DAT_14020e6dc + lVar31) =
             fVar46 * (1.0 - fVar36) + fVar36 * *(float *)((longlong)&DAT_14020e6dc + lVar31);
                    /* INLINE_REGION_START: operator*, operator+ */
        fVar37 = expf(-param_4);
        fVar36 = *(float *)((longlong)&DAT_14020e6ec + lVar31);
        fVar44 = 1.0 - fVar37;
        uVar3 = *(undefined8 *)((longlong)&DAT_14020e6e0 + lVar31);
        fVar43 = *(float *)((longlong)&DAT_14020e6e8 + lVar31);
        *(float *)((longlong)&DAT_14020e6e0 + lVar31) = fVar44 + (float)uVar3 * fVar37;
        *(float *)((longlong)&DAT_14020e6e0 + lVar31 + 4) =
             fVar44 + (float)((ulonglong)uVar3 >> 0x20) * fVar37;
        *(float *)((longlong)&DAT_14020e6e8 + lVar31) = fVar44 + fVar43 * fVar37;
        *(float *)((longlong)&DAT_14020e6ec + lVar31) = fVar36 * fVar37 + fVar44 * fVar49;
                    /* INLINE_REGION_END */
        fVar49 = fVar49 * 0.5;
        fVar46 = fVar46 * 0.8;
        lVar31 = lVar31 + 0x20;
      } while (lVar31 != 0x180);
      local_698._0_8_ = *(undefined8 *)&(param_2->camera).field0_0x0;
      local_698._8_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 8);
      local_698._16_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x10);
      local_698._24_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x18);
      local_698._32_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x20);
      local_698._40_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x28);
      local_698._48_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x30);
      local_698._56_8_ = *(undefined8 *)((longlong)&(param_2->camera).field0_0x0 + 0x38);
      draw_circles((circle_render_info *)&DAT_14020e6d0,0xc,(real_4x4 *)local_698.columns);
      if (settings.hardware_cursor == 0) {
        if (w.hide_cursor == 0) {
                    /* INLINE_REGION_START: use_render_context */
          (*glBindFramebuffer)(0x8d40,param_2->frame_buffer);
          glViewport(0,0,(param_2->resolution).field0_0x0._s_0.x,
                     (param_2->resolution).field0_0x0._s_0.y);
          (*glFramebufferTexture2D)
                    (0x8d40,0x8ce0,0xde1,(param_2->field14_0xc8)._s_0.color_texture,0);
          local_658.s.LowPart = 0x8ce0;
          (*glDrawBuffers)(1,(uint *)&local_658.QuadPart);
                    /* INLINE_REGION_END
                       INLINE_REGION_START: pad_3 */
          local_758.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
          local_758._8_8_ = 0x3f8000003f800000;
          local_7e8.xy.field0_0x0 = (real_2)(param_5->frame_input).mouse.field0_0x0;
          local_7e8._s_0.z = 0.0;
          draw_cursor(param_2,(real_3 *)&local_7e8._s_0,0.07,(real_4 *)&local_758._s_0,
                      (param_5->frame_input).cursor_type);
        }
      }
      else {
        current_cursor_icon = (param_5->frame_input).cursor_type;
      }
                    /* INLINE_REGION_END */
      param_2->time = param_4 + param_2->time;
      (*glBindFramebuffer)(0x8d40,0);
      glViewport((int)((fVar39 - draw_width) * 0.5),(int)((fVar42 - draw_height) * 0.5),
                 (int)draw_width,(int)draw_height);
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
                    /* INLINE_REGION_START: draw_to_screen_no_lighting */
      local_8a8.QuadPart = 0x3f8000003f800000;
      (*glUseProgram)(fullscreen_texture_no_lighting_program);
      pLVar30 = &local_8a8;
    }
    else {
      fVar48 = param_1->time + param_4;
      param_1->time = fVar48;
      fVar45 = w.start_trans;
      if ((0.3 < w.start_trans) && (DAT_14020e860 == '\0')) {
        local_77c.delay = 0.0;
        local_77c.pitch_shift = 0.0;
        local_77c.lowpass_dist = 0.0;
        local_77c.type = 0;
        local_77c.volume = 0.7;
        play_sound(&sounds.run_start,&local_77c);
      }
      DAT_14020e860 = 0.3 < fVar45;
      w.start_trans = param_4 * 3.0 + w.start_trans;
      w.start_animation_done = (uint)(2.2 <= w.start_trans);
      (*glBindFramebuffer)(0x8d40,param_1->lighting_frame_buffer);
      iVar11 = (param_1->resolution).field0_0x0._s_0.x;
      iVar27 = (param_1->resolution).field0_0x0._s_0.y;
      iVar13 = iVar27 + 3;
      if (-1 < iVar27) {
        iVar13 = iVar27;
      }
      iVar27 = iVar11 + 3;
      if (-1 < iVar11) {
        iVar27 = iVar11;
      }
      glViewport(0,0,iVar27 >> 2,iVar13 >> 2);
      (*glBlendFuncSeparate)(1,1,1,1);
      glClearColor();
      glClear(0x4000);
                    /* INLINE_REGION_START: draw_menu_lighting */
      (*glUseProgram)(menu_lighting_program);
      current_uniforms = (int *)&menu_lighting_program_uniforms;
      iVar2 = (param_1->resolution).field0_0x0._s_0;
      (*glUniform1f)((uint)menu_lighting_program_uniforms,(float)iVar2.x / (float)iVar2.y);
      (*glUniform1f)(current_uniforms[1],fVar48);
      (*glBindBuffer)(0x8892,(uint)gl_general_buffers);
      local_648 = 0x3f8000003f800000;
      uStack_640 = 0xbf8000003f800000;
      local_658.QuadPart = -0x407fffff40800000;
      uStack_650 = 0x3f800000bf800000;
      (*glBufferSubData)(0x8892,0,0x20,&local_658);
      (*glEnableVertexAttribArray)(0);
      (*glVertexAttribPointer)(0,2,0x1406,'\0',0,(void *)0x0);
      (*glVertexAttribDivisor)(0,0);
      glDrawArrays(6,0,4);
                    /* INLINE_REGION_END
                       INLINE_REGION_START: use_render_context */
      (*glBindFramebuffer)(0x8d40,param_1->frame_buffer);
      glViewport(0,0,(param_1->resolution).field0_0x0._s_0.x,(param_1->resolution).field0_0x0._s_0.y
                );
      (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_1->field14_0xc8)._s_0.color_texture,0);
      local_658.s.LowPart = 0x8ce0;
      (*glDrawBuffers)(1,(uint *)&local_658.QuadPart);
                    /* INLINE_REGION_END */
      glClearColor();
      glClear(0x4000);
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
      fVar45 = sinf(fVar48 * 0.1);
      local_78c._s_0.x = fVar45 * 0.05 + 0.25;
      local_78c._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_78c._s_0.w = 1.0;
      draw_menu_background(param_1,fVar48,w.start_trans,0.0,(real_4 *)&local_78c._s_0);
      if (settings.background_effects == 0) {
        draw_cells_to_screen(param_1);
      }
      (*glBindFramebuffer)(0x8d40,param_1->post_process_frame_buffer);
      if (settings.background_effects != 0) {
        iVar11 = param_1->current_background_texture;
        (*glFramebufferTexture2D)
                  (0x8d40,0x8ce2,0xde1,
                   *(uint *)((longlong)&param_1->field14_0xc8 +
                            (longlong)
                            (int)((iVar11 - ((iVar11 - (iVar11 + 1 >> 0x1f)) + 1U & 0xfffffffe)) + 1
                                 ) * 4 + 0xc),0);
      }
      local_8a8.QuadPart = 0x8ce100008ce0;
      pHStack_8a0 = (HWND__ *)CONCAT44(pHStack_8a0._4_4_,0x8ce2);
      (*glDrawBuffers)(3,(uint *)&local_8a8.QuadPart);
      glDisable(0xbe2);
      draw_walls(param_1,(map_t *)0x0,1.0);
      glEnable(0xbe2);
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
      if (settings.background_effects != 0) {
        (*glBindFramebuffer)(0x8d40,param_1->background_frame_buffer);
        (*glFramebufferTexture2D)
                  (0x8d40,0x8ce0,0xde1,
                   *(uint *)((longlong)&param_1->field14_0xc8 +
                            (longlong)param_1->current_background_texture * 4 + 0xc),0);
        fVar45 = sinf(fVar48 * 0.1);
        local_79c._s_0.x = fVar45 * 0.05 + 0.15;
        local_79c._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
        local_79c._s_0.w = 1.0;
        draw_menu_background(param_2,fVar48,w.start_trans,0.0,(real_4 *)&local_79c._s_0);
      }
                    /* INLINE_REGION_START: use_render_context */
      (*glBindFramebuffer)(0x8d40,param_2->frame_buffer);
      glViewport(0,0,(param_2->resolution).field0_0x0._s_0.x,(param_2->resolution).field0_0x0._s_0.y
                );
      (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_2->field14_0xc8)._s_0.color_texture,0);
      local_658.s.LowPart = 0x8ce0;
      (*glDrawBuffers)(1,(uint *)&local_658.QuadPart);
                    /* INLINE_REGION_END */
      local_7c8.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_7c8._s_0.z = 0.0;
      fVar45 = expf(param_4 * -9.0);
      local_7c8._s_0.w = 1.0 - fVar45;
      local_7d8.xy.field0_0x0 = (real_2)(real_2_u_0)0x0;
      local_7d8._s_0.z = 0.0;
      draw_rectangle(param_2,(real_3 *)&local_7d8._s_0,
                     (real_2)((ulonglong)(uint)(fVar35 + 0.1) | 0x3f8ccccd00000000),
                     (real_4 *)&local_7c8._s_0);
      (*glBindFramebuffer)(0x8d40,0);
      glViewport((int)((fVar39 - draw_width) * 0.5),(int)((fVar42 - draw_height) * 0.5),
                 (int)draw_width,(int)draw_height);
      (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
      if (settings.distortions == 0) {
        draw_to_screen_no_lighting(param_1,(param_1->field14_0xc8)._s_0.post_color_texture);
      }
      else {
                    /* INLINE_REGION_START: draw_to_screen_post_process */
        draw_to_screen_post_process(param_1,(real_2)0x3f8000003f800000);
                    /* INLINE_REGION_END */
      }
                    /* INLINE_REGION_START: draw_to_screen_no_lighting */
      local_7a8.QuadPart = 0x3f8000003f800000;
      (*glUseProgram)(fullscreen_texture_no_lighting_program);
      pLVar30 = &local_7a8;
    }
    current_uniforms = (int *)&fullscreen_texture_no_lighting_program_uniforms;
    (*glUniform2fv)((uint)fullscreen_texture_no_lighting_program_uniforms,1,(float *)pLVar30);
    (*glUniform1f)(current_uniforms[1],settings.brightness);
    (*glUniform1f)(current_uniforms[2],settings.contrast);
    (*glUniform1i)(current_uniforms[3],0);
    (*glActiveTexture)(0x84c0);
    glBindTexture(0xde1);
    local_638 = 0x3f80000000000000;
    uStack_630 = 0xbf800000;
    local_648 = 0x3f800000;
    uStack_640 = 0x3f8000003f800000;
    local_658.QuadPart = -0x407fffff40800000;
    uStack_650 = 0xbf80000000000000;
    (*glBufferSubData)(0x8892,0,0x30,&local_658);
    (*glEnableVertexAttribArray)(0);
    (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
    (*glVertexAttribDivisor)(0,0);
    glDrawArrays(6,0,4);
    return;
                    /* INLINE_REGION_END */
  }
                    /* INLINE_REGION_START: lane_sync */
  pvVar15 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar15 + 8) + 0x18);
                    /* INLINE_REGION_END */
  if (DAT_14020e858 == 0) {
                    /* INLINE_REGION_END
                       INLINE_REGION_START: start_profiler_frame */
    pvVar15 = TlsGetValue(tls_index);
    pvVar16 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar16 + 8) + 0x18);
    iVar27 = *(int *)(*DAT_1402092f0 + 200);
    *(int *)((longlong)pvVar15 + 200) = iVar27;
    puVar17 = *(uchar **)((longlong)pvVar15 + 0xc0);
    if (puVar17 == (uchar *)0x0) {
      puVar17 = dynamic_alloc(0xa000);
      *(uchar **)((longlong)pvVar15 + 0xc0) = puVar17;
      memset(puVar17,0,0xa000);
      iVar27 = *(int *)((longlong)pvVar15 + 200);
    }
    uVar32 = iVar27 + 1U & 0x1ff;
    *(uint *)((longlong)pvVar15 + 200) = uVar32;
    puVar17 = puVar17 + (ulonglong)(uVar32 * 0x50) + 0x48;
    puVar17[0] = '\0';
    puVar17[1] = '\0';
    puVar17[2] = '\0';
    puVar17[3] = '\0';
                    /* INLINE_REGION_END */
    if (*piVar14 == 0) {
      if (iVar11 == 2) {
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
    if (settings.cap_framerate == 0) {
      uVar32 = 1;
    }
    else {
      uVar32 = (settings.framerate_cap + 0x77) / settings.framerate_cap;
    }
    if ((int)uVar32 < 1 || DAT_14020e85c <= 0.008333334) {
      iVar27 = 0;
      iVar11 = *piVar14;
    }
    else {
      local_7f0 = &param_5->input;
      local_7f8 = (param_5->input).pressed_buttons;
      iVar27 = 0;
      iVar11 = 1;
      local_808 = param_3;
      local_800 = param_2;
      do {
                    /* INLINE_REGION_START: lane_sync */
        TlsGetValue(tls_index);
        prVar24 = (render_context *)0x0;
        EnterSynchronizationBarrier();
                    /* INLINE_REGION_END */
        if (*piVar14 == 0) {
          DAT_14020e85c = DAT_14020e85c + -0.008333334;
        }
        start_trace(0);
                    /* INLINE_REGION_START: get_performance_time */
        QueryPerformanceFrequency(&local_658);
        QueryPerformanceCounter(&local_8a8);
        dVar8 = (double)local_658.QuadPart;
        dVar47 = (double)local_8a8.QuadPart;
                    /* INLINE_REGION_END */
        update_game(param_1,prVar24,local_7f0);
                    /* INLINE_REGION_START: get_performance_time */
        QueryPerformanceFrequency(&local_658);
        QueryPerformanceCounter(&local_8a8);
        auVar38._0_8_ = (double)local_658.QuadPart;
        auVar38._8_8_ = dVar8;
        auVar40._0_8_ = (double)local_8a8.QuadPart;
        auVar40._8_8_ = dVar47;
        auVar41 = divpd(auVar40,auVar38);
                    /* INLINE_REGION_END */
        w.last_frame_time = auVar41._0_8_ - auVar41._8_8_;
        end_frame_trace();
        if (*piVar14 == 0) {
                    /* INLINE_REGION_START: reset_input_state */
          local_7f8[0x30] = '\0';
          local_7f8[0x31] = '\0';
          local_7f8[0x32] = '\0';
          local_7f8[0x33] = '\0';
          local_7f8[0x34] = '\0';
          local_7f8[0x35] = '\0';
          local_7f8[0x36] = '\0';
          local_7f8[0x37] = '\0';
          local_7f8[0x38] = '\0';
          local_7f8[0x39] = '\0';
          local_7f8[0x3a] = '\0';
          local_7f8[0x3b] = '\0';
          local_7f8[0x3c] = '\0';
          local_7f8[0x3d] = '\0';
          local_7f8[0x3e] = '\0';
          local_7f8[0x3f] = '\0';
          local_7f8[0x20] = '\0';
          local_7f8[0x21] = '\0';
          local_7f8[0x22] = '\0';
          local_7f8[0x23] = '\0';
          local_7f8[0x24] = '\0';
          local_7f8[0x25] = '\0';
          local_7f8[0x26] = '\0';
          local_7f8[0x27] = '\0';
          local_7f8[0x28] = '\0';
          local_7f8[0x29] = '\0';
          local_7f8[0x2a] = '\0';
          local_7f8[0x2b] = '\0';
          local_7f8[0x2c] = '\0';
          local_7f8[0x2d] = '\0';
          local_7f8[0x2e] = '\0';
          local_7f8[0x2f] = '\0';
          local_7f8[0x10] = '\0';
          local_7f8[0x11] = '\0';
          local_7f8[0x12] = '\0';
          local_7f8[0x13] = '\0';
          local_7f8[0x14] = '\0';
          local_7f8[0x15] = '\0';
          local_7f8[0x16] = '\0';
          local_7f8[0x17] = '\0';
          local_7f8[0x18] = '\0';
          local_7f8[0x19] = '\0';
          local_7f8[0x1a] = '\0';
          local_7f8[0x1b] = '\0';
          local_7f8[0x1c] = '\0';
          local_7f8[0x1d] = '\0';
          local_7f8[0x1e] = '\0';
          local_7f8[0x1f] = '\0';
          local_7f8[0] = '\0';
          local_7f8[1] = '\0';
          local_7f8[2] = '\0';
          local_7f8[3] = '\0';
          local_7f8[4] = '\0';
          local_7f8[5] = '\0';
          local_7f8[6] = '\0';
          local_7f8[7] = '\0';
          local_7f8[8] = '\0';
          local_7f8[9] = '\0';
          local_7f8[10] = '\0';
          local_7f8[0xb] = '\0';
          local_7f8[0xc] = '\0';
          local_7f8[0xd] = '\0';
          local_7f8[0xe] = '\0';
          local_7f8[0xf] = '\0';
          puVar17 = (param_5->input).buttons + 1;
          *puVar17 = *puVar17 & 0xd3;
          (param_5->input).mouse_wheel = 0.0;
          (param_5->input).mouse_hwheel = 0.0;
          (param_5->input).dmouse.field0_0x0 = (real_2_u_0)0x0;
          bVar10 = (param_5->input).buttons[0];
          pbVar1 = &(param_5->input).click_blocked;
          *pbVar1 = (bool)(*pbVar1 & bVar10 >> 1);
          pbVar1 = &(param_5->input).right_click_blocked;
          *pbVar1 = (bool)(*pbVar1 & bVar10 >> 2);
          (param_5->input).escape_blocked = false;
          (param_5->input).hover_blocked = false;
          (param_5->input).n_text_stream = 0;
          (param_5->input).gamepad_prev_buttons = (param_5->input).gamepad.buttons;
          (param_5->input).gamepad.left_trigger = 0.0;
          (param_5->input).gamepad.right_trigger = 0.0;
          (param_5->input).cursor_type = 0;
        }
                    /* INLINE_REGION_END */
        if ((w.frame_number & 3U) == 0) {
          iVar27 = 1;
        }
      } while ((0.008333334 < DAT_14020e85c) &&
              (bVar34 = iVar11 < (int)uVar32, iVar11 = iVar11 + 1, bVar34));
      iVar11 = *piVar14;
      param_2 = local_800;
      param_3 = local_808;
    }
    local_808 = param_3;
    local_800 = param_2;
    if (iVar11 == 0) {
      param_1->time = param_1->time + param_4;
    }
  }
  else {
    if (*piVar14 == 0) {
                    /* INLINE_REGION_START: reset_input_state */
      (param_5->input).released_buttons[0x10] = '\0';
      (param_5->input).released_buttons[0x11] = '\0';
      (param_5->input).released_buttons[0x12] = '\0';
      (param_5->input).released_buttons[0x13] = '\0';
      (param_5->input).released_buttons[0x14] = '\0';
      (param_5->input).released_buttons[0x15] = '\0';
      (param_5->input).released_buttons[0x16] = '\0';
      (param_5->input).released_buttons[0x17] = '\0';
      (param_5->input).released_buttons[0x18] = '\0';
      (param_5->input).released_buttons[0x19] = '\0';
      (param_5->input).released_buttons[0x1a] = '\0';
      (param_5->input).released_buttons[0x1b] = '\0';
      (param_5->input).released_buttons[0x1c] = '\0';
      (param_5->input).released_buttons[0x1d] = '\0';
      (param_5->input).released_buttons[0x1e] = '\0';
      (param_5->input).released_buttons[0x1f] = '\0';
      (param_5->input).released_buttons[0] = '\0';
      (param_5->input).released_buttons[1] = '\0';
      (param_5->input).released_buttons[2] = '\0';
      (param_5->input).released_buttons[3] = '\0';
      (param_5->input).released_buttons[4] = '\0';
      (param_5->input).released_buttons[5] = '\0';
      (param_5->input).released_buttons[6] = '\0';
      (param_5->input).released_buttons[7] = '\0';
      (param_5->input).released_buttons[8] = '\0';
      (param_5->input).released_buttons[9] = '\0';
      (param_5->input).released_buttons[10] = '\0';
      (param_5->input).released_buttons[0xb] = '\0';
      (param_5->input).released_buttons[0xc] = '\0';
      (param_5->input).released_buttons[0xd] = '\0';
      (param_5->input).released_buttons[0xe] = '\0';
      (param_5->input).released_buttons[0xf] = '\0';
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
      (param_5->input).pressed_buttons[0] = '\0';
      (param_5->input).pressed_buttons[1] = '\0';
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
      puVar17 = (param_5->input).buttons + 1;
      *puVar17 = *puVar17 & 0xd3;
      (param_5->input).mouse_wheel = 0.0;
      (param_5->input).mouse_hwheel = 0.0;
      (param_5->input).dmouse.field0_0x0 = (real_2_u_0)0x0;
      bVar10 = (param_5->input).buttons[0];
      pbVar1 = &(param_5->input).click_blocked;
      *pbVar1 = (bool)(*pbVar1 & bVar10 >> 1);
      pbVar1 = &(param_5->input).right_click_blocked;
      *pbVar1 = (bool)(*pbVar1 & bVar10 >> 2);
      (param_5->input).escape_blocked = false;
      (param_5->input).hover_blocked = false;
      (param_5->input).n_text_stream = 0;
      (param_5->input).gamepad_prev_buttons = (param_5->input).gamepad.buttons;
      (param_5->input).gamepad.left_trigger = 0.0;
      (param_5->input).gamepad.right_trigger = 0.0;
      (param_5->input).cursor_type = 0;
    }
    iVar27 = 0;
  }
                    /* INLINE_REGION_START: lane_sync */
  pvVar15 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar15 + 8) + 0x18,0);
                    /* INLINE_REGION_END */
  if (*piVar14 == 0) {
    if (0.016666668 < DAT_14020e85c) {
      DAT_14020e85c = 0.016666668;
    }
    param_2->time = param_2->time + param_4;
                    /* INLINE_REGION_START: use_render_context */
    (*glBindFramebuffer)(0x8d40,param_2->frame_buffer);
    glViewport(0,0,(param_2->resolution).field0_0x0._s_0.x,(param_2->resolution).field0_0x0._s_0.y);
    (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_2->field14_0xc8)._s_0.color_texture,0);
    local_658.s.LowPart = 0x8ce0;
    (*glDrawBuffers)(1,(uint *)&local_658.QuadPart);
                    /* INLINE_REGION_END */
    glClearColor();
    glClear(0x4000);
                    /* INLINE_REGION_START: use_render_context */
    (*glBindFramebuffer)(0x8d40,param_1->frame_buffer);
    glViewport(0,0,(param_1->resolution).field0_0x0._s_0.x,(param_1->resolution).field0_0x0._s_0.y);
    (*glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,(param_1->field14_0xc8)._s_0.color_texture,0);
    local_658.s.LowPart = 0x8ce0;
    (*glDrawBuffers)(1,(uint *)&local_658.QuadPart);
                    /* INLINE_REGION_END */
    glClearColor();
    glClear(0x4000);
  }
  render_game(param_1,param_2,&param_5->frame_input,param_3,param_4,param_5);
  if (*piVar14 != 0) {
    return;
  }
  bVar10 = (param_5->frame_input).click_blocked;
  if ((param_5->frame_input).hover_blocked == true) {
    if (((bool)bVar10 == false) &&
       ((((param_5->frame_input).pressed_buttons[0] | (param_5->frame_input).buttons[0]) & 2) != 0))
    {
      bVar10 = 0;
      goto LAB_14015f0b9;
    }
    uVar32 = 0x400000;
    if (((param_5->frame_input).right_click_blocked == false) &&
       ((((param_5->frame_input).pressed_buttons[0] | (param_5->frame_input).buttons[0]) & 4) != 0))
    goto LAB_14015f0b9;
  }
  else {
LAB_14015f0b9:
    uVar32 = (uint)bVar10 << 0x16;
  }
  w._4_4_ = w._4_4_ & 0xffbfffff | uVar32;
  (*glBindFramebuffer)(0x8d40,0);
  glViewport((int)((fVar39 - draw_width) * 0.5),(int)((fVar42 - draw_height) * 0.5),(int)draw_width,
             (int)draw_height);
  glClearColor();
  glClear(0x4100);
  if (settings.distortions == 0) {
                    /* INLINE_REGION_START: draw_to_screen_no_lighting */
    local_8a8.QuadPart = 0x3f8000003f800000;
    (*glUseProgram)(fullscreen_texture_no_lighting_program);
    current_uniforms = (int *)&fullscreen_texture_no_lighting_program_uniforms;
    (*glUniform2fv)((uint)fullscreen_texture_no_lighting_program_uniforms,1,(float *)&local_8a8);
    (*glUniform1f)(current_uniforms[1],settings.brightness);
    (*glUniform1f)(current_uniforms[2],settings.contrast);
    (*glUniform1i)(current_uniforms[3],0);
    (*glActiveTexture)(0x84c0);
    glBindTexture(0xde1);
    local_638 = 0x3f80000000000000;
    uStack_630 = 0xbf800000;
    local_648 = 0x3f800000;
    uStack_640 = 0x3f8000003f800000;
    local_658.QuadPart = -0x407fffff40800000;
    uStack_650 = 0xbf80000000000000;
    (*glBufferSubData)(0x8892,0,0x30,&local_658);
    (*glEnableVertexAttribArray)(0);
    (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
    (*glVertexAttribDivisor)(0,0);
    glDrawArrays(6,0,4);
  }
  else {
                    /* INLINE_REGION_START: draw_to_screen_post_process */
    draw_to_screen_post_process(param_1,(real_2)0x3f8000003f800000);
                    /* INLINE_REGION_END */
  }
                    /* INLINE_REGION_END */
  iVar11 = settings.gif_frames + 3;
  if (-1 < settings.gif_frames) {
    iVar11 = settings.gif_frames;
  }
  iVar13 = 0;
  if (iVar11 >> 2 <= DAT_14020e864) {
    iVar27 = iVar13;
  }
  if ((w.dead != 0) && (w.game_mode == 1)) {
    if ((char)iVar27 == '\0') goto LAB_14015f2ee;
    iVar13 = DAT_14020e864 + 1;
  }
  DAT_14020e864 = iVar13;
  if ((char)iVar27 == '\x01') {
    add_recording_frame(param_1,param_3);
  }
LAB_14015f2ee:
  (*glBindFramebuffer)(0x8d40,0);
  glViewport((int)((fVar39 - draw_width) * 0.5),(int)((fVar42 - draw_height) * 0.5),(int)draw_width,
             (int)draw_height);
  (*glBlendFuncSeparate)(0x302,0x303,0x305,1);
                    /* INLINE_REGION_START: draw_to_screen_no_lighting */
  local_8a8.QuadPart = 0x3f8000003f800000;
  (*glUseProgram)(fullscreen_texture_no_lighting_program);
  current_uniforms = (int *)&fullscreen_texture_no_lighting_program_uniforms;
  (*glUniform2fv)((uint)fullscreen_texture_no_lighting_program_uniforms,1,(float *)&local_8a8);
  (*glUniform1f)(current_uniforms[1],settings.brightness);
  (*glUniform1f)(current_uniforms[2],settings.contrast);
  (*glUniform1i)(current_uniforms[3],0);
  (*glActiveTexture)(0x84c0);
  glBindTexture(0xde1);
  local_638 = 0x3f80000000000000;
  uStack_630 = 0xbf800000;
  local_648 = 0x3f800000;
  uStack_640 = 0x3f8000003f800000;
  local_658.QuadPart = -0x407fffff40800000;
  uStack_650 = 0xbf80000000000000;
  (*glBufferSubData)(0x8892,0,0x30,&local_658);
  (*glEnableVertexAttribArray)(0);
  (*glVertexAttribPointer)(0,3,0x1406,'\0',0,(void *)0x0);
  (*glVertexAttribDivisor)(0,0);
  glDrawArrays(6);
                    /* INLINE_REGION_END */
  DAT_1401fd220 = DAT_1401fd220 * 0.97 + param_4 * 0.03;
  if (settings.show_fps != 0) {
    sprintf((char *)&local_658.QuadPart,"%2.1f ms\n%2.1f fps",(double)(DAT_1401fd220 * 1000.0),
            (double)(1.0 / DAT_1401fd220));
    local_738._0_8_ = 0;
    local_738.outline_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_738._16_8_ = 0;
    local_738.shadow_color.field0_0x0._s_2.yz.field0_0x0 = (real_2)(real_2_u_0)0x0;
    local_738._48_8_ = 0;
    local_738._56_8_ = 0;
    local_738.wrap_indent = 0.0;
    local_738._8_8_ = 0x3b03126f00000000;
    local_738._32_8_ = 0x3f800000;
    memcpy(&local_258,&param_2->field29_0x128,0xb8);
    local_768.xy.field0_0x0 = (real_2)(real_2_u_0)0x3f8000003f800000;
    local_768._8_8_ = 0x3e99999a3f800000;
    draw_text((char *)&local_658.QuadPart,0.05 - draw_width / draw_height,0.95,
              (real_4 *)&local_768._s_0,(real_2)0x3f800000bf800000,&local_258,&local_738);
  }
  if (w.gamepad_cursor_mode == 0) {
    return;
  }
  uVar4 = (param_5->frame_input).gamepad.buttons;
  iVar11 = 0;
  uVar32 = 0;
  if ((uVar4 & 8) != 0) {
    uVar32 = (uint)(((param_5->frame_input).gamepad_prev_buttons & 8) == 0);
  }
  if ((uVar4 & 4) != 0) {
    iVar11 = (int)(short)(((*(uint *)&(param_5->frame_input).gamepad_prev_buttons >> 2 & 1) != 0) -
                         1);
  }
  if ((uVar4 & 1) == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = ~*(uint *)&(param_5->frame_input).gamepad_prev_buttons & 1;
  }
  uVar20 = iVar11 + uVar32;
  if ((uVar4 & 2) == 0) {
                    /* INLINE_REGION_START: operator!= */
    if (uVar28 == 0 && uVar20 == 0) {
      return;
    }
  }
  else {
    uVar28 = (int)(short)(((*(uint *)&(param_5->frame_input).gamepad_prev_buttons >> 1 & 1) != 0) -
                         1) + uVar28;
    if (uVar28 == 0 && uVar20 == 0) {
      return;
    }
  }
  if ((param_5->frame_input).active_ui_element == (void *)0x0) {
                    /* INLINE_REGION_END */
    rVar18._s_0 = (param_5->frame_input).mouse.field0_0x0._s_0;
    fVar42 = rVar18._s_0.x;
    fVar45 = rVar18._s_0.y;
    fVar39 = fVar42;
    fVar35 = fVar45;
    if (0 < (longlong)n_gamepad_anchors) {
      fVar35 = INFINITY;
      lVar31 = 0;
      do {
        rVar7 = (real_2_u_0)*(real_2_u_0 *)&gamepad_anchors[lVar31].field0_0x0._s_0;
        fVar39 = rVar7._0_4_ - fVar42;
        fVar49 = rVar7._s_0.y - fVar45;
        fVar48 = fVar49 * fVar49 + fVar39 * fVar39 + 0.0;
        if (((0.001 <= fVar48) &&
            (fVar39 = fVar39 * (1.0 / SQRT(fVar48)) * (float)(int)uVar20 + 0.0 +
                      fVar49 * (1.0 / SQRT(fVar48)) * (float)(int)uVar28, 0.1 < fVar39)) &&
           (fVar48 = fVar48 * (1.2 - fVar39), fVar48 < fVar35)) {
          rVar18 = rVar7;
          fVar35 = fVar48;
        }
        lVar31 = lVar31 + 1;
      } while (n_gamepad_anchors != lVar31);
      fVar39 = rVar18._s_0.x;
      fVar35 = rVar18._s_0.y;
    }
    rVar25.field0_0x0._s_0.y = fVar35 - fVar45;
    rVar25.field0_0x0._s_0.x = fVar39 - fVar42;
    move_cursor(param_5,rVar25);
  }
  return;
}

