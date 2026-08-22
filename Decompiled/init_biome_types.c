
/* void __cdecl init_biome_types(void) */

void __cdecl init_biome_types(void)

{
  undefined1 *puVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  LPVOID pvVar8;
  char *param1;
  float *pfVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  biome_type *pbVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  real_2_u_0 rVar29;
  undefined8 uVar31;
  undefined1 auVar30 [64];
  undefined8 uVar33;
  undefined1 auVar32 [64];
  real_2_u_0 rVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  
  w.n_biome_modifiers = 0;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (lVar11 < 1) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    bVar5 = expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
#pragma endregion
#pragma region inlined: new_biome_modifier
    if (bVar5) {
      lVar11 = (longlong)w.n_biome_modifiers;
      goto LAB_14010bceb;
    }
  }
  else {
    lVar11 = 0;
LAB_14010bceb:
    w.field140_0x3f30.biome_modifiers[lVar11] = (biome_modifier)ZEXT1232(ZEXT812(0));
    w.n_biome_modifiers = w.n_biome_modifiers + 1;
  }
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar20);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_lava";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_lava;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
  }
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar20);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_cold";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_cold;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar21);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_dark";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_darkness;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
    auVar21._0_12_ = ZEXT812(0);
    auVar21._12_4_ = 0;
  }
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar21);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_small";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_small;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar22);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_big";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_big;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
    auVar22._0_12_ = ZEXT812(0);
    auVar22._12_4_ = 0;
  }
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar22);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_lightning";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_lightning;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  auVar23._0_12_ = ZEXT812(0);
  auVar23._12_4_ = 0;
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar23);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_xp";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_bonus_xp;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
    auVar23._0_12_ = ZEXT812(0);
    auVar23._12_4_ = 0;
  }
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar23);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_safe";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_safe;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_safe_creature;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.005;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  auVar24._0_12_ = ZEXT812(0);
  auVar24._12_4_ = 0;
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar24);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_anger";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_anger;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
#pragma region inlined: new_biome_modifier
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
    auVar24._0_12_ = ZEXT812(0);
    auVar24._12_4_ = 0;
  }
  w.field140_0x3f30.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar24);
  uVar17 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
#pragma endregion
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_flow";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_flow;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  w.n_biome_types = 0;
#pragma region inlined: new_biome_type
  lVar11 = (longlong)w.max_biome_types;
  if (lVar11 < 1) {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) {
      lVar11 = (longlong)w.n_biome_types;
      goto LAB_14010c27a;
    }
    pbVar14 = (biome_type *)0x0;
  }
  else {
    lVar11 = 0;
LAB_14010c27a:
    memset(w.field137_0x3f10.biome_types + lVar11,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
#pragma endregion
  uVar6 = str_to_id("NONE");
  pbVar14->id = uVar6;
#pragma region inlined: new_biome_type
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010c2fb:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010c2fb;
    pbVar14 = (biome_type *)0x0;
  }
#pragma endregion
  uVar6 = str_to_id("SAFE");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e6147ae3d4ccccd;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003e800000;
  pbVar14->bumpyness = 2.0;
  pbVar14->tracked = 1;
  pbVar14->no_modifiers = 1;
  pbVar14->flags = 1;
  pbVar14->noise_amount = 0.15;
  pbVar14->neighbor_amount = 0.02;
  pbVar14->base_amount = 0.5;
#pragma region inlined: new_biome_type
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010c3b3:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010c3b3;
    pbVar14 = (biome_type *)0x0;
  }
