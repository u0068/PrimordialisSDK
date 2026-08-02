
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl init_materials_list(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar20;
  undefined8 uVar19;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  char cVar37;
  double dVar38;
  int iVar39;
  undefined1 auVar40 [16];
  char **ppcVar41;
  bool bVar42;
  bool bVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  int extraout_EAX;
  int *piVar47;
  LPVOID pvVar48;
  material_t *materials_list;
  int_2 iVar50;
  real_2_u_0 rVar51;
  real_2_u_0 rVar52;
  real_2_u_0 rVar53;
  real_2_u_0 rVar54;
  real_2_u_0 rVar55;
  real_2_u_0 rVar56;
  real_2_u_0 rVar57;
  real_2_u_0 rVar58;
  real_2_u_0 rVar59;
  real_2_u_0 rVar60;
  int_2_u_0 iVar61;
  real_2_u_0 rVar62;
  real_2_u_0 rVar63;
  real_2_u_0 rVar64;
  real_2_u_0 rVar65;
  real_2_u_0 rVar66;
  real_2_u_0 rVar67;
  real_2_u_0 rVar68;
  real_2_u_0 rVar69;
  real_2_u_0 rVar70;
  real_2_u_0 rVar71;
  real_2_u_0 rVar72;
  real_2_u_0 rVar73;
  real_2_u_0 rVar74;
  real_2_u_0 rVar75;
  real_2_u_0 rVar76;
  real_2_u_0 rVar77;
  real_2_u_0 rVar78;
  real_2_u_0 rVar79;
  real_2_u_0 rVar80;
  undefined4 extraout_var;
  ulonglong uVar81;
  real_2_u_0 rVar82;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  real_2_u_0 rVar83;
  float *pfVar84;
  real_2_u_0 rVar85;
  real_2_u_0 rVar86;
  real_2_u_0 rVar87;
  real_2_u_0 rVar88;
  real_2_u_0 rVar89;
  real_2_u_0 rVar90;
  real_2_u_0 rVar91;
  real_2_u_0 rVar92;
  real_2_u_0 rVar93;
  real_2_u_0 rVar94;
  real_2_u_0 rVar95;
  real_2_u_0 rVar96;
  real_2_u_0 rVar97;
  real_2_u_0 rVar98;
  real_2_u_0 rVar99;
  real_2_u_0 rVar100;
  real_2_u_0 rVar101;
  real_2_u_0 rVar102;
  real_2_u_0 rVar103;
  real_2_u_0 rVar104;
  real_2_u_0 rVar105;
  real_2_u_0 rVar106;
  real_2_u_0 rVar107;
  real_2_u_0 rVar108;
  real_2_u_0 rVar109;
  real_2_u_0 rVar110;
  real_2_u_0 rVar111;
  real_2_u_0 rVar112;
  real_2_u_0 rVar113;
  real_2_u_0 rVar114;
  real_2_u_0 rVar115;
  undefined4 extraout_var_02;
  real_2_u_0 rVar116;
  undefined4 extraout_var_03;
  real_2_u_0 rVar117;
  real_2_u_0 rVar118;
  undefined4 extraout_var_04;
  real_2_u_0 rVar119;
  undefined4 extraout_var_05;
  real_2_u_0 rVar120;
  undefined4 extraout_var_06;
  real_2_u_0 rVar121;
  real_2_u_0 rVar122;
  real_2_u_0 rVar123;
  real_2_u_0 rVar124;
  real_2_u_0 rVar125;
  real_2_u_0 rVar126;
  real_2_u_0 rVar127;
  real_2_u_0 rVar128;
  real_2_u_0 rVar129;
  real_2_u_0 rVar130;
  real_2_u_0 rVar131;
  translation_list *ptVar132;
  int iVar133;
  uint uVar134;
  char *pcVar135;
  int iVar136;
  longlong index;
  material_t *pmVar138;
  longlong lVar139;
  uint uVar140;
  undefined4 uVar142;
  float *pfVar141;
  ulonglong unaff_R13;
  ulonglong uVar143;
  float fVar144;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  double dVar150;
  real_4_u_0 rVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  float fVar145;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
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
  undefined1 auVar199 [16];
  undefined1 auVar201 [16];
  undefined1 auVar203 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar221 [16];
  undefined1 extraout_var_07 [60];
  undefined1 extraout_var_32 [56];
  undefined1 extraout_var_08 [60];
  undefined1 extraout_var_33 [56];
  undefined1 extraout_var_09 [60];
  undefined1 extraout_var_10 [60];
  undefined1 extraout_var_34 [56];
  undefined1 extraout_var_11 [60];
  undefined1 extraout_var_12 [60];
  undefined1 extraout_var_13 [60];
  undefined1 extraout_var_35 [56];
  undefined1 extraout_var_14 [60];
  undefined1 extraout_var_36 [56];
  undefined1 auVar222 [64];
  undefined1 auVar198 [16];
  undefined1 extraout_var_37 [56];
  undefined1 auVar223 [64];
  undefined1 auVar200 [16];
  undefined1 extraout_var_17 [60];
  undefined1 extraout_var_38 [56];
  undefined1 auVar224 [64];
  undefined1 auVar202 [16];
  undefined1 extraout_var_39 [56];
  undefined1 auVar225 [64];
  undefined1 auVar226 [64];
  undefined1 auVar204 [16];
  undefined1 extraout_var_40 [56];
  undefined1 auVar227 [64];
  undefined1 auVar205 [16];
  undefined1 auVar228 [64];
  undefined1 auVar214 [16];
  undefined1 extraout_var_23 [60];
  undefined1 auVar229 [64];
  undefined1 auVar230 [64];
  undefined1 auVar231 [64];
  undefined1 auVar232 [64];
  undefined1 auVar233 [64];
  undefined1 auVar234 [64];
  undefined1 auVar220 [16];
  undefined1 extraout_var_41 [56];
  undefined1 auVar235 [64];
  undefined1 auVar236 [64];
  float fVar237;
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
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
  undefined1 auVar279 [16];
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
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  float fVar308;
  float fVar309;
  float fVar310;
  float fVar311;
  float fVar312;
  float fVar313;
  float fVar314;
  float fVar315;
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  undefined1 auVar422 [16];
  undefined1 auVar423 [16];
  undefined1 auVar424 [16];
  undefined1 auVar425 [16];
  undefined1 auVar426 [16];
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  undefined1 auVar429 [16];
  undefined1 auVar430 [16];
  undefined1 auVar431 [16];
  undefined1 auVar432 [16];
  undefined1 auVar433 [16];
  undefined1 auVar434 [16];
  undefined1 auVar435 [16];
  undefined1 auVar436 [64];
  undefined1 auVar437 [16];
  undefined1 auVar438 [16];
  undefined1 auVar439 [16];
  undefined1 auVar440 [16];
  undefined1 auVar441 [16];
  undefined1 auVar442 [16];
  undefined1 auVar443 [16];
  undefined1 auVar444 [16];
  undefined1 auVar445 [16];
  undefined1 auVar446 [16];
  undefined1 auVar447 [16];
  undefined1 auVar448 [16];
  undefined1 auVar449 [16];
  undefined1 auVar450 [16];
  undefined1 auVar451 [16];
  undefined1 auVar452 [16];
  undefined1 auVar453 [16];
  undefined1 auVar454 [16];
  undefined1 auVar455 [16];
  undefined1 auVar456 [16];
  undefined1 auVar457 [16];
  undefined1 auVar458 [16];
  undefined1 auVar459 [16];
  float fVar460;
  undefined1 auVar461 [16];
  undefined1 auVar462 [16];
  undefined1 auVar463 [16];
  undefined1 auVar464 [16];
  undefined1 auVar465 [16];
  undefined1 auVar466 [16];
  undefined1 auVar467 [16];
  undefined1 auVar468 [16];
  undefined1 auVar469 [16];
  undefined1 auVar470 [16];
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar473 [16];
  undefined1 auVar474 [16];
  undefined1 auVar475 [16];
  undefined1 auVar476 [16];
  undefined1 auVar477 [16];
  undefined1 auVar478 [16];
  undefined1 auVar479 [16];
  undefined1 auVar480 [16];
  undefined1 auVar481 [64];
  undefined1 auVar482 [16];
  undefined1 auVar483 [16];
  undefined1 auVar484 [16];
  undefined1 auVar485 [16];
  undefined1 auVar486 [16];
  undefined1 auVar487 [16];
  undefined1 auVar488 [16];
  undefined1 auVar489 [16];
  undefined1 auVar490 [16];
  undefined1 auVar491 [16];
  undefined1 auVar492 [16];
  undefined1 auVar493 [16];
  undefined1 auVar494 [16];
  undefined1 auVar495 [16];
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar498 [64];
  undefined1 auVar500 [16];
  undefined1 auVar501 [16];
  undefined1 auVar502 [16];
  undefined1 auVar503 [16];
  undefined1 auVar504 [16];
  undefined1 auVar505 [16];
  undefined1 auVar506 [16];
  undefined1 auVar507 [16];
  undefined1 auVar508 [16];
  undefined1 auVar509 [16];
  undefined1 auVar510 [16];
  undefined1 auVar511 [16];
  undefined1 auVar512 [16];
  undefined1 auVar513 [16];
  float fVar499;
  undefined1 auVar514 [16];
  undefined1 auVar515 [16];
  undefined1 auVar516 [16];
  undefined1 auVar517 [16];
  undefined1 auVar518 [16];
  undefined1 auVar519 [16];
  undefined1 auVar520 [16];
  undefined1 auVar521 [16];
  undefined1 auVar522 [16];
  undefined1 auVar523 [16];
  undefined1 auVar524 [16];
  undefined1 auVar525 [16];
  undefined1 auVar526 [16];
  undefined1 auVar527 [16];
  undefined1 auVar528 [16];
  undefined1 auVar529 [16];
  undefined1 auVar530 [16];
  undefined1 auVar531 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar532 [64];
  float fVar533;
  float fVar534;
  undefined1 auVar535 [16];
  undefined1 auVar536 [16];
  undefined1 auVar537 [16];
  undefined1 auVar538 [16];
  undefined1 auVar539 [16];
  undefined1 auVar540 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar541 [64];
  float fVar542;
  undefined1 auVar544 [16];
  undefined1 auVar545 [16];
  undefined1 auVar546 [16];
  undefined1 auVar547 [16];
  undefined1 auVar548 [16];
  undefined1 auVar549 [16];
  float fVar543;
  undefined1 auVar550 [16];
  undefined1 auVar551 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar552 [64];
  undefined1 auVar553 [16];
  undefined1 auVar554 [16];
  undefined1 auVar555 [16];
  undefined1 auVar556 [16];
  undefined1 auVar557 [16];
  undefined1 auVar558 [16];
  undefined1 auVar559 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar560 [64];
  undefined1 auVar563 [16];
  undefined1 auVar564 [16];
  undefined1 auVar565 [16];
  undefined1 auVar566 [16];
  undefined1 auVar567 [16];
  float fVar561;
  float fVar562;
  undefined1 auVar568 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar569 [64];
  undefined1 auVar570 [16];
  undefined1 auVar571 [16];
  undefined1 auVar572 [16];
  undefined1 auVar573 [16];
  undefined1 auVar574 [16];
  undefined1 auVar575 [16];
  undefined1 auVar576 [16];
  undefined1 auVar577 [16];
  undefined1 auVar578 [16];
  undefined1 auVar579 [16];
  undefined1 auVar580 [16];
  undefined1 auVar581 [16];
  undefined1 auVar582 [16];
  undefined1 auVar583 [16];
  undefined1 auVar584 [16];
  undefined1 auVar585 [16];
  undefined1 auVar586 [16];
  undefined1 auVar587 [16];
  undefined1 auVar588 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar590 [16];
  float fVar589;
  undefined1 auVar591 [16];
  undefined1 auVar592 [16];
  undefined1 auVar593 [16];
  undefined1 auVar594 [16];
  undefined1 auVar595 [16];
  undefined1 auVar596 [16];
  undefined1 auVar597 [64];
  undefined1 auVar600 [16];
  float fVar598;
  float fVar599;
  undefined1 auVar601 [16];
  undefined1 auVar602 [16];
  undefined1 auVar603 [16];
  undefined1 auVar604 [16];
  undefined1 auVar605 [16];
  undefined1 auVar606 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar607 [64];
  undefined1 auVar608 [64];
  float fVar609;
  undefined1 auVar610 [16];
  undefined1 auVar611 [16];
  undefined1 auVar612 [16];
  undefined1 auVar613 [16];
  undefined1 auVar614 [16];
  undefined1 local_268 [16];
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 local_238;
  float fStack_230;
  float fStack_22c;
  float local_228;
  uint uStack_220;
  uint uStack_21c;
  undefined1 local_218 [8];
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [16];
  float local_1e8;
  undefined1 local_1c8 [16];
  char local_f7;
  char local_f6 [14];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_68 [16];
  undefined1 extraout_var_15 [60];
  undefined1 extraout_var_16 [60];
  undefined1 extraout_var_18 [60];
  undefined1 extraout_var_19 [60];
  undefined1 extraout_var_20 [60];
  undefined1 extraout_var_21 [60];
  undefined1 extraout_var_22 [60];
  undefined1 extraout_var_24 [60];
  undefined1 extraout_var_25 [60];
  undefined1 extraout_var_26 [60];
  undefined1 extraout_var_27 [60];
  undefined1 extraout_var_28 [60];
  undefined1 extraout_var_29 [60];
  undefined1 extraout_var_30 [60];
  undefined1 extraout_var_31 [60];
  
  local_68 = in_ZMM14._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  piVar47 = TlsGetValue(tls_index);
  pvVar48 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar48 + 8) + 0x18,0);
  if (*piVar47 == 0) {
    icon_texture.size.field0_0x0 = (int_2_u_0)(int_2_u_0_s_0)0x100000001000;
    if (icon_atlas == (float *)0x0) {
      icon_atlas = (float *)dynamic_alloc_clear(0x4000000);
    }
    if (materials_list == (material_t *)0x0) {
                    /* WARNING: Read-only address (ram,0x0001401bce20) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcf60) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfa0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bcfb0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bd600) is written */
                    /* WARNING: Read-only address (ram,0x0001401be590) is written */
                    /* WARNING: Read-only address (ram,0x0001401be5f0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bece0) is written */
                    /* WARNING: Read-only address (ram,0x0001401bfce0) is written */
                    /* WARNING: Read-only address (ram,0x0001401c00e0) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0180) is written */
                    /* WARNING: Read-only address (ram,0x0001401c01f0) is written */
                    /* WARNING: Read-only address (ram,0x0001401c03d0) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0490) is written */
                    /* WARNING: Read-only address (ram,0x0001401c06f0) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0900) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0b00) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0b10) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0b50) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0bc0) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0d40) is written */
                    /* WARNING: Read-only address (ram,0x0001401c0f90) is written */
                    /* WARNING: Read-only address (ram,0x0001401c1060) is written */
                    /* WARNING: Read-only address (ram,0x0001401c10b0) is written */
      materials_list = (material_t *)dynamic_alloc(0x8c000);
    }
  }
  iVar133 = (n_materials * *piVar47) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
  iVar44 = ((*piVar47 + 1) * n_materials) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
  if (iVar133 < iVar44) {
    lVar139 = (longlong)iVar133 * 0x118 + 8;
    index = (longlong)iVar44 - (longlong)iVar133;
    materials_list = materials_list;
    do {
      if (*(int *)((longlong)materials_list->spawn_with + lVar139 + -0x28) < -0x7f000000) {
        free(*(void **)((longlong)materials_list->spawn_with + lVar139 + -0x20));
        materials_list = materials_list;
      }
      lVar139 = lVar139 + 0x118;
      index = index + -1;
    } while (index != 0);
  }
  pvVar48 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar48 + 8) + 0x18,0);
  memset();
  if (*piVar47 == 0) {
    n_materials = 0;
    n_material_combos = 0;
  }
  pvVar48 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar48 + 8) + 0x18,0);
  materials_list = materials_list;
  if (*piVar47 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("NONE");
    materials_list[index].id = uVar45;
    materials_list[index].density = 0.0;
    materials_list[index].friction = 0.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].heat_conductivity = 0.0;
    materials_list[index].conductivity = 0.0;
    rVar151._0_12_ = ZEXT812(0);
    rVar151._s_0.w = 0.0;
    materials_list[index].base_color.field0_0x0 = rVar151;
    materials_list = materials_list;
    if (*piVar47 == 0) {
      index = (longlong)n_materials;
      n_materials = n_materials + 1;
      memcpy();
      uVar45 = str_to_id("BODY");
      materials_list[index].id = uVar45;
      materials_list[index].tags = 0x90;
      materials_list[index].tier = 0;
      materials_list[index].drop_weight = 1.0;
      materials_list[index].base_cost = 1.0;
      materials_list[index].genome_size = 0.0;
      materials_list[index].growth_rate = materials_list[index].growth_rate * 2.5;
      materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e99999a3e99999a;
      *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
           0x3f8000003e99999a;
      iVar50 = get_icon_coords(0);
      rVar51._s_0.y =
           ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) /
           (float)icon_texture.size.field0_0x0._s_0.y;
      rVar51._s_0.x =
           ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) /
           (float)icon_texture.size.field0_0x0._s_0.x;
      materials_list[index].uv.field0_0x0 = rVar51;
    }
  }
  iVar50 = get_icon_coords(0);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar152._8_4_ = 0x7fffffff;
      auVar152._0_8_ = 0x7fffffff7fffffff;
      auVar152._12_4_ = 0x7fffffff;
      auVar164._0_12_ = ZEXT812(0);
      auVar164._12_4_ = 0;
      auVar171._8_4_ = 0xbf800000;
      auVar171._0_8_ = 0xbf800000bf800000;
      auVar171._12_4_ = 0xbf800000;
      auVar189._8_4_ = 0x3f800000;
      auVar189._0_8_ = 0x3f8000003f800000;
      auVar189._12_4_ = 0x3f800000;
      do {
        auVar205 = vandps_avx(ZEXT416((uint)(((float)(int)uVar81 + 0.5) * 0.015625 + -1.0)),auVar152
                             );
        index = 0;
        do {
          auVar181 = vandps_avx(ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 + -1.0)),
                                auVar152);
          fVar146 = auVar181._0_4_;
          fVar314 = auVar205._0_4_ * -0.8660254 + 0.0 + fVar146 * 0.5;
          auVar181 = auVar205;
          if (fVar314 < 0.0) {
            auVar181 = ZEXT416((uint)((fVar314 + fVar314) * 0.8660254 + auVar205._0_4_));
            fVar146 = fVar146 + (fVar314 + fVar314) * -0.5;
          }
          auVar323 = vminss_avx(SUB6416(ZEXT464(0x3e6c7b90),0),auVar181);
          auVar323 = vmaxss_avx(SUB6416(ZEXT464(0xbe6c7b90),0),auVar323);
          fVar314 = auVar181._0_4_ - auVar323._0_4_;
          fVar146 = fVar146 + -0.4;
          auVar181 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
          auVar262 = vsqrtss_avx(auVar181,auVar181);
          auVar181 = vcmpss_avx(auVar164,ZEXT416((uint)fVar146),1);
          auVar181 = vblendvps_avx(auVar171,auVar189,auVar181);
          auVar323 = vcmpss_avx(ZEXT416((uint)fVar146),auVar164,4);
          auVar181 = vandps_avx(auVar323,auVar181);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar181._0_4_ * auVar262._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("SWIM");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x14;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.5;
    materials_list[index].base_cost = 3.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].movement_force = materials_list[index].movement_force * 4.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f3333333f000000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ecccccd;
    iVar50 = get_icon_coords(1);
    rVar52._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar52._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar52;
  }
  iVar50 = get_icon_coords(1);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar481 = ZEXT464(0xbf800000);
      auVar436 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar541 = ZEXT1264(ZEXT812(0));
      auVar569 = ZEXT464(0x3f800000);
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + auVar481._0_4_;
        fVar314 = fVar146 * 20.0;
        fVar237 = fVar146 * 0.5;
        index = 0;
        do {
          auVar607 = ZEXT1664(auVar481._0_16_);
          fVar533 = ((float)(int)index + 0.5) * 0.015625 + auVar481._0_4_;
          auVar498 = ZEXT1664(auVar436._0_16_);
          auVar152 = vandps_avx(ZEXT416((uint)fVar533),auVar436._0_16_);
          auVar560 = ZEXT464((uint)(fVar237 + auVar152._0_4_ * 0.8660254 + -0.25));
          auVar532 = ZEXT464((uint)(fVar146 * -0.8660254 + auVar152._0_4_ * -0.5));
          fVar144 = 0.6 - fVar533 * fVar533;
          if (fVar144 < auVar541._0_4_) {
            fVar144 = sqrtf(fVar144);
          }
          else {
            auVar152 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
            fVar144 = auVar152._0_4_;
          }
          auVar436 = ZEXT464((uint)(-0.1 - fVar144));
          fVar144 = fVar314 + 1.8849558;
          sinf();
          fVar533 = fVar533 + fVar144 * -0.05;
          fVar144 = fVar533 * 6.25;
          auVar152 = vandps_avx(ZEXT416((uint)fVar144),___xmm_80000000800000008000000080000000);
          auVar205._8_4_ = 0x3effffff;
          auVar205._0_8_ = 0x3effffff3effffff;
          auVar205._12_4_ = 0x3effffff;
          auVar152 = vorps_avx(auVar152,auVar205);
          auVar152 = ZEXT416((uint)(fVar144 + auVar152._0_4_));
          auVar152 = vroundss_avx(auVar152,auVar152,0xb);
          auVar171 = auVar569._0_16_;
          auVar152 = vminss_avx(auVar171,auVar152);
          auVar481 = ZEXT1664(auVar607._0_16_);
          auVar152 = vmaxss_avx(auVar607._0_16_,auVar152);
          fVar144 = fVar146 - auVar436._0_4_;
          auVar164 = vminss_avx(auVar171,ZEXT416((uint)(fVar144 + fVar144)));
          auVar164 = vmaxss_avx(auVar541._0_16_,auVar164);
          fVar460 = auVar164._0_4_;
          auVar436 = ZEXT1664(auVar498._0_16_);
          auVar152 = vandps_avx(ZEXT416((uint)(fVar533 + auVar152._0_4_ * -0.16)),auVar498._0_16_);
          fVar533 = fVar144 * -0.08 * (3.0 - (fVar460 + fVar460)) * fVar460 * fVar460 +
                    auVar152._0_4_;
          auVar152 = vminss_avx(auVar171,ZEXT416((uint)(fVar533 / 0.1)));
          auVar152 = vmaxss_avx(auVar541._0_16_,auVar152);
          fVar144 = auVar152._0_4_;
          auVar152 = vmaxss_avx(ZEXT416((uint)(-0.1 - auVar532._0_4_)),
                                ZEXT416((uint)(fVar533 *
                                              (auVar569._0_4_ +
                                              (3.0 - (fVar144 + fVar144)) * fVar144 * fVar144))));
          auVar164 = vmaxss_avx(auVar560._0_16_,auVar532._0_16_);
          auVar152 = vminss_avx(auVar152,auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("SEEK");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x82;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 1.0;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].restitution = 0.0;
    uVar2 = materials_list[index].drag;
    uVar20 = materials_list[index].tangent_drag;
    auVar181._0_4_ = (float)uVar2 * 0.1;
    auVar181._4_4_ = (float)uVar20 * 0.1;
    auVar181._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar181);
    materials_list[index].drag = (float)(int)uVar19;
    materials_list[index].tangent_drag = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].movement_force = 0.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e4ccccd3f4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f666666;
    materials_list[index].force_update_fn = cell_seek;
    iVar50 = get_icon_coords(2);
    rVar53._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar53._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar53;
  }
  iVar50 = get_icon_coords(2);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar436 = ZEXT464(0x3f000000);
      auVar541 = ZEXT464(0x3c800000);
      auVar481 = ZEXT1664(CONCAT412(0x80000000,CONCAT48(0x80000000,0x8000000080000000)));
      auVar569 = ZEXT464(0x3f800000);
      do {
        fVar314 = auVar436._0_4_;
        fVar146 = auVar541._0_4_ * (fVar314 + (float)(int)uVar81) + -1.0;
        auVar262._0_4_ = (float)(auVar481._0_4_ ^ (uint)fVar146);
        auVar262._4_4_ = auVar481._4_4_;
        auVar262._8_4_ = auVar481._8_4_;
        auVar262._12_4_ = auVar481._12_4_;
        auVar152 = ZEXT416((uint)(0.25 - fVar146 * fVar146));
        auVar323 = auVar262;
        if (auVar262._0_4_ < fVar146) {
          auVar164 = vmaxss_avx(SUB6416(ZEXT464(0x3c23d70a),0),auVar152);
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar323._0_4_ = auVar262._0_4_ / auVar164._0_4_;
          auVar323._4_12_ = auVar262._4_12_;
        }
        auVar447._0_12_ = ZEXT812(0);
        auVar447._12_4_ = 0;
        fVar237 = 0.0;
        if (fVar146 <= fVar314) {
          fVar237 = auVar323._0_4_;
        }
        fVar533 = 1.5 - fVar146;
        auVar152 = vmaxss_avx(auVar447,auVar152);
        auVar164 = vsqrtss_avx(auVar152,auVar152);
        auVar152 = vcmpss_avx(auVar262,ZEXT416((uint)fVar146),1);
        auVar152 = vblendvps_avx(ZEXT416((uint)(fVar314 + fVar146 * fVar146 * -0.5)),auVar164,
                                 auVar152);
        auVar164 = vminss_avx(auVar569._0_16_,ZEXT416((uint)((0.6 - fVar146) * 4.0)));
        auVar164 = vmaxss_avx(auVar447,auVar164);
        fVar314 = auVar164._0_4_;
        auVar498 = ZEXT464((uint)(fVar146 * (20.0 / fVar533)));
        auVar164 = vcmpss_avx(auVar436._0_16_,ZEXT416((uint)fVar146),1);
        auVar152 = vandnps_avx(auVar164,auVar152);
        auVar532 = ZEXT1664(auVar152);
        index = 0;
        auVar560 = ZEXT464(0x3cf5c28f);
        do {
          auVar608 = ZEXT1664(auVar481._0_16_);
          auVar481 = ZEXT1664(auVar541._0_16_);
          auVar597 = ZEXT1664(auVar436._0_16_);
          fVar144 = auVar541._0_4_ * (auVar436._0_4_ + (float)(int)index) + -1.0;
          auVar152 = ZEXT416((uint)((fVar146 + -0.06) * (fVar146 + -0.06) + fVar144 * fVar144 + 0.0)
                            );
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vmaxss_avx(ZEXT416((uint)(auVar152._0_4_ + -0.38)),ZEXT416(0xbffc28f6));
          auVar552 = ZEXT1664(auVar152);
          auVar436 = ZEXT1664(auVar498._0_16_);
          sinf();
          auVar607 = ZEXT1664(auVar436._0_16_);
          auVar436 = ZEXT1664(auVar498._0_16_);
          cosf();
          auVar489._0_12_ = ZEXT812(0);
          auVar489._12_4_ = 0;
          fVar460 = auVar607._0_4_ * fVar237 +
                    auVar532._0_4_ *
                    auVar436._0_4_ *
                    (20.0 / fVar533 + (fVar146 * 20.0) / (fVar533 * fVar533)) * 0.25;
          auVar436 = ZEXT1664(auVar597._0_16_);
          auVar541 = ZEXT1664(auVar481._0_16_);
          auVar481 = ZEXT1664(auVar608._0_16_);
          auVar343._8_4_ = 0x7fffffff;
          auVar343._0_8_ = 0x7fffffff7fffffff;
          auVar343._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar144 - auVar532._0_4_ * auVar607._0_4_)),auVar343)
          ;
          fVar311 = auVar569._0_4_;
          auVar164 = ZEXT416((uint)(fVar311 + fVar460 * fVar460));
          auVar171 = vsqrtss_avx(auVar164,auVar164);
          auVar316._0_4_ = auVar608._0_4_ ^ (uint)fVar460;
          auVar316._4_4_ = auVar608._4_4_;
          auVar316._8_4_ = auVar608._8_4_;
          auVar316._12_4_ = auVar608._12_4_;
          auVar164 = vminss_avx(auVar569._0_16_,auVar316);
          auVar164 = vmaxss_avx(auVar489,auVar164);
          fVar144 = auVar164._0_4_;
          fVar310 = (3.0 - (fVar144 + fVar144)) * fVar144 * fVar144;
          fVar144 = auVar152._0_4_ / auVar171._0_4_ +
                    (2.0 - fVar146) * -0.05 * (3.0 - (fVar314 + fVar314)) * fVar314 * fVar314;
          fVar308 = auVar560._0_4_;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar308 - fVar144)),auVar343);
          auVar164 = vminss_avx(auVar569._0_16_,ZEXT416((uint)(fVar311 - fVar460)));
          auVar164 = vmaxss_avx(auVar489,auVar164);
          fVar460 = auVar164._0_4_;
          auVar152 = vmaxss_avx(auVar552._0_16_,
                                ZEXT416((uint)(auVar552._0_4_ * (fVar311 - fVar310) +
                                              auVar597._0_4_ * (fVar308 - auVar152._0_4_) * fVar310)
                                       ));
          fVar460 = (3.0 - (fVar460 + fVar460)) * fVar460 * fVar460;
          auVar164 = vmaxss_avx(ZEXT416((uint)(auVar597._0_4_ * fVar144)),
                                ZEXT416((uint)((fVar308 - auVar152._0_4_) * (fVar311 - fVar460) +
                                              fVar144 * fVar460)));
          auVar152 = vminss_avx(auVar152,auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("HARD");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x10;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.5;
    materials_list[index].base_cost = 3.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate * 0.625;
    materials_list[index].density = materials_list[index].density * 1.5;
    materials_list[index].hardness = materials_list[index].hardness * 4.0;
    uVar3 = materials_list[index].drag;
    uVar21 = materials_list[index].tangent_drag;
    auVar153._0_4_ = (float)uVar3 * 2.0;
    auVar153._4_4_ = (float)uVar21 * 4.0;
    auVar153._8_8_ = 0;
    auVar152 = vmovlhps_avx(ZEXT816(0x3f66666641200000),auVar153);
    pmVar138 = materials_list + index;
    pmVar138->friction = (float)auVar152._0_4_;
    pmVar138->restitution = (float)auVar152._4_4_;
    pmVar138->drag = (float)auVar152._8_4_;
    pmVar138->tangent_drag = (float)auVar152._12_4_;
    pmVar138 = materials_list + index;
    pmVar138->max_radial_force = 24.0;
    pmVar138->max_angular_force = 24.0;
    *(undefined8 *)(&pmVar138->max_radial_force + 2) = 0;
    auVar436 = ZEXT464(0x3f000000);
    materials_list[index].plasticity = materials_list[index].plasticity * 0.5;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 4;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f6666663f666666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f666666;
    materials_list[index].texture_type = 3;
    iVar50 = get_icon_coords(3);
    rVar54._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.y;
    rVar54._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar54;
  }
  iVar50 = get_icon_coords(3);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar437._8_4_ = 0x7fffffff;
      auVar437._0_8_ = 0x7fffffff7fffffff;
      auVar437._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        dVar150 = (double)fVar146 + -0.3;
        index = 0;
        do {
          auVar152 = vandps_avx(ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 + -1.0)),
                                auVar437);
          dVar38 = dVar150 * dVar150 * 0.5 + (double)auVar152._0_4_ + -0.5;
          auVar590._0_4_ = (float)dVar38;
          auVar590._4_4_ = (int)((ulonglong)dVar38 >> 0x20);
          auVar590._8_8_ = 0;
          dVar38 = (double)(fVar146 * 0.97014254 + auVar152._0_4_ * 0.24253564) + -0.55;
          auVar570._0_4_ = (float)dVar38;
          auVar570._4_4_ = (int)((ulonglong)dVar38 >> 0x20);
          auVar570._8_8_ = 0;
          auVar152 = vmaxss_avx(auVar590,auVar570);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    materials_list[index].tags = 0x14;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    uVar45 = str_to_id("SLIP");
    materials_list[index].id = uVar45;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate + materials_list[index].growth_rate;
    materials_list[index].density = 1.0;
    auVar436 = ZEXT464(0x3f000000);
    materials_list[index].hardness = materials_list[index].hardness * 0.5;
    materials_list[index].max_radial_force = 2.0;
    auVar152 = ZEXT416((uint)(materials_list[index].drag * 0.01));
    auVar152 = vinsertps_avx(auVar152,auVar152,0x2b);
    pmVar138 = materials_list + index;
    pmVar138->friction = (float)auVar152._0_4_;
    pmVar138->restitution = (float)auVar152._4_4_;
    pmVar138->drag = (float)auVar152._8_4_;
    pmVar138->tangent_drag = (float)auVar152._12_4_;
    materials_list[index].radial_compliance = 8.0;
    materials_list[index].angular_compliance = 16.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ecccccd3e99999a;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f4ccccd;
    materials_list[index].texture_type = 0;
    iVar50 = get_icon_coords(4);
    rVar55._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.y;
    rVar55._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar55;
  }
  iVar50 = get_icon_coords(4);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar482._8_4_ = 0x7fffffff;
      auVar482._0_8_ = 0x7fffffff7fffffff;
      auVar482._12_4_ = 0x7fffffff;
      auVar436 = ZEXT464(0x3f800000);
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + -0.1;
        index = 0;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar152 = ZEXT416((uint)(fVar314 * fVar314 + 0.0 + fVar146 * fVar146));
          auVar164 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vandps_avx(ZEXT416((uint)fVar314),auVar482);
          auVar154._0_12_ = ZEXT812(0);
          auVar154._12_4_ = 0;
          auVar171 = auVar436._0_16_;
          fVar237 = auVar152._0_4_;
          auVar152 = vcmpss_avx(ZEXT416((uint)(fVar146 * 0.8574929)),
                                ZEXT416((uint)(fVar237 * -0.5144958)),1);
          auVar152 = vblendvps_avx(auVar164,ZEXT416((uint)(fVar146 * -0.5144958 +
                                                          fVar237 * 0.8574929)),auVar152);
          fVar314 = auVar152._0_4_ + -0.3;
          auVar152 = vandps_avx(ZEXT416((uint)((fVar237 + 0.05) - fVar314)),auVar482);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.2 - auVar152._0_4_)),auVar154);
          auVar164 = vminss_avx(ZEXT416((uint)(fVar237 + 0.05)),ZEXT416((uint)fVar314));
          fVar237 = (auVar152._0_4_ * auVar152._0_4_ * -0.25) / 0.2 + auVar164._0_4_;
          fVar533 = fVar237 / 0.1;
          auVar152 = vandps_avx(ZEXT416((uint)fVar533),___xmm_80000000800000008000000080000000);
          auVar155._8_4_ = 0x3effffff;
          auVar155._0_8_ = 0x3effffff3effffff;
          auVar155._12_4_ = 0x3effffff;
          auVar152 = vorps_avx(auVar152,auVar155);
          auVar436 = ZEXT1664(auVar171);
          auVar152 = ZEXT416((uint)(fVar533 + auVar152._0_4_));
          auVar152 = vroundss_avx(auVar152,auVar152,0xb);
          auVar152 = vmaxss_avx(auVar152,auVar171);
          auVar152 = vandps_avx(ZEXT416((uint)(fVar237 - auVar152._0_4_ * 0.1)),auVar482);
          dVar150 = (double)auVar152._0_4_ + -0.03;
          auVar438._0_4_ = (float)dVar150;
          auVar438._4_4_ = (int)((ulonglong)dVar150 >> 0x20);
          auVar438._8_8_ = 0;
          auVar152 = vminss_avx(ZEXT416((uint)fVar314),auVar438);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("LIGT");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x10;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.3;
    materials_list[index].base_cost = 1.0;
    auVar156._8_4_ = 0x3f800000;
    auVar156._0_8_ = 0x3f8000003f800000;
    auVar156._12_4_ = 0x3f800000;
    auVar152 = vinsertps_avx(auVar156,ZEXT416((uint)materials_list[index].growth_rate),0x10);
    uVar19._0_4_ = materials_list[index].max_health;
    uVar19._4_4_ = materials_list[index].transfer_rate;
    auVar152 = vmovhps_avx(auVar152,uVar19);
    pfVar84 = &materials_list[index].genome_size;
    *pfVar84 = auVar152._0_4_ * 1.0;
    pfVar84[1] = auVar152._4_4_ * 2.0;
    pfVar84[2] = auVar152._8_4_ * 0.25;
    pfVar84[3] = auVar152._12_4_ * 10.0;
    auVar436 = ZEXT464(0x3f000000);
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 0.5;
    materials_list[index].density = 0.25;
    materials_list[index].hardness = 0.0;
    materials_list[index].max_radial_force = 2.0;
    materials_list[index].radial_compliance = 2.0;
    materials_list[index].angular_compliance = 16.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f59999a3f666666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f19999a;
    materials_list[index].texture_type = 0;
    iVar50 = get_icon_coords(5);
    rVar56._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.y;
    rVar56._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar56;
  }
  iVar50 = get_icon_coords(5);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar481 = ZEXT464(0xbdcccccd);
      fVar146 = -0.2;
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        uVar143 = 0;
        do {
          fVar533 = -1.0;
          fVar314 = auVar481._0_4_ + ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar237 = fVar314 + fVar314 + 0.5;
          sinf();
          fVar237 = fVar146 * fVar314 * fVar314 + fVar237 * 0.4 + fVar314 * -0.7 +
                    ((float)iVar44 + 0.5) * 0.015625 + -1.0 + 1.1;
          fVar144 = atan2f(fVar314,fVar237);
          fVar460 = auVar436._0_4_;
          auVar152 = ZEXT416((uint)(fVar237 * fVar237 + fVar460 + fVar314 * fVar314));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar533 = fVar533 + auVar152._0_4_;
          fVar314 = fVar533 + fVar533 + -0.5;
          auVar560 = ZEXT464((uint)fVar314);
          fVar144 = fVar144 + fVar460 + fVar314 * fVar314 * 0.2;
          auVar541 = ZEXT464((uint)fVar144);
          auVar152 = vmaxss_avx(ZEXT416((uint)((0.35 - fVar144 * fVar144) * 1.3)),auVar436._0_16_);
          auVar532 = ZEXT1664(auVar152);
          auVar164 = vminss_avx(SUB6416(ZEXT464(0x3f000000),0),ZEXT416((uint)fVar144));
          auVar164 = vmaxss_avx(SUB6416(ZEXT464(0xbf4ccccd),0),auVar164);
          fVar237 = fVar144 - auVar164._0_4_;
          auVar164 = vminss_avx(ZEXT416((uint)(auVar152._0_4_ * 0.2)),ZEXT416((uint)fVar314));
          auVar152 = vmaxss_avx(ZEXT416((uint)(auVar152._0_4_ * fVar146)),auVar164);
          fVar533 = fVar314 - auVar152._0_4_;
          auVar152 = ZEXT416((uint)(fVar533 * fVar533 + fVar460 + fVar237 * fVar237));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar569 = ZEXT464((uint)(auVar481._0_4_ + auVar152._0_4_));
          auVar152 = vandps_avx(ZEXT416((uint)(fVar144 * 10.0)),
                                ___xmm_80000000800000008000000080000000);
          auVar317._8_4_ = 0x3effffff;
          auVar317._0_8_ = 0x3effffff3effffff;
          auVar317._12_4_ = 0x3effffff;
          auVar152 = vorps_avx(auVar152,auVar317);
          auVar152 = ZEXT416((uint)(fVar144 * 10.0 + auVar152._0_4_));
          auVar152 = vroundss_avx(auVar152,auVar152,0xb);
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x40800000),0),auVar152);
          auVar152 = vmaxss_avx(SUB6416(ZEXT464(0xc0800000),0),auVar152);
          fVar237 = auVar152._0_4_ + -2.0;
          auVar498 = ZEXT464((uint)fVar237);
          fVar533 = auVar152._0_4_ + 1.5;
          if (fVar237 < fVar533) {
            auVar152 = vandps_avx(ZEXT416((uint)fVar314),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar552 = ZEXT1664(auVar152);
            auVar607 = ZEXT464((uint)(auVar152._0_4_ * 5.0));
            sinf();
            auVar238._0_8_ = auVar532._0_8_ ^ 0x8000000080000000;
            auVar238._8_4_ = auVar532._8_4_ ^ 0x80000000;
            auVar238._12_4_ = auVar532._12_4_ ^ 0x80000000;
            auVar152 = vminss_avx(auVar532._0_16_,auVar560._0_16_);
            auVar152 = vmaxss_avx(auVar238,auVar152);
            fVar314 = (auVar560._0_4_ - auVar152._0_4_) * 0.5;
            do {
              fVar237 = auVar552._0_4_ * fVar146 +
                        auVar607._0_4_ * -0.15 + auVar541._0_4_ + auVar498._0_4_ * auVar481._0_4_;
              auVar152 = ZEXT416((uint)(fVar314 * fVar314 + auVar436._0_4_ + fVar237 * fVar237));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              fVar237 = auVar498._0_4_ + 1.0;
              auVar498 = ZEXT464((uint)fVar237);
              auVar152 = vminss_avx(auVar569._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.045)));
              auVar569 = ZEXT1664(auVar152);
            } while (fVar237 < fVar533);
          }
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar569._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("MASS");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x10;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 8.0;
    materials_list[index].genome_size = 5.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate * 0.625;
    fVar146 = materials_list[index].density * 120.0;
    materials_list[index].density = fVar146;
    materials_list[index].hardness = materials_list[index].hardness * 8.0;
    auVar152 = vmovsldup_avx(ZEXT416((uint)fVar146));
    auVar152 = vdivps_avx(ZEXT816(0x4080000040000000),auVar152);
    uVar4 = materials_list[index].drag;
    uVar22 = materials_list[index].tangent_drag;
    auVar157._0_4_ = auVar152._0_4_ * (float)uVar4;
    auVar157._4_4_ = auVar152._4_4_ * (float)uVar22;
    auVar157._8_4_ = auVar152._8_4_ * 0.0;
    auVar157._12_4_ = auVar152._12_4_ * 0.0;
    auVar152 = vmovlhps_avx(ZEXT816(0x3f66666641200000),auVar157);
    pmVar138 = materials_list + index;
    pmVar138->friction = (float)auVar152._0_4_;
    pmVar138->restitution = (float)auVar152._4_4_;
    pmVar138->drag = (float)auVar152._8_4_;
    pmVar138->tangent_drag = (float)auVar152._12_4_;
    pmVar138 = materials_list + index;
    pmVar138->max_radial_force = 640.0;
    pmVar138->max_angular_force = 640.0;
    *(undefined8 *)(&pmVar138->max_radial_force + 2) = 0;
    auVar436 = ZEXT464(0x3f000000);
    materials_list[index].plasticity = materials_list[index].plasticity * 0.5;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 4;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d4ccccd3d4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d4ccccd;
    materials_list[index].texture_type = 3;
    iVar50 = get_icon_coords(6);
    rVar57._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.y;
    rVar57._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar57;
  }
  iVar50 = get_icon_coords(6);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar436 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar541 = ZEXT1664(CONCAT412(0x3e99999a,CONCAT48(0x3e99999a,0x3e99999a3e99999a)));
      auVar571._8_4_ = 0x3f000000;
      auVar571._0_8_ = 0x3f0000003f000000;
      auVar571._12_4_ = 0x3f000000;
      auVar481 = ZEXT1664(CONCAT412(0x3eb851ea,CONCAT48(0x3eb851ea,0x3eb851ea3eb851ea)));
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + -0.4;
        index = 0;
        auVar569 = auVar481;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar181 = auVar436._0_16_;
          auVar152 = vandps_avx(ZEXT416((uint)fVar314),auVar181);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ * 0.59999996 +
                                              (0.0 - (fVar146 + 0.9) * 0.0))),auVar181);
          fVar533 = auVar164._0_4_ / 0.59999996;
          auVar391._0_4_ = (auVar152._0_4_ * 0.0 + 0.0 + (fVar146 + 0.9) * 0.59999996) / 0.35999995;
          auVar391._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar152 = vcmpss_avx(auVar391,SUB6416(ZEXT464(0x3f000000),0),1);
          auVar164 = vblendvps_avx(auVar541._0_16_,auVar571,auVar152);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar391._0_4_ + -0.5)),auVar181);
          auVar262 = ZEXT816(0);
          fVar237 = fVar533 + -0.5;
          auVar158._0_4_ = (fVar237 * -0.19999999 + auVar391._0_4_ * 0.35999995) / 0.39999995;
          auVar158._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar171 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar158);
          auVar189 = vmaxss_avx(auVar262,auVar171);
          auVar205 = ZEXT416((uint)(auVar152._0_4_ + -0.5));
          auVar323 = ZEXT416((uint)(fVar237 - auVar189._0_4_ * -0.19999999));
          auVar171 = vmaxss_avx(auVar323,auVar205);
          auVar152 = vcmpss_avx(auVar262,auVar171,1);
          auVar171 = vcmpss_avx(auVar171,auVar262,4);
          auVar483._8_4_ = 0xbf800000;
          auVar483._0_8_ = 0xbf800000bf800000;
          auVar483._12_4_ = 0xbf800000;
          auVar152 = vblendvps_avx(auVar483,___xmm_3f8000003f8000003f8000003f800000,auVar152);
          auVar152 = vandps_avx(auVar171,auVar152);
          auVar541 = ZEXT1664(auVar541._0_16_);
          auVar436 = ZEXT1664(auVar181);
          auVar481 = ZEXT1664(auVar569._0_16_);
          auVar171 = vinsertps_avx(auVar205,ZEXT416((uint)(auVar391._0_4_ - auVar189._0_4_)),0x10);
          auVar164 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)(fVar533 - auVar164._0_4_)));
          auVar164 = vinsertps_avx(auVar164,auVar323,0x10);
          auVar159._0_4_ =
               auVar164._0_4_ * auVar164._0_4_ + auVar569._0_4_ * auVar171._0_4_ * auVar171._0_4_;
          auVar159._4_4_ =
               auVar164._4_4_ * auVar164._4_4_ + auVar569._4_4_ * auVar171._4_4_ * auVar171._4_4_;
          auVar159._8_4_ =
               auVar164._8_4_ * auVar164._8_4_ + auVar569._8_4_ * auVar171._8_4_ * auVar171._8_4_;
          auVar159._12_4_ =
               auVar164._12_4_ * auVar164._12_4_ +
               auVar569._12_4_ * auVar171._12_4_ * auVar171._12_4_;
          auVar164 = vmovshdup_avx(auVar159);
          auVar164 = vminss_avx(auVar159,auVar164);
          auVar171 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.25)),auVar181);
          auVar152 = vminss_avx(ZEXT416((uint)(auVar152._0_4_ * auVar171._0_4_ + -0.1)),
                                ZEXT416((uint)(auVar164._0_4_ + -0.07)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
          auVar569 = auVar481;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("BONE");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x12;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.2;
    materials_list[index].base_cost = 3.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate * 0.625;
    materials_list[index].restitution = 0.9;
    pfVar84 = &materials_list[index].max_radial_force;
    fVar146 = pfVar84[1];
    fVar314 = pfVar84[2];
    fVar237 = pfVar84[3];
    pfVar141 = &materials_list[index].max_radial_force;
    *pfVar141 = *pfVar84 * 2.0;
    pfVar141[1] = fVar146 * 2.0;
    pfVar141[2] = fVar314 * 1.5;
    pfVar141[3] = fVar237 * 1.5;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 1;
    materials_list[index].conductivity = 100.0;
    materials_list[index].connection_update_fn = cell_ossifying;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f0000003f000000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f000000;
    iVar50 = get_icon_coords(7);
    rVar58._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar58._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar58;
  }
  iVar50 = get_icon_coords(7);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar436 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar541 = ZEXT1264(ZEXT812(0));
      auVar569 = ZEXT1664(ZEXT816(0xbda3d70b3da3d70b));
      auVar481 = ZEXT1664(CONCAT412(0x3c23d70b,CONCAT48(0x3c23d70b,0x3c23d70b3c23d70b)));
      auVar553._8_4_ = 0x3f800000;
      auVar553._0_8_ = 0x3f8000003f800000;
      auVar553._12_4_ = 0x3f800000;
      do {
        auVar152 = vandps_avx(ZEXT416((uint)(((float)(int)uVar81 + 0.5) * 0.015625 + -1.0)),
                              auVar436._0_16_);
        auVar171 = vshufps_avx(auVar152,auVar152,0xa0);
        auVar164 = vminss_avx(SUB6416(ZEXT464(0x3e428f5c),0),auVar152);
        fVar314 = auVar152._0_4_;
        fVar146 = fVar314 - auVar164._0_4_;
        index = 0;
        do {
          auVar181 = auVar436._0_16_;
          auVar152 = vandps_avx(ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 + -1.0)),
                                auVar181);
          fVar237 = auVar152._0_4_;
          auVar164 = vmovsldup_avx(ZEXT416((uint)((fVar237 + -0.44) * 0.060000002 + 0.0)));
          auVar160._0_4_ = auVar569._0_4_ * (auVar171._0_4_ + -0.1) + auVar164._0_4_;
          auVar160._4_4_ = auVar569._4_4_ * (auVar171._4_4_ + 0.1) + auVar164._4_4_;
          auVar160._8_4_ = auVar569._8_4_ * (auVar171._8_4_ + 0.0) + auVar164._8_4_;
          auVar160._12_4_ = auVar569._12_4_ * (auVar171._12_4_ + 0.0) + auVar164._12_4_;
          auVar164 = vdivps_avx(auVar160,auVar481._0_16_);
          auVar164 = vminps_avx(auVar553,auVar164);
          auVar164 = vmaxps_avx(ZEXT416(0) << 0x20,auVar164);
          auVar500._0_4_ = auVar164._0_4_ * 0.18;
          auVar500._4_4_ = auVar164._4_4_ * -0.18;
          auVar500._8_4_ = auVar164._8_4_ * 0.0;
          auVar500._12_4_ = auVar164._12_4_ * 0.0;
          auVar189 = vsubps_avx(auVar553,auVar164);
          auVar484._0_4_ = auVar189._0_4_ * 0.44 + auVar164._0_4_ * 0.5;
          auVar484._4_4_ = auVar189._4_4_ * 0.44 + auVar164._4_4_ * 0.5;
          auVar484._8_4_ = auVar189._8_4_ * 0.0 + auVar164._8_4_ * 0.0;
          auVar484._12_4_ = auVar189._12_4_ * 0.0 + auVar164._12_4_ * 0.0;
          auVar161._0_4_ = auVar189._0_4_ * 0.1;
          auVar161._4_4_ = auVar189._4_4_ * 0.1;
          auVar161._8_4_ = auVar189._8_4_ * 0.0;
          auVar161._12_4_ = auVar189._12_4_ * 0.0;
          auVar164 = vshufps_avx(auVar152,auVar152,0xa0);
          auVar189 = vsubps_avx(auVar164,auVar484);
          auVar600._0_4_ = auVar161._0_4_ + auVar500._0_4_;
          auVar600._4_4_ = auVar161._4_4_ + auVar500._4_4_;
          auVar600._8_4_ = auVar161._8_4_ + auVar500._8_4_;
          auVar600._12_4_ = auVar161._12_4_ + auVar500._12_4_;
          auVar164 = vsubps_avx(auVar161,auVar500);
          auVar205 = vsubps_avx(auVar171,auVar600);
          auVar162._0_4_ = auVar171._0_4_ + auVar164._0_4_;
          auVar162._4_4_ = auVar171._4_4_ + auVar164._4_4_;
          auVar162._8_4_ = auVar171._8_4_ + auVar164._8_4_;
          auVar162._12_4_ = auVar171._12_4_ + auVar164._12_4_;
          auVar164 = vblendps_avx(auVar205,auVar162,2);
          auVar163._0_4_ = auVar164._0_4_ * auVar164._0_4_ + auVar189._0_4_ * auVar189._0_4_ + 0.0;
          auVar163._4_4_ = auVar164._4_4_ * auVar164._4_4_ + auVar189._4_4_ * auVar189._4_4_ + 0.0;
          auVar163._8_4_ = auVar164._8_4_ * auVar164._8_4_ + auVar189._8_4_ * auVar189._8_4_ + 0.0;
          auVar163._12_4_ =
               auVar164._12_4_ * auVar164._12_4_ + auVar189._12_4_ * auVar189._12_4_ + 0.0;
          auVar164 = vsqrtps_avx(auVar163);
          auVar485._0_4_ = auVar164._0_4_ + -0.2;
          auVar485._4_4_ = auVar164._4_4_ + -0.2;
          auVar485._8_4_ = auVar164._8_4_ + 0.0;
          auVar485._12_4_ = auVar164._12_4_ + 0.0;
          auVar189 = vmovshdup_avx(auVar485);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar485._0_4_ - auVar189._0_4_)),auVar181);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar541._0_16_);
          if ((0.19 <= fVar314) || (0.35 <= fVar237)) {
            auVar152 = vminss_avx(SUB6416(ZEXT464(0x3eb33333),0),auVar152);
            fVar237 = fVar237 - auVar152._0_4_;
            auVar569 = ZEXT1664(auVar569._0_16_);
            auVar436 = ZEXT1664(auVar181);
            auVar481 = ZEXT1664(auVar481._0_16_);
            auVar541 = ZEXT864(0);
            auVar152 = ZEXT416((uint)(fVar146 * fVar146 + fVar237 * fVar237 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
          }
          else {
            auVar152 = vmaxss_avx(ZEXT416((uint)(fVar237 + -0.35)),ZEXT416((uint)(fVar314 + -0.19)))
            ;
          }
          auVar189 = vminss_avx(auVar485,auVar189);
          fVar237 = auVar189._0_4_ + (auVar164._0_4_ * -0.25 * auVar164._0_4_) / 0.1;
          auVar164 = vandps_avx(ZEXT416((uint)(fVar237 - auVar152._0_4_)),auVar436._0_16_);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.08 - auVar164._0_4_)),auVar541._0_16_);
          auVar152 = vminss_avx(ZEXT416((uint)fVar237),auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_ + (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.08;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("FLEX");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x10;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.3;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate * 5.0;
    materials_list[index].transfer_rate = materials_list[index].transfer_rate * 10.0;
    materials_list[index].heat_conductivity = materials_list[index].heat_conductivity * 0.2;
    materials_list[index].density = 0.5;
    auVar436 = ZEXT464(0x3f000000);
    materials_list[index].friction = materials_list[index].friction * 0.5;
    auVar152 = ZEXT416((uint)(materials_list[index].drag * 0.01));
    auVar152 = vinsertps_avx(auVar152,auVar152,0x1d);
    pmVar138 = materials_list + index;
    pmVar138->restitution = (float)auVar152._0_4_;
    pmVar138->drag = (float)auVar152._4_4_;
    pmVar138->tangent_drag = (float)auVar152._8_4_;
    pmVar138->movement_force = (float)auVar152._12_4_;
    materials_list[index].max_radial_force = materials_list[index].max_radial_force * 4.0;
    materials_list[index].radial_compliance = 0.0;
    materials_list[index].angular_compliance = 64.0;
    materials_list[index].plasticity = 0.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e99999a3f4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ecccccd;
    iVar50 = get_icon_coords(8);
    rVar59._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.y;
    rVar59._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + auVar436._0_4_) /
         (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar59;
  }
  iVar50 = get_icon_coords(8);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar436 = ZEXT464(0x3f000000);
      auVar481 = ZEXT464(0x3c800000);
      auVar541 = ZEXT464(0xbf800000);
      auVar569 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar498 = ZEXT464(0x3f800000);
      do {
        fVar146 = auVar541._0_4_ + ((float)(int)uVar81 + auVar436._0_4_) * auVar481._0_4_;
        auVar152 = vandps_avx(auVar569._0_16_,ZEXT416((uint)fVar146));
        fVar314 = 0.05 / (auVar152._0_4_ + 0.5);
        auVar607 = ZEXT464((uint)fVar314);
        auVar152 = vminss_avx(auVar498._0_16_,ZEXT416((uint)((0.8 - fVar146) + (0.8 - fVar146))));
        auVar439._0_12_ = ZEXT812(0);
        auVar439._12_4_ = 0;
        auVar152 = vmaxss_avx(auVar439,auVar152);
        fVar533 = auVar152._0_4_;
        fVar237 = fVar314 * -20.0 * fVar314;
        auVar532 = ZEXT464((uint)(fVar314 * 200.0 * fVar146));
        auVar560 = ZEXT864((ulonglong)((double)(fVar314 + fVar237 * fVar146) * 100.0));
        index = 0;
        do {
          fVar314 = auVar541._0_4_ + ((float)(int)index + auVar436._0_4_) * auVar481._0_4_;
          auVar552 = ZEXT1664(auVar532._0_16_);
          auVar436 = ZEXT1664(auVar436._0_16_);
          sinf();
          auVar597 = ZEXT1664(auVar481._0_16_);
          auVar552 = ZEXT1664(auVar552._0_16_);
          auVar481 = ZEXT1664(auVar532._0_16_);
          cosf();
          auVar436 = ZEXT1664(auVar436._0_16_);
          fVar144 = auVar552._0_4_ * fVar237 +
                    auVar607._0_4_ * (float)(auVar560._0_8_ * (double)auVar481._0_4_);
          auVar481 = ZEXT1664(auVar597._0_16_);
          auVar152 = vandps_avx(auVar569._0_16_,
                                ZEXT416((uint)(fVar314 - auVar607._0_4_ * auVar552._0_4_)));
          auVar164 = ZEXT416((uint)(auVar498._0_4_ + fVar144 * fVar144));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_ / auVar164._0_4_ +
               (2.0 - fVar146) * -0.05 * (3.0 - (fVar533 + fVar533)) * fVar533 * fVar533;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("ELST");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x10;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.3;
    materials_list[index].base_cost = 1.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate + materials_list[index].growth_rate;
    materials_list[index].transfer_rate = materials_list[index].transfer_rate * 10.0;
    materials_list[index].heat_conductivity = materials_list[index].heat_conductivity * 0.2;
    materials_list[index].density = 0.5;
    materials_list[index].hardness = 0.0;
    materials_list[index].radial_compliance = 16.0;
    materials_list[index].angular_compliance = 16.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f0666663f560419;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e828f5c;
    materials_list[index].texture_type = 0;
    iVar50 = get_icon_coords(9);
    rVar60._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar60._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar60;
  }
  iVar50 = get_icon_coords(9);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar392._8_4_ = 0x7fffffff;
      auVar392._0_8_ = 0x7fffffff7fffffff;
      auVar392._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        index = 0;
        do {
          auVar152 = vandps_avx(ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 + -1.0)),
                                auVar392);
          fVar314 = auVar152._0_4_ + -4.0;
          auVar152 = ZEXT416((uint)(fVar314 * fVar314 + 0.0 + fVar146 * fVar146));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               3.8 - auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("VEIN");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x10;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.2;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 2.0;
    materials_list[index].max_health = 10.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate * 10000.0;
    materials_list[index].transfer_rate = materials_list[index].transfer_rate * 10000.0;
    materials_list[index].density = 0.5;
    materials_list[index].hardness = 0.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e25e354;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d6147ae;
    materials_list[index].texture_type = 0;
    iVar50 = get_icon_coords(10);
    rVar62._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar62._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar62;
    iVar61._s_0 = (int_2_u_0_s_0)get_icon_coords(10);
  }
  else {
    iVar61._s_0 = (int_2_u_0_s_0)get_icon_coords(10);
  }
  if (render_icons != false) {
    uVar143 = (longlong)(*piVar47 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (*piVar47 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar44 = (int)uVar143;
    if (iVar44 < (int)uVar45) {
      iVar44 = iVar61._s_0.y + iVar44;
      auVar436 = ZEXT464(0x3d4ccccd);
      auVar481 = ZEXT464(0x3ccccccd);
      auVar569 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar541 = ZEXT464(0x3e800000);
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        index = 0;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          fVar237 = fVar146 + fVar146 + 1.618;
          sinf();
          fVar314 = fVar237 * 0.1 + fVar314;
          fVar237 = fVar314 * 4.0 + 3.236;
          sinf();
          fVar237 = auVar436._0_4_ * fVar237 + -fVar146;
          fVar533 = fVar237 * 8.0 + 4.854;
          sinf();
          auVar498 = ZEXT1664(auVar481._0_16_);
          fVar314 = auVar481._0_4_ * fVar533 - fVar314;
          auVar481 = ZEXT464((uint)fVar314);
          fVar314 = fVar314 * 16.0 + 6.472;
          sinf();
          fVar237 = fVar314 * 0.0125 - fVar237;
          auVar239._0_8_ = auVar481._0_8_ ^ 0x8000000080000000;
          auVar239._8_4_ = auVar481._8_4_ ^ 0x80000000;
          auVar239._12_4_ = auVar481._12_4_ ^ 0x80000000;
          auVar318._0_4_ = -fVar237;
          auVar318._4_4_ = 0x80000000;
          auVar318._8_4_ = 0x80000000;
          auVar318._12_4_ = 0x80000000;
          auVar152 = vcmpss_avx(auVar239,auVar481._0_16_,1);
          auVar164 = vblendvps_avx(ZEXT416((uint)fVar237),auVar318,auVar152);
          auVar205 = vmovsldup_avx(auVar164);
          auVar171 = vmaxss_avx(auVar481._0_16_,auVar239);
          auVar181 = vmovsldup_avx(auVar171);
          auVar544._0_12_ = ZEXT812(0);
          auVar544._12_4_ = 0;
          auVar319._0_4_ = (auVar205._0_4_ + 0.8) * 1.6 + auVar181._0_4_ * 0.0 + 0.0;
          auVar319._4_4_ = (auVar205._4_4_ + -0.3) * 0.5 + auVar181._4_4_ * 0.5 + 0.0;
          auVar319._8_4_ = (auVar205._8_4_ + 0.0) * 0.0 + auVar181._8_4_ * 0.0 + 0.0;
          auVar319._12_4_ = (auVar205._12_4_ + 0.0) * 0.0 + auVar181._12_4_ * 0.5 + 0.0;
          auVar152 = vdivps_avx(auVar319,SUB6416(ZEXT464(0x4023d70b),0));
          auVar320._0_4_ = auVar319._0_4_ + auVar319._0_4_;
          auVar320._4_4_ = auVar319._4_4_ + auVar319._4_4_;
          auVar320._8_4_ = auVar319._8_4_ + auVar319._8_4_;
          auVar320._12_4_ = auVar319._12_4_ + auVar319._12_4_;
          auVar152 = vblendps_avx(auVar152,auVar320,2);
          auVar554._8_4_ = 0x3f800000;
          auVar554._0_8_ = 0x3f8000003f800000;
          auVar554._12_4_ = 0x3f800000;
          auVar152 = vminps_avx(auVar554,auVar152);
          auVar152 = vmaxps_avx(auVar544,auVar152);
          auVar501._0_4_ = auVar152._0_4_ * 0.8;
          auVar501._4_4_ = auVar152._4_4_ * 0.8;
          auVar501._8_4_ = auVar152._8_4_ * 0.0;
          auVar501._12_4_ = auVar152._12_4_ * 0.0;
          auVar189 = vsubps_avx(auVar554,auVar152);
          auVar393._0_4_ = auVar189._0_4_ * 0.0 + auVar152._0_4_ * 0.0;
          auVar393._4_4_ = auVar189._4_4_ * 0.0 + auVar152._4_4_ * 0.5;
          auVar393._8_4_ = auVar189._8_4_ * 0.0 + auVar152._8_4_ * 0.0;
          auVar393._12_4_ = auVar189._12_4_ * 0.0 + auVar152._12_4_ * 0.5;
          auVar321._0_4_ = auVar189._0_4_ * 0.8;
          auVar321._4_4_ = auVar189._4_4_ * 0.3;
          auVar321._8_4_ = auVar189._8_4_ * 0.0;
          auVar321._12_4_ = auVar189._12_4_ * 0.0;
          auVar152 = vaddsubps_avx(auVar501,auVar321);
          auVar189 = vsubps_avx(auVar181,auVar393);
          auVar152 = vsubps_avx(auVar205,auVar152);
          auVar322._0_4_ = auVar152._0_4_ * auVar152._0_4_ + auVar189._0_4_ * auVar189._0_4_ + 0.0;
          auVar322._4_4_ = auVar152._4_4_ * auVar152._4_4_ + auVar189._4_4_ * auVar189._4_4_ + 0.0;
          auVar322._8_4_ = auVar152._8_4_ * auVar152._8_4_ + auVar189._8_4_ * auVar189._8_4_ + 0.0;
          auVar322._12_4_ =
               auVar152._12_4_ * auVar152._12_4_ + auVar189._12_4_ * auVar189._12_4_ + 0.0;
          auVar152 = vsqrtps_avx(auVar322);
          auVar394._0_4_ = auVar152._0_4_ + -0.15;
          auVar394._4_4_ = auVar152._4_4_ + -0.1;
          auVar394._8_4_ = auVar152._8_4_ + 0.0;
          auVar394._12_4_ = auVar152._12_4_ + 0.0;
          auVar189 = vmovshdup_avx(auVar394);
          auVar262 = auVar569._0_16_;
          auVar152 = vandps_avx(auVar262,ZEXT416((uint)(auVar394._0_4_ - auVar189._0_4_)));
          fVar533 = auVar436._0_4_;
          auVar323 = ZEXT816(0) << 0x20;
          auVar152 = vmaxss_avx(ZEXT416((uint)(fVar533 - auVar152._0_4_)),auVar323);
          fVar144 = auVar541._0_4_;
          auVar189 = vminss_avx(auVar394,auVar189);
          fVar237 = auVar189._0_4_ - (auVar152._0_4_ * auVar152._0_4_ * fVar144) / fVar533;
          auVar441._0_4_ = (auVar205._0_4_ + -0.2) * -0.7 + (auVar181._0_4_ + -0.0) * 0.6 + 0.0;
          auVar441._4_4_ =
               (auVar205._4_4_ + -0.65) * 0.15000004 + (auVar181._4_4_ + -0.35) * -0.099999994 + 0.0
          ;
          auVar441._8_4_ = (auVar205._8_4_ + 0.0) * 0.0 + (auVar181._8_4_ + 0.0) * 0.0 + 0.0;
          auVar441._12_4_ = (auVar205._12_4_ + 0.0) * 0.0 + (auVar181._12_4_ + 0.0) * 0.0 + 0.0;
          auVar152 = vdivps_avx(auVar441,___xmm_00000000000000003d051ebb3f59999a);
          auVar189 = vminps_avx(auVar554,auVar152);
          auVar152 = vcmpps_avx(auVar189,auVar544,1);
          auVar152 = vshufps_avx(auVar152,auVar152,0x50);
          uVar140 = vmovmskpd_avx(auVar152);
          fVar314 = 0.0;
          if ((uVar140 & 2) == 0) {
            auVar152 = vmovshdup_avx(auVar189);
            fVar314 = auVar152._0_4_;
          }
          auVar541 = ZEXT1664(auVar541._0_16_);
          fVar460 = auVar171._0_4_;
          fVar308 = fVar460 - ((1.0 - fVar314) * 0.35 + fVar144 * fVar314);
          fVar310 = auVar164._0_4_;
          fVar314 = fVar310 - (fVar314 * 0.8 + (1.0 - fVar314) * 0.65);
          auVar152 = ZEXT416((uint)(fVar314 * fVar314 + fVar308 * fVar308 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar314 = auVar152._0_4_ + -0.07;
          auVar152 = vandps_avx(auVar262,ZEXT416((uint)(fVar237 - fVar314)));
          auVar481 = ZEXT1664(auVar498._0_16_);
          fVar308 = auVar498._0_4_;
          auVar152 = vmaxss_avx(ZEXT416((uint)(fVar308 - auVar152._0_4_)),auVar323);
          auVar164 = vminss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar314));
          fVar314 = auVar164._0_4_ - (auVar152._0_4_ * fVar144 * auVar152._0_4_) / fVar308;
          auVar461._0_12_ = ZEXT812(0);
          auVar461._12_4_ = 0;
          if ((uVar140 & 1) == 0) {
            auVar461 = auVar189;
          }
          fVar311 = auVar461._0_4_;
          fVar237 = fVar460 - (fVar311 * 0.6 + (1.0 - fVar311) * 0.0);
          fVar311 = fVar310 - ((1.0 - fVar311) * 0.2 - fVar311 * 0.5);
          auVar152 = ZEXT416((uint)(fVar311 * fVar311 + fVar237 * fVar237 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar237 = auVar152._0_4_ + -0.1;
          auVar152 = vandps_avx(auVar262,ZEXT416((uint)(fVar314 - fVar237)));
          auVar152 = vmaxss_avx(ZEXT416((uint)(fVar533 - auVar152._0_4_)),auVar323);
          auVar164 = vminss_avx(ZEXT416((uint)fVar314),ZEXT416((uint)fVar237));
          fVar237 = auVar164._0_4_ - (auVar152._0_4_ * fVar144 * auVar152._0_4_) / fVar533;
          auVar440._0_4_ = ((fVar310 + 0.2) * 0.2 + (fVar460 + -0.3) * 0.5 + 0.0) / 0.29;
          auVar440._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar440);
          auVar152 = vmaxss_avx(auVar323,auVar152);
          fVar314 = auVar152._0_4_;
          fVar460 = fVar460 - (fVar314 * 0.8 + (1.0 - fVar314) * 0.3);
          fVar310 = fVar310 - (fVar314 * 0.0 + (1.0 - fVar314) * -0.2);
          auVar152 = ZEXT416((uint)(fVar310 * fVar310 + fVar460 * fVar460 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar314 = auVar152._0_4_ + -0.07;
          auVar152 = vandps_avx(auVar262,ZEXT416((uint)(fVar237 - fVar314)));
          auVar152 = vmaxss_avx(ZEXT416((uint)(fVar308 - auVar152._0_4_)),auVar323);
          auVar164 = vminss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar314));
          icon_atlas[icon_texture.size.field0_0x0._s_0.x * iVar44 + iVar61._s_0.x + (int)index] =
               auVar164._0_4_ - (auVar152._0_4_ * fVar144 * auVar152._0_4_) / fVar308;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar44 = iVar44 + 1;
      } while (uVar140 != uVar45);
    }
  }
  iVar44 = 0xb;
  index = 0;
  auVar481 = ZEXT464(0x3f800000);
  auVar436 = ZEXT1264(ZEXT812(0));
  do {
    iVar133 = n_materials;
    materials_list = materials_list;
    if (*piVar47 == 0) {
      lVar139 = (longlong)n_materials;
      iVar136 = n_materials + 1;
      n_materials = iVar136;
      memcpy();
      uVar45 = str_to_id("TRG0");
      materials_list[lVar139].id = (int)index * 0x1000000 + uVar45;
      materials_list[lVar139].tags = 0xa0;
      materials_list[lVar139].tier = 0;
      fVar146 = auVar481._0_4_;
      if (index != 0) {
        fVar146 = 0.0;
      }
      materials_list[lVar139].drop_weight = fVar146;
      materials_list[lVar139].base_cost = 5.0;
      materials_list[lVar139].genome_size = 2.0;
      materials_list[lVar139].capacitance = 1000.0;
      materials_list[lVar139].conductivity = 100.0;
      materials_list[lVar139].leak_conductivity = 30.0;
      if (index == 2) {
        iVar136 = iVar133 + -2;
      }
      materials_list[lVar139].next_variant = iVar136;
      materials_list[lVar139].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e4ccccd3e4ccccd;
      *(undefined8 *)((longlong)&materials_list[lVar139].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
           0x3f8000003e4ccccd;
      materials_list[lVar139].spawn_with[index + 0x23] = 0x3f800000;
      materials_list[lVar139].electric_update_fn = cell_trigger_ability_functions[index];
      iVar50 = get_icon_coords(iVar44);
      rVar63._s_0.y =
           ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) /
           (float)icon_texture.size.field0_0x0._s_0.y;
      rVar63._s_0.x =
           ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) /
           (float)icon_texture.size.field0_0x0._s_0.x;
      materials_list[lVar139].uv.field0_0x0 = rVar63;
    }
    iVar50 = get_icon_coords(iVar44);
    if (render_icons == true) {
      uVar143 = (longlong)(*piVar47 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
      uVar81 = uVar143 & 0xffffffff;
      uVar45 = (*piVar47 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
      if ((int)uVar143 < (int)uVar45) {
        do {
          iVar133 = (int)uVar81;
          fVar146 = ((float)iVar133 + 0.5) * 0.015625 + -1.0;
          auVar152 = vmovsldup_avx(ZEXT416((uint)fVar146));
          uVar143 = 0;
          do {
            fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
            auVar541 = ZEXT1264(ZEXT812(0));
            auVar569 = ZEXT464(0x40000000);
            fVar237 = 0.05;
            fVar533 = 0.0;
            fVar144 = -0.2;
            do {
              fVar312 = auVar541._0_4_;
              fVar460 = fVar312 * 65536.0;
              auVar240._0_4_ = (float)(1e+32 - (double)fVar460);
              auVar240._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar460) >> 0x20);
              auVar240._8_8_ = 0;
              auVar164 = vcmpss_avx(ZEXT416((uint)fVar460),auVar436._0_16_,1);
              auVar164 = vblendvps_avx(ZEXT416((uint)fVar460),auVar240,auVar164);
              uVar140 = (uint)(longlong)auVar164._0_4_;
              fVar460 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) *
                               0x41c64e6d) * 2.3283064e-10 + -0.5;
              fVar310 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                                (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                        2.3283064e-10 + -0.5 + -0.5;
              fVar313 = auVar436._0_4_;
              auVar164 = ZEXT416((uint)(fVar310 * fVar310 + fVar313 + fVar460 * fVar460));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar308 = auVar481._0_4_ / auVar164._0_4_;
              fVar460 = fVar533 + fVar460 * fVar308 * 0.120000005;
              fVar310 = fVar144 + fVar310 * fVar308 * 0.120000005;
              fVar308 = fVar310 * fVar310 + fVar313 + fVar460 * fVar460;
              fVar311 = fVar237 + -0.010000001;
              if (fVar308 < 0.040000003) {
                auVar164 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
                fVar308 = auVar481._0_4_ / auVar164._0_4_;
                fVar460 = fVar460 * fVar308 * 0.2;
                fVar310 = fVar310 * fVar308 * 0.2;
              }
              fVar309 = fVar460 - fVar533;
              fVar589 = fVar310 - fVar144;
              auVar164 = ZEXT416((uint)(fVar589 * fVar589 + fVar313 + fVar309 * fVar309));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              auVar481 = ZEXT1664(auVar164);
              fVar499 = auVar164._0_4_;
              fVar313 = fVar311 - fVar237;
              fVar308 = fVar313 * fVar313;
              auVar436 = ZEXT464((uint)fVar308);
              fVar542 = fVar499 * fVar499 - fVar308;
              fVar598 = fVar310;
              fVar543 = fVar460;
              if (fVar542 < 0.0) {
                fVar542 = sqrtf(fVar542);
                fVar499 = auVar481._0_4_;
                fVar308 = auVar436._0_4_;
                fVar312 = auVar541._0_4_;
              }
              else {
                auVar164 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
                fVar542 = auVar164._0_4_;
              }
              auVar481 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
              fVar309 = fVar309 * (1.0 / fVar499);
              fVar589 = fVar589 * (1.0 / fVar499);
              fVar499 = (fVar314 - fVar533) * fVar309 + (fVar146 - fVar144) * fVar589;
              fVar309 = (fVar146 - fVar144) * fVar309 - (fVar314 - fVar533) * fVar589;
              auVar164 = vandps_avx(ZEXT416((uint)fVar309),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar436 = ZEXT1264(ZEXT812(0));
              auVar171 = ZEXT416((uint)(fVar308 + fVar542 * fVar542 + 0.0));
              auVar171 = vsqrtss_avx(auVar171,auVar171);
              fVar533 = 1.0 / auVar171._0_4_;
              fVar144 = fVar542 * fVar533;
              fVar313 = fVar313 * fVar533;
              fVar533 = auVar164._0_4_ * fVar313 + fVar499 * fVar144 + 0.0;
              if (fVar533 <= 0.0) {
                auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar499 * fVar499 + 0.0));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                fVar533 = auVar164._0_4_;
LAB_140122710:
                fVar533 = fVar533 - fVar237;
              }
              else {
                if (fVar533 < fVar542) {
                  fVar533 = auVar164._0_4_ * fVar144 + fVar499 * -fVar313 + 0.0;
                  goto LAB_140122710;
                }
                auVar164 = ZEXT416((uint)((fVar146 - fVar598) * (fVar146 - fVar598) +
                                         (fVar314 - fVar543) * (fVar314 - fVar543) + 0.0));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                fVar533 = auVar164._0_4_ - fVar311;
              }
              auVar164 = vminss_avx(ZEXT416(auVar569._0_4_),ZEXT416((uint)fVar533));
              auVar569 = ZEXT1664(auVar164);
              auVar541 = ZEXT464((uint)(fVar312 + 0.2));
              fVar237 = fVar311;
              fVar533 = fVar460;
              fVar144 = fVar310;
            } while (fVar312 + 0.2 < 1.0);
            auVar171 = vmovsldup_avx(ZEXT416((uint)fVar314));
            auVar165._0_4_ =
                 (auVar152._0_4_ + -0.35) * 0.25000003 + (auVar171._0_4_ + -0.0) * 0.0 + 0.0;
            auVar165._4_4_ =
                 (auVar152._4_4_ + -0.28315595) * 0.20225427 +
                 (auVar171._4_4_ + 0.20572484) * -0.14694631 + 0.0;
            auVar165._8_4_ = (auVar152._8_4_ + 0.0) * 0.0 + (auVar171._8_4_ + 0.0) * 0.0 + 0.0;
            auVar165._12_4_ = (auVar152._12_4_ + 0.0) * 0.0 + (auVar171._12_4_ + 0.0) * 0.0 + 0.0;
            auVar171 = vdivps_avx(auVar165,___xmm_00000000000000003d8000013d800002);
            auVar241._8_4_ = 0x3f800000;
            auVar241._0_8_ = 0x3f8000003f800000;
            auVar241._12_4_ = 0x3f800000;
            auVar189 = vminps_avx(auVar241,auVar171);
            auVar171 = vcmpps_avx(auVar189,ZEXT816(0) << 0x20,1);
            auVar171 = vshufps_avx(auVar171,auVar171,0x50);
            uVar140 = vmovmskpd_avx(auVar171);
            fVar237 = 0.0;
            if ((uVar140 & 2) == 0) {
              auVar171 = vmovshdup_avx(auVar189);
              fVar237 = auVar171._0_4_;
            }
            fVar533 = fVar314 - (fVar237 * -0.35267115 + (1.0 - fVar237) * -0.20572484);
            fVar237 = fVar146 - (fVar237 * 0.4854102 + (1.0 - fVar237) * 0.28315595);
            auVar171 = ZEXT416((uint)(fVar237 * fVar237 + fVar533 * fVar533 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar164 = vminss_avx(auVar164,ZEXT416((uint)(auVar171._0_4_ + -0.04)));
            auVar171 = ZEXT816(0);
            if ((uVar140 & 1) == 0) {
              auVar171 = auVar189;
            }
            fVar533 = auVar171._0_4_;
            fVar237 = fVar314 - (fVar533 * 0.0 + (1.0 - fVar533) * 0.0);
            fVar533 = fVar146 - (fVar533 * 0.6 + (1.0 - fVar533) * 0.35);
            auVar171 = ZEXT416((uint)(fVar533 * fVar533 + fVar237 * fVar237 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar171 = vminss_avx(auVar164,ZEXT416((uint)(auVar171._0_4_ + -0.04)));
            auVar324._0_4_ =
                 ((fVar146 + -0.28315595) * 0.20225427 + (fVar314 + -0.20572484) * 0.14694631 + 0.0)
                 / 0.06250001;
            auVar324._4_12_ = SUB6012((undefined1  [60])0x0,0);
            auVar164 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar324);
            auVar164 = vmaxss_avx(ZEXT816(0) << 0x20,auVar164);
            fVar533 = auVar164._0_4_;
            fVar237 = fVar314 - (fVar533 * 0.35267115 + (1.0 - fVar533) * 0.20572484);
            fVar533 = fVar146 - (fVar533 * 0.4854102 + (1.0 - fVar533) * 0.28315595);
            auVar164 = ZEXT416((uint)(fVar533 * fVar533 + fVar237 * fVar237 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar171 = vminss_avx(auVar171,ZEXT416((uint)(auVar164._0_4_ + -0.04)));
            auVar164 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
            auVar189 = vsqrtss_avx(auVar164,auVar164);
            auVar164 = vandps_avx(ZEXT416((uint)(auVar189._0_4_ + -0.2)),
                                  ___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar164 = vminss_avx(auVar171,ZEXT416((uint)(auVar164._0_4_ + -0.05)));
            auVar164 = vmaxss_avx(auVar164,ZEXT416((uint)(0.15 - auVar189._0_4_)));
            icon_atlas
            [icon_texture.size.field0_0x0._s_0.x * (iVar133 + iVar50.field0_0x0._4_4_) +
             iVar50.field0_0x0._0_4_ + (int)uVar143] = auVar164._0_4_;
            uVar143 = uVar143 + 1;
          } while (uVar143 != 0x80);
          uVar81 = (ulonglong)(iVar133 + 1U);
          unaff_R13 = 0;
        } while (iVar133 + 1U != uVar45);
      }
    }
    materials_list = materials_list;
    iVar44 = iVar44 + 1;
    index = index + 1;
  } while (index != 3);
  pmVar138 = (material_t *)0x0;
  if (*piVar47 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("ETRG");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 2.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 30.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e4ccccd3f800000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f19999a;
    materials_list[index].electric_update_fn = cell_seek_trigger;
    iVar50 = get_icon_coords(0xe);
    rVar64._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar64._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar64;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0xe);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      pmVar138 = (material_t *)0x0;
      auVar436 = ZEXT1264(ZEXT812(0));
      fVar146 = 1.0;
      do {
        iVar44 = (int)uVar81;
        fVar314 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        fVar237 = fVar314 + -0.75;
        fVar533 = fVar237 + -0.05;
        uVar143 = 0;
        do {
          fVar144 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar541 = ZEXT1264(ZEXT812(0));
          auVar481 = ZEXT464(0x40000000);
          fVar460 = 0.05;
          fVar310 = fVar146;
          fVar308 = 0.0;
          fVar311 = -0.2;
          do {
            while( true ) {
              fVar542 = auVar541._0_4_;
              fVar146 = fVar542 * 65536.0;
              auVar242._0_4_ = (float)(1e+32 - (double)fVar146);
              auVar242._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar146) >> 0x20);
              auVar242._8_8_ = 0;
              auVar152 = vcmpss_avx(ZEXT416((uint)fVar146),auVar436._0_16_,1);
              auVar152 = vblendvps_avx(ZEXT416((uint)fVar146),auVar242,auVar152);
              uVar140 = (uint)(longlong)auVar152._0_4_;
              fVar146 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) *
                               0x41c64e6d) * 2.3283064e-10 + -0.5;
              fVar312 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                                (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                        2.3283064e-10 + -0.5 + -0.5;
              fVar589 = auVar436._0_4_;
              auVar152 = ZEXT416((uint)(fVar312 * fVar312 + fVar589 + fVar146 * fVar146));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              fVar309 = fVar310 / auVar152._0_4_;
              fVar313 = fVar146 * fVar309 * 0.120000005 + fVar308;
              fVar312 = fVar311 + fVar312 * fVar309 * 0.120000005;
              fVar146 = fVar312 * fVar312 + fVar589 + fVar313 * fVar313;
              fVar309 = fVar460 + -0.010000001;
              if (fVar146 < 0.040000003) {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar146),ZEXT416((uint)fVar146));
                fVar310 = fVar310 / auVar152._0_4_;
                fVar313 = fVar313 * fVar310 * 0.2;
                fVar312 = fVar312 * fVar310 * 0.2;
              }
              fVar598 = fVar313 - fVar308;
              fVar543 = fVar312 - fVar311;
              auVar152 = ZEXT416((uint)(fVar543 * fVar543 + fVar589 + fVar598 * fVar598));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              auVar436 = ZEXT1664(auVar152);
              fVar147 = auVar152._0_4_;
              fVar589 = fVar309 - fVar460;
              fVar310 = fVar589 * fVar589;
              auVar569 = ZEXT464((uint)fVar310);
              fVar146 = fVar147 * fVar147 - fVar310;
              fVar499 = fVar312;
              fVar315 = fVar313;
              if (fVar146 < 0.0) {
                fVar145 = sqrtf(fVar146);
                fVar310 = auVar569._0_4_;
                fVar542 = auVar541._0_4_;
                fVar147 = auVar436._0_4_;
              }
              else {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar146),ZEXT416((uint)fVar146));
                fVar145 = auVar152._0_4_;
              }
              fVar146 = 1.0;
              fVar598 = fVar598 * (1.0 / fVar147);
              fVar543 = fVar543 * (1.0 / fVar147);
              fVar147 = (fVar144 - fVar308) * fVar598 + (fVar314 - fVar311) * fVar543;
              fVar543 = (fVar314 - fVar311) * fVar598 - (fVar144 - fVar308) * fVar543;
              auVar152 = vandps_avx(ZEXT416((uint)fVar543),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar436 = ZEXT1264(ZEXT812(0));
              auVar164 = ZEXT416((uint)(fVar310 + fVar145 * fVar145 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar310 = 1.0 / auVar164._0_4_;
              fVar598 = fVar145 * fVar310;
              fVar589 = fVar589 * fVar310;
              fVar310 = auVar152._0_4_ * fVar589 + fVar147 * fVar598 + 0.0;
              fVar308 = fVar313;
              fVar311 = fVar312;
              if (0.0 < fVar310) break;
              auVar152 = ZEXT416((uint)(fVar543 * fVar543 + fVar147 * fVar147 + 0.0));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              fVar310 = auVar152._0_4_;
LAB_140122e40:
              auVar152 = vminss_avx(ZEXT416(auVar481._0_4_),ZEXT416((uint)(fVar310 - fVar460)));
              auVar481 = ZEXT1664(auVar152);
              auVar541 = ZEXT464((uint)(fVar542 + 0.2));
              fVar460 = fVar309;
              fVar310 = 1.0;
              if (1.0 <= fVar542 + 0.2) goto LAB_14012311b;
            }
            if (fVar310 < fVar145) {
              fVar310 = auVar152._0_4_ * fVar598 + fVar147 * -fVar589 + 0.0;
              goto LAB_140122e40;
            }
            auVar152 = ZEXT416((uint)((fVar314 - fVar499) * (fVar314 - fVar499) +
                                     (fVar144 - fVar315) * (fVar144 - fVar315) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar152 = vminss_avx(ZEXT416(auVar481._0_4_),ZEXT416((uint)(auVar152._0_4_ - fVar309)))
            ;
            auVar481 = ZEXT1664(auVar152);
            auVar541 = ZEXT464((uint)(fVar542 + 0.2));
            fVar460 = fVar309;
            fVar310 = fVar146;
          } while (fVar542 + 0.2 < 1.0);
LAB_14012311b:
          fVar460 = fVar237 * 25.132742;
          sinf();
          fVar460 = fVar460 * 0.08 * fVar237 + fVar144;
          fVar312 = auVar436._0_4_;
          fVar310 = fVar312 * fVar460 + -fVar237;
          fVar308 = fVar312 * fVar237 + fVar460;
          auVar152 = vandps_avx(ZEXT416((uint)fVar308),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar311 = auVar152._0_4_ * 0.024999999 + fVar312 + fVar310 * 0.99968743;
          if (fVar311 <= fVar312) {
            auVar152 = ZEXT416((uint)(fVar308 * fVar308 + fVar312 + fVar310 * fVar310));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar460 = auVar152._0_4_;
LAB_1401231b4:
            fVar460 = fVar460 + -0.06;
          }
          else {
            if (fVar311 < 0.79975) {
              fVar460 = auVar152._0_4_ * 0.99968743 + fVar312 + fVar310 * -0.024999999;
              goto LAB_1401231b4;
            }
            auVar152 = ZEXT416((uint)((fVar237 + 0.8) * (fVar237 + 0.8) +
                                     fVar312 + fVar460 * fVar460));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar460 = auVar152._0_4_ + -0.08;
          }
          auVar462._8_4_ = 0x7fffffff;
          auVar462._0_8_ = 0x7fffffff7fffffff;
          auVar462._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar462,ZEXT416((uint)fVar144));
          fVar310 = auVar152._0_4_ * 0.70710677;
          fVar311 = fVar310 + fVar533 * -0.70710677;
          fVar310 = fVar533 * 0.70710677 + fVar310;
          auVar164 = vandps_avx(ZEXT416((uint)fVar310),auVar462);
          fVar308 = fVar312 * auVar164._0_4_ + fVar312 + fVar311;
          if (fVar308 <= fVar312) {
            fVar311 = fVar311 * fVar311;
            fVar310 = fVar310 * fVar310;
LAB_14012326c:
            auVar152 = ZEXT416((uint)(fVar310 + fVar312 + fVar311));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar310 = auVar152._0_4_;
          }
          else {
            if (0.16970563 <= fVar308) {
              fVar311 = auVar152._0_4_ + -0.12;
              fVar311 = fVar311 * fVar311;
              fVar310 = (fVar533 + 0.12) * (fVar533 + 0.12);
              goto LAB_14012326c;
            }
            fVar310 = fVar312 + fVar311 * -0.0 + auVar164._0_4_;
          }
          auVar152 = ZEXT416((uint)(fVar314 * fVar314 + fVar312 + fVar144 * fVar144));
          auVar171 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vminss_avx(auVar481._0_16_,ZEXT416((uint)fVar460));
          auVar164 = vminss_avx(auVar152,ZEXT416((uint)(fVar310 + -0.06)));
          auVar152 = vandps_avx(ZEXT416((uint)(auVar171._0_4_ + -0.2)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(0.15 - auVar171._0_4_)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("MUSL");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x12;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 6.0;
    materials_list[index].genome_size = 2.0;
    materials_list[index].density = 2.0;
    materials_list[index].conductivity = 10.0;
    uVar5 = materials_list[index].max_radial_force;
    uVar23 = materials_list[index].max_angular_force;
    auVar166._0_4_ = (float)uVar5 * 16.0;
    auVar166._4_4_ = (float)uVar23 * 16.0;
    auVar166._8_8_ = 0;
    auVar152 = vunpcklpd_avx(auVar166,___xmm_0000000000000000408000003e800000);
    pmVar138 = materials_list + index;
    pmVar138->max_radial_force = (float)auVar152._0_4_;
    pmVar138->max_angular_force = (float)auVar152._4_4_;
    pmVar138->radial_compliance = (float)auVar152._8_4_;
    pmVar138->angular_compliance = (float)auVar152._12_4_;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ecccccd3f666666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ecccccd;
    materials_list[index].force_update_fn = cell_muscle;
    iVar50 = get_icon_coords(0xf);
    rVar65._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar65._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar65;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0xf);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar601._0_12_ = ZEXT812(0);
      auVar601._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + 0.2;
        fVar314 = fVar146 + -0.7;
        index = 0;
        auVar555._8_4_ = 0x7fffffff;
        auVar555._0_8_ = 0x7fffffff7fffffff;
        auVar555._12_4_ = 0x7fffffff;
        do {
          fVar237 = ((float)(int)index + 0.5) * 0.015625 + -1.0 + 0.35;
          fVar533 = fVar237 * 0.8 + fVar146 * -0.6;
          fVar144 = fVar146 * 0.8 + fVar237 * 0.6;
          auVar152 = vandps_avx(auVar555,ZEXT416((uint)fVar144));
          fVar460 = auVar152._0_4_ * -0.40000004 + fVar533 * 0.9165151 + 0.0;
          if (fVar460 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar144 * fVar144 + fVar533 * fVar533 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_;
LAB_1401236c4:
            fVar533 = fVar533 + -0.3;
          }
          else {
            if (fVar460 < 0.22912878) {
              fVar533 = auVar152._0_4_ * 0.9165151 + fVar533 * 0.40000004 + 0.0;
              goto LAB_1401236c4;
            }
            auVar152 = ZEXT416((uint)((fVar146 + 0.15) * (fVar146 + 0.15) +
                                     (fVar237 + -0.2) * (fVar237 + -0.2) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_ + -0.2;
          }
          fVar144 = (fVar237 + -0.43) * 0.97741413 + (fVar146 + 0.12) * -0.2113328;
          fVar460 = (fVar146 + 0.12) * 0.97741413 + (fVar237 + -0.43) * 0.2113328;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar310 = auVar152._0_4_ * -0.34341577 + fVar144 * 0.9391835 + 0.0;
          if (fVar310 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar460 * fVar460 + fVar144 * fVar144 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar144 = auVar152._0_4_;
LAB_140123794:
            fVar144 = fVar144 + -0.23;
          }
          else {
            if (fVar310 < 0.3555278) {
              fVar144 = auVar152._0_4_ * 0.9391835 + fVar144 * 0.34341577 + 0.0;
              goto LAB_140123794;
            }
            auVar152 = ZEXT416((uint)((fVar146 + 0.2) * (fVar146 + 0.2) +
                                     (fVar237 + -0.8) * (fVar237 + -0.8) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar144 = auVar152._0_4_ + -0.1;
          }
          auVar556._8_4_ = 0x7fffffff;
          auVar556._0_8_ = 0x7fffffff7fffffff;
          auVar556._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar556,ZEXT416((uint)(fVar533 - fVar144)));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar601);
          fVar460 = (fVar237 + -0.8) * -0.12403477 + (fVar146 + 0.1) * 0.9922779;
          fVar310 = (fVar146 + 0.1) * -0.12403477 + (fVar237 + -0.8) * -0.9922779;
          auVar152 = vandps_avx(ZEXT416((uint)fVar310),auVar556);
          fVar308 = auVar152._0_4_ * -0.099227786 + fVar460 * 0.99506474 + 0.0;
          if (fVar308 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar310 * fVar310 + fVar460 * fVar460 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar460 = auVar152._0_4_;
LAB_140123885:
            fVar460 = fVar460 + -0.14;
          }
          else {
            if (fVar308 < 0.8022468) {
              fVar460 = auVar152._0_4_ * 0.99506474 + fVar460 * 0.099227786 + 0.0;
              goto LAB_140123885;
            }
            auVar152 = ZEXT416((uint)(fVar314 * fVar314 + (fVar237 + -0.7) * (fVar237 + -0.7) + 0.0)
                              );
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar460 = auVar152._0_4_ + -0.06;
          }
          auVar171 = vminss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar144));
          fVar533 = (fVar237 + -0.6) * -0.9950372 + fVar314 * -0.09950361;
          fVar144 = fVar314 * -0.9950372 + (fVar237 + -0.6) * 0.09950361;
          auVar152 = vandps_avx(ZEXT416((uint)fVar144),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar310 = auVar152._0_4_ * 0.19900733 + fVar533 * 0.979998 + 0.0;
          if (fVar310 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar144 * fVar144 + fVar533 * fVar533 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_;
LAB_140123535:
            fVar533 = fVar533 + -0.1;
          }
          else {
            if (fVar310 < 0.09848861) {
              fVar533 = auVar152._0_4_ * 0.979998 + fVar533 * -0.19900733 + 0.0;
              goto LAB_140123535;
            }
            auVar152 = ZEXT416((uint)((fVar146 + -0.69) * (fVar146 + -0.69) +
                                     (fVar237 + -0.5) * (fVar237 + -0.5) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_ + -0.12;
          }
          fVar144 = (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.1 + auVar171._0_4_;
          auVar555._8_4_ = 0x7fffffff;
          auVar555._0_8_ = 0x7fffffff7fffffff;
          auVar555._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar555,ZEXT416((uint)(fVar144 - fVar460)));
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar601);
          auVar164 = vminss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar460));
          fVar144 = auVar164._0_4_ + (auVar152._0_4_ * auVar152._0_4_ * 0.25) / -0.1;
          auVar152 = ZEXT416((uint)((fVar146 + -0.1) * (fVar146 + -0.1) +
                                   (fVar237 + -0.75) * (fVar237 + -0.75) + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar237 = auVar152._0_4_ + -0.1;
          auVar152 = vandps_avx(auVar555,ZEXT416((uint)(fVar144 - fVar237)));
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar601);
          auVar164 = vminss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar237));
          fVar237 = auVar164._0_4_ + (auVar152._0_4_ * auVar152._0_4_ * 0.25) / -0.1;
          auVar152 = vandps_avx(auVar555,ZEXT416((uint)(fVar237 - fVar533)));
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar601);
          auVar164 = vminss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar533));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_ + (auVar152._0_4_ * auVar152._0_4_ * -0.25) / 0.1;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("INFL");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x12;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 6.0;
    materials_list[index].genome_size = 2.0;
    materials_list[index].conductivity = 10.0;
    materials_list[index].capacitance = materials_list[index].capacitance + materials_list[index].capacitance;
    materials_list[index].angular_compliance = 4.0;
    uVar6 = materials_list[index].max_radial_force;
    uVar24 = materials_list[index].max_angular_force;
    auVar167._0_4_ = (float)uVar6 * 16.0;
    auVar167._4_4_ = (float)uVar24 * 16.0;
    auVar167._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar167);
    materials_list[index].max_radial_force = (float)(int)uVar19;
    materials_list[index].max_angular_force = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f428f5c3f3ae148;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e2e147b;
    materials_list[index].force_update_fn = cell_inflate;
    iVar50 = get_icon_coords(0x10);
    rVar66._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar66._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar66;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x10);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar395._0_12_ = ZEXT812(0);
      auVar395._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + 0.1;
        fVar314 = fVar146 + 0.35;
        index = 0;
        auVar502._8_4_ = 0x7fffffff;
        auVar502._0_8_ = 0x7fffffff7fffffff;
        auVar502._12_4_ = 0x7fffffff;
        do {
          fVar237 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          fVar533 = fVar237 * 0.0 + fVar146 + 0.2;
          fVar460 = (fVar146 + 0.2) * 0.0 - fVar237;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),auVar502);
          fVar144 = auVar152._0_4_ * 0.7 + fVar533 * 0.71414286 + 0.0;
          if (fVar144 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar460 * fVar460 + fVar533 * fVar533 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_;
LAB_140123cd4:
            fVar533 = fVar533 + -0.15;
          }
          else {
            if (fVar144 < 0.35707143) {
              fVar533 = auVar152._0_4_ * 0.71414286 + fVar533 * -0.7 + 0.0;
              goto LAB_140123cd4;
            }
            auVar152 = ZEXT416((uint)((fVar146 + -0.3) * (fVar146 + -0.3) + fVar237 * fVar237 + 0.0)
                              );
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_ + -0.5;
          }
          fVar144 = fVar237 + 0.1 + fVar314 * 0.0;
          fVar310 = fVar314 - (fVar237 + 0.1) * 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar310),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar460 = auVar152._0_4_ * 0.0 + fVar144;
          if (fVar460 <= 0.0) {
            fVar144 = fVar144 * fVar144;
            fVar310 = fVar310 * fVar310;
LAB_140123d75:
            auVar152 = ZEXT416((uint)(fVar310 + fVar144 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar144 = auVar152._0_4_;
          }
          else {
            if (0.2 <= fVar460) {
              fVar144 = (fVar237 + -0.1) * (fVar237 + -0.1);
              fVar310 = fVar314 * fVar314;
              goto LAB_140123d75;
            }
            fVar144 = fVar144 * -0.0 + 0.0 + auVar152._0_4_;
          }
          auVar572._8_4_ = 0x7fffffff;
          auVar572._0_8_ = 0x7fffffff7fffffff;
          auVar572._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar572,ZEXT416((uint)(fVar533 - (fVar144 + -0.05))));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar152._0_4_)),auVar395);
          fVar460 = fVar237 * 0.0 + -fVar146;
          fVar310 = fVar237 + fVar146 * 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar310),auVar572);
          fVar308 = auVar152._0_4_ * 0.0 + fVar460 + 0.0;
          if (fVar308 <= 0.0) {
            fVar237 = fVar460 * fVar460;
            fVar310 = fVar310 * fVar310;
LAB_140123dfd:
            auVar152 = ZEXT416((uint)(fVar310 + fVar237 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar237 = auVar152._0_4_;
          }
          else {
            if (1.0 <= fVar308) {
              fVar237 = fVar237 * fVar237;
              fVar310 = (fVar146 + 1.0) * (fVar146 + 1.0);
              goto LAB_140123dfd;
            }
            fVar237 = auVar152._0_4_ + fVar460 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)(fVar144 + -0.05)));
          fVar533 = auVar152._0_4_ + (auVar164._0_4_ * -0.25 * auVar164._0_4_) / 0.05;
          auVar502._8_4_ = 0x7fffffff;
          auVar502._0_8_ = 0x7fffffff7fffffff;
          auVar502._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar533 - (fVar237 + -0.05))),auVar502);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar152._0_4_)),auVar395);
          auVar164 = vminss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)(fVar237 + -0.05)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_ + (auVar152._0_4_ * auVar152._0_4_ * -0.25) / 0.05;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  iVar133 = n_materials;
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    heart_material_index = iVar133;
    uVar45 = str_to_id("HART");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x88;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.01;
    materials_list[index].base_cost = 25.0;
    materials_list[index].genome_size = 0.0;
    materials_list[index].hardness = 0.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate * 0.125;
    materials_list[index].max_health = 100.0;
    materials_list[index].regen = 0.1;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3dcccccd3f666666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003dcccccd;
    materials_list[index].light_radius = 5.0;
    materials_list[index].emission.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3dcccccd3f666666;
    *(undefined8 *)((longlong)&materials_list[index].emission.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x23dcccccd;
    iVar50 = get_icon_coords(0x11);
    rVar67._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar67._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar67;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x11);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar573._8_4_ = 0x7fffffff;
      auVar573._0_8_ = 0x7fffffff7fffffff;
      auVar573._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + 0.15;
        index = 0;
        do {
          auVar152 = vandps_avx(ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 + -1.0)),
                                auVar573);
          fVar314 = auVar152._0_4_;
          if (fVar314 + fVar146 <= 0.5) {
            auVar152 = vandps_avx(ZEXT416((uint)(fVar314 - fVar146)),auVar573);
            fVar314 = auVar152._0_4_ / 1.4142135;
          }
          else {
            auVar152 = ZEXT416((uint)((fVar146 + -0.25) * (fVar146 + -0.25) +
                                     (fVar314 + -0.25) * (fVar314 + -0.25) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar314 = auVar152._0_4_;
          }
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),ZEXT416((uint)(fVar314 + -0.3)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("GLOW");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.02;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].conductivity = 10.0;
    materials_list[index].capacitance = materials_list[index].capacitance * 10.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f6666663f666666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f666666;
    materials_list[index].light_radius = 150.0;
    materials_list[index].emission.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f6666663f666666;
    *(undefined8 *)((longlong)&materials_list[index].emission.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f666666;
    materials_list[index].physics_update_fn = cell_light;
    iVar50 = get_icon_coords(0x12);
    rVar68._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar68._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar68;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x12);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      pmVar138 = (material_t *)0x0;
      fVar314 = 6.2831855;
      auVar436 = ZEXT464(0x3f800000);
      fVar146 = 0.125;
      do {
        iVar44 = (int)uVar81;
        fVar237 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar533 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar144 = 0.0;
          auVar541 = ZEXT464(0x40000000);
          auVar481 = ZEXT1664(ZEXT816(0) << 0x40);
          do {
            fVar460 = fVar144 * fVar314;
            fVar313 = fVar460;
            sinf();
            cosf();
            fVar310 = fVar313 * 0.35;
            fVar308 = fVar460 * 0.35;
            fVar311 = fVar313 * 0.6 - fVar310;
            fVar312 = fVar460 * 0.6 - fVar308;
            fVar309 = auVar481._0_4_;
            auVar442._0_4_ =
                 ((fVar237 - fVar308) * fVar312 + fVar309 + (fVar533 - fVar310) * fVar311) /
                 (fVar312 * fVar312 + fVar309 + fVar311 * fVar311);
            auVar442._4_12_ = SUB6012((undefined1  [60])0x0,0);
            auVar152 = vminss_avx(auVar436._0_16_,auVar442);
            auVar152 = vmaxss_avx(auVar481._0_16_,auVar152);
            fVar312 = auVar152._0_4_;
            fVar311 = auVar436._0_4_ - fVar312;
            fVar310 = fVar533 - (fVar313 * 0.6 * fVar312 + fVar310 * fVar311);
            fVar460 = fVar237 - (fVar460 * 0.6 * fVar312 + fVar308 * fVar311);
            auVar152 = ZEXT416((uint)(fVar460 * fVar460 + fVar309 + fVar310 * fVar310));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar152 = vminss_avx(auVar541._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.04)));
            auVar541 = ZEXT1664(auVar152);
            fVar144 = fVar144 + fVar146;
          } while (fVar144 < auVar436._0_4_);
          auVar164 = ZEXT416((uint)(fVar237 * fVar237 + fVar309 + fVar533 * fVar533));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.2)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.05)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    iVar44 = n_materials + 1;
    n_materials = iVar44;
    memcpy();
    uVar45 = str_to_id("SING");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].spawn_with[0] = iVar44;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].conductivity = 10.0;
    materials_list[index].capacitance = materials_list[index].capacitance * 10.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3eb243823e3d5567;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d9b3004;
    materials_list[index].texture_type = 0;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 8;
    materials_list[index].brain_fn = cell_music;
    iVar50 = get_icon_coords(0x13);
    rVar69._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar69._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar69;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x13);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      pmVar138 = (material_t *)(ulonglong)(uint)(iVar50.field0_0x0._4_4_ + iVar133);
      fVar146 = -1.0;
      auVar436 = ZEXT1264(ZEXT812(0));
      auVar481 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      do {
        fVar314 = fVar146 + ((float)(int)uVar81 + 0.5) * 0.015625 + 0.18;
        auVar152 = vmovsldup_avx(ZEXT416((uint)(fVar314 + 0.2)));
        index = 0;
        auVar545._8_4_ = 0x7fffffff;
        auVar545._0_8_ = 0x7fffffff7fffffff;
        auVar545._12_4_ = 0x7fffffff;
        fVar237 = fVar314;
        do {
          auVar541 = ZEXT1664(auVar545);
          auVar498 = ZEXT464(0x3f800000);
          auVar569 = ZEXT464(0x40000000);
          fVar533 = fVar146 + ((float)(int)index + 0.5) * 0.015625 + -0.1;
          fVar144 = (fVar533 + -0.07) * 0.6 + (fVar314 + -0.7) * -0.8;
          fVar460 = (fVar533 + -0.07) * 0.8 + (fVar314 + -0.7) * 0.6;
          fVar310 = fVar144 * 12.566371;
          sinf();
          fVar460 = fVar460 + fVar310 * 0.03;
          fVar312 = auVar436._0_4_;
          fVar310 = fVar144 + fVar312 * fVar460;
          fVar311 = fVar460 - fVar312 * fVar144;
          auVar164 = vandps_avx(auVar541._0_16_,ZEXT416((uint)fVar311));
          fVar308 = auVar164._0_4_ * -0.120000005 + fVar312 + fVar310 * 0.9927739;
          if (fVar308 <= fVar312) {
            auVar164 = ZEXT416((uint)(fVar311 * fVar311 + fVar312 + fVar310 * fVar310));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar144 = auVar164._0_4_;
LAB_1401248f4:
            fVar144 = fVar144 + -0.09;
          }
          else {
            if (fVar308 < 0.49638695) {
              fVar144 = auVar164._0_4_ * 0.9927739 + fVar312 + fVar310 * 0.120000005;
              goto LAB_1401248f4;
            }
            auVar164 = ZEXT416((uint)(fVar460 * fVar460 +
                                     fVar312 + (fVar144 + -0.5) * (fVar144 + -0.5)));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar144 = auVar164._0_4_ + -0.03;
          }
          auVar243._0_4_ = ((fVar314 + 0.02) * 0.82 + fVar312 + fVar312 * fVar533) / 0.6724;
          auVar243._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar164 = vminss_avx(auVar498._0_16_,auVar243);
          auVar164 = vmaxss_avx(auVar436._0_16_,auVar164);
          fVar308 = auVar164._0_4_;
          fVar460 = auVar498._0_4_ - fVar308;
          fVar310 = fVar533 - (fVar312 * fVar308 + fVar312 * fVar460);
          fVar460 = fVar237 + fVar460 * 0.02 + fVar308 * -0.8;
          auVar164 = ZEXT416((uint)(fVar460 * fVar460 + fVar312 + fVar310 * fVar310));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar460 = auVar164._0_4_ + -0.05;
          auVar164 = vmovsldup_avx(ZEXT416((uint)(fVar533 + 0.23)));
          auVar326._0_4_ = auVar164._0_4_ * 0.8660254 + auVar152._0_4_ * 0.5;
          auVar326._4_4_ = auVar164._4_4_ * -0.5 + auVar152._4_4_ * 0.8660254;
          auVar326._8_4_ = auVar164._8_4_ * 0.0 + auVar152._8_4_ * 0.0;
          auVar326._12_4_ = auVar164._12_4_ * 0.0 + auVar152._12_4_ * 0.0;
          auVar164 = vandps_avx(auVar481._0_16_,auVar326);
          local_268 = vshufps_avx(auVar164,auVar164,0xf5);
          fVar533 = auVar164._0_4_;
          fVar310 = local_268._0_4_;
          if (fVar533 <= fVar310) {
            auVar164 = vshufps_avx(auVar164,auVar164,0xe1);
            fVar309 = 0.3;
            fVar308 = 0.25;
            fVar311 = 0.25;
            fVar313 = 0.3;
          }
          else {
            fVar309 = 0.25;
            fVar308 = 0.3;
            fVar311 = 0.3;
            fVar313 = 0.25;
            local_268 = auVar164;
            fVar533 = fVar310;
          }
          auVar327._0_4_ = fVar311 * auVar164._0_4_;
          auVar327._4_4_ = fVar313 * auVar164._4_4_;
          auVar327._8_4_ = auVar164._8_4_ * 0.0;
          auVar327._12_4_ = auVar164._12_4_ * 0.0;
          auVar171 = vminss_avx(auVar569._0_16_,ZEXT416((uint)fVar144));
          auVar164 = vandps_avx(auVar481._0_16_,ZEXT416((uint)(auVar171._0_4_ - fVar460)));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar436._0_16_);
          auVar171 = vminss_avx(auVar171,ZEXT416((uint)fVar460));
          fVar589 = auVar171._0_4_ - (auVar164._0_4_ * auVar164._0_4_ * 0.25) / 0.1;
          fVar144 = fVar308 * fVar308 - fVar309 * fVar309;
          auVar541 = ZEXT464((uint)fVar144);
          auVar164 = vmovsldup_avx(ZEXT416((uint)fVar144));
          auVar164 = vdivps_avx(auVar327,auVar164);
          auVar171 = vmovshdup_avx(auVar164);
          auVar498 = ZEXT1664(auVar171);
          fVar311 = auVar164._0_4_;
          auVar396._0_4_ = fVar311 * fVar311;
          auVar396._4_4_ = auVar164._4_4_ * auVar164._4_4_;
          auVar396._8_4_ = auVar164._8_4_ * auVar164._8_4_;
          auVar396._12_4_ = auVar164._12_4_ * auVar164._12_4_;
          auVar481 = ZEXT1664(auVar569._0_16_);
          auVar164 = vmovshdup_avx(auVar396);
          auVar569 = ZEXT1664(auVar164);
          fVar542 = (fVar146 + auVar164._0_4_ + auVar396._0_4_) / 3.0;
          fVar313 = fVar542 * fVar542 * fVar542;
          fVar460 = auVar164._0_4_ * auVar396._0_4_;
          fVar144 = fVar460 + fVar313;
          fVar460 = fVar460 + fVar144;
          fVar598 = auVar171._0_4_;
          fVar310 = fVar598 + fVar598 * auVar396._0_4_;
          if (fVar312 <= fVar144) {
            fVar311 = (fVar598 + fVar598) * fVar311;
            if (fVar144 < fVar312) {
              fVar146 = sqrtf(fVar144);
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
              fVar146 = auVar164._0_4_;
            }
            auVar574._8_4_ = 0x7fffffff;
            auVar574._0_8_ = 0x7fffffff7fffffff;
            auVar574._12_4_ = 0x7fffffff;
            auVar607 = ZEXT1664(auVar574);
            fVar311 = fVar311 * fVar146;
            auVar560 = ZEXT464((uint)(fVar460 + fVar311));
            auVar164 = vandps_avx(ZEXT416((uint)(fVar460 + fVar311)),auVar574);
            auVar481 = ZEXT1664(auVar164);
            powf();
            auVar532 = ZEXT1664(auVar481._0_16_);
            auVar541 = ZEXT464((uint)(fVar460 - fVar311));
            auVar164 = vandps_avx(auVar607._0_16_,ZEXT416((uint)(fVar460 - fVar311)));
            auVar481 = ZEXT1664(auVar164);
            powf();
            fVar144 = auVar498._0_4_;
            auVar164 = vinsertps_avx(auVar560._0_16_,auVar541._0_16_,0x10);
            auVar328._0_12_ = ZEXT812(0);
            auVar328._12_4_ = 0;
            auVar164 = vcmpps_avx(auVar164,auVar328,1);
            auVar171 = vinsertps_avx(auVar532._0_16_,auVar481._0_16_,0x10);
            auVar329._0_8_ = auVar171._0_8_ ^ 0x8000000080000000;
            auVar329._8_4_ = auVar171._8_4_ ^ 0x80000000;
            auVar329._12_4_ = auVar171._12_4_ ^ 0x80000000;
            auVar164 = vblendvps_avx(auVar171,auVar329,auVar164);
            auVar171 = vmovshdup_avx(auVar164);
            fVar146 = auVar569._0_4_ + auVar569._0_4_ +
                      (fVar542 * -4.0 - (auVar164._0_4_ + auVar171._0_4_));
            auVar164 = vinsertps_avx(ZEXT416((uint)(auVar164._0_4_ - auVar171._0_4_)),
                                     ZEXT416((uint)fVar310),0x10);
            auVar504._0_4_ = auVar164._0_4_ * 1.7320508;
            auVar504._4_4_ = auVar164._4_4_ * 2.0;
            auVar504._8_4_ = auVar164._8_4_ * 0.0;
            auVar504._12_4_ = auVar164._12_4_ * 0.0;
            auVar541 = ZEXT1664(auVar504);
            auVar164 = ZEXT416((uint)(fVar146 * fVar146 + auVar504._0_4_ * auVar504._0_4_));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar481 = ZEXT1664(auVar164);
            fVar146 = auVar164._0_4_ - fVar146;
            if (fVar146 < auVar436._0_4_) {
              auVar569._0_4_ = sqrtf(fVar146);
              auVar504 = auVar541._0_16_;
              auVar164 = auVar481._0_16_;
              fVar144 = auVar498._0_4_;
              auVar569._4_60_ = extraout_var_07;
              auVar171 = auVar569._0_16_;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar146),ZEXT416((uint)fVar146));
            }
            fVar146 = -1.0;
            auVar164 = vinsertps_avx(auVar171,auVar164,0x10);
            auVar164 = vdivps_avx(auVar504,auVar164);
            auVar171 = vmovshdup_avx(auVar164);
            fVar460 = auVar164._0_4_ + auVar171._0_4_;
            auVar545._8_4_ = 0x7fffffff;
            auVar545._0_8_ = 0x7fffffff7fffffff;
            auVar545._12_4_ = 0x7fffffff;
            fVar237 = fVar314;
          }
          else {
            dVar150 = acos((double)(fVar460 / fVar313));
            auVar168._0_8_ = dVar150 / 3.0;
            auVar168._8_8_ = extraout_var_32._0_8_;
            auVar503._0_4_ = (float)auVar168._0_8_;
            auVar503._4_12_ = auVar168._4_12_;
            auVar560 = ZEXT1664(auVar503);
            auVar532 = ZEXT1664(auVar503);
            cosf();
            fVar460 = auVar532._0_4_ + auVar481._0_4_;
            auVar481 = ZEXT1664(auVar560._0_16_);
            sinf();
            fVar312 = auVar481._0_4_ * 1.7320508;
            fVar311 = auVar569._0_4_;
            fVar144 = fVar311 - fVar542 * (fVar460 + fVar312);
            if (fVar144 < auVar436._0_4_) {
              auVar481._0_4_ = sqrtf(fVar144);
              fVar311 = auVar569._0_4_;
              auVar481._4_60_ = extraout_var_08;
              auVar164 = auVar481._0_16_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
            }
            auVar171 = auVar541._0_16_;
            fVar144 = auVar498._0_4_;
            auVar481 = ZEXT1664(auVar164);
            fVar313 = auVar164._0_4_;
            fVar311 = fVar311 + -fVar542 * (fVar460 - fVar312);
            if (fVar311 < auVar436._0_4_) {
              fVar460 = sqrtf(fVar311);
              fVar313 = auVar481._0_4_;
              auVar171 = auVar541._0_16_;
              fVar144 = auVar498._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar460 = auVar164._0_4_;
            }
            auVar164 = vcmpss_avx(auVar436._0_16_,auVar171,1);
            auVar330._8_4_ = 0xbf800000;
            auVar330._0_8_ = 0xbf800000bf800000;
            auVar330._12_4_ = 0xbf800000;
            auVar164 = vblendvps_avx(auVar330,___xmm_3f8000003f8000003f8000003f800000,auVar164);
            auVar171 = vcmpss_avx(auVar171,auVar436._0_16_,4);
            auVar164 = vandps_avx(auVar171,auVar164);
            auVar545._8_4_ = 0x7fffffff;
            auVar545._0_8_ = 0x7fffffff7fffffff;
            auVar545._12_4_ = 0x7fffffff;
            auVar171 = vandps_avx(auVar545,ZEXT416((uint)fVar310));
            fVar460 = auVar164._0_4_ * fVar313 + fVar460 + auVar171._0_4_ / (fVar313 * fVar460);
          }
          auVar481 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
          fVar144 = (fVar460 - fVar144) * 0.5;
          auVar164 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar144 * fVar144)),auVar436._0_16_);
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar533 = fVar309 * fVar144 - fVar533;
          fVar308 = fVar308 * auVar164._0_4_;
          fVar144 = fVar308 - local_268._0_4_;
          auVar164 = ZEXT416((uint)(fVar144 * fVar144 + auVar436._0_4_ + fVar533 * fVar533));
          auVar171 = vsqrtss_avx(auVar164,auVar164);
          auVar325._0_8_ = auVar171._0_8_ ^ 0x8000000080000000;
          auVar325._8_4_ = auVar171._8_4_ ^ 0x80000000;
          auVar325._12_4_ = auVar171._12_4_ ^ 0x80000000;
          auVar164 = vcmpss_avx(local_268,ZEXT416((uint)fVar308),1);
          auVar171 = vblendvps_avx(auVar171,auVar325,auVar164);
          auVar164 = vandps_avx(auVar545,ZEXT416((uint)(fVar589 - auVar171._0_4_)));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar436._0_16_);
          auVar171 = vminss_avx(ZEXT416((uint)fVar589),auVar171);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (int)pmVar138 + iVar50.field0_0x0._0_4_ +
           (int)index] = auVar171._0_4_ + (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.1;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        pmVar138 = (material_t *)(ulonglong)((int)pmVar138 + 1);
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("EARR");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x22;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.0;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 2.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 30.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f245a1d;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ebc6a7f;
    materials_list[index].electric_update_fn = cell_sound_detector;
    iVar50 = get_icon_coords(0x14);
    rVar70._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar70._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar70;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x14);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      pmVar138 = (material_t *)0x0;
      auVar436 = ZEXT1264(ZEXT812(0));
      auVar481 = ZEXT464(0x3f800000);
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        fVar314 = fVar146 * 2.3 + 0.2;
        auVar152 = vmovsldup_avx(ZEXT416((uint)(fVar314 + 0.2)));
        uVar143 = 0;
        do {
          fVar237 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar533 = fVar237 * fVar237 + 0.0;
          fVar144 = fVar237 * 2.3 + -0.1;
          fVar460 = (fVar144 + -0.07) * 0.6 + (fVar314 + -0.7) * -0.8;
          fVar310 = (fVar144 + -0.07) * 0.8 + (fVar314 + -0.7) * 0.6;
          fVar308 = fVar460 * 12.566371;
          sinf();
          fVar310 = fVar310 + fVar308 * 0.03;
          fVar313 = auVar436._0_4_;
          fVar308 = fVar460 + fVar313 * fVar310;
          fVar312 = fVar310 - fVar460 * fVar313;
          auVar164 = vandps_avx(ZEXT416((uint)fVar312),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar311 = auVar164._0_4_ * -0.080000006 + fVar313 + fVar308 * 0.9967949;
          if (fVar311 <= fVar313) {
            auVar164 = ZEXT416((uint)(fVar312 * fVar312 + fVar313 + fVar308 * fVar308));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar460 = auVar164._0_4_;
LAB_140125044:
            fVar460 = fVar460 + -0.09;
          }
          else {
            if (fVar311 < 0.49839744) {
              fVar460 = auVar164._0_4_ * 0.9967949 + fVar313 + fVar308 * 0.080000006;
              goto LAB_140125044;
            }
            auVar164 = ZEXT416((uint)(fVar310 * fVar310 +
                                     fVar313 + (fVar460 + -0.5) * (fVar460 + -0.5)));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar460 = auVar164._0_4_ + -0.05;
          }
          auVar244._0_4_ = ((fVar314 + 0.02) * 0.82 + fVar313 + fVar313 * fVar144) / 0.6724;
          auVar244._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar164 = vminss_avx(auVar481._0_16_,auVar244);
          auVar164 = vmaxss_avx(auVar436._0_16_,auVar164);
          fVar311 = auVar164._0_4_;
          fVar310 = auVar481._0_4_ - fVar311;
          fVar308 = fVar144 - (fVar313 * fVar311 + fVar313 * fVar310);
          fVar310 = fVar310 * 0.02 + fVar311 * -0.8 + fVar314;
          auVar164 = ZEXT416((uint)(fVar310 * fVar310 + fVar313 + fVar308 * fVar308));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar310 = auVar164._0_4_ + -0.09;
          auVar164 = vmovsldup_avx(ZEXT416((uint)(fVar144 + 0.23)));
          auVar397._0_4_ = auVar164._0_4_ * 0.8660254 + auVar152._0_4_ * 0.5;
          auVar397._4_4_ = auVar164._4_4_ * -0.5 + auVar152._4_4_ * 0.8660254;
          auVar397._8_4_ = auVar164._8_4_ * 0.0 + auVar152._8_4_ * 0.0;
          auVar397._12_4_ = auVar164._12_4_ * 0.0 + auVar152._12_4_ * 0.0;
          auVar164 = vandps_avx(auVar397,___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar171 = vshufps_avx(auVar164,auVar164,0xf5);
          fVar144 = auVar164._0_4_;
          fVar308 = auVar171._0_4_;
          if (fVar144 <= fVar308) {
            auVar164 = vshufps_avx(auVar164,auVar164,0xe1);
            fVar589 = 0.3;
            fVar311 = 0.25;
            fVar312 = 0.25;
            fVar309 = 0.3;
          }
          else {
            fVar589 = 0.25;
            fVar311 = 0.3;
            fVar312 = 0.3;
            fVar309 = 0.25;
            auVar171 = auVar164;
            fVar144 = fVar308;
          }
          auVar569 = ZEXT1664(auVar171);
          auVar398._0_4_ = fVar312 * auVar164._0_4_;
          auVar398._4_4_ = fVar309 * auVar164._4_4_;
          auVar398._8_4_ = auVar164._8_4_ * 0.0;
          auVar398._12_4_ = auVar164._12_4_ * 0.0;
          auVar164 = ZEXT416((uint)(fVar533 + fVar146 * fVar146));
          auVar205 = vsqrtss_avx(auVar164,auVar164);
          auVar498 = ZEXT1664(auVar205);
          auVar189 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),ZEXT416((uint)fVar460));
          auVar164 = vandps_avx(ZEXT416((uint)(auVar189._0_4_ - fVar310)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar436._0_16_);
          auVar189 = vminss_avx(auVar189,ZEXT416((uint)fVar310));
          fVar309 = auVar189._0_4_ - (auVar164._0_4_ * auVar164._0_4_ * 0.25) / 0.1;
          fVar533 = fVar311 * fVar311 - fVar589 * fVar589;
          auVar541 = ZEXT464((uint)fVar533);
          auVar164 = vmovsldup_avx(ZEXT416((uint)fVar533));
          auVar164 = vdivps_avx(auVar398,auVar164);
          auVar189 = vmovshdup_avx(auVar164);
          auVar481 = ZEXT1664(auVar189);
          fVar308 = auVar164._0_4_;
          auVar399._0_4_ = fVar308 * fVar308;
          auVar399._4_4_ = auVar164._4_4_ * auVar164._4_4_;
          auVar399._8_4_ = auVar164._8_4_ * auVar164._8_4_;
          auVar399._12_4_ = auVar164._12_4_ * auVar164._12_4_;
          auVar164 = vmovshdup_avx(auVar399);
          auVar532 = ZEXT1664(auVar164);
          fVar598 = (auVar164._0_4_ + auVar399._0_4_ + -1.0) / 3.0;
          fVar312 = fVar598 * fVar598 * fVar598;
          fVar460 = auVar164._0_4_ * auVar399._0_4_;
          fVar533 = fVar460 + fVar312;
          fVar460 = fVar460 + fVar533;
          fVar542 = auVar189._0_4_;
          fVar310 = fVar542 * auVar399._0_4_ + fVar542;
          if (fVar313 <= fVar533) {
            fVar308 = (fVar542 + fVar542) * fVar308;
            fVar312 = auVar205._0_4_;
            if (fVar533 < fVar313) {
              fVar533 = sqrtf(fVar533);
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
              fVar533 = auVar164._0_4_;
            }
            auVar563._8_4_ = 0x7fffffff;
            auVar563._0_8_ = 0x7fffffff7fffffff;
            auVar563._12_4_ = 0x7fffffff;
            auVar607 = ZEXT1664(auVar563);
            fVar308 = fVar308 * fVar533;
            auVar560 = ZEXT464((uint)(fVar460 + fVar308));
            auVar164 = vandps_avx(ZEXT416((uint)(fVar460 + fVar308)),auVar563);
            auVar541 = ZEXT1664(auVar164);
            powf();
            auVar569 = ZEXT1664(auVar541._0_16_);
            auVar498 = ZEXT464((uint)(fVar460 - fVar308));
            auVar164 = vandps_avx(ZEXT416((uint)(fVar460 - fVar308)),auVar607._0_16_);
            auVar541 = ZEXT1664(auVar164);
            powf();
            fVar460 = auVar481._0_4_;
            auVar164 = vinsertps_avx(auVar560._0_16_,auVar498._0_16_,0x10);
            auVar331._0_12_ = ZEXT812(0);
            auVar331._12_4_ = 0;
            auVar164 = vcmpps_avx(auVar164,auVar331,1);
            auVar189 = vinsertps_avx(auVar569._0_16_,auVar541._0_16_,0x10);
            auVar332._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
            auVar332._8_4_ = auVar189._8_4_ ^ 0x80000000;
            auVar332._12_4_ = auVar189._12_4_ ^ 0x80000000;
            auVar164 = vblendvps_avx(auVar189,auVar332,auVar164);
            auVar189 = vmovshdup_avx(auVar164);
            fVar533 = auVar532._0_4_ + auVar532._0_4_ +
                      (fVar598 * -4.0 - (auVar164._0_4_ + auVar189._0_4_));
            auVar164 = vinsertps_avx(ZEXT416((uint)(auVar164._0_4_ - auVar189._0_4_)),
                                     ZEXT416((uint)fVar310),0x10);
            auVar506._0_4_ = auVar164._0_4_ * 1.7320508;
            auVar506._4_4_ = auVar164._4_4_ * 2.0;
            auVar506._8_4_ = auVar164._8_4_ * 0.0;
            auVar506._12_4_ = auVar164._12_4_ * 0.0;
            auVar541 = ZEXT1664(auVar506);
            auVar164 = ZEXT416((uint)(fVar533 * fVar533 + auVar506._0_4_ * auVar506._0_4_));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar569 = ZEXT1664(auVar164);
            fVar533 = auVar164._0_4_ - fVar533;
            if (fVar533 < auVar436._0_4_) {
              auVar498._0_4_ = sqrtf(fVar533);
              auVar506 = auVar541._0_16_;
              fVar460 = auVar481._0_4_;
              auVar164 = auVar569._0_16_;
              auVar498._4_60_ = extraout_var_10;
              auVar189 = auVar498._0_16_;
            }
            else {
              auVar189 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
            }
            auVar164 = vinsertps_avx(auVar189,auVar164,0x10);
            auVar164 = vdivps_avx(auVar506,auVar164);
            auVar189 = vmovshdup_avx(auVar164);
            fVar533 = auVar164._0_4_ + auVar189._0_4_;
            auVar400._8_4_ = 0x7fffffff;
            auVar400._0_8_ = 0x7fffffff7fffffff;
            auVar400._12_4_ = 0x7fffffff;
          }
          else {
            auVar552 = ZEXT1664(SUB6416(ZEXT464(0x40000000),0));
            dVar150 = acos((double)(fVar460 / fVar312));
            auVar169._0_8_ = dVar150 / 3.0;
            auVar169._8_8_ = extraout_var_33._0_8_;
            auVar505._0_4_ = (float)auVar169._0_8_;
            auVar505._4_12_ = auVar169._4_12_;
            auVar607 = ZEXT1664(auVar505);
            auVar560 = ZEXT1664(auVar505);
            cosf();
            fVar533 = auVar552._0_4_ + auVar560._0_4_;
            auVar560 = ZEXT1664(auVar607._0_16_);
            sinf();
            fVar313 = auVar560._0_4_ * 1.7320508;
            fVar308 = auVar532._0_4_;
            fVar460 = fVar308 - fVar598 * (fVar533 + fVar313);
            if (fVar460 < auVar436._0_4_) {
              auVar560._0_4_ = sqrtf(fVar460);
              fVar308 = auVar532._0_4_;
              auVar560._4_60_ = extraout_var_09;
              auVar164 = auVar560._0_16_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)fVar460));
            }
            fVar312 = auVar498._0_4_;
            auVar171 = auVar569._0_16_;
            fVar460 = auVar481._0_4_;
            auVar189 = auVar541._0_16_;
            auVar532 = ZEXT1664(auVar164);
            fVar542 = auVar164._0_4_;
            fVar308 = fVar308 + -fVar598 * (fVar533 - fVar313);
            if (fVar308 < auVar436._0_4_) {
              fVar533 = sqrtf(fVar308);
              fVar542 = auVar532._0_4_;
              fVar312 = auVar498._0_4_;
              auVar171 = auVar569._0_16_;
              fVar460 = auVar481._0_4_;
              auVar189 = auVar541._0_16_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
              fVar533 = auVar164._0_4_;
            }
            auVar164 = vcmpss_avx(auVar436._0_16_,auVar189,1);
            auVar333._8_4_ = 0xbf800000;
            auVar333._0_8_ = 0xbf800000bf800000;
            auVar333._12_4_ = 0xbf800000;
            auVar164 = vblendvps_avx(auVar333,___xmm_3f8000003f8000003f8000003f800000,auVar164);
            auVar189 = vcmpss_avx(auVar189,auVar436._0_16_,4);
            auVar164 = vandps_avx(auVar189,auVar164);
            auVar400._8_4_ = 0x7fffffff;
            auVar400._0_8_ = 0x7fffffff7fffffff;
            auVar400._12_4_ = 0x7fffffff;
            auVar189 = vandps_avx(auVar400,ZEXT416((uint)fVar310));
            fVar533 = auVar164._0_4_ * fVar542 + fVar533 + auVar189._0_4_ / (fVar542 * fVar533);
          }
          auVar481 = ZEXT464(0x3f800000);
          fVar533 = (fVar533 - fVar460) * 0.5;
          fVar144 = fVar589 * fVar533 - fVar144;
          auVar507._0_12_ = ZEXT812(0);
          auVar507._12_4_ = 0;
          auVar541 = ZEXT1664(auVar507);
          auVar164 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar533 * fVar533)),auVar507);
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar311 = fVar311 * auVar164._0_4_;
          fVar533 = fVar311 - auVar171._0_4_;
          auVar164 = ZEXT416((uint)(fVar533 * fVar533 + fVar144 * fVar144 + 0.0));
          auVar189 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vcmpss_avx(auVar171,ZEXT416((uint)fVar311),1);
          auVar334._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
          auVar334._8_4_ = auVar189._8_4_ ^ 0x80000000;
          auVar334._12_4_ = auVar189._12_4_ ^ 0x80000000;
          auVar171 = vblendvps_avx(auVar189,auVar334,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(fVar309 - auVar171._0_4_)),auVar400);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar507);
          auVar171 = vminss_avx(ZEXT416((uint)fVar309),auVar171);
          auVar170._0_4_ = (auVar171._0_4_ + (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.1) / 2.3;
          auVar170._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar164 = vandps_avx(ZEXT416((uint)(fVar312 + -0.35)),auVar400);
          auVar164 = vminss_avx(auVar170,ZEXT416((uint)(auVar164._0_4_ + -0.05)));
          fVar533 = 0.05;
          fVar144 = 0.0;
          fVar460 = -0.35;
          do {
            fVar313 = auVar541._0_4_;
            fVar310 = fVar313 * 65536.0;
            auVar245._0_4_ = (float)(1e+32 - (double)fVar310);
            auVar245._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar310) >> 0x20);
            auVar245._8_8_ = 0;
            auVar171 = vcmpss_avx(ZEXT416((uint)fVar310),auVar436._0_16_,1);
            auVar171 = vblendvps_avx(ZEXT416((uint)fVar310),auVar245,auVar171);
            uVar140 = (uint)(longlong)auVar171._0_4_;
            fVar310 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar308 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            fVar309 = auVar436._0_4_;
            auVar171 = ZEXT416((uint)(fVar308 * fVar308 + fVar309 + fVar310 * fVar310));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar311 = auVar481._0_4_ / auVar171._0_4_;
            auVar436 = ZEXT464((uint)fVar144);
            fVar310 = fVar144 + fVar310 * fVar311 * 0.120000005;
            fVar308 = fVar460 + fVar308 * fVar311 * 0.120000005;
            fVar311 = fVar308 * fVar308 + fVar309 + fVar310 * fVar310;
            fVar312 = fVar533 + -0.010000001;
            if (fVar311 < 0.040000003) {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = auVar481._0_4_ / auVar171._0_4_;
              fVar310 = fVar310 * fVar311 * 0.2;
              fVar308 = fVar308 * fVar311 * 0.2;
            }
            fVar589 = fVar310 - fVar144;
            fVar542 = fVar308 - fVar460;
            auVar171 = ZEXT416((uint)(fVar542 * fVar542 + fVar309 + fVar589 * fVar589));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar481 = ZEXT1664(auVar171);
            fVar315 = auVar171._0_4_;
            fVar309 = fVar312 - fVar533;
            fVar311 = fVar309 * fVar309;
            auVar569 = ZEXT464((uint)fVar311);
            fVar598 = fVar315 * fVar315 - fVar311;
            fVar543 = fVar308;
            fVar499 = fVar310;
            if (fVar598 < 0.0) {
              fVar598 = sqrtf(fVar598);
              fVar144 = auVar436._0_4_;
              fVar311 = auVar569._0_4_;
              fVar315 = auVar481._0_4_;
              fVar313 = auVar541._0_4_;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar598),ZEXT416((uint)fVar598));
              fVar598 = auVar171._0_4_;
            }
            fVar589 = fVar589 * (1.0 / fVar315);
            fVar542 = fVar542 * (1.0 / fVar315);
            auVar481 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
            fVar315 = (fVar237 - fVar144) * fVar589 + (fVar146 - fVar460) * fVar542;
            fVar589 = (fVar146 - fVar460) * fVar589 - (fVar237 - fVar144) * fVar542;
            auVar171 = vandps_avx(ZEXT416((uint)fVar589),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar436 = ZEXT1264(ZEXT812(0));
            auVar189 = ZEXT416((uint)(fVar311 + fVar598 * fVar598 + 0.0));
            auVar189 = vsqrtss_avx(auVar189,auVar189);
            fVar144 = 1.0 / auVar189._0_4_;
            fVar460 = fVar598 * fVar144;
            fVar309 = fVar309 * fVar144;
            fVar144 = auVar171._0_4_ * fVar309 + fVar315 * fVar460 + 0.0;
            if (fVar144 <= 0.0) {
              auVar171 = ZEXT416((uint)(fVar589 * fVar589 + fVar315 * fVar315 + 0.0));
              auVar171 = vsqrtss_avx(auVar171,auVar171);
              fVar144 = auVar171._0_4_;
LAB_140125574:
              fVar144 = fVar144 - fVar533;
            }
            else {
              if (fVar144 < fVar598) {
                fVar144 = auVar171._0_4_ * fVar460 + fVar315 * -fVar309 + 0.0;
                goto LAB_140125574;
              }
              auVar171 = ZEXT416((uint)((fVar146 - fVar543) * (fVar146 - fVar543) +
                                       (fVar237 - fVar499) * (fVar237 - fVar499) + 0.0));
              auVar171 = vsqrtss_avx(auVar171,auVar171);
              fVar144 = auVar171._0_4_ - fVar312;
            }
            auVar164 = vminss_avx(ZEXT416(auVar164._0_4_),ZEXT416((uint)fVar144));
            auVar541 = ZEXT464((uint)(fVar313 + 0.2));
            fVar533 = fVar312;
            fVar144 = fVar310;
            fVar460 = fVar308;
          } while (fVar313 + 0.2 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar164._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("EYEE");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x22;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 2.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 30.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3eeedb3f3eeedb3f;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003eeedb3f;
    materials_list[index].brain_fn = cell_light_detector_pre;
    materials_list[index].electric_update_fn = cell_light_detector;
    iVar50 = get_icon_coords(0x15);
    rVar71._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar71._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar71;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x15);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      pmVar138 = (material_t *)0x0;
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        auVar152 = vandps_avx(ZEXT416((uint)fVar146),___xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar314 = auVar152._0_4_ + 0.3;
        uVar143 = 0;
        do {
          fVar237 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar144 = 0.0;
          fVar533 = fVar237 * fVar237 + 0.0;
          auVar152 = ZEXT416((uint)(fVar533 + fVar146 * fVar146));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar335._8_4_ = 0x7fffffff;
          auVar335._0_8_ = 0x7fffffff7fffffff;
          auVar335._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ + -0.15)),auVar335);
          auVar164 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),
                                ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          auVar152 = ZEXT416((uint)(fVar533 + fVar314 * fVar314));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ + -0.55)),auVar335);
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          fVar533 = 0.05;
          fVar460 = 0.0;
          fVar310 = -0.25;
          do {
            fVar308 = fVar144 * 65536.0;
            auVar246._0_4_ = (float)(1e+32 - (double)fVar308);
            auVar246._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar308) >> 0x20);
            auVar246._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar308),auVar436._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar308),auVar246,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar308 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar311 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar164 = ZEXT416((uint)(fVar311 * fVar311 + fVar308 * fVar308 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar312 = 1.0 / auVar164._0_4_;
            auVar436 = ZEXT464((uint)fVar460);
            fVar308 = fVar460 + fVar308 * fVar312 * 0.120000005;
            fVar311 = fVar310 + fVar311 * fVar312 * 0.120000005;
            fVar312 = fVar311 * fVar311 + fVar308 * fVar308 + 0.0;
            fVar313 = fVar533 + -0.010000001;
            if (fVar312 < 0.040000003) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
              fVar312 = 1.0 / auVar164._0_4_;
              fVar308 = fVar308 * fVar312 * 0.2;
              fVar311 = fVar311 * fVar312 * 0.2;
            }
            auVar541 = ZEXT464((uint)fVar308);
            fVar309 = fVar308 - fVar460;
            fVar589 = fVar311 - fVar310;
            auVar164 = ZEXT416((uint)(fVar589 * fVar589 + fVar309 * fVar309 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar481 = ZEXT1664(auVar164);
            fVar499 = auVar164._0_4_;
            fVar542 = fVar313 - fVar533;
            fVar312 = fVar542 * fVar542;
            fVar598 = fVar499 * fVar499 - fVar312;
            fVar543 = fVar311;
            if (fVar598 < 0.0) {
              fVar315 = sqrtf(fVar598);
              fVar598 = auVar541._0_4_;
              fVar460 = auVar436._0_4_;
              fVar499 = auVar481._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar598),ZEXT416((uint)fVar598));
              fVar315 = auVar164._0_4_;
              fVar598 = fVar308;
            }
            fVar309 = fVar309 * (1.0 / fVar499);
            fVar589 = fVar589 * (1.0 / fVar499);
            fVar499 = (fVar237 - fVar460) * fVar309 + (fVar146 - fVar310) * fVar589;
            fVar309 = (fVar146 - fVar310) * fVar309 - (fVar237 - fVar460) * fVar589;
            auVar164 = vandps_avx(ZEXT416((uint)fVar309),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar171 = ZEXT416((uint)(fVar312 + fVar315 * fVar315 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar460 = 1.0 / auVar171._0_4_;
            fVar310 = fVar315 * fVar460;
            fVar542 = fVar542 * fVar460;
            fVar460 = auVar164._0_4_ * fVar542 + fVar499 * fVar310 + 0.0;
            if (fVar460 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar499 * fVar499 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar460 = auVar164._0_4_;
LAB_140125b7e:
              fVar460 = fVar460 - fVar533;
            }
            else {
              if (fVar460 < fVar315) {
                fVar460 = auVar164._0_4_ * fVar310 + fVar499 * -fVar542 + 0.0;
                goto LAB_140125b7e;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar543) * (fVar146 - fVar543) +
                                       (fVar237 - fVar598) * (fVar237 - fVar598) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar460 = auVar164._0_4_ - fVar313;
            }
            auVar436 = ZEXT1264(ZEXT812(0));
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)fVar460));
            fVar144 = fVar144 + 0.2;
            fVar533 = fVar313;
            fVar460 = fVar308;
            fVar310 = fVar311;
          } while (fVar144 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           iVar50.field0_0x0._0_4_ + (int)uVar143] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
      unaff_R13 = 0;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("WIRE");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].capacitance = 10.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 5.0;
    uVar7 = materials_list[index].heat_conductivity;
    uVar25 = materials_list[index].leak_heat_conductivity;
    auVar172._0_4_ = (float)uVar7 * 100.0;
    auVar172._4_4_ = (float)uVar25 * 10.0;
    auVar172._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar172);
    materials_list[index].heat_conductivity = (float)(int)uVar19;
    materials_list[index].leak_heat_conductivity = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f3333333f333333;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f4ccccd;
    iVar50 = get_icon_coords(0x16);
    rVar72._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar72._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar72;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x16);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      auVar481 = ZEXT464(0x3f800000);
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar237 = -1.0;
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar152 = vcmpss_avx(ZEXT416((uint)fVar314),auVar436._0_16_,1);
          auVar336._8_4_ = 0x3f800000;
          auVar336._0_8_ = 0x3f8000003f800000;
          auVar336._12_4_ = 0x3f800000;
          auVar152 = vblendvps_avx(auVar336,___xmm_bf800000bf800000bf800000bf800000,auVar152);
          fVar533 = auVar152._0_4_;
          auVar541 = ZEXT464(0x40000000);
          do {
            fVar144 = fVar237 * 0.9424779;
            fVar310 = fVar144;
            cosf();
            sinf();
            auVar486._0_12_ = ZEXT812(0);
            auVar486._12_4_ = 0;
            auVar569 = ZEXT1664(auVar486);
            pmVar138 = (material_t *)
                       (CONCAT44((int)((ulonglong)pmVar138 >> 0x20),
                                 fVar533 * fVar310 * 0.2 + fVar533 * 0.3) |
                       (ulonglong)(uint)(fVar533 * fVar144 * 0.2 + 0.0) << 0x20);
            fVar460 = fVar237 * 65536.0;
            auVar247._0_4_ = (float)(1e+32 - (double)fVar460);
            auVar247._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar460) >> 0x20);
            auVar247._8_8_ = 0;
            auVar152 = vcmpss_avx(ZEXT416((uint)fVar460),auVar486,1);
            auVar152 = vblendvps_avx(ZEXT416((uint)fVar460),auVar247,auVar152);
            unaff_R13 = (ulonglong)auVar152._0_4_;
            uVar140 = (uint)unaff_R13 + 0x2f88ed;
            fVar460 = 0.05;
            do {
              while( true ) {
                fVar542 = auVar569._0_4_;
                fVar308 = fVar542 * 65536.0;
                auVar248._0_4_ = (float)(1e+32 - (double)fVar308);
                auVar248._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar308) >> 0x20);
                auVar248._8_8_ = 0;
                auVar152 = vcmpss_avx(ZEXT416((uint)fVar308),auVar436._0_16_,1);
                auVar152 = vblendvps_avx(ZEXT416((uint)fVar308),auVar248,auVar152);
                uVar134 = (uint)(longlong)auVar152._0_4_;
                fVar308 = (float)((((uint)(unaff_R13 >> 1) & 0x7fffffff ^ uVar134) * 0x41c64e6d >> 3
                                  ^ (uVar134 >> 1 ^ (uint)unaff_R13) * 0x41c64e6d) * 0x41c64e6d) *
                          2.3283064e-10 + -0.5 + fVar533 * fVar310 * 0.8;
                fVar311 = (float)(((uVar134 + 0x2f88ed >> 1 ^ uVar140) * 0x41c64e6d >> 3 ^
                                  (uVar134 + 0x2f88ed ^ uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d) *
                          2.3283064e-10 + -0.5 + fVar533 * fVar144 * 0.8;
                fVar598 = auVar436._0_4_;
                auVar152 = ZEXT416((uint)(fVar311 * fVar311 + fVar598 + fVar308 * fVar308));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                fVar312 = auVar481._0_4_ / auVar152._0_4_;
                fVar309 = SUB84(pmVar138,0);
                auVar436 = ZEXT464((uint)fVar309);
                fVar589 = (float)((ulonglong)pmVar138 >> 0x20);
                fVar308 = fVar309 + fVar308 * fVar312 * 0.1;
                fVar311 = fVar589 + fVar311 * fVar312 * 0.1;
                fVar312 = fVar311 * fVar311 + fVar598 + fVar308 * fVar308;
                fVar313 = fVar460 + -0.010000001;
                if (fVar312 < 0.040000003) {
                  auVar152 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
                  fVar312 = auVar481._0_4_ / auVar152._0_4_;
                  fVar308 = fVar308 * fVar312 * 0.2;
                  fVar311 = fVar311 * fVar312 * 0.2;
                }
                pmVar138 = (material_t *)CONCAT44(fVar311,fVar308);
                fVar543 = fVar308 - fVar309;
                auVar498 = ZEXT464((uint)fVar543);
                fVar499 = fVar311 - fVar589;
                auVar152 = ZEXT416((uint)(fVar499 * fVar499 + fVar598 + fVar543 * fVar543));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                auVar481 = ZEXT1664(auVar152);
                fVar147 = auVar152._0_4_;
                fVar598 = fVar313 - fVar460;
                fVar312 = fVar598 * fVar598;
                fVar315 = fVar147 * fVar147 - fVar312;
                if (fVar315 < 0.0) {
                  fVar315 = sqrtf(fVar315);
                  fVar309 = auVar436._0_4_;
                  fVar543 = auVar498._0_4_;
                  fVar542 = auVar569._0_4_;
                  fVar147 = auVar481._0_4_;
                }
                else {
                  auVar152 = vsqrtss_avx(ZEXT416((uint)fVar315),ZEXT416((uint)fVar315));
                  fVar315 = auVar152._0_4_;
                }
                fVar543 = fVar543 * (1.0 / fVar147);
                fVar499 = fVar499 * (1.0 / fVar147);
                auVar481 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
                fVar147 = (fVar314 - fVar309) * fVar543 + (fVar146 - fVar589) * fVar499;
                fVar589 = (fVar146 - fVar589) * fVar543 - (fVar314 - fVar309) * fVar499;
                auVar152 = vandps_avx(ZEXT416((uint)fVar589),___xmm_7fffffff7fffffff7fffffff7fffffff
                                     );
                auVar164 = ZEXT416((uint)(fVar312 + fVar315 * fVar315 + 0.0));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                fVar312 = 1.0 / auVar164._0_4_;
                fVar309 = fVar315 * fVar312;
                fVar598 = fVar598 * fVar312;
                fVar312 = auVar152._0_4_ * fVar598 + fVar147 * fVar309 + 0.0;
                auVar436 = ZEXT1664(ZEXT816(0));
                if (0.0 < fVar312) break;
                auVar152 = ZEXT416((uint)(fVar589 * fVar589 + fVar147 * fVar147 + 0.0));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                fVar308 = auVar152._0_4_;
LAB_140126314:
                auVar152 = vminss_avx(ZEXT416(auVar541._0_4_),ZEXT416((uint)(fVar308 - fVar460)));
                auVar541 = ZEXT1664(auVar152);
                auVar569 = ZEXT464((uint)(fVar542 + 0.2));
                fVar460 = fVar313;
                if (1.0 <= fVar542 + 0.2) goto LAB_140126210;
              }
              if (fVar312 < fVar315) {
                fVar308 = auVar152._0_4_ * fVar309 + fVar147 * -fVar598 + 0.0;
                goto LAB_140126314;
              }
              auVar152 = ZEXT416((uint)((fVar146 - fVar311) * (fVar146 - fVar311) +
                                       (fVar314 - fVar308) * (fVar314 - fVar308) + 0.0));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              auVar152 = vminss_avx(ZEXT416(auVar541._0_4_),
                                    ZEXT416((uint)(auVar152._0_4_ - fVar313)));
              auVar541 = ZEXT1664(auVar152);
              auVar569 = ZEXT464((uint)(fVar542 + 0.2));
              fVar460 = fVar313;
            } while (fVar542 + 0.2 < 1.0);
LAB_140126210:
            fVar237 = fVar237 + 0.5;
          } while (fVar237 <= 1.0);
          auVar173._0_4_ = (fVar146 * 0.0 + (fVar314 + 0.2) * 0.4 + 0.0) / 0.16000001;
          auVar173._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar173);
          auVar152 = vmaxss_avx(ZEXT816(0),auVar152);
          fVar144 = auVar152._0_4_;
          fVar237 = fVar314 - (fVar144 * 0.2 - (1.0 - fVar144) * 0.2);
          fVar144 = fVar146 - (fVar144 * 0.0 + (1.0 - fVar144) * 0.0);
          auVar152 = ZEXT416((uint)(fVar144 * fVar144 + fVar237 * fVar237 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar164 = vminss_avx(auVar541._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.03)));
          fVar314 = fVar314 - fVar533 * 0.3;
          auVar152 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ + -0.1)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.03)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("CAPC");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 4.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].capacitance = 10000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 0.001;
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 5.0;
    uVar8 = materials_list[index].heat_conductivity;
    uVar26 = materials_list[index].leak_heat_conductivity;
    auVar174._0_4_ = (float)uVar8 * 10.0;
    auVar174._4_4_ = (float)uVar26 * 10.0;
    auVar174._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar174);
    materials_list[index].heat_conductivity = (float)(int)uVar19;
    materials_list[index].leak_heat_conductivity = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e0000003ea8f5c3;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003b449ba6;
    iVar50 = get_icon_coords(0x17);
    rVar73._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar73._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar73;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x17);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        auVar152 = vinsertps_avx(ZEXT416((uint)(fVar146 + 0.2)),ZEXT416((uint)fVar146),0x10);
        uVar143 = 0;
        do {
          fVar237 = -1.0;
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar164 = vcmpss_avx(ZEXT416((uint)fVar314),auVar436._0_16_,1);
          auVar337._8_4_ = 0x3f800000;
          auVar337._0_8_ = 0x3f8000003f800000;
          auVar337._12_4_ = 0x3f800000;
          auVar164 = vblendvps_avx(auVar337,___xmm_bf800000bf800000bf800000bf800000,auVar164);
          fVar533 = auVar164._0_4_;
          auVar481 = ZEXT464(0x40000000);
          do {
            fVar308 = 1.0;
            fVar144 = fVar237 * 0.9424779;
            fVar310 = fVar144;
            cosf();
            sinf();
            auVar487._0_12_ = ZEXT812(0);
            auVar487._12_4_ = 0;
            auVar541 = ZEXT1664(auVar487);
            pmVar138 = (material_t *)
                       (CONCAT44((int)((ulonglong)pmVar138 >> 0x20),
                                 fVar533 * fVar310 * 0.2 + fVar533 * 0.3) |
                       (ulonglong)(uint)(fVar533 * fVar144 * 0.2 + 0.0) << 0x20);
            fVar460 = fVar237 * 65536.0;
            auVar249._0_4_ = (float)(1e+32 - (double)fVar460);
            auVar249._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar460) >> 0x20);
            auVar249._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar460),auVar487,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar460),auVar249,auVar164);
            unaff_R13 = (ulonglong)auVar164._0_4_;
            uVar140 = (uint)unaff_R13 + 0x2f88ed;
            fVar460 = 0.05;
            do {
              while( true ) {
                fVar598 = auVar541._0_4_;
                fVar311 = fVar598 * 65536.0;
                auVar250._0_4_ = (float)(1e+32 - (double)fVar311);
                auVar250._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar311) >> 0x20);
                auVar250._8_8_ = 0;
                auVar164 = vcmpss_avx(ZEXT416((uint)fVar311),auVar436._0_16_,1);
                auVar164 = vblendvps_avx(ZEXT416((uint)fVar311),auVar250,auVar164);
                uVar134 = (uint)(longlong)auVar164._0_4_;
                fVar311 = (float)((((uint)(unaff_R13 >> 1) & 0x7fffffff ^ uVar134) * 0x41c64e6d >> 3
                                  ^ (uVar134 >> 1 ^ (uint)unaff_R13) * 0x41c64e6d) * 0x41c64e6d) *
                          2.3283064e-10 + -0.5 + fVar533 * fVar310 * 0.8;
                fVar312 = (float)(((uVar134 + 0x2f88ed >> 1 ^ uVar140) * 0x41c64e6d >> 3 ^
                                  (uVar134 + 0x2f88ed ^ uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d) *
                          2.3283064e-10 + -0.5 + fVar533 * fVar144 * 0.8;
                fVar543 = auVar436._0_4_;
                auVar164 = ZEXT416((uint)(fVar312 * fVar312 + fVar543 + fVar311 * fVar311));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                fVar313 = fVar308 / auVar164._0_4_;
                fVar589 = SUB84(pmVar138,0);
                fVar542 = (float)((ulonglong)pmVar138 >> 0x20);
                fVar311 = fVar589 + fVar311 * fVar313 * 0.1;
                fVar312 = fVar312 * fVar313 * 0.1 + fVar542;
                fVar313 = fVar312 * fVar312 + fVar543 + fVar311 * fVar311;
                fVar309 = fVar460 + -0.010000001;
                if (fVar313 < 0.040000003) {
                  auVar164 = vsqrtss_avx(ZEXT416((uint)fVar313),ZEXT416((uint)fVar313));
                  fVar308 = fVar308 / auVar164._0_4_;
                  fVar311 = fVar311 * fVar308 * 0.2;
                  fVar312 = fVar312 * fVar308 * 0.2;
                }
                pmVar138 = (material_t *)CONCAT44(fVar312,fVar311);
                fVar499 = fVar311 - fVar589;
                fVar315 = fVar312 - fVar542;
                auVar164 = ZEXT416((uint)(fVar315 * fVar315 + fVar543 + fVar499 * fVar499));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                auVar436 = ZEXT1664(auVar164);
                fVar543 = fVar309 - fVar460;
                auVar569 = ZEXT464((uint)fVar543);
                fVar313 = fVar543 * fVar543;
                fVar147 = auVar164._0_4_;
                fVar308 = fVar147 * fVar147 - fVar313;
                if (fVar308 < 0.0) {
                  fVar145 = sqrtf(fVar308);
                  fVar543 = auVar569._0_4_;
                  fVar147 = auVar436._0_4_;
                  fVar598 = auVar541._0_4_;
                }
                else {
                  auVar164 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
                  fVar145 = auVar164._0_4_;
                }
                fVar308 = 1.0;
                fVar499 = fVar499 * (1.0 / fVar147);
                fVar315 = fVar315 * (1.0 / fVar147);
                fVar147 = (fVar314 - fVar589) * fVar499 + (fVar146 - fVar542) * fVar315;
                fVar542 = (fVar146 - fVar542) * fVar499 - (fVar314 - fVar589) * fVar315;
                auVar164 = vandps_avx(ZEXT416((uint)fVar542),___xmm_7fffffff7fffffff7fffffff7fffffff
                                     );
                auVar171 = ZEXT416((uint)(fVar313 + fVar145 * fVar145 + 0.0));
                auVar171 = vsqrtss_avx(auVar171,auVar171);
                fVar313 = 1.0 / auVar171._0_4_;
                fVar589 = fVar145 * fVar313;
                fVar543 = fVar543 * fVar313;
                fVar313 = auVar164._0_4_ * fVar543 + fVar147 * fVar589 + 0.0;
                auVar436 = ZEXT864(0);
                if (0.0 < fVar313) break;
                auVar164 = ZEXT416((uint)(fVar542 * fVar542 + fVar147 * fVar147 + 0.0));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                fVar308 = auVar164._0_4_;
LAB_140126ae0:
                auVar164 = vminss_avx(ZEXT416(auVar481._0_4_),ZEXT416((uint)(fVar308 - fVar460)));
                auVar481 = ZEXT1664(auVar164);
                auVar541 = ZEXT464((uint)(fVar598 + 0.2));
                fVar460 = fVar309;
                fVar308 = 1.0;
                if (1.0 <= fVar598 + 0.2) goto LAB_1401269d0;
              }
              if (fVar313 < fVar145) {
                fVar308 = auVar164._0_4_ * fVar589 + fVar147 * -fVar543 + 0.0;
                goto LAB_140126ae0;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar312) * (fVar146 - fVar312) +
                                       (fVar314 - fVar311) * (fVar314 - fVar311) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              auVar164 = vminss_avx(ZEXT416(auVar481._0_4_),
                                    ZEXT416((uint)(auVar164._0_4_ - fVar309)));
              auVar481 = ZEXT1664(auVar164);
              auVar541 = ZEXT464((uint)(fVar598 + 0.2));
              fVar460 = fVar309;
            } while (fVar598 + 0.2 < 1.0);
LAB_1401269d0:
            fVar237 = fVar237 + 0.5;
          } while (fVar237 <= 1.0);
          auVar164 = vandps_avx(ZEXT416((uint)fVar314),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar314 = auVar164._0_4_;
          auVar164 = vmovsldup_avx(ZEXT416((uint)(fVar314 + -0.05)));
          auVar401._0_12_ = ZEXT812(0);
          auVar401._12_4_ = 0;
          auVar251._0_4_ = auVar164._0_4_ * 0.0 + 0.0 + auVar152._0_4_ * 0.4;
          auVar251._4_4_ = auVar164._4_4_ * 0.15 + 0.0 + auVar152._4_4_ * 0.0;
          auVar251._8_4_ = auVar164._8_4_ * 0.0 + 0.0 + auVar152._8_4_ * 0.0;
          auVar251._12_4_ = auVar164._12_4_ * 0.0 + 0.0 + auVar152._12_4_ * 0.0;
          auVar164 = vdivps_avx(auVar251,___xmm_00000000000000003cb851ec3e23d70b);
          auVar338._8_4_ = 0x3f800000;
          auVar338._0_8_ = 0x3f8000003f800000;
          auVar338._12_4_ = 0x3f800000;
          auVar171 = vminps_avx(auVar338,auVar164);
          auVar164 = vcmpps_avx(auVar171,auVar401,1);
          auVar164 = vshufps_avx(auVar164,auVar164,0x50);
          uVar140 = vmovmskpd_avx(auVar164);
          fVar237 = 0.0;
          if ((uVar140 & 2) == 0) {
            auVar164 = vmovshdup_avx(auVar171);
            fVar237 = auVar164._0_4_;
          }
          fVar533 = fVar314 - (fVar237 * 0.2 + (1.0 - fVar237) * 0.05);
          fVar237 = fVar146 - (fVar237 * 0.0 + (1.0 - fVar237) * 0.0);
          auVar164 = ZEXT416((uint)(fVar237 * fVar237 + fVar533 * fVar533 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vminss_avx(auVar481._0_16_,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
          auVar189 = ZEXT816(0);
          if ((uVar140 & 1) == 0) {
            auVar189 = auVar171;
          }
          fVar533 = auVar189._0_4_;
          fVar237 = fVar314 - (fVar533 * 0.05 + (1.0 - fVar533) * 0.05);
          fVar533 = fVar146 - (fVar533 * 0.2 - (1.0 - fVar533) * 0.2);
          auVar171 = ZEXT416((uint)(fVar533 * fVar533 + fVar237 * fVar237 + 0.0));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar171 = vminss_avx(auVar164,ZEXT416((uint)(auVar171._0_4_ + -0.03)));
          auVar164 = ZEXT416((uint)(fVar146 * fVar146 + (fVar314 + -0.3) * (fVar314 + -0.3) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.1)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar164 = vminss_avx(auVar171,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar164._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("INDC");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 4.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 5.0;
    uVar9 = materials_list[index].heat_conductivity;
    uVar27 = materials_list[index].leak_heat_conductivity;
    auVar175._0_4_ = (float)uVar9 * 10.0;
    auVar175._4_4_ = (float)uVar27 * 10.0;
    auVar175._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar175);
    materials_list[index].heat_conductivity = (float)(int)uVar19;
    materials_list[index].leak_heat_conductivity = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e0000003b449ba6;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ea8f5c3;
    materials_list[index].electric_update_fn = cell_inductor;
    iVar50 = get_icon_coords(0x18);
    rVar74._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar74._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar74;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x18);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar481 = ZEXT1264(ZEXT812(0));
      auVar436 = ZEXT464(0x3f800000);
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar237 = -1.0;
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar152 = vcmpss_avx(ZEXT416((uint)fVar314),auVar481._0_16_,1);
          auVar252._8_4_ = 0x3f800000;
          auVar252._0_8_ = 0x3f8000003f800000;
          auVar252._12_4_ = 0x3f800000;
          auVar152 = vblendvps_avx(auVar252,___xmm_bf800000bf800000bf800000bf800000,auVar152);
          fVar533 = auVar152._0_4_;
          auVar541 = ZEXT464(0x40000000);
          do {
            fVar308 = 0.2;
            fVar144 = fVar237 * 0.9424779;
            fVar310 = fVar144;
            cosf();
            sinf();
            auVar508._0_12_ = ZEXT812(0);
            auVar508._12_4_ = 0;
            auVar569 = ZEXT1664(auVar508);
            pmVar138 = (material_t *)
                       (CONCAT44((int)((ulonglong)pmVar138 >> 0x20),
                                 fVar308 * fVar310 * fVar533 + fVar533 * 0.35000002) |
                       (ulonglong)(uint)(fVar308 * fVar533 * fVar144 + 0.0) << 0x20);
            fVar460 = fVar237 * 65536.0;
            auVar253._0_4_ = (float)(1e+32 - (double)fVar460);
            auVar253._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar460) >> 0x20);
            auVar253._8_8_ = 0;
            auVar152 = vcmpss_avx(ZEXT416((uint)fVar460),auVar508,1);
            auVar152 = vblendvps_avx(ZEXT416((uint)fVar460),auVar253,auVar152);
            unaff_R13 = (ulonglong)auVar152._0_4_;
            uVar140 = (uint)unaff_R13 + 0x2f88ed;
            fVar460 = 0.05;
            do {
              fVar598 = auVar569._0_4_;
              fVar311 = fVar598 * 65536.0;
              auVar254._0_4_ = (float)(1e+32 - (double)fVar311);
              auVar254._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar311) >> 0x20);
              auVar254._8_8_ = 0;
              auVar152 = vcmpss_avx(ZEXT416((uint)fVar311),auVar481._0_16_,1);
              auVar152 = vblendvps_avx(ZEXT416((uint)fVar311),auVar254,auVar152);
              uVar134 = (uint)(longlong)auVar152._0_4_;
              fVar311 = (float)((((uint)(unaff_R13 >> 1) & 0x7fffffff ^ uVar134) * 0x41c64e6d >> 3 ^
                                (uVar134 >> 1 ^ (uint)unaff_R13) * 0x41c64e6d) * 0x41c64e6d) *
                        2.3283064e-10 + -0.5 + fVar310 * fVar533 * 0.8;
              fVar312 = (float)(((uVar134 + 0x2f88ed >> 1 ^ uVar140) * 0x41c64e6d >> 3 ^
                                (uVar134 + 0x2f88ed ^ uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d) *
                        2.3283064e-10 + -0.5 + fVar533 * fVar144 * 0.8;
              fVar543 = auVar481._0_4_;
              auVar152 = ZEXT416((uint)(fVar312 * fVar312 + fVar543 + fVar311 * fVar311));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              fVar313 = auVar436._0_4_ / auVar152._0_4_;
              fVar589 = SUB84(pmVar138,0);
              fVar542 = (float)((ulonglong)pmVar138 >> 0x20);
              auVar481 = ZEXT464((uint)fVar542);
              fVar311 = fVar311 * fVar313 * 0.1 + fVar589;
              fVar312 = fVar542 + fVar312 * fVar313 * 0.1;
              fVar313 = fVar312 * fVar312 + fVar543 + fVar311 * fVar311;
              fVar309 = fVar460 + -0.010000001;
              if (fVar313 < 0.040000003) {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar313),ZEXT416((uint)fVar313));
                fVar313 = auVar436._0_4_ / auVar152._0_4_;
                fVar311 = fVar308 * fVar311 * fVar313;
                fVar312 = fVar308 * fVar312 * fVar313;
              }
              pmVar138 = (material_t *)CONCAT44(fVar312,fVar311);
              fVar313 = fVar311 - fVar589;
              fVar499 = fVar312 - fVar542;
              auVar152 = ZEXT416((uint)(fVar499 * fVar499 + fVar543 + fVar313 * fVar313));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              auVar436 = ZEXT1664(auVar152);
              fVar543 = fVar309 - fVar460;
              fVar308 = fVar543 * fVar543;
              fVar147 = auVar152._0_4_;
              fVar315 = fVar147 * fVar147 - fVar308;
              if (fVar315 < 0.0) {
                fVar315 = sqrtf(fVar315);
                fVar542 = auVar481._0_4_;
                fVar147 = auVar436._0_4_;
                fVar598 = auVar569._0_4_;
              }
              else {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar315),ZEXT416((uint)fVar315));
                fVar315 = auVar152._0_4_;
              }
              fVar313 = fVar313 * (1.0 / fVar147);
              fVar499 = fVar499 * (1.0 / fVar147);
              fVar147 = (fVar314 - fVar589) * fVar313 + (fVar146 - fVar542) * fVar499;
              fVar589 = (fVar146 - fVar542) * fVar313 - (fVar314 - fVar589) * fVar499;
              auVar152 = vandps_avx(ZEXT416((uint)fVar589),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar575._0_12_ = ZEXT812(0);
              auVar575._12_4_ = 0;
              auVar481 = ZEXT1664(auVar575);
              auVar436 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
              auVar164 = ZEXT416((uint)(fVar308 + fVar315 * fVar315 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar308 = 1.0 / auVar164._0_4_;
              fVar313 = fVar315 * fVar308;
              fVar543 = fVar543 * fVar308;
              fVar308 = auVar152._0_4_ * fVar543 + fVar147 * fVar313 + 0.0;
              if (fVar308 <= 0.0) {
                auVar152 = ZEXT416((uint)(fVar589 * fVar589 + fVar147 * fVar147 + 0.0));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                fVar308 = auVar152._0_4_;
LAB_140127380:
                fVar308 = fVar308 - fVar460;
              }
              else {
                if (fVar308 < fVar315) {
                  fVar308 = auVar152._0_4_ * fVar313 + fVar147 * -fVar543 + 0.0;
                  goto LAB_140127380;
                }
                auVar152 = ZEXT416((uint)((fVar146 - fVar312) * (fVar146 - fVar312) +
                                         (fVar314 - fVar311) * (fVar314 - fVar311) + 0.0));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                fVar308 = auVar152._0_4_ - fVar309;
              }
              auVar152 = vminss_avx(ZEXT416(auVar541._0_4_),ZEXT416((uint)fVar308));
              auVar541 = ZEXT1664(auVar152);
              fVar308 = 0.2;
              auVar569 = ZEXT464((uint)(fVar598 + 0.2));
              fVar460 = fVar309;
            } while (fVar598 + 0.2 < 1.0);
            fVar237 = fVar237 + 0.5;
          } while (fVar237 <= 1.0);
          auVar402._8_4_ = 0x7fffffff;
          auVar402._0_8_ = 0x7fffffff7fffffff;
          auVar402._12_4_ = 0x7fffffff;
          auVar164 = vandps_avx(ZEXT416((uint)fVar314),auVar402);
          fVar144 = auVar164._0_4_;
          auVar176._0_4_ = (fVar146 * 0.0 + (fVar144 + -0.2) * 0.049999997 + 0.0) / 0.0024999997;
          auVar176._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar164 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar176);
          auVar164 = vmaxss_avx(auVar575,auVar164);
          fVar533 = auVar164._0_4_;
          fVar237 = fVar144 - (fVar533 * 0.25 + (1.0 - fVar533) * 0.2);
          fVar533 = fVar146 - (fVar533 * 0.0 + (1.0 - fVar533) * 0.0);
          auVar164 = ZEXT416((uint)(fVar533 * fVar533 + fVar237 * fVar237 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
          if (fVar146 <= 0.0) {
            fVar237 = (fVar146 + 0.0) * (fVar146 + 0.0);
            auVar164 = ZEXT416((uint)(fVar237 + (fVar314 + 0.2) * (fVar314 + 0.2) + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar164 = vandps_avx(auVar164,auVar402);
            auVar164 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
            auVar152 = ZEXT416((uint)(fVar237 +
                                     (fVar314 + 0.06666666) * (fVar314 + 0.06666666) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar152 = vandps_avx(auVar152,auVar402);
            auVar164 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.03)));
            auVar152 = ZEXT416((uint)(fVar237 +
                                     (fVar314 + -0.06666668) * (fVar314 + -0.06666668) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar152 = vandps_avx(auVar152,auVar402);
            auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.03)));
          }
          else {
            unaff_R13 = 0;
            do {
              fVar237 = 0.2;
              auVar164 = vandps_avx(ZEXT416((uint)(fVar314 -
                                                  ((float)(int)unaff_R13 * 0.13333334 + -0.13333333)
                                                  )),auVar402);
              auVar171 = ZEXT416((uint)fVar146);
              if (auVar164._0_4_ <= fVar146) {
                fVar310 = 0.06666667;
                fVar533 = 0.2;
                fVar460 = 0.06666667;
                auVar189 = auVar164;
              }
              else {
                fVar310 = 0.2;
                fVar237 = 0.06666667;
                fVar533 = 0.06666667;
                fVar460 = 0.2;
                auVar189 = auVar171;
                auVar171 = auVar164;
              }
              auVar569 = ZEXT1664(auVar171);
              fVar308 = fVar237 * fVar237 - fVar310 * fVar310;
              auVar481 = ZEXT464((uint)fVar308);
              auVar164 = vinsertps_avx(auVar171,auVar189,0x10);
              auVar177._0_4_ = fVar533 * auVar164._0_4_;
              auVar177._4_4_ = fVar460 * auVar164._4_4_;
              auVar177._8_4_ = auVar164._8_4_ * 0.0;
              auVar177._12_4_ = auVar164._12_4_ * 0.0;
              auVar164 = vmovsldup_avx(ZEXT416((uint)fVar308));
              auVar164 = vdivps_avx(auVar177,auVar164);
              auVar171 = vmovshdup_avx(auVar164);
              auVar541 = ZEXT1664(auVar171);
              fVar311 = auVar164._0_4_;
              auVar403._0_4_ = fVar311 * fVar311;
              auVar403._4_4_ = auVar164._4_4_ * auVar164._4_4_;
              auVar403._8_4_ = auVar164._8_4_ * auVar164._8_4_;
              auVar403._12_4_ = auVar164._12_4_ * auVar164._12_4_;
              auVar164 = vmovshdup_avx(auVar403);
              auVar436 = ZEXT1664(auVar164);
              fVar589 = (auVar164._0_4_ + auVar403._0_4_ + -1.0) / 3.0;
              fVar312 = fVar589 * fVar589 * fVar589;
              fVar460 = auVar164._0_4_ * auVar403._0_4_;
              fVar533 = fVar460 + fVar312;
              fVar460 = fVar460 + fVar533;
              fVar309 = auVar171._0_4_;
              fVar308 = fVar309 + fVar309 * auVar403._0_4_;
              fVar313 = 0.0;
              if (0.0 <= fVar533) {
                fVar311 = (fVar309 + fVar309) * fVar311;
                if (fVar533 < 0.0) {
                  fVar533 = sqrtf(fVar533);
                }
                else {
                  auVar164 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
                  fVar533 = auVar164._0_4_;
                }
                auVar564._8_4_ = 0x7fffffff;
                auVar564._0_8_ = 0x7fffffff7fffffff;
                auVar564._12_4_ = 0x7fffffff;
                auVar607 = ZEXT1664(auVar564);
                fVar311 = fVar311 * fVar533;
                auVar560 = ZEXT464((uint)(fVar311 + fVar460));
                auVar164 = vandps_avx(ZEXT416((uint)(fVar311 + fVar460)),auVar564);
                auVar481 = ZEXT1664(auVar164);
                powf();
                auVar532 = ZEXT1664(auVar481._0_16_);
                auVar498 = ZEXT464((uint)(fVar460 - fVar311));
                auVar164 = vandps_avx(auVar607._0_16_,ZEXT416((uint)(fVar460 - fVar311)));
                auVar481 = ZEXT1664(auVar164);
                powf();
                fVar460 = auVar569._0_4_;
                fVar311 = auVar541._0_4_;
                auVar164 = vinsertps_avx(auVar560._0_16_,auVar498._0_16_,0x10);
                auVar340._0_12_ = ZEXT812(0);
                auVar340._12_4_ = 0;
                auVar164 = vcmpps_avx(auVar164,auVar340,1);
                auVar171 = vinsertps_avx(auVar532._0_16_,auVar481._0_16_,0x10);
                auVar341._0_8_ = auVar171._0_8_ ^ 0x8000000080000000;
                auVar341._8_4_ = auVar171._8_4_ ^ 0x80000000;
                auVar341._12_4_ = auVar171._12_4_ ^ 0x80000000;
                auVar164 = vblendvps_avx(auVar171,auVar341,auVar164);
                auVar171 = vmovshdup_avx(auVar164);
                fVar533 = auVar436._0_4_ + auVar436._0_4_ +
                          (fVar589 * -4.0 - (auVar164._0_4_ + auVar171._0_4_));
                auVar164 = vinsertps_avx(ZEXT416((uint)(auVar164._0_4_ - auVar171._0_4_)),
                                         ZEXT416((uint)fVar308),0x10);
                auVar488._0_4_ = auVar164._0_4_ * 1.7320508;
                auVar488._4_4_ = auVar164._4_4_ * 2.0;
                auVar488._8_4_ = auVar164._8_4_ * 0.0;
                auVar488._12_4_ = auVar164._12_4_ * 0.0;
                auVar436 = ZEXT1664(auVar488);
                auVar164 = ZEXT416((uint)(fVar533 * fVar533 + auVar488._0_4_ * auVar488._0_4_));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                auVar481 = ZEXT1664(auVar164);
                fVar533 = auVar164._0_4_ - fVar533;
                if (fVar533 < 0.0) {
                  auVar532._0_4_ = sqrtf(fVar533);
                  fVar460 = auVar569._0_4_;
                  auVar164 = auVar481._0_16_;
                  fVar311 = auVar541._0_4_;
                  auVar488 = auVar436._0_16_;
                  auVar532._4_60_ = extraout_var_12;
                  auVar171 = auVar532._0_16_;
                }
                else {
                  auVar171 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
                }
                auVar436 = ZEXT464(0x3f800000);
                auVar164 = vinsertps_avx(auVar171,auVar164,0x10);
                auVar164 = vdivps_avx(auVar488,auVar164);
                auVar171 = vmovshdup_avx(auVar164);
                fVar533 = auVar164._0_4_ + auVar171._0_4_;
                auVar402._8_4_ = 0x7fffffff;
                auVar402._0_8_ = 0x7fffffff7fffffff;
                auVar402._12_4_ = 0x7fffffff;
                auVar443._0_12_ = ZEXT812(0);
                auVar443._12_4_ = 0;
              }
              else {
                dVar150 = acos((double)(fVar460 / fVar312));
                auVar178._0_8_ = dVar150 / 3.0;
                auVar178._8_8_ = extraout_var_34._0_8_;
                auVar509._0_4_ = (float)auVar178._0_8_;
                auVar509._4_12_ = auVar178._4_12_;
                auVar532 = ZEXT1664(auVar509);
                auVar498 = ZEXT1664(auVar509);
                cosf();
                fVar533 = auVar498._0_4_ + 2.0;
                auVar498 = ZEXT1664(auVar532._0_16_);
                sinf();
                fVar309 = auVar498._0_4_ * 1.7320508;
                fVar312 = auVar436._0_4_;
                fVar460 = fVar312 - fVar589 * (fVar309 + fVar533);
                auVar498 = ZEXT1264(ZEXT812(0));
                fVar542 = 0.0;
                if (fVar460 < fVar313) {
                  auVar607._0_4_ = sqrtf(fVar460);
                  fVar542 = auVar498._0_4_;
                  fVar312 = auVar436._0_4_;
                  auVar607._4_60_ = extraout_var_11;
                  auVar164 = auVar607._0_16_;
                }
                else {
                  auVar164 = vsqrtss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)fVar460));
                }
                fVar460 = auVar569._0_4_;
                auVar171 = auVar481._0_16_;
                fVar311 = auVar541._0_4_;
                auVar498 = ZEXT1664(auVar164);
                fVar313 = auVar164._0_4_;
                auVar436 = ZEXT464(0x3f800000);
                fVar312 = fVar312 + -fVar589 * (fVar533 - fVar309);
                if (fVar312 < fVar542) {
                  fVar533 = sqrtf(fVar312);
                  fVar460 = auVar569._0_4_;
                  fVar313 = auVar498._0_4_;
                  auVar171 = auVar481._0_16_;
                  fVar311 = auVar541._0_4_;
                }
                else {
                  auVar164 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
                  fVar533 = auVar164._0_4_;
                }
                auVar443._0_12_ = ZEXT812(0);
                auVar443._12_4_ = 0;
                auVar164 = vcmpss_avx(auVar443,auVar171,1);
                auVar339._8_4_ = 0xbf800000;
                auVar339._0_8_ = 0xbf800000bf800000;
                auVar339._12_4_ = 0xbf800000;
                auVar164 = vblendvps_avx(auVar339,___xmm_3f8000003f8000003f8000003f800000,auVar164);
                auVar171 = vcmpss_avx(auVar171,auVar443,4);
                auVar164 = vandps_avx(auVar171,auVar164);
                auVar402._8_4_ = 0x7fffffff;
                auVar402._0_8_ = 0x7fffffff7fffffff;
                auVar402._12_4_ = 0x7fffffff;
                auVar171 = vandps_avx(auVar402,ZEXT416((uint)fVar308));
                fVar533 = auVar164._0_4_ * fVar313 + fVar533 + auVar171._0_4_ / (fVar313 * fVar533);
              }
              fVar533 = (fVar533 - fVar311) * 0.5;
              auVar164 = vmaxss_avx(ZEXT416((uint)(auVar436._0_4_ - fVar533 * fVar533)),auVar443);
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              local_228 = auVar189._0_4_;
              local_228 = fVar533 * fVar310 - local_228;
              fVar460 = auVar164._0_4_ * fVar237 - fVar460;
              auVar164 = ZEXT416((uint)(fVar460 * fVar460 + local_228 * local_228 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              auVar164 = vandps_avx(auVar164,auVar402);
              auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)(auVar164._0_4_ + -0.03)))
              ;
              uVar140 = (int)unaff_R13 + 1;
              unaff_R13 = (ulonglong)uVar140;
              auVar481 = ZEXT1264(ZEXT812(0));
            } while (uVar140 != 3);
          }
          auVar164 = ZEXT416((uint)(fVar146 * fVar146 +
                                   (fVar144 + -0.35000002) * (fVar144 + -0.35000002) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.1)),auVar402);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("SINK");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 50.0;
    uVar10 = materials_list[index].heat_conductivity;
    uVar28 = materials_list[index].leak_heat_conductivity;
    auVar179._0_4_ = (float)uVar10 * 200.0;
    auVar179._4_4_ = (float)uVar28 * 10.0;
    auVar179._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar179);
    materials_list[index].heat_conductivity = (float)(int)uVar19;
    materials_list[index].leak_heat_conductivity = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f3333333f333333;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ecccccd;
    iVar50 = get_icon_coords(0x19);
    rVar75._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar75._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar75;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x19);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      pmVar138 = (material_t *)(ulonglong)(uint)(iVar50.field0_0x0._4_4_ + iVar133);
      auVar481 = ZEXT464(0xbf800000);
      auVar541 = ZEXT464(0x3f800000);
      auVar436 = ZEXT464(0x40000000);
      auVar569 = ZEXT1264(ZEXT812(0));
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + auVar481._0_4_;
        fVar314 = fVar146 + 0.05;
        auVar152 = vminss_avx(ZEXT416((uint)(0.8 - fVar146)),ZEXT416((uint)fVar146));
        auVar152 = vminss_avx(ZEXT416((uint)(auVar152._0_4_ * 4.0)),auVar541._0_16_);
        auVar164 = vmovsldup_avx(ZEXT416((uint)fVar314));
        index = 0;
        do {
          auVar532 = ZEXT1664(auVar481._0_16_);
          fVar533 = ((float)(int)index + 0.5) * 0.015625 + auVar481._0_4_;
          fVar237 = (fVar314 * -0.5 + fVar533 + -0.05) * 4.0;
          auVar171 = vandps_avx(ZEXT416((uint)fVar237),___xmm_80000000800000008000000080000000);
          auVar444._8_4_ = 0x3effffff;
          auVar444._0_8_ = 0x3effffff3effffff;
          auVar444._12_4_ = 0x3effffff;
          auVar171 = vorps_avx(auVar171,auVar444);
          auVar171 = ZEXT416((uint)(fVar237 + auVar171._0_4_));
          auVar171 = vroundss_avx(auVar171,auVar171,0xb);
          auVar498 = ZEXT1664(auVar436._0_16_);
          auVar171 = vminss_avx(auVar436._0_16_,auVar171);
          auVar171 = vmaxss_avx(SUB6416(ZEXT464(0xc0000000),0),auVar171);
          fVar237 = (fVar533 + -0.05) - (auVar171._0_4_ * 0.25 + fVar314 * 0.25);
          auVar171 = vinsertps_avx(ZEXT416((uint)fVar237),ZEXT416((uint)(fVar533 + 0.6)),0x10);
          auVar180._0_4_ = auVar171._0_4_ * -0.1 + 0.0 + auVar164._0_4_ * -0.4;
          auVar180._4_4_ = auVar171._4_4_ * 1.2 + 0.0 + auVar164._4_4_ * 0.0;
          auVar180._8_4_ = auVar171._8_4_ * 0.0 + 0.0 + auVar164._8_4_ * 0.0;
          auVar180._12_4_ = auVar171._12_4_ * 0.0 + 0.0 + auVar164._12_4_ * 0.0;
          auVar189 = vdivps_avx(auVar180,___xmm_00000000000000003fb851ec3e2e147b);
          auVar255._8_4_ = 0x3f800000;
          auVar255._0_8_ = 0x3f8000003f800000;
          auVar255._12_4_ = 0x3f800000;
          auVar171 = vcmpps_avx(auVar255,auVar189,1);
          auVar171 = vshufps_avx(auVar171,auVar171,0x50);
          uVar140 = vmovmskpd_avx(auVar171);
          auVar205 = auVar541._0_16_;
          auVar171 = auVar205;
          if ((uVar140 & 2) == 0) {
            auVar171 = vmovshdup_avx(auVar189);
          }
          auVar171 = vmaxss_avx(auVar569._0_16_,auVar171);
          fVar310 = auVar171._0_4_;
          fVar144 = auVar541._0_4_ - fVar310;
          fVar460 = fVar533 - (fVar310 * 0.6 - fVar144 * 0.6);
          fVar144 = fVar146 - (fVar310 * -0.05 + fVar144 * -0.05);
          auVar560 = ZEXT1664(auVar205);
          if ((uVar140 & 1) == 0) {
            auVar205 = auVar189;
          }
          auVar541 = ZEXT464((uint)(fVar144 * fVar144 + auVar569._0_4_ + fVar460 * fVar460));
          auVar171 = vmaxss_avx(auVar569._0_16_,auVar205);
          auVar607 = ZEXT1664(auVar171);
          fVar310 = auVar171._0_4_ * 0.1;
          fVar308 = auVar171._0_4_ * 0.4;
          fVar144 = fVar146 * 14.5;
          sinf();
          fVar533 = fVar144 * -0.08 * auVar152._0_4_ + fVar533;
          fVar144 = fVar533 * 3.3333333;
          auVar171 = vandps_avx(ZEXT416((uint)fVar144),___xmm_80000000800000008000000080000000);
          auVar404._8_4_ = 0x3effffff;
          auVar404._0_8_ = 0x3effffff3effffff;
          auVar404._12_4_ = 0x3effffff;
          auVar171 = vorps_avx(auVar171,auVar404);
          auVar171 = ZEXT416((uint)(fVar144 + auVar171._0_4_));
          auVar171 = vroundss_avx(auVar171,auVar171,0xb);
          auVar171 = vminss_avx(auVar560._0_16_,auVar171);
          auVar481 = ZEXT1664(auVar532._0_16_);
          auVar171 = vmaxss_avx(auVar532._0_16_,auVar171);
          fVar533 = fVar533 + auVar171._0_4_ * -0.3;
          fVar312 = auVar569._0_4_;
          fVar144 = fVar312 * fVar533 + fVar146 + -0.15;
          fVar311 = fVar312 * (fVar146 + -0.15) - fVar533;
          auVar171 = vandps_avx(ZEXT416((uint)fVar311),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar460 = auVar171._0_4_ * -0.15384616 + fVar312 + fVar144 * 0.9880948;
          if (fVar460 <= fVar312) {
            auVar171 = ZEXT416((uint)(fVar311 * fVar311 + fVar312 + fVar144 * fVar144));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar171 = ZEXT416((uint)(auVar171._0_4_ + -0.1));
          }
          else if (0.6422616 <= fVar460) {
            auVar171 = ZEXT416((uint)((fVar146 + -0.8) * (fVar146 + -0.8) +
                                     fVar312 + fVar533 * fVar533));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
          }
          else {
            auVar171 = ZEXT416((uint)(auVar171._0_4_ * 0.9880948 + fVar312 + fVar144 * 0.15384616 +
                                     -0.1));
          }
          auVar436 = ZEXT1664(auVar498._0_16_);
          auVar189 = vsqrtss_avx(auVar541._0_16_,auVar541._0_16_);
          auVar189 = vminss_avx(auVar498._0_16_,ZEXT416((uint)(auVar189._0_4_ + -0.075)));
          auVar541 = ZEXT1664(auVar560._0_16_);
          fVar533 = fVar312 * (auVar560._0_4_ - auVar607._0_4_);
          fVar237 = fVar237 + (fVar310 - fVar533);
          fVar533 = fVar314 + (fVar308 - fVar533);
          auVar205 = ZEXT416((uint)(fVar533 * fVar533 + fVar312 + fVar237 * fVar237));
          auVar205 = vsqrtss_avx(auVar205,auVar205);
          auVar189 = vminss_avx(auVar189,ZEXT416((uint)(auVar205._0_4_ + -0.075)));
          auVar171 = vminss_avx(auVar189,auVar171);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (int)pmVar138 + iVar50.field0_0x0._0_4_ +
           (int)index] = auVar171._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        pmVar138 = (material_t *)(ulonglong)((int)pmVar138 + 1);
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("AAMP");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 1;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 7.0;
    materials_list[index].genome_size = 12.0;
    materials_list[index].transfer_rate = materials_list[index].transfer_rate * 10.0;
    materials_list[index].capacitance = 2000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 0.01;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ecccccd3e4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f800000;
    materials_list[index].physics_update_fn = cell_amp;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 2;
    iVar50 = get_icon_coords(0x1a);
    rVar76._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar76._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar76;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x1a);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar481 = ZEXT464(0x40000000);
          fVar237 = 0.0;
          do {
            fVar310 = 1.0;
            fVar144 = fVar237 * 6.2831855;
            fVar460 = fVar144;
            cosf();
            sinf();
            pmVar138 = (material_t *)
                       (CONCAT44((int)((ulonglong)pmVar138 >> 0x20),fVar460 * 0.2) |
                       (ulonglong)(uint)(fVar144 * 0.2) << 0x20);
            fVar533 = fVar237 * 65536.0;
            auVar342._0_4_ = (float)(1e+32 - (double)fVar533);
            auVar342._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar533) >> 0x20);
            auVar342._8_8_ = 0;
            auVar152 = vcmpss_avx(ZEXT416((uint)fVar533),ZEXT816(0),1);
            auVar152 = vblendvps_avx(ZEXT416((uint)fVar533),auVar342,auVar152);
            unaff_R13 = (ulonglong)auVar152._0_4_;
            uVar140 = (uint)unaff_R13 + 0x2f88ed;
            fVar533 = 0.0;
            fVar308 = 0.05;
            do {
              while( true ) {
                fVar311 = fVar533 * 65536.0;
                auVar256._0_4_ = (float)(1e+32 - (double)fVar311);
                auVar256._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar311) >> 0x20);
                auVar256._8_8_ = 0;
                auVar152 = vcmpss_avx(ZEXT416((uint)fVar311),auVar436._0_16_,1);
                auVar152 = vblendvps_avx(ZEXT416((uint)fVar311),auVar256,auVar152);
                uVar134 = (uint)(longlong)auVar152._0_4_;
                fVar311 = (float)((((uint)(unaff_R13 >> 1) & 0x7fffffff ^ uVar134) * 0x41c64e6d >> 3
                                  ^ (uVar134 >> 1 ^ (uint)unaff_R13) * 0x41c64e6d) * 0x41c64e6d) *
                          2.3283064e-10 + -0.5 + fVar460 * 0.3;
                fVar312 = (float)(((uVar134 + 0x2f88ed >> 1 ^ uVar140) * 0x41c64e6d >> 3 ^
                                  (uVar134 + 0x2f88ed ^ uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d) *
                          2.3283064e-10 + -0.5 + fVar144 * 0.3;
                fVar598 = auVar436._0_4_;
                auVar152 = ZEXT416((uint)(fVar312 * fVar312 + fVar598 + fVar311 * fVar311));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                fVar313 = fVar310 / auVar152._0_4_;
                fVar589 = SUB84(pmVar138,0);
                fVar542 = (float)((ulonglong)pmVar138 >> 0x20);
                fVar311 = fVar589 + fVar311 * fVar313 * 0.17999999;
                fVar312 = fVar312 * fVar313 * 0.17999999 + fVar542;
                fVar313 = fVar312 * fVar312 + fVar598 + fVar311 * fVar311;
                fVar309 = fVar308 + -0.010000001;
                if (fVar313 < 0.040000003) {
                  auVar152 = vsqrtss_avx(ZEXT416((uint)fVar313),ZEXT416((uint)fVar313));
                  fVar310 = fVar310 / auVar152._0_4_;
                  fVar311 = fVar311 * fVar310 * 0.2;
                  fVar312 = fVar312 * fVar310 * 0.2;
                }
                pmVar138 = (material_t *)CONCAT44(fVar312,fVar311);
                fVar543 = fVar311 - fVar589;
                fVar499 = fVar312 - fVar542;
                auVar152 = ZEXT416((uint)(fVar499 * fVar499 + fVar598 + fVar543 * fVar543));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                auVar436 = ZEXT1664(auVar152);
                fVar598 = fVar309 - fVar308;
                fVar313 = fVar598 * fVar598;
                auVar541 = ZEXT464((uint)fVar313);
                fVar315 = auVar152._0_4_;
                fVar310 = fVar315 * fVar315 - fVar313;
                if (fVar310 < 0.0) {
                  fVar147 = sqrtf(fVar310);
                  fVar313 = auVar541._0_4_;
                  fVar315 = auVar436._0_4_;
                }
                else {
                  auVar152 = vsqrtss_avx(ZEXT416((uint)fVar310),ZEXT416((uint)fVar310));
                  fVar147 = auVar152._0_4_;
                }
                fVar310 = 1.0;
                fVar543 = fVar543 * (1.0 / fVar315);
                fVar499 = fVar499 * (1.0 / fVar315);
                fVar315 = (fVar314 - fVar589) * fVar543 + (fVar146 - fVar542) * fVar499;
                fVar542 = (fVar146 - fVar542) * fVar543 - (fVar314 - fVar589) * fVar499;
                auVar152 = vandps_avx(ZEXT416((uint)fVar542),___xmm_7fffffff7fffffff7fffffff7fffffff
                                     );
                auVar436 = ZEXT1264(ZEXT812(0));
                auVar164 = ZEXT416((uint)(fVar313 + fVar147 * fVar147 + 0.0));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                fVar313 = 1.0 / auVar164._0_4_;
                fVar589 = fVar147 * fVar313;
                fVar598 = fVar598 * fVar313;
                fVar313 = auVar152._0_4_ * fVar598 + fVar315 * fVar589 + 0.0;
                if (0.0 < fVar313) break;
                auVar152 = ZEXT416((uint)(fVar542 * fVar542 + fVar315 * fVar315 + 0.0));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                fVar310 = auVar152._0_4_;
LAB_140128450:
                auVar152 = vminss_avx(ZEXT416(auVar481._0_4_),ZEXT416((uint)(fVar310 - fVar308)));
                auVar481 = ZEXT1664(auVar152);
                fVar533 = fVar533 + 0.2;
                fVar310 = 1.0;
                fVar308 = fVar309;
                if (1.0 <= fVar533) goto LAB_140128350;
              }
              if (fVar313 < fVar147) {
                fVar310 = auVar152._0_4_ * fVar589 + fVar315 * -fVar598 + 0.0;
                goto LAB_140128450;
              }
              auVar152 = ZEXT416((uint)((fVar146 - fVar312) * (fVar146 - fVar312) +
                                       (fVar314 - fVar311) * (fVar314 - fVar311) + 0.0));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              auVar152 = vminss_avx(ZEXT416(auVar481._0_4_),
                                    ZEXT416((uint)(auVar152._0_4_ - fVar309)));
              auVar481 = ZEXT1664(auVar152);
              fVar533 = fVar533 + 0.2;
              fVar308 = fVar309;
            } while (fVar533 < 1.0);
LAB_140128350:
            fVar237 = fVar237 + 0.1;
          } while (fVar237 < 1.0);
          auVar152 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar314 = auVar152._0_4_;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar314 + -0.2)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vminss_avx(auVar481._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(0.15 - fVar314)));
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(fVar314 + -0.075)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("ZAP!");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 1;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 7.0;
    materials_list[index].genome_size = 12.0;
    materials_list[index].transfer_rate = materials_list[index].transfer_rate * 10.0;
    materials_list[index].capacitance = 2000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 0.01;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ea8f5c33f1db22d;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f800000;
    materials_list[index].physics_update_fn = cell_lightning;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 2;
    iVar50 = get_icon_coords(0x1b);
    rVar77._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar77._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar77;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x1b);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + 0.85;
        index = 0;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          fVar237 = fVar314 * 0.9800666 + fVar146 * 0.19866933;
          fVar314 = fVar146 * 0.9800666 + fVar314 * -0.19866933;
          auVar152 = vcmpss_avx(SUB6416(ZEXT464(0x3f19999a),0),ZEXT416((uint)fVar314),1);
          auVar152 = vblendvps_avx(ZEXT416((uint)fVar237),ZEXT416((uint)(1.25 - fVar237)),auVar152);
          auVar164 = vcmpss_avx(SUB6416(ZEXT464(0x3f99999a),0),ZEXT416((uint)fVar314),1);
          auVar152 = vblendvps_avx(auVar152,ZEXT416((uint)(2.5 - auVar152._0_4_)),auVar164);
          fVar460 = auVar152._0_4_;
          fVar237 = fVar460 * 0.70710677 + fVar314 * 0.70710677;
          fVar533 = fVar314 * 0.70710677 + fVar460 * -0.70710677;
          auVar152 = vandps_avx(ZEXT416((uint)fVar533),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar144 = auVar152._0_4_ * 0.14142136 + fVar237 * 0.98994946 + 0.0;
          if (fVar144 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar533 * fVar533 + fVar237 * fVar237 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar314 = auVar152._0_4_;
          }
          else if (2.8 <= fVar144) {
            auVar152 = ZEXT416((uint)((fVar314 + -2.0) * (fVar314 + -2.0) +
                                     (fVar460 + -2.0) * (fVar460 + -2.0) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar314 = auVar152._0_4_ + -0.4;
          }
          else {
            fVar314 = auVar152._0_4_ * 0.98994946 + fVar237 * -0.14142136 + 0.0;
          }
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               fVar314;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("LASR");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 1;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.08;
    materials_list[index].base_cost = 7.0;
    materials_list[index].genome_size = 12.0;
    materials_list[index].capacitance = 4000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 0.01;
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 5.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003e86a7f0;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e25e354;
    materials_list[index].physics_update_fn = cell_laser;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 2;
    iVar50 = get_icon_coords(0x1c);
    rVar78._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar78._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar78;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x1c);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT464(0x3f800000);
      local_268._8_8_ = 0x3ccccccd3ca3d70a;
      local_268._0_8_ = 0x3ccccccd3ca3d70a;
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        auVar152 = vmovsldup_avx(ZEXT416((uint)fVar146));
        local_238 = auVar152._0_8_ ^ 0x8000000080000000;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar237 = fVar314 * fVar314 + 0.0;
          fVar533 = fVar314 * 0.0 + fVar146;
          fVar460 = fVar146 * 0.0 - fVar314;
          auVar164 = vandps_avx(ZEXT416((uint)fVar460),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar144 = auVar164._0_4_ * 0.0 + fVar533 + 0.0;
          auVar171 = ZEXT416((uint)(fVar237 + fVar146 * fVar146));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          if (fVar144 <= 0.0) {
            fVar237 = fVar533 * fVar533 + 0.0;
            fVar460 = fVar460 * fVar460;
LAB_140128e0d:
            auVar164 = vsqrtss_avx(ZEXT416((uint)(fVar460 + fVar237)),
                                   ZEXT416((uint)(fVar460 + fVar237)));
            fVar237 = auVar164._0_4_;
          }
          else {
            if (auVar436._0_4_ <= fVar144) {
              fVar460 = (fVar146 + -1.0) * (fVar146 + -1.0);
              goto LAB_140128e0d;
            }
            fVar237 = auVar164._0_4_ + fVar533 * -0.0 + 0.0;
          }
          auVar164 = vminss_avx(ZEXT416((uint)(auVar171._0_4_ + -0.25)),
                                ZEXT416((uint)(fVar237 + -0.08)));
          auVar171 = vmovsldup_avx(ZEXT416((uint)fVar314));
          iVar133 = 10;
          auVar481 = ZEXT464(0x3f19999a);
          do {
            auVar181 = auVar481._0_16_;
            auVar205 = vmovshdup_avx(auVar181);
            auVar343 = ZEXT416((uint)((auVar205._0_4_ * 0.95105654 + auVar481._0_4_ * -0.309017) *
                                     0.8));
            auVar189 = vblendps_avx(auVar181,auVar343,1);
            fVar314 = auVar189._0_4_;
            fVar533 = auVar189._4_4_;
            fVar460 = auVar189._8_4_;
            fVar308 = auVar189._12_4_;
            auVar565._0_12_ = ZEXT812(0);
            auVar565._12_4_ = 0;
            auVar189 = vmovsldup_avx(auVar181);
            auVar489 = ZEXT416((uint)((auVar205._0_4_ * 0.309017 + auVar481._0_4_ * 0.95105654) *
                                     0.8));
            auVar189 = vblendps_avx(auVar189,auVar489,1);
            fVar237 = auVar189._0_4_;
            fVar144 = auVar189._4_4_;
            fVar310 = auVar189._8_4_;
            fVar311 = auVar189._12_4_;
            auVar546._0_4_ = fVar237 * fVar237 + fVar314 * fVar314 + 0.0;
            auVar546._4_4_ = fVar144 * fVar144 + fVar533 * fVar533 + 0.0;
            auVar546._8_4_ = fVar310 * fVar310 + fVar460 * fVar460 + 0.0;
            auVar546._12_4_ = fVar311 * fVar311 + fVar308 * fVar308 + 0.0;
            local_258 = auVar171._0_4_;
            fStack_254 = auVar171._4_4_;
            fStack_250 = auVar171._8_4_;
            fStack_24c = auVar171._12_4_;
            auVar405._0_4_ = local_258 * fVar237 + fVar314 * (float)local_238 + 0.0;
            auVar405._4_4_ = fStack_254 * fVar144 + fVar533 * local_238._4_4_ + 0.0;
            auVar405._8_4_ = fStack_250 * fVar310 + fVar460 * -auVar152._8_4_ + 0.0;
            auVar405._12_4_ = fStack_24c * fVar311 + fVar308 * -auVar152._12_4_ + 0.0;
            auVar510._8_4_ = 0x7fffffff;
            auVar510._0_8_ = 0x7fffffff7fffffff;
            auVar510._12_4_ = 0x7fffffff;
            auVar189 = vandps_avx(auVar405,auVar510);
            auVar205 = vsqrtps_avx(auVar546);
            auVar181 = vdivps_avx(auVar189,auVar205);
            auVar182._0_4_ = fVar237 * auVar152._0_4_ + local_258 * fVar314 + 0.0;
            auVar182._4_4_ = fVar144 * auVar152._4_4_ + fStack_254 * fVar533 + 0.0;
            auVar182._8_4_ = fVar310 * auVar152._8_4_ + fStack_250 * fVar460 + 0.0;
            auVar182._12_4_ = fVar311 * auVar152._12_4_ + fStack_24c * fVar308 + 0.0;
            auVar323 = vdivps_avx(auVar182,auVar546);
            auVar205 = vcmpps_avx(auVar323,___xmm_00000000000000003f0000003f000000,1);
            auVar183._0_4_ = auVar181._0_4_ + -0.02;
            auVar183._4_4_ = auVar181._4_4_ + -0.025;
            auVar183._8_4_ = auVar181._8_4_ + 0.0;
            auVar183._12_4_ = auVar181._12_4_ + 0.0;
            auVar257._0_4_ = auVar183._0_4_ * 0.02 + auVar546._0_4_ * auVar323._0_4_;
            auVar257._4_4_ = auVar183._4_4_ * 0.025 + auVar546._4_4_ * auVar323._4_4_;
            auVar257._8_4_ = auVar183._8_4_ * 0.02 + auVar546._8_4_ * auVar323._8_4_;
            auVar257._12_4_ = auVar183._12_4_ * 0.025 + auVar546._12_4_ * auVar323._12_4_;
            auVar406._0_4_ = auVar546._0_4_ + 0.0004;
            auVar406._4_4_ = auVar546._4_4_ + 0.00062500004;
            auVar406._8_4_ = auVar546._8_4_ + 0.0;
            auVar406._12_4_ = auVar546._12_4_ + 0.0;
            auVar189 = vdivps_avx(auVar257,auVar406);
            auVar407._8_4_ = 0x3f800000;
            auVar407._0_8_ = 0x3f8000003f800000;
            auVar407._12_4_ = 0x3f800000;
            auVar262 = vminps_avx(auVar407,auVar189);
            auVar258._0_4_ = auVar323._0_4_ + -0.5;
            auVar258._4_4_ = auVar323._4_4_ + -0.5;
            auVar258._8_4_ = auVar323._8_4_ + -0.5;
            auVar258._12_4_ = auVar323._12_4_ + -0.5;
            auVar189 = vandps_avx(auVar258,auVar510);
            auVar259._0_4_ = auVar189._0_4_ + -0.5;
            auVar259._4_4_ = auVar189._4_4_ + -0.5;
            auVar259._8_4_ = auVar189._8_4_ + -0.5;
            auVar259._12_4_ = auVar189._12_4_ + -0.5;
            auVar262 = vmaxps_avx(auVar565,auVar262);
            auVar408._0_4_ = auVar262._0_4_ * 0.02;
            auVar408._4_4_ = auVar262._4_4_ * 0.025;
            auVar408._8_4_ = auVar262._8_4_ * 0.02;
            auVar408._12_4_ = auVar262._12_4_ * 0.025;
            auVar316 = vsubps_avx(auVar183,auVar408);
            auVar447 = vmaxps_avx(auVar316,auVar259);
            auVar189 = vcmpps_avx(auVar565,auVar447,1);
            auVar189 = vshufps_avx(auVar189,auVar189,0x50);
            uVar140 = vmovmskpd_avx(auVar189);
            auVar153 = auVar436._0_16_;
            auVar189 = auVar153;
            if ((uVar140 & 2) == 0) {
              auVar189 = SUB6416(ZEXT464(0xbf800000),0);
            }
            auVar437 = auVar153;
            if ((uVar140 & 1) == 0) {
              auVar437 = SUB6416(ZEXT464(0xbf800000),0);
            }
            auVar205 = vblendvps_avx(ZEXT816(0x3d4ccccd3d23d70a),local_268,auVar205);
            auVar205 = vsubps_avx(auVar181,auVar205);
            auVar205 = vmaxps_avx(ZEXT816(0) << 0x20,auVar205);
            auVar181 = vsubps_avx(auVar323,auVar262);
            auVar184._0_4_ =
                 auVar546._0_4_ * auVar181._0_4_ * auVar181._0_4_ + auVar316._0_4_ * auVar316._0_4_;
            auVar184._4_4_ =
                 auVar546._4_4_ * auVar181._4_4_ * auVar181._4_4_ + auVar316._4_4_ * auVar316._4_4_;
            auVar184._8_4_ =
                 auVar546._8_4_ * auVar181._8_4_ * auVar181._8_4_ + auVar316._8_4_ * auVar316._8_4_;
            auVar184._12_4_ =
                 auVar546._12_4_ * auVar181._12_4_ * auVar181._12_4_ +
                 auVar316._12_4_ * auVar316._12_4_;
            auVar260._0_4_ =
                 auVar205._0_4_ * auVar205._0_4_ + auVar546._0_4_ * auVar259._0_4_ * auVar259._0_4_;
            auVar260._4_4_ =
                 auVar205._4_4_ * auVar205._4_4_ + auVar546._4_4_ * auVar259._4_4_ * auVar259._4_4_;
            auVar260._8_4_ =
                 auVar205._8_4_ * auVar205._8_4_ + auVar546._8_4_ * auVar259._8_4_ * auVar259._8_4_;
            auVar260._12_4_ =
                 auVar205._12_4_ * auVar205._12_4_ +
                 auVar546._12_4_ * auVar259._12_4_ * auVar259._12_4_;
            auVar205 = vcmpps_avx(auVar260,auVar184,1);
            auVar205 = vshufps_avx(auVar205,auVar205,0x50);
            uVar140 = vmovmskpd_avx(auVar205);
            if ((uVar140 & 2) == 0) {
              auVar205 = vmovshdup_avx(auVar184);
              auVar181 = SUB6416(ZEXT464(0),0);
            }
            else {
              auVar205 = vmovshdup_avx(auVar260);
              auVar181 = SUB6416(ZEXT464(0),0);
            }
            if ((uVar140 & 1) == 0) {
              auVar260 = auVar184;
            }
            auVar262 = vsqrtss_avx(auVar260,auVar260);
            auVar323 = vmovshdup_avx(auVar447);
            auVar323 = vcmpss_avx(auVar181 << 0x20,auVar323,4);
            auVar189 = vandps_avx(auVar323,auVar189);
            auVar181 = vcmpss_avx(auVar181 << 0x20,auVar447,4);
            auVar181 = vandps_avx(auVar437,auVar181);
            auVar205 = vsqrtss_avx(auVar205,auVar205);
            auVar164 = vminss_avx(auVar164,ZEXT416((uint)(auVar189._0_4_ * auVar205._0_4_)));
            auVar164 = vminss_avx(auVar164,ZEXT416((uint)(auVar181._0_4_ * auVar262._0_4_)));
            auVar189 = vmovsldup_avx(auVar489);
            auVar205 = vmovsldup_avx(auVar343);
            auVar481 = ZEXT1664(CONCAT412((auVar205._12_4_ * 0.0 + auVar189._12_4_ * 0.0) * 0.0,
                                          CONCAT48((auVar205._8_4_ * 0.0 + auVar189._8_4_ * 0.0) *
                                                   0.0,CONCAT44((auVar205._4_4_ * 0.95105654 +
                                                                auVar189._4_4_ * -0.309017) * 1.25,
                                                                (auVar205._0_4_ * 0.309017 +
                                                                auVar189._0_4_ * 0.95105654) * 1.25)
                                                  )));
            iVar133 = iVar133 + -1;
            auVar436 = ZEXT1664(auVar153);
          } while (iVar133 != 0);
          pmVar138 = (material_t *)
                     (longlong)
                     (icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
                     (int)uVar143 + iVar50.field0_0x0._0_4_);
          icon_atlas[(longlong)pmVar138] = auVar164._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  iVar133 = n_materials;
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    spike_material_index = iVar133;
    uVar45 = str_to_id("SPIK");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 1;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].friction = materials_list[index].friction * 5.0;
    uVar11 = materials_list[index].max_radial_force;
    uVar29 = materials_list[index].max_angular_force;
    auVar185._0_4_ = (float)uVar11 * 16.0;
    auVar185._4_4_ = (float)uVar29 * 16.0;
    auVar185._8_8_ = 0;
    auVar152 = vunpcklpd_avx(auVar185,___xmm_00000000000000003dcccccd3dcccccd);
    pmVar138 = materials_list + index;
    pmVar138->max_radial_force = (float)auVar152._0_4_;
    pmVar138->max_angular_force = (float)auVar152._4_4_;
    pmVar138->radial_compliance = (float)auVar152._8_4_;
    pmVar138->angular_compliance = (float)auVar152._12_4_;
    materials_list[index].movement_force = materials_list[index].movement_force * 0.2;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 12.0;
    materials_list[index].density = 2.0;
    materials_list[index].sharpness = 0.4;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 4;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f19999a3f19999a;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f19999a;
    materials_list[index].texture_type = 4;
    iVar50 = get_icon_coords(0x1d);
    rVar79._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar79._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar79;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x1d);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar436 = ZEXT1664(ZEXT816(0xbed70a3d80000000));
      auVar344._8_4_ = 0x7fffffff;
      auVar344._0_8_ = 0x7fffffff7fffffff;
      auVar344._12_4_ = 0x7fffffff;
      auVar481 = ZEXT1664(ZEXT816(0xbd4ccccdbdf5c28f));
      auVar535._0_12_ = ZEXT812(0);
      auVar535._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar152 = vmovsldup_avx(ZEXT416((uint)fVar146));
        index = 0;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar164 = vmovsldup_avx(ZEXT416((uint)fVar314));
          auVar261._0_4_ = auVar164._0_4_ + auVar436._0_4_;
          auVar261._4_4_ = auVar164._4_4_ + auVar436._4_4_;
          auVar261._8_4_ = auVar164._8_4_ + auVar436._8_4_;
          auVar261._12_4_ = auVar164._12_4_ + auVar436._12_4_;
          auVar164 = vandps_avx(auVar261,auVar344);
          local_258 = auVar152._0_4_;
          fStack_254 = auVar152._4_4_;
          fStack_250 = auVar152._8_4_;
          fStack_24c = auVar152._12_4_;
          auVar186._0_4_ =
               auVar481._0_4_ + local_258 * 0.24253564 + auVar164._0_4_ * 0.97014254 + 0.0;
          auVar186._4_4_ =
               auVar481._4_4_ + fStack_254 * 0.24253564 + auVar164._4_4_ * 0.97014254 + 0.0;
          auVar186._8_4_ =
               auVar481._8_4_ + fStack_250 * 0.24253564 + auVar164._8_4_ * 0.97014254 + 0.0;
          auVar186._12_4_ =
               auVar481._12_4_ + fStack_24c * 0.24253564 + auVar164._12_4_ * 0.97014254 + 0.0;
          auVar189 = vmovshdup_avx(auVar186);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar186._0_4_ - auVar189._0_4_)),auVar344);
          auVar171 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar535);
          auVar164 = vandps_avx(ZEXT416((uint)(fVar314 + 0.42)),auVar344);
          auVar189 = vminss_avx(auVar186,auVar189);
          fVar237 = auVar189._0_4_ - (auVar171._0_4_ * auVar171._0_4_ * 0.25) / 0.1;
          fVar314 = fVar146 * 0.24253564 + auVar164._0_4_ * 0.97014254 + 0.0 + -0.05;
          auVar164 = vandps_avx(ZEXT416((uint)(fVar237 - fVar314)),auVar344);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar535);
          auVar436 = ZEXT1664(auVar436._0_16_);
          auVar171 = vminss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar314));
          auVar481 = ZEXT1664(auVar481._0_16_);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar171._0_4_ - (auVar164._0_4_ * auVar164._0_4_ * 0.25) / 0.1;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("HAMR");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x201;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.12;
    materials_list[index].density = 2.0;
    uVar12 = materials_list[index].drag;
    uVar30 = materials_list[index].tangent_drag;
    auVar187._0_4_ = (float)uVar12 * 0.25;
    auVar187._4_4_ = (float)uVar30 * 0.25;
    auVar187._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar187);
    materials_list[index].drag = (float)(int)uVar19;
    materials_list[index].tangent_drag = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].restitution = 1.0;
    uVar13 = materials_list[index].max_radial_force;
    uVar31 = materials_list[index].max_angular_force;
    auVar188._0_4_ = (float)uVar13 * 4.0;
    auVar188._4_4_ = (float)uVar31 * 4.0;
    auVar188._8_8_ = 0;
    auVar152 = vunpcklpd_avx(auVar188,___xmm_00000000000000003e99999a3e99999a);
    pmVar138 = materials_list + index;
    pmVar138->max_radial_force = (float)auVar152._0_4_;
    pmVar138->max_angular_force = (float)auVar152._4_4_;
    pmVar138->radial_compliance = (float)auVar152._8_4_;
    pmVar138->angular_compliance = (float)auVar152._12_4_;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 12.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate * 0.2;
    materials_list[index].physics_update_fn = cell_hammer;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003f0bc6a8;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f4c8b44;
    materials_list[index].texture_type = 3;
    iVar50 = get_icon_coords(0x1e);
    rVar80._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar80._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar80;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x1e);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        pfVar84 = (float *)0x0;
        do {
          uVar140 = (uint)((ulonglong)pfVar84 >> 0x20);
          if ((longlong)uVar143 < 0) {
            uVar140 = (uint)(uVar143 >> 0x21);
          }
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar533 = (fVar146 + fVar314) * 0.70710677;
          fVar314 = (fVar146 - fVar314) * 0.70710677 + 0.1;
          fVar237 = fVar314 + -0.3;
          auVar409._8_4_ = 0x7fffffff;
          auVar409._0_8_ = 0x7fffffff7fffffff;
          auVar409._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)fVar533),auVar409);
          auVar164 = vandps_avx(ZEXT416((uint)fVar237),auVar409);
          fVar144 = auVar152._0_4_;
          fVar460 = auVar164._0_4_;
          if ((0.25 <= fVar144) || (0.18 <= fVar460)) {
            auVar152 = vminss_avx(SUB6416(ZEXT464(0x3e800000),0),auVar152);
            auVar164 = vminss_avx(SUB6416(ZEXT464(0x3e3851ec),0),auVar164);
            fVar144 = fVar144 - auVar152._0_4_;
            fVar460 = fVar460 - auVar164._0_4_;
            auVar152 = ZEXT416((uint)(fVar460 * fVar460 + fVar144 * fVar144 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar144 = auVar152._0_4_;
          }
          else {
            auVar152 = vmaxss_avx(ZEXT416((uint)(fVar144 + -0.25)),ZEXT416((uint)(fVar460 + -0.18)))
            ;
            fVar144 = auVar152._0_4_;
          }
          auVar445._0_4_ = ((fVar314 + 0.6) * 1.2 + fVar533 * 0.0 + 0.0) / 1.44;
          auVar445._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar445);
          auVar152 = vmaxss_avx(auVar436._0_16_,auVar152);
          fVar460 = auVar152._0_4_;
          fVar310 = fVar533 - (fVar460 * 0.0 + (1.0 - fVar460) * 0.0);
          fVar460 = fVar314 + ((1.0 - fVar460) * 0.6 - fVar460 * 0.6);
          auVar152 = ZEXT416((uint)(fVar460 * fVar460 + fVar310 * fVar310 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vminss_avx(ZEXT416((uint)(fVar144 + -0.02)),auVar152);
          fVar144 = auVar152._0_4_ + -0.1;
          fVar460 = (fVar314 + 0.6) * 0.70710677;
          fVar314 = (fVar533 + -0.2) * 0.70710677 + fVar460;
          fVar460 = (fVar533 + -0.2) * -0.70710677 + fVar460;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar310 = fVar314 * 0.70710677;
          fVar313 = auVar152._0_4_;
          fVar308 = fVar313 * 0.70710677;
          fVar312 = 0.7424621;
          fVar311 = 0.7424621;
          if (fVar308 <= fVar310) {
            fVar311 = fVar460 * fVar460 + fVar314 * fVar314 + 0.0;
            if (fVar311 <= 1e-06) {
              uVar81 = 0;
            }
            else {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = 1.0 / auVar152._0_4_;
              uVar81 = CONCAT44(uVar140,fVar314 * fVar311) |
                       (ulonglong)(uint)(fVar313 * fVar311) << 0x20;
            }
            uVar134 = 0;
            uVar140 = 0;
            fVar311 = (float)uVar81 * 1.05;
            fVar312 = (float)(uVar81 >> 0x20) * 1.05;
            if (fVar310 < fVar308) goto LAB_1401298c3;
LAB_140129965:
            fVar309 = fVar460 * fVar460 + fVar314 * fVar314 + 0.0;
            if (fVar309 <= 1e-06) {
              uVar81 = 0;
            }
            else {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar309),ZEXT416((uint)fVar309));
              fVar309 = 1.0 / auVar152._0_4_;
              uVar81 = CONCAT44(uVar140,fVar309 * fVar314) |
                       (ulonglong)(uint)(fVar309 * fVar313) << 0x20;
            }
            uVar134 = 0;
            fVar309 = (float)uVar81 * 0.925;
            fVar589 = (float)(uVar81 >> 0x20) * 0.925;
          }
          else {
            uVar134 = uVar140;
            if (fVar308 <= fVar310) goto LAB_140129965;
LAB_1401298c3:
            fVar309 = 0.6540738;
            fVar589 = 0.6540738;
          }
          fVar542 = 0.56568545;
          fVar598 = 0.56568545;
          if (fVar308 <= fVar310) {
            fVar460 = fVar460 * fVar460 + fVar314 * fVar314 + 0.0;
            if (fVar460 <= 1e-06) {
              uVar81 = 0;
            }
            else {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)fVar460));
              fVar460 = 1.0 / auVar152._0_4_;
              uVar81 = CONCAT44(uVar134,fVar314 * fVar460) |
                       (ulonglong)(uint)(fVar313 * fVar460) << 0x20;
            }
            fVar542 = (float)uVar81 * 0.8;
            fVar598 = (float)(uVar81 >> 0x20) * 0.8;
          }
          auVar152 = ZEXT416((uint)((fVar313 - fVar312) * (fVar313 - fVar312) +
                                   (fVar314 - fVar311) * (fVar314 - fVar311) + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar164 = ZEXT416((uint)((fVar313 - fVar589) * (fVar313 - fVar589) +
                                   (fVar314 - fVar309) * (fVar314 - fVar309) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vminss_avx(auVar152,auVar164);
          auVar164 = ZEXT416((uint)((fVar313 - fVar598) * (fVar313 - fVar598) +
                                   (fVar314 - fVar542) * (fVar314 - fVar542) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vminss_avx(auVar152,auVar164);
          auVar481 = ZEXT1664(auVar152);
          fVar533 = fVar533 + 0.35;
          iVar133 = 0;
          do {
            fVar308 = (float)iVar133;
            uVar140 = (uint)(longlong)(fVar308 + 10000.0);
            uVar134 = uVar140 + 0x50e8e167;
            uVar134 = (uVar134 >> 0x10 ^ uVar134) * 0x7feb352d;
            uVar134 = (uVar134 >> 0xf ^ uVar134) * -0x7b935975;
            fVar310 = (float)(uVar134 >> 0x10 ^ uVar134) * 2.3283064e-10 * 3.1415927;
            uVar140 = ((uint)((ulonglong)(longlong)(fVar308 + 10000.0) >> 0x10) & 0xffff ^ uVar140)
                      * 0x7feb352d;
            uVar140 = (uVar140 >> 0xf ^ uVar140) * -0x7b935975;
            fVar314 = fVar310 + 6.2831855;
            fVar460 = fVar308 * 0.1 + 0.02;
            index = (longlong)(fVar308 + 0.5 + 10000.0);
            uVar134 = ((uint)((ulonglong)index >> 0x10) & 0xffff ^ (uint)index) * 0x7feb352d;
            uVar134 = (uVar134 >> 0xf ^ uVar134) * -0x7b935975;
            pmVar138 = (material_t *)0x0;
            iVar136 = 0;
            do {
              fVar311 = 0.5;
              iVar39 = (int)(longlong)((float)iVar136 + 10000.0);
              uVar46 = (uVar140 >> 0x10 ^ uVar140) + iVar39;
              uVar46 = (uVar46 >> 0x10 ^ uVar46) * 0x7feb352d;
              uVar46 = (uVar46 >> 0xf ^ uVar46) * -0x7b935975;
              fVar308 = (float)(uVar46 >> 0x10 ^ uVar46) * 2.3283064e-10 * 0.5 + fVar310 + 0.3;
              if (fVar314 < fVar308) break;
              fVar309 = (fVar310 + fVar308) * 0.5;
              fVar589 = fVar309;
              cosf();
              fVar313 = fVar309;
              sinf();
              fVar312 = (fVar308 - fVar313) + (fVar308 - fVar313) + fVar313;
              fVar313 = (fVar310 - fVar313) + (fVar310 - fVar313) + fVar313;
              fVar589 = fVar533 - fVar460 * fVar589;
              fVar542 = fVar237 - fVar460 * fVar309;
              fVar309 = fVar311 * (fVar313 + fVar312);
              fVar598 = fVar309;
              cosf();
              sinf();
              fVar310 = fVar589 * fVar598 + fVar542 * fVar309;
              fVar309 = fVar542 * fVar598 - fVar589 * fVar309;
              auVar152 = vandps_avx(ZEXT416((uint)fVar309),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar498 = ZEXT1664(auVar152);
              fVar311 = fVar311 * (fVar312 - fVar313);
              auVar569 = ZEXT464((uint)fVar311);
              auVar436 = ZEXT464((uint)fVar311);
              cosf();
              auVar541 = ZEXT1664(auVar436._0_16_);
              auVar436 = ZEXT1664(auVar569._0_16_);
              sinf();
              fVar313 = auVar436._0_4_;
              fVar312 = auVar541._0_4_;
              fVar311 = auVar498._0_4_;
              if (fVar311 * fVar312 <= fVar310 * fVar313) {
                fVar312 = fVar309 * fVar309 + fVar310 * fVar310 + 0.0;
                if (fVar312 <= 1e-06) {
                  uVar81 = 0;
                }
                else {
                  auVar152 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
                  fVar312 = 1.0 / auVar152._0_4_;
                  uVar81 = CONCAT44(extraout_var,fVar310 * fVar312) |
                           (ulonglong)(uint)(fVar311 * fVar312) << 0x20;
                }
                fVar312 = (float)uVar81;
                fVar313 = (float)(uVar81 >> 0x20);
              }
              auVar436 = ZEXT1664(ZEXT816(0));
              fVar310 = fVar310 - fVar312 * 0.2;
              fVar311 = fVar311 - fVar313 * 0.2;
              auVar152 = ZEXT416((uint)(fVar311 * fVar311 + fVar310 * fVar310 + 0.0));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              auVar152 = vminss_avx(auVar481._0_16_,auVar152);
              auVar481 = ZEXT1664(auVar152);
              uVar46 = iVar39 + (uVar134 >> 0x10 ^ uVar134);
              uVar46 = (uVar46 >> 0x10 ^ uVar46) * 0x7feb352d;
              uVar46 = (uVar46 >> 0xf ^ uVar46) * -0x7b935975;
              fVar310 = (float)(uVar46 >> 0x10 ^ uVar46) * 2.3283064e-10 * 0.5 + fVar308 + 0.3;
              iVar136 = iVar136 + 1;
            } while (iVar136 != 10);
            pfVar84 = icon_atlas;
            iVar133 = iVar133 + 1;
          } while (iVar133 != 3);
          auVar152 = ZEXT416((uint)(fVar237 * fVar237 + fVar533 * fVar533 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ + -0.1)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vminss_avx(auVar481._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.01)));
          auVar152 = vmaxss_avx(ZEXT416((uint)(auVar152._0_4_ + -0.03)),
                                ZEXT416((uint)(0.02 - fVar144)));
          auVar152 = vminss_avx(ZEXT416((uint)fVar144),auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
      unaff_R13 = 0;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("BOMB");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 1;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 9.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate * 0.25;
    materials_list[index].conductivity = 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e99999a3f800000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f80000000000000;
    materials_list[index].light_radius = 3.0;
    materials_list[index].emission.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ecccccd3f4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].emission.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x13dcccccd;
    materials_list[index].physics_update_fn = cell_explode;
    materials_list[index].destroyed_fn = cell_die_explode;
    iVar50 = get_icon_coords(0x1f);
    rVar82._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar82._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar82;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x1f);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      pmVar138 = (material_t *)0x0;
      fVar146 = 0.3;
      do {
        iVar44 = (int)uVar81;
        fVar314 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar237 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar152 = ZEXT416((uint)(fVar237 * fVar237 + 0.0 + fVar314 * fVar314));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ + -0.2)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar436 = ZEXT464((uint)(auVar152._0_4_ + -0.03));
          iVar133 = 0;
          fVar533 = 1.190224;
          do {
            fVar460 = 0.5;
            uVar140 = (int)(longlong)((float)iVar133 + 10000.0) + 0x20f332dd;
            uVar140 = (uVar140 >> 0x10 ^ uVar140) * 0x7feb352d;
            uVar140 = (uVar140 >> 0xf ^ uVar140) * -0x7b935975;
            uVar140 = uVar140 >> 0x10 ^ uVar140;
            fVar144 = (float)uVar140 * 2.3283064e-10 * 0.5 + fVar533 + fVar146;
            if (7.4734097 < fVar144) break;
            fVar308 = (fVar533 + fVar144) * 0.5;
            fVar311 = fVar308;
            cosf();
            fVar310 = fVar308;
            sinf();
            fVar146 = fVar310 + (fVar144 - fVar310) + (fVar144 - fVar310);
            auVar541 = ZEXT464((uint)fVar146);
            fVar310 = fVar310 + (fVar533 - fVar310) + (fVar533 - fVar310);
            fVar311 = fVar237 - fVar311 * 0.12;
            fVar308 = fVar314 - fVar308 * 0.12;
            fVar146 = (fVar146 + fVar310) * fVar460;
            fVar312 = fVar146;
            cosf();
            sinf();
            fVar533 = fVar311 * fVar312 + fVar308 * fVar146;
            fVar146 = fVar312 * fVar308 - fVar311 * fVar146;
            auVar152 = vandps_avx(ZEXT416((uint)fVar146),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar481 = ZEXT1664(auVar152);
            fVar460 = (auVar541._0_4_ - fVar310) * fVar460;
            fVar308 = fVar460;
            cosf();
            sinf();
            fVar310 = auVar481._0_4_;
            if (fVar308 * fVar310 <= fVar533 * fVar460) {
              fVar146 = fVar146 * fVar146 + fVar533 * fVar533 + 0.0;
              if (fVar146 <= 1e-06) {
                uVar81 = 0;
              }
              else {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar146),ZEXT416((uint)fVar146));
                fVar146 = 1.0 / auVar152._0_4_;
                uVar81 = CONCAT44(extraout_var_00,fVar533 * fVar146) |
                         (ulonglong)(uint)(fVar310 * fVar146) << 0x20;
              }
              fVar308 = (float)uVar81;
              fVar460 = (float)(uVar81 >> 0x20);
            }
            fVar146 = 0.3;
            fVar533 = fVar533 - fVar308 * 0.2;
            fVar310 = fVar310 - fVar460 * 0.2;
            auVar152 = ZEXT416((uint)(fVar310 * fVar310 + fVar533 * fVar533 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar152 = vminss_avx(auVar436._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.03)));
            auVar436 = ZEXT1664(auVar152);
            fVar533 = (float)uVar140 * 2.3283064e-10 * 0.5 + fVar144 + 0.3;
            iVar133 = iVar133 + 1;
          } while (iVar133 != 10);
          iVar133 = 0;
          fVar533 = 0.6646888;
          do {
            fVar460 = 0.5;
            uVar140 = (int)(longlong)((float)iVar133 + 10000.0) + 0x50e8e167;
            uVar140 = (uVar140 >> 0x10 ^ uVar140) * 0x7feb352d;
            uVar140 = (uVar140 >> 0xf ^ uVar140) * -0x7b935975;
            unaff_R13 = (ulonglong)(uVar140 >> 0x10 ^ uVar140);
            fVar144 = (float)unaff_R13 * 2.3283064e-10 * 0.5 + fVar533 + fVar146;
            if (6.947874 < fVar144) break;
            fVar308 = (fVar533 + fVar144) * 0.5;
            fVar311 = fVar308;
            cosf();
            fVar310 = fVar308;
            sinf();
            fVar146 = fVar310 + (fVar144 - fVar310) + (fVar144 - fVar310);
            fVar310 = fVar310 + (fVar533 - fVar310) + (fVar533 - fVar310);
            auVar541 = ZEXT464((uint)fVar310);
            fVar311 = fVar237 - fVar311 * 0.22;
            fVar308 = fVar314 - fVar308 * 0.22;
            fVar310 = (fVar310 + fVar146) * fVar460;
            fVar312 = fVar310;
            cosf();
            sinf();
            fVar533 = fVar311 * fVar312 + fVar308 * fVar310;
            fVar308 = fVar312 * fVar308 - fVar311 * fVar310;
            auVar152 = vandps_avx(ZEXT416((uint)fVar308),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar481 = ZEXT1664(auVar152);
            fVar460 = (fVar146 - auVar541._0_4_) * fVar460;
            fVar311 = fVar460;
            cosf();
            sinf();
            fVar310 = auVar481._0_4_;
            if (fVar311 * fVar310 <= fVar533 * fVar460) {
              fVar146 = fVar308 * fVar308 + fVar533 * fVar533 + 0.0;
              if (fVar146 <= 1e-06) {
                uVar81 = 0;
              }
              else {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar146),ZEXT416((uint)fVar146));
                fVar146 = 1.0 / auVar152._0_4_;
                uVar81 = CONCAT44(extraout_var_01,fVar533 * fVar146) |
                         (ulonglong)(uint)(fVar310 * fVar146) << 0x20;
              }
              fVar311 = (float)uVar81;
              fVar460 = (float)(uVar81 >> 0x20);
            }
            fVar146 = 0.3;
            fVar533 = fVar533 - fVar311 * 0.2;
            fVar310 = fVar310 - fVar460 * 0.2;
            auVar152 = ZEXT416((uint)(fVar310 * fVar310 + fVar533 * fVar533 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar152 = vminss_avx(auVar436._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.03)));
            auVar436 = ZEXT1664(auVar152);
            fVar533 = (float)unaff_R13 * 2.3283064e-10 * 0.5 + fVar144 + 0.3;
            iVar133 = iVar133 + 1;
          } while (iVar133 != 10);
          fVar460 = 2.3283064e-10;
          fVar533 = 0.5;
          fVar312 = fVar314;
          fVar144 = atan2f(fVar314,fVar237);
          fVar533 = fVar144 * 3.8197186 + fVar533;
          auVar152 = vandps_avx(ZEXT416((uint)fVar533),___xmm_80000000800000008000000080000000);
          auVar345._8_4_ = 0x3effffff;
          auVar345._0_8_ = 0x3effffff3effffff;
          auVar345._12_4_ = 0x3effffff;
          auVar152 = vorps_avx(auVar152,auVar345);
          auVar152 = ZEXT416((uint)(fVar533 + auVar152._0_4_));
          auVar152 = vroundss_avx(auVar152,auVar152,0xb);
          fVar144 = (auVar152._0_4_ + -0.5) * 0.2617994;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar144 + 10000.0)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          uVar140 = (int)(longlong)auVar152._0_4_ + 0x2b7ab926;
          uVar140 = (uVar140 >> 0x10 ^ uVar140) * 0x7feb352d;
          uVar140 = (uVar140 >> 0xf ^ uVar140) * -0x7b935975;
          fVar533 = (float)(uVar140 >> 0x10 ^ uVar140) * fVar460 * 0.1 + 0.65;
          fVar313 = fVar144;
          cosf();
          sinf();
          fVar460 = fVar313 * fVar533 * 0.75;
          fVar310 = fVar144 * fVar533 * 0.75;
          fVar308 = fVar313 * fVar533 - fVar460;
          fVar311 = fVar144 * fVar533 - fVar310;
          auVar511._0_12_ = ZEXT812(0);
          auVar511._12_4_ = 0;
          auVar410._0_4_ =
               ((fVar312 - fVar310) * fVar311 + (fVar237 - fVar460) * fVar308 + 0.0) /
               (fVar311 * fVar311 + fVar308 * fVar308 + 0.0);
          auVar410._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar410);
          auVar152 = vmaxss_avx(auVar511,auVar152);
          fVar308 = auVar152._0_4_;
          fVar237 = fVar237 - (fVar313 * fVar533 * fVar308 + fVar460 * (1.0 - fVar308));
          fVar312 = fVar312 - (fVar144 * fVar533 * fVar308 + fVar310 * (1.0 - fVar308));
          auVar152 = ZEXT416((uint)(fVar312 * fVar312 + fVar237 * fVar237 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vminss_avx(auVar436._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.03)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("SUCK");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 6;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.04;
    materials_list[index].base_cost = 11.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003ecccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f666666;
    materials_list[index].texture_type = 1;
    materials_list[index].physics_update_fn = cell_vacuum;
    iVar50 = get_icon_coords(0x20);
    rVar83._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar83._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar83;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x20);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    pfVar84 = (float *)0x0;
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      pmVar138 = (material_t *)(ulonglong)(uint)(iVar50.field0_0x0._4_4_ + iVar133);
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + 0.5;
        auVar557._8_4_ = 0x7fffffff;
        auVar557._0_8_ = 0x7fffffff7fffffff;
        auVar557._12_4_ = 0x7fffffff;
        auVar152 = vandps_avx(auVar557,ZEXT416((uint)fVar146));
        fVar314 = auVar436._0_4_;
        index = 0;
        do {
          uVar142 = (undefined4)((ulonglong)pfVar84 >> 0x20);
          auVar189 = ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 + -1.0));
          auVar164 = vandps_avx(auVar557,auVar189);
          fVar308 = auVar164._0_4_;
          fVar237 = (1.6 - fVar308) * 0.9160416 + fVar146 * 0.4010833;
          fVar533 = (1.6 - fVar308) * -0.4010833 + fVar146 * 0.9160416;
          auVar171 = vandps_avx(auVar557,ZEXT416((uint)fVar533));
          fVar310 = auVar171._0_4_;
          fVar144 = 1.3970219;
          fVar460 = 0.5461958;
          fVar311 = auVar436._0_4_;
          if (fVar310 * 0.9313479 <= fVar237 * 0.36413053) {
            fVar533 = fVar533 * fVar533 + fVar311 + fVar237 * fVar237;
            if (fVar533 <= 1e-06) {
              uVar143 = 0;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
              fVar533 = 1.0 / auVar171._0_4_;
              uVar143 = CONCAT44(uVar142,fVar237 * fVar533) |
                        (ulonglong)(uint)(fVar310 * fVar533) << 0x20;
            }
            uVar142 = 0;
            fVar144 = (float)uVar143 * 1.5;
            fVar460 = (float)(uVar143 >> 0x20) * 1.5;
          }
          auVar171 = ZEXT416((uint)((fVar310 - fVar460) * (fVar310 - fVar460) +
                                   fVar311 + (fVar237 - fVar144) * (fVar237 - fVar144)));
          auVar205 = vsqrtss_avx(auVar171,auVar171);
          fVar237 = (4.025 - fVar308) * 0.98346925 + fVar146 * 0.18107523;
          fVar533 = (4.025 - fVar308) * -0.18107523 + fVar146 * 0.98346925;
          auVar171 = vandps_avx(ZEXT416((uint)fVar533),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar310 = auVar171._0_4_;
          fVar144 = 3.9651606;
          fVar460 = 0.52678376;
          if (fVar310 * 0.99129015 <= fVar237 * 0.13169594) {
            fVar533 = fVar533 * fVar533 + fVar311 + fVar237 * fVar237;
            if (fVar533 <= 1e-06) {
              uVar143 = 0;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
              fVar533 = 1.0 / auVar171._0_4_;
              uVar143 = CONCAT44(uVar142,fVar237 * fVar533) |
                        (ulonglong)(uint)(fVar310 * fVar533) << 0x20;
            }
            uVar142 = 0;
            fVar144 = (float)uVar143 * 4.0;
            fVar460 = (float)(uVar143 >> 0x20) * 4.0;
          }
          auVar171 = ZEXT416((uint)((fVar310 - fVar460) * (fVar310 - fVar460) +
                                   fVar311 + (fVar237 - fVar144) * (fVar237 - fVar144)));
          auVar181 = vsqrtss_avx(auVar171,auVar171);
          fVar237 = (1.2 - fVar308) * 0.8532561 + fVar146 * 0.5214921;
          fVar533 = (1.2 - fVar308) * -0.5214921 + fVar146 * 0.8532561;
          auVar171 = vandps_avx(ZEXT416((uint)fVar533),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar460 = 0.4781954;
          fVar310 = auVar171._0_4_;
          fVar144 = 0.87825346;
          if (fVar310 * 0.87825346 <= fVar237 * 0.4781954) {
            fVar533 = fVar533 * fVar533 + fVar311 + fVar237 * fVar237;
            if (fVar533 <= 1e-06) {
              uVar143 = 0;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
              fVar533 = 1.0 / auVar171._0_4_;
              uVar143 = CONCAT44(uVar142,fVar237 * fVar533) |
                        (ulonglong)(uint)(fVar310 * fVar533) << 0x20;
            }
            fVar144 = (float)uVar143;
            fVar460 = (float)(uVar143 >> 0x20);
          }
          auVar171 = ZEXT416((uint)((fVar310 - fVar460) * (fVar310 - fVar460) +
                                   fVar311 + (fVar237 - fVar144) * (fVar237 - fVar144)));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          if (fVar308 <= auVar152._0_4_) {
            fVar460 = 0.4;
            fVar237 = 0.2;
            fVar533 = 0.2;
            fVar144 = 0.4;
            auVar323 = auVar164;
            auVar164 = auVar152;
          }
          else {
            fVar460 = 0.2;
            fVar237 = 0.4;
            fVar533 = 0.4;
            fVar144 = 0.2;
            auVar323 = auVar152;
          }
          auVar541 = ZEXT1664(auVar164);
          auVar262 = vorps_avx(auVar189,___xmm_80000000800000008000000080000000);
          auVar189 = vminss_avx(ZEXT416((uint)(auVar205._0_4_ + -0.05)),
                                ZEXT416((uint)(auVar181._0_4_ + -0.05)));
          auVar171 = vminss_avx(auVar189,ZEXT416((uint)(auVar171._0_4_ + -0.05)));
          fVar310 = fVar237 * fVar237 - fVar460 * fVar460;
          auVar498 = ZEXT464((uint)fVar310);
          auVar164 = vinsertps_avx(auVar164,auVar323,0x10);
          auVar190._0_4_ = fVar533 * auVar164._0_4_;
          auVar190._4_4_ = fVar144 * auVar164._4_4_;
          auVar190._8_4_ = auVar164._8_4_ * 0.0;
          auVar190._12_4_ = auVar164._12_4_ * 0.0;
          auVar164 = vmovsldup_avx(ZEXT416((uint)fVar310));
          auVar164 = vdivps_avx(auVar190,auVar164);
          auVar189 = vmovshdup_avx(auVar164);
          auVar481 = ZEXT1664(auVar189);
          fVar308 = auVar164._0_4_;
          auVar411._0_4_ = fVar308 * fVar308;
          auVar411._4_4_ = auVar164._4_4_ * auVar164._4_4_;
          auVar411._8_4_ = auVar164._8_4_ * auVar164._8_4_;
          auVar411._12_4_ = auVar164._12_4_ * auVar164._12_4_;
          auVar164 = vmovshdup_avx(auVar411);
          auVar569 = ZEXT1664(auVar164);
          fVar309 = (auVar164._0_4_ + auVar411._0_4_ + -1.0) / 3.0;
          fVar312 = fVar309 * fVar309 * fVar309;
          fVar144 = auVar164._0_4_ * auVar411._0_4_;
          fVar533 = fVar144 + fVar312;
          fVar144 = fVar144 + fVar533;
          fVar313 = auVar189._0_4_;
          fVar310 = fVar313 * auVar411._0_4_ + fVar313;
          if (fVar311 <= fVar533) {
            fVar308 = (fVar313 + fVar313) * fVar308;
            if (fVar533 < fVar311) {
              fVar533 = sqrtf(fVar533);
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
              fVar533 = auVar164._0_4_;
            }
            auVar591._8_4_ = 0x7fffffff;
            auVar591._0_8_ = 0x7fffffff7fffffff;
            auVar591._12_4_ = 0x7fffffff;
            auVar560 = ZEXT1664(auVar591);
            fVar308 = fVar308 * fVar533;
            auVar607 = ZEXT464((uint)(fVar144 + fVar308));
            auVar164 = vandps_avx(ZEXT416((uint)(fVar144 + fVar308)),auVar591);
            auVar436 = ZEXT1664(auVar164);
            powf();
            auVar498 = ZEXT1664(auVar436._0_16_);
            auVar532 = ZEXT464((uint)(fVar144 - fVar308));
            auVar164 = vandps_avx(ZEXT416((uint)(fVar144 - fVar308)),auVar560._0_16_);
            auVar436 = ZEXT1664(auVar164);
            powf();
            auVar205 = auVar541._0_16_;
            fVar144 = auVar481._0_4_;
            auVar164 = vinsertps_avx(auVar607._0_16_,auVar532._0_16_,0x10);
            auVar347._0_12_ = ZEXT812(0);
            auVar347._12_4_ = 0;
            auVar164 = vcmpps_avx(auVar164,auVar347,1);
            auVar189 = vinsertps_avx(auVar498._0_16_,auVar436._0_16_,0x10);
            auVar348._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
            auVar348._8_4_ = auVar189._8_4_ ^ 0x80000000;
            auVar348._12_4_ = auVar189._12_4_ ^ 0x80000000;
            auVar164 = vblendvps_avx(auVar189,auVar348,auVar164);
            auVar189 = vmovshdup_avx(auVar164);
            fVar533 = auVar569._0_4_ + auVar569._0_4_ +
                      (fVar309 * -4.0 - (auVar164._0_4_ + auVar189._0_4_));
            auVar164 = vinsertps_avx(ZEXT416((uint)(auVar164._0_4_ - auVar189._0_4_)),
                                     ZEXT416((uint)fVar310),0x10);
            auVar513._0_4_ = auVar164._0_4_ * 1.7320508;
            auVar513._4_4_ = auVar164._4_4_ * 2.0;
            auVar513._8_4_ = auVar164._8_4_ * 0.0;
            auVar513._12_4_ = auVar164._12_4_ * 0.0;
            auVar569 = ZEXT1664(auVar513);
            auVar164 = ZEXT416((uint)(fVar533 * fVar533 + auVar513._0_4_ * auVar513._0_4_));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar498 = ZEXT1664(auVar164);
            fVar533 = auVar164._0_4_ - fVar533;
            auVar436 = ZEXT1264(ZEXT812(0));
            if (fVar533 < 0.0) {
              auVar552._0_4_ = sqrtf(fVar533);
              auVar205 = auVar541._0_16_;
              fVar144 = auVar481._0_4_;
              auVar513 = auVar569._0_16_;
              auVar164 = auVar498._0_16_;
              auVar552._4_60_ = extraout_var_13;
              auVar189 = auVar552._0_16_;
            }
            else {
              auVar189 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
            }
            auVar566._8_4_ = 0xbf800000;
            auVar566._0_8_ = 0xbf800000bf800000;
            auVar566._12_4_ = 0xbf800000;
            auVar602._8_4_ = 0x3f800000;
            auVar602._0_8_ = 0x3f8000003f800000;
            auVar602._12_4_ = 0x3f800000;
            auVar164 = vinsertps_avx(auVar189,auVar164,0x10);
            auVar164 = vdivps_avx(auVar513,auVar164);
            auVar189 = vmovshdup_avx(auVar164);
            fVar533 = auVar164._0_4_ + auVar189._0_4_;
            auVar557._8_4_ = 0x7fffffff;
            auVar557._0_8_ = 0x7fffffff7fffffff;
            auVar557._12_4_ = 0x7fffffff;
          }
          else {
            dVar150 = acos((double)(fVar144 / fVar312));
            auVar191._0_8_ = dVar150 / 3.0;
            auVar191._8_8_ = extraout_var_35._0_8_;
            auVar512._0_4_ = (float)auVar191._0_8_;
            auVar512._4_12_ = auVar191._4_12_;
            auVar560 = ZEXT1664(auVar512);
            auVar532 = ZEXT1664(auVar512);
            cosf();
            fVar533 = auVar532._0_4_ + 2.0;
            auVar532 = ZEXT1664(auVar560._0_16_);
            sinf();
            fVar311 = auVar532._0_4_ * 1.7320508;
            fVar308 = auVar569._0_4_;
            fVar144 = fVar308 - fVar309 * (fVar533 + fVar311);
            if (fVar144 < auVar436._0_4_) {
              auVar597._0_4_ = sqrtf(fVar144);
              fVar308 = auVar569._0_4_;
              auVar597._4_60_ = extraout_var_14;
              auVar164 = auVar597._0_16_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
            }
            auVar189 = auVar498._0_16_;
            auVar205 = auVar541._0_16_;
            fVar144 = auVar481._0_4_;
            auVar569 = ZEXT1664(auVar164);
            fVar312 = auVar164._0_4_;
            fVar308 = fVar308 + -fVar309 * (fVar533 - fVar311);
            if (fVar308 < auVar436._0_4_) {
              fVar533 = sqrtf(fVar308);
              auVar189 = auVar498._0_16_;
              auVar205 = auVar541._0_16_;
              fVar312 = auVar569._0_4_;
              fVar144 = auVar481._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
              fVar533 = auVar164._0_4_;
            }
            auVar566._8_4_ = 0xbf800000;
            auVar566._0_8_ = 0xbf800000bf800000;
            auVar566._12_4_ = 0xbf800000;
            auVar602._8_4_ = 0x3f800000;
            auVar602._0_8_ = 0x3f8000003f800000;
            auVar602._12_4_ = 0x3f800000;
            auVar164 = vcmpss_avx(auVar436._0_16_,auVar189,1);
            auVar164 = vblendvps_avx(auVar566,auVar602,auVar164);
            auVar189 = vcmpss_avx(auVar189,auVar436._0_16_,4);
            auVar164 = vandps_avx(auVar189,auVar164);
            auVar557._8_4_ = 0x7fffffff;
            auVar557._0_8_ = 0x7fffffff7fffffff;
            auVar557._12_4_ = 0x7fffffff;
            auVar189 = vandps_avx(auVar557,ZEXT416((uint)fVar310));
            fVar533 = auVar164._0_4_ * fVar312 + fVar533 + auVar189._0_4_ / (fVar312 * fVar533);
          }
          pfVar84 = icon_atlas;
          fVar533 = (fVar533 - fVar144) * 0.5;
          auVar316 = auVar436._0_16_;
          auVar164 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar533 * fVar533)),auVar316);
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar237 = auVar164._0_4_ * fVar237;
          local_238._0_4_ = auVar323._0_4_;
          local_238._0_4_ = fVar460 * fVar533 - (float)local_238;
          fVar533 = fVar237 - auVar205._0_4_;
          fVar144 = auVar436._0_4_;
          auVar164 = ZEXT416((uint)(fVar533 * fVar533 +
                                   fVar144 + (float)local_238 * (float)local_238));
          auVar189 = vsqrtss_avx(auVar164,auVar164);
          auVar346._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
          auVar346._8_4_ = auVar189._8_4_ ^ 0x80000000;
          auVar346._12_4_ = auVar189._12_4_ ^ 0x80000000;
          auVar164 = vcmpss_avx(auVar205,ZEXT416((uint)fVar237),1);
          auVar189 = vblendvps_avx(auVar189,auVar346,auVar164);
          local_258 = auVar262._0_4_;
          auVar164 = vandps_avx(auVar557,ZEXT416((uint)(local_258 * 0.5 +
                                                       (fVar314 - fVar314 * (fVar146 + 0.5)))));
          fVar237 = auVar164._0_4_ + auVar164._0_4_;
          fVar144 = ((fVar146 + 0.5) * 0.5 + fVar144 + fVar144 * local_258) * 4.0;
          auVar164 = vcmpss_avx(ZEXT416((uint)fVar144),SUB6416(ZEXT464(0x3f000000),0),1);
          auVar446._8_4_ = 0x3e4ccccd;
          auVar446._0_8_ = 0x3e4ccccd3e4ccccd;
          auVar446._12_4_ = 0x3e4ccccd;
          auVar205 = vblendvps_avx(auVar446,___xmm_3ecccccd3ecccccd3ecccccd3ecccccd,auVar164);
          auVar164 = vandps_avx(auVar557,ZEXT416((uint)(fVar144 + -0.5)));
          fVar533 = fVar237 + -0.4;
          auVar463._0_4_ = (fVar533 * -0.2 + fVar144 * 0.25) / 0.29;
          auVar463._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar181 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar463);
          auVar323 = vmaxss_avx(auVar316,auVar181);
          auVar262 = ZEXT416((uint)(fVar533 + auVar323._0_4_ * 0.2));
          auVar447 = ZEXT416((uint)(auVar164._0_4_ + -0.5));
          auVar181 = vmaxss_avx(auVar262,auVar447);
          auVar164 = vcmpss_avx(auVar316,auVar181,1);
          auVar164 = vblendvps_avx(auVar566,auVar602,auVar164);
          auVar181 = vcmpss_avx(auVar316,auVar181,4);
          auVar164 = vandps_avx(auVar181,auVar164);
          auVar181 = vinsertps_avx(auVar447,ZEXT416((uint)(fVar144 - auVar323._0_4_)),0x10);
          auVar205 = vmaxss_avx(auVar316,ZEXT416((uint)(fVar237 - auVar205._0_4_)));
          auVar205 = vinsertps_avx(auVar205,auVar262,0x10);
          auVar263._0_4_ = auVar205._0_4_ * auVar205._0_4_ + auVar181._0_4_ * auVar181._0_4_ * 0.25;
          auVar263._4_4_ = auVar205._4_4_ * auVar205._4_4_ + auVar181._4_4_ * auVar181._4_4_ * 0.25;
          auVar263._8_4_ = auVar205._8_4_ * auVar205._8_4_ + auVar181._8_4_ * auVar181._8_4_ * 0.0;
          auVar263._12_4_ =
               auVar205._12_4_ * auVar205._12_4_ + auVar181._12_4_ * auVar181._12_4_ * 0.0;
          auVar205 = vmovshdup_avx(auVar263);
          auVar205 = vminss_avx(auVar263,auVar205);
          auVar205 = vsqrtss_avx(auVar205,auVar205);
          fVar237 = auVar164._0_4_ * auVar205._0_4_ + -0.05;
          auVar164 = vandps_avx(auVar557,ZEXT416((uint)(auVar189._0_4_ - fVar237)));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.15 - auVar164._0_4_)),auVar316);
          auVar189 = vminss_avx(auVar189,ZEXT416((uint)fVar237));
          fVar237 = auVar189._0_4_ - (auVar164._0_4_ * auVar164._0_4_ * 0.25) / 0.15;
          auVar164 = vmaxss_avx(ZEXT416((uint)(-0.01 - fVar237)),ZEXT416(auVar171._0_4_));
          auVar164 = vminss_avx(ZEXT416((uint)fVar237),auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (int)pmVar138 + iVar50.field0_0x0._0_4_ +
           (int)index] = auVar164._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        pmVar138 = (material_t *)(ulonglong)((int)pmVar138 + 1);
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("RADD");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 3;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.08;
    materials_list[index].base_cost = 12.0;
    materials_list[index].genome_size = 8.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 10.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f3e76c93f6f9db2;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d8d4fdf;
    materials_list[index].texture_type = 1;
    materials_list[index].physics_update_fn = cell_radiant;
    iVar50 = get_icon_coords(0x21);
    rVar85._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar85._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar85;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x21);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar152 = vandps_avx(ZEXT416((uint)fVar146),___xmm_7fffffff7fffffff7fffffff7fffffff);
        index = 0;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar164 = vandps_avx(ZEXT416((uint)fVar314),___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar171 = vmaxss_avx(auVar152,auVar164);
          auVar164 = vminss_avx(auVar164,auVar152);
          fVar237 = auVar164._0_4_ * 0.9238795 + auVar171._0_4_ * -0.38268346 + 0.0;
          if (0.0 < fVar237) {
            auVar171 = ZEXT416((uint)(auVar171._0_4_ + (fVar237 + fVar237) * 0.38268346));
            auVar164 = ZEXT416((uint)(auVar164._0_4_ + (fVar237 + fVar237) * -0.9238795));
          }
          auVar189 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
          auVar181 = vsqrtss_avx(auVar189,auVar189);
          auVar189 = vmovsldup_avx(auVar171);
          auVar205 = vmovsldup_avx(auVar164);
          auVar412._0_4_ = auVar205._0_4_ * 0.9678225 + auVar189._0_4_ * -0.25163385 + 0.0;
          auVar412._4_4_ = auVar205._4_4_ * -0.99034166 + auVar189._4_4_ * 0.13864784 + 0.0;
          auVar412._8_4_ = auVar205._8_4_ * 0.0 + auVar189._8_4_ * 0.0 + 0.0;
          auVar412._12_4_ = auVar205._12_4_ * 0.0 + auVar189._12_4_ * 0.0 + 0.0;
          auVar189 = vmovshdup_avx(auVar412);
          auVar189 = vmaxss_avx(auVar412,auVar189);
          auVar189 = vminss_avx(auVar189,ZEXT416((uint)(auVar164._0_4_ * 0.9928768 +
                                                       auVar171._0_4_ * -0.119145215 + 0.0)));
          auVar164 = vmaxss_avx(ZEXT416((uint)(auVar164._0_4_ * 0.70710677 +
                                              (auVar171._0_4_ + -0.85) * 0.70710677 + 0.0)),auVar189
                               );
          auVar164 = vminss_avx(auVar164,ZEXT416((uint)(auVar181._0_4_ + -0.4)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("STAY");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 2;
    materials_list[index].drop_weight = 0.01;
    materials_list[index].base_cost = 20.0;
    materials_list[index].genome_size = 16.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f68b4393f1a5e35;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f800000;
    materials_list[index].texture_type = 1;
    materials_list[index].physics_update_fn = cell_stasis;
    iVar50 = get_icon_coords(0x22);
    rVar86._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar86._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar86;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x22);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      pmVar138 = (material_t *)(ulonglong)(uint)(iVar50.field0_0x0._4_4_ + iVar133);
      auVar498 = ZEXT1264(ZEXT812(0));
      auVar541 = ZEXT1664(CONCAT412(0xbf800000,CONCAT48(0xbf800000,0xbf800000bf800000)));
      auVar481 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
      auVar569 = ZEXT464(0xc0600000);
      auVar436 = ZEXT464(0xbdcccccd);
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar413._8_4_ = 0x7fffffff;
        auVar413._0_8_ = 0x7fffffff7fffffff;
        auVar413._12_4_ = 0x7fffffff;
        auVar152 = vandps_avx(ZEXT416((uint)fVar146),auVar413);
        fVar314 = auVar152._0_4_ + -0.5;
        auVar164 = vandps_avx(ZEXT416((uint)fVar314),auVar413);
        fVar237 = auVar152._0_4_ + -0.05;
        fVar460 = ((fVar237 + -0.14285715) * 0.2857143) / 3.0;
        auVar152 = vminss_avx(SUB6416(ZEXT464(0x3d4ccccd),0),auVar164);
        fVar144 = auVar164._0_4_;
        fVar533 = fVar144 - auVar152._0_4_;
        auVar152 = vsqrtss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)fVar460));
        index = 0;
        do {
          auVar164 = vandps_avx(ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 + -1.0)),
                                auVar413);
          auVar532 = ZEXT1664(auVar164);
          fVar310 = auVar164._0_4_;
          if ((0.05 <= fVar144) || (0.4 <= fVar310)) {
            auVar164 = vminss_avx(SUB6416(ZEXT464(0x3ecccccd),0),auVar164);
            fVar308 = fVar310 - auVar164._0_4_;
            auVar413._8_4_ = 0x7fffffff;
            auVar413._0_8_ = 0x7fffffff7fffffff;
            auVar413._12_4_ = 0x7fffffff;
            auVar164 = ZEXT416((uint)(fVar533 * fVar533 + auVar498._0_4_ + fVar308 * fVar308));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar308 = auVar164._0_4_;
          }
          else {
            auVar164 = vmaxss_avx(ZEXT416((uint)(fVar310 + -0.4)),ZEXT416((uint)(fVar144 + -0.05)));
            fVar308 = auVar164._0_4_;
          }
          fVar310 = fVar310 * 0.020408165;
          fVar311 = fVar310 * fVar310 + fVar460 * fVar460 * -fVar460;
          auVar164 = vandps_avx(ZEXT416((uint)fVar311),auVar413);
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar560 = ZEXT1664(auVar164);
          if (fVar311 <= auVar498._0_4_) {
            dVar150 = atan2((double)auVar164._0_4_,(double)fVar310);
            auVar192._0_8_ = dVar150 / 3.0;
            auVar192._8_8_ = extraout_var_36._0_8_;
            auVar560 = ZEXT1664(CONCAT124(auVar192._4_12_,(float)auVar192._0_8_));
            cosf();
            fVar312 = auVar532._0_4_;
            auVar607 = ZEXT1664(auVar560._0_16_);
            fVar310 = auVar560._0_4_;
            fVar311 = auVar152._0_4_;
            if (fVar460 < auVar498._0_4_) {
              fVar311 = sqrtf(fVar460);
              fVar312 = auVar532._0_4_;
              fVar310 = auVar607._0_4_;
            }
            fVar311 = (fVar310 + fVar310) * fVar311;
            auVar610._8_4_ = 0x7fffffff;
            auVar610._0_8_ = 0x7fffffff7fffffff;
            auVar610._12_4_ = 0x7fffffff;
          }
          else {
            auVar552 = ZEXT1664(auVar413);
            fVar311 = auVar164._0_4_ + fVar310;
            auVar498 = ZEXT1664(auVar436._0_16_);
            auVar436 = ZEXT1664(auVar569._0_16_);
            auVar569 = ZEXT1664(auVar481._0_16_);
            auVar481 = ZEXT1664(auVar541._0_16_);
            powf();
            auVar164 = vandps_avx(auVar552._0_16_,ZEXT416((uint)(fVar310 - auVar560._0_4_)));
            auVar607 = ZEXT1664(auVar164);
            auVar541 = ZEXT1664(auVar481._0_16_);
            auVar481 = ZEXT1664(auVar569._0_16_);
            auVar569 = ZEXT1664(auVar436._0_16_);
            auVar436 = ZEXT1664(auVar498._0_16_);
            auVar498 = ZEXT1264(ZEXT812(0));
            powf();
            auVar610 = auVar552._0_16_;
            fVar312 = auVar532._0_4_;
            auVar171 = ZEXT416((uint)(auVar560._0_4_ - fVar310));
            auVar164 = vcmpss_avx(auVar498._0_16_,auVar171,1);
            auVar164 = vblendvps_avx(auVar541._0_16_,auVar481._0_16_,auVar164);
            auVar171 = vcmpss_avx(auVar498._0_16_,auVar171,4);
            auVar164 = vandps_avx(auVar171,auVar164);
            fVar311 = fVar311 - auVar607._0_4_ * auVar164._0_4_;
          }
          fVar313 = fVar312 - fVar311;
          fVar310 = fVar311 * auVar569._0_4_ * fVar311 + fVar237;
          auVar164 = ZEXT416((uint)(fVar310 * fVar310 + auVar498._0_4_ + fVar313 * fVar313));
          auVar189 = vsqrtss_avx(auVar164,auVar164);
          auVar205 = auVar498._0_16_;
          auVar164 = vcmpss_avx(auVar205,ZEXT416((uint)fVar313),1);
          auVar164 = vblendvps_avx(auVar541._0_16_,auVar481._0_16_,auVar164);
          auVar171 = vcmpss_avx(auVar205,ZEXT416((uint)fVar313),4);
          auVar164 = vandps_avx(auVar171,auVar164);
          fVar311 = auVar164._0_4_ * auVar189._0_4_;
          fVar310 = fVar312 + auVar436._0_4_;
          auVar164 = vandps_avx(auVar610,ZEXT416((uint)(fVar311 - fVar310)));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar205);
          auVar171 = vminss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar310));
          auVar164 = vmaxss_avx(ZEXT416((uint)(auVar171._0_4_ +
                                              (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.1)),
                                ZEXT416((uint)fVar314));
          auVar171 = vmaxss_avx(ZEXT416((uint)(auVar164._0_4_ + 0.06)),
                                ZEXT416((uint)(fVar146 + -0.3)));
          if (fVar146 < auVar498._0_4_) {
            auVar189 = vminss_avx(ZEXT416((uint)((fVar312 + fVar146) * 0.70710677 + 0.15)),
                                  ZEXT416((uint)(fVar312 + -0.04)));
            auVar171 = vmaxss_avx(auVar171,auVar189);
          }
          auVar413._8_4_ = 0x7fffffff;
          auVar413._0_8_ = 0x7fffffff7fffffff;
          auVar413._12_4_ = 0x7fffffff;
          auVar164 = vandps_avx(auVar164,auVar413);
          auVar164 = vminss_avx(ZEXT416((uint)(auVar164._0_4_ + -0.05)),auVar171);
          auVar164 = vminss_avx(ZEXT416((uint)(fVar308 + -0.05)),auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (int)pmVar138 + iVar50.field0_0x0._0_4_ +
           (int)index] = auVar164._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        pmVar138 = (material_t *)(ulonglong)((int)pmVar138 + 1);
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("FEEL");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 20.0;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 1;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e4ccccd3f4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ecccccd;
    materials_list[index].electric_update_fn = cell_contact_sensor;
    iVar50 = get_icon_coords(0x23);
    rVar87._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar87._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar87;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x23);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      pmVar138 = (material_t *)0x0;
      auVar436 = ZEXT464(0x3f800000);
      auVar481 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        auVar152 = vandps_avx(ZEXT416((uint)fVar146),___xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar237 = 0.05 / (auVar152._0_4_ + 0.5);
        auVar152 = vminss_avx(auVar436._0_16_,ZEXT416((uint)((0.8 - fVar146) + (0.8 - fVar146))));
        auVar152 = vmaxss_avx(auVar481._0_16_,auVar152);
        fVar533 = auVar152._0_4_;
        fVar314 = fVar146 * 15.0 + -0.9;
        uVar143 = 0;
        do {
          fVar144 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar460 = fVar314;
          fVar310 = fVar314;
          sinf();
          cosf();
          fVar460 = fVar310 * fVar237 * fVar237 * -20.0 + fVar237 * fVar460 * 7.5;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar144 - fVar237 * fVar310)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar164 = ZEXT416((uint)(auVar436._0_4_ + fVar460 * fVar460));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.03 - fVar146)),
                                ZEXT416((uint)(auVar152._0_4_ / auVar164._0_4_ +
                                              (2.0 - fVar146) * -0.05 *
                                              (3.0 - (fVar533 + fVar533)) * fVar533 * fVar533)));
          fVar460 = 0.0;
          fVar310 = 0.05;
          fVar308 = 0.0;
          fVar311 = -0.12;
          do {
            fVar312 = fVar460 * 65536.0;
            auVar264._0_4_ = (float)(1e+32 - (double)fVar312);
            auVar264._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar312) >> 0x20);
            auVar264._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar312),auVar481._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar312),auVar264,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar312 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar313 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            fVar542 = auVar481._0_4_;
            auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar542 + fVar312 * fVar312));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar309 = auVar436._0_4_ / auVar164._0_4_;
            fVar312 = fVar308 + fVar312 * fVar309 * 0.14;
            fVar313 = fVar311 + fVar313 * fVar309 * 0.14;
            fVar309 = fVar313 * fVar313 + fVar542 + fVar312 * fVar312;
            fVar589 = fVar310 + -0.010000001;
            if (fVar309 < 0.0144) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar309),ZEXT416((uint)fVar309));
              fVar309 = auVar436._0_4_ / auVar164._0_4_;
              fVar312 = fVar312 * fVar309 * 0.12;
              fVar313 = fVar313 * fVar309 * 0.12;
            }
            auVar481 = ZEXT464((uint)fVar313);
            fVar598 = fVar312 - fVar308;
            fVar543 = fVar313 - fVar311;
            auVar164 = ZEXT416((uint)(fVar543 * fVar543 + fVar542 + fVar598 * fVar598));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar436 = ZEXT1664(auVar164);
            fVar147 = auVar164._0_4_;
            fVar499 = fVar589 - fVar310;
            fVar309 = fVar499 * fVar499;
            fVar315 = fVar147 * fVar147 - fVar309;
            if (fVar315 < fVar542) {
              fVar315 = sqrtf(fVar315);
              fVar542 = auVar481._0_4_;
              fVar147 = auVar436._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar315),ZEXT416((uint)fVar315));
              fVar315 = auVar164._0_4_;
              fVar542 = fVar313;
            }
            fVar598 = fVar598 * (1.0 / fVar147);
            fVar543 = fVar543 * (1.0 / fVar147);
            fVar147 = (fVar144 - fVar308) * fVar598 + (fVar146 - fVar311) * fVar543;
            fVar598 = (fVar146 - fVar311) * fVar598 - (fVar144 - fVar308) * fVar543;
            auVar164 = vandps_avx(ZEXT416((uint)fVar598),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar436 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
            auVar481 = ZEXT864(0);
            auVar171 = ZEXT416((uint)(fVar309 + fVar315 * fVar315 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar308 = 1.0 / auVar171._0_4_;
            fVar311 = fVar315 * fVar308;
            fVar499 = fVar499 * fVar308;
            fVar308 = auVar164._0_4_ * fVar499 + fVar147 * fVar311 + 0.0;
            if (fVar308 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar598 * fVar598 + fVar147 * fVar147 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar308 = auVar164._0_4_;
LAB_14012bd94:
              fVar308 = fVar308 - fVar310;
            }
            else {
              if (fVar308 < fVar315) {
                fVar308 = auVar164._0_4_ * fVar311 + fVar147 * -fVar499 + 0.0;
                goto LAB_14012bd94;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar542) * (fVar146 - fVar542) +
                                       (fVar144 - fVar312) * (fVar144 - fVar312) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar308 = auVar164._0_4_ - fVar589;
            }
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)fVar308));
            fVar460 = fVar460 + 0.2;
            fVar310 = fVar589;
            fVar308 = fVar312;
            fVar311 = fVar313;
          } while (fVar460 < 1.0);
          auVar164 = ZEXT416((uint)(fVar146 * fVar146 + fVar144 * fVar144 + 0.0));
          auVar171 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar171._0_4_ + -0.12)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.05)));
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(0.07 - auVar171._0_4_)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           iVar50.field0_0x0._0_4_ + (int)uVar143] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
      unaff_R13 = 0;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("PROX");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 20.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3dac08313f69ba5e;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d03126f;
    materials_list[index].electric_update_fn = cell_proximity_sensor;
    iVar50 = get_icon_coords(0x24);
    rVar88._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar88._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar88;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x24);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      pmVar138 = (material_t *)0x0;
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar349._8_4_ = 0x7fffffff;
          auVar349._0_8_ = 0x7fffffff7fffffff;
          auVar349._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)fVar314),auVar349);
          fVar237 = auVar152._0_4_ + -0.12;
          fVar533 = fVar237 * 0.0 + fVar146 + -0.5;
          fVar460 = (fVar146 + -0.5) * 0.0 - fVar237;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),auVar349);
          fVar144 = auVar152._0_4_ * 0.09999999 + fVar533 * 0.9949875 + 0.0;
          if (fVar144 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar460 * fVar460 + fVar533 * fVar533 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_;
LAB_14012c3b4:
            fVar533 = fVar533 + -0.05;
          }
          else {
            if (fVar144 < 0.29849625) {
              fVar533 = auVar152._0_4_ * 0.9949875 + fVar533 * -0.09999999 + 0.0;
              goto LAB_14012c3b4;
            }
            auVar152 = ZEXT416((uint)((fVar146 + -0.8) * (fVar146 + -0.8) + fVar237 * fVar237 + 0.0)
                              );
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_ + -0.08;
          }
          auVar152 = ZEXT416((uint)(fVar314 * fVar314 + 0.0 + fVar146 * fVar146));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar144 = 0.0;
          auVar164 = ZEXT416((uint)((fVar146 + -0.3) * (fVar146 + -0.3) + fVar237 * fVar237 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vminss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)(auVar164._0_4_ + -0.08)));
          auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ + -0.12)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          fVar237 = 0.05;
          fVar533 = 0.0;
          fVar460 = -0.12;
          do {
            fVar310 = fVar144 * 65536.0;
            auVar265._0_4_ = (float)(1e+32 - (double)fVar310);
            auVar265._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar310) >> 0x20);
            auVar265._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar310),auVar436._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar310),auVar265,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar310 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar308 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar310 * fVar310 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar311 = 1.0 / auVar164._0_4_;
            fVar310 = fVar533 + fVar310 * fVar311 * 0.120000005;
            fVar308 = fVar460 + fVar308 * fVar311 * 0.120000005;
            fVar311 = fVar308 * fVar308 + fVar310 * fVar310 + 0.0;
            fVar312 = fVar237 + -0.010000001;
            if (fVar311 < 0.040000003) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = 1.0 / auVar164._0_4_;
              fVar310 = fVar310 * fVar311 * 0.2;
              fVar308 = fVar308 * fVar311 * 0.2;
            }
            fVar313 = fVar310 - fVar533;
            fVar309 = fVar308 - fVar460;
            auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar313 * fVar313 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar436 = ZEXT1664(auVar164);
            fVar589 = fVar312 - fVar237;
            auVar481 = ZEXT464((uint)fVar589);
            fVar311 = fVar589 * fVar589;
            fVar598 = auVar164._0_4_;
            fVar542 = fVar598 * fVar598 - fVar311;
            if (fVar542 < 0.0) {
              fVar542 = sqrtf(fVar542);
              fVar589 = auVar481._0_4_;
              fVar598 = auVar436._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar542 = auVar164._0_4_;
            }
            fVar313 = fVar313 * (1.0 / fVar598);
            fVar309 = fVar309 * (1.0 / fVar598);
            fVar598 = (fVar314 - fVar533) * fVar313 + (fVar146 - fVar460) * fVar309;
            fVar313 = (fVar146 - fVar460) * fVar313 - (fVar314 - fVar533) * fVar309;
            auVar164 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar171 = ZEXT416((uint)(fVar311 + fVar542 * fVar542 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar533 = 1.0 / auVar171._0_4_;
            fVar460 = fVar542 * fVar533;
            fVar589 = fVar589 * fVar533;
            fVar533 = auVar164._0_4_ * fVar589 + fVar598 * fVar460 + 0.0;
            auVar436 = ZEXT864(0);
            if (fVar533 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar598 * fVar598 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar533 = auVar164._0_4_;
LAB_14012c494:
              fVar533 = fVar533 - fVar237;
            }
            else {
              if (fVar533 < fVar542) {
                fVar533 = auVar164._0_4_ * fVar460 + fVar598 * -fVar589 + 0.0;
                goto LAB_14012c494;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar308) * (fVar146 - fVar308) +
                                       (fVar314 - fVar310) * (fVar314 - fVar310) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar533 = auVar164._0_4_ - fVar312;
            }
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)fVar533));
            fVar144 = fVar144 + 0.2;
            fVar237 = fVar312;
            fVar533 = fVar310;
            fVar460 = fVar308;
          } while (fVar144 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           iVar50.field0_0x0._0_4_ + (int)uVar143] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
      unaff_R13 = 0;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("GRND");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.2;
    materials_list[index].base_cost = 3.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 10000.0;
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 5.0;
    uVar14 = materials_list[index].heat_conductivity;
    uVar32 = materials_list[index].leak_heat_conductivity;
    auVar193._0_4_ = (float)uVar14 * 10.0;
    auVar193._4_4_ = (float)uVar32 * 10.0;
    auVar193._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar193);
    materials_list[index].heat_conductivity = (float)(int)uVar19;
    materials_list[index].leak_heat_conductivity = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f3333333f000000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f333333;
    iVar50 = get_icon_coords(0x25);
    rVar89._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar89._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar89;
    pmVar138 = materials_list;
  }
  iVar50 = get_icon_coords(0x25);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar481 = ZEXT464(0x40000000);
          fVar237 = 0.0;
          do {
            fVar308 = 1.0;
            fVar144 = fVar237 * 6.2831855;
            fVar310 = fVar144;
            cosf();
            sinf();
            pmVar138 = (material_t *)
                       (CONCAT44((int)((ulonglong)pmVar138 >> 0x20),fVar310 * 0.2) |
                       (ulonglong)(uint)(fVar144 * 0.2) << 0x20);
            fVar533 = fVar237 * 65536.0;
            auVar351._0_4_ = (float)(1e+32 - (double)fVar533);
            auVar351._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar533) >> 0x20);
            auVar351._8_8_ = 0;
            auVar152 = vcmpss_avx(ZEXT416((uint)fVar533),ZEXT816(0),1);
            auVar152 = vblendvps_avx(ZEXT416((uint)fVar533),auVar351,auVar152);
            unaff_R13 = (ulonglong)auVar152._0_4_;
            uVar140 = (uint)unaff_R13 + 0x2f88ed;
            fVar533 = 0.0;
            fVar460 = 0.0;
            do {
              fVar311 = fVar533 * 65536.0;
              auVar266._0_4_ = (float)(1e+32 - (double)fVar311);
              auVar266._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar311) >> 0x20);
              auVar266._8_8_ = 0;
              auVar152 = vcmpss_avx(ZEXT416((uint)fVar311),auVar436._0_16_,1);
              auVar152 = vblendvps_avx(ZEXT416((uint)fVar311),auVar266,auVar152);
              uVar134 = (uint)(longlong)auVar152._0_4_;
              fVar311 = (float)((((uint)(unaff_R13 >> 1) & 0x7fffffff ^ uVar134) * 0x41c64e6d >> 3 ^
                                (uVar134 >> 1 ^ (uint)unaff_R13) * 0x41c64e6d) * 0x41c64e6d) *
                        2.3283064e-10 + -0.5 + fVar310 * 0.3;
              fVar312 = (float)(((uVar134 + 0x2f88ed >> 1 ^ uVar140) * 0x41c64e6d >> 3 ^
                                (uVar134 + 0x2f88ed ^ uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d) *
                        2.3283064e-10 + -0.5 + fVar144 * 0.3;
              fVar598 = auVar436._0_4_;
              auVar152 = ZEXT416((uint)(fVar312 * fVar312 + fVar598 + fVar311 * fVar311));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              fVar313 = fVar308 / auVar152._0_4_;
              fVar589 = SUB84(pmVar138,0);
              fVar542 = (float)((ulonglong)pmVar138 >> 0x20);
              fVar311 = fVar589 + fVar311 * fVar313 * 0.17999999;
              fVar312 = fVar312 * fVar313 * 0.17999999 + fVar542;
              fVar313 = fVar312 * fVar312 + fVar598 + fVar311 * fVar311;
              fVar309 = fVar460 + 0.010000001;
              if (fVar313 < 0.040000003) {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar313),ZEXT416((uint)fVar313));
                fVar308 = fVar308 / auVar152._0_4_;
                fVar311 = fVar311 * fVar308 * 0.2;
                fVar312 = fVar312 * fVar308 * 0.2;
              }
              pmVar138 = (material_t *)CONCAT44(fVar312,fVar311);
              fVar543 = fVar311 - fVar589;
              fVar499 = fVar312 - fVar542;
              auVar152 = ZEXT416((uint)(fVar499 * fVar499 + fVar598 + fVar543 * fVar543));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              auVar436 = ZEXT1664(auVar152);
              fVar598 = fVar309 - fVar460;
              auVar541 = ZEXT464((uint)fVar598);
              fVar313 = fVar598 * fVar598;
              fVar315 = auVar152._0_4_;
              fVar308 = fVar315 * fVar315 - fVar313;
              if (fVar308 < 0.0) {
                fVar147 = sqrtf(fVar308);
                fVar598 = auVar541._0_4_;
                fVar315 = auVar436._0_4_;
              }
              else {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
                fVar147 = auVar152._0_4_;
              }
              fVar543 = fVar543 * (1.0 / fVar315);
              fVar308 = 1.0;
              fVar499 = fVar499 * (1.0 / fVar315);
              fVar315 = (fVar314 - fVar589) * fVar543 + (fVar146 - fVar542) * fVar499;
              fVar542 = (fVar146 - fVar542) * fVar543 - (fVar314 - fVar589) * fVar499;
              auVar152 = vandps_avx(ZEXT416((uint)fVar542),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar164 = ZEXT416((uint)(fVar313 + fVar147 * fVar147 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar313 = 1.0 / auVar164._0_4_;
              fVar589 = fVar147 * fVar313;
              fVar598 = fVar598 * fVar313;
              fVar313 = auVar152._0_4_ * fVar598 + fVar315 * fVar589 + 0.0;
              auVar436 = ZEXT864(0);
              if (fVar313 <= 0.0) {
                auVar152 = ZEXT416((uint)(fVar542 * fVar542 + fVar315 * fVar315 + 0.0));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                auVar152 = ZEXT416((uint)(auVar152._0_4_ - fVar460));
              }
              else if (fVar147 <= fVar313) {
                auVar152 = ZEXT416((uint)((fVar146 - fVar312) * (fVar146 - fVar312) +
                                         (fVar314 - fVar311) * (fVar314 - fVar311) + 0.0));
                auVar152 = vsqrtss_avx(auVar152,auVar152);
                auVar152 = ZEXT416((uint)(auVar152._0_4_ - fVar309));
              }
              else {
                auVar152 = ZEXT416((uint)((auVar152._0_4_ * fVar589 + fVar315 * -fVar598 + 0.0) -
                                         fVar460));
              }
              auVar152 = vminss_avx(ZEXT416(auVar481._0_4_),auVar152);
              auVar481 = ZEXT1664(auVar152);
              fVar533 = fVar533 + 0.2;
              fVar460 = fVar309;
            } while (fVar533 < 1.0);
            fVar237 = fVar237 + 0.1;
          } while (fVar237 < 1.0);
          auVar164 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
          auVar171 = vsqrtss_avx(auVar164,auVar164);
          auVar414._8_4_ = 0x7fffffff;
          auVar414._0_8_ = 0x7fffffff7fffffff;
          auVar414._12_4_ = 0x7fffffff;
          auVar189 = ZEXT416((uint)(auVar171._0_4_ + -0.3));
          auVar164 = vandps_avx(auVar189,auVar414);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.05)));
          auVar164 = vmaxss_avx(auVar152,ZEXT416((uint)(0.25 - auVar171._0_4_)));
          auVar350._0_4_ = (fVar314 - fVar146) / 1.4142135;
          auVar350._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar152 = vandps_avx(auVar350,auVar414);
          auVar152 = vmaxss_avx(auVar189,ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          auVar152 = vminss_avx(auVar164,auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("ONNN");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = 500.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e99999a3ecccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e4ccccd;
    materials_list[index].electric_update_fn = cell_on_switch;
    iVar50 = get_icon_coords(0x26);
    rVar90._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar90._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar90;
  }
  iVar50 = get_icon_coords(0x26);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar481 = ZEXT1264(ZEXT812(0));
          auVar152 = ZEXT416((uint)(fVar314 * fVar314 + 0.0 + fVar146 * fVar146));
          auVar164 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.2)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vminss_avx(ZEXT416((uint)(auVar152._0_4_ + -0.05)),
                                ZEXT416((uint)(auVar164._0_4_ + -0.1)));
          fVar237 = 0.05;
          fVar533 = 0.0;
          fVar144 = -0.2;
          do {
            fVar312 = auVar481._0_4_;
            fVar460 = fVar312 * 65536.0;
            auVar267._0_4_ = (float)(1e+32 - (double)fVar460);
            auVar267._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar460) >> 0x20);
            auVar267._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar460),auVar436._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar460),auVar267,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar460 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar310 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar164 = ZEXT416((uint)(fVar310 * fVar310 + fVar460 * fVar460 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar308 = 1.0 / auVar164._0_4_;
            fVar460 = fVar460 * fVar308 * 0.120000005 + fVar533;
            fVar310 = fVar144 + fVar310 * fVar308 * 0.120000005;
            fVar308 = fVar310 * fVar310 + fVar460 * fVar460 + 0.0;
            fVar311 = fVar237 + -0.010000001;
            if (fVar308 < 0.040000003) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
              fVar308 = 1.0 / auVar164._0_4_;
              fVar460 = fVar460 * fVar308 * 0.2;
              fVar310 = fVar310 * fVar308 * 0.2;
            }
            fVar313 = fVar460 - fVar533;
            fVar309 = fVar310 - fVar144;
            auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar313 * fVar313 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar436 = ZEXT1664(auVar164);
            fVar589 = fVar311 - fVar237;
            fVar308 = fVar589 * fVar589;
            fVar499 = auVar164._0_4_;
            fVar542 = fVar499 * fVar499 - fVar308;
            fVar598 = fVar460;
            fVar543 = fVar310;
            if (fVar542 < 0.0) {
              fVar542 = sqrtf(fVar542);
              fVar499 = auVar436._0_4_;
              fVar312 = auVar481._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar542 = auVar164._0_4_;
            }
            fVar313 = fVar313 * (1.0 / fVar499);
            fVar309 = fVar309 * (1.0 / fVar499);
            fVar499 = (fVar314 - fVar533) * fVar313 + (fVar146 - fVar144) * fVar309;
            fVar313 = (fVar146 - fVar144) * fVar313 - (fVar314 - fVar533) * fVar309;
            auVar164 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar436 = ZEXT1264(ZEXT812(0));
            auVar171 = ZEXT416((uint)(fVar308 + fVar542 * fVar542 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar533 = 1.0 / auVar171._0_4_;
            fVar144 = fVar542 * fVar533;
            fVar589 = fVar589 * fVar533;
            fVar533 = auVar164._0_4_ * fVar589 + fVar499 * fVar144 + 0.0;
            if (fVar533 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar499 * fVar499 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar533 = auVar164._0_4_;
LAB_14012d15a:
              fVar533 = fVar533 - fVar237;
            }
            else {
              if (fVar533 < fVar542) {
                fVar533 = auVar164._0_4_ * fVar144 + fVar499 * -fVar589 + 0.0;
                goto LAB_14012d15a;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar543) * (fVar146 - fVar543) +
                                       (fVar314 - fVar598) * (fVar314 - fVar598) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar533 = auVar164._0_4_ - fVar311;
            }
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)fVar533));
            auVar481 = ZEXT464((uint)(fVar312 + 0.2));
            fVar237 = fVar311;
            fVar533 = fVar460;
            fVar144 = fVar310;
          } while (fVar312 + 0.2 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("CHRG");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].capacitance = 500.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f8000003d591687;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f7c6a7f;
    materials_list[index].light_intensity = 20.0;
    materials_list[index].electric_update_fn = cell_discharge;
    iVar50 = get_icon_coords(0x27);
    rVar91._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar91._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar91;
  }
  iVar50 = get_icon_coords(0x27);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        auVar152 = vandps_avx(ZEXT416((uint)(fVar146 * 10.0)),
                              ___xmm_80000000800000008000000080000000);
        auVar464._8_4_ = 0x3effffff;
        auVar464._0_8_ = 0x3effffff3effffff;
        auVar464._12_4_ = 0x3effffff;
        auVar152 = vorps_avx(auVar152,auVar464);
        auVar152 = ZEXT416((uint)(fVar146 * 10.0 + auVar152._0_4_));
        auVar152 = vroundss_avx(auVar152,auVar152,0xb);
        auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ * -0.1 + fVar146)),
                              ___xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar152 = vmaxss_avx(ZEXT416((uint)(fVar146 + -0.1)),ZEXT416((uint)(0.01 - auVar152._0_4_))
                             );
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar237 = 0.0;
          auVar164 = ZEXT416((uint)(fVar314 * fVar314 + 0.0 + fVar146 * fVar146));
          auVar171 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar171._0_4_ + -0.35)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar171 = vmaxss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)(auVar171._0_4_ + -0.28)));
          auVar164 = vminss_avx(ZEXT416((uint)(auVar164._0_4_ + -0.05)),auVar171);
          fVar533 = 0.05;
          fVar144 = 0.0;
          fVar460 = -0.35;
          do {
            fVar310 = fVar237 * 65536.0;
            auVar268._0_4_ = (float)(1e+32 - (double)fVar310);
            auVar268._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar310) >> 0x20);
            auVar268._8_8_ = 0;
            auVar171 = vcmpss_avx(ZEXT416((uint)fVar310),auVar436._0_16_,1);
            auVar171 = vblendvps_avx(ZEXT416((uint)fVar310),auVar268,auVar171);
            uVar140 = (uint)(longlong)auVar171._0_4_;
            fVar310 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar308 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar171 = ZEXT416((uint)(fVar308 * fVar308 + fVar310 * fVar310 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar311 = 1.0 / auVar171._0_4_;
            fVar310 = fVar144 + fVar310 * fVar311 * 0.120000005;
            fVar308 = fVar460 + fVar308 * fVar311 * 0.120000005;
            fVar311 = fVar308 * fVar308 + fVar310 * fVar310 + 0.0;
            fVar312 = fVar533 + -0.010000001;
            if (fVar311 < 0.040000003) {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = 1.0 / auVar171._0_4_;
              fVar310 = fVar310 * fVar311 * 0.2;
              fVar308 = fVar308 * fVar311 * 0.2;
            }
            fVar313 = fVar310 - fVar144;
            fVar309 = fVar308 - fVar460;
            auVar171 = ZEXT416((uint)(fVar309 * fVar309 + fVar313 * fVar313 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar436 = ZEXT1664(auVar171);
            fVar589 = fVar312 - fVar533;
            auVar481 = ZEXT464((uint)fVar589);
            fVar311 = fVar589 * fVar589;
            fVar499 = auVar171._0_4_;
            fVar542 = fVar499 * fVar499 - fVar311;
            fVar598 = fVar310;
            fVar543 = fVar308;
            if (fVar542 < 0.0) {
              fVar542 = sqrtf(fVar542);
              fVar589 = auVar481._0_4_;
              fVar499 = auVar436._0_4_;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar542 = auVar171._0_4_;
            }
            fVar313 = fVar313 * (1.0 / fVar499);
            fVar309 = fVar309 * (1.0 / fVar499);
            fVar499 = (fVar314 - fVar144) * fVar313 + (fVar146 - fVar460) * fVar309;
            fVar313 = (fVar146 - fVar460) * fVar313 - (fVar314 - fVar144) * fVar309;
            auVar171 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar189 = ZEXT416((uint)(fVar311 + fVar542 * fVar542 + 0.0));
            auVar189 = vsqrtss_avx(auVar189,auVar189);
            fVar144 = 1.0 / auVar189._0_4_;
            fVar460 = fVar542 * fVar144;
            fVar589 = fVar589 * fVar144;
            fVar144 = auVar171._0_4_ * fVar589 + fVar499 * fVar460 + 0.0;
            auVar436 = ZEXT864(0);
            if (fVar144 <= 0.0) {
              auVar171 = ZEXT416((uint)(fVar313 * fVar313 + fVar499 * fVar499 + 0.0));
              auVar171 = vsqrtss_avx(auVar171,auVar171);
              fVar144 = auVar171._0_4_;
LAB_14012d79a:
              fVar144 = fVar144 - fVar533;
            }
            else {
              if (fVar144 < fVar542) {
                fVar144 = auVar171._0_4_ * fVar460 + fVar499 * -fVar589 + 0.0;
                goto LAB_14012d79a;
              }
              auVar171 = ZEXT416((uint)((fVar146 - fVar543) * (fVar146 - fVar543) +
                                       (fVar314 - fVar598) * (fVar314 - fVar598) + 0.0));
              auVar171 = vsqrtss_avx(auVar171,auVar171);
              fVar144 = auVar171._0_4_ - fVar312;
            }
            auVar164 = vminss_avx(ZEXT416(auVar164._0_4_),ZEXT416((uint)fVar144));
            fVar237 = fVar237 + 0.2;
            fVar533 = fVar312;
            fVar144 = fVar310;
            fVar460 = fVar308;
          } while (fVar237 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar164._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("BATT");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = 500.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e8f5c293d1fbe77;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f3d70a4;
    materials_list[index].electric_update_fn = cell_always_on;
    iVar50 = get_icon_coords(0x28);
    rVar92._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar92._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar92;
  }
  iVar50 = get_icon_coords(0x28);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      unaff_R13 = 0;
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        pfVar84 = (float *)0x0;
        do {
          uVar140 = (uint)((ulonglong)pfVar84 >> 0x20);
          if ((longlong)uVar143 < 0) {
            uVar140 = (uint)(uVar143 >> 0x21);
          }
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar237 = fVar314 * fVar314 + 0.0;
          fVar533 = fVar314 * 0.0 + fVar146 + 0.15;
          fVar460 = (fVar146 + 0.15) * 0.0 - fVar314;
          auVar490._8_4_ = 0x7fffffff;
          auVar490._0_8_ = 0x7fffffff7fffffff;
          auVar490._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),auVar490);
          fVar144 = auVar152._0_4_ * 0.0 + fVar533 + 0.0;
          auVar164 = ZEXT416((uint)(fVar237 + fVar146 * fVar146));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.3)),auVar490);
          if (fVar144 <= 0.0) {
            fVar237 = fVar533 * fVar533 + 0.0;
            fVar460 = fVar460 * fVar460;
LAB_14012ddcd:
            auVar152 = vsqrtss_avx(ZEXT416((uint)(fVar460 + fVar237)),
                                   ZEXT416((uint)(fVar460 + fVar237)));
            fVar237 = auVar152._0_4_;
          }
          else {
            if (0.3 <= fVar144) {
              fVar460 = (fVar146 + -0.15) * (fVar146 + -0.15);
              goto LAB_14012ddcd;
            }
            fVar237 = auVar152._0_4_ + fVar533 * -0.0 + 0.0;
          }
          fVar310 = (float)(uVar140 | (uint)fVar146);
          fVar533 = fVar310 * 0.0 + fVar314 + 0.15;
          fVar460 = (fVar314 + 0.15) * 0.0 - fVar310;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar144 = auVar152._0_4_ * 0.0 + fVar533 + 0.0;
          if (fVar144 <= 0.0) {
            fVar310 = fVar533 * fVar533;
            fVar460 = fVar460 * fVar460;
LAB_14012de74:
            auVar152 = ZEXT416((uint)(fVar460 + fVar310 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_;
          }
          else {
            if (0.3 <= fVar144) {
              fVar310 = fVar310 * fVar310;
              fVar460 = (fVar314 + -0.15) * (fVar314 + -0.15);
              goto LAB_14012de74;
            }
            fVar533 = auVar152._0_4_ + fVar533 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(ZEXT416((uint)(auVar164._0_4_ + -0.05)),
                                ZEXT416((uint)(fVar237 + -0.07)));
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(fVar533 + -0.07)));
          fVar237 = 0.0;
          fVar533 = 0.05;
          fVar144 = 0.0;
          fVar460 = -0.3;
          do {
            fVar310 = fVar237 * 65536.0;
            auVar269._0_4_ = (float)(1e+32 - (double)fVar310);
            auVar269._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar310) >> 0x20);
            auVar269._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar310),auVar436._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar310),auVar269,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar310 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar308 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar310 * fVar310 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar311 = 1.0 / auVar164._0_4_;
            fVar310 = fVar310 * fVar311 * 0.120000005 + fVar144;
            fVar308 = fVar460 + fVar308 * fVar311 * 0.120000005;
            fVar311 = fVar308 * fVar308 + fVar310 * fVar310 + 0.0;
            fVar312 = fVar533 + -0.010000001;
            if (fVar311 < 0.040000003) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = 1.0 / auVar164._0_4_;
              fVar310 = fVar310 * fVar311 * 0.2;
              fVar308 = fVar308 * fVar311 * 0.2;
            }
            fVar313 = fVar310 - fVar144;
            fVar309 = fVar308 - fVar460;
            auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar313 * fVar313 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar436 = ZEXT1664(auVar164);
            fVar589 = fVar312 - fVar533;
            fVar311 = fVar589 * fVar589;
            fVar543 = auVar164._0_4_;
            fVar542 = fVar543 * fVar543 - fVar311;
            fVar598 = fVar308;
            if (fVar542 < 0.0) {
              fVar542 = sqrtf(fVar542);
              fVar543 = auVar436._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar542 = auVar164._0_4_;
            }
            pfVar84 = icon_atlas;
            fVar313 = fVar313 * (1.0 / fVar543);
            fVar309 = fVar309 * (1.0 / fVar543);
            fVar543 = (fVar314 - fVar144) * fVar313 + (fVar146 - fVar460) * fVar309;
            fVar313 = (fVar146 - fVar460) * fVar313 - (fVar314 - fVar144) * fVar309;
            auVar164 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar436 = ZEXT1264(ZEXT812(0));
            auVar171 = ZEXT416((uint)(fVar311 + fVar542 * fVar542 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar144 = 1.0 / auVar171._0_4_;
            fVar460 = fVar542 * fVar144;
            fVar589 = fVar589 * fVar144;
            fVar144 = auVar164._0_4_ * fVar589 + fVar543 * fVar460 + 0.0;
            if (fVar144 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar543 * fVar543 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar144 = auVar164._0_4_;
LAB_14012deca:
              fVar144 = fVar144 - fVar533;
            }
            else {
              if (fVar144 < fVar542) {
                fVar144 = auVar164._0_4_ * fVar460 + fVar543 * -fVar589 + 0.0;
                goto LAB_14012deca;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar598) * (fVar146 - fVar598) +
                                       (fVar314 - fVar310) * (fVar314 - fVar310) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar144 = auVar164._0_4_ - fVar312;
            }
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)fVar144));
            fVar237 = fVar237 + 0.2;
            fVar533 = fVar312;
            fVar144 = fVar310;
            fVar460 = fVar308;
          } while (fVar237 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           iVar50.field0_0x0._0_4_ + (int)uVar143] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("NBAT");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 2;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = 500.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f1168733f7cac08;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d8d4fdf;
    materials_list[index].electric_update_fn = cell_always_negative;
    iVar50 = get_icon_coords(0x29);
    rVar93._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar93._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar93;
  }
  iVar50 = get_icon_coords(0x29);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        unaff_R13 = 0;
        uVar143 = 0;
        pfVar84 = (float *)0x0;
        do {
          uVar140 = (uint)((ulonglong)pfVar84 >> 0x20);
          if ((longlong)uVar143 < 0) {
            uVar140 = (uint)(uVar143 >> 0x21);
          }
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar460 = (float)(uVar140 | (uint)fVar146);
          fVar237 = fVar460 * 0.0 + fVar314 + 0.15;
          fVar144 = (fVar314 + 0.15) * 0.0 - fVar460;
          auVar514._8_4_ = 0x7fffffff;
          auVar514._0_8_ = 0x7fffffff7fffffff;
          auVar514._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)fVar144),auVar514);
          fVar533 = auVar152._0_4_ * 0.0 + fVar237 + 0.0;
          auVar164 = ZEXT416((uint)(fVar314 * fVar314 + 0.0 + fVar146 * fVar146));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.3)),auVar514);
          if (fVar533 <= 0.0) {
            fVar460 = fVar237 * fVar237;
            fVar144 = fVar144 * fVar144;
LAB_14012e4e4:
            auVar152 = ZEXT416((uint)(fVar144 + fVar460 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar237 = auVar152._0_4_;
          }
          else {
            if (0.3 <= fVar533) {
              fVar460 = fVar460 * fVar460;
              fVar144 = (fVar314 + -0.15) * (fVar314 + -0.15);
              goto LAB_14012e4e4;
            }
            fVar237 = auVar152._0_4_ + fVar237 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(ZEXT416((uint)(auVar164._0_4_ + -0.05)),
                                ZEXT416((uint)(fVar237 + -0.07)));
          fVar237 = 0.0;
          fVar533 = 0.05;
          fVar144 = 0.0;
          fVar460 = -0.3;
          do {
            fVar310 = fVar237 * 65536.0;
            auVar270._0_4_ = (float)(1e+32 - (double)fVar310);
            auVar270._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar310) >> 0x20);
            auVar270._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar310),auVar436._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar310),auVar270,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar310 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar308 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar310 * fVar310 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar311 = 1.0 / auVar164._0_4_;
            fVar310 = fVar310 * fVar311 * 0.120000005 + fVar144;
            fVar308 = fVar460 + fVar308 * fVar311 * 0.120000005;
            fVar311 = fVar308 * fVar308 + fVar310 * fVar310 + 0.0;
            fVar312 = fVar533 + -0.010000001;
            if (fVar311 < 0.040000003) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = 1.0 / auVar164._0_4_;
              fVar310 = fVar310 * fVar311 * 0.2;
              fVar308 = fVar308 * fVar311 * 0.2;
            }
            fVar313 = fVar310 - fVar144;
            fVar309 = fVar308 - fVar460;
            auVar481 = ZEXT464((uint)fVar309);
            auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar313 * fVar313 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar436 = ZEXT1664(auVar164);
            fVar589 = fVar312 - fVar533;
            fVar311 = fVar589 * fVar589;
            fVar499 = auVar164._0_4_;
            fVar542 = fVar499 * fVar499 - fVar311;
            fVar598 = fVar308;
            fVar543 = fVar310;
            if (fVar542 < 0.0) {
              fVar542 = sqrtf(fVar542);
              fVar309 = auVar481._0_4_;
              fVar499 = auVar436._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar542 = auVar164._0_4_;
            }
            pfVar84 = icon_atlas;
            fVar313 = fVar313 * (1.0 / fVar499);
            fVar309 = fVar309 * (1.0 / fVar499);
            fVar499 = (fVar314 - fVar144) * fVar313 + (fVar146 - fVar460) * fVar309;
            fVar313 = (fVar146 - fVar460) * fVar313 - (fVar314 - fVar144) * fVar309;
            auVar164 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar436 = ZEXT1264(ZEXT812(0));
            auVar171 = ZEXT416((uint)(fVar311 + fVar542 * fVar542 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar144 = 1.0 / auVar171._0_4_;
            fVar460 = fVar542 * fVar144;
            fVar589 = fVar589 * fVar144;
            fVar144 = auVar164._0_4_ * fVar589 + fVar499 * fVar460 + 0.0;
            if (fVar144 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar499 * fVar499 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar144 = auVar164._0_4_;
LAB_14012e53a:
              fVar144 = fVar144 - fVar533;
            }
            else {
              if (fVar144 < fVar542) {
                fVar144 = auVar164._0_4_ * fVar460 + fVar499 * -fVar589 + 0.0;
                goto LAB_14012e53a;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar598) * (fVar146 - fVar598) +
                                       (fVar314 - fVar543) * (fVar314 - fVar543) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar144 = auVar164._0_4_ - fVar312;
            }
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)fVar144));
            fVar237 = fVar237 + 0.2;
            fVar533 = fVar312;
            fVar144 = fVar310;
            fVar460 = fVar308;
          } while (fVar237 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("MDET");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 8.0;
    materials_list[index].genome_size = 6.0;
    materials_list[index].capacitance = 500.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 30.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e99999a3f333333;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e4ccccd;
    materials_list[index].electric_update_fn = cell_minion_detector;
    iVar50 = get_icon_coords(0x2a);
    rVar94._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar94._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar94;
  }
  iVar50 = get_icon_coords(0x2a);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        local_208._4_4_ = 0x80000000;
        local_208._0_4_ = -fVar146;
        local_208._8_4_ = 0x80000000;
        local_208._12_4_ = 0x80000000;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar194._0_4_ = -fVar314;
          auVar194._4_4_ = 0x80000000;
          auVar194._8_4_ = 0x80000000;
          auVar194._12_4_ = 0x80000000;
          auVar152 = vcmpss_avx(ZEXT416((uint)fVar314),auVar194,1);
          auVar152 = vblendvps_avx(ZEXT416((uint)fVar146),local_208,auVar152);
          auVar171 = vmaxss_avx(auVar194,ZEXT416((uint)fVar314));
          auVar352._0_4_ = (auVar171._0_4_ - auVar152._0_4_) / 1.4142135;
          auVar352._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar271._0_4_ = (auVar171._0_4_ + auVar152._0_4_) / 1.4142135;
          auVar271._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar491._8_4_ = 0x7fffffff;
          auVar491._0_8_ = 0x7fffffff7fffffff;
          auVar491._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar352,auVar491);
          auVar164 = vandps_avx(auVar271,auVar491);
          auVar152 = vinsertps_avx(auVar152,auVar352,0x1c);
          auVar189 = vsubps_avx(ZEXT816(0x3e4ccccd3ca3d70a),auVar152);
          auVar152 = vinsertps_avx(ZEXT416((uint)(0.11 - auVar164._0_4_)),auVar352,0x1c);
          auVar189 = vminps_avx(auVar152,auVar189);
          auVar152 = vblendps_avx(auVar189,auVar171,1);
          auVar195._0_4_ = auVar152._0_4_ + -0.35;
          auVar195._4_4_ = auVar152._4_4_ + -0.0;
          auVar195._8_4_ = auVar152._8_4_ + 0.0;
          auVar195._12_4_ = auVar152._12_4_ + 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)(auVar271._0_4_ + -0.09)),auVar491);
          auVar164 = ZEXT416((uint)(0.02 - auVar152._0_4_));
          auVar152 = vinsertps_avx(auVar189,auVar164,0x10);
          auVar152 = vcmpps_avx(auVar152,auVar195,1);
          auVar164 = vinsertps_avx(auVar195,auVar164,0x10);
          auVar152 = vblendvps_avx(auVar189,auVar164,auVar152);
          auVar164 = vmovshdup_avx(auVar152);
          auVar164 = vmaxss_avx(auVar152,auVar164);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar352._0_4_ + -0.18)),auVar491);
          auVar152 = vminss_avx(ZEXT416((uint)(0.02 - auVar152._0_4_)),
                                ZEXT416((uint)(auVar271._0_4_ + -0.11)));
          fVar237 = 0.0;
          auVar171 = ZEXT416((uint)(fVar314 * fVar314 + 0.0 + fVar146 * fVar146));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar152 = vmaxss_avx(auVar164,auVar152);
          auVar164 = vmaxss_avx(ZEXT416((uint)(auVar171._0_4_ + -0.28)),auVar152);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar171._0_4_ + -0.35)),auVar491);
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          fVar533 = 0.05;
          fVar144 = 0.0;
          fVar460 = -0.35;
          do {
            fVar310 = fVar237 * 65536.0;
            auVar272._0_4_ = (float)(1e+32 - (double)fVar310);
            auVar272._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar310) >> 0x20);
            auVar272._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar310),auVar436._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar310),auVar272,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar310 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar308 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar310 * fVar310 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar311 = 1.0 / auVar164._0_4_;
            fVar310 = fVar310 * fVar311 * 0.120000005 + fVar144;
            fVar308 = fVar460 + fVar308 * fVar311 * 0.120000005;
            fVar311 = fVar308 * fVar308 + fVar310 * fVar310 + 0.0;
            fVar312 = fVar533 + -0.010000001;
            if (fVar311 < 0.040000003) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = 1.0 / auVar164._0_4_;
              fVar310 = fVar310 * fVar311 * 0.2;
              fVar308 = fVar308 * fVar311 * 0.2;
            }
            fVar313 = fVar310 - fVar144;
            fVar309 = fVar308 - fVar460;
            auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar313 * fVar313 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar436 = ZEXT1664(auVar164);
            fVar589 = fVar312 - fVar533;
            fVar311 = fVar589 * fVar589;
            fVar543 = auVar164._0_4_;
            fVar542 = fVar543 * fVar543 - fVar311;
            fVar598 = fVar308;
            if (fVar542 < 0.0) {
              fVar542 = sqrtf(fVar542);
              fVar543 = auVar436._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar542 = auVar164._0_4_;
            }
            fVar313 = fVar313 * (1.0 / fVar543);
            fVar309 = fVar309 * (1.0 / fVar543);
            fVar543 = (fVar314 - fVar144) * fVar313 + (fVar146 - fVar460) * fVar309;
            fVar313 = (fVar146 - fVar460) * fVar313 - (fVar314 - fVar144) * fVar309;
            auVar164 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar436 = ZEXT1264(ZEXT812(0));
            auVar171 = ZEXT416((uint)(fVar311 + fVar542 * fVar542 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar144 = 1.0 / auVar171._0_4_;
            fVar460 = fVar542 * fVar144;
            fVar589 = fVar589 * fVar144;
            fVar144 = auVar164._0_4_ * fVar589 + fVar543 * fVar460 + 0.0;
            if (fVar144 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar543 * fVar543 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar144 = auVar164._0_4_;
LAB_14012ebea:
              fVar144 = fVar144 - fVar533;
            }
            else {
              if (fVar144 < fVar542) {
                fVar144 = auVar164._0_4_ * fVar460 + fVar543 * -fVar589 + 0.0;
                goto LAB_14012ebea;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar598) * (fVar146 - fVar598) +
                                       (fVar314 - fVar310) * (fVar314 - fVar310) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar144 = auVar164._0_4_ - fVar312;
            }
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)fVar144));
            fVar237 = fVar237 + 0.2;
            fVar533 = fVar312;
            fVar144 = fVar310;
            fVar460 = fVar308;
          } while (fVar237 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  iVar133 = n_materials;
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    sticky_material_index = iVar133;
    uVar45 = str_to_id("STIK");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 1.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 3;
    materials_list[index].restitution = 0.0;
    materials_list[index].tangent_drag = materials_list[index].tangent_drag + materials_list[index].tangent_drag;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f19999a3e4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e99999a;
    materials_list[index].physics_update_fn = cell_sticky;
    iVar50 = get_icon_coords(0x2b);
    rVar95._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar95._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar95;
  }
  iVar50 = get_icon_coords(0x2b);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar448._0_12_ = ZEXT812(0);
      auVar448._12_4_ = 0;
      auVar465._8_4_ = 0x7fffffff;
      auVar465._0_8_ = 0x7fffffff7fffffff;
      auVar465._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar152 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar146));
        auVar152 = vmaxss_avx(SUB6416(ZEXT464(0xbdcccccd),0),auVar152);
        fVar314 = fVar146 - auVar152._0_4_;
        auVar152 = vinsertps_avx(ZEXT416((uint)fVar146),ZEXT416((uint)(fVar146 + 0.1)),0x10);
        fVar314 = fVar314 * fVar314;
        index = 0;
        do {
          fVar146 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          fVar237 = fVar146 * fVar146 + 0.0;
          auVar164 = vmovsldup_avx(ZEXT416((uint)fVar237));
          auVar273._0_4_ = auVar152._0_4_ * auVar152._0_4_ + auVar164._0_4_;
          auVar273._4_4_ = auVar152._4_4_ * auVar152._4_4_ + auVar164._4_4_;
          auVar273._8_4_ = auVar152._8_4_ * auVar152._8_4_ + auVar164._8_4_;
          auVar273._12_4_ = auVar152._12_4_ * auVar152._12_4_ + auVar164._12_4_;
          auVar171 = vsqrtps_avx(auVar273);
          auVar164 = vmovshdup_avx(auVar171);
          auVar189 = ZEXT416((uint)(fVar314 + fVar237));
          auVar189 = vsqrtss_avx(auVar189,auVar189);
          fVar237 = auVar189._0_4_ + -0.045;
          auVar171 = vminss_avx(ZEXT416((uint)(1.05 - auVar171._0_4_)),
                                ZEXT416((uint)(auVar164._0_4_ + -0.4)));
          auVar164 = vandps_avx(ZEXT416((uint)(auVar171._0_4_ - fVar237)),auVar465);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.25 - auVar164._0_4_)),auVar448);
          auVar171 = vminss_avx(auVar171,ZEXT416((uint)fVar237));
          fVar237 = auVar171._0_4_ + auVar164._0_4_ * auVar164._0_4_ * -0.25 * 4.0;
          auVar164 = ZEXT416((uint)(fVar314 + (fVar146 + -0.25) * (fVar146 + -0.25) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar533 = auVar164._0_4_ + -0.04;
          auVar164 = vandps_avx(ZEXT416((uint)(fVar237 - fVar533)),auVar465);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.2 - auVar164._0_4_)),auVar448);
          auVar171 = vminss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar533));
          fVar237 = auVar171._0_4_ + (auVar164._0_4_ * -0.25 * auVar164._0_4_) / 0.2;
          auVar164 = ZEXT416((uint)(fVar314 + (fVar146 + 0.2) * (fVar146 + 0.2) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar146 = auVar164._0_4_ + -0.04;
          auVar164 = vandps_avx(ZEXT416((uint)(fVar237 - fVar146)),auVar465);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.18 - auVar164._0_4_)),auVar448);
          auVar171 = vminss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar146));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar171._0_4_ + (auVar164._0_4_ * -0.25 * auVar164._0_4_) / 0.18;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("LINK");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 6.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ced91683e48b439;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f800000;
    materials_list[index].physics_update_fn = cell_link;
    iVar50 = get_icon_coords(0x2c);
    rVar96._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar96._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar96;
  }
  iVar50 = get_icon_coords(0x2c);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      do {
        auVar466._8_4_ = 0x7fffffff;
        auVar466._0_8_ = 0x7fffffff7fffffff;
        auVar466._12_4_ = 0x7fffffff;
        auVar152 = vandps_avx(ZEXT416((uint)(((float)(int)uVar81 + 0.5) * 0.015625 + -1.0)),auVar466
                             );
        fVar237 = auVar152._0_4_;
        auVar152 = vandps_avx(ZEXT416((uint)(fVar237 + -0.5)),auVar466);
        fVar146 = auVar152._0_4_ + -0.3;
        fVar314 = auVar152._0_4_ + -0.7;
        index = 0;
        do {
          fVar533 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          fVar144 = fVar237 + -0.2 + fVar533 * 0.0;
          fVar310 = (fVar237 + -0.2) * 0.0 - fVar533;
          auVar152 = vandps_avx(ZEXT416((uint)fVar310),auVar466);
          fVar460 = auVar152._0_4_ * 0.0 + fVar144 + 0.0;
          if (fVar460 <= 0.0) {
            fVar144 = fVar144 * fVar144;
            fVar310 = fVar310 * fVar310;
LAB_14012f58e:
            auVar152 = ZEXT416((uint)(fVar310 + fVar144 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar144 = auVar152._0_4_;
          }
          else {
            if (0.6 <= fVar460) {
              fVar144 = fVar533 * fVar533;
              fVar310 = (fVar237 + -0.8) * (fVar237 + -0.8);
              goto LAB_14012f58e;
            }
            fVar144 = auVar152._0_4_ + fVar144 * -0.0 + 0.0;
          }
          fVar460 = fVar146 + fVar533 * 0.0;
          fVar310 = fVar146 * 0.0 + -fVar533;
          auVar152 = vandps_avx(ZEXT416((uint)fVar310),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar308 = auVar152._0_4_ * 0.0 + fVar460 + 0.0;
          if (fVar308 <= 0.0) {
            fVar533 = fVar460 * fVar460;
            fVar310 = fVar310 * fVar310;
LAB_14012f5fc:
            auVar152 = ZEXT416((uint)(fVar310 + fVar533 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_;
          }
          else {
            if (0.39999998 <= fVar308) {
              fVar533 = fVar533 * fVar533;
              fVar310 = fVar314 * fVar314;
              goto LAB_14012f5fc;
            }
            fVar533 = auVar152._0_4_ + fVar460 * -0.0 + 0.0;
          }
          auVar466._8_4_ = 0x7fffffff;
          auVar466._0_8_ = 0x7fffffff7fffffff;
          auVar466._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar533 + -0.2)),auVar466);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.02 - (fVar144 + -0.1))),
                                ZEXT416((uint)(auVar152._0_4_ + -0.1)));
          auVar152 = vminss_avx(ZEXT416((uint)(fVar144 + -0.1)),auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("SELF");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x12;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 3.0;
    materials_list[index].conductivity = 100.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 0x20;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ef958103e5f3b64;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e083127;
    iVar50 = get_icon_coords(0x2d);
    rVar97._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar97._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar97;
  }
  iVar50 = get_icon_coords(0x2d);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar415._0_12_ = ZEXT812(0);
      auVar415._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + -0.1;
        fVar314 = fVar146 + 0.15;
        fVar237 = fVar146 + 0.12;
        fVar533 = fVar146 + 0.24;
        fVar144 = fVar146 + 0.36;
        index = 0;
        auVar576._8_4_ = 0x7fffffff;
        auVar576._0_8_ = 0x7fffffff7fffffff;
        auVar576._12_4_ = 0x7fffffff;
        do {
          auVar152 = vandps_avx(auVar576,ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 +
                                                       -1.0)));
          fVar312 = auVar152._0_4_;
          fVar460 = fVar312 + -0.75;
          fVar310 = fVar460 + fVar314 * 0.0;
          fVar311 = fVar314 - fVar460 * 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar311),auVar576);
          fVar308 = auVar152._0_4_ * -0.19999999 + fVar310 * 0.9797959 + 0.0;
          if (fVar308 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar311 * fVar311 + fVar310 * fVar310 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar310 = auVar152._0_4_;
LAB_14012f996:
            fVar310 = fVar310 + -0.25;
          }
          else {
            if (fVar308 < 0.24494897) {
              fVar310 = auVar152._0_4_ * 0.9797959 + fVar310 * 0.19999999 + 0.0;
              goto LAB_14012f996;
            }
            auVar152 = ZEXT416((uint)(fVar314 * fVar314 + (fVar312 + -1.0) * (fVar312 + -1.0) + 0.0)
                              );
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar310 = auVar152._0_4_ + -0.2;
          }
          fVar308 = fVar312 + -0.08 + fVar146 * 0.0;
          fVar313 = fVar146 - (fVar312 + -0.08) * 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar311 = auVar152._0_4_ * 0.0 + fVar308;
          if (fVar311 <= 0.0) {
            fVar460 = fVar308 * fVar308;
            fVar313 = fVar313 * fVar313;
LAB_14012fa3e:
            auVar152 = ZEXT416((uint)(fVar313 + fVar460 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar460 = auVar152._0_4_;
          }
          else {
            if (0.67 <= fVar311) {
              fVar460 = fVar460 * fVar460;
              fVar313 = fVar146 * fVar146;
              goto LAB_14012fa3e;
            }
            fVar460 = auVar152._0_4_ + fVar308 * -0.0 + 0.0;
          }
          auVar577._8_4_ = 0x7fffffff;
          auVar577._0_8_ = 0x7fffffff7fffffff;
          auVar577._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar577,ZEXT416((uint)(fVar310 - (fVar460 + -0.1))));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar415);
          fVar308 = fVar312 + -0.4;
          fVar311 = fVar308 + fVar237 * 0.0;
          fVar309 = fVar237 - fVar308 * 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar309),auVar577);
          fVar313 = auVar152._0_4_ * 0.0 + fVar311;
          if (fVar313 <= 0.0) {
            fVar311 = fVar311 * fVar311;
            fVar309 = fVar309 * fVar309;
LAB_14012faea:
            auVar152 = ZEXT416((uint)(fVar309 + fVar311 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar311 = auVar152._0_4_;
          }
          else {
            if (0.32000002 <= fVar313) {
              fVar311 = (fVar312 + -0.72) * (fVar312 + -0.72);
              fVar309 = fVar237 * fVar237;
              goto LAB_14012faea;
            }
            fVar311 = auVar152._0_4_ + fVar311 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(ZEXT416((uint)fVar310),ZEXT416((uint)(fVar460 + -0.1)));
          fVar460 = auVar152._0_4_ + (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.1;
          auVar578._8_4_ = 0x7fffffff;
          auVar578._0_8_ = 0x7fffffff7fffffff;
          auVar578._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar578,ZEXT416((uint)(fVar460 - (fVar311 + -0.1))));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar415);
          fVar310 = fVar312 + -0.42 + fVar533 * 0.0;
          fVar309 = fVar533 - (fVar312 + -0.42) * 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar309),auVar578);
          fVar313 = auVar152._0_4_ * 0.0 + fVar310;
          if (fVar313 <= 0.0) {
            fVar310 = fVar310 * fVar310;
            fVar309 = fVar309 * fVar309;
LAB_14012fbaa:
            auVar152 = ZEXT416((uint)(fVar309 + fVar310 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar310 = auVar152._0_4_;
          }
          else {
            if (0.28 <= fVar313) {
              fVar310 = (fVar312 + -0.7) * (fVar312 + -0.7);
              fVar309 = fVar533 * fVar533;
              goto LAB_14012fbaa;
            }
            fVar310 = auVar152._0_4_ + fVar310 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)(fVar311 + -0.1)));
          fVar460 = auVar152._0_4_ + (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.1;
          auVar579._8_4_ = 0x7fffffff;
          auVar579._0_8_ = 0x7fffffff7fffffff;
          auVar579._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar579,ZEXT416((uint)(fVar460 - (fVar310 + -0.1))));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar415);
          fVar311 = fVar312 + -0.45 + fVar144 * 0.0;
          fVar309 = fVar144 - (fVar312 + -0.45) * 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar309),auVar579);
          fVar313 = auVar152._0_4_ * 0.0 + fVar311;
          if (fVar313 <= 0.0) {
            fVar311 = fVar311 * fVar311;
            fVar309 = fVar309 * fVar309;
LAB_14012fc54:
            auVar152 = ZEXT416((uint)(fVar309 + fVar311 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar311 = auVar152._0_4_;
          }
          else {
            if (0.19999999 <= fVar313) {
              fVar311 = (fVar312 + -0.65) * (fVar312 + -0.65);
              fVar309 = fVar144 * fVar144;
              goto LAB_14012fc54;
            }
            fVar311 = auVar152._0_4_ + fVar311 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)(fVar310 + -0.1)));
          fVar460 = auVar152._0_4_ + (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.1;
          auVar547._8_4_ = 0x7fffffff;
          auVar547._0_8_ = 0x7fffffff7fffffff;
          auVar547._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar547,ZEXT416((uint)(fVar460 - (fVar311 + -0.1))));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar415);
          fVar310 = fVar308 * 0.9175557 + (fVar146 + -0.25) * -0.39760748;
          fVar308 = (fVar146 + -0.25) * 0.9175557 + fVar308 * 0.39760748;
          auVar152 = vandps_avx(ZEXT416((uint)fVar308),auVar547);
          fVar313 = auVar152._0_4_ * 0.0 + fVar310 + 0.0;
          if (fVar313 <= 0.0) {
            fVar310 = fVar310 * fVar310;
            fVar308 = fVar308 * fVar308;
LAB_14012fd0d:
            auVar152 = ZEXT416((uint)(fVar308 + fVar310 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar310 = auVar152._0_4_;
          }
          else {
            if (0.32695562 <= fVar313) {
              fVar310 = (fVar312 + -0.7) * (fVar312 + -0.7);
              fVar308 = (fVar146 + -0.12) * (fVar146 + -0.12);
              goto LAB_14012fd0d;
            }
            fVar310 = auVar152._0_4_ + fVar310 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)(fVar311 + -0.1)));
          fVar460 = auVar152._0_4_ + (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.1;
          auVar576._8_4_ = 0x7fffffff;
          auVar576._0_8_ = 0x7fffffff7fffffff;
          auVar576._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar576,ZEXT416((uint)(fVar460 - (fVar310 + -0.1))));
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar415);
          auVar164 = vminss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)(fVar310 + -0.1)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_ + (auVar152._0_4_ * -0.25 * auVar152._0_4_) / 0.1;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("GATE");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x12;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].max_health = 4.0;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 3.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f0000003f4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f000000;
    materials_list[index].electric_update_fn = cell_gate;
    iVar50 = get_icon_coords(0x2e);
    rVar98._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar98._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar98;
  }
  iVar50 = get_icon_coords(0x2e);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar274._0_12_ = ZEXT812(0);
      auVar274._12_4_ = 0;
      auVar449._8_4_ = 0x7fffffff;
      auVar449._0_8_ = 0x7fffffff7fffffff;
      auVar449._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar152 = vmovsldup_avx(ZEXT416((uint)fVar146));
        index = 0;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar164 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
          auVar171 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vinsertps_avx(ZEXT416((uint)(fVar146 + fVar314)),
                                   ZEXT416((uint)(fVar314 - fVar146)),0x10);
          auVar164 = vdivps_avx(auVar164,___xmm_00000000000000003fb504f33fb504f3);
          auVar164 = vandps_avx(auVar164,auVar449);
          auVar196._0_4_ = auVar164._0_4_ + -0.03;
          auVar196._4_4_ = auVar164._4_4_ + -0.03;
          auVar196._8_4_ = auVar164._8_4_ + 0.0;
          auVar196._12_4_ = auVar164._12_4_ + 0.0;
          auVar171 = ZEXT416((uint)(auVar171._0_4_ + -0.7));
          auVar164 = vmovsldup_avx(auVar171);
          auVar164 = vcmpps_avx(auVar196,auVar164,1);
          auVar164 = vshufps_avx(auVar164,auVar164,0x50);
          uVar140 = vmovmskpd_avx(auVar164);
          auVar164 = auVar171;
          if ((uVar140 & 2) == 0) {
            auVar164 = vmovshdup_avx(auVar196);
          }
          if ((uVar140 & 1) == 0) {
            auVar171 = auVar196;
          }
          auVar164 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),auVar164);
          auVar171 = vminss_avx(auVar164,auVar171);
          auVar164 = vmovsldup_avx(ZEXT416((uint)fVar314));
          fVar314 = auVar164._0_4_ + 0.3;
          fVar237 = auVar164._4_4_ + -0.3;
          fVar533 = auVar164._8_4_ + 0.0;
          fVar144 = auVar164._12_4_ + 0.0;
          auVar353._0_4_ = auVar152._0_4_ * auVar152._0_4_ + fVar314 * fVar314 + 0.0;
          auVar353._4_4_ = auVar152._4_4_ * auVar152._4_4_ + fVar237 * fVar237 + 0.0;
          auVar353._8_4_ = auVar152._8_4_ * auVar152._8_4_ + fVar533 * fVar533 + 0.0;
          auVar353._12_4_ = auVar152._12_4_ * auVar152._12_4_ + fVar144 * fVar144 + 0.0;
          auVar164 = vsqrtps_avx(auVar353);
          auVar354._0_4_ = auVar164._0_4_ + -0.35;
          auVar354._4_4_ = auVar164._4_4_ + -0.35;
          auVar354._8_4_ = auVar164._8_4_ + -0.35;
          auVar354._12_4_ = auVar164._12_4_ + -0.35;
          auVar189 = vmovshdup_avx(auVar354);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar354._0_4_ - auVar189._0_4_)),auVar449);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar164._0_4_)),auVar274);
          auVar189 = vminss_avx(auVar354,auVar189);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar189._0_4_ +
                                              (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.05)),
                                auVar449);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.02 - auVar171._0_4_)),
                                ZEXT416((uint)(auVar164._0_4_ + -0.04)));
          auVar164 = vminss_avx(auVar171,auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("BREK");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x12;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.5;
    materials_list[index].base_cost = 1.0;
    materials_list[index].genome_size = 1.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = materials_list[index].capacitance * 0.1;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 8;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f19999a3f4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f000000;
    materials_list[index].connection_update_fn = cell_breakaway;
    iVar50 = get_icon_coords(0x2f);
    rVar99._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar99._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar99;
  }
  iVar50 = get_icon_coords(0x2f);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar416._8_4_ = 0x7fffffff;
      auVar416._0_8_ = 0x7fffffff7fffffff;
      auVar416._12_4_ = 0x7fffffff;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar558._0_4_ = -fVar146;
        auVar558._4_4_ = 0x80000000;
        auVar558._8_4_ = 0x80000000;
        auVar558._12_4_ = 0x80000000;
        index = 0;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar580._0_4_ = -fVar314;
          auVar580._4_4_ = 0x80000000;
          auVar580._8_4_ = 0x80000000;
          auVar580._12_4_ = 0x80000000;
          auVar152 = vcmpss_avx(ZEXT416((uint)fVar314),auVar580,1);
          auVar152 = vblendvps_avx(ZEXT416((uint)fVar146),auVar558,auVar152);
          auVar171 = vmaxss_avx(auVar580,ZEXT416((uint)fVar314));
          auVar581._0_4_ = (auVar171._0_4_ - auVar152._0_4_) / 1.4142135;
          auVar581._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar592._0_4_ = (auVar171._0_4_ + auVar152._0_4_) / 1.4142135;
          auVar592._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar152 = vandps_avx(auVar581,auVar416);
          auVar164 = vandps_avx(auVar592,auVar416);
          auVar152 = vinsertps_avx(auVar152,auVar581,0x1c);
          auVar189 = vsubps_avx(ZEXT816(0x3e8000003d4ccccd),auVar152);
          auVar152 = vinsertps_avx(ZEXT416((uint)(0.15 - auVar164._0_4_)),auVar581,0x1c);
          auVar189 = vminps_avx(auVar152,auVar189);
          auVar164 = vblendps_avx(auVar189,auVar171,1);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar592._0_4_ + -0.1)),auVar416);
          auVar567._0_4_ = auVar164._0_4_ + -0.35;
          auVar567._4_4_ = auVar164._4_4_ + -0.0;
          auVar567._8_4_ = auVar164._8_4_ + 0.0;
          auVar567._12_4_ = auVar164._12_4_ + 0.0;
          auVar164 = ZEXT416((uint)(0.05 - auVar152._0_4_));
          auVar152 = vinsertps_avx(auVar189,auVar164,0x10);
          auVar152 = vcmpps_avx(auVar152,auVar567,1);
          auVar164 = vinsertps_avx(auVar567,auVar164,0x10);
          auVar152 = vblendvps_avx(auVar189,auVar164,auVar152);
          auVar164 = vmovshdup_avx(auVar152);
          auVar164 = vmaxss_avx(auVar152,auVar164);
          auVar152 = vandps_avx(ZEXT416((uint)(auVar581._0_4_ + -0.2)),auVar416);
          auVar152 = vminss_avx(ZEXT416((uint)(0.05 - auVar152._0_4_)),
                                ZEXT416((uint)(auVar592._0_4_ + -0.05)));
          auVar152 = vmaxss_avx(auVar164,auVar152);
          auVar152 = vmaxss_avx(SUB6416(ZEXT464(0xbff9999a),0),auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("STEM");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x12;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 5.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 1;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = materials_list[index].capacitance * 10.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d23d70a3ee66666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003db851ec;
    materials_list[index].physics_update_fn = cell_stem;
    iVar50 = get_icon_coords(0x30);
    rVar100._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar100._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar100;
  }
  iVar50 = get_icon_coords(0x30);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar152 = ZEXT416((uint)(fVar146 * fVar146 + fVar314 * fVar314 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar436 = ZEXT464((uint)(auVar152._0_4_ + -0.3));
          uVar81 = 0x1cba1fb9;
          fVar237 = 0.0;
          iVar133 = 0xc;
          fVar533 = 0.3;
          do {
            auVar152 = ZEXT416((uint)((fVar146 - fVar237) * (fVar146 - fVar237) +
                                     (fVar314 - fVar533) * (fVar314 - fVar533) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            uVar140 = ((uint)(uVar81 >> 0x10) ^ (uint)uVar81) * 0x7feb352d;
            uVar140 = (uVar140 >> 0xf ^ uVar140) * -0x7b935975;
            uVar81 = (ulonglong)(uVar140 >> 0x10 ^ uVar140);
            auVar152 = vminss_avx(auVar436._0_16_,
                                  ZEXT416((uint)(auVar152._0_4_ -
                                                ((float)uVar81 * 2.3283064e-10 * 0.20000002 + 0.1)))
                                 );
            auVar436 = ZEXT1664(auVar152);
            fVar144 = fVar237 * 0.64156616;
            fVar237 = fVar533 * -0.64156616 + fVar237 * -0.70063746;
            iVar133 = iVar133 + -1;
            fVar533 = fVar533 * -0.70063746 + fVar144;
          } while (iVar133 != 0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("GROW");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x12;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 5.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = materials_list[index].capacitance * 10.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f70a3d73ee66666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003db851ec;
    materials_list[index].physics_update_fn = cell_propagate;
    iVar50 = get_icon_coords(0x31);
    rVar101._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar101._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar101;
  }
  iVar50 = get_icon_coords(0x31);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0 + 0.05;
        auVar417._8_4_ = 0x7fffffff;
        auVar417._0_8_ = 0x7fffffff7fffffff;
        auVar417._12_4_ = 0x7fffffff;
        auVar152 = vandps_avx(ZEXT416((uint)(fVar146 + -0.4)),auVar417);
        fVar314 = fVar146 + -0.23;
        auVar164 = vandps_avx(ZEXT416((uint)(fVar314 + -0.5)),auVar417);
        uVar143 = 0;
        do {
          fVar237 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          iVar133 = -1;
          auVar481 = ZEXT464(0x40000000);
          do {
            fVar311 = 1.0;
            fVar312 = 0.1;
            fVar144 = (float)iVar133;
            fVar533 = fVar144 * 0.47123894;
            fVar308 = fVar533;
            sinf();
            cosf();
            fVar144 = (fVar144 + 5.0) * 65536.0;
            auVar356._0_4_ = (float)(1e+32 - (double)fVar144);
            auVar356._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar144) >> 0x20);
            auVar356._8_8_ = 0;
            auVar536._0_12_ = ZEXT812(0);
            auVar536._12_4_ = 0;
            auVar541 = ZEXT1664(auVar536);
            auVar171 = vcmpss_avx(ZEXT416((uint)fVar144),auVar536,1);
            auVar171 = vblendvps_avx(ZEXT416((uint)fVar144),auVar356,auVar171);
            uVar140 = (uint)(longlong)auVar171._0_4_;
            uVar134 = uVar140 + 0x2f88ed;
            fVar144 = 0.07;
            fVar460 = 0.0;
            fVar310 = 0.0;
            do {
              while( true ) {
                fVar598 = auVar541._0_4_;
                fVar313 = fVar598 * 65536.0;
                auVar275._0_4_ = (float)(1e+32 - (double)fVar313);
                auVar275._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar313) >> 0x20);
                auVar275._8_8_ = 0;
                auVar189 = vcmpss_avx(ZEXT416((uint)fVar313),auVar436._0_16_,1);
                auVar189 = vblendvps_avx(ZEXT416((uint)fVar313),auVar275,auVar189);
                uVar46 = (uint)(longlong)auVar189._0_4_;
                fVar313 = (float)((((uint)((ulonglong)(longlong)auVar171._0_4_ >> 1) & 0x7fffffff ^
                                   uVar46) * 0x41c64e6d >> 3 ^ (uVar46 >> 1 ^ uVar140) * 0x41c64e6d)
                                 * 0x41c64e6d) * 2.3283064e-10 + -0.5 + fVar308 * 0.8;
                fVar309 = ((float)(((uVar46 + 0x2f88ed >> 1 ^ uVar134) * 0x41c64e6d >> 3 ^
                                   (uVar46 + 0x2f88ed ^ uVar134 >> 1) * 0x41c64e6d) * 0x41c64e6d) *
                           2.3283064e-10 + -0.5) - fVar533 * 0.8;
                fVar543 = auVar436._0_4_;
                auVar189 = ZEXT416((uint)(fVar309 * fVar309 + fVar543 + fVar313 * fVar313));
                auVar189 = vsqrtss_avx(auVar189,auVar189);
                fVar589 = fVar311 / auVar189._0_4_;
                fVar313 = fVar460 + fVar312 * fVar313 * fVar589;
                fVar309 = fVar310 + fVar312 * fVar309 * fVar589;
                fVar589 = fVar309 * fVar309 + fVar543 + fVar313 * fVar313;
                fVar542 = fVar144 + -0.007;
                if (fVar589 < 0.010000001) {
                  auVar189 = vsqrtss_avx(ZEXT416((uint)fVar589),ZEXT416((uint)fVar589));
                  fVar311 = fVar311 / auVar189._0_4_;
                  fVar313 = fVar312 * fVar313 * fVar311;
                  fVar309 = fVar312 * fVar309 * fVar311;
                }
                auVar569 = ZEXT464((uint)fVar313);
                fVar589 = fVar313 - fVar460;
                fVar499 = fVar309 - fVar310;
                auVar189 = ZEXT416((uint)(fVar499 * fVar499 + fVar543 + fVar589 * fVar589));
                auVar189 = vsqrtss_avx(auVar189,auVar189);
                auVar436 = ZEXT1664(auVar189);
                fVar543 = fVar542 - fVar144;
                fVar312 = fVar543 * fVar543;
                fVar147 = auVar189._0_4_;
                fVar311 = fVar147 * fVar147 - fVar312;
                fVar315 = fVar309;
                if (fVar311 < 0.0) {
                  fVar149 = sqrtf(fVar311);
                  fVar145 = auVar569._0_4_;
                  fVar147 = auVar436._0_4_;
                  fVar598 = auVar541._0_4_;
                }
                else {
                  auVar189 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
                  fVar149 = auVar189._0_4_;
                  fVar145 = fVar313;
                }
                fVar311 = 1.0;
                fVar589 = fVar589 * (1.0 / fVar147);
                fVar499 = fVar499 * (1.0 / fVar147);
                fVar147 = (fVar237 - fVar460) * fVar589 + (fVar146 - fVar310) * fVar499;
                fVar561 = (fVar146 - fVar310) * fVar589 - (fVar237 - fVar460) * fVar499;
                auVar189 = vandps_avx(ZEXT416((uint)fVar561),___xmm_7fffffff7fffffff7fffffff7fffffff
                                     );
                auVar436 = ZEXT1264(ZEXT812(0));
                auVar205 = ZEXT416((uint)(fVar312 + fVar149 * fVar149 + 0.0));
                auVar205 = vsqrtss_avx(auVar205,auVar205);
                fVar460 = 1.0 / auVar205._0_4_;
                fVar499 = fVar149 * fVar460;
                fVar543 = fVar543 * fVar460;
                fVar589 = auVar189._0_4_ * fVar543 + fVar147 * fVar499 + 0.0;
                fVar460 = fVar313;
                fVar310 = fVar309;
                if (0.0 < fVar589) break;
                auVar189 = ZEXT416((uint)(fVar561 * fVar561 + fVar147 * fVar147 + 0.0));
                auVar189 = vsqrtss_avx(auVar189,auVar189);
                fVar311 = auVar189._0_4_;
LAB_140130bd8:
                fVar312 = 0.1;
                auVar189 = vminss_avx(ZEXT416(auVar481._0_4_),ZEXT416((uint)(fVar311 - fVar144)));
                auVar481 = ZEXT1664(auVar189);
                auVar541 = ZEXT464((uint)(fVar598 + 0.1));
                fVar144 = fVar542;
                fVar311 = 1.0;
                if (1.0 <= fVar598 + 0.1) goto LAB_140130b00;
              }
              fVar312 = 0.1;
              if (fVar589 < fVar149) {
                fVar311 = auVar189._0_4_ * fVar499 + fVar147 * -fVar543 + 0.0;
                goto LAB_140130bd8;
              }
              auVar189 = ZEXT416((uint)((fVar146 - fVar315) * (fVar146 - fVar315) +
                                       (fVar237 - fVar145) * (fVar237 - fVar145) + 0.0));
              auVar189 = vsqrtss_avx(auVar189,auVar189);
              auVar189 = vminss_avx(ZEXT416(auVar481._0_4_),
                                    ZEXT416((uint)(auVar189._0_4_ - fVar542)));
              auVar481 = ZEXT1664(auVar189);
              auVar541 = ZEXT464((uint)(fVar598 + 0.1));
              fVar144 = fVar542;
            } while (fVar598 + 0.1 < 1.0);
LAB_140130b00:
            iVar133 = iVar133 + 1;
          } while (iVar133 != 2);
          fVar533 = fVar146 * fVar146 * 0.8 + fVar237;
          fVar144 = fVar533 * 0.0 + fVar146;
          fVar310 = fVar146 * 0.0 - fVar533;
          auVar171 = vandps_avx(ZEXT416((uint)fVar310),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar460 = auVar171._0_4_ * -0.057142857 + fVar144 * 0.998366 + 0.0;
          if (fVar460 <= 0.0) {
            auVar171 = ZEXT416((uint)(fVar310 * fVar310 + fVar144 * fVar144 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar144 = auVar171._0_4_;
LAB_140130f54:
            fVar144 = fVar144 + -0.07;
          }
          else {
            if (fVar460 < 0.3494281) {
              fVar144 = auVar171._0_4_ * 0.998366 + fVar144 * 0.057142857 + 0.0;
              goto LAB_140130f54;
            }
            auVar171 = ZEXT416((uint)((fVar146 + -0.35) * (fVar146 + -0.35) +
                                     fVar533 * fVar533 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar144 = auVar171._0_4_ + -0.05;
          }
          auVar171 = vandps_avx(ZEXT416((uint)(fVar533 + 0.28)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          if (auVar171._0_4_ <= auVar152._0_4_) {
            fVar308 = 0.25;
            fVar533 = 0.12;
            fVar460 = 0.12;
            fVar310 = 0.25;
            auVar189 = auVar171;
            auVar171 = auVar152;
          }
          else {
            fVar308 = 0.12;
            fVar533 = 0.25;
            fVar460 = 0.25;
            fVar310 = 0.12;
            auVar189 = auVar152;
          }
          auVar436 = ZEXT1664(auVar171);
          auVar205 = vminss_avx(auVar481._0_16_,ZEXT416((uint)fVar144));
          fVar144 = fVar533 * fVar533 - fVar308 * fVar308;
          auVar569 = ZEXT464((uint)fVar144);
          auVar171 = vinsertps_avx(auVar171,auVar189,0x10);
          auVar197._0_4_ = fVar460 * auVar171._0_4_;
          auVar197._4_4_ = fVar310 * auVar171._4_4_;
          auVar197._8_4_ = auVar171._8_4_ * 0.0;
          auVar197._12_4_ = auVar171._12_4_ * 0.0;
          auVar171 = vmovsldup_avx(ZEXT416((uint)fVar144));
          auVar171 = vdivps_avx(auVar197,auVar171);
          auVar181 = vmovshdup_avx(auVar171);
          auVar481 = ZEXT1664(auVar181);
          fVar311 = auVar171._0_4_;
          auVar419._0_4_ = fVar311 * fVar311;
          auVar419._4_4_ = auVar171._4_4_ * auVar171._4_4_;
          auVar419._8_4_ = auVar171._8_4_ * auVar171._8_4_;
          auVar419._12_4_ = auVar171._12_4_ * auVar171._12_4_;
          auVar171 = vmovshdup_avx(auVar419);
          auVar541 = ZEXT1664(auVar171);
          fVar313 = (auVar171._0_4_ + auVar419._0_4_ + -1.0) / 3.0;
          fVar312 = fVar313 * fVar313 * fVar313;
          fVar460 = auVar171._0_4_ * auVar419._0_4_;
          fVar144 = fVar460 + fVar312;
          fVar460 = fVar460 + fVar144;
          fVar309 = auVar181._0_4_;
          fVar310 = fVar309 + fVar309 * auVar419._0_4_;
          fVar589 = 0.0;
          if (0.0 <= fVar144) {
            fVar311 = (fVar309 + fVar309) * fVar311;
            if (fVar144 < 0.0) {
              fVar144 = sqrtf(fVar144);
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
              fVar144 = auVar171._0_4_;
            }
            auVar593._8_4_ = 0x7fffffff;
            auVar593._0_8_ = 0x7fffffff7fffffff;
            auVar593._12_4_ = 0x7fffffff;
            auVar607 = ZEXT1664(auVar593);
            fVar311 = fVar311 * fVar144;
            auVar560 = ZEXT464((uint)(fVar460 + fVar311));
            auVar171 = vandps_avx(ZEXT416((uint)(fVar460 + fVar311)),auVar593);
            auVar569 = ZEXT1664(auVar171);
            powf();
            auVar532 = ZEXT1664(auVar569._0_16_);
            auVar498 = ZEXT464((uint)(fVar460 - fVar311));
            auVar171 = vandps_avx(auVar607._0_16_,ZEXT416((uint)(fVar460 - fVar311)));
            auVar569 = ZEXT1664(auVar171);
            powf();
            auVar323 = auVar436._0_16_;
            fVar460 = auVar481._0_4_;
            auVar171 = vinsertps_avx(auVar560._0_16_,auVar498._0_16_,0x10);
            auVar357._0_12_ = ZEXT812(0);
            auVar357._12_4_ = 0;
            auVar171 = vcmpps_avx(auVar171,auVar357,1);
            auVar181 = vinsertps_avx(auVar532._0_16_,auVar569._0_16_,0x10);
            auVar358._0_8_ = auVar181._0_8_ ^ 0x8000000080000000;
            auVar358._8_4_ = auVar181._8_4_ ^ 0x80000000;
            auVar358._12_4_ = auVar181._12_4_ ^ 0x80000000;
            auVar171 = vblendvps_avx(auVar181,auVar358,auVar171);
            auVar181 = vmovshdup_avx(auVar171);
            fVar144 = auVar541._0_4_ + auVar541._0_4_ +
                      (fVar313 * -4.0 - (auVar171._0_4_ + auVar181._0_4_));
            auVar171 = vinsertps_avx(ZEXT416((uint)(auVar171._0_4_ - auVar181._0_4_)),
                                     ZEXT416((uint)fVar310),0x10);
            auVar492._0_4_ = auVar171._0_4_ * 1.7320508;
            auVar492._4_4_ = auVar171._4_4_ * 2.0;
            auVar492._8_4_ = auVar171._8_4_ * 0.0;
            auVar492._12_4_ = auVar171._12_4_ * 0.0;
            auVar541 = ZEXT1664(auVar492);
            auVar171 = ZEXT416((uint)(fVar144 * fVar144 + auVar492._0_4_ * auVar492._0_4_));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar569 = ZEXT1664(auVar171);
            fVar144 = auVar171._0_4_ - fVar144;
            if (fVar144 < 0.0) {
              auVar608._0_4_ = sqrtf(fVar144);
              auVar323 = auVar436._0_16_;
              fVar460 = auVar481._0_4_;
              auVar492 = auVar541._0_16_;
              auVar171 = auVar569._0_16_;
              auVar608._4_60_ = extraout_var_17;
              auVar181 = auVar608._0_16_;
            }
            else {
              auVar181 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
            }
            auVar171 = vinsertps_avx(auVar181,auVar171,0x10);
            auVar171 = vdivps_avx(auVar492,auVar171);
            auVar181 = vmovshdup_avx(auVar171);
            fVar144 = auVar171._0_4_ + auVar181._0_4_;
            auVar467._8_4_ = 0x7fffffff;
            auVar467._0_8_ = 0x7fffffff7fffffff;
            auVar467._12_4_ = 0x7fffffff;
            auVar537._0_12_ = ZEXT812(0);
            auVar537._12_4_ = 0;
          }
          else {
            dVar150 = acos((double)(fVar460 / fVar312));
            auVar198._0_8_ = dVar150 / 3.0;
            auVar198._8_8_ = extraout_var_37._0_8_;
            auVar515._0_4_ = (float)auVar198._0_8_;
            auVar515._4_12_ = auVar198._4_12_;
            auVar532 = ZEXT1664(auVar515);
            auVar498 = ZEXT1664(auVar515);
            cosf();
            fVar144 = auVar498._0_4_ + 2.0;
            auVar498 = ZEXT1664(auVar532._0_16_);
            sinf();
            fVar312 = auVar498._0_4_ * 1.7320508;
            fVar311 = auVar541._0_4_;
            fVar460 = fVar311 - fVar313 * (fVar312 + fVar144);
            fVar309 = 0.0;
            if (fVar460 < fVar589) {
              auVar223._0_4_ = sqrtf(fVar460);
              fVar311 = auVar541._0_4_;
              auVar223._4_60_ = extraout_var_16;
              auVar171 = auVar223._0_16_;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)fVar460));
            }
            auVar323 = auVar436._0_16_;
            fVar460 = auVar481._0_4_;
            auVar181 = auVar569._0_16_;
            auVar541 = ZEXT1664(auVar171);
            fVar589 = auVar171._0_4_;
            fVar311 = fVar311 + -fVar313 * (fVar144 - fVar312);
            if (fVar311 < fVar309) {
              fVar144 = sqrtf(fVar311);
              auVar323 = auVar436._0_16_;
              fVar460 = auVar481._0_4_;
              fVar589 = auVar541._0_4_;
              auVar181 = auVar569._0_16_;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar144 = auVar171._0_4_;
            }
            auVar537._0_12_ = ZEXT812(0);
            auVar537._12_4_ = 0;
            auVar171 = vcmpss_avx(auVar537,auVar181,1);
            auVar359._8_4_ = 0xbf800000;
            auVar359._0_8_ = 0xbf800000bf800000;
            auVar359._12_4_ = 0xbf800000;
            auVar171 = vblendvps_avx(auVar359,___xmm_3f8000003f8000003f8000003f800000,auVar171);
            auVar181 = vcmpss_avx(auVar181,auVar537,4);
            auVar171 = vandps_avx(auVar181,auVar171);
            auVar467._8_4_ = 0x7fffffff;
            auVar467._0_8_ = 0x7fffffff7fffffff;
            auVar467._12_4_ = 0x7fffffff;
            auVar181 = vandps_avx(auVar467,ZEXT416((uint)fVar310));
            fVar144 = auVar171._0_4_ * fVar589 + fVar144 + auVar181._0_4_ / (fVar589 * fVar144);
          }
          fVar144 = (fVar144 - fVar460) * 0.5;
          auVar171 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar144 * fVar144)),auVar537);
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          fVar533 = fVar533 * auVar171._0_4_;
          local_218._0_4_ = auVar189._0_4_;
          fVar144 = fVar144 * fVar308 - (float)local_218._0_4_;
          fVar460 = fVar533 - auVar323._0_4_;
          auVar171 = ZEXT416((uint)(fVar460 * fVar460 + fVar144 * fVar144 + 0.0));
          auVar189 = vsqrtss_avx(auVar171,auVar171);
          auVar360._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
          auVar360._8_4_ = auVar189._8_4_ ^ 0x80000000;
          auVar360._12_4_ = auVar189._12_4_ ^ 0x80000000;
          auVar171 = vcmpss_avx(auVar323,ZEXT416((uint)fVar533),1);
          auVar189 = vblendvps_avx(auVar189,auVar360,auVar171);
          auVar171 = vandps_avx(ZEXT416((uint)(auVar205._0_4_ - auVar189._0_4_)),auVar467);
          auVar181 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar171._0_4_)),auVar537);
          fVar237 = fVar314 * fVar314 * -0.6 + fVar237;
          fVar533 = fVar237 * 0.0 + fVar314;
          fVar460 = fVar314 * 0.0 - fVar237;
          auVar171 = vandps_avx(ZEXT416((uint)fVar460),auVar467);
          fVar144 = auVar171._0_4_ * 0.025000004 + fVar533 * 0.99968743 + 0.0;
          if (fVar144 <= 0.0) {
            auVar171 = ZEXT416((uint)(fVar460 * fVar460 + fVar533 * fVar533 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar533 = auVar171._0_4_;
LAB_1401313b4:
            fVar533 = fVar533 + -0.035;
          }
          else {
            if (fVar144 < 0.399875) {
              fVar533 = auVar171._0_4_ * 0.99968743 + fVar533 * -0.025000004 + 0.0;
              goto LAB_1401313b4;
            }
            auVar171 = ZEXT416((uint)((fVar314 + -0.4) * (fVar314 + -0.4) + fVar237 * fVar237 + 0.0)
                              );
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar533 = auVar171._0_4_ + -0.045;
          }
          auVar171 = vminss_avx(ZEXT416((uint)auVar205._0_4_),auVar189);
          fVar144 = auVar171._0_4_ + (auVar181._0_4_ * auVar181._0_4_ * -0.25) / 0.05;
          auVar468._8_4_ = 0x7fffffff;
          auVar468._0_8_ = 0x7fffffff7fffffff;
          auVar468._12_4_ = 0x7fffffff;
          auVar171 = vandps_avx(ZEXT416((uint)(fVar144 - fVar533)),auVar468);
          auVar189 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar171._0_4_)),auVar537);
          auVar171 = vandps_avx(ZEXT416((uint)(fVar237 + -0.17)),auVar468);
          if (auVar171._0_4_ <= auVar164._0_4_) {
            auVar436 = ZEXT464(0x3e6147ae);
            fVar237 = 0.11;
            fVar460 = 0.11;
            fVar310 = 0.22;
            auVar205 = auVar171;
            auVar171 = auVar164;
          }
          else {
            auVar436 = ZEXT464(0x3de147ae);
            fVar237 = 0.22;
            fVar460 = 0.22;
            fVar310 = 0.11;
            auVar205 = auVar164;
          }
          auVar481 = ZEXT1664(auVar171);
          auVar181 = vminss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar533));
          fVar533 = auVar181._0_4_ + (auVar189._0_4_ * auVar189._0_4_ * -0.25) / 0.05;
          fVar589 = auVar436._0_4_;
          fVar144 = fVar237 * fVar237 - fVar589 * fVar589;
          auVar569 = ZEXT464((uint)fVar144);
          auVar171 = vinsertps_avx(auVar171,auVar205,0x10);
          auVar199._0_4_ = fVar460 * auVar171._0_4_;
          auVar199._4_4_ = fVar310 * auVar171._4_4_;
          auVar199._8_4_ = auVar171._8_4_ * 0.0;
          auVar199._12_4_ = auVar171._12_4_ * 0.0;
          auVar171 = vmovsldup_avx(ZEXT416((uint)fVar144));
          auVar171 = vdivps_avx(auVar199,auVar171);
          auVar189 = vmovshdup_avx(auVar171);
          auVar498 = ZEXT1664(auVar189);
          fVar308 = auVar171._0_4_;
          auVar420._0_4_ = fVar308 * fVar308;
          auVar420._4_4_ = auVar171._4_4_ * auVar171._4_4_;
          auVar420._8_4_ = auVar171._8_4_ * auVar171._8_4_;
          auVar420._12_4_ = auVar171._12_4_ * auVar171._12_4_;
          auVar171 = vmovshdup_avx(auVar420);
          auVar541 = ZEXT1664(auVar171);
          fVar309 = (auVar171._0_4_ + auVar420._0_4_ + -1.0) / 3.0;
          fVar311 = fVar309 * fVar309 * fVar309;
          fVar460 = auVar171._0_4_ * auVar420._0_4_;
          fVar144 = fVar460 + fVar311;
          fVar460 = fVar460 + fVar144;
          fVar312 = auVar189._0_4_;
          fVar310 = fVar312 + fVar312 * auVar420._0_4_;
          fVar313 = 0.0;
          if (0.0 <= fVar144) {
            fVar308 = (fVar312 + fVar312) * fVar308;
            if (fVar144 < 0.0) {
              fVar144 = sqrtf(fVar144);
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
              fVar144 = auVar171._0_4_;
            }
            auVar594._8_4_ = 0x7fffffff;
            auVar594._0_8_ = 0x7fffffff7fffffff;
            auVar594._12_4_ = 0x7fffffff;
            auVar607 = ZEXT1664(auVar594);
            fVar308 = fVar308 * fVar144;
            auVar560 = ZEXT464((uint)(fVar460 + fVar308));
            auVar171 = vandps_avx(ZEXT416((uint)(fVar460 + fVar308)),auVar594);
            auVar436 = ZEXT1664(auVar171);
            powf();
            auVar532 = ZEXT1664(auVar436._0_16_);
            auVar569 = ZEXT464((uint)(fVar460 - fVar308));
            auVar171 = vandps_avx(auVar607._0_16_,ZEXT416((uint)(fVar460 - fVar308)));
            auVar436 = ZEXT1664(auVar171);
            powf();
            auVar181 = auVar481._0_16_;
            fVar460 = auVar498._0_4_;
            auVar171 = vinsertps_avx(auVar560._0_16_,auVar569._0_16_,0x10);
            auVar361._0_12_ = ZEXT812(0);
            auVar361._12_4_ = 0;
            auVar171 = vcmpps_avx(auVar171,auVar361,1);
            auVar189 = vinsertps_avx(auVar532._0_16_,auVar436._0_16_,0x10);
            auVar362._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
            auVar362._8_4_ = auVar189._8_4_ ^ 0x80000000;
            auVar362._12_4_ = auVar189._12_4_ ^ 0x80000000;
            auVar171 = vblendvps_avx(auVar189,auVar362,auVar171);
            auVar189 = vmovshdup_avx(auVar171);
            fVar144 = auVar541._0_4_ + auVar541._0_4_ +
                      (fVar309 * -4.0 - (auVar171._0_4_ + auVar189._0_4_));
            auVar171 = vinsertps_avx(ZEXT416((uint)(auVar171._0_4_ - auVar189._0_4_)),
                                     ZEXT416((uint)fVar310),0x10);
            auVar493._0_4_ = auVar171._0_4_ * 1.7320508;
            auVar493._4_4_ = auVar171._4_4_ * 2.0;
            auVar493._8_4_ = auVar171._8_4_ * 0.0;
            auVar493._12_4_ = auVar171._12_4_ * 0.0;
            auVar436 = ZEXT1664(auVar493);
            auVar171 = ZEXT416((uint)(fVar144 * fVar144 + auVar493._0_4_ * auVar493._0_4_));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar541 = ZEXT1664(auVar171);
            fVar144 = auVar171._0_4_ - fVar144;
            if (fVar144 < 0.0) {
              auVar222._0_4_ = sqrtf(fVar144);
              auVar181 = auVar481._0_16_;
              auVar171 = auVar541._0_16_;
              auVar493 = auVar436._0_16_;
              fVar460 = auVar498._0_4_;
              auVar222._4_60_ = extraout_var_15;
              auVar189 = auVar222._0_16_;
            }
            else {
              auVar189 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
            }
            auVar171 = vinsertps_avx(auVar189,auVar171,0x10);
            auVar171 = vdivps_avx(auVar493,auVar171);
            auVar189 = vmovshdup_avx(auVar171);
            fVar144 = auVar171._0_4_ + auVar189._0_4_;
            auVar418._8_4_ = 0x7fffffff;
            auVar418._0_8_ = 0x7fffffff7fffffff;
            auVar418._12_4_ = 0x7fffffff;
            auVar450._0_12_ = ZEXT812(0);
            auVar450._12_4_ = 0;
          }
          else {
            dVar150 = acos((double)(fVar460 / fVar311));
            auVar200._0_8_ = dVar150 / 3.0;
            auVar200._8_8_ = extraout_var_38._0_8_;
            auVar516._0_4_ = (float)auVar200._0_8_;
            auVar516._4_12_ = auVar200._4_12_;
            auVar560 = ZEXT1664(auVar516);
            auVar532 = ZEXT1664(auVar516);
            cosf();
            fVar144 = auVar532._0_4_ + 2.0;
            auVar532 = ZEXT1664(auVar560._0_16_);
            sinf();
            fVar311 = auVar532._0_4_ * 1.7320508;
            fVar308 = auVar541._0_4_;
            fVar460 = fVar308 - fVar309 * (fVar311 + fVar144);
            if (fVar460 < fVar313) {
              auVar224._0_4_ = sqrtf(fVar460);
              fVar308 = auVar541._0_4_;
              auVar224._4_60_ = extraout_var_18;
              auVar171 = auVar224._0_16_;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)fVar460));
            }
            fVar589 = auVar436._0_4_;
            auVar181 = auVar481._0_16_;
            auVar189 = auVar569._0_16_;
            fVar460 = auVar498._0_4_;
            auVar541 = ZEXT1664(auVar171);
            fVar312 = auVar171._0_4_;
            fVar308 = fVar308 + -fVar309 * (fVar144 - fVar311);
            if (fVar308 < 0.0) {
              fVar144 = sqrtf(fVar308);
              fVar589 = auVar436._0_4_;
              fVar312 = auVar541._0_4_;
              auVar181 = auVar481._0_16_;
              auVar189 = auVar569._0_16_;
              fVar460 = auVar498._0_4_;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
              fVar144 = auVar171._0_4_;
            }
            auVar450._0_12_ = ZEXT812(0);
            auVar450._12_4_ = 0;
            auVar171 = vcmpss_avx(auVar450,auVar189,1);
            auVar363._8_4_ = 0xbf800000;
            auVar363._0_8_ = 0xbf800000bf800000;
            auVar363._12_4_ = 0xbf800000;
            auVar171 = vblendvps_avx(auVar363,___xmm_3f8000003f8000003f8000003f800000,auVar171);
            auVar189 = vcmpss_avx(auVar189,auVar450,4);
            auVar171 = vandps_avx(auVar189,auVar171);
            auVar418._8_4_ = 0x7fffffff;
            auVar418._0_8_ = 0x7fffffff7fffffff;
            auVar418._12_4_ = 0x7fffffff;
            auVar189 = vandps_avx(auVar418,ZEXT416((uint)fVar310));
            fVar144 = auVar171._0_4_ * fVar312 + fVar144 + auVar189._0_4_ / (fVar312 * fVar144);
          }
          fVar144 = (fVar144 - fVar460) * 0.5;
          auVar171 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar144 * fVar144)),auVar450);
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          fVar237 = fVar237 * auVar171._0_4_;
          local_248 = auVar205._0_4_;
          local_248 = fVar589 * fVar144 - local_248;
          fVar144 = fVar237 - auVar181._0_4_;
          auVar171 = ZEXT416((uint)(fVar144 * fVar144 + local_248 * local_248 + 0.0));
          auVar189 = vsqrtss_avx(auVar171,auVar171);
          auVar355._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
          auVar355._8_4_ = auVar189._8_4_ ^ 0x80000000;
          auVar355._12_4_ = auVar189._12_4_ ^ 0x80000000;
          auVar171 = vcmpss_avx(auVar181,ZEXT416((uint)fVar237),1);
          auVar189 = vblendvps_avx(auVar189,auVar355,auVar171);
          auVar171 = vandps_avx(ZEXT416((uint)(fVar533 - auVar189._0_4_)),auVar418);
          auVar171 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar171._0_4_)),auVar450);
          auVar189 = vminss_avx(ZEXT416((uint)fVar533),auVar189);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           iVar50.field0_0x0._0_4_ + (int)uVar143] =
               auVar189._0_4_ + (auVar171._0_4_ * auVar171._0_4_ * -0.25) / 0.05;
          uVar143 = uVar143 + 1;
          auVar436 = ZEXT1264(ZEXT812(0));
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
      unaff_R13 = 0;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("COLR");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 2;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 5.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = materials_list[index].capacitance * 10.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f800000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f326e98;
    materials_list[index].physics_update_fn = cell_paint;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 0x10;
    iVar50 = get_icon_coords(0x32);
    rVar102._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar102._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar102;
  }
  iVar50 = get_icon_coords(0x32);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      fVar146 = 0.1;
      do {
        iVar44 = (int)uVar81;
        auVar152 = vmovsldup_avx(ZEXT416((uint)(((float)iVar44 + 0.5) * 0.015625 + -1.0)));
        uVar143 = 0;
        do {
          fVar144 = -1.0;
          fVar314 = 0.4;
          auVar164 = vmovsldup_avx(ZEXT416((uint)(((float)uVar143 + 0.5) * 0.015625 + -1.0)));
          auVar582._0_4_ = auVar164._0_4_ * 0.8 + auVar152._0_4_ * -0.6 + -0.0;
          auVar582._4_4_ = auVar164._4_4_ * 0.6 + auVar152._4_4_ * 0.8 + 0.4;
          auVar582._8_4_ = auVar164._8_4_ * 0.0 + auVar152._8_4_ * 0.0 + 0.0;
          auVar582._12_4_ = auVar164._12_4_ * 0.0 + auVar152._12_4_ * 0.0 + 0.0;
          auVar541 = ZEXT1664(auVar582);
          auVar164 = vandps_avx(auVar582,___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar481 = ZEXT1664(auVar164);
          local_268 = vshufps_avx(auVar164,auVar164,0xf5);
          fVar237 = auVar164._0_4_;
          fVar533 = local_268._0_4_;
          if (fVar237 <= fVar533) {
            auVar164 = vshufps_avx(auVar164,auVar164,0xe1);
            fVar308 = 0.18;
            fVar460 = 0.4;
            fVar310 = 0.18;
          }
          else {
            fVar308 = 0.4;
            fVar314 = 0.18;
            fVar460 = 0.18;
            fVar310 = 0.4;
            local_268 = auVar164;
            fVar237 = fVar533;
          }
          auVar201._0_4_ = fVar460 * auVar164._0_4_;
          auVar201._4_4_ = fVar310 * auVar164._4_4_;
          auVar201._8_4_ = auVar164._8_4_ * 0.0;
          auVar201._12_4_ = auVar164._12_4_ * 0.0;
          fVar533 = fVar314 * fVar314 - fVar308 * fVar308;
          auVar498 = ZEXT464((uint)fVar533);
          auVar164 = vmovsldup_avx(ZEXT416((uint)fVar533));
          auVar164 = vdivps_avx(auVar201,auVar164);
          auVar171 = vmovshdup_avx(auVar164);
          fVar311 = auVar164._0_4_;
          auVar421._0_4_ = fVar311 * fVar311;
          auVar421._4_4_ = auVar164._4_4_ * auVar164._4_4_;
          auVar421._8_4_ = auVar164._8_4_ * auVar164._8_4_;
          auVar421._12_4_ = auVar164._12_4_ * auVar164._12_4_;
          auVar164 = vmovshdup_avx(auVar421);
          auVar569 = ZEXT1664(auVar164);
          fVar309 = (auVar164._0_4_ + auVar421._0_4_ + -1.0) / 3.0;
          fVar312 = fVar309 * fVar309 * fVar309;
          fVar460 = auVar164._0_4_ * auVar421._0_4_;
          fVar533 = fVar460 + fVar312;
          fVar460 = fVar460 + fVar533;
          fVar313 = auVar171._0_4_;
          fVar310 = fVar313 * auVar421._0_4_ + fVar313;
          if (auVar436._0_4_ <= fVar533) {
            fVar311 = (fVar313 + fVar313) * fVar311;
            if (fVar533 < auVar436._0_4_) {
              fVar533 = sqrtf(fVar533);
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
              fVar533 = auVar164._0_4_;
            }
            auVar276._8_4_ = 0x7fffffff;
            auVar276._0_8_ = 0x7fffffff7fffffff;
            auVar276._12_4_ = 0x7fffffff;
            fVar311 = fVar311 * fVar533;
            auVar532 = ZEXT464((uint)(fVar460 + fVar311));
            auVar164 = vandps_avx(ZEXT416((uint)(fVar460 + fVar311)),auVar276);
            auVar541 = ZEXT1664(auVar164);
            powf();
            auVar560 = ZEXT464((uint)(fVar460 - fVar311));
            auVar164 = vandps_avx(ZEXT416((uint)(fVar460 - fVar311)),
                                  ___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar498 = ZEXT1664(auVar164);
            powf();
            auVar164 = vinsertps_avx(auVar532._0_16_,auVar560._0_16_,0x10);
            auVar364._0_12_ = ZEXT812(0);
            auVar364._12_4_ = 0;
            auVar164 = vcmpps_avx(auVar164,auVar364,1);
            auVar171 = vinsertps_avx(auVar541._0_16_,auVar498._0_16_,0x10);
            auVar365._0_8_ = auVar171._0_8_ ^ 0x8000000080000000;
            auVar365._8_4_ = auVar171._8_4_ ^ 0x80000000;
            auVar365._12_4_ = auVar171._12_4_ ^ 0x80000000;
            auVar164 = vblendvps_avx(auVar171,auVar365,auVar164);
            auVar171 = vmovshdup_avx(auVar164);
            fVar533 = auVar569._0_4_ + auVar569._0_4_ +
                      (fVar309 * -4.0 - (auVar164._0_4_ + auVar171._0_4_));
            auVar164 = vinsertps_avx(ZEXT416((uint)(auVar164._0_4_ - auVar171._0_4_)),
                                     ZEXT416((uint)fVar310),0x10);
            auVar518._0_4_ = auVar164._0_4_ * 1.7320508;
            auVar518._4_4_ = auVar164._4_4_ * 2.0;
            auVar518._8_4_ = auVar164._8_4_ * 0.0;
            auVar518._12_4_ = auVar164._12_4_ * 0.0;
            auVar541 = ZEXT1664(auVar518);
            auVar164 = ZEXT416((uint)(fVar533 * fVar533 + auVar518._0_4_ * auVar518._0_4_));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar569 = ZEXT1664(auVar164);
            fVar533 = auVar164._0_4_ - fVar533;
            if (fVar533 < auVar436._0_4_) {
              auVar226._0_4_ = sqrtf(fVar533);
              auVar518 = auVar541._0_16_;
              auVar164 = auVar569._0_16_;
              auVar226._4_60_ = extraout_var_20;
              auVar171 = auVar226._0_16_;
            }
            else {
              auVar171 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
            }
            auVar164 = vinsertps_avx(auVar171,auVar164,0x10);
            auVar164 = vdivps_avx(auVar518,auVar164);
            auVar171 = vmovshdup_avx(auVar164);
            fVar533 = auVar164._0_4_ + auVar171._0_4_;
            auVar422._8_4_ = 0x7fffffff;
            auVar422._0_8_ = 0x7fffffff7fffffff;
            auVar422._12_4_ = 0x7fffffff;
          }
          else {
            dVar150 = acos((double)(fVar460 / fVar312));
            auVar202._0_8_ = dVar150 / 3.0;
            auVar202._8_8_ = extraout_var_39._0_8_;
            auVar517._0_4_ = (float)auVar202._0_8_;
            auVar517._4_12_ = auVar202._4_12_;
            auVar560 = ZEXT1664(auVar517);
            auVar532 = ZEXT1664(auVar517);
            cosf();
            fVar533 = auVar532._0_4_ + 2.0;
            auVar532 = ZEXT1664(auVar560._0_16_);
            sinf();
            fVar460 = auVar532._0_4_ * 1.7320508;
            fVar144 = auVar569._0_4_;
            fVar311 = fVar144 - fVar309 * (fVar533 + fVar460);
            if (fVar311 < auVar436._0_4_) {
              auVar225._0_4_ = sqrtf(fVar311);
              fVar144 = auVar569._0_4_;
              auVar225._4_60_ = extraout_var_19;
              auVar164 = auVar225._0_16_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
            }
            auVar582 = auVar541._0_16_;
            auVar171 = auVar498._0_16_;
            auVar569 = ZEXT1664(auVar164);
            fVar311 = auVar164._0_4_;
            fVar144 = fVar144 + -fVar309 * (fVar533 - fVar460);
            if (fVar144 < auVar436._0_4_) {
              fVar533 = sqrtf(fVar144);
              auVar582 = auVar541._0_16_;
              fVar311 = auVar569._0_4_;
              auVar171 = auVar498._0_16_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
              fVar533 = auVar164._0_4_;
            }
            auVar164 = vcmpss_avx(auVar436._0_16_,auVar171,1);
            auVar366._8_4_ = 0xbf800000;
            auVar366._0_8_ = 0xbf800000bf800000;
            auVar366._12_4_ = 0xbf800000;
            auVar164 = vblendvps_avx(auVar366,___xmm_3f8000003f8000003f8000003f800000,auVar164);
            auVar171 = vcmpss_avx(auVar171,auVar436._0_16_,4);
            auVar164 = vandps_avx(auVar171,auVar164);
            auVar422._8_4_ = 0x7fffffff;
            auVar422._0_8_ = 0x7fffffff7fffffff;
            auVar422._12_4_ = 0x7fffffff;
            auVar171 = vandps_avx(auVar422,ZEXT416((uint)fVar310));
            fVar533 = fVar311 * auVar164._0_4_ + fVar533 + auVar171._0_4_ / (fVar311 * fVar533);
            fVar144 = -1.0;
          }
          fVar533 = (fVar533 - fVar313) * 0.5;
          auVar171 = vmovshdup_avx(auVar582);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar171._0_4_ + 0.2)),auVar422);
          if (auVar481._0_4_ <= auVar164._0_4_) {
            fVar312 = 0.03;
            fVar460 = 0.035;
            fVar310 = 0.035;
            fVar311 = 0.03;
            auVar189 = auVar481._0_16_;
          }
          else {
            fVar312 = 0.035;
            fVar460 = 0.03;
            fVar310 = 0.03;
            fVar311 = 0.035;
            auVar189 = auVar164;
            auVar164 = auVar481._0_16_;
          }
          auVar498 = ZEXT1664(auVar164);
          fVar313 = fVar460 * fVar460 - fVar312 * fVar312;
          auVar541 = ZEXT464((uint)fVar313);
          auVar205 = vinsertps_avx(auVar164,auVar189,0x10);
          auVar203._0_4_ = fVar310 * auVar205._0_4_;
          auVar203._4_4_ = fVar311 * auVar205._4_4_;
          auVar203._8_4_ = auVar205._8_4_ * 0.0;
          auVar203._12_4_ = auVar205._12_4_ * 0.0;
          auVar205 = vmovsldup_avx(ZEXT416((uint)fVar313));
          auVar205 = vdivps_avx(auVar203,auVar205);
          auVar181 = vmovshdup_avx(auVar205);
          fVar311 = auVar205._0_4_;
          auVar423._0_4_ = fVar311 * fVar311;
          auVar423._4_4_ = auVar205._4_4_ * auVar205._4_4_;
          auVar423._8_4_ = auVar205._8_4_ * auVar205._8_4_;
          auVar423._12_4_ = auVar205._12_4_ * auVar205._12_4_;
          auVar205 = vmovshdup_avx(auVar423);
          auVar569 = ZEXT1664(auVar205);
          fVar589 = (fVar144 + auVar205._0_4_ + auVar423._0_4_) / 3.0;
          fVar313 = fVar589 * fVar589 * fVar589;
          fVar310 = auVar205._0_4_ * auVar423._0_4_;
          fVar144 = fVar310 + fVar313;
          fVar310 = fVar310 + fVar144;
          fVar309 = auVar181._0_4_;
          auVar532 = ZEXT464((uint)(fVar309 * auVar423._0_4_ + fVar309));
          if (auVar436._0_4_ <= fVar144) {
            fVar311 = (fVar309 + fVar309) * fVar311;
            if (fVar144 < auVar436._0_4_) {
              fVar144 = sqrtf(fVar144);
            }
            else {
              auVar205 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
              fVar144 = auVar205._0_4_;
            }
            auVar277._8_4_ = 0x7fffffff;
            auVar277._0_8_ = 0x7fffffff7fffffff;
            auVar277._12_4_ = 0x7fffffff;
            fVar311 = fVar311 * fVar144;
            auVar560 = ZEXT464((uint)(fVar310 + fVar311));
            auVar205 = vandps_avx(ZEXT416((uint)(fVar310 + fVar311)),auVar277);
            auVar541 = ZEXT1664(auVar205);
            powf();
            auVar607 = ZEXT464((uint)(fVar310 - fVar311));
            auVar205 = vandps_avx(ZEXT416((uint)(fVar310 - fVar311)),
                                  ___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar498 = ZEXT1664(auVar205);
            powf();
            auVar323 = auVar481._0_16_;
            auVar205 = vinsertps_avx(auVar560._0_16_,auVar607._0_16_,0x10);
            auVar367._0_12_ = ZEXT812(0);
            auVar367._12_4_ = 0;
            auVar205 = vcmpps_avx(auVar205,auVar367,1);
            auVar181 = vinsertps_avx(auVar541._0_16_,auVar498._0_16_,0x10);
            auVar368._0_8_ = auVar181._0_8_ ^ 0x8000000080000000;
            auVar368._8_4_ = auVar181._8_4_ ^ 0x80000000;
            auVar368._12_4_ = auVar181._12_4_ ^ 0x80000000;
            auVar205 = vblendvps_avx(auVar181,auVar368,auVar205);
            auVar181 = vmovshdup_avx(auVar205);
            fVar144 = auVar569._0_4_ + auVar569._0_4_ +
                      (fVar589 * -4.0 - (auVar205._0_4_ + auVar181._0_4_));
            auVar205 = vinsertps_avx(ZEXT416((uint)(auVar205._0_4_ - auVar181._0_4_)),
                                     auVar532._0_16_,0x10);
            auVar520._0_4_ = auVar205._0_4_ * 1.7320508;
            auVar520._4_4_ = auVar205._4_4_ * 2.0;
            auVar520._8_4_ = auVar205._8_4_ * 0.0;
            auVar520._12_4_ = auVar205._12_4_ * 0.0;
            auVar541 = ZEXT1664(auVar520);
            auVar205 = ZEXT416((uint)(fVar144 * fVar144 + auVar520._0_4_ * auVar520._0_4_));
            auVar205 = vsqrtss_avx(auVar205,auVar205);
            auVar569 = ZEXT1664(auVar205);
            fVar144 = auVar205._0_4_ - fVar144;
            if (fVar144 < auVar436._0_4_) {
              auVar228._0_4_ = sqrtf(fVar144);
              auVar323 = auVar481._0_16_;
              auVar520 = auVar541._0_16_;
              auVar205 = auVar569._0_16_;
              auVar228._4_60_ = extraout_var_22;
              auVar181 = auVar228._0_16_;
            }
            else {
              auVar181 = vsqrtss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar144));
            }
            auVar205 = vinsertps_avx(auVar181,auVar205,0x10);
            auVar205 = vdivps_avx(auVar520,auVar205);
            auVar181 = vmovshdup_avx(auVar205);
            fVar144 = auVar205._0_4_ + auVar181._0_4_;
            auVar451._8_4_ = 0x7fffffff;
            auVar451._0_8_ = 0x7fffffff7fffffff;
            auVar451._12_4_ = 0x7fffffff;
          }
          else {
            dVar150 = acos((double)(fVar310 / fVar313));
            auVar204._0_8_ = dVar150 / 3.0;
            auVar204._8_8_ = extraout_var_40._0_8_;
            auVar519._0_4_ = (float)auVar204._0_8_;
            auVar519._4_12_ = auVar204._4_12_;
            auVar607 = ZEXT1664(auVar519);
            auVar560 = ZEXT1664(auVar519);
            cosf();
            fVar144 = auVar560._0_4_ + 2.0;
            auVar560 = ZEXT1664(auVar607._0_16_);
            sinf();
            fVar311 = auVar560._0_4_ * 1.7320508;
            fVar310 = auVar569._0_4_;
            fVar313 = fVar310 - fVar589 * (fVar144 + fVar311);
            if (fVar313 < auVar436._0_4_) {
              auVar227._0_4_ = sqrtf(fVar313);
              fVar310 = auVar569._0_4_;
              auVar227._4_60_ = extraout_var_21;
              auVar205 = auVar227._0_16_;
            }
            else {
              auVar205 = vsqrtss_avx(ZEXT416((uint)fVar313),ZEXT416((uint)fVar313));
            }
            fVar313 = auVar205._0_4_;
            auVar323 = auVar481._0_16_;
            auVar164 = auVar498._0_16_;
            auVar262 = auVar532._0_16_;
            auVar181 = auVar541._0_16_;
            fVar310 = fVar310 + -fVar589 * (fVar144 - fVar311);
            if (fVar310 < auVar436._0_4_) {
              auVar569 = ZEXT1664(auVar205);
              fVar144 = sqrtf(fVar310);
              auVar323 = auVar481._0_16_;
              auVar164 = auVar498._0_16_;
              auVar262 = auVar532._0_16_;
              auVar181 = auVar541._0_16_;
              fVar313 = auVar569._0_4_;
            }
            else {
              auVar205 = vsqrtss_avx(ZEXT416((uint)fVar310),ZEXT416((uint)fVar310));
              fVar144 = auVar205._0_4_;
            }
            auVar205 = vcmpss_avx(auVar436._0_16_,auVar181,1);
            auVar369._8_4_ = 0xbf800000;
            auVar369._0_8_ = 0xbf800000bf800000;
            auVar369._12_4_ = 0xbf800000;
            auVar205 = vblendvps_avx(auVar369,___xmm_3f8000003f8000003f8000003f800000,auVar205);
            auVar181 = vcmpss_avx(auVar181,auVar436._0_16_,4);
            auVar205 = vandps_avx(auVar181,auVar205);
            auVar451._8_4_ = 0x7fffffff;
            auVar451._0_8_ = 0x7fffffff7fffffff;
            auVar451._12_4_ = 0x7fffffff;
            auVar181 = vandps_avx(auVar262,auVar451);
            fVar144 = auVar205._0_4_ * fVar313 + fVar144 + auVar181._0_4_ / (fVar313 * fVar144);
          }
          fVar237 = fVar308 * fVar533 - fVar237;
          auVar262 = auVar436._0_16_;
          auVar205 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar533 * fVar533)),auVar262);
          auVar205 = vsqrtss_avx(auVar205,auVar205);
          fVar314 = auVar205._0_4_ * fVar314;
          fVar533 = fVar314 - local_268._0_4_;
          fVar310 = auVar436._0_4_;
          auVar205 = ZEXT416((uint)(fVar533 * fVar533 + fVar310 + fVar237 * fVar237));
          auVar181 = vsqrtss_avx(auVar205,auVar205);
          auVar205 = vcmpss_avx(local_268,ZEXT416((uint)fVar314),1);
          auVar424._0_8_ = auVar181._0_8_ ^ 0x8000000080000000;
          auVar424._8_4_ = auVar181._8_4_ ^ 0x80000000;
          auVar424._12_4_ = auVar181._12_4_ ^ 0x80000000;
          auVar205 = vblendvps_avx(auVar181,auVar424,auVar205);
          fVar237 = (fVar144 - fVar309) * 0.5;
          fVar314 = auVar171._0_4_ + -0.5;
          auVar171 = vandps_avx(ZEXT416((uint)fVar314),auVar451);
          fVar144 = auVar323._0_4_;
          fVar533 = auVar171._0_4_;
          if ((0.4 <= fVar144) || (0.15 <= fVar533)) {
            auVar181 = vminss_avx(SUB6416(ZEXT464(0x3ecccccd),0),auVar323);
            auVar171 = vminss_avx(SUB6416(ZEXT464(0x3e19999a),0),auVar171);
            fVar308 = fVar144 - auVar181._0_4_;
            fVar533 = fVar533 - auVar171._0_4_;
            auVar171 = ZEXT416((uint)(fVar533 * fVar533 + fVar310 + fVar308 * fVar308));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
          }
          else {
            auVar171 = vmaxss_avx(ZEXT416((uint)(fVar144 + -0.4)),ZEXT416((uint)(fVar533 + -0.15)));
          }
          auVar181 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar237 * fVar237)),auVar262);
          auVar181 = vsqrtss_avx(auVar181,auVar181);
          fVar460 = auVar181._0_4_ * fVar460;
          local_218._0_4_ = auVar189._0_4_;
          fVar237 = fVar237 * fVar312 - (float)local_218._0_4_;
          fVar533 = fVar460 - auVar164._0_4_;
          auVar189 = ZEXT416((uint)(fVar533 * fVar533 + fVar310 + fVar237 * fVar237));
          auVar189 = vsqrtss_avx(auVar189,auVar189);
          auVar164 = vcmpss_avx(auVar164,ZEXT416((uint)fVar460),1);
          auVar469._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
          auVar469._8_4_ = auVar189._8_4_ ^ 0x80000000;
          auVar469._12_4_ = auVar189._12_4_ ^ 0x80000000;
          auVar164 = vblendvps_avx(auVar469,auVar189,auVar164);
          auVar189 = vmaxss_avx(auVar205,auVar164);
          auVar603._8_4_ = 0x7fffffff;
          auVar603._0_8_ = 0x7fffffff7fffffff;
          auVar603._12_4_ = 0x7fffffff;
          auVar164 = vandps_avx(auVar603,ZEXT416((uint)(auVar189._0_4_ - auVar171._0_4_)));
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.18 - auVar164._0_4_)),auVar262);
          auVar171 = vminss_avx(auVar189,auVar171);
          fVar237 = auVar171._0_4_ + (auVar164._0_4_ * auVar164._0_4_ * -0.25) / 0.18;
          fVar533 = -0.35;
          do {
            fVar460 = fVar533 - fVar533;
            auVar452._0_4_ =
                 ((fVar314 + -0.1) * 0.5 + fVar310 + (fVar144 - fVar533) * fVar460) /
                 (fVar460 * fVar460 + 0.25);
            auVar452._4_12_ = SUB6012((undefined1  [60])0x0,0);
            auVar164 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar452);
            auVar164 = vmaxss_avx(auVar262,auVar164);
            fVar308 = auVar164._0_4_;
            fVar460 = fVar144 - (fVar533 * (1.0 - fVar308) + fVar533 * fVar308);
            fVar308 = fVar314 - (fVar308 * 0.6 + (1.0 - fVar308) * fVar146);
            auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar310 + fVar460 * fVar460));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar460 = auVar164._0_4_ + -0.04;
            auVar164 = vandps_avx(auVar603,ZEXT416((uint)(fVar237 - fVar460)));
            auVar164 = vmaxss_avx(ZEXT416((uint)(fVar146 - auVar164._0_4_)),auVar262);
            auVar171 = vminss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar460));
            fVar237 = auVar171._0_4_ - (auVar164._0_4_ * auVar164._0_4_ * 0.25) / fVar146;
            fVar533 = fVar533 + fVar146;
          } while (fVar533 <= 0.4);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = fVar237;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("HDET");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 30.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e4ccccd3f666666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e4ccccd;
    materials_list[index].electric_update_fn = cell_hp_detector;
    iVar50 = get_icon_coords(0x33);
    rVar103._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar103._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar103;
  }
  iVar50 = get_icon_coords(0x33);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        fVar314 = fVar146 + 0.06;
        uVar143 = 0;
        do {
          fVar237 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar370._8_4_ = 0x7fffffff;
          auVar370._0_8_ = 0x7fffffff7fffffff;
          auVar370._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)fVar237),auVar370);
          fVar533 = auVar152._0_4_;
          if (fVar314 + fVar533 <= 0.2) {
            auVar152 = vandps_avx(ZEXT416((uint)(fVar533 - fVar314)),auVar370);
            fVar533 = auVar152._0_4_ / 1.4142135;
          }
          else {
            auVar152 = ZEXT416((uint)((fVar533 + -0.1) * (fVar533 + -0.1) + 0.0 +
                                     (fVar314 + -0.1) * (fVar314 + -0.1)));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar533 = auVar152._0_4_;
          }
          auVar152 = ZEXT416((uint)(fVar237 * fVar237 + 0.0 + fVar146 * fVar146));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar164 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),
                                ZEXT416((uint)(fVar533 + -0.120000005)));
          auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ + -0.35)),auVar370);
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          fVar533 = 0.0;
          fVar144 = 0.05;
          fVar460 = 0.0;
          fVar310 = -0.35;
          do {
            fVar308 = fVar533 * 65536.0;
            auVar278._0_4_ = (float)(1e+32 - (double)fVar308);
            auVar278._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar308) >> 0x20);
            auVar278._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar308),auVar436._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar308),auVar278,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar308 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar311 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar164 = ZEXT416((uint)(fVar311 * fVar311 + fVar308 * fVar308 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar312 = 1.0 / auVar164._0_4_;
            auVar436 = ZEXT464((uint)fVar310);
            fVar308 = fVar460 + fVar308 * fVar312 * 0.120000005;
            fVar311 = fVar310 + fVar311 * fVar312 * 0.120000005;
            fVar312 = fVar311 * fVar311 + fVar308 * fVar308 + 0.0;
            fVar313 = fVar144 + -0.010000001;
            if (fVar312 < 0.040000003) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
              fVar312 = 1.0 / auVar164._0_4_;
              fVar308 = fVar308 * fVar312 * 0.2;
              fVar311 = fVar311 * fVar312 * 0.2;
            }
            fVar309 = fVar308 - fVar460;
            fVar589 = fVar311 - fVar310;
            auVar164 = ZEXT416((uint)(fVar589 * fVar589 + fVar309 * fVar309 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar481 = ZEXT1664(auVar164);
            fVar542 = fVar313 - fVar144;
            fVar312 = fVar542 * fVar542;
            fVar315 = auVar164._0_4_;
            fVar598 = fVar315 * fVar315 - fVar312;
            fVar543 = fVar308;
            fVar499 = fVar311;
            if (fVar598 < 0.0) {
              fVar598 = sqrtf(fVar598);
              fVar310 = auVar436._0_4_;
              fVar315 = auVar481._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar598),ZEXT416((uint)fVar598));
              fVar598 = auVar164._0_4_;
            }
            fVar309 = fVar309 * (1.0 / fVar315);
            fVar589 = fVar589 * (1.0 / fVar315);
            fVar315 = (fVar237 - fVar460) * fVar309 + (fVar146 - fVar310) * fVar589;
            fVar309 = (fVar146 - fVar310) * fVar309 - (fVar237 - fVar460) * fVar589;
            auVar164 = vandps_avx(ZEXT416((uint)fVar309),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar436 = ZEXT1264(ZEXT812(0));
            auVar171 = ZEXT416((uint)(fVar312 + fVar598 * fVar598 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar460 = 1.0 / auVar171._0_4_;
            fVar310 = fVar598 * fVar460;
            fVar542 = fVar542 * fVar460;
            fVar460 = auVar164._0_4_ * fVar542 + fVar315 * fVar310 + 0.0;
            if (fVar460 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar315 * fVar315 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar460 = auVar164._0_4_;
LAB_14013258a:
              fVar460 = fVar460 - fVar144;
            }
            else {
              if (fVar460 < fVar598) {
                fVar460 = auVar164._0_4_ * fVar310 + fVar315 * -fVar542 + 0.0;
                goto LAB_14013258a;
              }
              auVar164 = ZEXT416((uint)((fVar146 - fVar499) * (fVar146 - fVar499) +
                                       (fVar237 - fVar543) * (fVar237 - fVar543) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar460 = auVar164._0_4_ - fVar313;
            }
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),ZEXT416((uint)fVar460));
            fVar533 = fVar533 + 0.2;
            fVar144 = fVar313;
            fVar460 = fVar308;
            fVar310 = fVar311;
          } while (fVar533 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("SPED");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 3.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 30.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f6666663f333333;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e4ccccd;
    materials_list[index].electric_update_fn = cell_speedometer;
    iVar50 = get_icon_coords(0x34);
    rVar104._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar104._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar104;
  }
  iVar50 = get_icon_coords(0x34);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar237 = 0.0;
          auVar152 = ZEXT416((uint)(fVar314 * fVar314 + 0.0 + fVar146 * fVar146));
          auVar171 = vsqrtss_avx(auVar152,auVar152);
          auVar425._8_4_ = 0x7fffffff;
          auVar425._0_8_ = 0x7fffffff7fffffff;
          auVar425._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)fVar314),auVar425);
          auVar152 = vmovsldup_avx(ZEXT416((uint)(auVar152._0_4_ + fVar146 + 0.06)));
          auVar279._0_4_ = auVar152._0_4_ + -0.05;
          auVar279._4_4_ = auVar152._4_4_ + -0.25;
          auVar279._8_4_ = auVar152._8_4_ + 0.0;
          auVar279._12_4_ = auVar152._12_4_ + 0.0;
          auVar152 = vandps_avx(auVar279,auVar425);
          auVar164 = vshufps_avx(auVar152,auVar152,0xf5);
          auVar152 = vminss_avx(auVar152,auVar164);
          auVar164 = vmaxss_avx(ZEXT416((uint)(auVar152._0_4_ + -0.085)),
                                ZEXT416((uint)(auVar171._0_4_ + -0.295)));
          auVar152 = vandps_avx(ZEXT416((uint)(auVar171._0_4_ + -0.35)),auVar425);
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          fVar533 = 0.05;
          fVar144 = 0.0;
          fVar460 = -0.35;
          do {
            fVar310 = fVar237 * 65536.0;
            auVar280._0_4_ = (float)(1e+32 - (double)fVar310);
            auVar280._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar310) >> 0x20);
            auVar280._8_8_ = 0;
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar310),auVar436._0_16_,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar310),auVar280,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            fVar310 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar308 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar310 * fVar310 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar311 = 1.0 / auVar164._0_4_;
            fVar310 = fVar144 + fVar310 * fVar311 * 0.120000005;
            fVar308 = fVar460 + fVar308 * fVar311 * 0.120000005;
            fVar311 = fVar308 * fVar308 + fVar310 * fVar310 + 0.0;
            fVar312 = fVar533 + -0.010000001;
            if (fVar311 < 0.040000003) {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = 1.0 / auVar164._0_4_;
              fVar310 = fVar310 * fVar311 * 0.2;
              fVar308 = fVar308 * fVar311 * 0.2;
            }
            fVar313 = fVar310 - fVar144;
            auVar481 = ZEXT464((uint)fVar313);
            fVar309 = fVar308 - fVar460;
            auVar164 = ZEXT416((uint)(fVar309 * fVar309 + fVar313 * fVar313 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar436 = ZEXT1664(auVar164);
            fVar499 = auVar164._0_4_;
            fVar589 = fVar312 - fVar533;
            auVar541 = ZEXT464((uint)fVar589);
            fVar311 = fVar589 * fVar589;
            fVar542 = fVar499 * fVar499 - fVar311;
            fVar598 = fVar310;
            fVar543 = fVar308;
            if (fVar542 < 0.0) {
              fVar542 = sqrtf(fVar542);
              fVar589 = auVar541._0_4_;
              fVar313 = auVar481._0_4_;
              fVar499 = auVar436._0_4_;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar542 = auVar164._0_4_;
            }
            fVar313 = fVar313 * (1.0 / fVar499);
            fVar309 = fVar309 * (1.0 / fVar499);
            fVar499 = (fVar314 - fVar144) * fVar313 + (fVar146 - fVar460) * fVar309;
            fVar313 = (fVar146 - fVar460) * fVar313 - (fVar314 - fVar144) * fVar309;
            auVar164 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar171 = ZEXT416((uint)(fVar311 + fVar542 * fVar542 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar144 = 1.0 / auVar171._0_4_;
            fVar460 = fVar542 * fVar144;
            fVar589 = fVar589 * fVar144;
            fVar144 = auVar164._0_4_ * fVar589 + fVar499 * fVar460 + 0.0;
            if (fVar144 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar499 * fVar499 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              auVar164 = ZEXT416((uint)(auVar164._0_4_ - fVar533));
              auVar436 = ZEXT1264(ZEXT812(0));
            }
            else if (fVar542 <= fVar144) {
              auVar436 = ZEXT1264(ZEXT812(0));
              auVar164 = ZEXT416((uint)((fVar146 - fVar543) * (fVar146 - fVar543) +
                                       (fVar314 - fVar598) * (fVar314 - fVar598) + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              auVar164 = ZEXT416((uint)(auVar164._0_4_ - fVar312));
            }
            else {
              auVar436 = ZEXT1264(ZEXT812(0));
              auVar164 = ZEXT416((uint)((auVar164._0_4_ * fVar460 + fVar499 * -fVar589 + 0.0) -
                                       fVar533));
            }
            auVar152 = vminss_avx(ZEXT416(auVar152._0_4_),auVar164);
            fVar237 = fVar237 + 0.2;
            fVar533 = fVar312;
            fVar144 = fVar310;
            fVar460 = fVar308;
          } while (fVar237 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("THRM");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 3.0;
    materials_list[index].capacitance = 1000.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].leak_conductivity = 30.0;
    materials_list[index].heat_conductivity = materials_list[index].heat_conductivity * 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d75c28f3e99999a;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d4ccccd;
    materials_list[index].electric_update_fn = cell_thermoelectric;
    iVar50 = get_icon_coords(0x35);
    rVar105._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar105._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar105;
  }
  iVar50 = get_icon_coords(0x35);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar237 = fVar314 * fVar314 + 0.0;
          fVar533 = fVar314 * 0.0 + fVar146;
          fVar310 = fVar146 * 0.0 - fVar314;
          auVar152 = vandps_avx(ZEXT416((uint)fVar310),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar460 = auVar152._0_4_;
          fVar144 = fVar460 * 0.0 + fVar533 + 0.0;
          if (fVar144 <= 0.0) {
            fVar308 = fVar310 * fVar310 + fVar533 * fVar533 + 0.0;
LAB_1401331c1:
            auVar152 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
            fVar308 = auVar152._0_4_;
          }
          else {
            if (0.7 <= fVar144) {
              fVar308 = (fVar146 + -0.7) * (fVar146 + -0.7) + fVar237;
              goto LAB_1401331c1;
            }
            fVar308 = fVar460 + fVar533 * -0.0 + 0.0;
          }
          auVar152 = ZEXT416((uint)(fVar237 + fVar146 * fVar146));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar164 = ZEXT416((uint)(auVar152._0_4_ + -0.2));
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(fVar308 + -0.125)));
          auVar152 = vandps_avx(auVar152,___xmm_7fffffff7fffffff7fffffff7fffffff);
          if (fVar144 <= 0.0) {
            fVar237 = fVar533 * fVar533 + 0.0;
            fVar310 = fVar310 * fVar310;
LAB_14013323d:
            auVar171 = vsqrtss_avx(ZEXT416((uint)(fVar310 + fVar237)),
                                   ZEXT416((uint)(fVar310 + fVar237)));
            fVar460 = auVar171._0_4_;
          }
          else {
            if (0.4 <= fVar144) {
              fVar310 = (fVar146 + -0.4) * (fVar146 + -0.4);
              goto LAB_14013323d;
            }
            fVar460 = fVar460 + fVar533 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),
                                ZEXT416((uint)(auVar152._0_4_ + -0.05)));
          auVar164 = vminss_avx(auVar164,ZEXT416((uint)(fVar460 + -0.125)));
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + 0.055)));
          auVar481 = ZEXT1664(auVar152);
          iVar133 = 0;
          do {
            fVar237 = (float)iVar133 * 0.1 + 0.2;
            fVar460 = fVar237 - fVar237;
            auVar152 = ZEXT416((uint)(fVar460 * fVar460 + 0.0064));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar310 = auVar152._0_4_;
            fVar144 = (1.0 / fVar310) * 0.08;
            fVar460 = fVar460 * (1.0 / fVar310);
            fVar237 = fVar146 - fVar237;
            fVar533 = (fVar314 + -0.2) * fVar144 + fVar237 * fVar460;
            fVar308 = fVar237 * fVar144 - (fVar314 + -0.2) * fVar460;
            auVar152 = vandps_avx(ZEXT416((uint)fVar308),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar164 = vsqrtss_avx(ZEXT416((uint)(fVar310 * fVar310)),
                                   ZEXT416((uint)(fVar310 * fVar310)));
            fVar311 = auVar164._0_4_;
            auVar164 = ZEXT416((uint)(fVar311 * fVar311 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar310 = 1.0 / auVar164._0_4_;
            fVar460 = fVar310 * fVar311;
            fVar310 = fVar310 * 0.0;
            fVar144 = fVar310 * auVar152._0_4_ + fVar533 * fVar460 + 0.0;
            if (fVar144 <= 0.0) {
              fVar237 = fVar308 * fVar308 + fVar533 * fVar533 + 0.0;
LAB_1401332a0:
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar237));
              fVar237 = auVar152._0_4_;
            }
            else {
              if (fVar311 <= fVar144) {
                fVar237 = fVar237 * fVar237 + (fVar314 + -0.28) * (fVar314 + -0.28) + 0.0;
                goto LAB_1401332a0;
              }
              fVar237 = auVar152._0_4_ * fVar460 + fVar533 * -fVar310 + 0.0;
            }
            auVar152 = vminss_avx(auVar481._0_16_,ZEXT416((uint)(fVar237 + -0.03)));
            auVar481 = ZEXT1664(auVar152);
            iVar133 = iVar133 + 1;
          } while (iVar133 != 6);
          fVar237 = 0.0;
          fVar533 = 0.0;
          fVar144 = -0.2;
          fVar460 = 0.05;
          do {
            auVar164 = auVar481._0_16_;
            fVar310 = fVar237 * 65536.0;
            auVar281._0_4_ = (float)(1e+32 - (double)fVar310);
            auVar281._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar310) >> 0x20);
            auVar281._8_8_ = 0;
            auVar152 = vcmpss_avx(ZEXT416((uint)fVar310),auVar436._0_16_,1);
            auVar152 = vblendvps_avx(ZEXT416((uint)fVar310),auVar281,auVar152);
            uVar140 = (uint)(longlong)auVar152._0_4_;
            fVar310 = (float)((uVar140 * 0x41c64e6d >> 3 ^ (uVar140 >> 1) * 0x41c64e6d) * 0x41c64e6d
                             ) * 2.3283064e-10 + -0.5;
            fVar308 = (float)(((uVar140 + 0x2f88ed >> 1 ^ 0x2f88ed) * 0x41c64e6d >> 3 ^
                              (uVar140 + 0x2f88ed ^ 0x17c476) * 0x41c64e6d) * 0x41c64e6d) *
                      2.3283064e-10 + -0.5 + -0.5;
            auVar152 = ZEXT416((uint)(fVar308 * fVar308 + fVar310 * fVar310 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar311 = 1.0 / auVar152._0_4_;
            fVar310 = fVar533 + fVar310 * fVar311 * 0.120000005;
            fVar308 = fVar308 * fVar311 * 0.120000005 + fVar144;
            fVar311 = fVar308 * fVar308 + fVar310 * fVar310 + 0.0;
            fVar312 = fVar460 + -0.010000001;
            if (fVar311 < 0.040000003) {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
              fVar311 = 1.0 / auVar152._0_4_;
              fVar310 = fVar310 * fVar311 * 0.2;
              fVar308 = fVar308 * fVar311 * 0.2;
            }
            fVar313 = fVar310 - fVar533;
            auVar541 = ZEXT464((uint)fVar313);
            fVar309 = fVar308 - fVar144;
            auVar152 = ZEXT416((uint)(fVar309 * fVar309 + fVar313 * fVar313 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar436 = ZEXT1664(auVar152);
            fVar543 = auVar152._0_4_;
            fVar589 = fVar312 - fVar460;
            auVar569 = ZEXT464((uint)fVar589);
            fVar311 = fVar589 * fVar589;
            fVar542 = fVar543 * fVar543 - fVar311;
            fVar598 = fVar308;
            if (fVar542 < 0.0) {
              fVar542 = sqrtf(fVar542);
              fVar589 = auVar569._0_4_;
              fVar313 = auVar541._0_4_;
              fVar543 = auVar436._0_4_;
              auVar164 = auVar481._0_16_;
            }
            else {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar542 = auVar152._0_4_;
            }
            fVar313 = fVar313 * (1.0 / fVar543);
            fVar309 = fVar309 * (1.0 / fVar543);
            fVar543 = (fVar314 - fVar533) * fVar313 + (fVar146 - fVar144) * fVar309;
            fVar313 = (fVar146 - fVar144) * fVar313 - (fVar314 - fVar533) * fVar309;
            auVar152 = vandps_avx(ZEXT416((uint)fVar313),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar436 = ZEXT1264(ZEXT812(0));
            auVar171 = ZEXT416((uint)(fVar311 + fVar542 * fVar542 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar533 = 1.0 / auVar171._0_4_;
            fVar144 = fVar542 * fVar533;
            fVar589 = fVar589 * fVar533;
            fVar533 = auVar152._0_4_ * fVar589 + fVar543 * fVar144 + 0.0;
            if (fVar533 <= 0.0) {
              auVar152 = ZEXT416((uint)(fVar313 * fVar313 + fVar543 * fVar543 + 0.0));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              auVar152 = ZEXT416((uint)(auVar152._0_4_ - fVar460));
            }
            else if (fVar542 <= fVar533) {
              auVar152 = ZEXT416((uint)((fVar146 - fVar598) * (fVar146 - fVar598) +
                                       (fVar314 - fVar310) * (fVar314 - fVar310) + 0.0));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              auVar152 = ZEXT416((uint)(auVar152._0_4_ - fVar312));
            }
            else {
              auVar152 = ZEXT416((uint)((auVar152._0_4_ * fVar144 + fVar543 * -fVar589 + 0.0) -
                                       fVar460));
            }
            auVar152 = vminss_avx(auVar164,auVar152);
            auVar481 = ZEXT1664(auVar152);
            fVar237 = fVar237 + 0.2;
            fVar533 = fVar310;
            fVar144 = fVar308;
            fVar460 = fVar312;
          } while (fVar237 < 1.0);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("JETT");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 4;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.6;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = materials_list[index].capacitance * 0.25;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f4ccccd3f4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ecccccd;
    materials_list[index].force_update_fn = cell_jet_force;
    materials_list[index].physics_update_fn = cell_jet_particles;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 2;
    iVar50 = get_icon_coords(0x36);
    rVar106._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar106._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar106;
  }
  iVar50 = get_icon_coords(0x36);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar481 = ZEXT464(0x3f800000);
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        fVar314 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar146 = auVar481._0_4_ + fVar314;
        fVar314 = fVar314 + -0.25;
        auVar152 = vmovsldup_avx(ZEXT416((uint)(auVar436._0_4_ - auVar436._0_4_ * fVar146)));
        auVar164 = vmovsldup_avx(ZEXT416((uint)fVar146));
        index = 0;
        do {
          auVar569 = ZEXT464(0xbf800000);
          auVar548._8_4_ = 0x7fffffff;
          auVar548._0_8_ = 0x7fffffff7fffffff;
          auVar548._12_4_ = 0x7fffffff;
          auVar498 = ZEXT1664(auVar548);
          auVar171 = vandps_avx(auVar548,ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 +
                                                       -1.0)));
          auVar532 = ZEXT1664(auVar171);
          auVar541 = ZEXT464((uint)(auVar436._0_4_ + auVar171._0_4_ * auVar436._0_4_));
          fVar146 = auVar171._0_4_ + -0.35;
          fVar237 = atan2f(fVar314,fVar146);
          fVar533 = 3.1415927;
          fVar237 = fmodf(fVar237 + 3.1415927,6.2831855);
          auVar171 = ZEXT416((uint)(auVar436._0_4_ + fVar146 * fVar146 + fVar314 * fVar314));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          fVar146 = auVar171._0_4_ + -0.1 + (fVar237 * -0.1) / fVar533;
          fVar237 = fVar146 / 0.2;
          auVar171 = vandps_avx(ZEXT416((uint)fVar237),___xmm_80000000800000008000000080000000);
          auVar453._8_4_ = 0x3effffff;
          auVar453._0_8_ = 0x3effffff3effffff;
          auVar453._12_4_ = 0x3effffff;
          auVar171 = vorps_avx(auVar171,auVar453);
          auVar171 = ZEXT416((uint)(fVar237 + auVar171._0_4_));
          auVar171 = vroundss_avx(auVar171,auVar171,0xb);
          auVar343 = auVar436._0_16_;
          auVar171 = vminss_avx(auVar343,auVar171);
          auVar171 = vmaxss_avx(auVar569._0_16_,auVar171);
          auVar447 = auVar498._0_16_;
          auVar171 = vandps_avx(auVar447,ZEXT416((uint)(fVar146 - auVar171._0_4_ * 0.2)));
          auVar189 = vmovsldup_avx(auVar541._0_16_);
          auVar283._0_4_ = auVar189._0_4_ + auVar164._0_4_ * 0.5;
          auVar283._4_4_ = auVar189._4_4_ + auVar164._4_4_ * 1.27;
          auVar283._8_4_ = auVar189._8_4_ + auVar164._8_4_ * 0.5;
          auVar283._12_4_ = auVar189._12_4_ + auVar164._12_4_ * 1.27;
          auVar426._0_4_ = auVar283._0_4_ * 4.0;
          auVar426._4_4_ = auVar283._4_4_ * 0.0;
          auVar426._8_4_ = auVar283._8_4_ * 0.0;
          auVar426._12_4_ = auVar283._12_4_ * 0.0;
          auVar181 = vdivps_avx(auVar283,___xmm_00000000000000003fce738100000000);
          auVar205 = vblendps_avx(auVar426,auVar181,2);
          auVar189 = vshufps_avx(auVar532._0_16_,auVar532._0_16_,0xa0);
          local_248 = auVar152._0_4_;
          fStack_244 = auVar152._4_4_;
          fStack_240 = auVar152._8_4_;
          fStack_23c = auVar152._12_4_;
          auVar284._0_4_ = auVar189._0_4_ * 0.5 + local_248;
          auVar284._4_4_ = auVar189._4_4_ * 1.27 + fStack_244;
          auVar284._8_4_ = auVar189._8_4_ * 0.5 + fStack_240;
          auVar284._12_4_ = auVar189._12_4_ * 1.27 + fStack_23c;
          auVar189 = vandps_avx(auVar447,auVar284);
          auVar471._0_4_ = auVar189._0_4_ + auVar189._0_4_;
          auVar471._4_4_ = auVar189._4_4_ + auVar189._4_4_;
          auVar471._8_4_ = auVar189._8_4_ + auVar189._8_4_;
          auVar471._12_4_ = auVar189._12_4_ + auVar189._12_4_;
          auVar323 = vdivps_avx(auVar189,___xmm_00000000000000003fa28f5c00000000);
          auVar189 = vblendps_avx(auVar471,auVar323,2);
          auVar371._0_4_ = auVar189._0_4_ + -0.3;
          auVar371._4_4_ = auVar189._4_4_ + -0.05;
          auVar371._8_4_ = auVar189._8_4_ + 0.0;
          auVar371._12_4_ = auVar189._12_4_ + 0.0;
          auVar285._0_4_ = auVar371._0_4_ * -0.15 + auVar205._0_4_ * 0.25;
          auVar285._4_4_ = auVar371._4_4_ * 0.06999999 + auVar205._4_4_ * 1.6128999;
          auVar285._8_4_ = auVar371._8_4_ * -0.15 + auVar205._8_4_ * 0.0;
          auVar285._12_4_ = auVar371._12_4_ * 0.06999999 + auVar205._12_4_ * 0.0;
          auVar262 = vdivps_avx(auVar285,___xmm_00000000000000003fcf14113e8b851f);
          auVar286._0_4_ = auVar205._0_4_ + -0.5;
          auVar286._4_4_ = auVar205._4_4_ + -0.5;
          auVar286._8_4_ = auVar205._8_4_ + -0.5;
          auVar286._12_4_ = auVar205._12_4_ + -0.5;
          auVar189 = vandps_avx(auVar447,auVar286);
          auVar287._0_4_ = auVar189._0_4_ + -0.5;
          auVar287._4_4_ = auVar189._4_4_ + -0.5;
          auVar287._8_4_ = auVar189._8_4_ + -0.5;
          auVar287._12_4_ = auVar189._12_4_ + -0.5;
          auVar521._8_4_ = 0x3f800000;
          auVar521._0_8_ = 0x3f8000003f800000;
          auVar521._12_4_ = 0x3f800000;
          auVar189 = vminps_avx(auVar521,auVar262);
          auVar189 = vmaxps_avx(ZEXT816(0),auVar189);
          auVar549._0_4_ = auVar189._0_4_ * -0.15;
          auVar549._4_4_ = auVar189._4_4_ * 0.06999999;
          auVar549._8_4_ = auVar189._8_4_ * -0.15;
          auVar549._12_4_ = auVar189._12_4_ * 0.06999999;
          auVar447 = vsubps_avx(auVar371,auVar549);
          auVar316 = vsubps_avx(auVar205,auVar189);
          auVar205 = vinsertps_avx(auVar316,auVar287,0x4c);
          auVar262 = vmaxps_avx(auVar447,auVar287);
          auVar189 = vcmpps_avx(ZEXT816(0),auVar262,1);
          auVar189 = vshufps_avx(auVar189,auVar189,0x50);
          uVar140 = vmovmskpd_avx(auVar189);
          auVar489 = auVar481._0_16_;
          auVar189 = auVar489;
          if ((uVar140 & 2) == 0) {
            auVar189 = SUB6416(ZEXT464(0xbf800000),0);
          }
          auVar153 = auVar489;
          if ((uVar140 & 1) == 0) {
            auVar153 = SUB6416(ZEXT464(0xbf800000),0);
          }
          auVar181 = vmovshdup_avx(auVar181);
          auVar181 = vcmpss_avx(auVar181,SUB6416(ZEXT464(0x3f000000),0),1);
          auVar604._8_4_ = 0x3df5c28f;
          auVar604._0_8_ = 0x3df5c28f3df5c28f;
          auVar604._12_4_ = 0x3df5c28f;
          auVar181 = vblendvps_avx(auVar604,___xmm_3d4ccccd3d4ccccd3d4ccccd3d4ccccd,auVar181);
          auVar437 = vmovshdup_avx(auVar323);
          auVar323 = vcmpss_avx(auVar426,SUB6416(ZEXT464(0x3f000000),0),1);
          auVar605._8_4_ = 0x3e19999a;
          auVar605._0_8_ = 0x3e19999a3e19999a;
          auVar605._12_4_ = 0x3e19999a;
          auVar323 = vblendvps_avx(auVar605,___xmm_3e99999a3e99999a3e99999a3e99999a,auVar323);
          auVar181 = vmaxss_avx(auVar343,ZEXT416((uint)(auVar437._0_4_ - auVar181._0_4_)));
          auVar181 = vblendps_avx(auVar447,auVar181,1);
          auVar470._0_4_ =
               auVar181._0_4_ * auVar181._0_4_ + auVar205._0_4_ * auVar205._0_4_ * 1.6128999;
          auVar470._4_4_ =
               auVar181._4_4_ * auVar181._4_4_ + auVar205._4_4_ * auVar205._4_4_ * 1.6128999;
          auVar470._8_4_ = auVar181._8_4_ * auVar181._8_4_ + auVar205._8_4_ * auVar205._8_4_ * 0.0;
          auVar470._12_4_ =
               auVar181._12_4_ * auVar181._12_4_ + auVar205._12_4_ * auVar205._12_4_ * 0.0;
          auVar205 = vmovshdup_avx(auVar470);
          auVar181 = vminss_avx(auVar470,auVar205);
          auVar205 = vmovshdup_avx(auVar262);
          auVar205 = vcmpss_avx(auVar343,auVar205,4);
          auVar189 = vandps_avx(auVar189,auVar205);
          auVar205 = vsqrtss_avx(auVar181,auVar181);
          auVar181 = vminss_avx(ZEXT416((uint)(auVar189._0_4_ * auVar205._0_4_)),
                                ZEXT416((uint)(auVar171._0_4_ + -0.07)));
          auVar171 = vcmpss_avx(auVar262,auVar343,4);
          auVar171 = vandps_avx(auVar153,auVar171);
          auVar189 = vinsertps_avx(auVar287,auVar316,0x1c);
          auVar205 = vmaxss_avx(auVar343,ZEXT416((uint)(auVar471._0_4_ - auVar323._0_4_)));
          auVar205 = vinsertps_avx(auVar205,auVar447,0x1c);
          auVar282._0_4_ = auVar205._0_4_ * auVar205._0_4_ + auVar189._0_4_ * auVar189._0_4_ * 0.25;
          auVar282._4_4_ = auVar205._4_4_ * auVar205._4_4_ + auVar189._4_4_ * auVar189._4_4_ * 0.25;
          auVar282._8_4_ = auVar205._8_4_ * auVar205._8_4_ + auVar189._8_4_ * auVar189._8_4_ * 0.0;
          auVar282._12_4_ =
               auVar205._12_4_ * auVar205._12_4_ + auVar189._12_4_ * auVar189._12_4_ * 0.0;
          auVar189 = vmovshdup_avx(auVar282);
          auVar189 = vminss_avx(auVar282,auVar189);
          auVar189 = vsqrtss_avx(auVar189,auVar189);
          fVar146 = auVar171._0_4_ * auVar189._0_4_ + -0.05;
          auVar171 = vmaxss_avx(ZEXT416((uint)(0.03 - fVar146)),auVar181);
          auVar171 = vminss_avx(ZEXT416((uint)fVar146),auVar171);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar171._0_4_;
          index = index + 1;
          auVar481 = ZEXT1664(auVar489);
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("ACID");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 1;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.08;
    materials_list[index].base_cost = 12.0;
    materials_list[index].genome_size = 16.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f19999a00000000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f80000000000000;
    materials_list[index].physics_update_fn = cell_acid;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 2;
    iVar50 = get_icon_coords(0x37);
    rVar107._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar107._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar107;
  }
  iVar50 = get_icon_coords(0x37);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar288._0_12_ = ZEXT812(0);
      auVar288._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar583._8_4_ = 0x7fffffff;
        auVar583._0_8_ = 0x7fffffff7fffffff;
        auVar583._12_4_ = 0x7fffffff;
        auVar152 = vandps_avx(auVar583,ZEXT416((uint)fVar146));
        auVar164 = vminss_avx(SUB6416(ZEXT464(0x3f0b851f),0),auVar152);
        fVar237 = auVar152._0_4_;
        fVar314 = fVar237 - auVar164._0_4_;
        index = 0;
        do {
          fVar533 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar533),auVar583);
          fVar308 = auVar152._0_4_;
          auVar164 = vandps_avx(auVar583,ZEXT416((uint)(fVar308 * 0.5 +
                                                       (0.0 - (fVar146 + 0.5) * 0.0))));
          fVar144 = auVar164._0_4_ + auVar164._0_4_;
          fVar310 = ((fVar146 + 0.5) * 0.5 + fVar308 * 0.0 + 0.0) * 4.0;
          auVar164 = vcmpss_avx(ZEXT416((uint)fVar310),SUB6416(ZEXT464(0x3f000000),0),1);
          auVar522._8_4_ = 0x3dcccccd;
          auVar522._0_8_ = 0x3dcccccd3dcccccd;
          auVar522._12_4_ = 0x3dcccccd;
          auVar171 = vblendvps_avx(auVar522,___xmm_3e99999a3e99999a3e99999a3e99999a,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(fVar310 + -0.5)),auVar583);
          fVar460 = fVar144 + -0.3;
          auVar523._0_4_ = (fVar460 * -0.20000002 + fVar310 * 0.25) / 0.29000002;
          auVar523._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar189 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar523);
          auVar205 = vmaxss_avx(auVar288,auVar189);
          auVar181 = ZEXT416((uint)(fVar460 - auVar205._0_4_ * -0.20000002));
          auVar323 = ZEXT416((uint)(auVar164._0_4_ + -0.5));
          auVar189 = vmaxss_avx(auVar181,auVar323);
          auVar164 = vcmpss_avx(auVar288,auVar189,1);
          auVar372._8_4_ = 0xbf800000;
          auVar372._0_8_ = 0xbf800000bf800000;
          auVar372._12_4_ = 0xbf800000;
          auVar164 = vblendvps_avx(auVar372,___xmm_3f8000003f8000003f8000003f800000,auVar164);
          auVar189 = vcmpss_avx(auVar189,auVar288,4);
          auVar164 = vandps_avx(auVar189,auVar164);
          auVar189 = vinsertps_avx(auVar323,ZEXT416((uint)(fVar310 - auVar205._0_4_)),0x10);
          auVar171 = vmaxss_avx(auVar288,ZEXT416((uint)(fVar144 - auVar171._0_4_)));
          auVar171 = vinsertps_avx(auVar171,auVar181,0x10);
          auVar206._0_4_ = auVar171._0_4_ * auVar171._0_4_ + auVar189._0_4_ * auVar189._0_4_ * 0.25;
          auVar206._4_4_ = auVar171._4_4_ * auVar171._4_4_ + auVar189._4_4_ * auVar189._4_4_ * 0.25;
          auVar206._8_4_ = auVar171._8_4_ * auVar171._8_4_ + auVar189._8_4_ * auVar189._8_4_ * 0.0;
          auVar206._12_4_ =
               auVar171._12_4_ * auVar171._12_4_ + auVar189._12_4_ * auVar189._12_4_ * 0.0;
          auVar171 = vmovshdup_avx(auVar206);
          auVar171 = vminss_avx(auVar206,auVar171);
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          if ((0.545 <= fVar237) || (0.23 <= fVar308)) {
            auVar152 = vminss_avx(SUB6416(ZEXT464(0x3e6b851f),0),auVar152);
            fVar308 = fVar308 - auVar152._0_4_;
            auVar152 = ZEXT416((uint)(fVar314 * fVar314 + fVar308 * fVar308 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar144 = auVar152._0_4_;
          }
          else {
            auVar152 = vmaxss_avx(ZEXT416((uint)(fVar308 + -0.23)),ZEXT416((uint)(fVar237 + -0.545))
                                 );
            fVar144 = auVar152._0_4_;
          }
          fVar460 = auVar164._0_4_ * auVar171._0_4_ + -0.2;
          auVar583._8_4_ = 0x7fffffff;
          auVar583._0_8_ = 0x7fffffff7fffffff;
          auVar583._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar583,ZEXT416((uint)(fVar460 - (fVar144 + -0.05))));
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar288);
          auVar164 = vminss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)(fVar144 + -0.05)));
          fVar144 = auVar164._0_4_ + (auVar152._0_4_ * auVar152._0_4_ * -0.25) / 0.1;
          auVar152 = vminss_avx(ZEXT416((uint)(-0.1 - fVar144)),ZEXT416((uint)(-0.075 - fVar146)));
          auVar152 = vmaxss_avx(ZEXT416((uint)fVar144),auVar152);
          auVar164 = ZEXT416((uint)((fVar146 + 0.125) * (fVar146 + 0.125) +
                                   (fVar533 + -0.1) * (fVar533 + -0.1) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.15)));
          auVar164 = ZEXT416((uint)((fVar146 + 0.325) * (fVar146 + 0.325) +
                                   (fVar533 + 0.15) * (fVar533 + 0.15) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.125)));
          auVar164 = ZEXT416((uint)((fVar146 + 0.475) * (fVar146 + 0.475) +
                                   (fVar533 + -0.175) * (fVar533 + -0.175) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.1)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("INKY");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c23d70a3c23d70a;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d4ccccd;
    materials_list[index].physics_update_fn = cell_ink;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 2;
    iVar50 = get_icon_coords(0x38);
    rVar108._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar108._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar108;
  }
  iVar50 = get_icon_coords(0x38);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      fVar146 = -0.1;
      do {
        iVar44 = (int)uVar81;
        fVar314 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        fVar533 = (fVar314 * 1.4 + -0.4) * 0.70710677;
        fVar314 = fVar314 + 0.1;
        fVar237 = fVar314 + 0.6;
        fVar460 = auVar436._0_4_;
        auVar152 = vandps_avx(ZEXT416((uint)(fVar314 + 0.3)),___xmm_7fffffff7fffffff7fffffff7fffffff
                             );
        auVar164 = vminss_avx(SUB6416(ZEXT464(0x3e4ccccd),0),auVar152);
        fVar144 = auVar152._0_4_;
        fVar314 = fVar144 - auVar164._0_4_;
        uVar143 = 0;
        do {
          auVar481 = ZEXT464(0x3f000000);
          fVar313 = -1.0;
          fVar310 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar309 = -0.2;
          fVar308 = (fVar310 * 1.4 + -0.2) * 0.70710677;
          fVar312 = fVar533 + (auVar436._0_4_ - fVar308) + 1.1;
          fVar308 = fVar146 + fVar533 + auVar436._0_4_ + fVar308;
          fVar311 = fVar308 + fVar308 + 0.5;
          sinf();
          fVar312 = fVar312 + fVar309 * fVar308 * fVar308 + fVar311 * 0.4 + fVar308 * -0.7;
          fVar311 = atan2f(fVar308,fVar312);
          fVar589 = auVar436._0_4_;
          auVar152 = ZEXT416((uint)(fVar312 * fVar312 + fVar589 + fVar308 * fVar308));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar313 = fVar313 + auVar152._0_4_;
          fVar308 = fVar313 + fVar313 + -0.5;
          auVar498 = ZEXT464((uint)fVar308);
          fVar311 = fVar311 + fVar589 + fVar308 * fVar308 * 0.2;
          auVar152 = vmaxss_avx(ZEXT416((uint)((0.35 - fVar311 * fVar311) * 1.3)),auVar436._0_16_);
          auVar569 = ZEXT1664(auVar152);
          auVar164 = vminss_avx(auVar481._0_16_,ZEXT416((uint)fVar311));
          auVar164 = vmaxss_avx(SUB6416(ZEXT464(0xbf4ccccd),0),auVar164);
          fVar312 = fVar311 - auVar164._0_4_;
          auVar164 = vminss_avx(ZEXT416((uint)(auVar152._0_4_ * 0.2)),ZEXT416((uint)fVar308));
          auVar152 = vmaxss_avx(ZEXT416((uint)(auVar152._0_4_ * fVar309)),auVar164);
          fVar313 = fVar308 - auVar152._0_4_;
          auVar152 = ZEXT416((uint)(fVar313 * fVar313 + fVar589 + fVar312 * fVar312));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar481 = ZEXT464((uint)(fVar146 + auVar152._0_4_));
          auVar550._8_4_ = 0x80000000;
          auVar550._0_8_ = 0x8000000080000000;
          auVar550._12_4_ = 0x80000000;
          auVar541 = ZEXT1664(auVar550);
          auVar152 = vandps_avx(auVar550,ZEXT416((uint)(fVar311 * 10.0)));
          auVar373._8_4_ = 0x3effffff;
          auVar373._0_8_ = 0x3effffff3effffff;
          auVar373._12_4_ = 0x3effffff;
          auVar152 = vorps_avx(auVar152,auVar373);
          auVar152 = ZEXT416((uint)(fVar311 * 10.0 + auVar152._0_4_));
          auVar152 = vroundss_avx(auVar152,auVar152,0xb);
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x40800000),0),auVar152);
          auVar152 = vmaxss_avx(SUB6416(ZEXT464(0xc0800000),0),auVar152);
          fVar313 = auVar152._0_4_ + -2.0;
          fVar312 = auVar152._0_4_ + 1.5;
          if (fVar313 < fVar312) {
            auVar152 = vandps_avx(ZEXT416((uint)fVar308),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar532 = ZEXT1664(auVar152);
            fVar308 = auVar152._0_4_ * 5.0;
            sinf();
            auVar289._0_4_ = auVar569._0_4_ ^ auVar541._0_4_;
            auVar289._4_4_ = auVar569._4_4_ ^ auVar541._4_4_;
            auVar289._8_4_ = auVar569._8_4_ ^ auVar541._8_4_;
            auVar289._12_4_ = auVar569._12_4_ ^ auVar541._12_4_;
            auVar152 = vminss_avx(auVar569._0_16_,auVar498._0_16_);
            auVar152 = vmaxss_avx(auVar289,auVar152);
            fVar309 = (auVar498._0_4_ - auVar152._0_4_) * 0.5;
            do {
              fVar589 = auVar532._0_4_ * -0.2 + fVar308 * -0.15 + fVar311 + fVar313 * fVar146;
              auVar152 = ZEXT416((uint)(fVar309 * fVar309 + auVar436._0_4_ + fVar589 * fVar589));
              auVar152 = vsqrtss_avx(auVar152,auVar152);
              fVar313 = fVar313 + 1.0;
              auVar152 = vminss_avx(auVar481._0_16_,ZEXT416((uint)(auVar152._0_4_ + -0.045)));
              auVar481 = ZEXT1664(auVar152);
            } while (fVar313 < fVar312);
          }
          auVar524._8_4_ = 0x7fffffff;
          auVar524._0_8_ = 0x7fffffff7fffffff;
          auVar524._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar310 + 0.06)),auVar524);
          fVar308 = auVar152._0_4_;
          auVar164 = vandps_avx(ZEXT416((uint)(fVar308 * 0.3 + (fVar460 - fVar460 * fVar237))),
                                auVar524);
          fVar312 = auVar436._0_4_;
          auVar374._0_4_ = (fVar237 * 0.3 + fVar312 + fVar312 * fVar308) / 0.09;
          auVar374._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar171 = vcmpss_avx(auVar374,ZEXT416(0x3f000000),1);
          auVar472._8_4_ = 0x3e99999a;
          auVar472._0_8_ = 0x3e99999a3e99999a;
          auVar472._12_4_ = 0x3e99999a;
          auVar171 = vblendvps_avx(auVar472,___xmm_3eb333333eb333333eb333333eb33333,auVar171);
          fVar311 = auVar164._0_4_ / 0.3;
          auVar164 = vandps_avx(ZEXT416((uint)(auVar374._0_4_ + -0.5)),auVar524);
          fVar310 = fVar311 + -0.35;
          auVar473._0_4_ = (fVar310 * -0.049999982 + auVar374._0_4_ * 0.09) / 0.0925;
          auVar473._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar189 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar473);
          auVar262 = auVar436._0_16_;
          auVar205 = vmaxss_avx(auVar262,auVar189);
          auVar181 = ZEXT416((uint)(fVar310 - auVar205._0_4_ * -0.049999982));
          auVar323 = ZEXT416((uint)(auVar164._0_4_ + -0.5));
          auVar189 = vmaxss_avx(auVar181,auVar323);
          auVar164 = vcmpss_avx(auVar262,auVar189,1);
          auVar551._8_4_ = 0xbf800000;
          auVar551._0_8_ = 0xbf800000bf800000;
          auVar551._12_4_ = 0xbf800000;
          auVar164 = vblendvps_avx(auVar551,___xmm_3f8000003f8000003f8000003f800000,auVar164);
          auVar189 = vcmpss_avx(auVar262,auVar189,4);
          auVar164 = vandps_avx(auVar164,auVar189);
          auVar189 = vinsertps_avx(auVar323,ZEXT416((uint)(auVar374._0_4_ - auVar205._0_4_)),0x10);
          auVar171 = vmaxss_avx(auVar262,ZEXT416((uint)(fVar311 - auVar171._0_4_)));
          auVar171 = vinsertps_avx(auVar171,auVar181,0x10);
          auVar290._0_4_ = auVar171._0_4_ * auVar171._0_4_ + auVar189._0_4_ * auVar189._0_4_ * 0.09;
          auVar290._4_4_ = auVar171._4_4_ * auVar171._4_4_ + auVar189._4_4_ * auVar189._4_4_ * 0.09;
          auVar290._8_4_ = auVar171._8_4_ * auVar171._8_4_ + auVar189._8_4_ * auVar189._8_4_ * 0.0;
          auVar290._12_4_ =
               auVar171._12_4_ * auVar171._12_4_ + auVar189._12_4_ * auVar189._12_4_ * 0.0;
          auVar171 = vmovshdup_avx(auVar290);
          auVar171 = vminss_avx(auVar290,auVar171);
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          fVar310 = fVar146 + auVar164._0_4_ * auVar171._0_4_;
          if ((0.2 <= fVar144) || (0.18 <= fVar308)) {
            auVar152 = vminss_avx(SUB6416(ZEXT464(0x3e3851ec),0),auVar152);
            fVar308 = fVar308 - auVar152._0_4_;
            auVar152 = ZEXT416((uint)(fVar314 * fVar314 + fVar312 + fVar308 * fVar308));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar308 = auVar152._0_4_;
          }
          else {
            auVar152 = vmaxss_avx(ZEXT416((uint)(fVar308 + -0.18)),ZEXT416((uint)(fVar144 + -0.2)));
            fVar308 = auVar152._0_4_;
          }
          auVar152 = vandps_avx(ZEXT416((uint)(fVar310 - (fVar308 + -0.05))),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.02 - auVar152._0_4_)),auVar262);
          auVar164 = vminss_avx(ZEXT416((uint)fVar310),ZEXT416((uint)(fVar308 + -0.05)));
          auVar152 = vminss_avx(ZEXT416((uint)(auVar481._0_4_ * 0.71428573)),
                                ZEXT416((uint)(auVar164._0_4_ +
                                              (auVar152._0_4_ * auVar152._0_4_ * -0.25) / 0.02)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("SPIN");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 3.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].capacitance = materials_list[index].capacitance * 0.25;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f6666663ecccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f19999a;
    materials_list[index].connection_update_fn = cell_spin;
    iVar50 = get_icon_coords(0x39);
    rVar109._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar109._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar109;
  }
  iVar50 = get_icon_coords(0x39);
  iVar44 = *piVar47;
  pfVar84 = (float *)0x0;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar525._0_12_ = ZEXT812(0);
      auVar525._12_4_ = 0;
      auVar291._8_4_ = 0xbf800000;
      auVar291._0_8_ = 0xbf800000bf800000;
      auVar291._12_4_ = 0xbf800000;
      auVar375._8_4_ = 0x3f800000;
      auVar375._0_8_ = 0x3f8000003f800000;
      auVar375._12_4_ = 0x3f800000;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        index = 0;
        pfVar141 = pfVar84;
        do {
          pfVar84 = icon_atlas;
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          fVar144 = fVar314 * -8.742278e-08 - fVar146;
          fVar460 = fVar146 * 8.742278e-08 - fVar314;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar310 = auVar152._0_4_;
          fVar237 = -0.43301275;
          fVar533 = 0.24999991;
          if (fVar310 * -0.8660255 <= fVar144 * 0.49999982) {
            fVar237 = fVar460 * fVar460 + fVar144 * fVar144 + 0.0;
            if (fVar237 <= 1e-06) {
              uVar143 = 0;
            }
            else {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar237),ZEXT416((uint)fVar237));
              fVar237 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44((int)((ulonglong)pfVar141 >> 0x20),fVar237 * fVar144) |
                        (ulonglong)(uint)(fVar237 * fVar310) << 0x20;
            }
            fVar237 = (float)uVar143 * 0.5;
            fVar533 = (float)(uVar143 >> 0x20) * 0.5;
          }
          fVar460 = 0.15877134 - (fVar146 * -0.5 + fVar314 * 0.8660254);
          auVar152 = vandps_avx(ZEXT416((uint)(fVar146 * 0.8660254 + fVar314 * 0.5 + -0.45)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar314 = auVar152._0_4_ + -0.275;
          auVar152 = ZEXT416((uint)((fVar310 - fVar533) * (fVar310 - fVar533) +
                                   (fVar144 - fVar237) * (fVar144 - fVar237) + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          if (0.0 < fVar460 * 1.7320508 + fVar314) {
            fVar237 = fVar314 * -1.7320508;
            fVar314 = (fVar460 * -1.7320508 + fVar314) * 0.5;
            fVar460 = (fVar237 - fVar460) * 0.5;
          }
          auVar164 = vminss_avx(auVar525,ZEXT416((uint)fVar314));
          auVar164 = vmaxss_avx(SUB6416(ZEXT464(0xbf0ccccd),0),auVar164);
          fVar314 = fVar314 - auVar164._0_4_;
          auVar164 = ZEXT416((uint)(fVar460 * fVar460 + fVar314 * fVar314 + 0.0));
          auVar189 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vcmpss_avx(auVar525,ZEXT416((uint)fVar460),1);
          auVar164 = vblendvps_avx(auVar291,auVar375,auVar164);
          auVar171 = vcmpss_avx(ZEXT416((uint)fVar460),auVar525,4);
          auVar164 = vandps_avx(auVar164,auVar171);
          auVar152 = vminss_avx(ZEXT416((uint)(auVar152._0_4_ + -0.12)),
                                ZEXT416((uint)(auVar164._0_4_ * -auVar189._0_4_)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
          pfVar141 = pfVar84;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  iVar133 = n_materials;
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    leech_material_index = iVar133;
    uVar45 = str_to_id("LECH");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 8;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.2;
    materials_list[index].base_cost = 6.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].max_health = 1.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].leeching = 0.05;
    materials_list[index].transfer_rate = materials_list[index].transfer_rate * 10.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 4.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 1;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3b83126f3e29fbe7;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003b83126f;
    materials_list[index].texture_type = 4;
    iVar50 = get_icon_coords(0x3a);
    rVar110._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar110._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar110;
  }
  iVar50 = get_icon_coords(0x3a);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      auVar481 = ZEXT464(0x3f800000);
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        fVar314 = fVar146 + -0.4;
        uVar143 = 0;
        do {
          fVar237 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar237),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar310 = auVar152._0_4_;
          auVar207._0_4_ = fVar310 / 0.15;
          auVar207._4_12_ = auVar152._4_12_;
          auVar474._8_4_ = 0x80000000;
          auVar474._0_8_ = 0x8000000080000000;
          auVar474._12_4_ = 0x80000000;
          auVar152 = vandps_avx(auVar207,auVar474);
          auVar454._8_4_ = 0x3effffff;
          auVar454._0_8_ = 0x3effffff3effffff;
          auVar454._12_4_ = 0x3effffff;
          auVar164 = vorps_avx(auVar152,auVar454);
          auVar292._0_4_ = (fVar310 * 0.32 + 0.0 + (fVar314 + 0.05) * 0.05) / 0.104899995;
          auVar292._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar171 = auVar481._0_16_;
          auVar152 = vminss_avx(auVar171,auVar292);
          auVar152 = vmaxss_avx(auVar436._0_16_,auVar152);
          fVar533 = auVar152._0_4_;
          fVar308 = auVar481._0_4_;
          auVar152 = ZEXT416((uint)(auVar207._0_4_ + auVar164._0_4_));
          auVar152 = vroundss_avx(auVar152,auVar152,0xb);
          auVar152 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),auVar152);
          fVar460 = fVar310 - ((fVar308 - fVar533) * 0.0 + fVar533 * 0.32);
          fVar533 = fVar314 + ((fVar308 - fVar533) * 0.05 - fVar533 * 0.0);
          fVar144 = auVar152._0_4_ + -1.0;
          auVar152 = vminss_avx(ZEXT416((uint)(fVar308 + fVar144)),SUB6416(ZEXT464(0x40000000),0));
          auVar164 = ZEXT416((uint)(fVar533 * fVar533 + fVar460 * fVar460 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar533 = auVar164._0_4_ + -0.1;
          if (fVar144 <= auVar152._0_4_) {
            fVar460 = fVar314 + fVar310 * 0.1 * fVar310;
            auVar568._8_4_ = 0x7fffffff;
            auVar568._0_8_ = 0x7fffffff7fffffff;
            auVar568._12_4_ = 0x7fffffff;
            fVar311 = fVar308 + fVar144;
            do {
              fVar312 = fVar311;
              auVar152 = vcmpss_avx(SUB6416(ZEXT464(0x40000000),0),ZEXT416((uint)fVar144),0);
              auVar152 = vandps_avx(auVar152,SUB6416(ZEXT464(0x3d23d70a),0));
              auVar164 = vandps_avx(auVar568,ZEXT416((uint)(auVar152._0_4_ * -0.5 +
                                                           fVar144 * -0.15 + fVar310)));
              fVar144 = -(fVar310 * 0.1) * fVar310 +
                        ((fVar314 * -0.19611613 + auVar164._0_4_ * 0.9805807 + 0.0 + -0.12 + 0.05) -
                        auVar152._0_4_);
              auVar152 = vandps_avx(auVar568,ZEXT416((uint)(fVar460 - fVar144)));
              auVar152 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),ZEXT816(0) << 0x20);
              auVar164 = vmaxss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)fVar144));
              fVar144 = auVar164._0_4_ + (auVar152._0_4_ * 0.25 * auVar152._0_4_) / 0.1;
              auVar152 = vandps_avx(auVar568,ZEXT416((uint)(fVar533 - fVar144)));
              auVar152 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar152._0_4_)),ZEXT816(0) << 0x20);
              auVar481 = ZEXT1664(auVar171);
              auVar164 = vminss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar144));
              fVar533 = auVar164._0_4_ - (auVar152._0_4_ * 0.25 * auVar152._0_4_) / 0.05;
              auVar152 = vminss_avx(ZEXT416((uint)(fVar312 + fVar308)),
                                    SUB6416(ZEXT464(0x40000000),0));
              fVar311 = fVar312 + fVar308;
              fVar144 = fVar312;
            } while (fVar312 <= auVar152._0_4_);
          }
          else {
            auVar568._8_4_ = 0x7fffffff;
            auVar568._0_8_ = 0x7fffffff7fffffff;
            auVar568._12_4_ = 0x7fffffff;
          }
          fVar144 = fVar237 * 0.0 + -(fVar146 + 0.1);
          fVar460 = (fVar146 + 0.1) * 0.0 + fVar237;
          auVar152 = vandps_avx(auVar568,ZEXT416((uint)fVar460));
          fVar310 = auVar152._0_4_ * 0.33333334 + fVar144 * 0.94280905 + 0.0;
          auVar436 = ZEXT1264(ZEXT812(0));
          if (fVar310 <= 0.0) {
            auVar152 = ZEXT416((uint)(fVar460 * fVar460 + fVar144 * fVar144 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
          }
          else if (0.28284273 <= fVar310) {
            auVar152 = ZEXT416((uint)((fVar146 + 0.4) * (fVar146 + 0.4) + fVar237 * fVar237 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar152 = ZEXT416((uint)(auVar152._0_4_ + -0.1));
          }
          else {
            auVar152 = ZEXT416((uint)(auVar152._0_4_ * 0.94280905 + fVar144 * -0.33333334 + 0.0));
          }
          auVar152 = vminss_avx(ZEXT416((uint)fVar533),auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("INJC");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 3.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].leeching = -0.4;
    uVar15 = materials_list[index].max_health;
    uVar33 = materials_list[index].transfer_rate;
    auVar208._0_4_ = (float)uVar15 * 5.0;
    auVar208._4_4_ = (float)uVar33 * 10.0;
    auVar208._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar208);
    materials_list[index].max_health = (float)(int)uVar19;
    materials_list[index].transfer_rate = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 4.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 1;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ecccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003dcccccd;
    materials_list[index].texture_type = 4;
    iVar50 = get_icon_coords(0x3b);
    rVar111._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar111._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar111;
  }
  iVar50 = get_icon_coords(0x3b);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar455._8_4_ = 0x7fffffff;
      auVar455._0_8_ = 0x7fffffff7fffffff;
      auVar455._12_4_ = 0x7fffffff;
      do {
        fVar146 = (((float)(int)uVar81 + 0.5) * 0.015625 + -1.0) * 0.70710677;
        index = 0;
        do {
          fVar314 = (((float)(int)index + 0.5) * 0.015625 + -1.0) * 0.70710677 + 0.0;
          fVar237 = fVar146 + fVar314 + 0.15;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar314 - fVar146)),auVar455);
          auVar164 = vmovsldup_avx(ZEXT416((uint)fVar237));
          auVar494._0_4_ = auVar164._0_4_ + -0.2;
          auVar494._4_4_ = auVar164._4_4_ + -0.8;
          auVar494._8_4_ = auVar164._8_4_ + 0.0;
          auVar494._12_4_ = auVar164._12_4_ + 0.0;
          auVar164 = vandps_avx(auVar494,auVar455);
          auVar171 = vshufps_avx(auVar152,auVar152,0xa0);
          auVar526._0_4_ = auVar171._0_4_ + -0.15;
          auVar526._4_4_ = auVar171._4_4_ + -0.2;
          auVar526._8_4_ = auVar171._8_4_ + 0.0;
          auVar526._12_4_ = auVar171._12_4_ + 0.0;
          auVar495._0_4_ = auVar164._0_4_ + -0.4;
          auVar495._4_4_ = auVar164._4_4_ + -0.05;
          auVar495._8_4_ = auVar164._8_4_ + 0.0;
          auVar495._12_4_ = auVar164._12_4_ + 0.0;
          auVar164 = vandps_avx(ZEXT416((uint)(fVar237 + -0.65)),auVar455);
          fVar314 = auVar152._0_4_;
          auVar152 = vmaxps_avx(auVar526,auVar495);
          auVar205 = vmaxss_avx(ZEXT416((uint)(fVar314 + -0.07)),
                                ZEXT416((uint)(auVar164._0_4_ + -0.15)));
          auVar164 = vmovshdup_avx(auVar152);
          auVar164 = vminss_avx(auVar152,auVar164);
          auVar152 = ZEXT416((uint)((fVar237 + -0.4) * (fVar237 + -0.4) +
                                   (fVar314 + -0.27) * (fVar314 + -0.27) + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vinsertps_avx(auVar152,ZEXT416((uint)fVar237),0x10);
          auVar171 = vinsertps_avx(auVar164,ZEXT416((uint)((fVar237 + 0.6) * -0.4472136 +
                                                          fVar314 * 0.8944272 + 0.0)),0x10);
          auVar189 = vinsertps_avx(auVar205,ZEXT416((uint)(fVar314 + -0.05)),0x10);
          auVar164 = vblendps_avx(auVar189,auVar164,1);
          auVar189 = vcmpps_avx(auVar171,auVar189,1);
          auVar171 = vblendps_avx(auVar171,auVar205,1);
          auVar293._0_4_ = auVar152._0_4_ + -0.15;
          auVar293._4_4_ = auVar152._4_4_ + 0.35;
          auVar293._8_4_ = auVar152._8_4_ + 0.0;
          auVar293._12_4_ = auVar152._12_4_ + 0.0;
          auVar152 = vandps_avx(auVar293,auVar455);
          auVar294._0_4_ = auVar152._0_4_ + -0.05;
          auVar294._4_4_ = auVar152._4_4_ + -0.25;
          auVar294._8_4_ = auVar152._8_4_ + 0.0;
          auVar294._12_4_ = auVar152._12_4_ + 0.0;
          auVar171 = vblendvps_avx(auVar171,auVar164,auVar189);
          auVar152 = vblendps_avx(auVar171,auVar294,2);
          auVar164 = vblendps_avx(auVar294,auVar171,2);
          auVar152 = vcmpps_avx(auVar152,auVar164,1);
          auVar152 = vblendvps_avx(auVar294,auVar171,auVar152);
          auVar164 = vmovshdup_avx(auVar152);
          auVar152 = vminss_avx(auVar152,auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("XPST");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 2;
    materials_list[index].drop_weight = 0.01;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].max_health = 1.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 4.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 1;
    materials_list[index].physics_update_fn = cell_xp_steal;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3eced9173ebb645a;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f1a9fbe;
    materials_list[index].texture_type = 4;
    iVar50 = get_icon_coords(0x3c);
    rVar112._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar112._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar112;
  }
  iVar50 = get_icon_coords(0x3c);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      fVar146 = -1.0;
      fVar314 = 0.97014254;
      fVar237 = 0.9805807;
      fVar533 = 0.0;
      fVar144 = 0.0;
      fVar460 = 0.24253564;
      fVar310 = -0.19611613;
      fVar308 = 0.0;
      fVar311 = 0.0;
      do {
        fVar589 = 0.5;
        fVar542 = 0.015625;
        fVar312 = fVar146 + ((float)(int)uVar81 + 0.5) * 0.015625 + 0.2;
        fVar313 = fVar312 + 0.05;
        fVar309 = fVar313 * 0.2;
        auVar152 = vinsertps_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar313),0x10);
        auVar481 = ZEXT1664(auVar152);
        index = 0;
        auVar436 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
        fVar312 = fVar313 * 6.0;
        do {
          auVar541 = ZEXT464((uint)(fVar589 + (float)(int)index));
          fVar598 = fVar312;
          sinf();
          fVar313 = fVar146 + auVar541._0_4_ * fVar542;
          auVar152 = vinsertps_avx(ZEXT416((uint)fVar313),
                                   ZEXT416((uint)(fVar309 * fVar312 + fVar313)),0x10);
          auVar152 = vandps_avx(auVar152,auVar436._0_16_);
          auVar209._0_4_ = auVar481._0_4_ * fVar460 + fVar314 * auVar152._0_4_ + 0.0;
          auVar209._4_4_ = auVar481._4_4_ * fVar310 + fVar237 * auVar152._4_4_ + 0.0;
          auVar209._8_4_ = auVar481._8_4_ * fVar308 + fVar533 * auVar152._8_4_ + 0.0;
          auVar209._12_4_ = auVar481._12_4_ * fVar311 + fVar144 * auVar152._12_4_ + 0.0;
          auVar152 = vmovshdup_avx(auVar209);
          auVar152 = vminss_avx(auVar209,auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
          fVar312 = fVar598;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  iVar133 = n_materials;
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    venomous_material_index = iVar133;
    uVar45 = str_to_id("VENM");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x101;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.2;
    materials_list[index].base_cost = 3.0;
    materials_list[index].genome_size = 5.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 1;
    materials_list[index].restitution = 0.0;
    uVar16 = materials_list[index].drag;
    uVar34 = materials_list[index].tangent_drag;
    auVar210._0_4_ = (float)uVar16 * 0.1;
    auVar210._4_4_ = (float)uVar34 * 0.1;
    auVar210._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar210);
    materials_list[index].drag = (float)(int)uVar19;
    materials_list[index].tangent_drag = (float)(int)((ulonglong)uVar19 >> 0x20);
    materials_list[index].hardness = materials_list[index].hardness + materials_list[index].hardness;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d4ccccd00000000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f80000000000000;
    materials_list[index].physics_update_fn = cell_venom;
    iVar50 = get_icon_coords(0x3d);
    rVar113._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar113._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar113;
  }
  iVar50 = get_icon_coords(0x3d);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar481 = ZEXT1264(ZEXT812(0));
      fVar146 = 0.1;
      auVar436 = ZEXT464(0x3f800000);
      do {
        fVar314 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + -0.1;
        fVar144 = fVar314 * -0.2;
        dVar150 = (double)fVar314;
        fVar237 = fVar314 + 0.02;
        fVar533 = fVar314 + 0.15;
        fVar310 = -0.15 - fVar314;
        auVar152 = vmovsldup_avx(ZEXT416((uint)(fVar314 + 0.4)));
        fVar460 = fVar314 * fVar314;
        index = 0;
        auVar584._8_4_ = 0x7fffffff;
        auVar584._0_8_ = 0x7fffffff7fffffff;
        auVar584._12_4_ = 0x7fffffff;
        do {
          auVar189 = auVar436._0_16_;
          fVar308 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar164 = vandps_avx(auVar584,ZEXT416((uint)fVar308));
          auVar541 = ZEXT1664(auVar164);
          fVar312 = auVar164._0_4_;
          dVar38 = (0.09999999403953552 - (dVar150 + dVar150)) * 0.04000000283122063 +
                   (double)(fVar312 * fVar312 * -0.4);
          auVar376._0_4_ = (float)dVar38;
          auVar376._4_4_ = (int)((ulonglong)dVar38 >> 0x20);
          auVar376._8_8_ = 0;
          auVar171 = vmaxss_avx(auVar376,ZEXT416((uint)(fVar312 * -0.15 + fVar144)));
          fVar311 = 0.0;
          if (0.0 <= auVar171._0_4_) {
            auVar295._8_4_ = 0x80000000;
            auVar295._0_8_ = 0x8000000080000000;
            auVar295._12_4_ = 0x80000000;
            fVar308 = fVar310;
            if (0.2 <= fVar312) {
              auVar295._8_4_ = 0x80000000;
              auVar295._0_8_ = 0x8000000080000000;
              auVar295._12_4_ = 0x80000000;
              auVar171 = ZEXT416((uint)(fVar533 * fVar533 +
                                       (fVar312 + -0.2) * (fVar312 + -0.2) + 0.0));
              auVar171 = vsqrtss_avx(auVar171,auVar171);
              fVar308 = auVar171._0_4_;
            }
          }
          else {
            auVar171 = ZEXT416((uint)(fVar308 * fVar308 + 0.0 + fVar460));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar295._8_4_ = 0x80000000;
            auVar295._0_8_ = 0x8000000080000000;
            auVar295._12_4_ = 0x80000000;
            fVar308 = auVar171._0_4_ + -0.25;
          }
          auVar569 = ZEXT464((uint)(fVar308 + -0.05));
          auVar205 = ZEXT416((uint)(fVar308 + -0.05));
          auVar211._0_4_ = fVar312 / fVar146;
          auVar211._4_12_ = auVar164._4_12_;
          auVar171 = vandps_avx(auVar211,auVar295);
          auVar377._8_4_ = 0x3effffff;
          auVar377._0_8_ = 0x3effffff3effffff;
          auVar377._12_4_ = 0x3effffff;
          auVar171 = vorps_avx(auVar171,auVar377);
          auVar171 = ZEXT416((uint)(auVar211._0_4_ + auVar171._0_4_));
          auVar171 = vroundss_avx(auVar171,auVar171,0xb);
          auVar171 = vminss_avx(auVar189,auVar171);
          fVar313 = fVar146 * auVar171._0_4_;
          fVar308 = fVar313 * fVar146 + -0.31;
          fVar309 = fVar313 - fVar313;
          auVar171 = ZEXT416((uint)(fVar308 * fVar308 + fVar309 * fVar309 + 0.0));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar498 = ZEXT1664(auVar171);
          fVar589 = auVar171._0_4_;
          fVar312 = fVar589 * fVar589 + -9.999996e-05;
          if (fVar312 < 0.0) {
            fVar312 = sqrtf(fVar312);
            fVar311 = auVar481._0_4_;
            auVar164 = auVar541._0_16_;
            fVar589 = auVar498._0_4_;
            auVar189 = auVar436._0_16_;
            auVar205 = auVar569._0_16_;
          }
          else {
            auVar171 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
            fVar312 = auVar171._0_4_;
          }
          fVar315 = auVar189._0_4_;
          fVar309 = fVar309 * (fVar315 / fVar589);
          fVar598 = fVar308 * (fVar315 / fVar589);
          fVar589 = auVar164._0_4_;
          fVar313 = fVar589 - fVar313;
          fVar542 = fVar313 * fVar309 + fVar314 * fVar598;
          fVar499 = fVar314 * fVar309 - fVar313 * fVar598;
          auVar171 = vandps_avx(ZEXT416((uint)fVar499),___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar181 = ZEXT416((uint)(fVar312 * fVar312 + 9.999996e-05));
          auVar181 = vsqrtss_avx(auVar181,auVar181);
          fVar543 = fVar315 / auVar181._0_4_;
          fVar598 = fVar543 * fVar312;
          fVar543 = fVar543 * -0.009999998;
          fVar309 = fVar543 * auVar171._0_4_ + fVar542 * fVar598 + fVar311;
          if (fVar309 <= fVar311) {
            auVar171 = ZEXT416((uint)(fVar499 * fVar499 + fVar311 + fVar542 * fVar542));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar308 = auVar171._0_4_;
LAB_140135d64:
            fVar308 = fVar308 + -0.06;
          }
          else {
            if (fVar309 < fVar312) {
              fVar308 = auVar171._0_4_ * fVar598 + fVar311 + fVar542 * -fVar543;
              goto LAB_140135d64;
            }
            auVar171 = ZEXT416((uint)((fVar314 - fVar308) * (fVar314 - fVar308) +
                                     fVar311 + fVar313 * fVar313));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar308 = auVar171._0_4_ + -0.05;
          }
          auVar212._0_12_ = ZEXT812(0);
          auVar212._12_4_ = 0;
          auVar164 = vmovsldup_avx(auVar164);
          local_238._0_4_ = auVar152._0_4_;
          local_238._4_4_ = auVar152._4_4_;
          fStack_230 = auVar152._8_4_;
          fStack_22c = auVar152._12_4_;
          auVar296._0_4_ = (float)local_238 * 0.3 + (auVar164._0_4_ + -0.35) * -0.75 + 0.0;
          auVar296._4_4_ = local_238._4_4_ * 0.3 + (auVar164._4_4_ + 0.4) * 0.8 + 0.0;
          auVar296._8_4_ = fStack_230 * 0.0 + (auVar164._8_4_ + 0.0) * 0.0 + 0.0;
          auVar296._12_4_ = fStack_22c * 0.0 + (auVar164._12_4_ + 0.0) * 0.0 + 0.0;
          auVar164 = vdivps_avx(auVar296,___xmm_00000000000000003f3ae1493f270a3e);
          auVar427._8_4_ = 0x3f800000;
          auVar427._0_8_ = 0x3f8000003f800000;
          auVar427._12_4_ = 0x3f800000;
          auVar171 = vminps_avx(auVar427,auVar164);
          auVar164 = vcmpps_avx(auVar171,ZEXT816(0),1);
          auVar164 = vshufps_avx(auVar164,auVar164,0x50);
          uVar140 = vmovmskpd_avx(auVar164);
          fVar311 = 0.0;
          if ((uVar140 & 2) == 0) {
            auVar164 = vmovshdup_avx(auVar171);
            fVar311 = auVar164._0_4_;
          }
          fVar312 = (fVar315 - fVar311) * -0.4;
          auVar164 = ZEXT816(0);
          if ((uVar140 & 1) == 0) {
            auVar164 = auVar171;
          }
          auVar584._8_4_ = 0x7fffffff;
          auVar584._0_8_ = 0x7fffffff7fffffff;
          auVar584._12_4_ = 0x7fffffff;
          auVar171 = vandps_avx(ZEXT416((uint)(auVar205._0_4_ - fVar308)),auVar584);
          auVar171 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar171._0_4_)),auVar212);
          auVar205 = vminss_avx(auVar205,ZEXT416((uint)fVar308));
          fVar308 = (auVar171._0_4_ * auVar171._0_4_ * 0.25) / -0.05 + auVar205._0_4_;
          auVar171 = ZEXT416((uint)(fVar237 * fVar237 + (fVar589 + -0.12) * (fVar589 + -0.12) + 0.0)
                            );
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          fVar313 = 0.07 - auVar171._0_4_;
          auVar171 = vandps_avx(auVar584,ZEXT416((uint)(fVar308 - fVar313)));
          auVar171 = vmaxss_avx(ZEXT416((uint)(fVar146 - auVar171._0_4_)),auVar212);
          auVar205 = vmaxss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar313));
          fVar308 = auVar205._0_4_ + (auVar171._0_4_ * 0.25 * auVar171._0_4_) / fVar146;
          fVar313 = fVar589 - (fVar311 * 0.4 + fVar312);
          fVar311 = fVar314 + (fVar146 * fVar311 - fVar312);
          auVar171 = ZEXT416((uint)(fVar311 * fVar311 + fVar313 * fVar313 + 0.0));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar171 = vmaxss_avx(ZEXT416((uint)(0.02 - fVar308)),
                                ZEXT416((uint)(auVar171._0_4_ + -0.05)));
          auVar171 = vminss_avx(ZEXT416((uint)fVar308),auVar171);
          fVar308 = auVar164._0_4_;
          auVar436 = ZEXT1664(auVar189);
          fVar589 = fVar589 + fVar308 * 0.4 + (fVar315 - fVar308) * -0.35;
          fVar308 = fVar314 + (fVar315 - fVar308) * 0.4 + fVar146 * fVar308;
          auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar589 * fVar589 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.02 - auVar171._0_4_)),
                                ZEXT416((uint)(auVar164._0_4_ + -0.05)));
          auVar164 = vminss_avx(auVar171,auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_;
          index = index + 1;
          auVar481 = ZEXT864(0) << 0x20;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("POIS");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 2.0;
    materials_list[index].genome_size = 1.0;
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 1;
    materials_list[index].conductivity = 1.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f19999a3e99999a;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f80000000000000;
    materials_list[index].physics_update_fn = cell_poison;
    materials_list[index].connection_update_fn = cell_poison_connections;
    iVar50 = get_icon_coords(0x3e);
    rVar114._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar114._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar114;
  }
  iVar50 = get_icon_coords(0x3e);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar481 = ZEXT1264(ZEXT812(0));
      fVar146 = 0.1;
      auVar436 = ZEXT464(0x3f800000);
      do {
        fVar314 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + -0.1;
        fVar144 = fVar314 * -0.2;
        dVar150 = (double)fVar314;
        fVar237 = fVar314 + 0.02;
        fVar533 = fVar314 + 0.15;
        fVar310 = -0.15 - fVar314;
        auVar152 = vmovsldup_avx(ZEXT416((uint)(fVar314 + 0.4)));
        fVar460 = fVar314 * fVar314;
        index = 0;
        auVar585._8_4_ = 0x7fffffff;
        auVar585._0_8_ = 0x7fffffff7fffffff;
        auVar585._12_4_ = 0x7fffffff;
        do {
          auVar189 = auVar436._0_16_;
          fVar308 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar164 = vandps_avx(auVar585,ZEXT416((uint)fVar308));
          auVar541 = ZEXT1664(auVar164);
          fVar312 = auVar164._0_4_;
          dVar38 = (0.09999999403953552 - (dVar150 + dVar150)) * 0.04000000283122063 +
                   (double)(fVar312 * fVar312 * -0.4);
          auVar378._0_4_ = (float)dVar38;
          auVar378._4_4_ = (int)((ulonglong)dVar38 >> 0x20);
          auVar378._8_8_ = 0;
          auVar171 = vmaxss_avx(auVar378,ZEXT416((uint)(fVar312 * -0.15 + fVar144)));
          fVar311 = 0.0;
          if (0.0 <= auVar171._0_4_) {
            auVar297._8_4_ = 0x80000000;
            auVar297._0_8_ = 0x8000000080000000;
            auVar297._12_4_ = 0x80000000;
            fVar308 = fVar310;
            if (0.2 <= fVar312) {
              auVar297._8_4_ = 0x80000000;
              auVar297._0_8_ = 0x8000000080000000;
              auVar297._12_4_ = 0x80000000;
              auVar171 = ZEXT416((uint)(fVar533 * fVar533 +
                                       (fVar312 + -0.2) * (fVar312 + -0.2) + 0.0));
              auVar171 = vsqrtss_avx(auVar171,auVar171);
              fVar308 = auVar171._0_4_;
            }
          }
          else {
            auVar171 = ZEXT416((uint)(fVar308 * fVar308 + 0.0 + fVar460));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar297._8_4_ = 0x80000000;
            auVar297._0_8_ = 0x8000000080000000;
            auVar297._12_4_ = 0x80000000;
            fVar308 = auVar171._0_4_ + -0.25;
          }
          auVar569 = ZEXT464((uint)(fVar308 + -0.05));
          auVar205 = ZEXT416((uint)(fVar308 + -0.05));
          auVar213._0_4_ = fVar312 / fVar146;
          auVar213._4_12_ = auVar164._4_12_;
          auVar171 = vandps_avx(auVar213,auVar297);
          auVar379._8_4_ = 0x3effffff;
          auVar379._0_8_ = 0x3effffff3effffff;
          auVar379._12_4_ = 0x3effffff;
          auVar171 = vorps_avx(auVar171,auVar379);
          auVar171 = ZEXT416((uint)(auVar213._0_4_ + auVar171._0_4_));
          auVar171 = vroundss_avx(auVar171,auVar171,0xb);
          auVar171 = vminss_avx(auVar189,auVar171);
          fVar313 = fVar146 * auVar171._0_4_;
          fVar308 = fVar313 * fVar146 + -0.31;
          fVar309 = fVar313 - fVar313;
          auVar171 = ZEXT416((uint)(fVar308 * fVar308 + fVar309 * fVar309 + 0.0));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar498 = ZEXT1664(auVar171);
          fVar589 = auVar171._0_4_;
          fVar312 = fVar589 * fVar589 + -9.999996e-05;
          if (fVar312 < 0.0) {
            fVar312 = sqrtf(fVar312);
            fVar311 = auVar481._0_4_;
            auVar164 = auVar541._0_16_;
            fVar589 = auVar498._0_4_;
            auVar189 = auVar436._0_16_;
            auVar205 = auVar569._0_16_;
          }
          else {
            auVar171 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
            fVar312 = auVar171._0_4_;
          }
          fVar315 = auVar189._0_4_;
          fVar309 = fVar309 * (fVar315 / fVar589);
          fVar598 = fVar308 * (fVar315 / fVar589);
          fVar589 = auVar164._0_4_;
          fVar313 = fVar589 - fVar313;
          fVar542 = fVar313 * fVar309 + fVar314 * fVar598;
          fVar499 = fVar314 * fVar309 - fVar313 * fVar598;
          auVar171 = vandps_avx(ZEXT416((uint)fVar499),___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar181 = ZEXT416((uint)(fVar312 * fVar312 + 9.999996e-05));
          auVar181 = vsqrtss_avx(auVar181,auVar181);
          fVar543 = fVar315 / auVar181._0_4_;
          fVar598 = fVar543 * fVar312;
          fVar543 = fVar543 * -0.009999998;
          fVar309 = fVar543 * auVar171._0_4_ + fVar542 * fVar598 + fVar311;
          if (fVar309 <= fVar311) {
            auVar171 = ZEXT416((uint)(fVar499 * fVar499 + fVar311 + fVar542 * fVar542));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar308 = auVar171._0_4_;
LAB_1401363f4:
            fVar308 = fVar308 + -0.06;
          }
          else {
            if (fVar309 < fVar312) {
              fVar308 = auVar171._0_4_ * fVar598 + fVar311 + fVar542 * -fVar543;
              goto LAB_1401363f4;
            }
            auVar171 = ZEXT416((uint)((fVar314 - fVar308) * (fVar314 - fVar308) +
                                     fVar311 + fVar313 * fVar313));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar308 = auVar171._0_4_ + -0.05;
          }
          auVar214._0_12_ = ZEXT812(0);
          auVar214._12_4_ = 0;
          auVar164 = vmovsldup_avx(auVar164);
          local_238._0_4_ = auVar152._0_4_;
          local_238._4_4_ = auVar152._4_4_;
          fStack_230 = auVar152._8_4_;
          fStack_22c = auVar152._12_4_;
          auVar298._0_4_ = (float)local_238 * 0.3 + (auVar164._0_4_ + -0.35) * -0.75 + 0.0;
          auVar298._4_4_ = local_238._4_4_ * 0.3 + (auVar164._4_4_ + 0.4) * 0.8 + 0.0;
          auVar298._8_4_ = fStack_230 * 0.0 + (auVar164._8_4_ + 0.0) * 0.0 + 0.0;
          auVar298._12_4_ = fStack_22c * 0.0 + (auVar164._12_4_ + 0.0) * 0.0 + 0.0;
          auVar164 = vdivps_avx(auVar298,___xmm_00000000000000003f3ae1493f270a3e);
          auVar428._8_4_ = 0x3f800000;
          auVar428._0_8_ = 0x3f8000003f800000;
          auVar428._12_4_ = 0x3f800000;
          auVar171 = vminps_avx(auVar428,auVar164);
          auVar164 = vcmpps_avx(auVar171,ZEXT816(0),1);
          auVar164 = vshufps_avx(auVar164,auVar164,0x50);
          uVar140 = vmovmskpd_avx(auVar164);
          fVar311 = 0.0;
          if ((uVar140 & 2) == 0) {
            auVar164 = vmovshdup_avx(auVar171);
            fVar311 = auVar164._0_4_;
          }
          fVar312 = (fVar315 - fVar311) * -0.4;
          auVar164 = ZEXT816(0);
          if ((uVar140 & 1) == 0) {
            auVar164 = auVar171;
          }
          auVar585._8_4_ = 0x7fffffff;
          auVar585._0_8_ = 0x7fffffff7fffffff;
          auVar585._12_4_ = 0x7fffffff;
          auVar171 = vandps_avx(ZEXT416((uint)(auVar205._0_4_ - fVar308)),auVar585);
          auVar171 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar171._0_4_)),auVar214);
          auVar205 = vminss_avx(auVar205,ZEXT416((uint)fVar308));
          fVar308 = (auVar171._0_4_ * auVar171._0_4_ * 0.25) / -0.05 + auVar205._0_4_;
          auVar171 = ZEXT416((uint)(fVar237 * fVar237 + (fVar589 + -0.12) * (fVar589 + -0.12) + 0.0)
                            );
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          fVar313 = 0.07 - auVar171._0_4_;
          auVar171 = vandps_avx(auVar585,ZEXT416((uint)(fVar308 - fVar313)));
          auVar171 = vmaxss_avx(ZEXT416((uint)(fVar146 - auVar171._0_4_)),auVar214);
          auVar205 = vmaxss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar313));
          fVar308 = auVar205._0_4_ + (auVar171._0_4_ * 0.25 * auVar171._0_4_) / fVar146;
          fVar313 = fVar589 - (fVar311 * 0.4 + fVar312);
          fVar311 = fVar314 + (fVar146 * fVar311 - fVar312);
          auVar171 = ZEXT416((uint)(fVar311 * fVar311 + fVar313 * fVar313 + 0.0));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar171 = vmaxss_avx(ZEXT416((uint)(0.02 - fVar308)),
                                ZEXT416((uint)(auVar171._0_4_ + -0.05)));
          auVar171 = vminss_avx(ZEXT416((uint)fVar308),auVar171);
          fVar308 = auVar164._0_4_;
          auVar436 = ZEXT1664(auVar189);
          fVar589 = fVar589 + fVar308 * 0.4 + (fVar315 - fVar308) * -0.35;
          fVar308 = fVar314 + (fVar315 - fVar308) * 0.4 + fVar146 * fVar308;
          auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar589 * fVar589 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vmaxss_avx(ZEXT416((uint)(0.02 - auVar171._0_4_)),
                                ZEXT416((uint)(auVar164._0_4_ + -0.05)));
          auVar164 = vminss_avx(auVar171,auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_;
          index = index + 1;
          auVar481 = ZEXT864(0) << 0x20;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("ANGY");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x42;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 6.0;
    materials_list[index].conductivity = 1.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e19999a3f333333;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f80000000000000;
    materials_list[index].brain_fn = cell_angry_neuron;
    iVar50 = get_icon_coords(0x3f);
    rVar115._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar115._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar115;
  }
  iVar50 = get_icon_coords(0x3f);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    index = 0;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      fVar146 = 0.9974193;
      fVar314 = 0.0;
      auVar436 = ZEXT464(0x3d90d0c3);
      do {
        fVar237 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar533 = fVar237 + -0.1;
        auVar481 = ZEXT464((uint)((fVar533 + -0.16) * 0.35897905));
        fVar144 = fVar533 + -0.12;
        fVar460 = fVar533 + 0.07;
        fVar310 = fVar460 * -4.371139e-08;
        fVar308 = (fVar533 + -0.16) * 0.93334556;
        lVar139 = 0;
        do {
          fVar311 = ((float)(int)lVar139 + 0.5) * 0.015625 + -1.0;
          auVar569 = ZEXT464((uint)fVar311);
          auVar541._0_4_ =
               brain_icon((real_2)(CONCAT44((int)((ulonglong)index >> 0x20),fVar311) |
                                  (ulonglong)(uint)fVar237 << 0x20));
          auVar541._4_60_ = extraout_var_23;
          auVar475._8_4_ = 0x7fffffff;
          auVar475._0_8_ = 0x7fffffff7fffffff;
          auVar475._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar569._0_16_,auVar475);
          fVar309 = auVar152._0_4_;
          fVar311 = auVar481._0_4_ + (fVar309 + -0.07) * 0.93334556;
          fVar312 = fVar308 + (fVar309 + -0.07) * -0.35897905;
          auVar152 = vandps_avx(ZEXT416((uint)fVar312),auVar475);
          fVar313 = auVar152._0_4_ * 0.071795814 + fVar314 + fVar146 * fVar311;
          if (fVar313 <= fVar314) {
            auVar152 = ZEXT416((uint)(fVar312 * fVar312 + fVar314 + fVar311 * fVar311));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar311 = auVar152._0_4_;
LAB_140136864:
            fVar311 = fVar311 + -0.01;
          }
          else {
            if (fVar313 < 0.13892443) {
              fVar311 = fVar146 * auVar152._0_4_ + fVar314 + fVar311 * -0.071795814;
              goto LAB_140136864;
            }
            auVar152 = ZEXT416((uint)((fVar533 + -0.21) * (fVar533 + -0.21) +
                                     fVar314 + (fVar309 + -0.2) * (fVar309 + -0.2)));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar311 = auVar152._0_4_ + -0.02;
          }
          fVar312 = fVar460 + fVar309 * -4.371139e-08;
          fVar542 = fVar310 - fVar309;
          auVar152 = vandps_avx(ZEXT416((uint)fVar542),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar598 = auVar152._0_4_;
          fVar313 = auVar436._0_4_;
          fVar589 = fVar313;
          if (fVar598 * 0.7071068 <= fVar312 * 0.70710677) {
            fVar313 = fVar542 * fVar542 + fVar314 + fVar312 * fVar312;
            if (1e-06 < fVar313) {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar313),ZEXT416((uint)fVar313));
              fVar313 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44(extraout_var_02,fVar312 * fVar313) |
                        (ulonglong)(uint)(fVar598 * fVar313) << 0x20;
            }
            else {
              uVar143 = 0;
            }
            fVar313 = (float)uVar143 * 0.1;
            fVar589 = (float)(uVar143 >> 0x20) * 0.1;
          }
          auVar299._0_4_ = -fVar311;
          auVar299._4_4_ = 0x80000000;
          auVar299._8_4_ = 0x80000000;
          auVar299._12_4_ = 0x80000000;
          auVar152 = vmaxss_avx(auVar541._0_16_,auVar299);
          auVar164 = ZEXT416((uint)(fVar144 * fVar144 +
                                   fVar314 + (fVar309 + -0.13) * (fVar309 + -0.13)));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(0.05 - auVar164._0_4_)));
          auVar164 = ZEXT416((uint)((fVar598 - fVar589) * (fVar598 - fVar589) +
                                   fVar314 + (fVar312 - fVar313) * (fVar312 - fVar313)));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(0.02 - auVar164._0_4_)));
          index = (longlong)
                    (icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ +
                    (int)lVar139);
          icon_atlas[index] = auVar152._0_4_;
          lVar139 = lVar139 + 1;
        } while (lVar139 != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("FALO");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x42;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 3.0;
    materials_list[index].conductivity = 1.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e19999a00000000;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f333333;
    materials_list[index].brain_fn = cell_follower_neuron;
    iVar50 = get_icon_coords(0x40);
    rVar116._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar116._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar116;
  }
  iVar50 = get_icon_coords(0x40);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    index = 0;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      fVar533 = 0.0;
      auVar481 = ZEXT464(0x3f3504f3);
      fVar146 = 0.7071068;
      auVar436 = ZEXT464(0x3d90d0c3);
      fVar314 = 0.02;
      fVar237 = 0.1;
      do {
        fVar144 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar310 = fVar144 + -0.1;
        fVar460 = fVar310 + -0.17;
        fVar310 = fVar310 + -0.09;
        fVar308 = -fVar310;
        fVar310 = fVar310 * 4.371139e-08;
        fVar460 = fVar460 * fVar460;
        lVar139 = 0;
        do {
          fVar311 = ((float)(int)lVar139 + 0.5) * 0.015625 + -1.0;
          auVar541 = ZEXT464((uint)fVar311);
          auVar229._0_4_ =
               brain_icon((real_2)(CONCAT44((int)((ulonglong)index >> 0x20),fVar311) |
                                  (ulonglong)(uint)fVar144 << 0x20));
          auVar229._4_60_ = extraout_var_24;
          auVar456._8_4_ = 0x7fffffff;
          auVar456._0_8_ = 0x7fffffff7fffffff;
          auVar456._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar541._0_16_,auVar456);
          fVar589 = auVar152._0_4_;
          fVar311 = fVar589 * -4.371139e-08 + fVar308;
          fVar309 = fVar589 - fVar310;
          auVar152 = vandps_avx(ZEXT416((uint)fVar309),auVar456);
          fVar542 = auVar152._0_4_;
          fVar312 = auVar436._0_4_;
          fVar313 = fVar312;
          if (fVar542 * fVar146 <= auVar481._0_4_ * fVar311) {
            fVar312 = fVar309 * fVar309 + fVar533 + fVar311 * fVar311;
            if (1e-06 < fVar312) {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
              fVar312 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44(extraout_var_03,fVar311 * fVar312) |
                        (ulonglong)(uint)(fVar542 * fVar312) << 0x20;
            }
            else {
              uVar143 = 0;
            }
            fVar312 = fVar237 * (float)uVar143;
            fVar313 = fVar237 * (float)(uVar143 >> 0x20);
          }
          auVar152 = ZEXT416((uint)(fVar460 + fVar533 + (fVar589 + -0.13) * (fVar589 + -0.13)));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vmaxss_avx(auVar229._0_16_,ZEXT416((uint)(0.05 - auVar152._0_4_)));
          auVar164 = ZEXT416((uint)((fVar542 - fVar313) * (fVar542 - fVar313) +
                                   fVar533 + (fVar311 - fVar312) * (fVar311 - fVar312)));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(fVar314 - auVar164._0_4_)));
          index = (longlong)
                    (icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ +
                    (int)lVar139);
          icon_atlas[index] = auVar152._0_4_;
          lVar139 = lVar139 + 1;
        } while (lVar139 != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("WAND");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x42;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 1.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f1126e93e3a5e35;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f28f5c3;
    materials_list[index].brain_fn = cell_wandering_neuron;
    iVar50 = get_icon_coords(0x41);
    rVar117._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar117._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar117;
  }
  iVar50 = get_icon_coords(0x41);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    index = 0;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      fVar533 = -1.0;
      fVar146 = -0.12;
      fVar237 = 0.0;
      fVar144 = 0.065;
      auVar436 = ZEXT464(0x3d3851ec);
      fVar314 = 0.015625;
      do {
        fVar460 = fVar533 + ((float)(int)uVar81 + 0.5) * fVar314;
        fVar308 = fVar460 + -0.1;
        fVar310 = fVar308 + -0.2;
        fVar308 = fVar308 + -0.05;
        fVar310 = fVar310 * fVar310;
        fVar308 = fVar308 * fVar308;
        lVar139 = 0;
        auVar481 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
        do {
          fVar311 = fVar533 + ((float)(int)lVar139 + 0.5) * fVar314;
          auVar541 = ZEXT464((uint)fVar311);
          auVar569 = ZEXT1664(auVar436._0_16_);
          auVar230._0_4_ =
               brain_icon((real_2)(CONCAT44((int)((ulonglong)index >> 0x20),fVar311) |
                                  (ulonglong)(uint)fVar460 << 0x20));
          auVar230._4_60_ = extraout_var_25;
          auVar436 = ZEXT1664(auVar569._0_16_);
          auVar152 = vandps_avx(auVar541._0_16_,auVar481._0_16_);
          fVar311 = auVar152._0_4_ + fVar146;
          auVar152 = ZEXT416((uint)(fVar310 + fVar237 + fVar311 * fVar311));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vmaxss_avx(auVar230._0_16_,ZEXT416((uint)(fVar144 - auVar152._0_4_)));
          auVar164 = ZEXT416((uint)(fVar308 + fVar237 + auVar541._0_4_ * auVar541._0_4_));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(auVar569._0_4_ - auVar164._0_4_)));
          index = (longlong)
                    (icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ +
                    (int)lVar139);
          icon_atlas[index] = auVar152._0_4_;
          lVar139 = lVar139 + 1;
        } while (lVar139 != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("MNIN");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x42;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 1.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f19999a3f333333;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f80000000000000;
    materials_list[index].brain_fn = cell_minion_neuron;
    iVar50 = get_icon_coords(0x42);
    rVar118._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar118._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar118;
  }
  iVar50 = get_icon_coords(0x42);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    index = 0;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      fVar533 = 0.0;
      fVar144 = 0.8443279;
      auVar436 = ZEXT464(0x3d83af4f);
      fVar146 = 0.10131935;
      fVar314 = 0.02;
      fVar237 = 0.12;
      do {
        fVar460 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar308 = fVar460 + -0.1;
        fVar310 = fVar308 + -0.2;
        fVar308 = fVar308 + 0.1;
        fVar311 = fVar308 * -1.6292068e-07;
        fVar310 = fVar310 * fVar310;
        lVar139 = 0;
        do {
          fVar312 = ((float)(int)lVar139 + 0.5) * 0.015625 + -1.0;
          auVar481 = ZEXT464((uint)fVar312);
          auVar231._0_4_ =
               brain_icon((real_2)(CONCAT44((int)((ulonglong)index >> 0x20),fVar312) |
                                  (ulonglong)(uint)fVar460 << 0x20));
          auVar231._4_60_ = extraout_var_26;
          auVar457._8_4_ = 0x7fffffff;
          auVar457._0_8_ = 0x7fffffff7fffffff;
          auVar457._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar481._0_16_,auVar457);
          fVar542 = auVar152._0_4_;
          fVar312 = fVar542 * -1.6292068e-07 + fVar308;
          fVar589 = fVar311 - fVar542;
          auVar152 = vandps_avx(ZEXT416((uint)fVar589),auVar457);
          fVar598 = auVar152._0_4_;
          fVar309 = auVar436._0_4_;
          fVar313 = fVar146;
          if (fVar144 * fVar598 <= fVar312 * 0.53582686) {
            fVar313 = fVar589 * fVar589 + fVar533 + fVar312 * fVar312;
            if (1e-06 < fVar313) {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar313),ZEXT416((uint)fVar313));
              fVar313 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44(extraout_var_04,fVar312 * fVar313) |
                        (ulonglong)(uint)(fVar598 * fVar313) << 0x20;
            }
            else {
              uVar143 = 0;
            }
            fVar313 = fVar237 * (float)uVar143;
            fVar309 = fVar237 * (float)(uVar143 >> 0x20);
          }
          auVar152 = ZEXT416((uint)(fVar310 + fVar533 + (fVar542 + -0.095) * (fVar542 + -0.095)));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vmaxss_avx(auVar231._0_16_,ZEXT416((uint)(0.06 - auVar152._0_4_)));
          auVar164 = ZEXT416((uint)((fVar598 - fVar309) * (fVar598 - fVar309) +
                                   fVar533 + (fVar312 - fVar313) * (fVar312 - fVar313)));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(fVar314 - auVar164._0_4_)));
          index = (longlong)
                    (icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ +
                    (int)lVar139);
          icon_atlas[index] = auVar152._0_4_;
          lVar139 = lVar139 + 1;
        } while (lVar139 != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("FEAR");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x42;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 1.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ea041893d408312;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d872b02;
    materials_list[index].brain_fn = cell_fearful_neuron;
    iVar50 = get_icon_coords(0x43);
    rVar119._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar119._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar119;
  }
  iVar50 = get_icon_coords(0x43);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    index = 0;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      fVar146 = 0.0;
      auVar436 = ZEXT1664(ZEXT816(0x3da3d70a3c23d70a));
      auVar481 = ZEXT464(0x3dcccccd);
      do {
        fVar314 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar237 = fVar314 + -0.1;
        auVar541 = ZEXT464((uint)fVar237);
        fVar533 = fVar237 + -0.2 + -0.15;
        fVar460 = fVar533 * -0.8090169;
        fVar533 = fVar533 * -0.5877854;
        fVar144 = fVar237 + 0.19;
        fVar237 = (fVar237 + -0.16) * (fVar237 + -0.16);
        lVar139 = 0;
        do {
          fVar310 = ((float)(int)lVar139 + 0.5) * 0.015625 + -1.0;
          auVar569 = ZEXT464((uint)fVar310);
          auVar232._0_4_ =
               brain_icon((real_2)(CONCAT44((int)((ulonglong)index >> 0x20),fVar310) |
                                  (ulonglong)(uint)fVar314 << 0x20));
          auVar232._4_60_ = extraout_var_27;
          auVar458._8_4_ = 0x7fffffff;
          auVar458._0_8_ = 0x7fffffff7fffffff;
          auVar458._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar569._0_16_,auVar458);
          fVar310 = auVar152._0_4_ + -0.11;
          fVar308 = auVar152._0_4_ + -0.05 + -0.15;
          fVar311 = fVar460 + fVar308 * -0.5877854;
          fVar308 = fVar533 + fVar308 * 0.8090169;
          auVar152 = vandps_avx(ZEXT416((uint)fVar308),auVar458);
          fVar309 = auVar152._0_4_;
          fVar312 = 0.08910065;
          fVar313 = 0.04539905;
          if (fVar309 * 0.8910065 <= fVar311 * 0.45399052) {
            fVar308 = fVar308 * fVar308 + fVar146 + fVar311 * fVar311;
            if (1e-06 < fVar308) {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
              fVar308 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44(extraout_var_05,fVar311 * fVar308) |
                        (ulonglong)(uint)(fVar309 * fVar308) << 0x20;
            }
            else {
              uVar143 = 0;
            }
            fVar312 = auVar481._0_4_ * (float)uVar143;
            fVar313 = auVar481._0_4_ * (float)(uVar143 >> 0x20);
          }
          auVar152 = ZEXT416((uint)(fVar237 + fVar146 + fVar310 * fVar310));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar171 = vmaxss_avx(auVar232._0_16_,ZEXT416((uint)(0.04 - auVar152._0_4_)));
          auVar152 = vinsertps_avx(ZEXT416((uint)(fVar311 - fVar312)),auVar569._0_16_,0x10);
          auVar300._0_4_ = auVar152._0_4_ * auVar152._0_4_ + 0.0;
          auVar300._4_4_ = auVar152._4_4_ * auVar152._4_4_ + 0.0;
          auVar300._8_4_ = auVar152._8_4_ * auVar152._8_4_ + 0.0;
          auVar300._12_4_ = auVar152._12_4_ * auVar152._12_4_ + 0.0;
          auVar152 = vmovshdup_avx(auVar300);
          auVar152 = ZEXT416((uint)(fVar144 * fVar144 + auVar152._0_4_));
          auVar164 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vinsertps_avx(ZEXT416((uint)(fVar309 - fVar313)),auVar541._0_16_,0x10);
          auVar301._0_4_ = auVar152._0_4_ * auVar152._0_4_ + auVar300._0_4_;
          auVar301._4_4_ = auVar152._4_4_ * auVar152._4_4_ + auVar300._4_4_;
          auVar301._8_4_ = auVar152._8_4_ * auVar152._8_4_ + auVar300._8_4_;
          auVar301._12_4_ = auVar152._12_4_ * auVar152._12_4_ + auVar300._12_4_;
          auVar152 = vsqrtps_avx(auVar301);
          auVar189 = vsubps_avx(auVar436._0_16_,auVar152);
          auVar205 = ZEXT416((uint)(auVar164._0_4_ + -0.2));
          auVar152 = vinsertps_avx(auVar171,auVar205,0x10);
          auVar164 = vcmpps_avx(auVar189,auVar152,1);
          auVar152 = vblendps_avx(auVar189,auVar171,1);
          auVar171 = vinsertps_avx(auVar189,auVar205,0x10);
          auVar152 = vblendvps_avx(auVar171,auVar152,auVar164);
          auVar164 = vmovshdup_avx(auVar152);
          auVar152 = vmaxss_avx(auVar152,auVar164);
          index = (longlong)
                    (icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ +
                    (int)lVar139);
          icon_atlas[index] = auVar152._0_4_;
          lVar139 = lVar139 + 1;
        } while (lVar139 != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("WAIT");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x42;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 10.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].conductivity = 1.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3e570a3d3ee147ae;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f0f5c29;
    materials_list[index].brain_fn = cell_hesitant_neuron;
    iVar50 = get_icon_coords(0x44);
    rVar120._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar120._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar120;
  }
  iVar50 = get_icon_coords(0x44);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    index = 0;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      fVar144 = 0.0;
      fVar314 = 0.9645574;
      fVar237 = 0.105549216;
      fVar146 = 0.38582298;
      fVar533 = 0.01;
      fVar460 = 0.4;
      do {
        fVar310 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar308 = fVar310 + -0.1 + -0.18;
        auVar436 = ZEXT464((uint)((fVar310 + 0.26) * 0.9900237));
        fVar311 = (fVar310 + 0.26) * -0.14090133;
        fVar308 = fVar308 * fVar308;
        lVar139 = 0;
        do {
          fVar312 = ((float)(int)lVar139 + 0.5) * 0.015625 + -1.0;
          auVar481 = ZEXT464((uint)fVar312);
          auVar233._0_4_ =
               brain_icon((real_2)(CONCAT44((int)((ulonglong)index >> 0x20),fVar312) |
                                  (ulonglong)(uint)fVar310 << 0x20));
          auVar233._4_60_ = extraout_var_28;
          auVar459._8_4_ = 0x7fffffff;
          auVar459._0_8_ = 0x7fffffff7fffffff;
          auVar459._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(auVar481._0_16_,auVar459);
          fVar312 = auVar152._0_4_ + -0.11;
          fVar313 = auVar481._0_4_ + -0.08;
          fVar309 = auVar436._0_4_ + fVar313 * -0.14090133;
          fVar313 = fVar311 + fVar313 * -0.9900237;
          auVar152 = vandps_avx(ZEXT416((uint)fVar313),auVar459);
          fVar598 = auVar152._0_4_;
          fVar589 = fVar146;
          fVar542 = fVar237;
          if (fVar314 * fVar598 <= fVar309 * 0.26387304) {
            fVar313 = fVar313 * fVar313 + fVar144 + fVar309 * fVar309;
            if (1e-06 < fVar313) {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar313),ZEXT416((uint)fVar313));
              fVar313 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44(extraout_var_06,fVar309 * fVar313) |
                        (ulonglong)(uint)(fVar598 * fVar313) << 0x20;
            }
            else {
              uVar143 = 0;
            }
            fVar589 = fVar460 * (float)uVar143;
            fVar542 = fVar460 * (float)(uVar143 >> 0x20);
          }
          auVar152 = ZEXT416((uint)(fVar308 + fVar144 + fVar312 * fVar312));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vmaxss_avx(auVar233._0_16_,ZEXT416((uint)(0.05 - auVar152._0_4_)));
          auVar164 = ZEXT416((uint)((fVar598 - fVar542) * (fVar598 - fVar542) +
                                   fVar144 + (fVar309 - fVar589) * (fVar309 - fVar589)));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vmaxss_avx(auVar152,ZEXT416((uint)(fVar533 - auVar164._0_4_)));
          index = (longlong)
                    (icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ +
                    (int)lVar139);
          icon_atlas[index] = auVar152._0_4_;
          lVar139 = lVar139 + 1;
        } while (lVar139 != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("MIND");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.02;
    materials_list[index].base_cost = 12.0;
    materials_list[index].genome_size = 4.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 1;
    materials_list[index].restitution = 0.0;
    materials_list[index].radial_compliance = 0.5;
    materials_list[index].angular_compliance = 32.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d0f5c29;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e591687;
    materials_list[index].brain_fn = cell_mind_control;
    iVar50 = get_icon_coords(0x45);
    rVar121._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar121._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar121;
  }
  iVar50 = get_icon_coords(0x45);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    index = 0;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      fVar146 = -1.0;
      fVar314 = 0.45;
      fVar237 = 0.9486833;
      fVar533 = 0.0;
      fVar144 = -0.31622776;
      fVar460 = -0.1;
      do {
        fVar311 = 0.5;
        fVar310 = ((float)(int)uVar81 + 0.5) * 0.015625 + fVar146;
        fVar308 = fVar310 + fVar314;
        lVar139 = 0;
        auVar436 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
        do {
          fVar312 = (fVar311 + (float)(int)lVar139) * 0.015625 + fVar146;
          auVar481 = ZEXT464((uint)fVar312);
          auVar234._0_4_ =
               brain_icon((real_2)(CONCAT44((int)((ulonglong)index >> 0x20),fVar312) |
                                  (ulonglong)(uint)fVar308 << 0x20));
          auVar234._4_60_ = extraout_var_29;
          auVar152 = vandps_avx(auVar481._0_16_,auVar436._0_16_);
          auVar152 = vmaxss_avx(ZEXT416((uint)(fVar460 + auVar152._0_4_)),
                                ZEXT416((uint)(fVar310 * fVar144 +
                                              fVar533 + fVar237 * auVar152._0_4_)));
          auVar152 = vminss_avx(auVar234._0_16_,auVar152);
          index = (longlong)
                    (icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ +
                    (int)lVar139);
          icon_atlas[index] = auVar152._0_4_;
          lVar139 = lVar139 + 1;
        } while (lVar139 != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("PHAS");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 2;
    materials_list[index].drop_weight = 0.01;
    materials_list[index].base_cost = 3.0;
    materials_list[index].genome_size = 16.0;
    materials_list[index].conductivity = 100.0;
    uVar17 = materials_list[index].heat_conductivity;
    uVar35 = materials_list[index].leak_heat_conductivity;
    auVar215._0_4_ = (float)uVar17 * 100.0;
    auVar215._4_4_ = (float)uVar35 * 10.0;
    auVar215._8_8_ = 0;
    uVar19 = vmovlps_avx(auVar215);
    materials_list[index].heat_conductivity = (float)(int)uVar19;
    materials_list[index].leak_heat_conductivity = (float)(int)((ulonglong)uVar19 >> 0x20);
    pbVar1 = (byte *)((longlong)&materials_list[index].field14_0x4c + 1);
    *pbVar1 = *pbVar1 | 1;
    materials_list[index].density = 0.7;
    materials_list[index].hardness = 0.0;
    materials_list[index].max_radial_force = 3.0;
    materials_list[index].radial_compliance = 2.0;
    materials_list[index].angular_compliance = 16.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f3333333f19999a;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003f800000;
    materials_list[index].connection_update_fn = cell_phasing;
    iVar50 = get_icon_coords(0x46);
    rVar122._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar122._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar122;
  }
  iVar50 = get_icon_coords(0x46);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar436 = ZEXT1264(ZEXT812(0));
      fVar146 = 0.05;
      fVar314 = -0.55;
      auVar481 = ZEXT464(0x3e800000);
      do {
        fVar237 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar310 = -(fVar237 + -0.15);
        fVar533 = fVar237 + 0.35;
        fVar144 = auVar436._0_4_ * (fVar237 + -0.15);
        fVar460 = (fVar237 + -0.13) * (fVar237 + -0.13);
        index = 0;
        auVar541 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
        do {
          fVar308 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          fVar309 = auVar436._0_4_;
          fVar311 = fVar310 + fVar309 * fVar308;
          fVar312 = fVar144 + fVar308;
          auVar152 = vandps_avx(auVar541._0_16_,ZEXT416((uint)fVar312));
          fVar313 = fVar309 * auVar152._0_4_ + fVar309 + fVar311;
          if (fVar313 <= fVar309) {
            fVar311 = fVar312 * fVar312 + fVar309 + fVar311 * fVar311;
LAB_140137f40:
            auVar152 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
            fVar311 = auVar152._0_4_;
          }
          else {
            if (0.5 <= fVar313) {
              fVar311 = fVar309 + fVar308 * fVar308 + fVar533 * fVar533;
              goto LAB_140137f40;
            }
            fVar311 = auVar152._0_4_ + fVar309 + fVar311 * -0.0;
          }
          auVar586._8_4_ = 0x7fffffff;
          auVar586._0_8_ = 0x7fffffff7fffffff;
          auVar586._12_4_ = 0x7fffffff;
          auVar541 = ZEXT1664(auVar586);
          auVar152 = vandps_avx(auVar586,ZEXT416((uint)fVar308));
          fVar312 = auVar152._0_4_ + -0.2;
          auVar152 = ZEXT416((uint)(fVar460 + fVar309 + fVar312 * fVar312));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vmaxss_avx(ZEXT416((uint)(fVar311 + -0.5)),
                                ZEXT416((uint)(0.12 - auVar152._0_4_)));
          auVar569 = ZEXT1664(auVar152);
          fVar308 = fVar308 * 22.0;
          cosf();
          fVar308 = (fVar314 + fVar146 * fVar308) - fVar237;
          auVar152 = vandps_avx(auVar541._0_16_,ZEXT416((uint)(auVar569._0_4_ - fVar308)));
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.2 - auVar152._0_4_)),auVar436._0_16_);
          auVar164 = vmaxss_avx(auVar569._0_16_,ZEXT416((uint)fVar308));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_ + (auVar152._0_4_ * auVar481._0_4_ * auVar152._0_4_) / 0.2;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("HEAT");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 3;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 8.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 1;
    materials_list[index].conductivity = 100.0;
    materials_list[index].heat_capacity = materials_list[index].heat_capacity * 10.0;
    materials_list[index].hardness = materials_list[index].hardness + materials_list[index].hardness;
    materials_list[index].max_radial_force = 3.0;
    materials_list[index].radial_compliance = 2.0;
    materials_list[index].angular_compliance = 16.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ef9db233f628f5c;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003e9d2f1b;
    materials_list[index].physics_update_fn = cell_heat_pump;
    iVar50 = get_icon_coords(0x47);
    rVar123._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar123._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar123;
  }
  iVar50 = get_icon_coords(0x47);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      fVar146 = 1.0;
      do {
        iVar44 = (int)uVar81;
        fVar314 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        fVar144 = -fVar314;
        fVar237 = fVar314 + -0.05;
        uVar143 = 0;
        fVar533 = fVar144;
        do {
          fVar460 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar380._8_4_ = 0x7fffffff;
          auVar380._0_8_ = 0x7fffffff7fffffff;
          auVar380._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),auVar380);
          auVar164 = ZEXT416((uint)(fVar314 * fVar314 + auVar436._0_4_ + fVar460 * fVar460));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vmovsldup_avx(auVar164);
          auVar216._0_4_ = auVar164._0_4_ + -0.3;
          auVar216._4_4_ = auVar164._4_4_ + -0.1;
          auVar216._8_4_ = auVar164._8_4_ + 0.0;
          auVar216._12_4_ = auVar164._12_4_ + 0.0;
          auVar164 = vandps_avx(auVar216,auVar380);
          auVar217._0_4_ = auVar164._0_4_ + -0.05;
          auVar217._4_4_ = auVar164._4_4_ + -0.05;
          auVar217._8_4_ = auVar164._8_4_ + 0.0;
          auVar217._12_4_ = auVar164._12_4_ + 0.0;
          auVar164 = vmovshdup_avx(auVar217);
          auVar164 = vminss_avx(auVar217,auVar164);
          auVar481 = ZEXT1664(auVar164);
          index = 0;
          bVar42 = true;
          do {
            bVar43 = bVar42;
            fVar310 = hex_rots[index].field0_0x0._s_0.x;
            fVar308 = hex_rots[index].field0_0x0._s_0.y;
            fVar312 = fVar310 * 0.6 - fVar310 * 0.1;
            fVar313 = fVar308 * 0.6 - fVar308 * 0.1;
            fVar598 = auVar436._0_4_;
            auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar598 + fVar312 * fVar312));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar542 = auVar164._0_4_;
            fVar312 = fVar312 * (fVar146 / fVar542);
            fVar313 = fVar313 * (fVar146 / fVar542);
            fVar309 = fVar533 - fVar310 * 0.1;
            local_268._0_4_ = auVar152._0_4_;
            fVar589 = (float)local_268._0_4_ - fVar308 * 0.1;
            fVar311 = fVar309 * fVar312 + fVar589 * fVar313;
            fVar589 = fVar589 * fVar312 - fVar309 * fVar313;
            auVar164 = vandps_avx(ZEXT416((uint)fVar589),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar171 = vsqrtss_avx(ZEXT416((uint)(fVar542 * fVar542)),
                                   ZEXT416((uint)(fVar542 * fVar542)));
            fVar542 = auVar171._0_4_;
            auVar171 = ZEXT416((uint)(fVar598 + fVar542 * fVar542));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar309 = fVar146 / auVar171._0_4_;
            fVar313 = fVar542 * fVar309;
            fVar309 = fVar598 * fVar309;
            fVar312 = auVar164._0_4_ * fVar309 + fVar311 * fVar313 + fVar598;
            if (fVar312 <= fVar598) {
              fVar311 = fVar311 * fVar311;
LAB_140138652:
              auVar164 = ZEXT416((uint)(fVar589 * fVar589 + fVar598 + fVar311));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar311 = auVar164._0_4_;
            }
            else {
              if (fVar542 <= fVar312) {
                fVar311 = fVar533 - fVar310 * 0.6;
                fVar589 = (float)local_268._0_4_ - fVar308 * 0.6;
                fVar311 = fVar311 * fVar311;
                goto LAB_140138652;
              }
              fVar311 = auVar164._0_4_ * fVar313 + fVar598 + fVar311 * -fVar309;
            }
            fVar543 = fVar310 * 0.4;
            fVar499 = fVar308 * 0.4;
            fVar312 = fVar543 + fVar310 * (float)hex_rots[1].field0_0x0._0_4_ * 0.2 +
                                fVar308 * -((float)hex_rots[1].field0_0x0._4_4_ * 0.2);
            fVar313 = fVar499 + fVar310 * (float)hex_rots[1].field0_0x0._4_4_ * 0.2 +
                                (float)hex_rots[1].field0_0x0._0_4_ * 0.2 * fVar308;
            fVar589 = fVar312 - fVar543;
            fVar542 = fVar313 - fVar499;
            auVar164 = ZEXT416((uint)(fVar542 * fVar542 + fVar598 + fVar589 * fVar589));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar147 = auVar164._0_4_;
            fVar589 = fVar589 * (fVar146 / fVar147);
            fVar542 = fVar542 * (fVar146 / fVar147);
            fVar533 = fVar533 - fVar543;
            fVar598 = (float)local_268._0_4_ - fVar499;
            fVar309 = fVar533 * fVar589 + fVar598 * fVar542;
            fVar315 = fVar598 * fVar589 - fVar533 * fVar542;
            auVar164 = vandps_avx(ZEXT416((uint)fVar315),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar171 = vsqrtss_avx(ZEXT416((uint)(fVar147 * fVar147)),
                                   ZEXT416((uint)(fVar147 * fVar147)));
            fVar147 = auVar171._0_4_;
            auVar171 = ZEXT416((uint)(fVar147 * fVar147 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar146 = fVar146 / auVar171._0_4_;
            fVar542 = fVar147 * fVar146;
            fVar146 = fVar146 * 0.0;
            fVar589 = fVar309 * fVar542 + 0.0 + auVar164._0_4_ * fVar146;
            if (fVar589 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar315 * fVar315 + fVar309 * fVar309 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar312 = auVar164._0_4_;
              auVar436 = ZEXT1264(ZEXT812(0));
            }
            else if (fVar147 <= fVar589) {
              fVar312 = fVar144 - fVar312;
              fVar313 = (float)local_268._0_4_ - fVar313;
              auVar436 = ZEXT1264(ZEXT812(0));
              auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar312 * fVar312 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar312 = auVar164._0_4_;
            }
            else {
              auVar436 = ZEXT1264(ZEXT812(0));
              fVar312 = auVar164._0_4_ * fVar542 + fVar309 * -fVar146 + 0.0;
            }
            fVar313 = fVar543 + fVar310 * (float)hex_rots[5].field0_0x0._0_4_ * 0.2 +
                                fVar308 * -((float)hex_rots[5].field0_0x0._4_4_ * 0.2);
            fVar310 = fVar499 + fVar310 * (float)hex_rots[5].field0_0x0._4_4_ * 0.2 +
                                (float)hex_rots[5].field0_0x0._0_4_ * 0.2 * fVar308;
            fVar543 = fVar313 - fVar543;
            fVar499 = fVar310 - fVar499;
            auVar164 = ZEXT416((uint)(fVar499 * fVar499 + fVar543 * fVar543 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar146 = 1.0;
            fVar309 = auVar164._0_4_;
            fVar543 = (1.0 / fVar309) * fVar543;
            fVar499 = (1.0 / fVar309) * fVar499;
            fVar308 = fVar533 * fVar543 + fVar598 * fVar499;
            fVar542 = fVar598 * fVar543 - fVar533 * fVar499;
            auVar164 = vandps_avx(ZEXT416((uint)fVar542),___xmm_7fffffff7fffffff7fffffff7fffffff);
            auVar171 = vsqrtss_avx(ZEXT416((uint)(fVar309 * fVar309)),
                                   ZEXT416((uint)(fVar309 * fVar309)));
            fVar598 = auVar171._0_4_;
            auVar171 = ZEXT416((uint)(fVar598 * fVar598 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar589 = 1.0 / auVar171._0_4_;
            fVar309 = fVar598 * fVar589;
            fVar589 = fVar589 * 0.0;
            fVar533 = auVar164._0_4_ * fVar589 + fVar308 * fVar309 + 0.0;
            if (fVar533 <= 0.0) {
              auVar164 = ZEXT416((uint)(fVar542 * fVar542 + fVar308 * fVar308 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar533 = auVar164._0_4_;
            }
            else if (fVar598 <= fVar533) {
              fVar313 = fVar144 - fVar313;
              fVar310 = (float)local_268._0_4_ - fVar310;
              auVar164 = ZEXT416((uint)(fVar310 * fVar310 + fVar313 * fVar313 + 0.0));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar533 = auVar164._0_4_;
            }
            else {
              fVar533 = auVar164._0_4_ * fVar309 + fVar308 * -fVar589 + 0.0;
            }
            auVar164 = vminss_avx(ZEXT416(auVar481._0_4_),ZEXT416((uint)(fVar311 + -0.05)));
            auVar164 = vminss_avx(auVar164,ZEXT416((uint)(fVar312 + -0.05)));
            auVar164 = vminss_avx(auVar164,ZEXT416((uint)(fVar533 + -0.05)));
            auVar481 = ZEXT1664(auVar164);
            index = 1;
            bVar42 = false;
            fVar533 = fVar144;
          } while (bVar43);
          fVar310 = fVar237 * 8.0;
          sinf();
          fVar310 = fVar460 + fVar310 * 0.05;
          fVar313 = auVar436._0_4_;
          fVar308 = fVar313 * fVar310 + fVar237;
          fVar312 = fVar313 * fVar237 - fVar310;
          auVar152 = vandps_avx(ZEXT416((uint)fVar312),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar311 = auVar152._0_4_ * -0.20000002 + fVar313 + fVar308 * 0.9797959;
          if (fVar311 <= fVar313) {
            auVar152 = ZEXT416((uint)(fVar312 * fVar312 + fVar313 + fVar308 * fVar308));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar310 = auVar152._0_4_;
LAB_1401389a4:
            auVar541 = ZEXT464((uint)(fVar310 + -0.18));
          }
          else {
            if (fVar311 < 0.88181627) {
              fVar310 = auVar152._0_4_ * 0.9797959 + fVar313 + fVar308 * 0.20000002;
              goto LAB_1401389a4;
            }
            auVar152 = ZEXT416((uint)((fVar237 + -0.9) * (fVar237 + -0.9) +
                                     fVar313 + fVar310 * fVar310));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar541 = ZEXT1664(auVar152);
          }
          fVar310 = fVar237 * 8.0 + 1.5;
          sinf();
          fVar310 = fVar460 + fVar310 * -0.2;
          fVar308 = fVar310 * 0.6726728 + (fVar237 + 0.05) * 0.7399401;
          fVar311 = (fVar237 + 0.05) * 0.6726728 + fVar310 * -0.7399401;
          auVar152 = vandps_avx(ZEXT416((uint)fVar311),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar313 = auVar436._0_4_;
          fVar312 = auVar152._0_4_ * -0.20180185 + fVar313 + fVar308 * 0.9794263;
          if (fVar312 <= fVar313) {
            auVar152 = ZEXT416((uint)(fVar311 * fVar311 + fVar313 + fVar308 * fVar308));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar310 = auVar152._0_4_;
LAB_140138a74:
            auVar569 = ZEXT464((uint)(fVar310 + -0.15));
          }
          else {
            if (fVar312 < 0.72801095) {
              fVar310 = auVar152._0_4_ * 0.9794263 + fVar313 + fVar308 * 0.20180185;
              goto LAB_140138a74;
            }
            auVar152 = ZEXT416((uint)((fVar237 + -0.5) * (fVar237 + -0.5) +
                                     fVar313 + (fVar310 + -0.5) * (fVar310 + -0.5)));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar569 = ZEXT1664(auVar152);
          }
          fVar310 = fVar237 * 8.5 + 0.9;
          sinf();
          fVar460 = fVar460 + fVar310 * 0.1;
          fVar310 = fVar460 + 0.2;
          fVar308 = fVar310 * -0.1520572 + fVar237 * 0.9883717;
          fVar310 = fVar237 * -0.1520572 + fVar310 * -0.9883717;
          auVar152 = vandps_avx(ZEXT416((uint)fVar310),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar312 = auVar436._0_4_;
          fVar311 = auVar152._0_4_ * -0.22808577 + fVar312 + fVar308 * 0.973641;
          if (fVar311 <= fVar312) {
            auVar152 = ZEXT416((uint)(fVar310 * fVar310 + fVar312 + fVar308 * fVar308));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar460 = auVar152._0_4_;
LAB_140138374:
            auVar152 = ZEXT416((uint)(fVar460 + -0.15));
          }
          else {
            if (fVar311 < 0.64031243) {
              fVar460 = auVar152._0_4_ * 0.973641 + fVar312 + fVar308 * 0.22808577;
              goto LAB_140138374;
            }
            fVar460 = fVar460 + 0.3;
            auVar152 = ZEXT416((uint)((fVar237 + -0.65) * (fVar237 + -0.65) +
                                     fVar312 + fVar460 * fVar460));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
          }
          auVar164 = vmaxss_avx(auVar481._0_16_,ZEXT416((uint)(fVar314 + -0.2)));
          auVar171 = vminss_avx(auVar541._0_16_,auVar569._0_16_);
          auVar152 = vminss_avx(auVar171,auVar152);
          auVar152 = vminss_avx(auVar164,auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("EMAG");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 0;
    materials_list[index].drop_weight = 0.1;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 6.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d4ccccd3e4ccccd;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003dcccccd;
    materials_list[index].physics_update_fn = cell_electro_magnet;
    materials_list[index].field14_0x4c.flags = materials_list[index].field14_0x4c.flags | 0x601;
    iVar50 = get_icon_coords(0x48);
    rVar124._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar124._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar124;
  }
  iVar50 = get_icon_coords(0x48);
  iVar44 = *piVar47;
  pfVar84 = (float *)0x0;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      do {
        fVar237 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar146 = fVar237 + 0.275;
        fVar314 = fVar146 + -0.25;
        fVar237 = fVar237 + -0.275;
        auVar152 = vminss_avx(SUB6416(ZEXT464(0x3f000000),0),ZEXT416((uint)fVar146));
        fVar533 = fVar146 - auVar152._0_4_;
        local_1c8._4_4_ = 0x80000000;
        local_1c8._0_4_ = -fVar314;
        local_1c8._8_4_ = 0x80000000;
        local_1c8._12_4_ = 0x80000000;
        index = 0;
        pfVar141 = pfVar84;
        do {
          pfVar84 = icon_atlas;
          fVar144 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar429._8_4_ = 0x7fffffff;
          auVar429._0_8_ = 0x7fffffff7fffffff;
          auVar429._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)fVar144),auVar429);
          auVar164 = ZEXT416((uint)(fVar146 * fVar146 + fVar144 * fVar144 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.3)),auVar429);
          auVar164 = ZEXT416((uint)(auVar164._0_4_ + -0.2));
          fVar310 = auVar152._0_4_;
          fVar460 = fVar310 + -0.3;
          auVar152 = ZEXT416((uint)fVar460);
          uVar142 = (undefined4)((ulonglong)pfVar141 >> 0x20);
          if (fVar146 <= 0.0) {
LAB_140138f85:
            if (fVar144 < 0.0) goto LAB_140138f8f;
LAB_140139117:
            fVar144 = (fVar314 + -0.05) * 0.38268343 + fVar460 * -0.9238795;
            fVar308 = (fVar314 + -0.05) * -0.9238795 + fVar460 * -0.38268343;
            auVar152 = vandps_avx(ZEXT416((uint)fVar308),___xmm_7fffffff7fffffff7fffffff7fffffff);
            fVar313 = auVar152._0_4_;
            fVar311 = -0.019134177;
            fVar312 = 0.046193976;
            if (fVar313 * -0.38268352 <= fVar144 * 0.9238795) {
              fVar308 = fVar308 * fVar308 + fVar144 * fVar144 + 0.0;
              if (fVar308 <= 1e-06) {
                uVar143 = 0;
              }
              else {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
                fVar308 = 1.0 / auVar152._0_4_;
                uVar143 = CONCAT44(uVar142,fVar144 * fVar308) |
                          (ulonglong)(uint)(fVar313 * fVar308) << 0x20;
              }
              uVar142 = 0;
              fVar311 = (float)uVar143 * 0.05;
              fVar312 = (float)(uVar143 >> 0x20) * 0.05;
            }
            fVar308 = (fVar314 + 0.05) * -0.38268358 + (0.0 - fVar460) * -0.9238795;
            fVar460 = (fVar314 + 0.05) * 0.9238795 + (0.0 - fVar460) * -0.38268358;
            auVar152 = vandps_avx(ZEXT416((uint)fVar460),___xmm_7fffffff7fffffff7fffffff7fffffff);
            fVar542 = auVar152._0_4_;
            fVar309 = -0.019134177;
            fVar589 = 0.046193976;
            if (fVar542 * -0.38268352 <= fVar308 * 0.9238795) {
              fVar460 = fVar460 * fVar460 + fVar308 * fVar308 + 0.0;
              if (fVar460 <= 1e-06) {
                uVar143 = 0;
              }
              else {
                auVar152 = vsqrtss_avx(ZEXT416((uint)fVar460),ZEXT416((uint)fVar460));
                fVar460 = 1.0 / auVar152._0_4_;
                uVar143 = CONCAT44(uVar142,fVar308 * fVar460) |
                          (ulonglong)(uint)(fVar542 * fVar460) << 0x20;
              }
              uVar142 = 0;
              fVar309 = (float)uVar143 * 0.05;
              fVar589 = (float)(uVar143 >> 0x20) * 0.05;
            }
            auVar152 = ZEXT416((uint)((fVar313 - fVar312) * (fVar313 - fVar312) +
                                     (fVar144 - fVar311) * (fVar144 - fVar311) + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar171 = ZEXT416((uint)((fVar542 - fVar589) * (fVar542 - fVar589) +
                                     (fVar308 - fVar309) * (fVar308 - fVar309) + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            auVar152 = vminss_avx(auVar152,auVar171);
            fVar144 = auVar152._0_4_;
          }
          else {
            auVar164 = vandps_avx(auVar152,___xmm_7fffffff7fffffff7fffffff7fffffff);
            fVar308 = auVar164._0_4_;
            if ((fVar146 < 0.5) && (fVar308 < 0.2)) {
              auVar164 = vmaxss_avx(ZEXT416((uint)(fVar308 + -0.2)),ZEXT416((uint)(fVar146 + -0.5)))
              ;
              goto LAB_140138f85;
            }
            auVar164 = vminss_avx(SUB6416(ZEXT464(0x3e4ccccd),0),auVar164);
            fVar308 = fVar308 - auVar164._0_4_;
            auVar164 = ZEXT416((uint)(fVar533 * fVar533 + fVar308 * fVar308 + 0.0));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            if (0.0 <= fVar144) goto LAB_140139117;
LAB_140138f8f:
            auVar430._0_4_ = -fVar460;
            auVar430._4_4_ = 0x80000000;
            auVar430._8_4_ = 0x80000000;
            auVar430._12_4_ = 0x80000000;
            auVar171 = vmaxss_avx(auVar430,auVar152);
            auVar152 = vcmpss_avx(auVar152,auVar430,1);
            auVar152 = vblendvps_avx(ZEXT416((uint)fVar314),local_1c8,auVar152);
            fVar460 = auVar152._0_4_;
            auVar152 = vmovsldup_avx(auVar171);
            auVar496._0_12_ = ZEXT812(0);
            auVar496._12_4_ = 0;
            auVar189 = vmovsldup_avx(ZEXT416((uint)((fVar460 + 0.1) * 0.2)));
            auVar431._0_4_ = auVar189._0_4_ + (auVar152._0_4_ + -0.08) * 0.0 + 0.0;
            auVar431._4_4_ = auVar189._4_4_ + (auVar152._4_4_ + 0.08) * 0.16 + 0.0;
            auVar431._8_4_ = auVar189._8_4_ + (auVar152._8_4_ + 0.0) * 0.0 + 0.0;
            auVar431._12_4_ = auVar189._12_4_ + (auVar152._12_4_ + 0.0) * 0.0 + 0.0;
            auVar152 = vdivps_avx(auVar431,___xmm_00000000000000003d86594b3d23d70b);
            auVar476._8_4_ = 0x3f800000;
            auVar476._0_8_ = 0x3f8000003f800000;
            auVar476._12_4_ = 0x3f800000;
            auVar189 = vminps_avx(auVar476,auVar152);
            auVar152 = vcmpps_avx(auVar189,auVar496,1);
            auVar152 = vshufps_avx(auVar152,auVar152,0x50);
            uVar140 = vmovmskpd_avx(auVar152);
            fVar144 = 0.0;
            if ((uVar140 & 2) == 0) {
              auVar152 = vmovshdup_avx(auVar189);
              fVar144 = auVar152._0_4_;
            }
            auVar595._0_12_ = ZEXT812(0);
            auVar595._12_4_ = 0;
            if ((uVar140 & 1) == 0) {
              auVar595 = auVar189;
            }
            fVar308 = auVar171._0_4_ - (fVar144 * 0.08 + (1.0 - fVar144) * -0.08);
            fVar144 = fVar460 - (fVar144 * 0.1 - (1.0 - fVar144) * 0.1);
            auVar152 = ZEXT416((uint)(fVar144 * fVar144 + fVar308 * fVar308 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            auVar164 = vmaxss_avx(auVar164,ZEXT416((uint)(0.025 - auVar152._0_4_)));
            fVar308 = auVar595._0_4_;
            fVar144 = auVar171._0_4_ - ((1.0 - fVar308) * 0.08 + fVar308 * 0.08);
            fVar460 = fVar460 - (fVar308 * 0.1 - (1.0 - fVar308) * 0.1);
            auVar152 = ZEXT416((uint)(fVar460 * fVar460 + fVar144 * fVar144 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar144 = auVar152._0_4_;
          }
          fVar460 = fVar310 * -4.371139e-08 + fVar237 + 0.15;
          fVar312 = (fVar237 + 0.15) * -4.371139e-08 - fVar310;
          auVar152 = vandps_avx(ZEXT416((uint)fVar312),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar313 = auVar152._0_4_;
          fVar311 = 0.15;
          fVar308 = 0.15;
          if (fVar313 * 0.7071068 <= fVar460 * 0.70710677) {
            fVar308 = fVar312 * fVar312 + fVar460 * fVar460 + 0.0;
            if (fVar308 <= 1e-06) {
              uVar143 = 0;
            }
            else {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
              fVar308 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44(uVar142,fVar460 * fVar308) |
                        (ulonglong)(uint)(fVar313 * fVar308) << 0x20;
            }
            uVar142 = 0;
            fVar308 = (float)uVar143 * 0.21213204;
            fVar311 = (float)(uVar143 >> 0x20) * 0.21213204;
          }
          auVar152 = ZEXT416((uint)((fVar313 - fVar311) * (fVar313 - fVar311) +
                                   (fVar460 - fVar308) * (fVar460 - fVar308) + 0.0));
          auVar171 = vsqrtss_avx(auVar152,auVar152);
          fVar460 = fVar310 * -4.371139e-08 + fVar237 + -0.05967371;
          fVar312 = (fVar237 + -0.05967371) * -4.371139e-08 - fVar310;
          auVar152 = vandps_avx(ZEXT416((uint)fVar312),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar313 = auVar152._0_4_;
          fVar308 = -0.05967375;
          fVar311 = 0.3;
          if (fVar313 * -0.19509044 <= fVar460 * 0.98078525) {
            fVar308 = fVar312 * fVar312 + fVar460 * fVar460 + 0.0;
            if (fVar308 <= 1e-06) {
              uVar143 = 0;
            }
            else {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
              fVar308 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44(uVar142,fVar460 * fVar308) |
                        (ulonglong)(uint)(fVar313 * fVar308) << 0x20;
            }
            uVar142 = 0;
            fVar308 = (float)uVar143 * 0.30587736;
            fVar311 = (float)(uVar143 >> 0x20) * 0.30587736;
          }
          auVar152 = ZEXT416((uint)((fVar313 - fVar311) * (fVar313 - fVar311) +
                                   (fVar460 - fVar308) * (fVar460 - fVar308) + 0.0));
          auVar189 = vsqrtss_avx(auVar152,auVar152);
          fVar460 = fVar310 * -4.371139e-08 + fVar237 + -0.1863961;
          fVar310 = (fVar237 + -0.1863961) * -4.371139e-08 - fVar310;
          auVar152 = vandps_avx(ZEXT416((uint)fVar310),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar312 = auVar152._0_4_;
          fVar308 = -0.18639609;
          fVar311 = 0.45000002;
          if (fVar312 * -0.3826834 <= fVar460 * 0.92387956) {
            fVar310 = fVar310 * fVar310 + fVar460 * fVar460 + 0.0;
            if (1e-06 < fVar310) {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar310),ZEXT416((uint)fVar310));
              fVar310 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44(uVar142,fVar460 * fVar310) |
                        (ulonglong)(uint)(fVar312 * fVar310) << 0x20;
            }
            else {
              uVar143 = 0;
            }
            fVar308 = (float)uVar143 * 0.4870765;
            fVar311 = (float)(uVar143 >> 0x20) * 0.4870765;
          }
          auVar152 = vmaxss_avx(auVar164,ZEXT416((uint)(0.025 - fVar144)));
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar171._0_4_ + -0.03)));
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar189._0_4_ + -0.03)));
          auVar164 = ZEXT416((uint)((fVar312 - fVar311) * (fVar312 - fVar311) +
                                   (fVar460 - fVar308) * (fVar460 - fVar308) + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
          pfVar141 = pfVar84;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("WALL");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 8.0;
    materials_list[index].genome_size = 6.0;
    materials_list[index].density = 2.0;
    materials_list[index].conductivity = 100.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3c83126f3bc49ba6;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d4ccccd;
    materials_list[index].force_update_fn = cell_wall_anchor;
    iVar50 = get_icon_coords(0x49);
    rVar125._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar125._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar125;
  }
  iVar50 = get_icon_coords(0x49);
  iVar44 = *piVar47;
  pfVar84 = (float *)0x0;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar432._0_12_ = ZEXT812(0);
      auVar432._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        fVar314 = fVar146 + -0.15;
        fVar237 = fVar146 + 0.15;
        index = 0;
        auVar611._8_4_ = 0x7fffffff;
        auVar611._0_8_ = 0x7fffffff7fffffff;
        auVar611._12_4_ = 0x7fffffff;
        pfVar141 = pfVar84;
        do {
          pfVar84 = icon_atlas;
          fVar533 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          fVar311 = fVar533 * fVar533 + 0.0;
          auVar152 = ZEXT416((uint)(fVar311 + (fVar146 + -0.55) * (fVar146 + -0.55)));
          auVar164 = vsqrtss_avx(auVar152,auVar152);
          fVar144 = fVar533 * 0.0 + -(fVar146 + -0.5);
          fVar460 = (fVar146 + -0.5) * 0.0 + fVar533;
          auVar152 = vandps_avx(ZEXT416((uint)fVar460),auVar611);
          fVar310 = auVar152._0_4_ * 0.0 + fVar144 + 0.0;
          fVar308 = auVar164._0_4_ + -0.25;
          if (fVar310 <= 0.0) {
            fVar311 = fVar460 * fVar460 + fVar144 * fVar144 + 0.0;
LAB_140139a01:
            auVar152 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
            fVar144 = auVar152._0_4_;
          }
          else {
            if (1.05 <= fVar310) {
              fVar311 = fVar311 + (fVar146 + 0.55) * (fVar146 + 0.55);
              goto LAB_140139a01;
            }
            fVar144 = fVar144 * -0.0 + 0.0 + auVar152._0_4_;
          }
          auVar606._8_4_ = 0x7fffffff;
          auVar606._0_8_ = 0x7fffffff7fffffff;
          auVar606._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar308 - (fVar144 + -0.1))),auVar606);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar152._0_4_)),auVar432);
          auVar171 = vminss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)(fVar144 + -0.1)));
          fVar144 = (auVar152._0_4_ * auVar152._0_4_ * -0.25) / 0.05 + auVar171._0_4_;
          fVar460 = fVar533 + 0.3 + fVar314 * 0.0;
          fVar308 = fVar314 - (fVar533 + 0.3) * 0.0;
          auVar152 = vandps_avx(ZEXT416((uint)fVar308),auVar606);
          fVar310 = auVar152._0_4_ * 0.0 + fVar460;
          if (fVar310 <= 0.0) {
            fVar460 = fVar460 * fVar460;
            fVar308 = fVar308 * fVar308;
LAB_140139aa4:
            auVar152 = ZEXT416((uint)(fVar308 + fVar460 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar460 = auVar152._0_4_;
          }
          else {
            if (0.6 <= fVar310) {
              fVar460 = (fVar533 + -0.3) * (fVar533 + -0.3);
              fVar308 = fVar314 * fVar314;
              goto LAB_140139aa4;
            }
            fVar460 = fVar460 * -0.0 + 0.0 + auVar152._0_4_;
          }
          auVar612._8_4_ = 0x7fffffff;
          auVar612._0_8_ = 0x7fffffff7fffffff;
          auVar612._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar144 - (fVar460 + -0.1))),auVar612);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar152._0_4_)),auVar432);
          auVar171 = vminss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)(fVar460 + -0.1)));
          fVar144 = (auVar152._0_4_ * auVar152._0_4_ * -0.25) / 0.1 + auVar171._0_4_;
          auVar152 = vandps_avx(auVar612,ZEXT416((uint)fVar533));
          fVar311 = auVar152._0_4_;
          fVar310 = fVar311 * -0.0 - fVar237;
          fVar308 = -fVar237 * -0.0 - fVar311;
          auVar152 = vandps_avx(auVar612,ZEXT416((uint)fVar308));
          fVar312 = auVar152._0_4_;
          fVar533 = 0.27499998;
          fVar460 = 0.476314;
          if (fVar312 * 0.49999997 <= fVar310 * 0.86602545) {
            fVar533 = fVar310 * fVar310 + 0.0 + fVar308 * fVar308;
            if (1e-06 < fVar533) {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar533),ZEXT416((uint)fVar533));
              fVar533 = 1.0 / auVar152._0_4_;
              uVar143 = CONCAT44((int)((ulonglong)pfVar141 >> 0x20),fVar310 * fVar533) |
                        (ulonglong)(uint)(fVar312 * fVar533) << 0x20;
            }
            else {
              uVar143 = 0;
            }
            fVar533 = (float)uVar143 * 0.55;
            fVar460 = (float)(uVar143 >> 0x20) * 0.55;
          }
          auVar152 = ZEXT416((uint)((fVar312 - fVar460) * (fVar312 - fVar460) +
                                   (fVar310 - fVar533) * (fVar310 - fVar533) + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          fVar533 = auVar152._0_4_ + -0.1;
          auVar611._8_4_ = 0x7fffffff;
          auVar611._0_8_ = 0x7fffffff7fffffff;
          auVar611._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar144 - fVar533)),auVar611);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.2 - auVar152._0_4_)),auVar432);
          auVar171 = vminss_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar533));
          fVar144 = auVar171._0_4_ - (auVar152._0_4_ * auVar152._0_4_ * 0.25) / 0.2;
          fVar533 = (fVar311 + -0.476314) * 0.49999997 + 0.0 + (fVar237 + 0.27499998) * 0.86602545;
          auVar559._0_4_ = -fVar533;
          auVar559._4_4_ = 0x80000000;
          auVar559._8_4_ = 0x80000000;
          auVar559._12_4_ = 0x80000000;
          auVar152 = vandps_avx(ZEXT416((uint)(((fVar311 + -0.476314) * 0.86602545 + 0.0) -
                                              (fVar237 + 0.27499998) * 0.49999997)),auVar611);
          auVar171 = vmaxss_avx(ZEXT416((uint)(auVar152._0_4_ * 0.86602545 + fVar533 * 0.49999997 +
                                              -0.18)),auVar559);
          auVar152 = vandps_avx(ZEXT416((uint)(fVar144 - auVar171._0_4_)),auVar611);
          auVar152 = vmaxss_avx(ZEXT416((uint)(0.05 - auVar152._0_4_)),auVar432);
          auVar171 = vminss_avx(ZEXT416((uint)fVar144),auVar171);
          auVar152 = vmaxss_avx(ZEXT416((uint)(auVar171._0_4_ -
                                              (auVar152._0_4_ * auVar152._0_4_ * 0.25) / 0.05)),
                                ZEXT416((uint)(0.08 - auVar164._0_4_)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
          pfVar141 = pfVar84;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("NEGA");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].directional_conductivity = 400.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3d4ccccd3f666666;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003d4ccccd;
    materials_list[index].connection_update_fn = cell_negator_connections;
    materials_list[index].electric_update_fn = cell_negator_electric;
    iVar50 = get_icon_coords(0x4a);
    rVar126._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar126._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar126;
  }
  iVar50 = get_icon_coords(0x4a);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        fVar314 = fVar146 + -0.15;
        fVar237 = (fVar314 + -0.28284273) * 0.70710677;
        fVar144 = -0.15 - fVar146;
        fVar533 = (fVar144 + -0.28284273) * 0.70710677;
        uVar143 = 0;
        pfVar84 = (float *)0x0;
        do {
          uVar140 = (uint)((ulonglong)pfVar84 >> 0x20);
          fVar310 = 0.28284273;
          fVar460 = -1.0;
          if ((longlong)uVar143 < 0) {
            uVar140 = (uint)(uVar143 >> 0x21);
          }
          local_238._0_4_ = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          fVar308 = (float)local_238 + 0.2;
          fVar311 = fVar308 + fVar314 * 0.0;
          fVar312 = fVar308 * -0.0 + fVar314;
          auVar152 = vandps_avx(ZEXT416((uint)fVar312),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar589 = auVar152._0_4_;
          fVar313 = 0.28284273;
          fVar309 = 0.28284273;
          if (fVar589 * 0.70710677 <= fVar311 * 0.70710677) {
            fVar312 = fVar312 * fVar312 + fVar311 * fVar311 + 0.0;
            if (fVar312 <= 1e-06) {
              uVar81 = 0;
            }
            else {
              auVar152 = vsqrtss_avx(ZEXT416((uint)fVar312),ZEXT416((uint)fVar312));
              fVar312 = 1.0 / auVar152._0_4_;
              uVar81 = CONCAT44(uVar140,fVar311 * fVar312) |
                       (ulonglong)(uint)(fVar589 * fVar312) << 0x20;
            }
            uVar140 = 0;
            fVar313 = (float)uVar81 * 0.4;
            fVar309 = (float)(uVar81 >> 0x20) * 0.4;
          }
          auVar152 = ZEXT416((uint)((fVar589 - fVar309) * (fVar589 - fVar309) +
                                   (fVar311 - fVar313) * (fVar311 - fVar313) + 0.0));
          auVar171 = vsqrtss_avx(auVar152,auVar152);
          fVar311 = (fVar308 + -0.28284273) * 0.70710677;
          fVar308 = fVar237 + (0.0 - fVar311);
          auVar477._8_4_ = 0x7fffffff;
          auVar477._0_8_ = 0x7fffffff7fffffff;
          auVar477._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(fVar237 + fVar311 + 0.0)),auVar477);
          fVar309 = 0.2 - (float)local_238;
          fVar311 = fVar309 + fVar144 * 0.0;
          fVar312 = fVar309 * -0.0 + fVar144;
          auVar164 = vandps_avx(ZEXT416((uint)fVar312),auVar477);
          fVar589 = auVar164._0_4_;
          fVar313 = 0.28284273;
          if (fVar589 * 0.70710677 <= fVar311 * 0.70710677) {
            fVar310 = fVar312 * fVar312 + fVar311 * fVar311 + 0.0;
            if (fVar310 <= 1e-06) {
              uVar81 = 0;
            }
            else {
              auVar164 = vsqrtss_avx(ZEXT416((uint)fVar310),ZEXT416((uint)fVar310));
              fVar310 = 1.0 / auVar164._0_4_;
              uVar81 = CONCAT44(uVar140,fVar311 * fVar310) |
                       (ulonglong)(uint)(fVar589 * fVar310) << 0x20;
            }
            fVar313 = (float)uVar81 * 0.4;
            fVar310 = (float)(uVar81 >> 0x20) * 0.4;
          }
          auVar164 = ZEXT416((uint)(float)local_238);
          if ((float)local_238 < 0.0) {
            local_238._0_4_ = -(float)local_238;
          }
          auVar481 = ZEXT464(0x40000000);
          auVar171 = vminss_avx(auVar481._0_16_,ZEXT416((uint)(auVar171._0_4_ + -0.125)));
          auVar381._0_4_ = -fVar308;
          auVar381._4_4_ = 0x80000000;
          auVar381._8_4_ = 0x80000000;
          auVar381._12_4_ = 0x80000000;
          auVar152 = vmaxss_avx(ZEXT416((uint)(auVar152._0_4_ * 0.86602545 + fVar308 * 0.49999997 +
                                              -0.2)),auVar381);
          auVar171 = vminss_avx(auVar171,auVar152);
          auVar152 = vcmpss_avx(auVar164,auVar436._0_16_,1);
          auVar40._4_4_ = 0x80000000;
          auVar40._0_4_ = -fVar146;
          auVar40._8_4_ = 0x80000000;
          auVar40._12_4_ = 0x80000000;
          auVar152 = vblendvps_avx(ZEXT416((uint)fVar146),auVar40,auVar152);
          do {
            fVar598 = 1.0;
            fVar308 = fVar460 * 0.62831855;
            fVar542 = fVar308;
            cosf();
            sinf();
            unaff_R13 = CONCAT44((int)(unaff_R13 >> 0x20),fVar542 * 0.55 + -0.2) |
                        (ulonglong)(uint)(fVar308 * 0.55 + 0.15) << 0x20;
            fVar312 = fVar460 * 65536.0;
            auVar218._0_4_ = (float)(1e+32 - (double)fVar312);
            auVar218._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar312) >> 0x20);
            auVar218._8_8_ = 0;
            auVar613._0_12_ = ZEXT812(0);
            auVar613._12_4_ = 0;
            auVar541 = ZEXT1664(auVar613);
            auVar164 = vcmpss_avx(ZEXT416((uint)fVar312),auVar613,1);
            auVar164 = vblendvps_avx(ZEXT416((uint)fVar312),auVar218,auVar164);
            uVar140 = (uint)(longlong)auVar164._0_4_;
            uVar134 = uVar140 + 0x2f88ed;
            fVar312 = 0.06;
            do {
              fVar609 = auVar541._0_4_;
              fVar543 = fVar609 * 65536.0;
              auVar303._0_4_ = (float)(1e+32 - (double)fVar543);
              auVar303._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar543) >> 0x20);
              auVar303._8_8_ = 0;
              auVar189 = vcmpss_avx(ZEXT416((uint)fVar543),auVar436._0_16_,1);
              auVar189 = vblendvps_avx(ZEXT416((uint)fVar543),auVar303,auVar189);
              uVar46 = (uint)(longlong)auVar189._0_4_;
              fVar543 = (float)((((uint)((ulonglong)(longlong)auVar164._0_4_ >> 1) & 0x7fffffff ^
                                 uVar46) * 0x41c64e6d >> 3 ^ (uVar46 >> 1 ^ uVar140) * 0x41c64e6d) *
                               0x41c64e6d) * 2.3283064e-10 + -0.5 + fVar542 * 0.8;
              fVar499 = (float)(((uVar46 + 0x2f88ed >> 1 ^ uVar134) * 0x41c64e6d >> 3 ^
                                (uVar46 + 0x2f88ed ^ uVar134 >> 1) * 0x41c64e6d) * 0x41c64e6d) *
                        2.3283064e-10 + -0.5 + fVar308 * 0.8;
              fVar561 = auVar436._0_4_;
              auVar189 = ZEXT416((uint)(fVar499 * fVar499 + fVar561 + fVar543 * fVar543));
              auVar189 = vsqrtss_avx(auVar189,auVar189);
              fVar315 = fVar598 / auVar189._0_4_;
              fVar145 = (float)unaff_R13;
              fVar149 = (float)(unaff_R13 >> 0x20);
              fVar543 = fVar543 * fVar315 * 0.1 + fVar145;
              fVar499 = fVar499 * fVar315 * 0.1 + fVar149;
              fVar315 = fVar499 * fVar499 + fVar561 + fVar543 * fVar543;
              fVar147 = fVar312 + -0.012;
              if (fVar315 < 0.040000003) {
                auVar189 = vsqrtss_avx(ZEXT416((uint)fVar315),ZEXT416((uint)fVar315));
                fVar598 = fVar598 / auVar189._0_4_;
                fVar543 = fVar543 * fVar598 * 0.2;
                fVar499 = fVar499 * fVar598 * 0.2;
              }
              unaff_R13 = CONCAT44(fVar499,fVar543);
              fVar599 = fVar543 - fVar145;
              fVar534 = fVar499 - fVar149;
              auVar189 = ZEXT416((uint)(fVar534 * fVar534 + fVar561 + fVar599 * fVar599));
              auVar189 = vsqrtss_avx(auVar189,auVar189);
              auVar436 = ZEXT1664(auVar189);
              fVar561 = fVar147 - fVar312;
              fVar315 = fVar561 * fVar561;
              fVar562 = auVar189._0_4_;
              fVar598 = fVar562 * fVar562 - fVar315;
              if (fVar598 < 0.0) {
                fVar148 = sqrtf(fVar598);
                fVar562 = auVar436._0_4_;
                fVar609 = auVar541._0_4_;
              }
              else {
                auVar189 = vsqrtss_avx(ZEXT416((uint)fVar598),ZEXT416((uint)fVar598));
                fVar148 = auVar189._0_4_;
              }
              pfVar84 = icon_atlas;
              fVar599 = fVar599 * (1.0 / fVar562);
              fVar534 = fVar534 * (1.0 / fVar562);
              fVar598 = 1.0;
              local_228 = auVar152._0_4_;
              fVar562 = ((float)local_238 - fVar145) * fVar599 + (local_228 - fVar149) * fVar534;
              fVar149 = (local_228 - fVar149) * fVar599 - ((float)local_238 - fVar145) * fVar534;
              auVar189 = vandps_avx(ZEXT416((uint)fVar149),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar436 = ZEXT1264(ZEXT812(0));
              auVar205 = ZEXT416((uint)(fVar315 + fVar148 * fVar148 + 0.0));
              auVar205 = vsqrtss_avx(auVar205,auVar205);
              fVar315 = 1.0 / auVar205._0_4_;
              fVar145 = fVar148 * fVar315;
              fVar561 = fVar561 * fVar315;
              fVar315 = auVar189._0_4_ * fVar561 + fVar562 * fVar145 + 0.0;
              if (fVar315 <= 0.0) {
                auVar189 = ZEXT416((uint)(fVar149 * fVar149 + fVar562 * fVar562 + 0.0));
                auVar189 = vsqrtss_avx(auVar189,auVar189);
                auVar189 = ZEXT416((uint)(auVar189._0_4_ - fVar312));
              }
              else if (fVar148 <= fVar315) {
                auVar189 = ZEXT416((uint)((local_228 - fVar499) * (local_228 - fVar499) +
                                         ((float)local_238 - fVar543) * ((float)local_238 - fVar543)
                                         + 0.0));
                auVar189 = vsqrtss_avx(auVar189,auVar189);
                auVar189 = ZEXT416((uint)(auVar189._0_4_ - fVar147));
              }
              else {
                auVar189 = ZEXT416((uint)((auVar189._0_4_ * fVar145 + fVar562 * -fVar561 + 0.0) -
                                         fVar312));
              }
              auVar189 = vminss_avx(ZEXT416(auVar481._0_4_),auVar189);
              auVar481 = ZEXT1664(auVar189);
              auVar541 = ZEXT464((uint)(fVar609 + 0.2));
              fVar312 = fVar147;
            } while (fVar609 + 0.2 < 1.0);
            fVar460 = fVar460 + 0.5;
          } while (fVar460 <= 1.0);
          auVar152 = ZEXT416((uint)((fVar589 - fVar310) * (fVar589 - fVar310) +
                                   (fVar311 - fVar313) * (fVar311 - fVar313) + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar164 = vminss_avx(ZEXT416(auVar171._0_4_),ZEXT416((uint)(auVar152._0_4_ + -0.125)));
          fVar310 = (fVar309 + -0.28284273) * 0.70710677;
          fVar460 = fVar533 + (0.0 - fVar310);
          auVar152 = vandps_avx(ZEXT416((uint)(fVar533 + fVar310 + 0.0)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar302._0_4_ = -fVar460;
          auVar302._4_4_ = 0x80000000;
          auVar302._8_4_ = 0x80000000;
          auVar302._12_4_ = 0x80000000;
          auVar152 = vmaxss_avx(ZEXT416((uint)(auVar152._0_4_ * 0.86602545 + fVar460 * 0.49999997 +
                                              -0.2)),auVar302);
          auVar164 = vminss_avx(auVar164,auVar152);
          auVar152 = vmaxss_avx(auVar189,ZEXT416((uint)(0.005 - auVar164._0_4_)));
          auVar152 = vminss_avx(auVar164,auVar152);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           (int)uVar143 + iVar50.field0_0x0._0_4_] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("OPTO");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].directional_conductivity = 100.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3f2560423dd4fdf4;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ec20c4a;
    materials_list[index].connection_update_fn = cell_isolator_connections;
    materials_list[index].electric_update_fn = cell_isolator_electric;
    iVar50 = get_icon_coords(0x4b);
    rVar127._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar127._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar127;
  }
  iVar50 = get_icon_coords(0x4b);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar436 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
      auVar614._0_12_ = ZEXT812(0);
      auVar614._12_4_ = 0;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar382._8_4_ = 0x7fffffff;
        auVar382._0_8_ = 0x7fffffff7fffffff;
        auVar382._12_4_ = 0x7fffffff;
        auVar152 = vandps_avx(ZEXT416((uint)fVar146),auVar382);
        fVar314 = auVar152._0_4_ + -0.6;
        auVar304._4_4_ = 0;
        auVar304._0_4_ = fVar146 + 0.2;
        auVar304._8_4_ = fVar146 + 0.2;
        auVar304._12_4_ = 0;
        auVar152 = vmovsldup_avx(ZEXT416((uint)fVar314));
        local_218._4_4_ = auVar152._4_4_ + 0.3;
        local_218._0_4_ = auVar152._0_4_ + 0.1;
        fStack_210 = auVar152._8_4_ + 0.0;
        fStack_20c = auVar152._12_4_ + 0.0;
        index = 0;
        do {
          auVar152 = vandps_avx(ZEXT416((uint)(((float)(int)index + 0.5) * 0.015625 + -1.0)),
                                auVar382);
          fVar144 = auVar152._0_4_;
          auVar164 = vandps_avx(ZEXT416((uint)((fVar144 + -0.12) * 0.15 +
                                              (0.0 - (fVar146 + -0.1) * 0.0))),auVar382);
          fVar308 = auVar164._0_4_ / 0.15;
          fVar237 = (fVar144 + -0.12) * 0.0 + 0.0;
          fVar310 = (fVar237 + (fVar146 + -0.1) * 0.15) / 0.0225;
          fVar533 = fVar308 + -0.15;
          auVar164 = vshufps_avx(auVar152,auVar152,0xa0);
          fVar460 = auVar164._0_4_ + -0.3;
          auVar305._4_4_ = 0;
          auVar305._0_4_ = fVar237;
          auVar305._8_4_ = fVar237;
          auVar305._12_4_ = 0;
          auVar152 = vinsertps_avx(auVar305,ZEXT416((uint)(fVar310 * 0.0225)),0x30);
          auVar538._0_4_ = fVar460 * 0.0 + 0.0;
          auVar538._4_4_ = (auVar164._4_4_ + 0.3) * 0.6 + 0.0;
          auVar538._8_4_ = (auVar164._8_4_ + 0.0) * 0.0 + 0.0;
          auVar538._12_4_ = (auVar164._12_4_ + 0.0) * 0.0 + 0.0;
          auVar152 = vblendps_avx(auVar152,auVar538,3);
          auVar164 = vinsertps_avx(auVar304,ZEXT416((uint)fVar533),0x30);
          auVar164 = vblendps_avx(auVar164,_local_218,3);
          auVar306._0_4_ = auVar164._0_4_ * -0.20000002 + auVar152._0_4_;
          auVar306._4_4_ = auVar164._4_4_ * 0.0 + auVar152._4_4_;
          auVar306._8_4_ = auVar164._8_4_ * 0.3 + auVar152._8_4_;
          auVar306._12_4_ = auVar164._12_4_ * -0.15 + auVar152._12_4_;
          auVar152 = vdivps_avx(auVar306,___xmm_3d3851ec3db851ec3eb851ec3d23d70c);
          auVar171 = auVar436._0_16_;
          auVar164 = vminps_avx(auVar171,auVar152);
          auVar152 = vcmpps_avx(auVar164,ZEXT416(0) << 0x20,1);
          uVar140 = vmovmskps_avx(auVar152);
          fVar237 = 0.0;
          if ((uVar140 & 8) == 0) {
            auVar152 = vshufps_avx(auVar164,auVar164,0xff);
            fVar237 = auVar152._0_4_;
          }
          auVar152 = vandps_avx(ZEXT416((uint)(fVar310 + -0.5)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar189 = ZEXT416((uint)(auVar152._0_4_ + -0.5));
          auVar152 = vinsertps_avx(auVar189,ZEXT416((uint)(fVar310 - fVar237)),0x10);
          fVar311 = 0.0;
          if ((uVar140 & 4) == 0) {
            auVar205 = vshufpd_avx(auVar164,auVar164,1);
            fVar311 = auVar205._0_4_;
          }
          fVar312 = fVar144 - (fVar311 * 0.12 + (1.0 - fVar311) * 0.12);
          fVar311 = fVar146 - (fVar311 * 0.1 + (1.0 - fVar311) * -0.2);
          auVar205 = ZEXT416((uint)(fVar311 * fVar311 + fVar312 * fVar312 + 0.0));
          auVar205 = vsqrtss_avx(auVar205,auVar205);
          fVar311 = 0.0;
          if ((uVar140 & 2) == 0) {
            auVar181 = vmovshdup_avx(auVar164);
            fVar311 = auVar181._0_4_;
          }
          auVar181 = vcmpss_avx(ZEXT416((uint)fVar310),ZEXT416(0x3f000000),1);
          auVar181 = vandps_avx(auVar181,SUB6416(ZEXT464(0x3e19999a),0));
          auVar262 = ZEXT416((uint)(fVar533 + fVar237 * 0.15));
          auVar323 = vmaxss_avx(auVar262,auVar189);
          auVar189 = vcmpss_avx(auVar614,auVar323,1);
          auVar436 = ZEXT1664(auVar171);
          auVar527._8_4_ = 0xbf800000;
          auVar527._0_8_ = 0xbf800000bf800000;
          auVar527._12_4_ = 0xbf800000;
          auVar171 = vblendvps_avx(auVar527,auVar171,auVar189);
          auVar189 = vcmpss_avx(auVar614,auVar323,4);
          auVar171 = vandps_avx(auVar189,auVar171);
          auVar189 = vmaxss_avx(auVar614,ZEXT416((uint)(fVar308 - auVar181._0_4_)));
          auVar189 = vinsertps_avx(auVar189,auVar262,0x10);
          auVar383._0_4_ =
               auVar152._0_4_ * auVar152._0_4_ * 0.0225 + auVar189._0_4_ * auVar189._0_4_;
          auVar383._4_4_ =
               auVar152._4_4_ * auVar152._4_4_ * 0.0225 + auVar189._4_4_ * auVar189._4_4_;
          auVar383._8_4_ = auVar152._8_4_ * auVar152._8_4_ * 0.0 + auVar189._8_4_ * auVar189._8_4_;
          auVar383._12_4_ =
               auVar152._12_4_ * auVar152._12_4_ * 0.0 + auVar189._12_4_ * auVar189._12_4_;
          auVar152 = vmovshdup_avx(auVar383);
          auVar152 = vminss_avx(auVar383,auVar152);
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar152 = vminss_avx(ZEXT416((uint)(auVar171._0_4_ * auVar152._0_4_)),
                                ZEXT416((uint)(auVar205._0_4_ + -0.04)));
          fVar237 = (1.0 - fVar311) * -0.3;
          fVar533 = fVar144 - (fVar311 * 0.3 + fVar237);
          fVar237 = fVar314 + (fVar311 * 0.3 - fVar237);
          auVar171 = ZEXT416((uint)(fVar237 * fVar237 + fVar533 * fVar533 + 0.0));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar152 = vminss_avx(auVar152,ZEXT416((uint)(auVar171._0_4_ + -0.03)));
          auVar171 = ZEXT816(0);
          if ((uVar140 & 1) == 0) {
            auVar171 = auVar164;
          }
          fVar237 = auVar171._0_4_ * 0.3;
          fVar533 = 1.0 - auVar171._0_4_;
          fVar144 = fVar144 - (fVar237 + fVar533 * 0.3);
          fVar237 = fVar314 + fVar533 * 0.1 + fVar237;
          auVar164 = ZEXT416((uint)(fVar237 * fVar237 + fVar144 * fVar144 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vminss_avx(auVar152,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
          auVar152 = ZEXT416((uint)(fVar314 * fVar314 + fVar460 * fVar460 + 0.0));
          auVar152 = vsqrtss_avx(auVar152,auVar152);
          auVar382._8_4_ = 0x7fffffff;
          auVar382._0_8_ = 0x7fffffff7fffffff;
          auVar382._12_4_ = 0x7fffffff;
          auVar152 = vandps_avx(ZEXT416((uint)(auVar152._0_4_ + -0.1)),auVar382);
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(auVar152._0_4_ + -0.03)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar152._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("TRNS");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 0x20;
    materials_list[index].tier = 1;
    materials_list[index].drop_weight = 0.05;
    materials_list[index].base_cost = 5.0;
    materials_list[index].genome_size = 4.0;
    materials_list[index].directional_conductivity = 400.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3dced9173da9fbe7;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ef020c5;
    materials_list[index].connection_update_fn = cell_transistor_connections;
    materials_list[index].electric_update_fn = cell_transistor_electric;
    iVar50 = get_icon_coords(0x4c);
    rVar128._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar128._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar128;
  }
  iVar50 = get_icon_coords(0x4c);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar436 = ZEXT464(0x40800000);
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar152 = vmovsldup_avx(ZEXT416((uint)fVar146));
        index = 0;
        auVar587._8_4_ = 0x7fffffff;
        auVar587._0_8_ = 0x7fffffff7fffffff;
        auVar587._12_4_ = 0x7fffffff;
        do {
          fVar314 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar164 = vandps_avx(auVar587,ZEXT416((uint)fVar314));
          fVar237 = auVar164._0_4_ + -0.2;
          fVar533 = fVar237 + -0.35355338;
          auVar171 = vinsertps_avx(ZEXT416((uint)fVar314),ZEXT416((uint)fVar237),0x10);
          auVar478._0_12_ = ZEXT812(0);
          auVar478._12_4_ = 0;
          auVar539._0_4_ = auVar152._0_4_ * -0.5 + auVar171._0_4_ * 0.0 + 0.0;
          auVar539._4_4_ = auVar152._4_4_ * 0.28284273 + auVar171._4_4_ * 0.28284276 + 0.0;
          auVar539._8_4_ = auVar152._8_4_ * 0.0 + auVar171._8_4_ * 0.0 + 0.0;
          auVar539._12_4_ = auVar152._12_4_ * 0.0 + auVar171._12_4_ * 0.0 + 0.0;
          auVar588._0_4_ = auVar539._0_4_ * auVar436._0_4_;
          auVar588._4_4_ = auVar539._4_4_ * 0.0;
          auVar588._8_4_ = auVar539._8_4_ * auVar436._8_4_;
          auVar588._12_4_ = auVar539._12_4_ * auVar436._12_4_;
          auVar171 = vdivps_avx(auVar539,___xmm_00000000000000003e23d70c00000000);
          auVar171 = vblendps_avx(auVar588,auVar171,2);
          auVar384._8_4_ = 0x3f800000;
          auVar384._0_8_ = 0x3f8000003f800000;
          auVar384._12_4_ = 0x3f800000;
          auVar189 = vminps_avx(auVar384,auVar171);
          auVar171 = vcmpps_avx(auVar189,auVar478,1);
          auVar171 = vshufps_avx(auVar171,auVar171,0x50);
          uVar140 = vmovmskpd_avx(auVar171);
          fVar237 = 0.0;
          if ((uVar140 & 2) == 0) {
            auVar171 = vmovshdup_avx(auVar189);
            fVar237 = auVar171._0_4_;
          }
          fVar144 = auVar164._0_4_ - (fVar237 * 0.48284274 + (1.0 - fVar237) * 0.2);
          fVar237 = fVar146 - (fVar237 * 0.28284273 + (1.0 - fVar237) * 0.0);
          auVar164 = ZEXT416((uint)((fVar146 + -0.35355338) * (fVar146 + -0.35355338) +
                                   fVar533 * fVar533 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vandps_avx(ZEXT416((uint)(auVar164._0_4_ + -0.1)),
                                ___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar171 = ZEXT416((uint)(fVar237 * fVar237 + fVar144 * fVar144 + 0.0));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar171 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),
                                ZEXT416((uint)(auVar171._0_4_ + -0.03)));
          auVar164 = vminss_avx(auVar171,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
          auVar171 = ZEXT816(0) << 0x20;
          if ((uVar140 & 1) == 0) {
            auVar171 = auVar189;
          }
          fVar144 = auVar171._0_4_;
          fVar237 = (1.0 - fVar144) * 0.0;
          fVar533 = fVar314 - (fVar144 * 0.0 + fVar237);
          fVar237 = fVar146 - (fVar237 + fVar144 * -0.5);
          auVar171 = ZEXT416((uint)(fVar237 * fVar237 + fVar533 * fVar533 + 0.0));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar171 = vminss_avx(auVar164,ZEXT416((uint)(auVar171._0_4_ + -0.03)));
          auVar164 = ZEXT416((uint)((fVar146 + 0.6) * (fVar146 + 0.6) + fVar314 * fVar314 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar587._8_4_ = 0x7fffffff;
          auVar587._0_8_ = 0x7fffffff7fffffff;
          auVar587._12_4_ = 0x7fffffff;
          auVar164 = vandps_avx(auVar587,ZEXT416((uint)(auVar164._0_4_ + -0.1)));
          auVar171 = vminss_avx(auVar171,ZEXT416((uint)(auVar164._0_4_ + -0.03)));
          auVar164 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                                ZEXT416((uint)(auVar436._0_4_ *
                                              (fVar146 * 0.0 + (fVar314 + 0.25) * 0.5 + 0.0))));
          auVar164 = vmaxss_avx(ZEXT816(0),auVar164);
          fVar237 = auVar164._0_4_;
          fVar314 = fVar314 - (fVar237 * 0.25 - (1.0 - fVar237) * 0.25);
          fVar237 = fVar146 - ((1.0 - fVar237) * 0.0 + fVar237 * 0.0);
          auVar164 = ZEXT416((uint)(fVar237 * fVar237 + fVar314 * fVar314 + 0.0));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          auVar164 = vminss_avx(auVar171,ZEXT416((uint)(auVar164._0_4_ + -0.05)));
          auVar436 = ZEXT1664(auVar436._0_16_);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("ROOT");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 2;
    materials_list[index].drop_weight = 0.01;
    materials_list[index].base_cost = 20.0;
    materials_list[index].genome_size = 16.0;
    materials_list[index].max_health = 5.0;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 0x10;
    materials_list[index].restitution = 0.0;
    materials_list[index].hardness = materials_list[index].hardness * 3.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3dac08313e581062;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ced9168;
    materials_list[index].force_update_fn = cell_root;
    iVar50 = get_icon_coords(0x4d);
    rVar129._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar129._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar129;
  }
  iVar50 = get_icon_coords(0x4d);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    if ((int)uVar143 < (int)uVar45) {
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        iVar44 = (int)uVar81;
        fVar146 = ((float)iVar44 + 0.5) * 0.015625 + -1.0;
        uVar143 = 0;
        do {
          fVar237 = -1.0;
          fVar314 = ((float)uVar143 + 0.5) * 0.015625 + -1.0;
          auVar481 = ZEXT464(0x40000000);
          do {
            fVar311 = 1.0;
            fVar533 = fVar237 * 0.7853982;
            fVar308 = fVar533;
            sinf();
            cosf();
            fVar144 = (fVar237 + 6.0) * 65536.0;
            auVar385._0_4_ = (float)(1e+32 - (double)fVar144);
            auVar385._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar144) >> 0x20);
            auVar385._8_8_ = 0;
            auVar528._0_12_ = ZEXT812(0);
            auVar528._12_4_ = 0;
            auVar541 = ZEXT1664(auVar528);
            auVar152 = vcmpss_avx(ZEXT416((uint)fVar144),auVar528,1);
            auVar152 = vblendvps_avx(ZEXT416((uint)fVar144),auVar385,auVar152);
            uVar140 = (uint)(longlong)auVar152._0_4_;
            uVar134 = uVar140 + 0x2f88ed;
            fVar144 = 0.0;
            fVar460 = 0.7;
            fVar310 = 0.1;
            do {
              fVar542 = auVar541._0_4_;
              fVar312 = fVar542 * 65536.0;
              auVar307._0_4_ = (float)(1e+32 - (double)fVar312);
              auVar307._4_4_ = (int)((ulonglong)(1e+32 - (double)fVar312) >> 0x20);
              auVar307._8_8_ = 0;
              auVar164 = vcmpss_avx(ZEXT416((uint)fVar312),auVar436._0_16_,1);
              auVar164 = vblendvps_avx(ZEXT416((uint)fVar312),auVar307,auVar164);
              uVar46 = (uint)(longlong)auVar164._0_4_;
              fVar312 = (float)((((uint)((ulonglong)(longlong)auVar152._0_4_ >> 1) & 0x7fffffff ^
                                 uVar46) * 0x41c64e6d >> 3 ^ (uVar46 >> 1 ^ uVar140) * 0x41c64e6d) *
                               0x41c64e6d) * 2.3283064e-10 + -0.5 + fVar308 * 0.8;
              fVar313 = ((float)(((uVar46 + 0x2f88ed >> 1 ^ uVar134) * 0x41c64e6d >> 3 ^
                                 (uVar46 + 0x2f88ed ^ uVar134 >> 1) * 0x41c64e6d) * 0x41c64e6d) *
                         2.3283064e-10 + -0.5) - fVar533 * 0.8;
              fVar598 = auVar436._0_4_;
              auVar164 = ZEXT416((uint)(fVar313 * fVar313 + fVar598 + fVar312 * fVar312));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              fVar309 = fVar311 / auVar164._0_4_;
              fVar312 = fVar144 + fVar312 * fVar309 * 0.15;
              fVar313 = fVar313 * fVar309 * 0.15 + fVar460;
              fVar309 = fVar313 * fVar313 + fVar598 + fVar312 * fVar312;
              fVar589 = fVar310 + -0.010000001;
              if (fVar309 < 0.040000003) {
                auVar164 = vsqrtss_avx(ZEXT416((uint)fVar309),ZEXT416((uint)fVar309));
                fVar311 = fVar311 / auVar164._0_4_;
                fVar312 = fVar312 * fVar311 * 0.2;
                fVar313 = fVar313 * fVar311 * 0.2;
              }
              fVar543 = fVar312 - fVar144;
              fVar499 = fVar313 - fVar460;
              auVar164 = ZEXT416((uint)(fVar499 * fVar499 + fVar598 + fVar543 * fVar543));
              auVar164 = vsqrtss_avx(auVar164,auVar164);
              auVar436 = ZEXT1664(auVar164);
              fVar598 = fVar589 - fVar310;
              fVar309 = fVar598 * fVar598;
              auVar569 = ZEXT464((uint)fVar309);
              fVar145 = auVar164._0_4_;
              fVar311 = fVar145 * fVar145 - fVar309;
              fVar315 = fVar313;
              fVar147 = fVar312;
              if (fVar311 < 0.0) {
                fVar149 = sqrtf(fVar311);
                fVar309 = auVar569._0_4_;
                fVar145 = auVar436._0_4_;
                fVar542 = auVar541._0_4_;
              }
              else {
                auVar164 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
                fVar149 = auVar164._0_4_;
              }
              fVar543 = fVar543 * (1.0 / fVar145);
              fVar499 = fVar499 * (1.0 / fVar145);
              fVar311 = 1.0;
              fVar145 = (fVar314 - fVar144) * fVar543 + (fVar146 - fVar460) * fVar499;
              fVar543 = (fVar146 - fVar460) * fVar543 - (fVar314 - fVar144) * fVar499;
              auVar164 = vandps_avx(ZEXT416((uint)fVar543),___xmm_7fffffff7fffffff7fffffff7fffffff);
              auVar436 = ZEXT1264(ZEXT812(0));
              auVar171 = ZEXT416((uint)(fVar309 + fVar149 * fVar149 + 0.0));
              auVar171 = vsqrtss_avx(auVar171,auVar171);
              fVar144 = 1.0 / auVar171._0_4_;
              fVar460 = fVar149 * fVar144;
              fVar598 = fVar598 * fVar144;
              fVar144 = auVar164._0_4_ * fVar598 + fVar145 * fVar460 + 0.0;
              if (fVar144 <= 0.0) {
                auVar164 = ZEXT416((uint)(fVar543 * fVar543 + fVar145 * fVar145 + 0.0));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                auVar164 = ZEXT416((uint)(auVar164._0_4_ - fVar310));
              }
              else if (fVar149 <= fVar144) {
                auVar164 = ZEXT416((uint)((fVar146 - fVar315) * (fVar146 - fVar315) +
                                         (fVar314 - fVar147) * (fVar314 - fVar147) + 0.0));
                auVar164 = vsqrtss_avx(auVar164,auVar164);
                auVar164 = ZEXT416((uint)(auVar164._0_4_ - fVar589));
              }
              else {
                auVar164 = ZEXT416((uint)((auVar164._0_4_ * fVar460 + fVar145 * -fVar598 + 0.0) -
                                         fVar310));
              }
              auVar164 = vminss_avx(ZEXT416(auVar481._0_4_),auVar164);
              auVar481 = ZEXT1664(auVar164);
              auVar541 = ZEXT464((uint)(fVar542 + 0.1));
              fVar144 = fVar312;
              fVar460 = fVar313;
              fVar310 = fVar589;
            } while (fVar542 + 0.1 < 1.0);
            fVar237 = fVar237 + 0.25;
          } while (fVar237 <= 1.0);
          fVar237 = fVar314 * 0.0 + fVar146 + -0.7;
          fVar144 = (fVar146 + -0.7) * 0.0 - fVar314;
          auVar152 = vandps_avx(ZEXT416((uint)fVar144),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar533 = auVar152._0_4_ * 0.0 + fVar237 + 0.0;
          if (fVar533 <= 0.0) {
            fVar314 = fVar237 * fVar237;
            fVar144 = fVar144 * fVar144;
LAB_14013b71c:
            auVar152 = ZEXT416((uint)(fVar144 + fVar314 + 0.0));
            auVar152 = vsqrtss_avx(auVar152,auVar152);
            fVar314 = auVar152._0_4_;
          }
          else {
            if (0.3 <= fVar533) {
              fVar314 = fVar314 * fVar314;
              fVar144 = (fVar146 + -1.0) * (fVar146 + -1.0);
              goto LAB_14013b71c;
            }
            fVar314 = auVar152._0_4_ + fVar237 * -0.0 + 0.0;
          }
          auVar152 = vminss_avx(auVar164,ZEXT416((uint)(fVar314 + -0.15)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * (iVar44 + iVar50.field0_0x0._4_4_) +
           iVar50.field0_0x0._0_4_ + (int)uVar143] = auVar152._0_4_;
          uVar143 = uVar143 + 1;
        } while (uVar143 != 0x80);
        uVar81 = (ulonglong)(iVar44 + 1U);
      } while (iVar44 + 1U != uVar45);
      iVar44 = *piVar47;
    }
  }
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    uVar45 = str_to_id("PORT");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 2;
    materials_list[index].drop_weight = 0.0;
    materials_list[index].base_cost = 20.0;
    materials_list[index].genome_size = 0.0;
    materials_list[index].restitution = 0.0;
    materials_list[index].conductivity = 1.0;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x3ed916873f0353f8;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f8000003ecf1aa0;
    materials_list[index].physics_update_fn = cell_portal;
    iVar50 = get_icon_coords(0x4e);
    rVar130._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar130._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar130;
  }
  iVar50 = get_icon_coords(0x4e);
  iVar44 = *piVar47;
  if (render_icons == true) {
    uVar143 = (longlong)(iVar44 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (iVar44 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar133 = (int)uVar143;
    if (iVar133 < (int)uVar45) {
      iVar133 = iVar50.field0_0x0._4_4_ + iVar133;
      auVar433._0_12_ = ZEXT812(0);
      auVar433._12_4_ = 0;
      auVar497._8_4_ = 0xbf800000;
      auVar497._0_8_ = 0xbf800000bf800000;
      auVar497._12_4_ = 0xbf800000;
      auVar529._8_4_ = 0x3f800000;
      auVar529._0_8_ = 0x3f8000003f800000;
      auVar529._12_4_ = 0x3f800000;
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0;
        auVar152 = vandps_avx(ZEXT416((uint)fVar146),___xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar314 = auVar152._0_4_ + -0.3;
        index = 0;
        do {
          fVar237 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar386._8_4_ = 0x7fffffff;
          auVar386._0_8_ = 0x7fffffff7fffffff;
          auVar386._12_4_ = 0x7fffffff;
          auVar164 = vandps_avx(ZEXT416((uint)fVar237),auVar386);
          fVar533 = auVar164._0_4_ + -0.16;
          fVar144 = -(fVar146 + -0.6) + fVar533 * 0.0;
          fVar460 = fVar533 + (fVar146 + -0.6) * 0.0;
          auVar171 = vandps_avx(ZEXT416((uint)fVar460),auVar386);
          fVar310 = fVar144 + 0.0 + auVar171._0_4_ * 0.0;
          if (fVar310 <= 0.0) {
            fVar533 = fVar144 * fVar144;
LAB_14013bacf:
            auVar171 = ZEXT416((uint)(fVar460 * fVar460 + fVar533 + 0.0));
            auVar171 = vsqrtss_avx(auVar171,auVar171);
            fVar533 = auVar171._0_4_;
          }
          else {
            if (1.2 <= fVar310) {
              fVar533 = fVar533 * fVar533;
              fVar460 = fVar146 + 0.6;
              goto LAB_14013bacf;
            }
            fVar533 = auVar171._0_4_ + fVar144 * -0.0 + 0.0;
          }
          auVar171 = vcmpss_avx(auVar433,ZEXT416((uint)fVar237),1);
          auVar171 = vblendvps_avx(auVar497,auVar529,auVar171);
          auVar189 = vcmpss_avx(ZEXT416((uint)fVar237),auVar433,4);
          auVar171 = vandps_avx(auVar189,auVar171);
          fVar237 = fVar237 + auVar171._0_4_ * -0.16;
          fVar144 = fVar237 + -0.05;
          fVar460 = fVar144 + 0.25 + 0.17320509;
          fVar310 = fVar314;
          if (0.0 < fVar314 + fVar460 * 1.7320508) {
            fVar310 = fVar460 * -1.7320508;
            fVar460 = (fVar314 * -1.7320508 - fVar460) * 0.5;
            fVar310 = (fVar314 + fVar310) * 0.5;
          }
          auVar171 = vminss_avx(auVar433,ZEXT416((uint)fVar310));
          auVar171 = vmaxss_avx(SUB6416(ZEXT464(0xbf19999a),0),auVar171);
          fVar310 = fVar310 - auVar171._0_4_;
          auVar171 = ZEXT416((uint)(fVar460 * fVar460 + fVar310 * fVar310 + 0.0));
          auVar205 = vsqrtss_avx(auVar171,auVar171);
          auVar171 = vcmpss_avx(auVar433,ZEXT416((uint)fVar460),1);
          auVar171 = vblendvps_avx(auVar497,auVar529,auVar171);
          auVar189 = vcmpss_avx(ZEXT416((uint)fVar460),auVar433,4);
          auVar171 = vandps_avx(auVar189,auVar171);
          auVar171 = vminss_avx(ZEXT416((uint)(fVar144 * 2.5 * fVar144 + auVar152._0_4_ + -0.3)),
                                ZEXT416((uint)(auVar171._0_4_ * -auVar205._0_4_)));
          fVar237 = fVar237 + -0.2;
          auVar189 = ZEXT416((uint)((fVar146 + -0.05) * (fVar146 + -0.05) + fVar237 * fVar237 + 0.0)
                            );
          auVar189 = vsqrtss_avx(auVar189,auVar189);
          auVar171 = vmaxss_avx(auVar171,ZEXT416((uint)(0.04 - auVar189._0_4_)));
          auVar164 = vmaxss_avx(auVar171,ZEXT416((uint)(0.16 - auVar164._0_4_)));
          auVar164 = vminss_avx(ZEXT416((uint)(fVar533 + -0.05)),auVar164);
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar133 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar133 = iVar133 + 1;
      } while (uVar140 != uVar45);
      iVar44 = *piVar47;
    }
  }
  iVar133 = n_materials;
  materials_list = materials_list;
  if (iVar44 == 0) {
    index = (longlong)n_materials;
    n_materials = n_materials + 1;
    memcpy();
    cancer_material_index = iVar133;
    uVar45 = str_to_id("CRAB");
    materials_list[index].id = uVar45;
    materials_list[index].tags = 2;
    materials_list[index].tier = 2;
    materials_list[index].drop_weight = 0.0;
    materials_list[index].base_cost = 20.0;
    materials_list[index].genome_size = 0.0;
    materials_list[index].max_health = 100.0;
    materials_list[index].growth_rate = materials_list[index].growth_rate + materials_list[index].growth_rate;
    materials_list[index].regen = materials_list[index].regen * 100.0;
    materials_list[index].movement_force = materials_list[index].movement_force * 0.8;
    *(byte *)&materials_list[index].field14_0x4c = *(byte *)&materials_list[index].field14_0x4c | 0x40;
    materials_list[index].base_color.field0_0x0.xy.field0_0x0 = (real_2_u_0)0x0;
    *(undefined8 *)((longlong)&materials_list[index].base_color.field0_0x0._s_2.yz.field0_0x0 + 4) =
         0x3f80000000000000;
    materials_list[index].physics_update_fn = cell_cancer;
    iVar50 = get_icon_coords(0x4f);
    rVar131._s_0.y =
         ((float)iVar50.field0_0x0._4_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.y;
    rVar131._s_0.x =
         ((float)iVar50.field0_0x0._0_4_ + 64.0 + 0.5) / (float)icon_texture.size.field0_0x0._s_0.x;
    materials_list[index].uv.field0_0x0 = rVar131;
  }
  iVar50 = get_icon_coords(0x4f);
  if (render_icons == true) {
    uVar143 = (longlong)(*piVar47 * 0x80) / (longlong)*(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    uVar81 = uVar143 & 0xffffffff;
    uVar45 = (*piVar47 * 0x80 + 0x80) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
    iVar44 = (int)uVar143;
    if (iVar44 < (int)uVar45) {
      iVar44 = iVar50.field0_0x0._4_4_ + iVar44;
      auVar436 = ZEXT1264(ZEXT812(0));
      do {
        fVar146 = ((float)(int)uVar81 + 0.5) * 0.015625 + -1.0 + 0.25;
        auVar152 = vandps_avx(ZEXT416((uint)fVar146),___xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar314 = fVar146 + -0.1;
        fVar237 = fVar146 + -0.27;
        fVar533 = fVar146 + 0.1;
        fVar144 = fVar146 + 0.25;
        index = 0;
        do {
          fVar460 = ((float)(int)index + 0.5) * 0.015625 + -1.0;
          auVar164 = vandps_avx(ZEXT416((uint)fVar460),___xmm_7fffffff7fffffff7fffffff7fffffff);
          auVar481 = ZEXT1664(auVar164);
          fVar313 = auVar164._0_4_;
          fVar312 = 0.4;
          fVar310 = 0.3;
          fVar308 = 0.3;
          fVar311 = 0.4;
          auVar171 = auVar152;
          if (auVar152._0_4_ < fVar313) {
            fVar312 = 0.3;
            fVar310 = 0.4;
            fVar308 = 0.4;
            fVar311 = 0.3;
            auVar171 = auVar164;
            auVar164 = auVar152;
          }
          fVar309 = fVar310 * fVar310 - fVar312 * fVar312;
          auVar498 = ZEXT464((uint)fVar309);
          auVar189 = vinsertps_avx(auVar171,auVar164,0x10);
          auVar219._0_4_ = fVar308 * auVar189._0_4_;
          auVar219._4_4_ = fVar311 * auVar189._4_4_;
          auVar219._8_4_ = auVar189._8_4_ * 0.0;
          auVar219._12_4_ = auVar189._12_4_ * 0.0;
          auVar189 = vmovsldup_avx(ZEXT416((uint)fVar309));
          auVar189 = vdivps_avx(auVar219,auVar189);
          auVar205 = vmovshdup_avx(auVar189);
          auVar541 = ZEXT1664(auVar205);
          fVar589 = auVar189._0_4_;
          auVar434._0_4_ = fVar589 * fVar589;
          auVar434._4_4_ = auVar189._4_4_ * auVar189._4_4_;
          auVar434._8_4_ = auVar189._8_4_ * auVar189._8_4_;
          auVar434._12_4_ = auVar189._12_4_ * auVar189._12_4_;
          auVar189 = vmovshdup_avx(auVar434);
          auVar569 = ZEXT1664(auVar189);
          fVar543 = (auVar189._0_4_ + auVar434._0_4_ + -1.0) / 3.0;
          fVar542 = fVar543 * fVar543 * fVar543;
          fVar311 = auVar189._0_4_ * auVar434._0_4_;
          fVar308 = fVar311 + fVar542;
          fVar311 = fVar311 + fVar308;
          fVar598 = auVar205._0_4_;
          fVar309 = fVar598 + fVar598 * auVar434._0_4_;
          if (auVar436._0_4_ <= fVar308) {
            fVar589 = (fVar598 + fVar598) * fVar589;
            if (fVar308 < auVar436._0_4_) {
              fVar308 = sqrtf(fVar308);
            }
            else {
              auVar189 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
              fVar308 = auVar189._0_4_;
            }
            auVar596._8_4_ = 0x7fffffff;
            auVar596._0_8_ = 0x7fffffff7fffffff;
            auVar596._12_4_ = 0x7fffffff;
            auVar607 = ZEXT1664(auVar596);
            fVar589 = fVar589 * fVar308;
            auVar560 = ZEXT464((uint)(fVar311 + fVar589));
            auVar189 = vandps_avx(ZEXT416((uint)(fVar311 + fVar589)),auVar596);
            auVar481 = ZEXT1664(auVar189);
            powf();
            auVar532 = ZEXT1664(auVar481._0_16_);
            auVar498 = ZEXT464((uint)(fVar311 - fVar589));
            auVar189 = vandps_avx(auVar607._0_16_,ZEXT416((uint)(fVar311 - fVar589)));
            auVar481 = ZEXT1664(auVar189);
            powf();
            fVar311 = auVar541._0_4_;
            auVar189 = vinsertps_avx(auVar560._0_16_,auVar498._0_16_,0x10);
            auVar387._0_12_ = ZEXT812(0);
            auVar387._12_4_ = 0;
            auVar189 = vcmpps_avx(auVar189,auVar387,1);
            auVar205 = vinsertps_avx(auVar532._0_16_,auVar481._0_16_,0x10);
            auVar388._0_8_ = auVar205._0_8_ ^ 0x8000000080000000;
            auVar388._8_4_ = auVar205._8_4_ ^ 0x80000000;
            auVar388._12_4_ = auVar205._12_4_ ^ 0x80000000;
            auVar189 = vblendvps_avx(auVar205,auVar388,auVar189);
            auVar205 = vmovshdup_avx(auVar189);
            fVar308 = auVar569._0_4_ + auVar569._0_4_ +
                      (fVar543 * -4.0 - (auVar189._0_4_ + auVar205._0_4_));
            auVar189 = vinsertps_avx(ZEXT416((uint)(auVar189._0_4_ - auVar205._0_4_)),
                                     ZEXT416((uint)fVar309),0x10);
            auVar531._0_4_ = auVar189._0_4_ * 1.7320508;
            auVar531._4_4_ = auVar189._4_4_ * 2.0;
            auVar531._8_4_ = auVar189._8_4_ * 0.0;
            auVar531._12_4_ = auVar189._12_4_ * 0.0;
            auVar569 = ZEXT1664(auVar531);
            auVar189 = ZEXT416((uint)(fVar308 * fVar308 + auVar531._0_4_ * auVar531._0_4_));
            auVar189 = vsqrtss_avx(auVar189,auVar189);
            auVar481 = ZEXT1664(auVar189);
            fVar308 = auVar189._0_4_ - fVar308;
            if (fVar308 < auVar436._0_4_) {
              auVar236._0_4_ = sqrtf(fVar308);
              fVar311 = auVar541._0_4_;
              auVar531 = auVar569._0_16_;
              auVar189 = auVar481._0_16_;
              auVar236._4_60_ = extraout_var_31;
              auVar205 = auVar236._0_16_;
            }
            else {
              auVar205 = vsqrtss_avx(ZEXT416((uint)fVar308),ZEXT416((uint)fVar308));
            }
            auVar189 = vinsertps_avx(auVar205,auVar189,0x10);
            auVar189 = vdivps_avx(auVar531,auVar189);
            auVar205 = vmovshdup_avx(auVar189);
            fVar308 = auVar189._0_4_ + auVar205._0_4_;
            auVar479._8_4_ = 0x7fffffff;
            auVar479._0_8_ = 0x7fffffff7fffffff;
            auVar479._12_4_ = 0x7fffffff;
            fVar589 = fVar313;
          }
          else {
            dVar150 = acos((double)(fVar311 / fVar542));
            auVar220._0_8_ = dVar150 / 3.0;
            auVar220._8_8_ = extraout_var_41._0_8_;
            auVar530._0_4_ = (float)auVar220._0_8_;
            auVar530._4_12_ = auVar220._4_12_;
            auVar560 = ZEXT1664(auVar530);
            auVar532 = ZEXT1664(auVar530);
            cosf();
            fVar308 = auVar532._0_4_ + 2.0;
            auVar532 = ZEXT1664(auVar560._0_16_);
            sinf();
            fVar598 = auVar532._0_4_ * 1.7320508;
            fVar542 = auVar569._0_4_;
            fVar311 = fVar542 - fVar543 * (fVar308 + fVar598);
            if (fVar311 < auVar436._0_4_) {
              auVar235._0_4_ = sqrtf(fVar311);
              fVar542 = auVar569._0_4_;
              auVar235._4_60_ = extraout_var_30;
              auVar189 = auVar235._0_16_;
            }
            else {
              auVar189 = vsqrtss_avx(ZEXT416((uint)fVar311),ZEXT416((uint)fVar311));
            }
            fVar311 = auVar541._0_4_;
            fVar589 = auVar481._0_4_;
            auVar205 = auVar498._0_16_;
            auVar569 = ZEXT1664(auVar189);
            fVar499 = auVar189._0_4_;
            fVar542 = fVar542 + -fVar543 * (fVar308 - fVar598);
            if (fVar542 < auVar436._0_4_) {
              fVar308 = sqrtf(fVar542);
              fVar311 = auVar541._0_4_;
              fVar589 = auVar481._0_4_;
              fVar499 = auVar569._0_4_;
              auVar205 = auVar498._0_16_;
            }
            else {
              auVar189 = vsqrtss_avx(ZEXT416((uint)fVar542),ZEXT416((uint)fVar542));
              fVar308 = auVar189._0_4_;
            }
            auVar189 = vcmpss_avx(auVar436._0_16_,auVar205,1);
            auVar389._8_4_ = 0xbf800000;
            auVar389._0_8_ = 0xbf800000bf800000;
            auVar389._12_4_ = 0xbf800000;
            auVar189 = vblendvps_avx(auVar389,___xmm_3f8000003f8000003f8000003f800000,auVar189);
            auVar205 = vcmpss_avx(auVar205,auVar436._0_16_,4);
            auVar189 = vandps_avx(auVar205,auVar189);
            auVar479._8_4_ = 0x7fffffff;
            auVar479._0_8_ = 0x7fffffff7fffffff;
            auVar479._12_4_ = 0x7fffffff;
            auVar205 = vandps_avx(auVar479,ZEXT416((uint)fVar309));
            fVar308 = auVar189._0_4_ * fVar499 + fVar308 + auVar205._0_4_ / (fVar499 * fVar308);
          }
          fVar308 = (fVar308 - fVar311) * 0.5;
          auVar205 = auVar436._0_16_;
          auVar189 = vmaxss_avx(ZEXT416((uint)(1.0 - fVar308 * fVar308)),auVar205);
          auVar189 = vsqrtss_avx(auVar189,auVar189);
          fVar310 = fVar310 * auVar189._0_4_;
          local_1e8 = auVar164._0_4_;
          local_1e8 = fVar308 * fVar312 - local_1e8;
          fVar308 = fVar310 - auVar171._0_4_;
          fVar309 = auVar436._0_4_;
          auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar309 + local_1e8 * local_1e8));
          auVar189 = vsqrtss_avx(auVar164,auVar164);
          auVar390._0_8_ = auVar189._0_8_ ^ 0x8000000080000000;
          auVar390._8_4_ = auVar189._8_4_ ^ 0x80000000;
          auVar390._12_4_ = auVar189._12_4_ ^ 0x80000000;
          auVar164 = vcmpss_avx(auVar171,ZEXT416((uint)fVar310),1);
          auVar171 = vblendvps_avx(auVar189,auVar390,auVar164);
          fVar310 = fVar589 + -0.3;
          fVar308 = fVar310 * 0.84623283 + fVar314 * 0.5328133;
          fVar311 = fVar314 * 0.84623283 + fVar310 * -0.5328133;
          auVar164 = vandps_avx(ZEXT416((uint)fVar311),auVar479);
          fVar312 = auVar164._0_4_ * -0.07835489 + fVar309 + fVar308 * 0.9969255;
          if (fVar312 <= fVar309) {
            auVar164 = ZEXT416((uint)(fVar311 * fVar311 + fVar309 + fVar308 * fVar308));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar308 = auVar164._0_4_;
LAB_14013c364:
            fVar308 = fVar308 + -0.1;
          }
          else {
            if (fVar312 < 0.31808016) {
              fVar308 = auVar164._0_4_ * 0.9969255 + fVar309 + fVar308 * 0.07835489;
              goto LAB_14013c364;
            }
            auVar164 = ZEXT416((uint)(fVar237 * fVar237 +
                                     fVar309 + (fVar589 + -0.57) * (fVar589 + -0.57)));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar308 = auVar164._0_4_ + -0.075;
          }
          auVar480._8_4_ = 0x7fffffff;
          auVar480._0_8_ = 0x7fffffff7fffffff;
          auVar480._12_4_ = 0x7fffffff;
          auVar164 = vandps_avx(ZEXT416((uint)(auVar171._0_4_ - fVar308)),auVar480);
          auVar189 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar205);
          auVar171 = vminss_avx(auVar171,ZEXT416((uint)fVar308));
          fVar308 = (fVar589 + -0.57) * -0.08662954 + fVar237 * 0.99624056;
          fVar311 = fVar237 * -0.08662954 + (fVar589 + -0.57) * -0.99624056;
          auVar164 = vandps_avx(ZEXT416((uint)fVar311),auVar480);
          fVar312 = auVar164._0_4_ * -0.108287044 + fVar309 + fVar308 * 0.9941197;
          if (fVar312 <= fVar309) {
            auVar164 = ZEXT416((uint)(fVar311 * fVar311 + fVar309 + fVar308 * fVar308));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar308 = auVar164._0_4_;
LAB_14013c464:
            fVar308 = fVar308 + -0.075;
          }
          else {
            if (fVar312 < 0.22951032) {
              fVar308 = auVar164._0_4_ * 0.9941197 + fVar309 + fVar308 * 0.108287044;
              goto LAB_14013c464;
            }
            auVar164 = ZEXT416((uint)((fVar146 + -0.5) * (fVar146 + -0.5) +
                                     fVar309 + (fVar589 + -0.55) * (fVar589 + -0.55)));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            fVar308 = auVar164._0_4_ + -0.05;
          }
          auVar189 = vminss_avx(ZEXT416((uint)(auVar171._0_4_ +
                                              (auVar189._0_4_ * auVar189._0_4_ * -0.25) / 0.1)),
                                ZEXT416((uint)fVar308));
          fVar308 = fVar589 + -0.4;
          fVar311 = fVar309 + fVar308 * fVar308;
          auVar164 = ZEXT416((uint)((fVar146 + -0.55) * (fVar146 + -0.55) + fVar311));
          auVar164 = vsqrtss_avx(auVar164,auVar164);
          fVar312 = auVar164._0_4_ + -0.2;
          auVar540._8_4_ = 0x7fffffff;
          auVar540._0_8_ = 0x7fffffff7fffffff;
          auVar540._12_4_ = 0x7fffffff;
          auVar164 = vandps_avx(auVar540,ZEXT416((uint)(auVar189._0_4_ - fVar312)));
          auVar171 = vmaxss_avx(ZEXT416((uint)(0.1 - auVar164._0_4_)),auVar205);
          fVar542 = (fVar589 + -0.45) * -0.84905654 + (fVar146 + -0.52) * 0.5283019;
          fVar598 = (fVar146 + -0.52) * -0.84905654 + (fVar589 + -0.45) * -0.5283019;
          auVar164 = vandps_avx(auVar540,ZEXT416((uint)fVar598));
          fVar543 = auVar164._0_4_ * 0.37735847 + fVar542 * 0.92606723 + fVar309;
          if (fVar543 <= fVar309) {
            auVar164 = ZEXT416((uint)(fVar598 * fVar598 + fVar309 + fVar542 * fVar542));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
          }
          else if (0.49081567 <= fVar543) {
            auVar164 = ZEXT416((uint)((fVar146 + -0.8) * (fVar146 + -0.8) +
                                     fVar309 + fVar460 * fVar460));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar164 = ZEXT416((uint)(auVar164._0_4_ + -0.2));
          }
          else {
            auVar164 = ZEXT416((uint)(auVar164._0_4_ * 0.92606723 + fVar309 + fVar542 * -0.37735847)
                              );
          }
          fVar460 = fVar310 * 0.9486833 + fVar146 * 0.31622776;
          fVar542 = fVar146 * 0.9486833 + fVar310 * -0.31622776;
          auVar205 = vandps_avx(ZEXT416((uint)fVar542),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar598 = fVar309 * auVar205._0_4_ + fVar309 + fVar460;
          if (fVar598 <= fVar309) {
            fVar460 = fVar460 * fVar460;
            fVar542 = fVar542 * fVar542;
LAB_14013c65a:
            auVar205 = ZEXT416((uint)(fVar542 + fVar309 + fVar460));
            auVar205 = vsqrtss_avx(auVar205,auVar205);
            fVar460 = auVar205._0_4_;
          }
          else {
            if (0.31622776 <= fVar598) {
              fVar460 = (fVar589 + -0.6) * (fVar589 + -0.6);
              fVar542 = fVar314 * fVar314;
              goto LAB_14013c65a;
            }
            fVar460 = fVar309 + fVar460 * -0.0 + auVar205._0_4_;
          }
          fVar542 = (fVar589 + -0.6) * 0.4472135 + fVar314 * -0.8944273;
          fVar598 = fVar314 * 0.4472135 + (fVar589 + -0.6) * 0.8944273;
          auVar205 = vandps_avx(ZEXT416((uint)fVar598),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar543 = auVar205._0_4_ * -0.11180341 + fVar309 + fVar542 * 0.9937304;
          if (fVar543 <= fVar309) {
            auVar205 = ZEXT416((uint)(fVar598 * fVar598 + fVar309 + fVar542 * fVar542));
            auVar205 = vsqrtss_avx(auVar205,auVar205);
            auVar205 = ZEXT416((uint)(auVar205._0_4_ + -0.05));
          }
          else if (0.22220485 <= fVar543) {
            auVar205 = ZEXT416((uint)(fVar533 * fVar533 +
                                     fVar309 + (fVar589 + -0.7) * (fVar589 + -0.7)));
            auVar205 = vsqrtss_avx(auVar205,auVar205);
            auVar205 = ZEXT416((uint)(auVar205._0_4_ + -0.025));
          }
          else {
            auVar205 = ZEXT416((uint)(auVar205._0_4_ * 0.9937304 + fVar309 + fVar542 * 0.11180341 +
                                     -0.05));
          }
          fVar542 = fVar310 * 0.92847675 + fVar146 * -0.3713907;
          fVar310 = fVar146 * 0.92847675 + fVar310 * 0.3713907;
          auVar181 = vandps_avx(ZEXT416((uint)fVar310),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar598 = fVar309 * auVar181._0_4_ + fVar542 + fVar309;
          if (fVar598 <= fVar309) {
            fVar542 = fVar542 * fVar542;
            fVar310 = fVar310 * fVar310;
LAB_14013c7ca:
            auVar181 = ZEXT416((uint)(fVar310 + fVar309 + fVar542));
            auVar181 = vsqrtss_avx(auVar181,auVar181);
            fVar310 = auVar181._0_4_;
          }
          else {
            if (0.26925823 <= fVar598) {
              fVar542 = (fVar589 + -0.55) * (fVar589 + -0.55);
              fVar310 = fVar533 * fVar533;
              goto LAB_14013c7ca;
            }
            fVar310 = fVar542 * -0.0 + fVar309 + auVar181._0_4_;
          }
          fVar589 = fVar589 + -0.55;
          fVar542 = fVar589 * fVar309 + -fVar533;
          fVar598 = fVar309 * fVar533 + fVar589;
          auVar181 = vandps_avx(ZEXT416((uint)fVar598),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar543 = fVar542 * 0.9921567 + fVar309 + auVar181._0_4_ * -0.12499998;
          if (fVar543 <= fVar309) {
            auVar181 = ZEXT416((uint)(fVar598 * fVar598 + fVar309 + fVar542 * fVar542));
            auVar181 = vsqrtss_avx(auVar181,auVar181);
            auVar181 = ZEXT416((uint)(auVar181._0_4_ + -0.05));
          }
          else if (0.19843137 <= fVar543) {
            auVar181 = ZEXT416((uint)((fVar146 + 0.3) * (fVar146 + 0.3) +
                                     fVar309 + fVar589 * fVar589));
            auVar181 = vsqrtss_avx(auVar181,auVar181);
            auVar181 = ZEXT416((uint)(auVar181._0_4_ + -0.025));
          }
          else {
            auVar181 = ZEXT416((uint)(auVar181._0_4_ * 0.9921567 + fVar309 + fVar542 * 0.12499998 +
                                     -0.05));
          }
          auVar323 = vminss_avx(auVar189,ZEXT416((uint)fVar312));
          fVar312 = fVar313 + -0.2;
          fVar589 = fVar312 * 0.8 + fVar533 * -0.6;
          fVar542 = fVar533 * 0.8 + fVar312 * 0.6;
          auVar189 = vandps_avx(ZEXT416((uint)fVar542),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar598 = auVar189._0_4_ * fVar309 + fVar589 + fVar309;
          if (fVar598 <= fVar309) {
            fVar311 = fVar309 + fVar589 * fVar589;
            fVar542 = fVar542 * fVar542;
LAB_14013c94d:
            auVar189 = vsqrtss_avx(ZEXT416((uint)(fVar542 + fVar311)),
                                   ZEXT416((uint)(fVar542 + fVar311)));
            fVar311 = auVar189._0_4_;
          }
          else {
            if (0.25 <= fVar598) {
              fVar542 = fVar144 * fVar144;
              goto LAB_14013c94d;
            }
            fVar311 = auVar189._0_4_ + fVar309 + fVar589 * -0.0;
          }
          fVar589 = fVar308 * -0.31622782 + fVar144 * -0.94868326;
          fVar308 = fVar144 * -0.31622782 + fVar308 * 0.94868326;
          auVar189 = vandps_avx(ZEXT416((uint)fVar308),___xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar542 = auVar189._0_4_ * -0.15811388 + fVar309 + fVar589 * 0.9874209;
          uStack_220 = auVar164._8_4_;
          uStack_21c = auVar164._12_4_;
          auVar435._0_8_ = auVar164._0_8_ ^ 0x8000000080000000;
          auVar435._8_4_ = uStack_220 ^ 0x80000000;
          auVar435._12_4_ = uStack_21c ^ 0x80000000;
          if (fVar542 <= fVar309) {
            auVar164 = ZEXT416((uint)(fVar308 * fVar308 + fVar309 + fVar589 * fVar589));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar164 = ZEXT416((uint)(auVar164._0_4_ + -0.05));
          }
          else if (0.15612496 <= fVar542) {
            auVar164 = ZEXT416((uint)((fVar146 + 0.4) * (fVar146 + 0.4) +
                                     fVar309 + (fVar313 + -0.35) * (fVar313 + -0.35)));
            auVar164 = vsqrtss_avx(auVar164,auVar164);
            auVar164 = ZEXT416((uint)(auVar164._0_4_ + -0.025));
          }
          else {
            auVar164 = ZEXT416((uint)(auVar189._0_4_ * 0.9874209 + fVar309 + fVar589 * 0.15811388 +
                                     -0.05));
          }
          auVar171 = vmaxss_avx(ZEXT416((uint)((auVar171._0_4_ * auVar171._0_4_ * -0.25) / 0.1 +
                                              auVar323._0_4_)),auVar435);
          auVar171 = vminss_avx(auVar171,ZEXT416((uint)(fVar460 + -0.05)));
          auVar171 = vminss_avx(auVar171,auVar205);
          auVar171 = vminss_avx(auVar171,ZEXT416((uint)(fVar310 + -0.05)));
          auVar171 = vminss_avx(auVar171,auVar181);
          auVar171 = vminss_avx(auVar171,ZEXT416((uint)(fVar311 + -0.05)));
          auVar164 = vminss_avx(auVar171,auVar164);
          auVar171 = ZEXT416((uint)((fVar146 + -0.15) * (fVar146 + -0.15) +
                                   fVar309 + fVar312 * fVar312));
          auVar171 = vsqrtss_avx(auVar171,auVar171);
          auVar164 = vmaxss_avx(auVar164,ZEXT416((uint)(0.07 - auVar171._0_4_)));
          icon_atlas
          [icon_texture.size.field0_0x0._s_0.x * iVar44 + iVar50.field0_0x0._0_4_ + (int)index] =
               auVar164._0_4_;
          index = index + 1;
        } while (index != 0x80);
        uVar140 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar140;
        iVar44 = iVar44 + 1;
      } while (uVar140 != uVar45);
    }
  }
  pvVar48 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar48 + 8) + 0x18,0);
  iVar44 = *piVar47;
  iVar136 = (n_materials * iVar44) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
  iVar133 = ((iVar44 + 1) * n_materials) / *(int *)(*(longlong *)(piVar47 + 2) + 0x10);
  if (iVar136 < iVar133) {
    index = (longlong)iVar136;
    fVar314 = 4.0;
    fVar144 = 4.0;
    fVar237 = 4.0;
    fVar533 = 4.0;
    fVar460 = 4.0;
    fVar310 = 16.0;
    fVar308 = 0.25;
    fVar311 = 1.0;
    fVar146 = 20.0;
    do {
      materials_list = materials_list;
      materials_list[index].growth_rate = fVar314 * materials_list[index].growth_rate;
      materials_list[index].regen = fVar314 * materials_list[index].regen;
      uVar18 = materials_list[index].drag;
      uVar36 = materials_list[index].tangent_drag;
      auVar221._0_4_ = fVar237 * (float)uVar18;
      auVar221._4_4_ = fVar533 * (float)uVar36;
      auVar221._8_4_ = fVar144 * 0.0;
      auVar221._12_4_ = fVar460 * 0.0;
      uVar19 = vmovlps_avx(auVar221);
      materials_list[index].drag = (float)(int)uVar19;
      materials_list[index].tangent_drag = (float)(int)((ulonglong)uVar19 >> 0x20);
      materials_list[index].movement_force = fVar310 * materials_list[index].movement_force;
      materials_list[index].sharpness = fVar308 * materials_list[index].sharpness;
      materials_list[index].inv_capacitance = fVar311 / materials_list[index].capacitance;
      materials_list[index].inv_heat_capacity = fVar311 / materials_list[index].heat_capacity;
      fVar312 = fVar146;
      powf();
      materials_list[index].random_cost = fVar308 * fVar146;
      sprintf(&local_f7,"cell_%.4s_name");
      uVar45 = w.translations.max_entries;
      ppcVar41 = w.translations.keys;
      uVar140 = 0x1505;
      if (local_f7 != '\0') {
        pcVar135 = local_f6;
        cVar37 = local_f7;
        do {
          uVar140 = uVar140 + ((int)cVar37 ^ uVar140 * 0x21);
          cVar37 = *pcVar135;
          pcVar135 = pcVar135 + 1;
        } while (cVar37 != '\0');
      }
      uVar143 = (ulonglong)w.translations.max_entries;
      uVar81 = (ulonglong)uVar140 % uVar143;
      do {
        lVar139 = (longlong)(int)uVar81;
        if (ppcVar41[lVar139] == (char *)0x0) goto LAB_14013cc94;
        strcmp();
        if (extraout_EAX == 0) {
          ptVar132 = w.translations.values + lVar139;
          fVar146 = fVar312;
          goto LAB_14013ccc7;
        }
        uVar134 = (int)uVar81 + 1;
        uVar81 = (ulonglong)uVar134;
        if (uVar134 == uVar45) {
          uVar81 = 0;
        }
        iVar44 = (int)((ulonglong)uVar140 % uVar143);
      } while ((int)uVar81 != iVar44);
      lVar139 = (longlong)iVar44;
LAB_14013cc94:
      ptVar132 = w.translations.values + lVar139;
      fVar146 = fVar312;
LAB_14013ccc7:
      pcVar135 = unknown_string;
      if ((ptVar132->text != (char **)0x0) &&
         (pcVar135 = ptVar132->text[w.language_index], pcVar135 == (char *)0x0)) {
        pcVar135 = unknown_string;
      }
      materials_list[index].name = pcVar135;
      index = index + 1;
    } while (iVar133 != (int)index);
    iVar44 = *piVar47;
  }
  if (iVar44 == 0) {
    next_icon_index = 0x50;
  }
  pvVar48 = TlsGetValue(tls_index);
  EnterSynchronizationBarrier(*(longlong *)((longlong)pvVar48 + 8) + 0x18,0);
  return;
}

