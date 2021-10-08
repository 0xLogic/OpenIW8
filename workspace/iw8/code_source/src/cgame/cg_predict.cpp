/*
==============
CG_Predict_InterpolateCommandInput
==============
*/

void __fastcall CG_Predict_InterpolateCommandInput(const playerState_s *const prevPs, const playerState_s *const nextPs, float frameInterpolation, playerState_s *outPs)
{
  ?CG_Predict_InterpolateCommandInput@@YAXQEBUplayerState_s@@0MPEAU1@@Z(prevPs, nextPs, frameInterpolation, outPs);
}

/*
==============
CG_Predict_ShouldLerpViewFields
==============
*/

bool __fastcall CG_Predict_ShouldLerpViewFields(const playerState_s *prevPs, const playerState_s *nextPs)
{
  return ?CG_Predict_ShouldLerpViewFields@@YA_NPEBUplayerState_s@@0@Z(prevPs, nextPs);
}

/*
==============
CG_Predict_ShouldRunExtrapolation
==============
*/

bool __fastcall CG_Predict_ShouldRunExtrapolation(const LocalClientNum_t localClientNum)
{
  return ?CG_Predict_ShouldRunExtrapolation@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Predict_InterpolatePlayerState
==============
*/

void __fastcall CG_Predict_InterpolatePlayerState(const LocalClientNum_t localClientNum, const bool shouldRunPrediction, const float frameInterpolation, const playerState_s *prevPs, const playerState_s *nextPs, playerState_s *outPs)
{
  ?CG_Predict_InterpolatePlayerState@@YAXW4LocalClientNum_t@@_NMPEBUplayerState_s@@2PEAU2@@Z(localClientNum, shouldRunPrediction, frameInterpolation, prevPs, nextPs, outPs);
}

/*
==============
CG_Predict_FixUpTimestamps
==============
*/
void CG_Predict_FixUpTimestamps(const LocalClientNum_t localClientNum, const float frameInterpolation, const playerState_s *prevPs, const playerState_s *nextPs, playerState_s *outPs)
{
  int serverTimeInterpolated; 
  bool v8; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v10; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v11; 
  bool v12; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v13; 
  bool v14; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v15; 
  bool v16; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v17; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 10, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !prevPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 11, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  if ( !nextPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 12, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  if ( !outPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 13, ASSERT_TYPE_ASSERT, "(outPs)", (const char *)&queryFormat, "outPs") )
    __debugbreak();
  serverTimeInterpolated = outPs->serverTimeInterpolated;
  if ( outPs->weapCommon.weaponOffsetSustainedFireStartTime > serverTimeInterpolated || outPs->weapCommon.weaponOffsetSustainedFireStopTime > serverTimeInterpolated )
  {
    outPs->weapCommon.weaponOffsetSustainedFireStartTime = prevPs->weapCommon.weaponOffsetSustainedFireStartTime;
    outPs->weapCommon.weaponOffsetSustainedFireStopTime = prevPs->weapCommon.weaponOffsetSustainedFireStopTime;
    outPs->weapCommon.weaponOffsetPatternFullAutoScale = prevPs->weapCommon.weaponOffsetPatternFullAutoScale;
    v8 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&prevPs->weapCommon.weapFlags, ACTIVE, 0x31u);
    p_weapFlags = &outPs->weapCommon.weapFlags;
    if ( v8 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x31u);
    else
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x31u);
  }
  if ( outPs->weapState[0].weaponFireTime > serverTimeInterpolated )
  {
    outPs->weapState[0].weaponFireTime = prevPs->weapState[0].weaponFireTime;
    outPs->weapState[0].weaponPrevFireTime = prevPs->weapState[0].weaponPrevFireTime;
  }
  if ( outPs->weapState[1].weaponFireTime > serverTimeInterpolated )
  {
    outPs->weapState[1].weaponFireTime = prevPs->weapState[1].weaponFireTime;
    outPs->weapState[1].weaponPrevFireTime = prevPs->weapState[1].weaponPrevFireTime;
  }
  if ( outPs->weapCommon.weaponStartFireTime_BlendedOut > serverTimeInterpolated )
    outPs->weapCommon.weaponStartFireTime_BlendedOut = prevPs->weapCommon.weaponStartFireTime_BlendedOut;
  if ( outPs->weapCommon.weaponOffsetHoldFireSlowBlendTime > serverTimeInterpolated )
  {
    outPs->weapCommon.weaponOffsetHoldFireSlowBlendTime = prevPs->weapCommon.weaponOffsetHoldFireSlowBlendTime;
    outPs->weapCommon.weaponOffsetHoldBlendFractionSlow = prevPs->weapCommon.weaponOffsetHoldBlendFractionSlow;
    v10 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&prevPs->weapCommon.weapFlags, ACTIVE, 0x2Du);
    v11 = &outPs->weapCommon.weapFlags;
    if ( v10 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(v11, ACTIVE, 0x2Du);
    else
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(v11, ACTIVE, 0x2Du);
  }
  if ( outPs->weapCommon.weaponOffsetHoldFireFastBlendTime > serverTimeInterpolated )
  {
    outPs->weapCommon.weaponOffsetHoldFireFastBlendTime = prevPs->weapCommon.weaponOffsetHoldFireFastBlendTime;
    outPs->weapCommon.weaponOffsetHoldBlendFractionFast = prevPs->weapCommon.weaponOffsetHoldBlendFractionFast;
    v12 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&prevPs->weapCommon.weapFlags, ACTIVE, 0x2Eu);
    v13 = &outPs->weapCommon.weapFlags;
    if ( v12 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(v13, ACTIVE, 0x2Eu);
    else
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(v13, ACTIVE, 0x2Eu);
  }
  if ( outPs->weapCommon.weaponOffsetAdsBlendTime > serverTimeInterpolated )
  {
    outPs->weapCommon.weaponOffsetAdsBlendTime = prevPs->weapCommon.weaponOffsetAdsBlendTime;
    outPs->weapCommon.weaponOffsetAdsBlendFraction = prevPs->weapCommon.weaponOffsetAdsBlendFraction;
    v14 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&prevPs->weapCommon.weapFlags, ACTIVE, 0x2Fu);
    v15 = &outPs->weapCommon.weapFlags;
    if ( v14 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(v15, ACTIVE, 0x2Fu);
    else
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(v15, ACTIVE, 0x2Fu);
    v16 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&prevPs->weapCommon.weapFlags, ACTIVE, 0x30u);
    v17 = &outPs->weapCommon.weapFlags;
    if ( v16 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(v17, ACTIVE, 0x30u);
    else
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(v17, ACTIVE, 0x30u);
  }
  if ( outPs->weapCommon.lastReloadStateChangeTime > serverTimeInterpolated )
  {
    outPs->weapCommon.lastReloadStateChangeTime = prevPs->weapCommon.lastReloadStateChangeTime;
    outPs->weapCommon.lastReloadStateChangeWasReloading = prevPs->weapCommon.lastReloadStateChangeWasReloading;
    outPs->weapCommon.lastReloadFraction = prevPs->weapCommon.lastReloadFraction;
  }
  if ( outPs->slideState.slideStartTime > serverTimeInterpolated || outPs->slideState.slideEndTime > serverTimeInterpolated )
    outPs->slideState = prevPs->slideState;
  if ( outPs->weapCommon.adsZoomLevelChangeTime > serverTimeInterpolated )
  {
    outPs->weapCommon.adsZoomLevelChangeTime = prevPs->weapCommon.adsZoomLevelChangeTime;
    outPs->weapCommon.adsZoomLevelFractionOnStateChange = prevPs->weapCommon.adsZoomLevelFractionOnStateChange;
    outPs->weapEquippedData[0].zoomLevelIndex = prevPs->weapEquippedData[0].zoomLevelIndex;
    outPs->weapEquippedData[1].zoomLevelIndex = prevPs->weapEquippedData[1].zoomLevelIndex;
    outPs->weapEquippedData[2].zoomLevelIndex = prevPs->weapEquippedData[2].zoomLevelIndex;
    outPs->weapEquippedData[3].zoomLevelIndex = prevPs->weapEquippedData[3].zoomLevelIndex;
    outPs->weapEquippedData[4].zoomLevelIndex = prevPs->weapEquippedData[4].zoomLevelIndex;
    outPs->weapEquippedData[5].zoomLevelIndex = prevPs->weapEquippedData[5].zoomLevelIndex;
    outPs->weapEquippedData[6].zoomLevelIndex = prevPs->weapEquippedData[6].zoomLevelIndex;
    outPs->weapEquippedData[7].zoomLevelIndex = prevPs->weapEquippedData[7].zoomLevelIndex;
    outPs->weapEquippedData[8].zoomLevelIndex = prevPs->weapEquippedData[8].zoomLevelIndex;
    outPs->weapEquippedData[9].zoomLevelIndex = prevPs->weapEquippedData[9].zoomLevelIndex;
    outPs->weapEquippedData[10].zoomLevelIndex = prevPs->weapEquippedData[10].zoomLevelIndex;
    outPs->weapEquippedData[11].zoomLevelIndex = prevPs->weapEquippedData[11].zoomLevelIndex;
    outPs->weapEquippedData[12].zoomLevelIndex = prevPs->weapEquippedData[12].zoomLevelIndex;
    outPs->weapEquippedData[13].zoomLevelIndex = prevPs->weapEquippedData[13].zoomLevelIndex;
    outPs->weapEquippedData[14].zoomLevelIndex = prevPs->weapEquippedData[14].zoomLevelIndex;
  }
  if ( outPs->skydivePlayerState.landingTime > serverTimeInterpolated )
    outPs->skydivePlayerState.landingTime = prevPs->skydivePlayerState.landingTime;
}

