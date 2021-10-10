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
  const dvar_t *v2; 
  unsigned __int16 v3; 
  __int128 v5; 
  int integer; 
  __int64 v7; 
  const char *v8; 
  unsigned __int64 v9; 
  const char *v10; 
  const char *v11; 
  __int64 v14; 
  __int64 v15; 
  char *v18; 
  __int128 v25; 
  const dvar_t *v27; 
  __int64 v28; 
  int *data; 
  const vec4_t *color; 
  __int64 v31; 
  __int128 v32; 
  __int128 v33; 
  unsigned int *v35; 
  int (*skippedEventCount)[128]; 
  const char **v37; 
  const vec4_t *v38; 
  const char *v39; 
  __int128 v42; 
  __int64 v43; 
  __int128 v50; 
  __int64 v52; 
  unsigned __int16 v53; 

  v2 = DVARINT_cg_event_debugAnalytics_Type;
  v3 = (LOBYTE(s_CgEventDebugData.currentIndex) - 1) & 0x7F;
  v53 = v3;
  v5 = LODWORD(FLOAT_8_0);
  if ( !DVARINT_cg_event_debugAnalytics_Type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_debugAnalytics_Type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( (unsigned __int8)integer < 9u )
  {
    v7 = (unsigned __int8)integer;
    v8 = j_va("CgEventLod: %s", g_cgEventDebugTypeNames[(unsigned __int8)integer]);
    CG_DrawStringExt(scrPlace, 8.0, 8.0, v8, &colorWhite, 0, 1, 8.0, 0);
    v9 = v3 + ((unsigned __int64)(unsigned int)v7 << 7);
    v10 = j_va("Total Events: %i", (unsigned int)s_CgEventDebugData.totalEventCount[0][v9]);
    CG_DrawStringExt(scrPlace, 20.0, 16.0, v10, &colorBlue, 0, 1, 8.0, 0);
    v11 = j_va("Performed Events: %i", (unsigned int)s_CgEventDebugData.performedEventCount[0][v9]);
    _XMM2 = LODWORD(FLOAT_24_0);
    _XMM1 = LODWORD(FLOAT_20_0);
    CG_DrawStringExt(scrPlace, 20.0, 24.0, v11, &colorRed, 0, 1, 8.0, 0);
    v14 = v7 << 9;
    v15 = 16i64;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v18 = (char *)&s_CgEventDebugData + v14;
    do
    {
      __asm
      {
        vpmaxsd xmm1, xmm1, xmmword ptr [rax]
        vpmaxsd xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v18 += 32;
      --v15;
    }
    while ( v15 );
    __asm
    {
      vpmaxsd xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpmaxsd xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpmaxsd xmm0, xmm2, xmm0
    }
    v25 = 0i64;
    *(float *)&v25 = (float)(int)_XMM0;
    _XMM1 = v25;
    __asm { vmaxss  xmm6, xmm1, xmm9 }
    CG_DebugGraphs_DrawGraphData(scrPlace, 20.0, 42.0, 512.0, 100.0, 0.0, *(float *)&_XMM6, (int *)((char *)&s_CgEventDebugData + v14), 0x80u, v3, &colorBlue);
    CG_DebugGraphs_DrawGraphData(scrPlace, 20.0, 42.0, 512.0, 100.0, 0.0, *(float *)&_XMM6, (int *)((char *)s_CgEventDebugData.performedEventCount[0] + v14), 0x80u, v3, &colorRed);
    CG_DebugGraphs_DrawAxes(scrPlace, 20.0, 42.0, 512.0, 100.0, &colorWhite);
    v5 = LODWORD(FLOAT_152_0);
  }
  v27 = DVARBOOL_cg_event_debugAnalytics_overBudgetSkipped;
  if ( !DVARBOOL_cg_event_debugAnalytics_overBudgetSkipped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_debugAnalytics_overBudgetSkipped") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.enabled )
  {
    if ( dword_148C4F604 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_148C4F604);
      if ( dword_148C4F604 == -1 )
      {
        debugColors[0] = colorRed;
        debugColors[1] = colorOrange;
        debugColors[2] = colorGreen;
        debugColors[3] = colorBlue;
        debugColors[4] = colorPurple;
        debugColors[5] = colorPink;
        j__Init_thread_footer(&dword_148C4F604);
      }
    }
    if ( *(float *)&v5 > 0.0 && *(float *)&v5 < 1080.0 )
      CG_DrawStringExt(scrPlace, 8.0, *(float *)&v5, "CgEventLod skipped overbudget events", &colorWhite, 0, 1, 8.0, 0);
    v28 = v3;
    data = s_CgEventDebugData.skippedEventCount[0];
    color = debugColors;
    v31 = 6i64;
    v33 = v5;
    *(float *)&v33 = *(float *)&v5 + 8.0;
    v32 = v33;
    __asm { vpxor   xmm14, xmm14, xmm14 }
    v35 = (unsigned int *)s_CgEventDebugData.skippedEventCount + v28;
    skippedEventCount = s_CgEventDebugData.skippedEventCount;
    v37 = g_cgEventInventoryDebugTypeNames;
    v38 = debugColors;
    do
    {
      v39 = j_va("%s : %i", *v37, *v35);
      if ( *(float *)&v32 > 0.0 && *(float *)&v32 < 1080.0 )
        CG_DrawStringExt(scrPlace, 20.0, *(float *)&v32, v39, v38, 0, 1, 8.0, 0);
      _XMM1 = _XMM14;
      _XMM2 = _XMM14;
      v42 = v32;
      *(float *)&v42 = *(float *)&v32 + 8.0;
      v32 = v42;
      v43 = 16i64;
      do
      {
        __asm
        {
          vpmaxsd xmm1, xmm1, xmmword ptr [rbx]
          vpmaxsd xmm2, xmm2, xmmword ptr [rbx+10h]
        }
        skippedEventCount = (int (*)[128])((char *)skippedEventCount + 32);
        --v43;
      }
      while ( v43 );
      __asm
      {
        vpmaxsd xmm1, xmm1, xmm2
        vpsrldq xmm0, xmm1, 8
        vpmaxsd xmm2, xmm1, xmm0
        vpsrldq xmm0, xmm2, 4
        vpmaxsd xmm0, xmm2, xmm0
      }
      v35 += 128;
      ++v37;
      ++v38;
      v50 = 0i64;
      *(float *)&v50 = (float)(int)_XMM0;
      _XMM1 = v50;
      __asm { vmaxss  xmm9, xmm1, xmm9 }
      --v31;
    }
    while ( v31 );
    CG_DebugGraphs_DrawAxes(scrPlace, 20.0, *(float *)&v32, 512.0, 100.0, &colorWhite);
    v52 = 6i64;
    do
    {
      CG_DebugGraphs_DrawGraphData(scrPlace, 20.0, *(float *)&v32, 512.0, 100.0, 0.0, *(float *)&_XMM9, data, 0x80u, v53, color++);
      data += 128;
      --v52;
    }
    while ( v52 );
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

