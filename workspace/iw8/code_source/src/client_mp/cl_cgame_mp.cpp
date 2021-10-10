/*
==============
CL_CGameMP_SetExtrapolatedData
==============
*/

void __fastcall CL_CGameMP_SetExtrapolatedData(LocalClientNum_t localClientNum, playerState_s *ps)
{
  ?CL_CGameMP_SetExtrapolatedData@@YAXW4LocalClientNum_t@@PEAUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CL_CGameMP_DebugDrawIsNearCommandOverflow
==============
*/

void __fastcall CL_CGameMP_DebugDrawIsNearCommandOverflow(LocalClientNum_t localClientNum, char *const outputBuf, const unsigned int outputBufSize)
{
  ?CL_CGameMP_DebugDrawIsNearCommandOverflow@@YAXW4LocalClientNum_t@@QEADI@Z(localClientNum, outputBuf, outputBufSize);
}

/*
==============
CL_CGameMP_EndExtrapolate
==============
*/

void __fastcall CL_CGameMP_EndExtrapolate(const LocalClientNum_t localClientNum)
{
  ?CL_CGameMP_EndExtrapolate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_GetSnapshot
==============
*/

int __fastcall CL_CGameMP_GetSnapshot(LocalClientNum_t localClientNum, int snapshotNumber, CgSnapshotMP *snapshot)
{
  return ?CL_CGameMP_GetSnapshot@@YAHW4LocalClientNum_t@@HPEAUCgSnapshotMP@@@Z(localClientNum, snapshotNumber, snapshot);
}

/*
==============
CL_CGameMP_StartLoading
==============
*/

void CL_CGameMP_StartLoading(void)
{
  ?CL_CGameMP_StartLoading@@YAXXZ();
}

/*
==============
CL_CGameMP_GetCurrentSnapshotNumber
==============
*/

void __fastcall CL_CGameMP_GetCurrentSnapshotNumber(LocalClientNum_t localClientNum, int *snapshotNumber, int *serverTime)
{
  ?CL_CGameMP_GetCurrentSnapshotNumber@@YAXW4LocalClientNum_t@@PEAH1@Z(localClientNum, snapshotNumber, serverTime);
}

/*
==============
CL_CGameMP_LoadWorld
==============
*/

int __fastcall CL_CGameMP_LoadWorld(const char *mapname)
{
  return ?CL_CGameMP_LoadWorld@@YAHPEBD@Z(mapname);
}

/*
==============
CL_CGameMP_SetCGameTime
==============
*/

void __fastcall CL_CGameMP_SetCGameTime(LocalClientNum_t localClientNum)
{
  ?CL_CGameMP_SetCGameTime@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_IsServerSavingReplay
==============
*/

bool __fastcall CL_CGameMP_IsServerSavingReplay(const LocalClientNum_t localClientNum)
{
  return ?CL_CGameMP_IsServerSavingReplay@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_ShouldSendPeerVoiceData
==============
*/

bool __fastcall CL_CGameMP_ShouldSendPeerVoiceData(const PartyData *party, const LocalClientNum_t localClientNum, const int listenerClientNum)
{
  return ?CL_CGameMP_ShouldSendPeerVoiceData@@YA_NPEBUPartyData@@W4LocalClientNum_t@@H@Z(party, localClientNum, listenerClientNum);
}

/*
==============
CL_CGameMP_ArchiveClientState
==============
*/

void __fastcall CL_CGameMP_ArchiveClientState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?CL_CGameMP_ArchiveClientState@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
CL_CGameMP_LoadMap
==============
*/

void __fastcall CL_CGameMP_LoadMap(const char *mapname)
{
  ?CL_CGameMP_LoadMap@@YAXPEBD@Z(mapname);
}

/*
==============
CL_CGameMP_SetUserCmdAimValues
==============
*/

void __fastcall CL_CGameMP_SetUserCmdAimValues(LocalClientNum_t localClientNum, const vec3_t *kickAngles)
{
  ?CL_CGameMP_SetUserCmdAimValues@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(localClientNum, kickAngles);
}

/*
==============
CL_CGameMP_Restart
==============
*/

void __fastcall CL_CGameMP_Restart(LocalClientNum_t localClientNum)
{
  ?CL_CGameMP_Restart@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_IsServerRestarting
==============
*/

bool __fastcall CL_CGameMP_IsServerRestarting(LocalClientNum_t localClientNum)
{
  return ?CL_CGameMP_IsServerRestarting@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_SetPredictedData
==============
*/

void __fastcall CL_CGameMP_SetPredictedData(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  ?CL_CGameMP_SetPredictedData@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CL_CGameMP_Init
==============
*/

void __fastcall CL_CGameMP_Init(LocalClientNum_t localClientNum)
{
  ?CL_CGameMP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_SyncTimes
==============
*/

void __fastcall CL_CGameMP_SyncTimes(LocalClientNum_t localClientNum)
{
  ?CL_CGameMP_SyncTimes@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_ExtrapolateSnap
==============
*/

void __fastcall CL_CGameMP_ExtrapolateSnap(const LocalClientNum_t localClientNum, int snapshotNumber, int serverTime)
{
  ?CL_CGameMP_ExtrapolateSnap@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, snapshotNumber, serverTime);
}

/*
==============
CL_CGameMP_BeginExtrapolate
==============
*/

void __fastcall CL_CGameMP_BeginExtrapolate(const LocalClientNum_t localClientNum, int snapshotNumber)
{
  ?CL_CGameMP_BeginExtrapolate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, snapshotNumber);
}

/*
==============
CL_CGameMP_Shutdown
==============
*/

void __fastcall CL_CGameMP_Shutdown(LocalClientNum_t localClientNum)
{
  ?CL_CGameMP_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_Init_Internal
==============
*/

void __fastcall CL_CGameMP_Init_Internal(LocalClientNum_t localClientNum)
{
  ?CL_CGameMP_Init_Internal@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_CGameMP_AdjustTimeDelta_Acceleration
==============
*/
void CL_CGameMP_AdjustTimeDelta_Acceleration(const ClActiveClientMP *cl, int idealDelta, int *correction, int *correctionWhenExtrapolating)
{
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  float value; 
  const dvar_t *v13; 
  double v14; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1142, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !correction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1143, ASSERT_TYPE_ASSERT, "(correction)", (const char *)&queryFormat, "correction") )
    __debugbreak();
  if ( !correctionWhenExtrapolating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1144, ASSERT_TYPE_ASSERT, "(correctionWhenExtrapolating)", (const char *)&queryFormat, "correctionWhenExtrapolating") )
    __debugbreak();
  *correction = 1;
  *correctionWhenExtrapolating = 2;
  if ( (cl->snap.info.snapFlags & 0x40) != 0 )
    goto LABEL_15;
  v8 = DCONST_DVARBOOL_deltaTimeAlwaysUseNewAlgorithm;
  if ( !DCONST_DVARBOOL_deltaTimeAlwaysUseNewAlgorithm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeAlwaysUseNewAlgorithm") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
LABEL_15:
    v9 = idealDelta - cl->serverTimeDelta;
    v10 = DCONST_DVARFLT_deltaTimeMaxCorrectionDisplacement;
    v11 = abs32(v9);
    if ( !DCONST_DVARFLT_deltaTimeMaxCorrectionDisplacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeMaxCorrectionDisplacement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    value = v10->current.value;
    v13 = DCONST_DVARFLT_deltaTimeMinCorrectionDisplacement;
    if ( !DCONST_DVARFLT_deltaTimeMinCorrectionDisplacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeMinCorrectionDisplacement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = ApplyLinearMap((float)v11, v13->current.value, value);
    v15 = DCONST_DVARFLT_deltaTimeMaxCorrectionSpeed;
    if ( !DCONST_DVARFLT_deltaTimeMaxCorrectionSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeMaxCorrectionSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.value;
    v17 = DCONST_DVARFLT_deltaTimeMinCorrectionSpeed;
    if ( !DCONST_DVARFLT_deltaTimeMinCorrectionSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeMinCorrectionSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( (int)(float)((float)((float)(1.0 - *(float *)&v14) * v17->current.value) + (float)(v16 * *(float *)&v14)) <= v11 )
      v11 = (int)(float)((float)((float)(1.0 - *(float *)&v14) * v17->current.value) + (float)(v16 * *(float *)&v14));
    *correction = v11;
    *correctionWhenExtrapolating = v11;
  }
}

/*
==============
CL_CGameMP_AdjustTimeDelta_GetDesiredTimeBehind
==============
*/
__int64 CL_CGameMP_AdjustTimeDelta_GetDesiredTimeBehind(const LocalClientNum_t localClientNum, const ClActiveClientMP *cl)
{
  const dvar_t *v4; 
  int integer; 
  unsigned int v6; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1262, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v4 = DVARINT_cl_adjust_time_fixed_ideal_time;
  if ( !DVARINT_cl_adjust_time_fixed_ideal_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_fixed_ideal_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  v6 = integer + cl->lastSnapInterval;
  CG_DrawDebugMP_SetAdjustTimeOffsetInfo(localClientNum, integer, v6);
  return v6;
}

/*
==============
CL_CGameMP_AdjustTimeDelta_GetExpectedSnapInterval
==============
*/
__int64 CL_CGameMP_AdjustTimeDelta_GetExpectedSnapInterval(const LocalClientNum_t localClientNum, const ClActiveClientMP *cl)
{
  int snapIntervalCount; 
  const dvar_t *v4; 
  unsigned int m_serverFrameDuration; 
  int integer; 
  int v7; 
  int v8; 
  __int64 result; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  int *v14; 
  unsigned __int64 v15; 
  __m256i v16; 
  __m256i v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  __int64 v21; 
  unsigned int v22; 
  int v23; 
  std::less<void> v24; 
  int _First[8]; 
  __m256i v26; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1178, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  snapIntervalCount = 16;
  if ( cl->snapIntervalCount < 16 )
    snapIntervalCount = cl->snapIntervalCount;
  if ( !snapIntervalCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1181, ASSERT_TYPE_ASSERT, "(intervalCount != 0)", (const char *)&queryFormat, "intervalCount != 0") )
    __debugbreak();
  if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
    __debugbreak();
  v4 = DVARINT_cl_adjust_time_interval_method;
  m_serverFrameDuration = cls.m_serverFrameDuration;
  if ( !DVARINT_cl_adjust_time_interval_method && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_interval_method") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer )
  {
    v7 = integer - 1;
    if ( !v7 )
    {
      v16 = *(__m256i *)&cl->snapInterval[8];
      *(__m256i *)_First = *(__m256i *)cl->snapInterval;
      v26 = v16;
      std::_Sort_unchecked<int *,std::less<void>>(_First, &_First[snapIntervalCount], snapIntervalCount, v24);
      return (unsigned int)_First[snapIntervalCount / 2];
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        return (unsigned int)(cl->snap.info.serverTime - cl->oldSnapServerTime);
      return m_serverFrameDuration;
    }
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0i64;
    if ( snapIntervalCount >= 2i64 )
    {
      v14 = &cl->snapInterval[1];
      v15 = ((unsigned __int64)(snapIntervalCount - 2i64) >> 1) + 1;
      v13 = 2 * v15;
      do
      {
        v10 += *(v14 - 1);
        v11 += *v14;
        v14 += 2;
        --v15;
      }
      while ( v15 );
    }
    if ( v13 < snapIntervalCount )
      v12 = cl->snapInterval[v13];
    return (unsigned int)((v12 + v11 + v10) / snapIntervalCount);
  }
  else
  {
    v17 = *(__m256i *)&cl->snapInterval[8];
    *(__m256i *)_First = *(__m256i *)cl->snapInterval;
    v26 = v17;
    std::_Sort_unchecked<int *,std::less<void>>(_First, &_First[snapIntervalCount], snapIntervalCount, v24);
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( snapIntervalCount <= 0 )
      return m_serverFrameDuration;
    v21 = 0i64;
    do
    {
      v22 = _First[v21];
      v23 = 1;
      if ( v22 == v19 )
        v23 = v18 + 1;
      result = v22;
      v18 = v23;
      if ( v23 <= v20 )
        result = m_serverFrameDuration;
      ++v21;
      m_serverFrameDuration = result;
      if ( v22 == v19 )
        v22 = v19;
      v19 = v22;
      if ( v23 <= v20 )
        v23 = v20;
      v20 = v23;
    }
    while ( v21 < snapIntervalCount );
  }
  return result;
}

/*
==============
CL_CGameMP_AdjustTimeDelta_Old
==============
*/
void CL_CGameMP_AdjustTimeDelta_Old(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  ClActiveClientMP *v3; 
  int DesiredTimeBehind; 
  int v5; 
  int desiredServerTimeDelta; 
  int serverTimeDelta; 
  int v8; 
  int lastSnapInterval; 
  int v10; 
  int v11; 
  int serverTime; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  int Int_Internal_DebugName; 
  int v16; 
  int v17; 
  const dvar_t *v18; 
  __int64 v19; 
  char *fmt; 
  __int64 v21; 
  __int64 v22; 
  int correction; 
  int correctionWhenExtrapolating; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v3 = ClientMP;
  if ( !ClientMP->newSnapshots )
  {
    DesiredTimeBehind = CL_CGameMP_AdjustTimeDelta_GetDesiredTimeBehind(localClientNum, ClientMP);
    CL_CGameMP_AdjustTimeDelta_TrackServerOffset(localClientNum, v3, DesiredTimeBehind);
    return;
  }
  ClientMP->snapInterval[ClientMP->snapIntervalCount++ & 0xF] = ClientMP->snap.info.serverTime - ClientMP->oldSnapServerTime;
  ClientMP->lastSnapInterval = CL_CGameMP_AdjustTimeDelta_GetExpectedSnapInterval(localClientNum, ClientMP);
  v5 = CL_CGameMP_AdjustTimeDelta_GetDesiredTimeBehind(localClientNum, v3);
  v3->desiredServerTimeDelta = v3->snap.info.serverTime - cls.realtime - v5;
  CL_CGameMP_AdjustTimeDelta_TrackServerOffset(localClientNum, v3, v5);
  desiredServerTimeDelta = v3->desiredServerTimeDelta;
  serverTimeDelta = v3->serverTimeDelta;
  v8 = desiredServerTimeDelta - serverTimeDelta;
  if ( desiredServerTimeDelta - serverTimeDelta <= 0 )
  {
    v8 = serverTimeDelta - v3->desiredServerTimeDelta;
  }
  else
  {
    lastSnapInterval = v3->lastSnapInterval;
    if ( lastSnapInterval <= 500 )
    {
      v8 -= lastSnapInterval;
      if ( v8 < 0 )
      {
        v8 = 0;
        goto LABEL_7;
      }
    }
  }
  if ( v8 > 500 )
  {
    serverTime = v3->snap.info.serverTime;
    v3->oldServerTime = serverTime;
    v3->serverTime = serverTime;
    v3->serverTimeDelta = desiredServerTimeDelta;
    v13 = DVARBOOL_cl_showTimeDelta;
    if ( !DVARBOOL_cl_showTimeDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showTimeDelta") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
      Com_Printf(14, "<RESET>\n");
    goto LABEL_28;
  }
  if ( v8 > 100 )
  {
    v14 = DVARBOOL_cl_showTimeDelta;
    if ( !DVARBOOL_cl_showTimeDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showTimeDelta") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      Com_Printf(14, "<FAST>\n");
    v3->serverTimeDelta = (desiredServerTimeDelta + v3->serverTimeDelta) >> 1;
    goto LABEL_28;
  }
LABEL_7:
  CL_CGameMP_AdjustTimeDelta_Acceleration(v3, desiredServerTimeDelta, &correction, &correctionWhenExtrapolating);
  v10 = v3->serverTimeDelta;
  if ( desiredServerTimeDelta > v10 )
  {
    v11 = correction + v10;
LABEL_27:
    v3->serverTimeDelta = v11;
    goto LABEL_28;
  }
  if ( desiredServerTimeDelta < v10 )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_cl_adjust_time_fast_cutoff, "cl_adjust_time_fast_cutoff");
    v16 = v3->serverTimeDelta;
    if ( v8 <= Int_Internal_DebugName )
      v11 = v16 - correction;
    else
      v11 = v16 - correctionWhenExtrapolating;
    goto LABEL_27;
  }
LABEL_28:
  CG_DrawDebugMP_SetServerTimeDilation(localClientNum, desiredServerTimeDelta - serverTimeDelta, v8);
  v17 = v3->serverTimeDelta;
  if ( v17 != serverTimeDelta )
    Con_TimeNudged(localClientNum, v17 - serverTimeDelta);
  v18 = DVARBOOL_cl_showTimeDelta;
  if ( !DVARBOOL_cl_showTimeDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showTimeDelta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    v19 = (unsigned int)v3->snap.info.serverTime;
    LODWORD(v22) = v3->lastSnapInterval;
    LODWORD(v21) = cls.realtime - v19 + desiredServerTimeDelta;
    LODWORD(fmt) = cls.realtime - v19 + serverTimeDelta;
    Com_Printf(14, "cltime: %i, svtime: %i, delta: %+04i, ideal: %+04i, int: %03i, mag: %03i, corr: %+i\n", (unsigned int)(serverTimeDelta + cls.realtime), v19, fmt, v21, v22, v8, v3->serverTimeDelta - serverTimeDelta);
  }
}

/*
==============
CL_CGameMP_AdjustTimeDelta_TrackServerOffset
==============
*/
void CL_CGameMP_AdjustTimeDelta_TrackServerOffset(const LocalClientNum_t localClientNum, ClActiveClientMP *cl, const int desiredTimeBehind)
{
  cg_t *LocalClientGlobals; 
  unsigned int v7; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1279, ASSERT_TYPE_ASSERT, "(cl != nullptr)", (const char *)&queryFormat, "cl != nullptr") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0;
  if ( cl->snap.info.serverTime - LocalClientGlobals->time > 0 )
    v7 = cl->snap.info.serverTime - LocalClientGlobals->time;
  cl->m_totalDesiredOffsetTime += desiredTimeBehind;
  cl->m_totalServerOffsetTime += v7;
  ++cl->m_totalSnapshotCount;
  CL_LatencyProfileMP_UpdateClientInterpolationHistogram(v7);
}

/*
==============
CL_CGameMP_AllLocalClientStatesActive
==============
*/
char CL_CGameMP_AllLocalClientStatesActive()
{
  unsigned int v0; 
  bool *isActive; 
  connstate_t *i; 
  __int64 v4; 
  __int64 v5; 

  v0 = 0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
    return 1;
  isActive = cls.m_localClientsActive.isActive;
  for ( i = &clientUIActives[0].connectionState; ; i += 110 )
  {
    if ( v0 >= 2 )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 343, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 344, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
      __debugbreak();
    if ( !*isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1701, ASSERT_TYPE_ASSERT, "(cls.IsGameLocalClientActive( localClientNum ))", (const char *)&queryFormat, "cls.IsGameLocalClientActive( localClientNum )") )
      __debugbreak();
    if ( v0 >= 2 )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( *i != CA_ACTIVE )
      break;
    ++v0;
    ++isActive;
    if ( (int)v0 >= SLODWORD(cl_maxLocalClients) )
      return 1;
  }
  return 0;
}

/*
==============
CL_CGameMP_ArchiveClientState
==============
*/
void CL_CGameMP_ArchiveClientState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  int v6; 

  v2 = localClientNum;
  CG_DrawMP_ArchiveState(localClientNum, memFile);
  AimAssist_ArchiveState((LocalClientNum_t)v2, memFile);
  RB_Query_Archive(memFile);
  FX_Archive(v2, memFile);
  Glass_Archive(memFile);
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    v6 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v6) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v5) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v2] )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v5) )
      __debugbreak();
  }
  CgVehicleSystem::ArchiveVehicles(CgVehicleSystem::ms_vehicleSystemArray[v2], memFile);
}

/*
==============
CL_CGameMP_BeginExtrapolate
==============
*/
void CL_CGameMP_BeginExtrapolate(const LocalClientNum_t localClientNum, int snapshotNumber)
{
  __int64 v2; 
  __int64 v4; 
  const ClSnapshot *SnapshotForTracking; 
  const ClSnapshot *v6; 
  ClSnapshotState state; 
  int v8; 
  int v9; 

  v2 = localClientNum;
  if ( CL_GetLocalClientGameConnectionState(localClientNum) >= CA_CONNECTED )
  {
    v4 = v2;
    if ( !s_trackExtrapolate[v2].isExtrapolating && com_timescaleValue == 1.0 && (!s_trackExtrapolate[v2].firstSnapTime || cls.realtime - s_trackExtrapolate[v2].firstSnapTime >= Dvar_GetInt_Internal_DebugName(DVARINT_cl_extrap_tracking_start_time, "cl_extrap_tracking_start_time")) )
    {
      SnapshotForTracking = CL_CGameMP_GetSnapshotForTracking((const LocalClientNum_t)v2, snapshotNumber);
      v6 = SnapshotForTracking;
      if ( SnapshotForTracking )
      {
        state = SnapshotForTracking->state;
        if ( state != BOOL_VALUE )
        {
          v9 = 1;
          v8 = (unsigned __int8)state;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2686, ASSERT_TYPE_ASSERT, "( snap->state ) == ( ClSnapshotState::VALID )", "%s == %s\n\t%i, %i", "snap->state", "ClSnapshotState::VALID", v8, v9) )
            __debugbreak();
        }
        if ( (v6->info.snapFlags & 0x40) == 0 )
        {
          s_trackExtrapolate[v4].lastInterpolatedTime = v6->info.serverTime;
          s_trackExtrapolate[v4].extrapolatePrevSnap = snapshotNumber;
          s_trackExtrapolate[v4].isExtrapolating = 1;
        }
      }
    }
  }
}

