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
  bool v5; 
  unsigned int v6; 
  int v9; 
  int flags; 
  int v11; 
  __int64 result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1236, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1172, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  v5 = (ps->mantleState.flags & 0x800) != 0;
  v6 = (unsigned int)ps->mantleState.compressedAnimData.flags >> 1;
  *(double *)&_XMM0 = Mantle_GetLedgeHeight(ps);
  _RBP = DCONST_DVARFLT_mantle_gesture_extreme_min_height;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_mantle_gesture_extreme_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_extreme_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  v9 = 0;
  __asm { vcomiss xmm6, dword ptr [rbp+28h] }
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
  if ( v5 )
  {
    LOBYTE(v9) = 1;
    result = (unsigned int)(v9 + 36);
  }
  else
  {
    result = (unsigned int)GESTURE_TYPE_MAP[16 * (v6 & 1) + 3 + v11];
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
MantleDebugDrawData_DrawCapsule
==============
*/
void MantleDebugDrawData_DrawCapsule(const BgHandler *handler, const vec3_t *origin, const Bounds *capsuleBounds, const vec4_t *color)
{
  BgHandler_vtbl *v9; 
  int v14[4]; 

  _RSI = capsuleBounds;
  _RBX = origin;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 153, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
  }
  v9 = handler->__vftable;
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+0Ch]
    vmovss  [rsp+88h+var_48], xmm0
    vmovss  xmm0, dword ptr [rsi+14h]
    vmulss  xmm2, xmm0, cs:__real@40000000
    vmovss  [rsp+88h+var_44], xmm1
    vaddss  xmm1, xmm2, dword ptr [rbx+8]
    vmovss  [rsp+88h+var_40], xmm1
  }
  ((void (__fastcall *)(const BgHandler *, const vec3_t *, int *))v9->DebugCylinder)(handler, _RBX, v14);
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
  char v18; 
  const Bounds *bounds; 
  int contentMask; 
  const dvar_t *v22; 
  bool outClearMantleHint; 
  SprintState v24; 
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
  _RAX = lastSprintState;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  v24.sprintStartMaxLength = lastSprintState->sprintStartMaxLength;
  __asm { vmovups [rsp+128h+var_D8], ymm0 }
  Mantle_UpdateSprintState(pm, pml, mresults, lastSprinting, &v24);
  if ( !mresults->endPosCalculated )
  {
    Mantle_SetOverFlagBasedOnSprintState(pm, pml, mresults);
    mresults->overPosFound = Mantle_CalcEndPos(pm, mresults);
  }
  if ( (mresults->edgeFlags[0] & 0xA) == 8 )
  {
    v18 = 1;
    if ( !mresults->overPosFound )
    {
      pm->SetMantleHint(pm, 0);
      return 0;
    }
    mresults->flags |= 1u;
  }
  else
  {
    v18 = 0;
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
  v22 = DCONST_DVARMPBOOL_mantle_force_over_always_use_crouch_view_height;
  if ( !DCONST_DVARMPBOOL_mantle_force_over_always_use_crouch_view_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_force_over_always_use_crouch_view_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled && v18 )
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
  int flags; 
  MantleMotionPathParams params; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 952, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 952, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm1, dword ptr [rbx+394h] }
  *(_QWORD *)&params.endPosOffset.y = 0i64;
  *((_DWORD *)&params.endPosOffset + 3) = 0;
  *(_DWORD *)(&params.drawDebug + 1) = 0;
  *(&params.drawDebug + 5) = 0;
  params.bgHandler = pm->m_bgHandler;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  params.isOver = _RBX->mantleState.flags & 1;
  flags = _RBX->mantleState.flags;
  __asm
  {
    vmovdqu xmmword ptr [rsp+88h+params.ledgeOffset], xmm0
    vmovss  xmm0, dword ptr [rbx+390h]
    vmovss  dword ptr [rsp+88h+params.startPos], xmm0
    vmovss  xmm0, dword ptr [rbx+398h]
  }
  params.isLadder = (flags & 0x800) != 0;
  __asm
  {
    vmovss  dword ptr [rsp+88h+params.startPos+4], xmm1
    vmovss  dword ptr [rsp+88h+params.startPos+8], xmm0
  }
  BG_GetMantleLedgePosOffset(_RBX, &params.ledgeOffset);
  BG_GetMantleEndPosOffset(_RBX, &params.endPosOffset);
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
  bool v22; 
  const dvar_t *v30; 
  const dvar_t *v32; 
  const dvar_t *v37; 
  unsigned int v41; 
  const dvar_t *v42; 
  const dvar_t *v44; 
  const dvar_t *v49; 
  const dvar_t *v53; 
  vec3_t *p_points; 
  __int64 v61; 
  const dvar_t *v62; 
  float outStartToLedgePointBias; 
  float outStartToLedgePointHeight; 
  vec3_t points; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  _R14 = params;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
  }
  if ( !outMantleSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 845, ASSERT_TYPE_ASSERT, "(outMantleSpline)", (const char *)&queryFormat, "outMantleSpline") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  xmm2, dword ptr [r14]
    vaddss  xmm7, xmm1, dword ptr [r14+10h]
    vaddss  xmm8, xmm0, dword ptr [r14+14h]
    vaddss  xmm10, xmm1, dword ptr [r14+1Ch]
    vaddss  xmm11, xmm0, dword ptr [r14+20h]
    vaddss  xmm6, xmm2, dword ptr [r14+0Ch]
    vaddss  xmm9, xmm2, dword ptr [r14+18h]
    vmovss  dword ptr [rbp+57h+points+4], xmm1
    vmovss  xmm1, cs:__real@40a00000
    vmovss  dword ptr [rbp+57h+points+8], xmm0
    vmovss  xmm0, cs:__real@3f000000
    vmovss  [rsp+120h+outStartToLedgePointBias], xmm0
    vmovss  [rsp+120h+outStartToLedgePointHeight], xmm1
    vmovss  dword ptr [rsp+120h+points], xmm2
  }
  Mantle_BuildMotionPathWithParams_GetSplineParams(_R14, &outStartToLedgePointBias, &outStartToLedgePointHeight);
  v22 = !_R14->isLadder;
  __asm
  {
    vsubss  xmm0, xmm6, dword ptr [r14]
    vmulss  xmm0, xmm0, [rsp+120h+outStartToLedgePointBias]
    vaddss  xmm5, xmm0, dword ptr [r14]
    vsubss  xmm1, xmm7, dword ptr [r14+4]
    vmulss  xmm0, xmm1, [rsp+120h+outStartToLedgePointBias]
    vaddss  xmm3, xmm0, dword ptr [r14+4]
    vaddss  xmm4, xmm8, [rsp+120h+outStartToLedgePointHeight]
    vmovss  [rbp+57h+var_C8], xmm3
    vmovss  [rbp+57h+var_CC], xmm5
    vmovss  [rbp+57h+var_C4], xmm4
  }
  if ( v22 )
  {
    if ( _R14->isOver )
    {
      v42 = DCONST_DVARFLT_mantle_spline_ledge_point_height;
      if ( !DCONST_DVARFLT_mantle_spline_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ledge_point_height") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v42);
      __asm { vaddss  xmm0, xmm8, dword ptr [rbx+28h] }
      v44 = DCONST_DVARFLT_mantle_spline_ledge_to_end_point_bias;
      __asm
      {
        vmovss  [rbp+57h+var_C0], xmm6
        vmovss  [rbp+57h+var_BC], xmm7
        vmovss  [rbp+57h+var_B8], xmm0
      }
      if ( !DCONST_DVARFLT_mantle_spline_ledge_to_end_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ledge_to_end_point_bias") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      __asm
      {
        vsubss  xmm0, xmm9, xmm6
        vmulss  xmm1, xmm0, dword ptr [rbx+28h]
        vsubss  xmm2, xmm10, xmm7
        vmulss  xmm0, xmm2, dword ptr [rbx+28h]
      }
      v49 = DCONST_DVARFLT_mantle_spline_ledge_to_end_point_height;
      __asm
      {
        vaddss  xmm6, xmm1, xmm6
        vaddss  xmm7, xmm0, xmm7
      }
      if ( !DCONST_DVARFLT_mantle_spline_ledge_to_end_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ledge_to_end_point_height") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [rbx+28h]
        vmovss  [rbp+57h+var_AC], xmm0
        vmovss  [rbp+57h+var_B4], xmm6
        vmovss  [rbp+57h+var_B0], xmm7
        vmovss  [rbp+57h+var_A8], xmm9
        vmovss  [rbp+57h+var_A4], xmm10
        vmovss  [rbp+57h+var_A0], xmm11
      }
      v41 = 5;
    }
    else
    {
      __asm
      {
        vmovss  [rbp+57h+var_C0], xmm6
        vmovss  [rbp+57h+var_BC], xmm7
        vmovss  [rbp+57h+var_B8], xmm8
      }
      v41 = 3;
    }
  }
  else
  {
    v30 = DCONST_DVARFLT_mantle_spline_ladder_point_height;
    if ( !DCONST_DVARFLT_mantle_spline_ladder_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ladder_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    __asm { vaddss  xmm0, xmm8, dword ptr [rbx+28h] }
    v32 = DCONST_DVARFLT_mantle_spline_ladder_to_end_point_bias;
    __asm
    {
      vmovss  [rbp+57h+var_C0], xmm6
      vmovss  [rbp+57h+var_BC], xmm7
      vmovss  [rbp+57h+var_B8], xmm0
    }
    if ( !DCONST_DVARFLT_mantle_spline_ladder_to_end_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ladder_to_end_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    __asm
    {
      vsubss  xmm0, xmm9, xmm6
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
      vsubss  xmm2, xmm10, xmm7
      vmulss  xmm0, xmm2, dword ptr [rbx+28h]
    }
    v37 = DCONST_DVARFLT_mantle_spline_ladder_to_end_point_height;
    __asm
    {
      vaddss  xmm6, xmm1, xmm6
      vaddss  xmm7, xmm0, xmm7
    }
    if ( !DCONST_DVARFLT_mantle_spline_ladder_to_end_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_spline_ladder_to_end_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    __asm
    {
      vaddss  xmm0, xmm8, dword ptr [rbx+28h]
      vmovss  [rbp+57h+var_AC], xmm0
      vmovss  [rbp+57h+var_B4], xmm6
      vmovss  [rbp+57h+var_B0], xmm7
      vmovss  [rbp+57h+var_A8], xmm9
      vmovss  [rbp+57h+var_A4], xmm10
      vmovss  [rbp+57h+var_A0], xmm11
    }
    v41 = 5;
  }
  BG_BSpline_RelaxedCBezier_Build(&points, v41, 0, 0, outMantleSpline);
  v53 = DCONST_DVARINT_mantle_debug;
  __asm
  {
    vmovaps xmm11, [rsp+120h+var_98+8]
    vmovaps xmm10, [rsp+120h+var_88+8]
    vmovaps xmm9, [rsp+120h+var_78+8]
    vmovaps xmm8, [rsp+120h+var_68+8]
    vmovaps xmm7, [rsp+120h+var_58+8]
    vmovaps xmm6, [rsp+120h+var_48+8]
  }
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( (v53->current.enabled & 4) != 0 && _R14->drawDebug )
  {
    p_points = &points;
    v61 = v41;
    do
    {
      v62 = DVARINT_mantle_debugLineTime;
      if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v62);
      Mantle_DebugStar(_R14->bgHandler, p_points++, &colorCyan, v62->current.integer);
      --v61;
    }
    while ( v61 );
  }
}

/*
==============
Mantle_BuildMotionPathWithParams_GetSplineParams
==============
*/
void Mantle_BuildMotionPathWithParams_GetSplineParams(const MantleMotionPathParams *params, float *outStartToLedgePointBias, float *outStartToLedgePointHeight)
{
  const char *v76; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  _EAX = params->isLadder;
  _RBX = params;
  __asm
  {
    vmovss  xmm6, cs:__real@42900000
    vmovss  xmm7, cs:__real@42000000
  }
  _ECX = 0;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovd   xmm0, eax
    vblendvps xmm4, xmm7, xmm6, xmm2
    vmovss  xmm2, cs:__real@41c00000
    vmovd   xmm1, ecx
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  [rsp+120h+var_E0], xmm4
    vxorps  xmm9, xmm9, xmm9
    vblendvps xmm0, xmm9, xmm2, xmm3
    vmovaps xmm1, xmm0; min
    vmovss  [rsp+120h+var_E0], xmm0
    vmovss  xmm0, dword ptr [rbx+14h]; val
    vmovaps xmm2, xmm4; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovups xmm1, cs:__xmm@42400000422000004200000041c00000
    vmovss  xmm2, cs:__real@42600000
    vmovups [rbp+57h+var_A8], xmm1
    vmovups xmm1, cs:__xmm@41c00000418000004100000000000000
    vmovups [rbp+57h+var_90], xmm1
    vmovss  [rbp+57h+var_98], xmm2
    vmovss  [rbp+57h+var_94], xmm6
    vmovss  [rbp+57h+var_80], xmm7
    vmovss  [rbp+57h+var_7C], xmm7
    vmovaps xmm8, xmm0
  }
  if ( _RBX->isLadder )
  {
    _RSI = DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_0_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rsp+120h+var_D8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_8_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_D4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_16_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_D0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_24_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_CC], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_32_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_C8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_32_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_C4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_0_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_C0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_8_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_BC], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_16_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_24_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_32_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_32_spline_start_to_ledge_point_height") )
      __debugbreak();
    goto LABEL_112;
  }
  if ( _RBX->isOver )
  {
    _RSI = DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_24_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rsp+120h+var_D8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_32_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_D4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_40_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_D0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_48_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_CC], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_56_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_C8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_72_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_C4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_24_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_C0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_32_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_BC], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_40_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_48_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_56_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_height )
    {
      v76 = "mantle_over_72_spline_start_to_ledge_point_height";
      goto LABEL_110;
    }
  }
  else
  {
    _RSI = DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_bias;
    if ( !DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_24_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rsp+120h+var_D8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_32_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_D4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_40_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_D0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_48_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_CC], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_56_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_bias;
    __asm { vmovss  [rbp+57h+var_C8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_72_spline_start_to_ledge_point_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_C4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_24_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_C0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_32_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_BC], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_40_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B8], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_48_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B4], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_56_spline_start_to_ledge_point_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_height;
    __asm { vmovss  [rbp+57h+var_B0], xmm0 }
    if ( !DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_height )
    {
      v76 = "mantle_on_72_spline_start_to_ledge_point_height";
LABEL_110:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v76) )
        __debugbreak();
    }
  }
LABEL_112:
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovss  [rbp+57h+var_AC], xmm0
  }
  JUMPOUT(0x140FF5CD0i64);
}

/*
==============
Mantle_CalcEndPos
==============
*/
bool Mantle_CalcEndPos(pmove_t *pm, MantleResults *mresults)
{
  playerState_s *ps; 
  char v14; 
  bool result; 
  int suitIndex; 
  char v23; 
  bool v24; 
  int contentMask; 
  bool startsolid; 
  int v63; 
  bool v64; 
  bool v73; 
  bool v81; 
  vec3_t vec; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 
  Bounds v101; 
  char v107; 

  __asm
  {
    vmovaps [rsp+190h+var_70], xmm10
    vmovaps [rsp+190h+var_80], xmm11
  }
  _RBX = DCONST_DVARFLT_mantle_over_height_offset;
  _RDI = mresults;
  if ( !DCONST_DVARFLT_mantle_over_height_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_height_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm10, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mantle_end_height_tolerance;
  if ( !DCONST_DVARFLT_mantle_end_height_tolerance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_end_height_tolerance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm11, dword ptr [rbx+28h] }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 495, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 495, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 451, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v14 = _RDI->edgeFlags[0] & 0xA;
  if ( (v14 == 8 || (_RDI->flags & 0x801) != 0) && v14 != 2 )
  {
    _RDI->debugDraw.overFlags |= 1u;
    suitIndex = ps->suitIndex;
    __asm
    {
      vmovaps [rsp+190h+var_40], xmm6
      vmovaps [rsp+190h+var_50], xmm7
      vmovaps [rsp+190h+var_60], xmm8
    }
    _RAX = BG_Suit_GetBounds(suitIndex, PM_EFF_STANCE_DUCKED);
    _RBX = DCONST_DVARMPFLT_mantle_over_forward_trace_capsule_height;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+90h+var_A0.midPoint], xmm1
      vmovsd  xmm0, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+90h+var_A0.halfSize+4], xmm0
      vmovsd  qword ptr [rbp+90h+var_120.halfSize+4], xmm0
      vmovups xmmword ptr [rsp+190h+var_120.midPoint], xmm1
    }
    if ( !DCONST_DVARMPFLT_mantle_over_forward_trace_capsule_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_forward_trace_capsule_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm0, xmm6
    }
    if ( !(v23 | v24) )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f000000
        vmovss  dword ptr [rbp+90h+var_120.halfSize+8], xmm0
        vmovss  dword ptr [rsp+190h+var_120.midPoint+8], xmm0
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+18h]
      vmovss  xmm2, dword ptr [rdi+1Ch]
      vmovss  dword ptr [rsp+190h+start], xmm0
      vmovss  xmm0, dword ptr [rdi+20h]
      vmovss  dword ptr [rsp+190h+start+8], xmm0
      vmovss  dword ptr [rsp+190h+start+4], xmm2
    }
    *(double *)&_XMM0 = WorldUpReferenceFrame::Vec2Dot(&pm->refFrame, &_RDI->dir, &ps->velocity);
    __asm
    {
      vmovss  xmm2, cs:__real@43960000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _R12 = DCONST_DVARFLT_mantle_min_over_dist;
    __asm { vmulss  xmm8, xmm0, cs:__real@3b5a740e }
    if ( !DCONST_DVARFLT_mantle_min_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_min_over_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R12);
    __asm { vmovss  xmm6, dword ptr [r12+28h] }
    _R12 = DCONST_DVARFLT_mantle_max_over_dist;
    if ( !DCONST_DVARFLT_mantle_max_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_max_over_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R12);
    v24 = (_RDI->edgeFlags[0] & 4) == 0;
    __asm
    {
      vmovss  xmm0, dword ptr [r12+28h]
      vmovss  xmm7, cs:__real@3f800000
      vmaxss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm8
      vsubss  xmm0, xmm7, xmm8
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm3, dword ptr [rdi+4]
      vmulss  xmm2, xmm3, dword ptr [rdi]
      vaddss  xmm0, xmm2, dword ptr [rsp+190h+start]
      vmovss  dword ptr [rsp+190h+vec], xmm0
      vaddss  xmm0, xmm1, dword ptr [rsp+190h+start+4]
      vmulss  xmm1, xmm3, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+190h+vec+4], xmm0
      vaddss  xmm0, xmm1, dword ptr [rsp+190h+start+8]
      vmovss  dword ptr [rsp+190h+vec+8], xmm0
    }
    if ( !v24 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+60h]
        vmovss  xmm1, dword ptr [rdi+64h]
        vmovss  dword ptr [rsp+190h+vec], xmm0
        vmovss  xmm0, dword ptr [rdi+68h]
        vmovss  dword ptr [rsp+190h+vec+8], xmm0
        vmovss  dword ptr [rsp+190h+vec+4], xmm1
      }
    }
    __asm { vmovaps xmm1, xmm10; height }
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+190h+var_120.midPoint]
      vmovsd  xmm1, qword ptr [rbp+90h+var_120.halfSize+4]
    }
    startsolid = results.startsolid;
    __asm
    {
      vmovups xmmword ptr [rdi+0FCh], xmm0
      vmovss  xmm0, dword ptr [rsp+190h+start]
      vmovsd  qword ptr [rdi+10Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+190h+start+4]
      vmovss  dword ptr [rdi+114h], xmm0
      vmovss  xmm0, dword ptr [rsp+190h+start+8]
      vmovss  dword ptr [rdi+118h], xmm1
      vmovss  xmm1, dword ptr [rsp+190h+vec]
      vmovss  dword ptr [rdi+11Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+190h+vec+4]
      vmovss  dword ptr [rdi+120h], xmm1
      vmovss  xmm1, dword ptr [rsp+190h+vec+8]
      vmovss  dword ptr [rdi+124h], xmm0
      vmovss  xmm0, [rbp+90h+results.fraction]
      vmovss  dword ptr [rdi+128h], xmm1
    }
    _RDI->debugDraw.ledgeForwardCapsuleSweepStartSolid = startsolid;
    __asm { vmovss  dword ptr [rdi+12Ch], xmm0 }
    if ( startsolid )
    {
      if ( !Mantle_EntityIsOwnedByPlayer(ps, pm->m_bgHandler, results.hitType, results.hitId) )
      {
        v63 = 4;
        if ( results.startsolid )
          v63 = 2;
        _RDI->debugDraw.overFlags |= v63;
        goto LABEL_48;
      }
    }
    else
    {
      __asm { vcomiss xmm0, xmm7 }
    }
    if ( !Mantle_EntityIsOwnedByPlayer(ps, pm->m_bgHandler, results.hitType, results.hitId) )
      goto LABEL_49;
    if ( !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 594, ASSERT_TYPE_ASSERT, "( ( pm->m_bgHandler->IsClient() ) )", "( pm->m_bgHandler ) = %p", pm->m_bgHandler) )
      __debugbreak();
    Mantle_SetTraceFlags(pm->m_trace);
    BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &bounds, ps->clientNum, contentMask & 0xFDFFBFFF);
    Mantle_RestoreTraceFlags(pm->m_trace);
    v64 = results.startsolid;
    _RDI->debugDraw.ledgeForwardCapsuleSweepStartSolid = results.startsolid;
    __asm
    {
      vmovss  xmm0, [rbp+90h+results.fraction]
      vmovss  dword ptr [rdi+12Ch], xmm0
    }
    if ( !v64 )
    {
      __asm { vcomiss xmm0, xmm7 }
LABEL_49:
      __asm { vmovsd  xmm0, qword ptr [rsp+190h+vec] }
      start.v[2] = vec.v[2];
      __asm { vmovsd  qword ptr [rsp+190h+start], xmm0 }
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetVerticalDelta(&pm->refFrame, &_RDI->ledgePos, &_RDI->startPos);
      __asm
      {
        vaddss  xmm1, xmm0, xmm10
        vaddss  xmm6, xmm1, xmm11
        vmovaps xmm8, xmm0
      }
      if ( Mantle_IsLadder(_RDI) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_ladder_down_dist, "mantle_ladder_down_dist");
        __asm { vmovaps xmm6, xmm0 }
      }
      __asm { vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000; height }
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      Mantle_SetTraceFlags(pm->m_trace);
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &v101, ps->clientNum, contentMask);
      Mantle_RestoreTraceFlags(pm->m_trace);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+90h+var_A0.midPoint]
        vmovsd  xmm1, qword ptr [rbp+90h+var_A0.halfSize+4]
      }
      v73 = results.startsolid;
      __asm
      {
        vmovups xmmword ptr [rdi+134h], xmm0
        vmovss  xmm0, dword ptr [rsp+190h+start]
        vmovsd  qword ptr [rdi+144h], xmm1
        vmovss  xmm1, dword ptr [rsp+190h+start+4]
        vmovss  dword ptr [rdi+14Ch], xmm0
        vmovss  xmm0, dword ptr [rsp+190h+start+8]
        vmovss  dword ptr [rdi+150h], xmm1
        vmovss  xmm1, dword ptr [rsp+190h+vec]
        vmovss  dword ptr [rdi+154h], xmm0
        vmovss  xmm0, dword ptr [rsp+190h+vec+4]
        vmovss  dword ptr [rdi+158h], xmm1
        vmovss  xmm1, dword ptr [rsp+190h+vec+8]
        vmovss  dword ptr [rdi+15Ch], xmm0
        vmovss  xmm0, [rbp+90h+results.fraction]
        vmovss  dword ptr [rdi+160h], xmm1
      }
      _RDI->debugDraw.ledgeDownwardCapsuleSweepStartSolid = v73;
      __asm { vmovss  dword ptr [rdi+164h], xmm0 }
      if ( !v73 )
        goto LABEL_55;
      if ( !Mantle_EntityIsOwnedByPlayer(ps, pm->m_bgHandler, results.hitType, results.hitId) )
        goto LABEL_61;
      if ( !results.startsolid )
      {
        __asm { vmovss  xmm0, [rbp+90h+results.fraction] }
LABEL_55:
        __asm { vcomiss xmm0, xmm7 }
LABEL_64:
        _RDI->flags |= 0x20u;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+190h+vec]
          vmovss  xmm1, dword ptr [rsp+190h+vec+4]
          vmovss  dword ptr [rdi+24h], xmm0
          vmovss  xmm0, dword ptr [rsp+190h+vec+8]
          vmovss  dword ptr [rdi+2Ch], xmm0
          vmovss  dword ptr [rdi+28h], xmm1
        }
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &start);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
        __asm
        {
          vsubss  xmm1, xmm7, [rbp+90h+results.fraction]
          vmulss  xmm0, xmm0, [rbp+90h+results.fraction]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm1, xmm2, xmm0; height
        }
        WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RDI->endPos);
        _RDI->debugDraw.overFlags |= 0x80u;
        result = 1;
        goto LABEL_65;
      }
      if ( Mantle_EntityIsOwnedByPlayer(ps, pm->m_bgHandler, results.hitType, results.hitId) )
      {
        if ( !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 666, ASSERT_TYPE_ASSERT, "( ( pm->m_bgHandler->IsClient() ) )", "( pm->m_bgHandler ) = %p", pm->m_bgHandler) )
          __debugbreak();
        Mantle_SetTraceFlags(pm->m_trace);
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &vec, &v101, ps->clientNum, contentMask & 0xFDFFBFFF);
        Mantle_RestoreTraceFlags(pm->m_trace);
        v81 = results.startsolid;
        _RDI->debugDraw.ledgeDownwardCapsuleSweepStartSolid = results.startsolid;
        __asm
        {
          vmovss  xmm6, [rbp+90h+results.fraction]
          vmovss  dword ptr [rdi+164h], xmm6
        }
        if ( v81 )
        {
LABEL_61:
          _RDI->flags &= ~1u;
          _RDI->endPos.v[0] = _RDI->ledgePos.v[0];
          _RDI->endPos.v[1] = _RDI->ledgePos.v[1];
          _RDI->endPos.v[2] = _RDI->ledgePos.v[2];
          _RDI->debugDraw.overFlags |= 8u;
          result = 0;
          goto LABEL_65;
        }
      }
      else
      {
        __asm { vmovss  xmm6, [rbp+90h+results.fraction] }
      }
      __asm { vcomiss xmm6, xmm7 }
      goto LABEL_64;
    }
    _RDI->debugDraw.overFlags |= 2u;
LABEL_48:
    _RDI->flags &= ~1u;
    _RDI->endPos.v[0] = _RDI->ledgePos.v[0];
    _RDI->endPos.v[1] = _RDI->ledgePos.v[1];
    _RDI->endPos.v[2] = _RDI->ledgePos.v[2];
    result = 0;
LABEL_65:
    __asm
    {
      vmovaps xmm7, [rsp+190h+var_50]
      vmovaps xmm6, [rsp+190h+var_40]
      vmovaps xmm8, [rsp+190h+var_60]
    }
    goto LABEL_66;
  }
  _RDI->flags &= ~1u;
  _RDI->endPos.v[0] = _RDI->ledgePos.v[0];
  _RDI->endPos.v[1] = _RDI->ledgePos.v[1];
  _RDI->endPos.v[2] = _RDI->ledgePos.v[2];
  result = 0;
LABEL_66:
  _R11 = &v107;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
