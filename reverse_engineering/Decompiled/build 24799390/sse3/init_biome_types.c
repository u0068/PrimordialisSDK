
/* void __cdecl init_biome_types(void) */

void __cdecl init_biome_types(void)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  biome_modifier *pbVar4;
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
  biome_type *new_biome_type;
  ulonglong uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  w.n_biome_modifiers = 0;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (lVar11 < 1) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    bVar5 = expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
                    /* INLINE_REGION_END
                       INLINE_REGION_START: new_biome_modifier */
    if (bVar5) {
      lVar11 = (longlong)w.n_biome_modifiers;
      goto LAB_1401092e9;
    }
  }
  else {
    lVar11 = 0;
LAB_1401092e9:
    uVar16 = w.field140_0x3f30.biome_modifiers;
    pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
    pbVar4->creature_fn = (void *)0x0;
    (&pbVar4->creature_fn)[1] = (void *)0x0;
    ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
    ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
    w.n_biome_modifiers = w.n_biome_modifiers + 1;
  }
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_lava";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = biome_lava;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_cold";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = biome_cold;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_dark";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = biome_darkness;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_small";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->creature_fn = biome_small;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_big";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->creature_fn = biome_big;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_lightning";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = biome_lightning;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_xp";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->creature_fn = biome_bonus_xp;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_safe";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = biome_safe;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->creature_fn = biome_safe_creature;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.005;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_anger";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->creature_fn = biome_anger;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
                    /* INLINE_REGION_START: new_biome_modifier */
  lVar11 = (longlong)w.max_biome_modifiers;
  if (w.max_biome_modifiers <= w.n_biome_modifiers) {
    w.max_biome_modifiers = w.max_biome_modifiers * 2;
    expand_memory(&w.field140_0x3f30.biome_modifiers_memory,lVar11 << 6);
  }
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  pbVar4 = w.field140_0x3f30.biome_modifiers + lVar11;
  pbVar4->creature_fn = (void *)0x0;
  (&pbVar4->creature_fn)[1] = (void *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->id = (char *)0x0;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = (void *)0x0;
  uVar16 = w.field140_0x3f30.biome_modifiers;
  lVar11 = (longlong)w.n_biome_modifiers;
  w.n_biome_modifiers = w.n_biome_modifiers + 1;
                    /* INLINE_REGION_END */
  w.field140_0x3f30.biome_modifiers[lVar11].id = "biome_modifier_flow";
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->generation_fn = biome_flow;
  ((biome_modifier *)(uVar16 + lVar11 * 0x20))->chance = 0.01;
  w.n_biome_types = 0;
                    /* INLINE_REGION_START: new_biome_type */
  lVar11 = (longlong)w.max_biome_types;
  if (lVar11 < 1) {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) {
      lVar11 = (longlong)w.n_biome_types;
      goto LAB_140109869;
    }
    new_biome_type = (biome_type *)0x0;
  }
  else {
    lVar11 = 0;
LAB_140109869:
    memset(w.field137_0x3f10.biome_types + lVar11,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
                    /* INLINE_REGION_END */
  uVar6 = str_to_id("NONE");
  new_biome_type->id = uVar6;
                    /* INLINE_REGION_START: new_biome_type */
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_1401098e7:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_1401098e7;
    new_biome_type = (biome_type *)0x0;
  }
                    /* INLINE_REGION_END */
  uVar6 = str_to_id("SAFE");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e6147ae3d4ccccd;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003e800000;
  new_biome_type->bumpyness = 2.0;
  new_biome_type->tracked = 1;
  new_biome_type->no_modifiers = 1;
  new_biome_type->flags = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->neighbor_amount = 0.02;
  new_biome_type->base_amount = 0.5;
                    /* INLINE_REGION_START: new_biome_type */
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010999d:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010999d;
    new_biome_type = (biome_type *)0x0;
  }
                    /* INLINE_REGION_END */
  uVar6 = str_to_id("STRT");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c54fdf43ca3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003c23d70a;
  new_biome_type->bumpyness = 5.0;
  new_biome_type->ambient_music_id = 3;
  new_biome_type->battle_music_id = 2;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->fbm_amount = 0.03;
  new_biome_type->fbm_base_frequency = 0.05;
  new_biome_type->fbm_octives = 4.0;
  new_biome_type->fbm_gain = 0.5;
  new_biome_type->neighbor_amount = 0.0;
  new_biome_type->base_amount = 0.02;
  new_biome_type->cell_chance = 0.5;
  new_biome_type->cell_max_neighbors = 1;
  uVar15 = (ulonglong)(uint)n_materials;
  if (0 < n_materials) {
    fVar17 = DAT_14020e3b4;
    fVar18 = DAT_14020e3b0;
    fVar19 = DAT_14020e3ac;
    fVar20 = DAT_14020e3a8;
    fVar21 = DAT_14020e3a4;
    fVar24 = DAT_14020e3a0;
    bVar5 = true;
    do {
      bVar3 = bVar5;
      if (0 < (int)uVar15) {
        lVar11 = 0x1c;
        lVar12 = 0;
        do {
          fVar23 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
          fVar22 = fVar23 * 0.25;
          if ((uVar6 == 0) || (fVar23 = fVar22, uVar6 < 2)) {
            uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
            if ((char)uVar6 < '\0') goto LAB_140109b91;
LAB_140109b2c:
            if ((uVar6 & 0x10) == 0) {
              if ((uVar6 & 1) == 0) {
                if ((uVar6 & 0x20) == 0) {
                  if ((uVar6 & 4) == 0) {
                    if (bVar3) {
                      fVar17 = fVar17 + fVar23;
                      DAT_14020e3b4 = fVar17;
                    }
                    else {
                      fVar23 = (fVar23 * 0.5) / fVar17;
LAB_140109c50:
                      iVar7 = (new_biome_type->pool).n_materials;
                      lVar13 = (longlong)iVar7;
                      (new_biome_type->pool).n_materials = iVar7 + 1;
                      (new_biome_type->pool).material_indices[lVar13] = (int)lVar12;
                      (new_biome_type->pool).material_cum_chances[lVar13] = fVar23;
                      if (0 < lVar13) {
                        (new_biome_type->pool).material_cum_chances[lVar13] =
                             fVar23 + (float)(new_biome_type->pool).material_indices[lVar13 + 0x7ff];
                      }
                    }
                  }
                  else {
                    if (!bVar3) {
                      fVar23 = (fVar23 * 0.1) / fVar18;
                      goto LAB_140109c50;
                    }
                    fVar18 = fVar18 + fVar23;
                    DAT_14020e3b0 = fVar18;
                  }
                }
                else {
                  if (!bVar3) {
                    fVar23 = (fVar23 * 0.1) / fVar19;
                    goto LAB_140109c50;
                  }
                  fVar19 = fVar19 + fVar23;
                  DAT_14020e3ac = fVar19;
                }
              }
              else {
                if (!bVar3) {
                  fVar23 = (fVar23 * 0.1) / fVar20;
                  goto LAB_140109c50;
                }
                fVar20 = fVar20 + fVar23;
                DAT_14020e3a8 = fVar20;
              }
            }
            else {
              if (!bVar3) {
                fVar23 = (fVar23 * 0.5) / fVar21;
                goto LAB_140109c50;
              }
              fVar21 = fVar21 + fVar23;
              DAT_14020e3a4 = fVar21;
            }
          }
          else {
            fVar23 = fVar22 * 0.1;
            uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
            if (-1 < (char)uVar6) goto LAB_140109b2c;
LAB_140109b91:
            if (!bVar3) {
              fVar23 = (fVar23 * 0.001) / fVar24;
              goto LAB_140109c50;
            }
            fVar24 = fVar24 + fVar23;
            DAT_14020e3a0 = fVar24;
          }
          lVar12 = lVar12 + 1;
          uVar15 = (ulonglong)n_materials;
          lVar11 = lVar11 + 0x120;
        } while (lVar12 < (longlong)uVar15);
      }
      bVar5 = false;
    } while (bVar3);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_140109cca:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_140109cca;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("DARK");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3c23d70a;
  new_biome_type->bumpyness = 2.0;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->fbm_amount = 0.1;
  new_biome_type->fbm_base_frequency = 0.1;
  new_biome_type->fbm_octives = 5.0;
  new_biome_type->fbm_gain = 0.5;
  new_biome_type->neighbor_amount = 0.01;
  new_biome_type->base_amount = 0.001;
  new_biome_type->cell_chance = 0.5;
  new_biome_type->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar17 = DAT_14020e3c8;
    fVar18 = DAT_14020e3c4;
    fVar19 = DAT_14020e3c0;
    fVar20 = DAT_14020e3bc;
    fVar21 = DAT_14020e3b8;
    do {
      fVar24 = *pfVar9;
      if (pfVar9[-1] == 0.0) {
        fVar24 = fVar24 * 0.5;
LAB_140109de4:
        fVar23 = pfVar9[-2];
        if (((uint)fVar23 & 2) == 0) goto LAB_140109e0a;
LAB_140109db0:
        fVar21 = fVar21 + fVar24;
        DAT_14020e3b8 = fVar21;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_140109de4;
        fVar24 = fVar24 * 0.5;
        fVar23 = pfVar9[-2];
        if (((uint)fVar23 & 2) != 0) goto LAB_140109db0;
LAB_140109e0a:
        if (((uint)fVar23 & 1) == 0) {
          if (((uint)fVar23 & 0x20) == 0) {
            if (((uint)fVar23 & 4) == 0) {
              fVar17 = fVar17 + fVar24;
              DAT_14020e3c8 = fVar17;
            }
            else {
              fVar18 = fVar18 + fVar24;
              DAT_14020e3c4 = fVar18;
            }
          }
          else {
            fVar19 = fVar19 + fVar24;
            DAT_14020e3c0 = fVar19;
          }
        }
        else {
          fVar20 = fVar20 + fVar24;
          DAT_14020e3bc = fVar20;
        }
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar24 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if (uVar6 == 0) {
        fVar24 = fVar24 * 0.5;
      }
      if (1 < uVar6) {
        fVar24 = fVar24 * 0.5;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (new_biome_type->pool).n_materials;
      (new_biome_type->pool).n_materials = iVar7 + 1;
      (new_biome_type->pool).material_indices[iVar7] = (int)lVar12;
      if ((uVar6 & 2) == 0) {
        if ((uVar6 & 1) == 0) {
          if ((uVar6 & 0x20) == 0) {
            if ((uVar6 & 4) == 0) {
              fVar24 = (fVar24 * 0.2) / fVar17;
              (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
            }
            else {
              fVar24 = (fVar24 * 0.05) / fVar18;
              (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
            }
          }
          else {
            fVar24 = (fVar24 * 0.25) / fVar19;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
        }
        else {
          fVar24 = (fVar24 * 0.05) / fVar20;
          (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
        }
      }
      else {
        fVar24 = (fVar24 * 0.5) / fVar21;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      if (0 < iVar7) {
        (new_biome_type->pool).material_cum_chances[iVar7] =
             fVar24 + (float)(new_biome_type->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010a000:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010a000;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ICEE");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3ba3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003c75c28f;
  new_biome_type->bumpyness = 7.0;
  new_biome_type->temperature = -1.0;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.2;
  new_biome_type->fbm_amount = 0.05;
  new_biome_type->fbm_base_frequency = 0.01;
  new_biome_type->fbm_octives = 5.0;
  new_biome_type->fbm_gain = 0.5;
  new_biome_type->neighbor_amount = 0.02;
  new_biome_type->base_amount = 0.01;
  new_biome_type->ambient_music_id = 5;
  new_biome_type->battle_music_id = 4;
  new_biome_type->cell_chance = 0.8;
  new_biome_type->cell_max_neighbors = 1;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar17 = DAT_14020e3dc;
    fVar18 = DAT_14020e3d8;
    fVar19 = DAT_14020e3d4;
    fVar20 = DAT_14020e3d0;
    fVar21 = DAT_14020e3cc;
    do {
      fVar24 = *pfVar9;
      fVar23 = fVar24 * 0.5;
      if ((pfVar9[-1] == 0.0) || (fVar23 = fVar24, (uint)pfVar9[-1] < 2)) {
        fVar24 = pfVar9[-2];
        if (SUB41(fVar24,0) < '\0') goto LAB_14010a110;
LAB_14010a180:
        if (((uint)fVar24 & 1) == 0) {
          if (((uint)fVar24 & 0x20) == 0) {
            if (((uint)fVar24 & 4) == 0) {
              fVar17 = fVar17 + fVar23;
              DAT_14020e3dc = fVar17;
            }
            else {
              fVar18 = fVar18 + fVar23;
              DAT_14020e3d8 = fVar18;
            }
          }
          else {
            fVar19 = fVar19 + fVar23;
            DAT_14020e3d4 = fVar19;
          }
        }
        else {
          fVar20 = fVar20 + fVar23;
          DAT_14020e3d0 = fVar20;
        }
      }
      else {
        fVar23 = fVar24 * 0.1;
        fVar24 = pfVar9[-2];
        if (-1 < SUB41(fVar24,0)) goto LAB_14010a180;
LAB_14010a110:
        fVar21 = fVar21 + fVar23;
        DAT_14020e3cc = fVar21;
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar24 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      fVar23 = fVar24 * 0.5;
      if (uVar6 != 0) {
        fVar23 = fVar24;
      }
      fVar24 = fVar23 * 0.1;
      if (uVar6 < 2) {
        fVar24 = fVar23;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (new_biome_type->pool).n_materials;
      (new_biome_type->pool).n_materials = iVar7 + 1;
      (new_biome_type->pool).material_indices[iVar7] = (int)lVar12;
      if ((char)uVar6 < '\0') {
        fVar24 = (fVar24 * 0.01) / fVar21;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar24 = (fVar24 * 0.5) / fVar17;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
          else {
            fVar24 = (fVar24 * 0.05) / fVar18;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
        }
        else {
          fVar24 = (fVar24 * 0.25) / fVar19;
          (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
        }
      }
      else {
        fVar24 = (fVar24 * 0.1) / fVar20;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      if (0 < iVar7) {
        (new_biome_type->pool).material_cum_chances[iVar7] =
             fVar24 + (float)(new_biome_type->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010a390:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010a390;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ICON");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3ba3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003c75c28f;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->min_value = 1.0;
  new_biome_type->ambient_music_id = 5;
  new_biome_type->battle_music_id = 4;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010a42c:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010a42c;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FIRE");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3c75c28f;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333ba3d70a;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->temperature = 1.0;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.3;
  new_biome_type->fbm_amount = 0.2;
  new_biome_type->fbm_base_frequency = 0.2;
  new_biome_type->fbm_octives = 4.0;
  new_biome_type->fbm_gain = 1.0;
  new_biome_type->neighbor_amount = 0.05;
  new_biome_type->base_amount = 0.03;
  new_biome_type->ambient_music_id = 7;
  new_biome_type->battle_music_id = 6;
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
  iVar2 = new_biome_type->n_modifiers;
  new_biome_type->n_modifiers = iVar2 + 1;
  new_biome_type->modifiers[iVar2] = iVar7;
  new_biome_type->cell_chance = 0.5;
  new_biome_type->cell_max_neighbors = 6;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar17 = DAT_14020e3f0;
    fVar18 = DAT_14020e3ec;
    fVar19 = DAT_14020e3e8;
    fVar20 = DAT_14020e3e4;
    fVar21 = DAT_14020e3e0;
    do {
      fVar24 = *pfVar9;
      if (pfVar9[-1] == 0.0) {
        fVar24 = fVar24 * 0.5;
LAB_14010a5e4:
        fVar23 = pfVar9[-2];
        if (-1 < SUB41(fVar23,0)) goto LAB_14010a609;
LAB_14010a5b0:
        fVar21 = fVar21 + fVar24;
        DAT_14020e3e0 = fVar21;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_14010a5e4;
        fVar24 = fVar24 * 0.5;
        fVar23 = pfVar9[-2];
        if (SUB41(fVar23,0) < '\0') goto LAB_14010a5b0;
LAB_14010a609:
        if (((uint)fVar23 & 1) == 0) {
          if (((uint)fVar23 & 0x20) == 0) {
            if (((uint)fVar23 & 4) == 0) {
              fVar17 = fVar17 + fVar24;
              DAT_14020e3f0 = fVar17;
            }
            else {
              fVar18 = fVar18 + fVar24;
              DAT_14020e3ec = fVar18;
            }
          }
          else {
            fVar19 = fVar19 + fVar24;
            DAT_14020e3e8 = fVar19;
          }
        }
        else {
          fVar20 = fVar20 + fVar24;
          DAT_14020e3e4 = fVar20;
        }
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar24 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if (uVar6 == 0) {
        fVar24 = fVar24 * 0.5;
      }
      if (1 < uVar6) {
        fVar24 = fVar24 * 0.5;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (new_biome_type->pool).n_materials;
      (new_biome_type->pool).n_materials = iVar7 + 1;
      (new_biome_type->pool).material_indices[iVar7] = (int)lVar12;
      if ((char)uVar6 < '\0') {
        fVar24 = (fVar24 * 0.01) / fVar21;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar24 = (fVar24 * 0.5) / fVar17;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
          else {
            fVar24 = (fVar24 * 0.05) / fVar18;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
        }
        else {
          fVar24 = (fVar24 * 0.25) / fVar19;
          (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
        }
      }
      else {
        fVar24 = (fVar24 * 0.1) / fVar20;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      if (0 < iVar7) {
        (new_biome_type->pool).material_cum_chances[iVar7] =
             fVar24 + (float)(new_biome_type->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010a810:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010a810;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FCON");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3c75c28f;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333ba3d70a;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->min_value = 1.0;
  new_biome_type->ambient_music_id = 7;
  new_biome_type->battle_music_id = 6;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010a8ac:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010a8ac;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FENT");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3c75c28f;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333ba3d70a;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->noise_amount = 0.3;
  new_biome_type->neighbor_amount = 0.05;
  new_biome_type->base_amount = 0.2;
  new_biome_type->ambient_music_id = 7;
  new_biome_type->battle_music_id = 6;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010a955:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010a955;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("TUTR");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c54fdf43ca3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003c23d70a;
  new_biome_type->bumpyness = 5.0;
  new_biome_type->base_amount = 1.0;
  new_biome_type->ambient_music_id = 3;
  new_biome_type->battle_music_id = 2;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010a9f1:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010a9f1;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("BOSS");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c54fdf43ca3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003c23d70a;
  new_biome_type->bumpyness = 5.0;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->fbm_amount = 0.1;
  new_biome_type->fbm_base_frequency = 0.05;
  new_biome_type->fbm_octives = 4.0;
  new_biome_type->fbm_gain = 0.5;
  new_biome_type->neighbor_fbm = 0.05;
  new_biome_type->neighbor_amount = 0.0;
  new_biome_type->base_amount = 0.02;
  new_biome_type->cell_chance = 1.0;
  new_biome_type->cell_max_neighbors = 1;
  if (0 < n_materials) {
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      if (0.0 < *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20)) {
        iVar7 = (new_biome_type->pool).n_materials;
        lVar13 = (longlong)iVar7;
        (new_biome_type->pool).n_materials = iVar7 + 1;
        (new_biome_type->pool).material_indices[lVar13] = (int)lVar12;
        (new_biome_type->pool).material_cum_chances[lVar13] = 1.0;
        if (0 < lVar13) {
          (new_biome_type->pool).material_cum_chances[lVar13] =
               (float)(new_biome_type->pool).material_indices[lVar13 + 0x7ff] + 1.0;
        }
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010ab2b:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010ab2b;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("ECON");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333c23d70a;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->min_value = 1.0;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010abc9:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010abc9;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("TOXC");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e4ccccd3e19999a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3e99999a3ca3d70a;
  new_biome_type->bumpyness = 5.0;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->fbm_amount = 0.03;
  new_biome_type->fbm_base_frequency = 0.05;
  new_biome_type->fbm_octives = 4.0;
  new_biome_type->fbm_gain = 0.5;
  new_biome_type->neighbor_amount = 0.05;
  new_biome_type->base_amount = 0.02;
  new_biome_type->cell_chance = 0.65;
  new_biome_type->cell_max_neighbors = 3;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar17 = DAT_14020e400;
    fVar18 = DAT_14020e3fc;
    fVar19 = DAT_14020e3f8;
    fVar20 = DAT_14020e3f4;
    do {
      fVar21 = *pfVar9;
      if ((pfVar9[-1] == 0.0) || (fVar21 = fVar21 * 0.1, (uint)pfVar9[-1] < 2)) {
        fVar24 = pfVar9[-2];
        cVar10 = SUB41(fVar24,0);
      }
      else {
        fVar21 = fVar21 * 0.1;
        fVar24 = pfVar9[-2];
        cVar10 = SUB41(fVar24,0);
      }
      if (-1 < cVar10) {
        if (((uint)fVar24 & 1) == 0) {
          if (((uint)fVar24 & 4) == 0) {
            if (((uint)fVar24 & 0x20) == 0) {
              fVar17 = fVar17 + fVar21;
              DAT_14020e400 = fVar17;
            }
            else {
              fVar18 = fVar18 + fVar21;
              DAT_14020e3fc = fVar18;
            }
          }
          else {
            fVar19 = fVar19 + fVar21;
            DAT_14020e3f8 = fVar19;
          }
        }
        else {
          fVar20 = fVar20 + fVar21;
          DAT_14020e3f4 = fVar20;
        }
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar21 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if ((uVar6 == 0) || (fVar21 = fVar21 * 0.1, uVar6 < 2)) {
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        cVar10 = (char)uVar6;
      }
      else {
        fVar21 = fVar21 * 0.1;
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        cVar10 = (char)uVar6;
      }
      if (-1 < cVar10) {
        if ((uVar6 & 1) == 0) {
          if ((uVar6 & 4) == 0) {
            if ((uVar6 & 0x20) == 0) {
              fVar21 = (fVar21 * 0.5) / fVar17;
            }
            else {
              fVar21 = fVar21 / fVar18;
            }
          }
          else {
            fVar21 = fVar21 / fVar19;
          }
        }
        else {
          fVar21 = (fVar21 * 0.1) / fVar20;
        }
        iVar7 = (new_biome_type->pool).n_materials;
        lVar13 = (longlong)iVar7;
        (new_biome_type->pool).n_materials = iVar7 + 1;
        (new_biome_type->pool).material_indices[lVar13] = (int)lVar12;
        (new_biome_type->pool).material_cum_chances[lVar13] = fVar21;
        if (0 < lVar13) {
          (new_biome_type->pool).material_cum_chances[lVar13] =
               fVar21 + (float)(new_biome_type->pool).material_indices[lVar13 + 0x7ff];
        }
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010ae69:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010ae69;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("GYRE");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003c23d70a;
  new_biome_type->bumpyness = 2.0;
  new_biome_type->tracked = 1;
  new_biome_type->no_modifiers = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->neighbor_amount = 0.0;
  new_biome_type->base_amount = 0.1;
  new_biome_type->min_value = 0.01;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010af1f:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010af1f;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JNGL");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  new_biome_type->bumpyness = 10.0;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.3;
  new_biome_type->fbm_amount = -0.2;
  new_biome_type->fbm_base_frequency = 0.02;
  new_biome_type->fbm_octives = 4.0;
  new_biome_type->fbm_gain = 1.0;
  new_biome_type->neighbor_fbm = 0.04;
  new_biome_type->neighbor_amount = -0.03;
  new_biome_type->base_amount = 0.01;
  new_biome_type->ambient_music_id = 9;
  new_biome_type->battle_music_id = 8;
  new_biome_type->cell_chance = 0.3;
  new_biome_type->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar17 = DAT_14020e414;
    fVar18 = DAT_14020e410;
    fVar19 = DAT_14020e40c;
    fVar20 = DAT_14020e408;
    fVar21 = DAT_14020e404;
    do {
      fVar24 = *pfVar9 * 0.5;
      if (pfVar9[-1] != 0.0) {
        fVar24 = *pfVar9;
      }
      fVar23 = pfVar9[-2];
      if (SUB41(fVar23,0) < '\0') {
        fVar21 = fVar21 + fVar24;
        DAT_14020e404 = fVar21;
      }
      else if (((uint)fVar23 & 1) == 0) {
        if (((uint)fVar23 & 0x20) == 0) {
          if (((uint)fVar23 & 4) == 0) {
            fVar17 = fVar17 + fVar24;
            DAT_14020e414 = fVar17;
          }
          else {
            fVar18 = fVar18 + fVar24;
            DAT_14020e410 = fVar18;
          }
        }
        else {
          fVar19 = fVar19 + fVar24;
          DAT_14020e40c = fVar19;
        }
      }
      else {
        fVar20 = fVar20 + fVar24;
        DAT_14020e408 = fVar20;
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar24 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      fVar23 = fVar24 * 0.5;
      if (*(int *)((longlong)materials_list->spawn_with + lVar11 + -0x24) != 0) {
        fVar23 = fVar24;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (new_biome_type->pool).n_materials;
      (new_biome_type->pool).n_materials = iVar7 + 1;
      (new_biome_type->pool).material_indices[iVar7] = (int)lVar12;
      if ((char)uVar6 < '\0') {
        fVar24 = (fVar23 * 0.01) / fVar21;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar24 = (fVar23 * 0.3) / fVar17;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
          else {
            fVar24 = (fVar23 * 0.05) / fVar18;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
        }
        else {
          fVar24 = (fVar23 * 0.25) / fVar19;
          (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
        }
      }
      else {
        fVar24 = (fVar23 * 0.1) / fVar20;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      if (0 < iVar7) {
        (new_biome_type->pool).material_cum_chances[iVar7] =
             fVar24 + (float)(new_biome_type->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010b240:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010b240;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JBOS");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  new_biome_type->bumpyness = 10.0;
  new_biome_type->noise_amount = 0.3;
  new_biome_type->fbm_amount = -0.2;
  new_biome_type->fbm_base_frequency = 0.02;
  new_biome_type->fbm_octives = 4.0;
  new_biome_type->fbm_gain = 1.0;
  new_biome_type->neighbor_fbm = 0.04;
  new_biome_type->neighbor_amount = -0.03;
  new_biome_type->base_amount = 0.1;
  new_biome_type->ambient_music_id = 9;
  new_biome_type->battle_music_id = 8;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010b2e7:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010b2e7;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("JCON");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3be56042;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->min_value = 1.0;
  new_biome_type->ambient_music_id = 9;
  new_biome_type->battle_music_id = 8;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010b389:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010b389;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("MEAT");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3a83126f3ba3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->custom_cell_spawning = 1;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.3;
  new_biome_type->fbm_amount = -0.2;
  new_biome_type->fbm_base_frequency = 0.02;
  new_biome_type->fbm_octives = 4.0;
  new_biome_type->fbm_gain = 1.0;
  new_biome_type->neighbor_fbm = 0.04;
  new_biome_type->neighbor_amount = -0.03;
  new_biome_type->base_amount = 0.1;
  new_biome_type->ambient_music_id = 0xb;
  new_biome_type->battle_music_id = 10;
  new_biome_type->cell_chance = 0.3;
  new_biome_type->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar17 = DAT_14020e428;
    fVar18 = DAT_14020e424;
    fVar19 = DAT_14020e420;
    fVar20 = DAT_14020e41c;
    fVar21 = DAT_14020e418;
    do {
      fVar24 = *pfVar9 * 0.5;
      if (pfVar9[-1] != 0.0) {
        fVar24 = *pfVar9;
      }
      fVar23 = pfVar9[-2];
      if (SUB41(fVar23,0) < '\0') {
        fVar21 = fVar21 + fVar24;
        DAT_14020e418 = fVar21;
      }
      else if (((uint)fVar23 & 1) == 0) {
        if (((uint)fVar23 & 0x20) == 0) {
          if (((uint)fVar23 & 4) == 0) {
            fVar17 = fVar17 + fVar24;
            DAT_14020e428 = fVar17;
          }
          else {
            fVar18 = fVar18 + fVar24;
            DAT_14020e424 = fVar18;
          }
        }
        else {
          fVar19 = fVar19 + fVar24;
          DAT_14020e420 = fVar19;
        }
      }
      else {
        fVar20 = fVar20 + fVar24;
        DAT_14020e41c = fVar20;
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar24 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      fVar23 = fVar24 * 0.5;
      if (*(int *)((longlong)materials_list->spawn_with + lVar11 + -0x24) != 0) {
        fVar23 = fVar24;
      }
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
      iVar7 = (new_biome_type->pool).n_materials;
      (new_biome_type->pool).n_materials = iVar7 + 1;
      (new_biome_type->pool).material_indices[iVar7] = (int)lVar12;
      if ((char)uVar6 < '\0') {
        fVar24 = (fVar23 * 0.01) / fVar21;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      else if ((uVar6 & 1) == 0) {
        if ((uVar6 & 0x20) == 0) {
          if ((uVar6 & 4) == 0) {
            fVar24 = (fVar23 * 0.3) / fVar17;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
          else {
            fVar24 = (fVar23 * 0.05) / fVar18;
            (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
          }
        }
        else {
          fVar24 = (fVar23 * 0.25) / fVar19;
          (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
        }
      }
      else {
        fVar24 = (fVar23 * 0.1) / fVar20;
        (new_biome_type->pool).material_cum_chances[iVar7] = fVar24;
      }
      if (0 < iVar7) {
        (new_biome_type->pool).material_cum_chances[iVar7] =
             fVar24 + (float)(new_biome_type->pool).material_indices[(longlong)iVar7 + 0x7ff];
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x120;
    } while (lVar12 < n_materials);
  }
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010b6a0:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010b6a0;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("MCON");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3a83126f3ba3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f8000003a83126f;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->min_value = 1.0;
  new_biome_type->ambient_music_id = 0xb;
  new_biome_type->battle_music_id = 10;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010b73c:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010b73c;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("NCON");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3a83126f3a83126f;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003a83126f;
  new_biome_type->bumpyness = 1.0;
  new_biome_type->min_value = 1.0;
  new_biome_type->ambient_music_id = 0xd;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010b7e1:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010b7e1;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("FINN");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ba3d70a3ba3d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003ba3d70a;
  new_biome_type->bumpyness = 1.0;
  new_biome_type->tracked = 1;
  new_biome_type->base_amount = 0.5;
  new_biome_type->ambient_music_id = 0xd;
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010b88a:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010b88a;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("BUZZ");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ca3d70a3c23d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f4ccccd3cf5c28f;
  new_biome_type->bumpyness = 3.0;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->fbm_amount = 0.1;
  new_biome_type->fbm_base_frequency = 0.1;
  new_biome_type->fbm_octives = 5.0;
  new_biome_type->fbm_gain = 0.5;
  new_biome_type->neighbor_fbm = 0.04;
  new_biome_type->neighbor_amount = 0.04;
  new_biome_type->base_amount = 0.001;
  lVar11 = (longlong)w.n_biome_modifiers;
  iVar7 = 0;
  if (1 < lVar11) {
    lVar12 = 1;
    uVar16 = w.field140_0x3f30.biome_modifiers;
    do {
      uVar16 = uVar16 + 0x20;
      if ((((biome_modifier *)uVar16)->id != (char *)0x0) &&
         (iVar7 = strncmp("biome_modifier_lightning",((biome_modifier *)uVar16)->id,0x19),
         iVar7 == 0)) {
        iVar7 = (int)lVar12;
        break;
      }
      lVar12 = lVar12 + 1;
      iVar7 = 0;
    } while (lVar11 != lVar12);
  }
  iVar2 = new_biome_type->n_modifiers;
  new_biome_type->n_modifiers = iVar2 + 1;
  new_biome_type->modifiers[iVar2] = iVar7;
  new_biome_type->cell_chance = 0.7;
  new_biome_type->cell_max_neighbors = 6;
  uVar15 = (ulonglong)(uint)n_materials;
  fVar17 = DAT_14020e42c;
  fVar18 = DAT_14020e430;
  fVar19 = DAT_14020e434;
  fVar20 = DAT_14020e438;
  fVar21 = DAT_14020e43c;
  fVar24 = DAT_14020e440;
  bVar5 = true;
  do {
    bVar3 = bVar5;
    if (0 < (int)uVar15) {
      lVar11 = 0x1c;
      lVar12 = 0;
      do {
        fVar23 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
        if (uVar6 == 0) {
          fVar23 = fVar23 * 0.5;
LAB_14010ba40:
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
          if (-1 < (char)uVar6) goto LAB_14010ba4a;
LAB_14010baaa:
          if (!bVar3) {
            fVar23 = (fVar23 * 0.01) / fVar17;
            goto LAB_14010bb60;
          }
          fVar17 = fVar17 + fVar23;
          DAT_14020e42c = fVar17;
        }
        else {
          if (uVar6 < 2) goto LAB_14010ba40;
          fVar23 = fVar23 * 0.5;
          uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
          if ((char)uVar6 < '\0') goto LAB_14010baaa;
LAB_14010ba4a:
          if ((uVar6 & 1) == 0) {
            if ((uVar6 & 0x20) == 0) {
              if ((uVar6 & 2) == 0) {
                if ((uVar6 & 4) == 0) {
                  if (bVar3) {
                    fVar24 = fVar24 + fVar23;
                    DAT_14020e440 = fVar24;
                  }
                  else {
                    fVar23 = (fVar23 * 0.25) / fVar24;
LAB_14010bb60:
                    iVar7 = (new_biome_type->pool).n_materials;
                    lVar13 = (longlong)iVar7;
                    (new_biome_type->pool).n_materials = iVar7 + 1;
                    (new_biome_type->pool).material_indices[lVar13] = (int)lVar12;
                    (new_biome_type->pool).material_cum_chances[lVar13] = fVar23;
                    if (0 < lVar13) {
                      (new_biome_type->pool).material_cum_chances[lVar13] =
                           fVar23 + (float)(new_biome_type->pool).material_indices[lVar13 + 0x7ff];
                    }
                  }
                }
                else {
                  if (!bVar3) {
                    fVar23 = (fVar23 * 0.5) / fVar21;
                    goto LAB_14010bb60;
                  }
                  fVar21 = fVar21 + fVar23;
                  DAT_14020e43c = fVar21;
                }
              }
              else {
                if (!bVar3) {
                  fVar23 = (fVar23 * 0.8) / fVar20;
                  goto LAB_14010bb60;
                }
                fVar20 = fVar20 + fVar23;
                DAT_14020e438 = fVar20;
              }
            }
            else {
              if (!bVar3) {
                fVar23 = fVar23 / fVar19;
                goto LAB_14010bb60;
              }
              fVar19 = fVar19 + fVar23;
              DAT_14020e434 = fVar19;
            }
          }
          else {
            if (!bVar3) {
              fVar23 = (fVar23 * 0.5) / fVar18;
              goto LAB_14010bb60;
            }
            fVar18 = fVar18 + fVar23;
            DAT_14020e430 = fVar18;
          }
        }
        lVar12 = lVar12 + 1;
        uVar15 = (ulonglong)n_materials;
        lVar11 = lVar11 + 0x120;
      } while (lVar12 < (longlong)uVar15);
    }
    bVar5 = false;
  } while (bVar3);
  lVar11 = (longlong)w.max_biome_types;
  if (w.n_biome_types < w.max_biome_types) {
LAB_14010bbda:
    memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
    lVar11 = (longlong)w.n_biome_types;
    w.n_biome_types = w.n_biome_types + 1;
    new_biome_type = w.field137_0x3f10.biome_types + lVar11;
  }
  else {
    w.max_biome_types = w.max_biome_types * 2;
    bVar5 = expand_memory(&w.field137_0x3f10.biome_types_memory,lVar11 * 0xb958);
    if (bVar5) goto LAB_14010bbda;
    new_biome_type = (biome_type *)0x0;
  }
  uVar6 = str_to_id("NEST");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d4ccccd;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f0000003ca3d70a;
  new_biome_type->bumpyness = 2.0;
  new_biome_type->tracked = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->fbm_amount = 0.1;
  new_biome_type->fbm_base_frequency = 0.1;
  new_biome_type->fbm_octives = 5.0;
  new_biome_type->fbm_gain = 0.5;
  new_biome_type->neighbor_amount = 0.01;
  new_biome_type->base_amount = 0.001;
  new_biome_type->cell_chance = 0.5;
  new_biome_type->cell_max_neighbors = 2;
  if (0 < (longlong)n_materials) {
    pfVar9 = &materials_list->drop_weight;
    uVar15 = 0;
    fVar17 = DAT_14020e44c;
    fVar18 = DAT_14020e448;
    fVar19 = DAT_14020e444;
    do {
      fVar20 = *pfVar9;
      if (pfVar9[-1] == 0.0) {
        fVar20 = fVar20 * 0.5;
LAB_14010bcce:
        fVar21 = pfVar9[-2];
        if (-1 < SUB41(fVar21,0)) goto LAB_14010bcf9;
LAB_14010bca0:
        fVar19 = fVar19 + fVar20;
        DAT_14020e444 = fVar19;
      }
      else {
        if ((uint)pfVar9[-1] < 2) goto LAB_14010bcce;
        fVar20 = fVar20 * 0.5;
        fVar21 = pfVar9[-2];
        if (SUB41(fVar21,0) < '\0') goto LAB_14010bca0;
LAB_14010bcf9:
        if (((uint)fVar21 & 8) == 0) {
          fVar17 = fVar17 + fVar20;
          DAT_14020e44c = fVar17;
        }
        else {
          fVar18 = fVar18 + fVar20;
          DAT_14020e448 = fVar18;
        }
      }
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0x48;
    } while (uVar15 < (ulonglong)(longlong)n_materials);
    lVar11 = 0x1c;
    lVar12 = 0;
    do {
      fVar20 = *(float *)((longlong)materials_list->spawn_with + lVar11 + -0x20);
      uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x24);
      if (uVar6 == 0) {
        fVar20 = fVar20 * 0.5;
LAB_14010bd65:
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        if (-1 < (char)uVar6) goto LAB_14010bd6d;
LAB_14010bd98:
        fVar20 = (fVar20 * 0.01) / fVar19;
      }
      else {
        if (uVar6 < 2) goto LAB_14010bd65;
        fVar20 = fVar20 * 0.5;
        uVar6 = *(uint *)((longlong)materials_list->spawn_with + lVar11 + -0x28);
        if ((char)uVar6 < '\0') goto LAB_14010bd98;
LAB_14010bd6d:
        if ((uVar6 & 8) == 0) {
          fVar20 = (fVar20 * 0.1) / fVar17;
        }
        else {
          fVar20 = fVar20 / fVar18;
        }
      }
      iVar7 = (new_biome_type->pool).n_materials;
      lVar13 = (longlong)iVar7;
      (new_biome_type->pool).n_materials = iVar7 + 1;
      (new_biome_type->pool).material_indices[lVar13] = (int)lVar12;
      (new_biome_type->pool).material_cum_chances[lVar13] = fVar20;
      if (0 < lVar13) {
        (new_biome_type->pool).material_cum_chances[lVar13] =
             fVar20 + (float)(new_biome_type->pool).material_indices[lVar13 + 0x7ff];
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
      new_biome_type = (biome_type *)0x0;
      goto LAB_14010be6a;
    }
  }
  memset(w.field137_0x3f10.biome_types + w.n_biome_types,0,0x5cac);
  lVar11 = (longlong)w.n_biome_types;
  w.n_biome_types = w.n_biome_types + 1;
  new_biome_type = w.field137_0x3f10.biome_types + lVar11;
LAB_14010be6a:
  uVar6 = str_to_id("RACE");
  new_biome_type->id = uVar6;
  (new_biome_type->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d23d70a3d23d70a;
  *(undefined8 *)((longlong)&(new_biome_type->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
       0x3f3333333d23d70a;
  new_biome_type->bumpyness = 0.5;
  new_biome_type->tracked = 1;
  new_biome_type->no_modifiers = 1;
  new_biome_type->noise_amount = 0.15;
  new_biome_type->neighbor_amount = 0.1;
  new_biome_type->base_amount = 0.02;
  new_biome_type->cell_chance = 0.0;
  new_biome_type->cell_max_neighbors = 2;
  pvVar8 = TlsGetValue(tls_index);
  uVar16 = *(undefined8 *)((longlong)pvVar8 + 0x70);
  lua_settop(uVar16,0);
  lua_getfield(uVar16,0xffffd8ee,&s_init_biomes);
  iVar7 = lua_type(uVar16,0xffffffff);
  if (iVar7 == 6) {
    iVar7 = lua_pcall(uVar16,0,0,0);
    if (iVar7 != 0) {
      param1 = (char *)lua_tolstring(uVar16,0xffffffff,0);
      log_printf("lua warning (init_biomes): %s\n",param1);
    }
    return;
  }
  lua_settop(uVar16,0xfffffffe);
  return;
}

