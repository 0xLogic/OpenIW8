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
  playerState_s *outPs; 
  snapshot_t *v12; 
  bool ShouldLerpViewFields; 
  int pm_type; 
  bool v69; 
  bool v70; 
  bool ShouldRunPrediction; 
  snapshot_t *prevSnap; 
  snapshot_t *nextSnap; 
  BobCycle result; 
  char v194; 
  bool v196; 

  __asm { vmovaps [rsp+0E8h+var_68], xmm8 }
  _R14 = CG_GetLocalClientGlobals(localClientNum);
  outPs = &_R14->predictedPlayerState;
  v12 = (snapshot_t *)_R14->nextSnap;
  prevSnap = (snapshot_t *)_R14->snap;
  nextSnap = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 131, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  _RBP = _R14->nextPs;
  memcpy_0(outPs, _RBP, sizeof(playerState_s));
  _RSI = _R14->ps;
  __asm
  {
    vmovss  xmm8, dword ptr [r14+65E0h]
    vmovaps xmm2, xmm8; frameInterpolation
  }
  ShouldRunPrediction = CG_PredictSP_ShouldRunPrediction(localClientNum);
  CG_Predict_InterpolatePlayerState(localClientNum, ShouldRunPrediction, *(const float *)&_XMM2, _RSI, _RBP, outPs);
  if ( v12->serverTime <= prevSnap->serverTime )
  {
    if ( !ShouldRunPrediction )
    {
      __asm { vmovaps xmm2, xmm8; fraction }
      CGMovingPlatforms::InterpolatePlayerLocalOffset(_RSI, _RBP, *(float *)&_XMM2, outPs);
      CG_View_UpdatePlayerView(localClientNum, 1, _R14->frametime, _R14->predictedPlayerState.inputTimeInterpolated, _R14->predictedPlayerState.serverTimeInterpolated, &_R14->predictedViewState);
    }
    goto LABEL_54;
  }
  __asm
  {
    vmovaps [rsp+0E8h+var_78], xmm9
    vmovaps [rsp+0E8h+var_88], xmm10
  }
  if ( grabStance )
  {
    __asm { vmovaps xmm3, xmm8; fraction }
    BG_InterpolateBobCycle(&result, _RSI, _RBP, *(float *)&_XMM3);
    BobCycle::PackBobCycle(&result, (int (*)[2])_R14->predictedPlayerState.packedBobCycle);
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+744h]
      vmovss  xmm0, dword ptr [rbp+744h]
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, xmm3
      vmovss  dword ptr [rdi+744h], xmm3
      vmovss  xmm4, dword ptr [rsi+730h]
      vmovss  xmm0, dword ptr [rbp+730h]
      vsubss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, xmm4
      vmovss  dword ptr [rdi+730h], xmm3
      vmovss  xmm5, dword ptr [rsi+1E8h]
      vmovss  xmm0, dword ptr [rbp+1E8h]
      vsubss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm8
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm3, xmm2, xmm5
      vmovss  dword ptr [rdi+1E8h], xmm3
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vcvttss2si eax, xmm1
    }
    _R14->predictedPlayerState.weapCommon.weaponIdleTime = _RSI->weapCommon.weaponIdleTime + _EAX;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vcvttss2si eax, xmm1
    }
    _R14->predictedPlayerState.weapCommon.weaponIdleTime2 = _RSI->weapCommon.weaponIdleTime2 + _EAX;
  }
  __asm { vmovaps xmm2, xmm8; fraction }
  BG_ContextMount_InterpolateMountState(_RSI, _RBP, *(float *)&_XMM2, &_R14->predictedPlayerState.mountState);
  ShouldLerpViewFields = CG_Predict_ShouldLerpViewFields(_RSI, _RBP);
  if ( (_RBP->pm_type != 1 || _RSI->pm_type || BGMovingPlatforms::IsOnMovingPlatform(_RSI)) && ShouldLerpViewFields )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+30h]
      vsubss  xmm1, xmm0, dword ptr [rsi+30h]
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, dword ptr [rsi+30h]
      vmovss  dword ptr [rdi+30h], xmm3
      vmovss  xmm0, dword ptr [rbp+34h]
      vsubss  xmm1, xmm0, dword ptr [rsi+34h]
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, dword ptr [rsi+34h]
      vmovss  dword ptr [rdi+34h], xmm3
      vmovss  xmm0, dword ptr [rbp+38h]
      vsubss  xmm1, xmm0, dword ptr [rsi+38h]
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, dword ptr [rsi+38h]
      vmovss  dword ptr [rdi+38h], xmm3
    }
    _R14->originInterpolated = 1;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+3Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+3Ch]
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm3, xmm2, dword ptr [rsi+3Ch]
    vmovss  dword ptr [rdi+3Ch], xmm3
    vmovss  xmm0, dword ptr [rbp+40h]
    vsubss  xmm1, xmm0, dword ptr [rsi+40h]
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm3, xmm2, dword ptr [rsi+40h]
    vmovss  dword ptr [rdi+40h], xmm3
    vmovss  xmm0, dword ptr [rbp+44h]
    vsubss  xmm1, xmm0, dword ptr [rsi+44h]
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm3, xmm2, dword ptr [rsi+44h]
    vmovss  dword ptr [rdi+44h], xmm3
  }
  pm_type = _RSI->pm_type;
  v69 = (_RSI->linkFlags.m_flags[0] & 4) != 0;
  v70 = pm_type == 1 || pm_type == 8;
  __asm
  {
    vmovaps [rsp+0E8h+var_48], xmm6
    vmovaps [rsp+0E8h+var_58], xmm7
  }
  v196 = v70;
  __asm
  {
    vmovss  xmm9, cs:__real@3f000000
    vmovss  xmm10, cs:__real@43b40000
  }
  if ( ShouldLerpViewFields )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 192, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
      __debugbreak();
    __asm { vmovaps xmm2, xmm8; frac }
    LerpAngles(&_RSI->groundTiltAngles, &_RBP->groundTiltAngles, *(const float *)&_XMM2, &_R14->predictedPlayerState.groundTiltAngles);
    __asm { vmovaps xmm2, xmm8; frac }
    LerpAngles(&_RSI->viewangles, &_RBP->viewangles, *(const float *)&_XMM2, &_R14->predictedPlayerState.viewangles);
    if ( !v69 && !v70 )
      goto LABEL_32;
    __asm { vmovaps xmm2, xmm8; frac }
    LerpAngles(&_RSI->linkAngles, &_RBP->linkAngles, *(const float *)&_XMM2, &_R14->predictedPlayerState.linkAngles);
  }
  if ( v69 )
  {
LABEL_29:
    _RBX = &_R14->predictedPlayerState.delta_angles;
    __asm { vmovaps xmm2, xmm8; frac }
    LerpAngles(&_RSI->delta_angles, &_RBP->delta_angles, *(const float *)&_XMM2, &_R14->predictedPlayerState.delta_angles);
    __asm
    {
      vmovss  xmm6, cs:__real@43360b61
      vmulss  xmm0, xmm6, dword ptr [rbx]
      vmovss  xmm5, cs:__real@37800000
      vaddss  xmm2, xmm0, xmm9
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm0, xmm7, xmm2, 1
      vcvttss2si eax, xmm0
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm1, ecx
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm4, xmm1, xmm5
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm7, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm10
      vmovss  dword ptr [rbx], xmm1
      vmulss  xmm1, xmm6, dword ptr [rdi+0B8h]
      vaddss  xmm3, xmm1, xmm9
      vroundss xmm1, xmm7, xmm3, 1
      vcvttss2si eax, xmm1
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm5
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm7, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm10
      vmovss  dword ptr [rdi+0B8h], xmm0
      vmulss  xmm0, xmm6, dword ptr [rdi+0BCh]
      vaddss  xmm3, xmm0, xmm9
      vroundss xmm0, xmm7, xmm3, 1
      vcvttss2si eax, xmm0
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm5
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm7, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm10
      vmovss  dword ptr [rdi+0BCh], xmm0
    }
    if ( v69 )
      goto LABEL_41;
    v70 = v196;
LABEL_31:
    if ( !v70 )
      goto LABEL_32;
LABEL_41:
    if ( ShouldLerpViewFields )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rsi+1FCh]
        vmovss  xmm0, dword ptr [rbp+1FCh]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm3, xmm1, cs:__real@3b360b61
        vaddss  xmm1, xmm3, xmm9
        vxorps  xmm7, xmm7, xmm7
        vroundss xmm2, xmm7, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+1FCh], xmm3
        vmovss  xmm5, dword ptr [rsi+1F8h]
        vmovss  xmm0, dword ptr [rbp+1F8h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm4, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rdi+1F8h], xmm3
        vmovss  xmm3, dword ptr [rsi+200h]
        vmovss  xmm0, dword ptr [rbp+200h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi+200h], xmm3
        vmovss  xmm4, dword ptr [rsi+204h]
        vmovss  xmm0, dword ptr [rbp+204h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+204h], xmm3
      }
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+210h]
        vmovss  xmm0, dword ptr [rbp+210h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi+210h], xmm3
        vmovss  xmm4, dword ptr [rsi+214h]
        vmovss  xmm0, dword ptr [rbp+214h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+214h], xmm3
        vmovss  xmm3, dword ptr [rsi+208h]
        vmovss  xmm0, dword ptr [rbp+208h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdi+208h], xmm3
        vmovss  xmm4, dword ptr [rsi+20Ch]
        vmovss  xmm0, dword ptr [rbp+20Ch]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdi+20Ch], xmm3
      }
    }
    goto LABEL_45;
  }
  if ( v70 )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBP->eFlags, ACTIVE, 0xBu) || !ShouldLerpViewFields )
      goto LABEL_31;
    goto LABEL_29;
  }