Mantle_CalcFallingPosition
==============
*/
void Mantle_CalcFallingPosition(pmove_t *pm, MantleResults *mresults)
{
  playerState_s *ps; 
  int flags; 
  char v11; 
  int v13; 
  const BgHandler *m_bgHandler; 
  const dvar_t *v23; 
  BgHandler_vtbl *v26; 
  int Int_Internal_DebugName; 
  char *fmt; 
  char *fmta; 
  Bounds *bounds; 
  vec3_t outPos; 
  int v52[4]; 
  trace_t results; 
  BSplineRelaxedCBezier outMantleSpline; 

  _RBX = mresults;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 979, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 979, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 980, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  _R14 = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 437, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  flags = _RBX->flags;
  if ( (_RBX->edgeFlags[0] & 0xA) == 8 )
  {
    if ( (flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 987, ASSERT_TYPE_ASSERT, "(mresults->flags & (1<<0))", (const char *)&queryFormat, "mresults->flags & MANTLE_FLAG_OVER") )
      __debugbreak();
    _RBX->flags &= ~0x20u;
    ps->mantleState.flags &= ~0x20u;
  }
  else if ( (flags & 0x20) != 0 )
  {
    if ( (flags & 0x801) != 0 )
    {
      _RBP = DCONST_DVARFLT_mantle_falling_time;
      if ( !DCONST_DVARFLT_mantle_falling_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_falling_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBP);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rbp+28h]
      }
      if ( v11 )
      {
        ps->mantleState.flags |= 1u;
        BSplineRelaxedCBezier::BSplineRelaxedCBezier(&outMantleSpline);
        Mantle_BuildMotionPath(pm, &outMantleSpline);
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_falling_time, "mantle_falling_time");
        __asm { vmovaps xmm1, xmm0; t }
        BG_BSpline_RelaxedCBezier_Evaluate(&outMantleSpline, *(float *)&_XMM1, &outPos);
        Mantle_SetTraceFlags(pm->m_trace);
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &outPos, &outPos, _R14, ps->clientNum, pm->tracemask);
        Mantle_RestoreTraceFlags(pm->m_trace);
        if ( results.startsolid )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rsp+438h+outPos+4]
            vmovss  xmm2, dword ptr [rsp+438h+outPos]
            vmovss  xmm0, dword ptr [rsp+438h+outPos+8]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm0, xmm0, xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovaps [rsp+438h+var_48], xmm7
            vmovsd  [rsp+438h+fmt], xmm0
          }
          Com_Printf(19, "Falling position is blocked at (%f, %f, %f). Forcing mantle up.\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
          Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
          m_bgHandler = pm->m_bgHandler;
          if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 255, ASSERT_TYPE_ASSERT, "(capsuleBounds)", (const char *)&queryFormat, "capsuleBounds") )
            __debugbreak();
          v23 = DCONST_DVARINT_mantle_debug;
          if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v23);
          if ( (v23->current.enabled & 4) != 0 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+438h+outPos]
              vmovss  xmm1, dword ptr [rsp+438h+outPos+4]
            }
            v26 = m_bgHandler->__vftable;
            __asm
            {
              vmovss  xmm3, dword ptr [r14+0Ch]
              vmovss  [rsp+438h+var_3E8], xmm0
              vmovss  xmm0, dword ptr [r14+8]
              vmulss  xmm2, xmm0, cs:__real@40000000
              vmovss  [rsp+438h+var_3E4], xmm1
              vaddss  xmm1, xmm2, dword ptr [rsp+438h+outPos+8]
              vmovss  [rsp+438h+var_3E0], xmm1
            }
            ((void (__fastcall *)(const BgHandler *, vec3_t *, int *))v26->DebugCapsule)(m_bgHandler, &outPos, v52);
          }
          __asm
          {
            vmovss  xmm3, dword ptr [rbx+10h]
            vmovss  xmm2, dword ptr [rbx+0Ch]
            vmovss  xmm0, dword ptr [rbx+14h]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm0, xmm0, xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+438h+fmt], xmm0
          }
          Com_Printf(19, "Start position (%f, %f, %f)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta);
          __asm { vmovss  xmm1, cs:__real@433e0000; maxAbsValueSize }
          *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distanceZ, *(float *)&_XMM1, 8u);
          __asm
          {
            vmovss  xmm1, cs:__real@433e0000; maxAbsValueSize
            vcvtss2sd xmm7, xmm0, xmm0
          }
          *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distance2D, *(float *)&_XMM1, 8u);
          __asm
          {
            vcvtss2sd xmm2, xmm0, xmm0
            vmovaps xmm3, xmm7
            vmovq   r9, xmm3
            vmovq   r8, xmm2
          }
          Com_Printf(19, "2D Distance %.3f Height %.3f\n", *(double *)&_XMM2, *(double *)&_XMM3);
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
          Mantle_DebugStar(pm->m_bgHandler, &outPos, &colorRed, Int_Internal_DebugName);
          _RBX->flags &= 0xFFFFFFDE;
          ps->mantleState.flags &= 0xFFFFFFDE;
          __asm { vmovaps xmm7, [rsp+438h+var_48] }
          _RBX->endPos.v[0] = _RBX->ledgePos.v[0];
          _RBX->endPos.v[1] = _RBX->ledgePos.v[1];
          _RBX->endPos.v[2] = _RBX->ledgePos.v[2];
        }
        else
        {
          v13 = Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
          Mantle_DebugStar(pm->m_bgHandler, &outPos, &colorLtOrange, v13);
        }
      }
      else
      {
        _RBX->flags &= ~0x20u;
        ps->mantleState.flags &= ~0x20u;
      }
    }
    else
    {
      LODWORD(bounds) = _RBX->flags;
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
  vec3_t vec; 
  vec3_t v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [rsp+0C8h+vec], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+0C8h+vec+4], xmm1
  }
  _R14 = outWishDir;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rsp+0C8h+vec+8], xmm0
  }
  _R15 = outWishMag;
  _RBX = pml;
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0C8h+vec]
    vmovss  xmm6, dword ptr [rsp+0C8h+vec+4]
    vmovss  xmm5, dword ptr [rsp+0C8h+vec+8]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0C8h+vec], xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+0C8h+vec+8], xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0C8h+var_78], xmm0
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  dword ptr [rsp+0C8h+vec+4], xmm1
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  dword ptr [rsp+0C8h+var_78+8], xmm0
    vmovss  dword ptr [rsp+0C8h+var_78+4], xmm1
  }
  if ( (pm->cmd.buttons & 0x8000000000000i64) != 0 || pm->cmd.forwardmove <= 0 )
  {
    __asm { vmovaps xmm8, xmm7 }
  }
  else
  {
    _RDI = DCONST_DVARFLT_mantle_kbm_wishdirection_strafe_scale;
    if ( !DCONST_DVARFLT_mantle_kbm_wishdirection_strafe_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_kbm_wishdirection_strafe_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm8, dword ptr [rdi+28h] }
  }
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &v90);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0C8h+var_78]
    vmovss  xmm6, dword ptr [rsp+0C8h+var_78+4]
    vmovss  xmm5, dword ptr [rsp+0C8h+var_78+8]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0C8h+var_78], xmm0
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0C8h+var_78+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, xmm8
    vmulss  xmm0, xmm4, dword ptr [rbx+0Ch]
    vmovss  dword ptr [rsp+0C8h+var_78+4], xmm1
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, eax
    vmulss  xmm1, xmm3, dword ptr [rbx]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [r14], xmm1
    vmulss  xmm2, xmm4, dword ptr [rbx+10h]
    vmulss  xmm0, xmm3, dword ptr [rbx+4]
    vaddss  xmm2, xmm2, xmm0
    vmovss  dword ptr [r14+4], xmm2
    vmulss  xmm2, xmm4, dword ptr [rbx+14h]
    vmulss  xmm0, xmm3, dword ptr [rbx+8]
    vaddss  xmm2, xmm2, xmm0
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [r14+8], xmm2
  }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, _R14);
  __asm
  {
    vmovss  xmm5, dword ptr [r14+4]
    vmovss  xmm4, dword ptr [r14]
    vmovss  xmm6, dword ptr [r14+8]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r14], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [r14+8], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [r14+4], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  dword ptr [r15], xmm0
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_58]
  }
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
__int64 Mantle_CanMantle(pmove_t *pm, pml_t *pml, const BgWeaponMap *weaponMap, playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, vec3_t *inOutWishDir, const int gameTime)
{
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const char *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const char *v24; 
  unsigned __int8 v25; 
  __int64 result; 
  __int16 groundRefEnt; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v30; 
  int WeaponHand; 
  __int64 v32; 
  int *p_weaponState; 
  __int64 v34; 
  bool IsForceOver; 
  bool IsForceOn; 
  bool v40; 
  char v41; 
  bool v45; 
  bool v46; 
  __int64 v49; 
  __int64 v50; 
  bool v60; 
  float wishDir; 
  float wishDira; 
  float wishDirb; 
  float wishDirc; 
  char v79[400]; 
  void *retaddr; 
  bool mresultsa; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3077, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3078, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = mresults;
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3079, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "Mantle_CanMantle");
  v18 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( (v18->current.enabled & 3) != 0 )
    Com_Printf(17, "%s\n", "====== Mantle Debug ======");
  v19 = DCONST_DVARMPBOOL_mantle_enable;
  if ( !DCONST_DVARMPBOOL_mantle_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( !v19->current.enabled )
  {
    v20 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( !v20->current.enabled )
      goto LABEL_40;
    v21 = "Mantle Failed: Not enabled";
    goto LABEL_36;
  }
  if ( ps->pm_type >= 7 )
  {
    v22 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( !v22->current.enabled )
      goto LABEL_40;
    v21 = "Mantle Failed: Player is dead";
    goto LABEL_36;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x24u) )
    {
      v24 = "Mantle Failed: Player not allowed to mantle";
LABEL_39:
      Mantle_DebugPrint(1u, v24);
      goto LABEL_40;
    }
    if ( BG_HasLadderHand(ps) )
    {
      v24 = "Mantle Failed: Player using ladder";
      goto LABEL_39;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xCu) )
    {
      v24 = "Mantle Failed: Can't mantle while falling into a hard landing";
      goto LABEL_39;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
    {
      v24 = "Mantle Failed: Can't mantle while sliding";
      goto LABEL_39;
    }
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) || BG_Offhand_IsPlayingGrenadeGesture(weaponMap, ps) && !BG_Offhand_GrenadeGestureInterruptable(weaponMap, ps, gameTime) || BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_WEAPON) && !BG_Offhand_ScriptWeaponInterruptable(weaponMap, ps, gameTime) )
    {
      v24 = "Mantle Failed: Player using offhand";
      goto LABEL_39;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2559, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
        __debugbreak();
      v24 = "Mantle Failed: Player is swimming";
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
          v24 = "Mantle Failed: Player is zero gravity floating";
          goto LABEL_39;
        }
      }
    }
    if ( BG_Skydive_IsSkydiving(ps) )
    {
      v24 = "Mantle Failed: Player is skydiving";
      goto LABEL_39;
    }
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    if ( SLOBYTE(ps->mantleState.flags) < 0 )
    {
      v24 = "Mantle Failed: We're blocking due to a cancel until we hit the ground";
      goto LABEL_39;
    }
    v30 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
    if ( BG_IsForceUseWeapon(CurrentWeaponForPlayer, v30) )
      goto LABEL_40;
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
        __debugbreak();
      v24 = "Mantle Failed: Player in execution";
      goto LABEL_39;
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_prevent_mantle_while_linked_enabled, "killswitch_prevent_mantle_while_linked_enabled") && (ps->vehicleState.entity != 2047 || ps->pm_type == 1) )
    {
      v24 = "Mantle Failed: Player is linked";
      goto LABEL_39;
    }
    WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
    if ( WeaponHand >= 0 )
    {
      v32 = 0i64;
      p_weaponState = &ps->weapState[0].weaponState;
      while ( 1 )
      {
        v34 = v32;
        if ( (unsigned int)(*p_weaponState - 22) <= 2 )
          break;
        ++v32;
        p_weaponState += 20;
        if ( v34 >= WeaponHand )
          goto LABEL_90;
      }
      v24 = "Mantle Failed: Player is using the melee attack";
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
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_spline_ladder_point_height, "mantle_spline_ladder_point_height");
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+38h]
          vsubss  xmm2, xmm1, dword ptr [rdi+38h]
          vaddss  xmm0, xmm0, xmm2
          vmovss  dword ptr [rsp+228h+wishDir], xmm0
        }
        if ( Mantle_CheckLadderEdge(ps, worldId, pmoveHandler, traceMask, mresults, wishDir) )
        {
          v25 = 1;
LABEL_128:
          Sys_ProfEndNamedEvent();
          goto LABEL_41;
        }
        goto LABEL_127;
      }
      Mantle_SetOverFlagBasedOnSprintState(pm, pml, mresults);
      IsForceOver = Mantle_IsForceOver(mresults);
      IsForceOn = Mantle_IsForceOn(mresults);
      v40 = (IsForceOver || (mresults->flags & 1) != 0) && !IsForceOn;
      v41 = 0;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_edge_ledge_check_rise_amount, "mantle_edge_ledge_check_rise_amount");
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+38h]
        vsubss  xmm2, xmm1, dword ptr [rdi+38h]
        vaddss  xmm6, xmm0, xmm2
        vmovss  dword ptr [rsp+228h+wishDir], xmm6
      }
      v45 = Mantle_CheckLedge(ps, worldId, pmoveHandler, traceMask, mresults, wishDira);
      if ( v45 && v40 )
      {
        mresults->endPosCalculated = 1;
        v46 = Mantle_CalcEndPos(pm, mresults);
        mresults->overPosFound = v46;
        if ( !v46 )
        {
          if ( IsForceOver )
          {
            mresultsa = 0;
LABEL_111:
            _RAX = _RBX;
            _RCX = v79;
            v49 = 2i64;
            v50 = 2i64;
            do
            {
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups ymmword ptr [rcx], ymm0
                vmovups ymm0, ymmword ptr [rax+20h]
                vmovups ymmword ptr [rcx+20h], ymm0
                vmovups ymm0, ymmword ptr [rax+40h]
                vmovups ymmword ptr [rcx+40h], ymm0
                vmovups xmm0, xmmword ptr [rax+60h]
                vmovups xmmword ptr [rcx+60h], xmm0
              }
              _RCX += 128;
              __asm
              {
                vmovups xmm1, xmmword ptr [rax+70h]
                vmovups xmmword ptr [rcx-10h], xmm1
              }
              _RAX = (MantleResults *)((char *)_RAX + 128);
              --v50;
            }
            while ( v50 );
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rcx], ymm0
              vmovups ymm0, ymmword ptr [rax+20h]
              vmovups ymmword ptr [rcx+20h], ymm0
              vmovups ymm0, ymmword ptr [rax+40h]
              vmovups ymmword ptr [rcx+40h], ymm0
              vmovups xmm0, xmmword ptr [rax+60h]
              vmovups xmmword ptr [rcx+60h], xmm0
            }
            *((_DWORD *)_RCX + 28) = LODWORD(_RAX->distanceToMantleSurface);
            if ( !Mantle_FixUpMantleDirForEdge(ps, worldId, pmoveHandler, traceMask, _RBX, inOutWishDir) )
              goto LABEL_120;
            *(_QWORD *)&_RBX->debugDraw.ledgeFlags = 0i64;
            *(_QWORD *)_RBX->debugDraw.forwardCapsuleSweepForLedgeBounds.midPoint.v = 0i64;
            *(_QWORD *)&_RBX->debugDraw.forwardCapsuleSweepForLedgeBounds.midPoint.z = 0i64;
            *(_QWORD *)&_RBX->debugDraw.forwardCapsuleSweepForLedgeBounds.halfSize.y = 0i64;
            *(_QWORD *)_RBX->debugDraw.forwardCapsuleSweepForLedgeStart.v = 0i64;
            *(_QWORD *)&_RBX->debugDraw.forwardCapsuleSweepForLedgeStart.z = 0i64;
            *(_QWORD *)&_RBX->debugDraw.forwardCapsuleSweepForLedgeEnd.y = 0i64;
            _RBX->debugDraw.forwardCapsuleSweepForLedgeFraction = 0.0;
            _RBX->debugDraw.forwardCapsuleSweepForLedgeStartSolid = 0;
            *(_QWORD *)_RBX->debugDraw.downwardCapsuleSweepForLedgeBounds.midPoint.v = 0i64;
            *(_QWORD *)&_RBX->debugDraw.downwardCapsuleSweepForLedgeBounds.midPoint.z = 0i64;
            *(_QWORD *)&_RBX->debugDraw.downwardCapsuleSweepForLedgeBounds.halfSize.y = 0i64;
            *(_QWORD *)_RBX->debugDraw.downwardCapsuleSweepForLedgeStart.v = 0i64;
            *(_QWORD *)&_RBX->debugDraw.downwardCapsuleSweepForLedgeStart.z = 0i64;
            *(_QWORD *)&_RBX->debugDraw.downwardCapsuleSweepForLedgeEnd.y = 0i64;
            _RBX->debugDraw.downwardCapsuleSweepForLedgeFraction = 0.0;
            _RBX->debugDraw.downwardCapsuleSweepForLedgeStartSolid = 0;
            *(_QWORD *)_RBX->debugDraw.ledgeForwardCapsuleSweepBounds.midPoint.v = 0i64;
            *(_QWORD *)&_RBX->debugDraw.ledgeForwardCapsuleSweepBounds.midPoint.z = 0i64;
            *(_QWORD *)&_RBX->debugDraw.ledgeForwardCapsuleSweepBounds.halfSize.y = 0i64;
            *(_QWORD *)_RBX->debugDraw.ledgeForwardCapsuleSweepStart.v = 0i64;
            *(_QWORD *)&_RBX->debugDraw.ledgeForwardCapsuleSweepStart.z = 0i64;
            *(_QWORD *)&_RBX->debugDraw.ledgeForwardCapsuleSweepEnd.y = 0i64;
            _RBX->debugDraw.ledgeForwardCapsuleSweepFraction = 0.0;
            _RBX->debugDraw.ledgeForwardCapsuleSweepStartSolid = 0;
            *(_QWORD *)_RBX->debugDraw.ledgeDownwardCapsuleSweepBounds.midPoint.v = 0i64;
            *(_QWORD *)&_RBX->debugDraw.ledgeDownwardCapsuleSweepBounds.midPoint.z = 0i64;
            *(_QWORD *)&_RBX->debugDraw.ledgeDownwardCapsuleSweepBounds.halfSize.y = 0i64;
            *(_QWORD *)_RBX->debugDraw.ledgeDownwardCapsuleSweepStart.v = 0i64;
            *(_QWORD *)&_RBX->debugDraw.ledgeDownwardCapsuleSweepStart.z = 0i64;
            *(_QWORD *)&_RBX->debugDraw.ledgeDownwardCapsuleSweepEnd.y = 0i64;
            _RBX->debugDraw.ledgeDownwardCapsuleSweepFraction = 0.0;
            _RBX->debugDraw.ledgeDownwardCapsuleSweepStartSolid = 0;
            __asm { vmovss  dword ptr [rsp+228h+wishDir], xmm6 }
            v45 = Mantle_CheckLedge(ps, worldId, pmoveHandler, traceMask, _RBX, wishDirb);
            if ( !v45 )
              goto LABEL_120;
            if ( v40 )
            {
              Mantle_SetOverFlagBasedOnSprintState(pm, pml, _RBX);
              _RBX->endPosCalculated = 1;
              v60 = Mantle_CalcEndPos(pm, _RBX);
              _RBX->overPosFound = v60;
              if ( IsForceOver && !v60 )
                goto LABEL_120;
            }
            if ( v41 && !_RBX->overPosFound )
            {
LABEL_120:
              _RCX = _RBX;
              _RAX = v79;
              do
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [rax]
                  vmovups ymmword ptr [rcx], ymm0
                  vmovups ymm0, ymmword ptr [rax+20h]
                  vmovups ymmword ptr [rcx+20h], ymm0
                  vmovups ymm0, ymmword ptr [rax+40h]
                  vmovups ymmword ptr [rcx+40h], ymm0
                  vmovups xmm0, xmmword ptr [rax+60h]
                  vmovups xmmword ptr [rcx+60h], xmm0
                }
                _RCX = (MantleResults *)((char *)_RCX + 128);
                __asm
                {
                  vmovups xmm1, xmmword ptr [rax+70h]
                  vmovups xmmword ptr [rcx-10h], xmm1
                }
                _RAX += 128;
                --v49;
              }
              while ( v49 );
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups ymmword ptr [rcx], ymm0
                vmovups ymm0, ymmword ptr [rax+20h]
                vmovups ymmword ptr [rcx+20h], ymm0
                vmovups ymm0, ymmword ptr [rax+40h]
                vmovups ymmword ptr [rcx+40h], ymm0
                vmovups xmm0, xmmword ptr [rax+60h]
                vmovups xmmword ptr [rcx+60h], xmm0
              }
              _RCX->distanceToMantleSurface = *((float *)_RAX + 28);
              v45 = mresultsa;
            }
LABEL_123:
            if ( v45 && (!IsForceOver || _RBX->overPosFound) )
            {
              v25 = 1;
              goto LABEL_128;
            }
LABEL_127:
            v25 = 0;
            goto LABEL_128;
          }
          v41 = 1;
        }
      }
      mresultsa = v45;
      if ( v45 && !v41 )
        goto LABEL_123;
      goto LABEL_111;
    }
    Sys_ProfBeginNamedEvent(0xFF008008, "Mantle Find Ledge - Without Edges");
    if ( Mantle_FindMantleSurface(ps, worldId, pmoveHandler, &ps->origin, mresults, inOutWishDir) && Mantle_ShouldCheckForLedges(weaponMap, ps, pmoveHandler, mresults, inOutWishDir) )
    {
      *(float *)&_XMM0 = Mantle_GetCheckHeight(ps, pmoveHandler, mresults);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  dword ptr [rsp+228h+wishDir], xmm0
      }
      if ( Mantle_CheckLedge(ps, worldId, pmoveHandler, traceMask, mresults, wishDirc) )
      {
        v25 = 1;
LABEL_135:
        Sys_ProfEndNamedEvent();
        goto LABEL_41;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@42200000
        vcomiss xmm6, xmm0
        vmovss  xmm0, cs:__real@41900000
        vcomiss xmm6, xmm0
      }
    }
    v25 = 0;
    goto LABEL_135;
  }
  v23 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( !v23->current.enabled )
    goto LABEL_40;
  v21 = "Mantle Failed: Player already mantling";
LABEL_36:
  Com_Printf(17, "%s\n", v21);
LABEL_40:
  v25 = 0;
LABEL_41:
  Sys_ProfEndNamedEvent();
  result = v25;
  __asm { vmovaps xmm6, [rsp+228h+var_48] }
  return result;
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
  const BgPlayerTraceInfo *v12; 
  EffectiveStance EffectiveStance; 
  char v19; 
  char v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v40; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  const dvar_t *v47; 
  const dvar_t *v49; 
  const char *v50; 
  const dvar_t *v57; 
  const dvar_t *v58; 
  const dvar_t *v60; 
  const dvar_t *v62; 
  __int64 result; 
  BgTrace v65; 
  vec3_t vec; 
  vec3_t start; 
  vec3_t v68; 
  Bounds bounds; 
  vec3_t v70; 
  trace_t results; 
  WorldUpReferenceFrame v72; 

  __asm { vmovaps [rsp+1B0h+var_50], xmm6 }
  _RBX = mresults;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1945, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pmoveHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1946, ASSERT_TYPE_ASSERT, "(pmoveHandler)", (const char *)&queryFormat, "pmoveHandler") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1947, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v72, ps, pmoveHandler);
  v12 = pmoveHandler->GetPlayerTraceInfo(pmoveHandler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&v65, v12);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  xmm6, [rbp+0B0h+height]
    vmovss  dword ptr [rsp+1B0h+vec], xmm0
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  dword ptr [rsp+1B0h+vec+4], xmm1
    vmovaps xmm1, xmm6; height
    vmovss  dword ptr [rsp+1B0h+vec+8], xmm0
  }
  WorldUpReferenceFrame::AddUpContribution(&v72, *(float *)&_XMM1, &vec);
  EffectiveStance = PM_GetEffectiveStance(ps);
  *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(ps, EffectiveStance);
  __asm { vcomiss xmm6, xmm0 }
  if ( !(v19 | v20) )
  {
    v65.m_flags |= 0x80u;
    v21 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
      v65.m_flags |= 0x200u;
    BgTrace::LegacyTraceHandler(&v65, worldId, &results, &mresults->startPos, &vec, &bounds_origin, ps->clientNum, traceMask, ps);
    v65.m_flags &= ~0x80u;
    v22 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
      v65.m_flags &= ~0x200u;
    if ( results.startsolid )
      goto LABEL_80;
    __asm
    {
      vmovss  xmm0, [rbp+0B0h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
  }
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+1B0h+vec]
    vmovss  xmm1, dword ptr [rbx+34h]
    vsubss  xmm3, xmm1, dword ptr [rsp+1B0h+vec+4]
    vmovsd  qword ptr [rbp+0B0h+start], xmm0
    vmovss  xmm0, dword ptr [rbx+30h]
    vsubss  xmm4, xmm0, dword ptr [rsp+1B0h+vec]
    vmovss  xmm0, dword ptr [rbx+38h]
    vsubss  xmm2, xmm0, dword ptr [rsp+1B0h+vec+8]
    vunpcklps xmm1, xmm4, xmm3
    vmovss  dword ptr [rbp+0B0h+var_F8+8], xmm2
  }
  start.v[2] = vec.v[2];
  v68.v[2] = v70.v[2];
  __asm
  {
    vmovsd  qword ptr [rbp+0B0h+var_F8], xmm1
    vmovsd  qword ptr [rbp+0B0h+var_120], xmm1
  }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v72, &v70);
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm1, xmm0, xmm6; height
  }
  WorldUpReferenceFrame::AddUpContribution(&v72, *(float *)&_XMM1, &v68);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0B0h+var_120]
    vaddss  xmm1, xmm0, dword ptr [rbp+0B0h+start]
    vmovss  xmm2, dword ptr [rbp+0B0h+var_120+4]
    vaddss  xmm0, xmm2, dword ptr [rbp+0B0h+start+4]
    vmovss  dword ptr [rsp+1B0h+vec], xmm1
    vmovss  xmm1, dword ptr [rbp+0B0h+var_120+8]
    vaddss  xmm2, xmm1, dword ptr [rbp+0B0h+start+8]
    vmovss  dword ptr [rsp+1B0h+vec+8], xmm2
    vmovss  dword ptr [rsp+1B0h+vec+4], xmm0
  }
  *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(ps);
  v65.m_flags |= 0x80u;
  v40 = DVARBOOL_mantle_fixMantleIntoCollision;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vshufps xmm0, xmm0, xmm0, 0
    vmovss  dword ptr [rbp+0B0h+var_110.midPoint], xmm1
    vmovss  dword ptr [rbp+0B0h+var_110.midPoint+4], xmm1
    vmovups xmmword ptr [rbp+0B0h+var_110.midPoint+8], xmm0
  }
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
    v65.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&v65, worldId, &results, &start, &vec, &bounds, ps->clientNum, traceMask, ps);
  v65.m_flags &= ~0x80u;
  v43 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( v43->current.enabled )
    v65.m_flags &= ~0x200u;
  if ( BG_Glass_CanBreakGlass(&results) )
  {
    v65.m_flags |= 0x80u;
    traceMask &= ~0x10u;
    v44 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    if ( v44->current.enabled )
      v65.m_flags |= 0x200u;
    BgTrace::LegacyTraceHandler(&v65, worldId, &results, &start, &vec, &bounds, ps->clientNum, traceMask, ps);
    v65.m_flags &= ~0x80u;
    v45 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    if ( v45->current.enabled )
      v65.m_flags &= ~0x200u;
  }
  if ( results.startsolid )
  {
    if ( !Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId) )
    {
      v47 = DVARINT_mantle_debugLineTime;
      if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      __asm { vmovss  xmm3, [rbp+0B0h+results.fraction]; fraction }
      Mantle_DebugTraceLine(pmoveHandler, &start, &vec, *(const float *)&_XMM3, &colorRed, v47->current.integer);
      v49 = DCONST_DVARINT_mantle_debug;
      if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      if ( !v49->current.enabled )
        goto LABEL_80;
      v50 = "Ladder Mantle Failed: Forward movement is blocked";
      goto LABEL_79;
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rbp+0B0h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+60h]
    vmovss  xmm1, dword ptr [rbx+64h]
    vmovss  xmm0, dword ptr [rbx+68h]
  }
  _RSI = DCONST_DVARFLT_mantle_ladder_down_dist;
  __asm
  {
    vmovss  dword ptr [rbp+0B0h+start], xmm2
    vmovss  dword ptr [rbp+0B0h+start+4], xmm1
    vmovss  dword ptr [rbp+0B0h+start+8], xmm0
    vmovss  dword ptr [rsp+1B0h+vec], xmm2
    vmovss  dword ptr [rsp+1B0h+vec+4], xmm1
    vmovss  dword ptr [rsp+1B0h+vec+8], xmm0
  }
  if ( !DCONST_DVARFLT_mantle_ladder_down_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_down_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vxorps  xmm1, xmm0, xmm6; height
  }
  WorldUpReferenceFrame::AddUpContribution(&v72, *(float *)&_XMM1, &vec);
  v65.m_flags |= 0x80u;
  v57 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  if ( v57->current.enabled )
    v65.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&v65, worldId, &results, &start, &vec, &bounds, ps->clientNum, traceMask, ps);
  v65.m_flags &= ~0x80u;
  v58 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled )
    v65.m_flags &= ~0x200u;
  if ( !results.startsolid )
  {
    __asm
    {
      vmovss  xmm0, [rbp+0B0h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
LABEL_81:
    mresults->ledgePos = mresults->edgePos;
    result = 1i64;
    mresults->endGroundEnt = 2046;
    goto LABEL_82;
  }
  if ( Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId) )
    goto LABEL_81;
  v60 = DVARINT_mantle_debugLineTime;
  if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  __asm { vmovss  xmm3, [rbp+0B0h+results.fraction]; fraction }
  Mantle_DebugTraceLine(pmoveHandler, &start, &vec, *(const float *)&_XMM3, &colorRed, v60->current.integer);
  v62 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v62);
  if ( v62->current.enabled )
  {
    v50 = "Ladder Mantle Failed: Downward movement is blocked";
LABEL_79:
    Com_Printf(17, "%s\n", v50);
  }
