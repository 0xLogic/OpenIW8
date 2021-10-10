/*
==============
CG_PredictMP_SetupPlayerState
==============
*/

void __fastcall CG_PredictMP_SetupPlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictMP_SetupPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictMP_ItemListLocalClientNum
==============
*/

int __fastcall CG_PredictMP_ItemListLocalClientNum()
{
  return ?CG_PredictMP_ItemListLocalClientNum@@YAHXZ();
}

/*
==============
CG_PredictMP_ClearSavedPlayerState
==============
*/

void __fastcall CG_PredictMP_ClearSavedPlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictMP_ClearSavedPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictMP_IsItemPickupPredicted
==============
*/

bool __fastcall CG_PredictMP_IsItemPickupPredicted(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?CG_PredictMP_IsItemPickupPredicted@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_PredictMP_ShouldSkipPredictionForGameplay
==============
*/

bool __fastcall CG_PredictMP_ShouldSkipPredictionForGameplay(const LocalClientNum_t localClientNum, const cg_t *cgameGlob, const playerState_s *ps)
{
  return ?CG_PredictMP_ShouldSkipPredictionForGameplay@@YA_NW4LocalClientNum_t@@PEBVcg_t@@PEBUplayerState_s@@@Z(localClientNum, cgameGlob, ps);
}

/*
==============
CG_PredictMP_BuildItemList
==============
*/

void __fastcall CG_PredictMP_BuildItemList(LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  ?CG_PredictMP_BuildItemList@@YAXW4LocalClientNum_t@@PEBUCgSnapshotMP@@@Z(localClientNum, nextSnap);
}

/*
==============
CG_PredictMP_PredictPlayerState
==============
*/

void __fastcall CG_PredictMP_PredictPlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictMP_PredictPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictMP_ClearItemList
==============
*/

void CG_PredictMP_ClearItemList(void)
{
  ?CG_PredictMP_ClearItemList@@YAXXZ();
}

/*
==============
CG_PredictMP_ShouldRunPrediction
==============
*/

bool __fastcall CG_PredictMP_ShouldRunPrediction(const LocalClientNum_t localClientNum)
{
  return ?CG_PredictMP_ShouldRunPrediction@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictMP_GetPlayerBounds
==============
*/

void __fastcall CG_PredictMP_GetPlayerBounds(LocalClientNum_t localClientNum, Bounds *bounds)
{
  ?CG_PredictMP_GetPlayerBounds@@YAXW4LocalClientNum_t@@PEAUBounds@@@Z(localClientNum, bounds);
}

/*
==============
CG_PredictMP_ClearCharacterInfo
==============
*/

void __fastcall CG_PredictMP_ClearCharacterInfo(LocalClientNum_t localClientNum, int entNum)
{
  ?CG_PredictMP_ClearCharacterInfo@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_PredictMP_InitPredictedPlayerEntity
==============
*/

void __fastcall CG_PredictMP_InitPredictedPlayerEntity(centity_t *cent, int clientNum)
{
  ?CG_PredictMP_InitPredictedPlayerEntity@@YAXPEAUcentity_t@@H@Z(cent, clientNum);
}

/*
==============
CG_PredictMP_SavePlayerState
==============
*/

void __fastcall CG_PredictMP_SavePlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictMP_SavePlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictMP_PrePredictSinglePlayerState
==============
*/

void __fastcall CG_PredictMP_PrePredictSinglePlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictMP_PrePredictSinglePlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictMP_BuildItemList
==============
*/
void CG_PredictMP_BuildItemList(LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  __int64 v2; 
  int v4; 
  CgWeaponMap *v5; 
  CgEntitySystem **v6; 
  entityState_t *entities; 
  __int64 number; 
  CgEntitySystem *v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 

  v2 = localClientNum;
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 116, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 117, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = 0;
  cg_itemLocalClientNum = v2;
  cg_itemEntityCount = 0;
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v2];
  if ( nextSnap->numEntities > 0 )
  {
    v6 = &CgEntitySystem::ms_entitySystemArray[v2];
    entities = nextSnap->entities;
    do
    {
      number = entities->number;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v13) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v13) )
          __debugbreak();
      }
      if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v13) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v12) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( !*v6 )
      {
        LODWORD(v13) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v13) )
          __debugbreak();
      }
      v9 = *v6;
      if ( (unsigned int)number >= 0x800 )
      {
        LODWORD(v13) = 2048;
        LODWORD(v12) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v10 = (__int64)&v9->m_entities[number];
      if ( *(_WORD *)(v10 + 408) == 3 )
      {
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( BgWeaponMap::GetWeapon(v5, *(BgWeaponHandle *)(v10 + 532))->weaponIdx )
        {
          v11 = cg_itemEntityCount;
          cg_itemEntities[cg_itemEntityCount] = (centity_t *)v10;
          cg_itemEntityCount = v11 + 1;
        }
      }
      ++v4;
      ++entities;
    }
    while ( v4 < nextSnap->numEntities );
  }
}

/*
==============
CG_PredictMP_ClearCharacterInfo
==============
*/
void CG_PredictMP_ClearCharacterInfo(LocalClientNum_t localClientNum, int entNum)
{
  CgStatic *LocalClientStatics; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 93, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, entNum);
  if ( CharacterInfo )
  {
    CharacterInfo->suitIndex = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 97, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    MEMORY[0x1468] = 0;
  }
}

/*
==============
CG_PredictMP_ClearItemList
==============
*/
void CG_PredictMP_ClearItemList(void)
{
  cg_itemEntityCount = 0;
}

/*
==============
CG_PredictMP_ClearSavedPlayerState
==============
*/
void CG_PredictMP_ClearSavedPlayerState(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  *(_QWORD *)&LocalClientGlobals->oldCommandTime = 0i64;
  *(_QWORD *)LocalClientGlobals->oldOrigin.v = 0i64;
  LocalClientGlobals->oldOrigin.v[2] = 0.0;
  *(_QWORD *)LocalClientGlobals->oldViewangles.v = 0i64;
  LocalClientGlobals->oldViewangles.v[2] = 0.0;
  MatrixIdentity43(&LocalClientGlobals->oldMoverTransform);
  LocalClientGlobals->oldMoverId = 2047;
  CG_PlayerState_ClearTransPlayerState(&LocalClientGlobals->oldTransPlayerState);
}

/*
==============
CG_PredictMP_ExtrapolatePlayerState
==============
*/
char CG_PredictMP_ExtrapolatePlayerState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  __int64 v3; 
  playerState_s *m_ptr; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  CgPMove *v7; 
  bool Bool_Internal_DebugName; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  int commandTime; 
  int v12; 
  char v13; 
  Mem_LargeLocal v15; 
  char Src[14800]; 
  PlayerViewState viewState; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( Com_FrontEndScene_IsActive() && Com_FrontEndScene_FreeCamEnabled() )
    return 0;
  if ( !CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v1) )
    return 0;
  if ( !CG_Predict_ShouldRunExtrapolation((const LocalClientNum_t)v1) )
    return 0;
  v3 = v1;
  if ( !CL_GetExtrapolatedCmd((const LocalClientNum_t)v1, &cg_pmove[v1].cmd) )
    return 0;
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&viewState.viewMoveState.idleMotionCache.idleMotion1Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&viewState.viewMoveState.idleMotionCache.idleMotion2Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&viewState.weapMoveState.idleMotionCache.idleMotion1Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&viewState.weapMoveState.idleMotionCache.idleMotion2Spline);
  Mem_LargeLocal::Mem_LargeLocal(&v15, 0x53A4ui64, "playerState_t extrapolatedPlayerState");
  m_ptr = (playerState_s *)v15.m_ptr;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->clientNum);
  memcpy_0(&viewState, &LocalClientGlobals->predictedViewState, sizeof(viewState));
  memcpy_0(m_ptr, &LocalClientGlobals->predictedPlayerState, sizeof(playerState_s));
  memcpy_0(Src, CharacterInfo, 0x39C8ui64);
  v7 = &cg_pmove[v3];
  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_extrapolation_full_move, "cg_extrapolation_full_move");
  CG_PredictMP_UpdatePMove(&cg_pmove[v3], m_ptr, 0, !Bool_Internal_DebugName);
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  if ( CL_GetUserCmd((LocalClientNum_t)v1, CmdNumber, &cg_pmove[v3].oldcmd) && CG_PredictMP_ShouldProcessMove(v7, &cg_pmove[v1].cmd) )
  {
    commandTime = LocalClientGlobals->predictedPlayerState.commandTime;
    v12 = Com_GetUserCommandTime(&cg_pmove[v1].cmd) - commandTime;
    CG_PlayerState_SavePredictedPlayerState((const LocalClientNum_t)v1);
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_extrapolation_full_move, "cg_extrapolation_full_move") )
    {
      Profile_Begin(10);
      Pmove(v7);
    }
    else
    {
      Profile_Begin(824);
      PM_ExtrapolateMove(v7);
    }
    Profile_EndInternal(NULL);
    CG_PlayerState_SetExtrapolatedPlayerState((const LocalClientNum_t)v1, m_ptr);
    CG_View_UpdatePlayerView((const LocalClientNum_t)v1, 0, v12, cg_pmove[v3].cmd.inputTime, cg_pmove[v3].cmd.serverTime, &viewState);
    memcpy_0(CharacterInfo, Src, sizeof(characterInfo_t));
    CG_View_PrintPlayerViewState((const LocalClientNum_t)v1, &viewState);
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v15);
  return v13;
}

