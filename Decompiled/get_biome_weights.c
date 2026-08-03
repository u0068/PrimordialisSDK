
biome_weights * __cdecl
get_biome_weights(biome_weights *__return_storage_ptr__,map_t *param_1,real_2 param_2)

{
  real_2_u_0 rVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int_2_u_0_s_0 iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *unaff_R15;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  
  fVar6 = param_2.field0_0x0._0_4_ * 0.005;
  fVar7 = param_2.field0_0x0._4_4_ * 0.005;
  fVar8 = fVar6 - fVar7 * 0.57735026;
  fVar18 = (fVar7 + fVar7) * 0.57735026;
  auVar25 = vroundss_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),9);
  auVar26 = vroundss_avx(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),9);
  fVar20 = auVar25._0_4_;
  fVar24 = auVar26._0_4_;
  auVar25 = vcmpss_avx(SUB6416(ZEXT464(0x3f800000),0),
                       ZEXT416((uint)((fVar8 - fVar20) + (fVar18 - fVar24))),2);
  auVar25 = vandps_avx(auVar25,SUB6416(ZEXT464(0x3f800000),0));
  fVar19 = auVar25._0_4_;
  fVar18 = fVar20 + fVar19;
  fVar8 = fVar24 + fVar19;
  auVar25 = vroundss_avx(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),9);
  auVar26 = vroundss_avx(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),9);
  iVar9 = (int)auVar25._0_4_;
  uVar14 = (uint)auVar26._0_4_;
  iVar11 = (param_1->map_range).l.field0_0x0._s_0.x;
  iVar2 = (param_1->map_range).l.field0_0x0._s_0.y;
  iVar3 = (param_1->map_range).u.field0_0x0._s_0.x;
  iVar4 = (param_1->map_range).u.field0_0x0._s_0.y;
  iVar12 = 0;
  iVar13 = 0;
  if ((((iVar11 <= iVar9) && (iVar9 < iVar3)) && (iVar2 <= (int)uVar14)) && ((int)uVar14 < iVar4)) {
    unaff_R15 = param_1->biomes;
    iVar5 = (param_1->map_range).l.field0_0x0._s_0;
    iVar13 = iVar5.x;
    iVar13 = unaff_R15[(int)(((ulonglong)uVar14 << 0x20) - ((ulonglong)iVar5 & 0xffffffff00000000)
                            >> 0x20) * ((param_1->map_range).u.field0_0x0._s_0.x - iVar13) +
                       (iVar9 - iVar13)];
  }
  auVar25 = ZEXT416((uint)((1.0 - fVar19) + fVar20));
  auVar25 = vroundss_avx(auVar25,auVar25,9);
  iVar10 = (int)auVar25._0_4_;
  iVar9 = 0;
  if (((iVar11 <= iVar10) && (iVar9 = iVar12, iVar10 < iVar3)) &&
     ((iVar2 <= (int)uVar14 && ((int)uVar14 < iVar4)))) {
    iVar5 = (param_1->map_range).l.field0_0x0._s_0;
    iVar9 = iVar5.x;
    iVar9 = param_1->biomes
            [(int)(((ulonglong)uVar14 << 0x20) - ((ulonglong)iVar5 & 0xffffffff00000000) >> 0x20) *
             ((param_1->map_range).u.field0_0x0._s_0.x - iVar9) + (iVar10 - iVar9)];
  }
  auVar25 = ZEXT416((uint)((float)((uint)fVar19 | (uint)((ulonglong)unaff_R15 >> 0x20)) + fVar20));
  auVar25 = vroundss_avx(auVar25,auVar25,9);
  iVar10 = (int)auVar25._0_4_;
  iVar12 = 0;
  if ((iVar11 <= iVar10) && (iVar10 < iVar3)) {
    auVar25 = ZEXT416((uint)(fVar24 + (1.0 - fVar19)));
    auVar25 = vroundss_avx(auVar25,auVar25,9);
    uVar14 = (uint)auVar25._0_4_;
    iVar12 = 0;
    if ((iVar2 <= (int)uVar14) && ((int)uVar14 < iVar4)) {
      iVar5 = (param_1->map_range).l.field0_0x0._s_0;
      iVar11 = iVar5.x;
      iVar12 = param_1->biomes
               [(int)(((ulonglong)uVar14 << 0x20) - ((ulonglong)iVar5 & 0xffffffff00000000) >> 0x20)
                * ((param_1->map_range).u.field0_0x0._s_0.x - iVar11) + (iVar10 - iVar11)];
    }
  }
  fVar19 = 1.0 - (fVar19 + fVar19);
  fVar24 = fVar19 * (fVar7 + fVar8 * -0.8660254);
  fVar19 = fVar19 * (fVar6 - (fVar8 * 0.5 + fVar18));
  (__return_storage_ptr__->biomes).field0_0x0._s_0.x = iVar13;
  (__return_storage_ptr__->biomes).field0_0x0._s_0.y = iVar9;
  (__return_storage_ptr__->biomes).field0_0x0._s_0.z = iVar12;
  auVar25 = vinsertps_avx(ZEXT416((uint)(1.0 - fVar19)),ZEXT416((uint)fVar19),0x10);
  auVar26 = vmovsldup_avx(ZEXT416((uint)(fVar24 * -0.57735026)));
  auVar15._0_4_ = auVar26._0_4_ + auVar25._0_4_;
  auVar15._4_4_ = auVar26._4_4_ + auVar25._4_4_;
  auVar15._8_4_ = auVar26._8_4_ + auVar25._8_4_;
  auVar15._12_4_ = auVar26._12_4_ + auVar25._12_4_;
  fVar24 = fVar24 * 1.1547005;
  fVar19 = auVar15._0_4_ * auVar15._0_4_;
  fVar20 = auVar15._4_4_ * auVar15._4_4_;
  fVar21 = auVar15._8_4_ * auVar15._8_4_;
  fVar22 = auVar15._12_4_ * auVar15._12_4_;
  auVar25 = vmovshdup_avx(auVar15);
  auVar25 = vinsertps_avx(auVar25,ZEXT416((uint)fVar24),0x10);
  fVar18 = auVar25._0_4_;
  auVar26._0_4_ = fVar18 * fVar18;
  fVar8 = auVar25._4_4_;
  auVar26._4_4_ = fVar8 * fVar8;
  fVar6 = auVar25._8_4_;
  auVar26._8_4_ = fVar6 * fVar6;
  fVar7 = auVar25._12_4_;
  auVar26._12_4_ = fVar7 * fVar7;
  auVar25 = vmovshdup_avx(auVar26);
  fVar29 = auVar25._0_4_;
  auVar27._0_4_ = fVar19 * auVar26._0_4_ * 15.0;
  auVar27._4_4_ = fVar20 * auVar26._4_4_ * 15.0;
  auVar27._8_4_ = fVar21 * auVar26._8_4_ * 15.0;
  auVar27._12_4_ = fVar22 * auVar26._12_4_ * 15.0;
  auVar25 = vinsertps_avx(auVar15,ZEXT416((uint)fVar24),0x10);
  auVar25 = vshufps_avx(auVar25,auVar25,0xe1);
  auVar17._0_4_ = auVar25._0_4_ * auVar27._0_4_;
  auVar17._4_4_ = auVar25._4_4_ * auVar27._4_4_;
  auVar17._8_4_ = auVar25._8_4_ * auVar27._8_4_;
  auVar17._12_4_ = auVar25._12_4_ * auVar27._12_4_;
  auVar26 = vmovshdup_avx(auVar17);
  auVar25 = vmovsldup_avx(auVar27);
  auVar25 = vblendps_avx(auVar25,ZEXT416((uint)(fVar29 * fVar19 * 15.0)),1);
  fVar18 = fVar18 * auVar25._0_4_;
  auVar23._0_4_ = auVar15._0_4_ * 15.0;
  auVar23._4_4_ = auVar15._4_4_ * 15.0;
  auVar23._8_4_ = auVar15._8_4_ * 15.0;
  auVar23._12_4_ = auVar15._12_4_ * 15.0;
  auVar28._8_4_ = 0x41200000;
  auVar28._0_8_ = 0x4120000041200000;
  auVar28._12_4_ = 0x41200000;
  auVar23 = vsubps_avx(auVar28,auVar23);
  auVar16._0_4_ = auVar17._0_4_ + auVar15._0_4_ * fVar19 * (auVar23._0_4_ + fVar19 * 6.0) + fVar18;
  auVar16._4_4_ =
       auVar17._4_4_ +
       auVar15._4_4_ * fVar20 * (auVar23._4_4_ + fVar20 * 6.0) + fVar8 * auVar25._4_4_;
  auVar16._8_4_ =
       auVar17._8_4_ +
       auVar15._8_4_ * fVar21 * (auVar23._8_4_ + fVar21 * 0.0) + fVar6 * auVar25._8_4_;
  auVar16._12_4_ =
       auVar17._12_4_ +
       auVar15._12_4_ * fVar22 * (auVar23._12_4_ + fVar22 * 0.0) + fVar7 * auVar25._12_4_;
  rVar1 = (real_2_u_0)vmovlps_avx(auVar16);
  (__return_storage_ptr__->weights).field0_0x0.xy.field0_0x0 = rVar1;
  (__return_storage_ptr__->weights).field0_0x0._s_0.z =
       fVar24 * fVar29 * (fVar29 * 6.0 + (10.0 - fVar24 * 15.0)) + auVar26._0_4_ + fVar18;
  return __return_storage_ptr__;
}