LABEL_80:
  result = 0i64;
LABEL_82:
  __asm { vmovaps xmm6, [rsp+1B0h+var_50] }
  return result;
}

/*
==============
Mantle_CheckLedge
==============
*/
bool Mantle_CheckLedge(const playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, float height)
{
  const dvar_t *v17; 
  const char *v20; 
  const BgPlayerTraceInfo *v21; 
  EffectiveStance EffectiveStance; 
  char v24; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  int ledgeFlags; 
  const dvar_t *v43; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  const dvar_t *v49; 
  bool startsolid; 
  const dvar_t *v63; 
  const dvar_t *v64; 
  bool v65; 
  bool v68; 
  bool v76; 
  Bounds *bounds; 
  BgTrace trace; 
  vec3_t end; 
  vec3_t v100; 
  Bounds v101; 
  vec3_t vec; 
  vec3_t start; 
  trace_t results; 
  WorldUpReferenceFrame v105; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _RBX = mresults;
  __asm { vmovss  xmm6, [rbp+0D0h+height] }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1726, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v105, ps, pmoveHandler);
  v17 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v20 = j_va("Checking for ledge at %f units", _RDX);
    Mantle_DebugPrint(3u, v20);
  }
  v21 = pmoveHandler->GetPlayerTraceInfo(pmoveHandler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&trace, v21);
  EffectiveStance = PM_GetEffectiveStance(ps);
  *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(ps, EffectiveStance);
  __asm
  {
    vcomiss xmm6, xmm0
    vmovss  xmm7, cs:__real@3f800000
  }
  if ( v24 | v65 )
  {
LABEL_23:
    __asm { vmovaps [rsp+1D0h+var_78+8], xmm8 }
    *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(ps);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+10h]
      vshufps xmm0, xmm0, xmm0, 0
      vmovups xmmword ptr [rbp+0D0h+var_140.midPoint+8], xmm0
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rbp+0D0h+var_150], xmm0
      vmovss  xmm0, dword ptr [rbx+14h]
      vxorps  xmm8, xmm8, xmm8
      vmovaps xmm1, xmm6; height
      vmovss  dword ptr [rbp+0D0h+var_150+8], xmm0
      vmovss  dword ptr [rbp+0D0h+var_140.midPoint], xmm8
      vmovss  dword ptr [rbp+0D0h+var_140.midPoint+4], xmm8
      vmovss  dword ptr [rbp+0D0h+var_150+4], xmm2
    }
    WorldUpReferenceFrame::AddUpContribution(&v105, *(float *)&_XMM1, &v100);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+70h]
      vaddss  xmm2, xmm0, cs:__real@40800000
      vmulss  xmm1, xmm2, dword ptr [rbx]
      vaddss  xmm0, xmm1, dword ptr [rbp+0D0h+var_150]
      vmulss  xmm1, xmm2, dword ptr [rbx+4]
    }
    trace.m_flags |= 0x80u;
    v43 = DVARBOOL_mantle_fixMantleIntoCollision;
    __asm
    {
      vmovss  dword ptr [rsp+1D0h+end], xmm0
      vaddss  xmm0, xmm1, dword ptr [rbp+0D0h+var_150+4]
      vmulss  xmm1, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+1D0h+end+4], xmm0
      vaddss  xmm0, xmm1, dword ptr [rbp+0D0h+var_150+8]
      vmovss  dword ptr [rsp+1D0h+end+8], xmm0
    }
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    if ( v43->current.enabled )
      trace.m_flags |= 0x200u;
    BgTrace::LegacyTraceHandler(&trace, worldId, &results, &v100, &end, &v101, ps->clientNum, traceMask, ps);
    trace.m_flags &= ~0x80u;
    v47 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.enabled )
      trace.m_flags &= ~0x200u;
    if ( BG_Glass_CanBreakGlass(&results) )
    {
      trace.m_flags |= 0x80u;
      traceMask &= ~0x10u;
      v48 = DVARBOOL_mantle_fixMantleIntoCollision;
      if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v48);
      if ( v48->current.enabled )
        trace.m_flags |= 0x200u;
      BgTrace::LegacyTraceHandler(&trace, worldId, &results, &v100, &end, &v101, ps->clientNum, traceMask, ps);
      trace.m_flags &= ~0x80u;
      v49 = DVARBOOL_mantle_fixMantleIntoCollision;
      if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      if ( v49->current.enabled )
        trace.m_flags &= ~0x200u;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0D0h+var_140.midPoint]
      vmovsd  xmm1, qword ptr [rbp+0D0h+var_140.halfSize+4]
    }
    startsolid = results.startsolid;
    __asm
    {
      vmovups xmmword ptr [rbx+8Ch], xmm0
      vmovss  xmm0, dword ptr [rbp+0D0h+var_150]
      vmovsd  qword ptr [rbx+9Ch], xmm1
      vmovss  xmm1, dword ptr [rbp+0D0h+var_150+4]
      vmovss  dword ptr [rbx+0A4h], xmm0
      vmovss  xmm0, dword ptr [rbp+0D0h+var_150+8]
      vmovss  dword ptr [rbx+0A8h], xmm1
      vmovss  xmm1, dword ptr [rsp+1D0h+end]
      vmovss  dword ptr [rbx+0ACh], xmm0
      vmovss  xmm0, dword ptr [rsp+1D0h+end+4]
      vmovss  dword ptr [rbx+0B0h], xmm1
      vmovss  xmm1, dword ptr [rsp+1D0h+end+8]
      vmovss  dword ptr [rbx+0B4h], xmm0
      vmovss  xmm0, [rbp+0D0h+results.fraction]
      vmovss  dword ptr [rbx+0B8h], xmm1
    }
    mresults->debugDraw.forwardCapsuleSweepForLedgeStartSolid = startsolid;
    __asm { vmovss  dword ptr [rbx+0BCh], xmm0 }
    if ( startsolid )
    {
      if ( !Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId) )
      {
        ledgeFlags = 4;
        if ( results.startsolid )
          ledgeFlags = 2;
        mresults->debugDraw.ledgeFlags |= ledgeFlags;
        LOBYTE(ledgeFlags) = 0;
        goto LABEL_89;
      }
    }
    else
    {
      __asm { vcomiss xmm0, xmm7 }
    }
    __asm { vmovsd  xmm0, qword ptr [rsp+1D0h+end] }
    v100.v[2] = end.v[2];
    __asm { vmovsd  qword ptr [rbp+0D0h+var_150], xmm0 }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v105, &mresults->startPos);
    __asm { vmovaps xmm1, xmm0; height }
    WorldUpReferenceFrame::SetUpContribution(&v105, *(float *)&_XMM1, &end);
    if ( mresults->closeToGround )
    {
      __asm { vmovss  xmm1, cs:__real@41900000; height }
      WorldUpReferenceFrame::AddUpContribution(&v105, *(float *)&_XMM1, &end);
    }
    trace.m_flags |= 0x80u;
    v63 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v63);
    if ( v63->current.enabled )
      trace.m_flags |= 0x200u;
    BgTrace::LegacyTraceHandler(&trace, worldId, &results, &v100, &end, &v101, ps->clientNum, traceMask, ps);
    trace.m_flags &= ~0x80u;
    v64 = DVARBOOL_mantle_fixMantleIntoCollision;
    if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v64);
    v65 = !v64->current.enabled;
    if ( v64->current.enabled )
    {
      v65 = (trace.m_flags & 0xFFFFFDFF) == 0;
      trace.m_flags &= ~0x200u;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0D0h+var_140.midPoint]
      vmovsd  xmm1, qword ptr [rbp+0D0h+var_140.halfSize+4]
    }
    v68 = results.startsolid;
    __asm
    {
      vmovups xmmword ptr [rbx+0C4h], xmm0
      vmovss  xmm0, dword ptr [rbp+0D0h+var_150]
      vmovsd  qword ptr [rbx+0D4h], xmm1
      vmovss  xmm1, dword ptr [rbp+0D0h+var_150+4]
      vmovss  dword ptr [rbx+0DCh], xmm0
      vmovss  xmm0, dword ptr [rbp+0D0h+var_150+8]
      vmovss  dword ptr [rbx+0E4h], xmm0
      vmovss  xmm0, dword ptr [rsp+1D0h+end+4]
      vmovss  dword ptr [rbx+0E0h], xmm1
      vmovss  xmm1, dword ptr [rsp+1D0h+end]
      vmovss  dword ptr [rbx+0ECh], xmm0
      vmovss  xmm0, [rbp+0D0h+results.fraction]
      vucomiss xmm0, xmm7
      vmovss  dword ptr [rbx+0E8h], xmm1
      vmovss  xmm1, dword ptr [rsp+1D0h+end+8]
      vmovss  dword ptr [rbx+0F0h], xmm1
      vmovss  dword ptr [rbx+0F4h], xmm0
    }
    mresults->debugDraw.downwardCapsuleSweepForLedgeStartSolid = v68;
    if ( v65 )
    {
      mresults->debugDraw.ledgeFlags |= 8u;
      LOBYTE(ledgeFlags) = 0;
    }
    else if ( !v68 || (ledgeFlags = Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId)) != 0 )
    {
      if ( Mantle_EntityIsOwnedByPlayer(ps, pmoveHandler, results.hitType, results.hitId) )
      {
        if ( !pmoveHandler->IsClient((BgHandler *)pmoveHandler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1857, ASSERT_TYPE_ASSERT, "( ( pmoveHandler->IsClient() ) )", "( pmoveHandler ) = %p", pmoveHandler) )
          __debugbreak();
        Mantle_SetTraceFlags(&trace);
        BgTrace::LegacyTraceHandler(&trace, worldId, &results, &v100, &end, &v101, ps->clientNum, traceMask & 0xFDFFBFFF, ps);
        Mantle_RestoreTraceFlags(&trace);
        v76 = results.startsolid;
        mresults->debugDraw.downwardCapsuleSweepForLedgeStartSolid = results.startsolid;
        __asm
        {
          vmovss  xmm0, [rbp+0D0h+results.fraction]
          vmovss  dword ptr [rbx+0F4h], xmm0
        }
        if ( !v76 )
          __asm { vucomiss xmm0, xmm7 }
        ledgeFlags = 8;
        if ( v76 )
          ledgeFlags = 16;
        mresults->debugDraw.ledgeFlags |= ledgeFlags;
        LOBYTE(ledgeFlags) = 0;
      }
      else if ( (results.contents & 0x2004000) != 0 )
      {
        mresults->debugDraw.ledgeFlags |= 0x20u;
        LOBYTE(ledgeFlags) = 0;
      }
      else
      {
        if ( v105.m_axisAdjusted )
        {
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v105, &results.normal);
          __asm { vcomiss xmm0, cs:__real@3f333333 }
          LOBYTE(ledgeFlags) = !(v24 | v65);
          results.walkable = ledgeFlags;
        }
        else
        {
          LOBYTE(ledgeFlags) = results.walkable;
        }
        if ( (_BYTE)ledgeFlags )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1D0h+end]
            vmovss  xmm1, dword ptr [rsp+1D0h+end+4]
          }
          _RSI = &mresults->ledgePos;
          __asm
          {
            vmovss  dword ptr [rsi], xmm0
            vmovss  xmm0, dword ptr [rsp+1D0h+end+8]
            vmovss  dword ptr [rsi+8], xmm0
            vmovss  dword ptr [rsi+4], xmm1
          }
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v105, &end);
          __asm { vmovaps xmm6, xmm0 }
          WorldUpReferenceFrame::GetUpContribution(&v105, &v100);
          __asm
          {
            vsubss  xmm1, xmm7, [rbp+0D0h+results.fraction]
            vmulss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm6, [rbp+0D0h+results.fraction]
            vaddss  xmm1, xmm2, xmm0; height
          }
          WorldUpReferenceFrame::SetUpContribution(&v105, *(float *)&_XMM1, &mresults->ledgePos);
          mresults->endGroundEnt = Trace_GetEntityHitId(&results);
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v105, &mresults->startPos);
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v105, &mresults->ledgePos);
          __asm
          {
            vsubss  xmm1, xmm0, xmm6
            vcomiss xmm1, xmm8
          }
          if ( v24 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm1, xmm1
              vmovsd  [rsp+1D0h+bounds], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1919, ASSERT_TYPE_ASSERT, "( ( ((ledgeUpVal - startPosUpVal) >= 0.0f) ) )", "( (ledgeUpVal - startPosUpVal) ) = %g", *(double *)&bounds) )
              __debugbreak();
          }
          _RAX = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DUCKED);
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rbp+0D0h+var_140.midPoint], xmm0
            vmovsd  xmm1, qword ptr [rax+10h]
            vmovsd  qword ptr [rbp+0D0h+var_140.halfSize+4], xmm1
          }
          Mantle_SetTraceFlags(&trace);
          BgTrace::LegacyTraceHandler(&trace, worldId, &results, &mresults->ledgePos, &mresults->ledgePos, &v101, ps->clientNum, traceMask, ps);
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
    else
    {
      mresults->debugDraw.ledgeFlags |= 0x10u;
    }
LABEL_89:
    __asm { vmovaps xmm8, [rsp+1D0h+var_78+8] }
    goto LABEL_90;
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  xmm2, dword ptr [rbx+0Ch]
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  dword ptr [rbp+0D0h+start+4], xmm1
    vmovss  dword ptr [rbp+0D0h+vec+4], xmm1
    vmovaps xmm1, xmm6; height
    vmovss  dword ptr [rbp+0D0h+start], xmm2
    vmovss  dword ptr [rbp+0D0h+start+8], xmm0
    vmovss  dword ptr [rbp+0D0h+vec], xmm2
    vmovss  dword ptr [rbp+0D0h+vec+8], xmm0
  }
  WorldUpReferenceFrame::AddUpContribution(&v105, *(float *)&_XMM1, &vec);
  trace.m_flags |= 0x80u;
  v29 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v29->current.enabled )
    trace.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&trace, worldId, &results, &start, &vec, &bounds_origin, ps->clientNum, traceMask, ps);
  trace.m_flags &= ~0x80u;
  v30 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( v30->current.enabled )
    trace.m_flags &= ~0x200u;
  if ( !results.startsolid )
  {
    __asm
    {
      vmovss  xmm0, [rbp+0D0h+results.fraction]
      vcomiss xmm0, xmm7
    }
    goto LABEL_23;
  }
  LOBYTE(ledgeFlags) = 0;
LABEL_90:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+1D0h+var_58+8]
    vmovaps xmm7, [rsp+1D0h+var_68+8]
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
  char v11; 
  char v12; 
  const dvar_t *v13; 
  const dvar_t *v16; 
  WorldUpReferenceFrame v23; 

  _RDI = mresults;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2658, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2659, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  if ( Mantle_PlayerPushingIntoSurface(ps, pmoveHandler, wishdir, _RDI) || Mantle_InDistanceRegardlessOfSpeed(ps, _RDI) && ps->groundEntityNum != 2047 )
    return 1i64;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v23, ps, pmoveHandler);
  *(double *)&_XMM0 = WorldUpReferenceFrame::Vec2Dot(&v23, &_RDI->dir, &ps->velocity);
  __asm
  {
    vcomiss xmm0, cs:__real@3a83126f
    vmovaps xmm2, xmm0
  }
  if ( !(v11 | v12) )
  {
    __asm { vmovss  xmm0, dword ptr [rdi+70h] }
    v16 = DCONST_DVARINT_mantle_max_time;
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vaddss  xmm1, xmm0, cs:__real@41000000
      vdivss  xmm6, xmm1, xmm2
    }
    if ( !DCONST_DVARINT_mantle_max_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_max_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@3a03126f
      vcomiss xmm6, xmm1
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
    if ( !(v11 | v12) )
    {
      Mantle_DebugPrint(1u, "Mantle Failed: Player is not fast enough to reach ledge from this distance");
      return 0i64;
    }
    return 1i64;
  }
  v13 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
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
  char v8; 
  vec3_t vec; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2723, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2723, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RSI->groundEntityNum != 2047 )
    return 1;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+34h]
    vmovss  xmm0, dword ptr [rsi+30h]
    vmovss  xmm2, dword ptr [rsi+38h]
    vmovss  dword ptr [rsp+0C8h+vec+4], xmm1
    vmovss  xmm1, cs:__real@c2100000; height
    vmovss  dword ptr [rsp+0C8h+vec], xmm0
    vmovss  dword ptr [rsp+0C8h+vec+8], xmm2
  }
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
  Mantle_SetTraceFlags(pm->m_trace);
  BgTrace::LegacyTrace(pm->m_trace, pm, &results, &_RSI->origin, &vec, &bounds_origin, _RSI->clientNum, pm->tracemask);
  Mantle_RestoreTraceFlags(pm->m_trace);
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+results.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  return !v8;
}

/*
==============
Mantle_DebugDrawTraces
==============
*/
void Mantle_DebugDrawTraces(pmove_t *pm, const MantleResults *results, const bool mantleActivated)
{
  playerState_s *ps; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const BgHandler *m_bgHandler; 
  const dvar_t *v11; 
  unsigned int unsignedInt; 
  __int64 v14; 
  bool v15; 
  char v33; 
  int ledgeFlags; 
  const char *v59; 
  char v60; 
  bool v61; 
  int v68; 
  Bounds *p_downwardCapsuleSweepForLedgeBounds; 
  vec3_t *p_downwardCapsuleSweepForLedgeStart; 
  vec3_t *p_downwardCapsuleSweepForLedgeEnd; 
  bool v72; 
  const char *v73; 
  int overFlags; 
  char v99; 
  bool v100; 
  const char *v101; 
  int v108; 
  Bounds *p_ledgeDownwardCapsuleSweepBounds; 
  char v111; 
  vec3_t *p_ledgeDownwardCapsuleSweepStart; 
  bool v113; 
  vec3_t *p_ledgeDownwardCapsuleSweepEnd; 
  const char *v115; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  tmat33_t<vec3_t> v140; 
  vec4_t v141; 
  vec4_t v142; 
  vec4_t v143; 
  tmat33_t<vec3_t> axis; 
  vec4_t v145; 
  vec3_t outOrigin; 
  int v147[4]; 
  int v148[4]; 
  int v149[4]; 
  int v150[4]; 
  int v151[4]; 
  vec4_t v152; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3644, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3644, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = DVARBOOL_mantle_debug_traces_once;
  if ( !DVARBOOL_mantle_debug_traces_once && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug_traces_once") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
    goto LABEL_19;
  if ( mantleActivated )
  {
    v9 = DCONST_DVARBOOL_mantle_debug_traces_activation;
    if ( !DCONST_DVARBOOL_mantle_debug_traces_activation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug_traces_activation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
LABEL_19:
      if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 444, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
        __debugbreak();
      if ( (results->edgeFlags[0] & 4) == 0 )
      {
        m_bgHandler = pm->m_bgHandler;
        if ( !m_bgHandler->IsClient((BgHandler *)m_bgHandler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3657, ASSERT_TYPE_ASSERT, "(handler->IsClient())", (const char *)&queryFormat, "handler->IsClient()") )
          __debugbreak();
        v11 = DCONST_DVARINT_mantle_debug_traces_duration;
        _RDI = &results->debugDraw;
        if ( !DCONST_DVARINT_mantle_debug_traces_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug_traces_duration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        unsignedInt = v11->current.unsignedInt;
        BG_GetPlayerEyePosition(pm->weaponMap, ps, &outOrigin, m_bgHandler);
        AnglesToAxis(&ps->viewangles, &axis);
        v15 = !results->debugDraw.edgeFound;
        __asm
        {
          vmovss  xmm5, cs:DEFAULT_TEXT_FORWARD_OFFSET
          vmovss  xmm4, cs:DEFAULT_TEXT_LEFT_OFFSET
          vmulss  xmm1, xmm5, dword ptr [rbp+0D0h+axis]
          vaddss  xmm2, xmm1, dword ptr [rbp+0D0h+outOrigin]
          vmulss  xmm1, xmm4, dword ptr [rbp+0D0h+axis+0Ch]
          vmulss  xmm0, xmm4, dword ptr [rbp+0D0h+axis+10h]
          vaddss  xmm2, xmm2, xmm1
          vmulss  xmm1, xmm5, dword ptr [rbp+0D0h+axis+4]
          vaddss  xmm3, xmm1, dword ptr [rbp+0D0h+outOrigin+4]
          vaddss  xmm1, xmm3, xmm0
          vmulss  xmm0, xmm5, dword ptr [rbp+0D0h+axis+8]
          vaddss  xmm3, xmm0, dword ptr [rbp+0D0h+outOrigin+8]
          vmovss  [rbp+0D0h+var_A8], xmm2
          vmulss  xmm2, xmm4, dword ptr [rbp+0D0h+axis+14h]
          vaddss  xmm0, xmm3, xmm2
          vmovss  [rbp+0D0h+var_A0], xmm0
          vmovss  [rbp+0D0h+var_A4], xmm1
        }
        if ( v15 )
        {
          __asm { vmovss  xmm3, cs:DEFAULT_TEXT_SCALE }
          ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))m_bgHandler->DebugString)(m_bgHandler, v147, &colorRed);
          return;
        }
        __asm
        {
          vmovss  xmm2, cs:EDGE_NORMAL_LENGTH
          vmulss  xmm0, xmm2, dword ptr [r13+54h]
        }
        v33 = 0;
        __asm
        {
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vmulss  xmm0, xmm2, dword ptr [r13+58h]
          vmovss  [rbp+0D0h+var_98], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+4]
          vmulss  xmm0, xmm2, dword ptr [r13+5Ch]
          vmovss  xmm2, cs:EDGE_RADIUS
          vmovss  [rbp+0D0h+var_94], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbx+8]
          vmovss  [rbp+0D0h+var_90], xmm1
        }
        ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, _DWORD, unsigned int))m_bgHandler->DebugSphere)(m_bgHandler, &results->edgePos, v14, &colorGreen, 0, unsignedInt);
        m_bgHandler->DebugLine((BgHandler *)m_bgHandler, &results->edgePos, (const vec3_t *)v148, &colorGreen, 0, unsignedInt);
        __asm
        {
          vmovss  xmm5, cs:EDGE_TEXT_OFFSET_X
          vmovss  xmm4, cs:EDGE_TEXT_OFFSET_Z
          vmulss  xmm1, xmm5, dword ptr [rbp+0D0h+axis+0Ch]
          vaddss  xmm2, xmm1, dword ptr [rbx]
          vmulss  xmm1, xmm4, dword ptr [rbp+0D0h+axis+18h]
          vmulss  xmm0, xmm4, dword ptr [rbp+0D0h+axis+1Ch]
          vaddss  xmm2, xmm2, xmm1
          vmulss  xmm1, xmm5, dword ptr [rbp+0D0h+axis+10h]
          vaddss  xmm3, xmm1, dword ptr [rbx+4]
          vaddss  xmm1, xmm3, xmm0
          vmulss  xmm0, xmm5, dword ptr [rbp+0D0h+axis+14h]
          vaddss  xmm3, xmm0, dword ptr [rbx+8]
          vmovss  [rbp+0D0h+var_88], xmm2
          vmulss  xmm2, xmm4, dword ptr [rbp+0D0h+axis+20h]
          vaddss  xmm0, xmm3, xmm2
          vmovss  xmm3, cs:DEFAULT_TEXT_SCALE
          vmovss  [rbp+0D0h+var_80], xmm0
          vmovss  [rbp+0D0h+var_84], xmm1
        }
        ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))m_bgHandler->DebugString)(m_bgHandler, v149, &colorGreen);
        __asm { vmovups xmm1, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue }
        ledgeFlags = results->debugDraw.ledgeFlags;
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
          vmovss  xmm2, dword ptr [rdi+30h]
        }
        v59 = "Ledge Forward Sweep: Successful";
        v60 = 0;
        v61 = 1;
        __asm
        {
          vmovups [rbp+0D0h+var_C8], xmm1
          vmovups [rbp+0D0h+var_100], xmm0
          vmovups [rbp+0D0h+var_110], xmm1
          vmovups [rbp+0D0h+var_120], xmm1
        }
        if ( (ledgeFlags & 2) != 0 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
            vmovups [rbp+0D0h+var_100], xmm0
            vmovups [rbp+0D0h+var_110], xmm0
          }
          v59 = "Ledge Forward Sweep: Start Pos Blocked!";
          v61 = 0;
        }
        else if ( (ledgeFlags & 4) != 0 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
            vmovups [rbp+0D0h+var_100], xmm0
            vmovups [rbp+0D0h+var_120], xmm0
          }
          v59 = "Ledge Forward Sweep: End Pos Blocked!";
          v61 = 1;
        }
        else
        {
          v60 = 1;
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0D0h+axis]
          vmovss  xmm3, cs:DEFAULT_TEXT_SCALE
          vmovss  [rsp+1D0h+var_170], xmm2
        }
        v140.m[2].v[2] = axis.m[2].v[2];
        __asm { vmovups [rbp+0D0h+var_150], ymm0 }
        Mantle_DebugDrawTraces_DrawCapsuleSweep(pm, &v140, v59, *(const float *)&_XMM3, &v143, &results->debugDraw.forwardCapsuleSweepForLedgeBounds, &results->debugDraw.forwardCapsuleSweepForLedgeStart, &v142, &results->debugDraw.forwardCapsuleSweepForLedgeEnd, &v141, v61, &v145, v136, unsignedInt);
        if ( v60 )
        {
          __asm
          {
            vmovups xmm1, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
            vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
          }
          v68 = results->debugDraw.ledgeFlags;
          p_downwardCapsuleSweepForLedgeBounds = &results->debugDraw.downwardCapsuleSweepForLedgeBounds;
          __asm { vmovaps [rsp+1D0h+var_40], xmm6 }
          p_downwardCapsuleSweepForLedgeStart = &results->debugDraw.downwardCapsuleSweepForLedgeStart;
          p_downwardCapsuleSweepForLedgeEnd = &results->debugDraw.downwardCapsuleSweepForLedgeEnd;
          v72 = 1;
          v73 = "Ledge Downward Sweep: Successful";
          __asm
          {
            vmovss  xmm6, dword ptr [rdi+68h]
            vmovups [rbp+0D0h+var_C8], xmm1
            vmovups [rbp+0D0h+var_110], xmm0
            vmovups [rbp+0D0h+var_100], xmm1
            vmovups [rbp+0D0h+var_120], xmm1
          }
          if ( (v68 & 0x10) != 0 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
              vmovups [rbp+0D0h+var_110], xmm0
              vmovups [rbp+0D0h+var_100], xmm0
            }
            v73 = "Ledge Downward Sweep: Start Pos Blocked!";
            v72 = 0;
            goto LABEL_50;
          }
          if ( (v68 & 0x20) != 0 )
          {
            v73 = "Ledge Downward Sweep: Blocked by a body!";
          }
          else if ( (v68 & 0x40) != 0 )
          {
            v73 = "Ledge Downward Sweep: Surface Not Walkable!";
          }
          else
          {
            if ( (v68 & 0x80u) == 0 )
            {
              if ( (v68 & 8) != 0 )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                  vmovups [rbp+0D0h+var_110], xmm0
                }
                v73 = "Ledge Downward Sweep: No Ledge Found!";
              }
              else
              {
                if ( (v68 & 1) == 0 )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3803, ASSERT_TYPE_ASSERT, "(debugDrawData.ledgeFlags & (1 << 0))", (const char *)&queryFormat, "debugDrawData.ledgeFlags & MANTLE_DEBUG_DRAW_FLAGS_LEDGE_FOUND") )
                    __debugbreak();
                  p_downwardCapsuleSweepForLedgeEnd = &results->debugDraw.downwardCapsuleSweepForLedgeEnd;
                  v72 = 1;
                  p_downwardCapsuleSweepForLedgeStart = &results->debugDraw.downwardCapsuleSweepForLedgeStart;
                  p_downwardCapsuleSweepForLedgeBounds = &results->debugDraw.downwardCapsuleSweepForLedgeBounds;
                }
                v33 = 1;
              }