/*
==============
CG_PredictMP_GetPlayerBounds
==============
*/
void CG_PredictMP_GetPlayerBounds(LocalClientNum_t localClientNum, Bounds *bounds)
{
  *bounds = CG_GetLocalClientGlobals(localClientNum)->playerBox;
}

/*
==============
CG_PredictMP_InitPMove
==============
*/
void CG_PredictMP_InitPMove(const LocalClientNum_t localClientNum, BgGroundState *const playerGround, BgGroundPersistentState *const playerGroundPersistent, Bounds *const playerBounds, MountHintProperties *const mountHint)
{
  __int64 v5; 
  __int64 v9; 

  v5 = localClientNum;
  if ( !playerGround && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 718, ASSERT_TYPE_ASSERT, "(playerGround)", (const char *)&queryFormat, "playerGround") )
    __debugbreak();
  if ( !playerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 719, ASSERT_TYPE_ASSERT, "(playerBounds)", (const char *)&queryFormat, "playerBounds") )
    __debugbreak();
  v9 = v5;
  cg_pmove[v9].ps = NULL;
  cg_pmove[v9].localClientNum = v5;
  cg_pmove[v9].bounds = playerBounds;
  cg_pmove[v9].ground = playerGround;
  cg_pmove[v9].groundPersistent = playerGroundPersistent;
  cg_pmove[v9].m_skydiveAutodeployOffset = 0;
  cg_pmove[v9].m_skydiveAutodeployOffsetIsValid = 0;
  cg_pmove[v9].mountHint = mountHint;
  cg_pmove[v9].m_flags = 0;
  cg_pmove[v9].m_stepHeight = 0.0;
  cg_pmove[v9].initialCall = 0;
  cg_pmove[v9].isExtrapolation = 0;
  CgPMove::InitExternalSystems(&cg_pmove[v5]);
}

/*
==============
CG_PredictMP_InitPredictedPlayerEntity
==============
*/
void CG_PredictMP_InitPredictedPlayerEntity(centity_t *cent, int clientNum)
{
  __int64 v2; 

  v2 = clientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 294, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (unsigned int)(v2 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v2, "signed", v2) )
    __debugbreak();
  cent->nextState.number = v2;
  cent->nextState.otherEntityNum = 2047;
}

