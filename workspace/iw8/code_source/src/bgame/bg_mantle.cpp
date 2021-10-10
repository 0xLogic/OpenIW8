/*
==============
Mantle_GetMantleTime
==============
*/

int __fastcall Mantle_GetMantleTime(const int flags, const float height, const float distance3D, float vel2D)
{
  return ?Mantle_GetMantleTime@@YAHHMMM@Z(flags, height, distance3D, vel2D);
}

/*
==============
Mantle_SlowInputTurnRate
==============
*/

double __fastcall Mantle_SlowInputTurnRate(const playerState_s *ps, const float inputDeltaYaw)
{
  double result; 

  *(float *)&result = ?Mantle_SlowInputTurnRate@@YAMPEBUplayerState_s@@M@Z(ps, inputDeltaYaw);
  return result;
}

/*
==============
Mantle_FindMantleEdge
==============
*/

bool __fastcall Mantle_FindMantleEdge(pmove_t *pm, Physics_WorldId worldId, const BgHandler *pmoveHandler, const vec3_t *searchOrigin, MantleResults *mresults, const vec3_t *wishDir)
{
  return ?Mantle_FindMantleEdge@@YA_NPEAVpmove_t@@W4Physics_WorldId@@PEBVBgHandler@@AEBTvec3_t@@PEAUMantleResults@@3@Z(pm, worldId, pmoveHandler, searchOrigin, mresults, wishDir);
}

/*
==============
Mantle_GetWeaponMantleGestureDirectionType
==============
*/

WeaponMantleGestureDirectionType __fastcall Mantle_GetWeaponMantleGestureDirectionType(const playerState_s *ps)
{
  return ?Mantle_GetWeaponMantleGestureDirectionType@@YA?AW4WeaponMantleGestureDirectionType@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
Mantle_CancelMantle
==============
*/

void __fastcall Mantle_CancelMantle(const BgHandler *const handler, BgWeaponMap *weaponMap, playerState_s *ps, const int gameTime)
{
  ?Mantle_CancelMantle@@YAXQEBVBgHandler@@PEAVBgWeaponMap@@PEAUplayerState_s@@H@Z(handler, weaponMap, ps, gameTime);
}

/*
==============
Mantle_Update
==============
*/

void __fastcall Mantle_Update(pmove_t *pm, pml_t *pml, const bool lastSprinting, const SprintState *lastSprintState)
{
  ?Mantle_Update@@YAXPEAVpmove_t@@PEAUpml_t@@_NAEBUSprintState@@@Z(pm, pml, lastSprinting, lastSprintState);
}

/*
==============
Mantle_CheckLadderEdge
==============
*/

int __fastcall Mantle_CheckLadderEdge(const playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, float height)
{
  return ?Mantle_CheckLadderEdge@@YAHPEBUplayerState_s@@W4Physics_WorldId@@PEBVBgHandler@@HPEAUMantleResults@@M@Z(ps, worldId, pmoveHandler, traceMask, mresults, height);
}

/*
==============
BG_Mantle_GetMantleType
==============
*/

gestureAnimType_t __fastcall BG_Mantle_GetMantleType(const playerState_s *ps)
{
  return ?BG_Mantle_GetMantleType@@YA?AW4gestureAnimType_t@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
Mantle_DumpMotionPath
==============
*/

void __fastcall Mantle_DumpMotionPath(const MantleMotionPathParams *params, const float distance2D, const float height, const float speed2D)
{
  ?Mantle_DumpMotionPath@@YAXAEBUMantleMotionPathParams@@MMM@Z(params, distance2D, height, speed2D);
}

/*
==============
Mantle_Move
==============
*/

void __fastcall Mantle_Move(pmove_t *pm, pml_t *pml)
{
  ?Mantle_Move@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
Mantle_CanMantle
==============
*/

bool __fastcall Mantle_CanMantle(pmove_t *pm, pml_t *pml, const BgWeaponMap *weaponMap, playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, vec3_t *inOutWishDir, const int gameTime)
{
  return ?Mantle_CanMantle@@YA_NPEAVpmove_t@@PEAUpml_t@@PEBVBgWeaponMap@@PEAUplayerState_s@@W4Physics_WorldId@@PEBVBgHandler@@HPEAUMantleResults@@AEATvec3_t@@H@Z(pm, pml, weaponMap, ps, worldId, pmoveHandler, traceMask, mresults, inOutWishDir, gameTime);
}

/*
==============
Mantle_BuildMotionPathWithParams
==============
*/

void __fastcall Mantle_BuildMotionPathWithParams(const MantleMotionPathParams *params, BSplineRelaxedCBezier *outMantleSpline)
{
  ?Mantle_BuildMotionPathWithParams@@YAXAEBUMantleMotionPathParams@@PEAUBSplineRelaxedCBezier@@@Z(params, outMantleSpline);
}

/*
==============
Mantle_BuildMotionPathWithParams_GetSplineParams
==============
*/

void __fastcall Mantle_BuildMotionPathWithParams_GetSplineParams(const MantleMotionPathParams *params, float *outStartToLedgePointBias, float *outStartToLedgePointHeight)
{
  ?Mantle_BuildMotionPathWithParams_GetSplineParams@@YAXAEBUMantleMotionPathParams@@AEAM1@Z(params, outStartToLedgePointBias, outStartToLedgePointHeight);
}

/*
==============
Mantle_FindMantleSurface
==============
*/

bool __fastcall Mantle_FindMantleSurface(const playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, const vec3_t *searchOrigin, MantleResults *mresults, const vec3_t *wishDir)
{
  return ?Mantle_FindMantleSurface@@YA_NPEBUplayerState_s@@W4Physics_WorldId@@PEBVBgHandler@@AEBTvec3_t@@PEAUMantleResults@@3@Z(ps, worldId, pmoveHandler, searchOrigin, mresults, wishDir);
}

/*
==============
Mantle_BuildMotionPath
==============
*/

void __fastcall Mantle_BuildMotionPath(pmove_t *pm, BSplineRelaxedCBezier *outMantleSpline)
{
  ?Mantle_BuildMotionPath@@YAXPEAVpmove_t@@PEAUBSplineRelaxedCBezier@@@Z(pm, outMantleSpline);
}

/*
==============
Mantle_IsOver
==============
*/

bool __fastcall Mantle_IsOver(const playerState_s *ps)
{
  return ?Mantle_IsOver@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
Mantle_CloseToGround
==============
*/

bool __fastcall Mantle_CloseToGround(pmove_t *pm)
{
  return ?Mantle_CloseToGround@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
Mantle_GetWeaponMantleGestureHeightType
==============
*/

WeaponMantleGestureHeightType __fastcall Mantle_GetWeaponMantleGestureHeightType(const playerState_s *ps)
{
  return ?Mantle_GetWeaponMantleGestureHeightType@@YA?AW4WeaponMantleGestureHeightType@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
Mantle_GetLedgeHeight
==============
*/

double __fastcall Mantle_GetLedgeHeight(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?Mantle_GetLedgeHeight@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
Mantle_DrawLegsModel
==============
*/

bool __fastcall Mantle_DrawLegsModel(const playerState_s *ps)
{
  return ?Mantle_DrawLegsModel@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
Mantle_GetFinalMoveType
==============
*/

int __fastcall Mantle_GetFinalMoveType(int moveTypeIndex)
{
  return ?Mantle_GetFinalMoveType@@YAHH@Z(moveTypeIndex);
}

/*
==============
Mantle_WillReachLedgeWithoutMantle
==============
*/

int __fastcall Mantle_WillReachLedgeWithoutMantle(pmove_t *pm, const MantleResults *mresults)
{
  return ?Mantle_WillReachLedgeWithoutMantle@@YAHPEAVpmove_t@@PEBUMantleResults@@@Z(pm, mresults);
}

/*
==============
PM_Mantle_ValidateMantleOnMover
==============
*/

bool __fastcall PM_Mantle_ValidateMantleOnMover(const pmove_t *pm, const vec3_t *targetOrigin)
{
  return ?PM_Mantle_ValidateMantleOnMover@@YA_NPEBVpmove_t@@Tvec3_t@@@Z(pm, targetOrigin);
}

/*
==============
Mantle_CheckLedge
==============
*/

bool __fastcall Mantle_CheckLedge(const playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, float height)
{
  return ?Mantle_CheckLedge@@YA_NPEBUplayerState_s@@W4Physics_WorldId@@PEBVBgHandler@@HPEAUMantleResults@@M@Z(ps, worldId, pmoveHandler, traceMask, mresults, height);
}

/*
==============
Mantle_UnpackAnimData
==============
*/

void __fastcall Mantle_UnpackAnimData(const compressedAnimData_s *compressedData, characterAnimData_s *animDistances)
{
  ?Mantle_UnpackAnimData@@YAXPEBUcompressedAnimData_s@@PEAUcharacterAnimData_s@@@Z(compressedData, animDistances);
}

/*
==============
Mantle_ClearFlags
==============
*/

void __fastcall Mantle_ClearFlags(pmove_t *pm)
{
  ?Mantle_ClearFlags@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
Mantle_ForceMantle
==============
*/

void __fastcall Mantle_ForceMantle(playerState_s *ps)
{
  ?Mantle_ForceMantle@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
Mantle_UpdateViewYaw
==============
*/

void __fastcall Mantle_UpdateViewYaw(pmove_t *pm)
{
  ?Mantle_UpdateViewYaw@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
Mantle_IsWeaponDown
==============
*/

bool __fastcall Mantle_IsWeaponDown(const playerState_s *ps)
{
  return ?Mantle_IsWeaponDown@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Mantle_GetMantleType
==============
*/
__int64 BG_Mantle_GetMantleType(const playerState_s *ps)
{
  bool v2; 
  unsigned int v3; 
  double LedgeHeight; 
  const dvar_t *v5; 
  int v6; 
  int v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  int flags; 
  int v11; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1236, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1172, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  v2 = (ps->mantleState.flags & 0x800) != 0;
  v3 = (unsigned int)ps->mantleState.compressedAnimData.flags >> 1;
  LedgeHeight = Mantle_GetLedgeHeight(ps);
  v5 = DCONST_DVARFLT_mantle_gesture_extreme_min_height;
  if ( !DCONST_DVARFLT_mantle_gesture_extreme_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_extreme_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = 0;
  if ( *(float *)&LedgeHeight < v5->current.value )
  {
    v8 = DCONST_DVARFLT_mantle_gesture_high_min_height;
    if ( !DCONST_DVARFLT_mantle_gesture_high_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_high_min_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( *(float *)&LedgeHeight < v8->current.value )
    {
      v9 = DCONST_DVARFLT_mantle_gesture_middle_min_height;
      if ( !DCONST_DVARFLT_mantle_gesture_middle_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_middle_min_height") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      v7 = 0;
      LOBYTE(v7) = *(float *)&LedgeHeight >= v9->current.value;
    }
    else
    {
      v7 = 2;
    }
  }
  else
  {
    v7 = 3;
  }
  flags = ps->mantleState.compressedAnimData.flags;
  if ( (flags & 8) != 0 )
  {
    v11 = 8;
  }
  else if ( (flags & 0x10) != 0 )
  {
    v11 = 12;
  }
  else
  {
    v11 = ((unsigned __int8)flags >> 3) & 4;
  }
  if ( !v2 )
    return (unsigned int)GESTURE_TYPE_MAP[16 * (v3 & 1) + v7 + v11];
  if ( !v7 )
    return 35i64;
  LOBYTE(v6) = v7 != 1;
  return (unsigned int)(v6 + 36);
}

/*
==============
MantleDebugDrawData_DrawCapsule
==============
*/
void MantleDebugDrawData_DrawCapsule(const BgHandler *handler, const vec3_t *origin, const Bounds *capsuleBounds, const vec4_t *color)
{
  float v7; 
  BgHandler_vtbl *v8; 
  float v9; 
  int v10[4]; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 153, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v7 = origin->v[1];
  v8 = handler->__vftable;
  v10[0] = LODWORD(origin->v[0]);
  v9 = capsuleBounds->halfSize.v[2];
  *(float *)&v10[1] = v7;
  *(float *)&v10[2] = (float)(v9 * 2.0) + origin->v[2];
  ((void (__fastcall *)(const BgHandler *, const vec3_t *, int *))v8->DebugCylinder)(handler, origin, v10);
}

/*
==============
Mantle_Activate
==============
*/
char Mantle_Activate(pmove_t *pm, pml_t *pml, MantleResults *mresults, const bool lastSprinting, const SprintState *lastSprintState, const vec3_t *wishdir)
{
  playerState_s *ps; 
  const dvar_t *v11; 
  _BOOL8 v12; 
  const dvar_t *v13; 
  bool v14; 
  bool v15; 
  __m256i v16; 
  char v17; 
  const Bounds *bounds; 
  int contentMask; 
  const dvar_t *v21; 
  bool outClearMantleHint; 
  SprintState v23; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3451, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3451, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3452, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v11 = DCONST_DVARBOOL_mantle_requires_stick;
  if ( !DCONST_DVARBOOL_mantle_requires_stick && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_requires_stick") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled )
  {
    v14 = Mantle_InDistanceRegardlessOfSpeed(ps, mresults) == 0;
LABEL_22:
    if ( v14 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( !Mantle_PlayerPushingIntoSurface(pm->ps, pm->m_bgHandler, wishdir, mresults) )
    goto LABEL_20;
  if ( ps->groundEntityNum == 2047 )
  {
    v13 = DCONST_DVARMPBOOL_mantle_draw_hint_while_airborne;
    if ( !DCONST_DVARMPBOOL_mantle_draw_hint_while_airborne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_draw_hint_while_airborne") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.enabled )
    {
LABEL_20:
      v14 = !Mantle_IsLadder(mresults);
      goto LABEL_22;
    }
  }
LABEL_23:
  LOBYTE(v12) = 1;
  pm->SetMantleHint(pm, v12);
LABEL_24:
  outClearMantleHint = 0;
  v15 = Mantle_WantsToActivate(pm, pml, mresults, wishdir, &outClearMantleHint);
  if ( outClearMantleHint )
    pm->SetMantleHint(pm, 0);
  if ( !v15 )
    return 0;
  Jump_ClearState(pm);
  *(_QWORD *)&ps->mantleState.compressedAnimData.flags = 0i64;
  *(_QWORD *)&ps->mantleState.compressedAnimData.distanceZ = 0i64;
  ps->mantleState.compressedAnimData.endScriptAnimTableIndex = 0;
  v16 = *(__m256i *)&lastSprintState->sprintButtonUpRequired;
  v23.sprintStartMaxLength = lastSprintState->sprintStartMaxLength;
  *(__m256i *)&v23.sprintButtonUpRequired = v16;
  Mantle_UpdateSprintState(pm, pml, mresults, lastSprinting, &v23);
  if ( !mresults->endPosCalculated )
  {
    Mantle_SetOverFlagBasedOnSprintState(pm, pml, mresults);
    mresults->overPosFound = Mantle_CalcEndPos(pm, mresults);
  }
  if ( (mresults->edgeFlags[0] & 0xA) == 8 )
  {
    v17 = 1;
    if ( !mresults->overPosFound )
    {
      pm->SetMantleHint(pm, 0);
      return 0;
    }
    mresults->flags |= 1u;
  }
  else
  {
    v17 = 0;
  }
  bounds = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) )
  {
    contentMask = pm->tracemask;
    Mantle_SetTraceFlags(pm->m_trace);
    BgTrace::LegacyTrace(pm->m_trace, pm, &results, &mresults->endPos, &mresults->endPos, bounds, ps->clientNum, contentMask);
    Mantle_RestoreTraceFlags(pm->m_trace);
    if ( BG_Glass_CanBreakGlass(&results) )
    {
      contentMask &= ~0x10u;
      Mantle_SetTraceFlags(pm->m_trace);
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &mresults->endPos, &mresults->endPos, bounds, ps->clientNum, contentMask);
      Mantle_RestoreTraceFlags(pm->m_trace);
    }
    if ( results.startsolid )
      goto LABEL_43;
    mresults->flags |= 4u;
    if ( (mresults->flags & 1) != 0 )
    {
      Mantle_SetTraceFlags(pm->m_trace);
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &mresults->ledgePos, &mresults->ledgePos, bounds, ps->clientNum, contentMask);
      Mantle_RestoreTraceFlags(pm->m_trace);
      if ( BG_Glass_CanBreakGlass(&results) )
      {
        Mantle_SetTraceFlags(pm->m_trace);
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &mresults->ledgePos, &mresults->ledgePos, bounds, ps->clientNum, contentMask & 0xFFFFFFEF);
        Mantle_RestoreTraceFlags(pm->m_trace);
      }
      if ( results.startsolid )
LABEL_43:
        Mantle_ForceCrouch(pm, mresults);
    }
  }
  v21 = DCONST_DVARMPBOOL_mantle_force_over_always_use_crouch_view_height;
  if ( !DCONST_DVARMPBOOL_mantle_force_over_always_use_crouch_view_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_force_over_always_use_crouch_view_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled && v17 )
    Mantle_ForceCrouch(pm, mresults);
  Mantle_Start(pm, mresults);
  if ( (ps->mantleState.flags & 0x20) != 0 )
  {
    ps->mantleState.compressedAnimData.flags |= 1u;
    PM_EndSprint(ps, pm->cmd.serverTime, pm->cmd.buttons);
  }
  return 1;
}

/*
==============
Mantle_BuildMotionPath
==============
*/
void Mantle_BuildMotionPath(pmove_t *pm, BSplineRelaxedCBezier *outMantleSpline)
{
  playerState_s *ps; 
  float v6; 
  int flags; 
  MantleMotionPathParams params; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 952, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 952, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = ps->mantleState.startPosition.v[1];
  *(_QWORD *)&params.endPosOffset.y = 0i64;
  *((_DWORD *)&params.endPosOffset + 3) = 0;
  *(_DWORD *)(&params.drawDebug + 1) = 0;
  *(&params.drawDebug + 5) = 0;
  params.bgHandler = pm->m_bgHandler;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  params.isOver = ps->mantleState.flags & 1;
  flags = ps->mantleState.flags;
  *(_OWORD *)params.ledgeOffset.v = _XMM0;
  params.startPos.v[0] = ps->mantleState.startPosition.v[0];
  *(float *)&_XMM0 = ps->mantleState.startPosition.v[2];
  params.isLadder = (flags & 0x800) != 0;
  params.startPos.v[1] = v6;
  params.startPos.v[2] = *(float *)&_XMM0;
  BG_GetMantleLedgePosOffset(ps, &params.ledgeOffset);
  BG_GetMantleEndPosOffset(ps, &params.endPosOffset);
  params.drawDebug = !pm->isExtrapolation;
  Mantle_BuildMotionPathWithParams(&params, outMantleSpline);
}

/*
==============
Mantle_BuildMotionPathWithParams
==============
*/
void Mantle_BuildMotionPathWithParams(const MantleMotionPathParams *params, BSplineRelaxedCBezier *outMantleSpline)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  bool v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  const dvar_t *v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  unsigned int v29; 
  const dvar_t *v30; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  float v34; 
  const dvar_t *v35; 
  vec3_t *p_points; 
  __int64 v37; 
  const dvar_t *v38; 
  float outStartToLedgePointBias; 
  float outStartToLedgePointHeight; 
  vec3_t points; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 

  v59 = v2;
  v58 = v3;
  v57 = v4;
  v56 = v5;
  v55 = v6;
  v54 = v7;
  if ( !outMantleSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 845, ASSERT_TYPE_ASSERT, "(outMantleSpline)", (const char *)&queryFormat, "outMantleSpline") )
    __debugbreak();
  v10 = params->startPos.v[1];
  v11 = params->startPos.v[2];
  v12 = params->startPos.v[0];
  v13 = v10 + params->ledgeOffset.v[1];
  v14 = v11 + params->ledgeOffset.v[2];
  v15 = v10 + params->endPosOffset.v[1];
  v16 = v11 + params->endPosOffset.v[2];
  v17 = params->startPos.v[0] + params->ledgeOffset.v[0];
  v18 = params->startPos.v[0] + params->endPosOffset.v[0];
  points.v[1] = v10;
  points.v[2] = v11;
  outStartToLedgePointBias = FLOAT_0_5;
  outStartToLedgePointHeight = FLOAT_5_0;
  points.v[0] = v12;
  Mantle_BuildMotionPathWithParams_GetSplineParams(params, &outStartToLedgePointBias, &outStartToLedgePointHeight);
  v19 = !params->isLadder;
  v20 = (float)((float)(v17 - params->startPos.v[0]) * outStartToLedgePointBias) + params->startPos.v[0];
  v43 = (float)((float)(v13 - params->startPos.v[1]) * outStartToLedgePointBias) + params->startPos.v[1];
  v42 = v20;
  v44 = v14 + outStartToLedgePointHeight;
  if ( v19 )
  {
    if ( !params->isOver )
    {
      v45 = v17;
      v46 = v13;
      v47 = v14;
      v29 = 3;
      goto LABEL_27;
    }
    v30 = DCONST_DVARFLT_mantle_spline_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_spline_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v31 = v14 + v30->current.value;
    v32 = DCONST_DVARFLT_mantle_spline_ledge_to_end_point_bias;
    v45 = v17;
    v46 = v13;
    v47 = v31;
    if ( !DCONST_DVARFLT_mantle_spline_ledge_to_end_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ledge_to_end_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    v33 = (float)(v18 - v17) * v32->current.value;
    v34 = (float)(v15 - v13) * v32->current.value;
    v26 = DCONST_DVARFLT_mantle_spline_ledge_to_end_point_height;
    v27 = v33 + v17;
    v28 = v34 + v13;
    if ( !DCONST_DVARFLT_mantle_spline_ledge_to_end_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ledge_to_end_point_height") )
      __debugbreak();
  }
  else
  {
    v21 = DCONST_DVARFLT_mantle_spline_ladder_point_height;
    if ( !DCONST_DVARFLT_mantle_spline_ladder_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ladder_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = v14 + v21->current.value;
    v23 = DCONST_DVARFLT_mantle_spline_ladder_to_end_point_bias;
    v45 = v17;
    v46 = v13;
    v47 = v22;
    if ( !DCONST_DVARFLT_mantle_spline_ladder_to_end_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ladder_to_end_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v24 = (float)(v18 - v17) * v23->current.value;
    v25 = (float)(v15 - v13) * v23->current.value;
    v26 = DCONST_DVARFLT_mantle_spline_ladder_to_end_point_height;
    v27 = v24 + v17;
    v28 = v25 + v13;
    if ( !DCONST_DVARFLT_mantle_spline_ladder_to_end_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ladder_to_end_point_height") )
      __debugbreak();
  }
  Dvar_CheckFrontendServerThread(v26);
  v50 = v14 + v26->current.value;
  v48 = v27;
  v49 = v28;
  v51 = v18;
  v52 = v15;
  v53 = v16;
  v29 = 5;
LABEL_27:
  BG_BSpline_RelaxedCBezier_Build(&points, v29, 0, 0, outMantleSpline);
  v35 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( (v35->current.enabled & 4) != 0 && params->drawDebug )
  {
    p_points = &points;
    v37 = v29;
    do
    {
      v38 = DVARINT_mantle_debugLineTime;
      if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      Mantle_DebugStar(params->bgHandler, p_points++, &colorCyan, v38->current.integer);
      --v37;
    }
    while ( v37 );
  }
}

/*
==============
Mantle_BuildMotionPathWithParams_GetSplineParams
==============
*/
void Mantle_BuildMotionPathWithParams_GetSplineParams(const MantleMotionPathParams *params, float *outStartToLedgePointBias, float *outStartToLedgePointHeight)
{
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const char *v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  const dvar_t *v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 

  _XMM7 = LODWORD(FLOAT_32_0);
  _XMM0 = params->isLadder;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm4, xmm7, xmm6, xmm2
    vpcmpeqd xmm3, xmm0, xmm1
  }
  _XMM9 = 0i64;
  __asm { vblendvps xmm0, xmm9, xmm2, xmm3 }
  I_fclamp(params->ledgeOffset.v[2], *(float *)&_XMM0, *(float *)&_XMM4);
  if ( params->isLadder )
  {
    v11 = DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_0_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_8_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_16_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_24_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_32_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_32_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_0_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_8_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_16_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_24_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_32_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_32_spline_start_to_ledge_point_height") )
      __debugbreak();
    goto LABEL_112;
  }
  if ( params->isOver )
  {
    v23 = DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_24_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v24 = DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_32_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_40_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v26 = DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_48_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_56_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v28 = DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_72_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v29 = DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_24_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v30 = DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_32_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v31 = DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_40_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    v32 = DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_48_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    v33 = DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_56_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    v22 = DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_height )
    {
      v34 = "mantle_over_72_spline_start_to_ledge_point_height";
      goto LABEL_110;
    }
  }
  else
  {
    v35 = DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_24_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v36 = DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_32_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    v37 = DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_40_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v38 = DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_48_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v39 = DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_56_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_72_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v41 = DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_24_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_32_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    v43 = DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_40_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    v44 = DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_48_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    v45 = DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_56_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    v22 = DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_height;
    if ( !DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_height )
    {
      v34 = "mantle_on_72_spline_start_to_ledge_point_height";
LABEL_110:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v34) )
        __debugbreak();
    }
  }
LABEL_112:
  Dvar_CheckFrontendServerThread(v22);
  JUMPOUT(0x140FF5CD0i64);
}

/*
==============
Mantle_CalcEndPos
==============
*/
char Mantle_CalcEndPos(pmove_t *pm, MantleResults *mresults)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  playerState_s *ps; 
  char v9; 
  Bounds *v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  double v15; 
  double v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  bool v21; 
  float v24; 
  float v25; 
  float v26; 
  int contentMask; 
  double v28; 
  bool startsolid; 
  float v30; 
  float v31; 
  float v32; 
  float fraction; 
  int v34; 
  bool v35; 
  float v36; 
  double VerticalDelta; 
  float v38; 
  int v39; 
  double Float_Internal_DebugName; 
  double v41; 
  bool v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  bool v47; 
  float v48; 
  double v49; 
  double UpContribution; 
  double v51; 
  float v52; 
  double v53; 
  float v54; 
  double v55; 
  vec3_t vec; 
  vec3_t start; 
  vec3_t vecB; 
  Bounds bounds; 
  trace_t results; 
  Bounds v61; 

  v2 = DCONST_DVARFLT_mantle_over_height_offset;
  if ( !DCONST_DVARFLT_mantle_over_height_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_height_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v6 = DCONST_DVARFLT_mantle_end_height_tolerance;
  if ( !DCONST_DVARFLT_mantle_end_height_tolerance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_end_height_tolerance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.value;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 495, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 495, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 451, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v9 = mresults->edgeFlags[0] & 0xA;
  if ( v9 != 8 && (mresults->flags & 0x801) == 0 || v9 == 2 )
  {
    mresults->flags &= ~1u;
    mresults->endPos.v[0] = mresults->ledgePos.v[0];
    mresults->endPos.v[1] = mresults->ledgePos.v[1];
    mresults->endPos.v[2] = mresults->ledgePos.v[2];
    return 0;
  }
  mresults->debugDraw.overFlags |= 1u;
  v11 = (Bounds *)BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DUCKED);
  v12 = DCONST_DVARMPFLT_mantle_over_forward_trace_capsule_height;
  v61 = *v11;
  bounds = v61;
  if ( !DCONST_DVARMPFLT_mantle_over_forward_trace_capsule_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_forward_trace_capsule_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.value;
  if ( v13 > 0.0 )
  {
    bounds.halfSize.v[2] = v13 * 0.5;
    bounds.midPoint.v[2] = v13 * 0.5;
  }
  v14 = mresults->ledgePos.v[1];
  start.v[0] = mresults->ledgePos.v[0];
  start.v[2] = mresults->ledgePos.v[2];
  start.v[1] = v14;
  v15 = WorldUpReferenceFrame::Vec2Dot(&pm->refFrame, &mresults->dir, &ps->velocity);
  v16 = I_fclamp(*(float *)&v15, 0.0, 300.0);
  v17 = DCONST_DVARFLT_mantle_min_over_dist;
  v18 = *(float *)&v16 * 0.0033333334;
  if ( !DCONST_DVARFLT_mantle_min_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_min_over_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v19 = v17->current.value;
  v20 = DCONST_DVARFLT_mantle_max_over_dist;
  if ( !DCONST_DVARFLT_mantle_max_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_max_over_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v21 = (mresults->edgeFlags[0] & 4) == 0;
  _XMM0 = v20->current.unsignedInt;
  __asm { vmaxss  xmm1, xmm0, xmm6 }
  v24 = (float)(*(float *)&_XMM1 * v18) + (float)((float)(1.0 - v18) * v19);
  *(float *)&_XMM1 = v24 * mresults->dir.v[1];
  vec.v[0] = (float)(v24 * mresults->dir.v[0]) + start.v[0];
  v25 = v24 * mresults->dir.v[2];
  vec.v[1] = *(float *)&_XMM1 + start.v[1];
  vec.v[2] = v25 + start.v[2];
  if ( !v21 )
  {
    v26 = mresults->ladderOverPos.v[1];
    vec.v[0] = mresults->ladderOverPos.v[0];
    vec.v[2] = mresults->ladderOverPos.v[2];
    vec.v[1] = v26;
  }
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, value, &vec);
  contentMask = pm->tracemask;
  Mantle_SetTraceFlags(pm->m_trace);
  BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &bounds, ps->clientNum, contentMask);
  Mantle_RestoreTraceFlags(pm->m_trace);
  if ( BG_Glass_CanBreakGlass(&results) )
  {
    contentMask &= ~0x10u;
    Mantle_SetTraceFlags(pm->m_trace);
    BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &bounds, ps->clientNum, contentMask);
    Mantle_RestoreTraceFlags(pm->m_trace);
  }
  v28 = *(double *)&bounds.halfSize.y;
  startsolid = results.startsolid;
  *(_OWORD *)mresults->debugDraw.ledgeForwardCapsuleSweepBounds.midPoint.v = *(_OWORD *)bounds.midPoint.v;
  v30 = start.v[0];
  *(double *)&mresults->debugDraw.ledgeForwardCapsuleSweepBounds.halfSize.y = v28;
  *(float *)&v28 = start.v[1];
  mresults->debugDraw.ledgeForwardCapsuleSweepStart.v[0] = v30;
  v31 = start.v[2];
  mresults->debugDraw.ledgeForwardCapsuleSweepStart.v[1] = *(float *)&v28;
  *(float *)&v28 = vec.v[0];
  mresults->debugDraw.ledgeForwardCapsuleSweepStart.v[2] = v31;
  v32 = vec.v[1];
  mresults->debugDraw.ledgeForwardCapsuleSweepEnd.v[0] = *(float *)&v28;
  *(float *)&v28 = vec.v[2];
  mresults->debugDraw.ledgeForwardCapsuleSweepEnd.v[1] = v32;
  fraction = results.fraction;
  mresults->debugDraw.ledgeForwardCapsuleSweepEnd.v[2] = *(float *)&v28;
  mresults->debugDraw.ledgeForwardCapsuleSweepStartSolid = startsolid;
  mresults->debugDraw.ledgeForwardCapsuleSweepFraction = fraction;
  if ( (startsolid || fraction < 1.0) && !Mantle_EntityIsOwnedByPlayer(ps, pm->m_bgHandler, results.hitType, results.hitId) )
  {
    v34 = 4;
    if ( results.startsolid )
      v34 = 2;
    mresults->debugDraw.overFlags |= v34;
    goto LABEL_49;
  }
  if ( Mantle_EntityIsOwnedByPlayer(ps, pm->m_bgHandler, results.hitType, results.hitId) )
  {
    if ( !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 594, ASSERT_TYPE_ASSERT, "( ( pm->m_bgHandler->IsClient() ) )", "( pm->m_bgHandler ) = %p", pm->m_bgHandler) )
      __debugbreak();
    Mantle_SetTraceFlags(pm->m_trace);
    BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &bounds, ps->clientNum, contentMask & 0xFDFFBFFF);
    Mantle_RestoreTraceFlags(pm->m_trace);
    v35 = results.startsolid;
    mresults->debugDraw.ledgeForwardCapsuleSweepStartSolid = results.startsolid;
    v36 = results.fraction;
    mresults->debugDraw.ledgeForwardCapsuleSweepFraction = results.fraction;
    if ( v35 )
    {
      mresults->debugDraw.overFlags |= 2u;
      goto LABEL_49;
    }
    if ( v36 < 1.0 )
    {
      mresults->debugDraw.overFlags |= 4u;
LABEL_49:
      mresults->flags &= ~1u;
      mresults->endPos.v[0] = mresults->ledgePos.v[0];
      mresults->endPos.v[1] = mresults->ledgePos.v[1];
      mresults->endPos.v[2] = mresults->ledgePos.v[2];
      return 0;
    }
  }
  start = vec;
  VerticalDelta = WorldUpReferenceFrame::GetVerticalDelta(&pm->refFrame, &mresults->ledgePos, &mresults->startPos);
  v38 = (float)(*(float *)&VerticalDelta + value) + v7;
  v39 = LODWORD(VerticalDelta);
  if ( Mantle_IsLadder(mresults) )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_ladder_down_dist, "mantle_ladder_down_dist");
    v38 = *(float *)&Float_Internal_DebugName;
  }
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(LODWORD(v38) ^ _xmm), &vec);
  Mantle_SetTraceFlags(pm->m_trace);
  BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &v61, ps->clientNum, contentMask);
  Mantle_RestoreTraceFlags(pm->m_trace);
  v41 = *(double *)&v61.halfSize.y;
  v42 = results.startsolid;
  *(_OWORD *)mresults->debugDraw.ledgeDownwardCapsuleSweepBounds.midPoint.v = *(_OWORD *)v61.midPoint.v;
  v43 = start.v[0];
  *(double *)&mresults->debugDraw.ledgeDownwardCapsuleSweepBounds.halfSize.y = v41;
  *(float *)&v41 = start.v[1];
  mresults->debugDraw.ledgeDownwardCapsuleSweepStart.v[0] = v43;
  v44 = start.v[2];
  mresults->debugDraw.ledgeDownwardCapsuleSweepStart.v[1] = *(float *)&v41;
  *(float *)&v41 = vec.v[0];
  mresults->debugDraw.ledgeDownwardCapsuleSweepStart.v[2] = v44;
  v45 = vec.v[1];
  mresults->debugDraw.ledgeDownwardCapsuleSweepEnd.v[0] = *(float *)&v41;
  *(float *)&v41 = vec.v[2];
  mresults->debugDraw.ledgeDownwardCapsuleSweepEnd.v[1] = v45;
  v46 = results.fraction;
  mresults->debugDraw.ledgeDownwardCapsuleSweepEnd.v[2] = *(float *)&v41;
  mresults->debugDraw.ledgeDownwardCapsuleSweepStartSolid = v42;
  mresults->debugDraw.ledgeDownwardCapsuleSweepFraction = v46;
  if ( v42 )
  {
    if ( !Mantle_EntityIsOwnedByPlayer(ps, pm->m_bgHandler, results.hitType, results.hitId) )
    {
LABEL_62:
      mresults->flags &= ~1u;
      mresults->endPos.v[0] = mresults->ledgePos.v[0];
      mresults->endPos.v[1] = mresults->ledgePos.v[1];
      mresults->endPos.v[2] = mresults->ledgePos.v[2];
      mresults->debugDraw.overFlags |= 8u;
      return 0;
    }
    if ( results.startsolid )
      goto LABEL_57;
    v46 = results.fraction;
  }
  if ( v46 >= 1.0 )
  {
LABEL_74:
    mresults->flags |= 0x20u;
    goto LABEL_75;
  }
LABEL_57:
  if ( Mantle_EntityIsOwnedByPlayer(ps, pm->m_bgHandler, results.hitType, results.hitId) )
  {
    if ( !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 666, ASSERT_TYPE_ASSERT, "( ( pm->m_bgHandler->IsClient() ) )", "( pm->m_bgHandler ) = %p", pm->m_bgHandler) )
      __debugbreak();
    contentMask &= 0xFDFFBFFF;
    Mantle_SetTraceFlags(pm->m_trace);
    BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &v61, ps->clientNum, contentMask);
    Mantle_RestoreTraceFlags(pm->m_trace);
    v47 = results.startsolid;
    mresults->debugDraw.ledgeDownwardCapsuleSweepStartSolid = results.startsolid;
    v48 = results.fraction;
    mresults->debugDraw.ledgeDownwardCapsuleSweepFraction = results.fraction;
    if ( v47 )
      goto LABEL_62;
  }
  else
  {
    v48 = results.fraction;
  }
  if ( v48 >= 1.0 )
    goto LABEL_74;
  if ( (results.contents & 0x2004000) != 0 )
  {
    mresults->flags &= ~1u;
    mresults->endPos.v[0] = mresults->ledgePos.v[0];
    mresults->endPos.v[1] = mresults->ledgePos.v[1];
    mresults->endPos.v[2] = mresults->ledgePos.v[2];
    mresults->debugDraw.overFlags |= 0x10u;
    return 0;
  }
  vecB.v[0] = (float)((float)(vec.v[0] - start.v[0]) * v48) + start.v[0];
  vecB.v[1] = (float)((float)(vec.v[1] - start.v[1]) * v48) + start.v[1];
  vecB.v[2] = (float)((float)(vec.v[2] - start.v[2]) * v48) + start.v[2];
  v49 = WorldUpReferenceFrame::GetVerticalDelta(&pm->refFrame, &mresults->ledgePos, &vecB);
  if ( COERCE_FLOAT(LODWORD(v49) & _xmm) < value )
  {
    mresults->flags &= ~1u;
    mresults->endPos.v[0] = mresults->ledgePos.v[0];
    mresults->endPos.v[1] = mresults->ledgePos.v[1];
    mresults->endPos.v[2] = mresults->ledgePos.v[2];
    mresults->debugDraw.overFlags |= 0x20u;
    return 0;
  }
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &start);
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&UpContribution, &vec);
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(v39 ^ _xmm), &vec);
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(LODWORD(value) ^ _xmm), &vec);
  v51 = WorldUpReferenceFrame::GetVerticalDelta(&pm->refFrame, &vecB, &vec);
  if ( COERCE_FLOAT(LODWORD(v51) & _xmm) > v7 )
  {
    mresults->flags &= ~1u;
    mresults->endPos.v[0] = mresults->ledgePos.v[0];
    mresults->endPos.v[1] = mresults->ledgePos.v[1];
    mresults->endPos.v[2] = mresults->ledgePos.v[2];
    mresults->debugDraw.overFlags |= 0x40u;
    return 0;
  }
  vec = vecB;
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, 0.125, &vec);
  Mantle_SetTraceFlags(pm->m_trace);
  BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &v61, ps->clientNum, contentMask);
  Mantle_RestoreTraceFlags(pm->m_trace);
  if ( results.fraction != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 735, ASSERT_TYPE_ASSERT, "( ( trace.fraction == 1.0f ) )", "( trace.fraction ) = %g", results.fraction) )
    __debugbreak();
