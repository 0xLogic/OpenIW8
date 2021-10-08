/*
==============
NetStats_GetMeasurments
==============
*/

int __fastcall NetStats_GetMeasurments(netstattype_e statType, int sinceTime, unsigned __int64 maxResults, int *results)
{
  return ?NetStats_GetMeasurments@@YAHW4netstattype_e@@H_KPEAH@Z(statType, sinceTime, maxResults, results);
}

/*
==============
NetStats_Frame
==============
*/

void NetStats_Frame(void)
{
  ?NetStats_Frame@@YAXXZ();
}

/*
==============
NetStats_UpdateTracker
==============
*/

void __fastcall NetStats_UpdateTracker(int stat, int value)
{
  ?NetStats_UpdateTracker@@YAXHH@Z(stat, value);
}

/*
==============
NetStats_Dump
==============
*/

void __fastcall NetStats_Dump()
{
  ?NetStats_Dump@@YAXXZ();
}

/*
==============
NetStats_InitializeModels
==============
*/

void NetStats_InitializeModels(void)
{
  ?NetStats_InitializeModels@@YAXXZ();
}

/*
==============
NetStats_Stop
==============
*/

void NetStats_Stop(void)
{
  ?NetStats_Stop@@YAXXZ();
}

/*
==============
NetStats_Reset
==============
*/

void NetStats_Reset(void)
{
  ?NetStats_Reset@@YAXXZ();
}

/*
==============
NetStats_PushToLUI
==============
*/

void NetStats_PushToLUI(void)
{
  ?NetStats_PushToLUI@@YAXXZ();
}

/*
==============
NetStatsUpdateCmd
==============
*/

void __fastcall NetStatsUpdateCmd()
{
  ?NetStatsUpdateCmd@@YAXXZ();
}

/*
==============
NetStats_GetStats
==============
*/

NetstatsStatsTracker_t *__fastcall NetStats_GetStats()
{
  return ?NetStats_GetStats@@YAPEAUNetstatsStatsTracker_t@@XZ();
}

/*
==============
NetStats_Init
==============
*/

void NetStats_Init(void)
{
  ?NetStats_Init@@YAXXZ();
}

/*
==============
NetStats_Update
==============
*/

void __fastcall NetStats_Update(netstattype_e stat)
{
  ?NetStats_Update@@YAXW4netstattype_e@@@Z(stat);
}

/*
==============
NetStats_LogStat
==============
*/

void __fastcall NetStats_LogStat(netstattype_e statType, int value)
{
  ?NetStats_LogStat@@YAXW4netstattype_e@@H@Z(statType, value);
}

/*
==============
CountMeasurements
==============
*/

__int64 __fastcall CountMeasurements(int count, int *measurements, double _XMM2_8)
{
  int v4; 
  __int64 v5; 
  int v7; 
  __int64 v10; 
  __int64 v16; 
  int v17; 

  v4 = 0;
  v5 = count;
  _ER10 = 0;
  v7 = 0;
  if ( count > 0 && (unsigned int)count >= 8 )
  {
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v10 = 0i64;
    do
    {
      __asm
      {
        vpaddd  xmm1, xmm1, xmmword ptr [rdx+rax*4]
        vpaddd  xmm2, xmm2, xmmword ptr [rdx+rax*4+10h]
      }
      v10 += 8i64;
      v7 += 8;
    }
    while ( v10 < count - count % 8 );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
      vmovd   r10d, xmm0
    }
  }
  v16 = v7;
  v17 = 0;
  if ( v7 >= v5 )
    return _ER10;
  if ( v5 - v7 >= 2 )
  {
    do
    {
      v4 += measurements[v16];
      v17 += measurements[v16 + 1];
      v16 += 2i64;
    }
    while ( v16 < v5 - 1 );
  }
  if ( v16 < v5 )
    _ER10 += measurements[v16];
  return _ER10 + v17 + v4;
}

/*
==============
MeanMeasurements
==============
*/

