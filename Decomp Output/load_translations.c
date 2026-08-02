
void __cdecl load_translations(char *param_1)

{
  bool bVar1;
  int extraout_EAX;
  int iVar2;
  int iVar3;
  int extraout_EAX_00;
  _iobuf *p_Var4;
  uchar *puVar5;
  char **ppcVar6;
  uchar *puVar7;
  longlong lVar8;
  LPVOID pvVar9;
  printer pVar10;
  uchar *puVar11;
  uchar *puVar12;
  int iVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 local_188 [16];
  uint local_178;
  undefined4 uStack_174;
  undefined1 local_170 [24];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  
  iVar13 = 0;
  memset();
  p_Var4 = fopen(param_1,"r");
  if (p_Var4 == (_iobuf *)0x0) {
    iVar13 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 8);
    if (0 < iVar13) {
      do {
        log_printf("%s");
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    log_printf("%s");
    log_printf("%s");
    log_printf("%s");
    log_printf("%s");
    fflush(logfile);
    p_Var4 = __acrt_iob_func(1);
    fflush(p_Var4);
    pvVar9 = TlsGetValue(tls_index);
    if (pvVar9 != (LPVOID)0x0) {
      *(undefined8 *)((longlong)pvVar9 + 0x88) = *(undefined8 *)((longlong)pvVar9 + 0x78);
    }
  }
  else {
    w.n_languages = 0x400;
    TlsGetValue(tls_index);
    puVar5 = stalloc(0x10000);
    memset();
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    local_78 = ZEXT1632(auVar15);
    local_f8 = ZEXT1632(auVar15);
    local_138 = ZEXT1632(auVar15);
    local_158 = ZEXT1232(CONCAT75(auVar15._5_7_,0x305f706974));
    w.n_tips = 0;
    auVar16 = ZEXT1264(ZEXT812(0));
    ppcVar6 = (char **)0x0;
    bVar1 = false;
    puVar12 = (uchar *)0x0;
    local_118 = local_138;
    local_d8 = local_f8;
    local_b8 = local_f8;
    local_98 = local_f8;
    do {
      auVar15 = auVar16._0_16_;
      if (ppcVar6 == (char **)0x0) {
        auVar16 = ZEXT1664(auVar15);
        ppcVar6 = (char **)dynamic_alloc_clear((longlong)w.n_languages << 3);
        auVar15 = auVar16._0_16_;
      }
      auVar16 = ZEXT1664(auVar15);
      iVar2 = fscanf(p_Var4,"%[^\t\n]");
      iVar3 = getc(p_Var4);
      bVar14 = iVar3 == 10;
      puVar11 = puVar12;
      if (iVar3 + 1U < 2) {
        bVar14 = true;
      }
      else if (iVar2 != 0) {
        strlen();
        if (0xfffe < extraout_EAX_00) {
          pVar10 = operator_(*(printer *)
                              (*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              4),"error: ");
          pVar10 = operator_(pVar10,"assert(");
          pVar10 = operator_(pVar10,"length < max_length-1");
          pVar10 = operator_(pVar10,") in ");
          pVar10 = operator_(pVar10,"code/translations.h");
          pVar10 = operator_(pVar10," (");
          pVar10 = operator_(pVar10,0xb8);
          pVar10 = operator_(pVar10,"): ");
          operator_(pVar10,"\n");
          log_alert();
                    /* WARNING: Subroutine does not return */
          log_flush();
        }
        puVar7 = dynamic_alloc((longlong)(extraout_EAX_00 + 1));
        memcpy();
        puVar7[extraout_EAX_00] = '\0';
        puVar11 = puVar7;
        if ((puVar12 != (uchar *)0x0) && (puVar11 = puVar12, iVar13 < w.n_languages)) {
          lVar8 = (longlong)iVar13;
          iVar13 = iVar13 + 1;
          ppcVar6[lVar8] = (char *)puVar7;
        }
      }
      if ((bVar14) && (puVar11 != (uchar *)0x0)) {
        if (!bVar1) {
          w.n_languages = iVar13;
        }
        strncmp();
        if (extraout_EAX == 0) {
          w.n_tips = w.n_tips + 1;
          snprintf(local_158,0x100,"tip_%d");
        }
        local_170._8_16_ = auVar16._0_16_;
        local_178 = w.translations.max_entries;
        uStack_174 = w.translations._20_4_;
        local_188._0_8_ = w.translations.keys;
        local_188._8_8_ = w.translations.values;
        local_170._0_8_ = ppcVar6;
        add_entry((translation_map *)local_188,(char *)puVar11,(translation_list *)local_170);
        bVar1 = true;
        iVar13 = 0;
        puVar11 = (uchar *)0x0;
        ppcVar6 = (char **)0x0;
      }
      puVar12 = puVar11;
    } while (1 < iVar3 + 1U);
    stunalloc(puVar5);
    fclose(p_Var4);
  }
  return;
}