/*
==============
CG_PredictMP_InterpolatePlayerState
==============
*/
void CG_PredictMP_InterpolatePlayerState(LocalClientNum_t localClientNum, int grabStance, bool interpolateWorldUp)
{
  unsigned __int64 v3; 
  LocalClientNum_t v4; 
  cg_t *LocalClientGlobals; 
  cg_t *v6; 
  playerState_s *p_predictedPlayerState; 
  const CgSnapshotMP *PrevSnap; 
  const CgSnapshotMP *v9; 
  const CgSnapshotMP *NextSnap; 
  const CgSnapshotMP *v11; 
  float frameInterpolation; 
  bool ShouldRunPrediction; 
  const dvar_t *v14; 
  char v15; 
  CameraType cameraTypeIndex; 
  bool v17; 
  bool v18; 
  int serverTime; 
  int v20; 
  bool v21; 
  bool IsPlayerLinked; 
  bool v23; 
  __int64 v24; 
  const playerState_s *v25; 
  const playerState_s *v33; 
  float *p_viewAngleClampBase; 
  unsigned int v35; 
  signed __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  bool v39; 
  float v40; 
  float v42; 
  float v43; 
  bool v44; 
  float v47; 
  __int64 clientNum; 
  cg_t_vtbl *v54; 
  characterInfo_t *CharacterInfo; 
  double TraceOffset; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  double v67; 
  int v68; 
  double v69; 
  int v70; 
  const DoorState *doorState; 
  signed __int64 v72; 
  signed __int64 v73; 
  __int64 v74; 
  playerState_s *outPs; 
  __int64 v76; 
  _BYTE v77[544]; 

  v3 = (unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64;
  *(_QWORD *)(v3 + 432) = (unsigned __int64)&v74 ^ _security_cookie;
  *(_BYTE *)(v3 + 4) = interpolateWorldUp;
  v4 = localClientNum;
  *(_DWORD *)(v3 + 8) = grabStance;
  *(_DWORD *)(v3 + 24) = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x20) = LocalClientGlobals;
  v6 = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A0) = &LocalClientGlobals->predictedPlayerState;
  PrevSnap = CG_SnapshotMP_GetPrevSnap(v4);
  *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x180) = PrevSnap;
  v9 = PrevSnap;
  NextSnap = CG_SnapshotMP_GetNextSnap(v4);
  *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = NextSnap;
  v11 = NextSnap;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 321, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 322, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x28) = &v11->ps;
  memcpy_0(p_predictedPlayerState, &v11->ps, sizeof(playerState_s));
  frameInterpolation = v6->frameInterpolation;
  ShouldRunPrediction = CG_PredictMP_ShouldRunPrediction(v4);
  v14 = DVARBOOL_cg_psInterpolationDiffClientsFix;
  *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 1) = ShouldRunPrediction;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_psInterpolationDiffClientsFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled && v9->ps.clientNum != v11->ps.clientNum )
  {
    CG_Predict_InterpolatePlayerState(v4, 1, frameInterpolation, &v9->ps, &v11->ps, p_predictedPlayerState);
    if ( *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 1) )
      return;
    goto LABEL_13;
  }
  v15 = *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 1);
  outPs = p_predictedPlayerState;
  *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x10) = &v9->ps;
  CG_Predict_InterpolatePlayerState(v4, v15, frameInterpolation, &v9->ps, &v11->ps, outPs);
  cameraTypeIndex = v11->ps.cameraTypeIndex;
  v17 = v9->ps.cameraTypeIndex != cameraTypeIndex && !CG_Camera_ShouldInterpolateViewTransition(v4, cameraTypeIndex);
  *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 3) = v17;
  v18 = CG_Predict_ShouldLerpViewFields(&v9->ps, &v11->ps) && !v17;
  serverTime = v11->serverTime;
  v20 = v9->serverTime;
  *(_BYTE *)v3 = v18;
  if ( serverTime > v20 )
  {
    if ( *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 8) )
    {
      BG_InterpolateBobCycle((BobCycle *)(v3 + 64), &v9->ps, &v11->ps, frameInterpolation);
      BobCycle::PackBobCycle((BobCycle *)(v3 + 64), (int (*)[2])p_predictedPlayerState->packedBobCycle);
      p_predictedPlayerState->weapCommon.aimSpreadScale = (float)((float)(v11->ps.weapCommon.aimSpreadScale - v9->ps.weapCommon.aimSpreadScale) * frameInterpolation) + v9->ps.weapCommon.aimSpreadScale;
      p_predictedPlayerState->weapCommon.fWeaponPosFrac = (float)((float)(v11->ps.weapCommon.fWeaponPosFrac - v9->ps.weapCommon.fWeaponPosFrac) * frameInterpolation) + v9->ps.weapCommon.fWeaponPosFrac;
      p_predictedPlayerState->viewHeightCurrent = (float)((float)(v11->ps.viewHeightCurrent - v9->ps.viewHeightCurrent) * frameInterpolation) + v9->ps.viewHeightCurrent;
      p_predictedPlayerState->weapCommon.weaponIdleTime = v9->ps.weapCommon.weaponIdleTime + (int)(float)((float)(v11->ps.weapCommon.weaponIdleTime - v9->ps.weapCommon.weaponIdleTime) * frameInterpolation);
      p_predictedPlayerState->weapCommon.weaponIdleTime2 = v9->ps.weapCommon.weaponIdleTime2 + (int)(float)((float)(v11->ps.weapCommon.weaponIdleTime2 - v9->ps.weapCommon.weaponIdleTime2) * frameInterpolation);
      p_predictedPlayerState->weapCommon.offhandAdsFrac = (float)(int)(float)((float)(v11->ps.weapCommon.offhandAdsFrac - v9->ps.weapCommon.offhandAdsFrac) * frameInterpolation) + v9->ps.weapCommon.offhandAdsFrac;
    }
    BG_ContextMount_InterpolateMountState(&v9->ps, &v11->ps, frameInterpolation, &p_predictedPlayerState->mountState);
    if ( *(_BYTE *)v3 )
    {
      p_predictedPlayerState->origin.v[0] = (float)((float)(v11->ps.origin.v[0] - v9->ps.origin.v[0]) * frameInterpolation) + v9->ps.origin.v[0];
      p_predictedPlayerState->origin.v[1] = (float)((float)(v11->ps.origin.v[1] - v9->ps.origin.v[1]) * frameInterpolation) + v9->ps.origin.v[1];
      p_predictedPlayerState->origin.v[2] = (float)((float)(v11->ps.origin.v[2] - v9->ps.origin.v[2]) * frameInterpolation) + v9->ps.origin.v[2];
      v6->originInterpolated = 1;
      p_predictedPlayerState->velocity.v[0] = (float)((float)(v11->ps.velocity.v[0] - v9->ps.velocity.v[0]) * frameInterpolation) + v9->ps.velocity.v[0];
      p_predictedPlayerState->velocity.v[1] = (float)((float)(v11->ps.velocity.v[1] - v9->ps.velocity.v[1]) * frameInterpolation) + v9->ps.velocity.v[1];
      p_predictedPlayerState->velocity.v[2] = (float)((float)(v11->ps.velocity.v[2] - v9->ps.velocity.v[2]) * frameInterpolation) + v9->ps.velocity.v[2];
    }
    else if ( v17 )
    {
      p_predictedPlayerState->origin.v[0] = v11->ps.origin.v[0];
      p_predictedPlayerState->origin.v[1] = v11->ps.origin.v[1];
      p_predictedPlayerState->origin.v[2] = v11->ps.origin.v[2];
      p_predictedPlayerState->velocity.v[0] = v11->ps.velocity.v[0];
      p_predictedPlayerState->velocity.v[1] = v11->ps.velocity.v[1];
      p_predictedPlayerState->velocity.v[2] = v11->ps.velocity.v[2];
    }
    v21 = (v9->ps.linkFlags.m_flags[0] & 4) != 0;
    IsPlayerLinked = BG_IsPlayerLinked(&v9->ps);
    v23 = *(_BYTE *)v3 == 0;
    *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 2) = IsPlayerLinked;
    v24 = 2i64;
    if ( v23 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 3) )
      {
        p_predictedPlayerState->viewangles.v[0] = v11->ps.viewangles.v[0];
        p_predictedPlayerState->viewangles.v[1] = v11->ps.viewangles.v[1];
        p_predictedPlayerState->viewangles.v[2] = v11->ps.viewangles.v[2];
        p_predictedPlayerState->delta_angles.v[0] = v11->ps.delta_angles.v[0];
        p_predictedPlayerState->delta_angles.v[1] = v11->ps.delta_angles.v[1];
        p_predictedPlayerState->delta_angles.v[2] = v11->ps.delta_angles.v[2];
        if ( v21 || IsPlayerLinked )
        {
          p_predictedPlayerState->linkAngles.v[0] = v11->ps.linkAngles.v[0];
          p_predictedPlayerState->linkAngles.v[1] = v11->ps.linkAngles.v[1];
          p_predictedPlayerState->linkAngles.v[2] = v11->ps.linkAngles.v[2];
        }
        _XMM9 = 0i64;
        __asm { vroundss xmm2, xmm9, xmm1, 1 }
        v47 = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0];
        __asm { vroundss xmm2, xmm9, xmm1, 1 }
        p_predictedPlayerState->delta_angles.v[0] = (float)((float)(v47 * 0.000015258789) - *(float *)&_XMM2) * 360.0;
        __asm
        {
          vroundss xmm0, xmm9, xmm3, 1
          vroundss xmm3, xmm9, xmm2, 1
        }
        p_predictedPlayerState->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        __asm
        {
          vroundss xmm0, xmm9, xmm3, 1
          vroundss xmm3, xmm9, xmm2, 1
        }
        p_predictedPlayerState->delta_angles.v[2] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
      }
      v33 = *(const playerState_s **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
      goto LABEL_86;
    }
    if ( !CG_PredictMP_ShouldRunPrediction(v4) || (v25 = *(const playerState_s **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x10), BG_IsPlayerLinked(v25)) || BG_IsPlayerInExecution(v25) )
    {
      LerpAngles(&v9->ps.viewangles, &v11->ps.viewangles, frameInterpolation, &p_predictedPlayerState->viewangles);
    }
    else
    {
      p_predictedPlayerState->viewangles.v[0] = v11->ps.viewangles.v[0];
      p_predictedPlayerState->viewangles.v[1] = v11->ps.viewangles.v[1];
      p_predictedPlayerState->viewangles.v[2] = v11->ps.viewangles.v[2];
    }
    if ( v21 || *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 2) )
      LerpAngles(&v9->ps.linkAngles, &v11->ps.linkAngles, frameInterpolation, &p_predictedPlayerState->linkAngles);
    LerpAngles(&v9->ps.delta_angles, &v11->ps.delta_angles, frameInterpolation, &p_predictedPlayerState->delta_angles);
    _XMM8 = 0i64;
    __asm
    {
      vroundss xmm3, xmm8, xmm2, 1
      vroundss xmm2, xmm8, xmm1, 1
    }
    p_predictedPlayerState->delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM3).m128_f32[0] * 0.000015258789) - *(float *)&_XMM2) * 360.0;
    __asm
    {
      vroundss xmm0, xmm8, xmm3, 1
      vroundss xmm3, xmm8, xmm2, 1
    }
    p_predictedPlayerState->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    __asm
    {
      vroundss xmm0, xmm8, xmm3, 1
      vroundss xmm3, xmm8, xmm2, 1
    }
    p_predictedPlayerState->delta_angles.v[2] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    if ( !v21 && !*(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 2) )
    {
      v33 = *(const playerState_s **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v33 == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v33->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v33->eFlags, ACTIVE, 6u) )
      {
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v33->eFlags, ACTIVE, 7u) )
        {
          v6 = *(cg_t **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
LABEL_86:
          if ( v11->ps.cursorHint == HINT_NONE )
          {
            p_predictedPlayerState->cursorHintString = 0;
            *(_WORD *)&p_predictedPlayerState->cursorHintData = 0;
            p_predictedPlayerState->cursorHintEntIndex = 2047;
          }
          CG_Vehicle_InterpolatePlayerState(v4, v9, v11, frameInterpolation, p_predictedPlayerState);
          if ( *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 4) && (v11->ps.worldUpAngles.v[0] != v9->ps.worldUpAngles.v[0] || v11->ps.worldUpAngles.v[1] != v9->ps.worldUpAngles.v[1] || v11->ps.worldUpAngles.v[2] != v9->ps.worldUpAngles.v[2]) && *(_BYTE *)v3 )
            BgSpaceship::AngleLerp(&v9->ps.worldUpAngles, &v11->ps.worldUpAngles, frameInterpolation, &p_predictedPlayerState->worldUpAngles);
          CG_FireAnimStabilizer_InterpolatePlayerState(v4, v9, v11, p_predictedPlayerState);
          if ( *(_BYTE *)v3 )
            CG_PlayerState_InterpolateSlopeProperties(v4, p_predictedPlayerState);
          v23 = *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 1) == 0;
          p_predictedPlayerState->weapCommon.crouchProneBlendMap = (int)(float)((float)((float)v9->ps.weapCommon.crouchProneBlendMap * (float)(1.0 - frameInterpolation)) + (float)((float)v11->ps.weapCommon.crouchProneBlendMap * frameInterpolation));
          if ( v23 )
          {
            CG_View_UpdatePlayerView(v4, 1, v6->frametime, p_predictedPlayerState->inputTimeInterpolated, p_predictedPlayerState->serverTimeInterpolated, &v6->predictedViewState);
            clientNum = (unsigned int)v6->predictedPlayerState.clientNum;
            v54 = v6->__vftable;
            *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 8) = clientNum;
            if ( v54->HasCharacterInfo(v6, clientNum) )
            {
              CharacterInfo = CG_GetCharacterInfo(v6, *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 8));
              if ( CharacterInfo )
              {
                TraceOffset = CG_TraceGroundWorkers_GetTraceOffset();
                if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v9->ps.pm_flags, ACTIVE, 6u) )
                {
                  YawVectors(CharacterInfo->legs.yawAngle, (vec3_t *)(v3 + 416), (vec3_t *)(v3 + 384));
                  v57 = p_predictedPlayerState->origin.v[0];
                  v58 = 32.0 * *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A0);
                  v59 = p_predictedPlayerState->origin.v[1];
                  v60 = *(float *)&TraceOffset + p_predictedPlayerState->origin.v[2];
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x180) = v57;
                  v61 = v58 + v57;
                  v62 = 32.0 * *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A4);
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = v61;
                  v63 = 32.0 * *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A8);
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = v62 + v59;
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x198) = v63 + v60;
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x184) = v59;
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x188) = v60;
                }
                else
                {
                  v64 = p_predictedPlayerState->origin.v[1];
                  v65 = p_predictedPlayerState->origin.v[2];
                  v66 = p_predictedPlayerState->origin.v[0];
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x188) = *(float *)&TraceOffset + v65;
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x184) = v64;
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = v64;
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x198) = v65 - (float)(*(float *)&TraceOffset * 1.0);
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x180) = v66;
                  *(float *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = v66;
                }
                v67 = *(double *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x180);
                *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x104) = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 8);
                v68 = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x188);
                *(double *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x10C) = v67;
                v69 = *(double *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x190);
                *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x114) = v68;
                v70 = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x198);
                *(double *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x118) = v69;
                *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x120) = v70;
                *(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x100) = 2;
                *(_WORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x108) = 0;
                *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x128) = 0i64;
                CG_TraceGroundWorkers_AddEvent((const CgTraceGroundWorkerEvent *)(v3 + 128));
              }
            }
          }
          doorState = v11->ps.doorState;
          v72 = (char *)p_predictedPlayerState - (char *)doorState;
          v73 = (char *)v9 - (char *)doorState;
          do
          {
            CG_Door_InterpolateDoorState((const DoorState *)((char *)doorState + v73 + 1060), doorState, frameInterpolation, (DoorState *)((char *)&doorState[63].moveType + v72));
            ++doorState;
            --v24;
          }
          while ( v24 );
          CGMovingPlatforms::InterpolatePlayerLocalOffset(v33, *(const playerState_s **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x28), frameInterpolation, p_predictedPlayerState);
          CG_DrawDebug_Player_InterpolatePs(v4);
          return;
        }
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
      }
    }
    p_viewAngleClampBase = (float *)&v9->ps.viewAngleClampBase;
    v35 = 0;
    v36 = (char *)v11 - (char *)v9;
    *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x38) = (char *)&p_predictedPlayerState->viewAngleClampRange - (char *)&v9->ps.viewAngleClampBase;
    v37 = (char *)&p_predictedPlayerState->viewAngleClampBase - (char *)&v9->ps.viewAngleClampBase;
    v38 = (char *)&v11->ps.viewAngleClampRange - (char *)&v9->ps.viewAngleClampBase;
    v39 = 1;
    do
    {
      if ( !v39 )
      {
        LODWORD(v76) = 2;
        LODWORD(outPs) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v76) )
          __debugbreak();
      }
      v40 = *(float *)((char *)p_viewAngleClampBase + v36);
      if ( v35 >= 2 )
      {
        LODWORD(v76) = 2;
        LODWORD(outPs) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v76) )
          __debugbreak();
      }
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      v42 = (float)((float)((float)((float)((float)(v40 - *p_viewAngleClampBase) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * frameInterpolation) + *p_viewAngleClampBase;
      if ( v35 >= 2 )
      {
        LODWORD(v76) = 2;
        LODWORD(outPs) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v76) )
          __debugbreak();
      }
      *(float *)((char *)p_viewAngleClampBase + v37) = v42;
      if ( v35 >= 2 )
      {
        LODWORD(v76) = 2;
        LODWORD(outPs) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v76) )
          __debugbreak();
        LODWORD(v76) = 2;
        LODWORD(outPs) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v76) )
          __debugbreak();
        LODWORD(v76) = 2;
        LODWORD(outPs) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v76) )
          __debugbreak();
      }
      v43 = (float)((float)(*(float *)((char *)p_viewAngleClampBase + v38) - p_viewAngleClampBase[2]) * frameInterpolation) + p_viewAngleClampBase[2];
      if ( v35 >= 2 )
      {
        LODWORD(v76) = 2;
        LODWORD(outPs) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v76) )
          __debugbreak();
      }
      ++v35;
      *(float *)((char *)p_viewAngleClampBase++ + *(_QWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x38)) = v43;
      v39 = v35 < 2;
    }
    while ( (int)v35 < 2 );
    v44 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END);
    p_predictedPlayerState = *(playerState_s **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A0);
    v11 = *(const CgSnapshotMP **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x190);
    v9 = *(const CgSnapshotMP **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x180);
    v4 = *(_DWORD *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x18);
    v6 = *(cg_t **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
    v33 = *(const playerState_s **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
    if ( v44 )
    {
      p_predictedPlayerState->viewAngleResistMin.v[0] = (float)((float)(v11->ps.viewAngleResistMin.v[0] - v9->ps.viewAngleResistMin.v[0]) * frameInterpolation) + v9->ps.viewAngleResistMin.v[0];
      p_predictedPlayerState->viewAngleResistMin.v[1] = (float)((float)(v11->ps.viewAngleResistMin.v[1] - v9->ps.viewAngleResistMin.v[1]) * frameInterpolation) + v9->ps.viewAngleResistMin.v[1];
      p_predictedPlayerState->viewAngleResistMax.v[0] = (float)((float)(v11->ps.viewAngleResistMax.v[0] - v9->ps.viewAngleResistMax.v[0]) * frameInterpolation) + v9->ps.viewAngleResistMax.v[0];
      p_predictedPlayerState->viewAngleResistMax.v[1] = (float)((float)(v11->ps.viewAngleResistMax.v[1] - v9->ps.viewAngleResistMax.v[1]) * frameInterpolation) + v9->ps.viewAngleResistMax.v[1];
    }
    goto LABEL_86;
  }
  if ( !*(_BYTE *)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 1) )
  {
    if ( serverTime == v20 && v18 )
      v6->originInterpolated = 1;
    CGMovingPlatforms::InterpolatePlayerLocalOffset(&v9->ps, *(const playerState_s **)(((unsigned __int64)v77 & 0xFFFFFFFFFFFFFF80ui64) + 0x28), frameInterpolation, p_predictedPlayerState);
LABEL_13:
    CG_View_UpdatePlayerView(v4, 1, v6->frametime, p_predictedPlayerState->inputTimeInterpolated, p_predictedPlayerState->serverTimeInterpolated, &v6->predictedViewState);
  }
}

