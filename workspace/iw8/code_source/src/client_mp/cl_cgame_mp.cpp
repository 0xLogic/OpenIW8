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
  const dvar_t *v11; 
  int v12; 
  int v14; 
  const dvar_t *v24; 

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
  v11 = DCONST_DVARBOOL_deltaTimeAlwaysUseNewAlgorithm;
  if ( !DCONST_DVARBOOL_deltaTimeAlwaysUseNewAlgorithm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeAlwaysUseNewAlgorithm") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
LABEL_15:
    v12 = idealDelta - cl->serverTimeDelta;
    _RDI = DCONST_DVARFLT_deltaTimeMaxCorrectionDisplacement;
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vmovaps [rsp+78h+var_38], xmm7
    }
    v14 = abs32(v12);
    if ( !DCONST_DVARFLT_deltaTimeMaxCorrectionDisplacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeMaxCorrectionDisplacement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_deltaTimeMinCorrectionDisplacement;
    if ( !DCONST_DVARFLT_deltaTimeMinCorrectionDisplacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeMinCorrectionDisplacement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+28h]; min
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx; value
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = ApplyLinearMap(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RDI = DCONST_DVARFLT_deltaTimeMaxCorrectionSpeed;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DCONST_DVARFLT_deltaTimeMaxCorrectionSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeMaxCorrectionSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    v24 = DCONST_DVARFLT_deltaTimeMinCorrectionSpeed;
    if ( !DCONST_DVARFLT_deltaTimeMinCorrectionSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deltaTimeMinCorrectionSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm1, dword ptr [rdi+28h]
      vmulss  xmm0, xmm6, xmm7
      vmovaps xmm7, [rsp+78h+var_38]
      vmovaps xmm6, [rsp+78h+var_28]
      vaddss  xmm1, xmm2, xmm0
      vcvttss2si eax, xmm1
    }
    if ( _EAX <= v14 )
      v14 = _EAX;
    *correction = v14;
    *correctionWhenExtrapolating = v14;
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
  int v20; 
  unsigned int v21; 
  int v22; 
  __int64 v23; 
  unsigned int v24; 
  int v25; 
  std::less<void> v26; 
  int _First[8]; 

  _RBX = cl;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1178, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  snapIntervalCount = 16;
  if ( _RBX->snapIntervalCount < 16 )
    snapIntervalCount = _RBX->snapIntervalCount;
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
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+1FB5Ch]
        vmovups ymm1, ymmword ptr [rbx+1FB7Ch]
        vmovups ymmword ptr [rsp+0B8h+_First], ymm0
        vmovups [rsp+0B8h+var_48], ymm1
      }
      std::_Sort_unchecked<int *,std::less<void>>(_First, &_First[snapIntervalCount], snapIntervalCount, v26);
      return (unsigned int)_First[snapIntervalCount / 2];
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        return (unsigned int)(_RBX->snap.info.serverTime - _RBX->oldSnapServerTime);
      return m_serverFrameDuration;
    }
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0i64;
    if ( snapIntervalCount >= 2i64 )
    {
      v14 = &_RBX->snapInterval[1];
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
      v12 = _RBX->snapInterval[v13];
    return (unsigned int)((v12 + v11 + v10) / snapIntervalCount);
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+1FB5Ch]
      vmovups ymm1, ymmword ptr [rbx+1FB7Ch]
      vmovups ymmword ptr [rsp+0B8h+_First], ymm0
      vmovups [rsp+0B8h+var_48], ymm1
    }
    std::_Sort_unchecked<int *,std::less<void>>(_First, &_First[snapIntervalCount], snapIntervalCount, v26);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    if ( snapIntervalCount <= 0 )
      return m_serverFrameDuration;
    v23 = 0i64;
    do
    {
      v24 = _First[v23];
      v25 = 1;
      if ( v24 == v21 )
        v25 = v20 + 1;
      result = v24;
      v20 = v25;
      if ( v25 <= v22 )
        result = m_serverFrameDuration;
      ++v23;
      m_serverFrameDuration = result;
      if ( v24 == v21 )
        v24 = v21;
      v21 = v24;
      if ( v25 <= v22 )
        v25 = v22;
      v22 = v25;
    }
    while ( v23 < snapIntervalCount );
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
  const ClSnapshot *v7; 
  ClSnapshotState state; 
  int v9; 
  int v10; 

  v2 = localClientNum;
  if ( CL_GetLocalClientGameConnectionState(localClientNum) >= CA_CONNECTED )
  {
    v4 = v2;
    if ( !s_trackExtrapolate[v2].isExtrapolating )
    {
      __asm
      {
        vmovss  xmm0, cs:?com_timescaleValue@@3MA; float com_timescaleValue
        vucomiss xmm0, cs:__real@3f800000
      }
      if ( !s_trackExtrapolate[v2].isExtrapolating && (!s_trackExtrapolate[v2].firstSnapTime || cls.realtime - s_trackExtrapolate[v2].firstSnapTime >= Dvar_GetInt_Internal_DebugName(DVARINT_cl_extrap_tracking_start_time, "cl_extrap_tracking_start_time")) )
      {
        SnapshotForTracking = CL_CGameMP_GetSnapshotForTracking((const LocalClientNum_t)v2, snapshotNumber);
        v7 = SnapshotForTracking;
        if ( SnapshotForTracking )
        {
          state = SnapshotForTracking->state;
          if ( state != BOOL_VALUE )
          {
            v10 = 1;
            v9 = (unsigned __int8)state;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2686, ASSERT_TYPE_ASSERT, "( snap->state ) == ( ClSnapshotState::VALID )", "%s == %s\n\t%i, %i", "snap->state", "ClSnapshotState::VALID", v9, v10) )
              __debugbreak();
          }
          if ( (v7->info.snapFlags & 0x40) == 0 )
          {
            s_trackExtrapolate[v4].lastInterpolatedTime = v7->info.serverTime;
            s_trackExtrapolate[v4].extrapolatePrevSnap = snapshotNumber;
            s_trackExtrapolate[v4].isExtrapolating = 1;
          }
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
  bool v10; 
  BOOL v11; 

  v3 = outputBufSize;
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  serverCommandSequence = CG_GetLocalClientStaticGlobals(localClientNum)->serverCommandSequence;
  v8 = ClientConnectionData->serverCommandSequence - serverCommandSequence;
  if ( v8 <= 0 )
  {
    v10 = 0;
  }
  else
  {
    __asm { vmovss  xmm2, cs:__real@3f4ccccd; memoryRatio }
    v10 = CircularEntryBuffer<512,131072,int,0>::IsNearBufferLimit(&ClientConnectionData->serverReliableCommands, ((_WORD)serverCommandSequence + 1) & 0x1FF, *(const float *)&_XMM2);
  }
  v11 = ScriptableCl_IsNearChangeQueueOverflow(localClientNum);
  Com_sprintf_truncate(outputBuf, v3, "%d / %d cmd. %d buf %d sbl", (unsigned int)v8, 409, v10, v11);
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
      if ( s_trackExtrapolate[v3].isExtrapolating )
      {
        __asm
        {
          vmovss  xmm0, cs:?com_timescaleValue@@3MA; float com_timescaleValue
          vucomiss xmm0, cs:__real@3f800000
        }
        if ( !s_trackExtrapolate[v3].isExtrapolating && CL_CGameMP_GetSnapshotForTracking((const LocalClientNum_t)v3, extrapolatePrevSnap) && CL_CGameMP_GetSnapshotForTracking((const LocalClientNum_t)v3, snapshotNumber) )
          s_trackExtrapolate[v3].lastExtrapolatedTime = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3)->time;
      }
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
  unsigned int v9; 
  int v10; 
  int v11; 
  bool v12; 
  int serverTime; 
  int v14; 
  int ControllerFromClient; 
  __int64 v16; 
  __int64 v17; 
  char v18; 

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
    __asm { vmovss  xmm2, cs:__real@3f4ccccd; memoryRatio }
    v9 = ((_WORD)serverCommandSequence + 1) & 0x1FF;
    if ( CircularEntryBuffer<512,131072,int,0>::IsNearBufferLimit(&ClientConnectionData->serverReliableCommands, v9, *(const float *)&_XMM2) )
    {
      Com_PrintWarning(14, "CL_CGameMP_IsNearReliableCommandOverflow: Near the reliable command buffer limit (%i pending).\n", (unsigned int)(ClientConnectionData->serverCommandSequence - LocalClientStaticGlobals->serverCommandSequence));
      v4 = 1;
      goto LABEL_15;
    }
    if ( (ClientConnectionData->serverReliableCommands.m_bufferNextIndex - ClientConnectionData->serverReliableCommands.m_entries[v9].offset > 0x20000 || !ClientConnectionData->serverReliableCommands.m_entries[v9].size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 1742, ASSERT_TYPE_ASSERT, "(clcData->serverReliableCommands.IsDataAvailable( gameNextSequenceIndex ))", "%s\n\tSomething failed in the detection above, we ended up with an invalid reliable command", "clcData->serverReliableCommands.IsDataAvailable( gameNextSequenceIndex )") )
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
    v10 = 1;
    if ( v4 )
    {
      Com_Printf(35, "CL_CGameMP_CheckStreaming: Skipped, forceCompletion detected\n");
    }
    else
    {
      LOBYTE(v11) = CL_CGameMP_StreamSyncIsDone();
      v10 = v11;
      if ( !v11 )
      {
        Com_GameStart_FirstSnapshotStreaming();
        return;
      }
    }
    DB_LoadTimes_StreamSyncMPFinished(v10 == 1);
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
  v12 = !CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v1);
  Sys_Print("Setting state to CA_ACTIVE in CL_CGameMP_FirstSnapshot\n");
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v16) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, 2) )
      __debugbreak();
  }
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v1].connectionState, 9i64);
  clientUIActives[v1].connectionState = CA_ACTIVE;
  if ( v12 )
  {
    v18 = 37;
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
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
        *(float *)&v17 = cl_maxLocalClients;
        LODWORD(v16) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
        __debugbreak();
      if ( !ClConnection::ms_connections[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      ClConnection::ms_connections[v1]->AddReliableBinaryCommand(ClConnection::ms_connections[v1], (const unsigned __int8 *)&v18, 1);
    }
  }
  ClientConnectionData->isServerRestarting = 0;
  g_waitingForServer = 0;
  serverTime = ClientMP->snap.info.serverTime;
  ClientMP->serverTime = serverTime;
  v14 = serverTime - cls.realtime;
  ClientMP->serverTimeDelta = serverTime - cls.realtime;
  ClientMP->desiredServerTimeDelta = v14;
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
  __int64 v23; 
  unsigned int v28; 
  bool v29; 
  unsigned int maxEntitiesInSnapshotForClient; 
  const char *v31; 
  __int64 v32; 
  __int64 number; 
  __int64 v51; 
  __int64 v69; 
  char *v70; 
  unsigned int maxClients; 
  unsigned int v72; 
  clientState_t *clients; 
  __int64 v74; 
  __int64 v77; 
  unsigned int maxAgents; 
  unsigned int v89; 
  __int64 v117; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  char v122[2048]; 

  _R14 = snapshot;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  if ( snapshotNumber > ClientMP->snap.messageNum )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14420E8C0, 993i64);
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(localClientNum);
  v8 = 0i64;
  if ( ClientConnectionMP->m_packetBackupCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", ClientConnectionMP->m_packetBackupCount, 0i64) )
    __debugbreak();
  if ( ClientConnectionMP->m_packetBackupCount <= 0 )
  {
    LODWORD(v119) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v119, 0i64) )
      __debugbreak();
    LODWORD(v120) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 192, ASSERT_TYPE_ASSERT, "( clc->GetPacketBackupCount() ) > ( 0 )", "%s > %s\n\t%i, %i", "clc->GetPacketBackupCount()", "0", v120, 0i64) )
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
  _R14->snapFlags = *(_DWORD *)(v9 + 94468);
  _R14->serverCommandSequence = *(_DWORD *)(v9 + 94592);
  _R14->ping = *(_DWORD *)(v9 + 94484);
  _R14->serverTime = *(_DWORD *)(v9 + 94472);
  memcpy_0(&_R14->ps, (const void *)v9, sizeof(_R14->ps));
  memcpy_0(&_R14->scores, (const void *)(v9 + 21412), sizeof(_R14->scores));
  memcpy_0(&_R14->streamSync, (const void *)(v9 + 27432), sizeof(_R14->streamSync));
  v15 = BG_Omnvar_PerSnapCount();
  parseOmnvars = ClientMP->parseOmnvars;
  v17 = 8i64 * v15;
  v18 = BG_Omnvar_PerSnapCount();
  memcpy_0(_R14->omnvars, &parseOmnvars[v18 * (*(_QWORD *)(v9 + 94544) % (__int64)ClientMP->parseOmnvarsCount)], v17);
  v19 = *(unsigned int *)(v9 + 94512);
  if ( (unsigned int)v19 > BgWeaponMap::GetRuntimeSize() )
  {
    LODWORD(v119) = BgWeaponMap::GetRuntimeSize();
    LODWORD(v117) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 284, ASSERT_TYPE_ASSERT, "( 0 ) <= ( count ) && ( count ) <= ( BgWeaponMap::GetRuntimeSize() )", "count not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v117, 0i64, v119) )
      __debugbreak();
  }
  _R14->numWeapons = v19;
  v20 = 0i64;
  v21 = v19;
  if ( (_DWORD)v19 )
  {
    _RBX = _R14->weapons;
    do
    {
      v23 = (v20 + *(_QWORD *)(v9 + 94552)) % ClientMP->parseWeaponMapEntriesCount;
      if ( (unsigned int)v23 >= ClientMP->parseWeaponMapEntriesCount )
      {
        LODWORD(v118) = ClientMP->parseWeaponMapEntriesCount;
        LODWORD(v117) = (v20 + *(_QWORD *)(v9 + 94552)) % (unsigned int)v118;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 289, ASSERT_TYPE_ASSERT, "(unsigned)( bufIdx ) < (unsigned)( cl->parseWeaponMapEntriesCount )", "bufIdx doesn't index cl->parseWeaponMapEntriesCount\n\t%i not in [0, %i)", v117, v118) )
          __debugbreak();
      }
      ++v20;
      _RDX = (__int64)&ClientMP->parseWeaponMapEntries[v23];
      __asm
      {
        vmovups ymm0, ymmword ptr [rdx]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmm1, xmmword ptr [rdx+20h]
        vmovups xmmword ptr [rbx+20h], xmm1
        vmovsd  xmm0, qword ptr [rdx+30h]
        vmovsd  qword ptr [rbx+30h], xmm0
      }
      *(_DWORD *)&_RBX->weapon.attachmentVariationIndices[27] = *(_DWORD *)(_RDX + 56);
      *(_WORD *)&_RBX->weapon.scopeVariation = *(_WORD *)(_RDX + 60);
      ++_RBX;
    }
    while ( v20 < v21 );
    _R14 = snapshot;
  }
  v28 = *(_DWORD *)(v9 + 94500);
  v29 = (_R14->snapFlags & 8) != 0;
  if ( !cls.maxEntitiesInSnapshotForClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 297, ASSERT_TYPE_ASSERT, "(cls.maxEntitiesInSnapshotForClient)", (const char *)&queryFormat, "cls.maxEntitiesInSnapshotForClient") )
    __debugbreak();
  maxEntitiesInSnapshotForClient = cls.maxEntitiesInSnapshotForClient;
  if ( v29 )
    maxEntitiesInSnapshotForClient = cls.maxNoDeltaEntities;
  if ( v28 > maxEntitiesInSnapshotForClient )
  {
    if ( com_statmon->current.enabled )
    {
      v31 = j_va("Snapshot sent %i entities - max %i", v28, maxEntitiesInSnapshotForClient);
      StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SNAPSHOTENTS, 3000, v31, v28);
      Com_PrintError(1, "Too many client entities in snapshot ignoring remaining %d > %d.\n", v28, maxEntitiesInSnapshotForClient);
    }
    else
    {
      Com_DPrintf(14, "CL_GetSnapshot: truncated %i entities to %i\n", v28, maxEntitiesInSnapshotForClient);
    }
    v28 = maxEntitiesInSnapshotForClient;
  }
  _R14->numEntities = v28;
  memset_0(v122, 0, sizeof(v122));
  v32 = v28;
  if ( v29 )
  {
    if ( v28 != cls.nextNoDeltaEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( static_cast<SnapshotEntryIndex>(count) ) == ( cls.nextNoDeltaEntity )", "%s == %s\n\t%lli, %lli", "static_cast<SnapshotEntryIndex>(count)", "cls.nextNoDeltaEntity", v28, cls.nextNoDeltaEntity) )
      __debugbreak();
    if ( !v28 )
      goto LABEL_77;
    _RDI = _R14->entities;
    do
    {
      _RAX = (char *)&_RDI[-86] + (unsigned __int64)cls.noDeltaEntities - (_QWORD)_R14 - 124;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rdi], xmm0
        vmovups xmm1, xmmword ptr [rax+10h]
        vmovups xmmword ptr [rdi+10h], xmm1
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rdi+20h], xmm0
        vmovups xmm1, xmmword ptr [rax+30h]
        vmovups xmmword ptr [rdi+30h], xmm1
        vmovups xmm0, xmmword ptr [rax+40h]
        vmovups xmmword ptr [rdi+40h], xmm0
        vmovups xmm1, xmmword ptr [rax+50h]
        vmovups xmmword ptr [rdi+50h], xmm1
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rdi+60h], xmm0
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [rdi+70h], xmm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rdi+80h], xmm0
        vmovups xmm1, xmmword ptr [rax+90h]
        vmovups xmmword ptr [rdi+90h], xmm1
        vmovups xmm0, xmmword ptr [rax+0A0h]
        vmovups xmmword ptr [rdi+0A0h], xmm0
        vmovups xmm1, xmmword ptr [rax+0B0h]
        vmovups xmmword ptr [rdi+0B0h], xmm1
        vmovups xmm0, xmmword ptr [rax+0C0h]
        vmovups xmmword ptr [rdi+0C0h], xmm0
        vmovups xmm1, xmmword ptr [rax+0D0h]
        vmovups xmmword ptr [rdi+0D0h], xmm1
        vmovups xmm0, xmmword ptr [rax+0E0h]
        vmovups xmmword ptr [rdi+0E0h], xmm0
      }
      *(_QWORD *)&_RDI->partBits.array[6] = *((_QWORD *)_RAX + 30);
      number = _RDI->number;
      if ( (unsigned int)number > 0x7FF )
      {
        LODWORD(v117) = _RDI->number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 333, ASSERT_TYPE_ASSERT, "( ( (number >= 0 && number < ( 2048 )) ) )", "( number ) = %i", v117) )
          __debugbreak();
      }
      if ( v122[number] )
      {
        LODWORD(v118) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 334, ASSERT_TYPE_ASSERT, "(!entityFound[number])", "%s\n\tEntityNum %i was found twice in this snapshot", "!entityFound[number]", v118) )
          __debugbreak();
      }
      ++_RDI;
      v122[number] = 1;
      --v32;
    }
    while ( v32 );
    goto LABEL_76;
  }
  v51 = 0i64;
  if ( v28 )
  {
    _R13 = _R14->entities;
    do
    {
      _RAX = (__int64)&ClientMP->parseEntities[(v51 + *(_QWORD *)(v9 + 94520)) % ClientMP->parseEntitiesCount];
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [r13+0], xmm0
        vmovups xmm1, xmmword ptr [rax+10h]
        vmovups xmmword ptr [r13+10h], xmm1
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [r13+20h], xmm0
        vmovups xmm1, xmmword ptr [rax+30h]
        vmovups xmmword ptr [r13+30h], xmm1
        vmovups xmm0, xmmword ptr [rax+40h]
        vmovups xmmword ptr [r13+40h], xmm0
        vmovups xmm1, xmmword ptr [rax+50h]
        vmovups xmmword ptr [r13+50h], xmm1
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [r13+60h], xmm0
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [r13+70h], xmm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [r13+80h], xmm0
        vmovups xmm1, xmmword ptr [rax+90h]
        vmovups xmmword ptr [r13+90h], xmm1
        vmovups xmm0, xmmword ptr [rax+0A0h]
        vmovups xmmword ptr [r13+0A0h], xmm0
        vmovups xmm1, xmmword ptr [rax+0B0h]
        vmovups xmmword ptr [r13+0B0h], xmm1
        vmovups xmm0, xmmword ptr [rax+0C0h]
        vmovups xmmword ptr [r13+0C0h], xmm0
        vmovups xmm1, xmmword ptr [rax+0D0h]
        vmovups xmmword ptr [r13+0D0h], xmm1
        vmovups xmm0, xmmword ptr [rax+0E0h]
        vmovups xmmword ptr [r13+0E0h], xmm0
      }
      *(_QWORD *)&_R13->partBits.array[6] = *(_QWORD *)(_RAX + 240);
      v69 = _R13->number;
      if ( (unsigned int)v69 > 0x7FF )
      {
        LODWORD(v117) = _R13->number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 347, ASSERT_TYPE_ASSERT, "( ( (number >= 0 && number < ( 2048 )) ) )", "( number ) = %i", v117) )
          __debugbreak();
      }
      v70 = &v122[v69];
      if ( v122[v69] )
      {
        LODWORD(v118) = v69;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 348, ASSERT_TYPE_ASSERT, "(!entityFound[number])", "%s\n\tEntityNum %i was found twice in this snapshot", "!entityFound[number]", v118) )
          __debugbreak();
        v70 = &v122[v69];
      }
      ++v51;
      *v70 = 1;
      ++_R13;
    }
    while ( v51 < v32 );
