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
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v6; 
  const ScreenPlacement *v8; 
  float integer; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const ScriptableDef *def; 
  unsigned int v14; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef **p_def; 
  const dvar_t *v17; 
  float v18; 
  unsigned int NumPools; 
  unsigned int v20; 
  float v21; 
  int i; 
  float v23; 
  int j; 
  float v25; 
  const dvar_t *v26; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v27; 
  float v28; 
  __int64 v29; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  float v34; 
  float v35; 
  float v36; 
  const dvar_t *v37; 
  unsigned int v38; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v39; 
  const char *k; 
  const char **v41; 
  int v42; 
  const char *v43; 
  float v44; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  unsigned __int64 v47; 
  const ScriptableDef *v48; 
  const char *v49; 
  float v50; 
  float v51; 
  const dvar_t *v52; 
  float v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int runtimeInstanceCount; 
  unsigned int v57; 
  __int64 v58; 
  float v59; 
  unsigned int v60; 
  const ScriptableDef *v61; 
  const char *v62; 
  unsigned int v63; 
  unsigned int v64; 
  const char *v65; 
  bool v66; 
  const char *v67; 
  __int64 v68; 
  scr_string_t script_noteworthy; 
  const char *name; 
  const char *v71; 
  float v72; 
  const dvar_t *v73; 
  const dvar_t *v74; 
  signed int v75; 
  float v76; 
  const dvar_t *v77; 
  float v78; 
  unsigned int v79; 
  float v80; 
  __int64 v81; 
  unsigned __int64 v82; 
  __int64 v83; 
  unsigned int v84; 
  unsigned int v85; 
  unsigned int v86; 
  unsigned int v87; 
  __int64 v88; 
  float v89; 
  float v90; 
  float v91; 
  const dvar_t *v92; 
  float v93; 
  float v94; 
  float v95; 
  const dvar_t *v96; 
  const dvar_t *v97; 
  int v98; 
  const dvar_t *v99; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 charHeight; 
  __int64 charHeighta; 
  __int64 charHeightb; 
  __int64 shadow; 
  __int64 v107; 
  float y; 
  float x; 
  unsigned int used; 
  unsigned int v111; 
  unsigned int v112; 
  unsigned int capacity; 
  unsigned int elementSize; 
  const ScreenPlacement *v115; 
  vec3_t outOrigin; 
  char dest[256]; 
  __int128 v118; 
  __int128 v119; 
  __int128 v120; 
  __int128 v121; 

  v6 = DVARINT_scriptable_debugDisplayOffsetX;
  v115 = scrPlace;
  v8 = scrPlace;
  if ( !DVARINT_scriptable_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = (float)v6->current.integer;
  v10 = DVARINT_scriptable_debugDisplayOffsetY;
  x = integer + 8.0;
  if ( !DVARINT_scriptable_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  y = (float)v10->current.integer + 8.0;
  if ( cm.mapEnts && g_svScriptablesInitialized )
  {
    v11 = DCONST_DVARBOOL_scriptable_debug_inspectLookAt;
    if ( !DCONST_DVARBOOL_scriptable_debug_inspectLookAt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_inspectLookAt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      ScriptableBg_DrawLookedAtInstanceInfo(v8, debugInfo, &x, &y, 12.0, 8.0);
      return;
    }
    v12 = DCONST_DVARBOOL_scriptable_debug_drawInWorld;
    v121 = v2;
    v120 = v3;
    v119 = v4;
    v118 = v5;
    if ( !DCONST_DVARBOOL_scriptable_debug_drawInWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_drawInWorld") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    def = NULL;
    if ( v12->current.enabled )
    {
      v14 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        do
        {
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v14);
          p_def = &InstanceCommonContext->def;
          if ( InstanceCommonContext->def )
          {
            ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, v14, &outOrigin);
            if ( (float)((float)((float)((float)(debugInfo->viewPos.v[1] - outOrigin.v[1]) * (float)(debugInfo->viewPos.v[1] - outOrigin.v[1])) + (float)((float)(debugInfo->viewPos.v[0] - outOrigin.v[0]) * (float)(debugInfo->viewPos.v[0] - outOrigin.v[0]))) + (float)((float)(debugInfo->viewPos.v[2] - outOrigin.v[2]) * (float)(debugInfo->viewPos.v[2] - outOrigin.v[2]))) <= 262144.0 )
              ScriptableBg_DrawDebugScriptableInstanceInWorld(v14, *p_def);
          }
          ++v14;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( v14 < g_scriptableWorldCounts.totalInstanceCount );
      }
    }
    v17 = DVARBOOL_scriptable_debug_reserved;
    if ( !DVARBOOL_scriptable_debug_reserved && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_reserved") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Reserved Scriptable Event Buffer Usage");
      v18 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v18 = y;
      }
      y = v18 + 8.0;
      NumPools = Scriptable_Bg_EventStreamBuffer_GetNumPools();
      v20 = 0;
      for ( x = x + 12.0; v20 < NumPools; ++v20 )
      {
        Scriptable_Bg_EventStreamBuffer_GetPoolSizes(1, LOCAL_CLIENT_0, v20, &elementSize, &capacity, &used);
        LODWORD(shadow) = used;
        LODWORD(charHeighta) = capacity;
        LODWORD(fmta) = elementSize;
        Com_sprintf(dest, 0x100ui64, "Pool %i Server : ElementSize:%i Capacity:%i used:%i", v20, fmta, charHeighta, shadow);
        v21 = y;
        if ( y > 0.0 && y < 1080.0 )
        {
          CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
          v21 = y;
        }
        y = v21 + 8.0;
        for ( i = 0; i < 2; ++i )
        {
          Scriptable_Bg_EventStreamBuffer_GetPoolSizes(0, (LocalClientNum_t)i, v20, (unsigned int *)&outOrigin, &v112, &v111);
          LODWORD(shadow) = v111;
          LODWORD(charHeightb) = v112;
          *(float *)&fmtb = outOrigin.v[0];
          Com_sprintf(dest, 0x100ui64, "       Client%i: ElementSize:%i Capacity:%i used:%i", (unsigned int)i, fmtb, charHeightb, shadow);
          v23 = y;
          if ( y > 0.0 && y < 1080.0 )
          {
            CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
            v23 = y;
          }
          y = v23 + 8.0;
        }
      }
      for ( j = 0; j < 2; ++j )
      {
        Scriptable_BG_EventStreamBuffer_GetCharacterPoolSize((LocalClientNum_t)j, &v111, &v112, (unsigned int *)&outOrigin);
        *(float *)&shadow = outOrigin.v[0];
        LODWORD(charHeight) = v112;
        LODWORD(fmt) = v111;
        Com_sprintf(dest, 0x100ui64, "Character Pool Client%i: ElementSize:%i Capacity:%i used:%i", (unsigned int)j, fmt, charHeight, shadow);
        v25 = y;
        if ( y > 0.0 && y < 1080.0 )
        {
          CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
          v25 = y;
        }
        y = v25 + 8.0;
      }
      x = x + -12.0;
    }
    v26 = DVARBOOL_scriptable_debug_defs;
    if ( !DVARBOOL_scriptable_debug_defs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_defs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = &g_scriptableDefVector;
    if ( v26->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Scriptable Definitions %zu", g_scriptableDefVector.m_size);
      v28 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v28 = y;
      }
      v29 = 0i64;
      y = v28 + 8.0;
      v30 = &g_scriptableDefVector;
      v31 = 0i64;
      v32 = g_scriptableDefVector.m_size & 0x1FFFFFFFFFFFFFFFi64;
      if ( &g_scriptableDefVector > (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size) )
        v32 = 0i64;
      if ( v32 )
      {
        do
        {
          v33 = *(_QWORD *)v30->m_data.m_buffer;
          v30 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v30 + 8);
          ++v31;
          v29 = (unsigned int)(*(_DWORD *)(v33 + 64) + v29);
        }
        while ( v31 != v32 );
      }
      x = x + 12.0;
      Com_sprintf(dest, 0x100ui64, "FastFile MemCost %i", v29);
      v34 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v34 = y;
      }
      v35 = v34 + 8.0;
      y = v35;
      Com_sprintf(dest, 0x100ui64, "Runtime buffer memory cost for server/client in brackets");
      v36 = v34 + 8.0;
      if ( v35 > 0.0 && v35 < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v36 = y;
      }
      v37 = DVARSTR_scriptabledebug_scriptablefilter;
      v38 = 0;
      y = v36 + 8.0;
      x = (float)(x - 12.0) + 12.0;
      if ( !DVARSTR_scriptabledebug_scriptablefilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_scriptablefilter") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      v39 = &g_scriptableDefVector;
      for ( k = v37->current.string; v39 != (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size); ++v38 )
      {
        v41 = *(const char ***)v39->m_data.m_buffer;
        if ( I_strempty(k) || I_stristr(*v41, k) )
        {
          v42 = *((_DWORD *)v41 + 4);
          if ( (v42 & 4) != 0 )
          {
            v43 = "Server Controlled";
          }
          else
          {
            v43 = "Server Instance";
            if ( (v42 & 2) == 0 )
              v43 = "Client Only";
          }
          LODWORD(v107) = *((unsigned __int16 *)v41 + 29);
          LODWORD(shadow) = *((unsigned __int16 *)v41 + 28);
          Com_sprintf(dest, 0x100ui64, "%i %s %s (S:%i C:%i)", v38, v43, *v41, shadow, v107);
          v44 = y;
          if ( y > 0.0 && y < 1080.0 )
          {
            CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
            v44 = y;
          }
          y = v44 + 8.0;
        }
        v39 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v39 + 8);
      }
      x = x + -12.0;
    }
    v45 = DVARINT_scriptable_debug_defId;
    if ( !DVARINT_scriptable_debug_defId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_defId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    if ( v45->current.integer >= 0 )
    {
      v46 = DVARINT_scriptable_debug_defId;
      if ( !DVARINT_scriptable_debug_defId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_defId") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v46);
      v47 = v46->current.integer;
      if ( (v47 & 0x80000000) != 0i64 || v47 >= g_scriptableDefVector.m_size )
      {
        v48 = NULL;
      }
      else
      {
        if ( v47 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        v48 = *(const ScriptableDef **)&g_scriptableDefVector.m_data.m_buffer[8 * v47];
      }
      v49 = "Not found";
      if ( v48 )
        v49 = (char *)&queryFormat.fmt + 3;
      Com_sprintf(dest, 0x100ui64, "Scriptable Definition %i %s", (unsigned int)v47, v49);
      v50 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v50 = y;
      }
      v51 = x + 12.0;
      x = x + 12.0;
      y = v50 + 8.0;
      if ( v48 )
      {
        ScriptableBg_DrawDebugScriptableDef(v48, v8, &x, &y, 12.0, 8.0);
        v51 = x;
      }
      x = v51 + -12.0;
    }
    v52 = DVARBOOL_scriptable_debug_instances;
    if ( !DVARBOOL_scriptable_debug_instances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_instances") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    if ( v52->current.enabled )
    {
      ScriptableCommon_AssertCountsInitialized();
      Com_sprintf(dest, 0x100ui64, "Scriptable Instances %i", g_scriptableWorldCounts.totalInstanceCount);
      v53 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v53 = y;
      }
      y = v53 + 8.0;
      v54 = 0;
      v55 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        do
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( v55 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(shadow) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(charHeight) = v55;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
              __debugbreak();
          }
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          v57 = runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
          if ( v55 >= v57 )
          {
            v58 = v55 - v57;
            if ( (unsigned int)v58 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
            {
              LODWORD(shadow) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
              LODWORD(charHeight) = v55 - v57;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            v54 += cm.mapEnts->scriptableMapEnts.mapInstances[v58].ffMemCost;
          }
          else
          {
            *(_QWORD *)outOrigin.v = 0i64;
          }
          ++v55;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( v55 < g_scriptableWorldCounts.totalInstanceCount );
        v8 = v115;
        v27 = &g_scriptableDefVector;
      }
      x = x + 12.0;
      Com_sprintf(dest, 0x100ui64, "FastFile MemCost %i", v54);
      v59 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v59 = y;
      }
      y = v59 + 8.0;
      x = (float)(x - 12.0) + 12.0;
      v60 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        while ( 1 )
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( v60 < g_scriptableWorldCounts.serverInstanceCount )
            def = ScriptableSv_GetInstanceCommonContext(v60)->def;
          v61 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v60)->def;
          ScriptableCommon_AssertCountsInitialized();
          if ( v60 >= g_scriptableWorldCounts.runtimeInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            v62 = "Fixed Server";
            if ( v60 >= g_scriptableWorldCounts.serverInstanceCount )
              v62 = "Fixed Client Only";
          }
          else
          {
            v62 = "Reserved";
          }
          ScriptableCommon_AssertCountsInitialized();
          if ( v60 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(shadow) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(charHeight) = v60;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
              __debugbreak();
          }
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          v63 = g_scriptableWorldCounts.runtimeInstanceCount;
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          v64 = v63 + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
          if ( v60 >= v64 )
          {
            v68 = v60 - v64;
            if ( (unsigned int)v68 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
            {
              LODWORD(shadow) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
              LODWORD(charHeight) = v60 - v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            script_noteworthy = cm.mapEnts->scriptableMapEnts.mapInstances[v68].script_noteworthy;
            if ( script_noteworthy )
            {
              v65 = SL_ConvertToString(script_noteworthy);
              goto LABEL_148;
            }
          }
          else
          {
            *(_QWORD *)outOrigin.v = 0i64;
          }
          v65 = (char *)&queryFormat.fmt + 3;
LABEL_148:
          ScriptableCommon_AssertCountsInitialized();
          if ( v60 < g_scriptableWorldCounts.serverInstanceCount )
          {
            v66 = def || v61;
            if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
              __debugbreak();
            ScriptableCommon_AssertCountsInitialized();
            if ( v60 >= g_scriptableWorldCounts.serverInstanceCount )
            {
              ScriptableCommon_AssertCountsInitialized();
              LODWORD(shadow) = g_scriptableWorldCounts.serverInstanceCount;
              LODWORD(charHeight) = v60;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            if ( v61 )
              name = v61->name;
            else
              name = "Unassigned";
            if ( def )
              v71 = def->name;
            else
              v71 = "Unassigned";
            LODWORD(v107) = g_scriptableSv_instanceContexts[v60].commonContext.linkedObjectIndex;
            LODWORD(charHeight) = v107;
            Com_sprintf(dest, 0x100ui64, "%i %s S(%i):%s C(%i):%s %s", v60, v62, charHeight, v71, v107, name, v65);
          }
          else
          {
            v66 = v61 != NULL;
            ScriptableCommon_AssertCountsInitialized();
            if ( v60 >= g_scriptableWorldCounts.totalInstanceCount )
            {
              ScriptableCommon_AssertCountsInitialized();
              LODWORD(shadow) = g_scriptableWorldCounts.totalInstanceCount;
              LODWORD(charHeight) = v60;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
              __debugbreak();
            if ( v61 )
              v67 = v61->name;
            else
              v67 = "Unassigned";
            LODWORD(charHeight) = g_scriptableCl_instanceContexts[0][v60].commonContext.linkedObjectIndex;
            Com_sprintf(dest, 0x100ui64, "%i %s C(%i):%s %s", v60, v62, charHeight, v67, v65);
          }
          if ( v66 )
          {
            v72 = y;
            if ( y > 0.0 && y < 1080.0 )
            {
              CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
              v72 = y;
            }
            y = v72 + 8.0;
          }
          ++v60;
          ScriptableCommon_AssertCountsInitialized();
          def = NULL;
          if ( v60 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            v27 = &g_scriptableDefVector;
            break;
          }
        }
      }
      x = x + -12.0;
    }
    v73 = DVARINT_scriptable_debug_instanceId;
    if ( !DVARINT_scriptable_debug_instanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_instanceId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v73);
    if ( v73->current.integer >= 0 )
    {
      v74 = DVARINT_scriptable_debug_instanceId;
      if ( !DVARINT_scriptable_debug_instanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_instanceId") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v74);
      v75 = v74->current.integer;
      if ( v75 < 0 || (ScriptableCommon_AssertCountsInitialized(), v75 >= (int)g_scriptableWorldCounts.totalInstanceCount) )
      {
        x = x + 12.0;
        Com_sprintf(dest, 0x100ui64, "Scriptable Instance %i NOT FOUND", (unsigned int)v75);
        v76 = y;
        if ( y > 0.0 && y < 1080.0 )
        {
          CG_DrawStringExt(v8, x, y, dest, &colorRed, 0, 1, 8.0, 0);
          v76 = y;
        }
        y = v76 + 8.0;
      }
      else
      {
        x = x + 12.0;
        ScriptableBg_DrawDebugScriptableInstance(v75, v8, &x, &y, 12.0, 8.0);
      }
      x = x + -12.0;
    }
    v77 = DVARBOOL_scriptable_debug_memory;
    if ( !DVARBOOL_scriptable_debug_memory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_memory") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v77);
    if ( v77->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Scriptable Memory Summary");
      v78 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v78 = y;
      }
      y = v78 + 8.0;
      v79 = 0;
      used = 0;
      v80 = *(float *)&cm.mapEnts->scriptableMapEnts.ffMemCost;
      v81 = 0i64;
      outOrigin.v[0] = v80;
      v82 = g_scriptableDefVector.m_size & 0x1FFFFFFFFFFFFFFFi64;
      if ( &g_scriptableDefVector > (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size) )
        v82 = 0i64;
      if ( v82 )
      {
        do
        {
          v83 = *(_QWORD *)v27->m_data.m_buffer;
          v27 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v27 + 8);
          ++v81;
          v79 += *(_DWORD *)(v83 + 64);
        }
        while ( v81 != v82 );
        used = v79;
      }
      v84 = 0;
      v85 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        do
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( v85 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(shadow) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(charHeight) = v85;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", charHeight, shadow) )
              __debugbreak();
          }
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          v86 = g_scriptableWorldCounts.runtimeInstanceCount;
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          v87 = v86 + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
          if ( v85 >= v87 )
          {
            v88 = v85 - v87;
            if ( (unsigned int)v88 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
            {
              LODWORD(shadow) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
              LODWORD(charHeight) = v85 - v87;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", charHeight, shadow) )
                __debugbreak();
            }
            v84 += cm.mapEnts->scriptableMapEnts.mapInstances[v88].ffMemCost;
          }
          ++v85;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( v85 < g_scriptableWorldCounts.totalInstanceCount );
        v79 = used;
        v80 = outOrigin.v[0];
        v8 = v115;
      }
      x = x + 12.0;
      Com_sprintf(dest, 0x100ui64, "FastFile: MapEnts   %i", v80);
      v89 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v89 = y;
      }
      y = v89 + 8.0;
      Com_sprintf(dest, 0x100ui64, "FastFile: Defs      %i", v79);
      v90 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v90 = y;
      }
      y = v90 + 8.0;
      Com_sprintf(dest, 0x100ui64, "FastFile: Instances %i", v84);
      v91 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v91 = y;
      }
      y = v91 + 8.0;
      x = x + -12.0;
    }
    v92 = DVARBOOL_scriptable_debugReservedCount;
    if ( !DVARBOOL_scriptable_debugReservedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugReservedCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v92);
    if ( v92->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Scriptable Reserved Counts");
      v93 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v93 = y;
      }
      y = v93 + 8.0;
      x = x + 12.0;
      Com_sprintf(dest, 0x100ui64, "Current %i", g_scriptableClReservedCurrentCount[0]);
      v94 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v94 = y;
      }
      y = v94 + 8.0;
      Com_sprintf(dest, 0x100ui64, "Max %i", g_scriptableClReservedMaxCount[0]);
      v95 = y;
      if ( y > 0.0 && y < 1080.0 )
      {
        CG_DrawStringExt(v8, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
        v95 = y;
      }
      y = v95 + 8.0;
      x = x + -12.0;
    }
    Scriptable_Analytics_DebugDraw(v8, &x, &y, 12.0, 8.0);
    v96 = DVARINT_scriptable_debugDisplayOffsetY;
    if ( !DVARINT_scriptable_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v96);
    v97 = DVARINT_scriptable_debugDisplayOffsetY;
    v98 = v96->current.integer - (int)y + 200;
    if ( v98 > 0 )
      v98 = 0;
    if ( !DVARINT_scriptable_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v97);
    if ( v97->current.integer > v98 )
      v98 = v97->current.integer;
    v99 = DVARINT_scriptable_debugDisplayOffsetY;
    if ( !DVARINT_scriptable_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugDisplayOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v99);
    if ( v99->current.integer != v98 )
      Dvar_SetInt_Internal(DVARINT_scriptable_debugDisplayOffsetY, v98);
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableDef
==============
*/
void ScriptableBg_DrawDebugScriptableDef(const ScriptableDef *def, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  ScriptableDef *nextScriptableDef; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int flags; 
  float v20; 
  float v21; 
  __int64 maxNumDynEntsRequired; 
  float v23; 
  float v24; 
  unsigned __int16 eventStreamSizeRequiredServer; 
  unsigned __int16 eventStreamSizeRequiredClient; 
  float v27; 
  float v28; 
  __int64 numParts; 
  const char *v30; 
  float v31; 
  float v32; 
  char *fmt; 
  __int64 forceColor; 
  char dest[256]; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2014, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, def->name);
  v10 = *y;
  v11 = *y;
  if ( *y > 0.0 && v10 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v10, dest, &colorWhite, 0, 1, charHeight, 0);
    v11 = *y;
  }
  *y = v11 + charHeight;
  Com_sprintf(dest, 0x100ui64, "FastFile MemCost %i", def->ffMemCost);
  v12 = *y;
  v13 = *y;
  if ( *y > 0.0 && v12 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v12, dest, &colorWhite, 0, 1, charHeight, 0);
    v13 = *y;
  }
  *y = v13 + charHeight;
  nextScriptableDef = def->nextScriptableDef;
  if ( nextScriptableDef )
  {
    Com_sprintf(dest, 0x100ui64, "Next Scriptable %s", nextScriptableDef->name);
    v15 = *y;
    v16 = *y;
    if ( *y > 0.0 && v15 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v15, dest, &colorWhite, 0, 1, charHeight, 0);
      v16 = *y;
    }
    *y = v16 + charHeight;
  }
  if ( def->networkLODRangeOverride )
  {
    Com_sprintf(dest, 0x100ui64, "Network LOD override distance %.2f", def->networkLODRangeOverrideDistance);
    v17 = *y;
    v18 = *y;
    if ( *y > 0.0 && v17 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v17, dest, &colorWhite, 0, 1, charHeight, 0);
      v18 = *y;
    }
    *y = v18 + charHeight;
  }
  flags = def->flags;
  if ( flags )
  {
    ScriptableBg_DrawDefFlags(flags, scrPlace, x, y, tabWidth, charHeight);
    flags = def->flags;
  }
  if ( (flags & 4) != 0 )
  {
    LODWORD(forceColor) = def->partCount;
    LODWORD(fmt) = def->serverInstancedPartCount;
    Com_sprintf(dest, 0x100ui64, "Part Total: ServerControlled:%i ServerInstanced:%i Overall:%i", def->serverControlledPartCount, fmt, forceColor);
  }
  else if ( (flags & 2) != 0 )
  {
    LODWORD(fmt) = def->partCount;
    Com_sprintf(dest, 0x100ui64, "Part Total: ServerInstanced:%i Overall:%i", def->serverInstancedPartCount, fmt);
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "Part Total:%i", def->partCount);
  }
  v20 = *y;
  v21 = *y;
  if ( *y > 0.0 && v20 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v20, dest, &colorWhite, 0, 1, charHeight, 0);
    v21 = *y;
  }
  *y = v21 + charHeight;
  maxNumDynEntsRequired = def->maxNumDynEntsRequired;
  if ( (_DWORD)maxNumDynEntsRequired )
  {
    Com_sprintf(dest, 0x100ui64, "Number of Dynents Required %i", maxNumDynEntsRequired);
    v23 = *y;
    v24 = *y;
    if ( *y > 0.0 && v23 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v23, dest, &colorWhite, 0, 1, charHeight, 0);
      v24 = *y;
    }
    *y = v24 + charHeight;
  }
  eventStreamSizeRequiredServer = def->eventStreamSizeRequiredServer;
  eventStreamSizeRequiredClient = def->eventStreamSizeRequiredClient;
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
      goto LABEL_45;
    Com_sprintf(dest, 0x100ui64, "Event Stream Size: Client:%i", eventStreamSizeRequiredClient);
  }
  v27 = *y;
  v28 = *y;
  if ( *y > 0.0 && v27 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v27, dest, &colorWhite, 0, 1, charHeight, 0);
    v28 = *y;
  }
  *y = v28 + charHeight;
