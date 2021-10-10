/*
==============
CG_PredictSP_ClearSavedPlayerState
==============
*/

void __fastcall CG_PredictSP_ClearSavedPlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictSP_ClearSavedPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictSP_PredictAllPlayerState
==============
*/

void CG_PredictSP_PredictAllPlayerState(void)
{
  ?CG_PredictSP_PredictAllPlayerState@@YAXXZ();
}

/*
==============
CG_PredictSP_SavePlayerState
==============
*/

void __fastcall CG_PredictSP_SavePlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictSP_SavePlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictSP_PrePredictAllPlayerState
==============
*/

void CG_PredictSP_PrePredictAllPlayerState(void)
{
  ?CG_PredictSP_PrePredictAllPlayerState@@YAXXZ();
}

/*
==============
CG_PredictSP_ShouldRunPrediction
==============
*/

bool __fastcall CG_PredictSP_ShouldRunPrediction(const LocalClientNum_t localClientNum)
{
  return ?CG_PredictSP_ShouldRunPrediction@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictSP_PredictPlayerState
==============
*/

void __fastcall CG_PredictSP_PredictPlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictSP_PredictPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictSP_SetupPlayerState
==============
*/

void __fastcall CG_PredictSP_SetupPlayerState(LocalClientNum_t localClientNum)
{
  ?CG_PredictSP_SetupPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PredictSP_GetPlayerBounds
==============
*/

void __fastcall CG_PredictSP_GetPlayerBounds(LocalClientNum_t localClientNum, Bounds *bounds)
{
  ?CG_PredictSP_GetPlayerBounds@@YAXW4LocalClientNum_t@@PEAUBounds@@@Z(localClientNum, bounds);
}

/*
==============
CG_PredictSP_ClearSavedPlayerState
==============
*/
void CG_PredictSP_ClearSavedPlayerState(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 337, ASSERT_TYPE_SANITY, "( cgameGlob )", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  *(_QWORD *)&LocalClientGlobals->oldCommandTime = 0i64;
  *(_QWORD *)LocalClientGlobals->oldOrigin.v = 0i64;
  LocalClientGlobals->oldOrigin.v[2] = 0.0;
  MatrixIdentity43(&LocalClientGlobals->oldMoverTransform);
  LocalClientGlobals->oldMoverId = 2047;
  CG_PlayerState_ClearTransPlayerState(&LocalClientGlobals->oldTransPlayerState);
}

/*
==============
CG_PredictSP_ExtrapolatePlayerState
==============
*/
char CG_PredictSP_ExtrapolatePlayerState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  playerState_s *m_ptr; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  char v6; 
  CgStatic *v7; 
  PlayerViewState *p_predictedViewState; 
  playerState_s *p_predictedPlayerState; 
  __int64 clientNum; 
  cg_t *v11; 
  characterInfo_t *CharacterInfo; 
  bool v13; 
  int v14; 
  int commandTime; 
  int v16; 
  PlayerViewState *viewState; 
  __int64 v19; 
  Mem_LargeLocal v20; 
  char Src[14800]; 
  PlayerViewState v22; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CG_PredictSP_ShouldRunPrediction((const LocalClientNum_t)v1) || !CG_Predict_ShouldRunExtrapolation((const LocalClientNum_t)v1) || !CL_GetExtrapolatedCmd((const LocalClientNum_t)v1, &cg_pmove_0.cmd) )
    return 0;
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v22.viewMoveState.idleMotionCache.idleMotion1Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v22.viewMoveState.idleMotionCache.idleMotion2Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v22.weapMoveState.idleMotionCache.idleMotion1Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v22.weapMoveState.idleMotionCache.idleMotion2Spline);
  Mem_LargeLocal::Mem_LargeLocal(&v20, 0x53A4ui64, "playerState_t extrapolatedPlayerState");
  m_ptr = (playerState_s *)v20.m_ptr;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  if ( CL_GetUserCmd((LocalClientNum_t)v1, CmdNumber, &cg_pmove_0.oldcmd) )
  {
    if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v1) )
      __debugbreak();
    if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v19 = CgStatic::ms_allocatedCount;
      LODWORD(viewState) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", viewState, v19) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v1] )
    {
      LODWORD(v19) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v19) )
        __debugbreak();
    }
    v7 = CgStatic::ms_cgameStaticsArray[v1];
    p_predictedViewState = &LocalClientGlobals->predictedViewState;
    p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->predictedPlayerState;
    clientNum = LocalClientGlobals->clientNum;
    v11 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7->m_localClientNum);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v11->IsMP(v11) )
    {
      if ( (unsigned int)clientNum >= v11[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v19) = v11[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(viewState) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", viewState, v19) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v11[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v11, clientNum);
    }
    memcpy_0(&v22, p_predictedViewState, sizeof(v22));
    memcpy_0(m_ptr, p_predictedPlayerState, sizeof(playerState_s));
    memcpy_0(Src, CharacterInfo, 0x39C8ui64);
    CG_PlayerState_SavePredictedPlayerState((const LocalClientNum_t)v1);
    v13 = !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_extrapolation_full_move, "cg_extrapolation_full_move");
    if ( !m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 536, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
      __debugbreak();
    cg_pmove_0.ps = m_ptr;
    cg_pmove_0.initialCall = 0;
    cg_pmove_0.isExtrapolation = v13;
    v14 = 33636369;
    if ( m_ptr->pm_type >= 7 )
      v14 = 65553;
    cg_pmove_0.tracemask = v14;
    commandTime = p_predictedPlayerState->commandTime;
    v16 = Com_GetUserCommandTime(&cg_pmove_0.cmd) - commandTime;
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_extrapolation_full_move, "cg_extrapolation_full_move") )
    {
      Profile_Begin(10);
      Pmove(&cg_pmove_0);
    }
    else
    {
      Profile_Begin(824);
      PM_ExtrapolateMove(&cg_pmove_0);
    }
    Profile_EndInternal(NULL);
    CG_PlayerState_SetExtrapolatedPlayerState((const LocalClientNum_t)v1, m_ptr);
    CG_View_UpdatePlayerView((const LocalClientNum_t)v1, 0, v16, cg_pmove_0.cmd.inputTime, cg_pmove_0.cmd.serverTime, &v22);
    memcpy_0(CharacterInfo, Src, sizeof(characterInfo_t));
    CG_View_PrintPlayerViewState((const LocalClientNum_t)v1, &v22);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v20);
  return v6;
}