LABEL_32:
  if ( _RSI == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->eFlags, ACTIVE, 6u) )
    goto LABEL_41;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    goto LABEL_41;
  }
LABEL_45:
  __asm { vmovaps xmm3, xmm8; f }
  CG_Vehicle_InterpolatePlayerState(localClientNum, prevSnap, nextSnap, *(float *)&_XMM3, outPs);
  __asm
  {
    vmovaps xmm10, [rsp+0E8h+var_88]
    vmovaps xmm9, [rsp+0E8h+var_78]
    vmovaps xmm7, [rsp+0E8h+var_58]
    vmovaps xmm6, [rsp+0E8h+var_48]
  }
  if ( interpolateWorldUp )
  {
    _RDX = &_RBP->worldUpAngles;
    __asm { vmovss  xmm0, dword ptr [rdx] }
    _RCX = &_RSI->worldUpAngles;
    __asm { vucomiss xmm0, dword ptr [rcx] }
    if ( interpolateWorldUp )
      goto LABEL_49;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+4]
      vucomiss xmm0, dword ptr [rcx+4]
    }
    if ( interpolateWorldUp )
      goto LABEL_49;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+8]
      vucomiss xmm0, dword ptr [rcx+8]
    }
    if ( interpolateWorldUp )
    {
LABEL_49:
      if ( ShouldLerpViewFields )
      {
        __asm { vmovaps xmm2, xmm8; fraction }
        BgSpaceship::AngleLerp(_RCX, _RDX, *(const float *)&_XMM2, &_R14->predictedPlayerState.worldUpAngles);
      }
    }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, dword ptr [rsi+1130h]
    vsubss  xmm1, xmm0, xmm8
    vmulss  xmm3, xmm2, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, dword ptr [rbp+1130h]
    vmulss  xmm0, xmm2, xmm8
    vaddss  xmm1, xmm3, xmm0
    vcvttss2si eax, xmm1
  }
  _R14->predictedPlayerState.weapCommon.crouchProneBlendMap = _EAX;
  if ( !ShouldRunPrediction )
    CG_View_UpdatePlayerView(localClientNum, 1, _R14->frametime, _R14->predictedPlayerState.inputTimeInterpolated, _R14->predictedPlayerState.serverTimeInterpolated, &_R14->predictedViewState);
  __asm { vmovaps xmm2, xmm8; fraction }
  CGMovingPlatforms::InterpolatePlayerLocalOffset(_RSI, _RBP, *(float *)&_XMM2, outPs);
  CG_DrawDebug_Player_InterpolatePs(localClientNum);