/*
==============
CL_CGameMP_DebugDrawIsNearCommandOverflow
==============
*/
void CL_CGameMP_DebugDrawIsNearCommandOverflow(LocalClientNum_t localClientNum, char *const outputBuf, const unsigned int outputBufSize)
{
  unsigned __int64 v3; 
  ClConnectionDataMP *ClientConnectionData; 
  int serverCommandSequence; 
  int v8; 
  bool v9; 
  BOOL v10; 

  v3 = outputBufSize;
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  serverCommandSequence = CG_GetLocalClientStaticGlobals(localClientNum)->serverCommandSequence;
  v8 = ClientConnectionData->serverCommandSequence - serverCommandSequence;
  v9 = v8 > 0 && CircularEntryBuffer<512,131072,int,0>::IsNearBufferLimit(&ClientConnectionData->serverReliableCommands, ((_WORD)serverCommandSequence + 1) & 0x1FF, 0.80000001);
  v10 = ScriptableCl_IsNearChangeQueueOverflow(localClientNum);
  Com_sprintf_truncate(outputBuf, v3, "%d / %d cmd. %d buf %d sbl", (unsigned int)v8, 409, v9, v10);
}

/*
==============
CL_CGameMP_EndExtrapolate
==============
*/
void CL_CGameMP_EndExtrapolate(const LocalClientNum_t localClientNum)
{
  CgTrackExtrapolation *v1; 
  ClActiveClientMP *ClientMP; 
  unsigned int v3; 

  v1 = &s_trackExtrapolate[localClientNum];
  if ( v1->isExtrapolating )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    v3 = 0;
    if ( v1->lastExtrapolatedTime - v1->lastInterpolatedTime > 0 )
      v3 = v1->lastExtrapolatedTime - v1->lastInterpolatedTime;
    ++ClientMP->m_totalExtrapolationCount;
    ClientMP->m_totalExtrapolationTime += v3;
    CL_LatencyProfileMP_UpdateClientExtrapolationHistogram(v3);
  }
  v1->isExtrapolating = 0;
}

/*
==============
CL_CGameMP_ExtrapolateSnap
==============
*/
void CL_CGameMP_ExtrapolateSnap(const LocalClientNum_t localClientNum, int snapshotNumber, int serverTime)
{
  __int64 v3; 
  int extrapolatePrevSnap; 
  ClActiveClientMP *ClientMP; 
  unsigned int v7; 

  v3 = localClientNum;
  if ( CL_GetLocalClientGameConnectionState(localClientNum) >= CA_CONNECTED )
  {
    extrapolatePrevSnap = s_trackExtrapolate[v3].extrapolatePrevSnap;
    if ( extrapolatePrevSnap < snapshotNumber )
    {
      if ( !s_trackExtrapolate[v3].firstSnapTime )
        s_trackExtrapolate[v3].firstSnapTime = cls.realtime;
      if ( s_trackExtrapolate[v3].isExtrapolating && com_timescaleValue == 1.0 && CL_CGameMP_GetSnapshotForTracking((const LocalClientNum_t)v3, extrapolatePrevSnap) && CL_CGameMP_GetSnapshotForTracking((const LocalClientNum_t)v3, snapshotNumber) )
        s_trackExtrapolate[v3].lastExtrapolatedTime = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3)->time;
    }
    else
    {
      if ( s_trackExtrapolate[v3].isExtrapolating )
      {
        ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v3);
        v7 = 0;
        if ( s_trackExtrapolate[v3].lastExtrapolatedTime - s_trackExtrapolate[v3].lastInterpolatedTime > 0 )
          v7 = s_trackExtrapolate[v3].lastExtrapolatedTime - s_trackExtrapolate[v3].lastInterpolatedTime;
        ++ClientMP->m_totalExtrapolationCount;
        ClientMP->m_totalExtrapolationTime += v7;
        CL_LatencyProfileMP_UpdateClientExtrapolationHistogram(v7);
      }
      s_trackExtrapolate[v3].isExtrapolating = 0;
    }
  }
}

/*
==============
CL_CGameMP_FirstSnapshot
==============
*/
void CL_CGameMP_FirstSnapshot(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClActiveClientMP *ClientMP; 
  ClConnectionDataMP *ClientConnectionData; 
  bool v4; 
  cgs_t *LocalClientStaticGlobals; 
  int serverCommandSequence; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  bool v11; 
  int serverTime; 
  int v13; 
  int ControllerFromClient; 
  __int64 v15; 
  __int64 v16; 
  char v17; 

  v1 = localClientNum;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( (ClientMP->snap.info.snapFlags & 2) != 0 )
    return;
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v1);
  if ( (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v1) )
  {
    if ( Com_Frontend_LoadFastfile_IsInUse() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1873, ASSERT_TYPE_ASSERT, "( !Com_Frontend_LoadFastfile_IsInUse() )", "Should not have load fast file in use in front-end scene") )
      __debugbreak();
    if ( Com_GameStart_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1874, ASSERT_TYPE_ASSERT, "( !Com_GameStart_IsActive() )", "Should not have game start in use in front-end scene") )
      __debugbreak();
    goto LABEL_36;
  }
  if ( CL_Demo_IsPlayingServer((LocalClientNum_t)v1) )
  {
    v4 = 1;
    goto LABEL_15;
  }
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v1);
  serverCommandSequence = LocalClientStaticGlobals->serverCommandSequence;
  v7 = (unsigned int)(ClientConnectionData->serverCommandSequence - serverCommandSequence);
  if ( (int)v7 >= 409 )
  {
    Com_PrintWarning(14, "CL_CGameMP_IsNearReliableCommandOverflow: Near the reliable command limit (%i pending).\n", v7);
    v4 = 1;
    goto LABEL_15;
  }
  if ( (int)v7 > 0 )
  {
    v8 = ((_WORD)serverCommandSequence + 1) & 0x1FF;
    if ( CircularEntryBuffer<512,131072,int,0>::IsNearBufferLimit(&ClientConnectionData->serverReliableCommands, v8, 0.80000001) )
    {
      Com_PrintWarning(14, "CL_CGameMP_IsNearReliableCommandOverflow: Near the reliable command buffer limit (%i pending).\n", (unsigned int)(ClientConnectionData->serverCommandSequence - LocalClientStaticGlobals->serverCommandSequence));
      v4 = 1;
      goto LABEL_15;
    }
    if ( (ClientConnectionData->serverReliableCommands.m_bufferNextIndex - ClientConnectionData->serverReliableCommands.m_entries[v8].offset > 0x20000 || !ClientConnectionData->serverReliableCommands.m_entries[v8].size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1742, ASSERT_TYPE_ASSERT, "(clcData->serverReliableCommands.IsDataAvailable( gameNextSequenceIndex ))", "%s\n\tSomething failed in the detection above, we ended up with an invalid reliable command", "clcData->serverReliableCommands.IsDataAvailable( gameNextSequenceIndex )") )
      __debugbreak();
  }
  v4 = ScriptableCl_IsNearChangeQueueOverflow((const LocalClientNum_t)v1);
LABEL_15:
  CL_TransientsWorldMP_OnFirstSnapshot();
  CL_TransientsCollisionMP_OnFirstSnapshot();
  if ( ClientMP->snap.state != BOOL_VALUE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1850, ASSERT_TYPE_ASSERT, "(cl->snap.state == ClSnapshotState::VALID)", (const char *)&queryFormat, "cl->snap.state == ClSnapshotState::VALID") )
    __debugbreak();
  Stream_LoadSync_BeginMP((LocalClientNum_t)v1, &ClientMP->snap.ps.origin);
  if ( Com_Frontend_LoadFastfile_IsInUse() || Com_GameStart_IsActive() )
  {
    v9 = 1;
    if ( v4 )
    {
      Com_Printf(35, "CL_CGameMP_CheckStreaming: Skipped, forceCompletion detected\n");
    }
    else
    {
      LOBYTE(v10) = CL_CGameMP_StreamSyncIsDone();
      v9 = v10;
      if ( !v10 )
      {
        Com_GameStart_FirstSnapshotStreaming();
        return;
      }
    }
    DB_LoadTimes_StreamSyncMPFinished(v9 == 1);
  }
  if ( !Com_GameStart_CheckFirstSnapshotMinDelay(v4) )
  {
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1863, ASSERT_TYPE_ASSERT, "(!forceCompletion)", (const char *)&queryFormat, "!forceCompletion") )
      __debugbreak();
    return;
  }
  Stream_LoadSync_EndMP((LocalClientNum_t)v1);
