
/* WARNING: Removing unreachable block (ram,0x0001400c1c54) */
/* WARNING: Removing unreachable block (ram,0x0001400d3958) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl update_cells(render_context *param_1,render_context *param_2,user_input *param_3)

{
  uint *puVar1;
  cell_u_4096 *pcVar2;
  ulonglong *puVar3;
  cell_pickup *pcVar4;
  bone *pbVar5;
  particle_pusher_t *ppVar6;
  uchar *puVar7;
  lightning_t *plVar8;
  lightning_t *plVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  LARGE_INTEGER *pLVar12;
  bool *pbVar13;
  real_4 *prVar14;
  undefined8 *puVar15;
  real_2_u_0 *prVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar20;
  undefined8 uVar19;
  undefined4 uVar21;
  real_4_u_0 rVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  byte bVar29;
  int_2_u_0_s_0 iVar30;
  int_2_u_0_s_0 iVar31;
  boss_part_t *pbVar32;
  cell *pcVar33;
  plan_cell *ppVar34;
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  cell_pickup *pcVar42;
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  LARGE_INTEGER LVar46;
  LARGE_INTEGER LVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  bool bVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  real_2_u_0_s_0 rVar53;
  int **ppiVar54;
  queued_sound *pqVar55;
  portal_t *ppVar56;
  cell_item *pcVar57;
  cell_pickup_u_36 cVar58;
  real_4 rVar59;
  real_4 rVar60;
  real_4 rVar61;
  cell *pcVar62;
  queued_sound *pqVar63;
  material_t *pmVar64;
  boss_gate *pbVar65;
  undefined4 uVar66;
  tunnel_tile *ptVar67;
  int *piVar68;
  uint uVar69;
  int iVar70;
  int iVar71;
  context_t *pcVar72;
  LPVOID pvVar73;
  uint extraout_var;
  undefined4 extraout_var_00;
  int *piVar74;
  uchar *puVar75;
  wall_t *pwVar76;
  real_2 rVar77;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  real_2_u_0_s_0 rVar78;
  undefined4 extraout_var_03;
  particle_t *ppVar79;
  biome_core *pbVar80;
  light_reciever_t *plVar81;
  code *pcVar82;
  ulong64 *puVar83;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  cell *pcVar84;
  real_2_u_0 rVar85;
  real_2_u_0 rVar86;
  real_3 *prVar87;
  uchar *puVar88;
  real_2_u_0 rVar89;
  real_2 rVar90;
  real_2 rVar91;
  ulonglong extraout_RAX;
  undefined1 *puVar92;
  body *pbVar93;
  printer pVar94;
  byte bVar95;
  uint uVar96;
  int iVar97;
  doorway *pdVar98;
  doorway *pdVar99;
  lane_group_t *plVar100;
  char *pcVar101;
  undefined8 uVar102;
  bone *pbVar103;
  real_2_u_0 rVar104;
  real_2_u_0 rVar105;
  ulonglong uVar106;
  uint uVar107;
  float fVar108;
  ulonglong uVar109;
  longlong lVar110;
  mutation_pickup *pmVar111;
  real_2 rVar112;
  real_2_u_0 rVar113;
  real_2_u_0 rVar114;
  lightning_emitter *plVar115;
  ushort uVar116;
  undefined8 unaff_RBX;
  material_t *pmVar117;
  creature_spawner *pcVar118;
  creature_spawner *pcVar119;
  creature_spawner *pcVar120;
  ulonglong uVar121;
  undefined8 uVar122;
  ulonglong uVar123;
  real_2_u_0 rVar124;
  real_2_u_0 rVar125;
  real_2_u_0_s_0 rVar126;
  code *pcVar127;
  cell_pickup *pcVar128;
  cell_pickup *pcVar129;
  undefined4 uVar130;
  undefined4 uVar131;
  int iVar132;
  longlong lVar133;
  ulong64 uVar134;
  room_t *prVar135;
  int iVar136;
  longlong lVar137;
  real_2_u_0 rVar138;
  real_2 rVar139;
  longlong *plVar140;
  real_2_u_0 rVar141;
  longlong lVar142;
  real_2_u_0 rVar143;
  float *pfVar144;
  real_2_u_0 rVar145;
  real_2_u_0 rVar146;
  real_2_u_0 rVar147;
  real_2_u_0 *prVar148;
  id_index iVar149;
  real_2_u_0 rVar150;
  uint uVar151;
  void *pvVar152;
  real_2 *prVar153;
  real_2_u_0_s_0 rVar154;
  laser_t *plVar155;
  char cVar156;
  real_2_u_0_s_0 rVar157;
  undefined8 uVar158;
  real_2_u_0_s_0 rVar159;
  int *piVar160;
  real_2_u_0 rVar161;
  real_2_u_0 rVar162;
  longlong lVar163;
  pickup_node *ppVar164;
  explosion_t *peVar165;
  uint uVar166;
  real_2_u_0_s_0 rVar167;
  real_2_u_0_s_0 rVar168;
  real_2_u_0 rVar169;
  bool bVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  double dVar176;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  double dVar177;
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 extraout_var_07 [56];
  float fVar208;
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar225 [16];
  undefined1 auVar244 [32];
  float fVar245;
  float fVar246;
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 in_ZMM2 [64];
  float fVar279;
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  float fVar303;
  float fVar304;
  undefined1 auVar305 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  float fVar310;
  undefined1 in_ZMM5 [64];
  undefined1 auVar309 [64];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar324 [64];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar327 [64];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar332 [64];
  float fVar333;
  float fVar334;
  undefined1 auVar335 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar336 [64];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar346 [64];
  float fVar347;
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar350 [64];
  float fVar351;
  undefined1 auVar352 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar353 [64];
  float fVar354;
  undefined1 auVar358 [12];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar357 [64];
  float fVar359;
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar363 [64];
  float fVar365;
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar372 [12];
  undefined1 auVar370 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auVar371 [64];
  id_t local_3d8;
  id_t local_3c8;
  id_t local_3b8;
  id_t local_3a8;
  id_t local_398;
  id_t local_388;
  id_t local_378;
  id_t local_368;
  id_t local_358;
  id_t local_348;
  id_t local_338;
  id_t local_328;
  id_t local_318;
  spawn_creature_params local_300;
  longlong local_2f0;
  ulong64 *local_2e8;
  int *local_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [16];
  float local_28c;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  float afStack_268 [13];
  int local_234;
  int local_230;
  int local_22c;
  undefined1 *local_228;
  uint local_21c;
  float local_218;
  float local_214;
  real_2_u_0_s_0 local_210;
  undefined8 local_208;
  float fStack_200;
  float fStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  uchar *local_1c8;
  real_2_u_0_s_0 local_1c0;
  real_2_u_0_s_0 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  user_input *local_198;
  ulonglong local_190;
  undefined1 local_188 [16];
  uchar *local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [12];
  real_2_u_0 rStack_14c;
  float fStack_144;
  real_2_u_0 local_128;
  creature_spawner *local_120;
  LARGE_INTEGER local_118 [4];
  context_t *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 auVar306 [16];
  undefined1 auVar364 [64];
  
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_f0 = 0xfffffffffffffffe;
  local_210 = (real_2_u_0_s_0)param_1;
  local_198 = param_3;
  pcVar72 = TlsGetValue(tls_index);
  auVar248._4_4_ = n_threads;
  rVar78.y = 0.0;
  rVar78.x = (float)n_threads;
  uVar122._1_7_ = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar122._0_1_ = 1;
  local_f8 = pcVar72;
  if ((pcVar72->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("update_cells");
    auVar362 = in_ZMM15._0_16_;
    auVar258 = in_ZMM13._0_16_;
    auVar198 = in_ZMM12._0_16_;
    auVar317 = in_ZMM5._0_16_;
    auVar219 = in_ZMM2._0_16_;
    if ((pcVar72->field0_0x0)._s_0.lane_index == 0) {
      auVar178._0_12_ = ZEXT812(0);
      auVar178._12_4_ = 0;
      w.singing_volume._320_32_ = ZEXT1632(auVar178);
      w.singing_volume._192_32_ = ZEXT1632(auVar178);
      w.singing_volume._0_32_ = ZEXT1632(auVar178);
      w.singing_volume._32_32_ = w.singing_volume._0_32_;
      w.singing_volume._64_32_ = w.singing_volume._0_32_;
      w.singing_volume._96_32_ = w.singing_volume._0_32_;
      w.singing_volume._128_32_ = w.singing_volume._0_32_;
      w.singing_volume._160_32_ = w.singing_volume._0_32_;
      w.singing_volume._224_32_ = w.singing_volume._192_32_;
      w.singing_volume._256_32_ = w.singing_volume._192_32_;
      w.singing_volume._288_32_ = w.singing_volume._192_32_;
      w.singing_volume._352_32_ = w.singing_volume._320_32_;
      if (w.won != 0) {
        auVar324 = ZEXT1664(auVar219);
        auVar309 = ZEXT1664(auVar317);
        auVar327 = ZEXT1664(auVar198);
        auVar357 = ZEXT1664(auVar258);
        auVar332 = ZEXT1664(auVar362);
        do_credits();
        auVar362 = auVar332._0_16_;
        auVar258 = auVar357._0_16_;
        auVar198 = auVar327._0_16_;
        auVar317 = auVar309._0_16_;
        auVar219 = auVar324._0_16_;
      }
      local_188._0_4_ = auVar248._4_4_;
      local_188._4_4_ = 0.0;
      if ((w.final_boss.field0_0x0.active_flags == '\x02') &&
         (auVar219._0_12_ = ZEXT812(0), auVar219._12_4_ = 0,
         (w.final_boss.x.field0_0x0._s_0.y - w.camera_pos.field0_0x0._s_0.y) *
         (w.final_boss.x.field0_0x0._s_0.y - w.camera_pos.field0_0x0._s_0.y) +
         (w.final_boss.x.field0_0x0._s_0.x - w.camera_pos.field0_0x0._s_0.x) *
         (w.final_boss.x.field0_0x0._s_0.x - w.camera_pos.field0_0x0._s_0.x) + 0.0 < 40000.0)) {
        w.final_boss.field0_0x0.active_flags = '\0';
        auVar324 = ZEXT1664(auVar219);
        auVar309 = ZEXT1664(auVar317);
        auVar327 = ZEXT1664(auVar198);
        auVar357 = ZEXT1664(auVar258);
        auVar332 = ZEXT1664(auVar362);
        start_final_boss();
        auVar362 = auVar332._0_16_;
        auVar258 = auVar357._0_16_;
        auVar198 = auVar327._0_16_;
        auVar317 = auVar309._0_16_;
        auVar219 = auVar324._0_16_;
      }
      w.n_radiant_visuals = 0;
      w.n_stasis_visuals = 0;
      w.n_paint_visuals = 0;
      auVar324 = ZEXT1664(auVar219);
      auVar309 = ZEXT1664(auVar317);
      auVar327 = ZEXT1664(auVar198);
      auVar357 = ZEXT1664(auVar258);
      auVar332 = ZEXT1664(auVar362);
      begin_trace_stage("gates");
      auVar258 = auVar332._0_16_;
      auVar198 = auVar357._0_16_;
      auVar317 = auVar327._0_16_;
      auVar248 = auVar309._0_16_;
      auVar219 = auVar324._0_16_;
      if (0 < w.n_boss_gates) {
        auVar324 = ZEXT464(0x43480000);
        auVar327 = ZEXT1664(CONCAT412(0x80000000,CONCAT48(0x80000000,0x8000000080000000)));
        auVar332 = ZEXT1264(ZEXT812(0));
        auVar336 = ZEXT464(0x42c80000);
        auVar346 = ZEXT464(0x432d3480);
        auVar353 = ZEXT464(0x3f800000);
        auVar371 = ZEXT464(0x3c23d70a);
        auVar350 = ZEXT464(0x2f800000);
        auVar363 = ZEXT464(0x3ba3d70a);
        lVar133 = 0;
        lVar163 = 0;
        do {
          pfVar144 = w.map.wall_values;
          uVar66 = w.map.map_range.u.field0_0x0._s_0.x;
          uVar130 = w.map.map_range.l.field0_0x0._s_0.y;
          uVar131 = w.map.map_range.l.field0_0x0._s_0.x;
          pbVar65 = w.boss_gates;
          lVar110 = *(longlong *)((longlong)&((w.boss_gates)->pos).field0_0x0 + lVar133);
          uVar69 = *(uint *)((longlong)&(w.boss_gates)->boss_id + lVar133);
          if (((((int)uVar69 < 1) ||
               (uVar96 = w.bodies.n_max_elements + 0x7fffffffU & uVar69,
               w.bodies.field0_0x0.index_table[uVar96].id != uVar69)) ||
              (w.bodies.field3_0x20.elements == (body *)0x0)) ||
             (w.bodies.field3_0x20.elements[w.bodies.field0_0x0.index_table[uVar96].index].parent_id
              != 0)) {
            auVar317._0_4_ = (float)(int)lVar110;
            auVar317._4_8_ = SUB128(ZEXT812(0),4);
            auVar317._12_4_ = 0;
            auVar309 = ZEXT1264(ZEXT412(0)) << 0x20;
            fVar208 = (float)(int)((ulonglong)lVar110 >> 0x20);
            auVar248 = vandps_avx(auVar317,auVar327._0_16_);
            fVar171 = auVar332._0_4_;
            auVar198._4_4_ =
                 (auVar336._0_4_ * fVar208 + fVar171 + auVar317._0_4_ * auVar324._0_4_) -
                 w.camera_pos.field0_0x0._s_0.x;
            fVar208 = (auVar346._0_4_ * fVar208 + fVar171 + auVar248._0_4_) -
                      w.camera_pos.field0_0x0._s_0.y;
            auVar198._4_4_ = fVar208 * fVar208 + fVar171 + auVar198._4_4_ * auVar198._4_4_;
            auVar357 = ZEXT464((uint)auVar198._4_4_);
            if (((w.game_mode == 1) &&
                (*(int *)((longlong)&(w.boss_gates)->achievement_index + lVar133) != 0)) &&
               ((auVar198._4_4_ < 250000.0 && (steamless == false)))) {
              auVar309 = ZEXT1264(ZEXT412(0)) << 0x20;
              auVar324 = ZEXT1664(auVar324._0_16_);
              auVar327 = ZEXT1664(auVar327._0_16_);
              auVar332 = ZEXT1664(auVar332._0_16_);
              auVar336 = ZEXT1664(auVar336._0_16_);
              auVar346 = ZEXT1664(auVar346._0_16_);
              auVar350 = ZEXT1664(auVar350._0_16_);
              auVar353 = ZEXT1664(auVar353._0_16_);
              auVar357 = ZEXT464((uint)auVar198._4_4_);
              auVar363 = ZEXT1664(auVar363._0_16_);
              auVar371 = ZEXT1664(auVar371._0_16_);
              sprintf(local_158,"ACH_BIOME_%d");
              give_achievement(local_158);
              *(undefined4 *)((longlong)&pbVar65->achievement_index + lVar133) = 0;
              uVar122 = pfVar144;
            }
            uVar122._0_1_ = 1;
            if (((lVar133 == 0) && (auVar357._0_4_ < 40000.0)) && (pbVar65->boss_id != 0)) {
              w.map_prompt_timer = 0x5a0;
              pbVar65->boss_id = 0;
            }
            local_1b8.x = 0.0;
            local_1b8.y = 0.0;
            auVar198._4_4_ = auVar353._0_4_;
          }
          else {
            local_1b8 = (real_2_u_0_s_0)
                        (w.bodies.field3_0x20.elements +
                        w.bodies.field0_0x0.index_table[uVar96].index);
            uVar122._0_4_ = 0.0;
            uVar122._4_4_ = 0.0;
            auVar198._4_4_ = -0.1;
          }
          auVar248._4_4_ =
               (int)(lVar110 - ((ulonglong)(uint)uVar130 << 0x20) >> 0x20) * (uVar66 - uVar131) +
               ((int)lVar110 - uVar131);
          fVar208 = pfVar144[auVar248._4_4_];
          auVar219 = vandps_avx(ZEXT416((uint)(fVar208 - auVar198._4_4_)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar317 = auVar332._0_16_;
          if (auVar371._0_4_ <= auVar219._0_4_) {
            auVar219 = vcmpss_avx(auVar317,ZEXT416((uint)(auVar198._4_4_ - fVar208)),1);
            auVar258._8_4_ = 0xbf800000;
            auVar258._0_8_ = 0xbf800000bf800000;
            auVar258._12_4_ = 0xbf800000;
            auVar219 = vblendvps_avx(auVar258,___xmm_3f8000003f8000003f8000003f800000,auVar219);
            auVar198 = vcmpss_avx(auVar317,ZEXT416((uint)(auVar198._4_4_ - fVar208)),4);
            auVar198 = vandps_avx(auVar198,auVar219);
            auVar198._4_4_ = auVar371._0_4_ * auVar198._0_4_ + fVar208;
          }
          if ((auVar198._4_4_ != fVar208) ||
             (rVar78 = local_1b8, NAN(auVar198._4_4_) || NAN(fVar208))) {
            pfVar144[auVar248._4_4_] = auVar198._4_4_;
            auVar364 = ZEXT1664(auVar219);
            auVar309 = ZEXT1664(auVar309._0_16_);
            auVar324 = ZEXT1664(auVar324._0_16_);
            auVar327 = ZEXT1664(auVar327._0_16_);
            auVar332 = ZEXT1664(auVar317);
            auVar336 = ZEXT1664(auVar336._0_16_);
            auVar346 = ZEXT1664(auVar346._0_16_);
            auVar350 = ZEXT1664(auVar350._0_16_);
            auVar353 = ZEXT1664(auVar353._0_16_);
            auVar357 = ZEXT1664(auVar357._0_16_);
            auVar363 = ZEXT1664(auVar363._0_16_);
            auVar371 = ZEXT1664(auVar371._0_16_);
            update_static_cell_range
                      (*(int *)((longlong)&pbVar65->first_cell + lVar133),
                       *(int *)((longlong)&pbVar65->n_cells + lVar133));
            auVar219 = auVar364._0_16_;
            rVar78 = local_1b8;
          }
          auVar179 = auVar371._0_16_;
          auVar207 = auVar353._0_16_;
          auVar370 = auVar350._0_16_;
          auVar360 = auVar363._0_16_;
          auVar294 = auVar346._0_16_;
          auVar178 = auVar336._0_16_;
          auVar362 = auVar332._0_16_;
          auVar258 = auVar327._0_16_;
          auVar317 = auVar324._0_16_;
          local_1b8 = rVar78;
          if ((char)uVar122 == '\0') {
            uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
            uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
            uVar69 = uVar69 >> 0x10 ^ uVar69;
            uVar109 = (ulonglong)uVar69;
            local_f8->visual_seed = uVar69;
            auVar198._4_4_ = auVar350._0_4_ * (float)uVar109;
            if ((auVar198._4_4_ != auVar332._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar332._0_4_)))
            {
              fVar208 = auVar353._0_4_;
              uVar123 = 0;
              if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                auVar324 = ZEXT1664(auVar317);
                auVar309 = ZEXT1664(auVar258);
                auVar327 = ZEXT1664(auVar362);
                auVar357 = ZEXT1664(auVar178);
                auVar332 = ZEXT1664(auVar294);
                auVar336 = ZEXT1664(auVar370);
                auVar346 = ZEXT1664(auVar207);
                auVar350 = ZEXT1664(auVar360);
                auVar353 = ZEXT1664(auVar179);
                log();
                auVar179 = auVar353._0_16_;
                auVar207 = auVar346._0_16_;
                auVar370 = auVar336._0_16_;
                auVar360 = auVar350._0_16_;
                auVar294 = auVar332._0_16_;
                auVar178 = auVar357._0_16_;
                auVar362 = auVar327._0_16_;
                auVar258 = auVar309._0_16_;
                auVar317 = auVar324._0_16_;
                uVar123 = (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006);
                uVar109 = (ulonglong)local_f8->visual_seed;
              }
            }
            else {
              uVar123 = 0;
            }
            uVar69 = ((uint)(uVar109 >> 0x10) ^ (uint)uVar109) * 0x7feb352d;
            uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
            uVar69 = uVar69 >> 0x10 ^ uVar69;
            auVar358._8_4_ = 0;
            auVar358._0_8_ = SUB128(ZEXT812(0),4);
            local_f8->visual_seed = uVar69;
            auVar198._4_4_ = auVar370._0_4_ * (float)uVar69;
            if ((auVar198._4_4_ != auVar362._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar362._0_4_)))
            {
              fVar208 = auVar207._0_4_;
              if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                auVar324 = ZEXT1264(ZEXT812(0));
                auVar309 = ZEXT1664(auVar317);
                auVar327 = ZEXT1664(auVar258);
                auVar357 = ZEXT1664(auVar362);
                auVar332 = ZEXT1664(auVar178);
                auVar336 = ZEXT1664(auVar294);
                auVar346 = ZEXT1664(auVar370);
                auVar350 = ZEXT1664(auVar207);
                auVar353 = ZEXT1664(auVar360);
                auVar363 = ZEXT1664(auVar179);
                log();
                auVar179 = auVar363._0_16_;
                auVar207 = auVar350._0_16_;
                auVar370 = auVar346._0_16_;
                auVar360 = auVar353._0_16_;
                auVar294 = auVar336._0_16_;
                auVar178 = auVar332._0_16_;
                auVar362 = auVar357._0_16_;
                auVar258 = auVar327._0_16_;
                auVar317 = auVar309._0_16_;
                auVar358 = auVar324._4_12_;
                uVar123 = uVar123 | (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006) << 0x20;
              }
            }
            uVar122 = *(undefined8 *)((longlong)&(pbVar65->pos).field0_0x0 + lVar133);
            auVar247._0_4_ = (float)(int)uVar122;
            auVar247._4_12_ = auVar358;
            fVar208 = (float)(int)((ulonglong)uVar122 >> 0x20);
            auVar248 = vandps_avx(auVar247,auVar258);
            fVar171 = auVar178._0_4_ * fVar208;
            auVar198._4_4_ =
                 (float)uVar123 * 30.0 + fVar171 + auVar362._0_4_ + auVar247._0_4_ * auVar317._0_4_;
            fVar208 = (float)(uVar123 >> 0x20) * 30.0 +
                      auVar294._0_4_ * fVar208 + auVar362._0_4_ + auVar248._0_4_;
            auVar247 = ZEXT416((uint)(auVar360._0_4_ *
                                     ((((real_2 *)((longlong)rVar78 + 0xb0))->field0_0x0)._s_0.x -
                                     auVar198._4_4_)));
            auVar248 = vinsertps_avx(ZEXT416((uint)auVar198._4_4_),auVar247,0x10);
            auVar219 = vinsertps_avx(ZEXT416((uint)fVar208),
                                     ZEXT416((uint)(auVar360._0_4_ *
                                                   (*(float *)((longlong)rVar78 + 0xb4) - fVar208)))
                                     ,0x10);
            auVar219 = vunpcklps_avx(auVar248,auVar219);
            auVar248._4_4_ = *(int *)rVar78;
            auVar364 = ZEXT1664(auVar247);
            auVar309 = ZEXT464((uint)fVar171);
            auVar324 = ZEXT1664(auVar317);
            auVar327 = ZEXT1664(auVar258);
            auVar332 = ZEXT1664(auVar362);
            auVar336 = ZEXT1664(auVar178);
            auVar346 = ZEXT1664(auVar294);
            auVar350 = ZEXT1664(auVar370);
            auVar353 = ZEXT1664(auVar207);
            auVar357 = ZEXT1664(auVar219);
            auVar363 = ZEXT1664(auVar360);
            auVar371 = ZEXT1664(auVar179);
            pvVar73 = TlsGetValue(tls_index);
            auVar219 = auVar364._0_16_;
            uVar122 = rVar78;
            if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
              lVar110 = (longlong)w.max_particles;
              iVar70 = w.n_particles;
              if (w.max_particles <= w.n_particles) {
                w.max_particles = w.max_particles * 2;
                bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar110 * 0xf0);
                auVar219 = auVar364._0_16_;
                iVar70 = w.n_particles;
                if (!bVar170) goto LAB_1400c1c60;
              }
              uVar158 = w.field119_0x3dc0.particles;
              w.n_particles = iVar70 + 1;
              w.field119_0x3dc0.particles[iVar70].type = 7;
              auVar317 = auVar357._0_16_;
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->x = (real_2)auVar317._0_8_;
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->x_dot = (real_2)auVar317._8_8_;
              (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0 =
                   (real_2_u_0)0x0;
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->target = auVar248._4_4_;
              uVar102 = vmovlps_avx(SUB6416(ZEXT464(0x40a00000),0));
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->r = (float)(int)uVar102;
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->r_dot =
                   (float)(int)((ulonglong)uVar102 >> 0x20);
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->time = 0;
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->duration = 0x1e0;
              (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color).field0_0x0.xy.field0_0x0
                   = (real_2_u_0)0x0;
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color).field0_0x0._s_2.yz.
                 field0_0x0 + 4) = 0;
              (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color_initial).field0_0x0.xy.
              field0_0x0 = (real_2_u_0)0x3f8000003f800000;
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color_initial).field0_0x0.
                 _s_2.yz.field0_0x0 + 4) = 0x3e99999a3f800000;
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color_final =
                   (real_4)SUB3216(ZEXT832(0) << 0x20,0);
              ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->emission =
                   (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->emission).field0_0x0 + 0xd) =
                   0;
              rVar124 = (real_2_u_0)vmovlps_avx(auVar317);
              (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0 = rVar124;
            }
            else {
              uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                       *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
              uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar96 = uVar96 >> 0x10 ^ uVar96;
              uVar69 = (uint)(auVar350._0_4_ * (float)uVar96 * (float)w.n_particles);
              if ((int)(w.n_particles - 1U) < (int)uVar69) {
                uVar69 = w.n_particles - 1U;
              }
              uVar109 = (ulonglong)uVar69;
              *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
              if ((int)uVar69 < 1) {
                uVar109 = 0;
              }
              if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
                ppVar79 = w.field119_0x3dc0.particles + uVar109;
                ppVar79->type = 7;
                ppVar79->x = (real_2)SUB168(auVar357._0_16_,0);
                ppVar79->x_dot = (real_2)SUB168(auVar357._0_16_,8);
                (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                ppVar79->target = auVar248._4_4_;
                uVar102 = vmovlps_avx(SUB6416(ZEXT464(0x40a00000),0));
                ppVar79->r = (float)(int)uVar102;
                ppVar79->r_dot = (float)(int)((ulonglong)uVar102 >> 0x20);
                ppVar79->time = 0;
                ppVar79->duration = 0x1e0;
                (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x0;
                *(undefined8 *)((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) = 0;
                (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                *(undefined8 *)
                 ((longlong)&(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
                     0x3e99999a3f800000;
                ppVar79->color_final = (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                ppVar79->emission = (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
              }
            }
          }
LAB_1400c1c60:
          auVar258 = auVar371._0_16_;
          auVar198 = auVar357._0_16_;
          auVar317 = auVar353._0_16_;
          auVar248 = auVar309._0_16_;
          lVar163 = lVar163 + 1;
          lVar133 = lVar133 + 0x18;
        } while (lVar163 < w.n_boss_gates);
      }
      auVar324 = ZEXT1664(auVar219);
      auVar309 = ZEXT1664(auVar248);
      auVar327 = ZEXT1664(auVar317);
      auVar357 = ZEXT1664(auVar198);
      auVar332 = ZEXT1664(auVar258);
      pvVar73 = TlsGetValue(tls_index);
      if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
      }
      begin_trace_stage("update doorways");
      rVar78 = (real_2_u_0_s_0)local_188._0_8_;
      if (0 < w.map.n_doors) {
        lVar133 = 0x3c;
        lVar163 = 0;
        auVar336 = ZEXT1264(ZEXT812(0));
        auVar346 = ZEXT1664(CONCAT412(0xbf800000,CONCAT48(0xbf800000,0xbf800000bf800000)));
        auVar350 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
        auVar353 = ZEXT464(0x3b449ba6);
        auVar363 = ZEXT464(0x3f7f3b64);
        auVar371 = ZEXT464(0x3ba3d70a);
        pdVar98 = w.map.doors;
        do {
          lVar110 = *(longlong *)((longlong)pdVar98->rooms + lVar133 + -0x2c);
          auVar248._4_4_ =
               (int)(lVar110 - ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >>
                    0x20) *
               (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_) +
               ((int)lVar110 - w.map.map_range.l.field0_0x0._0_4_);
          auVar198._4_4_ = *(float *)((longlong)pdVar98->rooms + lVar133 + -0x1c);
          fVar208 = w.map.wall_values[auVar248._4_4_];
          if ((auVar198._4_4_ != fVar208) ||
             (pdVar99 = pdVar98, NAN(auVar198._4_4_) || NAN(fVar208))) {
            auVar219 = vcmpss_avx(auVar336._0_16_,ZEXT416((uint)(auVar198._4_4_ - fVar208)),1);
            auVar219 = vblendvps_avx(auVar346._0_16_,auVar350._0_16_,auVar219);
            auVar317 = vcmpss_avx(ZEXT416((uint)(auVar198._4_4_ - fVar208)),auVar336._0_16_,4);
            auVar219 = vandps_avx(auVar317,auVar219);
            w.map.wall_values[auVar248._4_4_] =
                 auVar371._0_4_ * auVar219._0_4_ +
                 auVar363._0_4_ * fVar208 + auVar353._0_4_ * auVar198._4_4_;
            fVar171 = *(float *)((longlong)pdVar98->rooms + lVar133 + -0x1c);
            auVar324 = ZEXT464((uint)fVar171);
            if (auVar219._0_4_ * (fVar171 - w.map.wall_values[auVar248._4_4_]) <= auVar336._0_4_) {
              w.map.wall_values[auVar248._4_4_] = fVar171;
            }
            pbVar10 = (byte *)((longlong)pdVar98->rooms + lVar133);
            *pbVar10 = *pbVar10 | 2;
            pdVar99 = w.map.doors;
          }
          lVar110 = (longlong)*(int *)((longlong)pdVar98->rooms + lVar133 + -0x18);
          if ((lVar110 == 0) ||
             (((pdVar99[lVar110].changed & 1) == 0 &&
              ((lVar110 = (longlong)*(int *)((longlong)pdVar98->rooms + lVar133 + -0x14),
               lVar110 == 0 ||
               (((pdVar99[lVar110].changed & 1) == 0 &&
                ((lVar110 = (longlong)*(int *)((longlong)pdVar98->rooms + lVar133 + -0x10),
                 lVar110 == 0 ||
                 (((pdVar99[lVar110].changed & 1) == 0 &&
                  ((lVar110 = (longlong)*(int *)((longlong)pdVar98->rooms + lVar133 + -0xc),
                   lVar110 == 0 ||
                   (((pdVar99[lVar110].changed & 1) == 0 &&
                    ((lVar110 = (longlong)*(int *)((longlong)pdVar98->rooms + lVar133 + -8),
                     lVar110 == 0 ||
                     (((pdVar99[lVar110].changed & 1) == 0 &&
                      ((lVar110 = (longlong)*(int *)((longlong)pdVar98->rooms + lVar133 + -4),
                       lVar110 == 0 || ((pdVar99[lVar110].changed & 1) == 0)))))))))))))))))))))) {
            if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208)))
            goto LAB_1400c2268;
          }
          else {
LAB_1400c2268:
            update_static_cell_range
                      (*(int *)((longlong)pdVar98->rooms + lVar133 + -0x24),
                       *(int *)((longlong)pdVar98->rooms + lVar133 + -0x20));
            pdVar99 = w.map.doors;
          }
          lVar163 = lVar163 + 1;
          lVar133 = lVar133 + 0x40;
          pdVar98 = pdVar99;
        } while (lVar163 < w.map.n_doors);
        if (0 < w.map.n_doors) {
          lVar133 = 0x3c;
          lVar163 = 0;
          do {
            uVar69 = *(uint *)((longlong)(w.map.doors)->rooms + lVar133);
            *(uint *)((longlong)(w.map.doors)->rooms + lVar133) =
                 uVar69 & 0xfffffffc | uVar69 >> 1 & 1;
            lVar163 = lVar163 + 1;
            lVar133 = lVar133 + 0x40;
          } while (lVar163 < w.map.n_doors);
        }
      }
      auVar258 = auVar332._0_16_;
      auVar198 = auVar327._0_16_;
      auVar317 = auVar309._0_16_;
      auVar219 = auVar324._0_16_;
      if ((w.selected_body < 1) ||
         (uVar69 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
         w.bodies.field0_0x0.index_table[uVar69].id != w.selected_body)) {
        sb = (body *)0x0;
        uVar122._0_1_ = 1;
      }
      else {
        pbVar93 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar69].index;
        uVar122._0_1_ = 1;
        sb = pbVar93;
        local_208 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208);
        if (w.bodies.field3_0x20.elements != (body *)0x0) {
          pbVar93->cost_limit = w.em.max_cost;
          iVar70 = get_room_id(&w.map,(real_2)(pbVar93->cost_centroid).field0_0x0._s_0);
          prVar135 = w.map.rooms;
          auVar258 = auVar332._0_16_;
          auVar198 = auVar327._0_16_;
          auVar317 = auVar309._0_16_;
          auVar219 = auVar324._0_16_;
          auVar248._4_4_ = last_room_id;
          if ((((iVar70 != 0) && (auVar248._4_4_ = iVar70, last_room_id != 0)) &&
              (last_room_id != iVar70)) &&
             (lVar133 = (longlong)last_room_id, 0 < w.map.rooms[lVar133 + -1].n_spawners)) {
            lVar110 = (longlong)w.map.rooms[lVar133 + -1].first_spawner;
            lVar163 = lVar110 * 0x14;
            do {
              pcVar119 = w.map.spawners;
              uVar102 = w.bodies.field3_0x20.elements;
              uVar69 = *(uint *)((longlong)&(w.map.spawners)->body_id + lVar163);
              if (((0 < (int)uVar69) &&
                  (uVar96 = w.bodies.n_max_elements + 0x7fffffffU & uVar69,
                  w.bodies.field0_0x0.index_table[uVar96].id == uVar69)) &&
                 ((w.bodies.field3_0x20.elements != (body *)0x0 &&
                  (iVar136 = w.bodies.field0_0x0.index_table[uVar96].index,
                  w.bodies.field3_0x20.elements[iVar136].parent_id == 0)))) {
                w.bodies.field3_0x20.elements[iVar136].xp = 0;
                ((body *)(uVar102 + (longlong)iVar136 * 0x2d0))->kill_slowly = 1;
              }
              *(undefined4 *)((longlong)&pcVar119->body_id + lVar163) = 0;
              lVar110 = lVar110 + 1;
              lVar163 = lVar163 + 0x14;
            } while (lVar110 < (longlong)prVar135[lVar133 + -1].n_spawners +
                               (longlong)prVar135[lVar133 + -1].first_spawner);
          }
          last_room_id = auVar248._4_4_;
          uVar131 = last_room_id;
          uVar122._0_1_ = 1;
          if (iVar70 != 0 || last_room_id != 0) {
            prVar135 = w.map.rooms + last_room_id;
            uVar69 = *(uint *)(w.map.rooms + (longlong)last_room_id + -1);
            local_120 = (creature_spawner *)CONCAT44(local_120._4_4_,uVar69);
            if (((uint *)(w.map.rooms + (longlong)last_room_id + -1))->cleared == 0) {
              uVar69 = uVar69 | 1;
              *(uint *)(prVar135 + -1) = uVar69;
              if (0 < prVar135[-1].n_spawners) {
                uVar122 = SEXT48(prVar135[-1].first_spawner);
                auVar336 = ZEXT464(0x42c80000);
                auVar346 = ZEXT1264(ZEXT812(0));
                auVar350 = ZEXT464(0x3f800000);
                auVar353 = ZEXT464(0x3f000000);
                auVar363 = ZEXT464(0x3f5db3d7);
                auVar371 = ZEXT464(0x3f8f1bbd);
                auVar327 = ZEXT464(0x3ba3d70a);
                auVar362._8_4_ = 0x7fffffff;
                auVar362._0_8_ = 0x7fffffff7fffffff;
                auVar362._12_4_ = 0x7fffffff;
                auVar364 = ZEXT1664(auVar362);
                local_288 = vandps_avx(auVar362,SUB6416(ZEXT464(0x3effffff),0));
                local_128._s_0.x = (float)uVar131;
                local_1d8._0_8_ = prVar135;
                do {
                  pcVar119 = w.map.spawners + uVar122;
                  uVar69 = w.map.spawners[uVar122].body_id;
                  auVar219 = auVar364._0_16_;
                  if (uVar69 == 0) {
                    local_168._0_4_ = (float)uVar122;
                    local_168._4_4_ = SUB84(uVar122,4);
                    local_300.body_id = 0;
                    local_300.orientation.field0_0x0 = (real_2_u_0)0x0;
                    local_300._12_4_ = (uint)local_170._0_4_ & 0xfffffff8;
                    local_170 = (uchar *)((ulonglong)local_170 & 0xfffffffffffffff8);
                    auVar324 = ZEXT1664(auVar324._0_16_);
                    auVar309 = ZEXT1664(auVar309._0_16_);
                    auVar336 = ZEXT1664(auVar336._0_16_);
                    auVar346 = ZEXT1664(auVar346._0_16_);
                    auVar350 = ZEXT1664(auVar350._0_16_);
                    auVar353 = ZEXT1664(auVar353._0_16_);
                    auVar363 = ZEXT1664(auVar363._0_16_);
                    auVar371 = ZEXT1664(auVar371._0_16_);
                    auVar327 = ZEXT1664(auVar327._0_16_);
                    auVar357 = ZEXT1664(auVar357._0_16_);
                    auVar364 = ZEXT1664(auVar219);
                    auVar332 = ZEXT1664(auVar332._0_16_);
                    pbVar93 = spawn_creature(pcVar119->creature_index,
                                             (real_2)(pcVar119->spawn_location).field0_0x0._s_0,
                                             &local_300);
                    pbVar93->xp = pcVar119->xp;
                    pbVar93->regen_boost = 0x78;
                    auVar248._4_4_ = (pbVar93->plan).n_plan_cells;
                    uVar109 = (ulonglong)auVar248._4_4_;
                    if ((longlong)uVar109 < 1) {
                      auVar198._4_4_ = 0.0;
                      fVar208 = 0.0;
                    }
                    else {
                      ppVar34 = (pbVar93->plan).plan_cells;
                      iVar30 = (pbVar93->plan).region.l.field0_0x0._s_0;
                      iVar70 = iVar30.x;
                      local_1b8.x = (float)heart_material_index;
                      lVar133 = 0;
                      auVar198._4_4_ = 0.0;
                      fVar208 = 0.0;
                      do {
                        lVar163 = *(longlong *)
                                   ((longlong)&(ppVar34->body_coord).field0_0x0 + lVar133);
                        if (pbVar93->cell_map
                            [(int)(lVar163 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                             ((pbVar93->plan).region.u.field0_0x0._s_0.x - iVar70) +
                             ((int)lVar163 - iVar70)] == -1) {
                          iVar136 = *(int *)((longlong)&ppVar34->material_index + lVar133);
                          fVar171 = materials_list[iVar136].density * auVar336._0_4_;
                          if (iVar136 != heart_material_index) {
                            fVar171 = materials_list[iVar136].density;
                          }
                          auVar357 = ZEXT464((uint)(auVar357._0_4_ + fVar171));
                          auVar198._4_4_ = fVar171 * (float)(int)lVar163 + auVar198._4_4_;
                          auVar324 = ZEXT464((uint)fVar208);
                          fVar208 = fVar171 * (float)(int)((ulonglong)lVar163 >> 0x20) + fVar208;
                        }
                        lVar133 = lVar133 + 0x34;
                      } while (uVar109 * 0x34 - lVar133 != 0);
                    }
                    fVar171 = auVar346._0_4_;
                    if (fVar171 < auVar357._0_4_) {
                      fVar334 = auVar350._0_4_ / auVar357._0_4_;
                      auVar324 = ZEXT464((uint)fVar208);
                      auVar198._4_4_ = fVar334 * auVar198._4_4_;
                      fVar208 = fVar334 * fVar208;
                    }
                    prVar135 = (room_t *)local_1d8._0_8_;
                    uVar122 = local_168._0_8_;
                    pbVar93->health = 0.0;
                    if (auVar248._4_4_ < 1) {
LAB_1400db483:
                      iVar30 = (pbVar93->plan).region.l.field0_0x0._s_0;
                      iVar31 = (((pbVar93->plan).plan_cells)->body_coord).field0_0x0._s_0;
                      auVar248._4_4_ = iVar30.x;
                      pbVar93->cell_map
                      [(int)((longlong)iVar31 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                       ((pbVar93->plan).region.u.field0_0x0._s_0.x - auVar248._4_4_) +
                       (iVar31.x - auVar248._4_4_)] = -1;
                    }
                    else {
                      auVar248._4_4_ = 0;
                      lVar133 = 0;
                      lVar163 = 0;
                      do {
                        ppVar34 = (pbVar93->plan).plan_cells;
                        lVar110 = *(longlong *)
                                   ((longlong)&(ppVar34->body_coord).field0_0x0 + lVar133);
                        fVar172 = (float)(int)lVar110 - auVar198._4_4_;
                        fVar334 = (float)(int)((ulonglong)lVar110 >> 0x20) - fVar208;
                        fVar245 = auVar353._0_4_ * fVar334;
                        auVar309 = ZEXT464((uint)fVar245);
                        fVar334 = auVar363._0_4_ * fVar334 + fVar172 * fVar171 + fVar171;
                        fVar172 = fVar172 + fVar245;
                        fVar334 = fVar334 * fVar334 + fVar172 * fVar172 + fVar171;
                        if (auVar371._0_4_ < fVar334) {
                          iVar30 = (pbVar93->plan).region.l.field0_0x0._s_0;
                          iVar70 = iVar30.x;
                          pbVar93->cell_map
                          [(int)(lVar110 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                           ((pbVar93->plan).region.u.field0_0x0._s_0.x - iVar70) +
                           ((int)lVar110 - iVar70)] = 0;
                          uVar109 = (ulonglong)(uint)(pbVar93->plan).n_plan_cells;
                        }
                        else {
                          fVar334 = materials_list
                                    [*(int *)((longlong)&ppVar34->material_index + lVar133)].
                                    max_health + pbVar93->health;
                          pbVar93->health = fVar334;
                          auVar248._4_4_ = auVar248._4_4_ + 1;
                        }
                        auVar324 = ZEXT464((uint)fVar334);
                        lVar163 = lVar163 + 1;
                        lVar133 = lVar133 + 0x34;
                      } while (lVar163 < (int)uVar109);
                      if (auVar248._4_4_ == 0) goto LAB_1400db483;
                    }
                    local_208 = pcVar119;
                    pbVar80 = get_biome_core(&w.map,(real_2)(pcVar119->spawn_location).field0_0x0.
                                                            _s_0);
                    if ((pbVar80 != (biome_core *)0x0) &&
                       (auVar248._4_4_ = pbVar80->n_modifiers, 0 < auVar248._4_4_)) {
                      lVar133 = 0;
                      uVar102 = w.field128_0x3e20.biome_modifiers;
                      do {
                        if (((biome_modifier *)
                            (uVar102 + (longlong)pbVar80->modifiers[lVar133] * 0x20))->creature_fn
                            != (_func___cdecl_void_body_ptr *)0x0) {
                          (*((biome_modifier *)
                            (uVar102 + (longlong)pbVar80->modifiers[lVar133] * 0x20))->creature_fn)
                                    (pbVar93);
                          auVar248._4_4_ = pbVar80->n_modifiers;
                          uVar102 = w.field128_0x3e20.biome_modifiers;
                        }
                        lVar133 = lVar133 + 1;
                      } while (lVar133 < auVar248._4_4_);
                    }
                    pcVar119->body_id = pbVar93->id;
                    ((room_t *)((undefined8)prVar135 + -1))->cleared = 0;
                    rVar78 = (real_2_u_0_s_0)local_188._0_8_;
                    uVar131 = local_128._0_4_;
                  }
                  else if (((((int)uVar69 < 1) ||
                            (uVar96 = w.bodies.n_max_elements + 0x7fffffffU & uVar69,
                            w.bodies.field0_0x0.index_table[uVar96].id != uVar69)) ||
                           (w.bodies.field3_0x20.elements == (body *)0x0)) ||
                          (w.bodies.field3_0x20.elements
                           [w.bodies.field0_0x0.index_table[uVar96].index].parent_id != 0)) {
                    pcVar119->xp = 0;
                  }
                  else {
                    pbVar93 = w.bodies.field3_0x20.elements +
                              w.bodies.field0_0x0.index_table[uVar96].index;
                    auVar198._4_4_ = (pbVar93->cost_centroid).field0_0x0._s_0.x;
                    fVar208 = (pbVar93->cost_centroid).field0_0x0._s_0.y;
                    fVar333 = auVar327._0_4_;
                    fVar334 = fVar333 * auVar198._4_4_;
                    fVar172 = fVar333 * fVar208;
                    fVar245 = auVar346._0_4_;
                    fVar171 = fVar172 * to_hex.field0_0x0.data[2] +
                              fVar334 * to_hex.field0_0x0.data[0] + fVar245;
                    fVar334 = fVar172 * to_hex.field0_0x0.data[3] +
                              fVar334 * to_hex.field0_0x0.data[1] + fVar245;
                    auVar370._8_4_ = 0x80000000;
                    auVar370._0_8_ = 0x8000000080000000;
                    auVar370._12_4_ = 0x80000000;
                    auVar248 = vandnps_avx(auVar219,ZEXT416((uint)fVar334));
                    auVar248 = vorps_avx(auVar248,local_288);
                    auVar248 = ZEXT416((uint)(fVar334 + auVar248._0_4_));
                    auVar248 = vroundss_avx(auVar248,auVar248,0xb);
                    uVar69 = (uint)auVar248._0_4_;
                    uVar109 = (ulonglong)uVar69 << 0x20;
                    auVar248 = vandps_avx(auVar219,ZEXT416((uint)(auVar248._0_4_ - fVar334)));
                    auVar258 = vinsertps_avx(ZEXT416((uint)fVar171),
                                             ZEXT416((uint)(-fVar171 - fVar334)),0x10);
                    auVar317 = vandps_avx(auVar370,auVar258);
                    auVar317 = vorps_avx(auVar317,___xmm_3effffff3effffff3effffff3effffff);
                    auVar294._0_4_ = auVar258._0_4_ + auVar317._0_4_;
                    auVar294._4_4_ = auVar258._4_4_ + auVar317._4_4_;
                    auVar294._8_4_ = auVar258._8_4_ + auVar317._8_4_;
                    auVar294._12_4_ = auVar258._12_4_ + auVar317._12_4_;
                    auVar178 = vroundps_avx(auVar294,0xb);
                    auVar362 = vmovshdup_avx(auVar178);
                    auVar317 = vsubps_avx(auVar178,auVar258);
                    auVar317 = vandps_avx(auVar219,auVar317);
                    auVar258 = vshufps_avx(auVar317,auVar317,0xf5);
                    local_168._0_4_ = (float)uVar122;
                    local_168._4_4_ = SUB84(uVar122,4);
                    if ((auVar317._0_4_ <= auVar248._0_4_) || (auVar317._0_4_ <= auVar258._0_4_)) {
                      uVar123 = (ulonglong)(uint)(int)auVar178._0_4_;
                      if (auVar258._0_4_ < auVar248._0_4_) {
                        uVar109 = (ulonglong)(uint)-((int)auVar178._0_4_ + (int)auVar362._0_4_) <<
                                  0x20;
                      }
                    }
                    else {
                      uVar123 = (ulonglong)-(uVar69 + (int)auVar362._0_4_);
                    }
                    uVar106 = uVar109 | uVar123;
                    local_190 = CONCAT44(w.map.map_range.l.field0_0x0._s_0.y,
                                         w.map.map_range.l.field0_0x0._s_0.x);
                    lVar133 = (ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20;
                    iVar70 = w.map.map_range.u.field0_0x0._s_0.x -
                             w.map.map_range.l.field0_0x0._0_4_;
                    auVar248._4_4_ = (int)uVar123;
                    iVar136 = auVar248._4_4_ + 1;
                    local_278._0_4_ = iVar136;
                    local_1b8.x = (float)w.map.map_range.l.field0_0x0._s_0.y;
                    iVar97 = (int)(uVar109 >> 0x20);
                    local_1e8._0_4_ = w.map.map_range.u.field0_0x0._s_0.y;
                    local_1c0 = (real_2_u_0_s_0)w.map.room_ids;
                    rVar78 = (real_2_u_0_s_0)local_188._0_8_;
                    prVar135 = (room_t *)local_1d8._0_8_;
                    if (((iVar97 < (int)w.map.map_range.u.field0_0x0._4_4_ &&
                         (int)w.map.map_range.l.field0_0x0._4_4_ <= iVar97) &&
                         (iVar136 < (int)w.map.map_range.u.field0_0x0._0_4_ &&
                         (int)w.map.map_range.l.field0_0x0._0_4_ <= iVar136)) &&
                       (w.map.room_ids
                        [iVar70 * (int)(uVar106 - lVar133 >> 0x20) +
                         (iVar136 - w.map.map_range.l.field0_0x0._0_4_)] == local_128._0_4_)) {
LAB_1400db827:
                      auVar198._4_4_ = auVar198._4_4_ - w.camera_pos.field0_0x0._s_0.x;
                      fVar208 = fVar208 - w.camera_pos.field0_0x0._s_0.y;
                      if (9e+06 < fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + fVar245)
                      goto LAB_1400db851;
                      ((room_t *)(local_1d8._0_8_ + -0xc))->cleared = 0;
                    }
                    else {
                      lVar163 = uVar106 + 0x100000000;
                      iVar71 = (int)((ulonglong)lVar163 >> 0x20);
                      if ((((iVar71 < w.map.map_range.u.field0_0x0._s_0.y &&
                             (w.map.map_range.l.field0_0x0._s_0.y <= iVar71 &&
                             (auVar248._4_4_ < w.map.map_range.u.field0_0x0._s_0.x &&
                             w.map.map_range.l.field0_0x0._s_0.x <= auVar248._4_4_))) &&
                           (w.map.room_ids
                            [iVar70 * (int)((ulonglong)(lVar163 - lVar133) >> 0x20) +
                             (auVar248._4_4_ - w.map.map_range.l.field0_0x0._0_4_)] ==
                            local_128._0_4_)) ||
                          ((iVar132 = auVar248._4_4_ + -1,
                           (w.map.map_range.l.field0_0x0._s_0.y <= iVar71 &&
                           (iVar132 < w.map.map_range.u.field0_0x0._s_0.x &&
                           w.map.map_range.l.field0_0x0._s_0.x <= iVar132)) &&
                           iVar71 < w.map.map_range.u.field0_0x0._s_0.y &&
                           (w.map.room_ids
                            [iVar70 * (int)((ulonglong)(lVar163 - lVar133) >> 0x20) +
                             (iVar132 - w.map.map_range.l.field0_0x0._0_4_)] == local_128._0_4_))))
                         || (((iVar132 < w.map.map_range.u.field0_0x0._s_0.x &&
                              w.map.map_range.l.field0_0x0._s_0.x <= iVar132) &&
                              (w.map.map_range.l.field0_0x0._s_0.y <= iVar97 &&
                              iVar97 < w.map.map_range.u.field0_0x0._s_0.y) &&
                             (w.map.room_ids
                              [iVar70 * (int)(uVar106 - lVar133 >> 0x20) +
                               (iVar132 - w.map.map_range.l.field0_0x0._0_4_)] == local_128._0_4_)))
                         ) goto LAB_1400db827;
                      lVar163 = uVar106 - 0x100000000;
                      iVar97 = (int)((ulonglong)lVar163 >> 0x20);
                      if (((iVar97 < w.map.map_range.u.field0_0x0._s_0.y &&
                            ((auVar248._4_4_ < w.map.map_range.u.field0_0x0._s_0.x &&
                             w.map.map_range.l.field0_0x0._s_0.x <= auVar248._4_4_) &&
                            w.map.map_range.l.field0_0x0._s_0.y <= iVar97)) &&
                          (w.map.room_ids
                           [iVar70 * (int)((ulonglong)(lVar163 - lVar133) >> 0x20) +
                            (auVar248._4_4_ - w.map.map_range.l.field0_0x0._0_4_)] ==
                           local_128._0_4_)) ||
                         ((((iVar136 < w.map.map_range.u.field0_0x0._s_0.x &&
                            w.map.map_range.l.field0_0x0._s_0.x <= iVar136) &&
                           w.map.map_range.l.field0_0x0._s_0.y <= iVar97) &&
                           iVar97 < w.map.map_range.u.field0_0x0._s_0.y &&
                          (w.map.room_ids
                           [iVar70 * (int)((ulonglong)(lVar163 - lVar133) >> 0x20) +
                            (iVar136 - w.map.map_range.l.field0_0x0._0_4_)] == local_128._0_4_))))
                      goto LAB_1400db827;
LAB_1400db851:
                      pbVar93->kill_slowly = 1;
                      pbVar93->xp = 0;
                      pcVar119->body_id = 0;
                    }
                    rVar124._s_0.y = w.camera_pos.field0_0x0._s_0.y;
                    rVar124._s_0.x = w.camera_pos.field0_0x0._s_0.x;
                    rVar169._s_0.y =
                         fVar333 * ((pbVar93->center_of_mass).field0_0x0._s_0.y -
                                   w.camera_pos.field0_0x0._s_0.y);
                    rVar169._s_0.x =
                         fVar333 * ((pbVar93->center_of_mass).field0_0x0._s_0.x -
                                   w.camera_pos.field0_0x0._s_0.x);
                    auVar248._4_4_ = pbVar93->id;
                    auVar324 = ZEXT464((uint)w.camera_pos.field0_0x0._s_0.y);
                    auVar309 = ZEXT1664(auVar317);
                    auVar336 = ZEXT1664(auVar336._0_16_);
                    auVar346 = ZEXT1664(auVar346._0_16_);
                    auVar350 = ZEXT1664(auVar350._0_16_);
                    auVar353 = ZEXT1664(auVar353._0_16_);
                    auVar363 = ZEXT1664(auVar363._0_16_);
                    auVar371 = ZEXT1664(auVar371._0_16_);
                    auVar327 = ZEXT1664(auVar327._0_16_);
                    auVar357 = ZEXT1664(auVar357._0_16_);
                    auVar364 = ZEXT1664(auVar219);
                    auVar332 = ZEXT1664(auVar370);
                    local_208 = pcVar119;
                    pvVar73 = TlsGetValue(tls_index);
                    if ((settings.limit_particles == 0) ||
                       ((uint)w.n_particles < settings.max_particles)) {
                      lVar133 = (longlong)w.max_particles;
                      iVar70 = w.n_particles;
                      if (w.max_particles <= w.n_particles) {
                        w.max_particles = w.max_particles * 2;
                        bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
                        iVar70 = w.n_particles;
                        if (!bVar170) goto LAB_1400dbaaa;
                      }
                      uVar158 = w.field119_0x3dc0.particles;
                      w.n_particles = iVar70 + 1;
                      w.field119_0x3dc0.particles[iVar70].type = 7;
                      (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->x).field0_0x0 = rVar124;
                      (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->x_dot).field0_0x0 =
                           rVar169;
                      (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0 =
                           (real_2_u_0)0x0;
                      ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->target = auVar248._4_4_;
                      uVar102 = vmovlps_avx(SUB6416(ZEXT464(0x40a00000),0));
                      ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->r = (float)(int)uVar102;
                      ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->r_dot =
                           (float)(int)((ulonglong)uVar102 >> 0x20);
                      ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->time = 0;
                      ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->duration = 0x3c;
                      (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color).field0_0x0.xy.
                      field0_0x0 = (real_2_u_0)0x0;
                      *(undefined8 *)
                       ((longlong)
                        &(((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color).field0_0x0.
                         _s_2.yz.field0_0x0 + 4) = 0;
                      (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color_initial).
                      field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ecccccd3f666666;
                      *(undefined8 *)
                       ((longlong)
                        &(((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color_initial).
                         field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3d4ccccd3ecccccd;
                      ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->color_final =
                           (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                      ((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->emission =
                           (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                      *(undefined8 *)
                       ((longlong)
                        &(((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->emission).field0_0x0
                       + 0xd) = 0;
                      (((particle_t *)(uVar158 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0 =
                           rVar124;
                    }
                    else {
                      uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                               *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
                      uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                      uVar96 = uVar96 >> 0x10 ^ uVar96;
                      uVar69 = (uint)((float)uVar96 * 2.3283064e-10 * (float)w.n_particles);
                      if ((int)(w.n_particles - 1U) < (int)uVar69) {
                        uVar69 = w.n_particles - 1U;
                      }
                      uVar109 = (ulonglong)uVar69;
                      *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
                      if ((int)uVar69 < 1) {
                        uVar109 = 0;
                      }
                      if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
                        ppVar79 = w.field119_0x3dc0.particles + uVar109;
                        ppVar79->type = 7;
                        (ppVar79->x).field0_0x0 = rVar124;
                        (ppVar79->x_dot).field0_0x0 = rVar169;
                        (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                        ppVar79->target = auVar248._4_4_;
                        uVar102 = vmovlps_avx(SUB6416(ZEXT464(0x40a00000),0));
                        ppVar79->r = (float)(int)uVar102;
                        ppVar79->r_dot = (float)(int)((ulonglong)uVar102 >> 0x20);
                        ppVar79->time = 0;
                        ppVar79->duration = 0x3c;
                        (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x0;
                        *(undefined8 *)
                         ((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) = 0;
                        (ppVar79->color_initial).field0_0x0.xy.field0_0x0 =
                             (real_2_u_0)0x3ecccccd3f666666;
                        *(undefined8 *)
                         ((longlong)&(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
                             0x3d4ccccd3ecccccd;
                        ppVar79->color_final = (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                        ppVar79->emission = (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                        *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
                        uVar131 = local_128._0_4_;
                        goto LAB_1400db082;
                      }
                    }
LAB_1400dbaaa:
                    uVar131 = local_128._0_4_;
                  }
LAB_1400db082:
                  uVar122 = uVar122 + 1;
                } while ((longlong)uVar122 <
                         (longlong)prVar135[-1].n_spawners + (longlong)prVar135[-1].first_spawner);
                uVar69 = *(uint *)(prVar135 + -1);
              }
            }
            auVar258 = auVar332._0_16_;
            auVar198 = auVar327._0_16_;
            auVar317 = auVar309._0_16_;
            auVar219 = auVar324._0_16_;
            if (0 < w.map.n_doors) {
              auVar357 = ZEXT464(*(uint *)(&__real_bca3d70a3f000000 +
                                          (ulonglong)((uVar69 & 1) == 0) * 4));
              uVar109 = 0;
              auVar336 = ZEXT464(0x43480000);
              auVar346 = ZEXT1664(CONCAT412(0x80000000,CONCAT48(0x80000000,0x8000000080000000)));
              auVar350 = ZEXT1264(ZEXT812(0));
              auVar353 = ZEXT464(0x42c80000);
              auVar363 = ZEXT464(0x432d3480);
              lVar133 = 0;
              auVar248._4_4_ = w.map.n_doors;
              do {
                if (0 < (longlong)w.map.doors[uVar109].n_rooms) {
                  pdVar98 = w.map.doors + uVar109;
                  lVar163 = 0;
                  do {
                    if (*(int *)((longlong)(w.map.doors)->rooms + lVar163 * 4 + lVar133) == uVar131)
                    {
                      pdVar98->value = auVar357._0_4_;
                      auVar248._4_4_ = w.map.n_doors;
                      if (((uVar109 == w.map.n_doors - 1 && ((ulonglong)local_120 & 1) == 0) &
                          *(byte *)(prVar135 + -1)) == 1) {
                        iVar30 = (pdVar98->pos).field0_0x0._s_0;
                        auVar207._0_4_ = (float)iVar30.x;
                        auVar207._4_12_ = auVar332._4_12_;
                        fVar208 = (float)iVar30.y;
                        auVar248 = vandps_avx(auVar346._0_16_,auVar207);
                        fVar171 = auVar350._0_4_;
                        auVar198._4_4_ =
                             auVar353._0_4_ * fVar208 + fVar171 + auVar207._0_4_ * auVar336._0_4_;
                        fVar334 = auVar363._0_4_;
                        auVar324 = ZEXT464((uint)auVar198._4_4_);
                        auVar309 = ZEXT1664(auVar309._0_16_);
                        auVar357 = ZEXT1664(auVar357._0_16_);
                        auVar336 = ZEXT1664(auVar336._0_16_);
                        auVar346 = ZEXT1664(auVar346._0_16_);
                        auVar350 = ZEXT1664(auVar350._0_16_);
                        auVar353 = ZEXT1664(auVar353._0_16_);
                        auVar363 = ZEXT1664(auVar363._0_16_);
                        auVar327 = ZEXT1664(auVar327._0_16_);
                        auVar332 = ZEXT1664(auVar332._0_16_);
                        generate_mutation_pickup
                                  ((real_2)(CONCAT44((int)((ulonglong)pdVar98 >> 0x20),
                                                     auVar198._4_4_) |
                                           (ulonglong)
                                           (uint)(fVar334 * fVar208 + fVar171 + auVar248._0_4_) <<
                                           0x20),(real_2)0x0,w.base_seed + 0x1d5934d2);
                        auVar248._4_4_ = w.map.n_doors;
                      }
                      break;
                    }
                    lVar163 = lVar163 + 1;
                  } while (w.map.doors[uVar109].n_rooms != lVar163);
                }
                auVar258 = auVar332._0_16_;
                auVar198 = auVar327._0_16_;
                auVar317 = auVar309._0_16_;
                auVar219 = auVar324._0_16_;
                uVar109 = uVar109 + 1;
                lVar133 = lVar133 + 0x40;
              } while ((longlong)uVar109 < (longlong)auVar248._4_4_);
            }
            uVar122._0_1_ = uVar131 == 0;
          }
        }
      }
      in_ZMM2 = ZEXT1664(auVar219);
      in_ZMM5 = ZEXT1664(auVar317);
      in_ZMM12 = ZEXT1664(auVar198);
      in_ZMM15 = ZEXT1664(auVar258);
      pvVar73 = TlsGetValue(tls_index);
      if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        in_ZMM15 = ZEXT464(0) << 0x20;
        *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
      }
      if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
        begin_trace_stage("update tunnels");
        auVar360._4_4_ = to_hex.field0_0x0.data[1];
        auVar360._0_4_ = to_hex.field0_0x0.data[0];
        auVar360._8_4_ = to_hex.field0_0x0.data[2];
        auVar360._12_4_ = to_hex.field0_0x0.data[3];
        auVar248 = vpsrlq_avx(auVar360,0x20);
        auVar248 = vpshufd_avx(auVar248,0xe8);
        auVar249._0_4_ = w.camera_pos.field0_0x0._s_0.x * 0.005 * auVar248._0_4_;
        auVar249._4_4_ = w.camera_pos.field0_0x0._s_0.y * 0.005 * auVar248._4_4_;
        auVar249._8_4_ = auVar248._8_4_ * 0.0;
        auVar249._12_4_ = auVar248._12_4_ * 0.0;
        auVar248 = vpshufd_avx(auVar360,0xe8);
        auVar179._0_4_ = w.camera_pos.field0_0x0._s_0.x * 0.005 * auVar248._0_4_;
        auVar179._4_4_ = w.camera_pos.field0_0x0._s_0.y * 0.005 * auVar248._4_4_;
        auVar179._8_4_ = auVar248._8_4_ * 0.0;
        auVar179._12_4_ = auVar248._12_4_ * 0.0;
        auVar248 = vmovshdup_avx(auVar179);
        auVar198._4_4_ = auVar248._0_4_ + auVar179._0_4_ + 0.0;
        auVar248 = vmovshdup_avx(auVar249);
        fVar208 = auVar248._0_4_ + auVar249._0_4_ + 0.0;
        auVar250._8_4_ = 0x80000000;
        auVar250._0_8_ = 0x8000000080000000;
        auVar250._12_4_ = 0x80000000;
        auVar295._8_4_ = 0x7fffffff;
        auVar295._0_8_ = 0x7fffffff7fffffff;
        auVar295._12_4_ = 0x7fffffff;
        auVar219 = vandnps_avx(auVar295,ZEXT416((uint)fVar208));
        auVar248 = vandps_avx(SUB6416(ZEXT464(0x3effffff),0),auVar295);
        auVar248 = vorps_avx(auVar248,auVar219);
        auVar248 = ZEXT416((uint)(fVar208 + auVar248._0_4_));
        auVar248 = vroundss_avx(auVar248,auVar248,0xb);
        in_ZMM5 = ZEXT1664(auVar248);
        uVar69 = (uint)auVar248._0_4_;
        auVar219 = vandps_avx(ZEXT416((uint)(auVar248._0_4_ - fVar208)),auVar295);
        auVar317 = vinsertps_avx(ZEXT416((uint)auVar198._4_4_),
                                 ZEXT416((uint)(-auVar198._4_4_ - fVar208)),0x10);
        auVar248 = vandps_avx(auVar317,auVar250);
        auVar248 = vorps_avx(auVar248,___xmm_3effffff3effffff3effffff3effffff);
        auVar209._0_4_ = auVar317._0_4_ + auVar248._0_4_;
        auVar209._4_4_ = auVar317._4_4_ + auVar248._4_4_;
        auVar209._8_4_ = auVar317._8_4_ + auVar248._8_4_;
        auVar209._12_4_ = auVar317._12_4_ + auVar248._12_4_;
        auVar258 = vroundps_avx(auVar209,0xb);
        auVar198 = vmovshdup_avx(auVar258);
        auVar248 = vsubps_avx(auVar258,auVar317);
        auVar248 = vandps_avx(auVar248,auVar295);
        auVar317 = vshufps_avx(auVar248,auVar248,0xf5);
        in_ZMM2 = ZEXT1664(auVar317);
        if ((auVar248._0_4_ <= auVar219._0_4_) || (auVar248._0_4_ <= auVar317._0_4_)) {
          auVar248._4_4_ = (int)auVar258._0_4_;
          uVar96 = extraout_var;
          if (auVar317._0_4_ < auVar219._0_4_) {
            uVar69 = -(auVar248._4_4_ + (int)auVar198._0_4_);
          }
        }
        else {
          auVar248._4_4_ = -(uVar69 + (int)auVar198._0_4_);
          uVar96 = 0;
        }
        uVar69 = uVar69 | uVar96;
        local_228 = (undefined1 *)CONCAT71(local_228._1_7_,(char)uVar122);
        if (w.map.n_tunnel_tiles < 1) {
          auVar49._12_4_ = 0;
          auVar49._0_12_ = local_168._4_12_;
          local_168 = auVar49 << 0x20;
        }
        else {
          local_1b8.x = (float)(uVar69 + auVar248._4_4_);
          lVar163 = 0xc;
          lVar133 = 0;
          in_ZMM15 = ZEXT1664(ZEXT816(0x4008000000000000));
          auVar324 = ZEXT464(0xbf000000);
          auVar309 = ZEXT464(0x3f000000);
          auVar327 = ZEXT464(0x41f00000);
          auVar357 = ZEXT464(0x3c4ccccd);
          in_ZMM12 = ZEXT464(0x3f19999a);
          auVar332 = ZEXT1264(ZEXT812(0));
          auVar48._12_4_ = 0;
          auVar48._0_12_ = local_168._4_12_;
          local_168 = auVar48 << 0x20;
          auVar198._4_4_ = local_1b8.x;
          do {
            ptVar67 = w.map.tunnel_tiles;
            lVar110 = *(longlong *)((longlong)w.map.tunnel_tiles + lVar163 + -0xc);
            iVar136 = (int)lVar110;
            iVar70 = (int)((ulonglong)lVar110 >> 0x20);
            uVar107 = ((int)auVar198._4_4_ - iVar136) - iVar70;
            uVar96 = -uVar107;
            if ((int)uVar96 < 0) {
              uVar96 = uVar107;
            }
            uVar107 = uVar69 - iVar70;
            if ((int)uVar69 < iVar70) {
              uVar107 = iVar70 - uVar69;
            }
            if (uVar96 <= uVar107) {
              uVar107 = uVar96;
            }
            uVar96 = auVar248._4_4_ - iVar136;
            if (auVar248._4_4_ < iVar136) {
              uVar96 = iVar136 - auVar248._4_4_;
            }
            if (uVar107 <= uVar96) {
              uVar96 = uVar107;
            }
            if (uVar96 < 8) {
              auVar180._0_4_ = (float)iVar136;
              auVar180._4_8_ = SUB128(ZEXT812(0),4);
              auVar180._12_4_ = 0;
              auVar219 = vandps_avx(auVar180,___xmm_80000000800000008000000080000000);
              auVar346 = ZEXT1264(ZEXT812(0));
              auVar198._4_4_ =
                   ((float)iVar70 * 100.0 + auVar180._0_4_ * 200.0 + 0.0) -
                   w.camera_pos.field0_0x0._s_0.x;
              fVar208 = ((float)iVar70 * 173.20508 + auVar219._0_4_ + 0.0) -
                        w.camera_pos.field0_0x0._s_0.y;
              auVar219 = ZEXT416((uint)(fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + 0.0));
              auVar219 = vsqrtss_avx(auVar219,auVar219);
              auVar219 = vmovsldup_avx(auVar219);
              auVar181._0_4_ = auVar219._0_4_ + -1500.0;
              auVar181._4_4_ = auVar219._4_4_ + -200.0;
              auVar181._8_4_ = auVar219._8_4_ + 0.0;
              auVar181._12_4_ = auVar219._12_4_ + 0.0;
              auVar219 = vdivps_avx(auVar181,___xmm_000000000000000043480000c3fa0000);
              auVar210._8_4_ = 0x3f800000;
              auVar210._0_8_ = 0x3f8000003f800000;
              auVar210._12_4_ = 0x3f800000;
              auVar317 = vminps_avx(auVar210,auVar219);
              auVar336 = ZEXT1664(auVar317);
              auVar219 = vcmpps_avx(auVar317,ZEXT816(0) << 0x20,1);
              auVar219 = vshufps_avx(auVar219,auVar219,0x50);
              uVar96 = vmovmskpd_avx(auVar219);
              auVar198._4_4_ = 0.0;
              if ((uVar96 & 2) == 0) {
                auVar219 = vmovshdup_avx(auVar317);
                auVar198._4_4_ = auVar219._0_4_;
              }
              iVar70 = *(int *)((longlong)w.map.tunnel_tiles + lVar163 + -4);
              auVar198._4_4_ =
                   (float)((in_ZMM15._0_8_ - ((double)auVar198._4_4_ + (double)auVar198._4_4_)) *
                          (double)(auVar198._4_4_ * auVar198._4_4_));
              *(float *)((longlong)&((w.map.tunnel_tiles)->pos).field0_0x0 + lVar163) =
                   auVar309._0_4_ * (1.0 - auVar198._4_4_) + auVar324._0_4_ * auVar198._4_4_;
              auVar350 = ZEXT464((uint)(auVar357._0_4_ *
                                       (auVar327._0_4_ * (float)iVar70 + (float)w.frame_number)));
              sinf();
              auVar350 = ZEXT1664(auVar350._0_16_);
              auVar198._4_4_ =
                   auVar357._0_4_ *
                   (auVar327._0_4_ * (float)*(int *)((longlong)ptVar67 + lVar163 + -4) +
                   (float)w.frame_number);
              sinf();
              fVar208 = auVar346._0_4_;
              if ((uVar96 & 1) == 0) {
                fVar208 = auVar336._0_4_;
              }
              dVar176 = in_ZMM15._0_8_ - ((double)fVar208 + (double)fVar208);
              in_ZMM2 = ZEXT864((ulonglong)dVar176);
              fVar171 = in_ZMM12._0_4_ * auVar350._0_4_ * auVar198._4_4_ *
                        (float)(dVar176 * (double)(fVar208 * fVar208)) +
                        *(float *)((longlong)&(ptVar67->pos).field0_0x0 + lVar163);
              *(float *)((longlong)&(ptVar67->pos).field0_0x0 + lVar163) = fVar171;
              iVar70 = (int)(lVar110 - ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20
                                       ) >> 0x20) *
                       (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_) +
                       (iVar136 - w.map.map_range.l.field0_0x0._0_4_);
              fVar208 = w.map.wall_values[iVar70];
              auVar198._4_4_ = local_1b8.x;
              if ((fVar171 != fVar208) || (NAN(fVar171) || NAN(fVar208))) {
                auVar219 = vcmpss_avx(auVar332._0_16_,ZEXT416((uint)(fVar171 - fVar208)),1);
                auVar296._8_4_ = 0xbf800000;
                auVar296._0_8_ = 0xbf800000bf800000;
                auVar296._12_4_ = 0xbf800000;
                auVar219 = vblendvps_avx(auVar296,___xmm_3f8000003f8000003f8000003f800000,auVar219);
                auVar317 = vcmpss_avx(auVar332._0_16_,ZEXT416((uint)(fVar171 - fVar208)),4);
                auVar219 = vandps_avx(auVar317,auVar219);
                w.map.wall_values[iVar70] = auVar219._0_4_ * 0.005 + fVar208 * 0.99 + fVar171 * 0.01
                ;
                fVar171 = *(float *)((longlong)&(ptVar67->pos).field0_0x0 + lVar163);
                fVar208 = w.map.wall_values[iVar70];
                fVar334 = auVar219._0_4_ * (fVar171 - fVar208);
                in_ZMM2 = ZEXT464((uint)fVar334);
                if (fVar334 <= auVar332._0_4_) {
                  w.map.wall_values[iVar70] = fVar171;
                  fVar208 = w.map.wall_values[iVar70];
                }
                w.map.visual_wall_values[iVar70] = fVar208;
                local_168._0_4_ = (int)CONCAT71((int7)(int3)((uint)iVar70 >> 8),1);
              }
            }
            lVar133 = lVar133 + 1;
            lVar163 = lVar163 + 0x10;
          } while (lVar133 < w.map.n_tunnel_tiles);
        }
        pvVar73 = TlsGetValue(tls_index);
        if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
          QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
          QueryPerformanceCounter(local_118);
          *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
               (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
          *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
        }
        rVar78 = (real_2_u_0_s_0)local_188._0_8_;
        if ((local_168[0] & 1) != 0) {
          lVar133 = CONCAT44(w.map.map_range.u.field0_0x0._s_0.y,w.map.map_range.u.field0_0x0._s_0.x
                            );
          auVar248._4_4_ = w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_;
          uVar109 = (ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y;
          glBindTexture(0xde1,*(float *)((longlong)local_210 + 0xf4));
          glTexImage2D(0xde1,0,0x822e,auVar248._4_4_,(int)(lVar133 - (uVar109 << 0x20) >> 0x20),0,
                       0x1903,0x1406,w.map.visual_wall_values);
          glBindTexture(0xde1,0);
        }
        uVar122 = (ulonglong)local_228 & 0xff;
        if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
          begin_trace_stage("build body grid");
          auVar248._4_4_ = 0;
          memset();
          if (0 < w.bodies.n_elements) {
            lVar133 = 0xb0;
            lVar163 = 0;
            do {
              auVar219 = ZEXT416((uint)(*(float *)((longlong)&(w.bodies.field3_0x20.elements)->id +
                                                  lVar133) * 0.001));
              auVar219 = vroundss_avx(auVar219,auVar219,9);
              auVar317 = ZEXT416((uint)(*(float *)((longlong)
                                                   &(w.bodies.field3_0x20.elements)->creature_index
                                                  + lVar133) * 0.001));
              auVar317 = vroundss_avx(auVar317,auVar317,9);
              in_ZMM2 = ZEXT1664(auVar317);
              w.grid_data[(int)auVar317._0_4_ * 0x400 + (int)auVar219._0_4_ & 0xffff] =
                   w.grid_data[(int)auVar317._0_4_ * 0x400 + (int)auVar219._0_4_ & 0xffff] + 1;
              lVar163 = lVar163 + 1;
              lVar133 = lVar133 + 0x2d0;
            } while (lVar163 < w.bodies.n_elements);
          }
          lVar133 = 0;
          do {
            iVar70 = w.grid_data[lVar133];
            w.grid_data[lVar133] = auVar248._4_4_;
            iVar136 = w.grid_data[lVar133 + 1] + iVar70 + auVar248._4_4_;
            w.grid_data[lVar133 + 1] = iVar70 + auVar248._4_4_;
            iVar70 = w.grid_data[lVar133 + 2] + iVar136;
            w.grid_data[lVar133 + 2] = iVar136;
            auVar248._4_4_ = w.grid_data[lVar133 + 3] + iVar70;
            w.grid_data[lVar133 + 3] = iVar70;
            lVar133 = lVar133 + 4;
          } while (lVar133 != 0x10000);
          if (0 < w.bodies.n_elements) {
            lVar133 = 0xb0;
            lVar163 = 0;
            do {
              uVar102 = w.bodies.field3_0x20.elements;
              auVar248 = ZEXT416((uint)(*(float *)((longlong)&(w.bodies.field3_0x20.elements)->id +
                                                  lVar133) * 0.001));
              auVar248 = vroundss_avx(auVar248,auVar248,9);
              auVar219 = ZEXT416((uint)(*(float *)((longlong)
                                                   &(w.bodies.field3_0x20.elements)->creature_index
                                                  + lVar133) * 0.001));
              auVar219 = vroundss_avx(auVar219,auVar219,9);
              in_ZMM2 = ZEXT1664(auVar219);
              uVar69 = (int)auVar219._0_4_ * 0x400 + (int)auVar248._0_4_ & 0xffff;
              auVar248._4_4_ = w.grid_data[uVar69];
              w.grid_data[uVar69] = auVar248._4_4_ + 1;
              w.grid_bodies[auVar248._4_4_] = (int)lVar163;
              w.grid_pos[auVar248._4_4_].field0_0x0 =
                   *(real_2_u_0 *)((longlong)&((body *)uVar102)->id + lVar133);
              lVar163 = lVar163 + 1;
              lVar133 = lVar133 + 0x2d0;
            } while (lVar163 < w.bodies.n_elements);
          }
          pvVar73 = TlsGetValue(tls_index);
          if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
            QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
            QueryPerformanceCounter(local_118);
            *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
                 (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
            *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
          }
        }
      }
    }
  }
  local_228 = (undefined1 *)CONCAT71(local_228._1_7_,(char)uVar122);
  begin_trace_stage("simulate particles and brains");
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    auVar198._4_4_ = rVar78.x;
    begin_trace_stage("dispatch particles");
    uVar134 = (longlong)(int)auVar198._4_4_ * 0x90;
    puVar75 = stalloc(uVar134);
    if (0 < (int)auVar198._4_4_) {
      rVar157.x = 0.0;
      rVar157.y = 0.0;
      puVar88 = puVar75;
      uVar109 = 0;
      auVar248._4_4_ = w.n_particles;
      do {
        rVar157 = (real_2_u_0_s_0)((longlong)rVar157 + 1);
        uVar123 = (longlong)((int)rVar157.x * auVar248._4_4_) / (longlong)(int)auVar198._4_4_;
        iVar70 = (int)uVar123;
        if ((int)uVar109 != iVar70) {
          puVar88[0] = '\0';
          puVar88[1] = '\0';
          puVar88[2] = '\0';
          puVar88[3] = '\0';
          puVar88[4] = '\0';
          puVar88[5] = '\0';
          puVar88[6] = '\0';
          puVar88[7] = '\0';
          *(int *)(puVar88 + 8) = (int)uVar109;
          *(int *)(puVar88 + 0xc) = iVar70;
          puVar88[0x10] = '\0';
          puVar88[0x11] = '\0';
          puVar88[0x12] = '\0';
          puVar88[0x13] = '\0';
          uVar109 = (ulonglong)n_stacked_tasks;
          n_stacked_tasks = n_stacked_tasks + 1;
          n_incomplete_tasks = n_incomplete_tasks + 1;
          work_stack[uVar109].func = simulate_particles;
          work_stack[uVar109].data = puVar88;
          auVar248._4_4_ = w.n_particles;
        }
        puVar88 = puVar88 + 0x18;
        uVar109 = uVar123 & 0xffffffff;
      } while (rVar78 != rVar157);
    }
    rVar157 = (real_2_u_0_s_0)TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(ulonglong *)((longlong)rVar157 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      in_ZMM15 = ZEXT464(0) << 0x20;
      *(double *)((longlong)*(real_2_u_0 *)((longlong)rVar157 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(real_2_u_0 *)((longlong)rVar157 + 0xb8) =
           *(real_2_u_0 *)*(real_2_u_0 *)((longlong)rVar157 + 0xb8);
      uVar122 = rVar157;
    }
    begin_trace_stage("dispatch acid particles");
    if (0 < (int)auVar198._4_4_) {
      puVar75 = puVar75 + (longlong)(int)auVar198._4_4_ * 0x18;
      iVar70 = w.n_acid_particles + 0xf >> 4;
      uVar123 = (ulonglong)rVar78 & 0xffffffff;
      uVar109 = 0;
      auVar248._4_4_ = iVar70;
      do {
        lVar133 = (longlong)auVar248._4_4_;
        iVar136 = (int)(lVar133 / (longlong)(int)auVar198._4_4_);
        if ((int)uVar109 != iVar136) {
          puVar75[0] = '\0';
          puVar75[1] = '\0';
          puVar75[2] = '\0';
          puVar75[3] = '\0';
          puVar75[4] = '\0';
          puVar75[5] = '\0';
          puVar75[6] = '\0';
          puVar75[7] = '\0';
          *(int *)(puVar75 + 8) = (int)uVar109;
          *(int *)(puVar75 + 0xc) = iVar136;
          puVar75[0x10] = '\0';
          puVar75[0x11] = '\0';
          puVar75[0x12] = '\0';
          puVar75[0x13] = '\0';
          uVar109 = (ulonglong)n_stacked_tasks;
          n_stacked_tasks = n_stacked_tasks + 1;
          n_incomplete_tasks = n_incomplete_tasks + 1;
          work_stack[uVar109].func = simulate_acid_particles_avx;
          work_stack[uVar109].data = puVar75;
        }
        puVar75 = puVar75 + 0x18;
        auVar248._4_4_ = auVar248._4_4_ + iVar70;
        uVar123 = uVar123 - 1;
        uVar109 = lVar133 / (longlong)(int)auVar198._4_4_ & 0xffffffff;
      } while (uVar123 != 0);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      in_ZMM15 = ZEXT464(0) << 0x20;
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("dispatch brains");
    rVar157 = local_210;
    fVar172 = *(float *)local_210 * 0.5;
    tanf();
    fVar172 = 1.0 / fVar172;
    fVar208 = (local_198->mouse).field0_0x0._s_0.x;
    fVar171 = (local_198->mouse).field0_0x0._s_0.y;
    fVar334 = fVar171 * *(float *)((longlong)rVar157 + 0x2c) +
              fVar208 * *(float *)((longlong)rVar157 + 0x20);
    in_ZMM5 = ZEXT464((uint)fVar334);
    fVar245 = *(float *)((longlong)rVar157 + 0xc) /
              ((fVar171 * *(float *)((longlong)rVar157 + 0x30) +
               fVar208 * *(float *)((longlong)rVar157 + 0x24)) -
              fVar172 * *(float *)((longlong)rVar157 + 0x3c));
    in_ZMM2 = ZEXT464((uint)*(float *)((longlong)rVar157 + 8));
    (local_198->cursor_x).field0_0x0 =
         (real_2_u_0)
         (CONCAT44(extraout_var_00,
                   *(float *)((longlong)rVar157 + 4) -
                   ((fVar171 * *(float *)((longlong)rVar157 + 0x28) +
                    fVar208 * *(float *)((longlong)rVar157 + 0x1c)) -
                   fVar172 * *(float *)((longlong)rVar157 + 0x34)) * fVar245) |
         (ulonglong)
         (uint)(*(float *)((longlong)rVar157 + 8) -
               (fVar334 - fVar172 * *(float *)((longlong)rVar157 + 0x38)) * fVar245) << 0x20);
    puVar75 = stalloc(uVar134);
    if (0 < (int)auVar198._4_4_) {
      uVar69 = (int)auVar198._4_4_ * 4;
      rVar78.x = 0.0;
      rVar78.y = 0.0;
      uVar109 = 1;
      if (1 < (int)uVar69) {
        uVar109 = (ulonglong)uVar69;
      }
      uVar106 = 0;
      uVar123 = 0;
      puVar88 = puVar75;
      auVar248._4_4_ = w.bodies.n_elements;
      do {
        uVar106 = uVar106 + 1;
        uVar121 = (longlong)((int)uVar106 * auVar248._4_4_) / (longlong)(int)uVar69;
        iVar70 = (int)uVar121;
        if ((int)uVar123 != iVar70) {
          puVar88[0] = '\0';
          puVar88[1] = '\0';
          puVar88[2] = '\0';
          puVar88[3] = '\0';
          puVar88[4] = '\0';
          puVar88[5] = '\0';
          puVar88[6] = '\0';
          puVar88[7] = '\0';
          *(int *)(puVar88 + 8) = (int)uVar123;
          *(int *)(puVar88 + 0xc) = iVar70;
          puVar88[0x10] = '\0';
          puVar88[0x11] = '\0';
          puVar88[0x12] = '\0';
          puVar88[0x13] = '\0';
          uVar123 = (ulonglong)n_stacked_tasks;
          n_stacked_tasks = n_stacked_tasks + 1;
          n_incomplete_tasks = n_incomplete_tasks + 1;
          work_stack[uVar123].func = simulate_brains;
          work_stack[uVar123].data = puVar88;
          auVar248._4_4_ = w.bodies.n_elements;
        }
        puVar88 = puVar88 + 0x18;
        uVar123 = uVar121 & 0xffffffff;
      } while (uVar109 != uVar106);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  else {
    puVar75 = (uchar *)0x0;
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  finish_tasks();
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    stunalloc(puVar75);
    pvVar73 = TlsGetValue(tls_index);
  }
  else {
    pvVar73 = TlsGetValue(tls_index);
  }
  if (((w._4_1_ & 0x20) != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    in_ZMM15 = ZEXT464(0) << 0x20;
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    w.n_lasers = 0;
  }
  if (0 < w.frame_number) {
    begin_trace_stage("fog of war update");
    pbVar93 = sb;
    auVar358 = in_ZMM15._4_12_;
    if (sb == (body *)0x0) {
      auVar198._4_4_ = 1000.0;
    }
    else {
      local_3d8.string[0] = 'E';
      local_3d8.string[1] = 'C';
      local_3d8.string[2] = 'H';
      local_3d8.string[3] = 'O';
      local_3d8.string[4] = 'L';
      local_3d8.string[5] = 'O';
      local_3d8.string[6] = 'C';
      local_3d8.string[7] = 'A';
      local_3d8._s_0.hi = 0x4e4f4954;
      auVar248._4_4_ = get_mutation_index(&local_3d8);
      auVar358 = in_ZMM15._4_12_;
      auVar198._4_4_ =
           *(float *)(&__real_447a0000453b8000 +
                     (ulonglong)
                     (w.field55_0x3a28.body_auxiliary_data
                      [(longlong)auVar248._4_4_ +
                       (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                       ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >> 4)] == '\0') * 4);
    }
    uVar123 = CONCAT44(w.camera_pos.field0_0x0._s_0.y,w.camera_pos.field0_0x0._s_0.x);
    auVar305._8_4_ = 0x3ba3d70a;
    auVar305._0_8_ = 0x3ba3d70a3ba3d70a;
    auVar305._12_4_ = 0x3ba3d70a;
    auVar251._8_8_ = 0;
    auVar251._0_8_ = uVar123;
    auVar248 = vpshufd_avx(auVar251,0xa0);
    auVar219 = vpshufd_avx(ZEXT416((uint)w.camera_pos.field0_0x0._s_0.y),0);
    auVar252._0_4_ =
         to_hex.field0_0x0.data[0] * 0.005 * auVar248._0_4_ + 0.0 +
         to_hex.field0_0x0.data[2] * 0.005 * auVar219._0_4_;
    auVar252._4_4_ =
         to_hex.field0_0x0.data[1] * 0.005 * auVar248._4_4_ + 0.0 +
         to_hex.field0_0x0.data[3] * 0.005 * auVar219._4_4_;
    auVar252._8_4_ = auVar248._8_4_ * 0.0 + 0.0 + auVar219._8_4_ * 0.0;
    auVar252._12_4_ = auVar248._12_4_ * 0.0 + 0.0 + auVar219._12_4_ * 0.0;
    in_ZMM2 = ZEXT1664(auVar252);
    auVar248 = vmovsldup_avx(ZEXT416((uint)(auVar198._4_4_ * 0.005)));
    auVar219 = vsubps_avx(auVar252,auVar248);
    auVar219 = vroundps_avx(auVar219,9);
    auVar280._0_4_ = (int)auVar219._0_4_;
    auVar280._4_4_ = (uint)auVar219._4_4_;
    auVar280._8_4_ = (int)auVar219._8_4_;
    auVar280._12_4_ = (int)auVar219._12_4_;
    auVar211._0_4_ = auVar248._0_4_ + auVar252._0_4_;
    auVar211._4_4_ = auVar248._4_4_ + auVar252._4_4_;
    auVar211._8_4_ = auVar248._8_4_ + auVar252._8_4_;
    auVar211._12_4_ = auVar248._12_4_ + auVar252._12_4_;
    auVar248 = vroundps_avx(auVar211,10);
    auVar212._0_4_ = (int)auVar248._0_4_;
    auVar212._4_4_ = (int)auVar248._4_4_;
    auVar212._8_4_ = (int)auVar248._8_4_;
    auVar212._12_4_ = (int)auVar248._12_4_;
    auVar219 = vpsubd_avx(auVar212,auVar280);
    auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
    iVar97 = auVar219._0_4_;
    iVar136 = auVar219._4_4_ * iVar97;
    iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
    uVar109 = (longlong)(iVar136 * auVar248._4_4_) / (longlong)iVar70;
    uVar106 = uVar109 & 0xffffffff;
    uVar69 = ((auVar248._4_4_ + 1) * iVar136) / iVar70;
    if ((int)uVar109 < (int)uVar69) {
      fVar208 = auVar198._4_4_ * 0.5 - auVar198._4_4_;
      in_ZMM2 = ZEXT464((uint)fVar208);
      uVar122._4_4_ = 0.0;
      uVar122._0_4_ = (float)w.map.map_range.l.field0_0x0._s_0.y;
      auVar297._8_4_ = 0x80000000;
      auVar297._0_8_ = 0x8000000080000000;
      auVar297._12_4_ = 0x80000000;
      auVar305 = ZEXT816(0) << 0x20;
      uVar131 = w.map.map_range.l.field0_0x0._s_0.x;
      uVar130 = w.map.map_range.u.field0_0x0._s_0.x;
      do {
        iVar70 = (int)uVar106;
        iVar136 = iVar70 % iVar97 + auVar280._0_4_;
        auVar337._0_4_ = (float)iVar136;
        auVar337._4_12_ = auVar358;
        lVar133 = ((longlong)iVar70 / (longlong)iVar97 & 0xffffffffU) + (ulonglong)auVar280._4_4_;
        auVar248._4_4_ = (int)lVar133;
        in_ZMM12 = ZEXT464((uint)(auVar337._0_4_ * 200.0));
        if ((((int)uVar131 <= iVar136) && (iVar136 < (int)uVar130)) &&
           ((int)(float)uVar122 <= auVar248._4_4_)) {
          auVar219 = vandps_avx(auVar337,auVar297);
          fVar171 = (auVar337._0_4_ * 200.0 + 0.0 + (float)auVar248._4_4_ * 100.0) - (float)uVar123;
          fVar334 = (float)(uVar123 >> 0x20);
          in_ZMM12 = ZEXT464((uint)fVar334);
          fVar334 = (auVar219._0_4_ + 0.0 + (float)auVar248._4_4_ * 173.20508) - fVar334;
          fVar171 = fVar334 * fVar334 + fVar171 * fVar171 + 0.0;
          if ((fVar171 < auVar198._4_4_ * auVar198._4_4_) &&
             (auVar248._4_4_ < w.map.map_range.u.field0_0x0._s_0.y)) {
            auVar248._4_4_ =
                 (int)((lVar133 << 0x20) -
                       ((ulonglong)(uint)w.map.map_range.l.field0_0x0._s_0.y << 0x20) >> 0x20) *
                 (w.map.map_range.u.field0_0x0._s_0.x - w.map.map_range.l.field0_0x0._0_4_) +
                 (iVar136 - w.map.map_range.l.field0_0x0._0_4_);
            auVar219 = vsqrtss_avx(ZEXT416((uint)fVar171),ZEXT416((uint)fVar171));
            auVar338._0_4_ = (auVar219._0_4_ - auVar198._4_4_) / fVar208;
            auVar338._4_12_ = SUB6012((undefined1  [60])0x0,0);
            auVar219 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar338);
            auVar219 = vmaxss_avx(auVar305,auVar219);
            fVar171 = auVar219._0_4_;
            dVar176 = (3.0 - ((double)fVar171 + (double)fVar171)) * (double)(fVar171 * fVar171);
            auVar339._0_4_ = (float)dVar176;
            auVar339._4_4_ = (int)((ulonglong)dVar176 >> 0x20);
            auVar339._8_8_ = 0;
            auVar219 = vmaxss_avx(ZEXT416((uint)w.map.explored[auVar248._4_4_]),auVar339);
            w.map.explored[auVar248._4_4_] = auVar219._0_4_;
            uVar123 = CONCAT44(w.camera_pos.field0_0x0._s_0.y,w.camera_pos.field0_0x0._s_0.x);
            uVar122._4_4_ = 0.0;
            uVar122._0_4_ = (float)w.map.map_range.l.field0_0x0._s_0.y;
            uVar131 = w.map.map_range.l.field0_0x0._s_0.x;
            uVar130 = w.map.map_range.u.field0_0x0._s_0.x;
          }
        }
        uVar106 = (ulonglong)(iVar70 + 1U);
      } while (uVar69 != iVar70 + 1U);
    }
    in_ZMM5 = ZEXT1664(auVar305);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  begin_trace_stage("delete outdated cells");
  pcVar72 = local_f8;
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    w.n_light_recievers = 0;
    w.light_recievers = (light_reciever_t *)stalloc((longlong)w.n_cells * 0x18);
    w.light_reciever_cells = (cell **)stalloc((longlong)w.n_cells << 3);
    w.light_reciever_values =
         (int *)stalloc((longlong)((pcVar72->field0_0x0)._s_0.group)->n_lanes * (longlong)w.n_cells
                        * 4);
    brain_cells = (int **)stalloc((longlong)((pcVar72->field0_0x0)._s_0.group)->n_lanes << 3);
    auVar248._4_4_ = ((pcVar72->field0_0x0)._s_0.group)->n_lanes;
    TlsGetValue(tls_index);
    piVar74 = (int *)stalloc((longlong)auVar248._4_4_ << 2);
    memset();
    n_brain_cells = piVar74;
  }
  pvVar73 = TlsGetValue(tls_index);
  auVar324._0_8_ = EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  auVar324._8_56_ = extraout_var_07;
  piVar74 = (int *)stalloc((longlong)w.n_cells << 2);
  ppiVar54 = brain_cells;
  brain_cells[(pcVar72->field0_0x0)._s_0.lane_index] = piVar74;
  piVar74 = n_brain_cells;
  auVar248._4_4_ = (pcVar72->field0_0x0)._s_0.lane_index;
  iVar70 = ((pcVar72->field0_0x0)._s_0.group)->n_lanes;
  uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
  uVar123 = uVar109 & 0xffffffff;
  uVar69 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
  if ((int)uVar109 < (int)uVar69) {
    auVar219 = vpcmpeqd_avx(auVar324._0_16_,auVar324._0_16_);
    in_ZMM2 = ZEXT1264(ZEXT812(0));
    rVar157 = rVar78;
    do {
      uVar102 = w.bodies.field3_0x20.elements;
      uVar107 = (uint)uVar123;
      piVar160 = w.field58_0x3a60.cells[(int)uVar107 >> 4].field0_0x0.id_packed + (uVar107 & 0xf);
      uVar96 = w.field58_0x3a60.cells[(int)uVar107 >> 4].field1_0x40.body_id_packed[uVar107 & 0xf];
      rVar78 = rVar157;
      if (((int)uVar96 < 1) ||
         (uVar122._0_4_ = (float)(w.bodies.n_max_elements + 0x7fffffffU & uVar96),
         uVar122._4_4_ = 0.0, w.bodies.field0_0x0.index_table[uVar122].id != uVar96)) {
        piVar160[0x4d0] = 0;
LAB_1400c39cb:
        bVar50 = true;
        bVar170 = true;
        uVar96 = piVar160[0x20];
joined_r0x0001400c39d8:
        if (((0 < (int)uVar96) &&
            (uVar122._0_4_ = (float)(w.bones.n_max_elements + 0x7fffffffU & uVar96),
            uVar122._4_4_ = 0.0, bVar170 = bVar50,
            w.bones.field0_0x0.index_table[uVar122].id == uVar96)) &&
           ((w.bones.field3_0x20.elements != (bone *)0x0 &&
            ((*(byte *)((longlong)piVar160 + 0x1001) & 1) != 0)))) {
          (w.bones.field3_0x20.elements +
          (longlong)(w.bones.field0_0x0.index_table + uVar122 * 8)->index * 0x50)->floodfill_needed
               = 1;
        }
        uVar96 = piVar160[0x400];
        piVar160[0x400] = uVar96 & 0xfffffeff;
        piVar160[0x400] =
             uVar96 & 0xffffeeff | (materials_list[piVar160[0x30]].field14_0x4c.flags & 4) << 10;
        if ((!bVar170) &&
           (materials_list[piVar160[0x30]].brain_fn != (_func___cdecl_void_cell_ptr *)0x0)) {
          auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
          piVar160 = ppiVar54[auVar248._4_4_];
          iVar70 = piVar74[auVar248._4_4_];
          piVar74[auVar248._4_4_] = iVar70 + 1;
          piVar160[iVar70] = uVar107;
        }
      }
      else {
        auVar248._4_4_ = w.bodies.field0_0x0.index_table[uVar122].index;
        piVar160[0x4d0] = 0;
        if ((body *)uVar102 == (body *)0x0) goto LAB_1400c39cb;
        if ((((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->parent_id != 0) &&
           (uVar122 = (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5, rVar154 = local_1b8,
           w.field55_0x3a28.body_auxiliary_data
           [(longlong)mut_budding_index +
            (uVar102 + ((longlong)auVar248._4_4_ * 0x2d0 - w.bodies.field3_0x20._0_8_) >> 4) *
            uVar122] == '\0')) {
LAB_1400c3cff:
          if ((*(byte *)((longlong)piVar160 + 0x1001) & 1) != 0) {
            ((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->floodfill_needed = 1;
          }
          bVar50 = false;
          bVar170 = false;
          uVar96 = piVar160[0x20];
          rVar78 = rVar157;
          local_1b8 = rVar154;
          goto joined_r0x0001400c39d8;
        }
        uVar122 = (ulonglong)piVar160 & 0xffffffffffffffc0;
        uVar109 = (ulonglong)((uint)((ulonglong)piVar160 >> 2) & 0xf);
        puVar3 = (ulonglong *)(uVar122 + uVar109 * 0xb0);
        rVar154 = (real_2_u_0_s_0)(puVar3 + 0x2b0);
        dVar176 = ((double *)(uVar122 + 0x1580))[uVar109 * 0x16];
        auVar311._8_8_ = 0;
        auVar311._0_8_ = dVar176;
        auVar317 = vpshufd_avx(auVar311,0x44);
        auVar317 = vpcmpgtd_avx((undefined1  [16])
                                (((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                region,auVar317);
        auVar317 = vpblendw_avx(auVar317 ^ auVar219,auVar317,0xf0);
        auVar317 = auVar219 & ~auVar317;
        if ((((SUB161(auVar317 >> 0x1f,0) & 1) == 0 && (SUB161(auVar317 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar317 >> 0x5f,0) & 1) == 0) && -1 < auVar317[0xf]) {
          iVar30 = (((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                   field0_0x0._s_0;
          iVar31 = (((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.u.
                   field0_0x0._s_0;
          iVar97 = iVar31.x;
          iVar136 = iVar30.x;
          iVar70 = SUB84(dVar176,0);
          rVar78 = (real_2_u_0_s_0)
                   (longlong)
                   ((int)((longlong)dVar176 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                    (iVar97 - iVar136) + (iVar70 - iVar136));
          lVar133 = (longlong)
                    (((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->plan).plan_id_map
                    [(longlong)rVar78];
          uVar122._0_4_ = 0.0;
          uVar122._4_4_ = 0.0;
          local_1b8 = rVar154;
          if (lVar133 != 0) {
            uVar122 = (((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->plan).plan_cells +
                      lVar133;
            rVar157 = rVar78;
            if ((((iVar136 <= iVar70) && (iVar70 < iVar97)) &&
                (iVar70 = (int)((ulonglong)dVar176 >> 0x20), iVar30.y <= iVar70)) &&
               (iVar70 < iVar31.y)) {
              rVar157 = (real_2_u_0_s_0)((longlong)rVar78 * 4);
              ((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->cell_map[(longlong)rVar78] =
                   *piVar160;
            }
            auVar198._4_4_ = (float)piVar160[0x280];
            in_ZMM5 = ZEXT464((uint)auVar198._4_4_);
            uVar96 = piVar160[0x400];
            if ((0.001 < auVar198._4_4_ && (uVar96 & 0x1000) == 0) ||
               (((uVar96 & 0x10000) != 0 && (0.25 <= (float)piVar160[0x40])))) {
              iVar70 = piVar160[0x30];
            }
            else {
              if ((uVar96 & 0x100000) == 0) {
                in_ZMM5 = ZEXT1664(*(undefined1 (*) [16])(uVar122 + -0x30));
                *(undefined1 (*) [16])(puVar3 + 0x2b1) = *(undefined1 (*) [16])(uVar122 + -0x30);
              }
              iVar70 = *(int *)(uVar122 + -0x34);
              if (iVar70 != piVar160[0x30]) {
                piVar160[0x1c0] = 0;
                uVar96 = piVar160[0x20];
                if (uVar96 != 0) {
                  if (((0 < (int)uVar96) &&
                      (uVar166 = w.bones.n_max_elements + 0x7fffffffU & uVar96,
                      w.bones.field0_0x0.index_table[uVar166].id == uVar96)) &&
                     (w.bones.field3_0x20.elements != (bone *)0x0)) {
                    w.bones.field3_0x20.elements[w.bones.field0_0x0.index_table[uVar166].index].
                    floodfill_needed = 1;
                  }
                  piVar160[0x20] = 0;
                }
                uVar96 = piVar160[0x400];
                piVar160[0x400] = uVar96 & 0xfffeffff;
                piVar160[0x30] = *(int *)(uVar122 + -0x34);
                piVar160[0x430] = 0;
                piVar160[0x400] = uVar96 & 0xfffeff7f;
                piVar160[0x470] = 0;
                piVar160[0x2b0] = 0;
                piVar160[0x50] = 0;
                goto LAB_1400c3cff;
              }
              auVar198._4_4_ = (float)piVar160[0x280];
              in_ZMM5 = ZEXT464((uint)auVar198._4_4_);
            }
            if ((0.0 < auVar198._4_4_) &&
               (auVar198._4_4_ = materials_list[iVar70].max_health * 0.2,
               in_ZMM5 = ZEXT464((uint)auVar198._4_4_), (float)piVar160[0x1d0] <= auVar198._4_4_)) {
              uVar122._0_4_ = 0.0;
              uVar122._4_4_ = 0.0;
              if ((piVar160[0x290] != 0) && ((*(byte *)((longlong)piVar160 + 0x1001) & 0x10) == 0))
              {
                piVar160[0x30] = piVar160[0x290];
                uVar158 = w.bones.field0_0x0.index_table;
                uVar96 = piVar160[0x20];
                if (uVar96 != 0) {
                  if (((0 < (int)uVar96) &&
                      (uVar166 = w.bones.n_max_elements + 0x7fffffffU & uVar96, uVar122 = uVar158,
                      w.bones.field0_0x0.index_table[uVar166].id == uVar96)) &&
                     (w.bones.field3_0x20.elements != (bone *)0x0)) {
                    w.bones.field3_0x20.elements[w.bones.field0_0x0.index_table[uVar166].index].
                    floodfill_needed = 1;
                  }
                  piVar160[0x20] = 0;
                }
                *(byte *)((longlong)piVar160 + 0x1002U) =
                     *(byte *)((longlong)piVar160 + 0x1002U) & 0xfe;
                rVar22 = materials_list[piVar160[0x290]].base_color.field0_0x0;
                in_ZMM5 = ZEXT1664((undefined1  [16])rVar22);
                *(real_4_u_0 *)(puVar3 + 0x2b1) = rVar22;
              }
            }
            goto LAB_1400c3cff;
          }
        }
        piVar160[0x1e0] = (int)((float)piVar160[0x1d0] + (float)piVar160[0x1e0]);
        piVar160[0x1d0] = -0x40800000;
        piVar160[0x1c0] = 0;
        piVar160[0x10] = 0;
        uVar158 = w.bones.field0_0x0.index_table;
        uVar96 = piVar160[0x20];
        if (uVar96 != 0) {
          if (((0 < (int)uVar96) &&
              (uVar166 = w.bones.n_max_elements + 0x7fffffffU & uVar96, uVar122 = uVar158,
              w.bones.field0_0x0.index_table[uVar166].id == uVar96)) &&
             (w.bones.field3_0x20.elements != (bone *)0x0)) {
            w.bones.field3_0x20.elements[w.bones.field0_0x0.index_table[uVar166].index].
            floodfill_needed = 1;
          }
          piVar160[0x20] = 0;
        }
        *(byte *)(piVar160 + 0x400) = *(byte *)(piVar160 + 0x400) | 0x3f;
        ((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->floodfill_needed = 1;
        uVar109 = *(ulonglong *)rVar154;
        auVar312._8_8_ = 0;
        auVar312._0_8_ = uVar109;
        auVar317 = vpshufd_avx(auVar312,0x44);
        auVar317 = vpcmpgtd_avx((undefined1  [16])
                                (((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                region,auVar317);
        auVar317 = vpblendw_avx(auVar317 ^ auVar219,auVar317,0xf0);
        in_ZMM5 = ZEXT1664(auVar317);
        auVar317 = auVar219 & ~auVar317;
        if ((((SUB161(auVar317 >> 0x1f,0) & 1) == 0 && (SUB161(auVar317 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar317 >> 0x5f,0) & 1) == 0) && -1 < auVar317[0xf]) {
          iVar30 = (((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                   field0_0x0._s_0;
          iVar70 = iVar30.x;
          uVar122._0_4_ = 0.0;
          uVar122._4_4_ = -NAN;
          ((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->cell_map
          [(int)(uVar109 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
           ((((body *)(uVar102 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.u.field0_0x0._s_0.
            x - iVar70) + ((int)uVar109 - iVar70)] = 0;
        }
      }
      uVar123 = (ulonglong)(uVar107 + 1);
      rVar157 = rVar78;
    } while (uVar69 != uVar107 + 1);
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  pcVar72 = local_f8;
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("update neurons");
    auVar248._4_4_ = ((pcVar72->field0_0x0)._s_0.group)->n_lanes;
    TlsGetValue(tls_index);
    puVar75 = stalloc((longlong)auVar248._4_4_ << 2);
    memset();
    plVar100 = (pcVar72->field0_0x0)._s_0.group;
    auVar248._4_4_ = plVar100->n_lanes;
    uVar69 = w.n_cells;
    ppiVar54 = brain_cells;
    piVar74 = n_brain_cells;
    pcVar72 = local_f8;
    while (w.n_cells = uVar69, brain_cells = ppiVar54, n_brain_cells = piVar74, local_f8 = pcVar72,
          0 < auVar248._4_4_) {
                    /* WARNING: Read-only address (ram,0x0001401bce20) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcf60) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfc0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bd5b0) is written */
                    /* WARNING: Read-only address (ram,0x0001401be9e0) is written */
                    /* WARNING: Read-only address (ram,0x0001401be9f0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bea00) is written */
                    /* WARNING: Read-only address (ram,0x0001401bea10) is written */
                    /* WARNING: Read-only address (ram,0x0001401beeb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf040) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf160) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf1b0) is written */
      lVar133 = 0;
      do {
        auVar248._4_4_ = *(int *)(puVar75 + lVar133 * 4);
        if (auVar248._4_4_ < piVar74[lVar133]) {
          piVar160 = ppiVar54[lVar133];
          if (piVar160[auVar248._4_4_] < (int)uVar69) {
            *(int *)(puVar75 + lVar133 * 4) = auVar248._4_4_ + 1;
            uVar69 = piVar160[auVar248._4_4_];
            plVar100 = (pcVar72->field0_0x0)._s_0.group;
          }
        }
        uVar102 = w.field58_0x3a60.cells;
        lVar133 = lVar133 + 1;
      } while (lVar133 < plVar100->n_lanes);
      if (w.n_cells <= (int)uVar69) break;
      auVar248._4_4_ = (int)uVar69 >> 4;
      uVar109 = (ulonglong)(uVar69 & 0xf);
      uVar69 = w.base_seed + w.field58_0x3a60.cells[auVar248._4_4_].field0_0x0.id_packed[uVar109];
      uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar69 = (uVar69 >> 0x10 ^ uVar69) + w.frame_number;
      pcVar84 = w.field58_0x3a60.cells + auVar248._4_4_;
      uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar69 = (uVar69 >> 0x10 ^ uVar69) + 0x984e7;
      uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      pcVar72->seed = uVar69 >> 0x10 ^ uVar69;
      (*materials_list
        [(((cell *)(uVar102 + (longlong)auVar248._4_4_ * 0x2080))->field3_0xc0).
         material_index_packed[uVar109]].brain_fn)
                ((cell *)((longlong)&pcVar84->field0_0x0 + uVar109 * 4));
      plVar100 = (pcVar72->field0_0x0)._s_0.group;
      uVar69 = w.n_cells;
      ppiVar54 = brain_cells;
      piVar74 = n_brain_cells;
      pcVar72 = local_f8;
      auVar248._4_4_ = plVar100->n_lanes;
    }
    stunalloc(puVar75);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    pcVar101 = "portals";
    begin_trace_stage("portals");
    if (w.portals_enabled != 0) {
      auVar324 = ZEXT1264(ZEXT812(0));
      uVar102 = CONCAT71((int7)((ulonglong)pcVar101 >> 8),1);
      auVar309 = ZEXT464(0x2f800000);
      auVar327 = ZEXT464(0x3d4ccccd);
      uVar109 = 0;
      auVar198._4_4_ = 0.0;
      pcVar72 = local_f8;
LAB_1400c40f7:
      auVar248 = local_2d8;
      local_208._0_4_ = 0.039;
      bVar170 = (char)uVar102 == '\0';
      if (bVar170) {
        local_208._0_4_ = 0.987;
      }
      local_120 = (creature_spawner *)CONCAT44(local_120._4_4_,0x3e8f5c29);
      if (bVar170) {
        local_120 = (creature_spawner *)CONCAT44(local_120._4_4_,0x3f116873);
      }
      local_2c8._0_4_ = (int)uVar102;
      local_170 = (uchar *)CONCAT44(local_170._4_4_,0x3f3d70a4);
      local_128._s_0.x = 0.987;
      local_1d8._0_4_ = 0x3f116873;
      local_1e8._0_4_ = 0x3d8d4fdf;
      if (bVar170) {
        local_170 = (uchar *)CONCAT44(local_170._4_4_,0x3d8d4fdf);
        local_128._s_0.x = 0.039;
        local_1d8._0_4_ = 0x3e8f5c29;
        local_1e8._0_4_ = 0x3f3d70a4;
      }
      prVar153 = &w.portals[uVar109].x;
      auVar219 = ZEXT416((uint)(w.portals[uVar109].x.field0_0x0._s_0.x * 0.001));
      auVar219 = vroundss_avx(auVar219,auVar219,9);
      auVar317 = ZEXT416((uint)(w.portals[uVar109].x.field0_0x0._s_0.y * 0.001));
      auVar317 = vroundss_avx(auVar317,auVar317,9);
      local_2a8._0_4_ = (int)auVar219._0_4_;
      local_2d8._4_4_ = 0;
      local_2d8._0_4_ = (int)auVar317._0_4_;
      local_2d8._8_8_ = auVar248._8_8_;
      uVar123 = CONCAT44(0,(uint)uVar109 | 0x100);
      uVar106 = 0xffffffff;
      local_278._0_8_ = uVar123;
LAB_1400c4262:
      local_288._0_8_ = uVar106;
      uVar122._0_4_ = (float)(((int)uVar106 + local_2d8._0_4_) * 0x400 + local_2a8._0_4_);
      uVar122._4_4_ = 0.0;
      auVar248._4_4_ = -1;
      local_1c0 = (real_2_u_0_s_0)uVar122;
LAB_1400c42c7:
      uVar102 = w.bodies.field3_0x20.elements;
      uVar69 = (int)(float)uVar122 + auVar248._4_4_ & 0xffff;
      if (uVar69 == 0) {
        iVar70 = 0;
        iVar136 = *w.grid_data;
        if (0 < iVar136) goto LAB_1400c42fb;
      }
      else {
        iVar70 = w.grid_data[(ulonglong)uVar69 - 1];
        iVar136 = w.grid_data[uVar69] - iVar70;
        if (iVar136 != 0 && iVar70 <= w.grid_data[uVar69]) {
LAB_1400c42fb:
          lVar133 = 0;
          do {
            iVar97 = w.grid_bodies[iVar70 + lVar133];
            if (((w.bodies.field3_0x20.elements[iVar97].kill_slowly == 0) &&
                (w.bodies.field3_0x20.elements[iVar97].parent_id == 0)) &&
               (fVar208 = w.bodies.field3_0x20.elements[iVar97].center_of_mass.field0_0x0._s_0.x -
                          (prVar153->field0_0x0)._s_0.x,
               fVar171 = w.bodies.field3_0x20.elements[iVar97].center_of_mass.field0_0x0._s_0.y -
                         w.portals[uVar109].x.field0_0x0._s_0.y,
               fVar171 * fVar171 + auVar324._0_4_ + fVar208 * fVar208 < 900.0)) {
              w.bodies.field3_0x20.elements[iVar97].field66_0x13c.portal_info =
                   w.bodies.field3_0x20.elements[iVar97].field66_0x13c.portal_info & 0xfffffe00 |
                   (uint)uVar123;
              if (((body *)(uVar102 + (longlong)iVar97 * 0x2d0))->portal_timer < 120.5) {
                local_190 = CONCAT44(local_190._4_4_,auVar198._4_4_);
                auVar198._4_4_ =
                     ((body *)(uVar102 + (longlong)iVar97 * 0x2d0))->portal_timer * 0.008298756;
                auVar357 = ZEXT464((uint)auVar198._4_4_);
                fVar208 = 1.0 - auVar198._4_4_;
                local_1b8.x = fVar208 * 30.0;
                local_168._0_4_ = fVar208;
                local_188._0_4_ = auVar198._4_4_ * fVar208;
                iVar70 = 4;
                goto LAB_1400c44cd;
              }
              break;
            }
            lVar133 = lVar133 + 1;
          } while (iVar136 != (int)lVar133);
        }
      }
      goto LAB_1400c42c0;
    }
    auVar198._4_4_ = 0.0;
LAB_1400c4bfe:
    fVar208 = (float)w.frame_number * 0.1;
    cosf();
    if ((sounds.portal_loop != (looping_sound *)0x0) && (ac.initialized != false)) {
      auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                            ZEXT416((uint)(auVar198._4_4_ * (fVar208 * 0.1 + 1.0))));
      auVar248 = vmaxss_avx(ZEXT816(0),auVar248);
      LOCK();
      ((sounds.portal_loop)->field4_0x20).next_target_volume_data = auVar248._0_4_;
      UNLOCK();
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("load and unload bodies");
    if (0 < w.bodies.n_elements) {
      lVar133 = 0;
      auVar198._4_4_ = 0.0;
      auVar324 = ZEXT464(0x49742400);
      lVar163 = 0;
      do {
        pbVar93 = (body *)((longlong)&(w.bodies.field3_0x20.elements)->id + lVar133);
        fVar208 = *(float *)((longlong)&((w.bodies.field3_0x20.elements)->center_of_mass).field0_0x0
                            + lVar133) - w.camera_pos.field0_0x0._s_0.x;
        fVar171 = *(float *)((longlong)&((w.bodies.field3_0x20.elements)->center_of_mass).field0_0x0
                            + lVar133 + 4) - w.camera_pos.field0_0x0._s_0.y;
        if (fVar171 * fVar171 + fVar208 * fVar208 + auVar198._4_4_ < auVar324._0_4_) {
          deabstractify_body(pbVar93);
        }
        else if (((&(w.bodies.field3_0x20.elements)->field_0x99)[lVar133] & 2) != 0) {
          abstractify_body(pbVar93);
        }
        lVar163 = lVar163 + 1;
        lVar133 = lVar133 + 0x2d0;
      } while (lVar163 < w.bodies.n_elements);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  pcVar72 = local_f8;
  stunalloc(brain_cells[(local_f8->field0_0x0)._s_0.lane_index]);
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  if ((pcVar72->field0_0x0)._s_0.lane_index == 0) {
    stunalloc(n_brain_cells);
    stunalloc(brain_cells);
  }
  begin_trace_stage("body update 1");
  local_3c8._s_0.lo = 0x4e49444f4c505845;
  local_3c8._s_0.hi = 0x535350524f435f47;
  auVar248._4_4_ = get_mutation_index(&local_3c8);
  local_190 = CONCAT44(local_190._4_4_,auVar248._4_4_);
  local_3b8.string[0] = 'S';
  local_3b8.string[1] = 'T';
  local_3b8.string[2] = 'R';
  local_3b8.string[3] = 'A';
  local_3b8.string[4] = 'F';
  local_3b8.string[5] = 'I';
  local_3b8.string[6] = 'N';
  local_3b8.string[7] = 'G';
  local_3b8._s_0.hi = 0;
  iVar136 = get_mutation_index(&local_3b8);
  local_1e8._0_4_ = iVar136;
  w.exploding_corpses = 0;
  auVar248._4_4_ = (pcVar72->field0_0x0)._s_0.lane_index;
  iVar70 = ((pcVar72->field0_0x0)._s_0.group)->n_lanes;
  iVar97 = (w.bodies.n_elements * auVar248._4_4_) / iVar70;
  rVar124 = (real_2_u_0)0x0;
  iVar70 = ((auVar248._4_4_ + 1) * w.bodies.n_elements) / iVar70;
  auVar248._4_4_ = iVar70 - iVar97;
  if (auVar248._4_4_ != 0 && iVar97 <= iVar70) {
    lVar133 = (longlong)(int)(float)local_190;
    local_208._4_4_ = (float)(iVar136 >> 0x1f);
    lVar163 = (longlong)iVar97;
    uVar122 = lVar163 * 0x2d0;
    auVar327 = ZEXT1264(ZEXT812(0));
    auVar357 = ZEXT464(0x3f800000);
    auVar332 = ZEXT464(0xbf800000);
    auVar350 = ZEXT464(0x4b095440);
    in_ZMM12 = ZEXT464(0x3f7ae148);
    auVar324 = ZEXT464(0x3c23d70a);
    auVar346 = ZEXT464(0xbba3d70a);
    auVar309 = ZEXT464(0x3ca3d70a);
    auVar336 = ZEXT464(0x3f8147ae);
    auVar353 = ZEXT464(0x447a0000);
    local_188._0_8_ = lVar133;
    local_208._0_4_ = (float)iVar136;
    do {
      uVar102 = w.bodies.field3_0x20.elements;
      w.exploding_corpses =
           w.exploding_corpses +
           (char)w.field55_0x3a28.body_auxiliary_data[lVar133 + w.body_auxiliary_size * lVar163];
      uVar69 = w.base_seed + *(int *)((longlong)&(w.bodies.field3_0x20.elements)->id + uVar122);
      uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar69 = (uVar69 >> 0x10 ^ uVar69) + w.frame_number;
      auVar198._4_4_ =
           *(float *)(((w.bodies.field3_0x20.elements)->brain).abilities +
                     (longlong)((float *)(uVar122 + 0x15c) + -0x52 + -7));
      if ((auVar198._4_4_ != auVar327._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar327._0_4_))) {
        auVar198._4_4_ = auVar357._0_4_ / auVar198._4_4_;
        *(ulonglong *)
         (((w.bodies.field3_0x20.elements)->brain).abilities +
         (longlong)((longlong)((real_2 *)(uVar122 + 0x154) + -0x29) + -0x1c)) =
             CONCAT44(auVar198._4_4_ *
                      *(float *)(((w.bodies.field3_0x20.elements)->brain).abilities +
                                (longlong)
                                ((longlong)((ulonglong *)(uVar122 + 0x158) + -0x29) + -0x1c)),
                      auVar198._4_4_ *
                      *(float *)(((w.bodies.field3_0x20.elements)->brain).abilities +
                                (longlong)((longlong)((real_2 *)(uVar122 + 0x154) + -0x29) + -0x1c))
                     );
      }
      auVar317 = auVar357._0_16_;
      auVar219 = vminss_avx(auVar317,ZEXT416(*(uint *)((((body *)uVar102)->brain).abilities +
                                                      (longlong)
                                                      ((longlong)
                                                       ((float *)(uVar122 + 0x160) + -0x52) + -0x1c)
                                                      )));
      auVar198 = auVar332._0_16_;
      auVar219 = vmaxss_avx(auVar198,auVar219);
      *(int *)((((body *)uVar102)->brain).abilities +
              (longlong)((longlong)((float *)(uVar122 + 0x160) + -0x52) + -0x1c)) = auVar219._0_4_;
      auVar219 = vminss_avx(auVar317,ZEXT416(*(uint *)((((body *)uVar102)->brain).abilities +
                                                      (longlong)
                                                      ((longlong)((brain_t *)(uVar122 + 0x148) + -1)
                                                      + -4))));
      auVar219 = vmaxss_avx(auVar198,auVar219);
      *(int *)((((body *)uVar102)->brain).abilities +
              (longlong)((longlong)((brain_t *)(uVar122 + 0x148) + -1) + -4)) = auVar219._0_4_;
      auVar219 = vminss_avx(auVar317,ZEXT416(*(uint *)((((body *)uVar102)->brain).abilities +
                                                      (longlong)
                                                      ((longlong)
                                                       ((float *)(uVar122 + 0x150) + -0x52) + -0x1c)
                                                      )));
      auVar219 = vmaxss_avx(auVar198,auVar219);
      *(int *)((((body *)uVar102)->brain).abilities +
              (longlong)((longlong)((float *)(uVar122 + 0x150) + -0x52) + -0x1c)) = auVar219._0_4_;
      uVar96 = *(uint *)((((body *)uVar102)->brain).abilities +
                        (longlong)((body_u_316 *)(uVar122 + 0x13c) + -0x52 + -7));
      if ((uVar96 & 0x100) == 0) {
        if (((&((body *)uVar102)->field_0x99)[uVar122] & 1) == 0) {
          *(undefined4 *)
           ((((body *)uVar102)->brain).abilities +
           (longlong)((longlong)((float *)(uVar122 + 0x140) + -0x52) + -0x1c)) = 0;
        }
      }
      else {
        auVar198._4_4_ =
             *(float *)((((body *)uVar102)->brain).abilities +
                       (longlong)((longlong)((float *)(uVar122 + 0x140) + -0x52) + -0x1c));
        if ((auVar198._4_4_ < 120.5) &&
           (auVar198._4_4_ = auVar357._0_4_ + auVar198._4_4_,
           *(float *)((((body *)uVar102)->brain).abilities +
                     (longlong)((longlong)((float *)(uVar122 + 0x140) + -0x52) + -0x1c)) =
                auVar198._4_4_, 120.5 <= auVar198._4_4_)) {
          (&((body *)uVar102)->field_0x99)[uVar122] = (&((body *)uVar102)->field_0x99)[uVar122] | 1;
        }
      }
      *(uint *)((((body *)uVar102)->brain).abilities +
               (longlong)((body_u_316 *)(uVar122 + 0x13c) + -0x52 + -7)) = uVar96 & 0xfffffeff;
      uVar107 = get_map_flags(&w.map,(real_2)((real_2_u_0 *)
                                             ((((body *)uVar102)->brain).abilities +
                                             (longlong)
                                             ((longlong)((real_2 *)(uVar122 + 0xfc) + -0x29) + -0x1c
                                             )))->_s_0);
      uVar96 = *(uint *)(&((body *)uVar102)->field_0x98 +
                        (longlong)((ulonglong *)(uVar122 + 0x98) + -0x13));
      uVar107 = (uVar107 & 1) << 6;
      *(uint *)(&((body *)uVar102)->field_0x98 + (longlong)((ulonglong *)(uVar122 + 0x98) + -0x13))
           = uVar96 & 0xffffffbf | uVar107;
      if ((uVar96 & 1) == 0) {
        if (*(int *)((longlong)&((body *)uVar102)->parent_id +
                    (longlong)((int *)(uVar122 + 0x58) + -0x16)) == 0) {
          if ((uVar96 & 0x100) != 0) goto LAB_1400c517e;
        }
        else {
          rVar124 = (real_2_u_0)((longlong)(uVar102 + (uVar122 - w.bodies.field3_0x20._0_8_)) >> 4);
          if (((w.field55_0x3a28.body_auxiliary_data
                [(longlong)mut_budding_index +
                 (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 * (longlong)rVar124] == '\0')
              || ((uVar96 & 0x100) != 0)) ||
             (1200.0 <= *(float *)((longlong)&((body *)uVar102)->age +
                                  (longlong)((float *)(uVar122 + 0x74) + -0x1d)))) {
LAB_1400c517e:
            uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
            uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
            uVar69 = (uVar69 >> 0x10 ^ uVar69) + 0xcec46;
            uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
            uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x63d2f291;
            uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
            *(float *)((((body *)uVar102)->brain).abilities +
                      (longlong)((float *)(uVar122 + 0xe4) + -0x52 + -7)) =
                 (float)*(int *)((longlong)&((body *)uVar102)->n_cells +
                                (longlong)((int *)(uVar122 + 0xac) + -0x2b)) * -0.001 *
                 (float)(uVar69 >> 0x10 ^ uVar69) * 2.3283064e-10 +
                 *(float *)((((body *)uVar102)->brain).abilities +
                           (longlong)((float *)(uVar122 + 0xe4) + -0x52 + -7));
          }
        }
        auVar198._4_4_ =
             *(float *)((longlong)&(((body *)uVar102)->center_of_mass).field0_0x0 +
                       (longlong)((real_2 *)(uVar122 + 0xb0) + -0x16));
        fVar208 = *(float *)((longlong)&(((body *)uVar102)->center_of_mass).field0_0x0 +
                            (longlong)((undefined4 *)(uVar122 + 0xb4) + -0x2c));
        fVar171 = auVar198._4_4_ - w.camera_pos.field0_0x0._s_0.x;
        fVar334 = fVar208 - w.camera_pos.field0_0x0._s_0.y;
        fVar171 = fVar334 * fVar334 + auVar327._0_4_ + fVar171 * fVar171;
        in_ZMM2 = ZEXT464((uint)fVar171);
        if ((fVar171 < auVar350._0_4_) && ((uVar96 & 4) == 0)) {
          rVar124 = (real_2_u_0)
                    (CONCAT44(rVar124._s_0.y,
                              auVar198._4_4_ +
                              *(float *)((longlong)
                                         &(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
                                        (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18))) |
                    (ulonglong)
                    (uint)(fVar208 +
                          *(float *)((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
                                    (longlong)((undefined4 *)(uVar122 + 0xc4) + -0x30))) << 0x20);
          ((real_2_u_0 *)
          ((longlong)&(((body *)uVar102)->center_of_mass).field0_0x0 +
          (longlong)((real_2 *)(uVar122 + 0xb0) + -0x16)))->_s_0 = (real_2_u_0_s_0)rVar124;
          pwVar76 = wall_map((wall_t *)local_158,&w.map,(real_2)rVar124._s_0,true);
          auVar198._4_4_ =
               in_ZMM12._0_4_ *
               (*(float *)((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
                          (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18)) - rStack_14c._s_0.x) +
               rStack_14c._s_0.x;
          fVar208 = in_ZMM12._0_4_ *
                    (*(float *)((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
                               (longlong)((undefined4 *)(uVar122 + 0xc4) + -0x30)) -
                    rStack_14c._s_0.y) + rStack_14c._s_0.y;
          *(ulonglong *)
           ((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
           (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18)) =
               CONCAT44((int)((ulonglong)pwVar76 >> 0x20),auVar198._4_4_) |
               (ulonglong)(uint)fVar208 << 0x20;
          fVar171 = auVar327._0_4_;
          fVar334 = auVar357._0_4_;
          if (w.field55_0x3a28.body_auxiliary_data
              [CONCAT44(local_208._4_4_,(float)local_208) +
               (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
               ((longlong)(uVar102 + (uVar122 - w.bodies.field3_0x20._0_8_)) >> 4)] == '\0') {
            fVar172 = *(float *)((((body *)uVar102)->brain).abilities +
                                (longlong)((longlong)((brain_t *)(uVar122 + 0x148) + -1) + -4));
            fVar245 = *(float *)((((body *)uVar102)->brain).abilities +
                                (longlong)((undefined4 *)(uVar122 + 0x14c) + -0x52 + -7));
          }
          else {
            fVar172 = *(float *)((((body *)uVar102)->brain).abilities +
                                (longlong)((longlong)((brain_t *)(uVar122 + 0x148) + -1) + -4));
            fVar245 = *(float *)((((body *)uVar102)->brain).abilities +
                                (longlong)((longlong)((float *)(uVar122 + 0x150) + -0x52) + -0x1c));
            fVar333 = fVar245 * fVar245 + fVar171 + fVar172 * fVar172;
            auVar317 = ZEXT416((uint)fVar333);
            auVar219 = vsqrtss_avx(auVar317,auVar317);
            fVar303 = fVar334 / auVar219._0_4_;
            if (fVar334 < fVar333) {
              fVar172 = fVar172 * fVar303;
            }
            auVar219 = vcmpss_avx(auVar357._0_16_,auVar317,1);
            auVar219 = vblendvps_avx(ZEXT416((uint)fVar245),ZEXT416((uint)(fVar245 * fVar303)),
                                     auVar219);
            fVar245 = auVar219._0_4_;
          }
          rVar154 = *(real_2_u_0_s_0 *)
                     ((longlong)&(((body *)uVar102)->center_of_mass).field0_0x0 +
                     (longlong)((real_2 *)(uVar122 + 0xb0) + -0x16));
          uVar158 = *(undefined8 *)
                     ((((body *)uVar102)->brain).abilities +
                     (longlong)((longlong)((real_2 *)(uVar122 + 0x104) + -0x29) + -0x1c));
          fVar172 = fVar172 * auVar324._0_4_;
          fVar245 = fVar245 * auVar324._0_4_;
          local_168._0_8_ = uVar158;
          fVar333 = (float)((ulonglong)uVar158 >> 0x20);
          in_ZMM5 = ZEXT464((uint)fVar333);
          auVar198._4_4_ = auVar198._4_4_ + (fVar172 * (float)uVar158 - fVar245 * fVar333);
          fVar208 = fVar208 + fVar172 * fVar333 + fVar245 * (float)uVar158;
          rVar169 = (real_2_u_0)(CONCAT44(1,auVar198._4_4_) | (ulonglong)(uint)fVar208 << 0x20);
          ((real_2_u_0 *)
          ((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
          (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18)))->_s_0 = (real_2_u_0_s_0)rVar169;
          local_1b8.x = rVar154.x;
          local_1b8.y = rVar154.y;
          if (fVar171 < fStack_144) {
            fVar172 = (local_1b8.y - w.final_boss.x.field0_0x0._s_0.y) * 0.0001;
            auVar219 = vmaxss_avx(auVar357._0_16_,ZEXT416((uint)(fVar334 + fVar172 * fVar172)));
            fVar171 = fVar171 + -0.02 / auVar219._0_4_;
            fVar334 = (local_1b8.x - w.final_boss.x.field0_0x0._s_0.x) + 7000.0;
            auVar327 = ZEXT1664(auVar332._0_16_);
            auVar332 = ZEXT1664(in_ZMM12._0_16_);
            auVar336 = ZEXT1664(auVar324._0_16_);
            auVar309 = ZEXT1664(auVar350._0_16_);
            fVar172 = (local_1b8.y - w.final_boss.x.field0_0x0._s_0.y) + -70000.0;
            auVar219 = vmaxss_avx(ZEXT416((uint)(fVar172 * fVar172 + fVar334 * fVar334 + 0.0)),
                                  ZEXT416(0x4bbebc20));
            auVar324 = ZEXT1664(auVar219);
            powf();
            rVar154.y = local_1b8.y;
            rVar154.x = local_1b8.x;
            fVar245 = auVar324._0_4_ * -100000.0;
            auVar346 = ZEXT464(0xbba3d70a);
            auVar350 = ZEXT1664(auVar309._0_16_);
            auVar324 = ZEXT1664(auVar336._0_16_);
            in_ZMM12 = ZEXT1664(auVar332._0_16_);
            auVar332 = ZEXT1664(auVar327._0_16_);
            auVar327 = ZEXT1264(ZEXT812(0));
            rVar169 = (real_2_u_0)
                      (CONCAT44(rVar169._s_0.y,fVar334 * fVar245 + 0.0 + auVar198._4_4_) |
                      (ulonglong)(uint)(fVar208 + fVar171 + fVar172 * fVar245) << 0x20);
            ((real_2_u_0 *)
            ((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
            (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18)))->_s_0 = (real_2_u_0_s_0)rVar169;
          }
          rVar77 = get_fictitious_force((real_2)rVar154,(real_2)rVar169);
          uVar158 = CONCAT44(rVar169._4_4_ + rVar77.field0_0x0._4_4_,
                             rVar169._0_4_ + rVar77.field0_0x0._0_4_);
          *(undefined8 *)
           ((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
           (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18)) = uVar158;
          ((real_2_u_0 *)
          ((((body *)uVar102)->brain).abilities +
          (longlong)((longlong)((real_2 *)(uVar122 + 0xfc) + -0x29) + -0x1c)))->_s_0 = rVar154;
          fVar208 = 0.1;
          auVar198._4_4_ =
               *(float *)((((body *)uVar102)->brain).abilities +
                         (longlong)((longlong)((float *)(uVar122 + 0x150) + -0x52) + -0x1c)) * 0.1;
          cosf();
          fVar208 = fVar208 * *(float *)((((body *)uVar102)->brain).abilities +
                                        (longlong)
                                        ((longlong)((float *)(uVar122 + 0x150) + -0x52) + -0x1c));
          sinf();
          fVar171 = (float)local_168._0_4_ * auVar198._4_4_ - fVar208 * fVar333;
          auVar198._4_4_ = (float)local_168._0_4_ * fVar208 + auVar198._4_4_ * fVar333;
          *(ulonglong *)
           ((((body *)uVar102)->brain).abilities +
           (longlong)((longlong)((real_2 *)(uVar122 + 0x104) + -0x29) + -0x1c)) =
               CONCAT44(extraout_var_01,fVar171) | (ulonglong)(uint)auVar198._4_4_ << 0x20;
          fVar208 = auVar198._4_4_ * auVar198._4_4_ + auVar327._0_4_ + fVar171 * fVar171;
          in_ZMM2 = ZEXT464((uint)fVar208);
          uVar109 = 0x3f800000;
          if (1e-06 < fVar208) {
            auVar219 = vsqrtss_avx(ZEXT416((uint)fVar208),ZEXT416((uint)fVar208));
            fVar208 = auVar357._0_4_ / auVar219._0_4_;
            in_ZMM2 = ZEXT1664(CONCAT124(auVar357._4_12_,fVar208));
            uVar109 = (ulonglong)(uint)(fVar171 * fVar208) |
                      CONCAT44(auVar198._4_4_,auVar198._4_4_ * fVar208) << 0x20;
          }
          *(ulonglong *)
           ((((body *)uVar102)->brain).abilities +
           (longlong)((longlong)((real_2 *)(uVar122 + 0x104) + -0x29) + -0x1c)) = uVar109;
          *(ulonglong *)
           ((((body *)uVar102)->brain).abilities +
           (longlong)((longlong)((ulonglong *)(uVar122 + 0x2b8) + -0x29) + -0x1c)) =
               CONCAT44(fStack_144,rStack_14c._s_0.y);
          LVar46._4_4_ = rStack_14c._s_0.x;
          LVar46._0_4_ = local_158._8_4_;
          pLVar12 = (LARGE_INTEGER *)
                    ((((body *)uVar102)->brain).abilities +
                    (longlong)((longlong)((wall_t *)(uVar122 + 0x2a8) + -0xe) + -0x14));
          *(DWORD *)pLVar12 = local_158._0_4_;
          *(undefined4 *)((longlong)pLVar12 + 4) = local_158._4_4_;
          pLVar12[1] = LVar46;
          auVar219 = vminss_avx(SUB6416(ZEXT464(0x42a00000),0),
                                ZEXT416(*(uint *)((longlong)&((body *)uVar102)->radius +
                                                 (longlong)((float *)(uVar122 + 0xd0) + -0x34))));
          auVar219 = vmaxss_avx(SUB6416(ZEXT464(0x40a00000),0),auVar219);
          lVar133 = local_188._0_8_;
          if ((float)local_158._0_4_ <= auVar219._0_4_) {
            auVar317 = vmaxss_avx(ZEXT416((uint)local_158._0_4_),auVar332._0_16_);
            if (auVar327._0_4_ < fStack_144) {
              *(float *)((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
                        (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18)) =
                   *(float *)((((body *)uVar102)->brain).abilities +
                             (longlong)((longlong)((float *)(uVar122 + 0x150) + -0x52) + -0x1c)) *
                   -0.1 + *(float *)((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
                                    (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18));
              uVar158 = *(undefined8 *)
                         ((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
                         (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18));
            }
            auVar198._4_4_ = auVar219._0_4_ - auVar317._0_4_;
            fVar208 = auVar198._4_4_ * (float)local_158._4_4_;
            auVar198._4_4_ = (float)local_158._8_4_ * auVar198._4_4_;
            fVar171 = *(float *)((longlong)&((body *)uVar102)->avg_phasing +
                                (longlong)((float *)(uVar122 + 0xa0) + -0x28)) * -9.2;
            fVar334 = (float)local_158._4_4_;
            fVar172 = (float)local_158._8_4_;
            expf();
            auVar198._4_4_ = auVar198._4_4_ * fVar171 + local_1b8.y;
            *(ulonglong *)
             ((longlong)&(((body *)uVar102)->center_of_mass).field0_0x0 +
             (longlong)((real_2 *)(uVar122 + 0xb0) + -0x16)) =
                 CONCAT44(auVar198._4_4_,fVar208 * fVar171 + local_1b8.x);
            fVar208 = (float)((ulonglong)uVar158 >> 0x20);
            in_ZMM2 = ZEXT464((uint)fVar208);
            fVar171 = fVar171 * (fVar172 * fVar208 + auVar327._0_4_ + (float)uVar158 * fVar334);
            *(ulonglong *)
             ((longlong)&(((body *)uVar102)->center_of_mass_dot).field0_0x0 +
             (longlong)((real_2 *)(uVar122 + 0xc0) + -0x18)) =
                 CONCAT44(auVar198._4_4_,(float)uVar158 - fVar171 * fVar334) |
                 CONCAT44(auVar198._4_4_,fVar208 - fVar172 * fVar171) << 0x20;
            auVar346 = ZEXT464(0xbba3d70a);
          }
          auVar309 = ZEXT464(0x3ca3d70a);
          auVar336 = ZEXT464(0x3f8147ae);
          auVar353 = ZEXT464(0x447a0000);
        }
      }
      else {
        iVar70 = *(int *)((longlong)&((body *)uVar102)->regen_boost +
                         (longlong)((uint *)(uVar122 + 0x9c) + -0x27));
        if (iVar70 == 0) {
          bVar170 = true;
        }
        else {
          iVar70 = iVar70 + -1;
          bVar170 = iVar70 == 0;
          *(int *)((longlong)&((body *)uVar102)->regen_boost +
                  (longlong)((uint *)(uVar122 + 0x9c) + -0x27)) = iVar70;
        }
        *(uint *)(&((body *)uVar102)->field_0x98 + (longlong)((ulonglong *)(uVar122 + 0x98) + -0x13)
                 ) = uVar96 & 0xffffffbb | uVar107;
        auVar198._4_4_ =
             *(float *)((longlong)&((body *)uVar102)->xp_alpha +
                       (longlong)((float *)(uVar122 + 0x8c) + -0x23));
        fVar208 = auVar346._0_4_ +
                  *(float *)((longlong)&((body *)uVar102)->xp_timer +
                            (longlong)((float *)(uVar122 + 0x88) + -0x22));
        *(float *)((longlong)&((body *)uVar102)->xp_timer +
                  (longlong)((float *)(uVar122 + 0x88) + -0x22)) = fVar208;
        auVar219 = vcmpss_avx(auVar327._0_16_,ZEXT416((uint)fVar208),1);
        auVar219 = vandps_avx(auVar219,auVar309._0_16_);
        *(float *)((longlong)&((body *)uVar102)->xp_alpha +
                  (longlong)((float *)(uVar122 + 0x8c) + -0x23)) =
             in_ZMM12._0_4_ * auVar198._4_4_ + auVar219._0_4_;
        *(undefined4 *)
         ((((body *)uVar102)->brain).abilities +
         (longlong)((longlong)((float *)(uVar122 + 0xe8) + -0x52) + -0x1c)) = 0;
        *(undefined8 *)
         ((((body *)uVar102)->brain).abilities +
         (longlong)((longlong)((float *)(uVar122 + 0xf0) + -0x52) + -0x1c)) = 0;
        *(undefined4 *)
         ((((body *)uVar102)->brain).abilities +
         (longlong)((longlong)((float *)(uVar122 + 0xf8) + -0x52) + -0x1c)) = 0;
        auVar198._4_4_ =
             *(float *)((((body *)uVar102)->brain).abilities +
                       (longlong)((float *)(uVar122 + 0xec) + -0x52 + -7));
        if (auVar327._0_4_ < auVar198._4_4_) {
          auVar219 = vmaxss_avx(auVar327._0_16_,ZEXT416((uint)(auVar332._0_4_ + auVar198._4_4_)));
          *(int *)((((body *)uVar102)->brain).abilities +
                  (longlong)((float *)(uVar122 + 0xec) + -0x52 + -7)) = auVar219._0_4_;
        }
        auVar219 = vminss_avx(auVar353._0_16_,
                              ZEXT416((uint)(auVar336._0_4_ *
                                            *(float *)((((body *)uVar102)->brain).abilities +
                                                      (longlong)
                                                      ((longlong)
                                                       ((float *)(uVar122 + 0x130) + -0x52) + -0x1c)
                                                      ))));
        auVar219 = vmaxss_avx(SUB6416(ZEXT464(0x41c00000),0),auVar219);
        *(int *)((((body *)uVar102)->brain).abilities +
                (longlong)((longlong)((float *)(uVar122 + 0x130) + -0x52) + -0x1c)) = auVar219._0_4_
        ;
        if (!(bool)(*(longlong *)
                     ((longlong)&((body *)uVar102)->boss_part +
                     (longlong)((boss_part_t **)(uVar122 + 0x60) + -0xc)) == 0 & bVar170)) {
          uVar131 = 0x44700000;
          if (!bVar170) {
            uVar131 = 0;
          }
          *(undefined4 *)
           ((((body *)uVar102)->brain).abilities +
           (longlong)((float *)(uVar122 + 0xec) + -0x52 + -7)) = uVar131;
        }
      }
      lVar163 = lVar163 + 1;
      uVar122 = uVar122 + 0x2d0;
      auVar248._4_4_ = auVar248._4_4_ + -1;
    } while (auVar248._4_4_ != 0);
  }
  uVar102._0_4_ = 0.0;
  uVar102._4_4_ = 0.0;
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18);
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("spawn new cells");
    if (w.bodies.n_elements < 1) {
      auVar324 = ZEXT864(0);
    }
    else {
      auVar309 = ZEXT1264(ZEXT812(0));
      auVar336 = ZEXT464(0x3f800000);
      auVar248 = vpcmpeqd_avx(in_ZMM12._0_16_,in_ZMM12._0_16_);
      auVar346 = ZEXT1664(auVar248);
      auVar350 = ZEXT464(0x3c23d70a);
      auVar353 = ZEXT464(0x3f000000);
      auVar198._4_4_ = 2.3283064e-10;
      auVar357 = ZEXT464(0x7f800000);
      auVar332 = ZEXT464(0x41100000);
      auVar327 = ZEXT1664(ZEXT816(0x3fe40d9320000000));
      lVar133 = 0;
      auVar324 = ZEXT864(0);
      do {
        uVar102 = w.bodies.field3_0x20.elements;
        local_128 = (real_2_u_0)lVar133;
        if (w.bodies.field3_0x20.elements[lVar133].loaded != 0) {
          uVar102 = w.bodies.field3_0x20.elements + lVar133;
          if (sb != (body *)0x0 && 2 < *(int *)(uVar102 + 0x78)) {
            if ((sb->team != *(float *)(uVar102 + 0x5c)) ||
               (NAN(sb->team) || NAN(*(float *)(uVar102 + 0x5c)))) {
              fVar208 = *(float *)(uVar102 + 0xb0) - w.camera_pos.field0_0x0._s_0.x;
              fVar171 = *(float *)(uVar102 + 0xb4) - w.camera_pos.field0_0x0._s_0.y;
              auVar248 = ZEXT416((uint)(fVar171 * fVar171 + fVar208 * fVar208 + auVar309._0_4_));
              auVar219 = vsqrtss_avx(auVar248,auVar248);
              in_ZMM5 = ZEXT464(0) << 0x20;
              auVar248 = vminss_avx(ZEXT416((uint)(float)(sb->next_levelup - sb->last_levelup)),
                                    ZEXT416(0x447a0000));
              auVar248 = vmaxss_avx(ZEXT416((uint)(auVar248._0_4_ * auVar219._0_4_ * 0.1)),
                                    auVar336._0_16_);
              auVar324 = ZEXT464((uint)(auVar324._0_4_ +
                                       ((float)*(int *)(uVar102 + 0x78) * 10.0) / auVar248._0_4_));
            }
          }
          if ((body *)uVar102 == sb && auVar309._0_4_ < *(float *)(uVar102 + 0xe8)) {
            auVar324 = ZEXT464((uint)(auVar324._0_4_ +
                                     *(float *)(uVar102 + 0xe8) / *(float *)(uVar102 + 0x6c)));
          }
          uVar69 = (w.base_seed + *(int *)uVar102 >> 0x10 ^ w.base_seed + *(int *)uVar102) *
                   0x7feb352d;
          uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
          uVar69 = (uVar69 >> 0x10 ^ uVar69) + w.frame_number;
          if (w.bodies.field3_0x20.elements[lVar133].floodfill_needed != 0) {
            floodfill_body((body *)uVar102);
            *(byte *)(uVar102 + 0x98) = *(byte *)(uVar102 + 0x98) & 0xfd;
          }
          auVar248 = local_1d8;
          if ((*(int *)(uVar102 + 0x58) == 0) ||
             (w.field55_0x3a28.body_auxiliary_data
              [(longlong)mut_budding_index +
               (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
               ((longlong)(uVar102 - w.bodies.field3_0x20._0_8_) >> 4)] != '\0')) {
            *(undefined8 *)(uVar102 + 0x6c) = 0;
            uVar109 = (ulonglong)*(int *)(uVar102 + 0x10);
            if (0 < (longlong)uVar109) {
              uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = (uVar69 >> 0x10 ^ uVar69) + 0x90818;
              uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              local_1d8._4_4_ = 0;
              local_1d8._0_4_ = uVar69 >> 0x10 ^ uVar69;
              local_1d8._8_8_ = auVar248._8_8_;
              do {
                while( true ) {
                  lVar133 = *(longlong *)(uVar102 + 8);
                  lVar163 = (uVar109 - 1) * 0x34;
                  *(float *)(uVar102 + 0x6c) =
                       materials_list[*(int *)(lVar133 + lVar163)].max_health +
                       *(float *)(uVar102 + 0x6c);
                  fVar208 = (auVar336._0_4_ - *(float *)(uVar102 + 0x90)) *
                            (float)materials_list[*(int *)(lVar133 + lVar163)].spawn_with
                                   [(ulonglong)
                                    (w.field55_0x3a28.body_auxiliary_data
                                     [(longlong)mut_random_costs_index +
                                      (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                                      ((longlong)(uVar102 - w.bodies.field3_0x20._0_8_) >> 4)] !=
                                    '\0') + 4];
                  if (*(int *)uVar102 == w.selected_body) {
                    auVar213._0_4_ = (float)w.em.cell_item_counts[*(int *)(lVar133 + lVar163)];
                    auVar213._4_12_ = in_ZMM5._4_12_;
                    auVar248 = vmaxss_avx(auVar336._0_16_,auVar213);
                    fVar208 = fVar208 / auVar248._0_4_;
                  }
                  piVar74 = (int *)(lVar133 + lVar163);
                  *(float *)(uVar102 + 0x70) = fVar208 + *(float *)(uVar102 + 0x70);
                  uVar123 = *(ulonglong *)(uVar102 + 0x28);
                  lVar133 = *(longlong *)(piVar74 + 5);
                  auVar248._4_4_ = (int)*(undefined8 *)(uVar102 + 0x30);
                  iVar136 = (int)uVar123;
                  iVar70 = (int)lVar133;
                  local_1b8.x = (float)((iVar70 - iVar136) +
                                       (int)(lVar133 - (uVar123 & 0xffffffff00000000) >> 0x20) *
                                       (auVar248._4_4_ - iVar136));
                  local_1b8.y = (float)((int)local_1b8.x >> 0x1f);
                  if ((((((iVar70 < iVar136) || (auVar248._4_4_ <= iVar70)) ||
                        (auVar248._4_4_ = (int)((ulonglong)lVar133 >> 0x20),
                        auVar248._4_4_ < (int)(uVar123 >> 0x20))) ||
                       (((int)((ulonglong)*(undefined8 *)(uVar102 + 0x30) >> 0x20) <= auVar248._4_4_
                        || (uVar69 = *(uint *)(*(longlong *)(uVar102 + 0x40) +
                                              (longlong)(int)local_1b8.x * 4), (int)uVar69 < 1))))
                      || (uVar96 = w.max_cells + 0x7fffffffU & uVar69,
                         w.field57_0x3a48.cell_index_table[uVar96].id != uVar69)) ||
                     ((w.field58_0x3a60.cells == (cell *)0x0 ||
                      (w.field58_0x3a60.cells[w.field57_0x3a48.cell_index_table[uVar96].index >> 4].
                       field1_0x40.body_id_packed
                       [w.field57_0x3a48.cell_index_table[uVar96].index & 0xf] != *(int *)uVar102)))
                     ) {
                    *(undefined4 *)(*(longlong *)(uVar102 + 0x40) + (longlong)(int)local_1b8.x * 4)
                         = 0;
                  }
                  pcVar119 = (creature_spawner *)uVar109;
                  if (piVar74[7] == 0) break;
                  piVar74[7] = piVar74[7] + -1;
joined_r0x0001400c5fa8:
                  local_1b8 = (real_2_u_0_s_0)(longlong)(int)local_1b8.x;
                  uVar109 = (longlong)pcVar119 - 1;
                  if ((longlong)pcVar119 < 2) goto LAB_1400c5960;
                }
                lVar133 = *(longlong *)(uVar102 + 0x40);
                if (*(int *)(lVar133 + (longlong)(int)local_1b8.x * 4) != 0)
                goto joined_r0x0001400c5fa8;
                lVar163 = *(longlong *)(piVar74 + 5);
                auVar219 = *(undefined1 (*) [16])(uVar102 + 0x28);
                local_208._0_4_ = 0.0;
                local_208._4_4_ = 0.0;
                uVar69 = 0xfffffffd;
                local_168._0_8_ = materials_list;
                auVar51._8_8_ = 0;
                auVar51._0_8_ = local_188._8_8_;
                local_188 = auVar51 << 0x40;
                local_170 = (uchar *)0x0;
                local_120 = (creature_spawner *)uVar109;
                do {
                  auVar317 = local_188;
                  uVar107 = uVar69 + 3;
                  uVar96 = uVar69;
                  if (0xfffffffc < uVar69) {
                    uVar96 = uVar107;
                  }
                  uVar151 = (uVar107 < 3) - 1 | 1;
                  uVar166 = uVar151;
                  if ((int)uVar96 < 1) {
                    uVar166 = 0;
                  }
                  lVar110 = ((ulonglong)uVar166 << 0x20) + lVar163;
                  uVar96 = (1 - uVar96) * uVar151 + (int)lVar163;
                  auVar248 = vpinsrd_avx(ZEXT416(uVar96),(int)((ulonglong)lVar110 >> 0x20),1);
                  auVar248 = vpshufd_avx(auVar248,0x44);
                  auVar248 = vpcmpgtd_avx(auVar219,auVar248);
                  auVar248 = vpblendw_avx(auVar346._0_16_ ^ auVar248,auVar248,0xf0);
                  auVar248 = auVar346._0_16_ & ~auVar248;
                  if (((((((SUB161(auVar248 >> 0x1f,0) & 1) == 0 &&
                          (SUB161(auVar248 >> 0x3f,0) & 1) == 0) &&
                         (SUB161(auVar248 >> 0x5f,0) & 1) == 0) && -1 < auVar248[0xf]) &&
                       (auVar248._4_4_ = (int)*(ulonglong *)(uVar102 + 0x28),
                       uVar96 = *(uint *)(lVar133 +
                                         (longlong)
                                         (int)((int)(lVar110 - (*(ulonglong *)(uVar102 + 0x28) &
                                                               0xffffffff00000000) >> 0x20) *
                                               (*(int *)(uVar102 + 0x30) - auVar248._4_4_) +
                                              (uVar96 - auVar248._4_4_)) * 4), 0 < (int)uVar96)) &&
                      (uVar166 = w.max_cells + 0x7fffffffU & uVar96,
                      w.field57_0x3a48.cell_index_table[uVar166].id == uVar96)) &&
                     (w.field58_0x3a60.cells != (cell *)0x0)) {
                    piVar160 = w.field58_0x3a60.cells
                               [w.field57_0x3a48.cell_index_table[uVar166].index >> 4].field0_0x0.
                               id_packed + (w.field57_0x3a48.cell_index_table[uVar166].index & 0xf);
                    lVar110 = (longlong)*piVar74 * 0x118;
                    if (((*(byte *)&materials_list[*piVar74].field14_0x4c & 8) != 0) &&
                       (auVar353._0_4_ < (float)piVar160[0x40])) {
                      local_208._0_4_ = (float)CONCAT71((int7)((ulonglong)lVar110 >> 8),1);
                      local_208._4_4_ = (float)((ulonglong)lVar110 >> 0x20);
                    }
                    if (((auVar336._0_4_ <= (float)piVar160[0x1c0]) &&
                        ((*(byte *)(piVar160 + 0x400) & 0x80) == 0)) &&
                       ((auVar350._0_4_ * materials_list[piVar160[0x30]].max_health <
                         (float)piVar160[0x1d0] &&
                        ((piVar160[0x460] == 0 || (piVar160[0x460] == -2)))))) {
                      local_170 = (uchar *)(CONCAT44((int)((ulonglong)w.field58_0x3a60._0_8_ >> 0x20
                                                          ),SUB84(local_170,0) +
                                                            (float)piVar160[0x2f0]) |
                                           (ulonglong)
                                           (uint)((float)((ulonglong)local_170 >> 0x20) +
                                                 (float)piVar160[0x300]) << 0x20);
                      auVar248._4_4_ = local_188._0_4_;
                      *(int **)(local_158 + (longlong)auVar248._4_4_ * 8) = piVar160;
                      *(uint *)((longlong)local_118 + (longlong)auVar248._4_4_ * 4) = uVar107;
                      local_188._4_4_ = 0;
                      local_188._0_4_ = auVar248._4_4_ + 1;
                      local_188._8_8_ = auVar317._8_8_;
                    }
                  }
                  uVar69 = uVar69 + 1;
                } while (uVar69 != 3);
                pcVar119 = local_120;
                if ((int)local_188._0_4_ < 1 || ((uint)(float)local_208 & 1) != 0)
                goto joined_r0x0001400c5fa8;
                pcVar84 = create_cell();
                *(byte *)&pcVar84->field44_0x1000 = *(byte *)&pcVar84->field44_0x1000 | 0x3f;
                (pcVar84->field3_0xc0).material_index_packed[0] = *piVar74;
                (pcVar84->field1_0x40).body_id_packed[0] = *(int *)uVar102;
                uVar109 = (ulonglong)pcVar84 & 0xffffffffffffffc0;
                lVar133 = (ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0;
                *(undefined8 *)(uVar109 + 0x1580 + lVar133) = *(undefined8 *)(piVar74 + 5);
                uVar122 = *(undefined8 *)(piVar74 + 3);
                puVar11 = (undefined8 *)(uVar109 + 0x1588 + lVar133);
                *puVar11 = *(undefined8 *)(piVar74 + 1);
                puVar11[1] = uVar122;
                *(int *)(uVar102 + 0xac) = *(int *)(uVar102 + 0xac) + 1;
                uVar96 = (local_1d8._2_4_ & 0xffff ^ local_1d8._0_4_) * 0x7feb352d;
                uVar96 = uVar96 >> 0xf ^ uVar96;
                uVar69 = uVar96 * -0x7b935975;
                fVar208 = auVar198._4_4_ * (float)(uVar69 >> 0x10 ^ uVar69);
                if ((fVar208 != auVar309._0_4_) || (NAN(fVar208) || NAN(auVar309._0_4_))) {
                  fVar171 = auVar336._0_4_;
                  uVar123 = 0;
                  if ((fVar208 != fVar171) || (NAN(fVar208) || NAN(fVar171))) {
                    dVar176 = (double)(fVar208 / (fVar171 - fVar208));
                    log();
                    uVar123 = (ulonglong)(uint)(float)(auVar327._0_8_ * dVar176);
                  }
                }
                else {
                  uVar123 = 0;
                }
                uVar96 = uVar96 * -0x63d2f291;
                uVar69 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
                uVar106 = CONCAT44(0,uVar69 >> 0x10 ^ uVar69);
                local_1d8._0_8_ = uVar106;
                fVar208 = auVar198._4_4_ * (float)uVar106;
                if ((fVar208 != auVar309._0_4_) || (NAN(fVar208) || NAN(auVar309._0_4_))) {
                  fVar171 = auVar336._0_4_;
                  if ((fVar208 != fVar171) || (NAN(fVar208) || NAN(fVar171))) {
                    dVar176 = (double)(fVar208 / (fVar171 - fVar208));
                    log();
                    uVar123 = uVar123 | (ulonglong)(uint)(float)(auVar327._0_8_ * dVar176) << 0x20;
                  }
                }
                auVar182._0_4_ = auVar336._0_4_ / (float)local_188._0_4_;
                auVar182._4_12_ = auVar336._4_12_;
                auVar248 = vmovsldup_avx(auVar182);
                auVar183._0_4_ = auVar248._0_4_ * SUB84(local_170,0) + (float)uVar123 * 0.001;
                auVar183._4_4_ =
                     auVar248._4_4_ * (float)((ulonglong)local_170 >> 0x20) +
                     (float)(uVar123 >> 0x20) * 0.001;
                auVar183._8_4_ = auVar248._8_4_ * 0.0 + 0.0;
                auVar183._12_4_ = auVar248._12_4_ * 0.0 + 0.0;
                (pcVar84->field32_0xbc0).x = auVar183._0_4_;
                fVar208 = (float)vextractps_avx(auVar183,1);
                (pcVar84->field33_0xc00).y = fVar208;
                uVar122 = vmovlps_avx(auVar183);
                *(undefined8 *)(uVar109 + lVar133 + 0x15a0) = uVar122;
                (pcVar84->field40_0xdc0).r = 1.0;
                (pcVar84->field31_0xb80).mass = 0.1;
                *(int *)(*(longlong *)(uVar102 + 0x40) + (longlong)local_1b8 * 4) =
                     (pcVar84->field0_0x0).id;
                uVar123 = 0xffffffff;
                uVar106 = 0;
                auVar248 = auVar357._0_16_;
                uVar109 = (longlong)local_120 - 1;
                do {
                  lVar133 = *(longlong *)(local_158 + uVar106 * 8);
                  fVar208 = (pcVar84->field32_0xbc0).x - *(float *)(lVar133 + 0xbc0);
                  fVar171 = (pcVar84->field33_0xc00).y - *(float *)(lVar133 + 0xc00);
                  fVar208 = fVar171 * fVar171 + fVar208 * fVar208 + auVar309._0_4_;
                  if (fVar208 < auVar332._0_4_) {
                    uVar69 = *(uint *)((longlong)local_118 + uVar106 * 4);
                    (pcVar84->field44_0x1000).flags =
                         (pcVar84->field44_0x1000).flags & 0xffffffc0 |
                         (pcVar84->field44_0x1000).flags & ~(1 << (uVar69 & 0x1f)) & 0x3f;
                    *(uint *)(lVar133 + 0x1000) =
                         *(uint *)(lVar133 + 0x1000) & 0xffffffc0 |
                         *(uint *)(lVar133 + 0x1000) &
                         ~(1 << (uVar69 + ((int)(uVar69 + 3) / 6) * -6 + 3 & 0x1f)) & 0x3f;
                  }
                  if (fVar208 < auVar248._0_4_) {
                    uVar123 = uVar106 & 0xffffffff;
                  }
                  auVar248 = vminss_avx(ZEXT416((uint)fVar208),auVar248);
                  uVar106 = uVar106 + 1;
                } while ((local_188._0_8_ & 0xffffffff) != uVar106);
                if (-1 < (int)uVar123) {
                  auVar248._4_4_ = *(int *)((longlong)local_118 + uVar123 * 4);
                  lVar133 = *(longlong *)(local_158 + uVar123 * 8);
                  bVar95 = (byte)auVar248._4_4_;
                  bVar29 = bVar95 & 0x1f;
                  (pcVar84->field44_0x1000).flags =
                       (pcVar84->field44_0x1000).flags &
                       (-2 << bVar29 | 0xfffffffeU >> 0x20 - bVar29 | 0xffffffc0);
                  bVar29 = bVar95 + (char)((auVar248._4_4_ + 3) / 6) * -6 + 3 & 0x1f;
                  *(uint *)(lVar133 + 0x1000) =
                       *(uint *)(lVar133 + 0x1000) &
                       (-2 << bVar29 | 0xfffffffeU >> 0x20 - bVar29 | 0xffffffc0);
                }
              } while (1 < (longlong)local_120);
            }
          }
        }
LAB_1400c5960:
        uVar122._0_4_ = -1.0855514e-16;
        uVar122._4_4_ = 5.5357353e+09;
        lVar133 = (longlong)local_128 + 1;
      } while (lVar133 < w.bodies.n_elements);
    }
    pvVar73 = TlsGetValue(tls_index);
    auVar248 = auVar324._0_16_;
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      auVar248 = auVar324._0_16_;
      in_ZMM5 = ZEXT464(0) << 0x20;
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    auVar248 = vminss_avx(auVar248,ZEXT416(0x3f800000));
    if (sb == (body *)0x0) {
      in_ZMM2 = ZEXT464(0x3c23d70a);
      if ((char)local_228 != '\0') {
        in_ZMM2 = ZEXT464((uint)(auVar248._0_4_ * 0.01));
      }
      w.threat_level = w.threat_level * 0.99 + in_ZMM2._0_4_;
    }
    else {
      if (sb->is_safe == 0) {
        auVar198._4_4_ = auVar248._0_4_ * 0.01;
      }
      else {
        auVar198._4_4_ = 0.0;
      }
      if ((char)local_228 == '\0') {
        auVar198._4_4_ = 0.01;
      }
      in_ZMM2 = ZEXT464((uint)w.threat_level);
      w.threat_level = w.threat_level * 0.99 + auVar198._4_4_ + sb->damage;
    }
  }
  if ((local_f8->field0_0x0)._s_0.lane_index ==
      (int)(1 % (longlong)((local_f8->field0_0x0)._s_0.group)->n_lanes)) {
    begin_trace_stage("delete dead particles");
    auVar248 = in_ZMM2._0_16_;
    lVar133 = (longlong)w.n_particles;
    if (0 < lVar133) {
      lVar163 = lVar133 * 0x78;
      uVar109 = lVar133 + 1;
      do {
        uVar158 = w.field119_0x3dc0.particles;
        auVar248._4_4_ = *(int *)((longlong)w.field119_0x3dc0.particles + lVar163 + -0x50);
        *(int *)((longlong)w.field119_0x3dc0.particles + lVar163 + -0x50) = auVar248._4_4_ + 1;
        uVar19 = w.field119_0x3dc0.particles;
        if (*(int *)(uVar158 + lVar163 + -0x4c) <= auVar248._4_4_) {
          lVar133 = (longlong)w.n_particles + -1;
          w.n_particles = (int)lVar133;
          auVar244 = *(undefined1 (*) [32])(w.field119_0x3dc0.particles + lVar133);
          auVar27 = *(undefined1 (*) [32])&w.field119_0x3dc0.particles[lVar133].r;
          auVar28._0_16_ = *(undefined1 (*) [16])&w.field119_0x3dc0.particles[lVar133].color_initial
          ;
          auVar28._16_16_ = *(undefined1 (*) [16])&w.field119_0x3dc0.particles[lVar133].color_final;
          in_ZMM2 = ZEXT3264(auVar28);
          *(undefined1 (*) [32])((longlong)w.field119_0x3dc0.particles + lVar163 + -0x20) =
               *(undefined1 (*) [32])
                ((longlong)&w.field119_0x3dc0.particles[lVar133].color_final.field0_0x0 + 8);
          *(undefined1 (*) [32])(uVar19 + lVar163 + -0x38) = auVar28;
          *(undefined1 (*) [32])(uVar19 + lVar163 + -0x58) = auVar27;
          *(undefined1 (*) [32])((longlong)&((particle_t *)(uVar19 + -0x78))->type + lVar163) =
               auVar244;
        }
        auVar248 = in_ZMM2._0_16_;
        uVar109 = uVar109 - 1;
        lVar163 = lVar163 + -0x78;
      } while (1 < uVar109);
    }
    in_ZMM2 = ZEXT1664(auVar248);
    in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      in_ZMM5 = ZEXT464(0) << 0x20;
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  uVar69 = 0;
  if ((local_f8->field0_0x0)._s_0.lane_index ==
      (int)(2 % (longlong)((local_f8->field0_0x0)._s_0.group)->n_lanes)) {
    begin_trace_stage("delete dead acid particles");
    auVar248._4_4_ = w.n_acid_particles + 0xf >> 4;
    if (0 < auVar248._4_4_) {
      uVar96 = auVar248._4_4_ - 1;
      uVar123 = (ulonglong)(w.n_acid_particles + uVar96 * -0x10);
      lVar133 = (ulonglong)uVar96 * 0x3c0;
      uVar109 = (ulonglong)uVar96;
      do {
        uVar158 = w.field122_0x3de0.acid_particles;
        if (0 < (int)uVar123) {
          lVar163 = 0;
          do {
            auVar248._4_4_ =
                 *(int *)((longlong)((acid_particle_16 *)uVar158)->time + lVar163 + lVar133);
            *(int *)((longlong)((acid_particle_16 *)uVar158)->time + lVar163 + lVar133) =
                 auVar248._4_4_ + 1;
            if (299 < auVar248._4_4_) {
              w.n_acid_particles = w.n_acid_particles - 1;
              auVar248._4_4_ = w.n_acid_particles >> 4;
              uVar96 = w.n_acid_particles & 0xf;
              uVar106 = (ulonglong)(uVar96 * 4);
              *(undefined4 *)((longlong)((acid_particle_16 *)uVar158)->x + lVar163 + lVar133) =
                   *(undefined4 *)
                    ((longlong)w.field122_0x3de0.acid_particles[auVar248._4_4_].x + uVar106);
              *(undefined4 *)((longlong)((acid_particle_16 *)uVar158)->y + lVar163 + lVar133) =
                   *(undefined4 *)
                    ((longlong)w.field122_0x3de0.acid_particles[auVar248._4_4_].y + uVar106);
              *(undefined4 *)((longlong)((acid_particle_16 *)uVar158)->x_dot + lVar163 + lVar133) =
                   *(undefined4 *)
                    ((longlong)w.field122_0x3de0.acid_particles[auVar248._4_4_].x_dot + uVar106);
              *(undefined4 *)((longlong)((acid_particle_16 *)uVar158)->y_dot + lVar163 + lVar133) =
                   *(undefined4 *)
                    ((longlong)w.field122_0x3de0.acid_particles[auVar248._4_4_].y_dot + uVar106);
              *(undefined4 *)((longlong)((acid_particle_16 *)uVar158)->r + lVar163 + lVar133) =
                   *(undefined4 *)
                    ((longlong)w.field122_0x3de0.acid_particles[auVar248._4_4_].r + uVar106);
              *(undefined4 *)((longlong)((acid_particle_16 *)uVar158)->r_dot + lVar163 + lVar133) =
                   *(undefined4 *)
                    ((longlong)w.field122_0x3de0.acid_particles[auVar248._4_4_].r_dot + uVar106);
              uVar102 = w.field122_0x3de0.acid_particles + auVar248._4_4_;
              *(undefined4 *)((longlong)((acid_particle_16 *)uVar158)->time + lVar163 + lVar133) =
                   *(undefined4 *)(uVar106 + 0x180 + uVar102);
              uVar106 = (ulonglong)(uVar96 << 4);
              puVar11 = (undefined8 *)
                        ((longlong)
                         &w.field122_0x3de0.acid_particles[auVar248._4_4_].color_initial[0].
                          field0_0x0 + uVar106);
              uVar19 = puVar11[1];
              puVar15 = (undefined8 *)
                        ((longlong)&((acid_particle_16 *)uVar158)->color_initial[0].field0_0x0 +
                        lVar163 * 4 + lVar133);
              *puVar15 = *puVar11;
              puVar15[1] = uVar19;
              *(undefined1 (*) [16])
               ((longlong)&((acid_particle_16 *)uVar158)->color_final[0].field0_0x0 +
               lVar163 * 4 + lVar133) =
                   *(undefined1 (*) [16])
                    ((longlong)
                     &w.field122_0x3de0.acid_particles[auVar248._4_4_].color_final[0].field0_0x0 +
                    uVar106);
            }
            lVar163 = lVar163 + 4;
          } while (uVar123 << 2 != lVar163);
        }
        lVar133 = lVar133 + -0x3c0;
        uVar123 = 0x10;
        bVar170 = 0 < (longlong)uVar109;
        uVar109 = uVar109 - 1;
      } while (bVar170);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      in_ZMM5 = ZEXT464(0) << 0x20;
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("mutation pickups");
    local_1c8 = stalloc((longlong)(w.n_mutation_pickups * 0x10 + w.n_cell_pickups + 0x80) << 3);
    puVar1 = &local_f8->visual_seed;
    rVar159.x = 1.4013e-45;
    rVar159.y = 0.0;
    auVar198._4_4_ = 0.0;
    lVar133 = 0;
    auVar324 = ZEXT464(0x2f800000);
    do {
      ppVar56 = w.portals + lVar133;
      prVar153 = &ppVar56->x;
      uVar158 = &w.map;
      pwVar76 = wall_map((wall_t *)local_158,&w.map,(real_2)w.portals[lVar133].x.field0_0x0._s_0,
                         true);
      if ((float)local_158._0_4_ < 30.0) {
        fVar208 = (30.0 - (float)local_158._0_4_) * 0.001;
        w.portals[lVar133].x_dot.field0_0x0 =
             (real_2_u_0)
             (CONCAT44((int)((ulonglong)pwVar76 >> 0x20),
                       fVar208 * (float)local_158._4_4_ + w.portals[lVar133].x_dot.field0_0x0._s_0.x
                      ) |
             (ulonglong)
             (uint)(fVar208 * (float)local_158._8_4_ + w.portals[lVar133].x_dot.field0_0x0._s_0.y)
             << 0x20);
      }
      if (fStack_144 <= auVar198._4_4_) {
        rVar78 = w.portals[lVar133].x_dot.field0_0x0._s_0;
        fVar208 = (prVar153->field0_0x0)._s_0.x;
        fVar171 = w.portals[lVar133].x.field0_0x0._s_0.y;
      }
      else {
        fVar171 = w.portals[lVar133].x.field0_0x0._s_0.y;
        fVar208 = (prVar153->field0_0x0)._s_0.x;
        auVar327 = ZEXT464((uint)fVar208);
        fVar334 = (fVar171 - w.final_boss.x.field0_0x0._s_0.y) * 0.0001;
        auVar248 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),
                              ZEXT416((uint)(fVar334 * fVar334 + 1.0)));
        auVar357 = ZEXT464((uint)(auVar198._4_4_ + -0.02 / auVar248._0_4_));
        fVar334 = (fVar208 - w.final_boss.x.field0_0x0._s_0.x) + 7000.0;
        fVar208 = (fVar171 - w.final_boss.x.field0_0x0._s_0.y) + -70000.0;
        auVar332 = ZEXT464((uint)fVar208);
        auVar248 = vmaxss_avx(ZEXT416((uint)(fVar208 * fVar208 + auVar198._4_4_ + fVar334 * fVar334)
                                     ),ZEXT416(0x4bbebc20));
        auVar309 = ZEXT1664(auVar248);
        powf();
        fVar208 = auVar327._0_4_;
        fVar172 = auVar309._0_4_ * -100000.0;
        rVar78 = (real_2_u_0_s_0)
                 (CONCAT44(extraout_var_02,
                           auVar198._4_4_ + fVar334 * fVar172 +
                           w.portals[lVar133].x_dot.field0_0x0._s_0.x) |
                 (ulonglong)
                 (uint)(auVar357._0_4_ + auVar332._0_4_ * fVar172 +
                       w.portals[lVar133].x_dot.field0_0x0._s_0.y) << 0x20);
        w.portals[lVar133].x_dot.field0_0x0._s_0 = rVar78;
      }
      auVar248 = vinsertps_avx(ZEXT416((uint)(fVar208 + rVar78.x)),ZEXT416((uint)(rVar78.x * 0.9)),
                               0x10);
      auVar219 = vinsertps_avx(ZEXT416((uint)(fVar171 + rVar78.y)),ZEXT416((uint)(rVar78.y * 0.9)),
                               0x10);
      auVar248 = vunpcklps_avx(auVar248,auVar219);
      ppVar56->x = (real_2)auVar248._0_8_;
      ppVar56->x_dot = (real_2)auVar248._8_8_;
      auVar309 = ZEXT464(0x3f7cac08);
      cVar156 = rVar159.x._0_1_;
      if (cVar156 == '\0') {
        auVar309 = ZEXT464(0x3d1fbe77);
        fVar208 = 0.28;
        auVar327 = ZEXT464(0x3f3d70a4);
      }
      else {
        fVar208 = 0.568;
        auVar327 = ZEXT464(0x3d8d4fdf);
      }
      if (w.portals_enabled != 0) {
        auVar248._4_4_ = 4;
        do {
          uVar69 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
          uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
          uVar69 = uVar69 >> 0x10 ^ uVar69;
          *puVar1 = uVar69;
          fVar171 = auVar324._0_4_ * (float)uVar69 * 6.2831855;
          auVar336 = ZEXT464((uint)fVar171);
          auVar357 = ZEXT464((uint)fVar171);
          cosf();
          auVar332 = ZEXT1664(auVar357._0_16_);
          auVar357 = ZEXT1664(auVar336._0_16_);
          sinf();
          auVar336 = ZEXT1664(auVar357._0_16_);
          fVar171 = auVar332._0_4_ * 30.0 + (prVar153->field0_0x0)._s_0.x;
          auVar357 = ZEXT464((uint)(auVar357._0_4_ * 30.0 + w.portals[lVar133].x.field0_0x0._s_0.y))
          ;
          uVar96 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
          uVar96 = uVar96 >> 0xf ^ uVar96;
          uVar69 = uVar96 * -0x7b935975;
          auVar346 = ZEXT464((uint)(auVar324._0_4_ * (float)(uVar69 >> 0x10 ^ uVar69) * 0.1));
          uVar96 = uVar96 * -0x63d2f291;
          uVar69 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          uVar69 = uVar69 >> 0x10 ^ uVar69;
          uVar109 = (ulonglong)uVar69;
          *puVar1 = uVar69;
          fVar334 = auVar324._0_4_ * (float)uVar109;
          if ((fVar334 != auVar198._4_4_) || (NAN(fVar334) || NAN(auVar198._4_4_))) {
            uVar123 = 0;
            if ((fVar334 != 1.0) || (NAN(fVar334))) {
              dVar176 = (double)(fVar334 / (1.0 - fVar334));
              log();
              uVar123 = (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006);
              uVar109 = (ulonglong)*puVar1;
            }
          }
          else {
            uVar123 = 0;
          }
          fVar245 = auVar336._0_4_;
          fVar333 = auVar346._0_4_;
          fVar172 = auVar332._0_4_;
          uVar96 = auVar357._0_4_;
          uVar69 = ((uint)(uVar109 >> 0x10) ^ (uint)uVar109) * 0x7feb352d;
          uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
          uVar69 = uVar69 >> 0x10 ^ uVar69;
          *puVar1 = uVar69;
          fVar334 = auVar324._0_4_ * (float)uVar69;
          if (((fVar334 != auVar198._4_4_) || (NAN(fVar334) || NAN(auVar198._4_4_))) &&
             ((fVar334 != 1.0 || (NAN(fVar334))))) {
            dVar176 = (double)(fVar334 / (1.0 - fVar334));
            log();
            fVar245 = auVar336._0_4_;
            fVar333 = auVar346._0_4_;
            fVar172 = auVar332._0_4_;
            uVar96 = auVar357._0_4_;
            uVar123 = uVar123 | (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006) << 0x20;
          }
          uVar102 = CONCAT44(SUB84(uVar102,4),fVar171) | (ulonglong)uVar96 << 0x20;
          uVar122 = (ulonglong)
                    (uint)(((float)uVar123 * 0.05 + w.portals[lVar133].x_dot.field0_0x0._s_0.x) -
                          fVar333 * fVar172) |
                    CONCAT44(uVar96,((float)(uVar123 >> 0x20) * 0.05 +
                                    w.portals[lVar133].x_dot.field0_0x0._s_0.y) - fVar245 * fVar333)
                    << 0x20;
          pvVar73 = TlsGetValue(tls_index);
          if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
            lVar163 = (longlong)w.max_particles;
            iVar70 = w.n_particles;
            if (w.max_particles <= w.n_particles) {
              w.max_particles = w.max_particles * 2;
              uVar158 = lVar163 * 0xf0;
              bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,uVar158);
              iVar70 = w.n_particles;
              if (!bVar170) goto LAB_1400c6b25;
            }
            uVar19 = w.field119_0x3dc0.particles;
            w.n_particles = iVar70 + 1;
            w.field119_0x3dc0.particles[iVar70].type = 0xc;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->x).field0_0x0._s_0 =
                 (real_2_u_0_s_0)uVar102;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->x_dot).field0_0x0._s_0 =
                 (real_2_u_0_s_0)uVar122;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0 =
                 (real_2_u_0)0x0;
            ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->target = 0;
            uVar158 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
            ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->r = (float)(int)uVar158;
            ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->r_dot =
                 (float)(int)((ulonglong)uVar158 >> 0x20);
            uVar158 = (mutation_pickup *)0x7800000000;
            ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->time = 0;
            ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->duration = 0x78;
            fVar171 = auVar309._0_4_;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color).field0_0x0._s_0.x = fVar171;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color).field0_0x0._s_0.y = fVar208;
            fVar334 = auVar327._0_4_;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color).field0_0x0._s_0.z = fVar334;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color).field0_0x0._s_0.w = 1.0;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_initial).field0_0x0._s_0.x =
                 fVar171;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_initial).field0_0x0._s_0.y =
                 fVar208;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_initial).field0_0x0._s_0.z =
                 fVar334;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_initial).field0_0x0._s_0.w =
                 1.0;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_final).field0_0x0._s_0.x =
                 fVar171;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_final).field0_0x0._s_0.y =
                 fVar208;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_final).field0_0x0._s_0.z =
                 fVar334;
            puVar11 = (undefined8 *)
                      ((longlong)
                       &(((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->emission).field0_0x0.xy
                        .field0_0x0 + 5);
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11 = (undefined8 *)
                      ((longlong)
                       &(((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_final).field0_0x0
                      + 0xc);
            *puVar11 = 0;
            puVar11[1] = 0;
            (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0._s_0 =
                 (real_2_u_0_s_0)uVar102;
          }
          else {
            uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                     *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
            uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
            uVar96 = uVar96 >> 0x10 ^ uVar96;
            uVar69 = (uint)(auVar324._0_4_ * (float)uVar96 * (float)w.n_particles);
            if ((int)(w.n_particles - 1U) < (int)uVar69) {
              uVar69 = w.n_particles - 1U;
            }
            *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
            uVar158 = (mutation_pickup *)(ulonglong)uVar69;
            if ((int)uVar69 < 1) {
              uVar158 = (mutation_pickup *)0x0;
            }
            if (w.field119_0x3dc0.particles[uVar158].affects_gameplay == false) {
              ppVar79 = w.field119_0x3dc0.particles + uVar158;
              ppVar79->type = 0xc;
              (ppVar79->x).field0_0x0._s_0 = (real_2_u_0_s_0)uVar102;
              (ppVar79->x_dot).field0_0x0._s_0 = (real_2_u_0_s_0)uVar122;
              (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
              ppVar79->target = 0;
              uVar19 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
              ppVar79->r = (float)(int)uVar19;
              ppVar79->r_dot = (float)(int)((ulonglong)uVar19 >> 0x20);
              ppVar79->time = 0;
              ppVar79->duration = 0x78;
              fVar171 = auVar309._0_4_;
              (ppVar79->color).field0_0x0._s_0.x = fVar171;
              (ppVar79->color).field0_0x0._s_0.y = fVar208;
              fVar334 = auVar327._0_4_;
              (ppVar79->color).field0_0x0._s_0.z = fVar334;
              (ppVar79->color).field0_0x0._s_0.w = 1.0;
              (ppVar79->color_initial).field0_0x0._s_0.x = fVar171;
              (ppVar79->color_initial).field0_0x0._s_0.y = fVar208;
              (ppVar79->color_initial).field0_0x0._s_0.z = fVar334;
              (ppVar79->color_initial).field0_0x0._s_0.w = 1.0;
              (ppVar79->color_final).field0_0x0._s_0.x = fVar171;
              (ppVar79->color_final).field0_0x0._s_0.y = fVar208;
              (ppVar79->color_final).field0_0x0._s_0.z = fVar334;
              *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0.xy.field0_0x0 + 5) = 0;
              *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
              *(undefined8 *)((longlong)&(ppVar79->color_final).field0_0x0 + 0xc) = 0;
              *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0.xy.field0_0x0 + 4) = 0;
            }
          }
LAB_1400c6b25:
          auVar248._4_4_ = auVar248._4_4_ + -1;
        } while (auVar248._4_4_ != 0);
      }
      auVar219 = auVar324._0_16_;
      auVar248 = in_ZMM5._0_16_;
      lVar133 = 1;
      uVar69 = 0;
      rVar159.x = 0.0;
      rVar159.y = 0.0;
      auVar309 = ZEXT464(0x40c90fdb);
    } while (cVar156 != '\0');
    w.tooltip_active = false;
    if (0 < (longlong)w.n_mutation_pickups) {
      auVar327 = ZEXT1264(ZEXT812(0));
      auVar336 = ZEXT464(0x3f800000);
      auVar332 = ZEXT464(0x3c23d70a);
      auVar357 = ZEXT464(0x3ca3d70a);
      uVar69 = 0;
      lVar133 = (longlong)w.n_mutation_pickups;
      do {
        uVar102 = w.field113_0x3d80.mutation_pickups;
        lVar110 = lVar133 + -1;
        auVar198._4_4_ = w.field113_0x3d80.mutation_pickups[lVar110].x_dot.field0_0x0._s_0.x;
        fVar208 = w.field113_0x3d80.mutation_pickups[lVar110].x_dot.field0_0x0._s_0.y;
        fVar171 = auVar198._4_4_ + w.field113_0x3d80.mutation_pickups[lVar110].x.field0_0x0._s_0.x;
        fVar334 = fVar208 + w.field113_0x3d80.mutation_pickups[lVar110].x.field0_0x0._s_0.y;
        auVar248 = vinsertps_avx(ZEXT416((uint)fVar171),ZEXT416((uint)(auVar198._4_4_ * 0.95)),0x10)
        ;
        auVar219 = vinsertps_avx(ZEXT416((uint)fVar334),ZEXT416((uint)(fVar208 * 0.95)),0x10);
        auVar248 = vunpcklps_avx(auVar248,auVar219);
        pmVar111 = w.field113_0x3d80.mutation_pickups + lVar110;
        pmVar111->x = (real_2)auVar248._0_8_;
        pmVar111->x_dot = (real_2)auVar248._8_8_;
        fVar171 = (local_198->cursor_x).field0_0x0._s_0.x - fVar171;
        fVar334 = (local_198->cursor_x).field0_0x0._s_0.y - fVar334;
        auVar198._4_4_ = fVar334 * fVar334 + auVar327._0_4_ + fVar171 * fVar171;
        lVar163 = lVar110;
        if (auVar198._4_4_ <= 1e-06) {
          pmVar111 = (mutation_pickup *)0x0;
          rVar138._s_0.y = 0.0;
          rVar138._s_0.x = (float)((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected;
          if (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected != 0) goto LAB_1400c7011;
LAB_1400c701f:
          ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->alpha = 1.0;
LAB_1400c702a:
          uVar109 = (ulonglong)(uint)((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->n_nodes;
          uVar158 = pmVar111;
          if (0 < ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->n_nodes) {
            local_188._0_8_ = lVar133;
            local_1b8.x = SUB84(pmVar111,0);
            uVar158 = (mutation_pickup *)0x0;
            local_168._0_4_ = (int)((ulonglong)pmVar111 >> 0x20);
            uVar123 = 0;
            do {
              auVar198._4_4_ = rVar138._s_0.y;
              ppVar164 = ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->nodes + uVar123;
              auVar248._4_4_ = ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected;
              if (auVar248._4_4_ == 0) {
LAB_1400c70f7:
                auVar219 = ZEXT416((uint)((auVar309._0_4_ * (float)uVar123) / (float)(int)uVar109));
                fVar208 = (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x).field0_0x0._s_0.y;
                auVar309 = ZEXT1664(auVar219);
                in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
                auVar350 = ZEXT1664(auVar219);
                auVar327 = ZEXT1664(auVar327._0_16_);
                auVar353 = ZEXT464((uint)(((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x).
                                         field0_0x0._s_0.x);
                auVar357 = ZEXT1664(auVar357._0_16_);
                auVar324 = ZEXT1664(auVar324._0_16_);
                auVar332 = ZEXT1664(auVar332._0_16_);
                auVar336 = ZEXT1664(auVar336._0_16_);
                sinf();
                auVar346 = ZEXT1664(auVar309._0_16_);
                auVar309 = ZEXT1664(auVar350._0_16_);
                cosf();
                fVar171 = (auVar309._0_4_ * (float)local_168._0_4_ +
                          (0.0 - auVar346._0_4_ * local_1b8.x)) * 3.0 + 30.0;
                if (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected != 0) {
                  fVar171 = 0.0;
                }
                if (auVar248._4_4_ == 0) {
                  fVar245 = auVar309._0_4_ * fVar171 * 0.4;
                  fVar334 = (ppVar164->x_rel).field0_0x0._s_0.x;
                  fVar172 = (ppVar164->x_rel).field0_0x0._s_0.y;
                  in_ZMM5 = ZEXT1664(CONCAT412(auVar346._12_4_ ^ 0x80000000,
                                               CONCAT48(auVar346._8_4_ ^ 0x80000000,
                                                        auVar346._0_8_ ^ 0x8000000080000000)));
                  fVar171 = fVar171 * -auVar346._0_4_ * 0.4;
                }
                else {
                  fVar334 = (ppVar164->x_rel).field0_0x0._s_0.x;
                  fVar172 = (ppVar164->x_rel).field0_0x0._s_0.y;
                  fVar245 = 0.0;
                  fVar171 = 0.0;
                }
                fVar171 = fVar334 * 0.6 + fVar171;
                fVar245 = fVar172 * 0.6 + fVar245;
                rVar78 = (real_2_u_0_s_0)
                         (CONCAT44(extraout_var_03,fVar171) | (ulonglong)(uint)fVar245 << 0x20);
                (ppVar164->x_rel).field0_0x0._s_0 = rVar78;
                fVar333 = auVar353._0_4_;
                fVar171 = fVar333 + fVar171;
                fVar334 = fVar208 + fVar245;
                fVar172 = (w.camera_pos.field0_0x0._s_0.y - fVar334) *
                          (w.camera_pos.field0_0x0._s_0.y - fVar334) +
                          (w.camera_pos.field0_0x0._s_0.x - fVar171) *
                          (w.camera_pos.field0_0x0._s_0.x - fVar171) + 0.0;
                if (fVar172 < 1e+06) {
                  lVar133 = (longlong)(int)uVar69;
                  uVar69 = uVar69 + 1;
                  *(ulonglong *)(local_1c8 + lVar133 * 8) =
                       CONCAT44(fVar245,fVar334) << 0x20 | CONCAT44(rVar78.y,fVar171);
                }
                fVar245 = ppVar164->r;
                if (1e+06 <= fVar172) {
                  fVar172 = 16.0;
                }
                else {
                  fVar171 = (local_198->cursor_x).field0_0x0._s_0.x - fVar171;
                  fVar334 = (local_198->cursor_x).field0_0x0._s_0.y - fVar334;
                  fVar172 = 16.0;
                  if (fVar334 * fVar334 + auVar327._0_4_ + fVar171 * fVar171 < fVar245 * fVar245) {
                    if (auVar248._4_4_ == 0) {
                      uVar131 = settings.field3_0xc.keybinds.interact + 7;
                      if (-1 < settings.field3_0xc.keybinds.interact) {
                        uVar131 = settings.field3_0xc.keybinds.interact;
                      }
                      if (((local_198->pressed_buttons[(int)uVar131 >> 3] >>
                            (settings.field3_0xc.keybinds.interact & 7U) & 1) != 0) ||
                         ((((local_198->gamepad).buttons & 0x4000) != 0 &&
                          ((local_198->gamepad_prev_buttons & 0x4000) == 0)))) {
                        ppVar164->is_selected = true;
                        ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected =
                             (int)uVar123 + 1;
                        ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->pending_imbues =
                             mutations_list[ppVar164->mutation_index].n_imbues;
                        ppVar164->r_dot = ppVar164->r_dot + 0.5;
                        local_198->click_blocked = true;
                      }
                    }
                    w.tooltip.last_hovered_index = ppVar164->mutation_index;
                    w.tooltip.last_hovered_type = 1;
                    w.tooltip_pickup_x.field0_0x0._s_0.y =
                         fVar208 + (ppVar164->x_rel).field0_0x0._s_0.y;
                    w.tooltip_pickup_x.field0_0x0._s_0.x =
                         fVar333 + (ppVar164->x_rel).field0_0x0._s_0.x;
                    w.tooltip_active = true;
                    fVar245 = ppVar164->r;
                    fVar172 = 19.2;
                  }
                }
                fVar245 = ppVar164->r_dot + fVar245;
                ppVar164->r = fVar245;
                ppVar164->r_dot = (auVar332._0_4_ * (fVar172 - fVar245) + ppVar164->r_dot) * 0.9;
                rVar138 = (real_2_u_0)
                          (CONCAT44(auVar198._4_4_,fVar333 + (ppVar164->x_rel).field0_0x0._s_0.x) |
                          (ulonglong)(uint)(fVar208 + (ppVar164->x_rel).field0_0x0._s_0.y) << 0x20);
                uVar158 = &w.map;
                pwVar76 = wall_map((wall_t *)local_158,&w.map,(real_2)rVar138._s_0,true);
                if ((float)local_158._0_4_ < ppVar164->r) {
                  auVar198._4_4_ = (ppVar164->r - (float)local_158._0_4_) * 0.001;
                  (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x_dot).field0_0x0 =
                       (real_2_u_0)
                       (CONCAT44((int)((ulonglong)pwVar76 >> 0x20),
                                 auVar198._4_4_ * (float)local_158._4_4_ +
                                 (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x_dot).
                                 field0_0x0._s_0.x) |
                       (ulonglong)
                       (uint)(auVar198._4_4_ * (float)local_158._8_4_ +
                             (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x_dot).field0_0x0.
                             _s_0.y) << 0x20);
                }
                ppVar164->alpha = 1.0;
                auVar309 = ZEXT464(0x40c90fdb);
                if ((auVar248._4_4_ == 0) || (ppVar164->is_selected == true)) {
LAB_1400c748d:
                  if (auVar332._0_4_ < ppVar164->alpha) {
                    auVar248._4_4_ = 4;
                    local_21c = uVar69;
                    do {
                      uVar69 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
                      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                      uVar69 = uVar69 >> 0x10 ^ uVar69;
                      *puVar1 = uVar69;
                      auVar219 = ZEXT416((uint)(auVar309._0_4_ * auVar324._0_4_ * (float)uVar69));
                      auVar332 = ZEXT1664(auVar219);
                      in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
                      auVar350 = ZEXT1664(auVar219);
                      auVar327 = ZEXT1664(auVar327._0_16_);
                      auVar357 = ZEXT1664(auVar357._0_16_);
                      auVar324 = ZEXT1664(auVar324._0_16_);
                      auVar336 = ZEXT1664(auVar336._0_16_);
                      auVar309 = ZEXT1664(auVar309._0_16_);
                      cosf();
                      auVar346 = ZEXT1664(auVar332._0_16_);
                      auVar332 = ZEXT1664(auVar350._0_16_);
                      sinf();
                      auVar332 = ZEXT1664(auVar332._0_16_);
                      auVar198._4_4_ =
                           (ppVar164->x_rel).field0_0x0._s_0.x +
                           (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x).field0_0x0._s_0.x;
                      auVar350 = ZEXT464((uint)((ppVar164->x_rel).field0_0x0._s_0.y +
                                               (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x)
                                               .field0_0x0._s_0.y));
                      auVar353 = ZEXT464((uint)ppVar164->r);
                      uVar69 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
                      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                      uVar69 = uVar69 >> 0x10 ^ uVar69;
                      uVar109 = (ulonglong)uVar69;
                      *puVar1 = uVar69;
                      fVar208 = auVar324._0_4_ * (float)uVar109;
                      if ((fVar208 != auVar327._0_4_) || (NAN(fVar208) || NAN(auVar327._0_4_))) {
                        fVar171 = auVar336._0_4_;
                        uVar106 = 0;
                        if ((fVar208 != fVar171) || (NAN(fVar208) || NAN(fVar171))) {
                          dVar176 = (double)(fVar208 / (fVar171 - fVar208));
                          log();
                          uVar106 = (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006);
                          uVar109 = (ulonglong)*puVar1;
                        }
                      }
                      else {
                        uVar106 = 0;
                      }
                      fVar208 = auVar350._0_4_;
                      fVar172 = auVar332._0_4_;
                      fVar245 = auVar353._0_4_;
                      fVar334 = auVar346._0_4_;
                      uVar69 = ((uint)(uVar109 >> 0x10) ^ (uint)uVar109) * 0x7feb352d;
                      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                      uVar69 = uVar69 >> 0x10 ^ uVar69;
                      *puVar1 = uVar69;
                      fVar171 = auVar324._0_4_ * (float)uVar69;
                      if ((fVar171 != auVar327._0_4_) || (NAN(fVar171) || NAN(auVar327._0_4_))) {
                        fVar333 = auVar336._0_4_;
                        if ((fVar171 != fVar333) || (NAN(fVar171) || NAN(fVar333))) {
                          dVar176 = (double)(fVar171 / (fVar333 - fVar171));
                          log();
                          fVar208 = auVar350._0_4_;
                          fVar172 = auVar332._0_4_;
                          fVar245 = auVar353._0_4_;
                          fVar334 = auVar346._0_4_;
                          uVar106 = uVar106 | (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006)
                                              << 0x20;
                        }
                      }
                      fVar208 = fVar208 + fVar245 * fVar172;
                      uVar122 = CONCAT44(SUB84(uVar122,4),auVar198._4_4_ + fVar245 * fVar334) |
                                (ulonglong)(uint)fVar208 << 0x20;
                      rVar124 = (real_2_u_0)
                                ((ulonglong)(uint)(auVar357._0_4_ * (float)uVar106) |
                                CONCAT44(fVar208,auVar357._0_4_ * (float)(uVar106 >> 0x20)) << 0x20)
                      ;
                      pvVar73 = TlsGetValue(tls_index);
                      if ((settings.limit_particles == 0) ||
                         ((uint)w.n_particles < settings.max_particles)) {
                        lVar133 = (longlong)w.max_particles;
                        iVar70 = w.n_particles;
                        if (w.max_particles <= w.n_particles) {
                          w.max_particles = w.max_particles * 2;
                          uVar158 = lVar133 * 0xf0;
                          bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,uVar158);
                          iVar70 = w.n_particles;
                          if (!bVar170) goto LAB_1400c7545;
                        }
                        uVar19 = w.field119_0x3dc0.particles;
                        w.n_particles = iVar70 + 1;
                        w.field119_0x3dc0.particles[iVar70].type = 0xc;
                        (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->x).field0_0x0._s_0 =
                             (real_2_u_0_s_0)uVar122;
                        (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->x_dot).field0_0x0 =
                             rVar124;
                        (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0 =
                             (real_2_u_0)0x0;
                        ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->target = 0;
                        uVar158 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
                        ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->r = (float)(int)uVar158;
                        ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->r_dot =
                             (float)(int)((ulonglong)uVar158 >> 0x20);
                        ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->time = 0;
                        ((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->duration = 0x78;
                        (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color).field0_0x0.xy.
                        field0_0x0 = (real_2_u_0)0x4000000040000000;
                        *(undefined8 *)
                         ((longlong)
                          &(((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color).field0_0x0.
                           _s_2.yz.field0_0x0 + 4) = 0x3f80000040000000;
                        (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_initial).
                        field0_0x0.xy.field0_0x0 = (real_2_u_0)0x4000000040000000;
                        *(undefined8 *)
                         ((longlong)
                          &(((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_initial).
                           field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3f80000040000000;
                        (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_final).field0_0x0
                        .xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                        *(undefined8 *)
                         ((longlong)
                          &(((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->color_final).
                           field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3f800000;
                        (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->emission).field0_0x0 =
                             (real_4_u_0)(ZEXT816(0) << 0x20);
                        *(undefined8 *)
                         ((longlong)
                          &(((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->emission).field0_0x0
                         + 0xd) = 0;
                        uVar158 = (mutation_pickup *)0x0;
                        (((particle_t *)(uVar19 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0.
                        _s_0 = (real_2_u_0_s_0)uVar122;
                      }
                      else {
                        uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                                 *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
                        uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                        rVar138._s_0.x = (float)(uVar69 >> 0x10 ^ uVar69);
                        rVar138._s_0.y = 0.0;
                        uVar69 = (uint)(auVar324._0_4_ * (float)(longlong)rVar138 *
                                       (float)w.n_particles);
                        if ((int)(w.n_particles - 1U) < (int)uVar69) {
                          uVar69 = w.n_particles - 1U;
                        }
                        uVar158 = ZEXT48(uVar69);
                        *(undefined4 *)((longlong)pvVar73 + 0x6c) = rVar138._s_0.x;
                        if ((int)uVar69 < 1) {
                          uVar158 = (mutation_pickup *)0x0;
                        }
                        if (w.field119_0x3dc0.particles[uVar158].affects_gameplay == false) {
                          ppVar79 = w.field119_0x3dc0.particles + uVar158;
                          ppVar79->type = 0xc;
                          (ppVar79->x).field0_0x0._s_0 = (real_2_u_0_s_0)uVar122;
                          (ppVar79->x_dot).field0_0x0 = rVar124;
                          (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                          ppVar79->target = 0;
                          uVar19 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
                          ppVar79->r = (float)(int)uVar19;
                          ppVar79->r_dot = (float)(int)((ulonglong)uVar19 >> 0x20);
                          ppVar79->time = 0;
                          ppVar79->duration = 0x78;
                          (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x4000000040000000
                          ;
                          *(undefined8 *)
                           ((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
                               0x3f80000040000000;
                          (ppVar79->color_initial).field0_0x0.xy.field0_0x0 =
                               (real_2_u_0)0x4000000040000000;
                          *(undefined8 *)
                           ((longlong)&(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
                               0x3f80000040000000;
                          (ppVar79->color_final).field0_0x0.xy.field0_0x0 =
                               (real_2_u_0)0x3f8000003f800000;
                          *(undefined8 *)
                           ((longlong)&(ppVar79->color_final).field0_0x0._s_2.yz.field0_0x0 + 4) =
                               0x3f800000;
                          (ppVar79->emission).field0_0x0 = (real_4_u_0)(ZEXT816(0) << 0x20);
                          *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
                        }
                      }
LAB_1400c7545:
                      auVar248._4_4_ = auVar248._4_4_ + -1;
                    } while (auVar248._4_4_ != 0);
                    auVar332 = ZEXT464(0x3c23d70a);
                    uVar69 = local_21c;
                  }
                }
              }
              else {
                if (ppVar164->is_selected == true) {
                  if (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->pending_imbues != 0)
                  goto LAB_1400c70f7;
                  uVar17 = ppVar164->r_dot;
                  uVar20 = ppVar164->alpha;
                  auVar184._0_4_ = (float)uVar17 * 0.99;
                  auVar184._4_4_ = (float)uVar20 * 0.9;
                  auVar184._8_8_ = 0;
                  ppVar164->r = auVar184._0_4_ + ppVar164->r;
                  uVar19 = vmovlps_avx(auVar184);
                  ppVar164->r_dot = (float)(int)uVar19;
                  ppVar164->alpha = (float)(int)((ulonglong)uVar19 >> 0x20);
                  goto LAB_1400c748d;
                }
                ppVar164->r = ppVar164->r * 0.8;
                ppVar164->alpha = ppVar164->alpha * 0.9;
              }
              uVar123 = uVar123 + 1;
              uVar109 = (ulonglong)((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->n_nodes;
            } while ((longlong)uVar123 < (longlong)uVar109);
            rVar138._s_0.y = 0.0;
            rVar138._s_0.x = (float)((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected;
            lVar163 = local_188._0_8_ + -1;
            lVar133 = local_188._0_8_;
          }
          pqVar63 = ac.queued_sounds;
          auVar178 = auVar309._0_16_;
          auVar362 = auVar336._0_16_;
          auVar258 = auVar332._0_16_;
          auVar198 = auVar324._0_16_;
          auVar317 = auVar357._0_16_;
          auVar219 = auVar327._0_16_;
          auVar248 = in_ZMM5._0_16_;
          if (rVar138._s_0.x != 0.0) {
            if (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->pending_imbues == 0) {
              if (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->did_spawn == false) {
                local_2b0 = 0;
                local_2b8 = 0;
                if ((((ac.initialized == true) && (0 < sounds.levelup.n_samples)) &&
                    (sounds.levelup.data != (short *)0x0)) &&
                   (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
                  uVar96 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
                  ac.queued_sounds[(int)uVar96].sound = (sound_t *)0x1401eb1b0;
                  pqVar63[(int)uVar96].params.volume = 1.0;
                  pqVar63[(int)uVar96].params.delay = 0.0;
                  pqVar63[(int)uVar96].params.pitch_shift = 0.0;
                  pqVar63[(int)uVar96].params.lowpass_dist = 0.0;
                  auVar185._0_12_ = ZEXT812(0);
                  auVar185._12_4_ = 0;
                  *(undefined1 (*) [16])&pqVar63[(int)uVar96].params.type = auVar185;
                  pqVar63[(int)uVar96].kill = false;
                  LOCK();
                  ac.last_queued_sound = ac.last_queued_sound + 1;
                  UNLOCK();
                }
                if (((0 < w.selected_body) &&
                    (uVar96 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
                    w.bodies.field0_0x0.index_table[uVar96].id == w.selected_body)) &&
                   ((w.bodies.field3_0x20.elements != (body *)0x0 &&
                    (w.bodies.field3_0x20.elements[w.bodies.field0_0x0.index_table[uVar96].index].
                     parent_id == 0)))) {
                  auVar324 = ZEXT1664(auVar248);
                  auVar309 = ZEXT1664(auVar219);
                  auVar327 = ZEXT1664(auVar317);
                  auVar357 = ZEXT1664(auVar198);
                  auVar332 = ZEXT1664(auVar258);
                  auVar336 = ZEXT1664(auVar362);
                  auVar346 = ZEXT1664(auVar178);
                  give_mutation(w.bodies.field3_0x20.elements +
                                w.bodies.field0_0x0.index_table[uVar96].index,
                                ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->nodes
                                [(longlong)
                                 ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected + -1].
                                mutation_index,
                                ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->imbues,
                                ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->n_imbues,false);
                  auVar178 = auVar346._0_16_;
                  auVar362 = auVar336._0_16_;
                  auVar258 = auVar332._0_16_;
                  auVar198 = auVar357._0_16_;
                  auVar317 = auVar327._0_16_;
                  auVar219 = auVar309._0_16_;
                  auVar248 = auVar324._0_16_;
                }
                uVar158 = (mutation_pickup *)0x0;
                in_ZMM5 = ZEXT1664(auVar248);
                auVar327 = ZEXT1664(auVar219);
                auVar357 = ZEXT1664(auVar317);
                auVar324 = ZEXT1664(auVar198);
                auVar332 = ZEXT1664(auVar258);
                auVar336 = ZEXT1664(auVar362);
                auVar309 = ZEXT1664(auVar178);
                spawn_mutation_cells
                          ((real_2)(((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x).field0_0x0.
                                   _s_0,
                           ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->nodes
                           [(longlong)((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected +
                            -1].mutation_index);
                ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->nodes
                [(longlong)((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected + -1].r_dot =
                     ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->nodes
                     [(longlong)((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected + -1].
                     r_dot + 0.5;
                ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->did_spawn = true;
              }
            }
            else {
              auVar324 = ZEXT1664(ZEXT416((uint)((float)w.frame_number * 0.1)));
              auVar327 = ZEXT1664(auVar248);
              auVar309 = ZEXT1664(ZEXT416((uint)((float)w.frame_number * 0.1)));
              auVar336 = ZEXT1664(auVar219);
              auVar346 = ZEXT1664(auVar317);
              auVar350 = ZEXT1664(auVar198);
              auVar353 = ZEXT1664(auVar362);
              auVar363 = ZEXT1664(auVar178);
              cosf();
              auVar357 = ZEXT1664(auVar324._0_16_);
              auVar324 = ZEXT464((uint)(auVar309._0_4_ + 4.1887903));
              cosf();
              auVar332 = ZEXT1664(auVar324._0_16_);
              auVar324 = ZEXT464((uint)(auVar309._0_4_ + 2.0943952));
              cosf();
              local_168 = auVar332._0_16_;
              auVar248 = vinsertps_avx(auVar357._0_16_,local_168,0x10);
              local_188 = auVar324._0_16_;
              auVar248 = vinsertps_avx(auVar248,local_188,0x20);
              auVar214._8_4_ = 0x80000000;
              auVar214._0_8_ = 0x8000000080000000;
              auVar214._12_4_ = 0x80000000;
              auVar248 = vblendps_avx(auVar248,auVar214,8);
              uVar96 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
              uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
              uVar96 = uVar96 >> 0x10 ^ uVar96;
              local_1b8.x = auVar248._0_4_ + 1.0;
              local_1b8.y = auVar248._4_4_ + 1.0;
              fStack_1b0 = auVar248._8_4_ + 1.0;
              fStack_1ac = auVar248._12_4_ + 0.5;
              uStack_1a8 = 0;
              uStack_1a4 = 0;
              uStack_1a0 = 0;
              uStack_19c = 0x3f000000;
              *puVar1 = uVar96;
              auVar248 = ZEXT416((uint)(auVar363._0_4_ * auVar350._0_4_ * (float)uVar96));
              auVar309 = ZEXT1664(auVar248);
              in_ZMM5 = ZEXT1664(auVar327._0_16_);
              auVar332 = ZEXT1664(auVar248);
              auVar327 = ZEXT1664(auVar336._0_16_);
              auVar357 = ZEXT1664(auVar346._0_16_);
              auVar324 = ZEXT1664(auVar350._0_16_);
              auVar336 = ZEXT1664(auVar353._0_16_);
              cosf();
              auVar346 = ZEXT1664(auVar309._0_16_);
              auVar309 = ZEXT1664(auVar332._0_16_);
              sinf();
              auVar350 = ZEXT1664(auVar309._0_16_);
              auVar332 = ZEXT464((uint)(auVar346._0_4_ * 50.0 +
                                       (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x).
                                       field0_0x0._s_0.x));
              auVar353 = ZEXT464((uint)(auVar309._0_4_ * 50.0 +
                                       (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x).
                                       field0_0x0._s_0.y));
              auVar363 = ZEXT464((uint)(auVar346._0_4_ * 0.12));
              auVar198._4_4_ = auVar309._0_4_ * 0.12;
              rVar77 = rand_normal_2(puVar1);
              auVar248 = vinsertps_avx(auVar332._0_16_,
                                       ZEXT416((uint)(auVar357._0_4_ * rVar77.field0_0x0._0_4_ -
                                                     auVar363._0_4_)),0x10);
              auVar219 = vinsertps_avx(auVar353._0_16_,
                                       ZEXT416((uint)(auVar357._0_4_ * rVar77.field0_0x0._4_4_ -
                                                     auVar198._4_4_)),0x10);
              auVar248 = vunpcklps_avx(auVar248,auVar219);
              auVar353 = ZEXT1664(auVar248);
              pvVar73 = TlsGetValue(tls_index);
              fVar208 = auVar350._0_4_;
              auVar198._4_4_ = auVar346._0_4_;
              auVar219 = auVar353._0_16_;
              if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles))
              {
                lVar137 = (longlong)w.max_particles;
                auVar309 = ZEXT464(0x40c90fdb);
                auVar332 = ZEXT464(0x3c23d70a);
                auVar248._4_4_ = w.n_particles;
                if (w.max_particles <= w.n_particles) {
                  w.max_particles = w.max_particles * 2;
                  uVar158 = lVar137 * 0xf0;
                  bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,uVar158);
                  fVar208 = auVar350._0_4_;
                  auVar198._4_4_ = auVar346._0_4_;
                  auVar219 = auVar353._0_16_;
                  auVar248._4_4_ = w.n_particles;
                  if (!bVar170) {
                    ppVar79 = (particle_t *)0x0;
                    goto LAB_1400c7e09;
                  }
                }
                uVar158 = w.field119_0x3dc0.particles;
                auVar45._4_4_ = local_1b8.y;
                auVar45._0_4_ = local_1b8.x;
                auVar45._8_4_ = fStack_1b0;
                auVar45._12_4_ = fStack_1ac;
                auVar244._16_4_ = uStack_1a8;
                auVar244._0_16_ = auVar45;
                auVar244._20_4_ = uStack_1a4;
                auVar244._24_4_ = uStack_1a0;
                auVar244._28_4_ = uStack_19c;
                auVar317 = vblendps_avx(auVar45,auVar244._16_16_,8);
                w.n_particles = auVar248._4_4_ + 1;
                ppVar79 = w.field119_0x3dc0.particles + auVar248._4_4_;
                w.field119_0x3dc0.particles[auVar248._4_4_].type = 0xc;
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->x =
                     (real_2)auVar219._0_8_;
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->x_dot =
                     (real_2)auVar219._8_8_;
                (((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->x_spawn).field0_0x0 =
                     (real_2_u_0)0x0;
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->target = 0;
                uVar19 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->r = (float)(int)uVar19;
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->r_dot =
                     (float)(int)((ulonglong)uVar19 >> 0x20);
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->time = 0;
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->duration = 0xf0;
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->color = (real_4)auVar45
                ;
                ((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->color_initial =
                     (real_4)auVar317;
                (((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->color_final).
                field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                *(undefined8 *)
                 ((longlong)
                  &(((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->color_final).
                   field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3f800000;
                (((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->emission).field0_0x0 =
                     (real_4_u_0)(ZEXT816(0) << 0x20);
                *(undefined8 *)
                 ((longlong)
                  &(((particle_t *)(uVar158 + (longlong)auVar248._4_4_ * 0x78))->emission).
                   field0_0x0 + 0xd) = 0;
                rVar124 = (real_2_u_0)vmovlps_avx(auVar219);
                (ppVar79->x_spawn).field0_0x0 = rVar124;
              }
              else {
                uVar96 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                         *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
                uVar107 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
                uVar107 = uVar107 >> 0x10 ^ uVar107;
                uVar96 = (uint)(auVar324._0_4_ * (float)uVar107 * (float)w.n_particles);
                if ((int)(w.n_particles - 1U) < (int)uVar96) {
                  uVar96 = w.n_particles - 1U;
                }
                pmVar111 = (mutation_pickup *)(ulonglong)uVar96;
                *(uint *)((longlong)pvVar73 + 0x6c) = uVar107;
                if ((int)uVar96 < 1) {
                  pmVar111 = (mutation_pickup *)0x0;
                }
                if (w.field119_0x3dc0.particles[(longlong)pmVar111].affects_gameplay == false) {
                  fVar171 = auVar336._0_4_ + (float)local_188._0_4_;
                  fVar334 = auVar336._0_4_ + (float)local_168._0_4_;
                  ppVar79 = w.field119_0x3dc0.particles + (longlong)pmVar111;
                  ppVar79->type = 0xc;
                  ppVar79->x = (real_2)auVar219._0_8_;
                  ppVar79->x_dot = (real_2)auVar219._8_8_;
                  (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                  ppVar79->target = 0;
                  uVar158 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
                  ppVar79->r = (float)(int)uVar158;
                  ppVar79->r_dot = (float)(int)((ulonglong)uVar158 >> 0x20);
                  uVar158 = (mutation_pickup *)0xf000000000;
                  ppVar79->time = 0;
                  ppVar79->duration = 0xf0;
                  (ppVar79->color).field0_0x0._s_0.x = local_1b8.x;
                  (ppVar79->color).field0_0x0._s_0.y = fVar334;
                  (ppVar79->color).field0_0x0._s_0.z = fVar171;
                  (ppVar79->color).field0_0x0._s_0.w = 0.5;
                  (ppVar79->color_initial).field0_0x0._s_0.x = local_1b8.x;
                  (ppVar79->color_initial).field0_0x0._s_0.y = fVar334;
                  (ppVar79->color_initial).field0_0x0._s_0.z = fVar171;
                  (ppVar79->color_initial).field0_0x0._s_0.w = 0.5;
                  (ppVar79->color_final).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                  *(undefined8 *)
                   ((longlong)&(ppVar79->color_final).field0_0x0._s_2.yz.field0_0x0 + 4) =
                       0x3f800000;
                  (ppVar79->emission).field0_0x0 = (real_4_u_0)(ZEXT816(0) << 0x20);
                  *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
                  ppVar79 = w.field119_0x3dc0.particles + (longlong)pmVar111;
                }
                else {
                  ppVar79 = (particle_t *)0x0;
                  uVar158 = pmVar111;
                }
                auVar309 = ZEXT464(0x40c90fdb);
                auVar332 = ZEXT464(0x3c23d70a);
              }
LAB_1400c7e09:
              rVar53.y = local_1b8.y;
              rVar53.x = local_1b8.x;
              auVar248._4_4_ = w.n_cell_pickups + 1;
              lVar137 = (ulonglong)(uint)w.n_cell_pickups * 0x28;
              do {
                lVar142 = lVar137;
                uVar19 = w.field116_0x3da0.cell_pickups;
                auVar248._4_4_ = auVar248._4_4_ + -1;
                if (auVar248._4_4_ < 1) goto LAB_1400c6f20;
                fVar334 = *(float *)((longlong)w.field116_0x3da0.cell_pickups + lVar142 + -0x24) -
                          (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x).field0_0x0._s_0.x;
                fVar172 = *(float *)((longlong)w.field116_0x3da0.cell_pickups + lVar142 + -0x20) -
                          (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x).field0_0x0._s_0.y;
                fVar245 = auVar327._0_4_;
                fVar171 = fVar172 * fVar172 + fVar245 + fVar334 * fVar334;
                if ((fVar171 < 2500.0) && (fVar245 < fVar171)) {
                  fVar279 = auVar336._0_4_;
                  fVar347 = fVar334 * -0.5 * (fVar279 / fVar171);
                  fVar333 = fVar279 / materials_list
                                      [*(int *)((longlong)
                                                &w.field116_0x3da0.cell_pickups[-1].material_index +
                                               lVar142)].density;
                  fVar173 = fVar172 * -0.5 * (fVar279 / fVar171);
                  fVar303 = fVar333 * fVar173 +
                            *(float *)((longlong)w.field116_0x3da0.cell_pickups + lVar142 + -0x18);
                  uVar109 = CONCAT44((int)((ulonglong)materials_list >> 0x20),
                                     fVar333 * fVar347 +
                                     *(float *)((longlong)w.field116_0x3da0.cell_pickups +
                                               lVar142 + -0x1c)) | (ulonglong)(uint)fVar303 << 0x20;
                  *(ulonglong *)((longlong)w.field116_0x3da0.cell_pickups + lVar142 + -0x1c) =
                       uVar109;
                  fVar333 = (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x_dot).field0_0x0.
                            _s_0.y;
                  in_ZMM5 = ZEXT464((uint)fVar333);
                  fVar333 = fVar333 - fVar173 * 0.16666667;
                  rVar78 = (real_2_u_0_s_0)
                           (CONCAT44((int)(uVar109 >> 0x20),
                                     (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x_dot).
                                     field0_0x0._s_0.x - fVar347 * 0.16666667) |
                           CONCAT44(fVar303,fVar333) << 0x20);
                  (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->x_dot).field0_0x0._s_0 = rVar78
                  ;
                  if (ppVar79 != (particle_t *)0x0) {
                    if (1e-06 < fVar171) {
                      auVar219 = vsqrtss_avx(ZEXT416((uint)fVar171),ZEXT416((uint)fVar171));
                      fVar279 = fVar279 / auVar219._0_4_;
                      uVar109 = CONCAT44(rVar78.y,fVar334 * fVar279) |
                                CONCAT44(fVar333,fVar172 * fVar279) << 0x20;
                    }
                    else {
                      uVar109 = 0;
                    }
                    fVar334 = (fVar208 * (float)(uVar109 >> 0x20) +
                              fVar245 + auVar198._4_4_ * (float)uVar109) * 0.04 + 0.04;
                    rVar145._s_0.y = fVar208 * fVar334 + (ppVar79->x_dot).field0_0x0._s_0.y;
                    rVar145._s_0.x = auVar198._4_4_ * fVar334 + (ppVar79->x_dot).field0_0x0._s_0.x;
                    (ppVar79->x_dot).field0_0x0 = rVar145;
                  }
                }
                lVar137 = lVar142 + -0x28;
                uVar158 = uVar19;
              } while (0.25 <= fVar171);
              ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->pending_imbues =
                   ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->pending_imbues + -1;
              auVar248._4_4_ =
                   *(int *)((longlong)&((cell_pickup *)(uVar19 + -0x28))->material_index + lVar142);
              iVar70 = ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->n_imbues;
              ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->n_imbues = iVar70 + 1;
              ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->imbues[iVar70] = auVar248._4_4_;
              uVar39 = w.field116_0x3da0.cell_pickups;
              lVar137 = (longlong)w.n_cell_pickups + -1;
              w.n_cell_pickups = (int)lVar137;
              *(undefined8 *)(uVar19 + lVar142 + -8) =
                   *(undefined8 *)&w.field116_0x3da0.cell_pickups[lVar137].text_alpha;
              pcVar4 = (cell_pickup *)(uVar39 + lVar137 * 0x28);
              uVar39 = *(undefined8 *)((longlong)&(pcVar4->x).field0_0x0 + 4);
              uVar40 = *(undefined8 *)((longlong)&(pcVar4->x_dot).field0_0x0 + 4);
              uVar41 = *(undefined8 *)&pcVar4->r_dot;
              puVar11 = (undefined8 *)
                        ((longlong)&((cell_pickup *)(uVar19 + -0x28))->material_index + lVar142);
              *puVar11 = *(undefined8 *)pcVar4;
              puVar11[1] = uVar39;
              puVar11[2] = uVar40;
              puVar11[3] = uVar41;
              local_1b8 = rVar53;
            }
          }
        }
        else {
          auVar248 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_));
          auVar198._4_4_ = auVar336._0_4_ / auVar248._0_4_;
          pmVar111 = (mutation_pickup *)
                     (CONCAT44((int)((ulonglong)uVar158 >> 0x20),fVar171 * auVar198._4_4_) |
                     (ulonglong)(uint)(fVar334 * auVar198._4_4_) << 0x20);
          rVar138._s_0.y = 0.0;
          rVar138._s_0.x = (float)((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected;
          if (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->selected == 0) goto LAB_1400c701f;
LAB_1400c7011:
          if (((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->pending_imbues != 0)
          goto LAB_1400c701f;
          auVar198._4_4_ = ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->alpha * 0.9;
          ((mutation_pickup *)(uVar102 + lVar110 * 0x1f8))->alpha = auVar198._4_4_;
          if (auVar332._0_4_ <= auVar198._4_4_) goto LAB_1400c702a;
          lVar137 = (longlong)w.n_mutation_pickups;
          w.n_mutation_pickups = (int)(lVar137 + -1);
          uVar158 = w.field113_0x3d80.mutation_pickups + lVar137 + -1;
          in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
          auVar327 = ZEXT1664(auVar327._0_16_);
          auVar357 = ZEXT1664(auVar357._0_16_);
          auVar324 = ZEXT1664(auVar324._0_16_);
          auVar332 = ZEXT1664(auVar332._0_16_);
          auVar336 = ZEXT1664(auVar336._0_16_);
          auVar309 = ZEXT1664(auVar309._0_16_);
          memcpy();
        }
LAB_1400c6f20:
        auVar219 = auVar324._0_16_;
        auVar248 = in_ZMM5._0_16_;
        rVar159 = (real_2_u_0_s_0)(uVar102 + lVar110 * 0x1f8);
        bVar170 = 1 < lVar133;
        lVar133 = lVar163;
      } while (bVar170);
    }
    auVar324 = ZEXT1664(auVar248);
    auVar309 = ZEXT1664(auVar219);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("update explosion visuals");
    auVar248 = auVar324._0_16_;
    lVar133 = (longlong)w.n_explosion_visuals;
    if (0 < lVar133) {
      lVar163 = lVar133 * 0x3c;
      uVar109 = lVar133 + 1;
      auVar248 = SUB6416(ZEXT464(0x3e4ccccd),0);
      auVar313._0_12_ = ZEXT812(0);
      auVar313._12_4_ = 0;
      do {
        uVar122 = w.field88_0x3c80.explosion_visuals;
        auVar198._4_4_ = *(float *)((longlong)w.field88_0x3c80.explosion_visuals + lVar163 + -0x2c);
        if ((auVar198._4_4_ == 0.0) && (!NAN(auVar198._4_4_))) {
          uVar96 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
          uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          uVar96 = uVar96 >> 0x10 ^ uVar96;
          *puVar1 = uVar96;
          pqVar63 = ac.queued_sounds;
          auVar198._4_4_ =
               w.camera_pos.field0_0x0._s_0.x -
               *(float *)((longlong)&(((explosion_render_info *)(uVar122 + -0x3c))->x).field0_0x0 +
                         lVar163);
          fVar208 = w.camera_pos.field0_0x0._s_0.y - *(float *)(uVar122 + lVar163 + -0x38);
          auVar198._4_4_ = fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + 0.0;
          auVar219 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_));
          if ((ac.initialized == true) && (0 < sounds.explosion.n_samples)) {
            auVar317 = vmaxss_avx(ZEXT416((uint)(auVar198._4_4_ * 1e-05)),
                                  SUB6416(ZEXT464(0x3f800000),0));
            auVar198._4_4_ = 1.0 / auVar317._0_4_;
            auVar198._4_4_ = auVar198._4_4_ + auVar198._4_4_;
            if (((0.001 <= auVar198._4_4_) && (sounds.explosion.data != (short *)0x0)) &&
               (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
              uVar107 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
              ac.queued_sounds[(int)uVar107].sound = (sound_t *)0x1401eb0d0;
              pqVar63[(int)uVar107].params.volume = auVar198._4_4_;
              pqVar63[(int)uVar107].params.delay = 0.0;
              pqVar63[(int)uVar107].params.pitch_shift = auVar309._0_4_ * (float)uVar96 * 6.0 + -6.0
              ;
              pqVar63[(int)uVar107].params.lowpass_dist = auVar219._0_4_ * 0.2;
              *(undefined1 (*) [16])&pqVar63[(int)uVar107].params.type = auVar313;
              pqVar63[(int)uVar107].kill = false;
              LOCK();
              ac.last_queued_sound = ac.last_queued_sound + 1;
              UNLOCK();
            }
          }
        }
        auVar198._4_4_ = *(float *)(uVar122 + lVar163 + -0x2c) + 1.0;
        *(float *)(uVar122 + lVar163 + -0x2c) = auVar198._4_4_;
        uVar102 = w.field88_0x3c80.explosion_visuals;
        if (*(float *)(uVar122 + lVar163 + -0x28) < auVar198._4_4_) {
          lVar133 = (longlong)w.n_explosion_visuals + -1;
          w.n_explosion_visuals = (int)lVar133;
          auVar244 = *(undefined1 (*) [32])(w.field88_0x3c80.explosion_visuals + lVar133);
          *(undefined1 (*) [32])((longlong)w.field88_0x3c80.explosion_visuals + lVar163 + -0x20) =
               *(undefined1 (*) [32])&w.field88_0x3c80.explosion_visuals[lVar133].color1;
          *(undefined1 (*) [32])
           ((longlong)&(((explosion_render_info *)(uVar102 + -0x3c))->x).field0_0x0 + lVar163) =
               auVar244;
        }
        uVar109 = uVar109 - 1;
        lVar163 = lVar163 + -0x3c;
      } while (1 < uVar109);
    }
    auVar324 = ZEXT1664(auVar248);
    auVar309 = ZEXT1664(auVar309._0_16_);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("spawn background particles");
    auVar327 = ZEXT464(0x3f000000);
    auVar357 = ZEXT464(0xc47a0000);
    auVar332 = ZEXT464(0x44fa0000);
    auVar336 = ZEXT464(0xbf800000);
    auVar346 = ZEXT1264(ZEXT812(0));
    uVar96 = 0;
    do {
      rVar126 = local_210;
      auVar324 = ZEXT1664(auVar324._0_16_);
      auVar327 = ZEXT1664(auVar327._0_16_);
      auVar357 = ZEXT1664(auVar357._0_16_);
      auVar332 = ZEXT1664(auVar332._0_16_);
      auVar336 = ZEXT1664(auVar336._0_16_);
      auVar309 = ZEXT1664(auVar309._0_16_);
      auVar346 = ZEXT1664(auVar346._0_16_);
      tanf();
      auVar186._8_8_ = 0;
      auVar186._0_8_ = *(ulonglong *)((longlong)rVar126 + 0x120);
      auVar248 = vcvtdq2ps_avx(auVar186);
      auVar219 = vmovshdup_avx(auVar248);
      fVar171 = auVar248._0_4_ / auVar219._0_4_;
      uVar166 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
      uVar166 = uVar166 >> 0xf ^ uVar166;
      uVar107 = uVar166 * -0x7b935975;
      auVar198._4_4_ = auVar357._0_4_ * fVar171;
      fVar208 = auVar309._0_4_ * (float)(uVar107 >> 0x10 ^ uVar107);
      auVar350 = ZEXT464((uint)fVar208);
      uVar166 = uVar166 * -0x63d2f291;
      uVar107 = (uVar166 >> 0xf ^ uVar166) * -0x7b935975;
      uVar107 = uVar107 >> 0x10 ^ uVar107;
      *puVar1 = uVar107;
      rVar159 = (real_2_u_0_s_0)
                (CONCAT44(rVar159.y,
                          fVar208 * (fVar171 * 1000.0 - auVar198._4_4_) + auVar198._4_4_ +
                          w.camera_pos.field0_0x0._s_0.x) |
                (ulonglong)
                (uint)(auVar357._0_4_ + auVar332._0_4_ * auVar309._0_4_ * (float)uVar107 +
                      w.camera_pos.field0_0x0._s_0.y) << 0x20);
      wall_map((wall_t *)local_158,&w.map,(real_2)rVar159,true);
      auVar198._4_4_ = temperature_value(&w.map,(real_2)rVar159);
      uVar130 = rStack_14c._s_0.y;
      uVar131 = rStack_14c._s_0.x;
      auVar219 = auVar350._0_16_;
      auVar198._4_4_ = (auVar336._0_4_ + auVar198._4_4_) * 0.05;
      auVar353 = ZEXT464((uint)auVar198._4_4_);
      auVar317 = ZEXT416((uint)auVar198._4_4_);
      if ((fStack_144 <= auVar346._0_4_) && (auVar346._0_4_ < (float)local_158._0_4_)) {
        rVar126.y = rStack_14c._s_0.y;
        rVar126.x = rStack_14c._s_0.x;
        pbVar80 = get_biome_core(&w.map,(real_2)rVar159);
        auVar219 = auVar350._0_16_;
        auVar317 = auVar353._0_16_;
        if (w.game_mode == 0) {
          if (uVar96 < 2) {
            uVar107 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
            uVar107 = (uVar107 >> 0xf ^ uVar107) * -0x7b935975;
            uVar107 = uVar107 >> 0x10 ^ uVar107;
            *puVar1 = uVar107;
            auVar198._4_4_ = auVar309._0_4_ * (float)uVar107;
            auVar371 = ZEXT464((uint)auVar198._4_4_);
            auVar363 = ZEXT464((uint)(auVar198._4_4_ * 0.1));
            pvVar73 = TlsGetValue(tls_index);
            auVar198._4_4_ = auVar363._0_4_;
            fVar208 = auVar371._0_4_;
            auVar219 = auVar350._0_16_;
            auVar317 = auVar353._0_16_;
            if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
              lVar133 = (longlong)w.max_particles;
              if (w.max_particles <= w.n_particles) {
                w.max_particles = w.max_particles * 2;
                bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
                auVar198._4_4_ = auVar363._0_4_;
                fVar208 = auVar371._0_4_;
                auVar219 = auVar350._0_16_;
                auVar317 = auVar353._0_16_;
                if (!bVar170) goto LAB_1400c8b70;
              }
              uVar122 = w.field119_0x3dc0.particles;
              lVar133 = (longlong)w.n_particles;
              lVar163 = lVar133 * 0x78;
              w.n_particles = w.n_particles + 1;
              w.field119_0x3dc0.particles[lVar133].type = 0xb;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->x).field0_0x0._s_0 = rVar159;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->x_dot).field0_0x0._s_0 = rVar126;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->x_spawn).field0_0x0._s_0.x = fVar208;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->x_spawn).field0_0x0._s_0.y = 0.0;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->target = 0;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->r = 1.0;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->r_dot = auVar198._4_4_;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->time = 0;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->duration = 0x1e0;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->color).field0_0x0.xy.field0_0x0 =
                   (real_2_u_0)0x3f4ccccd3ecccccd;
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar122 + lVar133 * 0x78))->color).field0_0x0._s_2.yz.field0_0x0 +
               4) = 0x3f800000;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0.xy.field0_0x0 =
                   (real_2_u_0)0x3f4ccccd3ecccccd;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0._s_0.z = 1.0;
              *(undefined1 (*) [32])
               ((longlong)&(((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0 +
               0xc) = ZEXT1232(ZEXT812(0)) << 0x20;
              *(undefined1 (*) [32])
               ((longlong)&(((particle_t *)(uVar122 + lVar133 * 0x78))->color_final).field0_0x0 + 5)
                   = ZEXT1232(ZEXT812(0)) << 0x20;
              if (((ulonglong)(((particle_t *)(uVar122 + lVar133 * 0x78))->x_spawn).field0_0x0 &
                  0x7fffffff7fffffff) == 0) goto LAB_1400c8b63;
            }
            else {
              uVar107 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                        *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
              uVar166 = (uVar107 >> 0xf ^ uVar107) * -0x7b935975;
              uVar166 = uVar166 >> 0x10 ^ uVar166;
              uVar107 = (uint)(auVar309._0_4_ * (float)uVar166 * (float)w.n_particles);
              if ((int)(w.n_particles - 1U) < (int)uVar107) {
                uVar107 = w.n_particles - 1U;
              }
              uVar109 = (ulonglong)uVar107;
              *(uint *)((longlong)pvVar73 + 0x6c) = uVar166;
              if ((int)uVar107 < 1) {
                uVar109 = 0;
              }
              if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
                ppVar79 = w.field119_0x3dc0.particles + uVar109;
                ppVar79->type = 0xb;
                (ppVar79->x).field0_0x0._s_0 = rVar159;
                (ppVar79->x_dot).field0_0x0._s_0 = rVar126;
                (ppVar79->x_spawn).field0_0x0._s_0.x = fVar208;
                *(undefined8 *)((longlong)&(ppVar79->x_spawn).field0_0x0 + 4) = 0;
                ppVar79->r = 1.0;
                ppVar79->r_dot = auVar198._4_4_;
                ppVar79->time = 0;
                ppVar79->duration = 0x1e0;
                (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f4ccccd3ecccccd;
                *(undefined8 *)((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
                     0x3f800000;
                rVar124 = (real_2_u_0)0x3f4ccccd3ecccccd;
LAB_1400c8714:
                (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = rVar124;
                (ppVar79->color_initial).field0_0x0._s_0.z = 1.0;
                *(undefined1 (*) [32])((longlong)&(ppVar79->color_initial).field0_0x0 + 0xc) =
                     ZEXT832(0) << 0x20;
                *(undefined1 (*) [32])((longlong)&(ppVar79->color_final).field0_0x0 + 5) =
                     ZEXT832(0) << 0x20;
              }
            }
          }
        }
        else {
          uVar107 = get_map_flags(&w.map,(real_2)rVar159);
          auVar219 = auVar350._0_16_;
          auVar317 = auVar353._0_16_;
          if ((pbVar80 == (biome_core *)0x0) || ((uVar107 & 1) == 0)) {
            if (uVar96 == 0) {
              auVar248 = ZEXT416((uint)((float)uVar130 * (float)uVar130 +
                                       auVar346._0_4_ + (float)uVar131 * (float)uVar131));
              auVar219 = vsqrtss_avx(auVar248,auVar248);
              if (pbVar80 == (biome_core *)0x0) {
                auVar248._4_4_ = 0;
                auVar363 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
                auVar366._8_4_ = 0x3f800000;
                auVar366._0_8_ = 0x3f8000003f800000;
                auVar366._12_4_ = 0x3f800000;
              }
              else {
                uVar122 = *(undefined8 *)
                           &w.field125_0x3e00.biome_types[pbVar80->biome_index].color.field0_0x0;
                auVar198._4_4_ = (float)uVar122 * 20.0 * 0.5;
                fVar208 = (float)((ulonglong)uVar122 >> 0x20) * 20.0 * 0.5;
                auVar350 = ZEXT864(CONCAT44(fVar208,auVar198._4_4_));
                auVar366._0_4_ = auVar198._4_4_ + 0.5;
                auVar366._4_4_ = fVar208 + 0.5;
                auVar366._8_4_ = 0x3f000000;
                auVar366._12_4_ = 0x3f000000;
                auVar363 = ZEXT464((uint)(w.field125_0x3e00.biome_types[pbVar80->biome_index].color.
                                          field0_0x0._s_0.z * 20.0 * auVar327._0_4_ + auVar327._0_4_
                                         ));
                auVar248._4_4_ = pbVar80->guardian_id;
              }
              auVar364 = ZEXT1664(auVar366);
              auVar219 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                                    ZEXT416((uint)((auVar219._0_4_ + auVar219._0_4_ + 1.0) * 0.07)))
              ;
              auVar219 = vmaxss_avx(auVar346._0_16_,auVar219);
              auVar371 = ZEXT1664(auVar219);
              pvVar73 = TlsGetValue(tls_index);
              auVar198._4_4_ = auVar371._0_4_;
              fVar208 = auVar363._0_4_;
              auVar258 = auVar364._0_16_;
              auVar219 = auVar350._0_16_;
              auVar317 = auVar353._0_16_;
              if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles))
              {
                lVar133 = (longlong)w.max_particles;
                if (w.max_particles <= w.n_particles) {
                  w.max_particles = w.max_particles * 2;
                  bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
                  auVar198._4_4_ = auVar371._0_4_;
                  fVar208 = auVar363._0_4_;
                  auVar258 = auVar364._0_16_;
                  auVar219 = auVar350._0_16_;
                  auVar317 = auVar353._0_16_;
                  if (!bVar170) goto LAB_1400c8b70;
                }
                uVar122 = w.field119_0x3dc0.particles;
                lVar133 = (longlong)w.n_particles;
                lVar163 = lVar133 * 0x78;
                w.n_particles = w.n_particles + 1;
                w.field119_0x3dc0.particles[lVar133].type = 9;
                (((particle_t *)(uVar122 + lVar133 * 0x78))->x).field0_0x0._s_0 = rVar159;
                (((particle_t *)(uVar122 + lVar133 * 0x78))->x_dot).field0_0x0._s_0 = rVar126;
                (((particle_t *)(uVar122 + lVar133 * 0x78))->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                ((particle_t *)(uVar122 + lVar133 * 0x78))->target = auVar248._4_4_;
                ((particle_t *)(uVar122 + lVar133 * 0x78))->r = 5.0;
                ((particle_t *)(uVar122 + lVar133 * 0x78))->r_dot = 0.05;
                ((particle_t *)(uVar122 + lVar133 * 0x78))->time = 0;
                ((particle_t *)(uVar122 + lVar133 * 0x78))->duration = 0x1e0;
                auVar38._12_4_ = 0;
                auVar38._0_12_ = ZEXT812(0);
                (((particle_t *)(uVar122 + lVar133 * 0x78))->color).field0_0x0 =
                     (real_4_u_0)(auVar38 << 0x20);
                rVar124 = (real_2_u_0)vmovlps_avx(auVar258);
                (((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0.xy.field0_0x0
                     = rVar124;
                (((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0._s_0.z =
                     fVar208;
                (((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0._s_0.w =
                     auVar198._4_4_;
                ((particle_t *)(uVar122 + lVar133 * 0x78))->color_final =
                     (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                ((particle_t *)(uVar122 + lVar133 * 0x78))->emission =
                     (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                *(undefined8 *)
                 ((longlong)&(((particle_t *)(uVar122 + lVar133 * 0x78))->emission).field0_0x0 + 0xd
                 ) = 0;
                goto LAB_1400c8b63;
              }
              uVar107 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                        *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
              uVar166 = (uVar107 >> 0xf ^ uVar107) * -0x7b935975;
              uVar166 = uVar166 >> 0x10 ^ uVar166;
              uVar107 = (uint)(auVar309._0_4_ * (float)uVar166 * (float)w.n_particles);
              if ((int)(w.n_particles - 1U) < (int)uVar107) {
                uVar107 = w.n_particles - 1U;
              }
              uVar109 = (ulonglong)uVar107;
              *(uint *)((longlong)pvVar73 + 0x6c) = uVar166;
              if ((int)uVar107 < 1) {
                uVar109 = 0;
              }
              if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
                ppVar79 = w.field119_0x3dc0.particles + uVar109;
                ppVar79->type = 9;
                (ppVar79->x).field0_0x0._s_0 = rVar159;
                (ppVar79->x_dot).field0_0x0._s_0 = rVar126;
                (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                ppVar79->target = auVar248._4_4_;
                ppVar79->r = 5.0;
                ppVar79->r_dot = 0.05;
                ppVar79->time = 0;
                ppVar79->duration = 0x1e0;
                auVar37._12_4_ = 0;
                auVar37._0_12_ = ZEXT812(0);
                (ppVar79->color).field0_0x0 = (real_4_u_0)(auVar37 << 0x20);
                rVar124 = (real_2_u_0)vmovlps_avx(auVar258);
                (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = rVar124;
                (ppVar79->color_initial).field0_0x0._s_0.z = fVar208;
                (ppVar79->color_initial).field0_0x0._s_0.w = auVar198._4_4_;
                ppVar79->color_final = (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                ppVar79->emission = (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
              }
            }
          }
          else if (uVar96 < 5) {
            pvVar73 = TlsGetValue(tls_index);
            auVar219 = auVar350._0_16_;
            auVar317 = auVar353._0_16_;
            if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
              lVar133 = (longlong)w.max_particles;
              if (w.max_particles <= w.n_particles) {
                w.max_particles = w.max_particles * 2;
                bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
                auVar219 = auVar350._0_16_;
                auVar317 = auVar353._0_16_;
                if (!bVar170) goto LAB_1400c8b70;
              }
              uVar122 = w.field119_0x3dc0.particles;
              lVar133 = (longlong)w.n_particles;
              lVar163 = lVar133 * 0x78;
              w.n_particles = w.n_particles + 1;
              w.field119_0x3dc0.particles[lVar133].type = 10;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->x).field0_0x0._s_0 = rVar159;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->x_dot).field0_0x0._s_0 = rVar126;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->x_spawn).field0_0x0 = (real_2_u_0)0x0;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->target = 0;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->r = 1.0;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->r_dot = 0.05;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->time = 0;
              ((particle_t *)(uVar122 + lVar133 * 0x78))->duration = 0xf0;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->color).field0_0x0.xy.field0_0x0 =
                   (real_2_u_0)0x3f8000003ecccccd;
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar122 + lVar133 * 0x78))->color).field0_0x0._s_2.yz.field0_0x0 +
               4) = 0x3f800000;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0.xy.field0_0x0 =
                   (real_2_u_0)0x3f8000003ecccccd;
              (((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0._s_0.z = 1.0;
              *(undefined1 (*) [32])
               ((longlong)&(((particle_t *)(uVar122 + lVar133 * 0x78))->color_initial).field0_0x0 +
               0xc) = ZEXT1232(ZEXT812(0)) << 0x20;
              *(undefined1 (*) [32])
               ((longlong)&(((particle_t *)(uVar122 + lVar133 * 0x78))->color_final).field0_0x0 + 5)
                   = ZEXT1232(ZEXT812(0)) << 0x20;
LAB_1400c8b63:
              *(real_2_u_0_s_0 *)
               ((longlong)&(((particle_t *)uVar122)->x_spawn).field0_0x0 + lVar163) = rVar159;
            }
            else {
              uVar107 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                        *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
              uVar166 = (uVar107 >> 0xf ^ uVar107) * -0x7b935975;
              uVar166 = uVar166 >> 0x10 ^ uVar166;
              uVar107 = (uint)(auVar309._0_4_ * (float)uVar166 * (float)w.n_particles);
              if ((int)(w.n_particles - 1U) < (int)uVar107) {
                uVar107 = w.n_particles - 1U;
              }
              uVar109 = (ulonglong)uVar107;
              *(uint *)((longlong)pvVar73 + 0x6c) = uVar166;
              if ((int)uVar107 < 1) {
                uVar109 = 0;
              }
              if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
                ppVar79 = w.field119_0x3dc0.particles + uVar109;
                ppVar79->type = 10;
                (ppVar79->x).field0_0x0._s_0 = rVar159;
                (ppVar79->x_dot).field0_0x0._s_0 = rVar126;
                (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                ppVar79->target = 0;
                ppVar79->r = 1.0;
                ppVar79->r_dot = 0.05;
                ppVar79->time = 0;
                ppVar79->duration = 0xf0;
                (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003ecccccd;
                *(undefined8 *)((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
                     0x3f800000;
                rVar124 = (real_2_u_0)0x3f8000003ecccccd;
                goto LAB_1400c8714;
              }
            }
          }
        }
      }
LAB_1400c8b70:
      auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar317);
      auVar248 = vmaxss_avx(auVar346._0_16_,auVar248);
      uVar107 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
      uVar107 = (uVar107 >> 0xf ^ uVar107) * -0x7b935975;
      uVar107 = uVar107 >> 0x10 ^ uVar107;
      *puVar1 = uVar107;
      if (auVar309._0_4_ * (float)uVar107 < auVar248._0_4_) {
        auVar248 = vandps_avx(ZEXT416((uint)local_158._0_4_),___xmm_7fffffff7fffffff7fffffff7fffffff
                             );
        if (auVar248._0_4_ < 10.0) {
          auVar324 = ZEXT1664(auVar324._0_16_);
          auVar327 = ZEXT1664(auVar327._0_16_);
          auVar357 = ZEXT1664(auVar357._0_16_);
          auVar332 = ZEXT1664(auVar332._0_16_);
          auVar336 = ZEXT1664(auVar336._0_16_);
          auVar309 = ZEXT1664(auVar309._0_16_);
          auVar346 = ZEXT1664(auVar346._0_16_);
          rVar77 = rand_normal_2(puVar1);
          auVar350 = ZEXT464((uint)((float)local_158._8_4_ * 0.1));
          uVar166 = (*puVar1 >> 0x10 ^ *puVar1) * 0x7feb352d;
          uVar166 = uVar166 >> 0xf ^ uVar166;
          uVar107 = uVar166 * -0x7b935975;
          rVar124 = (real_2_u_0)
                    (CONCAT44(rVar126.y,rVar77.field0_0x0._0_4_ * 0.1 + (float)local_158._4_4_ * 0.1
                             ) |
                    (ulonglong)(uint)(rVar77.field0_0x0._4_4_ * 0.1 + (float)local_158._8_4_ * 0.1)
                    << 0x20);
          auVar353 = ZEXT464((uint)(auVar309._0_4_ * (float)(uVar107 >> 0x10 ^ uVar107) * 0.2));
          uVar166 = uVar166 * -0x63d2f291;
          uVar107 = (uVar166 >> 0xf ^ uVar166) * -0x7b935975;
          uVar107 = uVar107 >> 0x10 ^ uVar107;
          *puVar1 = uVar107;
          auVar248._4_4_ = (int)(auVar309._0_4_ * (float)uVar107 * 100.0);
          if (auVar248._4_4_ < 1) {
            auVar248._4_4_ = 0;
          }
          if (0x62 < auVar248._4_4_) {
            auVar248._4_4_ = 99;
          }
          pvVar73 = TlsGetValue(tls_index);
          auVar219 = auVar350._0_16_;
          auVar198._4_4_ = auVar353._0_4_;
          if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
            lVar133 = (longlong)w.max_particles;
            iVar70 = w.n_particles;
            if (w.max_particles <= w.n_particles) {
              w.max_particles = w.max_particles * 2;
              bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
              auVar219 = auVar350._0_16_;
              auVar198._4_4_ = auVar353._0_4_;
              iVar70 = w.n_particles;
              if (!bVar170) goto LAB_1400c8390;
            }
            uVar122 = w.field119_0x3dc0.particles;
            w.n_particles = iVar70 + 1;
            w.field119_0x3dc0.particles[iVar70].type = 8;
            (((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->x).field0_0x0._s_0 = rVar159;
            (((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->x_dot).field0_0x0 = rVar124;
            (((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0 =
                 (real_2_u_0)0x0;
            ((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->target = 0;
            ((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->r = 2.0;
            ((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->r_dot = auVar198._4_4_;
            ((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->time = 0;
            ((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->duration = auVar248._4_4_ + 0x96;
            (((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->color).field0_0x0.xy.field0_0x0 =
                 (real_2_u_0)0x3f6666663f800000;
            *(undefined8 *)
             ((longlong)
              &(((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->color).field0_0x0._s_2.yz.
               field0_0x0 + 4) = 0x3e19999a3f4ccccd;
            (((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->color_initial).field0_0x0.xy.
            field0_0x0 = (real_2_u_0)0x3f6666663f800000;
            *(undefined8 *)
             ((longlong)
              &(((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->color_initial).field0_0x0._s_2.
               yz.field0_0x0 + 4) = 0x3e19999a3f4ccccd;
            ((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->color_final =
                 (real_4)SUB3216(ZEXT832(0) << 0x20,0);
            ((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->emission =
                 (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
            *(undefined8 *)
             ((longlong)&(((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->emission).field0_0x0
             + 0xd) = 0;
            (((particle_t *)(uVar122 + (longlong)iVar70 * 0x78))->x_spawn).field0_0x0._s_0 = rVar159
            ;
          }
          else {
            uVar107 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                      *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
            uVar166 = (uVar107 >> 0xf ^ uVar107) * -0x7b935975;
            uVar166 = uVar166 >> 0x10 ^ uVar166;
            uVar107 = (uint)(auVar309._0_4_ * (float)uVar166 * (float)w.n_particles);
            if ((int)(w.n_particles - 1U) < (int)uVar107) {
              uVar107 = w.n_particles - 1U;
            }
            uVar109 = (ulonglong)uVar107;
            *(uint *)((longlong)pvVar73 + 0x6c) = uVar166;
            if ((int)uVar107 < 1) {
              uVar109 = 0;
            }
            if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
              ppVar79 = w.field119_0x3dc0.particles + uVar109;
              ppVar79->type = 8;
              (ppVar79->x).field0_0x0._s_0 = rVar159;
              (ppVar79->x_dot).field0_0x0 = rVar124;
              (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
              ppVar79->target = 0;
              ppVar79->r = 2.0;
              ppVar79->r_dot = auVar198._4_4_;
              ppVar79->time = 0;
              ppVar79->duration = auVar248._4_4_ + 0x96;
              (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f6666663f800000;
              *(undefined8 *)((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
                   0x3e19999a3f4ccccd;
              (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f6666663f800000;
              *(undefined8 *)((longlong)&(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4)
                   = 0x3e19999a3f4ccccd;
              ppVar79->color_final = (real_4)SUB3216(ZEXT832(0) << 0x20,0);
              ppVar79->emission = (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
              *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
            }
          }
        }
      }
LAB_1400c8390:
      uVar96 = uVar96 + 1;
    } while (uVar96 != 200);
    in_ZMM2 = ZEXT1664(auVar219);
    in_ZMM5 = ZEXT1664(auVar324._0_16_);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    w.hovered = 0;
    begin_trace_stage("merge bones");
    if (0 < w.bones.n_elements) {
      lVar133 = 0;
      uVar122 = w.bones.field3_0x20.elements;
      auVar248._4_4_ = w.bones.n_elements;
      do {
        if (((bone *)(uVar122 + lVar133 * 0x50))->merge_id != 0) {
          puVar75 = stalloc((longlong)auVar248._4_4_ << 3);
          uVar96 = ((bone *)(uVar122 + lVar133 * 0x50))->merge_id;
          if (0 < (int)uVar96) {
            uVar109 = 0;
            pbVar103 = (bone *)(uVar122 + lVar133 * 0x50);
            do {
              uVar122 = w.bones.field3_0x20.elements;
              uVar107 = w.bones.n_max_elements + 0x7fffffffU & uVar96;
              auVar248._4_4_ = (int)uVar109;
              if ((w.bones.field0_0x0.index_table[uVar107].id != uVar96) ||
                 (w.bones.field3_0x20.elements == (bone *)0x0)) goto joined_r0x0001400c8f38;
              auVar248._4_4_ = w.bones.field0_0x0.index_table[uVar107].index;
              pbVar5 = w.bones.field3_0x20.elements + auVar248._4_4_;
              *(bone **)(puVar75 + uVar109 * 8) = pbVar103;
              uVar109 = uVar109 + 1;
              uVar96 = ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->merge_id;
              pbVar103 = pbVar5;
            } while (0 < (int)uVar96);
            auVar248._4_4_ = (int)uVar109;
joined_r0x0001400c8f38:
            if (auVar248._4_4_ != 0) {
              auVar248._4_4_ = pbVar103->id;
              uVar123 = (ulonglong)((uint)uVar109 & 7);
              if ((uVar109 & 0xffffffff) - 1 < 7) {
                uVar106 = 0;
              }
              else {
                uVar106 = 0;
                do {
                  *(int *)(*(longlong *)(puVar75 + uVar106 * 8) + 0x48) = auVar248._4_4_;
                  *(int *)(*(longlong *)(puVar75 + uVar106 * 8 + 8) + 0x48) = auVar248._4_4_;
                  *(int *)(*(longlong *)(puVar75 + uVar106 * 8 + 0x10) + 0x48) = auVar248._4_4_;
                  *(int *)(*(longlong *)(puVar75 + uVar106 * 8 + 0x18) + 0x48) = auVar248._4_4_;
                  *(int *)(*(longlong *)(puVar75 + uVar106 * 8 + 0x20) + 0x48) = auVar248._4_4_;
                  *(int *)(*(longlong *)(puVar75 + uVar106 * 8 + 0x28) + 0x48) = auVar248._4_4_;
                  *(int *)(*(longlong *)(puVar75 + uVar106 * 8 + 0x30) + 0x48) = auVar248._4_4_;
                  *(int *)(*(longlong *)(puVar75 + uVar106 * 8 + 0x38) + 0x48) = auVar248._4_4_;
                  uVar106 = uVar106 + 8;
                } while (((uint)uVar109 & 0xfffffff8) != uVar106);
                if (uVar123 == 0) goto LAB_1400c8e90;
              }
              uVar109 = 0;
              do {
                *(int *)(*(longlong *)(puVar75 + uVar109 * 8 + uVar106 * 8) + 0x48) = auVar248._4_4_
                ;
                uVar109 = uVar109 + 1;
              } while (uVar123 != uVar109);
            }
          }
LAB_1400c8e90:
          stunalloc(puVar75);
          uVar122 = w.bones.field3_0x20.elements;
          auVar248._4_4_ = w.bones.n_elements;
        }
        lVar133 = lVar133 + 1;
      } while (lVar133 < auVar248._4_4_);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  piVar74 = w.light_reciever_values;
  iVar136 = (local_f8->field0_0x0)._s_0.lane_index * w.n_cells;
  local_21c = uVar69;
  memset();
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  begin_trace_stage("parallel cell update 1");
  local_3a8.string[0] = 'E';
  local_3a8.string[1] = 'X';
  local_3a8.string[2] = 'P';
  local_3a8.string[3] = 'L';
  local_3a8.string[4] = 'O';
  local_3a8.string[5] = 'S';
  local_3a8.string[6] = 'I';
  local_3a8.string[7] = 'V';
  local_3a8._s_0.hi = 0x5345525f45;
  iVar97 = get_mutation_index(&local_3a8);
  local_398.string[0] = 'L';
  local_398.string[1] = 'A';
  local_398.string[2] = 'V';
  local_398.string[3] = 'A';
  local_398.string[4] = '_';
  local_398.string[5] = 'W';
  local_398.string[6] = 'A';
  local_398.string[7] = 'L';
  local_398._s_0.hi = 0x534c;
  iVar71 = get_mutation_index(&local_398);
  local_388.string[0] = 'C';
  local_388.string[1] = 'H';
  local_388.string[2] = 'A';
  local_388.string[3] = 'I';
  local_388.string[4] = 'N';
  local_388.string[5] = '_';
  local_388.string[6] = 'L';
  local_388.string[7] = 'I';
  local_388.string[8] = 'G';
  local_388.string[9] = 'H';
  local_388.string[10] = 'T';
  local_388.string[0xb] = 'N';
  local_388.string[0xc] = 'I';
  local_388.string[0xd] = 'N';
  local_388.string[0xe] = 'G';
  local_388.string[0xf] = '\0';
  local_22c = get_mutation_index(&local_388);
  local_378.string[0] = 'P';
  local_378.string[1] = 'A';
  local_378.string[2] = 'R';
  local_378.string[3] = 'A';
  local_378.string[4] = 'S';
  local_378.string[5] = 'I';
  local_378.string[6] = 'T';
  local_378.string[7] = 'I';
  local_378._s_0.hi = 0x4d53;
  local_234 = get_mutation_index(&local_378);
  local_368._s_0.lo = 0x4e45474552;
  local_368._s_0.hi = 0;
  local_230 = get_mutation_index(&local_368);
  local_358.string[0] = 'O';
  local_358.string[1] = 'V';
  local_358.string[2] = 'E';
  local_358.string[3] = 'R';
  local_358.string[4] = 'C';
  local_358.string[5] = 'H';
  local_358.string[6] = 'A';
  local_358.string[7] = 'R';
  local_358._s_0.hi = 0x4547;
  auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
  iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
  uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
  uVar123 = uVar109 & 0xffffffff;
  local_1b8.x = (float)(((auVar248._4_4_ + 1) * w.n_cells) / iVar70);
  if ((int)uVar109 < (int)local_1b8.x) {
    auVar248._4_4_ = get_mutation_index(&local_358);
    local_188._0_8_ = (longlong)iVar97;
    local_208._0_4_ = (float)local_190;
    local_208._4_4_ = (float)((int)(float)local_190 >> 0x1f);
    local_120 = (creature_spawner *)(longlong)iVar71;
    local_168._0_8_ = (longlong)local_234;
    local_170 = (uchar *)(longlong)auVar248._4_4_;
    local_128 = (real_2_u_0)(longlong)local_230;
    auVar309 = ZEXT1264(ZEXT812(0));
    fVar171 = 6.2831855;
    fVar208 = -4.0;
    auVar198._4_4_ = 65536.0;
    auVar324 = ZEXT464(0x3f800000);
    do {
      pmVar117 = materials_list;
      uVar69 = (uint)uVar123;
      iVar70 = (int)uVar69 >> 4;
      uVar109 = (ulonglong)(uVar69 & 0xf);
      piVar160 = w.field58_0x3a60.cells[iVar70].field0_0x0.id_packed + uVar109;
      auVar248._4_4_ = w.field58_0x3a60.cells[iVar70].field3_0xc0.material_index_packed[uVar109];
      fVar334 = w.field58_0x3a60.cells[iVar70].spacing[uVar109 + 0x80];
      if (auVar309._0_4_ < fVar334) {
        uVar109 = (ulonglong)piVar160 & 0xffffffffffffffc0;
        lVar133 = (ulonglong)((uint)((ulonglong)piVar160 >> 2) & 0xf) * 0xb0;
        auVar327 = ZEXT464(*(uint *)(uVar109 + 0x1588 + lVar133));
        auVar357 = ZEXT464(*(uint *)(uVar109 + 0x158c + lVar133));
        fVar172 = *(float *)(uVar109 + 0x1590 + lVar133);
        powf();
        auVar332 = ZEXT1664(auVar327._0_16_);
        afStack_268[1] = auVar327._0_4_;
        auVar327 = ZEXT1664(auVar357._0_16_);
        powf();
        auVar357 = ZEXT1664(auVar327._0_16_);
        afStack_268[2] = auVar327._0_4_;
        powf();
        uVar109 = (ulonglong)(auVar332._0_4_ < auVar357._0_4_);
        auVar219 = vmaxss_avx(auVar357._0_16_,auVar332._0_16_);
        if (auVar219._0_4_ < fVar172) {
          uVar109 = 2;
        }
        uVar123 = (ulonglong)(auVar357._0_4_ < auVar332._0_4_);
        auVar219 = vminss_avx(auVar357._0_16_,auVar332._0_16_);
        if (fVar172 < auVar219._0_4_) {
          uVar123 = 2;
        }
        afStack_268[3] = fVar172;
        fVar172 = afStack_268[uVar109 + 1];
        auVar327 = ZEXT464((uint)fVar172);
        fVar245 = fVar172 - afStack_268[uVar123 + 1];
        auVar340._0_12_ = ZEXT812(0);
        auVar340._12_4_ = 0;
        auVar357 = ZEXT1264(ZEXT812(0));
        if (0.0 < fVar245) {
          iVar70 = (int)uVar109;
          iVar97 = iVar70 + -1;
          if (iVar70 == 0) {
            iVar97 = 2;
          }
          uVar109 = (ulonglong)(iVar70 + 1U);
          if (iVar70 + 1U == 3) {
            uVar109 = 0;
          }
          fVar333 = ((afStack_268[uVar109 + 1] - afStack_268[(longlong)iVar97 + 1]) / fVar245 +
                    (float)(iVar70 * 2)) * 1.0471976;
          auVar357 = ZEXT464((uint)fVar333);
          if (fVar333 < auVar309._0_4_) {
            auVar357 = ZEXT464((uint)(fVar333 + fVar171));
          }
        }
        if (0.0 < fVar172) {
          auVar340 = ZEXT416((uint)(fVar245 / fVar172));
        }
        auVar332 = ZEXT1664(auVar340);
        if (0 < w.n_light_recievers) {
          auVar336 = ZEXT464((uint)(fVar334 * fVar334));
          lVar163 = 5;
          lVar133 = 0;
          plVar81 = w.light_recievers;
          iVar70 = w.n_light_recievers;
          do {
            auVar219 = vminss_avx(auVar336._0_16_,
                                  ZEXT416((uint)(plVar81->x).field0_0x0.data[lVar163]));
            fVar334 = *(float *)((longlong)plVar81 + lVar163 * 4 + -0x14) - (float)piVar160[0x2f0];
            fVar172 = *(float *)((longlong)plVar81 + lVar163 * 4 + -0x10) - (float)piVar160[0x300];
            if (fVar172 * fVar172 + auVar309._0_4_ + fVar334 * fVar334 < auVar219._0_4_) {
              auVar219 = vandps_avx(ZEXT416((uint)(auVar357._0_4_ -
                                                  *(float *)((longlong)plVar81 + lVar163 * 4 + -0xc)
                                                  )),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar317 = vcmpss_avx(SUB6416(ZEXT464(0x40490fdb),0),auVar219,1);
              auVar219 = vblendvps_avx(auVar219,ZEXT416((uint)(fVar171 - auVar219._0_4_)),auVar317);
              fVar334 = *(float *)((longlong)plVar81 + lVar163 * 4 + -8);
              fVar172 = auVar327._0_4_ * *(float *)((longlong)plVar81 + lVar163 * 4 + -4);
              auVar346 = ZEXT464((uint)(fVar172 * fVar172));
              fVar172 = fVar334 - auVar332._0_4_;
              fVar334 = auVar332._0_4_ * fVar334 * 3.8197186 * auVar219._0_4_;
              fVar334 = fVar208 * fVar172 * fVar172 - fVar334 * fVar334;
              expf();
              iVar70 = (int)(auVar346._0_4_ * fVar334 * auVar198._4_4_);
              if (0xffff < iVar70) {
                iVar70 = 0x10000;
              }
              piVar74[iVar136 + lVar133] = piVar74[iVar136 + lVar133] + iVar70;
              plVar81 = w.light_recievers;
              iVar70 = w.n_light_recievers;
            }
            lVar133 = lVar133 + 1;
            lVar163 = lVar163 + 6;
          } while (lVar133 < iVar70);
        }
      }
      uVar96 = piVar160[0x20];
      if ((((0 < (int)uVar96) &&
           (uVar107 = w.bones.n_max_elements + 0x7fffffffU & uVar96,
           w.bones.field0_0x0.index_table[uVar107].id == uVar96)) &&
          (w.bones.field3_0x20.elements != (bone *)0x0)) &&
         (w.bones.field3_0x20.elements[w.bones.field0_0x0.index_table[uVar107].index].merge_id != 0)
         ) {
        piVar160[0x20] =
             w.bones.field3_0x20.elements[w.bones.field0_0x0.index_table[uVar107].index].merge_id;
      }
      uVar96 = piVar160[0x10];
      if (((int)uVar96 < 1) ||
         (uVar107 = w.bodies.n_max_elements + 0x7fffffffU & uVar96,
         w.bodies.field0_0x0.index_table[uVar107].id != uVar96)) {
        pbVar93 = (body *)0x0;
      }
      else {
        pbVar93 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar107].index;
      }
      uVar96 = (w.base_seed + *piVar160 >> 0x10 ^ w.base_seed + *piVar160) * 0x7feb352d;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = (uVar96 >> 0x10 ^ uVar96) + w.frame_number;
      if (pbVar93 == (body *)0x0) {
        piVar160[0x4a0] = 0x3f800000;
        piVar160[0x230] = 0;
        fVar334 = (float)piVar160[0x1d0];
        auVar248 = vmaxss_avx(SUB6416(ZEXT464(0x3a83126f),0),ZEXT416((uint)(fVar334 * 0.001)));
        fVar172 = auVar248._0_4_;
LAB_1400c9863:
        if ((*(byte *)(piVar160 + 0x400) & 0x3f) != 0) {
          uVar96 = (uVar96 >> 0x10 ^ uVar96) * 0x7feb352d;
          uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          uVar96 = (uVar96 >> 0x10 ^ uVar96) + 0x64c72;
          uVar96 = (uVar96 >> 0x10 ^ uVar96) * 0x7feb352d;
          uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x63d2f291;
          uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          fVar334 = fVar334 + fVar172 * (float)(uVar96 >> 0x10 ^ uVar96) * -2.3283064e-10;
          piVar160[0x1d0] = (int)fVar334;
        }
        fVar172 = ((float)piVar160[0x300] - w.camera_pos.field0_0x0._s_0.y) *
                  ((float)piVar160[0x300] - w.camera_pos.field0_0x0._s_0.y);
        in_ZMM2 = ZEXT464((uint)fVar172);
        if (1e+06 < fVar172 + auVar309._0_4_ +
                              ((float)piVar160[0x2f0] - w.camera_pos.field0_0x0._s_0.x) *
                              ((float)piVar160[0x2f0] - w.camera_pos.field0_0x0._s_0.x)) {
          piVar160[0x1d0] = (int)(fVar334 + -0.001);
        }
        if (pbVar93 != (body *)0x0) {
          pbVar32 = pbVar93->boss_part;
          goto joined_r0x0001400c992c;
        }
      }
      else {
        iVar70 = 0x3dcccccd;
        powf();
        piVar160[0x250] = iVar70;
        piVar160[0x400] =
             piVar160[0x400] & 0xfffbffffU |
             (uint)(w.field55_0x3a28.body_auxiliary_data
                    [CONCAT44(local_208._4_4_,(float)local_208) +
                     (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                     ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >> 4)] != '\0') << 0x12;
        iVar70 = 0x3c23d70a;
        powf();
        piVar160[0x260] = iVar70;
        fVar334 = auVar324._0_4_;
        piVar160[0x2a0] =
             (int)(((float)(int)(char)w.field55_0x3a28.body_auxiliary_data
                                      [local_168._0_8_ +
                                       (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                                       ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >> 4)] *
                    999.0 + fVar334) * (float)piVar160[0x2a0]);
        piVar160[0x4a0] =
             (int)((float)(int)(char)local_170[(longlong)
                                               (w.field55_0x3a28.body_auxiliary_data +
                                               (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5
                                               * ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >>
                                                 4))] +
                   (float)(int)(char)local_170[(longlong)
                                               (w.field55_0x3a28.body_auxiliary_data +
                                               (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5
                                               * ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >>
                                                 4))] + fVar334);
        piVar160[0x230] = 0;
        if (((pbVar93->parent_id != 0) &&
            ((w.field55_0x3a28.body_auxiliary_data
              [(longlong)mut_budding_index +
               (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
               ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >> 4)] == '\0' ||
             (1200.0 <= pbVar93->age)))) || (pbVar93->kill_slowly != 0)) {
          fVar334 = (float)piVar160[0x1d0];
          auVar219 = vmaxss_avx(SUB6416(ZEXT464(0x3a83126f),0),ZEXT416((uint)(fVar334 * 0.001)));
          fVar172 = auVar219._0_4_;
          if (pbVar93->kill_slowly != 0) {
            auVar248 = vmaxss_avx(auVar219,ZEXT416((uint)(pmVar117[auVar248._4_4_].max_health * 0.9)
                                                  ));
            fVar172 = auVar248._0_4_;
          }
          goto LAB_1400c9863;
        }
        lVar133 = (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                  ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >> 4);
        fVar172 = pmVar117[auVar248._4_4_].max_health *
                  ((float)(int)(char)w.field55_0x3a28.body_auxiliary_data[local_168._0_8_ + lVar133]
                  + fVar334);
        fVar334 = (float)piVar160[0x1d0];
        auVar219 = auVar324._0_16_;
        if (fVar334 <= fVar172) {
          if ((pbVar93->is_safe != 0) ||
             ((in_ZMM2 = ZEXT864(0),
              w.field55_0x3a28.body_auxiliary_data[local_168._0_8_ + lVar133] == '\0' &&
              (pbVar93->damage_timer <= auVar309._0_4_)))) {
            fVar172 = pmVar117[auVar248._4_4_].regen;
            if (w.field55_0x3a28.body_auxiliary_data[(longlong)local_128 + lVar133] != '\0') {
              fVar172 = fVar172 * (float)(int)(char)w.field55_0x3a28.body_auxiliary_data
                                                    [(longlong)local_128 + lVar133] * 0.25;
            }
            auVar317 = vcmpss_avx(auVar219,ZEXT416((uint)piVar160[0x1c0]),2);
            auVar258 = vmaxss_avx(SUB6416(ZEXT464(0x3a83126f),0),ZEXT416((uint)fVar172));
            auVar317 = vblendvps_avx(ZEXT416((uint)fVar172),auVar258,auVar317);
            auVar258 = vcmpss_avx(auVar309._0_16_,ZEXT416((uint)fVar334),1);
            auVar317 = vblendvps_avx(ZEXT416((uint)fVar172),auVar317,auVar258);
            if (pbVar93->n_cells < 0xd) {
              auVar281._0_4_ = (float)pbVar93->n_cells;
              auVar281._4_12_ = in_ZMM5._4_12_;
              auVar219 = vmaxss_avx(auVar281,auVar219);
              auVar317 = ZEXT416((uint)(0.05 / auVar219._0_4_ + auVar317._0_4_));
            }
            auVar219 = vmaxss_avx(auVar317,ZEXT416(0x447a0000));
            if (pbVar93->regen_boost != 0) {
              auVar317 = auVar219;
            }
            auVar248 = vminss_avx(auVar317,ZEXT416((uint)(pmVar117[auVar248._4_4_].max_health -
                                                         fVar334)));
            auVar248 = vmaxss_avx(auVar309._0_16_,auVar248);
            in_ZMM2 = ZEXT1664(auVar248);
          }
        }
        else {
          auVar215._0_4_ = (fVar334 - fVar172) / fVar172;
          auVar215._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar248 = vminss_avx(auVar215,auVar219);
          in_ZMM2 = ZEXT464((uint)((fVar334 - fVar172) * -0.004 * auVar248._0_4_));
        }
        piVar160[0x1d0] = (int)(fVar334 + in_ZMM2._0_4_);
        piVar160[0x230] = (int)(auVar309._0_4_ + in_ZMM2._0_4_);
        pbVar32 = pbVar93->boss_part;
joined_r0x0001400c992c:
        if (pbVar32 != (boss_part_t *)0x0) {
          piVar160[0x460] = -2;
        }
      }
      auVar248 = vcmpss_avx(ZEXT416((uint)((float)piVar160[0x4c0] * 0.96666664)),ZEXT416(0x33d6bf95)
                            ,1);
      auVar248 = vandnps_avx(auVar248,ZEXT416((uint)((float)piVar160[0x4c0] * 0.96666664)));
      piVar160[0x4c0] = auVar248._0_4_;
      if ((((pbVar93 != (body *)0x0) && ((float)piVar160[0x1d0] < auVar309._0_4_)) &&
          (pbVar32 = pbVar93->boss_part, pbVar32 != (boss_part_t *)0x0)) &&
         (((pbVar32->type == 1 && ((w.final_boss.field0_0x0.active_flags & 1) != 0)) &&
          ((w.final_boss.max_health * 0.01 < w.final_boss.health &&
           (0 < (longlong)pbVar32->n_pinned_cells)))))) {
        lVar133 = 0;
        do {
          if (pbVar32->pinned_cells[lVar133].field0_0x0 ==
              *(int_2_u_0 *)
               (((ulonglong)piVar160 & 0xffffffffffffffc0) + 0x1580 +
               (ulonglong)((uint)((ulonglong)piVar160 >> 2) & 0xf) * 0xb0)) {
            piVar160[0x1d0] = 0;
            break;
          }
          lVar133 = lVar133 + 1;
        } while (pbVar32->n_pinned_cells != lVar133);
      }
      uVar123 = (ulonglong)(uVar69 + 1);
    } while ((float)(uVar69 + 1) != local_1b8.x);
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  local_214 = 0.0;
  auVar198._4_4_ = 0.0;
  auVar324 = ZEXT1264(ZEXT812(0));
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("set cell detected lights");
    if (0 < w.n_light_recievers) {
      lVar133 = 0;
      lVar163 = 0;
      do {
        uVar69 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
        if ((int)uVar69 < 1) {
          auVar198._4_4_ = 0.0;
        }
        else {
          lVar110 = (longlong)w.n_cells;
          uVar109 = (ulonglong)(uVar69 & 3);
          if (uVar69 < 4) {
            auVar198._4_4_ = 0.0;
            uVar123 = 0;
          }
          else {
            piVar74 = (int *)((longlong)w.light_reciever_values + lVar133);
            auVar198._4_4_ = 0.0;
            uVar123 = 0;
            do {
              in_ZMM2 = ZEXT1664(CONCAT124(in_ZMM5._4_12_,(float)piVar74[lVar110 * 3]));
              auVar198._4_4_ =
                   auVar198._4_4_ + (float)*piVar74 + (float)piVar74[lVar110] +
                   (float)piVar74[lVar110 * 2] + (float)piVar74[lVar110 * 3];
              uVar123 = uVar123 + 4;
              piVar74 = piVar74 + lVar110 * 4;
            } while ((uVar69 & 0x7ffffffc) != uVar123);
            if (uVar109 == 0) goto LAB_1400c9bc4;
          }
          piVar74 = (int *)((longlong)w.light_reciever_values + lVar133 + uVar123 * lVar110 * 4);
          do {
            in_ZMM2 = ZEXT1664(CONCAT124(in_ZMM5._4_12_,(float)*piVar74));
            auVar198._4_4_ = auVar198._4_4_ + (float)*piVar74;
            piVar74 = piVar74 + lVar110;
            uVar109 = uVar109 - 1;
          } while (uVar109 != 0);
        }
LAB_1400c9bc4:
        (w.light_reciever_cells[lVar163]->field53_0x1240).detected_light =
             auVar198._4_4_ * 3.0517578e-05 +
             (w.light_reciever_cells[lVar163]->field53_0x1240).detected_light;
        lVar163 = lVar163 + 1;
        lVar133 = lVar133 + 4;
      } while (lVar163 < w.n_light_recievers);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("serial cell update 1");
    if (w.n_cells < 1) {
      auVar324 = ZEXT864(0);
      auVar198._4_4_ = 0.0;
    }
    else {
      uVar69 = w.n_cells + 1;
      auVar327 = ZEXT1264(ZEXT812(0));
      fVar208 = 0.01;
      auVar357 = ZEXT464(0x38d1b717);
      auVar332 = ZEXT464(0x3f800000);
      auVar336 = ZEXT464(0xbf000000);
      fVar171 = 0.1;
      auVar346 = ZEXT464(0x44700000);
      auVar309 = ZEXT1264(ZEXT812(0));
      auVar324 = ZEXT864(0);
      auVar198._4_4_ = 0.0;
      pmVar117 = materials_list;
      uVar122 = w.field58_0x3a60.cells;
      do {
        uVar107 = uVar69 - 2 >> 4;
        uVar166 = uVar69 - 2 & 0xf;
        uVar96 = (((cell *)(uVar122 + (ulonglong)uVar107 * 0x2080))->field1_0x40).body_id_packed
                 [uVar166];
        fVar334 = auVar327._0_4_;
        fVar172 = auVar357._0_4_;
        auVar248 = auVar332._0_16_;
        if (((int)uVar96 < 1) ||
           (uVar151 = w.bodies.n_max_elements + 0x7fffffffU & uVar96,
           w.bodies.field0_0x0.index_table[uVar151].id != uVar96)) {
          pbVar93 = (body *)0x0;
          pcVar84 = (cell *)((((cell *)(uVar122 + (ulonglong)uVar107 * 0x2080))->field0_0x0).
                             id_packed + uVar166);
          fVar245 = (pcVar84->field18_0x840).burn_damage;
        }
        else {
          pbVar93 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar151].index;
          pcVar84 = (cell *)((((cell *)(uVar122 + (ulonglong)uVar107 * 0x2080))->field0_0x0).
                             id_packed + uVar166);
          fVar245 = (pcVar84->field18_0x840).burn_damage;
        }
        if (fVar334 < fVar245) {
          fVar303 = w.camera_pos.field0_0x0._s_0.x - (pcVar84->field32_0xbc0).x;
          fVar333 = w.camera_pos.field0_0x0._s_0.y - (pcVar84->field33_0xc00).y;
          fVar333 = fVar333 * fVar333;
          in_ZMM2 = ZEXT464((uint)fVar333);
          auVar219 = vmaxss_avx(ZEXT416((uint)(fVar172 * (fVar333 + fVar303 * fVar303 + fVar334))),
                                auVar248);
          auVar324 = ZEXT464((uint)(auVar324._0_4_ + (fVar208 * fVar245) / auVar219._0_4_));
        }
        if (((pcVar84->field14_0x740).health < fVar334) ||
           ((*(byte *)((longlong)&pcVar84->field44_0x1000 + 1) & 0x20) != 0)) {
          if ((pbVar93 != (body *)0x0) && (fVar334 < (pcVar84->field15_0x780).damage)) {
            auVar219 = vminss_avx(auVar346._0_16_,
                                  ZEXT416((uint)(auVar346._0_4_ *
                                                 fVar171 * pmVar117[(((cell *)(uVar122 +
                                                                              (ulonglong)uVar107 *
                                                                              0x2080))->field3_0xc0)
                                                                    .material_index_packed[uVar166]]
                                                           .max_health + pbVar93->damage_timer)));
            auVar219 = vmaxss_avx(auVar327._0_16_,auVar219);
            pbVar93->damage_timer = auVar219._0_4_;
          }
          if ((pcVar84->field11_0x680).temperature < auVar336._0_4_) {
            fVar245 = w.camera_pos.field0_0x0._s_0.x - (pcVar84->field32_0xbc0).x;
            fVar333 = w.camera_pos.field0_0x0._s_0.y - (pcVar84->field33_0xc00).y;
            auVar248 = vmaxss_avx(ZEXT416((uint)(fVar172 *
                                                (fVar333 * fVar333 + fVar245 * fVar245 + fVar334))),
                                  auVar248);
            auVar198._4_4_ = auVar198._4_4_ + fVar171 / auVar248._0_4_;
          }
          else if (fVar334 < (pcVar84->field15_0x780).damage) {
            fVar245 = w.camera_pos.field0_0x0._s_0.x - (pcVar84->field32_0xbc0).x;
            fVar333 = w.camera_pos.field0_0x0._s_0.y - (pcVar84->field33_0xc00).y;
            auVar248 = vmaxss_avx(ZEXT416((uint)(fVar172 *
                                                (fVar333 * fVar333 + fVar245 * fVar245 + fVar334))),
                                  auVar248);
            auVar309 = ZEXT464((uint)(auVar309._0_4_ + fVar171 / auVar248._0_4_));
          }
          delete_cell(pcVar84,false);
          pmVar117 = materials_list;
          uVar122 = w.field58_0x3a60.cells;
        }
        uVar69 = uVar69 - 1;
      } while (1 < uVar69);
      if (0.0 < auVar309._0_4_) {
        uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
        uVar69 = uVar69 >> 0xf ^ uVar69;
        uVar96 = uVar69 * -0x63d2f291;
        uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
        uVar96 = uVar96 >> 0x10 ^ uVar96;
        local_f8->visual_seed = uVar96;
        pqVar63 = ac.queued_sounds;
        if ((ac.initialized == true) && (0 < sounds.squish.n_samples)) {
          auVar248 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),auVar309._0_16_);
          if ((0.001 <= auVar248._0_4_) &&
             ((sounds.squish.data != (short *)0x0 &&
              (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
            uVar69 = uVar69 * -0x7b935975;
            auVar216._0_4_ = (float)uVar96;
            auVar216._4_12_ = in_ZMM5._4_12_;
            auVar253._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
            auVar253._4_12_ = in_ZMM5._4_12_;
            in_ZMM2 = ZEXT1664(auVar253);
            auVar219 = vinsertps_avx(auVar253,auVar216,0x10);
            auVar217._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
            auVar217._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 24.0 + -12.0;
            auVar217._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
            auVar217._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
            uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
            ac.queued_sounds[(int)uVar69].sound = &sounds.squish;
            pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
            uVar122 = vmovlps_avx(auVar217);
            pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
            pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
            *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
            *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
            LOCK();
            ac.last_queued_sound = ac.last_queued_sound + 1;
            UNLOCK();
          }
        }
      }
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("delete merged bones");
    auVar248 = in_ZMM2._0_16_;
    lVar133 = (longlong)w.bones.n_elements;
    if (0 < lVar133) {
      uVar109 = lVar133 + 1;
      lVar133 = lVar133 * 0x50 + -8;
      uVar122 = w.bones.field3_0x20.elements;
      do {
        uVar102 = w.bones.field0_0x0.index_table;
        if (((*(int *)((longlong)&((bone *)uVar122)->id + lVar133) != 0) ||
            (*(int *)(uVar122 + lVar133 + -0x1c) == 0)) &&
           (auVar248._4_4_ = *(int *)(uVar122 + lVar133 + -0x48),
           uVar123 = (longlong)w.bones.n_max_elements - 1U & (longlong)auVar248._4_4_,
           w.bones.field0_0x0.index_table[uVar123].id == auVar248._4_4_)) {
          w.bones.field0_0x0.index_table[uVar123].id = 0;
          uVar122 = w.bones.field3_0x20.elements;
          lVar163 = (longlong)w.bones.n_elements + -1;
          w.bones.n_elements = (int)lVar163;
          auVar248._4_4_ = ((id_index *)(uVar102 + uVar123 * 8))->index;
          pbVar103 = w.bones.field3_0x20.elements + lVar163;
          iVar136 = pbVar103->id;
          fVar171 = pbVar103->mass;
          fVar334 = pbVar103->inertia;
          fVar172 = pbVar103->spacing;
          rVar112.field0_0x0 = (pbVar103->center_of_mass).field0_0x0;
          rVar90.field0_0x0 = (pbVar103->center_of_mass_dot).field0_0x0;
          pbVar103 = w.bones.field3_0x20.elements + lVar163;
          rVar77.field0_0x0 = (pbVar103->orientation).field0_0x0;
          fVar208 = pbVar103->omega;
          iVar70 = pbVar103->n_cells;
          rVar139.field0_0x0 = (pbVar103->plan_center).field0_0x0;
          pcVar84 = pbVar103->first_cell;
          pbVar103 = w.bones.field3_0x20.elements + lVar163;
          auVar27._0_8_ = pbVar103->plan_center;
          auVar27._8_8_ = pbVar103->first_cell;
          auVar27._16_8_ = pbVar103->last_cell;
          auVar27._24_4_ = pbVar103->merge_id;
          auVar27._28_4_ = *(undefined4 *)&pbVar103->field_0x4c;
          in_ZMM2 = ZEXT3264(auVar27);
          pbVar103 = w.bones.field3_0x20.elements + auVar248._4_4_;
          pbVar103->plan_center = (real_2)auVar27._0_8_;
          pbVar103->first_cell = (cell *)auVar27._8_8_;
          pbVar103->last_cell = (cell *)auVar27._16_8_;
          pbVar103->merge_id = auVar27._24_4_;
          *(undefined4 *)&pbVar103->field_0x4c = auVar27._28_4_;
          pbVar103 = (bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50);
          pbVar103->orientation = (real_2)rVar77.field0_0x0;
          pbVar103->omega = fVar208;
          pbVar103->n_cells = iVar70;
          pbVar103->plan_center = (real_2)rVar139.field0_0x0;
          pbVar103->first_cell = pcVar84;
          pbVar103 = (bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50);
          pbVar103->id = iVar136;
          pbVar103->mass = fVar171;
          pbVar103->inertia = fVar334;
          pbVar103->spacing = fVar172;
          pbVar103->center_of_mass = (real_2)rVar112.field0_0x0;
          pbVar103->center_of_mass_dot = (real_2)rVar90.field0_0x0;
          auVar248._4_4_ = ((id_index *)(uVar102 + uVar123 * 8))->index;
          uVar123 = (longlong)w.bones.n_max_elements - 1U &
                    (longlong)w.bones.field3_0x20.elements[auVar248._4_4_].id;
          uVar122 = w.bones.field3_0x20.elements;
          if (w.bones.field0_0x0.index_table[uVar123].id ==
              w.bones.field3_0x20.elements[auVar248._4_4_].id) {
            w.bones.field0_0x0.index_table[uVar123].index = auVar248._4_4_;
            uVar122 = w.bones.field3_0x20.elements;
          }
        }
        auVar248 = in_ZMM2._0_16_;
        uVar109 = uVar109 - 1;
        lVar133 = lVar133 + -0x50;
      } while (1 < uVar109);
    }
    in_ZMM2 = ZEXT1664(auVar248);
    in_ZMM5 = ZEXT1664(in_ZMM5._0_16_);
    auVar324 = ZEXT1664(auVar324._0_16_);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  pcVar72 = local_f8;
  local_28c = auVar198._4_4_;
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  begin_trace_stage("parallel cell update 2");
  local_348.string[0] = 'S';
  local_348.string[1] = 'M';
  local_348.string[2] = 'A';
  local_348.string[3] = 'L';
  local_348.string[4] = 'L';
  local_348.string[5] = 'E';
  local_348.string[6] = 'R';
  local_348.string[7] = '\0';
  local_348._s_0.hi = 0;
  iVar136 = get_mutation_index(&local_348);
  peVar165 = (explosion_t *)0x0;
  local_338._s_0.lo = 0x524547474942;
  local_338._s_0.hi = 0;
  auVar248._4_4_ = (pcVar72->field0_0x0)._s_0.lane_index;
  iVar70 = ((pcVar72->field0_0x0)._s_0.group)->n_lanes;
  uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
  uVar123 = uVar109 & 0xffffffff;
  uVar69 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
  local_218 = 0.0;
  local_120 = (creature_spawner *)CONCAT44(local_120._4_4_,auVar324._0_4_);
  if ((int)uVar109 < (int)uVar69) {
    auVar248._4_4_ = get_mutation_index(&local_338);
    peVar165 = (explosion_t *)(longlong)iVar136;
    auVar309 = ZEXT1264(ZEXT812(0));
    auVar327 = ZEXT464(0x3f800000);
    auVar332 = ZEXT464(0x3f19999a);
    auVar336 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
    auVar346 = ZEXT464(0xbf800000);
    auVar357 = ZEXT464(0x3e99999a);
    auVar350 = ZEXT464(0x3dcccccd);
    local_218 = 0.0;
    local_214 = 0.0;
    do {
      uVar122 = w.field58_0x3a60.cells;
      pmVar117 = materials_list;
      uVar107 = (uint)uVar123;
      iVar70 = (int)uVar107 >> 4;
      uVar109 = (ulonglong)(uVar107 & 0xf);
      uVar96 = w.field58_0x3a60.cells[iVar70].field1_0x40.body_id_packed[uVar109];
      if (((int)uVar96 < 1) ||
         (uVar166 = w.bodies.n_max_elements + 0x7fffffffU & uVar96,
         w.bodies.field0_0x0.index_table[uVar166].id != uVar96)) {
        pbVar93 = (body *)0x0;
      }
      else {
        pbVar93 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar166].index;
      }
      iVar136 = w.field58_0x3a60.cells[iVar70].field3_0xc0.material_index_packed[uVar109];
      auVar198._4_4_ = w.field58_0x3a60.cells[iVar70].field13_0x700.maturity_packed[uVar109];
      fVar208 = auVar327._0_4_;
      auVar317 = auVar327._0_16_;
      auVar219 = auVar309._0_16_;
      if (auVar198._4_4_ < fVar208) {
        fVar171 = materials_list[iVar136].base_cost;
        if (pbVar93 == (body *)0x0) {
          auVar255._0_4_ = (float)w.em.cell_item_counts[iVar136];
          auVar255._4_8_ = SUB128(ZEXT812(0),4);
          auVar255._12_4_ = 0;
          auVar258 = vmaxss_avx(auVar317,auVar255);
          fVar171 = fVar171 / auVar258._0_4_;
          auVar258 = ZEXT416((uint)materials_list[iVar136].growth_rate);
        }
        else {
          if (w.field55_0x3a28.body_auxiliary_data
              [(longlong)mut_random_costs_index +
               (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
               ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >> 4)] != '\0') {
            fVar171 = materials_list[iVar136].random_cost;
          }
          fVar171 = fVar171 * (fVar208 - pbVar93->cost_discount);
          if (pbVar93->id == w.selected_body) {
            auVar254._0_4_ = (float)w.em.cell_item_counts[iVar136];
            auVar254._4_8_ = SUB128(ZEXT812(0),4);
            auVar254._12_4_ = 0;
            auVar258 = vmaxss_avx(auVar317,auVar254);
            fVar171 = fVar171 / auVar258._0_4_;
          }
          auVar258 = ZEXT416((uint)materials_list[iVar136].growth_rate);
          if (pbVar93->regen_boost != 0) {
            auVar258 = vmaxss_avx(ZEXT416((uint)materials_list[iVar136].growth_rate),
                                  ZEXT416(0x447a0000));
          }
        }
        fVar334 = w.field58_0x3a60.cells[iVar70].field14_0x740.health_packed[uVar109];
        auVar362 = vmaxss_avx(ZEXT416((uint)(fVar208 - auVar198._4_4_)),auVar219);
        auVar258 = vminss_avx(auVar258,auVar362);
        auVar258 = vminss_avx(auVar258,ZEXT416((uint)(fVar334 / fVar171)));
        fVar172 = auVar198._4_4_ + auVar258._0_4_;
        w.field58_0x3a60.cells[iVar70].field13_0x700.maturity_packed[uVar109] = fVar172;
        if (fVar208 <= fVar172) {
          fVar172 = w.camera_pos.field0_0x0._s_0.x -
                    (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field32_0xbc0).x_packed
                    [uVar109];
          fVar245 = w.camera_pos.field0_0x0._s_0.y -
                    (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field33_0xc00).y_packed
                    [uVar109];
          auVar362 = vmaxss_avx(ZEXT416((uint)((fVar245 * fVar245 +
                                               fVar172 * fVar172 + auVar309._0_4_) * 0.0001)),
                                auVar317);
          local_214 = local_214 + fVar208 / auVar362._0_4_;
          (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field13_0x700).maturity_packed[uVar109]
               = 1.0;
          auVar362 = auVar317;
LAB_1400ca678:
          auVar198._4_4_ = auVar198._4_4_ / auVar362._0_4_;
          (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field34_0xc40).x_dot_packed[uVar109] =
               auVar198._4_4_ *
               (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field34_0xc40).x_dot_packed
               [uVar109];
          (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field35_0xc80).y_dot_packed[uVar109] =
               auVar198._4_4_ *
               (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field35_0xc80).y_dot_packed
               [uVar109];
          fVar172 = auVar362._0_4_;
        }
        else {
          auVar362 = ZEXT416((uint)fVar172);
          if (auVar309._0_4_ < fVar172) goto LAB_1400ca678;
        }
        auVar198._4_4_ = fVar172;
        auVar258 = vmaxss_avx(ZEXT416((uint)(fVar334 - auVar258._0_4_ * fVar171)),auVar219);
        (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field14_0x740).health_packed[uVar109] =
             auVar258._0_4_;
      }
      fVar208 = ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x60];
      auVar256._4_4_ = fVar208;
      auVar256._0_4_ = fVar208;
      auVar256._8_4_ = fVar208;
      auVar256._12_4_ = fVar208;
      fVar171 = auVar332._0_4_ *
                (fVar208 - ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109]);
      auVar258 = vcmpss_avx(auVar219,ZEXT416((uint)fVar171),2);
      auVar294 = auVar346._0_16_;
      auVar362 = vblendvps_avx(auVar294,auVar317,auVar258);
      auVar178 = auVar336._0_16_;
      auVar258 = vandps_avx(auVar178,ZEXT416((uint)fVar171));
      auVar258 = vcmpss_avx(auVar317,auVar258,1);
      auVar258 = vblendvps_avx(ZEXT416((uint)fVar171),auVar362,auVar258);
      fVar171 = ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x10];
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109] =
           ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109] + auVar258._0_4_;
      fVar208 = auVar332._0_4_ * (fVar208 - fVar171);
      auVar258 = vcmpss_avx(auVar219,ZEXT416((uint)fVar208),2);
      auVar362 = vblendvps_avx(auVar294,auVar317,auVar258);
      auVar258 = vandps_avx(auVar178,ZEXT416((uint)fVar208));
      auVar258 = vcmpss_avx(auVar317,auVar258,1);
      auVar258 = vblendvps_avx(ZEXT416((uint)fVar208),auVar362,auVar258);
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x10] =
           fVar171 + auVar258._0_4_;
      fVar208 = ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x30];
      fVar171 = ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x40];
      fVar334 = ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x50];
      auVar258 = vinsertps_avx(ZEXT416((uint)fVar334),ZEXT416((uint)fVar171),0x10);
      auVar258 = vinsertps_avx(auVar258,ZEXT416((uint)fVar208),0x20);
      auVar258 = vinsertps_avx(auVar258,ZEXT416((uint)((cell *)(uVar122 + (longlong)iVar70 * 0x2080)
                                                      )->spacing[uVar109 + 0x20]),0x30);
      auVar258 = vsubps_avx(auVar256,auVar258);
      auVar257._0_4_ = auVar258._0_4_ * 0.6;
      auVar257._4_4_ = auVar258._4_4_ * 0.6;
      auVar257._8_4_ = auVar258._8_4_ * 0.6;
      auVar257._12_4_ = auVar258._12_4_ * 0.6;
      auVar362 = vshufps_avx(auVar257,auVar257,0xff);
      auVar258 = vandps_avx(auVar178,auVar257);
      auVar361._8_4_ = 0x3f800000;
      auVar361._0_8_ = 0x3f8000003f800000;
      auVar361._12_4_ = 0x3f800000;
      auVar258 = vcmpps_avx(auVar361,auVar258,1);
      uVar96 = vmovmskps_avx(auVar258);
      if ((uVar96 & 8) != 0) {
        auVar258 = vcmpss_avx(auVar219,auVar362,2);
        auVar362 = vblendvps_avx(auVar294,auVar317,auVar258);
      }
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x20] =
           auVar362._0_4_ + ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x20]
      ;
      auVar258 = vshufpd_avx(auVar257,auVar257,1);
      if ((uVar96 & 4) != 0) {
        auVar258 = vcmpss_avx(auVar219,auVar258,2);
        auVar258 = vblendvps_avx(auVar294,auVar317,auVar258);
      }
      in_ZMM5 = ZEXT1664(auVar258);
      auVar324 = ZEXT464((uint)local_120._0_4_);
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x30] =
           fVar208 + auVar258._0_4_;
      auVar258 = vmovshdup_avx(auVar257);
      if ((uVar96 & 2) != 0) {
        auVar258 = vcmpss_avx(auVar219,auVar258,2);
        auVar258 = vblendvps_avx(auVar294,auVar317,auVar258);
      }
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x40] =
           fVar171 + auVar258._0_4_;
      if ((uVar96 & 1) != 0) {
        auVar219 = vcmpss_avx(auVar219,auVar257,2);
        auVar257 = vblendvps_avx(auVar294,auVar317,auVar219);
      }
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x50] =
           fVar334 + auVar257._0_4_;
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 - 0x10] = 1.0;
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field27_0xa80).leeching_packed[uVar109] =
           pmVar117[iVar136].leeching;
      fVar208 = auVar357._0_4_;
      if (pbVar93 != (body *)0x0) {
        lVar133 = (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
                  ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >> 4);
        auVar198._4_4_ =
             exp2f((float)((int)(char)w.field55_0x3a28.body_auxiliary_data[auVar248._4_4_ + lVar133]
                          - (int)(char)w.field55_0x3a28.body_auxiliary_data
                                       [(longlong)((longlong)peVar165 + lVar133)]));
        auVar219 = vminss_avx(SUB6416(ZEXT464(0x41f00000),0),
                              ZEXT416((uint)(auVar198._4_4_ *
                                            ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing
                                            [uVar109 - 0x10])));
        auVar219 = vmaxss_avx(SUB6416(ZEXT464(0x3d088889),0),auVar219);
        ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 - 0x10] = auVar219._0_4_;
        auVar198._4_4_ =
             (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field13_0x700).maturity_packed
             [uVar109];
        fVar208 = auVar357._0_4_ * auVar219._0_4_;
      }
      fVar208 = ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 - 0x20] * 0.7 +
                fVar208;
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 - 0x20] = fVar208;
      auVar219 = vmaxss_avx(ZEXT416((uint)(auVar198._4_4_ * auVar198._4_4_ *
                                          pmVar117[iVar136].density)),auVar350._0_16_);
      in_ZMM2 = ZEXT1664(auVar219);
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field31_0xb80).mass_packed[uVar109] =
           auVar219._0_4_;
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x60] = fVar208;
      if (auVar327._0_4_ <= auVar198._4_4_) {
        auVar198._4_4_ =
             ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x80] * 0.9;
        in_ZMM2 = ZEXT464((uint)auVar198._4_4_);
        ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x80] =
             auVar198._4_4_ + auVar350._0_4_ * pmVar117[iVar136].light_radius;
      }
      auVar198._4_4_ = auVar309._0_4_;
      if (auVar198._4_4_ <
          (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field21_0x900).dealt_packed[uVar109]) {
        fVar171 = w.camera_pos.field0_0x0._s_0.x -
                  (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field32_0xbc0).x_packed[uVar109]
        ;
        fVar334 = w.camera_pos.field0_0x0._s_0.y -
                  (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field33_0xc00).y_packed[uVar109]
        ;
        auVar219 = vmaxss_avx(ZEXT416((uint)((fVar334 * fVar334 + fVar171 * fVar171 + auVar198._4_4_
                                             ) * 0.0001)),auVar327._0_16_);
        local_218 = local_218 +
                    ((((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field21_0x900).dealt_packed
                     [uVar109] * 0.2) / auVar219._0_4_;
        in_ZMM2 = ZEXT464((uint)local_218);
      }
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field15_0x780).damage_packed[uVar109] = 0.0;
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field16_0x7c0).bloodless_damage_packed
      [uVar109] = 0.0;
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field17_0x800).screenshakeless_damage_packed
      [uVar109] = 0.0;
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field18_0x840).burn_damage_packed[uVar109] =
           0.0;
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field19_0x880).ice_damage_packed[uVar109] =
           0.0;
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field21_0x900).dealt_packed[uVar109] = 0.0;
      uVar96 = pmVar117[iVar136].field14_0x4c.flags;
      fVar171 = ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x70];
      fVar334 = (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field48_0x1100).
                stickyness_timer_packed[uVar109] + -1.0;
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field48_0x1100).stickyness_timer_packed
      [uVar109] = fVar334;
      (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field49_0x1140).wall_force_packed[uVar109] =
           0.0;
      ((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->spacing[uVar109 + 0x70] =
           (float)((uint)fVar171 & 0xfffd77bf | (uVar96 & 0x20) << 6);
      if (fVar334 < auVar198._4_4_) {
        (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field48_0x1100).stickyness_timer_packed
        [uVar109] = 0.0;
      }
      auVar219 = vmaxss_avx(ZEXT416(*(uint *)((longlong)
                                              &((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->
                                               field47_0x10c0 + uVar109 * 4)),auVar309._0_16_);
      *(int *)((longlong)&((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field47_0x10c0 +
              uVar109 * 4) = auVar219._0_4_;
      if ((w.hovered == 0) &&
         (fVar334 = (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field32_0xbc0).x_packed
                    [uVar109] - (local_198->cursor_x).field0_0x0._s_0.x,
         fVar171 = (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field33_0xc00).y_packed
                   [uVar109] - (local_198->cursor_x).field0_0x0._s_0.y, fVar171 = fVar171 * fVar171,
         in_ZMM2 = ZEXT464((uint)fVar171),
         fVar171 + fVar334 * fVar334 + auVar198._4_4_ <= fVar208 * fVar208 * 1.3333334)) {
        w.hovered = (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field0_0x0).id_packed[uVar109]
        ;
      }
      uVar123 = (ulonglong)(uVar107 + 1);
    } while (uVar69 != uVar107 + 1);
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  begin_trace_stage("sort cells");
  sort_cells(subgrid_ends);
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  if (((local_f8->field0_0x0)._s_0.lane_index == 0) &&
     (((local_198->pressed_buttons[0] | local_198->buttons[0]) & 2) == 0)) {
    w.selected = 0;
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  begin_trace_stage("clear static body stats");
  uVar122 = w.bodies.field3_0x20.elements;
  iVar70 = (local_f8->field0_0x0)._s_0.lane_index;
  iVar136 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
  iVar71 = (w.bodies.n_elements * iVar70) / iVar136;
  auVar248._4_4_ = iVar70 + 1;
  iVar97 = (w.bodies.n_elements * auVar248._4_4_) / iVar136;
  if (iVar71 < iVar97) {
    lVar163 = (longlong)iVar71;
    lVar133 = lVar163;
    if ((iVar97 - iVar71 & 1U) != 0) {
      if (w.bodies.field3_0x20.elements[lVar163].loaded != 0) {
        pbVar93 = w.bodies.field3_0x20.elements + lVar163;
        uVar102 = vmovlps_avx(SUB6416(ZEXT464(0x447a0000),0));
        pbVar93->radius = (float)(int)uVar102;
        pbVar93->mass = (float)(int)((ulonglong)uVar102 >> 0x20);
        ((body *)(uVar122 + lVar163 * 0x2d0))->first_cell = (cell *)0x0;
        ((body *)(uVar122 + lVar163 * 0x2d0))->last_cell = (cell *)0x0;
      }
      lVar133 = lVar163 + 1;
      uVar122 = w.bodies.field3_0x20.elements;
    }
    w.bodies.field3_0x20.elements = (body *)uVar122;
    if ((longlong)iVar97 + -1 != lVar163) {
      lVar163 = lVar133 * 0x2d0;
      lVar133 = iVar97 - lVar133;
      do {
        if (((&((body *)uVar122)->field_0x98)[lVar163] & 1) == 0) {
          bVar29 = (&((body *)(uVar122 + 0x2d0))->field_0x98)[lVar163];
        }
        else {
          uVar102 = vmovlps_avx(SUB6416(ZEXT464(0x447a0000),0));
          *(undefined8 *)((longlong)&((body *)uVar122)->radius + lVar163) = uVar102;
          *(undefined1 (*) [16])((longlong)&((body *)uVar122)->first_cell + lVar163) = ZEXT816(0);
          bVar29 = (&w.bodies.field3_0x20.elements[1].field_0x98)[lVar163];
          uVar122 = w.bodies.field3_0x20.elements;
        }
        if ((bVar29 & 1) != 0) {
          uVar102 = vmovlps_avx(SUB6416(ZEXT464(0x447a0000),0));
          *(undefined8 *)((longlong)&((body *)(uVar122 + 0x2d0))->radius + lVar163) = uVar102;
          *(undefined1 (*) [16])((longlong)&((body *)(uVar122 + 0x2d0))->first_cell + lVar163) =
               ZEXT816(0);
          uVar122 = w.bodies.field3_0x20.elements;
        }
        lVar163 = lVar163 + 0x5a0;
        lVar133 = lVar133 + -2;
      } while (lVar133 != 0);
    }
    iVar70 = (local_f8->field0_0x0)._s_0.lane_index;
    iVar136 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
    auVar248._4_4_ = iVar70 + 1;
  }
  uVar158 = (real_2_u_0)0x0;
  iVar70 = (iVar70 * w.bones.n_elements) / iVar136;
  iVar136 = (auVar248._4_4_ * w.bones.n_elements) / iVar136;
  if (iVar70 < iVar136) {
    lVar163 = (longlong)iVar70;
    uVar69 = iVar136 - iVar70 & 3;
    lVar133 = lVar163;
    if (uVar69 != 0) {
      lVar110 = lVar163 * 0x50;
      lVar133 = 0;
      auVar187._0_12_ = ZEXT812(0);
      auVar187._12_4_ = 0;
      do {
        uVar122 = w.bones.field3_0x20.elements;
        *(undefined4 *)((longlong)&(w.bones.field3_0x20.elements)->mass + lVar110) = 0;
        *(undefined4 *)((longlong)&((bone *)uVar122)->spacing + lVar110) = 0;
        *(undefined1 (*) [16])((longlong)&((bone *)uVar122)->n_cells + lVar110) = auVar187;
        *(undefined1 (*) [16])((longlong)&((bone *)uVar122)->first_cell + lVar110) = auVar187;
        lVar133 = lVar133 + -1;
        lVar110 = lVar110 + 0x50;
      } while (-lVar133 != (ulonglong)uVar69);
      lVar133 = lVar163 - lVar133;
    }
    if ((ulonglong)(lVar163 - iVar136) < 0xfffffffffffffffd) {
      lVar163 = iVar136 - lVar133;
      lVar133 = lVar133 * 0x50;
      auVar188._0_12_ = ZEXT812(0);
      auVar188._12_4_ = 0;
      do {
        uVar122 = w.bones.field3_0x20.elements;
        *(undefined4 *)((longlong)&(w.bones.field3_0x20.elements)->mass + lVar133) = 0;
        *(undefined4 *)((longlong)&((bone *)uVar122)->spacing + lVar133) = 0;
        *(undefined1 (*) [16])((longlong)&((bone *)uVar122)->n_cells + lVar133) = auVar188;
        *(undefined1 (*) [16])((longlong)&((bone *)uVar122)->first_cell + lVar133) = auVar188;
        uVar122 = w.bones.field3_0x20.elements;
        *(undefined4 *)((longlong)&w.bones.field3_0x20.elements[1].mass + lVar133) = 0;
        *(undefined4 *)((longlong)&((bone *)(uVar122 + 0x50))->spacing + lVar133) = 0;
        *(undefined1 (*) [16])((longlong)&((bone *)(uVar122 + 0x50))->n_cells + lVar133) = auVar188;
        *(undefined1 (*) [16])((longlong)&((bone *)(uVar122 + 0x50))->first_cell + lVar133) =
             auVar188;
        uVar122 = w.bones.field3_0x20.elements;
        *(undefined4 *)((longlong)&w.bones.field3_0x20.elements[2].mass + lVar133) = 0;
        *(undefined4 *)((longlong)&((bone *)(uVar122 + 0xa0))->spacing + lVar133) = 0;
        *(undefined1 (*) [16])((longlong)&((bone *)(uVar122 + 0xa0))->n_cells + lVar133) = auVar188;
        *(undefined1 (*) [16])((longlong)&((bone *)(uVar122 + 0xa0))->first_cell + lVar133) =
             auVar188;
        uVar122 = w.bones.field3_0x20.elements;
        *(undefined4 *)((longlong)&w.bones.field3_0x20.elements[3].mass + lVar133) = 0;
        *(undefined4 *)((longlong)&((bone *)(uVar122 + 0xf0))->spacing + lVar133) = 0;
        *(undefined1 (*) [16])((longlong)&((bone *)(uVar122 + 0xf0))->n_cells + lVar133) = auVar188;
        *(undefined1 (*) [16])((longlong)&((bone *)(uVar122 + 0xf0))->first_cell + lVar133) =
             auVar188;
        lVar133 = lVar133 + 0x140;
        lVar163 = lVar163 + -4;
      } while (lVar163 != 0);
    }
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("calculate static body stats from cells");
    if (0 < w.n_cells) {
      uVar69 = 0;
      auVar218._8_4_ = 0x80000000;
      auVar218._0_8_ = 0x8000000080000000;
      auVar218._12_4_ = 0x80000000;
      in_ZMM2 = ZEXT1264(ZEXT812(0));
      in_ZMM5 = ZEXT464(0x3f800000);
      do {
        uVar122 = w.bodies.field3_0x20.elements;
        pcVar84 = (cell *)(w.field58_0x3a60.cells[uVar69 >> 4].field0_0x0.id_packed + (uVar69 & 0xf)
                          );
        uVar96 = w.field58_0x3a60.cells[uVar69 >> 4].field1_0x40.body_id_packed[uVar69 & 0xf];
        if ((((int)uVar96 < 1) ||
            (uVar107 = w.bodies.n_max_elements + 0x7fffffffU & uVar96,
            w.bodies.field0_0x0.index_table[uVar107].id != uVar96)) ||
           (w.bodies.field3_0x20.elements == (body *)0x0)) {
LAB_1400cb050:
          puVar92 = (undefined1 *)((longlong)&pcVar84->field44_0x1000 + 1);
          *puVar92 = *puVar92 & 0xbf;
          uVar96 = (pcVar84->field2_0x80).bone_id;
          uVar122 = w.bones.field3_0x20.elements;
        }
        else {
          auVar248._4_4_ = w.bodies.field0_0x0.index_table[uVar107].index;
          if ((*(byte *)&pcVar84->field44_0x1000 & 0x3f) != 0) {
            auVar198._4_4_ =
                 (pcVar84->field32_0xbc0).x -
                 w.bodies.field3_0x20.elements[auVar248._4_4_].cost_centroid.field0_0x0._s_0.x;
            fVar208 = (pcVar84->field33_0xc00).y -
                      w.bodies.field3_0x20.elements[auVar248._4_4_].cost_centroid.field0_0x0._s_0.y;
            auVar219 = ZEXT416((uint)(fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + 0.0));
            auVar219 = vsqrtss_avx(auVar219,auVar219);
            auVar219 = vmaxss_avx(ZEXT416((uint)(auVar219._0_4_ + (pcVar84->field40_0xdc0).r)),
                                  SUB6416(ZEXT464(0x40000000),0));
            auVar219 = vminss_avx(ZEXT416((uint)w.bodies.field3_0x20.elements[auVar248._4_4_].radius
                                         ),auVar219);
            w.bodies.field3_0x20.elements[auVar248._4_4_].radius = auVar219._0_4_;
          }
          auVar198._4_4_ =
               (pcVar84->field31_0xb80).mass +
               ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->mass;
          ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->mass = auVar198._4_4_;
          ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->invmass = 1.0 / auVar198._4_4_;
          *(undefined8 *)
           (((ulonglong)pcVar84 & 0xffffffffffffffc0) + 0x1620 +
           (ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0) = 0;
          pcVar33 = ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->last_cell;
          if (pcVar33 != (cell *)0x0) {
            *(cell **)(((ulonglong)pcVar33 & 0xffffffffffffffc0) + 0x1620 +
                      (ulonglong)((uint)((ulonglong)pcVar33 >> 2) & 0xf) * 0xb0) = pcVar84;
            ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->last_cell = pcVar84;
            goto LAB_1400cb050;
          }
          ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->last_cell = pcVar84;
          ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->first_cell = pcVar84;
          puVar92 = (undefined1 *)((longlong)&pcVar84->field44_0x1000 + 1);
          *puVar92 = *puVar92 & 0xbf;
          uVar96 = (pcVar84->field2_0x80).bone_id;
          uVar122 = w.bones.field3_0x20.elements;
        }
        w.bones.field3_0x20.elements = (bone *)uVar122;
        if (((0 < (int)uVar96) &&
            (uVar107 = w.bones.n_max_elements + 0x7fffffffU & uVar96,
            w.bones.field0_0x0.index_table[uVar107].id == uVar96)) &&
           ((bone *)uVar122 != (bone *)0x0)) {
          auVar248._4_4_ = (w.bones.field0_0x0.index_table + (ulonglong)uVar107 * 8)->index;
          ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->n_cells =
               ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->n_cells + 1;
          auVar198._4_4_ = (pcVar84->field31_0xb80).mass * (pcVar84->field55_0x12c0).rigidity;
          ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->mass =
               auVar198._4_4_ + ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->mass;
          ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->spacing =
               auVar198._4_4_ * (pcVar84->field43_0xfc0).target_spacing +
               ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->spacing;
          lVar133 = (ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0;
          uVar102 = *(undefined8 *)(((ulonglong)pcVar84 & 0xffffffffffffffc0) + 0x1580 + lVar133);
          auVar328._0_4_ = (float)(int)uVar102;
          auVar328._4_12_ = auVar324._4_12_;
          fVar208 = (float)(int)((ulonglong)uVar102 >> 0x20);
          auVar219 = vandps_avx(auVar328,auVar218);
          uVar158._4_4_ =
               (fVar208 * 0.4330127 + auVar219._0_4_ + 0.0) * auVar198._4_4_ +
               (((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->plan_center).field0_0x0._s_0.
               y;
          uVar158._0_4_ =
               (fVar208 * 0.25 + auVar328._0_4_ * 0.5 + 0.0) * auVar198._4_4_ +
               (((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->plan_center).field0_0x0._s_0.
               x;
          (((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->plan_center).field0_0x0 =
               (real_2_u_0)uVar158;
          *(undefined8 *)(((ulonglong)pcVar84 & 0xffffffffffffffc0) + 0x1628 + lVar133) = 0;
          pcVar33 = ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->last_cell;
          if (pcVar33 == (cell *)0x0) {
            ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->last_cell = pcVar84;
            ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->first_cell = pcVar84;
          }
          else {
            *(cell **)(((ulonglong)pcVar33 & 0xffffffffffffffc0) + 0x1628 +
                      (ulonglong)((uint)((ulonglong)pcVar33 >> 2) & 0xf) * 0xb0) = pcVar84;
            ((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->last_cell = pcVar84;
            puVar92 = (undefined1 *)((longlong)&pcVar84->field44_0x1000 + 1);
            *puVar92 = *puVar92 | 0x40;
            if (((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->n_cells == 2) {
              pcVar2 = &((bone *)(uVar122 + (longlong)auVar248._4_4_ * 0x50))->first_cell->
                        field44_0x1000;
              pcVar2->flags = pcVar2->flags | 0x4000;
            }
          }
        }
        uVar69 = uVar69 + 1;
      } while ((int)uVar69 < w.n_cells);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  begin_trace_stage("divide bone center of mass");
  auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
  iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
  iVar136 = (w.bones.n_elements * auVar248._4_4_) / iVar70;
  iVar70 = ((auVar248._4_4_ + 1) * w.bones.n_elements) / iVar70;
  if (iVar136 < iVar70) {
    uVar109 = (ulonglong)iVar136;
    lVar163 = uVar109 * 0x50 + 0x30;
    lVar133 = (longlong)iVar70 - uVar109;
    uVar122 = w.bones.field3_0x20.elements;
    do {
      auVar198._4_4_ = *(float *)(uVar122 + lVar163 + -0x2c);
      if (0.0 < auVar198._4_4_) {
        uVar109 = CONCAT44((int)(uVar109 >> 0x20),
                           (1.0 / auVar198._4_4_) *
                           *(float *)((longlong)&((bone *)uVar122)->id + lVar163)) |
                  (ulonglong)
                  (uint)((1.0 / auVar198._4_4_) *
                        *(float *)((longlong)&((bone *)uVar122)->mass + lVar163)) << 0x20;
        *(ulonglong *)((longlong)&((bone *)uVar122)->id + lVar163) = uVar109;
        auVar198._4_4_ = *(float *)(uVar122 + lVar163 + -0x24) / auVar198._4_4_;
        *(float *)(uVar122 + lVar163 + -0x24) = auVar198._4_4_;
        uVar122 = w.bones.field3_0x20.elements;
      }
      in_ZMM2 = ZEXT464((uint)auVar198._4_4_);
      lVar163 = lVar163 + 0x50;
      lVar133 = lVar133 + -1;
    } while (lVar133 != 0);
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  begin_trace_stage("simulate_wall_collisions");
  local_328.string[0] = 'D';
  local_328.string[1] = 'R';
  local_328.string[2] = 'I';
  local_328.string[3] = 'F';
  local_328.string[4] = 'T';
  local_328.string[5] = 'I';
  local_328.string[6] = 'N';
  local_328.string[7] = 'G';
  local_328._s_0.hi = 0;
  iVar136 = get_mutation_index(&local_328);
  local_318.string[0] = 'F';
  local_318.string[1] = 'R';
  local_318.string[2] = 'E';
  local_318.string[3] = 'E';
  local_318.string[4] = 'Z';
  local_318.string[5] = 'I';
  local_318.string[6] = 'N';
  local_318.string[7] = 'G';
  local_318._s_0.hi = 0;
  auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
  iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
  uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
  uVar123 = uVar109 & 0xffffffff;
  iVar70 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
  local_128._s_0.x = (float)iVar70;
  if ((int)uVar109 < iVar70) {
    auVar248._4_4_ = get_mutation_index(&local_318);
    local_2a8._0_8_ = (longlong)iVar136;
    local_278._0_8_ = (longlong)auVar248._4_4_;
    local_1c0 = (real_2_u_0_s_0)(longlong)local_22c;
    local_288._0_8_ = (longlong)(int)local_1e8._0_4_;
    do {
      uVar122 = w.field58_0x3a60.cells;
      fVar208 = 0.01;
      auVar357 = ZEXT1264(ZEXT812(0));
      uVar69 = (uint)uVar123;
      auVar248._4_4_ = (int)uVar69 >> 4;
      local_168._0_4_ = uVar69;
      uVar109 = (ulonglong)(uVar69 & 0xf);
      piVar74 = w.field58_0x3a60.cells[auVar248._4_4_].field0_0x0.id_packed + uVar109;
      uVar69 = w.base_seed + w.field58_0x3a60.cells[auVar248._4_4_].field0_0x0.id_packed[uVar109];
      uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar69 = (uVar69 >> 0x10 ^ uVar69) + w.frame_number;
      local_188._0_8_ =
           materials_list +
           w.field58_0x3a60.cells[auVar248._4_4_].field3_0xc0.material_index_packed[uVar109];
      rVar139.field0_0x0._s_0.y =
           w.field58_0x3a60.cells[auVar248._4_4_].field33_0xc00.y_packed[uVar109];
      rVar139.field0_0x0._s_0.x =
           w.field58_0x3a60.cells[auVar248._4_4_].field32_0xbc0.x_packed[uVar109];
      wall_map((wall_t *)local_158,&w.map,rVar139,true);
      uVar123 = (ulonglong)piVar74 & 0xffffffffffffffc0;
      pmVar117 = (material_t *)((ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0);
      *(ulonglong *)((longlong)pmVar117[0x14].spawn_with + (uVar123 - 0x20)) =
           CONCAT44(fStack_144,rStack_14c._s_0.y);
      LVar47.s.HighPart = (LONG)rStack_14c._s_0.x;
      LVar47.s.LowPart = local_158._8_4_;
      pLVar12 = (LARGE_INTEGER *)((longlong)&pmVar117[0x13].brain_fn + uVar123);
      *pLVar12 = (LARGE_INTEGER)local_158._0_8_;
      pLVar12[1] = LVar47;
      auVar198._4_4_ =
           (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field33_0xc00).y_packed
           [uVar109];
      *(float *)((longlong)pmVar117[0x14].spawn_with + (uVar123 - 0x18)) =
           (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field32_0xbc0).x_packed
           [uVar109];
      *(float *)((longlong)pmVar117[0x14].spawn_with + (uVar123 - 0x14)) = auVar198._4_4_;
      rVar77.field0_0x0._s_0.y =
           (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field33_0xc00).y_packed
           [uVar109];
      rVar77.field0_0x0._s_0.x =
           (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field32_0xbc0).x_packed
           [uVar109];
      auVar198._4_4_ = temperature_value(&w.map,rVar77);
      *(float *)((longlong)((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->extra_fields +
                uVar109 * 4 + -0x40) = auVar198._4_4_;
      auVar324 = ZEXT464(*(uint *)((longlong)&pmVar117[0x13].light_intensity + uVar123));
      auVar309 = ZEXT464(*(uint *)((longlong)&pmVar117[0x13].emission.field0_0x0 + uVar123));
      auVar198._4_4_ = *(float *)((longlong)&pmVar117[0x13].emission.field0_0x0 + uVar123 + 4);
      local_1b8 = (real_2_u_0_s_0)pmVar117;
      powf();
      auVar327 = ZEXT1664(auVar324._0_16_);
      afStack_268[4] = auVar324._0_4_;
      auVar324 = ZEXT1664(auVar309._0_16_);
      powf();
      auVar309 = ZEXT1664(auVar324._0_16_);
      afStack_268[5] = auVar324._0_4_;
      powf();
      uVar109 = (ulonglong)(auVar327._0_4_ < auVar309._0_4_);
      auVar248 = vmaxss_avx(auVar309._0_16_,auVar327._0_16_);
      if (auVar248._0_4_ < auVar198._4_4_) {
        uVar109 = 2;
      }
      uVar106 = (ulonglong)(auVar309._0_4_ < auVar327._0_4_);
      auVar248 = vminss_avx(auVar309._0_16_,auVar327._0_16_);
      if (auVar198._4_4_ < auVar248._0_4_) {
        uVar106 = 2;
      }
      afStack_268[6] = auVar198._4_4_;
      auVar198._4_4_ = afStack_268[uVar109 + 4];
      fVar171 = auVar198._4_4_ - afStack_268[uVar106 + 4];
      auVar324 = ZEXT1264(ZEXT812(0));
      if (auVar357._0_4_ < fVar171) {
        auVar248._4_4_ = (int)uVar109;
        iVar70 = auVar248._4_4_ + -1;
        if (auVar248._4_4_ == 0) {
          iVar70 = 2;
        }
        uVar109 = (ulonglong)(auVar248._4_4_ + 1U);
        if (auVar248._4_4_ + 1U == 3) {
          uVar109 = 0;
        }
        fVar334 = ((afStack_268[uVar109 + 4] - afStack_268[(longlong)iVar70 + 4]) / fVar171 +
                  (float)(auVar248._4_4_ * 2)) * 1.0471976;
        auVar324 = ZEXT464((uint)fVar334);
        if (fVar334 < auVar357._0_4_) {
          auVar324 = ZEXT464((uint)(fVar334 + 6.2831855));
        }
      }
      auVar309 = ZEXT1264(ZEXT812(0));
      fVar334 = 0.0;
      if (0.0 < auVar198._4_4_) {
        fVar334 = fVar171 / auVar198._4_4_;
      }
      rVar112.field0_0x0._s_0.y = (float)piVar74[0x300];
      rVar112.field0_0x0._s_0.x = (float)piVar74[0x2f0];
      fVar172 = light_value(&w.map,rVar112);
      powf();
      auVar248 = vandps_avx(auVar324._0_16_,___xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar171 = 6.2831855 - auVar248._0_4_;
      in_ZMM2 = ZEXT464((uint)fVar171);
      auVar219 = vcmpss_avx(SUB6416(ZEXT464(0x40490fdb),0),auVar248,1);
      auVar248 = vblendvps_avx(auVar248,ZEXT416((uint)fVar171),auVar219);
      auVar198._4_4_ = auVar198._4_4_ * fVar172 * auVar198._4_4_ * fVar172;
      fVar171 = fVar334 * auVar309._0_4_ * 3.8197186 * auVar248._0_4_;
      fVar171 = fVar334 * fVar334 * -4.0 - fVar171 * fVar171;
      expf();
      auVar219 = auVar357._0_16_;
      piVar74[0x490] = (int)(fVar171 * auVar198._4_4_ + (float)piVar74[0x490]);
      local_208._0_4_ = rStack_14c._s_0.x;
      local_170 = (uchar *)CONCAT44(local_170._4_4_,rStack_14c._s_0.y);
      uVar96 = piVar74[0x400];
      auVar198._4_4_ = 0.0;
      uVar107 = uVar96 & 0x3f;
      uVar122 = local_188._0_8_;
      if (uVar107 != 0) {
        if (uVar107 == 0x3f) {
          auVar198._4_4_ =
               *(float *)(local_188._0_8_ + 0x80) + *(float *)(local_188._0_8_ + 0x80) +
               *(float *)(local_188._0_8_ + 0x7c);
          auVar282._0_4_ = -auVar198._4_4_;
          auVar282._4_4_ = 0x80000000;
          auVar282._8_4_ = 0x80000000;
          auVar282._12_4_ = 0x80000000;
          auVar248 = vcmpss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416(0x3f800000),1);
          auVar298._8_4_ = 0xbf800000;
          auVar298._0_8_ = 0xbf800000bf800000;
          auVar298._12_4_ = 0xbf800000;
          auVar248 = vblendvps_avx(auVar298,auVar282,auVar248);
          in_ZMM2 = ZEXT1664(auVar248);
          auVar309 = ZEXT464((uint)((float)piVar74[0x310] * auVar248._0_4_));
          auVar198._4_4_ = (float)piVar74[800] * auVar248._0_4_;
        }
        else {
          uVar166 = 0;
          if (((((uVar96 & 1) != 0) && (uVar166 = 1, (uVar96 & 2) != 0)) &&
              (uVar166 = 2, (uVar96 & 4) != 0)) &&
             ((uVar166 = 3, (uVar96 & 8) != 0 && (uVar166 = 4, (uVar96 & 0x10) != 0)))) {
            uVar166 = (uint)((uVar96 & 0x20) == 0) * 5;
          }
          fVar172 = (float)piVar74[0x310] - rStack_14c._s_0.x;
          fVar245 = (float)piVar74[800] - rStack_14c._s_0.y;
          uVar109 = (ulonglong)uVar166;
          auVar248._4_4_ = 6;
          bVar170 = false;
          fVar334 = 0.0;
          fVar171 = 0.0;
          prVar153 = hex_rots + uVar109;
          do {
            uVar166 = uVar166 + 1;
            uVar109 = uVar109 + 1;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar109;
            lVar133 = 0;
            fVar333 = auVar357._0_4_;
            if ((uVar107 >> uVar166 % 6 & 1) == 0) {
              if (bVar170) {
                fVar303 = fVar334 * fVar334 + fVar333 + fVar171 * fVar171;
                if (fVar303 <= 1e-06) {
                  fVar171 = 0.0;
                  fVar334 = 0.0;
                }
                else {
                  auVar317 = vsqrtss_avx(ZEXT416((uint)fVar303),ZEXT416((uint)fVar303));
                  fVar303 = 1.0 / auVar317._0_4_;
                  fVar171 = fVar171 * fVar303;
                  fVar334 = fVar334 * fVar303;
                }
                lVar133 = 0;
                fVar303 = (fVar245 * fVar334 + fVar172 * fVar171 + 0.0) *
                          -*(float *)(local_188._0_8_ + 0x7c);
                bVar170 = true;
                if (fVar303 < 0.0) {
                  fVar347 = -*(float *)(local_188._0_8_ + 0x80) *
                            (fVar245 * fVar171 + (0.0 - fVar172 * fVar334));
                  auVar198._4_4_ = auVar198._4_4_ + fVar303 * fVar334 + fVar347 * fVar171;
                  auVar309 = ZEXT464((uint)((auVar309._0_4_ + fVar303 * fVar171) - fVar347 * fVar334
                                           ));
                }
                fVar171 = 0.0;
                in_ZMM5 = ZEXT464(0);
                fVar334 = 0.0;
              }
              else {
                bVar170 = false;
              }
            }
            else {
              lVar133 = (SUB168(auVar35 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x3ffffffffffffffc) *
                        -0xc;
              fVar303 = *(float *)((longlong)(prVar153 + 1) + lVar133);
              fVar347 = *(float *)((longlong)prVar153 + lVar133 + 0xc);
              fVar173 = (float)piVar74[0x340] * fVar303;
              in_ZMM5 = ZEXT464((uint)fVar173);
              fVar171 = ((float)piVar74[0x330] * fVar303 - (float)piVar74[0x340] * fVar347) +
                        fVar171;
              fVar334 = fVar334 + (float)piVar74[0x330] * fVar347 + fVar173;
              bVar170 = true;
            }
            auVar248._4_4_ = auVar248._4_4_ + -1;
            prVar153 = prVar153 + 1;
          } while (auVar248._4_4_ != 0);
          fVar334 = auVar309._0_4_;
          fVar171 = auVar198._4_4_ * auVar198._4_4_ + fVar333 + fVar334 * fVar334;
          in_ZMM2 = ZEXT464((uint)fVar171);
          if (fVar171 <= 1e-06) {
            uVar109 = 0;
          }
          else {
            auVar248 = vsqrtss_avx(ZEXT416((uint)fVar171),ZEXT416((uint)fVar171));
            fVar303 = 1.0 / auVar248._0_4_;
            uVar109 = CONCAT44((int)((ulonglong)lVar133 >> 0x20),fVar334 * fVar303) |
                      (ulonglong)(uint)(auVar198._4_4_ * fVar303) << 0x20;
          }
          fVar303 = (float)(uVar109 >> 0x20);
          fVar334 = fVar303 * fVar245 + fVar333 + (float)uVar109 * fVar172;
          uVar158 = (real_2_u_0)0x0;
          if (fVar334 * fVar334 < fVar171) {
            auVar309 = ZEXT464((uint)((float)uVar109 * -fVar334));
            auVar198._4_4_ = fVar303 * -fVar334;
          }
        }
      }
      auVar248 = auVar309._0_16_;
      uVar96 = piVar74[0x10];
      bVar170 = true;
      if ((((int)uVar96 < 1) ||
          (uVar107 = w.bodies.n_max_elements + 0x7fffffffU & uVar96,
          w.bodies.field0_0x0.index_table[uVar107].id != uVar96)) ||
         (w.bodies.field3_0x20.elements == (body *)0x0)) {
        peVar165 = (explosion_t *)0x0;
        rVar78 = local_1b8;
      }
      else {
        peVar165 = (explosion_t *)
                   (w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar107].index);
        fVar171 = 0.1;
        powf();
        auVar219 = auVar357._0_16_;
        auVar248 = ZEXT416((uint)(auVar309._0_4_ * fVar171));
        auVar198._4_4_ = auVar198._4_4_ * fVar171;
        bVar170 = false;
        rVar78 = local_1b8;
      }
      fVar171 = *(float *)((longlong)((material_t *)((longlong)rVar78 + 0x15e0))->spawn_with +
                          (uVar123 - 0x1c));
      if (auVar219._0_4_ < fVar171) {
        auVar198._4_4_ = auVar198._4_4_ * fVar208;
      }
      auVar219 = vcmpss_avx(auVar219,ZEXT416((uint)fVar171),1);
      auVar248 = vblendvps_avx(auVar248,ZEXT416((uint)(auVar248._0_4_ * fVar208)),auVar219);
      auVar324 = ZEXT1664(auVar248);
      fVar171 = (float)piVar74[0x4c0] * -9.2;
      local_1b8 = rVar78;
      expf();
      fVar208 = fVar171 * auVar324._0_4_ + (float)piVar74[0x310];
      piVar74[0x310] = (int)fVar208;
      fVar171 = auVar198._4_4_ * fVar171 + (float)piVar74[800];
      piVar74[800] = (int)fVar171;
      auVar198._4_4_ = (float)piVar74[0x1a0];
      if (-0.5 <= auVar198._4_4_) {
        piVar74[0x1b0] = 0x3f800000;
        if (!bVar170) goto LAB_1400cbc70;
      }
      else if (bVar170) {
        auVar198._4_4_ = auVar198._4_4_ + 0.5 + auVar198._4_4_ + 0.5;
        expf();
        piVar74[0x1b0] = (int)auVar198._4_4_;
      }
      else {
        if (w.field55_0x3a28.body_auxiliary_data
            [local_278._0_8_ +
             (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5 *
             ((longlong)peVar165 - w.bodies.field3_0x20._0_8_ >> 4)] == '\0') {
          auVar198._4_4_ = auVar198._4_4_ + 0.5 + auVar198._4_4_ + 0.5;
          expf();
          piVar74[0x1b0] = (int)auVar198._4_4_;
        }
        else {
          piVar74[0x1b0] = 0x3f800000;
        }
LAB_1400cbc70:
        auVar198._4_4_ = (float)(int)*(float *)((longlong)peVar165 + 0x38) * 0.5235988;
        fVar334 = auVar198._4_4_;
        cosf();
        local_1d8._0_4_ = auVar198._4_4_;
        sinf();
        uVar102 = w.field55_0x3a28.body_auxiliary_data;
        local_1e8._0_4_ = fVar334;
        local_190 = CONCAT44(local_190._4_4_,piVar74[0x330]);
        auVar309 = ZEXT464((uint)piVar74[0x340]);
        fVar172 = (((float)piVar74[0x1c0] * *(float *)(uVar122 + 0x84)) / (float)piVar74[0x2e0]) *
                  (float)piVar74[0x1b0];
        auVar198._4_4_ = (((brain_t *)((longlong)peVar165 + 0x148))->movement).field0_0x0._s_0.x;
        auVar324 = ZEXT464((uint)*(float *)((longlong)peVar165 + 0x14c));
        fVar334 = *(float *)((longlong)peVar165 + 0x150);
        fVar245 = (float)piVar74[400] * 6.0;
        lVar133 = ((longlong)peVar165 - w.bodies.field3_0x20._0_8_ >> 4) * 0x4fa4fa4fa4fa4fa5;
        fVar333 = 0.0;
        auVar248 = SUB6416(ZEXT464(0x3f800000),0);
        if (w.field55_0x3a28.body_auxiliary_data
            [(longlong)((longlong)local_1c0 + w.body_auxiliary_size * lVar133)] != '\0') {
          auVar248 = ZEXT416(0) << 0x40;
        }
        auVar327 = ZEXT1664(auVar248);
        uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
        uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
        uVar69 = (uVar69 >> 0x10 ^ uVar69) + 0xbebae;
        uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
        uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x63d2f291;
        uVar96 = uVar96 >> 0xf ^ uVar96;
        uVar69 = uVar96 * -0x7b935975;
        fVar303 = (float)(uVar69 >> 0x10 ^ uVar69) * 2.3283064e-10;
        if (((fVar303 != 0.0) || (NAN(fVar303))) && ((fVar303 != 1.0 || (NAN(fVar303))))) {
          dVar176 = (double)(fVar303 / (1.0 - fVar303));
          log();
          fVar333 = (float)(dVar176 * 0.6266570687294006);
        }
        fVar108 = auVar309._0_4_;
        fVar279 = auVar327._0_4_;
        fVar347 = auVar324._0_4_;
        uVar96 = uVar96 * -0x63d2f291;
        uVar69 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
        uVar109 = (ulonglong)(uVar69 >> 0x10 ^ uVar69);
        fVar303 = (float)uVar109 * 2.3283064e-10;
        fVar173 = 0.0;
        if (((fVar303 != 0.0) || (NAN(fVar303))) && ((fVar303 != 1.0 || (NAN(fVar303))))) {
          dVar176 = (double)(fVar303 / (1.0 - fVar303));
          log();
          fVar108 = auVar309._0_4_;
          fVar279 = auVar327._0_4_;
          fVar347 = auVar324._0_4_;
          fVar173 = (float)(dVar176 * 0.6266570687294006);
        }
        auVar248 = vandps_avx(ZEXT416((uint)(fVar245 * fVar279)),
                              ___xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar248);
        fVar245 = auVar248._0_4_;
        auVar198._4_4_ = auVar198._4_4_ * (1.0 - fVar245) + fVar333 * fVar245;
        fVar334 = fVar334 * (1.0 - fVar245) + fVar245 * fVar173;
        if (*(uchar *)(uVar102 + local_288._0_8_ + lVar133 * w.body_auxiliary_size) == '\0') {
          rVar124 = (real_2_u_0)
                    (CONCAT44((int)(uVar109 >> 0x20),
                              (float)local_190 * (float)local_1d8._0_4_ -
                              fVar108 * (float)local_1e8._0_4_) |
                    (ulonglong)
                    (uint)((float)local_190 * (float)local_1e8._0_4_ +
                          fVar108 * (float)local_1d8._0_4_) << 0x20);
          fVar245 = fVar334;
        }
        else {
          rVar124 = (real_2_u_0)*(real_2_u_0 *)&((real_2_u_0 *)((longlong)peVar165 + 0x104))->_s_0;
          fVar245 = fVar334 * fVar334 + auVar198._4_4_ * auVar198._4_4_ + 0.0;
          if (1.0 < fVar245) {
            auVar248 = vsqrtss_avx(ZEXT416((uint)fVar245),ZEXT416((uint)fVar245));
            fVar245 = 1.0 / auVar248._0_4_;
            auVar198._4_4_ = auVar198._4_4_ * fVar245;
            fVar334 = fVar334 * fVar245;
          }
          fVar245 = 0.0;
          fVar347 = fVar334;
        }
        fVar208 = fVar208 - (float)local_208;
        fVar171 = fVar171 - local_170._0_4_;
        fVar334 = auVar198._4_4_ * rVar124._s_0.x - fVar347 * rVar124._s_0.y;
        auVar198._4_4_ = auVar198._4_4_ * rVar124._s_0.y + fVar347 * rVar124._s_0.x;
        if (*(uchar *)(uVar102 + local_288._0_8_ + lVar133 * w.body_auxiliary_size) == '\0') {
          auVar248 = ZEXT416((uint)(fVar171 * fVar171 + fVar208 * fVar208 + 0.0));
          auVar248 = vsqrtss_avx(auVar248,auVar248);
          auVar248 = vminss_avx(ZEXT416((uint)(auVar248._0_4_ * 0.5)),SUB6416(ZEXT464(0x3f800000),0)
                               );
          if (*(float *)((longlong)((material_t *)((longlong)rVar78 + 0x15e0))->spawn_with +
                        (uVar123 - 0x1c)) <= 0.0) {
            fVar208 = (1.0 - auVar248._0_4_) * 10.0 + 1.0;
            fVar334 = fVar208 * fVar334;
            auVar198._4_4_ = fVar208 * auVar198._4_4_;
          }
          else {
LAB_1400cc073:
            fVar245 = fVar245 * 5.0;
            fVar334 = 0.0;
            auVar198._4_4_ = 0.0;
          }
        }
        else {
          auVar248 = vminss_avx(ZEXT416((uint)((fVar171 * auVar198._4_4_ + fVar208 * fVar334 + 0.0)
                                              * 0.5)),SUB6416(ZEXT464(0x3f800000),0));
          fVar208 = (1.0 - auVar248._0_4_) * 10.0 + 1.0;
          fVar334 = fVar334 * fVar208;
          auVar198._4_4_ = auVar198._4_4_ * fVar208;
          if (0.0 < *(float *)((longlong)((material_t *)((longlong)rVar78 + 0x15e0))->spawn_with +
                              (uVar123 - 0x1c))) {
            if ((float)piVar74[0x370] * 1.5 <
                *(float *)((longlong)&((material_t *)((longlong)local_1b8 + 0x14c8))->brain_fn +
                          uVar123)) goto LAB_1400cc073;
            fVar208 = *(float *)((longlong)&((material_t *)((longlong)rVar78 + 0x14c8))->brain_fn +
                                uVar123 + 4);
            fVar171 = *(float *)((longlong)
                                 &((material_t *)((longlong)rVar78 + 0x14c8))->destroyed_fn +
                                uVar123);
            fVar333 = auVar198._4_4_ * fVar171 + fVar334 * fVar208 + 0.0;
            fVar334 = (fVar334 - fVar333 * fVar208) * 5.0;
            auVar198._4_4_ = (auVar198._4_4_ - fVar333 * fVar171) * 5.0;
          }
        }
        fVar208 = (float)piVar74[0x330];
        fVar303 = fVar172 * 9.0 * fVar245;
        fVar333 = fVar303 * (float)piVar74[0x350];
        fVar303 = fVar303 * (float)piVar74[0x360];
        fVar171 = (float)piVar74[0x340];
        fVar347 = fVar333 * fVar208 - fVar303 * fVar171;
        in_ZMM5 = ZEXT464((uint)fVar347);
        auVar198._4_4_ = fVar172 * auVar198._4_4_ + fVar333 * fVar171 + fVar208 * fVar303;
        in_ZMM2 = ZEXT464((uint)auVar198._4_4_);
        piVar74[0x310] = (int)(fVar172 * fVar334 + fVar347 + (float)piVar74[0x310]);
        piVar74[800] = (int)(auVar198._4_4_ + (float)piVar74[800]);
        if ((~piVar74[0x400] & 0x3fU) == 0) {
          fVar245 = (fVar172 + fVar172) * fVar245;
          auVar198._4_4_ = fVar245;
          cosf();
          sinf();
          in_ZMM2 = ZEXT464((uint)(auVar198._4_4_ * fVar171));
          piVar74[0x330] = (int)(auVar198._4_4_ * fVar208 - fVar171 * fVar245);
          piVar74[0x340] = (int)(fVar208 * fVar245 + auVar198._4_4_ * fVar171);
        }
      }
      uVar123 = (ulonglong)(uint)(local_168._0_4_ + 1);
      auVar324 = ZEXT464((uint)local_120._0_4_);
    } while (local_168._0_4_ + 1 != local_128._0_4_);
  }
  pcVar82 = TlsGetValue(tls_index);
  pcVar127 = (code *)0x0;
  if ((w.show_trace != 0) && (*(longlong *)(pcVar82 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)(pcVar82 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)(pcVar82 + 0xb8) = **(undefined8 **)(pcVar82 + 0xb8);
    pcVar127 = pcVar82;
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  auVar357 = ZEXT1264(ZEXT812(0));
  auVar332 = ZEXT464(0x3f800000);
  local_210 = (real_2_u_0_s_0)((ulonglong)local_210 & 0xffffffff00000000);
  auVar309 = ZEXT464(0x3f000000);
  auVar336 = ZEXT464(0x3f777777);
  auVar327 = ZEXT464(0xc0c00000);
  do {
    begin_trace_stage("simulation step");
    if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
      auVar248._4_4_ = 0x401d086f;
      begin_trace_stage("simulate boss parts");
      simulate_boss_parts(auVar248._4_4_);
      pcVar82 = TlsGetValue(tls_index);
      if ((w.show_trace != 0) && (*(longlong *)(pcVar82 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        *(double *)(*(longlong *)(pcVar82 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)(pcVar82 + 0xb8) = **(undefined8 **)(pcVar82 + 0xb8);
        pcVar127 = pcVar82;
      }
      begin_trace_stage("reset global_body_force");
      if (0 < w.bodies.n_elements) {
        lVar133 = 0x118;
        lVar163 = 0;
        uVar122 = w.bodies.field3_0x20.elements;
        auVar248._4_4_ = w.bodies.n_elements;
        do {
          if ((*(byte *)(uVar122 + lVar133 + -0x80) & 1) != 0) {
            *(undefined8 *)((longlong)&((body *)uVar122)->id + lVar133) = 0;
            uVar122 = w.bodies.field3_0x20.elements;
            auVar248._4_4_ = w.bodies.n_elements;
          }
          lVar163 = lVar163 + 1;
          lVar133 = lVar133 + 0x2d0;
        } while (lVar163 < auVar248._4_4_);
      }
      pcVar82 = TlsGetValue(tls_index);
      if ((w.show_trace != 0) && (*(longlong *)(pcVar82 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        *(double *)(*(longlong *)(pcVar82 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)(pcVar82 + 0xb8) = **(undefined8 **)(pcVar82 + 0xb8);
        pcVar127 = pcVar82;
      }
    }
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
    begin_trace_stage("integrate cell motion");
    auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
    iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
    uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
    uVar123 = uVar109 & 0xffffffff;
    uVar69 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
    if ((int)uVar109 < (int)uVar69) {
      do {
        uVar122 = w.field58_0x3a60.cells;
        uVar107 = (uint)uVar123;
        auVar248._4_4_ = (int)uVar107 >> 4;
        uVar96 = uVar107 & 0xf;
        auVar198._4_4_ = w.field58_0x3a60.cells[auVar248._4_4_].field34_0xc40.x_dot_packed[uVar96];
        fVar208 = w.field58_0x3a60.cells[auVar248._4_4_].field35_0xc80.y_dot_packed[uVar96];
        fVar171 = auVar198._4_4_ * 0.25 +
                  w.field58_0x3a60.cells[auVar248._4_4_].field32_0xbc0.x_packed[uVar96];
        w.field58_0x3a60.cells[auVar248._4_4_].field32_0xbc0.x_packed[uVar96] = fVar171;
        fVar334 = fVar208 * 0.25 +
                  (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field33_0xc00).y_packed
                  [uVar96];
        pcVar84 = (cell *)((((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field0_0x0).
                           id_packed + uVar96);
        (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field33_0xc00).y_packed[uVar96] =
             fVar334;
        lVar133 = (ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0;
        fVar172 = auVar357._0_4_;
        if (fVar172 < *(float *)(((ulonglong)pcVar84 & 0xffffffffffffffc0) + 0x15e4 + lVar133)) {
          auVar198._4_4_ = (fVar334 - w.final_boss.x.field0_0x0._s_0.y) * 0.0001;
          auVar248 = vmaxss_avx(auVar332._0_16_,
                                ZEXT416((uint)(auVar332._0_4_ + auVar198._4_4_ * auVar198._4_4_)));
          fVar208 = fVar172 + -0.02 / auVar248._0_4_;
          auVar198._4_4_ = (fVar171 - w.final_boss.x.field0_0x0._s_0.x) + 7000.0;
          fVar171 = (fVar334 - w.final_boss.x.field0_0x0._s_0.y) + -70000.0;
          auVar248 = vmaxss_avx(ZEXT416((uint)(fVar171 * fVar171 +
                                              fVar172 + auVar198._4_4_ * auVar198._4_4_)),
                                ZEXT416(0x4bbebc20));
          auVar327 = ZEXT1664(auVar248);
          powf();
          fVar334 = auVar327._0_4_ * -100000.0;
          auVar198._4_4_ =
               auVar357._0_4_ + fVar334 * auVar198._4_4_ + (pcVar84->field34_0xc40).x_dot;
          (pcVar84->field34_0xc40).x_dot = auVar198._4_4_;
          fVar208 = fVar171 * fVar334 + fVar208 + (pcVar84->field35_0xc80).y_dot;
          (pcVar84->field35_0xc80).y_dot = fVar208;
          fVar171 = (pcVar84->field32_0xbc0).x;
          fVar334 = (pcVar84->field33_0xc00).y;
        }
        fVar171 = fVar171 - w.final_boss.x.field0_0x0._s_0.x;
        fVar334 = fVar334 - w.final_boss.x.field0_0x0._s_0.y;
        fVar245 = auVar357._0_4_;
        fVar172 = fVar334 * fVar334 + fVar245 + fVar171 * fVar171;
        auVar248 = vsqrtss_avx(ZEXT416((uint)fVar172),ZEXT416((uint)fVar172));
        auVar327 = ZEXT1664(auVar248);
        if (fVar245 < fVar172) {
          fVar172 = auVar332._0_4_ / auVar248._0_4_;
          fVar171 = fVar171 * fVar172;
          fVar334 = fVar334 * fVar172;
        }
        fVar347 = SUB84(peVar165,4);
        lVar133 = ((ulonglong)pcVar84 & 0xffffffffffffffc0) + lVar133;
        pcVar127 = (code *)(lVar133 + 0x1580);
        fVar245 = fVar245 - w.boss_heart_accel;
        fVar333 = auVar248._0_4_ * -0.0005;
        fVar172 = w.boss_heart_omega_2;
        expf();
        fVar303 = auVar332._0_4_ - fVar333;
        fVar172 = fVar172 * fVar303 + fVar333 * w.boss_heart_omega;
        fVar333 = fVar303 * w.boss_heart_omega_dot_2 + fVar333 * w.boss_heart_omega_dot;
        auVar341._8_4_ = 0x7fffffff;
        auVar341._0_8_ = 0x7fffffff7fffffff;
        auVar341._12_4_ = 0x7fffffff;
        auVar248 = vandps_avx(auVar341,ZEXT416((uint)(auVar327._0_4_ + -1000.0)));
        auVar248 = vmaxss_avx(ZEXT416((uint)(100.0 - auVar248._0_4_)),auVar357._0_16_);
        auVar219 = vmaxss_avx(auVar327._0_16_,ZEXT416(0x447a0000));
        fVar303 = auVar219._0_4_ + (auVar248._0_4_ * auVar248._0_4_ * 0.25) / 100.0;
        peVar165 = (explosion_t *)0x0;
        fVar171 = fVar303 * fVar171;
        fVar303 = fVar303 * (float)((uint)fVar347 | (uint)fVar334);
        fVar245 = fVar245 + fVar171 * fVar172 * fVar172;
        in_ZMM5 = ZEXT464((uint)fVar245);
        fVar208 = (fVar245 - fVar303 * fVar333) - fVar208 * (fVar172 + fVar172);
        auVar198._4_4_ =
             auVar198._4_4_ * (fVar172 + fVar172) +
             fVar171 * fVar333 + auVar357._0_4_ + fVar303 * fVar172 * fVar172;
        auVar248 = vandps_avx(auVar341,ZEXT416((uint)fVar208));
        auVar248 = vcmpss_avx(SUB6416(ZEXT464(0x7f7fffff),0),auVar248,1);
        auVar248 = vandnps_avx(auVar248,ZEXT416((uint)fVar208));
        auVar219 = vcmpss_avx(ZEXT416((uint)fVar208),ZEXT416((uint)fVar208),3);
        auVar219 = vandnps_avx(auVar219,auVar248);
        auVar248 = vandps_avx(auVar341,ZEXT416((uint)auVar198._4_4_));
        auVar248 = vcmpss_avx(SUB6416(ZEXT464(0x7f7fffff),0),auVar248,1);
        auVar248 = vandnps_avx(auVar248,ZEXT416((uint)auVar198._4_4_));
        in_ZMM2 = ZEXT1664(auVar248);
        auVar317 = vcmpss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_),3);
        auVar248 = vandnps_avx(auVar317,auVar248);
        (pcVar84->field34_0xc40).x_dot = auVar219._0_4_ + (pcVar84->field34_0xc40).x_dot;
        (pcVar84->field35_0xc80).y_dot = auVar248._0_4_ + (pcVar84->field35_0xc80).y_dot;
        pmVar117 = materials_list;
        auVar248._4_4_ = (pcVar84->field3_0xc0).material_index;
        if (-1 < (pcVar84->field50_0x1180).attached) {
          fVar334 = (pcVar84->field40_0xdc0).r - *(float *)(lVar133 + 0x15d0);
          auVar198._4_4_ = *(float *)(lVar133 + 0x15d4);
          fVar208 = *(float *)(lVar133 + 0x15d8);
          fVar171 = ((pcVar84->field33_0xc00).y - *(float *)(lVar133 + 0x15ec)) * fVar208 +
                    auVar357._0_4_ +
                    ((pcVar84->field32_0xbc0).x - *(float *)(lVar133 + 0x15e8)) * auVar198._4_4_;
          if (fVar171 < fVar334) {
            fVar172 = (pcVar84->field52_0x1200).phasing * -9.2;
            expf();
            if ((*(byte *)&pmVar117[auVar248._4_4_].field14_0x4c & 0x10) != 0) {
              fVar172 = fVar172 * 0.0001;
            }
            fVar303 = (fVar334 - fVar171) * fVar172;
            (pcVar84->field49_0x1140).wall_force = fVar303 + (pcVar84->field49_0x1140).wall_force;
            fVar171 = fVar303 * auVar198._4_4_ + (pcVar84->field32_0xbc0).x;
            (pcVar84->field32_0xbc0).x = fVar171;
            fVar334 = fVar303 * fVar208 + (pcVar84->field33_0xc00).y;
            (pcVar84->field33_0xc00).y = fVar334;
            fVar245 = fVar303 * auVar198._4_4_ * 4.0 + (pcVar84->field34_0xc40).x_dot;
            (pcVar84->field34_0xc40).x_dot = fVar245;
            fVar333 = fVar303 * fVar208 * 4.0 + (pcVar84->field35_0xc80).y_dot;
            (pcVar84->field35_0xc80).y_dot = fVar333;
            uVar96 = (pcVar84->field44_0x1000).flags;
            if ((uVar96 & 0x3f) != 0) {
              uVar96 = uVar96 | 0x40;
              (pcVar84->field44_0x1000).flags = uVar96;
            }
            fVar173 = auVar357._0_4_;
            auVar317 = auVar357._0_16_;
            auVar219 = vmaxss_avx(ZEXT416((uint)((fVar173 - fVar245 * auVar198._4_4_) -
                                                fVar333 * fVar208)),auVar317);
            fVar172 = auVar219._0_4_ * fVar172;
            fVar347 = fVar172 * pmVar117[auVar248._4_4_].restitution;
            fVar245 = fVar347 * auVar198._4_4_ + fVar245;
            (pcVar84->field34_0xc40).x_dot = fVar245;
            fVar333 = fVar347 * fVar208 + fVar333;
            in_ZMM5 = ZEXT464((uint)fVar333);
            (pcVar84->field35_0xc80).y_dot = fVar333;
            auVar219 = vcmpss_avx(auVar317,ZEXT416(*(uint *)(lVar133 + 0x15e4)),1);
            auVar219 = vblendvps_avx(ZEXT416((uint)pmVar117[auVar248._4_4_].friction),
                                     ZEXT416((uint)(pmVar117[auVar248._4_4_].friction * 10.0)),
                                     auVar219);
            fVar172 = auVar219._0_4_ * (fVar303 + fVar172);
            auVar283._0_4_ = -fVar172;
            auVar283._4_4_ = 0x80000000;
            auVar283._8_4_ = 0x80000000;
            auVar283._12_4_ = 0x80000000;
            auVar219 = vcmpss_avx(ZEXT416((uint)fVar172),auVar332._0_16_,1);
            auVar329._8_4_ = 0xbf800000;
            auVar329._0_8_ = 0xbf800000bf800000;
            auVar329._12_4_ = 0xbf800000;
            auVar219 = vblendvps_avx(auVar329,auVar283,auVar219);
            fVar172 = (auVar198._4_4_ * fVar333 + (fVar173 - fVar208 * fVar245)) * auVar219._0_4_;
            (pcVar84->field34_0xc40).x_dot = fVar245 - fVar172 * fVar208;
            (pcVar84->field35_0xc80).y_dot = fVar333 + fVar172 * auVar198._4_4_;
            if ((((fVar173 < (pcVar84->field47_0x10c0).stickyness) && ((uVar96 & 0x3f) != 0)) &&
                ((*(byte *)&pmVar117[auVar248._4_4_].field14_0x4c & 2) != 0)) &&
               ((pcVar84->field50_0x1180).attached == 0)) {
              (pcVar84->field50_0x1180).attached = -1;
              *(float *)(lVar133 + 0x15a0) = fVar171;
              *(float *)(lVar133 + 0x15a4) = fVar334;
            }
            in_ZMM2 = ZEXT464(0x40c00000);
            (pcVar84->field63_0x14c0).equilibrium_temperature =
                 (pcVar84->field65_0x1540).wall_temperature * 6.0 +
                 (pcVar84->field63_0x14c0).equilibrium_temperature;
            (pcVar84->field64_0x1500).total_heat_conductance =
                 (pcVar84->field64_0x1500).total_heat_conductance + 6.0;
            auVar219 = vminss_avx(auVar332._0_16_,
                                  ZEXT416((uint)(((pcVar84->field65_0x1540).wall_temperature + -1.0)
                                                * 0.05)));
            auVar219 = vmaxss_avx(auVar317,auVar219);
            if (fVar173 < auVar219._0_4_) {
              auVar198._4_4_ = auVar219._0_4_ * 0.2;
              (pcVar84->field14_0x740).health = (pcVar84->field14_0x740).health - auVar198._4_4_;
              (pcVar84->field15_0x780).damage = auVar198._4_4_ + (pcVar84->field15_0x780).damage;
              (pcVar84->field16_0x7c0).bloodless_damage =
                   auVar198._4_4_ * 0.8 + (pcVar84->field16_0x7c0).bloodless_damage;
              (pcVar84->field18_0x840).burn_damage =
                   auVar198._4_4_ + (pcVar84->field18_0x840).burn_damage;
            }
          }
        }
        *(undefined8 *)(lVar133 + 0x15c8) = 0;
        if ((auVar332._0_4_ <= (pcVar84->field13_0x700).maturity) &&
           (pmVar117[auVar248._4_4_].force_update_fn != (_func___cdecl_void_cell_ptr *)0x0)) {
          uVar96 = w.base_seed + (pcVar84->field0_0x0).id;
          uVar96 = (uVar96 >> 0x10 ^ uVar96) * 0x7feb352d;
          uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          uVar96 = (uVar96 >> 0x10 ^ uVar96) + w.frame_number;
          uVar96 = (uVar96 >> 0x10 ^ uVar96) * 0x7feb352d;
          uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          uVar96 = (uVar96 >> 0x10 ^ uVar96) + 0x3f07d47;
          uVar96 = (uVar96 >> 0x10 ^ uVar96) * 0x7feb352d;
          uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          local_f8->seed = uVar96 >> 0x10 ^ uVar96;
          (*pmVar117[auVar248._4_4_].force_update_fn)(pcVar84);
        }
        uVar123 = (ulonglong)(uVar107 + 1);
        auVar327 = ZEXT464(0xc0c00000);
      } while (uVar69 != uVar107 + 1);
    }
    pcVar82 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)(pcVar82 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)(pcVar82 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)(pcVar82 + 0xb8) = **(undefined8 **)(pcVar82 + 0xb8);
      pcVar127 = pcVar82;
    }
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
    auVar346 = ZEXT464(0x40c00000);
    auVar353 = ZEXT464(0x3daaaaab);
    auVar350 = ZEXT464(0xc1400000);
    if (local_210.x == 0.0) {
      begin_trace_stage("calculate_curls");
      auVar178 = auVar327._0_16_;
      auVar362 = auVar353._0_16_;
      auVar258 = auVar350._0_16_;
      auVar198 = auVar346._0_16_;
      auVar317 = in_ZMM5._0_16_;
      auVar219 = in_ZMM2._0_16_;
      auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
      iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
      uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
      uVar123 = uVar109 & 0xffffffff;
      uVar69 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
      if ((int)uVar109 < (int)uVar69) {
LAB_1400cd67f:
        do {
          uVar122 = w.bodies.field3_0x20.elements;
          auVar178 = auVar327._0_16_;
          auVar362 = auVar353._0_16_;
          auVar258 = auVar350._0_16_;
          auVar198 = auVar346._0_16_;
          auVar317 = in_ZMM5._0_16_;
          uVar107 = (uint)uVar123;
          piVar74 = w.field58_0x3a60.cells[(int)uVar107 >> 4].field0_0x0.id_packed + (uVar107 & 0xf)
          ;
          uVar96 = w.field58_0x3a60.cells[(int)uVar107 >> 4].field1_0x40.body_id_packed
                   [uVar107 & 0xf];
          if ((int)uVar96 < 1) {
LAB_1400cd800:
            lVar133 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
            *(undefined1 (*) [32])(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x1600 + lVar133) =
                 ZEXT1232(ZEXT812(0));
            *(undefined1 (*) [32])(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15f0 + lVar133) =
                 ZEXT1232(ZEXT812(0));
          }
          else {
            uVar158 = (real_2_u_0)0x0;
            uVar166 = w.bodies.n_max_elements + 0x7fffffffU & uVar96;
            if ((w.bodies.field0_0x0.index_table[uVar166].id != uVar96) ||
               (uVar158 = (real_2_u_0)0x0, w.bodies.field3_0x20.elements == (body *)0x0))
            goto LAB_1400cd800;
            auVar248._4_4_ = w.bodies.field0_0x0.index_table[uVar166].index;
            piVar74[0x400] = piVar74[0x400] & 0xffffffc0;
            uVar102 = w.field58_0x3a60.cells;
            lVar163 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
            lVar133 = ((ulonglong)piVar74 & 0xffffffffffffffc0) + lVar163;
            plVar140 = (longlong *)(lVar133 + 0x1580);
            lVar163 = *(longlong *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x1580 + lVar163);
            iVar70 = (int)lVar163 + 1;
            if ((((iVar70 < (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                            field0_0x0._s_0.x) ||
                 ((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.u.field0_0x0
                  ._s_0.x <= iVar70)) ||
                (iVar136 = (int)((ulonglong)lVar163 >> 0x20),
                iVar136 < (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                          field0_0x0._s_0.y)) ||
               ((((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.u.field0_0x0
                  ._s_0.y <= iVar136 ||
                 (iVar30 = (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                           field0_0x0._s_0, iVar136 = iVar30.x,
                 uVar96 = ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->cell_map
                          [(int)(lVar163 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                           ((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.u.
                            field0_0x0._s_0.x - iVar136) + (iVar70 - iVar136)], (int)uVar96 < 1)) ||
                (uVar166 = w.max_cells + 0x7fffffffU & uVar96,
                w.field57_0x3a48.cell_index_table[uVar166].id != uVar96)))) {
              *(undefined8 *)(lVar133 + 0x15f0) = 0;
LAB_1400cd95c:
              *(byte *)(piVar74 + 0x400) = *(byte *)(piVar74 + 0x400) | 1;
            }
            else {
              *(int **)(lVar133 + 0x15f0) =
                   w.field58_0x3a60.cells[w.field57_0x3a48.cell_index_table[uVar166].index >> 4].
                   field0_0x0.id_packed + (w.field57_0x3a48.cell_index_table[uVar166].index & 0xf);
              if ((cell *)uVar102 == (cell *)0x0) goto LAB_1400cd95c;
            }
            uVar102 = w.field58_0x3a60.cells;
            lVar163 = *plVar140 + 0x100000000;
            uVar96 = (uint)*plVar140;
            auVar219 = vpinsrd_avx(ZEXT416(uVar96),(int)((ulonglong)lVar163 >> 0x20),1);
            auVar219 = vpshufd_avx(auVar219,0x44);
            auVar219 = vpcmpgtd_avx((undefined1  [16])
                                    (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                    region,auVar219);
            auVar294 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
            in_ZMM2 = ZEXT1664(auVar294);
            auVar219 = vpblendw_avx(auVar219 ^ auVar294,auVar219,0xf0);
            auVar219 = auVar294 & ~auVar219;
            if ((((((SUB161(auVar219 >> 0x1f,0) & 1) == 0 && (SUB161(auVar219 >> 0x3f,0) & 1) == 0)
                  && (SUB161(auVar219 >> 0x5f,0) & 1) == 0) && -1 < auVar219[0xf]) &&
                (iVar30 = (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                          field0_0x0._s_0, iVar70 = iVar30.x,
                uVar96 = ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->cell_map
                         [(int)((int)(lVar163 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                                ((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                 region.u.field0_0x0._s_0.x - iVar70) + (uVar96 - iVar70))],
                0 < (int)uVar96)) &&
               (uVar166 = w.max_cells + 0x7fffffffU & uVar96,
               w.field57_0x3a48.cell_index_table[uVar166].id == uVar96)) {
              *(int **)(lVar133 + 0x15f8) =
                   w.field58_0x3a60.cells[w.field57_0x3a48.cell_index_table[uVar166].index >> 4].
                   field0_0x0.id_packed + (w.field57_0x3a48.cell_index_table[uVar166].index & 0xf);
              if ((cell *)uVar102 == (cell *)0x0) goto LAB_1400cd9b5;
            }
            else {
              *(undefined8 *)(lVar133 + 0x15f8) = 0;
LAB_1400cd9b5:
              *(byte *)(piVar74 + 0x400) = *(byte *)(piVar74 + 0x400) | 2;
            }
            uVar102 = w.field58_0x3a60.cells;
            iVar70 = (int)*plVar140 + -1;
            if ((iVar70 < (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                          field0_0x0._s_0.x) ||
               ((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.u.field0_0x0.
                _s_0.x <= iVar70)) {
LAB_1400cda89:
              *(undefined8 *)(lVar133 + 0x1600) = 0;
LAB_1400cda94:
              *(byte *)(piVar74 + 0x400) = *(byte *)(piVar74 + 0x400) | 4;
            }
            else {
              lVar163 = *plVar140 + 0x100000000;
              iVar136 = (int)((ulonglong)lVar163 >> 0x20);
              if ((iVar136 < (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l
                             .field0_0x0._s_0.y) ||
                 ((((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.u.
                    field0_0x0._s_0.y <= iVar136 ||
                   (iVar30 = (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l
                             .field0_0x0._s_0, iVar136 = iVar30.x,
                   uVar96 = ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->cell_map
                            [(int)(lVar163 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                             ((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.
                              u.field0_0x0._s_0.x - iVar136) + (iVar70 - iVar136)], (int)uVar96 < 1)
                   ) || (uVar166 = w.max_cells + 0x7fffffffU & uVar96,
                        w.field57_0x3a48.cell_index_table[uVar166].id != uVar96))))
              goto LAB_1400cda89;
              *(int **)(lVar133 + 0x1600) =
                   w.field58_0x3a60.cells[w.field57_0x3a48.cell_index_table[uVar166].index >> 4].
                   field0_0x0.id_packed + (w.field57_0x3a48.cell_index_table[uVar166].index & 0xf);
              if ((cell *)uVar102 == (cell *)0x0) goto LAB_1400cda94;
            }
            uVar102 = w.field58_0x3a60.cells;
            lVar163 = *plVar140;
            uVar96 = (int)lVar163 - 1;
            auVar219 = vpinsrd_avx(ZEXT416(uVar96),(int)((ulonglong)lVar163 >> 0x20),1);
            auVar219 = vpshufd_avx(auVar219,0x44);
            auVar219 = vpcmpgtd_avx((undefined1  [16])
                                    (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                    region,auVar219);
            auVar219 = vpblendw_avx(auVar219 ^ auVar294,auVar219,0xf0);
            auVar219 = auVar294 & ~auVar219;
            if ((((((SUB161(auVar219 >> 0x1f,0) & 1) == 0 && (SUB161(auVar219 >> 0x3f,0) & 1) == 0)
                  && (SUB161(auVar219 >> 0x5f,0) & 1) == 0) && -1 < auVar219[0xf]) &&
                (iVar30 = (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                          field0_0x0._s_0, iVar70 = iVar30.x,
                uVar96 = ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->cell_map
                         [(int)((int)(lVar163 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                                ((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                 region.u.field0_0x0._s_0.x - iVar70) + (uVar96 - iVar70))],
                0 < (int)uVar96)) &&
               (uVar166 = w.max_cells + 0x7fffffffU & uVar96,
               w.field57_0x3a48.cell_index_table[uVar166].id == uVar96)) {
              *(int **)(lVar133 + 0x1608) =
                   w.field58_0x3a60.cells[w.field57_0x3a48.cell_index_table[uVar166].index >> 4].
                   field0_0x0.id_packed + (w.field57_0x3a48.cell_index_table[uVar166].index & 0xf);
              if ((cell *)uVar102 == (cell *)0x0) goto LAB_1400cdae3;
            }
            else {
              *(undefined8 *)(lVar133 + 0x1608) = 0;
LAB_1400cdae3:
              *(byte *)(piVar74 + 0x400) = *(byte *)(piVar74 + 0x400) | 8;
            }
            uVar102 = w.field58_0x3a60.cells;
            lVar163 = *plVar140 + -0x100000000;
            uVar96 = (uint)*plVar140;
            auVar219 = vpinsrd_avx(ZEXT416(uVar96),(int)((ulonglong)lVar163 >> 0x20),1);
            auVar219 = vpshufd_avx(auVar219,0x44);
            auVar219 = vpcmpgtd_avx((undefined1  [16])
                                    (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                    region,auVar219);
            auVar219 = vpblendw_avx(auVar219 ^ auVar294,auVar219,0xf0);
            auVar219 = auVar294 & ~auVar219;
            if ((((((SUB161(auVar219 >> 0x1f,0) & 1) == 0 && (SUB161(auVar219 >> 0x3f,0) & 1) == 0)
                  && (SUB161(auVar219 >> 0x5f,0) & 1) == 0) && -1 < auVar219[0xf]) &&
                (iVar30 = (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                          field0_0x0._s_0, iVar70 = iVar30.x,
                uVar96 = ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->cell_map
                         [(int)((int)(lVar163 - ((ulonglong)iVar30 & 0xffffffff00000000) >> 0x20) *
                                ((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                 region.u.field0_0x0._s_0.x - iVar70) + (uVar96 - iVar70))],
                0 < (int)uVar96)) &&
               (uVar166 = w.max_cells + 0x7fffffffU & uVar96,
               w.field57_0x3a48.cell_index_table[uVar166].id == uVar96)) {
              *(int **)(lVar133 + 0x1610) =
                   w.field58_0x3a60.cells[w.field57_0x3a48.cell_index_table[uVar166].index >> 4].
                   field0_0x0.id_packed + (w.field57_0x3a48.cell_index_table[uVar166].index & 0xf);
              if ((cell *)uVar102 == (cell *)0x0) goto LAB_1400cdb3b;
            }
            else {
              *(undefined8 *)(lVar133 + 0x1610) = 0;
LAB_1400cdb3b:
              *(byte *)(piVar74 + 0x400) = *(byte *)(piVar74 + 0x400) | 0x10;
            }
            uVar102 = w.field58_0x3a60.cells;
            lVar163 = *plVar140 + -0x100000000;
            uVar96 = (int)*plVar140 + 1;
            pcVar127 = (code *)0x0;
            auVar219 = vpinsrd_avx(ZEXT416(uVar96),(int)((ulonglong)lVar163 >> 0x20),1);
            auVar219 = vpshufd_avx(auVar219,0x44);
            auVar219 = vpcmpgtd_avx((undefined1  [16])
                                    (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).
                                    region,auVar219);
            auVar219 = vpblendw_avx(auVar219 ^ auVar294,auVar219,0xf0);
            auVar294 = auVar294 & ~auVar219;
            if ((((SUB161(auVar294 >> 0x1f,0) & 1) == 0 && (SUB161(auVar294 >> 0x3f,0) & 1) == 0) &&
                (SUB161(auVar294 >> 0x5f,0) & 1) == 0) && -1 < auVar294[0xf]) {
              iVar30 = (((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region.l.
                       field0_0x0._s_0;
              iVar70 = iVar30.x;
              pcVar127 = (code *)((ulonglong)iVar30 & 0xffffffff00000000);
              uVar96 = ((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->cell_map
                       [(int)((int)((ulonglong)(lVar163 - (longlong)pcVar127) >> 0x20) *
                              ((((body *)(uVar122 + (longlong)auVar248._4_4_ * 0x2d0))->plan).region
                               .u.field0_0x0._s_0.x - iVar70) + (uVar96 - iVar70))];
              if ((int)uVar96 < 1) goto LAB_1400cdb8b;
              pcVar127 = (code *)0x0;
              uVar166 = w.max_cells + 0x7fffffffU & uVar96;
              if (w.field57_0x3a48.cell_index_table[uVar166].id != uVar96) goto LAB_1400cdb8b;
              uVar158 = w.field58_0x3a60.cells +
                        (w.field57_0x3a48.cell_index_table[uVar166].index >> 4);
              *(ulonglong *)(lVar133 + 0x1618) =
                   uVar158 + (ulonglong)(w.field57_0x3a48.cell_index_table[uVar166].index & 0xf) * 4
              ;
              if ((cell *)uVar102 == (cell *)0x0) goto LAB_1400cdb96;
            }
            else {
LAB_1400cdb8b:
              uVar158 = (real_2_u_0)0x0;
              *(undefined8 *)(lVar133 + 0x1618) = 0;
LAB_1400cdb96:
              *(byte *)(piVar74 + 0x400) = *(byte *)(piVar74 + 0x400) | 0x20;
            }
          }
          auVar219 = in_ZMM2._0_16_;
          if ((~piVar74[0x400] & 0x3fU) != 0) {
            piVar74[0x330] = 0;
            piVar74[0x340] = 0;
            uVar123 = (ulonglong)piVar74 & 0xffffffffffffffc0;
            lVar133 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
            auVar198._4_4_ = *(float *)(uVar123 + 0x15b8 + lVar133);
            piVar74[0x350] = (int)auVar198._4_4_;
            fVar208 = *(float *)(uVar123 + 0x15bc + lVar133);
            piVar74[0x360] = (int)fVar208;
            uVar109 = *(ulonglong *)(uVar123 + 0x15f0 + lVar133);
            fVar334 = auVar357._0_4_;
            fVar171 = auVar332._0_4_;
            if (uVar109 == 0) {
              auVar198._4_4_ = auVar198._4_4_ - (float)hex_rots[0].field0_0x0._4_4_;
              piVar74[0x350] = (int)auVar198._4_4_;
              in_ZMM2 = ZEXT1264(ZEXT812(0));
              fVar245 = 2.0;
              fVar172 = 0.0;
              uVar131 = hex_rots[0].field0_0x0._s_0.x;
            }
            else {
              fVar245 = *(float *)(uVar109 + 0xbc0) - (float)piVar74[0x2f0];
              fVar333 = *(float *)(uVar109 + 0xc00) - (float)piVar74[0x300];
              fVar172 = fVar333 * fVar333 + fVar334 + fVar245 * fVar245;
              if (fVar172 <= 1e-06) {
                uVar106 = 0;
              }
              else {
                auVar248 = vsqrtss_avx(ZEXT416((uint)fVar172),ZEXT416((uint)fVar172));
                fVar172 = fVar171 / auVar248._0_4_;
                uVar106 = CONCAT44(SUB84(uVar158,4),fVar245 * fVar172) |
                          (ulonglong)(uint)(fVar333 * fVar172) << 0x20;
              }
              fVar172 = (float)(uVar106 >> 0x20);
              pcVar127 = (code *)0x0;
              fVar245 = (float)hex_rots[0].field0_0x0._0_4_ * fVar172;
              fVar333 = (float)uVar106 * (float)hex_rots[0].field0_0x0._4_4_;
              fVar172 = fVar334 + ((float)uVar106 * (float)hex_rots[0].field0_0x0._0_4_ -
                                  (float)hex_rots[0].field0_0x0._4_4_ * fVar172);
              piVar74[0x330] = (int)fVar172;
              fVar245 = fVar334 + fVar333 + fVar245;
              in_ZMM2 = ZEXT464((uint)fVar245);
              piVar74[0x340] = (int)fVar245;
              lVar163 = (ulonglong)((uint)(uVar109 >> 2) & 0xf) * 0xb0;
              auVar198._4_4_ =
                   *(float *)((uVar109 & 0xffffffffffffffc0) + 0x15b8 + lVar163) * 0.5 +
                   auVar198._4_4_;
              piVar74[0x350] = (int)auVar198._4_4_;
              fVar245 = 1.5;
              auVar350 = ZEXT464(0xc1400000);
              uVar131 = *(float *)((uVar109 & 0xffffffffffffffc0) + 0x15bc + lVar163) * 0.5;
            }
            fVar208 = (float)uVar131 + fVar208;
            piVar74[0x360] = (int)fVar208;
            lVar163 = 0;
            prVar148 = &hex_rots[5].field0_0x0;
            do {
              uVar109 = *(ulonglong *)(uVar123 + lVar133 + 0x15f8 + lVar163 * 8);
              if (uVar109 == 0) {
                auVar198._4_4_ = auVar198._4_4_ - hex_rots[lVar163 + 1].field0_0x0._s_0.y;
                piVar74[0x350] = (int)auVar198._4_4_;
                fVar333 = hex_rots[lVar163 + 1].field0_0x0._s_0.x;
                auVar248 = auVar332._0_16_;
              }
              else {
                fVar303 = *(float *)(uVar109 + 0xbc0) - (float)piVar74[0x2f0];
                fVar347 = *(float *)(uVar109 + 0xc00) - (float)piVar74[0x300];
                fVar333 = fVar347 * fVar347 + fVar334 + fVar303 * fVar303;
                if (fVar333 <= 1e-06) {
                  uVar106 = 0;
                }
                else {
                  auVar248 = vsqrtss_avx(ZEXT416((uint)fVar333),ZEXT416((uint)fVar333));
                  fVar333 = fVar171 / auVar248._0_4_;
                  uVar106 = CONCAT44((int)((ulonglong)pcVar127 >> 0x20),fVar303 * fVar333) |
                            (ulonglong)(uint)(fVar347 * fVar333) << 0x20;
                }
                fVar333 = (float)(uVar106 >> 0x20);
                fVar303 = (prVar148->_s_0).x;
                fVar347 = (prVar148->_s_0).y;
                fVar172 = ((float)uVar106 * fVar303 - fVar347 * fVar333) + fVar172;
                piVar74[0x330] = (int)fVar172;
                fVar333 = in_ZMM2._0_4_ + fVar347 * (float)uVar106 + fVar303 * fVar333;
                in_ZMM2 = ZEXT464((uint)fVar333);
                piVar74[0x340] = (int)fVar333;
                pcVar127 = (code *)(uVar109 & 0xffffffffffffffc0);
                lVar110 = (ulonglong)((uint)(uVar109 >> 2) & 0xf) * 0xb0;
                auVar198._4_4_ = *(float *)(pcVar127 + lVar110 + 0x15b8) * 0.5 + auVar198._4_4_;
                piVar74[0x350] = (int)auVar198._4_4_;
                fVar333 = *(float *)(pcVar127 + lVar110 + 0x15bc) * 0.5;
                auVar353 = ZEXT464(0x3daaaaab);
                auVar350 = ZEXT464(0xc1400000);
                auVar327 = ZEXT464(0xc0c00000);
                auVar248 = SUB6416(ZEXT464(0x3f000000),0);
              }
              uVar158 = (real_2_u_0)0x0;
              auVar178 = auVar327._0_16_;
              auVar362 = auVar353._0_16_;
              auVar258 = auVar350._0_16_;
              fVar208 = fVar333 + fVar208;
              fVar245 = fVar245 + auVar248._0_4_;
              piVar74[0x360] = (int)fVar208;
              prVar148 = prVar148 + -1;
              lVar163 = lVar163 + 1;
            } while (lVar163 != 5);
            fVar347 = in_ZMM2._0_4_;
            fVar334 = fVar347 * fVar347 + fVar334 + fVar172 * fVar172;
            in_ZMM5 = ZEXT464((uint)fVar334);
            fVar333 = 1.0;
            fVar303 = 0.0;
            if (1e-06 < fVar334) {
              auVar248 = vsqrtss_avx(ZEXT416((uint)fVar334),ZEXT416((uint)fVar334));
              fVar171 = fVar171 / auVar248._0_4_;
              in_ZMM5 = ZEXT1664(CONCAT124(auVar332._4_12_,fVar171));
              fVar333 = fVar172 * fVar171;
              fVar303 = fVar347 * fVar171;
              in_ZMM2 = ZEXT464((uint)fVar303);
            }
            auVar317 = in_ZMM5._0_16_;
            auVar219 = in_ZMM2._0_16_;
            piVar74[0x330] = (int)fVar333;
            piVar74[0x340] = (int)fVar303;
            piVar74[0x350] = (int)(auVar198._4_4_ / fVar245);
            piVar74[0x360] = (int)(fVar208 / fVar245);
            auVar346 = ZEXT464(0x40c00000);
            auVar198 = auVar346._0_16_;
            uVar123 = (ulonglong)(uVar107 + 1);
            if (uVar107 + 1 == uVar69) break;
            goto LAB_1400cd67f;
          }
          piVar74[0x360] = 0;
          piVar74[0x350] = 0;
          uVar123 = (ulonglong)(uVar107 + 1);
        } while (uVar107 + 1 != uVar69);
      }
      in_ZMM2 = ZEXT1664(auVar219);
      in_ZMM5 = ZEXT1664(auVar317);
      auVar346 = ZEXT1664(auVar198);
      auVar350 = ZEXT1664(auVar258);
      auVar353 = ZEXT1664(auVar362);
      auVar327 = ZEXT1664(auVar178);
      auVar357 = ZEXT1664(auVar357._0_16_);
      auVar332 = ZEXT1664(auVar332._0_16_);
      auVar336 = ZEXT1664(auVar336._0_16_);
      auVar324 = ZEXT1664(auVar324._0_16_);
      pvVar73 = TlsGetValue(tls_index);
      auVar309 = ZEXT464(0x3f000000);
    }
    else {
      begin_trace_stage("calculate_rot");
      auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
      iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
      uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
      uVar123 = uVar109 & 0xffffffff;
      uVar69 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
      if ((int)uVar109 < (int)uVar69) {
        do {
          while( true ) {
            uVar96 = (uint)uVar123;
            piVar74 = w.field58_0x3a60.cells[(int)uVar96 >> 4].field0_0x0.id_packed + (uVar96 & 0xf)
            ;
            if ((~(uint)w.field58_0x3a60.cells[(int)uVar96 >> 4].spacing
                        [(ulonglong)(uVar96 & 0xf) + 0x70] & 0x3f) != 0) break;
            piVar74[0x360] = 0;
            piVar74[0x350] = 0;
            uVar123 = (ulonglong)(uVar96 + 1);
            if (uVar69 == uVar96 + 1) goto LAB_1400cc557;
          }
          piVar74[0x330] = 0;
          piVar74[0x340] = 0;
          uVar109 = (ulonglong)piVar74 & 0xffffffffffffffc0;
          lVar163 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
          lVar133 = *(longlong *)(uVar109 + 0x15f0 + lVar163);
          fVar208 = auVar357._0_4_;
          auVar198._4_4_ = auVar332._0_4_;
          if (lVar133 == 0) {
            fVar334 = 0.0;
            fVar171 = 0.0;
            lVar133 = *(longlong *)(uVar109 + lVar163 + 0x15f8);
          }
          else {
            fVar334 = *(float *)(lVar133 + 0xbc0) - (float)piVar74[0x2f0];
            fVar172 = *(float *)(lVar133 + 0xc00) - (float)piVar74[0x300];
            fVar171 = fVar172 * fVar172 + fVar208 + fVar334 * fVar334;
            if (fVar171 <= 1e-06) {
              uVar123 = 0;
            }
            else {
              auVar248 = vsqrtss_avx(ZEXT416((uint)fVar171),ZEXT416((uint)fVar171));
              fVar171 = auVar198._4_4_ / auVar248._0_4_;
              uVar123 = CONCAT44((int)((ulonglong)lVar133 >> 0x20),fVar334 * fVar171) |
                        (ulonglong)(uint)(fVar172 * fVar171) << 0x20;
            }
            fVar245 = (float)(uVar123 >> 0x20);
            fVar171 = (float)uVar123 * (float)hex_rots[0].field0_0x0._0_4_;
            in_ZMM5 = ZEXT464((uint)fVar171);
            fVar334 = (float)hex_rots[0].field0_0x0._0_4_ * fVar245;
            fVar172 = (float)uVar123 * (float)hex_rots[0].field0_0x0._4_4_;
            fVar171 = fVar208 + (fVar171 - (float)hex_rots[0].field0_0x0._4_4_ * fVar245);
            piVar74[0x330] = (int)fVar171;
            fVar334 = fVar208 + fVar172 + fVar334;
            piVar74[0x340] = (int)fVar334;
            lVar133 = *(longlong *)(uVar109 + lVar163 + 0x15f8);
          }
          if (lVar133 != 0) {
            fVar245 = *(float *)(lVar133 + 0xbc0) - (float)piVar74[0x2f0];
            fVar333 = *(float *)(lVar133 + 0xc00) - (float)piVar74[0x300];
            fVar172 = fVar333 * fVar333 + fVar208 + fVar245 * fVar245;
            if (fVar172 <= 1e-06) {
              uVar123 = 0;
            }
            else {
              auVar248 = vsqrtss_avx(ZEXT416((uint)fVar172),ZEXT416((uint)fVar172));
              fVar172 = auVar198._4_4_ / auVar248._0_4_;
              uVar123 = CONCAT44((int)((ulonglong)lVar133 >> 0x20),fVar245 * fVar172) |
                        (ulonglong)(uint)(fVar333 * fVar172) << 0x20;
            }
            fVar172 = (float)(uVar123 >> 0x20);
            fVar245 = hex_rots[5].field0_0x0._0_4_;
            fVar333 = hex_rots[5].field0_0x0._4_4_;
            in_ZMM5 = ZEXT464((uint)fVar333);
            fVar171 = fVar171 + ((float)uVar123 * fVar245 - fVar333 * fVar172);
            piVar74[0x330] = (int)fVar171;
            fVar334 = fVar334 + (float)uVar123 * fVar333 + fVar245 * fVar172;
            piVar74[0x340] = (int)fVar334;
          }
          lVar163 = uVar109 + lVar163;
          lVar133 = *(longlong *)(lVar163 + 0x1600);
          if (lVar133 != 0) {
            fVar245 = *(float *)(lVar133 + 0xbc0) - (float)piVar74[0x2f0];
            fVar333 = *(float *)(lVar133 + 0xc00) - (float)piVar74[0x300];
            fVar172 = fVar333 * fVar333 + fVar208 + fVar245 * fVar245;
            if (fVar172 <= 1e-06) {
              uVar109 = 0;
            }
            else {
              auVar248 = vsqrtss_avx(ZEXT416((uint)fVar172),ZEXT416((uint)fVar172));
              fVar172 = auVar198._4_4_ / auVar248._0_4_;
              uVar109 = CONCAT44((int)((ulonglong)lVar133 >> 0x20),fVar245 * fVar172) |
                        (ulonglong)(uint)(fVar333 * fVar172) << 0x20;
            }
            fVar172 = (float)(uVar109 >> 0x20);
            fVar245 = hex_rots[4].field0_0x0._0_4_;
            fVar333 = hex_rots[4].field0_0x0._4_4_;
            in_ZMM5 = ZEXT464((uint)fVar333);
            fVar171 = fVar171 + ((float)uVar109 * fVar245 - fVar333 * fVar172);
            piVar74[0x330] = (int)fVar171;
            fVar334 = fVar334 + (float)uVar109 * fVar333 + fVar245 * fVar172;
            piVar74[0x340] = (int)fVar334;
          }
          lVar133 = *(longlong *)(lVar163 + 0x1608);
          if (lVar133 != 0) {
            fVar245 = *(float *)(lVar133 + 0xbc0) - (float)piVar74[0x2f0];
            fVar333 = *(float *)(lVar133 + 0xc00) - (float)piVar74[0x300];
            fVar172 = fVar333 * fVar333 + fVar208 + fVar245 * fVar245;
            if (fVar172 <= 1e-06) {
              uVar109 = 0;
            }
            else {
              auVar248 = vsqrtss_avx(ZEXT416((uint)fVar172),ZEXT416((uint)fVar172));
              fVar172 = auVar198._4_4_ / auVar248._0_4_;
              uVar109 = CONCAT44((int)((ulonglong)lVar133 >> 0x20),fVar245 * fVar172) |
                        (ulonglong)(uint)(fVar333 * fVar172) << 0x20;
            }
            fVar172 = (float)(uVar109 >> 0x20);
            fVar245 = hex_rots[3].field0_0x0._0_4_;
            fVar333 = hex_rots[3].field0_0x0._4_4_;
            in_ZMM5 = ZEXT464((uint)fVar333);
            fVar171 = fVar171 + ((float)uVar109 * fVar245 - fVar333 * fVar172);
            piVar74[0x330] = (int)fVar171;
            fVar334 = fVar334 + (float)uVar109 * fVar333 + fVar245 * fVar172;
            piVar74[0x340] = (int)fVar334;
          }
          lVar133 = *(longlong *)(lVar163 + 0x1610);
          if (lVar133 != 0) {
            fVar245 = *(float *)(lVar133 + 0xbc0) - (float)piVar74[0x2f0];
            fVar333 = *(float *)(lVar133 + 0xc00) - (float)piVar74[0x300];
            fVar172 = fVar333 * fVar333 + fVar208 + fVar245 * fVar245;
            if (fVar172 <= 1e-06) {
              uVar109 = 0;
            }
            else {
              auVar248 = vsqrtss_avx(ZEXT416((uint)fVar172),ZEXT416((uint)fVar172));
              fVar172 = auVar198._4_4_ / auVar248._0_4_;
              uVar109 = CONCAT44((int)((ulonglong)lVar133 >> 0x20),fVar245 * fVar172) |
                        (ulonglong)(uint)(fVar333 * fVar172) << 0x20;
            }
            fVar172 = (float)(uVar109 >> 0x20);
            fVar245 = hex_rots[2].field0_0x0._0_4_;
            fVar333 = hex_rots[2].field0_0x0._4_4_;
            in_ZMM5 = ZEXT464((uint)fVar333);
            fVar171 = fVar171 + ((float)uVar109 * fVar245 - fVar333 * fVar172);
            piVar74[0x330] = (int)fVar171;
            fVar334 = fVar334 + (float)uVar109 * fVar333 + fVar245 * fVar172;
            piVar74[0x340] = (int)fVar334;
          }
          lVar133 = *(longlong *)(lVar163 + 0x1618);
          if (lVar133 != 0) {
            fVar245 = *(float *)(lVar133 + 0xbc0) - (float)piVar74[0x2f0];
            fVar333 = *(float *)(lVar133 + 0xc00) - (float)piVar74[0x300];
            fVar172 = fVar333 * fVar333 + fVar208 + fVar245 * fVar245;
            if (fVar172 <= 1e-06) {
              uVar109 = 0;
            }
            else {
              auVar248 = vsqrtss_avx(ZEXT416((uint)fVar172),ZEXT416((uint)fVar172));
              fVar172 = auVar198._4_4_ / auVar248._0_4_;
              uVar109 = CONCAT44((int)((ulonglong)lVar133 >> 0x20),fVar245 * fVar172) |
                        (ulonglong)(uint)(fVar333 * fVar172) << 0x20;
            }
            fVar172 = (float)(uVar109 >> 0x20);
            fVar245 = hex_rots[1].field0_0x0._0_4_;
            fVar333 = hex_rots[1].field0_0x0._4_4_;
            in_ZMM5 = ZEXT464((uint)fVar333);
            fVar171 = fVar171 + ((float)uVar109 * fVar245 - fVar333 * fVar172);
            piVar74[0x330] = (int)fVar171;
            fVar334 = fVar334 + (float)uVar109 * fVar333 + fVar245 * fVar172;
            piVar74[0x340] = (int)fVar334;
          }
          auVar350 = ZEXT464(0xc1400000);
          auVar346 = ZEXT464(0x40c00000);
          fVar208 = fVar334 * fVar334 + fVar208 + fVar171 * fVar171;
          in_ZMM2 = ZEXT464((uint)fVar208);
          fVar172 = 1.0;
          fVar245 = 0.0;
          if (1e-06 < fVar208) {
            auVar248 = vsqrtss_avx(ZEXT416((uint)fVar208),ZEXT416((uint)fVar208));
            auVar198._4_4_ = auVar198._4_4_ / auVar248._0_4_;
            in_ZMM2 = ZEXT1664(CONCAT124(auVar332._4_12_,auVar198._4_4_));
            fVar172 = fVar171 * auVar198._4_4_;
            fVar245 = fVar334 * auVar198._4_4_;
          }
          piVar74[0x330] = (int)fVar172;
          piVar74[0x340] = (int)fVar245;
          uVar123 = (ulonglong)(uVar96 + 1);
        } while (uVar69 != uVar96 + 1);
      }
LAB_1400cc557:
      pvVar73 = TlsGetValue(tls_index);
    }
    if (((w._4_1_ & 0x20) != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("simulate connections");
    pcVar72 = local_f8;
    if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
      perm[2] = 2;
      perm[3] = 3;
      perm[4] = 4;
      perm[5] = 5;
      perm[6] = 6;
      uVar69 = (w.seed >> 0x10 ^ w.seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = uVar96 >> 0xf ^ uVar96;
      uVar107 = uVar96 * -0x63d2f291;
      uVar107 = uVar107 >> 0xf ^ uVar107;
      uVar166 = uVar107 * -0x63d2f291;
      uVar166 = uVar166 >> 0xf ^ uVar166;
      auVar248 = vpinsrd_avx(ZEXT416(uVar69),uVar96,1);
      auVar248 = vpinsrd_avx(auVar248,uVar107,2);
      auVar248 = vpinsrd_avx(auVar248,uVar166,3);
      auVar248 = vpmulld_avx(auVar248,___xmm_846ca68b846ca68b846ca68b846ca68b);
      auVar219 = vpsrld_avx(auVar248,0x10);
      auVar248 = vpblendw_avx(auVar219 ^ auVar248,___xmm_4b0000004b0000004b0000004b000000,0xaa);
      auVar219 = vpblendw_avx(auVar219,___xmm_53000000530000005300000053000000,0xaa);
      auVar219 = vsubps_avx(auVar219,___xmm_53000080530000805300008053000080);
      auVar189._0_4_ = (int)((auVar248._0_4_ + auVar219._0_4_) * 2.3283064e-10 * 7.0);
      auVar189._4_4_ = (int)((auVar248._4_4_ + auVar219._4_4_) * 2.3283064e-10 * 6.0);
      auVar189._8_4_ = (int)((auVar248._8_4_ + auVar219._8_4_) * 2.3283064e-10 * 5.0);
      auVar189._12_4_ = (int)((auVar248._12_4_ + auVar219._12_4_) * 2.3283064e-10 * 4.0);
      auVar248 = vpmaxsd_avx(auVar189,ZEXT816(0) << 0x20);
      auVar219 = vpminsd_avx(auVar248,___xmm_00000003000000040000000500000006);
      perm[0] = perm[auVar219._0_4_];
      perm[1] = 1;
      perm[auVar219._0_4_] = 0;
      auVar248._4_4_ = perm[1];
      perm[1] = perm[(ulonglong)auVar219._4_4_ + 1];
      perm[(ulonglong)auVar219._4_4_ + 1] = auVar248._4_4_;
      auVar248._4_4_ = perm[(ulonglong)auVar219._8_4_ + 2];
      perm[(ulonglong)auVar219._8_4_ + 2] = perm[2];
      perm[2] = auVar248._4_4_;
      auVar248._4_4_ = perm[3];
      uVar166 = uVar166 * -0x63d2f291;
      uVar166 = uVar166 >> 0xf ^ uVar166;
      uVar69 = uVar166 * -0x7b935975;
      uVar69 = (uint)((float)(uVar69 >> 0x10 ^ uVar69) * 2.3283064e-10 * 3.0);
      if ((int)uVar69 < 1) {
        uVar69 = 0;
      }
      perm[3] = perm[(ulonglong)auVar219._12_4_ + 3];
      uVar109 = (ulonglong)uVar69;
      if (1 < (int)uVar69) {
        uVar109 = 2;
      }
      perm[(ulonglong)auVar219._12_4_ + 3] = auVar248._4_4_;
      auVar248._4_4_ = perm[uVar109 + 4];
      perm[uVar109 + 4] = perm[4];
      perm[4] = auVar248._4_4_;
      auVar248._4_4_ = perm[5];
      uVar166 = uVar166 * -0x63d2f291;
      uVar166 = uVar166 >> 0xf ^ uVar166;
      uVar69 = uVar166 * -0x7b935975;
      auVar198._4_4_ = (float)(uVar69 >> 0x10 ^ uVar69) * 2.3283064e-10;
      uVar109 = (ulonglong)(0 < (int)(auVar198._4_4_ + auVar198._4_4_));
      perm[5] = perm[uVar109 + 5];
      perm[uVar109 + 5] = auVar248._4_4_;
      uVar166 = uVar166 * -0x63d2f291;
      uVar69 = (uVar166 >> 0xf ^ uVar166) * -0x7b935975;
      w.seed = uVar69 >> 0x10 ^ uVar69;
    }
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
    pcVar72->seed = w.seed;
    lVar133 = 0;
    do {
      lVar163 = (longlong)*(int *)((longlong)perm + lVar133);
      if (lVar163 == 0) {
        lVar163 = 0;
        auVar198._4_4_ = 0.0;
      }
      else {
        auVar198._4_4_ = *(float *)((longlong)&n_brain_cells + lVar163 * 4 + 4);
      }
      fVar208 = (float)subgrid_ends[lVar163];
      uVar69 = (uint)auVar198._4_4_ & 0xfffffff8;
      iVar136 = ((int)fVar208 + 7U & 0xfffffff8) - uVar69;
      auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
      iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
      local_158._8_4_ = ((iVar136 * auVar248._4_4_) / iVar70 & 0xfffffff8U) + uVar69;
      rStack_14c._s_0.x =
           (float)((((auVar248._4_4_ + 1) * iVar136) / iVar70 & 0xfffffff8U) + uVar69);
      if ((int)fVar208 < (int)local_158._8_4_) {
        local_158._8_4_ = fVar208;
      }
      if ((int)local_158._8_4_ < (int)auVar198._4_4_) {
        local_158._8_4_ = auVar198._4_4_;
      }
      if ((int)fVar208 < (int)rStack_14c._s_0.x) {
        rStack_14c._0_4_ = fVar208;
      }
      if ((int)rStack_14c._s_0.x < (int)auVar198._4_4_) {
        rStack_14c._0_4_ = auVar198._4_4_;
      }
      local_158._0_8_ = 0;
      rStack_14c._s_0.y = local_210.x;
      simulate_connections_avx(local_f8,local_158);
      pvVar73 = TlsGetValue(tls_index);
      EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
      lVar133 = lVar133 + 4;
    } while (lVar133 != 0x1c);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    pcVar72 = local_f8;
    if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
      w.seed = local_f8->seed;
      begin_trace_stage("handle attachments");
      pcVar127 = TlsGetValue_exref;
      if (0 < w.n_cells) {
        uVar69 = 0;
        do {
          piVar74 = w.field58_0x3a60.cells[uVar69 >> 4].field0_0x0.id_packed + (uVar69 & 0xf);
          uVar96 = w.field58_0x3a60.cells[uVar69 >> 4].field1_0x40.body_id_packed[uVar69 & 0xf];
          if ((((int)uVar96 < 1) ||
              (uVar107 = w.bodies.n_max_elements + 0x7fffffffU & uVar96,
              w.bodies.field0_0x0.index_table[uVar107].id != uVar96)) ||
             (w.bodies.field3_0x20.elements == (body *)0x0)) {
            bVar170 = false;
            pbVar93 = (body *)0x0;
            uVar96 = piVar74[0x460];
            if (0 < (int)uVar96) goto LAB_1400ce27e;
LAB_1400ce240:
            if (uVar96 == 0xffffffff) {
              uVar109 = (ulonglong)piVar74 & 0xffffffffffffffc0;
              lVar133 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
              pwVar76 = wall_map((wall_t *)local_158,&w.map,
                                 (real_2)((real_2_u_0 *)(uVar109 + 0x15a0 + lVar133))->_s_0,true);
              fVar208 = ((float)piVar74[0x370] - (float)local_158._0_4_) * (float)local_158._4_4_ +
                        *(float *)(uVar109 + 0x15a0 + lVar133);
              fVar171 = ((float)piVar74[0x370] - (float)local_158._0_4_) * (float)local_158._8_4_ +
                        *(float *)(uVar109 + 0x15a4 + lVar133);
              *(ulonglong *)(uVar109 + 0x15a0 + lVar133) =
                   CONCAT44((int)((ulonglong)pwVar76 >> 0x20),fVar208) |
                   (ulonglong)(uint)fVar171 << 0x20;
              auVar198._4_4_ = (float)piVar74[0x430];
              fVar208 = fVar208 - (float)piVar74[0x2f0];
              fVar171 = fVar171 - (float)piVar74[0x300];
              fVar334 = fVar171 * fVar171 + auVar357._0_4_ + fVar208 * fVar208;
              if (auVar198._4_4_ * auVar198._4_4_ < fVar334) {
                piVar74[0x460] = 0;
              }
              auVar248 = vmaxss_avx(ZEXT416((uint)auVar198._4_4_),auVar332._0_16_);
              fVar172 = auVar332._0_4_;
              auVar219 = vsqrtss_avx(ZEXT416((uint)fVar334),ZEXT416((uint)fVar334));
              fVar334 = auVar219._0_4_ * -0.004;
              in_ZMM5 = ZEXT464((uint)fVar334);
              piVar74[0x430] = (int)(fVar334 + auVar198._4_4_);
              fVar172 = fVar172 / (fVar172 + (fVar172 / auVar248._0_4_) * (float)piVar74[0x2e0]);
              fVar208 = fVar208 * fVar172;
              in_ZMM2 = ZEXT464((uint)fVar208);
              fVar171 = fVar171 * fVar172;
              piVar74[0x2f0] = (int)((float)piVar74[0x2f0] + fVar208);
              piVar74[0x300] = (int)((float)piVar74[0x300] + fVar171);
              piVar74[0x310] = (int)fVar208;
              piVar74[800] = (int)fVar171;
              *(byte *)(piVar74 + 0x400) = *(byte *)(piVar74 + 0x400) | 0x40;
              auVar346 = ZEXT464(0x40c00000);
              piVar74[0x530] = (int)((float)piVar74[0x550] * 6.0 + (float)piVar74[0x530]);
              piVar74[0x540] = (int)((float)piVar74[0x540] + 6.0);
              pcVar127 = TlsGetValue_exref;
              auVar248 = vminss_avx(auVar332._0_16_,
                                    ZEXT416((uint)(((float)piVar74[0x550] + -1.0) * 0.05)));
              auVar248 = vmaxss_avx(auVar357._0_16_,auVar248);
              if (auVar357._0_4_ < auVar248._0_4_) {
                auVar198._4_4_ = auVar248._0_4_ * 0.2;
                piVar74[0x1d0] = (int)((float)piVar74[0x1d0] - auVar198._4_4_);
                piVar74[0x1e0] = (int)(auVar198._4_4_ + (float)piVar74[0x1e0]);
                piVar74[0x1f0] = (int)(auVar198._4_4_ * 0.8 + (float)piVar74[0x1f0]);
                piVar74[0x210] = (int)(auVar198._4_4_ + (float)piVar74[0x210]);
              }
            }
            else if (bVar170 && uVar96 == 0xfffffffe) {
              pbVar93->rooted = 1;
            }
          }
          else {
            auVar248._4_4_ = w.bodies.field0_0x0.index_table[uVar107].index;
            pbVar93 = w.bodies.field3_0x20.elements + auVar248._4_4_;
            lVar133 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
            rVar141._s_0.y =
                 *(float *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15cc + lVar133) +
                 w.bodies.field3_0x20.elements[auVar248._4_4_].global_body_force.field0_0x0._s_0.y;
            rVar141._s_0.x =
                 *(float *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15c8 + lVar133) +
                 w.bodies.field3_0x20.elements[auVar248._4_4_].global_body_force.field0_0x0._s_0.x;
            w.bodies.field3_0x20.elements[auVar248._4_4_].global_body_force.field0_0x0 = rVar141;
            bVar170 = true;
            uVar96 = piVar74[0x460];
            pcVar127 = TlsGetValue_exref;
            if ((int)uVar96 < 1) goto LAB_1400ce240;
LAB_1400ce27e:
            uVar122 = w.field58_0x3a60.cells;
            uVar107 = w.max_cells + 0x7fffffffU & uVar96;
            if ((w.field57_0x3a48.cell_index_table[uVar107].id == uVar96) &&
               (w.field58_0x3a60.cells != (cell *)0x0)) {
              lVar133 = (longlong)(w.field57_0x3a48.cell_index_table[uVar107].index >> 4);
              uVar109 = (ulonglong)(w.field57_0x3a48.cell_index_table[uVar107].index & 0xf);
              fVar334 = w.field58_0x3a60.cells[lVar133].field32_0xbc0.x_packed[uVar109] -
                        (float)piVar74[0x2f0];
              fVar172 = w.field58_0x3a60.cells[lVar133].field33_0xc00.y_packed[uVar109] -
                        (float)piVar74[0x300];
              auVar198._4_4_ = fVar172 * fVar172 + auVar357._0_4_ + fVar334 * fVar334;
              fVar208 = (float)piVar74[0x370] +
                        w.field58_0x3a60.cells[lVar133].spacing[uVar109 - 0x20];
              in_ZMM2 = ZEXT464((uint)fVar208);
              fVar171 = fVar208 + (float)piVar74[0x430];
              fVar171 = fVar171 * fVar171;
              in_ZMM5 = ZEXT464((uint)fVar171);
              if (fVar171 < auVar198._4_4_) goto LAB_1400ce330;
              auVar248 = vmaxss_avx(ZEXT416((uint)piVar74[0x430]),auVar332._0_16_);
              fVar171 = auVar332._0_4_;
              auVar358 = auVar332._4_12_;
              if (auVar198._4_4_ <= 1e-06) {
                uVar123 = 0;
              }
              else {
                auVar219 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_));
                auVar198._4_4_ = fVar171 / auVar219._0_4_;
                uVar123 = CONCAT44((int)((ulonglong)(lVar133 * 0x2080) >> 0x20),
                                   fVar334 * auVar198._4_4_) |
                          (ulonglong)(uint)(fVar172 * auVar198._4_4_) << 0x20;
              }
              auVar309 = ZEXT1664(CONCAT124(auVar358,fVar171 / (float)piVar74[0x2e0]));
              auVar198._4_4_ =
                   fVar171 / w.field58_0x3a60.cells[lVar133].field31_0xb80.mass_packed[uVar109];
              auVar327 = ZEXT1664(CONCAT124(auVar358,auVar198._4_4_));
              fVar245 = (float)uVar123;
              fVar333 = (float)(uVar123 >> 0x20);
              fVar334 = fVar208 * fVar245 - fVar334;
              fVar172 = fVar208 * fVar333 - fVar172;
              auVar357 = ZEXT1664(CONCAT124(auVar358,fVar171 / (fVar171 / auVar248._0_4_ +
                                                               fVar171 / (float)piVar74[0x2e0] +
                                                               auVar198._4_4_)));
              auVar198._4_4_ =
                   ((float)piVar74[0x480] +
                   w.field58_0x3a60.cells[lVar133].field52_0x1200.phasing_packed[uVar109]) * -9.2;
              expf();
              fVar334 = fVar334 * auVar198._4_4_;
              fVar172 = fVar172 * auVar198._4_4_;
              auVar198._4_4_ = auVar357._0_4_ * -auVar309._0_4_;
              fVar208 = auVar327._0_4_ * auVar357._0_4_;
              auVar357 = ZEXT1264(ZEXT812(0));
              fVar171 = -(((((cell *)(uVar122 + lVar133 * 0x2080))->field35_0xc80).y_dot_packed
                           [uVar109] - (float)piVar74[800]) * fVar333 +
                         ((((cell *)(uVar122 + lVar133 * 0x2080))->field34_0xc40).x_dot_packed
                          [uVar109] - (float)piVar74[0x310]) * fVar245 + 0.0);
              fVar245 = fVar245 * fVar171;
              in_ZMM5 = ZEXT464((uint)fVar245);
              fVar333 = fVar333 * fVar171;
              piVar74[0x2f0] = (int)(auVar198._4_4_ * fVar334 + (float)piVar74[0x2f0]);
              piVar74[0x300] = (int)(auVar198._4_4_ * fVar172 + (float)piVar74[0x300]);
              piVar74[0x310] = (int)((float)piVar74[0x310] + auVar198._4_4_ * fVar245);
              piVar74[800] = (int)((float)piVar74[800] + auVar198._4_4_ * fVar333);
              (((cell *)(uVar122 + lVar133 * 0x2080))->field32_0xbc0).x_packed[uVar109] =
                   fVar208 * fVar334 +
                   (((cell *)(uVar122 + lVar133 * 0x2080))->field32_0xbc0).x_packed[uVar109];
              (((cell *)(uVar122 + lVar133 * 0x2080))->field33_0xc00).y_packed[uVar109] =
                   fVar208 * fVar172 +
                   (((cell *)(uVar122 + lVar133 * 0x2080))->field33_0xc00).y_packed[uVar109];
              (((cell *)(uVar122 + lVar133 * 0x2080))->field34_0xc40).x_dot_packed[uVar109] =
                   fVar208 * fVar245 +
                   (((cell *)(uVar122 + lVar133 * 0x2080))->field34_0xc40).x_dot_packed[uVar109];
              auVar198._4_4_ =
                   fVar208 * fVar333 +
                   (((cell *)(uVar122 + lVar133 * 0x2080))->field35_0xc80).y_dot_packed[uVar109];
              in_ZMM2 = ZEXT464((uint)auVar198._4_4_);
              (((cell *)(uVar122 + lVar133 * 0x2080))->field35_0xc80).y_dot_packed[uVar109] =
                   auVar198._4_4_;
              auVar248 = ZEXT416((uint)(fVar172 * fVar172 + fVar334 * fVar334 + 0.0));
              auVar248 = vsqrtss_avx(auVar248,auVar248);
              piVar74[0x430] = (int)(auVar248._0_4_ * -0.004 + (float)piVar74[0x430]);
              auVar346 = ZEXT464(0x40c00000);
              auVar353 = ZEXT464(0x3daaaaab);
              auVar350 = ZEXT464(0xc1400000);
              auVar309 = ZEXT464(0x3f000000);
              auVar327 = ZEXT464(0xc0c00000);
              pcVar127 = TlsGetValue_exref;
            }
            else {
LAB_1400ce330:
              piVar74[0x460] = 0;
            }
          }
          uVar122 = w.field58_0x3a60.cells;
          uVar96 = piVar74[0x470];
          if ((((int)uVar96 < 1) ||
              (uVar107 = w.max_cells + 0x7fffffffU & uVar96,
              w.field57_0x3a48.cell_index_table[uVar107].id != uVar96)) ||
             (w.field58_0x3a60.cells == (cell *)0x0)) {
            piVar74[0x470] = 0;
          }
          else {
            auVar248._4_4_ = w.field57_0x3a48.cell_index_table[uVar107].index >> 4;
            uVar109 = (ulonglong)(w.field57_0x3a48.cell_index_table[uVar107].index & 0xf);
            if (w.field58_0x3a60.cells[auVar248._4_4_].field51_0x11c0.linked_packed[uVar109] ==
                *piVar74) {
              fVar171 = w.field58_0x3a60.cells[auVar248._4_4_].field32_0xbc0.x_packed[uVar109] -
                        (float)piVar74[0x2f0];
              fVar334 = w.field58_0x3a60.cells[auVar248._4_4_].field33_0xc00.y_packed[uVar109] -
                        (float)piVar74[0x300];
              fVar208 = (w.field58_0x3a60.cells[auVar248._4_4_].spacing[uVar109 - 0x20] +
                        (float)piVar74[0x370]) * 0.99;
              auVar198._4_4_ = fVar334 * fVar334 + fVar171 * fVar171 + auVar357._0_4_;
              fVar172 = auVar332._0_4_;
              if (auVar198._4_4_ <= 1e-06) {
                auVar198._4_4_ = 0.0;
                fVar245 = 0.0;
              }
              else {
                auVar219 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_));
                fVar245 = fVar172 / auVar219._0_4_;
                auVar198._4_4_ = fVar245 * fVar171;
                fVar245 = fVar245 * fVar334;
                pcVar127 = TlsGetValue_exref;
              }
              fVar333 = fVar172 / w.field58_0x3a60.cells[auVar248._4_4_].field31_0xb80.mass_packed
                                  [uVar109];
              fVar171 = fVar208 * auVar198._4_4_ - fVar171;
              fVar334 = fVar208 * fVar245 - fVar334;
              fVar303 = fVar172 / (fVar172 / (float)piVar74[0x2e0] + fVar333);
              fVar208 = fVar303 * -(fVar172 / (float)piVar74[0x2e0]);
              fVar333 = fVar333 * fVar303;
              fVar172 = -(fVar245 * (w.field58_0x3a60.cells[auVar248._4_4_].field35_0xc80.
                                     y_dot_packed[uVar109] - (float)piVar74[800]) +
                         auVar198._4_4_ *
                         (w.field58_0x3a60.cells[auVar248._4_4_].field34_0xc40.x_dot_packed[uVar109]
                         - (float)piVar74[0x310]) + 0.0);
              auVar332 = ZEXT464(0x3f800000);
              auVar198._4_4_ = auVar198._4_4_ * fVar172;
              in_ZMM5 = ZEXT464((uint)auVar198._4_4_);
              fVar245 = fVar245 * fVar172;
              auVar357 = ZEXT864(0);
              piVar74[0x2f0] = (int)(fVar208 * fVar171 + (float)piVar74[0x2f0]);
              piVar74[0x300] = (int)((float)piVar74[0x300] + fVar208 * fVar334);
              piVar74[0x310] = (int)((float)piVar74[0x310] + fVar208 * auVar198._4_4_);
              piVar74[800] = (int)((float)piVar74[800] + fVar208 * fVar245);
              (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field32_0xbc0).x_packed
              [uVar109] = fVar333 * fVar171 +
                          (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field32_0xbc0).
                          x_packed[uVar109];
              fVar245 = fVar333 * fVar245;
              in_ZMM2 = ZEXT464((uint)fVar245);
              (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field33_0xc00).y_packed
              [uVar109] = fVar333 * fVar334 +
                          (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field33_0xc00).
                          y_packed[uVar109];
              (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field34_0xc40).x_dot_packed
              [uVar109] = fVar333 * auVar198._4_4_ +
                          (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field34_0xc40).
                          x_dot_packed[uVar109];
              (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field35_0xc80).y_dot_packed
              [uVar109] = fVar245 + (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->
                                    field35_0xc80).y_dot_packed[uVar109];
              auVar346 = ZEXT464(0x40c00000);
              auVar353 = ZEXT464(0x3daaaaab);
              auVar350 = ZEXT464(0xc1400000);
              auVar309 = ZEXT464(0x3f000000);
              auVar327 = ZEXT464(0xc0c00000);
            }
            else {
              piVar74[0x470] = 0;
              (((cell *)(uVar122 + (longlong)auVar248._4_4_ * 0x2080))->field51_0x11c0).
              linked_packed[uVar109] = 0;
            }
          }
          uVar69 = uVar69 + 1;
        } while ((int)uVar69 < w.n_cells);
      }
      lVar133 = (*pcVar127)(tls_index);
      pcVar72 = local_f8;
      if ((w.show_trace != 0) && (*(longlong *)(lVar133 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        *(double *)(*(longlong *)(lVar133 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)(lVar133 + 0xb8) = **(undefined8 **)(lVar133 + 0xb8);
      }
    }
    begin_trace_stage("build spatial hash");
    uVar158 = SEXT48(((pcVar72->field0_0x0)._s_0.group)->n_lanes);
    memset();
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
    begin_trace_stage("cells stuff");
    auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
    iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
    uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
    uVar123 = uVar109 & 0xffffffff;
    uVar69 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
    if ((int)uVar109 < (int)uVar69) {
      do {
        pmVar117 = materials_list;
        uVar107 = (uint)uVar123;
        iVar70 = (int)uVar107 >> 4;
        uVar96 = uVar107 & 0xf;
        piVar74 = w.field58_0x3a60.cells[iVar70].field0_0x0.id_packed + uVar96;
        auVar248._4_4_ = w.field58_0x3a60.cells[iVar70].field3_0xc0.material_index_packed[uVar96];
        auVar198._4_4_ = w.field58_0x3a60.cells[iVar70].field56_0x1300.stasis_packed[uVar96];
        if ((auVar198._4_4_ != auVar357._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar357._0_4_))) {
          auVar198._4_4_ = auVar198._4_4_ * -9.2;
          expf();
          lVar133 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
          fVar171 = auVar332._0_4_ - auVar198._4_4_;
          fVar208 = fVar171 * *(float *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15a8 +
                                        lVar133) + auVar198._4_4_ * (float)piVar74[0x2f0];
          piVar74[0x2f0] = (int)fVar208;
          auVar198._4_4_ =
               fVar171 * *(float *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15ac + lVar133) +
               auVar198._4_4_ * (float)piVar74[0x300];
          piVar74[0x300] = (int)auVar198._4_4_;
        }
        else {
          fVar208 = (float)piVar74[0x2f0];
          auVar198._4_4_ = (float)piVar74[0x300];
        }
        uVar109 = (ulonglong)piVar74 & 0xffffffffffffffc0;
        lVar133 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
        *(float *)(uVar109 + 0x15a8 + lVar133) = fVar208;
        *(float *)(uVar109 + 0x15ac + lVar133) = auVar198._4_4_;
        iVar70 = piVar74[800];
        *(int *)(uVar109 + 0x15b0 + lVar133) = piVar74[0x310];
        *(int *)(uVar109 + 0x15b4 + lVar133) = iVar70;
        iVar70 = piVar74[0x360];
        *(int *)(uVar109 + 0x15b8 + lVar133) = piVar74[0x350];
        *(int *)(uVar109 + 0x15bc + lVar133) = iVar70;
        piVar74[0x500] = piVar74[0x1d0];
        iVar70 = piVar74[0x280];
        *(int *)(uVar109 + 0x15c0 + lVar133) = piVar74[0x270];
        *(int *)(uVar109 + 0x15c4 + lVar133) = iVar70;
        auVar317 = ZEXT416((uint)(auVar336._0_4_ * (float)piVar74[0x480]));
        auVar219 = vcmpss_avx(auVar317,ZEXT416(0x33d6bf95),1);
        auVar219 = vandnps_avx(auVar219,auVar317);
        piVar74[0x480] = auVar219._0_4_;
        auVar198._4_4_ = pmVar117[auVar248._4_4_].max_health * 0.01;
        if ((float)piVar74[0x1d0] <= auVar198._4_4_) {
          fVar208 = (float)piVar74[0x270];
        }
        else {
          fVar208 = (float)piVar74[0x270];
          if ((*(byte *)((longlong)piVar74 + 0x1001) & 0x10) == 0) {
            fVar171 = fVar208 * 0.05;
            piVar74[0x1e0] = (int)(fVar171 + (float)piVar74[0x1e0]);
            piVar74[0x1f0] = (int)(fVar171 + (float)piVar74[0x1f0]);
            auVar248 = vmaxss_avx(ZEXT416((uint)auVar198._4_4_),
                                  ZEXT416((uint)((float)piVar74[0x1d0] - fVar171)));
            piVar74[0x1d0] = auVar248._0_4_;
          }
        }
        in_ZMM2 = ZEXT464(0x3f7fdf3b);
        auVar198._4_4_ = fVar208 * 0.9995 + -0.0001;
        piVar74[0x270] = (int)auVar198._4_4_;
        fVar208 = (float)piVar74[0x280] * 0.9995 + -0.0001;
        piVar74[0x280] = (int)fVar208;
        if (auVar198._4_4_ < auVar357._0_4_) {
          piVar74[0x270] = 0;
        }
        if (fVar208 < auVar357._0_4_) {
          piVar74[0x280] = 0;
          piVar74[0x290] = 0;
        }
        uVar123 = (ulonglong)(uVar107 + 1);
      } while (uVar69 != uVar107 + 1);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    pcVar127 = TlsGetValue_exref;
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
    if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
      begin_trace_stage("count cells per box");
      if (0 < w.n_cells) {
        uVar69 = 0;
        auVar248._4_4_ = w.n_cells;
        do {
          uVar122 = w.field58_0x3a60.cells;
          uVar96 = uVar69 >> 4;
          uVar109 = (ulonglong)(uVar69 & 0xf);
          auVar198._4_4_ = w.field58_0x3a60.cells[uVar96].field33_0xc00.y_packed[uVar109];
          fVar208 = w.field58_0x3a60.cells[uVar96].spacing[uVar109 - 0x20];
          in_ZMM2 = ZEXT464((uint)fVar208);
          fVar171 = auVar353._0_4_;
          auVar219 = ZEXT416((uint)(fVar171 * (auVar198._4_4_ - fVar208)));
          auVar219 = vroundss_avx(auVar219,auVar219,9);
          iVar70 = (int)auVar219._0_4_;
          auVar219 = ZEXT416((uint)(fVar171 * (auVar198._4_4_ + fVar208)));
          auVar219 = vroundss_avx(auVar219,auVar219,10);
          if (iVar70 < (int)auVar219._0_4_) {
            fVar334 = w.field58_0x3a60.cells[uVar96].field32_0xbc0.x_packed[uVar109];
            auVar317 = ZEXT416((uint)(fVar171 * (fVar334 - fVar208)));
            auVar317 = vroundss_avx(auVar317,auVar317,9);
            auVar258 = ZEXT416((uint)(fVar171 * (fVar334 + fVar208)));
            auVar258 = vroundss_avx(auVar258,auVar258,10);
            in_ZMM2 = ZEXT1664(auVar258);
            uVar158._0_4_ = (undefined4)auVar258._0_4_;
            if ((int)auVar317._0_4_ < (int)(undefined4)uVar158) {
              iVar136 = iVar70 << 10;
              do {
                fVar208 = auVar198._4_4_ + (auVar309._0_4_ + (float)iVar70) * auVar350._0_4_;
                auVar248 = vminss_avx(auVar346._0_16_,ZEXT416((uint)fVar208));
                auVar248 = vmaxss_avx(auVar327._0_16_,auVar248);
                fVar208 = fVar208 - auVar248._0_4_;
                in_ZMM2 = ZEXT464((uint)fVar208);
                auVar248._4_4_ = (int)auVar317._0_4_;
                do {
                  fVar171 = ((cell *)(uVar122 + (ulonglong)uVar96 * 0x2080))->spacing
                            [uVar109 - 0x20];
                  if (fVar171 <= auVar346._0_4_) {
LAB_1400cef60:
                    w.hash_data[(ushort)((short)iVar136 + (short)auVar248._4_4_)] =
                         w.hash_data[(ushort)((short)iVar136 + (short)auVar248._4_4_)] + 1;
                  }
                  else {
                    fVar172 = fVar334 + (auVar309._0_4_ + (float)auVar248._4_4_) * auVar350._0_4_;
                    auVar258 = vminss_avx(auVar346._0_16_,ZEXT416((uint)fVar172));
                    auVar258 = vmaxss_avx(auVar327._0_16_,auVar258);
                    fVar172 = fVar172 - auVar258._0_4_;
                    in_ZMM5 = ZEXT464((uint)(fVar208 * fVar208));
                    if (fVar208 * fVar208 + auVar357._0_4_ + fVar172 * fVar172 < fVar171 * fVar171)
                    goto LAB_1400cef60;
                  }
                  auVar248._4_4_ = auVar248._4_4_ + 1;
                } while ((undefined4)uVar158 != auVar248._4_4_);
                iVar70 = iVar70 + 1;
                iVar136 = iVar136 + 0x400;
                auVar248._4_4_ = w.n_cells;
              } while (iVar70 != (int)auVar219._0_4_);
            }
          }
          uVar69 = uVar69 + 1;
        } while ((int)uVar69 < auVar248._4_4_);
      }
      pvVar73 = TlsGetValue(tls_index);
      if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
      }
      begin_trace_stage("prefix sum");
      auVar248._4_4_ = 0;
      lVar133 = 0;
      do {
        iVar70 = w.hash_data[lVar133];
        w.hash_data[lVar133] = auVar248._4_4_;
        iVar136 = w.hash_data[lVar133 + 1] + iVar70 + auVar248._4_4_;
        w.hash_data[lVar133 + 1] = iVar70 + auVar248._4_4_;
        iVar70 = w.hash_data[lVar133 + 2] + iVar136;
        w.hash_data[lVar133 + 2] = iVar136;
        auVar248._4_4_ = w.hash_data[lVar133 + 3] + iVar70;
        w.hash_data[lVar133 + 3] = iVar70;
        lVar133 = lVar133 + 4;
      } while (lVar133 != 0x10000);
      if (w.max_hashed_cells < auVar248._4_4_) {
        uVar69 = auVar248._4_4_ - 1U >> 1 | auVar248._4_4_ - 1U;
        uVar69 = uVar69 >> 2 | uVar69;
        uVar69 = uVar69 >> 4 | uVar69;
        uVar69 = uVar69 >> 8 | uVar69;
        auVar248._4_4_ = (uVar69 >> 0x10 | uVar69) + 1;
        w.max_hashed_cells = auVar248._4_4_;
        free(w.hashed_cells);
        w.hashed_cells = (int *)dynamic_alloc((longlong)auVar248._4_4_ * 4);
        free(w.hashed_pos);
        w.hashed_pos = (real_3 *)dynamic_alloc((longlong)auVar248._4_4_ * 0xc);
      }
      pvVar73 = TlsGetValue(tls_index);
      if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
      }
      begin_trace_stage("add cells to hash");
      if (0 < w.n_cells) {
        uVar69 = 0;
        auVar248._4_4_ = w.n_cells;
        do {
          uVar122 = w.field58_0x3a60.cells;
          uVar96 = uVar69 >> 4;
          uVar109 = (ulonglong)(uVar69 & 0xf);
          auVar198._4_4_ = w.field58_0x3a60.cells[uVar96].field33_0xc00.y_packed[uVar109];
          fVar208 = w.field58_0x3a60.cells[uVar96].spacing[uVar109 - 0x20];
          in_ZMM2 = ZEXT464((uint)fVar208);
          fVar171 = auVar353._0_4_;
          auVar219 = ZEXT416((uint)(fVar171 * (auVar198._4_4_ - fVar208)));
          auVar219 = vroundss_avx(auVar219,auVar219,9);
          iVar70 = (int)auVar219._0_4_;
          auVar219 = ZEXT416((uint)(fVar171 * (auVar198._4_4_ + fVar208)));
          auVar219 = vroundss_avx(auVar219,auVar219,10);
          if (iVar70 < (int)auVar219._0_4_) {
            fVar334 = w.field58_0x3a60.cells[uVar96].field32_0xbc0.x_packed[uVar109];
            auVar317 = ZEXT416((uint)(fVar171 * (fVar334 - fVar208)));
            auVar317 = vroundss_avx(auVar317,auVar317,9);
            auVar258 = ZEXT416((uint)(fVar171 * (fVar334 + fVar208)));
            auVar258 = vroundss_avx(auVar258,auVar258,10);
            in_ZMM2 = ZEXT1664(auVar258);
            uVar158._0_4_ = (undefined4)auVar258._0_4_;
            if ((int)auVar317._0_4_ < (int)(undefined4)uVar158) {
              iVar136 = iVar70 << 10;
              do {
                fVar208 = auVar198._4_4_ + (auVar309._0_4_ + (float)iVar70) * auVar350._0_4_;
                auVar248 = vminss_avx(auVar346._0_16_,ZEXT416((uint)fVar208));
                auVar248 = vmaxss_avx(auVar327._0_16_,auVar248);
                fVar208 = fVar208 - auVar248._0_4_;
                in_ZMM2 = ZEXT464((uint)fVar208);
                auVar248._4_4_ = (int)auVar317._0_4_;
                do {
                  fVar171 = ((cell *)(uVar122 + (ulonglong)uVar96 * 0x2080))->spacing
                            [uVar109 - 0x20];
                  if (fVar171 <= auVar346._0_4_) {
LAB_1400cf290:
                    uVar116 = (short)iVar136 + (short)auVar248._4_4_;
                    iVar97 = w.hash_data[uVar116];
                    w.hash_data[uVar116] = iVar97 + 1;
                    w.hashed_cells[iVar97] = uVar69;
                    prVar87 = w.hashed_pos;
                    fVar171 = ((cell *)(uVar122 + (ulonglong)uVar96 * 0x2080))->spacing
                              [uVar109 - 0x20];
                    w.hashed_pos[iVar97].field0_0x0._s_0.x = fVar334;
                    prVar87[iVar97].field0_0x0._s_0.y = auVar198._4_4_;
                    prVar87[iVar97].field0_0x0._s_0.z = fVar171;
                  }
                  else {
                    fVar172 = fVar334 + (auVar309._0_4_ + (float)auVar248._4_4_) * auVar350._0_4_;
                    auVar258 = vminss_avx(auVar346._0_16_,ZEXT416((uint)fVar172));
                    auVar258 = vmaxss_avx(auVar327._0_16_,auVar258);
                    fVar172 = fVar172 - auVar258._0_4_;
                    in_ZMM5 = ZEXT464((uint)(fVar208 * fVar208));
                    if (fVar208 * fVar208 + auVar357._0_4_ + fVar172 * fVar172 < fVar171 * fVar171)
                    goto LAB_1400cf290;
                  }
                  auVar248._4_4_ = auVar248._4_4_ + 1;
                } while ((undefined4)uVar158 != auVar248._4_4_);
                iVar70 = iVar70 + 1;
                iVar136 = iVar136 + 0x400;
                auVar248._4_4_ = w.n_cells;
              } while (iVar70 != (int)auVar219._0_4_);
            }
          }
          uVar69 = uVar69 + 1;
        } while ((int)uVar69 < auVar248._4_4_);
      }
      pcVar127 = TlsGetValue_exref;
      pvVar73 = TlsGetValue(tls_index);
      if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
      }
    }
    lVar133 = (*pcVar127)(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)(lVar133 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)(lVar133 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)(lVar133 + 0xb8) = **(undefined8 **)(lVar133 + 0xb8);
    }
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
    begin_trace_stage("check_cell_collisions");
    auVar248._4_4_ = w.n_cells + 0x3f;
    TlsGetValue(tls_index);
    puVar83 = (ulong64 *)stalloc((longlong)(auVar248._4_4_ >> 6) << 3);
    memset();
    piVar74 = (int *)stalloc((longlong)w.n_cells << 2);
    pvVar73 = TlsGetValue(tls_index);
    *(undefined8 *)(*(longlong *)((longlong)pvVar73 + 0x60) + 0x20) =
         *(undefined8 *)(*(longlong *)((longlong)pvVar73 + 0x60) + 0x18);
    auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
    iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
    uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
    uVar123 = uVar109 & 0xffffffff;
    uVar69 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
    if ((int)uVar109 < (int)uVar69) {
      do {
        uVar96 = (uint)uVar123;
        check_collisions_for_cell
                  ((cell *)((longlong)&w.field58_0x3a60.cells[(int)uVar96 >> 4].field0_0x0 +
                           (ulonglong)(uVar96 & 0xf) * 4),puVar83,piVar74);
        uVar123 = (ulonglong)(uVar96 + 1);
      } while (uVar69 != uVar96 + 1);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
    begin_trace_stage("update_bone_stats");
    auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
    iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
    iVar149.id = 0;
    iVar149.index = 0;
    iVar136 = (w.bones.n_elements * auVar248._4_4_) / iVar70;
    iVar70 = ((auVar248._4_4_ + 1) * w.bones.n_elements) / iVar70;
    auVar353 = ZEXT1264(ZEXT812(0));
    if (iVar136 < iVar70) {
      lVar133 = (longlong)iVar136;
      do {
        uVar122 = w.bones.field3_0x20.elements;
        if (1 < w.bones.field3_0x20.elements[lVar133].n_cells) {
          w.bones.field3_0x20.elements[lVar133].inertia = 1.0;
          rVar78 = (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0;
          iVar149 = (id_index)((bone *)(uVar122 + lVar133 * 0x50))->first_cell;
          auVar248 = auVar353._0_16_;
          *(undefined1 (*) [16])
           ((longlong)&(((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).field0_0x0 + 4) =
               auVar248;
          ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass = (real_2)auVar248._0_8_;
          ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot = (real_2)auVar248._8_8_;
          uVar69 = *(uint *)((longlong)iVar149 + 0x40);
          if (((0 < (int)uVar69) &&
              (uVar158 = w.bodies.field0_0x0.index_table,
              w.bodies.field0_0x0.index_table[w.bodies.n_max_elements + 0x7fffffffU & uVar69].id ==
              uVar69)) && (w.bodies.field3_0x20.elements != (body *)0x0)) {
            fVar208 = rVar78.x;
            fVar171 = rVar78.y;
            rVar78 = (((bone *)(uVar122 + lVar133 * 0x50))->plan_center).field0_0x0._s_0;
            auVar248 = vpinsrd_avx(ZEXT416((uint)rVar78.y),rVar78.x,1);
            auVar23._0_8_ = ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass;
            auVar23._8_8_ = ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot;
            in_ZMM5 = ZEXT1664(auVar23);
            auVar314._0_12_ = ZEXT812(0);
            auVar314._12_4_ = 0.0;
            auVar327 = ZEXT1664(auVar332._0_16_);
            auVar198._4_4_ = 0.0;
            auVar355._8_4_ = 0x80000000;
            auVar355._0_8_ = 0x8000000080000000;
            auVar355._12_4_ = 0x80000000;
            do {
              fVar245 = *(float *)((longlong)iVar149 + 0xb80) *
                        *(float *)((longlong)iVar149 + 0x12c0);
              fVar334 = *(float *)((longlong)iVar149 + 0xc40);
              fVar172 = *(float *)((longlong)iVar149 + 0xc80);
              auVar219 = vinsertps_avx(ZEXT416(*(uint *)((longlong)iVar149 + 0xbc0)),
                                       ZEXT416((uint)fVar334),0x10);
              auVar317 = vinsertps_avx(ZEXT416(*(uint *)((longlong)iVar149 + 0xc00)),
                                       ZEXT416((uint)fVar172),0x10);
              auVar317 = vunpcklps_avx(auVar219,auVar317);
              auVar219 = vshufps_avx(ZEXT416((uint)fVar245),ZEXT416((uint)fVar245),0);
              fVar304 = auVar219._0_4_ * auVar317._0_4_ + in_ZMM5._0_4_;
              fVar310 = auVar219._4_4_ * auVar317._4_4_ + in_ZMM5._4_4_;
              auVar306._0_8_ = CONCAT44(fVar310,fVar304);
              auVar306._8_4_ = auVar219._8_4_ * auVar317._8_4_ + in_ZMM5._8_4_;
              auVar306._12_4_ = auVar219._12_4_ * auVar317._12_4_ + in_ZMM5._12_4_;
              in_ZMM5 = ZEXT1664(auVar306);
              ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass = (real_2)auVar306._0_8_;
              ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot = (real_2)auVar306._8_8_;
              fVar333 = *(float *)((longlong)iVar149 + 0xbc0) - fVar208;
              fVar303 = *(float *)((longlong)iVar149 + 0xc00) - fVar171;
              auVar357 = ZEXT864(0);
              auVar198._4_4_ =
                   (fVar333 * fVar172 * fVar245 - fVar303 * fVar334 * fVar245) + auVar198._4_4_;
              auVar309 = ZEXT464(0x3f000000);
              ((bone *)(uVar122 + lVar133 * 0x50))->omega = auVar198._4_4_;
              fVar334 = (fVar303 * fVar303 + fVar333 * fVar333 + 0.0) * fVar245 + auVar327._0_4_;
              auVar327 = ZEXT464((uint)fVar334);
              ((bone *)(uVar122 + lVar133 * 0x50))->inertia = fVar334;
              uVar158 = (ulonglong)iVar149 & 0xffffffffffffffc0;
              uVar109 = (ulonglong)((uint)((ulonglong)iVar149 >> 2) & 0xf);
              auVar342._0_4_ = (float)((id_index *)(uVar158 + 0x1580))[uVar109 * 0x16].id;
              auVar342._4_12_ = auVar324._4_12_;
              auVar219 = vandps_avx(auVar342,auVar355);
              auVar219 = vinsertps_avx(auVar219,ZEXT416((uint)(auVar342._0_4_ * 0.5)),0x1c);
              auVar343._0_4_ = (float)((id_index *)(uVar158 + 0x1580))[uVar109 * 0x16].index;
              auVar343._4_12_ = auVar324._4_12_;
              auVar317 = vmovsldup_avx(auVar343);
              auVar330._0_4_ = auVar317._0_4_ * 0.4330127 + auVar219._0_4_ + 0.0;
              auVar330._4_4_ = auVar317._4_4_ * 0.25 + auVar219._4_4_ + 0.0;
              auVar330._8_4_ = auVar317._8_4_ * 0.0 + auVar219._8_4_ + 0.0;
              auVar330._12_4_ = auVar317._12_4_ * 0.0 + auVar219._12_4_ + 0.0;
              auVar362 = vsubps_avx(auVar330,auVar248);
              auVar219 = vmovshdup_avx(auVar362);
              auVar219 = vinsertps_avx(ZEXT416((uint)(auVar219._0_4_ * fVar333 * fVar245 + 0.0)),
                                       ZEXT416((uint)(auVar362._0_4_ * -(fVar333 * fVar245))),0x10);
              auVar258 = vmovsldup_avx(ZEXT416((uint)(fVar303 * fVar245)));
              auVar317 = vinsertps_avx(auVar314,ZEXT416((uint)(((bone *)(uVar122 + lVar133 * 0x50))
                                                              ->orientation).field0_0x0._s_0.y),0x10
                                      );
              auVar314._0_4_ = auVar317._0_4_ + auVar219._0_4_ + auVar362._0_4_ * auVar258._0_4_;
              auVar314._4_4_ = auVar317._4_4_ + auVar219._4_4_ + auVar362._4_4_ * auVar258._4_4_;
              auVar314._8_4_ = auVar317._8_4_ + auVar219._8_4_ + auVar362._8_4_ * auVar258._8_4_;
              auVar314._12_4_ =
                   auVar317._12_4_ + auVar219._12_4_ + auVar362._12_4_ * auVar258._12_4_;
              rVar124 = (real_2_u_0)vmovlps_avx(auVar314);
              (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0 = rVar124;
              iVar149 = ((id_index *)(uVar158 + 0x1628))[uVar109 * 0x16];
            } while (iVar149 != (id_index)0x0);
            fVar172 = ((bone *)(uVar122 + lVar133 * 0x50))->mass;
            auVar332 = ZEXT464(0x3f800000);
            if (0.0 < fVar172) {
              auVar24._0_8_ = ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass;
              auVar24._8_8_ = ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot;
              auVar219 = vpshufd_avx(auVar24,0xe8);
              auVar248 = vpsrlq_avx(auVar24,0x20);
              auVar317 = vpshufd_avx(auVar248,0xe8);
              auVar248 = vmovsldup_avx(ZEXT416((uint)(1.0 / fVar172)));
              auVar307._0_4_ = auVar248._0_4_ * auVar219._0_4_;
              auVar307._4_4_ = auVar248._4_4_ * auVar219._4_4_;
              auVar307._8_4_ = auVar248._8_4_ * auVar219._8_4_;
              auVar307._12_4_ = auVar248._12_4_ * auVar219._12_4_;
              auVar284._0_4_ = auVar248._0_4_ * auVar317._0_4_;
              auVar284._4_4_ = auVar248._4_4_ * auVar317._4_4_;
              auVar284._8_4_ = auVar248._8_4_ * auVar317._8_4_;
              auVar284._12_4_ = auVar248._12_4_ * auVar317._12_4_;
              auVar248 = vunpcklps_avx(auVar307,auVar284);
              ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass = (real_2)auVar248._0_8_;
              ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot = (real_2)auVar248._8_8_;
              fVar208 = auVar307._0_4_ - fVar208;
              in_ZMM5 = ZEXT464((uint)fVar208);
              fVar245 = auVar284._0_4_ - fVar171;
              auVar248 = vmaxss_avx(auVar332._0_16_,
                                    ZEXT416((uint)(fVar334 -
                                                  fVar172 * (fVar245 * fVar245 +
                                                            fVar208 * fVar208 + 0.0))));
              ((bone *)(uVar122 + lVar133 * 0x50))->inertia = auVar248._0_4_;
              auVar219 = vpshufd_avx(auVar24,0xfa);
              auVar317 = vpshufd_avx(auVar24,0xff);
              auVar190._0_4_ =
                   (auVar198._4_4_ - (fVar208 * auVar317._0_4_ - fVar245 * auVar219._0_4_)) /
                   auVar248._0_4_;
              auVar190._4_12_ = SUB6012((undefined1  [60])0x0,0);
              auVar248 = vminss_avx(SUB6416(ZEXT464(0x40860a92),0),auVar190);
              auVar248 = vmaxss_avx(SUB6416(ZEXT464(0xc0860a92),0),auVar248);
              ((bone *)(uVar122 + lVar133 * 0x50))->omega = auVar248._0_4_;
            }
            auVar198._4_4_ = (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0._s_0.x;
            fVar208 = (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0._s_0.y;
            fVar334 = fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + 0.0;
            auVar336 = ZEXT464(0x3f777777);
            if (1e-06 < fVar334) {
              auVar248 = vsqrtss_avx(ZEXT416((uint)fVar334),ZEXT416((uint)fVar334));
              fVar334 = 1.0 / auVar248._0_4_;
              rVar124 = (real_2_u_0)
                        (CONCAT44(fVar171,fVar334 * auVar198._4_4_) |
                        (ulonglong)(uint)(fVar334 * fVar208) << 0x20);
            }
            else {
              rVar124 = (real_2_u_0)0x0;
            }
            in_ZMM2 = ZEXT464((uint)fVar334);
            auVar346 = ZEXT464(0x40c00000);
            auVar350 = ZEXT464(0xc1400000);
            auVar353 = ZEXT1264(ZEXT812(0));
            auVar327 = ZEXT464(0xc0c00000);
            (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0 = rVar124;
            iVar149.id = 0;
            iVar149.index = 0;
          }
        }
        lVar133 = lVar133 + 1;
      } while (iVar70 != (int)lVar133);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    pcVar127 = TlsGetValue_exref;
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18);
    if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
      begin_trace_stage("resolve bone collisions");
      if (0 < w.bones.n_elements) {
        lVar133 = 0;
        uVar122 = w.bones.field3_0x20.elements;
        auVar248._4_4_ = w.bones.n_elements;
        local_2e8 = puVar83;
        local_2e0 = piVar74;
        do {
          if (1 < ((bone *)(uVar122 + lVar133 * 0x50))->n_cells) {
            auVar327 = ZEXT464((uint)((bone *)(uVar122 + lVar133 * 0x50))->mass);
            auVar309 = ZEXT464((uint)((bone *)(uVar122 + lVar133 * 0x50))->inertia);
            local_2f0 = lVar133;
            (*pcVar127)(tls_index);
            local_170 = stalloc((longlong)auVar248._4_4_ * 0x28);
            memset();
            local_1c0 = (real_2_u_0_s_0)stalloc((longlong)w.bones.n_elements << 2);
            pcVar84 = ((bone *)(uVar122 + lVar133 * 0x50))->first_cell;
            pcVar119 = local_208;
            if (pcVar84 != (cell *)0x0) {
              auVar248 = vmaxss_avx(auVar327._0_16_,auVar332._0_16_);
              local_1d8._0_4_ = auVar332._0_4_ / auVar248._0_4_;
              auVar248 = vmaxss_avx(auVar309._0_16_,auVar332._0_16_);
              auVar198._4_4_ = auVar332._0_4_ / auVar248._0_4_;
              auVar309 = ZEXT1664(CONCAT124(auVar332._4_12_,auVar198._4_4_));
              local_190 = local_190 & 0xffffffff00000000;
              local_128._s_0.x = auVar198._4_4_;
              do {
                if (0 < (pcVar84->field46_0x1080).n_contacts) {
                  local_1b8 = (real_2_u_0_s_0)
                              (materials_list + (pcVar84->field3_0xc0).material_index);
                  iVar149 = (id_index)
                            (((ulonglong)pcVar84 & 0xffffffffffffffc0) +
                             (ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0 + 0x1580);
                  lVar110 = 0x1c;
                  lVar163 = 0;
                  local_1e8._0_8_ = iVar149;
                  do {
                    local_208._4_4_ = (float)((ulonglong)pcVar119 >> 0x20);
                    lVar137 = *(undefined8 *)((longlong)iVar149 + 0x18);
                    uVar109 = *(ulonglong *)(lVar137 + -0x1c + lVar110);
                    if (((*(byte *)(uVar109 + 0x1001) & 0x40) == 0) ||
                       (uVar69 = *(uint *)(uVar109 + 0x80), uVar69 == 0)) {
                      fVar171 = (pcVar84->field32_0xbc0).x -
                                (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0.
                                _s_0.x;
                      fVar172 = (pcVar84->field33_0xc00).y -
                                (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0.
                                _s_0.y;
                      fVar347 = auVar309._0_4_;
                      local_168._0_4_ = fVar171;
                      fVar333 = auVar332._0_4_ / *(float *)(uVar109 + 0xb80);
                      fVar245 = 0.0 - fVar347 * fVar172 * fVar171;
                      auVar220._0_4_ = (float)(int)*(undefined8 *)iVar149;
                      auVar220._4_8_ = SUB128(ZEXT812(0),4);
                      auVar220._12_4_ = 0;
                      fVar303 = (float)(int)((ulonglong)*(undefined8 *)iVar149 >> 0x20);
                      auVar198._4_4_ = *(float *)(lVar137 + -0x14 + lVar110);
                      fVar208 = *(float *)(lVar137 + -0x10 + lVar110);
                      fVar334 = ((bone *)(uVar122 + lVar133 * 0x50))->spacing * 4.0;
                      fVar171 = fVar208 * ((fVar333 +
                                           fVar347 * fVar171 * fVar171 + (float)local_1d8._0_4_) *
                                           fVar208 + auVar198._4_4_ * fVar245 + 0.0) +
                                auVar198._4_4_ *
                                (fVar245 * fVar208 +
                                auVar198._4_4_ *
                                (fVar333 + fVar347 * fVar172 * fVar172 + (float)local_1d8._0_4_) +
                                0.0) + 0.0;
                      auVar352 = ZEXT816(0);
                      if (0.0 < fVar171) {
                        auVar352._0_4_ = auVar332._0_4_ / fVar171;
                        auVar352._4_12_ = auVar332._4_12_;
                      }
                      auVar327 = ZEXT1664(auVar352);
                      auVar248._4_4_ = *(int *)(lVar137 + lVar110);
                      iVar70 = *(int *)(lVar137 + -4 + lVar110);
                      local_208._0_4_ = *(float *)(lVar137 + -0xc + lVar110);
                      auVar315._8_4_ = 0x80000000;
                      auVar315._0_8_ = 0x8000000080000000;
                      auVar315._12_4_ = 0x80000000;
                      auVar219 = vandps_avx(auVar220,auVar315);
                      fVar333 = (fVar303 * 0.25 + auVar220._0_4_ * 0.5 + 0.0) -
                                (((bone *)(uVar122 + lVar133 * 0x50))->plan_center).field0_0x0._s_0.
                                x;
                      fVar303 = (fVar303 * 0.4330127 + auVar219._0_4_ + 0.0) -
                                (((bone *)(uVar122 + lVar133 * 0x50))->plan_center).field0_0x0._s_0.
                                y;
                      fVar171 = (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0._s_0.
                                x;
                      fVar245 = (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0._s_0.
                                y;
                      fVar347 = *(float *)(uVar109 + 0xc40) -
                                ((((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).
                                 field0_0x0._s_0.x -
                                ((bone *)(uVar122 + lVar133 * 0x50))->omega *
                                fVar334 * (fVar333 * fVar245 + fVar303 * fVar171));
                      lVar137 = (ulonglong)((uint)(uVar109 >> 2) & 0xf) * 0xb0;
                      fVar173 = *(float *)((uVar109 & 0xffffffffffffffc0) + 0x15a8 + lVar137) -
                                *(float *)((longlong)iVar149 + 0x28);
                      fVar279 = *(float *)((uVar109 & 0xffffffffffffffc0) + 0x15ac + lVar137) -
                                *(float *)((longlong)iVar149 + 0x2c);
                      fVar333 = *(float *)(uVar109 + 0xc80) -
                                (((bone *)(uVar122 + lVar133 * 0x50))->omega *
                                 (fVar333 * fVar171 - fVar303 * fVar245) * fVar334 +
                                (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).
                                field0_0x0._s_0.y);
                      auVar335._0_12_ = ZEXT812(0);
                      auVar335._12_4_ = 0;
                      auVar309 = ZEXT1664(auVar335);
                      auVar219 = vmaxss_avx(ZEXT416((uint)(auVar352._0_4_ *
                                                          -(fVar333 * fVar208 +
                                                           fVar347 * auVar198._4_4_ + 0.0))),
                                            auVar335);
                      auVar324 = ZEXT1664(auVar219);
                      fVar245 = ((pcVar84->field52_0x1200).phasing + *(float *)(uVar109 + 0x1200)) *
                                -9.2;
                      expf();
                      pmVar117 = materials_list;
                      fVar171 = fVar245 * auVar324._0_4_;
                      iVar136 = *(int *)(uVar109 + 0xc0);
                      fVar334 = *(float *)((longlong)local_1b8 + 0x74) * 0.5 *
                                materials_list[iVar136].friction;
                      auVar259 = ZEXT416((uint)fVar334);
                      local_188._0_4_ = fVar172;
                      if (auVar309._0_4_ < fVar334) {
                        auVar259._0_4_ =
                             fVar334 / (*(float *)((longlong)local_1b8 + 0x74) +
                                       materials_list[iVar136].friction);
                        auVar259._4_12_ = SUB6012((undefined1  [60])0x0,0);
                      }
                      auVar285._0_4_ = auVar259._0_4_ ^ 0x80000000;
                      auVar285._4_4_ = 0x80000000;
                      auVar285._8_4_ = auVar259._8_4_ ^ 0x80000000;
                      auVar285._12_4_ = auVar259._12_4_ ^ 0x80000000;
                      auVar219 = vminss_avx(auVar259,ZEXT416((uint)(fVar333 * auVar198._4_4_ +
                                                                   (0.0 - fVar347 * fVar208))));
                      auVar219 = vmaxss_avx(auVar285,auVar219);
                      fVar333 = auVar219._0_4_ * -fVar171;
                      fVar334 = fVar171 * fVar208 + auVar198._4_4_ * fVar333;
                      fVar303 = auVar198._4_4_ * fVar171 - fVar333 * fVar208;
                      fVar333 = -1.0 / (pcVar84->field31_0xb80).mass;
                      fVar347 = 1.0 / *(float *)(uVar109 + 0xb80);
                      auVar219 = vminss_avx(ZEXT416((uint)((float)local_208 -
                                                          (fVar279 * fVar208 +
                                                          fVar173 * auVar198._4_4_ + 0.0))),
                                            SUB6416(ZEXT464(0x3f800000),0));
                      fVar245 = fVar245 * auVar219._0_4_;
                      auVar198._4_4_ = auVar198._4_4_ * fVar245;
                      fVar245 = fVar245 * fVar208;
                      fVar208 = fVar333 * fVar303;
                      auVar357 = ZEXT464((uint)fVar208);
                      fVar333 = fVar333 * fVar334;
                      auVar350 = ZEXT464((uint)fVar333);
                      (pcVar84->field34_0xc40).x_dot = fVar208 + (pcVar84->field34_0xc40).x_dot;
                      (pcVar84->field35_0xc80).y_dot = fVar333 + (pcVar84->field35_0xc80).y_dot;
                      *(float *)(uVar109 + 0xc40) = fVar347 * fVar303 + *(float *)(uVar109 + 0xc40);
                      *(float *)(uVar109 + 0xc80) = fVar347 * fVar334 + *(float *)(uVar109 + 0xc80);
                      fVar334 = -auVar327._0_4_ / (pcVar84->field31_0xb80).mass;
                      fVar208 = auVar198._4_4_ * fVar334;
                      auVar353 = ZEXT464((uint)fVar208);
                      fVar334 = fVar245 * fVar334;
                      auVar336 = ZEXT464((uint)fVar334);
                      fVar333 = auVar327._0_4_ / *(float *)(uVar109 + 0xb80);
                      auVar198._4_4_ = auVar198._4_4_ * fVar333;
                      in_ZMM5 = ZEXT464((uint)auVar198._4_4_);
                      (pcVar84->field32_0xbc0).x = fVar208 + (pcVar84->field32_0xbc0).x;
                      (pcVar84->field33_0xc00).y = fVar334 + (pcVar84->field33_0xc00).y;
                      *(float *)(uVar109 + 0xbc0) = auVar198._4_4_ + *(float *)(uVar109 + 0xbc0);
                      *(float *)(uVar109 + 0xc00) = fVar245 * fVar333 + *(float *)(uVar109 + 0xc00);
                      auVar219 = vmaxss_avx(SUB6416(ZEXT464(0x3dcccccd),0),
                                            ZEXT416((uint)(*(float *)(uVar109 + 0x700) *
                                                          pmVar117[iVar136].hardness)));
                      fVar245 = (fVar171 * (float)iVar70 * *(float *)((longlong)local_1b8 + 0x54)) /
                                auVar219._0_4_;
                      auVar219 = vmaxss_avx(SUB6416(ZEXT464(0x3dcccccd),0),
                                            ZEXT416((uint)((pcVar84->field13_0x700).maturity *
                                                          *(float *)((longlong)local_1b8 + 0x5c))));
                      auVar198._4_4_ =
                           (fVar171 * (float)auVar248._4_4_ * pmVar117[iVar136].sharpness) /
                           auVar219._0_4_;
                      (pcVar84->field14_0x740).health =
                           (pcVar84->field14_0x740).health - auVar198._4_4_;
                      (pcVar84->field15_0x780).damage =
                           auVar198._4_4_ + (pcVar84->field15_0x780).damage;
                      (pcVar84->field21_0x900).dealt = fVar245 + (pcVar84->field21_0x900).dealt;
                      *(float *)(uVar109 + 0x740) = *(float *)(uVar109 + 0x740) - fVar245;
                      *(float *)(uVar109 + 0x780) = fVar245 + *(float *)(uVar109 + 0x780);
                      *(float *)(uVar109 + 0x900) = auVar198._4_4_ + *(float *)(uVar109 + 0x900);
                      auVar346 = ZEXT464((uint)((pcVar84->field31_0xb80).mass /
                                               ((bone *)(uVar122 + lVar133 * 0x50))->mass));
                      auVar309 = ZEXT464((uint)local_128._0_4_);
                      auVar198._4_4_ =
                           (float)local_128._0_4_ *
                           ((float)local_168._0_4_ * fVar334 - fVar172 * fVar208) *
                           (pcVar84->field31_0xb80).mass;
                      auVar327 = ZEXT464((uint)auVar198._4_4_);
                      auVar324 = ZEXT464((uint)auVar198._4_4_);
                      fVar334 = (float)local_168._0_4_;
                      cosf();
                      auVar332 = ZEXT1664(auVar324._0_16_);
                      auVar324 = ZEXT1664(auVar327._0_16_);
                      sinf();
                      pcVar119 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208);
                      auVar198._4_4_ =
                           (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0._s_0.x;
                      fVar208 = (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0._s_0.
                                y;
                      fVar171 = auVar332._0_4_ * fVar208;
                      in_ZMM2 = ZEXT464((uint)fVar171);
                      (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0 =
                           (real_2_u_0)
                           (CONCAT44(extraout_var_04,
                                     auVar332._0_4_ * auVar198._4_4_ - auVar324._0_4_ * fVar208) |
                           (ulonglong)(uint)(auVar198._4_4_ * auVar324._0_4_ + fVar171) << 0x20);
                      auVar248 = vinsertps_avx(auVar353._0_16_,auVar357._0_16_,0x10);
                      auVar219 = vinsertps_avx(auVar336._0_16_,auVar350._0_16_,0x10);
                      auVar219 = vunpcklps_avx(auVar248,auVar219);
                      auVar248 = vshufps_avx(auVar346._0_16_,auVar346._0_16_,0);
                      auVar198._4_4_ =
                           (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.y;
                      fVar208 = (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).
                                field0_0x0._s_0.x;
                      fVar171 = (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).
                                field0_0x0._s_0.y;
                      (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.x =
                           auVar219._0_4_ * auVar248._0_4_ +
                           (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.x;
                      (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.y =
                           auVar219._4_4_ * auVar248._4_4_ + auVar198._4_4_;
                      (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).field0_0x0._s_0.x =
                           auVar219._8_4_ * auVar248._8_4_ + fVar208;
                      (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).field0_0x0._s_0.y =
                           auVar219._12_4_ * auVar248._12_4_ + fVar171;
                      auVar332 = ZEXT464(0x3f800000);
                      ((bone *)(uVar122 + lVar133 * 0x50))->omega =
                           auVar309._0_4_ * (fVar334 * auVar350._0_4_ - fVar172 * auVar357._0_4_) +
                           ((bone *)(uVar122 + lVar133 * 0x50))->omega;
                      auVar324 = ZEXT464((uint)local_120._0_4_);
                      iVar149 = (id_index)local_1e8._0_8_;
                    }
                    else {
                      if (((int)uVar69 < 1) ||
                         (uVar96 = w.bones.n_max_elements + 0x7fffffffU & uVar69,
                         w.bones.field0_0x0.index_table[uVar96].id != uVar69)) {
                        pbVar103 = (bone *)0x0;
                      }
                      else {
                        pbVar103 = w.bones.field3_0x20.elements +
                                   w.bones.field0_0x0.index_table[uVar96].index;
                      }
                      auVar248._4_4_ =
                           (int)((longlong)pbVar103 - w.bones.field3_0x20._0_8_ >> 4) * -0x33333333;
                      puVar75 = local_170 + (longlong)auVar248._4_4_ * 0x28;
                      if ((*(longlong *)(local_170 + (longlong)auVar248._4_4_ * 0x28) == 0) ||
                         (*(float *)(puVar75 + 0x1c) < *(float *)(lVar137 + -8 + lVar110))) {
                        if (*(longlong *)(puVar75 + 8) == 0) {
                          lVar142 = (longlong)(int)(float)local_190;
                          local_190 = CONCAT44(local_190._4_4_,(int)(float)local_190 + 1);
                          *(int *)((longlong)local_1c0 + lVar142 * 4) = auVar248._4_4_;
                        }
                        *(cell **)puVar75 = pcVar84;
                        *(undefined8 *)(puVar75 + 8) = *(undefined8 *)(lVar137 + -0x1c + lVar110);
                        *(undefined8 *)(puVar75 + 0x10) = *(undefined8 *)(lVar137 + -0x14 + lVar110)
                        ;
                        *(undefined4 *)(puVar75 + 0x18) = *(undefined4 *)(lVar137 + -0xc + lVar110);
                        *(undefined4 *)(puVar75 + 0x1c) = *(undefined4 *)(lVar137 + -8 + lVar110);
                        *(undefined4 *)(puVar75 + 0x20) = *(undefined4 *)(lVar137 + -4 + lVar110);
                        *(undefined4 *)(puVar75 + 0x24) = *(undefined4 *)(lVar137 + lVar110);
                      }
                    }
                    lVar163 = lVar163 + 1;
                    lVar110 = lVar110 + 0x20;
                  } while (lVar163 < (pcVar84->field46_0x1080).n_contacts);
                }
                local_208._4_4_ = (float)((ulonglong)pcVar119 >> 0x20);
                pcVar84 = *(cell **)(((ulonglong)pcVar84 & 0xffffffffffffffc0) + 0x1628 +
                                    (ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0);
              } while (pcVar84 != (cell *)0x0);
              if (0 < (int)(float)local_190) {
                local_228 = (undefined1 *)(local_190 & 0xffffffff);
                puVar92 = (undefined1 *)0x0;
                do {
                  uVar102 = w.bones.field3_0x20.elements;
                  pmVar117 = materials_list;
                  local_1b8.x = SUB84(puVar92,0);
                  local_1b8.y = (float)((ulonglong)puVar92 >> 0x20);
                  lVar163 = (longlong)*(int *)((longlong)local_1c0 + (longlong)puVar92 * 4);
                  uVar109 = *(ulonglong *)(local_170 + lVar163 * 0x28);
                  uVar123 = *(ulonglong *)(local_170 + lVar163 * 0x28 + 8);
                  auVar248 = vmaxss_avx(ZEXT416((uint)w.bones.field3_0x20.elements[lVar163].mass),
                                        auVar332._0_16_);
                  fVar173 = auVar332._0_4_;
                  fVar303 = fVar173 / auVar248._0_4_;
                  auVar248 = vmaxss_avx(ZEXT416((uint)w.bones.field3_0x20.elements[lVar163].inertia)
                                        ,auVar332._0_16_);
                  local_208._0_4_ = fVar173 / auVar248._0_4_;
                  fVar171 = *(float *)(uVar109 + 0xbc0) -
                            (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.x
                  ;
                  fVar334 = *(float *)(uVar109 + 0xc00) -
                            (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.y
                  ;
                  fVar172 = *(float *)(uVar123 + 0xbc0) -
                            w.bones.field3_0x20.elements[lVar163].center_of_mass.field0_0x0._s_0.x;
                  fVar245 = *(float *)(uVar123 + 0xc00) -
                            w.bones.field3_0x20.elements[lVar163].center_of_mass.field0_0x0._s_0.y;
                  fVar347 = auVar309._0_4_;
                  local_190 = CONCAT44(local_190._4_4_,fVar334);
                  local_1e8 = ZEXT416((uint)fVar171);
                  local_188._0_4_ = fVar245;
                  fVar333 = fVar347 * fVar334 * -fVar171 - (float)local_208 * fVar245 * fVar172;
                  local_168._0_4_ = fVar172;
                  uVar106 = uVar109 & 0xffffffffffffffc0;
                  lVar110 = (ulonglong)((uint)(uVar109 >> 2) & 0xf) * 0xb0;
                  iVar149 = (id_index)(uVar123 & 0xffffffffffffffc0);
                  uVar121 = (ulonglong)((uint)(uVar123 >> 2) & 0xf);
                  uVar158 = (real_2_u_0)0x0;
                  auVar260._8_8_ = 0;
                  auVar260._0_8_ = *(ulonglong *)(uVar106 + 0x1580 + lVar110);
                  auVar299._8_8_ = 0;
                  auVar299._0_8_ = ((undefined8 *)((longlong)iVar149 + 0x1580))[uVar121 * 0x16];
                  auVar219 = vpunpcklqdq_avx(auVar299,auVar260);
                  auVar248 = vpshufd_avx(auVar219,0xe8);
                  auVar219 = vpsrlq_avx(auVar219,0x20);
                  auVar219 = vpshufd_avx(auVar219,0xe8);
                  auVar248 = vcvtdq2ps_avx(auVar248);
                  auVar219 = vcvtdq2ps_avx(auVar219);
                  auVar198._4_4_ = *(float *)(local_170 + lVar163 * 0x28 + 0x10);
                  fVar208 = *(float *)(local_170 + lVar163 * 0x28 + 0x14);
                  auVar325 = ZEXT416(0) << 0x20;
                  fVar171 = fVar208 * (fVar208 * (fVar347 * fVar171 * fVar171 +
                                                  (float)local_1d8._0_4_ +
                                                 fVar172 * fVar172 * (float)local_208 + fVar303) +
                                      auVar198._4_4_ * fVar333 + 0.0) +
                            auVar198._4_4_ *
                            (fVar208 * fVar333 +
                            auVar198._4_4_ *
                            (fVar347 * fVar334 * fVar334 + (float)local_1d8._0_4_ +
                            fVar245 * fVar245 * (float)local_208 + fVar303) + 0.0) + 0.0;
                  auVar317 = vinsertps_avx(ZEXT416((uint)w.bones.field3_0x20.elements[lVar163].
                                                         spacing),
                                           ZEXT416((uint)((bone *)(uVar122 + lVar133 * 0x50))->
                                                         spacing),0x10);
                  fVar334 = auVar317._0_4_ * 4.0;
                  fVar172 = auVar317._4_4_ * 4.0;
                  fVar245 = auVar317._8_4_ * 0.0;
                  fVar333 = auVar317._12_4_ * 0.0;
                  if (0.0 < fVar171) {
                    auVar325._0_4_ = fVar173 / fVar171;
                    auVar325._4_12_ = auVar332._4_12_;
                  }
                  auVar324 = ZEXT1664(auVar325);
                  auVar25._0_8_ = ((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot;
                  auVar25._8_8_ = ((bone *)(uVar122 + lVar133 * 0x50))->orientation;
                  auVar317 = vandps_avx(auVar248,___xmm_80000000800000008000000080000000);
                  auVar261._0_4_ = auVar219._0_4_ * 0.4330127 + auVar317._0_4_ + 0.0;
                  auVar261._4_4_ = auVar219._4_4_ * 0.4330127 + auVar317._4_4_ + 0.0;
                  auVar261._8_4_ = auVar219._8_4_ * 0.0 + auVar317._8_4_ + 0.0;
                  auVar261._12_4_ = auVar219._12_4_ * 0.0 + auVar317._12_4_ + 0.0;
                  auVar287._8_8_ = 0;
                  auVar287._0_8_ = w.bones.field3_0x20.elements[lVar163].plan_center.field0_0x0;
                  auVar316._8_8_ = 0;
                  auVar316._0_8_ = (((bone *)(uVar122 + lVar133 * 0x50))->plan_center).field0_0x0;
                  auVar362 = vpunpcklqdq_avx(auVar287,auVar316);
                  auVar317 = vpsrlq_avx(auVar362,0x20);
                  auVar317 = vpshufd_avx(auVar317,0xe8);
                  auVar178 = vsubps_avx(auVar261,auVar317);
                  auVar26._0_8_ = w.bones.field3_0x20.elements[lVar163].center_of_mass_dot;
                  auVar26._8_8_ = w.bones.field3_0x20.elements[lVar163].orientation;
                  auVar258 = vpunpckhqdq_avx(auVar26,auVar25);
                  auVar317 = vpshufd_avx(auVar258,0xe8);
                  auVar222._0_4_ = auVar219._0_4_ * 0.25 + auVar248._0_4_ * 0.5 + 0.0;
                  auVar222._4_4_ = auVar219._4_4_ * 0.25 + auVar248._4_4_ * 0.5 + 0.0;
                  auVar222._8_4_ = auVar219._8_4_ * 0.0 + auVar248._8_4_ * 0.0 + 0.0;
                  auVar222._12_4_ = auVar219._12_4_ * 0.0 + auVar248._12_4_ * 0.0 + 0.0;
                  auVar248 = vpshufd_avx(auVar362,0xe8);
                  auVar362 = vsubps_avx(auVar222,auVar248);
                  auVar248 = vpsrlq_avx(auVar258,0x20);
                  auVar258 = vpshufd_avx(auVar248,0xe8);
                  auVar223._0_4_ = auVar178._0_4_ * auVar258._0_4_;
                  auVar223._4_4_ = auVar178._4_4_ * auVar258._4_4_;
                  auVar223._8_4_ = auVar178._8_4_ * auVar258._8_4_;
                  auVar223._12_4_ = auVar178._12_4_ * auVar258._12_4_;
                  auVar344._0_4_ = auVar317._0_4_ * auVar362._0_4_;
                  auVar344._4_4_ = auVar317._4_4_ * auVar362._4_4_;
                  auVar344._8_4_ = auVar317._8_4_ * auVar362._8_4_;
                  auVar344._12_4_ = auVar317._12_4_ * auVar362._12_4_;
                  auVar294 = vsubps_avx(auVar344,auVar223);
                  auVar248 = vpunpcklqdq_avx(auVar26,auVar25);
                  auVar219 = vinsertps_avx(ZEXT416((uint)w.bones.field3_0x20.elements[lVar163].omega
                                                  ),ZEXT416((uint)((bone *)(uVar122 + lVar133 * 0x50
                                                                           ))->omega),0x10);
                  auVar248 = vpsrlq_avx(auVar248,0x20);
                  auVar248 = vpshufd_avx(auVar248,0xe8);
                  auVar224._0_4_ = auVar219._0_4_ * fVar334 * auVar294._0_4_ + auVar248._0_4_;
                  auVar224._4_4_ = auVar219._4_4_ * fVar172 * auVar294._4_4_ + auVar248._4_4_;
                  auVar224._8_4_ = auVar219._8_4_ * fVar245 * auVar294._8_4_ + auVar248._8_4_;
                  auVar224._12_4_ = auVar219._12_4_ * fVar333 * auVar294._12_4_ + auVar248._12_4_;
                  fVar303 = *(float *)((undefined8 *)((longlong)iVar149 + 0x15a8) + uVar121 * 0x16)
                            - *(float *)(uVar106 + 0x15a8 + lVar110);
                  fVar347 = *(float *)((longlong)iVar149 + 0x15ac + uVar121 * 0xb0) -
                            *(float *)(uVar106 + 0x15ac + lVar110);
                  auVar248._4_4_ = *(int *)(uVar109 + 0xc0);
                  iVar70 = *(int *)(local_170 + lVar163 * 0x28 + 0x20);
                  fVar171 = *(float *)(local_170 + lVar163 * 0x28 + 0x18);
                  iVar136 = *(int *)(local_170 + lVar163 * 0x28 + 0x24);
                  auVar192._0_4_ =
                       auVar219._0_4_ *
                       fVar334 * (auVar362._0_4_ * auVar258._0_4_ + auVar317._0_4_ * auVar178._0_4_)
                  ;
                  auVar192._4_4_ =
                       auVar219._4_4_ *
                       fVar172 * (auVar362._4_4_ * auVar258._4_4_ + auVar317._4_4_ * auVar178._4_4_)
                  ;
                  auVar192._8_4_ =
                       auVar219._8_4_ *
                       fVar245 * (auVar362._8_4_ * auVar258._8_4_ + auVar317._8_4_ * auVar178._8_4_)
                  ;
                  auVar192._12_4_ =
                       auVar219._12_4_ *
                       fVar333 * (auVar362._12_4_ * auVar258._12_4_ +
                                 auVar317._12_4_ * auVar178._12_4_);
                  auVar219 = vpinsrd_avx(ZEXT416((uint)w.bones.field3_0x20.elements[lVar163].
                                                       center_of_mass_dot.field0_0x0._s_0.x),
                                         (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).
                                         field0_0x0._s_0.x,1);
                  auVar317 = vsubps_avx(auVar219,auVar192);
                  auVar219 = vmovshdup_avx(auVar317);
                  fVar333 = auVar317._0_4_ - auVar219._0_4_;
                  auVar219 = vmovshdup_avx(auVar224);
                  fVar173 = auVar224._0_4_ - auVar219._0_4_;
                  auVar368._0_12_ = ZEXT812(0);
                  auVar368._12_4_ = 0;
                  auVar327 = ZEXT1664(auVar368);
                  auVar219 = vmaxss_avx(ZEXT416((uint)(auVar325._0_4_ *
                                                      -(fVar173 * fVar208 +
                                                       fVar333 * auVar198._4_4_ + 0.0))),auVar368);
                  auVar309 = ZEXT1664(auVar219);
                  fVar334 = (*(float *)(uVar109 + 0x1200) + *(float *)(uVar123 + 0x1200)) * -9.2;
                  expf();
                  pmVar64 = materials_list;
                  fVar172 = auVar309._0_4_ * fVar334;
                  iVar97 = *(int *)(uVar123 + 0xc0);
                  fVar245 = pmVar117[auVar248._4_4_].friction * 0.5 *
                            materials_list[iVar97].friction;
                  auVar262 = ZEXT416((uint)fVar245);
                  fVar279 = auVar327._0_4_;
                  if (fVar279 < fVar245) {
                    auVar262._0_4_ =
                         fVar245 / (pmVar117[auVar248._4_4_].friction +
                                   materials_list[iVar97].friction);
                    auVar262._4_12_ = SUB6012((undefined1  [60])0x0,0);
                  }
                  auVar286._0_4_ = auVar262._0_4_ ^ 0x80000000;
                  auVar286._4_4_ = 0x80000000;
                  auVar286._8_4_ = auVar262._8_4_ ^ 0x80000000;
                  auVar286._12_4_ = auVar262._12_4_ ^ 0x80000000;
                  auVar219 = vminss_avx(auVar262,ZEXT416((uint)(fVar173 * auVar198._4_4_ +
                                                               (fVar279 - fVar333 * fVar208))));
                  auVar219 = vmaxss_avx(auVar286,auVar219);
                  fVar245 = auVar219._0_4_ * -fVar172;
                  fVar333 = -1.0 / *(float *)(uVar109 + 0xb80);
                  auVar219 = vminss_avx(ZEXT416((uint)(fVar171 -
                                                      (fVar208 * fVar347 +
                                                      fVar279 + fVar303 * auVar198._4_4_))),
                                        SUB6416(ZEXT464(0x3f800000),0));
                  fVar334 = fVar334 * auVar219._0_4_;
                  fVar347 = auVar198._4_4_ * fVar172 - fVar208 * fVar245;
                  fVar303 = auVar198._4_4_ * fVar334;
                  auVar198._4_4_ = fVar208 * fVar172 + auVar198._4_4_ * fVar245;
                  fVar208 = fVar208 * fVar334;
                  fVar171 = fVar333 * fVar347;
                  local_2a8 = ZEXT416((uint)fVar171);
                  fVar333 = fVar333 * auVar198._4_4_;
                  local_2d8 = ZEXT416((uint)fVar333);
                  uVar69 = *(uint *)(uVar123 + 0xb80);
                  *(float *)(uVar109 + 0xc40) = fVar171 + *(float *)(uVar109 + 0xc40);
                  *(float *)(uVar109 + 0xc80) = fVar333 + *(float *)(uVar109 + 0xc80);
                  auVar219 = vblendps_avx(auVar324._0_16_,___xmm_00000000000000003f80000000000000,
                                          0xe);
                  auVar317 = vinsertps_avx(ZEXT416(*(uint *)(uVar123 + 0xb80)),ZEXT416(uVar69),0x10)
                  ;
                  auVar219 = vdivps_avx(auVar219,auVar317);
                  auVar317 = vinsertps_avx(ZEXT416((uint)fVar303),ZEXT416((uint)fVar347),0x10);
                  local_2c8._0_4_ = auVar317._0_4_ * auVar219._0_4_;
                  local_2c8._4_4_ = auVar317._4_4_ * auVar219._4_4_;
                  fStack_2c0 = auVar317._8_4_ * auVar219._8_4_;
                  fStack_2bc = auVar317._12_4_ * auVar219._12_4_;
                  local_288 = vmovshdup_avx(_local_2c8);
                  *(float *)(uVar123 + 0xc40) = local_288._0_4_ + *(float *)(uVar123 + 0xc40);
                  auVar317 = vinsertps_avx(ZEXT416((uint)fVar208),ZEXT416((uint)auVar198._4_4_),0x10
                                          );
                  auVar367._0_4_ = auVar317._0_4_ * auVar219._0_4_;
                  auVar367._4_4_ = auVar317._4_4_ * auVar219._4_4_;
                  auVar367._8_4_ = auVar317._8_4_ * auVar219._8_4_;
                  auVar367._12_4_ = auVar317._12_4_ * auVar219._12_4_;
                  auVar336 = ZEXT1664(auVar367);
                  local_278 = vmovshdup_avx(auVar367);
                  *(float *)(uVar123 + 0xc80) = local_278._0_4_ + *(float *)(uVar123 + 0xc80);
                  fVar171 = -auVar324._0_4_ / *(float *)(uVar109 + 0xb80);
                  fVar303 = fVar303 * fVar171;
                  auVar309 = ZEXT464((uint)fVar303);
                  auVar198._4_4_ = fVar303 + *(float *)(uVar109 + 0xbc0);
                  in_ZMM5 = ZEXT464((uint)auVar198._4_4_);
                  fVar208 = fVar208 * fVar171;
                  auVar324 = ZEXT464((uint)fVar208);
                  *(float *)(uVar109 + 0xbc0) = auVar198._4_4_;
                  *(float *)(uVar109 + 0xc00) = fVar208 + *(float *)(uVar109 + 0xc00);
                  *(float *)(uVar123 + 0xbc0) = (float)local_2c8._0_4_ + *(float *)(uVar123 + 0xbc0)
                  ;
                  *(float *)(uVar123 + 0xc00) = auVar367._0_4_ + *(float *)(uVar123 + 0xc00);
                  auVar198._4_4_ = pmVar117[auVar248._4_4_].sharpness;
                  auVar219 = vmaxss_avx(SUB6416(ZEXT464(0x3dcccccd),0),
                                        ZEXT416((uint)(*(float *)(uVar123 + 0x700) *
                                                      pmVar64[iVar97].hardness)));
                  auVar248 = vmaxss_avx(SUB6416(ZEXT464(0x3dcccccd),0),
                                        ZEXT416((uint)(*(float *)(uVar109 + 0x700) *
                                                      pmVar117[auVar248._4_4_].hardness)));
                  fVar171 = (fVar172 * (float)iVar136 * pmVar64[iVar97].sharpness) / auVar248._0_4_;
                  *(float *)(uVar109 + 0x740) = *(float *)(uVar109 + 0x740) - fVar171;
                  auVar198._4_4_ = (fVar172 * (float)iVar70 * auVar198._4_4_) / auVar219._0_4_;
                  *(float *)(uVar109 + 0x780) = fVar171 + *(float *)(uVar109 + 0x780);
                  *(float *)(uVar109 + 0x900) = auVar198._4_4_ + *(float *)(uVar109 + 0x900);
                  *(float *)(uVar123 + 0x740) = *(float *)(uVar123 + 0x740) - auVar198._4_4_;
                  *(float *)(uVar123 + 0x780) = auVar198._4_4_ + *(float *)(uVar123 + 0x780);
                  *(float *)(uVar123 + 0x900) = fVar171 + *(float *)(uVar123 + 0x900);
                  auVar357 = ZEXT464(*(uint *)(uVar123 + 0xb80));
                  auVar327 = ZEXT464((uint)(*(float *)(uVar109 + 0xb80) /
                                           ((bone *)(uVar122 + lVar133 * 0x50))->mass));
                  fVar171 = *(float *)(uVar109 + 0xb80) * (float)local_128._0_4_;
                  fVar334 = ((float)local_1e8._0_4_ * fVar208 - (float)local_190 * fVar303) *
                            fVar171;
                  fVar172 = fVar334;
                  fVar245 = (float)local_1e8._0_4_;
                  fVar333 = (float)local_190;
                  cosf();
                  sinf();
                  auVar198._4_4_ =
                       (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0._s_0.x;
                  fVar208 = (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0._s_0.y;
                  auVar248 = vinsertps_avx(auVar309._0_16_,local_2a8,0x10);
                  auVar219 = vinsertps_avx(auVar324._0_16_,local_2d8,0x10);
                  auVar219 = vunpcklps_avx(auVar248,auVar219);
                  auVar248 = vshufps_avx(auVar327._0_16_,auVar327._0_16_,0);
                  (((bone *)(uVar122 + lVar133 * 0x50))->orientation).field0_0x0 =
                       (real_2_u_0)
                       (CONCAT44(extraout_var_05,fVar172 * auVar198._4_4_ - fVar334 * fVar208) |
                       (ulonglong)(uint)(auVar198._4_4_ * fVar334 + fVar172 * fVar208) << 0x20);
                  auVar198._4_4_ =
                       (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.y;
                  fVar208 = (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).field0_0x0.
                            _s_0.x;
                  fVar334 = (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).field0_0x0.
                            _s_0.y;
                  (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.x =
                       auVar219._0_4_ * auVar248._0_4_ +
                       (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.x;
                  (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass).field0_0x0._s_0.y =
                       auVar219._4_4_ * auVar248._4_4_ + auVar198._4_4_;
                  (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).field0_0x0._s_0.x =
                       auVar219._8_4_ * auVar248._8_4_ + fVar208;
                  (((bone *)(uVar122 + lVar133 * 0x50))->center_of_mass_dot).field0_0x0._s_0.y =
                       auVar219._12_4_ * auVar248._12_4_ + fVar334;
                  ((bone *)(uVar122 + lVar133 * 0x50))->omega =
                       (fVar245 * local_2d8._0_4_ - fVar333 * local_2a8._0_4_) * fVar171 +
                       ((bone *)(uVar122 + lVar133 * 0x50))->omega;
                  auVar327 = ZEXT464((uint)local_188._0_4_);
                  fVar171 = auVar357._0_4_ * (float)local_208;
                  auVar309 = ZEXT1664(CONCAT124(auVar357._4_12_,
                                                auVar357._0_4_ /
                                                ((bone *)(uVar102 + lVar163 * 0x50))->mass));
                  fVar334 = ((float)local_168._0_4_ * auVar336._0_4_ -
                            (float)local_188._0_4_ * (float)local_2c8._0_4_) * fVar171;
                  auVar324 = ZEXT464((uint)fVar334);
                  fVar245 = (float)local_2c8._0_4_;
                  fVar333 = (float)local_2c8._4_4_;
                  fVar303 = fStack_2c0;
                  fVar347 = fStack_2bc;
                  fVar173 = (float)local_168._0_4_;
                  cosf();
                  auVar324 = ZEXT1664(auVar324._0_16_);
                  sinf();
                  pcVar119 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208);
                  auVar198._4_4_ =
                       (((bone *)(uVar102 + lVar163 * 0x50))->orientation).field0_0x0._s_0.x;
                  fVar208 = (((bone *)(uVar102 + lVar163 * 0x50))->orientation).field0_0x0._s_0.y;
                  fVar172 = auVar324._0_4_ * fVar208;
                  in_ZMM2 = ZEXT464((uint)fVar172);
                  (((bone *)(uVar102 + lVar163 * 0x50))->orientation).field0_0x0 =
                       (real_2_u_0)
                       (CONCAT44(extraout_var_06,auVar324._0_4_ * auVar198._4_4_ - fVar334 * fVar208
                                ) | (ulonglong)(uint)(auVar198._4_4_ * fVar334 + fVar172) << 0x20);
                  auVar248 = vmovsldup_avx(auVar309._0_16_);
                  auVar309 = ZEXT464((uint)local_128._0_4_);
                  auVar332 = ZEXT464(0x3f800000);
                  auVar221._0_4_ = fVar245 * auVar248._0_4_;
                  auVar221._4_4_ = fVar333 * auVar248._4_4_;
                  auVar221._8_4_ = fVar303 * auVar248._8_4_;
                  auVar221._12_4_ = fVar347 * auVar248._12_4_;
                  auVar191._0_4_ = auVar336._0_4_ * auVar248._0_4_;
                  auVar191._4_4_ = auVar336._4_4_ * auVar248._4_4_;
                  auVar191._8_4_ = auVar336._8_4_ * auVar248._8_4_;
                  auVar191._12_4_ = auVar336._12_4_ * auVar248._12_4_;
                  auVar248 = vunpcklps_avx(auVar221,auVar191);
                  auVar198._4_4_ =
                       (((bone *)(uVar102 + lVar163 * 0x50))->center_of_mass).field0_0x0._s_0.y;
                  fVar208 = (((bone *)(uVar102 + lVar163 * 0x50))->center_of_mass_dot).field0_0x0.
                            _s_0.x;
                  fVar334 = (((bone *)(uVar102 + lVar163 * 0x50))->center_of_mass_dot).field0_0x0.
                            _s_0.y;
                  (((bone *)(uVar102 + lVar163 * 0x50))->center_of_mass).field0_0x0._s_0.x =
                       auVar248._0_4_ +
                       (((bone *)(uVar102 + lVar163 * 0x50))->center_of_mass).field0_0x0._s_0.x;
                  (((bone *)(uVar102 + lVar163 * 0x50))->center_of_mass).field0_0x0._s_0.y =
                       auVar248._4_4_ + auVar198._4_4_;
                  (((bone *)(uVar102 + lVar163 * 0x50))->center_of_mass_dot).field0_0x0._s_0.x =
                       auVar248._8_4_ + fVar208;
                  (((bone *)(uVar102 + lVar163 * 0x50))->center_of_mass_dot).field0_0x0._s_0.y =
                       auVar248._12_4_ + fVar334;
                  ((bone *)(uVar102 + lVar163 * 0x50))->omega =
                       (fVar173 * (float)local_278._0_4_ - auVar327._0_4_ * (float)local_288._0_4_)
                       * fVar171 + ((bone *)(uVar102 + lVar163 * 0x50))->omega;
                  puVar92 = (undefined1 *)((longlong)&((material_t *)local_1b8)->id + 1);
                  auVar324 = ZEXT464((uint)local_120._0_4_);
                } while (local_228 != puVar92);
              }
            }
            local_208 = pcVar119;
            stunalloc((void *)local_1c0);
            stunalloc(local_170);
            auVar346 = ZEXT464(0x40c00000);
            auVar350 = ZEXT464(0xc1400000);
            auVar357 = ZEXT1264(ZEXT812(0));
            auVar309 = ZEXT464(0x3f000000);
            auVar336 = ZEXT464(0x3f777777);
            auVar327 = ZEXT464(0xc0c00000);
            lVar133 = local_2f0;
            puVar83 = local_2e8;
            pcVar127 = TlsGetValue_exref;
            uVar122 = w.bones.field3_0x20.elements;
            piVar74 = local_2e0;
            auVar248._4_4_ = w.bones.n_elements;
          }
          lVar133 = lVar133 + 1;
        } while (lVar133 < auVar248._4_4_);
      }
      lVar133 = (*pcVar127)(tls_index);
      if ((w.show_trace != 0) && (*(longlong *)(lVar133 + 0xa8) != 0)) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        in_ZMM5 = ZEXT464(0) << 0x20;
        *(double *)(*(longlong *)(lVar133 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)(lVar133 + 0xb8) = **(undefined8 **)(lVar133 + 0xb8);
      }
    }
    piVar160 = subgrid_ends;
    lVar133 = (*pcVar127)(tls_index);
    *(undefined8 *)(*(longlong *)(lVar133 + 0x60) + 0x18) =
         *(undefined8 *)(*(longlong *)(lVar133 + 0x60) + 0x20);
    stunalloc(piVar74);
    stunalloc(puVar83);
    lVar133 = (*pcVar127)(tls_index);
    EnterSynchronizationBarrier(*(longlong *)(lVar133 + 8) + 0x18,0);
    begin_trace_stage("do_electric_update");
    auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
    iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
    rVar147 = (real_2_u_0)0x0;
    uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
    uVar106 = uVar109 & 0xffffffff;
    uVar123 = (longlong)((auVar248._4_4_ + 1) * w.n_cells) / (longlong)iVar70;
    uVar69 = (uint)uVar123;
    pcVar84 = (cell *)(uVar123 & 0xffffffff);
    if ((int)uVar109 < (int)uVar69) {
      do {
        uVar122 = w.bones.field3_0x20.elements;
        pmVar117 = materials_list;
        uVar166 = (uint)uVar106;
        auVar248._4_4_ = (int)uVar166 >> 4;
        uVar107 = uVar166 & 0xf;
        uVar96 = w.field58_0x3a60.cells[auVar248._4_4_].field1_0x40.body_id_packed[uVar107];
        if ((int)uVar96 < 1) {
LAB_1400d0d10:
          pbVar93 = (body *)0x0;
        }
        else {
          iVar149.id = 0;
          iVar149.index = 0;
          rVar147._s_0.x = (float)(w.bodies.n_max_elements + 0x7fffffffU & uVar96);
          rVar147._s_0.y = 0.0;
          if (w.bodies.field0_0x0.index_table[(longlong)rVar147].id != uVar96) goto LAB_1400d0d10;
          pbVar93 = w.bodies.field3_0x20.elements +
                    w.bodies.field0_0x0.index_table[(longlong)rVar147].index;
        }
        pcVar33 = (cell *)(w.field58_0x3a60.cells[auVar248._4_4_].field0_0x0.id_packed + uVar107);
        auVar248._4_4_ =
             w.field58_0x3a60.cells[auVar248._4_4_].field3_0xc0.material_index_packed[uVar107];
        uVar96 = (int)((pcVar33->field44_0x1000).flags << 0x11) >> 0x1f &
                 (pcVar33->field2_0x80).bone_id;
        if (((0 < (int)uVar96) &&
            (uVar107 = w.bones.n_max_elements + 0x7fffffffU & uVar96,
            w.bones.field0_0x0.index_table[uVar107].id == uVar96)) &&
           (w.bones.field3_0x20.elements != (bone *)0x0)) {
          iVar70 = w.bones.field0_0x0.index_table[uVar107].index;
          uVar102 = *(undefined8 *)
                     (((ulonglong)pcVar33 & 0xffffffffffffffc0) + 0x1580 +
                     (ulonglong)((uint)((ulonglong)pcVar33 >> 2) & 0xf) * 0xb0);
          auVar193._0_4_ = (float)(int)uVar102;
          auVar193._4_12_ = in_ZMM5._4_12_;
          auVar198._4_4_ = (float)(int)((ulonglong)uVar102 >> 0x20);
          auVar219 = vandps_avx(auVar193,___xmm_80000000800000008000000080000000);
          fVar172 = (auVar198._4_4_ * 0.25 + auVar357._0_4_ + auVar309._0_4_ * auVar193._0_4_) -
                    w.bones.field3_0x20.elements[iVar70].plan_center.field0_0x0._s_0.x;
          fVar245 = (auVar198._4_4_ * 0.4330127 + auVar357._0_4_ + auVar219._0_4_) -
                    w.bones.field3_0x20.elements[iVar70].plan_center.field0_0x0._s_0.y;
          auVar198._4_4_ = w.bones.field3_0x20.elements[iVar70].orientation.field0_0x0._s_0.x;
          fVar208 = w.bones.field3_0x20.elements[iVar70].orientation.field0_0x0._s_0.y;
          fVar334 = w.bones.field3_0x20.elements[iVar70].spacing * 4.0;
          fVar171 = fVar334 * (fVar172 * auVar198._4_4_ - fVar245 * fVar208);
          fVar334 = fVar334 * (fVar172 * fVar208 + fVar245 * auVar198._4_4_);
          auVar346 = ZEXT464((uint)((fVar171 +
                                    w.bones.field3_0x20.elements[iVar70].center_of_mass.field0_0x0.
                                    _s_0.x) - (pcVar33->field32_0xbc0).x));
          fVar208 = (fVar334 + w.bones.field3_0x20.elements[iVar70].center_of_mass.field0_0x0._s_0.y
                    ) - (pcVar33->field33_0xc00).y;
          auVar327 = ZEXT464((uint)(pcVar33->field55_0x12c0).rigidity);
          auVar198._4_4_ = (pcVar33->field56_0x1300).stasis * -9.2;
          expf();
          auVar198._4_4_ = auVar327._0_4_ * auVar198._4_4_;
          auVar327 = ZEXT464(0xc0c00000);
          (pcVar33->field32_0xbc0).x = auVar346._0_4_ * auVar198._4_4_ + (pcVar33->field32_0xbc0).x;
          (pcVar33->field33_0xc00).y = fVar208 * auVar198._4_4_ + (pcVar33->field33_0xc00).y;
          auVar350 = ZEXT464(0xc1400000);
          auVar198._4_4_ = (pcVar33->field55_0x12c0).rigidity;
          in_ZMM5 = ZEXT464((uint)auVar198._4_4_);
          fVar208 = auVar198._4_4_ *
                    (((((bone *)(uVar122 + (longlong)iVar70 * 0x50))->center_of_mass_dot).field0_0x0
                      ._s_0.x - fVar334 * ((bone *)(uVar122 + (longlong)iVar70 * 0x50))->omega) -
                    (pcVar33->field34_0xc40).x_dot);
          auVar198._4_4_ =
               auVar198._4_4_ *
               ((fVar171 * ((bone *)(uVar122 + (longlong)iVar70 * 0x50))->omega +
                (((bone *)(uVar122 + (longlong)iVar70 * 0x50))->center_of_mass_dot).field0_0x0._s_0.
                y) - (pcVar33->field35_0xc80).y_dot);
          (pcVar33->field34_0xc40).x_dot = (pcVar33->field34_0xc40).x_dot + fVar208;
          (pcVar33->field35_0xc80).y_dot = (pcVar33->field35_0xc80).y_dot + auVar198._4_4_;
          (pcVar33->field36_0xcc0).rot_x =
               (((bone *)(uVar122 + (longlong)iVar70 * 0x50))->orientation).field0_0x0._s_0.x;
          (pcVar33->field37_0xd00).rot_y =
               (((bone *)(uVar122 + (longlong)iVar70 * 0x50))->orientation).field0_0x0._s_0.y;
          if (((pcVar33->field12_0x6c0).frozen_multiplier < auVar332._0_4_) &&
             ((pcVar33->field11_0x680).temperature < -0.5)) {
            auVar219 = vmaxss_avx(ZEXT416((uint)((pcVar33->field12_0x6c0).frozen_multiplier *
                                                pmVar117[auVar248._4_4_].max_radial_force)),
                                  auVar309._0_16_);
            fVar171 = auVar219._0_4_ * (float)(6 - POPCOUNT((pcVar33->field44_0x1000).flags & 0x3f))
            ;
            if (fVar171 * fVar171 <
                (auVar198._4_4_ * auVar198._4_4_ + auVar357._0_4_ + fVar208 * fVar208) *
                (pcVar33->field31_0xb80).mass * (pcVar33->field31_0xb80).mass) {
              (pcVar33->field44_0x1000).flags = (pcVar33->field44_0x1000).flags | 0x3f;
              ((bone *)(uVar122 + (longlong)iVar70 * 0x50))->floodfill_needed = 1;
              if (pbVar93 != (body *)0x0) {
                pbVar93->floodfill_needed = 1;
              }
              auVar198._4_4_ =
                   (pcVar33->field14_0x740).health *
                   (auVar332._0_4_ - (pcVar33->field12_0x6c0).frozen_multiplier);
              (pcVar33->field19_0x880).ice_damage =
                   auVar198._4_4_ + (pcVar33->field19_0x880).ice_damage;
              (pcVar33->field15_0x780).damage = auVar198._4_4_ + (pcVar33->field15_0x780).damage;
              (pcVar33->field14_0x740).health = (pcVar33->field14_0x740).health - auVar198._4_4_;
            }
          }
        }
        (pcVar33->field58_0x1380).old_voltage = (pcVar33->field4_0x100).voltage;
        (pcVar33->field59_0x13c0).old_temperature = (pcVar33->field11_0x680).temperature;
        auVar198._4_4_ = (pcVar33->field62_0x1480).total_conductance;
        fVar208 = auVar357._0_4_;
        if (fVar208 < auVar198._4_4_) {
          (pcVar33->field61_0x1440).equilibrium_voltage =
               (pcVar33->field61_0x1440).equilibrium_voltage / auVar198._4_4_;
        }
        fVar171 = (pcVar33->field61_0x1440).equilibrium_voltage;
        if ((pmVar117[auVar248._4_4_].capacitance != fVar208) ||
           (NAN(pmVar117[auVar248._4_4_].capacitance) || NAN(fVar208))) {
          auVar198._4_4_ = -auVar198._4_4_ * pmVar117[auVar248._4_4_].inv_capacitance;
          expf();
          auVar198._4_4_ = auVar332._0_4_ - auVar198._4_4_;
          auVar346 = ZEXT464((uint)(pcVar33->field4_0x100).voltage);
          fVar208 = -(pcVar33->field62_0x1480).total_conductance *
                    pmVar117[auVar248._4_4_].inv_capacitance;
          expf();
          auVar350 = ZEXT464(0xc1400000);
          fVar171 = fVar171 * auVar198._4_4_ + auVar346._0_4_ * fVar208;
        }
        (pcVar33->field4_0x100).voltage = fVar171;
        (pcVar33->field62_0x1480).total_conductance = pmVar117[auVar248._4_4_].leak_conductivity;
        (pcVar33->field61_0x1440).equilibrium_voltage = 0.0;
        auVar198._4_4_ = (pcVar33->field64_0x1500).total_heat_conductance;
        fVar208 = auVar357._0_4_;
        if (fVar208 < auVar198._4_4_) {
          (pcVar33->field63_0x14c0).equilibrium_temperature =
               (pcVar33->field63_0x14c0).equilibrium_temperature / auVar198._4_4_;
        }
        fVar171 = (pcVar33->field63_0x14c0).equilibrium_temperature;
        if ((pmVar117[auVar248._4_4_].heat_capacity != fVar208) ||
           (NAN(pmVar117[auVar248._4_4_].heat_capacity) || NAN(fVar208))) {
          auVar198._4_4_ = -auVar198._4_4_ * pmVar117[auVar248._4_4_].inv_heat_capacity;
          expf();
          auVar198._4_4_ = auVar332._0_4_ - auVar198._4_4_;
          auVar346 = ZEXT464((uint)(pcVar33->field11_0x680).temperature);
          fVar208 = -(pcVar33->field64_0x1500).total_heat_conductance *
                    pmVar117[auVar248._4_4_].inv_heat_capacity;
          expf();
          auVar350 = ZEXT464(0xc1400000);
          fVar171 = fVar171 * auVar198._4_4_ + auVar346._0_4_ * fVar208;
        }
        (pcVar33->field11_0x680).temperature = fVar171;
        auVar198._4_4_ =
             (float)POPCOUNT((pcVar33->field44_0x1000).flags & 0x3f) *
             pmVar117[auVar248._4_4_].leak_heat_conductivity;
        lVar133 = (ulonglong)((uint)((ulonglong)pcVar33 >> 2) & 0xf) * 0xb0;
        fVar208 = (pcVar33->field34_0xc40).x_dot -
                  *(float *)(((ulonglong)pcVar33 & 0xffffffffffffffc0) + 0x15dc + lVar133);
        fVar171 = (pcVar33->field35_0xc80).y_dot -
                  *(float *)(((ulonglong)pcVar33 & 0xffffffffffffffc0) + 0x15e0 + lVar133);
        auVar219 = ZEXT416((uint)(fVar171 * fVar171 + auVar357._0_4_ + fVar208 * fVar208));
        auVar219 = vsqrtss_avx(auVar219,auVar219);
        auVar346 = ZEXT1664(CONCAT412(auVar219._12_4_ ^ 0x80000000,
                                      CONCAT48(auVar219._8_4_ ^ 0x80000000,
                                               auVar219._0_8_ ^ 0x8000000080000000)));
        expf();
        (pcVar33->field64_0x1500).total_heat_conductance = auVar198._4_4_ * (2.0 - auVar346._0_4_);
        (pcVar33->field63_0x14c0).equilibrium_temperature = 0.0;
        auVar219 = vmaxss_avx(ZEXT416((uint)(pcVar33->field11_0x680).temperature),
                              ZEXT416(0xc2c80000));
        auVar198._4_4_ = auVar219._0_4_;
        (pcVar33->field11_0x680).temperature = auVar198._4_4_;
        if (auVar198._4_4_ <= auVar309._0_4_) {
          uVar96 = (pcVar33->field44_0x1000).flags;
          auVar346 = ZEXT464(0x40c00000);
          if (auVar198._4_4_ < -0.5) {
            uVar96 = uVar96 | 0x8000;
            (pcVar33->field44_0x1000).flags = uVar96;
          }
        }
        else {
          auVar198._4_4_ = auVar198._4_4_ + -0.5;
          auVar346 = ZEXT464(0x40c00000);
          if (auVar198._4_4_ < auVar357._0_4_) {
            auVar198._4_4_ = sqrtf(auVar198._4_4_);
          }
          else {
            auVar219 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_));
            auVar198._4_4_ = auVar219._0_4_;
          }
          auVar198._4_4_ = auVar198._4_4_ * 0.04 * (pcVar33->field23_0x980).heat_damage_multiplier;
          (pcVar33->field14_0x740).health = (pcVar33->field14_0x740).health - auVar198._4_4_;
          (pcVar33->field15_0x780).damage = auVar198._4_4_ + (pcVar33->field15_0x780).damage;
          (pcVar33->field16_0x7c0).bloodless_damage =
               auVar198._4_4_ + (pcVar33->field16_0x7c0).bloodless_damage;
          (pcVar33->field17_0x800).screenshakeless_damage =
               auVar198._4_4_ + (pcVar33->field17_0x800).screenshakeless_damage;
          (pcVar33->field18_0x840).burn_damage =
               auVar198._4_4_ + (pcVar33->field18_0x840).burn_damage;
          uVar96 = (pcVar33->field44_0x1000).flags;
        }
        uVar96 = uVar96 & 0xffffff7f;
        (pcVar33->field44_0x1000).flags = uVar96;
        if ((auVar332._0_4_ <= (pcVar33->field13_0x700).maturity) &&
           (pmVar117[auVar248._4_4_].electric_update_fn != (_func___cdecl_void_cell_ptr *)0x0)) {
          (*pmVar117[auVar248._4_4_].electric_update_fn)(pcVar33);
          uVar96 = (pcVar33->field44_0x1000).flags;
        }
        auVar198._4_4_ =
             (float)POPCOUNT(uVar96 & 0x3f) * -0.0045 +
             pmVar117[auVar248._4_4_].leak_conductivity * -5e-05 + -0.0015;
        expf();
        auVar198._4_4_ = auVar198._4_4_ * (pcVar33->field10_0x640).shock;
        auVar194 = ZEXT416((uint)auVar198._4_4_);
        (pcVar33->field10_0x640).shock = auVar198._4_4_;
        auVar219 = ZEXT416((uint)auVar198._4_4_);
        auVar248 = vandps_avx(auVar219,___xmm_7fffffff7fffffff7fffffff7fffffff);
        in_ZMM2 = ZEXT464(0x3a83126f);
        if (0.001 <= auVar248._0_4_) {
          if (auVar309._0_4_ < auVar198._4_4_) {
            auVar248 = vminss_avx(auVar219,ZEXT416(0x41400000));
            auVar248 = vmaxss_avx(auVar248,ZEXT416((uint)(pcVar33->field4_0x100).voltage));
            (pcVar33->field4_0x100).voltage = auVar248._0_4_;
          }
          if (auVar198._4_4_ < -0.5) {
            auVar248 = vmaxss_avx(auVar219,auVar350._0_16_);
            auVar248 = vminss_avx(auVar248,ZEXT416((uint)(pcVar33->field4_0x100).voltage));
            (pcVar33->field4_0x100).voltage = auVar248._0_4_;
          }
        }
        else {
          (pcVar33->field10_0x640).shock = 0.0;
          auVar194._0_12_ = ZEXT812(0);
          auVar194._12_4_ = 0;
        }
        if ((pbVar93 != (body *)0x0) && (auVar357._0_4_ < pbVar93->mass)) {
          auVar198._4_4_ = pbVar93->invmass;
          fVar208 = (pbVar93->global_body_force).field0_0x0._s_0.y;
          fVar171 = auVar198._4_4_ * (pbVar93->global_body_force).field0_0x0._s_0.x +
                    (pcVar33->field34_0xc40).x_dot;
          in_ZMM2 = ZEXT464((uint)fVar171);
          (pcVar33->field34_0xc40).x_dot = fVar171;
          (pcVar33->field35_0xc80).y_dot = auVar198._4_4_ * fVar208 + (pcVar33->field35_0xc80).y_dot
          ;
        }
        if ((NAN(auVar194._0_4_)) ||
           (auVar248 = vandps_avx(auVar194,___xmm_7fffffff7fffffff7fffffff7fffffff),
           3.4028235e+38 < auVar248._0_4_)) {
          (pcVar33->field10_0x640).shock = 0.0;
        }
        if ((NAN((pcVar33->field4_0x100).voltage)) ||
           (auVar248 = vandps_avx(ZEXT416((uint)(pcVar33->field4_0x100).voltage),
                                  ___xmm_7fffffff7fffffff7fffffff7fffffff),
           3.4028235e+38 < auVar248._0_4_)) {
          (pcVar33->field4_0x100).voltage = 0.0;
        }
        if ((NAN((pcVar33->field11_0x680).temperature)) ||
           (auVar248 = vandps_avx(ZEXT416((uint)(pcVar33->field11_0x680).temperature),
                                  ___xmm_7fffffff7fffffff7fffffff7fffffff),
           3.4028235e+38 < auVar248._0_4_)) {
          (pcVar33->field11_0x680).temperature = 0.0;
        }
        if (local_210.x == 4.2039e-45) {
          (pcVar33->field53_0x1240).detected_light = 0.0;
        }
        uVar106 = (ulonglong)(uVar166 + 1);
      } while (uVar69 != uVar166 + 1);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      in_ZMM5 = ZEXT464(0) << 0x20;
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    pcVar127 = TlsGetValue_exref;
    pvVar73 = TlsGetValue(tls_index);
    EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18);
    pcVar82 = TlsGetValue(tls_index);
    peVar165._4_4_ = 0;
    peVar165._0_4_ = local_21c;
    if ((w.show_trace != 0) && (*(longlong *)(pcVar82 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      in_ZMM5 = ZEXT464(0) << 0x20;
      *(double *)(*(longlong *)(pcVar82 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)(pcVar82 + 0xb8) = **(undefined8 **)(pcVar82 + 0xb8);
      pcVar127 = pcVar82;
    }
    auVar248._4_4_ = (int)local_210.x + 1;
    local_210.x = (float)auVar248._4_4_;
  } while (auVar248._4_4_ != 4);
  if ((local_f8->field0_0x0)._s_0.lane_index != 0) goto LAB_1400d42a4;
  begin_trace_stage("push cells with particle_pushers");
  uVar134 = (longlong)(w.n_cells + 0x3f >> 6) << 3;
  TlsGetValue(tls_index);
  puVar75 = stalloc(uVar134);
  local_1b8.x = SUB84(puVar75,0);
  local_1b8.y = (float)((ulonglong)puVar75 >> 0x20);
  memset();
  pcVar84 = (cell *)stalloc((longlong)w.n_cells << 2);
  puVar75 = local_1c8;
  local_168._0_8_ = pcVar84;
  if (0 < w.n_particle_pushers) {
    rVar124 = (real_2_u_0)0x0;
    do {
      auVar198._4_4_ = w.field100_0x3d00.particle_pushers[(longlong)rVar124].x.field0_0x0._s_0.y;
      auVar248 = ZEXT416((uint)(auVar198._4_4_ +
                               w.field100_0x3d00.particle_pushers[(longlong)rVar124].d.field0_0x0.
                               _s_0.y));
      auVar219 = vminss_avx(ZEXT416((uint)auVar198._4_4_),auVar248);
      auVar248 = vmaxss_avx(ZEXT416((uint)auVar198._4_4_),auVar248);
      auVar219 = ZEXT416((uint)((auVar219._0_4_ + -12.0) * 0.083333336));
      auVar219 = vroundss_avx(auVar219,auVar219,9);
      uVar134 = CONCAT44((int)(uVar134 >> 0x20),(int)auVar219._0_4_);
      auVar248 = ZEXT416((uint)((auVar248._0_4_ + 12.0) * 0.083333336));
      auVar248 = vroundss_avx(auVar248,auVar248,10);
      local_208._0_4_ = (float)(int)auVar248._0_4_;
      if ((int)auVar219._0_4_ <= (int)(float)local_208) {
        auVar198._4_4_ = w.field100_0x3d00.particle_pushers[(longlong)rVar124].x.field0_0x0._s_0.x;
        auVar219 = ZEXT416((uint)(auVar198._4_4_ +
                                 w.field100_0x3d00.particle_pushers[(longlong)rVar124].d.field0_0x0.
                                 _s_0.x));
        auVar248 = vminss_avx(ZEXT416((uint)auVar198._4_4_),auVar219);
        auVar219 = vmaxss_avx(ZEXT416((uint)auVar198._4_4_),auVar219);
        auVar248 = ZEXT416((uint)((auVar248._0_4_ + -12.0) * 0.083333336));
        auVar248 = vroundss_avx(auVar248,auVar248,9);
        auVar248._4_4_ = (int)auVar248._0_4_;
        auVar219 = ZEXT416((uint)((auVar219._0_4_ + 12.0) * 0.083333336));
        auVar219 = vroundss_avx(auVar219,auVar219,10);
        local_170 = (uchar *)CONCAT44(local_170._4_4_,auVar248._4_4_);
        if (auVar248._4_4_ <= (int)auVar219._0_4_) {
          ppVar6 = w.field100_0x3d00.particle_pushers + (longlong)rVar124;
          rVar147 = (real_2_u_0)0x0;
          do {
            auVar198._4_4_ = (float)uVar134;
            local_188._0_8_ = uVar134;
            iVar70 = auVar248._4_4_;
            do {
              fVar334 = ((float)iVar70 + 0.5) * 12.0 - (ppVar6->x).field0_0x0._s_0.x;
              fVar172 = ((float)(int)auVar198._4_4_ + 0.5) * 12.0 - (ppVar6->x).field0_0x0._s_0.y;
              fVar208 = (ppVar6->d).field0_0x0._s_0.x;
              fVar171 = (ppVar6->d).field0_0x0._s_0.y;
              auVar317 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                                    ZEXT416((uint)((fVar172 * fVar171 + fVar334 * fVar208 + 0.0) *
                                                  ppVar6->inv_dsq)));
              auVar317 = vmaxss_avx(ZEXT816(0),auVar317);
              fVar334 = auVar317._0_4_ * fVar208 - fVar334;
              fVar172 = auVar317._0_4_ * fVar171 - fVar172;
              if (fVar172 * fVar172 + fVar334 * fVar334 + 0.0 <= 839.29346) {
                uVar69 = iVar70 + (int)auVar198._4_4_ * 0x400 & 0xffff;
                if (uVar69 == 0) {
                  iVar136 = 0;
                  iVar97 = *w.hash_data;
                  if (0 < iVar97) goto LAB_1400d1848;
                }
                else {
                  iVar136 = w.hash_data[(ulonglong)uVar69 - 1];
                  iVar97 = w.hash_data[uVar69];
                  if (iVar136 < iVar97) {
LAB_1400d1848:
                    piVar160 = (int *)(longlong)iVar136;
                    lVar133 = (longlong)piVar160 * 0xc;
                    prVar87 = w.hashed_pos;
                    do {
                      fVar334 = *(float *)((longlong)&prVar87->field0_0x0 + lVar133) -
                                (ppVar6->x).field0_0x0._s_0.x;
                      fVar172 = *(float *)((longlong)&prVar87->field0_0x0 + lVar133 + 4) -
                                (ppVar6->x).field0_0x0._s_0.y;
                      fVar208 = (ppVar6->d).field0_0x0._s_0.x;
                      fVar171 = (ppVar6->d).field0_0x0._s_0.y;
                      auVar317 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                                            ZEXT416((uint)((fVar172 * fVar171 +
                                                           fVar334 * fVar208 + 0.0) *
                                                          ppVar6->inv_dsq)));
                      auVar317 = vmaxss_avx(ZEXT816(0),auVar317);
                      fVar245 = auVar317._0_4_;
                      fVar334 = fVar245 * fVar208 - fVar334;
                      fVar172 = fVar245 * fVar171 - fVar172;
                      fVar208 = fVar172 * fVar172 + fVar334 * fVar334 + 0.0;
                      if (fVar208 <= 144.0) {
                        uVar69 = w.hashed_cells[(longlong)piVar160];
                        iVar136 = (int)uVar69 >> 6;
                        uVar109 = *(ulonglong *)
                                   (CONCAT44(local_1b8.y,local_1b8.x) + (longlong)iVar136 * 8);
                        if ((uVar109 >> ((ulonglong)uVar69 & 0x3f) & 1) == 0) {
                          *(ulonglong *)(CONCAT44(local_1b8.y,local_1b8.x) + (longlong)iVar136 * 8)
                               = 1L << ((byte)uVar69 & 0x3f) | uVar109;
                          (pcVar84->field0_0x0).id_packed[(int)rVar147._s_0.x] = iVar136;
                          uVar122 = w.field58_0x3a60.cells;
                          pmVar117 = materials_list;
                          auVar317 = vsqrtss_avx(ZEXT416((uint)fVar208),ZEXT416((uint)fVar208));
                          fVar171 = (1.0 - fVar245) * (auVar317._0_4_ * -0.083333336 + 1.0);
                          fVar334 = fVar171 * ppVar6->strength;
                          rVar147._s_0.x = (float)((int)rVar147._s_0.x + 1);
                          rVar147._s_0.y = 0.0;
                          fVar208 = (ppVar6->d).field0_0x0._s_0.y;
                          iVar71 = (int)uVar69 >> 4;
                          uVar109 = (ulonglong)(uVar69 & 0xf);
                          iVar136 = w.field58_0x3a60.cells[iVar71].field3_0xc0.material_index_packed
                                    [uVar109];
                          w.field58_0x3a60.cells[iVar71].field34_0xc40.x_dot_packed[uVar109] =
                               fVar334 * (ppVar6->d).field0_0x0._s_0.x * 0.0125 *
                               materials_list[iVar136].drag +
                               w.field58_0x3a60.cells[iVar71].field34_0xc40.x_dot_packed[uVar109];
                          (((cell *)(uVar122 + (longlong)iVar71 * 0x2080))->field35_0xc80).
                          y_dot_packed[uVar109] =
                               fVar334 * fVar208 * 0.0125 * pmVar117[iVar136].drag +
                               (((cell *)(uVar122 + (longlong)iVar71 * 0x2080))->field35_0xc80).
                               y_dot_packed[uVar109];
                          *(float *)((longlong)
                                     ((cell *)(uVar122 + (longlong)iVar71 * 0x2080))->extra_fields +
                                    uVar109 * 4 + -0x80) =
                               (ppVar6->strength + ppVar6->strength) * fVar171 +
                               *(float *)((longlong)
                                          ((cell *)(uVar122 + (longlong)iVar71 * 0x2080))->
                                          extra_fields + uVar109 * 4 + -0x80);
                          prVar87 = w.hashed_pos;
                        }
                      }
                      piVar160 = (int *)((longlong)piVar160 + 1);
                      lVar133 = lVar133 + 0xc;
                    } while ((int *)(longlong)iVar97 != piVar160);
                  }
                }
              }
              bVar170 = iVar70 != (int)auVar219._0_4_;
              iVar70 = iVar70 + 1;
            } while (bVar170);
            uVar134 = (ulong64)((int)auVar198._4_4_ + 1);
          } while (auVar198._4_4_ != (float)local_208);
          auVar198._4_4_ = rVar147._0_4_;
          peVar165._4_4_ = 0;
          peVar165._0_4_ = local_21c;
          local_128 = rVar124;
          if (0 < (int)auVar198._4_4_) {
            if ((uint)auVar198._4_4_ < 4) {
              uVar109 = 0;
            }
            else {
              uVar109 = 0;
              rVar147._s_0.y = local_1b8.y;
              rVar147._s_0.x = local_1b8.x;
              do {
                *(undefined8 *)
                 ((longlong)rVar147 + (longlong)(pcVar84->field0_0x0).id_packed[uVar109] * 8) = 0;
                *(undefined8 *)
                 ((longlong)rVar147 +
                 (longlong)*(int *)((longlong)&pcVar84->field0_0x0 + uVar109 * 4 + 4) * 8) = 0;
                *(undefined8 *)
                 ((longlong)rVar147 +
                 (longlong)*(int *)((longlong)&pcVar84->field0_0x0 + uVar109 * 4 + 8) * 8) = 0;
                *(undefined8 *)
                 ((longlong)rVar147 +
                 (longlong)*(int *)((longlong)&pcVar84->field0_0x0 + uVar109 * 4 + 0xc) * 8) = 0;
                uVar109 = uVar109 + 4;
              } while (((uint)auVar198._4_4_ & 0x7ffffffc) != uVar109);
              if ((ulonglong)((uint)auVar198._4_4_ & 3) == 0) goto LAB_1400d1670;
            }
            uVar123 = 0;
            do {
              rVar147._s_0.y = local_1b8.y;
              rVar147._s_0.x = local_1b8.x;
              *(undefined8 *)
               ((longlong)rVar147 +
               (longlong)*(int *)((longlong)&pcVar84->field0_0x0 + uVar123 * 4 + uVar109 * 4) * 8) =
                   0;
              uVar123 = uVar123 + 1;
            } while (((uint)auVar198._4_4_ & 3) != uVar123);
          }
        }
      }
LAB_1400d1670:
      rVar124._s_0 = rVar124._s_0 + 1;
    } while ((longlong)rVar124 < (longlong)w.n_particle_pushers);
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    puVar75 = local_1c8;
  }
  begin_trace_stage("cell pickups");
  auVar248 = auVar324._0_16_;
  auVar219 = auVar336._0_16_;
  if (0 < (longlong)w.n_cell_pickups) {
    local_188._0_8_ = &local_f8->visual_seed;
    auVar309 = ZEXT1264(ZEXT812(0));
    auVar336 = ZEXT464(0x4a095440);
    auVar357 = ZEXT464(0x3f800000);
    auVar332 = ZEXT464(0x3f000000);
    auVar327 = ZEXT464(0x43100000);
    rVar124 = (real_2_u_0)(longlong)w.n_cell_pickups;
LAB_1400d1c4a:
    pmVar117 = materials_list;
    rVar169._s_0 = rVar124._s_0 + -1;
    auVar198._4_4_ =
         w.field116_0x3da0.cell_pickups[(longlong)rVar169].x.field0_0x0._s_0.x -
         w.camera_pos.field0_0x0._s_0.x;
    fVar208 = w.field116_0x3da0.cell_pickups[(longlong)rVar169].x.field0_0x0._s_0.y -
              w.camera_pos.field0_0x0._s_0.y;
    auVar198._4_4_ = fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + auVar309._0_4_;
    auVar346 = ZEXT464((uint)auVar198._4_4_);
    auVar219 = ZEXT416((uint)auVar198._4_4_);
    piVar160 = (int *)rVar124;
    if (auVar198._4_4_ <= auVar336._0_4_) {
      pcVar4 = w.field116_0x3da0.cell_pickups + (longlong)rVar169;
      uVar69 = pcVar4->material_index;
      if (n_materials < pcVar4->material_index) {
        uVar69 = n_materials;
      }
      if ((int)uVar69 < 2) {
        uVar69 = 1;
      }
      auVar356._0_4_ = auVar357._0_4_ / materials_list[uVar69].density;
      auVar356._4_12_ = auVar357._4_12_;
      auVar336 = ZEXT1664(auVar356);
      if ((*(byte *)&pcVar4->field7_0x24 & 2) == 0) {
LAB_1400d1cc7:
        ppVar79 = (particle_t *)0x0;
      }
      else {
        auVar332 = ZEXT1664(ZEXT416((uint)((float)w.frame_number * 0.1)));
        auVar309 = ZEXT1664(auVar309._0_16_);
        auVar336 = ZEXT1664(ZEXT416((uint)((float)w.frame_number * 0.1)));
        auVar346 = ZEXT1664(auVar327._0_16_);
        auVar353 = ZEXT1664(auVar357._0_16_);
        auVar363 = ZEXT1664(auVar356);
        auVar371 = ZEXT464((uint)auVar198._4_4_);
        auVar364 = ZEXT1664(auVar324._0_16_);
        cosf();
        auVar327 = ZEXT1664(auVar332._0_16_);
        auVar324 = ZEXT464((uint)(auVar336._0_4_ + 4.1887903));
        cosf();
        auVar357 = ZEXT1664(auVar324._0_16_);
        auVar324 = ZEXT464((uint)(auVar336._0_4_ + 2.0943952));
        cosf();
        local_1d8 = auVar357._0_16_;
        auVar248 = vinsertps_avx(auVar327._0_16_,local_1d8,0x10);
        local_1e8 = auVar324._0_16_;
        auVar248 = vinsertps_avx(auVar248,local_1e8,0x20);
        auVar225._8_4_ = 0x80000000;
        auVar225._0_8_ = 0x8000000080000000;
        auVar225._12_4_ = 0x80000000;
        auVar248 = vblendps_avx(auVar248,auVar225,8);
        uVar122 = local_188._0_8_;
        uVar96 = (*(uint *)local_188._0_8_ >> 0x10 ^ *(uint *)local_188._0_8_) * 0x7feb352d;
        uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
        uVar96 = uVar96 >> 0x10 ^ uVar96;
        local_208._0_4_ = auVar248._0_4_ + 1.0;
        local_208._4_4_ = auVar248._4_4_ + 1.0;
        fStack_200 = auVar248._8_4_ + 1.0;
        fStack_1fc = auVar248._12_4_ + 0.5;
        uStack_1f8 = 0;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0x3f000000;
        *(uint *)local_188._0_8_ = uVar96;
        auVar248 = ZEXT416((uint)((float)uVar96 * 2.3283064e-10 * 6.2831855));
        auVar332 = ZEXT1664(auVar248);
        auVar309 = ZEXT1664(auVar309._0_16_);
        auVar350 = ZEXT1664(auVar248);
        auVar327 = ZEXT1664(auVar346._0_16_);
        auVar357 = ZEXT1664(auVar353._0_16_);
        auVar336 = ZEXT1664(auVar363._0_16_);
        auVar346 = ZEXT1664(auVar371._0_16_);
        auVar324 = ZEXT1664(auVar364._0_16_);
        cosf();
        auVar353 = ZEXT1664(auVar332._0_16_);
        auVar332 = ZEXT1664(auVar350._0_16_);
        sinf();
        auVar198._4_4_ = auVar353._0_4_;
        fVar208 = auVar332._0_4_;
        auVar332 = ZEXT464((uint)(auVar198._4_4_ * 30.0 + (pcVar4->x).field0_0x0._s_0.x));
        auVar350 = ZEXT464((uint)(fVar208 * 30.0 + (pcVar4->x).field0_0x0._s_0.y));
        local_170 = (uchar *)CONCAT44(local_170._4_4_,auVar198._4_4_);
        auVar198._4_4_ = auVar198._4_4_ * 0.06;
        local_128._s_0.x = fVar208;
        fVar208 = fVar208 * 0.06;
        rVar77 = rand_normal_2((uint *)uVar122);
        auVar248 = vinsertps_avx(auVar332._0_16_,
                                 ZEXT416((uint)(rVar77.field0_0x0._0_4_ * 0.02 - auVar198._4_4_)),
                                 0x10);
        auVar219 = vinsertps_avx(auVar350._0_16_,
                                 ZEXT416((uint)(rVar77.field0_0x0._4_4_ * 0.02 - fVar208)),0x10);
        auVar248 = vunpcklps_avx(auVar248,auVar219);
        auVar350 = ZEXT1664(auVar248);
        pvVar73 = TlsGetValue(tls_index);
        auVar219 = auVar350._0_16_;
        if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
          lVar133 = (longlong)w.max_particles;
          auVar332 = ZEXT464(0x3f000000);
          auVar248._4_4_ = w.n_particles;
          if (w.max_particles <= w.n_particles) {
            w.max_particles = w.max_particles * 2;
            bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
            auVar219 = auVar350._0_16_;
            auVar248._4_4_ = w.n_particles;
            if (!bVar170) goto LAB_1400d1cc7;
          }
          uVar102 = w.field119_0x3dc0.particles;
          auVar44._4_4_ = local_208._4_4_;
          auVar44._0_4_ = (float)local_208;
          auVar44._8_4_ = fStack_200;
          auVar44._12_4_ = fStack_1fc;
          auVar43._16_4_ = uStack_1f8;
          auVar43._0_16_ = auVar44;
          auVar43._20_4_ = uStack_1f4;
          auVar43._24_4_ = uStack_1f0;
          auVar43._28_4_ = uStack_1ec;
          auVar317 = vblendps_avx(auVar44,auVar43._16_16_,8);
          w.n_particles = auVar248._4_4_ + 1;
          ppVar79 = w.field119_0x3dc0.particles + auVar248._4_4_;
          w.field119_0x3dc0.particles[auVar248._4_4_].type = 0xc;
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x = (real_2)auVar219._0_8_;
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x_dot =
               (real_2)auVar219._8_8_;
          (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x_spawn).field0_0x0 =
               (real_2_u_0)0x0;
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->target = 0;
          uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->r = (float)(int)uVar122;
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->r_dot =
               (float)(int)((ulonglong)uVar122 >> 0x20);
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->time = 0;
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->duration = 0x78;
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color = (real_4)auVar44;
          ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_initial =
               (real_4)auVar317;
          (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_final).field0_0x0.xy.
          field0_0x0 = (real_2_u_0)0x3f8000003f800000;
          *(undefined8 *)
           ((longlong)
            &(((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_final).field0_0x0.
             _s_2.yz.field0_0x0 + 4) = 0x3f800000;
          (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->emission).field0_0x0 =
               (real_4_u_0)(ZEXT816(0) << 0x20);
          *(undefined8 *)
           ((longlong)
            &(((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->emission).field0_0x0 +
           0xd) = 0;
          rVar169 = (real_2_u_0)vmovlps_avx(auVar219);
          (ppVar79->x_spawn).field0_0x0 = rVar169;
        }
        else {
          uVar96 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                   *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
          uVar107 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          uVar107 = uVar107 >> 0x10 ^ uVar107;
          uVar96 = (uint)((float)uVar107 * 2.3283064e-10 * (float)w.n_particles);
          if ((int)(w.n_particles - 1U) < (int)uVar96) {
            uVar96 = w.n_particles - 1U;
          }
          uVar109 = (ulonglong)uVar96;
          *(uint *)((longlong)pvVar73 + 0x6c) = uVar107;
          if ((int)uVar96 < 1) {
            uVar109 = 0;
          }
          if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
            auVar198._4_4_ = auVar357._0_4_ + (float)local_1e8._0_4_;
            fVar208 = auVar357._0_4_ + (float)local_1d8._0_4_;
            ppVar79 = w.field119_0x3dc0.particles + uVar109;
            ppVar79->type = 0xc;
            ppVar79->x = (real_2)auVar219._0_8_;
            ppVar79->x_dot = (real_2)auVar219._8_8_;
            (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
            ppVar79->target = 0;
            uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
            ppVar79->r = (float)(int)uVar122;
            ppVar79->r_dot = (float)(int)((ulonglong)uVar122 >> 0x20);
            ppVar79->time = 0;
            ppVar79->duration = 0x78;
            (ppVar79->color).field0_0x0._s_0.x = (float)local_208;
            (ppVar79->color).field0_0x0._s_0.y = fVar208;
            (ppVar79->color).field0_0x0._s_0.z = auVar198._4_4_;
            (ppVar79->color).field0_0x0._s_0.w = 0.5;
            (ppVar79->color_initial).field0_0x0._s_0.x = (float)local_208;
            (ppVar79->color_initial).field0_0x0._s_0.y = fVar208;
            (ppVar79->color_initial).field0_0x0._s_0.z = auVar198._4_4_;
            (ppVar79->color_initial).field0_0x0._s_0.w = 0.5;
            (ppVar79->color_final).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
            *(undefined8 *)((longlong)&(ppVar79->color_final).field0_0x0._s_2.yz.field0_0x0 + 4) =
                 0x3f800000;
            (ppVar79->emission).field0_0x0 = (real_4_u_0)(ZEXT816(0) << 0x20);
            *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
            ppVar79 = w.field119_0x3dc0.particles + uVar109;
          }
          else {
            ppVar79 = (particle_t *)0x0;
          }
          auVar332 = ZEXT464(0x3f000000);
        }
      }
      auVar370 = auVar324._0_16_;
      auVar219 = auVar346._0_16_;
      auVar294 = auVar336._0_16_;
      auVar178 = auVar332._0_16_;
      auVar362 = auVar357._0_16_;
      auVar258 = auVar327._0_16_;
      auVar317 = auVar309._0_16_;
      pmVar117 = pmVar117 + uVar69;
      local_208._0_4_ = rVar124._s_0.x;
      local_208._4_4_ = rVar124._s_0.y;
      if (((*(byte *)&pcVar4->field7_0x24 & 1) == 0) &&
         ((longlong)rVar124 < (longlong)w.n_cell_pickups)) {
        uVar109 = (longlong)(w.n_cell_pickups + -1);
        do {
          pmVar64 = materials_list;
          pcVar129 = w.field116_0x3da0.cell_pickups + (uVar109 & 0xffffffff);
          if (pcVar4 != pcVar129) {
            rVar147 = (real_2_u_0)0x0;
            if (((pcVar129->field7_0x24).flags & 1) == 0) {
              auVar248._4_4_ = pcVar129->material_index;
              fVar245 = auVar357._0_4_;
              fVar333 = fVar245 / materials_list[auVar248._4_4_].density;
              auVar198._4_4_ = (pcVar4->x).field0_0x0._s_0.x;
              fVar208 = (pcVar4->x).field0_0x0._s_0.y;
              fVar334 = auVar198._4_4_ - (pcVar129->x).field0_0x0._s_0.x;
              fVar172 = fVar208 - (pcVar129->x).field0_0x0._s_0.y;
              fVar303 = auVar309._0_4_;
              fVar171 = fVar172 * fVar172 + fVar334 * fVar334 + fVar303;
              rVar147 = (real_2_u_0)0x0;
              fVar347 = auVar336._0_4_;
              if ((((pcVar129->field7_0x24).flags ^ (pcVar4->field7_0x24).flags) & 2) == 0) {
                fVar173 = pcVar4->r + pcVar129->r;
                if (fVar171 < fVar173 * fVar173) {
                  auVar248 = vsqrtss_avx(ZEXT416((uint)fVar171),ZEXT416((uint)fVar171));
                  if (fVar171 <= 1e-06) {
                    uVar123 = 0;
                  }
                  else {
                    fVar171 = fVar245 / auVar248._0_4_;
                    uVar123 = CONCAT44((int)((ulonglong)materials_list >> 0x20),fVar334 * fVar171) |
                              (ulonglong)(uint)(fVar172 * fVar171) << 0x20;
                  }
                  fVar279 = (float)uVar123;
                  fVar108 = (float)(uVar123 >> 0x20);
                  fVar171 = ((pcVar4->x_dot).field0_0x0._s_0.y - (pcVar129->x_dot).field0_0x0._s_0.y
                            ) * fVar108 +
                            fVar279 * ((pcVar4->x_dot).field0_0x0._s_0.x -
                                      (pcVar129->x_dot).field0_0x0._s_0.x) + fVar303;
                  fVar245 = fVar245 / (fVar347 + fVar333);
                  fVar172 = fVar245 * (fVar173 - auVar248._0_4_);
                  fVar334 = fVar172 * fVar279;
                  fVar172 = fVar172 * fVar108;
                  fVar208 = fVar347 * fVar172 + fVar208;
                  rVar113._s_0.y = fVar208;
                  rVar113._s_0.x = fVar347 * fVar334 + auVar198._4_4_;
                  (pcVar4->x).field0_0x0 = rVar113;
                  auVar198._4_4_ = (pcVar129->x).field0_0x0._s_0.y - fVar333 * fVar172;
                  rVar78 = (real_2_u_0_s_0)
                           (CONCAT44(fVar208,(pcVar129->x).field0_0x0._s_0.x - fVar334 * fVar333) |
                           CONCAT44(fVar208,auVar198._4_4_) << 0x20);
                  (pcVar129->x).field0_0x0._s_0 = rVar78;
                  auVar324 = ZEXT464((uint)local_120._0_4_);
                  auVar332 = ZEXT464(0x3f000000);
                  if (fVar171 < fVar303) {
                    fVar171 = fVar245 * -1.8 * fVar171;
                    fVar279 = fVar171 * fVar279;
                    fVar171 = fVar171 * fVar108;
                    fVar208 = fVar347 * fVar171 + (pcVar4->x_dot).field0_0x0._s_0.y;
                    rVar78 = (real_2_u_0_s_0)
                             (CONCAT44(rVar78.y,fVar347 * fVar279 +
                                                (pcVar4->x_dot).field0_0x0._s_0.x) |
                             CONCAT44(auVar198._4_4_,fVar208) << 0x20);
                    (pcVar4->x_dot).field0_0x0._s_0 = rVar78;
                    (pcVar129->x_dot).field0_0x0 =
                         (real_2_u_0)
                         (CONCAT44(rVar78.y,(pcVar129->x_dot).field0_0x0._s_0.x - fVar333 * fVar279)
                         | CONCAT44(fVar208,(pcVar129->x_dot).field0_0x0._s_0.y - fVar333 * fVar171)
                           << 0x20);
                  }
                }
              }
              else {
                if ((fVar171 < 900.0) && (fVar303 < fVar171)) {
                  fVar208 = fVar334 * -0.5 * (fVar245 / fVar171);
                  fVar173 = fVar172 * -0.5 * (fVar245 / fVar171);
                  auVar198._4_4_ = fVar347 * fVar173 + (pcVar4->x_dot).field0_0x0._s_0.y;
                  rVar146._s_0.y = auVar198._4_4_;
                  rVar146._s_0.x = fVar347 * fVar208 + (pcVar4->x_dot).field0_0x0._s_0.x;
                  (pcVar4->x_dot).field0_0x0 = rVar146;
                  fVar347 = (pcVar129->x_dot).field0_0x0._s_0.y - fVar333 * fVar173;
                  rVar147 = (real_2_u_0)
                            (CONCAT44(auVar198._4_4_,
                                      (pcVar129->x_dot).field0_0x0._s_0.x - fVar333 * fVar208) |
                            CONCAT44(auVar198._4_4_,fVar347) << 0x20);
                  (pcVar129->x_dot).field0_0x0._s_0 = (real_2_u_0_s_0)rVar147;
                  if (ppVar79 != (particle_t *)0x0) {
                    if (1e-06 < fVar171) {
                      auVar198 = vsqrtss_avx(ZEXT416((uint)fVar171),ZEXT416((uint)fVar171));
                      fVar245 = fVar245 / auVar198._0_4_;
                      uVar123 = CONCAT44(rVar147._s_0.y,fVar334 * fVar245) |
                                CONCAT44(fVar347,fVar172 * fVar245) << 0x20;
                    }
                    else {
                      uVar123 = 0;
                    }
                    auVar198._4_4_ =
                         ((float)local_128._0_4_ * (float)(uVar123 >> 0x20) +
                         local_170._0_4_ * (float)uVar123 + fVar303) * 0.02 + 0.02;
                    rVar147._s_0.y =
                         (float)local_128._0_4_ * auVar198._4_4_ +
                         (ppVar79->x_dot).field0_0x0._s_0.y;
                    rVar147._s_0.x =
                         local_170._0_4_ * auVar198._4_4_ + (ppVar79->x_dot).field0_0x0._s_0.x;
                    (ppVar79->x_dot).field0_0x0 = rVar147;
                  }
                }
                if (fVar171 < 0.25) {
                  local_1d8._0_8_ = pmVar117;
                  auVar198._4_4_ = (pcVar4->x).field0_0x0._s_0.x;
                  fVar208 = (pcVar4->x).field0_0x0._s_0.y;
                  iVar70 = pcVar4->material_index;
                  if (iVar70 == 0) {
                    pcVar4->material_index = pcVar129->material_index;
                    goto LAB_1400d257a;
                  }
                  auVar198._4_4_ = auVar198._4_4_ + (pcVar129->x).field0_0x0._s_0.x;
                  auVar370 = ZEXT416((uint)auVar198._4_4_);
                  fVar208 = fVar208 + (pcVar129->x).field0_0x0._s_0.y;
                  auVar178 = ZEXT416((uint)fVar208);
                  fVar171 = pmVar117->density;
                  fVar334 = pmVar64[auVar248._4_4_].density;
                  fVar172 = fVar334 * (pcVar129->x_dot).field0_0x0._s_0.x;
                  fVar245 = fVar334 * (pcVar129->x_dot).field0_0x0._s_0.y;
                  fVar333 = fVar171 * (pcVar4->x_dot).field0_0x0._s_0.x;
                  fVar303 = fVar171 * (pcVar4->x_dot).field0_0x0._s_0.y;
                  if ((longlong)n_materials < 1) goto LAB_1400d24a9;
                  rVar147 = (real_2_u_0)&materials_list->combine_material_index2;
                  uVar109 = 0;
                  goto LAB_1400d248f;
                }
              }
            }
          }
          auVar370 = auVar324._0_16_;
          auVar178 = auVar332._0_16_;
          bVar170 = (longlong)rVar124 < (longlong)uVar109;
          uVar109 = uVar109 - 1;
        } while (bVar170);
      }
      goto LAB_1400d2910;
    }
    goto LAB_1400d1c40;
  }
LAB_1400d37c6:
  auVar324 = ZEXT1664(auVar219);
  auVar309 = ZEXT1664(auVar248);
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    puVar75 = local_1c8;
  }
  rVar86._s_0.y = w.camera_pos.field0_0x0._s_0.y;
  rVar86._s_0.x = w.camera_pos.field0_0x0._s_0.x;
  if (0 < (int)SUB84(peVar165,0)) {
    auVar327 = ZEXT464((uint)((w.camera_pos.field0_0x0._s_0.y - w.gamepad_cursor_x.field0_0x0._s_0.y
                              ) * (w.camera_pos.field0_0x0._s_0.y -
                                  w.gamepad_cursor_x.field0_0x0._s_0.y) +
                             (w.camera_pos.field0_0x0._s_0.x - w.gamepad_cursor_x.field0_0x0._s_0.x)
                             * (w.camera_pos.field0_0x0._s_0.x -
                               w.gamepad_cursor_x.field0_0x0._s_0.x) + 0.0));
    rVar124 = (real_2_u_0)0x0;
    do {
      rVar169 = (real_2_u_0)*(real_2_u_0 *)&((real_2_u_0 *)(puVar75 + (longlong)rVar124 * 8))->_s_0;
      auVar198._4_4_ = rVar169._s_0.x - w.gamepad_cursor_x.field0_0x0._s_0.x;
      fVar208 = rVar169._s_0.y - w.gamepad_cursor_x.field0_0x0._s_0.y;
      auVar198._4_4_ = fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + 0.0;
      if (auVar198._4_4_ < auVar327._0_4_) {
        rVar86 = rVar169;
      }
      auVar248 = vminss_avx(ZEXT416((uint)auVar198._4_4_),auVar327._0_16_);
      auVar327 = ZEXT1664(auVar248);
      rVar124._s_0 = rVar124._s_0 + 1;
    } while ((real_2_u_0)peVar165 != rVar124);
  }
  uVar116 = (local_198->gamepad).buttons;
  auVar248._4_4_ = 0;
  uVar69 = 0;
  w.gamepad_cursor_x.field0_0x0 = rVar86;
  if ((uVar116 & 8) == 0) {
    if ((uVar116 & 4) != 0) goto LAB_1400d3a09;
LAB_1400d3912:
    if ((uVar116 & 1) != 0) goto LAB_1400d3a35;
LAB_1400d3925:
    uVar96 = 0;
    if ((uVar116 & 2) != 0) goto LAB_1400d3a54;
LAB_1400d392f:
    iVar70 = 0;
    if (w.gamepad_cursor_mode == 0) goto LAB_1400d3a81;
LAB_1400d3940:
    fVar208 = 0.0;
    auVar198._4_4_ = 0.0;
LAB_1400d3a9f:
    iVar149.id = 0;
    iVar149.index = 0;
    rVar143 = (real_2_u_0)0x0;
    if ((fVar208 != 0.0) || (NAN(fVar208))) goto LAB_1400d3aab;
  }
  else {
    uVar69 = (uint)((local_198->gamepad_prev_buttons & 8) == 0);
    if ((uVar116 & 4) == 0) goto LAB_1400d3912;
LAB_1400d3a09:
    auVar248._4_4_ = (int)(short)(((*(uint *)&local_198->gamepad_prev_buttons >> 2 & 1) != 0) - 1);
    if ((uVar116 & 1) == 0) goto LAB_1400d3925;
LAB_1400d3a35:
    uVar96 = ~*(uint *)&local_198->gamepad_prev_buttons & 1;
    if ((uVar116 & 2) == 0) goto LAB_1400d392f;
LAB_1400d3a54:
    iVar70 = (int)(short)(((*(uint *)&local_198->gamepad_prev_buttons >> 1 & 1) != 0) - 1);
    if (w.gamepad_cursor_mode != 0) goto LAB_1400d3940;
LAB_1400d3a81:
    auVar198._4_4_ = (float)(int)(auVar248._4_4_ + uVar69);
    fVar208 = (float)(int)(iVar70 + uVar96);
    if ((auVar198._4_4_ == 0.0) && (!NAN(auVar198._4_4_))) goto LAB_1400d3a9f;
LAB_1400d3aab:
    iVar149.id = 0;
    iVar149.index = 0;
    rVar143 = (real_2_u_0)0x0;
    if (0 < (int)SUB84(peVar165,0)) {
      fVar334 = rVar86._s_0.x;
      fVar172 = rVar86._s_0.y;
      fVar171 = INFINITY;
      rVar124 = (real_2_u_0)0x0;
      do {
        rVar143 = (real_2_u_0)
                  *(real_2_u_0 *)&((real_2_u_0 *)(puVar75 + (longlong)rVar124 * 8))->_s_0;
        fVar245 = rVar143._s_0.x;
        fVar333 = rVar143._s_0.y;
        if ((fVar245 != fVar334) || (NAN(fVar245) || NAN(fVar334))) {
LAB_1400d3b21:
          fVar245 = fVar245 - fVar334;
          fVar333 = fVar333 - fVar172;
          fVar303 = fVar333 * fVar333 + fVar245 * fVar245 + 0.0;
          if (fVar303 <= 1e-06) {
            fVar245 = 0.0;
            fVar333 = 0.0;
          }
          else {
            auVar248 = vsqrtss_avx(ZEXT416((uint)fVar303),ZEXT416((uint)fVar303));
            fVar347 = 1.0 / auVar248._0_4_;
            fVar245 = fVar245 * fVar347;
            fVar333 = fVar333 * fVar347;
            iVar149 = (id_index)((ulonglong)(uint)fVar333 << 0x20);
          }
          fVar245 = fVar333 * fVar208 + fVar245 * auVar198._4_4_ + 0.0;
          if ((0.0 < fVar245) &&
             (fVar245 = 1.2 - fVar245, fVar303 = fVar303 * fVar245 * fVar245, fVar303 < fVar171)) {
            rVar86 = rVar143;
            fVar171 = fVar303;
          }
        }
        else if ((fVar333 != fVar172) || (NAN(fVar333) || NAN(fVar172))) goto LAB_1400d3b21;
        rVar124._s_0 = rVar124._s_0 + 1;
        w.gamepad_cursor_x.field0_0x0 = rVar86;
      } while ((real_2_u_0)peVar165 != rVar124);
    }
  }
  w.n_particle_pushers = 0;
  begin_trace_stage("update explosions");
  auVar317 = auVar309._0_16_;
  auVar219 = auVar324._0_16_;
  global_explosion.field7_0x20 = (explosion_t_u_32)0x0;
  global_explosion.ignore_body = 0;
  global_explosion._48_4_ = 0;
  global_explosion.x.field0_0x0 = (real_2_u_0)(real_2_u_0_s_0)0x0;
  global_explosion.r = 0.0;
  global_explosion.duration = 0;
  global_explosion.damage = 0.0;
  global_explosion.knockback = 0.0;
  global_explosion.heat = 0.0;
  global_explosion.stasis = 0.0;
  rVar124 = (real_2_u_0)(longlong)w.n_explosions;
  pvVar152 = (void *)CONCAT44(local_1b8.y,local_1b8.x);
  if (0 < (longlong)rVar124) {
    auVar327 = ZEXT1264(ZEXT812(0));
    auVar357 = ZEXT464(0x44fa0000);
    auVar332 = ZEXT464(0x3f800000);
    auVar336 = ZEXT1664(CONCAT412(0x3daaaaab,CONCAT48(0x3daaaaab,0x3daaaaab3daaaaab)));
    do {
      rVar169._s_0 = rVar124._s_0 + -1;
      lVar133 = (longlong)rVar169 * 0x34;
      peVar165 = w.field85_0x3c60.explosions + (longlong)rVar169;
      auVar198._4_4_ = w.field85_0x3c60.explosions[(longlong)rVar169].r;
      rVar125 = rVar124;
      if (w.field85_0x3c60.explosions[(longlong)rVar169].ignore_body == 0) {
        fVar208 = auVar327._0_4_;
        if (((global_explosion.knockback != fVar208) ||
            (NAN(global_explosion.knockback) || NAN(fVar208))) ||
           (fVar171 = w.camera_pos.field0_0x0._s_0.x - (peVar165->x).field0_0x0._s_0.x,
           fVar334 = w.camera_pos.field0_0x0._s_0.y - (peVar165->x).field0_0x0._s_0.y,
           auVar248 = ZEXT416((uint)(fVar334 * fVar334 + fVar171 * fVar171 + fVar208)),
           auVar248 = vsqrtss_avx(auVar248,auVar248),
           auVar198._4_4_ - auVar248._0_4_ < auVar357._0_4_)) goto LAB_1400d3cc1;
        global_explosion.r = 2000.0;
        global_explosion.damage = peVar165->damage + global_explosion.damage;
        global_explosion.heat = peVar165->heat + global_explosion.heat;
        auVar248 = vmaxss_avx(ZEXT416((uint)global_explosion.stasis),ZEXT416((uint)peVar165->stasis)
                             );
        global_explosion.stasis = auVar248._0_4_;
        if (((peVar165->knockback != fVar208) || (NAN(peVar165->knockback) || NAN(fVar208))) &&
           (0 < w.n_cells)) {
          uVar69 = 0;
          do {
            uVar96 = uVar69 >> 4;
            uVar107 = uVar69 & 0xf;
            fVar171 = w.field58_0x3a60.cells[uVar96].field32_0xbc0.x_packed[uVar107] -
                      (peVar165->x).field0_0x0._s_0.x;
            fVar334 = w.field58_0x3a60.cells[uVar96].field33_0xc00.y_packed[uVar107] -
                      (peVar165->x).field0_0x0._s_0.y;
            auVar198._4_4_ = fVar334 * fVar334 + fVar171 * fVar171 + fVar208;
            if (1e-06 < auVar198._4_4_) {
              auVar248 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_));
              auVar198._4_4_ = auVar332._0_4_ / auVar248._0_4_;
              uVar109 = CONCAT44(rVar143._s_0.y,fVar171 * auVar198._4_4_) |
                        (ulonglong)(uint)(fVar334 * auVar198._4_4_) << 0x20;
            }
            else {
              uVar109 = 0;
            }
            piVar74 = w.field58_0x3a60.cells[uVar96].field0_0x0.id_packed + uVar107;
            auVar198._4_4_ = peVar165->knockback;
            rVar143 = (real_2_u_0)0x0;
            fVar171 = auVar198._4_4_ * (float)uVar109 + (float)piVar74[0x310];
            piVar74[0x310] = (int)fVar171;
            auVar198._4_4_ = auVar198._4_4_ * (float)(uVar109 >> 0x20) + (float)piVar74[800];
            piVar74[800] = (int)auVar198._4_4_;
            lVar163 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
            *(float *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15b0 + lVar163) = fVar171;
            *(float *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15b4 + lVar163) =
                 auVar198._4_4_;
            uVar69 = uVar69 + 1;
          } while ((int)uVar69 < w.n_cells);
        }
      }
      else {
LAB_1400d3cc1:
        if (auVar198._4_4_ <= 100.0) {
          rVar78 = (peVar165->x).field0_0x0._s_0;
          auVar226._8_8_ = 0;
          auVar226._0_4_ = rVar78.x;
          auVar226._4_4_ = rVar78.y;
          auVar248 = vmovsldup_avx(ZEXT416((uint)auVar198._4_4_));
          auVar219 = vsubps_avx(auVar226,auVar248);
          auVar197._0_4_ = auVar336._0_4_ * auVar219._0_4_;
          auVar197._4_4_ = auVar336._4_4_ * auVar219._4_4_;
          auVar197._8_4_ = auVar336._8_4_ * auVar219._8_4_;
          auVar197._12_4_ = auVar336._12_4_ * auVar219._12_4_;
          auVar219 = vroundps_avx(auVar197,9);
          auVar198._0_4_ = (int)auVar219._0_4_;
          auVar198._4_4_ = (float)(int)auVar219._4_4_;
          auVar198._8_4_ = (int)auVar219._8_4_;
          auVar198._12_4_ = (int)auVar219._12_4_;
          auVar227._0_4_ = auVar336._0_4_ * (auVar248._0_4_ + rVar78.x);
          auVar227._4_4_ = auVar336._4_4_ * (auVar248._4_4_ + rVar78.y);
          auVar227._8_4_ = auVar336._8_4_ * (auVar248._8_4_ + 0.0);
          auVar227._12_4_ = auVar336._12_4_ * (auVar248._12_4_ + 0.0);
          auVar248 = vroundps_avx(auVar227,10);
          auVar228._0_4_ = (int)auVar248._0_4_;
          auVar228._4_4_ = (int)auVar248._4_4_;
          auVar228._8_4_ = (int)auVar248._8_4_;
          auVar228._12_4_ = (int)auVar248._12_4_;
          auVar248 = vpcmpgtd_avx(auVar198,auVar228);
          auVar248 = vpmovsxdq_avx(auVar248);
          if ((SUB161(auVar248 >> 0x3f,0) & 1) == 0 && -1 < auVar248[0xf]) {
            local_1e8._0_8_ = lVar133;
            local_1d8._0_8_ = rVar169;
            local_120 = (creature_spawner *)CONCAT44(local_120._4_4_,auVar198._0_4_);
            local_188._0_4_ = auVar228._0_4_;
            local_170 = (uchar *)CONCAT44(local_170._4_4_,auVar228._4_4_);
            piVar160 = (int *)0x0;
            local_128 = rVar124;
            do {
              local_208._4_4_ = 0.0;
              auVar248._4_4_ = (int)local_120._0_4_;
              local_208._0_4_ = auVar198._4_4_;
              do {
                uVar69 = auVar248._4_4_ + (int)auVar198._4_4_ * 0x400 & 0xffff;
                if (uVar69 == 0) {
                  iVar70 = 0;
                  iVar136 = *w.hash_data;
                  if (0 < iVar136) goto LAB_1400d3e8d;
                }
                else {
                  iVar70 = w.hash_data[(ulonglong)uVar69 - 1];
                  iVar136 = w.hash_data[uVar69] - iVar70;
                  if (iVar136 != 0 && iVar70 <= w.hash_data[uVar69]) {
LAB_1400d3e8d:
                    lVar163 = (longlong)iVar70;
                    lVar133 = lVar163 * 0xc;
                    prVar87 = w.hashed_pos;
                    do {
                      fVar208 = *(float *)((longlong)&prVar87->field0_0x0 + lVar133) -
                                (peVar165->x).field0_0x0._s_0.x;
                      fVar171 = *(float *)((longlong)&prVar87->field0_0x0 + lVar133 + 4) -
                                (peVar165->x).field0_0x0._s_0.y;
                      if (fVar171 * fVar171 + fVar208 * fVar208 + auVar327._0_4_ <
                          peVar165->r * peVar165->r) {
                        uVar69 = w.hashed_cells[lVar163];
                        iVar70 = (int)uVar69 >> 6;
                        iVar149 = *(id_index *)((longlong)pvVar152 + (longlong)iVar70 * 8);
                        fVar334 = SUB84(piVar160,0);
                        if (((ulonglong)iVar149 >> ((ulonglong)uVar69 & 0x3f) & 1) == 0) {
                          rVar143 = (real_2_u_0)
                                    (CONCAT44(rVar143._s_0.y,fVar208) |
                                    (ulonglong)(uint)fVar171 << 0x20);
                          *(ulonglong *)((longlong)pvVar152 + (longlong)iVar70 * 8) =
                               1L << ((byte)uVar69 & 0x3f) | (ulonglong)iVar149;
                          piVar160._0_4_ = (int)fVar334 + 1;
                          piVar160._4_4_ = 0;
                          *(int *)(local_168._0_8_ + (longlong)(int)fVar334 * 4) = iVar70;
                          auVar327 = ZEXT1664(auVar327._0_16_);
                          auVar357 = ZEXT1664(auVar357._0_16_);
                          auVar332 = ZEXT1664(auVar332._0_16_);
                          auVar336 = ZEXT1664(auVar336._0_16_);
                          auVar324 = ZEXT1664(auVar324._0_16_);
                          auVar309 = ZEXT1664(auVar309._0_16_);
                          handle_explosion_for_cell
                                    (peVar165,(cell *)((longlong)
                                                       &w.field58_0x3a60.cells[(int)uVar69 >> 4].
                                                        field0_0x0 + (ulonglong)(uVar69 & 0xf) * 4),
                                     (real_2)rVar143._s_0);
                          pvVar152 = (void *)CONCAT44(local_1b8.y,local_1b8.x);
                          prVar87 = w.hashed_pos;
                        }
                        else if ((int)fVar334 < 1) {
                          pVar94 = operator_(*(printer *)
                                              (*(longlong *)
                                                ((longlong)ThreadLocalStoragePointer +
                                                (ulonglong)_tls_index * 8) + 4),"error: ");
                          pVar94 = operator_(pVar94,"assert(");
                          pVar94 = operator_(pVar94,"n_checked_cell_buckets > 0");
                          pVar94 = operator_(pVar94,") in ");
                          pVar94 = operator_(pVar94,"code/game_common.h");
                          pVar94 = operator_(pVar94," (");
                          pVar94 = operator_(pVar94,0x4684);
                          pVar94 = operator_(pVar94,"): ");
                          operator_(pVar94,"\n");
                          log_alert();
                    /* WARNING: Subroutine does not return */
                          log_flush();
                        }
                      }
                      lVar163 = lVar163 + 1;
                      lVar133 = lVar133 + 0xc;
                      iVar136 = iVar136 + -1;
                    } while (iVar136 != 0);
                  }
                }
                bVar170 = auVar248._4_4_ != local_188._0_4_;
                auVar248._4_4_ = auVar248._4_4_ + 1;
              } while (bVar170);
              auVar198._4_4_ = (float)((int)(float)local_208 + 1);
            } while ((float)local_208 != local_170._0_4_);
            uVar69 = (uint)piVar160;
            rVar125 = local_128;
            lVar133 = local_1e8._0_8_;
            rVar169 = (real_2_u_0)local_1d8._0_8_;
            pcVar84 = (cell *)local_168._0_8_;
            if (0 < (int)uVar69) {
              if (uVar69 < 4) {
                uVar109 = 0;
              }
              else {
                uVar109 = 0;
                do {
                  *(undefined8 *)
                   ((longlong)pvVar152 +
                   (longlong)((cell_u_0 *)local_168._0_8_)->id_packed[uVar109] * 8) = 0;
                  *(undefined8 *)
                   ((longlong)pvVar152 +
                   (longlong)*(int *)((longlong)(cell_u_0 *)local_168._0_8_ + uVar109 * 4 + 4) * 8)
                       = 0;
                  *(undefined8 *)
                   ((longlong)pvVar152 +
                   (longlong)*(int *)((longlong)(cell_u_0 *)local_168._0_8_ + uVar109 * 4 + 8) * 8)
                       = 0;
                  rVar143 = (real_2_u_0)
                            (longlong)
                            *(int *)((longlong)(cell_u_0 *)local_168._0_8_ + uVar109 * 4 + 0xc);
                  *(undefined8 *)((longlong)pvVar152 + (longlong)rVar143 * 8) = 0;
                  uVar109 = uVar109 + 4;
                } while ((uVar69 & 0x7ffffffc) != uVar109);
                if ((ulonglong)(uVar69 & 3) == 0) goto LAB_1400d41a0;
              }
              uVar123 = 0;
              do {
                rVar143 = (real_2_u_0)
                          (longlong)
                          *(int *)((longlong)(cell_u_0 *)local_168._0_8_ + uVar123 * 4 + uVar109 * 4
                                  );
                *(undefined8 *)((longlong)pvVar152 + (longlong)rVar143 * 8) = 0;
                uVar123 = uVar123 + 1;
              } while ((uVar69 & 3) != uVar123);
            }
          }
        }
        else if (0 < w.n_cells) {
          uVar69 = 0;
          uVar122 = w.field58_0x3a60.cells;
          auVar248._4_4_ = w.n_cells;
          do {
            uVar96 = uVar69 >> 4;
            rVar143._s_0.x = (float)(uVar69 & 0xf);
            rVar143._s_0.y = 0.0;
            auVar198._4_4_ =
                 (((cell *)(uVar122 + (ulonglong)uVar96 * 0x2080))->field32_0xbc0).x_packed
                 [(longlong)rVar143] - (peVar165->x).field0_0x0._s_0.x;
            fVar208 = (((cell *)(uVar122 + (ulonglong)uVar96 * 0x2080))->field33_0xc00).y_packed
                      [(longlong)rVar143] - (peVar165->x).field0_0x0._s_0.y;
            if (fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + auVar327._0_4_ <
                peVar165->r * peVar165->r) {
              lVar163 = (longlong)rVar143 * 4;
              rVar143._s_0.y = fVar208;
              rVar143._s_0.x = auVar198._4_4_;
              auVar327 = ZEXT1664(auVar327._0_16_);
              auVar357 = ZEXT1664(auVar357._0_16_);
              auVar332 = ZEXT1664(auVar332._0_16_);
              auVar336 = ZEXT1664(auVar336._0_16_);
              auVar324 = ZEXT1664(auVar324._0_16_);
              auVar309 = ZEXT1664(auVar309._0_16_);
              handle_explosion_for_cell
                        (peVar165,(cell *)((longlong)
                                           &((cell *)(uVar122 + (ulonglong)uVar96 * 0x2080))->
                                            field0_0x0 + lVar163),(real_2)rVar143._s_0);
              pvVar152 = (void *)CONCAT44(local_1b8.y,local_1b8.x);
              uVar122 = w.field58_0x3a60.cells;
              auVar248._4_4_ = w.n_cells;
            }
            uVar69 = uVar69 + 1;
          } while ((int)uVar69 < auVar248._4_4_);
        }
      }
LAB_1400d41a0:
      rVar124 = rVar169;
      auVar317 = auVar309._0_16_;
      auVar219 = auVar324._0_16_;
      piVar74 = &peVar165->duration;
      auVar248._4_4_ = *piVar74;
      *piVar74 = *piVar74 + -1;
      uVar122 = w.field85_0x3c60.explosions;
      if (*piVar74 == 0 || SBORROW4(auVar248._4_4_,1) != *piVar74 < 0) {
        lVar163 = (longlong)w.n_explosions + -1;
        w.n_explosions = (int)lVar163;
        peVar165 = w.field85_0x3c60.explosions + lVar163;
        rVar169 = (peVar165->x).field0_0x0;
        rVar138 = *(real_2_u_0 *)&peVar165->r;
        rVar145 = *(real_2_u_0 *)&peVar165->damage;
        rVar141 = *(real_2_u_0 *)&peVar165->heat;
        *(undefined1 (*) [32])((longlong)&(w.field85_0x3c60.explosions)->knockback + lVar133) =
             *(undefined1 (*) [32])&w.field85_0x3c60.explosions[lVar163].knockback;
        prVar148 = (real_2_u_0 *)((longlong)&(((explosion_t *)uVar122)->x).field0_0x0 + lVar133);
        *prVar148 = rVar169;
        prVar148[1] = rVar138;
        prVar148[2] = rVar145;
        prVar148[3] = rVar141;
      }
      puVar75 = local_1c8;
      peVar165 = (explosion_t *)rVar124;
    } while (1 < (longlong)rVar125);
  }
  auVar336 = ZEXT1664(auVar219);
  auVar324 = ZEXT1664(auVar317);
  stunalloc(pcVar84);
  stunalloc(pvVar152);
  stunalloc(puVar75);
  stunalloc(w.light_reciever_values);
  stunalloc(w.light_reciever_cells);
  stunalloc(w.light_recievers);
  pvVar73 = TlsGetValue(tls_index);
  auVar346 = ZEXT464(0x40c00000);
  local_1b8 = (real_2_u_0_s_0)CONCAT44(local_1b8.y,local_1b8.x);
  local_208 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208);
  if ((w.show_trace != 0) &&
     (local_1b8 = (real_2_u_0_s_0)CONCAT44(local_1b8.y,local_1b8.x),
     local_208 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208),
     *(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
LAB_1400d42a4:
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18);
  begin_trace_stage("handle big explosion");
  if (0.0 < global_explosion.r) {
    auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
    iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
    uVar109 = (longlong)(w.n_cells * auVar248._4_4_) / (longlong)iVar70;
    uVar123 = uVar109 & 0xffffffff;
    uVar69 = ((auVar248._4_4_ + 1) * w.n_cells) / iVar70;
    if ((int)uVar109 < (int)uVar69) {
      peVar165 = &global_explosion;
      do {
        uVar96 = (uint)uVar123;
        handle_explosion_for_cell
                  (&global_explosion,
                   (cell *)((longlong)&w.field58_0x3a60.cells[(int)uVar96 >> 4].field0_0x0 +
                           (ulonglong)(uVar96 & 0xf) * 4),(real_2)0x0);
        uVar123 = (ulonglong)(uVar96 + 1);
      } while (uVar69 != uVar96 + 1);
    }
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18);
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    w.acid_volume = 0.0;
    w.lightning_volume = 0.0;
    w.thunder_volume = 0.0;
    w.jet_volume = 0.0;
    w.ink_volume = 0.0;
    w.vacuum_volume = 0.0;
    w.xp_volume = w.acid_volume;
    begin_trace_stage("particle collisions");
    auVar248._4_4_ = w.n_cells + 0x3f;
    TlsGetValue(tls_index);
    puVar75 = stalloc((longlong)(auVar248._4_4_ >> 6) << 3);
    memset();
    puVar88 = stalloc((longlong)w.n_cells << 2);
    auVar248 = auVar324._0_16_;
    local_1b8.x = SUB84(puVar88,0);
    local_1b8.y = (float)((ulonglong)puVar88 >> 0x20);
    if (0 < (longlong)w.n_particles) {
      auVar309 = ZEXT1664(CONCAT412(0xbf800000,CONCAT48(0xbf800000,0xbf800000bf800000)));
      auVar327 = ZEXT1664(CONCAT412(0x3daaaaab,CONCAT48(0x3daaaaab,0x3daaaaab3daaaaab)));
      auVar357 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
      auVar332 = ZEXT464(0x3f800000);
      auVar336 = ZEXT1264(ZEXT812(0));
      peVar165 = (explosion_t *)0x0;
      auVar346 = ZEXT464(0x3f7fbe77);
      auVar353 = ZEXT464(0x41c00000);
      auVar350 = ZEXT464(0x461c4000);
      auVar363 = ZEXT464(0x3b449ba6);
      pcVar119 = (creature_spawner *)(longlong)w.n_particles;
      do {
        uVar122 = w.field119_0x3dc0.particles;
        pcVar120 = (creature_spawner *)((longlong)&pcVar119[-1].xp + 3);
        auVar198._4_4_ = auVar336._0_4_;
        pcVar118 = pcVar120;
        if (w.field119_0x3dc0.particles[(longlong)pcVar120].type == 3) {
          rVar78 = w.field119_0x3dc0.particles[(longlong)pcVar120].x.field0_0x0._s_0;
          fVar208 = rVar78.x;
          fVar171 = rVar78.y;
          auVar199._0_4_ = (fVar208 + auVar309._0_4_) * auVar327._0_4_;
          auVar199._4_4_ = (fVar171 + auVar309._4_4_) * auVar327._4_4_;
          auVar199._8_4_ = (auVar309._8_4_ + 0.0) * auVar327._8_4_;
          auVar199._12_4_ = (auVar309._12_4_ + 0.0) * auVar327._12_4_;
          auVar219 = vroundps_avx(auVar199,9);
          auVar248._0_4_ = (uint)auVar219._0_4_;
          auVar248._4_4_ = (int)auVar219._4_4_;
          auVar248._8_4_ = (int)auVar219._8_4_;
          auVar248._12_4_ = (int)auVar219._12_4_;
          auVar229._0_4_ = (auVar357._0_4_ + fVar208) * auVar327._0_4_;
          auVar229._4_4_ = (auVar357._4_4_ + fVar171) * auVar327._4_4_;
          auVar229._8_4_ = (auVar357._8_4_ + 0.0) * auVar327._8_4_;
          auVar229._12_4_ = (auVar357._12_4_ + 0.0) * auVar327._12_4_;
          auVar219 = vroundps_avx(auVar229,10);
          auVar230._0_4_ = (float)(int)auVar219._0_4_;
          auVar230._4_4_ = (int)auVar219._4_4_;
          auVar230._8_4_ = (int)auVar219._8_4_;
          auVar230._12_4_ = (int)auVar219._12_4_;
          auVar219 = vpcmpgtd_avx(auVar248,auVar230);
          auVar219 = vpmovsxdq_avx(auVar219);
          if ((SUB161(auVar219 >> 0x3f,0) & 1) == 0 && -1 < auVar219[0xf]) {
            local_168._0_4_ = auVar248._0_4_;
            local_188._0_4_ = auVar230._4_4_;
            uVar69 = 0;
            do {
              piVar160._4_4_ = 0;
              piVar160._0_4_ = auVar248._0_4_;
              do {
                fVar208 = SUB84(piVar160,0);
                uVar96 = auVar248._4_4_ * 0x400 + (int)fVar208 & 0xffff;
                if (uVar96 == 0) {
                  pcVar84 = (cell *)0x0;
                  uVar107 = 0;
                  iVar70 = *w.hash_data;
                  if (0 < iVar70) goto LAB_1400d479f;
                }
                else {
                  uVar107 = w.hash_data[(ulonglong)uVar96 - 1];
                  pcVar84 = (cell *)(ulonglong)uVar107;
                  iVar70 = w.hash_data[uVar96];
                  if ((int)uVar107 < iVar70) {
LAB_1400d479f:
                    pcVar84 = (cell *)(longlong)(int)uVar107;
                    do {
                      uVar96 = w.hashed_cells[(longlong)pcVar84];
                      iVar136 = (int)uVar96 >> 6;
                      iVar149 = *(id_index *)(puVar75 + (longlong)iVar136 * 8);
                      if (((ulonglong)iVar149 >> ((ulonglong)uVar96 & 0x3f) & 1) == 0) {
                        *(ulonglong *)(puVar75 + (longlong)iVar136 * 8) =
                             1L << ((byte)uVar96 & 0x3f) | (ulonglong)iVar149;
                        lVar133 = (longlong)(int)uVar69;
                        uVar69 = uVar69 + 1;
                        *(int *)(CONCAT44(local_1b8.y,local_1b8.x) + lVar133 * 4) = iVar136;
                        iVar136 = (int)uVar96 >> 4;
                        uVar96 = uVar96 & 0xf;
                        iVar149.index = 0;
                        iVar149.id = uVar96;
                        if ((((((uint)w.field58_0x3a60.cells[iVar136].spacing
                                      [(longlong)((longlong)iVar149 + 0x70)] & 0x3f) != 0) &&
                             (fVar171 = auVar332._0_4_ +
                                        w.field58_0x3a60.cells[iVar136].spacing
                                        [(ulonglong)uVar96 - 0x20],
                             fVar334 = w.field58_0x3a60.cells[iVar136].field32_0xbc0.x_packed
                                       [uVar96] -
                                       (((particle_t *)(uVar122 + pcVar120 * 0x78))->x).field0_0x0.
                                       _s_0.x,
                             fVar172 = w.field58_0x3a60.cells[iVar136].field33_0xc00.y_packed
                                       [uVar96] -
                                       (((particle_t *)(uVar122 + pcVar120 * 0x78))->x).field0_0x0.
                                       _s_0.y,
                             fVar172 * fVar172 + auVar198._4_4_ + fVar334 * fVar334 <
                             fVar171 * fVar171)) &&
                            (uVar96 = w.field58_0x3a60.cells[iVar136].field1_0x40.body_id_packed
                                      [uVar96], 0 < (int)uVar96)) &&
                           ((uVar107 = w.bodies.n_max_elements + 0x7fffffffU & uVar96,
                            w.bodies.field0_0x0.index_table[uVar107].id == uVar96 &&
                            (w.bodies.field3_0x20.elements != (body *)0x0)))) {
                          auVar219 = vmaxss_avx(ZEXT416((uint)(auVar346._0_4_ *
                                                              w.bodies.field3_0x20.elements
                                                              [w.bodies.field0_0x0.index_table
                                                               [uVar107].index].vision_radius)),
                                                auVar353._0_16_);
                          w.bodies.field3_0x20.elements
                          [w.bodies.field0_0x0.index_table[uVar107].index].vision_radius =
                               auVar219._0_4_;
                        }
                      }
                      pcVar84 = (cell *)((longlong)&(pcVar84->field0_0x0).id + 1);
                    } while ((cell *)(longlong)iVar70 != pcVar84);
                  }
                }
                piVar160._4_4_ = 0;
                piVar160._0_4_ = (int)fVar208 + 1;
              } while (fVar208 != auVar230._0_4_);
              bVar170 = auVar248._4_4_ != auVar230._4_4_;
              auVar248._4_4_ = auVar248._4_4_ + 1;
            } while (bVar170);
            local_120 = pcVar120;
            local_208 = pcVar119;
            if (0 < (int)uVar69) {
              if (uVar69 < 4) {
                uVar109 = 0;
              }
              else {
                uVar109 = 0;
                lVar133 = CONCAT44(local_1b8.y,local_1b8.x);
                do {
                  puVar88 = puVar75 + (longlong)*(int *)(lVar133 + uVar109 * 4) * 8;
                  puVar88[0] = '\0';
                  puVar88[1] = '\0';
                  puVar88[2] = '\0';
                  puVar88[3] = '\0';
                  puVar88[4] = '\0';
                  puVar88[5] = '\0';
                  puVar88[6] = '\0';
                  puVar88[7] = '\0';
                  puVar88 = puVar75 + (longlong)*(int *)(lVar133 + 4 + uVar109 * 4) * 8;
                  puVar88[0] = '\0';
                  puVar88[1] = '\0';
                  puVar88[2] = '\0';
                  puVar88[3] = '\0';
                  puVar88[4] = '\0';
                  puVar88[5] = '\0';
                  puVar88[6] = '\0';
                  puVar88[7] = '\0';
                  puVar88 = puVar75 + (longlong)*(int *)(lVar133 + 8 + uVar109 * 4) * 8;
                  puVar88[0] = '\0';
                  puVar88[1] = '\0';
                  puVar88[2] = '\0';
                  puVar88[3] = '\0';
                  puVar88[4] = '\0';
                  puVar88[5] = '\0';
                  puVar88[6] = '\0';
                  puVar88[7] = '\0';
                  puVar88 = puVar75 + (longlong)*(int *)(lVar133 + 0xc + uVar109 * 4) * 8;
                  puVar88[0] = '\0';
                  puVar88[1] = '\0';
                  puVar88[2] = '\0';
                  puVar88[3] = '\0';
                  puVar88[4] = '\0';
                  puVar88[5] = '\0';
                  puVar88[6] = '\0';
                  puVar88[7] = '\0';
                  uVar109 = uVar109 + 4;
                } while ((uVar69 & 0x7ffffffc) != uVar109);
                if ((ulonglong)(uVar69 & 3) == 0) goto LAB_1400d4530;
              }
              uVar123 = 0;
              do {
                puVar88 = puVar75 + (longlong)
                                    *(int *)(CONCAT44(local_1b8.y,local_1b8.x) + uVar109 * 4 +
                                            uVar123 * 4) * 8;
                puVar88[0] = '\0';
                puVar88[1] = '\0';
                puVar88[2] = '\0';
                puVar88[3] = '\0';
                puVar88[4] = '\0';
                puVar88[5] = '\0';
                puVar88[6] = '\0';
                puVar88[7] = '\0';
                uVar123 = uVar123 + 1;
              } while ((uVar69 & 3) != uVar123);
            }
          }
        }
        else if (((w.field119_0x3dc0.particles[(longlong)pcVar120].type == 5) &&
                 (0 < w.selected_body)) &&
                ((uVar69 = w.bodies.n_max_elements + 0x7fffffffU & w.selected_body,
                 w.bodies.field0_0x0.index_table[uVar69].id == w.selected_body &&
                 ((w.bodies.field3_0x20.elements != (body *)0x0 &&
                  (w.bodies.field3_0x20.elements[w.bodies.field0_0x0.index_table[uVar69].index].
                   parent_id == 0)))))) {
          pbVar93 = w.bodies.field3_0x20.elements + w.bodies.field0_0x0.index_table[uVar69].index;
          fVar208 = w.field119_0x3dc0.particles[(longlong)pcVar120].r;
          fVar171 = w.field119_0x3dc0.particles[(longlong)pcVar120].x.field0_0x0._s_0.x;
          fVar334 = w.field119_0x3dc0.particles[(longlong)pcVar120].x.field0_0x0._s_0.y;
          auVar248 = ZEXT416((uint)((fVar334 - fVar208) * 0.083333336));
          auVar248 = vroundss_avx(auVar248,auVar248,9);
          iVar149.id = (int)auVar248._0_4_;
          auVar248 = ZEXT416((uint)((fVar208 + fVar334) * 0.083333336));
          auVar248 = vroundss_avx(auVar248,auVar248,10);
          auVar248._4_4_ = (int)auVar248._0_4_;
          local_170 = (uchar *)CONCAT44(local_170._4_4_,auVar248._4_4_);
          if (iVar149.id <= auVar248._4_4_) {
            auVar219 = ZEXT416((uint)((fVar171 - fVar208) * 0.083333336));
            auVar219 = vroundss_avx(auVar219,auVar219,9);
            iVar70 = (int)auVar219._0_4_;
            auVar219 = ZEXT416((uint)((fVar208 + fVar171) * 0.083333336));
            auVar219 = vroundss_avx(auVar219,auVar219,10);
            local_188._0_4_ = (undefined4)auVar219._0_4_;
            local_1d8._0_4_ = iVar70;
            if (w.field58_0x3a60.cells != (cell *)0x0 && iVar70 <= (int)local_188._0_4_) {
              local_120 = (creature_spawner *)w.hash_data;
              local_128 = (real_2_u_0)w.hashed_cells;
              do {
                auVar219 = local_168;
                local_1e8._0_4_ = iVar149.id;
                local_1e8._4_4_ = iVar149.index;
                iVar97 = iVar149.id;
                local_168._4_4_ = 0;
                local_168._0_4_ = iVar97 * 0x400;
                local_168._8_8_ = auVar219._8_8_;
                iVar136 = iVar70;
                do {
                  iVar149.id = 0;
                  iVar149.index = 0;
                  uVar69 = iVar97 * 0x400 + iVar136 & 0xffff;
                  if (uVar69 == 0) {
                    iVar71 = 0;
                    fVar172 = (float)*w.hash_data;
                    if (0 < (int)fVar172) goto LAB_1400d4a2b;
                  }
                  else {
                    iVar71 = w.hash_data[(ulonglong)uVar69 - 1];
                    fVar172 = (float)(w.hash_data[uVar69] - iVar71);
                    if (fVar172 != 0.0 && iVar71 <= w.hash_data[uVar69]) {
LAB_1400d4a2b:
                      piVar160 = (int *)0x0;
                      do {
                        pcVar84 = w.field58_0x3a60.cells +
                                  (w.hashed_cells[(longlong)iVar71 + (longlong)piVar160] >> 4);
                        uVar109 = (ulonglong)
                                  (w.hashed_cells[(longlong)iVar71 + (longlong)piVar160] & 0xf);
                        fVar245 = fVar208 + pcVar84->spacing[uVar109 - 0x20];
                        fVar333 = *(float *)((longlong)&pcVar84->field32_0xbc0 + uVar109 * 4) -
                                  fVar171;
                        fVar303 = *(float *)((longlong)&pcVar84->field33_0xc00 + uVar109 * 4) -
                                  fVar334;
                        if ((fVar303 * fVar303 + auVar198._4_4_ + fVar333 * fVar333 <
                             fVar245 * fVar245) &&
                           (*(int *)((longlong)&pcVar84->field1_0x40 + uVar109 * 4) ==
                            w.selected_body)) {
                          auVar309 = ZEXT1664(auVar309._0_16_);
                          auVar327 = ZEXT1664(auVar327._0_16_);
                          auVar357 = ZEXT1664(auVar357._0_16_);
                          auVar332 = ZEXT1664(auVar332._0_16_);
                          auVar336 = ZEXT1664(auVar336._0_16_);
                          auVar346 = ZEXT1664(auVar346._0_16_);
                          auVar350 = ZEXT1664(auVar350._0_16_);
                          auVar353 = ZEXT1664(auVar353._0_16_);
                          auVar363 = ZEXT1664(auVar363._0_16_);
                          auVar324 = ZEXT1664(auVar324._0_16_);
                          local_208 = pcVar119;
                          give_xp(pbVar93,1);
                          uVar122 = w.field119_0x3dc0.particles;
                          lVar133 = (longlong)w.n_particles + -1;
                          w.n_particles = (int)lVar133;
                          ppVar79 = w.field119_0x3dc0.particles + lVar133;
                          iVar136 = ppVar79->type;
                          rVar77.field0_0x0 = (ppVar79->x).field0_0x0;
                          rVar139.field0_0x0 = (ppVar79->x_dot).field0_0x0;
                          rVar112.field0_0x0 = (ppVar79->x_spawn).field0_0x0;
                          iVar97 = ppVar79->target;
                          ppVar79 = w.field119_0x3dc0.particles + lVar133;
                          auVar198._4_4_ = ppVar79->r;
                          fVar208 = ppVar79->r_dot;
                          auVar248._4_4_ = ppVar79->time;
                          iVar70 = ppVar79->duration;
                          rVar61.field0_0x0 = (ppVar79->color).field0_0x0;
                          rVar59.field0_0x0 =
                               w.field119_0x3dc0.particles[lVar133].color_initial.field0_0x0;
                          rVar60.field0_0x0 =
                               w.field119_0x3dc0.particles[lVar133].color_final.field0_0x0;
                          *(undefined1 (*) [32])
                           ((longlong)
                            &w.field119_0x3dc0.particles[(longlong)pcVar120].color_final.field0_0x0
                           + 8) = *(undefined1 (*) [32])
                                   ((longlong)
                                    &w.field119_0x3dc0.particles[lVar133].color_final.field0_0x0 + 8
                                   );
                          ((particle_t *)(uVar122 + pcVar120 * 0x78))->color_initial =
                               (real_4)rVar59.field0_0x0;
                          ((particle_t *)(uVar122 + pcVar120 * 0x78))->color_final =
                               (real_4)rVar60.field0_0x0;
                          ppVar79 = (particle_t *)(uVar122 + pcVar120 * 0x78);
                          ppVar79->r = auVar198._4_4_;
                          ppVar79->r_dot = fVar208;
                          ppVar79->time = auVar248._4_4_;
                          ppVar79->duration = iVar70;
                          ppVar79->color = (real_4)rVar61.field0_0x0;
                          ppVar79 = (particle_t *)(uVar122 + pcVar120 * 0x78);
                          ppVar79->type = iVar136;
                          ppVar79->x = (real_2)rVar77.field0_0x0;
                          ppVar79->x_dot = (real_2)rVar139.field0_0x0;
                          ppVar79->x_spawn = (real_2)rVar112.field0_0x0;
                          ppVar79->target = iVar97;
                          pcVar118 = (creature_spawner *)((longlong)&local_208[-1].xp + 3);
                          pcVar119 = local_208;
                          goto LAB_1400d4530;
                        }
                        piVar160 = (int *)((longlong)piVar160 + 1);
                      } while (fVar172 != SUB84(piVar160,0));
                    }
                  }
                  bVar170 = iVar136 != local_188._0_4_;
                  iVar136 = iVar136 + 1;
                } while (bVar170);
                iVar149.index = 0;
                iVar149.id = iVar97 + 1;
                pcVar84 = (cell *)w.hash_data;
                local_208 = pcVar119;
              } while (iVar97 != auVar248._4_4_);
            }
          }
          pcVar118 = (creature_spawner *)((longlong)&pcVar119[-1].xp + 3);
          fVar171 = (pbVar93->old_center_of_mass).field0_0x0._s_0.x - fVar171;
          fVar334 = (pbVar93->old_center_of_mass).field0_0x0._s_0.y - fVar334;
          if (fVar334 * fVar334 + auVar198._4_4_ + fVar171 * fVar171 < auVar350._0_4_) {
            w.field119_0x3dc0.particles[(longlong)pcVar120].x_dot.field0_0x0 =
                 (real_2_u_0)
                 (CONCAT44((int)((ulonglong)pbVar93 >> 0x20),
                           auVar363._0_4_ * fVar171 +
                           w.field119_0x3dc0.particles[(longlong)pcVar120].x_dot.field0_0x0._s_0.x)
                 | (ulonglong)
                   (uint)(auVar363._0_4_ * fVar334 +
                         w.field119_0x3dc0.particles[(longlong)pcVar120].x_dot.field0_0x0._s_0.y) <<
                   0x20);
          }
        }
LAB_1400d4530:
        auVar248 = auVar324._0_16_;
        bVar170 = 1 < (longlong)pcVar119;
        pcVar119 = pcVar118;
      } while (bVar170);
    }
    auVar324 = ZEXT1664(auVar248);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("acid particle collisions");
    if (0 < w.n_acid_particles) {
      pcVar119 = (creature_spawner *)0x0;
      do {
        local_120 = pcVar119;
        uVar122 = w.field122_0x3de0.acid_particles;
        lVar133 = 0;
        do {
          auVar198._4_4_ = ((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->y[lVar133];
          auVar248 = ZEXT416((uint)((auVar198._4_4_ + -1.0) * 0.083333336));
          auVar219 = vroundss_avx(auVar248,auVar248,9);
          pcVar84 = (cell *)CONCAT44((int)((ulonglong)pcVar84 >> 0x20),(int)auVar219._0_4_);
          auVar248 = ZEXT416((uint)((auVar198._4_4_ + 1.0) * 0.083333336));
          auVar248 = vroundss_avx(auVar248,auVar248,10);
          auVar248._4_4_ = (int)auVar248._0_4_;
          local_188._0_4_ = auVar248._4_4_;
          if ((int)auVar219._0_4_ <= auVar248._4_4_) {
            fVar208 = ((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->x[lVar133];
            auVar219 = ZEXT416((uint)((fVar208 + -1.0) * 0.083333336));
            auVar219 = vroundss_avx(auVar219,auVar219,9);
            local_208._0_4_ = (float)(int)auVar219._0_4_;
            auVar219 = ZEXT416((uint)((fVar208 + 1.0) * 0.083333336));
            auVar219 = vroundss_avx(auVar219,auVar219,10);
            peVar165._0_4_ = (undefined4)auVar219._0_4_;
            if ((int)(float)local_208 <= (int)peVar165._0_4_) {
              uVar69 = 0;
              do {
                local_168._0_8_ = pcVar84;
                iVar136 = (int)pcVar84;
                iVar70 = (int)(float)local_208;
                do {
                  uVar96 = iVar70 + iVar136 * 0x400 & 0xffff;
                  if (uVar96 == 0) {
                    iVar97 = 0;
                    piVar160 = (int *)(longlong)*w.hash_data;
                    if (0 < *w.hash_data) goto LAB_1400d4d0e;
                  }
                  else {
                    iVar97 = w.hash_data[(ulonglong)uVar96 - 1];
                    piVar160 = (int *)(longlong)w.hash_data[uVar96];
                    if (iVar97 < w.hash_data[uVar96]) {
LAB_1400d4d0e:
                      rVar124 = (real_2_u_0)(longlong)iVar97;
                      lVar163 = (longlong)rVar124 * 3 + 2;
                      do {
                        fVar172 = *(float *)((longlong)w.hashed_pos + lVar163 * 4 + -8) - fVar208;
                        fVar245 = *(float *)((longlong)w.hashed_pos + lVar163 * 4 + -4) -
                                  auVar198._4_4_;
                        fVar171 = ((w.hashed_pos)->field0_0x0).data[lVar163] + 1.0;
                        fVar334 = fVar245 * fVar245 + fVar172 * fVar172 + 0.0;
                        if (fVar334 < fVar171 * fVar171) {
                          uVar96 = w.hashed_cells[(longlong)rVar124];
                          iVar97 = (int)uVar96 >> 6;
                          if ((*(ulonglong *)(puVar75 + (longlong)iVar97 * 8) >>
                               ((ulonglong)uVar96 & 0x3f) & 1) == 0) {
                            *(ulonglong *)(puVar75 + (longlong)iVar97 * 8) =
                                 1L << ((byte)uVar96 & 0x3f) |
                                 *(ulonglong *)(puVar75 + (longlong)iVar97 * 8);
                            lVar110 = (longlong)(int)uVar69;
                            uVar69 = uVar69 + 1;
                            *(int *)(CONCAT44(local_1b8.y,local_1b8.x) + lVar110 * 4) = iVar97;
                            uVar102 = w.field58_0x3a60.cells;
                            iVar97 = (int)uVar96 >> 4;
                            uVar96 = uVar96 & 0xf;
                            if (((uint)w.field58_0x3a60.cells[iVar97].spacing
                                       [(ulonglong)uVar96 + 0x70] & 0x3f) != 0) {
                              fVar333 = w.field58_0x3a60.cells[iVar97].field15_0x780.damage_packed
                                        [uVar96];
                              w.field58_0x3a60.cells[iVar97].field14_0x740.health_packed[uVar96] =
                                   w.field58_0x3a60.cells[iVar97].field14_0x740.health_packed
                                   [uVar96] + -0.005;
                              (((cell *)(uVar102 + (longlong)iVar97 * 0x2080))->field15_0x780).
                              damage_packed[uVar96] = fVar333 + 0.005;
                              (((cell *)(uVar102 + (longlong)iVar97 * 0x2080))->field16_0x7c0).
                              bloodless_damage_packed[uVar96] =
                                   (((cell *)(uVar102 + (longlong)iVar97 * 0x2080))->field16_0x7c0).
                                   bloodless_damage_packed[uVar96] + 0.0045;
                              fVar333 = w.camera_pos.field0_0x0._s_0.x -
                                        (((cell *)(uVar102 + (longlong)iVar97 * 0x2080))->
                                        field32_0xbc0).x_packed[uVar96];
                              fVar303 = w.camera_pos.field0_0x0._s_0.y -
                                        (((cell *)(uVar102 + (longlong)iVar97 * 0x2080))->
                                        field33_0xc00).y_packed[uVar96];
                              auVar219 = vmaxss_avx(ZEXT416((uint)((fVar303 * fVar303 +
                                                                   fVar333 * fVar333 + 0.0) * 0.0001
                                                                  )),SUB6416(ZEXT464(0x3f800000),0))
                              ;
                              auVar324 = ZEXT464((uint)(auVar324._0_4_ + 0.0002 / auVar219._0_4_));
                              auVar219 = vsqrtss_avx(ZEXT416((uint)fVar334),ZEXT416((uint)fVar334));
                              fVar171 = (fVar171 / auVar219._0_4_ + -1.0) * 0.1;
                              fVar208 = fVar208 - fVar172 * fVar171;
                              auVar198._4_4_ = auVar198._4_4_ - fVar245 * fVar171;
                              ((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->x[lVar133] =
                                   fVar208;
                              ((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->y[lVar133] =
                                   auVar198._4_4_;
                              fVar171 = (((cell *)(uVar102 + (longlong)iVar97 * 0x2080))->
                                        field35_0xc80).y_dot_packed[uVar96];
                              ((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->x_dot[lVar133] =
                                   (((cell *)(uVar102 + (longlong)iVar97 * 0x2080))->field34_0xc40).
                                   x_dot_packed[uVar96] +
                                   (((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->x_dot
                                    [lVar133] -
                                   (((cell *)(uVar102 + (longlong)iVar97 * 0x2080))->field34_0xc40).
                                   x_dot_packed[uVar96]) * 0.9;
                              ((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->y_dot[lVar133] =
                                   fVar171 + (((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->
                                              y_dot[lVar133] - fVar171) * 0.9;
                              ((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->time[lVar133] =
                                   ((acid_particle_16 *)(uVar122 + local_120 * 0x3c0))->time
                                   [lVar133] + 1;
                            }
                          }
                        }
                        rVar124._s_0 = rVar124._s_0 + 1;
                        lVar163 = lVar163 + 3;
                      } while ((real_2_u_0)piVar160 != rVar124);
                    }
                  }
                  bVar170 = iVar70 != peVar165._0_4_;
                  iVar70 = iVar70 + 1;
                } while (bVar170);
                pcVar84 = (cell *)(ulonglong)(iVar136 + 1);
              } while (iVar136 != auVar248._4_4_);
              if (0 < (int)uVar69) {
                lVar163 = CONCAT44(local_1b8.y,local_1b8.x);
                if (uVar69 < 4) {
                  uVar109 = 0;
                }
                else {
                  uVar109 = 0;
                  do {
                    puVar88 = puVar75 + (longlong)*(int *)(lVar163 + uVar109 * 4) * 8;
                    puVar88[0] = '\0';
                    puVar88[1] = '\0';
                    puVar88[2] = '\0';
                    puVar88[3] = '\0';
                    puVar88[4] = '\0';
                    puVar88[5] = '\0';
                    puVar88[6] = '\0';
                    puVar88[7] = '\0';
                    puVar88 = puVar75 + (longlong)*(int *)(lVar163 + 4 + uVar109 * 4) * 8;
                    puVar88[0] = '\0';
                    puVar88[1] = '\0';
                    puVar88[2] = '\0';
                    puVar88[3] = '\0';
                    puVar88[4] = '\0';
                    puVar88[5] = '\0';
                    puVar88[6] = '\0';
                    puVar88[7] = '\0';
                    puVar88 = puVar75 + (longlong)*(int *)(lVar163 + 8 + uVar109 * 4) * 8;
                    puVar88[0] = '\0';
                    puVar88[1] = '\0';
                    puVar88[2] = '\0';
                    puVar88[3] = '\0';
                    puVar88[4] = '\0';
                    puVar88[5] = '\0';
                    puVar88[6] = '\0';
                    puVar88[7] = '\0';
                    puVar88 = puVar75 + (longlong)*(int *)(lVar163 + 0xc + uVar109 * 4) * 8;
                    puVar88[0] = '\0';
                    puVar88[1] = '\0';
                    puVar88[2] = '\0';
                    puVar88[3] = '\0';
                    puVar88[4] = '\0';
                    puVar88[5] = '\0';
                    puVar88[6] = '\0';
                    puVar88[7] = '\0';
                    uVar109 = uVar109 + 4;
                  } while ((uVar69 & 0x7ffffffc) != uVar109);
                  if ((ulonglong)(uVar69 & 3) == 0) goto LAB_1400d4c00;
                }
                uVar123 = 0;
                do {
                  puVar88 = puVar75 + (longlong)*(int *)(lVar163 + uVar109 * 4 + uVar123 * 4) * 8;
                  puVar88[0] = '\0';
                  puVar88[1] = '\0';
                  puVar88[2] = '\0';
                  puVar88[3] = '\0';
                  puVar88[4] = '\0';
                  puVar88[5] = '\0';
                  puVar88[6] = '\0';
                  puVar88[7] = '\0';
                  uVar123 = uVar123 + 1;
                } while ((uVar69 & 3) != uVar123);
              }
            }
          }
LAB_1400d4c00:
          lVar133 = lVar133 + 1;
        } while (lVar133 != 0x10);
        pcVar119 = (creature_spawner *)((longlong)&local_120->body_id + 1);
      } while ((longlong)pcVar119 < (longlong)(w.n_acid_particles + 0xf >> 4));
    }
    auVar336 = ZEXT464(0xbf800000);
    stunalloc((void *)CONCAT44(local_1b8.y,local_1b8.x));
    stunalloc(puVar75);
    pvVar73 = TlsGetValue(tls_index);
    if (w.show_trace == 0) {
      auVar346 = ZEXT464(0x40c00000);
      local_1b8 = (real_2_u_0_s_0)CONCAT44(local_1b8.y,local_1b8.x);
      local_208 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208);
    }
    else {
      auVar346 = ZEXT464(0x40c00000);
      if (*(longlong *)((longlong)pvVar73 + 0xa8) != 0) {
        QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
        QueryPerformanceCounter(local_118);
        *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
             (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
        *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
      }
    }
  }
  begin_trace_stage("clear remaining body stats");
  auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
  iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
  iVar136 = (w.bodies.n_elements * auVar248._4_4_) / iVar70;
  iVar70 = ((auVar248._4_4_ + 1) * w.bodies.n_elements) / iVar70;
  if (iVar136 < iVar70) {
    lVar163 = (longlong)iVar136 * 0x2d0;
    lVar133 = (longlong)iVar70 - (longlong)iVar136;
    do {
      uVar122 = w.bodies.field3_0x20.elements;
      *(undefined8 *)
       ((longlong)&((w.bodies.field3_0x20.elements)->old_center_of_mass).field0_0x0 + lVar163) =
           *(undefined8 *)
            ((longlong)&((w.bodies.field3_0x20.elements)->center_of_mass).field0_0x0 + lVar163);
      *(undefined8 *)((longlong)&(((body *)uVar122)->old_center_of_mass_dot).field0_0x0 + lVar163) =
           *(undefined8 *)((longlong)&(((body *)uVar122)->center_of_mass_dot).field0_0x0 + lVar163);
      *(undefined4 *)((((body *)uVar122)->brain).abilities + lVar163 + -0x40) =
           *(undefined4 *)((((body *)uVar122)->brain).abilities + lVar163 + -0x44);
      *(undefined4 *)((((body *)uVar122)->brain).abilities + lVar163 + -0x44) = 0;
      uVar69 = *(uint *)(&((body *)uVar122)->field_0x98 + lVar163);
      *(uint *)(&((body *)uVar122)->field_0x98 + lVar163) = uVar69 & 0xffffefff;
      *(undefined8 *)((((body *)uVar122)->brain).abilities + lVar163 + -0x3c) = 0;
      if ((uVar69 & 1) != 0) {
        *(undefined4 *)((longlong)&((body *)uVar122)->n_cells + lVar163) = 0;
        *(undefined8 *)((longlong)&(((body *)uVar122)->center_of_mass).field0_0x0 + lVar163) = 0;
        *(undefined8 *)((longlong)&(((body *)uVar122)->center_of_mass_dot).field0_0x0 + lVar163) = 0
        ;
        if ((*(longlong *)((longlong)&((body *)uVar122)->boss_part + lVar163) == 0) &&
           (*(int *)((longlong)&((body *)uVar122)->id + lVar163) != w.selected_body)) {
          uVar69 = uVar69 & 0xffffefff | 0x200;
        }
        else {
          uVar69 = uVar69 & 0xffffedff;
        }
        *(uint *)(&((body *)uVar122)->field_0x98 + lVar163) = uVar69;
        *(undefined4 *)((((body *)uVar122)->brain).abilities + lVar163 + -0x80) = 0;
        *(undefined4 *)((longlong)&((body *)uVar122)->cell_cost + lVar163) = 0;
        pbVar13 = (((body *)uVar122)->brain).abilities + lVar163 + -0x68;
        *(undefined8 *)pbVar13 = 0;
        *(undefined8 *)(pbVar13 + 8) = 0;
        *(undefined4 *)((longlong)&((wall_t *)(&((body *)uVar122)->brain + 1))->dist + lVar163) =
             0x7f800000;
        puVar11 = (undefined8 *)
                  ((longlong)&(((wall_t *)(&((body *)uVar122)->brain + 1))->gradient).field0_0x0 +
                  lVar163);
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined4 *)((longlong)&((wall_t *)(&((body *)uVar122)->brain + 1))->air_dist + lVar163)
             = 0;
        *(float *)((longlong)&((body *)uVar122)->invmass + lVar163) =
             1.0 / *(float *)((longlong)&((body *)uVar122)->mass + lVar163);
        *(undefined4 *)((longlong)&((body *)uVar122)->avg_phasing + lVar163) = 0;
      }
      lVar163 = lVar163 + 0x2d0;
      lVar133 = lVar133 + -1;
    } while (lVar133 != 0);
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  local_120 = (creature_spawner *)CONCAT44(local_120._4_4_,auVar324._0_4_);
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("calculate permutation");
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc) < DAT_1401fa748) {
      _Init_thread_header(&DAT_1401fa748);
      if (DAT_1401fa748 == -1) {
        permutation = (int *)stalloc((longlong)w.n_cells << 2);
        _Init_thread_footer(&DAT_1401fa748);
        auVar324 = ZEXT464((uint)local_120._0_4_);
      }
    }
    piVar74 = permutation;
    if (0 < w.n_cells) {
      lVar133 = 0;
      do {
        piVar74[lVar133] = (int)lVar133;
        piVar68 = permutation;
        lVar133 = lVar133 + 1;
        lVar163 = (longlong)w.n_cells;
      } while (lVar133 < lVar163);
      if (0 < w.n_cells) {
        uVar109 = 0;
        auVar248._4_4_ = 0;
        do {
          uVar96 = (int)lVar163 - 1;
          uVar69 = (w.seed >> 0x10 ^ w.seed) * 0x7feb352d;
          uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
          w.seed = uVar69 >> 0x10 ^ uVar69;
          uVar69 = (int)((float)w.seed * 2.3283064e-10 * (float)((int)lVar163 + auVar248._4_4_)) +
                   (int)uVar109;
          if ((int)uVar96 < (int)uVar69) {
            uVar69 = uVar96;
          }
          uVar123 = (ulonglong)uVar69;
          if ((int)uVar69 < (int)uVar109) {
            uVar123 = uVar109 & 0xffffffff;
          }
          iVar70 = piVar68[uVar109];
          piVar68[uVar109] = piVar68[uVar123];
          piVar68[uVar123] = iVar70;
          uVar109 = uVar109 + 1;
          lVar163 = (longlong)w.n_cells;
          auVar248._4_4_ = auVar248._4_4_ + -1;
        } while ((longlong)uVar109 < lVar163);
      }
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("do cell funcs");
    if (0 < w.n_cells) {
      lVar133 = 0;
      auVar309 = ZEXT464(0x3f800000);
      do {
        uVar122 = w.field58_0x3a60.cells;
        pmVar117 = materials_list;
        iVar70 = permutation[lVar133] >> 4;
        uVar109 = (ulonglong)(permutation[lVar133] & 0xf);
        pcVar33 = (cell *)(w.field58_0x3a60.cells[iVar70].field0_0x0.id_packed + uVar109);
        auVar248._4_4_ = w.field58_0x3a60.cells[iVar70].field3_0xc0.material_index_packed[uVar109];
        auVar198._4_4_ = w.field58_0x3a60.cells[iVar70].spacing[uVar109 + 0x70];
        w.field58_0x3a60.cells[iVar70].spacing[uVar109 + 0x70] =
             (float)((uint)auVar198._4_4_ & 0xfffff9ff);
        (((cell *)(uVar122 + (longlong)iVar70 * 0x2080))->field57_0x1340).floodfilled_packed
        [uVar109] = 0;
        if ((((uint)auVar198._4_4_ & 0x100000) != 0) && (0 < (pcVar33->field30_0xb40).n_colors)) {
          uVar109 = (ulonglong)pcVar33 & 0xffffffffffffffc0;
          lVar163 = (ulonglong)((uint)((ulonglong)pcVar33 >> 2) & 0xf) * 0xb0;
          auVar200._0_4_ = auVar309._0_4_ / (float)(pcVar33->field30_0xb40).n_colors;
          auVar200._4_12_ = auVar309._4_12_;
          uVar122 = *(undefined8 *)(uVar109 + 0x1588 + lVar163);
          auVar219 = vmovsldup_avx(auVar200);
          auVar201._0_4_ = auVar219._0_4_ * (float)uVar122;
          auVar201._4_4_ = auVar219._4_4_ * (float)((ulonglong)uVar122 >> 0x20);
          auVar201._8_4_ = auVar219._8_4_ * 0.0;
          auVar201._12_4_ = auVar219._12_4_ * 0.0;
          uVar122 = vmovlps_avx(auVar201);
          *(undefined8 *)(uVar109 + 0x1588 + lVar163) = uVar122;
          *(float *)(uVar109 + 0x1590 + lVar163) =
               auVar200._0_4_ * *(float *)(uVar109 + 0x1590 + lVar163);
        }
        (pcVar33->field30_0xb40).n_colors = 0;
        if ((auVar309._0_4_ <= (pcVar33->field13_0x700).maturity) &&
           (pmVar117[auVar248._4_4_].physics_update_fn != (_func___cdecl_void_cell_ptr *)0x0)) {
          (*pmVar117[auVar248._4_4_].physics_update_fn)(pcVar33);
        }
        lVar133 = lVar133 + 1;
      } while (lVar133 < w.n_cells);
    }
    stunalloc(permutation);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("link attractors");
    auVar248._4_4_ = w.n_cells + 0x3f;
    TlsGetValue(tls_index);
    puVar75 = stalloc((longlong)(auVar248._4_4_ >> 6) << 3);
    rVar114 = (real_2_u_0)0x0;
    memset();
    puVar88 = stalloc((longlong)w.n_cells << 2);
    if (0 < w.n_link_attractors) {
      auVar332 = ZEXT1264(ZEXT812(0));
      auVar346 = ZEXT464(0x44c80000);
      auVar336 = ZEXT464(0x3f800000);
      auVar309 = ZEXT464(0x43100000);
      auVar327 = ZEXT464(0x3ca3d70b);
      auVar357 = ZEXT464(0x3cf5c28f);
      uVar109 = 0;
      local_168._0_8_ = puVar75;
      local_188._0_8_ = puVar88;
      pcVar72 = local_f8;
      do {
        auVar248 = vminss_avx(SUB6416(ZEXT464(0x4e6e6b28),0),
                              ZEXT416((uint)w.field103_0x3d20.link_attractors[uVar109].strength));
        auVar248 = vmaxss_avx(SUB6416(ZEXT464(0xce6e6b28),0),auVar248);
        fVar208 = auVar248._0_4_ * 1.6;
        auVar198._4_4_ = w.field103_0x3d20.link_attractors[uVar109].x.field0_0x0._s_0.y;
        auVar248 = ZEXT416((uint)((auVar198._4_4_ + -40.0) * 0.083333336));
        auVar248 = vroundss_avx(auVar248,auVar248,9);
        rVar104._s_0.y = rVar114._s_0.y;
        rVar104._s_0.x = (float)(int)auVar248._0_4_;
        auVar248 = ZEXT416((uint)((auVar198._4_4_ + 40.0) * 0.083333336));
        auVar248 = vroundss_avx(auVar248,auVar248,10);
        local_1d8._0_4_ = (int)auVar248._0_4_;
        rVar114 = rVar104;
        piVar160 = (int *)w.field103_0x3d20.link_attractors;
        local_190 = uVar109;
        if ((int)rVar104._s_0.x <= (int)auVar248._0_4_) {
          auVar198._4_4_ = w.field103_0x3d20.link_attractors[uVar109].x.field0_0x0._s_0.x;
          auVar248 = ZEXT416((uint)((auVar198._4_4_ + -40.0) * 0.083333336));
          auVar248 = vroundss_avx(auVar248,auVar248,9);
          rVar114._s_0.x = (float)(int)auVar248._0_4_;
          rVar114._s_0.y = rVar104._s_0.y;
          auVar248 = ZEXT416((uint)((auVar198._4_4_ + 40.0) * 0.083333336));
          auVar248 = vroundss_avx(auVar248,auVar248,10);
          local_1e8._0_4_ = rVar114._s_0.x;
          local_170 = (uchar *)CONCAT44(local_170._4_4_,(int)auVar248._0_4_);
          if ((int)rVar114._s_0.x <= (int)auVar248._0_4_) {
            piVar160 = (int *)(w.field103_0x3d20.link_attractors + uVar109);
            peVar165 = (explosion_t *)0x0;
            auVar248 = vcmpss_avx(ZEXT416((uint)fVar208),auVar332._0_16_,1);
            auVar350 = ZEXT1664(auVar248);
            do {
              local_208._0_4_ = (float)((int)rVar104._s_0.x << 10);
              local_208._4_4_ = 0.0;
              rVar114._s_0.y = 0.0;
              rVar114._s_0.x = (float)local_1e8._0_4_;
              local_128 = rVar104;
              do {
                local_1b8.x = rVar114._0_4_;
                uVar69 = (int)local_1b8.x + (int)(float)local_208 & 0xffff;
                local_1b8.y = 0.0;
                if (uVar69 == 0) {
                  auVar248._4_4_ = 0;
                  iVar70 = *w.hash_data;
                  if (0 < iVar70) goto LAB_1400d583d;
                }
                else {
                  auVar248._4_4_ = w.hash_data[(ulonglong)uVar69 - 1];
                  iVar70 = w.hash_data[uVar69] - auVar248._4_4_;
                  if (iVar70 != 0 && auVar248._4_4_ <= w.hash_data[uVar69]) {
LAB_1400d583d:
                    pcVar84 = (cell *)(longlong)auVar248._4_4_;
                    lVar133 = (longlong)pcVar84 * 0xc;
                    do {
                      fVar171 = (float)*piVar160 -
                                *(float *)((longlong)&(w.hashed_pos)->field0_0x0 + lVar133);
                      fVar334 = *(float *)((longlong)piVar160 + 4) -
                                *(float *)((longlong)&(w.hashed_pos)->field0_0x0 + lVar133 + 4);
                      auVar198._4_4_ = fVar334 * fVar334 + auVar332._0_4_ + fVar171 * fVar171;
                      if (auVar198._4_4_ < auVar346._0_4_) {
                        uVar69 = w.hashed_cells[(longlong)pcVar84];
                        auVar248._4_4_ = (int)uVar69 >> 6;
                        if ((*(ulonglong *)(puVar75 + (longlong)auVar248._4_4_ * 8) >>
                             ((ulonglong)uVar69 & 0x3f) & 1) == 0) {
                          *(ulonglong *)(puVar75 + (longlong)auVar248._4_4_ * 8) =
                               1L << ((byte)uVar69 & 0x3f) |
                               *(ulonglong *)(puVar75 + (longlong)auVar248._4_4_ * 8);
                          *(int *)(puVar88 + (longlong)(int)SUB84(peVar165,0) * 4) = auVar248._4_4_;
                          peVar165._0_4_ = (int)SUB84(peVar165,0) + 1;
                          peVar165._4_4_ = 0;
                          if ((*(byte *)((longlong)w.field58_0x3a60.cells[(int)uVar69 >> 4].spacing
                                        + (ulonglong)(uVar69 & 0xf) * 4 + 0x1c1) & 4) != 0) {
                            piVar74 = w.field58_0x3a60.cells[(int)uVar69 >> 4].field0_0x0.id_packed
                                      + (uVar69 & 0xf);
                            if ((*(float *)((longlong)piVar160 + 0xc) == 0.0) ||
                               (*(float *)((longlong)piVar160 + 0xc) != (float)piVar74[0x20])) {
                              auVar248 = vminss_avx(SUB6416(ZEXT464(0x4e6e6b28),0),
                                                    ZEXT416((uint)piVar74[0x40]));
                              auVar248 = vmaxss_avx(SUB6416(ZEXT464(0xce6e6b28),0),auVar248);
                              fVar172 = fVar208 * auVar248._0_4_;
                              auVar308._0_4_ = -fVar172;
                              auVar308._4_4_ = 0x80000000;
                              auVar308._8_4_ = 0x80000000;
                              auVar308._12_4_ = 0x80000000;
                              auVar248 = vcmpss_avx(auVar248,auVar332._0_16_,1);
                              auVar248 = vblendvps_avx(ZEXT416((uint)fVar172),auVar308,auVar248);
                              auVar248 = vblendvps_avx(ZEXT416((uint)fVar172),auVar248,
                                                       auVar350._0_16_);
                              auVar219 = vmaxss_avx(ZEXT416((uint)auVar198._4_4_),auVar336._0_16_);
                              fVar245 = auVar248._0_4_ / auVar219._0_4_;
                              fVar172 = fVar171 * fVar245;
                              fVar245 = fVar334 * fVar245;
                              auVar198._4_4_ =
                                   fVar245 * fVar245 + auVar332._0_4_ + fVar172 * fVar172;
                              if (auVar309._0_4_ < auVar198._4_4_) {
                                auVar248 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),
                                                       ZEXT416((uint)auVar198._4_4_));
                                auVar198._4_4_ = (auVar336._0_4_ / auVar248._0_4_) * 12.0;
                                fVar172 = fVar172 * auVar198._4_4_;
                                fVar245 = fVar245 * auVar198._4_4_;
                              }
                              auVar198._4_4_ = (float)piVar74[0x310];
                              piVar74[0x310] = (int)(fVar172 + auVar198._4_4_);
                              fVar333 = (float)piVar74[800];
                              piVar74[800] = (int)(fVar245 + fVar333);
                              lVar163 = (ulonglong)((uint)((ulonglong)piVar74 >> 2) & 0xf) * 0xb0;
                              *(float *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15b0 +
                                        lVar163) = fVar172 + auVar198._4_4_;
                              *(float *)(((ulonglong)piVar74 & 0xffffffffffffffc0) + 0x15b4 +
                                        lVar163) = fVar245 + fVar333;
                              auVar198._4_4_ = (float)piVar74[0x2f0];
                              auVar324 = ZEXT464((uint)piVar74[0x300]);
                              uVar69 = (pcVar72->visual_seed >> 0x10 ^ pcVar72->visual_seed) *
                                       0x7feb352d;
                              uVar69 = uVar69 >> 0xf ^ uVar69;
                              uVar96 = uVar69 * -0x7b935975;
                              uVar96 = uVar96 >> 0x10 ^ uVar96;
                              pcVar72->visual_seed = uVar96;
                              fVar172 = auVar357._0_4_ +
                                        auVar327._0_4_ * (float)uVar96 * 2.3283064e-10;
                              rVar124 = (real_2_u_0)
                                        (CONCAT44((int)((ulonglong)puVar75 >> 0x20),
                                                  fVar171 * fVar172 + (float)piVar74[0x310]) |
                                        (ulonglong)(uint)(fVar334 * fVar172 + (float)piVar74[800])
                                        << 0x20);
                              uVar69 = uVar69 * -0x63d2f291;
                              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                              uVar69 = uVar69 >> 0x10 ^ uVar69;
                              pcVar72->visual_seed = uVar69;
                              auVar248._4_4_ = (int)((float)uVar69 * 2.3283064e-10 * 10.0);
                              if (auVar248._4_4_ < 1) {
                                auVar248._4_4_ = 0;
                              }
                              if (8 < auVar248._4_4_) {
                                auVar248._4_4_ = 9;
                              }
                              pvVar73 = TlsGetValue(tls_index);
                              fVar171 = auVar324._0_4_;
                              if ((settings.limit_particles == 0) ||
                                 ((uint)w.n_particles < settings.max_particles)) {
                                lVar163 = (longlong)w.max_particles;
                                iVar136 = w.n_particles;
                                if (w.max_particles <= w.n_particles) {
                                  w.max_particles = w.max_particles * 2;
                                  bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,
                                                          lVar163 * 0xf0);
                                  fVar171 = auVar324._0_4_;
                                  iVar136 = w.n_particles;
                                  if (!bVar170) goto LAB_1400d58ea;
                                }
                                uVar122 = w.field119_0x3dc0.particles;
                                w.n_particles = iVar136 + 1;
                                w.field119_0x3dc0.particles[iVar136].type = 1;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x).field0_0x0
                                ._s_0.x = auVar198._4_4_;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x).field0_0x0
                                ._s_0.y = fVar171;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_dot).
                                field0_0x0 = rVar124;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).
                                field0_0x0 = (real_2_u_0)0x0;
                                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->target = 0;
                                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->r = 1.5;
                                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->r_dot = -0.075
                                ;
                                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->time = 0;
                                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->duration =
                                     auVar248._4_4_ + 0xf;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color).
                                field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                                *(undefined8 *)
                                 ((longlong)
                                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color).
                                   field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3e4ccccd3f800000;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_initial
                                ).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                                *(undefined8 *)
                                 ((longlong)
                                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->
                                   color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
                                     0x3e4ccccd3f800000;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_final).
                                field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                                *(undefined8 *)
                                 ((longlong)
                                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->
                                   color_final).field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3f800000;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->emission).
                                field0_0x0 = (real_4_u_0)(ZEXT816(0) << 0x20);
                                *(undefined8 *)
                                 ((longlong)
                                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->emission).
                                   field0_0x0 + 0xd) = 0;
                                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).
                                field0_0x0 = (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->
                                             x).field0_0x0;
                              }
                              else {
                                uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                                         *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
                                uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                                uVar96 = uVar96 >> 0x10 ^ uVar96;
                                uVar69 = (uint)((float)uVar96 * 2.3283064e-10 * (float)w.n_particles
                                               );
                                if ((int)(w.n_particles - 1U) < (int)uVar69) {
                                  uVar69 = w.n_particles - 1U;
                                }
                                uVar109 = (ulonglong)uVar69;
                                *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
                                if ((int)uVar69 < 1) {
                                  uVar109 = 0;
                                }
                                if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false)
                                {
                                  ppVar79 = w.field119_0x3dc0.particles + uVar109;
                                  ppVar79->type = 1;
                                  (ppVar79->x).field0_0x0._s_0.x = auVar198._4_4_;
                                  (ppVar79->x).field0_0x0._s_0.y = fVar171;
                                  (ppVar79->x_dot).field0_0x0 = rVar124;
                                  (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                                  ppVar79->target = 0;
                                  ppVar79->r = 1.5;
                                  ppVar79->r_dot = -0.075;
                                  ppVar79->time = 0;
                                  ppVar79->duration = auVar248._4_4_ + 0xf;
                                  (ppVar79->color).field0_0x0.xy.field0_0x0 =
                                       (real_2_u_0)0x3f8000003f800000;
                                  *(undefined8 *)
                                   ((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
                                       0x3e4ccccd3f800000;
                                  (ppVar79->color_initial).field0_0x0.xy.field0_0x0 =
                                       (real_2_u_0)0x3f8000003f800000;
                                  *(undefined8 *)
                                   ((longlong)
                                    &(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
                                       0x3e4ccccd3f800000;
                                  (ppVar79->color_final).field0_0x0.xy.field0_0x0 =
                                       (real_2_u_0)0x3f8000003f800000;
                                  *(undefined8 *)
                                   ((longlong)&(ppVar79->color_final).field0_0x0._s_2.yz.field0_0x0
                                   + 4) = 0x3f800000;
                                  (ppVar79->emission).field0_0x0 = (real_4_u_0)(ZEXT816(0) << 0x20);
                                  *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) =
                                       0;
                                }
                              }
LAB_1400d58ea:
                              auVar324 = ZEXT464((uint)local_120._0_4_);
                              puVar75 = (uchar *)local_168._0_8_;
                              pcVar72 = local_f8;
                              puVar88 = (uchar *)local_188._0_8_;
                            }
                          }
                        }
                      }
                      pcVar84 = (cell *)((longlong)&(pcVar84->field0_0x0).id + 1);
                      lVar133 = lVar133 + 0xc;
                      iVar70 = iVar70 + -1;
                    } while (iVar70 != 0);
                  }
                }
                rVar114._s_0.y = 0.0;
                rVar114._s_0.x = (float)((int)local_1b8.x + 1);
              } while (local_1b8.x != local_170._0_4_);
              rVar104._s_0.y = 0.0;
              rVar104._s_0.x = (float)((int)local_128._s_0.x + 1);
            } while (local_128._s_0.x != (float)local_1d8._0_4_);
            uVar69 = (uint)peVar165;
            local_1b8 = (real_2_u_0_s_0)CONCAT44(local_1b8.y,local_1b8.x);
            local_208 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208);
            if (0 < (int)uVar69) {
              rVar89._0_4_ = uVar69 & 3;
              rVar89._s_0.y = 0.0;
              if (uVar69 < 4) {
                rVar114 = (real_2_u_0)0x0;
              }
              else {
                rVar105._0_4_ = uVar69 & 0x7ffffffc;
                rVar105._s_0.y = 0.0;
                rVar114 = (real_2_u_0)0x0;
                do {
                  puVar7 = puVar75 + (longlong)*(int *)(puVar88 + (longlong)rVar114 * 4) * 8;
                  puVar7[0] = '\0';
                  puVar7[1] = '\0';
                  puVar7[2] = '\0';
                  puVar7[3] = '\0';
                  puVar7[4] = '\0';
                  puVar7[5] = '\0';
                  puVar7[6] = '\0';
                  puVar7[7] = '\0';
                  puVar7 = puVar75 + (longlong)*(int *)(puVar88 + (longlong)rVar114 * 4 + 4) * 8;
                  puVar7[0] = '\0';
                  puVar7[1] = '\0';
                  puVar7[2] = '\0';
                  puVar7[3] = '\0';
                  puVar7[4] = '\0';
                  puVar7[5] = '\0';
                  puVar7[6] = '\0';
                  puVar7[7] = '\0';
                  puVar7 = puVar75 + (longlong)*(int *)(puVar88 + (longlong)rVar114 * 4 + 8) * 8;
                  puVar7[0] = '\0';
                  puVar7[1] = '\0';
                  puVar7[2] = '\0';
                  puVar7[3] = '\0';
                  puVar7[4] = '\0';
                  puVar7[5] = '\0';
                  puVar7[6] = '\0';
                  puVar7[7] = '\0';
                  puVar7 = puVar75 + (longlong)*(int *)(puVar88 + (longlong)rVar114 * 4 + 0xc) * 8;
                  puVar7[0] = '\0';
                  puVar7[1] = '\0';
                  puVar7[2] = '\0';
                  puVar7[3] = '\0';
                  puVar7[4] = '\0';
                  puVar7[5] = '\0';
                  puVar7[6] = '\0';
                  puVar7[7] = '\0';
                  rVar114._s_0 = rVar114._s_0 + 4;
                } while (rVar105 != rVar114);
                local_1b8 = (real_2_u_0_s_0)CONCAT44(local_1b8.y,local_1b8.x);
                local_208 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208);
                if (rVar89 == (real_2_u_0)0x0) goto LAB_1400d56b0;
              }
              lVar133 = (longlong)rVar114 * 4;
              rVar114 = (real_2_u_0)0x0;
              do {
                puVar7 = puVar75 + (longlong)*(int *)(puVar88 + (longlong)rVar114 * 4 + lVar133) * 8
                ;
                puVar7[0] = '\0';
                puVar7[1] = '\0';
                puVar7[2] = '\0';
                puVar7[3] = '\0';
                puVar7[4] = '\0';
                puVar7[5] = '\0';
                puVar7[6] = '\0';
                puVar7[7] = '\0';
                rVar114._s_0 = rVar114._s_0 + 1;
                local_1b8 = (real_2_u_0_s_0)CONCAT44(local_1b8.y,local_1b8.x);
                local_208 = (creature_spawner *)CONCAT44(local_208._4_4_,(float)local_208);
              } while (rVar89 != rVar114);
            }
          }
        }
LAB_1400d56b0:
        uVar109 = local_190 + 1;
      } while ((longlong)uVar109 < (longlong)w.n_link_attractors);
    }
    w.n_link_attractors = 0;
    stunalloc(puVar88);
    stunalloc(puVar75);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("update lightning emitters");
    auVar317 = auVar324._0_16_;
    auVar219 = auVar336._0_16_;
    if (0 < w.n_lightning_emitters) {
      iVar70 = -1;
      lVar133 = 0;
      auVar332 = ZEXT1264(ZEXT812(0));
      auVar336 = ZEXT464(0x4993b480);
      auVar309 = ZEXT464(0x41000000);
      auVar327 = ZEXT464(0x40000000);
      auVar357 = ZEXT464(0x3e99999a);
      auVar363 = ZEXT1664(CONCAT412(0x80000000,CONCAT48(0x80000000,0x8000000080000000)));
      auVar350 = ZEXT1664(___xmm_3f8000003f4ccccd3ecccccd3e4ccccd);
      auVar353 = ZEXT464(0x40a00000);
      auVar346 = ZEXT464(0x3f800000);
      peVar165 = (explosion_t *)0x0;
      pcVar72 = local_f8;
      auVar248._4_4_ = w.n_lightning_emitters;
      uVar131 = w.camera_pos.field0_0x0._s_0.x;
      uVar130 = w.camera_pos.field0_0x0._s_0.y;
      rVar78 = local_1b8;
      do {
        plVar115 = w.lightning_emitters;
        auVar198._4_4_ =
             *(float *)((longlong)&((w.lightning_emitters)->x).field0_0x0 + lVar133) -
             (float)uVar131;
        fVar208 = *(float *)((longlong)&((w.lightning_emitters)->x).field0_0x0 + lVar133 + 4) -
                  (float)uVar130;
        local_1b8 = rVar78;
        if (fVar208 * fVar208 + auVar198._4_4_ * auVar198._4_4_ + 0.0 <= auVar336._0_4_) {
          uVar69 = (w.seed >> 0x10 ^ w.seed) * 0x7feb352d;
          uVar69 = uVar69 >> 0xf ^ uVar69;
          uVar96 = uVar69 * -0x7b935975;
          w.seed = uVar96 >> 0x10 ^ uVar96;
          if ((float)w.seed * 2.3283064e-10 < 0.01) {
            uVar69 = uVar69 * -0x63d2f291;
            uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
            w.seed = uVar69 >> 0x10 ^ uVar69;
            uVar109 = (ulonglong)w.seed;
            uVar69 = (pcVar72->visual_seed >> 0x10 ^ pcVar72->visual_seed) * 0x7feb352d;
            uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
            uVar69 = uVar69 >> 0x10 ^ uVar69;
            pcVar72->visual_seed = uVar69;
            piVar160 = *(int **)((longlong)&(plVar115->dir).field0_0x0 + lVar133);
            auVar198._4_4_ = (float)uVar109 * 2.3283064e-10 * auVar309._0_4_ + auVar327._0_4_;
            auVar248 = vblendps_avx(ZEXT416((uint)(auVar198._4_4_ * auVar357._0_4_ *
                                                  (float)uVar69 * 2.3283064e-10)),auVar363._0_16_,
                                    0xe);
            auVar248 = vshufps_avx(auVar248,auVar248,0x40);
            local_1b8.x = auVar350._0_4_ + auVar248._0_4_;
            local_1b8.y = auVar350._4_4_ + auVar248._4_4_;
            fVar171 = auVar350._8_4_ + auVar248._8_4_;
            fVar334 = auVar350._12_4_ + auVar248._12_4_;
            fVar208 = auVar198._4_4_ + auVar353._0_4_;
            auVar219 = ZEXT416((uint)auVar198._4_4_);
            auVar248 = vminss_avx(auVar219,ZEXT416(0x41400000));
            auVar248 = vinsertps_avx(auVar219,auVar248,0x10);
            auVar345._0_4_ = auVar248._0_4_ * 0.5;
            auVar345._4_4_ = auVar248._4_4_ * 0.5;
            auVar345._8_4_ = auVar248._8_4_ * 0.0;
            auVar345._12_4_ = auVar248._12_4_ * 0.0;
            uVar69 = (uint)pcVar84 & 0xfffe0000 | 0x10000;
            pcVar84 = (cell *)(ulonglong)uVar69;
            lVar163 = (longlong)w.max_lightnings;
            if (w.n_lightnings < w.max_lightnings) {
LAB_1400d5e6f:
              uVar102 = w.field79_0x3c20.lightnings;
              lVar163 = (longlong)w.n_lightnings;
              w.field79_0x3c20.lightnings[lVar163].a = iVar70;
              ((lightning_t *)(uVar102 + lVar163 * 0xb4))->b = 0;
              (((lightning_t *)(uVar102 + lVar163 * 0xb4))->dir).field0_0x0 = (real_2_u_0)piVar160;
              ((lightning_t *)(uVar102 + lVar163 * 0xb4))->range = fVar208;
              uVar122 = vmovlps_avx(auVar345);
              ((lightning_t *)(uVar102 + lVar163 * 0xb4))->damage = (float)(int)uVar122;
              ((lightning_t *)(uVar102 + lVar163 * 0xb4))->shock =
                   (float)(int)((ulonglong)uVar122 >> 0x20);
              ((lightning_t *)(uVar102 + lVar163 * 0xb4))->lifetime = 0x12;
              auVar202._0_12_ = ZEXT812(0);
              auVar202._12_4_ = 0;
              *(undefined1 (*) [32])((lightning_t *)(uVar102 + lVar163 * 0xb4))->points =
                   ZEXT1632(auVar202);
              *(undefined1 (*) [32])(((lightning_t *)(uVar102 + lVar163 * 0xb4))->points + 4) =
                   ZEXT1632(auVar202);
              *(undefined1 (*) [32])(((lightning_t *)(uVar102 + lVar163 * 0xb4))->points + 8) =
                   ZEXT1632(auVar202);
              *(undefined1 (*) [32])(((lightning_t *)(uVar102 + lVar163 * 0xb4))->points + 0xc) =
                   ZEXT1632(auVar202);
              (((lightning_t *)(uVar102 + lVar163 * 0xb4))->field8_0xa0).n_points_and_type = uVar69;
              prVar14 = &((lightning_t *)(uVar102 + lVar163 * 0xb4))->color;
              (prVar14->field0_0x0)._s_0.x = local_1b8.x;
              (prVar14->field0_0x0)._s_0.y = local_1b8.y;
              (prVar14->field0_0x0)._s_0.z = fVar171;
              (prVar14->field0_0x0)._s_0.w = fVar334;
              w.n_lightnings = w.n_lightnings + 1;
              local_1b8 = rVar78;
            }
            else {
              local_168._0_4_ = fVar208;
              w.max_lightnings = w.max_lightnings * 2;
              auVar324 = ZEXT1664(auVar336._0_16_);
              auVar332 = ZEXT1664(auVar350._0_16_);
              auVar336 = ZEXT1664(auVar353._0_16_);
              auVar346 = ZEXT1664(auVar346._0_16_);
              auVar350 = ZEXT1664(auVar345);
              auVar309 = ZEXT1664(auVar309._0_16_);
              auVar327 = ZEXT1664(auVar327._0_16_);
              auVar357 = ZEXT1664(auVar357._0_16_);
              auVar363 = ZEXT1664(auVar363._0_16_);
              auVar353 = ZEXT1664(auVar219);
              fStack_1b0 = fVar171;
              fStack_1ac = fVar334;
              bVar170 = expand_memory(&w.field79_0x3c20.lightnings_memory,lVar163 * 0x168);
              rVar78 = (real_2_u_0_s_0)CONCAT44(local_1b8.y,local_1b8.x);
              auVar345 = auVar350._0_16_;
              auVar198._4_4_ = auVar353._0_4_;
              auVar357 = ZEXT1664(auVar357._0_16_);
              auVar353 = ZEXT1664(auVar336._0_16_);
              auVar327 = ZEXT1664(auVar327._0_16_);
              auVar350 = ZEXT1664(auVar332._0_16_);
              auVar336 = ZEXT1664(auVar324._0_16_);
              auVar332 = ZEXT1264(ZEXT812(0));
              auVar309 = ZEXT1664(auVar309._0_16_);
              pcVar72 = local_f8;
              local_1b8 = rVar78;
              if (bVar170) {
                fVar208 = (float)local_168._0_4_;
                fVar171 = fStack_1b0;
                fVar334 = fStack_1ac;
                goto LAB_1400d5e6f;
              }
            }
            auVar248 = vminss_avx(auVar346._0_16_,ZEXT416((uint)(auVar198._4_4_ * 0.05)));
            auVar248 = vmaxss_avx(auVar332._0_16_,auVar248);
            auVar198._4_4_ =
                 w.camera_pos.field0_0x0._s_0.x -
                 *(float *)((longlong)&(plVar115->x).field0_0x0 + lVar133);
            fVar208 = w.camera_pos.field0_0x0._s_0.y -
                      *(float *)((longlong)&(plVar115->x).field0_0x0 + lVar133 + 4);
            auVar219 = vmaxss_avx(ZEXT416((uint)((fVar208 * fVar208 +
                                                 auVar198._4_4_ * auVar198._4_4_ + 0.0) * 0.0001)),
                                  auVar346._0_16_);
            auVar198._4_4_ = (auVar248._0_4_ + auVar248._0_4_) / auVar219._0_4_;
            w.thunder_volume = auVar198._4_4_ + w.thunder_volume;
            w.lightning_volume = auVar198._4_4_ + auVar198._4_4_ + w.lightning_volume;
            auVar324 = ZEXT464((uint)local_120._0_4_);
            auVar248._4_4_ = w.n_lightning_emitters;
            uVar131 = w.camera_pos.field0_0x0._s_0.x;
            uVar130 = w.camera_pos.field0_0x0._s_0.y;
          }
        }
        auVar317 = auVar324._0_16_;
        auVar219 = auVar363._0_16_;
        peVar165 = (explosion_t *)((longlong)peVar165 + 1);
        lVar133 = lVar133 + 0x10;
        iVar70 = iVar70 + -1;
        rVar78 = local_1b8;
      } while ((longlong)peVar165 < (longlong)auVar248._4_4_);
    }
    auVar324 = ZEXT1664(auVar219);
    auVar309 = ZEXT1664(auVar317);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("update lightning");
    auVar317 = auVar309._0_16_;
    auVar219 = auVar324._0_16_;
    rVar168 = (real_2_u_0_s_0)(longlong)w.n_lightnings;
    auVar324 = ZEXT464(0x2f800000);
    auVar248 = auVar324._0_16_;
    if (0 < (longlong)rVar168) {
      local_208._0_4_ = (float)local_22c;
      local_208._4_4_ = (float)(local_22c >> 0x1f);
      piVar160 = (int *)((longlong)rVar168 * 0xb4 + -0x8c);
      auVar357 = ZEXT1264(ZEXT812(0));
      auVar332 = ZEXT464(0x3f800000);
      auVar336 = ZEXT464(0x47afc800);
      auVar327 = ZEXT1664(ZEXT816(0x3fe40d9320000000));
      rVar78 = rVar168;
      do {
        uVar122 = w.field79_0x3c20.lightnings;
        rVar168 = (real_2_u_0_s_0)((longlong)rVar78 + -1);
        plVar9 = w.field79_0x3c20.lightnings + (longlong)rVar168;
        uVar69 = w.field79_0x3c20.lightnings[(longlong)rVar168].a;
        local_1b8.x = rVar78.x;
        local_1b8.y = rVar78.y;
        if ((int)uVar69 < 0) {
          plVar115 = w.lightning_emitters + ~uVar69;
          pfVar144 = &w.lightning_emitters[~uVar69].x.field0_0x0._s_0.y;
          peVar165 = (explosion_t *)0x0;
          auVar198._4_4_ = 0.0;
          fVar208 = 0.0;
LAB_1400d639d:
          fVar171 = (plVar115->x).field0_0x0._s_0.x;
          auVar346 = ZEXT464((uint)fVar171);
          fVar334 = *pfVar144;
          auVar350 = ZEXT464((uint)fVar334);
          auVar248._4_4_ = plVar9->lifetime;
          plVar9->lifetime = auVar248._4_4_ + -1;
          uVar102 = w.field79_0x3c20.lightnings;
          if (auVar248._4_4_ < 1) {
            lVar133 = (longlong)w.n_lightnings + -1;
            w.n_lightnings = (int)lVar133;
            puVar11 = (undefined8 *)
                      ((longlong)&w.field79_0x3c20.lightnings[lVar133].points[0xe].field0_0x0 + 4);
            uVar122 = puVar11[1];
            uVar158 = puVar11[2];
            uVar19 = puVar11[3];
            puVar15 = (undefined8 *)
                      ((longlong)
                       &w.field79_0x3c20.lightnings[(longlong)rVar168].points[0xe].field0_0x0 + 4);
            *puVar15 = *puVar11;
            puVar15[1] = uVar122;
            puVar15[2] = uVar158;
            puVar15[3] = uVar19;
            prVar148 = &((lightning_t *)(uVar102 + lVar133 * 0xb4))->points[0xc].field0_0x0;
            rVar124 = prVar148[1];
            rVar169 = prVar148[2];
            rVar125 = prVar148[3];
            prVar16 = &((lightning_t *)(uVar102 + rVar168 * 0xb4))->points[0xc].field0_0x0;
            *prVar16 = *prVar148;
            prVar16[1] = rVar124;
            prVar16[2] = rVar169;
            prVar16[3] = rVar125;
            plVar9 = (lightning_t *)(uVar102 + lVar133 * 0xb4);
            auVar248._4_4_ = plVar9->a;
            iVar70 = plVar9->b;
            rVar124 = (plVar9->dir).field0_0x0;
            auVar198._4_4_ = plVar9->range;
            fVar208 = plVar9->damage;
            fVar171 = plVar9->shock;
            iVar136 = plVar9->lifetime;
            auVar244 = *(undefined1 (*) [32])((lightning_t *)(uVar102 + lVar133 * 0xb4))->points;
            auVar27 = *(undefined1 (*) [32])
                       (((lightning_t *)(uVar102 + lVar133 * 0xb4))->points + 4);
            *(undefined1 (*) [32])(((lightning_t *)(uVar102 + rVar168 * 0xb4))->points + 8) =
                 *(undefined1 (*) [32])(((lightning_t *)(uVar102 + lVar133 * 0xb4))->points + 8);
            *(undefined1 (*) [32])(((lightning_t *)(uVar102 + rVar168 * 0xb4))->points + 4) =
                 auVar27;
            *(undefined1 (*) [32])((lightning_t *)(uVar102 + rVar168 * 0xb4))->points = auVar244;
            plVar9 = (lightning_t *)(uVar102 + rVar168 * 0xb4);
            plVar9->a = auVar248._4_4_;
            plVar9->b = iVar70;
            (plVar9->dir).field0_0x0 = rVar124;
            plVar9->range = auVar198._4_4_;
            plVar9->damage = fVar208;
            plVar9->shock = fVar171;
            plVar9->lifetime = iVar136;
          }
          else {
            uVar69 = plVar9->b;
            uVar109 = (ulonglong)uVar69;
            local_188._0_8_ = peVar165;
            if ((int)uVar69 < 1) {
              if (uVar69 != 0) goto LAB_1400d6498;
              local_168._0_4_ = (int)CONCAT71((int7)((ulonglong)((longlong)rVar168 * 0xb4) >> 8),1);
LAB_1400d64e0:
              peVar165 = (explosion_t *)0x0;
            }
            else {
              uVar96 = w.max_cells + 0x7fffffffU & uVar69;
              if ((w.field57_0x3a48.cell_index_table[uVar96].id != uVar69) ||
                 (uVar109 = 0, w.field58_0x3a60.cells == (cell *)0x0)) {
LAB_1400d6498:
                plVar9->b = 0;
                uVar69 = (plVar9->field8_0xa0).n_points_and_type & 0xffff;
                local_168._0_4_ = (int)CONCAT71((int7)(uVar109 >> 8),1);
                if (2 < uVar69) {
                  (plVar9->field8_0xa0).n_points_and_type =
                       (plVar9->field8_0xa0).n_points_and_type & 0xffff0000 | uVar69 - 1;
                }
                goto LAB_1400d64e0;
              }
              peVar165 = (explosion_t *)
                         (w.field58_0x3a60.cells
                          [w.field57_0x3a48.cell_index_table[uVar96].index >> 4].field0_0x0.
                          id_packed + (w.field57_0x3a48.cell_index_table[uVar96].index & 0xf));
              auVar52._12_4_ = 0;
              auVar52._0_12_ = local_168._4_12_;
              local_168 = auVar52 << 0x20;
            }
            auVar248 = vminss_avx(ZEXT416((uint)plVar9->range),ZEXT416(0x43480000));
            auVar309 = ZEXT1664(auVar248);
            uVar69 = (plVar9->field8_0xa0).n_points_and_type;
            uVar109 = (ulonglong)uVar69;
            if ((short)uVar69 == 0) {
LAB_1400d6822:
              uVar109 = (ulonglong)(uVar69 | 1);
              (plVar9->field8_0xa0).n_points_and_type = uVar69 | 1;
            }
            else {
              auVar353 = ZEXT464((uint)auVar198._4_4_);
              auVar363 = ZEXT464((uint)fVar208);
              uVar122 = (longlong)&((lightning_t *)(((lightning_t *)uVar122)->points + -4))->a +
                        (longlong)piVar160;
              uVar123 = 0;
              do {
                uVar69 = (uint)uVar109;
                fVar208 = auVar357._0_4_;
                fVar171 = auVar332._0_4_;
                auVar198._4_4_ = auVar309._0_4_;
                if (uVar123 != 0) {
                  fVar334 = ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0._s_0.x;
                  fVar172 = ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0._s_0.y;
                  fVar333 = ((lightning_t *)uVar122)->points[uVar123 - 6].field0_0x0._s_0.x -
                            fVar334;
                  fVar303 = ((lightning_t *)uVar122)->points[uVar123 - 6].field0_0x0._s_0.y -
                            fVar172;
                  fVar245 = fVar303 * fVar303 + fVar208 + fVar333 * fVar333;
                  if (fVar245 <= 1e-06) {
                    fVar333 = 0.0;
                    fVar303 = 0.0;
                  }
                  else {
                    auVar248 = vsqrtss_avx(ZEXT416((uint)fVar245),ZEXT416((uint)fVar245));
                    fVar245 = fVar171 / auVar248._0_4_;
                    fVar333 = fVar333 * fVar245;
                    fVar303 = fVar303 * fVar245;
                  }
                  rVar90.field0_0x0._s_0.y =
                       fVar172 * 0.8 + (auVar198._4_4_ * fVar303 + fVar172) * 0.2;
                  rVar90.field0_0x0._s_0.x =
                       fVar334 * 0.8 + (auVar198._4_4_ * fVar333 + fVar334) * 0.2;
                  ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0 = rVar90.field0_0x0;
                  uVar69 = (uint)(plVar9->field8_0xa0)._s_0.n_points;
                }
                auVar248._4_4_ = (uVar69 & 0xffff) - 1;
                if ((longlong)uVar123 < (longlong)auVar248._4_4_) {
                  fVar334 = ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0._s_0.x;
                  fVar172 = ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0._s_0.y;
                  fVar333 = ((lightning_t *)uVar122)->points[uVar123 - 4].field0_0x0._s_0.x -
                            fVar334;
                  fVar303 = ((lightning_t *)uVar122)->points[uVar123 - 4].field0_0x0._s_0.y -
                            fVar172;
                  fVar245 = fVar303 * fVar303 + fVar208 + fVar333 * fVar333;
                  if (fVar245 <= 1e-06) {
                    uVar109 = 0;
                  }
                  else {
                    auVar219 = vsqrtss_avx(ZEXT416((uint)fVar245),ZEXT416((uint)fVar245));
                    fVar245 = fVar171 / auVar219._0_4_;
                    uVar109 = CONCAT44(auVar248._4_4_ >> 0x1f,fVar333 * fVar245) |
                              (ulonglong)(uint)(fVar303 * fVar245) << 0x20;
                  }
                  rVar91.field0_0x0._s_0.y =
                       fVar172 * 0.8 + (auVar198._4_4_ * (float)(uVar109 >> 0x20) + fVar172) * 0.2;
                  rVar91.field0_0x0._s_0.x =
                       fVar334 * 0.8 + (auVar198._4_4_ * (float)uVar109 + fVar334) * 0.2;
                  ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0 = rVar91.field0_0x0;
                }
                uVar69 = (w.seed >> 0x10 ^ w.seed) * 0x7feb352d;
                uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                w.seed = uVar69 >> 0x10 ^ uVar69;
                uVar109 = (ulonglong)w.seed;
                auVar198._4_4_ = (float)uVar109 * auVar324._0_4_;
                if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                  uVar106 = 0;
                  if ((auVar198._4_4_ != fVar171) || (NAN(auVar198._4_4_) || NAN(fVar171))) {
                    dVar176 = (double)(auVar198._4_4_ / (fVar171 - auVar198._4_4_));
                    auVar324 = ZEXT1664(auVar324._0_16_);
                    auVar346 = ZEXT1664(auVar346._0_16_);
                    auVar350 = ZEXT1664(auVar350._0_16_);
                    auVar327 = ZEXT1664(auVar327._0_16_);
                    auVar309 = ZEXT1664(auVar309._0_16_);
                    auVar357 = ZEXT1664(auVar357._0_16_);
                    auVar353 = ZEXT1664(auVar353._0_16_);
                    auVar332 = ZEXT1664(auVar332._0_16_);
                    auVar336 = ZEXT1664(auVar336._0_16_);
                    auVar363 = ZEXT1664(auVar363._0_16_);
                    log();
                    uVar106 = (ulonglong)(uint)(float)(auVar327._0_8_ * dVar176);
                    uVar109 = (ulonglong)w.seed;
                  }
                }
                else {
                  uVar106 = 0;
                }
                uVar69 = ((uint)(uVar109 >> 0x10) ^ (uint)uVar109) * 0x7feb352d;
                uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                uVar109 = 0;
                w.seed = uVar69 >> 0x10 ^ uVar69;
                auVar198._4_4_ = (float)w.seed * auVar324._0_4_;
                if ((auVar198._4_4_ != auVar357._0_4_) ||
                   (NAN(auVar198._4_4_) || NAN(auVar357._0_4_))) {
                  fVar208 = auVar332._0_4_;
                  if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                    dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                    auVar324 = ZEXT1664(auVar324._0_16_);
                    auVar346 = ZEXT1664(auVar346._0_16_);
                    auVar350 = ZEXT1664(auVar350._0_16_);
                    auVar327 = ZEXT1664(auVar327._0_16_);
                    auVar309 = ZEXT1664(auVar309._0_16_);
                    auVar357 = ZEXT1664(auVar357._0_16_);
                    auVar353 = ZEXT1664(auVar353._0_16_);
                    auVar332 = ZEXT1664(auVar332._0_16_);
                    auVar336 = ZEXT1664(auVar336._0_16_);
                    auVar363 = ZEXT1664(auVar363._0_16_);
                    log();
                    uVar109 = (ulonglong)(uint)(float)(auVar327._0_8_ * dVar176) << 0x20;
                    uVar106 = uVar106 | uVar109;
                  }
                }
                auVar248 = auVar309._0_16_;
                fVar334 = auVar350._0_4_;
                fVar171 = auVar346._0_4_;
                ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0 =
                     (real_2_u_0)
                     (CONCAT44((int)(uVar109 >> 0x20),
                               auVar353._0_4_ + (float)uVar106 * 0.1 +
                               ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0._s_0.x) |
                     (ulonglong)
                     (uint)(auVar363._0_4_ + (float)(uVar106 >> 0x20) * 0.1 +
                           ((lightning_t *)uVar122)->points[uVar123 - 5].field0_0x0._s_0.y) << 0x20)
                ;
                uVar123 = uVar123 + 1;
                uVar69 = (plVar9->field8_0xa0).n_points_and_type;
                uVar109 = (ulonglong)uVar69;
              } while (uVar123 < (uVar109 & 0xffff));
              if ((int)(uVar109 & 0xffff) == 0) goto LAB_1400d6822;
            }
            plVar9->points[0].field0_0x0._s_0.x = fVar171;
            plVar9->points[0].field0_0x0._s_0.y = fVar334;
            auVar309 = ZEXT464((uint)local_120._0_4_);
            if (local_168[0] == '\0') {
              if ((real_2_u_0)peVar165 == (real_2_u_0)0x0) goto LAB_1400d62b3;
LAB_1400d686c:
              auVar198._4_4_ = (((real_2 *)((longlong)peVar165 + 0xc00))->field0_0x0)._s_0.x;
              plVar9->points[(uVar109 & 0xffff) - 1].field0_0x0._s_0.x =
                   *(float *)((longlong)peVar165 + 0xbc0);
              plVar9->points[(uVar109 & 0xffff) - 1].field0_0x0._s_0.y = auVar198._4_4_;
              if (auVar357._0_4_ < plVar9->damage) {
                auVar198._4_4_ = *(float *)((longlong)peVar165 + 0x40);
                auVar248 = ZEXT416((uint)plVar9->damage);
                auVar219 = auVar248;
                if (((((0 < (int)auVar198._4_4_) &&
                      (uVar69 = w.bodies.n_max_elements + 0x7fffffffU & (uint)auVar198._4_4_,
                      (float)w.bodies.field0_0x0.index_table[uVar69].id == auVar198._4_4_)) &&
                     (w.bodies.field3_0x20.elements != (body *)0x0)) &&
                    (w.field55_0x3a28.body_auxiliary_data
                     [CONCAT44(local_208._4_4_,(float)local_208) +
                      (longlong)w.body_auxiliary_size *
                      (longlong)w.bodies.field0_0x0.index_table[uVar69].index] != '\0')) &&
                   ((local_188._0_8_ == 0 ||
                    (auVar219 = SUB6416(ZEXT864(0),0) << 0x40,
                    *(float *)(local_188._0_8_ + 0x40) != auVar198._4_4_)))) {
                  auVar198._4_4_ =
                       (float)(int)(char)w.field55_0x3a28.body_auxiliary_data
                                         [CONCAT44(local_208._4_4_,(float)local_208) +
                                          (longlong)w.body_auxiliary_size *
                                          (longlong)w.bodies.field0_0x0.index_table[uVar69].index] *
                       -2.3025851;
                  auVar324 = ZEXT1664(auVar324._0_16_);
                  auVar346 = ZEXT1664(auVar248);
                  auVar327 = ZEXT1664(auVar327._0_16_);
                  auVar357 = ZEXT1664(auVar357._0_16_);
                  auVar332 = ZEXT1664(auVar332._0_16_);
                  auVar336 = ZEXT1664(auVar336._0_16_);
                  auVar309 = ZEXT1664(auVar309._0_16_);
                  expf();
                  auVar219 = ZEXT416((uint)(auVar346._0_4_ * auVar198._4_4_));
                }
                auVar198._4_4_ = plVar9->shock;
                auVar248._4_4_ = 0x168;
                auVar346 = ZEXT1664(auVar219);
                do {
                  fVar171 = auVar346._0_4_;
                  lVar133 = (ulonglong)((uint)((ulonglong)peVar165 >> 2) & 0xf) * 0xb0;
                  fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                  uVar69 = 0;
                  if ((((uint)fVar208 & 1) == 0) &&
                     (lVar163 = *(longlong *)
                                 (((ulonglong)peVar165 & 0xffffffffffffffc0) + 0x15f0 + lVar133),
                     uVar69 = 0, lVar163 != 0)) {
                    local_158._0_8_ = lVar163;
                    uVar69 = 1;
                  }
                  lVar133 = ((ulonglong)peVar165 & 0xffffffffffffffc0) + lVar133;
                  if ((((uint)fVar208 & 2) == 0) && (*(longlong *)(lVar133 + 0x15f8) != 0)) {
                    uVar109 = (ulonglong)uVar69;
                    uVar69 = uVar69 + 1;
                    *(longlong *)(local_158 + uVar109 * 8) = *(longlong *)(lVar133 + 0x15f8);
                    fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                  }
                  if ((((uint)fVar208 & 4) == 0) && (*(longlong *)(lVar133 + 0x1600) != 0)) {
                    uVar109 = (ulonglong)uVar69;
                    uVar69 = uVar69 + 1;
                    *(longlong *)(local_158 + uVar109 * 8) = *(longlong *)(lVar133 + 0x1600);
                    fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                  }
                  if ((((uint)fVar208 & 8) == 0) && (*(longlong *)(lVar133 + 0x1608) != 0)) {
                    uVar109 = (ulonglong)uVar69;
                    uVar69 = uVar69 + 1;
                    *(longlong *)(local_158 + uVar109 * 8) = *(longlong *)(lVar133 + 0x1608);
                    fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                  }
                  if ((((uint)fVar208 & 0x10) == 0) && (*(longlong *)(lVar133 + 0x1610) != 0)) {
                    uVar109 = (ulonglong)uVar69;
                    uVar69 = uVar69 + 1;
                    *(longlong *)(local_158 + uVar109 * 8) = *(longlong *)(lVar133 + 0x1610);
                    fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                  }
                  if ((((uint)fVar208 & 0x20) == 0) && (*(longlong *)(lVar133 + 0x1618) != 0)) {
                    uVar109 = (ulonglong)uVar69;
                    uVar69 = uVar69 + 1;
                    *(longlong *)(local_158 + uVar109 * 8) = *(longlong *)(lVar133 + 0x1618);
                  }
                  fVar208 = *(float *)((longlong)peVar165 + 0x740);
                  if (fVar171 < fVar208) {
                    *(float *)((longlong)peVar165 + 0x780) =
                         fVar171 + *(float *)((longlong)peVar165 + 0x780);
                    *(float *)((longlong)peVar165 + 0x7c0) =
                         fVar171 + *(float *)((longlong)peVar165 + 0x7c0);
                    *(float *)((longlong)peVar165 + 0x740) = fVar208 - fVar171;
                    break;
                  }
                  auVar317 = vmaxss_avx(ZEXT416((uint)(fVar208 + 0.01)),auVar357._0_16_);
                  fVar208 = auVar317._0_4_;
                  *(float *)((longlong)peVar165 + 0x780) =
                       fVar208 + *(float *)((longlong)peVar165 + 0x780);
                  fVar171 = fVar171 - fVar208;
                  auVar346 = ZEXT464((uint)fVar171);
                  *(float *)((longlong)peVar165 + 0x7c0) =
                       fVar208 + *(float *)((longlong)peVar165 + 0x7c0);
                  *(float *)((longlong)peVar165 + 0x740) = -0.01;
                  if (uVar69 == 0) break;
                  uVar96 = (w.seed >> 0x10 ^ w.seed) * 0x7feb352d;
                  uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
                  w.seed = uVar96 >> 0x10 ^ uVar96;
                  uVar107 = (uint)((float)w.seed * auVar324._0_4_ * (float)uVar69);
                  uVar96 = uVar69 - 1;
                  if ((int)uVar107 <= (int)(uVar69 - 1)) {
                    uVar96 = uVar107;
                  }
                  if ((int)uVar96 < 1) {
                    uVar96 = 0;
                  }
                  peVar165 = *(explosion_t **)
                              ((real_2_u_0 *)(local_158 + (ulonglong)uVar96 * 8))->data;
                  auVar248._4_4_ = auVar248._4_4_ + -1;
                } while (auVar248._4_4_ != 0);
                *(float *)((longlong)peVar165 + 0x640) =
                     auVar198._4_4_ + *(float *)((longlong)peVar165 + 0x640);
                lVar133 = (ulonglong)((uint)((ulonglong)peVar165 >> 2) & 0xf) * 0xb0;
                fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                if ((((uint)fVar208 & 1) == 0) &&
                   (lVar163 = *(longlong *)
                               (((ulonglong)peVar165 & 0xffffffffffffffc0) + 0x15f0 + lVar133),
                   lVar163 != 0)) {
                  *(float *)(lVar163 + 0x640) = auVar198._4_4_ + *(float *)(lVar163 + 0x640);
                  fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                }
                lVar133 = ((ulonglong)peVar165 & 0xffffffffffffffc0) + lVar133;
                if ((((uint)fVar208 & 2) == 0) &&
                   (lVar163 = *(longlong *)(lVar133 + 0x15f8), lVar163 != 0)) {
                  *(float *)(lVar163 + 0x640) = auVar198._4_4_ + *(float *)(lVar163 + 0x640);
                  fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                }
                if ((((uint)fVar208 & 4) == 0) &&
                   (lVar163 = *(longlong *)(lVar133 + 0x1600), lVar163 != 0)) {
                  *(float *)(lVar163 + 0x640) = auVar198._4_4_ + *(float *)(lVar163 + 0x640);
                  fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                }
                if ((((uint)fVar208 & 8) == 0) &&
                   (lVar163 = *(longlong *)(lVar133 + 0x1608), lVar163 != 0)) {
                  *(float *)(lVar163 + 0x640) = auVar198._4_4_ + *(float *)(lVar163 + 0x640);
                  fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                }
                if ((((uint)fVar208 & 0x10) == 0) &&
                   (lVar163 = *(longlong *)(lVar133 + 0x1610), lVar163 != 0)) {
                  *(float *)(lVar163 + 0x640) = auVar198._4_4_ + *(float *)(lVar163 + 0x640);
                  fVar208 = *(float *)((longlong)peVar165 + 0x1000);
                }
                if ((((uint)fVar208 & 0x20) == 0) &&
                   (lVar133 = *(longlong *)(lVar133 + 0x1618), lVar133 != 0)) {
                  *(float *)(lVar133 + 0x640) = auVar198._4_4_ + *(float *)(lVar133 + 0x640);
                }
                auVar198._4_4_ = 0.0;
                if (0.0 < fVar171) {
                  auVar198._4_4_ = (fVar171 / auVar219._0_4_) * plVar9->damage;
                }
                plVar9->damage = auVar198._4_4_;
              }
            }
            else {
              if ((uVar109 & 0xfff0) == 0) {
                uVar96 = (w.seed >> 0x10 ^ w.seed) * 0x7feb352d;
                uVar96 = uVar96 >> 0xf ^ uVar96;
                uVar69 = uVar96 * -0x7b935975;
                uVar96 = uVar96 * -0x63d2f291;
                uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
                w.seed = uVar96 >> 0x10 ^ uVar96;
                uVar109 = (ulonglong)w.seed;
                auVar219 = ZEXT416((uint)((float)uVar109 * auVar324._0_4_));
                auVar219 = vsqrtss_avx(auVar219,auVar219);
                auVar317 = ZEXT416((uint)((float)(uVar69 >> 0x10 ^ uVar69) * auVar324._0_4_ *
                                         6.2831855));
                auVar324 = ZEXT1664(auVar317);
                auVar346 = ZEXT1664(auVar219);
                auVar350 = ZEXT1664(auVar317);
                auVar327 = ZEXT1664(auVar327._0_16_);
                auVar363 = ZEXT1664(auVar248);
                auVar357 = ZEXT1664(auVar357._0_16_);
                auVar332 = ZEXT1664(auVar332._0_16_);
                auVar336 = ZEXT1664(auVar336._0_16_);
                auVar309 = ZEXT464((uint)local_120._0_4_);
                cosf();
                uVar131 = (undefined4)(uVar109 >> 0x20);
                auVar353 = ZEXT464((uint)(auVar324._0_4_ * auVar346._0_4_));
                auVar324 = ZEXT1664(auVar350._0_16_);
                sinf();
                fVar171 = auVar363._0_4_;
                auVar198._4_4_ = auVar353._0_4_ * 0.5;
                fVar208 = auVar324._0_4_ * auVar346._0_4_ * 0.5;
                uVar116 = (plVar9->field8_0xa0)._s_0.n_points;
                uVar109 = (ulonglong)uVar116;
                uVar130 = (undefined4)((ulonglong)uVar122 >> 0x20);
                if (uVar116 < 2) {
                  if (uVar116 == 1) {
                    auVar198._4_4_ = auVar198._4_4_ * 0.25 + (plVar9->dir).field0_0x0._s_0.x;
                    fVar208 = fVar208 * 0.25 + (plVar9->dir).field0_0x0._s_0.y;
                    goto LAB_1400d6c32;
                  }
                  uVar123 = CONCAT44(uVar131,auVar198._4_4_);
                  uVar106 = CONCAT44(uVar130,fVar208) << 0x20;
                }
                else {
                  auVar198._4_4_ =
                       auVar198._4_4_ +
                       (plVar9->points[uVar109 - 1].field0_0x0._s_0.x -
                       plVar9->points[uVar109 - 2].field0_0x0._s_0.x) * 0.25;
                  fVar208 = fVar208 + (plVar9->points[uVar109 - 1].field0_0x0._s_0.y -
                                      plVar9->points[uVar109 - 2].field0_0x0._s_0.y) * 0.25;
LAB_1400d6c32:
                  uVar106 = CONCAT44(uVar130,auVar198._4_4_);
                  uVar123 = CONCAT44(uVar131,fVar208) << 0x20;
                }
                uVar106 = uVar106 | uVar123;
                fVar334 = (float)uVar106;
                fVar208 = (float)(uVar106 >> 0x20);
                fVar245 = auVar357._0_4_;
                auVar198._4_4_ = fVar208 * fVar208 + fVar245 + fVar334 * fVar334;
                fVar172 = auVar332._0_4_;
                if (fVar172 < auVar198._4_4_) {
                  auVar248 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_)
                                        );
                  auVar198._4_4_ = fVar172 / auVar248._0_4_;
                  uVar106 = CONCAT44(fVar208,auVar198._4_4_ * fVar334) |
                            (ulonglong)(uint)(auVar198._4_4_ * fVar208) << 0x20;
                }
                fVar208 = (*(real_2_u_0 *)
                            &plVar9->points[(ulonglong)(uint)uVar116 - 1].field0_0x0._s_0).x;
                auVar198._4_4_ =
                     (*(real_2_u_0 *)&plVar9->points[(ulonglong)(uint)uVar116 - 1].field0_0x0._s_0).
                     y;
                if (1 < uVar116) {
                  if ((longlong)w.n_magnetic_fields < 1) {
                    auVar248 = ZEXT816(0);
                    uVar122 = 0;
                  }
                  else {
                    fVar171 = 0.0;
                    lVar133 = 0;
                    uVar122 = 0;
                    do {
                      lVar163 = *(longlong *)
                                 ((longlong)&(w.field106_0x3d40.magnetic_fields)->c + lVar133);
                      fVar333 = fVar208 - *(float *)(lVar163 + 0xbc0);
                      fVar303 = auVar198._4_4_ - *(float *)(lVar163 + 0xc00);
                      fVar334 = fVar303 * fVar303 + fVar245 + fVar333 * fVar333;
                      if ((fVar172 < fVar334) && (fVar334 <= auVar336._0_4_)) {
                        fVar334 = fVar172 / fVar334;
                        fVar171 = fVar334 * *(float *)((longlong)
                                                       &((w.field106_0x3d40.magnetic_fields)->moment
                                                        ).field0_0x0 + lVar133 + 8) + fVar171;
                        fVar347 = *(float *)((longlong)
                                             &((w.field106_0x3d40.magnetic_fields)->moment).
                                              field0_0x0 + lVar133);
                        fVar173 = *(float *)((longlong)
                                             &((w.field106_0x3d40.magnetic_fields)->moment).
                                              field0_0x0 + lVar133 + 4);
                        fVar279 = (fVar173 * fVar303 + fVar347 * fVar333 + fVar245) * fVar334 * 3.0;
                        uVar122 = CONCAT44(fVar334 * (fVar303 * fVar279 - fVar173) +
                                           (float)((ulonglong)uVar122 >> 0x20),
                                           fVar334 * (fVar333 * fVar279 - fVar347) + (float)uVar122)
                        ;
                      }
                      lVar133 = lVar133 + 0x18;
                    } while ((longlong)w.n_magnetic_fields * 0x18 != lVar133);
                    auVar248 = ZEXT416((uint)(fVar171 * 4.0));
                  }
                  fVar171 = (float)uVar122;
                  fVar334 = (float)((ulonglong)uVar122 >> 0x20);
                  auVar219 = ZEXT416((uint)(fVar334 * fVar334 + fVar245 + fVar171 * fVar171));
                  auVar219 = vsqrtss_avx(auVar219,auVar219);
                  auVar324 = ZEXT1664(auVar219);
                  fVar172 = fVar172 / auVar219._0_4_;
                  if (0.0001 < auVar219._0_4_) {
                    fVar171 = fVar171 * fVar172;
                  }
                  auVar371 = ZEXT464((uint)fVar171);
                  auVar219 = vcmpss_avx(SUB6416(ZEXT464(0x38d1b717),0),auVar219,1);
                  auVar219 = vblendvps_avx(ZEXT416((uint)fVar334),ZEXT416((uint)(fVar172 * fVar334))
                                           ,auVar219);
                  auVar346 = ZEXT1664(auVar219);
                  auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f860a92),0),auVar248);
                  auVar248 = vmaxss_avx(SUB6416(ZEXT464(0xbf860a92),0),auVar248);
                  auVar350 = ZEXT1664(auVar248);
                  auVar309 = ZEXT1664(auVar248);
                  cosf();
                  auVar353 = ZEXT1664(auVar309._0_16_);
                  auVar309 = ZEXT1664(auVar350._0_16_);
                  sinf();
                  fVar171 = (float)(uVar106 >> 0x20);
                  auVar350 = ZEXT464((uint)(auVar353._0_4_ * (float)uVar106 -
                                           fVar171 * auVar309._0_4_));
                  auVar309 = ZEXT464((uint)((float)uVar106 * auVar309._0_4_ +
                                           auVar353._0_4_ * fVar171));
                  fVar245 = auVar324._0_4_ * -4.0;
                  expf();
                  fVar171 = auVar363._0_4_;
                  fVar333 = auVar332._0_4_ - fVar245;
                  fVar334 = auVar309._0_4_ * auVar346._0_4_ +
                            auVar357._0_4_ + auVar371._0_4_ * auVar350._0_4_;
                  fVar172 = fVar245 * auVar350._0_4_ + fVar333 * auVar371._0_4_ * fVar334;
                  fVar334 = auVar309._0_4_ * fVar245 + fVar333 * fVar334 * auVar346._0_4_;
                  fVar245 = fVar334 * fVar334 + auVar357._0_4_ + fVar172 * fVar172;
                  if (fVar245 <= 1e-06) {
                    uVar106 = 0;
                    uVar109 = extraout_RAX;
                  }
                  else {
                    auVar248 = vsqrtss_avx(ZEXT416((uint)fVar245),ZEXT416((uint)fVar245));
                    fVar245 = auVar332._0_4_ / auVar248._0_4_;
                    fVar334 = fVar334 * fVar245;
                    uVar109 = (ulonglong)(uint)fVar334 << 0x20;
                    uVar106 = CONCAT44(fVar334,fVar172 * fVar245);
                  }
                  auVar309 = ZEXT464((uint)local_120._0_4_);
                }
                auVar324 = ZEXT464(0x2f800000);
                plVar9->points[(plVar9->field8_0xa0)._s_0.n_points].field0_0x0 =
                     (real_2_u_0)
                     (CONCAT44((int)(uVar109 >> 0x20),fVar171 * (float)uVar106 + fVar208) |
                     (ulonglong)(uint)(fVar171 * (float)(uVar106 >> 0x20) + auVar198._4_4_) << 0x20)
                ;
                pwVar76 = (wall_t *)local_158;
                wall_map(pwVar76,&w.map,
                         (real_2)plVar9->points[(plVar9->field8_0xa0)._s_0.n_points].field0_0x0._s_0
                         ,true);
                if ((float)local_158._0_4_ < auVar357._0_4_) {
                  uVar116 = (plVar9->field8_0xa0)._s_0.n_points;
                  plVar9->points[uVar116].field0_0x0 =
                       (real_2_u_0)
                       (CONCAT44((int)((ulonglong)pwVar76 >> 0x20),
                                 plVar9->points[uVar116].field0_0x0._s_0.x -
                                 (float)local_158._0_4_ * (float)local_158._4_4_) |
                       (ulonglong)
                       (uint)(plVar9->points[uVar116].field0_0x0._s_0.y -
                             (float)local_158._0_4_ * (float)local_158._8_4_) << 0x20);
                }
                (plVar9->field8_0xa0)._s_0.n_points = (plVar9->field8_0xa0)._s_0.n_points + 1;
                uVar116 = (plVar9->field8_0xa0)._s_0.n_points;
                uVar69 = (uint)uVar116;
                if (uVar116 < 2) goto LAB_1400d62b3;
              }
              else {
                uVar69 = (uint)uVar109 & 0xffff;
                if (uVar69 < 2) goto LAB_1400d62b3;
              }
              rVar124 = (real_2_u_0)
                        *(real_2_u_0 *)&plVar9->points[(ulonglong)uVar69 - 2].field0_0x0._s_0;
              fVar172 = rVar124._s_0.y;
              fVar171 = plVar9->points[(ulonglong)uVar69 - 1].field0_0x0._s_0.x - rVar124._s_0.x;
              fVar334 = plVar9->points[(ulonglong)uVar69 - 1].field0_0x0._s_0.y - fVar172;
              auVar198._4_4_ = fVar334 * fVar334 + auVar357._0_4_ + fVar171 * fVar171;
              auVar248 = vsqrtss_avx(ZEXT416((uint)auVar198._4_4_),ZEXT416((uint)auVar198._4_4_));
              rVar169 = (real_2_u_0)0x3f80000000000000;
              fVar208 = auVar248._0_4_;
              if (1e-06 < auVar198._4_4_) {
                auVar198._4_4_ = auVar332._0_4_ / fVar208;
                rVar169 = (real_2_u_0)
                          (CONCAT44(0x3f800000,fVar171 * auVar198._4_4_) |
                          (ulonglong)(uint)(fVar334 * auVar198._4_4_) << 0x20);
              }
              if (uVar69 == 2) {
                rVar124 = (real_2_u_0)
                          (CONCAT44(fVar172,SUB84(rVar169._s_0,0) * 1.5 + rVar124._s_0.x) |
                          (ulonglong)(uint)((float)((ulonglong)rVar169 >> 0x20) * 1.5 + fVar172) <<
                          0x20);
                fVar208 = fVar208 + -1.5;
              }
              if (auVar357._0_4_ < fVar208) {
                auVar324 = ZEXT1664(auVar324._0_16_);
                auVar327 = ZEXT1664(auVar327._0_16_);
                auVar357 = ZEXT1664(auVar357._0_16_);
                auVar332 = ZEXT1664(auVar332._0_16_);
                auVar336 = ZEXT1664(auVar336._0_16_);
                auVar309 = ZEXT1664(auVar309._0_16_);
                rVar124._s_0 = (real_2_u_0_s_0)
                               raycast_cells(rVar124._s_0,rVar169._s_0,fVar208,plVar9->a);
                if (rVar124 != (real_2_u_0)0x0) {
                  plVar9->b = *(int *)rVar124;
                  uVar109 = (ulonglong)(plVar9->field8_0xa0)._s_0.n_points;
                  peVar165 = (explosion_t *)rVar124;
                  goto LAB_1400d686c;
                }
              }
            }
          }
        }
        else {
          if (((uVar69 != 0) &&
              (uVar96 = w.max_cells + 0x7fffffffU & uVar69,
              w.field57_0x3a48.cell_index_table[uVar96].id == uVar69)) &&
             (w.field58_0x3a60.cells != (cell *)0x0)) {
            auVar248._4_4_ = w.field57_0x3a48.cell_index_table[uVar96].index >> 4;
            uVar109 = (ulonglong)(w.field57_0x3a48.cell_index_table[uVar96].index & 0xf);
            peVar165 = (explosion_t *)
                       ((longlong)&w.field58_0x3a60.cells[auVar248._4_4_].field0_0x0 + uVar109 * 4);
            plVar115 = (lightning_emitter *)
                       ((longlong)&w.field58_0x3a60.cells[auVar248._4_4_].field32_0xbc0 +
                       uVar109 * 4);
            pfVar144 = w.field58_0x3a60.cells[auVar248._4_4_].field33_0xc00.y_packed + uVar109;
            auVar198._4_4_ =
                 w.field58_0x3a60.cells[auVar248._4_4_].field34_0xc40.x_dot_packed[uVar109];
            fVar208 = w.field58_0x3a60.cells[auVar248._4_4_].field35_0xc80.y_dot_packed[uVar109];
            goto LAB_1400d639d;
          }
          lVar133 = (longlong)w.n_lightnings + -1;
          w.n_lightnings = (int)lVar133;
          puVar11 = (undefined8 *)
                    ((longlong)&w.field79_0x3c20.lightnings[lVar133].points[0xe].field0_0x0 + 4);
          uVar102 = puVar11[1];
          rVar124 = *(real_2_u_0 *)(puVar11 + 2);
          uVar158 = puVar11[3];
          *(undefined8 *)((longlong)&plVar9->points[0xe].field0_0x0 + 4) = *puVar11;
          *(undefined8 *)((longlong)&plVar9->points[0xf].field0_0x0 + 4) = uVar102;
          (plVar9->color).field0_0x0.xy.field0_0x0 = rVar124;
          *(undefined8 *)((longlong)&(plVar9->color).field0_0x0._s_2.yz.field0_0x0 + 4) = uVar158;
          prVar148 = &((lightning_t *)(uVar122 + lVar133 * 0xb4))->points[0xc].field0_0x0;
          rVar124 = prVar148[1];
          rVar169 = prVar148[2];
          rVar125 = prVar148[3];
          plVar9->points[0xc].field0_0x0 = *prVar148;
          plVar9->points[0xd].field0_0x0 = rVar124;
          plVar9->points[0xe].field0_0x0 = rVar169;
          plVar9->points[0xf].field0_0x0 = rVar125;
          plVar8 = (lightning_t *)(uVar122 + lVar133 * 0xb4);
          auVar248._4_4_ = plVar8->a;
          iVar70 = plVar8->b;
          rVar124 = (plVar8->dir).field0_0x0;
          auVar198._4_4_ = plVar8->range;
          fVar208 = plVar8->damage;
          fVar171 = plVar8->shock;
          iVar136 = plVar8->lifetime;
          auVar244 = *(undefined1 (*) [32])((lightning_t *)(uVar122 + lVar133 * 0xb4))->points;
          auVar27 = *(undefined1 (*) [32])(((lightning_t *)(uVar122 + lVar133 * 0xb4))->points + 4);
          *(undefined1 (*) [32])(plVar9->points + 8) =
               *(undefined1 (*) [32])(((lightning_t *)(uVar122 + lVar133 * 0xb4))->points + 8);
          *(undefined1 (*) [32])(plVar9->points + 4) = auVar27;
          *(undefined1 (*) [32])plVar9->points = auVar244;
          plVar9->a = auVar248._4_4_;
          plVar9->b = iVar70;
          (plVar9->dir).field0_0x0 = rVar124;
          plVar9->range = auVar198._4_4_;
          plVar9->damage = fVar208;
          plVar9->shock = fVar171;
          plVar9->lifetime = iVar136;
        }
LAB_1400d62b3:
        auVar317 = auVar309._0_16_;
        auVar219 = auVar336._0_16_;
        auVar248 = auVar324._0_16_;
        piVar160 = (int *)((longlong)piVar160 + -0xb4);
        rVar78 = rVar168;
      } while (1 < (longlong)local_1b8);
    }
    auVar324 = ZEXT1664(auVar248);
    auVar309 = ZEXT1664(auVar219);
    auVar327 = ZEXT1664(auVar317);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("play lightning sound");
    auVar198._4_4_ = w.lightning_volume;
    if (0.0 < w.lightning_volume) {
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if ((((0.001 <= auVar198._4_4_) && (ac.initialized != false)) &&
          (0 < sounds.lightning.n_samples)) &&
         ((sounds.lightning.data != (short *)0x0 &&
          (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
        uVar69 = uVar69 * -0x7b935975;
        uVar107 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar107].sound = (sound_t *)0x1401eb100;
        pqVar63[(int)uVar107].params.volume = auVar198._4_4_;
        pqVar63[(int)uVar107].params.delay =
             (float)(uVar69 >> 0x10 ^ uVar69) * auVar324._0_4_ * 0.008333334 + 0.0;
        pqVar63[(int)uVar107].params.pitch_shift =
             (float)uVar96 * auVar324._0_4_ * 6.0 + -3.0 + -6.0;
        auVar231._0_12_ = ZEXT812(0);
        auVar231._12_4_ = 0;
        *(undefined1 (*) [16])&pqVar63[(int)uVar107].params.lowpass_dist = auVar231;
        *(undefined8 *)((longlong)pqVar63[(int)uVar107].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
    }
    auVar198._4_4_ = w.thunder_volume;
    if (0.0 < w.thunder_volume) {
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if (((0.001 <= auVar198._4_4_) && (ac.initialized != false)) &&
         ((0 < sounds.thunder.n_samples &&
          ((sounds.thunder.data != (short *)0x0 &&
           (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))))) {
        uVar69 = uVar69 * -0x7b935975;
        auVar203._0_4_ = (float)uVar96;
        auVar203._4_8_ = SUB128(ZEXT812(0),4);
        auVar203._12_4_ = 0;
        auVar248 = vinsertps_avx(ZEXT416((uint)(float)(uVar69 >> 0x10 ^ uVar69)),auVar203,0x10);
        auVar204._0_4_ = auVar248._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
        auVar204._4_4_ = auVar248._4_4_ * 2.3283064e-10 * 6.0 + -3.0;
        auVar204._8_4_ = auVar248._8_4_ * 0.0 * 0.0 + 0.0;
        auVar204._12_4_ = auVar248._12_4_ * 0.0 * 0.0 + 0.0;
        uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb110;
        pqVar63[(int)uVar69].params.volume = auVar198._4_4_;
        uVar122 = vmovlps_avx(auVar204);
        pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
        pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
        *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT416(0) << 0x20;
        *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("magnetic fields");
    rVar78 = local_1b8;
    if (0 < w.n_magnetic_fields) {
      rVar168.x = 5.60519e-44;
      rVar168.y = 0.0;
      auVar357 = ZEXT1264(ZEXT812(0));
      auVar324 = ZEXT464(0x3f800000);
      uVar122 = w.field106_0x3d40.magnetic_fields;
      pmVar117 = (material_t *)0x0;
      rVar161 = (real_2_u_0)0x1;
      auVar248._4_4_ = w.n_magnetic_fields;
      do {
        local_1b8 = (real_2_u_0_s_0)((longlong)&pmVar117->id + 1);
        peVar165 = (explosion_t *)rVar161;
        if ((longlong)auVar248._4_4_ <= (longlong)local_1b8) break;
        pcVar84 = ((magnetic_field_t *)(uVar122 + pmVar117 * 0x18))->c;
        auVar198._4_4_ = rVar161._s_0.x;
        uVar102 = uVar122;
        rVar78 = rVar168;
        do {
          pcVar33 = *(cell **)(uVar102 + (longlong)rVar78 + -0x10);
          fVar208 = (pcVar84->field40_0xdc0).r + (pcVar33->field40_0xdc0).r;
          fVar171 = (pcVar33->field32_0xbc0).x - (pcVar84->field32_0xbc0).x;
          fVar334 = (pcVar33->field33_0xc00).y - (pcVar84->field33_0xc00).y;
          if (((pcVar84->field2_0x80).bone_id == 0) ||
             ((pcVar84->field2_0x80).bone_id != (pcVar33->field2_0x80).bone_id)) {
            fVar245 = auVar357._0_4_;
            fVar172 = fVar334 * fVar334 + fVar245 + fVar171 * fVar171;
            if ((fVar208 * fVar208 <= fVar172) && (fVar172 <= 90000.0)) {
              uVar109 = *(ulonglong *)
                         (((ulonglong)pcVar33 & 0xffffffffffffffc0) + 0x1580 +
                         (ulonglong)((uint)((ulonglong)pcVar33 >> 2) & 0xf) * 0xb0);
              lVar133 = *(longlong *)
                         (((ulonglong)pcVar84 & 0xffffffffffffffc0) + 0x1580 +
                         (ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0);
              iVar136 = (int)lVar133 - (int)uVar109;
              iVar70 = -iVar136;
              if (-iVar136 < 0) {
                iVar70 = iVar136;
              }
              iVar71 = (int)(lVar133 - (uVar109 & 0xffffffff00000000) >> 0x20);
              iVar97 = -iVar71;
              if (-iVar71 < 0) {
                iVar97 = iVar71;
              }
              iVar132 = -(iVar136 + iVar71);
              if (iVar132 < 0) {
                iVar132 = iVar136 + iVar71;
              }
              if (((pcVar84->field1_0x40).body_id != (pcVar33->field1_0x40).body_id) ||
                 (2 < (uint)(iVar97 + iVar70 + iVar132))) {
                fVar208 = (((magnetic_field_t *)(uVar122 + pmVar117 * 0x18))->moment).field0_0x0.
                          _s_0.z;
                uVar109 = *(ulonglong *)
                           &(((magnetic_field_t *)(uVar122 + pmVar117 * 0x18))->moment).field0_0x0;
                auVar264._8_8_ = 0;
                auVar264._0_8_ = uVar109;
                auVar248 = vshufps_avx(auVar264,auVar264,0xf5);
                fVar303 = (float)uVar109;
                fVar333 = fVar208 * fVar208 +
                          auVar248._0_4_ * auVar248._0_4_ + fVar245 + fVar303 * fVar303;
                auVar358 = auVar324._4_12_;
                fVar347 = auVar324._0_4_;
                if (1e+18 < fVar333) {
                  auVar300._0_8_ = (double)fVar333;
                  auVar300._8_8_ = 0;
                  auVar248 = vcmpsd_avx(auVar300,ZEXT816(0x476812f9cf7920e3),1);
                  auVar319._8_8_ = 0x3c32725dd1d243ac;
                  auVar319._0_8_ = 0x3c32725dd1d243ac;
                  auVar248 = vblendvpd_avx(auVar319,___xmm_3e112e0be00000003e112e0be0000000,auVar248
                                          );
                  auVar320._0_4_ = (float)auVar248._0_8_;
                  auVar320._4_12_ = auVar248._4_12_;
                  auVar248 = vmovsldup_avx(auVar320);
                  auVar301._0_4_ = auVar248._0_4_ * fVar303;
                  auVar301._4_4_ = auVar248._4_4_ * (float)(uVar109 >> 0x20);
                  auVar301._8_4_ = auVar248._8_4_ * 0.0;
                  auVar301._12_4_ = auVar248._12_4_ * 0.0;
                  auVar248 = vmovshdup_avx(auVar301);
                  fVar303 = fVar208 * auVar320._0_4_;
                  fVar208 = 0.0;
                  fVar333 = fVar303 * fVar303 +
                            auVar301._0_4_ * auVar301._0_4_ + 0.0 + auVar248._0_4_ * auVar248._0_4_;
                  auVar264 = ZEXT816(0);
                  if (1e-06 < fVar333) {
                    auVar248 = vsqrtss_avx(ZEXT416((uint)fVar333),ZEXT416((uint)fVar333));
                    auVar265._0_4_ = fVar347 / auVar248._0_4_;
                    auVar265._4_12_ = auVar358;
                    auVar248 = vmovsldup_avx(auVar265);
                    auVar264._0_4_ = auVar301._0_4_ * auVar248._0_4_ * (float)0x4e6e6b28;
                    auVar264._4_4_ = auVar301._4_4_ * auVar248._4_4_ * (float)0x4e6e6b28;
                    auVar264._8_4_ = auVar301._8_4_ * auVar248._8_4_ * 0.0;
                    auVar264._12_4_ = auVar301._12_4_ * auVar248._12_4_ * 0.0;
                    fVar208 = fVar303 * auVar265._0_4_ * 1e+09;
                  }
                }
                auVar289._0_4_ = fVar347 / fVar172;
                auVar289._4_12_ = auVar358;
                auVar248 = vsqrtss_avx(auVar289,auVar289);
                fVar303 = auVar248._0_4_;
                fVar171 = fVar171 * fVar303;
                fVar172 = *(float *)((longlong)&((magnetic_field_t *)uVar102)->c + (longlong)rVar78)
                ;
                auVar321._8_8_ = 0;
                auVar321._0_8_ = *(ulonglong *)(uVar102 + (longlong)rVar78 + -8);
                auVar322 = vshufps_avx(auVar321,auVar321,0xe1);
                auVar248 = vshufps_avx(auVar322,auVar322,0xf5);
                fVar173 = auVar322._0_4_;
                fVar333 = fVar172 * fVar172 +
                          fVar173 * fVar173 + auVar248._0_4_ * auVar248._0_4_ + fVar245;
                if (1e+18 < fVar333) {
                  auVar348._0_8_ = (double)fVar333;
                  auVar348._8_8_ = 0;
                  auVar248 = vcmpsd_avx(auVar348,ZEXT816(0x476812f9cf7920e3),1);
                  auVar326._8_8_ = 0x3c32725dd1d243ac;
                  auVar326._0_8_ = 0x3c32725dd1d243ac;
                  auVar248 = vblendvpd_avx(auVar326,___xmm_3e112e0be00000003e112e0be0000000,auVar248
                                          );
                  auVar349._0_4_ = (float)auVar248._0_8_;
                  auVar349._4_12_ = auVar248._4_12_;
                  auVar248 = vmovsldup_avx(auVar349);
                  auVar369._0_4_ = auVar248._0_4_ * fVar173;
                  auVar369._4_4_ = auVar248._4_4_ * auVar322._4_4_;
                  auVar369._8_4_ = auVar248._8_4_ * auVar322._8_4_;
                  auVar369._12_4_ = auVar248._12_4_ * auVar322._12_4_;
                  auVar248 = vmovshdup_avx(auVar369);
                  fVar173 = fVar172 * auVar349._0_4_;
                  fVar172 = 0.0;
                  fVar333 = fVar173 * fVar173 +
                            auVar369._0_4_ * auVar369._0_4_ + auVar248._0_4_ * auVar248._0_4_ + 0.0;
                  auVar322 = ZEXT816(0);
                  if (1e-06 < fVar333) {
                    auVar248 = vsqrtss_avx(ZEXT416((uint)fVar333),ZEXT416((uint)fVar333));
                    auVar323._0_4_ = fVar347 / auVar248._0_4_;
                    auVar323._4_12_ = auVar358;
                    auVar248 = vmovsldup_avx(auVar323);
                    auVar322._0_4_ = auVar369._0_4_ * auVar248._0_4_ * (float)0x4e6e6b28;
                    auVar322._4_4_ = auVar369._4_4_ * auVar248._4_4_ * (float)0x4e6e6b28;
                    auVar322._8_4_ = auVar369._8_4_ * auVar248._8_4_ * 0.0;
                    auVar322._12_4_ = auVar369._12_4_ * auVar248._12_4_ * 0.0;
                    fVar172 = fVar173 * auVar323._0_4_ * 1e+09;
                  }
                }
                fVar173 = auVar264._0_4_;
                auVar248 = vshufps_avx(auVar322,auVar322,0xf5);
                fVar279 = auVar248._0_4_;
                auVar248 = vshufps_avx(auVar264,auVar264,0xf5);
                fVar108 = auVar322._0_4_;
                fVar351 = auVar248._0_4_;
                auVar248 = vinsertps_avx(ZEXT416((uint)(fVar351 * -fVar171)),
                                         ZEXT416((uint)(fVar245 + fVar173 * fVar171)),0x10);
                auVar219 = vinsertps_avx(ZEXT416((uint)(fVar279 * fVar171 + fVar245)),
                                         ZEXT416((uint)(-fVar171 * fVar108)),0x10);
                auVar317 = vmovsldup_avx(ZEXT416((uint)(fVar334 * fVar303)));
                auVar331._0_4_ = auVar317._0_4_ * fVar173 + auVar248._0_4_;
                auVar331._4_4_ = auVar317._4_4_ * auVar264._4_4_ + auVar248._4_4_;
                auVar331._8_4_ = auVar317._8_4_ * auVar264._8_4_ + auVar248._8_4_;
                auVar331._12_4_ = auVar317._12_4_ * auVar264._12_4_ + auVar248._12_4_;
                auVar248 = vmovshdup_avx(auVar331);
                fVar354 = auVar317._0_4_ * fVar108 + auVar219._0_4_;
                fVar365 = auVar248._0_4_;
                fVar333 = fVar365 * -4.0 * fVar354;
                auVar309 = ZEXT464((uint)fVar333);
                fVar333 = fVar333 + (fVar172 * fVar208 +
                                    fVar351 * fVar108 + fVar173 * fVar279 + fVar245) * 0.6666667;
                auVar357 = ZEXT864(0);
                fVar208 = (fVar173 * fVar108 - fVar351 * fVar279) * 0.33333334;
                fVar172 = auVar289._0_4_ * fVar303 *
                          (fVar365 * fVar279 + fVar354 * fVar173 + fVar333 * fVar171);
                fVar171 = auVar289._0_4_ * fVar303 *
                          (fVar365 * fVar108 + fVar354 * fVar351 + fVar333 * fVar334 * fVar303);
                auVar205._0_4_ = -fVar208;
                auVar205._4_4_ = 0x80000000;
                auVar205._8_4_ = 0x80000000;
                auVar205._12_4_ = 0x80000000;
                auVar248 = vinsertps_avx(auVar205,ZEXT416((uint)fVar208),0x1c);
                auVar258 = vmovsldup_avx(auVar289);
                auVar318._0_4_ = auVar258._0_4_ * (auVar331._0_4_ * fVar354 + auVar248._0_4_);
                auVar318._4_4_ =
                     auVar258._4_4_ *
                     (auVar331._4_4_ * (auVar317._4_4_ * auVar322._4_4_ + auVar219._4_4_) +
                     auVar248._4_4_);
                auVar318._8_4_ =
                     auVar258._8_4_ *
                     (auVar331._8_4_ * (auVar317._8_4_ * auVar322._8_4_ + auVar219._8_4_) +
                     auVar248._8_4_);
                auVar318._12_4_ =
                     auVar258._12_4_ *
                     (auVar331._12_4_ * (auVar317._12_4_ * auVar322._12_4_ + auVar219._12_4_) +
                     auVar248._12_4_);
                fVar208 = fVar171 * fVar171 + fVar172 * fVar172 + 0.0;
                if (0.25 < fVar208) {
                  auVar248 = vsqrtss_avx(ZEXT416((uint)fVar208),ZEXT416((uint)fVar208));
                  fVar208 = (fVar347 / auVar248._0_4_) * 0.5;
                  fVar172 = fVar172 * fVar208;
                  fVar171 = fVar171 * fVar208;
                  auVar248 = vmovsldup_avx(ZEXT416((uint)fVar208));
                  auVar318._0_4_ = auVar318._0_4_ * auVar248._0_4_;
                  auVar318._4_4_ = auVar318._4_4_ * auVar248._4_4_;
                  auVar318._8_4_ = auVar318._8_4_ * auVar248._8_4_;
                  auVar318._12_4_ = auVar318._12_4_ * auVar248._12_4_;
                }
                auVar332 = ZEXT464((uint)fVar171);
                auVar324 = ZEXT1664(auVar324._0_16_);
                auVar327 = ZEXT1664(auVar318);
                apply_torque(pcVar84,auVar318._0_4_);
                auVar248 = vmovshdup_avx(auVar327._0_16_);
                apply_torque(pcVar33,auVar248._0_4_);
                fVar208 = auVar324._0_4_ / (pcVar84->field31_0xb80).mass;
                (pcVar84->field34_0xc40).x_dot = (pcVar84->field34_0xc40).x_dot - fVar172 * fVar208;
                (pcVar84->field35_0xc80).y_dot =
                     (pcVar84->field35_0xc80).y_dot - auVar332._0_4_ * fVar208;
                fVar208 = auVar324._0_4_ / (pcVar33->field31_0xb80).mass;
                (pcVar33->field34_0xc40).x_dot = fVar172 * fVar208 + (pcVar33->field34_0xc40).x_dot;
                (pcVar33->field35_0xc80).y_dot =
                     auVar332._0_4_ * fVar208 + (pcVar33->field35_0xc80).y_dot;
                auVar327 = ZEXT464((uint)local_120._0_4_);
                uVar102 = w.field106_0x3d40.magnetic_fields;
                auVar248._4_4_ = w.n_magnetic_fields;
              }
            }
          }
          rVar78 = (real_2_u_0_s_0)((longlong)rVar78 + 0x18);
          rVar161._0_4_ = (int)rVar161._s_0.x + 1;
          rVar161._s_0.y = 0.0;
        } while ((int)rVar161._0_4_ < auVar248._4_4_);
        rVar168 = (real_2_u_0_s_0)((longlong)rVar168 + 0x18);
        peVar165._0_4_ = (int)auVar198._4_4_ + 1;
        peVar165._4_4_ = 0;
        uVar122 = uVar102;
        pmVar117 = (material_t *)local_1b8;
        piVar160 = (int *)rVar161;
        rVar161 = (real_2_u_0)peVar165;
        rVar78 = local_1b8;
      } while ((longlong)local_1b8 < (longlong)auVar248._4_4_);
    }
    w.n_magnetic_fields = 0;
    local_1b8 = rVar78;
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("update lasers");
    auVar317 = auVar327._0_16_;
    auVar219 = auVar309._0_16_;
    if (w.n_lasers < 1) {
      auVar198 = SUB6416(ZEXT864(0),0);
    }
    else {
      auVar309 = ZEXT1264(ZEXT812(0));
      uVar109 = 0;
      auVar336 = ZEXT464(0x44fa0000);
      auVar346 = ZEXT464(0x3f800000);
      auVar324 = ZEXT1664(ZEXT816(0x3fe40d9320000000));
      auVar357 = ZEXT464(0x3e99999a);
      peVar165 = (explosion_t *)0x0;
      auVar332 = ZEXT864(0);
      auVar248._4_4_ = w.n_lasers;
      do {
        uVar69 = w.field82_0x3c40.lasers[(longlong)peVar165].cell_id;
        if (((0 < (int)uVar69) &&
            (uVar96 = w.max_cells + 0x7fffffffU & uVar69,
            w.field57_0x3a48.cell_index_table[uVar96].id == uVar69)) &&
           (w.field58_0x3a60.cells != (cell *)0x0)) {
          plVar155 = w.field82_0x3c40.lasers + (longlong)peVar165;
          uVar123 = (longlong)
                    &w.field58_0x3a60.cells[w.field57_0x3a48.cell_index_table[uVar96].index >> 4].
                     field0_0x0 +
                    (ulonglong)(w.field57_0x3a48.cell_index_table[uVar96].index & 0xf) * 4;
          auVar198._4_4_ = (plVar155->dir).field0_0x0._s_0.x;
          fVar208 = (plVar155->dir).field0_0x0._s_0.y;
          auVar350 = ZEXT464((uint)fVar208);
          rVar168 = (real_2_u_0_s_0)
                    (CONCAT44(rVar168.y,auVar198._4_4_ + (plVar155->x).field0_0x0._s_0.x) |
                    (ulonglong)(uint)(fVar208 + (plVar155->x).field0_0x0._s_0.y) << 0x20);
          auVar353 = ZEXT1264(ZEXT812(0));
          auVar248._4_4_ = 200;
          while( true ) {
            auVar324 = ZEXT1664(auVar324._0_16_);
            auVar350 = ZEXT1664(auVar350._0_16_);
            auVar353 = ZEXT1664(auVar353._0_16_);
            auVar309 = ZEXT1664(auVar309._0_16_);
            auVar357 = ZEXT1664(auVar357._0_16_);
            auVar332 = ZEXT1664(auVar332._0_16_);
            auVar336 = ZEXT1664(auVar336._0_16_);
            auVar346 = ZEXT1664(auVar346._0_16_);
            auVar327 = ZEXT1664(auVar327._0_16_);
            wall_map((wall_t *)local_158,&w.map,(real_2)rVar168,true);
            auVar219 = vandps_avx(ZEXT416((uint)local_158._0_4_),
                                  ___xmm_7fffffff7fffffff7fffffff7fffffff);
            fVar208 = auVar353._0_4_;
            if (auVar219._0_4_ <= 0.1) break;
            auVar219 = vminss_avx(ZEXT416((uint)local_158._0_4_),ZEXT416(0x41200000));
            fVar334 = auVar219._0_4_;
            fVar171 = auVar353._0_4_ + fVar334;
            auVar353 = ZEXT464((uint)fVar171);
            fVar208 = auVar336._0_4_;
            if ((auVar336._0_4_ <= fVar171) || (fVar208 = 0.0, fVar171 < 0.0)) break;
            fVar208 = rVar168.x;
            rVar168.y = auVar350._0_4_ * fVar334 + rVar168.y;
            rVar168.x = fVar334 * auVar198._4_4_ + fVar208;
            auVar248._4_4_ = auVar248._4_4_ + -1;
            fVar208 = fVar171;
            if (auVar248._4_4_ == 0) break;
          }
          fVar208 = fVar208 + auVar346._0_4_;
          plVar155->length = fVar208;
          rVar78 = (plVar155->dir).field0_0x0._s_0;
          rVar157 = (plVar155->x).field0_0x0._s_0;
          local_1b8.x = rVar157.x;
          local_1b8.y = rVar157.y;
          local_168._0_4_ = rVar78.x;
          local_168._4_4_ = rVar78.y;
          rVar124._s_0 = (real_2_u_0_s_0)raycast_cells(rVar157,rVar78,fVar208,plVar155->cell_id);
          if (rVar124 != (real_2_u_0)0x0) {
            local_188._0_4_ = auVar332._0_4_;
            auVar248 = vmaxss_avx(ZEXT416((uint)(plVar155->heat *
                                                 materials_list[*(int *)((longlong)rVar124 + 0xc0)].
                                                 inv_heat_capacity +
                                                *(float *)((longlong)rVar124 + 0x680))),
                                  ZEXT416(0xc2c80000));
            *(int *)((longlong)rVar124 + 0x680) = auVar248._0_4_;
            fVar208 = 0.0;
            plVar155->length =
                 (*(float *)((longlong)rVar124 + 0xc00) - (plVar155->x).field0_0x0._s_0.y) *
                 (plVar155->dir).field0_0x0._s_0.y +
                 (*(float *)((longlong)rVar124 + 0xbc0) - (plVar155->x).field0_0x0._s_0.x) *
                 (plVar155->dir).field0_0x0._s_0.x + 0.0;
            uVar106 = (ulonglong)rVar124 & 0xffffffffffffffc0;
            lVar133 = (ulonglong)((uint)((ulonglong)rVar124 >> 2) & 0xf) * 0xb0;
            auVar327 = ZEXT464(*(uint *)(uVar106 + 0x1588 + lVar133));
            auVar357 = ZEXT464(*(uint *)(uVar106 + 0x158c + lVar133));
            auVar198._4_4_ = *(float *)(uVar106 + 0x1590 + lVar133);
            powf();
            auVar332 = ZEXT1664(auVar327._0_16_);
            afStack_268[7] = auVar327._0_4_;
            auVar327 = ZEXT1664(auVar357._0_16_);
            powf();
            auVar357 = ZEXT1664(auVar327._0_16_);
            afStack_268[8] = auVar327._0_4_;
            powf();
            uVar106 = (ulonglong)(auVar332._0_4_ < auVar357._0_4_);
            auVar248 = vmaxss_avx(auVar357._0_16_,auVar332._0_16_);
            if (auVar248._0_4_ < auVar198._4_4_) {
              uVar106 = 2;
            }
            uVar121 = (ulonglong)(auVar357._0_4_ < auVar332._0_4_);
            auVar248 = vminss_avx(auVar357._0_16_,auVar332._0_16_);
            if (auVar198._4_4_ < auVar248._0_4_) {
              uVar121 = 2;
            }
            afStack_268[9] = auVar198._4_4_;
            auVar198._4_4_ = afStack_268[uVar106 + 7];
            fVar334 = auVar198._4_4_ - afStack_268[uVar121 + 7];
            fVar171 = 0.0;
            if (fVar208 < fVar334) {
              auVar248._4_4_ = (int)uVar106;
              iVar70 = auVar248._4_4_ + -1;
              if (auVar248._4_4_ == 0) {
                iVar70 = 2;
              }
              uVar106 = (ulonglong)(auVar248._4_4_ + 1U);
              if (auVar248._4_4_ + 1U == 3) {
                uVar106 = uVar109;
              }
              fVar171 = ((afStack_268[uVar106 + 7] - afStack_268[(longlong)iVar70 + 7]) / fVar334 +
                        (float)(auVar248._4_4_ * 2)) * 1.0471976;
              if (fVar171 < auVar309._0_4_) {
                fVar171 = fVar171 + 6.2831855;
              }
            }
            if (fVar208 < auVar198._4_4_) {
              fVar208 = fVar334 / auVar198._4_4_;
            }
            auVar248 = vandps_avx(ZEXT416((uint)plVar155->heat),
                                  ___xmm_7fffffff7fffffff7fffffff7fffffff);
            uVar106 = uVar123 & 0xffffffffffffffc0;
            lVar133 = (ulonglong)((uint)(uVar123 >> 2) & 0xf) * 0xb0;
            fVar334 = auVar248._0_4_;
            auVar327 = ZEXT464((uint)(fVar334 * *(float *)(uVar106 + 0x1588 + lVar133)));
            auVar357 = ZEXT464((uint)(fVar334 * *(float *)(uVar106 + 0x158c + lVar133)));
            auVar332 = ZEXT464((uint)(fVar334 * *(float *)(uVar106 + 0x1590 + lVar133)));
            powf();
            auVar336 = ZEXT1664(auVar327._0_16_);
            afStack_268[10] = auVar327._0_4_;
            auVar327 = ZEXT1664(auVar357._0_16_);
            powf();
            auVar357 = ZEXT1664(auVar327._0_16_);
            afStack_268[0xb] = auVar327._0_4_;
            auVar327 = ZEXT1664(auVar332._0_16_);
            powf();
            uVar123 = (ulonglong)(auVar336._0_4_ < auVar357._0_4_);
            auVar248 = vmaxss_avx(auVar357._0_16_,auVar336._0_16_);
            afStack_268[0xc] = auVar327._0_4_;
            if (auVar248._0_4_ < afStack_268[0xc]) {
              uVar123 = 2;
            }
            uVar106 = (ulonglong)(auVar357._0_4_ < auVar336._0_4_);
            auVar248 = vminss_avx(auVar357._0_16_,auVar336._0_16_);
            if (afStack_268[0xc] < auVar248._0_4_) {
              uVar106 = 2;
            }
            fVar334 = afStack_268[uVar123 + 10];
            fVar245 = fVar334 - afStack_268[uVar106 + 10];
            fVar333 = 0.0;
            fVar172 = 0.0;
            auVar357 = ZEXT464(0x3e99999a);
            if (0.0 < fVar245) {
              auVar248._4_4_ = (int)uVar123;
              iVar70 = auVar248._4_4_ + -1;
              if (auVar248._4_4_ == 0) {
                iVar70 = 2;
              }
              uVar123 = (ulonglong)(auVar248._4_4_ + 1U);
              if (auVar248._4_4_ + 1U == 3) {
                uVar123 = uVar109;
              }
              fVar172 = ((afStack_268[uVar123 + 10] - afStack_268[(longlong)iVar70 + 10]) / fVar245
                        + (float)(auVar248._4_4_ * 2)) * 1.0471976;
              if (fVar172 < auVar309._0_4_) {
                fVar172 = fVar172 + 6.2831855;
              }
            }
            if (0.0 < fVar334) {
              fVar333 = fVar245 / fVar334;
            }
            auVar248 = vandps_avx(ZEXT416((uint)(fVar172 - fVar171)),
                                  ___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar219 = vcmpss_avx(SUB6416(ZEXT464(0x40490fdb),0),auVar248,1);
            auVar248 = vblendvps_avx(auVar248,ZEXT416((uint)(6.2831855 - auVar248._0_4_)),auVar219);
            auVar198._4_4_ = auVar198._4_4_ * fVar334 * auVar198._4_4_ * fVar334;
            fVar171 = fVar208 * fVar333 * 3.8197186 * auVar248._0_4_;
            fVar208 = (fVar208 - fVar333) * (fVar208 - fVar333) * -4.0 - fVar171 * fVar171;
            expf();
            *(float *)((longlong)rVar124 + 0x1240) =
                 auVar198._4_4_ * fVar208 + *(float *)((longlong)rVar124 + 0x1240);
            rVar78 = (plVar155->x).field0_0x0._s_0;
            local_1b8.x = rVar78.x;
            local_1b8.y = rVar78.y;
            local_168._0_8_ = (plVar155->dir).field0_0x0;
            auVar327 = ZEXT464((uint)local_120._0_4_);
            auVar332 = ZEXT464((uint)local_188._0_4_);
            auVar336 = ZEXT464(0x44fa0000);
            piVar160 = (int *)rVar124;
          }
          auVar198._4_4_ = plVar155->length;
          auVar350 = ZEXT464((uint)auVar198._4_4_);
          fVar208 = plVar155->heat;
          uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
          uVar69 = uVar69 >> 0xf ^ uVar69;
          uVar96 = uVar69 * -0x7b935975;
          uVar69 = uVar69 * -0x63d2f291;
          uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
          uVar69 = uVar69 >> 0x10 ^ uVar69;
          local_f8->visual_seed = uVar69;
          iVar70 = (int)(auVar309._0_4_ +
                         (float)(uVar96 >> 0x10 ^ uVar96) * 2.3283064e-10 *
                         auVar198._4_4_ * 0.001 * fVar208 + (float)uVar69 * 2.3283064e-10);
          auVar248._4_4_ = 0x14;
          if (iVar70 < 0x14) {
            auVar248._4_4_ = iVar70;
          }
          if (0 < iVar70) {
            do {
              auVar207 = auVar327._0_16_;
              auVar370 = auVar346._0_16_;
              auVar294 = auVar336._0_16_;
              auVar178 = auVar332._0_16_;
              auVar362 = auVar357._0_16_;
              auVar258 = auVar309._0_16_;
              auVar317 = auVar350._0_16_;
              auVar219 = auVar324._0_16_;
              uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              local_f8->visual_seed = uVar69;
              auVar198._4_4_ = (float)uVar123 * 2.3283064e-10;
              if ((auVar198._4_4_ != auVar309._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar309._0_4_))
                 ) {
                fVar208 = auVar346._0_4_;
                uVar106 = 0;
                if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                  dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                  auVar324 = ZEXT1664(auVar219);
                  auVar309 = ZEXT1664(auVar317);
                  auVar327 = ZEXT1664(auVar258);
                  auVar357 = ZEXT1664(auVar362);
                  auVar332 = ZEXT1664(auVar178);
                  auVar336 = ZEXT1664(auVar294);
                  auVar346 = ZEXT1664(auVar370);
                  auVar350 = ZEXT1664(auVar207);
                  log();
                  auVar207 = auVar350._0_16_;
                  auVar370 = auVar346._0_16_;
                  auVar294 = auVar336._0_16_;
                  auVar178 = auVar332._0_16_;
                  auVar362 = auVar357._0_16_;
                  auVar258 = auVar327._0_16_;
                  auVar317 = auVar309._0_16_;
                  auVar219 = auVar324._0_16_;
                  uVar106 = (ulonglong)(uint)(float)(dVar176 * auVar324._0_8_);
                  uVar123 = (ulonglong)local_f8->visual_seed;
                }
              }
              else {
                uVar106 = 0;
              }
              uVar69 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              local_f8->visual_seed = uVar69;
              auVar198._4_4_ = (float)uVar123 * 2.3283064e-10;
              if ((auVar198._4_4_ != auVar258._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar258._0_4_))
                 ) {
                fVar208 = auVar370._0_4_;
                if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                  dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                  auVar324 = ZEXT1664(auVar219);
                  auVar309 = ZEXT1664(auVar317);
                  auVar327 = ZEXT1664(auVar258);
                  auVar357 = ZEXT1664(auVar362);
                  auVar332 = ZEXT1664(auVar178);
                  auVar336 = ZEXT1664(auVar294);
                  auVar346 = ZEXT1664(auVar370);
                  auVar350 = ZEXT1664(auVar207);
                  log();
                  auVar207 = auVar350._0_16_;
                  auVar370 = auVar346._0_16_;
                  auVar294 = auVar336._0_16_;
                  auVar178 = auVar332._0_16_;
                  auVar362 = auVar357._0_16_;
                  auVar258 = auVar327._0_16_;
                  auVar317 = auVar309._0_16_;
                  auVar219 = auVar324._0_16_;
                  uVar106 = uVar106 | (ulonglong)(uint)(float)(dVar176 * auVar324._0_8_) << 0x20;
                  uVar123 = (ulonglong)local_f8->visual_seed;
                }
              }
              uVar96 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar96 = uVar96 >> 0xf ^ uVar96;
              uVar69 = uVar96 * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              auVar198._4_4_ = (plVar155->dir).field0_0x0._s_0.x;
              fVar208 = (plVar155->dir).field0_0x0._s_0.y;
              local_f8->visual_seed = uVar69;
              fVar171 = (float)uVar69 * 2.3283064e-10 * plVar155->length;
              auVar198._4_4_ = fVar171 * auVar198._4_4_ + (plVar155->x).field0_0x0._s_0.x;
              auVar360 = ZEXT416((uint)auVar198._4_4_);
              fVar208 = fVar171 * fVar208 + (plVar155->x).field0_0x0._s_0.y;
              uVar96 = uVar96 * -0x63d2f291;
              uVar69 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              local_f8->visual_seed = uVar69;
              fVar171 = (float)uVar123 * 2.3283064e-10;
              if ((fVar171 != auVar258._0_4_) || (NAN(fVar171) || NAN(auVar258._0_4_))) {
                fVar334 = auVar370._0_4_;
                uVar121 = 0;
                if ((fVar171 != fVar334) || (NAN(fVar171) || NAN(fVar334))) {
                  dVar176 = (double)(fVar171 / (fVar334 - fVar171));
                  auVar324 = ZEXT1664(auVar219);
                  auVar309 = ZEXT1664(auVar317);
                  auVar327 = ZEXT464((uint)auVar198._4_4_);
                  auVar357 = ZEXT1664(auVar258);
                  auVar332 = ZEXT1664(auVar362);
                  auVar336 = ZEXT1664(auVar178);
                  auVar346 = ZEXT1664(auVar294);
                  auVar350 = ZEXT1664(auVar370);
                  auVar353 = ZEXT1664(auVar207);
                  log();
                  auVar207 = auVar353._0_16_;
                  auVar370 = auVar350._0_16_;
                  auVar294 = auVar346._0_16_;
                  auVar178 = auVar336._0_16_;
                  auVar362 = auVar332._0_16_;
                  auVar258 = auVar357._0_16_;
                  auVar317 = auVar309._0_16_;
                  auVar219 = auVar324._0_16_;
                  auVar360 = auVar327._0_16_;
                  uVar121 = (ulonglong)(uint)(float)(dVar176 * auVar324._0_8_);
                  uVar123 = (ulonglong)local_f8->visual_seed;
                }
              }
              else {
                uVar121 = 0;
              }
              fVar171 = auVar360._0_4_;
              uVar69 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              local_f8->visual_seed = uVar69;
              auVar198._4_4_ = (float)uVar123 * 2.3283064e-10;
              if ((auVar198._4_4_ != auVar258._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar258._0_4_))
                 ) {
                fVar334 = auVar370._0_4_;
                if ((auVar198._4_4_ != fVar334) || (NAN(auVar198._4_4_) || NAN(fVar334))) {
                  dVar176 = (double)(auVar198._4_4_ / (fVar334 - auVar198._4_4_));
                  auVar324 = ZEXT1664(auVar219);
                  auVar309 = ZEXT1664(auVar317);
                  auVar327 = ZEXT1664(auVar360);
                  auVar357 = ZEXT1664(auVar258);
                  auVar332 = ZEXT1664(auVar362);
                  auVar336 = ZEXT1664(auVar178);
                  auVar346 = ZEXT1664(auVar294);
                  auVar350 = ZEXT1664(auVar370);
                  auVar353 = ZEXT1664(auVar207);
                  log();
                  auVar207 = auVar353._0_16_;
                  auVar370 = auVar350._0_16_;
                  auVar294 = auVar346._0_16_;
                  auVar178 = auVar336._0_16_;
                  auVar362 = auVar332._0_16_;
                  auVar258 = auVar357._0_16_;
                  auVar317 = auVar309._0_16_;
                  auVar219 = auVar324._0_16_;
                  fVar171 = auVar327._0_4_;
                  uVar121 = uVar121 | (ulonglong)(uint)(float)(dVar176 * auVar324._0_8_) << 0x20;
                  uVar123 = (ulonglong)local_f8->visual_seed;
                }
              }
              auVar198._4_4_ = (float)(uVar106 >> 0x20);
              piVar160 = (int *)(CONCAT44(auVar198._4_4_,fVar171 + (float)uVar106) |
                                (ulonglong)(uint)(fVar208 + auVar198._4_4_) << 0x20);
              uVar96 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar96 = uVar96 >> 0xf ^ uVar96;
              uVar69 = uVar96 * -0x7b935975;
              rVar168 = (real_2_u_0_s_0)
                        (CONCAT44(rVar168.y,(float)uVar121 * 0.1) |
                        (ulonglong)(uint)((float)(uVar121 >> 0x20) * 0.1) << 0x20);
              uVar96 = uVar96 * -0x63d2f291;
              uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
              uVar96 = uVar96 >> 0x10 ^ uVar96;
              local_f8->visual_seed = uVar96;
              iVar70 = (int)((float)uVar96 * 2.3283064e-10 * 10.0);
              if (iVar70 < 1) {
                iVar70 = 0;
              }
              if (8 < iVar70) {
                iVar70 = 9;
              }
              auVar324 = ZEXT1664(auVar219);
              auVar350 = ZEXT1664(auVar317);
              auVar353 = ZEXT464((uint)((float)(uVar69 >> 0x10 ^ uVar69) * 2.3283064e-10 * 0.2));
              auVar309 = ZEXT1664(auVar258);
              auVar357 = ZEXT1664(auVar362);
              auVar332 = ZEXT1664(auVar178);
              auVar336 = ZEXT1664(auVar294);
              auVar346 = ZEXT1664(auVar370);
              auVar327 = ZEXT1664(auVar207);
              pvVar73 = TlsGetValue(tls_index);
              auVar198._4_4_ = auVar353._0_4_;
              if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles))
              {
                lVar133 = (longlong)w.max_particles;
                iVar136 = w.n_particles;
                if (w.max_particles <= w.n_particles) {
                  w.max_particles = w.max_particles * 2;
                  bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
                  auVar198._4_4_ = auVar353._0_4_;
                  iVar136 = w.n_particles;
                  if (!bVar170) goto LAB_1400d8272;
                }
                uVar122 = w.field119_0x3dc0.particles;
                w.n_particles = iVar136 + 1;
                w.field119_0x3dc0.particles[iVar136].type = 8;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x).field0_0x0._s_0 =
                     (real_2_u_0_s_0)piVar160;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_dot).field0_0x0._s_0 =
                     rVar168;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0 =
                     (real_2_u_0)0x0;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->target = 0;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->r = 1.0;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->r_dot = auVar198._4_4_;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->time = 0;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->duration = iVar70 + 0xf;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color).field0_0x0.xy.
                field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                *(undefined8 *)
                 ((longlong)
                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_2.yz.
                   field0_0x0 + 4) = 0x3e19999a3f800000;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0.xy.
                field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                *(undefined8 *)
                 ((longlong)
                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0.
                   _s_2.yz.field0_0x0 + 4) = 0x3e19999a3f800000;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_final =
                     (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->emission =
                     (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                *(undefined8 *)
                 ((longlong)
                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->emission).field0_0x0 + 0xd
                 ) = 0;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0._s_0 =
                     (real_2_u_0_s_0)piVar160;
              }
              else {
                uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                         *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
                uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                uVar96 = uVar96 >> 0x10 ^ uVar96;
                uVar69 = (uint)((float)uVar96 * 2.3283064e-10 * (float)w.n_particles);
                if ((int)(w.n_particles - 1U) < (int)uVar69) {
                  uVar69 = w.n_particles - 1U;
                }
                *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
                uVar123 = (ulonglong)uVar69;
                if ((int)uVar69 < 1) {
                  uVar123 = uVar109;
                }
                if (w.field119_0x3dc0.particles[uVar123].affects_gameplay == false) {
                  ppVar79 = w.field119_0x3dc0.particles + uVar123;
                  ppVar79->type = 8;
                  (ppVar79->x).field0_0x0._s_0 = (real_2_u_0_s_0)piVar160;
                  (ppVar79->x_dot).field0_0x0._s_0 = rVar168;
                  (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                  ppVar79->target = 0;
                  ppVar79->r = 1.0;
                  ppVar79->r_dot = auVar198._4_4_;
                  ppVar79->time = 0;
                  ppVar79->duration = iVar70 + 0xf;
                  (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                  *(undefined8 *)((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
                       0x3e19999a3f800000;
                  (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000
                  ;
                  *(undefined8 *)
                   ((longlong)&(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
                       0x3e19999a3f800000;
                  ppVar79->color_final = (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                  ppVar79->emission = (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                  *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
                }
              }
LAB_1400d8272:
              auVar198._4_4_ = auVar350._0_4_;
              auVar248._4_4_ = auVar248._4_4_ + -1;
            } while (auVar248._4_4_ != 0);
            uVar69 = local_f8->visual_seed;
          }
          fVar171 = auVar332._0_4_;
          fVar208 = plVar155->heat;
          uVar96 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
          uVar96 = uVar96 >> 0xf ^ uVar96;
          uVar69 = uVar96 * -0x7b935975;
          uVar96 = uVar96 * -0x63d2f291;
          uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
          uVar96 = uVar96 >> 0x10 ^ uVar96;
          local_f8->visual_seed = uVar96;
          iVar70 = (int)(auVar309._0_4_ +
                         (float)(uVar69 >> 0x10 ^ uVar69) * 2.3283064e-10 * fVar208 * 0.1 +
                        (float)uVar96 * 2.3283064e-10);
          auVar248._4_4_ = 0x14;
          if (iVar70 < 0x14) {
            auVar248._4_4_ = iVar70;
          }
          if (0 < iVar70) {
            auVar350 = ZEXT464((uint)(auVar198._4_4_ * local_168._0_4_ + local_1b8.x));
            auVar353 = ZEXT464((uint)(auVar198._4_4_ * local_168._4_4_ + local_1b8.y));
            do {
              auVar360 = auVar327._0_16_;
              auVar207 = auVar346._0_16_;
              auVar370 = auVar336._0_16_;
              auVar294 = auVar332._0_16_;
              auVar362 = auVar309._0_16_;
              auVar219 = auVar324._0_16_;
              auVar178 = auVar357._0_16_;
              auVar258 = auVar353._0_16_;
              auVar317 = auVar350._0_16_;
              uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              local_f8->visual_seed = uVar69;
              auVar198._4_4_ = (float)uVar123 * 2.3283064e-10;
              if ((auVar198._4_4_ != auVar309._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar309._0_4_))
                 ) {
                fVar208 = auVar346._0_4_;
                uVar106 = 0;
                if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                  dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                  auVar324 = ZEXT1664(auVar219);
                  auVar309 = ZEXT1664(auVar317);
                  auVar327 = ZEXT1664(auVar258);
                  auVar357 = ZEXT1664(auVar362);
                  auVar332 = ZEXT1664(auVar178);
                  auVar336 = ZEXT1664(auVar294);
                  auVar346 = ZEXT1664(auVar370);
                  auVar350 = ZEXT1664(auVar207);
                  auVar353 = ZEXT1664(auVar360);
                  log();
                  auVar360 = auVar353._0_16_;
                  auVar207 = auVar350._0_16_;
                  auVar370 = auVar346._0_16_;
                  auVar294 = auVar336._0_16_;
                  auVar362 = auVar357._0_16_;
                  auVar219 = auVar324._0_16_;
                  auVar178 = auVar332._0_16_;
                  auVar258 = auVar327._0_16_;
                  auVar317 = auVar309._0_16_;
                  uVar106 = (ulonglong)(uint)(float)(dVar176 * auVar324._0_8_);
                  uVar123 = (ulonglong)local_f8->visual_seed;
                }
              }
              else {
                uVar106 = 0;
              }
              uVar69 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              local_f8->visual_seed = uVar69;
              auVar198._4_4_ = (float)uVar123 * 2.3283064e-10;
              if ((auVar198._4_4_ != auVar362._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar362._0_4_))
                 ) {
                fVar208 = auVar207._0_4_;
                if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                  dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                  auVar324 = ZEXT1664(auVar219);
                  auVar309 = ZEXT1664(auVar317);
                  auVar327 = ZEXT1664(auVar258);
                  auVar357 = ZEXT1664(auVar362);
                  auVar332 = ZEXT1664(auVar178);
                  auVar336 = ZEXT1664(auVar294);
                  auVar346 = ZEXT1664(auVar370);
                  auVar350 = ZEXT1664(auVar207);
                  auVar353 = ZEXT1664(auVar360);
                  log();
                  auVar360 = auVar353._0_16_;
                  auVar207 = auVar350._0_16_;
                  auVar370 = auVar346._0_16_;
                  auVar294 = auVar336._0_16_;
                  auVar362 = auVar357._0_16_;
                  auVar219 = auVar324._0_16_;
                  auVar178 = auVar332._0_16_;
                  auVar258 = auVar327._0_16_;
                  auVar317 = auVar309._0_16_;
                  uVar106 = uVar106 | (ulonglong)(uint)(float)(dVar176 * auVar324._0_8_) << 0x20;
                  uVar123 = (ulonglong)local_f8->visual_seed;
                }
              }
              uVar69 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              local_f8->visual_seed = uVar69;
              auVar198._4_4_ = (float)uVar123 * 2.3283064e-10;
              if ((auVar198._4_4_ != auVar362._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar362._0_4_))
                 ) {
                fVar208 = auVar207._0_4_;
                uVar121 = 0;
                if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                  dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                  auVar324 = ZEXT1664(auVar219);
                  auVar309 = ZEXT1664(auVar317);
                  auVar327 = ZEXT1664(auVar258);
                  auVar357 = ZEXT1664(auVar362);
                  auVar332 = ZEXT1664(auVar178);
                  auVar336 = ZEXT1664(auVar294);
                  auVar346 = ZEXT1664(auVar370);
                  auVar350 = ZEXT1664(auVar207);
                  auVar353 = ZEXT1664(auVar360);
                  log();
                  auVar360 = auVar353._0_16_;
                  auVar207 = auVar350._0_16_;
                  auVar370 = auVar346._0_16_;
                  auVar294 = auVar336._0_16_;
                  auVar362 = auVar357._0_16_;
                  auVar219 = auVar324._0_16_;
                  auVar178 = auVar332._0_16_;
                  auVar258 = auVar327._0_16_;
                  auVar317 = auVar309._0_16_;
                  uVar121 = (ulonglong)(uint)(float)(dVar176 * auVar324._0_8_);
                  uVar123 = (ulonglong)local_f8->visual_seed;
                }
              }
              else {
                uVar121 = 0;
              }
              uVar69 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              local_f8->visual_seed = uVar69;
              auVar198._4_4_ = (float)uVar123 * 2.3283064e-10;
              if ((auVar198._4_4_ != auVar362._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar362._0_4_))
                 ) {
                fVar208 = auVar207._0_4_;
                if ((auVar198._4_4_ != fVar208) || (NAN(auVar198._4_4_) || NAN(fVar208))) {
                  dVar176 = (double)(auVar198._4_4_ / (fVar208 - auVar198._4_4_));
                  auVar324 = ZEXT1664(auVar219);
                  auVar309 = ZEXT1664(auVar317);
                  auVar327 = ZEXT1664(auVar258);
                  auVar357 = ZEXT1664(auVar362);
                  auVar332 = ZEXT1664(auVar178);
                  auVar336 = ZEXT1664(auVar294);
                  auVar346 = ZEXT1664(auVar370);
                  auVar350 = ZEXT1664(auVar207);
                  auVar353 = ZEXT1664(auVar360);
                  log();
                  auVar360 = auVar353._0_16_;
                  auVar207 = auVar350._0_16_;
                  auVar370 = auVar346._0_16_;
                  auVar294 = auVar336._0_16_;
                  auVar362 = auVar357._0_16_;
                  auVar219 = auVar324._0_16_;
                  auVar178 = auVar332._0_16_;
                  auVar258 = auVar327._0_16_;
                  auVar317 = auVar309._0_16_;
                  uVar121 = uVar121 | (ulonglong)(uint)(float)(dVar176 * auVar324._0_8_) << 0x20;
                  uVar123 = (ulonglong)local_f8->visual_seed;
                }
              }
              auVar198._4_4_ = (float)(uVar106 >> 0x20);
              rVar168 = (real_2_u_0_s_0)
                        (CONCAT44(auVar198._4_4_,auVar317._0_4_ + (float)uVar106) |
                        (ulonglong)(uint)(auVar258._0_4_ + auVar198._4_4_) << 0x20);
              uVar96 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar96 = uVar96 >> 0xf ^ uVar96;
              uVar69 = uVar96 * -0x7b935975;
              piVar160 = (int *)(CONCAT44(SUB84(piVar160,4),auVar178._0_4_ * (float)uVar121) |
                                (ulonglong)(uint)(auVar178._0_4_ * (float)(uVar121 >> 0x20)) << 0x20
                                );
              uVar96 = uVar96 * -0x63d2f291;
              uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
              uVar96 = uVar96 >> 0x10 ^ uVar96;
              local_f8->visual_seed = uVar96;
              iVar70 = (int)((float)uVar96 * 2.3283064e-10 * 10.0);
              if (iVar70 < 1) {
                iVar70 = 0;
              }
              if (8 < iVar70) {
                iVar70 = 9;
              }
              auVar324 = ZEXT1664(auVar219);
              auVar350 = ZEXT1664(auVar317);
              auVar353 = ZEXT1664(auVar258);
              auVar363 = ZEXT464((uint)((float)(uVar69 >> 0x10 ^ uVar69) * 2.3283064e-10 * 0.2));
              auVar309 = ZEXT1664(auVar362);
              auVar357 = ZEXT1664(auVar178);
              auVar332 = ZEXT1664(auVar294);
              auVar336 = ZEXT1664(auVar370);
              auVar346 = ZEXT1664(auVar207);
              auVar327 = ZEXT1664(auVar360);
              pvVar73 = TlsGetValue(tls_index);
              auVar198._4_4_ = auVar363._0_4_;
              if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles))
              {
                lVar133 = (longlong)w.max_particles;
                iVar136 = w.n_particles;
                if (w.max_particles <= w.n_particles) {
                  w.max_particles = w.max_particles * 2;
                  bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
                  auVar198._4_4_ = auVar363._0_4_;
                  iVar136 = w.n_particles;
                  if (!bVar170) goto LAB_1400d8842;
                }
                uVar122 = w.field119_0x3dc0.particles;
                w.n_particles = iVar136 + 1;
                w.field119_0x3dc0.particles[iVar136].type = 8;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x).field0_0x0._s_0 = rVar168;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_dot).field0_0x0._s_0 =
                     (real_2_u_0_s_0)piVar160;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0 =
                     (real_2_u_0)0x0;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->target = 0;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->r = 1.0;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->r_dot = auVar198._4_4_;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->time = 0;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->duration = iVar70 + 0xf;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color).field0_0x0.xy.
                field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                *(undefined8 *)
                 ((longlong)
                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_2.yz.
                   field0_0x0 + 4) = 0x3e19999a3f800000;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0.xy.
                field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                *(undefined8 *)
                 ((longlong)
                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0.
                   _s_2.yz.field0_0x0 + 4) = 0x3e19999a3f800000;
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_final =
                     (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->emission =
                     (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                *(undefined8 *)
                 ((longlong)
                  &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->emission).field0_0x0 + 0xd
                 ) = 0;
                (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0._s_0 =
                     rVar168;
              }
              else {
                uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                         *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
                uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                uVar96 = uVar96 >> 0x10 ^ uVar96;
                uVar69 = (uint)((float)uVar96 * 2.3283064e-10 * (float)w.n_particles);
                if ((int)(w.n_particles - 1U) < (int)uVar69) {
                  uVar69 = w.n_particles - 1U;
                }
                *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
                uVar123 = (ulonglong)uVar69;
                if ((int)uVar69 < 1) {
                  uVar123 = uVar109;
                }
                if (w.field119_0x3dc0.particles[uVar123].affects_gameplay == false) {
                  ppVar79 = w.field119_0x3dc0.particles + uVar123;
                  ppVar79->type = 8;
                  (ppVar79->x).field0_0x0._s_0 = rVar168;
                  (ppVar79->x_dot).field0_0x0._s_0 = (real_2_u_0_s_0)piVar160;
                  (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                  ppVar79->target = 0;
                  ppVar79->r = 1.0;
                  ppVar79->r_dot = auVar198._4_4_;
                  ppVar79->time = 0;
                  ppVar79->duration = iVar70 + 0xf;
                  (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
                  *(undefined8 *)((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
                       0x3e19999a3f800000;
                  (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000
                  ;
                  *(undefined8 *)
                   ((longlong)&(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
                       0x3e19999a3f800000;
                  ppVar79->color_final = (real_4)SUB3216(ZEXT832(0) << 0x20,0);
                  ppVar79->emission = (real_4)SUB3216(ZEXT832(0) << 0x20,0x10);
                  *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
                }
              }
LAB_1400d8842:
              fVar171 = auVar332._0_4_;
              auVar248._4_4_ = auVar248._4_4_ + -1;
            } while (auVar248._4_4_ != 0);
          }
          auVar248 = vandps_avx(ZEXT416((uint)plVar155->heat),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar198._4_4_ = w.camera_pos.field0_0x0._s_0.x - (plVar155->x).field0_0x0._s_0.x;
          fVar208 = w.camera_pos.field0_0x0._s_0.y - (plVar155->x).field0_0x0._s_0.y;
          auVar219 = vmaxss_avx(ZEXT416((uint)((fVar208 * fVar208 +
                                               auVar309._0_4_ + auVar198._4_4_ * auVar198._4_4_) *
                                              0.0001)),auVar346._0_16_);
          auVar332 = ZEXT464((uint)(fVar171 + (auVar248._0_4_ * 0.008) / auVar219._0_4_));
          auVar248._4_4_ = w.n_lasers;
        }
        auVar317 = auVar327._0_16_;
        auVar219 = auVar346._0_16_;
        auVar198 = auVar332._0_16_;
        peVar165 = (explosion_t *)((longlong)peVar165 + 1);
      } while ((longlong)peVar165 < (longlong)auVar248._4_4_);
    }
    auVar324 = ZEXT464((uint)((float)w.frame_number * 0.1));
    auVar309 = ZEXT1664(auVar198);
    auVar327 = ZEXT1664(auVar219);
    auVar357 = ZEXT1664(auVar317);
    cosf();
    if ((sounds.laser_loop != (looping_sound *)0x0) && (ac.initialized != false)) {
      auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                            ZEXT416((uint)(auVar309._0_4_ * (auVar324._0_4_ * 0.1 + 1.0))));
      auVar248 = vmaxss_avx(ZEXT816(0),auVar248);
      LOCK();
      ((sounds.laser_loop)->field4_0x20).next_target_volume_data = auVar248._0_4_;
      UNLOCK();
    }
    pvVar73 = TlsGetValue(tls_index);
    auVar324 = ZEXT464(0x40c00000);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    begin_trace_stage("floodfill bones");
    auVar317 = auVar357._0_16_;
    auVar219 = auVar327._0_16_;
    auVar248 = auVar324._0_16_;
    lVar133 = (longlong)w.bones.n_elements;
    if (0 < lVar133) {
      uVar109 = lVar133 + 1;
      lVar133 = lVar133 * 0x50;
      do {
        uVar102 = w.bones.field3_0x20.elements;
        uVar122 = w.bones.field0_0x0.index_table;
        pbVar103 = (bone *)((longlong)&w.bones.field3_0x20.elements[-1].id + lVar133);
        if (*(longlong *)((longlong)w.bones.field3_0x20.elements + lVar133 + -0x18) == 0) {
          auVar248._4_4_ = pbVar103->id;
          uVar123 = (longlong)w.bones.n_max_elements - 1U & (longlong)auVar248._4_4_;
          if (w.bones.field0_0x0.index_table[uVar123].id == auVar248._4_4_) {
            w.bones.field0_0x0.index_table[uVar123].id = 0;
            uVar102 = w.bones.field3_0x20.elements;
            lVar163 = (longlong)w.bones.n_elements + -1;
            w.bones.n_elements = (int)lVar163;
            auVar248._4_4_ = ((id_index *)(uVar122 + uVar123 * 8))->index;
            pbVar103 = w.bones.field3_0x20.elements + lVar163;
            iVar136 = pbVar103->id;
            fVar208 = pbVar103->mass;
            fVar171 = pbVar103->inertia;
            fVar334 = pbVar103->spacing;
            rVar112.field0_0x0 = (pbVar103->center_of_mass).field0_0x0;
            rVar90.field0_0x0 = (pbVar103->center_of_mass_dot).field0_0x0;
            pbVar103 = w.bones.field3_0x20.elements + lVar163;
            rVar77.field0_0x0 = (pbVar103->orientation).field0_0x0;
            auVar198._4_4_ = pbVar103->omega;
            iVar70 = pbVar103->n_cells;
            rVar139.field0_0x0 = (pbVar103->plan_center).field0_0x0;
            pcVar62 = pbVar103->first_cell;
            pbVar103 = w.bones.field3_0x20.elements + lVar163;
            pcVar84 = pbVar103->first_cell;
            pcVar33 = pbVar103->last_cell;
            uVar69 = pbVar103->merge_id;
            uVar131 = *(undefined4 *)&pbVar103->field_0x4c;
            pbVar5 = w.bones.field3_0x20.elements + auVar248._4_4_;
            pbVar5->plan_center = (real_2)(pbVar103->plan_center).field0_0x0;
            pbVar5->first_cell = pcVar84;
            pbVar5->last_cell = pcVar33;
            pbVar5->merge_id = uVar69;
            *(undefined4 *)&pbVar5->field_0x4c = uVar131;
            pbVar103 = (bone *)(uVar102 + (longlong)auVar248._4_4_ * 0x50);
            pbVar103->orientation = (real_2)rVar77.field0_0x0;
            pbVar103->omega = auVar198._4_4_;
            pbVar103->n_cells = iVar70;
            pbVar103->plan_center = (real_2)rVar139.field0_0x0;
            pbVar103->first_cell = pcVar62;
            pbVar103 = (bone *)(uVar102 + (longlong)auVar248._4_4_ * 0x50);
            pbVar103->id = iVar136;
            pbVar103->mass = fVar208;
            pbVar103->inertia = fVar171;
            pbVar103->spacing = fVar334;
            pbVar103->center_of_mass = (real_2)rVar112.field0_0x0;
            pbVar103->center_of_mass_dot = (real_2)rVar90.field0_0x0;
            auVar248._4_4_ = ((id_index *)(uVar122 + uVar123 * 8))->index;
            uVar123 = (longlong)w.bones.n_max_elements - 1U &
                      (longlong)w.bones.field3_0x20.elements[auVar248._4_4_].id;
            if (w.bones.field0_0x0.index_table[uVar123].id ==
                w.bones.field3_0x20.elements[auVar248._4_4_].id) {
              w.bones.field0_0x0.index_table[uVar123].index = auVar248._4_4_;
            }
          }
        }
        else if ((*(byte *)((longlong)w.bones.field3_0x20.elements + lVar133 + -4) & 1) != 0) {
          auVar324 = ZEXT1664(auVar324._0_16_);
          auVar327 = ZEXT1664(auVar327._0_16_);
          auVar357 = ZEXT1664(auVar357._0_16_);
          floodfill_bone(pbVar103);
          pbVar10 = (byte *)(uVar102 + lVar133 + -4);
          *pbVar10 = *pbVar10 & 0xfe;
        }
        auVar317 = auVar357._0_16_;
        auVar219 = auVar327._0_16_;
        auVar248 = auVar324._0_16_;
        uVar109 = uVar109 - 1;
        lVar133 = lVar133 + -0x50;
      } while (1 < uVar109);
    }
    auVar346 = ZEXT1664(auVar248);
    auVar336 = ZEXT1664(auVar219);
    auVar324 = ZEXT1664(auVar317);
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  begin_trace_stage("cell final update");
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("merge bones, make blood");
    if (0 < w.n_cells) {
      peVar165 = (explosion_t *)0x0;
      auVar198._4_4_ = 0.004166667;
      auVar309 = ZEXT464(0x3f800000);
      fVar208 = 0.0;
      fVar171 = 0.5;
      uVar122 = 0x3c23d70a3f800000;
      auVar327 = ZEXT1264(ZEXT812(0));
      dVar176 = 0.6266570687294006;
      uVar69 = 0;
      do {
        pcVar84 = (cell *)(w.field58_0x3a60.cells[uVar69 >> 4].field0_0x0.id_packed + (uVar69 & 0xf)
                          );
        if (w.field58_0x3a60.cells[uVar69 >> 4].field2_0x80.bone_id_packed[uVar69 & 0xf] != 0) {
          lVar133 = 0;
          do {
            lVar163 = *(longlong *)
                       ((ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0 +
                        ((ulonglong)pcVar84 & 0xffffffffffffffc0) + 0x15f0 + lVar133 * 8);
            if ((((lVar163 != 0) &&
                 ((1 << ((byte)lVar133 & 0x1f) & (pcVar84->field44_0x1000).flags & 0x3f) == 0)) &&
                (uVar96 = *(uint *)(lVar163 + 0x80), uVar96 != 0)) &&
               (uVar107 = (pcVar84->field2_0x80).bone_id, uVar107 != uVar96)) {
              uVar166 = uVar96;
              if ((int)uVar96 < (int)uVar107) {
                uVar166 = uVar107;
              }
              if ((int)uVar107 < (int)uVar96) {
                uVar96 = uVar107;
              }
              auVar248._4_4_ =
                   w.bones.field0_0x0.index_table[w.bones.n_max_elements + 0x7fffffffU & uVar166].
                   index;
              uVar102 = w.bones.field0_0x0.index_table;
              uVar158 = w.bones.field3_0x20.elements;
              iVar70 = w.bones.n_max_elements;
              while( true ) {
                uVar107 = ((bone *)(uVar158 + (longlong)auVar248._4_4_ * 0x50))->merge_id;
                if (uVar107 == 0) break;
                if ((int)uVar96 < (int)uVar107) {
                  ((bone *)(uVar158 + (longlong)auVar248._4_4_ * 0x50))->merge_id = uVar96;
                  uVar102 = w.bones.field0_0x0.index_table;
                  uVar158 = w.bones.field3_0x20.elements;
                  iVar70 = w.bones.n_max_elements;
                  uVar166 = uVar107;
                }
                else {
                  bVar170 = (int)uVar96 <= (int)uVar107;
                  uVar166 = uVar96;
                  uVar96 = uVar107;
                  if (bVar170) goto LAB_1400d8ff0;
                }
                auVar248._4_4_ =
                     ((id_index *)(uVar102 + (ulonglong)(iVar70 + 0x7fffffffU & uVar166) * 8))->
                     index;
              }
              ((bone *)(uVar158 + (longlong)auVar248._4_4_ * 0x50))->merge_id = uVar96;
            }
LAB_1400d8ff0:
            lVar133 = lVar133 + 1;
          } while (lVar133 != 6);
        }
        if ((*(byte *)((longlong)&materials_list[(pcVar84->field3_0xc0).material_index].field14_0x4c
                      + 1) & 4) == 0) {
          if ((*(byte *)((longlong)&pcVar84->field44_0x1000 + 1) & 0x80) != 0) {
            auVar248 = vminss_avx(ZEXT416((uint)(auVar198._4_4_ + (pcVar84->field55_0x12c0).rigidity
                                                )),auVar309._0_16_);
            (pcVar84->field55_0x12c0).rigidity = auVar248._0_4_;
            goto LAB_1400d9174;
          }
          (pcVar84->field55_0x12c0).rigidity = 0.0;
          uVar96 = (pcVar84->field2_0x80).bone_id;
          if (uVar96 != 0) {
            if (((0 < (int)uVar96) &&
                (uVar107 = w.bones.n_max_elements + 0x7fffffffU & uVar96,
                w.bones.field0_0x0.index_table[uVar107].id == uVar96)) &&
               (w.bones.field3_0x20.elements != (bone *)0x0)) {
              w.bones.field3_0x20.elements[w.bones.field0_0x0.index_table[uVar107].index].
              floodfill_needed = 1;
            }
            (pcVar84->field2_0x80).bone_id = 0;
          }
        }
        else {
          (pcVar84->field55_0x12c0).rigidity = 1.0;
LAB_1400d9174:
          make_cell_rigid(pcVar84);
        }
        auVar248 = vminss_avx(ZEXT416((uint)((pcVar84->field15_0x780).damage -
                                            (pcVar84->field16_0x7c0).bloodless_damage)),
                              ZEXT416(0x41200000));
        if (fVar208 < auVar248._0_4_) {
          auVar324 = ZEXT1264(ZEXT812(0));
          do {
            fVar334 = (pcVar84->field32_0xbc0).x;
            auVar336 = ZEXT464((uint)(pcVar84->field33_0xc00).y);
            uVar96 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
            uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
            uVar96 = uVar96 >> 0x10 ^ uVar96;
            uVar109 = (ulonglong)uVar96;
            local_f8->visual_seed = uVar96;
            fVar172 = (float)uVar109 * 2.3283064e-10;
            if ((fVar172 != fVar208) || (NAN(fVar172) || NAN(fVar208))) {
              fVar245 = auVar309._0_4_;
              uVar123 = 0;
              if ((fVar172 != fVar245) || (NAN(fVar172) || NAN(fVar245))) {
                dVar177 = (double)(fVar172 / (fVar245 - fVar172));
                log();
                uVar123 = (ulonglong)(uint)(float)(dVar176 * dVar177);
                uVar109 = (ulonglong)local_f8->visual_seed;
              }
            }
            else {
              uVar123 = 0;
            }
            uVar96 = ((uint)(uVar109 >> 0x10) ^ (uint)uVar109) * 0x7feb352d;
            uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
            uVar96 = uVar96 >> 0x10 ^ uVar96;
            local_f8->visual_seed = uVar96;
            fVar172 = (float)uVar96 * 2.3283064e-10;
            if ((fVar172 != fVar208) || (NAN(fVar172) || NAN(fVar208))) {
              fVar245 = auVar309._0_4_;
              if ((fVar172 != fVar245) || (NAN(fVar172) || NAN(fVar245))) {
                dVar177 = (double)(fVar172 / (fVar245 - fVar172));
                log();
                uVar123 = uVar123 | (ulonglong)(uint)(float)(dVar176 * dVar177) << 0x20;
              }
            }
            rVar162._s_0.y = fVar171 * (float)(uVar123 >> 0x20);
            rVar162._s_0.x = fVar171 * (float)uVar123;
            pvVar73 = TlsGetValue(tls_index);
            fVar172 = auVar324._0_4_;
            if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
              lVar133 = (longlong)w.max_particles;
              auVar248._4_4_ = w.n_particles;
              if (w.max_particles <= w.n_particles) {
                w.max_particles = w.max_particles * 2;
                bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
                fVar172 = auVar324._0_4_;
                auVar248._4_4_ = w.n_particles;
                if (!bVar170) goto LAB_1400d9235;
              }
              uVar102 = w.field119_0x3dc0.particles;
              w.n_particles = auVar248._4_4_ + 1;
              w.field119_0x3dc0.particles[auVar248._4_4_].type = 4;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x).field0_0x0._s_0.x =
                   fVar334;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x).field0_0x0._s_0.y =
                   auVar336._0_4_;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x_dot).field0_0x0 =
                   rVar162;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x_spawn).field0_0x0 =
                   (real_2_u_0)0x0;
              ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->target = 0;
              ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->r = (float)(int)uVar122;
              ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->r_dot =
                   (float)(int)((ulonglong)uVar122 >> 0x20);
              ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->time = 0;
              ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->duration = 0x78;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color).field0_0x0.xy.
              field0_0x0 = (real_2_u_0)0x3e800000;
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color).field0_0x0.
                 _s_2.yz.field0_0x0 + 4) = 0x3f80000000000000;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_initial).
              field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e800000;
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_initial).
                 field0_0x0._s_2.yz.field0_0x0 + 4) = 0x3f80000000000000;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_final).field0_0x0.
              xy.field0_0x0 = (real_2_u_0)0x3e800000;
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_final).
                 field0_0x0._s_2.yz.field0_0x0 + 4) = 0;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->emission).field0_0x0 =
                   auVar327._0_16_;
              *(undefined8 *)
               ((longlong)
                &(((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->emission).field0_0x0
               + 0xd) = 0;
              (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x_spawn).field0_0x0 =
                   (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x).field0_0x0;
            }
            else {
              uVar96 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                       *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
              uVar107 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
              uVar107 = uVar107 >> 0x10 ^ uVar107;
              uVar96 = (uint)((float)uVar107 * 2.3283064e-10 * (float)w.n_particles);
              if ((int)(w.n_particles - 1U) < (int)uVar96) {
                uVar96 = w.n_particles - 1U;
              }
              *(uint *)((longlong)pvVar73 + 0x6c) = uVar107;
              uVar109 = (ulonglong)uVar96;
              if ((int)uVar96 < 1) {
                uVar109 = 0;
              }
              if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
                ppVar79 = w.field119_0x3dc0.particles + uVar109;
                ppVar79->type = 4;
                (ppVar79->x).field0_0x0._s_0.x = fVar334;
                (ppVar79->x).field0_0x0._s_0.y = auVar336._0_4_;
                (ppVar79->x_dot).field0_0x0 = rVar162;
                (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
                ppVar79->target = 0;
                ppVar79->r = (float)(int)uVar122;
                ppVar79->r_dot = (float)(int)((ulonglong)uVar122 >> 0x20);
                ppVar79->time = 0;
                ppVar79->duration = 0x78;
                (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e800000;
                *(undefined8 *)((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
                     0x3f80000000000000;
                (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e800000;
                *(undefined8 *)
                 ((longlong)&(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
                     0x3f80000000000000;
                (ppVar79->color_final).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e800000;
                *(undefined8 *)((longlong)&(ppVar79->color_final).field0_0x0._s_2.yz.field0_0x0 + 4)
                     = 0;
                (ppVar79->emission).field0_0x0 = auVar327._0_16_;
                *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
              }
            }
LAB_1400d9235:
            auVar324 = ZEXT464((uint)(fVar172 + fVar171));
            auVar248 = vminss_avx(ZEXT416((uint)((pcVar84->field15_0x780).damage -
                                                (pcVar84->field16_0x7c0).bloodless_damage)),
                                  ZEXT416(0x41200000));
          } while (fVar172 + fVar171 < auVar248._0_4_);
        }
        uVar69 = uVar69 + 1;
        auVar324 = ZEXT464((uint)local_120._0_4_);
      } while ((int)uVar69 < w.n_cells);
    }
    pvVar73 = TlsGetValue(tls_index);
    auVar346 = ZEXT464(0x40c00000);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  begin_trace_stage("calculate other body stats from cells");
  auVar248._4_4_ = (local_f8->field0_0x0)._s_0.lane_index;
  iVar70 = ((local_f8->field0_0x0)._s_0.group)->n_lanes;
  iVar136 = (w.bodies.n_elements * auVar248._4_4_) / iVar70;
  iVar70 = ((auVar248._4_4_ + 1) * w.bodies.n_elements) / iVar70;
  local_168._0_4_ = iVar70;
  if (iVar136 < iVar70) {
    puVar92 = (undefined1 *)(longlong)iVar136;
    auVar309 = ZEXT1264(ZEXT812(0));
    auVar327 = ZEXT464(0x44700000);
    auVar357 = ZEXT464(0x3f800000);
    dVar176 = 0.6266570687294006;
    auVar198._4_4_ = 3.1415927;
    pcVar72 = local_f8;
    do {
      local_1b8.x = SUB84(puVar92,0);
      local_1b8.y = (float)((ulonglong)puVar92 >> 0x20);
      lVar133 = (longlong)puVar92 * 0x2d0;
      pcVar84 = w.bodies.field3_0x20.elements[(longlong)puVar92].first_cell;
      if (pcVar84 != (cell *)0x0) {
        pbVar93 = w.bodies.field3_0x20.elements + (longlong)puVar92;
        do {
          pbVar93->n_cells = pbVar93->n_cells + 1;
          fVar208 = (pcVar84->field31_0xb80).mass * (pcVar84->field33_0xc00).y +
                    (pbVar93->center_of_mass).field0_0x0._s_0.y;
          rVar78 = (real_2_u_0_s_0)
                   (CONCAT44((int)((ulonglong)lVar133 >> 0x20),
                             (pcVar84->field31_0xb80).mass * (pcVar84->field32_0xbc0).x +
                             (pbVar93->center_of_mass).field0_0x0._s_0.x) |
                   (ulonglong)(uint)fVar208 << 0x20);
          (pbVar93->center_of_mass).field0_0x0._s_0 = rVar78;
          (pbVar93->center_of_mass_dot).field0_0x0 =
               (real_2_u_0)
               (CONCAT44(rVar78.y,(pcVar84->field31_0xb80).mass * (pcVar84->field34_0xc40).x_dot +
                                  (pbVar93->center_of_mass_dot).field0_0x0._s_0.x) |
               CONCAT44(fVar208,(pcVar84->field31_0xb80).mass * (pcVar84->field35_0xc80).y_dot +
                                (pbVar93->center_of_mass_dot).field0_0x0._s_0.y) << 0x20);
          pbVar93->avg_shock = (pcVar84->field10_0x640).shock + pbVar93->avg_shock;
          pbVar93->avg_temperature = (pcVar84->field11_0x680).temperature + pbVar93->avg_temperature
          ;
          pbVar93->avg_phasing = (pcVar84->field52_0x1200).phasing + pbVar93->avg_phasing;
          fVar208 = (pcVar84->field32_0xbc0).x - w.camera_pos.field0_0x0._s_0.x;
          fVar171 = (pcVar84->field33_0xc00).y - w.camera_pos.field0_0x0._s_0.y;
          auVar248 = vmaxss_avx(SUB6416(ZEXT464(0x447a0000),0),ZEXT416((uint)w.vision_radius));
          if (fVar171 * fVar171 + auVar309._0_4_ + fVar208 * fVar208 <
              auVar248._0_4_ * auVar248._0_4_) {
            pbVar93->unload = 0;
          }
          if (auVar309._0_4_ <= (pcVar84->field14_0x740).health) {
            pbVar93->health = (pcVar84->field14_0x740).health + pbVar93->health;
            auVar248 = ZEXT416((uint)((auVar198._4_4_ * (float)(pbVar93->plan).half_hex_rotation) /
                                     auVar346._0_4_));
            auVar350 = ZEXT1664(auVar248);
            auVar332 = ZEXT1664(auVar248);
            cosf();
            auVar346 = ZEXT1664(auVar332._0_16_);
            auVar332 = ZEXT1664(auVar350._0_16_);
            sinf();
            auVar248._4_4_ = (pcVar84->field3_0xc0).material_index;
            fVar208 = (auVar357._0_4_ - pbVar93->cost_discount) *
                      (float)materials_list[auVar248._4_4_].spawn_with
                             [(ulonglong)
                              (w.field55_0x3a28.body_auxiliary_data
                               [(longlong)mut_random_costs_index +
                                ((longlong)pbVar93 - w.bodies.field3_0x20._0_8_ >> 4) *
                                (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5] != '\0') + 4];
            if (pbVar93->id == w.selected_body) {
              auVar266._0_4_ = (float)w.em.cell_item_counts[auVar248._4_4_];
              auVar266._4_12_ = auVar336._4_12_;
              auVar219 = vmaxss_avx(auVar357._0_16_,auVar266);
              fVar208 = fVar208 / auVar219._0_4_;
            }
            fVar171 = fVar208 * ((pcVar84->field36_0xcc0).rot_x * auVar332._0_4_ +
                                auVar346._0_4_ * (pcVar84->field37_0xd00).rot_y) +
                      (pbVar93->orientation).field0_0x0._s_0.y;
            rVar78 = (real_2_u_0_s_0)
                     (CONCAT44(auVar248._4_4_ >> 0x1f,
                               fVar208 * ((pcVar84->field36_0xcc0).rot_x * auVar346._0_4_ -
                                         (pcVar84->field37_0xd00).rot_y * auVar332._0_4_) +
                               (pbVar93->orientation).field0_0x0._s_0.x) |
                     (ulonglong)(uint)fVar171 << 0x20);
            (pbVar93->orientation).field0_0x0._s_0 = rVar78;
            auVar346 = ZEXT464(0x40c00000);
            pcVar72 = local_f8;
            if (auVar357._0_4_ <= (pcVar84->field13_0x700).maturity) {
              pbVar93->cell_cost = fVar208 + pbVar93->cell_cost;
              (pbVar93->cost_centroid).field0_0x0 =
                   (real_2_u_0)
                   (CONCAT44(rVar78.y,fVar208 * (pcVar84->field32_0xbc0).x +
                                      (pbVar93->cost_centroid).field0_0x0._s_0.x) |
                   CONCAT44(fVar171,fVar208 * (pcVar84->field33_0xc00).y +
                                    (pbVar93->cost_centroid).field0_0x0._s_0.y) << 0x20);
            }
          }
          pbVar93->wall_force = (pcVar84->field49_0x1140).wall_force + pbVar93->wall_force;
          *(uint *)&pbVar93->field_0x98 =
               *(uint *)&pbVar93->field_0x98 | (pcVar84->field44_0x1000).flags >> 5 & 0x1000;
          uVar109 = (ulonglong)pcVar84 & 0xffffffffffffffc0;
          peVar165 = (explosion_t *)((ulonglong)((uint)((ulonglong)pcVar84 >> 2) & 0xf) * 0xb0);
          if (*(float *)(uVar109 + 0x15d0 + (longlong)peVar165) < (pbVar93->nearest_wall).dist) {
            lVar133 = uVar109 + (longlong)peVar165;
            *(undefined8 *)((longlong)&(pbVar93->nearest_wall).flow.field0_0x0 + 4) =
                 *(undefined8 *)(lVar133 + 0x15e0);
            uVar122 = *(undefined8 *)(lVar133 + 0x15d8);
            *(undefined8 *)&pbVar93->nearest_wall = *(undefined8 *)(lVar133 + 0x15d0);
            *(undefined8 *)((longlong)&(pbVar93->nearest_wall).gradient.field0_0x0 + 4) = uVar122;
          }
          fVar208 = auVar309._0_4_;
          if (fVar208 < (pcVar84->field15_0x780).damage) {
            auVar248 = vminss_avx(auVar327._0_16_,
                                  ZEXT416((uint)(auVar327._0_4_ *
                                                 (pcVar84->field15_0x780).damage * 0.01 +
                                                pbVar93->damage_timer)));
            auVar248 = vmaxss_avx(auVar309._0_16_,auVar248);
            pbVar93->damage_timer = auVar248._0_4_;
            pbVar93->damage = (pcVar84->field15_0x780).damage + pbVar93->damage;
            if (pbVar93->id == w.selected_body) {
              uVar69 = (pcVar72->visual_seed >> 0x10 ^ pcVar72->visual_seed) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              uVar123 = (ulonglong)uVar69;
              pcVar72->visual_seed = uVar69;
              fVar171 = (float)uVar123 * 2.3283064e-10;
              if ((fVar171 != fVar208) || (NAN(fVar171) || NAN(fVar208))) {
                fVar208 = auVar357._0_4_;
                uVar106 = 0;
                if ((fVar171 != fVar208) || (NAN(fVar171) || NAN(fVar208))) {
                  dVar177 = (double)(fVar171 / (fVar208 - fVar171));
                  log();
                  uVar106 = (ulonglong)(uint)(float)(dVar176 * dVar177);
                  uVar123 = (ulonglong)local_f8->visual_seed;
                  pcVar72 = local_f8;
                }
              }
              else {
                uVar106 = 0;
              }
              uVar69 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar123 = 0;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              pcVar72->visual_seed = uVar69;
              fVar208 = (float)uVar69 * 2.3283064e-10;
              if ((fVar208 != auVar309._0_4_) || (NAN(fVar208) || NAN(auVar309._0_4_))) {
                fVar171 = auVar357._0_4_;
                if ((fVar208 != fVar171) || (NAN(fVar208) || NAN(fVar171))) {
                  dVar177 = (double)(fVar208 / (fVar171 - fVar208));
                  log();
                  uVar123 = (ulonglong)(uint)(float)(dVar176 * dVar177) << 0x20;
                  uVar106 = uVar106 | uVar123;
                  pcVar72 = local_f8;
                }
              }
              fVar208 = (pcVar84->field15_0x780).damage -
                        (pcVar84->field17_0x800).screenshakeless_damage;
              w.screenshake.field0_0x0 =
                   (real_2_u_0)
                   (CONCAT44((int)(uVar123 >> 0x20),
                             fVar208 * (float)uVar106 + w.screenshake.field0_0x0._s_0.x) |
                   (ulonglong)
                   (uint)(fVar208 * (float)(uVar106 >> 0x20) + w.screenshake.field0_0x0._s_0.y) <<
                   0x20);
            }
          }
          pbVar93->healing = (pcVar84->field20_0x8c0).healing + pbVar93->healing;
          if ((pcVar84->field18_0x840).burn_damage <= auVar309._0_4_) {
            fVar208 = (pcVar84->field24_0x9c0).poison;
          }
          else {
            pbVar93->burn_damage = (pcVar84->field18_0x840).burn_damage + pbVar93->burn_damage;
            fVar208 = (pcVar84->field24_0x9c0).poison;
          }
          if (auVar309._0_4_ < fVar208) {
            pbVar93->poison_damage = fVar208 * 0.05 + pbVar93->poison_damage;
          }
          lVar133 = uVar109 + (longlong)peVar165 + 0x1580;
          pcVar84 = *(cell **)(uVar109 + (longlong)peVar165 + 0x1620);
        } while (pcVar84 != (cell *)0x0);
      }
      puVar92 = (undefined1 *)((longlong)&((material_t *)local_1b8)->id + 1);
    } while (local_168._0_4_ != (int)puVar92);
  }
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  pvVar73 = TlsGetValue(tls_index);
  if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
    QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
    QueryPerformanceCounter(local_118);
    *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
         (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
    *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
  }
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    begin_trace_stage("update body stats");
    lVar133 = (longlong)w.bodies.n_elements;
    if (0 < lVar133) {
      lVar163 = (longlong)local_230;
      local_1b8.x = (float)local_234;
      local_1b8.y = (float)(local_234 >> 0x1f);
      uVar109 = lVar133 + 1;
      auVar309 = ZEXT464(0x3f800000);
      auVar327 = ZEXT1264(ZEXT812(0));
      auVar198._4_4_ = -1.1;
      fVar208 = -0.1;
      fVar172 = 2.3283064e-10;
      fVar171 = 2.3283064e-10;
      fVar334 = 2.3283064e-10;
      fVar245 = 2.3283064e-10;
      fVar333 = 0.008333334;
      fVar303 = 6.0;
      fVar347 = 0.0;
      fVar173 = 0.0;
      fVar279 = 0.0;
      fVar108 = -3.0;
      fVar351 = 0.0;
      fVar354 = 0.0;
      fVar359 = 0.5;
      fVar365 = -0.25;
      lVar133 = lVar133 * 0x2d0;
      do {
        uVar122 = w.bodies.field3_0x20.elements;
        fVar246 = auVar309._0_4_;
        *(float *)((longlong)w.bodies.field3_0x20.elements + lVar133 + -0x25c) =
             fVar246 + *(float *)((longlong)w.bodies.field3_0x20.elements + lVar133 + -0x25c);
        uVar69 = *(uint *)(uVar122 + lVar133 + -0x238);
        if ((((uVar69 & 0x40) != 0) ||
            (lVar110 = (uVar122 + ((lVar133 + -0x2d0) - w.bodies.field3_0x20._0_8_) >> 4) *
                       (longlong)w.body_auxiliary_size * 0x4fa4fa4fa4fa4fa5,
            w.field55_0x3a28.body_auxiliary_data[lVar163 + lVar110] != '\0')) ||
           (w.field55_0x3a28.body_auxiliary_data[CONCAT44(local_1b8.y,local_1b8.x) + lVar110] !=
            '\0')) {
          *(undefined4 *)(uVar122 + lVar133 + -0x1e4) = 0;
        }
        pbVar93 = (body *)((longlong)&((body *)(uVar122 + -0x2d0))->id + lVar133);
        fVar175 = auVar327._0_4_;
        if ((uVar69 & 1) == 0) {
          if (((char)uVar69 < '\0') || (*(float *)(uVar122 + lVar133 + -0x1ec) < fVar175)) {
            delete_body(pbVar93);
            uVar69 = *(uint *)(uVar122 + lVar133 + -0x238);
          }
          if ((uVar69 & 0x100) != 0) {
            handle_body_death(pbVar93);
LAB_1400da2e8:
            delete_body(pbVar93);
          }
        }
        else {
          if (fVar175 < *(float *)(uVar122 + lVar133 + -0x1fc)) {
            fVar174 = *(float *)(uVar122 + lVar133 + -0x1f8);
            fVar36 = fVar174 * *(float *)(uVar122 + lVar133 + -0x21c);
            *(ulonglong *)(uVar122 + lVar133 + -0x220) =
                 CONCAT44(fVar36,fVar174 * *(float *)(uVar122 + lVar133 + -0x220));
            *(ulonglong *)(uVar122 + lVar133 + -0x210) =
                 CONCAT44(fVar36,fVar174 * *(float *)(uVar122 + lVar133 + -0x210)) |
                 CONCAT44(fVar36,fVar174 * *(float *)(uVar122 + lVar133 + -0x20c)) << 0x20;
          }
          auVar248._4_4_ = *(int *)(uVar122 + lVar133 + -0x224);
          if (0 < auVar248._4_4_) {
            auVar206._0_4_ = fVar246 / (float)auVar248._4_4_;
            auVar206._4_12_ = auVar309._4_12_;
            uVar102 = *(undefined8 *)(uVar122 + lVar133 + -0x1a8);
            auVar248 = vmovsldup_avx(auVar206);
            auVar232._0_4_ = auVar248._0_4_ * (float)uVar102;
            auVar232._4_4_ = auVar248._4_4_ * (float)((ulonglong)uVar102 >> 0x20);
            auVar232._8_4_ = auVar248._8_4_ * 0.0;
            auVar232._12_4_ = auVar248._12_4_ * 0.0;
            uVar102 = vmovlps_avx(auVar232);
            *(undefined8 *)(uVar122 + lVar133 + -0x1a8) = uVar102;
            *(float *)(uVar122 + lVar133 + -0x230) =
                 auVar206._0_4_ * *(float *)(uVar122 + lVar133 + -0x230);
          }
          fVar174 = *(float *)(uVar122 + lVar133 + -500);
          if (fVar174 <= fVar175) {
            uVar102 = *(undefined8 *)(uVar122 + lVar133 + -0x220);
          }
          else {
            fVar174 = fVar246 / fVar174;
            uVar102 = CONCAT44(fVar174 * *(float *)(uVar122 + lVar133 + -0x1d0),
                               fVar174 * *(float *)(uVar122 + lVar133 + -0x1d4));
          }
          *(undefined8 *)(uVar122 + lVar133 + -0x1d4) = uVar102;
          fVar174 = *(float *)(uVar122 + lVar133 + -0x1cc);
          fVar36 = *(float *)(uVar122 + lVar133 + -0x1c8);
          fVar175 = fVar36 * fVar36 + fVar174 * fVar174 + fVar175;
          if (fVar175 <= 1e-06) {
            peVar165 = (explosion_t *)0x0;
          }
          else {
            auVar248 = vsqrtss_avx(ZEXT416((uint)fVar175),ZEXT416((uint)fVar175));
            fVar246 = fVar246 / auVar248._0_4_;
            peVar165 = (explosion_t *)
                       (CONCAT44(SUB84(peVar165,4),fVar246 * fVar174) |
                       (ulonglong)(uint)(fVar246 * fVar36) << 0x20);
          }
          ((real_2_u_0 *)(uVar122 + lVar133 + -0x1cc))->_s_0 = (real_2_u_0_s_0)peVar165;
          fVar246 = *(float *)(uVar122 + lVar133 + -0x1c4);
          fVar175 = *(float *)(uVar122 + lVar133 + -0x1c0);
          dVar176 = atan2((double)(SUB84(peVar165,4) * fVar246 - SUB84(peVar165,0) * fVar175),
                          (double)(SUB84(peVar165,0) * fVar246 + SUB84(peVar165,4) * fVar175));
          *(float *)(uVar122 + lVar133 + -0x1bc) = (float)dVar176;
          ((real_2_u_0 *)(uVar122 + lVar133 + -0x1c4))->_s_0 = (real_2_u_0_s_0)peVar165;
          uVar69 = *(uint *)(uVar122 + lVar133 + -0x238);
          fVar246 = auVar327._0_4_;
          if ((uVar69 & 0x400) != 0) {
            fVar175 = *(float *)(uVar122 + lVar133 + -0x1e8);
            *(float *)(uVar122 + lVar133 + -0x19c) =
                 fVar175 + *(float *)(uVar122 + lVar133 + -0x19c);
            if (fVar175 <= fVar246) {
              fVar175 = fVar365 + *(float *)(uVar122 + lVar133 + -0x198);
              *(float *)(uVar122 + lVar133 + -0x198) = fVar175;
              if (fVar175 <= fVar246) {
                *(undefined8 *)(uVar122 + lVar133 + -0x19c) = 0;
              }
            }
            else {
              *(undefined4 *)(uVar122 + lVar133 + -0x198) = 0x42f00000;
            }
          }
          fVar175 = fVar208 + auVar198._4_4_ * *(float *)(uVar122 + lVar133 + -0x1ac) +
                              *(float *)(uVar122 + lVar133 + -0x1b0);
          if (((fVar246 < fVar175) && ((uVar69 & 4) == 0)) && (w.game_mode != 0)) {
            fVar174 = w.camera_pos.field0_0x0._s_0.x - *(float *)(uVar122 + lVar133 + -0x220);
            fVar36 = w.camera_pos.field0_0x0._s_0.y - *(float *)(uVar122 + lVar133 + -0x21c);
            uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
            uVar69 = uVar69 >> 0xf ^ uVar69;
            uVar96 = uVar69 * -0x63d2f291;
            uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
            uVar69 = uVar69 * -0x7b935975;
            uVar96 = uVar96 >> 0x10 ^ uVar96;
            auVar290._0_4_ = (float)uVar96;
            auVar290._4_12_ = auVar324._4_12_;
            auVar302._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
            auVar302._4_12_ = auVar324._4_12_;
            auVar248 = vinsertps_avx(auVar302,auVar290,0x10);
            local_f8->visual_seed = uVar96;
            pqVar63 = ac.queued_sounds;
            auVar233._0_4_ = fVar279 + fVar333 * fVar171 * auVar248._0_4_;
            auVar233._4_4_ = fVar108 + fVar303 * fVar334 * auVar248._4_4_;
            auVar233._8_4_ = fVar351 + fVar347 * fVar172 * auVar248._8_4_;
            auVar233._12_4_ = fVar354 + fVar173 * fVar245 * auVar248._12_4_;
            if ((ac.initialized == true) && (0 < sounds.collision.n_samples)) {
              auVar219 = vminss_avx(ZEXT416((uint)fVar175),auVar309._0_16_);
              auVar248 = vmaxss_avx(ZEXT416((uint)((fVar36 * fVar36 + fVar174 * fVar174 + fVar246) *
                                                  0.0001)),auVar309._0_16_);
              fVar175 = auVar219._0_4_ / auVar248._0_4_;
              if ((0.001 <= fVar175) &&
                 ((sounds.collision.data != (short *)0x0 &&
                  (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
                uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
                ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb0e0;
                pqVar63[(int)uVar69].params.volume = fVar175;
                uVar102 = vmovlps_avx(auVar233);
                pqVar63[(int)uVar69].params.delay = (float)(int)uVar102;
                pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar102 >> 0x20);
                *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20
                ;
                *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
                LOCK();
                ac.last_queued_sound = ac.last_queued_sound + 1;
                UNLOCK();
              }
            }
          }
          fVar175 = *(float *)(uVar122 + lVar133 + -500);
          auVar248 = vmaxss_avx(ZEXT416(*(uint *)(uVar122 + lVar133 + -0x1f0)),
                                ZEXT416((uint)fVar175));
          auVar248 = vminss_avx(ZEXT416(*(uint *)(uVar122 + lVar133 + -0x260)),auVar248);
          auVar248 = vmaxss_avx(auVar327._0_16_,auVar248);
          fVar174 = auVar248._0_4_;
          *(float *)(uVar122 + lVar133 + -0x1f0) = fVar174;
          auVar248._4_4_ = *(int *)(uVar122 + lVar133 + -0x224);
          if ((((0 < auVar248._4_4_) && ((*(byte *)(uVar122 + lVar133 + -0x238) & 0x80) == 0)) &&
              (((fVar359 * fVar174 <= fVar175 + *(float *)(uVar122 + lVar133 + -0x1ec) ||
                (*(float *)(uVar122 + lVar133 + -0x1e8) <= fVar246)) ||
               (((*(longlong *)(uVar122 + lVar133 + -0x270) != 0 &&
                 ((w.final_boss.field0_0x0.active_flags & 1) != 0)) &&
                (fVar246 < w.final_boss.health)))))) || (*(int *)(uVar122 + lVar133 + -0x278) != 0))
          {
            if (((*(int *)(uVar122 + lVar133 + -0x278) == -1) &&
                ((*(byte *)(uVar122 + lVar133 + -0x238) & 0x80) == 0)) &&
               ((*(longlong *)(uVar122 + lVar133 + -0x270) == 0 &&
                (fVar174 * 0.55 < fVar175 + *(float *)(uVar122 + lVar133 + -0x1ec))))) {
              *(undefined4 *)(uVar122 + lVar133 + -0x278) = 0;
            }
            if (auVar248._4_4_ < 1) goto LAB_1400da2e8;
          }
          else {
            handle_body_death(pbVar93);
          }
        }
        uVar109 = uVar109 - 1;
        lVar133 = lVar133 + -0x2d0;
      } while (1 < uVar109);
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
    auVar358 = auVar324._4_12_;
    if (0.0 < w.jet_volume) {
      auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)w.jet_volume));
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if ((((0.001 <= auVar248._0_4_) && (ac.initialized != false)) && (0 < sounds.bubble.n_samples)
          ) && ((sounds.bubble.data != (short *)0x0 &&
                (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
        uVar69 = uVar69 * -0x7b935975;
        auVar267._0_4_ = (float)uVar96;
        auVar267._4_12_ = auVar358;
        auVar291._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
        auVar291._4_12_ = auVar358;
        auVar219 = vinsertps_avx(auVar291,auVar267,0x10);
        auVar268._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
        auVar268._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 6.0 + -3.0;
        auVar268._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
        auVar268._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
        uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb0f0;
        pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
        uVar122 = vmovlps_avx(auVar268);
        pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
        pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
        *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
        *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
    }
    if (0.0 < w.acid_volume) {
      auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)w.acid_volume));
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if (((0.001 <= auVar248._0_4_) && (ac.initialized != false)) &&
         ((0 < sounds.acid_spray.n_samples &&
          ((sounds.acid_spray.data != (short *)0x0 &&
           (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))))) {
        uVar69 = uVar69 * -0x7b935975;
        auVar234._0_4_ = (float)uVar96;
        auVar234._4_12_ = auVar358;
        auVar269._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
        auVar269._4_12_ = auVar358;
        auVar219 = vinsertps_avx(auVar269,auVar234,0x10);
        auVar235._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
        auVar235._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 6.0 + -3.0;
        auVar235._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
        auVar235._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
        uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb1f0;
        pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
        uVar122 = vmovlps_avx(auVar235);
        pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
        pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
        *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
        *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
    }
    if (0.0 < w.ink_volume) {
      auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)w.ink_volume));
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if ((((0.001 <= auVar248._0_4_) && (ac.initialized != false)) &&
          (0 < sounds.ink_spray.n_samples)) &&
         ((sounds.ink_spray.data != (short *)0x0 &&
          (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
        uVar69 = uVar69 * -0x7b935975;
        auVar270._0_4_ = (float)uVar96;
        auVar270._4_12_ = auVar358;
        auVar292._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
        auVar292._4_12_ = auVar358;
        auVar219 = vinsertps_avx(auVar292,auVar270,0x10);
        auVar271._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
        auVar271._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 6.0 + -3.0;
        auVar271._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
        auVar271._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
        uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb200;
        pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
        uVar122 = vmovlps_avx(auVar271);
        pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
        pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
        *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
        *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
    }
    if (0.0 < w.vacuum_volume) {
      auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f000000),0),ZEXT416((uint)w.vacuum_volume));
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if (((0.001 <= auVar248._0_4_) && (ac.initialized != false)) &&
         ((0 < sounds.vacuum.n_samples &&
          ((sounds.vacuum.data != (short *)0x0 &&
           (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))))) {
        uVar69 = uVar69 * -0x7b935975;
        auVar236._0_4_ = (float)uVar96;
        auVar236._4_12_ = auVar358;
        auVar272._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
        auVar272._4_12_ = auVar358;
        auVar219 = vinsertps_avx(auVar272,auVar236,0x10);
        auVar237._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
        auVar237._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 6.0 + -3.0;
        auVar237._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
        auVar237._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
        uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb210;
        pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
        uVar122 = vmovlps_avx(auVar237);
        pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
        pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
        *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
        *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
    }
    if (0.0 < w.xp_volume) {
      auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)w.xp_volume));
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if ((((0.001 <= auVar248._0_4_) && (ac.initialized != false)) &&
          (0 < sounds.xp_tick.n_samples)) &&
         ((sounds.xp_tick.data != (short *)0x0 &&
          (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
        uVar69 = uVar69 * -0x7b935975;
        auVar273._0_4_ = (float)uVar96;
        auVar273._4_12_ = auVar358;
        auVar293._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
        auVar293._4_12_ = auVar358;
        auVar219 = vinsertps_avx(auVar293,auVar273,0x10);
        auVar274._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
        auVar274._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 2.0 + -1.0;
        auVar274._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
        auVar274._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
        uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
        ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb1c0;
        pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
        uVar122 = vmovlps_avx(auVar274);
        pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
        pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
        *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
        *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
        LOCK();
        ac.last_queued_sound = ac.last_queued_sound + 1;
        UNLOCK();
      }
    }
    if (0.0 < auVar324._0_4_) {
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if ((ac.initialized == true) && (0 < sounds.sizzle.n_samples)) {
        auVar248 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),auVar324._0_16_);
        if ((0.001 <= auVar248._0_4_) &&
           ((sounds.sizzle.data != (short *)0x0 &&
            (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
          uVar69 = uVar69 * -0x7b935975;
          auVar238._0_4_ = (float)uVar96;
          auVar238._4_8_ = SUB128(ZEXT812(0),4);
          auVar238._12_4_ = 0;
          auVar324 = ZEXT464(0) << 0x20;
          auVar219 = vinsertps_avx(ZEXT416((uint)(float)(uVar69 >> 0x10 ^ uVar69)),auVar238,0x10);
          auVar239._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
          auVar239._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 4.0 + -2.0;
          auVar239._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
          auVar239._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
          uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb190;
          pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
          uVar122 = vmovlps_avx(auVar239);
          pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
          pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
          *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
          *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
    }
    auVar372 = auVar324._4_12_;
    if (0.0 < local_28c) {
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if ((ac.initialized == true) && (0 < sounds.shatter.n_samples)) {
        auVar248 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),ZEXT416((uint)local_28c));
        if ((0.001 <= auVar248._0_4_) &&
           ((sounds.shatter.data != (short *)0x0 &&
            (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
          uVar69 = uVar69 * -0x7b935975;
          auVar275._0_4_ = (float)uVar96;
          auVar275._4_8_ = SUB128(ZEXT812(0),4);
          auVar275._12_4_ = 0;
          auVar372 = ZEXT412(0);
          auVar219 = vinsertps_avx(ZEXT416((uint)(float)(uVar69 >> 0x10 ^ uVar69)),auVar275,0x10);
          auVar276._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
          auVar276._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 4.0 + -2.0;
          auVar276._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
          auVar276._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
          uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb1a0;
          pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
          uVar122 = vmovlps_avx(auVar276);
          pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
          pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
          *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
          *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
    }
    if (0.0 < local_218) {
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if ((ac.initialized == true) && (0 < sounds.spike.n_samples)) {
        auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)local_218));
        if ((0.001 <= auVar248._0_4_) &&
           ((sounds.spike.data != (short *)0x0 &&
            (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
          uVar69 = uVar69 * -0x7b935975;
          uVar109 = SUB128(ZEXT812(0),4);
          auVar372._8_4_ = 0;
          auVar372._0_8_ = uVar109;
          auVar240._0_4_ = (float)uVar96;
          auVar240._4_8_ = uVar109;
          auVar240._12_4_ = 0;
          auVar277._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
          auVar277._4_8_ = uVar109;
          auVar277._12_4_ = 0;
          auVar219 = vinsertps_avx(auVar277,auVar240,0x10);
          auVar241._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
          auVar241._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 6.0 + -3.0;
          auVar241._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
          auVar241._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
          uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb220;
          pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
          uVar122 = vmovlps_avx(auVar241);
          pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
          pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
          *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
          *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
    }
    if (0.0 < local_214) {
      uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
      uVar69 = uVar69 >> 0xf ^ uVar69;
      uVar96 = uVar69 * -0x63d2f291;
      uVar96 = (uVar96 >> 0xf ^ uVar96) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      local_f8->visual_seed = uVar96;
      pqVar63 = ac.queued_sounds;
      if ((ac.initialized == true) && (0 < sounds.grow.n_samples)) {
        auVar248 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)local_214));
        if ((0.001 <= auVar248._0_4_) &&
           ((sounds.grow.data != (short *)0x0 &&
            (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)))) {
          uVar69 = uVar69 * -0x7b935975;
          auVar242._0_4_ = (float)uVar96;
          auVar242._4_12_ = auVar372;
          auVar278._0_4_ = (float)(uVar69 >> 0x10 ^ uVar69);
          auVar278._4_12_ = auVar372;
          auVar219 = vinsertps_avx(auVar278,auVar242,0x10);
          auVar243._0_4_ = auVar219._0_4_ * 2.3283064e-10 * 0.008333334 + 0.0;
          auVar243._4_4_ = auVar219._4_4_ * 2.3283064e-10 * 2.0 + -1.0;
          auVar243._8_4_ = auVar219._8_4_ * 0.0 * 0.0 + 0.0;
          auVar243._12_4_ = auVar219._12_4_ * 0.0 * 0.0 + 0.0;
          uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
          ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb120;
          pqVar63[(int)uVar69].params.volume = auVar248._0_4_;
          uVar122 = vmovlps_avx(auVar243);
          pqVar63[(int)uVar69].params.delay = (float)(int)uVar122;
          pqVar63[(int)uVar69].params.pitch_shift = (float)(int)((ulonglong)uVar122 >> 0x20);
          *(undefined1 (*) [16])&pqVar63[(int)uVar69].params.lowpass_dist = ZEXT816(0) << 0x20;
          *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
          LOCK();
          ac.last_queued_sound = ac.last_queued_sound + 1;
          UNLOCK();
        }
      }
    }
    if (ac.initialized == true) {
      lVar133 = 0;
      do {
        auVar248 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),
                              ZEXT416(*(uint *)((longlong)w.singing_volume + lVar133)));
        auVar248 = vmaxss_avx(SUB6416(ZEXT464(0xc0000000),0),auVar248);
        LOCK();
        (&ac.singing[0].field3_0xc)[lVar133].next_target_volume_data = auVar248._0_4_;
        UNLOCK();
        auVar248 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),
                              ZEXT416(*(uint *)((longlong)w.singing_volume + lVar133 + 4)));
        auVar248 = vmaxss_avx(SUB6416(ZEXT464(0xc0000000),0),auVar248);
        LOCK();
        (&ac.singing[1].field3_0xc)[lVar133].next_target_volume_data = auVar248._0_4_;
        UNLOCK();
        lVar133 = lVar133 + 8;
      } while (lVar133 != 0x180);
    }
  }
  pvVar73 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar73 + 8) + 0x18,0);
  if ((local_f8->field0_0x0)._s_0.lane_index == 0) {
    pvVar73 = TlsGetValue(tls_index);
    if ((w.show_trace != 0) && (*(longlong *)((longlong)pvVar73 + 0xa8) != 0)) {
      QueryPerformanceFrequency((LARGE_INTEGER *)local_158);
      QueryPerformanceCounter(local_118);
      *(double *)(*(longlong *)((longlong)pvVar73 + 0xb8) + 0x40) =
           (double)local_118[0].QuadPart / (double)(longlong)local_158._0_8_;
      *(undefined8 *)((longlong)pvVar73 + 0xb8) = **(undefined8 **)((longlong)pvVar73 + 0xb8);
    }
  }
  return;
LAB_1400c44cd:
  do {
    uVar69 = (pcVar72->visual_seed >> 0x10 ^ pcVar72->visual_seed) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    pcVar72->visual_seed = uVar69;
    auVar198._4_4_ = auVar309._0_4_ * (float)uVar69 * 6.2831855;
    auVar332 = ZEXT464((uint)auVar198._4_4_);
    cosf();
    auVar332 = ZEXT1664(auVar332._0_16_);
    sinf();
    auVar350 = ZEXT464((uint)(auVar357._0_4_ *
                             (((body *)(uVar102 + (longlong)iVar97 * 0x2d0))->center_of_mass).
                             field0_0x0._s_0.x));
    auVar336 = ZEXT464((uint)(auVar357._0_4_ *
                             (((body *)(uVar102 + (longlong)iVar97 * 0x2d0))->center_of_mass).
                             field0_0x0._s_0.y));
    in_ZMM12 = ZEXT464((uint)((float)local_168._0_4_ * (prVar153->field0_0x0)._s_0.x));
    auVar346 = ZEXT464((uint)((float)local_168._0_4_ * w.portals[uVar109].x.field0_0x0._s_0.y));
    auVar332 = ZEXT1664(auVar332._0_16_);
    uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    uVar123 = (ulonglong)uVar69;
    local_f8->visual_seed = uVar69;
    fVar208 = auVar309._0_4_ * (float)uVar123;
    if ((fVar208 != auVar324._0_4_) || (NAN(fVar208) || NAN(auVar324._0_4_))) {
      uVar106 = 0;
      if ((fVar208 != 1.0) || (NAN(fVar208))) {
        dVar176 = (double)(fVar208 / (1.0 - fVar208));
        log();
        uVar106 = (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006);
        uVar123 = (ulonglong)local_f8->visual_seed;
      }
    }
    else {
      uVar106 = 0;
    }
    fVar334 = auVar346._0_4_;
    fVar171 = auVar336._0_4_;
    fVar172 = auVar350._0_4_;
    uVar69 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    local_f8->visual_seed = uVar69;
    fVar208 = auVar309._0_4_ * (float)uVar69;
    if (((fVar208 != auVar324._0_4_) || (NAN(fVar208) || NAN(auVar324._0_4_))) &&
       ((fVar208 != 1.0 || (NAN(fVar208))))) {
      dVar176 = (double)(fVar208 / (1.0 - fVar208));
      log();
      fVar334 = auVar346._0_4_;
      fVar171 = auVar336._0_4_;
      fVar172 = auVar350._0_4_;
      uVar106 = uVar106 | (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006) << 0x20;
    }
    fVar208 = local_1b8.x * auVar332._0_4_ + fVar171 + fVar334;
    rVar169 = (real_2_u_0)
              (CONCAT44(rVar78.y,local_1b8.x * auVar198._4_4_ + fVar172 + in_ZMM12._0_4_) |
              (ulonglong)(uint)fVar208 << 0x20);
    rVar124 = (real_2_u_0)
              ((ulonglong)
               (uint)(auVar327._0_4_ * (float)uVar106 - (float)local_188._0_4_ * auVar198._4_4_) |
              CONCAT44(fVar208,auVar327._0_4_ * (float)(uVar106 >> 0x20) -
                               (float)local_188._0_4_ * auVar332._0_4_) << 0x20);
    pvVar73 = TlsGetValue(tls_index);
    if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
      lVar133 = (longlong)w.max_particles;
      iVar136 = w.n_particles;
      if (w.max_particles <= w.n_particles) {
        w.max_particles = w.max_particles * 2;
        bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
        iVar136 = w.n_particles;
        if (!bVar170) goto LAB_1400c4940;
      }
      uVar158 = w.field119_0x3dc0.particles;
      w.n_particles = iVar136 + 1;
      w.field119_0x3dc0.particles[iVar136].type = 0xc;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->x).field0_0x0 = rVar169;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->x_dot).field0_0x0 = rVar124;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0 = (real_2_u_0)0x0;
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->target = 0;
      uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->r = (float)(int)uVar122;
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->r_dot =
           (float)(int)((ulonglong)uVar122 >> 0x20);
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->time = 0;
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->duration = 0x78;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_0.x =
           (float)local_208;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_0.y =
           local_120._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_0.z =
           local_170._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_0.w = 1.0;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_0.x =
           (float)local_208;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_0.y =
           local_120._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_0.z =
           local_170._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_0.w = 1.0;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_final).field0_0x0._s_0.x =
           (float)local_208;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_final).field0_0x0._s_0.y =
           local_120._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_final).field0_0x0._s_0.z =
           local_170._0_4_;
      puVar11 = (undefined8 *)
                ((longlong)
                 &(((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->emission).field0_0x0.xy.
                  field0_0x0 + 5);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = (undefined8 *)
                ((longlong)
                 &(((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_final).field0_0x0 +
                0xc);
      *puVar11 = 0;
      puVar11[1] = 0;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0 = rVar169;
    }
    else {
      uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^ *(uint *)((longlong)pvVar73 + 0x6c)) *
               0x7feb352d;
      uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      uVar69 = (uint)(auVar309._0_4_ * (float)uVar96 * (float)w.n_particles);
      if ((int)(w.n_particles - 1U) < (int)uVar69) {
        uVar69 = w.n_particles - 1U;
      }
      uVar123 = (ulonglong)uVar69;
      *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
      if ((int)uVar69 < 1) {
        uVar123 = 0;
      }
      if (w.field119_0x3dc0.particles[uVar123].affects_gameplay == false) {
        ppVar79 = w.field119_0x3dc0.particles + uVar123;
        ppVar79->type = 0xc;
        (ppVar79->x).field0_0x0 = rVar169;
        (ppVar79->x_dot).field0_0x0 = rVar124;
        (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
        ppVar79->target = 0;
        uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
        ppVar79->r = (float)(int)uVar122;
        ppVar79->r_dot = (float)(int)((ulonglong)uVar122 >> 0x20);
        ppVar79->time = 0;
        ppVar79->duration = 0x78;
        (ppVar79->color).field0_0x0._s_0.x = (float)local_208;
        (ppVar79->color).field0_0x0._s_0.y = local_120._0_4_;
        (ppVar79->color).field0_0x0._s_0.z = local_170._0_4_;
        (ppVar79->color).field0_0x0._s_0.w = 1.0;
        (ppVar79->color_initial).field0_0x0._s_0.x = (float)local_208;
        (ppVar79->color_initial).field0_0x0._s_0.y = local_120._0_4_;
        (ppVar79->color_initial).field0_0x0._s_0.z = local_170._0_4_;
        (ppVar79->color_initial).field0_0x0._s_0.w = 1.0;
        (ppVar79->color_final).field0_0x0._s_0.x = (float)local_208;
        (ppVar79->color_final).field0_0x0._s_0.y = local_120._0_4_;
        (ppVar79->color_final).field0_0x0._s_0.z = local_170._0_4_;
        *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0.xy.field0_0x0 + 5) = 0;
        *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
        *(undefined8 *)((longlong)&(ppVar79->color_final).field0_0x0 + 0xc) = 0;
        *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0.xy.field0_0x0 + 4) = 0;
      }
    }
LAB_1400c4940:
    rVar78 = w.portals[uVar109 ^ 1].x.field0_0x0._s_0;
    uVar69 = (local_f8->visual_seed >> 0x10 ^ local_f8->visual_seed) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    uVar123 = (ulonglong)uVar69;
    local_f8->visual_seed = uVar69;
    fVar208 = auVar309._0_4_ * (float)uVar123;
    if ((fVar208 != auVar324._0_4_) || (NAN(fVar208) || NAN(auVar324._0_4_))) {
      uVar106 = 0;
      if ((fVar208 != 1.0) || (NAN(fVar208))) {
        dVar176 = (double)(fVar208 / (1.0 - fVar208));
        log();
        uVar106 = (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006);
        uVar123 = (ulonglong)local_f8->visual_seed;
      }
    }
    else {
      uVar106 = 0;
    }
    fVar171 = auVar332._0_4_;
    uVar69 = ((uint)(uVar123 >> 0x10) ^ (uint)uVar123) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    local_f8->visual_seed = uVar69;
    fVar208 = auVar309._0_4_ * (float)uVar69;
    if (((fVar208 != auVar324._0_4_) || (NAN(fVar208) || NAN(auVar324._0_4_))) &&
       ((fVar208 != 1.0 || (NAN(fVar208))))) {
      dVar176 = (double)(fVar208 / (1.0 - fVar208));
      log();
      fVar171 = auVar332._0_4_;
      uVar106 = uVar106 | (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006) << 0x20;
    }
    rVar125._s_0.y = auVar327._0_4_ * (float)(uVar106 >> 0x20) - auVar357._0_4_ * fVar171;
    rVar125._s_0.x = auVar327._0_4_ * (float)uVar106 - auVar357._0_4_ * auVar198._4_4_;
    pvVar73 = TlsGetValue(tls_index);
    if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
      lVar133 = (longlong)w.max_particles;
      iVar136 = w.n_particles;
      if (w.max_particles <= w.n_particles) {
        w.max_particles = w.max_particles * 2;
        bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
        iVar136 = w.n_particles;
        if (!bVar170) goto LAB_1400c44be;
      }
      uVar158 = w.field119_0x3dc0.particles;
      w.n_particles = iVar136 + 1;
      w.field119_0x3dc0.particles[iVar136].type = 0xc;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->x).field0_0x0._s_0 = rVar78;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->x_dot).field0_0x0 = rVar125;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0 = (real_2_u_0)0x0;
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->target = 0;
      uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->r = (float)(int)uVar122;
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->r_dot =
           (float)(int)((ulonglong)uVar122 >> 0x20);
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->time = 0;
      ((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->duration = 0x78;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_0.x =
           (float)local_128._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_0.y =
           (float)local_1d8._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_0.z =
           (float)local_1e8._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_0.w = 1.0;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_0.x =
           (float)local_128._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_0.y =
           (float)local_1d8._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_0.z =
           (float)local_1e8._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_0.w = 1.0;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_final).field0_0x0._s_0.x =
           (float)local_128._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_final).field0_0x0._s_0.y =
           (float)local_1d8._0_4_;
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_final).field0_0x0._s_0.z =
           (float)local_1e8._0_4_;
      *(undefined1 (*) [16])
       ((longlong)&(((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->emission).field0_0x0 + 5)
           = ZEXT816(0);
      *(undefined1 (*) [16])
       ((longlong)&(((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->color_final).field0_0x0 +
       0xc) = ZEXT816(0);
      (((particle_t *)(uVar158 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0._s_0 = rVar78;
    }
    else {
      uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^ *(uint *)((longlong)pvVar73 + 0x6c)) *
               0x7feb352d;
      uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      uVar69 = (uint)(auVar309._0_4_ * (float)uVar96 * (float)w.n_particles);
      if ((int)(w.n_particles - 1U) < (int)uVar69) {
        uVar69 = w.n_particles - 1U;
      }
      uVar123 = (ulonglong)uVar69;
      *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
      if ((int)uVar69 < 1) {
        uVar123 = 0;
      }
      if (w.field119_0x3dc0.particles[uVar123].affects_gameplay == false) {
        ppVar79 = w.field119_0x3dc0.particles + uVar123;
        ppVar79->type = 0xc;
        (ppVar79->x).field0_0x0._s_0 = rVar78;
        (ppVar79->x_dot).field0_0x0 = rVar125;
        (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
        ppVar79->target = 0;
        uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
        ppVar79->r = (float)(int)uVar122;
        ppVar79->r_dot = (float)(int)((ulonglong)uVar122 >> 0x20);
        ppVar79->time = 0;
        ppVar79->duration = 0x78;
        (ppVar79->color).field0_0x0._s_0.x = (float)local_128._0_4_;
        (ppVar79->color).field0_0x0._s_0.y = (float)local_1d8._0_4_;
        (ppVar79->color).field0_0x0._s_0.z = (float)local_1e8._0_4_;
        (ppVar79->color).field0_0x0._s_0.w = 1.0;
        (ppVar79->color_initial).field0_0x0._s_0.x = (float)local_128._0_4_;
        (ppVar79->color_initial).field0_0x0._s_0.y = (float)local_1d8._0_4_;
        (ppVar79->color_initial).field0_0x0._s_0.z = (float)local_1e8._0_4_;
        (ppVar79->color_initial).field0_0x0._s_0.w = 1.0;
        (ppVar79->color_final).field0_0x0._s_0.x = (float)local_128._0_4_;
        (ppVar79->color_final).field0_0x0._s_0.y = (float)local_1d8._0_4_;
        (ppVar79->color_final).field0_0x0._s_0.z = (float)local_1e8._0_4_;
        *(undefined1 (*) [16])((longlong)&(ppVar79->emission).field0_0x0 + 5) = ZEXT816(0);
        *(undefined1 (*) [16])((longlong)&(ppVar79->color_final).field0_0x0 + 0xc) = ZEXT816(0);
      }
    }
LAB_1400c44be:
    iVar70 = iVar70 + -1;
    pcVar72 = local_f8;
  } while (iVar70 != 0);
  auVar198._4_4_ = auVar357._0_4_ + (float)local_190;
  uVar122 = local_1c0;
  uVar123 = local_278._0_8_;
LAB_1400c42c0:
  in_ZMM2 = ZEXT464(0x44610000);
  auVar248._4_4_ = auVar248._4_4_ + 1;
  if (auVar248._4_4_ == 2) goto LAB_1400c4250;
  goto LAB_1400c42c7;
LAB_1400c4250:
  uVar69 = local_288._0_4_ + 1;
  uVar106 = (ulonglong)uVar69;
  if (uVar69 == 2) goto LAB_1400c40e0;
  goto LAB_1400c4262;
LAB_1400c40e0:
  uVar109 = 1;
  uVar102 = 0;
  if ((local_2c8[0] & 1) == 0) goto LAB_1400c4bfe;
  goto LAB_1400c40f7;
  while( true ) {
    uVar109 = uVar109 + 1;
    rVar147._s_0 = rVar147._s_0 + 0x118;
    if ((longlong)n_materials == uVar109) break;
LAB_1400d248f:
    if ((((int)((material_t *)((longlong)rVar147 + -0xe0))->id < -0x7f000000) &&
        (*(int *)((longlong)rVar147 + -4) == iVar70)) &&
       (*(int *)rVar147 == pcVar129->material_index)) goto LAB_1400d24f1;
  }
LAB_1400d24a9:
  local_190 = CONCAT44(local_190._4_4_,fVar333);
  local_1e8._0_4_ = fVar172;
  local_1c0.x = fVar303;
  auVar309 = ZEXT1664(auVar317);
  auVar324 = ZEXT464((uint)fVar208);
  auVar327 = ZEXT1664(auVar258);
  auVar357 = ZEXT1664(auVar362);
  auVar336 = ZEXT1664(auVar294);
  auVar346 = ZEXT1664(auVar219);
  auVar332 = ZEXT464((uint)auVar198._4_4_);
  uVar69 = combine_materials(iVar70,pcVar129->material_index);
  auVar370 = auVar332._0_16_;
  uVar109 = (ulonglong)uVar69;
  auVar178 = auVar324._0_16_;
  fVar172 = (float)local_1e8._0_4_;
  fVar333 = (float)local_190;
  fVar303 = local_1c0.x;
LAB_1400d24f1:
  auVar332 = ZEXT464(0x3f000000);
  auVar288._8_4_ = 0x3f000000;
  auVar288._0_8_ = 0x3f0000003f000000;
  auVar288._12_4_ = 0x3f000000;
  auVar248 = vinsertps_avx(auVar288,ZEXT416((uint)((fVar172 + fVar333) * 0.5)),0x10);
  auVar219 = vinsertps_avx(auVar178,ZEXT416((uint)((fVar245 + fVar303) * 0.5)),0x10);
  auVar195._0_4_ = auVar357._0_4_ / (fVar171 + fVar334);
  auVar195._4_12_ = auVar357._4_12_;
  auVar317 = vinsertps_avx(auVar370,auVar195,0x10);
  auVar317 = vunpcklps_avx(auVar317,auVar219);
  auVar219 = vinsertps_avx(auVar332._0_16_,auVar195,0x1c);
  auVar248 = vunpcklps_avx(auVar248,auVar219);
  pcVar128 = pcVar129;
  pcVar42 = pcVar4;
  if (pcVar129 < pcVar4) {
    pcVar128 = pcVar4;
    pcVar42 = pcVar129;
  }
  auVar198._4_4_ = auVar317._0_4_ * auVar248._0_4_;
  fVar208 = auVar317._4_4_ * auVar248._4_4_;
  pcVar42->material_index = (int)uVar109;
  (pcVar42->x).field0_0x0._s_0.x = auVar198._4_4_;
  (pcVar42->x).field0_0x0._s_0.y = fVar208;
  (pcVar42->x_dot).field0_0x0._s_0.x = auVar317._8_4_ * auVar248._8_4_;
  (pcVar42->x_dot).field0_0x0._s_0.y = auVar317._12_4_ * auVar248._12_4_;
  pcVar42->r = 0.0;
  pcVar42->r_dot = 2.0;
  *(byte *)&pcVar42->field7_0x24 = *(byte *)&pcVar42->field7_0x24 & 0xfd;
  auVar324 = ZEXT464((uint)local_120._0_4_);
  pcVar129 = pcVar128;
LAB_1400d257a:
  auVar248._4_4_ = 0x78;
  do {
    uVar122 = local_188._0_8_;
    uVar69 = (*(uint *)local_188._0_8_ >> 0x10 ^ *(uint *)local_188._0_8_) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    *(uint *)local_188._0_8_ = uVar69;
    auVar219 = ZEXT416((uint)((float)uVar69 * 2.3283064e-10 * 6.2831855));
    auVar350 = ZEXT1664(auVar219);
    auVar309 = ZEXT1664(auVar309._0_16_);
    auVar363 = ZEXT1664(auVar219);
    auVar327 = ZEXT1664(auVar327._0_16_);
    auVar371 = ZEXT1664(SUB6416(ZEXT464(0x2f800000),0));
    auVar357 = ZEXT1664(auVar357._0_16_);
    auVar332 = ZEXT1664(auVar332._0_16_);
    auVar336 = ZEXT1664(auVar336._0_16_);
    auVar346 = ZEXT1664(auVar346._0_16_);
    auVar324 = ZEXT1664(auVar324._0_16_);
    cosf();
    auVar353 = ZEXT1664(auVar350._0_16_);
    auVar350 = ZEXT1664(auVar363._0_16_);
    sinf();
    uVar69 = (*(uint *)uVar122 >> 0x10 ^ *(uint *)uVar122) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    *(uint *)uVar122 = uVar69;
    fVar171 = auVar371._0_4_ * (float)uVar69 * 0.40000004 + 0.8;
    fVar334 = auVar353._0_4_ * fVar171;
    auVar350 = ZEXT464((uint)(auVar350._0_4_ * fVar171));
    rVar77 = rand_normal_2((uint *)uVar122);
    rVar124 = (real_2_u_0)
              (CONCAT44(rVar124._s_0.y,auVar332._0_4_ * rVar77.field0_0x0._0_4_ - fVar334) |
              (ulonglong)(uint)(auVar332._0_4_ * rVar77.field0_0x0._4_4_ - auVar350._0_4_) << 0x20);
    uVar69 = (*(uint *)uVar122 >> 0x10 ^ *(uint *)uVar122) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    *(uint *)uVar122 = uVar69;
    iVar70 = (int)(auVar371._0_4_ * (float)uVar69 * 210.0);
    if (iVar70 < 1) {
      iVar70 = 0;
    }
    if (0xd0 < iVar70) {
      iVar70 = 0xd1;
    }
    pvVar73 = TlsGetValue(tls_index);
    if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
      lVar133 = (longlong)w.max_particles;
      iVar136 = w.n_particles;
      if (w.max_particles <= w.n_particles) {
        w.max_particles = w.max_particles * 2;
        bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
        iVar136 = w.n_particles;
        if (!bVar170) goto LAB_1400d2623;
      }
      uVar122 = w.field119_0x3dc0.particles;
      w.n_particles = iVar136 + 1;
      w.field119_0x3dc0.particles[iVar136].type = 6;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x).field0_0x0._s_0.x = auVar198._4_4_;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x).field0_0x0._s_0.y = fVar208;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_dot).field0_0x0._s_0 =
           (real_2_u_0_s_0)rVar124;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0 = (real_2_u_0)0x0;
      ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->target = 0;
      ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->r = 0.5;
      ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->r_dot = 0.05;
      ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->time = 0;
      ((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->duration = iVar70 + 0x1e;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color).field0_0x0.xy.field0_0x0 =
           (real_2_u_0)0x3f8000003f800000;
      *(undefined8 *)
       ((longlong)
        &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color).field0_0x0._s_2.yz.field0_0x0
       + 4) = 0x3f8000003f800000;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0.xy.field0_0x0
           = (real_2_u_0)0x3f8000003f800000;
      *(undefined8 *)
       ((longlong)
        &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_initial).field0_0x0._s_2.yz.
         field0_0x0 + 4) = 0x3f8000003f800000;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_final).field0_0x0.xy.field0_0x0 =
           (real_2_u_0)0x3f8000003f800000;
      *(undefined8 *)
       ((longlong)
        &(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->color_final).field0_0x0._s_2.yz.
         field0_0x0 + 4) = 0x3f800000;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->emission).field0_0x0 =
           (real_4_u_0)(ZEXT816(0) << 0x20);
      *(undefined8 *)
       ((longlong)&(((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->emission).field0_0x0 + 0xd
       ) = 0;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0._s_0.x =
           auVar198._4_4_;
      (((particle_t *)(uVar122 + (longlong)iVar136 * 0x78))->x_spawn).field0_0x0._s_0.y = fVar208;
    }
    else {
      uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^ *(uint *)((longlong)pvVar73 + 0x6c)) *
               0x7feb352d;
      uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar96 = uVar96 >> 0x10 ^ uVar96;
      uVar69 = (uint)((float)uVar96 * 2.3283064e-10 * (float)w.n_particles);
      if ((int)(w.n_particles - 1U) < (int)uVar69) {
        uVar69 = w.n_particles - 1U;
      }
      uVar109 = (ulonglong)uVar69;
      *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
      if ((int)uVar69 < 1) {
        uVar109 = 0;
      }
      if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
        ppVar79 = w.field119_0x3dc0.particles + uVar109;
        ppVar79->type = 6;
        (ppVar79->x).field0_0x0._s_0.x = auVar198._4_4_;
        (ppVar79->x).field0_0x0._s_0.y = fVar208;
        (ppVar79->x_dot).field0_0x0._s_0 = (real_2_u_0_s_0)rVar124;
        (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
        ppVar79->target = 0;
        ppVar79->r = 0.5;
        ppVar79->r_dot = 0.05;
        ppVar79->time = 0;
        ppVar79->duration = iVar70 + 0x1e;
        (ppVar79->color).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
        *(undefined8 *)((longlong)&(ppVar79->color).field0_0x0._s_2.yz.field0_0x0 + 4) =
             0x3f8000003f800000;
        (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
        *(undefined8 *)((longlong)&(ppVar79->color_initial).field0_0x0._s_2.yz.field0_0x0 + 4) =
             0x3f8000003f800000;
        (ppVar79->color_final).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
        *(undefined8 *)((longlong)&(ppVar79->color_final).field0_0x0._s_2.yz.field0_0x0 + 4) =
             0x3f800000;
        (ppVar79->emission).field0_0x0 = (real_4_u_0)(ZEXT816(0) << 0x20);
        *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
      }
    }
LAB_1400d2623:
    uVar122 = w.field116_0x3da0.cell_pickups;
    auVar370 = auVar324._0_16_;
    auVar219 = auVar346._0_16_;
    auVar294 = auVar336._0_16_;
    auVar178 = auVar332._0_16_;
    auVar362 = auVar357._0_16_;
    auVar258 = auVar327._0_16_;
    auVar317 = auVar309._0_16_;
    auVar248._4_4_ = auVar248._4_4_ + -1;
  } while (auVar248._4_4_ != 0);
  lVar133 = (longlong)w.n_cell_pickups + -1;
  w.n_cell_pickups = (int)lVar133;
  cVar58 = w.field116_0x3da0.cell_pickups[lVar133].field7_0x24;
  pcVar129->text_alpha = w.field116_0x3da0.cell_pickups[lVar133].text_alpha;
  pcVar129->field7_0x24 = cVar58;
  pcVar42 = (cell_pickup *)(uVar122 + lVar133 * 0x28);
  uVar122 = *(undefined8 *)((longlong)&(pcVar42->x).field0_0x0 + 4);
  uVar102 = *(undefined8 *)((longlong)&(pcVar42->x_dot).field0_0x0 + 4);
  auVar198._4_4_ = pcVar42->r_dot;
  fVar208 = pcVar42->alpha;
  *(undefined8 *)pcVar129 = *(undefined8 *)pcVar42;
  *(undefined8 *)((longlong)&(pcVar129->x).field0_0x0 + 4) = uVar122;
  *(undefined8 *)((longlong)&(pcVar129->x_dot).field0_0x0 + 4) = uVar102;
  pcVar129->r_dot = auVar198._4_4_;
  pcVar129->alpha = fVar208;
  piVar160._4_4_ = local_208._4_4_;
  piVar160._0_4_ = (float)local_208;
  pmVar117 = (material_t *)local_1d8._0_8_;
  pcVar84 = (cell *)local_168._0_8_;
  if (pcVar129 != pcVar4) {
LAB_1400d2910:
    rVar147._0_1_ = 1;
    auVar309 = ZEXT1664(auVar317);
    auVar327 = ZEXT1664(auVar258);
    auVar357 = ZEXT1664(auVar362);
    auVar332 = ZEXT1664(auVar178);
    auVar336 = ZEXT1664(auVar294);
    auVar346 = ZEXT1664(auVar219);
    auVar324 = ZEXT1664(auVar370);
    wall_map((wall_t *)local_158,&w.map,(real_2)(pcVar4->x).field0_0x0._s_0,true);
    uVar130 = rStack_14c._s_0.y;
    uVar131 = rStack_14c._s_0.x;
    rVar78 = (pcVar4->x).field0_0x0._s_0;
    fVar208 = rVar78.x;
    fVar171 = auVar309._0_4_;
    fVar334 = auVar357._0_4_;
    auVar198._4_4_ = rVar78.y;
    if ((longlong)w.n_particle_pushers < 1) {
      uVar122 = 0;
    }
    else {
      lVar133 = 0;
      uVar122 = 0;
      do {
        fVar333 = fVar208 - *(float *)((longlong)
                                       &((w.field100_0x3d00.particle_pushers)->x).field0_0x0 +
                                      lVar133);
        fVar303 = auVar198._4_4_ -
                  *(float *)((longlong)&((w.field100_0x3d00.particle_pushers)->x).field0_0x0 +
                            lVar133 + 4);
        fVar172 = *(float *)((longlong)&((w.field100_0x3d00.particle_pushers)->d).field0_0x0 +
                            lVar133);
        fVar245 = *(float *)((longlong)&((w.field100_0x3d00.particle_pushers)->d).field0_0x0 +
                            lVar133 + 4);
        auVar248 = vminss_avx(auVar357._0_16_,
                              ZEXT416((uint)((fVar303 * fVar245 + fVar333 * fVar172 + fVar171) *
                                            *(float *)((longlong)
                                                       &(w.field100_0x3d00.particle_pushers)->
                                                        inv_dsq + lVar133))));
        auVar248 = vmaxss_avx(auVar309._0_16_,auVar248);
        fVar347 = auVar248._0_4_;
        fVar333 = fVar347 * fVar172 - fVar333;
        fVar303 = fVar347 * fVar245 - fVar303;
        fVar333 = fVar303 * fVar303 + fVar333 * fVar333 + fVar171;
        if (fVar333 <= auVar327._0_4_) {
          auVar248 = vsqrtss_avx(ZEXT416((uint)fVar333),ZEXT416((uint)fVar333));
          fVar333 = (fVar334 + auVar248._0_4_ * -0.083333336) *
                    (fVar334 - fVar347) *
                    *(float *)((longlong)&(w.field100_0x3d00.particle_pushers)->strength + lVar133);
          uVar122 = CONCAT44(fVar333 * fVar245 + (float)((ulonglong)uVar122 >> 0x20),
                             fVar333 * fVar172 + (float)uVar122);
        }
        lVar133 = lVar133 + 0x18;
      } while ((longlong)w.n_particle_pushers * 0x18 != lVar133);
    }
    if ((longlong)w.n_explosions < 1) {
      uVar102 = 0;
    }
    else {
      lVar133 = 0;
      uVar102 = 0;
      do {
        fVar333 = fVar208 - *(float *)((longlong)&((w.field85_0x3c60.explosions)->x).field0_0x0 +
                                      lVar133);
        fVar303 = auVar198._4_4_ -
                  *(float *)((longlong)&((w.field85_0x3c60.explosions)->x).field0_0x0 + lVar133 + 4)
        ;
        fVar245 = fVar303 * fVar303 + fVar333 * fVar333 + fVar171;
        fVar172 = *(float *)((longlong)&(w.field85_0x3c60.explosions)->r + lVar133);
        if (fVar245 < fVar172 * fVar172) {
          if (1e-06 < fVar245) {
            auVar248 = vsqrtss_avx(ZEXT416((uint)fVar245),ZEXT416((uint)fVar245));
            fVar172 = fVar334 / auVar248._0_4_;
            uVar109 = CONCAT44(rVar147._s_0.y,fVar333 * fVar172) |
                      (ulonglong)(uint)(fVar303 * fVar172) << 0x20;
          }
          else {
            uVar109 = 0;
          }
          fVar245 = *(float *)((longlong)&(w.field85_0x3c60.explosions)->knockback + lVar133) * 0.25
          ;
          fVar172 = fVar245 * (float)(uVar109 >> 0x20) + (float)((ulonglong)uVar102 >> 0x20);
          rVar147 = (real_2_u_0)((ulonglong)(uint)fVar172 << 0x20);
          uVar102 = CONCAT44(fVar172,fVar245 * (float)uVar109 + (float)uVar102);
        }
        lVar133 = lVar133 + 0x34;
      } while ((longlong)w.n_explosions * 0x34 - lVar133 != 0);
    }
    fVar172 = auVar336._0_4_ * (float)uVar102 + (pcVar4->x_dot).field0_0x0._s_0.x;
    fVar245 = auVar336._0_4_ * (float)((ulonglong)uVar102 >> 0x20) +
              (pcVar4->x_dot).field0_0x0._s_0.y;
    rVar167 = (real_2_u_0_s_0)
              (CONCAT44((int)((ulonglong)pcVar84 >> 0x20),fVar172) |
              (ulonglong)(uint)fVar245 << 0x20);
    (pcVar4->x_dot).field0_0x0._s_0 = rVar167;
    if ((float)local_158._0_4_ < auVar332._0_4_ * pcVar4->r) {
      fVar333 = auVar332._0_4_ * pcVar4->r - (float)local_158._0_4_;
      auVar198._4_4_ = fVar333 * (float)local_158._8_4_ + auVar198._4_4_;
      rVar78 = (real_2_u_0_s_0)
               ((ulonglong)(uint)(fVar333 * (float)local_158._4_4_ + fVar208) |
               CONCAT44(fVar245,auVar198._4_4_) << 0x20);
      (pcVar4->x).field0_0x0._s_0 = rVar78;
      fVar208 = fVar245 * (float)local_158._8_4_ + fVar172 * (float)local_158._4_4_ + fVar171;
      if (fVar208 < fVar171) {
        rVar167 = (real_2_u_0_s_0)
                  (CONCAT44(rVar167.y,fVar172 - (fVar208 + fVar208) * (float)local_158._4_4_) |
                  CONCAT44(auVar198._4_4_,fVar245 - (fVar208 + fVar208) * (float)local_158._8_4_) <<
                  0x20);
        (pcVar4->x_dot).field0_0x0._s_0 = rVar167;
      }
    }
    fVar208 = rVar78.x;
    auVar198._4_4_ = rVar78.y;
    if (fStack_144 <= fVar171) {
      auVar332 = ZEXT464((uint)fVar208);
    }
    else {
      fVar172 = (auVar198._4_4_ - w.final_boss.x.field0_0x0._s_0.y) * 0.0001;
      auVar248 = vmaxss_avx(auVar357._0_16_,ZEXT416((uint)(fVar334 + fVar172 * fVar172)));
      auVar332 = ZEXT464((uint)fVar208);
      fVar334 = -0.02 / auVar248._0_4_ + fVar171;
      fVar208 = (fVar208 - w.final_boss.x.field0_0x0._s_0.x) + 7000.0;
      fVar172 = (auVar198._4_4_ - w.final_boss.x.field0_0x0._s_0.y) + -70000.0;
      auVar350 = ZEXT464((uint)fVar172);
      auVar248 = vmaxss_avx(ZEXT416((uint)(fVar172 * fVar172 + fVar208 * fVar208 + fVar171)),
                            ZEXT416(0x4bbebc20));
      auVar336 = ZEXT1664(auVar248);
      powf();
      fVar171 = auVar336._0_4_ * -100000.0;
      fVar172 = rVar167.x;
      rVar167.y = fVar334 + auVar350._0_4_ * fVar171 + rVar167.y;
      rVar167.x = fVar208 * fVar171 + auVar309._0_4_ + fVar172;
      (pcVar4->x_dot).field0_0x0._s_0 = rVar167;
    }
    auVar336 = ZEXT464((uint)((float)uVar122 * 0.25 + (float)uVar131));
    fVar208 = (float)((ulonglong)uVar122 >> 0x20) * 0.25 + (float)uVar130;
    rVar77 = get_fictitious_force((real_2)rVar78,(real_2)rVar167);
    fVar245 = local_208._4_4_;
    fVar172 = (float)local_208;
    auVar219 = auVar346._0_16_;
    fVar171 = rVar167.x + rVar77.field0_0x0._0_4_;
    fVar334 = rVar167.y + rVar77.field0_0x0._4_4_;
    auVar248 = vinsertps_avx(ZEXT416((uint)(auVar332._0_4_ + fVar171)),ZEXT416((uint)fVar171),0x10);
    auVar317 = vinsertps_avx(ZEXT416((uint)(fVar334 + auVar198._4_4_)),ZEXT416((uint)fVar334),0x10);
    auVar248 = vunpcklps_avx(auVar248,auVar317);
    pcVar4->x = (real_2)auVar248._0_8_;
    pcVar4->x_dot = (real_2)auVar248._8_8_;
    auVar248 = vminss_avx(ZEXT416((uint)(auVar357._0_4_ + pmVar117->drag * -0.25)),
                          ZEXT416(0x3f7d70a4));
    rVar85._s_0.y = fVar208 + auVar248._0_4_ * (fVar334 - fVar208);
    rVar85._s_0.x = auVar336._0_4_ + (fVar171 - auVar336._0_4_) * auVar248._0_4_;
    (pcVar4->x_dot).field0_0x0 = rVar85;
    uVar69 = (*(uint *)local_188._0_8_ >> 0x10 ^ *(uint *)local_188._0_8_) * 0x7feb352d;
    uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
    uVar69 = uVar69 >> 0x10 ^ uVar69;
    *(uint *)local_188._0_8_ = uVar69;
    auVar198._4_4_ = (float)uVar69 * 2.3283064e-10;
    auVar336 = ZEXT464((uint)auVar198._4_4_);
    uVar69 = (pcVar4->field7_0x24).flags;
    pcVar84 = (cell *)local_168._0_8_;
    if ((uVar69 & 1) == 0) {
      auVar332 = ZEXT464(0x3f000000);
      if (auVar346._0_4_ < 10000.0) {
        fVar208 = SUB84(peVar165,0);
        peVar165._0_4_ = (int)fVar208 + 1;
        peVar165._4_4_ = 0;
        *(real_2_u_0 *)(local_1c8 + (longlong)(int)fVar208 * 8) = (pcVar4->x).field0_0x0;
        rVar124 = (real_2_u_0)*(real_2_u_0 *)&(pcVar4->x).field0_0x0._s_0;
        fVar208 = (local_198->cursor_x).field0_0x0._s_0.x - rVar124._s_0.x;
        fVar171 = (local_198->cursor_x).field0_0x0._s_0.y - rVar124._s_0.y;
        if ((pcVar4->r * pcVar4->r <= fVar171 * fVar171 + fVar208 * fVar208 + auVar309._0_4_) ||
           (pcVar4->material_index == 0)) goto LAB_1400d302f;
        w.tooltip.last_hovered_index = pcVar4->material_index;
        w.tooltip.last_hovered_type = 0;
        w.tooltip.is_combo = (pcVar4->field7_0x24).flags >> 1;
        w.tooltip_active = true;
        w.tooltip_pickup_x.field0_0x0 = rVar124;
        pcVar4->text_alpha = pcVar4->text_alpha * 0.9 + 0.1;
        uVar131 = settings.field3_0xc.keybinds.interact + 7;
        if (-1 < settings.field3_0xc.keybinds.interact) {
          uVar131 = settings.field3_0xc.keybinds.interact;
        }
        if ((local_198->pressed_buttons[(int)uVar131 >> 3] >>
             (settings.field3_0xc.keybinds.interact & 7U) & 1) == 0) {
          auVar248 = SUB6416(ZEXT464(0x3d23d70a),0);
          fVar208 = 9.6;
          if (((local_198->gamepad).buttons & 0x4000) != 0) {
            auVar248 = SUB6416(ZEXT464(0x3d23d70a),0);
            fVar208 = 9.6;
            if ((local_198->gamepad_prev_buttons & 0x4000) == 0) goto LAB_1400d2f43;
          }
        }
        else {
LAB_1400d2f43:
          auVar248 = SUB6416(ZEXT464(0x3d23d70a),0);
          fVar208 = 9.6;
          if ((*(byte *)&pcVar4->field7_0x24 & 2) == 0) {
            fVar208 = pmVar117->genome_size;
            if (0 < w.em.n_cell_items) {
              if ((uint)w.em.n_cell_items < 4) {
                rVar124 = (real_2_u_0)0x0;
              }
              else {
                rVar150._0_4_ = w.em.n_cell_items & 0x7ffffffc;
                rVar150._s_0.y = 0.0;
                rVar147 = (real_2_u_0)0x0;
                uVar122 = w.em.field12_0x40.cell_items;
                do {
                  fVar208 = fVar208 + materials_list[((cell_item *)uVar122)->material_index].
                                      genome_size +
                            materials_list[((cell_item *)(uVar122 + 0x48))->material_index].
                            genome_size +
                            materials_list[((cell_item *)(uVar122 + 0x90))->material_index].
                            genome_size +
                            materials_list[((cell_item *)(uVar122 + 0xd8))->material_index].
                            genome_size;
                  rVar147._s_0 = rVar147._s_0 + 4;
                  uVar122 = uVar122 + 0x120;
                } while (rVar150 != rVar147);
                rVar124 = rVar147;
                if ((w.em.n_cell_items & 3U) == 0) goto LAB_1400d35db;
              }
              rVar147 = (real_2_u_0)0x0;
              do {
                fVar208 = fVar208 + materials_list
                                    [*(int *)((longlong)
                                              &w.em.field12_0x40.cell_items[(longlong)rVar124].
                                               material_index + (longlong)rVar147)].genome_size;
                rVar147._s_0 = rVar147._s_0 + 0x48;
              } while ((real_2_u_0)((ulonglong)((w.em.n_cell_items & 3U) << 3) * 9) != rVar147);
            }
LAB_1400d35db:
            if (fVar208 <= w.em.max_genome_size) {
              auVar248._4_4_ = pcVar4->material_index;
              lVar133 = (longlong)w.em.max_cell_items;
              if (w.em.n_cell_items < w.em.max_cell_items) {
LAB_1400d36fa:
                pvVar73 = TlsGetValue(tls_index);
                auVar219 = auVar346._0_16_;
                auVar198._4_4_ = auVar336._0_4_;
                uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^
                         *(uint *)((longlong)pvVar73 + 0x6c)) * 0x7feb352d;
                uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
                uVar69 = uVar69 >> 0x10 ^ uVar69;
                *(uint *)((longlong)pvVar73 + 0x6c) = uVar69;
                uVar122 = w.em.field12_0x40.cell_items;
                lVar133 = (longlong)w.em.n_cell_items;
                w.em.field12_0x40.cell_items[lVar133].material_index = auVar248._4_4_;
                pcVar57 = (cell_item *)(uVar122 + lVar133 * 0x48);
                auVar244 = ZEXT1232(ZEXT812(0));
                (pcVar57->button).x = (real_2)auVar244._0_8_;
                (pcVar57->button).x_dot = (real_2)auVar244._8_8_;
                (pcVar57->button).x_brown = (real_2)auVar244._16_8_;
                (pcVar57->button).x_brown_dot = (real_2)auVar244._24_8_;
                pcVar57 = (cell_item *)(uVar122 + lVar133 * 0x48);
                (pcVar57->button).x_brown = (real_2)auVar244._0_8_;
                (pcVar57->button).x_brown_dot = (real_2)auVar244._8_8_;
                (pcVar57->button).x_offset = (real_2)auVar244._16_8_;
                (pcVar57->button).r = (float)auVar244._24_4_;
                (pcVar57->button).r_dot = (float)auVar244._28_4_;
                (((cell_item *)(uVar122 + lVar133 * 0x48))->button).selection_theta =
                     (float)uVar69 * 2.3283064e-10 * 100.0;
                pcVar57 = (cell_item *)(uVar122 + lVar133 * 0x48);
                (pcVar57->button).hovered = 0.0;
                (pcVar57->button).selected = 0.0;
                *(undefined8 *)(&(pcVar57->button).hovered + 2) = 0;
                piVar74 = w.em.cell_item_counts + auVar248._4_4_;
                *piVar74 = *piVar74 + 1;
                w.em.n_cell_items = w.em.n_cell_items + 1;
              }
              else {
                w.em.max_cell_items = w.em.max_cell_items * 2;
                bVar170 = expand_memory(&w.em.field12_0x40.cell_items_memory,lVar133 * 0x90);
                auVar219 = auVar346._0_16_;
                auVar198._4_4_ = auVar336._0_4_;
                if (bVar170) goto LAB_1400d36fa;
              }
              pcVar4->r_dot = auVar357._0_4_ + pcVar4->r_dot;
              *(byte *)&pcVar4->field7_0x24 = *(byte *)&pcVar4->field7_0x24 | 1;
              w.tooltip_active = false;
            }
            else {
              uVar69 = (*(uint *)local_188._0_8_ >> 0x10 ^ *(uint *)local_188._0_8_) * 0x7feb352d;
              uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
              uVar69 = uVar69 >> 0x10 ^ uVar69;
              *(uint *)local_188._0_8_ = uVar69;
              pqVar63 = ac.queued_sounds;
              fVar208 = (float)uVar69 * 2.3283064e-10;
              if ((((ac.initialized == true) && (0 < sounds.error.n_samples)) &&
                  (sounds.error.data != (short *)0x0)) &&
                 (ac.last_queued_sound - ac.next_queued_sound < (uint)ac.max_queued_sounds)) {
                uVar69 = ac.last_queued_sound % (uint)ac.max_queued_sounds;
                ac.queued_sounds[(int)uVar69].sound = (sound_t *)0x1401eb230;
                uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f800000),0));
                pqVar63[(int)uVar69].params.volume = (float)(int)uVar122;
                pqVar63[(int)uVar69].params.delay = (float)(int)((ulonglong)uVar122 >> 0x20);
                pqVar63[(int)uVar69].params.pitch_shift = fVar208 + fVar208 + -1.0;
                pqVar55 = pqVar63 + (int)uVar69;
                (pqVar55->params).lowpass_dist = 0.0;
                (pqVar55->params).type = 0;
                *(undefined8 *)(&(pqVar55->params).lowpass_dist + 2) = 0;
                *(undefined8 *)((longlong)pqVar63[(int)uVar69].filtered + 5) = 0;
                LOCK();
                ac.last_queued_sound = ac.last_queued_sound + 1;
                UNLOCK();
              }
              pcVar4->r_dot = pcVar4->r_dot + 0.5;
            }
            auVar248 = SUB6416(ZEXT464(0x3d23d70a),0);
            fVar208 = 9.6;
          }
        }
      }
      else {
LAB_1400d302f:
        pcVar4->text_alpha = pcVar4->text_alpha * 0.9 + auVar309._0_4_;
        auVar248 = SUB6416(ZEXT464(0x3ca3d70a),0);
        fVar208 = 8.0;
      }
      pcVar4->alpha = 1.0;
      fVar171 = pcVar4->r_dot + pcVar4->r;
      pcVar4->r = fVar171;
      pcVar4->r_dot = ((fVar208 - fVar171) * 0.01 + pcVar4->r_dot) * 0.9;
      uVar69 = (pcVar4->field7_0x24).flags;
      fVar208 = 0.02;
    }
    else {
      uVar18 = pcVar4->r_dot;
      uVar21 = pcVar4->alpha;
      pcVar4->r = (float)uVar18 + pcVar4->r;
      auVar196._0_4_ = (float)uVar18 * (float)0x3f666666;
      auVar196._4_4_ = (float)uVar21 * (float)0x3f666666;
      auVar196._8_8_ = 0;
      uVar122 = vmovlps_avx(auVar196);
      pcVar4->r_dot = (float)(int)uVar122;
      uVar102 = w.field116_0x3da0.cell_pickups;
      pcVar4->alpha = (float)(int)((ulonglong)uVar122 >> 0x20);
      auVar248 = vmovshdup_avx(auVar196);
      auVar332 = ZEXT464(0x3f000000);
      piVar160._4_4_ = local_208._4_4_;
      piVar160._0_4_ = (float)local_208;
      if (auVar248._0_4_ < 0.001) {
        lVar133 = (longlong)w.n_cell_pickups + -1;
        w.n_cell_pickups = (int)lVar133;
        cVar58 = w.field116_0x3da0.cell_pickups[lVar133].field7_0x24;
        pcVar4->text_alpha = w.field116_0x3da0.cell_pickups[lVar133].text_alpha;
        pcVar4->field7_0x24 = cVar58;
        pcVar129 = (cell_pickup *)(uVar102 + lVar133 * 0x28);
        uVar122 = *(undefined8 *)((longlong)&(pcVar129->x).field0_0x0 + 4);
        uVar102 = *(undefined8 *)((longlong)&(pcVar129->x_dot).field0_0x0 + 4);
        auVar198._4_4_ = pcVar129->r_dot;
        fVar208 = pcVar129->alpha;
        *(undefined8 *)pcVar4 = *(undefined8 *)pcVar129;
        *(undefined8 *)((longlong)&(pcVar4->x).field0_0x0 + 4) = uVar122;
        *(undefined8 *)((longlong)&(pcVar4->x_dot).field0_0x0 + 4) = uVar102;
        pcVar4->r_dot = auVar198._4_4_;
        pcVar4->alpha = fVar208;
        goto LAB_1400d3110;
      }
      fVar208 = 0.04;
      auVar248 = SUB6416(ZEXT464(0x3d75c28f),0);
    }
    piVar160._4_4_ = fVar245;
    piVar160._0_4_ = fVar172;
    auVar362 = auVar357._0_16_;
    auVar258 = auVar327._0_16_;
    auVar317 = auVar309._0_16_;
    fVar171 = auVar219._0_4_;
    if (fVar171 < 10000.0) {
      auVar248 = ZEXT416((uint)(auVar248._0_4_ + auVar248._0_4_));
    }
    if ((uVar69 & 2) == 0) {
      uVar122 = *(undefined8 *)&(pmVar117->base_color).field0_0x0;
      fVar334 = (pmVar117->base_color).field0_0x0._s_0.z;
      fVar172 = (float)uVar122;
      auVar263._0_4_ = fVar172 + fVar172;
      fVar172 = (float)((ulonglong)uVar122 >> 0x20);
      auVar263._4_4_ = fVar172 + fVar172;
      auVar263._8_8_ = 0;
      fVar172 = fVar334 + fVar334;
      fVar334 = (float)local_208;
      auVar178 = local_1d8;
      auVar294 = local_188;
    }
    else {
      auVar324 = ZEXT1664(ZEXT416((uint)((float)w.frame_number * 0.02)));
      auVar309 = ZEXT1664(auVar317);
      auVar336 = ZEXT1664(ZEXT416((uint)((float)w.frame_number * 0.02)));
      auVar327 = ZEXT1664(auVar258);
      auVar357 = ZEXT1664(auVar362);
      auVar332 = ZEXT1664(auVar332._0_16_);
      auVar350 = ZEXT1664(auVar248);
      auVar353 = ZEXT1664(auVar219);
      cosf();
      auVar346 = ZEXT1664(auVar324._0_16_);
      auVar324 = ZEXT464((uint)(auVar336._0_4_ + 4.1887903));
      cosf();
      auVar324 = ZEXT1664(auVar324._0_16_);
      fVar334 = auVar336._0_4_ + 2.0943952;
      cosf();
      auVar219 = auVar353._0_16_;
      auVar248 = auVar350._0_16_;
      auVar362 = auVar357._0_16_;
      auVar258 = auVar327._0_16_;
      auVar317 = auVar309._0_16_;
      auVar178 = vinsertps_avx(auVar346._0_16_,auVar324._0_16_,0x10);
      auVar263._0_4_ = auVar178._0_4_ * 0.3 + (float)0x3f333333;
      auVar263._4_4_ = auVar178._4_4_ * 0.3 + (float)0x3f333333;
      auVar263._8_4_ = auVar178._8_4_ * 0.0 + 0.0;
      auVar263._12_4_ = auVar178._12_4_ * 0.0 + 0.0;
      fVar172 = fVar334 * 0.3 + 0.7;
      fVar334 = (float)local_208;
      auVar178 = local_1d8;
      auVar294 = local_188;
    }
    local_1d8 = auVar263;
    local_208._0_4_ = fVar172;
    local_188 = auVar294;
    if (fVar171 < 10000.0 || auVar198._4_4_ < 0.25) {
                    /* WARNING: Read-only address (ram,0x0001401bce20) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcf60) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfc0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bd5b0) is written */
                    /* WARNING: Read-only address (ram,0x0001401be9e0) is written */
                    /* WARNING: Read-only address (ram,0x0001401be9f0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bea00) is written */
                    /* WARNING: Read-only address (ram,0x0001401bea10) is written */
                    /* WARNING: Read-only address (ram,0x0001401beeb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf040) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf160) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf1b0) is written */
      local_188._0_8_ = auVar294._0_8_;
      uVar122 = local_188._0_8_;
      uVar69 = (*(uint *)local_188._0_8_ >> 0x10 ^ *(uint *)local_188._0_8_) * 0x7feb352d;
      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar69 = uVar69 >> 0x10 ^ uVar69;
      *(uint *)local_188._0_8_ = uVar69;
      auVar198._4_4_ = 2.3283064e-10;
      auVar219 = ZEXT416((uint)((float)uVar69 * 2.3283064e-10 * 6.2831855));
      auVar324 = ZEXT1664(auVar219);
      auVar309 = ZEXT1664(auVar317);
      auVar332 = ZEXT1664(auVar219);
      auVar327 = ZEXT1664(auVar258);
      auVar357 = ZEXT1664(auVar362);
      auVar350 = ZEXT1664(auVar248);
      cosf();
      auVar346 = ZEXT1664(auVar324._0_16_);
      auVar324 = ZEXT1664(auVar332._0_16_);
      sinf();
      auVar336 = ZEXT1664(auVar324._0_16_);
      auVar353 = ZEXT464((uint)(auVar346._0_4_ * pcVar4->r + (pcVar4->x).field0_0x0._s_0.x));
      auVar324 = ZEXT464((uint)(auVar324._0_4_ * pcVar4->r + (pcVar4->x).field0_0x0._s_0.y));
      uVar69 = *(uint *)uVar122;
      uVar69 = (uVar69 >> 0x10 ^ uVar69) * 0x7feb352d;
      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar69 = uVar69 >> 0x10 ^ uVar69;
      uVar109 = (ulonglong)uVar69;
      *(uint *)uVar122 = uVar69;
      auVar198._4_4_ = auVar198._4_4_ * (float)uVar109;
      rVar169 = (real_2_u_0)((longlong)piVar160 + -1);
      if ((auVar198._4_4_ != auVar309._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar309._0_4_))) {
        fVar171 = auVar357._0_4_;
        uVar123 = 0;
        if ((auVar198._4_4_ != fVar171) || (NAN(auVar198._4_4_) || NAN(fVar171))) {
          dVar176 = (double)(auVar198._4_4_ / (fVar171 - auVar198._4_4_));
          log();
          uVar123 = (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006);
          uVar109 = (ulonglong)*(uint *)local_188._0_8_;
        }
      }
      else {
        uVar123 = 0;
      }
      fVar172 = auVar350._0_4_;
      fVar334 = auVar346._0_4_;
      uVar96 = auVar324._0_4_;
      fVar171 = auVar336._0_4_;
      uVar69 = ((uint)(uVar109 >> 0x10) ^ (uint)uVar109) * 0x7feb352d;
      uVar69 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
      uVar69 = uVar69 >> 0x10 ^ uVar69;
      *(uint *)local_188._0_8_ = uVar69;
      auVar198._4_4_ = (float)uVar69 * 2.3283064e-10;
      auVar332 = ZEXT464(0x3f000000);
      if ((auVar198._4_4_ != auVar309._0_4_) || (NAN(auVar198._4_4_) || NAN(auVar309._0_4_))) {
        fVar245 = auVar357._0_4_;
        if ((auVar198._4_4_ != fVar245) || (NAN(auVar198._4_4_) || NAN(fVar245))) {
          dVar176 = (double)(auVar198._4_4_ / (fVar245 - auVar198._4_4_));
          log();
          fVar172 = auVar350._0_4_;
          fVar334 = auVar346._0_4_;
          uVar96 = auVar324._0_4_;
          fVar171 = auVar336._0_4_;
          uVar123 = uVar123 | (ulonglong)(uint)(float)(dVar176 * 0.6266570687294006) << 0x20;
        }
      }
      rVar124 = (real_2_u_0)(CONCAT44(auVar294._4_4_,auVar353._0_4_) | (ulonglong)uVar96 << 0x20);
      rVar125 = (real_2_u_0)
                ((ulonglong)(uint)(fVar172 * fVar334 + fVar208 * (float)uVar123) |
                CONCAT44(uVar96,fVar172 * fVar171 + fVar208 * (float)(uVar123 >> 0x20)) << 0x20);
      pvVar73 = TlsGetValue(tls_index);
      auVar219 = auVar353._0_16_;
      if ((settings.limit_particles == 0) || ((uint)w.n_particles < settings.max_particles)) {
        lVar133 = (longlong)w.max_particles;
        auVar324 = ZEXT464((uint)local_120._0_4_);
        auVar336 = ZEXT464(0x4a095440);
        auVar248._4_4_ = w.n_particles;
        if (w.max_particles <= w.n_particles) {
          w.max_particles = w.max_particles * 2;
          bVar170 = expand_memory(&w.field119_0x3dc0.particles_memory,lVar133 * 0xf0);
          auVar219 = auVar353._0_16_;
          puVar75 = local_1c8;
          auVar248._4_4_ = w.n_particles;
          if (!bVar170) goto LAB_1400d1c40;
        }
        uVar102 = w.field119_0x3dc0.particles;
        w.n_particles = auVar248._4_4_ + 1;
        w.field119_0x3dc0.particles[auVar248._4_4_].type = 0xc;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x).field0_0x0 = rVar124;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x_dot).field0_0x0 = rVar125;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x_spawn).field0_0x0 =
             (real_2_u_0)0x0;
        ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->target = 0;
        uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
        ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->r = (float)(int)uVar122;
        ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->r_dot =
             (float)(int)((ulonglong)uVar122 >> 0x20);
        ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->time = 0;
        ((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->duration = 0x78;
        rVar125 = (real_2_u_0)vmovlps_avx(local_1d8);
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color).field0_0x0.xy.
        field0_0x0 = rVar125;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color).field0_0x0._s_0.z =
             (float)local_208;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color).field0_0x0._s_0.w = 0.5
        ;
        rVar125 = (real_2_u_0)vmovlps_avx(local_1d8);
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_initial).field0_0x0.xy.
        field0_0x0 = rVar125;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_initial).field0_0x0._s_0
        .z = (float)local_208;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_initial).field0_0x0._s_0
        .w = 0.5;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_final).field0_0x0.xy.
        field0_0x0 = (real_2_u_0)0x3f8000003f800000;
        *(undefined8 *)
         ((longlong)
          &(((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->color_final).field0_0x0.
           _s_2.yz.field0_0x0 + 4) = 0x3f800000;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->emission).field0_0x0 =
             (real_4_u_0)(ZEXT816(0) << 0x20);
        *(undefined8 *)
         ((longlong)
          &(((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->emission).field0_0x0 + 0xd)
             = 0;
        (((particle_t *)(uVar102 + (longlong)auVar248._4_4_ * 0x78))->x_spawn).field0_0x0 = rVar124;
        puVar75 = local_1c8;
      }
      else {
        uVar69 = (*(uint *)((longlong)pvVar73 + 0x6c) >> 0x10 ^ *(uint *)((longlong)pvVar73 + 0x6c))
                 * 0x7feb352d;
        uVar96 = (uVar69 >> 0xf ^ uVar69) * -0x7b935975;
        uVar96 = uVar96 >> 0x10 ^ uVar96;
        uVar69 = (uint)((float)uVar96 * 2.3283064e-10 * (float)w.n_particles);
        if ((int)(w.n_particles - 1U) < (int)uVar69) {
          uVar69 = w.n_particles - 1U;
        }
        uVar109 = (ulonglong)uVar69;
        *(uint *)((longlong)pvVar73 + 0x6c) = uVar96;
        if ((int)uVar69 < 1) {
          uVar109 = 0;
        }
        auVar324 = ZEXT464((uint)local_120._0_4_);
        auVar336 = ZEXT464(0x4a095440);
        puVar75 = local_1c8;
        if (w.field119_0x3dc0.particles[uVar109].affects_gameplay == false) {
          ppVar79 = w.field119_0x3dc0.particles + uVar109;
          ppVar79->type = 0xc;
          (ppVar79->x).field0_0x0 = rVar124;
          (ppVar79->x_dot).field0_0x0 = rVar125;
          (ppVar79->x_spawn).field0_0x0 = (real_2_u_0)0x0;
          ppVar79->target = 0;
          uVar122 = vmovlps_avx(SUB6416(ZEXT464(0x3f000000),0));
          ppVar79->r = (float)(int)uVar122;
          ppVar79->r_dot = (float)(int)((ulonglong)uVar122 >> 0x20);
          ppVar79->time = 0;
          ppVar79->duration = 0x78;
          rVar124 = (real_2_u_0)vmovlps_avx(local_1d8);
          (ppVar79->color).field0_0x0.xy.field0_0x0 = rVar124;
          (ppVar79->color).field0_0x0._s_0.z = (float)local_208;
          (ppVar79->color).field0_0x0._s_0.w = 0.5;
          rVar124 = (real_2_u_0)vmovlps_avx(local_1d8);
          (ppVar79->color_initial).field0_0x0.xy.field0_0x0 = rVar124;
          (ppVar79->color_initial).field0_0x0._s_0.z = (float)local_208;
          (ppVar79->color_initial).field0_0x0._s_0.w = 0.5;
          (ppVar79->color_final).field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f800000;
          *(undefined8 *)((longlong)&(ppVar79->color_final).field0_0x0._s_2.yz.field0_0x0 + 4) =
               0x3f800000;
          (ppVar79->emission).field0_0x0 = (real_4_u_0)(ZEXT816(0) << 0x20);
          *(undefined8 *)((longlong)&(ppVar79->emission).field0_0x0 + 0xd) = 0;
        }
      }
      goto LAB_1400d1c40;
    }
                    /* WARNING: Read-only address (ram,0x0001401bce20) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcf60) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfc0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bd5b0) is written */
                    /* WARNING: Read-only address (ram,0x0001401be9e0) is written */
                    /* WARNING: Read-only address (ram,0x0001401be9f0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bea00) is written */
                    /* WARNING: Read-only address (ram,0x0001401bea10) is written */
                    /* WARNING: Read-only address (ram,0x0001401beeb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf040) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf160) is written */
                    /* WARNING: Read-only address (ram,0x0001401bf1b0) is written */
    auVar324 = ZEXT464((uint)local_120._0_4_);
    local_208._0_4_ = fVar334;
    local_1d8 = auVar178;
  }
LAB_1400d3110:
  rVar169 = (real_2_u_0)((longlong)piVar160 + -1);
  auVar336 = ZEXT464(0x4a095440);
  puVar75 = local_1c8;
LAB_1400d1c40:
  auVar248 = auVar324._0_16_;
  rVar124 = rVar169;
  if ((longlong)piVar160 < 2) goto LAB_1400d37c6;
  goto LAB_1400d1c4a;
}