/*
==============
CG_PredictSP_GetPlayerBounds
==============
*/
void CG_PredictSP_GetPlayerBounds(LocalClientNum_t localClientNum, Bounds *bounds)
{
  *bounds = CG_GetLocalClientGlobals(localClientNum)->playerBox;
}

/*
==============
CG_PredictSP_InitPMove
==============
*/
void CG_PredictSP_InitPMove(const LocalClientNum_t localClientNum, BgGroundState *const playerGround, BgGroundPersistentState *playerGroundPersistent, Bounds *const playerBounds, MountHintProperties *const mountHint)
{
  if ( !playerGround && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 507, ASSERT_TYPE_ASSERT, "(playerGround)", (const char *)&queryFormat, "playerGround") )
    __debugbreak();
  if ( !playerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 508, ASSERT_TYPE_ASSERT, "(playerBounds)", (const char *)&queryFormat, "playerBounds") )
    __debugbreak();
  cg_pmove_0.ps = NULL;
  cg_pmove_0.m_skydiveAutodeployOffset = 0;
  cg_pmove_0.m_skydiveAutodeployOffsetIsValid = 0;
  cg_pmove_0.m_flags = 0;
  cg_pmove_0.initialCall = 0;
  cg_pmove_0.isExtrapolation = 0;
  cg_pmove_0.localClientNum = localClientNum;
  cg_pmove_0.bounds = playerBounds;
  cg_pmove_0.ground = playerGround;
  cg_pmove_0.groundPersistent = playerGroundPersistent;
  cg_pmove_0.mountHint = mountHint;
  CgPMove::InitExternalSystems(&cg_pmove_0);
}