LABEL_50:
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+0D0h+axis]
                vmovss  xmm3, cs:DEFAULT_TEXT_SCALE
                vmovss  [rsp+1D0h+var_170], xmm6
              }
              v140.m[2].v[2] = axis.m[2].v[2];
              __asm { vmovups [rbp+0D0h+var_150], ymm0 }
              Mantle_DebugDrawTraces_DrawCapsuleSweep(pm, &v140, v73, *(const float *)&_XMM3, &v142, p_downwardCapsuleSweepForLedgeBounds, p_downwardCapsuleSweepForLedgeStart, &v143, p_downwardCapsuleSweepForLedgeEnd, &v141, v72, &v145, v137, unsignedInt);
              if ( !v33 )
                goto LABEL_74;
              m_bgHandler->DebugStar((BgHandler *)m_bgHandler, &results->ledgePos, &colorGreen, unsignedInt);
              __asm
              {
                vmovss  xmm3, cs:LEDGE_TEXT_OFFSET_X
                vmulss  xmm0, xmm3, dword ptr [rbp+0D0h+axis+0Ch]
                vaddss  xmm2, xmm0, dword ptr [rbx]
                vmovss  xmm4, cs:LEDGE_TEXT_OFFSET_Z
                vmulss  xmm1, xmm4, dword ptr [rbp+0D0h+axis+18h]
                vaddss  xmm0, xmm2, xmm1
                vmulss  xmm2, xmm3, dword ptr [rbp+0D0h+axis+10h]
                vaddss  xmm1, xmm2, dword ptr [rbx+4]
                vmulss  xmm2, xmm3, dword ptr [rbp+0D0h+axis+14h]
                vaddss  xmm3, xmm2, dword ptr [rbx+8]
                vmovss  [rbp+0D0h+var_78], xmm0
                vmulss  xmm0, xmm4, dword ptr [rbp+0D0h+axis+1Ch]
                vaddss  xmm1, xmm1, xmm0
                vmulss  xmm0, xmm4, dword ptr [rbp+0D0h+axis+20h]
                vmovss  [rbp+0D0h+var_74], xmm1
                vaddss  xmm1, xmm3, xmm0
                vmovss  xmm3, cs:DEFAULT_TEXT_SCALE
                vmovss  [rbp+0D0h+var_70], xmm1
              }
              ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))m_bgHandler->DebugString)(m_bgHandler, v150, &colorGreen);
              overFlags = results->debugDraw.overFlags;
              if ( (overFlags & 1) == 0 )
                goto LABEL_74;
              __asm
              {
                vmovups xmm1, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan
                vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
                vmovss  xmm2, dword ptr [rdi+0A0h]
              }
              v99 = 0;
              v100 = 1;
              v101 = "Over Forward Sweep: Successful";
              __asm
              {
                vmovups [rbp+0D0h+var_C8], xmm1
                vmovups [rbp+0D0h+var_100], xmm0
                vmovups [rbp+0D0h+var_110], xmm1
                vmovups [rbp+0D0h+var_120], xmm1
              }
              if ( (overFlags & 2) != 0 )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                  vmovups [rbp+0D0h+var_100], xmm0
                  vmovups [rbp+0D0h+var_110], xmm0
                }
                v101 = "Over Forward Sweep: Start Pos Blocked!";
                v100 = 0;
              }
              else if ( (overFlags & 4) != 0 )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                  vmovups [rbp+0D0h+var_100], xmm0
                  vmovups [rbp+0D0h+var_120], xmm0
                }
                v101 = "Over Forward Sweep: End Pos Blocked!";
              }
              else
              {
                v99 = 1;
              }
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+0D0h+axis]
                vmovss  xmm3, cs:DEFAULT_TEXT_SCALE
                vmovss  [rsp+1D0h+var_170], xmm2
              }
              v140.m[2].v[2] = axis.m[2].v[2];
              __asm { vmovups [rbp+0D0h+var_150], ymm0 }
              Mantle_DebugDrawTraces_DrawCapsuleSweep(pm, &v140, v101, *(const float *)&_XMM3, &v143, &results->debugDraw.ledgeForwardCapsuleSweepBounds, &results->debugDraw.ledgeForwardCapsuleSweepStart, &v142, &results->debugDraw.ledgeForwardCapsuleSweepEnd, &v141, v100, &v145, v138, unsignedInt);
              if ( !v99 )
                goto LABEL_74;
              __asm
              {
                vmovups xmm1, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan
                vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
              }
              v108 = results->debugDraw.overFlags;
              p_ledgeDownwardCapsuleSweepBounds = &results->debugDraw.ledgeDownwardCapsuleSweepBounds;
              __asm { vmovss  xmm6, dword ptr [rdi+0D8h] }
              v111 = 0;
              p_ledgeDownwardCapsuleSweepStart = &results->debugDraw.ledgeDownwardCapsuleSweepStart;
              v113 = 1;
              p_ledgeDownwardCapsuleSweepEnd = &results->debugDraw.ledgeDownwardCapsuleSweepEnd;
              *(_QWORD *)v142.v = &results->debugDraw.ledgeDownwardCapsuleSweepEnd;
              v115 = "Over Downward Sweep: Successful";
              __asm
              {
                vmovups [rbp+0D0h+var_58], xmm1
                vmovups [rbp+0D0h+var_120], xmm0
                vmovups [rbp+0D0h+var_C8], xmm1
                vmovups [rbp+0D0h+var_100], xmm1
              }
              if ( (v108 & 8) != 0 )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                  vmovups [rbp+0D0h+var_120], xmm0
                  vmovups [rbp+0D0h+var_C8], xmm0
                }
                v115 = "Over Downward Sweep: Start Pos Blocked!";
                v113 = 0;
              }
              else
              {
                if ( (v108 & 0x10) != 0 )
                {
                  v115 = "Over Downward Sweep: Blocked by Body!";
                }
                else if ( (v108 & 0x20) != 0 )
                {
                  v115 = "Over Downward Sweep: Not low enough!";
                }
                else
                {
                  if ( (v108 & 0x40) == 0 )
                  {
                    if ( (v108 & 0x80u) == 0 )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3918, ASSERT_TYPE_ASSERT, "(debugDrawData.overFlags & (1 << 7))", (const char *)&queryFormat, "debugDrawData.overFlags & MANTLE_DEBUG_DRAW_FLAGS_OVER_POS_FOUND") )
                        __debugbreak();
                      p_ledgeDownwardCapsuleSweepEnd = *(vec3_t **)v142.v;
                      v113 = 1;
                      p_ledgeDownwardCapsuleSweepStart = &results->debugDraw.ledgeDownwardCapsuleSweepStart;
                      p_ledgeDownwardCapsuleSweepBounds = &results->debugDraw.ledgeDownwardCapsuleSweepBounds;
                    }
                    v111 = 1;
                    goto LABEL_72;
                  }
                  v115 = "Over Downward Sweep: Not within height tolerance!";
                }
                __asm
                {
                  vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                  vmovups [rbp+0D0h+var_120], xmm0
                  vmovups [rbp+0D0h+var_100], xmm0
                }
              }
LABEL_72:
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+0D0h+axis]
                vmovss  xmm3, cs:DEFAULT_TEXT_SCALE
                vmovss  [rsp+1D0h+var_170], xmm6
              }
              v140.m[2].v[2] = axis.m[2].v[2];
              __asm { vmovups [rbp+0D0h+var_150], ymm0 }
              Mantle_DebugDrawTraces_DrawCapsuleSweep(pm, &v140, v115, *(const float *)&_XMM3, &v141, p_ledgeDownwardCapsuleSweepBounds, p_ledgeDownwardCapsuleSweepStart, &v145, p_ledgeDownwardCapsuleSweepEnd, &v143, v113, &v152, v139, unsignedInt);
              if ( v111 )
              {
                m_bgHandler->DebugStar((BgHandler *)m_bgHandler, &results->endPos, &colorGreen, unsignedInt);
                __asm
                {
                  vmovss  xmm3, cs:OVER_TEXT_OFFSET_X
                  vmulss  xmm0, xmm3, dword ptr [rbp+0D0h+axis+0Ch]
                  vaddss  xmm2, xmm0, dword ptr [r13+24h]
                  vmovss  xmm4, cs:OVER_TEXT_OFFSET_Z
                  vmulss  xmm1, xmm4, dword ptr [rbp+0D0h+axis+18h]
                  vaddss  xmm0, xmm2, xmm1
                  vmulss  xmm2, xmm3, dword ptr [rbp+0D0h+axis+10h]
                  vaddss  xmm1, xmm2, dword ptr [r13+28h]
                  vmulss  xmm2, xmm3, dword ptr [rbp+0D0h+axis+14h]
                  vaddss  xmm3, xmm2, dword ptr [r13+2Ch]
                  vmovss  [rbp+0D0h+var_68], xmm0
                  vmulss  xmm0, xmm4, dword ptr [rbp+0D0h+axis+1Ch]
                  vaddss  xmm1, xmm1, xmm0
                  vmulss  xmm0, xmm4, dword ptr [rbp+0D0h+axis+20h]
                  vmovss  [rbp+0D0h+var_64], xmm1
                  vaddss  xmm1, xmm3, xmm0
                  vmovss  xmm3, cs:DEFAULT_TEXT_SCALE
                  vmovss  [rbp+0D0h+var_60], xmm1
                }
                ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))m_bgHandler->DebugString)(m_bgHandler, v151, &colorGreen);
              }
LABEL_74:
              __asm { vmovaps xmm6, [rsp+1D0h+var_40] }
              return;
            }
            v73 = "Ledge Downward Sweep: Cannot Fit Crouched!";
          }
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
            vmovups [rbp+0D0h+var_110], xmm0
            vmovups [rbp+0D0h+var_120], xmm0
          }
          goto LABEL_50;
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

void __fastcall Mantle_DebugDrawTraces_DrawCapsuleSweep(pmove_t *pm, const tmat33_t<vec3_t> *cameraAxis, const char *debugText, double debugTextScale, const vec4_t *debugTextColor, const Bounds *bounds, const vec3_t *start, const vec4_t *startColor, const vec3_t *end, const vec4_t *endColor, const bool drawEndCapsule, const vec4_t *lineColor, const float fraction, const int renderDuration)
{
  const BgHandler *m_bgHandler; 
  BgHandler v25; 
  char *fmt; 
  vec3_t v51; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  _RBP = end;
  __asm { vmovaps xmm6, xmm3 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3608, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3608, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  m_bgHandler = pm->m_bgHandler;
  if ( debugText && *debugText )
  {
    __asm
    {
      vmovss  xmm5, cs:TEXT_OFFSET_X
      vmovss  xmm4, cs:TEXT_OFFSET_Z
      vmulss  xmm0, xmm5, dword ptr [r13+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm4, dword ptr [r13+18h]
    }
    v25.__vftable = m_bgHandler->__vftable;
    __asm
    {
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm5, dword ptr [r13+10h]
      vaddss  xmm2, xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+0A8h+var_60], xmm1
      vmulss  xmm1, xmm4, dword ptr [r13+1Ch]
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm5, dword ptr [r13+14h]
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+0A8h+var_60+4], xmm0
      vmulss  xmm0, xmm4, dword ptr [r13+20h]
      vaddss  xmm1, xmm2, xmm0
      vmovaps xmm3, xmm6
      vmovss  dword ptr [rsp+0A8h+var_60+8], xmm1
    }
    HIDWORD(fmt) = HIDWORD(debugText);
    ((void (__fastcall *)(const BgHandler *, vec3_t *, const vec4_t *))v25.DebugString)(m_bgHandler, &v51, debugTextColor);
  }
  MantleDebugDrawData_DrawCapsule(m_bgHandler, start, bounds, startColor);
  if ( drawEndCapsule )
  {
    __asm
    {
      vmovss  xmm4, [rsp+0A8h+arg_60]
      vmovss  xmm0, dword ptr [rbp+0]
      vsubss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rbp+4]
      vmulss  xmm1, xmm1, xmm4
      vaddss  xmm0, xmm1, dword ptr [rdi]
      vsubss  xmm1, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+0A8h+var_60], xmm0
      vmulss  xmm0, xmm1, xmm4
      vaddss  xmm3, xmm0, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [rbp+8]
      vsubss  xmm0, xmm1, dword ptr [rdi+8]
      vmulss  xmm2, xmm0, xmm4
      vmovss  dword ptr [rsp+0A8h+var_60+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+0A8h+var_60+8], xmm3
    }
    MantleDebugDrawData_DrawCapsule(m_bgHandler, &v51, bounds, endColor);
  }
  LODWORD(fmt) = 0;
  m_bgHandler->DebugLine((BgHandler *)m_bgHandler, start, end, lineColor, (int)fmt, renderDuration);
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
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

void __fastcall Mantle_DebugTraceLine(const BgHandler *pmoveHandler, const vec3_t *startPos, const vec3_t *endPos, double fraction, const vec4_t *color, const int time)
{
  const dvar_t *v7; 
  BgHandler_vtbl *v15; 
  int v26[4]; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  v7 = DCONST_DVARINT_mantle_debug;
  _RSI = endPos;
  __asm { vmovaps xmm6, xmm3 }
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( (v7->current.enabled & 4) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rsi+4]
    }
    v15 = pmoveHandler->__vftable;
    __asm
    {
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rdi]
      vsubss  xmm1, xmm0, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  [rsp+88h+var_48], xmm3
      vaddss  xmm3, xmm2, dword ptr [rdi+4]
      vmulss  xmm2, xmm1, xmm6
      vmovss  [rsp+88h+var_44], xmm3
      vaddss  xmm3, xmm2, dword ptr [rdi+8]
      vmovss  [rsp+88h+var_40], xmm3
    }
    v15->DebugLine((BgHandler *)pmoveHandler, startPos, (const vec3_t *)v26, color, 0, time);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
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

void __fastcall Mantle_DumpMotionPath(const MantleMotionPathParams *params, double distance2D, double height, double speed2D)
{
  int v21; 
  int v22; 
  const char *v30; 
  char v64; 
  fileHandle_t *v65; 
  fileHandle_t v67; 
  char *fmt; 
  char *fmta; 
  double v106; 
  double v107; 
  vec3_t outPos; 
  BSplineRelaxedCBezier outMantleSpline; 
  char dest[256]; 
  char v116; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  _RBP = params;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovss  [rsp+568h+var_524], xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm15, xmm2
    vmovaps xmm8, xmm1
  }
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&outMantleSpline);
  Mantle_BuildMotionPathWithParams(_RBP, &outMantleSpline);
  __asm { vmovss  xmm7, [rsp+568h+outMantleSpline.totalLength] }
  v21 = 0;
  v22 = 0;
  __asm { vmovss  [rsp+568h+var_528], xmm7 }
  if ( _RBP->isLadder )
  {
    _RBX = DVARFLT_mantle_export_height;
    v22 = 2048;
    if ( !DVARFLT_mantle_export_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcvttss2si r14d, dword ptr [rbx+28h] }
    _RBX = DVARFLT_mantle_export_ledge_dist;
    if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcvttss2si r8d, dword ptr [rbx+28h] }
    Com_sprintf<256>((char (*)[256])dest, "mantle_motion_ladder_%d_%d.txt", _R8, _ER14);
  }
  else if ( _RBP->isOver )
  {
    v22 = 1;
    Com_sprintf<256>((char (*)[256])dest, "mantle_motion_over.txt");
  }
  else
  {
    Com_sprintf<256>((char (*)[256])dest, "mantle_motion_on.txt");
  }
  __asm
  {
    vmovaps xmm3, xmm6; vel2D
    vmovaps xmm2, xmm7; distance3D
    vmovaps xmm1, xmm15; height
  }
  Mantle_GetMantleTime(v22, *(const float *)&_XMM1, *(const float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm9, dword ptr [rbp+0]
    vmovss  xmm10, dword ptr [rbp+4]
    vmovss  xmm12, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm14, xmm0, cs:__real@3a83126f
    vmulss  xmm1, xmm14, cs:__real@41efffff
    vaddss  xmm0, xmm9, dword ptr [rbp+0Ch]
    vcvttss2si esi, xmm1
    vaddss  xmm1, xmm10, dword ptr [rbp+10h]
    vsubss  xmm2, xmm0, xmm9
    vsubss  xmm0, xmm1, xmm10
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm1, xmm3, xmm2
    vsqrtss xmm11, xmm1, xmm1
    vmovaps xmm13, xmm12
  }
  if ( _RBP->isOver )
  {
    _EBX = 0;
    if ( _ESI >= 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vdivss  xmm7, xmm12, xmm0
        vxorps  xmm8, xmm8, xmm8
      }
      while ( 1 )
      {
        __asm
        {
          vmovd   xmm6, ebx
          vcvtdq2ps xmm6, xmm6
          vmulss  xmm1, xmm7, xmm6; t
        }
        BG_BSpline_RelaxedCBezier_Evaluate(&outMantleSpline, *(float *)&_XMM1, &outPos);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+568h+outPos]
          vmovss  xmm1, dword ptr [rsp+568h+outPos+4]
          vsubss  xmm2, xmm1, xmm10
          vmulss  xmm3, xmm2, xmm2
          vsubss  xmm4, xmm0, xmm9
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm1, xmm3, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcomiss xmm2, xmm11
          vmovss  dword ptr [rsp+568h+outPos+8], xmm8
        }
        if ( !v64 )
          break;
        if ( ++_EBX > _ESI )
          goto LABEL_19;
      }
      __asm { vmulss  xmm13, xmm6, cs:__real@3d088889 }
LABEL_19:
      __asm
      {
        vmovss  xmm8, [rsp+568h+var_524]
        vmovss  xmm7, [rsp+568h+var_528]
      }
    }
  }
  v65 = FS_FOpenFileAppend((fileHandle_t *)dest, v30);
  __asm { vmovaps xmm11, [rsp+568h+var_98] }
  v67.handle.handle = (__int64)v65;
  __asm
  {
    vmovaps xmm10, [rsp+568h+var_88]
    vmovaps xmm9, [rsp+568h+var_78]
  }
  if ( v65 != (fileHandle_t *)-1i64 )
  {
    __asm
    {
      vmulss  xmm0, xmm13, xmm14
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+568h+var_538], xmm1
      vcvtss2sd xmm4, xmm14, xmm14
      vcvtss2sd xmm3, xmm15, xmm15
      vcvtss2sd xmm2, xmm8, xmm8
      vcvtss2sd xmm5, xmm7, xmm7
      vmovsd  [rsp+568h+var_540], xmm4
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+568h+fmt], xmm5
    }
    FS_Printf((fileHandle_t)v65, "X: %.4f Y: %.4f 3D Distance: %.4f Total Time: %.4f (seconds) Ledge Time: %.4f (seconds)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, v106, v107);
    FS_Printf(v67, "Frame\tDistance\tHeight\n");
    if ( _ESI >= 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vdivss  xmm6, xmm12, xmm0
      }
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vmulss  xmm1, xmm0, xmm6; t
        }
        BG_BSpline_RelaxedCBezier_Evaluate(&outMantleSpline, *(float *)&_XMM1, &outPos);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+568h+outPos]
          vsubss  xmm5, xmm0, dword ptr [rbp+0]
          vmovss  xmm1, dword ptr [rsp+568h+outPos+4]
          vsubss  xmm3, xmm1, dword ptr [rbp+4]
          vmovss  xmm0, dword ptr [rsp+568h+outPos+8]
          vsubss  xmm2, xmm0, dword ptr [rbp+8]
          vmulss  xmm1, xmm3, xmm3
          vcvtss2sd xmm4, xmm2, xmm2
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcvtss2sd xmm3, xmm2, xmm2
          vmovq   r9, xmm3
          vmovsd  [rsp+568h+fmt], xmm4
        }
        FS_Printf(v67, "%d\t%.4f\t%.4f\n", (unsigned int)v21++, *(double *)&_XMM3, *(double *)&fmta);
      }
      while ( v21 <= _ESI );
    }
    FS_FCloseFile(v67);
  }
  _R11 = &v116;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm12, xmmword ptr [r11-88h]
    vmovaps xmm13, xmmword ptr [r11-98h]
    vmovaps xmm14, xmmword ptr [r11-0A8h]
    vmovaps xmm15, xmmword ptr [r11-0B8h]
  }
}

/*
==============
Mantle_DumpMotionPath
==============
*/
void Mantle_DumpMotionPath(pmove_t *pm)
{
  const dvar_t *v6; 
  unsigned int v14; 
  MantleMotionPathParams params; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1546, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1546, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( (v6->current.enabled & 8) != 0 && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovaps [rsp+0A8h+var_28], xmm7
    }
    if ( _RSI == (playerState_s *)-948i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 293, ASSERT_TYPE_ASSERT, "(compressedData)", (const char *)&queryFormat, "compressedData") )
      __debugbreak();
    __asm { vmovss  xmm1, cs:__real@433e0000; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(_RSI->mantleState.compressedAnimData.distance2D, *(float *)&_XMM1, 8u);
    __asm
    {
      vmovss  xmm1, cs:__real@433e0000; maxAbsValueSize
      vmovaps xmm7, xmm0
    }
    *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(_RSI->mantleState.compressedAnimData.distanceZ, *(float *)&_XMM1, 8u);
    __asm
    {
      vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
      vmovaps xmm6, xmm0
    }
    MSG_UnpackSignedFloat(_RSI->mantleState.compressedAnimData.angle, *(float *)&_XMM1, 9u);
    __asm { vmovss  xmm0, dword ptr [rsi+390h] }
    *(_QWORD *)&params.endPosOffset.y = 0i64;
    *((_DWORD *)&params.endPosOffset + 3) = 0;
    *(_DWORD *)(&params.drawDebug + 1) = 0;
    *(&params.drawDebug + 5) = 0;
    params.bgHandler = pm->m_bgHandler;
    params.isOver = _RSI->mantleState.flags & 1;
    __asm { vpxor   xmm1, xmm1, xmm1 }
    v14 = (unsigned int)_RSI->mantleState.flags >> 11;
    __asm
    {
      vmovss  dword ptr [rsp+0A8h+params.startPos], xmm0
      vmovss  xmm0, dword ptr [rsi+398h]
      vmovdqu xmmword ptr [rsp+0A8h+params.ledgeOffset], xmm1
      vmovss  xmm1, dword ptr [rsi+394h]
    }
    params.isLadder = v14 & 1;
    __asm
    {
      vmovss  dword ptr [rsp+0A8h+params.startPos+4], xmm1
      vmovss  dword ptr [rsp+0A8h+params.startPos+8], xmm0
    }
    BG_GetMantleLedgePosOffset(_RSI, &params.ledgeOffset);
    BG_GetMantleEndPosOffset(_RSI, &params.endPosOffset);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+40h]
      vmovss  xmm0, dword ptr [rsi+3Ch]
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2; speed2D
      vmovaps xmm2, xmm6; height
      vmovaps xmm1, xmm7; distance2D
    }
    params.drawDebug = !pm->isExtrapolation;
    Mantle_DumpMotionPath(&params, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3);
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_28]
      vmovaps xmm6, [rsp+0A8h+var_18]
    }
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
  __int64 v8; 
  _DWORD *v9; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  int v13; 
  char v28; 
  __int64 turn; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1630, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1630, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1632, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v8 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v9 = *(_DWORD **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8) + 272i64);
  clientNum = ps->clientNum;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 160i64))(v9) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9[2]);
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
    CharacterInfo = (characterInfo_t *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v9 + 224i64))(v9, (unsigned int)clientNum);
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1637, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v13 = 0;
  BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_MANTLE, 1, 0);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1585, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1587, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (_RBX->mantleState.flags & 0x20) == 0 && elapsedAnimTime < mantleLength - 250 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u) && pm->cmd.forwardmove == 127 )
    {
      _RBX->mantleState.compressedAnimData.endScriptAnimTableIndex = 3;
    }
    else if ( pm->cmd.forwardmove <= 0 )
    {
      _RBX->mantleState.compressedAnimData.endScriptAnimTableIndex = 0;
      *(_QWORD *)_RBX->velocity.v = 0i64;
      _RBX->velocity.v[2] = 0.0;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+3Ch]
        vmovss  xmm1, dword ptr [rbx+40h]
        vmovss  dword ptr [rsp+98h+vec], xmm0
        vmovss  xmm0, dword ptr [rbx+44h]
        vmovss  dword ptr [rsp+98h+vec+4], xmm1
        vmovaps [rsp+98h+var_38], xmm6
        vxorps  xmm1, xmm1, xmm1; height
        vmovss  dword ptr [rsp+98h+vec+8], xmm0
      }
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+98h+vec+4]
        vmovss  xmm1, dword ptr [rsp+98h+vec]
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+98h+vec+8]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vsqrtss xmm6, xmm2, xmm2
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_runbkThreshhold, "player_runbkThreshhold");
      __asm { vcomiss xmm0, xmm6 }
      LOBYTE(v13) = v28;
      _RBX->mantleState.compressedAnimData.endScriptAnimTableIndex = v13 + 1;
      __asm { vmovaps xmm6, [rsp+98h+var_38] }
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
  playerState_s *ps; 
  EdgeQueryCache *outHintNodeIndex; 
  const dvar_t *v43; 
  char v44; 
  __int64 v68; 
  __int64 v69; 
  const dvar_t *v82; 
  char v83; 
  unsigned __int64 v84; 
  const dvar_t *v85; 
  const char *v87; 
  char v93; 
  unsigned __int64 v121; 
  const BgHandler *v122; 
  unsigned __int8 v125; 
  EdgeId *v128; 
  char v134; 
  EdgeId v136; 
  const dvar_t *v150; 
  int integer; 
  const dvar_t *v153; 
  __int64 v154; 
  unsigned int EntityIndex; 
  unsigned int EdgeIndex; 
  const dvar_t *v167; 
  char v194; 
  bool v195; 
  const char *v211; 
  char v212; 
  char v213; 
  char v249; 
  int flags; 
  int v257; 
  __int64 result; 
  char v270; 
  unsigned __int64 outResultCount; 
  unsigned __int64 v272; 
  vec3_t *v273; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v274; 
  __int64 v275; 
  vec3_t handler; 
  vec3_t vec; 
  vec3_t point; 
  vec3_t outNormal; 
  vec3_t outSearchDir; 
  vec3_t v281; 
  vec3_t forward; 
  EdgeFrustumQueryDefinition v283; 
  vec3_t v284; 
  EdgeFrustumQueryDefinition definition; 
  tmat43_t<vec3_t> v1; 
  vec3_t outEdgePoint; 
  vec3_t start; 
  vec3_t axis; 
  vec3_t entityUp; 
  int v291[4]; 
  vec3_t end; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v293; 
  WorldUpReferenceFrame v294; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> viewBasis; 
  EdgeFrustumQueryShape shape; 
  EdgeFrustumQueryShape v298; 
  EdgeOctreeQueryFrustum v299; 
  EdgeOctreeQueryFrustum v300; 
  float resultFractionPool[16]; 
  EdgeId resultIdPool[17]; 
  char v303; 
  void *retaddr; 

  _RAX = &retaddr;
  v275 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R14 = searchOrigin;
  v273 = (vec3_t *)searchOrigin;
  *(_QWORD *)handler.v = pmoveHandler;
  _RDI = mresults;
  Sys_ProfBeginNamedEvent(0xFF008008, "Mantle_FindMantleEdge");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2314, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2314, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Mantle_GetSearchDirection(ps, pmoveHandler, mresults, wishDir, &outSearchDir, &forward);
  *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(ps);
  __asm { vmovaps xmm8, xmm0 }
  *(float *)&_XMM0 = Mantle_GetCheckHeight(ps, pmoveHandler, mresults);
  __asm { vmovaps xmm6, xmm0 }
  _RBX = DCONST_DVARFLT_mantle_check_radius;
  if ( !DCONST_DVARFLT_mantle_check_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm10, dword ptr [rbx+28h]
    vmulss  xmm9, xmm6, cs:__real@3f000000
  }
  *(float *)&_XMM0 = Mantle_GetCheckRange(ps, mresults);
  __asm { vmovaps xmm6, xmm0 }
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v294, ps, pmoveHandler);
  GenerateAxisFromForwardVector(&outSearchDir, &v294.m_axis, &outAxis);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+940h+outAxis+0Ch]
    vmovss  dword ptr [rbp+940h+axis], xmm1
    vmovss  xmm2, dword ptr [rbp+940h+outAxis+10h]
    vmovss  dword ptr [rbp+940h+axis+4], xmm2
    vmovss  xmm1, dword ptr [rbp+940h+outAxis+14h]
    vmovss  dword ptr [rbp+940h+axis+8], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+outAxis+18h]
    vmovss  dword ptr [rbp+940h+var_960], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+outAxis+1Ch]
    vmovss  dword ptr [rbp+940h+var_960+4], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+outAxis+20h]
    vmovss  dword ptr [rbp+940h+var_960+8], xmm0
  }
  GenerateAxisFromForwardVector(&forward, &v294.m_axis, &viewBasis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+940h+viewBasis+18h]
    vmovss  dword ptr [rbp+940h+entityUp], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+viewBasis+1Ch]
    vmovss  dword ptr [rbp+940h+entityUp+4], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+viewBasis+20h]
    vmovss  dword ptr [rbp+940h+entityUp+8], xmm0
    vmovss  xmm1, dword ptr [r14]
    vmovss  dword ptr [rbp+940h+vec], xmm1
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rbp+940h+vec+4], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [rbp+940h+vec+8], xmm1
    vmovaps xmm1, xmm9; height
  }
  WorldUpReferenceFrame::AddUpContribution(&v294, *(float *)&_XMM1, &vec);
  outHintNodeIndex = pmoveHandler->GetEdgeQueryCache(pmoveHandler, (unsigned int)ps->clientNum);
  __asm
  {
    vmovss  [rbp+940h+definition.nearHalfWidth], xmm10
    vmovss  [rbp+940h+definition.nearHalfHeight], xmm9
    vmovss  [rbp+940h+definition.farHalfWidth], xmm10
    vmovss  [rbp+940h+definition.farHalfHeight], xmm9
  }
  v43 = DCONST_DVARMPFLT_mantle_edge_search_near_plane_offset;
  if ( !DCONST_DVARMPFLT_mantle_edge_search_near_plane_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_edge_search_near_plane_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  __asm
  {
    vsubss  xmm0, xmm8, dword ptr [r14+28h]
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm1, xmm0, xmm1
    vmovss  [rbp+940h+definition.nearDist], xmm1
    vaddss  xmm0, xmm6, xmm8
    vmovss  xmm12, cs:__real@3e000000
    vaddss  xmm2, xmm0, xmm12
    vmovss  [rbp+940h+definition.farDist], xmm2
    vmovss  xmm0, [rbp+940h+definition.nearHalfWidth]
    vucomiss xmm0, dword ptr [rbx+150h]
  }
  if ( !v44 )
    goto LABEL_19;
  __asm
  {
    vmovss  xmm0, [rbp+940h+definition.nearHalfHeight]
    vucomiss xmm0, dword ptr [rbx+154h]
  }
  if ( !v44 )
    goto LABEL_19;
  __asm
  {
    vmovss  xmm0, [rbp+940h+definition.farHalfWidth]
    vucomiss xmm0, dword ptr [rbx+158h]
  }
  if ( !v44 )
    goto LABEL_19;
  __asm
  {
    vmovss  xmm0, [rbp+940h+definition.farHalfHeight]
    vucomiss xmm0, dword ptr [rbx+15Ch]
  }
  if ( !v44 )
    goto LABEL_19;
  __asm { vucomiss xmm1, dword ptr [rbx+160h] }
  if ( !v44 )
    goto LABEL_19;
  __asm { vucomiss xmm2, dword ptr [rbx+164h] }
  if ( !v44 )
  {
LABEL_19:
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+940h+definition.nearHalfWidth]
      vmovups xmmword ptr [rbx+150h], xmm0
      vmovsd  xmm1, qword ptr [rbp+940h+definition.nearDist]
      vmovsd  qword ptr [rbx+160h], xmm1
    }
    EdgeFrustumQueryShape::Calculate(&outHintNodeIndex->mantleQueryShape, &definition);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+940h+outSearchDir]
    vmovss  dword ptr [rbp+940h+v1], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+outSearchDir+4]
    vmovss  dword ptr [rbp+940h+v1+4], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+outSearchDir+8]
    vmovss  dword ptr [rbp+940h+v1+8], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+var_960]
    vmovss  dword ptr [rbp+940h+v0], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+var_960+4]
    vmovss  dword ptr [rbp+940h+v0+4], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+var_960+8]
    vmovss  dword ptr [rbp+940h+v0+8], xmm1
  }
  Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+940h+vec]
    vmovss  [rbp+940h+var_8DC], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+vec+4]
    vmovss  [rbp+940h+var_8D8], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+vec+8]
    vmovss  [rbp+940h+var_8D4], xmm0
  }
  _RAX = &outHintNodeIndex->mantleQueryShape;
  _RCX = &shape;
  v68 = 2i64;
  v69 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (EdgeFrustumQueryShape *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (EdgeFrustumQueryShape *)((char *)_RAX + 128);
    --v69;
  }
  while ( v69 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
  }
  EdgeFrustumQueryShape::Transform(&shape, &v1);
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v299, &shape);
  __asm { vmovss  xmm1, cs:MANTLE_EDGE_DISTANCE_CENTER_BIAS; centerBias }
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v299, *(float *)&_XMM1);
  __asm { vmovss  xmm2, cs:MANTLE_EDGE_PARALLEL_BIAS; bias }
  EdgeOctreeQueryFrustum::SetAxisBias(&v299, &axis, *(float *)&_XMM2);
  v274.m_hint = 16777208;
  v274.m_flags = 1;
  v274.m_bucket = MANTLE;
  v274.m_queryShape = &v299;
  v274.m_hint = outHintNodeIndex->mantleEdgeHintNode;
  outResultCount = 0i64;
  EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v274, pmoveHandler, resultIdPool, resultFractionPool, NULL, 0x10ui64, &outResultCount, &outHintNodeIndex->mantleEdgeHintNode);
  if ( PM_IsSprinting(ps) || PM_IsInAir(pm) )
    goto LABEL_29;
  v82 = DCONST_DVARINT_mantle_ladder_sprint_cooldown_time;
  if ( !DCONST_DVARINT_mantle_ladder_sprint_cooldown_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_sprint_cooldown_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v82);
  if ( ps->serverTime <= ps->sprintState.lastSprintEnd + v82->current.integer )
