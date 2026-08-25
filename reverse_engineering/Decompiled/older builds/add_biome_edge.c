
/* struct biome_edge * __ptr64 __cdecl add_biome_edge(struct biome_node * __ptr64,struct biome_node
   * __ptr64,struct real_2,struct biome_edge) */

biome_edge * __cdecl
add_biome_edge(biome_node *node_1,biome_node *node_2,real_2 edge_direction,biome_edge *edge_properties)

{
  biome_edge *node_1_first_edge;
  biome_edge *node_2_first_edge;
  real_2 *prVar3;
  biome_edge *new_edge;
  undefined1 auVar5 [16];
  biome_node *pbVar6;
  biome_edge *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  real_2_u_0 rVar11;
  biome_edge *biome_edges_ptr;
  real_2_u_0_s_0 rVar13;
  real_2_u_0 rVar14;
  float fVar15;
  float fVar16;
  longlong n_biome_edges;
  float fVar18;
  
  fVar18 = edge_properties->stiffness;
  fVar15 = 0.0;
  if ((fVar18 != 0.0) || (NAN(fVar18))) {
    if (0.0 <= fVar18) goto LAB_14010fd59;
  }
  else {
    fVar15 = 0.05;
  }
  edge_properties->stiffness = fVar15;
LAB_14010fd59:
  if (edge_properties->randomness <= 0.0) {
    edge_properties->randomness = 0.2;
  }
  biome_edges_ptr = w.map.biome_edges;
  n_biome_edges = (longlong)w.map.n_biome_edges;
  node_1_first_edge = w.map.biome_edges + n_biome_edges;
  w.map.n_biome_edges = w.map.n_biome_edges + 2;
  node_2_first_edge = w.map.biome_edges + n_biome_edges + 1;
  pbVar6 = edge_properties->node;
  pbVar7 = edge_properties->next;
  rVar14 = (edge_properties->dir).field0_0x0;
  fVar18 = edge_properties->spacing;
  fVar15 = edge_properties->randomness;
  uVar8 = *(undefined8 *)&edge_properties->spacing;
  uVar9 = *(undefined8 *)&edge_properties->stiffness;
  uVar10 = *(undefined8 *)&edge_properties->field_0x28;
  prVar3 = &w.map.biome_edges[n_biome_edges].dir;
  prVar3->field0_0x0 = (edge_properties->dir).field0_0x0;
  prVar3[1] = (real_2)uVar8;
  prVar3[2] = (real_2)uVar9;
  prVar3[3] = (real_2)uVar10;
  new_edge = biome_edges_ptr + n_biome_edges;
  new_edge->node = pbVar6;
  new_edge->next = pbVar7;
  (new_edge->dir).field0_0x0 = rVar14;
  new_edge->spacing = fVar18;
  new_edge->randomness = fVar15;
  pbVar7 = edge_properties->next;
  rVar14 = (edge_properties->dir).field0_0x0;
  fVar18 = edge_properties->spacing;
  fVar15 = edge_properties->randomness;
  rVar11 = (edge_properties->dir).field0_0x0;
  uVar8 = *(undefined8 *)&edge_properties->spacing;
  uVar9 = *(undefined8 *)&edge_properties->stiffness;
  uVar10 = *(undefined8 *)&edge_properties->field_0x28;
  new_edge = biome_edges_ptr + n_biome_edges + 1;
  new_edge->node = edge_properties->node;
  new_edge->next = pbVar7;
  (new_edge->dir).field0_0x0 = rVar14;
  new_edge->spacing = fVar18;
  new_edge->randomness = fVar15;
  prVar3 = &biome_edges_ptr[n_biome_edges + 1].dir;
  prVar3->field0_0x0 = rVar11;
  prVar3[1] = (real_2)uVar8;
  prVar3[2] = (real_2)uVar9;
  prVar3[3] = (real_2)uVar10;
  biome_edges_ptr[n_biome_edges].node = node_1;
  biome_edges_ptr[n_biome_edges + 1].node = node_2;
  biome_edges_ptr[n_biome_edges].next = node_1->first_edge;
  node_1->first_edge = node_1_first_edge;
  new_edge = node_2->first_edge;
  biome_edges_ptr[n_biome_edges + 1].next = new_edge;
  node_2->first_edge = node_2_first_edge;
  fVar15 = edge_direction.field0_0x0._0_4_;
  fVar16 = edge_direction.field0_0x0._4_4_;
                    /* INLINE_REGION_START: normalize_or_zero */
  fVar18 = fVar16 * fVar16 + fVar15 * fVar15 + 0.0;
  if (fVar18 <= 1e-06) {
    rVar13.x = 0.0;
    rVar13.y = 0.0;
  }
  else {
    auVar5 = vsqrtss_avx(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar18 = 1.0 / auVar5._0_4_;
    rVar13 = (real_2_u_0_s_0)
             (CONCAT44((int)((ulonglong)new_edge >> 0x20),fVar18 * fVar15) |
             (ulonglong)(uint)(fVar18 * fVar16) << 0x20);
  }
                    /* INLINE_REGION_END */
  (node_1_first_edge->dir).field0_0x0._s_0 = rVar13;
                    /* INLINE_REGION_START: operator- */
  rVar14._0_4_ = (int)rVar13.x + -0x80000000;
  rVar14._s_0.y = (float)((int)rVar13.y + -0x80000000);
  node_1_first_edge[1].dir.field0_0x0 = rVar14;
                    /* INLINE_REGION_END */
  return node_1_first_edge;
}