LABEL_76:
    _R14 = snapshot;
    v8 = 0i64;
  }
LABEL_77:
  _R14->entitiesLoD.array[0] = *(_DWORD *)(v9 + 94600);
  _R14->entitiesLoD.array[1] = *(_DWORD *)(v9 + 94604);
  _R14->entitiesLoD.array[2] = *(_DWORD *)(v9 + 94608);
  _R14->entitiesLoD.array[3] = *(_DWORD *)(v9 + 94612);
  _R14->entitiesLoD.array[4] = *(_DWORD *)(v9 + 94616);
  _R14->entitiesLoD.array[5] = *(_DWORD *)(v9 + 94620);
  _R14->entitiesLoD.array[6] = *(_DWORD *)(v9 + 94624);
  _R14->entitiesLoD.array[7] = *(_DWORD *)(v9 + 94628);
  _R14->entitiesLoD.array[8] = *(_DWORD *)(v9 + 94632);
  _R14->entitiesLoD.array[9] = *(_DWORD *)(v9 + 94636);
  _R14->entitiesLoD.array[10] = *(_DWORD *)(v9 + 94640);
  _R14->entitiesLoD.array[11] = *(_DWORD *)(v9 + 94644);
  _R14->entitiesLoD.array[12] = *(_DWORD *)(v9 + 94648);
  _R14->entitiesLoD.array[13] = *(_DWORD *)(v9 + 94652);
  _R14->entitiesLoD.array[14] = *(_DWORD *)(v9 + 94656);
  _R14->entitiesLoD.array[15] = *(_DWORD *)(v9 + 94660);
  _R14->entitiesLoD.array[16] = *(_DWORD *)(v9 + 94664);
  _R14->entitiesLoD.array[17] = *(_DWORD *)(v9 + 94668);
  _R14->entitiesLoD.array[18] = *(_DWORD *)(v9 + 94672);
  _R14->entitiesLoD.array[19] = *(_DWORD *)(v9 + 94676);
  _R14->entitiesLoD.array[20] = *(_DWORD *)(v9 + 94680);
  _R14->entitiesLoD.array[21] = *(_DWORD *)(v9 + 94684);
  _R14->entitiesLoD.array[22] = *(_DWORD *)(v9 + 94688);
  _R14->entitiesLoD.array[23] = *(_DWORD *)(v9 + 94692);
  _R14->entitiesLoD.array[24] = *(_DWORD *)(v9 + 94696);
  _R14->entitiesLoD.array[25] = *(_DWORD *)(v9 + 94700);
  _R14->entitiesLoD.array[26] = *(_DWORD *)(v9 + 94704);
  _R14->entitiesLoD.array[27] = *(_DWORD *)(v9 + 94708);
  _R14->entitiesLoD.array[28] = *(_DWORD *)(v9 + 94712);
  _R14->entitiesLoD.array[29] = *(_DWORD *)(v9 + 94716);
  _R14->entitiesLoD.array[30] = *(_DWORD *)(v9 + 94720);
  _R14->entitiesLoD.array[31] = *(_DWORD *)(v9 + 94724);
  _R14->entitiesLoD.array[32] = *(_DWORD *)(v9 + 94728);
  _R14->entitiesLoD.array[33] = *(_DWORD *)(v9 + 94732);
  _R14->entitiesLoD.array[34] = *(_DWORD *)(v9 + 94736);
  _R14->entitiesLoD.array[35] = *(_DWORD *)(v9 + 94740);
  _R14->entitiesLoD.array[36] = *(_DWORD *)(v9 + 94744);
  _R14->entitiesLoD.array[37] = *(_DWORD *)(v9 + 94748);
  _R14->entitiesLoD.array[38] = *(_DWORD *)(v9 + 94752);
  _R14->entitiesLoD.array[39] = *(_DWORD *)(v9 + 94756);
  _R14->entitiesLoD.array[40] = *(_DWORD *)(v9 + 94760);
  _R14->entitiesLoD.array[41] = *(_DWORD *)(v9 + 94764);
  _R14->entitiesLoD.array[42] = *(_DWORD *)(v9 + 94768);
  _R14->entitiesLoD.array[43] = *(_DWORD *)(v9 + 94772);
  _R14->entitiesLoD.array[44] = *(_DWORD *)(v9 + 94776);
  _R14->entitiesLoD.array[45] = *(_DWORD *)(v9 + 94780);
  _R14->entitiesLoD.array[46] = *(_DWORD *)(v9 + 94784);
  _R14->entitiesLoD.array[47] = *(_DWORD *)(v9 + 94788);
  _R14->entitiesLoD.array[48] = *(_DWORD *)(v9 + 94792);
  _R14->entitiesLoD.array[49] = *(_DWORD *)(v9 + 94796);
  _R14->entitiesLoD.array[50] = *(_DWORD *)(v9 + 94800);
  _R14->entitiesLoD.array[51] = *(_DWORD *)(v9 + 94804);
  _R14->entitiesLoD.array[52] = *(_DWORD *)(v9 + 94808);
  _R14->entitiesLoD.array[53] = *(_DWORD *)(v9 + 94812);
  _R14->entitiesLoD.array[54] = *(_DWORD *)(v9 + 94816);
  _R14->entitiesLoD.array[55] = *(_DWORD *)(v9 + 94820);
  _R14->entitiesLoD.array[56] = *(_DWORD *)(v9 + 94824);
  _R14->entitiesLoD.array[57] = *(_DWORD *)(v9 + 94828);
  _R14->entitiesLoD.array[58] = *(_DWORD *)(v9 + 94832);
  _R14->entitiesLoD.array[59] = *(_DWORD *)(v9 + 94836);
  _R14->entitiesLoD.array[60] = *(_DWORD *)(v9 + 94840);
  _R14->entitiesLoD.array[61] = *(_DWORD *)(v9 + 94844);
  _R14->entitiesLoD.array[62] = *(_DWORD *)(v9 + 94848);
  _R14->entitiesLoD.array[63] = *(_DWORD *)(v9 + 94852);
  maxClients = cls.maxClients;
  v72 = *(_DWORD *)(v9 + 94504);
  if ( (unsigned int)(cls.maxClients - 1) > 0xC7 )
  {
    LODWORD(v119) = 200;
    LODWORD(v118) = 1;
    LODWORD(v117) = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 360, ASSERT_TYPE_ASSERT, "( 1 ) <= ( cls.maxClients ) && ( cls.maxClients ) <= ( 200 )", "cls.maxClients not in [1, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", v117, v118, v119) )
      __debugbreak();
    maxClients = cls.maxClients;
  }
  clients = _R14->clients;
  if ( v72 > maxClients )
    v72 = maxClients;
  memset_0(_R14->clients, 170, sizeof(_R14->clients));
  _R14->numClients = v72;
  v74 = 0i64;
  if ( v72 )
  {
    do
    {
      _RDX = clients;
      _RAX = (__int64)&ClientMP->parseClients[(v74 + *(_QWORD *)(v9 + 94528)) % ClientMP->parseClientsCount];
      v77 = 3i64;
      do
      {
        _RDX = (clientState_t *)((char *)_RDX + 128);
        __asm { vmovups xmm0, xmmword ptr [rax] }
        _RAX += 128i64;
        __asm
        {
          vmovups xmmword ptr [rdx-80h], xmm0
          vmovups xmm1, xmmword ptr [rax-70h]
          vmovups xmmword ptr [rdx-70h], xmm1
          vmovups xmm0, xmmword ptr [rax-60h]
          vmovups xmmword ptr [rdx-60h], xmm0
          vmovups xmm1, xmmword ptr [rax-50h]
          vmovups xmmword ptr [rdx-50h], xmm1
          vmovups xmm0, xmmword ptr [rax-40h]
          vmovups xmmword ptr [rdx-40h], xmm0
          vmovups xmm1, xmmword ptr [rax-30h]
          vmovups xmmword ptr [rdx-30h], xmm1
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rdx-20h], xmm0
          vmovups xmm1, xmmword ptr [rax-10h]
          vmovups xmmword ptr [rdx-10h], xmm1
        }
        --v77;
      }
      while ( v77 );
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rdx], xmm0
      }
      ++v74;
      ++clients;
      *(_QWORD *)&_RDX->doNotSimulateTracers = *(_QWORD *)(_RAX + 16);
    }
    while ( v74 < v72 );
  }
  _RBX = _R14->agents;
  memset_0(_R14->agents, 187, sizeof(_R14->agents));
  maxAgents = cls.maxAgents;
  v89 = *(_DWORD *)(v9 + 94508);
  if ( cls.maxAgents > 0x30u )
  {
    LODWORD(v119) = 48;
    LODWORD(v117) = cls.maxAgents;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 391, ASSERT_TYPE_ASSERT, "( 0 ) <= ( cls.maxAgents ) && ( cls.maxAgents ) <= ( 48 )", "cls.maxAgents not in [0, MAX_AGENTS_MP]\n\t%i not in [%i, %i]", v117, 0i64, v119) )
      __debugbreak();
    maxAgents = cls.maxAgents;
  }
  if ( v89 > maxAgents )
    v89 = maxAgents;
  _R14->numAgents = v89;
  if ( v89 )
  {
    do
    {
      ++_RBX;
      _RAX = v8 + *(_QWORD *)(v9 + 94536);
      ++v8;
      *((_QWORD *)&_RAX + 1) = &ClientMP->parseAgents[_RAX % ClientMP->parseAgentsCount];
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx]
        vmovups xmmword ptr [rbx-0FCh], xmm0
        vmovups xmm1, xmmword ptr [rdx+10h]
        vmovups xmmword ptr [rbx-0ECh], xmm1
        vmovups xmm0, xmmword ptr [rdx+20h]
        vmovups xmmword ptr [rbx-0DCh], xmm0
        vmovups xmm1, xmmword ptr [rdx+30h]
        vmovups xmmword ptr [rbx-0CCh], xmm1
        vmovups xmm0, xmmword ptr [rdx+40h]
        vmovups xmmword ptr [rbx-0BCh], xmm0
        vmovups xmm1, xmmword ptr [rdx+50h]
        vmovups xmmword ptr [rbx-0ACh], xmm1
        vmovups xmm0, xmmword ptr [rdx+60h]
        vmovups xmmword ptr [rbx-9Ch], xmm0
        vmovups xmm1, xmmword ptr [rdx+70h]
        vmovups xmmword ptr [rbx-8Ch], xmm1
        vmovups xmm0, xmmword ptr [rdx+80h]
        vmovups xmmword ptr [rbx-7Ch], xmm0
        vmovups xmm1, xmmword ptr [rdx+90h]
        vmovups xmmword ptr [rbx-6Ch], xmm1
        vmovups xmm0, xmmword ptr [rdx+0A0h]
        vmovups xmmword ptr [rbx-5Ch], xmm0
        vmovups xmm1, xmmword ptr [rdx+0B0h]
        vmovups xmmword ptr [rbx-4Ch], xmm1
        vmovups xmm0, xmmword ptr [rdx+0C0h]
        vmovups xmmword ptr [rbx-3Ch], xmm0
        vmovups xmm1, xmmword ptr [rdx+0D0h]
        vmovups xmmword ptr [rbx-2Ch], xmm1
        vmovups xmm0, xmmword ptr [rdx+0E0h]
        vmovups xmmword ptr [rbx-1Ch], xmm0
      }
      *(_QWORD *)&_RBX[-1].serverDobjHeldWeapon.m_mapEntryId = *(_QWORD *)(*((_QWORD *)&_RAX + 1) + 240i64);
      *(_DWORD *)&_RBX[-1].serverDobjHideWeapon = *(_DWORD *)(*((_QWORD *)&_RAX + 1) + 248i64);
    }
    while ( v8 < v89 );
  }
  _R14->scriptableChangeStartSequence = *(_QWORD *)(v9 + 94568);
  _R14->scriptableChangeEndSequence = *(_QWORD *)(v9 + 94576);
  _R14->scriptablePartsChecksum = *(_DWORD *)(v9 + 94588);
  _R14->scriptableInstanceChecksum = *(_DWORD *)(v9 + 94584);
  _RAX = ClientMP->parseUmbraGateStates;
  _RCX = 6 * (*(_QWORD *)(v9 + 94560) % (__int64)ClientMP->parseUmbraGateStatesCount);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rcx*8]
    vmovups ymmword ptr [r14+0BA6A4h], ymm0
    vmovups xmm1, xmmword ptr [rax+rcx*8+20h]
    vmovups xmmword ptr [r14+0BA6C4h], xmm1
  }
  if ( ClientMP->parseScriptedCameraCount )
  {
    if ( !ClientMP->parseScriptedCameras && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 416, ASSERT_TYPE_ASSERT, "(cl->parseScriptedCameras)", (const char *)&queryFormat, "cl->parseScriptedCameras") )
      __debugbreak();
    _RAX = ClientMP->parseScriptedCameras;
    _RCX = (__int64)(*(_DWORD *)(v9 + 94596) % ClientMP->parseScriptedCameraCount) << 7;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+rax]
      vmovups ymmword ptr [r14+0BA6D4h], ymm0
      vmovups ymm1, ymmword ptr [rcx+rax+20h]
      vmovups ymmword ptr [r14+0BA6F4h], ymm1
      vmovups ymm0, ymmword ptr [rcx+rax+40h]
      vmovups ymmword ptr [r14+0BA714h], ymm0
      vmovups ymm1, ymmword ptr [rcx+rax+60h]
      vmovups ymmword ptr [r14+0BA734h], ymm1
    }
  }
  else
  {
    memset_0(&_R14->scriptedCameraState, 0, sizeof(_R14->scriptedCameraState));
  }
  memcpy_0(_R14->mlgSpectatorClientInfo, (const void *)(v9 + 51264), sizeof(_R14->mlgSpectatorClientInfo));
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
  __int64 v2; 
  int ControllerFromClient; 
  char v4; 
  const PartyData *PartyData; 
  const char *ConfigString; 
  const char *v7; 
  int v8; 
  int MapIndex; 
  int MapSource; 
  __int64 v11; 
  ClConnectionDataMP *ClientConnectionData; 
  HunkUser *HunkUser; 
  unsigned __int8 ActiveGameMode; 
  int v19; 
  Online_AAR *Instance; 
  __int64 v21; 
  __int64 v22; 
  PartyActiveClient outPartyActiveClient; 

  v2 = localClientNum;
  Sys_Milliseconds();
  ClActiveClientMP::GetClientMP((const LocalClientNum_t)v2);
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, 2) )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v22) = 2;
    LODWORD(v21) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  v4 = clientUIActives[v2].frontEndSceneState[0];
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  if ( !v4 )
  {
    Con_Close((LocalClientNum_t)v2);
    Live_SetCurrentMapname(cls.m_activeGameMapName);
    Live_SetGametype(ControllerFromClient, cls.m_activeGameTypeName);
    PartyData = Lobby_GetPartyData();
    if ( Party_GetSecondaryActiveClient(PartyData, &outPartyActiveClient) )
      Live_SetGametype(outPartyActiveClient.localControllerIndex, cls.m_activeGameTypeName);
  }
  if ( Live_ShouldTrackConnectionHistory((LocalClientNum_t)v2) )
  {
    Live_IncrementGameCount(ControllerFromClient);
    Live_TrackNonMigrateableQuitBeginGame(ControllerFromClient);
    Live_TrackMigrateableQuitBeginGame(ControllerFromClient);
    Live_ForceFlushPlayerData(ControllerFromClient);
  }
  if ( !Com_IsAnyLocalServerRunning() )
  {
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 834, ASSERT_TYPE_ASSERT, "(isGameServer)", (const char *)&queryFormat, "isGameServer") )
      __debugbreak();
    Dvar_SetString_Internal(DVARSTR_ui_mapname, cls.m_activeGameMapName);
    Dvar_SetString_Internal(DVARSTR_ui_gametype, cls.m_activeGameTypeName);
    ConfigString = CL_GetConfigString(528);
    v7 = Dvar_InfoValueForKey(ConfigString, "LOMTKQTRTM");
    v8 = atoi(v7);
    Dvar_SetBoolByName("LOMTKQTRTM", v8 != 0);
  }
  if ( !v4 )
  {
    MapIndex = Live_GetMapIndex(cls.m_activeGameMapName);
    MapSource = Live_GetMapSource(MapIndex);
    if ( !Content_DoWeHaveContentPack(MapSource) )
      UI_MissingMapError();
  }
  if ( !CL_MainMP_WasMapAlreadyLoaded((LocalClientNum_t)v2) )
  {
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 855, ASSERT_TYPE_ASSERT, "(isGameServer)", (const char *)&queryFormat, "isGameServer") )
      __debugbreak();
    Com_InitDObj();
    DB_LoadLevelXAssets(cls.m_activeGameMapName, 0, 0);
  }
  Com_Printf(14, "Setting state to CA_LOADING in CL_CGameMP_Init\n");
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v22) = 2;
    LODWORD(v21) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v2].connectionState, 7i64);
  v11 = v2;
  clientUIActives[v2].connectionState = CA_LOADING;
  *(_QWORD *)&s_trackExtrapolate[v11].isExtrapolating = 0i64;
  *(_QWORD *)&s_trackExtrapolate[v11].extrapolatePrevSnap = 0i64;
  s_trackExtrapolate[v11].lastExtrapolatedTime = 0;
  CL_MainMP_GamePostMapMemoryAllocate();
  clientUIActives[v2].cgameInitCalled = 1;
  cl_serverLoadingMap = 0;
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v2);
  HunkUser = CL_Main_GetHunkUser();
  CG_MainMP_Init((LocalClientNum_t)v2, ClientConnectionData->serverMessageSequence, ClientConnectionData->lastExecutedServerCommand, ClientConnectionData->clientNum, HunkUser);
  clientUIActives[v2].cgameInitialized = 1;
  if ( !v4 )
    R_BeginRemoteScreenUpdate();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CL_CGameMP_Init Remote Screen");
  Com_Printf(14, "Setting state to CA_PRIMED in CL_CGameMP_Init\n");
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v22) = 2;
    LODWORD(v21) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", (unsigned int)clientUIActives[v2].connectionState, 8i64);
  clientUIActives[v2].connectionState = CA_PRIMED;
  Sys_Milliseconds();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, eax
    vmulsd  xmm2, xmm0, cs:__real@3f50624dd2f1a9fc
    vmovq   r8, xmm2
  }
  Com_Printf(14, "CL_CGameMP_Init: %5.2f seconds\n", *(double *)&_XMM2);
  R_EndRegistration();
  if ( !v4 )
  {
    Con_ClearNotify((LocalClientNum_t)v2);
    Con_InitConfig((const LocalClientNum_t)v2, "console_mp.cfg");
    Con_InitMessageBuffer();
    Con_InitGameMsgChannels();
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    CL_Main_ReInitDevGUI((GameModeType)ActiveGameMode);
    v19 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
    if ( GamerProfile_GetGamepadEnabled(v19) )
      GamerProfile_ExecControllerBindings(v19);
  }
  Sys_ProfEndNamedEvent();
  if ( v4 )
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
  if ( !v4 )
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
  bool v16; 
  bool v17; 
  bool v31; 
  unsigned int inputTime; 
  const dvar_t *v68; 
  double v83; 
  double v84; 
  char v87; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = ps;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0E8h+var_88], xmm12
    vmovaps [rsp+0E8h+var_98], xmm13
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 483, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  _RSI = DCONST_DVARFLT_com_userCmdMaxExtrapTranslation;
  _RBX = ClientMP;
  if ( !DCONST_DVARFLT_com_userCmdMaxExtrapTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxExtrapTranslation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm8, dword ptr [rsi+28h]
    vmovss  xmm0, cs:__real@46fffe00
    vmovss  xmm1, dword ptr [rdi+34h]
    vmulss  xmm12, xmm8, cs:__real@38000100
    vsubss  xmm10, xmm1, dword ptr [rbx+1FA18h]
    vdivss  xmm13, xmm0, xmm8
    vmovss  xmm0, dword ptr [rdi+30h]
    vsubss  xmm6, xmm0, dword ptr [rbx+1FA14h]
    vmovss  xmm0, dword ptr [rdi+38h]
    vsubss  xmm11, xmm0, dword ptr [rbx+1FA1Ch]
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm8, xmm9
  }
  if ( v16 )
  {
    __asm
    {
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_A8], xmm0
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+0E8h+var_B0], xmm1
    }
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v83, v84);
    v16 = 0;
    v17 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm8
    vcomiss xmm3, xmm0
  }
  if ( !v16 && !v17 )
  {
    __asm
    {
      vsqrtss xmm9, xmm3, xmm3
      vdivss  xmm0, xmm8, xmm9
      vmulss  xmm6, xmm6, xmm0
      vmulss  xmm10, xmm10, xmm0
      vmulss  xmm11, xmm11, xmm0
    }
  }
  __asm
  {
    vmulss  xmm0, xmm6, xmm13
    vmovss  xmm6, cs:__real@3f000000
    vaddss  xmm1, xmm0, xmm6
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm2, xmm7, xmm1, 1
    vcvttss2si ecx, xmm2; val
    vmulss  xmm0, xmm10, xmm13
    vaddss  xmm2, xmm0, xmm6
    vroundss xmm0, xmm7, xmm2, 1
  }
  _RBX->cgamePredictedData.extrapData.offset.v[0] = truncate_cast<short,int>(_ECX);
  __asm
  {
    vcvttss2si ecx, xmm0; val
    vmulss  xmm0, xmm11, xmm13
    vaddss  xmm2, xmm0, xmm6
    vroundss xmm0, xmm7, xmm2, 1
  }
  _RBX->cgamePredictedData.extrapData.offset.v[1] = truncate_cast<short,int>(_ECX);
  __asm { vcvttss2si ecx, xmm0; val }
  _ECX = truncate_cast<short,int>(_ECX);
  _RBX->cgamePredictedData.extrapData.offset.v[2] = _ECX;
  _RBX->cgamePredictedData.extrapData.time = _RDI->commandTime - _RBX->cgamePredictedData.commandTime;
  inputTime = _RDI->inputTime;
  v16 = inputTime < _RBX->cgamePredictedData.inputTime;
  __asm { vcomiss xmm9, xmm8 }
  _RBX->cgamePredictedData.extrapData.inputTime = inputTime - _RBX->cgamePredictedData.inputTime;
  if ( v16 )
  {
    __asm { vmovd   xmm0, dword ptr [rbx+1FA34h] }
    _EAX = _RBX->cgamePredictedData.extrapData.offset.v[1];
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm12
      vaddss  xmm2, xmm1, dword ptr [rbx+1FA14h]
      vmovss  dword ptr [rdi+30h], xmm2
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm12
      vaddss  xmm2, xmm1, dword ptr [rbx+1FA18h]
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm12
      vmovss  dword ptr [rdi+34h], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+1FA1Ch]
      vmovss  dword ptr [rdi+38h], xmm2
    }
  }
  else
  {
    v68 = DCONST_DVARBOOL_com_userCmdLogExtrapError;
    if ( !DCONST_DVARBOOL_com_userCmdLogExtrapError && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdLogExtrapError") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v68);
    if ( v68->current.enabled )
    {
      __asm
      {
        vcvtss2sd xmm3, xmm8, xmm8
        vcvtss2sd xmm2, xmm9, xmm9
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_PrintError(14, "Extrapolation offset %f exceeds the maximum length %f.\n", _R8, _R9);
    }
  }
  __asm { vmovsd  xmm0, qword ptr [rdi+28h] }
  _R11 = &v87;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovsd  qword ptr [rbx+1FA48h], xmm0
  }
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
  __int64 v8; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  _BOOL8 ShouldSendPeerVoiceDataPriorToGameState; 
  int ControllerFromClient; 
  int OurClientNum; 
  CgStatic *v16; 
  characterInfo_t *CharacterInfo; 
  XUID *Xuid; 
  const char *v19; 
  characterInfo_t *v20; 
  int team; 
  CgHandler *Handler; 
  bool IsGameTypeQuick_BR; 
  bool v24; 
  int squadIndex; 
  int v27; 
  int v28; 
  char v29; 
  centity_t *Entity; 
  char v31; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  bool v46; 
  const char *v47; 
  const char *v48; 
  const char *v49; 
  char v50; 
  const char *v51; 
  bool v52; 
  const char *v53; 
  char v54; 
  const char *v70; 
  unsigned int v71; 
  int *recentVictimTimes; 
  __int64 v73; 
  unsigned int v74; 
  const PartyData *GameParty; 
  const vec4_t *v76; 
  char v82; 
  char v83; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v85; 
  char v110; 
  CgMLGSpectator *MLGSpectator; 
  __int64 duration; 
  __int64 v113; 
  char v114; 
  bool v115; 
  char v116; 
  bool m_useSquads; 
  bool v118; 
  bool Bool_Internal_DebugName; 
  vec3_t point; 
  int v121; 
  unsigned int Int_Internal_DebugName; 
  __int64 v123; 
  vec3_t result; 
  char v125; 
  void *retaddr; 

  _RAX = &retaddr;
  v123 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v8 = localClientNum;
  if ( (unsigned int)listenerClientNum >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2346, ASSERT_TYPE_ASSERT, "(unsigned)( listenerClientNum ) < (unsigned)( 200 )", "listenerClientNum doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", listenerClientNum, 200) )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2347, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v10 = DVARBOOL_cl_voice_mute;
  if ( !DVARBOOL_cl_voice_mute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_voice_mute") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled || !Party_IsMemberRegistered(party, listenerClientNum) )
    goto LABEL_18;
  if ( !Party_IsMemberPresent(party, listenerClientNum) )
  {
    v11 = DVARBOOL_voice_debug;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
      Com_Printf(14, "clientNum %i is not yet present in the party\n", (unsigned int)listenerClientNum);
    goto LABEL_18;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v8);
  OurClientNum = Live_GetOurClientNum(ControllerFromClient, party);
  if ( OurClientNum == listenerClientNum || Party_MemberHasLoopbackAddr(party, listenerClientNum) )
  {
LABEL_18:
    ShouldSendPeerVoiceDataPriorToGameState = 0i64;
    memset(&point, 0, sizeof(point));
    goto LABEL_153;
  }
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v8) < CA_PRIMED )
  {
    memset(&point, 0, sizeof(point));
    ShouldSendPeerVoiceDataPriorToGameState = CL_CGameMP_ShouldSendPeerVoiceDataPriorToGameState(party, OurClientNum, listenerClientNum);
    goto LABEL_153;
  }
  if ( (unsigned int)listenerClientNum >= cls.maxClients )
  {
    LODWORD(v113) = cls.maxClients;
    LODWORD(duration) = listenerClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2385, ASSERT_TYPE_ASSERT, "(unsigned)( listenerClientNum ) < (unsigned)( cls.maxClients )", "listenerClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", duration, v113) )
      __debugbreak();
  }
  if ( (unsigned __int8)CL_GetLocalClientFrontEntState((const LocalClientNum_t)v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2387, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tAccessing server session, must not be in frontend state", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  _R15 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v8);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2390, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType )
  {
    LODWORD(v113) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v113) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v113 = CgStatic::ms_allocatedCount;
    LODWORD(duration) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v113) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v8] )
  {
    LODWORD(v113) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v113) )
      __debugbreak();
  }
  v16 = CgStatic::ms_cgameStaticsArray[v8];
  CharacterInfo = CgStatic::GetCharacterInfo(v16, listenerClientNum);
  *(_QWORD *)result.v = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2395, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !CharacterInfo->infoValid )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
    {
      Xuid = Party_GetXuid((XUID *)&result, party, listenerClientNum);
      v19 = XUID::ToDevString(Xuid);
      Com_Printf(14, "%s (clientNum %i) is !infoValid but registered, most likely preloading the map in the front end\n", v19, (unsigned int)listenerClientNum);
    }
    goto LABEL_18;
  }
  v20 = CgStatic::GetCharacterInfo(v16, _R15->clientNum);
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_cgame_mp.cpp", 2404, ASSERT_TYPE_ASSERT, "(localPlayer)", (const char *)&queryFormat, "localPlayer") )
    __debugbreak();
  if ( !v20->infoValid )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
      Com_Printf(14, "localPlayer (clientNum %i) is !infoValid!\n", (unsigned int)_R15->clientNum);
    goto LABEL_18;
  }
  if ( !_R15->predictedPlayerState.stats[0] || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_R15->predictedPlayerState.otherFlags, (POtherFlagsMP)34) || (v116 = 0, GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_R15->predictedPlayerState.otherFlags, (POtherFlagsMP)33)) )
    v116 = 1;
  team = v20->team;
  v121 = team;
  Handler = CgHandler::getHandler((LocalClientNum_t)v8);
  IsGameTypeQuick_BR = BG_IsGameTypeQuick_BR(Handler);
  v24 = 1;
  s_voiceDebugMsg[0] = 0;
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  if ( _R15->predictedPlayerState.pm_type == 6 && !IsGameTypeQuick_BR )
    goto LABEL_144;
  m_useSquads = _R15->m_useSquads;
  v118 = Party_AreMembersInSameSubparty(party, _R15->clientNum, listenerClientNum);
  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_proximity_team, "voice_proximity_team");
  v115 = Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_proximity_enemy, "voice_proximity_enemy");
  squadIndex = v16->GetClientInfo(v16, _R15->clientNum)->squadIndex;
  v27 = v16->GetClientInfo(v16, listenerClientNum)->squadIndex;
  v28 = *(_DWORD *)(*(_QWORD *)result.v + 12i64);
  if ( team != v28 || !team || !v28 )
  {
    v29 = 0;
LABEL_66:
    v114 = 0;
    goto LABEL_67;
  }
  v29 = 1;
  if ( !m_useSquads || squadIndex != v27 )
    goto LABEL_66;
  v114 = 1;