LABEL_36:
  Com_GameStart_ClearState();
  v11 = !CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v1);
  Sys_Print("Setting state to CA_ACTIVE in CL_CGameMP_FirstSnapshot\n");
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v15) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v1].connectionState, 9i64);
  clientUIActives[v1].connectionState = CA_ACTIVE;
  if ( v11 )
  {
    v17 = 37;
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( !ClConnection::ms_connections[v1] )
    {
      if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 31, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable binary command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
        __debugbreak();
    }
    if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v1) )
    {
      if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v16 = cl_maxLocalClients;
        LODWORD(v15) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      ClConnection::ms_connections[v1]->AddReliableBinaryCommand(ClConnection::ms_connections[v1], (const unsigned __int8 *)&v17, 1);
    }
  }
  ClientConnectionData->isServerRestarting = 0;
  g_waitingForServer = 0;
  serverTime = ClientMP->snap.info.serverTime;
  ClientMP->serverTime = serverTime;
  v13 = serverTime - cls.realtime;
  ClientMP->serverTimeDelta = serverTime - cls.realtime;
  ClientMP->desiredServerTimeDelta = v13;
  ClientMP->m_firstSnapTime = cls.realtime;
  Con_SetServerTime((LocalClientNum_t)v1, serverTime);
  Con_ServerTimeJumped((LocalClientNum_t)v1, ClientMP->serverTime);
  if ( CL_CGameMP_AllLocalClientStatesActive() )
  {
    Com_Frontend_LoadFastfile_Free();
    if ( ProfLoad_IsActive() && !Com_IsAnyLocalServerRunning() )
      ProfLoad_Deactivate();
    if ( Com_IsGameLocalServerRunning() )
      R_Cinematic_SetUseAlternativeAsyncCore(1);
  }
  if ( !Com_FrontEnd_IsInFrontEnd() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    PlayercardCache_MarkPartyDirty(ControllerFromClient, 4);
  }
}

/*
==============
CL_CGameMP_GetCurrentSnapshotNumber
==============
*/
void CL_CGameMP_GetCurrentSnapshotNumber(LocalClientNum_t localClientNum, int *snapshotNumber, int *serverTime)
{
  ClActiveClientMP *ClientMP; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  *snapshotNumber = ClientMP->snap.messageNum;
  *serverTime = ClientMP->snap.info.serverTime;
}

/*
==============
CL_CGameMP_GetSnapshot
==============
*/
__int64 CL_CGameMP_GetSnapshot(LocalClientNum_t localClientNum, int snapshotNumber, CgSnapshotMP *snapshot)
{
  CgSnapshotMP *v3; 
  ClActiveClientMP *ClientMP; 
  ClConnectionMP *ClientConnectionMP; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 parseAgentsCount; 
  __int64 parseOmnvarsCount; 
  __int64 parseWeaponMapEntriesCount; 
  int parseScriptedCameraCount; 
  unsigned int v15; 
  OmnvarData *parseOmnvars; 
  size_t v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  WeaponMapEntry *weapons; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  bool v26; 
  unsigned int maxEntitiesInSnapshotForClient; 
  const char *v28; 
  __int64 v29; 
  entityState_t *entities; 
  char *v31; 
  __int64 number; 
  __int64 v33; 
  entityState_t *v34; 
  __int64 v35; 
  __int64 v36; 
  char *v37; 
  unsigned int maxClients; 
  unsigned int v39; 
  clientState_t *clients; 
  __int64 v41; 
  clientState_t *v42; 
  __int64 v43; 
  __int64 v44; 
  __int128 v45; 
  agentState_s *agents; 
  unsigned int maxAgents; 
  unsigned int v48; 
  __int128 v49; 
  __int64 v50; 
  bitarray<384> *parseUmbraGateStates; 
  BgScriptedCameraState *parseScriptedCameras; 
  __int64 v53; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  char v60[2048]; 

  v3 = snapshot;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( snapshotNumber > ClientMP->snap.messageNum )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14420E8C0, 993i64);
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(localClientNum);
  v8 = 0i64;
  if ( ClientConnectionMP->m_packetBackupCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", ClientConnectionMP->m_packetBackupCount, 0i64) )
    __debugbreak();
  if ( ClientConnectionMP->m_packetBackupCount <= 0 )
  {
    LODWORD(v57) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v57, 0i64) )
      __debugbreak();
    LODWORD(v58) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 192, ASSERT_TYPE_ASSERT, "( clc->GetPacketBackupCount() ) > ( 0 )", "%s > %s\n\t%i, %i", "clc->GetPacketBackupCount()", "0", v58, 0i64) )
      __debugbreak();
  }
  if ( ClientMP->snap.messageNum - snapshotNumber >= ClConnectionMP::GetPacketBackupCount(ClientConnectionMP) )
    return 0i64;
  if ( !ClientMP->snapshots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 200, ASSERT_TYPE_ASSERT, "(cl->snapshots)", (const char *)&queryFormat, "cl->snapshots") )
    __debugbreak();
  v9 = (__int64)&ClientMP->snapshots[snapshotNumber % ClConnectionMP::GetPacketBackupCount(ClientConnectionMP)];
  if ( *(_BYTE *)(v9 + 94464) != 1 )
    return 0i64;
  if ( (*(_BYTE *)(v9 + 94468) & 8) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 94520);
    if ( v10 != cls.noDeltaUseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 215, ASSERT_TYPE_ASSERT, "( clSnap->parseEntitiesIndex ) == ( static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount) )", "%s == %s\n\t%lli, %lli", "clSnap->parseEntitiesIndex", "static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount)", v10, cls.noDeltaUseCount) )
      __debugbreak();
  }
  else if ( ClientMP->parseEntitiesIndex - *(_QWORD *)(v9 + 94520) >= ClientMP->parseEntitiesCount )
  {
    return 0i64;
  }
  if ( ClientMP->parseClientsIndex - *(_QWORD *)(v9 + 94528) >= ClientMP->parseClientsCount )
    return 0i64;
  parseAgentsCount = ClientMP->parseAgentsCount;
  if ( (_DWORD)parseAgentsCount )
  {
    if ( ClientMP->parseAgentsIndex - *(_QWORD *)(v9 + 94536) >= parseAgentsCount )
      return 0i64;
  }
  parseOmnvarsCount = ClientMP->parseOmnvarsCount;
  if ( (_DWORD)parseOmnvarsCount )
  {
    if ( ClientMP->parseOmnvarsIdx - *(_QWORD *)(v9 + 94544) >= parseOmnvarsCount )
      return 0i64;
  }
  parseWeaponMapEntriesCount = ClientMP->parseWeaponMapEntriesCount;
  if ( (_DWORD)parseWeaponMapEntriesCount )
  {
    if ( ClientMP->parseWeaponMapEntriesIdx - *(_QWORD *)(v9 + 94552) >= parseWeaponMapEntriesCount )
      return 0i64;
  }
  if ( ClientMP->parseUmbraGateStates && ClientMP->parseUmbraGateStatesIndex - *(_QWORD *)(v9 + 94560) >= ClientMP->parseUmbraGateStatesCount )
    return 0i64;
  parseScriptedCameraCount = ClientMP->parseScriptedCameraCount;
  if ( parseScriptedCameraCount )
  {
    if ( ClientMP->parseScriptedCameraIndex - *(_DWORD *)(v9 + 94596) >= parseScriptedCameraCount )
      return 0i64;
  }
  v3->snapFlags = *(_DWORD *)(v9 + 94468);
  v3->serverCommandSequence = *(_DWORD *)(v9 + 94592);
  v3->ping = *(_DWORD *)(v9 + 94484);
  v3->serverTime = *(_DWORD *)(v9 + 94472);
  memcpy_0(&v3->ps, (const void *)v9, sizeof(v3->ps));
  memcpy_0(&v3->scores, (const void *)(v9 + 21412), sizeof(v3->scores));
  memcpy_0(&v3->streamSync, (const void *)(v9 + 27432), sizeof(v3->streamSync));
  v15 = BG_Omnvar_PerSnapCount();
  parseOmnvars = ClientMP->parseOmnvars;
  v17 = 8i64 * v15;
  v18 = BG_Omnvar_PerSnapCount();
  memcpy_0(v3->omnvars, &parseOmnvars[v18 * (*(_QWORD *)(v9 + 94544) % (__int64)ClientMP->parseOmnvarsCount)], v17);
  v19 = *(unsigned int *)(v9 + 94512);
  if ( (unsigned int)v19 > BgWeaponMap::GetRuntimeSize() )
  {
    LODWORD(v57) = BgWeaponMap::GetRuntimeSize();
    LODWORD(v55) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 284, ASSERT_TYPE_ASSERT, "( 0 ) <= ( count ) && ( count ) <= ( BgWeaponMap::GetRuntimeSize() )", "count not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v55, 0i64, v57) )
      __debugbreak();
  }
  v3->numWeapons = v19;
  v20 = 0i64;
  v21 = v19;
  if ( (_DWORD)v19 )
  {
    weapons = v3->weapons;
    do
    {
      v23 = (v20 + *(_QWORD *)(v9 + 94552)) % ClientMP->parseWeaponMapEntriesCount;
      if ( (unsigned int)v23 >= ClientMP->parseWeaponMapEntriesCount )
      {
        LODWORD(v56) = ClientMP->parseWeaponMapEntriesCount;
        LODWORD(v55) = (v20 + *(_QWORD *)(v9 + 94552)) % (unsigned int)v56;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 289, ASSERT_TYPE_ASSERT, "(unsigned)( bufIdx ) < (unsigned)( cl->parseWeaponMapEntriesCount )", "bufIdx doesn't index cl->parseWeaponMapEntriesCount\n\t%i not in [0, %i)", v55, v56) )
          __debugbreak();
      }
      ++v20;
      v24 = (__int64)&ClientMP->parseWeaponMapEntries[v23];
      *(__m256i *)&weapons->index = *(__m256i *)v24;
      *(_OWORD *)&weapons->weapon.attachmentVariationIndices[3] = *(_OWORD *)(v24 + 32);
      *(double *)&weapons->weapon.attachmentVariationIndices[19] = *(double *)(v24 + 48);
      *(_DWORD *)&weapons->weapon.attachmentVariationIndices[27] = *(_DWORD *)(v24 + 56);
      *(_WORD *)&weapons->weapon.scopeVariation = *(_WORD *)(v24 + 60);
      ++weapons;
    }
    while ( v20 < v21 );
    v3 = snapshot;
  }
  v25 = *(_DWORD *)(v9 + 94500);
  v26 = (v3->snapFlags & 8) != 0;
  if ( !cls.maxEntitiesInSnapshotForClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 297, ASSERT_TYPE_ASSERT, "(cls.maxEntitiesInSnapshotForClient)", (const char *)&queryFormat, "cls.maxEntitiesInSnapshotForClient") )
    __debugbreak();
  maxEntitiesInSnapshotForClient = cls.maxEntitiesInSnapshotForClient;
  if ( v26 )
    maxEntitiesInSnapshotForClient = cls.maxNoDeltaEntities;
  if ( v25 > maxEntitiesInSnapshotForClient )
  {
    if ( com_statmon->current.enabled )
    {
      v28 = j_va("Snapshot sent %i entities - max %i", v25, maxEntitiesInSnapshotForClient);
      StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SNAPSHOTENTS, 3000, v28, v25);
      Com_PrintError(1, "Too many client entities in snapshot ignoring remaining %d > %d.\n", v25, maxEntitiesInSnapshotForClient);
    }
    else
    {
      Com_DPrintf(14, "CL_GetSnapshot: truncated %i entities to %i\n", v25, maxEntitiesInSnapshotForClient);
    }
    v25 = maxEntitiesInSnapshotForClient;
  }
  v3->numEntities = v25;
  memset_0(v60, 0, sizeof(v60));
  v29 = v25;
  if ( v26 )
  {
    if ( v25 != cls.nextNoDeltaEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( static_cast<SnapshotEntryIndex>(count) ) == ( cls.nextNoDeltaEntity )", "%s == %s\n\t%lli, %lli", "static_cast<SnapshotEntryIndex>(count)", "cls.nextNoDeltaEntity", v25, cls.nextNoDeltaEntity) )
      __debugbreak();
    if ( !v25 )
      goto LABEL_77;
    entities = v3->entities;
    do
    {
      v31 = (char *)&entities[-86] + (unsigned __int64)cls.noDeltaEntities - (_QWORD)v3 - 124;
      *(_OWORD *)&entities->number = *(_OWORD *)v31;
      *(_OWORD *)&entities->lerp.pos.trType = *((_OWORD *)v31 + 1);
      *(_OWORD *)&entities->lerp.pos.trBase.y = *((_OWORD *)v31 + 2);
      *(_OWORD *)&entities->lerp.pos.trDelta.z = *((_OWORD *)v31 + 3);
      *(_OWORD *)entities->lerp.apos.trBase.v = *((_OWORD *)v31 + 4);
      *(_OWORD *)&entities->lerp.apos.trDelta.y = *((_OWORD *)v31 + 5);
      *(_OWORD *)&entities->lerp.u.vehicle.bodyPitch = *((_OWORD *)v31 + 6);
      *(LerpEntityStateInfoVolumeGrapple *)((char *)&entities->lerp.u.infoVolumeGrapple + 24) = (LerpEntityStateInfoVolumeGrapple)*((_OWORD *)v31 + 7);
      *(_OWORD *)&entities->staticState.turret.carrierEntNum = *((_OWORD *)v31 + 8);
      *(_OWORD *)&entities->clientNum = *((_OWORD *)v31 + 9);
      *(_OWORD *)&entities->events[0].eventType = *((_OWORD *)v31 + 10);
      *(_OWORD *)&entities->events[2].eventType = *((_OWORD *)v31 + 11);
      *(_OWORD *)&entities->index.brushModel = *((_OWORD *)v31 + 12);
      *(_OWORD *)&entities->animInfo.selectAnim = *((_OWORD *)v31 + 13);
      *(_OWORD *)&entities->partBits.array[2] = *((_OWORD *)v31 + 14);
      *(_QWORD *)&entities->partBits.array[6] = *((_QWORD *)v31 + 30);
      number = entities->number;
      if ( (unsigned int)number > 0x7FF )
      {
        LODWORD(v55) = entities->number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 333, ASSERT_TYPE_ASSERT, "( ( (number >= 0 && number < ( 2048 )) ) )", "( number ) = %i", v55) )
          __debugbreak();
      }
      if ( v60[number] )
      {
        LODWORD(v56) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 334, ASSERT_TYPE_ASSERT, "(!entityFound[number])", "%s\n\tEntityNum %i was found twice in this snapshot", "!entityFound[number]", v56) )
          __debugbreak();
      }
      ++entities;
      v60[number] = 1;
      --v29;
    }
    while ( v29 );
    goto LABEL_76;
  }
  v33 = 0i64;
  if ( v25 )
  {
    v34 = v3->entities;
    do
    {
      v35 = (__int64)&ClientMP->parseEntities[(v33 + *(_QWORD *)(v9 + 94520)) % ClientMP->parseEntitiesCount];
      *(_OWORD *)&v34->number = *(_OWORD *)v35;
      *(_OWORD *)&v34->lerp.pos.trType = *(_OWORD *)(v35 + 16);
      *(_OWORD *)&v34->lerp.pos.trBase.y = *(_OWORD *)(v35 + 32);
      *(_OWORD *)&v34->lerp.pos.trDelta.z = *(_OWORD *)(v35 + 48);
      *(_OWORD *)v34->lerp.apos.trBase.v = *(_OWORD *)(v35 + 64);
      *(_OWORD *)&v34->lerp.apos.trDelta.y = *(_OWORD *)(v35 + 80);
      *(_OWORD *)&v34->lerp.u.vehicle.bodyPitch = *(_OWORD *)(v35 + 96);
      *(LerpEntityStateInfoVolumeGrapple *)((char *)&v34->lerp.u.infoVolumeGrapple + 24) = *(LerpEntityStateInfoVolumeGrapple *)(v35 + 112);
      *(_OWORD *)&v34->staticState.turret.carrierEntNum = *(_OWORD *)(v35 + 128);
      *(_OWORD *)&v34->clientNum = *(_OWORD *)(v35 + 144);
      *(_OWORD *)&v34->events[0].eventType = *(_OWORD *)(v35 + 160);
      *(_OWORD *)&v34->events[2].eventType = *(_OWORD *)(v35 + 176);
      *(_OWORD *)&v34->index.brushModel = *(_OWORD *)(v35 + 192);
      *(_OWORD *)&v34->animInfo.selectAnim = *(_OWORD *)(v35 + 208);
      *(_OWORD *)&v34->partBits.array[2] = *(_OWORD *)(v35 + 224);
      *(_QWORD *)&v34->partBits.array[6] = *(_QWORD *)(v35 + 240);
      v36 = v34->number;
      if ( (unsigned int)v36 > 0x7FF )
      {
        LODWORD(v55) = v34->number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 347, ASSERT_TYPE_ASSERT, "( ( (number >= 0 && number < ( 2048 )) ) )", "( number ) = %i", v55) )
          __debugbreak();
      }
      v37 = &v60[v36];
      if ( v60[v36] )
      {
        LODWORD(v56) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 348, ASSERT_TYPE_ASSERT, "(!entityFound[number])", "%s\n\tEntityNum %i was found twice in this snapshot", "!entityFound[number]", v56) )
          __debugbreak();
        v37 = &v60[v36];
      }
      ++v33;
      *v37 = 1;
      ++v34;
    }
    while ( v33 < v29 );
