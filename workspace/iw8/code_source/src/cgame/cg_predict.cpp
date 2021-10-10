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
void CG_Predict_InterpolateCommandInput(const playerState_s *const prevPs, const playerState_s *const nextPs, float frameInterpolation, playerState_s *outPs)
{
  outPs->lastInput.forwardmove = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)nextPs->lastInput.forwardmove).m128_f32[0] * frameInterpolation) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)prevPs->lastInput.forwardmove).m128_f32[0] * (float)(1.0 - frameInterpolation)));
  outPs->lastInput.rightmove = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)prevPs->lastInput.rightmove).m128_f32[0] * (float)(1.0 - frameInterpolation)) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)nextPs->lastInput.rightmove).m128_f32[0] * frameInterpolation));
  outPs->lastInput.pitchmove = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)prevPs->lastInput.pitchmove).m128_f32[0] * (float)(1.0 - frameInterpolation)) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)nextPs->lastInput.pitchmove).m128_f32[0] * frameInterpolation));
  outPs->lastInput.yawmove = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)prevPs->lastInput.yawmove).m128_f32[0] * (float)(1.0 - frameInterpolation)) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)nextPs->lastInput.yawmove).m128_f32[0] * frameInterpolation));
}

/*
==============
CG_Predict_InterpolatePlayerState
==============
*/
void CG_Predict_InterpolatePlayerState(const LocalClientNum_t localClientNum, const bool shouldRunPrediction, const float frameInterpolation, const playerState_s *prevPs, const playerState_s *nextPs, playerState_s *outPs)
{
  int commandTime; 
  float v10; 
  int serverTime; 
  int v12; 
  int inputTime; 
  int v14; 

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
    if ( prevPs->commandTime > commandTime )
      commandTime = prevPs->commandTime;
    v10 = 1.0 - frameInterpolation;
    outPs->commandTimeInterpolated = I_clamp((int)(float)((float)((float)prevPs->commandTime * (float)(1.0 - frameInterpolation)) + (float)((float)commandTime * frameInterpolation)), prevPs->commandTime, commandTime);
    serverTime = prevPs->serverTime;
    v12 = nextPs->serverTime;
    if ( serverTime > v12 )
      v12 = prevPs->serverTime;
    outPs->serverTimeInterpolated = I_clamp((int)(float)((float)((float)serverTime * v10) + (float)((float)v12 * frameInterpolation)), serverTime, v12);
    inputTime = prevPs->inputTime;
    v14 = nextPs->inputTime;
    if ( inputTime > v14 )
      v14 = prevPs->inputTime;
    outPs->inputTimeInterpolated = I_clamp((int)(float)((float)((float)inputTime * v10) + (float)((float)v14 * frameInterpolation)), inputTime, v14);
    CG_Predict_FixUpTimestamps(localClientNum, frameInterpolation, prevPs, nextPs, outPs);
    outPs->lastInput.forwardmove = (int)(float)((float)((float)nextPs->lastInput.forwardmove * frameInterpolation) + (float)((float)prevPs->lastInput.forwardmove * v10));
    outPs->lastInput.rightmove = (int)(float)((float)((float)prevPs->lastInput.rightmove * v10) + (float)((float)nextPs->lastInput.rightmove * frameInterpolation));
    outPs->lastInput.pitchmove = (int)(float)((float)((float)prevPs->lastInput.pitchmove * v10) + (float)((float)nextPs->lastInput.pitchmove * frameInterpolation));
    outPs->lastInput.yawmove = (int)(float)((float)((float)prevPs->lastInput.yawmove * v10) + (float)((float)nextPs->lastInput.yawmove * frameInterpolation));
  }
}

/*
==============
CG_Predict_ShouldLerpViewFields
==============
*/
bool CG_Predict_ShouldLerpViewFields(const playerState_s *prevPs, const playerState_s *nextPs)
{
  bool v4; 
  const dvar_t *v5; 
  bool v6; 
  float value; 
  vec3_t *p_worldUpAngles; 
  int v9; 
  vec3_t *v10; 
  signed __int64 v11; 
  bool v12; 
  float v13; 
  double v14; 
  __int64 v16; 
  __int64 v17; 

  if ( !prevPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 190, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  if ( !nextPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predict.cpp", 191, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  v4 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&nextPs->otherFlags, ACTIVE, 9u);
  v5 = DCONST_DVARFLT_predictionViewValueSnapThreshold;
  v6 = !v4;
  if ( !DCONST_DVARFLT_predictionViewValueSnapThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "predictionViewValueSnapThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  p_worldUpAngles = &nextPs->worldUpAngles;
  v9 = 0;
  v10 = &prevPs->worldUpAngles;
  v11 = (char *)p_worldUpAngles - (char *)&prevPs->worldUpAngles;
  v12 = 1;
  while ( 1 )
  {
    if ( !v12 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v13 = *(float *)((char *)v10->v + v11);
    if ( (unsigned int)v9 >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v14 = AngleDelta(v10->v[0], v13);
    if ( COERCE_FLOAT(LODWORD(v14) & _xmm) > value )
      break;
    ++v9;
    v10 = (vec3_t *)((char *)v10 + 4);
    v12 = (unsigned int)v9 < 3;
    if ( v9 >= 3 )
      return v6;
  }
  return 0;
}

/*
==============
CG_Predict_ShouldRunExtrapolation
==============
*/
bool CG_Predict_ShouldRunExtrapolation(const LocalClientNum_t localClientNum)
{
  const dvar_t *rbx1; 
  __int64 v2; 
  vec3_t *p_halfSize; 
  __int64 v5; 
  __int64 v6; 
  float v1[4]; 

  rbx1 = DVARBOOL_killswitch_prevent_zero_bounds_extrapolation_enabled;
  v2 = localClientNum;
  if ( !DVARBOOL_killswitch_prevent_zero_bounds_extrapolation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_prevent_zero_bounds_extrapolation_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(rbx1);
  if ( !rbx1->current.enabled )
    return 1;
  if ( (unsigned int)v2 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v6) = cg_t::ms_allocatedCount;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v2] )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v6) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v6) )
      __debugbreak();
  }
  p_halfSize = &cg_t::ms_cgArray[v2]->playerBox.halfSize;
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  return !VecNCompareCustomEpsilon(p_halfSize->v, v1, 0.001, 3);
}