LABEL_45:
  numParts = def->numParts;
  if ( (_DWORD)numParts )
  {
    v30 = "Parts";
    if ( (_DWORD)numParts == 1 )
      v30 = "Part";
    Com_sprintf(dest, 0x100ui64, "%i %s", numParts, v30);
    v31 = *y;
    v32 = *y;
    if ( *y > 0.0 && v31 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v31, dest, &colorWhite, 0, 1, charHeight, 0);
      v32 = *y;
    }
    *y = v32 + charHeight;
    *x = tabWidth + *x;
    ScriptableBg_DrawDebugScriptablePartsDef(def->parts, def->numParts, scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
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
  float v11; 
  float v12; 
  __int64 v13; 
  int flags; 
  ScriptablePartDef *part; 
  float v16; 
  float v17; 
  float delayMin; 
  float delayMax; 
  double v20; 
  float v21; 
  float v22; 
  int eventStreamBufferOffsetClient; 
  __int64 eventStreamBufferOffsetServer; 
  float v25; 
  float v26; 
  float v28; 
  float v29; 
  float v31; 
  float v32; 
  const char *notification; 
  float v34; 
  float v35; 
  ScriptablePartDef *v36; 
  float v37; 
  float v38; 
  const char *v39; 
  float v40; 
  float v41; 
  const char *v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  int param; 
  const cmodel_t *BrushModel; 
  const char **p_name; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  const char *v54; 
  float v55; 
  float v56; 
  const char *v57; 
  float v58; 
  float v59; 
  const char *v60; 
  float v61; 
  float v62; 
  ScriptableEventDef *eventsB; 
  float v64; 
  float v65; 
  const char *v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float startTimeMin; 
  float startTimeMax; 
  double v77; 
  float v78; 
  float v79; 
  const char *v80; 
  float v81; 
  float v82; 
  float playbackRateMin; 
  float playbackRateMax; 
  double v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  __int64 eventAtEndCount; 
  const char *v93; 
  float v94; 
  float v95; 
  const char *v96; 
  const char *v97; 
  const char *v98; 
  float v99; 
  float v100; 
  const char *v101; 
  float v102; 
  float v103; 
  __int64 flatId; 
  const char *v105; 
  float v106; 
  float v107; 
  ScriptablePartDef *v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float blendTime; 
  float v118; 
  float v119; 
  const char *v120; 
  float v121; 
  float v122; 
  ScriptablePartDef *v123; 
  float v124; 
  float v125; 
  const char *tagName; 
  float v127; 
  float v128; 
  const char *v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  const char *v134; 
  float v135; 
  float v136; 
  const char *v137; 
  float v138; 
  float v139; 
  const char *effectAlias; 
  float v141; 
  float v142; 
  const ParticleSystemDef *particleSystemDef; 
  float v144; 
  float v145; 
  ScriptableEventDef *eventsAtEnd; 
  float v147; 
  float v148; 
  const ParticleSystemDef *v149; 
  float v150; 
  float v151; 
  unsigned int v152; 
  scr_string_t v153; 
  const char *v154; 
  float v155; 
  float v156; 
  const char *v157; 
  float v158; 
  float v159; 
  const char *v160; 
  float v161; 
  float v162; 
  float v163; 
  float v164; 
  const char *v165; 
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  ScriptableEventDef *v170; 
  float v171; 
  float v172; 
  ScriptablePartDef *v173; 
  float v174; 
  float v175; 
  const char *v176; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  ScriptableEventDef *v181; 
  float v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  float v188; 
  const char *name; 
  float v190; 
  float v191; 
  float v192; 
  float v193; 
  float v194; 
  float v195; 
  float v196; 
  float v197; 
  const char *v198; 
  float v199; 
  float v200; 
  float v201; 
  const char *v202; 
  float v203; 
  float v204; 
  float v205; 
  float v206; 
  float v207; 
  float v208; 
  float v209; 
  double v210; 
  float v211; 
  float v212; 
  float v213; 
  float v214; 
  double v215; 
  float v216; 
  float v217; 
  float v218; 
  float v219; 
  float v220; 
  float v221; 
  double v222; 
  float v223; 
  float v224; 
  double v225; 
  float v226; 
  float v227; 
  float v228; 
  float v229; 
  float v230; 
  float v231; 
  double v232; 
  float v233; 
  float v234; 
  float v235; 
  float v236; 
  float v237; 
  float v238; 
  float v239; 
  float v240; 
  float v241; 
  float v242; 
  ScriptableEventDef *v243; 
  float v244; 
  float v245; 
  const char *v246; 
  float v247; 
  float v248; 
  const char *v249; 
  float v250; 
  float v251; 
  ScriptablePartDef *v252; 
  float v253; 
  float v254; 
  const char *v255; 
  float v256; 
  float v257; 
  float v258; 
  float v259; 
  float v260; 
  float v261; 
  float v262; 
  float v263; 
  float v264; 
  float v265; 
  float v266; 
  float v267; 
  ScriptableEventDef *v268; 
  float v269; 
  float v270; 
  float v271; 
  float v272; 
  float v273; 
  float v274; 
  float v275; 
  float v276; 
  const char *v277; 
  const char *v278; 
  float v279; 
  float v280; 
  __int64 tireIndex; 
  float v282; 
  float v283; 
  __int64 v284; 
  float v285; 
  float v286; 
  float v287; 
  float v288; 
  float v289; 
  float v290; 
  float v291; 
  __int64 v292; 
  float v294; 
  float v295; 
  float v297; 
  float v298; 
  __int64 v299; 
  float v300; 
  float v301; 
  float v302; 
  float v303; 
  float v305; 
  float v306; 
  float v308; 
  float v309; 
  int v310; 
  const char *v311; 
  float v312; 
  float v313; 
  const char *v314; 
  double v315; 
  float v316; 
  float v317; 
  double v318; 
  const char *v319; 
  float v320; 
  float v321; 
  float v322; 
  float v323; 
  float v324; 
  double v325; 
  float v326; 
  float v327; 
  double v328; 
  const char *v329; 
  float v330; 
  float v331; 
  float v332; 
  float v333; 
  float v334; 
  float v335; 
  float v336; 
  float v337; 
  const char *v338; 
  float v339; 
  float v340; 
  const char *v341; 
  float v342; 
  float v343; 
  float v344; 
  float v345; 
  float v346; 
  float v347; 
  float v348; 
  float v349; 
  const char *v350; 
  const char *v351; 
  float v352; 
  float v353; 
  const char *v354; 
  float v355; 
  float v356; 
  const char *v357; 
  float v358; 
  float v359; 
  float v360; 
  const char *v361; 
  float v362; 
  float v363; 
  float v364; 
  float v365; 
  float v366; 
  float v367; 
  float v368; 
  float v369; 
  float v370; 
  float v371; 
  float v372; 
  float v373; 
  const char *v374; 
  float v375; 
  float v376; 
  const char *v377; 
  float v378; 
  float v379; 
  float v380; 
  float v381; 
  float v382; 
  float v383; 
  float v384; 
  float v385; 
  float v386; 
  float v387; 
  float v388; 
  float v389; 
  const char *v390; 
  float v391; 
  float v392; 
  float v393; 
  float v394; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  double fmtc; 
  double fmtd; 
  __int64 forceColor; 
  __int64 forceColora; 
  __int64 forceColorb; 
  double forceColorc; 
  double forceColord; 
  double forceColore; 
  double forceColorf; 
  __int64 shadow; 
  double shadowa; 
  double shadowb; 
  double shadowc; 
  double shadowd; 
  double v412; 
  double v413; 
  double adjust; 
  double adjusta; 
  double v416; 
  double v417; 
  const char *v418; 
  __int64 v419[2]; 
  __int128 v420; 
  __int128 v421; 
  __int64 v422[14]; 
  __int64 v423[14]; 
  char dest[256]; 

  if ( event->base.name && *event->base.name )
  {
    type = event->type;
    if ( (unsigned int)type >= 0x2C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 3287, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_scriptable_eventTypeNames ) ) + 0 ) )", "eventType doesn't index s_scriptable_eventTypeNames\n\t%i not in [0, %i)", type, 44) )
      __debugbreak();
    Com_sprintf(dest, 0x100ui64, "Name:%s Type:%s", event->base.name, s_scriptable_eventTypeNames[type]);
    v11 = *y;
    v12 = *y;
  }
  else
  {
    v13 = event->type;
    if ( (unsigned int)v13 >= 0x2C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 3287, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_scriptable_eventTypeNames ) ) + 0 ) )", "eventType doesn't index s_scriptable_eventTypeNames\n\t%i not in [0, %i)", v13, 44) )
      __debugbreak();
    Com_sprintf(dest, 0x100ui64, "Type:%s", s_scriptable_eventTypeNames[v13]);
    v12 = *y;
    v11 = *y;
  }
  if ( v11 > 0.0 && v11 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v11, dest, &colorWhite, 0, 1, charHeight, 0);
    v12 = *y;
  }
  *y = charHeight + v12;
  flags = event->base.flags;
  if ( flags )
    ScriptableBg_DrawDefFlags(flags, scrPlace, x, y, tabWidth, charHeight);
  switch ( event->type )
  {
    case Scriptable_EventType_StateChange:
      part = event->data.stateChange.part;
      if ( part && part->name )
      {
        Com_sprintf(dest, 0x100ui64, "Referenced part: %s", part->name);
        v16 = *y;
        v17 = *y;
        if ( *y > 0.0 && v16 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v16, dest, &colorWhite, 0, 1, charHeight, 0);
          v17 = *y;
        }
        *y = v17 + charHeight;
      }
      Com_sprintf(dest, 0x100ui64, "State:%i", event->data.stateChange.stateIdx);
      goto LABEL_744;
    case Scriptable_EventType_Wait:
      delayMin = event->data.wait.delayMin;
      delayMax = event->data.wait.delayMax;
      v20 = delayMin;
      if ( delayMax > delayMin )
      {
        Com_sprintf(dest, 0x100ui64, "Random Time between %.3f and %.3f", v20, delayMax);
        v22 = *y;
        v21 = *y;
      }
      else
      {
        Com_sprintf(dest, 0x100ui64, "Time:%.3f", v20);
        v21 = *y;
        v22 = *y;
      }
      if ( v21 > 0.0 && v21 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v21, dest, &colorWhite, 0, 1, charHeight, 0);
        v22 = *y;
      }
      *y = charHeight + v22;
      eventStreamBufferOffsetClient = event->data.wait.eventStreamBufferOffsetClient;
      eventStreamBufferOffsetServer = event->data.wait.eventStreamBufferOffsetServer;
      goto LABEL_31;
    case Scriptable_EventType_Random:
      Com_sprintf(dest, 0x100ui64, "Threshold:%.3f", event->data.wait.delayMin);
      v25 = *y;
      v26 = *y;
      if ( *y > 0.0 && v25 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v25, dest, &colorWhite, 0, 1, charHeight, 0);
        v26 = *y;
      }
      *y = v26 + charHeight;
      if ( event->data.stateChange.stateIdx )
      {
        Com_sprintf(dest, 0x100ui64, "<= threshold %i %s");
        v28 = *y;
        v29 = *y;
        if ( *y > 0.0 && v28 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v28, dest, &colorWhite, 0, 1, charHeight, 0);
          v29 = *y;
        }
        *y = v29 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableEventsDef(event->data.random.eventsA, event->data.stateChange.stateIdx, scrPlace, x, y, tabWidth, charHeight);
        *x = *x - tabWidth;
      }
      if ( event->data.random.eventBCount )
      {
        Com_sprintf(dest, 0x100ui64, "> threshold %i %s");
        v31 = *y;
        v32 = *y;
        if ( *y > 0.0 && v31 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v31, dest, &colorWhite, 0, 1, charHeight, 0);
          v32 = *y;
        }
        *y = v32 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableEventsDef(event->data.random.eventsB, event->data.random.eventBCount, scrPlace, x, y, tabWidth, charHeight);
        *x = *x - tabWidth;
      }
      eventStreamBufferOffsetClient = event->data.random.eventStreamBufferOffsetClient;
      eventStreamBufferOffsetServer = event->data.random.eventStreamBufferOffsetServer;
      goto LABEL_31;
    case Scriptable_EventType_Script:
      notification = event->data.script.notification;
      if ( notification && *notification )
      {
        LODWORD(fmt) = event->data.script.scrNotification;
        Com_sprintf(dest, 0x100ui64, "Name:%s Script:%i", notification, fmt);
        v34 = *y;
        v35 = *y;
        if ( *y > 0.0 && v34 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v34, dest, &colorWhite, 0, 1, charHeight, 0);
          v35 = *y;
        }
        *y = v35 + charHeight;
      }
      Com_sprintf(dest, 0x100ui64, "Param:%i", event->data.objective.settings.label);
      Com_sprintf(dest, 0x100ui64, "Notify Callback:%i", event->data.anonymous.buffer[16]);
      goto LABEL_744;
    case Scriptable_EventType_Model:
      v36 = event->data.stateChange.part;
      if ( event->data.anonymous.buffer[0] == 2 )
      {
        if ( !v36 )
          goto LABEL_61;
      }
      else if ( !v36 )
      {
        goto LABEL_61;
      }
      Com_sprintf(dest, 0x100ui64, "Name:%s", v36->name);
      v37 = *y;
      v38 = *y;
      if ( *y > 0.0 && v37 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v37, dest, &colorWhite, 0, 1, charHeight, 0);
        v38 = *y;
      }
      *y = v38 + charHeight;