LABEL_76:
    v3 = snapshot;
    v8 = 0i64;
  }
LABEL_77:
  v3->entitiesLoD.array[0] = *(_DWORD *)(v9 + 94600);
  v3->entitiesLoD.array[1] = *(_DWORD *)(v9 + 94604);
  v3->entitiesLoD.array[2] = *(_DWORD *)(v9 + 94608);
  v3->entitiesLoD.array[3] = *(_DWORD *)(v9 + 94612);
  v3->entitiesLoD.array[4] = *(_DWORD *)(v9 + 94616);
  v3->entitiesLoD.array[5] = *(_DWORD *)(v9 + 94620);
  v3->entitiesLoD.array[6] = *(_DWORD *)(v9 + 94624);
  v3->entitiesLoD.array[7] = *(_DWORD *)(v9 + 94628);
  v3->entitiesLoD.array[8] = *(_DWORD *)(v9 + 94632);
  v3->entitiesLoD.array[9] = *(_DWORD *)(v9 + 94636);
  v3->entitiesLoD.array[10] = *(_DWORD *)(v9 + 94640);
  v3->entitiesLoD.array[11] = *(_DWORD *)(v9 + 94644);
  v3->entitiesLoD.array[12] = *(_DWORD *)(v9 + 94648);
  v3->entitiesLoD.array[13] = *(_DWORD *)(v9 + 94652);
  v3->entitiesLoD.array[14] = *(_DWORD *)(v9 + 94656);
  v3->entitiesLoD.array[15] = *(_DWORD *)(v9 + 94660);
  v3->entitiesLoD.array[16] = *(_DWORD *)(v9 + 94664);
  v3->entitiesLoD.array[17] = *(_DWORD *)(v9 + 94668);
  v3->entitiesLoD.array[18] = *(_DWORD *)(v9 + 94672);
  v3->entitiesLoD.array[19] = *(_DWORD *)(v9 + 94676);
  v3->entitiesLoD.array[20] = *(_DWORD *)(v9 + 94680);
  v3->entitiesLoD.array[21] = *(_DWORD *)(v9 + 94684);
  v3->entitiesLoD.array[22] = *(_DWORD *)(v9 + 94688);
  v3->entitiesLoD.array[23] = *(_DWORD *)(v9 + 94692);
  v3->entitiesLoD.array[24] = *(_DWORD *)(v9 + 94696);
  v3->entitiesLoD.array[25] = *(_DWORD *)(v9 + 94700);
  v3->entitiesLoD.array[26] = *(_DWORD *)(v9 + 94704);
  v3->entitiesLoD.array[27] = *(_DWORD *)(v9 + 94708);
  v3->entitiesLoD.array[28] = *(_DWORD *)(v9 + 94712);
  v3->entitiesLoD.array[29] = *(_DWORD *)(v9 + 94716);
  v3->entitiesLoD.array[30] = *(_DWORD *)(v9 + 94720);
  v3->entitiesLoD.array[31] = *(_DWORD *)(v9 + 94724);
  v3->entitiesLoD.array[32] = *(_DWORD *)(v9 + 94728);
  v3->entitiesLoD.array[33] = *(_DWORD *)(v9 + 94732);
  v3->entitiesLoD.array[34] = *(_DWORD *)(v9 + 94736);
  v3->entitiesLoD.array[35] = *(_DWORD *)(v9 + 94740);
  v3->entitiesLoD.array[36] = *(_DWORD *)(v9 + 94744);
  v3->entitiesLoD.array[37] = *(_DWORD *)(v9 + 94748);
  v3->entitiesLoD.array[38] = *(_DWORD *)(v9 + 94752);
  v3->entitiesLoD.array[39] = *(_DWORD *)(v9 + 94756);
  v3->entitiesLoD.array[40] = *(_DWORD *)(v9 + 94760);
  v3->entitiesLoD.array[41] = *(_DWORD *)(v9 + 94764);
  v3->entitiesLoD.array[42] = *(_DWORD *)(v9 + 94768);
  v3->entitiesLoD.array[43] = *(_DWORD *)(v9 + 94772);
  v3->entitiesLoD.array[44] = *(_DWORD *)(v9 + 94776);
  v3->entitiesLoD.array[45] = *(_DWORD *)(v9 + 94780);
  v3->entitiesLoD.array[46] = *(_DWORD *)(v9 + 94784);
  v3->entitiesLoD.array[47] = *(_DWORD *)(v9 + 94788);
  v3->entitiesLoD.array[48] = *(_DWORD *)(v9 + 94792);
  v3->entitiesLoD.array[49] = *(_DWORD *)(v9 + 94796);
  v3->entitiesLoD.array[50] = *(_DWORD *)(v9 + 94800);
  v3->entitiesLoD.array[51] = *(_DWORD *)(v9 + 94804);
  v3->entitiesLoD.array[52] = *(_DWORD *)(v9 + 94808);
  v3->entitiesLoD.array[53] = *(_DWORD *)(v9 + 94812);
  v3->entitiesLoD.array[54] = *(_DWORD *)(v9 + 94816);
  v3->entitiesLoD.array[55] = *(_DWORD *)(v9 + 94820);
  v3->entitiesLoD.array[56] = *(_DWORD *)(v9 + 94824);
  v3->entitiesLoD.array[57] = *(_DWORD *)(v9 + 94828);
  v3->entitiesLoD.array[58] = *(_DWORD *)(v9 + 94832);
  v3->entitiesLoD.array[59] = *(_DWORD *)(v9 + 94836);
  v3->entitiesLoD.array[60] = *(_DWORD *)(v9 + 94840);
  v3->entitiesLoD.array[61] = *(_DWORD *)(v9 + 94844);
  v3->entitiesLoD.array[62] = *(_DWORD *)(v9 + 94848);
  v3->entitiesLoD.array[63] = *(_DWORD *)(v9 + 94852);
  maxClients = cls.maxClients;
  v39 = *(_DWORD *)(v9 + 94504);
  if ( (unsigned int)(cls.maxClients - 1) > 0xC7 )
  {
    LODWORD(v57) = 200;
    LODWORD(v56) = 1;
    LODWORD(v55) = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 360, ASSERT_TYPE_ASSERT, "( 1 ) <= ( cls.maxClients ) && ( cls.maxClients ) <= ( 200 )", "cls.maxClients not in [1, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", v55, v56, v57) )
      __debugbreak();
    maxClients = cls.maxClients;
  }
  clients = v3->clients;
  if ( v39 > maxClients )
    v39 = maxClients;
  memset_0(v3->clients, 170, sizeof(v3->clients));
  v3->numClients = v39;
  v41 = 0i64;
  if ( v39 )
  {
    do
    {
      v42 = clients;
      v43 = (__int64)&ClientMP->parseClients[(v41 + *(_QWORD *)(v9 + 94528)) % ClientMP->parseClientsCount];
      v44 = 3i64;
      do
      {
        v42 = (clientState_t *)((char *)v42 + 128);
        v45 = *(_OWORD *)v43;
        v43 += 128i64;
        *(_OWORD *)&v42[-1].mount.normalIndex = v45;
        *(_OWORD *)&v42[-1].perkIconName = *(_OWORD *)(v43 - 112);
        *(_OWORD *)&v42[-1].doorState[0].angle = *(_OWORD *)(v43 - 96);
        *(_OWORD *)&v42[-1].doorState[1].owner = *(_OWORD *)(v43 - 80);
        *(_OWORD *)&v42[-1].footstepActionType = *(_OWORD *)(v43 - 64);
        *(_OWORD *)&v42[-1].playerASM_scripted_anim_start_time = *(_OWORD *)(v43 - 48);
        *(_OWORD *)&v42[-1].vehicleAnimStateSeat = *(_OWORD *)(v43 - 32);
        *(_OWORD *)&v42[-1].movingPlatform = *(_OWORD *)(v43 - 16);
        --v44;
      }
      while ( v44 );
      *(_OWORD *)&v42->clientIndex = *(_OWORD *)v43;
      ++v41;
      ++clients;
      *(_QWORD *)&v42->doNotSimulateTracers = *(_QWORD *)(v43 + 16);
    }
    while ( v41 < v39 );
  }
  agents = v3->agents;
  memset_0(v3->agents, 187, sizeof(v3->agents));
  maxAgents = cls.maxAgents;
  v48 = *(_DWORD *)(v9 + 94508);
  if ( cls.maxAgents > 0x30u )
  {
    LODWORD(v57) = 48;
    LODWORD(v55) = cls.maxAgents;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 391, ASSERT_TYPE_ASSERT, "( 0 ) <= ( cls.maxAgents ) && ( cls.maxAgents ) <= ( 48 )", "cls.maxAgents not in [0, MAX_AGENTS_MP]\n\t%i not in [%i, %i]", v55, 0i64, v57) )
      __debugbreak();
    maxAgents = cls.maxAgents;
  }
  if ( v48 > maxAgents )
    v48 = maxAgents;
  v3->numAgents = v48;
  if ( v48 )
  {
    do
    {
      ++agents;
      v49 = v8 + *(_QWORD *)(v9 + 94536);
      ++v8;
      *((_QWORD *)&v49 + 1) = &ClientMP->parseAgents[v49 % ClientMP->parseAgentsCount];
      *(_OWORD *)&agents[-1].entityNum = **((_OWORD **)&v49 + 1);
      *(_OWORD *)&agents[-1].dualWielding = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 16i64);
      *(_OWORD *)agents[-1].isWeaponSmoking = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 32i64);
      *(_OWORD *)agents[-1].attachModelIndex = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 48i64);
      *(_OWORD *)&agents[-1].attachModelIndex[4] = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 64i64);
      *(_OWORD *)&agents[-1].attachModelIndex[8] = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 80i64);
      *(_OWORD *)&agents[-1].attachTagIndex[3] = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 96i64);
      *(_OWORD *)&agents[-1].attachTagIndex[7] = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 112i64);
      *(_OWORD *)&agents[-1].compressedAnimData.flags = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 128i64);
      *(_OWORD *)&agents[-1].compressedAnimData.endScriptAnimTableIndex = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 144i64);
      *(_OWORD *)&agents[-1].gunAdditiveIndex = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 160i64);
      *(_OWORD *)&agents[-1].civilianFocus = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 176i64);
      *(_OWORD *)&agents[-1].footstepActionType = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 192i64);
      *(_OWORD *)&agents[-1].playerASM_scripted_anim_start_time = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 208i64);
      *(_OWORD *)&agents[-1].vehicleAnimStateSeat = *(_OWORD *)(*((_QWORD *)&v49 + 1) + 224i64);
      *(_QWORD *)&agents[-1].serverDobjHeldWeapon.m_mapEntryId = *(_QWORD *)(*((_QWORD *)&v49 + 1) + 240i64);
      *(_DWORD *)&agents[-1].serverDobjHideWeapon = *(_DWORD *)(*((_QWORD *)&v49 + 1) + 248i64);
    }
    while ( v8 < v48 );
  }
  v3->scriptableChangeStartSequence = *(_QWORD *)(v9 + 94568);
  v3->scriptableChangeEndSequence = *(_QWORD *)(v9 + 94576);
  v3->scriptablePartsChecksum = *(_DWORD *)(v9 + 94588);
  v3->scriptableInstanceChecksum = *(_DWORD *)(v9 + 94584);
  v50 = *(_QWORD *)(v9 + 94560) % (__int64)ClientMP->parseUmbraGateStatesCount;
  parseUmbraGateStates = ClientMP->parseUmbraGateStates;
  *(__m256i *)v3->umbraGateStates.array = *(__m256i *)parseUmbraGateStates[v50].array;
  *(_OWORD *)&v3->umbraGateStates.array[8] = *(_OWORD *)&parseUmbraGateStates[v50].array[8];
  if ( ClientMP->parseScriptedCameraCount )
  {
    if ( !ClientMP->parseScriptedCameras && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 416, ASSERT_TYPE_ASSERT, "(cl->parseScriptedCameras)", (const char *)&queryFormat, "cl->parseScriptedCameras") )
      __debugbreak();
    parseScriptedCameras = ClientMP->parseScriptedCameras;
    v53 = (__int64)(*(_DWORD *)(v9 + 94596) % ClientMP->parseScriptedCameraCount) << 7;
    *(__m256i *)&v3->scriptedCameraState.m_fadeTarget = *(__m256i *)((char *)&parseScriptedCameras->m_fadeTarget + v53);
    *(__m256i *)&v3->scriptedCameraState.m_requiredCharacters[4] = *(__m256i *)&parseScriptedCameras->m_requiredCharacters[v53 + 4];
    *(__m256i *)&v3->scriptedCameraState.m_cinematicPlaybackName[8] = *(__m256i *)&parseScriptedCameras->m_cinematicPlaybackName[v53 + 8];
    *(__m256i *)&v3->scriptedCameraState.m_cinematicPlaybackName[40] = *(__m256i *)&parseScriptedCameras->m_cinematicPlaybackName[v53 + 40];
  }
  else
  {
    memset_0(&v3->scriptedCameraState, 0, sizeof(v3->scriptedCameraState));
  }
  memcpy_0(v3->mlgSpectatorClientInfo, (const void *)(v9 + 51264), sizeof(v3->mlgSpectatorClientInfo));
  return 1i64;
}