LABEL_67:
  Entity = CG_GetEntity((const LocalClientNum_t)v8, listenerClientNum);
  v31 = (Entity->flags & 1) == 0;
  if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
  FunctionPointer_origin(&Entity->pose.origin.origin.origin, &point);
  if ( Entity->pose.isPosePrecise )
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rbp+57h+point]
      vcvtdq2pd xmm0, xmm0
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rbp+57h+point], xmm1
      vmovd   xmm2, dword ptr [rbp+57h+point+4]
      vcvtdq2pd xmm2, xmm2
      vmulsd  xmm0, xmm2, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rbp+57h+point+4], xmm1
      vmovd   xmm2, dword ptr [rbp+57h+point+8]
      vcvtdq2pd xmm2, xmm2
      vmulsd  xmm0, xmm2, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rbp+57h+point+8], xmm1
    }
  }
  v24 = 0;
  v46 = 1;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
  {
    v47 = "Alive";
    if ( v31 )
      v47 = "Dead";
    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v47);
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
  {
    v48 = ", Enemy";
    if ( v29 )
      v48 = ", Teammate";
    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v48);
  }
  if ( m_useSquads && v29 && Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
  {
    v49 = ", Not Squadmate";
    if ( v114 )
      v49 = ", Squadmate";
    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v49);
  }
  v50 = v114;
  if ( !v114 )
  {
    if ( v29 && v118 )
    {
      v46 = 1;
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
      {
LABEL_93:
        v50 = 0;
        goto LABEL_94;
      }
      v51 = ", Private Party Member";
LABEL_92:
      I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v51);
      goto LABEL_93;
    }
    if ( Bool_Internal_DebugName && v29 )
    {
      if ( v31 )
        goto LABEL_105;
      v54 = v116;
      if ( v116 )
        goto LABEL_105;
    }
    else
    {
      v54 = v116;
    }
    v52 = v115;
    if ( !v115 || v29 || !v31 && !v54 )
    {
      if ( (!Bool_Internal_DebugName || !v29) && (!v115 || v29) )
      {
        v50 = 0;
        goto LABEL_95;
      }
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_voice_proximity_radius, "voice_proximity_radius");
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+point]
        vsubss  xmm3, xmm0, dword ptr [r15+38h]
        vmovss  xmm1, dword ptr [rbp+57h+point+4]
        vsubss  xmm2, xmm1, dword ptr [r15+3Ch]
        vmovss  xmm0, dword ptr [rbp+57h+point+8]
        vsubss  xmm4, xmm0, dword ptr [r15+40h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm6, xmm3, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vcomiss xmm0, xmm6
      }
      v46 = (unsigned __int64)((int)Int_Internal_DebugName * (__int64)(int)Int_Internal_DebugName) >> 32 == 0;
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
        goto LABEL_93;
      __asm
      {
        vsqrtss xmm0, xmm6, xmm6
        vcvttss2si r8d, xmm0
      }
      v70 = "Out of Range";
      if ( v46 )
        v70 = "In Range";
      v51 = j_va(", %s %i/%i", v70, _R8, Int_Internal_DebugName);
      goto LABEL_92;
    }
