/*
==============
ScriptableBg_DrawDebug
==============
*/

void __fastcall ScriptableBg_DrawDebug(const ScreenPlacement *scrPlace, const ScriptableBg_DrawDebugInfo *const debugInfo)
{
  ?ScriptableBg_DrawDebug@@YAXPEBUScreenPlacement@@QEBUScriptableBg_DrawDebugInfo@@@Z(scrPlace, debugInfo);
}

/*
==============
ScriptableBg_DrawDefFlags
==============
*/

void __fastcall ScriptableBg_DrawDefFlags(const int flags, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?ScriptableBg_DrawDefFlags@@YAXHPEBUScreenPlacement@@PEAM1MM@Z(flags, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
ScriptableBg_GetEventTypeName
==============
*/

const char *__fastcall ScriptableBg_GetEventTypeName(Scriptable_EventType eventType)
{
  return ?ScriptableBg_GetEventTypeName@@YAPEBDW4Scriptable_EventType@@@Z(eventType);
}

/*
==============
ScriptableBg_DebugTrackStateChange
==============
*/

void __fastcall ScriptableBg_DebugTrackStateChange(int context, unsigned int instance, unsigned int partId, unsigned int stateId, int time)
{
  ?ScriptableBg_DebugTrackStateChange@@YAXHIIIH@Z(context, instance, partId, stateId, time);
}

/*
==============
ScriptableBg_CreateDevGui
==============
*/

void ScriptableBg_CreateDevGui(void)
{
  ?ScriptableBg_CreateDevGui@@YAXXZ();
}

/*
==============
ScriptableBg_CreateDevGui
==============
*/
void ScriptableBg_CreateDevGui(void)
{
  int v0; 
  __int64 i; 
  __int64 v2; 
  unsigned __int8 v3; 

  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v0 = truncate_cast<int,unsigned __int64>(0x17ui64) + 1;
  if ( s_cmd_superUser_textArray[0].cmdsize + v0 <= s_cmd_superUser_textArray[0].maxsize )
  {
    for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v2] = v3 )
    {
      v2 = v0 + i;
      v3 = s_cmd_superUser_textArray[0].data[i--];
    }
    memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_scriptable\n", v0 - 1);
    s_cmd_superUser_textArray[0].data[v0 - 1] = 10;
    s_cmd_superUser_textArray[0].cmdsize += v0;
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
}

/*
==============
ScriptableBg_DebugTrackStateChange
==============
*/
void ScriptableBg_DebugTrackStateChange(int context, unsigned int instance, unsigned int partId, unsigned int stateId, int time)
{
  __int64 v5; 
  __int64 v9; 
  int *v10; 
  __int64 v11; 

  v5 = context;
  if ( context >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 3216, ASSERT_TYPE_ASSERT, "(context < 2)", (const char *)&queryFormat, "context < RECENT_STATE_CONTEXT_MAX") )
    __debugbreak();
  v9 = v5;
  v10 = &s_recentStateChangeCount[v5];
  if ( ((unsigned __int8)v10 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", v10) )
    __debugbreak();
  v11 = _InterlockedExchangeAdd(v10, 1u) % 15 + 15 * v9;
  s_recentStateChanges[0][v11].instance = instance;
  s_recentStateChanges[0][v11].partId = truncate_cast<unsigned short,unsigned int>(partId);
  s_recentStateChanges[0][v11].stateId = truncate_cast<unsigned short,unsigned int>(stateId);
  s_recentStateChanges[0][v11].time = time;
}

/*
==============
ScriptableBg_DrawDebug
==============
*/
void ScriptableBg_DrawDebug(const ScreenPlacement *scrPlace, const ScriptableBg_DrawDebugInfo *const debugInfo)
{
  const dvar_t *v8; 
  const ScreenPlacement *v10; 
  const dvar_t *v14; 
  const dvar_t *v19; 
  const dvar_t *v21; 
  const ScriptableDef *def; 
  unsigned int v23; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef **p_def; 
  char v38; 
  const dvar_t *v39; 
  char v44; 
  unsigned int NumPools; 
  unsigned int v50; 
  char v52; 
  int v57; 
  char v58; 
  int v63; 
  char v64; 
  const dvar_t *v70; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v71; 
  char v72; 
  __int64 v76; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v78; 
  __int64 v79; 
  unsigned __int64 v80; 
  __int64 v81; 
  char v83; 
  char v88; 
  const dvar_t *v93; 
  unsigned int v94; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v98; 
  const char *i; 
  const char **v100; 
  int v101; 
  const char *v102; 
  char v103; 
  const dvar_t *v109; 
  const dvar_t *v110; 
  unsigned __int64 integer; 
  const ScriptableDef *v112; 
  const char *v113; 
  char v114; 
  const dvar_t *v122; 
  char v123; 
  unsigned int v128; 
  unsigned int v129; 
  unsigned int runtimeInstanceCount; 
  unsigned int v131; 
  __int64 v132; 
  char v134; 
  unsigned int v142; 
  const ScriptableDef *v143; 
  const char *v144; 
  unsigned int v145; 
  unsigned int v146; 
  const char *v147; 
  bool v148; 
  const char *v149; 
  __int64 v150; 
  scr_string_t script_noteworthy; 
  const char *name; 
  const char *v153; 
  const dvar_t *v157; 
  const dvar_t *v158; 
  signed int v159; 
  char v162; 
  const dvar_t *v168; 
  char v169; 
  unsigned int v174; 
  float v175; 
  __int64 v176; 
  unsigned __int64 v177; 
  __int64 v178; 
  unsigned int v179; 
  unsigned int v180; 
  unsigned int v181; 
  unsigned int v182; 
  __int64 v183; 
  char v185; 
  char v190; 
  char v195; 
  const dvar_t *v201; 
  char v202; 
  char v208; 
  char v213; 
  const dvar_t *v220; 
  const dvar_t *v226; 
  int v227; 
  const dvar_t *v228; 
  char *fmt; 
  float fmta; 
  char *fmtb; 
  char *fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  __int64 charHeight; 
  float charHeighta; 
  __int64 charHeightb; 
  __int64 charHeightc; 
  float charHeightd; 
  float charHeighte; 
  __int64 shadow; 
  __int64 v244; 
  float v245; 
  float v246; 
  float v247; 
  float v248; 
  float v249; 
  float v250; 
  float v251; 
  float v252; 
  float v253; 
  float v254; 
  float v255; 
  float v256; 
  float v257; 
  float v258; 
  float v259; 
  float v260; 
  float v261; 
  float v262; 
  float v263; 
  float y; 
  float x; 
  unsigned int used; 
  unsigned int v267; 
  unsigned int v268; 
  unsigned int capacity; 
  unsigned int elementSize; 
  const ScreenPlacement *v271; 
  vec3_t outOrigin; 
  char dest[256]; 

  __asm { vmovaps [rsp+220h+var_40], xmm6 }
  v8 = DVARINT_scriptable_debugDisplayOffsetX;
  v271 = scrPlace;
  _RSI = debugInfo;
  v10 = scrPlace;
  if ( !DVARINT_scriptable_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  __asm
  {
    vmovss  xmm6, cs:__real@41000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
  }
  v14 = DVARINT_scriptable_debugDisplayOffsetY;
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  [rsp+220h+x], xmm0
  }
  if ( !DVARINT_scriptable_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
    vaddss  xmm1, xmm0, xmm6
    vmovss  [rsp+220h+y], xmm1
  }
  if ( cm.mapEnts && g_svScriptablesInitialized )
  {
    v19 = DCONST_DVARBOOL_scriptable_debug_inspectLookAt;
    if ( !DCONST_DVARBOOL_scriptable_debug_inspectLookAt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_inspectLookAt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@41400000
        vmovss  [rsp+220h+charHeight], xmm6
        vmovss  dword ptr [rsp+220h+fmt], xmm0
      }
      ScriptableBg_DrawLookedAtInstanceInfo(v10, _RSI, &x, &y, fmta, charHeighta);
      goto LABEL_270;
    }
    v21 = DCONST_DVARBOOL_scriptable_debug_drawInWorld;
    __asm
    {
      vmovaps [rsp+220h+var_50], xmm7
      vmovaps [rsp+220h+var_60], xmm8
      vmovaps [rsp+220h+var_70], xmm9
      vmovaps [rsp+220h+var_80], xmm10
    }
    if ( !DCONST_DVARBOOL_scriptable_debug_drawInWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_drawInWorld") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    def = NULL;
    if ( v21->current.enabled )
    {
      v23 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        __asm { vmovss  xmm7, cs:__real@48800000 }
        do
        {
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v23);
          p_def = &InstanceCommonContext->def;
          if ( InstanceCommonContext->def )
          {
            ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, v23, &outOrigin);
            __asm
            {
              vmovss  xmm0, dword ptr [rsi]
              vsubss  xmm3, xmm0, dword ptr [rsp+220h+outOrigin]
              vmovss  xmm1, dword ptr [rsi+4]
              vsubss  xmm2, xmm1, dword ptr [rsp+220h+outOrigin+4]
              vmovss  xmm0, dword ptr [rsi+8]
              vsubss  xmm4, xmm0, dword ptr [rbp+120h+outOrigin+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vcomiss xmm2, xmm7
            }
            if ( v44 | v38 )
              ScriptableBg_DrawDebugScriptableInstanceInWorld(v23, *p_def);
          }
          ++v23;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( v23 < g_scriptableWorldCounts.totalInstanceCount );
      }
    }
    v39 = DVARBOOL_scriptable_debug_reserved;
    if ( !DVARBOOL_scriptable_debug_reserved && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_reserved") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    __asm
    {
      vmovss  xmm9, cs:__real@41400000
      vmovss  xmm7, cs:__real@44870000
      vmovss  xmm10, cs:__real@c1400000
      vxorps  xmm8, xmm8, xmm8
    }
    if ( v39->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Reserved Scriptable Event Buffer Usage");
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v44 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v44 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v245, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
      }
      NumPools = Scriptable_Bg_EventStreamBuffer_GetNumPools();
      v50 = 0;
      __asm
      {
        vaddss  xmm1, xmm9, [rsp+220h+x]
        vmovss  [rsp+220h+x], xmm1
      }
      if ( NumPools )
      {
        do
        {
          Scriptable_Bg_EventStreamBuffer_GetPoolSizes(1, LOCAL_CLIENT_0, v50, &elementSize, &capacity, &used);
          LODWORD(shadow) = used;
          LODWORD(charHeightb) = capacity;
          LODWORD(fmtb) = elementSize;
          Com_sprintf(dest, 0x100ui64, "Pool %i Server : ElementSize:%i Capacity:%i used:%i", v50, fmtb, charHeightb, shadow);
          __asm
          {
            vmovss  xmm0, [rsp+220h+y]
            vcomiss xmm0, xmm8
          }
          if ( !(v52 | v38) )
          {
            __asm { vcomiss xmm0, xmm7 }
            if ( v52 )
            {
              __asm
              {
                vmovss  xmm1, [rsp+220h+x]; x
                vmovss  [rsp+220h+var_1E8], xmm6
                vmovaps xmm2, xmm0; y
              }
              CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v246, 0);
              __asm { vmovss  xmm0, [rsp+220h+y] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  [rsp+220h+y], xmm0
          }
          v57 = 0;
          do
          {
            Scriptable_Bg_EventStreamBuffer_GetPoolSizes(0, (LocalClientNum_t)v57, v50, (unsigned int *)&outOrigin, &v268, &v267);
            LODWORD(shadow) = v267;
            LODWORD(charHeightc) = v268;
            *(float *)&fmtc = outOrigin.v[0];
            Com_sprintf(dest, 0x100ui64, "       Client%i: ElementSize:%i Capacity:%i used:%i", (unsigned int)v57, fmtc, charHeightc, shadow);
            __asm
            {
              vmovss  xmm0, [rsp+220h+y]
              vcomiss xmm0, xmm8
            }
            if ( !(v58 | v38) )
            {
              __asm { vcomiss xmm0, xmm7 }
              if ( v58 )
              {
                __asm
                {
                  vmovss  xmm1, [rsp+220h+x]; x
                  vmovss  [rsp+220h+var_1E8], xmm6
                  vmovaps xmm2, xmm0; y
                }
                CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v247, 0);
                __asm { vmovss  xmm0, [rsp+220h+y] }
              }
            }
            ++v57;
            __asm
            {
              vaddss  xmm0, xmm0, xmm6
              vmovss  [rsp+220h+y], xmm0
            }
          }
          while ( v57 < 2 );
          ++v50;
        }
        while ( v50 < NumPools );
      }
      v63 = 0;
      do
      {
        Scriptable_BG_EventStreamBuffer_GetCharacterPoolSize((LocalClientNum_t)v63, &v267, &v268, (unsigned int *)&outOrigin);
        *(float *)&shadow = outOrigin.v[0];
        LODWORD(charHeight) = v268;
        LODWORD(fmt) = v267;
        Com_sprintf(dest, 0x100ui64, "Character Pool Client%i: ElementSize:%i Capacity:%i used:%i", (unsigned int)v63, fmt, charHeight, shadow);
        __asm
        {
          vmovss  xmm0, [rsp+220h+y]
          vcomiss xmm0, xmm8
        }
        if ( !(v64 | v38) )
        {
          __asm { vcomiss xmm0, xmm7 }
          if ( v64 )
          {
            __asm
            {
              vmovss  xmm1, [rsp+220h+x]; x
              vmovss  [rsp+220h+var_1E8], xmm6
              vmovaps xmm2, xmm0; y
            }
            CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v248, 0);
            __asm { vmovss  xmm0, [rsp+220h+y] }
          }
        }
        ++v63;
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  [rsp+220h+y], xmm0
        }
      }
      while ( v63 < 2 );
      __asm
      {
        vaddss  xmm1, xmm10, [rsp+220h+x]
        vmovss  [rsp+220h+x], xmm1
      }
    }
    v70 = DVARBOOL_scriptable_debug_defs;
    if ( !DVARBOOL_scriptable_debug_defs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_defs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    v71 = &g_scriptableDefVector;
    if ( v70->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Scriptable Definitions %zu", g_scriptableDefVector.m_size);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v72 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v72 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v249, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      v76 = 0i64;
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
      }
      v78 = &g_scriptableDefVector;
      v79 = 0i64;
      v80 = g_scriptableDefVector.m_size & 0x1FFFFFFFFFFFFFFFi64;
      if ( &g_scriptableDefVector > (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size) )
        v80 = 0i64;
      if ( v80 )
      {
        do
        {
          v81 = *(_QWORD *)v78->m_data.m_buffer;
          v78 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v78 + 8);
          ++v79;
          v76 = (unsigned int)(*(_DWORD *)(v81 + 64) + v76);
        }
        while ( v79 != v80 );
      }
      __asm
      {
        vaddss  xmm1, xmm9, [rsp+220h+x]
        vmovss  [rsp+220h+x], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "FastFile MemCost %i", v76);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v83 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v83 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v250, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "Runtime buffer memory cost for server/client in brackets");
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v88 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v88 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v251, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm { vmovss  xmm1, [rsp+220h+x] }
      v93 = DVARSTR_scriptabledebug_scriptablefilter;
      v94 = 0;
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vsubss  xmm2, xmm1, xmm9
        vmovss  [rsp+220h+y], xmm0
        vaddss  xmm0, xmm2, xmm9
        vmovss  [rsp+220h+x], xmm0
      }
      if ( !DVARSTR_scriptabledebug_scriptablefilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_scriptablefilter") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v93);
      v98 = &g_scriptableDefVector;
      for ( i = v93->current.string; v98 != (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size); ++v94 )
      {
        v100 = *(const char ***)v98->m_data.m_buffer;
        if ( I_strempty(i) || I_stristr(*v100, i) )
        {
          v101 = *((_DWORD *)v100 + 4);
          if ( (v101 & 4) != 0 )
          {
            v102 = "Server Controlled";
          }
          else
          {
            v102 = "Server Instance";
            if ( (v101 & 2) == 0 )
              v102 = "Client Only";
          }
          LODWORD(v244) = *((unsigned __int16 *)v100 + 29);
          LODWORD(shadow) = *((unsigned __int16 *)v100 + 28);
          Com_sprintf(dest, 0x100ui64, "%i %s %s (S:%i C:%i)", v94, v102, *v100, shadow, v244);
          __asm
          {
            vmovss  xmm0, [rsp+220h+y]
            vcomiss xmm0, xmm8
          }
          if ( !(v103 | v38) )
          {
            __asm { vcomiss xmm0, xmm7 }
            if ( v103 )
            {
              __asm
              {
                vmovss  xmm1, [rsp+220h+x]; x
                vmovss  [rsp+220h+var_1E8], xmm6
                vmovaps xmm2, xmm0; y
              }
              CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v252, 0);
              __asm { vmovss  xmm0, [rsp+220h+y] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  [rsp+220h+y], xmm0
          }
        }
        v98 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v98 + 8);
      }
      __asm
      {
        vaddss  xmm1, xmm10, [rsp+220h+x]
        vmovss  [rsp+220h+x], xmm1
      }
    }
    v109 = DVARINT_scriptable_debug_defId;
    if ( !DVARINT_scriptable_debug_defId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_defId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v109);
    if ( v109->current.integer >= 0 )
    {
      v110 = DVARINT_scriptable_debug_defId;
      if ( !DVARINT_scriptable_debug_defId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_defId") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v110);
      integer = v110->current.integer;
      if ( (integer & 0x80000000) != 0i64 || integer >= g_scriptableDefVector.m_size )
      {
        v112 = NULL;
      }
      else
      {
        if ( integer >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        v112 = *(const ScriptableDef **)&g_scriptableDefVector.m_data.m_buffer[8 * integer];
      }
      v113 = "Not found";
      if ( v112 )
        v113 = (char *)&queryFormat.fmt + 3;
      Com_sprintf(dest, 0x100ui64, "Scriptable Definition %i %s", (unsigned int)integer, v113);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v114 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v114 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v253, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vmovss  xmm1, [rsp+220h+x]
        vaddss  xmm2, xmm1, xmm9
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+x], xmm2
        vmovss  [rsp+220h+y], xmm0
      }
      if ( v112 )
      {
        __asm
        {
          vmovss  [rsp+220h+charHeight], xmm6
          vmovss  dword ptr [rsp+220h+fmt], xmm9
        }
        ScriptableBg_DrawDebugScriptableDef(v112, v10, &x, &y, fmtd, charHeightd);
        __asm { vmovss  xmm2, [rsp+220h+x] }
      }
      __asm
      {
        vaddss  xmm0, xmm2, xmm10
        vmovss  [rsp+220h+x], xmm0
      }
    }
    v122 = DVARBOOL_scriptable_debug_instances;
    if ( !DVARBOOL_scriptable_debug_instances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_instances") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v122);
    if ( v122->current.enabled )
    {
      ScriptableCommon_AssertCountsInitialized();
      Com_sprintf(dest, 0x100ui64, "Scriptable Instances %i", g_scriptableWorldCounts.totalInstanceCount);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v123 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v123 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v254, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
      }
      v128 = 0;
      v129 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        do
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( v129 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(shadow) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(charHeight) = v129;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
              __debugbreak();
          }
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          v131 = runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
          if ( v129 >= v131 )
          {
            v132 = v129 - v131;
            if ( (unsigned int)v132 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
            {
              LODWORD(shadow) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
              LODWORD(charHeight) = v129 - v131;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            v128 += cm.mapEnts->scriptableMapEnts.mapInstances[v132].ffMemCost;
          }
          else
          {
            *(_QWORD *)outOrigin.v = 0i64;
          }
          ++v129;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( v129 < g_scriptableWorldCounts.totalInstanceCount );
        v10 = v271;
        v71 = &g_scriptableDefVector;
      }
      __asm
      {
        vaddss  xmm1, xmm9, [rsp+220h+x]
        vmovss  [rsp+220h+x], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "FastFile MemCost %i", v128);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v134 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v134 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v255, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vmovss  xmm1, [rsp+220h+x]
        vaddss  xmm0, xmm0, xmm6
        vsubss  xmm2, xmm1, xmm9
        vmovss  [rsp+220h+y], xmm0
        vaddss  xmm0, xmm2, xmm9
        vmovss  [rsp+220h+x], xmm0
      }
      v142 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        while ( 1 )
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( v142 < g_scriptableWorldCounts.serverInstanceCount )
            def = ScriptableSv_GetInstanceCommonContext(v142)->def;
          v143 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v142)->def;
          ScriptableCommon_AssertCountsInitialized();
          if ( v142 >= g_scriptableWorldCounts.runtimeInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            v144 = "Fixed Server";
            if ( v142 >= g_scriptableWorldCounts.serverInstanceCount )
              v144 = "Fixed Client Only";
          }
          else
          {
            v144 = "Reserved";
          }
          ScriptableCommon_AssertCountsInitialized();
          if ( v142 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(shadow) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(charHeight) = v142;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
              __debugbreak();
          }
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          v145 = g_scriptableWorldCounts.runtimeInstanceCount;
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          v146 = v145 + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
          if ( v142 >= v146 )
          {
            v150 = v142 - v146;
            if ( (unsigned int)v150 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
            {
              LODWORD(shadow) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
              LODWORD(charHeight) = v142 - v146;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            script_noteworthy = cm.mapEnts->scriptableMapEnts.mapInstances[v150].script_noteworthy;
            if ( script_noteworthy )
            {
              v147 = SL_ConvertToString(script_noteworthy);
              goto LABEL_149;
            }
          }
          else
          {
            *(_QWORD *)outOrigin.v = 0i64;
          }
          v147 = (char *)&queryFormat.fmt + 3;
LABEL_149:
          ScriptableCommon_AssertCountsInitialized();
          if ( v142 < g_scriptableWorldCounts.serverInstanceCount )
          {
            v148 = def || v143;
            if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
              __debugbreak();
            ScriptableCommon_AssertCountsInitialized();
            if ( v142 >= g_scriptableWorldCounts.serverInstanceCount )
            {
              ScriptableCommon_AssertCountsInitialized();
              LODWORD(shadow) = g_scriptableWorldCounts.serverInstanceCount;
              LODWORD(charHeight) = v142;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            if ( v143 )
              name = v143->name;
            else
              name = "Unassigned";
            if ( def )
              v153 = def->name;
            else
              v153 = "Unassigned";
            LODWORD(v244) = g_scriptableSv_instanceContexts[v142].commonContext.linkedObjectIndex;
            LODWORD(charHeight) = v244;
            Com_sprintf(dest, 0x100ui64, "%i %s S(%i):%s C(%i):%s %s", v142, v144, charHeight, v153, v244, name, v147);
          }
          else
          {
            v148 = v143 != NULL;
            ScriptableCommon_AssertCountsInitialized();
            if ( v142 >= g_scriptableWorldCounts.totalInstanceCount )
            {
              ScriptableCommon_AssertCountsInitialized();
              LODWORD(shadow) = g_scriptableWorldCounts.totalInstanceCount;
              LODWORD(charHeight) = v142;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
              __debugbreak();
            if ( v143 )
              v149 = v143->name;
            else
              v149 = "Unassigned";
            LODWORD(charHeight) = g_scriptableCl_instanceContexts[0][v142].commonContext.linkedObjectIndex;
            Com_sprintf(dest, 0x100ui64, "%i %s C(%i):%s %s", v142, v144, charHeight, v149, v147);
          }
          if ( v148 )
          {
            __asm
            {
              vmovss  xmm0, [rsp+220h+y]
              vcomiss xmm0, xmm8
              vcomiss xmm0, xmm7
              vaddss  xmm0, xmm0, xmm6
              vmovss  [rsp+220h+y], xmm0
            }
          }
          ++v142;
          ScriptableCommon_AssertCountsInitialized();
          def = NULL;
          if ( v142 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            v71 = &g_scriptableDefVector;
            break;
          }
        }
      }
      __asm
      {
        vaddss  xmm1, xmm10, [rsp+220h+x]
        vmovss  [rsp+220h+x], xmm1
      }
    }
    v157 = DVARINT_scriptable_debug_instanceId;
    if ( !DVARINT_scriptable_debug_instanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_instanceId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v157);
    if ( v157->current.integer >= 0 )
    {
      v158 = DVARINT_scriptable_debug_instanceId;
      if ( !DVARINT_scriptable_debug_instanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_instanceId") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v158);
      v159 = v158->current.integer;
      if ( v159 < 0 || (ScriptableCommon_AssertCountsInitialized(), v159 >= (int)g_scriptableWorldCounts.totalInstanceCount) )
      {
        __asm
        {
          vaddss  xmm1, xmm9, [rsp+220h+x]
          vmovss  [rsp+220h+x], xmm1
        }
        Com_sprintf(dest, 0x100ui64, "Scriptable Instance %i NOT FOUND", (unsigned int)v159);
        __asm
        {
          vmovss  xmm0, [rsp+220h+y]
          vcomiss xmm0, xmm8
        }
        if ( !(v162 | v38) )
        {
          __asm { vcomiss xmm0, xmm7 }
          if ( v162 )
          {
            __asm
            {
              vmovss  xmm1, [rsp+220h+x]; x
              vmovss  [rsp+220h+var_1E8], xmm6
              vmovaps xmm2, xmm0; y
            }
            CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorRed, 0, 1, v256, 0);
            __asm { vmovss  xmm0, [rsp+220h+y] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  [rsp+220h+y], xmm0
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm1, xmm9, [rsp+220h+x]
          vmovss  [rsp+220h+charHeight], xmm6
          vmovss  [rsp+220h+x], xmm1
          vmovss  dword ptr [rsp+220h+fmt], xmm9
        }
        ScriptableBg_DrawDebugScriptableInstance(v159, v10, &x, &y, fmte, charHeighte);
      }
      __asm
      {
        vaddss  xmm1, xmm10, [rsp+220h+x]
        vmovss  [rsp+220h+x], xmm1
      }
    }
    v168 = DVARBOOL_scriptable_debug_memory;
    if ( !DVARBOOL_scriptable_debug_memory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_memory") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v168);
    if ( v168->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Scriptable Memory Summary");
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v169 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v169 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v257, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
      }
      v174 = 0;
      used = 0;
      v175 = *(float *)&cm.mapEnts->scriptableMapEnts.ffMemCost;
      v176 = 0i64;
      outOrigin.v[0] = v175;
      v177 = g_scriptableDefVector.m_size & 0x1FFFFFFFFFFFFFFFi64;
      if ( &g_scriptableDefVector > (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size) )
        v177 = 0i64;
      if ( v177 )
      {
        do
        {
          v178 = *(_QWORD *)v71->m_data.m_buffer;
          v71 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v71 + 8);
          ++v176;
          v174 += *(_DWORD *)(v178 + 64);
        }
        while ( v176 != v177 );
        used = v174;
      }
      v179 = 0;
      v180 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        do
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( v180 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(shadow) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(charHeight) = v180;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
              __debugbreak();
          }
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          v181 = g_scriptableWorldCounts.runtimeInstanceCount;
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          v182 = v181 + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
          if ( v180 >= v182 )
          {
            v183 = v180 - v182;
            if ( (unsigned int)v183 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
            {
              LODWORD(shadow) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
              LODWORD(charHeight) = v180 - v182;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            v179 += cm.mapEnts->scriptableMapEnts.mapInstances[v183].ffMemCost;
          }
          ++v180;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( v180 < g_scriptableWorldCounts.totalInstanceCount );
        v174 = used;
        v175 = outOrigin.v[0];
        v10 = v271;
      }
      __asm
      {
        vaddss  xmm1, xmm9, [rsp+220h+x]
        vmovss  [rsp+220h+x], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "FastFile: MapEnts   %i", v175);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v185 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v185 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v258, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "FastFile: Defs      %i", v174);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v190 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v190 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v259, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "FastFile: Instances %i", v179);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v195 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v195 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v260, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm2, xmm10, [rsp+220h+x]
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
        vmovss  [rsp+220h+x], xmm2
      }
    }
    v201 = DVARBOOL_scriptable_debugReservedCount;
    if ( !DVARBOOL_scriptable_debugReservedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugReservedCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v201);
    if ( v201->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Scriptable Reserved Counts");
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v202 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v202 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v261, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm2, xmm9, [rsp+220h+x]
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
        vmovss  [rsp+220h+x], xmm2
      }
      Com_sprintf(dest, 0x100ui64, "Current %i", g_scriptableClReservedCurrentCount[0]);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v208 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v208 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v262, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "Max %i", g_scriptableClReservedMaxCount[0]);
      __asm
      {
        vmovss  xmm0, [rsp+220h+y]
        vcomiss xmm0, xmm8
      }
      if ( !(v213 | v38) )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v213 )
        {
          __asm
          {
            vmovss  xmm1, [rsp+220h+x]; x
            vmovss  [rsp+220h+var_1E8], xmm6
            vmovaps xmm2, xmm0; y
          }
          CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v263, 0);
          __asm { vmovss  xmm0, [rsp+220h+y] }
        }
      }
      __asm
      {
        vaddss  xmm2, xmm10, [rsp+220h+x]
        vaddss  xmm0, xmm0, xmm6
        vmovss  [rsp+220h+y], xmm0
        vmovss  [rsp+220h+x], xmm2
      }
    }
    __asm
    {
      vmovaps xmm3, xmm9; tabWidth
      vmovss  dword ptr [rsp+220h+fmt], xmm6
    }
    Scriptable_Analytics_DebugDraw(v10, &x, &y, *(float *)&_XMM3, fmtf);
    v220 = DVARINT_scriptable_debugDisplayOffsetY;
    __asm
    {
      vmovaps xmm10, [rsp+220h+var_80]
      vmovaps xmm9, [rsp+220h+var_70]
      vmovaps xmm8, [rsp+220h+var_60]
      vmovaps xmm7, [rsp+220h+var_50]
    }
    if ( !DVARINT_scriptable_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v220);
    __asm { vcvttss2si eax, [rsp+220h+y] }
    v226 = DVARINT_scriptable_debugDisplayOffsetY;
    v227 = v220->current.integer - _EAX + 200;
    if ( v227 > 0 )
      v227 = 0;
    if ( !DVARINT_scriptable_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v226);
    if ( v226->current.integer > v227 )
      v227 = v226->current.integer;
    v228 = DVARINT_scriptable_debugDisplayOffsetY;
    if ( !DVARINT_scriptable_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v228);
    if ( v228->current.integer != v227 )
      Dvar_SetInt_Internal(DVARINT_scriptable_debugDisplayOffsetY, v227);
  }