__int64 __fastcall MeanMeasurements(int count, int *measurements, double _XMM2_8)
{
  int v4; 
  __int64 v5; 
  int v7; 
  __int64 v10; 
  __int64 v16; 
  int v17; 
  __int64 result; 

  v4 = 0;
  v5 = count;
  _ER10 = 0;
  v7 = 0;
  if ( count > 0 && (unsigned int)count >= 8 )
  {
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v10 = 0i64;
    do
    {
      __asm
      {
        vpaddd  xmm1, xmm1, xmmword ptr [rdx+rax*4]
        vpaddd  xmm2, xmm2, xmmword ptr [rdx+rax*4+10h]
      }
      v10 += 8i64;
      v7 += 8;
    }
    while ( v10 < count - count % 8 );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
      vmovd   r10d, xmm0
    }
  }
  v16 = v7;
  v17 = 0;
  if ( v7 < v5 )
  {
    if ( v5 - v7 >= 2 )
    {
      do
      {
        v4 += measurements[v16];
        v17 += measurements[v16 + 1];
        v16 += 2i64;
      }
      while ( v16 < v5 - 1 );
    }
    if ( v16 < v5 )
      _ER10 += measurements[v16];
    _ER10 += v17 + v4;
  }
  result = _ER10;
  if ( (int)v5 > 0 )
    return (unsigned int)((int)_ER10 / (int)v5);
  return result;
}

/*
==============
NetStatsUpdateCmd
==============
*/
void NetStatsUpdateCmd(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; 
  int v4; 
  int Measurments; 
  __int64 v6; 
  int v7; 
  const dvar_t *v8; 
  unsigned int flags; 
  int results[512]; 

  v3 = Cmd_ArgInt(1);
  v4 = Sys_Milliseconds();
  Measurments = NetStats_GetMeasurments((netstattype_e)v3, v4 - s_netstatLookback[v3], 0x200ui64, results);
  v6 = v3;
  v7 = ((__int64 (__fastcall *)(int, int *, double))s_netstatReduce[v3])(Measurments, results, a3);
  if ( s_netstatsStatsTracker[v3].index == 62 )
    s_netstatsStatsTracker[v6].index = 0;
  v8 = DVARBOOL_netstats_dummy_tracker_data;
  if ( !DVARBOOL_netstats_dummy_tracker_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "netstats_dummy_tracker_data") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v8->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v8->name) )
      __debugbreak();
  }
  if ( v8->current.enabled )
    v7 = I_irand(1, 400);
  *(int *)((char *)&s_netstatsStatsTracker[0].datapoints[s_netstatsStatsTracker[v6].index].stat + v6 * 500) = v7;
  *(int *)((char *)&s_netstatsStatsTracker[0].datapoints[s_netstatsStatsTracker[v6].index++].x + v6 * 500) = -100;
}

/*
==============
NetStats_Dump
==============
*/
void NetStats_Dump(void)
{
  unsigned int *p_index; 
  int v1; 
  const int *v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  int i; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14[512]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_stats.cpp", 235, ASSERT_TYPE_SANITY, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  p_index = &s_netStats[0].index;
  v1 = 0;
  v2 = s_netstatLookback;
  v3 = 0i64;
  v4 = 0i64;
  do
  {
    v5 = Sys_Milliseconds() - *v2;
    if ( (unsigned int)v1 > 2 )
    {
      LODWORD(v13) = 2;
      LODWORD(v12) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_stats.cpp", 123, ASSERT_TYPE_SANITY, "( 0 ) <= ( statType ) && ( statType ) <= ( NETSTATS_NUMSTATS - 1 )", "statType not in [0, NETSTATS_NUMSTATS - 1]\n\t%i not in [%i, %i]", v12, 0i64, v13) )
        __debugbreak();
    }
    v6 = 0;
    v7 = *p_index - 1;
    v8 = 0i64;
    for ( i = *p_index - 513; v7 != i; --v7 )
    {
      v10 = v3 + (v7 & 0x1FF);
      if ( s_netStats[0].measurements[v10].timestamp < v5 )
        break;
      ++v6;
      v14[v8++] = s_netStats[0].measurements[v10].value;
      if ( v8 == 512 )
        break;
    }
    v11 = s_netstatReduce[v4](v6, v14);
    Com_Printf(25, "%s: %i\n", s_netstatStrings[v4], v11);
    ++v1;
    ++v2;
    p_index += 1026;
    v3 += 513i64;
    ++v4;
  }
  while ( v1 < 3 );
}