/*
==============
CG_Predict_InterpolateCommandInput
==============
*/

void __fastcall CG_Predict_InterpolateCommandInput(const playerState_s *const prevPs, const playerState_s *const nextPs, double frameInterpolation, playerState_s *outPs)
{
  _EAX = nextPs->lastInput.forwardmove;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm4, xmm0, xmm2
    vmovd   xmm1, eax
  }
  _EAX = prevPs->lastInput.forwardmove;
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmovaps xmm5, xmm2
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm3, xmm1, xmm2
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm3, xmm1
    vcvttss2si eax, xmm2
  }
  outPs->lastInput.forwardmove = _EAX;
  _EAX = prevPs->lastInput.rightmove;
  __asm { vmovd   xmm0, eax }
  _EAX = nextPs->lastInput.rightmove;
  __asm
  {
    vmovd   xmm1, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm4
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm0, xmm1, xmm5
    vaddss  xmm2, xmm2, xmm0
    vcvttss2si eax, xmm2
  }
  outPs->lastInput.rightmove = _EAX;
  _EAX = prevPs->lastInput.pitchmove;
  __asm { vmovd   xmm0, eax }
  _EAX = nextPs->lastInput.pitchmove;
  __asm
  {
    vmovd   xmm1, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm4
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm0, xmm1, xmm5
    vaddss  xmm2, xmm2, xmm0
    vcvttss2si eax, xmm2
  }
  outPs->lastInput.pitchmove = _EAX;
  _EAX = prevPs->lastInput.yawmove;
  __asm { vmovd   xmm0, eax }
  _EAX = nextPs->lastInput.yawmove;
  __asm
  {
    vmovd   xmm1, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm4
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm0, xmm1, xmm5
    vaddss  xmm2, xmm2, xmm0
    vcvttss2si eax, xmm2
  }
  outPs->lastInput.yawmove = _EAX;
}

