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
  _RBX = bounds;
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+6470h]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rax+6480h]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
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
  LocalClientNum_t v12; 
  cg_t *LocalClientGlobals; 
  const CgSnapshotMP *PrevSnap; 
  const CgSnapshotMP *NextSnap; 
  bool ShouldRunPrediction; 
  const dvar_t *v22; 
  char v24; 
  CameraType cameraTypeIndex; 
  bool v27; 
  bool v28; 
  int serverTime; 
  int v30; 
  bool v87; 
  bool IsPlayerLinked; 
  bool v89; 
  __int64 v90; 
  const playerState_s *v91; 
  const playerState_s *v135; 
  unsigned int v138; 
  bool v142; 
  bool v156; 
  __int64 clientNum; 
  cg_t_vtbl *v235; 
  int v256; 
  int v258; 
  const DoorState *doorState; 
  signed __int64 v260; 
  signed __int64 v261; 
  __int64 v271; 
  playerState_s *outPs; 
  __int64 v273; 
  _BYTE v274[544]; 
  char v275; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _RBP = (unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64;
  *(_QWORD *)(_RBP + 432) = (unsigned __int64)&v271 ^ _security_cookie;
  *(_BYTE *)(_RBP + 4) = interpolateWorldUp;
  v12 = localClientNum;
  *(_DWORD *)(_RBP + 8) = grabStance;
  *(_DWORD *)(_RBP + 24) = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x20) = LocalClientGlobals;
  _RBX = LocalClientGlobals;
  _RDI = &LocalClientGlobals->predictedPlayerState;
  *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A0) = &LocalClientGlobals->predictedPlayerState;
  PrevSnap = CG_SnapshotMP_GetPrevSnap(v12);
  *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x180) = PrevSnap;
  _R13 = PrevSnap;
  NextSnap = CG_SnapshotMP_GetNextSnap(v12);
  *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = NextSnap;
  _RSI = NextSnap;
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 321, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 322, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x28) = &_RSI->ps;
  memcpy_0(_RDI, &_RSI->ps, sizeof(playerState_s));
  __asm { vmovss  xmm10, dword ptr [rbx+65E0h] }
  ShouldRunPrediction = CG_PredictMP_ShouldRunPrediction(v12);
  v22 = DVARBOOL_cg_psInterpolationDiffClientsFix;
  *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 1) = ShouldRunPrediction;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_psInterpolationDiffClientsFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( !v22->current.enabled || _R13->ps.clientNum == _RSI->ps.clientNum )
  {
    v24 = *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 1);
    outPs = _RDI;
    *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x10) = &_R13->ps;
    __asm { vmovaps xmm2, xmm10; frameInterpolation }
    CG_Predict_InterpolatePlayerState(v12, v24, *(const float *)&_XMM2, &_R13->ps, &_RSI->ps, outPs);
    cameraTypeIndex = _RSI->ps.cameraTypeIndex;
    v27 = _R13->ps.cameraTypeIndex != cameraTypeIndex && !CG_Camera_ShouldInterpolateViewTransition(v12, cameraTypeIndex);
    *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 3) = v27;
    v28 = CG_Predict_ShouldLerpViewFields(&_R13->ps, &_RSI->ps) && !v27;
    serverTime = _RSI->serverTime;
    v30 = _R13->serverTime;
    *(_BYTE *)_RBP = v28;
    if ( serverTime <= v30 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 1) )
        goto LABEL_107;
      if ( serverTime == v30 && v28 )
        _RBX->originInterpolated = 1;
      __asm { vmovaps xmm2, xmm10; fraction }
      CGMovingPlatforms::InterpolatePlayerLocalOffset(&_R13->ps, *(const playerState_s **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x28), *(float *)&_XMM2, _RDI);
      goto LABEL_13;
    }
    if ( *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 8) )
    {
      __asm { vmovaps xmm3, xmm10; fraction }
      BG_InterpolateBobCycle((BobCycle *)(_RBP + 64), &_R13->ps, &_RSI->ps, *(float *)&_XMM3);
      BobCycle::PackBobCycle((BobCycle *)(_RBP + 64), (int (*)[2])_RDI->packedBobCycle);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+76Ch]
        vmovss  xmm0, dword ptr [rsi+76Ch]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi+744h], xmm3
        vmovss  xmm4, dword ptr [r13+758h]
        vmovss  xmm0, dword ptr [rsi+758h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+730h], xmm3
        vmovss  xmm5, dword ptr [r13+210h]
        vmovss  xmm0, dword ptr [rsi+210h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm10
        vxorps  xmm0, xmm0, xmm0
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rdi+1E8h], xmm3
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vcvttss2si eax, xmm1
      }
      _RDI->weapCommon.weaponIdleTime = _R13->ps.weapCommon.weaponIdleTime + _EAX;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vcvttss2si eax, xmm1
      }
      _RDI->weapCommon.weaponIdleTime2 = _R13->ps.weapCommon.weaponIdleTime2 + _EAX;
      __asm
      {
        vmovss  xmm3, dword ptr [r13+73Ch]
        vmovss  xmm0, dword ptr [rsi+73Ch]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm10
        vcvttss2si eax, xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rdi+714h], xmm1
      }
    }
    __asm { vmovaps xmm2, xmm10; fraction }
    BG_ContextMount_InterpolateMountState(&_R13->ps, &_RSI->ps, *(float *)&_XMM2, &_RDI->mountState);
    if ( *(_BYTE *)_RBP )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+58h]
        vsubss  xmm1, xmm0, dword ptr [r13+58h]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [r13+58h]
        vmovss  dword ptr [rdi+30h], xmm3
        vmovss  xmm0, dword ptr [rsi+5Ch]
        vsubss  xmm1, xmm0, dword ptr [r13+5Ch]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [r13+5Ch]
        vmovss  dword ptr [rdi+34h], xmm3
        vmovss  xmm0, dword ptr [rsi+60h]
        vsubss  xmm1, xmm0, dword ptr [r13+60h]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [r13+60h]
        vmovss  dword ptr [rdi+38h], xmm3
      }
      _RBX->originInterpolated = 1;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+64h]
        vsubss  xmm1, xmm0, dword ptr [r13+64h]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [r13+64h]
        vmovss  dword ptr [rdi+3Ch], xmm3
        vmovss  xmm0, dword ptr [rsi+68h]
        vsubss  xmm1, xmm0, dword ptr [r13+68h]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [r13+68h]
        vmovss  dword ptr [rdi+40h], xmm3
        vmovss  xmm0, dword ptr [rsi+6Ch]
        vsubss  xmm1, xmm0, dword ptr [r13+6Ch]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [r13+6Ch]
        vmovss  dword ptr [rdi+44h], xmm3
      }
    }
    else if ( v27 )
    {
      _RDI->origin.v[0] = _RSI->ps.origin.v[0];
      _RDI->origin.v[1] = _RSI->ps.origin.v[1];
      _RDI->origin.v[2] = _RSI->ps.origin.v[2];
      _RDI->velocity.v[0] = _RSI->ps.velocity.v[0];
      _RDI->velocity.v[1] = _RSI->ps.velocity.v[1];
      _RDI->velocity.v[2] = _RSI->ps.velocity.v[2];
    }
    v87 = (_R13->ps.linkFlags.m_flags[0] & 4) != 0;
    IsPlayerLinked = BG_IsPlayerLinked(&_R13->ps);
    v89 = *(_BYTE *)_RBP == 0;
    *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 2) = IsPlayerLinked;
    v90 = 2i64;
    if ( v89 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 3) )
      {
        _RDI->viewangles.v[0] = _RSI->ps.viewangles.v[0];
        _RDI->viewangles.v[1] = _RSI->ps.viewangles.v[1];
        _RDI->viewangles.v[2] = _RSI->ps.viewangles.v[2];
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+0DCh]
          vmovss  dword ptr [rdi+0B4h], xmm0
        }
        _RDI->delta_angles.v[1] = _RSI->ps.delta_angles.v[1];
        _RDI->delta_angles.v[2] = _RSI->ps.delta_angles.v[2];
        if ( v87 || IsPlayerLinked )
        {
          _RDI->linkAngles.v[0] = _RSI->ps.linkAngles.v[0];
          _RDI->linkAngles.v[1] = _RSI->ps.linkAngles.v[1];
          _RDI->linkAngles.v[2] = _RSI->ps.linkAngles.v[2];
        }
        __asm
        {
          vmovss  xmm8, cs:__real@3f000000
          vmovss  xmm7, cs:__real@43360b61
          vmovss  xmm6, cs:__real@37800000
          vmovss  xmm5, cs:__real@43b40000
          vmulss  xmm0, xmm0, xmm7
          vaddss  xmm1, xmm0, xmm8
          vxorps  xmm9, xmm9, xmm9
          vroundss xmm2, xmm9, xmm1, 1
          vcvttss2si eax, xmm2
        }
        _ECX = (unsigned __int16)_EAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm3, xmm0, xmm6
          vaddss  xmm1, xmm3, xmm8
          vroundss xmm2, xmm9, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm0, xmm0, xmm5
          vmovss  dword ptr [rdi+0B4h], xmm0
          vmulss  xmm0, xmm7, dword ptr [rdi+0B8h]
          vaddss  xmm3, xmm0, xmm8
          vroundss xmm0, xmm9, xmm3, 1
          vcvttss2si eax, xmm0
        }
        _ECX = (unsigned __int16)_EAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, xmm6
          vaddss  xmm2, xmm4, xmm8
          vroundss xmm3, xmm9, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm5
          vmovss  dword ptr [rdi+0B8h], xmm0
          vmulss  xmm0, xmm7, dword ptr [rdi+0BCh]
          vaddss  xmm3, xmm0, xmm8
          vroundss xmm0, xmm9, xmm3, 1
          vcvttss2si eax, xmm0
        }
        _ECX = (unsigned __int16)_EAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, xmm6
          vaddss  xmm2, xmm4, xmm8
          vroundss xmm3, xmm9, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm5
          vmovss  dword ptr [rdi+0BCh], xmm0
        }
      }
      v135 = *(const playerState_s **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
      goto LABEL_86;
    }
    if ( !CG_PredictMP_ShouldRunPrediction(v12) || (v91 = *(const playerState_s **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x10), BG_IsPlayerLinked(v91)) || BG_IsPlayerInExecution(v91) )
    {
      __asm { vmovaps xmm2, xmm10; frac }
      LerpAngles(&_R13->ps.viewangles, &_RSI->ps.viewangles, *(const float *)&_XMM2, &_RDI->viewangles);
    }
    else
    {
      _RDI->viewangles.v[0] = _RSI->ps.viewangles.v[0];
      _RDI->viewangles.v[1] = _RSI->ps.viewangles.v[1];
      _RDI->viewangles.v[2] = _RSI->ps.viewangles.v[2];
    }
    if ( v87 || *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 2) )
    {
      __asm { vmovaps xmm2, xmm10; frac }
      LerpAngles(&_R13->ps.linkAngles, &_RSI->ps.linkAngles, *(const float *)&_XMM2, &_RDI->linkAngles);
    }
    __asm { vmovaps xmm2, xmm10; frac }
    LerpAngles(&_R13->ps.delta_angles, &_RSI->ps.delta_angles, *(const float *)&_XMM2, &_RDI->delta_angles);
    __asm
    {
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm6, cs:__real@43360b61
      vmulss  xmm1, xmm6, dword ptr [rdi+0B4h]
      vmovss  xmm5, cs:__real@37800000
      vmovss  xmm11, cs:__real@43b40000
      vxorps  xmm8, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm9
      vroundss xmm3, xmm8, xmm2, 1
      vcvttss2si eax, xmm3
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, xmm5
      vaddss  xmm1, xmm3, xmm9
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm11
      vmovss  dword ptr [rdi+0B4h], xmm0
      vmulss  xmm0, xmm6, dword ptr [rdi+0B8h]
      vaddss  xmm3, xmm0, xmm9
      vroundss xmm0, xmm8, xmm3, 1
      vcvttss2si eax, xmm0
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm5
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm11
      vmovss  dword ptr [rdi+0B8h], xmm0
      vmulss  xmm0, xmm6, dword ptr [rdi+0BCh]
      vaddss  xmm3, xmm0, xmm9
      vroundss xmm0, xmm8, xmm3, 1
      vcvttss2si eax, xmm0
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm5
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm11
      vmovss  dword ptr [rdi+0BCh], xmm0
    }
    if ( !v87 && !*(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 2) )
    {
      v135 = *(const playerState_s **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
      if ( !v135 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v135 == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v135->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v135->eFlags, ACTIVE, 6u) )
      {
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v135->eFlags, ACTIVE, 7u) )
        {
          _RBX = *(cg_t **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
LABEL_86:
          if ( _RSI->ps.cursorHint == HINT_NONE )
          {
            _RDI->cursorHintString = 0;
            *(_WORD *)&_RDI->cursorHintData = 0;
            _RDI->cursorHintEntIndex = 2047;
          }
          __asm { vmovaps xmm3, xmm10; f }
          CG_Vehicle_InterpolatePlayerState(v12, _R13, _RSI, *(float *)&_XMM3, _RDI);
          if ( *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 4) )
          {
            _RDX = &_RSI->ps.worldUpAngles;
            __asm { vmovss  xmm0, dword ptr [rdx] }
            _RCX = &_R13->ps.worldUpAngles;
            __asm { vucomiss xmm0, dword ptr [rcx] }
            if ( *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 4) )
              goto LABEL_110;
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+4]
              vucomiss xmm0, dword ptr [rcx+4]
            }
            if ( *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 4) )
              goto LABEL_110;
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+8]
              vucomiss xmm0, dword ptr [rcx+8]
            }
            if ( *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 4) )
            {
LABEL_110:
              if ( *(_BYTE *)_RBP )
              {
                __asm { vmovaps xmm2, xmm10; fraction }
                BgSpaceship::AngleLerp(_RCX, _RDX, *(const float *)&_XMM2, &_RDI->worldUpAngles);
              }
            }
          }
          CG_FireAnimStabilizer_InterpolatePlayerState(v12, _R13, _RSI, _RDI);
          if ( *(_BYTE *)_RBP )
            CG_PlayerState_InterpolateSlopeProperties(v12, _RDI);
          v89 = *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 1) == 0;
          __asm
          {
            vmovss  xmm7, cs:__real@3f800000
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [r13+1158h]
            vsubss  xmm0, xmm7, xmm10
            vmulss  xmm3, xmm1, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rsi+1158h]
            vmulss  xmm2, xmm1, xmm10
            vaddss  xmm0, xmm3, xmm2
            vcvttss2si eax, xmm0
          }
          _RDI->weapCommon.crouchProneBlendMap = _EAX;
          if ( v89 )
          {
            CG_View_UpdatePlayerView(v12, 1, _RBX->frametime, _RDI->inputTimeInterpolated, _RDI->serverTimeInterpolated, &_RBX->predictedViewState);
            clientNum = (unsigned int)_RBX->predictedPlayerState.clientNum;
            v235 = _RBX->__vftable;
            *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 8) = clientNum;
            if ( v235->HasCharacterInfo(_RBX, clientNum) )
            {
              if ( CG_GetCharacterInfo(_RBX, *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 8)) )
              {
                *(double *)&_XMM0 = CG_TraceGroundWorkers_GetTraceOffset();
                __asm { vmovaps xmm6, xmm0 }
                if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R13->ps.pm_flags, ACTIVE, 6u) )
                {
                  __asm { vmovss  xmm0, dword ptr [rbx+800h]; yaw }
                  YawVectors(*(float *)&_XMM0, (vec3_t *)(_RBP + 416), (vec3_t *)(_RBP + 384));
                  __asm
                  {
                    vmovss  xmm3, cs:__real@42000000
                    vmovss  xmm2, dword ptr [rdi+30h]
                    vmulss  xmm1, xmm3, dword ptr [rbp+1A0h]
                    vmovss  xmm4, dword ptr [rdi+34h]
                    vaddss  xmm5, xmm6, dword ptr [rdi+38h]
                    vmovss  dword ptr [rbp+180h], xmm2
                    vaddss  xmm2, xmm1, xmm2
                    vmulss  xmm1, xmm3, dword ptr [rbp+1A4h]
                    vmovss  dword ptr [rbp+190h], xmm2
                    vaddss  xmm2, xmm1, xmm4
                    vmulss  xmm1, xmm3, dword ptr [rbp+1A8h]
                    vmovss  dword ptr [rbp+194h], xmm2
                    vaddss  xmm2, xmm1, xmm5
                    vmovss  dword ptr [rbp+198h], xmm2
                    vmovss  dword ptr [rbp+184h], xmm4
                    vmovss  dword ptr [rbp+188h], xmm5
                  }
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm1, dword ptr [rdi+34h]
                    vmovss  xmm2, dword ptr [rdi+38h]
                    vmovss  xmm3, dword ptr [rdi+30h]
                    vaddss  xmm0, xmm6, xmm2
                    vmovss  dword ptr [rbp+188h], xmm0
                    vmulss  xmm0, xmm6, xmm7
                    vmovss  dword ptr [rbp+184h], xmm1
                    vmovss  dword ptr [rbp+194h], xmm1
                    vsubss  xmm1, xmm2, xmm0
                    vmovss  dword ptr [rbp+198h], xmm1
                    vmovss  dword ptr [rbp+180h], xmm3
                    vmovss  dword ptr [rbp+190h], xmm3
                  }
                }
                __asm { vmovsd  xmm0, qword ptr [rbp+180h] }
                *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x104) = *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 8);
                v256 = *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x188);
                __asm
                {
                  vmovsd  qword ptr [rbp+10Ch], xmm0
                  vmovsd  xmm0, qword ptr [rbp+190h]
                }
                *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x114) = v256;
                v258 = *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x198);
                __asm { vmovsd  qword ptr [rbp+118h], xmm0 }
                *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x120) = v258;
                *(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x100) = 2;
                *(_WORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x108) = 0;
                *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x128) = 0i64;
                CG_TraceGroundWorkers_AddEvent((const CgTraceGroundWorkerEvent *)(_RBP + 128));
              }
            }
          }
          doorState = _RSI->ps.doorState;
          v260 = (char *)_RDI - (char *)doorState;
          v261 = (char *)_R13 - (char *)doorState;
          do
          {
            __asm { vmovaps xmm2, xmm10; fraction }
            CG_Door_InterpolateDoorState((const DoorState *)((char *)doorState + v261 + 1060), doorState, *(float *)&_XMM2, (DoorState *)((char *)&doorState[63].moveType + v260));
            ++doorState;
            --v90;
          }
          while ( v90 );
          __asm { vmovaps xmm2, xmm10; fraction }
          CGMovingPlatforms::InterpolatePlayerLocalOffset(v135, *(const playerState_s **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x28), *(float *)&_XMM2, _RDI);
          CG_DrawDebug_Player_InterpolatePs(v12);
          goto LABEL_107;
        }
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
      }
    }
    __asm { vmovss  xmm7, cs:__real@3b360b61 }
    _R14 = &_R13->ps.viewAngleClampBase;
    v138 = 0;
    _R12 = (char *)_RSI - (char *)_R13;
    *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x38) = (char *)&_RDI->viewAngleClampRange - (char *)&_R13->ps.viewAngleClampBase;
    _RDI = (char *)&_RDI->viewAngleClampBase - (char *)&_R13->ps.viewAngleClampBase;
    _R13 = (char *)&_RSI->ps.viewAngleClampRange - (char *)&_R13->ps.viewAngleClampBase;
    v142 = 1;
    do
    {
      if ( !v142 )
      {
        LODWORD(v273) = 2;
        LODWORD(outPs) = v138;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v273) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [r12+r14] }
      if ( v138 >= 2 )
      {
        LODWORD(v273) = 2;
        LODWORD(outPs) = v138;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v273) )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm0, xmm6, dword ptr [r14]
        vmulss  xmm4, xmm0, xmm7
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm8, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm11
        vmulss  xmm2, xmm0, xmm10
        vaddss  xmm6, xmm2, dword ptr [r14]
      }
      if ( v138 >= 2 )
      {
        LODWORD(v273) = 2;
        LODWORD(outPs) = v138;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v273) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi+r14], xmm6 }
      if ( v138 >= 2 )
      {
        LODWORD(v273) = 2;
        LODWORD(outPs) = v138;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v273) )
          __debugbreak();
        LODWORD(v273) = 2;
        LODWORD(outPs) = v138;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v273) )
          __debugbreak();
        LODWORD(v273) = 2;
        LODWORD(outPs) = v138;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v273) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+r13]
        vsubss  xmm1, xmm0, dword ptr [r14+8]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm6, xmm2, dword ptr [r14+8]
      }
      if ( v138 >= 2 )
      {
        LODWORD(v273) = 2;
        LODWORD(outPs) = v138;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outPs, v273) )
          __debugbreak();
      }
      _RAX = *(_QWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x38);
      ++v138;
      __asm { vmovss  dword ptr [rax+r14], xmm6 }
      _R14 = (vec2_t *)((char *)_R14 + 4);
      v142 = v138 < 2;
    }
    while ( (int)v138 < 2 );
    v156 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END);
    _RDI = *(playerState_s **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A0);
    _RSI = *(const CgSnapshotMP **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x190);
    _R13 = *(const CgSnapshotMP **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x180);
    v12 = *(_DWORD *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x18);
    _RBX = *(cg_t **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x20);
    v135 = *(const playerState_s **)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
    if ( v156 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r13+238h]
        vmovss  xmm0, dword ptr [rsi+238h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi+210h], xmm3
        vmovss  xmm4, dword ptr [r13+23Ch]
        vmovss  xmm0, dword ptr [rsi+23Ch]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+214h], xmm3
        vmovss  xmm3, dword ptr [r13+230h]
        vmovss  xmm0, dword ptr [rsi+230h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi+208h], xmm3
        vmovss  xmm4, dword ptr [r13+234h]
        vmovss  xmm0, dword ptr [rsi+234h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+20Ch], xmm3
      }
    }
    goto LABEL_86;
  }
  __asm { vmovaps xmm2, xmm10; frameInterpolation }
  CG_Predict_InterpolatePlayerState(v12, 1, *(const float *)&_XMM2, &_R13->ps, &_RSI->ps, _RDI);
  if ( !*(_BYTE *)(((unsigned __int64)v274 & 0xFFFFFFFFFFFFFF80ui64) + 1) )