/*
==============
CG_PredictSP_InterpolatePlayerState
==============
*/
void CG_PredictSP_InterpolatePlayerState(LocalClientNum_t localClientNum, int grabStance, bool interpolateWorldUp)
{
  cg_t *LocalClientGlobals; 
  playerState_s *outPs; 
  snapshot_t *v7; 
  const playerState_s *nextPs; 
  const playerState_s *ps; 
  float frameInterpolation; 
  bool ShouldLerpViewFields; 
  int pm_type; 
  bool v13; 
  bool v14; 
  bool ShouldRunPrediction; 
  snapshot_t *prevSnap; 
  snapshot_t *nextSnap; 
  BobCycle result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  outPs = &LocalClientGlobals->predictedPlayerState;
  v7 = (snapshot_t *)LocalClientGlobals->nextSnap;
  prevSnap = (snapshot_t *)LocalClientGlobals->snap;
  nextSnap = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 131, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  nextPs = LocalClientGlobals->nextPs;
  memcpy_0(outPs, nextPs, sizeof(playerState_s));
  ps = LocalClientGlobals->ps;
  frameInterpolation = LocalClientGlobals->frameInterpolation;
  ShouldRunPrediction = CG_PredictSP_ShouldRunPrediction(localClientNum);
  CG_Predict_InterpolatePlayerState(localClientNum, ShouldRunPrediction, frameInterpolation, ps, nextPs, outPs);
  if ( v7->serverTime <= prevSnap->serverTime )
  {
    if ( !ShouldRunPrediction )
    {
      CGMovingPlatforms::InterpolatePlayerLocalOffset(ps, nextPs, frameInterpolation, outPs);
      CG_View_UpdatePlayerView(localClientNum, 1, LocalClientGlobals->frametime, LocalClientGlobals->predictedPlayerState.inputTimeInterpolated, LocalClientGlobals->predictedPlayerState.serverTimeInterpolated, &LocalClientGlobals->predictedViewState);
    }
    return;
  }
  if ( grabStance )
  {
    BG_InterpolateBobCycle(&result, ps, nextPs, frameInterpolation);
    BobCycle::PackBobCycle(&result, (int (*)[2])LocalClientGlobals->predictedPlayerState.packedBobCycle);
    LocalClientGlobals->predictedPlayerState.weapCommon.aimSpreadScale = (float)((float)(nextPs->weapCommon.aimSpreadScale - ps->weapCommon.aimSpreadScale) * frameInterpolation) + ps->weapCommon.aimSpreadScale;
    LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac = (float)((float)(nextPs->weapCommon.fWeaponPosFrac - ps->weapCommon.fWeaponPosFrac) * frameInterpolation) + ps->weapCommon.fWeaponPosFrac;
    LocalClientGlobals->predictedPlayerState.viewHeightCurrent = (float)((float)(nextPs->viewHeightCurrent - ps->viewHeightCurrent) * frameInterpolation) + ps->viewHeightCurrent;
    LocalClientGlobals->predictedPlayerState.weapCommon.weaponIdleTime = ps->weapCommon.weaponIdleTime + (int)(float)((float)(nextPs->weapCommon.weaponIdleTime - ps->weapCommon.weaponIdleTime) * frameInterpolation);
    LocalClientGlobals->predictedPlayerState.weapCommon.weaponIdleTime2 = ps->weapCommon.weaponIdleTime2 + (int)(float)((float)(nextPs->weapCommon.weaponIdleTime2 - ps->weapCommon.weaponIdleTime2) * frameInterpolation);
  }
  BG_ContextMount_InterpolateMountState(ps, nextPs, frameInterpolation, &LocalClientGlobals->predictedPlayerState.mountState);
  ShouldLerpViewFields = CG_Predict_ShouldLerpViewFields(ps, nextPs);
  if ( (nextPs->pm_type != 1 || ps->pm_type || BGMovingPlatforms::IsOnMovingPlatform(ps)) && ShouldLerpViewFields )
  {
    LocalClientGlobals->predictedPlayerState.origin.v[0] = (float)((float)(nextPs->origin.v[0] - ps->origin.v[0]) * frameInterpolation) + ps->origin.v[0];
    LocalClientGlobals->predictedPlayerState.origin.v[1] = (float)((float)(nextPs->origin.v[1] - ps->origin.v[1]) * frameInterpolation) + ps->origin.v[1];
    LocalClientGlobals->predictedPlayerState.origin.v[2] = (float)((float)(nextPs->origin.v[2] - ps->origin.v[2]) * frameInterpolation) + ps->origin.v[2];
    LocalClientGlobals->originInterpolated = 1;
  }
  LocalClientGlobals->predictedPlayerState.velocity.v[0] = (float)((float)(nextPs->velocity.v[0] - ps->velocity.v[0]) * frameInterpolation) + ps->velocity.v[0];
  LocalClientGlobals->predictedPlayerState.velocity.v[1] = (float)((float)(nextPs->velocity.v[1] - ps->velocity.v[1]) * frameInterpolation) + ps->velocity.v[1];
  LocalClientGlobals->predictedPlayerState.velocity.v[2] = (float)((float)(nextPs->velocity.v[2] - ps->velocity.v[2]) * frameInterpolation) + ps->velocity.v[2];
  pm_type = ps->pm_type;
  v13 = (ps->linkFlags.m_flags[0] & 4) != 0;
  v14 = pm_type == 1 || pm_type == 8;
  if ( ShouldLerpViewFields )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 192, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
      __debugbreak();
    LerpAngles(&ps->groundTiltAngles, &nextPs->groundTiltAngles, frameInterpolation, &LocalClientGlobals->predictedPlayerState.groundTiltAngles);
    LerpAngles(&ps->viewangles, &nextPs->viewangles, frameInterpolation, &LocalClientGlobals->predictedPlayerState.viewangles);
    if ( !v13 && !v14 )
      goto LABEL_31;
    LerpAngles(&ps->linkAngles, &nextPs->linkAngles, frameInterpolation, &LocalClientGlobals->predictedPlayerState.linkAngles);
  }
  if ( v13 )
    goto LABEL_29;
  if ( v14 )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&nextPs->eFlags, ACTIVE, 0xBu) || !ShouldLerpViewFields )
    {
LABEL_30:
      if ( !v14 )
        goto LABEL_31;
LABEL_40:
      if ( ShouldLerpViewFields )
      {
        _XMM7 = 0i64;
        __asm { vroundss xmm2, xmm7, xmm1, 1 }
        LocalClientGlobals->predictedPlayerState.viewAngleClampBase.v[1] = (float)((float)((float)((float)((float)(nextPs->viewAngleClampBase.v[1] - ps->viewAngleClampBase.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * frameInterpolation) + ps->viewAngleClampBase.v[1];
        __asm { vroundss xmm3, xmm7, xmm2, 1 }
        LocalClientGlobals->predictedPlayerState.viewAngleClampBase.v[0] = (float)((float)((float)((float)((float)(nextPs->viewAngleClampBase.v[0] - ps->viewAngleClampBase.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * frameInterpolation) + ps->viewAngleClampBase.v[0];
        LocalClientGlobals->predictedPlayerState.viewAngleClampRange.v[0] = (float)((float)(nextPs->viewAngleClampRange.v[0] - ps->viewAngleClampRange.v[0]) * frameInterpolation) + ps->viewAngleClampRange.v[0];
        LocalClientGlobals->predictedPlayerState.viewAngleClampRange.v[1] = (float)((float)(nextPs->viewAngleClampRange.v[1] - ps->viewAngleClampRange.v[1]) * frameInterpolation) + ps->viewAngleClampRange.v[1];
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
      {
        LocalClientGlobals->predictedPlayerState.viewAngleResistMin.v[0] = (float)((float)(nextPs->viewAngleResistMin.v[0] - ps->viewAngleResistMin.v[0]) * frameInterpolation) + ps->viewAngleResistMin.v[0];
        LocalClientGlobals->predictedPlayerState.viewAngleResistMin.v[1] = (float)((float)(nextPs->viewAngleResistMin.v[1] - ps->viewAngleResistMin.v[1]) * frameInterpolation) + ps->viewAngleResistMin.v[1];
        LocalClientGlobals->predictedPlayerState.viewAngleResistMax.v[0] = (float)((float)(nextPs->viewAngleResistMax.v[0] - ps->viewAngleResistMax.v[0]) * frameInterpolation) + ps->viewAngleResistMax.v[0];
        LocalClientGlobals->predictedPlayerState.viewAngleResistMax.v[1] = (float)((float)(nextPs->viewAngleResistMax.v[1] - ps->viewAngleResistMax.v[1]) * frameInterpolation) + ps->viewAngleResistMax.v[1];
      }
      goto LABEL_44;
    }
LABEL_29:
    LerpAngles(&ps->delta_angles, &nextPs->delta_angles, frameInterpolation, &LocalClientGlobals->predictedPlayerState.delta_angles);
    _XMM7 = 0i64;
    __asm
    {
      vroundss xmm0, xmm7, xmm2, 1
      vroundss xmm3, xmm7, xmm2, 1
    }
    LocalClientGlobals->predictedPlayerState.delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    __asm
    {
      vroundss xmm1, xmm7, xmm3, 1
      vroundss xmm3, xmm7, xmm2, 1
    }
    LocalClientGlobals->predictedPlayerState.delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    __asm
    {
      vroundss xmm0, xmm7, xmm3, 1
      vroundss xmm3, xmm7, xmm2, 1
    }
    LocalClientGlobals->predictedPlayerState.delta_angles.v[2] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    if ( v13 )
      goto LABEL_40;
    goto LABEL_30;
  }
LABEL_31:
  if ( ps == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) )
    goto LABEL_40;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    goto LABEL_40;
  }
LABEL_44:
  CG_Vehicle_InterpolatePlayerState(localClientNum, prevSnap, nextSnap, frameInterpolation, outPs);
  if ( interpolateWorldUp && (nextPs->worldUpAngles.v[0] != ps->worldUpAngles.v[0] || nextPs->worldUpAngles.v[1] != ps->worldUpAngles.v[1] || nextPs->worldUpAngles.v[2] != ps->worldUpAngles.v[2]) && ShouldLerpViewFields )
    BgSpaceship::AngleLerp(&ps->worldUpAngles, &nextPs->worldUpAngles, frameInterpolation, &LocalClientGlobals->predictedPlayerState.worldUpAngles);
  LocalClientGlobals->predictedPlayerState.weapCommon.crouchProneBlendMap = (int)(float)((float)((float)ps->weapCommon.crouchProneBlendMap * (float)(1.0 - frameInterpolation)) + (float)((float)nextPs->weapCommon.crouchProneBlendMap * frameInterpolation));
  if ( !ShouldRunPrediction )
    CG_View_UpdatePlayerView(localClientNum, 1, LocalClientGlobals->frametime, LocalClientGlobals->predictedPlayerState.inputTimeInterpolated, LocalClientGlobals->predictedPlayerState.serverTimeInterpolated, &LocalClientGlobals->predictedViewState);
  CGMovingPlatforms::InterpolatePlayerLocalOffset(ps, nextPs, frameInterpolation, outPs);
  CG_DrawDebug_Player_InterpolatePs(localClientNum);
}

/*
==============
CG_PredictSP_IsFreeMove
==============
*/
bool CG_PredictSP_IsFreeMove()
{
  const dvar_t *v0; 

  v0 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.integer != 0;
}

/*
==============
CG_PredictSP_PrePredictAllPlayerState
==============
*/
void CG_PredictSP_PrePredictAllPlayerState(void)
{
  LocalClientNum_t OnlyLocalClientNum; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v2; 
  double v3; 
  Bounds outBounds; 
  _BYTE v5[96]; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  CG_SetupPrePredictBounds(LocalClientGlobals, &outBounds);
  memset_0(v5, 0, sizeof(v5));
  cg_pmove_0.localClientNum = OnlyLocalClientNum;
  cg_pmove_0.ps = NULL;
  cg_pmove_0.bounds = &outBounds;
  cg_pmove_0.groundPersistent = NULL;
  cg_pmove_0.m_skydiveAutodeployOffset = 0;
  cg_pmove_0.m_skydiveAutodeployOffsetIsValid = 0;
  cg_pmove_0.mountHint = NULL;
  cg_pmove_0.m_flags = 0;
  cg_pmove_0.initialCall = 0;
  cg_pmove_0.isExtrapolation = 0;
  cg_pmove_0.ground = (BgGroundState *)v5;
  CgPMove::InitExternalSystems(&cg_pmove_0);
  if ( CG_PredictSP_PredictPlayerState_Internal(OnlyLocalClientNum, 1) )
  {
    v2 = DVARBOOL_killswitch_player_event_fix;
    if ( !DVARBOOL_killswitch_player_event_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_player_event_fix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      v3 = *(double *)&LocalClientGlobals->playerEvents.events[3].eventParm;
      *(__m256i *)&LocalClientGlobals->predictedPlayerState.pe.eventSequence = *(__m256i *)&LocalClientGlobals->playerEvents.eventSequence;
      *(double *)&LocalClientGlobals->predictedPlayerState.pe.events[3].eventParm = v3;
    }
    LocalClientGlobals->playerBox = outBounds;
    *(__m256i *)&LocalClientGlobals->playerGround.trace.fraction = *(__m256i *)v5;
    *(__m256i *)&LocalClientGlobals->playerGround.trace.contents = *(__m256i *)&v5[32];
    *(__m256i *)&LocalClientGlobals->playerGround.trace.allsolid = *(__m256i *)&v5[64];
  }
}

/*
==============
CG_PredictSP_PredictAllPlayerState
==============
*/
void CG_PredictSP_PredictAllPlayerState(void)
{
  LocalClientNum_t OnlyLocalClientNum; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  CG_PredictSP_PredictPlayerState(OnlyLocalClientNum);
}

/*
==============
CG_PredictSP_PredictPlayerState
==============
*/
void CG_PredictSP_PredictPlayerState(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  CgHandler *Handler; 
  int time; 
  CgHandler *v6; 
  __m256i v7; 
  __m256i v8; 
  __int16 eType; 
  __m256i v10; 
  LerpEntityStateInfoVolumeGrapple v11; 
  unsigned __int8 v12; 
  CgAntiLag *Instance; 
  int v14; 
  const int *p_weaponShotCount; 
  __int64 v16; 
  __int64 v17; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->lastFrame.aimSpreadScale = LocalClientGlobals->predictedPlayerState.weapCommon.aimSpreadScale;
  CG_PredictSP_InitPMove((const LocalClientNum_t)v1, &LocalClientGlobals->playerGround, &LocalClientGlobals->playerGroundPersistent, &LocalClientGlobals->playerBox, &LocalClientGlobals->mountHint);
  LocalClientGlobals->originPredicted = CG_PredictSP_PredictPlayerState_Internal((LocalClientNum_t)v1, 0);
  if ( !CG_PredictSP_ExtrapolatePlayerState((const LocalClientNum_t)v1) )
  {
    CG_View_PrintPlayerViewState((const LocalClientNum_t)v1, &LocalClientGlobals->predictedViewState);
    CG_PlayerState_ClearExtrapolatedPlayerState((const LocalClientNum_t)v1);
  }
  CG_PMove_UpdateZSmoothing(&cg_pmove_0);
  CG_PMove_ApplyPMoveFlags(&cg_pmove_0);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0xFu) )
    CL_SetStance((LocalClientNum_t)v1, CL_STANCE_STAND, 0);
  Entity = CG_GetEntity((const LocalClientNum_t)v1, LocalClientGlobals->predictedPlayerState.clientNum);
  CG_Vehicle_PlayerStateToVehicleState((LocalClientNum_t)v1);
  Entity->nextState.number = LocalClientGlobals->predictedPlayerState.clientNum;
  Handler = CgHandler::getHandler((LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_PlayerStateToEntityState(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState, &Entity->nextState, 0, Handler);
  time = LocalClientGlobals->time;
  v6 = CgHandler::getHandler((LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_PlayerToEntity_ProcessEvents(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState, &Entity->nextState, v6, time);
  v7 = *(__m256i *)Entity->nextState.lerp.eFlags.m_flags;
  v8 = *(__m256i *)&Entity->nextState.lerp.pos.trDelta.y;
  Entity->flags |= 1u;
  eType = Entity->nextState.eType;
  *(__m256i *)Entity->prevState.eFlags.m_flags = v7;
  v10 = *(__m256i *)Entity->nextState.lerp.apos.trDelta.v;
  *(__m256i *)&Entity->prevState.pos.trDelta.y = v8;
  v11 = *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->nextState.lerp.u.infoVolumeGrapple + 20);
  *(__m256i *)Entity->prevState.apos.trDelta.v = v10;
  *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->prevState.u.infoVolumeGrapple + 20) = v11;
  if ( eType < 0 || (unsigned __int16)eType > 0xFFu )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)eType, "signed", eType) )
      __debugbreak();
    v12 = Entity->nextState.eType;
  }
  else
  {
    v12 = eType;
  }
  Entity->prevOtherEntityNum = Entity->nextState.otherEntityNum;
  Entity->prevPhysicsChildBodyIdx = Entity->nextState.un.vehicleXModel;
  Entity->prevUseCount = Entity->nextUseCount;
  Entity->prevEType = eType;
  Entity->pose.eType = v12;
  if ( v12 != Entity->nextState.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 883, ASSERT_TYPE_ASSERT, "(es->pose.eType == es->nextState.eType)", (const char *)&queryFormat, "es->pose.eType == es->nextState.eType") )
    __debugbreak();
  Entity->nextState.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(cg_pmove_0.fTorsoPitch);
  Entity->nextState.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(cg_pmove_0.fWaistPitch);
  CG_Door_PlayerStateToCharacterInfo((const LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  Instance = CgAntiLag::GetInstance((const LocalClientNum_t)v1);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 891, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  CgAntiLag::ArchiveEntity(Instance, Entity, 1);
  v14 = 0;
  p_weaponShotCount = (const int *)&LocalClientGlobals->predictedPlayerState.weapState[0].weaponShotCount;
  do
  {
    Tracer_SetDrawCounter((const LocalClientNum_t)v1, Entity->nextState.number, (const PlayerHandIndex)v14++, *p_weaponShotCount);
    p_weaponShotCount += 20;
  }
  while ( v14 < 2 );
  CG_EntitySP_CalcPlayerLerpPositions((LocalClientNum_t)v1, Entity);
  LocalClientGlobals->predictedPlayerEntity = Entity;
  LocalClientGlobals->lastGroundSurfaceType = cg_pmove_0.ground->surfaceType;
  Entity->surfaceType = cg_pmove_0.ground->surfaceType;
  AimAssist_UpdateAimAssistPlayerState((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  LocalClientGlobals->fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
  LocalClientGlobals->fOffhandPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.offhandAdsFrac;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v17) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v17) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v17) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v16) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
  {
    LODWORD(v17) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v17) )
      __debugbreak();
  }
  CgVehicleSystem::UpdatePlayerVehicle(CgVehicleSystem::ms_vehicleSystemArray[v1]);
  CG_PlayerState_PMoveSlopeProperties((LocalClientNum_t)v1, &cg_pmove_0, &LocalClientGlobals->predictedPlayerState);
}