LABEL_61:
      v39 = "Movable";
      if ( event->data.anonymous.buffer[19] )
        v39 = "Never Moves";
      Com_sprintf(dest, 0x100ui64, v39);
      v40 = *y;
      v41 = *y;
      if ( *y > 0.0 && v40 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v40, dest, &colorWhite, 0, 1, charHeight, 0);
        v41 = *y;
      }
      *y = v41 + charHeight;
      if ( !event->data.anonymous.buffer[20] )
        return;
      Com_sprintf(dest, 0x100ui64, "Dynamic Simulation");
      goto LABEL_744;
    case Scriptable_EventType_Collision:
      v42 = event->data.script.notification;
      if ( !v42 || !*v42 )
      {
        Com_sprintf(dest, 0x100ui64, "Reset collision");
        goto LABEL_744;
      }
      Com_sprintf(dest, 0x100ui64, "Name:%s", v42);
      v43 = *y;
      v44 = *y;
      if ( *y > 0.0 && v43 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v43, dest, &colorWhite, 0, 1, charHeight, 0);
        v44 = *y;
      }
      *y = v44 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Clipmap Model Index:%i", event->data.objective.settings.label);
      v45 = *y;
      v46 = *y;
      if ( *y > 0.0 && v45 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v45, dest, &colorWhite, 0, 1, charHeight, 0);
        v46 = *y;
      }
      *y = v46 + charHeight;
      param = event->data.script.param;
      if ( (unsigned int)(param + 2) > 1 )
      {
        BrushModel = CM_GetBrushModel(param);
        if ( !BrushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 382, ASSERT_TYPE_ASSERT, "(clipmapModel)", (const char *)&queryFormat, "clipmapModel") )
          __debugbreak();
        p_name = &BrushModel->physicsAsset->name;
        if ( p_name )
        {
          LODWORD(fmt) = BrushModel->physicsShapeOverrideIdx;
          Com_sprintf(dest, 0x100ui64, "Asset:%s Shape:%i", *p_name, fmt);
          v50 = *y;
          v51 = *y;
          if ( *y > 0.0 && v50 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v50, dest, &colorWhite, 0, 1, charHeight, 0);
            v51 = *y;
          }
          *y = v51 + charHeight;
        }
      }
      if ( event->data.anonymous.buffer[8] )
      {
        Com_sprintf(dest, 0x100ui64, "Creates AI Obstacle");
        v52 = *y;
        v53 = *y;
        if ( *y > 0.0 && v52 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v52, dest, &colorWhite, 0, 1, charHeight, 0);
          v53 = *y;
        }
        *y = v53 + charHeight;
      }
      v54 = "Movable";
      if ( event->data.anonymous.buffer[16] )
        v54 = "Never Moves";
      Com_sprintf(dest, 0x100ui64, v54);
      v55 = *y;
      v56 = *y;
      if ( *y > 0.0 && v55 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v55, dest, &colorWhite, 0, 1, charHeight, 0);
        v56 = *y;
      }
      *y = v56 + charHeight;
      v57 = "No Push";
      if ( event->data.anonymous.buffer[17] )
        v57 = "Can Push";
      Com_sprintf(dest, 0x100ui64, v57);
      v58 = *y;
      v59 = *y;
      if ( *y > 0.0 && v58 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v58, dest, &colorWhite, 0, 1, charHeight, 0);
        v59 = *y;
      }
      *y = v59 + charHeight;
      v60 = "No Touch";
      if ( event->data.anonymous.buffer[18] )
        v60 = "Can Touch";
      Com_sprintf(dest, 0x100ui64, v60);
      v61 = *y;
      v62 = *y;
      if ( *y > 0.0 && v61 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v61, dest, &colorWhite, 0, 1, charHeight, 0);
        v62 = *y;
      }
      *y = v62 + charHeight;
      eventsB = event->data.random.eventsB;
      if ( eventsB )
      {
        Com_sprintf(dest, 0x100ui64, "Model: %s", eventsB->base.name);
        goto LABEL_744;
      }
      return;
    case Scriptable_EventType_Animation:
      if ( event->data.anonymous.buffer[8] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v64 = *y;
        v65 = *y;
        if ( *y > 0.0 && v64 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v64, dest, &colorWhite, 0, 1, charHeight, 0);
          v65 = *y;
        }
        *y = v65 + charHeight;
      }
      v66 = event->data.script.notification;
      if ( v66 )
      {
        Com_sprintf(dest, 0x100ui64, "Name:%s", *(const char **)v66);
        v67 = *y;
        v68 = *y;
        if ( *y > 0.0 && v67 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v67, dest, &colorWhite, 0, 1, charHeight, 0);
          v68 = *y;
        }
        *y = v68 + charHeight;
      }
      if ( event->data.anonymous.buffer[9] )
      {
        Com_sprintf(dest, 0x100ui64, "Override");
        v69 = *y;
        v70 = *y;
        if ( *y > 0.0 && v69 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v69, dest, &colorWhite, 0, 1, charHeight, 0);
          v70 = *y;
        }
        *y = v70 + charHeight;
      }
      if ( event->data.anonymous.buffer[10] )
      {
        Com_sprintf(dest, 0x100ui64, "PauseOnExit");
        v71 = *y;
        v72 = *y;
        if ( *y > 0.0 && v71 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v71, dest, &colorWhite, 0, 1, charHeight, 0);
          v72 = *y;
        }
        *y = v72 + charHeight;
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) && event->data.anonymous.buffer[11] )
      {
        Com_sprintf(dest, 0x100ui64, "ClientOnly (this option only available in MP)");
        v73 = *y;
        v74 = *y;
        if ( *y > 0.0 && v73 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v73, dest, &colorWhite, 0, 1, charHeight, 0);
          v74 = *y;
        }
        *y = v74 + charHeight;
      }
      startTimeMin = event->data.animation.startTimeMin;
      startTimeMax = event->data.animation.startTimeMax;
      v77 = startTimeMin;
      if ( startTimeMax > startTimeMin )
        Com_sprintf(dest, 0x100ui64, "StartTime Random between: %.3f and %.3f", v77, startTimeMax);
      else
        Com_sprintf(dest, 0x100ui64, "StartTime:%.3f", v77);
      v78 = *y;
      v79 = *y;
      if ( *y > 0.0 && v78 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v78, dest, &colorWhite, 0, 1, charHeight, 0);
        v79 = *y;
      }
      *y = v79 + charHeight;
      v80 = "Seconds";
      if ( event->data.anonymous.buffer[20] )
        v80 = "Normalized form";
      Com_sprintf(dest, 0x100ui64, "StartTime in %s", v80);
      v81 = *y;
      v82 = *y;
      if ( *y > 0.0 && v81 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v81, dest, &colorWhite, 0, 1, charHeight, 0);
        v82 = *y;
      }
      *y = v82 + charHeight;
      playbackRateMin = event->data.animation.playbackRateMin;
      playbackRateMax = event->data.animation.playbackRateMax;
      v85 = playbackRateMin;
      if ( playbackRateMax > playbackRateMin )
        Com_sprintf(dest, 0x100ui64, "Playback Rate Random between: %.3f and %.3f", v85, playbackRateMax);
      else
        Com_sprintf(dest, 0x100ui64, "Playback Rate:%.3f", v85);
      v86 = *y;
      v87 = *y;
      if ( *y > 0.0 && v86 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v86, dest, &colorWhite, 0, 1, charHeight, 0);
        v87 = *y;
      }
      *y = v87 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Blend Time:%.3f", event->data.animation.blendTime);
      v88 = *y;
      v89 = *y;
      if ( *y > 0.0 && v88 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v88, dest, &colorWhite, 0, 1, charHeight, 0);
        v89 = *y;
      }
      *y = v89 + charHeight;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
      {
        Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", event->data.animation.eventStreamBufferOffsetClient);
        v90 = *y;
        v91 = *y;
        if ( *y > 0.0 && v90 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v90, dest, &colorWhite, 0, 1, charHeight, 0);
          v91 = *y;
        }
        *y = v91 + charHeight;
      }
      eventAtEndCount = event->data.animation.eventAtEndCount;
      if ( (_DWORD)eventAtEndCount )
      {
        v93 = "Events";
        if ( (_DWORD)eventAtEndCount == 1 )
          v93 = "Event";
        Com_sprintf(dest, 0x100ui64, "At End, execute %i %s", eventAtEndCount, v93);
        v94 = *y;
        v95 = *y;
        if ( *y > 0.0 && v94 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v94, dest, &colorWhite, 0, 1, charHeight, 0);
          v95 = *y;
        }
        *y = v95 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableEventsDef(event->data.animation.eventsAtEnd, event->data.animation.eventAtEndCount, scrPlace, x, y, tabWidth, charHeight);
        *x = *x - tabWidth;
      }
      return;
    case Scriptable_EventType_HideShowBone:
      v96 = event->data.script.notification;
      if ( !v96 || !*v96 )
        return;
      v97 = "Only";
      if ( event->data.anonymous.buffer[14] )
        v97 = "And Children";
      v98 = "Show";
      if ( event->data.anonymous.buffer[12] )
        v98 = "Hide";
      LODWORD(forceColor) = event->data.script.scrNotification;
      Com_sprintf(dest, 0x100ui64, "%s Bone:%s Script:%i %s", v98, v96, forceColor, v97);
      v99 = *y;
      v100 = *y;
      if ( *y > 0.0 && v99 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v99, dest, &colorWhite, 0, 1, charHeight, 0);
        v100 = *y;
      }
      *y = v100 + charHeight;
      if ( !event->data.anonymous.buffer[13] )
        return;
      Com_sprintf(dest, 0x100ui64, "Allow missing tag");
      goto LABEL_744;
    case Scriptable_EventType_DisablePhysicsSubShape:
      v101 = event->data.script.notification;
      if ( !v101 || !*v101 )
        return;
      Com_sprintf(dest, 0x100ui64, "Disable Sub-Shape:%s Hash:%zu", v101, event->data.disablePhysicsSubShape.mutableShapeHash);
      v102 = *y;
      v103 = *y;
      if ( *y > 0.0 && v102 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v102, dest, &colorWhite, 0, 1, charHeight, 0);
        v103 = *y;
      }
      *y = v103 + charHeight;
      if ( !event->data.anonymous.buffer[16] )
        return;
      Com_sprintf(dest, 0x100ui64, "Allow missing shape");
      goto LABEL_744;
    case Scriptable_EventType_NoteTrack:
      flatId = event->data.stateChange.partReference.flatId;
      if ( (_DWORD)flatId )
      {
        v105 = "NoteTracks";
        if ( (_DWORD)flatId == 1 )
          v105 = "NoteTrack";
        Com_sprintf(dest, 0x100ui64, "%i %s", flatId, v105);
        v106 = *y;
        v107 = *y;
        if ( *y > 0.0 && v106 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v106, dest, &colorWhite, 0, 1, charHeight, 0);
          v107 = *y;
        }
        *y = v107 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableNoteTracksDef(event->data.noteTrack.noteTracks, event->data.stateChange.partReference.flatId, scrPlace, x, y, tabWidth, charHeight);
        *x = *x - tabWidth;
      }
      return;
    case Scriptable_EventType_ChunkDynent:
      v108 = event->data.chunkDynent.part;
      if ( v108 && v108->name )
      {
        Com_sprintf(dest, 0x100ui64, "Referenced part: %s", v108->name);
        v109 = *y;
        v110 = *y;
        if ( *y > 0.0 && v109 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v109, dest, &colorWhite, 0, 1, charHeight, 0);
          v110 = *y;
        }
        *y = v110 + charHeight;
      }
      if ( event->data.anonymous.buffer[4] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v111 = *y;
        v112 = *y;
        if ( *y > 0.0 && v111 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v111, dest, &colorWhite, 0, 1, charHeight, 0);
          v112 = *y;
        }
        *y = v112 + charHeight;
      }
      if ( event->data.anonymous.buffer[5] )
      {
        Com_sprintf(dest, 0x100ui64, "Allow Cause to Drive Velocity");
        v113 = *y;
        v114 = *y;
        if ( *y > 0.0 && v113 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v113, dest, &colorWhite, 0, 1, charHeight, 0);
          v114 = *y;
        }
        *y = v114 + charHeight;
      }
      Com_sprintf(dest, 0x100ui64, "LinVel: (%.2f, %.2f, %.2f)", event->data.chunkDynent.launchLinVel.v[0], event->data.animation.startTimeMin, event->data.animation.startTimeMax);
      v115 = *y;
      v116 = *y;
      if ( *y > 0.0 && v115 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v115, dest, &colorWhite, 0, 1, charHeight, 0);
        v116 = *y;
      }
      *y = v116 + charHeight;
      blendTime = event->data.animation.playbackRateMax;
      v118 = event->data.animation.playbackRateMin;
      v119 = event->data.chunkDynent.launchAngVel.v[0];
      v120 = "AngVel: (%.2f, %.2f, %.2f)";
      goto LABEL_211;
    case Scriptable_EventType_SpawnDynent:
      if ( event->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v121 = *y;
        v122 = *y;
        if ( *y > 0.0 && v121 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v121, dest, &colorWhite, 0, 1, charHeight, 0);
          v122 = *y;
        }
        *y = v122 + charHeight;
      }
      v123 = event->data.stateChange.part;
      if ( v123 )
      {
        Com_sprintf(dest, 0x100ui64, "Model: %s", v123->name);
        v124 = *y;
        v125 = *y;
        if ( *y > 0.0 && v124 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v124, dest, &colorWhite, 0, 1, charHeight, 0);
          v125 = *y;
        }
        *y = v125 + charHeight;
      }
      tagName = event->data.spawnDynent.tagName;
      if ( tagName && *tagName )
      {
        LODWORD(fmt) = event->data.spawnDynent.scrTagName;
        Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", tagName, fmt);
        v127 = *y;
        v128 = *y;
        if ( *y > 0.0 && v127 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v127, dest, &colorWhite, 0, 1, charHeight, 0);
          v128 = *y;
        }
        *y = v128 + charHeight;
        if ( event->data.anonymous.buffer[86] )
        {
          v129 = "ignore event";
          if ( event->data.anonymous.buffer[87] )
            v129 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v129);
          v130 = *y;
          v131 = *y;
          if ( *y > 0.0 && v130 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v130, dest, &colorWhite, 0, 1, charHeight, 0);
            v131 = *y;
          }
          *y = v131 + charHeight;
        }
      }
      if ( event->data.anonymous.buffer[28] )
      {
        Com_sprintf(dest, 0x100ui64, "Allow Cause to Drive Velocity");
        v132 = *y;
        v133 = *y;
        if ( *y > 0.0 && v132 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v132, dest, &colorWhite, 0, 1, charHeight, 0);
          v133 = *y;
        }
        *y = v133 + charHeight;
      }
      v134 = "LocalSpace";
      if ( event->data.anonymous.buffer[32] )
      {
        if ( event->data.anonymous.buffer[30] )
          v134 = "Worldspace";
        Com_sprintf(dest, 0x100ui64, "%s LinVel: (%.2f, %.2f, %.2f) to (%.2f, %.2f, %.2f)", v134, event->data.spawnDynent.launchLinVel.v[0], event->data.spawnDynent.launchLinVel.v[1], event->data.spawnDynent.launchLinVel.v[2], event->data.spawnDynent.launchLinVel2.v[0], event->data.spawnDynent.launchLinVel2.v[1], event->data.spawnDynent.launchLinVel2.v[2]);
      }
      else
      {
        if ( event->data.anonymous.buffer[30] )
          v134 = "Worldspace";
        Com_sprintf(dest, 0x100ui64, "%s LinVel: (%.2f, %.2f, %.2f)", v134, event->data.spawnDynent.launchLinVel.v[0], event->data.spawnDynent.launchLinVel.v[1], event->data.spawnDynent.launchLinVel.v[2]);
      }
      v135 = *y;
      v136 = *y;
      if ( *y > 0.0 && v135 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v135, dest, &colorWhite, 0, 1, charHeight, 0);
        v136 = *y;
      }
      *y = v136 + charHeight;
      v137 = "LocalSpace";
      if ( event->data.anonymous.buffer[33] )
      {
        if ( event->data.anonymous.buffer[31] )
          v137 = "Worldspace";
        Com_sprintf(dest, 0x100ui64, "%s AngVel: (%.2f, %.2f, %.2f) to (%.2f, %.2f, %.2f)", v137, event->data.spawnDynent.launchAngVel.v[0], event->data.spawnDynent.launchAngVel.v[1], event->data.spawnDynent.launchAngVel.v[2], event->data.spawnDynent.launchAngVel2.v[0], event->data.spawnDynent.launchAngVel2.v[1], event->data.spawnDynent.launchAngVel2.v[2]);
      }
      else
      {
        if ( event->data.anonymous.buffer[31] )
          v137 = "Worldspace";
        Com_sprintf(dest, 0x100ui64, "%s AngVel: (%.2f, %.2f, %.2f)", v137, event->data.spawnDynent.launchAngVel.v[0], event->data.spawnDynent.launchAngVel.v[1], event->data.spawnDynent.launchAngVel.v[2]);
      }
      v138 = *y;
      v139 = *y;
      if ( *y > 0.0 && v138 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v138, dest, &colorWhite, 0, 1, charHeight, 0);
        v139 = *y;
      }
      *y = v139 + charHeight;
      effectAlias = event->data.spawnDynent.effectAlias;
      if ( effectAlias && *effectAlias )
      {
        Com_sprintf(dest, 0x100ui64, "Effect Alias:%s", effectAlias);
        v141 = *y;
        v142 = *y;
        if ( *y > 0.0 && v141 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v141, dest, &colorWhite, 0, 1, charHeight, 0);
          v142 = *y;
        }
        *y = v142 + charHeight;
      }
      particleSystemDef = event->data.spawnDynent.effectDef.particleSystemDef;
      if ( !particleSystemDef )
        return;
      Com_sprintf(dest, 0x100ui64, "Effect Def:%s", particleSystemDef->name);
      goto LABEL_744;
    case Scriptable_EventType_PFX:
      if ( event->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v144 = *y;
        v145 = *y;
        if ( *y > 0.0 && v144 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v144, dest, &colorWhite, 0, 1, charHeight, 0);
          v145 = *y;
        }
        *y = v145 + charHeight;
      }
      eventsAtEnd = event->data.animation.eventsAtEnd;
      if ( eventsAtEnd && LOBYTE(eventsAtEnd->base.name) )
      {
        Com_sprintf(dest, 0x100ui64, "Effect Alias:%s", (const char *)eventsAtEnd);
        v147 = *y;
        v148 = *y;
        if ( *y > 0.0 && v147 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v147, dest, &colorWhite, 0, 1, charHeight, 0);
          v148 = *y;
        }
        *y = v148 + charHeight;
      }
      v149 = event->data.particleFX.effectDef.particleSystemDef;
      if ( v149 )
      {
        Com_sprintf(dest, 0x100ui64, "Effect Def:%s", v149->name);
        v150 = *y;
        v151 = *y;
        if ( *y > 0.0 && v150 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v150, dest, &colorWhite, 0, 1, charHeight, 0);
          v151 = *y;
        }
        *y = v151 + charHeight;
      }
      if ( event->data.random.eventBCount )
      {
        v152 = 0;
        LODWORD(v418) = 0;
        do
        {
          v153 = *(_DWORD *)(event->data.disablePhysicsSubShape.mutableShapeHash + 4i64 * v152);
          v154 = SL_ConvertToString(v153);
          LODWORD(fmt) = v153;
          Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v154, fmt);
          v155 = *y;
          v156 = *y;
          if ( *y > 0.0 && v155 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v155, dest, &colorWhite, 0, 1, charHeight, 0);
            v156 = *y;
          }
          v152 = (_DWORD)v418 + 1;
          *y = v156 + charHeight;
          LODWORD(v418) = v152;
        }
        while ( v152 < event->data.random.eventBCount );
        if ( event->data.anonymous.buffer[64] )
        {
          v157 = "ignore event";
          if ( event->data.anonymous.buffer[65] )
            v157 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v157);
          v158 = *y;
          v159 = *y;
          if ( *y > 0.0 && v158 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v158, dest, &colorWhite, 0, 1, charHeight, 0);
            v159 = *y;
          }
          *y = v159 + charHeight;
        }
      }
      v160 = "Don't use tag angles";
      if ( event->data.anonymous.buffer[36] )
        v160 = "Use Tag Angles";
      Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, v160);
      v161 = *y;
      v162 = *y;
      if ( *y > 0.0 && v161 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v161, dest, &colorWhite, 0, 1, charHeight, 0);
        v162 = *y;
      }
      *y = v162 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Loop Rate:%.2f", event->data.spawnDynent.launchAngVel.v[2]);
      v163 = *y;
      v164 = *y;
      if ( *y > 0.0 && v163 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v163, dest, &colorWhite, 0, 1, charHeight, 0);
        v164 = *y;
      }
      *y = v164 + charHeight;
      if ( event->data.anonymous.buffer[60] )
      {
        v165 = "Stop on exit";
        if ( event->data.anonymous.buffer[68] )
          v165 = "Kill on exit";
        Com_sprintf(dest, 0x100ui64, "Oneshot Looping %s", v165);
        v166 = *y;
        v167 = *y;
        if ( *y > 0.0 && v166 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v166, dest, &colorWhite, 0, 1, charHeight, 0);
          v167 = *y;
        }
        *y = v167 + charHeight;
      }
      if ( !event->data.anonymous.buffer[67] )
        return;
      Com_sprintf(dest, 0x100ui64, "Is a viewmodel effect");
      goto LABEL_744;
    case Scriptable_EventType_Sound:
      if ( event->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v168 = *y;
        v169 = *y;
        if ( *y > 0.0 && v168 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v168, dest, &colorWhite, 0, 1, charHeight, 0);
          v169 = *y;
        }
        *y = v169 + charHeight;
      }
      v170 = event->data.random.eventsB;
      if ( v170 && LOBYTE(v170->base.name) )
      {
        Com_sprintf(dest, 0x100ui64, "Sound Alias:%s", (const char *)v170);
        v171 = *y;
        v172 = *y;
        if ( *y > 0.0 && v171 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v171, dest, &colorWhite, 0, 1, charHeight, 0);
          v172 = *y;
        }
        *y = v172 + charHeight;
      }
      v173 = event->data.stateChange.part;
      if ( v173 && LOBYTE(v173->name) )
      {
        LODWORD(fmt) = event->data.random.eventBCount;
        Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", (const char *)v173, fmt);
        v174 = *y;
        v175 = *y;
        if ( *y > 0.0 && v174 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v174, dest, &colorWhite, 0, 1, charHeight, 0);
          v175 = *y;
        }
        *y = v175 + charHeight;
        if ( event->data.anonymous.buffer[34] )
        {
          v176 = "ignore event";
          if ( event->data.anonymous.buffer[35] )
            v176 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v176);
          v177 = *y;
          v178 = *y;
          if ( *y > 0.0 && v177 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v177, dest, &colorWhite, 0, 1, charHeight, 0);
            v178 = *y;
          }
          *y = v178 + charHeight;
        }
      }
      if ( event->data.anonymous.buffer[32] )
      {
        Com_sprintf(dest, 0x100ui64, "Looping");
        v179 = *y;
        v180 = *y;
        if ( *y > 0.0 && v179 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v179, dest, &colorWhite, 0, 1, charHeight, 0);
          v180 = *y;
        }
        *y = v180 + charHeight;
      }
      v181 = event->data.animation.eventsAtEnd;
      if ( v181 && LOBYTE(v181->base.name) )
      {
        Com_sprintf(dest, 0x100ui64, "Explosion Refl Class:%s", (const char *)v181);
        v182 = *y;
        v183 = *y;
        if ( *y > 0.0 && v182 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v182, dest, &colorWhite, 0, 1, charHeight, 0);
          v183 = *y;
        }
        *y = charHeight + v183;
      }
      if ( event->data.anonymous.buffer[48] )
      {
        Com_sprintf(dest, 0x100ui64, "Ground Trace of %.2f", event->data.spawnDynent.launchAngVel.v[1]);
        v184 = *y;
        v185 = *y;
        if ( *y > 0.0 && v184 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v184, dest, &colorWhite, 0, 1, charHeight, 0);
          v185 = *y;
        }
        *y = v185 + charHeight;
      }
      v186 = event->data.spawnDynent.launchAngVel.v[2];
      if ( v186 == 0.0 && event->data.spawnDynent.launchLinVel2.v[0] == 0.0 && event->data.spawnDynent.launchLinVel2.v[1] == 0.0 )
        return;
      Com_sprintf(dest, 0x100ui64, "World Offset: (%.2f %.2f %.2f)", v186, event->data.spawnDynent.launchLinVel2.v[0], event->data.spawnDynent.launchLinVel2.v[1]);
      goto LABEL_744;
    case Scriptable_EventType_Explosion:
      if ( event->data.anonymous.buffer[36] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v196 = *y;
        v197 = *y;
        if ( *y > 0.0 && v196 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v196, dest, &colorWhite, 0, 1, charHeight, 0);
          v197 = *y;
        }
        *y = v197 + charHeight;
      }
      v198 = event->data.script.notification;
      if ( v198 && *v198 )
      {
        LODWORD(fmt) = event->data.script.scrNotification;
        Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v198, fmt);
        v199 = *y;
        v200 = *y;
        if ( *y > 0.0 && v199 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v199, dest, &colorWhite, 0, 1, charHeight, 0);
          v200 = *y;
        }
        v201 = v200 + charHeight;
        *y = v200 + charHeight;
        if ( event->data.anonymous.buffer[37] )
        {
          v202 = "ignore event";
          if ( event->data.anonymous.buffer[38] )
            v202 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v202);
          v203 = *y;
          v204 = *y;
          if ( *y > 0.0 && v203 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v203, dest, &colorWhite, 0, 1, charHeight, 0);
            v204 = *y;
          }
          v201 = v204 + charHeight;
          *y = v204 + charHeight;
        }
      }
      else
      {
        v201 = *y;
      }
      v205 = v201;
      if ( v201 > 0.0 && v201 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v201, dest, &colorWhite, 0, 1, charHeight, 0);
        v205 = *y;
      }
      *y = v205 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Radius:%.2f", event->data.animation.playbackRateMin);
      v206 = *y;
      v207 = *y;
      if ( *y > 0.0 && v206 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v206, dest, &colorWhite, 0, 1, charHeight, 0);
        v207 = *y;
      }
      *y = v207 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Damage: Outer:%.2f Inner:%.2f", event->data.animation.playbackRateMax, event->data.animation.blendTime);
      goto LABEL_744;
    case Scriptable_EventType_Light:
      v208 = event->data.wait.delayMin;
      v209 = event->data.wait.delayMax;
      v210 = v208;
      if ( v209 > v208 )
        Com_sprintf(dest, 0x100ui64, "Intensity Scale randomly selected between %.2f and %.2f", v210, v209);
      else
        Com_sprintf(dest, 0x100ui64, "Intensity Scale:%.2f", v210);
      v211 = *y;
      v212 = *y;
      if ( *y > 0.0 && v211 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v211, dest, &colorWhite, 0, 1, charHeight, 0);
        v212 = *y;
      }
      *y = v212 + charHeight;
      v213 = event->data.chunkDynent.launchLinVel.v[0];
      v214 = event->data.animation.startTimeMin;
      v215 = v213;
      if ( v214 > v213 )
        Com_sprintf(dest, 0x100ui64, "Radius randomly selected between %.2f and %.2f", v215, v214);
      else
        Com_sprintf(dest, 0x100ui64, "Radius:%.2f", v215);
      v216 = *y;
      v217 = *y;
      if ( *y > 0.0 && v216 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v216, dest, &colorWhite, 0, 1, charHeight, 0);
        v217 = *y;
      }
      *y = v217 + charHeight;
      if ( event->data.anonymous.buffer[16] )
      {
        v420 = *(_OWORD *)((char *)&event->data.addModel.model + 4);
        LinearToGammaColor_Srgb((vec3_t *)&v420);
        Com_sprintf(dest, 0x100ui64, "Color: R:%.2f G:%.2f B:%.2f A:%.2f", *(float *)&v420, *((float *)&v420 + 1), *((float *)&v420 + 2), *((float *)&v420 + 3));
        v218 = *y;
        v219 = *y;
        if ( *y > 0.0 && v218 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v218, dest, &colorWhite, 0, 1, charHeight, 0);
          v219 = *y;
        }
        *y = v219 + charHeight;
      }
      if ( !event->data.anonymous.buffer[36] )
        return;
      v220 = event->data.spawnDynent.launchLinVel.v[1];
      v221 = event->data.spawnDynent.launchLinVel.v[2];
      v222 = v220;
      if ( v221 > v220 )
        Com_sprintf(dest, 0x100ui64, "Transmission Time randomly selected between %.2f and %.2f", v222, v221);
      else
        Com_sprintf(dest, 0x100ui64, "Transmission Time:%.2f", v222);
      goto LABEL_744;
    case Scriptable_EventType_Sun:
      if ( event->data.anonymous.buffer[0] )
      {
        v223 = event->data.wait.delayMax;
        v224 = event->data.chunkDynent.launchLinVel.v[0];
        v225 = v223;
        if ( v224 > v223 )
          Com_sprintf(dest, 0x100ui64, "Intensity Override randomly selected between %.2f and %.2f", v225, v224);
        else
          Com_sprintf(dest, 0x100ui64, "Intensity Override:%.2f", v225);
        v226 = *y;
        v227 = *y;
        if ( *y > 0.0 && v226 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v226, dest, &colorWhite, 0, 1, charHeight, 0);
          v227 = *y;
        }
        *y = v227 + charHeight;
      }
      if ( event->data.anonymous.buffer[12] )
      {
        v421 = *(_OWORD *)&event->data.viewmodelShaderParam.placeHolderValue3;
        LinearToGammaColor_Srgb((vec3_t *)&v421);
        Com_sprintf(dest, 0x100ui64, "Color: R:%.2f G:%.2f B:%.2f A:%.2f", *(float *)&v421, *((float *)&v421 + 1), *((float *)&v421 + 2), *((float *)&v421 + 3));
        v228 = *y;
        v229 = *y;
        if ( *y > 0.0 && v228 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v228, dest, &colorWhite, 0, 1, charHeight, 0);
          v229 = *y;
        }
        *y = v229 + charHeight;
      }
      if ( event->data.anonymous.buffer[32] )
      {
        v230 = event->data.spawnDynent.launchLinVel.v[0];
        v231 = event->data.spawnDynent.launchLinVel.v[1];
        v232 = v230;
        if ( v231 > v230 )
          Com_sprintf(dest, 0x100ui64, "Transmission Time randomly selected between %.2f and %.2f", v232, v231);
        else
          Com_sprintf(dest, 0x100ui64, "Transmission Time:%.2f", v232);
        v233 = *y;
        v234 = *y;
        if ( *y > 0.0 && v233 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v233, dest, &colorWhite, 0, 1, charHeight, 0);
          v234 = *y;
        }
        *y = v234 + charHeight;
      }
      if ( !event->data.anonymous.buffer[60] )
        return;
      v235 = event->data.spawnDynent.launchAngVel.v[0];
      v236 = event->data.spawnDynent.launchLinVel.v[2];
      if ( v235 > v236 )
        Com_sprintf(dest, 0x100ui64, "Pitch randomly selected between %.2f and %.2f", (float)(v236 * 57.295776), (float)(v235 * 57.295776));
      else
        Com_sprintf(dest, 0x100ui64, "Pitch:%.2f", v236);
      v237 = *y;
      v238 = *y;
      if ( *y > 0.0 && v237 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v237, dest, &colorWhite, 0, 1, charHeight, 0);
        v238 = *y;
      }
      *y = v238 + charHeight;
      v239 = event->data.spawnDynent.launchAngVel.v[2];
      v240 = event->data.spawnDynent.launchAngVel.v[1];
      if ( v239 > v240 )
        Com_sprintf(dest, 0x100ui64, "Heading randomly selected between %.2f and %.2f", (float)(v240 * 57.295776), (float)(v239 * 57.295776));
      else
        Com_sprintf(dest, 0x100ui64, "Heading:%.2f", v240);
      goto LABEL_744;
    case Scriptable_EventType_Rumble:
      if ( event->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v241 = *y;
        v242 = *y;
        if ( *y > 0.0 && v241 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v241, dest, &colorWhite, 0, 1, charHeight, 0);
          v242 = *y;
        }
        *y = v242 + charHeight;
      }
      v243 = event->data.random.eventsB;
      if ( v243 && LOBYTE(v243->base.name) )
      {
        Com_sprintf(dest, 0x100ui64, "Rumble: %s", (const char *)v243);
        v244 = *y;
        v245 = *y;
        if ( *y > 0.0 && v244 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v244, dest, &colorWhite, 0, 1, charHeight, 0);
          v245 = *y;
        }
        *y = v245 + charHeight;
      }
      v246 = event->data.sound.tagName;
      if ( !v246 || !*v246 )
        return;
      LODWORD(fmt) = event->data.random.eventBCount;
      Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v246, fmt);
      v247 = *y;
      v248 = *y;
      if ( *y > 0.0 && v247 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v247, dest, &colorWhite, 0, 1, charHeight, 0);
        v248 = *y;
      }
      *y = v248 + charHeight;
      if ( !event->data.anonymous.buffer[40] )
        return;
      v249 = "ignore event";
      if ( event->data.anonymous.buffer[41] )
        v249 = "use root";
      goto LABEL_471;
    case Scriptable_EventType_Screenshake:
      if ( event->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v250 = *y;
        v251 = *y;
        if ( *y > 0.0 && v250 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v250, dest, &colorWhite, 0, 1, charHeight, 0);
          v251 = *y;
        }
        *y = v251 + charHeight;
      }
      v252 = event->data.stateChange.part;
      if ( v252 && LOBYTE(v252->name) )
      {
        LODWORD(fmt) = event->data.random.eventBCount;
        Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", (const char *)v252, fmt);
        v253 = *y;
        v254 = *y;
        if ( *y > 0.0 && v253 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v253, dest, &colorWhite, 0, 1, charHeight, 0);
          v254 = *y;
        }
        *y = v254 + charHeight;
        if ( event->data.anonymous.buffer[64] )
        {
          v255 = "ignore event";
          if ( event->data.anonymous.buffer[65] )
            v255 = "use root";
          Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v255);
          v256 = *y;
          v257 = *y;
          if ( *y > 0.0 && v256 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v256, dest, &colorWhite, 0, 1, charHeight, 0);
            v257 = *y;
          }
          *y = v257 + charHeight;
        }
      }
      if ( event->data.anonymous.buffer[1] )
      {
        Com_sprintf(dest, 0x100ui64, "Earthquake");
        v258 = *y;
        v259 = *y;
        if ( *y > 0.0 && v258 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v258, dest, &colorWhite, 0, 1, charHeight, 0);
          v259 = *y;
        }
        *y = v259 + charHeight;
      }
      if ( event->data.anonymous.buffer[2] )
      {
        Com_sprintf(dest, 0x100ui64, "ScreenShake");
        v260 = *y;
        v261 = *y;
        if ( *y > 0.0 && v260 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v260, dest, &colorWhite, 0, 1, charHeight, 0);
          v261 = *y;
        }
        *y = v261 + charHeight;
      }
      Com_sprintf(dest, 0x100ui64, "Duration:%.2f Up:%.2f Down:%.2f", event->data.chunkDynent.launchAngVel.v[0], event->data.animation.playbackRateMin, event->data.animation.playbackRateMax);
      v262 = *y;
      v263 = *y;
      if ( *y > 0.0 && v262 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v262, dest, &colorWhite, 0, 1, charHeight, 0);
        v263 = *y;
      }
      *y = v263 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Radius:%d", event->data.particleFX.scrEndTagCount);
      v264 = *y;
      v265 = *y;
      if ( *y > 0.0 && v264 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v264, dest, &colorWhite, 0, 1, charHeight, 0);
        v265 = *y;
      }
      *y = v265 + charHeight;
      LODWORD(shadow) = event->data.screenshake.scaleRoll;
      LODWORD(forceColora) = event->data.screenshake.scaleYaw;
      LODWORD(fmta) = event->data.screenshake.scalePitch;
      Com_sprintf(dest, 0x100ui64, "Scale: Earthquake%.2f Pitch:%d Yaw:%d Roll:%d", event->data.spawnDynent.launchLinVel.v[0], fmta, forceColora, shadow);
      v266 = *y;
      v267 = *y;
      if ( *y > 0.0 && v266 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v266, dest, &colorWhite, 0, 1, charHeight, 0);
        v267 = *y;
      }
      *y = v267 + charHeight;
      LODWORD(forceColorb) = event->data.screenshake.frequencyRoll;
      LODWORD(fmtb) = event->data.screenshake.frequencyYaw;
      Com_sprintf(dest, 0x100ui64, "Frequency: Pitch:%d Yaw:%d Roll:%d", (unsigned int)event->data.screenshake.frequencyPitch, fmtb, forceColorb);
      goto LABEL_744;
    case Scriptable_EventType_PartDamage:
      v268 = event->data.random.eventsB;
      if ( v268 && v268->base.name )
      {
        Com_sprintf(dest, 0x100ui64, "Referenced part: %s", v268->base.name);
        v269 = *y;
        v270 = *y;
        if ( *y > 0.0 && v269 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v269, dest, &colorWhite, 0, 1, charHeight, 0);
          v270 = *y;
        }
        *y = v270 + charHeight;
      }
      if ( event->data.anonymous.buffer[8] )
      {
        Com_sprintf(dest, 0x100ui64, "Destroy");
        goto LABEL_744;
      }
      v271 = event->data.wait.delayMax;
      if ( v271 > 0.0 )
      {
        Com_sprintf(dest, 0x100ui64, "Immediate Amount:%.2f", v271);
        v272 = *y;
        v273 = *y;
        if ( *y > 0.0 && v272 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v272, dest, &colorWhite, 0, 1, charHeight, 0);
          v273 = *y;
        }
        *y = v273 + charHeight;
      }
      v274 = event->data.animation.startTimeMin;
      if ( v274 <= 0.0 )
        return;
      Com_sprintf(dest, 0x100ui64, "Over Time: Amount:%.2f every %.2f seconds", v274, event->data.animation.startTimeMax);
      v275 = *y;
      v276 = *y;
      if ( *y > 0.0 && v275 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v275, dest, &colorWhite, 0, 1, charHeight, 0);
        v276 = *y;
      }
      *y = v276 + charHeight;
      eventStreamBufferOffsetClient = event->data.partDamage.eventStreamBufferOffsetClient;
      eventStreamBufferOffsetServer = event->data.partDamage.eventStreamBufferOffsetServer;
      goto LABEL_31;
    case Scriptable_EventType_SetMayhem:
      v277 = event->data.script.notification;
      if ( v277 )
        v278 = *(const char **)v277;
      else
        v278 = "None";
      Com_sprintf(dest, 0x100ui64, "Mayhem asset name:%s", v278);
      v279 = *y;
      v280 = *y;
      if ( *y > 0.0 && v279 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v279, dest, &colorWhite, 0, 1, charHeight, 0);
        v280 = *y;
      }
      *y = v280 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", event->data.wait.eventStreamBufferOffsetServer);
      goto LABEL_744;
    case Scriptable_EventType_PlayMayhem:
      tireIndex = event->data.vehicleBlowUpTire.tireIndex;
      v419[0] = (__int64)"Play";
      v419[1] = (__int64)"Pause";
      Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, v419[tireIndex]);
      v282 = *y;
      v283 = *y;
      if ( *y > 0.0 && v282 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v282, dest, &colorWhite, 0, 1, charHeight, 0);
        v283 = *y;
      }
      *y = v283 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", event->data.playMayhem.eventStreamBufferOffsetClient);
      goto LABEL_744;
    case Scriptable_EventType_ViewmodelShaderParam:
      v284 = event->data.vehicleBlowUpTire.tireIndex;
      v423[0] = (__int64)"Unknown";
      v423[1] = (__int64)"ScrollRateX";
      v423[2] = (__int64)"ScrollRateY";
      v423[3] = (__int64)"ScrollRateRot";
      v423[4] = (__int64)"Rotation";
      v423[5] = (__int64)"TilingX";
      v423[6] = (__int64)"TilingY";
      v423[7] = (__int64)"Alpha";
      v423[8] = (__int64)"Emissive";
      v423[9] = (__int64)"Atlas Frame";
      v423[10] = (__int64)"Placeholder 1";
      v423[11] = (__int64)"Placeholder 2";
      v423[12] = (__int64)"Placeholder 3";
      v423[13] = (__int64)"Placeholder 4";
      Com_sprintf(dest, 0x100ui64, "Param: %s", (const char *)v423[v284]);
      v285 = *y;
      v286 = *y;
      if ( *y > 0.0 && v285 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v285, dest, &colorWhite, 0, 1, charHeight, 0);
        v286 = *y;
      }
      *y = v286 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Values: %.2f", event->data.wait.delayMax);
      v287 = *y;
      v288 = *y;
      if ( *y > 0.0 && v287 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v287, dest, &colorWhite, 0, 1, charHeight, 0);
        v288 = *y;
      }
      *y = v288 + charHeight;
      v289 = event->data.animation.playbackRateMin;
      if ( v289 < 0.0 )
        return;
      Com_sprintf(dest, 0x100ui64, "TransitionTime %.2f", v289);
      v290 = *y;
      v291 = *y;
      if ( *y > 0.0 && v290 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v290, dest, &colorWhite, 0, 1, charHeight, 0);
        v291 = *y;
      }
      *y = v291 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", event->data.viewmodelShaderParam.eventStreamBufferOffsetClient);
      goto LABEL_744;
    case Scriptable_EventType_ViewmodelChangeImage:
      v292 = event->data.vehicleBlowUpTire.tireIndex;
      v418 = "Unknown";
      LODWORD(fmt) = event->data.stateChange.stateIdx;
      Com_sprintf(dest, 0x100ui64, "%s to %i", v419[v292 - 1], fmt);
      goto LABEL_744;
    case Scriptable_EventType_ClientViewSelector:
      if ( event->data.stateChange.partReference.flatId )
      {
        Com_sprintf(dest, 0x100ui64, "First Person: %i %s");
        v294 = *y;
        v295 = *y;
        if ( *y > 0.0 && v294 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v294, dest, &colorWhite, 0, 1, charHeight, 0);
          v295 = *y;
        }
        *y = v295 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableEventsDef(event->data.random.eventsA, event->data.stateChange.partReference.flatId, scrPlace, x, y, tabWidth, charHeight);
        *x = *x - tabWidth;
      }
      if ( event->data.random.eventBCount )
      {
        Com_sprintf(dest, 0x100ui64, "Third Person: %i %s");
        v297 = *y;
        v298 = *y;
        if ( *y > 0.0 && v297 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v297, dest, &colorWhite, 0, 1, charHeight, 0);
          v298 = *y;
        }
        *y = v298 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableEventsDef(event->data.random.eventsB, event->data.random.eventBCount, scrPlace, x, y, tabWidth, charHeight);
        *x = *x - tabWidth;
      }
      if ( (event->base.flags & 0x200) == 0 )
        return;
      Com_sprintf(dest, 0x100ui64, "Client Event Buffer Offset :%i", event->data.random.eventStreamBufferOffsetServer);
      goto LABEL_744;
    case Scriptable_EventType_TeamSelector:
      v299 = event->data.vehicleBlowUpTire.tireIndex;
      v422[0] = (__int64)"All";
      v422[1] = (__int64)"Bad";
      v422[2] = (__int64)"Axis";
      v422[3] = (__int64)"Allies";
      v422[4] = (__int64)"Three";
      v422[5] = (__int64)"Neutral";
      v422[6] = (__int64)"Dead";
      v422[7] = (__int64)"My_Team";
      v422[8] = (__int64)"Enemy_Team";
      v422[9] = (__int64)"All_But_My_Team";
      v422[10] = (__int64)"All_But_Enemy_Team";
      v422[11] = (__int64)"Enemy_Team_And_Me";
      v422[12] = (__int64)"Just_Me";
      Com_sprintf(dest, 0x100ui64, "Team Filter: %s", (const char *)v422[v299]);
      v300 = *y;
      v301 = *y;
      if ( *y > 0.0 && v300 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v300, dest, &colorWhite, 0, 1, charHeight, 0);
        v301 = *y;
      }
      *y = v301 + charHeight;
      if ( event->data.anonymous.buffer[4] )
      {
        Com_sprintf(dest, 0x100ui64, "Test local player, rather than scriptable");
        v302 = *y;
        v303 = *y;
        if ( *y > 0.0 && v302 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v302, dest, &colorWhite, 0, 1, charHeight, 0);
          v303 = *y;
        }
        *y = v303 + charHeight;
      }
      if ( event->data.teamSelector.eventPassCount )
      {
        Com_sprintf(dest, 0x100ui64, "First Person: %i %s");
        v305 = *y;
        v306 = *y;
        if ( *y > 0.0 && v305 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v305, dest, &colorWhite, 0, 1, charHeight, 0);
          v306 = *y;
        }
        *y = v306 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableEventsDef(event->data.teamSelector.eventsPass, event->data.teamSelector.eventPassCount, scrPlace, x, y, tabWidth, charHeight);
        *x = *x - tabWidth;
      }
      if ( event->data.teamSelector.eventFailCount )
      {
        Com_sprintf(dest, 0x100ui64, "Third Person: %i %s");
        v308 = *y;
        v309 = *y;
        if ( *y > 0.0 && v308 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v308, dest, &colorWhite, 0, 1, charHeight, 0);
          v309 = *y;
        }
        *y = v309 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableEventsDef(event->data.teamSelector.eventsFail, event->data.teamSelector.eventFailCount, scrPlace, x, y, tabWidth, charHeight);
        *x = *x - tabWidth;
      }
      v310 = event->base.flags;
      if ( (v310 & 0x200) == 0 )
        return;
      eventStreamBufferOffsetClient = event->data.teamSelector.eventStreamBufferOffsetClient;
      if ( (v310 & 2) != 0 )
      {
        eventStreamBufferOffsetServer = event->data.teamSelector.eventStreamBufferOffsetServer;
        goto LABEL_31;
      }
      Com_sprintf(dest, 0x100ui64, "Event Buffer Offset: Client:%i", event->data.teamSelector.eventStreamBufferOffsetClient);
      goto LABEL_744;
    case Scriptable_EventType_AddModel:
      v311 = event->data.script.notification;
      if ( v311 && *v311 )
      {
        LODWORD(fmt) = event->data.script.scrNotification;
        Com_sprintf(dest, 0x100ui64, "Attach to Bone:%s Script:%i", v311, fmt);
        v312 = *y;
        v313 = *y;
        if ( *y > 0.0 && v312 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v312, dest, &colorWhite, 0, 1, charHeight, 0);
          v313 = *y;
        }
        *y = v313 + charHeight;
      }
      v314 = event->data.spawnDynent.tagName;
      if ( !v314 )
        return;
      Com_sprintf(dest, 0x100ui64, "Name:%s", *(_QWORD *)v314);
      goto LABEL_744;
    case Scriptable_EventType_ApplyForce:
      v315 = event->data.wait.delayMax;
      if ( event->data.anonymous.buffer[1] )
      {
        Com_sprintf(dest, 0x100ui64, "Position: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", v315, event->data.chunkDynent.launchLinVel.v[0], event->data.animation.startTimeMin, event->data.animation.playbackRateMax, event->data.animation.blendTime, event->data.spawnDynent.launchLinVel.v[0]);
        v316 = *y;
        v317 = *y;
        if ( *y > 0.0 && v316 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v316, dest, &colorWhite, 0, 1, charHeight, 0);
          v317 = *y;
        }
        *y = v317 + charHeight;
        v416 = event->data.spawnDynent.launchAngVel.v[0];
        adjust = event->data.spawnDynent.launchLinVel.v[2];
        v412 = event->data.spawnDynent.launchLinVel.v[1];
        shadowa = event->data.animation.playbackRateMin;
        v318 = event->data.animation.startTimeMax;
        forceColorc = event->data.chunkDynent.launchAngVel.v[0];
        v319 = "Localspace";
        if ( event->data.anonymous.buffer[0] )
          v319 = "Worldspace";
        goto LABEL_598;
      }
      Com_sprintf(dest, 0x100ui64, "Position: (%.2f %.2f %.2f)", v315, event->data.chunkDynent.launchLinVel.v[0], event->data.animation.startTimeMin);
      v322 = *y;
      v323 = *y;
      if ( *y > 0.0 && v322 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v322, dest, &colorWhite, 0, 1, charHeight, 0);
        v323 = *y;
      }
      *y = v323 + charHeight;
      shadowb = event->data.animation.playbackRateMin;
      forceColord = event->data.chunkDynent.launchAngVel.v[0];
      fmtc = event->data.animation.startTimeMax;
      v319 = "Localspace";
      goto LABEL_603;
    case Scriptable_EventType_ApplyAngularForce:
      v319 = "Localspace";
      if ( event->data.anonymous.buffer[1] )
      {
        v416 = event->data.animation.playbackRateMin;
        adjust = event->data.chunkDynent.launchAngVel.v[0];
        v412 = event->data.animation.startTimeMax;
        shadowa = event->data.animation.startTimeMin;
        v318 = event->data.wait.delayMax;
        forceColorc = event->data.chunkDynent.launchLinVel.v[0];
        if ( event->data.anonymous.buffer[0] )
          v319 = "Worldspace";
LABEL_598:
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", v319, v318, forceColorc, shadowa, v412, adjust, v416);
        v320 = *y;
        v321 = *y;
      }
      else
      {
        shadowb = event->data.animation.startTimeMin;
        forceColord = event->data.chunkDynent.launchLinVel.v[0];
        fmtc = event->data.wait.delayMax;
LABEL_603:
        if ( event->data.anonymous.buffer[0] )
          v319 = "Worldspace";
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f)", v319, fmtc, forceColord, shadowb);
        v321 = *y;
        v320 = *y;
      }
      if ( v320 > 0.0 && v320 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v320, dest, &colorWhite, 0, 1, charHeight, 0);
        v321 = *y;
      }
      v324 = charHeight + v321;
      goto LABEL_748;
    case Scriptable_EventType_ApplyConstantForce:
      v325 = event->data.wait.delayMax;
      if ( event->data.anonymous.buffer[1] )
      {
        Com_sprintf(dest, 0x100ui64, "Position: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", v325, event->data.chunkDynent.launchLinVel.v[0], event->data.animation.startTimeMin, event->data.animation.playbackRateMax, event->data.animation.blendTime, event->data.spawnDynent.launchLinVel.v[0]);
        v326 = *y;
        v327 = *y;
        if ( *y > 0.0 && v326 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v326, dest, &colorWhite, 0, 1, charHeight, 0);
          v327 = *y;
        }
        *y = v327 + charHeight;
        v417 = event->data.spawnDynent.launchAngVel.v[0];
        adjusta = event->data.spawnDynent.launchLinVel.v[2];
        v413 = event->data.spawnDynent.launchLinVel.v[1];
        shadowc = event->data.animation.playbackRateMin;
        v328 = event->data.animation.startTimeMax;
        forceColore = event->data.chunkDynent.launchAngVel.v[0];
        v329 = "Localspace";
        if ( event->data.anonymous.buffer[0] )
          v329 = "Worldspace";
        goto LABEL_621;
      }
      Com_sprintf(dest, 0x100ui64, "Position: (%.2f %.2f %.2f)", v325, event->data.chunkDynent.launchLinVel.v[0], event->data.animation.startTimeMin);
      v332 = *y;
      v333 = *y;
      if ( *y > 0.0 && v332 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v332, dest, &colorWhite, 0, 1, charHeight, 0);
        v333 = *y;
      }
      *y = v333 + charHeight;
      shadowd = event->data.animation.playbackRateMin;
      forceColorf = event->data.chunkDynent.launchAngVel.v[0];
      fmtd = event->data.animation.startTimeMax;
      v329 = "Localspace";
      goto LABEL_626;
    case Scriptable_EventType_ApplyConstantAngularForce:
      v329 = "Localspace";
      if ( event->data.anonymous.buffer[1] )
      {
        v417 = event->data.animation.playbackRateMin;
        adjusta = event->data.chunkDynent.launchAngVel.v[0];
        v413 = event->data.animation.startTimeMax;
        shadowc = event->data.animation.startTimeMin;
        v328 = event->data.wait.delayMax;
        forceColore = event->data.chunkDynent.launchLinVel.v[0];
        if ( event->data.anonymous.buffer[0] )
          v329 = "Worldspace";
LABEL_621:
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f) to (%.2f %.2f %.2f)", v329, v328, forceColore, shadowc, v413, adjusta, v417);
        v330 = *y;
        v331 = *y;
      }
      else
      {
        shadowd = event->data.animation.startTimeMin;
        forceColorf = event->data.chunkDynent.launchLinVel.v[0];
        fmtd = event->data.wait.delayMax;
LABEL_626:
        if ( event->data.anonymous.buffer[0] )
          v329 = "Worldspace";
        Com_sprintf(dest, 0x100ui64, "%s Vector: (%.2f %.2f %.2f)", v329, fmtd, forceColorf, shadowd);
        v331 = *y;
        v330 = *y;
      }
      if ( v330 > 0.0 && v330 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v330, dest, &colorWhite, 0, 1, charHeight, 0);
        v331 = *y;
      }
      *y = charHeight + v331;
      eventStreamBufferOffsetClient = event->data.applyConstantForce.eventStreamBufferOffsetClient;
      eventStreamBufferOffsetServer = event->data.applyConstantForce.eventStreamBufferOffsetServer;