LABEL_270:
  __asm { vmovaps xmm6, [rsp+220h+var_40] }
}

/*
==============
ScriptableBg_DrawDebugScriptableDef
==============
*/
void ScriptableBg_DrawDebugScriptableDef(const ScriptableDef *def, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  char v21; 
  const char **p_name; 
  char v27; 
  char v35; 
  int flags; 
  char v42; 
  char v43; 
  __int64 maxNumDynEntsRequired; 
  char v49; 
  unsigned __int16 eventStreamSizeRequiredServer; 
  unsigned __int16 eventStreamSizeRequiredClient; 
  char v56; 
  char v57; 
  __int64 numParts; 
  const char *v63; 
  char v64; 
  char *fmt; 
  float fmta; 
  __int64 forceColor; 
  int forceColora; 
  int forceColorb; 
  int shadow; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  char dest[256]; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RBX = y;
  _RSI = x;
  _RDI = def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2014, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, _RDI->name);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm6, [rsp+1D8h+charHeight]
    vmovss  xmm7, cs:__real@44870000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm2, xmm8
    vmovaps xmm0, xmm2
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
  Com_sprintf(dest, 0x100ui64, "FastFile MemCost %i", _RDI->ffMemCost);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vcomiss xmm2, xmm8
    vmovaps xmm0, xmm2
  }
  if ( !(v21 | v43) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v21 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]; x
        vmovss  [rsp+1D8h+var_1A0], xmm6
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v83, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
  p_name = &_RDI->nextScriptableDef->name;
  if ( p_name )
  {
    Com_sprintf(dest, 0x100ui64, "Next Scriptable %s", *p_name);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v27 | v43) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v27 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  [rsp+1D8h+var_1A0], xmm6
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v84, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
  }
  if ( _RDI->networkLODRangeOverride )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+60h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x100ui64, "Network LOD override distance %.2f", *(double *)&_XMM3);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v35 | v43) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v35 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  [rsp+1D8h+var_1A0], xmm6
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v85, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
  }
  flags = _RDI->flags;
  __asm { vmovss  xmm9, [rsp+1D8h+tabWidth] }
  if ( flags )
  {
    __asm
    {
      vmovss  [rsp+1D8h+forceColor], xmm6
      vmovss  dword ptr [rsp+1D8h+fmt], xmm9
    }
    ScriptableBg_DrawDefFlags(flags, scrPlace, _RSI, _RBX, fmta, *(float *)&forceColora);
    flags = _RDI->flags;
  }
  if ( (flags & 4) != 0 )
  {
    LODWORD(forceColor) = _RDI->partCount;
    LODWORD(fmt) = _RDI->serverInstancedPartCount;
    Com_sprintf(dest, 0x100ui64, "Part Total: ServerControlled:%i ServerInstanced:%i Overall:%i", _RDI->serverControlledPartCount, fmt, forceColor);
  }
  else if ( (flags & 2) != 0 )
  {
    LODWORD(fmt) = _RDI->partCount;
    Com_sprintf(dest, 0x100ui64, "Part Total: ServerInstanced:%i Overall:%i", _RDI->serverInstancedPartCount, fmt);
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "Part Total:%i", _RDI->partCount);
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vcomiss xmm2, xmm8
    vmovaps xmm0, xmm2
  }
  if ( !(v42 | v43) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v42 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]; x
        vmovss  [rsp+1D8h+var_1A0], xmm6
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v86, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
  maxNumDynEntsRequired = _RDI->maxNumDynEntsRequired;
  if ( (_DWORD)maxNumDynEntsRequired )
  {
    Com_sprintf(dest, 0x100ui64, "Number of Dynents Required %i", maxNumDynEntsRequired);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v49 | v43) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v49 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  [rsp+1D8h+var_1A0], xmm6
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v87, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
  }
  eventStreamSizeRequiredServer = _RDI->eventStreamSizeRequiredServer;
  eventStreamSizeRequiredClient = _RDI->eventStreamSizeRequiredClient;
  if ( eventStreamSizeRequiredServer )
  {
    if ( eventStreamSizeRequiredClient )
    {
      LODWORD(fmt) = eventStreamSizeRequiredClient;
      Com_sprintf(dest, 0x100ui64, "Event Stream Size: Server:%i, Client:%i", eventStreamSizeRequiredServer, fmt);
    }
    else
    {
      Com_sprintf(dest, 0x100ui64, "Event Stream Size: Server:%i", eventStreamSizeRequiredServer);
    }
  }
  else
  {
    if ( !eventStreamSizeRequiredClient )
      goto LABEL_42;
    Com_sprintf(dest, 0x100ui64, "Event Stream Size: Client:%i", eventStreamSizeRequiredClient);
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vcomiss xmm2, xmm8
    vmovaps xmm0, xmm2
  }
  if ( !(v56 | v57) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v56 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]; x
        vmovss  [rsp+1D8h+var_1A0], xmm6
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v88, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
LABEL_42:
  numParts = _RDI->numParts;
  if ( (_DWORD)numParts )
  {
    v63 = "Parts";
    if ( (_DWORD)numParts == 1 )
      v63 = "Part";
    Com_sprintf(dest, 0x100ui64, "%i %s", numParts, v63);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v64 | v43) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v64 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]; x
          vmovss  [rsp+1D8h+var_1A0], xmm6
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v89, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm1, xmm9, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  [rsp+1D8h+shadow], xmm6
      vmovss  [rsp+1D8h+forceColor], xmm9
    }
    ScriptableBg_DrawDebugScriptablePartsDef(_RDI->parts, _RDI->numParts, scrPlace, _RSI, _RBX, *(float *)&forceColorb, *(float *)&shadow);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, xmm9
      vmovss  dword ptr [rsi], xmm1
    }
  }
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableEventDef
==============
*/
void ScriptableBg_DrawDebugScriptableEventDef(const ScriptableEventDef *event, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  __int64 type; 
  __int64 v19; 
  int flags; 
  char v26; 
  bool v27; 
  const char **p_name; 
  char v29; 
  char v34; 
  char v35; 
  char v40; 
  char v41; 
  int eventStreamBufferOffsetClient; 
  __int64 eventStreamBufferOffsetServer; 
  char v54; 
  char v60; 
  char v69; 
  const char *notification; 
  char v78; 
  const char **v83; 
  char v84; 
  const char *v89; 
  char v90; 
  const char *v95; 
  char v96; 
  char v101; 
  unsigned int label; 
  const cmodel_t *BrushModel; 
  const char **v108; 
  char v109; 
  char v114; 
  const char *v119; 
  char v120; 
  const char *v125; 
  char v126; 
  const char *v131; 
  char v132; 
  ScriptableEventDef *eventsB; 
  char v138; 
  const char **v143; 
  char v144; 
  char v149; 
  char v154; 
  bool v159; 
  char v160; 
  bool v161; 
  char v170; 
  char v171; 
  const char *v177; 
  char v178; 
  char v179; 
  char v188; 
  char v189; 
  char v198; 
  char v203; 
  __int64 eventAtEndCount; 
  const char *v209; 
  char v210; 
  const char *v218; 
  const char *v219; 
  const char *v220; 
  char v221; 
  const char *v226; 
  char v227; 
  __int64 flatId; 
  const char *v233; 
  char v234; 
  const char **v242; 
  char v243; 
  char v248; 
  char v253; 
  char v265; 
  const char *v273; 
  char v278; 
  const char **v283; 
  char v284; 
  const char *tagName; 
  char v290; 
  const char *v295; 
  char v296; 
  char v301; 
  const char *v306; 
  char v319; 
  char v320; 
  const char *v331; 
  char v344; 
  char v345; 
  const char *effectAlias; 
  char v357; 
  const ParticleSystemDef *particleSystemDef; 
  char v363; 
  const char *v368; 
  char v369; 
  const char **v374; 
  char v375; 
  unsigned int v380; 
  scr_string_t v381; 
  const char *v382; 
  char v383; 
  const char *v388; 
  char v389; 
  const char *v394; 
  char v395; 
  char v403; 
  const char *v408; 
  char v409; 
  char v414; 
  const char *soundAlias; 
  char v420; 
  const char *v425; 
  char v426; 
  const char *v431; 
  char v432; 
  char v437; 
  const char *v442; 
  char v443; 
  bool v449; 
  char v453; 
  char v463; 
  const char *name; 
  char v469; 
  char v477; 
  char v485; 
  char v490; 
  const char *v495; 
  char v496; 
  bool v497; 
  char v498; 
  const char *v503; 
  char v513; 
  char v527; 
  char v528; 
  char v538; 
  char v539; 
  char v555; 
  char v569; 
  char v570; 
  char v586; 
  char v595; 
  char v596; 
  char v607; 
  char v608; 
  char v627; 
  const char *v632; 
  char v633; 
  const char *v638; 
  char v639; 
  const char *v644; 
  char v645; 
  const char *v650; 
  char v651; 
  const char *v656; 
  char v657; 
  char v662; 
  char v667; 
  char v679; 
  char v684; 
  char v692; 
  const char **v697; 
  char v698; 
  char v703; 
  bool v704; 
  char v717; 
  const char **v722; 
  const char *v723; 
  char v724; 
  __int64 tireIndex; 
  char v730; 
  __int64 v735; 
  char v736; 
  char v744; 
  char v752; 
  __int64 v757; 
  char v759; 
  char v768; 
  __int64 v776; 
  char v777; 
  char v782; 
  char v788; 
  char v797; 
  int v805; 
  const char *v806; 
  char v807; 
  const char *v812; 
  char v826; 
  const char *v843; 
  char v844; 
  char v845; 
  char v852; 
  const char *v863; 
  char v900; 
  const char *v917; 
  char v918; 
  char v919; 
  char v926; 
  const char *v937; 
  char v968; 
  char v980; 
  const char *v985; 
  char v986; 
  const char *v991; 
  char v992; 
  char v1004; 
  char v1012; 
  char v1020; 
  const char *v1025; 
  const char *v1026; 
  char v1027; 
  const char *v1032; 
  char v1033; 
  const char *v1038; 
  char v1043; 
  const char *v1049; 
  char v1052; 
  char v1057; 
  char v1062; 
  char v1067; 
  char v1072; 
  char v1077; 
  const char *v1082; 
  char v1083; 
  const char *v1088; 
  char v1092; 
  char v1100; 
  char v1108; 
  char v1116; 
  char v1124; 
  char v1132; 
  const char *v1137; 
  char v1138; 
  char *fmt; 
  float fmtf; 
  char *fmtg; 
  char *fmth; 
  char *fmti; 
  char *fmtj; 
  char *fmta; 
  char *fmtk; 
  char *fmtl; 
  char *fmtm; 
  char *fmtn; 
  char *fmto; 
  char *fmtp; 
  char *fmtq; 
  char *fmtr; 
  char *fmts; 
  char *fmtt; 
  char *fmtu; 
  char *fmtv; 
  char *fmtw; 
  char *fmtx; 
  char *fmty; 
  char *fmtb; 
  char *fmtc; 
  char *fmtz; 
  char *fmtba; 
  char *fmtbb; 
  char *fmtbc; 
  char *fmtd; 
  char *fmtbd; 
  char *fmtbe; 
  char *fmtbf; 
  char *fmtbg; 
  char *fmte; 
  char *fmtbh; 
  char *fmtbi; 
  char *fmtbj; 
  char *fmtbk; 
  __int64 forceColor; 
  int forceColorn; 
  int forceColoro; 
  int forceColorp; 
  int forceColorq; 
  int forceColorr; 
  double forceColors; 
  __int64 forceColora; 
  __int64 forceColorb; 
  __int64 forceColorc; 
  __int64 forceColord; 
  __int64 forceColore; 
  double forceColort; 
  double forceColoru; 
  double forceColorv; 
  __int64 forceColorf; 
  __int64 forceColorg; 
  int forceColorw; 
  int forceColorx; 
  int forceColory; 
  int forceColorz; 
  double forceColorba; 
  double forceColorh; 
  double forceColorbb; 
  __int64 forceColori; 
  __int64 forceColorj; 
  double forceColorbc; 
  double forceColork; 
  double forceColorbd; 
  __int64 forceColorl; 
  __int64 forceColorm; 
  double forceColorbe; 
  double forceColorbf; 
  double forceColorbg; 
  __int64 shadow; 
  int shadowk; 
  int shadowl; 
  int shadowm; 
  int shadown; 
  __int64 shadowa; 
  __int64 shadowb; 
  __int64 shadowc; 
  __int64 shadowd; 
  double shadowo; 
  double shadowp; 
  int shadowq; 
  int shadowr; 
  int shadows; 
  int shadowt; 
  double shadowu; 
  double shadowe; 
  __int64 shadowf; 
  __int64 shadowg; 
  double shadowv; 
  double shadowh; 
  __int64 shadowi; 
  __int64 shadowj; 
  float v1246; 
  float v1247; 
  float v1248; 
  float v1249; 
  float v1250; 
  float v1251; 
  float v1252; 
  float v1253; 
  float v1254; 
  float v1255; 
  float v1256; 
  float v1257; 
  float v1258; 
  float v1259; 
  float v1260; 
  float v1261; 
  float v1262; 
  float v1263; 
  float v1264; 
  float v1265; 
  float v1266; 
  float v1267; 
  float v1268; 
  float v1269; 
  float v1270; 
  float v1271; 
  float v1272; 
  float v1273; 
  float v1274; 
  float v1275; 
  float v1276; 
  float v1277; 
  float v1278; 
  float v1279; 
  float v1280; 
  float v1281; 
  float v1282; 
  float v1283; 
  __int64 v1284; 
  float v1285; 
  __int64 v1286; 
  float v1287; 
  float v1288; 
  float v1289; 
  float v1290; 
  float v1291; 
  float v1292; 
  float v1293; 
  float v1294; 
  float v1295; 
  float v1296; 
  float v1297; 
  float v1298; 
  float v1299; 
  float v1300; 
  float v1301; 
  float v1302; 
  float v1303; 
  float v1304; 
  float v1305; 
  float v1306; 
  float v1307; 
  float v1308; 
  float v1309; 
  float v1310; 
  float v1311; 
  float v1312; 
  float v1313; 
  float v1314; 
  float v1315; 
  float v1316; 
  float v1317; 
  float v1318; 
  float v1319; 
  float v1320; 
  float v1321; 
  float v1322; 
  float v1323; 
  float v1324; 
  float v1325; 
  float v1326; 
  float v1327; 
  float v1328; 
  float v1329; 
  float v1330; 
  float v1331; 
  float v1332; 
  float v1333; 
  float v1334; 
  float v1335; 
  float v1336; 
  float v1337; 
  float v1338; 
  float v1339; 
  float v1340; 
  float v1341; 
  float v1342; 
  float v1343; 
  float v1344; 
  float v1345; 
  double v1346; 
  float v1347; 
  double v1348; 
  float v1349; 
  float v1350; 
  __int64 v1351; 
  double v1352; 
  float v1353; 
  double v1354; 
  float v1355; 
  float v1356; 
  __int64 v1357; 
  float v1358; 
  float v1359; 
  float v1360; 
  float v1361; 
  float v1362; 
  float v1363; 
  float v1364; 
  float v1365; 
  float v1366; 
  float v1367; 
  float v1368; 
  float v1369; 
  float v1370; 
  float v1371; 
  float v1372; 
  float v1373; 
  float v1374; 
  float v1375; 
  float v1376; 
  float v1377; 
  float v1378; 
  float v1379; 
  float v1380; 
  float v1381; 
  float v1382; 
  __int64 adjust; 
  __int64 adjusta; 
  double adjustf; 
  double adjustb; 
  __int64 adjustc; 
  double adjustg; 
  double adjustd; 
  __int64 adjuste; 
  __int64 v1391; 
  __int64 v1392; 
  double v1393; 
  __int64 v1394; 
  double v1395; 
  __int64 v1396; 
  const char *v1397; 
  __int64 v1398[2]; 
  __int128 v1399; 
  __int128 v1400; 
  __int64 v1401[14]; 
  __int64 v1402[14]; 
  char dest[256]; 
  char v1404; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  _RDI = y;
  _R15 = x;
  _R14 = event;
  __asm { vmovss  xmm6, [rbp+200h+charHeight] }
  if ( event->base.name && *event->base.name )
  {
    type = event->type;
    if ( (unsigned int)type >= 0x2C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 3287, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_scriptable_eventTypeNames ) ) + 0 ) )", "eventType doesn't index s_scriptable_eventTypeNames\n\t%i not in [0, %i)", type, 44) )
      __debugbreak();
    Com_sprintf(dest, 0x100ui64, "Name:%s Type:%s", _R14->base.name, s_scriptable_eventTypeNames[type]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]
      vmovaps xmm0, xmm2
    }
  }
  else
  {
    v19 = event->type;
    if ( (unsigned int)v19 >= 0x2C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 3287, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_scriptable_eventTypeNames ) ) + 0 ) )", "eventType doesn't index s_scriptable_eventTypeNames\n\t%i not in [0, %i)", v19, 44) )
      __debugbreak();
    Com_sprintf(dest, 0x100ui64, "Type:%s", s_scriptable_eventTypeNames[v19]);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovaps xmm2, xmm0; y
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@44870000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm2, xmm8
    vmovss  xmm9, [rbp+200h+tabWidth]
    vaddss  xmm0, xmm6, xmm0
    vmovss  dword ptr [rdi], xmm0
  }
  flags = _R14->base.flags;
  v26 = 0;
  v27 = flags == 0;
  if ( flags )
  {
    __asm
    {
      vmovss  [rsp+300h+forceColor], xmm6
      vmovss  dword ptr [rsp+300h+fmt], xmm9
    }
    ScriptableBg_DrawDefFlags(flags, scrPlace, _R15, _RDI, fmtf, *(float *)&forceColorn);
  }
  switch ( _R14->type )
  {
    case Scriptable_EventType_StateChange:
      p_name = &_R14->data.stateChange.part->name;
      if ( p_name && *p_name )
      {
        Com_sprintf(dest, 0x100ui64, "Referenced part: %s", *p_name);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v29 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v29 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1246, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      Com_sprintf(dest, 0x100ui64, "State:%i", _R14->data.stateChange.stateIdx);
      goto LABEL_742;
    case Scriptable_EventType_Wait:
      __asm
      {
        vmovss  xmm0, dword ptr [r14+20h]; jumptable 00000001414B9E7C case 1
        vmovss  xmm1, dword ptr [r14+24h]
        vcomiss xmm1, xmm0
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      if ( v26 | v27 )
      {
        Com_sprintf(dest, 0x100ui64, "Time:%.3f", *(double *)&_XMM3);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]
          vmovaps xmm0, xmm2
        }
      }
      else
      {
        __asm
        {
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+300h+fmt], xmm0
        }
        Com_sprintf(dest, 0x100ui64, "Random Time between %.3f and %.3f", *(double *)&_XMM3, *(double *)&fmtg);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovaps xmm2, xmm0; y
        }
      }
      __asm { vcomiss xmm2, xmm8 }
      if ( !(v40 | v41) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v40 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1247, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm6, xmm0
        vmovss  dword ptr [rdi], xmm0
      }
      eventStreamBufferOffsetClient = _R14->data.wait.eventStreamBufferOffsetClient;
      eventStreamBufferOffsetServer = _R14->data.wait.eventStreamBufferOffsetServer;
      goto LABEL_28;
    case Scriptable_EventType_Random:
      __asm
      {
        vmovss  xmm3, dword ptr [r14+20h]; jumptable 00000001414B9E7C case 2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Threshold:%.3f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v54 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v54 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1248, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( _R14->data.stateChange.stateIdx )
      {
        Com_sprintf(dest, 0x100ui64, "<= threshold %i %s");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v60 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v60 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1249, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vmovss  [rsp+300h+shadow], xmm6
          vmovss  [rsp+300h+forceColor], xmm9
        }
        ScriptableBg_DrawDebugScriptableEventsDef(_R14->data.random.eventsA, _R14->data.stateChange.stateIdx, scrPlace, _R15, _RDI, *(float *)&forceColoro, *(float *)&shadowk);
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vsubss  xmm1, xmm0, xmm9
          vmovss  dword ptr [r15], xmm1
        }
      }
      if ( _R14->data.random.eventBCount )
      {
        Com_sprintf(dest, 0x100ui64, "> threshold %i %s");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v69 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v69 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1250, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vmovss  [rsp+300h+shadow], xmm6
          vmovss  [rsp+300h+forceColor], xmm9
        }
        ScriptableBg_DrawDebugScriptableEventsDef(_R14->data.random.eventsB, _R14->data.random.eventBCount, scrPlace, _R15, _RDI, *(float *)&forceColorp, *(float *)&shadowl);
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vsubss  xmm1, xmm0, xmm9
          vmovss  dword ptr [r15], xmm1
        }
      }
      eventStreamBufferOffsetClient = _R14->data.random.eventStreamBufferOffsetClient;
      eventStreamBufferOffsetServer = _R14->data.random.eventStreamBufferOffsetServer;
      goto LABEL_28;
    case Scriptable_EventType_Script:
      notification = _R14->data.script.notification;
      if ( notification && *notification )
      {
        LODWORD(fmt) = _R14->data.script.scrNotification;
        Com_sprintf(dest, 0x100ui64, "Name:%s Script:%i", notification, fmt);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v78 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v78 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1251, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      Com_sprintf(dest, 0x100ui64, "Param:%i", _R14->data.objective.settings.label);
      Com_sprintf(dest, 0x100ui64, "Notify Callback:%i", _R14->data.anonymous.buffer[16]);
      goto LABEL_742;
    case Scriptable_EventType_Model:
      v83 = &_R14->data.stateChange.part->name;
      if ( _R14->data.anonymous.buffer[0] == 2 )
      {
        if ( !v83 )
          goto LABEL_58;
      }
      else if ( !v83 )
      {
        goto LABEL_58;
      }
      Com_sprintf(dest, 0x100ui64, "Name:%s", *v83);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v84 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v84 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1252, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
LABEL_58:
      v89 = "Movable";
      if ( _R14->data.anonymous.buffer[19] )
        v89 = "Never Moves";
      Com_sprintf(dest, 0x100ui64, v89);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v90 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v90 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1253, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( !_R14->data.anonymous.buffer[20] )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Dynamic Simulation");
      goto LABEL_742;
    case Scriptable_EventType_Collision:
      v95 = _R14->data.script.notification;
      if ( !v95 || !*v95 )
      {
        Com_sprintf(dest, 0x100ui64, "Reset collision");
        goto LABEL_742;
      }
      Com_sprintf(dest, 0x100ui64, "Name:%s", v95);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v96 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v96 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1254, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "Clipmap Model Index:%i", _R14->data.objective.settings.label);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v101 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v101 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1255, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      label = _R14->data.objective.settings.label;
      if ( label + 2 > 1 )
      {
        BrushModel = CM_GetBrushModel(label);
        if ( !BrushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 382, ASSERT_TYPE_ASSERT, "(clipmapModel)", (const char *)&queryFormat, "clipmapModel") )
          __debugbreak();
        v108 = &BrushModel->physicsAsset->name;
        if ( v108 )
        {
          LODWORD(fmt) = BrushModel->physicsShapeOverrideIdx;
          Com_sprintf(dest, 0x100ui64, "Asset:%s Shape:%i", *v108, fmt);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v109 | v27) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v109 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  dword ptr [rsp+300h+var_2C8], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1256, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
        }
      }
      if ( _R14->data.anonymous.buffer[8] )
      {
        Com_sprintf(dest, 0x100ui64, "Creates AI Obstacle");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v114 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v114 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1257, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v119 = "Movable";
      if ( _R14->data.anonymous.buffer[16] )
        v119 = "Never Moves";
      Com_sprintf(dest, 0x100ui64, v119);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v120 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v120 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1258, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v125 = "No Push";
      if ( _R14->data.anonymous.buffer[17] )
        v125 = "Can Push";
      Com_sprintf(dest, 0x100ui64, v125);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v126 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v126 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1259, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v131 = "No Touch";
      if ( _R14->data.anonymous.buffer[18] )
        v131 = "Can Touch";
      Com_sprintf(dest, 0x100ui64, v131);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v132 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v132 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1260, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      eventsB = _R14->data.random.eventsB;
      if ( eventsB )
      {
        Com_sprintf(dest, 0x100ui64, "Model: %s", eventsB->base.name);
        goto LABEL_742;
      }
      goto LABEL_747;
    case Scriptable_EventType_Animation:
      if ( _R14->data.anonymous.buffer[8] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v138 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v138 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1261, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v143 = (const char **)_R14->data.script.notification;
      if ( v143 )
      {
        Com_sprintf(dest, 0x100ui64, "Name:%s", *v143);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v144 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v144 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1262, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.anonymous.buffer[9] )
      {
        Com_sprintf(dest, 0x100ui64, "Override");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v149 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v149 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1263, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.anonymous.buffer[10] )
      {
        Com_sprintf(dest, 0x100ui64, "PauseOnExit");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v154 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v154 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1264, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v159 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
      v160 = 0;
      v161 = !v159;
      if ( v159 )
      {
        v160 = 0;
        v161 = _R14->data.anonymous.buffer[11] == 0;
        if ( _R14->data.anonymous.buffer[11] )
        {
          Com_sprintf(dest, 0x100ui64, "ClientOnly (this option only available in MP)");
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v160 | v161) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v160 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  dword ptr [rsp+300h+var_2C8], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1265, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+2Ch]
        vmovss  xmm1, dword ptr [r14+30h]
        vcomiss xmm1, xmm0
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      if ( v160 | v161 )
      {
        Com_sprintf(dest, 0x100ui64, "StartTime:%.3f", *(double *)&_XMM3);
      }
      else
      {
        __asm
        {
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+300h+fmt], xmm0
        }
        Com_sprintf(dest, 0x100ui64, "StartTime Random between: %.3f and %.3f", *(double *)&_XMM3, *(double *)&fmth);
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v170 | v171) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v170 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1266, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v177 = "Seconds";
      if ( _R14->data.anonymous.buffer[20] )
        v177 = "Normalized form";
      Com_sprintf(dest, 0x100ui64, "StartTime in %s", v177);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v178 | v179) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v178 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1267, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14+38h]
        vmovss  xmm2, dword ptr [r14+3Ch]
        vcomiss xmm2, xmm1
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      if ( v178 | v179 )
      {
        Com_sprintf(dest, 0x100ui64, "Playback Rate:%.3f", *(double *)&_XMM3);
      }
      else
      {
        __asm
        {
          vcvtss2sd xmm0, xmm2, xmm2
          vmovsd  [rsp+300h+fmt], xmm0
        }
        Com_sprintf(dest, 0x100ui64, "Playback Rate Random between: %.3f and %.3f", *(double *)&_XMM3, *(double *)&fmti);
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v188 | v189) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v188 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1268, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+40h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Blend Time:%.3f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v198 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v198 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1269, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
      {
        Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", _R14->data.animation.eventStreamBufferOffsetClient);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v203 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v203 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1270, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      eventAtEndCount = _R14->data.animation.eventAtEndCount;
      if ( (_DWORD)eventAtEndCount )
      {
        v209 = "Events";
        if ( (_DWORD)eventAtEndCount == 1 )
          v209 = "Event";
        Com_sprintf(dest, 0x100ui64, "At End, execute %i %s", eventAtEndCount, v209);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v210 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v210 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1271, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vmovss  [rsp+300h+shadow], xmm6
          vmovss  [rsp+300h+forceColor], xmm9
        }
        ScriptableBg_DrawDebugScriptableEventsDef(_R14->data.animation.eventsAtEnd, _R14->data.animation.eventAtEndCount, scrPlace, _R15, _RDI, *(float *)&forceColorq, *(float *)&shadowm);
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vsubss  xmm1, xmm0, xmm9
          vmovss  dword ptr [r15], xmm1
        }
      }
      goto LABEL_747;
    case Scriptable_EventType_HideShowBone:
      v218 = _R14->data.script.notification;
      if ( !v218 || !*v218 )
        goto LABEL_747;
      v219 = "Only";
      if ( _R14->data.anonymous.buffer[14] )
        v219 = "And Children";
      v220 = "Show";
      if ( _R14->data.anonymous.buffer[12] )
        v220 = "Hide";
      LODWORD(forceColor) = _R14->data.script.scrNotification;
      Com_sprintf(dest, 0x100ui64, "%s Bone:%s Script:%i %s", v220, v218, forceColor, v219);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v221 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v221 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1272, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( !_R14->data.anonymous.buffer[13] )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Allow missing tag");
      goto LABEL_742;
    case Scriptable_EventType_DisablePhysicsSubShape:
      v226 = _R14->data.script.notification;
      if ( !v226 || !*v226 )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Disable Sub-Shape:%s Hash:%zu", v226, _R14->data.disablePhysicsSubShape.mutableShapeHash);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v227 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v227 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1273, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( !_R14->data.anonymous.buffer[16] )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Allow missing shape");
      goto LABEL_742;
    case Scriptable_EventType_NoteTrack:
      flatId = _R14->data.stateChange.partReference.flatId;
      if ( (_DWORD)flatId )
      {
        v233 = "NoteTracks";
        if ( (_DWORD)flatId == 1 )
          v233 = "NoteTrack";
        Com_sprintf(dest, 0x100ui64, "%i %s", flatId, v233);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v234 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v234 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1274, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vmovss  [rsp+300h+shadow], xmm6
          vmovss  [rsp+300h+forceColor], xmm9
        }
        ScriptableBg_DrawDebugScriptableNoteTracksDef(_R14->data.noteTrack.noteTracks, _R14->data.stateChange.partReference.flatId, scrPlace, _R15, _RDI, *(float *)&forceColorr, *(float *)&shadown);
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vsubss  xmm1, xmm0, xmm9
          vmovss  dword ptr [r15], xmm1
        }
      }
      goto LABEL_747;
    case Scriptable_EventType_ChunkDynent:
      v242 = &_R14->data.chunkDynent.part->name;
      if ( v242 && *v242 )
      {
        Com_sprintf(dest, 0x100ui64, "Referenced part: %s", *v242);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v243 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v243 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1275, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.anonymous.buffer[4] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v248 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v248 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1276, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.anonymous.buffer[5] )
      {
        Com_sprintf(dest, 0x100ui64, "Allow Cause to Drive Velocity");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v253 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v253 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1277, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+30h]
        vmovss  xmm3, dword ptr [r14+28h]
        vmovss  xmm1, dword ptr [r14+2Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+forceColor], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+300h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "LinVel: (%.2f, %.2f, %.2f)", *(double *)&_XMM3, *(double *)&fmtj, forceColors);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v265 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v265 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1278, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14+3Ch]
        vmovss  xmm2, dword ptr [r14+38h]
        vmovss  xmm3, dword ptr [r14+34h]
      }
      v273 = "AngVel: (%.2f, %.2f, %.2f)";
      goto LABEL_208;
    case Scriptable_EventType_SpawnDynent:
      if ( _R14->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v278 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v278 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1279, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v283 = &_R14->data.stateChange.part->name;
      if ( v283 )
      {
        Com_sprintf(dest, 0x100ui64, "Model: %s", *v283);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v284 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v284 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1280, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      tagName = _R14->data.spawnDynent.tagName;
      if ( tagName && *tagName )
      {
        LODWORD(fmt) = _R14->data.spawnDynent.scrTagName;
        Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", tagName, fmt);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v290 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v290 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1281, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
        if ( _R14->data.anonymous.buffer[86] )
        {
          v295 = "ignore event";
          if ( _R14->data.anonymous.buffer[87] )
            v295 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v295);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v296 | v27) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v296 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  dword ptr [rsp+300h+var_2C8], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1282, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
        }
      }
      if ( _R14->data.anonymous.buffer[28] )
      {
        Com_sprintf(dest, 0x100ui64, "Allow Cause to Drive Velocity");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v301 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v301 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1283, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v306 = "LocalSpace";
      if ( _R14->data.anonymous.buffer[32] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+64h]
          vmovss  xmm1, dword ptr [r14+60h]
          vmovss  xmm2, dword ptr [r14+5Ch]
          vmovss  xmm3, dword ptr [r14+4Ch]
          vmovss  xmm4, dword ptr [r14+48h]
          vmovss  xmm5, dword ptr [r14+44h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+300h+var_2B8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  qword ptr [rsp+300h+adjust], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+300h+var_2C8], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  qword ptr [rsp+300h+shadow], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+300h+forceColor], xmm4
        }
        if ( _R14->data.anonymous.buffer[30] )
          v306 = "Worldspace";
        __asm { vmovsd  [rsp+300h+fmt], xmm5 }
        Com_sprintf(dest, 0x100ui64, "%s LinVel: (%.2f, %.2f, %.2f) to (%.2f, %.2f, %.2f)", v306, fmtk, forceColorb, shadowa, v1284, adjust, v1391);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+4Ch]
          vmovss  xmm1, dword ptr [r14+48h]
          vmovss  xmm2, dword ptr [r14+44h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+300h+shadow], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+forceColor], xmm1
        }
        if ( _R14->data.anonymous.buffer[30] )
          v306 = "Worldspace";
        __asm { vmovsd  [rsp+300h+fmt], xmm2 }
        Com_sprintf(dest, 0x100ui64, "%s LinVel: (%.2f, %.2f, %.2f)", v306, fmtl, forceColorc, shadowb);
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v319 | v320) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v319 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1285, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v331 = "LocalSpace";
      if ( _R14->data.anonymous.buffer[33] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+70h]
          vmovss  xmm1, dword ptr [r14+6Ch]
          vmovss  xmm2, dword ptr [r14+68h]
          vmovss  xmm3, dword ptr [r14+58h]
          vmovss  xmm4, dword ptr [r14+54h]
          vmovss  xmm5, dword ptr [r14+50h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+300h+var_2B8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  qword ptr [rsp+300h+adjust], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+300h+var_2C8], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  qword ptr [rsp+300h+shadow], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+300h+forceColor], xmm4
        }
        if ( _R14->data.anonymous.buffer[31] )
          v331 = "Worldspace";
        __asm { vmovsd  [rsp+300h+fmt], xmm5 }
        Com_sprintf(dest, 0x100ui64, "%s AngVel: (%.2f, %.2f, %.2f) to (%.2f, %.2f, %.2f)", v331, fmtm, forceColord, shadowc, v1286, adjusta, v1392);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+58h]
          vmovss  xmm1, dword ptr [r14+54h]
          vmovss  xmm2, dword ptr [r14+50h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+300h+shadow], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+forceColor], xmm1
        }
        if ( _R14->data.anonymous.buffer[31] )
          v331 = "Worldspace";
        __asm { vmovsd  [rsp+300h+fmt], xmm2 }
        Com_sprintf(dest, 0x100ui64, "%s AngVel: (%.2f, %.2f, %.2f)", v331, fmtn, forceColore, shadowd);
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v344 | v345) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v344 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1287, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      effectAlias = _R14->data.spawnDynent.effectAlias;
      if ( effectAlias && *effectAlias )
      {
        Com_sprintf(dest, 0x100ui64, "Effect Alias:%s", effectAlias);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v357 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v357 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1288, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      particleSystemDef = _R14->data.spawnDynent.effectDef.particleSystemDef;
      if ( !particleSystemDef )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Effect Def:%s", particleSystemDef->name);
      goto LABEL_742;
    case Scriptable_EventType_PFX:
      if ( _R14->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v363 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v363 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1289, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v368 = _R14->data.particleFX.effectAlias;
      if ( v368 && *v368 )
      {
        Com_sprintf(dest, 0x100ui64, "Effect Alias:%s", v368);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v369 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v369 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1290, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v374 = &_R14->data.particleFX.effectDef.particleSystemDef->name;
      if ( v374 )
      {
        Com_sprintf(dest, 0x100ui64, "Effect Def:%s", *v374);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v375 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v375 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1291, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.random.eventBCount )
      {
        v380 = 0;
        LODWORD(v1397) = 0;
        do
        {
          v381 = *(_DWORD *)(_R14->data.disablePhysicsSubShape.mutableShapeHash + 4i64 * v380);
          v382 = SL_ConvertToString(v381);
          LODWORD(fmt) = v381;
          Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v382, fmt);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v383 | v27) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v383 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  dword ptr [rsp+300h+var_2C8], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1292, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          v380 = (_DWORD)v1397 + 1;
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
          LODWORD(v1397) = v380;
        }
        while ( v380 < _R14->data.random.eventBCount );
        if ( _R14->data.anonymous.buffer[64] )
        {
          v388 = "ignore event";
          if ( _R14->data.anonymous.buffer[65] )
            v388 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v388);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v389 | v27) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v389 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  dword ptr [rsp+300h+var_2C8], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1293, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
        }
      }
      v394 = "Don't use tag angles";
      if ( _R14->data.anonymous.buffer[36] )
        v394 = "Use Tag Angles";
      Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, v394);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v395 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v395 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1294, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+58h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Loop Rate:%.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v403 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v403 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1295, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( _R14->data.anonymous.buffer[60] )
      {
        v408 = "Stop on exit";
        if ( _R14->data.anonymous.buffer[68] )
          v408 = "Kill on exit";
        Com_sprintf(dest, 0x100ui64, "Oneshot Looping %s", v408);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v409 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v409 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1296, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( !_R14->data.anonymous.buffer[67] )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Is a viewmodel effect");
      goto LABEL_742;
    case Scriptable_EventType_Sound:
      if ( _R14->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v414 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v414 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1297, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      soundAlias = _R14->data.sound.soundAlias;
      if ( soundAlias && *soundAlias )
      {
        Com_sprintf(dest, 0x100ui64, "Sound Alias:%s", soundAlias);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v420 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v420 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1298, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v425 = _R14->data.sound.tagName;
      if ( v425 && *v425 )
      {
        LODWORD(fmt) = _R14->data.random.eventBCount;
        Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v425, fmt);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v426 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v426 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1299, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
        if ( _R14->data.anonymous.buffer[34] )
        {
          v431 = "ignore event";
          if ( _R14->data.anonymous.buffer[35] )
            v431 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v431);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v432 | v27) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v432 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  dword ptr [rsp+300h+var_2C8], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1300, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
        }
      }
      if ( _R14->data.anonymous.buffer[32] )
      {
        Com_sprintf(dest, 0x100ui64, "Looping");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v437 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v437 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1301, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v442 = _R14->data.particleFX.effectAlias;
      if ( v442 && *v442 )
      {
        Com_sprintf(dest, 0x100ui64, "Explosion Refl Class:%s", v442);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v443 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v443 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1302, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm6, xmm0
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v449 = _R14->data.anonymous.buffer[48] == 0;
      if ( _R14->data.anonymous.buffer[48] )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [r14+54h]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x100ui64, "Ground Trace of %.2f", *(double *)&_XMM3);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v453 | v449) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v453 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1303, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      __asm
      {
        vmovss  xmm2, dword ptr [r14+58h]
        vucomiss xmm2, xmm8
      }
      if ( v449 )
      {
        __asm { vucomiss xmm8, dword ptr [r14+5Ch] }
        if ( v449 )
        {
          __asm { vucomiss xmm8, dword ptr [r14+60h] }
          if ( v449 )
            goto LABEL_747;
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+60h]
        vmovss  xmm1, dword ptr [r14+5Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+forceColor], xmm0
        vmovsd  [rsp+300h+fmt], xmm1
        vcvtss2sd xmm3, xmm2, xmm2
      }
      v273 = "World Offset: (%.2f %.2f %.2f)";
      goto LABEL_209;
    case Scriptable_EventType_Explosion:
      if ( _R14->data.anonymous.buffer[36] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v490 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v490 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1308, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v495 = _R14->data.script.notification;
      v496 = 0;
      v497 = v495 == NULL;
      if ( v495 && (v496 = 0, v497 = *v495 == 0, *v495) )
      {
        LODWORD(fmt) = _R14->data.script.scrNotification;
        Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v495, fmt);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v498 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v498 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1309, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm2, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm2
        }
        v496 = 0;
        v497 = _R14->data.anonymous.buffer[37] == 0;
        if ( _R14->data.anonymous.buffer[37] )
        {
          v503 = "ignore event";
          if ( _R14->data.anonymous.buffer[38] )
            v503 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v503);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v496 | v497) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v496 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  dword ptr [rsp+300h+var_2C8], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1310, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm2, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm2
          }
        }
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [rdi]; y }
      }
      __asm
      {
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v496 | v497) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v496 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1311, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+38h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Radius:%.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v513 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v513 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1312, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+3Ch]
        vmovss  xmm1, dword ptr [r14+40h]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r9, xmm3
        vmovsd  [rsp+300h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "Damage: Outer:%.2f Inner:%.2f", *(double *)&_XMM3, *(double *)&fmto);
      goto LABEL_742;
    case Scriptable_EventType_Light:
      __asm
      {
        vmovss  xmm0, dword ptr [r14+20h]; jumptable 00000001414B9E7C case 15
        vmovss  xmm1, dword ptr [r14+24h]
        vcomiss xmm1, xmm0
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      if ( v26 | v27 )
      {
        Com_sprintf(dest, 0x100ui64, "Intensity Scale:%.2f", *(double *)&_XMM3);
      }
      else
      {
        __asm
        {
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+300h+fmt], xmm0
        }
        Com_sprintf(dest, 0x100ui64, "Intensity Scale randomly selected between %.2f and %.2f", *(double *)&_XMM3, *(double *)&fmtp);
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v527 | v528) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v527 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1313, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14+28h]
        vmovss  xmm2, dword ptr [r14+2Ch]
        vcomiss xmm2, xmm1
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      if ( v527 | v528 )
      {
        Com_sprintf(dest, 0x100ui64, "Radius:%.2f", *(double *)&_XMM3);
      }
      else
      {
        __asm
        {
          vcvtss2sd xmm0, xmm2, xmm2
          vmovsd  [rsp+300h+fmt], xmm0
        }
        Com_sprintf(dest, 0x100ui64, "Radius randomly selected between %.2f and %.2f", *(double *)&_XMM3, *(double *)&fmtq);
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v538 | v539) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v538 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1314, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( _R14->data.anonymous.buffer[16] )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14+34h]
          vmovups [rsp+300h+var_2A0+8], xmm0
        }
        LinearToGammaColor_Srgb((vec3_t *)&v1399);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+300h+var_290+4]
          vmovss  xmm1, dword ptr [rsp+300h+var_290]
          vmovss  xmm3, dword ptr [rsp+300h+var_2A0+8]
          vmovss  xmm2, dword ptr [rsp+300h+var_2A0+0Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+300h+shadow], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+forceColor], xmm1
          vmovq   r9, xmm3
          vmovsd  [rsp+300h+fmt], xmm2
        }
        Com_sprintf(dest, 0x100ui64, "Color: R:%.2f G:%.2f B:%.2f A:%.2f", *(double *)&_XMM3, *(double *)&fmtr, forceColort, shadowo);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v555 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v555 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1315, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( !_R14->data.anonymous.buffer[36] )
        goto LABEL_747;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+48h]
        vmovss  xmm1, dword ptr [r14+4Ch]
        vcomiss xmm1, xmm0
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      if ( _R14->data.anonymous.buffer[36] )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+300h+fmt], xmm0
        }
        Com_sprintf(dest, 0x100ui64, "Transmission Time randomly selected between %.2f and %.2f", *(double *)&_XMM3, *(double *)&fmts);
      }
      else
      {
        Com_sprintf(dest, 0x100ui64, "Transmission Time:%.2f", *(double *)&_XMM3);
      }
      goto LABEL_742;
    case Scriptable_EventType_Sun:
      if ( _R14->data.anonymous.buffer[0] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+24h]
          vmovss  xmm1, dword ptr [r14+28h]
          vcomiss xmm1, xmm0
          vcvtss2sd xmm3, xmm0, xmm0
          vmovq   r9, xmm3
        }
        if ( _R14->data.anonymous.buffer[0] )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm1, xmm1
            vmovsd  [rsp+300h+fmt], xmm0
          }
          Com_sprintf(dest, 0x100ui64, "Intensity Override randomly selected between %.2f and %.2f", *(double *)&_XMM3, *(double *)&fmtt);
        }
        else
        {
          Com_sprintf(dest, 0x100ui64, "Intensity Override:%.2f", *(double *)&_XMM3);
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v569 | v570) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v569 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1316, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.anonymous.buffer[12] )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14+30h]
          vmovups [rsp+300h+var_290+8], xmm0
        }
        LinearToGammaColor_Srgb((vec3_t *)&v1400);
        __asm
        {
          vmovss  xmm0, [rbp+200h+var_27C]
          vmovss  xmm1, [rbp+200h+var_280]
          vmovss  xmm3, dword ptr [rsp+300h+var_290+8]
          vmovss  xmm2, dword ptr [rsp+300h+var_290+0Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+300h+shadow], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+forceColor], xmm1
          vmovq   r9, xmm3
          vmovsd  [rsp+300h+fmt], xmm2
        }
        Com_sprintf(dest, 0x100ui64, "Color: R:%.2f G:%.2f B:%.2f A:%.2f", *(double *)&_XMM3, *(double *)&fmtu, forceColoru, shadowp);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v586 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v586 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1317, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.anonymous.buffer[32] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+44h]
          vmovss  xmm1, dword ptr [r14+48h]
          vcomiss xmm1, xmm0
          vcvtss2sd xmm3, xmm0, xmm0
          vmovq   r9, xmm3
        }
        if ( _R14->data.anonymous.buffer[32] )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm1, xmm1
            vmovsd  [rsp+300h+fmt], xmm0
          }
          Com_sprintf(dest, 0x100ui64, "Transmission Time randomly selected between %.2f and %.2f", *(double *)&_XMM3, *(double *)&fmtv);
        }
        else
        {
          Com_sprintf(dest, 0x100ui64, "Transmission Time:%.2f", *(double *)&_XMM3);
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v595 | v596) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v595 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1318, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( !_R14->data.anonymous.buffer[60] )
        goto LABEL_747;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+50h]
        vmovss  xmm1, dword ptr [r14+4Ch]
        vcomiss xmm0, xmm1
        vmovss  xmm9, cs:__real@42652ee0
      }
      if ( _R14->data.anonymous.buffer[60] )
      {
        __asm
        {
          vmulss  xmm1, xmm1, xmm9
          vmulss  xmm0, xmm0, xmm9
          vcvtss2sd xmm3, xmm1, xmm1
          vcvtss2sd xmm2, xmm0, xmm0
          vmovq   r9, xmm3
          vmovsd  [rsp+300h+fmt], xmm2
        }
        Com_sprintf(dest, 0x100ui64, "Pitch randomly selected between %.2f and %.2f", *(double *)&_XMM3, *(double *)&fmtw);
      }
      else
      {
        __asm
        {
          vcvtss2sd xmm3, xmm1, xmm1
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x100ui64, "Pitch:%.2f", *(double *)&_XMM3);
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v607 | v608) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v607 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1319, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm2, dword ptr [r14+58h]
        vmovss  xmm1, dword ptr [r14+54h]
        vcomiss xmm2, xmm1
      }
      if ( v607 | v608 )
      {
        __asm
        {
          vcvtss2sd xmm3, xmm1, xmm1
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x100ui64, "Heading:%.2f", *(double *)&_XMM3);
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm1, xmm9
          vmulss  xmm0, xmm2, xmm9
          vcvtss2sd xmm3, xmm1, xmm1
          vcvtss2sd xmm2, xmm0, xmm0
          vmovq   r9, xmm3
          vmovsd  [rsp+300h+fmt], xmm2
        }
        Com_sprintf(dest, 0x100ui64, "Heading randomly selected between %.2f and %.2f", *(double *)&_XMM3, *(double *)&fmtx);
      }
      goto LABEL_742;
    case Scriptable_EventType_Rumble:
      if ( _R14->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v627 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v627 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1320, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v632 = _R14->data.sound.soundAlias;
      if ( v632 && *v632 )
      {
        Com_sprintf(dest, 0x100ui64, "Rumble: %s", v632);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v633 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v633 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1321, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v638 = _R14->data.sound.tagName;
      if ( !v638 || !*v638 )
        goto LABEL_747;
      LODWORD(fmt) = _R14->data.random.eventBCount;
      Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v638, fmt);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v639 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v639 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1322, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( !_R14->data.anonymous.buffer[40] )
        goto LABEL_747;
      v644 = "ignore event";
      if ( _R14->data.anonymous.buffer[41] )
        v644 = "use root";
      goto LABEL_469;
    case Scriptable_EventType_Screenshake:
      if ( _R14->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v645 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v645 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1323, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v650 = _R14->data.sound.tagName;
      if ( v650 && *v650 )
      {
        LODWORD(fmt) = _R14->data.random.eventBCount;
        Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v650, fmt);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v651 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v651 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1324, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
        if ( _R14->data.anonymous.buffer[64] )
        {
          v656 = "ignore event";
          if ( _R14->data.anonymous.buffer[65] )
            v656 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v656);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v657 | v27) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v657 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  dword ptr [rsp+300h+var_2C8], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1325, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
        }
      }
      if ( _R14->data.anonymous.buffer[1] )
      {
        Com_sprintf(dest, 0x100ui64, "Earthquake");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v662 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v662 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1326, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.anonymous.buffer[2] )
      {
        Com_sprintf(dest, 0x100ui64, "ScreenShake");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v667 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v667 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1327, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+3Ch]
        vmovss  xmm3, dword ptr [r14+34h]
        vmovss  xmm1, dword ptr [r14+38h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+forceColor], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+300h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "Duration:%.2f Up:%.2f Down:%.2f", *(double *)&_XMM3, *(double *)&fmty, forceColorv);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v679 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v679 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1328, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "Radius:%d", _R14->data.particleFX.scrEndTagCount);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v684 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v684 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1329, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+44h]
      }
      LODWORD(shadow) = _R14->data.screenshake.scaleRoll;
      LODWORD(forceColorf) = _R14->data.screenshake.scaleYaw;
      __asm
      {
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      LODWORD(fmtb) = _R14->data.screenshake.scalePitch;
      Com_sprintf(dest, 0x100ui64, "Scale: Earthquake%.2f Pitch:%d Yaw:%d Roll:%d", *(double *)&_XMM3, fmtb, forceColorf, shadow);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v692 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v692 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1330, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      LODWORD(forceColorg) = _R14->data.screenshake.frequencyRoll;
      LODWORD(fmtc) = _R14->data.screenshake.frequencyYaw;
      Com_sprintf(dest, 0x100ui64, "Frequency: Pitch:%d Yaw:%d Roll:%d", (unsigned int)_R14->data.screenshake.frequencyPitch, fmtc, forceColorg);
      goto LABEL_742;
    case Scriptable_EventType_PartDamage:
      v697 = &_R14->data.random.eventsB->base.name;
      if ( v697 && *v697 )
      {
        Com_sprintf(dest, 0x100ui64, "Referenced part: %s", *v697);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v698 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v698 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1331, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v703 = 0;
      v704 = _R14->data.anonymous.buffer[8] == 0;
      if ( _R14->data.anonymous.buffer[8] )
      {
        Com_sprintf(dest, 0x100ui64, "Destroy");
        goto LABEL_742;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+24h]
        vcomiss xmm0, xmm8
      }
      if ( _R14->data.anonymous.buffer[8] )
      {
        __asm
        {
          vcvtss2sd xmm3, xmm0, xmm0
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x100ui64, "Immediate Amount:%.2f", *(double *)&_XMM3);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v703 | v704) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v703 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1332, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [r14+2Ch]
        vcomiss xmm1, xmm8
      }
      if ( v703 | v704 )
        goto LABEL_747;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+30h]
        vcvtss2sd xmm3, xmm1, xmm1
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+300h+fmt], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "Over Time: Amount:%.2f every %.2f seconds", *(double *)&_XMM3, *(double *)&fmtz);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v717 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v717 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1333, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      eventStreamBufferOffsetClient = _R14->data.partDamage.eventStreamBufferOffsetClient;
      eventStreamBufferOffsetServer = _R14->data.partDamage.eventStreamBufferOffsetServer;
      goto LABEL_28;
    case Scriptable_EventType_SetMayhem:
      v722 = (const char **)_R14->data.script.notification;
      if ( v722 )
        v723 = *v722;
      else
        v723 = "None";
      Com_sprintf(dest, 0x100ui64, "Mayhem asset name:%s", v723);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v724 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v724 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1334, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", _R14->data.wait.eventStreamBufferOffsetServer);
      goto LABEL_742;
    case Scriptable_EventType_PlayMayhem:
      tireIndex = _R14->data.vehicleBlowUpTire.tireIndex;
      v1398[0] = (__int64)"Play";
      v1398[1] = (__int64)"Pause";
      Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, v1398[tireIndex]);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v730 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v730 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1335, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", _R14->data.playMayhem.eventStreamBufferOffsetClient);
      goto LABEL_742;
    case Scriptable_EventType_ViewmodelShaderParam:
      v735 = _R14->data.vehicleBlowUpTire.tireIndex;
      v1402[0] = (__int64)"Unknown";
      v1402[1] = (__int64)"ScrollRateX";
      v1402[2] = (__int64)"ScrollRateY";
      v1402[3] = (__int64)"ScrollRateRot";
      v1402[4] = (__int64)"Rotation";
      v1402[5] = (__int64)"TilingX";
      v1402[6] = (__int64)"TilingY";
      v1402[7] = (__int64)"Alpha";
      v1402[8] = (__int64)"Emissive";
      v1402[9] = (__int64)"Atlas Frame";
      v1402[10] = (__int64)"Placeholder 1";
      v1402[11] = (__int64)"Placeholder 2";
      v1402[12] = (__int64)"Placeholder 3";
      v1402[13] = (__int64)"Placeholder 4";
      Com_sprintf(dest, 0x100ui64, "Param: %s", (const char *)v1402[v735]);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v736 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v736 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1336, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+24h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Values: %.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v744 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v744 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1337, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14+38h]
        vcomiss xmm1, xmm8
      }
      if ( v744 )
        goto LABEL_747;
      __asm
      {
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "TransitionTime %.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v752 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v752 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1338, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", _R14->data.viewmodelShaderParam.eventStreamBufferOffsetClient);
      goto LABEL_742;
    case Scriptable_EventType_ViewmodelChangeImage:
      v757 = _R14->data.vehicleBlowUpTire.tireIndex;
      v1397 = "Unknown";
      LODWORD(fmt) = _R14->data.stateChange.stateIdx;
      Com_sprintf(dest, 0x100ui64, "%s to %i", v1398[v757 - 1], fmt);
      goto LABEL_742;
    case Scriptable_EventType_ClientViewSelector:
      if ( _R14->data.stateChange.partReference.flatId )
      {
        Com_sprintf(dest, 0x100ui64, "First Person: %i %s");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v759 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v759 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1339, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vmovss  [rsp+300h+shadow], xmm6
          vmovss  [rsp+300h+forceColor], xmm9
        }
        ScriptableBg_DrawDebugScriptableEventsDef(_R14->data.random.eventsA, _R14->data.stateChange.partReference.flatId, scrPlace, _R15, _RDI, *(float *)&forceColorw, *(float *)&shadowq);
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vsubss  xmm1, xmm0, xmm9
          vmovss  dword ptr [r15], xmm1
        }
      }
      if ( _R14->data.random.eventBCount )
      {
        Com_sprintf(dest, 0x100ui64, "Third Person: %i %s");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v768 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v768 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1340, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vmovss  [rsp+300h+shadow], xmm6
          vmovss  [rsp+300h+forceColor], xmm9
        }
        ScriptableBg_DrawDebugScriptableEventsDef(_R14->data.random.eventsB, _R14->data.random.eventBCount, scrPlace, _R15, _RDI, *(float *)&forceColorx, *(float *)&shadowr);
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vsubss  xmm1, xmm0, xmm9
          vmovss  dword ptr [r15], xmm1
        }
      }
      if ( (_R14->base.flags & 0x200) == 0 )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", _R14->data.random.eventStreamBufferOffsetServer);
      goto LABEL_742;
    case Scriptable_EventType_TeamSelector:
      v776 = _R14->data.vehicleBlowUpTire.tireIndex;
      v1401[0] = (__int64)"All";
      v1401[1] = (__int64)"Bad";
      v1401[2] = (__int64)"Axis";
      v1401[3] = (__int64)"Allies";
      v1401[4] = (__int64)"Three";
      v1401[5] = (__int64)"Neutral";
      v1401[6] = (__int64)"Dead";
      v1401[7] = (__int64)"My_Team";
      v1401[8] = (__int64)"Enemy_Team";
      v1401[9] = (__int64)"All_But_My_Team";
      v1401[10] = (__int64)"All_But_Enemy_Team";
      v1401[11] = (__int64)"Enemy_Team_And_Me";
      v1401[12] = (__int64)"Just_Me";
      Com_sprintf(dest, 0x100ui64, "Team Filter: %s", (const char *)v1401[v776]);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v777 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v777 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1341, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( _R14->data.anonymous.buffer[4] )
      {
        Com_sprintf(dest, 0x100ui64, "Test local player, rather than scriptable");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v782 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v782 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1342, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      if ( _R14->data.teamSelector.eventPassCount )
      {
        Com_sprintf(dest, 0x100ui64, "First Person: %i %s");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v788 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v788 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1343, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vmovss  [rsp+300h+shadow], xmm6
          vmovss  [rsp+300h+forceColor], xmm9
        }
        ScriptableBg_DrawDebugScriptableEventsDef(_R14->data.teamSelector.eventsPass, _R14->data.teamSelector.eventPassCount, scrPlace, _R15, _RDI, *(float *)&forceColory, *(float *)&shadows);
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vsubss  xmm1, xmm0, xmm9
          vmovss  dword ptr [r15], xmm1
        }
      }
      if ( _R14->data.teamSelector.eventFailCount )
      {
        Com_sprintf(dest, 0x100ui64, "Third Person: %i %s");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v797 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v797 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1344, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vmovss  [rsp+300h+shadow], xmm6
          vmovss  [rsp+300h+forceColor], xmm9
        }
        ScriptableBg_DrawDebugScriptableEventsDef(_R14->data.teamSelector.eventsFail, _R14->data.teamSelector.eventFailCount, scrPlace, _R15, _RDI, *(float *)&forceColorz, *(float *)&shadowt);
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vsubss  xmm1, xmm0, xmm9
          vmovss  dword ptr [r15], xmm1
        }
      }
      v805 = _R14->base.flags;
      if ( (v805 & 0x200) == 0 )
        goto LABEL_747;
      eventStreamBufferOffsetClient = _R14->data.teamSelector.eventStreamBufferOffsetClient;
      if ( (v805 & 2) != 0 )
      {
        eventStreamBufferOffsetServer = _R14->data.teamSelector.eventStreamBufferOffsetServer;
        goto LABEL_28;
      }
      Com_sprintf(dest, 0x100ui64, "Event Buffer Offset: Client:%i", _R14->data.teamSelector.eventStreamBufferOffsetClient);
      goto LABEL_742;
    case Scriptable_EventType_AddModel:
      v806 = _R14->data.script.notification;
      if ( v806 && *v806 )
      {
        LODWORD(fmt) = _R14->data.script.scrNotification;
        Com_sprintf(dest, 0x100ui64, "Attach to Bone:%s Script:%i", v806, fmt);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v807 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v807 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1345, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v812 = _R14->data.spawnDynent.tagName;
      if ( !v812 )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Name:%s", *(_QWORD *)v812);
      goto LABEL_742;
    case Scriptable_EventType_ApplyForce:
      __asm
      {
        vmovss  xmm3, dword ptr [r14+24h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      if ( _R14->data.anonymous.buffer[1] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+44h]
          vmovss  xmm1, dword ptr [r14+40h]
          vmovss  xmm2, dword ptr [r14+3Ch]
          vmovss  xmm4, dword ptr [r14+2Ch]
          vmovss  xmm5, dword ptr [r14+28h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+300h+adjust], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+300h+var_2C8], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+shadow], xmm2
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+300h+forceColor], xmm4
          vmovsd  [rsp+300h+fmt], xmm5
        }
        Com_sprintf(dest, 0x100ui64, "Position: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", *(double *)&_XMM3, *(double *)&fmtba, forceColorba, shadowu, v1346, adjustf);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v826 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v826 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1347, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm1, dword ptr [r14+50h]
          vmovss  xmm2, dword ptr [r14+4Ch]
          vmovss  xmm0, dword ptr [r14+48h]
          vmovss  xmm3, dword ptr [r14+38h]
          vmovss  xmm4, dword ptr [r14+34h]
          vmovss  xmm5, dword ptr [r14+30h]
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+300h+var_2B8], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+adjust], xmm2
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+300h+var_2C8], xmm0
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  qword ptr [rsp+300h+shadow], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+300h+forceColor], xmm4
        }
        v843 = "Localspace";
        if ( _R14->data.anonymous.buffer[0] )
          v843 = "Worldspace";
        __asm { vmovsd  [rsp+300h+fmt], xmm5 }
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", v843, *(double *)&fmtbb, forceColorh, shadowe, v1348, adjustb, v1393);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]
          vmovaps xmm0, xmm2
        }
        goto LABEL_604;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+2Ch]
        vmovss  xmm1, dword ptr [r14+28h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+forceColor], xmm0
        vmovsd  [rsp+300h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "Position: (%.2f %.2f %.2f)", *(double *)&_XMM3, *(double *)&fmtbc, forceColorbb);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v852 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v852 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1349, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14+38h]
        vmovss  xmm2, dword ptr [r14+34h]
        vmovss  xmm0, dword ptr [r14+30h]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+shadow], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  qword ptr [rsp+300h+forceColor], xmm2
        vmovsd  [rsp+300h+fmt], xmm0
      }
      v863 = "Localspace";
      goto LABEL_601;
    case Scriptable_EventType_ApplyAngularForce:
      v863 = "Localspace";
      if ( _R14->data.anonymous.buffer[1] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+38h]
          vmovss  xmm1, dword ptr [r14+34h]
          vmovss  xmm2, dword ptr [r14+30h]
          vmovss  xmm3, dword ptr [r14+2Ch]
          vmovss  xmm4, dword ptr [r14+28h]
          vmovss  xmm5, dword ptr [r14+24h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+300h+var_2B8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  qword ptr [rsp+300h+adjust], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+300h+var_2C8], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  qword ptr [rsp+300h+shadow], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+300h+forceColor], xmm4
        }
        if ( _R14->data.anonymous.buffer[0] )
          v863 = "Worldspace";
        __asm { vmovsd  [rsp+300h+fmt], xmm5 }
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", v863, fmtbd, forceColorj, shadowg, v1351, adjustc, v1394);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]
          vmovaps xmm0, xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+2Ch]
          vmovss  xmm1, dword ptr [r14+28h]
          vmovss  xmm2, dword ptr [r14+24h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+300h+shadow], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+forceColor], xmm1
          vmovsd  [rsp+300h+fmt], xmm2
        }