/*
==============
CL_CGameMP_GetSnapshotForTracking
==============
*/
ClSnapshot *CL_CGameMP_GetSnapshotForTracking(const LocalClientNum_t localClientNum, int snapshotNumber)
{
  ClActiveClientMP *ClientMP; 
  ClConnectionMP *ClientConnectionMP; 
  ClSnapshot *result; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int messageNum; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( !ClientMP->snapshots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2645, ASSERT_TYPE_ASSERT, "(cl->snapshots)", (const char *)&queryFormat, "cl->snapshots") )
    __debugbreak();
  if ( snapshotNumber > ClientMP->snap.messageNum )
  {
    messageNum = ClientMP->snap.messageNum;
    v8 = snapshotNumber;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2646, ASSERT_TYPE_ASSERT, "( snapshotNumber ) <= ( cl->snap.messageNum )", "%s <= %s\n\t%i, %i", "snapshotNumber", "cl->snap.messageNum", v8, messageNum) )
      __debugbreak();
  }
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(localClientNum);
  if ( ClientConnectionMP->m_packetBackupCount <= 0 )
  {
    LODWORD(v7) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v7, 0i64) )
      __debugbreak();
  }
  if ( ClientConnectionMP->m_packetBackupCount <= 0 )
  {
    LODWORD(v7) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v7, 0i64) )
      __debugbreak();
    LODWORD(v9) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2649, ASSERT_TYPE_ASSERT, "( clc->GetPacketBackupCount() ) > ( 0 )", "%s > %s\n\t%i, %i", "clc->GetPacketBackupCount()", "0", v9, 0i64) )
      __debugbreak();
  }
  if ( ClientMP->snap.messageNum - snapshotNumber >= ClConnectionMP::GetPacketBackupCount(ClientConnectionMP) )
    return 0i64;
  result = &ClientMP->snapshots[snapshotNumber % ClConnectionMP::GetPacketBackupCount(ClientConnectionMP)];
  if ( result->state != BOOL_VALUE )
    return 0i64;
  return result;
}

/*
==============
CL_CGameMP_Init
==============
*/

void __fastcall CL_CGameMP_Init(LocalClientNum_t localClientNum)
{
  CL_CGameMP_Init_Internal(localClientNum);
}

/*
==============
CL_CGameMP_Init_Internal
==============
*/
void CL_CGameMP_Init_Internal(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int ControllerFromClient; 
  char v3; 
  const PartyData *PartyData; 
  const char *ConfigString; 
  const char *v6; 
  int v7; 
  int MapIndex; 
  int MapSource; 
  __int64 v10; 
  ClConnectionDataMP *ClientConnectionData; 
  HunkUser *HunkUser; 
  unsigned __int8 ActiveGameMode; 
  int v16; 
  Online_AAR *Instance; 
  __int64 v18; 
  __int64 v19; 
  PartyActiveClient outPartyActiveClient; 

  v1 = localClientNum;
  Sys_Milliseconds();
  ClActiveClientMP::GetClientMP((const LocalClientNum_t)v1);
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v19) = 2;
    LODWORD(v18) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v3 = clientUIActives[v1].frontEndSceneState[0];
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  if ( !v3 )
  {
    Con_Close((LocalClientNum_t)v1);
    Live_SetCurrentMapname(cls.m_activeGameMapName);
    Live_SetGametype(ControllerFromClient, cls.m_activeGameTypeName);
    PartyData = Lobby_GetPartyData();
    if ( Party_GetSecondaryActiveClient(PartyData, &outPartyActiveClient) )
      Live_SetGametype(outPartyActiveClient.localControllerIndex, cls.m_activeGameTypeName);
  }
  if ( Live_ShouldTrackConnectionHistory((LocalClientNum_t)v1) )
  {
    Live_IncrementGameCount(ControllerFromClient);
    Live_TrackNonMigrateableQuitBeginGame(ControllerFromClient);
    Live_TrackMigrateableQuitBeginGame(ControllerFromClient);
    Live_ForceFlushPlayerData(ControllerFromClient);
  }
  if ( !Com_IsAnyLocalServerRunning() )
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 834, ASSERT_TYPE_ASSERT, "(isGameServer)", (const char *)&queryFormat, "isGameServer") )
      __debugbreak();
    Dvar_SetString_Internal(DVARSTR_ui_mapname, cls.m_activeGameMapName);
    Dvar_SetString_Internal(DVARSTR_ui_gametype, cls.m_activeGameTypeName);
    ConfigString = CL_GetConfigString(528);
    v6 = Dvar_InfoValueForKey(ConfigString, "LOMTKQTRTM");
    v7 = atoi(v6);
    Dvar_SetBoolByName("LOMTKQTRTM", v7 != 0);
  }
  if ( !v3 )
  {
    MapIndex = Live_GetMapIndex(cls.m_activeGameMapName);
    MapSource = Live_GetMapSource(MapIndex);
    if ( !Content_DoWeHaveContentPack(MapSource) )
      UI_MissingMapError();
  }
  if ( !CL_MainMP_WasMapAlreadyLoaded((LocalClientNum_t)v1) )
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 855, ASSERT_TYPE_ASSERT, "(isGameServer)", (const char *)&queryFormat, "isGameServer") )
      __debugbreak();
    Com_InitDObj();
    DB_LoadLevelXAssets(cls.m_activeGameMapName, 0, 0);
  }
  Com_Printf(14, "Setting state to CA_LOADING in CL_CGameMP_Init\n");
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v19) = 2;
    LODWORD(v18) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v1].connectionState, 7i64);
  v10 = v1;
  clientUIActives[v1].connectionState = CA_LOADING;
  *(_QWORD *)&s_trackExtrapolate[v10].isExtrapolating = 0i64;
  *(_QWORD *)&s_trackExtrapolate[v10].extrapolatePrevSnap = 0i64;
  s_trackExtrapolate[v10].lastExtrapolatedTime = 0;
  CL_MainMP_GamePostMapMemoryAllocate();
  clientUIActives[v1].cgameInitCalled = 1;
  cl_serverLoadingMap = 0;
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v1);
  HunkUser = CL_Main_GetHunkUser();
  CG_MainMP_Init((LocalClientNum_t)v1, ClientConnectionData->serverMessageSequence, ClientConnectionData->lastExecutedServerCommand, ClientConnectionData->clientNum, HunkUser);
  clientUIActives[v1].cgameInitialized = 1;
  if ( !v3 )
    R_BeginRemoteScreenUpdate();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CL_CGameMP_Init Remote Screen");
  Com_Printf(14, "Setting state to CA_PRIMED in CL_CGameMP_Init\n");
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v19) = 2;
    LODWORD(v18) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v1].connectionState, 8i64);
  clientUIActives[v1].connectionState = CA_PRIMED;
  Sys_Milliseconds();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, eax }
  Com_Printf(14, "CL_CGameMP_Init: %5.2f seconds\n", *(double *)&_XMM0 * 0.001);
  R_EndRegistration();
  if ( !v3 )
  {
    Con_ClearNotify((LocalClientNum_t)v1);
    Con_InitConfig((const LocalClientNum_t)v1, "console_mp.cfg");
    Con_InitMessageBuffer();
    Con_InitGameMsgChannels();
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    CL_Main_ReInitDevGUI((GameModeType)ActiveGameMode);
    v16 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    if ( GamerProfile_GetGamepadEnabled(v16) )
      GamerProfile_ExecControllerBindings(v16);
  }
  Sys_ProfEndNamedEvent();
  if ( v3 )
  {
    NetConstBaselines_ClearBaselineData();
  }
  else
  {
    R_EndRemoteScreenUpdate();
    DB_SyncLevelLoad();
    NetConstBaselines_ReadBaselineDataFromFile(cls.m_activeGameMapName, cls.m_activeGameTypeName);
  }
  ATClient_InitNav();
  Com_ResetFrametime();
  if ( !Com_IsAnyLocalServerRunning() )
    Com_MapLoadErrors_Finalize(cls.m_activeGameMapName);
  if ( !v3 )
  {
    Instance = Online_AAR::GetInstance();
    Online_AAR::StartMatch(Instance);
  }
}

/*
==============
CL_CGameMP_IsServerRestarting
==============
*/
_BOOL8 CL_CGameMP_IsServerRestarting(LocalClientNum_t localClientNum)
{
  return ClConnectionMP::GetClientConnectionData(localClientNum)->isServerRestarting;
}

/*
==============
CL_CGameMP_IsServerSavingReplay
==============
*/
_BOOL8 CL_CGameMP_IsServerSavingReplay(const LocalClientNum_t localClientNum)
{
  return ClConnectionMP::GetClientConnectionData(localClientNum)->isServerSavingReplay;
}

/*
==============
CL_CGameMP_LoadMap
==============
*/
void CL_CGameMP_LoadMap(const char *mapname)
{
  int checksum; 

  CM_LoadMap(mapname, &checksum);
  if ( !Com_IsAnyLocalServerRunning() )
  {
    Com_LoadWorld(mapname);
    BgDynamicLimits::UpdateDynamicValues();
  }
}

/*
==============
CL_CGameMP_LoadWorld
==============
*/
__int64 CL_CGameMP_LoadWorld(const char *mapname)
{
  unsigned int LocalClientActiveCount; 
  int checksum; 

  checksum = 0;
  LocalClientActiveCount = CL_GetLocalClientActiveCount();
  R_LoadWorld(LocalClientActiveCount, mapname, &checksum, 0);
  return (unsigned int)checksum;
}

/*
==============
CL_CGameMP_PrintServerTimeDelta
==============
*/
void CL_CGameMP_PrintServerTimeDelta(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  ClActiveClientMP *ClientMP; 
  int serverTimeDelta; 
  int v5; 
  NetBurst *burstState; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const char *v13; 
  int Int_Internal_DebugName; 
  int m_currentMinimum; 
  int m_windowDuration; 
  int realtime; 
  const char *v18; 
  int v19; 
  int v20; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  int m_windowMinimum; 

  v1 = DVARBOOL_cl_showTimeDelta;
  if ( !DVARBOOL_cl_showTimeDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showTimeDelta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    serverTimeDelta = ClientMP->serverTimeDelta;
    v5 = ClientMP->desiredServerTimeDelta - serverTimeDelta;
    burstState = ClientMP->burstState;
    v7 = ClientMP->snap.info.serverTime - serverTimeDelta - cls.realtime;
    v8 = abs32(v5);
    if ( v8 <= 500 )
    {
      if ( v8 <= 100 )
      {
        v11 = DVARINT_cl_adjust_time_fast_cutoff;
        if ( !DVARINT_cl_adjust_time_fast_cutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_fast_cutoff") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( v8 <= v11->current.integer )
        {
          v12 = DVARINT_cl_adjust_time_slow_adjust;
          v13 = "cl_adjust_time_slow_adjust";
        }
        else
        {
          v12 = DVARINT_cl_adjust_time_fast_adjust;
          v13 = "cl_adjust_time_fast_adjust";
        }
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v12, v13);
        v10 = I_clamp(v5, -Int_Internal_DebugName, Int_Internal_DebugName);
      }
      else
      {
        v10 = v5 / 2;
      }
      v9 = v10;
    }
    else
    {
      v9 = ClientMP->desiredServerTimeDelta - serverTimeDelta;
    }
    m_currentMinimum = burstState->m_currentMinimum;
    m_windowMinimum = burstState->m_windowMinimum;
    if ( burstState->m_windowDuration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.h", 185, ASSERT_TYPE_ASSERT, "( m_windowDuration ) >= ( 0 )", "%s >= %s\n\t%i, %i", "m_windowDuration", "0", burstState->m_windowDuration, 0i64) )
      __debugbreak();
    m_windowDuration = burstState->m_windowDuration;
    realtime = cls.realtime;
    if ( burstState->m_state != BUFF_STATE_SURPLUS )
      goto LABEL_26;
    if ( cls.realtime < burstState->m_stateStartTime )
    {
      LODWORD(v25) = burstState->m_stateStartTime;
      LODWORD(v24) = cls.realtime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.h", 194, ASSERT_TYPE_ASSERT, "( systemMsec ) >= ( m_stateStartTime )", "%s >= %s\n\t%i, %i", "systemMsec", "m_stateStartTime", v24, v25) )
        __debugbreak();
    }
    if ( realtime == burstState->m_stateStartTime )
    {
LABEL_26:
      v19 = cls.realtime;
      if ( burstState->m_state == BUFF_STATE_DEFICIT )
      {
        if ( cls.realtime < burstState->m_stateStartTime )
        {
          LODWORD(v25) = burstState->m_stateStartTime;
          LODWORD(v24) = cls.realtime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.h", 206, ASSERT_TYPE_ASSERT, "( systemMsec ) >= ( m_stateStartTime )", "%s >= %s\n\t%i, %i", "systemMsec", "m_stateStartTime", v24, v25) )
            __debugbreak();
        }
        v20 = v19 - burstState->m_stateStartTime;
      }
      else
      {
        v20 = 0;
      }
      v18 = "ideal";
      if ( v20 )
        v18 = "deficit";
    }
    else
    {
      v18 = "surplus";
    }
    LODWORD(v24) = ClientMP->desiredServerTimeDelta;
    LODWORD(v23) = ClientMP->serverTimeDelta;
    LODWORD(v22) = ClientMP->snap.info.serverTime - ClientMP->oldFrameServerTime;
    LODWORD(fmt) = v24 + cls.realtime;
    Com_Printf(16, "Time( snap:%d  curr:%d  targ:%d  recv:%d )  Delta( curr:%d  targ:%d )  Buffer( state:%s  dur:%d  offset:%d  wind:%d  cur:%d )  Throttle( snap:%d  adj:%d )\n", (unsigned int)ClientMP->snap.info.serverTime, (unsigned int)(v23 + cls.realtime), fmt, v22, v23, v24, v18, m_windowDuration, v7, m_windowMinimum, m_currentMinimum, v5, v9);
  }
}

/*
==============
CL_CGameMP_Restart
==============
*/
void CL_CGameMP_Restart(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClConnectionDataMP *ClientConnectionData; 
  cgs_t *LocalClientStaticGlobals; 
  CgGlobalsMP *LocalClientGlobals; 
  int v5; 
  __int64 v6; 
  CgEntitySystem *v7; 
  centity_t *v8; 
  __int64 v9; 
  int clientNum; 
  __int64 v11; 
  int maxClients; 

  v1 = localClientNum;
  Com_Printf(14, "CL_CGameMP_Restart()\n");
  Physics_WaitForAllCommandsToFinish();
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v1);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v1);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
  LocalClientStaticGlobals->processedSnapshotNum = ClientConnectionData->serverMessageSequence;
  LocalClientStaticGlobals->serverCommandSequence = ClientConnectionData->lastExecutedServerCommand;
  v5 = 0;
  LocalClientStaticGlobals->localServer = Com_IsAnyLocalServerRunning();
  LocalClientGlobals->latestSnapshotNum = 0;
  LocalClientGlobals->snap = NULL;
  LocalClientGlobals->nextSnap = NULL;
  memset_0(&LocalClientGlobals->predictedPlayerState, 0, sizeof(LocalClientGlobals->predictedPlayerState));
  if ( ClientConnectionData->clientNum >= (unsigned int)cls.maxClients )
  {
    maxClients = cls.maxClients;
    clientNum = ClientConnectionData->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1092, ASSERT_TYPE_ASSERT, "(unsigned)( clcData->clientNum ) < (unsigned)( cls.maxClients )", "clcData->clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  LocalClientGlobals->clientNum = ClientConnectionData->clientNum;
  CG_MainMP_CGameRestart_PreShutdownEntities((LocalClientNum_t)v1);
  CG_SnapshotMP_MapRestart((const LocalClientNum_t)v1);
  v6 = 0i64;
  do
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v11) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v11) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v11) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v1] )
    {
      LODWORD(v11) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v11) )
        __debugbreak();
    }
    v7 = CgEntitySystem::ms_entitySystemArray[v1];
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v9) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    v8 = &v7->m_entities[v6];
    if ( v5 == v8->nextState.number )
    {
      v8->flags &= ~1u;
      CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v1, v8);
    }
    CL_CGameMP_ValidateEntShutdown((LocalClientNum_t)v1, v5++, v8);
    ++v6;
  }
  while ( v5 < 2048 );
  CG_MainMP_CGameRestart_PostShutdownEntities((LocalClientNum_t)v1);
  CG_VisionSetMapInit((const LocalClientNum_t)v1);
  CG_AnimTreeMP_InitializeDObjAnimInfo(LocalClientGlobals);
  CG_ServerCmdMP_SetConfigValues((LocalClientNum_t)v1);
  CG_ServerCmdMP_ParseServerInfo((LocalClientNum_t)v1);
  CG_ServerCmdMP_ParseCodInfo((LocalClientNum_t)v1);
  CG_ServerCmd_ParseSunLight((const LocalClientNum_t)v1);
  CG_ServerCmdMP_ParsePlayerInfos((LocalClientNum_t)v1);
  CG_ClearBlur((LocalClientNum_t)v1);
  Com_Printf(14, "Setting state to CA_PRIMED in CL_CGameMP_Restart\n");
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v1].connectionState, 8i64);
  clientUIActives[v1].connectionState = CA_PRIMED;
}