/*
==============
CG_PredictSP_PredictPlayerState_Internal
==============
*/
__int64 CG_PredictSP_PredictPlayerState_Internal(LocalClientNum_t localClientNum, bool initialCall)
{
  cg_t *LocalClientGlobals; 
  unsigned __int8 v5; 
  ClActiveClient *v6; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  int v9; 
  char v10; 
  const ClActiveClient *v11; 
  int v12; 
  int v13; 
  usercmd_s *v14; 
  usercmd_s *p_cmd; 
  __int64 v16; 
  playerState_s *ps; 
  bool v18; 
  int commandTime; 
  int v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  char *fmt; 
  int v26; 
  usercmd_s ucmd; 
  __int64 v28; 
  float v29; 

  Profile_Begin(429);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = 0;
  if ( CG_PredictSP_ShouldRunPrediction(localClientNum) )
  {
    CG_PredictSP_UpdatePMove(&cg_pmove_0, &LocalClientGlobals->predictedPlayerState, initialCall, 0);
    Client = ClActiveClient::GetClient(localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    v26 = CmdNumber;
    if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
    {
      v9 = CmdNumber - 127;
      if ( CmdNumber - 127 <= CmdNumber )
      {
        v10 = CmdNumber - 127;
        do
        {
          v28 = 0i64;
          v11 = ClActiveClient::GetClient(localClientNum);
          v12 = ClActiveClient_GetCmdNumber(v11);
          v13 = v12;
          LODWORD(v28) = v12;
          if ( v9 > v12 )
          {
            LODWORD(fmt) = v12;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)v9, fmt);
          }
          if ( v9 <= v13 - 128 || v9 <= 0 )
          {
            memset(&v28, 0, 4ui64);
          }
          else
          {
            v14 = &v11->cmds[v10 & 0x7F];
            memset(&v28, 0, 4ui64);
            if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
              __debugbreak();
            p_cmd = &cg_pmove_0.cmd;
            v16 = 2i64;
            do
            {
              *(_OWORD *)&p_cmd->buttons = *(_OWORD *)&v14->buttons;
              *(_OWORD *)&p_cmd->commandTime = *(_OWORD *)&v14->commandTime;
              *(_OWORD *)(&p_cmd->angles.xy + 1) = *(_OWORD *)(&v14->angles.xy + 1);
              *(_OWORD *)&p_cmd->weapon.weaponOthers = *(_OWORD *)&v14->weapon.weaponOthers;
              *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[1] = *(_OWORD *)&v14->weapon.attachmentVariationIndices[1];
              *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[17] = *(_OWORD *)&v14->weapon.attachmentVariationIndices[17];
              *(_OWORD *)&p_cmd->offHand.weaponIdx = *(_OWORD *)&v14->offHand.weaponIdx;
              p_cmd = (usercmd_s *)((char *)p_cmd + 128);
              *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v14->offHand.weaponAttachments[2];
              v14 = (usercmd_s *)((char *)v14 + 128);
              --v16;
            }
            while ( v16 );
            p_cmd->buttons = v14->buttons;
            if ( CL_GetUserCmd(localClientNum, v9 - 1, &cg_pmove_0.oldcmd) )
            {
              ps = cg_pmove_0.ps;
              if ( !cg_pmove_0.ps )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 574, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
                  __debugbreak();
                ps = cg_pmove_0.ps;
              }
              if ( cg_pmove_0.cmd.commandTime >= ps->commandTime && cg_pmove_0.cmd.serverTime >= ps->serverTime && cg_pmove_0.cmd.commandTime <= ucmd.commandTime && cg_pmove_0.cmd.serverTime <= ucmd.serverTime )
              {
                if ( !CG_PredictSP_IsFreeMove() )
                {
                  v18 = BGMovingPlatforms::IsOnMovingPlatform(&LocalClientGlobals->predictedPlayerState) || BGMovingPlatforms::IsOnMovingPlatform(LocalClientGlobals->ps);
                  CgPMove::UpdatePredictionError(&cg_pmove_0, v18, 0);
                }
                commandTime = LocalClientGlobals->predictedPlayerState.commandTime;
                v20 = Com_GetUserCommandTime(&cg_pmove_0.cmd) - commandTime;
                Profile_Begin(10);
                if ( Pmove(&cg_pmove_0) )
                  v5 = 1;
                Profile_EndInternal(NULL);
                if ( v5 && !initialCall )
                  CG_View_UpdatePlayerView(localClientNum, 1, v20, cg_pmove_0.cmd.inputTime, cg_pmove_0.cmd.serverTime, &LocalClientGlobals->predictedViewState);
              }
            }
          }
          ++v9;
          ++v10;
        }
        while ( v9 <= v26 );
      }
      v21 = DVARINT_cg_showmiss;
      if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.integer > 1 )
        Com_Printf(17, "[%i : %i] ", (unsigned int)cg_pmove_0.cmd.serverTime, (unsigned int)LocalClientGlobals->time);
      if ( !v5 )
      {
        v22 = DVARINT_cg_showmiss;
        if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        if ( v22->current.integer )
          Com_Printf(17, "no prediction run\n");
      }
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    *(float *)&v28 = LocalClientGlobals->predictedPlayerState.viewangles.v[0] - LocalClientGlobals->predictedPlayerState.delta_angles.v[0];
    *((float *)&v28 + 1) = LocalClientGlobals->predictedPlayerState.viewangles.v[1] - LocalClientGlobals->predictedPlayerState.delta_angles.v[1];
    v29 = LocalClientGlobals->predictedPlayerState.viewangles.v[2] - LocalClientGlobals->predictedPlayerState.delta_angles.v[2];
    v6 = ClActiveClient::GetClient(localClientNum);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
      __debugbreak();
    v6->clviewangles_aab += v6->clviewangles_set_aab;
    LODWORD(v6->clViewangles.clViewangles.v[0]) = v28 ^ ((((_DWORD)v6 + 428) ^ v6->clviewangles_aab) * ((((_DWORD)v6 + 428) ^ v6->clviewangles_aab) + 2));
    LODWORD(v6->clViewangles.clViewangles.v[1]) = HIDWORD(v28) ^ ((((_DWORD)v6 + 432) ^ v6->clviewangles_aab) * ((((_DWORD)v6 + 432) ^ v6->clviewangles_aab) + 2));
    LODWORD(v6->clViewangles.clViewangles.v[2]) = ((((_DWORD)v6 + 436) ^ v6->clviewangles_aab) * ((((_DWORD)v6 + 436) ^ v6->clviewangles_aab) + 2)) ^ LODWORD(v29);
    v5 = 0;
  }
  Profile_EndInternal(NULL);
  return v5;
}