LABEL_105:
    v46 = 0;
    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
      goto LABEL_93;
    v51 = ", Local player dead";
    if ( v31 )
      v51 = (char *)&queryFormat.fmt + 3;
    goto LABEL_92;
  }
  v46 = 1;
LABEL_94:
  v52 = v115;
LABEL_95:
  if ( v121 || *(_DWORD *)(*(_QWORD *)result.v + 12i64) || !v46 )
  {
    if ( v50 )
    {
      v24 = 1;
      goto LABEL_144;
    }
    if ( v29 && !v46 )
    {
      v24 = 0;
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
        I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, ", Team Proximity Voice Enabled");
      goto LABEL_129;
    }
    v82 = v116;
    if ( v31 == v116 )
    {
      if ( !v29 )
      {
LABEL_160:
        if ( v52 && v46 )
        {
          v24 = 1;
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
            goto LABEL_144;
          v53 = ", Enemy Proximity Voice Enabled";
          goto LABEL_100;
        }
LABEL_164:
        if ( v31 == v116 )
        {
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_chatWithOtherTeams, "cg_chatWithOtherTeams") )
          {
            v24 = 1;
            if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
              goto LABEL_144;
            v53 = ", Same State, cg_chatWithOtherTeams";
            goto LABEL_100;
          }
          v82 = v116;
        }
        if ( v31 && v82 && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_deadChatWithDead, "cg_deadChatWithDead") )
        {
          v24 = 1;
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
            goto LABEL_144;
          v53 = ", Both Dead, cg_deadChatWithDead";
          goto LABEL_100;
        }
        if ( v29 )
        {
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_deadChatWithTeam, "cg_deadChatWithTeam") )
          {
            v24 = 1;
            if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
              goto LABEL_144;
            v53 = ", cg_deadChatWithTeam";
            goto LABEL_100;
          }
          if ( !v31 )
            goto LABEL_189;
          v83 = v116;
          if ( v116 )
          {
LABEL_184:
            if ( v31 && !v83 && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_deadHearAllLiving, "cg_deadHearAllLiving") )
            {
              v24 = 1;
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                goto LABEL_144;
              v53 = ", cg_deadHearAllLiving";
              goto LABEL_100;
            }