LABEL_31:
      LODWORD(fmt) = eventStreamBufferOffsetClient;
      Com_sprintf(dest, 0x100ui64, "Event Buffer Offset: Server:%i Client:%i", eventStreamBufferOffsetServer, fmt);
LABEL_744:
      v393 = *y;
      v394 = *y;
      if ( *y > 0.0 && v393 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v393, dest, &colorWhite, 0, 1, charHeight, 0);
        v394 = *y;
      }
      v324 = v394 + charHeight;
LABEL_748:
      *y = v324;
      return;
    case Scriptable_EventType_DynamicBoneNoiseCurve:
      if ( event->data.anonymous.buffer[0] )
      {
        Com_sprintf(dest, 0x100ui64, "Stateful");
        v187 = *y;
        v188 = *y;
        if ( *y > 0.0 && v187 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v187, dest, &colorWhite, 0, 1, charHeight, 0);
          v188 = *y;
        }
        *y = v188 + charHeight;
      }
      name = event->data.stateChange.part->name;
      if ( name && *name )
      {
        Com_sprintf(dest, 0x100ui64, "XAnimCurve: %s", name);
        v190 = *y;
        v191 = *y;
        if ( *y > 0.0 && v190 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v190, dest, &colorWhite, 0, 1, charHeight, 0);
          v191 = *y;
        }
        *y = v191 + charHeight;
      }
      Com_sprintf(dest, 0x100ui64, "Strength Multiplier: %.2f", event->data.animation.startTimeMax);
      v192 = *y;
      v193 = *y;
      if ( *y > 0.0 && v192 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v192, dest, &colorWhite, 0, 1, charHeight, 0);
        v193 = *y;
      }
      *y = v193 + charHeight;
      Com_sprintf(dest, 0x100ui64, "Rate Multiplier: %.2f", event->data.chunkDynent.launchAngVel.v[0]);
      v194 = *y;
      v195 = *y;
      if ( *y > 0.0 && v194 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v194, dest, &colorWhite, 0, 1, charHeight, 0);
        v195 = *y;
      }
      *y = v195 + charHeight;
      if ( !event->data.anonymous.buffer[24] )
        return;
      Com_sprintf(dest, 0x100ui64, "Is Viewmodel");
      goto LABEL_744;
    case Scriptable_EventType_Move:
      Com_sprintf(dest, 0x100ui64, "orignOffset: (%.2f %.2f %.2f)", event->data.wait.delayMin, event->data.wait.delayMax, event->data.chunkDynent.launchLinVel.v[0]);
      v334 = *y;
      v335 = *y;
      if ( *y > 0.0 && v334 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v334, dest, &colorWhite, 0, 1, charHeight, 0);
        v335 = *y;
      }
      *y = v335 + charHeight;
      Com_sprintf(dest, 0x100ui64, "angleOffset: (%.2f %.2f %.2f)", event->data.animation.startTimeMin, event->data.animation.startTimeMax, event->data.chunkDynent.launchAngVel.v[0]);
      v336 = *y;
      v337 = *y;
      if ( *y > 0.0 && v336 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v336, dest, &colorWhite, 0, 1, charHeight, 0);
        v337 = *y;
      }
      *y = v337 + charHeight;
      blendTime = event->data.animation.blendTime;
      v118 = event->data.animation.playbackRateMax;
      v119 = event->data.animation.playbackRateMin;
      v120 = "seconds: %.2f, accel %.2f decel %.2f";