/*
==============
CG_PredictSP_RestorePlayerOrientation
==============
*/
void CG_PredictSP_RestorePlayerOrientation(cg_t *cgameGlob)
{
  float v2; 
  float v3; 
  float v4; 
  float v7; 
  cg_t *LocalClientGlobals; 
  vec3_t vec; 
  vec3_t angles; 

  vec = CG_GetLocalClientGlobals((const LocalClientNum_t)cgameGlob->localClientNum)->refdef.view.axis.m[0];
  vectoangles(&vec, &angles);
  v2 = angles.v[0];
  v3 = angles.v[1];
  v4 = angles.v[2];
  cgameGlob->predictedPlayerState.viewangles.v[2] = angles.v[2];
  cgameGlob->predictedPlayerState.viewangles.v[0] = v2;
  cgameGlob->predictedPlayerState.viewangles.v[1] = v3;
  cgameGlob->predictedPlayerState.delta_angles.v[2] = v4;
  cgameGlob->predictedPlayerState.delta_angles.v[1] = v3;
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  v7 = (float)(unsigned __int16)(int)*(float *)&_XMM2 * 0.000015258789;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  cgameGlob->predictedPlayerState.delta_angles.v[0] = (float)(v7 - *(float *)&_XMM2) * 360.0;
  __asm
  {
    vroundss xmm0, xmm9, xmm3, 1
    vroundss xmm3, xmm9, xmm2, 1
  }
  cgameGlob->predictedPlayerState.delta_angles.v[1] = (float)((float)((float)(unsigned __int16)(int)*(float *)&_XMM0 * 0.000015258789) - *(float *)&_XMM3) * 360.0;
  __asm
  {
    vroundss xmm0, xmm9, xmm3, 1
    vroundss xmm3, xmm9, xmm2, 1
  }
  cgameGlob->predictedPlayerState.delta_angles.v[2] = (float)((float)((float)(unsigned __int16)(int)*(float *)&_XMM0 * 0.000015258789) - *(float *)&_XMM3) * 360.0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)cgameGlob->localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &cgameGlob->predictedPlayerState.origin);
  cgameGlob->predictedPlayerState.origin.v[2] = cgameGlob->predictedPlayerState.origin.v[2] - cgameGlob->predictedPlayerState.viewHeightCurrent;
}