#pragma endregion
  uVar6 = str_to_id("STRT");
  pbVar14->id = uVar6;
  rVar29 = (real_2_u_0)0x3c54fdf43ca3d70a;
  uVar33 = 0x3f8000003c23d70a;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c54fdf43ca3d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003c23d70a;
  pbVar14->bumpyness = 5.0;
  pbVar14->ambient_music_id = 3;
  pbVar14->battle_music_id = 2;
  pbVar14->tracked = 1;
  uVar17 = 0x3cf5c28f3e19999a;
  uVar31 = 0x408000003d4ccccd;
  pbVar14->noise_amount = 0.15;
  pbVar14->fbm_amount = 0.03;
  pbVar14->fbm_base_frequency = 0.05;
  pbVar14->fbm_octives = 4.0;
  pbVar14->fbm_gain = 0.5;
  pbVar14->neighbor_amount = 0.0;
  pbVar14->base_amount = 0.02;
  pbVar14->cell_chance = 0.5;
  pbVar14->cell_max_neighbors = 1;
  uVar15 = (ulonglong)(uint)n_materials;
  if (0 < n_materials) {
    fVar18 = DAT_14020d384;
    fVar37 = DAT_14020d380;
    fVar28 = DAT_14020d37c;
    fVar26 = DAT_14020d378;
    fVar25 = DAT_14020d374;
    fVar19 = DAT_14020d370;
    bVar5 = true;
    do {
      bVar4 = bVar5;
      if (0 < (int)uVar15) {
        lVar11 = 0x1c;
        lVar12 = 0;
        do {
          fVar36 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
          fVar3 = fVar36 * 0.25;
          if ((uVar6 == 0) || (fVar36 = fVar3, uVar6 < 2)) {
            uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
            if ((char)uVar6 < '\0') goto LAB_14010c58e;
LAB_14010c531:
            if ((uVar6 & 0x10) == 0) {
              if ((uVar6 & 1) == 0) {
                if ((uVar6 & 0x20) == 0) {
                  if ((uVar6 & 4) == 0) {
                    if (bVar4) {
                      fVar18 = fVar36 + fVar18;
                      DAT_14020d384 = fVar18;
                    }
                    else {
                      fVar36 = (fVar36 * 0.5) / fVar18;
LAB_14010c640:
                      iVar7 = (pbVar14->pool).n_materials;
                      lVar13 = (longlong)iVar7;
                      (pbVar14->pool).n_materials = iVar7 + 1;
                      (pbVar14->pool).material_indices[lVar13] = (int)lVar12;
                      (pbVar14->pool).material_cum_chances[lVar13] = fVar36;
                      if (0 < lVar13) {
                        (pbVar14->pool).material_cum_chances[lVar13] =
                             fVar36 + (float)(pbVar14->pool).material_indices[lVar13 + 0x7ff];
                      }
                    }
                  }
                  else {
                    if (!bVar4) {
                      fVar36 = (fVar36 * 0.1) / fVar37;
                      goto LAB_14010c640;
                    }
                    fVar37 = fVar36 + fVar37;
                    DAT_14020d380 = fVar37;
                  }
                }
                else {
                  if (!bVar4) {
                    fVar36 = (fVar36 * 0.1) / fVar28;
                    goto LAB_14010c640;
                  }
                  fVar28 = fVar36 + fVar28;
                  DAT_14020d37c = fVar28;
                }
              }
              else {
                if (!bVar4) {
                  fVar36 = (fVar36 * 0.1) / fVar26;
                  goto LAB_14010c640;
                }
                fVar26 = fVar36 + fVar26;
                DAT_14020d378 = fVar26;
              }
            }
            else {
              if (!bVar4) {
                fVar36 = (fVar36 * 0.5) / fVar25;
                goto LAB_14010c640;
              }
              fVar25 = fVar36 + fVar25;
              DAT_14020d374 = fVar25;
            }
          }
          else {
            fVar36 = fVar3 * 0.1;
            uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
            if (-1 < (char)uVar6) goto LAB_14010c531;
LAB_14010c58e:
            if (!bVar4) {
              fVar36 = (fVar36 * 0.001) / fVar19;
              goto LAB_14010c640;
            }
            fVar19 = fVar36 + fVar19;
            DAT_14020d370 = fVar19;
          }
          lVar12 = lVar12 + 1;
          uVar15 = (ulonglong)n_materials;
          lVar11 = lVar11 + 0x120;
        } while (lVar12 < (longlong)uVar15);
      }
      bVar5 = false;
    } while (bVar4);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010c6ba:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010c6ba;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("DARK");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3c23d70a;
  pbVar14->bumpyness = 2.0;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = 0.15;
  pbVar14->fbm_amount = 0.1;
  pbVar14->fbm_base_frequency = 0.1;
  pbVar14->fbm_octives = 5.0;
  pbVar14->fbm_gain = 0.5;
  auVar27 = ZEXT1664(ZEXT816(0x3a83126f3c23d70a));
  pbVar14->neighbor_amount = 0.01;
  pbVar14->base_amount = 0.001;
  pbVar14->cell_chance = 0.5;
  pbVar14->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar18 = DAT_14020d398;
    fVar28 = DAT_14020d394;
    fVar26 = DAT_14020d390;
    fVar25 = DAT_14020d38c;
    fVar19 = DAT_14020d388;
    do {
      fVar37 = *pfVar9;
      if (pfVar9[-1] == 0.0) {
        fVar37 = fVar37 * 0.5;
LAB_14010c7d2:
        fVar36 = pfVar9[-2];
        if (((uint)fVar36 & 2) == 0) goto LAB_14010c7f8;
LAB_14010c7a0:
        fVar19 = fVar37 + fVar19;
        DAT_14020d388 = fVar19;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_14010c7d2;
        fVar37 = fVar37 * 0.5;
        fVar36 = pfVar9[-2];
        if (((uint)fVar36 & 2) != 0) goto LAB_14010c7a0;
LAB_14010c7f8:
        if (((uint)fVar36 & 1) == 0) {
          if (((uint)fVar36 & 0x20) == 0) {
            if (((uint)fVar36 & 4) == 0) {
              fVar18 = fVar37 + fVar18;
              DAT_14020d398 = fVar18;
            }
            else {
              fVar28 = fVar37 + fVar28;
              DAT_14020d394 = fVar28;
            }
          }
          else {
            fVar26 = fVar37 + fVar26;
            DAT_14020d390 = fVar26;
          }
        }
        else {
          fVar25 = fVar37 + fVar25;
          DAT_14020d38c = fVar25;
        }
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar37 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if (uVar6 == 0) {
        fVar37 = fVar37 * 0.5;
      }
      if (1 < uVar6) {
        fVar37 = fVar37 * 0.5;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (pbVar14->pool).n_materials;
      (pbVar14->pool).n_materials = iVar7 + 1;
      (pbVar14->pool).material_indices[iVar7] = (int)lVar12;
      if ((uVar6 & 2) == 0) {
        if ((uVar6 & 1) == 0) {
          if ((uVar6 & 0x20) == 0) {
            if ((uVar6 & 4) == 0) {
              fVar37 = (fVar37 * 0.2) / fVar18;
              (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
            }
            else {
              fVar37 = (fVar37 * 0.05) / fVar28;
              (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
            }
          }
          else {
            fVar37 = (fVar37 * 0.25) / fVar26;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar37 * 0.05) / fVar25;
          (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar37 * 0.5) / fVar19;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar14->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar14->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010c9ce:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010c9ce;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ICEE");
  pbVar14->id = uVar6;
  rVar34 = (real_2_u_0)0x3c23d70a3ba3d70a;
  uVar35 = 0x3f0000003c75c28f;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3ba3d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003c75c28f;
  pbVar14->bumpyness = 7.0;
  pbVar14->temperature = -1.0;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = 0.2;
  pbVar14->fbm_amount = 0.05;
  pbVar14->fbm_base_frequency = 0.01;
  pbVar14->fbm_octives = 5.0;
  pbVar14->fbm_gain = 0.5;
  pbVar14->neighbor_amount = 0.02;
  pbVar14->base_amount = 0.01;
  pbVar14->ambient_music_id = 5;
  pbVar14->battle_music_id = 4;
  pbVar14->cell_chance = 0.8;
  pbVar14->cell_max_neighbors = 1;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar18 = DAT_14020d3ac;
    fVar28 = DAT_14020d3a8;
    fVar26 = DAT_14020d3a4;
    fVar25 = DAT_14020d3a0;
    fVar19 = DAT_14020d39c;
    do {
      fVar37 = *pfVar9;
      fVar36 = fVar37 * 0.5;
      if ((pfVar9[-1] == 0.0) || (fVar36 = fVar37, (uint)pfVar9[-1] < 2)) {
        fVar37 = pfVar9[-2];
        if (SUB41(fVar37,0) < '\0') goto LAB_14010cae0;
LAB_14010cb4b:
        if (((uint)fVar37 & 1) == 0) {
          if (((uint)fVar37 & 0x20) == 0) {
            if (((uint)fVar37 & 4) == 0) {
              fVar18 = fVar36 + fVar18;
              DAT_14020d3ac = fVar18;
            }
            else {
              fVar28 = fVar36 + fVar28;
              DAT_14020d3a8 = fVar28;
            }
          }
          else {
            fVar26 = fVar36 + fVar26;
            DAT_14020d3a4 = fVar26;
          }
        }
        else {
          fVar25 = fVar36 + fVar25;
          DAT_14020d3a0 = fVar25;
        }
      }
      else {
        fVar36 = fVar37 * 0.1;
        fVar37 = pfVar9[-2];
        if (-1 < SUB41(fVar37,0)) goto LAB_14010cb4b;
LAB_14010cae0:
        fVar19 = fVar36 + fVar19;
        DAT_14020d39c = fVar19;
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar37 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      fVar36 = fVar37 * 0.5;
      if (uVar6 != 0) {
        fVar36 = fVar37;
      }
      fVar37 = fVar36 * 0.1;
      if (uVar6 < 2) {
        fVar37 = fVar36;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (pbVar14->pool).n_materials;
      (pbVar14->pool).n_materials = iVar7 + 1;
      (pbVar14->pool).material_indices[iVar7] = (int)lVar12;
      if ((char)uVar6 < '\0') {
        fVar37 = (fVar37 * 0.01) / fVar19;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar37 = (fVar37 * 0.5) / fVar18;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
          else {
            fVar37 = (fVar37 * 0.05) / fVar28;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar37 * 0.25) / fVar26;
          (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar37 * 0.1) / fVar25;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar14->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar14->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010cd30:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010cd30;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ICON");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = rVar34;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar35;
  pbVar14->bumpyness = 3.0;
  pbVar14->min_value = 1.0;
  pbVar14->ambient_music_id = 5;
  pbVar14->battle_music_id = 4;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010cdcc:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010cdcc;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FIRE");
  pbVar14->id = uVar6;
  rVar34 = (real_2_u_0)0x3ba3d70a3c75c28f;
  uVar35 = 0x3f3333333ba3d70a;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3c75c28f;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333ba3d70a;
  pbVar14->bumpyness = 3.0;
  pbVar14->temperature = 1.0;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = 0.3;
  pbVar14->fbm_amount = 0.2;
  pbVar14->fbm_base_frequency = 0.2;
  pbVar14->fbm_octives = 4.0;
  pbVar14->fbm_gain = 1.0;
  pbVar14->neighbor_amount = 0.05;
  pbVar14->base_amount = 0.03;
  pbVar14->ambient_music_id = 7;
  pbVar14->battle_music_id = 6;
  lVar11 = (longlong)w.n_biome_modifiers;
  iVar7 = 0;
  if (1 < lVar11) {
    lVar12 = 1;
    uVar16 = w.field140_0x3f30.biome_modifiers;
    do {
      uVar16 = uVar16 + 0x20;
      if ((((biome_modifier *)uVar16)->id != (char *)0x0) &&
         (iVar7 = strncmp("biome_modifier_lava",((biome_modifier *)uVar16)->id,0x14), iVar7 == 0)) {
        iVar7 = (int)lVar12;
        break;
      }
      lVar12 = lVar12 + 1;
      iVar7 = 0;
    } while (lVar11 != lVar12);
  }
  iVar2 = pbVar14->n_modifiers;
  pbVar14->n_modifiers = iVar2 + 1;
  pbVar14->modifiers[iVar2] = iVar7;
  pbVar14->cell_chance = 0.5;
  pbVar14->cell_max_neighbors = 6;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar18 = DAT_14020d3c0;
    fVar28 = DAT_14020d3bc;
    fVar26 = DAT_14020d3b8;
    fVar25 = DAT_14020d3b4;
    fVar19 = DAT_14020d3b0;
    do {
      fVar37 = *pfVar9;
      if (pfVar9[-1] == 0.0) {
        fVar37 = fVar37 * 0.5;
LAB_14010cf82:
        fVar36 = pfVar9[-2];
        if (-1 < SUB41(fVar36,0)) goto LAB_14010cfa7;
LAB_14010cf50:
        fVar19 = fVar37 + fVar19;
        DAT_14020d3b0 = fVar19;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_14010cf82;
        fVar37 = fVar37 * 0.5;
        fVar36 = pfVar9[-2];
        if (SUB41(fVar36,0) < '\0') goto LAB_14010cf50;
LAB_14010cfa7:
        if (((uint)fVar36 & 1) == 0) {
          if (((uint)fVar36 & 0x20) == 0) {
            if (((uint)fVar36 & 4) == 0) {
              fVar18 = fVar37 + fVar18;
              DAT_14020d3c0 = fVar18;
            }
            else {
              fVar28 = fVar37 + fVar28;
              DAT_14020d3bc = fVar28;
            }
          }
          else {
            fVar26 = fVar37 + fVar26;
            DAT_14020d3b8 = fVar26;
          }
        }
        else {
          fVar25 = fVar37 + fVar25;
          DAT_14020d3b4 = fVar25;
        }
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar37 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if (uVar6 == 0) {
        fVar37 = fVar37 * 0.5;
      }
      if (1 < uVar6) {
        fVar37 = fVar37 * 0.5;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (pbVar14->pool).n_materials;
      (pbVar14->pool).n_materials = iVar7 + 1;
      (pbVar14->pool).material_indices[iVar7] = (int)lVar12;
      if ((char)uVar6 < '\0') {
        fVar37 = (fVar37 * 0.01) / fVar19;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar37 = (fVar37 * 0.5) / fVar18;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
          else {
            fVar37 = (fVar37 * 0.05) / fVar28;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar37 * 0.25) / fVar26;
          (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar37 * 0.1) / fVar25;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar14->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar14->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010d190:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010d190;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FCON");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = rVar34;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar35;
  pbVar14->bumpyness = 3.0;
  pbVar14->min_value = 1.0;
  pbVar14->ambient_music_id = 7;
  pbVar14->battle_music_id = 6;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010d22c:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010d22c;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FENT");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = rVar34;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar35;
  pbVar14->bumpyness = 3.0;
  pbVar14->noise_amount = 0.3;
  pbVar14->neighbor_amount = 0.05;
  pbVar14->base_amount = 0.2;
  pbVar14->ambient_music_id = 7;
  pbVar14->battle_music_id = 6;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010d2d5:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010d2d5;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("TUTR");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = rVar29;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar33;
  pbVar14->bumpyness = 5.0;
  pbVar14->base_amount = 1.0;
  pbVar14->ambient_music_id = 3;
  pbVar14->battle_music_id = 2;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010d371:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010d371;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("BOSS");
  auVar20 = auVar27._0_16_;
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = rVar29;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar33;
  pbVar14->bumpyness = 5.0;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = 0.15;
  pbVar14->fbm_amount = 0.1;
  pbVar14->fbm_base_frequency = 0.05;
  pbVar14->fbm_octives = 4.0;
  pbVar14->fbm_gain = 0.5;
  pbVar14->neighbor_fbm = 0.05;
  pbVar14->neighbor_amount = 0.0;
  pbVar14->base_amount = 0.02;
  pbVar14->cell_chance = 1.0;
  pbVar14->cell_max_neighbors = 1;
  if (0 < n_materials) {
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      if (0.0 < *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20)) {
        iVar7 = (pbVar14->pool).n_materials;
        lVar13 = (longlong)iVar7;
        (pbVar14->pool).n_materials = iVar7 + 1;
        (pbVar14->pool).material_indices[lVar13] = (int)lVar12;
        (pbVar14->pool).material_cum_chances[lVar13] = 1.0;
        if (0 < lVar13) {
          (pbVar14->pool).material_cum_chances[lVar13] =
               (float)(pbVar14->pool).material_indices[lVar13 + 0x7ff] + 1.0;
        }
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010d4ab:
    auVar27 = ZEXT1664(auVar20);
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_14010d4ab;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ECON");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333c23d70a;
  pbVar14->bumpyness = 3.0;
  pbVar14->min_value = 1.0;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010d54e:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010d54e;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("TOXC");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e4ccccd3e19999a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3e99999a3ca3d70a;
  pbVar14->bumpyness = 5.0;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = (float)(int)uVar17;
  pbVar14->fbm_amount = (float)(int)((ulonglong)uVar17 >> 0x20);
  pbVar14->fbm_base_frequency = (float)(int)uVar31;
  pbVar14->fbm_octives = (float)(int)((ulonglong)uVar31 >> 0x20);
  pbVar14->fbm_gain = 0.5;
  pbVar14->neighbor_amount = 0.05;
  pbVar14->base_amount = 0.02;
  pbVar14->cell_chance = 0.65;
  pbVar14->cell_max_neighbors = 3;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar18 = DAT_14020d3d0;
    fVar26 = DAT_14020d3cc;
    fVar25 = DAT_14020d3c8;
    fVar19 = DAT_14020d3c4;
    do {
      fVar28 = *pfVar9;
      if ((pfVar9[-1] == 0.0) || (fVar28 = fVar28 * 0.1, (uint)pfVar9[-1] < 2)) {
        fVar37 = pfVar9[-2];
        cVar10 = SUB41(fVar37,0);
      }
      else {
        fVar28 = fVar28 * 0.1;
        fVar37 = pfVar9[-2];
        cVar10 = SUB41(fVar37,0);
      }
      if (-1 < cVar10) {
        if (((uint)fVar37 & 1) == 0) {
          if (((uint)fVar37 & 4) == 0) {
            if (((uint)fVar37 & 0x20) == 0) {
              fVar18 = fVar28 + fVar18;
              DAT_14020d3d0 = fVar18;
            }
            else {
              fVar26 = fVar28 + fVar26;
              DAT_14020d3cc = fVar26;
            }
          }
          else {
            fVar25 = fVar28 + fVar25;
            DAT_14020d3c8 = fVar25;
          }
        }
        else {
          fVar19 = fVar28 + fVar19;
          DAT_14020d3c4 = fVar19;
        }
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar28 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if ((uVar6 == 0) || (fVar28 = fVar28 * 0.1, uVar6 < 2)) {
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        cVar10 = (char)uVar6;
      }
      else {
        fVar28 = fVar28 * 0.1;
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        cVar10 = (char)uVar6;
      }
      if (-1 < cVar10) {
        if ((uVar6 & 1) == 0) {
          if ((uVar6 & 4) == 0) {
            if ((uVar6 & 0x20) == 0) {
              fVar28 = (fVar28 * 0.5) / fVar18;
            }
            else {
              fVar28 = fVar28 / fVar26;
            }
          }
          else {
            fVar28 = fVar28 / fVar25;
          }
        }
        else {
          fVar28 = (fVar28 * 0.1) / fVar19;
        }
        iVar7 = (pbVar14->pool).n_materials;
        lVar13 = (longlong)iVar7;
        (pbVar14->pool).n_materials = iVar7 + 1;
        (pbVar14->pool).material_indices[lVar13] = (int)lVar12;
        (pbVar14->pool).material_cum_chances[lVar13] = fVar28;
        if (0 < lVar13) {
          (pbVar14->pool).material_cum_chances[lVar13] =
               fVar28 + (float)(pbVar14->pool).material_indices[lVar13 + 0x7ff];
        }
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010d7e6:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010d7e6;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("GYRE");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003c23d70a;
  pbVar14->bumpyness = 2.0;
  pbVar14->tracked = 1;
  pbVar14->no_modifiers = 1;
  pbVar14->noise_amount = 0.15;
  pbVar14->neighbor_amount = 0.0;
  pbVar14->base_amount = 0.1;
  pbVar14->min_value = 0.01;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010d89e:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010d89e;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JNGL");
  auVar20 = auVar27._0_16_;
  pbVar14->id = uVar6;
  rVar29 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  uVar17 = 0x3f8000003a83126f;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  pbVar14->bumpyness = 10.0;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = 0.3;
  pbVar14->fbm_amount = -0.2;
  pbVar14->fbm_base_frequency = 0.02;
  pbVar14->fbm_octives = 4.0;
  pbVar14->fbm_gain = 1.0;
  pbVar14->neighbor_fbm = 0.04;
  pbVar14->neighbor_amount = -0.03;
  pbVar14->base_amount = 0.01;
  pbVar14->ambient_music_id = 9;
  pbVar14->battle_music_id = 8;
  pbVar14->cell_chance = 0.3;
  pbVar14->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar18 = DAT_14020d3e4;
    fVar28 = DAT_14020d3e0;
    fVar26 = DAT_14020d3dc;
    fVar25 = DAT_14020d3d8;
    fVar19 = DAT_14020d3d4;
    do {
      fVar37 = *pfVar9 * 0.5;
      if (pfVar9[-1] != 0.0) {
        fVar37 = *pfVar9;
      }
      fVar36 = pfVar9[-2];
      if (SUB41(fVar36,0) < '\0') {
        fVar19 = fVar37 + fVar19;
        DAT_14020d3d4 = fVar19;
      }
      else if (((uint)fVar36 & 1) == 0) {
        if (((uint)fVar36 & 0x20) == 0) {
          if (((uint)fVar36 & 4) == 0) {
            fVar18 = fVar37 + fVar18;
            DAT_14020d3e4 = fVar18;
          }
          else {
            fVar28 = fVar37 + fVar28;
            DAT_14020d3e0 = fVar28;
          }
        }
        else {
          fVar26 = fVar37 + fVar26;
          DAT_14020d3dc = fVar26;
        }
      }
      else {
        fVar25 = fVar37 + fVar25;
        DAT_14020d3d8 = fVar25;
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar37 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      fVar36 = fVar37 * 0.5;
      if (*(int *)((longlong)materials_list->spawn_with + lVar11 + -0x24) != 0) {
        fVar36 = fVar37;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (pbVar14->pool).n_materials;
      (pbVar14->pool).n_materials = iVar7 + 1;
      (pbVar14->pool).material_indices[iVar7] = (int)lVar12;
      if ((char)uVar6 < '\0') {
        fVar37 = (fVar36 * 0.01) / fVar19;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar37 = (fVar36 * 0.3) / fVar18;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
          else {
            fVar37 = (fVar36 * 0.05) / fVar28;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar36 * 0.25) / fVar26;
          (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar36 * 0.1) / fVar25;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar14->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar14->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010dbb3:
    auVar27 = ZEXT1664(auVar20);
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_14010dbb3;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JBOS");
  auVar20 = auVar27._0_16_;
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = rVar29;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar17;
  pbVar14->bumpyness = 10.0;
  pbVar14->noise_amount = 0.3;
  pbVar14->fbm_amount = -0.2;
  pbVar14->fbm_base_frequency = 0.02;
  pbVar14->fbm_octives = 4.0;
  pbVar14->fbm_gain = 1.0;
  pbVar14->neighbor_fbm = 0.04;
  pbVar14->neighbor_amount = -0.03;
  pbVar14->base_amount = 0.1;
  pbVar14->ambient_music_id = 9;
  pbVar14->battle_music_id = 8;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010dc5b:
    auVar27 = ZEXT1664(auVar20);
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_14010dc5b;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JCON");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3be56042;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  pbVar14->bumpyness = 3.0;
  pbVar14->min_value = 1.0;
  pbVar14->ambient_music_id = 9;
  pbVar14->battle_music_id = 8;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010dd02:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010dd02;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("MEAT");
  auVar20 = auVar27._0_16_;
  pbVar14->id = uVar6;
  rVar29 = (real_2_u_0)0x3a83126f3ba3d70a;
  uVar17 = 0x3f8000003a83126f;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3a83126f3ba3d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  pbVar14->bumpyness = 3.0;
  pbVar14->custom_cell_spawning = 1;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = 0.3;
  pbVar14->fbm_amount = -0.2;
  pbVar14->fbm_base_frequency = 0.02;
  pbVar14->fbm_octives = 4.0;
  pbVar14->fbm_gain = 1.0;
  pbVar14->neighbor_fbm = 0.04;
  pbVar14->neighbor_amount = -0.03;
  pbVar14->base_amount = 0.1;
  pbVar14->ambient_music_id = 0xb;
  pbVar14->battle_music_id = 10;
  pbVar14->cell_chance = 0.3;
  pbVar14->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar18 = DAT_14020d3f8;
    fVar28 = DAT_14020d3f4;
    fVar26 = DAT_14020d3f0;
    fVar25 = DAT_14020d3ec;
    fVar19 = DAT_14020d3e8;
    do {
      fVar37 = *pfVar9 * 0.5;
      if (pfVar9[-1] != 0.0) {
        fVar37 = *pfVar9;
      }
      fVar36 = pfVar9[-2];
      if (SUB41(fVar36,0) < '\0') {
        fVar19 = fVar37 + fVar19;
        DAT_14020d3e8 = fVar19;
      }
      else if (((uint)fVar36 & 1) == 0) {
        if (((uint)fVar36 & 0x20) == 0) {
          if (((uint)fVar36 & 4) == 0) {
            fVar18 = fVar37 + fVar18;
            DAT_14020d3f8 = fVar18;
          }
          else {
            fVar28 = fVar37 + fVar28;
            DAT_14020d3f4 = fVar28;
          }
        }
        else {
          fVar26 = fVar37 + fVar26;
          DAT_14020d3f0 = fVar26;
        }
      }
      else {
        fVar25 = fVar37 + fVar25;
        DAT_14020d3ec = fVar25;
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar37 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      fVar36 = fVar37 * 0.5;
      if (*(int *)((longlong)materials_list->spawn_with + lVar11 + -0x24) != 0) {
        fVar36 = fVar37;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (pbVar14->pool).n_materials;
      (pbVar14->pool).n_materials = iVar7 + 1;
      (pbVar14->pool).material_indices[iVar7] = (int)lVar12;
      if ((char)uVar6 < '\0') {
        fVar37 = (fVar36 * 0.01) / fVar19;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar37 = (fVar36 * 0.3) / fVar18;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
          else {
            fVar37 = (fVar36 * 0.05) / fVar28;
            (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar36 * 0.25) / fVar26;
          (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar36 * 0.1) / fVar25;
        (pbVar14->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar14->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar14->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010e013:
    auVar27 = ZEXT1664(auVar20);
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_14010e013;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("MCON");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = rVar29;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar17;
  pbVar14->bumpyness = 3.0;
  pbVar14->min_value = 1.0;
  pbVar14->ambient_music_id = 0xb;
  pbVar14->battle_music_id = 10;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010e0b2:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010e0b2;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("NCON");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3a83126f3a83126f;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003a83126f;
  pbVar14->bumpyness = 1.0;
  pbVar14->min_value = 1.0;
  pbVar14->ambient_music_id = 0xd;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010e159:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010e159;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FINN");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003ba3d70a;
  pbVar14->bumpyness = 1.0;
  pbVar14->tracked = 1;
  pbVar14->base_amount = 0.5;
  pbVar14->ambient_music_id = 0xd;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010e204:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010e204;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("BUZZ");
  auVar20 = auVar27._0_16_;
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ca3d70a3c23d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f4ccccd3cf5c28f;
  pbVar14->bumpyness = 3.0;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = 0.15;
  pbVar14->fbm_amount = 0.1;
  pbVar14->fbm_base_frequency = 0.1;
  pbVar14->fbm_octives = 5.0;
  pbVar14->fbm_gain = 0.5;
  pbVar14->neighbor_fbm = 0.04;
  pbVar14->neighbor_amount = 0.04;
  pbVar14->base_amount = 0.001;
  lVar11 = (longlong)w.n_biome_modifiers;
  iVar7 = 0;
  if (1 < lVar11) {
    lVar12 = 1;
    uVar17 = w.field140_0x3f30.biome_modifiers;
    do {
      uVar17 = uVar17 + 0x20;
      if (((biome_modifier *)uVar17)->id != (char *)0x0) {
        auVar27 = ZEXT1664(auVar27._0_16_);
        iVar7 = strncmp("biome_modifier_lightning",((biome_modifier *)uVar17)->id,0x19);
        auVar20 = auVar27._0_16_;
        if (iVar7 == 0) {
          iVar7 = (int)lVar12;
          break;
        }
      }
      auVar20 = auVar27._0_16_;
      lVar12 = lVar12 + 1;
      iVar7 = 0;
    } while (lVar11 != lVar12);
  }
  iVar2 = pbVar14->n_modifiers;
  pbVar14->n_modifiers = iVar2 + 1;
  pbVar14->modifiers[iVar2] = iVar7;
  pbVar14->cell_chance = 0.7;
  pbVar14->cell_max_neighbors = 6;
  uVar15 = (ulonglong)(uint)n_materials;
  auVar21 = SUB6416(ZEXT464(0x3f000000),0);
  auVar22 = SUB6416(ZEXT464(0x3c23d70a),0);
  fVar19 = DAT_14020d3fc;
  fVar25 = DAT_14020d400;
  fVar26 = DAT_14020d404;
  fVar28 = DAT_14020d408;
  fVar37 = DAT_14020d40c;
  fVar18 = DAT_14020d410;
  bVar5 = true;
  do {
    bVar4 = bVar5;
    if (0 < (int)uVar15) {
      lVar11 = 0x1c;
      lVar12 = 0;
      do {
        fVar36 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
        if (uVar6 == 0) {
          fVar36 = fVar36 * 0.5;
LAB_14010e3af:
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
          if (-1 < (char)uVar6) goto LAB_14010e3b9;
LAB_14010e40a:
          if (!bVar4) {
            fVar36 = (fVar36 * 0.01) / fVar19;
            goto LAB_14010e4b0;
          }
          fVar19 = fVar36 + fVar19;
          DAT_14020d3fc = fVar19;
        }
        else {
          if (uVar6 < 2) goto LAB_14010e3af;
          fVar36 = fVar36 * 0.5;
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
          if ((char)uVar6 < '\0') goto LAB_14010e40a;
LAB_14010e3b9:
          if ((uVar6 & 1) == 0) {
            if ((uVar6 & 0x20) == 0) {
              if ((uVar6 & 2) == 0) {
                if ((uVar6 & 4) == 0) {
                  if (bVar4) {
                    fVar18 = fVar36 + fVar18;
                    DAT_14020d410 = fVar18;
                  }
                  else {
                    fVar36 = (fVar36 * 0.25) / fVar18;
LAB_14010e4b0:
                    iVar7 = (pbVar14->pool).n_materials;
                    lVar13 = (longlong)iVar7;
                    (pbVar14->pool).n_materials = iVar7 + 1;
                    (pbVar14->pool).material_indices[lVar13] = (int)lVar12;
                    (pbVar14->pool).material_cum_chances[lVar13] = fVar36;
                    if (0 < lVar13) {
                      (pbVar14->pool).material_cum_chances[lVar13] =
                           fVar36 + (float)(pbVar14->pool).material_indices[lVar13 + 0x7ff];
                    }
                  }
                }
                else {
                  if (!bVar4) {
                    fVar36 = (fVar36 * 0.5) / fVar37;
                    goto LAB_14010e4b0;
                  }
                  fVar37 = fVar36 + fVar37;
                  DAT_14020d40c = fVar37;
                }
              }
              else {
                if (!bVar4) {
                  fVar36 = (fVar36 * 0.8) / fVar28;
                  goto LAB_14010e4b0;
                }
                fVar28 = fVar36 + fVar28;
                DAT_14020d408 = fVar28;
              }
            }
            else {
              if (!bVar4) {
                fVar36 = fVar36 / fVar26;
                goto LAB_14010e4b0;
              }
              fVar26 = fVar36 + fVar26;
              DAT_14020d404 = fVar26;
            }
          }
          else {
            if (!bVar4) {
              fVar36 = (fVar36 * 0.5) / fVar25;
              goto LAB_14010e4b0;
            }
            fVar25 = fVar36 + fVar25;
            DAT_14020d400 = fVar25;
          }
        }
        lVar12 = lVar12 + 1;
        uVar15 = (ulonglong)n_materials;
        lVar11 = lVar11 + 0x120;
      } while (lVar12 < (longlong)uVar15);
    }
    bVar5 = false;
  } while (bVar4);
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010e52d:
    auVar27 = ZEXT1664(auVar20);
    auVar30 = ZEXT1664(auVar21);
    auVar32 = ZEXT1664(auVar22);
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar14 = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    auVar30 = ZEXT1664(auVar21);
    auVar32 = ZEXT1664(auVar22);
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    auVar22 = auVar32._0_16_;
    auVar21 = auVar30._0_16_;
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_14010e52d;
    pbVar14 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("NEST");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d4ccccd;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003ca3d70a;
  pbVar14->bumpyness = 2.0;
  pbVar14->tracked = 1;
  pbVar14->noise_amount = 0.15;
  pbVar14->fbm_amount = 0.1;
  pbVar14->fbm_base_frequency = 0.1;
  pbVar14->fbm_octives = 5.0;
  pbVar14->fbm_gain = 0.5;
  pbVar14->neighbor_amount = (float)(int)auVar27._0_8_;
  pbVar14->base_amount = (float)(int)((ulonglong)auVar27._0_8_ >> 0x20);
  pbVar14->cell_chance = 0.5;
  pbVar14->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar18 = DAT_14020d41c;
    fVar25 = DAT_14020d418;
    fVar19 = DAT_14020d414;
    do {
      fVar26 = *pfVar9;
      fVar28 = auVar30._0_4_;
      if (pfVar9[-1] == 0.0) {
        fVar26 = fVar28 * fVar26;
LAB_14010e61e:
        fVar37 = pfVar9[-2];
        if (-1 < SUB41(fVar37,0)) goto LAB_14010e647;
LAB_14010e5f0:
        fVar19 = fVar26 + fVar19;
        DAT_14020d414 = fVar19;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_14010e61e;
        fVar26 = fVar28 * fVar26;
        fVar37 = pfVar9[-2];
        if (SUB41(fVar37,0) < '\0') goto LAB_14010e5f0;
LAB_14010e647:
        if (((uint)fVar37 & 8) == 0) {
          fVar18 = fVar26 + fVar18;
          DAT_14020d41c = fVar18;
        }
        else {
          fVar25 = fVar26 + fVar25;
          DAT_14020d418 = fVar25;
        }
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar26 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if (uVar6 == 0) {
        fVar26 = fVar28 * fVar26;
LAB_14010e6b5:
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        if (-1 < (char)uVar6) goto LAB_14010e6bd;
LAB_14010e6e6:
        fVar26 = (auVar32._0_4_ * fVar26) / fVar19;
      }
      else {
        if (uVar6 < 2) goto LAB_14010e6b5;
        fVar26 = fVar28 * fVar26;
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        if ((char)uVar6 < '\0') goto LAB_14010e6e6;
LAB_14010e6bd:
        if ((uVar6 & 8) == 0) {
          fVar26 = (fVar26 * 0.1) / fVar18;
        }
        else {
          fVar26 = fVar26 / fVar25;
        }
      }
      iVar7 = (pbVar14->pool).n_materials;
      lVar13 = (longlong)iVar7;
      (pbVar14->pool).n_materials = iVar7 + 1;
      (pbVar14->pool).material_indices[lVar13] = (int)lVar12;
      (pbVar14->pool).material_cum_chances[lVar13] = fVar26;
      if (0 < lVar13) {
        (pbVar14->pool).material_cum_chances[lVar13] =
             fVar26 + (float)(pbVar14->pool).material_indices[lVar13 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.max_biome_types <= w.n_biome_types) {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (!bVar5) {
      pbVar14 = (biome_type *)0x0;
      goto LAB_14010e7aa;
    }
  }
  memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
  lVar11 = (longlong)w.n_biome_types;
  w.n_biome_types = w.n_biome_types + 1;
  pbVar14 = w.field137_0x3f10.biome_types + lVar11;
LAB_14010e7aa:
  uVar6 = str_to_id("RACE");
  pbVar14->id = uVar6;
  (pbVar14->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d23d70a3d23d70a;
  *(undefined8 *)((longlong)&(pbVar14->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333d23d70a;
  pbVar14->bumpyness = 0.5;
  pbVar14->tracked = 1;
  pbVar14->no_modifiers = 1;
  pbVar14->noise_amount = 0.15;
  pbVar14->neighbor_amount = 0.1;
  pbVar14->base_amount = 0.02;
  pbVar14->cell_chance = 0.0;
  pbVar14->cell_max_neighbors = 2;
  pvVar8 = TlsGetValue(tls_index);
  uVar17 = *(undefined8 *)((longlong)pvVar8 + 0x70);
  lua_settop(uVar17,0);
  lua_getfield(uVar17,0xffffd8ee,&s_init_biomes);
  iVar7 = lua_type(uVar17,0xffffffff);
  if (iVar7 == 6) {
    iVar7 = lua_pcall(uVar17,0,0,0);
    if (iVar7 != 0) {
      param1 = (char *)lua_tolstring(uVar17,0xffffffff,0);
      log_printf("lua warning (init_biomes): %s\n",param1);
    }
    return;
  }
  lua_settop(uVar17,0xfffffffe);
  return;
}