LABEL_54:
  _R11 = &v194;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
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
  const dvar_t *v2; 
  Bounds outBounds; 
  _BYTE v11[96]; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  _RDI = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  CG_SetupPrePredictBounds(_RDI, &outBounds);
  memset_0(v11, 0, sizeof(v11));
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
  cg_pmove_0.ground = (BgGroundState *)v11;
  CgPMove::InitExternalSystems(&cg_pmove_0);
  if ( CG_PredictSP_PredictPlayerState_Internal(OnlyLocalClientNum, 1) )
  {
    v2 = DVARBOOL_killswitch_player_event_fix;
    if ( !DVARBOOL_killswitch_player_event_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_player_event_fix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi+5971Ch]
        vmovsd  xmm1, qword ptr [rdi+5973Ch]
        vmovups ymmword ptr [rdi+184h], ymm0
        vmovsd  qword ptr [rdi+1A4h], xmm1
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+0D8h+outBounds.midPoint]
      vmovups xmmword ptr [rdi+6470h], xmm0
      vmovsd  xmm1, qword ptr [rsp+0D8h+outBounds.halfSize+4]
      vmovsd  qword ptr [rdi+6480h], xmm1
      vmovups ymm0, [rsp+0D8h+var_78]
      vmovups ymmword ptr [rdi+6488h], ymm0
      vmovups ymm1, [rsp+0D8h+var_58]
      vmovups ymmword ptr [rdi+64A8h], ymm1
      vmovups ymm0, [rsp+0D8h+var_38]
      vmovups ymmword ptr [rdi+64C8h], ymm0
    }
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
  CgHandler *Handler; 
  int time; 
  CgHandler *v6; 
  __int16 eType; 
  unsigned __int8 v12; 
  CgAntiLag *Instance; 
  int v16; 
  const int *p_weaponShotCount; 
  __int64 v18; 
  __int64 v19; 

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
  _R14 = CG_GetEntity((const LocalClientNum_t)v1, LocalClientGlobals->predictedPlayerState.clientNum);
  CG_Vehicle_PlayerStateToVehicleState((LocalClientNum_t)v1);
  _R14->nextState.number = LocalClientGlobals->predictedPlayerState.clientNum;
  Handler = CgHandler::getHandler((LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_PlayerStateToEntityState(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState, &_R14->nextState, 0, Handler);
  time = LocalClientGlobals->time;
  v6 = CgHandler::getHandler((LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_PlayerToEntity_ProcessEvents(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState, &_R14->nextState, v6, time);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+19Ch]
    vmovups ymm1, ymmword ptr [r14+1BCh]
  }
  _R14->flags |= 1u;
  eType = _R14->nextState.eType;
  __asm
  {
    vmovups ymmword ptr [r14+120h], ymm0
    vmovups ymm0, ymmword ptr [r14+1DCh]
    vmovups ymmword ptr [r14+140h], ymm1
    vmovups xmm1, xmmword ptr [r14+1FCh]
    vmovups ymmword ptr [r14+160h], ymm0
    vmovups xmmword ptr [r14+180h], xmm1
  }
  if ( eType < 0 || (unsigned __int16)eType > 0xFFu )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)eType, "signed", eType) )
      __debugbreak();
    v12 = _R14->nextState.eType;
  }
  else
  {
    v12 = eType;
  }
  _R14->prevOtherEntityNum = _R14->nextState.otherEntityNum;
  _R14->prevPhysicsChildBodyIdx = _R14->nextState.un.vehicleXModel;
  _R14->prevUseCount = _R14->nextUseCount;
  _R14->prevEType = eType;
  _R14->pose.eType = v12;
  if ( v12 != _R14->nextState.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 883, ASSERT_TYPE_ASSERT, "(es->pose.eType == es->nextState.eType)", (const char *)&queryFormat, "es->pose.eType == es->nextState.eType") )
    __debugbreak();
  __asm { vmovss  xmm0, cs:cg_pmove_0.baseclass_0.fTorsoPitch; pitch }
  _R14->nextState.lerp.u.player.torsoPitchPacked = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
  __asm { vmovss  xmm0, cs:cg_pmove_0.baseclass_0.fWaistPitch; pitch }
  _R14->nextState.lerp.u.actor.lookAtEntityNum = BG_AnimationMP_PackPitch(*(float *)&_XMM0);
  CG_Door_PlayerStateToCharacterInfo((const LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  Instance = CgAntiLag::GetInstance((const LocalClientNum_t)v1);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 891, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  CgAntiLag::ArchiveEntity(Instance, _R14, 1);
  v16 = 0;
  p_weaponShotCount = (const int *)&LocalClientGlobals->predictedPlayerState.weapState[0].weaponShotCount;
  do
  {
    Tracer_SetDrawCounter((const LocalClientNum_t)v1, _R14->nextState.number, (const PlayerHandIndex)v16++, *p_weaponShotCount);
    p_weaponShotCount += 20;
  }
  while ( v16 < 2 );
  CG_EntitySP_CalcPlayerLerpPositions((LocalClientNum_t)v1, _R14);
  LocalClientGlobals->predictedPlayerEntity = _R14;
  LocalClientGlobals->lastGroundSurfaceType = cg_pmove_0.ground->surfaceType;
  _R14->surfaceType = cg_pmove_0.ground->surfaceType;
  AimAssist_UpdateAimAssistPlayerState((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
  LocalClientGlobals->fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
  LocalClientGlobals->fOffhandPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.offhandAdsFrac;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v19) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v19) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v19) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v18) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
  {
    LODWORD(v19) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v19) )
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
  unsigned __int8 v5; 
  ClActiveClient *v12; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  int v15; 
  char v16; 
  const ClActiveClient *v17; 
  int v18; 
  int v19; 
  __int64 v22; 
  playerState_s *ps; 
  bool v32; 
  int commandTime; 
  int v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  char *fmt; 
  int v40; 
  usercmd_s ucmd; 
  __int64 v42; 
  int v43; 

  Profile_Begin(429);
  _R13 = CG_GetLocalClientGlobals(localClientNum);
  v5 = 0;
  if ( CG_PredictSP_ShouldRunPrediction(localClientNum) )
  {
    CG_PredictSP_UpdatePMove(&cg_pmove_0, &_R13->predictedPlayerState, initialCall, 0);
    Client = ClActiveClient::GetClient(localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    v40 = CmdNumber;
    if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
    {
      v15 = CmdNumber - 127;
      if ( CmdNumber - 127 <= CmdNumber )
      {
        v16 = CmdNumber - 127;
        do
        {
          v42 = 0i64;
          v17 = ClActiveClient::GetClient(localClientNum);
          v18 = ClActiveClient_GetCmdNumber(v17);
          v19 = v18;
          LODWORD(v42) = v18;
          if ( v15 > v18 )
          {
            LODWORD(fmt) = v18;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)v15, fmt);
          }
          if ( v15 <= v19 - 128 || v15 <= 0 )
          {
            memset(&v42, 0, 4ui64);
          }
          else
          {
            _RBX = &v17->cmds[v16 & 0x7F];
            memset(&v42, 0, 4ui64);
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
              __debugbreak();
            _RCX = &cg_pmove_0.cmd;
            v22 = 2i64;
            do
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [rbx]
                vmovups xmmword ptr [rcx], xmm0
                vmovups xmm1, xmmword ptr [rbx+10h]
                vmovups xmmword ptr [rcx+10h], xmm1
                vmovups xmm0, xmmword ptr [rbx+20h]
                vmovups xmmword ptr [rcx+20h], xmm0
                vmovups xmm1, xmmword ptr [rbx+30h]
                vmovups xmmword ptr [rcx+30h], xmm1
                vmovups xmm0, xmmword ptr [rbx+40h]
                vmovups xmmword ptr [rcx+40h], xmm0
                vmovups xmm1, xmmword ptr [rbx+50h]
                vmovups xmmword ptr [rcx+50h], xmm1
                vmovups xmm0, xmmword ptr [rbx+60h]
                vmovups xmmword ptr [rcx+60h], xmm0
              }
              _RCX = (usercmd_s *)((char *)_RCX + 128);
              __asm
              {
                vmovups xmm1, xmmword ptr [rbx+70h]
                vmovups xmmword ptr [rcx-10h], xmm1
              }
              _RBX = (usercmd_s *)((char *)_RBX + 128);
              --v22;
            }
            while ( v22 );
            _RCX->buttons = _RBX->buttons;
            if ( CL_GetUserCmd(localClientNum, v15 - 1, &cg_pmove_0.oldcmd) )
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
                  v32 = BGMovingPlatforms::IsOnMovingPlatform(&_R13->predictedPlayerState) || BGMovingPlatforms::IsOnMovingPlatform(_R13->ps);
                  CgPMove::UpdatePredictionError(&cg_pmove_0, v32, 0);
                }
                commandTime = _R13->predictedPlayerState.commandTime;
                v34 = Com_GetUserCommandTime(&cg_pmove_0.cmd) - commandTime;
                Profile_Begin(10);
                if ( Pmove(&cg_pmove_0) )
                  v5 = 1;
                Profile_EndInternal(NULL);
                if ( v5 && !initialCall )
                  CG_View_UpdatePlayerView(localClientNum, 1, v34, cg_pmove_0.cmd.inputTime, cg_pmove_0.cmd.serverTime, &_R13->predictedViewState);
              }
            }
          }
          ++v15;
          ++v16;
        }
        while ( v15 <= v40 );
      }
      v35 = DVARINT_cg_showmiss;
      if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      if ( v35->current.integer > 1 )
        Com_Printf(17, "[%i : %i] ", (unsigned int)cg_pmove_0.cmd.serverTime, (unsigned int)_R13->time);
      if ( !v5 )
      {
        v36 = DVARINT_cg_showmiss;
        if ( !DVARINT_cg_showmiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_showmiss") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        if ( v36->current.integer )
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
    __asm
    {
      vmovss  xmm0, dword ptr [r13+1E0h]
      vsubss  xmm1, xmm0, dword ptr [r13+0BCh]
      vmovss  dword ptr [rsp+1A8h+var_48], xmm1
      vmovss  xmm2, dword ptr [r13+1E4h]
      vsubss  xmm0, xmm2, dword ptr [r13+0C0h]
      vmovss  dword ptr [rsp+1A8h+var_48+4], xmm0
      vmovss  xmm1, dword ptr [r13+1E8h]
      vsubss  xmm2, xmm1, dword ptr [r13+0C4h]
      vmovss  [rsp+1A8h+var_40], xmm2
    }
    v12 = ClActiveClient::GetClient(localClientNum);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
      __debugbreak();
    v12->clviewangles_aab += v12->clviewangles_set_aab;
    LODWORD(v12->clViewangles.clViewangles.v[0]) = v42 ^ ((((_DWORD)v12 + 428) ^ v12->clviewangles_aab) * ((((_DWORD)v12 + 428) ^ v12->clviewangles_aab) + 2));
    LODWORD(v12->clViewangles.clViewangles.v[1]) = HIDWORD(v42) ^ ((((_DWORD)v12 + 432) ^ v12->clviewangles_aab) * ((((_DWORD)v12 + 432) ^ v12->clviewangles_aab) + 2));
    LODWORD(v12->clViewangles.clViewangles.v[2]) = ((((_DWORD)v12 + 436) ^ v12->clviewangles_aab) * ((((_DWORD)v12 + 436) ^ v12->clviewangles_aab) + 2)) ^ v43;
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
  cg_t *LocalClientGlobals; 
  vec3_t vec; 
  vec3_t angles; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm8
    vmovaps [rsp+78h+var_28], xmm9
  }
  _RBX = cgameGlob;
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)cgameGlob->localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+6944h]
    vmovss  dword ptr [rsp+78h+vec], xmm0
    vmovss  xmm1, dword ptr [rax+6948h]
    vmovss  dword ptr [rsp+78h+vec+4], xmm1
    vmovss  xmm0, dword ptr [rax+694Ch]
    vmovss  dword ptr [rsp+78h+vec+8], xmm0
  }
  vectoangles(&vec, &angles);
  __asm
  {
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm2, dword ptr [rsp+78h+angles]
    vmovss  xmm1, dword ptr [rsp+78h+angles+4]
    vmovss  xmm0, dword ptr [rsp+78h+angles+8]
    vmovss  xmm5, cs:__real@43b40000
    vmovss  dword ptr [rbx+1E8h], xmm0
    vmovss  dword ptr [rbx+1E0h], xmm2
    vmovss  dword ptr [rbx+1E4h], xmm1
    vmovss  dword ptr [rbx+0C4h], xmm0
    vmulss  xmm0, xmm2, cs:__real@43360b61
    vmovss  dword ptr [rbx+0C0h], xmm1
    vaddss  xmm1, xmm0, xmm8
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vcvttss2si eax, xmm2
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm3, xmm0, cs:__real@37800000
    vaddss  xmm1, xmm3, xmm8
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm5
    vmovss  dword ptr [rbx+0BCh], xmm0
    vmovss  xmm1, dword ptr [rbx+0C0h]
    vmulss  xmm0, xmm1, cs:__real@43360b61
    vaddss  xmm3, xmm0, xmm8
    vroundss xmm0, xmm9, xmm3, 1
    vcvttss2si eax, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm4, xmm0, cs:__real@37800000
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm5
    vmovss  dword ptr [rbx+0C0h], xmm0
    vmovss  xmm1, dword ptr [rbx+0C4h]
    vmulss  xmm0, xmm1, cs:__real@43360b61
    vaddss  xmm3, xmm0, xmm8
    vroundss xmm0, xmm9, xmm3, 1
    vcvttss2si eax, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm4, xmm0, cs:__real@37800000
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm5
    vmovss  dword ptr [rbx+0C4h], xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)_RBX->localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &_RBX->predictedPlayerState.origin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vsubss  xmm1, xmm0, dword ptr [rbx+1F0h]
    vmovss  dword ptr [rbx+40h], xmm1
    vmovaps xmm8, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_28]
  }
}