/*
==============
CG_PredictSP_SavePlayerState
==============
*/
void CG_PredictSP_SavePlayerState(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  double v2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->oldCommandTime = LocalClientGlobals->predictedPlayerState.commandTime;
  LocalClientGlobals->oldServerTime = LocalClientGlobals->predictedPlayerState.serverTime;
  LocalClientGlobals->oldOrigin = LocalClientGlobals->predictedPlayerState.origin;
  MatrixCopy43(&LocalClientGlobals->moverTransform, &LocalClientGlobals->oldMoverTransform);
  LocalClientGlobals->oldMoverId = LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
  CG_PlayerState_ExtractTransPlayerState(&LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->oldTransPlayerState);
  v2 = *(double *)&LocalClientGlobals->predictedPlayerState.pe.events[3].eventParm;
  *(__m256i *)&LocalClientGlobals->playerEvents.eventSequence = *(__m256i *)&LocalClientGlobals->predictedPlayerState.pe.eventSequence;
  *(double *)&LocalClientGlobals->playerEvents.events[3].eventParm = v2;
}

/*
==============
CG_PredictSP_SetupPlayerState
==============
*/
void CG_PredictSP_SetupPlayerState(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  playerState_s *ps; 
  playerState_s *nextPs; 
  CgHandler *Handler; 
  float frameInterpolation; 
  float v10; 
  float v11; 
  CgHandler *v12; 
  cgs_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  int v17; 
  int pm_type; 
  __int16 groundEntityNum; 
  playerState_s *p_predictedPlayerState; 
  int time; 
  int groundEntityTime; 
  cg_t *v23; 
  playerState_s *v24; 
  const vec3_t *v25; 
  float v26; 
  __int64 duration; 
  __int64 v28; 
  vec3_t outOrigin; 
  __int64 v30; 
  WorldUpReferenceFrame v31; 

  v30 = -2i64;
  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->refdef.viewOffsetPrev = LocalClientGlobals->refdef.viewOffset;
  Entity = CG_GetEntity((const LocalClientNum_t)v1, v1);
  ps = LocalClientGlobals->ps;
  nextPs = LocalClientGlobals->nextPs;
  if ( ps->clientNum != (_DWORD)v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 385, ASSERT_TYPE_ASSERT, "(prevPs->clientNum == localClientNum)", (const char *)&queryFormat, "prevPs->clientNum == localClientNum") )
    __debugbreak();
  if ( nextPs->clientNum != (_DWORD)v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 386, ASSERT_TYPE_ASSERT, "(nextPs->clientNum == localClientNum)", (const char *)&queryFormat, "nextPs->clientNum == localClientNum") )
    __debugbreak();
  Handler = CgHandler::getHandler((LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_UpdateWeaponAnimArrays(CgWeaponMap::ms_instance[v1], nextPs, Handler);
  frameInterpolation = LocalClientGlobals->frameInterpolation;
  outOrigin.v[0] = (float)((float)(nextPs->origin.v[0] - ps->origin.v[0]) * frameInterpolation) + ps->origin.v[0];
  outOrigin.v[1] = (float)((float)(nextPs->origin.v[1] - ps->origin.v[1]) * frameInterpolation) + ps->origin.v[1];
  outOrigin.v[2] = (float)((float)(nextPs->origin.v[2] - ps->origin.v[2]) * frameInterpolation) + ps->origin.v[2];
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  *(_QWORD *)Entity->pose.angles.v = 0i64;
  Entity->pose.angles.v[2] = 0.0;
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm2, 1 }
  Entity->pose.angles.v[1] = (float)((float)((float)((float)((float)(Entity->nextState.lerp.apos.trBase.v[1] - Entity->prevState.apos.trBase.v[1]) * 0.0027777778) - *(float *)&_XMM1) * 360.0) * LocalClientGlobals->frameInterpolation) + Entity->prevState.apos.trBase.v[1];
  if ( CG_ModelPreviewerNeedsVieworgInterpSkipped((LocalClientNum_t)v1) )
    goto LABEL_18;
  if ( CG_Weapons_GetWeaponViewRoughOriginIfValid((LocalClientNum_t)v1, nextPs, &LocalClientGlobals->refdef.viewOffset) )
    goto LABEL_19;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&nextPs->otherFlags, ACTIVE, 1u) || (nextPs->linkFlags.m_flags[0] & 4) != 0 || BG_GetRemoteControlledVehicleEntityNum(nextPs, Handler) != 2047 )
  {
LABEL_18:
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->refdef.viewOffset);
  }
  else if ( nextPs->vehicleState.entity == 2047 )
  {
    CG_GetPoseOrigin(&Entity->pose, &LocalClientGlobals->refdef.viewOffset);
    v12 = CgHandler::getHandler((LocalClientNum_t)v1);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v31, nextPs, v12);
    WorldUpReferenceFrame::AddUpContribution(&v31, nextPs->viewHeightCurrent, &LocalClientGlobals->refdef.viewOffset);
  }
  else
  {
    v10 = LocalClientGlobals->frameInterpolation;
    LocalClientGlobals->refdef.viewOffset.v[0] = (float)((float)(nextPs->vehicleState.origin.v[0] - ps->vehicleState.origin.v[0]) * v10) + ps->vehicleState.origin.v[0];
    LocalClientGlobals->refdef.viewOffset.v[1] = (float)((float)(nextPs->vehicleState.origin.v[1] - ps->vehicleState.origin.v[1]) * v10) + ps->vehicleState.origin.v[1];
    v11 = (float)((float)(nextPs->vehicleState.origin.v[2] - ps->vehicleState.origin.v[2]) * v10) + ps->vehicleState.origin.v[2];
    LocalClientGlobals->refdef.viewOffset.v[2] = v11;
    LocalClientGlobals->refdef.viewOffset.v[2] = v11 + nextPs->viewHeightCurrent;
  }