LABEL_29:
    v83 = 0;
  else
    v83 = 1;
  if ( (pm->cmd.buttons & 0x800000000000000i64) == 0 && !pm->isBot || !v83 )
  {
    v84 = outResultCount;
    v272 = outResultCount;
    goto LABEL_57;
  }
  v84 = outResultCount;
  v272 = outResultCount;
  if ( outResultCount >= 0x10 )
  {
LABEL_57:
    v122 = *(const BgHandler **)handler.v;
    goto LABEL_58;
  }
  v85 = DCONST_DVARMPBOOL_mantle_ladder_enable;
  if ( !DCONST_DVARMPBOOL_mantle_ladder_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v85);
  if ( !v85->current.enabled )
  {
    v84 = outResultCount;
    goto LABEL_57;
  }
  if ( ps->groundEntityNum == 2047 )
  {
    _RSI = DCONST_DVARFLT_mantle_check_range_air;
    if ( !DCONST_DVARFLT_mantle_check_range_air )
    {
      v87 = "mantle_check_range_air";
      goto LABEL_43;
    }
  }
  else
  {
    _RSI = DCONST_DVARFLT_mantle_check_range;
    if ( !DCONST_DVARFLT_mantle_check_range )
    {
      v87 = "mantle_check_range";
LABEL_43:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v87) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm7, dword ptr [rsi+28h]
    vmovss  [rbp+940h+var_940.nearHalfWidth], xmm10
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin, "mantle_ladder_edge_search_min_height_above_search_origin");
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm0, xmm0, xmm9
    vmovss  [rbp+940h+var_940.nearHalfHeight], xmm0
    vmovss  [rbp+940h+var_940.farHalfWidth], xmm10
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin, "mantle_ladder_edge_search_min_height_above_search_origin");
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm0, xmm0, xmm9
    vmovss  [rbp+940h+var_940.farHalfHeight], xmm0
  }
  Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_ladder_edge_search_near_plane_offset, "mantle_ladder_edge_search_near_plane_offset");
  __asm
  {
    vsubss  xmm2, xmm8, xmm0
    vmovss  [rbp+940h+var_940.nearDist], xmm2
    vaddss  xmm1, xmm7, xmm8
    vaddss  xmm3, xmm1, xmm12
    vmovss  [rbp+940h+var_940.farDist], xmm3
    vmovss  xmm0, [rbp+940h+var_940.nearHalfWidth]
    vucomiss xmm0, dword ptr [rbx+290h]
  }
  if ( !v93 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, [rbp+940h+var_940.nearHalfHeight]
    vucomiss xmm0, dword ptr [rbx+294h]
  }
  if ( !v93 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, [rbp+940h+var_940.farHalfWidth]
    vucomiss xmm0, dword ptr [rbx+298h]
  }
  if ( !v93 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, [rbp+940h+var_940.farHalfHeight]
    vucomiss xmm0, dword ptr [rbx+29Ch]
  }
  if ( !v93 )
    goto LABEL_51;
  __asm { vucomiss xmm2, dword ptr [rbx+2A0h] }
  if ( !v93 )
    goto LABEL_51;
  __asm { vucomiss xmm3, dword ptr [rbx+2A4h] }
  if ( !v93 )
  {
LABEL_51:
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+940h+var_940.nearHalfWidth]
      vmovups xmmword ptr [rbx+290h], xmm0
      vmovsd  xmm1, qword ptr [rbp+940h+var_940.nearDist]
      vmovsd  qword ptr [rbx+2A0h], xmm1
    }
    EdgeFrustumQueryShape::Calculate(&outHintNodeIndex->mantleLadderQueryShape, &v283);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+940h+forward]
    vmovss  dword ptr [rbp+940h+v1], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+forward+4]
    vmovss  dword ptr [rbp+940h+v1+4], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+forward+8]
    vmovss  dword ptr [rbp+940h+v1+8], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+var_960]
    vmovss  dword ptr [rbp+940h+v0], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+var_960+4]
    vmovss  dword ptr [rbp+940h+v0+4], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+var_960+8]
    vmovss  dword ptr [rbp+940h+v0+8], xmm1
  }
  Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+940h+vec]
    vmovss  [rbp+940h+var_8DC], xmm0
    vmovss  xmm1, dword ptr [rbp+940h+vec+4]
    vmovss  [rbp+940h+var_8D8], xmm1
    vmovss  xmm0, dword ptr [rbp+940h+vec+8]
    vmovss  [rbp+940h+var_8D4], xmm0
  }
  _RAX = &outHintNodeIndex->mantleLadderQueryShape;
  _RCX = &v298;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (EdgeFrustumQueryShape *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (EdgeFrustumQueryShape *)((char *)_RAX + 128);
    --v68;
  }
  while ( v68 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
  }
  EdgeFrustumQueryShape::Transform(&v298, &v1);
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v300, &v298);
  __asm { vmovss  xmm1, cs:MANTLE_EDGE_DISTANCE_CENTER_BIAS; centerBias }
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v300, *(float *)&_XMM1);
  v293.m_hint = 16777208;
  v293.m_flags = 1;
  v293.m_bucket = LADDER_CENTERLINE;
  v293.m_queryShape = &v300;
  v274.m_hint = outHintNodeIndex->mantleLadderHintNode;
  v121 = outResultCount;
  v122 = *(const BgHandler **)handler.v;
  EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v293, *(const BgHandler **)handler.v, &resultIdPool[outResultCount], &resultFractionPool[outResultCount], (float *)(unsigned __int8)v68, 16 - outResultCount, &v272, &outHintNodeIndex->mantleLadderHintNode);
  v84 = v272 + v121;
  v272 = v84;
LABEL_58:
  _RBX = DCONST_DVARFLT_mantle_check_angle;
  if ( !DCONST_DVARFLT_mantle_check_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm10, dword ptr [rbx+28h] }
  v125 = 0;
  v270 = 0;
  __asm { vmovss  xmm9, cs:__real@7f7fffff }
  _R13 = 0i64;
  if ( v84 )
  {
    v128 = resultIdPool;
    __asm
    {
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm14, cs:__real@80000000
      vmovss  xmm13, cs:__real@3f800000
      vmovss  xmm15, cs:__real@38d1b717
      vmovss  xmm11, cs:__real@42652ee0
    }
    while ( 1 )
    {
      v134 = Edge_GetFlags(*v128) & 4;
      __asm { vmovss  xmm2, [rbp+r13*4+940h+resultFractionPool]; fraction }
      v136 = *v128;
      if ( v134 )
      {
        Edge_CalculateVectors(v122, v136, *(float *)&_XMM2, &entityUp, &viewBasis, &outNormal, (vec3_t *)&v283, (vec3_t *)&v293, &handler);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+940h+handler]
          vxorps  xmm1, xmm0, xmm8
          vmovss  dword ptr [rbp+940h+outNormal], xmm1
          vmovss  xmm2, dword ptr [rbp+940h+handler+4]
          vxorps  xmm0, xmm2, xmm8
          vmovss  dword ptr [rbp+940h+outNormal+4], xmm0
          vmovss  xmm1, [rbp+940h+var_9A8]
          vxorps  xmm2, xmm1, xmm8
          vmovss  dword ptr [rbp+940h+outNormal+8], xmm2
        }
      }
      else
      {
        Edge_CalculateVectors(v122, v136, *(float *)&_XMM2, &v281, &outAxis, &outNormal, (vec3_t *)&v283, (vec3_t *)&v293);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+940h+outNormal]
          vxorps  xmm1, xmm0, xmm8
          vmovss  dword ptr [rbp+940h+handler], xmm1
          vmovss  xmm2, dword ptr [rbp+940h+outNormal+4]
          vxorps  xmm0, xmm2, xmm8
          vmovss  dword ptr [rbp+940h+handler+4], xmm0
          vmovss  xmm1, dword ptr [rbp+940h+outNormal+8]
          vxorps  xmm2, xmm1, xmm8
          vmovss  [rbp+940h+var_9A8], xmm2
        }
      }
      __asm { vmovss  xmm2, [rbp+r13*4+940h+resultFractionPool]; fraction }
      Edge_CalculatePoint(v122, *v128, *(float *)&_XMM2, &outEdgePoint);
      v150 = DVARINT_mantle_debugLineTime;
      if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v150);
      integer = v150->current.integer;
      __asm { vmovss  xmm6, cs:EDGE_DRAW_RADIUS }
      v153 = DCONST_DVARINT_mantle_debug;
      if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v153);
      if ( (v153->current.enabled & 4) != 0 )
      {
        __asm { vmovaps xmm2, xmm6 }
        ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, _DWORD, int))v122->DebugSphere)(v122, &outEdgePoint, v154, &colorBlue, 0, integer);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+940h+outEdgePoint]
        vmovss  [rbp+940h+var_890], xmm0
        vmovss  xmm1, dword ptr [rbp+940h+outEdgePoint+4]
        vmovss  [rbp+940h+var_88C], xmm1
        vmovss  xmm2, dword ptr [rbp+940h+outEdgePoint+8]
        vaddss  xmm0, xmm2, cs:EDGE_DRAW_TEXT_OFFSET
        vmovss  [rbp+940h+var_888], xmm0
        vmovss  xmm7, cs:EDGE_DRAW_TEXT_SCALE
        vsubss  xmm1, xmm2, dword ptr [rax+8]
        vcvtss2sd xmm6, xmm1, xmm1
      }
      EntityIndex = EdgeId::GetEntityIndex(v128);
      EdgeIndex = EdgeId::GetEdgeIndex(v128);
      __asm
      {
        vmovaps xmm3, xmm6
        vmovq   r9, xmm3
      }
      j_va("Edge Index: %d Entity Index: %d Height: %.3f", EdgeIndex, EntityIndex, _R9);
      v167 = DCONST_DVARINT_mantle_debug;
      if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v167);
      if ( (v167->current.enabled & 4) != 0 )
      {
        __asm { vmovaps xmm3, xmm7 }
        ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))v122->DebugString)(v122, v291, &colorWhite);
      }
      __asm { vxorps  xmm1, xmm1, xmm1; height }
      WorldUpReferenceFrame::SetUpContribution(&v294, *(float *)&_XMM1, &handler);
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+940h+handler+4]
        vmulss  xmm1, xmm6, xmm6
        vmovss  xmm3, dword ptr [rbp+940h+handler]
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm4, [rbp+940h+var_9A8]
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm5, xmm0, xmm0
        vcmpless xmm0, xmm5, xmm14
        vblendvps xmm1, xmm5, xmm13, xmm0
        vdivss  xmm0, xmm13, xmm1
        vmulss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rbp+940h+handler], xmm2
        vmulss  xmm6, xmm6, xmm0
        vmovss  dword ptr [rbp+940h+handler+4], xmm6
        vmulss  xmm7, xmm4, xmm0
        vmovss  [rbp+940h+var_9A8], xmm7
        vcomiss xmm5, xmm15
      }
      if ( v194 )
        goto LABEL_111;
      if ( v134 )
      {
        __asm
        {
          vmulss  xmm3, xmm2, dword ptr [rbp+940h+forward]
          vmulss  xmm2, xmm6, dword ptr [rbp+940h+forward+4]
          vmulss  xmm1, xmm7, dword ptr [rbp+940h+forward+8]
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm3, xmm2, dword ptr [rbp+940h+outSearchDir]
          vmulss  xmm2, xmm6, dword ptr [rbp+940h+outSearchDir+4]
          vmulss  xmm1, xmm7, dword ptr [rbp+940h+outSearchDir+8]
        }
      }
      __asm
      {
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm0, xmm4, xmm1; X
      }
      *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, xmm11
        vcomiss xmm1, xmm10
      }
      if ( !(v194 | v44) )
        goto LABEL_111;
      __asm { vmovss  xmm2, [rbp+r13*4+940h+resultFractionPool]; fraction }
      Edge_CalculatePoint(v122, *v128, *(float *)&_XMM2, &point);
      v194 = 0;
      v195 = v134 == 0;
      if ( v134 )
      {
        __asm { vmovss  xmm2, cs:__real@3f000000; fraction }
        Edge_CalculatePoint(v122, *v128, *(float *)&_XMM2, &point);
        _RBX = DCONST_DVARFLT_mantle_ladder_over_dist;
        if ( !DCONST_DVARFLT_mantle_ladder_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_over_dist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+28h]
          vmulss  xmm0, xmm2, dword ptr [rbp+940h+handler]
          vaddss  xmm4, xmm0, dword ptr [rbp+940h+point]
          vmovss  dword ptr [rbp+940h+end], xmm4
          vmulss  xmm1, xmm2, dword ptr [rbp+940h+handler+4]
          vaddss  xmm3, xmm1, dword ptr [rbp+940h+point+4]
          vmovss  dword ptr [rbp+940h+end+4], xmm3
          vmulss  xmm0, xmm2, [rbp+940h+var_9A8]
          vmovss  xmm1, dword ptr [rbp+940h+point+8]; height
          vaddss  xmm2, xmm0, xmm1
          vmovss  dword ptr [rbp+940h+end+8], xmm2
          vmovss  dword ptr [rdi+60h], xmm4
          vmovss  dword ptr [rdi+64h], xmm3
          vmovss  dword ptr [rdi+68h], xmm2
          vmovsd  xmm0, qword ptr [rbp+940h+vec]
          vmovsd  qword ptr [rbp+940h+start], xmm0
        }
        start.v[2] = vec.v[2];
        WorldUpReferenceFrame::SetUpContribution(&v294, *(float *)&_XMM1, &start);
        ProjectPointOntoVectorClamped(&point, &start, &end, &point, NULL);
      }
      __asm { vmovss  xmm0, dword ptr [rbp+940h+point+8] }
      _R14 = v273;
      __asm
      {
        vsubss  xmm6, xmm0, dword ptr [r14+8]
        vcomiss xmm6, xmm9
      }
      if ( !(v194 | v195) )
        goto LABEL_111;
      if ( v134 )
      {
        _RBX = DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin;
        if ( DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin )
          goto LABEL_97;
        v211 = "mantle_ladder_edge_search_min_height_above_search_origin";
      }
      else
      {
        _RBX = DCONST_DVARFLT_mantle_edge_search_min_height_above_search_origin;
        if ( DCONST_DVARFLT_mantle_edge_search_min_height_above_search_origin )
          goto LABEL_97;
        v211 = "mantle_edge_search_min_height_above_search_origin";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v211) )
        __debugbreak();
LABEL_97:
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vcomiss xmm6, xmm0
      }
      if ( !v212 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm6, xmm0
        }
        if ( v212 | v213 && v134 )
        {
          __asm
          {
            vsubss  xmm6, xmm12, xmm6
            vmovaps xmm1, xmm6; height
          }
          WorldUpReferenceFrame::AddUpContribution(&v294, *(float *)&_XMM1, &point);
          __asm { vmovaps xmm1, xmm6; height }
          WorldUpReferenceFrame::AddUpContribution(&v294, *(float *)&_XMM1, &mresults->ladderOverPos);
          __asm { vmovaps xmm6, xmm12 }
        }
        __asm
        {
          vmovaps xmm9, xmm6
          vmovss  xmm0, dword ptr [rbp+940h+point]
          vmovss  dword ptr [rdi+30h], xmm0
          vmovss  xmm1, dword ptr [rbp+940h+point+4]
          vmovss  dword ptr [rdi+34h], xmm1
          vmovss  xmm0, dword ptr [rbp+940h+point+8]
          vmovss  dword ptr [rdi+38h], xmm0
          vmovss  xmm1, dword ptr [rbp+940h+outNormal]
          vmovss  dword ptr [rdi+54h], xmm1
          vmovss  xmm0, dword ptr [rbp+940h+outNormal+4]
          vmovss  dword ptr [rdi+58h], xmm0
          vmovss  xmm1, dword ptr [rbp+940h+outNormal+8]
          vmovss  dword ptr [rdi+5Ch], xmm1
        }
        Edge_GetLineSegment(v122, *v128, (vec3_t (*)[2])mresults->edgeLineSegment);
        mresults->edgeFlags[0] = Edge_GetFlags(*v128);
        if ( Mantle_IsForceOver(mresults) )
        {
          mresults->flags |= 1u;
        }
        else if ( v134 )
        {
          mresults->flags |= 0x800u;
        }
        mresults->startPos.v[0] = _R14->v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [r14+4]
          vmovss  dword ptr [rdi+10h], xmm0
          vmovss  xmm1, dword ptr [r14+8]
          vmovss  dword ptr [rdi+14h], xmm1
          vmovss  xmm0, dword ptr [rdi+30h]
          vmovss  dword ptr [rbp+940h+var_928], xmm0
          vmovss  xmm1, dword ptr [rdi+34h]
          vmovss  dword ptr [rbp+940h+var_928+4], xmm1
          vmovss  xmm0, dword ptr [rdi+38h]
          vmovss  dword ptr [rbp+940h+var_928+8], xmm0
        }
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v294, _R14);
        __asm { vmovaps xmm1, xmm0; height }
        WorldUpReferenceFrame::SetUpContribution(&v294, *(float *)&_XMM1, &v284);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+940h+var_928]
          vsubss  xmm3, xmm0, dword ptr [rdi+0Ch]
          vmovss  xmm1, dword ptr [rbp+940h+var_928+4]
          vsubss  xmm2, xmm1, dword ptr [rdi+10h]
          vmovss  xmm0, dword ptr [rbp+940h+var_928+8]
          vsubss  xmm4, xmm0, dword ptr [rdi+14h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vmovss  dword ptr [rdi+70h], xmm1
        }
        if ( v134 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+60h]
            vsubss  xmm1, xmm0, dword ptr [rdi+0Ch]
            vmovss  dword ptr [rdi], xmm1
            vmovss  xmm2, dword ptr [rdi+64h]
            vsubss  xmm0, xmm2, dword ptr [rdi+10h]
            vmovss  dword ptr [rdi+4], xmm0
            vmovss  xmm1, dword ptr [rdi+68h]
            vsubss  xmm2, xmm1, dword ptr [rdi+14h]
            vmovss  dword ptr [rdi+8], xmm2
          }
          Vec3Normalize(&mresults->dir);
          v249 = 1;
          v270 = 1;
        }
        else
        {
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_use_approach_angle, "mantle_use_approach_angle") )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+940h+outSearchDir]
              vmovss  dword ptr [rdi], xmm0
              vmovss  xmm1, dword ptr [rbp+940h+outSearchDir+4]
              vmovss  xmm0, dword ptr [rbp+940h+outSearchDir+8]
              vmovss  dword ptr [rdi+8], xmm0
              vmovss  dword ptr [rdi+4], xmm1
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+940h+handler]
              vmovss  dword ptr [rdi], xmm0
              vmovss  xmm1, dword ptr [rbp+940h+handler+4]
              vmovss  xmm0, [rbp+940h+var_9A8]
              vmovss  dword ptr [rdi+8], xmm0
              vmovss  dword ptr [rdi+4], xmm1
            }
          }
          v249 = 1;
          v270 = 1;
        }
        goto LABEL_112;
      }
LABEL_111:
      v249 = v270;
LABEL_112:
      ++_R13;
      ++v128;
      if ( _R13 >= v272 )
      {
        if ( v249 )
        {
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_side_mantle_use_over, "mantle_side_mantle_use_over") )
          {
            flags = mresults->flags;
            if ( (flags & 0x300) != 0 )
              mresults->flags = flags | 1;
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_back_mantle_use_over, "mantle_back_mantle_use_over") )
          {
            v257 = mresults->flags;
            if ( (v257 & 0x400) != 0 )
              mresults->flags = v257 | 1;
          }
          mresults->debugDraw.edgeFound = 1;
        }
        v125 = v270;
        break;
      }
    }
  }
  Sys_ProfEndNamedEvent();
  result = v125;
  _R11 = &v303;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
Mantle_FindMantleSurface
==============
*/
__int64 Mantle_FindMantleSurface(const playerState_s *ps, Physics_WorldId worldId, const BgHandler *pmoveHandler, const vec3_t *searchOrigin, MantleResults *mresults, const vec3_t *wishDir)
{
  char v23; 
  bool v24; 
  bool v28; 
  const dvar_t *v41; 
  int contentMask; 
  const BgPlayerTraceInfo *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  bool v46; 
  const dvar_t *v49; 
  int integer; 
  const dvar_t *v51; 
  const dvar_t *v52; 
  const char *v53; 
  const dvar_t *v54; 
  int Int_Internal_DebugName; 
  int v70; 
  int flags; 
  int v125; 
  unsigned __int8 v129; 
  const dvar_t *v130; 
  const dvar_t *v131; 
  __int64 result; 
  BgTrace v140; 
  __int64 v141; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outSearchDir; 
  vec3_t outUp; 
  Bounds bounds; 
  trace_t results; 
  vec3_t outSearchStraightDir; 
  WorldUpReferenceFrame v149; 
  char v150; 
  void *retaddr; 

  _RAX = &retaddr;
  v141 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _R14 = searchOrigin;
  _RBX = mresults;
  Sys_ProfBeginNamedEvent(0xFF008008, "Mantle_FindMantleSurface");
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2185, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  Mantle_GetSearchDirection(ps, pmoveHandler, mresults, wishDir, &outSearchDir, &outSearchStraightDir);
  *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(ps);
  __asm { vmovaps xmm9, xmm0 }
  _R12 = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
  *(float *)&_XMM0 = Mantle_GetCheckHeight(ps, pmoveHandler, mresults);
  __asm { vmovaps xmm7, xmm0 }
  _R15 = DCONST_DVARFLT_mantle_check_radius;
  if ( !DCONST_DVARFLT_mantle_check_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R15);
  __asm
  {
    vmovss  xmm6, dword ptr [r15+28h]
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rbp+120h+bounds.midPoint], xmm8
    vmovss  dword ptr [rbp+120h+bounds.midPoint+4], xmm8
    vmulss  xmm0, xmm7, cs:__real@3f000000
    vmovss  dword ptr [rbp+120h+bounds.midPoint+8], xmm0
    vmovss  dword ptr [rbp+120h+bounds.halfSize], xmm6
    vmovss  dword ptr [rbp+120h+bounds.halfSize+4], xmm6
    vmovss  dword ptr [rbp+120h+bounds.halfSize+8], xmm0
    vcomiss xmm6, dword ptr [r12+14h]
  }
  if ( !(v23 | v24) )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2200, ASSERT_TYPE_ASSERT, "(bounds.halfSize[0] <= playerBounds->halfSize[2])", (const char *)&queryFormat, "bounds.halfSize[0] <= playerBounds->halfSize[2]");
    v23 = 0;
    v24 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+120h+bounds.halfSize+4]
    vcomiss xmm0, dword ptr [r12+14h]
  }
  if ( !(v23 | v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2201, ASSERT_TYPE_ASSERT, "(bounds.halfSize[1] <= playerBounds->halfSize[2])", (const char *)&queryFormat, "bounds.halfSize[1] <= playerBounds->halfSize[2]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  dword ptr [rbp+120h+start], xmm0
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  dword ptr [rbp+120h+start+4], xmm1
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rbp+120h+start+8], xmm0
  }
  *(float *)&_XMM0 = Mantle_GetCheckRange(ps, mresults);
  __asm
  {
    vaddss  xmm1, xmm0, xmm9
    vsubss  xmm3, xmm1, xmm6
    vmulss  xmm0, xmm3, dword ptr [rbp+120h+outSearchDir]
    vaddss  xmm1, xmm0, dword ptr [r14]
    vmovss  dword ptr [rbp+120h+end], xmm1
    vmulss  xmm0, xmm3, dword ptr [rbp+120h+outSearchDir+4]
    vaddss  xmm1, xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rbp+120h+end+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [rbp+120h+outSearchDir+8]
    vaddss  xmm1, xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rbp+120h+end+8], xmm1
  }
  v41 = DCONST_DVARBOOL_mantle_everything;
  if ( !DCONST_DVARBOOL_mantle_everything && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_everything") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  contentMask = 8454161;
  if ( !v41->current.enabled )
    contentMask = 0x1000000;
  v43 = pmoveHandler->GetPlayerTraceInfo(pmoveHandler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&v140, v43);
  v140.m_flags |= 0x80u;
  v44 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  if ( v44->current.enabled )
    v140.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&v140, worldId, &results, &start, &end, &bounds, ps->clientNum, contentMask, ps);
  v140.m_flags &= ~0x80u;
  v45 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  v46 = !v45->current.enabled;
  if ( v45->current.enabled )
  {
    v46 = (v140.m_flags & 0xFFFFFDFF) == 0;
    v140.m_flags &= ~0x200u;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm0, [rbp+120h+results.fraction]
    vucomiss xmm0, xmm7
  }
  if ( v46 )
  {
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
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &start, &end, &colorRed, 0, integer);
    v52 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    if ( !v52->current.enabled )
      goto LABEL_81;
    v53 = "Mantle Failed: No mantle surface found";
    goto LABEL_80;
  }
  if ( results.startsolid || results.allsolid )
  {
    v130 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v130);
    if ( (v130->current.enabled & 4) != 0 )
      pmoveHandler->DebugStar((BgHandler *)pmoveHandler, &start, &colorRed, 0);
    v131 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v131);
    if ( !v131->current.enabled )
      goto LABEL_81;
    v53 = "Mantle Failed: Mantle brush is too thick";