/*
==============
CG_PredictSP_SavePlayerState
==============
*/
void CG_PredictSP_SavePlayerState(LocalClientNum_t localClientNum)
{
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  _RDI->oldCommandTime = _RDI->predictedPlayerState.commandTime;
  _RDI->oldServerTime = _RDI->predictedPlayerState.serverTime;
  _RDI->oldOrigin = _RDI->predictedPlayerState.origin;
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
CG_PredictSP_SetupPlayerState
==============
*/
void CG_PredictSP_SetupPlayerState(LocalClientNum_t localClientNum)
{
  __int64 v3; 
  CgHandler *Handler; 
  CgHandler *v52; 
  cgs_t *v54; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v58; 
  int v59; 
  int pm_type; 
  __int16 groundEntityNum; 
  playerState_s *p_predictedPlayerState; 
  int time; 
  int groundEntityTime; 
  playerState_s *nextPs; 
  const vec3_t *ps; 
  __int64 duration; 
  __int64 v73; 
  int v74; 
  vec3_t outOrigin; 
  __int64 v76; 
  WorldUpReferenceFrame v77; 
  char v78; 
  void *retaddr; 

  _RAX = &retaddr;
  v76 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v3 = localClientNum;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  _RBX->refdef.viewOffsetPrev.v[0] = _RBX->refdef.viewOffset.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+69A0h]
    vmovss  dword ptr [rbx+69ACh], xmm0
    vmovss  xmm1, dword ptr [rbx+69A4h]
    vmovss  dword ptr [rbx+69B0h], xmm1
  }
  _R13 = CG_GetEntity((const LocalClientNum_t)v3, v3);
  _R14 = _RBX->ps;
  _RSI = _RBX->nextPs;
  if ( _R14->clientNum != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 385, ASSERT_TYPE_ASSERT, "(prevPs->clientNum == localClientNum)", (const char *)&queryFormat, "prevPs->clientNum == localClientNum") )
    __debugbreak();
  if ( _RSI->clientNum != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 386, ASSERT_TYPE_ASSERT, "(nextPs->clientNum == localClientNum)", (const char *)&queryFormat, "nextPs->clientNum == localClientNum") )
    __debugbreak();
  Handler = CgHandler::getHandler((LocalClientNum_t)v3);
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_UpdateWeaponAnimArrays(CgWeaponMap::ms_instance[v3], _RSI, Handler);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+65E0h]
    vmovss  xmm0, dword ptr [rsi+30h]
    vsubss  xmm1, xmm0, dword ptr [r14+30h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [r14+30h]
    vmovss  dword ptr [rsp+0C8h+outOrigin], xmm3
    vmovss  xmm0, dword ptr [rsi+34h]
    vsubss  xmm1, xmm0, dword ptr [r14+34h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [r14+34h]
    vmovss  dword ptr [rsp+0C8h+outOrigin+4], xmm3
    vmovss  xmm0, dword ptr [rsi+38h]
    vsubss  xmm1, xmm0, dword ptr [r14+38h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [r14+38h]
    vmovss  dword ptr [rsp+0C8h+outOrigin+8], xmm3
  }
  CG_GetPoseOrigin(&_R13->pose, &outOrigin);
  *(_QWORD *)_R13->pose.angles.v = 0i64;
  _R13->pose.angles.v[2] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+1D4h]
    vmovss  xmm5, dword ptr [r13+158h]
    vsubss  xmm0, xmm0, xmm5
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm2, 1
    vsubss  xmm0, xmm4, xmm1
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmulss  xmm2, xmm1, dword ptr [rbx+65E0h]
    vaddss  xmm3, xmm2, xmm5
    vmovss  dword ptr [r13+4Ch], xmm3
  }
  if ( CG_ModelPreviewerNeedsVieworgInterpSkipped((LocalClientNum_t)v3) )
    goto LABEL_18;
  if ( CG_Weapons_GetWeaponViewRoughOriginIfValid((LocalClientNum_t)v3, _RSI, &_RBX->refdef.viewOffset) )
    goto LABEL_19;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 1u) || (_RSI->linkFlags.m_flags[0] & 4) != 0 || BG_GetRemoteControlledVehicleEntityNum(_RSI, Handler) != 2047 )
  {
LABEL_18:
    RefdefView_GetOrg(&_RBX->refdef.view, &_RBX->refdef.viewOffset);
  }
  else if ( _RSI->vehicleState.entity == 2047 )
  {
    CG_GetPoseOrigin(&_R13->pose, &_RBX->refdef.viewOffset);
    v52 = CgHandler::getHandler((LocalClientNum_t)v3);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v77, _RSI, v52);
    __asm { vmovss  xmm1, dword ptr [rsi+1E8h]; height }
    WorldUpReferenceFrame::AddUpContribution(&v77, *(float *)&_XMM1, &_RBX->refdef.viewOffset);
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+65E0h]
      vmovss  xmm3, dword ptr [r14+12Ch]
      vmovss  xmm0, dword ptr [rsi+12Ch]
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm3
      vmovss  dword ptr [rbx+699Ch], xmm3
      vmovss  xmm4, dword ptr [r14+130h]
      vmovss  xmm0, dword ptr [rsi+130h]
      vsubss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm4
      vmovss  dword ptr [rbx+69A0h], xmm3
      vmovss  xmm5, dword ptr [r14+134h]
      vmovss  xmm0, dword ptr [rsi+134h]
      vsubss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm5
      vmovss  dword ptr [rbx+69A4h], xmm3
      vaddss  xmm0, xmm3, dword ptr [rsi+1E8h]
      vmovss  dword ptr [rbx+69A4h], xmm0
    }
  }