LABEL_13:
    CG_View_UpdatePlayerView(v12, 1, _RBX->frametime, _RDI->inputTimeInterpolated, _RDI->serverTimeInterpolated, &_RBX->predictedViewState);
LABEL_107:
  _R11 = &v275;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
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
  __int64 v3; 
  const dvar_t *v4; 
  int v13; 
  Bounds outBounds; 
  _BYTE v15[96]; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState == CA_ACTIVE )
  {
    if ( CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->nextSnap )
    {
      _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
      CG_SetupPrePredictBounds(_RBX, &outBounds);
      memset_0(v15, 0, sizeof(v15));
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
      *(BgGroundState **)((char *)&cg_pmove[0].ground + v3) = (BgGroundState *)v15;
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
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx+5971Ch]
            vmovsd  xmm1, qword ptr [rbx+5973Ch]
            vmovups ymmword ptr [rbx+184h], ymm0
            vmovsd  qword ptr [rbx+1A4h], xmm1
          }
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+0D8h+outBounds.midPoint]
          vmovups xmmword ptr [rbx+6470h], xmm0
          vmovsd  xmm1, qword ptr [rsp+0D8h+outBounds.halfSize+4]
          vmovsd  qword ptr [rbx+6480h], xmm1
          vmovups ymm0, [rsp+0D8h+var_78]
          vmovups ymmword ptr [rbx+6488h], ymm0
          vmovups ymm1, [rsp+0D8h+var_58]
          vmovups ymmword ptr [rbx+64A8h], ymm1
          vmovups ymm0, [rsp+0D8h+var_38]
          vmovups ymmword ptr [rbx+64C8h], ymm0
        }
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
  CgGlobalsMP *v4; 
  bool m_skydiveAutodeployOffsetIsValid; 
  int v6; 
  __int16 meleeChargeEnt; 
  __int64 clientNum; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const dvar_t *v20; 
  CgHandler *v21; 
  float v23; 
  unsigned int v24; 
  characterInfo_t *CharacterInfo; 
  int time; 
  CgHandler *v37; 
  CgAntiLag *v38; 
  const int *p_weaponShotCount; 
  __int64 v40; 
  __int64 v41; 
  CgWeaponMap *weaponMap; 
  BgWeaponMap *weaponMapa; 
  CgTrajectory v44; 
  usercmd_s ucmd; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _R13 = &cg_pmove[v1];
  v4 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
  CG_GameInterface_OnPredictPlayerState((LocalClientNum_t)v1);
  LocalClientGlobals->lastFrame.aimSpreadScale = LocalClientGlobals->predictedPlayerState.weapCommon.aimSpreadScale;
  m_skydiveAutodeployOffsetIsValid = _R13->m_skydiveAutodeployOffsetIsValid;
  v4->m_skydiveAutodeployOffsetIsValid = m_skydiveAutodeployOffsetIsValid;
  if ( m_skydiveAutodeployOffsetIsValid )
    v4->m_skydiveAutodeployOffset = _R13->m_skydiveAutodeployOffset;
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
  _R12 = CG_GetEntity((const LocalClientNum_t)v1, LocalClientGlobals->predictedPlayerState.clientNum);
  CG_SetPoseOrigin(&_R12->pose, &LocalClientGlobals->predictedPlayerState.origin);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 5u) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x1Bu) )
  {
    CgTrajectory::CgTrajectory(&v44, (const LocalClientNum_t)v1, _R12, &_R12->nextState.lerp);
    BgTrajectory::EvaluateAngTrajectory(&v44, LocalClientGlobals->time, &_R12->pose.angles);
  }
  meleeChargeEnt = LocalClientGlobals->predictedPlayerState.meleeChargeEnt;
  if ( meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu )
    CG_PlayersMP_CorpseSyncMelee((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  CG_Vehicle_PlayerStateToVehicleState((LocalClientNum_t)v1);
  if ( CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v1) )
  {
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 294, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (unsigned int)(clientNum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)clientNum, "signed", clientNum) )
      __debugbreak();
    _R12->nextState.number = clientNum;
    _R12->nextState.otherEntityNum = 2047;
    Handler = CgHandler::getHandler(_R13->localClientNum);
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v1);
    BG_PlayerStateToEntityState(Instance, &LocalClientGlobals->predictedPlayerState, &_R12->nextState, 0, Handler);
    __asm
    {
      vmovups ymm0, ymmword ptr [r12+19Ch]
      vmovups ymm1, ymmword ptr [r12+1BCh]
    }
    _R12->flags |= 1u;
    __asm
    {
      vmovups ymmword ptr [r12+120h], ymm0
      vmovups ymm0, ymmword ptr [r12+1DCh]
      vmovups ymmword ptr [r12+140h], ymm1
      vmovups xmm1, xmmword ptr [r12+1FCh]
      vmovups ymmword ptr [r12+160h], ymm0
      vmovups xmmword ptr [r12+180h], xmm1
      vmovss  xmm0, dword ptr [r13+344h]; pitch
    }
    _R12->nextState.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
    __asm { vmovss  xmm0, dword ptr [r13+348h]; pitch }
    _R12->nextState.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
  }
  if ( LocalClientGlobals->demoType == NONE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) && !CG_PredictMP_IsExecutionBlockingPrediction(&LocalClientGlobals->predictedPlayerState) && CG_PredictMP_ShouldSkipPredictionForCollision((const LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState) )
  {
    memset_0(&ucmd, 0, sizeof(ucmd));
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    CL_GetUserCmd((LocalClientNum_t)v1, CmdNumber, &ucmd);
    BG_UpdateViewAngles_ClampDefault(&LocalClientGlobals->predictedPlayerState, &ucmd);
    v20 = DVARBOOL_killswitch_missing_collision_predicted_pose_enabled;
    if ( !DVARBOOL_killswitch_missing_collision_predicted_pose_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_missing_collision_predicted_pose_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      v21 = CgHandler::getHandler(_R13->localClientNum);
      BG_PlayerToEntity_SetTrajectory_Angles(&LocalClientGlobals->predictedPlayerState, &_R12->nextState.lerp, 0, v21);
      __asm { vmovups ymm0, ymmword ptr [r12+1C4h] }
      v23 = _R12->nextState.lerp.apos.trDelta.v[2];
      __asm { vmovups ymmword ptr [r12+148h], ymm0 }
      _R12->prevState.apos.trDelta.v[2] = v23;
    }
  }
  v24 = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v24) )
  {
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, v24);
    _RBX = CharacterInfo;
    if ( CharacterInfo )
    {
      __asm { vmovss  xmm2, dword ptr [r13+384h]; stepHeight }
      BG_AnimationMP_UpdateCharacterInfoHeightOffset(&LocalClientGlobals->predictedPlayerState, CharacterInfo, *(float *)&_XMM2, _R13->m_flags, LocalClientGlobals->frametime);
      _R13->m_flags &= ~0x100u;
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v41) = 2;
        LODWORD(v40) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 1145, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      weaponMap = CgWeaponMap::ms_instance[v1];
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 1150, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      _RAX = BG_GetServerDObjHeldWeaponForPlayer(weaponMap, &LocalClientGlobals->predictedPlayerState);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+760h], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbx+780h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbx+790h], xmm0
      }
      *(_DWORD *)&_RBX->serverDobjHeldWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      _RAX = BG_GetServerDObjHeldWeaponForPlayer(weaponMap, &LocalClientGlobals->predictedPlayerState);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+79Ch], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbx+7BCh], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbx+7CCh], xmm0
      }
      *(_DWORD *)&_RBX->serverDobjTurretWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      _RBX->serverDobjHideWeapon = LocalClientGlobals->predictedPlayerState.serverDobjHideWeapon == 1;
      _RBX->serverDobjStowHeldWeapon = LocalClientGlobals->predictedPlayerState.serverDobjStowHeldWeapon == 1;
    }
  }
  CG_Door_PlayerStateToCharacterInfo((const LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  time = LocalClientGlobals->time;
  v37 = CgHandler::getHandler(_R13->localClientNum);
  weaponMapa = (BgWeaponMap *)v37;
  if ( !CgWeaponMap::ms_instance[v1] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v37 = (CgHandler *)weaponMapa;
  }
  BG_PlayerToEntity_ProcessEvents(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState, &_R12->nextState, v37, time);
  _R12->pose.eType = _R12->nextState.eType;
  if ( !CgAntiLag::IsDisabledForMigration((const LocalClientNum_t)v1) )
  {
    v38 = CgAntiLag::GetInstance((const LocalClientNum_t)v1);
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 1313, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
      __debugbreak();
    CgAntiLag::ArchiveEntity(v38, _R12, 1);
  }
  p_weaponShotCount = (const int *)&LocalClientGlobals->predictedPlayerState.weapState[0].weaponShotCount;
  do
  {
    Tracer_SetDrawCounter((const LocalClientNum_t)v1, _R12->nextState.number, (const PlayerHandIndex)v6++, *p_weaponShotCount);
    p_weaponShotCount += 20;
  }
  while ( v6 < 2 );
  LocalClientGlobals->predictedPlayerEntity = _R12;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    LocalClientGlobals->lastGroundSurfaceType = _R13->ground->surfaceType;
    _R12->surfaceType = _R13->ground->surfaceType;
  }
  AimAssist_UpdateAimAssistPlayerState((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  LocalClientGlobals->fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
  LocalClientGlobals->fOffhandPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.offhandAdsFrac;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v41) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v41) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v41) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v40) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v40, v41) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
  {
    LODWORD(v41) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v41) )
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
  const playerState_s *p_predictedPlayerState; 
  const ClActiveClient *Client; 
  int v7; 
  unsigned __int8 v8; 
  CgPMove *v10; 
  int v11; 
  const dvar_t *v12; 
  usercmd_s *p_cmd; 
  bool playerScriptTeleported; 
  bool v16; 
  int commandTime; 
  int v18; 
  bool v19; 
  CgPlayer_Asm *v24; 
  int v25; 
  centity_t **v26; 
  centity_t *v27; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  int cmdNumber; 
  __int64 v33; 
  unsigned int holdrand; 
  usercmd_s *v36; 
  CgPMove *v37; 
  CgGlobalsMP *v38; 
  __int64 v39; 
  usercmd_s ucmd; 
  usercmd_s cmd; 

  v39 = -2i64;
  v3 = localClientNum;
  Profile_Begin(429);
  _R14 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  v38 = _R14;
  if ( !_R14->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 904, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  p_predictedPlayerState = &_R14->predictedPlayerState;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v3);
  v7 = ClActiveClient_GetCmdNumber(Client);
  cmdNumber = v7;
  v8 = 0;
  if ( !CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v3) )
    goto LABEL_13;
  _RBX = v3;
  v33 = v3;
  v10 = &cg_pmove[v3];
  v37 = v10;
  CG_PredictMP_UpdatePMove(v10, &_R14->predictedPlayerState, initialCall != 0, 0);
  v11 = v7 - 127;
  if ( !CL_GetUserCmd((LocalClientNum_t)v3, v11, &ucmd) )
  {
    if ( CL_GetUserCmd((LocalClientNum_t)v3, cmdNumber, &cmd) )
      BG_UpdateViewAngles_ClampDefault(&_R14->predictedPlayerState, &cmd);
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
    p_cmd = &cg_pmove[_RBX].cmd;
    v36 = p_cmd;
    do
    {
      if ( CL_GetUserCmd((LocalClientNum_t)v3, v11, p_cmd) && CL_GetUserCmd((LocalClientNum_t)v3, v11 - 1, &cg_pmove[_RBX].oldcmd) && CG_PredictMP_ShouldProcessMove(v10, &cmd) )
      {
        playerScriptTeleported = _R14->playerScriptTeleported;
        v16 = BGMovingPlatforms::IsOnMovingPlatform(p_predictedPlayerState) != 0;
        commandTime = p_predictedPlayerState->commandTime;
        v18 = Com_GetUserCommandTime(v36) - commandTime;
        v19 = v16;
        v10 = v37;
        CgPMove::UpdatePredictionError(v37, v19, playerScriptTeleported);
        _RBX = v3;
        _RSI = cg_pmove;
        if ( PM_Skydive_ShouldLockViewInput(v10) )
        {
          _RCX = cg_pmove[v33].ps;
          __asm
          {
            vmovsd  xmm0, qword ptr [r14+49DF0h]
            vmovsd  qword ptr [rcx+1D8h], xmm0
          }
          _RCX->viewangles.v[2] = _R14->gunAngles.v[2];
        }
        Profile_Begin(10);
        if ( Pmove(v10) )
          v8 = 1;
        Profile_EndInternal(NULL);
        if ( v8 )
        {
          if ( !initialCall )
          {
            CG_View_UpdatePlayerView((const LocalClientNum_t)v3, 1, v18, cg_pmove[v33].cmd.inputTime, cg_pmove[v33].cmd.serverTime, &_R14->predictedViewState);
            __asm { vmovss  xmm2, dword ptr [rbx+rsi+330h]; speed }
            *cg_pmove[v33].footstepEventType = PM_Footstep_UpdateMoveType(v18, v10, *(const float *)&_XMM2, &_R14->footstepWeight);
          }
          p_predictedPlayerState = &_R14->predictedPlayerState;
          holdrand = PM_Pmove_GetHoldRand(v36, &_R14->predictedPlayerState);
          v24 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v3);
          CgPlayer_Asm::HandleMisprediction(v24, _R14->playerASMLastCommandTime, &_R14->playerASMLastAnimState, &_R14->predictedPlayerState, &holdrand);
        }
        else
        {
          p_predictedPlayerState = &_R14->predictedPlayerState;
        }
        if ( CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->predictedPlayerState.pm_type <= 1u )
        {
          v25 = 0;
          if ( cg_itemEntityCount > 0 )
          {
            v26 = cg_itemEntities;
            do
            {
              v27 = *v26;
              if ( (*v26)->nextState.eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 218, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_ITEM)", (const char *)&queryFormat, "cent->nextState.eType == ET_ITEM") )
                __debugbreak();
              CG_PredictMP_TouchItem((const LocalClientNum_t)v3, v27);
              ++v25;
              ++v26;
            }
            while ( v25 < cg_itemEntityCount );
            _R14 = v38;
            _RBX = v3;
            v10 = v37;
            p_predictedPlayerState = &v38->predictedPlayerState;
          }
        }
      }
      ++v11;
      p_cmd = v36;
    }
    while ( v11 <= cmdNumber );
  }
  cg_pmove[_RBX].footstepEventType = NULL;
  if ( v8 )
  {
    _R14->playerASMLastCommandTime = 0;
  }
  else if ( !_R14->playerTeleported )
  {
    _R14->predictedPlayerState.viewangles.v[0] = _R14->oldViewangles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [r14+0C52B4h]
      vmovss  dword ptr [r14+1E4h], xmm0
      vmovss  xmm1, dword ptr [r14+0C52B8h]
      vmovss  dword ptr [r14+1E8h], xmm1
    }
  }
  v30 = DVARINT_cg_showmiss;
  if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( v30->current.integer > 1 )
    Com_Printf(17, "[%i : %i]\n", (unsigned int)cg_pmove[v33].cmd.serverTime, (unsigned int)_R14->time);
  if ( !v8 )
  {
    v31 = DVARINT_cg_showmiss;
    if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.integer )
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
  _RDI = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  _RDI->oldCommandTime = _RDI->predictedPlayerState.commandTime;
  _RDI->oldServerTime = _RDI->predictedPlayerState.serverTime;
  _RDI->oldOrigin = _RDI->predictedPlayerState.origin;
  _RDI->oldViewangles = _RDI->predictedPlayerState.viewangles;
  MatrixCopy43(&_RDI->moverTransform, &_RDI->oldMoverTransform);
  _RDI->oldMoverId = _RDI->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
  CG_PlayerState_ExtractTransPlayerState(&_RDI->predictedPlayerState, &_RDI->oldTransPlayerState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+184h]
    vmovsd  xmm1, qword ptr [rdi+1A4h]
    vmovups ymmword ptr [rdi+5971Ch], ymm0
    vmovsd  qword ptr [rdi+5973Ch], xmm1
  }
}