LABEL_189:
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_everyoneHearsEveryone, "cg_everyoneHearsEveryone") && v46 )
            {
              v24 = 1;
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                goto LABEL_144;
              v53 = ", cg_everyoneHearsEveryone";
              goto LABEL_100;
            }
            if ( v29 )
              goto LABEL_207;
            if ( v31 )
              goto LABEL_207;
            if ( v116 )
              goto LABEL_207;
            PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x20u);
            v85 = (unsigned int)PerkNetworkPriorityIndex;
            if ( PerkNetworkPriorityIndex < 0 )
              goto LABEL_207;
            if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
            {
              LODWORD(v113) = 64;
              LODWORD(duration) = PerkNetworkPriorityIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", duration, v113) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v85 & 0x1F)) & *(_DWORD *)(*(_QWORD *)result.v + 4 * (v85 >> 5) + 2776)) == 0 )
            {
LABEL_207:
              MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v8);
              if ( CgMLGSpectator::IsClientMLGSpectator(MLGSpectator, (LocalClientNum_t)v8, listenerClientNum) )
              {
                v24 = 1;
                if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                  goto LABEL_144;
                v53 = ", MLG Spectator";
                goto LABEL_100;
              }
            }
            else
            {
              AngleVectors((const vec3_t *)(*(_QWORD *)result.v + 2496i64), &result, NULL, NULL);
              __asm
              {
                vmovss  xmm0, dword ptr [r15+38h]
                vsubss  xmm5, xmm0, dword ptr [rbp+57h+point]
                vmovss  xmm1, dword ptr [r15+3Ch]
                vsubss  xmm6, xmm1, dword ptr [rbp+57h+point+4]
                vmovss  xmm0, dword ptr [r15+40h]
                vsubss  xmm4, xmm0, dword ptr [rbp+57h+point+8]
                vmulss  xmm2, xmm6, xmm6
                vmulss  xmm1, xmm5, xmm5
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm0
                vsqrtss xmm7, xmm2, xmm2
                vcmpless xmm0, xmm7, cs:__real@80000000
                vblendvps xmm1, xmm7, xmm8, xmm0
                vdivss  xmm0, xmm8, xmm1
                vmulss  xmm3, xmm5, xmm0
                vmulss  xmm4, xmm4, xmm0
                vmulss  xmm0, xmm6, xmm0
                vmulss  xmm2, xmm0, dword ptr [rbp+57h+result.m_id+4]
                vmulss  xmm1, xmm3, dword ptr [rbp+57h+result.m_id]
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm4, [rbp+57h+var_70]
                vaddss  xmm6, xmm3, xmm0
              }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_parabolicAngle, "perk_parabolicAngle");
              __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; X }
              *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
              __asm { vcomiss xmm6, xmm0 }
              if ( !v110 )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_parabolicRadius, "perk_parabolicRadius");
                __asm { vcomiss xmm0, xmm7 }
                v24 = !v110;
              }
              if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, ", Parabolic Perk");
              if ( v24 )
                goto LABEL_144;
            }