LABEL_601:
        if ( _R14->data.anonymous.buffer[0] )
          v863 = "Worldspace";
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f)", v863, fmtd, forceColori, shadowf);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovaps xmm2, xmm0; y
        }
      }
LABEL_604:
      __asm { vcomiss xmm2, xmm8 }
      if ( !(v844 | v845) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v844 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1350, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm { vaddss  xmm0, xmm6, xmm0 }
      goto LABEL_746;
    case Scriptable_EventType_ApplyConstantForce:
      __asm
      {
        vmovss  xmm3, dword ptr [r14+24h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      if ( _R14->data.anonymous.buffer[1] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+44h]
          vmovss  xmm1, dword ptr [r14+40h]
          vmovss  xmm2, dword ptr [r14+3Ch]
          vmovss  xmm4, dword ptr [r14+2Ch]
          vmovss  xmm5, dword ptr [r14+28h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+300h+adjust], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+300h+var_2C8], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+shadow], xmm2
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+300h+forceColor], xmm4
          vmovsd  [rsp+300h+fmt], xmm5
        }
        Com_sprintf(dest, 0x100ui64, "Position: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", *(double *)&_XMM3, *(double *)&fmtbe, forceColorbc, shadowv, v1352, adjustg);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v900 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v900 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1353, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm1, dword ptr [r14+50h]
          vmovss  xmm2, dword ptr [r14+4Ch]
          vmovss  xmm0, dword ptr [r14+48h]
          vmovss  xmm3, dword ptr [r14+38h]
          vmovss  xmm4, dword ptr [r14+34h]
          vmovss  xmm5, dword ptr [r14+30h]
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+300h+var_2B8], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+adjust], xmm2
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+300h+var_2C8], xmm0
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  qword ptr [rsp+300h+shadow], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+300h+forceColor], xmm4
        }
        v917 = "Localspace";
        if ( _R14->data.anonymous.buffer[0] )
          v917 = "Worldspace";
        __asm { vmovsd  [rsp+300h+fmt], xmm5 }
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", v917, *(double *)&fmtbf, forceColork, shadowh, v1354, adjustd, v1395);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]
          vmovaps xmm0, xmm2
        }
        goto LABEL_627;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+2Ch]
        vmovss  xmm1, dword ptr [r14+28h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+forceColor], xmm0
        vmovsd  [rsp+300h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "Position: (%.2f %.2f %.2f)", *(double *)&_XMM3, *(double *)&fmtbg, forceColorbd);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v926 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v926 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1355, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14+38h]
        vmovss  xmm2, dword ptr [r14+34h]
        vmovss  xmm0, dword ptr [r14+30h]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+shadow], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  qword ptr [rsp+300h+forceColor], xmm2
        vmovsd  [rsp+300h+fmt], xmm0
      }
      v937 = "Localspace";
      goto LABEL_624;
    case Scriptable_EventType_ApplyConstantAngularForce:
      v937 = "Localspace";
      if ( _R14->data.anonymous.buffer[1] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+38h]
          vmovss  xmm1, dword ptr [r14+34h]
          vmovss  xmm2, dword ptr [r14+30h]
          vmovss  xmm3, dword ptr [r14+2Ch]
          vmovss  xmm4, dword ptr [r14+28h]
          vmovss  xmm5, dword ptr [r14+24h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+300h+var_2B8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  qword ptr [rsp+300h+adjust], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+300h+var_2C8], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  qword ptr [rsp+300h+shadow], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+300h+forceColor], xmm4
        }
        if ( _R14->data.anonymous.buffer[0] )
          v937 = "Worldspace";
        __asm { vmovsd  [rsp+300h+fmt], xmm5 }
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", v937, fmtbh, forceColorm, shadowj, v1357, adjuste, v1396);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]
          vmovaps xmm0, xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+2Ch]
          vmovss  xmm1, dword ptr [r14+28h]
          vmovss  xmm2, dword ptr [r14+24h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+300h+shadow], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+300h+forceColor], xmm1
          vmovsd  [rsp+300h+fmt], xmm2
        }