LABEL_80:
    Com_Printf(17, "%s\n", v53);
    goto LABEL_81;
  }
  v54 = DCONST_DVARBOOL_mantle_everything;
  if ( !DCONST_DVARBOOL_mantle_everything && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_everything") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  if ( !v54->current.enabled && (results.surfaceFlags & 0x6000000) == 0 )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
    __asm { vmovss  xmm3, [rbp+120h+results.fraction]; fraction }
    Mantle_DebugTraceLine(pmoveHandler, &start, &end, *(double *)&_XMM3, &colorRedFaded, Int_Internal_DebugName);
    Mantle_DebugPrint(1u, "Mantle Failed: No mantle surface with MANTLE_ON or MANTLE_OVER found");
LABEL_81:
    v129 = 0;
    goto LABEL_82;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+120h+end]
    vsubss  xmm1, xmm0, dword ptr [rbp+120h+start]
    vmovss  xmm5, [rbp+120h+results.fraction]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm9, xmm1, dword ptr [rbp+120h+start]
    vmovss  xmm0, dword ptr [rbp+120h+end+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+120h+start+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm10, xmm2, dword ptr [rbp+120h+start+4]
    vmovss  xmm0, dword ptr [rbp+120h+end+8]
    vsubss  xmm1, xmm0, dword ptr [rbp+120h+start+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm11, xmm2, dword ptr [rbp+120h+start+8]
  }
  v70 = Dvar_GetInt_Internal_DebugName(DVARINT_mantle_debugLineTime, "mantle_debugLineTime");
  __asm { vmovss  xmm3, [rbp+120h+results.fraction]; fraction }
  Mantle_DebugTraceLine(pmoveHandler, &start, &end, *(double *)&_XMM3, &colorGreen, v70);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v149, ps, pmoveHandler);
  WorldUpReferenceFrame::GetUpVector(&v149, &outUp);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+120h+results.normal]
    vmulss  xmm3, xmm0, dword ptr [rbp+120h+outUp]
    vmovss  xmm1, dword ptr [rbp+120h+results.normal+4]
    vmulss  xmm2, xmm1, dword ptr [rbp+120h+outUp+4]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm0, dword ptr [rbp+120h+results.normal+8]
    vmulss  xmm1, xmm0, dword ptr [rbp+120h+outUp+8]
    vaddss  xmm6, xmm4, xmm1
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_check_dot_vertical, "mantle_check_dot_vertical");
  __asm { vcomiss xmm6, xmm0 }
  if ( !(v23 | v24) )
  {
    Mantle_DebugPrint(1u, "Mantle Failed: Mantle facing surface has too vertical of a normal");
    goto LABEL_81;
  }
  __asm
  {
    vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rbp+120h+results.normal]
    vxorps  xmm2, xmm0, xmm4
    vmovss  dword ptr [rbx], xmm2
    vmovss  xmm3, dword ptr [rbp+120h+results.normal+4]
    vxorps  xmm0, xmm3, xmm4
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, dword ptr [rbp+120h+results.normal+8]
    vxorps  xmm2, xmm0, xmm4
    vmovss  dword ptr [rbx+8], xmm2
    vxorps  xmm1, xmm1, xmm1; height
  }
  WorldUpReferenceFrame::SetUpContribution(&v149, *(float *)&_XMM1, &mresults->dir);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm5, xmm2, xmm2
    vcmpless xmm0, xmm5, cs:__real@80000000
    vblendvps xmm1, xmm5, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm4, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm4
    vcomiss xmm5, cs:__real@38d1b717
  }
  if ( v23 )
  {
    Mantle_DebugPrint(1u, "Mantle Failed: Mantle surface has vertical normal");
    goto LABEL_81;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+120h+outSearchDir]
    vmulss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbp+120h+outSearchDir+4]
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm4, dword ptr [rbp+120h+outSearchDir+8]
    vaddss  xmm0, xmm3, xmm0; X
  }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm6, xmm0, cs:__real@42652ee0 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_check_angle, "mantle_check_angle");
  __asm { vcomiss xmm6, xmm0 }
  if ( !(v23 | v24) )
  {
    Mantle_DebugPrint(1u, "Mantle Failed: Player is not facing mantle surface");
    goto LABEL_81;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [r14]
    vmovss  dword ptr [rbx+0Ch], xmm2
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [rbx+14h], xmm1
    vsubss  xmm2, xmm9, xmm2
    vsubss  xmm0, xmm10, xmm0
    vsubss  xmm3, xmm11, xmm1
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  dword ptr [rbx+70h], xmm0
  }
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
    v125 = mresults->flags;
    if ( (v125 & 0x400) != 0 )
      mresults->flags = v125 | 1;
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mantle_use_approach_angle, "mantle_use_approach_angle") )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+120h+outSearchDir]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr [rbp+120h+outSearchDir+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr [rbp+120h+outSearchDir+8]
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  v129 = 1;
LABEL_82:
  Sys_ProfEndNamedEvent();
  result = v129;
  _R11 = &v150;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
Mantle_FixUpMantleDirForEdge
==============
*/
bool Mantle_FixUpMantleDirForEdge(playerState_s *ps, const Physics_WorldId worldId, const BgHandler *pmoveHandler, int traceMask, MantleResults *mresults, vec3_t *inOutWishDir)
{
  const dvar_t *v21; 
  char v22; 
  BgHandler_vtbl *v78; 
  __int64 clientNum; 
  const BgPlayerTraceInfo *v83; 
  const dvar_t *v84; 
  const dvar_t *v87; 
  const dvar_t *v90; 
  int integer; 
  const dvar_t *v94; 
  int v97; 
  const dvar_t *v98; 
  const dvar_t *v99; 
  const dvar_t *v106; 
  const dvar_t *v113; 
  char v114; 
  bool result; 
  BgTrace v195; 
  vec3_t *v196; 
  vec3_t vec; 
  vec3_t v198; 
  vec3_t v199; 
  WorldUpReferenceFrame v200; 
  trace_t results; 
  vec3_t end; 
  vec3_t v203; 
  vec3_t pos; 
  vec3_t v205; 

  _RBX = mresults;
  v196 = inOutWishDir;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2898, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pmoveHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2899, ASSERT_TYPE_ASSERT, "(pmoveHandler)", (const char *)&queryFormat, "pmoveHandler") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2900, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v21 = DCONST_DVARMPBOOL_mantle_enableDirectionAssist;
  if ( !DCONST_DVARMPBOOL_mantle_enableDirectionAssist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_enableDirectionAssist") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+260h+var_50], xmm6
    vmovaps [rsp+260h+var_60], xmm7
    vmovaps [rsp+260h+var_70], xmm8
    vmovaps [rsp+260h+var_B0], xmm12
    vmovaps [rsp+260h+var_C0], xmm13
  }
  Dvar_CheckFrontendServerThread(v21);
  if ( !v21->current.enabled )
    goto LABEL_62;
  __asm
  {
    vmovaps [rsp+260h+var_80], xmm9
    vmovaps [rsp+260h+var_90], xmm10
    vmovaps [rsp+260h+var_A0], xmm11
    vmovaps [rsp+260h+var_D0], xmm14
  }
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v200, ps, pmoveHandler);
  *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(ps);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+48h]
    vsubss  xmm5, xmm1, dword ptr [rbx+3Ch]
    vmovss  xmm2, dword ptr [rbx+4Ch]
    vsubss  xmm6, xmm2, dword ptr [rbx+40h]
    vmovss  xmm1, dword ptr [rbx+50h]
    vsubss  xmm7, xmm1, dword ptr [rbx+44h]
    vmovss  xmm12, cs:__real@3f800000
    vmovaps xmm14, xmm0
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm3, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
    vsqrtss xmm11, xmm0, xmm0
    vcmpless xmm0, xmm11, cs:__real@80000000
    vblendvps xmm0, xmm11, xmm12, xmm0
    vdivss  xmm1, xmm12, xmm0
    vmulss  xmm10, xmm5, xmm1
    vxorps  xmm13, xmm13, xmm13
    vucomiss xmm10, xmm13
    vmulss  xmm9, xmm6, xmm1
    vmulss  xmm8, xmm7, xmm1
  }
  if ( v22 )
  {
    __asm { vucomiss xmm9, xmm13 }
    if ( v22 )
    {
      __asm { vucomiss xmm8, xmm13 }
      if ( v22 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2917, ASSERT_TYPE_ASSERT, "(Vec3NotZero( edgeDir ))", (const char *)&queryFormat, "Vec3NotZero( edgeDir )") )
          __debugbreak();
      }
    }
  }
  __asm
  {
    vmulss  xmm3, xmm11, cs:__real@3f000000
    vmulss  xmm0, xmm10, xmm3
    vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rbp+160h+vec], xmm1
    vmulss  xmm2, xmm9, xmm3
    vaddss  xmm0, xmm2, dword ptr [rbx+40h]
    vmulss  xmm1, xmm8, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbx+44h]
    vmovss  xmm1, cs:EDGE_TRACE_RAISE_AMOUNT; height
    vmovss  dword ptr [rbp+160h+vec+8], xmm2
    vmovss  dword ptr [rbp+160h+vec+4], xmm0
  }
  WorldUpReferenceFrame::AddUpContribution(&v200, *(float *)&_XMM1, &vec);
  __asm
  {
    vmovss  xmm3, cs:EDGE_TRACE_MOVE_INWARDS_AMOUNT
    vmulss  xmm2, xmm3, dword ptr [rbx+58h]
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmulss  xmm1, xmm3, dword ptr [rbx+54h]
    vaddss  xmm1, xmm1, dword ptr [rbp+160h+vec]
    vmovss  dword ptr [rbp+160h+vec], xmm1
    vaddss  xmm1, xmm2, dword ptr [rbp+160h+vec+4]
    vmulss  xmm2, xmm3, dword ptr [rbx+5Ch]
    vmovss  dword ptr [rbp+160h+vec+4], xmm1
    vaddss  xmm1, xmm2, dword ptr [rbp+160h+vec+8]
    vmovss  dword ptr [rbp+160h+vec+8], xmm1
    vmovss  xmm1, dword ptr [rbx+40h]
    vmovss  dword ptr [rbp+160h+end], xmm0
    vmovss  xmm0, dword ptr [rbx+44h]
    vmovss  dword ptr [rbp+160h+end+4], xmm1
    vmovss  xmm1, cs:EDGE_TRACE_RAISE_AMOUNT; height
    vmovss  dword ptr [rbp+160h+end+8], xmm0
  }
  WorldUpReferenceFrame::AddUpContribution(&v200, *(float *)&_XMM1, &end);
  __asm
  {
    vmovss  xmm3, cs:EDGE_TRACE_MOVE_INWARDS_AMOUNT
    vmulss  xmm2, xmm3, dword ptr [rbx+58h]
    vmovss  xmm0, dword ptr [rbx+48h]
    vmulss  xmm1, xmm3, dword ptr [rbx+54h]
    vaddss  xmm1, xmm1, dword ptr [rbp+160h+end]
    vmovss  dword ptr [rbp+160h+end], xmm1
    vaddss  xmm1, xmm2, dword ptr [rbp+160h+end+4]
    vmulss  xmm2, xmm3, dword ptr [rbx+5Ch]
    vmovss  dword ptr [rbp+160h+end+4], xmm1
    vaddss  xmm1, xmm2, dword ptr [rbp+160h+end+8]
    vmovss  dword ptr [rbp+160h+end+8], xmm1
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vmovss  dword ptr [rbp+160h+var_104], xmm0
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  dword ptr [rbp+160h+var_104+4], xmm1
    vmovss  xmm1, cs:EDGE_TRACE_RAISE_AMOUNT; height
    vmovss  dword ptr [rbp+160h+var_104+8], xmm0
  }
  WorldUpReferenceFrame::AddUpContribution(&v200, *(float *)&_XMM1, &v203);
  __asm
  {
    vmovss  xmm3, cs:EDGE_TRACE_MOVE_INWARDS_AMOUNT
    vmulss  xmm2, xmm3, dword ptr [rbx+58h]
    vmulss  xmm1, xmm3, dword ptr [rbx+54h]
    vaddss  xmm1, xmm1, dword ptr [rbp+160h+var_104]
  }
  v78 = pmoveHandler->__vftable;
  clientNum = (unsigned int)ps->clientNum;
  __asm
  {
    vmovss  dword ptr [rbp+160h+var_104], xmm1
    vaddss  xmm1, xmm2, dword ptr [rbp+160h+var_104+4]
    vmulss  xmm2, xmm3, dword ptr [rbx+5Ch]
    vmovss  dword ptr [rbp+160h+var_104+4], xmm1
    vaddss  xmm1, xmm2, dword ptr [rbp+160h+var_104+8]
    vmovss  dword ptr [rbp+160h+var_104+8], xmm1
  }
  v83 = v78->GetPlayerTraceInfo(pmoveHandler, clientNum);
  BgTrace::BgTrace(&v195, v83);
  v195.m_flags |= 0x80u;
  v84 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v84);
  if ( v84->current.enabled )
    v195.m_flags |= 0x200u;
  BgTrace::LegacyTraceHandler(&v195, worldId, &results, &vec, &end, &bounds_origin, ps->clientNum, traceMask, ps);
  if ( !results.startsolid )
  {
    __asm
    {
      vmovss  xmm6, [rbp+160h+results.fraction]
      vucomiss xmm6, xmm12
    }
  }
  __asm { vmovss  xmm0, dword ptr [rbx+3Ch] }
  v87 = DVARINT_mantle_debugLineTime;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+40h]
    vmovss  dword ptr [rbp+160h+pos], xmm0
    vmovss  xmm0, dword ptr [rbx+44h]
    vmovss  dword ptr [rbp+160h+pos+8], xmm0
    vmovss  dword ptr [rbp+160h+pos+4], xmm1
  }
  if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v87);
  v90 = DCONST_DVARINT_mantle_debug;
  integer = v87->current.integer;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v90);
  if ( (v90->current.enabled & 4) != 0 )
    pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &vec, &end, &colorLtOrange, 0, integer);
  BgTrace::LegacyTraceHandler(&v195, worldId, &results, &vec, &v203, &bounds_origin, ps->clientNum, traceMask, ps);
  if ( !results.startsolid )
  {
    __asm
    {
      vmovss  xmm6, [rbp+160h+results.fraction]
      vucomiss xmm6, xmm12
    }
  }
  __asm { vmovss  xmm0, dword ptr [rbx+48h] }
  v94 = DVARINT_mantle_debugLineTime;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vmovss  dword ptr [rbp+160h+var_EC], xmm0
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  dword ptr [rbp+160h+var_EC+8], xmm0
    vmovss  dword ptr [rbp+160h+var_EC+4], xmm1
  }
  if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v94);
  v97 = v94->current.integer;
  v98 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v98);
  if ( (v98->current.enabled & 4) != 0 )
    pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &vec, &v203, &colorLtOrange, 0, v97);
  v195.m_flags &= ~0x80u;
  v99 = DVARBOOL_mantle_fixMantleIntoCollision;
  if ( !DVARBOOL_mantle_fixMantleIntoCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_fixMantleIntoCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v99);
  if ( v99->current.enabled )
    v195.m_flags &= ~0x200u;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+160h+var_EC]
    vsubss  xmm3, xmm0, dword ptr [rbp+160h+pos]
    vmovss  xmm1, dword ptr [rbp+160h+var_EC+4]
    vsubss  xmm2, xmm1, dword ptr [rbp+160h+pos+4]
    vmovss  xmm0, dword ptr [rbp+160h+var_EC+8]
    vsubss  xmm4, xmm0, dword ptr [rbp+160h+pos+8]
  }
  v106 = DVARINT_mantle_debugLineTime;
  __asm
  {
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm7, xmm2, xmm2
  }
  if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v106);
  Mantle_DebugStar(pmoveHandler, &pos, &colorLtOrange, v106->current.integer);
  v113 = DVARINT_mantle_debugLineTime;
  if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v113);
  Mantle_DebugStar(pmoveHandler, &v205, &colorLtOrange, v113->current.integer);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm5, dword ptr [rbp+160h+pos+4]
    vmovss  xmm6, dword ptr [rbp+160h+pos]
    vmovss  xmm11, dword ptr [rbp+160h+pos+8]
    vsubss  xmm0, xmm0, xmm5
    vmulss  xmm2, xmm0, xmm9
    vsubss  xmm0, xmm1, xmm6
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rbx+14h]
    vsubss  xmm0, xmm2, xmm11
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm1, cs:COLLISION_THRESHOLD
    vaddss  xmm2, xmm1, xmm14
    vcomiss xmm4, xmm2
  }
  if ( v114 )
  {
    __asm
    {
      vmulss  xmm0, xmm7, cs:__real@3f000000
      vcomiss xmm4, xmm0
    }
    if ( v114 )
    {
      __asm
      {
        vmulss  xmm0, xmm10, xmm2
        vaddss  xmm6, xmm0, xmm6
        vmulss  xmm0, xmm2, xmm8
        vmulss  xmm1, xmm2, xmm9
        vaddss  xmm8, xmm0, xmm11
        vaddss  xmm7, xmm1, xmm5
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm2, xmm2, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm10, xmm2
        vaddss  xmm6, xmm0, dword ptr [rbp+160h+var_EC]
        vmulss  xmm0, xmm2, xmm8
        vaddss  xmm8, xmm0, dword ptr [rbp+160h+var_EC+8]
        vmulss  xmm1, xmm2, xmm9
        vaddss  xmm7, xmm1, dword ptr [rbp+160h+var_EC+4]
      }
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm4, xmm14
      vaddss  xmm1, xmm0, xmm1
      vcomiss xmm7, xmm1
      vmulss  xmm0, xmm10, xmm4
      vaddss  xmm6, xmm0, xmm6
      vmulss  xmm0, xmm8, xmm4
      vmulss  xmm1, xmm9, xmm4
      vaddss  xmm8, xmm0, xmm11
      vaddss  xmm7, xmm1, xmm5
    }
  }
  __asm
  {
    vmovss  dword ptr [rbp+160h+var_1C0], xmm6
    vmovss  dword ptr [rbp+160h+var_1C0+4], xmm7
    vmovss  dword ptr [rbp+160h+var_1C0+8], xmm8
  }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v200, &mresults->startPos);
  __asm { vmovaps xmm1, xmm0; height }
  WorldUpReferenceFrame::SetUpContribution(&v200, *(float *)&_XMM1, &v198);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+160h+var_1C0]
    vsubss  xmm3, xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbp+160h+var_1C0+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rbp+160h+var_1C0+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+14h]
    vmovaps xmm14, [rsp+260h+var_D0]
    vmovaps xmm11, [rsp+260h+var_A0]
    vmovaps xmm10, [rsp+260h+var_90]
    vmovaps xmm9, [rsp+260h+var_80]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm5, xmm2, xmm2
    vsubss  xmm0, xmm5, dword ptr [rbx+70h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:EDGE_ASSIST_DISTANCE_THRESHOLD
  }
  if ( v114 | v22 )
  {
    __asm
    {
      vmovss  dword ptr [rbx+30h], xmm6
      vmovss  dword ptr [rbx+34h], xmm7
      vmovss  dword ptr [rbx+38h], xmm8
      vmovss  dword ptr [rbx+70h], xmm5
      vmovss  xmm0, dword ptr [rbx+30h]
      vsubss  xmm2, xmm0, dword ptr [rbx+0Ch]
      vmovss  xmm3, dword ptr [rbx+34h]
      vsubss  xmm0, xmm3, dword ptr [rbx+10h]
      vmovss  dword ptr [rbp+160h+var_1B0], xmm2
      vmovss  xmm2, dword ptr [rbx+38h]
      vsubss  xmm3, xmm2, dword ptr [rbx+14h]
      vxorps  xmm1, xmm1, xmm1; height
      vmovss  dword ptr [rbp+160h+var_1B0+8], xmm3
      vmovss  dword ptr [rbp+160h+var_1B0+4], xmm0
    }
    WorldUpReferenceFrame::SetUpContribution(&v200, *(float *)&_XMM1, &v199);
    _RCX = (__int64)v196;
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+160h+var_1B0]
      vmovss  xmm6, dword ptr [rbp+160h+var_1B0+4]
      vmovss  xmm5, dword ptr [rbp+160h+var_1B0+8]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm12, xmm0
      vdivss  xmm1, xmm12, xmm0
      vmulss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rbx], xmm2
      vmulss  xmm0, xmm6, xmm1
      vmovss  dword ptr [rbx+4], xmm0
      vmulss  xmm1, xmm5, xmm1
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  dword ptr [rcx], xmm2
    }
    *(_QWORD *)(_RCX + 4) = *(_QWORD *)&mresults->dir.y;
    result = 1;
  }
  else
  {
LABEL_62:
    result = 0;
  }
  __asm
  {
    vmovaps xmm13, [rsp+260h+var_C0]
    vmovaps xmm12, [rsp+260h+var_B0]
    vmovaps xmm8, [rsp+260h+var_70]
    vmovaps xmm7, [rsp+260h+var_60]
    vmovaps xmm6, [rsp+260h+var_50]
  }
  return result;
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
        _RBX = DCONST_DVARFLT_mantle_check_height_side_back_air_br;
        if ( DCONST_DVARFLT_mantle_check_height_side_back_air_br )
          goto LABEL_26;
        v9 = "mantle_check_height_side_back_air_br";
      }
      else
      {
        _RBX = DCONST_DVARFLT_mantle_check_height_side_back_br;
        if ( DCONST_DVARFLT_mantle_check_height_side_back_br )
          goto LABEL_26;
        v9 = "mantle_check_height_side_back_br";
      }
    }
    else if ( groundEntityNum == 2047 )
    {
      _RBX = DCONST_DVARFLT_mantle_check_height_air_br;
      if ( DCONST_DVARFLT_mantle_check_height_air_br )
        goto LABEL_26;
      v9 = "mantle_check_height_air_br";
    }
    else
    {
      _RBX = DCONST_DVARFLT_mantle_check_height_br;
      if ( DCONST_DVARFLT_mantle_check_height_br )
        goto LABEL_26;
      v9 = "mantle_check_height_br";
    }
  }
  else if ( v7 )
  {
    if ( groundEntityNum == 2047 )
    {
      _RBX = DCONST_DVARMPFLT_mantle_check_height_side_back_air;
      if ( DCONST_DVARMPFLT_mantle_check_height_side_back_air )
        goto LABEL_26;
      v9 = "mantle_check_height_side_back_air";
    }
    else
    {
      _RBX = DCONST_DVARMPFLT_mantle_check_height_side_back;
      if ( DCONST_DVARMPFLT_mantle_check_height_side_back )
        goto LABEL_26;
      v9 = "mantle_check_height_side_back";
    }
  }
  else if ( groundEntityNum == 2047 )
  {
    _RBX = DCONST_DVARMPFLT_mantle_check_height_air;
    if ( DCONST_DVARMPFLT_mantle_check_height_air )
      goto LABEL_26;
    v9 = "mantle_check_height_air";
  }
  else
  {
    _RBX = DCONST_DVARMPFLT_mantle_check_height;
    if ( DCONST_DVARMPFLT_mantle_check_height )
      goto LABEL_26;
    v9 = "mantle_check_height";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
    __debugbreak();
LABEL_26:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
Mantle_GetCheckRange
==============
*/
float Mantle_GetCheckRange(const playerState_s *ps, const MantleResults *mresults)
{
  __int16 groundEntityNum; 
  const char *v4; 

  groundEntityNum = ps->groundEntityNum;
  if ( (mresults->flags & 0x700) != 0 )
  {
    if ( groundEntityNum == 2047 )
    {
      _RBX = DCONST_DVARFLT_mantle_check_range_side_back_air;
      if ( DCONST_DVARFLT_mantle_check_range_side_back_air )
        goto LABEL_14;
      v4 = "mantle_check_range_side_back_air";
    }
    else
    {
      _RBX = DCONST_DVARFLT_mantle_check_range_side_back;
      if ( DCONST_DVARFLT_mantle_check_range_side_back )
        goto LABEL_14;
      v4 = "mantle_check_range_side_back";
    }
  }
  else if ( groundEntityNum == 2047 )
  {
    _RBX = DCONST_DVARFLT_mantle_check_range_air;
    if ( DCONST_DVARFLT_mantle_check_range_air )
      goto LABEL_14;
    v4 = "mantle_check_range_air";
  }
  else
  {
    _RBX = DCONST_DVARFLT_mantle_check_range;
    if ( DCONST_DVARFLT_mantle_check_range )
      goto LABEL_14;
    v4 = "mantle_check_range";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v4) )
    __debugbreak();
LABEL_14:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
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
  __asm { vmovss  xmm1, cs:__real@433e0000; maxAbsValueSize }
  return MSG_UnpackUnsignedFloat(ps->mantleState.compressedAnimData.distanceZ, *(float *)&_XMM1, 8u);
}

/*
==============
Mantle_GetMantleTime
==============
*/