LABEL_19:
  if ( !_RBX->validPPS )
  {
    _RBX->validPPS = 1;
    memcpy_0(&_RBX->predictedPlayerState, _RSI, sizeof(_RBX->predictedPlayerState));
    _RBX->predictedPlayerState.commandTimeInterpolated = _RBX->predictedPlayerState.commandTime;
    _RBX->predictedPlayerState.serverTimeInterpolated = _RBX->predictedPlayerState.serverTime;
    _RBX->predictedPlayerState.inputTimeInterpolated = _RBX->predictedPlayerState.inputTime;
    _RBX->groundEntityTime = _RBX->time - 1000;
    CG_SetupPrePredictBounds(_RBX, &_RBX->playerBox);
    if ( (unsigned int)v3 >= cgs_t::ms_allocatedCount )
    {
      v74 = cgs_t::ms_allocatedCount;
      LODWORD(duration) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", duration, v74) )
        __debugbreak();
    }
    if ( !cgs_t::ms_cgsArray[v3] )
    {
      LODWORD(v73) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v73) )
        __debugbreak();
    }
    if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v73) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v73) )
        __debugbreak();
    }
    v54 = cgs_t::ms_cgsArray[v3];
    v55 = DVARINT_cl_freemove;
    if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    if ( v55->current.integer && v54->started )
      CG_PredictSP_RestorePlayerOrientation(_RBX);
    v54->started = 1;
  }
  if ( !_RBX->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 454, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  _RBX->physicsTime = _RBX->nextSnap->serverTime;
  v56 = DVARBOOL_cg_drawPlayerBoundingBox;
  if ( !DVARBOOL_cg_drawPlayerBoundingBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerBoundingBox") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( v56->current.enabled || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x20u) )
  {
    __asm { vmovss  xmm2, dword ptr [rsi+1DCh]; yaw }
    CG_DebugBox(&_RSI->origin, &_RBX->playerBox, *(float *)&_XMM2, &colorRed, 1, 0);
  }
  v58 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.integer )
  {
    CG_PredictSP_UpdateFreeMove(_RBX);
    goto LABEL_77;
  }
  if ( !CG_PredictSP_ShouldRunPrediction((const LocalClientNum_t)v3) )
  {
    v59 = 1;
LABEL_76:
    CG_PredictSP_InterpolatePlayerState((LocalClientNum_t)v3, v59, 1);
    goto LABEL_77;
  }
  pm_type = _RSI->pm_type;
  if ( pm_type == 1 || pm_type == 8 || (_RSI->linkFlags.m_flags[0] & 4) != 0 )
  {
    v59 = 0;
    goto LABEL_76;
  }
  groundEntityNum = _RSI->groundEntityNum;
  if ( groundEntityNum <= 0 || (unsigned __int16)groundEntityNum >= 0x7FEu )
  {
    p_predictedPlayerState = &_RBX->predictedPlayerState;
    if ( BGMovingPlatforms::IsOnMovingPlatform(&_RBX->predictedPlayerState) )
    {
      time = _RBX->time;
      _RBX->groundEntityTime = time;
      groundEntityTime = time;
    }
    else
    {
      time = _RBX->time;
      groundEntityTime = _RBX->groundEntityTime;
    }
  }
  else
  {
    p_predictedPlayerState = &_RBX->predictedPlayerState;
    time = _RBX->time;
    _RBX->groundEntityTime = time;
    groundEntityTime = time;
  }
  if ( (unsigned int)(time - groundEntityTime) < 0x3E8 )
  {
    memcpy_0(p_predictedPlayerState, _RSI, sizeof(playerState_s));
    _RBX->predictedPlayerState.commandTimeInterpolated = p_predictedPlayerState->commandTime;
    _RBX->predictedPlayerState.serverTimeInterpolated = _RBX->predictedPlayerState.serverTime;
    _RBX->predictedPlayerState.inputTimeInterpolated = _RBX->predictedPlayerState.inputTime;
  }
  _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !_RDI->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 64, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !_RDI->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 65, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( _RDI->nextSnap->serverTime > _RDI->snap->serverTime )
  {
    nextPs = _RDI->nextPs;
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&nextPs->otherFlags, ACTIVE, 9u) )
    {
      ps = (const vec3_t *)_RDI->ps;
      __asm { vmovss  xmm6, dword ptr [rdi+65E0h] }
      if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 77, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
        __debugbreak();
      __asm { vmovaps xmm2, xmm6; frac }
      LerpAngles(ps + 56, &nextPs->groundTiltAngles, *(const float *)&_XMM2, &_RDI->predictedPlayerState.groundTiltAngles);
    }
  }
