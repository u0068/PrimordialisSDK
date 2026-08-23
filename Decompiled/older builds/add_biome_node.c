
/* struct biome_node * __ptr64 __cdecl add_biome_node(struct biome_core * __ptr64) */

biome_node * __cdecl add_biome_node(biome_core *param_1)

{
  biome_node *pbVar1;
  biome_node *pbVar2;
  biome_node *pbVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  
  pbVar3 = w.map.biome_nodes;
  lVar4 = (longlong)w.map.n_biome_nodes;
  w.map.n_biome_nodes = w.map.n_biome_nodes + 1;
  pbVar1 = w.map.biome_nodes + lVar4;
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  pbVar2 = w.map.biome_nodes + lVar4;
  auVar6 = ZEXT1632(auVar5);
  pbVar2->first_edge = (biome_edge *)auVar6._0_8_;
  pbVar2->pre_generation_fn = (void *)auVar6._8_8_;
  pbVar2->post_generation_fn = (void *)auVar6._16_8_;
  pbVar2->template_generation_fn = (void *)auVar6._24_8_;
  *(undefined1 (*) [32])&pbVar3[lVar4].templ.wall_values = auVar6;
  auVar6 = ZEXT1632(auVar5);
  *(undefined1 (*) [32])&pbVar3[lVar4].templ.region.u = auVar6;
  pbVar2 = pbVar3 + lVar4;
  pbVar2->core_index = auVar6._0_4_;
  pbVar2->x = (real_2)auVar6._4_8_;
  pbVar2->r = (float)auVar6._12_4_;
  *(longlong *)&pbVar2->field_0x10 = auVar6._16_8_;
  (pbVar2->templ).region.l = (int_2)auVar6._24_8_;
  pbVar3[lVar4].core_index =
       (int)((ulonglong)((longlong)param_1 - (longlong)w.map.cores) >> 3) * 0x1a1f58d1;
  return pbVar1;
}

