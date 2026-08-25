
/* struct biome_core * __ptr64 __cdecl create_biome_core(int,int) */

biome_core * __cdecl create_biome_core(int biome_index,int target_size)

{
  biome_core *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  biome_core *pbVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  
  pbVar4 = w.map.cores;
  lVar8 = (longlong)w.map.n_cores;
  w.map.n_cores = w.map.n_cores + 1;
  pbVar1 = w.map.cores + lVar8;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  *(undefined1 (*) [32])(w.map.cores[lVar8].modifiers + 10) = ZEXT1632(auVar12);
  *(undefined1 (*) [32])(pbVar4[lVar8].modifiers + 2) = ZEXT1632(auVar12);
  auVar13 = ZEXT1632(auVar12);
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].entrance_points[0x1e].field0_0x0 + 4) = auVar13;
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].entrance_points[0x1a].field0_0x0 + 4) = auVar13;
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].entrance_points[0x16].field0_0x0 + 4) = auVar13;
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].entrance_points[0x12].field0_0x0 + 4) = auVar13;
  auVar13 = ZEXT1632(auVar12);
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].entrance_points[0xe].field0_0x0 + 4) = auVar13;
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].entrance_points[10].field0_0x0 + 4) = auVar13;
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].entrance_points[6].field0_0x0 + 4) = auVar13;
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].entrance_points[2].field0_0x0 + 4) = auVar13;
  *(undefined1 (*) [32])((longlong)&pbVar4[lVar8].bounds.l.field0_0x0 + 4) = auVar13;
  *(undefined1 (*) [32])(pbVar4 + lVar8) = auVar13;
  *(undefined8 *)&pbVar4[lVar8].field_0x180 = 0;
  iVar6 = get_biome_index(biome_index);
  pbVar4[lVar8].biome_index = iVar6;
  pbVar4[lVar8].target_size = target_size;
  uVar5 = w.field137_0x3f10.biome_types;
  iVar3 = w.field137_0x3f10.biome_types[iVar6].n_modifiers;
  pbVar4[lVar8].n_default_modifiers = iVar3;
  pbVar4[lVar8].n_modifiers = iVar3;
  memcpy(pbVar4[lVar8].modifiers,((biome_type *)(uVar5 + (longlong)iVar6 * 0x5cac))->modifiers,
         (longlong)iVar3);
  if ((((biome_type *)(uVar5 + (longlong)iVar6 * 0x5cac))->tracked == 1 &&
       ((biome_type *)(uVar5 + (longlong)iVar6 * 0x5cac))->no_modifiers == 0) &&
     (1 < w.n_biome_modifiers)) {
                    /* INLINE_REGION_START: map_derive_seed */
    uVar7 = (biome_index + w.base_seed >> 0x10 ^ biome_index + w.base_seed) * 0x7feb352d;
    uVar7 = (uVar7 >> 0xf ^ uVar7) * -0x7b935975;
    uVar7 = (uVar7 >> 0x10 ^ uVar7) + target_size;
    uVar7 = (uVar7 >> 0x10 ^ uVar7) * 0x7feb352d;
    uVar7 = (uVar7 >> 0xf ^ uVar7) * -0x7b935975;
    uVar10 = (ulonglong)(uVar7 >> 0x10 ^ uVar7);
    lVar8 = 1;
    lVar9 = 0x38;
    do {
      uVar7 = ((uint)(uVar10 >> 0x10) ^ (uint)uVar10) * 0x7feb352d;
      uVar7 = uVar7 >> 0xf ^ uVar7;
      uVar11 = uVar7 * -0x7b935975;
      uVar10 = (ulonglong)(uVar11 >> 0x10 ^ uVar11);
      if ((float)uVar10 * 2.3283064e-10 <
          *(float *)((longlong)&(w.field140_0x3f30.biome_modifiers)->id + lVar9)) {
        uVar11 = pbVar1->n_modifiers;
        if ((ulonglong)uVar11 < 0x10) {
          pbVar1->n_modifiers = uVar11 + 1;
          pbVar1->modifiers[uVar11] = (int)lVar8;
        }
        uVar7 = uVar7 * -0x63d2f291;
        uVar7 = (uVar7 >> 0xf ^ uVar7) * -0x7b935975;
        uVar10 = (ulonglong)(uVar7 >> 0x10 ^ uVar7);
        if ((float)uVar10 * 2.3283064e-10 < 0.01) {
          uVar7 = pbVar1->n_modifiers;
          if ((ulonglong)uVar7 < 0x10) {
            pbVar1->n_modifiers = uVar7 + 1;
            pbVar1->modifiers[uVar7] = (int)lVar8;
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar8 < w.n_biome_modifiers);
  }
  return pbVar1;
}