int __fastcall Mantle_GetMantleTime(const int flags, double height, double distance3D, double vel2D)
{
  char v33; 
  char v34; 
  const char *v40; 
  const char *v56; 
  int result; 
  __int64 v108; 
  __int64 v109; 
  char v113; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  dword ptr [rax+20h], xmm3
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
    vmovaps xmm10, xmm2
    vmovaps xmm13, xmm1
  }
  if ( (flags & 0x800) != 0 )
  {
    _RSI = DCONST_DVARFLT_mantle_ladder_dist_min;
    if ( !DCONST_DVARFLT_mantle_ladder_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_dist_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm15, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_dist_max;
    if ( !DCONST_DVARFLT_mantle_ladder_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_dist_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm12, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_time_min;
    if ( !DCONST_DVARFLT_mantle_ladder_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_time_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm14, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_time_max;
    if ( !DCONST_DVARFLT_mantle_ladder_time_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_time_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm11, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_speed_min;
    if ( !DCONST_DVARFLT_mantle_ladder_speed_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_speed_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm8, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_ladder_speed_max;
    if ( !DCONST_DVARFLT_mantle_ladder_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_speed_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm7, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARMPFLT_mantle_ladder_timescale_min;
    if ( !DCONST_DVARMPFLT_mantle_ladder_timescale_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_timescale_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm9, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARMPFLT_mantle_ladder_timescale_max;
    if ( !DCONST_DVARMPFLT_mantle_ladder_timescale_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_timescale_max") )
      __debugbreak();
LABEL_26:
    Dvar_CheckFrontendServerThread(_RSI);
    goto LABEL_110;
  }
  if ( (flags & 1) != 0 )
  {
    _RSI = DCONST_DVARFLT_mantle_over_dist_max;
    if ( !DCONST_DVARFLT_mantle_over_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_dist_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vcomiss xmm10, dword ptr [rsi+28h] }
    if ( v33 | v34 )
    {
      _RSI = DCONST_DVARFLT_mantle_over_dist_min;
      if ( !DCONST_DVARFLT_mantle_over_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_dist_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm15, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_mantle_over_dist_max;
      if ( !DCONST_DVARFLT_mantle_over_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_dist_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm12, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_mantle_over_time_min;
      if ( !DCONST_DVARFLT_mantle_over_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_time_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm14, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_mantle_over_time_max;
      if ( DCONST_DVARFLT_mantle_over_time_max )
        goto LABEL_56;
      v40 = "mantle_over_time_max";
    }
    else
    {
      _RSI = DCONST_DVARFLT_mantle_over_high_dist_min;
      if ( !DCONST_DVARFLT_mantle_over_high_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_high_dist_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm15, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_mantle_over_high_dist_max;
      if ( !DCONST_DVARFLT_mantle_over_high_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_high_dist_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm12, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_mantle_over_high_time_min;
      if ( !DCONST_DVARFLT_mantle_over_high_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_high_time_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm14, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_mantle_over_high_time_max;
      if ( DCONST_DVARFLT_mantle_over_high_time_max )
        goto LABEL_56;
      v40 = "mantle_over_high_time_max";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v40) )
      __debugbreak();
LABEL_56:
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm11, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_speed_min;
    if ( !DCONST_DVARFLT_mantle_over_speed_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_speed_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm8, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_over_speed_max;
    if ( !DCONST_DVARFLT_mantle_over_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_speed_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm7, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARMPFLT_mantle_over_timescale_min;
    if ( !DCONST_DVARMPFLT_mantle_over_timescale_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_timescale_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm9, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARMPFLT_mantle_over_timescale_max;
    if ( !DCONST_DVARMPFLT_mantle_over_timescale_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_over_timescale_max") )
      __debugbreak();
    goto LABEL_26;
  }
  _RSI = DCONST_DVARFLT_mantle_on_dist_max;
  if ( !DCONST_DVARFLT_mantle_on_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_dist_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vcomiss xmm13, dword ptr [rsi+28h] }
  if ( v33 | v34 )
  {
    _RSI = DCONST_DVARFLT_mantle_on_dist_min;
    if ( !DCONST_DVARFLT_mantle_on_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_dist_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm15, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_dist_max;
    if ( !DCONST_DVARFLT_mantle_on_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_dist_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm12, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_time_min;
    if ( !DCONST_DVARFLT_mantle_on_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_time_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm14, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_time_max;
    if ( DCONST_DVARFLT_mantle_on_time_max )
      goto LABEL_97;
    v56 = "mantle_on_time_max";
  }
  else
  {
    _RSI = DCONST_DVARFLT_mantle_on_high_dist_min;
    if ( !DCONST_DVARFLT_mantle_on_high_dist_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_high_dist_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm15, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_high_dist_max;
    if ( !DCONST_DVARFLT_mantle_on_high_dist_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_high_dist_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm12, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_high_time_min;
    if ( !DCONST_DVARFLT_mantle_on_high_time_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_high_time_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm14, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_mantle_on_high_time_max;
    if ( DCONST_DVARFLT_mantle_on_high_time_max )
      goto LABEL_97;
    v56 = "mantle_on_high_time_max";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v56) )
    __debugbreak();
LABEL_97:
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm11, dword ptr [rsi+28h] }
  _RSI = DCONST_DVARFLT_mantle_on_speed_min;
  if ( !DCONST_DVARFLT_mantle_on_speed_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_speed_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm8, dword ptr [rsi+28h] }
  _RSI = DCONST_DVARFLT_mantle_on_speed_max;
  if ( !DCONST_DVARFLT_mantle_on_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_speed_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm7, dword ptr [rsi+28h] }
  _RSI = DCONST_DVARMPFLT_mantle_on_timescale_min;
  if ( !DCONST_DVARMPFLT_mantle_on_timescale_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_timescale_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm9, dword ptr [rsi+28h] }
  _RSI = DCONST_DVARMPFLT_mantle_on_timescale_max;
  if ( !DCONST_DVARMPFLT_mantle_on_timescale_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_on_timescale_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovaps xmm10, xmm13 }
LABEL_110:
  __asm
  {
    vmovss  xmm6, dword ptr [rsi+28h]
    vmovaps xmm2, xmm12; max
    vmovaps xmm1, xmm15; min
    vmovaps xmm0, xmm10; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm12, xmm15
    vmovaps xmm13, [rsp+0F8h+var_88]
    vmovaps xmm10, xmm0
  }
  if ( v33 | v34 )
  {
    __asm
    {
      vcvttss2si eax, xmm15
      vcvttss2si ecx, xmm12
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1143, ASSERT_TYPE_ASSERT, "( mantleMaxDist ) > ( mantleMinDist )", "%s > %s\n\t%i, %i", "mantleMaxDist", "mantleMinDist", _ECX, _EAX) )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm1, xmm10, xmm15
    vmovss  xmm10, cs:__real@3f800000
    vsubss  xmm0, xmm12, xmm15
    vdivss  xmm3, xmm1, xmm0
    vsubss  xmm0, xmm10, xmm3
    vmulss  xmm2, xmm0, xmm14
    vmovss  xmm0, [rsp+0F8h+arg_18]; val
    vmulss  xmm1, xmm3, xmm11
    vaddss  xmm11, xmm2, xmm1
    vmovaps xmm2, xmm7; max
    vmovaps xmm1, xmm8; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm7, xmm8
    vmovaps xmm15, [rsp+0F8h+var_A8]
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm12, xmm0
  }
  if ( v33 | v34 )
  {
    __asm
    {
      vcvttss2si edx, xmm7
      vcvttss2si eax, xmm8
    }
    LODWORD(v109) = _EAX;
    LODWORD(v108) = _EDX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1152, ASSERT_TYPE_ASSERT, "( mantleMaxSpeed ) > ( mantleMinSpeed )", "%s > %s\n\t%i, %i", "mantleMaxSpeed", "mantleMinSpeed", v108, v109) )
      __debugbreak();
  }
  _R11 = &v113;
  __asm
  {
    vsubss  xmm1, xmm12, xmm8
    vmovaps xmm12, xmmword ptr [r11-70h]
    vsubss  xmm0, xmm7, xmm8
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vdivss  xmm3, xmm1, xmm0
    vsubss  xmm1, xmm10, xmm3
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmulss  xmm2, xmm1, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm0, xmm3, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm1, xmm2, xmm11
    vmulss  xmm3, xmm1, cs:__real@447a0000
    vmovaps xmm11, xmmword ptr [r11-60h]
    vcvttss2si eax, xmm3
  }
  return result;
}

/*
==============
Mantle_GetSearchDirection
==============
*/
void Mantle_GetSearchDirection(const playerState_s *ps, const BgHandler *pmoveHandler, MantleResults *mresults, const vec3_t *wishDir, vec3_t *outSearchDir, vec3_t *outSearchStraightDir)
{
  const dvar_t *v34; 
  bool v35; 
  double Float_Internal_DebugName; 
  vec3_t forward; 
  vec3_t angles; 
  vec3_t outUp; 
  WorldUpReferenceFrame v77; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R14 = outSearchDir;
  _RSI = mresults;
  _RDI = outSearchStraightDir;
  _RBX = ps;
  _R15 = wishDir;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v77, ps, pmoveHandler);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1D8h]
    vmovss  xmm1, dword ptr [rbx+1DCh]
    vmovss  dword ptr [rbp+47h+angles], xmm0
    vmovss  xmm0, dword ptr [rbx+1E0h]
    vmovss  dword ptr [rbp+47h+angles+8], xmm0
    vmovss  dword ptr [rbp+47h+angles+4], xmm1
  }
  WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v77, &angles);
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  WorldUpReferenceFrame::SetUpContribution(&v77, *(float *)&_XMM1, &forward);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+47h+forward]
    vmovss  xmm6, dword ptr [rbp+47h+forward+4]
    vmovss  xmm4, dword ptr [rbp+47h+forward+8]
    vmovss  xmm7, cs:__real@3f800000
  }
  _RSI->signedAngleBetweenMantleDirAndLookDir = 0.0;
  __asm
  {
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm3, xmm5, xmm1
    vmulss  xmm2, xmm6, xmm1
    vmulss  xmm0, xmm4, xmm1
    vmovss  dword ptr [rdi], xmm3
    vmovss  dword ptr [rdi+4], xmm2
    vmovss  dword ptr [rdi+8], xmm0
  }
  v34 = DCONST_DVARBOOL_mantle_any_direction;
  __asm
  {
    vmovss  dword ptr [rbp+47h+forward], xmm3
    vmovss  dword ptr [rbp+47h+forward+4], xmm2
    vmovss  dword ptr [rbp+47h+forward+8], xmm0
  }
  if ( !DCONST_DVARBOOL_mantle_any_direction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_any_direction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  v35 = !v34->current.enabled;
  if ( !v34->current.enabled )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  xmm4, dword ptr [r15]
    vmovss  xmm3, dword ptr [r15+8]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm5, xmm2, xmm2
    vcmpless xmm0, xmm5, cs:__real@80000000
    vblendvps xmm0, xmm5, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r14], xmm0
    vmulss  xmm1, xmm2, dword ptr [r15+4]
    vmovss  dword ptr [r14+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [r15+8]
    vcvtss2sd xmm1, xmm5, xmm5
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
    vmovss  dword ptr [r14+8], xmm0
  }
  if ( v35 )
  {
LABEL_24:
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+47h+forward]
      vmovss  xmm1, dword ptr [rbp+47h+forward+4]
      vmovss  dword ptr [r14], xmm0
      vmovss  xmm0, dword ptr [rbp+47h+forward+8]
      vmovss  dword ptr [r14+8], xmm0
      vmovss  dword ptr [r14+4], xmm1
    }
  }
  else
  {
    WorldUpReferenceFrame::GetUpVector(&v77, &outUp);
    *(double *)&_XMM0 = SignedAngleBetween(&forward, outSearchDir, &outUp);
    __asm { vmovss  dword ptr [rsi+84h], xmm0 }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    _RBX = DCONST_DVARFLT_mantle_left_mantle_angle_end;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DCONST_DVARFLT_mantle_left_mantle_angle_end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_left_mantle_angle_end") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_mantle_left_mantle_angle_begin;
    if ( !DCONST_DVARFLT_mantle_left_mantle_angle_begin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_left_mantle_angle_begin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]; rangeBegin
      vmovaps xmm2, xmm7; angle
      vmovaps xmm1, xmm6; rangeEnd
    }
    if ( Mantle_IsIn360AngleInterval(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2) )
    {
      _RSI->flags |= 0x100u;
    }
    else
    {
      _RBX = DCONST_DVARFLT_mantle_back_mantle_angle_end;
      if ( !DCONST_DVARFLT_mantle_back_mantle_angle_end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_back_mantle_angle_end") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_mantle_back_mantle_angle_begin;
      if ( !DCONST_DVARFLT_mantle_back_mantle_angle_begin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_back_mantle_angle_begin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]; rangeBegin
        vmovaps xmm2, xmm7; angle
        vmovaps xmm1, xmm6; rangeEnd
      }
      if ( Mantle_IsIn360AngleInterval(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2) )
      {
        _RSI->flags |= 0x400u;
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_right_mantle_angle_end, "mantle_right_mantle_angle_end");
        __asm { vmovaps xmm6, xmm0 }
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_right_mantle_angle_begin, "mantle_right_mantle_angle_begin");
        __asm
        {
          vmovaps xmm2, xmm7; angle
          vmovaps xmm1, xmm6; rangeEnd
        }
        if ( Mantle_IsIn360AngleInterval(*(const float *)&Float_Internal_DebugName, *(const float *)&_XMM1, *(const float *)&_XMM2) )
          _RSI->flags |= 0x200u;
      }
    }
  }
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+0F0h+var_48+8]
    vmovaps xmm7, [rsp+0F0h+var_58+8]
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
  char v6; 
  __int64 result; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1182, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = Mantle_GetLedgeHeight(ps);
  _RBX = DCONST_DVARFLT_mantle_gesture_extreme_min_height;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_mantle_gesture_extreme_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_extreme_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v6 )
  {
    _RBX = DCONST_DVARFLT_mantle_gesture_high_min_height;
    if ( !DCONST_DVARFLT_mantle_gesture_high_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_high_min_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( v6 )
    {
      _RBX = DCONST_DVARFLT_mantle_gesture_middle_min_height;
      if ( !DCONST_DVARFLT_mantle_gesture_middle_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_middle_min_height") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      result = 1i64;
    }
    else
    {
      result = 2i64;
    }
  }
  else
  {
    result = 3i64;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
Mantle_InDistanceRegardlessOfSpeed
==============
*/
__int64 Mantle_InDistanceRegardlessOfSpeed(const playerState_s *ps, const MantleResults *mresults)
{
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = mresults;
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2642, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_mantle_check_radius;
  if ( !DCONST_DVARFLT_mantle_check_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(ps);
  __asm { vsubss  xmm6, xmm0, xmm6 }
  *(float *)&_XMM0 = Mantle_GetCheckRange(ps, _RDI);
  __asm
  {
    vaddss  xmm1, xmm0, xmm6
    vcomiss xmm1, dword ptr [rdi+70h]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return 1i64;
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

bool __fastcall Mantle_IsIn360AngleInterval(double rangeBegin, double rangeEnd, double angle)
{
  bool v11; 
  bool result; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm10
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm0, xmm10
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm8, xmm0
    vcomiss xmm0, cs:__real@43b40000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2040, ASSERT_TYPE_ASSERT, "((rangeBegin >= 0.0f) && (rangeBegin < 360.0f))", (const char *)&queryFormat, "(rangeBegin >= 0.0f) && (rangeBegin < 360.0f)") )
    __debugbreak();
  __asm
  {
    vcomiss xmm7, xmm10
    vcomiss xmm7, cs:__real@43b40000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2041, ASSERT_TYPE_ASSERT, "((rangeEnd >= 0.0f) && (rangeEnd < 360.0f))", (const char *)&queryFormat, "(rangeEnd >= 0.0f) && (rangeEnd < 360.0f)") )
    __debugbreak();
  __asm
  {
    vcomiss xmm6, xmm10
    vcomiss xmm6, cs:__real@43b40000
  }
  v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 2042, ASSERT_TYPE_ASSERT, "((angle >= 0.0f) && (angle < 360.0f))", (const char *)&queryFormat, "(angle >= 0.0f) && (angle < 360.0f)");
  if ( v11 )
    __debugbreak();
  __asm { vcomiss xmm8, xmm7 }
  if ( v11 )
  {
    __asm { vcomiss xmm6, xmm8 }
  }
  else
  {
    __asm
    {
      vcomiss xmm6, xmm8
      vcomiss xmm6, xmm7
    }
  }
  result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm10, [rsp+78h+var_48]
  }
  return result;
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
  char v7; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1059, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = Mantle_GetLedgeHeight(ps);
  _RBX = DCONST_DVARFLT_mantle_gesture_high_min_height;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_mantle_gesture_high_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_high_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vcomiss xmm6, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return !v7;
}

/*
==============
Mantle_Move
==============
*/
void Mantle_Move(pmove_t *pm, pml_t *pml)
{
  int v12; 
  int v13; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  const dvar_t *v50; 
  playerState_s *ps; 
  bool v52; 
  char v56; 
  playerState_s *v60; 
  playerState_s *v61; 
  int flags; 
  const dvar_t *v63; 
  int v65; 
  bool v67; 
  char v68; 
  const dvar_t *v69; 
  const dvar_t *v70; 
  const char *v80; 
  int elapsedAnimTime; 
  vec3_t end; 
  pml_t *pmla; 
  vec3_t outPos; 
  trace_t outResults; 
  BSplineRelaxedCBezier outMantleSpline; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  pmla = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4237, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _R14 = pm->ps;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4237, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = 0;
  v13 = _R14->mantleState.endTime - _R14->mantleState.startTime;
  if ( v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4242, ASSERT_TYPE_ASSERT, "( mantleDuration ) > ( 0 )", "%s > %s\n\t%lli, %lli", "mantleDuration", "0", v13, 0i64) )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm9, xmm9, xmm9
  }
  if ( pm->cmd.serverTime - _R14->mantleState.startTime > 0 )
    v12 = pm->cmd.serverTime - _R14->mantleState.startTime;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, esi
    vcvtsi2ss xmm9, xmm9, edi
    vdivss  xmm0, xmm0, xmm9; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  elapsedAnimTime = v12;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm10, xmm0 }
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&outMantleSpline);
  Mantle_BuildMotionPath(pm, &outMantleSpline);
  __asm { vmovaps xmm1, xmm10; t }
  BG_BSpline_RelaxedCBezier_Evaluate(&outMantleSpline, *(float *)&_XMM1, &outPos);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+4A0h+outPos]
    vsubss  xmm5, xmm1, dword ptr [r14+30h]
    vmovss  xmm2, dword ptr [rsp+4A0h+outPos+4]
    vsubss  xmm6, xmm2, dword ptr [r14+34h]
    vmovss  xmm0, dword ptr [rbp+3A0h+outPos+8]
    vsubss  xmm7, xmm0, dword ptr [r14+38h]
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vdivss  xmm3, xmm1, dword ptr [r15+24h]
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
    vdivss  xmm4, xmm8, xmm0
    vmulss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, xmm3
    vmovss  dword ptr [r14+3Ch], xmm1
    vmulss  xmm2, xmm6, xmm4
    vmulss  xmm0, xmm2, xmm3
    vmulss  xmm1, xmm7, xmm4
    vmulss  xmm2, xmm1, xmm3
    vmovss  dword ptr [r14+44h], xmm2
    vmovss  dword ptr [r14+40h], xmm0
  }
  v46 = DCONST_DVARINT_mantle_debug;
  if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( (v46->current.enabled & 4) != 0 && !pm->isExtrapolation )
  {
    v47 = DVARINT_mantle_debugLineTime;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    Mantle_DebugLine(pm->m_bgHandler, &_R14->origin, &outPos, &colorYellow, v47->current.integer);
  }
  v48 = DVARBOOL_playerCharacterCollisionMantleVehicleWallFix;
  end.v[2] = outPos.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+4A0h+outPos]
    vmovsd  qword ptr [rsp+4A0h+end], xmm0
  }
  if ( !DVARBOOL_playerCharacterCollisionMantleVehicleWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleVehicleWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  if ( !v48->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    goto LABEL_37;
  v50 = DVARBOOL_playerCharacterCollisionMantleWindowFix;
  ps = pm->ps;
  if ( !DVARBOOL_playerCharacterCollisionMantleWindowFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleWindowFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  v52 = !v50->current.enabled || (ps->mantleState.flags & 0x1000) != 0;
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    goto LABEL_37;
  if ( !v52 )
    goto LABEL_37;
  __asm { vmovss  xmm0, dword ptr [rsp+4A0h+end] }
  _R9 = &ps->origin;
  __asm { vucomiss xmm0, dword ptr [r9] }
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &end, pm->bounds, ps->movingPlatforms.m_movingPlatformEntity, pm->tracemask & 0xFDFFBFFF, ps != NULL);
  __asm
  {
    vmovss  xmm0, [rbp+3A0h+outResults.fraction]
    vucomiss xmm0, xmm8
  }
  if ( v56 || outResults.hitId != 2046 )
  {
LABEL_37:
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+4A0h+outPos]
      vmovss  dword ptr [r14+30h], xmm0
      vmovss  xmm1, dword ptr [rsp+4A0h+outPos+4]
      vmovss  dword ptr [r14+34h], xmm1
      vmovss  xmm0, dword ptr [rbp+3A0h+outPos+8]
      vmovss  dword ptr [r14+38h], xmm0
    }
  }
  v60 = pm->ps;
  if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Mantle_SetTraceFlags(pm->m_trace);
  BgTrace::LegacyTrace(pm->m_trace, pm, &outResults, &v60->origin, &v60->origin, pm->bounds, v60->clientNum, 16);
  Mantle_RestoreTraceFlags(pm->m_trace);
  if ( BG_Glass_CanBreakGlass(&outResults) )
    BG_AddPredictableEventToPlayerstate(EV_BREAK_GLASS, 0, pm->cmd.serverTime, pm->weaponMap, v60);
  v61 = pm->ps;
  if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4063, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  flags = v61->mantleState.flags;
  if ( (flags & 0x20) != 0 || (flags & 0x40) != 0 )
  {
    v65 = elapsedAnimTime;
  }
  else
  {
    v63 = DCONST_DVARFLT_mantle_land_time;
    if ( !DCONST_DVARFLT_mantle_land_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_land_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v63);
    __asm { vmulss  xmm0, xmm9, dword ptr [r15+28h] }
    v65 = elapsedAnimTime;
    __asm { vcvttss2si eax, xmm0 }
    if ( _EAX >= elapsedAnimTime )
      v61->mantleState.flags |= 0x40u;
  }
  v67 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW);
  v68 = 0;
  if ( v67 )
    Mantle_ExecuteAnimScript(pm, v65, v13);
  __asm { vcomiss xmm10, xmm8 }
  if ( v68 )
  {
    Mantle_UpdateViewYaw(pm);
  }
  else
  {
    Mantle_MoveComplete(pm, pmla, v13, &outMantleSpline);
    v69 = DVARINT_mantle_debugLineTime;
    if ( !DVARINT_mantle_debugLineTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debugLineTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v69);
    Mantle_DebugStar(pm->m_bgHandler, &_R14->origin, &colorCyan, v69->current.integer);
    v70 = DCONST_DVARINT_mantle_debug;
    if ( !DCONST_DVARINT_mantle_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    if ( v70->current.integer )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r14+38h]
        vmovss  xmm2, dword ptr [r14+34h]
        vmovss  xmm1, dword ptr [r14+30h]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v80 = j_va("Mantle End: (%.2f, %.2f, %.2f)\n", _RDX, _R8, _R9);
      Mantle_DebugPrint(2u, v80);
    }
  }
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
Mantle_MoveComplete
==============
*/
void Mantle_MoveComplete(pmove_t *pm, pml_t *pml, const int mantleLength, const BSplineRelaxedCBezier *mantleSpline)
{
  int flags; 
  char v15; 
  char v16; 
  int v20; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4159, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4159, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4161, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 5u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4165, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::MANTLE ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::MANTLE )") )
    __debugbreak();
  _RBX->pm_flags.m_flags[0] &= ~0x20u;
  pm->m_flags &= ~0x40u;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RBX->eFlags, GameModeFlagValues::ms_mpValue, 0x18u);
  flags = _RBX->mantleState.flags;
  if ( (flags & 4) != 0 )
  {
    BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, _RBX);
    flags = _RBX->mantleState.flags;
  }
  Mantle_SetEndingVelocity(pm, (flags & 0x20) != 0, mantleSpline);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rsp+88h+vec], xmm0
    vmovss  xmm1, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+88h+vec+4], xmm1
    vmovss  xmm0, dword ptr [rbx+44h]
    vmovss  dword ptr [rsp+88h+vec+8], xmm0
  }
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
  _RSI = DCONST_DVARFLT_mantle_max_vertical_end_velocity;
  if ( !DCONST_DVARFLT_mantle_max_vertical_end_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_max_vertical_end_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+28h]
    vmovss  xmm0, dword ptr [rsp+88h+vec+8]
    vcomiss xmm0, xmm1
  }
  if ( !(v15 | v16) )
  {
    __asm { vmovss  dword ptr [rsp+88h+vec+8], xmm1 }
    WorldUpReferenceFrame::ApplyReferenceFrameToVector(&pm->refFrame, &vec);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+vec]
      vmovss  dword ptr [rbx+3Ch], xmm0
      vmovss  xmm1, dword ptr [rsp+88h+vec+4]
      vmovss  dword ptr [rbx+40h], xmm1
      vmovss  xmm0, dword ptr [rsp+88h+vec+8]
      vmovss  dword ptr [rbx+44h], xmm0
    }
  }
  v20 = _RBX->mantleState.flags;
  if ( (v20 & 0x800) != 0 )
  {
    *(_QWORD *)_RBX->velocity.v = 0i64;
    _RBX->velocity.v[2] = 0.0;
    v20 = _RBX->mantleState.flags;
  }
  _RBX->mantleState.flags = v20 | 8;
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
  const dvar_t *v10; 
  const dvar_t *v11; 
  char v17; 
  char v18; 
  WorldUpReferenceFrame v20; 

  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 371, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_mantle_requires_stick;
  if ( !DCONST_DVARBOOL_mantle_requires_stick && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_requires_stick") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    return 0i64;
  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v20, ps, pmoveHandler);
  *(double *)&_XMM0 = WorldUpReferenceFrame::Vec2Dot(&v20, &mresults->dir, wishdir);
  v11 = DCONST_DVARINT_mantle_required_stick_magnitude;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARINT_mantle_required_stick_magnitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_required_stick_magnitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rdi+7Ch]
    vmovaps xmm6, [rsp+0B8h+var_48]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
    vcomiss xmm1, xmm0
  }
  return !(v17 | v18);
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
  char v77; 
  char v78; 
  vec3_t outVec; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
  }
  _RBX = mresults;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1416, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1416, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1417, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+1Ch]
    vmovss  xmm2, dword ptr [rbx+20h]
    vmovss  xmm0, dword ptr [rbx+18h]
    vsubss  xmm7, xmm1, dword ptr [rbx+10h]
    vsubss  xmm8, xmm2, dword ptr [rbx+14h]
    vmovss  xmm9, cs:__real@42dc0000
    vmovss  xmm6, cs:__real@c2dc0000
    vsubss  xmm0, xmm0, dword ptr [rbx+0Ch]; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm7; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm8; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm13, xmm0 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1243, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm9; maxAbsValueSize
    vmovaps xmm0, xmm11; value
  }
  ps->mantleState.ledgePosOffset.v[0] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xFu);
  __asm
  {
    vmovaps xmm1, xmm9; maxAbsValueSize
    vmovaps xmm0, xmm12; value
  }
  ps->mantleState.ledgePosOffset.v[1] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xFu);
  __asm
  {
    vmovaps xmm1, xmm9; maxAbsValueSize
    vmovaps xmm0, xmm13; value
    vmovss  xmm9, cs:__real@43200000
    vmovss  xmm6, cs:__real@c3200000
  }
  ps->mantleState.ledgePosOffset.v[2] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xFu);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vmovss  xmm2, dword ptr [rbx+2Ch]
    vmovss  xmm0, dword ptr [rbx+24h]
    vsubss  xmm7, xmm1, dword ptr [rbx+10h]
    vsubss  xmm8, xmm2, dword ptr [rbx+14h]
    vsubss  xmm0, xmm0, dword ptr [rbx+0Ch]; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm7; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm8; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; value
    vmovaps xmm1, xmm9; maxAbsValueSize
  }
  ps->mantleState.endPosOffset.v[0] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xFu);
  __asm
  {
    vmovaps xmm1, xmm9; maxAbsValueSize
    vmovaps xmm0, xmm7; value
  }
  ps->mantleState.endPosOffset.v[1] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xFu);
  __asm
  {
    vmovaps xmm1, xmm9; maxAbsValueSize
    vmovaps xmm0, xmm6; value
  }
  ps->mantleState.endPosOffset.v[2] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xFu);
  BG_GetMantleLedgePosOffset(ps, &outVec);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+outVec]
    vmovss  xmm1, dword ptr [rsp+0D8h+outVec+4]
    vmovss  xmm8, cs:__real@3e000000
    vsubss  xmm3, xmm0, xmm11
    vmovss  xmm0, dword ptr [rsp+0D8h+outVec+8]
    vsubss  xmm2, xmm1, xmm12
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm4, xmm0, xmm13
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcomiss xmm1, xmm8
  }
  if ( !(v77 | v78) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1437, ASSERT_TYPE_ASSERT, "(Vec3Distance( ledgePosOffset, ledgePosOffsetAfterQuantization ) <= LEDGE_ERROR_MARGIN)", "%s\n\tThe quantization fidelity for the mantle ledge offset is not high enough. Consider either increasing MANTLE_LEDGE_OFFSET_BITS or decreasing MANTLE_LEDGE_OFFSET_MAX", "Vec3Distance( ledgePosOffset, ledgePosOffsetAfterQuantization ) <= LEDGE_ERROR_MARGIN") )
    __debugbreak();
  BG_GetMantleEndPosOffset(ps, &outVec);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+outVec]
    vmovss  xmm1, dword ptr [rsp+0D8h+outVec+4]
    vsubss  xmm3, xmm0, xmm10
    vmovss  xmm0, dword ptr [rsp+0D8h+outVec+8]
    vsubss  xmm2, xmm1, xmm7
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm4, xmm0, xmm6
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcomiss xmm1, xmm8
  }
  if ( !(v77 | v78) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1442, ASSERT_TYPE_ASSERT, "(Vec3Distance( endPosOffset, endPosOffsetAfterQuantization ) <= END_ERROR_MARGIN)", "%s\n\tThe quantization fidelity for the mantle end offset is not high enough. Consider either increasing MANTLE_END_OFFSET_BITS or decreasing MANTLE_END_OFFSET_MAX", "Vec3Distance( endPosOffset, endPosOffsetAfterQuantization ) <= END_ERROR_MARGIN") )
    __debugbreak();
  _R11 = &v102;
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
  }
}