/*
==============
CG_Predict_InterpolatePlayerState
==============
*/

void __fastcall CG_Predict_InterpolatePlayerState(const LocalClientNum_t localClientNum, const bool shouldRunPrediction, double frameInterpolation, const playerState_s *prevPs, const playerState_s *nextPs, playerState_s *outPs)
{
  int commandTime; 
  int serverTime; 
  int v26; 
  int inputTime; 
  int v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm7, xmm2
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 162, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !prevPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 163, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  if ( !nextPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 164, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  if ( !outPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 165, ASSERT_TYPE_ASSERT, "(outPs)", (const char *)&queryFormat, "outPs") )
    __debugbreak();
  commandTime = nextPs->commandTime;
  if ( shouldRunPrediction )
  {
    outPs->commandTimeInterpolated = commandTime;
    outPs->serverTimeInterpolated = nextPs->serverTime;
    outPs->inputTimeInterpolated = nextPs->inputTime;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edx
    }
    if ( prevPs->commandTime > commandTime )
      commandTime = prevPs->commandTime;
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vsubss  xmm6, xmm0, xmm7
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r8d
      vmulss  xmm2, xmm0, xmm7
      vmulss  xmm3, xmm1, xmm6
      vaddss  xmm1, xmm3, xmm2
      vcvttss2si ecx, xmm1; val
    }
    outPs->commandTimeInterpolated = I_clamp(_ECX, prevPs->commandTime, commandTime);
    serverTime = prevPs->serverTime;
    v26 = nextPs->serverTime;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
    }
    if ( serverTime > v26 )
      v26 = prevPs->serverTime;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r8d
      vmulss  xmm2, xmm1, xmm7
      vmulss  xmm3, xmm0, xmm6
      vaddss  xmm0, xmm3, xmm2
      vcvttss2si ecx, xmm0; val
    }
    outPs->serverTimeInterpolated = I_clamp(_ECX, serverTime, v26);
    inputTime = prevPs->inputTime;
    v36 = nextPs->inputTime;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
    }
    if ( inputTime > v36 )
      v36 = prevPs->inputTime;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r8d
      vmulss  xmm2, xmm1, xmm7
      vmulss  xmm3, xmm0, xmm6
      vaddss  xmm0, xmm3, xmm2
      vcvttss2si ecx, xmm0; val
    }
    outPs->inputTimeInterpolated = I_clamp(_ECX, inputTime, v36);
    __asm { vmovaps xmm1, xmm7; frameInterpolation }
    CG_Predict_FixUpTimestamps(localClientNum, *(const float *)&_XMM1, prevPs, nextPs, outPs);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm7
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm1, xmm6
      vaddss  xmm2, xmm2, xmm0
      vcvttss2si eax, xmm2
    }
    outPs->lastInput.forwardmove = _EAX;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm6
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm1, xmm7
      vaddss  xmm2, xmm2, xmm0
      vcvttss2si eax, xmm2
    }
    outPs->lastInput.rightmove = _EAX;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm6
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm1, xmm7
      vaddss  xmm2, xmm2, xmm0
      vcvttss2si eax, xmm2
    }
    outPs->lastInput.pitchmove = _EAX;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm6
      vmovaps xmm6, [rsp+78h+var_28]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm1, xmm7
      vaddss  xmm2, xmm2, xmm0
      vcvttss2si eax, xmm2
    }
    outPs->lastInput.yawmove = _EAX;
  }
  __asm { vmovaps xmm7, [rsp+78h+var_38] }
}