/*
==============
CG_PredictMP_IsExecutionBlockingPrediction
==============
*/
bool CG_PredictMP_IsExecutionBlockingPrediction(const playerState_s *const ps)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  bool v3; 
  bool v4; 
  bool v5; 

  p_otherFlags = &ps->otherFlags;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v3 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x22u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v4 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x29u);
  v5 = BG_IsPlayerInExecution(ps) && BG_Execution_CanUpdateViewangles(ps);
  return (v3 || v4) && v5;
}

/*
==============
CG_PredictMP_IsItemPickupPredicted
==============
*/
bool CG_PredictMP_IsItemPickupPredicted(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 146, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return cent->pickupPredictionTime && cent->pickupPredictionTime >= CG_GetLocalClientGlobals(localClientNum)->time;
}

/*
==============
CG_PredictMP_ItemListLocalClientNum
==============
*/
__int64 CG_PredictMP_ItemListLocalClientNum()
{
  return (unsigned int)cg_itemLocalClientNum;
}

/*
==============
CG_PredictMP_PrePredictSinglePlayerState
==============
*/
void CG_PredictMP_PrePredictSinglePlayerState(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  __int64 v3; 
  const dvar_t *v4; 
  double v5; 
  Bounds outBounds; 
  _BYTE v7[96]; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v1].connectionState == CA_ACTIVE )
  {
    if ( CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->nextSnap )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
      CG_SetupPrePredictBounds(LocalClientGlobals, &outBounds);
      memset_0(v7, 0, sizeof(v7));
      v3 = 1000 * v1;
      *(Bounds **)((char *)&cg_pmove[0].bounds + v3) = &outBounds;
      *(playerState_s **)((char *)&cg_pmove[0].ps + v3) = NULL;
      *(BgGroundPersistentState **)((char *)&cg_pmove[0].groundPersistent + v3) = NULL;
      *(int *)((char *)&cg_pmove[0].m_skydiveAutodeployOffset + v3) = 0;
      *(&cg_pmove[0].m_skydiveAutodeployOffsetIsValid + v3) = 0;
      *(MountHintProperties **)((char *)&cg_pmove[0].mountHint + v3) = NULL;
      *(int *)((char *)&cg_pmove[0].m_flags + v3) = 0;
      *(float *)((char *)&cg_pmove[0].m_stepHeight + v3) = 0.0;
      *(&cg_pmove[0].initialCall + v3) = 0;
      *(&cg_pmove[0].isExtrapolation + v3) = 0;
      *(BgGroundState **)((char *)&cg_pmove[0].ground + v3) = (BgGroundState *)v7;
      *(LocalClientNum_t *)((char *)&cg_pmove[0].localClientNum + v3) = v1;
      CgPMove::InitExternalSystems(&cg_pmove[v1]);
      if ( CG_PredictMP_PredictPlayerState_Internal((LocalClientNum_t)v1, 1) )
      {
        v4 = DVARBOOL_killswitch_player_event_fix;
        if ( !DVARBOOL_killswitch_player_event_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_player_event_fix") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v4);
        if ( v4->current.enabled )
        {
          v5 = *(double *)&LocalClientGlobals->playerEvents.events[3].eventParm;
          *(__m256i *)&LocalClientGlobals->predictedPlayerState.pe.eventSequence = *(__m256i *)&LocalClientGlobals->playerEvents.eventSequence;
          *(double *)&LocalClientGlobals->predictedPlayerState.pe.events[3].eventParm = v5;
        }
        LocalClientGlobals->playerBox = outBounds;
        *(__m256i *)&LocalClientGlobals->playerGround.trace.fraction = *(__m256i *)v7;
        *(__m256i *)&LocalClientGlobals->playerGround.trace.contents = *(__m256i *)&v7[32];
        *(__m256i *)&LocalClientGlobals->playerGround.trace.allsolid = *(__m256i *)&v7[64];
      }
    }
  }
}