/*
==============
Mantle_SetConstantParameters
==============
*/
void Mantle_SetConstantParameters(pmove_t *pm, const MantleResults *mresults)
{
  char v23; 
  int MantleTime; 
  int serverTime; 
  int flags; 
  bool v44; 
  char v45; 
  vec3_t outVec; 
  BSplineRelaxedCBezier outMantleSpline; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RDI = mresults;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1311, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1311, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1312, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@c3340000; min
    vmovss  xmm0, dword ptr [rdi+84h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:__real@43340000; maxAbsValueSize }
  _RBX->mantleState.compressedAnimData.angle = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
  BG_GetMantleEndPosOffset(_RBX, &outVec);
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &outVec);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+outVec]
    vmovss  xmm1, dword ptr [rsp+3B8h+outVec+4]
    vmovss  xmm7, cs:__real@433e0000
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+3B8h+outVec+8]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vcomiss xmm6, xmm7
  }
  if ( !(v45 | v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1335, ASSERT_TYPE_ASSERT, "(mantleDistance <= 190.0f)", (const char *)&queryFormat, "mantleDistance <= MANTLE_MAX_DISTANCE") )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm7; maxAbsValueSize
    vmovaps xmm0, xmm6; value
  }
  _RBX->mantleState.compressedAnimData.distance2D = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 8u);
  BG_GetMantleLedgePosOffset(_RBX, &outVec);
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &outVec);
  __asm
  {
    vcomiss xmm0, xmm7
    vmovaps xmm6, xmm0
  }
  if ( !(v45 | v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1348, ASSERT_TYPE_ASSERT, "(mantleClimbHeight <= 190.0f)", (const char *)&queryFormat, "mantleClimbHeight <= MANTLE_MAX_DISTANCE") )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm7; maxAbsValueSize
    vmovaps xmm0, xmm6; value
  }
  _RBX->mantleState.compressedAnimData.distanceZ = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 8u);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&outMantleSpline);
  Mantle_BuildMotionPath(pm, &outMantleSpline);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+40h]
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm3, xmm2
    vmovaps xmm1, xmm7; maxAbsValueSize
    vsqrtss xmm6, xmm3, xmm3
  }
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(_RBX->mantleState.compressedAnimData.distanceZ, *(float *)&_XMM1, 8u);
  __asm
  {
    vmovss  xmm2, [rsp+3B8h+outMantleSpline.totalLength]; distance3D
    vmovaps xmm3, xmm6; vel2D
    vmovaps xmm1, xmm0; height
  }
  MantleTime = Mantle_GetMantleTime(_RDI->flags, *(const float *)&_XMM1, *(const float *)&_XMM2, *(float *)&_XMM3);
  serverTime = pm->cmd.serverTime;
  _RBX->mantleState.startTime = serverTime;
  _RBX->mantleState.endTime = serverTime + MantleTime;
  *(double *)&_XMM0 = Mantle_GetLedgeHeight(_RBX);
  _RSI = DCONST_DVARFLT_mantle_gesture_high_min_height;
  __asm { vmovaps xmm7, xmm0 }
  if ( !DCONST_DVARFLT_mantle_gesture_high_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_gesture_high_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vcomiss xmm7, dword ptr [rsi+28h] }
  if ( !v45 )
    _RBX->mantleState.compressedAnimData.flags |= 4u;
  flags = _RDI->flags;
  if ( (flags & 1) != 0 )
  {
    _RBX->mantleState.compressedAnimData.flags |= 2u;
    flags = _RDI->flags;
  }
  if ( (flags & 0x800) != 0 )
  {
    _RBX->mantleState.compressedAnimData.flags |= 0x80u;
    flags = _RDI->flags;
  }
  if ( (flags & 0x100) != 0 )
  {
    _RBX->mantleState.compressedAnimData.flags |= 8u;
  }
  else if ( (flags & 0x200) != 0 )
  {
    _RBX->mantleState.compressedAnimData.flags |= 0x10u;
  }
  else if ( (flags & 0x400) != 0 )
  {
    _RBX->mantleState.compressedAnimData.flags |= 0x20u;
  }
  v44 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u);
  v45 = 0;
  if ( v44 )
  {
    _RDI = DCONST_DVARFLT_mantle_sprint_anim_cond_min_speed;
    if ( !DCONST_DVARFLT_mantle_sprint_anim_cond_min_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_sprint_anim_cond_min_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( !v45 )
    {
      v45 = 0;
      _RBX->mantleState.compressedAnimData.flags |= 0x40u;
    }
  }
  __asm { vcomiss xmm6, cs:__real@43520000 }
  if ( v45 )
  {
    __asm
    {
      vcomiss xmm6, cs:__real@432a0000
      vcomiss xmm6, cs:__real@42c80000
    }
    _RBX->mantleState.mantleSpeedAnimCond = 2;
  }
  else
  {
    _RBX->mantleState.mantleSpeedAnimCond = 4;
  }
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Mantle_SetEndingVelocity
==============
*/
void Mantle_SetEndingVelocity(pmove_t *pm, const bool willBeFalling, const BSplineRelaxedCBezier *mantleSpline)
{
  char v39; 
  char v40; 
  vec3_t outVec; 
  vec3_t v93; 
  vec3_t outPos; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4106, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovaps [rsp+0B8h+var_28], xmm6 }
  if ( willBeFalling )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3Ch]
      vmovss  xmm2, dword ptr [rbx+40h]
      vmovss  xmm3, dword ptr [rbx+44h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:MANTLE_SLOPE_CALC_BEGIN_FRAC; t
      vsqrtss xmm0, xmm2, xmm2
      vmovaps [rsp+0B8h+var_38], xmm7
      vminss  xmm7, xmm0, cs:MAX_MANTLE_EXIT_SPEED
      vmovaps [rsp+0B8h+var_48], xmm8
    }
    BG_BSpline_RelaxedCBezier_Evaluate(mantleSpline, *(float *)&_XMM1, &outPos);
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vmovaps xmm1, xmm8; t
    }
    BG_BSpline_RelaxedCBezier_Evaluate(mantleSpline, *(float *)&_XMM1, &v93);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+var_78]
      vsubss  xmm4, xmm0, dword ptr [rsp+0B8h+outPos]
      vmovss  xmm1, dword ptr [rsp+0B8h+var_78+4]
      vsubss  xmm5, xmm1, dword ptr [rsp+0B8h+outPos+4]
      vmovss  xmm0, dword ptr [rsp+0B8h+var_78+8]
      vsubss  xmm6, xmm0, dword ptr [rsp+0B8h+outPos+8]
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm8, xmm0
      vdivss  xmm2, xmm8, xmm0
      vcvtss2sd xmm0, xmm1, xmm1
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( v39 | v40 )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rbx+44h]
        vmovss  xmm5, dword ptr [rbx+40h]
        vmovss  xmm6, dword ptr [rbx+3Ch]
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
        vdivss  xmm1, xmm8, xmm0
        vmulss  xmm0, xmm4, xmm1
        vmulss  xmm4, xmm6, xmm1
        vmulss  xmm3, xmm5, xmm1
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm2, xmm6
        vmulss  xmm3, xmm2, xmm5
        vmulss  xmm4, xmm2, xmm4
      }
    }
    __asm
    {
      vmulss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm7, xmm4
      vmovss  dword ptr [rbx+3Ch], xmm0
      vmulss  xmm1, xmm3, xmm7
      vmovss  dword ptr [rbx+40h], xmm1
      vmovss  dword ptr [rbx+44h], xmm2
      vmovaps xmm8, [rsp+0B8h+var_48]
      vmovaps xmm7, [rsp+0B8h+var_38]
    }
  }
  else
  {
    BG_GetMantleEndPosOffset(_RBX, &outVec);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+0B8h+outVec+4]
      vmovss  xmm3, dword ptr [rsp+0B8h+outVec]
      vmovss  xmm4, dword ptr [rsp+0B8h+outVec+8]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm6, xmm0, xmm0
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rsp+0B8h+outVec], xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+0B8h+outVec+4], xmm1
      vxorps  xmm1, xmm1, xmm1; height
      vmovss  dword ptr [rsp+0B8h+outVec+8], xmm0
    }
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &outVec);
    __asm
    {
      vmovss  xmm0, cs:__real@447a0000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, xmm6
      vminss  xmm3, xmm2, cs:MAX_MANTLE_EXIT_SPEED
      vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+outVec]
      vmulss  xmm0, xmm3, dword ptr [rsp+0B8h+outVec+4]
    }
    *(_QWORD *)&_RBX->velocity.y = 0i64;
    __asm
    {
      vmovss  dword ptr [rbx+3Ch], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+40h]
      vmulss  xmm0, xmm3, dword ptr [rsp+0B8h+outVec+8]
      vmovss  dword ptr [rbx+40h], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_28] }
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

float __fastcall Mantle_SlowInputTurnRate(const playerState_s *ps, double inputDeltaYaw)
{
  char v13; 
  char v14; 
  double v27; 
  double v28; 
  double v29; 

  __asm { vmovaps [rsp+78h+var_38], xmm8 }
  _RBX = ps;
  __asm { vmovaps xmm8, xmm1 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4348, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 5u) )
    goto LABEL_27;
  _RDI = DCONST_DVARFLT_mantle_view_yawcap;
  if ( !DCONST_DVARFLT_mantle_view_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_view_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+28h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  if ( v13 | v14 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+1DCh]; angle2
    vmovss  xmm0, dword ptr [rbx+37Ch]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm2, xmm0
    vxorps  xmm0, xmm7, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm2, xmm0
  }
  if ( v13 )
    goto LABEL_26;
  __asm { vcomiss xmm2, xmm7 }
  if ( !(v13 | v14) )
  {
LABEL_26:
    __asm { vxorps  xmm0, xmm0, xmm0 }
    goto LABEL_28;
  }
  __asm
  {
    vcomiss xmm2, xmm6
    vxorps  xmm1, xmm1, xmm1
  }
  if ( !(v13 | v14) )
  {
    __asm { vcomiss xmm8, xmm6 }
    if ( v13 )
    {
      __asm { vmovaps xmm1, xmm2 }
      goto LABEL_18;
    }
    __asm { vcomiss xmm2, xmm6 }
  }
  if ( v13 )
  {
    __asm { vcomiss xmm8, xmm6 }
    if ( !(v13 | v14) )
      __asm { vandps  xmm1, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  }
LABEL_18:
  if ( (_RBX->mantleState.flags & 0x800) != 0 )
    goto LABEL_27;
  __asm { vcomiss xmm1, xmm6 }
  if ( (_RBX->mantleState.flags & 0x800) == 0 )
  {
LABEL_27:
    __asm { vmovaps xmm0, xmm8 }
    goto LABEL_28;
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vdivss  xmm0, xmm1, xmm7
    vsubss  xmm7, xmm2, xmm0
    vcomiss xmm7, xmm6
    vcomiss xmm7, xmm2
  }
  if ( (_RBX->mantleState.flags & 0x800) != 0 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+78h+var_40], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+78h+var_48], xmm1
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+78h+var_50], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4385, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( slowDownScaler ) && ( slowDownScaler ) <= ( 1.0f )", "slowDownScaler not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v27, v28, v29) )
      __debugbreak();
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_slow_input_turn_rate_override, "mantle_slow_input_turn_rate_override");
  __asm { vcomiss xmm0, xmm6 }
  if ( !v13 )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mantle_slow_input_turn_rate_override, "mantle_slow_input_turn_rate_override");
    __asm { vmovaps xmm7, xmm0 }
  }
  __asm { vmulss  xmm0, xmm7, xmm8 }
LABEL_28:
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm8, [rsp+78h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
Mantle_Start
==============
*/
void Mantle_Start(pmove_t *pm, MantleResults *mresults)
{
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  gestureAnimType_t MantleType; 
  unsigned int v12; 
  vec3_t vec; 

  _RBP = mresults;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1650, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1650, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI->mantleState.startPosition.v[0] = _RDI->origin.v[0];
  _RDI->mantleState.startPosition.v[1] = _RDI->origin.v[1];
  _RDI->mantleState.startPosition.v[2] = _RDI->origin.v[2];
  Mantle_SavePosOffsets(pm, _RBP);
  Mantle_CalcFallingPosition(pm, _RBP);
  Mantle_SavePosOffsets(pm, _RBP);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  dword ptr [rsp+0A8h+vec], xmm0
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+0A8h+vec+8], xmm0
    vmovss  dword ptr [rsp+0A8h+vec+4], xmm1
  }
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)&vec);
  __asm { vmovss  dword ptr [rdi+37Ch], xmm0 }
  _RDI->mantleState.flags = _RBP->flags;
  v8 = DVARBOOL_playerCharacterCollisionMantleFloorFix;
  if ( !DVARBOOL_playerCharacterCollisionMantleFloorFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleFloorFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
    BGMovingPlatformClient::StartMantle(pm->movingPlatforms, _RDI, _RBP->endGroundEnt);
  _RDI->mantleState.flags &= 0xFFFFEFEF;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 5u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1679, ASSERT_TYPE_ASSERT, "(!ps->pm_flags.TestFlag( PMoveFlagsCommon::MANTLE ))", (const char *)&queryFormat, "!ps->pm_flags.TestFlag( PMoveFlagsCommon::MANTLE )") )
    __debugbreak();
  _RDI->pm_flags.m_flags[0] |= 0x20u;
  Mantle_SetConstantParameters(pm, _RBP);
  v9 = _RDI->mantleState.endTime - _RDI->mantleState.startTime;
  if ( v9 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 1686, ASSERT_TYPE_ASSERT, "( mantleDuration ) > ( 0 )", "%s > %s\n\t%lli, %lli", "mantleDuration", "0", v9, 0i64) )
    __debugbreak();
  PM_Weapon_Mantle(pm, v9);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RDI->eFlags, GameModeFlagValues::ms_mpValue, 0x18u);
  pm->mantleEndPos.v[0] = _RBP->endPos.v[0];
  pm->mantleEndPos.v[1] = _RBP->endPos.v[1];
  pm->mantleEndPos.v[2] = _RBP->endPos.v[2];
  pm->m_flags |= 0x40u;
  pm->mantleDuration = v9;
  v10 = DVARBOOL_playerCharacterCollisionMantleFloorFix;
  if ( !DVARBOOL_playerCharacterCollisionMantleFloorFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionMantleFloorFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    BGMovingPlatformClient::StartMantle(pm->movingPlatforms, _RDI, _RBP->endGroundEnt);
  MantleType = BG_Mantle_GetMantleType(_RDI);
  v12 = BG_PackMantleEventParm(pm->weaponMap, _RDI, _RDI->mantleState.soundFlavorPLR, _RDI->mantleState.soundFlavorNPC, MantleType);
  BG_AddPredictableEventToPlayerstate(EV_MANTLE, v12, pm->cmd.serverTime, pm->weaponMap, _RDI);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    Mantle_ExecuteAnimScript(pm, 0, v9);
  Mantle_DumpMotionPath(pm);
}

/*
==============
Mantle_UnpackAnimData
==============
*/
void Mantle_UnpackAnimData(const compressedAnimData_s *compressedData, characterAnimData_s *animDistances)
{
  _RBX = animDistances;
  if ( !compressedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 293, ASSERT_TYPE_ASSERT, "(compressedData)", (const char *)&queryFormat, "compressedData") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 294, ASSERT_TYPE_ASSERT, "(animDistances)", (const char *)&queryFormat, "animDistances") )
    __debugbreak();
  __asm { vmovss  xmm1, cs:__real@433e0000; maxAbsValueSize }
  _RBX->flags = compressedData->flags;
  _RBX->endScriptAnimTableIndex = compressedData->endScriptAnimTableIndex;
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(compressedData->distance2D, *(float *)&_XMM1, 8u);
  __asm
  {
    vmovss  xmm1, cs:__real@433e0000; maxAbsValueSize
    vmovss  dword ptr [rbx+4], xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(compressedData->distanceZ, *(float *)&_XMM1, 8u);
  __asm
  {
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
    vmovss  dword ptr [rbx+8], xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(compressedData->angle, *(float *)&_XMM1, 9u);
  __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
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
  char v17; 
  Physics_WorldId v18; 
  bool v19; 
  char v21; 
  const dvar_t *v22; 
  SprintState v23; 
  vec3_t vec; 
  vec3_t outWishDir; 
  trace_t results; 

  _R15 = lastSprintState;
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
    _RBX = &v10->origin;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+158h+vec], xmm0
      vmovss  dword ptr [rsp+158h+vec+4], xmm1
      vmovss  dword ptr [rsp+158h+vec+8], xmm2
      vmovss  xmm1, cs:__real@c2100000; height
    }
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
    Mantle_SetTraceFlags(pm->m_trace);
    BgTrace::LegacyTrace(pm->m_trace, pm, &results, &v10->origin, &vec, &bounds_origin, v10->clientNum, pm->tracemask);
    Mantle_RestoreTraceFlags(pm->m_trace);
    __asm
    {
      vmovss  xmm0, [rsp+158h+results.fraction]
      vucomiss xmm0, cs:__real@3f800000
    }
    if ( !v17 )
LABEL_27:
      pml->mresults.closeToGround = 1;
    v18 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
    if ( Mantle_CanMantle(pm, pml, pm->weaponMap, pm->ps, v18, pm->m_bgHandler, pm->tracemask, &pml->mresults, &outWishDir, pm->cmd.serverTime) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r15]
        vmovups [rsp+158h+var_F8], ymm0
      }
      v23.sprintStartMaxLength = _R15->sprintStartMaxLength;
      v21 = Mantle_Activate(pm, pml, &pml->mresults, lastSprinting, &v23, &outWishDir);
      if ( !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
        goto LABEL_38;
      v19 = v21;
    }
    else
    {
      if ( !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
        goto LABEL_38;
      v19 = 0;
    }
    Mantle_DebugDrawTraces(pm, &pml->mresults, v19);
    v22 = DVARBOOL_mantle_debug_traces_once;
    if ( !DVARBOOL_mantle_debug_traces_once && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_debug_traces_once") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
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
  bool v12; 
  WorldUpReferenceFramePM *p_refFrame; 
  char v21; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3392, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3392, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !mresults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 3394, ASSERT_TYPE_ASSERT, "(mresults)", (const char *)&queryFormat, "mresults") )
    __debugbreak();
  v12 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u);
  if ( lastSprinting && !v12 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 9u) )
      PM_ExitAimDownSight(pm);
    _RDI->pm_flags.m_flags[0] &= ~0x800u;
    _RAX = lastSprintState;
    _RDI->pm_flags.m_flags[0] |= 0x100000u;
    __asm { vmovups ymm0, ymmword ptr [rax] }
    LODWORD(_RAX) = lastSprintState->sprintStartMaxLength;
    __asm { vmovups ymmword ptr [rdi+328h], ymm0 }
    _RDI->sprintState.sprintStartMaxLength = (int)_RAX;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u) )
  {
    _RDI = &_RDI->velocity;
    p_refFrame = &pm->refFrame;
    __asm { vmovaps [rsp+78h+var_38], xmm7 }
    *(double *)&_XMM0 = WorldUpReferenceFrame::Vec2Dot(p_refFrame, &mresults->dir, _RDI);
    _RBX = DCONST_DVARFLT_mantle_sprint_min_speed_threshold;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DCONST_DVARFLT_mantle_sprint_min_speed_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_sprint_min_speed_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+28h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( !v21 )
      __asm { vcomiss xmm7, xmm1 }
    _RBX = DCONST_DVARFLT_mantle_sprint_min_speed;
    __asm { vmovaps [rsp+78h+var_28], xmm6 }
    if ( !DCONST_DVARFLT_mantle_sprint_min_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_sprint_min_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+28h]
      vcomiss xmm7, xmm6
    }
    if ( v21 )
    {
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, _RDI);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+0]
        vmovss  dword ptr [rdi], xmm1
        vmulss  xmm2, xmm6, dword ptr [rbp+4]
        vmovss  dword ptr [rdi+4], xmm2
        vmulss  xmm1, xmm6, dword ptr [rbp+8]
        vmovss  dword ptr [rdi+8], xmm1
        vmovaps xmm1, xmm0; height
      }
      WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&_XMM1, _RDI);
    }
    __asm
    {
      vmovaps xmm6, [rsp+78h+var_28]
      vmovaps xmm7, [rsp+78h+var_38]
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
  char v30; 
  char v31; 
  const dvar_t *v32; 
  int v33; 
  const dvar_t *v36; 
  vec3_t outVec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4305, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 4305, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (_RBX->mantleState.flags & 0x800) != 0 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovaps [rsp+0A8h+var_48], xmm8
    }
    BG_GetMantleLedgePosOffset(_RBX, &outVec);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+394h]
      vaddss  xmm1, xmm3, dword ptr [rsp+0A8h+outVec+4]
      vmovss  xmm5, dword ptr [rbx+390h]
      vaddss  xmm6, xmm5, dword ptr [rsp+0A8h+outVec]
      vmovss  xmm8, dword ptr [rbx+398h]
      vaddss  xmm7, xmm8, dword ptr [rsp+0A8h+outVec+8]
      vmovss  xmm0, dword ptr [rbx+34h]
      vsubss  xmm2, xmm0, xmm1
      vmovss  xmm0, dword ptr [rbx+30h]
      vsubss  xmm1, xmm3, xmm1
      vmulss  xmm4, xmm2, xmm1
      vsubss  xmm1, xmm0, xmm6
      vmovss  xmm0, dword ptr [rbx+38h]
      vsubss  xmm3, xmm5, xmm6
      vmovaps xmm6, [rsp+0A8h+var_28]
      vmulss  xmm2, xmm3, xmm1
      vsubss  xmm3, xmm0, xmm7
      vsubss  xmm1, xmm8, xmm7
      vmovaps xmm8, [rsp+0A8h+var_48]
      vmovaps xmm7, [rsp+0A8h+var_38]
      vaddss  xmm5, xmm4, xmm2
      vmulss  xmm2, xmm3, xmm1
      vaddss  xmm4, xmm5, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm4, xmm0
    }
    if ( v30 | v31 )
    {
      if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 0x10u) )
      {
        v32 = DCONST_DVARINT_mantle_ladder_yaw_extra_time;
        if ( !DCONST_DVARINT_mantle_ladder_yaw_extra_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_yaw_extra_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        v33 = v32->current.integer + _RBX->mantleState.endTime - _RBX->serverTime;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1D8h]
          vmovss  xmm1, dword ptr [rbx+37Ch]
        }
        v36 = DCONST_DVARINT_mantle_ladder_yaw_ease_mode;
        __asm
        {
          vaddss  xmm2, xmm1, cs:__real@43340000
          vmovss  dword ptr [rsp+0A8h+outVec], xmm0
          vmovss  dword ptr [rsp+0A8h+outVec+4], xmm2
        }
        if ( !DCONST_DVARINT_mantle_ladder_yaw_ease_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_yaw_ease_mode") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        PM_StartViewAngleTransition(pm, v33, (EViewAngleEaseMode)v36->current.integer, (EViewAngleEaseMode)v36->current.integer, (const vec2_t *)&outVec, 2);
      }
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
__int64 Mantle_WillReachLedgeWithoutMantle(pmove_t *pm, const MantleResults *mresults)
{
  const dvar_t *v11; 
  __int64 result; 
  WorldUpReferenceFramePM *p_refFrame; 
  char v67; 
  vec3_t v72; 
  vec3_t vec; 
  vec3_t v74; 

  _RDI = mresults;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 389, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _R14 = pm->ps;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_mantle.cpp", 389, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = DCONST_DVARBOOL_mantle_check_trajectory;
  if ( !DCONST_DVARBOOL_mantle_check_trajectory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_check_trajectory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled )
    return 0i64;
  __asm
  {
    vmovaps [rsp+0F8h+var_38], xmm6
    vmovaps [rsp+0F8h+var_48], xmm7
    vmovaps [rsp+0F8h+var_58], xmm8
    vmovaps [rsp+0F8h+var_68], xmm9
    vmovaps [rsp+0F8h+var_78], xmm10
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm9, xmm9, xmm9
  }
  if ( _R14->groundEntityNum != 2047 )
  {
    *(double *)&_XMM0 = Jump_GetJumpHeight(_R14);
    __asm { vmovaps xmm1, xmm0; height }
    *(double *)&_XMM0 = Jump_GetVelocity(pm, *(float *)&_XMM1);
    __asm { vmovaps xmm10, xmm0 }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [r14+30h]
    vmovss  dword ptr [rsp+0F8h+vec], xmm1
    vmovss  xmm2, dword ptr [r14+34h]
    vmovss  dword ptr [rsp+0F8h+vec+4], xmm2
    vmovss  xmm1, dword ptr [r14+38h]
    vmovss  dword ptr [rsp+0F8h+vec+8], xmm1
  }
  p_refFrame = &pm->refFrame;
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&_XMM1, &vec);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmovss  xmm1, dword ptr [rdi+1Ch]
    vmovss  dword ptr [rsp+0F8h+var_B8], xmm0
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  dword ptr [rsp+0F8h+var_B8+4], xmm1
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rsp+0F8h+var_B8+8], xmm0
  }
  WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&_XMM1, &v72);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F8h+var_B8]
    vsubss  xmm8, xmm0, dword ptr [rsp+0F8h+vec]
    vmovss  xmm0, dword ptr [rsp+0F8h+var_B8+8]
    vsubss  xmm7, xmm0, dword ptr [rsp+0F8h+vec+8]
    vmovss  xmm0, dword ptr [r14+3Ch]
    vmovss  xmm1, dword ptr [rsp+0F8h+var_B8+4]
    vsubss  xmm6, xmm1, dword ptr [rsp+0F8h+vec+4]
    vmovss  dword ptr [rsp+0F8h+var_98], xmm0
    vmovss  xmm1, dword ptr [r14+40h]
    vmovss  dword ptr [rsp+0F8h+var_98+4], xmm1
    vmovss  xmm0, dword ptr [r14+44h]
    vxorps  xmm1, xmm1, xmm1; height
    vmovss  dword ptr [rsp+0F8h+var_98+8], xmm0
  }
  WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&_XMM1, &v74);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F8h+var_98+4]
    vmovss  xmm1, dword ptr [rsp+0F8h+var_98]
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+0F8h+var_98+8]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm0, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vaddss  xmm2, xmm4, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmulss  xmm2, xmm6, xmm6
    vdivss  xmm4, xmm0, xmm3
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm6, xmm4, xmm1
  }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &_R14->velocity);
  __asm
  {
    vaddss  xmm1, xmm0, xmm10
    vmulss  xmm4, xmm1, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmulss  xmm2, xmm1, xmm6
    vmulss  xmm3, xmm2, xmm6
    vsubss  xmm7, xmm4, xmm3
  }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &_RDI->ledgePos);
  __asm { vmovaps xmm6, xmm0 }
  WorldUpReferenceFrame::GetUpContribution(p_refFrame, &_R14->origin);
  __asm
  {
    vmovaps xmm10, [rsp+0F8h+var_78]
    vmovaps xmm8, [rsp+0F8h+var_58]
    vsubss  xmm6, xmm6, xmm0
    vcomiss xmm6, xmm9
    vmovaps xmm9, [rsp+0F8h+var_68]
  }
  if ( v67 )
    goto LABEL_20;
  _RBX = DCONST_DVARFLT_mantle_prevention_jump_height_delta;
  if ( !DCONST_DVARFLT_mantle_prevention_jump_height_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_prevention_jump_height_delta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vsubss  xmm0, xmm7, xmm6
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v67 )
LABEL_20:
    result = 1i64;
  else
    result = 0i64;
  __asm
  {
    vmovaps xmm7, [rsp+0F8h+var_48]
    vmovaps xmm6, [rsp+0F8h+var_38]
  }
  return result;
}

/*
==============
PM_Mantle_ValidateMantleOnMover
==============
*/
bool PM_Mantle_ValidateMantleOnMover(const pmove_t *pm, const vec3_t *targetOrigin)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  playerState_s *ps; 
  bool v7; 
  char v11; 
  trace_t outResults; 

  _RBP = targetOrigin;
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
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
    return 1;
  if ( !v7 )
    return 1;
  __asm { vmovss  xmm0, dword ptr [rbp+0] }
  _R9 = &ps->origin;
  __asm { vucomiss xmm0, dword ptr [r9] }
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, _RBP, pm->bounds, ps->movingPlatforms.m_movingPlatformEntity, pm->tracemask & 0xFDFFBFFF, ps != NULL);
  __asm
  {
    vmovss  xmm0, [rsp+0E8h+outResults.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  if ( v11 )
    return 1;
  return outResults.hitId != 2046;
}