/*
==============
CL_CGameMP_SetCGameTime
==============
*/
void CL_CGameMP_SetCGameTime(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClActiveClientMP *ClientMP; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  ClActiveClientMP *v10; 
  const dvar_t *v11; 
  ClActiveClientMP *v12; 
  int v13; 
  int oldServerTime; 
  __int64 commandTime; 
  __int64 cmdTimeMsec; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v1 = localClientNum;
  if ( CL_IsLocalClientConnectedToAnyServer(localClientNum) )
  {
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v1);
    if ( CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v1) )
      goto LABEL_17;
    if ( CL_Demo_IsPlayingServer((LocalClientNum_t)v1) && SV_DemoMP_CanReadDemo() )
    {
      while ( CL_IsLocalClientConnectedToAnyServer((const LocalClientNum_t)v1) )
      {
        if ( CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v1) >= CA_PRIMED )
          break;
        if ( !SV_DemoMP_CanReadDemo() )
        {
          Com_PrintWarning(14, "Can't read demo message while waiting for connection\n");
          Sys_Sleep(1);
        }
        CL_DemoServerPlayback_ReadMsg((LocalClientNum_t)v1);
      }
      CL_DemoServerPlayback_ReadMsg((LocalClientNum_t)v1);
    }
    if ( CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v1) == CA_PRIMED )
    {
      if ( ClientMP->newSnapshots )
      {
        ClientMP->newSnapshots = 0;
        CL_CGameMP_FirstSnapshot((LocalClientNum_t)v1);
        if ( CL_CGameMP_AllLocalClientStatesActive() )
          CL_SetupScreenPlacements();
        NetStats_Reset();
      }
      if ( CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v1) )
      {
LABEL_17:
        if ( ClientMP->snap.state != BOOL_VALUE )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442100F0, 994i64);
        if ( (!sv_paused->current.integer || !CL_Pause_IsGamePaused() || !Com_IsGameLocalServerRunning()) && (!Com_MP_GetIsLocalServerPaused() || !Com_MP_GetShouldClientPause()) )
        {
          if ( ClientMP->snap.info.serverTime < ClientMP->oldFrameServerTime )
          {
            v3 = 0x7FFFFFFFi64;
            v4 = 0i64;
            while ( 1 )
            {
              v5 = (unsigned __int8)cls.servername[v4];
              v6 = v3;
              v7 = (unsigned __int8)net_interface[v4++];
              --v3;
              if ( !v6 )
              {
LABEL_34:
                CL_CGameMP_FirstSnapshot((LocalClientNum_t)v1);
                goto LABEL_35;
              }
              if ( v5 != v7 )
              {
                v8 = v5 + 32;
                if ( (unsigned int)(v5 - 65) > 0x19 )
                  v8 = v5;
                v5 = v8;
                v9 = v7 + 32;
                if ( (unsigned int)(v7 - 65) > 0x19 )
                  v9 = v7;
                if ( v5 != v9 )
                  break;
              }
              if ( !v5 )
                goto LABEL_34;
            }
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144210140, 995i64, v4);
          }
LABEL_35:
          v10 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v1);
          v11 = DVARINT_cl_adjust_time_throttle_type;
          v12 = v10;
          if ( !DVARINT_cl_adjust_time_throttle_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_throttle_type") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v11);
          if ( v11->current.integer )
          {
            CL_CGameMP_UpdateTargetServerTimeDelta((const LocalClientNum_t)v1);
            CL_CGameMP_PrintServerTimeDelta((const LocalClientNum_t)v1);
            CL_CGameMP_UpdateServerTimeDelta((const LocalClientNum_t)v1);
          }
          else
          {
            CL_CGameMP_AdjustTimeDelta_Old((const LocalClientNum_t)v1);
          }
          v12->newSnapshots = 0;
          v13 = cls.realtime + ClientMP->serverTimeDelta;
          oldServerTime = ClientMP->oldServerTime;
          ClientMP->serverTime = v13;
          if ( v13 < oldServerTime )
          {
            ClientMP->serverTime = oldServerTime;
            v13 = oldServerTime;
          }
          ClientMP->oldServerTime = v13;
          Con_SetServerTime((LocalClientNum_t)v1, v13);
          if ( CL_Demo_IsPlayingServer((LocalClientNum_t)v1) )
          {
            if ( CL_Demo_IsPlaying((LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1959, ASSERT_TYPE_ASSERT, "(!CL_Demo_IsPlaying( localClientNum ))", "%s\n\tShouldn't be playing server and client demos at the same time", "!CL_Demo_IsPlaying( localClientNum )") )
              __debugbreak();
            if ( SV_DemoMP_CanReadDemo() )
            {
              do
              {
                CL_DemoServerPlayback_ReadMsg((LocalClientNum_t)v1);
                if ( (unsigned int)v1 >= 2 )
                {
                  LODWORD(v19) = 2;
                  LODWORD(v18) = v1;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
                    __debugbreak();
                }
              }
              while ( clientUIActives[v1].connectionState == CA_ACTIVE && SV_DemoMP_CanReadDemo() );
            }
          }
          ClientMP->oldFrameServerTime = ClientMP->snap.info.serverTime;
          if ( ClientMP->snap.ps.clientNum == ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v1)->clientNum )
          {
            commandTime = (unsigned int)ClientMP->snap.ps.commandTime;
            cmdTimeMsec = (unsigned int)ClientMP->cmdTimeMsec;
            if ( (int)commandTime > (int)cmdTimeMsec )
            {
              Com_PrintWarning(16, "The server wallclock time is ahead of the client's (%d > %d).\n", commandTime, cmdTimeMsec);
              v17 = 1000i64 * ClientMP->snap.ps.commandTime;
              ClientMP->cmdTimeMsec = ClientMP->snap.ps.commandTime;
              ClientMP->cmdTimeUsec = v17;
            }
          }
        }
      }
    }
  }
}

/*
==============
CL_CGameMP_SetExtrapolatedData
==============
*/
void CL_CGameMP_SetExtrapolatedData(LocalClientNum_t localClientNum, playerState_s *ps)
{
  ClActiveClientMP *ClientMP; 
  const dvar_t *v5; 
  ClActiveClientMP *v6; 
  float value; 
  float v8; 
  float v9; 
  float v10; 
  float v12; 
  float v13; 
  float v15; 
  __int16 v19; 
  unsigned int v21; 
  unsigned int v22; 
  const dvar_t *v23; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 483, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  v5 = DCONST_DVARFLT_com_userCmdMaxExtrapTranslation;
  v6 = ClientMP;
  if ( !DCONST_DVARFLT_com_userCmdMaxExtrapTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxExtrapTranslation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v8 = value * 0.000030518509;
  v9 = ps->origin.v[1] - v6->cgamePredictedData.origin.v[1];
  v10 = ps->origin.v[0] - v6->cgamePredictedData.origin.v[0];
  _XMM0 = LODWORD(ps->origin.v[2]);
  v12 = *(float *)&_XMM0 - v6->cgamePredictedData.origin.v[2];
  v13 = 0.0;
  if ( value < 0.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", value, *(double *)&_XMM0) )
      __debugbreak();
  }
  v15 = (float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v12 * v12);
  if ( v15 > (float)(value * value) )
    v13 = fsqrt(v15);
  _XMM7 = 0i64;
  __asm
  {
    vroundss xmm2, xmm7, xmm1, 1
    vroundss xmm0, xmm7, xmm2, 1
  }
  v6->cgamePredictedData.extrapData.offset.v[0] = truncate_cast<short,int>((int)*(float *)&_XMM2);
  v19 = truncate_cast<short,int>((int)*(float *)&_XMM0);
  __asm { vroundss xmm0, xmm7, xmm2, 1 }
  v6->cgamePredictedData.extrapData.offset.v[1] = v19;
  v21 = truncate_cast<short,int>((int)*(float *)&_XMM0);
  v6->cgamePredictedData.extrapData.offset.v[2] = v21;
  v6->cgamePredictedData.extrapData.time = ps->commandTime - v6->cgamePredictedData.commandTime;
  v6->cgamePredictedData.extrapData.inputTime = ps->inputTime - v6->cgamePredictedData.inputTime;
  if ( v13 >= value )
  {
    v23 = DCONST_DVARBOOL_com_userCmdLogExtrapError;
    if ( !DCONST_DVARBOOL_com_userCmdLogExtrapError && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdLogExtrapError") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
      Com_PrintError(14, "Extrapolation offset %f exceeds the maximum length %f.\n", v13, value);
  }
  else
  {
    v22 = v6->cgamePredictedData.extrapData.offset.v[1];
    ps->origin.v[0] = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)v6->cgamePredictedData.extrapData.offset.v[0]).m128_f32[0] * v8) + v6->cgamePredictedData.origin.v[0];
    ps->origin.v[1] = (float)(_mm_cvtepi32_ps((__m128i)v22).m128_f32[0] * v8) + v6->cgamePredictedData.origin.v[1];
    ps->origin.v[2] = (float)(_mm_cvtepi32_ps((__m128i)v21).m128_f32[0] * v8) + v6->cgamePredictedData.origin.v[2];
  }
  *(double *)v6->cgamePredictedData.extrapData.packedBobCycle = *(double *)ps->packedBobCycle;
}

/*
==============
CL_CGameMP_SetPredictedData
==============
*/
void CL_CGameMP_SetPredictedData(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  ClActiveClientMP *ClientMP; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 447, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ClientMP->cgamePredictedData.commandTime = ps->commandTime;
  ClientMP->cgamePredictedData.inputTime = ps->inputTime;
  ClientMP->cgamePredictedData.origin = ps->origin;
  ClientMP->cgamePredictedData.velocity = ps->velocity;
  ClientMP->cgamePredictedData.movementDir = ps->movementDir;
  ClientMP->cgamePredictedData.movementDirPrecise = ps->movementDirPrecise;
  ClientMP->cgamePredictedData.viewangles = ps->viewangles;
  ClientMP->cgamePredictedData.vehicle = ps->vehicleState;
  ClientMP->cgamePredictedData.footstepCount = ps->footstepCount;
  ClientMP->cgamePredictedData.lastStandMoveStopTime = ps->lastStandMoveStopTime;
}

/*
==============
CL_CGameMP_SetUserCmdAimValues
==============
*/
void CL_CGameMP_SetUserCmdAimValues(LocalClientNum_t localClientNum, const vec3_t *kickAngles)
{
  ClActiveClientMP::GetClientMP(localClientNum)->cgameKickAngles = *kickAngles;
}