LABEL_624:
        if ( _R14->data.anonymous.buffer[0] )
          v937 = "Worldspace";
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f)", v937, fmte, forceColorl, shadowi);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovaps xmm2, xmm0; y
        }
      }
LABEL_627:
      __asm { vcomiss xmm2, xmm8 }
      if ( !(v918 | v919) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v918 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1356, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm6, xmm0
        vmovss  dword ptr [rdi], xmm0
      }
      eventStreamBufferOffsetClient = _R14->data.applyConstantForce.eventStreamBufferOffsetClient;
      eventStreamBufferOffsetServer = _R14->data.applyConstantForce.eventStreamBufferOffsetServer;
LABEL_28:
      LODWORD(fmt) = eventStreamBufferOffsetClient;
      Com_sprintf(dest, 0x100ui64, "Event Buffer Offset: Server:%i Client:%i", eventStreamBufferOffsetServer, fmt);
LABEL_742:
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v34 | v35) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v34 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1382, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm { vaddss  xmm0, xmm0, xmm6 }
LABEL_746:
      __asm { vmovss  dword ptr [rdi], xmm0 }
LABEL_747:
      _R11 = &v1404;
      __asm
      {
        vmovaps xmm6, xmmword ptr [r11-18h]
        vmovaps xmm7, xmmword ptr [r11-28h]
        vmovaps xmm8, xmmword ptr [r11-38h]
        vmovaps xmm9, xmmword ptr [r11-48h]
      }
      return;
    case Scriptable_EventType_DynamicBoneNoiseCurve:
      if ( _R14->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v463 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v463 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1304, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      name = _R14->data.stateChange.part->name;
      if ( name && *name )
      {
        Com_sprintf(dest, 0x100ui64, "XAnimCurve: %s", name);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v469 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v469 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1305, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      __asm
      {
        vmovss  xmm3, dword ptr [r14+30h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Strength Multiplier: %.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v477 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v477 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1306, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+34h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Rate Multiplier: %.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v485 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v485 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1307, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( !_R14->data.anonymous.buffer[24] )
        goto LABEL_747;
      Com_sprintf(dest, 0x100ui64, "Is Viewmodel");
      goto LABEL_742;
    case Scriptable_EventType_Move:
      __asm
      {
        vmovss  xmm0, dword ptr [r14+28h]; jumptable 00000001414B9E7C case 34
        vmovss  xmm3, dword ptr [r14+20h]
        vmovss  xmm1, dword ptr [r14+24h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+forceColor], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+300h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "orignOffset: (%.2f %.2f %.2f)", *(double *)&_XMM3, *(double *)&fmtbi, forceColorbe);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v968 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v968 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1358, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14+34h]
        vmovss  xmm3, dword ptr [r14+2Ch]
        vmovss  xmm2, dword ptr [r14+30h]
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  qword ptr [rsp+300h+forceColor], xmm1
        vmovq   r9, xmm3
        vmovsd  [rsp+300h+fmt], xmm2
      }
      Com_sprintf(dest, 0x100ui64, "angleOffset: (%.2f %.2f %.2f)", *(double *)&_XMM3, *(double *)&fmtbj, forceColorbf);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v980 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v980 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1359, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm1, dword ptr [r14+40h]
        vmovss  xmm2, dword ptr [r14+3Ch]
        vmovss  xmm3, dword ptr [r14+38h]
      }
      v273 = "seconds: %.2f, accel %.2f decel %.2f";
LABEL_208:
      __asm
      {
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  qword ptr [rsp+300h+forceColor], xmm1
        vmovsd  [rsp+300h+fmt], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
      }
LABEL_209:
      __asm { vmovq   r9, xmm3 }
      Com_sprintf(dest, 0x100ui64, v273, _R9, fmta, forceColora);
      goto LABEL_742;
    case Scriptable_EventType_Footstep:
      v985 = _R14->data.spawnDynent.tagName;
      if ( v985 && *v985 )
      {
        Com_sprintf(dest, 0x100ui64, "Sound Alias:%s", v985);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v986 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v986 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1360, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v991 = _R14->data.script.notification;
      if ( !v991 || !*v991 )
        goto LABEL_747;
      LODWORD(fmt) = _R14->data.script.scrNotification;
      Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v991, fmt);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v992 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v992 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1361, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( !_R14->data.anonymous.buffer[24] )
        goto LABEL_747;
      v644 = "ignore event";
      if ( _R14->data.anonymous.buffer[25] )
        v644 = "use root";
LABEL_469:
      Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v644);
      goto LABEL_742;
    case Scriptable_EventType_GravityArc:
      __asm
      {
        vmovss  xmm0, dword ptr [r14+28h]; jumptable 00000001414B9E7C case 36
        vmovss  xmm3, dword ptr [r14+20h]
        vmovss  xmm1, dword ptr [r14+24h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+300h+forceColor], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+300h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "angleOffset: (%.2f %.2f %.2f)", *(double *)&_XMM3, *(double *)&fmtbk, forceColorbg);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1004 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1004 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1362, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+2Ch]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "gravityScale: %.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1012 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1012 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1363, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+30h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "upwardVelocity: %.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1020 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1020 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1364, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v1025 = "n";
      v1026 = "n";
      if ( _R14->data.anonymous.buffer[24] )
        v1026 = "y";
      Com_sprintf(dest, 0x100ui64, "endAtInitialPose: %s", v1026);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1027 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1027 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1365, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v1032 = "n";
      if ( _R14->data.anonymous.buffer[25] )
        v1032 = "y";
      Com_sprintf(dest, 0x100ui64, "randomSpin: %s", v1032);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1033 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1033 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1366, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v1038 = "playLootTrailFX: %s";
      if ( _R14->data.anonymous.buffer[26] )
        v1025 = "y";
      goto LABEL_679;
    case Scriptable_EventType_ViewTrigger:
      __asm
      {
        vmovss  xmm0, dword ptr [r14+20h]; jumptable 00000001414B9E7C case 37
        vsqrtss xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Trigger distance: %.3f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1043 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1043 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1367, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+24h]
      }
      v1049 = "Trigger FOV cos(0.5 angle): %.3f";
      goto LABEL_684;
    case Scriptable_EventType_Objective:
      Com_sprintf(dest, 0x100ui64, "state: %d", _R14->data.anonymous.buffer[2]);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1052 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1052 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1368, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "background: %d", _R14->data.anonymous.buffer[3]);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1057 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1057 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1369, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "zOffset: %d", _R14->data.stateChange.stateIdx);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1062 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1062 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1370, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "description: %s", _R14->data.sound.soundAlias);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1067 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1067 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1371, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "icon: %s", _R14->data.objective.icon);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1072 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1072 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1372, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      Com_sprintf(dest, 0x100ui64, "label: %s", _R14->data.particleFX.effectAlias);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1077 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1077 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1373, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v1025 = "no";
      v1082 = "no";
      if ( _R14->data.anonymous.buffer[9] )
        v1082 = "yes";
      Com_sprintf(dest, 0x100ui64, "always show in world: %s", v1082);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1083 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1083 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1374, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      v1038 = "always snap to edge: %s";
      if ( _R14->data.anonymous.buffer[10] )
        v1025 = "yes";