LABEL_75:
  v52 = vec.v[1];
  mresults->endPos.v[0] = vec.v[0];
  mresults->endPos.v[2] = vec.v[2];
  mresults->endPos.v[1] = v52;
  v53 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &start);
  v54 = *(float *)&v53;
  v55 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, (float)((float)(1.0 - results.fraction) * v54) + (float)(*(float *)&v55 * results.fraction), &mresults->endPos);
  mresults->debugDraw.overFlags |= 0x80u;
  return 1;
}

/*
==============
Mantle_CalcFallingPosition
==============
*/
void Mantle_CalcFallingPosition(pmove_t *pm, MantleResults *mresults)
{
  playerState_s *ps; 
  const Bounds *v5; 
  int flags; 
  const dvar_t *v7; 
  double Float_Internal_DebugName; 
  int v9; 
  const BgHandler *m_bgHandler; 
  const dvar_t *v11; 
  BgHandler_vtbl *v12; 
  float v13; 
  double v14; 
  double v15; 
  double v16; 
  int Int_Internal_DebugName; 
  Bounds *bounds; 
  vec3_t outPos; 
  int v20[4]; 
  trace_t results; 
  BSplineRelaxedCBezier outMantleSpline; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 979, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 979, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 980, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v5 = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 437, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  flags = mresults->flags;
  if ( (mresults->edgeFlags[0] & 0xA) == 8 )
  {
    if ( (flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 987, ASSERT_TYPE_ASSERT, "(mresults->flags & (1<<0))", (const char *)&queryFormat, "mresults->flags & MANTLE_FLAG_OVER") )
      __debugbreak();
    mresults->flags &= ~0x20u;
    ps->mantleState.flags &= ~0x20u;
  }
  else if ( (flags & 0x20) != 0 )
  {
    if ( (flags & 0x801) != 0 )
    {
      v7 = DCONST_DVARFLT_mantle_falling_time;
      if ( !DCONST_DVARFLT_mantle_falling_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_falling_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.value > 0.0 )
      {
        ps->mantleState.flags |= 1u;
        BSplineRelaxedCBezier::BSplineRelaxedCBezier(&outMantleSpline);
        Mantle_BuildMotionPath(pm, &outMantleSpline);
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_falling_time, "mantle_falling_time");
        BG_BSpline_RelaxedCBezier_Evaluate(&outMantleSpline, *(float *)&Float_Internal_DebugName, &outPos);
        Mantle_SetTraceFlags(pm->m_trace);
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &outPos, &outPos, v5, ps->clientNum, pm->tracemask);
        Mantle_RestoreTraceFlags(pm->m_trace);
        if ( results.startsolid )
        {
          Com_Printf(19, "Falling position is blocked at (%f, %f, %f). Forcing mantle up.\n", outPos.v[0], outPos.v[1], outPos.v[2]);
          Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
          m_bgHandler = pm->m_bgHandler;
          if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 255, ASSERT_TYPE_ASSERT, "(capsuleBounds)", (const char *)&queryFormat, "capsuleBounds") )
            __debugbreak();
          v11 = DCONST_DVARINT_mantle_debug;
          if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v11);
          if ( (v11->current.enabled & 4) != 0 )
          {
            v12 = m_bgHandler->__vftable;
            v20[0] = SLODWORD(outPos.v[0]);
            v13 = v5->midPoint.v[2];
            v20[1] = SLODWORD(outPos.v[1]);
            *(float *)&v20[2] = (float)(v13 * 2.0) + outPos.v[2];
            ((void (__fastcall *)(const BgHandler *, vec3_t *, int *))v12->DebugCapsule)(m_bgHandler, &outPos, v20);
          }
          Com_Printf(19, "Start position (%f, %f, %f)\n", mresults->startPos.v[0], mresults->startPos.v[1], mresults->startPos.v[2]);
          v14 = MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distanceZ, 190.0, 8u);
          v15 = *(float *)&v14;
          v16 = MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distance2D, 190.0, 8u);
          Com_Printf(19, "2D Distance %.3f Height %.3f\n", *(float *)&v16, v15);
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
          Mantle_DebugStar(pm->m_bgHandler, &outPos, &colorRed, Int_Internal_DebugName);
          mresults->flags &= 0xFFFFFFDE;
          ps->mantleState.flags &= 0xFFFFFFDE;
          mresults->endPos.v[0] = mresults->ledgePos.v[0];
          mresults->endPos.v[1] = mresults->ledgePos.v[1];
          mresults->endPos.v[2] = mresults->ledgePos.v[2];
        }
        else
        {
          v9 = Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
          Mantle_DebugStar(pm->m_bgHandler, &outPos, &colorLtOrange, v9);
        }
      }
      else
      {
        mresults->flags &= ~0x20u;
        ps->mantleState.flags &= ~0x20u;
      }
    }
    else
    {
      LODWORD(bounds) = mresults->flags;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 995, ASSERT_TYPE_ASSERT, "( ( !(mresults->flags & (1<<5)) ) )", "( mresults->flags ) = %i", bounds) )
        __debugbreak();
    }
  }
}

/*
==============
Mantle_CalcWishDir
==============
*/
void Mantle_CalcWishDir(const pmove_t *pm, const pml_t *pml, vec3_t *outWishDir, float *outWishMag)
{
  float v4; 
  float v5; 
  __int128 v10; 
  float v14; 
  const dvar_t *v15; 
  float value; 
  int rightmove; 
  __int128 v18; 
  float v22; 
  int forwardmove; 
  float v24; 
  __int128 v25; 
  float v26; 
  __int128 v27; 
  int v31; 
  int v32; 
  vec3_t vec; 
  vec3_t v34; 

  v4 = pml->forward.v[1];
  vec.v[0] = pml->forward.v[0];
  v5 = pml->forward.v[2];
  vec.v[1] = v4;
  vec.v[2] = v5;
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
  v10 = LODWORD(vec.v[1]);
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
  _XMM3 = v10;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  *(float *)&v10 = 1.0 / *(float *)&_XMM0;
  vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v34.v[0] = pml->right.v[0];
  *(float *)&_XMM0 = pml->right.v[2];
  vec.v[1] = vec.v[1] * *(float *)&v10;
  v14 = pml->right.v[1];
  v34.v[2] = *(float *)&_XMM0;
  v34.v[1] = v14;
  if ( (pm->cmd.buttons & 0x8000000000000i64) != 0 || pm->cmd.forwardmove <= 0 )
  {
    value = FLOAT_1_0;
  }
  else
  {
    v15 = DCONST_DVARFLT_mantle_kbm_wishdirection_strafe_scale;
    if ( !DCONST_DVARFLT_mantle_kbm_wishdirection_strafe_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_kbm_wishdirection_strafe_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
  }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &v34);
  rightmove = pm->cmd.rightmove;
  v18 = LODWORD(v34.v[1]);
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(v34.v[0] * v34.v[0])) + (float)(v34.v[2] * v34.v[2]));
  _XMM3 = v18;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v22 = 1.0 / *(float *)&_XMM0;
  v34.v[0] = v34.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v34.v[2] = v34.v[2] * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v18 = (float)rightmove;
  forwardmove = pm->cmd.forwardmove;
  *(float *)&_XMM0 = (float)(*(float *)&v18 * value) * pml->right.v[0];
  v34.v[1] = v34.v[1] * v22;
  outWishDir->v[0] = (float)((float)forwardmove * pml->forward.v[0]) + *(float *)&_XMM0;
  outWishDir->v[1] = (float)((float)(*(float *)&v18 * value) * pml->right.v[1]) + (float)((float)forwardmove * pml->forward.v[1]);
  outWishDir->v[2] = (float)((float)(*(float *)&v18 * value) * pml->right.v[2]) + (float)((float)forwardmove * pml->forward.v[2]);
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, outWishDir);
  v24 = outWishDir->v[1];
  v25 = LODWORD(outWishDir->v[0]);
  v26 = outWishDir->v[2];
  v27 = v25;
  *(float *)&v27 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v24 * v24)) + (float)(v26 * v26));
  _XMM3 = v27;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  outWishDir->v[0] = *(float *)&v25 * (float)(1.0 / *(float *)&_XMM0);
  outWishDir->v[2] = v26 * (float)(1.0 / *(float *)&_XMM0);
  outWishDir->v[1] = v24 * (float)(1.0 / *(float *)&_XMM0);
  v31 = abs8(pm->cmd.rightmove);
  v32 = abs8(pm->cmd.forwardmove);
  if ( v32 > v31 )
    v31 = v32;
  *outWishMag = (float)v31;
}

/*
==============
Mantle_CanAutoTriggerMantle
==============
*/
bool Mantle_CanAutoTriggerMantle(const pmove_t *pm, const pml_t *pml, const bool closeToGround)
{
  playerState_s *ps; 
  bool v7; 
  bool v8; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  bool v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2748, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2748, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2749, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v7 = PM_IsInAir(pm);
  v8 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u);
  p_pm_flags = &ps->pm_flags;
  v10 = v8;
  return !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u) && v7 && v10 && !closeToGround;
}

/*
==============
Mantle_CanMantle
==============
*/
_BOOL8 Mantle_CanMantle(pmove_t *pm, pml_t *pml, const BgWeaponMap *weaponMap, playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, vec3_t *inOutWishDir, const int gameTime)
{
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const char *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const char *v21; 
  bool v22; 
  __int16 groundRefEnt; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v26; 
  int WeaponHand; 
  __int64 v28; 
  int *p_weaponState; 
  __int64 v30; 
  double Float_Internal_DebugName; 
  bool IsForceOver; 
  bool IsForceOn; 
  bool v34; 
  char v35; 
  double v36; 
  float v37; 
  bool v38; 
  char v39; 
  MantleResults *v40; 
  char *v41; 
  __int64 v42; 
  __int64 v43; 
  char v44; 
  MantleResults *v45; 
  char *v46; 
  float v47; 
  char v48[400]; 
  bool mresultsa; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3077, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3078, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3079, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "Mantle_CanMantle");
  v15 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( (v15->current.enabled & 3) != 0 )
    Com_Printf(17, "%s\n", "====== Mantle Debug ======");
  v16 = DCONST_DVARMPBOOL_mantle_enable;
  if ( !DCONST_DVARMPBOOL_mantle_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( !v16->current.enabled )
  {
    v17 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( !v17->current.enabled )
      goto LABEL_40;
    v18 = "Mantle Failed: Not enabled";
    goto LABEL_36;
  }
  if ( ps->pm_type >= 7 )
  {
    v19 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( !v19->current.enabled )
      goto LABEL_40;
    v18 = "Mantle Failed: Player is dead";
    goto LABEL_36;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
  {
    v20 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( !v20->current.enabled )
      goto LABEL_40;
    v18 = "Mantle Failed: Player already mantling";
LABEL_36:
    Com_Printf(17, "%s\n", v18);
LABEL_40:
    v22 = 0;
    goto LABEL_41;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x24u) )
  {
    v21 = "Mantle Failed: Player not allowed to mantle";
LABEL_39:
    Mantle_DebugPrint(1u, v21);
    goto LABEL_40;
  }
  if ( BG_HasLadderHand(ps) )
  {
    v21 = "Mantle Failed: Player using ladder";
    goto LABEL_39;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xCu) )
  {
    v21 = "Mantle Failed: Can't mantle while falling into a hard landing";
    goto LABEL_39;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    v21 = "Mantle Failed: Can't mantle while sliding";
    goto LABEL_39;
  }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) || BG_Offhand_IsPlayingGrenadeGesture(weaponMap, ps) && !BG_Offhand_GrenadeGestureInterruptable(weaponMap, ps, gameTime) || BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_WEAPON) && !BG_Offhand_ScriptWeaponInterruptable(weaponMap, ps, gameTime) )
  {
    v21 = "Mantle Failed: Player using offhand";
    goto LABEL_39;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2559, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    v21 = "Mantle Failed: Player is swimming";
    goto LABEL_39;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
  {
    groundRefEnt = ps->groundRefEnt;
    if ( groundRefEnt == 2047 || !groundRefEnt )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      if ( !BG_IsPlayerZeroGWalking(ps) )
      {
        v21 = "Mantle Failed: Player is zero gravity floating";
        goto LABEL_39;
      }
    }
  }
  if ( BG_Skydive_IsSkydiving(ps) )
  {
    v21 = "Mantle Failed: Player is skydiving";
    goto LABEL_39;
  }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( SLOBYTE(ps->mantleState.flags) < 0 )
  {
    v21 = "Mantle Failed: We're blocking due to a cancel until we hit the ground";
    goto LABEL_39;
  }
  v26 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
  if ( BG_IsForceUseWeapon(CurrentWeaponForPlayer, v26) )
    goto LABEL_40;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
      __debugbreak();
    v21 = "Mantle Failed: Player in execution";
    goto LABEL_39;
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_prevent_mantle_while_linked_enabled, "killswitch_prevent_mantle_while_linked_enabled") && (ps->vehicleState.entity != 2047 || ps->pm_type == 1) )
  {
    v21 = "Mantle Failed: Player is linked";
    goto LABEL_39;
  }
  WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
  if ( WeaponHand >= 0 )
  {
    v28 = 0i64;
    p_weaponState = &ps->weapState[0].weaponState;
    while ( 1 )
    {
      v30 = v28;
      if ( (unsigned int)(*p_weaponState - 22) <= 2 )
        break;
      ++v28;
      p_weaponState += 20;
      if ( v30 >= WeaponHand )
        goto LABEL_90;
    }
    v21 = "Mantle Failed: Player is using the melee attack";
    goto LABEL_39;
  }
