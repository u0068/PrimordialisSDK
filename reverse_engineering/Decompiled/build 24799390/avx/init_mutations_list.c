
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl init_mutations_list(void) */

void __cdecl init_mutations_list(void)

{
  float fVar1;
  int iVar2;
  __uint64 _Var3;
  mutation_type *pmVar4;
  material_t *pmVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  mutation_type *pmVar10;
  real_2_u_0 rVar11;
  real_2_u_0 rVar12;
  int_2 iVar13;
  longlong lVar14;
  real_2_u_0 rVar15;
  real_2_u_0 rVar16;
  undefined4 extraout_var;
  ulonglong uVar17;
  real_2_u_0 rVar18;
  undefined4 extraout_var_00;
  real_2_u_0 rVar19;
  real_2_u_0 rVar20;
  real_2_u_0 rVar21;
  undefined4 extraout_var_01;
  real_2_u_0 rVar22;
  real_2_u_0 rVar23;
  real_2_u_0 rVar24;
  real_2_u_0 rVar25;
  real_2_u_0 rVar26;
  real_2_u_0 rVar27;
  real_2_u_0 rVar28;
  real_2_u_0 rVar29;
  real_2_u_0 rVar30;
  real_2_u_0 rVar31;
  int_2_u_0 iVar32;
  real_2_u_0 rVar33;
  LPVOID pvVar34;
  uint uVar35;
  int iVar36;
  bool bVar37;
  uint uVar38;
  id_t_index *piVar39;
  int iVar40;
  undefined4 uVar43;
  float *pfVar41;
  float *pfVar42;
  ulonglong uVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [32];
  undefined1 extraout_var_02 [60];
  undefined1 extraout_var_03 [60];
  undefined1 extraout_var_04 [60];
  undefined1 extraout_var_09 [56];
  undefined1 extraout_var_05 [60];
  undefined1 extraout_var_06 [60];
  undefined1 extraout_var_07 [60];
  undefined1 extraout_var_08 [60];
  float fVar79;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  float fVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [64];
  undefined1 auVar129 [16];
  undefined1 auVar130 [64];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [64];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [64];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [64];
  undefined1 auVar143 [64];
  undefined1 auVar144 [16];
  undefined1 auVar145 [64];
  float fVar146;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [64];
  undefined1 auVar151 [64];
  undefined1 auVar152 [64];
  undefined1 auVar153 [16];
  undefined1 auVar154 [64];
  float local_228;
  float local_218;
  float local_1b8;
  float local_118;
  
                    /* INLINE_REGION_START: get_context */
  puVar9 = TlsGetValue(tls_index);
                    /* INLINE_REGION_END */
  iVar40 = next_icon_index;
  if (*puVar9 == 0) {
    if (mutations_list == (mutation_type *)0x0) {
      pmVar10 = (mutation_type *)dynamic_alloc(0x18000);
      uVar38 = *puVar9;
      iVar40 = next_icon_index;
    }
    else {
      uVar38 = *puVar9;
      pmVar10 = mutations_list;
    }
    n_mutation_types = 0;
    mutations_list = pmVar10;
    next_icon_index = iVar40;
    if (uVar38 == 0) {
      n_mutation_types = 1;
      auVar78 = ZEXT1232(ZEXT812(0));
      pmVar10->weight = (float)auVar78._0_4_;
      pmVar10->cum_weight = (float)auVar78._4_4_;
      pmVar10->uv = (real_2)auVar78._8_8_;
      pmVar10->extra_data_offset = auVar78._16_4_;
      pmVar10->n_imbues = auVar78._20_4_;
      *(longlong *)&pmVar10->field_0x28 = auVar78._24_8_;
      (pmVar10->id)._s_0.lo = 0x454e4f4e;
      (pmVar10->id)._s_0.hi = 0;
      pmVar10->weight = 0.0;
                    /* INLINE_REGION_START: get_icon_uv */
      iVar13 = get_icon_coords(iVar40);
      rVar11._s_0.y =
           ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) /
           (float)icon_texture.size.field0_0x0._s_0.y;
      rVar11._s_0.x =
           ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) /
           (float)icon_texture.size.field0_0x0._s_0.x;
      (pmVar10->uv).field0_0x0 = rVar11;
      pmVar10 = mutations_list;
                    /* INLINE_REGION_END */
      if (*puVar9 == 0) {
        lVar14 = (longlong)n_mutation_types;
        mut_chain_lightning_index = n_mutation_types;
        n_mutation_types = n_mutation_types + 1;
        pmVar4 = mutations_list + lVar14;
        auVar78 = ZEXT432(0) << 0x20;
        pmVar4->weight = (float)auVar78._0_4_;
        pmVar4->cum_weight = (float)auVar78._4_4_;
        pmVar4->uv = (real_2)auVar78._8_8_;
        pmVar4->extra_data_offset = auVar78._16_4_;
        pmVar4->n_imbues = auVar78._20_4_;
        *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
        pmVar10[lVar14].id._s_0.lo = 0x494c5f4e49414843;
        pmVar10[lVar14].id._s_0.hi = 0x474e494e544847;
        pmVar10[lVar14].weight = 1.0;
                    /* INLINE_REGION_START: get_icon_uv */
        auVar145 = ZEXT1664(SUB6416(ZEXT464(0x42800000),0));
        auVar150 = ZEXT1664(SUB6416(ZEXT464(0x3f000000),0));
        iVar13 = get_icon_coords(iVar40);
        rVar12._s_0.y =
             ((float)iVar13.field0_0x0._4_4_ + auVar145._0_4_ + auVar150._0_4_) /
             (float)icon_texture.size.field0_0x0._s_0.y;
        rVar12._s_0.x =
             ((float)iVar13.field0_0x0._0_4_ + auVar145._0_4_ + auVar150._0_4_) /
             (float)icon_texture.size.field0_0x0._s_0.x;
        pmVar10[lVar14].uv.field0_0x0 = rVar12;
      }
    }
  }
                    /* INLINE_REGION_END */
  iVar13 = get_icon_coords(iVar40);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    if ((int)uVar44 < (int)uVar7) {
      auVar150 = ZEXT1264(ZEXT812(0));
      auVar145 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      do {
        iVar36 = (int)uVar17;
        fVar146 = ((float)iVar36 + 0.5) * 0.015625 + -1.0 + 0.3;
        fVar55 = fVar146 * 3.2;
        auVar124 = vroundss_avx(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55),9);
        fVar88 = auVar124._0_4_;
        fVar79 = (fVar88 + 1.0) * 0.08;
        fVar55 = fVar55 - fVar88;
        uVar44 = 0;
        do {
          auVar130 = ZEXT464(0x40000000);
          fVar89 = ((float)uVar44 + 0.5) * 0.015625 + -1.0 + -0.05;
          fVar46 = cosf(fVar88 * 3.1415927);
          fVar47 = cosf((fVar88 + 1.0) * 3.1415927);
          fVar90 = 0.0;
          auVar124 = auVar130._0_16_;
          do {
            auVar130 = ZEXT1664(auVar124);
            fVar56 = fVar90 * 6.2831855 + 0.4;
            fVar48 = cosf(fVar56);
            fVar49 = sinf(fVar56);
            auVar59 = auVar145._0_16_;
            fVar52 = fVar48 * 0.2;
            fVar50 = fVar49 * 0.2;
            fVar53 = auVar150._0_4_;
            auVar124 = ZEXT416((uint)(fVar50 * fVar50 + fVar53 + fVar52 * fVar52));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            auVar134 = ZEXT1664(auVar124);
            fVar51 = auVar124._0_4_;
            fVar56 = fVar51 * fVar51 + -0.0025000002;
            if (fVar56 < fVar53) {
              fVar56 = sqrtf(fVar56);
              fVar53 = auVar150._0_4_;
              auVar59 = auVar145._0_16_;
              fVar51 = auVar134._0_4_;
            }
            else {
              auVar124 = vsqrtss_avx(ZEXT416((uint)fVar56),ZEXT416((uint)fVar56));
              fVar56 = auVar124._0_4_;
            }
            auVar60 = auVar130._0_16_;
            fVar107 = fVar52 * (1.0 / fVar51);
            fVar54 = fVar50 * (1.0 / fVar51);
            fVar51 = fVar89 * fVar107 + fVar146 * fVar54;
            fVar1 = fVar146 * fVar107 - fVar89 * fVar54;
            auVar124 = vandps_avx(auVar59,ZEXT416((uint)fVar1));
            auVar59 = ZEXT416((uint)(fVar56 * fVar56 + 0.0025000002));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar106 = 1.0 / auVar59._0_4_;
            fVar54 = fVar56 * fVar106;
            fVar106 = fVar106 * 0.05;
            fVar107 = auVar124._0_4_ * fVar106 + fVar51 * fVar54 + fVar53;
            if (fVar107 <= fVar53) {
              auVar124 = ZEXT416((uint)(fVar1 * fVar1 + fVar53 + fVar51 * fVar51));
              auVar124 = vsqrtss_avx(auVar124,auVar124);
              fVar56 = auVar124._0_4_;
            }
            else if (fVar56 <= fVar107) {
              auVar124 = ZEXT416((uint)((fVar146 - fVar50) * (fVar146 - fVar50) +
                                       fVar53 + (fVar89 - fVar52) * (fVar89 - fVar52)));
              auVar124 = vsqrtss_avx(auVar124,auVar124);
              fVar56 = auVar124._0_4_ + -0.05;
            }
            else {
              fVar56 = auVar124._0_4_ * fVar54 + fVar53 + fVar51 * -fVar106;
            }
            fVar48 = fVar48 * 0.5;
            auVar150 = ZEXT464((uint)fVar48);
            fVar49 = fVar49 * 0.5;
            auVar134 = ZEXT464((uint)fVar49);
            fVar107 = fVar52 - fVar48;
            fVar54 = fVar50 - fVar49;
            auVar124 = ZEXT416((uint)(fVar54 * fVar54 + fVar53 + fVar107 * fVar107));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            auVar145 = ZEXT1664(auVar124);
            fVar106 = auVar124._0_4_;
            fVar51 = fVar106 * fVar106 + -0.0025000002;
            if (fVar51 < fVar53) {
              fVar51 = sqrtf(fVar51);
              fVar48 = auVar150._0_4_;
              fVar49 = auVar134._0_4_;
              fVar106 = auVar145._0_4_;
              auVar60 = auVar130._0_16_;
            }
            else {
              auVar124 = vsqrtss_avx(ZEXT416((uint)fVar51),ZEXT416((uint)fVar51));
              fVar51 = auVar124._0_4_;
            }
            fVar107 = fVar107 * (1.0 / fVar106);
            fVar54 = fVar54 * (1.0 / fVar106);
            fVar53 = (fVar89 - fVar48) * fVar107 + (fVar146 - fVar49) * fVar54;
            fVar54 = (fVar146 - fVar49) * fVar107 - (fVar89 - fVar48) * fVar54;
            auVar124._8_4_ = 0x7fffffff;
            auVar124._0_8_ = 0x7fffffff7fffffff;
            auVar124._12_4_ = 0x7fffffff;
            auVar145 = ZEXT1664(auVar124);
            auVar124 = vandps_avx(auVar124,ZEXT416((uint)fVar54));
            auVar59 = ZEXT416((uint)(fVar51 * fVar51 + 0.0025000002));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar107 = 1.0 / auVar59._0_4_;
            fVar49 = fVar51 * fVar107;
            fVar107 = fVar107 * 0.05;
            auVar150 = ZEXT864(0);
            fVar48 = auVar124._0_4_ * fVar107 + fVar53 * fVar49 + 0.0;
            if (fVar48 <= 0.0) {
              auVar124 = ZEXT416((uint)(fVar54 * fVar54 + fVar53 * fVar53 + 0.0));
              auVar124 = vsqrtss_avx(auVar124,auVar124);
            }
            else if (fVar51 <= fVar48) {
              auVar124 = ZEXT416((uint)((fVar146 - fVar50) * (fVar146 - fVar50) +
                                       (fVar89 - fVar52) * (fVar89 - fVar52) + 0.0));
              auVar124 = vsqrtss_avx(auVar124,auVar124);
              auVar124 = ZEXT416((uint)(auVar124._0_4_ + -0.05));
            }
            else {
              auVar124 = ZEXT416((uint)(auVar124._0_4_ * fVar49 + fVar53 * -fVar107 + 0.0));
            }
            auVar59 = vminss_avx(auVar60,ZEXT416((uint)fVar56));
            auVar124 = vminss_avx(auVar59,auVar124);
            fVar90 = fVar90 + 0.11111111;
          } while (fVar90 <= 1.1);
          fVar89 = fVar146 * 0.3 + fVar89;
          fVar46 = fVar88 * 0.08 * fVar46;
          fVar47 = fVar79 * fVar47;
          auVar59 = vmaxss_avx(ZEXT416((uint)((fVar46 * (1.0 - fVar55) + fVar55 * fVar47) - fVar89))
                               ,ZEXT416((uint)(fVar89 - ((fVar88 * 0.08 * 2.5 + fVar46) *
                                                         (1.0 - fVar55) +
                                                        fVar55 * (fVar79 * 2.5 + fVar47)))));
          auVar59 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),auVar59);
          auVar124 = vmaxss_avx(auVar124,ZEXT416((uint)(0.005 - auVar59._0_4_)));
          auVar124 = vminss_avx(auVar124,auVar59);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar36 + iVar13.field0_0x0._4_4_) +
           iVar13.field0_0x0._0_4_ + (int)uVar44] = auVar124._0_4_;
          uVar44 = uVar44 + 1;
        } while (uVar44 != 0x80);
        uVar17 = (ulonglong)(iVar36 + 1U);
      } while (iVar36 + 1U != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    mut_budding_index = n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = (__uint64)(char  [8])0x474e4944445542;
    pmVar10[lVar14].id._s_0.hi = 0;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar40 + 1);
    rVar15._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar15._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar15;
  }
  iVar13 = get_icon_coords(iVar40 + 1);
  uVar38 = *puVar9;
  pfVar41 = (float *)0x0;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar36 = (int)uVar44;
    if (iVar36 < (int)uVar7) {
      iVar36 = iVar13.field0_0x0._4_4_ + iVar36;
      auVar60._8_4_ = 0x7fffffff;
      auVar60._0_8_ = 0x7fffffff7fffffff;
      auVar60._12_4_ = 0x7fffffff;
      auVar59._0_12_ = ZEXT812(0);
      auVar59._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0;
        auVar124 = vmovsldup_avx(ZEXT416((uint)fVar146));
        fVar79 = auVar124._0_4_ + 1.5;
        fVar88 = auVar124._4_4_ + 0.4;
        fVar89 = auVar124._8_4_ + 0.0;
        fVar90 = auVar124._12_4_ + 0.0;
        fVar55 = fVar146 + -0.3;
        lVar14 = 0;
        pfVar42 = pfVar41;
        do {
          pfVar41 = icon_atlas;
          uVar43 = (undefined4)((ulonglong)pfVar42 >> 0x20);
          auVar58 = ZEXT416((uint)(((float)(int)lVar14 + 0.5) * 0.015625 + -1.0));
          auVar124 = vandps_avx(auVar58,auVar60);
          fVar50 = auVar124._0_4_;
          auVar124 = vinsertps_avx(auVar58,ZEXT416((uint)(fVar50 + -0.5)),0x10);
          fVar49 = auVar124._0_4_ * auVar124._0_4_ + 0.0;
          auVar58._0_4_ = fVar49 + fVar79 * fVar79;
          auVar58._4_4_ = auVar124._4_4_ * auVar124._4_4_ + 0.0 + fVar88 * fVar88;
          auVar58._8_4_ = auVar124._8_4_ * auVar124._8_4_ + 0.0 + fVar89 * fVar89;
          auVar58._12_4_ = auVar124._12_4_ * auVar124._12_4_ + 0.0 + fVar90 * fVar90;
          auVar58 = vsqrtps_avx(auVar58);
          auVar124 = vmovshdup_avx(auVar58);
          auVar58 = vmaxss_avx(ZEXT416((uint)(auVar58._0_4_ + -1.5)),
                               ZEXT416((uint)(0.1 - auVar124._0_4_)));
          fVar46 = (-0.3 - fVar146) * 0.9689124 + fVar50 * 0.24740396;
          fVar47 = (-0.3 - fVar146) * -0.24740396 + fVar50 * 0.9689124;
          auVar124 = vandps_avx(ZEXT416((uint)fVar47),auVar60);
          fVar48 = auVar124._0_4_;
          fVar56 = 0.4844562;
          fVar52 = 0.12370198;
          if (fVar48 * 0.9689124 <= fVar46 * 0.24740396) {
            fVar47 = fVar47 * fVar47 + fVar46 * fVar46 + 0.0;
            if (fVar47 <= 1e-06) {
              uVar44 = 0;
            }
            else {
              auVar124 = vsqrtss_avx(ZEXT416((uint)fVar47),ZEXT416((uint)fVar47));
              fVar47 = 1.0 / auVar124._0_4_;
              uVar44 = CONCAT44(uVar43,fVar46 * fVar47) | (ulonglong)(uint)(fVar48 * fVar47) << 0x20
              ;
            }
            uVar43 = 0;
            fVar56 = (float)uVar44 * 0.5;
            fVar52 = (float)(uVar44 >> 0x20) * 0.5;
          }
          auVar124 = ZEXT416((uint)((fVar48 - fVar52) * (fVar48 - fVar52) +
                                   (fVar46 - fVar56) * (fVar46 - fVar56) + 0.0));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          auVar58 = vmaxss_avx(auVar58,ZEXT416((uint)(0.05 - auVar124._0_4_)));
          auVar124 = ZEXT416((uint)(fVar49 + fVar55 * fVar55));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          fVar46 = auVar124._0_4_ + -0.5;
          auVar124 = vandps_avx(ZEXT416((uint)(auVar58._0_4_ - fVar46)),auVar60);
          auVar63 = vmaxss_avx(ZEXT416((uint)(0.15 - auVar124._0_4_)),auVar59);
          fVar47 = (0.05 - fVar55) * 0.921061 + fVar50 * 0.38941833;
          fVar56 = (0.05 - fVar55) * -0.38941833 + fVar50 * 0.921061;
          auVar124 = vandps_avx(ZEXT416((uint)fVar56),auVar60);
          fVar49 = auVar124._0_4_;
          fVar52 = 0.110527314;
          fVar48 = 0.046730198;
          if (fVar49 * 0.921061 <= fVar47 * 0.38941833) {
            fVar56 = fVar56 * fVar56 + fVar47 * fVar47 + 0.0;
            if (1e-06 < fVar56) {
              auVar124 = vsqrtss_avx(ZEXT416((uint)fVar56),ZEXT416((uint)fVar56));
              fVar56 = 1.0 / auVar124._0_4_;
              uVar44 = CONCAT44(uVar43,fVar47 * fVar56) | (ulonglong)(uint)(fVar49 * fVar56) << 0x20
              ;
            }
            else {
              uVar44 = 0;
            }
            fVar52 = (float)uVar44 * 0.12;
            fVar48 = (float)(uVar44 >> 0x20) * 0.12;
          }
          auVar124 = vminss_avx(auVar58,ZEXT416((uint)fVar46));
          auVar58 = ZEXT416((uint)((fVar55 + -0.18) * (fVar55 + -0.18) +
                                  (fVar50 + -0.2) * (fVar50 + -0.2) + 0.0));
          auVar58 = vsqrtss_avx(auVar58,auVar58);
          auVar124 = vmaxss_avx(ZEXT416((uint)(auVar124._0_4_ +
                                              (auVar63._0_4_ * -0.25 * auVar63._0_4_) / 0.15)),
                                ZEXT416((uint)(0.08 - auVar58._0_4_)));
          auVar58 = ZEXT416((uint)((fVar49 - fVar48) * (fVar49 - fVar48) +
                                  (fVar47 - fVar52) * (fVar47 - fVar52) + 0.0));
          auVar58 = vsqrtss_avx(auVar58,auVar58);
          auVar124 = vmaxss_avx(auVar124,ZEXT416((uint)(0.03 - auVar58._0_4_)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar36 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
          pfVar42 = pfVar41;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar36 = iVar36 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x5649534f4c505845;
    pmVar10[lVar14].id._s_0.hi = 0x5345525f45;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar40 + 2);
    rVar16._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar16._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar16;
  }
  iVar13 = get_icon_coords(iVar40 + 2);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    if ((int)uVar44 < (int)uVar7) {
      fVar146 = 0.5;
      do {
        iVar36 = (int)uVar17;
        fVar55 = (fVar146 + (float)iVar36) * 0.015625 + -1.0;
        uVar44 = 0;
        do {
          fVar79 = (fVar146 + (float)uVar44) * 0.015625 + -1.0;
          fVar88 = 0.0;
          auVar145 = ZEXT464(0x40000000);
          do {
            auVar63._8_4_ = 0x7fffffff;
            auVar63._0_8_ = 0x7fffffff7fffffff;
            auVar63._12_4_ = 0x7fffffff;
            auVar124 = vandps_avx(ZEXT416((uint)(fVar88 + 10000.0)),auVar63);
            uVar38 = (uint)(longlong)auVar124._0_4_;
            uVar35 = uVar38 + 0x50e8e167;
            uVar35 = (uVar35 >> 0x10 ^ uVar35) * 0x7feb352d;
            uVar35 = (uVar35 >> 0xf ^ uVar35) * -0x7b935975;
            fVar46 = (float)(uVar35 >> 0x10 ^ uVar35) * 2.3283064e-10 * 3.1415927;
            uVar38 = ((uint)((ulonglong)(longlong)auVar124._0_4_ >> 0x10) & 0xffff ^ uVar38) *
                     0x7feb352d;
            uVar38 = (uVar38 >> 0xf ^ uVar38) * -0x7b935975;
            fVar89 = fVar46 + 6.2831855;
            fVar90 = fVar88 * 0.1 + 0.12;
            auVar124 = vandps_avx(ZEXT416((uint)(fVar146 + fVar88 + 10000.0)),auVar63);
            uVar35 = ((uint)((ulonglong)(longlong)auVar124._0_4_ >> 0x10) & 0xffff ^
                     (uint)(longlong)auVar124._0_4_) * 0x7feb352d;
            uVar35 = (uVar35 >> 0xf ^ uVar35) * -0x7b935975;
            iVar45 = 0;
            do {
              iVar2 = (int)(longlong)((float)iVar45 + 10000.0);
              uVar8 = (uVar38 >> 0x10 ^ uVar38) + iVar2;
              uVar8 = (uVar8 >> 0x10 ^ uVar8) * 0x7feb352d;
              uVar8 = (uVar8 >> 0xf ^ uVar8) * -0x7b935975;
              fVar47 = fVar146 * (float)(uVar8 >> 0x10 ^ uVar8) * 2.3283064e-10 + fVar46 + 0.3;
              if (fVar89 < fVar47) break;
              fVar52 = fVar146 * (fVar46 + fVar47);
              fVar50 = cosf(fVar52);
              fVar48 = sinf(fVar52);
              fVar56 = (fVar47 - fVar52) + (fVar47 - fVar52) + fVar52;
              fVar52 = (fVar46 - fVar52) + (fVar46 - fVar52) + fVar52;
              fVar50 = fVar79 - fVar90 * fVar50;
              fVar48 = fVar55 - fVar90 * fVar48;
              fVar46 = fVar146 * (fVar52 + fVar56);
              fVar49 = cosf(fVar46);
              fVar51 = sinf(fVar46);
              fVar46 = fVar50 * fVar49 + fVar48 * fVar51;
              fVar50 = fVar48 * fVar49 - fVar50 * fVar51;
              auVar151 = ZEXT464((uint)fVar50);
              auVar124 = vandps_avx(ZEXT416((uint)fVar50),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar134 = ZEXT1664(auVar124);
              fVar56 = fVar146 * (fVar56 - fVar52);
              auVar130 = ZEXT464((uint)fVar56);
              auVar150._0_4_ = cosf(fVar56);
              auVar150._4_60_ = extraout_var_02;
              auVar150 = ZEXT1664(auVar150._0_16_);
              fVar50 = sinf(auVar130._0_4_);
              fVar52 = auVar150._0_4_;
              fVar56 = auVar134._0_4_;
              if (fVar56 * fVar52 <= fVar46 * fVar50) {
                fVar52 = auVar151._0_4_ * auVar151._0_4_ + fVar46 * fVar46 + 0.0;
                if (fVar52 <= 1e-06) {
                  uVar17 = 0;
                }
                else {
                  auVar124 = vsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
                  fVar52 = 1.0 / auVar124._0_4_;
                  uVar17 = CONCAT44(extraout_var,fVar46 * fVar52) |
                           (ulonglong)(uint)(fVar56 * fVar52) << 0x20;
                }
                fVar52 = (float)uVar17;
                fVar50 = (float)(uVar17 >> 0x20);
              }
              fVar46 = fVar46 - fVar52 * 0.4;
              fVar56 = fVar56 - fVar50 * 0.4;
              auVar124 = ZEXT416((uint)(fVar56 * fVar56 + fVar46 * fVar46 + 0.0));
              auVar124 = vsqrtss_avx(auVar124,auVar124);
              auVar124 = vminss_avx(auVar145._0_16_,ZEXT416((uint)(auVar124._0_4_ + -0.03)));
              auVar145 = ZEXT1664(auVar124);
              uVar8 = iVar2 + (uVar35 >> 0x10 ^ uVar35);
              uVar8 = (uVar8 >> 0x10 ^ uVar8) * 0x7feb352d;
              uVar8 = (uVar8 >> 0xf ^ uVar8) * -0x7b935975;
              fVar46 = fVar146 * (float)(uVar8 >> 0x10 ^ uVar8) * 2.3283064e-10 + fVar47 + 0.3;
              iVar45 = iVar45 + 1;
            } while (iVar45 != 10);
            fVar88 = fVar88 + 1.0;
          } while (fVar88 < 3.5);
          auVar124 = vandps_avx(ZEXT416((uint)fVar79),___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar124 = vmaxss_avx(ZEXT416((uint)((fVar55 + -0.15) * (fVar55 + -0.15) * 0.9 +
                                               auVar124._0_4_ + -0.45)),
                                ZEXT416((uint)(fVar55 * 0.97014254 + auVar124._0_4_ * 0.24253564 +
                                              -0.45)));
          auVar59 = vmaxss_avx(ZEXT416((uint)(0.01 - auVar124._0_4_)),auVar145._0_16_);
          auVar124 = vminss_avx(auVar59,auVar124);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar36 + iVar13.field0_0x0._4_4_) +
           iVar13.field0_0x0._0_4_ + (int)uVar44] = auVar124._0_4_;
          uVar44 = uVar44 + 1;
        } while (uVar44 != 0x80);
        uVar17 = (ulonglong)(iVar36 + 1U);
      } while (iVar36 + 1U != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x4e49444f4c505845;
    pmVar10[lVar14].id._s_0.hi = 0x535350524f435f47;
    pmVar10[lVar14].weight = 0.5;
    iVar13 = get_icon_coords(iVar40 + 3);
    rVar18._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar18._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar18;
  }
  iVar13 = get_icon_coords(iVar40 + 3);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    if ((int)uVar44 < (int)uVar7) {
      auVar145 = ZEXT464(0x3f000000);
      auVar150 = ZEXT1264(ZEXT812(0));
      fVar146 = 2.3283064e-10;
      fVar55 = 0.3;
      do {
        iVar36 = (int)uVar17;
        fVar79 = (auVar145._0_4_ + (float)iVar36) * 0.015625 + -1.0;
        fVar88 = fVar79 * 0.6666667;
        auVar124 = vandps_avx(ZEXT416((uint)fVar88),___xmm_7fffffff7fffffff7fffffff7fffffff);
        uVar44 = 0;
        do {
          fVar89 = (auVar145._0_4_ + (float)uVar44) * 0.015625 + -1.0;
          auVar67._8_4_ = 0x7fffffff;
          auVar67._0_8_ = 0x7fffffff7fffffff;
          auVar67._12_4_ = 0x7fffffff;
          auVar59 = vandps_avx(ZEXT416((uint)fVar89),auVar67);
          fVar90 = auVar59._0_4_ * 0.6666667;
          auVar130 = ZEXT464((uint)fVar90);
          auVar59 = vandps_avx(ZEXT416((uint)fVar90),auVar67);
          fVar46 = auVar59._0_4_;
          dVar57 = (0.09999999403953552 - ((double)fVar88 + (double)fVar88)) * 0.04000000283122063 +
                   (double)(fVar46 * fVar46 * -0.4);
          auVar82._0_4_ = (float)dVar57;
          auVar82._4_4_ = (int)((ulonglong)dVar57 >> 0x20);
          auVar82._8_8_ = 0;
          auVar59 = vmaxss_avx(auVar82,ZEXT416((uint)(fVar46 * -0.15 + fVar88 * -0.2)));
          fVar47 = auVar150._0_4_;
          if (fVar47 <= auVar59._0_4_) {
            fVar56 = -0.15 - fVar88;
            if (0.2 <= fVar46) {
              auVar59 = ZEXT416((uint)((fVar88 + 0.15) * (fVar88 + 0.15) +
                                      fVar47 + (fVar46 + -0.2) * (fVar46 + -0.2)));
              auVar59 = vsqrtss_avx(auVar59,auVar59);
              fVar56 = auVar59._0_4_;
            }
          }
          else {
            auVar59 = ZEXT416((uint)(fVar47 + fVar90 * fVar90 + fVar88 * fVar88));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar56 = auVar59._0_4_ + -0.25;
          }
          auVar59 = vandps_avx(ZEXT416((uint)(fVar90 / 0.1)),___xmm_80000000800000008000000080000000
                              );
          auVar100._8_4_ = 0x3effffff;
          auVar100._0_8_ = 0x3effffff3effffff;
          auVar100._12_4_ = 0x3effffff;
          auVar59 = vorps_avx(auVar59,auVar100);
          auVar59 = ZEXT416((uint)(fVar90 / 0.1 + auVar59._0_4_));
          auVar59 = vroundss_avx(auVar59,auVar59,0xb);
          auVar59 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar59);
          fVar50 = auVar59._0_4_ * 0.1;
          fVar46 = fVar50 * 0.1 + -0.31;
          fVar48 = fVar50 - fVar50;
          auVar59 = ZEXT416((uint)(fVar46 * fVar46 + fVar47 + fVar48 * fVar48));
          auVar59 = vsqrtss_avx(auVar59,auVar59);
          auVar134 = ZEXT1664(auVar59);
          fVar49 = auVar59._0_4_;
          fVar52 = fVar49 * fVar49 + -9.999996e-05;
          if (fVar52 < fVar47) {
            fVar47 = sqrtf(fVar52);
            fVar90 = auVar130._0_4_;
            fVar49 = auVar134._0_4_;
          }
          else {
            auVar59 = vsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
            fVar47 = auVar59._0_4_;
          }
          fVar48 = fVar48 * (1.0 / fVar49);
          fVar49 = fVar46 * (1.0 / fVar49);
          fVar50 = fVar90 - fVar50;
          fVar52 = fVar50 * fVar48 + fVar88 * fVar49;
          fVar53 = fVar88 * fVar48 - fVar50 * fVar49;
          auVar59 = vandps_avx(ZEXT416((uint)fVar53),___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar60 = ZEXT416((uint)(fVar47 * fVar47 + 9.999996e-05));
          auVar60 = vsqrtss_avx(auVar60,auVar60);
          fVar51 = 1.0 / auVar60._0_4_;
          fVar49 = fVar47 * fVar51;
          fVar51 = fVar51 * -0.009999998;
          fVar107 = auVar150._0_4_;
          fVar48 = auVar59._0_4_ * fVar51 + fVar52 * fVar49 + fVar107;
          if (fVar48 <= fVar107) {
            auVar59 = ZEXT416((uint)(fVar53 * fVar53 + fVar107 + fVar52 * fVar52));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar46 = auVar59._0_4_;
LAB_14014b5e4:
            fVar46 = fVar46 + -0.06;
          }
          else {
            if (fVar48 < fVar47) {
              fVar46 = auVar59._0_4_ * fVar49 + fVar107 + fVar52 * -fVar51;
              goto LAB_14014b5e4;
            }
            auVar59 = ZEXT416((uint)((fVar88 - fVar46) * (fVar88 - fVar46) +
                                    fVar107 + fVar50 * fVar50));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar46 = auVar59._0_4_ + -0.05;
          }
          fVar47 = 0.0;
          auVar130 = ZEXT464(0x40000000);
          do {
            auVar96._8_4_ = 0x7fffffff;
            auVar96._0_8_ = 0x7fffffff7fffffff;
            auVar96._12_4_ = 0x7fffffff;
            auVar59 = vandps_avx(ZEXT416((uint)(fVar47 + 10000.0)),auVar96);
            uVar38 = (int)(longlong)auVar59._0_4_ + 0xb6770459;
            uVar38 = (uVar38 >> 0x10 ^ uVar38) * 0x7feb352d;
            uVar38 = (uVar38 >> 0xf ^ uVar38) * -0x7b935975;
            auVar59 = vandps_avx(ZEXT416((uint)(fVar47 + 15.0 + 10000.0)),auVar96);
            fVar48 = fVar146 * (float)(uVar38 >> 0x10 ^ uVar38) * 3.1415927;
            uVar38 = ((uint)((ulonglong)(longlong)auVar59._0_4_ >> 0x10) & 0xffff ^
                     (uint)(longlong)auVar59._0_4_) * 0x7feb352d;
            uVar38 = (uVar38 >> 0xf ^ uVar38) * -0x7b935975;
            fVar52 = fVar48 + 6.2831855;
            fVar50 = fVar47 * 0.1 + 0.12;
            auVar59 = vandps_avx(ZEXT416((uint)(fVar47 + 15.5 + 10000.0)),auVar96);
            uVar35 = ((uint)((ulonglong)(longlong)auVar59._0_4_ >> 0x10) & 0xffff ^
                     (uint)(longlong)auVar59._0_4_) * 0x7feb352d;
            uVar35 = (uVar35 >> 0xf ^ uVar35) * -0x7b935975;
            iVar45 = 0;
            do {
              iVar2 = (int)(longlong)((float)iVar45 + 10000.0);
              uVar8 = (uVar38 >> 0x10 ^ uVar38) + iVar2;
              uVar8 = (uVar8 >> 0x10 ^ uVar8) * 0x7feb352d;
              uVar8 = (uVar8 >> 0xf ^ uVar8) * -0x7b935975;
              fVar49 = auVar145._0_4_ * fVar146 * (float)(uVar8 >> 0x10 ^ uVar8) + fVar48 + fVar55;
              if (fVar52 < fVar49) break;
              fVar55 = auVar145._0_4_ * (fVar48 + fVar49);
              fVar51 = cosf(fVar55);
              fVar53 = sinf(fVar55);
              auVar150 = ZEXT1664(auVar145._0_16_);
              fVar146 = (fVar49 - fVar55) + (fVar49 - fVar55) + fVar55;
              fVar55 = (fVar48 - fVar55) + (fVar48 - fVar55) + fVar55;
              fVar51 = fVar89 - fVar50 * fVar51;
              fVar53 = fVar79 - fVar50 * fVar53;
              fVar48 = auVar145._0_4_ * (fVar55 + fVar146);
              fVar107 = cosf(fVar48);
              fVar54 = sinf(fVar48);
              fVar48 = fVar51 * fVar107 + fVar53 * fVar54;
              fVar51 = fVar53 * fVar107 - fVar51 * fVar54;
              auVar59 = vandps_avx(ZEXT416((uint)fVar51),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar134 = ZEXT1664(auVar59);
              auVar145 = ZEXT1664(auVar150._0_16_);
              fVar146 = auVar150._0_4_ * (fVar146 - fVar55);
              fVar53 = cosf(fVar146);
              fVar107 = sinf(fVar146);
              fVar146 = auVar134._0_4_;
              if (fVar146 * fVar53 <= fVar48 * fVar107) {
                fVar55 = fVar51 * fVar51 + fVar48 * fVar48 + 0.0;
                if (fVar55 <= 1e-06) {
                  uVar17 = 0;
                }
                else {
                  auVar59 = vsqrtss_avx(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
                  fVar55 = 1.0 / auVar59._0_4_;
                  uVar17 = CONCAT44(extraout_var_00,fVar48 * fVar55) |
                           (ulonglong)(uint)(fVar146 * fVar55) << 0x20;
                }
                fVar53 = (float)uVar17;
                fVar107 = (float)(uVar17 >> 0x20);
              }
              auVar150 = ZEXT1664(ZEXT816(0));
              fVar55 = 0.3;
              fVar48 = fVar48 - fVar53 * 0.4;
              fVar146 = fVar146 - fVar107 * 0.4;
              auVar59 = ZEXT416((uint)(fVar146 * fVar146 + fVar48 * fVar48 + 0.0));
              auVar59 = vsqrtss_avx(auVar59,auVar59);
              auVar59 = vminss_avx(auVar130._0_16_,ZEXT416((uint)(auVar59._0_4_ + -0.03)));
              auVar130 = ZEXT1664(auVar59);
              uVar8 = iVar2 + (uVar35 >> 0x10 ^ uVar35);
              uVar8 = (uVar8 >> 0x10 ^ uVar8) * 0x7feb352d;
              uVar8 = (uVar8 >> 0xf ^ uVar8) * -0x7b935975;
              fVar146 = 2.3283064e-10;
              fVar48 = auVar145._0_4_ * (float)(uVar8 >> 0x10 ^ uVar8) * 2.3283064e-10 +
                       fVar49 + 0.3;
              iVar45 = iVar45 + 1;
            } while (iVar45 != 10);
            fVar47 = fVar47 + 1.0;
          } while (fVar47 < 3.5);
          auVar91._8_4_ = 0x7fffffff;
          auVar91._0_8_ = 0x7fffffff7fffffff;
          auVar91._12_4_ = 0x7fffffff;
          auVar59 = vandps_avx(ZEXT416((uint)((fVar56 + -0.05) - fVar46)),auVar91);
          auVar60 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar59._0_4_)),auVar150._0_16_);
          auVar63 = vminss_avx(ZEXT416((uint)(fVar56 + -0.05)),ZEXT416((uint)fVar46));
          auVar59 = vandps_avx(ZEXT416((uint)(fVar90 + -0.12)),auVar91);
          fVar46 = auVar150._0_4_;
          local_118 = auVar124._0_4_;
          auVar92._0_4_ = (local_118 * 0.06 + fVar46 + auVar59._0_4_ * 0.06) / 0.0072;
          auVar92._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar58 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar92);
          auVar58 = vmaxss_avx(auVar150._0_16_,auVar58);
          fVar89 = auVar58._0_4_ * 0.06 + fVar46 * (1.0 - auVar58._0_4_);
          fVar90 = auVar59._0_4_ - fVar89;
          local_118 = local_118 - fVar89;
          auVar59 = ZEXT416((uint)(local_118 * local_118 + fVar46 + fVar90 * fVar90));
          auVar59 = vsqrtss_avx(auVar59,auVar59);
          auVar59 = vmaxss_avx(ZEXT416((uint)(auVar63._0_4_ +
                                             (auVar60._0_4_ * auVar60._0_4_ * -0.25) / 0.05)),
                               ZEXT416((uint)(0.02 - auVar59._0_4_)));
          fVar89 = auVar59._0_4_ * 1.5;
          auVar59 = vmaxss_avx(ZEXT416((uint)(0.01 - fVar89)),auVar130._0_16_);
          auVar59 = vminss_avx(auVar59,ZEXT416((uint)fVar89));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar36 + iVar13.field0_0x0._4_4_) +
           iVar13.field0_0x0._0_4_ + (int)uVar44] = auVar59._0_4_;
          uVar44 = uVar44 + 1;
        } while (uVar44 != 0x80);
        uVar17 = (ulonglong)(iVar36 + 1U);
      } while (iVar36 + 1U != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  iVar36 = 0;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    mut_mutagenic_poison_index = n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x494e45474154554d;
    pmVar10[lVar14].id._s_0.hi = 0x4e4f53494f505f43;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar40 + 4);
    rVar19._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar19._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar19;
    pmVar10[lVar14].extra_data_offset = 0;
    pmVar10[lVar14].n_imbues = 1;
    iVar36 = 4;
  }
  iVar13 = get_icon_coords(iVar40 + 4);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar150 = ZEXT464(0xbdcccccd);
      fVar146 = 0.1;
      auVar134 = ZEXT1664(CONCAT412(0x80000000,CONCAT48(0x80000000,0x8000000080000000)));
      auVar145 = ZEXT1664(CONCAT412(0x3effffff,CONCAT48(0x3effffff,0x3effffff3effffff)));
      auVar130 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      do {
        fVar55 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0 + 0.5;
        fVar79 = fVar55 * 5.0;
        lVar14 = 0;
        do {
          fVar88 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          fVar90 = fVar79;
          fVar89 = sinf(fVar79);
          auVar142 = ZEXT1664(auVar145._0_16_);
          auVar151 = ZEXT1664(auVar134._0_16_);
          fVar89 = auVar150._0_4_ * fVar89 + fVar88;
          fVar88 = fVar146 * fVar88;
          fVar90 = cosf(fVar90);
          fVar90 = fVar88 * fVar90 + fVar55;
          fVar47 = 5.0;
          fVar46 = fVar90 * 5.0;
          fVar88 = sinf(fVar46);
          auVar128 = ZEXT1664(auVar150._0_16_);
          fVar88 = fVar89 + auVar150._0_4_ * fVar88;
          fVar89 = fVar89 * fVar146;
          fVar46 = cosf(fVar46);
          fVar90 = fVar90 + fVar89 * fVar46;
          fVar89 = fVar90 * fVar47;
          fVar46 = sinf(fVar89);
          auVar150 = ZEXT464((uint)(fVar88 + fVar46 * auVar128._0_4_));
          fVar88 = fVar88 * fVar146;
          fVar89 = cosf(fVar89);
          auVar134 = ZEXT1664(auVar151._0_16_);
          auVar145 = ZEXT1664(auVar142._0_16_);
          fVar47 = fVar47 * (fVar90 + fVar88 * fVar89);
          auVar124 = vandps_avx(auVar151._0_16_,ZEXT416((uint)(fVar47 + 0.0)));
          auVar124 = vorps_avx(auVar142._0_16_,auVar124);
          auVar124 = ZEXT416((uint)(fVar47 + 0.0 + auVar124._0_4_));
          auVar124 = vroundss_avx(auVar124,auVar124,0xb);
          auVar124 = vandps_avx(auVar130._0_16_,ZEXT416((uint)(fVar47 - auVar124._0_4_)));
          auVar142 = ZEXT464((uint)(auVar124._0_4_ + -0.15));
          auVar124 = vandps_avx(auVar150._0_16_,auVar130._0_16_);
          auVar138 = ZEXT1664(auVar124);
          auVar151._0_4_ = cosf(fVar47);
          auVar151._4_60_ = extraout_var_03;
          auVar124 = vandps_avx(auVar130._0_16_,auVar151._0_16_);
          auVar150 = ZEXT1664(auVar128._0_16_);
          auVar124 = ZEXT416((uint)(auVar138._0_4_ + auVar124._0_4_ * -0.3));
          auVar59 = vmaxss_avx(auVar142._0_16_,auVar124);
          auVar124 = vandps_avx(auVar130._0_16_,auVar124);
          auVar124 = vminss_avx(auVar59,ZEXT416((uint)(auVar124._0_4_ + -0.05)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    mut_rebirth_index = n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = (__uint64)(char  [8])0x48545249424552;
    pmVar10[lVar14].id._s_0.hi = 0;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar40 + 5);
    rVar20._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar20._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar20;
  }
  iVar13 = get_icon_coords(iVar40 + 5);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar150 = ZEXT464(0x3e99999a);
      auVar130 = ZEXT464(0xbe19999a);
      auVar145 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar134 = ZEXT464(0x3dcccccd);
      auVar128 = ZEXT464(0x3f4ccccd);
      auVar151 = ZEXT464(0x3ecccccd);
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0 + 0.2;
        fVar55 = fVar146 + -0.2;
        fVar88 = auVar150._0_4_;
        fVar79 = fVar55 + auVar130._0_4_;
        lVar14 = 0;
        do {
          fVar89 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          auVar152 = ZEXT1664(auVar151._0_16_);
          auVar124 = vandps_avx(ZEXT416((uint)fVar89),auVar145._0_16_);
          auVar151 = ZEXT1664(auVar124);
          fVar46 = auVar124._0_4_;
          fVar90 = fVar46 + auVar134._0_4_;
          auVar124 = ZEXT416((uint)(fVar90 * fVar90 + 0.0 + (fVar146 + -0.75) * (fVar146 + -0.75)));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          auVar124 = vmaxss_avx(ZEXT416((uint)(fVar146 * -0.70710677 + fVar46 * -0.70710677 + 0.0)),
                                ZEXT416((uint)(auVar128._0_4_ - auVar124._0_4_)));
          auVar143 = ZEXT1664(auVar124);
          fVar89 = fVar89 * fVar89 + 0.0;
          auVar124 = ZEXT416((uint)(fVar89 + fVar55 * fVar55));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          auVar134 = ZEXT1664(auVar134._0_16_);
          fVar90 = auVar124._0_4_ + -0.8;
          auVar154 = ZEXT1664(auVar130._0_16_);
          auVar142 = ZEXT1664(auVar150._0_16_);
          auVar128 = ZEXT1664(auVar128._0_16_);
          auVar138 = ZEXT1664(auVar145._0_16_);
          fVar46 = atan2f(fVar55 + fVar88,fVar46);
          auVar145._0_4_ = cosf((fVar46 + 0.25) * 6.0);
          auVar145._4_60_ = extraout_var_04;
          auVar124 = vandps_avx(auVar138._0_16_,auVar145._0_16_);
          fVar46 = powf(auVar124._0_4_,5.0);
          auVar150 = ZEXT1664(auVar142._0_16_);
          auVar130 = ZEXT1664(auVar154._0_16_);
          auVar134 = ZEXT1664(auVar134._0_16_);
          auVar124 = vmaxss_avx(auVar143._0_16_,ZEXT416((uint)(fVar90 - auVar154._0_4_ * fVar46)));
          auVar59 = ZEXT416((uint)(fVar89 + fVar79 * fVar79));
          auVar60 = vsqrtss_avx(auVar59,auVar59);
          fVar89 = auVar151._0_4_ * auVar152._0_4_;
          auVar151 = ZEXT1664(auVar152._0_16_);
          auVar59 = vminss_avx(auVar124,ZEXT416((uint)(auVar60._0_4_ + -0.25)));
          auVar145 = ZEXT1664(auVar138._0_16_);
          auVar128 = ZEXT1664(auVar128._0_16_);
          auVar124 = ZEXT416((uint)((fVar55 + -0.4) * (fVar55 + -0.4) + fVar89 * fVar89 + 0.0));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          auVar124 = vandps_avx(ZEXT416((uint)(auVar154._0_4_ + auVar124._0_4_)),auVar138._0_16_);
          auVar124 = vmaxss_avx(ZEXT416((uint)(auVar124._0_4_ + -0.03)),
                                ZEXT416((uint)(auVar142._0_4_ - auVar60._0_4_)));
          auVar124 = vminss_avx(auVar59,auVar124);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x474e495446495244;
    pmVar10[lVar14].id._s_0.hi = 0;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar40 + 6);
    rVar21._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar21._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar21;
  }
  iVar13 = get_icon_coords(iVar40 + 6);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar145 = ZEXT1264(ZEXT812(0));
      auVar150 = ZEXT464(0xbd4ccccd);
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0;
        lVar14 = 0;
        do {
          fVar79 = -0.25;
          auVar150 = ZEXT1664(auVar150._0_16_);
          fVar52 = 0.5;
          fVar89 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          fVar90 = (auVar145._0_4_ + (fVar89 + -0.2) * 0.8660254) - (fVar146 + -0.4) * 0.5;
          fVar55 = auVar145._0_4_ + (fVar89 + -0.2) * 0.5 + (fVar146 + -0.4) * 0.8660254;
          fVar88 = fVar90 * 0.5;
          fVar46 = cosf(fVar88);
          fVar47 = sinf(fVar88);
          fVar88 = cosf(fVar88);
          auVar59 = auVar145._0_16_;
          fVar56 = auVar145._0_4_;
          fVar46 = (fVar56 + fVar90 * fVar46) - fVar55 * fVar47;
          auVar124 = vandps_avx(ZEXT416((uint)(fVar55 * fVar88 + fVar56 + fVar90 * fVar47)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar79 = fVar79 + auVar124._0_4_;
          fVar88 = fVar52 + fVar46 + 0.14433756;
          if (fVar56 < fVar88 * 1.7320508 + fVar79) {
            fVar47 = fVar79 * -1.7320508;
            fVar79 = fVar52 * (fVar88 * -1.7320508 + fVar79);
            fVar88 = fVar52 * (fVar47 - fVar88);
          }
          auVar60 = vminss_avx(auVar59,ZEXT416((uint)fVar79));
          auVar60 = vmaxss_avx(SUB6416(ZEXT464(0xbf000000),0),auVar60);
          fVar79 = fVar79 - auVar60._0_4_;
          auVar60 = ZEXT416((uint)(fVar88 * fVar88 + fVar56 + fVar79 * fVar79));
          auVar63 = vsqrtss_avx(auVar60,auVar60);
          auVar60 = vcmpss_avx(auVar59,ZEXT416((uint)fVar88),1);
          auVar108._8_4_ = 0xbf800000;
          auVar108._0_8_ = 0xbf800000bf800000;
          auVar108._12_4_ = 0xbf800000;
          auVar60 = vblendvps_avx(auVar108,___xmm_3f8000003f8000003f8000003f800000,auVar60);
          auVar58 = vcmpss_avx(auVar59,ZEXT416((uint)fVar88),4);
          fVar50 = auVar150._0_4_;
          fVar89 = fVar89 + -0.3;
          fVar52 = fVar146 * -8.742278e-08 - fVar89;
          fVar79 = fVar89 * 8.742278e-08 + -fVar146;
          auVar59 = vandps_avx(ZEXT416((uint)fVar79),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar48 = auVar59._0_4_;
          fVar88 = 0.37499997;
          fVar47 = 0.6495191;
          uVar43 = extraout_var_01;
          if (fVar48 * 0.49999997 <= fVar52 * 0.86602545) {
            fVar79 = fVar79 * fVar79 + fVar52 * fVar52 + fVar56;
            if (fVar79 <= 1e-06) {
              uVar44 = 0;
            }
            else {
              auVar59 = vsqrtss_avx(ZEXT416((uint)fVar79),ZEXT416((uint)fVar79));
              fVar79 = 1.0 / auVar59._0_4_;
              uVar44 = CONCAT44(extraout_var_01,fVar52 * fVar79) |
                       (ulonglong)(uint)(fVar48 * fVar79) << 0x20;
            }
            uVar43 = 0;
            fVar88 = (float)uVar44 * 0.75;
            fVar47 = (float)(uVar44 >> 0x20) * 0.75;
          }
          auVar59 = vandps_avx(auVar58,auVar60);
          auVar60 = ZEXT416((uint)((fVar48 - fVar47) * (fVar48 - fVar47) +
                                  fVar56 + (fVar52 - fVar88) * (fVar52 - fVar88)));
          auVar58 = vsqrtss_avx(auVar60,auVar60);
          auVar150 = ZEXT1664(auVar150._0_16_);
          fVar79 = fVar89 * -0.9914448 + fVar146 * -0.13052626;
          fVar88 = fVar89 * 0.13052626 + fVar146 * -0.9914448;
          auVar60 = vandps_avx(ZEXT416((uint)fVar88),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar48 = auVar60._0_4_;
          fVar47 = 0.22961007;
          fVar52 = 0.5543277;
          if (fVar48 * 0.38268343 <= fVar79 * 0.9238795) {
            fVar88 = fVar88 * fVar88 + fVar79 * fVar79 + fVar56;
            if (fVar88 <= 1e-06) {
              uVar44 = 0;
            }
            else {
              auVar60 = vsqrtss_avx(ZEXT416((uint)fVar88),ZEXT416((uint)fVar88));
              fVar88 = 1.0 / auVar60._0_4_;
              uVar44 = CONCAT44(uVar43,fVar88 * fVar79) | (ulonglong)(uint)(fVar88 * fVar48) << 0x20
              ;
            }
            uVar43 = 0;
            fVar47 = (float)uVar44 * 0.6;
            fVar52 = (float)(uVar44 >> 0x20) * 0.6;
          }
          auVar60 = ZEXT416((uint)((fVar55 + fVar50) * (fVar55 + fVar50) +
                                  fVar56 + (fVar90 + -0.2) * (fVar90 + -0.2)));
          auVar67 = vsqrtss_avx(auVar60,auVar60);
          auVar60 = ZEXT416((uint)((fVar48 - fVar52) * (fVar48 - fVar52) +
                                  fVar56 + (fVar79 - fVar47) * (fVar79 - fVar47)));
          auVar82 = vsqrtss_avx(auVar60,auVar60);
          fVar55 = fVar89 * -0.9659258 + fVar146 * -0.25881907;
          fVar79 = fVar89 * 0.25881907 + fVar146 * -0.9659258;
          auVar60 = vandps_avx(ZEXT416((uint)fVar79),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar90 = auVar60._0_4_;
          fVar88 = 0.11646858;
          fVar89 = 0.4346666;
          if (fVar90 * 0.25881907 <= fVar55 * 0.9659258) {
            fVar79 = fVar79 * fVar79 + fVar56 + fVar55 * fVar55;
            if (1e-06 < fVar79) {
              auVar60 = vsqrtss_avx(ZEXT416((uint)fVar79),ZEXT416((uint)fVar79));
              fVar79 = 1.0 / auVar60._0_4_;
              uVar44 = CONCAT44(uVar43,fVar55 * fVar79) | (ulonglong)(uint)(fVar90 * fVar79) << 0x20
              ;
            }
            else {
              uVar44 = 0;
            }
            fVar88 = (float)uVar44 * 0.45;
            fVar89 = (float)(uVar44 >> 0x20) * 0.45;
          }
          auVar124 = vminss_avx(ZEXT416((uint)(fVar46 * fVar46 + auVar124._0_4_ + -0.25)),
                                ZEXT416((uint)(auVar59._0_4_ * -auVar63._0_4_)));
          auVar124 = vmaxss_avx(auVar124,ZEXT416((uint)(0.075 - auVar67._0_4_)));
          auVar59 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),
                               ZEXT416((uint)(fVar50 + auVar58._0_4_)));
          auVar59 = vminss_avx(auVar59,ZEXT416((uint)(fVar50 + auVar82._0_4_)));
          auVar60 = ZEXT416((uint)((fVar90 - fVar89) * (fVar90 - fVar89) +
                                  fVar56 + (fVar55 - fVar88) * (fVar55 - fVar88)));
          auVar60 = vsqrtss_avx(auVar60,auVar60);
          auVar59 = vminss_avx(auVar59,ZEXT416((uint)(fVar50 + auVar60._0_4_)));
          auVar59 = vmaxss_avx(auVar59,ZEXT416((uint)(0.05 - auVar124._0_4_)));
          auVar124 = vminss_avx(auVar59,auVar124);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x5245434e4143;
    pmVar10[lVar14].id._s_0.hi = 0;
    pmVar10[lVar14].weight = 0.0;
    pmVar5 = materials_list;
    uVar38 = str_to_id("CRAB");
    iVar45 = get_material_index(uVar38);
    pmVar10[lVar14].uv.field0_0x0 = pmVar5[iVar45].uv.field0_0x0;
    pmVar10[lVar14].n_imbues = 1;
    pmVar10 = mutations_list;
    if (*puVar9 == 0) {
      lVar14 = (longlong)n_mutation_types;
      mut_freezing_index = n_mutation_types;
      n_mutation_types = n_mutation_types + 1;
      pmVar4 = mutations_list + lVar14;
      auVar78 = ZEXT1232(ZEXT812(0));
      pmVar4->weight = (float)auVar78._0_4_;
      pmVar4->cum_weight = (float)auVar78._4_4_;
      pmVar4->uv = (real_2)auVar78._8_8_;
      pmVar4->extra_data_offset = auVar78._16_4_;
      pmVar4->n_imbues = auVar78._20_4_;
      *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
      pmVar10[lVar14].id._s_0.lo = 0x474e495a45455246;
      pmVar10[lVar14].id._s_0.hi = 0;
      pmVar10[lVar14].weight = 1.0;
      *(undefined4 *)&pmVar10[lVar14].field_0x28 = 1;
      iVar13 = get_icon_coords(iVar40 + 7);
      rVar22._s_0.y =
           ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) /
           (float)icon_texture.size.field0_0x0._s_0.y;
      rVar22._s_0.x =
           ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) /
           (float)icon_texture.size.field0_0x0._s_0.x;
      pmVar10[lVar14].uv.field0_0x0 = rVar22;
    }
  }
  iVar13 = get_icon_coords(iVar40 + 7);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    if ((int)uVar44 < (int)uVar7) {
      auVar145 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      do {
        iVar45 = (int)uVar17;
        fVar146 = ((float)iVar45 + 0.5) * 0.015625 + -1.0;
        auVar124 = vandps_avx(auVar145._0_16_,ZEXT416((uint)fVar146));
        uVar44 = 0;
        do {
          fVar55 = ((float)uVar44 + 0.5) * 0.015625 + -1.0;
          auVar80._8_4_ = 0x7fffffff;
          auVar80._0_8_ = 0x7fffffff7fffffff;
          auVar80._12_4_ = 0x7fffffff;
          auVar59 = vandps_avx(ZEXT416((uint)fVar55),auVar80);
          auVar60 = ZEXT416((uint)(fVar55 * fVar55 + 0.0 + fVar146 * fVar146));
          auVar60 = vsqrtss_avx(auVar60,auVar60);
          auVar60 = vmovsldup_avx(auVar60);
          auVar61._0_4_ = auVar60._0_4_ + -0.3;
          auVar61._4_4_ = auVar60._4_4_ + -0.1;
          auVar61._8_4_ = auVar60._8_4_ + 0.0;
          auVar61._12_4_ = auVar60._12_4_ + 0.0;
          auVar60 = vandps_avx(auVar61,auVar80);
          auVar62._0_4_ = auVar60._0_4_ + -0.05;
          auVar62._4_4_ = auVar60._4_4_ + -0.05;
          auVar62._8_4_ = auVar60._8_4_ + 0.0;
          auVar62._12_4_ = auVar60._12_4_ + 0.0;
          auVar60 = vmovshdup_avx(auVar62);
          auVar60 = vminss_avx(auVar62,auVar60);
          lVar14 = 0;
          bVar6 = true;
          do {
            bVar37 = bVar6;
            fVar55 = *(float *)(&hex_rots + lVar14);
            fVar79 = *(float *)((longlong)&hex_rots + lVar14 * 8 + 4);
            fVar89 = fVar55 * 0.6 - fVar55 * 0.1;
            fVar90 = fVar79 * 0.6 - fVar79 * 0.1;
            auVar58 = ZEXT416((uint)(fVar90 * fVar90 + fVar89 * fVar89 + 0.0));
            auVar58 = vsqrtss_avx(auVar58,auVar58);
            fVar56 = auVar58._0_4_;
            fVar89 = fVar89 * (1.0 / fVar56);
            fVar90 = fVar90 * (1.0 / fVar56);
            local_218 = auVar124._0_4_;
            fVar46 = local_218 - fVar55 * 0.1;
            local_228 = auVar59._0_4_;
            fVar47 = local_228 - fVar79 * 0.1;
            fVar88 = fVar46 * fVar89 + fVar47 * fVar90;
            fVar47 = fVar47 * fVar89 - fVar46 * fVar90;
            auVar58 = vandps_avx(auVar145._0_16_,ZEXT416((uint)fVar47));
            auVar63 = vsqrtss_avx(ZEXT416((uint)(fVar56 * fVar56)),ZEXT416((uint)(fVar56 * fVar56)))
            ;
            fVar56 = auVar63._0_4_;
            auVar63 = ZEXT416((uint)(fVar56 * fVar56 + 0.0));
            auVar63 = vsqrtss_avx(auVar63,auVar63);
            fVar46 = 1.0 / auVar63._0_4_;
            fVar90 = fVar56 * fVar46;
            fVar46 = fVar46 * 0.0;
            fVar89 = auVar58._0_4_ * fVar46 + fVar90 * fVar88 + 0.0;
            if (fVar89 <= 0.0) {
              fVar88 = fVar88 * fVar88;
              fVar47 = fVar47 * fVar47;
LAB_14014cbb0:
              auVar58 = ZEXT416((uint)(fVar47 + fVar88 + 0.0));
              auVar58 = vsqrtss_avx(auVar58,auVar58);
              fVar88 = auVar58._0_4_;
            }
            else {
              if (fVar56 <= fVar89) {
                fVar88 = local_218 - fVar55 * 0.6;
                fVar47 = local_228 - fVar79 * 0.6;
                fVar88 = fVar88 * fVar88;
                fVar47 = fVar47 * fVar47;
                goto LAB_14014cbb0;
              }
              fVar88 = fVar90 * auVar58._0_4_ + fVar88 * -fVar46 + 0.0;
            }
            fVar50 = fVar55 * 0.4;
            fVar48 = fVar79 * 0.4;
            fVar89 = fVar50 + fVar55 * DAT_1401fd028 * 0.2 + fVar79 * -(DAT_1401fd02c * 0.2);
            fVar90 = fVar48 + fVar55 * DAT_1401fd02c * 0.2 + fVar79 * DAT_1401fd028 * 0.2;
            fVar47 = fVar89 - fVar50;
            fVar56 = fVar90 - fVar48;
            auVar58 = ZEXT416((uint)(fVar56 * fVar56 + fVar47 * fVar47 + 0.0));
            auVar58 = vsqrtss_avx(auVar58,auVar58);
            fVar52 = auVar58._0_4_;
            fVar47 = fVar47 * (1.0 / fVar52);
            fVar56 = fVar56 * (1.0 / fVar52);
            fVar49 = local_218 - fVar50;
            fVar51 = local_228 - fVar48;
            fVar46 = fVar49 * fVar47 + fVar51 * fVar56;
            fVar53 = fVar51 * fVar47 - fVar49 * fVar56;
            auVar58 = vandps_avx(ZEXT416((uint)fVar53),auVar145._0_16_);
            auVar63 = vsqrtss_avx(ZEXT416((uint)(fVar52 * fVar52)),ZEXT416((uint)(fVar52 * fVar52)))
            ;
            fVar107 = auVar63._0_4_;
            auVar63 = ZEXT416((uint)(fVar107 * fVar107 + 0.0));
            auVar63 = vsqrtss_avx(auVar63,auVar63);
            fVar52 = 1.0 / auVar63._0_4_;
            fVar56 = fVar107 * fVar52;
            fVar52 = fVar52 * 0.0;
            fVar47 = auVar58._0_4_ * fVar52 + fVar56 * fVar46 + 0.0;
            if (fVar47 <= 0.0) {
              auVar58 = ZEXT416((uint)(fVar53 * fVar53 + fVar46 * fVar46 + 0.0));
              auVar58 = vsqrtss_avx(auVar58,auVar58);
              fVar89 = auVar58._0_4_;
            }
            else if (fVar107 <= fVar47) {
              fVar89 = local_218 - fVar89;
              fVar90 = local_228 - fVar90;
              auVar58 = ZEXT416((uint)(fVar90 * fVar90 + fVar89 * fVar89 + 0.0));
              auVar58 = vsqrtss_avx(auVar58,auVar58);
              fVar89 = auVar58._0_4_;
            }
            else {
              fVar89 = fVar56 * auVar58._0_4_ + fVar46 * -fVar52 + 0.0;
            }
            fVar90 = fVar50 + fVar55 * DAT_1401fd048 * 0.2 + fVar79 * -(DAT_1401fd04c * 0.2);
            fVar55 = fVar48 + fVar55 * DAT_1401fd04c * 0.2 + fVar79 * DAT_1401fd048 * 0.2;
            fVar50 = fVar90 - fVar50;
            fVar48 = fVar55 - fVar48;
            auVar58 = ZEXT416((uint)(fVar48 * fVar48 + fVar50 * fVar50 + 0.0));
            auVar58 = vsqrtss_avx(auVar58,auVar58);
            fVar46 = auVar58._0_4_;
            fVar50 = fVar50 * (1.0 / fVar46);
            fVar48 = fVar48 * (1.0 / fVar46);
            fVar79 = fVar49 * fVar50 + fVar51 * fVar48;
            fVar52 = fVar51 * fVar50 - fVar49 * fVar48;
            auVar144._8_4_ = 0x7fffffff;
            auVar144._0_8_ = 0x7fffffff7fffffff;
            auVar144._12_4_ = 0x7fffffff;
            auVar145 = ZEXT1664(auVar144);
            auVar58 = vandps_avx(auVar144,ZEXT416((uint)fVar52));
            auVar63 = vsqrtss_avx(ZEXT416((uint)(fVar46 * fVar46)),ZEXT416((uint)(fVar46 * fVar46)))
            ;
            fVar50 = auVar63._0_4_;
            auVar63 = ZEXT416((uint)(fVar50 * fVar50 + 0.0));
            auVar63 = vsqrtss_avx(auVar63,auVar63);
            fVar56 = 1.0 / auVar63._0_4_;
            fVar47 = fVar50 * fVar56;
            fVar56 = fVar56 * 0.0;
            fVar46 = auVar58._0_4_ * fVar56 + fVar47 * fVar79 + 0.0;
            if (fVar46 <= 0.0) {
              local_218 = fVar79 * fVar79;
              local_228 = fVar52 * fVar52;
LAB_14014ce3c:
              auVar58 = ZEXT416((uint)(local_228 + local_218 + 0.0));
              auVar58 = vsqrtss_avx(auVar58,auVar58);
              fVar55 = auVar58._0_4_;
            }
            else {
              if (fVar50 <= fVar46) {
                local_218 = local_218 - fVar90;
                local_228 = local_228 - fVar55;
                local_218 = local_218 * local_218;
                local_228 = local_228 * local_228;
                goto LAB_14014ce3c;
              }
              fVar55 = fVar47 * auVar58._0_4_ + fVar79 * -fVar56 + 0.0;
            }
            auVar60 = vminss_avx(ZEXT416(auVar60._0_4_),ZEXT416((uint)(fVar88 + -0.05)));
            auVar60 = vminss_avx(auVar60,ZEXT416((uint)(fVar89 + -0.05)));
            auVar60 = vminss_avx(auVar60,ZEXT416((uint)(fVar55 + -0.05)));
            lVar14 = 1;
            bVar6 = false;
          } while (bVar37);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar45 + iVar13.field0_0x0._4_4_) +
           (int)uVar44 + iVar13.field0_0x0._0_4_] = auVar60._0_4_;
          uVar44 = uVar44 + 1;
        } while (uVar44 != 0x80);
        uVar17 = (ulonglong)(iVar45 + 1U);
      } while (iVar45 + 1U != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x4e45474552;
    pmVar10[lVar14].id._s_0.hi = 0;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar40 + 8);
    rVar23._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar23._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar23;
  }
  iVar13 = get_icon_coords(iVar40 + 8);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar145 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar135._0_12_ = ZEXT812(0);
      auVar135._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0;
        fVar55 = fVar146 + 0.15;
        auVar124 = vmovsldup_avx(ZEXT416((uint)fVar146));
        auVar81._0_4_ = auVar124._0_4_ + -0.6;
        auVar81._4_4_ = auVar124._4_4_ + -0.32;
        auVar81._8_4_ = auVar124._8_4_ + 0.0;
        auVar81._12_4_ = auVar124._12_4_ + 0.0;
        auVar93._8_4_ = 0x7fffffff;
        auVar93._0_8_ = 0x7fffffff7fffffff;
        auVar93._12_4_ = 0x7fffffff;
        auVar124 = vandps_avx(auVar81,auVar93);
        auVar59 = vandps_avx(ZEXT416((uint)(fVar146 + -0.12)),auVar93);
        lVar14 = 0;
        do {
          fVar146 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          auVar60 = vandps_avx(ZEXT416((uint)fVar146),auVar145._0_16_);
          fVar79 = auVar60._0_4_;
          if (fVar55 + fVar79 <= 0.5) {
            auVar60 = vandps_avx(ZEXT416((uint)(fVar79 - fVar55)),auVar145._0_16_);
            fVar79 = auVar60._0_4_ / 1.4142135;
          }
          else {
            auVar60 = ZEXT416((uint)((fVar79 + -0.25) * (fVar79 + -0.25) + 0.0 +
                                    (fVar55 + -0.25) * (fVar55 + -0.25)));
            auVar60 = vsqrtss_avx(auVar60,auVar60);
            fVar79 = auVar60._0_4_;
          }
          auVar60 = vmovsldup_avx(ZEXT416((uint)fVar146));
          auVar65._0_4_ = auVar60._0_4_ + -0.1;
          auVar65._4_4_ = auVar60._4_4_ + 0.45;
          auVar65._8_4_ = auVar60._8_4_ + 0.0;
          auVar65._12_4_ = auVar60._12_4_ + 0.0;
          auVar112._8_4_ = 0x7fffffff;
          auVar112._0_8_ = 0x7fffffff7fffffff;
          auVar112._12_4_ = 0x7fffffff;
          auVar60 = vandps_avx(auVar65,auVar112);
          auVar58 = vmaxps_avx(auVar124,auVar60);
          auVar60 = vminps_avx(auVar60,auVar124);
          auVar119._0_4_ = auVar58._0_4_ + -0.14;
          auVar119._4_4_ = auVar58._4_4_ + -0.14;
          auVar119._8_4_ = auVar58._8_4_ + 0.0;
          auVar119._12_4_ = auVar58._12_4_ + 0.0;
          auVar131._0_4_ = auVar60._0_4_ + -0.05;
          auVar131._4_4_ = auVar60._4_4_ + -0.05;
          auVar131._8_4_ = auVar60._8_4_ + 0.0;
          auVar131._12_4_ = auVar60._12_4_ + 0.0;
          auVar60 = vandps_avx(ZEXT416((uint)(fVar146 + -0.45)),auVar112);
          auVar63 = vmaxss_avx(auVar59,auVar60);
          auVar60 = vminss_avx(auVar60,auVar59);
          fVar146 = auVar60._0_4_ + -0.05;
          auVar82 = ZEXT416((uint)(auVar63._0_4_ + -0.14));
          auVar60 = vmaxss_avx(auVar82,ZEXT416((uint)fVar146));
          auVar139._0_8_ = auVar60._0_8_ ^ 0x8000000080000000;
          auVar139._8_4_ = auVar60._8_4_ ^ 0x80000000;
          auVar139._12_4_ = auVar60._12_4_ ^ 0x80000000;
          auVar67 = ZEXT416((uint)fVar146);
          if (auVar60._0_4_ <= -auVar60._0_4_) {
            auVar82 = ZEXT416((uint)(0.05 - auVar63._0_4_));
            auVar67 = auVar139;
          }
          auVar91 = vmaxps_avx(auVar119,auVar131);
          auVar109._0_8_ = auVar91._0_8_ ^ 0x8000000080000000;
          auVar109._8_4_ = auVar91._8_4_ ^ 0x80000000;
          auVar109._12_4_ = auVar91._12_4_ ^ 0x80000000;
          auVar96 = vcmpps_avx(auVar109,auVar91,1);
          auVar129._8_4_ = 0x3d4ccccd;
          auVar129._0_8_ = 0x3d4ccccd3d4ccccd;
          auVar129._12_4_ = 0x3d4ccccd;
          auVar58 = vsubps_avx(auVar129,auVar58);
          auVar63 = vblendvps_avx(auVar58,auVar119,auVar96);
          auVar100 = vblendvps_avx(auVar109,auVar131,auVar96);
          auVar91 = vcmpps_avx(auVar91,auVar109,4);
          auVar110._8_4_ = 0xbf800000;
          auVar110._0_8_ = 0xbf800000bf800000;
          auVar110._12_4_ = 0xbf800000;
          auVar58 = vblendvps_avx(auVar110,___xmm_00000000000000003f8000003f800000,auVar96);
          auVar58 = vandps_avx(auVar91,auVar58);
          auVar63 = vmaxps_avx(auVar63,ZEXT816(0));
          auVar100 = vmaxps_avx(auVar100,ZEXT816(0));
          auVar111._0_4_ = auVar100._0_4_ * auVar100._0_4_ + auVar63._0_4_ * auVar63._0_4_ + 0.0;
          auVar111._4_4_ = auVar100._4_4_ * auVar100._4_4_ + auVar63._4_4_ * auVar63._4_4_ + 0.0;
          auVar111._8_4_ = auVar100._8_4_ * auVar100._8_4_ + auVar63._8_4_ * auVar63._8_4_ + 0.0;
          auVar111._12_4_ =
               auVar100._12_4_ * auVar100._12_4_ + auVar63._12_4_ * auVar63._12_4_ + 0.0;
          auVar63 = vsqrtps_avx(auVar111);
          auVar64._0_4_ = auVar58._0_4_ * auVar63._0_4_;
          auVar64._4_4_ = auVar58._4_4_ * auVar63._4_4_;
          auVar64._8_4_ = auVar58._8_4_ * auVar63._8_4_;
          auVar64._12_4_ = auVar58._12_4_ * auVar63._12_4_;
          auVar58 = vmovshdup_avx(auVar64);
          auVar100 = vminss_avx(auVar64,auVar58);
          auVar58 = vcmpss_avx(auVar139,auVar60,1);
          auVar118._8_4_ = 0xbf800000;
          auVar118._0_8_ = 0xbf800000bf800000;
          auVar118._12_4_ = 0xbf800000;
          auVar58 = vblendvps_avx(auVar118,___xmm_3f8000003f8000003f8000003f800000,auVar58);
          auVar60 = vcmpss_avx(auVar60,auVar139,4);
          auVar60 = vandps_avx(auVar60,auVar58);
          auVar58 = vmaxss_avx(auVar82,auVar135);
          auVar63 = vmaxss_avx(auVar67,auVar135);
          auVar58 = ZEXT416((uint)(auVar63._0_4_ * auVar63._0_4_ +
                                  auVar58._0_4_ * auVar58._0_4_ + 0.0));
          auVar63 = vsqrtss_avx(auVar58,auVar58);
          auVar58 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),ZEXT416((uint)(fVar79 + -0.3)));
          auVar63 = vminss_avx(auVar100,ZEXT416((uint)(auVar60._0_4_ * auVar63._0_4_)));
          auVar60 = vmaxss_avx(auVar58,ZEXT416((uint)(0.01 - auVar63._0_4_)));
          auVar60 = vminss_avx(auVar60,auVar63);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar60._0_4_;
          lVar14 = lVar14 + 1;
          auVar145 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x4954495341524150;
    pmVar10[lVar14].id._s_0.hi = 0x4d53;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar40 + 9);
    rVar24._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar24._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar24;
  }
  iVar13 = get_icon_coords(iVar40 + 9);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar150 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar145 = ZEXT1264(ZEXT812(0));
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0;
        fVar55 = fVar146 + 0.2;
        auVar124 = vandps_avx(auVar150._0_16_,ZEXT416((uint)fVar55));
        fVar79 = auVar124._0_4_;
        fVar88 = auVar145._0_4_;
        lVar14 = 0;
        do {
          fVar52 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          auVar124 = vmaxss_avx(ZEXT416((uint)((fVar146 - fVar52) + 0.8)),auVar145._0_16_);
          auVar130 = ZEXT1664(auVar124);
          fVar90 = auVar124._0_4_;
          fVar89 = fVar90 * -0.01;
          fVar56 = fVar146;
          fVar46 = cosf(fVar90 * fVar90 * 6.0);
          fVar90 = auVar130._0_4_ * -0.03;
          fVar47 = sinf(auVar130._0_4_ * 4.0);
          fVar89 = fVar89 * fVar46 + fVar90 * fVar47;
          fVar47 = fVar52 - fVar89;
          fVar56 = fVar56 - fVar89;
          fVar89 = fVar56 + -0.6;
          fVar46 = (fVar47 + 0.6) * 0.70710677;
          fVar90 = fVar46 + fVar89 * -0.70710677;
          fVar46 = fVar89 * 0.70710677 + fVar46;
          auVar59 = auVar150._0_16_;
          auVar124 = vandps_avx(auVar59,ZEXT416((uint)fVar46));
          fVar50 = auVar145._0_4_;
          fVar89 = auVar124._0_4_ * 0.30052042 + fVar50 + fVar90 * 0.95377547;
          if (fVar89 <= fVar50) {
            auVar124 = ZEXT416((uint)(fVar46 * fVar46 + fVar50 + fVar90 * fVar90));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar89 = auVar124._0_4_;
          }
          else if (1.0790737 <= fVar89) {
            fVar47 = fVar47 + -0.2;
            fVar56 = fVar56 + 0.2;
            auVar124 = ZEXT416((uint)(fVar56 * fVar56 + fVar50 + fVar47 * fVar47));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar89 = auVar124._0_4_ + -0.34;
          }
          else {
            fVar89 = auVar124._0_4_ * 0.95377547 + fVar50 + fVar90 * -0.30052042;
          }
          fVar52 = fVar52 + -0.2;
          auVar124 = vandps_avx(auVar59,ZEXT416((uint)fVar52));
          auVar150 = ZEXT1664(auVar124);
          fVar90 = auVar124._0_4_ + -0.1;
          fVar46 = fVar90 + fVar88 * fVar79;
          fVar47 = fVar79 - fVar50 * fVar90;
          auVar59 = vandps_avx(auVar59,ZEXT416((uint)fVar47));
          fVar90 = auVar59._0_4_ * 0.19999999 + fVar50 + fVar46 * 0.97979593;
          if (fVar90 <= fVar50) {
            auVar124 = ZEXT416((uint)(fVar47 * fVar47 + fVar50 + fVar46 * fVar46));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar90 = auVar124._0_4_;
          }
          else if (0.09797959 <= fVar90) {
            fVar90 = auVar124._0_4_ + -0.2;
            auVar124 = ZEXT416((uint)(fVar55 * fVar55 + fVar50 + fVar90 * fVar90));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar90 = auVar124._0_4_ + -0.02;
          }
          else {
            fVar90 = auVar59._0_4_ * 0.97979593 + fVar50 + fVar46 * -0.19999999;
          }
          fVar47 = DAT_1401fd028 * 0.2;
          fVar56 = DAT_1401fd02c * 0.2;
          fVar48 = DAT_1401fd028 * 0.1;
          fVar49 = DAT_1401fd02c * 0.1;
          fVar51 = fVar47 - fVar48;
          fVar53 = fVar56 - fVar49;
          auVar124 = ZEXT416((uint)(fVar53 * fVar53 + fVar50 + fVar51 * fVar51));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          auVar130 = ZEXT1664(auVar124);
          fVar107 = auVar124._0_4_;
          fVar46 = fVar107 * fVar107 + -0.0004;
          if (fVar46 < fVar50) {
            fVar46 = sqrtf(fVar46);
            fVar107 = auVar130._0_4_;
          }
          else {
            auVar124 = vsqrtss_avx(ZEXT416((uint)fVar46),ZEXT416((uint)fVar46));
            fVar46 = auVar124._0_4_;
          }
          fVar51 = fVar51 * (1.0 / fVar107);
          fVar53 = fVar53 * (1.0 / fVar107);
          fVar107 = auVar150._0_4_;
          fVar50 = (fVar107 - fVar48) * fVar51 + (fVar79 - fVar49) * fVar53;
          fVar53 = (fVar79 - fVar49) * fVar51 - (fVar107 - fVar48) * fVar53;
          auVar140._8_4_ = 0x7fffffff;
          auVar140._0_8_ = 0x7fffffff7fffffff;
          auVar140._12_4_ = 0x7fffffff;
          auVar124 = vandps_avx(auVar140,ZEXT416((uint)fVar53));
          auVar59 = ZEXT416((uint)(fVar46 * fVar46 + 0.0004));
          auVar59 = vsqrtss_avx(auVar59,auVar59);
          fVar51 = 1.0 / auVar59._0_4_;
          fVar49 = fVar46 * fVar51;
          fVar51 = fVar51 * 0.02;
          fVar54 = auVar145._0_4_;
          fVar48 = auVar124._0_4_ * fVar51 + fVar54 + fVar50 * fVar49;
          if (fVar48 <= fVar54) {
            auVar124 = ZEXT416((uint)(fVar53 * fVar53 + fVar54 + fVar50 * fVar50));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar46 = auVar124._0_4_;
          }
          else if (fVar46 <= fVar48) {
            auVar124 = ZEXT416((uint)((fVar79 - fVar56) * (fVar79 - fVar56) +
                                     fVar54 + (fVar107 - fVar47) * (fVar107 - fVar47)));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar46 = auVar124._0_4_ + -0.02;
          }
          else {
            fVar46 = auVar124._0_4_ * fVar49 + fVar54 + fVar50 * -fVar51;
          }
          fVar47 = fVar107 * fVar54 + fVar79 + -0.14;
          fVar50 = fVar54 * (fVar79 + -0.14) - fVar107;
          auVar124 = vandps_avx(auVar140,ZEXT416((uint)fVar50));
          fVar56 = auVar124._0_4_ * 0.20000002 + fVar54 + fVar47 * 0.97979593;
          if (fVar56 <= fVar54) {
            auVar124 = ZEXT416((uint)(fVar50 * fVar50 + fVar54 + fVar47 * fVar47));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar47 = auVar124._0_4_;
          }
          else if (0.09797958 <= fVar56) {
            auVar124 = ZEXT416((uint)((fVar79 + -0.24) * (fVar79 + -0.24) + fVar54 + fVar52 * fVar52
                                     ));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar47 = auVar124._0_4_ + -0.02;
          }
          else {
            fVar47 = auVar124._0_4_ * 0.97979593 + fVar54 + fVar47 * -0.20000002;
          }
          fVar52 = DAT_1401fd02c * 0.24;
          auVar130 = ZEXT464((uint)fVar52);
          fVar50 = DAT_1401fd028 * 0.24;
          auVar134 = ZEXT464((uint)fVar50);
          fVar48 = DAT_1401fd02c * 0.14;
          fVar49 = DAT_1401fd028 * 0.14;
          fVar51 = fVar52 - fVar48;
          auVar142 = ZEXT464((uint)fVar51);
          fVar53 = fVar50 - fVar49;
          auVar128 = ZEXT464((uint)fVar53);
          auVar124 = ZEXT416((uint)(fVar53 * fVar53 + fVar54 + fVar51 * fVar51));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          auVar151 = ZEXT1664(auVar124);
          fVar106 = auVar124._0_4_;
          fVar56 = fVar106 * fVar106 + -0.0004;
          if (fVar56 < fVar54) {
            fVar56 = sqrtf(fVar56);
            fVar107 = auVar150._0_4_;
            fVar106 = auVar151._0_4_;
            fVar52 = auVar130._0_4_;
            fVar51 = auVar142._0_4_;
            fVar53 = auVar128._0_4_;
            fVar50 = auVar134._0_4_;
          }
          else {
            auVar124 = vsqrtss_avx(ZEXT416((uint)fVar56),ZEXT416((uint)fVar56));
            fVar56 = auVar124._0_4_;
          }
          fVar51 = fVar51 * (1.0 / fVar106);
          fVar53 = fVar53 * (1.0 / fVar106);
          fVar54 = (fVar107 - fVar48) * fVar51 + (fVar79 - fVar49) * fVar53;
          fVar53 = (fVar79 - fVar49) * fVar51 - (fVar107 - fVar48) * fVar53;
          auVar147._8_4_ = 0x7fffffff;
          auVar147._0_8_ = 0x7fffffff7fffffff;
          auVar147._12_4_ = 0x7fffffff;
          auVar150 = ZEXT1664(auVar147);
          auVar124 = vandps_avx(auVar147,ZEXT416((uint)fVar53));
          auVar59 = ZEXT416((uint)(fVar56 * fVar56 + 0.0004));
          auVar59 = vsqrtss_avx(auVar59,auVar59);
          fVar51 = 1.0 / auVar59._0_4_;
          fVar49 = fVar56 * fVar51;
          fVar51 = fVar51 * 0.02;
          fVar106 = auVar145._0_4_;
          fVar48 = auVar124._0_4_ * fVar51 + fVar106 + fVar54 * fVar49;
          if (fVar48 <= fVar106) {
            auVar124 = ZEXT416((uint)(fVar53 * fVar53 + fVar106 + fVar54 * fVar54));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
          }
          else if (fVar56 <= fVar48) {
            auVar124 = ZEXT416((uint)((fVar79 - fVar50) * (fVar79 - fVar50) +
                                     fVar106 + (fVar107 - fVar52) * (fVar107 - fVar52)));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            auVar124 = ZEXT416((uint)(auVar124._0_4_ + -0.02));
          }
          else {
            auVar124 = ZEXT416((uint)(auVar124._0_4_ * fVar49 + fVar106 + fVar54 * -fVar51));
          }
          auVar59 = vminss_avx(ZEXT416((uint)fVar90),ZEXT416((uint)fVar46));
          auVar59 = vminss_avx(auVar59,ZEXT416((uint)fVar47));
          auVar124 = vminss_avx(auVar59,auVar124);
          auVar66._0_8_ = auVar124._0_8_ ^ 0x8000000080000000;
          auVar66._8_4_ = auVar124._8_4_ ^ 0x80000000;
          auVar66._12_4_ = auVar124._12_4_ ^ 0x80000000;
          auVar124 = vmaxss_avx(ZEXT416((uint)fVar89),auVar66);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = (__uint64)(char  [8])0x52454c4c414d53;
    pmVar10[lVar14].id._s_0.hi = 0;
    pmVar10[lVar14].weight = 0.5;
    iVar13 = get_icon_coords(iVar40 + 10);
    rVar25._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar25._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar25;
  }
  iVar13 = get_icon_coords(iVar40 + 10);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar145 = ZEXT464(0x3f000000);
      auVar132._8_4_ = 0x7fffffff;
      auVar132._0_8_ = 0x7fffffff7fffffff;
      auVar132._12_4_ = 0x7fffffff;
      auVar113._0_12_ = ZEXT812(0);
      auVar113._12_4_ = 0;
      do {
        auVar124 = vandps_avx(auVar132,ZEXT416((uint)(((float)(int)uVar17 + auVar145._0_4_) *
                                                      0.015625 + -1.0)));
        fVar146 = auVar124._0_4_;
        lVar14 = 0;
        do {
          auVar124 = vandps_avx(auVar132,ZEXT416((uint)(((float)(int)lVar14 + auVar145._0_4_) *
                                                        0.015625 + -1.0)));
          fVar79 = auVar124._0_4_;
          fVar55 = fVar146;
          if (fVar79 < fVar146 * 1.7320508) {
            auVar124 = ZEXT416((uint)(fVar146 * DAT_1401fd02c + fVar79 * DAT_1401fd028));
            fVar55 = fVar146 * DAT_1401fd028 - fVar79 * DAT_1401fd02c;
          }
          fVar79 = auVar124._0_4_;
          auVar59 = vandps_avx(ZEXT416((uint)((fVar79 + -0.35) * 0.0 + (0.0 - fVar55 * 0.20000002)))
                               ,auVar132);
          fVar88 = auVar59._0_4_ / 0.20000002;
          auVar104._0_4_ = (fVar55 * 0.0 + (fVar79 + -0.35) * 0.20000002 + 0.0) / 0.040000007;
          auVar104._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar67 = auVar145._0_16_;
          auVar59 = vcmpss_avx(auVar104,auVar67,1);
          auVar60 = vandnps_avx(auVar59,SUB6416(ZEXT464(0x3e4ccccd),0));
          auVar59 = vandps_avx(auVar132,ZEXT416((uint)(auVar104._0_4_ + -0.5)));
          auVar120._0_4_ = (fVar88 * 0.2 + auVar104._0_4_ * 0.040000007) / 0.080000006;
          auVar120._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar58 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar120);
          auVar63 = vmaxss_avx(auVar113,auVar58);
          auVar82 = ZEXT416((uint)(auVar59._0_4_ + -0.5));
          auVar100 = ZEXT416((uint)(fVar88 - auVar63._0_4_ * 0.2));
          auVar58 = vmaxss_avx(auVar100,auVar82);
          auVar59 = vcmpss_avx(auVar113,auVar58,1);
          auVar68._8_4_ = 0xbf800000;
          auVar68._0_8_ = 0xbf800000bf800000;
          auVar68._12_4_ = 0xbf800000;
          auVar59 = vblendvps_avx(auVar68,___xmm_3f8000003f8000003f8000003f800000,auVar59);
          auVar145 = ZEXT1664(auVar67);
          auVar58 = vcmpss_avx(auVar58,auVar113,4);
          auVar59 = vandps_avx(auVar58,auVar59);
          auVar58 = vinsertps_avx(auVar82,ZEXT416((uint)(auVar104._0_4_ - auVar63._0_4_)),0x10);
          auVar60 = vmaxss_avx(auVar113,ZEXT416((uint)(fVar88 - auVar60._0_4_)));
          auVar60 = vinsertps_avx(auVar60,auVar100,0x10);
          auVar83._0_4_ =
               auVar60._0_4_ * auVar60._0_4_ + auVar58._0_4_ * auVar58._0_4_ * 0.040000007;
          auVar83._4_4_ =
               auVar60._4_4_ * auVar60._4_4_ + auVar58._4_4_ * auVar58._4_4_ * 0.040000007;
          auVar83._8_4_ = auVar60._8_4_ * auVar60._8_4_ + auVar58._8_4_ * auVar58._8_4_ * 0.0;
          auVar83._12_4_ = auVar60._12_4_ * auVar60._12_4_ + auVar58._12_4_ * auVar58._12_4_ * 0.0;
          auVar60 = vmovshdup_avx(auVar83);
          auVar60 = vminss_avx(auVar83,auVar60);
          auVar60 = vsqrtss_avx(auVar60,auVar60);
          auVar58 = ZEXT416((uint)(fVar55 * fVar55 + fVar79 * fVar79 + 0.0));
          auVar58 = vsqrtss_avx(auVar58,auVar58);
          auVar59 = vminss_avx(ZEXT416((uint)(auVar58._0_4_ + -0.3)),
                               ZEXT416((uint)(auVar59._0_4_ * auVar60._0_4_)));
          auVar124 = vminss_avx(SUB6416(ZEXT464(0x3f266666),0),auVar124);
          auVar124 = vmaxss_avx(auVar67,auVar124);
          fVar79 = fVar79 - auVar124._0_4_;
          auVar124 = ZEXT416((uint)(fVar55 * fVar55 + fVar79 * fVar79 + 0.0));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          auVar124 = vminss_avx(auVar59,ZEXT416((uint)(auVar124._0_4_ + -0.06)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x524547474942;
    pmVar10[lVar14].id._s_0.hi = 0;
    pmVar10[lVar14].weight = 0.5;
    iVar13 = get_icon_coords(iVar40 + 0xb);
    rVar26._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar26._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar26;
  }
  iVar13 = get_icon_coords(iVar40 + 0xb);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar101._8_4_ = 0x7fffffff;
      auVar101._0_8_ = 0x7fffffff7fffffff;
      auVar101._12_4_ = 0x7fffffff;
      auVar114._0_12_ = ZEXT812(0);
      auVar114._12_4_ = 0;
      auVar136._8_4_ = 0xbf800000;
      auVar136._0_8_ = 0xbf800000bf800000;
      auVar136._12_4_ = 0xbf800000;
      do {
        auVar124 = vandps_avx(ZEXT416((uint)(((float)(int)uVar17 + 0.5) * 0.015625 + -1.0)),auVar101
                             );
        fVar146 = auVar124._0_4_;
        lVar14 = 0;
        do {
          auVar124 = vandps_avx(ZEXT416((uint)(((float)(int)lVar14 + 0.5) * 0.015625 + -1.0)),
                                auVar101);
          fVar79 = auVar124._0_4_;
          fVar55 = fVar146;
          if (fVar79 < fVar146 * 1.7320508) {
            auVar124 = ZEXT416((uint)(fVar79 * DAT_1401fd028 + fVar146 * DAT_1401fd02c));
            fVar55 = fVar146 * DAT_1401fd028 - fVar79 * DAT_1401fd02c;
          }
          fVar79 = auVar124._0_4_;
          auVar59 = vandps_avx(ZEXT416((uint)((fVar79 + -0.8) * 0.0 + fVar55 * 0.19999999 + 0.0)),
                               auVar101);
          fVar88 = auVar59._0_4_ / 0.19999999;
          auVar84._0_4_ = (fVar55 * 0.0 + (fVar79 + -0.8) * -0.19999999 + 0.0) / 0.039999995;
          auVar84._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar59 = vcmpss_avx(auVar84,SUB6416(ZEXT464(0x3f000000),0),1);
          auVar60 = vandnps_avx(auVar59,SUB6416(ZEXT464(0x3e4ccccd),0));
          auVar59 = vandps_avx(ZEXT416((uint)(auVar84._0_4_ + -0.5)),auVar101);
          auVar94._0_4_ = (fVar88 * 0.2 + auVar84._0_4_ * 0.039999995) / 0.08;
          auVar94._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar58 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar94);
          auVar63 = vmaxss_avx(auVar114,auVar58);
          auVar67 = ZEXT416((uint)(auVar59._0_4_ + -0.5));
          auVar82 = ZEXT416((uint)(fVar88 - auVar63._0_4_ * 0.2));
          auVar58 = vmaxss_avx(auVar82,auVar67);
          auVar59 = vcmpss_avx(auVar114,auVar58,1);
          auVar59 = vblendvps_avx(auVar136,___xmm_3f8000003f8000003f8000003f800000,auVar59);
          auVar58 = vcmpss_avx(auVar58,auVar114,4);
          auVar59 = vandps_avx(auVar58,auVar59);
          auVar58 = vinsertps_avx(auVar67,ZEXT416((uint)(auVar84._0_4_ - auVar63._0_4_)),0x10);
          auVar60 = vmaxss_avx(auVar114,ZEXT416((uint)(fVar88 - auVar60._0_4_)));
          auVar60 = vinsertps_avx(auVar60,auVar82,0x10);
          auVar85._0_4_ =
               auVar60._0_4_ * auVar60._0_4_ + auVar58._0_4_ * auVar58._0_4_ * 0.039999995;
          auVar85._4_4_ =
               auVar60._4_4_ * auVar60._4_4_ + auVar58._4_4_ * auVar58._4_4_ * 0.039999995;
          auVar85._8_4_ = auVar60._8_4_ * auVar60._8_4_ + auVar58._8_4_ * auVar58._8_4_ * 0.0;
          auVar85._12_4_ = auVar60._12_4_ * auVar60._12_4_ + auVar58._12_4_ * auVar58._12_4_ * 0.0;
          auVar60 = vmovshdup_avx(auVar85);
          auVar60 = vminss_avx(auVar85,auVar60);
          auVar60 = vsqrtss_avx(auVar60,auVar60);
          auVar58 = ZEXT416((uint)(fVar55 * fVar55 + fVar79 * fVar79 + 0.0));
          auVar58 = vsqrtss_avx(auVar58,auVar58);
          auVar59 = vminss_avx(ZEXT416((uint)(auVar58._0_4_ + -0.4)),
                               ZEXT416((uint)(auVar59._0_4_ * auVar60._0_4_)));
          auVar124 = vminss_avx(SUB6416(ZEXT464(0x3f266666),0),auVar124);
          auVar124 = vmaxss_avx(SUB6416(ZEXT464(0x3f000000),0),auVar124);
          fVar79 = fVar79 - auVar124._0_4_;
          auVar124 = ZEXT416((uint)(fVar55 * fVar55 + fVar79 * fVar79 + 0.0));
          auVar124 = vsqrtss_avx(auVar124,auVar124);
          auVar124 = vminss_avx(auVar59,ZEXT416((uint)(auVar124._0_4_ + -0.06)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x41434f4c4f484345;
    pmVar10[lVar14].id._s_0.hi = 0x4e4f4954;
    pmVar10[lVar14].weight = 1.0;
    *(undefined4 *)&pmVar10[lVar14].field_0x28 = 1;
    iVar13 = get_icon_coords(iVar40 + 0xc);
    rVar27._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar27._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar27;
  }
  iVar13 = get_icon_coords(iVar40 + 0xc);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar137._8_4_ = 0x7fffffff;
      auVar137._0_8_ = 0x7fffffff7fffffff;
      auVar137._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0;
        auVar124 = vmovsldup_avx(ZEXT416((uint)fVar146));
        fVar55 = auVar124._0_4_ + -0.4;
        fVar79 = auVar124._4_4_ + -0.15;
        fVar88 = auVar124._8_4_ + 0.0;
        fVar89 = auVar124._12_4_ + 0.0;
        lVar14 = 0;
        do {
          fVar90 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          auVar124 = ZEXT416((uint)(fVar146 * fVar146 + fVar90 * fVar90 + 0.0));
          auVar59 = vsqrtss_avx(auVar124,auVar124);
          auVar124 = vandps_avx(auVar137,ZEXT416((uint)(auVar59._0_4_ + -0.4)));
          auVar124 = vandps_avx(auVar137,ZEXT416((uint)(auVar124._0_4_ + -0.2)));
          auVar124 = vandps_avx(auVar137,ZEXT416((uint)(auVar124._0_4_ + -0.1)));
          auVar59 = vminss_avx(ZEXT416((uint)(auVar124._0_4_ + -0.035)),
                               ZEXT416((uint)(auVar59._0_4_ + -0.1)));
          fVar46 = fVar90 * 0.19611613 + fVar146 * 0.9805807;
          fVar47 = fVar146 * 0.19611613 + fVar90 * -0.9805807;
          auVar124 = vandps_avx(auVar137,ZEXT416((uint)fVar47));
          fVar56 = auVar124._0_4_ * 0.09000001 + fVar46 * 0.9959419 + 0.0;
          if (fVar56 <= 0.0) {
            auVar124 = ZEXT416((uint)(fVar46 * fVar46 + 0.0 + fVar47 * fVar47));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar46 = auVar124._0_4_;
LAB_14014e295:
            fVar46 = fVar46 + -0.01;
          }
          else {
            if (fVar56 < 0.99594176) {
              fVar46 = auVar124._0_4_ * 0.9959419 + fVar46 * -0.09000001 + 0.0;
              goto LAB_14014e295;
            }
            auVar124 = ZEXT416((uint)((fVar146 + -0.9805807) * (fVar146 + -0.9805807) +
                                     (fVar90 + -0.19611613) * (fVar90 + -0.19611613) + 0.0));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar46 = auVar124._0_4_ + -0.1;
          }
          auVar124 = vminss_avx(auVar59,ZEXT416((uint)fVar46));
          auVar59 = vmovsldup_avx(ZEXT416((uint)fVar90));
          fVar46 = auVar59._0_4_ + 0.4;
          fVar47 = auVar59._4_4_ + -0.43;
          fVar56 = auVar59._8_4_ + 0.0;
          fVar52 = auVar59._12_4_ + 0.0;
          auVar121._0_4_ = fVar55 * fVar55 + fVar46 * fVar46 + 0.0;
          auVar121._4_4_ = fVar79 * fVar79 + fVar47 * fVar47 + 0.0;
          auVar121._8_4_ = fVar88 * fVar88 + fVar56 * fVar56 + 0.0;
          auVar121._12_4_ = fVar89 * fVar89 + fVar52 * fVar52 + 0.0;
          auVar59 = vsqrtps_avx(auVar121);
          auVar122._0_4_ = auVar59._0_4_ + -0.1;
          auVar122._4_4_ = auVar59._4_4_ + -0.08;
          auVar122._8_4_ = auVar59._8_4_ + 0.0;
          auVar122._12_4_ = auVar59._12_4_ + 0.0;
          auVar59 = vmovshdup_avx(auVar122);
          auVar59 = vminss_avx(auVar122,auVar59);
          auVar60 = ZEXT416((uint)((fVar146 + 0.7) * (fVar146 + 0.7) +
                                  (fVar90 + 0.1) * (fVar90 + 0.1) + 0.0));
          auVar60 = vsqrtss_avx(auVar60,auVar60);
          auVar59 = vminss_avx(auVar59,ZEXT416((uint)(auVar60._0_4_ + -0.12)));
          fVar90 = auVar59._0_4_;
          auVar124 = vmaxss_avx(auVar124,ZEXT416((uint)(0.01 - fVar90)));
          auVar59 = vminss_avx(auVar124,auVar59);
          auVar124 = vandps_avx(auVar137,ZEXT416((uint)(fVar90 + -0.07)));
          auVar59 = vminss_avx(auVar59,ZEXT416((uint)(auVar124._0_4_ + -0.03)));
          auVar124 = vandps_avx(auVar137,ZEXT416((uint)(fVar90 + -0.14)));
          auVar124 = vminss_avx(auVar59,ZEXT416((uint)(auVar124._0_4_ + -0.02)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    mut_random_costs_index = n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x435f4d4f444e4152;
    pmVar10[lVar14].id._s_0.hi = 0x5354534f;
    pmVar10[lVar14].weight = 1.0;
    *(undefined4 *)&pmVar10[lVar14].field_0x28 = 1;
    iVar13 = get_icon_coords(iVar40 + 0xd);
    rVar28._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar28._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar28;
  }
  iVar13 = get_icon_coords(iVar40 + 0xd);
  uVar38 = *puVar9;
  pfVar41 = (float *)(ulonglong)uVar38;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar153._8_4_ = 0x7fffffff;
      auVar153._0_8_ = 0x7fffffff7fffffff;
      auVar153._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0;
        auVar124 = vmovsldup_avx(ZEXT416((uint)fVar146));
        auVar148._0_4_ = auVar124._0_4_ * 0.87758255;
        auVar148._4_4_ = auVar124._4_4_ * -0.42073548;
        auVar148._8_4_ = auVar124._8_4_ * 0.0;
        auVar148._12_4_ = auVar124._12_4_ * 0.0;
        lVar14 = 0;
        pfVar42 = pfVar41;
        do {
          pfVar41 = icon_atlas;
          fVar55 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          fVar79 = fVar55 * 0.8775825 - fVar146 * 0.22984892;
          auVar124 = vmovsldup_avx(ZEXT416((uint)fVar55));
          auVar70._0_4_ = auVar124._0_4_ * 0.0;
          auVar70._4_4_ = auVar124._4_4_ * 0.47942567;
          auVar70._8_4_ = auVar124._8_4_ * 0.0;
          auVar70._12_4_ = auVar124._12_4_ * 0.0;
          auVar123._0_4_ = auVar148._0_4_ + auVar70._0_4_;
          auVar123._4_4_ = auVar148._4_4_ + auVar70._4_4_;
          auVar123._8_4_ = auVar148._8_4_ + auVar70._8_4_;
          auVar123._12_4_ = auVar148._12_4_ + auVar70._12_4_;
          auVar59 = vsubps_avx(auVar148,auVar70);
          auVar124 = vblendps_avx(auVar123,auVar59,2);
          uVar43 = vextractps_avx(auVar59,1);
          fVar55 = (fVar79 + -0.4) / 0.4207356;
          auVar71._0_4_ = auVar124._0_4_ + -0.4;
          auVar71._4_4_ = auVar124._4_4_ + -0.4;
          auVar71._8_4_ = auVar124._8_4_ + -0.4;
          auVar71._12_4_ = auVar124._12_4_ + -0.4;
          auVar59 = vdivps_avx(auVar71,ZEXT816(0x3f45289f3ef57744));
          auVar60 = vmovshdup_avx(auVar59);
          fVar88 = auVar60._0_4_;
          if ((fVar88 <= fVar55) || (fVar88 <= auVar59._0_4_)) {
            if (fVar55 <= auVar59._0_4_) {
              auVar125._4_4_ = fVar79;
              auVar125._0_4_ = uVar43;
              auVar125._8_8_ = 0;
              auVar124 = vmovsldup_avx(auVar59);
              auVar74._0_4_ = auVar124._0_4_ * 0.7701511;
              auVar74._4_4_ = auVar124._4_4_ * 0.4207356;
              auVar74._8_4_ = auVar124._8_4_ * 0.0;
              auVar74._12_4_ = auVar124._12_4_ * 0.0;
              auVar60 = vsubps_avx(auVar125,auVar74);
              auVar124 = vandps_avx(auVar153,auVar60);
              auVar59 = vinsertps_avx(auVar60,auVar124,0x1c);
              fVar90 = auVar59._0_4_ + -0.0;
              fVar46 = auVar59._4_4_ + -0.2;
              fVar47 = auVar59._8_4_ + -0.0;
              fVar56 = auVar59._12_4_ + -0.2;
              auVar59 = vinsertps_avx(auVar124,auVar60,0x4c);
              fVar55 = auVar59._0_4_ + -0.0;
              fVar79 = auVar59._4_4_ + -0.2;
              fVar88 = auVar59._8_4_ + -0.0;
              fVar89 = auVar59._12_4_ + -0.2;
              auVar73._0_4_ = fVar55 * fVar55 + fVar90 * fVar90 + 0.0;
              auVar73._4_4_ = fVar79 * fVar79 + fVar46 * fVar46 + 0.0;
              auVar73._8_4_ = fVar88 * fVar88 + fVar47 * fVar47 + 0.0;
              auVar73._12_4_ = fVar89 * fVar89 + fVar56 * fVar56 + 0.0;
            }
            else {
              auVar59 = vmovsldup_avx(ZEXT416((uint)fVar55));
              auVar72._0_4_ = auVar124._0_4_ + auVar59._0_4_ * -0.47942555;
              auVar72._4_4_ = auVar124._4_4_ + auVar59._4_4_ * -0.7701511;
              auVar72._8_4_ = auVar124._8_4_ + auVar59._8_4_ * 0.0;
              auVar72._12_4_ = auVar124._12_4_ + auVar59._12_4_ * 0.0;
              uVar44 = CONCAT44(auVar72._4_4_,auVar72._0_4_);
              auVar117._0_8_ = uVar44 ^ 0x8000000080000000;
              auVar117._8_4_ = -auVar72._8_4_;
              auVar117._12_4_ = -auVar72._12_4_;
              auVar124 = vpshufd_avx(ZEXT416((uint)CONCAT71((int7)((ulonglong)pfVar42 >> 8),
                                                            auVar72._0_4_ < 0.0)),0);
              auVar124 = vpslld_avx(auVar124,0x1f);
              auVar124 = vblendvps_avx(auVar72,auVar117,auVar124);
              auVar59 = vmovsldup_avx(auVar124);
              fVar55 = auVar59._0_4_ + -0.0;
              fVar79 = auVar59._4_4_ + -0.2;
              fVar88 = auVar59._8_4_ + -0.0;
              fVar89 = auVar59._12_4_ + -0.2;
              auVar59 = vmovshdup_avx(auVar124);
              fVar90 = auVar59._0_4_ + -0.0;
              fVar46 = auVar59._4_4_ + -0.2;
              fVar47 = auVar59._8_4_ + -0.0;
              fVar56 = auVar59._12_4_ + -0.2;
              auVar73._0_4_ = fVar90 * fVar90 + fVar55 * fVar55 + 0.0;
              auVar73._4_4_ = fVar46 * fVar46 + fVar79 * fVar79 + 0.0;
              auVar73._8_4_ = fVar47 * fVar47 + fVar88 * fVar88 + 0.0;
              auVar73._12_4_ = fVar56 * fVar56 + fVar89 * fVar89 + 0.0;
            }
            auVar59 = vsqrtps_avx(auVar73);
            auVar75._0_4_ = auVar59._0_4_ + -0.08;
            auVar75._4_4_ = auVar59._4_4_ + -0.08;
            auVar75._8_4_ = auVar59._8_4_ + 0.0;
            auVar75._12_4_ = auVar59._12_4_ + 0.0;
            auVar59 = vmovshdup_avx(auVar75);
            auVar59 = vminss_avx(auVar75,auVar59);
          }
          else {
            auVar115._4_4_ = auVar123._0_4_;
            auVar115._0_4_ = fVar79;
            auVar115._8_8_ = 0;
            auVar69._0_4_ = fVar88 * 0.4207356;
            auVar69._4_4_ = auVar60._4_4_ * 0.47942555;
            auVar69._8_4_ = auVar60._8_4_ * 0.0;
            auVar69._12_4_ = auVar60._12_4_ * 0.0;
            auVar124 = vsubps_avx(auVar115,auVar69);
            auVar59 = vmovshdup_avx(auVar124);
            auVar59 = ZEXT416((uint)(auVar59._0_4_ * auVar59._0_4_ +
                                    auVar124._0_4_ * auVar124._0_4_ + 0.0));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            auVar59 = ZEXT416((uint)(auVar59._0_4_ + -0.08));
          }
          auVar124 = vandps_avx(auVar124,auVar153);
          auVar60 = vshufps_avx(auVar124,auVar124,0xf5);
          auVar124 = vmaxss_avx(auVar124,auVar60);
          auVar116._0_8_ = auVar59._0_8_ ^ 0x8000000080000000;
          auVar116._8_4_ = auVar59._8_4_ ^ 0x80000000;
          auVar116._12_4_ = auVar59._12_4_ ^ 0x80000000;
          auVar124 = vmaxss_avx(ZEXT416((uint)(auVar124._0_4_ + -0.4 + 0.01)),auVar116);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
          pfVar42 = pfVar41;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    mut_strafing_index = n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x474e494641525453;
    pmVar10[lVar14].id._s_0.hi = 0;
    pmVar10[lVar14].weight = 1.0;
    *(undefined4 *)&pmVar10[lVar14].field_0x28 = 1;
    iVar13 = get_icon_coords(iVar40 + 0xe);
    rVar29._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar29._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar29;
  }
  iVar13 = get_icon_coords(iVar40 + 0xe);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      auVar145 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar150 = ZEXT1264(ZEXT812(0));
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0 + 0.15;
        auVar124 = vandps_avx(auVar145._0_16_,ZEXT416((uint)fVar146));
        fVar55 = fVar146 + 0.1;
        fVar79 = fVar146 + 0.2;
        fVar88 = fVar146 + 0.35;
        fVar89 = fVar146 + -0.25;
        fVar90 = auVar150._0_4_;
        lVar14 = 0;
        do {
          fVar46 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          auVar59 = vandps_avx(auVar145._0_16_,ZEXT416((uint)fVar46));
          auVar145 = ZEXT1664(auVar59);
          fVar50 = 0.2;
          fVar47 = 0.4;
          fVar56 = 0.4;
          fVar52 = 0.2;
          auVar60 = auVar124;
          if (auVar124._0_4_ < auVar59._0_4_) {
            fVar50 = 0.4;
            fVar47 = 0.2;
            fVar56 = 0.2;
            fVar52 = 0.4;
            auVar60 = auVar59;
            auVar59 = auVar124;
          }
          fVar48 = fVar47 * fVar47 - fVar50 * fVar50;
          auVar134 = ZEXT464((uint)fVar48);
          auVar58 = vinsertps_avx(auVar60,auVar59,0x10);
          auVar76._0_4_ = fVar56 * auVar58._0_4_;
          auVar76._4_4_ = fVar52 * auVar58._4_4_;
          auVar76._8_4_ = auVar58._8_4_ * 0.0;
          auVar76._12_4_ = auVar58._12_4_ * 0.0;
          auVar58 = vmovsldup_avx(ZEXT416((uint)fVar48));
          auVar58 = vdivps_avx(auVar76,auVar58);
          auVar63 = vmovshdup_avx(auVar58);
          auVar130 = ZEXT1664(auVar63);
          fVar49 = auVar58._0_4_;
          auVar102._0_4_ = fVar49 * fVar49;
          auVar102._4_4_ = auVar58._4_4_ * auVar58._4_4_;
          auVar102._8_4_ = auVar58._8_4_ * auVar58._8_4_;
          auVar102._12_4_ = auVar58._12_4_ * auVar58._12_4_;
          auVar58 = vmovshdup_avx(auVar102);
          auVar151 = ZEXT1664(auVar58);
          fVar107 = (auVar58._0_4_ + auVar102._0_4_ + -1.0) / 3.0;
          fVar51 = fVar107 * fVar107 * fVar107;
          fVar52 = auVar58._0_4_ * auVar102._0_4_;
          fVar56 = fVar52 + fVar51;
          fVar52 = fVar52 + fVar56;
          fVar53 = auVar63._0_4_;
          fVar48 = fVar53 + fVar53 * auVar102._0_4_;
          local_1b8 = auVar59._0_4_;
          if (auVar150._0_4_ <= fVar56) {
            fVar49 = (fVar53 + fVar53) * fVar49;
            if (fVar56 < auVar150._0_4_) {
              fVar56 = sqrtf(fVar56);
            }
            else {
              auVar59 = vsqrtss_avx(ZEXT416((uint)fVar56),ZEXT416((uint)fVar56));
              fVar56 = auVar59._0_4_;
            }
            fVar49 = fVar49 * fVar56;
            auVar138 = ZEXT464((uint)(fVar49 + fVar52));
            auVar141._8_4_ = 0x7fffffff;
            auVar141._0_8_ = 0x7fffffff7fffffff;
            auVar141._12_4_ = 0x7fffffff;
            auVar128 = ZEXT1664(auVar141);
            auVar59 = vandps_avx(ZEXT416((uint)(fVar49 + fVar52)),auVar141);
            auVar134._0_4_ = powf(auVar59._0_4_,0.33333334);
            auVar134._4_60_ = extraout_var_06;
            auVar142 = ZEXT1664(auVar134._0_16_);
            auVar134 = ZEXT464((uint)(fVar52 - fVar49));
            auVar59 = vandps_avx(auVar128._0_16_,ZEXT416((uint)(fVar52 - fVar49)));
            auVar128._0_4_ = powf(auVar59._0_4_,0.33333334);
            auVar63 = auVar145._0_16_;
            fVar52 = auVar130._0_4_;
            auVar128._4_60_ = extraout_var_07;
            auVar59 = vinsertps_avx(auVar138._0_16_,auVar134._0_16_,0x10);
            auVar97._0_12_ = ZEXT812(0);
            auVar97._12_4_ = 0;
            auVar59 = vcmpps_avx(auVar59,auVar97,1);
            auVar58 = vinsertps_avx(auVar142._0_16_,auVar128._0_16_,0x10);
            auVar98._0_8_ = auVar58._0_8_ ^ 0x8000000080000000;
            auVar98._8_4_ = auVar58._8_4_ ^ 0x80000000;
            auVar98._12_4_ = auVar58._12_4_ ^ 0x80000000;
            auVar59 = vblendvps_avx(auVar58,auVar98,auVar59);
            auVar58 = vmovshdup_avx(auVar59);
            fVar56 = auVar151._0_4_ + auVar151._0_4_ +
                     (fVar107 * -4.0 - (auVar59._0_4_ + auVar58._0_4_));
            auVar59 = vinsertps_avx(ZEXT416((uint)(auVar59._0_4_ - auVar58._0_4_)),
                                    ZEXT416((uint)fVar48),0x10);
            auVar126._0_4_ = auVar59._0_4_ * 1.7320508;
            auVar126._4_4_ = auVar59._4_4_ * 2.0;
            auVar126._8_4_ = auVar59._8_4_ * 0.0;
            auVar126._12_4_ = auVar59._12_4_ * 0.0;
            auVar134 = ZEXT1664(auVar126);
            auVar59 = ZEXT416((uint)(fVar56 * fVar56 + auVar126._0_4_ * auVar126._0_4_));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            auVar151 = ZEXT1664(auVar59);
            fVar56 = auVar59._0_4_ - fVar56;
            if (fVar56 < auVar150._0_4_) {
              auVar142._0_4_ = sqrtf(fVar56);
              auVar63 = auVar145._0_16_;
              fVar52 = auVar130._0_4_;
              auVar126 = auVar134._0_16_;
              auVar59 = auVar151._0_16_;
              auVar142._4_60_ = extraout_var_08;
              auVar58 = auVar142._0_16_;
            }
            else {
              auVar58 = vsqrtss_avx(ZEXT416((uint)fVar56),ZEXT416((uint)fVar56));
            }
            auVar59 = vinsertps_avx(auVar58,auVar59,0x10);
            auVar59 = vdivps_avx(auVar126,auVar59);
            auVar58 = vmovshdup_avx(auVar59);
            fVar56 = auVar59._0_4_ + auVar58._0_4_;
            auVar149._8_4_ = 0x7fffffff;
            auVar149._0_8_ = 0x7fffffff7fffffff;
            auVar149._12_4_ = 0x7fffffff;
          }
          else {
            dVar57 = acos((double)(fVar52 / fVar51));
            auVar77._0_8_ = dVar57 / 3.0;
            auVar77._8_8_ = extraout_var_09._0_8_;
            auVar128 = ZEXT1664(CONCAT124(auVar77._4_12_,(float)auVar77._0_8_));
            fVar56 = cosf((float)auVar77._0_8_);
            fVar56 = fVar56 + 2.0;
            fVar51 = sinf(auVar128._0_4_);
            fVar51 = fVar51 * 1.7320508;
            fVar49 = auVar151._0_4_;
            fVar52 = fVar49 - fVar107 * (fVar51 + fVar56);
            if (fVar52 < auVar150._0_4_) {
              auVar138._0_4_ = sqrtf(fVar52);
              fVar49 = auVar151._0_4_;
              auVar138._4_60_ = extraout_var_05;
              auVar59 = auVar138._0_16_;
            }
            else {
              auVar59 = vsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
            }
            auVar63 = auVar145._0_16_;
            fVar52 = auVar130._0_4_;
            auVar58 = auVar134._0_16_;
            auVar151 = ZEXT1664(auVar59);
            fVar53 = auVar59._0_4_;
            fVar49 = fVar49 + -fVar107 * (fVar56 - fVar51);
            if (fVar49 < auVar150._0_4_) {
              fVar56 = sqrtf(fVar49);
              auVar63 = auVar145._0_16_;
              fVar52 = auVar130._0_4_;
              fVar53 = auVar151._0_4_;
              auVar58 = auVar134._0_16_;
            }
            else {
              auVar59 = vsqrtss_avx(ZEXT416((uint)fVar49),ZEXT416((uint)fVar49));
              fVar56 = auVar59._0_4_;
            }
            auVar149._8_4_ = 0x7fffffff;
            auVar149._0_8_ = 0x7fffffff7fffffff;
            auVar149._12_4_ = 0x7fffffff;
            auVar59 = vcmpss_avx(auVar150._0_16_,auVar58,1);
            auVar99._8_4_ = 0xbf800000;
            auVar99._0_8_ = 0xbf800000bf800000;
            auVar99._12_4_ = 0xbf800000;
            auVar59 = vblendvps_avx(auVar99,___xmm_3f8000003f8000003f8000003f800000,auVar59);
            auVar58 = vcmpss_avx(auVar58,auVar150._0_16_,4);
            auVar59 = vandps_avx(auVar58,auVar59);
            auVar58 = vandps_avx(auVar149,ZEXT416((uint)fVar48));
            fVar56 = auVar59._0_4_ * fVar53 + fVar56 + auVar58._0_4_ / (fVar53 * fVar56);
          }
          auVar145 = ZEXT1664(auVar149);
          fVar56 = (fVar56 - fVar52) * 0.5;
          auVar67 = auVar150._0_16_;
          auVar59 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar56 * fVar56)),auVar67);
          auVar59 = vsqrtss_avx(auVar59,auVar59);
          fVar47 = fVar47 * auVar59._0_4_;
          local_1b8 = fVar50 * fVar56 - local_1b8;
          fVar49 = auVar63._0_4_;
          fVar107 = auVar150._0_4_;
          auVar87._0_4_ = (fVar146 * 0.6 + fVar107 + fVar49 * fVar107) / 0.36;
          auVar87._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar59 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar87);
          auVar59 = vmaxss_avx(auVar67,auVar59);
          fVar52 = auVar59._0_4_;
          fVar56 = fVar107 * (1.0 - fVar52);
          fVar51 = fVar49 - (fVar107 * fVar52 + fVar56);
          fVar53 = fVar146 - (fVar52 * 0.6 + fVar56);
          fVar56 = fVar49 + -0.2;
          fVar52 = fVar56 * 0.9486833 + fVar55 * 0.31622776;
          fVar50 = fVar55 * 0.9486833 + fVar56 * -0.31622776;
          auVar59 = vandps_avx(auVar149,ZEXT416((uint)fVar50));
          fVar48 = fVar107 * auVar59._0_4_ + fVar107 + fVar52;
          local_218 = auVar60._0_4_;
          local_218 = fVar47 - local_218;
          auVar58 = ZEXT416((uint)(fVar53 * fVar53 + fVar107 + fVar51 * fVar51));
          auVar58 = vsqrtss_avx(auVar58,auVar58);
          if (fVar48 <= fVar107) {
            fVar52 = fVar52 * fVar52;
            fVar50 = fVar50 * fVar50;
LAB_14014f14a:
            auVar59 = ZEXT416((uint)(fVar50 + fVar107 + fVar52));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar52 = auVar59._0_4_;
          }
          else {
            if (0.31622776 <= fVar48) {
              fVar52 = (fVar49 + -0.5) * (fVar49 + -0.5);
              fVar50 = fVar146 * fVar146;
              goto LAB_14014f14a;
            }
            fVar52 = fVar107 + fVar52 * -0.0 + auVar59._0_4_;
          }
          fVar50 = (fVar49 + -0.5) * 0.44721365 + fVar146 * -0.8944271;
          fVar48 = fVar146 * 0.44721365 + (fVar49 + -0.5) * 0.8944271;
          auVar59 = vandps_avx(ZEXT416((uint)fVar48),auVar149);
          fVar51 = auVar59._0_4_ * -0.11180339 + fVar107 + fVar50 * 0.99373037;
          if (fVar51 <= fVar107) {
            auVar59 = ZEXT416((uint)(fVar48 * fVar48 + fVar107 + fVar50 * fVar50));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            auVar59 = ZEXT416((uint)(auVar59._0_4_ + -0.05));
          }
          else if (0.22220488 <= fVar51) {
            auVar59 = ZEXT416((uint)(fVar79 * fVar79 + fVar107 + (fVar49 + -0.6) * (fVar49 + -0.6)))
            ;
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            auVar59 = ZEXT416((uint)(auVar59._0_4_ + -0.025));
          }
          else {
            auVar59 = ZEXT416((uint)(auVar59._0_4_ * 0.99373037 + fVar107 + fVar50 * 0.11180339 +
                                    -0.05));
          }
          auVar82 = ZEXT416((uint)(local_218 * local_218 + fVar107 + local_1b8 * local_1b8));
          auVar100 = vsqrtss_avx(auVar82,auVar82);
          auVar127._0_8_ = auVar100._0_8_ ^ 0x8000000080000000;
          auVar127._8_4_ = auVar100._8_4_ ^ 0x80000000;
          auVar127._12_4_ = auVar100._12_4_ ^ 0x80000000;
          auVar82 = vcmpss_avx(auVar60,ZEXT416((uint)fVar47),1);
          fVar47 = fVar56 * 0.9284767 + fVar55 * -0.3713907;
          fVar56 = fVar55 * 0.9284767 + fVar56 * 0.3713907;
          auVar60 = vandps_avx(ZEXT416((uint)fVar56),auVar149);
          fVar50 = fVar107 * auVar60._0_4_ + fVar107 + fVar47;
          if (fVar50 <= fVar107) {
            fVar47 = fVar47 * fVar47;
            fVar56 = fVar56 * fVar56;
LAB_14014f2da:
            auVar60 = ZEXT416((uint)(fVar56 + fVar107 + fVar47));
            auVar60 = vsqrtss_avx(auVar60,auVar60);
            fVar47 = auVar60._0_4_;
          }
          else {
            if (0.26925823 <= fVar50) {
              fVar47 = (fVar49 + -0.45) * (fVar49 + -0.45);
              fVar56 = fVar79 * fVar79;
              goto LAB_14014f2da;
            }
            fVar47 = fVar107 + fVar47 * -0.0 + auVar60._0_4_;
          }
          auVar82 = vblendvps_avx(auVar100,auVar127,auVar82);
          fVar56 = (fVar49 + -0.45) * 0.44721365 + fVar79 * -0.8944271;
          fVar50 = fVar79 * 0.44721365 + (fVar49 + -0.45) * 0.8944271;
          auVar60 = vandps_avx(ZEXT416((uint)fVar50),auVar149);
          fVar48 = auVar60._0_4_ * -0.11180339 + fVar107 + fVar56 * 0.99373037;
          if (fVar48 <= fVar107) {
            auVar60 = ZEXT416((uint)(fVar50 * fVar50 + fVar107 + fVar56 * fVar56));
            auVar60 = vsqrtss_avx(auVar60,auVar60);
            auVar60 = ZEXT416((uint)(auVar60._0_4_ + -0.05));
          }
          else if (0.22220488 <= fVar48) {
            auVar60 = ZEXT416((uint)((fVar146 + 0.4) * (fVar146 + 0.4) +
                                    fVar107 + (fVar49 + -0.55) * (fVar49 + -0.55)));
            auVar60 = vsqrtss_avx(auVar60,auVar60);
            auVar60 = ZEXT416((uint)(auVar60._0_4_ + -0.025));
          }
          else {
            auVar60 = ZEXT416((uint)(auVar60._0_4_ * 0.99373037 + fVar107 + fVar56 * 0.11180339 +
                                    -0.05));
          }
          auVar58 = vminss_avx(auVar82,ZEXT416((uint)(auVar58._0_4_ + -0.05)));
          auVar58 = vminss_avx(auVar58,ZEXT416((uint)(fVar52 + -0.05)));
          auVar58 = vminss_avx(auVar58,auVar59);
          fVar56 = fVar49 + -0.15;
          fVar52 = fVar56 * 0.8000001 + fVar79 * -0.6;
          fVar50 = fVar79 * 0.8000001 + fVar56 * 0.6;
          auVar59 = vandps_avx(auVar149,ZEXT416((uint)fVar50));
          fVar48 = fVar107 * auVar59._0_4_ + fVar107 + fVar52;
          if (fVar48 <= fVar107) {
            fVar52 = fVar52 * fVar52;
            fVar50 = fVar50 * fVar50;
LAB_14014f47d:
            auVar59 = ZEXT416((uint)(fVar50 + fVar107 + fVar52));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar52 = auVar59._0_4_;
          }
          else {
            if (0.24999999 <= fVar48) {
              fVar52 = (fVar49 + -0.35) * (fVar49 + -0.35);
              fVar50 = fVar88 * fVar88;
              goto LAB_14014f47d;
            }
            fVar52 = fVar107 + fVar52 * -0.0 + auVar59._0_4_;
          }
          auVar59 = vminss_avx(auVar58,ZEXT416((uint)(fVar47 + -0.05)));
          auVar59 = vminss_avx(auVar59,auVar60);
          auVar60 = vminss_avx(auVar59,ZEXT416((uint)(fVar52 + -0.05)));
          fVar47 = fVar49 + -0.35;
          fVar52 = fVar107 * fVar47 + -fVar88;
          fVar50 = fVar107 * fVar88 + fVar47;
          auVar59 = vandps_avx(auVar149,ZEXT416((uint)fVar50));
          fVar48 = auVar59._0_4_ * -0.16666667 + fVar107 + fVar52 * 0.9860133;
          if (fVar48 <= fVar107) {
            auVar59 = ZEXT416((uint)(fVar50 * fVar50 + fVar107 + fVar52 * fVar52));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar47 = auVar59._0_4_;
LAB_14014eaf4:
            fVar47 = fVar47 + -0.05;
          }
          else {
            if (fVar48 < 0.147902) {
              fVar47 = auVar59._0_4_ * 0.9860133 + fVar107 + fVar52 * 0.16666667;
              goto LAB_14014eaf4;
            }
            auVar59 = ZEXT416((uint)((fVar146 + 0.5) * (fVar146 + 0.5) + fVar107 + fVar47 * fVar47))
            ;
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar47 = auVar59._0_4_ + -0.025;
          }
          auVar59 = vminss_avx(auVar60,ZEXT416((uint)fVar47));
          auVar60 = ZEXT416((uint)((fVar146 + -0.15) * (fVar146 + -0.15) + fVar107 + fVar56 * fVar56
                                  ));
          auVar60 = vsqrtss_avx(auVar60,auVar60);
          fVar47 = auVar60._0_4_ + -0.07;
          auVar95._0_4_ = -fVar47;
          auVar95._4_4_ = 0x80000000;
          auVar95._8_4_ = 0x80000000;
          auVar95._12_4_ = 0x80000000;
          auVar59 = vminss_avx(auVar59,ZEXT416((uint)(fVar47 + -0.05)));
          auVar59 = vmaxss_avx(auVar59,auVar95);
          auVar60 = ZEXT416((uint)(fVar79 * fVar79 + fVar107 + fVar46 * fVar46));
          auVar60 = vsqrtss_avx(auVar60,auVar60);
          auVar82 = vmaxss_avx(auVar59,ZEXT416((uint)(0.05 - auVar60._0_4_)));
          auVar59 = vandps_avx(auVar149,ZEXT416((uint)(fVar107 * (fVar49 + -0.55) +
                                                      fVar90 + fVar89 * -0.25)));
          fVar47 = auVar59._0_4_ * 4.0;
          fVar56 = (fVar89 * fVar107 + fVar107 + (fVar49 + -0.55) * 0.25) * 16.0;
          auVar59 = vcmpss_avx(ZEXT416((uint)fVar56),SUB6416(ZEXT464(0x3f000000),0),1);
          auVar59 = vandps_avx(auVar59,SUB6416(ZEXT464(0x3e800000),0));
          auVar60 = vandps_avx(auVar149,ZEXT416((uint)(fVar56 + -0.5)));
          fVar46 = fVar47 + -0.25;
          auVar58 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                               ZEXT416((uint)((fVar46 * -0.25 + fVar56 * 0.0625) * 8.0)));
          auVar100 = vmaxss_avx(auVar67,auVar58);
          auVar96 = ZEXT416((uint)(fVar46 + auVar100._0_4_ * 0.25));
          auVar91 = ZEXT416((uint)(auVar60._0_4_ + -0.5));
          auVar58 = vmaxss_avx(auVar96,auVar91);
          auVar60 = vcmpss_avx(auVar67,auVar58,1);
          auVar133._8_4_ = 0xbf800000;
          auVar133._0_8_ = 0xbf800000bf800000;
          auVar133._12_4_ = 0xbf800000;
          auVar60 = vblendvps_avx(auVar133,___xmm_3f8000003f8000003f8000003f800000,auVar60);
          auVar58 = vcmpss_avx(auVar67,auVar58,4);
          auVar60 = vandps_avx(auVar58,auVar60);
          auVar58 = vinsertps_avx(auVar91,ZEXT416((uint)(fVar56 - auVar100._0_4_)),0x10);
          auVar59 = vmaxss_avx(auVar67,ZEXT416((uint)(fVar47 - auVar59._0_4_)));
          auVar59 = vinsertps_avx(auVar59,auVar96,0x10);
          auVar86._0_4_ = auVar59._0_4_ * auVar59._0_4_ + auVar58._0_4_ * auVar58._0_4_ * 0.0625;
          auVar86._4_4_ = auVar59._4_4_ * auVar59._4_4_ + auVar58._4_4_ * auVar58._4_4_ * 0.0625;
          auVar86._8_4_ = auVar59._8_4_ * auVar59._8_4_ + auVar58._8_4_ * auVar58._8_4_ * 0.0;
          auVar86._12_4_ = auVar59._12_4_ * auVar59._12_4_ + auVar58._12_4_ * auVar58._12_4_ * 0.0;
          auVar59 = vmovshdup_avx(auVar86);
          auVar59 = vminss_avx(auVar86,auVar59);
          auVar59 = vsqrtss_avx(auVar59,auVar59);
          auVar60 = vminss_avx(auVar82,ZEXT416((uint)(auVar60._0_4_ * auVar59._0_4_)));
          auVar59 = vminss_avx(SUB6416(ZEXT464(0x3f0ccccd),0),auVar63);
          auVar59 = vmaxss_avx(SUB6416(ZEXT464(0x3eb33333),0),auVar59);
          fVar49 = fVar49 - auVar59._0_4_;
          auVar59 = ZEXT416((uint)(fVar89 * fVar89 + fVar107 + fVar49 * fVar49));
          auVar59 = vsqrtss_avx(auVar59,auVar59);
          auVar59 = vminss_avx(auVar60,ZEXT416((uint)(auVar59._0_4_ + -0.06)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar59._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x4c41575f4156414c;
    pmVar10[lVar14].id._s_0.hi = 0x534c;
    pmVar10[lVar14].weight = 0.1;
    iVar13 = get_icon_coords(iVar40 + 0xf);
    rVar30._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar30._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar30;
  }
  iVar13 = get_icon_coords(iVar40 + 0xf);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      fVar146 = 0.0;
      do {
        fVar55 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0 + 0.35;
        fVar79 = fVar55 + 0.11;
        fVar88 = fVar55 + 0.25;
        fVar89 = fVar55 + -0.1;
        fVar90 = fVar55 + -0.04546487 + -0.1;
        fVar46 = fVar55 + 0.04546487 + -0.1;
        fVar47 = fVar55 + -1.2;
        fVar56 = fVar55 + -0.04546487 + -1.2;
        fVar52 = fVar55 + 0.04546487 + -1.2;
        lVar14 = 0;
        do {
          fVar49 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          fVar50 = fVar49 * 5.0;
          fVar51 = sinf(fVar50);
          fVar51 = fVar51 * -0.05;
          fVar53 = sinf(fVar50 + 1.0);
          fVar53 = fVar53 * -0.065;
          fVar107 = sinf(fVar50 + -0.5);
          fVar107 = fVar107 * -0.08;
          fVar50 = sinf(fVar55 * 7.0 + fVar49 * 4.0);
          fVar49 = fVar50 * 0.05 + fVar49;
          fVar50 = fVar89 + fVar146 * fVar49;
          fVar54 = fVar89 * fVar146 - fVar49;
          auVar124 = vandps_avx(ZEXT416((uint)fVar54),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar48 = auVar124._0_4_ * -0.090909086 + fVar146 + fVar50 * 0.9958592;
          if (fVar48 <= fVar146) {
            auVar124 = ZEXT416((uint)(fVar54 * fVar54 + fVar146 + fVar50 * fVar50));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            fVar50 = auVar124._0_4_;
LAB_14014f894:
            auVar124 = ZEXT416((uint)(fVar50 + -0.1));
          }
          else {
            if (fVar48 < 1.0954452) {
              fVar50 = auVar124._0_4_ * 0.9958592 + fVar146 + fVar50 * 0.090909086;
              goto LAB_14014f894;
            }
            auVar124 = ZEXT416((uint)(fVar47 * fVar47 + fVar146 + fVar49 * fVar49));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
          }
          fVar50 = fVar49 + -0.4;
          fVar48 = fVar90 + fVar146 * fVar50;
          fVar106 = fVar90 * fVar146 - fVar50;
          auVar59 = vandps_avx(ZEXT416((uint)fVar106),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar54 = auVar59._0_4_ * -0.090909086 + fVar146 + fVar48 * 0.9958592;
          if (fVar54 <= fVar146) {
            auVar59 = ZEXT416((uint)(fVar106 * fVar106 + fVar146 + fVar48 * fVar48));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar50 = auVar59._0_4_;
LAB_14014f934:
            auVar59 = ZEXT416((uint)(fVar50 + -0.1));
          }
          else {
            if (fVar54 < 1.0954452) {
              fVar50 = auVar59._0_4_ * 0.9958592 + fVar146 + fVar48 * 0.090909086;
              goto LAB_14014f934;
            }
            auVar59 = ZEXT416((uint)(fVar56 * fVar56 + fVar146 + fVar50 * fVar50));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
          }
          fVar49 = fVar49 + 0.4;
          fVar50 = fVar46 + fVar146 * fVar49;
          fVar54 = fVar46 * fVar146 - fVar49;
          auVar60 = vandps_avx(ZEXT416((uint)fVar54),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar48 = auVar60._0_4_ * -0.090909086 + fVar146 + fVar50 * 0.9958592;
          if (fVar48 <= fVar146) {
            auVar60 = ZEXT416((uint)(fVar54 * fVar54 + fVar146 + fVar50 * fVar50));
            auVar60 = vsqrtss_avx(auVar60,auVar60);
            fVar50 = auVar60._0_4_;
LAB_14014f734:
            auVar60 = ZEXT416((uint)(fVar50 + -0.1));
          }
          else {
            if (fVar48 < 1.0954452) {
              fVar50 = auVar60._0_4_ * 0.9958592 + fVar146 + fVar50 * 0.090909086;
              goto LAB_14014f734;
            }
            auVar60 = ZEXT416((uint)(fVar52 * fVar52 + fVar146 + fVar49 * fVar49));
            auVar60 = vsqrtss_avx(auVar60,auVar60);
          }
          auVar105._0_4_ = -(fVar53 + fVar79);
          auVar105._4_4_ = 0x80000000;
          auVar105._8_4_ = 0x80000000;
          auVar105._12_4_ = 0x80000000;
          auVar58 = vmaxss_avx(ZEXT416((uint)(fVar51 + fVar55)),auVar105);
          auVar58 = vminss_avx(auVar58,ZEXT416((uint)(fVar107 + fVar88)));
          auVar124 = vminss_avx(auVar58,auVar124);
          auVar124 = vminss_avx(auVar124,auVar59);
          auVar124 = vminss_avx(auVar124,auVar60);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x524148435245564f;
    pmVar10[lVar14].id._s_0.hi = 0x4547;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar40 + 0x10);
    rVar31._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar31._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar31;
  }
  iVar13 = get_icon_coords(iVar40 + 0x10);
  uVar38 = *puVar9;
  if (render_icons == true) {
    uVar44 = (longlong)(int)(uVar38 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar7 = (int)(uVar38 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar7) {
      iVar45 = iVar13.field0_0x0._4_4_ + iVar45;
      do {
        fVar55 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0;
        fVar146 = fVar55 + 0.9;
        fVar55 = fVar55 + -0.27;
        lVar14 = 0;
        do {
          fVar79 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
          fVar88 = fVar79 * 0.9800666 + fVar146 * 0.19866933;
          fVar89 = fVar79 * -0.19866933 + fVar146 * 0.9800666;
          auVar124 = vcmpss_avx(SUB6416(ZEXT464(0x3e99999a),0),ZEXT416((uint)fVar89),1);
          auVar124 = vblendvps_avx(ZEXT416((uint)fVar88),ZEXT416((uint)(0.625 - fVar88)),auVar124);
          auVar59 = vcmpss_avx(SUB6416(ZEXT464(0x3f19999a),0),ZEXT416((uint)fVar89),1);
          auVar124 = vblendvps_avx(auVar124,ZEXT416((uint)(1.25 - auVar124._0_4_)),auVar59);
          fVar47 = auVar124._0_4_;
          fVar88 = fVar47 * 0.70710677 + fVar89 * 0.70710677;
          fVar90 = fVar47 * -0.70710677 + fVar89 * 0.70710677;
          auVar124 = vandps_avx(ZEXT416((uint)fVar90),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar46 = auVar124._0_4_ * 0.15713485 + fVar88 * 0.9875772 + 0.0;
          if (fVar46 <= 0.0) {
            auVar124 = ZEXT416((uint)(fVar90 * fVar90 + fVar88 * fVar88 + 0.0));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
          }
          else if (1.2569805 <= fVar46) {
            auVar124 = ZEXT416((uint)((fVar89 + -0.9) * (fVar89 + -0.9) +
                                     (fVar47 + -0.9) * (fVar47 + -0.9) + 0.0));
            auVar124 = vsqrtss_avx(auVar124,auVar124);
            auVar124 = ZEXT416((uint)(auVar124._0_4_ + -0.2));
          }
          else {
            auVar124 = ZEXT416((uint)(auVar124._0_4_ * 0.9875772 + fVar88 * -0.15713485 + 0.0));
          }
          auVar59 = ZEXT416((uint)(fVar55 * fVar55 + (fVar79 + -0.05) * (fVar79 + -0.05) + 0.0));
          auVar59 = vsqrtss_avx(auVar59,auVar59);
          auVar124 = vminss_avx(auVar124,ZEXT416((uint)(auVar59._0_4_ + -0.4)));
          auVar124 = vmaxss_avx(auVar124,ZEXT416((uint)(0.2 - auVar59._0_4_)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar13.field0_0x0._0_4_ + (int)lVar14] =
               auVar124._0_4_;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x80);
        uVar38 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar38;
        iVar45 = iVar45 + 1;
      } while (uVar38 != uVar7);
      uVar38 = *puVar9;
    }
  }
  pmVar10 = mutations_list;
  iVar45 = iVar40 + 0x11;
  if (uVar38 == 0) {
    lVar14 = (longlong)n_mutation_types;
    n_mutation_types = n_mutation_types + 1;
    pmVar4 = mutations_list + lVar14;
    auVar78 = ZEXT1232(ZEXT812(0));
    pmVar4->weight = (float)auVar78._0_4_;
    pmVar4->cum_weight = (float)auVar78._4_4_;
    pmVar4->uv = (real_2)auVar78._8_8_;
    pmVar4->extra_data_offset = auVar78._16_4_;
    pmVar4->n_imbues = auVar78._20_4_;
    *(longlong *)&pmVar4->field_0x28 = auVar78._24_8_;
    pmVar10[lVar14].id._s_0.lo = 0x4552555441455243;
    pmVar10[lVar14].id._s_0.hi = 0x52454d41545f;
    pmVar10[lVar14].weight = 1.0;
    iVar13 = get_icon_coords(iVar45);
    rVar33._s_0.y =
         ((float)iVar13.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar33._s_0.x =
         ((float)iVar13.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    pmVar10[lVar14].uv.field0_0x0 = rVar33;
    iVar32._s_0 = (int_2_u_0_s_0)get_icon_coords(iVar45);
  }
  else {
    iVar32._s_0 = (int_2_u_0_s_0)get_icon_coords(iVar45);
  }
  if (render_icons == true) {
    uVar44 = (longlong)(int)(*puVar9 * 0x80) / (longlong)*(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    uVar17 = uVar44 & 0xffffffff;
    uVar38 = (int)(*puVar9 * 0x80 + 0x80) / *(int *)(*(longlong *)(puVar9 + 2) + 0x10);
    iVar45 = (int)uVar44;
    if (iVar45 < (int)uVar38) {
      iVar45 = iVar32._s_0.y + iVar45;
      auVar103._8_4_ = 0x7fffffff;
      auVar103._0_8_ = 0x7fffffff7fffffff;
      auVar103._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar17 + 0.5) * 0.015625 + -1.0;
        auVar124 = vandps_avx(ZEXT416((uint)fVar146),auVar103);
        auVar124 = ZEXT416((uint)(0.05 - auVar124._0_4_));
        if (0.0 <= fVar146) {
          lVar14 = 0;
          do {
            fVar55 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
            auVar59 = ZEXT416((uint)(fVar146 * fVar146 + fVar55 * fVar55 + 0.0));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar55 = auVar59._0_4_;
            auVar59 = vmaxss_avx(ZEXT416((uint)(fVar55 + -0.8)),auVar124);
            auVar59 = vmaxss_avx(auVar59,ZEXT416((uint)(0.3 - fVar55)));
            auVar59 = vminss_avx(auVar59,ZEXT416((uint)(fVar55 + -0.25)));
            icon_atlas[icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar32._s_0.x + (int)lVar14] =
                 auVar59._0_4_;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x80);
        }
        else {
          lVar14 = 0;
          do {
            fVar55 = ((float)(int)lVar14 + 0.5) * 0.015625 + -1.0;
            auVar59 = ZEXT416((uint)(fVar146 * fVar146 + fVar55 * fVar55 + 0.0));
            auVar59 = vsqrtss_avx(auVar59,auVar59);
            fVar55 = auVar59._0_4_;
            auVar59 = vmaxss_avx(ZEXT416((uint)(fVar55 + -0.8)),auVar124);
            auVar59 = vmaxss_avx(auVar59,ZEXT416((uint)(0.3 - fVar55)));
            auVar59 = vmaxss_avx(auVar59,ZEXT416((uint)(-0.1 - auVar59._0_4_)));
            auVar59 = vminss_avx(auVar59,ZEXT416((uint)(fVar55 + -0.25)));
            icon_atlas[icon_texture.size.field0_0x0._s_0.x * iVar45 + iVar32._s_0.x + (int)lVar14] =
                 auVar59._0_4_;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x80);
        }
        uVar7 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar7;
        iVar45 = iVar45 + 1;
      } while (uVar7 != uVar38);
    }
  }
  pvVar34 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar34 + 8) + 0x18,0);
  if (*puVar9 == 0) {
    next_icon_index = iVar40 + 0x12;
    uVar38 = n_mutation_types - 1U >> 1 | n_mutation_types - 1U;
    uVar38 = uVar38 >> 2 | uVar38;
    uVar38 = uVar38 >> 4 | uVar38;
    uVar38 = uVar38 >> 8 | uVar38;
    uVar38 = (uVar38 >> 0x10 | uVar38) * 2 + 2;
    mutation_hash_table_len = 0x400;
    if (0x400 < uVar38) {
      mutation_hash_table_len = uVar38;
    }
    mutation_hash_table =
         (id_t_index *)dynamic_realloc(mutation_hash_table,(longlong)mutation_hash_table_len * 0x18)
    ;
    iVar40 = 0;
    memset(mutation_hash_table,0,(longlong)mutation_hash_table_len);
    if (0 < n_mutation_types) {
      lVar14 = 0;
      do {
        pmVar10 = mutations_list;
        fVar146 = (float)iVar40 + mutations_list[lVar14].weight;
        auVar124 = vcvtdq2ps_avx(ZEXT416((uint)(int)fVar146));
        mutations_list[lVar14].cum_weight = auVar124._0_4_;
        uVar38 = (int)pmVar10[lVar14].id.string[0] ^ 0x2b5a5;
        iVar40 = (uVar38 * 0x21 + 0x2b5a5 ^ (int)pmVar10[lVar14].id.string[1]) + uVar38 + 0x1505;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[2]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[3]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[4]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[5]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[6]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[7]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[8]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[9]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[10]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[0xb]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[0xc]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[0xd]) + iVar40;
        iVar40 = (iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[0xe]) + iVar40;
        uVar17 = (ulonglong)
                 ((iVar40 * 0x21 ^ (int)pmVar10[lVar14].id.string[0xf]) + iVar40 &
                 mutation_hash_table_len - 1U);
        uVar44 = uVar17;
        if (mutation_hash_table[uVar17].id._s_0.hi != 0 ||
            mutation_hash_table[uVar17].id._s_0.lo != 0) {
          iVar40 = 1;
          do {
            uVar38 = iVar40 * iVar40 + (int)uVar17 & mutation_hash_table_len - 1U;
            uVar44 = (ulonglong)uVar38;
            iVar40 = iVar40 + 1;
            uVar17 = (ulonglong)uVar38;
          } while (mutation_hash_table[uVar44].id._s_0.hi != 0 ||
                   mutation_hash_table[uVar44].id._s_0.lo != 0);
        }
        piVar39 = mutation_hash_table + uVar44;
        iVar40 = (int)fVar146;
        _Var3 = pmVar10[lVar14].id._s_0.hi;
        (piVar39->id)._s_0.lo = pmVar10[lVar14].id._s_0.lo;
        (piVar39->id)._s_0.hi = _Var3;
        piVar39->index = (int)lVar14;
        lVar14 = lVar14 + 1;
      } while (lVar14 < n_mutation_types);
    }
    mutation_extra_data_offset = n_mutation_types + 3U & 0xfffffffc;
    w.body_auxiliary_size = mutation_extra_data_offset + iVar36;
  }
  pvVar34 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar34 + 8) + 0x18,0);
  return;
}