/*
==============
NetStats_Frame
==============
*/
void NetStats_Frame(void)
{
  int v0; 
  const int *v1; 
  int (__fastcall *const *v2)(int, int *); 
  unsigned __int16 *p_uiModel; 
  int v4; 
  unsigned int Measurments; 
  int v6; 
  int results[512]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_stats.cpp", 215, ASSERT_TYPE_SANITY, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_nextTick != -1 )
  {
    if ( !s_uiInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_stats.cpp", 222, ASSERT_TYPE_ASSERT, "(s_uiInited)", (const char *)&queryFormat, "s_uiInited") )
      __debugbreak();
    if ( Sys_Milliseconds() >= s_nextTick )
    {
      v0 = 0;
      v1 = s_netstatLookback;
      v2 = s_netstatReduce;
      p_uiModel = &s_netStats[0].uiModel;
      do
      {
        v4 = Sys_Milliseconds();
        Measurments = NetStats_GetMeasurments((netstattype_e)v0, v4 - *v1, 0x200ui64, results);
        v6 = (*v2)(Measurments, results);
        LUI_Model_SetInt(*p_uiModel, v6);
        ++v0;
        ++v1;
        ++v2;
        p_uiModel += 2052;
      }
      while ( v0 < 3 );
      s_controlState = !s_controlState;
      LUI_Model_SetBool(s_netStatsControlModel, s_controlState);
      s_nextTick = Sys_Milliseconds() + 100;
    }
  }
}

/*
==============
NetStats_GetMeasurments
==============
*/
__int64 NetStats_GetMeasurments(netstattype_e statType, int sinceTime, unsigned __int64 maxResults, int *results)
{
  __int64 v4; 
  unsigned int v5; 
  unsigned int v9; 
  unsigned int i; 
  __int64 v11; 
  int v14; 

  v4 = statType;
  v5 = 0;
  if ( (unsigned int)statType > NETSTATS_SNAPS )
  {
    v14 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_stats.cpp", 123, ASSERT_TYPE_SANITY, "( 0 ) <= ( statType ) && ( statType ) <= ( NETSTATS_NUMSTATS - 1 )", "statType not in [0, NETSTATS_NUMSTATS - 1]\n\t%i not in [%i, %i]", statType, 0i64, v14) )
      __debugbreak();
  }
  v9 = s_netStats[v4].index - 1;
  for ( i = s_netStats[v4].index - 513; v9 != i; --v9 )
  {
    v11 = 513 * v4 + (v9 & 0x1FF);
    if ( s_netStats[0].measurements[v11].timestamp < sinceTime )
      break;
    ++v5;
    *results++ = s_netStats[0].measurements[v11].value;
    if ( v5 == maxResults )
      break;
  }
  return v5;
}

/*
==============
NetStats_GetStats
==============
*/
NetstatsStatsTracker_t *NetStats_GetStats()
{
  return s_netstatsStatsTracker;
}

/*
==============
NetStats_Init
==============
*/
void NetStats_Init(void)
{
  Cmd_AddCommandInternal("netstatsdump", NetStats_Dump, &NetStats_Dump_VAR);
  Cmd_AddCommandInternal("netstatsupdate", NetStatsUpdateCmd, &NetStatsUpdateCmd_VAR);
}

/*
==============
NetStats_InitializeModels
==============
*/
void NetStats_InitializeModels(void)
{
  unsigned __int16 GlobalModel; 
  unsigned __int16 PersistentModelFromPath; 
  unsigned __int16 *p_uiModel; 
  const char **v3; 
  __int64 v4; 
  unsigned __int16 v5; 

  if ( !s_uiInited )
  {
    GlobalModel = LUI_Model_GetGlobalModel();
    PersistentModelFromPath = LUI_Model_CreatePersistentModelFromPath(GlobalModel, "netstats");
    s_rootModel = PersistentModelFromPath;
    p_uiModel = &s_netStats[0].uiModel;
    v3 = s_netstatStrings;
    v4 = 3i64;
    while ( 1 )
    {
      v5 = LUI_Model_CreatePersistentModelFromPath(PersistentModelFromPath, *v3);
      *p_uiModel = v5;
      LUI_Model_SetInt(v5, 0);
      ++v3;
      p_uiModel += 2052;
      if ( !--v4 )
        break;
      PersistentModelFromPath = s_rootModel;
    }
    s_netStatsControlModel = LUI_Model_CreatePersistentModelFromPath(s_rootModel, "NETSTATS_CONTROL");
    LUI_Model_SetBool(s_netStatsControlModel, 0);
    s_uiInited = 1;
  }
}

/*
==============
NetStats_LogStat
==============
*/
void NetStats_LogStat(netstattype_e statType, int value)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int index; 
  __int64 v7; 

  v2 = statType;
  if ( (unsigned int)statType > NETSTATS_SNAPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_stats.cpp", 112, ASSERT_TYPE_SANITY, "( 0 ) <= ( statType ) && ( statType ) <= ( NETSTATS_NUMSTATS - 1 )", "statType not in [0, NETSTATS_NUMSTATS - 1]\n\t%i not in [%i, %i]", statType, 0i64, 2) )
    __debugbreak();
  v4 = v2;
  v5 = v2;
  index = s_netStats[v2].index;
  s_netStats[v4].index = index + 1;
  v7 = 513 * v5 + (index & 0x1FF);
  s_netStats[0].measurements[v7].value = value;
  s_netStats[0].measurements[v7].timestamp = Sys_Milliseconds();
}

/*
==============
NetStats_PushToLUI
==============
*/
void NetStats_PushToLUI(void)
{
  unsigned __int16 *p_uiModel; 
  int v1; 
  int (__fastcall *const *v2)(int, int *); 
  __int64 v3; 
  const int *v4; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  int i; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14[512]; 

  p_uiModel = &s_netStats[0].uiModel;
  v1 = 0;
  v2 = s_netstatReduce;
  v3 = 0i64;
  v4 = s_netstatLookback;
  do
  {
    v5 = Sys_Milliseconds() - *v4;
    if ( (unsigned int)v1 > 2 )
    {
      LODWORD(v13) = 2;
      LODWORD(v12) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_stats.cpp", 123, ASSERT_TYPE_SANITY, "( 0 ) <= ( statType ) && ( statType ) <= ( NETSTATS_NUMSTATS - 1 )", "statType not in [0, NETSTATS_NUMSTATS - 1]\n\t%i not in [%i, %i]", v12, 0i64, v13) )
        __debugbreak();
    }
    v6 = 0;
    v7 = *((_DWORD *)p_uiModel - 1) - 1;
    v8 = 0i64;
    for ( i = *((_DWORD *)p_uiModel - 1) - 513; v7 != i; --v7 )
    {
      v10 = v3 + (v7 & 0x1FF);
      if ( s_netStats[0].measurements[v10].timestamp < v5 )
        break;
      ++v6;
      v14[v8++] = s_netStats[0].measurements[v10].value;
      if ( v8 == 512 )
        break;
    }
    v11 = (*v2)(v6, v14);
    LUI_Model_SetInt(*p_uiModel, v11);
    ++v1;
    ++v4;
    v3 += 513i64;
    ++v2;
    p_uiModel += 2052;
  }
  while ( v1 < 3 );
  s_controlState = !s_controlState;
  LUI_Model_SetBool(s_netStatsControlModel, s_controlState);
}

/*
==============
NetStats_Reset
==============
*/
void NetStats_Reset(void)
{
  __int64 v0; 
  NetStat *v1; 
  __int64 v2; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 PersistentModelFromPath; 
  unsigned __int16 *p_uiModel; 
  const char **v6; 
  unsigned __int16 v7; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_stats.cpp", 284, ASSERT_TYPE_SANITY, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 3i64;
  v1 = s_netStats;
  v2 = 3i64;
  do
  {
    memset_0(v1++, 0, 0x1000ui64);
    --v2;
  }
  while ( v2 );
  if ( !s_uiInited )
  {
    GlobalModel = LUI_Model_GetGlobalModel();
    PersistentModelFromPath = LUI_Model_CreatePersistentModelFromPath(GlobalModel, "netstats");
    s_rootModel = PersistentModelFromPath;
    p_uiModel = &s_netStats[0].uiModel;
    v6 = s_netstatStrings;
    while ( 1 )
    {
      v7 = LUI_Model_CreatePersistentModelFromPath(PersistentModelFromPath, *v6);
      *p_uiModel = v7;
      LUI_Model_SetInt(v7, 0);
      ++v6;
      p_uiModel += 2052;
      if ( !--v0 )
        break;
      PersistentModelFromPath = s_rootModel;
    }
    s_netStatsControlModel = LUI_Model_CreatePersistentModelFromPath(s_rootModel, "NETSTATS_CONTROL");
    LUI_Model_SetBool(s_netStatsControlModel, 0);
    s_uiInited = 1;
  }
  s_nextTick = Sys_Milliseconds() + 1000;
}

/*
==============
NetStats_Stop
==============
*/
void NetStats_Stop(void)
{
  s_nextTick = -1;
}

/*
==============
NetStats_Update
==============
*/
void NetStats_Update(netstattype_e stat, __int64 a2, double a3)
{
  __int64 v3; 
  int v4; 
  int Measurments; 
  __int64 v6; 
  int v7; 
  const dvar_t *v8; 
  unsigned int flags; 
  int results[512]; 

  v3 = stat;
  v4 = Sys_Milliseconds();
  Measurments = NetStats_GetMeasurments((netstattype_e)v3, v4 - s_netstatLookback[v3], 0x200ui64, results);
  v6 = v3;
  v7 = ((__int64 (__fastcall *)(int, int *, double))s_netstatReduce[v3])(Measurments, results, a3);
  if ( s_netstatsStatsTracker[v3].index == 62 )
    s_netstatsStatsTracker[v6].index = 0;
  v8 = DVARBOOL_netstats_dummy_tracker_data;
  if ( !DVARBOOL_netstats_dummy_tracker_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "netstats_dummy_tracker_data") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v8->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v8->name) )
      __debugbreak();
  }
  if ( v8->current.enabled )
    v7 = I_irand(1, 400);
  *(int *)((char *)&s_netstatsStatsTracker[0].datapoints[s_netstatsStatsTracker[v6].index].stat + v6 * 500) = v7;
  *(int *)((char *)&s_netstatsStatsTracker[0].datapoints[s_netstatsStatsTracker[v6].index++].x + v6 * 500) = -100;
}

/*
==============
NetStats_UpdateTracker
==============
*/
void NetStats_UpdateTracker(int stat, int value)
{
  __int64 v2; 
  const dvar_t *v4; 
  unsigned int flags; 

  v2 = stat;
  if ( s_netstatsStatsTracker[v2].index == 62 )
    s_netstatsStatsTracker[v2].index = 0;
  v4 = DVARBOOL_netstats_dummy_tracker_data;
  if ( !DVARBOOL_netstats_dummy_tracker_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "netstats_dummy_tracker_data") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( v4->current.enabled )
    value = I_irand(1, 400);
  *(int *)((char *)&s_netstatsStatsTracker[0].datapoints[s_netstatsStatsTracker[v2].index].stat + v2 * 500) = value;
  *(int *)((char *)&s_netstatsStatsTracker[0].datapoints[s_netstatsStatsTracker[v2].index++].x + v2 * 500) = -100;
}