LABEL_77:
  memset(&outOrigin, 0, sizeof(outOrigin));
  _R11 = &v78;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  const dvar_t *v4; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v11; 
  CgHandler *Handler; 
  vec3_t inOutViewAngles; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v45; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  v4 = DVARINT_cl_freemove;
  _RBX = cgameGlob;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 285, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DVARINT_cl_freemove, \"cl_freemove\" ) != FREEMOVE_NONE)", (const char *)&queryFormat, "Dvar_GetInt( cl_freemove ) != FREEMOVE_NONE") )
    __debugbreak();
  v6 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = 3;
  if ( v6->current.integer == 1 )
    v7 = 2;
  _RBX->predictedPlayerState.pm_type = v7;
  _RBX->predictedPlayerState.eFlags.m_flags[0] &= 4u;
  _RBX->predictedPlayerState.weapCommon.aimSpreadScale = 0.0;
  _RBX->predictedPlayerState.pm_flags = 0i64;
  _RBX->predictedPlayerState.weapCommon.weapFlags = 0i64;
  _RBX->predictedPlayerState.otherFlags = 0i64;
  _RDI = _RBX->ps;
  _RAX = _RBX->nextPs;
  __asm { vmovss  xmm7, dword ptr [rbx+65E0h] }
  v11 = DVARBOOL_cg_drawPlayerPosInFreeMove;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+30h]
    vsubss  xmm1, xmm0, dword ptr [rdi+30h]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [rdi+30h]
    vmovss  dword ptr [rsp+0F8h+origin], xmm3
    vmovss  xmm0, dword ptr [rax+34h]
    vsubss  xmm1, xmm0, dword ptr [rdi+34h]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [rdi+34h]
    vmovss  dword ptr [rsp+0F8h+origin+4], xmm3
    vmovss  xmm0, dword ptr [rax+38h]
    vsubss  xmm1, xmm0, dword ptr [rdi+38h]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [rdi+38h]
    vmovss  dword ptr [rsp+0F8h+origin+8], xmm3
    vmovss  xmm6, dword ptr [rdi+1DCh]
    vmovss  xmm0, dword ptr [rax+1DCh]
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm6, xmm2, xmm6
  }
  if ( !DVARBOOL_cg_drawPlayerPosInFreeMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerPosInFreeMove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    Handler = CgHandler::getHandler(_RBX->localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v45, _RDI, Handler);
    if ( v45.m_axisAdjusted )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1DCh]
        vxorps  xmm1, xmm1, xmm1
        vmovss  dword ptr [rsp+0F8h+inOutViewAngles], xmm1
        vmovss  dword ptr [rsp+0F8h+inOutViewAngles+4], xmm0
        vmovss  dword ptr [rsp+0F8h+inOutViewAngles+8], xmm1
      }
      BG_CalcLinkedViewValues(_RDI, &inOutViewAngles);
      AnglesToAxis(&inOutViewAngles, &axis);
      WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v45, &axis);
      CG_DebugBoxOriented(&origin, &_RBX->playerBox, &axis, &colorOrange, 1, 0);
    }
    else
    {
      __asm { vmovaps xmm2, xmm6; yaw }
      CG_DebugBox(&origin, &_RBX->playerBox, *(float *)&_XMM2, &colorOrange, 1, 0);
    }
  }
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_PredictSP_UpdatePMove
==============
*/
void CG_PredictSP_UpdatePMove(pmove_t *pm, playerState_s *const playerState, const bool isInitialCall, const bool isExtrapolation)
{
  cg_t *LocalClientGlobals; 
  int v12; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 535, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_predict_sp.cpp", 536, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  pm->ps = playerState;
  pm->initialCall = isInitialCall;
  pm->isExtrapolation = isExtrapolation;
  if ( isInitialCall )
  {
    _RAX = pm->bounds;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rax+0Ch]
    }
    if ( !CG_PredictSP_IsFreeMove() )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)pm->localClientNum);
      CGMovingPlatformClient::UpdatePredictedClient(&LocalClientGlobals->movingPlatforms, pm->localClientNum, pm, &LocalClientGlobals->moverTransform, &LocalClientGlobals->originMoverLocal);
    }
  }
  v12 = 65553;
  if ( pm->ps->pm_type < 7 )
    v12 = 33636369;
  pm->tracemask = v12;
}