LABEL_90:
  if ( cm.mapEnts && (cm.mapEnts->edgeListUsedQueryTypes & 2) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "Mantle Find Ledge - With Edges");
    if ( !Mantle_FindMantleEdge(pm, worldId, pmoveHandler, &ps->origin, mresults, inOutWishDir) || !Mantle_ShouldCheckForLedges(weaponMap, ps, pmoveHandler, mresults, inOutWishDir) )
      goto LABEL_127;
    if ( Mantle_IsLadder(mresults) )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_spline_ladder_point_height, "mantle_spline_ladder_point_height");
      if ( Mantle_CheckLadderEdge(ps, worldId, pmoveHandler, traceMask, mresults, *(float *)&Float_Internal_DebugName + (float)(mresults->edgePos.v[2] - ps->origin.v[2])) )
      {
        v22 = 1;
LABEL_128:
        Sys_ProfEndNamedEvent();
        goto LABEL_41;
      }
      goto LABEL_127;
    }
    Mantle_SetOverFlagBasedOnSprintState(pm, pml, mresults);
    IsForceOver = Mantle_IsForceOver(mresults);
    IsForceOn = Mantle_IsForceOn(mresults);
    v34 = (IsForceOver || (mresults->flags & 1) != 0) && !IsForceOn;
    v35 = 0;
    v36 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_edge_ledge_check_rise_amount, "mantle_edge_ledge_check_rise_amount");
    v37 = *(float *)&v36 + (float)(mresults->edgePos.v[2] - ps->origin.v[2]);
    v38 = Mantle_CheckLedge(ps, worldId, pmoveHandler, traceMask, mresults, v37);
    if ( v38 && v34 )
    {
      mresults->endPosCalculated = 1;
      v39 = Mantle_CalcEndPos(pm, mresults);
      mresults->overPosFound = v39;
      if ( !v39 )
      {
        if ( IsForceOver )
        {
          mresultsa = 0;
LABEL_111:
          v40 = mresults;
          v41 = v48;
          v42 = 2i64;
          v43 = 2i64;
          do
          {
            *(__m256i *)v41 = *(__m256i *)v40->dir.v;
            *((__m256i *)v41 + 1) = *(__m256i *)&v40->ledgePos.z;
            *((__m256i *)v41 + 2) = *(__m256i *)&v40->edgeLineSegment[0].y;
            *((_OWORD *)v41 + 6) = *(_OWORD *)v40->ladderOverPos.v;
            v41 += 128;
            *((_OWORD *)v41 - 1) = *(_OWORD *)&v40->distanceToMantleSurface;
            v40 = (MantleResults *)((char *)v40 + 128);
            --v43;
          }
          while ( v43 );
          *(__m256i *)v41 = *(__m256i *)v40->dir.v;
          *((__m256i *)v41 + 1) = *(__m256i *)&v40->ledgePos.z;
          *((__m256i *)v41 + 2) = *(__m256i *)&v40->edgeLineSegment[0].y;
          *((_OWORD *)v41 + 6) = *(_OWORD *)v40->ladderOverPos.v;
          *((_DWORD *)v41 + 28) = LODWORD(v40->distanceToMantleSurface);
          if ( !Mantle_FixUpMantleDirForEdge(ps, worldId, pmoveHandler, traceMask, mresults, inOutWishDir) )
            goto LABEL_120;
          *(_QWORD *)&mresults->debugDraw.ledgeFlags = 0i64;
          *(_QWORD *)mresults->debugDraw.forwardCapsuleSweepForLedgeBounds.midPoint.v = 0i64;
          *(_QWORD *)&mresults->debugDraw.forwardCapsuleSweepForLedgeBounds.midPoint.z = 0i64;
          *(_QWORD *)&mresults->debugDraw.forwardCapsuleSweepForLedgeBounds.halfSize.y = 0i64;
          *(_QWORD *)mresults->debugDraw.forwardCapsuleSweepForLedgeStart.v = 0i64;
          *(_QWORD *)&mresults->debugDraw.forwardCapsuleSweepForLedgeStart.z = 0i64;
          *(_QWORD *)&mresults->debugDraw.forwardCapsuleSweepForLedgeEnd.y = 0i64;
          mresults->debugDraw.forwardCapsuleSweepForLedgeFraction = 0.0;
          mresults->debugDraw.forwardCapsuleSweepForLedgeStartSolid = 0;
          *(_QWORD *)mresults->debugDraw.downwardCapsuleSweepForLedgeBounds.midPoint.v = 0i64;
          *(_QWORD *)&mresults->debugDraw.downwardCapsuleSweepForLedgeBounds.midPoint.z = 0i64;
          *(_QWORD *)&mresults->debugDraw.downwardCapsuleSweepForLedgeBounds.halfSize.y = 0i64;
          *(_QWORD *)mresults->debugDraw.downwardCapsuleSweepForLedgeStart.v = 0i64;
          *(_QWORD *)&mresults->debugDraw.downwardCapsuleSweepForLedgeStart.z = 0i64;
          *(_QWORD *)&mresults->debugDraw.downwardCapsuleSweepForLedgeEnd.y = 0i64;
          mresults->debugDraw.downwardCapsuleSweepForLedgeFraction = 0.0;
          mresults->debugDraw.downwardCapsuleSweepForLedgeStartSolid = 0;
          *(_QWORD *)mresults->debugDraw.ledgeForwardCapsuleSweepBounds.midPoint.v = 0i64;
          *(_QWORD *)&mresults->debugDraw.ledgeForwardCapsuleSweepBounds.midPoint.z = 0i64;
          *(_QWORD *)&mresults->debugDraw.ledgeForwardCapsuleSweepBounds.halfSize.y = 0i64;
          *(_QWORD *)mresults->debugDraw.ledgeForwardCapsuleSweepStart.v = 0i64;
          *(_QWORD *)&mresults->debugDraw.ledgeForwardCapsuleSweepStart.z = 0i64;
          *(_QWORD *)&mresults->debugDraw.ledgeForwardCapsuleSweepEnd.y = 0i64;
          mresults->debugDraw.ledgeForwardCapsuleSweepFraction = 0.0;
          mresults->debugDraw.ledgeForwardCapsuleSweepStartSolid = 0;
          *(_QWORD *)mresults->debugDraw.ledgeDownwardCapsuleSweepBounds.midPoint.v = 0i64;
          *(_QWORD *)&mresults->debugDraw.ledgeDownwardCapsuleSweepBounds.midPoint.z = 0i64;
          *(_QWORD *)&mresults->debugDraw.ledgeDownwardCapsuleSweepBounds.halfSize.y = 0i64;
          *(_QWORD *)mresults->debugDraw.ledgeDownwardCapsuleSweepStart.v = 0i64;
          *(_QWORD *)&mresults->debugDraw.ledgeDownwardCapsuleSweepStart.z = 0i64;
          *(_QWORD *)&mresults->debugDraw.ledgeDownwardCapsuleSweepEnd.y = 0i64;
          mresults->debugDraw.ledgeDownwardCapsuleSweepFraction = 0.0;
          mresults->debugDraw.ledgeDownwardCapsuleSweepStartSolid = 0;
          v38 = Mantle_CheckLedge(ps, worldId, pmoveHandler, traceMask, mresults, v37);
          if ( !v38 )
            goto LABEL_120;
          if ( v34 )
          {
            Mantle_SetOverFlagBasedOnSprintState(pm, pml, mresults);
            mresults->endPosCalculated = 1;
            v44 = Mantle_CalcEndPos(pm, mresults);
            mresults->overPosFound = v44;
            if ( IsForceOver && !v44 )
              goto LABEL_120;
          }
          if ( v35 && !mresults->overPosFound )
          {
LABEL_120:
            v45 = mresults;
            v46 = v48;
            do
            {
              *(__m256i *)v45->dir.v = *(__m256i *)v46;
              *(__m256i *)&v45->ledgePos.z = *((__m256i *)v46 + 1);
              *(__m256i *)&v45->edgeLineSegment[0].y = *((__m256i *)v46 + 2);
              *(_OWORD *)v45->ladderOverPos.v = *((_OWORD *)v46 + 6);
              v45 = (MantleResults *)((char *)v45 + 128);
              *(_OWORD *)&v45[-1].debugDraw.ledgeDownwardCapsuleSweepFraction = *((_OWORD *)v46 + 7);
              v46 += 128;
              --v42;
            }
            while ( v42 );
            *(__m256i *)v45->dir.v = *(__m256i *)v46;
            *(__m256i *)&v45->ledgePos.z = *((__m256i *)v46 + 1);
            *(__m256i *)&v45->edgeLineSegment[0].y = *((__m256i *)v46 + 2);
            *(_OWORD *)v45->ladderOverPos.v = *((_OWORD *)v46 + 6);
            v45->distanceToMantleSurface = *((float *)v46 + 28);
            v38 = mresultsa;
          }
LABEL_123:
          if ( v38 && (!IsForceOver || mresults->overPosFound) )
          {
            v22 = 1;
            goto LABEL_128;
          }
LABEL_127:
          v22 = 0;
          goto LABEL_128;
        }
        v35 = 1;
      }
    }
    mresultsa = v38;
    if ( v38 && !v35 )
      goto LABEL_123;
    goto LABEL_111;
  }
  Sys_ProfBeginNamedEvent(0xFF008008, "Mantle Find Ledge - Without Edges");
  v22 = 0;
  if ( Mantle_FindMantleSurface(ps, worldId, pmoveHandler, &ps->origin, mresults, inOutWishDir) && Mantle_ShouldCheckForLedges(weaponMap, ps, pmoveHandler, mresults, inOutWishDir) )
  {
    if ( (v47 = Mantle_GetCheckHeight(ps, pmoveHandler, mresults), Mantle_CheckLedge(ps, worldId, pmoveHandler, traceMask, mresults, v47)) || v47 > 40.0 && Mantle_CheckLedge(ps, worldId, pmoveHandler, traceMask, mresults, 40.0) || v47 > 18.0 && Mantle_CheckLedge(ps, worldId, pmoveHandler, traceMask, mresults, 18.0) )
      v22 = 1;
  }
  Sys_ProfEndNamedEvent();
LABEL_41:
  Sys_ProfEndNamedEvent();
  return v22;
}

/*
==============
Mantle_CancelMantle
==============
*/
void Mantle_CancelMantle(const BgHandler *const handler, BgWeaponMap *weaponMap, playerState_s *ps, const int gameTime)
{
  int flags; 
  PlayerAnimScriptMoveType FinalMoveType; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3361, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3362, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
  {
    ps->pm_flags.m_flags[0] &= ~0x20u;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, GameModeFlagValues::ms_mpValue, 0x18u);
    flags = ps->mantleState.flags;
    if ( (flags & 4) != 0 )
    {
      BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, gameTime, weaponMap, ps);
      flags = ps->mantleState.flags;
    }
    ps->mantleState.flags = flags | 8;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      FinalMoveType = Mantle_GetFinalMoveType(ps->mantleState.compressedAnimData.endScriptAnimTableIndex);
      BG_AnimScriptAnimation(handler, ps, AISTATE_COMBAT, FinalMoveType, 0, 0);
    }
  }
}

/*
==============
Mantle_CheckLadderEdge
==============
*/
__int64 Mantle_CheckLadderEdge(const playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, float height)
{
  const BgPlayerTraceInfo *v10; 
  float v11; 
  float v12; 
  EffectiveStance EffectiveStance; 
  double BoundsHeight; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  __int128 v18; 
  double UpContribution; 
  __m128 v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const char *v28; 
  float v29; 
  float v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  __int64 result; 
  BgTrace v37; 
  vec3_t vec; 
  vec3_t start; 
  vec3_t v40; 
  Bounds bounds; 
  vec3_t v42; 
  trace_t results; 
  WorldUpReferenceFrame v44; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1945, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pmoveHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1946, ASSERT_TYPE_ASSERT, "(pmoveHandler)", (const char *)&queryFormat, "pmoveHandler") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1947, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v44, ps, pmoveHandler);
  v10 = pmoveHandler->GetPlayerTraceInfo(pmoveHandler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&v37, v10);
  v11 = mresults->startPos.v[1];
  vec.v[0] = mresults->startPos.v[0];
  v12 = mresults->startPos.v[2];
  vec.v[1] = v11;
  vec.v[2] = v12;
  WorldUpReferenceFrame::AddUpContribution(&v44, height, &vec);
  EffectiveStance = PM_GetEffectiveStance(ps);
  BoundsHeight = BG_Suit_GetBoundsHeight(ps, EffectiveStance);
  if ( height > *(float *)&BoundsHeight )
  {
    v37.m_flags |= 0x80u;
    v15 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
      v37.m_flags |= 0x200u;
    BgTrace::LegacyTraceHandler(&v37, worldId, &results, &mresults->startPos, &vec, &bounds_origin, ps->clientNum, traceMask, ps);
    v37.m_flags &= ~0x80u;
    v16 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
      v37.m_flags &= ~0x200u;
    if ( results.startsolid || results.fraction < 1.0 )
      return 0i64;
  }
  *(double *)start.v = *(double *)vec.v;
  v18 = LODWORD(mresults->edgePos.v[0]);
  *(float *)&v18 = mresults->edgePos.v[0] - vec.v[0];
  _XMM4 = v18;
  __asm { vunpcklps xmm1, xmm4, xmm3 }
  v42.v[2] = mresults->edgePos.v[2] - vec.v[2];
  start.v[2] = vec.v[2];
  v40.v[2] = v42.v[2];
  *(double *)v42.v = *(double *)&_XMM1;
  *(double *)v40.v = *(double *)&_XMM1;
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&v44, &v42);
  WorldUpReferenceFrame::AddUpContribution(&v44, COERCE_FLOAT(LODWORD(UpContribution) ^ _xmm), &v40);
  v21.m128_u64[1] = 0i64;
  vec.v[0] = v40.v[0] + start.v[0];
  vec.v[2] = v40.v[2] + start.v[2];
  vec.v[1] = v40.v[1] + start.v[1];
  *(double *)v21.m128_u64 = BG_Suit_GetBoundsRadius(ps);
  v37.m_flags |= 0x80u;
  v22 = DVARBOOL_mantle_fixMantleIntoCollision;
  bounds.midPoint.v[0] = 0.0;
  bounds.midPoint.v[1] = 0.0;
  *(__m128 *)&bounds.midPoint.z = _mm_shuffle_ps(v21, v21, 0);
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
    v37.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&v37, worldId, &results, &start, &vec, &bounds, ps->clientNum, traceMask, ps);
  v37.m_flags &= ~0x80u;
  v23 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
    v37.m_flags &= ~0x200u;
  if ( BG_Glass_CanBreakGlass(&results) )
  {
    v37.m_flags |= 0x80u;
    traceMask &= ~0x10u;
    v24 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( v24->current.enabled )
      v37.m_flags |= 0x200u;
    BgTrace::LegacyTraceHandler(&v37, worldId, &results, &start, &vec, &bounds, ps->clientNum, traceMask, ps);
    v37.m_flags &= ~0x80u;
    v25 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.enabled )
      v37.m_flags &= ~0x200u;
  }
  if ( (results.startsolid || results.fraction < 1.0) && !Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId) )
  {
    v26 = DVARINT_mantle_debugLineTime;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    Mantle_DebugTraceLine(pmoveHandler, &start, &vec, results.fraction, &colorRed, v26->current.integer);
    v27 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( !v27->current.enabled )
      return 0i64;
    v28 = "Ladder Mantle Failed: Forward movement is blocked";
LABEL_79:
    Com_Printf(17, "%s\n", v28);
    return 0i64;
  }
  v29 = mresults->ladderOverPos.v[1];
  v30 = mresults->ladderOverPos.v[2];
  v31 = DCONST_DVARFLT_mantle_ladder_down_dist;
  start.v[0] = mresults->ladderOverPos.v[0];
  start.v[1] = v29;
  start.v[2] = v30;
  vec.v[0] = start.v[0];
  vec.v[1] = v29;
  vec.v[2] = v30;
  if ( !DCONST_DVARFLT_mantle_ladder_down_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_down_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  WorldUpReferenceFrame::AddUpContribution(&v44, COERCE_FLOAT(v31->current.integer ^ _xmm), &vec);
  v37.m_flags |= 0x80u;
  v32 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( v32->current.enabled )
    v37.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&v37, worldId, &results, &start, &vec, &bounds, ps->clientNum, traceMask, ps);
  v37.m_flags &= ~0x80u;
  v33 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( v33->current.enabled )
    v37.m_flags &= ~0x200u;
  if ( (results.startsolid || results.fraction < 1.0) && !Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId) )
  {
    v34 = DVARINT_mantle_debugLineTime;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    Mantle_DebugTraceLine(pmoveHandler, &start, &vec, results.fraction, &colorRed, v34->current.integer);
    v35 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( !v35->current.enabled )
      return 0i64;
    v28 = "Ladder Mantle Failed: Downward movement is blocked";
    goto LABEL_79;
  }
  mresults->ledgePos = mresults->edgePos;
  result = 1i64;
  mresults->endGroundEnt = 2046;
  return result;
}

/*
==============
Mantle_CheckLedge
==============
*/
bool Mantle_CheckLedge(const playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, float height)
{
  __m128 fraction_low; 
  const dvar_t *v11; 
  const char *v12; 
  const BgPlayerTraceInfo *v13; 
  EffectiveStance EffectiveStance; 
  double BoundsHeight; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  int ledgeFlags; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  float v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  double v30; 
  bool startsolid; 
  float v32; 
  float v33; 
  float v34; 
  float fraction; 
  double UpContribution; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  double v39; 
  bool v40; 
  float v41; 
  float v42; 
  float v43; 
  bool v44; 
  bool v45; 
  float v46; 
  double v47; 
  float v48; 
  double v49; 
  float v50; 
  double v51; 
  double v52; 
  float v53; 
  double v54; 
  BgTrace trace; 
  vec3_t end; 
  vec3_t v58; 
  Bounds bounds; 
  vec3_t vec; 
  vec3_t start; 
  trace_t results; 
  WorldUpReferenceFrame v63; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1726, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v63, ps, pmoveHandler);
  v11 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer )
  {
    v12 = j_va("Checking for ledge at %f units", height);
    Mantle_DebugPrint(3u, v12);
  }
  v13 = pmoveHandler->GetPlayerTraceInfo(pmoveHandler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&trace, v13);
  EffectiveStance = PM_GetEffectiveStance(ps);
  BoundsHeight = BG_Suit_GetBoundsHeight(ps, EffectiveStance);
  if ( height <= *(float *)&BoundsHeight )
    goto LABEL_23;
  v16 = mresults->startPos.v[0];
  v17 = mresults->startPos.v[2];
  start.v[1] = mresults->startPos.v[1];
  vec.v[1] = start.v[1];
  start.v[0] = v16;
  start.v[2] = v17;
  vec.v[0] = v16;
  vec.v[2] = v17;
  WorldUpReferenceFrame::AddUpContribution(&v63, height, &vec);
  trace.m_flags |= 0x80u;
  v18 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
    trace.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&trace, worldId, &results, &start, &vec, &bounds_origin, ps->clientNum, traceMask, ps);
  trace.m_flags &= ~0x80u;
  v19 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled )
    trace.m_flags &= ~0x200u;
  if ( results.startsolid || (fraction_low = (__m128)LODWORD(results.fraction), results.fraction < 1.0) )
  {
    LOBYTE(ledgeFlags) = 0;
  }
  else
  {
LABEL_23:
    *(double *)fraction_low.m128_u64 = BG_Suit_GetBoundsRadius(ps);
    v21 = mresults->startPos.v[1];
    *(__m128 *)&bounds.midPoint.z = _mm_shuffle_ps(fraction_low, fraction_low, 0);
    v58.v[0] = mresults->startPos.v[0];
    v58.v[2] = mresults->startPos.v[2];
    bounds.midPoint.v[0] = 0.0;
    bounds.midPoint.v[1] = 0.0;
    v58.v[1] = v21;
    WorldUpReferenceFrame::AddUpContribution(&v63, height, &v58);
    v22 = mresults->distanceToMantleSurface + 4.0;
    v23 = (float)(v22 * mresults->dir.v[0]) + v58.v[0];
    v24 = v22 * mresults->dir.v[1];
    trace.m_flags |= 0x80u;
    v25 = DVARBOOL_mantle_fixMantleIntoCollision;
    end.v[0] = v23;
    v26 = v22 * mresults->dir.v[2];
    end.v[1] = v24 + v58.v[1];
    end.v[2] = v26 + v58.v[2];
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.enabled )
      trace.m_flags |= 0x200u;
    BgTrace::LegacyTraceHandler(&trace, worldId, &results, &v58, &end, &bounds, ps->clientNum, traceMask, ps);
    trace.m_flags &= ~0x80u;
    v27 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled )
      trace.m_flags &= ~0x200u;
    if ( BG_Glass_CanBreakGlass(&results) )
    {
      trace.m_flags |= 0x80u;
      traceMask &= ~0x10u;
      v28 = DVARBOOL_mantle_fixMantleIntoCollision;
      if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.enabled )
        trace.m_flags |= 0x200u;
      BgTrace::LegacyTraceHandler(&trace, worldId, &results, &v58, &end, &bounds, ps->clientNum, traceMask, ps);
      trace.m_flags &= ~0x80u;
      v29 = DVARBOOL_mantle_fixMantleIntoCollision;
      if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      if ( v29->current.enabled )
        trace.m_flags &= ~0x200u;
    }
    v30 = *(double *)&bounds.halfSize.y;
    startsolid = results.startsolid;
    *(_OWORD *)mresults->debugDraw.forwardCapsuleSweepForLedgeBounds.midPoint.v = *(_OWORD *)bounds.midPoint.v;
    v32 = v58.v[0];
    *(double *)&mresults->debugDraw.forwardCapsuleSweepForLedgeBounds.halfSize.y = v30;
    *(float *)&v30 = v58.v[1];
    mresults->debugDraw.forwardCapsuleSweepForLedgeStart.v[0] = v32;
    v33 = v58.v[2];
    mresults->debugDraw.forwardCapsuleSweepForLedgeStart.v[1] = *(float *)&v30;
    *(float *)&v30 = end.v[0];
    mresults->debugDraw.forwardCapsuleSweepForLedgeStart.v[2] = v33;
    v34 = end.v[1];
    mresults->debugDraw.forwardCapsuleSweepForLedgeEnd.v[0] = *(float *)&v30;
    *(float *)&v30 = end.v[2];
    mresults->debugDraw.forwardCapsuleSweepForLedgeEnd.v[1] = v34;
    fraction = results.fraction;
    mresults->debugDraw.forwardCapsuleSweepForLedgeEnd.v[2] = *(float *)&v30;
    mresults->debugDraw.forwardCapsuleSweepForLedgeStartSolid = startsolid;
    mresults->debugDraw.forwardCapsuleSweepForLedgeFraction = fraction;
    if ( !startsolid && fraction >= 1.0 || Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId) )
    {
      v58 = end;
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&v63, &mresults->startPos);
      WorldUpReferenceFrame::SetUpContribution(&v63, *(float *)&UpContribution, &end);
      if ( mresults->closeToGround )
        WorldUpReferenceFrame::AddUpContribution(&v63, 18.0, &end);
      trace.m_flags |= 0x80u;
      v37 = DVARBOOL_mantle_fixMantleIntoCollision;
      if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      if ( v37->current.enabled )
        trace.m_flags |= 0x200u;
      BgTrace::LegacyTraceHandler(&trace, worldId, &results, &v58, &end, &bounds, ps->clientNum, traceMask, ps);
      trace.m_flags &= ~0x80u;
      v38 = DVARBOOL_mantle_fixMantleIntoCollision;
      if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      if ( v38->current.enabled )
        trace.m_flags &= ~0x200u;
      v39 = *(double *)&bounds.halfSize.y;
      v40 = results.startsolid;
      *(_OWORD *)mresults->debugDraw.downwardCapsuleSweepForLedgeBounds.midPoint.v = *(_OWORD *)bounds.midPoint.v;
      v41 = v58.v[0];
      *(double *)&mresults->debugDraw.downwardCapsuleSweepForLedgeBounds.halfSize.y = v39;
      *(float *)&v39 = v58.v[1];
      mresults->debugDraw.downwardCapsuleSweepForLedgeStart.v[0] = v41;
      mresults->debugDraw.downwardCapsuleSweepForLedgeStart.v[2] = v58.v[2];
      v42 = end.v[1];
      mresults->debugDraw.downwardCapsuleSweepForLedgeStart.v[1] = *(float *)&v39;
      *(float *)&v39 = end.v[0];
      mresults->debugDraw.downwardCapsuleSweepForLedgeEnd.v[1] = v42;
      v43 = results.fraction;
      v44 = results.fraction == 1.0;
      mresults->debugDraw.downwardCapsuleSweepForLedgeEnd.v[0] = *(float *)&v39;
      mresults->debugDraw.downwardCapsuleSweepForLedgeEnd.v[2] = end.v[2];
      mresults->debugDraw.downwardCapsuleSweepForLedgeFraction = v43;
      mresults->debugDraw.downwardCapsuleSweepForLedgeStartSolid = v40;
      if ( v44 )
      {
        mresults->debugDraw.ledgeFlags |= 8u;
        LOBYTE(ledgeFlags) = 0;
      }
      else if ( !v40 || (ledgeFlags = Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId)) != 0 )
      {
        if ( !Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId) )
          goto LABEL_76;
        if ( !pmoveHandler->IsClient((BgHandler *)pmoveHandler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1857, ASSERT_TYPE_ASSERT, "( ( pmoveHandler->IsClient() ) )", "( pmoveHandler ) = %p", pmoveHandler) )
          __debugbreak();
        traceMask &= 0xFDFFBFFF;
        Mantle_SetTraceFlags(&trace);
        BgTrace::LegacyTraceHandler(&trace, worldId, &results, &v58, &end, &bounds, ps->clientNum, traceMask, ps);
        Mantle_RestoreTraceFlags(&trace);
        v45 = results.startsolid;
        mresults->debugDraw.downwardCapsuleSweepForLedgeStartSolid = results.startsolid;
        v46 = results.fraction;
        mresults->debugDraw.downwardCapsuleSweepForLedgeFraction = results.fraction;
        if ( v45 || v46 == 1.0 )
        {
          ledgeFlags = 8;
          if ( v45 )
            ledgeFlags = 16;
          mresults->debugDraw.ledgeFlags |= ledgeFlags;
          LOBYTE(ledgeFlags) = 0;
        }
        else
        {
LABEL_76:
          if ( (results.contents & 0x2004000) != 0 )
          {
            mresults->debugDraw.ledgeFlags |= 0x20u;
            LOBYTE(ledgeFlags) = 0;
          }
          else
          {
            if ( v63.m_axisAdjusted )
            {
              v47 = WorldUpReferenceFrame::GetUpContribution(&v63, &results.normal);
              LOBYTE(ledgeFlags) = *(float *)&v47 > 0.69999999;
              results.walkable = *(float *)&v47 > 0.69999999;
            }
            else
            {
              LOBYTE(ledgeFlags) = results.walkable;
            }
            if ( (_BYTE)ledgeFlags )
            {
              v48 = end.v[1];
              mresults->ledgePos.v[0] = end.v[0];
              mresults->ledgePos.v[2] = end.v[2];
              mresults->ledgePos.v[1] = v48;
              v49 = WorldUpReferenceFrame::GetUpContribution(&v63, &end);
              v50 = *(float *)&v49;
              v51 = WorldUpReferenceFrame::GetUpContribution(&v63, &v58);
              WorldUpReferenceFrame::SetUpContribution(&v63, (float)((float)(1.0 - results.fraction) * *(float *)&v51) + (float)(v50 * results.fraction), &mresults->ledgePos);
              mresults->endGroundEnt = Trace_GetEntityHitId(&results);
              v52 = WorldUpReferenceFrame::GetUpContribution(&v63, &mresults->startPos);
              v53 = *(float *)&v52;
              v54 = WorldUpReferenceFrame::GetUpContribution(&v63, &mresults->ledgePos);
              if ( (float)(*(float *)&v54 - v53) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1919, ASSERT_TYPE_ASSERT, "( ( ((ledgeUpVal - startPosUpVal) >= 0.0f) ) )", "( (ledgeUpVal - startPosUpVal) ) = %g", (float)(*(float *)&v54 - v53)) )
                __debugbreak();
              bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DUCKED);
              Mantle_SetTraceFlags(&trace);
              BgTrace::LegacyTraceHandler(&trace, worldId, &results, &mresults->ledgePos, &mresults->ledgePos, &bounds, ps->clientNum, traceMask, ps);
              Mantle_RestoreTraceFlags(&trace);
              ledgeFlags = mresults->debugDraw.ledgeFlags;
              if ( results.startsolid )
              {
                mresults->debugDraw.ledgeFlags = ledgeFlags | 0x80;
                LOBYTE(ledgeFlags) = 0;
              }
              else
              {
                mresults->debugDraw.ledgeFlags = ledgeFlags | 1;
                LOBYTE(ledgeFlags) = 1;
              }
            }
            else
            {
              mresults->debugDraw.ledgeFlags |= 0x40u;
            }
          }
        }
      }
      else
      {
        mresults->debugDraw.ledgeFlags |= 0x10u;
      }
    }
    else
    {
      ledgeFlags = 4;
      if ( results.startsolid )
        ledgeFlags = 2;
      mresults->debugDraw.ledgeFlags |= ledgeFlags;
      LOBYTE(ledgeFlags) = 0;
    }
  }
  return ledgeFlags;
}

/*
==============
Mantle_CheckMinimumSpeed
==============
*/
__int64 Mantle_CheckMinimumSpeed(const playerState_s *ps, const BgHandler *pmoveHandler, const MantleResults *mresults, const vec3_t *wishdir)
{
  double v8; 
  const dvar_t *v9; 
  const dvar_t *v11; 
  float v12; 
  WorldUpReferenceFrame v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2658, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2659, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  if ( Mantle_PlayerPushingIntoSurface(ps, pmoveHandler, wishdir, mresults) || Mantle_InDistanceRegardlessOfSpeed(ps, mresults) && ps->groundEntityNum != 2047 )
    return 1i64;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v13, ps, pmoveHandler);
  v8 = WorldUpReferenceFrame::Vec2Dot(&v13, &mresults->dir, &ps->velocity);
  if ( *(float *)&v8 > 0.001 )
  {
    v11 = DCONST_DVARINT_mantle_max_time;
    v12 = (float)(mresults->distanceToMantleSurface + 8.0) / *(float *)&v8;
    if ( !DCONST_DVARINT_mantle_max_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_max_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v12 > (float)((float)v11->current.integer * 0.00050000002) )
    {
      Mantle_DebugPrint(1u, "Mantle Failed: Player is not fast enough to reach ledge from this distance");
      return 0i64;
    }
    return 1i64;
  }
  v9 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
    Com_Printf(17, "%s\n", "Mantle Failed: Player is not moving at mantle");
  return 0i64;
}

/*
==============
Mantle_ClearFlags
==============
*/
void Mantle_ClearFlags(pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4398, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4398, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->mantleState.flags &= ~8u;
  pm->SetMantleHint(pm, 0);
}

/*
==============
Mantle_CloseToGround
==============
*/
bool Mantle_CloseToGround(pmove_t *pm)
{
  playerState_s *ps; 
  float v3; 
  float v4; 
  vec3_t vec; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2723, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2723, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->groundEntityNum != 2047 )
    return 1;
  v3 = ps->origin.v[0];
  v4 = ps->origin.v[2];
  vec.v[1] = ps->origin.v[1];
  vec.v[0] = v3;
  vec.v[2] = v4;
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, -36.0, &vec);
  Mantle_SetTraceFlags(pm->m_trace);
  BgTrace::LegacyTrace(pm->m_trace, pm, &results, &ps->origin, &vec, &bounds_origin, ps->clientNum, pm->tracemask);
  Mantle_RestoreTraceFlags(pm->m_trace);
  return results.fraction != 1.0;
}