LABEL_129:
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_hearVictimEnabled, "cg_hearVictimEnabled") && listenerClientNum == _R15->recentKilledByClientNum )
            {
              v71 = _R15->time - _R15->recentKilledByTime;
              if ( v71 < Dvar_GetInt_Internal_DebugName(DVARINT_cg_hearVictimTime, "cg_hearVictimTime") )
              {
                if ( _R15->recentKilledByTime )
                {
                  v24 = 1;
                  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, ", cg_hearVictimEnabled");
                }
              }
            }
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_hearKillerEnabled, "cg_hearKillerEnabled") )
            {
              recentVictimTimes = _R15->recentVictimTimes;
              v73 = 8i64;
              do
              {
                if ( listenerClientNum == *(recentVictimTimes - 8) )
                {
                  v74 = _R15->time - *recentVictimTimes;
                  if ( v74 < Dvar_GetInt_Internal_DebugName(DVARINT_cg_hearKillerTime, "cg_hearKillerTime") )
                  {
                    if ( *recentVictimTimes )
                    {
                      v24 = 1;
                      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
                        I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, ", cg_hearKillerEnabled");
                    }
                  }
                }
                ++recentVictimTimes;
                --v73;
              }
              while ( v73 );
            }
            if ( !v24 )
              goto LABEL_147;
            goto LABEL_144;
          }
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_deadHearTeamLiving, "cg_deadHearTeamLiving") )
          {
            v24 = 1;
            if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
              goto LABEL_144;
            v53 = ", cg_deadHearTeamLiving";
            goto LABEL_100;
          }
        }
        v83 = v116;
        goto LABEL_184;
      }
      if ( v46 )
      {
        v24 = 1;
        if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
          goto LABEL_144;
        v53 = ", Same State";
        goto LABEL_100;
      }
    }
    if ( v29 )
      goto LABEL_164;
    goto LABEL_160;
  }
  v24 = 1;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
  {
    v53 = ", FFA";
LABEL_100:
    I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, v53);
  }