/*
==============
CL_CGameMP_ShouldSendPeerVoiceData
==============
*/
_BOOL8 CL_CGameMP_ShouldSendPeerVoiceData(const PartyData *party, const LocalClientNum_t localClientNum, const int listenerClientNum)
{
  __int64 v4; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  _BOOL8 v8; 
  int ControllerFromClient; 
  int OurClientNum; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *v12; 
  characterInfo_t *CharacterInfo; 
  XUID *Xuid; 
  const char *v15; 
  characterInfo_t *v16; 
  int team; 
  CgHandler *Handler; 
  bool IsGameTypeQuick_BR; 
  bool v20; 
  int squadIndex; 
  int v22; 
  int v23; 
  char v24; 
  centity_t *Entity; 
  char v26; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v31; 
  bool v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  char v45; 
  const char *v46; 
  bool v47; 
  const char *v48; 
  char v49; 
  float v50; 
  __int64 v51; 
  const char *v52; 
  unsigned int v53; 
  int *recentVictimTimes; 
  __int64 v55; 
  unsigned int v56; 
  const PartyData *GameParty; 
  const vec4_t *v58; 
  char v59; 
  char v60; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v62; 
  float v63; 
  float v64; 
  float v65; 
  __int128 v67; 
  float v70; 
  double Float_Internal_DebugName; 
  CgMLGSpectator *MLGSpectator; 
  __int64 duration; 
  __int64 v74; 
  char v75; 
  bool v76; 
  char v77; 
  bool m_useSquads; 
  bool v79; 
  bool Bool_Internal_DebugName; 
  vec3_t point; 
  int v82; 
  unsigned int Int_Internal_DebugName; 
  __int64 v84; 
  vec3_t result; 

  v84 = -2i64;
  v4 = localClientNum;
  if ( (unsigned int)listenerClientNum >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2346, ASSERT_TYPE_ASSERT, "(unsigned)( listenerClientNum ) < (unsigned)( 200 )", "listenerClientNum doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", listenerClientNum, 200) )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2347, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v6 = DVARBOOL_cl_voice_mute;
  if ( !DVARBOOL_cl_voice_mute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_voice_mute") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled || !Party_IsMemberRegistered(party, listenerClientNum) )
    goto LABEL_18;
  if ( !Party_IsMemberPresent(party, listenerClientNum) )
  {
    v7 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
      Com_Printf(14, "clientNum %i is not yet present in the party\n", (unsigned int)listenerClientNum);
    goto LABEL_18;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
  OurClientNum = Live_GetOurClientNum(ControllerFromClient, party);
  if ( OurClientNum == listenerClientNum || Party_MemberHasLoopbackAddr(party, listenerClientNum) )
  {
LABEL_18:
    v8 = 0i64;
    memset(&point, 0, sizeof(point));
    return v8;
  }
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v4) < CA_PRIMED )
  {
    memset(&point, 0, sizeof(point));
    return CL_CGameMP_ShouldSendPeerVoiceDataPriorToGameState(party, OurClientNum, listenerClientNum);
  }
  if ( (unsigned int)listenerClientNum >= cls.maxClients )
  {
    LODWORD(v74) = cls.maxClients;
    LODWORD(duration) = listenerClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2385, ASSERT_TYPE_ASSERT, "(unsigned)( listenerClientNum ) < (unsigned)( cls.maxClients )", "listenerClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", duration, v74) )
      __debugbreak();
  }
  if ( (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2387, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tAccessing server session, must not be in frontend state", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2390, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType )
  {
    LODWORD(v74) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v74) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v74 = CgStatic::ms_allocatedCount;
    LODWORD(duration) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v74) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v4] )
  {
    LODWORD(v74) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v74) )
      __debugbreak();
  }
  v12 = CgStatic::ms_cgameStaticsArray[v4];
  CharacterInfo = CgStatic::GetCharacterInfo(v12, listenerClientNum);
  *(_QWORD *)result.v = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2395, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !CharacterInfo->infoValid )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
    {
      Xuid = Party_GetXuid((XUID *)&result, party, listenerClientNum);
      v15 = XUID::ToDevString(Xuid);
      Com_Printf(14, "%s (clientNum %i) is !infoValid but registered, most likely preloading the map in the front end\n", v15, (unsigned int)listenerClientNum);
    }
    goto LABEL_18;
  }
  v16 = CgStatic::GetCharacterInfo(v12, LocalClientGlobals->clientNum);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2404, ASSERT_TYPE_ASSERT, "(localPlayer)", (const char *)&queryFormat, "localPlayer") )
    __debugbreak();
  if ( !v16->infoValid )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
      Com_Printf(14, "localPlayer (clientNum %i) is !infoValid!\n", (unsigned int)LocalClientGlobals->clientNum);
    goto LABEL_18;
  }
  if ( !LocalClientGlobals->predictedPlayerState.stats[0] || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)34) || (v77 = 0, GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33)) )
    v77 = 1;
  team = v16->team;
  v82 = team;
  Handler = CgHandler::getHandler((LocalClientNum_t)v4);
  IsGameTypeQuick_BR = BG_IsGameTypeQuick_BR(Handler);
  v20 = 1;
  s_voiceDebugMsg[0] = 0;
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 6 && !IsGameTypeQuick_BR )
    goto LABEL_144;
  m_useSquads = LocalClientGlobals->m_useSquads;
  v79 = Party_AreMembersInSameSubparty(party, LocalClientGlobals->clientNum, listenerClientNum);
  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_proximity_team, "voice_proximity_team");
  v76 = Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_proximity_enemy, "voice_proximity_enemy");
  squadIndex = v12->GetClientInfo(v12, LocalClientGlobals->clientNum)->squadIndex;
  v22 = v12->GetClientInfo(v12, listenerClientNum)->squadIndex;
  v23 = *(_DWORD *)(*(_QWORD *)result.v + 12i64);
  if ( team != v23 || !team || !v23 )
  {
    v24 = 0;
LABEL_66:
    v75 = 0;
    goto LABEL_67;
  }
  v24 = 1;
  if ( !m_useSquads || squadIndex != v22 )
    goto LABEL_66;
  v75 = 1;
LABEL_67:
  Entity = CG_GetEntity((const LocalClientNum_t)v4, listenerClientNum);
  v26 = (Entity->flags & 1) == 0;
  if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
  FunctionPointer_origin(&Entity->pose.origin.origin.origin, &point);
  if ( Entity->pose.isPosePrecise )
  {
    _XMM0 = LODWORD(point.v[0]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v31 = *(double *)&_XMM0 * 0.000244140625;
    _XMM0 = v31;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    point.v[0] = *(float *)&_XMM1;
    _XMM2 = LODWORD(point.v[1]);
    __asm { vcvtdq2pd xmm2, xmm2 }
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v31 = *(double *)&_XMM2 * 0.000244140625;
    _XMM0 = v31;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    point.v[1] = *(float *)&_XMM1;
    _XMM2 = LODWORD(point.v[2]);
    __asm { vcvtdq2pd xmm2, xmm2 }
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v31 = *(double *)&_XMM2 * 0.000244140625;
    _XMM0 = v31;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    point.v[2] = *(float *)&_XMM1;
  }
  v20 = 0;
  v41 = 1;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
  {
    v42 = "Alive";
    if ( v26 )
      v42 = "Dead";
    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v42);
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
  {
    v43 = ", Enemy";
    if ( v24 )
      v43 = ", Teammate";
    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v43);
  }
  if ( m_useSquads && v24 && Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
  {
    v44 = ", Not Squadmate";
    if ( v75 )
      v44 = ", Squadmate";
    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v44);
  }
  v45 = v75;
  if ( !v75 )
  {
    if ( v24 && v79 )
    {
      v41 = 1;
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
      {
LABEL_93:
        v45 = 0;
        goto LABEL_94;
      }
      v46 = ", Private Party Member";
LABEL_92:
      I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v46);
      goto LABEL_93;
    }
    if ( Bool_Internal_DebugName && v24 )
    {
      if ( v26 )
        goto LABEL_105;
      v49 = v77;
      if ( v77 )
        goto LABEL_105;
    }
    else
    {
      v49 = v77;
    }
    v47 = v76;
    if ( !v76 || v24 || !v26 && !v49 )
    {
      if ( (!Bool_Internal_DebugName || !v24) && (!v76 || v24) )
      {
        v45 = 0;
        goto LABEL_95;
      }
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_voice_proximity_radius, "voice_proximity_radius");
      v50 = (float)((float)((float)(point.v[1] - LocalClientGlobals->predictedPlayerState.origin.v[1]) * (float)(point.v[1] - LocalClientGlobals->predictedPlayerState.origin.v[1])) + (float)((float)(point.v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0]) * (float)(point.v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0]))) + (float)((float)(point.v[2] - LocalClientGlobals->predictedPlayerState.origin.v[2]) * (float)(point.v[2] - LocalClientGlobals->predictedPlayerState.origin.v[2]));
      v41 = (float)(int)(Int_Internal_DebugName * Int_Internal_DebugName) >= v50;
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
        goto LABEL_93;
      v51 = (unsigned int)(int)fsqrt(v50);
      v52 = "Out of Range";
      if ( v41 )
        v52 = "In Range";
      v46 = j_va(", %s %i/%i", v52, v51, Int_Internal_DebugName);
      goto LABEL_92;
    }
LABEL_105:
    v41 = 0;
    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
      goto LABEL_93;
    v46 = ", Local player dead";
    if ( v26 )
      v46 = (char *)&queryFormat.fmt + 3;
    goto LABEL_92;
  }
  v41 = 1;
LABEL_94:
  v47 = v76;
LABEL_95:
  if ( v82 || *(_DWORD *)(*(_QWORD *)result.v + 12i64) || !v41 )
  {
    if ( v45 )
    {
      v20 = 1;
      goto LABEL_144;
    }
    if ( v24 && !v41 )
    {
      v20 = 0;
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
        I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, ", Team Proximity Voice Enabled");
      goto LABEL_129;
    }
    v59 = v77;
    if ( v26 == v77 )
    {
      if ( !v24 )
      {
LABEL_159:
        if ( v47 && v41 )
        {
          v20 = 1;
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
            goto LABEL_144;
          v48 = ", Enemy Proximity Voice Enabled";
          goto LABEL_100;
        }
LABEL_163:
        if ( v26 == v77 )
        {
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_chatWithOtherTeams, "cg_chatWithOtherTeams") )
          {
            v20 = 1;
            if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
              goto LABEL_144;
            v48 = ", Same State, cg_chatWithOtherTeams";
            goto LABEL_100;
          }
          v59 = v77;
        }
        if ( v26 && v59 && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_deadChatWithDead, "cg_deadChatWithDead") )
        {
          v20 = 1;
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
            goto LABEL_144;
          v48 = ", Both Dead, cg_deadChatWithDead";
          goto LABEL_100;
        }
        if ( v24 )
        {
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_deadChatWithTeam, "cg_deadChatWithTeam") )
          {
            v20 = 1;
            if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
              goto LABEL_144;
            v48 = ", cg_deadChatWithTeam";
            goto LABEL_100;
          }
          if ( !v26 )
            goto LABEL_188;
          v60 = v77;
          if ( v77 )
          {
LABEL_183:
            if ( v26 && !v60 && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_deadHearAllLiving, "cg_deadHearAllLiving") )
            {
              v20 = 1;
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                goto LABEL_144;
              v48 = ", cg_deadHearAllLiving";
              goto LABEL_100;
            }
LABEL_188:
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_everyoneHearsEveryone, "cg_everyoneHearsEveryone") && v41 )
            {
              v20 = 1;
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                goto LABEL_144;
              v48 = ", cg_everyoneHearsEveryone";
              goto LABEL_100;
            }
            if ( v24 )
              goto LABEL_206;
            if ( v26 )
              goto LABEL_206;
            if ( v77 )
              goto LABEL_206;
            PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x20u);
            v62 = (unsigned int)PerkNetworkPriorityIndex;
            if ( PerkNetworkPriorityIndex < 0 )
              goto LABEL_206;
            if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
            {
              LODWORD(v74) = 64;
              LODWORD(duration) = PerkNetworkPriorityIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", duration, v74) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v62 & 0x1F)) & *(_DWORD *)(*(_QWORD *)result.v + 4 * (v62 >> 5) + 2776)) == 0 )
            {
LABEL_206:
              MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v4);
              if ( CgMLGSpectator::IsClientMLGSpectator(MLGSpectator, (LocalClientNum_t)v4, listenerClientNum) )
              {
                v20 = 1;
                if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                  goto LABEL_144;
                v48 = ", MLG Spectator";
                goto LABEL_100;
              }
            }
            else
            {
              AngleVectors((const vec3_t *)(*(_QWORD *)result.v + 2496i64), &result, NULL, NULL);
              v63 = LocalClientGlobals->predictedPlayerState.origin.v[0] - point.v[0];
              v67 = LODWORD(LocalClientGlobals->predictedPlayerState.origin.v[1]);
              v64 = LocalClientGlobals->predictedPlayerState.origin.v[1] - point.v[1];
              v65 = LocalClientGlobals->predictedPlayerState.origin.v[2] - point.v[2];
              *(float *)&v67 = fsqrt((float)((float)(v64 * v64) + (float)(v63 * v63)) + (float)(v65 * v65));
              _XMM7 = v67;
              __asm
              {
                vcmpless xmm0, xmm7, cs:__real@80000000
                vblendvps xmm1, xmm7, xmm8, xmm0
              }
              v70 = (float)((float)((float)(v64 * (float)(1.0 / *(float *)&_XMM1)) * result.v[1]) + (float)((float)(v63 * (float)(1.0 / *(float *)&_XMM1)) * result.v[0])) + (float)((float)(v65 * (float)(1.0 / *(float *)&_XMM1)) * result.v[2]);
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_parabolicAngle, "perk_parabolicAngle");
              if ( v70 >= cosf_0(*(float *)&_XMM0 * 0.017453292) )
              {
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_parabolicRadius, "perk_parabolicRadius");
                v20 = *(float *)&Float_Internal_DebugName >= *(float *)&v67;
              }
              if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, ", Parabolic Perk");
              if ( v20 )
                goto LABEL_144;
            }
LABEL_129:
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_hearVictimEnabled, "cg_hearVictimEnabled") && listenerClientNum == LocalClientGlobals->recentKilledByClientNum )
            {
              v53 = LocalClientGlobals->time - LocalClientGlobals->recentKilledByTime;
              if ( v53 < Dvar_GetInt_Internal_DebugName(DVARINT_cg_hearVictimTime, "cg_hearVictimTime") )
              {
                if ( LocalClientGlobals->recentKilledByTime )
                {
                  v20 = 1;
                  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, ", cg_hearVictimEnabled");
                }
              }
            }
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_hearKillerEnabled, "cg_hearKillerEnabled") )
            {
              recentVictimTimes = LocalClientGlobals->recentVictimTimes;
              v55 = 8i64;
              do
              {
                if ( listenerClientNum == *(recentVictimTimes - 8) )
                {
                  v56 = LocalClientGlobals->time - *recentVictimTimes;
                  if ( v56 < Dvar_GetInt_Internal_DebugName(DVARINT_cg_hearKillerTime, "cg_hearKillerTime") )
                  {
                    if ( *recentVictimTimes )
                    {
                      v20 = 1;
                      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                        I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, ", cg_hearKillerEnabled");
                    }
                  }
                }
                ++recentVictimTimes;
                --v55;
              }
              while ( v55 );
            }
            if ( !v20 )
              goto LABEL_147;
            goto LABEL_144;
          }
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_deadHearTeamLiving, "cg_deadHearTeamLiving") )
          {
            v20 = 1;
            if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
              goto LABEL_144;
            v48 = ", cg_deadHearTeamLiving";
            goto LABEL_100;
          }
        }
        v60 = v77;
        goto LABEL_183;
      }
      if ( v41 )
      {
        v20 = 1;
        if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
          goto LABEL_144;
        v48 = ", Same State";
        goto LABEL_100;
      }
    }
    if ( v24 )
      goto LABEL_163;
    goto LABEL_159;
  }
  v20 = 1;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
  {
    v48 = ", FFA";
LABEL_100:
    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v48);
  }