/*
==============
Mantle_DebugDrawTraces
==============
*/
void Mantle_DebugDrawTraces(pmove_t *pm, const MantleResults *results, const bool mantleActivated)
{
  playerState_s *ps; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const BgHandler *m_bgHandler; 
  const dvar_t *v10; 
  unsigned int unsignedInt; 
  __int64 v12; 
  bool v13; 
  char v14; 
  float v15; 
  float v16; 
  int v17; 
  float v18; 
  int ledgeFlags; 
  float forwardCapsuleSweepForLedgeFraction; 
  const char *v21; 
  char v22; 
  bool v23; 
  int v24; 
  Bounds *p_downwardCapsuleSweepForLedgeBounds; 
  vec3_t *p_downwardCapsuleSweepForLedgeStart; 
  vec3_t *p_downwardCapsuleSweepForLedgeEnd; 
  bool v28; 
  const char *v29; 
  float downwardCapsuleSweepForLedgeFraction; 
  float v31; 
  float v32; 
  int overFlags; 
  float ledgeForwardCapsuleSweepFraction; 
  char v35; 
  bool v36; 
  const char *v37; 
  int v38; 
  Bounds *p_ledgeDownwardCapsuleSweepBounds; 
  float ledgeDownwardCapsuleSweepFraction; 
  char v41; 
  vec3_t *p_ledgeDownwardCapsuleSweepStart; 
  bool v43; 
  vec3_t *p_ledgeDownwardCapsuleSweepEnd; 
  const char *v45; 
  float v46; 
  float v47; 
  tmat33_t<vec3_t> v48; 
  vec4_t v49; 
  vec4_t v50; 
  vec4_t v51; 
  tmat33_t<vec3_t> axis; 
  vec4_t v53; 
  vec3_t outOrigin; 
  int v55[4]; 
  int v56[4]; 
  int v57[4]; 
  int v58[4]; 
  int v59[4]; 
  vec4_t v60; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3644, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3644, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = DVARBOOL_mantle_debug_traces_once;
  if ( !DVARBOOL_mantle_debug_traces_once && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug_traces_once") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
  {
    if ( !mantleActivated )
      return;
    v8 = DCONST_DVARBOOL_mantle_debug_traces_activation;
    if ( !DCONST_DVARBOOL_mantle_debug_traces_activation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug_traces_activation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( !v8->current.enabled )
      return;
  }
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 444, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  if ( (results->edgeFlags[0] & 4) != 0 )
    return;
  m_bgHandler = pm->m_bgHandler;
  if ( !m_bgHandler->IsClient((BgHandler *)m_bgHandler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3657, ASSERT_TYPE_ASSERT, "(handler->IsClient())", (const char *)&queryFormat, "handler->IsClient()") )
    __debugbreak();
  v10 = DCONST_DVARINT_mantle_debug_traces_duration;
  if ( !DCONST_DVARINT_mantle_debug_traces_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug_traces_duration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  unsignedInt = v10->current.unsignedInt;
  BG_GetPlayerEyePosition(pm->weaponMap, ps, &outOrigin, m_bgHandler);
  AnglesToAxis(&ps->viewangles, &axis);
  v13 = !results->debugDraw.edgeFound;
  *(float *)v55 = (float)((float)(DEFAULT_TEXT_FORWARD_OFFSET * axis.m[0].v[0]) + outOrigin.v[0]) + (float)(DEFAULT_TEXT_LEFT_OFFSET * axis.m[1].v[0]);
  *(float *)&v55[2] = (float)((float)(DEFAULT_TEXT_FORWARD_OFFSET * axis.m[0].v[2]) + outOrigin.v[2]) + (float)(DEFAULT_TEXT_LEFT_OFFSET * axis.m[1].v[2]);
  *(float *)&v55[1] = (float)((float)(DEFAULT_TEXT_FORWARD_OFFSET * axis.m[0].v[1]) + outOrigin.v[1]) + (float)(DEFAULT_TEXT_LEFT_OFFSET * axis.m[1].v[1]);
  if ( v13 )
  {
    ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))m_bgHandler->DebugString)(m_bgHandler, v55, &colorRed);
    return;
  }
  v14 = 0;
  v15 = EDGE_NORMAL_LENGTH * results->edgeNormal.v[1];
  *(float *)v56 = (float)(EDGE_NORMAL_LENGTH * results->edgeNormal.v[0]) + results->edgePos.v[0];
  v16 = EDGE_NORMAL_LENGTH * results->edgeNormal.v[2];
  *(float *)&v56[1] = v15 + results->edgePos.v[1];
  *(float *)&v56[2] = v16 + results->edgePos.v[2];
  ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, _DWORD, unsigned int))m_bgHandler->DebugSphere)(m_bgHandler, &results->edgePos, v12, &colorGreen, 0, unsignedInt);
  m_bgHandler->DebugLine((BgHandler *)m_bgHandler, &results->edgePos, (const vec3_t *)v56, &colorGreen, 0, unsignedInt);
  *(float *)&v17 = (float)((float)(EDGE_TEXT_OFFSET_X * axis.m[1].v[1]) + results->edgePos.v[1]) + (float)(EDGE_TEXT_OFFSET_Z * axis.m[2].v[1]);
  v18 = (float)(EDGE_TEXT_OFFSET_X * axis.m[1].v[2]) + results->edgePos.v[2];
  *(float *)v57 = (float)((float)(EDGE_TEXT_OFFSET_X * axis.m[1].v[0]) + results->edgePos.v[0]) + (float)(EDGE_TEXT_OFFSET_Z * axis.m[2].v[0]);
  *(float *)&v57[2] = v18 + (float)(EDGE_TEXT_OFFSET_Z * axis.m[2].v[2]);
  v57[1] = v17;
  ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))m_bgHandler->DebugString)(m_bgHandler, v57, &colorGreen);
  ledgeFlags = results->debugDraw.ledgeFlags;
  forwardCapsuleSweepForLedgeFraction = results->debugDraw.forwardCapsuleSweepForLedgeFraction;
  v21 = "Ledge Forward Sweep: Successful";
  v22 = 0;
  v23 = 1;
  v53 = colorBlue;
  v51 = colorGreen;
  v50 = colorBlue;
  v49 = colorBlue;
  if ( (ledgeFlags & 2) != 0 )
  {
    v51 = colorRed;
    v50 = colorRed;
    v21 = "Ledge Forward Sweep: Start Pos Blocked!";
    v23 = 0;
  }
  else if ( (ledgeFlags & 4) != 0 )
  {
    v51 = colorRed;
    v49 = colorRed;
    v21 = "Ledge Forward Sweep: End Pos Blocked!";
    v23 = 1;
  }
  else
  {
    v22 = 1;
  }
  v48 = axis;
  Mantle_DebugDrawTraces_DrawCapsuleSweep(pm, &v48, v21, DEFAULT_TEXT_SCALE, &v51, &results->debugDraw.forwardCapsuleSweepForLedgeBounds, &results->debugDraw.forwardCapsuleSweepForLedgeStart, &v50, &results->debugDraw.forwardCapsuleSweepForLedgeEnd, &v49, v23, &v53, forwardCapsuleSweepForLedgeFraction, unsignedInt);
  if ( !v22 )
    return;
  v24 = results->debugDraw.ledgeFlags;
  p_downwardCapsuleSweepForLedgeBounds = &results->debugDraw.downwardCapsuleSweepForLedgeBounds;
  p_downwardCapsuleSweepForLedgeStart = &results->debugDraw.downwardCapsuleSweepForLedgeStart;
  p_downwardCapsuleSweepForLedgeEnd = &results->debugDraw.downwardCapsuleSweepForLedgeEnd;
  v28 = 1;
  v29 = "Ledge Downward Sweep: Successful";
  downwardCapsuleSweepForLedgeFraction = results->debugDraw.downwardCapsuleSweepForLedgeFraction;
  v53 = colorBlue;
  v50 = colorGreen;
  v51 = colorBlue;
  v49 = colorBlue;
  if ( (v24 & 0x10) != 0 )
  {
    v50 = colorRed;
    v51 = colorRed;
    v29 = "Ledge Downward Sweep: Start Pos Blocked!";
    v28 = 0;
    goto LABEL_50;
  }
  if ( (v24 & 0x20) != 0 )
  {
    v29 = "Ledge Downward Sweep: Blocked by a body!";
LABEL_42:
    v50 = colorRed;
    v49 = colorRed;
    goto LABEL_50;
  }
  if ( (v24 & 0x40) != 0 )
  {
    v29 = "Ledge Downward Sweep: Surface Not Walkable!";
    goto LABEL_42;
  }
  if ( (v24 & 0x80u) != 0 )
  {
    v29 = "Ledge Downward Sweep: Cannot Fit Crouched!";
    goto LABEL_42;
  }
  if ( (v24 & 8) != 0 )
  {
    v50 = colorRed;
    v29 = "Ledge Downward Sweep: No Ledge Found!";
  }
  else
  {
    if ( (v24 & 1) == 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3803, ASSERT_TYPE_ASSERT, "(debugDrawData.ledgeFlags & (1 << 0))", (const char *)&queryFormat, "debugDrawData.ledgeFlags & MANTLE_DEBUG_DRAW_FLAGS_LEDGE_FOUND") )
        __debugbreak();
      p_downwardCapsuleSweepForLedgeEnd = &results->debugDraw.downwardCapsuleSweepForLedgeEnd;
      v28 = 1;
      p_downwardCapsuleSweepForLedgeStart = &results->debugDraw.downwardCapsuleSweepForLedgeStart;
      p_downwardCapsuleSweepForLedgeBounds = &results->debugDraw.downwardCapsuleSweepForLedgeBounds;
    }
    v14 = 1;
  }
LABEL_50:
  v48 = axis;
  Mantle_DebugDrawTraces_DrawCapsuleSweep(pm, &v48, v29, DEFAULT_TEXT_SCALE, &v50, p_downwardCapsuleSweepForLedgeBounds, p_downwardCapsuleSweepForLedgeStart, &v51, p_downwardCapsuleSweepForLedgeEnd, &v49, v28, &v53, downwardCapsuleSweepForLedgeFraction, unsignedInt);
  if ( v14 )
  {
    m_bgHandler->DebugStar((BgHandler *)m_bgHandler, &results->ledgePos, &colorGreen, unsignedInt);
    v31 = (float)(LEDGE_TEXT_OFFSET_X * axis.m[1].v[1]) + results->ledgePos.v[1];
    v32 = (float)(LEDGE_TEXT_OFFSET_X * axis.m[1].v[2]) + results->ledgePos.v[2];
    *(float *)v58 = (float)((float)(LEDGE_TEXT_OFFSET_X * axis.m[1].v[0]) + results->ledgePos.v[0]) + (float)(LEDGE_TEXT_OFFSET_Z * axis.m[2].v[0]);
    *(float *)&v58[1] = v31 + (float)(LEDGE_TEXT_OFFSET_Z * axis.m[2].v[1]);
    *(float *)&v58[2] = v32 + (float)(LEDGE_TEXT_OFFSET_Z * axis.m[2].v[2]);
    ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))m_bgHandler->DebugString)(m_bgHandler, v58, &colorGreen);
    overFlags = results->debugDraw.overFlags;
    if ( (overFlags & 1) != 0 )
    {
      ledgeForwardCapsuleSweepFraction = results->debugDraw.ledgeForwardCapsuleSweepFraction;
      v35 = 0;
      v36 = 1;
      v37 = "Over Forward Sweep: Successful";
      v53 = colorCyan;
      v51 = colorGreen;
      v50 = colorCyan;
      v49 = colorCyan;
      if ( (overFlags & 2) != 0 )
      {
        v51 = colorRed;
        v50 = colorRed;
        v37 = "Over Forward Sweep: Start Pos Blocked!";
        v36 = 0;
      }
      else if ( (overFlags & 4) != 0 )
      {
        v51 = colorRed;
        v49 = colorRed;
        v37 = "Over Forward Sweep: End Pos Blocked!";
      }
      else
      {
        v35 = 1;
      }
      v48 = axis;
      Mantle_DebugDrawTraces_DrawCapsuleSweep(pm, &v48, v37, DEFAULT_TEXT_SCALE, &v51, &results->debugDraw.ledgeForwardCapsuleSweepBounds, &results->debugDraw.ledgeForwardCapsuleSweepStart, &v50, &results->debugDraw.ledgeForwardCapsuleSweepEnd, &v49, v36, &v53, ledgeForwardCapsuleSweepFraction, unsignedInt);
      if ( v35 )
      {
        v38 = results->debugDraw.overFlags;
        p_ledgeDownwardCapsuleSweepBounds = &results->debugDraw.ledgeDownwardCapsuleSweepBounds;
        ledgeDownwardCapsuleSweepFraction = results->debugDraw.ledgeDownwardCapsuleSweepFraction;
        v41 = 0;
        p_ledgeDownwardCapsuleSweepStart = &results->debugDraw.ledgeDownwardCapsuleSweepStart;
        v43 = 1;
        p_ledgeDownwardCapsuleSweepEnd = &results->debugDraw.ledgeDownwardCapsuleSweepEnd;
        *(_QWORD *)v50.v = &results->debugDraw.ledgeDownwardCapsuleSweepEnd;
        v45 = "Over Downward Sweep: Successful";
        v60 = colorCyan;
        v49 = colorGreen;
        v53 = colorCyan;
        v51 = colorCyan;
        if ( (v38 & 8) != 0 )
        {
          v49 = colorRed;
          v53 = colorRed;
          v45 = "Over Downward Sweep: Start Pos Blocked!";
          v43 = 0;
        }
        else
        {
          if ( (v38 & 0x10) != 0 )
          {
            v45 = "Over Downward Sweep: Blocked by Body!";
          }
          else if ( (v38 & 0x20) != 0 )
          {
            v45 = "Over Downward Sweep: Not low enough!";
          }
          else
          {
            if ( (v38 & 0x40) == 0 )
            {
              if ( (v38 & 0x80u) == 0 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3918, ASSERT_TYPE_ASSERT, "(debugDrawData.overFlags & (1 << 7))", (const char *)&queryFormat, "debugDrawData.overFlags & MANTLE_DEBUG_DRAW_FLAGS_OVER_POS_FOUND") )
                  __debugbreak();
                p_ledgeDownwardCapsuleSweepEnd = *(vec3_t **)v50.v;
                v43 = 1;
                p_ledgeDownwardCapsuleSweepStart = &results->debugDraw.ledgeDownwardCapsuleSweepStart;
                p_ledgeDownwardCapsuleSweepBounds = &results->debugDraw.ledgeDownwardCapsuleSweepBounds;
              }
              v41 = 1;
              goto LABEL_72;
            }
            v45 = "Over Downward Sweep: Not within height tolerance!";
          }
          v49 = colorRed;
          v51 = colorRed;
        }
LABEL_72:
        v48 = axis;
        Mantle_DebugDrawTraces_DrawCapsuleSweep(pm, &v48, v45, DEFAULT_TEXT_SCALE, &v49, p_ledgeDownwardCapsuleSweepBounds, p_ledgeDownwardCapsuleSweepStart, &v53, p_ledgeDownwardCapsuleSweepEnd, &v51, v43, &v60, ledgeDownwardCapsuleSweepFraction, unsignedInt);
        if ( v41 )
        {
          m_bgHandler->DebugStar((BgHandler *)m_bgHandler, &results->endPos, &colorGreen, unsignedInt);
          v46 = (float)(OVER_TEXT_OFFSET_X * axis.m[1].v[1]) + results->endPos.v[1];
          v47 = (float)(OVER_TEXT_OFFSET_X * axis.m[1].v[2]) + results->endPos.v[2];
          *(float *)v59 = (float)((float)(OVER_TEXT_OFFSET_X * axis.m[1].v[0]) + results->endPos.v[0]) + (float)(OVER_TEXT_OFFSET_Z * axis.m[2].v[0]);
          *(float *)&v59[1] = v46 + (float)(OVER_TEXT_OFFSET_Z * axis.m[2].v[1]);
          *(float *)&v59[2] = v47 + (float)(OVER_TEXT_OFFSET_Z * axis.m[2].v[2]);
          ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))m_bgHandler->DebugString)(m_bgHandler, v59, &colorGreen);
        }
      }
    }
  }
}

/*
==============
Mantle_DebugDrawTraces_DrawCapsuleSweep
==============
*/
void Mantle_DebugDrawTraces_DrawCapsuleSweep(pmove_t *pm, const tmat33_t<vec3_t> *cameraAxis, const char *debugText, const float debugTextScale, const vec4_t *debugTextColor, const Bounds *bounds, const vec3_t *start, const vec4_t *startColor, const vec3_t *end, const vec4_t *endColor, const bool drawEndCapsule, const vec4_t *lineColor, const float fraction, const int renderDuration)
{
  const BgHandler *m_bgHandler; 
  BgHandler v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  char *fmt; 
  vec3_t v25; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3608, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3608, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  m_bgHandler = pm->m_bgHandler;
  if ( debugText && *debugText )
  {
    v18.__vftable = m_bgHandler->__vftable;
    v19 = (float)(TEXT_OFFSET_X * cameraAxis->m[1].v[1]) + start->v[1];
    v25.v[0] = (float)((float)(TEXT_OFFSET_X * cameraAxis->m[1].v[0]) + start->v[0]) + (float)(TEXT_OFFSET_Z * cameraAxis->m[2].v[0]);
    v20 = v19 + (float)(TEXT_OFFSET_Z * cameraAxis->m[2].v[1]);
    v21 = (float)(TEXT_OFFSET_X * cameraAxis->m[1].v[2]) + start->v[2];
    v25.v[1] = v20;
    v25.v[2] = v21 + (float)(TEXT_OFFSET_Z * cameraAxis->m[2].v[2]);
    HIDWORD(fmt) = HIDWORD(debugText);
    ((void (__fastcall *)(const BgHandler *, vec3_t *, const vec4_t *))v18.DebugString)(m_bgHandler, &v25, debugTextColor);
  }
  MantleDebugDrawData_DrawCapsule(m_bgHandler, start, bounds, startColor);
  if ( drawEndCapsule )
  {
    v22 = end->v[1] - start->v[1];
    v25.v[0] = (float)((float)(end->v[0] - start->v[0]) * fraction) + start->v[0];
    v23 = (float)(end->v[2] - start->v[2]) * fraction;
    v25.v[1] = (float)(v22 * fraction) + start->v[1];
    v25.v[2] = v23 + start->v[2];
    MantleDebugDrawData_DrawCapsule(m_bgHandler, &v25, bounds, endColor);
  }
  LODWORD(fmt) = 0;
  m_bgHandler->DebugLine((BgHandler *)m_bgHandler, start, end, lineColor, (int)fmt, renderDuration);
}

/*
==============
Mantle_DebugLine
==============
*/
void Mantle_DebugLine(const BgHandler *pmoveHandler, const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, const int time)
{
  const dvar_t *v5; 

  v5 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( (v5->current.enabled & 4) != 0 )
    pmoveHandler->DebugLine((BgHandler *)pmoveHandler, startPos, endPos, color, 0, time);
}

/*
==============
Mantle_DebugPrint
==============
*/
void Mantle_DebugPrint(unsigned int flags, const char *msg)
{
  const dvar_t *v4; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 198, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  v4 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( (flags & v4->current.integer) != 0 )
    Com_Printf(17, "%s\n", msg);
}

/*
==============
Mantle_DebugStar
==============
*/
void Mantle_DebugStar(const BgHandler *pmoveHandler, const vec3_t *pos, const vec4_t *color, const int time)
{
  const dvar_t *v4; 

  v4 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( (v4->current.enabled & 4) != 0 )
    pmoveHandler->DebugStar((BgHandler *)pmoveHandler, pos, color, time);
}

/*
==============
Mantle_DebugTraceLine
==============
*/
void Mantle_DebugTraceLine(const BgHandler *pmoveHandler, const vec3_t *startPos, const vec3_t *endPos, const float fraction, const vec4_t *color, const int time)
{
  const dvar_t *v6; 
  BgHandler_vtbl *v10; 
  float v11; 
  float v12; 
  int v13[4]; 

  v6 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( (v6->current.enabled & 4) != 0 )
  {
    v10 = pmoveHandler->__vftable;
    v11 = (float)(endPos->v[1] - startPos->v[1]) * fraction;
    v12 = endPos->v[2] - startPos->v[2];
    *(float *)v13 = (float)((float)(endPos->v[0] - startPos->v[0]) * fraction) + startPos->v[0];
    *(float *)&v13[1] = v11 + startPos->v[1];
    *(float *)&v13[2] = (float)(v12 * fraction) + startPos->v[2];
    v10->DebugLine((BgHandler *)pmoveHandler, startPos, (const vec3_t *)v13, color, 0, time);
  }
}

/*
==============
Mantle_DrawLegsModel
==============
*/
char Mantle_DrawLegsModel(const playerState_s *ps)
{
  const dvar_t *v3; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4407, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
    return 1;
  v3 = DCONST_DVARBOOL_mantle_drawLegs;
  if ( !DCONST_DVARBOOL_mantle_drawLegs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_drawLegs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled;
}

/*
==============
Mantle_DumpMotionPath
==============
*/
void Mantle_DumpMotionPath(const MantleMotionPathParams *params, const float distance2D, const float height, const float speed2D)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  float v9; 
  float totalLength; 
  int v11; 
  int v12; 
  const dvar_t *v13; 
  unsigned int value; 
  const dvar_t *v15; 
  int MantleTime; 
  const char *v17; 
  float v18; 
  float v19; 
  float v20; 
  int v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned int v25; 
  float v26; 
  fileHandle_t *v27; 
  fileHandle_t v28; 
  float v29; 
  vec3_t outPos; 
  BSplineRelaxedCBezier outMantleSpline; 
  char dest[256]; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 

  v35 = v4;
  v34 = v5;
  v33 = v6;
  v9 = distance2D;
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&outMantleSpline);
  Mantle_BuildMotionPathWithParams(params, &outMantleSpline);
  totalLength = outMantleSpline.totalLength;
  v11 = 0;
  v12 = 0;
  v29 = outMantleSpline.totalLength;
  if ( params->isLadder )
  {
    v13 = DVARFLT_mantle_export_height;
    v12 = 2048;
    if ( !DVARFLT_mantle_export_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    value = (int)v13->current.value;
    v15 = DVARFLT_mantle_export_ledge_dist;
    if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    Com_sprintf<256>((char (*)[256])dest, "mantle_motion_ladder_%d_%d.txt", (unsigned int)(int)v15->current.value, value);
  }
  else if ( params->isOver )
  {
    v12 = 1;
    Com_sprintf<256>((char (*)[256])dest, "mantle_motion_over.txt");
  }
  else
  {
    Com_sprintf<256>((char (*)[256])dest, "mantle_motion_on.txt");
  }
  MantleTime = Mantle_GetMantleTime(v12, height, totalLength, speed2D);
  v18 = params->startPos.v[0];
  v19 = params->startPos.v[1];
  v20 = (float)MantleTime * 0.001;
  v21 = (int)(float)(v20 * 29.999998);
  v22 = (float)(params->startPos.v[0] + params->ledgeOffset.v[0]) - params->startPos.v[0];
  v23 = fsqrt((float)((float)((float)(v19 + params->ledgeOffset.v[1]) - v19) * (float)((float)(v19 + params->ledgeOffset.v[1]) - v19)) + (float)(v22 * v22));
  v24 = FLOAT_1_0;
  if ( params->isOver )
  {
    v25 = 0;
    if ( v21 >= 0 )
    {
      while ( 1 )
      {
        v26 = _mm_cvtepi32_ps((__m128i)v25).m128_f32[0];
        BG_BSpline_RelaxedCBezier_Evaluate(&outMantleSpline, (float)(1.0 / (float)v21) * v26, &outPos);
        outPos.v[2] = 0.0;
        if ( fsqrt((float)((float)(outPos.v[1] - v19) * (float)(outPos.v[1] - v19)) + (float)((float)(outPos.v[0] - v18) * (float)(outPos.v[0] - v18))) >= v23 )
          break;
        if ( (int)++v25 > v21 )
          goto LABEL_18;
      }
      v24 = v26 * 0.033333335;
LABEL_18:
      v9 = distance2D;
      totalLength = v29;
    }
  }
  v27 = FS_FOpenFileAppend((fileHandle_t *)dest, v17);
  v28.handle.handle = (__int64)v27;
  if ( v27 != (fileHandle_t *)-1i64 )
  {
    FS_Printf((fileHandle_t)v27, "X: %.4f Y: %.4f 3D Distance: %.4f Total Time: %.4f (seconds) Ledge Time: %.4f (seconds)\n", v9, height, totalLength, v20, (float)(v24 * v20));
    FS_Printf(v28, "Frame\tDistance\tHeight\n");
    if ( v21 >= 0 )
    {
      do
      {
        BG_BSpline_RelaxedCBezier_Evaluate(&outMantleSpline, (float)v11 * (float)(1.0 / (float)v21), &outPos);
        FS_Printf(v28, "%d\t%.4f\t%.4f\n", (unsigned int)v11++, fsqrt((float)((float)(outPos.v[1] - params->startPos.v[1]) * (float)(outPos.v[1] - params->startPos.v[1])) + (float)((float)(outPos.v[0] - params->startPos.v[0]) * (float)(outPos.v[0] - params->startPos.v[0]))), (float)(outPos.v[2] - params->startPos.v[2]));
      }
      while ( v11 <= v21 );
    }
    FS_FCloseFile(v28);
  }
}

/*
==============
Mantle_DumpMotionPath
==============
*/
void Mantle_DumpMotionPath(pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 
  double v4; 
  float v5; 
  double v6; 
  float v8; 
  float v9; 
  unsigned int v11; 
  float v12; 
  float v13; 
  MantleMotionPathParams params; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1546, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1546, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( (v3->current.enabled & 8) != 0 && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
    if ( ps == (playerState_s *)-948i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 293, ASSERT_TYPE_ASSERT, "(compressedData)", (const char *)&queryFormat, "compressedData") )
      __debugbreak();
    v4 = MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distance2D, 190.0, 8u);
    v5 = *(float *)&v4;
    v6 = MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distanceZ, 190.0, 8u);
    _XMM1 = LODWORD(FLOAT_180_0);
    v8 = *(float *)&v6;
    MSG_UnpackSignedFloat(ps->mantleState.compressedAnimData.angle, 180.0, 9u);
    v9 = ps->mantleState.startPosition.v[0];
    *(_QWORD *)&params.endPosOffset.y = 0i64;
    *((_DWORD *)&params.endPosOffset + 3) = 0;
    *(_DWORD *)(&params.drawDebug + 1) = 0;
    *(&params.drawDebug + 5) = 0;
    params.bgHandler = pm->m_bgHandler;
    params.isOver = ps->mantleState.flags & 1;
    __asm { vpxor   xmm1, xmm1, xmm1 }
    v11 = (unsigned int)ps->mantleState.flags >> 11;
    params.startPos.v[0] = v9;
    v12 = ps->mantleState.startPosition.v[2];
    *(_OWORD *)params.ledgeOffset.v = _XMM1;
    *(float *)&_XMM1 = ps->mantleState.startPosition.v[1];
    params.isLadder = v11 & 1;
    params.startPos.v[1] = *(float *)&_XMM1;
    params.startPos.v[2] = v12;
    BG_GetMantleLedgePosOffset(ps, &params.ledgeOffset);
    BG_GetMantleEndPosOffset(ps, &params.endPosOffset);
    v13 = fsqrt((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1]));
    params.drawDebug = !pm->isExtrapolation;
    Mantle_DumpMotionPath(&params, v5, v8, v13);
  }
}

/*
==============
Mantle_EntityIsOwnedByPlayer
==============
*/
_BOOL8 Mantle_EntityIsOwnedByPlayer(const playerState_s *ps, const BgHandler *pmoveHandler, const int hitType, const int entityId)
{
  const entityState_t *EntityState; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 350, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( hitType != 1 || !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) )
    return 0i64;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entityId >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
    return 0i64;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return entityId >= (int)ComCharacterLimits::ms_gameData.m_clientCount && (EntityState = BG_GetEntityState(pmoveHandler, entityId)) != NULL && EntityState->otherEntityNum == ps->clientNum;
}