LABEL_211:
      Com_sprintf(dest, 0x100ui64, v120, v119, v118, blendTime);
      goto LABEL_744;
    case Scriptable_EventType_Footstep:
      v338 = event->data.spawnDynent.tagName;
      if ( v338 && *v338 )
      {
        Com_sprintf(dest, 0x100ui64, "Sound Alias:%s", v338);
        v339 = *y;
        v340 = *y;
        if ( *y > 0.0 && v339 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v339, dest, &colorWhite, 0, 1, charHeight, 0);
          v340 = *y;
        }
        *y = v340 + charHeight;
      }
      v341 = event->data.script.notification;
      if ( !v341 || !*v341 )
        return;
      LODWORD(fmt) = event->data.script.scrNotification;
      Com_sprintf(dest, 0x100ui64, "TagName: %s Script:%i", v341, fmt);
      v342 = *y;
      v343 = *y;
      if ( *y > 0.0 && v342 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v342, dest, &colorWhite, 0, 1, charHeight, 0);
        v343 = *y;
      }
      *y = v343 + charHeight;
      if ( !event->data.anonymous.buffer[24] )
        return;
      v249 = "ignore event";
      if ( event->data.anonymous.buffer[25] )
        v249 = "use root";
LABEL_471:
      Com_sprintf(dest, 0x100ui64, "Allow missing tag - %s", v249);
      goto LABEL_744;
    case Scriptable_EventType_GravityArc:
      Com_sprintf(dest, 0x100ui64, "angleOffset: (%.2f %.2f %.2f)", event->data.wait.delayMin, event->data.wait.delayMax, event->data.chunkDynent.launchLinVel.v[0]);
      v344 = *y;
      v345 = *y;
      if ( *y > 0.0 && v344 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v344, dest, &colorWhite, 0, 1, charHeight, 0);
        v345 = *y;
      }
      *y = v345 + charHeight;
      Com_sprintf(dest, 0x100ui64, "gravityScale: %.2f", event->data.animation.startTimeMin);
      v346 = *y;
      v347 = *y;
      if ( *y > 0.0 && v346 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v346, dest, &colorWhite, 0, 1, charHeight, 0);
        v347 = *y;
      }
      *y = v347 + charHeight;
      Com_sprintf(dest, 0x100ui64, "upwardVelocity: %.2f", event->data.animation.startTimeMax);
      v348 = *y;
      v349 = *y;
      if ( *y > 0.0 && v348 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v348, dest, &colorWhite, 0, 1, charHeight, 0);
        v349 = *y;
      }
      *y = v349 + charHeight;
      v350 = "n";
      v351 = "n";
      if ( event->data.anonymous.buffer[24] )
        v351 = "y";
      Com_sprintf(dest, 0x100ui64, "endAtInitialPose: %s", v351);
      v352 = *y;
      v353 = *y;
      if ( *y > 0.0 && v352 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v352, dest, &colorWhite, 0, 1, charHeight, 0);
        v353 = *y;
      }
      *y = v353 + charHeight;
      v354 = "n";
      if ( event->data.anonymous.buffer[25] )
        v354 = "y";
      Com_sprintf(dest, 0x100ui64, "randomSpin: %s", v354);
      v355 = *y;
      v356 = *y;
      if ( *y > 0.0 && v355 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v355, dest, &colorWhite, 0, 1, charHeight, 0);
        v356 = *y;
      }
      *y = v356 + charHeight;
      v357 = "playLootTrailFX: %s";
      if ( event->data.anonymous.buffer[26] )
        v350 = "y";
      goto LABEL_681;
    case Scriptable_EventType_ViewTrigger:
      Com_sprintf(dest, 0x100ui64, "Trigger distance: %.3f", fsqrt(event->data.wait.delayMin));
      v358 = *y;
      v359 = *y;
      if ( *y > 0.0 && v358 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v358, dest, &colorWhite, 0, 1, charHeight, 0);
        v359 = *y;
      }
      *y = v359 + charHeight;
      v360 = event->data.wait.delayMax;
      v361 = "Trigger FOV cos(0.5 angle): %.3f";
      goto LABEL_686;
    case Scriptable_EventType_Objective:
      Com_sprintf(dest, 0x100ui64, "state: %d", event->data.anonymous.buffer[2]);
      v362 = *y;
      v363 = *y;
      if ( *y > 0.0 && v362 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v362, dest, &colorWhite, 0, 1, charHeight, 0);
        v363 = *y;
      }
      *y = v363 + charHeight;
      Com_sprintf(dest, 0x100ui64, "background: %d", event->data.anonymous.buffer[3]);
      v364 = *y;
      v365 = *y;
      if ( *y > 0.0 && v364 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v364, dest, &colorWhite, 0, 1, charHeight, 0);
        v365 = *y;
      }
      *y = v365 + charHeight;
      Com_sprintf(dest, 0x100ui64, "zOffset: %d", event->data.stateChange.stateIdx);
      v366 = *y;
      v367 = *y;
      if ( *y > 0.0 && v366 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v366, dest, &colorWhite, 0, 1, charHeight, 0);
        v367 = *y;
      }
      *y = v367 + charHeight;
      Com_sprintf(dest, 0x100ui64, "description: %s", event->data.sound.soundAlias);
      v368 = *y;
      v369 = *y;
      if ( *y > 0.0 && v368 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v368, dest, &colorWhite, 0, 1, charHeight, 0);
        v369 = *y;
      }
      *y = v369 + charHeight;
      Com_sprintf(dest, 0x100ui64, "icon: %s", event->data.objective.icon);
      v370 = *y;
      v371 = *y;
      if ( *y > 0.0 && v370 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v370, dest, &colorWhite, 0, 1, charHeight, 0);
        v371 = *y;
      }
      *y = v371 + charHeight;
      Com_sprintf(dest, 0x100ui64, "label: %s", event->data.particleFX.effectAlias);
      v372 = *y;
      v373 = *y;
      if ( *y > 0.0 && v372 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v372, dest, &colorWhite, 0, 1, charHeight, 0);
        v373 = *y;
      }
      *y = v373 + charHeight;
      v350 = "no";
      v374 = "no";
      if ( event->data.anonymous.buffer[9] )
        v374 = "yes";
      Com_sprintf(dest, 0x100ui64, "always show in world: %s", v374);
      v375 = *y;
      v376 = *y;
      if ( *y > 0.0 && v375 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v375, dest, &colorWhite, 0, 1, charHeight, 0);
        v376 = *y;
      }
      *y = v376 + charHeight;
      v357 = "always snap to edge: %s";
      if ( event->data.anonymous.buffer[10] )
        v350 = "yes";
LABEL_681:
      Com_sprintf(dest, 0x100ui64, v357, v350);
      goto LABEL_744;
    case Scriptable_EventType_SpatialDisable:
      v377 = "no";
      if ( event->data.anonymous.buffer[0] )
        v377 = "yes";
      Com_sprintf(dest, 0x100ui64, "Disabled: %s", v377);
      goto LABEL_744;
    case Scriptable_EventType_Hover:
      Com_sprintf(dest, 0x100ui64, "amplitudeUpDown: %f", event->data.wait.delayMin);
      v378 = *y;
      v379 = *y;
      if ( *y > 0.0 && v378 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v378, dest, &colorWhite, 0, 1, charHeight, 0);
        v379 = *y;
      }
      *y = v379 + charHeight;
      Com_sprintf(dest, 0x100ui64, "frequencyUpDown: %f", event->data.wait.delayMax);
      v380 = *y;
      v381 = *y;
      if ( *y > 0.0 && v380 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v380, dest, &colorWhite, 0, 1, charHeight, 0);
        v381 = *y;
      }
      *y = v381 + charHeight;
      Com_sprintf(dest, 0x100ui64, "frequencyPitch: %f", event->data.chunkDynent.launchLinVel.v[0]);
      v382 = *y;
      v383 = *y;
      if ( *y > 0.0 && v382 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v382, dest, &colorWhite, 0, 1, charHeight, 0);
        v383 = *y;
      }
      *y = v383 + charHeight;
      v360 = event->data.animation.startTimeMin;
      v361 = "frequencyYaw: %f";
      goto LABEL_686;
    case Scriptable_EventType_VehicleBlowUpTire:
      Com_sprintf(dest, 0x100ui64, "tireIndex: %d", event->data.stateChange.partReference.flatId);
      goto LABEL_744;
    case Scriptable_EventType_Dlc1:
      Com_sprintf(dest, 0x100ui64, "dlcFloat0: %f", event->data.wait.delayMin);
      v384 = *y;
      v385 = *y;
      if ( *y > 0.0 && v384 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v384, dest, &colorWhite, 0, 1, charHeight, 0);
        v385 = *y;
      }
      *y = v385 + charHeight;
      Com_sprintf(dest, 0x100ui64, "dlcFloat1: %f", event->data.wait.delayMax);
      v386 = *y;
      v387 = *y;
      if ( *y > 0.0 && v386 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v386, dest, &colorWhite, 0, 1, charHeight, 0);
        v387 = *y;
      }
      *y = v387 + charHeight;
      Com_sprintf(dest, 0x100ui64, "dlcFloat2: %f", event->data.chunkDynent.launchLinVel.v[0]);
      v388 = *y;
      v389 = *y;
      if ( *y > 0.0 && v388 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v388, dest, &colorWhite, 0, 1, charHeight, 0);
        v389 = *y;
      }
      *y = v389 + charHeight;
      v360 = event->data.animation.startTimeMin;
      v361 = "dlcFloat3: %f";
LABEL_686:
      Com_sprintf(dest, 0x100ui64, v361, v360);
      goto LABEL_744;
    case Scriptable_EventType_ScriptDamage:
      v390 = event->data.script.notification;
      if ( v390 && *v390 )
      {
        LODWORD(fmt) = event->data.script.scrNotification;
        Com_sprintf(dest, 0x100ui64, "Name:%s Script:%i", v390, fmt);
        v391 = *y;
        v392 = *y;
        if ( *y > 0.0 && v391 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v391, dest, &colorWhite, 0, 1, charHeight, 0);
          v392 = *y;
        }
        *y = v392 + charHeight;
      }
      Com_sprintf(dest, 0x100ui64, "Param:%i", event->data.objective.settings.label);
      goto LABEL_744;
    default:
      return;
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableEventsDef
==============
*/
void ScriptableBg_DrawDebugScriptableEventsDef(const ScriptableEventDef *events, const unsigned int numEvents, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const dvar_t *v7; 
  const ScriptableEventDef *v11; 
  const char *string; 
  unsigned int i; 
  const char *name; 
  float v15; 
  float v16; 
  char dest[256]; 

  v7 = DVARSTR_scriptabledebug_eventfilter;
  v11 = events;
  if ( !DVARSTR_scriptabledebug_eventfilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_eventfilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  string = v7->current.string;
  for ( i = 0; i < numEvents; ++v11 )
  {
    name = v11->base.name;
    if ( !v11->base.name || !*name || I_strempty(string) || I_stristr(name, string) )
    {
      Com_sprintf(dest, 0x100ui64, "Event %i", i);
      v15 = *y;
      v16 = *y;
      if ( *y > 0.0 && v15 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v15, dest, &colorWhite, 0, 1, charHeight, 0);
        v16 = *y;
      }
      *y = v16 + charHeight;
      *x = tabWidth + *x;
      ScriptableBg_DrawDebugScriptableEventDef(&events[i], scrPlace, x, y, tabWidth, charHeight);
      *x = *x - tabWidth;
    }
    ++i;
  }
}