LABEL_144:
  GameParty = Live_GetGameParty();
  if ( CL_IsPlayerMuted(GameParty, listenerClientNum) )
  {
    v24 = 0;
    s_voiceDebugMsg[0] = 0;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") )
      I_strcat_truncate(s_voiceDebugMsg, 0x80ui64, "Muted");
  }
LABEL_147:
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_on_screen_debug, "voice_on_screen_debug") && CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v8) == CA_ACTIVE )
  {
    v76 = &colorRed;
    if ( v24 )
      v76 = &colorGreen;
    __asm { vmovaps xmm2, xmm8; scale }
    CG_DebugString(&point, v76, *(float *)&_XMM2, s_voiceDebugMsg, 0, 0);
  }
  memset(&point, 0, sizeof(point));
  ShouldSendPeerVoiceDataPriorToGameState = v24;
LABEL_153:
  _R11 = &v125;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return ShouldSendPeerVoiceDataPriorToGameState;
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
  const dvar_t *v3; 
  int integer; 
  const dvar_t *v5; 
  int v6; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  StreamLoadSyncResult result; 
  float outPercentage; 

  _RBX = DCONST_DVARFLT_stream_syncMP_imageQuality;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  if ( !DCONST_DVARFLT_stream_syncMP_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_imageQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v3 = DCONST_DVARINT_stream_syncMP_timeoutSeconds;
  if ( !DCONST_DVARINT_stream_syncMP_timeoutSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_timeoutSeconds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( CL_TransientsWorldMP_IsActive() )
  {
    v5 = DVARINT_stream_syncMPTRWorld_maxTimeSeconds;
    if ( !DVARINT_stream_syncMPTRWorld_maxTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMPTRWorld_maxTimeSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = v5->current.integer;
    v7 = DVARINT_stream_syncMPTRWorld_trPortion_maxTimeSeconds;
    if ( !DVARINT_stream_syncMPTRWorld_trPortion_maxTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMPTRWorld_trPortion_maxTimeSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v7->current.integer;
  }
  else
  {
    v9 = DVARINT_stream_syncMP_maxTimeSeconds;
    if ( !DVARINT_stream_syncMP_maxTimeSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_maxTimeSeconds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v6 = v9->current.integer;
    v8 = 0;
  }
  __asm { vmovaps xmm0, xmm6; enoughQuality }
  result = Stream_LoadSync_IsDone(*(float *)&_XMM0, integer, v6, v8, &outPercentage);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
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