LABEL_679:
      Com_sprintf(dest, 0x100ui64, v1038, v1025);
      goto LABEL_742;
    case Scriptable_EventType_SpatialDisable:
      v1088 = "no";
      if ( _R14->data.anonymous.buffer[0] )
        v1088 = "yes";
      Com_sprintf(dest, 0x100ui64, "Disabled: %s", v1088);
      goto LABEL_742;
    case Scriptable_EventType_Hover:
      __asm
      {
        vmovss  xmm3, dword ptr [r14+20h]; jumptable 00000001414B9E7C case 40
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "amplitudeUpDown: %f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1092 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1092 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1375, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+24h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "frequencyUpDown: %f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1100 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1100 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1376, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+28h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "frequencyPitch: %f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1108 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1108 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1377, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+2Ch]
      }
      v1049 = "frequencyYaw: %f";
      goto LABEL_684;
    case Scriptable_EventType_VehicleBlowUpTire:
      Com_sprintf(dest, 0x100ui64, "tireIndex: %d", _R14->data.stateChange.partReference.flatId);
      goto LABEL_742;
    case Scriptable_EventType_Dlc1:
      __asm
      {
        vmovss  xmm3, dword ptr [r14+20h]; jumptable 00000001414B9E7C case 42
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "dlcFloat0: %f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1116 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1116 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1378, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+24h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "dlcFloat1: %f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1124 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1124 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1379, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+28h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "dlcFloat2: %f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v1132 | v27) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v1132 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  dword ptr [rsp+300h+var_2C8], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1380, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+2Ch]
      }
      v1049 = "dlcFloat3: %f";