/*
==============
ScriptableBg_DrawDebugScriptableInstance
==============
*/
void ScriptableBg_DrawDebugScriptableInstance(const unsigned int instanceId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int v9; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v11; 
  ScriptableDef *v12; 
  ScriptableInstanceContext *v13; 
  const XModel *ScriptableModel; 
  unsigned int v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  bool MapInstance; 
  ScriptableInstance *v21; 
  unsigned __int16 ffMemCost; 
  float v23; 
  float v24; 
  unsigned __int8 flags; 
  bool IsStandaloneRequested; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  float v30; 
  float v31; 
  int v32; 
  scr_string_t targetname; 
  const char *v34; 
  float v35; 
  float v36; 
  scr_string_t script_linkname; 
  const char *v38; 
  float v39; 
  float v40; 
  scr_string_t script_linkto; 
  const char *v42; 
  float v43; 
  float v44; 
  scr_string_t script_noteworthy; 
  const char *v46; 
  float v47; 
  float v48; 
  unsigned __int16 *lightIndices; 
  __int64 v50; 
  float v51; 
  float v52; 
  ScriptableDef *v53; 
  ScriptableInstanceContext *v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  ScriptableDataType dataType; 
  const XCompositeModelDef *compositeModel; 
  const char *v66; 
  float v67; 
  float v68; 
  ScriptableInstanceServerContext *v69; 
  const XModel *model; 
  const char *v71; 
  float v72; 
  float v73; 
  const char *v74; 
  float v75; 
  float v76; 
  const char *v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  bool v82; 
  float v83; 
  unsigned int v84; 
  __int64 v85; 
  _BYTE *v86; 
  ScriptableDef *v87; 
  ScriptableInstanceContextSecure *v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  ScriptableDataType v97; 
  const XCompositeModelDef *v98; 
  const char *v99; 
  float v100; 
  float v101; 
  unsigned __int64 v102; 
  ScriptableInstanceClientContext *v103; 
  const char *v104; 
  const char *v105; 
  const char *v106; 
  const char *v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  bool v112; 
  float v113; 
  const ScriptablePartDef *v114; 
  __int64 depthTest; 
  __int64 duration; 
  __int64 vertAlign; 
  bool v118; 
  ScriptableLinkType linkedObjectType; 
  bool v120; 
  ScriptableLinkType v121; 
  bool v122; 
  char v123; 
  unsigned int linkedObjectIndex; 
  float v126; 
  unsigned int v127; 
  vec3_t runtime; 
  ScriptableInstanceContextSecure *v129; 
  ScriptableDef *def; 
  ScriptableInstance *outInstance; 
  ScriptableInstanceContextSecure *context; 
  __int64 v133; 
  vec3_t outOrigin; 
  vec3_t origin; 
  vec3_t angles; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  char dest[256]; 

  v133 = -2i64;
  v9 = instanceId;
  ScriptableCommon_AssertCountsInitialized();
  if ( v9 >= g_scriptableWorldCounts.totalInstanceCount )
    return;
  if ( ScriptableBg_ServerContextIsPrimary(v9) )
  {
    outOrigin = ScriptableSv_GetInstanceCommonContext(v9)->origin;
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v9);
  }
  else
  {
    v11 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v9);
    ScriptableInstanceContextSecure::GetOrigin(v11, v9, &outOrigin);
    InstanceCommonContext = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v9);
  }
  v12 = (ScriptableDef *)InstanceCommonContext->def;
  def = v12;
  if ( !v12 )
    return;
  if ( ScriptableBg_ServerContextIsPrimary(v9) )
  {
    v13 = ScriptableSv_GetInstanceCommonContext(v9);
    origin = v13->origin;
  }
  else
  {
    v13 = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v9);
    ScriptableInstanceContextSecure::GetOrigin(v13, v9, &origin);
  }
  angles = v13->angles;
  ScriptableModel = BG_XCompositeModel_GetScriptableModel(v13);
  if ( ScriptableModel )
  {
    bounds = ScriptableModel->bounds;
  }
  else
  {
    bounds.midPoint = origin;
    bounds.halfSize.v[0] = FLOAT_1_0;
    bounds.halfSize.v[1] = FLOAT_1_0;
    bounds.halfSize.v[2] = FLOAT_1_0;
  }
  AnglesToAxis(&angles, &axis);
  v15 = 0;
  CG_DebugBoxOriented(&origin, &bounds, &axis, &colorGreen, 0, 0);
  CG_DebugSphere(&origin, 2.0, &colorRed, 0, 1);
  CG_Draw2DRect(scrPlace, *x, *y, 300.0, 300.0, 1, 1, &colorBlackFaded, cgMedia.whiteMaterial);
  Com_sprintf(dest, 0x100ui64, "Scriptable Instance: %i %s", v9, v12->name);
  v16 = *y;
  v17 = *y;
  if ( *y > 0.0 && v16 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v16, dest, &colorYellow, 0, 1, charHeight, 0);
    v17 = *y;
  }
  *y = v17 + charHeight;
  *x = tabWidth + *x;
  Com_sprintf(dest, 0x100ui64, "Origin: %.2f, %.2f, %.2f", outOrigin.v[0], outOrigin.v[1], outOrigin.v[2]);
  v18 = *y;
  v19 = *y;
  if ( *y > 0.0 && v18 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v18, dest, &colorWhite, 0, 1, charHeight, 0);
    v19 = *y;
  }
  *y = v19 + charHeight;
  MapInstance = ScriptableCommon_GetMapInstance(v9, (const ScriptableInstance **)&outInstance);
  v118 = MapInstance;
  *(_QWORD *)runtime.v = (char *)&queryFormat.fmt + 3;
  v21 = outInstance;
  if ( MapInstance )
  {
    if ( !outInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2503, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    ffMemCost = v21->ffMemCost;
    if ( ffMemCost )
    {
      Com_sprintf(dest, 0x100ui64, "FastFile MemCost %i", ffMemCost);
      v23 = *y;
      v24 = *y;
      if ( *y > 0.0 && v23 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v23, dest, &colorWhite, 0, 1, charHeight, 0);
        v24 = *y;
      }
      *y = v24 + charHeight;
    }
    if ( v21->flags )
    {
      flags = v21->flags;
      IsStandaloneRequested = ScriptableDef_IsStandaloneRequested(def);
      v27 = (char *)&queryFormat.fmt + 3;
      if ( IsStandaloneRequested )
        v27 = "noEntity ";
      v28 = (char *)&queryFormat.fmt + 3;
      if ( (flags & 2) != 0 )
        v28 = "noShadow ";
      v29 = (char *)&queryFormat.fmt + 3;
      if ( (flags & 1) != 0 )
        v29 = "noCollision ";
      Com_sprintf(dest, 0x100ui64, "InstFlags: %s%s%s", v29, v28, v27);
      v30 = *y;
      v31 = *y;
      if ( *y > 0.0 && v30 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v30, dest, &colorWhite, 0, 1, charHeight, 0);
        v31 = *y;
      }
      *y = v31 + charHeight;
      MapInstance = v118;
    }
  }
  v32 = def->flags;
  if ( v32 )
    ScriptableBg_DrawDefFlags(v32, scrPlace, x, y, tabWidth, charHeight);
  if ( MapInstance )
  {
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2531, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    targetname = v21->targetname;
    if ( targetname )
    {
      v34 = SL_ConvertToString(targetname);
      Com_sprintf(dest, 0x100ui64, "targetname: %s", v34);
      v35 = *y;
      v36 = *y;
      if ( *y > 0.0 && v35 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v35, dest, &colorWhite, 0, 1, charHeight, 0);
        v36 = *y;
      }
      *y = v36 + charHeight;
    }
    script_linkname = v21->script_linkname;
    if ( script_linkname )
    {
      v38 = SL_ConvertToString(script_linkname);
      Com_sprintf(dest, 0x100ui64, "script_linkname: %s", v38);
      v39 = *y;
      v40 = *y;
      if ( *y > 0.0 && v39 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v39, dest, &colorWhite, 0, 1, charHeight, 0);
        v40 = *y;
      }
      *y = v40 + charHeight;
    }
    script_linkto = v21->script_linkto;
    if ( script_linkto )
    {
      v42 = SL_ConvertToString(script_linkto);
      Com_sprintf(dest, 0x100ui64, "script_linkto: %s", v42);
      v43 = *y;
      v44 = *y;
      if ( *y > 0.0 && v43 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v43, dest, &colorWhite, 0, 1, charHeight, 0);
        v44 = *y;
      }
      *y = v44 + charHeight;
    }
    script_noteworthy = v21->script_noteworthy;
    if ( script_noteworthy )
    {
      v46 = SL_ConvertToString(script_noteworthy);
      Com_sprintf(dest, 0x100ui64, "script_noteworthy: %s", v46);
      v47 = *y;
      v48 = *y;
      if ( *y > 0.0 && v47 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v47, dest, &colorWhite, 0, 1, charHeight, 0);
        v48 = *y;
      }
      *y = v48 + charHeight;
    }
    lightIndices = v21->lightIndices;
    v50 = 5i64;
    do
    {
      if ( *lightIndices )
      {
        Com_sprintf(dest, 0x100ui64, "Light Index: %i", *lightIndices);
        v51 = *y;
        v52 = *y;
        if ( *y > 0.0 && v51 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v51, dest, &colorWhite, 0, 1, charHeight, 0);
          v52 = *y;
        }
        *y = v52 + charHeight;
      }
      ++lightIndices;
      --v50;
    }
    while ( v50 );
    v9 = instanceId;
  }
  *x = *x - tabWidth;
  *y = charHeight + *y;
  ScriptableCommon_AssertCountsInitialized();
  if ( v9 >= g_scriptableWorldCounts.serverInstanceCount )
    v53 = NULL;
  else
    v53 = (ScriptableDef *)ScriptableSv_GetInstanceCommonContext(v9)->def;
  v129 = (ScriptableInstanceContextSecure *)v53;
  if ( v53 && (v53->flags & 2) != 0 )
  {
    v54 = ScriptableSv_GetInstanceCommonContext(v9);
    context = v54;
    linkedObjectType = v54->linkedObjectType;
    linkedObjectIndex = v54->linkedObjectIndex;
    Com_sprintf(dest, 0x100ui64, "Server");
    v55 = *y;
    v56 = *y;
    if ( *y > 0.0 && v55 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v55, dest, &colorYellow, 0, 1, charHeight, 0);
      v56 = *y;
    }
    *y = v56 + charHeight;
    *x = tabWidth + *x;
    Com_sprintf(dest, 0x100ui64, "Part ID %i", v54->partStateIndex);
    v57 = *y;
    v58 = *y;
    if ( *y > 0.0 && v57 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v57, dest, &colorYellow, 0, 1, charHeight, 0);
      v58 = *y;
    }
    *y = v58 + charHeight;
    if ( v53 != def )
    {
      Com_sprintf(dest, 0x100ui64, "Def: %s", v53->name);
      v59 = *y;
      v60 = *y;
      if ( *y > 0.0 && v59 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v59, dest, &colorRed, 0, 1, charHeight, 0);
        v60 = *y;
      }
      *y = v60 + charHeight;
    }
    v61 = v54->origin.v[0];
    if ( (float)((float)((float)((float)(outOrigin.v[1] - v54->origin.v[1]) * (float)(outOrigin.v[1] - v54->origin.v[1])) + (float)((float)(outOrigin.v[0] - v61) * (float)(outOrigin.v[0] - v61))) + (float)((float)(outOrigin.v[2] - v54->origin.v[2]) * (float)(outOrigin.v[2] - v54->origin.v[2]))) > 1.0 )
    {
      Com_sprintf(dest, 0x100ui64, "Origin: %.2f, %.2f, %.2f", v61, v54->origin.v[1], v54->origin.v[2]);
      v62 = *y;
      v63 = *y;
      if ( *y > 0.0 && v62 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v62, dest, &colorRed, 0, 1, charHeight, 0);
        v63 = *y;
      }
      *y = v63 + charHeight;
    }
    dataType = v54->dataType;
    compositeModel = v54->data.compositeModel;
    if ( dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
    {
      if ( !compositeModel )
      {
LABEL_103:
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( v9 >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(vertAlign) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(duration) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", duration, vertAlign) )
            __debugbreak();
        }
        v69 = g_scriptableSv_instanceContexts;
        if ( g_scriptableSv_instanceContexts[v9].collisionContext.scriptableCollisionMain != -1 )
        {
          if ( g_scriptableSv_instanceContexts[v9].collisionContext.scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2624, ASSERT_TYPE_ASSERT, "(collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
            __debugbreak();
          model = v69[v9].collisionContext.model;
          if ( model )
            *(_QWORD *)runtime.v = model->name;
          v71 = "Movable";
          if ( v69[v9].collisionContext.neverMoves )
            v71 = "Never Moves";
          LODWORD(depthTest) = v69[v9].collisionContext.scriptableCollisionDetail;
          Com_sprintf(dest, 0x100ui64, "Collision: %i %i %s %s", v69[v9].collisionContext.scriptableCollisionMain, depthTest, v71, *(const char **)runtime.v);
          v72 = *y;
          v73 = *y;
          if ( *y > 0.0 && v72 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v72, dest, &colorWhite, 0, 1, charHeight, 0);
            v73 = *y;
          }
          *y = v73 + charHeight;
          v74 = "No Push";
          if ( v69[v9].collisionContext.canPush )
            v74 = "Can Push";
          Com_sprintf(dest, 0x100ui64, v74);
          v75 = *y;
          v76 = *y;
          if ( *y > 0.0 && v75 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v75, dest, &colorWhite, 0, 1, charHeight, 0);
            v76 = *y;
          }
          *y = v76 + charHeight;
          v77 = "No Touch";
          if ( v69[v9].collisionContext.canTouch )
            v77 = "Can Touch";
          Com_sprintf(dest, 0x100ui64, v77);
          v78 = *y;
          v79 = *y;
          if ( *y > 0.0 && v78 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v78, dest, &colorWhite, 0, 1, charHeight, 0);
            v79 = *y;
          }
          *y = v79 + charHeight;
        }
        if ( linkedObjectType == SCRIPTABLE_LINK_ENTITY )
        {
          if ( linkedObjectIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2640, ASSERT_TYPE_ASSERT, "(linkedObject < ( 2048 ))", (const char *)&queryFormat, "linkedObject < MAX_GENTITIES") )
            __debugbreak();
          Com_sprintf(dest, 0x100ui64, "Entity: %i", linkedObjectIndex);
          v80 = *y;
          v81 = *y;
          if ( *y > 0.0 && v80 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v80, dest, &colorWhite, 0, 1, charHeight, 0);
            v81 = *y;
          }
          *y = v81 + charHeight;
        }
        *(_QWORD *)runtime.v = g_svScriptableRuntimePartStates;
        ScriptableCommon_AssertCountsInitialized();
        v82 = v9 < g_scriptableWorldCounts.runtimeInstanceCount;
        v120 = v9 < g_scriptableWorldCounts.runtimeInstanceCount;
        v83 = v129->anglesInitial.v[0];
        v126 = v83;
        v84 = 0;
        if ( v83 != 0.0 )
        {
          v85 = *(_QWORD *)&v129->anglesInitial.y;
          v86 = (_BYTE *)(v85 + 12);
          do
          {
            if ( (*v86 & 2) != 0 )
            {
              ScriptableBg_DrawDebugScriptableInstanceContextPartState(v9, 1, v82, (const ScriptablePartDef *)(v85 + 104i64 * v84), v84, context, *(const ScriptablePartRuntime **)runtime.v, scrPlace, x, y, tabWidth, charHeight);
              v83 = v126;
              v82 = v120;
            }
            ++v84;
            v86 += 104;
          }
          while ( v84 < LODWORD(v83) );
          v15 = 0;
        }
        *x = *x - tabWidth;
        *y = charHeight + *y;
        goto LABEL_146;
      }
    }
    else if ( !compositeModel )
    {
      goto LABEL_103;
    }
    v66 = "Model: %s";
    if ( dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
      v66 = "CompositeModel: %s";
    Com_sprintf(dest, 0x100ui64, v66, compositeModel->name);
    v67 = *y;
    v68 = *y;
    if ( *y > 0.0 && v67 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v67, dest, &colorWhite, 0, 1, charHeight, 0);
      v68 = *y;
    }
    *y = v68 + charHeight;
    goto LABEL_103;
  }
LABEL_146:
  v87 = (ScriptableDef *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v9)->def;
  context = (ScriptableInstanceContextSecure *)v87;
  if ( !v87 )
    return;
  v88 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v9);
  v129 = v88;
  v121 = v88->linkedObjectType;
  v127 = v88->linkedObjectIndex;
  Com_sprintf(dest, 0x100ui64, "Client");
  v89 = *y;
  v90 = *y;
  if ( *y > 0.0 && v89 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v89, dest, &colorYellow, 0, 1, charHeight, 0);
    v90 = *y;
  }
  *y = v90 + charHeight;
  *x = tabWidth + *x;
  Com_sprintf(dest, 0x100ui64, "Part ID %i", v88->partStateIndex);
  v91 = *y;
  v92 = *y;
  if ( *y > 0.0 && v91 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v91, dest, &colorYellow, 0, 1, charHeight, 0);
    v92 = *y;
  }
  *y = v92 + charHeight;
  if ( v87 != def )
  {
    Com_sprintf(dest, 0x100ui64, "Def:%s", v87->name);
    v93 = *y;
    v94 = *y;
    if ( *y > 0.0 && v93 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v93, dest, &colorRed, 0, 1, charHeight, 0);
      v94 = *y;
    }
    *y = v94 + charHeight;
  }
  ScriptableInstanceContextSecure::GetOrigin(v88, v9, &runtime);
  if ( (float)((float)((float)((float)(outOrigin.v[1] - runtime.v[1]) * (float)(outOrigin.v[1] - runtime.v[1])) + (float)((float)(outOrigin.v[0] - runtime.v[0]) * (float)(outOrigin.v[0] - runtime.v[0]))) + (float)((float)(outOrigin.v[2] - runtime.v[2]) * (float)(outOrigin.v[2] - runtime.v[2]))) > 1.0 )
  {
    Com_sprintf(dest, 0x100ui64, "Origin: %.2f, %.2f, %.2f", runtime.v[0], runtime.v[1], runtime.v[2]);
    v95 = *y;
    v96 = *y;
    if ( *y > 0.0 && v95 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v95, dest, &colorRed, 0, 1, charHeight, 0);
      v96 = *y;
    }
    *y = v96 + charHeight;
  }
  v97 = v88->dataType;
  v98 = v88->data.compositeModel;
  if ( v97 == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
  {
    if ( !v98 )
      goto LABEL_173;
  }
  else if ( !v98 )
  {
    goto LABEL_173;
  }
  v99 = "Model:%s";
  if ( v97 == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
    v99 = "CompositeModel:%s";
  Com_sprintf(dest, 0x100ui64, v99, v98->name);
  v100 = *y;
  v101 = *y;
  if ( *y > 0.0 && v100 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v100, dest, &colorWhite, 0, 1, charHeight, 0);
    v101 = *y;
  }
  *y = v101 + charHeight;
LABEL_173:
  ScriptableCommon_AssertCountsInitialized();
  if ( v9 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(vertAlign) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(duration) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", duration, vertAlign) )
      __debugbreak();
  }
  if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 125, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  v102 = v9;
  v103 = g_scriptableCl_instanceContexts[0];
  v123 = g_scriptableCl_instanceContexts[0][v102].collisionContext.collisionActiveFlags & 1;
  if ( g_scriptableCl_instanceContexts[0][v102].collisionContext.scriptableCollisionPredictive == -1 )
  {
    if ( g_scriptableCl_instanceContexts[0][v102].collisionContext.scriptableCollisionAuthoritative == -1 )
      goto LABEL_204;
    if ( g_scriptableCl_instanceContexts[0][v102].collisionContext.scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2710, ASSERT_TYPE_ASSERT, "(collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v106 = "Inactive";
    if ( v123 )
      v106 = "Active";
    v107 = "Movable";
    if ( v103[v102].collisionContext.neverMoves )
      v107 = "Never Moves";
    LODWORD(depthTest) = v103[v102].collisionContext.scriptableCollisionDetail;
    Com_sprintf(dest, 0x100ui64, "Collision Instance:%i %i %s %s", v103[v102].collisionContext.scriptableCollisionAuthoritative, depthTest, v107, v106);
  }
  else
  {
    if ( g_scriptableCl_instanceContexts[0][v102].collisionContext.scriptableCollisionAuthoritative == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2702, ASSERT_TYPE_ASSERT, "(collisionContext.scriptableCollisionAuthoritative != 0xFFFFFFFF)", (const char *)&queryFormat, "collisionContext.scriptableCollisionAuthoritative != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( v103[v102].collisionContext.scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2703, ASSERT_TYPE_ASSERT, "(collisionContext.scriptableCollisionDetail != 0xFFFFFFFF)", (const char *)&queryFormat, "collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v104 = "Inactive";
    if ( v123 )
      v104 = "Active";
    v105 = "Movable";
    if ( v103[v102].collisionContext.neverMoves )
      v105 = "Never Moves";
    LODWORD(duration) = v103[v102].collisionContext.scriptableCollisionDetail;
    LODWORD(depthTest) = v103[v102].collisionContext.scriptableCollisionAuthoritative;
    Com_sprintf(dest, 0x100ui64, "Collision Instance:%i %i %i %s %s", v103[v102].collisionContext.scriptableCollisionPredictive, depthTest, duration, v105, v104);
  }
  v108 = *y;
  v109 = *y;
  if ( *y > 0.0 && v108 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v108, dest, &colorWhite, 0, 1, charHeight, 0);
    v109 = *y;
  }
  *y = v109 + charHeight;
LABEL_204:
  switch ( v121 )
  {
    case SCRIPTABLE_LINK_ENTITY:
      Com_sprintf(dest, 0x100ui64, "Entity:%i", v127);
      goto LABEL_210;
    case SCRIPTABLE_LINK_DYNENT:
      Com_sprintf(dest, 0x100ui64, "Dynent:%i", v127);
      goto LABEL_210;
    case SCRIPTABLE_LINK_CLIENTMODEL:
      Com_sprintf(dest, 0x100ui64, "ClientModel:%i", v127);
LABEL_210:
      v110 = *y;
      v111 = *y;
      if ( *y > 0.0 && v110 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v110, dest, &colorWhite, 0, 1, charHeight, 0);
        v111 = *y;
      }
      *y = v111 + charHeight;
      break;
  }
  outInstance = (ScriptableInstance *)g_ScriptableClRuntimePartStates[0];
  ScriptableCommon_AssertCountsInitialized();
  v112 = v9 < g_scriptableWorldCounts.runtimeInstanceCount;
  v122 = v9 < g_scriptableWorldCounts.runtimeInstanceCount;
  v113 = context->anglesInitial.v[0];
  v114 = *(const ScriptablePartDef **)&context->anglesInitial.y;
  if ( v113 != 0.0 )
  {
    do
    {
      ScriptableBg_DrawDebugScriptableInstanceContextPartState(v9, 0, v112, v114++, v15++, v129, (const ScriptablePartRuntime *)outInstance, scrPlace, x, y, tabWidth, charHeight);
      v112 = v122;
    }
    while ( v15 < LODWORD(v113) );
  }
  *x = *x - tabWidth;
  *y = charHeight + *y;
  memset(&runtime, 0, sizeof(runtime));
}

/*
==============
ScriptableBg_DrawDebugScriptableInstanceContextPartState
==============
*/
void ScriptableBg_DrawDebugScriptableInstanceContextPartState(const unsigned int instanceId, bool server, bool reserved, const ScriptablePartDef *part, const unsigned int partIdx, const ScriptableInstanceContextSecure *context, const ScriptablePartRuntime *runtime, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const ScriptablePartDef *v12; 
  float *v13; 
  bool v14; 
  float *v15; 
  unsigned int v16; 
  const char *name; 
  const ScriptablePartRuntime *v18; 
  const ScriptableInstanceContextSecure *v19; 
  scr_string_t scrName; 
  unsigned int v21; 
  unsigned int serverInstanceFlatId; 
  __int64 v23; 
  unsigned int reservedStateListHeader; 
  __int64 v25; 
  unsigned int v26; 
  ScriptablePartRuntime *v27; 
  unsigned __int16 stateId; 
  int v29; 
  __int64 v30; 
  const char *v31; 
  const char *v32; 
  int v33; 
  int Time; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned int v44; 
  __int64 v45; 
  __int64 v46; 
  int v47; 
  __int64 v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  __int64 v52; 
  int v53; 
  __int64 v54; 
  int v55; 
  __int64 v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  __int64 v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  char *v71; 
  unsigned __int16 eventStreamBufferOffsetServer; 
  __int64 v73; 
  unsigned __int8 *eventStreamBuffer; 
  float v75; 
  float v76; 
  float v77; 
  float *v78; 
  const ScreenPlacement *v79; 
  const vec4_t *v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  unsigned int numChildParts; 
  ScriptablePartDef *childParts; 
  int *p_flags; 
  __int64 forceColor; 
  __int64 shadow; 
  bool v92; 
  int v94; 
  const char *v96; 
  int *v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  char dest[256]; 

  v12 = part;
  v13 = x;
  v14 = server;
  v15 = y;
  v16 = instanceId;
  name = part->name;
  v18 = runtime;
  v19 = context;
  v92 = reserved;
  v96 = name;
  if ( !name || !*name )
  {
    scrName = v12->scrName;
    if ( scrName )
    {
      name = SL_ConvertToString(scrName);
      v19 = context;
      reserved = v92;
      v18 = runtime;
    }
    else
    {
      name = (char *)&queryFormat.fmt + 3;
    }
    v96 = name;
  }
  v21 = 0;
  v97 = NULL;
  if ( !v12->numStates )
  {
    Com_sprintf(dest, 0x100ui64, "Part[%2i] %10s, empty", partIdx, name);
    v83 = *y;
    v76 = charHeight;
    v84 = *y;
    if ( *y > 0.0 && v83 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v83, dest, &colorWhite, 0, 1, charHeight, 0);
      v84 = *y;
    }
    v82 = v84 + charHeight;
    goto LABEL_187;
  }
  if ( v14 )
    serverInstanceFlatId = v12->serverInstanceFlatId;
  else
    serverInstanceFlatId = v12->flatId;
  v23 = v19->partStateIndex + serverInstanceFlatId;
  if ( reserved )
  {
    reservedStateListHeader = v19->reservedStateListHeader;
    if ( (_DWORD)v23 )
    {
      v25 = (unsigned int)v23;
      v26 = g_scriptableSVReservedPartRuntimeCount;
      do
      {
        if ( reservedStateListHeader >= v26 )
        {
          LODWORD(shadow) = v26;
          LODWORD(forceColor) = reservedStateListHeader;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2124, ASSERT_TYPE_ASSERT, "(unsigned)( reservedStateIdx ) < (unsigned)( g_scriptableSVReservedPartRuntimeCount )", "reservedStateIdx doesn't index g_scriptableSVReservedPartRuntimeCount\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
          v26 = g_scriptableSVReservedPartRuntimeCount;
        }
        v27 = g_scriptableSVReservedPartRuntimes;
        if ( !v14 )
          v27 = g_scriptableClReservedPartRuntimes[0];
        reservedStateListHeader = v27[reservedStateListHeader].nextRuntime;
        --v25;
      }
      while ( v25 );
    }
    else
    {
      v26 = g_scriptableSVReservedPartRuntimeCount;
    }
    if ( reservedStateListHeader >= v26 )
    {
      LODWORD(shadow) = v26;
      LODWORD(forceColor) = reservedStateListHeader;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2128, ASSERT_TYPE_ASSERT, "(unsigned)( reservedStateIdx ) < (unsigned)( g_scriptableSVReservedPartRuntimeCount )", "reservedStateIdx doesn't index g_scriptableSVReservedPartRuntimeCount\n\t%i not in [0, %i)", forceColor, shadow) )
        __debugbreak();
    }
    if ( v14 )
      stateId = g_scriptableSVReservedPartRuntimes[reservedStateListHeader].stateId;
    else
      stateId = g_scriptableClReservedPartRuntimes[0][reservedStateListHeader].stateId;
  }
  else
  {
    stateId = v18[v23].stateId;
  }
  v29 = stateId;
  v94 = stateId;
  v30 = (__int64)&v12->states[stateId];
  v31 = *(const char **)v30;
  if ( *(_DWORD *)(v30 + 24) == 1 )
  {
    if ( !v31 )
      v31 = *(const char **)(v30 + 112);
    v97 = (int *)(v30 + 40);
    goto LABEL_38;
  }
  if ( *(_DWORD *)(v30 + 24) != 2 && *(_DWORD *)(v30 + 24) != 3 )
  {
LABEL_38:
    v32 = (char *)&queryFormat.fmt + 3;
    if ( v31 )
      v32 = v31;
    v31 = v32;
    goto LABEL_41;
  }
  if ( !v31 )
  {
    v31 = *(const char **)(v30 + 40);
    goto LABEL_38;
  }