/*
==============
CG_PredictMP_PredictPlayerState
==============
*/
void CG_PredictMP_PredictPlayerState(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgPMove *v3; 
  CgGlobalsMP *v4; 
  bool m_skydiveAutodeployOffsetIsValid; 
  int v6; 
  centity_t *Entity; 
  __int16 meleeChargeEnt; 
  __int64 clientNum; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  __m256i v12; 
  __m256i v13; 
  __m256i v14; 
  LerpEntityStateInfoVolumeGrapple v15; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const dvar_t *v18; 
  CgHandler *v19; 
  float v20; 
  unsigned int v21; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v23; 
  int time; 
  CgHandler *v25; 
  CgAntiLag *v26; 
  const int *p_weaponShotCount; 
  __int64 v28; 
  __int64 v29; 
  CgWeaponMap *weaponMap; 
  BgWeaponMap *weaponMapa; 
  CgTrajectory v32; 
  usercmd_s ucmd; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = &cg_pmove[v1];
  v4 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
  CG_GameInterface_OnPredictPlayerState((LocalClientNum_t)v1);
  LocalClientGlobals->lastFrame.aimSpreadScale = LocalClientGlobals->predictedPlayerState.weapCommon.aimSpreadScale;
  m_skydiveAutodeployOffsetIsValid = v3->m_skydiveAutodeployOffsetIsValid;
  v4->m_skydiveAutodeployOffsetIsValid = m_skydiveAutodeployOffsetIsValid;
  if ( m_skydiveAutodeployOffsetIsValid )
    v4->m_skydiveAutodeployOffset = v3->m_skydiveAutodeployOffset;
  CG_PredictMP_InitPMove((const LocalClientNum_t)v1, &LocalClientGlobals->playerGround, &LocalClientGlobals->playerGroundPersistent, &LocalClientGlobals->playerBox, &LocalClientGlobals->mountHint);
  LocalClientGlobals->originPredicted = CG_PredictMP_PredictPlayerState_Internal((LocalClientNum_t)v1, 0);
  CL_CGameMP_SetPredictedData((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  if ( !CG_PredictMP_ExtrapolatePlayerState((const LocalClientNum_t)v1) )
  {
    CG_View_PrintPlayerViewState((const LocalClientNum_t)v1, &LocalClientGlobals->predictedViewState);
    CG_PlayerState_ClearExtrapolatedPlayerState((const LocalClientNum_t)v1);
  }
  CL_CGameMP_SetExtrapolatedData((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  CG_PMove_UpdateZSmoothing(&cg_pmove[v1]);
  CG_PMove_ApplyPMoveFlags(&cg_pmove[v1]);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0xFu) )
    CL_SetStance((LocalClientNum_t)v1, CL_STANCE_STAND, 0);
  v6 = 0;
  if ( LocalClientGlobals->predictedPlayerState.cursorHint == HINT_NONE )
  {
    LocalClientGlobals->predictedPlayerState.cursorHintString = 0;
    LocalClientGlobals->predictedPlayerState.cursorHintEntIndex = 2047;
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v1, LocalClientGlobals->predictedPlayerState.clientNum);
  CG_SetPoseOrigin(&Entity->pose, &LocalClientGlobals->predictedPlayerState.origin);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 5u) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x1Bu) )
  {
    CgTrajectory::CgTrajectory(&v32, (const LocalClientNum_t)v1, Entity, &Entity->nextState.lerp);
    BgTrajectory::EvaluateAngTrajectory(&v32, LocalClientGlobals->time, &Entity->pose.angles);
  }
  meleeChargeEnt = LocalClientGlobals->predictedPlayerState.meleeChargeEnt;
  if ( meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu )
    CG_PlayersMP_CorpseSyncMelee((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  CG_Vehicle_PlayerStateToVehicleState((LocalClientNum_t)v1);
  if ( CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v1) )
  {
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 294, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (unsigned int)(clientNum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)clientNum, "signed", clientNum) )
      __debugbreak();
    Entity->nextState.number = clientNum;
    Entity->nextState.otherEntityNum = 2047;
    Handler = CgHandler::getHandler(v3->localClientNum);
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v1);
    BG_PlayerStateToEntityState(Instance, &LocalClientGlobals->predictedPlayerState, &Entity->nextState, 0, Handler);
    v12 = *(__m256i *)Entity->nextState.lerp.eFlags.m_flags;
    v13 = *(__m256i *)&Entity->nextState.lerp.pos.trDelta.y;
    Entity->flags |= 1u;
    *(__m256i *)Entity->prevState.eFlags.m_flags = v12;
    v14 = *(__m256i *)Entity->nextState.lerp.apos.trDelta.v;
    *(__m256i *)&Entity->prevState.pos.trDelta.y = v13;
    v15 = *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->nextState.lerp.u.infoVolumeGrapple + 20);
    *(__m256i *)Entity->prevState.apos.trDelta.v = v14;
    *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->prevState.u.infoVolumeGrapple + 20) = v15;
    Entity->nextState.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(v3->fTorsoPitch);
    Entity->nextState.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(v3->fWaistPitch);
  }
  if ( LocalClientGlobals->demoType == NONE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) && !CG_PredictMP_IsExecutionBlockingPrediction(&LocalClientGlobals->predictedPlayerState) && CG_PredictMP_ShouldSkipPredictionForCollision((const LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState) )
  {
    memset_0(&ucmd, 0, sizeof(ucmd));
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    CL_GetUserCmd((LocalClientNum_t)v1, CmdNumber, &ucmd);
    BG_UpdateViewAngles_ClampDefault(&LocalClientGlobals->predictedPlayerState, &ucmd);
    v18 = DVARBOOL_killswitch_missing_collision_predicted_pose_enabled;
    if ( !DVARBOOL_killswitch_missing_collision_predicted_pose_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_missing_collision_predicted_pose_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      v19 = CgHandler::getHandler(v3->localClientNum);
      BG_PlayerToEntity_SetTrajectory_Angles(&LocalClientGlobals->predictedPlayerState, &Entity->nextState.lerp, 0, v19);
      v20 = Entity->nextState.lerp.apos.trDelta.v[2];
      *(__m256i *)&Entity->prevState.apos.trType = *(__m256i *)&Entity->nextState.lerp.apos.trType;
      Entity->prevState.apos.trDelta.v[2] = v20;
    }
  }
  v21 = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v21) )
  {
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, v21);
    v23 = CharacterInfo;
    if ( CharacterInfo )
    {
      BG_AnimationMP_UpdateCharacterInfoHeightOffset(&LocalClientGlobals->predictedPlayerState, CharacterInfo, v3->m_stepHeight, v3->m_flags, LocalClientGlobals->frametime);
      v3->m_flags &= ~0x100u;
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v29) = 2;
        LODWORD(v28) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 1145, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      weaponMap = CgWeaponMap::ms_instance[v1];
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 1150, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v23->serverDobjHeldWeapon = *BG_GetServerDObjHeldWeaponForPlayer(weaponMap, &LocalClientGlobals->predictedPlayerState);
      v23->serverDobjTurretWeapon = *BG_GetServerDObjHeldWeaponForPlayer(weaponMap, &LocalClientGlobals->predictedPlayerState);
      v23->serverDobjHideWeapon = LocalClientGlobals->predictedPlayerState.serverDobjHideWeapon == 1;
      v23->serverDobjStowHeldWeapon = LocalClientGlobals->predictedPlayerState.serverDobjStowHeldWeapon == 1;
    }
  }
  CG_Door_PlayerStateToCharacterInfo((const LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  time = LocalClientGlobals->time;
  v25 = CgHandler::getHandler(v3->localClientNum);
  weaponMapa = (BgWeaponMap *)v25;
  if ( !CgWeaponMap::ms_instance[v1] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v25 = (CgHandler *)weaponMapa;
  }
  BG_PlayerToEntity_ProcessEvents(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState, &Entity->nextState, v25, time);
  Entity->pose.eType = Entity->nextState.eType;
  if ( !CgAntiLag::IsDisabledForMigration((const LocalClientNum_t)v1) )
  {
    v26 = CgAntiLag::GetInstance((const LocalClientNum_t)v1);
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 1313, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
      __debugbreak();
    CgAntiLag::ArchiveEntity(v26, Entity, 1);
  }
  p_weaponShotCount = (const int *)&LocalClientGlobals->predictedPlayerState.weapState[0].weaponShotCount;
  do
  {
    Tracer_SetDrawCounter((const LocalClientNum_t)v1, Entity->nextState.number, (const PlayerHandIndex)v6++, *p_weaponShotCount);
    p_weaponShotCount += 20;
  }
  while ( v6 < 2 );
  LocalClientGlobals->predictedPlayerEntity = Entity;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    LocalClientGlobals->lastGroundSurfaceType = v3->ground->surfaceType;
    Entity->surfaceType = v3->ground->surfaceType;
  }
  AimAssist_UpdateAimAssistPlayerState((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  LocalClientGlobals->fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
  LocalClientGlobals->fOffhandPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.offhandAdsFrac;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v29) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v29) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v29) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v28) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
  {
    LODWORD(v29) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v29) )
      __debugbreak();
  }
  CgVehicleSystem::UpdatePlayerVehicle(CgVehicleSystem::ms_vehicleSystemArray[v1]);
  CG_PlayerState_PMoveSlopeProperties((LocalClientNum_t)v1, &cg_pmove[v1], &LocalClientGlobals->predictedPlayerState);
}