LABEL_144:
  GameParty = Live_GetGameParty();
  if ( CL_IsPlayerMuted(GameParty, listenerClientNum) )
  {
    v20 = 0;
    s_voiceDebugMsg[0] = 0;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
      I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, "Muted");
  }
LABEL_147:
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") && CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v4) == CA_ACTIVE )
  {
    v58 = &colorRed;
    if ( v20 )
      v58 = &colorGreen;
    CG_DebugString(&point, v58, 1.0, s_voiceDebugMsg, 0, 0);
  }
  memset(&point, 0, sizeof(point));
  return v20;
}

/*
==============
CL_CGameMP_ShouldSendPeerVoiceDataPriorToGameState
==============
*/
char CL_CGameMP_ShouldSendPeerVoiceDataPriorToGameState(const PartyData *party, const int ourClientNum, const int listenerClientNum)
{
  const dvar_t *v6; 
  const dvar_t *v8; 
  int MemberTeam; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  int MemberSquad; 
  XUID result; 

  if ( CL_IsPlayerMuted(party, listenerClientNum) )
  {
    v6 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      Com_Printf(14, "Not sending voice to client %i since they are muted\n", (unsigned int)listenerClientNum);
      return 0;
    }
    return 0;
  }
  if ( Party_IsGameLobby(party) )
  {
    if ( Party_IsJoiningAGameInProgress(party) )
    {
      if ( DVARBOOL_cl_voice_allow_jip_talking )
      {
        if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_voice_allow_jip_talking, "cl_voice_allow_jip_talking") )
        {
          Party_GetXuid(&result, party, listenerClientNum);
          if ( !Party_IsPlayerInPrivateParty(result) )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
            {
              Com_Printf(14, "Not sending voice to client %i since we are joining a match in progress and have not received game state\n", (unsigned int)listenerClientNum);
              return 0;
            }
            return 0;
          }
        }
      }
    }
    MemberTeam = Party_GetMemberTeam(party, ourClientNum);
    if ( MemberTeam != Party_GetMemberTeam(party, listenerClientNum) )
    {
      v10 = DVARBOOL_voice_debug;
      if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        Com_Printf(14, "Not sending voice to client %i since they are not on our team\n", (unsigned int)listenerClientNum);
        return 0;
      }
      return 0;
    }
    v11 = DVARINT_party_maxSquadSize;
    if ( !DVARINT_party_maxSquadSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxSquadSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.integer > 1 && DVARBOOL_cl_voice_squad_only_in_lobby && Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_voice_squad_only_in_lobby, "cl_voice_squad_only_in_lobby") )
    {
      MemberSquad = Party_GetMemberSquad(party, listenerClientNum);
      if ( MemberSquad == -1 )
      {
        if ( !Party_AreMembersInSameSubparty(party, ourClientNum, listenerClientNum) )
        {
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
            Com_Printf(14, "Not sending voice to client %i since they are not in our private party or squad\n", (unsigned int)listenerClientNum);
          return 0;
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
          Com_Printf(14, "Sending voice to client %i since they are on in our private party\n", (unsigned int)listenerClientNum);
      }
      else
      {
        if ( MemberSquad != Party_GetMemberSquad(party, ourClientNum) )
        {
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
          {
            Com_Printf(14, "Not sending voice to client %i since they are on a different squad\n", (unsigned int)listenerClientNum);
            return 0;
          }
          return 0;
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
          Com_Printf(14, "Sending voice to client %i since they are on same squad\n", (unsigned int)listenerClientNum);
      }
    }
    else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
    {
      Com_Printf(14, "Sending voice to client %i prior to receiving game state (i.e. lobby or loading)\n", (unsigned int)listenerClientNum);
    }
  }
  else
  {
    v8 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
      Com_Printf(14, "Sending voice to client %i since we are not in a game lobby\n", (unsigned int)listenerClientNum);
  }
  return 1;
}

/*
==============
CL_CGameMP_Shutdown
==============
*/
void CL_CGameMP_Shutdown(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int ControllerFromClient; 
  const PartyData *PartyData; 
  int v5; 
  const PartyData *v6; 
  int v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  v2 = v1;
  if ( clientUIActives[v1].cgameInitCalled )
  {
    if ( Live_ShouldTrackConnectionHistory((LocalClientNum_t)v1) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
      if ( !Com_IsGameLocalServerRunningOrLoading() || (PartyData = Lobby_GetPartyData(), v5 = Party_CountMembersEvenIfInactive(PartyData, PARTY_MEMBER_TYPE_PLAYER_ONLY), v5 > Party_CountLocalMembers(PartyData)) )
        Live_ClearNonMigrateableQuit(ControllerFromClient);
    }
    if ( Com_IsGameLocalServerRunningOrLoading() )
    {
      v6 = Lobby_GetPartyData();
      PartyHost_OnMatchEnd(v6);
    }
    CG_MainMP_Shutdown((LocalClientNum_t)v1);
    ATClient_ShutdownNav();
    *(_WORD *)&clientUIActives[v2].cgameInitialized = 0;
  }
  else if ( clientUIActives[v2].cgameInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 665, ASSERT_TYPE_ASSERT, "(!cl->cgameInitialized)", (const char *)&queryFormat, "!cl->cgameInitialized") )
  {
    __debugbreak();
  }
}

/*
==============
CL_CGameMP_StartLoading
==============
*/
void CL_CGameMP_StartLoading(void)
{
  if ( CL_Main_AnyLocalClientsRunning() )
  {
    CL_Main_InitRenderer();
    CL_Main_StartHunkUsers();
  }
}

/*
==============
CL_CGameMP_StreamSyncIsDone
==============
*/
StreamLoadSyncResult CL_CGameMP_StreamSyncIsDone()
{
  const dvar_t *v0; 
  float value; 
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  float outPercentage; 

  v0 = DCONST_DVARFLT_stream_syncMP_imageQuality;
  if ( !DCONST_DVARFLT_stream_syncMP_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_imageQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  value = v0->current.value;
  v2 = DCONST_DVARINT_stream_syncMP_timeoutSeconds;
  if ( !DCONST_DVARINT_stream_syncMP_timeoutSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_timeoutSeconds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( CL_TransientsWorldMP_IsActive() )
  {
    v4 = DVARINT_stream_syncMPTRWorld_maxTimeSeconds;
    if ( !DVARINT_stream_syncMPTRWorld_maxTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMPTRWorld_maxTimeSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = v4->current.integer;
    v6 = DVARINT_stream_syncMPTRWorld_trPortion_maxTimeSeconds;
    if ( !DVARINT_stream_syncMPTRWorld_trPortion_maxTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMPTRWorld_trPortion_maxTimeSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.integer;
  }
  else
  {
    v8 = DVARINT_stream_syncMP_maxTimeSeconds;
    if ( !DVARINT_stream_syncMP_maxTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_maxTimeSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v5 = v8->current.integer;
    v7 = 0;
  }
  return Stream_LoadSync_IsDone(value, integer, v5, v7, &outPercentage);
}

/*
==============
CL_CGameMP_SyncTimes
==============
*/
void CL_CGameMP_SyncTimes(LocalClientNum_t localClientNum)
{
  if ( CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
    CL_CGameMP_FirstSnapshot(localClientNum);
}

/*
==============
CL_CGameMP_UpdateServerTimeDelta
==============
*/
void CL_CGameMP_UpdateServerTimeDelta(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  int serverTimeDelta; 
  int v4; 
  signed int v5; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const char *v10; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  serverTimeDelta = ClientMP->serverTimeDelta;
  v4 = ClientMP->desiredServerTimeDelta - serverTimeDelta;
  v5 = abs32(v4);
  if ( v5 <= 500 )
  {
    if ( v5 > 100 )
    {
      v7 = v4 / 2 + serverTimeDelta;
      ClientMP->serverTimeDelta = v7;
      goto LABEL_19;
    }
    v8 = DVARINT_cl_adjust_time_fast_cutoff;
    if ( !DVARINT_cl_adjust_time_fast_cutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_fast_cutoff") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v5 <= v8->current.integer )
    {
      v9 = DVARINT_cl_adjust_time_slow_adjust;
      if ( !DVARINT_cl_adjust_time_slow_adjust )
      {
        v10 = "cl_adjust_time_slow_adjust";
LABEL_16:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v10) )
          __debugbreak();
      }
    }
    else
    {
      v9 = DVARINT_cl_adjust_time_fast_adjust;
      if ( !DVARINT_cl_adjust_time_fast_adjust )
      {
        v10 = "cl_adjust_time_fast_adjust";
        goto LABEL_16;
      }
    }
    Dvar_CheckFrontendServerThread(v9);
    ClientMP->serverTimeDelta += I_clamp(v4, -v9->current.integer, v9->current.integer);
    v7 = ClientMP->serverTimeDelta;
    goto LABEL_19;
  }
  v6 = DVARINT_cl_adjust_time_throttle_offset;
  if ( !DVARINT_cl_adjust_time_throttle_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_throttle_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = ClientMP->snap.info.serverTime - v6->current.integer - cls.realtime;
  ClientMP->serverTimeDelta = v7;
  ClientMP->desiredServerTimeDelta = v7;
  ClientMP->oldServerTime = v7 + cls.realtime;
  ClientMP->serverTime = v7 + cls.realtime;
LABEL_19:
  if ( v7 != serverTimeDelta )
  {
    CL_LatencyProfileMP_UpdateClientTimeCorrectionErrorMagnitudeHistogram(v5);
    CL_LatencyProfileMP_UpdateClientTimeCorrectionMagnitudeHistogram(abs32(ClientMP->serverTimeDelta - serverTimeDelta));
    Con_TimeNudged(localClientNum, ClientMP->serverTimeDelta - serverTimeDelta);
  }
  CL_CGameMP_AdjustTimeDelta_TrackServerOffset(localClientNum, ClientMP, ClientMP->snap.info.serverTime - ClientMP->desiredServerTimeDelta - cls.realtime);
}

/*
==============
CL_CGameMP_UpdateTargetServerTimeDelta
==============
*/
void CL_CGameMP_UpdateTargetServerTimeDelta(const LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  int v2; 
  const dvar_t *v3; 
  NetBurst *burstState; 
  int v5; 
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  bool v11; 
  int serverTimeDelta; 
  int desiredServerTimeDelta; 
  int realtime; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int m_serverFrameDuration; 
  int v20; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( !ClientMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1295, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v2 = ClientMP->serverTimeDelta + cls.realtime;
  v3 = DVARINT_cl_adjust_time_throttle_offset;
  burstState = ClientMP->burstState;
  if ( !DVARINT_cl_adjust_time_throttle_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_throttle_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v5 = ClientMP->snap.info.serverTime - v3->current.integer;
  v6 = DVARINT_cl_adjust_time_max_buffer;
  realtime = cls.realtime;
  v15 = v5 - v2;
  if ( !DVARINT_cl_adjust_time_max_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_max_buffer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  v8 = DVARINT_cl_adjust_time_throttle_surplus;
  v16 = integer;
  if ( !DVARINT_cl_adjust_time_throttle_surplus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_throttle_surplus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer;
  v10 = DVARINT_cl_adjust_time_max_window;
  v17 = v9;
  v18 = 0;
  if ( !DVARINT_cl_adjust_time_max_window && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_adjust_time_max_window") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v20 = v10->current.integer;
  if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
    __debugbreak();
  m_serverFrameDuration = cls.m_serverFrameDuration;
  v11 = burstState->Update(burstState, (const NetBurst::UpdateParams *)&realtime);
  serverTimeDelta = ClientMP->serverTimeDelta;
  if ( v11 )
  {
    desiredServerTimeDelta = burstState->m_windowMinimum + serverTimeDelta;
  }
  else
  {
    desiredServerTimeDelta = v15 + serverTimeDelta;
    if ( ClientMP->desiredServerTimeDelta < desiredServerTimeDelta )
      desiredServerTimeDelta = ClientMP->desiredServerTimeDelta;
  }
  ClientMP->desiredServerTimeDelta = desiredServerTimeDelta;
}

/*
==============
CL_CGameMP_ValidateEntShutdown
==============
*/
void CL_CGameMP_ValidateEntShutdown(LocalClientNum_t localClientNum, int entnum, centity_t *cent)
{
  __int64 v6; 

  if ( (cent->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1053, ASSERT_TYPE_ASSERT, "(!CENextValid( cent ))", (const char *)&queryFormat, "!CENextValid( cent )") )
    __debugbreak();
  if ( cent->pose.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1054, ASSERT_TYPE_ASSERT, "(cent->pose.eType == ET_GENERAL)", (const char *)&queryFormat, "cent->pose.eType == ET_GENERAL") )
    __debugbreak();
  if ( CG_Pose_IsRagdoll(&cent->pose) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1055, ASSERT_TYPE_ASSERT, "(!CG_Pose_IsRagdoll( &cent->pose ))", (const char *)&queryFormat, "!CG_Pose_IsRagdoll( &cent->pose )") )
    __debugbreak();
  if ( (unsigned int)entnum <= 0x7FE && ScriptableCl_IsReservedScriptableEntity(localClientNum, entnum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1057, ASSERT_TYPE_ASSERT, "(entnum > ENTITYNUM_ORDINARY_END || !ScriptableCl_IsReservedScriptableEntity( localClientNum, entnum ))", (const char *)&queryFormat, "entnum > ENTITYNUM_ORDINARY_END || !ScriptableCl_IsReservedScriptableEntity( localClientNum, entnum )") )
    __debugbreak();
  v6 = 3 * localClientNum;
  if ( CG_PhysicsObject_Get(entnum, localClientNum)->physicsInstances[v6 + 3] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1060, ASSERT_TYPE_ASSERT, "(CG_PhysicsObject_Get( entnum, localClientNum )->physicsInstances[Physics_GetClientAuthoritativeWorldId( localClientNum )] == 0xFFFFFFFF)", (const char *)&queryFormat, "CG_PhysicsObject_Get( entnum, localClientNum )->physicsInstances[Physics_GetClientAuthoritativeWorldId( localClientNum )] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( CG_PhysicsObject_Get(entnum, localClientNum)->physicsInstances[v6 + 2] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1061, ASSERT_TYPE_ASSERT, "(CG_PhysicsObject_Get( entnum, localClientNum )->physicsInstances[Physics_GetClientPredictiveWorldId( localClientNum )] == 0xFFFFFFFF)", (const char *)&queryFormat, "CG_PhysicsObject_Get( entnum, localClientNum )->physicsInstances[Physics_GetClientPredictiveWorldId( localClientNum )] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( CG_PhysicsObject_Get(entnum, localClientNum)->physicsInstances[v6 + 4] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1062, ASSERT_TYPE_ASSERT, "(CG_PhysicsObject_Get( entnum, localClientNum )->physicsInstances[Physics_GetClientDetailWorldId( localClientNum )] == 0xFFFFFFFF)", (const char *)&queryFormat, "CG_PhysicsObject_Get( entnum, localClientNum )->physicsInstances[Physics_GetClientDetailWorldId( localClientNum )] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
}