LABEL_41:
  v33 = 0;
  if ( v14 )
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
  v35 = partIdx;
  if ( Time )
  {
    v36 = 15i64 * v14;
    v98 = v36 + 8;
    v37 = v36 + 1;
    v99 = v36 + 9;
    v38 = v36 + 2;
    v100 = v36 + 10;
    v39 = v36 + 3;
    v101 = v36 + 11;
    v40 = v36 + 4;
    v102 = v36 + 12;
    v41 = v36 + 5;
    v103 = v36 + 13;
    v42 = v36 + 6;
    v43 = v36 + 7;
    v104 = v36 + 14;
    v44 = instanceId;
    v45 = v36;
    v35 = partIdx;
    if ( s_recentStateChanges[0][v45].instance == instanceId )
    {
      v44 = instanceId;
      if ( s_recentStateChanges[0][v45].partId == partIdx )
      {
        v35 = partIdx;
        if ( Time - s_recentStateChanges[0][v45].time <= 10000 )
          v33 = Time - s_recentStateChanges[0][v45].time;
        v44 = instanceId;
      }
    }
    v46 = v37;
    if ( s_recentStateChanges[0][v46].instance == v44 && s_recentStateChanges[0][v46].partId == v35 )
    {
      v47 = Time - s_recentStateChanges[0][v46].time;
      if ( v47 <= 10000 && (!v33 || v47 < v33) )
        v33 = Time - s_recentStateChanges[0][v46].time;
    }
    v48 = v38;
    if ( s_recentStateChanges[0][v48].instance == instanceId && s_recentStateChanges[0][v48].partId == v35 )
    {
      v49 = Time - s_recentStateChanges[0][v48].time;
      if ( v49 <= 10000 && (!v33 || v49 < v33) )
        v33 = Time - s_recentStateChanges[0][v48].time;
    }
    v50 = v39;
    if ( s_recentStateChanges[0][v50].instance == instanceId && s_recentStateChanges[0][v50].partId == v35 )
    {
      v51 = Time - s_recentStateChanges[0][v50].time;
      if ( v51 <= 10000 && (!v33 || v51 < v33) )
        v33 = Time - s_recentStateChanges[0][v50].time;
    }
    v52 = v40;
    if ( s_recentStateChanges[0][v52].instance == instanceId && s_recentStateChanges[0][v52].partId == v35 )
    {
      v53 = Time - s_recentStateChanges[0][v52].time;
      if ( v53 <= 10000 && (!v33 || v53 < v33) )
        v33 = Time - s_recentStateChanges[0][v52].time;
    }
    v54 = v41;
    if ( s_recentStateChanges[0][v54].instance == instanceId && s_recentStateChanges[0][v54].partId == v35 )
    {
      v55 = Time - s_recentStateChanges[0][v54].time;
      if ( v55 <= 10000 && (!v33 || v55 < v33) )
        v33 = Time - s_recentStateChanges[0][v54].time;
    }
    v56 = v42;
    if ( s_recentStateChanges[0][v56].instance == instanceId && s_recentStateChanges[0][v56].partId == v35 )
    {
      v57 = Time - s_recentStateChanges[0][v56].time;
      if ( v57 <= 10000 && (!v33 || v57 < v33) )
        v33 = Time - s_recentStateChanges[0][v56].time;
    }
    v58 = v43;
    if ( s_recentStateChanges[0][v58].instance == instanceId && s_recentStateChanges[0][v58].partId == v35 )
    {
      v59 = Time - s_recentStateChanges[0][v58].time;
      if ( v59 <= 10000 && (!v33 || v59 < v33) )
        v33 = Time - s_recentStateChanges[0][v58].time;
    }
    if ( s_recentStateChanges[0][v98].instance == instanceId && s_recentStateChanges[0][v98].partId == v35 )
    {
      v60 = Time - s_recentStateChanges[0][v98].time;
      if ( v60 <= 10000 && (!v33 || v60 < v33) )
        v33 = Time - s_recentStateChanges[0][v98].time;
    }
    if ( s_recentStateChanges[0][v99].instance == instanceId && s_recentStateChanges[0][v99].partId == v35 )
    {
      v61 = Time - s_recentStateChanges[0][v99].time;
      if ( v61 <= 10000 && (!v33 || v61 < v33) )
        v33 = Time - s_recentStateChanges[0][v99].time;
    }
    if ( s_recentStateChanges[0][v100].instance == instanceId && s_recentStateChanges[0][v100].partId == v35 )
    {
      v62 = Time - s_recentStateChanges[0][v100].time;
      if ( v62 <= 10000 && (!v33 || v62 < v33) )
        v33 = Time - s_recentStateChanges[0][v100].time;
    }
    if ( s_recentStateChanges[0][v101].instance == instanceId && s_recentStateChanges[0][v101].partId == v35 )
    {
      v63 = Time - s_recentStateChanges[0][v101].time;
      if ( v63 <= 10000 && (!v33 || v63 < v33) )
        v33 = Time - s_recentStateChanges[0][v101].time;
    }
    if ( s_recentStateChanges[0][v102].instance == instanceId && s_recentStateChanges[0][v102].partId == v35 )
    {
      v64 = Time - s_recentStateChanges[0][v102].time;
      if ( v64 <= 10000 && (!v33 || v64 < v33) )
        v33 = Time - s_recentStateChanges[0][v102].time;
    }
    if ( s_recentStateChanges[0][v103].instance == instanceId && s_recentStateChanges[0][v103].partId == v35 )
    {
      v65 = Time - s_recentStateChanges[0][v103].time;
      if ( v65 <= 10000 && (!v33 || v65 < v33) )
        v33 = Time - s_recentStateChanges[0][v103].time;
    }
    v66 = v104;
    if ( s_recentStateChanges[0][v104].instance == instanceId && s_recentStateChanges[0][v66].partId == v35 )
    {
      v67 = Time - s_recentStateChanges[0][v66].time;
      if ( v67 <= 10000 && (!v33 || v67 < v33) )
        v33 = v67;
    }
    v14 = server;
    v29 = v94;
    v12 = part;
  }
  v68 = *(_DWORD *)(v30 + 24);
  if ( !v68 )
    goto LABEL_164;
  v69 = v68 - 1;
  if ( !v69 )
  {
    if ( v14 )
      eventStreamBufferOffsetServer = v12->eventStreamBufferOffsetServer;
    else
      eventStreamBufferOffsetServer = v12->eventStreamBufferOffsetClient;
    v73 = eventStreamBufferOffsetServer;
    eventStreamBuffer = context->eventStreamBuffer;
    if ( *(char *)(v30 + 8) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2217, ASSERT_TYPE_ASSERT, "(stateDef->base.flags & (1 << 7))", (const char *)&queryFormat, "stateDef->base.flags & SCRIPTABLE_DEFFLAG_HAS_HEALTH") )
      __debugbreak();
    if ( v73 + 4 > (unsigned __int64)context->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2218, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= context->eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= context->eventStreamBufferSize") )
      __debugbreak();
    v75 = *(float *)&eventStreamBuffer[v73];
    if ( !v97 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_debug.cpp", 2222, ASSERT_TYPE_ASSERT, "(pMaxHealth)", (const char *)&queryFormat, "pMaxHealth") )
      __debugbreak();
    LODWORD(forceColor) = v94;
    Com_sprintf(dest, 0x100ui64, "Part[%2i] %15s, State[%i] H - %s | Health %.2f / %.2f", v35, v96, forceColor, v31, v75, (float)*v97);
    goto LABEL_165;
  }
  v70 = v69 - 1;
  if ( v70 )
  {
    if ( v70 == 1 )
    {
      v71 = (char *)&queryFormat.fmt + 3;
      if ( *(_QWORD *)(v30 + 112) )
        v71 = *(char **)(v30 + 112);
      LODWORD(forceColor) = v29;
      Com_sprintf(dest, 0x100ui64, "Part[%2i] %15s, State[%i] U - %s | %s", v35, v96, forceColor, v31, v71);
    }
  }
  else
  {
LABEL_164:
    LODWORD(forceColor) = v29;
    Com_sprintf(dest, 0x100ui64, "Part[%2i] %15s, State[%i] S - %s", v35, v96, forceColor, v31);
  }
LABEL_165:
  v15 = y;
  v76 = charHeight;
  v77 = *y;
  if ( v33 )
  {
    if ( v33 >= 1000 )
    {
      if ( v77 > 0.0 )
      {
        v78 = x;
        v79 = scrPlace;
        if ( v77 >= 1080.0 )
          goto LABEL_175;
        v80 = &colorOrange;
        goto LABEL_170;
      }
    }
    else if ( v77 > 0.0 )
    {
      v78 = x;
      v79 = scrPlace;
      if ( v77 >= 1080.0 )
      {
LABEL_175:
        Com_sprintf(dest, 0x100ui64, "%3.1f", (float)((float)v33 * 0.001));
        v81 = *y;
        if ( *y > 0.0 && v81 < 1080.0 )
          CG_DrawStringExt(v79, *v78 - tabWidth, v81, dest, &colorWhite, 0, 1, charHeight, 0);
        goto LABEL_178;
      }
      v80 = &colorRed;
LABEL_170:
      CG_DrawStringExt(v79, *v78, v77, dest, v80, 0, 1, charHeight, 0);
      goto LABEL_175;
    }
    v79 = scrPlace;
    v78 = x;
    goto LABEL_175;
  }
  if ( v77 <= 0.0 )
  {
LABEL_178:
    v13 = x;
LABEL_179:
    v82 = charHeight + *y;
    v16 = instanceId;
    v12 = part;
    goto LABEL_187;
  }
  v13 = x;
  if ( v77 >= 1080.0 )
    goto LABEL_179;
  CG_DrawStringExt(scrPlace, *x, v77, dest, &colorWhite, 0, 1, charHeight, 0);
  v82 = charHeight + *y;
  v16 = instanceId;
  v12 = part;
LABEL_187:
  *v15 = v82;
  v85 = tabWidth + *v13;
  *v13 = v85;
  numChildParts = v12->numChildParts;
  if ( numChildParts )
  {
    childParts = v12->childParts;
    p_flags = &childParts->flags;
    do
    {
      if ( !v14 || (*(_BYTE *)p_flags & 2) != 0 )
        ScriptableBg_DrawDebugScriptableInstanceContextPartState(v16, v14, v92, &childParts[v21], v21, context, runtime, scrPlace, v13, v15, tabWidth, v76);
      ++v21;
      p_flags += 26;
    }
    while ( v21 < numChildParts );
    v85 = *v13;
  }
  *v13 = v85 - tabWidth;
}

/*
==============
ScriptableBg_DrawDebugScriptableInstanceInWorld
==============
*/
void ScriptableBg_DrawDebugScriptableInstanceInWorld(const unsigned int instanceId, const ScriptableDef *def)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  const XModel *ScriptableModel; 
  int flags; 
  const vec4_t *v7; 
  const char *v8; 
  vec3_t outOrigin; 
  vec3_t xyz; 
  vec3_t angles; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 

  if ( ScriptableBg_ServerContextIsPrimary(instanceId) )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(instanceId);
    outOrigin = InstanceCommonContext->origin;
  }
  else
  {
    InstanceCommonContext = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, instanceId);
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, instanceId, &outOrigin);
  }
  angles = InstanceCommonContext->angles;
  ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  if ( ScriptableModel )
  {
    AnglesToAxis(&angles, &axis);
    MatrixTransformVector(&ScriptableModel->bounds.midPoint, &axis, &out);
    xyz.v[0] = out.v[0] + outOrigin.v[0];
    xyz.v[2] = out.v[2] + outOrigin.v[2];
    xyz.v[1] = out.v[1] + outOrigin.v[1];
  }
  else
  {
    xyz = outOrigin;
  }
  CL_AddDebugStringCentered(&xyz, &colorRed, 0.30000001, def->name, 0, 0);
  flags = def->flags;
  v7 = &colorCyan;
  v8 = "Client Only";
  xyz.v[2] = xyz.v[2] + -2.0;
  if ( (flags & 4) != 0 )
  {
    v8 = "Server Controlled";
LABEL_11:
    v7 = &colorOrange;
    goto LABEL_12;
  }
  if ( (flags & 2) != 0 )
  {
    v8 = "Server Instance";
    goto LABEL_11;
  }
LABEL_12:
  CL_AddDebugStringCentered(&xyz, v7, 0.15000001, v8, 0, 0);
}

/*
==============
ScriptableBg_DrawDebugScriptableNoteTracksDef
==============
*/
void ScriptableBg_DrawDebugScriptableNoteTracksDef(const ScriptableNoteTrackDef *noteTracks, const unsigned int numNoteTracks, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int *p_numEvents; 
  unsigned int i; 
  float v12; 
  float v13; 
  int v14; 
  const char *v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  const char *v19; 
  float v20; 
  float v21; 
  float v22; 
  vec4_t *setColor; 
  char string[256]; 
  char dest[256]; 

  if ( numNoteTracks )
  {
    p_numEvents = &noteTracks->numEvents;
    for ( i = 0; i < numNoteTracks; ++i )
    {
      Com_sprintf(dest, 0x100ui64, "NoteTrack %i", i);
      v12 = *y;
      v13 = *y;
      if ( *y > 0.0 && v12 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v12, dest, &colorWhite, 0, 1, charHeight, 0);
        v13 = *y;
      }
      *y = v13 + charHeight;
      *x = tabWidth + *x;
      v14 = *(p_numEvents - 5);
      if ( v14 )
        ScriptableBg_DrawDefFlags(v14, scrPlace, x, y, tabWidth, charHeight);
      v15 = *(const char **)(p_numEvents - 3);
      if ( v15 && *v15 )
      {
        LODWORD(setColor) = *(p_numEvents - 1);
        Com_sprintf(string, 0x100ui64, "Name:%s Script:%i", v15, setColor);
        v16 = *y;
        v17 = *y;
        if ( *y > 0.0 && v16 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v16, string, &colorWhite, 0, 1, charHeight, 0);
          v17 = *y;
        }
        *y = v17 + charHeight;
      }
      v18 = *p_numEvents;
      if ( (_DWORD)v18 )
      {
        v19 = "Events";
        if ( (_DWORD)v18 == 1 )
          v19 = "Event";
        Com_sprintf(string, 0x100ui64, "%i %s", v18, v19);
        v20 = *y;
        v21 = *y;
        if ( *y > 0.0 && v20 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v20, string, &colorWhite, 0, 1, charHeight, 0);
          v21 = *y;
        }
        *y = v21 + charHeight;
        *x = tabWidth + *x;
        ScriptableBg_DrawDebugScriptableEventsDef(*(const ScriptableEventDef **)(p_numEvents + 1), *p_numEvents, scrPlace, x, y, tabWidth, charHeight);
        v22 = *x - tabWidth;
      }
      else
      {
        v22 = *x;
      }
      p_numEvents += 8;
      *x = v22 - tabWidth;
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
  const dvar_t *v6; 
  const ScriptablePartDef *v7; 
  const char *name; 
  const char *v12; 
  unsigned int v13; 
  const char *v14; 
  float v15; 
  float v16; 
  int flags; 
  float v18; 
  float v19; 
  const char *tagName; 
  float v21; 
  float v22; 
  __int64 numDamageTagOverrides; 
  float v24; 
  float v25; 
  float v26; 
  unsigned int v27; 
  ScriptableDamageTagOverride *damageTagOverrides; 
  float v29; 
  float v30; 
  __int64 numStates; 
  const char *v32; 
  float v33; 
  float v34; 
  const dvar_t *v35; 
  const ScriptableStateDef *states; 
  const char *v37; 
  const char *v38; 
  float v39; 
  float v40; 
  __int64 numChildParts; 
  const char *v42; 
  float v43; 
  float v44; 
  int v45; 
  float v46; 
  float v47; 
  char *fmt; 
  __int64 forceColor; 
  unsigned int v50; 
  char dest[256]; 
  char string[256]; 

  v6 = DVARSTR_scriptabledebug_partfilter;
  v7 = part;
  if ( !DVARSTR_scriptabledebug_partfilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_partfilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  name = v7->name;
  v12 = v6->current.string;
  v13 = 0;
  if ( !v7->name || !*name || !v12 || !*v12 || I_stristr(name, v12) )
  {
    v14 = v7->name;
    if ( v7->name && *v14 )
    {
      LODWORD(fmt) = v7->scrName;
      Com_sprintf(dest, 0x100ui64, "Name:%s Script:%i", v14, fmt);
      v15 = *y;
      v16 = *y;
      if ( *y > 0.0 && v15 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v15, dest, &colorWhite, 0, 1, charHeight, 0);
        v16 = *y;
      }
      *y = v16 + charHeight;
    }
    flags = v7->flags;
    if ( flags )
    {
      ScriptableBg_DrawDefFlags(flags, scrPlace, x, y, tabWidth, charHeight);
      flags = v7->flags;
    }
    if ( (flags & 4) != 0 )
    {
      LODWORD(forceColor) = v7->flatId;
      LODWORD(fmt) = v7->serverInstanceFlatId;
      Com_sprintf(dest, 0x100ui64, "Flat Id: ServerControlled:%i ServerInstanced:%i Overall:%i", v7->serverControlledFlatId, fmt, forceColor);
    }
    else if ( (flags & 2) != 0 )
    {
      LODWORD(fmt) = v7->flatId;
      Com_sprintf(dest, 0x100ui64, "Flat Id: ServerInstanced:%i Overall:%i", v7->serverInstanceFlatId, fmt);
    }
    else
    {
      Com_sprintf(dest, 0x100ui64, "Flat Id:%i", v7->flatId);
    }
    v18 = *y;
    v19 = *y;
    if ( *y > 0.0 && v18 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v18, dest, &colorWhite, 0, 1, charHeight, 0);
      v19 = *y;
    }
    *y = v19 + charHeight;
    tagName = v7->tagName;
    if ( tagName && *tagName )
    {
      LODWORD(fmt) = v7->scrTagName;
      Com_sprintf(dest, 0x100ui64, "Tag:%s Script:%i", tagName, fmt);
      v21 = *y;
      v22 = *y;
      if ( *y > 0.0 && v21 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v21, dest, &colorWhite, 0, 1, charHeight, 0);
        v22 = *y;
      }
      *y = v22 + charHeight;
    }
    numDamageTagOverrides = v7->numDamageTagOverrides;
    if ( (_DWORD)numDamageTagOverrides )
    {
      Com_sprintf(dest, 0x100ui64, "%i Damage Tag Overrides", numDamageTagOverrides);
      v24 = *y;
      v25 = *y;
      if ( *y > 0.0 && v24 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v24, dest, &colorWhite, 0, 1, charHeight, 0);
        v25 = *y;
      }
      *y = v25 + charHeight;
      v26 = tabWidth + *x;
      *x = v26;
      v27 = 0;
      if ( v7->numDamageTagOverrides )
      {
        do
        {
          damageTagOverrides = v7->damageTagOverrides;
          LODWORD(forceColor) = damageTagOverrides[v27].scrTag;
          Com_sprintf(dest, 0x100ui64, "%i Tag:%s Script:%i", v27, damageTagOverrides[v27].tag, forceColor);
          v29 = *y;
          v30 = *y;
          if ( *y > 0.0 && v29 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v29, dest, &colorWhite, 0, 1, charHeight, 0);
            v30 = *y;
          }
          ++v27;
          *y = v30 + charHeight;
        }
        while ( v27 < v7->numDamageTagOverrides );
        v26 = *x;
      }
      *x = v26 - tabWidth;
    }
    numStates = v7->numStates;
    if ( (_DWORD)numStates )
    {
      v32 = "States";
      if ( (_DWORD)numStates == 1 )
        v32 = "State";
      Com_sprintf(dest, 0x100ui64, "%i %s", numStates, v32);
      v33 = *y;
      v34 = *y;
      if ( *y > 0.0 && v33 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v33, dest, &colorWhite, 0, 1, charHeight, 0);
        v34 = *y;
      }
      *y = v34 + charHeight;
      *x = tabWidth + *x;
      v35 = DVARSTR_scriptabledebug_statefilter;
      states = v7->states;
      v50 = v7->numStates;
      if ( !DVARSTR_scriptabledebug_statefilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_statefilter") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      v37 = v35->current.string;
      if ( v50 )
      {
        do
        {
          v38 = states->base.name;
          if ( !states->base.name || !*v38 || I_strempty(v37) || I_stristr(v38, v37) )
          {
            Com_sprintf(string, 0x100ui64, "State %i", v13);
            v39 = *y;
            v40 = *y;
            if ( *y > 0.0 && v39 < 1080.0 )
            {
              CG_DrawStringExt(scrPlace, *x, v39, string, &colorWhite, 0, 1, charHeight, 0);
              v40 = *y;
            }
            *y = v40 + charHeight;
            *x = tabWidth + *x;
            ScriptableBg_DrawDebugScriptableStateDef(states, scrPlace, x, y, tabWidth, charHeight);
            *x = *x - tabWidth;
          }
          ++v13;
          ++states;
        }
        while ( v13 < v50 );
        v7 = part;
      }
      *x = *x - tabWidth;
    }
  }
  numChildParts = v7->numChildParts;
  if ( (_DWORD)numChildParts )
  {
    v42 = "Parts";
    if ( (_DWORD)numChildParts == 1 )
      v42 = "Part";
    Com_sprintf(dest, 0x100ui64, "%i %s", numChildParts, v42);
    v43 = *y;
    v44 = *y;
    if ( *y > 0.0 && v43 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v43, dest, &colorWhite, 0, 1, charHeight, 0);
      v44 = *y;
    }
    *y = v44 + charHeight;
    *x = tabWidth + *x;
    ScriptableBg_DrawDebugScriptablePartsDef(v7->childParts, v7->numChildParts, scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
  v45 = v7->flags;
  if ( (v45 & 0x100) != 0 )
  {
    if ( (v45 & 2) != 0 )
    {
      LODWORD(fmt) = v7->eventStreamBufferOffsetClient;
      Com_sprintf(dest, 0x100ui64, "Event Buffer Offset: Server:%i Client:%i", v7->eventStreamBufferOffsetServer, fmt);
    }
    else
    {
      Com_sprintf(dest, 0x100ui64, "Event Buffer Offset: Client:%i", v7->eventStreamBufferOffsetClient);
    }
    v46 = *y;
    v47 = *y;
    if ( *y > 0.0 && v46 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v46, dest, &colorWhite, 0, 1, charHeight, 0);
      v47 = *y;
    }
    *y = v47 + charHeight;
  }
}