LABEL_684:
      __asm
      {
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, v1049, _R9);
      goto LABEL_742;
    case Scriptable_EventType_ScriptDamage:
      v1137 = _R14->data.script.notification;
      if ( v1137 && *v1137 )
      {
        LODWORD(fmt) = _R14->data.script.scrNotification;
        Com_sprintf(dest, 0x100ui64, "Name:%s Script:%i", v1137, fmt);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v1138 | v27) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v1138 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  dword ptr [rsp+300h+var_2C8], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v1381, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      Com_sprintf(dest, 0x100ui64, "Param:%i", _R14->data.objective.settings.label);
      goto LABEL_742;
    default:
      goto LABEL_747;
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableEventsDef
==============
*/
void ScriptableBg_DrawDebugScriptableEventsDef(const ScriptableEventDef *events, const unsigned int numEvents, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const dvar_t *v11; 
  const ScriptableEventDef *v16; 
  const char *string; 
  unsigned int v18; 
  const char *name; 
  char v24; 
  char v27; 
  float fmt; 
  int forceColor; 
  float v39; 
  char dest[256]; 

  v11 = DVARSTR_scriptabledebug_eventfilter;
  _RBP = x;
  _R14 = y;
  v16 = events;
  if ( !DVARSTR_scriptabledebug_eventfilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_eventfilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  string = v11->current.string;
  v18 = 0;
  if ( numEvents )
  {
    __asm
    {
      vmovaps [rsp+1E8h+var_48], xmm6
      vmovss  xmm6, [rsp+1E8h+charHeight]
      vmovaps [rsp+1E8h+var_58], xmm7
      vmovss  xmm7, [rsp+1E8h+tabWidth]
      vmovaps [rsp+1E8h+var_68], xmm8
      vmovss  xmm8, cs:__real@44870000
      vmovaps [rsp+1E8h+var_78], xmm9
      vxorps  xmm9, xmm9, xmm9
    }
    do
    {
      name = v16->base.name;
      if ( !v16->base.name || !*name || I_strempty(string) || I_stristr(name, string) )
      {
        Com_sprintf(dest, 0x100ui64, "Event %i", v18);
        __asm
        {
          vmovss  xmm2, dword ptr [r14]; y
          vcomiss xmm2, xmm9
          vmovaps xmm0, xmm2
        }
        if ( !(v24 | v27) )
        {
          __asm { vcomiss xmm2, xmm8 }
          if ( v24 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+0]; x
              vmovss  [rsp+1E8h+var_1B0], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v39, 0);
            __asm { vmovss  xmm0, dword ptr [r14] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [r14], xmm0
          vaddss  xmm1, xmm7, dword ptr [rbp+0]
          vmovss  [rsp+1E8h+forceColor], xmm6
          vmovss  dword ptr [rbp+0], xmm1
          vmovss  dword ptr [rsp+1E8h+fmt], xmm7
        }
        ScriptableBg_DrawDebugScriptableEventDef(&events[v18], scrPlace, _RBP, y, fmt, *(float *)&forceColor);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0]
          vsubss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rbp+0], xmm1
        }
      }
      ++v18;
      ++v16;
    }
    while ( v18 < numEvents );
    __asm
    {
      vmovaps xmm9, [rsp+1E8h+var_78]
      vmovaps xmm8, [rsp+1E8h+var_68]
      vmovaps xmm7, [rsp+1E8h+var_58]
      vmovaps xmm6, [rsp+1E8h+var_48]
    }
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableInstance
==============
*/
void ScriptableBg_DrawDebugScriptableInstance(const unsigned int instanceId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int v15; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v21; 
  ScriptableDef *v22; 
  unsigned int v40; 
  char v45; 
  char v62; 
  bool MapInstance; 
  ScriptableInstance *v68; 
  unsigned __int16 ffMemCost; 
  char v70; 
  unsigned __int8 flags; 
  bool IsStandaloneRequested; 
  const char *v77; 
  const char *v78; 
  const char *v79; 
  char v80; 
  int v85; 
  scr_string_t targetname; 
  const char *v87; 
  char v88; 
  scr_string_t script_linkname; 
  const char *v94; 
  char v95; 
  scr_string_t script_linkto; 
  const char *v101; 
  char v102; 
  scr_string_t script_noteworthy; 
  const char *v108; 
  char v109; 
  unsigned __int16 *lightIndices; 
  __int64 v115; 
  char v116; 
  ScriptableDef *v124; 
  char v126; 
  char v132; 
  bool v137; 
  bool v138; 
  char v161; 
  ScriptableDataType dataType; 
  const XCompositeModelDef *compositeModel; 
  const char *v168; 
  char v169; 
  ScriptableInstanceServerContext *v174; 
  const XModel *model; 
  const char *v176; 
  char v177; 
  const char *v182; 
  char v183; 
  const char *v188; 
  char v189; 
  char v194; 
  bool v199; 
  float v200; 
  unsigned int v201; 
  __int64 v202; 
  _BYTE *v203; 
  ScriptableDef *v207; 
  ScriptableInstanceContextSecure *v208; 
  char v209; 
  char v215; 
  char v220; 
  char v243; 
  ScriptableDataType v248; 
  const XCompositeModelDef *v249; 
  const char *v250; 
  char v251; 
  unsigned __int64 v256; 
  ScriptableInstanceClientContext *v257; 
  const char *v258; 
  const char *v259; 
  char v260; 
  char v261; 
  const char *v262; 
  const char *v263; 
  char v268; 
  char v269; 
  bool v274; 
  float v275; 
  const ScriptablePartDef *v276; 
  int depthTesta; 
  double depthTestb; 
  __int64 depthTest; 
  int depthTestc; 
  double depthTestd; 
  double depthTeste; 
  double durationa; 
  __int64 duration; 
  int durationb; 
  double durationc; 
  double durationd; 
  __int64 vertAlign; 
  float color; 
  float colora; 
  float colorb; 
  float colorc; 
  float colord; 
  float colore; 
  float colorf; 
  float colorg; 
  float colorh; 
  float colori; 
  float colorj; 
  float colork; 
  float colorl; 
  float colorm; 
  float colorn; 
  float coloro; 
  float colorp; 
  float colorq; 
  float colorr; 
  float colors; 
  float colort; 
  float coloru; 
  float colorv; 
  float colorw; 
  float colorx; 
  float v323; 
  float v324; 
  float v325; 
  float v326; 
  bool v327; 
  ScriptableLinkType linkedObjectType; 
  bool v329; 
  ScriptableLinkType v330; 
  bool v331; 
  char v332; 
  unsigned int linkedObjectIndex; 
  float v335; 
  unsigned int v336; 
  vec3_t runtime; 
  ScriptableInstanceContextSecure *v338; 
  ScriptableDef *def; 
  ScriptableInstance *outInstance; 
  ScriptableInstanceContextSecure *context; 
  __int64 v342; 
  vec3_t outOrigin; 
  vec3_t origin; 
  vec3_t angles; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  char dest[256]; 
  char v349; 
  void *retaddr; 

  _RAX = &retaddr;
  v342 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
  }
  _RBX = y;
  _R14 = x;
  v15 = instanceId;
  ScriptableCommon_AssertCountsInitialized();
  if ( v15 >= g_scriptableWorldCounts.totalInstanceCount )
    goto LABEL_217;
  if ( ScriptableBg_ServerContextIsPrimary(v15) )
  {
    _RAX = ScriptableSv_GetInstanceCommonContext(v15);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  dword ptr [rbp+1B0h+outOrigin], xmm0
      vmovss  xmm1, dword ptr [rax+24h]
      vmovss  dword ptr [rbp+1B0h+outOrigin+4], xmm1
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rbp+1B0h+outOrigin+8], xmm0
    }
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v15);
  }
  else
  {
    v21 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v15);
    ScriptableInstanceContextSecure::GetOrigin(v21, v15, &outOrigin);
    InstanceCommonContext = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v15);
  }
  v22 = (ScriptableDef *)InstanceCommonContext->def;
  def = v22;
  if ( !v22 )
    goto LABEL_217;
  if ( ScriptableBg_ServerContextIsPrimary(v15) )
  {
    _RDI = ScriptableSv_GetInstanceCommonContext(v15);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  dword ptr [rbp+1B0h+origin], xmm0
      vmovss  xmm1, dword ptr [rax+24h]
      vmovss  dword ptr [rbp+1B0h+origin+4], xmm1
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rbp+1B0h+origin+8], xmm0
      vmovss  xmm1, dword ptr [rax+2Ch]
      vmovss  dword ptr [rbp+1B0h+angles], xmm1
      vmovss  xmm0, dword ptr [rax+30h]
      vmovss  dword ptr [rbp+1B0h+angles+4], xmm0
      vmovss  xmm1, dword ptr [rax+34h]
      vmovss  dword ptr [rbp+1B0h+angles+8], xmm1
    }
  }
  else
  {
    _RDI = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v15);
    ScriptableInstanceContextSecure::GetOrigin(_RDI, v15, &origin);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rbp+1B0h+angles], xmm0
      vmovss  xmm1, dword ptr [rdi+30h]
      vmovss  dword ptr [rbp+1B0h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rdi+34h]
      vmovss  dword ptr [rbp+1B0h+angles+8], xmm0
    }
  }
  _RAX = BG_XCompositeModel_GetScriptableModel(_RDI);
  __asm { vmovss  xmm12, cs:__real@3f800000 }
  if ( _RAX )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+2Ch]
      vmovups xmmword ptr [rbp+1B0h+bounds.midPoint], xmm0
      vmovsd  xmm1, qword ptr [rax+3Ch]
      vmovsd  qword ptr [rbp+1B0h+bounds.halfSize+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1B0h+origin]
      vmovss  dword ptr [rbp+1B0h+bounds.midPoint], xmm0
      vmovss  xmm1, dword ptr [rbp+1B0h+origin+4]
      vmovss  dword ptr [rbp+1B0h+bounds.midPoint+4], xmm1
      vmovss  xmm0, dword ptr [rbp+1B0h+origin+8]
      vmovss  dword ptr [rbp+1B0h+bounds.midPoint+8], xmm0
      vmovss  dword ptr [rbp+1B0h+bounds.halfSize], xmm12
      vmovss  dword ptr [rbp+1B0h+bounds.halfSize+4], xmm12
      vmovss  dword ptr [rbp+1B0h+bounds.halfSize+8], xmm12
    }
  }
  AnglesToAxis(&angles, &axis);
  v40 = 0;
  CG_DebugBoxOriented(&origin, &bounds, &axis, &colorGreen, 0, 0);
  __asm { vmovss  xmm1, cs:__real@40000000; radius }
  CG_DebugSphere(&origin, *(float *)&_XMM1, &colorRed, 0, 1);
  __asm
  {
    vmovss  xmm3, cs:__real@43960000; width
    vmovss  [rsp+2B0h+depthTest], xmm3
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [r14]; x
  }
  CG_Draw2DRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&depthTesta, 1, 1, &colorBlackFaded, cgMedia.whiteMaterial);
  Com_sprintf(dest, 0x100ui64, "Scriptable Instance: %i %s", v15, v22->name);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovaps xmm0, xmm2
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm6, [rbp+1B0h+charHeight]
    vmovss  xmm7, cs:__real@44870000
    vcomiss xmm2, xmm10
  }
  if ( !(v45 | v138) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v45 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+2B0h+color], xmm6
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorYellow, 0, 1, color, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm11, [rbp+1B0h+tabWidth]
    vaddss  xmm0, xmm11, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm1, dword ptr [rbp+1B0h+outOrigin+8]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovss  xmm2, dword ptr [rbp+1B0h+outOrigin+4]
    vcvtss2sd xmm2, xmm2, xmm2
    vmovss  xmm3, dword ptr [rbp+1B0h+outOrigin]
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  qword ptr [rsp+2B0h+duration], xmm1
    vmovsd  qword ptr [rsp+2B0h+depthTest], xmm2
    vmovq   r9, xmm3
  }
  Com_sprintf(dest, 0x100ui64, "Origin: %.2f, %.2f, %.2f", *(double *)&_XMM3, depthTestb, durationa);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovaps xmm0, xmm2
    vcomiss xmm2, xmm10
  }
  if ( !(v62 | v138) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v62 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+2B0h+color], xmm6
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colora, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
  MapInstance = ScriptableCommon_GetMapInstance(v15, (const ScriptableInstance **)&outInstance);
  v327 = MapInstance;
  *(_QWORD *)runtime.v = (char *)&queryFormat.fmt + 3;
  v68 = outInstance;
  if ( MapInstance )
  {
    if ( !outInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2503, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    ffMemCost = v68->ffMemCost;
    if ( ffMemCost )
    {
      Com_sprintf(dest, 0x100ui64, "FastFile MemCost %i", ffMemCost);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !(v70 | v138) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v70 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorb, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    if ( v68->flags )
    {
      flags = v68->flags;
      IsStandaloneRequested = ScriptableDef_IsStandaloneRequested(def);
      v77 = (char *)&queryFormat.fmt + 3;
      if ( IsStandaloneRequested )
        v77 = "noEntity ";
      v78 = (char *)&queryFormat.fmt + 3;
      if ( (flags & 2) != 0 )
        v78 = "noShadow ";
      v79 = (char *)&queryFormat.fmt + 3;
      if ( (flags & 1) != 0 )
        v79 = "noCollision ";
      Com_sprintf(dest, 0x100ui64, "InstFlags: %s%s%s", v79, v78, v77);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !(v80 | v138) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v80 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorc, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
      MapInstance = v327;
    }
  }
  v85 = def->flags;
  if ( v85 )
  {
    __asm
    {
      vmovss  [rsp+2B0h+duration], xmm6
      vmovss  [rsp+2B0h+depthTest], xmm11
    }
    ScriptableBg_DrawDefFlags(v85, scrPlace, _R14, _RBX, *(float *)&depthTestc, *(float *)&durationb);
  }
  if ( MapInstance )
  {
    if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2531, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    targetname = v68->targetname;
    if ( targetname )
    {
      v87 = SL_ConvertToString(targetname);
      Com_sprintf(dest, 0x100ui64, "targetname: %s", v87);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !(v88 | v138) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v88 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colord, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    script_linkname = v68->script_linkname;
    if ( script_linkname )
    {
      v94 = SL_ConvertToString(script_linkname);
      Com_sprintf(dest, 0x100ui64, "script_linkname: %s", v94);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !(v95 | v138) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v95 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colore, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    script_linkto = v68->script_linkto;
    if ( script_linkto )
    {
      v101 = SL_ConvertToString(script_linkto);
      Com_sprintf(dest, 0x100ui64, "script_linkto: %s", v101);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !(v102 | v138) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v102 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorf, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    script_noteworthy = v68->script_noteworthy;
    if ( script_noteworthy )
    {
      v108 = SL_ConvertToString(script_noteworthy);
      Com_sprintf(dest, 0x100ui64, "script_noteworthy: %s", v108);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !(v109 | v138) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v109 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorg, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    lightIndices = v68->lightIndices;
    v115 = 5i64;
    do
    {
      if ( *lightIndices )
      {
        Com_sprintf(dest, 0x100ui64, "Light Index: %i", *lightIndices);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovaps xmm0, xmm2
          vcomiss xmm2, xmm10
        }
        if ( !(v116 | v138) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v116 )
          {
            __asm
            {
              vmovss  dword ptr [rsp+2B0h+color], xmm6
              vmovss  xmm1, dword ptr [r14]; x
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorh, 0);
            __asm { vmovss  xmm0, dword ptr [rbx] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rbx], xmm0
        }
      }
      ++lightIndices;
      --v115;
    }
    while ( v115 );
    v15 = instanceId;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm1, xmm0, xmm11
    vmovss  dword ptr [r14], xmm1
    vaddss  xmm0, xmm6, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
  ScriptableCommon_AssertCountsInitialized();
  if ( v15 >= g_scriptableWorldCounts.serverInstanceCount )
    v124 = NULL;
  else
    v124 = (ScriptableDef *)ScriptableSv_GetInstanceCommonContext(v15)->def;
  v338 = (ScriptableInstanceContextSecure *)v124;
  if ( v124 && (v124->flags & 2) != 0 )
  {
    _R13 = ScriptableSv_GetInstanceCommonContext(v15);
    context = _R13;
    linkedObjectType = _R13->linkedObjectType;
    linkedObjectIndex = _R13->linkedObjectIndex;
    Com_sprintf(dest, 0x100ui64, "Server");
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm10
    }
    if ( !(v126 | v138) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v126 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+2B0h+color], xmm6
          vmovss  xmm1, dword ptr [r14]; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorYellow, 0, 1, colori, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm1, xmm11, dword ptr [r14]
      vmovss  dword ptr [r14], xmm1
    }
    Com_sprintf(dest, 0x100ui64, "Part ID %i", _R13->partStateIndex);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm10
    }
    if ( !(v132 | v138) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v132 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+2B0h+color], xmm6
          vmovss  xmm1, dword ptr [r14]; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorYellow, 0, 1, colorj, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
    v137 = v124 < def;
    v138 = v124 == def;
    if ( v124 != def )
    {
      Com_sprintf(dest, 0x100ui64, "Def: %s", v124->name);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !v137 && !v138 )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v137 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorRed, 0, 1, colork, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    __asm
    {
      vmovss  xmm5, dword ptr [r13+20h]
      vmovss  xmm0, dword ptr [rbp+1B0h+outOrigin]
      vsubss  xmm3, xmm0, xmm5
      vmovss  xmm1, dword ptr [rbp+1B0h+outOrigin+4]
      vsubss  xmm2, xmm1, dword ptr [r13+24h]
      vmovss  xmm0, dword ptr [rbp+1B0h+outOrigin+8]
      vsubss  xmm4, xmm0, dword ptr [r13+28h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm12
    }
    if ( !v137 && !v138 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r13+28h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm1, dword ptr [r13+24h]
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm3, xmm5, xmm5
        vmovsd  qword ptr [rsp+2B0h+duration], xmm0
        vmovsd  qword ptr [rsp+2B0h+depthTest], xmm1
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Origin: %.2f, %.2f, %.2f", *(double *)&_XMM3, depthTestd, durationc);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !(v161 | v138) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v161 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorRed, 0, 1, colorl, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    dataType = _R13->dataType;
    compositeModel = _R13->data.compositeModel;
    if ( dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
    {
      if ( !compositeModel )
      {
LABEL_103:
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( v15 >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(vertAlign) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(duration) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", duration, vertAlign) )
            __debugbreak();
        }
        v174 = g_scriptableSv_instanceContexts;
        if ( g_scriptableSv_instanceContexts[v15].collisionContext.scriptableCollisionMain != -1 )
        {
          if ( g_scriptableSv_instanceContexts[v15].collisionContext.scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2624, ASSERT_TYPE_ASSERT, "(collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
            __debugbreak();
          model = v174[v15].collisionContext.model;
          if ( model )
            *(_QWORD *)runtime.v = model->name;
          v176 = "Movable";
          if ( v174[v15].collisionContext.neverMoves )
            v176 = "Never Moves";
          LODWORD(depthTest) = v174[v15].collisionContext.scriptableCollisionDetail;
          Com_sprintf(dest, 0x100ui64, "Collision: %i %i %s %s", v174[v15].collisionContext.scriptableCollisionMain, depthTest, v176, *(const char **)runtime.v);
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; y
            vmovaps xmm0, xmm2
            vcomiss xmm2, xmm10
          }
          if ( !(v177 | v138) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v177 )
            {
              __asm
              {
                vmovss  dword ptr [rsp+2B0h+color], xmm6
                vmovss  xmm1, dword ptr [r14]; x
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorn, 0);
              __asm { vmovss  xmm0, dword ptr [rbx] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rbx], xmm0
          }
          v182 = "No Push";
          if ( v174[v15].collisionContext.canPush )
            v182 = "Can Push";
          Com_sprintf(dest, 0x100ui64, v182);
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; y
            vmovaps xmm0, xmm2
            vcomiss xmm2, xmm10
          }
          if ( !(v183 | v138) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v183 )
            {
              __asm
              {
                vmovss  dword ptr [rsp+2B0h+color], xmm6
                vmovss  xmm1, dword ptr [r14]; x
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, coloro, 0);
              __asm { vmovss  xmm0, dword ptr [rbx] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rbx], xmm0
          }
          v188 = "No Touch";
          if ( v174[v15].collisionContext.canTouch )
            v188 = "Can Touch";
          Com_sprintf(dest, 0x100ui64, v188);
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; y
            vmovaps xmm0, xmm2
            vcomiss xmm2, xmm10
          }
          if ( !(v189 | v138) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v189 )
            {
              __asm
              {
                vmovss  dword ptr [rsp+2B0h+color], xmm6
                vmovss  xmm1, dword ptr [r14]; x
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorp, 0);
              __asm { vmovss  xmm0, dword ptr [rbx] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rbx], xmm0
          }
        }
        if ( linkedObjectType == SCRIPTABLE_LINK_ENTITY )
        {
          if ( linkedObjectIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2640, ASSERT_TYPE_ASSERT, "(linkedObject < ( 2048 ))", (const char *)&queryFormat, "linkedObject < MAX_GENTITIES") )
            __debugbreak();
          Com_sprintf(dest, 0x100ui64, "Entity: %i", linkedObjectIndex);
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; y
            vmovaps xmm0, xmm2
            vcomiss xmm2, xmm10
          }
          if ( !(v194 | v138) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v194 )
            {
              __asm
              {
                vmovss  dword ptr [rsp+2B0h+color], xmm6
                vmovss  xmm1, dword ptr [r14]; x
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorq, 0);
              __asm { vmovss  xmm0, dword ptr [rbx] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rbx], xmm0
          }
        }
        *(_QWORD *)runtime.v = g_svScriptableRuntimePartStates;
        ScriptableCommon_AssertCountsInitialized();
        v199 = v15 < g_scriptableWorldCounts.runtimeInstanceCount;
        v329 = v15 < g_scriptableWorldCounts.runtimeInstanceCount;
        v200 = v338->anglesInitial.v[0];
        v335 = v200;
        v201 = 0;
        if ( v200 != 0.0 )
        {
          v202 = *(_QWORD *)&v338->anglesInitial.y;
          v203 = (_BYTE *)(v202 + 12);
          do
          {
            if ( (*v203 & 2) != 0 )
            {
              __asm
              {
                vmovss  dword ptr [rsp+2B0h+var_258], xmm6
                vmovss  [rsp+2B0h+var_260], xmm11
              }
              ScriptableBg_DrawDebugScriptableInstanceContextPartState(v15, 1, v199, (const ScriptablePartDef *)(v202 + 104i64 * v201), v201, context, *(const ScriptablePartRuntime **)runtime.v, scrPlace, _R14, _RBX, v323, v325);
              v200 = v335;
              v199 = v329;
            }
            ++v201;
            v203 += 104;
          }
          while ( v201 < LODWORD(v200) );
          v40 = 0;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r14]
          vsubss  xmm1, xmm0, xmm11
          vmovss  dword ptr [r14], xmm1
          vaddss  xmm0, xmm6, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
        }
        goto LABEL_146;
      }
    }
    else if ( !compositeModel )
    {
      goto LABEL_103;
    }
    v168 = "Model: %s";
    if ( dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
      v168 = "CompositeModel: %s";
    Com_sprintf(dest, 0x100ui64, v168, compositeModel->name);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm10
    }
    if ( !(v169 | v138) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v169 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+2B0h+color], xmm6
          vmovss  xmm1, dword ptr [r14]; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorm, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
    goto LABEL_103;
  }
LABEL_146:
  v207 = (ScriptableDef *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v15)->def;
  context = (ScriptableInstanceContextSecure *)v207;
  if ( !v207 )
    goto LABEL_217;
  v208 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v15);
  v338 = v208;
  v330 = v208->linkedObjectType;
  v336 = v208->linkedObjectIndex;
  Com_sprintf(dest, 0x100ui64, "Client");
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovaps xmm0, xmm2
    vcomiss xmm2, xmm10
  }
  if ( !(v209 | v138) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v209 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+2B0h+color], xmm6
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorYellow, 0, 1, colorr, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm1, xmm11, dword ptr [r14]
    vmovss  dword ptr [r14], xmm1
  }
  Com_sprintf(dest, 0x100ui64, "Part ID %i", v208->partStateIndex);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovaps xmm0, xmm2
    vcomiss xmm2, xmm10
  }
  if ( !(v215 | v138) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v215 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+2B0h+color], xmm6
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorYellow, 0, 1, colors, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
  if ( v207 != def )
  {
    Com_sprintf(dest, 0x100ui64, "Def:%s", v207->name);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm10
    }
    if ( !(v220 | v138) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v220 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+2B0h+color], xmm6
          vmovss  xmm1, dword ptr [r14]; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorRed, 0, 1, colort, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
  }
  ScriptableInstanceContextSecure::GetOrigin(v208, v15, &runtime);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+2B0h+runtime]
    vmovss  xmm0, dword ptr [rbp+1B0h+outOrigin]
    vsubss  xmm3, xmm0, xmm5
    vmovss  xmm1, dword ptr [rbp+1B0h+outOrigin+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+2B0h+runtime+4]
    vmovss  xmm0, dword ptr [rbp+1B0h+outOrigin+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+2B0h+var_240]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, xmm12
  }
  if ( !(v45 | v138) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+2B0h+var_240]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [rsp+2B0h+runtime+4]
      vcvtss2sd xmm1, xmm1, xmm1
      vcvtss2sd xmm3, xmm5, xmm5
      vmovsd  qword ptr [rsp+2B0h+duration], xmm0
      vmovsd  qword ptr [rsp+2B0h+depthTest], xmm1
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x100ui64, "Origin: %.2f, %.2f, %.2f", *(double *)&_XMM3, depthTeste, durationd);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovaps xmm0, xmm2
      vcomiss xmm2, xmm10
    }
    if ( !(v243 | v138) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v243 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+2B0h+color], xmm6
          vmovss  xmm1, dword ptr [r14]; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorRed, 0, 1, coloru, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
  }
  v248 = v208->dataType;
  v249 = v208->data.compositeModel;
  if ( v248 == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
  {
    if ( !v249 )
      goto LABEL_173;
  }
  else if ( !v249 )
  {
    goto LABEL_173;
  }
  v250 = "Model:%s";
  if ( v248 == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
    v250 = "CompositeModel:%s";
  Com_sprintf(dest, 0x100ui64, v250, v249->name);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovaps xmm0, xmm2
    vcomiss xmm2, xmm10
  }
  if ( !(v251 | v138) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v251 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+2B0h+color], xmm6
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorv, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
LABEL_173:
  ScriptableCommon_AssertCountsInitialized();
  if ( v15 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(vertAlign) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(duration) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", duration, vertAlign) )
      __debugbreak();
  }
  if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 125, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  v256 = v15;
  v257 = g_scriptableCl_instanceContexts[0];
  v332 = g_scriptableCl_instanceContexts[0][v256].collisionContext.collisionActiveFlags & 1;
  if ( g_scriptableCl_instanceContexts[0][v256].collisionContext.scriptableCollisionPredictive == -1 )
  {
    if ( g_scriptableCl_instanceContexts[0][v256].collisionContext.scriptableCollisionAuthoritative == -1 )
      goto LABEL_204;
    if ( g_scriptableCl_instanceContexts[0][v256].collisionContext.scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2710, ASSERT_TYPE_ASSERT, "(collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v262 = "Inactive";
    if ( v332 )
      v262 = "Active";
    v263 = "Movable";
    if ( v257[v256].collisionContext.neverMoves )
      v263 = "Never Moves";
    LODWORD(depthTest) = v257[v256].collisionContext.scriptableCollisionDetail;
    Com_sprintf(dest, 0x100ui64, "Collision Instance:%i %i %s %s", v257[v256].collisionContext.scriptableCollisionAuthoritative, depthTest, v263, v262);
  }
  else
  {
    if ( g_scriptableCl_instanceContexts[0][v256].collisionContext.scriptableCollisionAuthoritative == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2702, ASSERT_TYPE_ASSERT, "(collisionContext.scriptableCollisionAuthoritative != 0xFFFFFFFF)", (const char *)&queryFormat, "collisionContext.scriptableCollisionAuthoritative != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v257[v256].collisionContext.scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2703, ASSERT_TYPE_ASSERT, "(collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v258 = "Inactive";
    if ( v332 )
      v258 = "Active";
    v259 = "Movable";
    if ( v257[v256].collisionContext.neverMoves )
      v259 = "Never Moves";
    LODWORD(duration) = v257[v256].collisionContext.scriptableCollisionDetail;
    LODWORD(depthTest) = v257[v256].collisionContext.scriptableCollisionAuthoritative;
    Com_sprintf(dest, 0x100ui64, "Collision Instance:%i %i %i %s %s", v257[v256].collisionContext.scriptableCollisionPredictive, depthTest, duration, v259, v258);
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vcomiss xmm2, xmm10
    vmovaps xmm0, xmm2
  }
  if ( !(v260 | v261) )
  {
    __asm { vcomiss xmm2, xmm7 }
    if ( v260 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+2B0h+color], xmm6
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorw, 0);
      __asm { vmovss  xmm0, dword ptr [rbx] }
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
LABEL_204:
  switch ( v330 )
  {
    case SCRIPTABLE_LINK_ENTITY:
      Com_sprintf(dest, 0x100ui64, "Entity:%i", v336);
      goto LABEL_210;
    case SCRIPTABLE_LINK_DYNENT:
      Com_sprintf(dest, 0x100ui64, "Dynent:%i", v336);
      goto LABEL_210;
    case SCRIPTABLE_LINK_CLIENTMODEL:
      Com_sprintf(dest, 0x100ui64, "ClientModel:%i", v336);
LABEL_210:
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovaps xmm0, xmm2
        vcomiss xmm2, xmm10
      }
      if ( !(v268 | v269) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v268 )
        {
          __asm
          {
            vmovss  dword ptr [rsp+2B0h+color], xmm6
            vmovss  xmm1, dword ptr [r14]; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colorx, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
      break;
  }
  outInstance = (ScriptableInstance *)g_ScriptableClRuntimePartStates[0];
  ScriptableCommon_AssertCountsInitialized();
  v274 = v15 < g_scriptableWorldCounts.runtimeInstanceCount;
  v331 = v15 < g_scriptableWorldCounts.runtimeInstanceCount;
  v275 = context->anglesInitial.v[0];
  v276 = *(const ScriptablePartDef **)&context->anglesInitial.y;
  if ( v275 != 0.0 )
  {
    do
    {
      __asm
      {
        vmovss  dword ptr [rsp+2B0h+var_258], xmm6
        vmovss  [rsp+2B0h+var_260], xmm11
      }
      ScriptableBg_DrawDebugScriptableInstanceContextPartState(v15, 0, v274, v276++, v40++, v338, (const ScriptablePartRuntime *)outInstance, scrPlace, _R14, _RBX, v324, v326);
      v274 = v331;
    }
    while ( v40 < LODWORD(v275) );
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm1, xmm0, xmm11
    vmovss  dword ptr [r14], xmm1
    vaddss  xmm0, xmm6, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
  memset(&runtime, 0, sizeof(runtime));
LABEL_217:
  _R11 = &v349;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm10, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-48h]
    vmovaps xmm12, xmmword ptr [r11-58h]
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableInstanceContextPartState
==============
*/
void ScriptableBg_DrawDebugScriptableInstanceContextPartState(const unsigned int instanceId, bool server, bool reserved, const ScriptablePartDef *part, const unsigned int partIdx, const ScriptableInstanceContextSecure *context, const ScriptablePartRuntime *runtime, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const ScriptablePartDef *v16; 
  bool v18; 
  unsigned int v20; 
  const char *name; 
  const ScriptablePartRuntime *v22; 
  const ScriptableInstanceContextSecure *v23; 
  scr_string_t scrName; 
  unsigned int v26; 
  unsigned int serverInstanceFlatId; 
  __int64 v28; 
  unsigned int reservedStateListHeader; 
  __int64 v30; 
  unsigned int v31; 
  ScriptablePartRuntime *v32; 
  unsigned __int16 stateId; 
  int v34; 
  __int64 v35; 
  const char *v36; 
  const char *v37; 
  int v38; 
  int Time; 
  unsigned int v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned int v49; 
  __int64 v50; 
  __int64 v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  __int64 v55; 
  int v56; 
  __int64 v57; 
  int v58; 
  __int64 v59; 
  int v60; 
  __int64 v61; 
  int v62; 
  __int64 v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  __int64 v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  char *v76; 
  unsigned __int16 eventStreamBufferOffsetServer; 
  const ScreenPlacement *v88; 
  char v94; 
  char v97; 
  char v102; 
  unsigned int numChildParts; 
  ScriptablePartDef *childParts; 
  int *p_flags; 
  __int64 forceColor; 
  __int64 shadow; 
  ScreenPlacement *v116; 
  float v117; 
  float v118; 
  double adjust; 
  float v120; 
  float v121; 
  bool v123; 
  int v125; 
  const char *v127; 
  __int64 v128; 
  __int64 v129; 
  __int64 v130; 
  __int64 v131; 
  __int64 v132; 
  __int64 v133; 
  __int64 v134; 
  __int64 v135; 
  char dest[256]; 

  __asm { vmovaps [rsp+278h+var_78], xmm9 }
  v16 = part;
  _R14 = x;
  v18 = server;
  _R13 = y;
  v20 = instanceId;
  name = part->name;
  v22 = runtime;
  v23 = context;
  v123 = reserved;
  v127 = name;
  if ( !name || !*name )
  {
    scrName = v16->scrName;
    if ( scrName )
    {
      name = SL_ConvertToString(scrName);
      v23 = context;
      reserved = v123;
      v22 = runtime;
    }
    else
    {
      name = (char *)&queryFormat.fmt + 3;
    }
    v127 = name;
  }
  __asm { vmovss  xmm9, [rsp+278h+tabWidth] }
  v26 = 0;
  __asm { vmovaps [rsp+278h+var_58], xmm6 }
  v128 = 0i64;
  if ( v16->numStates )
  {
    if ( v18 )
      serverInstanceFlatId = v16->serverInstanceFlatId;
    else
      serverInstanceFlatId = v16->flatId;
    v28 = v23->partStateIndex + serverInstanceFlatId;
    if ( reserved )
    {
      reservedStateListHeader = v23->reservedStateListHeader;
      if ( (_DWORD)v28 )
      {
        v30 = (unsigned int)v28;
        v31 = g_scriptableSVReservedPartRuntimeCount;
        do
        {
          if ( reservedStateListHeader >= v31 )
          {
            LODWORD(shadow) = v31;
            LODWORD(forceColor) = reservedStateListHeader;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2124, ASSERT_TYPE_ASSERT, "(unsigned)( reservedStateIdx ) < (unsigned)( g_scriptableSVReservedPartRuntimeCount )", "reservedStateIdx doesn't index g_scriptableSVReservedPartRuntimeCount\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
            v31 = g_scriptableSVReservedPartRuntimeCount;
          }
          v32 = g_scriptableSVReservedPartRuntimes;
          if ( !v18 )
            v32 = g_scriptableClReservedPartRuntimes[0];
          reservedStateListHeader = v32[reservedStateListHeader].nextRuntime;
          --v30;
        }
        while ( v30 );
      }
      else
      {
        v31 = g_scriptableSVReservedPartRuntimeCount;
      }
      if ( reservedStateListHeader >= v31 )
      {
        LODWORD(shadow) = v31;
        LODWORD(forceColor) = reservedStateListHeader;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2128, ASSERT_TYPE_ASSERT, "(unsigned)( reservedStateIdx ) < (unsigned)( g_scriptableSVReservedPartRuntimeCount )", "reservedStateIdx doesn't index g_scriptableSVReservedPartRuntimeCount\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      if ( v18 )
        stateId = g_scriptableSVReservedPartRuntimes[reservedStateListHeader].stateId;
      else
        stateId = g_scriptableClReservedPartRuntimes[0][reservedStateListHeader].stateId;
    }
    else
    {
      stateId = v22[v28].stateId;
    }
    v34 = stateId;
    v125 = stateId;
    v35 = (__int64)&v16->states[stateId];
    v36 = *(const char **)v35;
    if ( *(_DWORD *)(v35 + 24) == 1 )
    {
      if ( !v36 )
        v36 = *(const char **)(v35 + 112);
      v128 = v35 + 40;
    }
    else if ( *(_DWORD *)(v35 + 24) == 2 || *(_DWORD *)(v35 + 24) == 3 )
    {
      if ( v36 )
        goto LABEL_41;
      v36 = *(const char **)(v35 + 40);
    }
    v37 = (char *)&queryFormat.fmt + 3;
    if ( v36 )
      v37 = v36;
    v36 = v37;
LABEL_41:
    v38 = 0;
    if ( v18 )
    {
      Time = G_Main_GetTime();
    }
    else
    {
      if ( !cg_t::ms_allocatedCount )
      {
        LODWORD(shadow) = cg_t::ms_allocatedCount;
        LODWORD(forceColor) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      if ( !cg_t::ms_cgArray[0] )
      {
        LODWORD(shadow) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", shadow) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(shadow) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", shadow) )
          __debugbreak();
      }
      Time = cg_t::ms_cgArray[0]->time;
    }
    v40 = partIdx;
    if ( Time )
    {
      v41 = 15i64 * v18;
      v129 = v41 + 8;
      v42 = v41 + 1;
      v130 = v41 + 9;
      v43 = v41 + 2;
      v131 = v41 + 10;
      v44 = v41 + 3;
      v132 = v41 + 11;
      v45 = v41 + 4;
      v133 = v41 + 12;
      v46 = v41 + 5;
      v134 = v41 + 13;
      v47 = v41 + 6;
      v48 = v41 + 7;
      v135 = v41 + 14;
      v49 = instanceId;
      v50 = v41;
      v40 = partIdx;
      if ( s_recentStateChanges[0][v50].instance == instanceId )
      {
        v49 = instanceId;
        if ( s_recentStateChanges[0][v50].partId == partIdx )
        {
          v40 = partIdx;
          if ( Time - s_recentStateChanges[0][v50].time <= 10000 )
            v38 = Time - s_recentStateChanges[0][v50].time;
          v49 = instanceId;
        }
      }
      v51 = v42;
      if ( s_recentStateChanges[0][v51].instance == v49 && s_recentStateChanges[0][v51].partId == v40 )
      {
        v52 = Time - s_recentStateChanges[0][v51].time;
        if ( v52 <= 10000 && (!v38 || v52 < v38) )
          v38 = Time - s_recentStateChanges[0][v51].time;
      }
      v53 = v43;
      if ( s_recentStateChanges[0][v53].instance == instanceId && s_recentStateChanges[0][v53].partId == v40 )
      {
        v54 = Time - s_recentStateChanges[0][v53].time;
        if ( v54 <= 10000 && (!v38 || v54 < v38) )
          v38 = Time - s_recentStateChanges[0][v53].time;
      }
      v55 = v44;
      if ( s_recentStateChanges[0][v55].instance == instanceId && s_recentStateChanges[0][v55].partId == v40 )
      {
        v56 = Time - s_recentStateChanges[0][v55].time;
        if ( v56 <= 10000 && (!v38 || v56 < v38) )
          v38 = Time - s_recentStateChanges[0][v55].time;
      }
      v57 = v45;
      if ( s_recentStateChanges[0][v57].instance == instanceId && s_recentStateChanges[0][v57].partId == v40 )
      {
        v58 = Time - s_recentStateChanges[0][v57].time;
        if ( v58 <= 10000 && (!v38 || v58 < v38) )
          v38 = Time - s_recentStateChanges[0][v57].time;
      }
      v59 = v46;
      if ( s_recentStateChanges[0][v59].instance == instanceId && s_recentStateChanges[0][v59].partId == v40 )
      {
        v60 = Time - s_recentStateChanges[0][v59].time;
        if ( v60 <= 10000 && (!v38 || v60 < v38) )
          v38 = Time - s_recentStateChanges[0][v59].time;
      }
      v61 = v47;
      if ( s_recentStateChanges[0][v61].instance == instanceId && s_recentStateChanges[0][v61].partId == v40 )
      {
        v62 = Time - s_recentStateChanges[0][v61].time;
        if ( v62 <= 10000 && (!v38 || v62 < v38) )
          v38 = Time - s_recentStateChanges[0][v61].time;
      }
      v63 = v48;
      if ( s_recentStateChanges[0][v63].instance == instanceId && s_recentStateChanges[0][v63].partId == v40 )
      {
        v64 = Time - s_recentStateChanges[0][v63].time;
        if ( v64 <= 10000 && (!v38 || v64 < v38) )
          v38 = Time - s_recentStateChanges[0][v63].time;
      }
      if ( s_recentStateChanges[0][v129].instance == instanceId && s_recentStateChanges[0][v129].partId == v40 )
      {
        v65 = Time - s_recentStateChanges[0][v129].time;
        if ( v65 <= 10000 && (!v38 || v65 < v38) )
          v38 = Time - s_recentStateChanges[0][v129].time;
      }
      if ( s_recentStateChanges[0][v130].instance == instanceId && s_recentStateChanges[0][v130].partId == v40 )
      {
        v66 = Time - s_recentStateChanges[0][v130].time;
        if ( v66 <= 10000 && (!v38 || v66 < v38) )
          v38 = Time - s_recentStateChanges[0][v130].time;
      }
      if ( s_recentStateChanges[0][v131].instance == instanceId && s_recentStateChanges[0][v131].partId == v40 )
      {
        v67 = Time - s_recentStateChanges[0][v131].time;
        if ( v67 <= 10000 && (!v38 || v67 < v38) )
          v38 = Time - s_recentStateChanges[0][v131].time;
      }
      if ( s_recentStateChanges[0][v132].instance == instanceId && s_recentStateChanges[0][v132].partId == v40 )
      {
        v68 = Time - s_recentStateChanges[0][v132].time;
        if ( v68 <= 10000 && (!v38 || v68 < v38) )
          v38 = Time - s_recentStateChanges[0][v132].time;
      }
      if ( s_recentStateChanges[0][v133].instance == instanceId && s_recentStateChanges[0][v133].partId == v40 )
      {
        v69 = Time - s_recentStateChanges[0][v133].time;
        if ( v69 <= 10000 && (!v38 || v69 < v38) )
          v38 = Time - s_recentStateChanges[0][v133].time;
      }
      if ( s_recentStateChanges[0][v134].instance == instanceId && s_recentStateChanges[0][v134].partId == v40 )
      {
        v70 = Time - s_recentStateChanges[0][v134].time;
        if ( v70 <= 10000 && (!v38 || v70 < v38) )
          v38 = Time - s_recentStateChanges[0][v134].time;
      }
      v71 = v135;
      if ( s_recentStateChanges[0][v135].instance == instanceId && s_recentStateChanges[0][v71].partId == v40 )
      {
        v72 = Time - s_recentStateChanges[0][v71].time;
        if ( v72 <= 10000 && (!v38 || v72 < v38) )
          v38 = v72;
      }
      v18 = server;
      v34 = v125;
      v16 = part;
    }
    v73 = *(_DWORD *)(v35 + 24);
    if ( v73 )
    {
      v74 = v73 - 1;
      if ( !v74 )
      {
        if ( v18 )
          eventStreamBufferOffsetServer = v16->eventStreamBufferOffsetServer;
        else
          eventStreamBufferOffsetServer = v16->eventStreamBufferOffsetClient;
        _RSI = eventStreamBufferOffsetServer;
        _RBP = context->eventStreamBuffer;
        if ( *(char *)(v35 + 8) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2217, ASSERT_TYPE_ASSERT, "(stateDef->base.flags & (1 << 7))", (const char *)&queryFormat, "stateDef->base.flags & SCRIPTABLE_DEFFLAG_HAS_HEALTH") )
          __debugbreak();
        if ( _RSI + 4 > (unsigned __int64)context->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2218, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= context->eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= context->eventStreamBufferSize") )
          __debugbreak();
        __asm { vmovss  xmm6, dword ptr [rsi+rbp] }
        if ( !v128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2222, ASSERT_TYPE_ASSERT, "(pMaxHealth)", (const char *)&queryFormat, "pMaxHealth") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi]
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  qword ptr [rsp+278h+adjust], xmm1
          vcvtss2sd xmm2, xmm6, xmm6
          vmovsd  [rsp+278h+var_240], xmm2
        }
        LODWORD(forceColor) = v125;
        Com_sprintf(dest, 0x100ui64, "Part[%2i] %15s, State[%i] H - %s | Health %.2f / %.2f", v40, v127, forceColor, v36, *(double *)&v116, adjust);
LABEL_165:
        _R13 = y;
        __asm
        {
          vmovss  xmm6, [rsp+278h+charHeight]
          vmovss  xmm2, dword ptr [r13+0]; y
        }
        if ( !v38 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcomiss xmm2, xmm0
          }
LABEL_175:
          _R14 = x;
          __asm { vaddss  xmm0, xmm6, dword ptr [r13+0] }
          v20 = instanceId;
          v16 = part;
          goto LABEL_181;
        }
        __asm
        {
          vmovaps [rsp+278h+var_68], xmm7
          vxorps  xmm7, xmm7, xmm7
        }
        if ( v38 >= 1000 )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( (unsigned int)v38 > 0x3E8 )
          {
            __asm { vcomiss xmm2, cs:__real@44870000 }
            _RSI = x;
            v88 = scrPlace;
            goto LABEL_172;
          }
        }
        else
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( (unsigned int)v38 > 0x3E8 )
          {
            __asm { vcomiss xmm2, cs:__real@44870000 }
            _RSI = x;
            v88 = scrPlace;
LABEL_172:
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, ebx
              vmulss  xmm1, xmm0, cs:__real@3a83126f
              vcvtss2sd xmm3, xmm1, xmm1
              vmovq   r9, xmm3
            }
            Com_sprintf(dest, 0x100ui64, "%3.1f", *(double *)&_XMM3);
            __asm
            {
              vmovss  xmm2, dword ptr [r13+0]; y
              vcomiss xmm2, xmm7
              vmovaps xmm7, [rsp+278h+var_68]
            }
            if ( !(v94 | v97) )
            {
              __asm { vcomiss xmm2, cs:__real@44870000 }
              if ( v94 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsi]
                  vmovss  dword ptr [rsp+278h+var_240], xmm6
                  vsubss  xmm1, xmm0, xmm9; x
                }
                CG_DrawStringExt(v88, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v117, 0);
              }
            }
            goto LABEL_175;
          }
        }
        v88 = scrPlace;
        _RSI = x;
        goto LABEL_172;
      }
      v75 = v74 - 1;
      if ( v75 )
      {
        if ( v75 == 1 )
        {
          v76 = (char *)&queryFormat.fmt + 3;
          if ( *(_QWORD *)(v35 + 112) )
            v76 = *(char **)(v35 + 112);
          LODWORD(forceColor) = v34;
          Com_sprintf(dest, 0x100ui64, "Part[%2i] %15s, State[%i] U - %s | %s", v40, v127, forceColor, v36, v76);
        }
        goto LABEL_165;
      }
    }
    LODWORD(forceColor) = v34;
    Com_sprintf(dest, 0x100ui64, "Part[%2i] %15s, State[%i] S - %s", v40, v127, forceColor, v36);
    goto LABEL_165;
  }
  Com_sprintf(dest, 0x100ui64, "Part[%2i] %10s, empty", partIdx, name);
  __asm
  {
    vmovss  xmm2, dword ptr [r13+0]; y
    vmovss  xmm6, [rsp+278h+charHeight]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps xmm1, xmm2
  }
  if ( !(v102 | v97) )
  {
    __asm { vcomiss xmm2, cs:__real@44870000 }
    if ( v102 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+278h+var_240], xmm6
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v118, 0);
      __asm { vmovss  xmm1, dword ptr [r13+0] }
    }
  }
  __asm { vaddss  xmm0, xmm1, xmm6 }