/*
==============
Mantle_ExecuteAnimScript
==============
*/
void Mantle_ExecuteAnimScript(pmove_t *pm, int elapsedAnimTime, int mantleLength)
{
  playerState_s *ps; 
  __int64 v7; 
  _DWORD *v8; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  int v12; 
  playerState_s *v13; 
  float v14; 
  float v15; 
  float v16; 
  double Float_Internal_DebugName; 
  __int64 turn; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1630, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1630, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1632, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v7 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v8 = *(_DWORD **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v7) + 272i64);
  clientNum = ps->clientNum;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 160i64))(v8) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8[2]);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(turn) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", turn, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
    }
  }
  else
  {
    CharacterInfo = (characterInfo_t *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v8 + 224i64))(v8, (unsigned int)clientNum);
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1637, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v12 = 0;
  BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_MANTLE, 1, 0);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1585, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v13 = pm->ps;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1587, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (v13->mantleState.flags & 0x20) == 0 && elapsedAnimTime < mantleLength - 250 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v13->pm_flags, ACTIVE, 0x14u) && pm->cmd.forwardmove == 127 )
    {
      v13->mantleState.compressedAnimData.endScriptAnimTableIndex = 3;
    }
    else if ( pm->cmd.forwardmove <= 0 )
    {
      v13->mantleState.compressedAnimData.endScriptAnimTableIndex = 0;
      *(_QWORD *)v13->velocity.v = 0i64;
      v13->velocity.v[2] = 0.0;
    }
    else
    {
      v14 = v13->velocity.v[1];
      vec.v[0] = v13->velocity.v[0];
      v15 = v13->velocity.v[2];
      vec.v[1] = v14;
      vec.v[2] = v15;
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
      v16 = fsqrt((float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_runbkThreshhold, "player_runbkThreshhold");
      LOBYTE(v12) = *(float *)&Float_Internal_DebugName < v16;
      v13->mantleState.compressedAnimData.endScriptAnimTableIndex = v12 + 1;
    }
  }
}

/*
==============
Mantle_ExecuteFinishedAnimScript
==============
*/
void Mantle_ExecuteFinishedAnimScript(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  PlayerAnimScriptMoveType FinalMoveType; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4025, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4025, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4027, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4028, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( (ps->mantleState.flags & 0x800) != 0 && (PM_CheckLadderMove(pm, pml), GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u)) )
  {
    PM_LadderMove(pm, pml);
  }
  else
  {
    if ( (ps->mantleState.flags & 0x20) != 0 )
    {
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_JUMP, 0, 1, &pml->holdrand);
      FinalMoveType = ANIM_MT_AIR;
    }
    else
    {
      FinalMoveType = Mantle_GetFinalMoveType(ps->mantleState.compressedAnimData.endScriptAnimTableIndex);
    }
    BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, FinalMoveType, 0, 0);
  }
}

/*
==============
Mantle_FindMantleEdge
==============
*/
__int64 Mantle_FindMantleEdge(pmove_t *pm, Physics_WorldId worldId, const BgHandler *pmoveHandler, const vec3_t *searchOrigin, MantleResults *mresults, const vec3_t *wishDir)
{
  __int128 v6; 
  playerState_s *ps; 
  __int128 v11; 
  float v12; 
  const dvar_t *v13; 
  float value; 
  float v15; 
  float v16; 
  EdgeQueryCache *outHintNodeIndex; 
  const dvar_t *v18; 
  __int128 v20; 
  EdgeFrustumQueryShape *p_mantleQueryShape; 
  EdgeFrustumQueryShape *p_shape; 
  __int64 v24; 
  __int64 v25; 
  const dvar_t *v26; 
  char v27; 
  unsigned __int64 v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const char *v31; 
  float v32; 
  double Float_Internal_DebugName; 
  double v34; 
  double v35; 
  EdgeFrustumQueryShape *p_mantleLadderQueryShape; 
  EdgeFrustumQueryShape *v37; 
  unsigned __int64 v38; 
  const BgHandler *v39; 
  const dvar_t *v40; 
  float v41; 
  unsigned __int8 v42; 
  float v43; 
  unsigned __int64 v44; 
  EdgeId *v45; 
  char v46; 
  float v47; 
  EdgeId v48; 
  const dvar_t *v49; 
  int integer; 
  const dvar_t *v51; 
  __int64 v52; 
  double v53; 
  unsigned int EntityIndex; 
  unsigned int EdgeIndex; 
  const dvar_t *v56; 
  __int128 v57; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  const dvar_t *v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  vec3_t *v72; 
  float v73; 
  float v74; 
  const dvar_t *v75; 
  const char *v76; 
  double UpContribution; 
  char v78; 
  float v79; 
  int flags; 
  int v81; 
  char v83; 
  unsigned __int64 outResultCount; 
  unsigned __int64 v85; 
  vec3_t *v86; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v87; 
  __int64 v88; 
  vec3_t handler; 
  vec3_t vec; 
  vec3_t point; 
  vec3_t outNormal; 
  vec3_t outSearchDir; 
  vec3_t v94; 
  vec3_t forward; 
  EdgeFrustumQueryDefinition v96; 
  vec3_t edgePos; 
  EdgeFrustumQueryDefinition definition; 
  tmat43_t<vec3_t> v1; 
  vec3_t outEdgePoint; 
  vec3_t start; 
  vec3_t axis; 
  vec3_t entityUp; 
  int v104[4]; 
  vec3_t end; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v106; 
  WorldUpReferenceFrame v107; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> viewBasis; 
  EdgeFrustumQueryShape shape; 
  EdgeFrustumQueryShape v111; 
  EdgeOctreeQueryFrustum v112; 
  EdgeOctreeQueryFrustum v113; 
  float resultFractionPool[16]; 
  EdgeId resultIdPool[17]; 

  v88 = -2i64;
  v86 = (vec3_t *)searchOrigin;
  *(_QWORD *)handler.v = pmoveHandler;
  Sys_ProfBeginNamedEvent(0xFF008008, "Mantle_FindMantleEdge");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2314, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2314, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Mantle_GetSearchDirection(ps, pmoveHandler, mresults, wishDir, &outSearchDir, &forward);
  *(double *)&v6 = BG_Suit_GetBoundsRadius(ps);
  v11 = v6;
  v12 = Mantle_GetCheckHeight(ps, pmoveHandler, mresults);
  v13 = DCONST_DVARFLT_mantle_check_radius;
  if ( !DCONST_DVARFLT_mantle_check_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  value = v13->current.value;
  v15 = v12 * 0.5;
  v16 = Mantle_GetCheckRange(ps, mresults);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v107, ps, pmoveHandler);
  GenerateAxisFromForwardVector(&outSearchDir, &v107.m_axis, &outAxis);
  axis = outAxis.m[1];
  v94 = outAxis.m[2];
  GenerateAxisFromForwardVector(&forward, &v107.m_axis, &viewBasis);
  entityUp = viewBasis.m[2];
  vec = *searchOrigin;
  WorldUpReferenceFrame::AddUpContribution(&v107, v15, &vec);
  outHintNodeIndex = pmoveHandler->GetEdgeQueryCache(pmoveHandler, (unsigned int)ps->clientNum);
  definition.nearHalfWidth = value;
  definition.nearHalfHeight = v15;
  definition.farHalfWidth = value;
  definition.farHalfHeight = v15;
  v18 = DCONST_DVARMPFLT_mantle_edge_search_near_plane_offset;
  if ( !DCONST_DVARMPFLT_mantle_edge_search_near_plane_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_edge_search_near_plane_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v20 = v11;
  *(float *)&v20 = *(float *)&v11 - v18->current.value;
  _XMM0 = v20;
  __asm { vmaxss  xmm1, xmm0, xmm1 }
  definition.nearDist = *(float *)&_XMM1;
  definition.farDist = (float)(v16 + *(float *)&v11) + 0.125;
  if ( definition.nearHalfWidth != outHintNodeIndex->mantleQueryDefinition.nearHalfWidth || definition.nearHalfHeight != outHintNodeIndex->mantleQueryDefinition.nearHalfHeight || definition.farHalfWidth != outHintNodeIndex->mantleQueryDefinition.farHalfWidth || definition.farHalfHeight != outHintNodeIndex->mantleQueryDefinition.farHalfHeight || *(float *)&_XMM1 != outHintNodeIndex->mantleQueryDefinition.nearDist || (float)((float)(v16 + *(float *)&v11) + 0.125) != outHintNodeIndex->mantleQueryDefinition.farDist )
  {
    outHintNodeIndex->mantleQueryDefinition = definition;
    EdgeFrustumQueryShape::Calculate(&outHintNodeIndex->mantleQueryShape, &definition);
  }
  v1.m[0] = outSearchDir;
  v1.m[2] = v94;
  Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
  v1.m[3] = vec;
  p_mantleQueryShape = &outHintNodeIndex->mantleQueryShape;
  p_shape = &shape;
  v24 = 2i64;
  v25 = 2i64;
  do
  {
    p_shape->m_planes[0] = p_mantleQueryShape->m_planes[0];
    p_shape->m_planes[1] = p_mantleQueryShape->m_planes[1];
    p_shape->m_planes[2] = p_mantleQueryShape->m_planes[2];
    p_shape->m_planes[3] = p_mantleQueryShape->m_planes[3];
    p_shape->m_planes[4] = p_mantleQueryShape->m_planes[4];
    p_shape->m_planes[5] = p_mantleQueryShape->m_planes[5];
    p_shape->m_corners[0] = p_mantleQueryShape->m_corners[0];
    p_shape = (EdgeFrustumQueryShape *)((char *)p_shape + 128);
    p_shape[-1].m_forward = p_mantleQueryShape->m_corners[1];
    p_mantleQueryShape = (EdgeFrustumQueryShape *)((char *)p_mantleQueryShape + 128);
    --v25;
  }
  while ( v25 );
  p_shape->m_planes[0] = p_mantleQueryShape->m_planes[0];
  p_shape->m_planes[1] = p_mantleQueryShape->m_planes[1];
  EdgeFrustumQueryShape::Transform(&shape, &v1);
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v112, &shape);
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v112, MANTLE_EDGE_DISTANCE_CENTER_BIAS);
  EdgeOctreeQueryFrustum::SetAxisBias(&v112, &axis, MANTLE_EDGE_PARALLEL_BIAS);
  v87.m_hint = 16777208;
  v87.m_flags = 1;
  v87.m_bucket = MANTLE;
  v87.m_queryShape = &v112;
  v87.m_hint = outHintNodeIndex->mantleEdgeHintNode;
  outResultCount = 0i64;
  EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v87, pmoveHandler, resultIdPool, resultFractionPool, NULL, 0x10ui64, &outResultCount, &outHintNodeIndex->mantleEdgeHintNode);
  if ( PM_IsSprinting(ps) || PM_IsInAir(pm) )
    goto LABEL_29;
  v26 = DCONST_DVARINT_mantle_ladder_sprint_cooldown_time;
  if ( !DCONST_DVARINT_mantle_ladder_sprint_cooldown_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_sprint_cooldown_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( ps->serverTime <= ps->sprintState.lastSprintEnd + v26->current.integer )
LABEL_29:
    v27 = 0;
  else
    v27 = 1;
  if ( (pm->cmd.buttons & 0x800000000000000i64) == 0 && !pm->isBot || !v27 )
  {
    v28 = outResultCount;
    v85 = outResultCount;
    goto LABEL_57;
  }
  v28 = outResultCount;
  v85 = outResultCount;
  if ( outResultCount >= 0x10 )
  {
LABEL_57:
    v39 = *(const BgHandler **)handler.v;
    goto LABEL_58;
  }
  v29 = DCONST_DVARMPBOOL_mantle_ladder_enable;
  if ( !DCONST_DVARMPBOOL_mantle_ladder_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( !v29->current.enabled )
  {
    v28 = outResultCount;
    goto LABEL_57;
  }
  if ( ps->groundEntityNum == 2047 )
  {
    v30 = DCONST_DVARFLT_mantle_check_range_air;
    if ( !DCONST_DVARFLT_mantle_check_range_air )
    {
      v31 = "mantle_check_range_air";
      goto LABEL_43;
    }
  }
  else
  {
    v30 = DCONST_DVARFLT_mantle_check_range;
    if ( !DCONST_DVARFLT_mantle_check_range )
    {
      v31 = "mantle_check_range";
LABEL_43:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v31) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v30);
  v32 = v30->current.value;
  v96.nearHalfWidth = value;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin, "mantle_ladder_edge_search_min_height_above_search_origin");
  v96.nearHalfHeight = COERCE_FLOAT(LODWORD(Float_Internal_DebugName) & _xmm) + v15;
  v96.farHalfWidth = value;
  v34 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin, "mantle_ladder_edge_search_min_height_above_search_origin");
  v96.farHalfHeight = COERCE_FLOAT(LODWORD(v34) & _xmm) + v15;
  v35 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_ladder_edge_search_near_plane_offset, "mantle_ladder_edge_search_near_plane_offset");
  v96.nearDist = *(float *)&v11 - *(float *)&v35;
  v96.farDist = (float)(v32 + *(float *)&v11) + 0.125;
  if ( v96.nearHalfWidth != outHintNodeIndex->mantleLadderQueryDefinition.nearHalfWidth || v96.nearHalfHeight != outHintNodeIndex->mantleLadderQueryDefinition.nearHalfHeight || v96.farHalfWidth != outHintNodeIndex->mantleLadderQueryDefinition.farHalfWidth || v96.farHalfHeight != outHintNodeIndex->mantleLadderQueryDefinition.farHalfHeight || (float)(*(float *)&v11 - *(float *)&v35) != outHintNodeIndex->mantleLadderQueryDefinition.nearDist || (float)((float)(v32 + *(float *)&v11) + 0.125) != outHintNodeIndex->mantleLadderQueryDefinition.farDist )
  {
    outHintNodeIndex->mantleLadderQueryDefinition = v96;
    EdgeFrustumQueryShape::Calculate(&outHintNodeIndex->mantleLadderQueryShape, &v96);
  }
  v1.m[0] = forward;
  v1.m[2] = v94;
  Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
  v1.m[3] = vec;
  p_mantleLadderQueryShape = &outHintNodeIndex->mantleLadderQueryShape;
  v37 = &v111;
  do
  {
    *(__m256i *)v37->m_planes[0].v.m128_f32 = *(__m256i *)p_mantleLadderQueryShape->m_planes[0].v.m128_f32;
    *(__m256i *)v37->m_planes[2].v.m128_f32 = *(__m256i *)p_mantleLadderQueryShape->m_planes[2].v.m128_f32;
    *(__m256i *)v37->m_planes[4].v.m128_f32 = *(__m256i *)p_mantleLadderQueryShape->m_planes[4].v.m128_f32;
    v37->m_corners[0] = p_mantleLadderQueryShape->m_corners[0];
    v37 = (EdgeFrustumQueryShape *)((char *)v37 + 128);
    v37[-1].m_forward = p_mantleLadderQueryShape->m_corners[1];
    p_mantleLadderQueryShape = (EdgeFrustumQueryShape *)((char *)p_mantleLadderQueryShape + 128);
    --v24;
  }
  while ( v24 );
  *(__m256i *)v37->m_planes[0].v.m128_f32 = *(__m256i *)p_mantleLadderQueryShape->m_planes[0].v.m128_f32;
  EdgeFrustumQueryShape::Transform(&v111, &v1);
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v113, &v111);
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v113, MANTLE_EDGE_DISTANCE_CENTER_BIAS);
  v106.m_hint = 16777208;
  v106.m_flags = 1;
  v106.m_bucket = LADDER_CENTERLINE;
  v106.m_queryShape = &v113;
  v87.m_hint = outHintNodeIndex->mantleLadderHintNode;
  v38 = outResultCount;
  v39 = *(const BgHandler **)handler.v;
  EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v106, *(const BgHandler **)handler.v, &resultIdPool[outResultCount], &resultFractionPool[outResultCount], NULL, 16 - outResultCount, &v85, &outHintNodeIndex->mantleLadderHintNode);
  v28 = v85 + v38;
  v85 = v28;
LABEL_58:
  v40 = DCONST_DVARFLT_mantle_check_angle;
  if ( !DCONST_DVARFLT_mantle_check_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  v41 = v40->current.value;
  v42 = 0;
  v83 = 0;
  v43 = FLOAT_3_4028235e38;
  v44 = 0i64;
  if ( v28 )
  {
    v45 = resultIdPool;
    while ( 1 )
    {
      v46 = Edge_GetFlags(*v45) & 4;
      v47 = resultFractionPool[v44];
      v48 = *v45;
      if ( v46 )
      {
        Edge_CalculateVectors(v39, v48, v47, &entityUp, &viewBasis, &outNormal, (vec3_t *)&v96, (vec3_t *)&v106, &handler);
        LODWORD(outNormal.v[0]) = LODWORD(handler.v[0]) ^ _xmm;
        LODWORD(outNormal.v[1]) = LODWORD(handler.v[1]) ^ _xmm;
        LODWORD(outNormal.v[2]) = LODWORD(handler.v[2]) ^ _xmm;
      }
      else
      {
        Edge_CalculateVectors(v39, v48, v47, &v94, &outAxis, &outNormal, (vec3_t *)&v96, (vec3_t *)&v106);
        LODWORD(handler.v[0]) = LODWORD(outNormal.v[0]) ^ _xmm;
        LODWORD(handler.v[1]) = LODWORD(outNormal.v[1]) ^ _xmm;
        LODWORD(handler.v[2]) = LODWORD(outNormal.v[2]) ^ _xmm;
      }
      Edge_CalculatePoint(v39, *v45, resultFractionPool[v44], &outEdgePoint);
      v49 = DVARINT_mantle_debugLineTime;
      if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      integer = v49->current.integer;
      v51 = DCONST_DVARINT_mantle_debug;
      if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v51);
      if ( (v51->current.enabled & 4) != 0 )
        ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, _DWORD, int))v39->DebugSphere)(v39, &outEdgePoint, v52, &colorBlue, 0, integer);
      v104[0] = SLODWORD(outEdgePoint.v[0]);
      v104[1] = SLODWORD(outEdgePoint.v[1]);
      *(float *)&v104[2] = outEdgePoint.v[2] + EDGE_DRAW_TEXT_OFFSET;
      v53 = (float)(outEdgePoint.v[2] - v86->v[2]);
      EntityIndex = EdgeId::GetEntityIndex(v45);
      EdgeIndex = EdgeId::GetEdgeIndex(v45);
      j_va("Edge Index: %d Entity Index: %d Height: %.3f", EdgeIndex, EntityIndex, v53);
      v56 = DCONST_DVARINT_mantle_debug;
      if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v56);
      if ( (v56->current.enabled & 4) != 0 )
        ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))v39->DebugString)(v39, v104, &colorWhite);
      WorldUpReferenceFrame::SetUpContribution(&v107, 0.0, &handler);
      v57 = LODWORD(handler.v[1]);
      *(float *)&v57 = fsqrt((float)((float)(*(float *)&v57 * *(float *)&v57) + (float)(handler.v[0] * handler.v[0])) + (float)(handler.v[2] * handler.v[2]));
      _XMM5 = v57;
      __asm
      {
        vcmpless xmm0, xmm5, xmm14
        vblendvps xmm1, xmm5, xmm13, xmm0
      }
      v61 = handler.v[0] * (float)(1.0 / *(float *)&_XMM1);
      handler.v[0] = v61;
      v62 = handler.v[1] * (float)(1.0 / *(float *)&_XMM1);
      handler.v[1] = v62;
      v63 = handler.v[2] * (float)(1.0 / *(float *)&_XMM1);
      handler.v[2] = v63;
      if ( *(float *)&_XMM5 < 0.000099999997 )
        goto LABEL_111;
      if ( v46 )
      {
        v64 = v61 * forward.v[0];
        v65 = v62 * forward.v[1];
        v66 = v63 * forward.v[2];
      }
      else
      {
        v64 = v61 * outSearchDir.v[0];
        v65 = v62 * outSearchDir.v[1];
        v66 = v63 * outSearchDir.v[2];
      }
      if ( (float)(acosf_0((float)(v64 + v65) + v66) * 57.295776) > v41 )
        goto LABEL_111;
      Edge_CalculatePoint(v39, *v45, resultFractionPool[v44], &point);
      if ( v46 )
      {
        Edge_CalculatePoint(v39, *v45, 0.5, &point);
        v67 = DCONST_DVARFLT_mantle_ladder_over_dist;
        if ( !DCONST_DVARFLT_mantle_ladder_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_over_dist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v67);
        v68 = v67->current.value;
        end.v[0] = (float)(v68 * handler.v[0]) + point.v[0];
        v69 = (float)(v68 * handler.v[1]) + point.v[1];
        end.v[1] = v69;
        v70 = point.v[2];
        v71 = (float)(v68 * handler.v[2]) + point.v[2];
        end.v[2] = v71;
        mresults->ladderOverPos.v[0] = end.v[0];
        mresults->ladderOverPos.v[1] = v69;
        mresults->ladderOverPos.v[2] = v71;
        start = vec;
        WorldUpReferenceFrame::SetUpContribution(&v107, v70, &start);
        ProjectPointOntoVectorClamped(&point, &start, &end, &point, NULL);
      }
      v72 = v86;
      v74 = point.v[2] - v86->v[2];
      v73 = v74;
      if ( v74 > v43 )
        goto LABEL_111;
      if ( v46 )
      {
        v75 = DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin;
        if ( DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin )
          goto LABEL_97;
        v76 = "mantle_ladder_edge_search_min_height_above_search_origin";
      }
      else
      {
        v75 = DCONST_DVARFLT_mantle_edge_search_min_height_above_search_origin;
        if ( DCONST_DVARFLT_mantle_edge_search_min_height_above_search_origin )
          goto LABEL_97;
        v76 = "mantle_edge_search_min_height_above_search_origin";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v76) )
        __debugbreak();
LABEL_97:
      Dvar_CheckFrontendServerThread(v75);
      if ( v74 >= v75->current.value )
      {
        if ( v74 <= 0.0 && v46 )
        {
          WorldUpReferenceFrame::AddUpContribution(&v107, 0.125 - v74, &point);
          WorldUpReferenceFrame::AddUpContribution(&v107, 0.125 - v74, &mresults->ladderOverPos);
          v73 = FLOAT_0_125;
        }
        v43 = v73;
        mresults->edgePos = point;
        mresults->edgeNormal = outNormal;
        Edge_GetLineSegment(v39, *v45, (vec3_t (*)[2])mresults->edgeLineSegment);
        mresults->edgeFlags[0] = Edge_GetFlags(*v45);
        if ( Mantle_IsForceOver(mresults) )
        {
          mresults->flags |= 1u;
        }
        else if ( v46 )
        {
          mresults->flags |= 0x800u;
        }
        mresults->startPos = *v72;
        edgePos = mresults->edgePos;
        UpContribution = WorldUpReferenceFrame::GetUpContribution(&v107, v72);
        WorldUpReferenceFrame::SetUpContribution(&v107, *(float *)&UpContribution, &edgePos);
        mresults->distanceToMantleSurface = fsqrt((float)((float)((float)(edgePos.v[1] - mresults->startPos.v[1]) * (float)(edgePos.v[1] - mresults->startPos.v[1])) + (float)((float)(edgePos.v[0] - mresults->startPos.v[0]) * (float)(edgePos.v[0] - mresults->startPos.v[0]))) + (float)((float)(edgePos.v[2] - mresults->startPos.v[2]) * (float)(edgePos.v[2] - mresults->startPos.v[2])));
        if ( v46 )
        {
          mresults->dir.v[0] = mresults->ladderOverPos.v[0] - mresults->startPos.v[0];
          mresults->dir.v[1] = mresults->ladderOverPos.v[1] - mresults->startPos.v[1];
          mresults->dir.v[2] = mresults->ladderOverPos.v[2] - mresults->startPos.v[2];
          Vec3Normalize(&mresults->dir);
          v78 = 1;
          v83 = 1;
        }
        else
        {
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_use_approach_angle, "mantle_use_approach_angle") )
          {
            mresults->dir.v[0] = outSearchDir.v[0];
            v79 = outSearchDir.v[1];
            mresults->dir.v[2] = outSearchDir.v[2];
          }
          else
          {
            mresults->dir.v[0] = handler.v[0];
            v79 = handler.v[1];
            mresults->dir.v[2] = handler.v[2];
          }
          mresults->dir.v[1] = v79;
          v78 = 1;
          v83 = 1;
        }
        goto LABEL_112;
      }
LABEL_111:
      v78 = v83;
LABEL_112:
      ++v44;
      ++v45;
      if ( v44 >= v85 )
      {
        if ( v78 )
        {
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_side_mantle_use_over, "mantle_side_mantle_use_over") )
          {
            flags = mresults->flags;
            if ( (flags & 0x300) != 0 )
              mresults->flags = flags | 1;
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_back_mantle_use_over, "mantle_back_mantle_use_over") )
          {
            v81 = mresults->flags;
            if ( (v81 & 0x400) != 0 )
              mresults->flags = v81 | 1;
          }
          mresults->debugDraw.edgeFound = 1;
        }
        v42 = v83;
        break;
      }
    }
  }
  Sys_ProfEndNamedEvent();
  return v42;
}