/*
==============
CG_PredictMP_SetupPlayerState
==============
*/
void CG_PredictMP_SetupPlayerState(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  CgHandler *Handler; 
  int entity; 
  const CgSnapshotMP *PrevSnap; 
  CameraType cameraTypeIndex; 
  const dvar_t *v43; 
  int pm_type; 
  __int16 groundEntityNum; 
  int time; 

  v2 = localClientNum;
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  _RDI->refdef.viewOffsetPrev = _RDI->refdef.viewOffset;
  _RDI->physicsTime = _RDI->nextSnap->serverTime;
  _R15 = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v2);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 604, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  _RSI = &_R15->ps;
  Handler = CgHandler::getHandler((LocalClientNum_t)v2);
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_UpdateWeaponAnimArrays(CgWeaponMap::ms_instance[v2], &_R15->ps, Handler);
  if ( CG_View_IsKillCamEntityView((const LocalClientNum_t)v2) )
  {
    CG_KillCam_UpdateKillCamEntityViewOffset((const LocalClientNum_t)v2);
  }
  else if ( CG_IsCinematicCameraActive((LocalClientNum_t)v2) || CG_ModelPreviewerNeedsVieworgInterpSkipped((LocalClientNum_t)v2) )
  {
    RefdefView_GetOrg(&_RDI->refdef.view, &_RDI->refdef.viewOffset);
  }
  else if ( !CG_Weapons_GetWeaponViewRoughOriginIfValid((LocalClientNum_t)v2, &_R15->ps, &_RDI->refdef.viewOffset) )
  {
    if ( _R15->ps.pm_type == 3 || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->ps.otherFlags, ACTIVE, 1u) && (_R15->ps.linkFlags.m_flags[0] & 0x44) == 0 && BG_GetRemoteControlledVehicleEntityNum(&_R15->ps, Handler) == 2047 )
    {
      entity = _R15->ps.vehicleState.entity;
      __asm { vmovaps [rsp+78h+var_38], xmm6 }
      PrevSnap = CG_SnapshotMP_GetPrevSnap((const LocalClientNum_t)v2);
      _R12 = PrevSnap;
      if ( entity == 2047 )
      {
        if ( !PrevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 659, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
          __debugbreak();
        cameraTypeIndex = _R15->ps.cameraTypeIndex;
        if ( _R12->ps.cameraTypeIndex == cameraTypeIndex || CG_Camera_ShouldInterpolateViewTransition((const LocalClientNum_t)v2, cameraTypeIndex) )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rdi+65E0h]
            vmovss  xmm0, dword ptr [r15+58h]
            vsubss  xmm1, xmm0, dword ptr [r12+58h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [r12+58h]
            vmovss  dword ptr [rdi+699Ch], xmm3
            vmovss  xmm0, dword ptr [r15+5Ch]
            vsubss  xmm1, xmm0, dword ptr [r12+5Ch]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [r12+5Ch]
            vmovss  dword ptr [rdi+69A0h], xmm3
            vmovss  xmm0, dword ptr [r15+60h]
            vsubss  xmm1, xmm0, dword ptr [r12+60h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm0, xmm2, dword ptr [r12+60h]
          }
        }
        else
        {
          _RDI->refdef.viewOffset.v[0] = _R15->ps.origin.v[0];
          _RDI->refdef.viewOffset.v[1] = _R15->ps.origin.v[1];
          __asm { vmovss  xmm0, dword ptr [r15+60h] }
        }
        __asm { vmovss  dword ptr [rdi+69A4h], xmm0 }
      }
      else
      {
        if ( !PrevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_predict_mp.cpp", 651, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
          __debugbreak();
        __asm
        {
          vmovss  xmm6, dword ptr [rdi+65E0h]
          vmovss  xmm3, dword ptr [r12+154h]
          vmovss  xmm0, dword ptr [r15+154h]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm3
          vmovss  dword ptr [rdi+699Ch], xmm3
          vmovss  xmm4, dword ptr [r12+158h]
          vmovss  xmm0, dword ptr [r15+158h]
          vsubss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm4
          vmovss  dword ptr [rdi+69A0h], xmm3
          vmovss  xmm5, dword ptr [r12+15Ch]
          vmovss  xmm0, dword ptr [r15+15Ch]
          vsubss  xmm1, xmm0, xmm5
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm5
          vmovss  dword ptr [rdi+69A4h], xmm3
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+210h]
        vaddss  xmm1, xmm0, dword ptr [rdi+69A4h]
        vmovaps xmm6, [rsp+78h+var_38]
        vmovss  dword ptr [rdi+69A4h], xmm1
      }
    }
    else
    {
      RefdefView_GetOrg(&_RDI->refdef.view, &_RDI->refdef.viewOffset);
    }
    CG_ViewMP_GetCorpseViewPosition((const LocalClientNum_t)v2, &_RDI->refdef.viewOffset, 0);
  }
  v43 = DVARBOOL_cg_drawPlayerBoundingBox;
  if ( !DVARBOOL_cg_drawPlayerBoundingBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerBoundingBox") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( v43->current.enabled )
    goto LABEL_41;
  if ( _R15 == (const CgSnapshotMP *)-40i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->ps.otherFlags, ACTIVE, 0x20u) )
  {
LABEL_41:
    __asm { vmovss  xmm2, dword ptr [rsi+1DCh]; yaw }
    CG_DebugBox(&_R15->ps.origin, &_RDI->playerBox, *(float *)&_XMM2, &colorRed, 1, 0);
  }
  if ( CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v2) )
  {
    pm_type = _R15->ps.pm_type;
    if ( pm_type == 1 || pm_type == 8 || (_R15->ps.linkFlags.m_flags[0] & 4) != 0 || CG_PredictMP_IsExecutionBlockingPrediction(_RSI) )
    {
      CG_PredictMP_InterpolatePlayerState((LocalClientNum_t)v2, 0, 0);
    }
    else
    {
      groundEntityNum = _R15->ps.groundEntityNum;
      if ( groundEntityNum > 0 && (unsigned __int16)groundEntityNum < 0x7FEu || BGMovingPlatforms::IsOnMovingPlatform(&_RDI->predictedPlayerState) )
      {
        time = _RDI->time;
        _RDI->groundEntityTime = time;
      }
      else
      {
        time = _RDI->time;
      }
      if ( (unsigned int)(time - _RDI->groundEntityTime) < 0x3E8 )
      {
        memcpy_0(&_RDI->predictedPlayerState, _RSI, sizeof(_RDI->predictedPlayerState));
        _RDI->predictedPlayerState.commandTimeInterpolated = _RDI->predictedPlayerState.commandTime;
        _RDI->predictedPlayerState.serverTimeInterpolated = _RDI->predictedPlayerState.serverTime;
        _RDI->predictedPlayerState.inputTimeInterpolated = _RDI->predictedPlayerState.inputTime;
      }
    }
  }
  else
  {
    CG_PredictMP_InterpolatePlayerState((LocalClientNum_t)v2, 1, 1);
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