LABEL_19:
  if ( !LocalClientGlobals->validPPS )
  {
    LocalClientGlobals->validPPS = 1;
    memcpy_0(&LocalClientGlobals->predictedPlayerState, nextPs, sizeof(LocalClientGlobals->predictedPlayerState));
    LocalClientGlobals->predictedPlayerState.commandTimeInterpolated = LocalClientGlobals->predictedPlayerState.commandTime;
    LocalClientGlobals->predictedPlayerState.serverTimeInterpolated = LocalClientGlobals->predictedPlayerState.serverTime;
    LocalClientGlobals->predictedPlayerState.inputTimeInterpolated = LocalClientGlobals->predictedPlayerState.inputTime;
    LocalClientGlobals->groundEntityTime = LocalClientGlobals->time - 1000;
    CG_SetupPrePredictBounds(LocalClientGlobals, &LocalClientGlobals->playerBox);
    if ( (unsigned int)v1 >= cgs_t::ms_allocatedCount )
    {
      LODWORD(duration) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", duration, cgs_t::ms_allocatedCount) )
        __debugbreak();
    }
    if ( !cgs_t::ms_cgsArray[v1] )
    {
      LODWORD(v28) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v28) )
        __debugbreak();
    }
    if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v28) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v28) )
        __debugbreak();
    }
    v13 = cgs_t::ms_cgsArray[v1];
    v14 = DVARINT_cl_freemove;
    if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.integer && v13->started )
      CG_PredictSP_RestorePlayerOrientation(LocalClientGlobals);
    v13->started = 1;
  }
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 454, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientGlobals->physicsTime = LocalClientGlobals->nextSnap->serverTime;
  v15 = DVARBOOL_cg_drawPlayerBoundingBox;
  if ( !DVARBOOL_cg_drawPlayerBoundingBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerBoundingBox") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&nextPs->otherFlags, ACTIVE, 0x20u) )
    CG_DebugBox(&nextPs->origin, &LocalClientGlobals->playerBox, nextPs->viewangles.v[1], &colorRed, 1, 0);
  v16 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer )
  {
    CG_PredictSP_UpdateFreeMove(LocalClientGlobals);
    goto LABEL_77;
  }
  if ( !CG_PredictSP_ShouldRunPrediction((const LocalClientNum_t)v1) )
  {
    v17 = 1;
LABEL_76:
    CG_PredictSP_InterpolatePlayerState((LocalClientNum_t)v1, v17, 1);
    goto LABEL_77;
  }
  pm_type = nextPs->pm_type;
  if ( pm_type == 1 || pm_type == 8 || (nextPs->linkFlags.m_flags[0] & 4) != 0 )
  {
    v17 = 0;
    goto LABEL_76;
  }
  groundEntityNum = nextPs->groundEntityNum;
  if ( groundEntityNum <= 0 || (unsigned __int16)groundEntityNum >= 0x7FEu )
  {
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    if ( BGMovingPlatforms::IsOnMovingPlatform(&LocalClientGlobals->predictedPlayerState) )
    {
      time = LocalClientGlobals->time;
      LocalClientGlobals->groundEntityTime = time;
      groundEntityTime = time;
    }
    else
    {
      time = LocalClientGlobals->time;
      groundEntityTime = LocalClientGlobals->groundEntityTime;
    }
  }
  else
  {
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    time = LocalClientGlobals->time;
    LocalClientGlobals->groundEntityTime = time;
    groundEntityTime = time;
  }
  if ( (unsigned int)(time - groundEntityTime) < 0x3E8 )
  {
    memcpy_0(p_predictedPlayerState, nextPs, sizeof(playerState_s));
    LocalClientGlobals->predictedPlayerState.commandTimeInterpolated = p_predictedPlayerState->commandTime;
    LocalClientGlobals->predictedPlayerState.serverTimeInterpolated = LocalClientGlobals->predictedPlayerState.serverTime;
    LocalClientGlobals->predictedPlayerState.inputTimeInterpolated = LocalClientGlobals->predictedPlayerState.inputTime;
  }
  v23 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( !v23->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 64, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !v23->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 65, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( v23->nextSnap->serverTime > v23->snap->serverTime )
  {
    v24 = v23->nextPs;
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v24->otherFlags, ACTIVE, 9u) )
    {
      v25 = (const vec3_t *)v23->ps;
      v26 = v23->frameInterpolation;
      if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 77, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
        __debugbreak();
      LerpAngles(v25 + 56, &v24->groundTiltAngles, v26, &v23->predictedPlayerState.groundTiltAngles);
    }
  }