/*
==============
Mantle_FindMantleSurface
==============
*/
__int64 Mantle_FindMantleSurface(const playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, const vec3_t *searchOrigin, MantleResults *mresults, const vec3_t *wishDir)
{
  double BoundsRadius; 
  float v11; 
  const Bounds *v12; 
  float v13; 
  const dvar_t *v14; 
  float value; 
  float v16; 
  const dvar_t *v17; 
  int contentMask; 
  const BgPlayerTraceInfo *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  int integer; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const char *v26; 
  const dvar_t *v27; 
  int Int_Internal_DebugName; 
  float v29; 
  float v30; 
  float v31; 
  int v32; 
  float v33; 
  double Float_Internal_DebugName; 
  __int128 v35; 
  __int128 v36; 
  float v40; 
  float v41; 
  double v42; 
  float v43; 
  float v44; 
  float v45; 
  int flags; 
  int v47; 
  unsigned __int8 v48; 
  const dvar_t *v49; 
  const dvar_t *v50; 
  BgTrace v52; 
  __int64 v53; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outSearchDir; 
  vec3_t outUp; 
  Bounds bounds; 
  trace_t results; 
  vec3_t outSearchStraightDir; 
  WorldUpReferenceFrame v61; 

  v53 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF008008, "Mantle_FindMantleSurface");
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2185, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  Mantle_GetSearchDirection(ps, pmoveHandler, mresults, wishDir, &outSearchDir, &outSearchStraightDir);
  BoundsRadius = BG_Suit_GetBoundsRadius(ps);
  v11 = *(float *)&BoundsRadius;
  v12 = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
  v13 = Mantle_GetCheckHeight(ps, pmoveHandler, mresults);
  v14 = DCONST_DVARFLT_mantle_check_radius;
  if ( !DCONST_DVARFLT_mantle_check_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  value = v14->current.value;
  bounds.midPoint.v[0] = 0.0;
  bounds.midPoint.v[1] = 0.0;
  bounds.midPoint.v[2] = v13 * 0.5;
  bounds.halfSize.v[0] = value;
  bounds.halfSize.v[1] = value;
  bounds.halfSize.v[2] = v13 * 0.5;
  if ( value > v12->halfSize.v[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2200, ASSERT_TYPE_ASSERT, "(bounds.halfSize[0] <= playerBounds->halfSize[2])", (const char *)&queryFormat, "bounds.halfSize[0] <= playerBounds->halfSize[2]") )
    __debugbreak();
  if ( bounds.halfSize.v[1] > v12->halfSize.v[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2201, ASSERT_TYPE_ASSERT, "(bounds.halfSize[1] <= playerBounds->halfSize[2])", (const char *)&queryFormat, "bounds.halfSize[1] <= playerBounds->halfSize[2]") )
    __debugbreak();
  start = *searchOrigin;
  v16 = (float)(Mantle_GetCheckRange(ps, mresults) + v11) - value;
  end.v[0] = (float)(v16 * outSearchDir.v[0]) + searchOrigin->v[0];
  end.v[1] = (float)(v16 * outSearchDir.v[1]) + searchOrigin->v[1];
  end.v[2] = (float)(v16 * outSearchDir.v[2]) + searchOrigin->v[2];
  v17 = DCONST_DVARBOOL_mantle_everything;
  if ( !DCONST_DVARBOOL_mantle_everything && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_everything") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  contentMask = 8454161;
  if ( !v17->current.enabled )
    contentMask = 0x1000000;
  v19 = pmoveHandler->GetPlayerTraceInfo(pmoveHandler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&v52, v19);
  v52.m_flags |= 0x80u;
  v20 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled )
    v52.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&v52, worldId, &results, &start, &end, &bounds, ps->clientNum, contentMask, ps);
  v52.m_flags &= ~0x80u;
  v21 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
    v52.m_flags &= ~0x200u;
  if ( results.fraction == 1.0 )
  {
    v22 = DVARINT_mantle_debugLineTime;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    integer = v22->current.integer;
    v24 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( (v24->current.enabled & 4) != 0 )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &start, &end, &colorRed, 0, integer);
    v25 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( !v25->current.enabled )
      goto LABEL_81;
    v26 = "Mantle Failed: No mantle surface found";
    goto LABEL_80;
  }
  if ( results.startsolid || results.allsolid )
  {
    v49 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    if ( (v49->current.enabled & 4) != 0 )
      pmoveHandler->DebugStar((BgHandler *)pmoveHandler, &start, &colorRed, 0);
    v50 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    if ( !v50->current.enabled )
      goto LABEL_81;
    v26 = "Mantle Failed: Mantle brush is too thick";
LABEL_80:
    Com_Printf(17, "%s\n", v26);
    goto LABEL_81;
  }
  v27 = DCONST_DVARBOOL_mantle_everything;
  if ( !DCONST_DVARBOOL_mantle_everything && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_everything") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( !v27->current.enabled && (results.surfaceFlags & 0x6000000) == 0 )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
    Mantle_DebugTraceLine(pmoveHandler, &start, &end, results.fraction, &colorRedFaded, Int_Internal_DebugName);
    Mantle_DebugPrint(1u, "Mantle Failed: No mantle surface with MANTLE_ON or MANTLE_OVER found");
LABEL_81:
    v48 = 0;
    goto LABEL_82;
  }
  v29 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  v30 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  v31 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  v32 = Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
  Mantle_DebugTraceLine(pmoveHandler, &start, &end, results.fraction, &colorGreen, v32);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v61, ps, pmoveHandler);
  WorldUpReferenceFrame::GetUpVector(&v61, &outUp);
  LODWORD(v33) = COERCE_UNSIGNED_INT((float)((float)(results.normal.v[0] * outUp.v[0]) + (float)(results.normal.v[1] * outUp.v[1])) + (float)(results.normal.v[2] * outUp.v[2])) & _xmm;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_check_dot_vertical, "mantle_check_dot_vertical");
  if ( v33 > *(float *)&Float_Internal_DebugName )
  {
    Mantle_DebugPrint(1u, "Mantle Failed: Mantle facing surface has too vertical of a normal");
    goto LABEL_81;
  }
  mresults->dir.v[0] = COERCE_FLOAT(LODWORD(results.normal.v[0]) ^ _xmm);
  mresults->dir.v[1] = COERCE_FLOAT(LODWORD(results.normal.v[1]) ^ _xmm);
  mresults->dir.v[2] = COERCE_FLOAT(LODWORD(results.normal.v[2]) ^ _xmm);
  WorldUpReferenceFrame::SetUpContribution(&v61, 0.0, &mresults->dir);
  v35 = LODWORD(mresults->dir.v[0]);
  v36 = v35;
  *(float *)&v36 = fsqrt((float)((float)(*(float *)&v35 * *(float *)&v35) + (float)(mresults->dir.v[1] * mresults->dir.v[1])) + (float)(mresults->dir.v[2] * mresults->dir.v[2]));
  _XMM5 = v36;
  __asm
  {
    vcmpless xmm0, xmm5, cs:__real@80000000
    vblendvps xmm1, xmm5, xmm7, xmm0
  }
  mresults->dir.v[0] = *(float *)&v35 * (float)(1.0 / *(float *)&_XMM1);
  mresults->dir.v[1] = (float)(1.0 / *(float *)&_XMM1) * mresults->dir.v[1];
  v40 = (float)(1.0 / *(float *)&_XMM1) * mresults->dir.v[2];
  mresults->dir.v[2] = v40;
  if ( *(float *)&v36 < 0.000099999997 )
  {
    Mantle_DebugPrint(1u, "Mantle Failed: Mantle surface has vertical normal");
    goto LABEL_81;
  }
  v41 = acosf_0((float)((float)(outSearchDir.v[0] * mresults->dir.v[0]) + (float)(outSearchDir.v[1] * mresults->dir.v[1])) + (float)(v40 * outSearchDir.v[2])) * 57.295776;
  v42 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_check_angle, "mantle_check_angle");
  if ( v41 > *(float *)&v42 )
  {
    Mantle_DebugPrint(1u, "Mantle Failed: Player is not facing mantle surface");
    goto LABEL_81;
  }
  v43 = searchOrigin->v[0];
  mresults->startPos.v[0] = searchOrigin->v[0];
  v44 = searchOrigin->v[1];
  mresults->startPos.v[1] = v44;
  v45 = searchOrigin->v[2];
  mresults->startPos.v[2] = v45;
  mresults->distanceToMantleSurface = fsqrt((float)((float)((float)(v30 - v44) * (float)(v30 - v44)) + (float)((float)(v29 - v43) * (float)(v29 - v43))) + (float)((float)(v31 - v45) * (float)(v31 - v45)));
  if ( (results.surfaceFlags & 0x4000000) != 0 )
    mresults->flags |= 1u;
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_side_mantle_use_over, "mantle_side_mantle_use_over") )
  {
    flags = mresults->flags;
    if ( (flags & 0x300) != 0 )
      mresults->flags = flags | 1;
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_back_mantle_use_over, "mantle_back_mantle_use_over") )
  {
    v47 = mresults->flags;
    if ( (v47 & 0x400) != 0 )
      mresults->flags = v47 | 1;
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_use_approach_angle, "mantle_use_approach_angle") )
    mresults->dir = outSearchDir;
  v48 = 1;
LABEL_82:
  Sys_ProfEndNamedEvent();
  return v48;
}

/*
==============
Mantle_FixUpMantleDirForEdge
==============
*/
char Mantle_FixUpMantleDirForEdge(playerState_s *ps, const Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, vec3_t *inOutWishDir)
{
  const dvar_t *v10; 
  double BoundsRadius; 
  float v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  float v16; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  BgHandler_vtbl *v36; 
  __int64 clientNum; 
  float v38; 
  const BgPlayerTraceInfo *v39; 
  const dvar_t *v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  int v43; 
  float v44; 
  float v45; 
  const dvar_t *v46; 
  float v47; 
  const dvar_t *v48; 
  int integer; 
  const dvar_t *v50; 
  int v51; 
  const dvar_t *v52; 
  float v53; 
  float v54; 
  const dvar_t *v55; 
  float v56; 
  int v57; 
  const dvar_t *v58; 
  const dvar_t *v59; 
  const dvar_t *v60; 
  float v61; 
  const dvar_t *v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  double UpContribution; 
  float v69; 
  float v70; 
  __int64 v71; 
  __int128 v72; 
  float v73; 
  __int128 v74; 
  float v78; 
  BgTrace v82; 
  vec3_t *v83; 
  vec3_t vec; 
  float v85; 
  float v86; 
  float v87; 
  vec3_t v88; 
  vec3_t v89; 
  WorldUpReferenceFrame v90; 
  trace_t results; 
  vec3_t end; 
  vec3_t v93; 
  vec3_t pos; 
  vec3_t v95; 

  v83 = inOutWishDir;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2898, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pmoveHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2899, ASSERT_TYPE_ASSERT, "(pmoveHandler)", (const char *)&queryFormat, "pmoveHandler") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2900, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v10 = DCONST_DVARMPBOOL_mantle_enableDirectionAssist;
  if ( !DCONST_DVARMPBOOL_mantle_enableDirectionAssist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_enableDirectionAssist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    return 0;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v90, ps, pmoveHandler);
  BoundsRadius = BG_Suit_GetBoundsRadius(ps);
  v12 = mresults->edgeLineSegment[1].v[0] - mresults->edgeLineSegment[0].v[0];
  v14 = LODWORD(mresults->edgeLineSegment[1].v[1]);
  v13 = mresults->edgeLineSegment[1].v[1] - mresults->edgeLineSegment[0].v[1];
  v15 = mresults->edgeLineSegment[1].v[2] - mresults->edgeLineSegment[0].v[2];
  v16 = *(float *)&BoundsRadius;
  *(float *)&v14 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v15 * v15));
  _XMM11 = v14;
  __asm
  {
    vcmpless xmm0, xmm11, cs:__real@80000000
    vblendvps xmm0, xmm11, xmm12, xmm0
  }
  v20 = v12 * (float)(1.0 / *(float *)&_XMM0);
  v21 = v13 * (float)(1.0 / *(float *)&_XMM0);
  v23 = v15 * (float)(1.0 / *(float *)&_XMM0);
  v22 = v23;
  if ( v20 == 0.0 && v21 == 0.0 && v23 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2917, ASSERT_TYPE_ASSERT, "(Vec3NotZero( edgeDir ))", (const char *)&queryFormat, "Vec3NotZero( edgeDir )") )
    __debugbreak();
  vec.v[0] = (float)(v20 * (float)(*(float *)&_XMM11 * 0.5)) + mresults->edgeLineSegment[0].v[0];
  v24 = (float)(v21 * (float)(*(float *)&_XMM11 * 0.5)) + mresults->edgeLineSegment[0].v[1];
  vec.v[2] = (float)(v23 * (float)(*(float *)&_XMM11 * 0.5)) + mresults->edgeLineSegment[0].v[2];
  vec.v[1] = v24;
  WorldUpReferenceFrame::AddUpContribution(&v90, EDGE_TRACE_RAISE_AMOUNT, &vec);
  v25 = EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[1];
  v26 = mresults->edgeLineSegment[0].v[0];
  vec.v[0] = (float)(EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[0]) + vec.v[0];
  v27 = EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[2];
  vec.v[1] = v25 + vec.v[1];
  vec.v[2] = v27 + vec.v[2];
  v28 = mresults->edgeLineSegment[0].v[1];
  end.v[0] = v26;
  v29 = mresults->edgeLineSegment[0].v[2];
  end.v[1] = v28;
  end.v[2] = v29;
  WorldUpReferenceFrame::AddUpContribution(&v90, EDGE_TRACE_RAISE_AMOUNT, &end);
  v30 = EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[1];
  v31 = mresults->edgeLineSegment[1].v[0];
  end.v[0] = (float)(EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[0]) + end.v[0];
  v32 = EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[2];
  end.v[1] = v30 + end.v[1];
  end.v[2] = v32 + end.v[2];
  v33 = mresults->edgeLineSegment[1].v[1];
  v93.v[0] = v31;
  v34 = mresults->edgeLineSegment[1].v[2];
  v93.v[1] = v33;
  v93.v[2] = v34;
  WorldUpReferenceFrame::AddUpContribution(&v90, EDGE_TRACE_RAISE_AMOUNT, &v93);
  v35 = EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[1];
  v36 = pmoveHandler->__vftable;
  clientNum = (unsigned int)ps->clientNum;
  v93.v[0] = (float)(EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[0]) + v93.v[0];
  v38 = EDGE_TRACE_MOVE_INWARDS_AMOUNT * mresults->edgeNormal.v[2];
  v93.v[1] = v35 + v93.v[1];
  v93.v[2] = v38 + v93.v[2];
  v39 = v36->GetPlayerTraceInfo(pmoveHandler, clientNum);
  BgTrace::BgTrace(&v82, v39);
  v82.m_flags |= 0x80u;
  v40 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
    v82.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&v82, worldId, &results, &vec, &end, &bounds_origin, ps->clientNum, traceMask, ps);
  if ( results.startsolid || results.fraction == 1.0 )
  {
    v46 = DVARINT_mantle_debugLineTime;
    v47 = mresults->edgeLineSegment[0].v[1];
    pos.v[0] = mresults->edgeLineSegment[0].v[0];
    pos.v[2] = mresults->edgeLineSegment[0].v[2];
    pos.v[1] = v47;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    v48 = DCONST_DVARINT_mantle_debug;
    integer = v46->current.integer;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    if ( (v48->current.enabled & 4) != 0 )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &vec, &end, &colorLtOrange, 0, integer);
  }
  else
  {
    v41 = DVARINT_mantle_debugLineTime;
    v85 = (float)((float)(end.v[0] - vec.v[0]) * results.fraction) + vec.v[0];
    v86 = (float)((float)(end.v[1] - vec.v[1]) * results.fraction) + vec.v[1];
    v87 = (float)((float)(end.v[2] - vec.v[2]) * results.fraction) + vec.v[2];
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = DCONST_DVARINT_mantle_debug;
    v43 = v41->current.integer;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    if ( (v42->current.enabled & 4) != 0 )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &vec, (const vec3_t *)&v85, &colorLtOrange, 0, v43);
    v44 = (float)((float)((float)(v85 - mresults->edgeLineSegment[0].v[0]) * v20) + (float)((float)(v86 - mresults->edgeLineSegment[0].v[1]) * v21)) + (float)((float)(v87 - mresults->edgeLineSegment[0].v[2]) * v22);
    v45 = (float)(v44 * v21) + mresults->edgeLineSegment[0].v[1];
    pos.v[0] = (float)(v44 * v20) + mresults->edgeLineSegment[0].v[0];
    pos.v[2] = (float)(v44 * v22) + mresults->edgeLineSegment[0].v[2];
    pos.v[1] = v45;
  }
  BgTrace::LegacyTraceHandler(&v82, worldId, &results, &vec, &v93, &bounds_origin, ps->clientNum, traceMask, ps);
  if ( results.startsolid || results.fraction == 1.0 )
  {
    v55 = DVARINT_mantle_debugLineTime;
    v56 = mresults->edgeLineSegment[1].v[1];
    v95.v[0] = mresults->edgeLineSegment[1].v[0];
    v95.v[2] = mresults->edgeLineSegment[1].v[2];
    v95.v[1] = v56;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    v57 = v55->current.integer;
    v58 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    if ( (v58->current.enabled & 4) != 0 )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &vec, &v93, &colorLtOrange, 0, v57);
  }
  else
  {
    v50 = DVARINT_mantle_debugLineTime;
    v85 = (float)((float)(v93.v[0] - vec.v[0]) * results.fraction) + vec.v[0];
    v86 = (float)((float)(v93.v[1] - vec.v[1]) * results.fraction) + vec.v[1];
    v87 = (float)((float)(v93.v[2] - vec.v[2]) * results.fraction) + vec.v[2];
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    v51 = v50->current.integer;
    v52 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    if ( (v52->current.enabled & 4) != 0 )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &vec, (const vec3_t *)&v85, &colorLtOrange, 0, v51);
    v53 = (float)((float)((float)(v85 - mresults->edgeLineSegment[0].v[0]) * v20) + (float)((float)(v86 - mresults->edgeLineSegment[0].v[1]) * v21)) + (float)((float)(v87 - mresults->edgeLineSegment[0].v[2]) * v22);
    v54 = (float)(v53 * v21) + mresults->edgeLineSegment[0].v[1];
    v95.v[0] = (float)(v53 * v20) + mresults->edgeLineSegment[0].v[0];
    v95.v[2] = (float)(v53 * v22) + mresults->edgeLineSegment[0].v[2];
    v95.v[1] = v54;
  }
  v82.m_flags &= ~0x80u;
  v59 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  if ( v59->current.enabled )
    v82.m_flags &= ~0x200u;
  v60 = DVARINT_mantle_debugLineTime;
  v61 = fsqrt((float)((float)((float)(v95.v[1] - pos.v[1]) * (float)(v95.v[1] - pos.v[1])) + (float)((float)(v95.v[0] - pos.v[0]) * (float)(v95.v[0] - pos.v[0]))) + (float)((float)(v95.v[2] - pos.v[2]) * (float)(v95.v[2] - pos.v[2])));
  if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  Mantle_DebugStar(pmoveHandler, &pos, &colorLtOrange, v60->current.integer);
  v62 = DVARINT_mantle_debugLineTime;
  if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v62);
  Mantle_DebugStar(pmoveHandler, &v95, &colorLtOrange, v62->current.integer);
  v63 = (float)((float)((float)(mresults->startPos.v[1] - pos.v[1]) * v21) + (float)((float)(mresults->startPos.v[0] - pos.v[0]) * v20)) + (float)((float)(mresults->startPos.v[2] - pos.v[2]) * v22);
  v64 = COLLISION_THRESHOLD + v16;
  if ( v63 < (float)(COLLISION_THRESHOLD + v16) || v61 < (float)((float)(v63 + v16) + COLLISION_THRESHOLD) )
  {
    if ( v63 >= (float)(v61 * 0.5) )
    {
      v65 = (float)(v20 * COERCE_FLOAT(LODWORD(v64) ^ _xmm)) + v95.v[0];
      v66 = (float)(COERCE_FLOAT(LODWORD(v64) ^ _xmm) * v22) + v95.v[2];
      v67 = (float)(COERCE_FLOAT(LODWORD(v64) ^ _xmm) * v21) + v95.v[1];
    }
    else
    {
      v65 = (float)(v20 * v64) + pos.v[0];
      v66 = (float)(v64 * v22) + pos.v[2];
      v67 = (float)(v64 * v21) + pos.v[1];
    }
  }
  else
  {
    v65 = (float)(v20 * v63) + pos.v[0];
    v66 = (float)(v22 * v63) + pos.v[2];
    v67 = (float)(v21 * v63) + pos.v[1];
  }
  v88.v[0] = v65;
  v88.v[1] = v67;
  v88.v[2] = v66;
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&v90, &mresults->startPos);
  WorldUpReferenceFrame::SetUpContribution(&v90, *(float *)&UpContribution, &v88);
  v69 = fsqrt((float)((float)((float)(v88.v[1] - mresults->startPos.v[1]) * (float)(v88.v[1] - mresults->startPos.v[1])) + (float)((float)(v88.v[0] - mresults->startPos.v[0]) * (float)(v88.v[0] - mresults->startPos.v[0]))) + (float)((float)(v88.v[2] - mresults->startPos.v[2]) * (float)(v88.v[2] - mresults->startPos.v[2])));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v69 - mresults->distanceToMantleSurface) & _xmm) > EDGE_ASSIST_DISTANCE_THRESHOLD )
    return 0;
  mresults->edgePos.v[0] = v65;
  mresults->edgePos.v[1] = v67;
  mresults->edgePos.v[2] = v66;
  mresults->distanceToMantleSurface = v69;
  v70 = mresults->edgePos.v[1] - mresults->startPos.v[1];
  v89.v[0] = mresults->edgePos.v[0] - mresults->startPos.v[0];
  v89.v[2] = mresults->edgePos.v[2] - mresults->startPos.v[2];
  v89.v[1] = v70;
  WorldUpReferenceFrame::SetUpContribution(&v90, 0.0, &v89);
  v71 = (__int64)v83;
  v72 = LODWORD(v89.v[1]);
  v73 = v89.v[2];
  v74 = v72;
  *(float *)&v74 = fsqrt((float)((float)(*(float *)&v72 * *(float *)&v72) + (float)(v89.v[0] * v89.v[0])) + (float)(v73 * v73));
  _XMM3 = v74;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm12, xmm0
  }
  v78 = v89.v[0] * (float)(1.0 / *(float *)&_XMM0);
  mresults->dir.v[0] = v78;
  mresults->dir.v[1] = *(float *)&v72 * (float)(1.0 / *(float *)&_XMM0);
  mresults->dir.v[2] = v73 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)v71 = v78;
  *(_QWORD *)(v71 + 4) = *(_QWORD *)&mresults->dir.y;
  return 1;
}

/*
==============
Mantle_ForceCrouch
==============
*/
void Mantle_ForceCrouch(pmove_t *pm, MantleResults *mresults)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3439, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3439, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3440, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  mresults->flags |= 2u;
  BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, 0, pm->cmd.serverTime, pm->weaponMap, ps);
}

/*
==============
Mantle_ForceMantle
==============
*/
void Mantle_ForceMantle(playerState_s *ps)
{
  if ( ps )
  {
    ps->mantleState.flags |= 0x10u;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3353, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    MEMORY[0x384] |= 0x10u;
  }
}

/*
==============
Mantle_GetCheckHeight
==============
*/
float Mantle_GetCheckHeight(const playerState_s *ps, const BgHandler *pmoveHandler, const MantleResults *mresults)
{
  bool IsGameTypeQuick_BR; 
  __int16 groundEntityNum; 
  int v7; 
  const dvar_t *v8; 
  const char *v9; 

  IsGameTypeQuick_BR = BG_IsGameTypeQuick_BR(pmoveHandler);
  groundEntityNum = ps->groundEntityNum;
  v7 = mresults->flags & 0x700;
  if ( IsGameTypeQuick_BR )
  {
    if ( v7 )
    {
      if ( groundEntityNum == 2047 )
      {
        v8 = DCONST_DVARFLT_mantle_check_height_side_back_air_br;
        if ( DCONST_DVARFLT_mantle_check_height_side_back_air_br )
          goto LABEL_26;
        v9 = "mantle_check_height_side_back_air_br";
      }
      else
      {
        v8 = DCONST_DVARFLT_mantle_check_height_side_back_br;
        if ( DCONST_DVARFLT_mantle_check_height_side_back_br )
          goto LABEL_26;
        v9 = "mantle_check_height_side_back_br";
      }
    }
    else if ( groundEntityNum == 2047 )
    {
      v8 = DCONST_DVARFLT_mantle_check_height_air_br;
      if ( DCONST_DVARFLT_mantle_check_height_air_br )
        goto LABEL_26;
      v9 = "mantle_check_height_air_br";
    }
    else
    {
      v8 = DCONST_DVARFLT_mantle_check_height_br;
      if ( DCONST_DVARFLT_mantle_check_height_br )
        goto LABEL_26;
      v9 = "mantle_check_height_br";
    }
  }
  else if ( v7 )
  {
    if ( groundEntityNum == 2047 )
    {
      v8 = DCONST_DVARMPFLT_mantle_check_height_side_back_air;
      if ( DCONST_DVARMPFLT_mantle_check_height_side_back_air )
        goto LABEL_26;
      v9 = "mantle_check_height_side_back_air";
    }
    else
    {
      v8 = DCONST_DVARMPFLT_mantle_check_height_side_back;
      if ( DCONST_DVARMPFLT_mantle_check_height_side_back )
        goto LABEL_26;
      v9 = "mantle_check_height_side_back";
    }
  }
  else if ( groundEntityNum == 2047 )
  {
    v8 = DCONST_DVARMPFLT_mantle_check_height_air;
    if ( DCONST_DVARMPFLT_mantle_check_height_air )
      goto LABEL_26;
    v9 = "mantle_check_height_air";
  }
  else
  {
    v8 = DCONST_DVARMPFLT_mantle_check_height;
    if ( DCONST_DVARMPFLT_mantle_check_height )
      goto LABEL_26;
    v9 = "mantle_check_height";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
    __debugbreak();
LABEL_26:
  Dvar_CheckFrontendServerThread(v8);
  return v8->current.value;
}

/*
==============
Mantle_GetCheckRange
==============
*/
float Mantle_GetCheckRange(const playerState_s *ps, const MantleResults *mresults)
{
  __int16 groundEntityNum; 
  const dvar_t *v3; 
  const char *v4; 

  groundEntityNum = ps->groundEntityNum;
  if ( (mresults->flags & 0x700) != 0 )
  {
    if ( groundEntityNum == 2047 )
    {
      v3 = DCONST_DVARFLT_mantle_check_range_side_back_air;
      if ( DCONST_DVARFLT_mantle_check_range_side_back_air )
        goto LABEL_14;
      v4 = "mantle_check_range_side_back_air";
    }
    else
    {
      v3 = DCONST_DVARFLT_mantle_check_range_side_back;
      if ( DCONST_DVARFLT_mantle_check_range_side_back )
        goto LABEL_14;
      v4 = "mantle_check_range_side_back";
    }
  }
  else if ( groundEntityNum == 2047 )
  {
    v3 = DCONST_DVARFLT_mantle_check_range_air;
    if ( DCONST_DVARFLT_mantle_check_range_air )
      goto LABEL_14;
    v4 = "mantle_check_range_air";
  }
  else
  {
    v3 = DCONST_DVARFLT_mantle_check_range;
    if ( DCONST_DVARFLT_mantle_check_range )
      goto LABEL_14;
    v4 = "mantle_check_range";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v4) )
    __debugbreak();
LABEL_14:
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.value;
}

/*
==============
Mantle_GetFinalMoveType
==============
*/
__int64 Mantle_GetFinalMoveType(int moveTypeIndex)
{
  __int64 v1; 
  const edgeFlags_t *v2; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  v1 = moveTypeIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4012, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4013, ASSERT_TYPE_ASSERT, "( moveTypeIndex ) < ( ( sizeof( *array_counter( s_finalScriptAnimTable ) ) + 0 ) )", "%s < %s\n\t%i, %i", "moveTypeIndex", "ARRAY_COUNT( s_finalScriptAnimTable )", v1, 4) )
    __debugbreak();
  v2 = &EdgeOctree_BucketFlagsMask_2[v1 + 1];
  if ( (unsigned int)(*v2 - 1) <= 0x25 )
    return *(unsigned int *)v2;
  LODWORD(v6) = 38;
  LODWORD(v5) = 1;
  SLODWORD(v4) = *v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4014, ASSERT_TYPE_ASSERT, "( ANIM_MT_IDLE ) <= ( s_finalScriptAnimTable[moveTypeIndex] ) && ( s_finalScriptAnimTable[moveTypeIndex] ) <= ( NUM_ANIM_CODEMOVETYPES )", "s_finalScriptAnimTable[moveTypeIndex] not in [ANIM_MT_IDLE, NUM_ANIM_CODEMOVETYPES]\n\t%i not in [%i, %i]", v4, v5, v6) )
    __debugbreak();
  return *(unsigned int *)v2;
}

/*
==============
Mantle_GetLedgeHeight
==============
*/
double Mantle_GetLedgeHeight(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1162, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distanceZ, 190.0, 8u);
}