/*
==============
CG_PredictMP_PredictPlayerState_Internal
==============
*/
__int64 CG_PredictMP_PredictPlayerState_Internal(LocalClientNum_t localClientNum, int initialCall)
{
  __int64 v3; 
  CgGlobalsMP *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const ClActiveClient *Client; 
  int v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  CgPMove *v10; 
  int v11; 
  const dvar_t *v12; 
  usercmd_s *p_cmd; 
  bool playerScriptTeleported; 
  bool v16; 
  int commandTime; 
  int v18; 
  bool v19; 
  playerState_s *ps; 
  CgPlayer_Asm *v21; 
  int v22; 
  centity_t **v23; 
  centity_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  int cmdNumber; 
  __int64 v28; 
  unsigned int holdrand; 
  usercmd_s *v31; 
  CgPMove *v32; 
  CgGlobalsMP *v33; 
  __int64 v34; 
  usercmd_s ucmd; 
  usercmd_s cmd; 

  v34 = -2i64;
  v3 = localClientNum;
  Profile_Begin(429);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  v33 = LocalClientGlobals;
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 904, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v3);
  v7 = ClActiveClient_GetCmdNumber(Client);
  cmdNumber = v7;
  v8 = 0;
  if ( !CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v3) )
    goto LABEL_13;
  v9 = v3;
  v28 = v3;
  v10 = &cg_pmove[v3];
  v32 = v10;
  CG_PredictMP_UpdatePMove(v10, &LocalClientGlobals->predictedPlayerState, initialCall != 0, 0);
  v11 = v7 - 127;
  if ( !CL_GetUserCmd((LocalClientNum_t)v3, v11, &ucmd) )
  {
    if ( CL_GetUserCmd((LocalClientNum_t)v3, cmdNumber, &cmd) )
      BG_UpdateViewAngles_ClampDefault(&LocalClientGlobals->predictedPlayerState, &cmd);
    v12 = DVARINT_cg_showmiss;
    if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer )
      Com_Printf(17, "exceeded PACKET_BACKUP on commands\n");
    goto LABEL_13;
  }
  if ( !CL_GetUserCmd((LocalClientNum_t)v3, cmdNumber, &cmd) )
  {
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  if ( p_predictedPlayerState->commandTime < cmd.commandTime && v11 <= cmdNumber )
  {
    p_cmd = &cg_pmove[v9].cmd;
    v31 = p_cmd;
    do
    {
      if ( CL_GetUserCmd((LocalClientNum_t)v3, v11, p_cmd) && CL_GetUserCmd((LocalClientNum_t)v3, v11 - 1, &cg_pmove[v9].oldcmd) && CG_PredictMP_ShouldProcessMove(v10, &cmd) )
      {
        playerScriptTeleported = LocalClientGlobals->playerScriptTeleported;
        v16 = BGMovingPlatforms::IsOnMovingPlatform(p_predictedPlayerState) != 0;
        commandTime = p_predictedPlayerState->commandTime;
        v18 = Com_GetUserCommandTime(v31) - commandTime;
        v19 = v16;
        v10 = v32;
        CgPMove::UpdatePredictionError(v32, v19, playerScriptTeleported);
        v9 = v3;
        if ( PM_Skydive_ShouldLockViewInput(v10) )
        {
          ps = cg_pmove[v28].ps;
          *(double *)ps->viewangles.v = *(double *)LocalClientGlobals->gunAngles.v;
          ps->viewangles.v[2] = LocalClientGlobals->gunAngles.v[2];
        }
        Profile_Begin(10);
        if ( Pmove(v10) )
          v8 = 1;
        Profile_EndInternal(NULL);
        if ( v8 )
        {
          if ( !initialCall )
          {
            CG_View_UpdatePlayerView((const LocalClientNum_t)v3, 1, v18, cg_pmove[v28].cmd.inputTime, cg_pmove[v28].cmd.serverTime, &LocalClientGlobals->predictedViewState);
            *cg_pmove[v28].footstepEventType = PM_Footstep_UpdateMoveType(v18, v10, cg_pmove[v28].speed, &LocalClientGlobals->footstepWeight);
          }
          p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
          holdrand = PM_Pmove_GetHoldRand(v31, &LocalClientGlobals->predictedPlayerState);
          v21 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v3);
          CgPlayer_Asm::HandleMisprediction(v21, LocalClientGlobals->playerASMLastCommandTime, &LocalClientGlobals->playerASMLastAnimState, &LocalClientGlobals->predictedPlayerState, &holdrand);
        }
        else
        {
          p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
        }
        if ( CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->predictedPlayerState.pm_type <= 1u )
        {
          v22 = 0;
          if ( cg_itemEntityCount > 0 )
          {
            v23 = cg_itemEntities;
            do
            {
              v24 = *v23;
              if ( (*v23)->nextState.eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 218, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_ITEM)", (const char *)&queryFormat, "cent->nextState.eType == ET_ITEM") )
                __debugbreak();
              CG_PredictMP_TouchItem((const LocalClientNum_t)v3, v24);
              ++v22;
              ++v23;
            }
            while ( v22 < cg_itemEntityCount );
            LocalClientGlobals = v33;
            v9 = v3;
            v10 = v32;
            p_predictedPlayerState = &v33->predictedPlayerState;
          }
        }
      }
      ++v11;
      p_cmd = v31;
    }
    while ( v11 <= cmdNumber );
  }
  cg_pmove[v9].footstepEventType = NULL;
  if ( v8 )
  {
    LocalClientGlobals->playerASMLastCommandTime = 0;
  }
  else if ( !LocalClientGlobals->playerTeleported )
  {
    LocalClientGlobals->predictedPlayerState.viewangles.v[0] = LocalClientGlobals->oldViewangles.v[0];
    LocalClientGlobals->predictedPlayerState.viewangles.v[1] = LocalClientGlobals->oldViewangles.v[1];
    LocalClientGlobals->predictedPlayerState.viewangles.v[2] = LocalClientGlobals->oldViewangles.v[2];
  }
  v25 = DVARINT_cg_showmiss;
  if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.integer > 1 )
    Com_Printf(17, "[%i : %i]\n", (unsigned int)cg_pmove[v28].cmd.serverTime, (unsigned int)LocalClientGlobals->time);
  if ( !v8 )
  {
    v26 = DVARINT_cg_showmiss;
    if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.integer )
      Com_Printf(17, "No prediction run\n");
  }