LABEL_77:
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_PredictSP_ShouldRunPrediction
==============
*/
bool CG_PredictSP_ShouldRunPrediction(const LocalClientNum_t localClientNum)
{
  bool result; 
  int v4; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  if ( CG_GetLocalClientGlobals(localClientNum)->demoType == NONE )
    return 1;
  result = CG_PredictSP_IsFreeMove();
  if ( result )
    return 1;
  return result;
}

/*
==============
CG_PredictSP_UpdateFreeMove
==============
*/
void CG_PredictSP_UpdateFreeMove(cg_t *cgameGlob)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  int v4; 
  playerState_s *ps; 
  playerState_s *nextPs; 
  float frameInterpolation; 
  const dvar_t *v8; 
  float v11; 
  CgHandler *Handler; 
  float v13; 
  vec3_t inOutViewAngles; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v17; 

  v1 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 285, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DVARINT_cl_freemove, \"cl_freemove\" ) != FREEMOVE_NONE)", (const char *)&queryFormat, "Dvar_GetInt( cl_freemove ) != FREEMOVE_NONE") )
    __debugbreak();
  v3 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = 3;
  if ( v3->current.integer == 1 )
    v4 = 2;
  cgameGlob->predictedPlayerState.pm_type = v4;
  cgameGlob->predictedPlayerState.eFlags.m_flags[0] &= 4u;
  cgameGlob->predictedPlayerState.weapCommon.aimSpreadScale = 0.0;
  cgameGlob->predictedPlayerState.pm_flags = 0i64;
  cgameGlob->predictedPlayerState.weapCommon.weapFlags = 0i64;
  cgameGlob->predictedPlayerState.otherFlags = 0i64;
  ps = cgameGlob->ps;
  nextPs = cgameGlob->nextPs;
  frameInterpolation = cgameGlob->frameInterpolation;
  v8 = DVARBOOL_cg_drawPlayerPosInFreeMove;
  origin.v[0] = (float)((float)(nextPs->origin.v[0] - ps->origin.v[0]) * frameInterpolation) + ps->origin.v[0];
  origin.v[1] = (float)((float)(nextPs->origin.v[1] - ps->origin.v[1]) * frameInterpolation) + ps->origin.v[1];
  origin.v[2] = (float)((float)(nextPs->origin.v[2] - ps->origin.v[2]) * frameInterpolation) + ps->origin.v[2];
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  v11 = (float)((float)((float)((float)((float)(nextPs->viewangles.v[1] - ps->viewangles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0) * frameInterpolation) + ps->viewangles.v[1];
  if ( !DVARBOOL_cg_drawPlayerPosInFreeMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerPosInFreeMove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    Handler = CgHandler::getHandler(cgameGlob->localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v17, ps, Handler);
    if ( v17.m_axisAdjusted )
    {
      v13 = ps->viewangles.v[1];
      inOutViewAngles.v[0] = 0.0;
      inOutViewAngles.v[1] = v13;
      inOutViewAngles.v[2] = 0.0;
      BG_CalcLinkedViewValues(ps, &inOutViewAngles);
      AnglesToAxis(&inOutViewAngles, &axis);
      WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v17, &axis);
      CG_DebugBoxOriented(&origin, &cgameGlob->playerBox, &axis, &colorOrange, 1, 0);
    }
    else
    {
      CG_DebugBox(&origin, &cgameGlob->playerBox, v11, &colorOrange, 1, 0);
    }
  }
}

/*
==============
CG_PredictSP_UpdatePMove
==============
*/
void CG_PredictSP_UpdatePMove(pmove_t *pm, playerState_s *const playerState, const bool isInitialCall, const bool isExtrapolation)
{
  Bounds *bounds; 
  cg_t *LocalClientGlobals; 
  int v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 535, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 536, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  pm->ps = playerState;
  pm->initialCall = isInitialCall;
  pm->isExtrapolation = isExtrapolation;
  if ( isInitialCall )
  {
    bounds = pm->bounds;
    if ( bounds->halfSize.v[0] == 0.0 )
      *bounds = playerBox;
    if ( !CG_PredictSP_IsFreeMove() )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)pm->localClientNum);
      CGMovingPlatformClient::UpdatePredictedClient(&LocalClientGlobals->movingPlatforms, pm->localClientNum, pm, &LocalClientGlobals->moverTransform, &LocalClientGlobals->originMoverLocal);
    }
  }
  v10 = 65553;
  if ( pm->ps->pm_type < 7 )
    v10 = 33636369;
  pm->tracemask = v10;
}

