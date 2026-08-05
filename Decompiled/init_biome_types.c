
void __cdecl init_biome_types(void)

{
  undefined1 *puVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar7;
  LPVOID pvVar8;
  float *pfVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  biome_type *pbVar13;
  ulonglong uVar14;
  longlong lVar15;
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
  lVar11 = (longlong)w.max_biome_modifiers;
  if (lVar11 < 1) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    bVar5 = expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
    if (bVar5) {
      lVar11 = (longlong)w.n_biome_modifiers;
      goto LAB_14010167b;
    }
  }
  else {
    lVar11 = 0;
LAB_14010167b:
    w.field128_0x3e20.biome_modifiers[lVar11] = (biome_modifier)ZEXT1232(ZEXT812(0));
    w.n_biome_modifiers = w.n_biome_modifiers + 1;
  }
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
  }
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar20);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_lava";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_lava;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
  }
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar20);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_cold";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_cold;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
  }
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar21);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_dark";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_darkness;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
    auVar21._0_12_ = ZEXT812(0);
    auVar21._12_4_ = 0;
  }
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar21);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_small";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_small;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
  }
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar22);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_big";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_big;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
    auVar22._0_12_ = ZEXT812(0);
    auVar22._12_4_ = 0;
  }
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar22);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_lightning";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_lightning;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
  }
  auVar23._0_12_ = ZEXT812(0);
  auVar23._12_4_ = 0;
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar23);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_xp";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_bonus_xp;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
    auVar23._0_12_ = ZEXT812(0);
    auVar23._12_4_ = 0;
  }
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar23);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_safe";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_safe;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
  }
  auVar24._0_12_ = ZEXT812(0);
  auVar24._12_4_ = 0;
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar24);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_anger";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->creature_fn = biome_anger;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field128_0x3e20.biome_modifiers_memory,lVar11 << 6);
    auVar24._0_12_ = ZEXT812(0);
    auVar24._12_4_ = 0;
  }
  w.field128_0x3e20.biome_modifiers[w.n_biome_modifiers] = (biome_modifier)ZEXT1632(auVar24);
  uVar17 = w.field128_0x3e20.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
  w.field128_0x3e20.biome_modifiers[lVar11].id = "biome_modifier_flow";
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->generation_fn = biome_flow;
  ((biome_modifier *)(uVar17 + lVar11 * 0x20))->chance = 0.01;
  w.n_biome_types = 0;
  lVar11 = (longlong)w.max_biome_types;
  if (lVar11 < 1) {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140101bfe;
    pbVar13 = (biome_type *)0x0;
  }
  else {
LAB_140101bfe:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  uVar6 = str_to_id("NONE");
  pbVar13->id = uVar6;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140101c7f:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140101c7f;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("SAFE");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e6147ae3d4ccccd;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003e800000;
  pbVar13->bumpyness = 2.0;
  lVar11 = (longlong)w.n_biome_modifiers;
  iVar7 = 0;
  if (1 < lVar11) {
    lVar15 = 1;
    uVar17 = w.field128_0x3e20.biome_modifiers;
    do {
      uVar17 = uVar17 + 0x20;
      if ((((biome_modifier *)uVar17)->id != (char *)0x0) && (strncmp(), extraout_EAX == 0)) {
        iVar7 = (int)lVar15;
        break;
      }
      lVar15 = lVar15 + 1;
    } while (lVar11 != lVar15);
  }
  iVar2 = pbVar13->n_modifiers;
  pbVar13->n_modifiers = iVar2 + 1;
  pbVar13->modifiers[iVar2] = iVar7;
  pbVar13->noise_amount = 0.15;
  pbVar13->neighbor_amount = 0.02;
  pbVar13->base_amount = 0.5;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140101d9b:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140101d9b;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("STRT");
  pbVar13->id = uVar6;
  rVar29 = (real_2_u_0)0x3c54fdf43ca3d70a;
  uVar33 = 0x3f8000003c23d70a;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c54fdf43ca3d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003c23d70a;
  pbVar13->bumpyness = 5.0;
  pbVar13->ambient_music_id = 3;
  pbVar13->battle_music_id = 2;
  pbVar13->tracked = 1;
  uVar17 = 0x3cf5c28f3e19999a;
  uVar31 = 0x408000003d4ccccd;
  pbVar13->noise_amount = 0.15;
  pbVar13->fbm_amount = 0.03;
  pbVar13->fbm_base_frequency = 0.05;
  pbVar13->fbm_octives = 4.0;
  pbVar13->fbm_gain = 0.5;
  pbVar13->neighbor_amount = 0.0;
  pbVar13->base_amount = 0.02;
  pbVar13->cell_chance = 0.5;
  pbVar13->cell_max_neighbors = 1;
  uVar14 = (ulonglong)(uint)n_materials;
  if (0 < n_materials) {
    fVar18 = total_weight;
    fVar37 = total_weight;
    fVar28 = total_weight;
    fVar26 = total_weight;
    fVar25 = total_weight;
    fVar19 = total_weight;
    bVar5 = true;
    do {
      bVar4 = bVar5;
      if (0 < (int)uVar14) {
        lVar11 = 0x1c;
        lVar15 = 0;
        do {
          fVar36 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
          fVar3 = fVar36 * 0.25;
          if ((uVar6 == 0) || (fVar36 = fVar3, uVar6 < 2)) {
            uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
            if ((char)uVar6 < '\0') goto LAB_140101f7e;
LAB_140101f21:
            if ((uVar6 & 0x10) == 0) {
              if ((uVar6 & 1) == 0) {
                if ((uVar6 & 0x20) == 0) {
                  if ((uVar6 & 4) == 0) {
                    if (bVar4) {
                      fVar18 = fVar36 + fVar18;
                      total_weight = fVar18;
                    }
                    else {
                      fVar36 = (fVar36 * 0.5) / fVar18;
LAB_140102030:
                      iVar7 = (pbVar13->pool).n_materials;
                      lVar12 = (longlong)iVar7;
                      (pbVar13->pool).n_materials = iVar7 + 1;
                      (pbVar13->pool).material_indices[lVar12] = (int)lVar15;
                      (pbVar13->pool).material_cum_chances[lVar12] = fVar36;
                      if (0 < lVar12) {
                        (pbVar13->pool).material_cum_chances[lVar12] =
                             fVar36 + (float)(pbVar13->pool).material_indices[lVar12 + 0x7ff];
                      }
                    }
                  }
                  else {
                    if (!bVar4) {
                      fVar36 = (fVar36 * 0.1) / fVar37;
                      goto LAB_140102030;
                    }
                    fVar37 = fVar36 + fVar37;
                    total_weight = fVar37;
                  }
                }
                else {
                  if (!bVar4) {
                    fVar36 = (fVar36 * 0.1) / fVar28;
                    goto LAB_140102030;
                  }
                  fVar28 = fVar36 + fVar28;
                  total_weight = fVar28;
                }
              }
              else {
                if (!bVar4) {
                  fVar36 = (fVar36 * 0.1) / fVar26;
                  goto LAB_140102030;
                }
                fVar26 = fVar36 + fVar26;
                total_weight = fVar26;
              }
            }
            else {
              if (!bVar4) {
                fVar36 = (fVar36 * 0.5) / fVar25;
                goto LAB_140102030;
              }
              fVar25 = fVar36 + fVar25;
              total_weight = fVar25;
            }
          }
          else {
            fVar36 = fVar3 * 0.1;
            uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
            if (-1 < (char)uVar6) goto LAB_140101f21;
LAB_140101f7e:
            if (!bVar4) {
              fVar36 = (fVar36 * 0.001) / fVar19;
              goto LAB_140102030;
            }
            fVar19 = fVar36 + fVar19;
            total_weight = fVar19;
          }
          lVar15 = lVar15 + 1;
          uVar14 = (ulonglong)n_materials;
          lVar11 = lVar11 + 0x118;
        } while (lVar15 < (longlong)uVar14);
      }
      bVar5 = false;
    } while (bVar4);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_1401020aa:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_1401020aa;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("DARK");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3c23d70a;
  pbVar13->bumpyness = 2.0;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = 0.15;
  pbVar13->fbm_amount = 0.1;
  pbVar13->fbm_base_frequency = 0.1;
  pbVar13->fbm_octives = 5.0;
  pbVar13->fbm_gain = 0.5;
  auVar27 = ZEXT1664(ZEXT816(0x3a83126f3c23d70a));
  pbVar13->neighbor_amount = 0.01;
  pbVar13->base_amount = 0.001;
  pbVar13->cell_chance = 0.5;
  pbVar13->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar14 = 0;
    fVar18 = total_weight;
    fVar28 = total_weight;
    fVar26 = total_weight;
    fVar25 = total_weight;
    fVar19 = total_weight;
    do {
      fVar37 = *pfVar9;
      if (pfVar9[-1] == 0.0) {
        fVar37 = fVar37 * 0.5;
LAB_1401021c2:
        fVar36 = pfVar9[-2];
        if (((uint)fVar36 & 2) == 0) goto LAB_1401021e8;
LAB_140102190:
        fVar19 = fVar37 + fVar19;
        total_weight = fVar19;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_1401021c2;
        fVar37 = fVar37 * 0.5;
        fVar36 = pfVar9[-2];
        if (((uint)fVar36 & 2) != 0) goto LAB_140102190;
LAB_1401021e8:
        if (((uint)fVar36 & 1) == 0) {
          if (((uint)fVar36 & 0x20) == 0) {
            if (((uint)fVar36 & 4) == 0) {
              fVar18 = fVar37 + fVar18;
              total_weight = fVar18;
            }
            else {
              fVar28 = fVar37 + fVar28;
              total_weight = fVar28;
            }
          }
          else {
            fVar26 = fVar37 + fVar26;
            total_weight = fVar26;
          }
        }
        else {
          fVar25 = fVar37 + fVar25;
          total_weight = fVar25;
        }
      }
      uVar14 = uVar14 + 1;
      pfVar9 = pfVar9 + 0x46;
    } while (uVar14 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar15 = 0;
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
      iVar7 = (pbVar13->pool).n_materials;
      (pbVar13->pool).n_materials = iVar7 + 1;
      (pbVar13->pool).material_indices[iVar7] = (int)lVar15;
      if ((uVar6 & 2) == 0) {
        if ((uVar6 & 1) == 0) {
          if ((uVar6 & 0x20) == 0) {
            if ((uVar6 & 4) == 0) {
              fVar37 = (fVar37 * 0.2) / fVar18;
              (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
            }
            else {
              fVar37 = (fVar37 * 0.05) / fVar28;
              (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
            }
          }
          else {
            fVar37 = (fVar37 * 0.25) / fVar26;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar37 * 0.05) / fVar25;
          (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar37 * 0.5) / fVar19;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar13->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar13->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar15 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_1401023be:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_1401023be;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ICEE");
  pbVar13->id = uVar6;
  rVar34 = (real_2_u_0)0x3c23d70a3ba3d70a;
  uVar35 = 0x3f0000003c75c28f;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3ba3d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003c75c28f;
  pbVar13->bumpyness = 7.0;
  pbVar13->temperature = -1.0;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = 0.2;
  pbVar13->fbm_amount = 0.05;
  pbVar13->fbm_base_frequency = 0.01;
  pbVar13->fbm_octives = 5.0;
  pbVar13->fbm_gain = 0.5;
  pbVar13->neighbor_amount = 0.02;
  pbVar13->base_amount = 0.01;
  pbVar13->ambient_music_id = 5;
  pbVar13->battle_music_id = 4;
  pbVar13->cell_chance = 0.8;
  pbVar13->cell_max_neighbors = 1;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar14 = 0;
    fVar18 = total_weight;
    fVar28 = total_weight;
    fVar26 = total_weight;
    fVar25 = total_weight;
    fVar19 = total_weight;
    do {
      fVar37 = *pfVar9;
      fVar36 = fVar37 * 0.5;
      if ((pfVar9[-1] == 0.0) || (fVar36 = fVar37, (uint)pfVar9[-1] < 2)) {
        fVar37 = pfVar9[-2];
        if (SUB41(fVar37,0) < '\0') goto LAB_1401024d0;
LAB_14010253b:
        if (((uint)fVar37 & 1) == 0) {
          if (((uint)fVar37 & 0x20) == 0) {
            if (((uint)fVar37 & 4) == 0) {
              fVar18 = fVar36 + fVar18;
              total_weight = fVar18;
            }
            else {
              fVar28 = fVar36 + fVar28;
              total_weight = fVar28;
            }
          }
          else {
            fVar26 = fVar36 + fVar26;
            total_weight = fVar26;
          }
        }
        else {
          fVar25 = fVar36 + fVar25;
          total_weight = fVar25;
        }
      }
      else {
        fVar36 = fVar37 * 0.1;
        fVar37 = pfVar9[-2];
        if (-1 < SUB41(fVar37,0)) goto LAB_14010253b;
LAB_1401024d0:
        fVar19 = fVar36 + fVar19;
        total_weight = fVar19;
      }
      uVar14 = uVar14 + 1;
      pfVar9 = pfVar9 + 0x46;
    } while (uVar14 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar15 = 0;
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
      iVar7 = (pbVar13->pool).n_materials;
      (pbVar13->pool).n_materials = iVar7 + 1;
      (pbVar13->pool).material_indices[iVar7] = (int)lVar15;
      if ((char)uVar6 < '\0') {
        fVar37 = (fVar37 * 0.01) / fVar19;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar37 = (fVar37 * 0.5) / fVar18;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
          else {
            fVar37 = (fVar37 * 0.05) / fVar28;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar37 * 0.25) / fVar26;
          (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar37 * 0.1) / fVar25;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar13->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar13->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar15 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140102720:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140102720;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ICON");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = rVar34;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar35;
  pbVar13->bumpyness = 3.0;
  pbVar13->min_value = 1.0;
  pbVar13->ambient_music_id = 5;
  pbVar13->battle_music_id = 4;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_1401027bc:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_1401027bc;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FIRE");
  pbVar13->id = uVar6;
  rVar34 = (real_2_u_0)0x3ba3d70a3c75c28f;
  uVar35 = 0x3f3333333ba3d70a;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3c75c28f;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333ba3d70a;
  pbVar13->bumpyness = 3.0;
  pbVar13->temperature = 1.0;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = 0.3;
  pbVar13->fbm_amount = 0.2;
  pbVar13->fbm_base_frequency = 0.2;
  pbVar13->fbm_octives = 4.0;
  pbVar13->fbm_gain = 1.0;
  pbVar13->neighbor_amount = 0.05;
  pbVar13->base_amount = 0.03;
  pbVar13->ambient_music_id = 7;
  pbVar13->battle_music_id = 6;
  lVar11 = (longlong)w.n_biome_modifiers;
  iVar7 = 0;
  if (1 < lVar11) {
    lVar15 = 1;
    uVar16 = w.field128_0x3e20.biome_modifiers;
    do {
      uVar16 = uVar16 + 0x20;
      if ((((biome_modifier *)uVar16)->id != (char *)0x0) && (strncmp(), extraout_EAX_00 == 0)) {
        iVar7 = (int)lVar15;
        break;
      }
      lVar15 = lVar15 + 1;
      iVar7 = 0;
    } while (lVar11 != lVar15);
  }
  iVar2 = pbVar13->n_modifiers;
  pbVar13->n_modifiers = iVar2 + 1;
  pbVar13->modifiers[iVar2] = iVar7;
  pbVar13->cell_chance = 0.5;
  pbVar13->cell_max_neighbors = 6;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar14 = 0;
    fVar18 = total_weight;
    fVar28 = total_weight;
    fVar26 = total_weight;
    fVar25 = total_weight;
    fVar19 = total_weight;
    do {
      fVar37 = *pfVar9;
      if (pfVar9[-1] == 0.0) {
        fVar37 = fVar37 * 0.5;
LAB_140102972:
        fVar36 = pfVar9[-2];
        if (-1 < SUB41(fVar36,0)) goto LAB_140102997;
LAB_140102940:
        fVar19 = fVar37 + fVar19;
        total_weight = fVar19;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_140102972;
        fVar37 = fVar37 * 0.5;
        fVar36 = pfVar9[-2];
        if (SUB41(fVar36,0) < '\0') goto LAB_140102940;
LAB_140102997:
        if (((uint)fVar36 & 1) == 0) {
          if (((uint)fVar36 & 0x20) == 0) {
            if (((uint)fVar36 & 4) == 0) {
              fVar18 = fVar37 + fVar18;
              total_weight = fVar18;
            }
            else {
              fVar28 = fVar37 + fVar28;
              total_weight = fVar28;
            }
          }
          else {
            fVar26 = fVar37 + fVar26;
            total_weight = fVar26;
          }
        }
        else {
          fVar25 = fVar37 + fVar25;
          total_weight = fVar25;
        }
      }
      uVar14 = uVar14 + 1;
      pfVar9 = pfVar9 + 0x46;
    } while (uVar14 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar15 = 0;
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
      iVar7 = (pbVar13->pool).n_materials;
      (pbVar13->pool).n_materials = iVar7 + 1;
      (pbVar13->pool).material_indices[iVar7] = (int)lVar15;
      if ((char)uVar6 < '\0') {
        fVar37 = (fVar37 * 0.01) / fVar19;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar37 = (fVar37 * 0.5) / fVar18;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
          else {
            fVar37 = (fVar37 * 0.05) / fVar28;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar37 * 0.25) / fVar26;
          (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar37 * 0.1) / fVar25;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar13->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar13->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar15 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140102b80:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140102b80;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FCON");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = rVar34;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar35;
  pbVar13->bumpyness = 3.0;
  pbVar13->min_value = 1.0;
  pbVar13->ambient_music_id = 7;
  pbVar13->battle_music_id = 6;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140102c1c:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140102c1c;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FENT");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = rVar34;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar35;
  pbVar13->bumpyness = 3.0;
  pbVar13->noise_amount = 0.3;
  pbVar13->neighbor_amount = 0.05;
  pbVar13->base_amount = 0.2;
  pbVar13->ambient_music_id = 7;
  pbVar13->battle_music_id = 6;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140102cc5:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140102cc5;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("TUTR");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = rVar29;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar33;
  pbVar13->bumpyness = 5.0;
  pbVar13->base_amount = 1.0;
  pbVar13->ambient_music_id = 3;
  pbVar13->battle_music_id = 2;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140102d61:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140102d61;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("BOSS");
  auVar20 = auVar27._0_16_;
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = rVar29;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar33;
  pbVar13->bumpyness = 5.0;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = 0.15;
  pbVar13->fbm_amount = 0.1;
  pbVar13->fbm_base_frequency = 0.05;
  pbVar13->fbm_octives = 4.0;
  pbVar13->fbm_gain = 0.5;
  pbVar13->neighbor_fbm = 0.05;
  pbVar13->neighbor_amount = 0.0;
  pbVar13->base_amount = 0.02;
  pbVar13->cell_chance = 1.0;
  pbVar13->cell_max_neighbors = 1;
  if (0 < n_materials) {
    lVar11 = 0x1c;
    lVar15 = 0;
    do {
      if (0.0 < *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20)) {
        iVar7 = (pbVar13->pool).n_materials;
        lVar12 = (longlong)iVar7;
        (pbVar13->pool).n_materials = iVar7 + 1;
        (pbVar13->pool).material_indices[lVar12] = (int)lVar15;
        (pbVar13->pool).material_cum_chances[lVar12] = 1.0;
        if (0 < lVar12) {
          (pbVar13->pool).material_cum_chances[lVar12] =
               (float)(pbVar13->pool).material_indices[lVar12 + 0x7ff] + 1.0;
        }
      }
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar15 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140102e9b:
    auVar27 = ZEXT1664(auVar20);
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_140102e9b;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ECON");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333c23d70a;
  pbVar13->bumpyness = 3.0;
  pbVar13->min_value = 1.0;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140102f3e:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140102f3e;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("TOXC");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e4ccccd3e19999a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3e99999a3ca3d70a;
  pbVar13->bumpyness = 5.0;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = (float)(int)uVar17;
  pbVar13->fbm_amount = (float)(int)((ulonglong)uVar17 >> 0x20);
  pbVar13->fbm_base_frequency = (float)(int)uVar31;
  pbVar13->fbm_octives = (float)(int)((ulonglong)uVar31 >> 0x20);
  pbVar13->fbm_gain = 0.5;
  pbVar13->neighbor_amount = 0.05;
  pbVar13->base_amount = 0.02;
  pbVar13->cell_chance = 0.65;
  pbVar13->cell_max_neighbors = 3;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar14 = 0;
    fVar18 = total_weight;
    fVar26 = total_weight;
    fVar25 = total_weight;
    fVar19 = total_weight;
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
              total_weight = fVar18;
            }
            else {
              fVar26 = fVar28 + fVar26;
              total_weight = fVar26;
            }
          }
          else {
            fVar25 = fVar28 + fVar25;
            total_weight = fVar25;
          }
        }
        else {
          fVar19 = fVar28 + fVar19;
          total_weight = fVar19;
        }
      }
      uVar14 = uVar14 + 1;
      pfVar9 = pfVar9 + 0x46;
    } while (uVar14 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar15 = 0;
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
        iVar7 = (pbVar13->pool).n_materials;
        lVar12 = (longlong)iVar7;
        (pbVar13->pool).n_materials = iVar7 + 1;
        (pbVar13->pool).material_indices[lVar12] = (int)lVar15;
        (pbVar13->pool).material_cum_chances[lVar12] = fVar28;
        if (0 < lVar12) {
          (pbVar13->pool).material_cum_chances[lVar12] =
               fVar28 + (float)(pbVar13->pool).material_indices[lVar12 + 0x7ff];
        }
      }
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar15 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_1401031d6:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_1401031d6;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("GYRE");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003c23d70a;
  pbVar13->bumpyness = 2.0;
  pbVar13->tracked = 1;
  pbVar13->no_modifiers = 1;
  pbVar13->noise_amount = 0.15;
  pbVar13->neighbor_amount = 0.0;
  pbVar13->base_amount = 0.1;
  pbVar13->min_value = 0.01;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010328e:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_14010328e;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JNGL");
  auVar20 = auVar27._0_16_;
  pbVar13->id = uVar6;
  rVar29 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  uVar17 = 0x3f8000003a83126f;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  pbVar13->bumpyness = 10.0;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = 0.3;
  pbVar13->fbm_amount = -0.2;
  pbVar13->fbm_base_frequency = 0.02;
  pbVar13->fbm_octives = 4.0;
  pbVar13->fbm_gain = 1.0;
  pbVar13->neighbor_fbm = 0.04;
  pbVar13->neighbor_amount = -0.03;
  pbVar13->base_amount = 0.01;
  pbVar13->ambient_music_id = 9;
  pbVar13->battle_music_id = 8;
  pbVar13->cell_chance = 0.3;
  pbVar13->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar14 = 0;
    fVar18 = total_weight;
    fVar28 = total_weight;
    fVar26 = total_weight;
    fVar25 = total_weight;
    fVar19 = total_weight;
    do {
      fVar37 = *pfVar9 * 0.5;
      if (pfVar9[-1] != 0.0) {
        fVar37 = *pfVar9;
      }
      fVar36 = pfVar9[-2];
      if (SUB41(fVar36,0) < '\0') {
        fVar19 = fVar37 + fVar19;
        total_weight = fVar19;
      }
      else if (((uint)fVar36 & 1) == 0) {
        if (((uint)fVar36 & 0x20) == 0) {
          if (((uint)fVar36 & 4) == 0) {
            fVar18 = fVar37 + fVar18;
            total_weight = fVar18;
          }
          else {
            fVar28 = fVar37 + fVar28;
            total_weight = fVar28;
          }
        }
        else {
          fVar26 = fVar37 + fVar26;
          total_weight = fVar26;
        }
      }
      else {
        fVar25 = fVar37 + fVar25;
        total_weight = fVar25;
      }
      uVar14 = uVar14 + 1;
      pfVar9 = pfVar9 + 0x46;
    } while (uVar14 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar15 = 0;
    do {
      fVar37 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      fVar36 = fVar37 * 0.5;
      if (*(int *)((longlong)materials_list->spawn_with + lVar11 + -0x24) != 0) {
        fVar36 = fVar37;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (pbVar13->pool).n_materials;
      (pbVar13->pool).n_materials = iVar7 + 1;
      (pbVar13->pool).material_indices[iVar7] = (int)lVar15;
      if ((char)uVar6 < '\0') {
        fVar37 = (fVar36 * 0.01) / fVar19;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar37 = (fVar36 * 0.3) / fVar18;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
          else {
            fVar37 = (fVar36 * 0.05) / fVar28;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar36 * 0.25) / fVar26;
          (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar36 * 0.1) / fVar25;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar13->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar13->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar15 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_1401035a3:
    auVar27 = ZEXT1664(auVar20);
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_1401035a3;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JBOS");
  auVar20 = auVar27._0_16_;
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = rVar29;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar17;
  pbVar13->bumpyness = 10.0;
  pbVar13->noise_amount = 0.3;
  pbVar13->fbm_amount = -0.2;
  pbVar13->fbm_base_frequency = 0.02;
  pbVar13->fbm_octives = 4.0;
  pbVar13->fbm_gain = 1.0;
  pbVar13->neighbor_fbm = 0.04;
  pbVar13->neighbor_amount = -0.03;
  pbVar13->base_amount = 0.1;
  pbVar13->ambient_music_id = 9;
  pbVar13->battle_music_id = 8;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010364b:
    auVar27 = ZEXT1664(auVar20);
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_14010364b;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JCON");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3be56042;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  pbVar13->bumpyness = 3.0;
  pbVar13->min_value = 1.0;
  pbVar13->ambient_music_id = 9;
  pbVar13->battle_music_id = 8;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_1401036f2:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_1401036f2;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("MEAT");
  auVar20 = auVar27._0_16_;
  pbVar13->id = uVar6;
  rVar29 = (real_2_u_0)0x3a83126f3ba3d70a;
  uVar17 = 0x3f8000003a83126f;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3a83126f3ba3d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  pbVar13->bumpyness = 3.0;
  pbVar13->custom_cell_spawning = 1;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = 0.3;
  pbVar13->fbm_amount = -0.2;
  pbVar13->fbm_base_frequency = 0.02;
  pbVar13->fbm_octives = 4.0;
  pbVar13->fbm_gain = 1.0;
  pbVar13->neighbor_fbm = 0.04;
  pbVar13->neighbor_amount = -0.03;
  pbVar13->base_amount = 0.1;
  pbVar13->ambient_music_id = 0xb;
  pbVar13->battle_music_id = 10;
  pbVar13->cell_chance = 0.3;
  pbVar13->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar14 = 0;
    fVar18 = total_weight;
    fVar28 = total_weight;
    fVar26 = total_weight;
    fVar25 = total_weight;
    fVar19 = total_weight;
    do {
      fVar37 = *pfVar9 * 0.5;
      if (pfVar9[-1] != 0.0) {
        fVar37 = *pfVar9;
      }
      fVar36 = pfVar9[-2];
      if (SUB41(fVar36,0) < '\0') {
        fVar19 = fVar37 + fVar19;
        total_weight = fVar19;
      }
      else if (((uint)fVar36 & 1) == 0) {
        if (((uint)fVar36 & 0x20) == 0) {
          if (((uint)fVar36 & 4) == 0) {
            fVar18 = fVar37 + fVar18;
            total_weight = fVar18;
          }
          else {
            fVar28 = fVar37 + fVar28;
            total_weight = fVar28;
          }
        }
        else {
          fVar26 = fVar37 + fVar26;
          total_weight = fVar26;
        }
      }
      else {
        fVar25 = fVar37 + fVar25;
        total_weight = fVar25;
      }
      uVar14 = uVar14 + 1;
      pfVar9 = pfVar9 + 0x46;
    } while (uVar14 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar15 = 0;
    do {
      fVar37 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      fVar36 = fVar37 * 0.5;
      if (*(int *)((longlong)materials_list->spawn_with + lVar11 + -0x24) != 0) {
        fVar36 = fVar37;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (pbVar13->pool).n_materials;
      (pbVar13->pool).n_materials = iVar7 + 1;
      (pbVar13->pool).material_indices[iVar7] = (int)lVar15;
      if ((char)uVar6 < '\0') {
        fVar37 = (fVar36 * 0.01) / fVar19;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar37 = (fVar36 * 0.3) / fVar18;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
          else {
            fVar37 = (fVar36 * 0.05) / fVar28;
            (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
          }
        }
        else {
          fVar37 = (fVar36 * 0.25) / fVar26;
          (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
        }
      }
      else {
        fVar37 = (fVar36 * 0.1) / fVar25;
        (pbVar13->pool).material_cum_chances[iVar7] = fVar37;
      }
      if (0 < iVar7) {
        (pbVar13->pool).material_cum_chances[iVar7] =
             fVar37 + (float)(pbVar13->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar15 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140103a03:
    auVar27 = ZEXT1664(auVar20);
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    auVar20 = auVar27._0_16_;
    if (bVar5) goto LAB_140103a03;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("MCON");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = rVar29;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar17;
  pbVar13->bumpyness = 3.0;
  pbVar13->min_value = 1.0;
  pbVar13->ambient_music_id = 0xb;
  pbVar13->battle_music_id = 10;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140103aa2:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140103aa2;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("NCON");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3a83126f3a83126f;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003a83126f;
  pbVar13->bumpyness = 1.0;
  pbVar13->min_value = 1.0;
  pbVar13->ambient_music_id = 0xd;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140103b49:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140103b49;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FINN");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003ba3d70a;
  pbVar13->bumpyness = 1.0;
  pbVar13->tracked = 1;
  pbVar13->base_amount = 0.5;
  pbVar13->ambient_music_id = 0xd;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140103bf4:
    memset();
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    pbVar13 = w.field125_0x3e00.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    if (bVar5) goto LAB_140103bf4;
    pbVar13 = (biome_type *)0x0;
  }
  uVar6 = str_to_id("BUZZ");
  auVar20 = auVar27._0_16_;
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ca3d70a3c23d70a;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f4ccccd3cf5c28f;
  pbVar13->bumpyness = 3.0;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = 0.15;
  pbVar13->fbm_amount = 0.1;
  pbVar13->fbm_base_frequency = 0.1;
  pbVar13->fbm_octives = 5.0;
  pbVar13->fbm_gain = 0.5;
  pbVar13->neighbor_fbm = 0.04;
  pbVar13->neighbor_amount = 0.04;
  pbVar13->base_amount = 0.001;
  lVar11 = (longlong)w.n_biome_modifiers;
  iVar7 = 0;
  if (1 < lVar11) {
    lVar15 = 1;
    uVar17 = w.field128_0x3e20.biome_modifiers;
    do {
      uVar17 = uVar17 + 0x20;
      if (((biome_modifier *)uVar17)->id != (char *)0x0) {
        auVar27 = ZEXT1664(auVar27._0_16_);
        strncmp();
        auVar20 = auVar27._0_16_;
        if (extraout_EAX_01 == 0) {
          iVar7 = (int)lVar15;
          break;
        }
      }
      auVar20 = auVar27._0_16_;
      lVar15 = lVar15 + 1;
      iVar7 = 0;
    } while (lVar11 != lVar15);
  }
  iVar2 = pbVar13->n_modifiers;
  pbVar13->n_modifiers = iVar2 + 1;
  pbVar13->modifiers[iVar2] = iVar7;
  pbVar13->cell_chance = 0.7;
  pbVar13->cell_max_neighbors = 6;
  uVar14 = (ulonglong)(uint)n_materials;
  auVar21 = SUB6416(ZEXT464(0x3f000000),0);
  auVar22 = SUB6416(ZEXT464(0x3c23d70a),0);
  fVar19 = total_weight;
  fVar25 = total_weight;
  fVar26 = total_weight;
  fVar28 = total_weight;
  fVar37 = total_weight;
  fVar18 = total_weight;
  bVar5 = true;
  do {
    bVar4 = bVar5;
    if (0 < (int)uVar14) {
      lVar11 = 0x1c;
      lVar15 = 0;
      do {
        fVar36 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
        if (uVar6 == 0) {
          fVar36 = fVar36 * 0.5;
LAB_140103d9f:
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
          if (-1 < (char)uVar6) goto LAB_140103da9;
LAB_140103dfa:
          if (!bVar4) {
            fVar36 = (fVar36 * 0.01) / fVar19;
            goto LAB_140103ea0;
          }
          fVar19 = fVar36 + fVar19;
          total_weight = fVar19;
        }
        else {
          if (uVar6 < 2) goto LAB_140103d9f;
          fVar36 = fVar36 * 0.5;
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
          if ((char)uVar6 < '\0') goto LAB_140103dfa;
LAB_140103da9:
          if ((uVar6 & 1) == 0) {
            if ((uVar6 & 0x20) == 0) {
              if ((uVar6 & 2) == 0) {
                if ((uVar6 & 4) == 0) {
                  if (bVar4) {
                    fVar18 = fVar36 + fVar18;
                    total_weight = fVar18;
                  }
                  else {
                    fVar36 = (fVar36 * 0.25) / fVar18;
LAB_140103ea0:
                    iVar7 = (pbVar13->pool).n_materials;
                    lVar12 = (longlong)iVar7;
                    (pbVar13->pool).n_materials = iVar7 + 1;
                    (pbVar13->pool).material_indices[lVar12] = (int)lVar15;
                    (pbVar13->pool).material_cum_chances[lVar12] = fVar36;
                    if (0 < lVar12) {
                      (pbVar13->pool).material_cum_chances[lVar12] =
                           fVar36 + (float)(pbVar13->pool).material_indices[lVar12 + 0x7ff];
                    }
                  }
                }
                else {
                  if (!bVar4) {
                    fVar36 = (fVar36 * 0.5) / fVar37;
                    goto LAB_140103ea0;
                  }
                  fVar37 = fVar36 + fVar37;
                  total_weight = fVar37;
                }
              }
              else {
                if (!bVar4) {
                  fVar36 = (fVar36 * 0.8) / fVar28;
                  goto LAB_140103ea0;
                }
                fVar28 = fVar36 + fVar28;
                total_weight = fVar28;
              }
            }
            else {
              if (!bVar4) {
                fVar36 = fVar36 / fVar26;
                goto LAB_140103ea0;
              }
              fVar26 = fVar36 + fVar26;
              total_weight = fVar26;
            }
          }
          else {
            if (!bVar4) {
              fVar36 = (fVar36 * 0.5) / fVar25;
              goto LAB_140103ea0;
            }
            fVar25 = fVar36 + fVar25;
            total_weight = fVar25;
          }
        }
        lVar15 = lVar15 + 1;
        uVar14 = (ulonglong)n_materials;
        lVar11 = lVar11 + 0x118;
      } while (lVar15 < (longlong)uVar14);
    }
    bVar5 = false;
  } while (bVar4);
  lVar11 = (longlong)w.max_biome_types;
  if (w.max_biome_types <= w.n_biome_types) {
    w.max_biome_types = w.max_biome_types * 2;
    auVar27 = ZEXT1664(auVar20);
    auVar30 = ZEXT1664(auVar21);
    auVar32 = ZEXT1664(auVar22);
    bVar5 = expand_memory(&w.field125_0x3e00.biome_types_memory,lVar11 * 0xb950);
    auVar22 = auVar32._0_16_;
    auVar21 = auVar30._0_16_;
    auVar20 = auVar27._0_16_;
    if (!bVar5) {
      pbVar13 = (biome_type *)0x0;
      goto LAB_140103f60;
    }
  }
  auVar27 = ZEXT1664(auVar20);
  auVar30 = ZEXT1664(auVar21);
  auVar32 = ZEXT1664(auVar22);
  memset();
  lVar11 = (longlong)w.n_biome_types;
  w.n_biome_types = w.n_biome_types + 1;
  pbVar13 = w.field125_0x3e00.biome_types + lVar11;
LAB_140103f60:
  uVar6 = str_to_id("NEST");
  pbVar13->id = uVar6;
  (pbVar13->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d4ccccd;
  *(undefined8 *)((longlong)&(pbVar13->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003ca3d70a;
  pbVar13->bumpyness = 2.0;
  pbVar13->tracked = 1;
  pbVar13->noise_amount = 0.15;
  pbVar13->fbm_amount = 0.1;
  pbVar13->fbm_base_frequency = 0.1;
  pbVar13->fbm_octives = 5.0;
  pbVar13->fbm_gain = 0.5;
  pbVar13->neighbor_amount = (float)(int)auVar27._0_8_;
  pbVar13->base_amount = (float)(int)((ulonglong)auVar27._0_8_ >> 0x20);
  pbVar13->cell_chance = 0.5;
  pbVar13->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar14 = 0;
    fVar18 = total_weight;
    fVar19 = total_weight;
    fVar25 = total_weight;
    do {
      fVar26 = *pfVar9;
      fVar28 = auVar30._0_4_;
      if (pfVar9[-1] == 0.0) {
        fVar26 = fVar28 * fVar26;
LAB_14010400e:
        fVar37 = pfVar9[-2];
        if (-1 < SUB41(fVar37,0)) goto LAB_140104037;
LAB_140103fe0:
        fVar19 = fVar26 + fVar19;
        total_weight = fVar19;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_14010400e;
        fVar26 = fVar28 * fVar26;
        fVar37 = pfVar9[-2];
        if (SUB41(fVar37,0) < '\0') goto LAB_140103fe0;
LAB_140104037:
        if (((uint)fVar37 & 8) == 0) {
          total_weight = fVar26 + fVar25;
          fVar25 = total_weight;
        }
        else {
          fVar18 = fVar26 + fVar18;
          total_weight = fVar18;
        }
      }
      uVar14 = uVar14 + 1;
      pfVar9 = pfVar9 + 0x46;
    } while (uVar14 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar15 = 0;
    do {
      fVar26 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if (uVar6 == 0) {
        fVar26 = fVar28 * fVar26;
LAB_1401040a5:
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        if (-1 < (char)uVar6) goto LAB_1401040ad;
LAB_1401040d6:
        fVar26 = (auVar32._0_4_ * fVar26) / fVar19;
      }
      else {
        if (uVar6 < 2) goto LAB_1401040a5;
        fVar26 = fVar28 * fVar26;
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        if ((char)uVar6 < '\0') goto LAB_1401040d6;
LAB_1401040ad:
        if ((uVar6 & 8) == 0) {
          fVar26 = (fVar26 * 0.1) / fVar25;
        }
        else {
          fVar26 = fVar26 / fVar18;
        }
      }
      iVar7 = (pbVar13->pool).n_materials;
      lVar12 = (longlong)iVar7;
      (pbVar13->pool).n_materials = iVar7 + 1;
      (pbVar13->pool).material_indices[lVar12] = (int)lVar15;
      (pbVar13->pool).material_cum_chances[lVar12] = fVar26;
      if (0 < lVar12) {
        (pbVar13->pool).material_cum_chances[lVar12] =
             fVar26 + (float)(pbVar13->pool).material_indices[lVar12 + 0x7ff];
      }
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x118;
    } while (lVar15 < n_materials);
  }
  pvVar8 = TlsGetValue(tls_index);
  uVar17 = *(undefined8 *)((longlong)pvVar8 + 0x70);
  lua_settop(uVar17,0);
  lua_getfield(uVar17,0xffffd8ee,&s_init_biomes);
  iVar7 = lua_type(uVar17,0xffffffff);
  if (iVar7 == 6) {
    iVar7 = lua_pcall(uVar17,0,0,0);
    if (iVar7 != 0) {
      lua_tolstring(uVar17,0xffffffff,0);
      log_printf("lua warning (init_biomes): %s\n");
    }
    return;
  }
  lua_settop(uVar17,0xfffffffe);
  return;
}

