
uint __cdecl add_entry(translation_map *param_1,char *param_2,translation_list *param_3)

{
  char cVar1;
  uint uVar2;
  char **ppcVar3;
  translation_list *ptVar4;
  ulonglong uVar5;
  uint uVar6;
  int extraout_EAX;
  printer pVar7;
  _iobuf *p_Var8;
  LPVOID pvVar9;
  char *pcVar10;
  ulonglong uVar11;
  int iVar12;
  translation_list local_58;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    uVar6 = 0x1505;
  }
  else {
    uVar6 = 0x1505;
    pcVar10 = param_2;
    do {
      pcVar10 = pcVar10 + 1;
      uVar6 = uVar6 + ((int)cVar1 ^ uVar6 * 0x21);
      cVar1 = *pcVar10;
    } while (cVar1 != '\0');
  }
  uVar2 = param_1->max_entries;
  uVar5 = (ulonglong)uVar6 % (ulonglong)uVar2;
  ppcVar3 = param_1->keys;
  uVar11 = uVar5;
  while( true ) {
    uVar6 = (uint)uVar11;
    if (ppcVar3[(int)uVar6] == (char *)0x0) {
      ppcVar3[(int)uVar6] = param_2;
      goto LAB_140038fa5;
    }
    strcmp();
    if (extraout_EAX == 0) break;
    uVar11 = (ulonglong)(uVar6 + 1);
    if (uVar6 + 1 == uVar2) {
      uVar11 = 0;
    }
    if ((int)uVar11 == (int)uVar5) {
      pVar7 = operator_(*(printer *)
                         (*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4),
                        "error: ");
      pVar7 = operator_(pVar7,"non-expandable hashmap is full, cannot add entry: (");
      pVar7 = operator_(pVar7,param_2);
      pVar7 = operator_(pVar7,", ");
      local_58.text = param_3->text;
      local_58.formatted = param_3->formatted;
      local_58.max_formatted = param_3->max_formatted;
      pVar7 = operator_(pVar7,&local_58);
      pVar7 = operator_(pVar7,")");
      operator_(pVar7,"\n");
      log_alert();
                    /* WARNING: Subroutine does not return */
      log_flush();
    }
  }
  iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   8);
  if (0 < iVar12) {
    do {
      log_printf("%s");
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  log_printf("%s");
  log_printf("%s");
  log_printf("%s");
  log_printf("%s");
  log_printf("%s");
  log_printf("%s");
  log_printf("%s");
  fflush(logfile);
  p_Var8 = __acrt_iob_func(1);
  fflush(p_Var8);
  pvVar9 = TlsGetValue(tls_index);
  if (pvVar9 != (LPVOID)0x0) {
    *(undefined8 *)((longlong)pvVar9 + 0x88) = *(undefined8 *)((longlong)pvVar9 + 0x78);
  }
LAB_140038fa5:
  ptVar4 = param_1->values;
  ptVar4[(int)uVar6].max_formatted = param_3->max_formatted;
  pcVar10 = param_3->formatted;
  ptVar4 = ptVar4 + (int)uVar6;
  ptVar4->text = param_3->text;
  ptVar4->formatted = pcVar10;
  return uVar6;
}

