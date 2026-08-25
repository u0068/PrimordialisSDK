
int __cdecl combine_materials(int index_1,int index_2)

{
  material_t *p_index_1;
  material_t *p_index_2;
  undefined4 max_health_1;
  undefined4 max_health_2;
  undefined4 leeching_2;
  undefined4 uVar6;
  undefined4 max_radial_force_2;
  undefined4 friction_1;
  undefined4 friction_2;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 transfer_rate_1;
  undefined4 transfer_rate_2;
  undefined8 uVar14;
  undefined4 hardness_2;;
  undefined4 max_angular_force_1;
  undefined4 max_angular_force_2;
  undefined4 restitution_1;
  undefined4 restitution_2;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  _func___cdecl_void_cell_ptr *p_func_2;
  material_t *p_new_combo;
  material_t *p_materials_list_2;
  int i_n_materials;
  char **ppcVar30;
  float *pfVar31;
  uint combo_id;
  int extraout_EAX;
  code *p_func_1;
  longlong extraout_RAX;
  longlong extraout_RAX_00;
  longlong extraout_RAX_01;
  uchar *pmax_health_14;
  int_2 iVar35;
  int_2 iVar36;
  real_2_u_0 rVar37;
  longlong ll_n_materials;
  int iVar39;
  longlong lVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  uint max_health_24;
  int iVar45;
  ulonglong max_health_26;
  char *pcVar47;
  ulonglong max_health_28;
  int iVar49;
  float f_random_cost_1;
  float f_genome_size_1;
  float f_growth_rate_1;
  undefined1 combo_real_4 [16];
  undefined1 combo_real_4_2 [16];
  float f_random_cost_2;
  undefined1 combo_real_4_5 [16];
  undefined1 combo_real_4_6 [16];
  undefined1 combo_real_4_8 [16];
  undefined1 combo_real_4_14 [16];
  undefined1 combo_real_4_16 [16];
  undefined1 combo_real_4_21 [16];
  float fVar69;
  undefined1 combo_real_4_3 [16];
  undefined1 combo_real_4_4 [16];
  undefined1 combo_real_4_10 [16];
  undefined1 combo_real_4_11 [16];
  undefined1 combo_real_4_12 [16];
  float fVar70;
  undefined1 combo_real_4_19 [16];
  undefined1 combo_real_8_1 [32];
  float f_genome_size_2;
  undefined1 combo_real_4_7 [16];
  float f_growth_rate_2;
  undefined1 combo_real_4_13 [16];
  undefined1 combo_real_4_9 [16];
  undefined1 combo_real_4_15 [16];
  undefined1 combo_real_4_17 [16];
  undefined1 amax_radial_force_28 [16];
  undefined1 combo_real_4_20 [16];
  undefined1 combo_real_4_22 [16];
  undefined1 afriction_11 [64];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 afriction_16 [64];
  undefined1 combo_real_4_18 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  i_n_materials = n_materials;
  p_materials_list_2 = materials_list;
  p_index_1 = materials_list + index_1;
  p_index_2 = materials_list + index_2;
  ll_n_materials = (longlong)n_materials;
  n_materials = n_materials + 1;
  memcpy();
  combo_id = n_material_combos | 0x80000000;
  n_material_combos = n_material_combos + 1;
  p_materials_list_2[ll_n_materials].id = combo_id;
  p_func_1 = p_materials_list_2[index_1].physics_update_fn;
  if (p_func_1 == (_func___cdecl_void_cell_ptr *)0x0) {
    p_materials_list_2[ll_n_materials].physics_update_fn = p_materials_list_2[index_2].physics_update_fn;
    p_func_1 = p_index_1->force_update_fn;
    p_func_2 = p_index_2->force_update_fn;
  }
  else {
    if (p_materials_list_2[index_2].physics_update_fn != (_func___cdecl_void_cell_ptr *)0x0) {
      p_func_1 = cell_combo_physics;
    }
    p_materials_list_2[ll_n_materials].physics_update_fn = p_func_1;
    p_func_1 = p_index_1->force_update_fn;
    p_func_2 = p_index_2->force_update_fn;
  }
  if (p_func_1 == (_func___cdecl_void_cell_ptr *)0x0) {
    p_materials_list_2[ll_n_materials].force_update_fn = p_func_2;
    p_func_1 = p_index_1->electric_update_fn;
    p_func_2 = p_index_2->electric_update_fn;
  }
  else {
    if (p_func_2 != (_func___cdecl_void_cell_ptr *)0x0) {
      p_func_1 = cell_combo_force;
    }
    p_materials_list_2[ll_n_materials].force_update_fn = p_func_1;
    p_func_1 = p_index_1->electric_update_fn;
    p_func_2 = p_index_2->electric_update_fn;
  }
  if (p_func_1 == (_func___cdecl_void_cell_ptr *)0x0) {
    p_materials_list_2[ll_n_materials].electric_update_fn = p_func_2;
    p_func_1 = p_index_1->connection_update_fn;
    p_func_2 = p_index_2->connection_update_fn;
  }
  else {
    if (p_func_2 != (_func___cdecl_void_cell_ptr *)0x0) {
      p_func_1 = cell_combo_electric;
    }
    p_materials_list_2[ll_n_materials].electric_update_fn = p_func_1;
    p_func_1 = p_index_1->connection_update_fn;
    p_func_2 = p_index_2->connection_update_fn;
  }
  if (p_func_1 == (_func___cdecl_void_cell_ptr *)0x0) {
    p_materials_list_2[ll_n_materials].connection_update_fn = p_func_2;
    p_func_1 = p_index_1->brain_fn;
    p_func_2 = p_index_2->brain_fn;
  }
  else {
    if (p_func_2 != (_func___cdecl_void_cell_ptr *)0x0) {
      p_func_1 = cell_combo_connection;
    }
    p_materials_list_2[ll_n_materials].connection_update_fn = p_func_1;
    p_func_1 = p_index_1->brain_fn;
    p_func_2 = p_index_2->brain_fn;
  }
  if (p_func_1 == (_func___cdecl_void_cell_ptr *)0x0) {
    p_materials_list_2[ll_n_materials].brain_fn = p_func_2;
    p_func_1 = p_index_1->destroyed_fn;
    p_func_2 = p_index_2->destroyed_fn;
  }
  else {
    if (p_func_2 != (_func___cdecl_void_cell_ptr *)0x0) {
      p_func_1 = cell_combo_brain;
    }
    p_materials_list_2[ll_n_materials].brain_fn = p_func_1;
    p_func_1 = p_index_1->destroyed_fn;
    p_func_2 = p_index_2->destroyed_fn;
  }
  if (p_func_1 == (_func___cdecl_void_cell_ptr *)0x0) {
    p_materials_list_2[ll_n_materials].destroyed_fn = p_func_2;
  }
  else {
    if (p_func_2 != (_func___cdecl_void_cell_ptr *)0x0) {
      p_func_1 = cell_combo_destroyed;
    }
    p_materials_list_2[ll_n_materials].destroyed_fn = p_func_1;
  }
  f_random_cost_1 = p_index_1->random_cost;
  f_genome_size_1 = p_index_1->genome_size;
  f_growth_rate_1 = p_index_1->growth_rate;
  f_random_cost_2 = p_index_2->random_cost;
  f_genome_size_2 = p_index_2->genome_size;
  f_growth_rate_2 = p_index_2->growth_rate;
  p_materials_list_2[ll_n_materials].base_cost = p_index_1->base_cost + p_index_2->base_cost;
  p_materials_list_2[ll_n_materials].random_cost = f_random_cost_1 + f_random_cost_2;
  p_materials_list_2[ll_n_materials].genome_size = f_genome_size_1 + f_genome_size_2;
  p_materials_list_2[ll_n_materials].growth_rate = f_growth_rate_1 + f_growth_rate_2;
  max_health_1 = p_index_1->max_health;
  transfer_rate_1 = p_index_1->transfer_rate;
  max_health_2 = p_index_2->max_health;
  transfer_rate_2 = p_index_2->transfer_rate;
  combo_real_4.x = (float)max_health_1 + (float)max_health_2;
  combo_real_4.y = (float)transfer_rate_1 + (float)transfer_rate_2;
  combo_real_4.zw = 0;
  uVar14 = vmovlps_avx(combo_real_4);
  p_materials_list_2[ll_n_materials].max_health = (float)(int)uVar14;
  p_materials_list_2[ll_n_materials].transfer_rate = (float)(int)((ulonglong)uVar14 >> 0x20);
  p_materials_list_2[ll_n_materials].regen = p_index_1->regen + p_index_2->regen;
  p_materials_list_2[ll_n_materials].field14_0x4c.flags = (p_index_2->field14_0x4c).flags | (p_index_1->field14_0x4c).flags;
  leeching_2 = p_index_2->leeching;
  hardness_2; = p_index_2->hardness;
  combo_real_4_2.y = hardness_2;;
  combo_real_4_2.x = leeching_2;
  combo_real_4_2.zw = 0;
  combo_real_4_3.z = 0x80000000;
  combo_real_4_3.xy = 0x8000000080000000;
  combo_real_4_3.w = 0x80000000;
  combo_real_4 = vinsertps_avx(combo_real_4_3,combo_real_4_2,0x70);
  f_density_1 = combo_real_4.x + p_index_1->density;
  f_sharpness_1 = combo_real_4.y + p_index_1->sharpness;
  f_leeching_1 = combo_real_4.z + p_index_1->leeching;
  f_hardness_1 = combo_real_4.w + p_index_1->hardness;
  combo_real_4_4.x = f_density_1 + p_index_2->density;
  combo_real_4_4.y = f_sharpness_1 + p_index_2->sharpness;
  combo_real_4_4.z = f_leeching_1 + p_index_2->leeching;
  combo_real_4_4.w = f_hardness_1 + p_index_2->hardness;
  combo_real_4_5.x = f_density_1 * 0.0;
  combo_real_4_5.y = f_sharpness_1 * 0.0;
  combo_real_4_5.z = f_leeching_1 * 0.0;
  combo_real_4_5.w = f_hardness_1 * 0.5;
  combo_real_4 = vblendps_avx(combo_real_4_4,combo_real_4_5,8);
  p_new_combo = p_materials_list_2 + ll_n_materials;
  p_new_combo->density = (float)combo_real_4.x;
  p_new_combo->sharpness = (float)combo_real_4.y;
  p_new_combo->leeching = (float)combo_real_4.z;
  p_new_combo->hardness = (float)combo_real_4.w;
  max_radial_force_1 = p_index_1->max_radial_force;
  max_angular_force_1 = p_index_1->max_angular_force;
  max_radial_force_2 = p_index_2->max_radial_force;
  max_angular_force_2 = p_index_2->max_angular_force;
  combo_real_4_6.x = (float)max_radial_force_1 + (float)max_radial_force_2;
  combo_real_4_6.y = (float)max_angular_force_1 + (float)max_angular_force_2;
  combo_real_4_6.zw = 0;
  uVar14 = vmovlps_avx(combo_real_4_6);
  p_materials_list_2[ll_n_materials].max_radial_force = (float)(int)uVar14;
  p_materials_list_2[ll_n_materials].max_angular_force = (float)(int)((ulonglong)uVar14 >> 0x20);
  f_random_cost_1 = p_index_1->radial_compliance * p_index_2->radial_compliance;
  p_materials_list_2[ll_n_materials].radial_compliance = f_random_cost_1;
  if (0.0 < f_random_cost_1) {
    p_materials_list_2[ll_n_materials].radial_compliance =
         f_random_cost_1 / (p_index_1->radial_compliance + p_index_2->radial_compliance);
  }
  f_random_cost_1 = p_index_1->angular_compliance * p_index_2->angular_compliance;
  p_materials_list_2[ll_n_materials].angular_compliance = f_random_cost_1;
  if (0.0 < f_random_cost_1) {
    p_materials_list_2[ll_n_materials].angular_compliance =
         f_random_cost_1 / (p_index_1->angular_compliance + p_index_2->angular_compliance);
  }
  p_materials_list_2[ll_n_materials].plasticity = (p_index_1->plasticity + p_index_2->plasticity) * 0.5;
  friction_1 = p_index_1->friction;
  restitution_1 = p_index_1->restitution;
  friction_2 = p_index_2->friction;
  restitution_2 = p_index_2->restitution;
  combo_real_4_7.x = (float)friction_1 + (float)friction_2;
  combo_real_4_7.y = (float)restitution_1 + (float)restitution_2;
  combo_real_4_7.zw = 0;
  combo_real_4_8.x = (float)friction_1 * (float)friction_2;
  combo_real_4_8.y = (float)restitution_1 * (float)restitution_2;
  combo_real_4_8.zw = 0;
  combo_real_4 = vblendps_avx(combo_real_4_7,combo_real_4_8,2);
  uVar14 = vmovlps_avx(combo_real_4);
  p_materials_list_2[ll_n_materials].friction = (float)(int)uVar14;
  p_materials_list_2[ll_n_materials].restitution = (float)(int)((ulonglong)uVar14 >> 0x20);
  combo_real_4 = vmovshdup_avx(combo_real_4_8);
  if (0.0 < combo_real_4.x) {
    p_materials_list_2[ll_n_materials].restitution = combo_real_4.x / (p_index_1->restitution + p_index_2->restitution);
  }
  tangent_drag_1 = p_index_1->tangent_drag;
  movement_force_1 = p_index_1->movement_force;
  conductivity_1 = p_index_1->conductivity;
  f_genome_size_2 = p_index_2->tangent_drag;
  f_growth_rate_2 = p_index_2->movement_force;
  fVar69 = p_index_2->conductivity;
  uVar10 = p_index_1->leak_conductivity;
  uVar22 = p_index_1->capacitance;
  uVar11 = p_index_2->leak_conductivity;
  uVar23 = p_index_2->capacitance;
  combo_real_4_9.x = (float)uVar10 + (float)uVar11;
  combo_real_4_9.y = (float)uVar22 + (float)uVar23;
  combo_real_4_9.zw = 0;
  combo_real_4 = vmovshdup_avx(combo_real_4_9);
  combo_real_4 = vinsertps_avx(combo_real_4_9,ZEXT416((uint)(1.0 / combo_real_4.x)),0x20);
  combo_real_4 = vinsertps_avx(combo_real_4,ZEXT416((uint)(p_index_1->directional_conductivity +
                                                p_index_2->directional_conductivity)),0x30);
  f_random_cost_1 = p_index_1->heat_capacity + p_index_2->heat_capacity;
  p_materials_list_2[ll_n_materials].drag = (p_index_1->drag + p_index_2->drag) * 0.5;
  p_materials_list_2[ll_n_materials].tangent_drag = (tangent_drag_1 + f_genome_size_2) * 0.5;
  p_materials_list_2[ll_n_materials].movement_force = (movement_force_1 + f_growth_rate_2) * 1.0;
  p_materials_list_2[ll_n_materials].conductivity = (conductivity_1 + fVar69) * 1.0;
  p_materials_list_2[ll_n_materials].leak_conductivity = combo_real_4.x * 1.0;
  p_materials_list_2[ll_n_materials].capacitance = combo_real_4.y * 1.0;
  p_materials_list_2[ll_n_materials].inv_capacitance = combo_real_4.z * 1.0;
  p_materials_list_2[ll_n_materials].directional_conductivity = combo_real_4.w * 1.0;
  uVar12 = p_index_1->heat_conductivity;
  uVar24 = p_index_1->leak_heat_conductivity;
  uVar13 = p_index_2->heat_conductivity;
  uVar25 = p_index_2->leak_heat_conductivity;
  combo_real_8_1._20_4_ = (p_index_2->base_color).field0_0x0._s_0.y + (p_index_1->base_color).field0_0x0._s_0.y;
  combo_real_8_1._16_4_ = (p_index_2->base_color).field0_0x0._s_0.x + (p_index_1->base_color).field0_0x0._s_0.x;
  combo_real_8_1._24_4_ = (p_index_2->base_color).field0_0x0._s_0.z + (p_index_1->base_color).field0_0x0._s_0.z;
  combo_real_8_1._28_4_ = (p_index_2->base_color).field0_0x0._s_0.w + (p_index_1->base_color).field0_0x0._s_0.w;
  combo_real_4_10.y = 0;
  combo_real_4_10.x = f_random_cost_1;
  combo_real_4_10.z = f_random_cost_1;
  combo_real_4_10.w = 0;
  combo_real_4 = vinsertps_avx(combo_real_4_10,ZEXT416((uint)(1.0 / f_random_cost_1)),0x30);
  combo_real_8_1._0_16_ = combo_real_4;
  combo_real_8_1 = vblendps_avx(combo_real_8_1,ZEXT832(CONCAT44((float)uVar24 + (float)uVar25,
                                                  (float)uVar12 + (float)uVar13)),3);
  p_materials_list_2[ll_n_materials].heat_conductivity = combo_real_8_1.x * 1.0;
  p_materials_list_2[ll_n_materials].leak_heat_conductivity = combo_real_8_1.y * 1.0;
  p_materials_list_2[ll_n_materials].heat_capacity = combo_real_8_1.z * 1.0;
  p_materials_list_2[ll_n_materials].inv_heat_capacity = combo_real_8_1.w * 1.0;
  p_materials_list_2[ll_n_materials].base_color.field0_0x0._s_0.x = combo_real_8_1._16_4_ * 0.5;
  p_materials_list_2[ll_n_materials].base_color.field0_0x0._s_0.y = combo_real_8_1._20_4_ * 0.5;
  p_materials_list_2[ll_n_materials].base_color.field0_0x0._s_0.z = combo_real_8_1._24_4_ * 0.5;
  p_materials_list_2[ll_n_materials].base_color.field0_0x0._s_0.w = combo_real_8_1._28_4_ * 0.5;
  f_random_cost_1 = (p_index_2->emission).field0_0x0._s_0.z;
  f_genome_size_1 = (p_index_1->emission).field0_0x0._s_0.z;
  max_health_28.x = p_index_2->light_radius;
  max_health_28.y = p_index_2->light_intensity;
  combo_real_4_11.zw = 0;
  combo_real_4_11.xy = max_health_28;
  combo_real_4 = vinsertps_avx(SUB6416(ZEXT464(0x80000000),0),combo_real_4_11,0x5c);
  combo_real_4 = vmovhps_avx(combo_real_4,(p_index_2->emission).field0_0x0.xy.field0_0x0);
  f_growth_rate_1 = combo_real_4.x + p_index_1->light_radius;
  f_random_cost_2 = combo_real_4.y + p_index_1->light_intensity;
  f_genome_size_2 = combo_real_4.z + (p_index_1->emission).field0_0x0._s_0.x;
  f_growth_rate_2 = combo_real_4.w + (p_index_1->emission).field0_0x0._s_0.y;
  combo_real_4_12.x = f_growth_rate_1 + (float)(undefined4)max_health_28;
  combo_real_4_12.y = f_random_cost_2 + (float)max_health_28.y;
  combo_real_4_12.z = f_genome_size_2 + 0.0;
  combo_real_4_12.w = f_growth_rate_2 + 0.0;
  combo_real_4_13.x = f_growth_rate_1 * 0.0;
  combo_real_4_13.y = f_random_cost_2 * 0.5;
  combo_real_4_13.z = f_genome_size_2 * 0.5;
  combo_real_4_13.w = f_growth_rate_2 * 0.5;
  combo_real_4 = vblendps_avx(combo_real_4_13,combo_real_4_12,1);
  *(undefined1 (*) [16])&p_materials_list_2[ll_n_materials].light_radius = combo_real_4;
  p_materials_list_2[ll_n_materials].emission.field0_0x0._s_0.z = (f_random_cost_1 + f_genome_size_1) * 0.5;
  iVar39 = p_index_2->texture_type;
  if (p_index_2->texture_type < p_index_1->texture_type) {
    iVar39 = p_index_1->texture_type;
  }
  p_materials_list_2[ll_n_materials].texture_type = iVar39;
  p_materials_list_2[ll_n_materials].combine_material_index1 = index_1;
  p_materials_list_2[ll_n_materials].combine_material_index2 = index_2;
  combo_id = w.translations.max_entries;
  ppcVar30 = w.translations.keys;
  max_health_28 = (ulonglong)w.translations.max_entries;
  max_health_26 = 0x2473b7d5U % max_health_28;
  do {
    if ((ppcVar30[(int)max_health_26] == (char *)0x0) || (strcmp(), extraout_EAX == 0)) break;
    max_health_24 = (int)max_health_26 + 1;
    max_health_26 = (ulonglong)max_health_24;
    if (max_health_24 == combo_id) {
      max_health_26 = 0;
    }
  } while ((int)max_health_26 != (int)(0x2473b7d5U % max_health_28));
  strlen();
  max_health_26 = 0;
  max_health_28 = (extraout_RAX << 0x20) + 0x100000000 >> 0x20;
  if (-0x7f000001 < (int)p_index_2->id) {
    max_health_28 = max_health_26;
  }
  pcVar47 = p_index_2->name + max_health_28;
  strlen();
  strlen();
  pmax_health_14 = dynamic_alloc(((extraout_RAX << 0x20) + 0x4000000000 >> 0x20) + extraout_RAX_00 +
                          extraout_RAX_01);
  p_materials_list_2[ll_n_materials].name = (char *)pmax_health_14;
  sprintf((char *)pmax_health_14,"%s (%s & %s)");
  iVar35 = get_icon_coords(next_icon_index);
  max_health_28 = (ulonglong)iVar35.field0_0x0 >> 0x20;
  iVar36 = get_icon_coords(next_icon_index);
  rVar37._s_0.y =
       ((float)iVar36.field0_0x0.y + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
  rVar37._s_0.x =
       ((float)iVar36.field0_0x0.x + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
  p_materials_list_2[ll_n_materials].uv.field0_0x0 = rVar37;
  next_icon_index = next_icon_index + 1;
  afriction_11 = ZEXT1664(CONCAT412(0x43000000,CONCAT48(0x43000000,0x4300000043000000)));
  afriction_16 = ZEXT1664(CONCAT412(0x42fe0000,CONCAT48(0x42fe0000,0x42fe000042fe0000)));
  do {
    combo_real_4_14.z = 0x3f800000;
    combo_real_4_14.xy = 0x3f8000003f800000;
    combo_real_4_14.w = 0x3f800000;
    f_random_cost_1 = ((float)max_health_26 + 0.5) * 0.015625 + -1.0;
    f_genome_size_1 = f_random_cost_1 * 1.6666666;
    combo_real_4 = vinsertps_avx(ZEXT416((uint)(f_genome_size_1 + 0.0)),ZEXT416((uint)f_genome_size_1),0x10);
    f_growth_rate_1 = combo_real_4.x;
    f_random_cost_2 = combo_real_4.y;
    f_genome_size_2 = combo_real_4.z;
    f_genome_size_1 = combo_real_4.w;
    combo_real_4_15.x = (f_growth_rate_1 + 1.0) * 64.0 + -0.5;
    combo_real_4_15.y = (f_random_cost_2 + 1.0) * 64.0 + -0.5;
    combo_real_4_15.z = (f_genome_size_2 + 1.0) * 64.0 + -0.5;
    combo_real_4_15.w = (f_genome_size_1 + 1.0) * 64.0 + -0.5;
    combo_real_4 = vminps_avx(afriction_11._0_16_,combo_real_4_15);
    combo_real_4 = vmaxps_avx(ZEXT816(0),combo_real_4);
    combo_real_4_2 = vroundps_avx(combo_real_4,9);
    combo_real_4_2 = vminps_avx(afriction_16._0_16_,combo_real_4_2);
    combo_real_4_6 = vsubps_avx(combo_real_4,combo_real_4_2);
    combo_real_4 = vmovshdup_avx(combo_real_4_2);
    combo_real_4_3 = vsubps_avx(combo_real_4_14,combo_real_4_6);
    combo_real_4_5 = vmovsldup_avx(ZEXT416((uint)f_random_cost_1));
    ll_n_materials = 0;
    do {
      pfVar31 = icon_atlas;
      f_random_cost_1 = ((float)(int)ll_n_materials + 0.5) * 0.015625 + -1.0;
      iVar42 = (int)((float)icon_texture.size.field0_0x0._s_0.y * (p_index_2->uv).field0_0x0._s_0.y +
                    -64.5);
      iVar39 = (int)((float)icon_texture.size.field0_0x0._s_0.y * (p_index_1->uv).field0_0x0._s_0.y +
                    -64.5);
      combo_real_4_4 = vmovsldup_avx(ZEXT416((uint)(f_random_cost_1 * 1.6666666)));
      fVar82 = combo_real_4_4.x + 0.5;
      fVar83 = combo_real_4_4.y + -0.5;
      fVar84 = combo_real_4_4.z + 0.0;
      fVar85 = combo_real_4_4.w + 0.0;
      combo_real_4_16.z = 0x3f800000;
      combo_real_4_16.xy = 0x3f8000003f800000;
      combo_real_4_16.w = 0x3f800000;
      combo_real_4_17.x = (fVar82 + 1.0) * 64.0 + -0.5;
      combo_real_4_17.y = (fVar83 + 1.0) * 64.0 + -0.5;
      combo_real_4_17.z = (fVar84 + 1.0) * 64.0 + -0.5;
      combo_real_4_17.w = (fVar85 + 1.0) * 64.0 + -0.5;
      combo_real_4_4 = vminps_avx(afriction_11._0_16_,combo_real_4_17);
      combo_real_4_18.xyz = ZEXT812(0);
      combo_real_4_18.w = 0;
      combo_real_4_4 = vmaxps_avx(combo_real_4_18,combo_real_4_4);
      combo_real_4_8 = vroundps_avx(combo_real_4_4,9);
      iVar43 = (iVar42 + (int)combo_real_4.x) * icon_texture.size.field0_0x0._s_0.x;
      combo_real_4_11 = vminps_avx(afriction_16._0_16_,combo_real_4_8);
      combo_real_4_8 = vmovshdup_avx(combo_real_4_11);
      iVar41 = (int)combo_real_4_8.x +
               (int)((float)icon_texture.size.field0_0x0._s_0.x * (p_index_2->uv).field0_0x0._s_0.x +
                    -64.5);
      iVar45 = (iVar39 + (int)combo_real_4_2.x) * icon_texture.size.field0_0x0._s_0.x;
      iVar49 = (int)combo_real_4_11.x +
               (int)((float)icon_texture.size.field0_0x0._s_0.x * (p_index_1->uv).field0_0x0._s_0.x +
                    -64.5);
      combo_real_4_8 = vinsertps_avx(ZEXT416((uint)icon_atlas[iVar49 + iVar45 + 1]),
                              ZEXT416((uint)icon_atlas[iVar43 + 1 + iVar41]),0x10);
      iVar42 = (iVar42 + (int)combo_real_4.x + 1) * icon_texture.size.field0_0x0._s_0.x;
      iVar39 = (iVar39 + (int)combo_real_4_2.x + 1) * icon_texture.size.field0_0x0._s_0.x;
      combo_real_4_7 = vinsertps_avx(ZEXT416((uint)icon_atlas[iVar45 + iVar49]),
                              ZEXT416((uint)icon_atlas[iVar43 + iVar41]),0x10);
      combo_real_4_10 = vinsertps_avx(ZEXT416((uint)icon_atlas[iVar49 + iVar39]),
                              ZEXT416((uint)icon_atlas[iVar41 + iVar42]),0x10);
      combo_real_4_12 = vmovsldup_avx(ZEXT416((uint)f_random_cost_1));
      f_random_cost_1 = combo_real_4_12.x + -0.3;
      f_growth_rate_2 = combo_real_4_12.y + 0.3;
      fVar69 = combo_real_4_12.z + 0.0;
      fVar70 = combo_real_4_12.w + 0.0;
      local_108 = combo_real_4_5.x;
      fStack_104 = combo_real_4_5.y;
      fStack_100 = combo_real_4_5.z;
      fStack_fc = combo_real_4_5.w;
      combo_real_4_19.x = local_108 * local_108 + f_random_cost_1 * f_random_cost_1 + 0.0;
      combo_real_4_19.y = fStack_104 * fStack_104 + f_growth_rate_2 * f_growth_rate_2 + 0.0;
      combo_real_4_19.z = fStack_100 * fStack_100 + fVar69 * fVar69 + 0.0;
      combo_real_4_19.w = fStack_fc * fStack_fc + fVar70 * fVar70 + 0.0;
      combo_real_4_9 = vsqrtps_avx(combo_real_4_19);
      combo_real_4_13 = vmovshdup_avx(combo_real_4_9);
      combo_real_4_20.x = f_growth_rate_1 * f_growth_rate_1 + fVar82 * fVar82 + 0.0;
      combo_real_4_20.y = f_random_cost_2 * f_random_cost_2 + fVar83 * fVar83 + 0.0;
      combo_real_4_20.z = f_genome_size_2 * f_genome_size_2 + fVar84 * fVar84 + 0.0;
      combo_real_4_20.w = f_genome_size_1 * f_genome_size_1 + fVar85 * fVar85 + 0.0;
      combo_real_4_14 = vsubps_avx(combo_real_4_4,combo_real_4_11);
      combo_real_4_12 = vminss_avx(combo_real_4_9,combo_real_4_13);
      combo_real_4_15 = vsubps_avx(combo_real_4_16,combo_real_4_14);
      local_f8 = combo_real_4_3.x;
      fStack_f4 = combo_real_4_3.y;
      fStack_f0 = combo_real_4_3.z;
      fStack_ec = combo_real_4_3.w;
      local_138 = combo_real_4_6.x;
      fStack_134 = combo_real_4_6.y;
      fStack_130 = combo_real_4_6.z;
      fStack_12c = combo_real_4_6.w;
      afriction_16 = ZEXT1664(afriction_16._0_16_);
      combo_real_4_21.z = 0x7fffffff;
      combo_real_4_21.xy = 0x7fffffff7fffffff;
      combo_real_4_21.w = 0x7fffffff;
      combo_real_4_4 = vandps_avx(ZEXT416((uint)(combo_real_4_9.x - combo_real_4_13.x)),combo_real_4_21);
      combo_real_4_13 = vsqrtps_avx(combo_real_4_20);
      combo_real_4_11 = vinsertps_avx(ZEXT416((uint)icon_atlas[iVar39 + 1 + iVar49]),
                              ZEXT416((uint)icon_atlas[iVar42 + 1 + iVar41]),0x10);
      combo_real_4_22.x = combo_real_4_13.x + -1.0;
      combo_real_4_22.y = combo_real_4_13.y + -1.0;
      combo_real_4_22.z = combo_real_4_13.z + 0.0;
      combo_real_4_22.w = combo_real_4_13.w + 0.0;
      amax_radial_force_28.x =
           combo_real_4_11.x * local_138 * combo_real_4_14.x +
           local_f8 * combo_real_4_15.x * combo_real_4_7.x + local_f8 * combo_real_4_14.x * combo_real_4_8.x +
           combo_real_4_10.x * local_138 * combo_real_4_15.x;
      amax_radial_force_28.y =
           combo_real_4_11.y * fStack_134 * combo_real_4_14.y +
           fStack_f4 * combo_real_4_15.y * combo_real_4_7.y + fStack_f4 * combo_real_4_14.y * combo_real_4_8.y +
           combo_real_4_10.y * fStack_134 * combo_real_4_15.y;
      amax_radial_force_28.z =
           combo_real_4_11.z * fStack_130 * combo_real_4_14.z +
           fStack_f0 * combo_real_4_15.z * combo_real_4_7.z + fStack_f0 * combo_real_4_14.z * combo_real_4_8.z +
           combo_real_4_10.z * fStack_130 * combo_real_4_15.z;
      amax_radial_force_28.w =
           combo_real_4_11.w * fStack_12c * combo_real_4_14.w +
           fStack_ec * combo_real_4_15.w * combo_real_4_7.w + fStack_ec * combo_real_4_14.w * combo_real_4_8.w
           + combo_real_4_10.w * fStack_12c * combo_real_4_15.w;
      combo_real_4_7 = vmaxss_avx(ZEXT416((uint)(0.05 - combo_real_4_4.x)),ZEXT416(0) << 0x20);
      combo_real_4_8 = vmaxps_avx(amax_radial_force_28,combo_real_4_22);
      combo_real_4_10 = vmovshdup_avx(combo_real_4_8);
      combo_real_4_4 = vandps_avx(ZEXT416((uint)(combo_real_4_8.x - combo_real_4_10.x)),combo_real_4_21);
      combo_real_4_4 = vmaxss_avx(ZEXT416((uint)(0.2 - combo_real_4_4.x)),ZEXT416(0) << 0x20);
      combo_real_4_8 = vminss_avx(combo_real_4_8,combo_real_4_10);
      afriction_11 = ZEXT1664(CONCAT412(0x43000000,CONCAT48(0x43000000,0x4300000043000000)));
      f_random_cost_1 = (combo_real_4_12.x - (combo_real_4_7.x * 0.25 * combo_real_4_7.x) / 0.05) + -0.6;
      combo_real_4_4 = vminss_avx(ZEXT416((uint)(-0.1 - f_random_cost_1)),
                           ZEXT416((uint)((combo_real_4_8.x -
                                          (combo_real_4_4.x * combo_real_4_4.x * 0.25) / 0.2) * -0.6)));
      combo_real_4_4 = vmaxss_avx(ZEXT416((uint)f_random_cost_1),combo_real_4_4);
      lVar40 = (longlong)
               ((int)max_health_28 * icon_texture.size.field0_0x0._s_0.x + iVar35.field0_0x0.x +
               (int)ll_n_materials);
      icon_atlas[lVar40] = combo_real_4_4.x;
      ll_n_materials = ll_n_materials + 1;
    } while (ll_n_materials != 0x80);
    max_health_26 = max_health_26 + 1;
    max_health_28 = max_health_28 + 1;
  } while (max_health_26 != 0x80);
  glBindTexture(0xde1,icon_texture.handle,lVar40,pfVar31,pcVar47);
  glTexImage2D(0xde1,0,0x822e,icon_texture.size.field0_0x0._s_0.x,
               icon_texture.size.field0_0x0._s_0.y,0,0x1903,0x1406,icon_atlas);
  glBindTexture(0xde1,0);
  return i_n_materials;
}