LABEL_181:
  __asm
  {
    vmovss  dword ptr [r13+0], xmm0
    vaddss  xmm0, xmm9, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
  }
  numChildParts = v16->numChildParts;
  if ( numChildParts )
  {
    childParts = v16->childParts;
    p_flags = &childParts->flags;
    do
    {
      if ( !v18 || (*(_BYTE *)p_flags & 2) != 0 )
      {
        __asm
        {
          vmovss  [rsp+278h+var_220], xmm6
          vmovss  [rsp+278h+var_228], xmm9
        }
        ScriptableBg_DrawDebugScriptableInstanceContextPartState(v20, v18, v123, &childParts[v26], v26, context, runtime, scrPlace, _R14, _R13, v120, v121);
      }
      ++v26;
      p_flags += 26;
    }
    while ( v26 < numChildParts );
    __asm { vmovss  xmm0, dword ptr [r14] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+278h+var_58]
    vsubss  xmm1, xmm0, xmm9
    vmovss  dword ptr [r14], xmm1
    vmovaps xmm9, [rsp+278h+var_78]
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableInstanceInWorld
==============
*/
void ScriptableBg_DrawDebugScriptableInstanceInWorld(const unsigned int instanceId, const ScriptableDef *def)
{
  const XModel *ScriptableModel; 
  int flags; 
  const vec4_t *v26; 
  const char *v27; 
  vec3_t outOrigin; 
  vec3_t xyz; 
  vec3_t angles; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 

  if ( ScriptableBg_ServerContextIsPrimary(instanceId) )
  {
    _RBX = ScriptableSv_GetInstanceCommonContext(instanceId);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  dword ptr [rbp+57h+outOrigin], xmm0
      vmovss  xmm1, dword ptr [rax+24h]
      vmovss  dword ptr [rbp+57h+outOrigin+4], xmm1
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rbp+57h+outOrigin+8], xmm0
      vmovss  xmm1, dword ptr [rax+2Ch]
      vmovss  dword ptr [rbp+57h+angles], xmm1
      vmovss  xmm0, dword ptr [rax+30h]
      vmovss  dword ptr [rbp+57h+angles+4], xmm0
      vmovss  xmm1, dword ptr [rax+34h]
      vmovss  dword ptr [rbp+57h+angles+8], xmm1
    }
  }
  else
  {
    _RBX = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, instanceId);
    ScriptableInstanceContextSecure::GetOrigin(_RBX, instanceId, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rbp+57h+angles], xmm0
      vmovss  xmm1, dword ptr [rbx+30h]
      vmovss  dword ptr [rbp+57h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rbx+34h]
      vmovss  dword ptr [rbp+57h+angles+8], xmm0
    }
  }
  ScriptableModel = BG_XCompositeModel_GetScriptableModel(_RBX);
  if ( ScriptableModel )
  {
    AnglesToAxis(&angles, &axis);
    MatrixTransformVector(&ScriptableModel->bounds.midPoint, &axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+out]
      vaddss  xmm1, xmm0, dword ptr [rbp+57h+outOrigin]
      vmovss  xmm2, dword ptr [rbp+57h+out+4]
      vaddss  xmm0, xmm2, dword ptr [rbp+57h+outOrigin+4]
      vmovss  dword ptr [rbp+57h+xyz], xmm1
      vmovss  xmm1, dword ptr [rbp+57h+out+8]
      vaddss  xmm2, xmm1, dword ptr [rbp+57h+outOrigin+8]
      vmovss  dword ptr [rbp+57h+xyz+8], xmm2
      vmovss  dword ptr [rbp+57h+xyz+4], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+57h+outOrigin]
      vmovsd  qword ptr [rbp+57h+xyz], xmm0
    }
    xyz.v[2] = outOrigin.v[2];
  }
  __asm { vmovss  xmm2, cs:__real@3e99999a; scale }
  CL_AddDebugStringCentered(&xyz, &colorRed, *(float *)&_XMM2, def->name, 0, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+xyz+8]
    vaddss  xmm1, xmm0, cs:__real@c0000000
  }
  flags = def->flags;
  v26 = &colorCyan;
  v27 = "Client Only";
  __asm { vmovss  dword ptr [rbp+57h+xyz+8], xmm1 }
  if ( (flags & 4) != 0 )
  {
    v27 = "Server Controlled";
LABEL_11:
    v26 = &colorOrange;
    goto LABEL_12;
  }
  if ( (flags & 2) != 0 )
  {
    v27 = "Server Instance";
    goto LABEL_11;
  }
LABEL_12:
  __asm { vmovss  xmm2, cs:__real@3e19999a; scale }
  CL_AddDebugStringCentered(&xyz, v26, *(float *)&_XMM2, v27, 0, 0);
}

/*
==============
ScriptableBg_DrawDebugScriptableNoteTracksDef
==============
*/
void ScriptableBg_DrawDebugScriptableNoteTracksDef(const ScriptableNoteTrackDef *noteTracks, const unsigned int numNoteTracks, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int *p_numEvents; 
  unsigned int v20; 
  char v22; 
  char v25; 
  int v29; 
  const char *v30; 
  char v31; 
  __int64 v36; 
  const char *v37; 
  char v38; 
  vec4_t *setColor; 
  float setColora; 
  int forceColor; 
  int forceColora; 
  int shadow; 
  float v56; 
  float v57; 
  float v58; 
  char string[256]; 
  char dest[256]; 
  void *retaddr; 

  if ( numNoteTracks )
  {
    _R11 = &retaddr;
    _RDI = y;
    _RBX = x;
    p_numEvents = &noteTracks->numEvents;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovss  xmm6, [rsp+2D8h+charHeight]
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovss  xmm7, [rsp+2D8h+tabWidth]
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovss  xmm8, cs:__real@44870000
      vmovaps xmmword ptr [r11-78h], xmm9
    }
    v20 = 0;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    do
    {
      Com_sprintf(dest, 0x100ui64, "NoteTrack %i", v20);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm9
        vmovaps xmm0, xmm2
      }
      if ( !(v22 | v25) )
      {
        __asm { vcomiss xmm2, xmm8 }
        if ( v22 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rbx]; x
            vmovss  [rsp+2D8h+var_2A0], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v56, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
        vaddss  xmm1, xmm7, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
      v29 = *(p_numEvents - 5);
      if ( v29 )
      {
        __asm
        {
          vmovss  [rsp+2D8h+forceColor], xmm6
          vmovss  dword ptr [rsp+2D8h+setColor], xmm7
        }
        ScriptableBg_DrawDefFlags(v29, scrPlace, _RBX, y, setColora, *(float *)&forceColor);
      }
      v30 = *(const char **)(p_numEvents - 3);
      if ( v30 && *v30 )
      {
        LODWORD(setColor) = *(p_numEvents - 1);
        Com_sprintf(string, 0x100ui64, "Name:%s Script:%i", v30, setColor);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm9
          vmovaps xmm0, xmm2
        }
        if ( !(v31 | v25) )
        {
          __asm { vcomiss xmm2, xmm8 }
          if ( v31 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbx]; x
              vmovss  [rsp+2D8h+var_2A0], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, string, &colorWhite, 0, 1, v57, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      v36 = *p_numEvents;
      if ( (_DWORD)v36 )
      {
        v37 = "Events";
        if ( (_DWORD)v36 == 1 )
          v37 = "Event";
        Com_sprintf(string, 0x100ui64, "%i %s", v36, v37);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm9
          vmovaps xmm0, xmm2
        }
        if ( !(v38 | v25) )
        {
          __asm { vcomiss xmm2, xmm8 }
          if ( v38 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbx]; x
              vmovss  [rsp+2D8h+var_2A0], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, string, &colorWhite, 0, 1, v58, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm7, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm1
          vmovss  [rsp+2D8h+shadow], xmm6
          vmovss  [rsp+2D8h+forceColor], xmm7
        }
        ScriptableBg_DrawDebugScriptableEventsDef(*(const ScriptableEventDef **)(p_numEvents + 1), *p_numEvents, scrPlace, _RBX, y, *(float *)&forceColora, *(float *)&shadow);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vsubss  xmm1, xmm0, xmm7
        }
      }
      else
      {
        __asm { vmovss  xmm1, dword ptr [rbx] }
      }
      ++v20;
      p_numEvents += 8;
      __asm
      {
        vsubss  xmm0, xmm1, xmm7
        vmovss  dword ptr [rbx], xmm0
      }
    }
    while ( v20 < numNoteTracks );
    __asm
    {
      vmovaps xmm9, [rsp+2D8h+var_78]
      vmovaps xmm8, [rsp+2D8h+var_68]
      vmovaps xmm7, [rsp+2D8h+var_58]
      vmovaps xmm6, [rsp+2D8h+var_48]
    }
  }
}

/*
==============
ScriptableBg_DrawDebugScriptablePartDef
==============
*/
void ScriptableBg_DrawDebugScriptablePartDef(const ScriptablePartDef *part, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const dvar_t *v11; 
  const ScriptablePartDef *v12; 
  const char *name; 
  const char *v17; 
  unsigned int v18; 
  const char *v23; 
  char v24; 
  int flags; 
  char v30; 
  char v31; 
  const char *tagName; 
  char v37; 
  __int64 numDamageTagOverrides; 
  char v43; 
  unsigned int v49; 
  ScriptableDamageTagOverride *damageTagOverrides; 
  char v51; 
  __int64 numStates; 
  const char *v58; 
  char v59; 
  const dvar_t *v65; 
  const ScriptableStateDef *states; 
  const char *v67; 
  const char *v68; 
  char v69; 
  __int64 numChildParts; 
  const char *v80; 
  char v81; 
  int v89; 
  char v90; 
  char v91; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  __int64 forceColor; 
  int forceColora; 
  int forceColorb; 
  int forceColorc; 
  int shadow; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  unsigned int v118; 
  char dest[256]; 
  char string[256]; 
  char v122; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  v11 = DVARSTR_scriptabledebug_partfilter;
  v12 = part;
  _RBX = y;
  _RDI = x;
  if ( !DVARSTR_scriptabledebug_partfilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_partfilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  name = v12->name;
  v17 = v11->current.string;
  v18 = 0;
  __asm
  {
    vmovss  xmm6, [rsp+2F8h+charHeight]
    vmovss  xmm7, [rsp+2F8h+tabWidth]
    vmovss  xmm8, cs:__real@44870000
    vxorps  xmm9, xmm9, xmm9
  }
  if ( !v12->name || !*name || !v17 || !*v17 || I_stristr(name, v17) )
  {
    v23 = v12->name;
    if ( v12->name && *v23 )
    {
      LODWORD(fmt) = v12->scrName;
      Com_sprintf(dest, 0x100ui64, "Name:%s Script:%i", v23, fmt);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vcomiss xmm2, xmm9
        vmovaps xmm0, xmm2
      }
      if ( !(v24 | v31) )
      {
        __asm { vcomiss xmm2, xmm8 }
        if ( v24 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rdi]; x
            vmovss  [rsp+2F8h+var_2C0], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v109, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    flags = v12->flags;
    if ( flags )
    {
      __asm
      {
        vmovss  [rsp+2F8h+forceColor], xmm6
        vmovss  dword ptr [rsp+2F8h+fmt], xmm7
      }
      ScriptableBg_DrawDefFlags(flags, scrPlace, _RDI, _RBX, fmta, *(float *)&forceColora);
      flags = v12->flags;
    }
    if ( (flags & 4) != 0 )
    {
      LODWORD(forceColor) = v12->flatId;
      LODWORD(fmt) = v12->serverInstanceFlatId;
      Com_sprintf(dest, 0x100ui64, "Flat Id: ServerControlled:%i ServerInstanced:%i Overall:%i", v12->serverControlledFlatId, fmt, forceColor);
    }
    else if ( (flags & 2) != 0 )
    {
      LODWORD(fmt) = v12->flatId;
      Com_sprintf(dest, 0x100ui64, "Flat Id: ServerInstanced:%i Overall:%i", v12->serverInstanceFlatId, fmt);
    }
    else
    {
      Com_sprintf(dest, 0x100ui64, "Flat Id:%i", v12->flatId);
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vcomiss xmm2, xmm9
      vmovaps xmm0, xmm2
    }
    if ( !(v30 | v31) )
    {
      __asm { vcomiss xmm2, xmm8 }
      if ( v30 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]; x
          vmovss  [rsp+2F8h+var_2C0], xmm6
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v110, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
    tagName = v12->tagName;
    if ( tagName && *tagName )
    {
      LODWORD(fmt) = v12->scrTagName;
      Com_sprintf(dest, 0x100ui64, "Tag:%s Script:%i", tagName, fmt);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vcomiss xmm2, xmm9
        vmovaps xmm0, xmm2
      }
      if ( !(v37 | v31) )
      {
        __asm { vcomiss xmm2, xmm8 }
        if ( v37 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rdi]; x
            vmovss  [rsp+2F8h+var_2C0], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v111, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
      }
    }
    numDamageTagOverrides = v12->numDamageTagOverrides;
    if ( (_DWORD)numDamageTagOverrides )
    {
      Com_sprintf(dest, 0x100ui64, "%i Damage Tag Overrides", numDamageTagOverrides);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vcomiss xmm2, xmm9
        vmovaps xmm0, xmm2
      }
      if ( !(v43 | v31) )
      {
        __asm { vcomiss xmm2, xmm8 }
        if ( v43 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rdi]; x
            vmovss  [rsp+2F8h+var_2C0], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v112, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
        vaddss  xmm1, xmm7, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
      v49 = 0;
      if ( v12->numDamageTagOverrides )
      {
        do
        {
          damageTagOverrides = v12->damageTagOverrides;
          LODWORD(forceColor) = damageTagOverrides[v49].scrTag;
          Com_sprintf(dest, 0x100ui64, "%i Tag:%s Script:%i", v49, damageTagOverrides[v49].tag, forceColor);
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; y
            vcomiss xmm2, xmm9
            vmovaps xmm0, xmm2
          }
          if ( !(v51 | v31) )
          {
            __asm { vcomiss xmm2, xmm8 }
            if ( v51 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [rdi]; x
                vmovss  [rsp+2F8h+var_2C0], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v113, 0);
              __asm { vmovss  xmm0, dword ptr [rbx] }
            }
          }
          __asm { vaddss  xmm0, xmm0, xmm6 }
          ++v49;
          __asm { vmovss  dword ptr [rbx], xmm0 }
        }
        while ( v49 < v12->numDamageTagOverrides );
        __asm { vmovss  xmm1, dword ptr [rdi] }
      }
      __asm
      {
        vsubss  xmm0, xmm1, xmm7
        vmovss  dword ptr [rdi], xmm0
      }
    }
    numStates = v12->numStates;
    if ( (_DWORD)numStates )
    {
      v58 = "States";
      if ( (_DWORD)numStates == 1 )
        v58 = "State";
      Com_sprintf(dest, 0x100ui64, "%i %s", numStates, v58);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vcomiss xmm2, xmm9
        vmovaps xmm0, xmm2
      }
      if ( !(v59 | v31) )
      {
        __asm { vcomiss xmm2, xmm8 }
        if ( v59 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rdi]; x
            vmovss  [rsp+2F8h+var_2C0], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v114, 0);
          __asm { vmovss  xmm0, dword ptr [rbx] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm0
        vaddss  xmm1, xmm7, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
      v65 = DVARSTR_scriptabledebug_statefilter;
      states = v12->states;
      v118 = v12->numStates;
      if ( !DVARSTR_scriptabledebug_statefilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_statefilter") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v65);
      v67 = v65->current.string;
      if ( v118 )
      {
        do
        {
          v68 = states->base.name;
          if ( !states->base.name || !*v68 || I_strempty(v67) || I_stristr(v68, v67) )
          {
            Com_sprintf(string, 0x100ui64, "State %i", v18);
            __asm
            {
              vmovss  xmm2, dword ptr [rbx]; y
              vcomiss xmm2, xmm9
              vmovaps xmm0, xmm2
            }
            if ( !(v69 | v31) )
            {
              __asm { vcomiss xmm2, xmm8 }
              if ( v69 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rdi]; x
                  vmovss  [rsp+2F8h+var_2C0], xmm6
                }
                CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, string, &colorWhite, 0, 1, v115, 0);
                __asm { vmovss  xmm0, dword ptr [rbx] }
              }
            }
            __asm
            {
              vaddss  xmm0, xmm0, xmm6
              vmovss  dword ptr [rbx], xmm0
              vaddss  xmm1, xmm7, dword ptr [rdi]
              vmovss  [rsp+2F8h+forceColor], xmm6
              vmovss  dword ptr [rdi], xmm1
              vmovss  dword ptr [rsp+2F8h+fmt], xmm7
            }
            ScriptableBg_DrawDebugScriptableStateDef(states, scrPlace, _RDI, _RBX, fmtb, *(float *)&forceColorb);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi]
              vsubss  xmm1, xmm0, xmm7
              vmovss  dword ptr [rdi], xmm1
            }
          }
          ++v18;
          ++states;
        }
        while ( v18 < v118 );
        v12 = part;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rdi], xmm1
      }
    }
  }
  numChildParts = v12->numChildParts;
  if ( (_DWORD)numChildParts )
  {
    v80 = "Parts";
    if ( (_DWORD)numChildParts == 1 )
      v80 = "Part";
    Com_sprintf(dest, 0x100ui64, "%i %s", numChildParts, v80);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vcomiss xmm2, xmm9
      vmovaps xmm0, xmm2
    }
    if ( !(v81 | v31) )
    {
      __asm { vcomiss xmm2, xmm8 }
      if ( v81 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]; x
          vmovss  [rsp+2F8h+var_2C0], xmm6
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v116, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm1, xmm7, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  [rsp+2F8h+shadow], xmm6
      vmovss  [rsp+2F8h+forceColor], xmm7
    }
    ScriptableBg_DrawDebugScriptablePartsDef(v12->childParts, v12->numChildParts, scrPlace, _RDI, _RBX, *(float *)&forceColorc, *(float *)&shadow);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm1
    }
  }
  v89 = v12->flags;
  if ( (v89 & 0x100) != 0 )
  {
    if ( (v89 & 2) != 0 )
    {
      LODWORD(fmt) = v12->eventStreamBufferOffsetClient;
      Com_sprintf(dest, 0x100ui64, "Event Buffer Offset: Server:%i Client:%i", v12->eventStreamBufferOffsetServer, fmt);
    }
    else
    {
      Com_sprintf(dest, 0x100ui64, "Event Buffer Offset: Client:%i", v12->eventStreamBufferOffsetClient);
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vcomiss xmm2, xmm9
      vmovaps xmm0, xmm2
    }
    if ( !(v90 | v91) )
    {
      __asm { vcomiss xmm2, xmm8 }
      if ( v90 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]; x
          vmovss  [rsp+2F8h+var_2C0], xmm6
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v117, 0);
        __asm { vmovss  xmm0, dword ptr [rbx] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
  }
  _R11 = &v122;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
ScriptableBg_DrawDebugScriptablePartsDef
==============
*/
void ScriptableBg_DrawDebugScriptablePartsDef(const ScriptablePartDef *parts, const unsigned int numParts, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const dvar_t *v11; 
  const char *string; 
  unsigned int v18; 
  const char *name; 
  char v24; 
  char v27; 
  float fmt; 
  int forceColor; 
  float v39; 
  char dest[256]; 

  v11 = DVARSTR_scriptabledebug_partfilter;
  _RSI = x;
  _RDI = y;
  if ( !DVARSTR_scriptabledebug_partfilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_partfilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  string = v11->current.string;
  v18 = 0;
  if ( numParts )
  {
    __asm
    {
      vmovaps [rsp+1D8h+var_48], xmm6
      vmovss  xmm6, [rsp+1D8h+charHeight]
      vmovaps [rsp+1D8h+var_58], xmm7
      vmovss  xmm7, [rsp+1D8h+tabWidth]
      vmovaps [rsp+1D8h+var_68], xmm8
      vmovss  xmm8, cs:__real@44870000
      vmovaps [rsp+1D8h+var_78], xmm9
      vxorps  xmm9, xmm9, xmm9
    }
    do
    {
      name = parts->name;
      if ( !parts->name || !*name || I_strempty(string) || I_stristr(name, string) )
      {
        Com_sprintf(dest, 0x100ui64, "Part %i", v18);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm9
          vmovaps xmm0, xmm2
        }
        if ( !(v24 | v27) )
        {
          __asm { vcomiss xmm2, xmm8 }
          if ( v24 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rsi]; x
              vmovss  [rsp+1D8h+var_1A0], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v39, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rsi]
        vmovss  [rsp+1D8h+forceColor], xmm6
        vmovss  dword ptr [rsi], xmm0
        vmovss  dword ptr [rsp+1D8h+fmt], xmm7
      }
      ScriptableBg_DrawDebugScriptablePartDef(parts, scrPlace, _RSI, y, fmt, *(float *)&forceColor);
      __asm { vmovss  xmm0, dword ptr [rsi] }
      ++v18;
      ++parts;
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rsi], xmm1
      }
    }
    while ( v18 < numParts );
    __asm
    {
      vmovaps xmm9, [rsp+1D8h+var_78]
      vmovaps xmm8, [rsp+1D8h+var_68]
      vmovaps xmm7, [rsp+1D8h+var_58]
      vmovaps xmm6, [rsp+1D8h+var_48]
    }
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableStateDef
==============
*/
void ScriptableBg_DrawDebugScriptableStateDef(const ScriptableStateDef *state, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const char *name; 
  int flags; 
  const char *v25; 
  char v26; 
  char v36; 
  char v48; 
  char v53; 
  const char *hintStringDisabled; 
  const char *hintIcon; 
  const char *v60; 
  char v61; 
  char v62; 
  const char *v63; 
  char v64; 
  __int64 validAttackerTeams; 
  const char *v70; 
  char v71; 
  char v72; 
  __int64 numWeaponClasses; 
  char v78; 
  unsigned int v84; 
  char v85; 
  __int64 numWeapons; 
  char v92; 
  unsigned int v98; 
  const char **p_szInternalName; 
  const char *v100; 
  char v101; 
  __int64 minimumDamage; 
  char v108; 
  char v122; 
  const char *script_id; 
  char v128; 
  __int64 numEvents; 
  const char *v138; 
  char v139; 
  float setColor; 
  vec4_t *setColora; 
  vec4_t *setColorb; 
  vec4_t *setColorc; 
  int forceColor; 
  double forceColora; 
  double forceColorb; 
  int forceColorc; 
  __int64 shadow; 
  double shadowa; 
  int shadowb; 
  float v163; 
  float v164; 
  float v165; 
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  float v170; 
  float v171; 
  float v172; 
  float v173; 
  float v174; 
  float v175; 
  float v176; 
  float v177; 
  const char *v178; 
  __int64 v179[4]; 
  __int64 v180[7]; 
  __int64 v181[10]; 
  __int64 v182[14]; 
  __int64 v183[16]; 
  char dest[256]; 
  char v185; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovss  xmm6, [rbp+280h+charHeight]
  }
  v179[0] = (__int64)"Simple";
  v181[0] = (__int64)"All";
  v179[1] = (__int64)"Health";
  _R14 = state;
  v180[0] = (__int64)"All";
  v179[2] = (__int64)"Scripted";
  v181[4] = (__int64)"None";
  v179[3] = (__int64)"Usable";
  _RDI = y;
  v180[5] = (__int64)"None";
  v181[1] = (__int64)"Splash Only";
  _R15 = x;
  v182[0] = (__int64)"All";
  v181[2] = (__int64)"No Splash";
  v181[3] = (__int64)"No Melee";
  v181[5] = (__int64)"Melee Only";
  v181[6] = (__int64)"Melee and Splash Only";
  v181[7] = (__int64)"Crush Only";
  v181[8] = (__int64)"Crush and Splash Only";
  v180[1] = (__int64)"No Player";
  v180[2] = (__int64)"Player Only";
  v180[3] = (__int64)"No AI";
  v180[4] = (__int64)"AI Only";
  v182[1] = (__int64)"Bad";
  v182[2] = (__int64)"Axis";
  v182[3] = (__int64)"Allies";
  v182[4] = (__int64)"Three";
  v182[5] = (__int64)"Neutral";
  v182[6] = (__int64)"Dead";
  v182[7] = (__int64)"My_Team";
  v182[8] = (__int64)"Enemy_Team";
  v182[9] = (__int64)"All_But_My_Team";
  v182[10] = (__int64)"All_But_Enemy_Team";
  v182[11] = (__int64)"Enemy_Team_And_Me";
  v182[12] = (__int64)"Just_Me";
  v183[0] = (__int64)"RIFLE";
  v183[1] = (__int64)"SNIPER";
  v183[2] = (__int64)"MG";
  v183[3] = (__int64)"SMG";
  v183[4] = (__int64)"SPREAD";
  v183[5] = (__int64)"PISTOL";
  v183[6] = (__int64)"GRENADE";
  name = state->base.name;
  v183[7] = (__int64)"ROCKETLAUNCHER";
  v183[8] = (__int64)"TURRET";
  v183[9] = (__int64)"THROWINGKNIFE";
  v183[10] = (__int64)"NON_PLAYER";
  v183[11] = (__int64)"ITEM";
  v183[12] = (__int64)"BEAM";
  v183[13] = (__int64)"BALL";
  v183[14] = (__int64)"NONE";
  if ( name && *name )
  {
    Com_sprintf(dest, 0x100ui64, "Name:%s Type:%s", name, (const char *)v179[state->type]);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]
      vmovaps xmm0, xmm2
    }
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "Type:%s", (const char *)v179[state->type]);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovaps xmm2, xmm0; y
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@44870000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm2, xmm8
    vmovss  xmm9, [rbp+280h+tabWidth]
    vaddss  xmm0, xmm6, xmm0
    vmovss  dword ptr [rdi], xmm0
  }
  flags = _R14->base.flags;
  if ( flags )
  {
    __asm
    {
      vmovss  [rsp+380h+forceColor], xmm6
      vmovss  dword ptr [rsp+380h+setColor], xmm9
    }
    ScriptableBg_DrawDefFlags(flags, scrPlace, _R15, _RDI, setColor, *(float *)&forceColor);
  }
  switch ( _R14->type )
  {
    case Scriptable_StateType_Health:
      Com_sprintf(dest, 0x100ui64, "Health:%i", (unsigned int)_R14->data.health.health);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v64 | v62) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v64 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  [rsp+380h+var_348], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v167, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      validAttackerTeams = _R14->data.health.validAttackerTeams;
      v70 = (const char *)v181[_R14->data.health.validDamageCause];
      if ( (_DWORD)validAttackerTeams )
        Com_sprintf(dest, 0x100ui64, "ValidCause:%s ValidAttacker:%s ValidAttackerTeam:%s", v70, (const char *)v180[_R14->data.health.validAttackers], (const char *)v182[validAttackerTeams]);
      else
        Com_sprintf(dest, 0x100ui64, "ValidCause:%s ValidAttacker:%s", v70, (const char *)v180[_R14->data.health.validAttackers]);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v71 | v72) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v71 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  [rsp+380h+var_348], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v168, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      numWeaponClasses = _R14->data.health.numWeaponClasses;
      if ( (_DWORD)numWeaponClasses )
      {
        Com_sprintf(dest, 0x100ui64, "Weapon Class Filter: %i entries", numWeaponClasses);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v78 | v62) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v78 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  [rsp+380h+var_348], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v169, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
        }
        v84 = 0;
        if ( _R14->data.health.numWeaponClasses )
        {
          do
          {
            Com_sprintf(dest, 0x100ui64, "%i %s", v84, (const char *)v183[_R14->data.health.weaponClasses[v84]]);
            __asm
            {
              vmovss  xmm2, dword ptr [rdi]; y
              vcomiss xmm2, xmm8
              vmovaps xmm0, xmm2
            }
            if ( !(v85 | v62) )
            {
              __asm { vcomiss xmm2, xmm7 }
              if ( v85 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [r15]; x
                  vmovss  [rsp+380h+var_348], xmm6
                }
                CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v170, 0);
                __asm { vmovss  xmm0, dword ptr [rdi] }
              }
            }
            __asm { vaddss  xmm0, xmm0, xmm6 }
            ++v84;
            __asm { vmovss  dword ptr [rdi], xmm0 }
          }
          while ( v84 < _R14->data.health.numWeaponClasses );
          __asm { vmovss  xmm1, dword ptr [r15] }
        }
        __asm
        {
          vsubss  xmm0, xmm1, xmm9
          vmovss  dword ptr [r15], xmm0
        }
      }
      numWeapons = _R14->data.health.numWeapons;
      if ( (_DWORD)numWeapons )
      {
        Com_sprintf(dest, 0x100ui64, "Weapon Filter: %i entries", numWeapons);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v92 | v62) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v92 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  [rsp+380h+var_348], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v171, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
        }
        v98 = 0;
        if ( _R14->data.health.numWeapons )
        {
          do
          {
            p_szInternalName = &_R14->data.health.weapons[v98]->szInternalName;
            if ( p_szInternalName )
              v100 = *p_szInternalName;
            else
              v100 = "UNKNOWN";
            Com_sprintf(dest, 0x100ui64, "%i %s", v98, v100);
            __asm
            {
              vmovss  xmm2, dword ptr [rdi]; y
              vcomiss xmm2, xmm8
              vmovaps xmm0, xmm2
            }
            if ( !(v101 | v62) )
            {
              __asm { vcomiss xmm2, xmm7 }
              if ( v101 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [r15]; x
                  vmovss  [rsp+380h+var_348], xmm6
                }
                CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v172, 0);
                __asm { vmovss  xmm0, dword ptr [rdi] }
              }
            }
            __asm { vaddss  xmm0, xmm0, xmm6 }
            ++v98;
            __asm { vmovss  dword ptr [rdi], xmm0 }
          }
          while ( v98 < _R14->data.health.numWeapons );
          __asm { vmovss  xmm1, dword ptr [r15] }
        }
        __asm
        {
          vsubss  xmm0, xmm1, xmm9
          vmovss  dword ptr [r15], xmm0
        }
      }
      minimumDamage = (unsigned int)_R14->data.health.minimumDamage;
      if ( (int)minimumDamage > 0 )
      {
        Com_sprintf(dest, 0x100ui64, "Minimum Damage: %i", minimumDamage);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v108 | v62) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v108 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  [rsp+380h+var_348], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v173, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+68h]
        vmovss  xmm1, dword ptr [r14+64h]
        vmovss  xmm3, dword ptr [r14+5Ch]
        vmovss  xmm2, dword ptr [r14+60h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+380h+shadow], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  qword ptr [rsp+380h+forceColor], xmm1
        vmovq   r9, xmm3
        vmovsd  [rsp+380h+setColor], xmm2
      }
      Com_sprintf(dest, 0x100ui64, "Damage Propagation: ToParent:%.3f ToChild:%.3f FromParent:%.3f FromChild:%.3f", *(double *)&_XMM3, *(double *)&setColorc, forceColorb, shadowa);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vcomiss xmm2, xmm8
        vmovaps xmm0, xmm2
      }
      if ( !(v122 | v62) )
      {
        __asm { vcomiss xmm2, xmm7 }
        if ( v122 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [r15]; x
            vmovss  [rsp+380h+var_348], xmm6
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v174, 0);
          __asm { vmovss  xmm0, dword ptr [rdi] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      script_id = _R14->data.health.script_id;
      if ( script_id && *script_id )
      {
        Com_sprintf(dest, 0x100ui64, "ScriptId:%s", script_id);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vcomiss xmm2, xmm8
          vmovaps xmm0, xmm2
        }
        if ( !(v128 | v62) )
        {
          __asm { vcomiss xmm2, xmm7 }
          if ( v128 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r15]; x
              vmovss  [rsp+380h+var_348], xmm6
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v175, 0);
            __asm { vmovss  xmm0, dword ptr [rdi] }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      Com_sprintf(dest, 0x100ui64, "Splash Damage is%s localized");
      goto LABEL_82;
    case Scriptable_StateType_Scripted:
      v63 = _R14->data.scripted.script_id;
      if ( !v63 || !*v63 )
        break;
      Com_sprintf(dest, 0x100ui64, "ScriptId:%s");
      goto LABEL_82;
    case Scriptable_StateType_Usable:
      v25 = _R14->data.scripted.script_id;
      if ( v25 )
      {
        if ( *v25 )
        {
          Com_sprintf(dest, 0x100ui64, "ScriptId:%s", v25);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v26 | v62) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v26 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  [rsp+380h+var_348], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v163, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
            vmovss  xmm3, dword ptr [r14+38h]
            vmovss  xmm1, dword ptr [r14+34h]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm1, xmm1, xmm1
            vmovq   r9, xmm3
            vmovsd  [rsp+380h+setColor], xmm1
          }
          Com_sprintf(dest, 0x100ui64, "Use FOV: %.3f Face:%.3f", *(double *)&_XMM3, *(double *)&setColora);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v36 | v62) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v36 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  [rsp+380h+var_348], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v164, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
            vmovss  xmm0, dword ptr [r14+44h]
            vmovss  xmm3, dword ptr [r14+3Ch]
            vmovss  xmm1, dword ptr [r14+40h]
          }
          LODWORD(shadow) = _R14->data.usable.useRadiusMinimized;
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  qword ptr [rsp+380h+forceColor], xmm0
            vmovq   r9, xmm3
            vmovsd  [rsp+380h+setColor], xmm1
          }
          Com_sprintf(dest, 0x100ui64, "Use Radius: %.3f Auto:%.3f Display:%.3f Minimized:%d", *(double *)&_XMM3, *(double *)&setColorb, forceColora, shadow);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v48 | v62) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v48 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  [rsp+380h+var_348], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v165, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
          Com_sprintf(dest, 0x100ui64, "Priority:%d", (unsigned int)_R14->data.usable.priority);
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vcomiss xmm2, xmm8
            vmovaps xmm0, xmm2
          }
          if ( !(v53 | v62) )
          {
            __asm { vcomiss xmm2, xmm7 }
            if ( v53 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [r15]; x
                vmovss  [rsp+380h+var_348], xmm6
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v166, 0);
              __asm { vmovss  xmm0, dword ptr [rdi] }
            }
          }
          __asm
          {
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rdi], xmm0
          }
          if ( _R14->data.health.script_id )
          {
            hintStringDisabled = (char *)&queryFormat.fmt + 3;
            hintIcon = (char *)&queryFormat.fmt + 3;
            if ( _R14->data.usable.hintIcon )
              hintIcon = _R14->data.usable.hintIcon;
            if ( _R14->data.usable.hintStringDisabled )
              hintStringDisabled = _R14->data.usable.hintStringDisabled;
            v178 = hintStringDisabled;
            v60 = SL_ConvertToString(_R14->data.usable.hintTag);
            Com_sprintf(dest, 0x100ui64, "Hint String: %s Tag:%s Disabled:%s Icon:%s", _R14->data.health.script_id, v60, v178, hintIcon);
LABEL_82:
            __asm
            {
              vmovss  xmm2, dword ptr [rdi]; y
              vcomiss xmm2, xmm8
              vmovaps xmm0, xmm2
            }
            if ( !(v61 | v62) )
            {
              __asm { vcomiss xmm2, xmm7 }
              if ( v61 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [r15]; x
                  vmovss  [rsp+380h+var_348], xmm6
                }
                CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v176, 0);
                __asm { vmovss  xmm0, dword ptr [rdi] }
              }
            }
            __asm
            {
              vaddss  xmm0, xmm0, xmm6
              vmovss  dword ptr [rdi], xmm0
            }
          }
        }
      }
      break;
  }
  numEvents = _R14->base.numEvents;
  if ( (_DWORD)numEvents )
  {
    v138 = "Events";
    if ( (_DWORD)numEvents == 1 )
      v138 = "Event";
    Com_sprintf(dest, 0x100ui64, "%i %s", numEvents, v138);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vcomiss xmm2, xmm8
      vmovaps xmm0, xmm2
    }
    if ( !(v139 | v62) )
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v139 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r15]; x
          vmovss  [rsp+380h+var_348], xmm6
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v177, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
    }
    __asm
    {
      vaddss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm9, dword ptr [r15]
      vmovss  dword ptr [r15], xmm1
      vmovss  dword ptr [rsp+380h+shadow], xmm6
      vmovss  [rsp+380h+forceColor], xmm9
    }
    ScriptableBg_DrawDebugScriptableEventsDef(_R14->base.events, _R14->base.numEvents, scrPlace, _R15, _RDI, *(float *)&forceColorc, *(float *)&shadowb);
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vsubss  xmm1, xmm0, xmm9
      vmovss  dword ptr [r15], xmm1
    }
  }
  _R11 = &v185;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
  }
}