/*
==============
Mantle_GetMantleTime
==============
*/
__int64 Mantle_GetMantleTime(const int flags, const float height, const float distance3D, float vel2D)
{
  float v4; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const char *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  const char *v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  const dvar_t *v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  float v44; 
  double v45; 
  float v46; 
  double v47; 
  __int64 v49; 
  __int64 v50; 

  v4 = distance3D;
  if ( (flags & 0x800) != 0 )
  {
    v5 = DCONST_DVARFLT_mantle_ladder_dist_min;
    if ( !DCONST_DVARFLT_mantle_ladder_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_dist_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
    v7 = DCONST_DVARFLT_mantle_ladder_dist_max;
    if ( !DCONST_DVARFLT_mantle_ladder_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_dist_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v7->current.value;
    v9 = DCONST_DVARFLT_mantle_ladder_time_min;
    if ( !DCONST_DVARFLT_mantle_ladder_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_time_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = v9->current.value;
    v11 = DCONST_DVARFLT_mantle_ladder_time_max;
    if ( !DCONST_DVARFLT_mantle_ladder_time_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_time_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.value;
    v13 = DCONST_DVARFLT_mantle_ladder_speed_min;
    if ( !DCONST_DVARFLT_mantle_ladder_speed_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_speed_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = v13->current.value;
    v15 = DCONST_DVARFLT_mantle_ladder_speed_max;
    if ( !DCONST_DVARFLT_mantle_ladder_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_speed_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.value;
    v17 = DCONST_DVARMPFLT_mantle_ladder_timescale_min;
    if ( !DCONST_DVARMPFLT_mantle_ladder_timescale_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_timescale_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = v17->current.value;
    v19 = DCONST_DVARMPFLT_mantle_ladder_timescale_max;
    if ( !DCONST_DVARMPFLT_mantle_ladder_timescale_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_timescale_max") )
      __debugbreak();
LABEL_26:
    Dvar_CheckFrontendServerThread(v19);
    goto LABEL_110;
  }
  if ( (flags & 1) != 0 )
  {
    v20 = DCONST_DVARFLT_mantle_over_dist_max;
    if ( !DCONST_DVARFLT_mantle_over_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_dist_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( distance3D <= v20->current.value )
    {
      v26 = DCONST_DVARFLT_mantle_over_dist_min;
      if ( !DCONST_DVARFLT_mantle_over_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_dist_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      value = v26->current.value;
      v27 = DCONST_DVARFLT_mantle_over_dist_max;
      if ( !DCONST_DVARFLT_mantle_over_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_dist_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      v8 = v27->current.value;
      v28 = DCONST_DVARFLT_mantle_over_time_min;
      if ( !DCONST_DVARFLT_mantle_over_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_time_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      v10 = v28->current.value;
      v24 = DCONST_DVARFLT_mantle_over_time_max;
      if ( DCONST_DVARFLT_mantle_over_time_max )
        goto LABEL_56;
      v25 = "mantle_over_time_max";
    }
    else
    {
      v21 = DCONST_DVARFLT_mantle_over_high_dist_min;
      if ( !DCONST_DVARFLT_mantle_over_high_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_high_dist_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      value = v21->current.value;
      v22 = DCONST_DVARFLT_mantle_over_high_dist_max;
      if ( !DCONST_DVARFLT_mantle_over_high_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_high_dist_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      v8 = v22->current.value;
      v23 = DCONST_DVARFLT_mantle_over_high_time_min;
      if ( !DCONST_DVARFLT_mantle_over_high_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_high_time_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      v10 = v23->current.value;
      v24 = DCONST_DVARFLT_mantle_over_high_time_max;
      if ( DCONST_DVARFLT_mantle_over_high_time_max )
        goto LABEL_56;
      v25 = "mantle_over_high_time_max";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v25) )
      __debugbreak();
LABEL_56:
    Dvar_CheckFrontendServerThread(v24);
    v12 = v24->current.value;
    v29 = DCONST_DVARFLT_mantle_over_speed_min;
    if ( !DCONST_DVARFLT_mantle_over_speed_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_speed_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v14 = v29->current.value;
    v30 = DCONST_DVARFLT_mantle_over_speed_max;
    if ( !DCONST_DVARFLT_mantle_over_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_speed_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v16 = v30->current.value;
    v31 = DCONST_DVARMPFLT_mantle_over_timescale_min;
    if ( !DCONST_DVARMPFLT_mantle_over_timescale_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_timescale_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    v18 = v31->current.value;
    v19 = DCONST_DVARMPFLT_mantle_over_timescale_max;
    if ( !DCONST_DVARMPFLT_mantle_over_timescale_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_timescale_max") )
      __debugbreak();
    goto LABEL_26;
  }
  v32 = DCONST_DVARFLT_mantle_on_dist_max;
  if ( !DCONST_DVARFLT_mantle_on_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_dist_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( height <= v32->current.value )
  {
    v38 = DCONST_DVARFLT_mantle_on_dist_min;
    if ( !DCONST_DVARFLT_mantle_on_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_dist_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    value = v38->current.value;
    v39 = DCONST_DVARFLT_mantle_on_dist_max;
    if ( !DCONST_DVARFLT_mantle_on_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_dist_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v8 = v39->current.value;
    v40 = DCONST_DVARFLT_mantle_on_time_min;
    if ( !DCONST_DVARFLT_mantle_on_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_time_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v10 = v40->current.value;
    v36 = DCONST_DVARFLT_mantle_on_time_max;
    if ( DCONST_DVARFLT_mantle_on_time_max )
      goto LABEL_97;
    v37 = "mantle_on_time_max";
  }
  else
  {
    v33 = DCONST_DVARFLT_mantle_on_high_dist_min;
    if ( !DCONST_DVARFLT_mantle_on_high_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_high_dist_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    value = v33->current.value;
    v34 = DCONST_DVARFLT_mantle_on_high_dist_max;
    if ( !DCONST_DVARFLT_mantle_on_high_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_high_dist_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v8 = v34->current.value;
    v35 = DCONST_DVARFLT_mantle_on_high_time_min;
    if ( !DCONST_DVARFLT_mantle_on_high_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_high_time_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v10 = v35->current.value;
    v36 = DCONST_DVARFLT_mantle_on_high_time_max;
    if ( DCONST_DVARFLT_mantle_on_high_time_max )
      goto LABEL_97;
    v37 = "mantle_on_high_time_max";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v37) )
    __debugbreak();
LABEL_97:
  Dvar_CheckFrontendServerThread(v36);
  v12 = v36->current.value;
  v41 = DCONST_DVARFLT_mantle_on_speed_min;
  if ( !DCONST_DVARFLT_mantle_on_speed_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_speed_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  v14 = v41->current.value;
  v42 = DCONST_DVARFLT_mantle_on_speed_max;
  if ( !DCONST_DVARFLT_mantle_on_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_speed_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v16 = v42->current.value;
  v43 = DCONST_DVARMPFLT_mantle_on_timescale_min;
  if ( !DCONST_DVARMPFLT_mantle_on_timescale_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_timescale_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  v18 = v43->current.value;
  v19 = DCONST_DVARMPFLT_mantle_on_timescale_max;
  if ( !DCONST_DVARMPFLT_mantle_on_timescale_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_timescale_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v4 = height;
LABEL_110:
  v44 = v19->current.value;
  v45 = I_fclamp(v4, value, v8);
  if ( v8 <= value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1143, ASSERT_TYPE_ASSERT, "( mantleMaxDist ) > ( mantleMinDist )", "%s > %s\n\t%i, %i", "mantleMaxDist", "mantleMinDist", (int)v8, (int)value) )
    __debugbreak();
  v46 = (float)((float)(1.0 - (float)((float)(*(float *)&v45 - value) / (float)(v8 - value))) * v10) + (float)((float)((float)(*(float *)&v45 - value) / (float)(v8 - value)) * v12);
  v47 = I_fclamp(vel2D, v14, v16);
  if ( v16 <= v14 )
  {
    LODWORD(v50) = (int)v14;
    LODWORD(v49) = (int)v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1152, ASSERT_TYPE_ASSERT, "( mantleMaxSpeed ) > ( mantleMinSpeed )", "%s > %s\n\t%i, %i", "mantleMaxSpeed", "mantleMinSpeed", v49, v50) )
      __debugbreak();
  }
  return (unsigned int)(int)(float)((float)((float)((float)((float)(1.0 - (float)((float)(*(float *)&v47 - v14) / (float)(v16 - v14))) * v18) + (float)((float)((float)(*(float *)&v47 - v14) / (float)(v16 - v14)) * v44)) * v46) * 1000.0);
}

/*
==============
Mantle_GetSearchDirection
==============
*/
void Mantle_GetSearchDirection(const playerState_s *ps, const BgHandler *pmoveHandler, MantleResults *mresults, const vec3_t *wishDir, vec3_t *outSearchDir, vec3_t *outSearchStraightDir)
{
  float v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  const dvar_t *v17; 
  __int128 v18; 
  __int128 v19; 
  double v23; 
  double v24; 
  const dvar_t *v25; 
  float v26; 
  float value; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  float v30; 
  const dvar_t *v31; 
  double Float_Internal_DebugName; 
  float v33; 
  double v34; 
  float v35; 
  vec3_t forward; 
  vec3_t angles; 
  vec3_t outUp; 
  WorldUpReferenceFrame v39; 

  WorldUpReferenceFrame::WorldUpReferenceFrame(&v39, ps, pmoveHandler);
  v9 = ps->viewangles.v[1];
  angles.v[0] = ps->viewangles.v[0];
  angles.v[2] = ps->viewangles.v[2];
  angles.v[1] = v9;
  WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v39, &angles);
  AngleVectors(&angles, &forward, NULL, NULL);
  WorldUpReferenceFrame::SetUpContribution(&v39, 0.0, &forward);
  v10 = LODWORD(forward.v[0]);
  v11 = forward.v[1];
  v12 = forward.v[2];
  mresults->signedAngleBetweenMantleDirAndLookDir = 0.0;
  v13 = v10;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11)) + (float)(v12 * v12));
  _XMM3 = v13;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  outSearchStraightDir->v[0] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  outSearchStraightDir->v[1] = v11 * (float)(1.0 / *(float *)&_XMM0);
  outSearchStraightDir->v[2] = v12 * (float)(1.0 / *(float *)&_XMM0);
  v17 = DCONST_DVARBOOL_mantle_any_direction;
  forward.v[0] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  forward.v[1] = v11 * (float)(1.0 / *(float *)&_XMM0);
  forward.v[2] = v12 * (float)(1.0 / *(float *)&_XMM0);
  if ( !DCONST_DVARBOOL_mantle_any_direction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_any_direction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( !v17->current.enabled )
    goto LABEL_24;
  v18 = LODWORD(wishDir->v[0]);
  v19 = v18;
  *(float *)&v19 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(wishDir->v[1] * wishDir->v[1])) + (float)(wishDir->v[2] * wishDir->v[2]));
  _XMM5 = v19;
  __asm
  {
    vcmpless xmm0, xmm5, cs:__real@80000000
    vblendvps xmm0, xmm5, xmm7, xmm0
  }
  outSearchDir->v[0] = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM0);
  outSearchDir->v[1] = (float)(1.0 / *(float *)&_XMM0) * wishDir->v[1];
  outSearchDir->v[2] = (float)(1.0 / *(float *)&_XMM0) * wishDir->v[2];
  if ( *(float *)&v19 > 0.000001 )
  {
    WorldUpReferenceFrame::GetUpVector(&v39, &outUp);
    v23 = SignedAngleBetween(&forward, outSearchDir, &outUp);
    mresults->signedAngleBetweenMantleDirAndLookDir = *(float *)&v23;
    v24 = AngleNormalize360(*(const float *)&v23);
    v25 = DCONST_DVARFLT_mantle_left_mantle_angle_end;
    v26 = *(float *)&v24;
    if ( !DCONST_DVARFLT_mantle_left_mantle_angle_end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_left_mantle_angle_end") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    value = v25->current.value;
    v28 = DCONST_DVARFLT_mantle_left_mantle_angle_begin;
    if ( !DCONST_DVARFLT_mantle_left_mantle_angle_begin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_left_mantle_angle_begin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( Mantle_IsIn360AngleInterval(v28->current.value, value, *(const float *)&v24) )
    {
      mresults->flags |= 0x100u;
    }
    else
    {
      v29 = DCONST_DVARFLT_mantle_back_mantle_angle_end;
      if ( !DCONST_DVARFLT_mantle_back_mantle_angle_end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_back_mantle_angle_end") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      v30 = v29->current.value;
      v31 = DCONST_DVARFLT_mantle_back_mantle_angle_begin;
      if ( !DCONST_DVARFLT_mantle_back_mantle_angle_begin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_back_mantle_angle_begin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( Mantle_IsIn360AngleInterval(v31->current.value, v30, *(const float *)&v24) )
      {
        mresults->flags |= 0x400u;
      }
      else
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_right_mantle_angle_end, "mantle_right_mantle_angle_end");
        v33 = *(float *)&Float_Internal_DebugName;
        v34 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_right_mantle_angle_begin, "mantle_right_mantle_angle_begin");
        if ( Mantle_IsIn360AngleInterval(*(const float *)&v34, v33, v26) )
          mresults->flags |= 0x200u;
      }
    }
  }
  else
  {
LABEL_24:
    v35 = forward.v[1];
    outSearchDir->v[0] = forward.v[0];
    outSearchDir->v[2] = forward.v[2];
    outSearchDir->v[1] = v35;
  }
}

/*
==============
Mantle_GetWeaponMantleGestureDirectionType
==============
*/
__int64 Mantle_GetWeaponMantleGestureDirectionType(const playerState_s *ps)
{
  int flags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1209, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  flags = ps->mantleState.compressedAnimData.flags;
  if ( (flags & 8) != 0 )
    return 2i64;
  if ( (flags & 0x10) != 0 )
    return 3i64;
  return ((unsigned __int8)flags >> 5) & 1;
}

/*
==============
Mantle_GetWeaponMantleGestureHeightType
==============
*/
__int64 Mantle_GetWeaponMantleGestureHeightType(const playerState_s *ps)
{
  double LedgeHeight; 
  const dvar_t *v3; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1182, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LedgeHeight = Mantle_GetLedgeHeight(ps);
  v3 = DCONST_DVARFLT_mantle_gesture_extreme_min_height;
  if ( !DCONST_DVARFLT_mantle_gesture_extreme_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_extreme_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( *(float *)&LedgeHeight >= v3->current.value )
    return 3i64;
  v5 = DCONST_DVARFLT_mantle_gesture_high_min_height;
  if ( !DCONST_DVARFLT_mantle_gesture_high_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_high_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( *(float *)&LedgeHeight >= v5->current.value )
    return 2i64;
  v6 = DCONST_DVARFLT_mantle_gesture_middle_min_height;
  if ( !DCONST_DVARFLT_mantle_gesture_middle_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_middle_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return *(float *)&LedgeHeight >= v6->current.value;
}

/*
==============
Mantle_InDistanceRegardlessOfSpeed
==============
*/
_BOOL8 Mantle_InDistanceRegardlessOfSpeed(const playerState_s *ps, const MantleResults *mresults)
{
  const dvar_t *v4; 
  float value; 
  double BoundsRadius; 

  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2642, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v4 = DCONST_DVARFLT_mantle_check_radius;
  if ( !DCONST_DVARFLT_mantle_check_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  BoundsRadius = BG_Suit_GetBoundsRadius(ps);
  return (float)(Mantle_GetCheckRange(ps, mresults) + (float)(*(float *)&BoundsRadius - value)) >= mresults->distanceToMantleSurface;
}

/*
==============
Mantle_IsForceOn
==============
*/
bool Mantle_IsForceOn(MantleResults *mresults)
{
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 451, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  return (mresults->edgeFlags[0] & 0xA) == 2;
}

/*
==============
Mantle_IsForceOver
==============
*/
bool Mantle_IsForceOver(MantleResults *mresults)
{
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 437, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  return (mresults->edgeFlags[0] & 0xA) == 8;
}

/*
==============
Mantle_IsIn360AngleInterval
==============
*/
bool Mantle_IsIn360AngleInterval(const float rangeBegin, const float rangeEnd, const float angle)
{
  if ( (rangeBegin < 0.0 || rangeBegin >= 360.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2040, ASSERT_TYPE_ASSERT, "((rangeBegin >= 0.0f) && (rangeBegin < 360.0f))", (const char *)&queryFormat, "(rangeBegin >= 0.0f) && (rangeBegin < 360.0f)") )
    __debugbreak();
  if ( (rangeEnd < 0.0 || rangeEnd >= 360.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2041, ASSERT_TYPE_ASSERT, "((rangeEnd >= 0.0f) && (rangeEnd < 360.0f))", (const char *)&queryFormat, "(rangeEnd >= 0.0f) && (rangeEnd < 360.0f)") )
    __debugbreak();
  if ( (angle < 0.0 || angle >= 360.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2042, ASSERT_TYPE_ASSERT, "((angle >= 0.0f) && (angle < 360.0f))", (const char *)&queryFormat, "(angle >= 0.0f) && (angle < 360.0f)") )
    __debugbreak();
  if ( rangeBegin <= rangeEnd )
    return angle >= rangeBegin && angle <= rangeEnd;
  return angle >= rangeBegin || angle <= rangeEnd;
}

/*
==============
Mantle_IsLadder
==============
*/
bool Mantle_IsLadder(const MantleResults *mresults)
{
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 444, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  return (mresults->edgeFlags[0] & 4) != 0;
}

/*
==============
Mantle_IsOver
==============
*/
bool Mantle_IsOver(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1172, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (ps->mantleState.compressedAnimData.flags & 2) != 0;
}

/*
==============
Mantle_IsWeaponDown
==============
*/
bool Mantle_IsWeaponDown(const playerState_s *ps)
{
  double LedgeHeight; 
  const dvar_t *v3; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1059, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LedgeHeight = Mantle_GetLedgeHeight(ps);
  v3 = DCONST_DVARFLT_mantle_gesture_high_min_height;
  if ( !DCONST_DVARFLT_mantle_gesture_high_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_high_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return *(float *)&LedgeHeight >= v3->current.value;
}

/*
==============
Mantle_Move
==============
*/
void Mantle_Move(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  int v5; 
  int v6; 
  double v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  float v14; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  playerState_s *v21; 
  bool v22; 
  playerState_s *v23; 
  playerState_s *v24; 
  int flags; 
  const dvar_t *v26; 
  float v27; 
  int v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const char *v31; 
  int elapsedAnimTime; 
  vec3_t end; 
  pml_t *pmla; 
  vec3_t outPos; 
  trace_t outResults; 
  BSplineRelaxedCBezier outMantleSpline; 

  pmla = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4237, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4237, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = 0;
  v6 = ps->mantleState.endTime - ps->mantleState.startTime;
  if ( v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4242, ASSERT_TYPE_ASSERT, "( mantleDuration ) > ( 0 )", "%s > %s\n\t%lli, %lli", "mantleDuration", "0", v6, 0i64) )
    __debugbreak();
  if ( pm->cmd.serverTime - ps->mantleState.startTime > 0 )
    v5 = pm->cmd.serverTime - ps->mantleState.startTime;
  elapsedAnimTime = v5;
  v7 = I_fclamp((float)v5 / (float)v6, 0.0, 1.0);
  v8 = *(float *)&v7;
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&outMantleSpline);
  Mantle_BuildMotionPath(pm, &outMantleSpline);
  BG_BSpline_RelaxedCBezier_Evaluate(&outMantleSpline, *(float *)&v7, &outPos);
  v9 = outPos.v[0] - ps->origin.v[0];
  v11 = LODWORD(outPos.v[1]);
  v10 = outPos.v[1] - ps->origin.v[1];
  v12 = outPos.v[2] - ps->origin.v[2];
  *(float *)&v11 = fsqrt((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v12 * v12));
  _XMM1 = v11;
  v14 = *(float *)&v11 / pml->frametime;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
  }
  ps->velocity.v[0] = (float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * v14;
  ps->velocity.v[2] = (float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * v14;
  ps->velocity.v[1] = (float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * v14;
  v17 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( (v17->current.enabled & 4) != 0 && !pm->isExtrapolation )
  {
    v18 = DVARINT_mantle_debugLineTime;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    Mantle_DebugLine(pm->m_bgHandler, &ps->origin, &outPos, &colorYellow, v18->current.integer);
  }
  v19 = DVARBOOL_playerCharacterCollisionMantleVehicleWallFix;
  end = outPos;
  if ( !DVARBOOL_playerCharacterCollisionMantleVehicleWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleVehicleWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( !v19->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    goto LABEL_40;
  v20 = DVARBOOL_playerCharacterCollisionMantleWindowFix;
  v21 = pm->ps;
  if ( !DVARBOOL_playerCharacterCollisionMantleWindowFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleWindowFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v22 = !v20->current.enabled || (v21->mantleState.flags & 0x1000) != 0;
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&v21->movingPlatforms) || !v22 || end.v[0] == v21->origin.v[0] && end.v[1] == v21->origin.v[1] && end.v[2] == v21->origin.v[2] || (BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &v21->origin, &end, pm->bounds, v21->movingPlatforms.m_movingPlatformEntity, pm->tracemask & 0xFDFFBFFF, v21 != NULL), outResults.fraction == 1.0) || outResults.hitId != 2046 )
LABEL_40:
    ps->origin = outPos;
  v23 = pm->ps;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Mantle_SetTraceFlags(pm->m_trace);
  BgTrace::LegacyTrace(pm->m_trace, pm, &outResults, &v23->origin, &v23->origin, pm->bounds, v23->clientNum, 16);
  Mantle_RestoreTraceFlags(pm->m_trace);
  if ( BG_Glass_CanBreakGlass(&outResults) )
    BG_AddPredictableEventToPlayerstate(EV_BREAK_GLASS, 0, pm->cmd.serverTime, pm->weaponMap, v23);
  v24 = pm->ps;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4063, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  flags = v24->mantleState.flags;
  if ( (flags & 0x20) != 0 || (flags & 0x40) != 0 )
  {
    v28 = elapsedAnimTime;
  }
  else
  {
    v26 = DCONST_DVARFLT_mantle_land_time;
    if ( !DCONST_DVARFLT_mantle_land_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_land_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = (float)v6 * v26->current.value;
    v28 = elapsedAnimTime;
    if ( (int)v27 >= elapsedAnimTime )
      v24->mantleState.flags |= 0x40u;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    Mantle_ExecuteAnimScript(pm, v28, v6);
  if ( v8 < 1.0 )
  {
    Mantle_UpdateViewYaw(pm);
  }
  else
  {
    Mantle_MoveComplete(pm, pmla, v6, &outMantleSpline);
    v29 = DVARINT_mantle_debugLineTime;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    Mantle_DebugStar(pm->m_bgHandler, &ps->origin, &colorCyan, v29->current.integer);
    v30 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.integer )
    {
      v31 = j_va("Mantle End: (%.2f, %.2f, %.2f)\n", ps->origin.v[0], ps->origin.v[1], ps->origin.v[2]);
      Mantle_DebugPrint(2u, v31);
    }
  }
}

/*
==============
Mantle_MoveComplete
==============
*/
void Mantle_MoveComplete(pmove_t *pm, pml_t *pml, const int mantleLength, const BSplineRelaxedCBezier *mantleSpline)
{
  playerState_s *ps; 
  int flags; 
  const dvar_t *v9; 
  int v10; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4159, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4159, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4161, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4165, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::MANTLE ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::MANTLE )") )
    __debugbreak();
  ps->pm_flags.m_flags[0] &= ~0x20u;
  pm->m_flags &= ~0x40u;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, GameModeFlagValues::ms_mpValue, 0x18u);
  flags = ps->mantleState.flags;
  if ( (flags & 4) != 0 )
  {
    BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, ps);
    flags = ps->mantleState.flags;
  }
  Mantle_SetEndingVelocity(pm, (flags & 0x20) != 0, mantleSpline);
  vec = ps->velocity;
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
  v9 = DCONST_DVARFLT_mantle_max_vertical_end_velocity;
  if ( !DCONST_DVARFLT_mantle_max_vertical_end_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_max_vertical_end_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( vec.v[2] > v9->current.value )
  {
    LODWORD(vec.v[2]) = v9->current.integer;
    WorldUpReferenceFrame::ApplyReferenceFrameToVector(&pm->refFrame, &vec);
    ps->velocity = vec;
  }
  v10 = ps->mantleState.flags;
  if ( (v10 & 0x800) != 0 )
  {
    *(_QWORD *)ps->velocity.v = 0i64;
    ps->velocity.v[2] = 0.0;
    v10 = ps->mantleState.flags;
  }
  ps->mantleState.flags = v10 | 8;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    Mantle_ExecuteFinishedAnimScript(pm, pml);
}

/*
==============
Mantle_PlayerPushingIntoSurface
==============
*/
_BOOL8 Mantle_PlayerPushingIntoSurface(const playerState_s *ps, const BgHandler *pmoveHandler, const vec3_t *wishdir, const MantleResults *mresults)
{
  const dvar_t *v8; 
  double v9; 
  const dvar_t *v10; 
  WorldUpReferenceFrame v12; 

  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 371, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_mantle_requires_stick;
  if ( !DCONST_DVARBOOL_mantle_requires_stick && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_requires_stick") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
    return 0i64;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v12, ps, pmoveHandler);
  v9 = WorldUpReferenceFrame::Vec2Dot(&v12, &mresults->dir, wishdir);
  v10 = DCONST_DVARINT_mantle_required_stick_magnitude;
  if ( !DCONST_DVARINT_mantle_required_stick_magnitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_required_stick_magnitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  return (float)(*(float *)&v9 * mresults->wishMag) > (float)v10->current.integer;
}

/*
==============
Mantle_RestoreTraceFlags
==============
*/
void Mantle_RestoreTraceFlags(BgTrace *trace)
{
  const dvar_t *v2; 

  trace->m_flags &= ~0x80u;
  v2 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    trace->m_flags &= ~0x200u;
}

/*
==============
Mantle_SavePosOffsets
==============
*/
void Mantle_SavePosOffsets(pmove_t *pm, MantleResults *mresults)
{
  playerState_s *ps; 
  float v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  float v13; 
  float v14; 
  double v15; 
  float v16; 
  double v17; 
  float v18; 
  double v19; 
  vec3_t outVec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1416, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1416, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1417, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v5 = mresults->ledgePos.v[1] - mresults->startPos.v[1];
  v6 = mresults->ledgePos.v[2] - mresults->startPos.v[2];
  v7 = I_fclamp(mresults->ledgePos.v[0] - mresults->startPos.v[0], -110.0, 110.0);
  v8 = *(float *)&v7;
  v9 = I_fclamp(v5, -110.0, 110.0);
  v10 = *(float *)&v9;
  v11 = I_fclamp(v6, -110.0, 110.0);
  v12 = *(float *)&v11;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1243, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->mantleState.ledgePosOffset.v[0] = MSG_PackSignedFloat(v8, 110.0, 0xFu);
  ps->mantleState.ledgePosOffset.v[1] = MSG_PackSignedFloat(v10, 110.0, 0xFu);
  ps->mantleState.ledgePosOffset.v[2] = MSG_PackSignedFloat(*(float *)&v11, 110.0, 0xFu);
  v13 = mresults->endPos.v[1] - mresults->startPos.v[1];
  v14 = mresults->endPos.v[2] - mresults->startPos.v[2];
  v15 = I_fclamp(mresults->endPos.v[0] - mresults->startPos.v[0], -160.0, 160.0);
  v16 = *(float *)&v15;
  v17 = I_fclamp(v13, -160.0, 160.0);
  v18 = *(float *)&v17;
  v19 = I_fclamp(v14, -160.0, 160.0);
  ps->mantleState.endPosOffset.v[0] = MSG_PackSignedFloat(v16, 160.0, 0xFu);
  ps->mantleState.endPosOffset.v[1] = MSG_PackSignedFloat(v18, 160.0, 0xFu);
  ps->mantleState.endPosOffset.v[2] = MSG_PackSignedFloat(*(float *)&v19, 160.0, 0xFu);
  BG_GetMantleLedgePosOffset(ps, &outVec);
  if ( fsqrt((float)((float)((float)(outVec.v[1] - v10) * (float)(outVec.v[1] - v10)) + (float)((float)(outVec.v[0] - v8) * (float)(outVec.v[0] - v8))) + (float)((float)(outVec.v[2] - v12) * (float)(outVec.v[2] - v12))) > 0.125 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1437, ASSERT_TYPE_ASSERT, "(Vec3Distance( ledgePosOffset, ledgePosOffsetAfterQuantization ) <= LEDGE_ERROR_MARGIN)", "%s\n\tThe quantization fidelity for the mantle ledge offset is not high enough. Consider either increasing MANTLE_LEDGE_OFFSET_BITS or decreasing MANTLE_LEDGE_OFFSET_MAX", "Vec3Distance( ledgePosOffset, ledgePosOffsetAfterQuantization ) <= LEDGE_ERROR_MARGIN") )
    __debugbreak();
  BG_GetMantleEndPosOffset(ps, &outVec);
  if ( fsqrt((float)((float)((float)(outVec.v[1] - v18) * (float)(outVec.v[1] - v18)) + (float)((float)(outVec.v[0] - v16) * (float)(outVec.v[0] - v16))) + (float)((float)(outVec.v[2] - *(float *)&v19) * (float)(outVec.v[2] - *(float *)&v19))) > 0.125 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1442, ASSERT_TYPE_ASSERT, "(Vec3Distance( endPosOffset, endPosOffsetAfterQuantization ) <= END_ERROR_MARGIN)", "%s\n\tThe quantization fidelity for the mantle end offset is not high enough. Consider either increasing MANTLE_END_OFFSET_BITS or decreasing MANTLE_END_OFFSET_MAX", "Vec3Distance( endPosOffset, endPosOffsetAfterQuantization ) <= END_ERROR_MARGIN") )
    __debugbreak();
}

/*
==============
Mantle_SetConstantParameters
==============
*/
void Mantle_SetConstantParameters(pmove_t *pm, const MantleResults *mresults)
{
  playerState_s *ps; 
  double v5; 
  float v6; 
  double UpContribution; 
  float v8; 
  double v9; 
  int MantleTime; 
  int serverTime; 
  double LedgeHeight; 
  const dvar_t *v13; 
  int flags; 
  const dvar_t *v15; 
  vec3_t outVec; 
  BSplineRelaxedCBezier outMantleSpline; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1311, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1311, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1312, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v5 = I_fclamp(mresults->signedAngleBetweenMantleDirAndLookDir, -180.0, 180.0);
  ps->mantleState.compressedAnimData.angle = MSG_PackSignedFloat(*(float *)&v5, 180.0, 9u);
  BG_GetMantleEndPosOffset(ps, &outVec);
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &outVec);
  v6 = fsqrt((float)((float)(outVec.v[0] * outVec.v[0]) + (float)(outVec.v[1] * outVec.v[1])) + (float)(outVec.v[2] * outVec.v[2]));
  if ( v6 > 190.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1335, ASSERT_TYPE_ASSERT, "(mantleDistance <= 190.0f)", (const char *)&queryFormat, "mantleDistance <= MANTLE_MAX_DISTANCE") )
    __debugbreak();
  ps->mantleState.compressedAnimData.distance2D = MSG_PackUnsignedFloat(v6, 190.0, 8u);
  BG_GetMantleLedgePosOffset(ps, &outVec);
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &outVec);
  if ( *(float *)&UpContribution > 190.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1348, ASSERT_TYPE_ASSERT, "(mantleClimbHeight <= 190.0f)", (const char *)&queryFormat, "mantleClimbHeight <= MANTLE_MAX_DISTANCE") )
    __debugbreak();
  ps->mantleState.compressedAnimData.distanceZ = MSG_PackUnsignedFloat(*(float *)&UpContribution, 190.0, 8u);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&outMantleSpline);
  Mantle_BuildMotionPath(pm, &outMantleSpline);
  v8 = fsqrt((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1]));
  v9 = MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distanceZ, 190.0, 8u);
  MantleTime = Mantle_GetMantleTime(mresults->flags, *(const float *)&v9, outMantleSpline.totalLength, v8);
  serverTime = pm->cmd.serverTime;
  ps->mantleState.startTime = serverTime;
  ps->mantleState.endTime = serverTime + MantleTime;
  LedgeHeight = Mantle_GetLedgeHeight(ps);
  v13 = DCONST_DVARFLT_mantle_gesture_high_min_height;
  if ( !DCONST_DVARFLT_mantle_gesture_high_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_high_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( *(float *)&LedgeHeight >= v13->current.value )
    ps->mantleState.compressedAnimData.flags |= 4u;
  flags = mresults->flags;
  if ( (flags & 1) != 0 )
  {
    ps->mantleState.compressedAnimData.flags |= 2u;
    flags = mresults->flags;
  }
  if ( (flags & 0x800) != 0 )
  {
    ps->mantleState.compressedAnimData.flags |= 0x80u;
    flags = mresults->flags;
  }
  if ( (flags & 0x100) != 0 )
  {
    ps->mantleState.compressedAnimData.flags |= 8u;
  }
  else if ( (flags & 0x200) != 0 )
  {
    ps->mantleState.compressedAnimData.flags |= 0x10u;
  }
  else if ( (flags & 0x400) != 0 )
  {
    ps->mantleState.compressedAnimData.flags |= 0x20u;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    v15 = DCONST_DVARFLT_mantle_sprint_anim_cond_min_speed;
    if ( !DCONST_DVARFLT_mantle_sprint_anim_cond_min_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_sprint_anim_cond_min_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v8 >= v15->current.value )
      ps->mantleState.compressedAnimData.flags |= 0x40u;
  }
  if ( v8 < 210.0 )
  {
    if ( v8 < 170.0 )
      ps->mantleState.mantleSpeedAnimCond = (v8 >= 100.0) + 1;
    else
      ps->mantleState.mantleSpeedAnimCond = 3;
  }
  else
  {
    ps->mantleState.mantleSpeedAnimCond = 4;
  }
}

/*
==============
Mantle_SetEndingVelocity
==============
*/
void Mantle_SetEndingVelocity(pmove_t *pm, const bool willBeFalling, const BSplineRelaxedCBezier *mantleSpline)
{
  playerState_s *ps; 
  __int128 v7; 
  float v10; 
  float v11; 
  __int128 v12; 
  float v13; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  __int128 v25; 
  float v29; 
  __int128 v30; 
  __int128 v34; 
  float v37; 
  vec3_t outVec; 
  vec3_t v39; 
  vec3_t outPos; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4106, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( willBeFalling )
  {
    v7 = LODWORD(ps->velocity.v[0]);
    *(float *)&v7 = fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
    _XMM0 = v7;
    __asm { vminss  xmm7, xmm0, cs:MAX_MANTLE_EXIT_SPEED }
    BG_BSpline_RelaxedCBezier_Evaluate(mantleSpline, MANTLE_SLOPE_CALC_BEGIN_FRAC, &outPos);
    BG_BSpline_RelaxedCBezier_Evaluate(mantleSpline, 1.0, &v39);
    v10 = v39.v[0] - outPos.v[0];
    v12 = LODWORD(v39.v[1]);
    v11 = v39.v[1] - outPos.v[1];
    v13 = v39.v[2] - outPos.v[2];
    *(float *)&v12 = fsqrt((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v13 * v13));
    _XMM1 = v12;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm8, xmm0
    }
    v18 = 1.0 / *(float *)&_XMM0;
    v17 = 1.0 / *(float *)&_XMM0;
    if ( *(float *)&_XMM1 <= 0.000001 )
    {
      v22 = ps->velocity.v[2];
      v23 = ps->velocity.v[1];
      v24 = LODWORD(ps->velocity.v[0]);
      v25 = v24;
      *(float *)&v25 = fsqrt((float)((float)(*(float *)&v24 * *(float *)&v24) + (float)(v23 * v23)) + (float)(v22 * v22));
      _XMM3 = v25;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      v29 = 1.0 / *(float *)&_XMM0;
      v19 = v22 * (float)(1.0 / *(float *)&_XMM0);
      v21 = *(float *)&v24 * v29;
      v20 = v23 * v29;
    }
    else
    {
      v19 = v18 * v13;
      v20 = v18 * v11;
      v21 = v17 * v10;
    }
    ps->velocity.v[0] = *(float *)&_XMM7 * v21;
    ps->velocity.v[1] = v20 * *(float *)&_XMM7;
    ps->velocity.v[2] = *(float *)&_XMM7 * v19;
  }
  else
  {
    BG_GetMantleEndPosOffset(ps, &outVec);
    v30 = LODWORD(outVec.v[1]);
    *(float *)&v30 = fsqrt((float)((float)(*(float *)&v30 * *(float *)&v30) + (float)(outVec.v[0] * outVec.v[0])) + (float)(outVec.v[2] * outVec.v[2]));
    _XMM6 = v30;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
    }
    outVec.v[0] = outVec.v[0] * (float)(1.0 / *(float *)&_XMM0);
    outVec.v[1] = outVec.v[1] * (float)(1.0 / *(float *)&_XMM0);
    outVec.v[2] = outVec.v[2] * (float)(1.0 / *(float *)&_XMM0);
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &outVec);
    v34 = LODWORD(FLOAT_1000_0);
    *(float *)&v34 = (float)(1000.0 / (float)(ps->mantleState.endTime - ps->mantleState.startTime)) * *(float *)&_XMM6;
    _XMM2 = v34;
    __asm { vminss  xmm3, xmm2, cs:MAX_MANTLE_EXIT_SPEED }
    v37 = *(float *)&_XMM3 * outVec.v[0];
    *(float *)&_XMM0 = *(float *)&_XMM3 * outVec.v[1];
    *(_QWORD *)&ps->velocity.y = 0i64;
    ps->velocity.v[0] = v37;
    *(float *)&v34 = *(float *)&_XMM3 * outVec.v[2];
    ps->velocity.v[1] = *(float *)&_XMM0 + ps->velocity.v[1];
    ps->velocity.v[2] = *(float *)&v34 + ps->velocity.v[2];
  }
}

/*
==============
Mantle_SetOverFlagBasedOnSprintState
==============
*/
void Mantle_SetOverFlagBasedOnSprintState(pmove_t *pm, const pml_t *pml, MantleResults *mresults)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3060, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3060, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3062, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 451, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
      __debugbreak();
  }
  if ( (mresults->edgeFlags[0] & 0xA) != 2 && (mresults->flags & 0x801) == 0 && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) || PM_CanStartSprint(pm, pml, 0)) )
    mresults->flags |= 1u;
}

/*
==============
Mantle_SetTraceFlags
==============
*/
void Mantle_SetTraceFlags(BgTrace *trace)
{
  const dvar_t *v2; 

  trace->m_flags |= 0x80u;
  v2 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    trace->m_flags |= 0x200u;
}

/*
==============
Mantle_ShouldCheckForLedges
==============
*/
char Mantle_ShouldCheckForLedges(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmoveHandler, const MantleResults *mresults, const vec3_t *wishdir)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2702, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2703, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) )
    return 0;
  Mantle_CheckMinimumSpeed(ps, pmoveHandler, mresults, wishdir);
  return 1;
}

/*
==============
Mantle_SlowInputTurnRate
==============
*/
float Mantle_SlowInputTurnRate(const playerState_s *ps, const float inputDeltaYaw)
{
  const dvar_t *v4; 
  float value; 
  __int128 yaw_low; 
  bool v7; 
  float v9; 
  float v10; 
  double Float_Internal_DebugName; 
  double v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4348, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
    return inputDeltaYaw;
  v4 = DCONST_DVARFLT_mantle_view_yawcap;
  if ( !DCONST_DVARFLT_mantle_view_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_view_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  if ( value <= 0.0 )
    return 0.0;
  yaw_low = LODWORD(ps->mantleState.yaw);
  *(double *)&yaw_low = AngleDelta(*(const float *)&yaw_low, ps->viewangles.v[1]);
  if ( *(float *)&yaw_low < COERCE_FLOAT(LODWORD(value) ^ _xmm) || *(float *)&yaw_low > value )
    return 0.0;
  v7 = *(float *)&yaw_low < 0.0;
  _XMM1 = 0i64;
  if ( *(float *)&yaw_low > 0.0 )
  {
    if ( inputDeltaYaw < 0.0 )
    {
      _XMM1 = yaw_low;
      goto LABEL_18;
    }
    v7 = *(float *)&yaw_low < 0.0;
  }
  if ( v7 && inputDeltaYaw > 0.0 )
    _XMM1 = yaw_low & _xmm;
LABEL_18:
  if ( (ps->mantleState.flags & 0x800) != 0 || *(float *)&_XMM1 <= 0.0 )
    return inputDeltaYaw;
  v10 = 1.0 - (float)(*(float *)&_XMM1 / value);
  v9 = v10;
  if ( v10 < 0.0 || v10 > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4385, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( slowDownScaler ) && ( slowDownScaler ) <= ( 1.0f )", "slowDownScaler not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v10, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_slow_input_turn_rate_override, "mantle_slow_input_turn_rate_override");
  if ( *(float *)&Float_Internal_DebugName >= 0.0 )
  {
    v13 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_slow_input_turn_rate_override, "mantle_slow_input_turn_rate_override");
    v9 = *(float *)&v13;
  }
  return v9 * inputDeltaYaw;
}

/*
==============
Mantle_Start
==============
*/
void Mantle_Start(pmove_t *pm, MantleResults *mresults)
{
  playerState_s *ps; 
  float v5; 
  double v6; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  gestureAnimType_t MantleType; 
  unsigned int v11; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1650, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1650, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->mantleState.startPosition.v[0] = ps->origin.v[0];
  ps->mantleState.startPosition.v[1] = ps->origin.v[1];
  ps->mantleState.startPosition.v[2] = ps->origin.v[2];
  Mantle_SavePosOffsets(pm, mresults);
  Mantle_CalcFallingPosition(pm, mresults);
  Mantle_SavePosOffsets(pm, mresults);
  v5 = mresults->dir.v[1];
  vec.v[0] = mresults->dir.v[0];
  vec.v[2] = mresults->dir.v[2];
  vec.v[1] = v5;
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
  v6 = vectoyaw((const vec2_t *)&vec);
  ps->mantleState.yaw = *(float *)&v6;
  ps->mantleState.flags = mresults->flags;
  v7 = DVARBOOL_playerCharacterCollisionMantleFloorFix;
  if ( !DVARBOOL_playerCharacterCollisionMantleFloorFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleFloorFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    BGMovingPlatformClient::StartMantle(pm->movingPlatforms, ps, mresults->endGroundEnt);
  ps->mantleState.flags &= 0xFFFFEFEF;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1679, ASSERT_TYPE_ASSERT, "(!ps->pm_flags.TestFlag( PMoveFlagsCommon::MANTLE ))", (const char *)&queryFormat, "!ps->pm_flags.TestFlag( PMoveFlagsCommon::MANTLE )") )
    __debugbreak();
  ps->pm_flags.m_flags[0] |= 0x20u;
  Mantle_SetConstantParameters(pm, mresults);
  v8 = ps->mantleState.endTime - ps->mantleState.startTime;
  if ( v8 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1686, ASSERT_TYPE_ASSERT, "( mantleDuration ) > ( 0 )", "%s > %s\n\t%lli, %lli", "mantleDuration", "0", v8, 0i64) )
    __debugbreak();
  PM_Weapon_Mantle(pm, v8);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ps->eFlags, GameModeFlagValues::ms_mpValue, 0x18u);
  pm->mantleEndPos.v[0] = mresults->endPos.v[0];
  pm->mantleEndPos.v[1] = mresults->endPos.v[1];
  pm->mantleEndPos.v[2] = mresults->endPos.v[2];
  pm->m_flags |= 0x40u;
  pm->mantleDuration = v8;
  v9 = DVARBOOL_playerCharacterCollisionMantleFloorFix;
  if ( !DVARBOOL_playerCharacterCollisionMantleFloorFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleFloorFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
    BGMovingPlatformClient::StartMantle(pm->movingPlatforms, ps, mresults->endGroundEnt);
  MantleType = BG_Mantle_GetMantleType(ps);
  v11 = BG_PackMantleEventParm(pm->weaponMap, ps, ps->mantleState.soundFlavorPLR, ps->mantleState.soundFlavorNPC, MantleType);
  BG_AddPredictableEventToPlayerstate(EV_MANTLE, v11, pm->cmd.serverTime, pm->weaponMap, ps);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    Mantle_ExecuteAnimScript(pm, 0, v8);
  Mantle_DumpMotionPath(pm);
}

/*
==============
Mantle_UnpackAnimData
==============
*/
void Mantle_UnpackAnimData(const compressedAnimData_s *compressedData, characterAnimData_s *animDistances)
{
  double v4; 
  double v5; 
  double v6; 

  if ( !compressedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 293, ASSERT_TYPE_ASSERT, "(compressedData)", (const char *)&queryFormat, "compressedData") )
    __debugbreak();
  if ( !animDistances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 294, ASSERT_TYPE_ASSERT, "(animDistances)", (const char *)&queryFormat, "animDistances") )
    __debugbreak();
  animDistances->flags = compressedData->flags;
  animDistances->endScriptAnimTableIndex = compressedData->endScriptAnimTableIndex;
  v4 = MSG_UnpackUnsignedFloat(compressedData->distance2D, 190.0, 8u);
  animDistances->distance2D = *(float *)&v4;
  v5 = MSG_UnpackUnsignedFloat(compressedData->distanceZ, 190.0, 8u);
  animDistances->distanceZ = *(float *)&v5;
  v6 = MSG_UnpackSignedFloat(compressedData->angle, 180.0, 9u);
  animDistances->angle = *(float *)&v6;
}

/*
==============
Mantle_Update
==============
*/
void Mantle_Update(pmove_t *pm, pml_t *pml, const bool lastSprinting, const SprintState *lastSprintState)
{
  playerState_s *ps; 
  playerState_s *v9; 
  playerState_s *v10; 
  float v11; 
  float v12; 
  Physics_WorldId v13; 
  bool v14; 
  char v15; 
  const dvar_t *v16; 
  SprintState v17; 
  vec3_t vec; 
  vec3_t outWishDir; 
  trace_t results; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Mantle_Update");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3945, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3945, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  memset_0(&pml->mresults, 0, sizeof(pml->mresults));
  v9 = pm->ps;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2772, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2773, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( pml == (pml_t *)-140i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2774, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  if ( !pm->CanSkipFindMantleSurface(pm) || (v9->mantleState.flags & 0x10) != 0 || (pm->cmd.buttons & 0x100) != 0 || Mantle_CanAutoTriggerMantle(pm, pml, 0) )
  {
    Mantle_CalcWishDir(pm, pml, &outWishDir, &pml->mresults.wishMag);
    if ( ps->groundEntityNum != 2047 )
      ps->mantleState.flags &= ~0x80u;
    pml->mresults.closeToGround = 0;
    v10 = pm->ps;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2723, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v10->groundEntityNum != 2047 )
      goto LABEL_27;
    v11 = v10->origin.v[1];
    v12 = v10->origin.v[2];
    vec.v[0] = v10->origin.v[0];
    vec.v[1] = v11;
    vec.v[2] = v12;
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, -36.0, &vec);
    Mantle_SetTraceFlags(pm->m_trace);
    BgTrace::LegacyTrace(pm->m_trace, pm, &results, &v10->origin, &vec, &bounds_origin, v10->clientNum, pm->tracemask);
    Mantle_RestoreTraceFlags(pm->m_trace);
    if ( results.fraction != 1.0 )
LABEL_27:
      pml->mresults.closeToGround = 1;
    v13 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
    if ( Mantle_CanMantle(pm, pml, pm->weaponMap, pm->ps, v13, pm->m_bgHandler, pm->tracemask, &pml->mresults, &outWishDir, pm->cmd.serverTime) )
    {
      v17 = *lastSprintState;
      v15 = Mantle_Activate(pm, pml, &pml->mresults, lastSprinting, &v17, &outWishDir);
      if ( !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
        goto LABEL_38;
      v14 = v15;
    }
    else
    {
      if ( !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
        goto LABEL_38;
      v14 = 0;
    }
    Mantle_DebugDrawTraces(pm, &pml->mresults, v14);
    v16 = DVARBOOL_mantle_debug_traces_once;
    if ( !DVARBOOL_mantle_debug_traces_once && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug_traces_once") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
      Dvar_SetBool_Internal(DVARBOOL_mantle_debug_traces_once, 0);
  }
LABEL_38:
  Sys_ProfEndNamedEvent();
}

/*
==============
Mantle_UpdateSprintState
==============
*/
void Mantle_UpdateSprintState(pmove_t *pm, const pml_t *pml, MantleResults *mresults, const bool lastSprinting, const SprintState *lastSprintState)
{
  playerState_s *ps; 
  bool v9; 
  int sprintStartMaxLength; 
  vec3_t *p_velocity; 
  WorldUpReferenceFramePM *p_refFrame; 
  double v13; 
  const dvar_t *v14; 
  float value; 
  const dvar_t *v16; 
  float v17; 
  double UpContribution; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3392, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3392, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3394, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
  if ( lastSprinting && !v9 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) )
      PM_ExitAimDownSight(pm);
    ps->pm_flags.m_flags[0] &= ~0x800u;
    ps->pm_flags.m_flags[0] |= 0x100000u;
    sprintStartMaxLength = lastSprintState->sprintStartMaxLength;
    *(__m256i *)&ps->sprintState.sprintButtonUpRequired = *(__m256i *)&lastSprintState->sprintButtonUpRequired;
    ps->sprintState.sprintStartMaxLength = sprintStartMaxLength;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    p_velocity = &ps->velocity;
    p_refFrame = &pm->refFrame;
    v13 = WorldUpReferenceFrame::Vec2Dot(p_refFrame, &mresults->dir, p_velocity);
    v14 = DCONST_DVARFLT_mantle_sprint_min_speed_threshold;
    if ( !DCONST_DVARFLT_mantle_sprint_min_speed_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_sprint_min_speed_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
    if ( value < 0.0 || *(float *)&v13 >= value )
    {
      v16 = DCONST_DVARFLT_mantle_sprint_min_speed;
      if ( !DCONST_DVARFLT_mantle_sprint_min_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_sprint_min_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      v17 = v16->current.value;
      if ( *(float *)&v13 < v17 )
      {
        UpContribution = WorldUpReferenceFrame::GetUpContribution(p_refFrame, p_velocity);
        p_velocity->v[0] = v17 * mresults->dir.v[0];
        p_velocity->v[1] = v17 * mresults->dir.v[1];
        p_velocity->v[2] = v17 * mresults->dir.v[2];
        WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&UpContribution, p_velocity);
      }
    }
  }
}

/*
==============
Mantle_UpdateViewYaw
==============
*/
void Mantle_UpdateViewYaw(pmove_t *pm)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  playerState_s *ps; 
  const dvar_t *v6; 
  int v7; 
  float v8; 
  float yaw; 
  const dvar_t *v10; 
  vec3_t outVec; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4305, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4305, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->mantleState.flags & 0x800) != 0 )
  {
    v14 = v1;
    v13 = v2;
    v12 = v3;
    BG_GetMantleLedgePosOffset(ps, &outVec);
    if ( (float)((float)((float)((float)(ps->origin.v[1] - (float)(ps->mantleState.startPosition.v[1] + outVec.v[1])) * (float)(ps->mantleState.startPosition.v[1] - (float)(ps->mantleState.startPosition.v[1] + outVec.v[1]))) + (float)((float)(ps->mantleState.startPosition.v[0] - (float)(ps->mantleState.startPosition.v[0] + outVec.v[0])) * (float)(ps->origin.v[0] - (float)(ps->mantleState.startPosition.v[0] + outVec.v[0])))) + (float)((float)(ps->origin.v[2] - (float)(ps->mantleState.startPosition.v[2] + outVec.v[2])) * (float)(ps->mantleState.startPosition.v[2] - (float)(ps->mantleState.startPosition.v[2] + outVec.v[2])))) <= 0.0 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x10u) )
    {
      v6 = DCONST_DVARINT_mantle_ladder_yaw_extra_time;
      if ( !DCONST_DVARINT_mantle_ladder_yaw_extra_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_yaw_extra_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      v7 = v6->current.integer + ps->mantleState.endTime - ps->serverTime;
      v8 = ps->viewangles.v[0];
      yaw = ps->mantleState.yaw;
      v10 = DCONST_DVARINT_mantle_ladder_yaw_ease_mode;
      outVec.v[0] = v8;
      outVec.v[1] = yaw + 180.0;
      if ( !DCONST_DVARINT_mantle_ladder_yaw_ease_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_yaw_ease_mode") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      PM_StartViewAngleTransition(pm, v7, (EViewAngleEaseMode)v10->current.integer, (EViewAngleEaseMode)v10->current.integer, (const vec2_t *)&outVec, 2);
    }
  }
}

/*
==============
Mantle_WantsToActivate
==============
*/
char Mantle_WantsToActivate(pmove_t *pm, pml_t *pml, const MantleResults *mresults, const vec3_t *wishdir, bool *outClearMantleHint)
{
  playerState_s *ps; 
  playerState_s *v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2814, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2814, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outClearMantleHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2815, ASSERT_TYPE_ASSERT, "(outClearMantleHint)", (const char *)&queryFormat, "outClearMantleHint") )
    __debugbreak();
  *outClearMantleHint = 0;
  if ( (pm->cmd.buttons & 0xC0) != 0 || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) || Mantle_WillReachLedgeWithoutMantle(pm, mresults) )
  {
    *outClearMantleHint = 1;
  }
  else
  {
    if ( (pm->cmd.buttons & 0x100) != 0 && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_requires_stick, "mantle_requires_stick") || (pm->cmd.buttons & 0x100) != 0 && Mantle_PlayerPushingIntoSurface(pm->ps, pm->m_bgHandler, wishdir, mresults) || (pm->cmd.buttons & 0x400000000000000i64) != 0 && ps->groundEntityNum == 2047 && Mantle_PlayerPushingIntoSurface(pm->ps, pm->m_bgHandler, wishdir, mresults) || (pm->cmd.buttons & 0x100) != 0 && Mantle_IsLadder(mresults) || (ps->mantleState.flags & 0x10) != 0 )
      return 1;
    v10 = pm->ps;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2803, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2804, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
      __debugbreak();
    if ( Mantle_CanAutoTriggerMantle(pm, pml, mresults->closeToGround != 0) && Mantle_PlayerPushingIntoSurface(v10, pm->m_bgHandler, wishdir, mresults) )
      return 1;
  }
  return 0;
}

