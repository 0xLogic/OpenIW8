/*
==============
CG_Event_Debug_AddOverBudgetCount
==============
*/

void __fastcall CG_Event_Debug_AddOverBudgetCount(LocalClientNum_t localClientNum, const CgPlayerEventInventoryType inventoryType)
{
  ?CG_Event_Debug_AddOverBudgetCount@@YAXW4LocalClientNum_t@@W4CgPlayerEventInventoryType@@@Z(localClientNum, inventoryType);
}

/*
==============
CG_Event_Debug_Draw
==============
*/

void __fastcall CG_Event_Debug_Draw(const ScreenPlacement *scrPlace)
{
  ?CG_Event_Debug_Draw@@YAXPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
CG_Event_Debug_AddCount
==============
*/

void __fastcall CG_Event_Debug_AddCount(LocalClientNum_t localClientNum, const CgEventLodEventType eventId, const bool performed)
{
  ?CG_Event_Debug_AddCount@@YAXW4LocalClientNum_t@@W4CgEventLodEventType@@_N@Z(localClientNum, eventId, performed);
}

/*
==============
CG_Event_Debug_FlipFrame
==============
*/

void __fastcall CG_Event_Debug_FlipFrame(LocalClientNum_t localClientNum)
{
  ?CG_Event_Debug_FlipFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Event_Debug_Init
==============
*/

void __fastcall CG_Event_Debug_Init(LocalClientNum_t localClientNum)
{
  ?CG_Event_Debug_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Event_Debug_AddCount
==============
*/
void CG_Event_Debug_AddCount(LocalClientNum_t localClientNum, const CgEventLodEventType eventId, const bool performed)
{
  unsigned __int64 v5; 

  if ( !g_disableCgEventLogging && localClientNum == LOCAL_CLIENT_0 )
  {
    if ( (unsigned __int8)eventId >= CG_EVENT_LOD_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event_debug.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( eventId ) < (unsigned)( CG_EVENT_LOD_TYPE_COUNT )", "eventId doesn't index CG_EVENT_LOD_TYPE_COUNT\n\t%i not in [0, %i)", (unsigned __int8)eventId, 9) )
      __debugbreak();
    v5 = (unsigned __int64)(unsigned __int8)eventId << 7;
    Sys_InterlockedIncrement((volatile int *)&s_CgEventDebugData + v5 + s_CgEventDebugData.currentIndex);
    if ( performed )
      Sys_InterlockedIncrement(&s_CgEventDebugData.performedEventCount[0][v5 + s_CgEventDebugData.currentIndex]);
  }
}

/*
==============
CG_Event_Debug_AddOverBudgetCount
==============
*/
void CG_Event_Debug_AddOverBudgetCount(LocalClientNum_t localClientNum, const CgPlayerEventInventoryType inventoryType)
{
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    if ( (unsigned __int8)inventoryType >= CG_PLAYER_EVENT_INVENTORY_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event_debug.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( inventoryType ) < (unsigned)( CG_PLAYER_EVENT_INVENTORY_TYPE_COUNT )", "inventoryType doesn't index CG_PLAYER_EVENT_INVENTORY_TYPE_COUNT\n\t%i not in [0, %i)", (unsigned __int8)inventoryType, 6) )
      __debugbreak();
    ++s_CgEventDebugData.skippedEventCount[(unsigned __int64)(unsigned __int8)inventoryType][s_CgEventDebugData.currentIndex];
  }
}

/*
==============
CG_Event_Debug_Draw
==============
*/
void CG_Event_Debug_Draw(const ScreenPlacement *scrPlace)
{
  char currentIndex; 
  const dvar_t *v12; 
  unsigned __int16 v13; 
  int integer; 
  __int64 v23; 
  const char *v24; 
  unsigned __int64 v27; 
  const char *v28; 
  const char *v31; 
  __int64 v34; 
  __int64 v35; 
  char *v38; 
  const dvar_t *v58; 
  unsigned int v59; 
  bool v60; 
  bool v61; 
  __int64 v65; 
  int *v66; 
  const vec4_t *color; 
  __int64 v68; 
  unsigned int *v71; 
  int (*skippedEventCount)[128]; 
  const char **v73; 
  const vec4_t *v74; 
  char v75; 
  const char *v76; 
  __int64 v81; 
  __int64 v94; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  int forceColor; 
  int forceColora; 
  int forceColorb; 
  int shadow; 
  int shadowa; 
  int shadowb; 
  float data; 
  float dataa; 
  float datab; 
  float datac; 
  float datad; 
  char v133; 
  void *retaddr; 
  unsigned __int16 v135; 

  _RAX = &retaddr;
  currentIndex = s_CgEventDebugData.currentIndex;
  v12 = DVARINT_cg_event_debugAnalytics_Type;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v13 = (currentIndex - 1) & 0x7F;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps [rsp+128h+var_B8], xmm13
  }
  v135 = v13;
  __asm
  {
    vmovss  xmm8, cs:__real@41000000
    vmovaps xmm6, xmm8
  }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_debugAnalytics_Type") )
    __debugbreak();
  __asm { vmovaps [rsp+128h+var_58], xmm7 }
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  __asm
  {
    vmovss  xmm10, cs:__real@41a00000
    vmovss  xmm9, cs:__real@40a00000
    vmovss  xmm12, cs:__real@42c80000
    vmovss  xmm13, cs:__real@44000000
    vxorps  xmm11, xmm11, xmm11
  }
  if ( (unsigned __int8)integer < 9u )
  {
    v23 = (unsigned __int8)integer;
    v24 = j_va("CgEventLod: %s", g_cgEventDebugTypeNames[(unsigned __int8)integer]);
    __asm
    {
      vmovss  dword ptr [rsp+128h+data], xmm8
      vmovaps xmm2, xmm8; y
      vmovaps xmm1, xmm8; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v24, &colorWhite, 0, 1, data, 0);
    v27 = v13 + ((unsigned __int64)(unsigned int)v23 << 7);
    v28 = j_va("Total Events: %i", (unsigned int)s_CgEventDebugData.totalEventCount[0][v27]);
    __asm
    {
      vmovss  xmm2, cs:__real@41800000; y
      vmovss  dword ptr [rsp+128h+data], xmm8
      vmovaps xmm1, xmm10; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v28, &colorBlue, 0, 1, dataa, 0);
    v31 = j_va("Performed Events: %i", (unsigned int)s_CgEventDebugData.performedEventCount[0][v27]);
    __asm
    {
      vmovss  xmm2, cs:__real@41c00000; y
      vmovss  dword ptr [rsp+128h+data], xmm8
      vmovaps xmm1, xmm10; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v31, &colorRed, 0, 1, datab, 0);
    v34 = v23 << 9;
    v35 = 16i64;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v38 = (char *)&s_CgEventDebugData + v34;
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v38 += 32;
      --v35;
    }
    while ( v35 );
    __asm
    {
      vmovss  xmm7, cs:__real@42280000
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
      vmovd   eax, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmaxss  xmm6, xmm1, xmm9
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm11
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+128h+fmt], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, *(float *)&forceColor, *(float *)&shadow, (int *)((char *)&s_CgEventDebugData + v34), 0x80u, v13, &colorBlue);
    __asm
    {
      vmovss  [rsp+128h+shadow], xmm6
      vmovss  [rsp+128h+forceColor], xmm11
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+128h+fmt], xmm12
    }
    CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, *(float *)&forceColora, *(float *)&shadowa, (int *)((char *)s_CgEventDebugData.performedEventCount[0] + v34), 0x80u, v13, &colorRed);
    __asm
    {
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+128h+fmt], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, &colorWhite);
    __asm { vmovss  xmm6, cs:__real@43180000 }
  }
  v58 = DVARBOOL_cg_event_debugAnalytics_overBudgetSkipped;
  if ( !DVARBOOL_cg_event_debugAnalytics_overBudgetSkipped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_debugAnalytics_overBudgetSkipped") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled )
  {
    __asm { vmovaps [rsp+128h+var_C8], xmm14 }
    v59 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64);
    v60 = dword_148C4F604 < v59;
    v61 = dword_148C4F604 == v59;
    if ( dword_148C4F604 > (int)v59 )
    {
      j__Init_thread_header(&dword_148C4F604);
      v60 = dword_148C4F604 != -1;
      v61 = dword_148C4F604 == -1;
      if ( dword_148C4F604 == -1 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
          vmovups xmm1, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
          vmovups xmmword ptr cs:debugColors, xmm0
          vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
          vmovups xmmword ptr cs:debugColors+10h, xmm1
          vmovups xmm1, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
          vmovups xmmword ptr cs:debugColors+20h, xmm0
          vmovups xmm0, xmmword ptr cs:?colorPurple@@3Tvec4_t@@B; vec4_t const colorPurple
          vmovups xmmword ptr cs:debugColors+30h, xmm1
          vmovups xmm1, xmmword ptr cs:?colorPink@@3Tvec4_t@@B; vec4_t const colorPink
          vmovups xmmword ptr cs:debugColors+40h, xmm0
          vmovups xmmword ptr cs:debugColors+50h, xmm1
        }
        j__Init_thread_footer(&dword_148C4F604);
      }
    }
    __asm
    {
      vcomiss xmm6, xmm11
      vmovss  xmm7, cs:__real@44870000
    }
    if ( !v60 && !v61 )
    {
      __asm { vcomiss xmm6, xmm7 }
      if ( v60 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+128h+data], xmm8
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm8; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "CgEventLod skipped overbudget events", &colorWhite, 0, 1, datac, 0);
      }
    }
    v65 = v13;
    v66 = s_CgEventDebugData.skippedEventCount[0];
    color = debugColors;
    v68 = 6i64;
    __asm
    {
      vaddss  xmm6, xmm6, xmm8
      vpxor   xmm14, xmm14, xmm14
    }
    v71 = (unsigned int *)s_CgEventDebugData.skippedEventCount + v65;
    skippedEventCount = s_CgEventDebugData.skippedEventCount;
    v73 = g_cgEventInventoryDebugTypeNames;
    v74 = debugColors;
    do
    {
      v76 = j_va("%s : %i", *v73, *v71);
      __asm { vcomiss xmm6, xmm11 }
      if ( !(v75 | v61) )
      {
        __asm { vcomiss xmm6, xmm7 }
        if ( v75 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+128h+data], xmm8
            vmovaps xmm2, xmm6; y
            vmovaps xmm1, xmm10; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v76, v74, 0, 1, datad, 0);
        }
      }
      __asm
      {
        vmovdqu xmm1, xmm14
        vmovdqu xmm2, xmm1
        vaddss  xmm6, xmm6, xmm8
      }
      v81 = 16i64;
      do
      {
        __asm
        {
          vpmaxsd xmm1, xmm1, xmmword ptr [rbx]
          vpmaxsd xmm2, xmm2, xmmword ptr [rbx+10h]
        }
        skippedEventCount = (int (*)[128])((char *)skippedEventCount + 32);
        --v81;
      }
      while ( v81 );
      __asm
      {
        vpmaxsd xmm1, xmm1, xmm2
        vpsrldq xmm0, xmm1, 8
        vpmaxsd xmm2, xmm1, xmm0
        vpsrldq xmm0, xmm2, 4
        vpmaxsd xmm0, xmm2, xmm0
        vmovd   eax, xmm0
        vxorps  xmm1, xmm1, xmm1
      }
      v71 += 128;
      ++v73;
      ++v74;
      __asm
      {
        vcvtsi2ss xmm1, xmm1, eax
        vmaxss  xmm9, xmm1, xmm9
      }
      --v68;
    }
    while ( v68 );
    __asm
    {
      vmovaps xmm3, xmm13; width
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+128h+fmt], xmm12
    }
    CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, &colorWhite);
    v94 = 6i64;
    __asm { vmovaps xmm14, [rsp+128h+var_C8] }
    do
    {
      __asm
      {
        vmovss  [rsp+128h+shadow], xmm9
        vmovss  [rsp+128h+forceColor], xmm11
        vmovaps xmm3, xmm13; width
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm10; x
        vmovss  dword ptr [rsp+128h+fmt], xmm12
      }
      CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, *(float *)&forceColorb, *(float *)&shadowb, v66, 0x80u, v135, color++);
      v66 += 128;
      --v94;
    }
    while ( v94 );
  }
  __asm { vmovaps xmm7, [rsp+128h+var_58] }
  _R11 = &v133;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
CG_Event_Debug_FlipFrame
==============
*/
void CG_Event_Debug_FlipFrame(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 currentIndex; 
  _DWORD *v3; 
  int *v4; 
  __int64 v5; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    v1 = 9i64;
    s_CgEventDebugData.currentIndex = (LOBYTE(s_CgEventDebugData.currentIndex) + 1) & 0x7F;
    currentIndex = s_CgEventDebugData.currentIndex;
    v3 = (_DWORD *)((char *)&s_CgEventDebugData + currentIndex * 4);
    do
    {
      v3[1152] = 0;
      *v3 = 0;
      v3 += 128;
      --v1;
    }
    while ( v1 );
    v4 = &s_CgEventDebugData.skippedEventCount[0][currentIndex];
    v5 = 6i64;
    do
    {
      *v4 = 0;
      v4 += 128;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
CG_Event_Debug_Init
==============
*/
void CG_Event_Debug_Init(LocalClientNum_t localClientNum)
{
  if ( localClientNum == LOCAL_CLIENT_0 )
    memset_0(&s_CgEventDebugData, 0, sizeof(s_CgEventDebugData));
}