/*
==============
ScriptableBg_DrawDefFlags
==============
*/
void ScriptableBg_DrawDefFlags(const int flags, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const char *v12; 
  char v13; 
  char v16; 
  float v21; 
  char dest[512]; 

  _RBP = x;
  dest[0] = 0;
  _RDI = y;
  I_strcat(dest, 0x200ui64, "Flags:");
  if ( (flags & 4) != 0 )
  {
    v12 = " | Server-Controlled";
  }
  else
  {
    if ( (flags & 2) == 0 )
      goto LABEL_6;
    v12 = " | Server-Instanced";
  }
  I_strcat(dest, 0x200ui64, v12);
LABEL_6:
  if ( (flags & 8) != 0 )
    I_strcat(dest, 0x200ui64, " | Controls-Sun");
  if ( (flags & 0x10) != 0 )
    I_strcat(dest, 0x200ui64, " | Controls-light");
  if ( (flags & 0x20) != 0 )
    I_strcat(dest, 0x200ui64, " | Controls-Animation");
  if ( (flags & 0x40) != 0 )
    I_strcat(dest, 0x200ui64, " | Can't-be-Dynent");
  if ( (flags & 0x80u) != 0 )
    I_strcat(dest, 0x200ui64, " | Has-Health");
  if ( (flags & 0x100) != 0 )
    I_strcat(dest, 0x200ui64, " | Has-Health-States");
  if ( (flags & 0x200) != 0 )
    I_strcat(dest, 0x200ui64, " | Requires-Update");
  if ( (flags & 0x800) != 0 )
    I_strcat(dest, 0x200ui64, " | Characters-Only");
  if ( (flags & 0x1000) != 0 )
    I_strcat(dest, 0x200ui64, " | Allow-Scriptable-Chain-Explosions");
  if ( (flags & 0x20000) != 0 )
    I_strcat(dest, 0x200ui64, " | Has-Loot-Table");
  if ( (flags & 0x80000) != 0 )
    I_strcat(dest, 0x200ui64, " | Is-Door");
  if ( (flags & 0x100000) != 0 )
    I_strcat(dest, 0x200ui64, " | Is-Double-Door");
  I_strcat(dest, 0x200ui64, " |");
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]; y
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  if ( v13 | v16 )
    goto LABEL_33;
  __asm { vcomiss xmm2, cs:__real@44870000 }
  if ( !v13 )
  {
LABEL_33:
    __asm { vaddss  xmm1, xmm2, [rsp+288h+charHeight] }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+0]; x
      vmovaps [rsp+288h+var_28], xmm6
      vmovss  xmm6, [rsp+288h+charHeight]
      vmovss  [rsp+288h+var_250], xmm6
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v21, 0);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rdi]
      vmovaps xmm6, [rsp+288h+var_28]
    }
  }
  __asm { vmovss  dword ptr [rdi], xmm1 }
}

/*
==============
ScriptableBg_DrawLookedAtInstanceInfo
==============
*/
void ScriptableBg_DrawLookedAtInstanceInfo(const ScreenPlacement *scrPlace, const ScriptableBg_DrawDebugInfo *const debugInfo, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int v23; 
  unsigned int v24; 
  const ScriptableDef *def; 
  const ScriptableDef *v29; 
  char v30; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v36; 
  const ScriptableDef *v37; 
  bool v99; 
  ScriptableInstanceContext *v100; 
  float fmt; 
  float t; 
  float v114; 
  float *ya; 
  vec3_t rayDir; 
  vec3_t outOrigin; 
  vec3_t angles; 
  vec3_t v119; 
  __int128 v120; 
  vec3_t boxOrigin; 
  tmat33_t<vec3_t> axis; 
  char v131; 

  __asm
  {
    vmovaps [rsp+1A0h+var_70], xmm8
    vmovaps [rsp+1A0h+var_A0], xmm11
  }
  _RBX = DCONST_DVARFLT_scriptable_debug_inspectLookAtDistance;
  ya = y;
  _R14 = debugInfo;
  if ( !DCONST_DVARFLT_scriptable_debug_inspectLookAtDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_inspectLookAtDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm1, dword ptr [r14+0Ch]
    vmovss  xmm8, cs:__real@7f7fffff
    vmovss  dword ptr [rsp+1A0h+rayDir], xmm1
    vmovss  xmm1, dword ptr [r14+14h]
    vmulss  xmm11, xmm0, xmm0
    vmovss  xmm0, dword ptr [r14+10h]
    vmovss  dword ptr [rsp+1A0h+rayDir+4], xmm0
    vmovss  dword ptr [rsp+1A0h+rayDir+8], xmm1
  }
  v23 = 0;
  v24 = -1;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.totalInstanceCount )
  {
    __asm
    {
      vmovaps [rsp+1A0h+var_80], xmm9
      vmovss  xmm9, cs:__real@41200000
      vmovaps [rsp+1A0h+var_90], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps [rsp+1A0h+var_B0], xmm12
      vmovss  xmm12, cs:__real@80000000
      vmovaps [rsp+1A0h+var_50], xmm6
      vmovaps [rsp+1A0h+var_60], xmm7
    }
    do
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( v23 < g_scriptableWorldCounts.serverInstanceCount && ((def = ScriptableSv_GetInstanceCommonContext(v23)->def, (v29 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v23)->def) == NULL) || (v29->flags & 6) != 0 ? (v30 = 1) : (v30 = 0), def && (def->flags & 2) != 0 && v30) )
      {
        _RAX = ScriptableSv_GetInstanceCommonContext(v23);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+20h]
          vmovss  dword ptr [rsp+1A0h+outOrigin], xmm0
          vmovss  xmm1, dword ptr [rax+24h]
          vmovss  dword ptr [rsp+1A0h+outOrigin+4], xmm1
          vmovss  xmm0, dword ptr [rax+28h]
          vmovss  dword ptr [rsp+1A0h+outOrigin+8], xmm0
        }
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v23);
      }
      else
      {
        v36 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v23);
        ScriptableInstanceContextSecure::GetOrigin(v36, v23, &outOrigin);
        InstanceCommonContext = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v23);
      }
      v37 = InstanceCommonContext->def;
      if ( InstanceCommonContext->def )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14]
          vsubss  xmm3, xmm0, dword ptr [rsp+1A0h+outOrigin]
          vmovss  xmm1, dword ptr [r14+4]
          vmovss  xmm0, dword ptr [r14+8]
          vsubss  xmm2, xmm1, dword ptr [rsp+1A0h+outOrigin+4]
          vsubss  xmm4, xmm0, dword ptr [rsp+1A0h+outOrigin+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm5, xmm3, xmm0
          vcomiss xmm5, xmm10
          vcomiss xmm5, xmm11
        }
        if ( !InstanceCommonContext->def )
        {
          ScriptableBg_DrawDebugScriptableInstanceInWorld(v23, InstanceCommonContext->def);
          __asm
          {
            vmovss  xmm4, dword ptr [rsp+1A0h+rayDir]
            vmovss  xmm6, dword ptr [rsp+1A0h+rayDir+4]
            vmovss  xmm5, dword ptr [rsp+1A0h+rayDir+8]
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm0, xmm2, xmm1
            vsqrtss xmm3, xmm0, xmm0
            vcmpless xmm0, xmm3, xmm12
            vblendvps xmm0, xmm3, xmm10, xmm0
            vdivss  xmm2, xmm10, xmm0
            vmulss  xmm0, xmm4, xmm2
            vmovss  dword ptr [rsp+1A0h+rayDir], xmm0
            vmulss  xmm0, xmm5, xmm2
            vmulss  xmm1, xmm6, xmm2
            vmovss  dword ptr [rsp+1A0h+rayDir+8], xmm0
            vmovss  dword ptr [rsp+1A0h+rayDir+4], xmm1
          }
          if ( ScriptableBg_ServerContextIsPrimary(v23) )
          {
            _RDI = ScriptableSv_GetInstanceCommonContext(v23);
            __asm
            {
              vmovss  xmm0, dword ptr [rax+20h]
              vmovss  dword ptr [rbp+0A0h+var_120], xmm0
              vmovss  xmm1, dword ptr [rax+24h]
              vmovss  dword ptr [rbp+0A0h+var_120+4], xmm1
              vmovss  xmm0, dword ptr [rax+28h]
              vmovss  dword ptr [rbp+0A0h+var_120+8], xmm0
              vmovss  xmm1, dword ptr [rax+2Ch]
              vmovss  dword ptr [rsp+1A0h+angles], xmm1
              vmovss  xmm0, dword ptr [rax+30h]
              vmovss  dword ptr [rsp+1A0h+angles+4], xmm0
              vmovss  xmm1, dword ptr [rax+34h]
              vmovss  dword ptr [rsp+1A0h+angles+8], xmm1
            }
          }
          else
          {
            _RDI = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v23);
            ScriptableInstanceContextSecure::GetOrigin(_RDI, v23, &v119);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+2Ch]
              vmovss  dword ptr [rsp+1A0h+angles], xmm0
              vmovss  xmm1, dword ptr [rdi+30h]
              vmovss  dword ptr [rsp+1A0h+angles+4], xmm1
              vmovss  xmm0, dword ptr [rdi+34h]
              vmovss  dword ptr [rsp+1A0h+angles+8], xmm0
            }
          }
          if ( BG_XCompositeModel_GetScriptableModel(_RDI) )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rax+2Ch]
              vmovups [rbp+0A0h+var_110], xmm0
              vmovsd  xmm1, qword ptr [rax+3Ch]
              vmovsd  [rbp+0A0h+var_100], xmm1
            }
          }
          else
          {
            __asm
            {
              vmovups xmm0, cs:__xmm@41200000000000000000000000000000
              vmovups [rbp+0A0h+var_110], xmm0
              vmovss  dword ptr [rbp+0A0h+var_100], xmm9
              vmovss  dword ptr [rbp+0A0h+var_100+4], xmm9
            }
          }
          AnglesToAxis(&angles, &axis);
          __asm
          {
            vmovss  xmm7, dword ptr [rbp+0A0h+var_110+4]
            vmovss  xmm6, dword ptr [rbp+0A0h+var_110]
            vmovss  xmm5, dword ptr [rbp+0A0h+var_110+8]
            vmulss  xmm2, xmm7, dword ptr [rbp+0A0h+axis+0Ch]
            vmulss  xmm0, xmm6, dword ptr [rbp+0A0h+axis]
            vmulss  xmm4, xmm7, dword ptr [rbp+0A0h+axis+10h]
            vmulss  xmm1, xmm5, dword ptr [rbp+0A0h+axis+1Ch]
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm0, xmm5, dword ptr [rbp+0A0h+axis+18h]
            vaddss  xmm2, xmm3, xmm0
            vaddss  xmm3, xmm2, dword ptr [rbp+0A0h+var_120]
            vmulss  xmm2, xmm6, dword ptr [rbp+0A0h+axis+4]
            vmovss  dword ptr [rbp+0A0h+boxOrigin], xmm3
            vaddss  xmm3, xmm4, xmm2
            vmulss  xmm4, xmm7, dword ptr [rbp+0A0h+axis+14h]
            vaddss  xmm2, xmm3, xmm1
            vaddss  xmm3, xmm2, dword ptr [rbp+0A0h+var_120+4]
            vmulss  xmm2, xmm6, dword ptr [rbp+0A0h+axis+8]
            vmulss  xmm1, xmm5, dword ptr [rbp+0A0h+axis+20h]
            vmovss  dword ptr [rbp+0A0h+boxOrigin+4], xmm3
            vaddss  xmm3, xmm4, xmm2
            vaddss  xmm2, xmm3, xmm1
            vaddss  xmm3, xmm2, dword ptr [rbp+0A0h+var_120+8]
            vmovss  dword ptr [rbp+0A0h+boxOrigin+8], xmm3
          }
          if ( IntersectRayBox(&_R14->viewPos, &rayDir, &boxOrigin, (const vec3_t *)&v120 + 1, &axis, &v114) )
          {
            v99 = 0;
            if ( (v37->flags & 6) == 0 || (v100 = ScriptableSv_GetInstanceCommonContext(v23), v99 = v100->linkedObjectType == SCRIPTABLE_LINK_NONE, v100->linkedObjectType != SCRIPTABLE_LINK_ENTITY) || (v99 = 0, v100->linkedObjectIndex) )
            {
              __asm
              {
                vmovss  xmm0, [rsp+1A0h+var_160]
                vcomiss xmm0, xmm8
              }
              if ( v99 )
              {
                __asm { vmovaps xmm8, xmm0 }
                v24 = v23;
              }
            }
          }
        }
      }
      ++v23;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v23 < g_scriptableWorldCounts.totalInstanceCount );
    __asm
    {
      vmovaps xmm12, [rsp+1A0h+var_B0]
      vmovaps xmm10, [rsp+1A0h+var_90]
      vmovaps xmm9, [rsp+1A0h+var_80]
      vmovaps xmm7, [rsp+1A0h+var_60]
      vmovaps xmm6, [rsp+1A0h+var_50]
    }
    if ( v24 != -1 )
    {
      __asm
      {
        vmovss  xmm0, [rbp+0A0h+charHeight]
        vmovss  xmm1, [rbp+0A0h+tabWidth]
        vmovss  dword ptr [rsp+1A0h+t], xmm0
        vmovss  dword ptr [rsp+1A0h+fmt], xmm1
      }
      ScriptableBg_DrawDebugScriptableInstance(v24, scrPlace, x, ya, fmt, t);
    }
  }
  _R11 = &v131;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-78h]
  }
}

/*
==============
ScriptableBg_GetEventTypeName
==============
*/
const char *ScriptableBg_GetEventTypeName(Scriptable_EventType eventType)
{
  __int64 v1; 
  int v4; 

  v1 = eventType;
  if ( (unsigned int)eventType >= Scriptable_EventType_Count )
  {
    v4 = 44;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 3287, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_scriptable_eventTypeNames ) ) + 0 ) )", "eventType doesn't index s_scriptable_eventTypeNames\n\t%i not in [0, %i)", eventType, v4) )
      __debugbreak();
  }
  return s_scriptable_eventTypeNames[v1];
}

/*
==============
ScriptableBg_ServerContextIsPrimary
==============
*/
bool ScriptableBg_ServerContextIsPrimary(const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  const ScriptableDef *v3; 
  bool v4; 
  bool result; 

  ScriptableCommon_AssertCountsInitialized();
  result = 0;
  if ( scriptableIndex < g_scriptableWorldCounts.serverInstanceCount )
  {
    def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
    v3 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, scriptableIndex)->def;
    v4 = !v3 || (v3->flags & 6) != 0;
    if ( def && (def->flags & 2) != 0 && v4 )
      return 1;
  }
  return result;
}