LABEL_14:
  Profile_EndInternal(NULL);
  return v8;
}

/*
==============
CG_PredictMP_SavePlayerState
==============
*/
void CG_PredictMP_SavePlayerState(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  double v2; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->oldCommandTime = LocalClientGlobals->predictedPlayerState.commandTime;
  LocalClientGlobals->oldServerTime = LocalClientGlobals->predictedPlayerState.serverTime;
  LocalClientGlobals->oldOrigin = LocalClientGlobals->predictedPlayerState.origin;
  LocalClientGlobals->oldViewangles = LocalClientGlobals->predictedPlayerState.viewangles;
  MatrixCopy43(&LocalClientGlobals->moverTransform, &LocalClientGlobals->oldMoverTransform);
  LocalClientGlobals->oldMoverId = LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
  CG_PlayerState_ExtractTransPlayerState(&LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->oldTransPlayerState);
  v2 = *(double *)&LocalClientGlobals->predictedPlayerState.pe.events[3].eventParm;
  *(__m256i *)&LocalClientGlobals->playerEvents.eventSequence = *(__m256i *)&LocalClientGlobals->predictedPlayerState.pe.eventSequence;
  *(double *)&LocalClientGlobals->playerEvents.events[3].eventParm = v2;
}

/*
==============
CG_PredictMP_SetupPlayerState
==============
*/
void CG_PredictMP_SetupPlayerState(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  const CgSnapshotMP *NextSnap; 
  const playerState_s *p_ps; 
  CgHandler *Handler; 
  int entity; 
  const CgSnapshotMP *PrevSnap; 
  const CgSnapshotMP *v8; 
  float v9; 
  CameraType cameraTypeIndex; 
  float v11; 
  float frameInterpolation; 
  const dvar_t *v13; 
  int pm_type; 
  __int16 groundEntityNum; 
  int time; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->refdef.viewOffsetPrev = LocalClientGlobals->refdef.viewOffset;
  LocalClientGlobals->physicsTime = LocalClientGlobals->nextSnap->serverTime;
  NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v1);
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 604, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  p_ps = &NextSnap->ps;
  Handler = CgHandler::getHandler((LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_UpdateWeaponAnimArrays(CgWeaponMap::ms_instance[v1], &NextSnap->ps, Handler);
  if ( CG_View_IsKillCamEntityView((const LocalClientNum_t)v1) )
  {
    CG_KillCam_UpdateKillCamEntityViewOffset((const LocalClientNum_t)v1);
  }
  else if ( CG_IsCinematicCameraActive((LocalClientNum_t)v1) || CG_ModelPreviewerNeedsVieworgInterpSkipped((LocalClientNum_t)v1) )
  {
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->refdef.viewOffset);
  }
  else if ( !CG_Weapons_GetWeaponViewRoughOriginIfValid((LocalClientNum_t)v1, &NextSnap->ps, &LocalClientGlobals->refdef.viewOffset) )
  {
    if ( NextSnap->ps.pm_type == 3 || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&NextSnap->ps.otherFlags, ACTIVE, 1u) && (NextSnap->ps.linkFlags.m_flags[0] & 0x44) == 0 && BG_GetRemoteControlledVehicleEntityNum(&NextSnap->ps, Handler) == 2047 )
    {
      entity = NextSnap->ps.vehicleState.entity;
      PrevSnap = CG_SnapshotMP_GetPrevSnap((const LocalClientNum_t)v1);
      v8 = PrevSnap;
      if ( entity == 2047 )
      {
        if ( !PrevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 659, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
          __debugbreak();
        cameraTypeIndex = NextSnap->ps.cameraTypeIndex;
        if ( v8->ps.cameraTypeIndex == cameraTypeIndex || CG_Camera_ShouldInterpolateViewTransition((const LocalClientNum_t)v1, cameraTypeIndex) )
        {
          frameInterpolation = LocalClientGlobals->frameInterpolation;
          LocalClientGlobals->refdef.viewOffset.v[0] = (float)((float)(NextSnap->ps.origin.v[0] - v8->ps.origin.v[0]) * frameInterpolation) + v8->ps.origin.v[0];
          LocalClientGlobals->refdef.viewOffset.v[1] = (float)((float)(NextSnap->ps.origin.v[1] - v8->ps.origin.v[1]) * frameInterpolation) + v8->ps.origin.v[1];
          v11 = (float)((float)(NextSnap->ps.origin.v[2] - v8->ps.origin.v[2]) * frameInterpolation) + v8->ps.origin.v[2];
        }
        else
        {
          LocalClientGlobals->refdef.viewOffset.v[0] = NextSnap->ps.origin.v[0];
          LocalClientGlobals->refdef.viewOffset.v[1] = NextSnap->ps.origin.v[1];
          v11 = NextSnap->ps.origin.v[2];
        }
        LocalClientGlobals->refdef.viewOffset.v[2] = v11;
      }
      else
      {
        if ( !PrevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 651, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
          __debugbreak();
        v9 = LocalClientGlobals->frameInterpolation;
        LocalClientGlobals->refdef.viewOffset.v[0] = (float)((float)(NextSnap->ps.vehicleState.origin.v[0] - v8->ps.vehicleState.origin.v[0]) * v9) + v8->ps.vehicleState.origin.v[0];
        LocalClientGlobals->refdef.viewOffset.v[1] = (float)((float)(NextSnap->ps.vehicleState.origin.v[1] - v8->ps.vehicleState.origin.v[1]) * v9) + v8->ps.vehicleState.origin.v[1];
        LocalClientGlobals->refdef.viewOffset.v[2] = (float)((float)(NextSnap->ps.vehicleState.origin.v[2] - v8->ps.vehicleState.origin.v[2]) * v9) + v8->ps.vehicleState.origin.v[2];
      }
      LocalClientGlobals->refdef.viewOffset.v[2] = NextSnap->ps.viewHeightCurrent + LocalClientGlobals->refdef.viewOffset.v[2];
    }
    else
    {
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->refdef.viewOffset);
    }
    CG_ViewMP_GetCorpseViewPosition((const LocalClientNum_t)v1, &LocalClientGlobals->refdef.viewOffset, 0);
  }
  v13 = DVARBOOL_cg_drawPlayerBoundingBox;
  if ( !DVARBOOL_cg_drawPlayerBoundingBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerBoundingBox") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
    goto LABEL_41;
  if ( NextSnap == (const CgSnapshotMP *)-40i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&NextSnap->ps.otherFlags, ACTIVE, 0x20u) )
LABEL_41:
    CG_DebugBox(&NextSnap->ps.origin, &LocalClientGlobals->playerBox, NextSnap->ps.viewangles.v[1], &colorRed, 1, 0);
  if ( CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v1) )
  {
    pm_type = NextSnap->ps.pm_type;
    if ( pm_type == 1 || pm_type == 8 || (NextSnap->ps.linkFlags.m_flags[0] & 4) != 0 || CG_PredictMP_IsExecutionBlockingPrediction(p_ps) )
    {
      CG_PredictMP_InterpolatePlayerState((LocalClientNum_t)v1, 0, 0);
    }
    else
    {
      groundEntityNum = NextSnap->ps.groundEntityNum;
      if ( groundEntityNum > 0 && (unsigned __int16)groundEntityNum < 0x7FEu || BGMovingPlatforms::IsOnMovingPlatform(&LocalClientGlobals->predictedPlayerState) )
      {
        time = LocalClientGlobals->time;
        LocalClientGlobals->groundEntityTime = time;
      }
      else
      {
        time = LocalClientGlobals->time;
      }
      if ( (unsigned int)(time - LocalClientGlobals->groundEntityTime) < 0x3E8 )
      {
        memcpy_0(&LocalClientGlobals->predictedPlayerState, p_ps, sizeof(LocalClientGlobals->predictedPlayerState));
        LocalClientGlobals->predictedPlayerState.commandTimeInterpolated = LocalClientGlobals->predictedPlayerState.commandTime;
        LocalClientGlobals->predictedPlayerState.serverTimeInterpolated = LocalClientGlobals->predictedPlayerState.serverTime;
        LocalClientGlobals->predictedPlayerState.inputTimeInterpolated = LocalClientGlobals->predictedPlayerState.inputTime;
      }
    }
  }
  else
  {
    CG_PredictMP_InterpolatePlayerState((LocalClientNum_t)v1, 1, 1);
  }
}