/*
==============
CG_Predict_ShouldLerpViewFields
==============
*/
bool CG_Predict_ShouldLerpViewFields(const playerState_s *prevPs, const playerState_s *nextPs)
{
  bool v8; 
  bool v10; 
  vec3_t *p_worldUpAngles; 
  int v14; 
  bool v17; 
  char v22; 
  bool result; 
  __int64 v28; 
  __int64 v29; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  if ( !prevPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 190, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  if ( !nextPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 191, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  v8 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&nextPs->otherFlags, ACTIVE, 9u);
  _RBX = DCONST_DVARFLT_predictionViewValueSnapThreshold;
  v10 = !v8;
  if ( !DCONST_DVARFLT_predictionViewValueSnapThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "predictionViewValueSnapThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+28h]
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  p_worldUpAngles = &nextPs->worldUpAngles;
  v14 = 0;
  _RDI = &prevPs->worldUpAngles;
  _RBP = (char *)p_worldUpAngles - (char *)&prevPs->worldUpAngles;
  v17 = 1;
  while ( 1 )
  {
    if ( !v17 )
    {
      LODWORD(v29) = 3;
      LODWORD(v28) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rdi+rbp] }
    if ( (unsigned int)v14 >= 3 )
    {
      LODWORD(v29) = 3;
      LODWORD(v28) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]; angle1
      vmovaps xmm1, xmm6; angle2
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm0, xmm0, xmm8
      vcomiss xmm0, xmm7
    }
    if ( !(v17 | v22) )
      break;
    ++v14;
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v17 = (unsigned int)v14 < 3;
    if ( v14 >= 3 )
    {
      result = v10;
      goto LABEL_21;
    }
  }
  result = 0;
LABEL_21:
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return result;
}

/*
==============
CG_Predict_ShouldRunExtrapolation
==============
*/
bool CG_Predict_ShouldRunExtrapolation(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  __int64 v3; 
  vec3_t *p_halfSize; 
  __int64 v8; 
  __int64 v9; 
  float v1[4]; 

  v2 = DVARBOOL_killswitch_prevent_zero_bounds_extrapolation_enabled;
  v3 = localClientNum;
  if ( !DVARBOOL_killswitch_prevent_zero_bounds_extrapolation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_prevent_zero_bounds_extrapolation_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return 1;
  if ( (unsigned int)v3 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v9) = cg_t::ms_allocatedCount;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v3] )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v9) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v9) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; epsilon
    vxorps  xmm0, xmm0, xmm0
  }
  p_halfSize = &cg_t::ms_cgArray[v3]->playerBox.halfSize;
  __asm
  {
    vmovss  [rsp+68h+v1], xmm0
    vmovss  [rsp+68h+var_24], xmm0
    vmovss  [rsp+68h+var_20], xmm0
  }
  return !VecNCompareCustomEpsilon(p_halfSize->v, v1, *(float *)&_XMM2, 3);
}