/*
==============
Mantle_WillReachLedgeWithoutMantle
==============
*/
_BOOL8 Mantle_WillReachLedgeWithoutMantle(pmove_t *pm, const MantleResults *mresults)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  playerState_s *ps; 
  const dvar_t *v8; 
  float v10; 
  double JumpHeight; 
  double Velocity; 
  WorldUpReferenceFramePM *p_refFrame; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  double UpContribution; 
  float v21; 
  float v22; 
  double v23; 
  float v24; 
  const dvar_t *v25; 
  vec3_t v26; 
  vec3_t vec; 
  vec3_t v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 389, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 389, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_mantle_check_trajectory;
  if ( !DCONST_DVARBOOL_mantle_check_trajectory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_trajectory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
    return 0i64;
  v31 = v2;
  v30 = v3;
  v29 = v4;
  v10 = 0.0;
  if ( ps->groundEntityNum != 2047 )
  {
    JumpHeight = Jump_GetJumpHeight(ps);
    Velocity = Jump_GetVelocity(pm, *(float *)&JumpHeight);
    v10 = *(float *)&Velocity;
  }
  vec = ps->origin;
  p_refFrame = &pm->refFrame;
  WorldUpReferenceFrame::SetUpContribution(p_refFrame, 0.0, &vec);
  v14 = mresults->ledgePos.v[1];
  v26.v[0] = mresults->ledgePos.v[0];
  v15 = mresults->ledgePos.v[2];
  v26.v[1] = v14;
  v26.v[2] = v15;
  WorldUpReferenceFrame::SetUpContribution(p_refFrame, 0.0, &v26);
  v16 = v26.v[0] - vec.v[0];
  v17 = v26.v[2] - vec.v[2];
  v18 = v26.v[1] - vec.v[1];
  v28 = ps->velocity;
  WorldUpReferenceFrame::SetUpContribution(p_refFrame, 0.0, &v28);
  v19 = (float)(1.0 / fsqrt((float)((float)(v28.v[1] * v28.v[1]) + (float)(v28.v[0] * v28.v[0])) + (float)(v28.v[2] * v28.v[2]))) * fsqrt((float)((float)(v18 * v18) + (float)(v16 * v16)) + (float)(v17 * v17));
  UpContribution = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->velocity);
  v21 = (float)((float)(*(float *)&UpContribution + v10) * v19) - (float)((float)((float)((float)ps->gravity * 0.5) * v19) * v19);
  v22 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(WorldUpReferenceFrame::GetUpContribution(p_refFrame, &mresults->ledgePos)));
  v23 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->origin);
  v24 = v22 - *(float *)&v23;
  if ( v24 < 0.0 )
    return 1i64;
  v25 = DCONST_DVARFLT_mantle_prevention_jump_height_delta;
  if ( !DCONST_DVARFLT_mantle_prevention_jump_height_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_prevention_jump_height_delta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  return (float)(v21 - v24) >= v25->current.value;
}

/*
==============
PM_Mantle_ValidateMantleOnMover
==============
*/
char PM_Mantle_ValidateMantleOnMover(const pmove_t *pm, const vec3_t *targetOrigin)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  playerState_s *ps; 
  bool v7; 
  trace_t outResults; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4207, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v4 = DVARBOOL_playerCharacterCollisionMantleVehicleWallFix;
  if ( !DVARBOOL_playerCharacterCollisionMantleVehicleWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleVehicleWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    return 1;
  v5 = DVARBOOL_playerCharacterCollisionMantleWindowFix;
  ps = pm->ps;
  if ( !DVARBOOL_playerCharacterCollisionMantleWindowFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleWindowFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v7 = !v5->current.enabled || (ps->mantleState.flags & 0x1000) != 0;
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) && v7 && (targetOrigin->v[0] != ps->origin.v[0] || targetOrigin->v[1] != ps->origin.v[1] || targetOrigin->v[2] != ps->origin.v[2]) && (BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, targetOrigin, pm->bounds, ps->movingPlatforms.m_movingPlatformEntity, pm->tracemask & 0xFDFFBFFF, ps != NULL), outResults.fraction != 1.0) && outResults.hitId == 2046 )
    return 0;
  else
    return 1;
}