/*
==============
CG_PredictMP_ShouldProcessMove
==============
*/
bool CG_PredictMP_ShouldProcessMove(pmove_t *const pm, const usercmd_s *const latestCmd)
{
  playerState_s *ps; 
  int commandTime; 
  int serverTime; 
  bool result; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 814, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 815, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !latestCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 816, ASSERT_TYPE_ASSERT, "(latestCmd)", (const char *)&queryFormat, "latestCmd") )
    __debugbreak();
  ps = pm->ps;
  commandTime = pm->cmd.commandTime;
  result = 0;
  if ( commandTime >= ps->commandTime )
  {
    serverTime = pm->cmd.serverTime;
    if ( serverTime >= ps->serverTime && commandTime <= latestCmd->commandTime && serverTime <= latestCmd->serverTime )
      return 1;
  }
  return result;
}

/*
==============
CG_PredictMP_ShouldRunPrediction
==============
*/
bool CG_PredictMP_ShouldRunPrediction(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  bool v4; 
  bool ShouldSkipPredictionForCollision; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 279, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals->demoType )
    v4 = 1;
  else
    v4 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) || CG_PredictMP_IsExecutionBlockingPrediction(p_predictedPlayerState);
  ShouldSkipPredictionForCollision = CG_PredictMP_ShouldSkipPredictionForCollision(localClientNum, p_predictedPlayerState);
  return !v4 && !ShouldSkipPredictionForCollision;
}

/*
==============
CG_PredictMP_ShouldSkipPredictionForCollision
==============
*/
bool CG_PredictMP_ShouldSkipPredictionForCollision(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  const dvar_t *v2; 
  bool enabled; 
  char v6; 
  bool IsCollisionReadyAt; 
  __int16 gridIdx; 

  v2 = DVARBOOL_cg_requireCollisionForPrediction;
  if ( !DVARBOOL_cg_requireCollisionForPrediction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_requireCollisionForPrediction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  enabled = v2->current.enabled;
  v6 = CG_GetEntity(localClientNum, ps->clientNum)->flags & 1;
  IsCollisionReadyAt = WorldCollision_IsCollisionReadyAt((const Physics_WorldId)(3 * localClientNum + 2), (const vec2_t *)&ps->origin, &gridIdx);
  return enabled && v6 && !IsCollisionReadyAt;
}

/*
==============
CG_PredictMP_ShouldSkipPredictionForGameplay
==============
*/
bool CG_PredictMP_ShouldSkipPredictionForGameplay(const LocalClientNum_t localClientNum, const cg_t *cgameGlob, const playerState_s *ps)
{
  bool result; 

  if ( cgameGlob->demoType )
    return 1;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, (POtherFlagsMP)33) )
    return 1;
  result = CG_PredictMP_IsExecutionBlockingPrediction(ps);
  if ( result )
    return 1;
  return result;
}

/*
==============
CG_PredictMP_TouchItem
==============
*/
void CG_PredictMP_TouchItem(const LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  CgWeaponMap *v4; 
  const Weapon *WeaponForEntity; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v7; 
  int EquippedWeaponIndex; 
  __int64 v9; 
  int number; 
  __int64 isPlayerView; 
  CgTrajectory v12; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 163, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 164, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v2];
  WeaponForEntity = BG_GetWeaponForEntity(v4, &cent->nextState);
  if ( (unsigned __int16)(WeaponForEntity->weaponIdx - 1) > 0x224u )
  {
    LODWORD(isPlayerView) = WeaponForEntity->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 169, ASSERT_TYPE_ASSERT, "( 1 ) <= ( entityWeapon.weaponIdx ) && ( entityWeapon.weaponIdx ) <= ( (550 - 1) )", "entityWeapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", isPlayerView, 1, 549) )
      __debugbreak();
  }
  if ( !cent->pickupPredictionTime || cent->pickupPredictionTime < CG_GetLocalClientGlobals((const LocalClientNum_t)v2)->time )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    CgTrajectory::CgTrajectory(&v12, (const LocalClientNum_t)v2, cent, &cent->nextState.lerp);
    if ( BG_PlayerTouchesItem(&LocalClientGlobals->predictedPlayerState, &cent->nextState, LocalClientGlobals->time, &v12) )
    {
      if ( BG_CanItemBeGrabbed(v4, &cent->nextState, &LocalClientGlobals->predictedPlayerState, 1) )
      {
        if ( BG_IsScavengerPickup(WeaponForEntity) )
          goto LABEL_38;
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v7 = DVARBOOL_bg_giveAll;
        if ( DVARBOOL_bg_giveAll )
        {
          Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll);
          if ( v7->current.enabled )
            goto LABEL_41;
        }
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( WeaponForEntity->weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v4, &LocalClientGlobals->predictedPlayerState, WeaponForEntity), EquippedWeaponIndex >= 0) )
          v9 = (__int64)&LocalClientGlobals->predictedPlayerState.weapEquippedData[EquippedWeaponIndex];
        else
          v9 = 0i64;
        if ( v9 )
        {
LABEL_41:
          if ( BG_PlayerHasRoomForEntAllAmmoTypes(v4, &cent->nextState, &LocalClientGlobals->predictedPlayerState) )
          {
LABEL_38:
            number = cent->nextState.number;
            cent->pickupPredictionTime = LocalClientGlobals->time + 5000;
            CG_GrabWeapon((LocalClientNum_t)v2, number, 14, WeaponForEntity, 0, 1);
          }
        }
      }
    }
  }
}

/*
==============
CG_PredictMP_UpdatePMove
==============
*/
void CG_PredictMP_UpdatePMove(pmove_t *pm, playerState_s *const playerState, const bool isInitialCall, const bool isExtrapolation)
{
  LocalClientNum_t localClientNum; 
  float v9; 
  LocalClientNum_t firstActiveIndex; 
  bool v11; 
  __int64 v12; 
  clientMigState_t migrationState; 
  cg_t *LocalClientGlobals; 
  bool v15; 
  cg_t *v16; 
  int pm_type; 
  int v18; 
  const dvar_t *v19; 
  __int64 v20; 
  __int64 v21; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 750, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  pm->isExtrapolation = isExtrapolation;
  localClientNum = pm->localClientNum;
  pm->ps = playerState;
  pm->initialCall = isInitialCall;
  v9 = cl_maxLocalClients;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    LODWORD(v20) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, cl_maxLocalClients) )
      __debugbreak();
    v9 = cl_maxLocalClients;
  }
  if ( v9 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  firstActiveIndex = cls.m_localClientsActive.firstActiveIndex;
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    firstActiveIndex = cls.m_localClientsActive.firstActiveIndex;
  }
  v11 = localClientNum == firstActiveIndex && isInitialCall || localClientNum != firstActiveIndex && !isInitialCall;
  v12 = pm->localClientNum;
  if ( (unsigned int)v12 >= 2 )
  {
    LODWORD(v21) = 2;
    LODWORD(v20) = pm->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  migrationState = clientUIActives[v12].migrationState;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)pm->localClientNum);
  v15 = 0;
  v16 = LocalClientGlobals;
  if ( migrationState == CMSTATE_INACTIVE )
    v15 = v11;
  if ( v15 )
    CGMovingPlatformClient::UpdatePredictedClient(&LocalClientGlobals->movingPlatforms, pm->localClientNum, pm, &LocalClientGlobals->moverTransform, &LocalClientGlobals->originMoverLocal);
  pm_type = pm->ps->pm_type;
  if ( pm_type < 7 )
  {
    v18 = 33636369;
    if ( pm_type == 5 )
      v18 = 8391313;
    pm->tracemask = v18;
  }
  else
  {
    pm->tracemask = 65553;
  }
  CG_Door_GetPMoveData(pm);
  pm->footstepEventType = NULL;
  v19 = DVARBOOL_killswitch_footstep_player_moveblend_enabled;
  if ( !DVARBOOL_killswitch_footstep_player_moveblend_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_footstep_player_moveblend_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled && Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED|0x80) )
    pm->footstepEventType = &v16->footstepEventType;
}