/*
==============
ScriptableBg_DrawDebugScriptablePartsDef
==============
*/
void ScriptableBg_DrawDebugScriptablePartsDef(const ScriptablePartDef *parts, const unsigned int numParts, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const dvar_t *v7; 
  const char *string; 
  unsigned int i; 
  const char *name; 
  float v15; 
  float v16; 
  char dest[256]; 

  v7 = DVARSTR_scriptabledebug_partfilter;
  if ( !DVARSTR_scriptabledebug_partfilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptabledebug_partfilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  string = v7->current.string;
  for ( i = 0; i < numParts; *x = *x - tabWidth )
  {
    name = parts->name;
    if ( !parts->name || !*name || I_strempty(string) || I_stristr(name, string) )
    {
      Com_sprintf(dest, 0x100ui64, "Part %i", i);
      v15 = *y;
      v16 = *y;
      if ( *y > 0.0 && v15 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v15, dest, &colorWhite, 0, 1, charHeight, 0);
        v16 = *y;
      }
      *y = v16 + charHeight;
    }
    *x = tabWidth + *x;
    ScriptableBg_DrawDebugScriptablePartDef(parts, scrPlace, x, y, tabWidth, charHeight);
    ++i;
    ++parts;
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
  float v11; 
  float v12; 
  int flags; 
  const char *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  const char *hintStringDisabled; 
  const char *hintIcon; 
  const char *v25; 
  const char *v26; 
  float v27; 
  float v28; 
  __int64 validAttackerTeams; 
  const char *v30; 
  float v31; 
  float v32; 
  __int64 numWeaponClasses; 
  float v34; 
  float v35; 
  float v36; 
  unsigned int v37; 
  float v38; 
  float v39; 
  __int64 numWeapons; 
  float v41; 
  float v42; 
  float v43; 
  unsigned int v44; 
  WeaponCompleteDef *v45; 
  const char *szInternalName; 
  float v47; 
  float v48; 
  __int64 minimumDamage; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  const char *script_id; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  __int64 numEvents; 
  const char *v60; 
  float v61; 
  float v62; 
  __int64 shadow; 
  const char *v64; 
  __int64 v65[4]; 
  __int64 v66[7]; 
  __int64 v67[10]; 
  __int64 v68[14]; 
  __int64 v69[16]; 
  char dest[256]; 

  v65[0] = (__int64)"Simple";
  v67[0] = (__int64)"All";
  v65[1] = (__int64)"Health";
  v66[0] = (__int64)"All";
  v65[2] = (__int64)"Scripted";
  v67[4] = (__int64)"None";
  v65[3] = (__int64)"Usable";
  v66[5] = (__int64)"None";
  v67[1] = (__int64)"Splash Only";
  v68[0] = (__int64)"All";
  v67[2] = (__int64)"No Splash";
  v67[3] = (__int64)"No Melee";
  v67[5] = (__int64)"Melee Only";
  v67[6] = (__int64)"Melee and Splash Only";
  v67[7] = (__int64)"Crush Only";
  v67[8] = (__int64)"Crush and Splash Only";
  v66[1] = (__int64)"No Player";
  v66[2] = (__int64)"Player Only";
  v66[3] = (__int64)"No AI";
  v66[4] = (__int64)"AI Only";
  v68[1] = (__int64)"Bad";
  v68[2] = (__int64)"Axis";
  v68[3] = (__int64)"Allies";
  v68[4] = (__int64)"Three";
  v68[5] = (__int64)"Neutral";
  v68[6] = (__int64)"Dead";
  v68[7] = (__int64)"My_Team";
  v68[8] = (__int64)"Enemy_Team";
  v68[9] = (__int64)"All_But_My_Team";
  v68[10] = (__int64)"All_But_Enemy_Team";
  v68[11] = (__int64)"Enemy_Team_And_Me";
  v68[12] = (__int64)"Just_Me";
  v69[0] = (__int64)"RIFLE";
  v69[1] = (__int64)"SNIPER";
  v69[2] = (__int64)"MG";
  v69[3] = (__int64)"SMG";
  v69[4] = (__int64)"SPREAD";
  v69[5] = (__int64)"PISTOL";
  v69[6] = (__int64)"GRENADE";
  name = state->base.name;
  v69[7] = (__int64)"ROCKETLAUNCHER";
  v69[8] = (__int64)"TURRET";
  v69[9] = (__int64)"THROWINGKNIFE";
  v69[10] = (__int64)"NON_PLAYER";
  v69[11] = (__int64)"ITEM";
  v69[12] = (__int64)"BEAM";
  v69[13] = (__int64)"BALL";
  v69[14] = (__int64)"NONE";
  if ( name && *name )
  {
    Com_sprintf(dest, 0x100ui64, "Name:%s Type:%s", name, (const char *)v65[state->type]);
    v11 = *y;
    v12 = *y;
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "Type:%s", (const char *)v65[state->type]);
    v12 = *y;
    v11 = *y;
  }
  if ( v11 > 0.0 && v11 < 1080.0 )
  {
    CG_DrawStringExt(scrPlace, *x, v11, dest, &colorWhite, 0, 1, charHeight, 0);
    v12 = *y;
  }
  *y = charHeight + v12;
  flags = state->base.flags;
  if ( flags )
    ScriptableBg_DrawDefFlags(flags, scrPlace, x, y, tabWidth, charHeight);
  switch ( state->type )
  {
    case Scriptable_StateType_Health:
      Com_sprintf(dest, 0x100ui64, "Health:%i", (unsigned int)state->data.health.health);
      v27 = *y;
      v28 = *y;
      if ( *y > 0.0 && v27 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v27, dest, &colorWhite, 0, 1, charHeight, 0);
        v28 = *y;
      }
      *y = v28 + charHeight;
      validAttackerTeams = state->data.health.validAttackerTeams;
      v30 = (const char *)v67[state->data.health.validDamageCause];
      if ( (_DWORD)validAttackerTeams )
        Com_sprintf(dest, 0x100ui64, "ValidCause:%s ValidAttacker:%s ValidAttackerTeam:%s", v30, (const char *)v66[state->data.health.validAttackers], (const char *)v68[validAttackerTeams]);
      else
        Com_sprintf(dest, 0x100ui64, "ValidCause:%s ValidAttacker:%s", v30, (const char *)v66[state->data.health.validAttackers]);
      v31 = *y;
      v32 = *y;
      if ( *y > 0.0 && v31 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v31, dest, &colorWhite, 0, 1, charHeight, 0);
        v32 = *y;
      }
      *y = v32 + charHeight;
      numWeaponClasses = state->data.health.numWeaponClasses;
      if ( (_DWORD)numWeaponClasses )
      {
        Com_sprintf(dest, 0x100ui64, "Weapon Class Filter: %i entries", numWeaponClasses);
        v34 = *y;
        v35 = *y;
        if ( *y > 0.0 && v34 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v34, dest, &colorWhite, 0, 1, charHeight, 0);
          v35 = *y;
        }
        *y = v35 + charHeight;
        v36 = tabWidth + *x;
        *x = v36;
        v37 = 0;
        if ( state->data.health.numWeaponClasses )
        {
          do
          {
            Com_sprintf(dest, 0x100ui64, "%i %s", v37, (const char *)v69[state->data.health.weaponClasses[v37]]);
            v38 = *y;
            v39 = *y;
            if ( *y > 0.0 && v38 < 1080.0 )
            {
              CG_DrawStringExt(scrPlace, *x, v38, dest, &colorWhite, 0, 1, charHeight, 0);
              v39 = *y;
            }
            ++v37;
            *y = v39 + charHeight;
          }
          while ( v37 < state->data.health.numWeaponClasses );
          v36 = *x;
        }
        *x = v36 - tabWidth;
      }
      numWeapons = state->data.health.numWeapons;
      if ( (_DWORD)numWeapons )
      {
        Com_sprintf(dest, 0x100ui64, "Weapon Filter: %i entries", numWeapons);
        v41 = *y;
        v42 = *y;
        if ( *y > 0.0 && v41 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v41, dest, &colorWhite, 0, 1, charHeight, 0);
          v42 = *y;
        }
        *y = v42 + charHeight;
        v43 = tabWidth + *x;
        *x = v43;
        v44 = 0;
        if ( state->data.health.numWeapons )
        {
          do
          {
            v45 = state->data.health.weapons[v44];
            if ( v45 )
              szInternalName = v45->szInternalName;
            else
              szInternalName = "UNKNOWN";
            Com_sprintf(dest, 0x100ui64, "%i %s", v44, szInternalName);
            v47 = *y;
            v48 = *y;
            if ( *y > 0.0 && v47 < 1080.0 )
            {
              CG_DrawStringExt(scrPlace, *x, v47, dest, &colorWhite, 0, 1, charHeight, 0);
              v48 = *y;
            }
            ++v44;
            *y = v48 + charHeight;
          }
          while ( v44 < state->data.health.numWeapons );
          v43 = *x;
        }
        *x = v43 - tabWidth;
      }
      minimumDamage = (unsigned int)state->data.health.minimumDamage;
      if ( (int)minimumDamage > 0 )
      {
        Com_sprintf(dest, 0x100ui64, "Minimum Damage: %i", minimumDamage);
        v50 = *y;
        v51 = *y;
        if ( *y > 0.0 && v50 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v50, dest, &colorWhite, 0, 1, charHeight, 0);
          v51 = *y;
        }
        *y = v51 + charHeight;
      }
      Com_sprintf(dest, 0x100ui64, "Damage Propagation: ToParent:%.3f ToChild:%.3f FromParent:%.3f FromChild:%.3f", state->data.health.damagePropagationToParent, state->data.health.damagePropagationToChild, state->data.health.damagePropagationFromParent, state->data.health.damagePropagationFromChild);
      v52 = *y;
      v53 = *y;
      if ( *y > 0.0 && v52 < 1080.0 )
      {
        CG_DrawStringExt(scrPlace, *x, v52, dest, &colorWhite, 0, 1, charHeight, 0);
        v53 = *y;
      }
      *y = v53 + charHeight;
      script_id = state->data.health.script_id;
      if ( script_id && *script_id )
      {
        Com_sprintf(dest, 0x100ui64, "ScriptId:%s", script_id);
        v55 = *y;
        v56 = *y;
        if ( *y > 0.0 && v55 < 1080.0 )
        {
          CG_DrawStringExt(scrPlace, *x, v55, dest, &colorWhite, 0, 1, charHeight, 0);
          v56 = *y;
        }
        *y = v56 + charHeight;
      }
      Com_sprintf(dest, 0x100ui64, "Splash Damage is%s localized");
      goto LABEL_85;
    case Scriptable_StateType_Scripted:
      v26 = state->data.scripted.script_id;
      if ( !v26 || !*v26 )
        break;
      Com_sprintf(dest, 0x100ui64, "ScriptId:%s");
      goto LABEL_85;
    case Scriptable_StateType_Usable:
      v14 = state->data.scripted.script_id;
      if ( v14 )
      {
        if ( *v14 )
        {
          Com_sprintf(dest, 0x100ui64, "ScriptId:%s", v14);
          v15 = *y;
          v16 = *y;
          if ( *y > 0.0 && v15 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v15, dest, &colorWhite, 0, 1, charHeight, 0);
            v16 = *y;
          }
          *y = v16 + charHeight;
          Com_sprintf(dest, 0x100ui64, "Use FOV: %.3f Face:%.3f", state->data.usable.useFOV, state->data.usable.faceFOV);
          v17 = *y;
          v18 = *y;
          if ( *y > 0.0 && v17 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v17, dest, &colorWhite, 0, 1, charHeight, 0);
            v18 = *y;
          }
          *y = v18 + charHeight;
          LODWORD(shadow) = state->data.usable.useRadiusMinimized;
          Com_sprintf(dest, 0x100ui64, "Use Radius: %.3f Auto:%.3f Display:%.3f Minimized:%d", state->data.usable.useRadius, state->data.usable.useRadiusAuto, state->data.usable.useRadiusDisplay, shadow);
          v19 = *y;
          v20 = *y;
          if ( *y > 0.0 && v19 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v19, dest, &colorWhite, 0, 1, charHeight, 0);
            v20 = *y;
          }
          *y = v20 + charHeight;
          Com_sprintf(dest, 0x100ui64, "Priority:%d", (unsigned int)state->data.usable.priority);
          v21 = *y;
          v22 = *y;
          if ( *y > 0.0 && v21 < 1080.0 )
          {
            CG_DrawStringExt(scrPlace, *x, v21, dest, &colorWhite, 0, 1, charHeight, 0);
            v22 = *y;
          }
          *y = v22 + charHeight;
          if ( state->data.health.script_id )
          {
            hintStringDisabled = (char *)&queryFormat.fmt + 3;
            hintIcon = (char *)&queryFormat.fmt + 3;
            if ( state->data.usable.hintIcon )
              hintIcon = state->data.usable.hintIcon;
            if ( state->data.usable.hintStringDisabled )
              hintStringDisabled = state->data.usable.hintStringDisabled;
            v64 = hintStringDisabled;
            v25 = SL_ConvertToString(state->data.usable.hintTag);
            Com_sprintf(dest, 0x100ui64, "Hint String: %s Tag:%s Disabled:%s Icon:%s", state->data.health.script_id, v25, v64, hintIcon);
LABEL_85:
            v57 = *y;
            v58 = *y;
            if ( *y > 0.0 && v57 < 1080.0 )
            {
              CG_DrawStringExt(scrPlace, *x, v57, dest, &colorWhite, 0, 1, charHeight, 0);
              v58 = *y;
            }
            *y = v58 + charHeight;
          }
        }
      }
      break;
  }
  numEvents = state->base.numEvents;
  if ( (_DWORD)numEvents )
  {
    v60 = "Events";
    if ( (_DWORD)numEvents == 1 )
      v60 = "Event";
    Com_sprintf(dest, 0x100ui64, "%i %s", numEvents, v60);
    v61 = *y;
    v62 = *y;
    if ( *y > 0.0 && v61 < 1080.0 )
    {
      CG_DrawStringExt(scrPlace, *x, v61, dest, &colorWhite, 0, 1, charHeight, 0);
      v62 = *y;
    }
    *y = v62 + charHeight;
    *x = tabWidth + *x;
    ScriptableBg_DrawDebugScriptableEventsDef(state->base.events, state->base.numEvents, scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
}

/*
==============
ScriptableBg_DrawDefFlags
==============
*/
void ScriptableBg_DrawDefFlags(const int flags, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const char *v10; 
  float v11; 
  float v12; 
  char dest[512]; 

  dest[0] = 0;
  I_strcat(dest, 0x200ui64, "Flags:");
  if ( (flags & 4) != 0 )
  {
    v10 = " | Server-Controlled";
  }
  else
  {
    if ( (flags & 2) == 0 )
      goto LABEL_6;
    v10 = " | Server-Instanced";
  }
  I_strcat(dest, 0x200ui64, v10);
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
  v11 = *y;
  if ( *y <= 0.0 || v11 >= 1080.0 )
  {
    v12 = v11 + charHeight;
  }
  else
  {
    CG_DrawStringExt(scrPlace, *x, v11, dest, &colorWhite, 0, 1, charHeight, 0);
    v12 = charHeight + *y;
  }
  *y = v12;
}

/*
==============
ScriptableBg_DrawLookedAtInstanceInfo
==============
*/
void ScriptableBg_DrawLookedAtInstanceInfo(const ScreenPlacement *scrPlace, const ScriptableBg_DrawDebugInfo *const debugInfo, float *x, float *y, float tabWidth, float charHeight)
{
  const dvar_t *v6; 
  float value; 
  float v11; 
  float v12; 
  float v13; 
  unsigned int v14; 
  unsigned int v15; 
  const ScriptableDef *def; 
  const ScriptableDef *v17; 
  char v18; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v20; 
  const ScriptableDef *v21; 
  float v22; 
  __int128 v23; 
  ScriptableInstanceContext *v27; 
  const XModel *ScriptableModel; 
  ScriptableInstanceContext *v29; 
  float t; 
  float *ya; 
  vec3_t rayDir; 
  vec3_t outOrigin; 
  vec3_t angles; 
  vec3_t origin; 
  __int128 v36; 
  __int64 v37; 
  vec3_t boxOrigin; 
  tmat33_t<vec3_t> axis; 

  v6 = DCONST_DVARFLT_scriptable_debug_inspectLookAtDistance;
  ya = y;
  if ( !DCONST_DVARFLT_scriptable_debug_inspectLookAtDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_inspectLookAtDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  v11 = FLOAT_3_4028235e38;
  rayDir.v[0] = debugInfo->forward.v[0];
  v12 = debugInfo->forward.v[2];
  v13 = value * value;
  rayDir.v[1] = debugInfo->forward.v[1];
  rayDir.v[2] = v12;
  v14 = 0;
  v15 = -1;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.totalInstanceCount )
  {
    do
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( v14 < g_scriptableWorldCounts.serverInstanceCount && ((def = ScriptableSv_GetInstanceCommonContext(v14)->def, (v17 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v14)->def) == NULL) || (v17->flags & 6) != 0 ? (v18 = 1) : (v18 = 0), def && (def->flags & 2) != 0 && v18) )
      {
        outOrigin = ScriptableSv_GetInstanceCommonContext(v14)->origin;
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v14);
      }
      else
      {
        v20 = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v14);
        ScriptableInstanceContextSecure::GetOrigin(v20, v14, &outOrigin);
        InstanceCommonContext = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v14);
      }
      v21 = InstanceCommonContext->def;
      if ( InstanceCommonContext->def )
      {
        v22 = (float)((float)((float)(debugInfo->viewPos.v[1] - outOrigin.v[1]) * (float)(debugInfo->viewPos.v[1] - outOrigin.v[1])) + (float)((float)(debugInfo->viewPos.v[0] - outOrigin.v[0]) * (float)(debugInfo->viewPos.v[0] - outOrigin.v[0]))) + (float)((float)(debugInfo->viewPos.v[2] - outOrigin.v[2]) * (float)(debugInfo->viewPos.v[2] - outOrigin.v[2]));
        if ( v22 >= 1.0 && v22 <= v13 )
        {
          ScriptableBg_DrawDebugScriptableInstanceInWorld(v14, InstanceCommonContext->def);
          v23 = LODWORD(rayDir.v[1]);
          *(float *)&v23 = fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(rayDir.v[0] * rayDir.v[0])) + (float)(rayDir.v[2] * rayDir.v[2]));
          _XMM3 = v23;
          __asm
          {
            vcmpless xmm0, xmm3, xmm12
            vblendvps xmm0, xmm3, xmm10, xmm0
          }
          rayDir.v[0] = rayDir.v[0] * (float)(1.0 / *(float *)&_XMM0);
          rayDir.v[2] = rayDir.v[2] * (float)(1.0 / *(float *)&_XMM0);
          rayDir.v[1] = rayDir.v[1] * (float)(1.0 / *(float *)&_XMM0);
          if ( ScriptableBg_ServerContextIsPrimary(v14) )
          {
            v27 = ScriptableSv_GetInstanceCommonContext(v14);
            origin = v27->origin;
          }
          else
          {
            v27 = (ScriptableInstanceContext *)ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v14);
            ScriptableInstanceContextSecure::GetOrigin(v27, v14, &origin);
          }
          angles = v27->angles;
          ScriptableModel = BG_XCompositeModel_GetScriptableModel(v27);
          if ( ScriptableModel )
          {
            v36 = *(_OWORD *)ScriptableModel->bounds.midPoint.v;
            v37 = *(_QWORD *)&ScriptableModel->bounds.halfSize.y;
          }
          else
          {
            v36 = _xmm;
            *(float *)&v37 = FLOAT_10_0;
            *((float *)&v37 + 1) = FLOAT_10_0;
          }
          AnglesToAxis(&angles, &axis);
          boxOrigin.v[0] = (float)((float)((float)(*((float *)&v36 + 1) * axis.m[1].v[0]) + (float)(*(float *)&v36 * axis.m[0].v[0])) + (float)(*((float *)&v36 + 2) * axis.m[2].v[0])) + origin.v[0];
          boxOrigin.v[1] = (float)((float)((float)(*((float *)&v36 + 1) * axis.m[1].v[1]) + (float)(*(float *)&v36 * axis.m[0].v[1])) + (float)(*((float *)&v36 + 2) * axis.m[2].v[1])) + origin.v[1];
          boxOrigin.v[2] = (float)((float)((float)(*((float *)&v36 + 1) * axis.m[1].v[2]) + (float)(*(float *)&v36 * axis.m[0].v[2])) + (float)(*((float *)&v36 + 2) * axis.m[2].v[2])) + origin.v[2];
          if ( IntersectRayBox(&debugInfo->viewPos, &rayDir, &boxOrigin, (const vec3_t *)&v36 + 1, &axis, &t) )
          {
            if ( (v21->flags & 6) == 0 || (v29 = ScriptableSv_GetInstanceCommonContext(v14), v29->linkedObjectType != SCRIPTABLE_LINK_ENTITY) || v29->linkedObjectIndex )
            {
              if ( t < v11 )
              {
                v11 = t;
                v15 = v14;
              }
            }
          }
        }
      }
      ++v14;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v14 < g_scriptableWorldCounts.totalInstanceCount );
    if ( v15 != -1 )
      ScriptableBg_DrawDebugScriptableInstance(v15, scrPlace, x, ya, tabWidth, charHeight);
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

