/*
==============
PM_traceHandlerRotated
==============
*/

void __fastcall PM_traceHandlerRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, int passEntityNum, int contentMask)
{
  ?PM_traceHandlerRotated@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@22PEBUBounds@@HH@Z(worldId, results, start, end, angles, bounds, passEntityNum, contentMask);
}

/*
==============
PM_traceIgnoreList
==============
*/

void __fastcall PM_traceIgnoreList(const pmove_t *pm, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *ignoreEntities, int numIgnoreEntities, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, bool allowCheapPointQueries, BG_PMove_Cage *cage, PhysicsQuery_ContextSettings *traceContext)
{
  ?PM_traceIgnoreList@@YAXPEBVpmove_t@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEAHHPEAIIH_NPEAUBG_PMove_Cage@@PEAVPhysicsQuery_ContextSettings@@@Z(pm, results, start, end, bounds, ignoreEntities, numIgnoreEntities, ignoreBodies, numIgnoreBodies, contentMask, allowCheapPointQueries, cage, traceContext);
}

/*
==============
PM_Debug_TestPlayerCollisionPoint
==============
*/

void __fastcall PM_Debug_TestPlayerCollisionPoint(const pmove_t *pm)
{
  ?PM_Debug_TestPlayerCollisionPoint@@YAXPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_PlayerSecondaryCollision_ResetBlendIn
==============
*/

void __fastcall BG_PlayerSecondaryCollision_ResetBlendIn(playerState_s *ps)
{
  ?BG_PlayerSecondaryCollision_ResetBlendIn@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_PlayerCollision_GetCollisionStickLength
==============
*/

double __fastcall BG_PlayerCollision_GetCollisionStickLength(const Bounds *bounds)
{
  double result; 

  *(float *)&result = ?BG_PlayerCollision_GetCollisionStickLength@@YAMPEBUBounds@@@Z(bounds);
  return result;
}

/*
==============
PM_GroundTrace
==============
*/

void __fastcall PM_GroundTrace(pmove_t *pm, pml_t *pml, bool endFrameUpdate)
{
  ?PM_GroundTrace@@YAXPEAVpmove_t@@PEAUpml_t@@_N@Z(pm, pml, endFrameUpdate);
}

/*
==============
PM_GroundTraceNew_Finalize
==============
*/

void __fastcall PM_GroundTraceNew_Finalize(pmove_t *pm, pml_t *pml, bool endFrameUpdate, bool crashLanded)
{
  ?PM_GroundTraceNew_Finalize@@YAXPEAVpmove_t@@PEAUpml_t@@_N2@Z(pm, pml, endFrameUpdate, crashLanded);
}

/*
==============
BG_UsingNewPlayerCollision
==============
*/

bool __fastcall BG_UsingNewPlayerCollision()
{
  return ?BG_UsingNewPlayerCollision@@YA_NXZ();
}

/*
==============
PM_playerTrace
==============
*/

void __fastcall PM_playerTrace(const pmove_t *const pm, trace_t *const outResults, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, bool allowCheapPointQueries, PhysicsQuery_ContextSettings *traceContext)
{
  ?PM_playerTrace@@YAXQEBVpmove_t@@QEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HPEAIIH_NPEAVPhysicsQuery_ContextSettings@@@Z(pm, outResults, start, end, bounds, passEntityNum, ignoreBodies, numIgnoreBodies, contentMask, allowCheapPointQueries, traceContext);
}

/*
==============
PM_ButtCollision_Resolve
==============
*/

void __fastcall PM_ButtCollision_Resolve(pmove_t *pm, pml_t *pml, vec3_t *outAppliedInstantaneousVelocity, BgAntiLagEntityInfo *infoList, unsigned int numInfoItems)
{
  ?PM_ButtCollision_Resolve@@YAXPEAVpmove_t@@PEAUpml_t@@AEATvec3_t@@PEAUBgAntiLagEntityInfo@@I@Z(pm, pml, outAppliedInstantaneousVelocity, infoList, numInfoItems);
}

/*
==============
PM_GroundTraceDefaultClear
==============
*/

void __fastcall PM_GroundTraceDefaultClear(pmove_t *pm, pml_t *pml)
{
  ?PM_GroundTraceDefaultClear@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_SetRideMover
==============
*/

void __fastcall PM_SetRideMover(pmove_t *pm, trace_t *trace)
{
  ?PM_SetRideMover@@YAXPEAVpmove_t@@PEAUtrace_t@@@Z(pm, trace);
}

/*
==============
PM_ResolvePlayerPenetration
==============
*/

bool __fastcall PM_ResolvePlayerPenetration(const pmove_t *pm, const vec3_t *origin, const vec3_t *angles, const Bounds *bounds, const vec3_t *hintNormal, int traceMask, bool vehicleTrace, vec3_t *outOrigin, bool *outHadPenetration)
{
  return ?PM_ResolvePlayerPenetration@@YA_NPEBVpmove_t@@AEBTvec3_t@@PEBT2@PEBUBounds@@2H_NAEAT2@PEA_N@Z(pm, origin, angles, bounds, hintNormal, traceMask, vehicleTrace, outOrigin, outHadPenetration);
}

/*
==============
PM_GroundTraceTest
==============
*/

void __fastcall PM_GroundTraceTest(pmove_t *pm, trace_t *trace, const vec3_t *start, const vec3_t *end, const vec3_t *base, int resolvePlatformUp)
{
  ?PM_GroundTraceTest@@YAXPEAVpmove_t@@PEAUtrace_t@@AEBTvec3_t@@22H@Z(pm, trace, start, end, base, resolvePlatformUp);
}

/*
==============
PM_LastStandCollision_Resolve
==============
*/

void __fastcall PM_LastStandCollision_Resolve(pmove_t *pm, pml_t *pml, vec3_t *outAppliedInstantaneousVelocity)
{
  ?PM_LastStandCollision_Resolve@@YAXPEAVpmove_t@@PEAUpml_t@@AEATvec3_t@@@Z(pm, pml, outAppliedInstantaneousVelocity);
}

/*
==============
PM_PlayerSecondaryCollision_UpdateState
==============
*/

void __fastcall PM_PlayerSecondaryCollision_UpdateState(pmove_t *pm)
{
  ?PM_PlayerSecondaryCollision_UpdateState@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_Debug_TestPlayerCollisionPoint
==============
*/

void __fastcall BG_Debug_TestPlayerCollisionPoint(const playerState_s *ps, const BgHandler *handler, int traceMask, const Bounds *bounds)
{
  ?BG_Debug_TestPlayerCollisionPoint@@YAXPEBUplayerState_s@@PEBVBgHandler@@HPEBUBounds@@@Z(ps, handler, traceMask, bounds);
}

/*
==============
PM_IsUsingNoCollMovement
==============
*/

bool __fastcall PM_IsUsingNoCollMovement(const pmove_t *pm)
{
  return ?PM_IsUsingNoCollMovement@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
PM_ResolveCharacterCollision
==============
*/

void __fastcall PM_ResolveCharacterCollision(pmove_t *pm, pml_t *pml, vec3_t *outAppliedInstantaneousVelocity, BgAntiLagEntityInfo *infoList, unsigned int numInfoItems)
{
  ?PM_ResolveCharacterCollision@@YAXPEAVpmove_t@@PEAUpml_t@@AEATvec3_t@@PEAUBgAntiLagEntityInfo@@I@Z(pm, pml, outAppliedInstantaneousVelocity, infoList, numInfoItems);
}

/*
==============
PM_UpdatePlayerCollision
==============
*/

void __fastcall PM_UpdatePlayerCollision(pmove_t *pm, pml_t *pml, int gravity, int bCheckFootsteps, int ignoreImpulseFields, bool performSlideMove)
{
  ?PM_UpdatePlayerCollision@@YAXPEAVpmove_t@@PEAUpml_t@@HHH_N@Z(pm, pml, gravity, bCheckFootsteps, ignoreImpulseFields, performSlideMove);
}

/*
==============
PM_GroundTraceNew_CrashLand
==============
*/

void __fastcall PM_GroundTraceNew_CrashLand(pmove_t *pm, pml_t *pml, const bool endFrameUpdate)
{
  ?PM_GroundTraceNew_CrashLand@@YAXPEAVpmove_t@@PEAUpml_t@@_N@Z(pm, pml, endFrameUpdate);
}

/*
==============
PM_GroundTraceNew
==============
*/

void __fastcall PM_GroundTraceNew(pmove_t *pm, pml_t *pml, bool endFrameUpdate)
{
  ?PM_GroundTraceNew@@YAXPEAVpmove_t@@PEAUpml_t@@_N@Z(pm, pml, endFrameUpdate);
}

/*
==============
BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem
==============
*/

void __fastcall BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(Bounds *bounds)
{
  ?BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem@@YAXPEAUBounds@@@Z(bounds);
}

/*
==============
PM_GroundTraceNew_ApplyFallDamageFix
==============
*/

void __fastcall PM_GroundTraceNew_ApplyFallDamageFix(pmove_t *pm, pml_t *pml, bool endFrameUpdate, bool crashLanded)
{
  ?PM_GroundTraceNew_ApplyFallDamageFix@@YAXPEAVpmove_t@@PEAUpml_t@@_N2@Z(pm, pml, endFrameUpdate, crashLanded);
}

/*
==============
BG_ResolvePlayerPenetration
==============
*/

bool __fastcall BG_ResolvePlayerPenetration(const Physics_WorldId worldId, const playerState_s *ps, const Bounds *bounds, const vec3_t *origin, const vec3_t *angles, const vec3_t *hintNormal, int traceMask, bool vehicleTrace, vec3_t *outOrigin, bool *outHadPenetration)
{
  return ?BG_ResolvePlayerPenetration@@YA_NW4Physics_WorldId@@PEBUplayerState_s@@PEBUBounds@@AEBTvec3_t@@PEBT4@4H_NAEAT4@PEA_N@Z(worldId, ps, bounds, origin, angles, hintNormal, traceMask, vehicleTrace, outOrigin, outHadPenetration);
}

/*
==============
BG_PlayerSecondaryCollision_ClipToVelocityPlane
==============
*/

void __fastcall BG_PlayerSecondaryCollision_ClipToVelocityPlane(const playerState_s *const ps, vec3_t *inOutPlayerVelocity)
{
  ?BG_PlayerSecondaryCollision_ClipToVelocityPlane@@YAXQEBUplayerState_s@@AEATvec3_t@@@Z(ps, inOutPlayerVelocity);
}

/*
==============
PM_SetAlmostGroundPlane
==============
*/

void __fastcall PM_SetAlmostGroundPlane(pmove_t *pm, bool newValue)
{
  ?PM_SetAlmostGroundPlane@@YAXPEAVpmove_t@@_N@Z(pm, newValue);
}

/*
==============
PM_traceHandler
==============
*/

void __fastcall PM_traceHandler(const BgPlayerTraceInfo *traceInfo, Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask, const playerState_s *ps, PhysicsQuery_ContextSettings *traceContext)
{
  ?PM_traceHandler@@YAXPEBVBgPlayerTraceInfo@@W4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@3PEBUBounds@@HHPEBUplayerState_s@@PEAVPhysicsQuery_ContextSettings@@@Z(traceInfo, worldId, results, start, end, bounds, passEntityNum, contentMask, ps, traceContext);
}

/*
==============
PM_trace
==============
*/

void __fastcall PM_trace(const pmove_t *pm, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask)
{
  ?PM_trace@@YAXPEBVpmove_t@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HH@Z(pm, results, start, end, bounds, passEntityNum, contentMask);
}

/*
==============
BG_Debug_TestPlayerCollisionPoint
==============
*/
void BG_Debug_TestPlayerCollisionPoint(const playerState_s *ps, const BgHandler *handler, int traceMask, const Bounds *bounds)
{
  const dvar_t *v4; 
  int passEntityNum; 
  Physics_WorldId v10; 
  const BgPlayerTraceInfo *v11; 
  BgTrace v12; 
  trace_t results; 

  v4 = DCONST_DVARINT_playerCharacterCollisionDebugWallExploits;
  if ( !DCONST_DVARINT_playerCharacterCollisionDebugWallExploits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionDebugWallExploits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == ps->clientNum && ps->pm_type <= 1u && ps->serverTime - ps->lastSpawnTime >= 5000 )
  {
    if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 4043, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
      __debugbreak();
    passEntityNum = ps->clientNum;
    if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
      passEntityNum = ps->movingPlatforms.m_movingPlatformEntity;
    v10 = handler->GetPhysicsWorldId((BgHandler *)handler);
    v11 = handler->GetPlayerTraceInfo(handler, (unsigned int)ps->clientNum);
    BgTrace::BgTrace(&v12, v11);
    BgTrace::LegacyTraceHandler(&v12, v10, &results, &ps->origin, &ps->origin, bounds, passEntityNum, traceMask & 0xFDFFBFFF, ps);
    if ( (results.allsolid || results.startsolid) && results.hitId == 2046 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 4063, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "In Static Geo!") )
      __debugbreak();
  }
}

/*
==============
BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem
==============
*/
void BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(Bounds *bounds)
{
  double CollisionStickLength; 
  float v3; 

  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 204, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  CollisionStickLength = BG_PlayerCollision_GetCollisionStickLength(bounds);
  v3 = *(float *)&CollisionStickLength * 0.5;
  *(float *)&CollisionStickLength = bounds->halfSize.v[2] - bounds->halfSize.v[0];
  bounds->halfSize.v[2] = *(float *)&CollisionStickLength;
  if ( (float)(*(float *)&CollisionStickLength - v3) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 214, ASSERT_TYPE_ASSERT, "((bounds->halfSize[2] - halfStickHeight) >= 0.0f)", (const char *)&queryFormat, "(bounds->halfSize[2] - halfStickHeight) >= 0.0f") )
    __debugbreak();
  bounds->halfSize.v[2] = bounds->halfSize.v[2] - v3;
  bounds->midPoint.v[2] = v3 + bounds->midPoint.v[2];
}

/*
==============
BG_PlayerCollision_GetCollisionStickLength
==============
*/
float BG_PlayerCollision_GetCollisionStickLength(const Bounds *bounds)
{
  float v2; 
  const dvar_t *v3; 
  float v4; 

  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 178, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v2 = (float)(bounds->halfSize.v[2] - bounds->halfSize.v[0]) * 2.0;
  if ( v2 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 183, ASSERT_TYPE_ASSERT, "(capsuleHeight >= 0.0f)", (const char *)&queryFormat, "capsuleHeight >= 0.0f") )
    __debugbreak();
  v3 = DCONST_DVARMPFLT_playerCollisionStandingStickHeight;
  if ( !DCONST_DVARMPFLT_playerCollisionStandingStickHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionStandingStickHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = v3->current.value / STANDING_CYLINDER_PART_OF_CAPSULE_REFERENCE;
  if ( (v4 > 1.0 || v4 < 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 195, ASSERT_TYPE_ASSERT, "(stickHeightFraction <= 1.0f && stickHeightFraction >= 0.0f)", (const char *)&queryFormat, "stickHeightFraction <= 1.0f && stickHeightFraction >= 0.0f") )
    __debugbreak();
  return v4 * v2;
}

/*
==============
BG_PlayerSecondaryCollision_ClipToVelocityPlane
==============
*/
void BG_PlayerSecondaryCollision_ClipToVelocityPlane(const playerState_s *const ps, vec3_t *inOutPlayerVelocity)
{
  int velocityClipDir; 
  double v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  int v14; 
  vec3_t angles; 
  vec3_t forward; 

  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_LADDER_AIM|0x80) && !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2010, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_CROUCH_BUTT_COLLISION ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_LAST_STAND_COLLISION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_CROUCH_BUTT_COLLISION ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_LAST_STAND_COLLISION )") )
      __debugbreak();
    if ( ps->velocityClipDir > 0x100u )
    {
      v14 = 256;
      LODWORD(v13) = ps->velocityClipDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2011, ASSERT_TYPE_ASSERT, "( 0 ) <= ( ps->velocityClipDir ) && ( ps->velocityClipDir ) <= ( (1 << 8) )", "ps->velocityClipDir not in [0, MOVEMENTDIR_360_DEGREES]\n\t%i not in [%i, %i]", v13, 0i64, v14) )
        __debugbreak();
    }
    velocityClipDir = ps->velocityClipDir;
    angles.v[0] = 0.0;
    angles.v[2] = 0.0;
    v5 = BG_MovementDirToDegrees(velocityClipDir);
    angles.v[1] = *(float *)&v5;
    AngleVectors(&angles, &forward, NULL, NULL);
    v6 = inOutPlayerVelocity->v[1];
    v7 = inOutPlayerVelocity->v[2];
    v8 = forward.v[2];
    v9 = (float)((float)(inOutPlayerVelocity->v[0] * forward.v[0]) + (float)(v6 * forward.v[1])) + (float)(v7 * forward.v[2]);
    if ( v9 < 0.0 )
    {
      LODWORD(v10) = LODWORD(v9) ^ _xmm;
      v11 = (float)(forward.v[0] * COERCE_FLOAT(LODWORD(v9) ^ _xmm)) + inOutPlayerVelocity->v[0];
      v12 = (float)(forward.v[1] * COERCE_FLOAT(LODWORD(v9) ^ _xmm)) + v6;
      inOutPlayerVelocity->v[0] = v11;
      inOutPlayerVelocity->v[2] = (float)(v8 * v10) + v7;
      inOutPlayerVelocity->v[1] = v12;
    }
  }
}

/*
==============
BG_PlayerSecondaryCollision_IsValidState_ButtCollision
==============
*/
bool BG_PlayerSecondaryCollision_IsValidState_ButtCollision(const playerState_s *const ps)
{
  const dvar_t *v2; 
  const dvar_t *v3; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1930, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_LADDER_AIM|0x80) )
    return 0;
  v2 = DVARBOOL_killswitch_butt_collision_enabled;
  if ( !DVARBOOL_killswitch_butt_collision_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_butt_collision_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return 0;
  v3 = DVARFLT_playerButtCollisionOffset;
  if ( !DVARFLT_playerButtCollisionOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.value >= 0.000001 && (PM_GetEffectiveStanceForWorldModelAnimation(ps) & 0xFFFFFFFD) == 0 && BG_PlayerSecondaryCollision_IsValidState_Common(ps);
}

/*
==============
BG_PlayerSecondaryCollision_IsValidState_Common
==============
*/
bool BG_PlayerSecondaryCollision_IsValidState_Common(const playerState_s *const ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1892, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !ps->pm_type && !BG_IsPlayerInExecution(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !BG_ContextMount_IsActive(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
}

/*
==============
BG_PlayerSecondaryCollision_IsValidState_LastStand
==============
*/
bool BG_PlayerSecondaryCollision_IsValidState_LastStand(const playerState_s *ps)
{
  return Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) && PM_GetEffectiveStanceForWorldModelAnimation(ps) == PM_EFF_STANCE_LASTSTANDCRAWL && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) && BG_PlayerSecondaryCollision_IsValidState_Common(ps);
}

/*
==============
BG_PlayerSecondaryCollision_ResetBlendIn
==============
*/
void BG_PlayerSecondaryCollision_ResetBlendIn(playerState_s *ps)
{
  if ( ps )
  {
    ps->secondaryCollisionStartTime = ps->serverTime;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1986, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    MEMORY[0x52BC] = MEMORY[4];
  }
}

/*
==============
BG_ResolvePlayerPenetration
==============
*/
char BG_ResolvePlayerPenetration(const Physics_WorldId worldId, const playerState_s *ps, const Bounds *bounds, const vec3_t *origin, const vec3_t *angles, const vec3_t *hintNormal, int traceMask, bool vehicleTrace, vec3_t *outOrigin, bool *outHadPenetration)
{
  int ignoreEnt; 
  __int128 v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  bool penetrating; 
  bool penetratingBrushBasis; 
  vec3_t penetration; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 744, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outHadPenetration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 745, ASSERT_TYPE_ASSERT, "(outHadPenetration)", (const char *)&queryFormat, "outHadPenetration") )
    __debugbreak();
  *outHadPenetration = 0;
  ignoreEnt = ps->clientNum;
  if ( vehicleTrace )
  {
    if ( !BGVehicles::IsRemoteDrivingVehicle(ps) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 754, ASSERT_TYPE_ASSERT, "(BGVehicles::IsRemoteDrivingVehicle( ps ))", (const char *)&queryFormat, "BGVehicles::IsRemoteDrivingVehicle( ps )") )
      __debugbreak();
    ignoreEnt = ps->vehicleState.entity;
  }
  penetrating = 0;
  penetratingBrushBasis = 0;
  PhysicsQuery_LegacyPenetrationTest(worldId, ps, &penetrating, &penetratingBrushBasis, &penetration, origin, angles, bounds, traceMask, 0xFFFFFFFF, &vec3_origin, ignoreEnt, vehicleTrace);
  if ( !penetrating )
  {
    *outOrigin = *origin;
    return 1;
  }
  *outHadPenetration = 1;
  if ( !hintNormal || penetratingBrushBasis )
  {
    v17 = penetration.v[2];
    v16 = penetration.v[1];
    *(float *)&v15 = penetration.v[0];
LABEL_24:
    outOrigin->v[0] = *(float *)&v15 + origin->v[0];
    outOrigin->v[1] = v16 + origin->v[1];
    outOrigin->v[2] = v17 + origin->v[2];
    return 1;
  }
  if ( hintNormal->v[0] == 0.0 && hintNormal->v[1] == 0.0 && hintNormal->v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 782, ASSERT_TYPE_ASSERT, "(Vec3NotZero( *hintNormal ))", (const char *)&queryFormat, "Vec3NotZero( *hintNormal )") )
    __debugbreak();
  v15 = LODWORD(penetration.v[0]);
  v16 = penetration.v[1];
  v17 = penetration.v[2];
  v18 = v15;
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(v16 * v16)) + (float)(v17 * v17));
  _XMM3 = v18;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  if ( (float)((float)((float)((float)(penetration.v[1] * (float)(1.0 / *(float *)&_XMM0)) * hintNormal->v[1]) + (float)((float)(penetration.v[0] * (float)(1.0 / *(float *)&_XMM0)) * hintNormal->v[0])) + (float)((float)(penetration.v[2] * (float)(1.0 / *(float *)&_XMM0)) * hintNormal->v[2])) >= -0.001 )
    goto LABEL_24;
  return 0;
}

/*
==============
BG_UsingNewPlayerCollision
==============
*/
bool BG_UsingNewPlayerCollision()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARINT_playerCollisionType;
  if ( !DCONST_DVARINT_playerCollisionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.integer != 0;
}

/*
==============
ComputeFallDamage
==============
*/
__int64 ComputeFallDamage(playerState_s *ps, pmove_t *pm, float fallHeight)
{
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  __int64 result; 
  const dvar_t *v11; 
  const dvar_t *v12; 

  if ( (pm->ground->trace.surfaceFlags & 0x1000) != 0 )
  {
    v5 = DVARFLT_bg_softLandingMinHeight;
    if ( !DVARFLT_bg_softLandingMinHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_softLandingMinHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
    v7 = DVARFLT_bg_softLandingMaxHeight;
    if ( !DVARFLT_bg_softLandingMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_softLandingMaxHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v7->current.value;
    v9 = DVARFLT_bg_softLandingMaxDamage;
    if ( !DVARFLT_bg_softLandingMaxDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_softLandingMaxDamage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    result = (unsigned int)(int)(float)(v9->current.value * 100.0);
  }
  else
  {
    v11 = DVARFLT_bg_fallDamageMinHeight;
    if ( !DVARFLT_bg_fallDamageMinHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_fallDamageMinHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v11->current.value;
    v12 = DVARFLT_bg_fallDamageMaxHeight;
    if ( !DVARFLT_bg_fallDamageMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_fallDamageMaxHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v8 = v12->current.value;
    result = 100i64;
  }
  if ( v8 < value )
  {
    Com_Printf(17, "Invalid bg_fall*Height: max (%f) must be greater than min (%f)\n", v8, value);
    return 0i64;
  }
  if ( fallHeight <= value || (pm->ground->trace.surfaceFlags & 1) != 0 || ps->pm_type >= 7 )
    return 0i64;
  if ( fallHeight < v8 )
    return (unsigned int)(int)(float)((float)((float)(fallHeight - value) / (float)(v8 - value)) * (float)(int)result);
  return result;
}

/*
==============
PM_ButtCollision_Resolve
==============
*/
void PM_ButtCollision_Resolve(pmove_t *pm, pml_t *pml, vec3_t *outAppliedInstantaneousVelocity, BgAntiLagEntityInfo *infoList)
{
  playerState_s *v6; 
  const SuitDef *SuitDef; 
  Physics_WorldId v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  __int128 v18; 
  double v20; 
  __int128 v23; 
  const dvar_t *v24; 
  float value; 
  EffectiveStance EffectiveStanceForWorldModelAnimation; 
  double BoundsHeight; 
  float bounds_radius; 
  const dvar_t *v29; 
  float v30; 
  int v31; 
  float v32; 
  double v33; 
  const dvar_t *v34; 
  float frametime; 
  float v36; 
  float v37; 
  __int128 v38; 
  float v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  float v43; 
  const dvar_t *v44; 
  int contentMask; 
  __int128 v46; 
  __int128 v47; 
  float v48; 
  float v49; 
  float v50; 
  __int128 v51; 
  float v52; 
  playerState_s *ps; 
  vec3_t start; 
  vec3_t outUp; 
  vec2_t vec; 
  float v61; 
  Bounds bounds; 
  trace_t results; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ButtCollision_Resolve");
  if ( pml->frametime > 0.0 )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2057, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    v6 = pm->ps;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2057, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&v6->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u);
    if ( BG_PlayerSecondaryCollision_IsValidState_ButtCollision(v6) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) && PM_GetEffectiveStanceForWorldModelAnimation(v6) == PM_EFF_STANCE_LASTSTANDCRAWL && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v6->otherFlags, ACTIVE, 0xBu) && BG_PlayerSecondaryCollision_IsValidState_Common(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2066, ASSERT_TYPE_ASSERT, "(!BG_PlayerSecondaryCollision_IsValidState_LastStand( ps ))", (const char *)&queryFormat, "!BG_PlayerSecondaryCollision_IsValidState_LastStand( ps )") )
        __debugbreak();
      if ( v6->secondaryCollisionStartTime <= 0 )
        v6->secondaryCollisionStartTime = v6->serverTime;
      if ( (pm->cmd.buttons & 0x800000000i64) != 0 )
      {
        SuitDef = BG_GetSuitDef(v6->suitIndex);
        if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2081, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
          __debugbreak();
        v8 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
        WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
        v9 = pml->forward.v[0];
        v10 = LODWORD(pml->forward.v[1]);
        v11 = pml->forward.v[2];
        v12 = (float)((float)(outUp.v[1] * *(float *)&v10) + (float)(outUp.v[0] * pml->forward.v[0])) + (float)(outUp.v[2] * v11);
        if ( v12 > 0.001 )
        {
          v13 = LODWORD(outUp.v[0]);
          *(float *)&v13 = (float)(outUp.v[0] * COERCE_FLOAT(LODWORD(v12) ^ _xmm)) + v9;
          v14 = v13;
          v15 = LODWORD(outUp.v[1]);
          *(float *)&v15 = (float)(outUp.v[1] * COERCE_FLOAT(LODWORD(v12) ^ _xmm)) + *(float *)&v10;
          v16 = v15;
          v17 = (float)(outUp.v[2] * COERCE_FLOAT(LODWORD(v12) ^ _xmm)) + v11;
          v18 = v14;
          *(float *)&v18 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(*(float *)&v16 * *(float *)&v16)) + (float)(v17 * v17));
          _XMM6 = v18;
          v20 = *(float *)&v18;
          if ( v20 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2093, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( Vec3Length( forward ) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "Vec3Length( forward )", DOUBLE_9_999999974752427eN7, v20) )
            __debugbreak();
          __asm
          {
            vcmpless xmm0, xmm6, cs:__real@80000000
            vblendvps xmm1, xmm6, xmm11, xmm0
          }
          v9 = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM1);
          v23 = v16;
          *(float *)&v23 = *(float *)&v16 * (float)(1.0 / *(float *)&_XMM1);
          v10 = v23;
          v11 = v17 * (float)(1.0 / *(float *)&_XMM1);
        }
        v24 = DVARFLT_playerButtCollisionTestRadius;
        if ( !DVARFLT_playerButtCollisionTestRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionTestRadius") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        value = v24->current.value;
        EffectiveStanceForWorldModelAnimation = PM_GetEffectiveStanceForWorldModelAnimation(v6);
        BoundsHeight = BG_Suit_GetBoundsHeight(v6, EffectiveStanceForWorldModelAnimation);
        bounds.midPoint.v[0] = 0.0;
        bounds.midPoint.v[1] = 0.0;
        bounds.midPoint.v[2] = *(float *)&BoundsHeight * 0.5;
        bounds.halfSize.v[0] = value;
        bounds.halfSize.v[1] = value;
        bounds.halfSize.v[2] = *(float *)&BoundsHeight * 0.5;
        bounds_radius = (float)SuitDef->bounds_radius;
        if ( value > bounds_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2106, ASSERT_TYPE_ASSERT, "( capsuleRadius ) <= ( suit->bounds_radius )", "%s <= %s\n\t%g, %g", "capsuleRadius", "suit->bounds_radius", value, bounds_radius) )
          __debugbreak();
        v29 = DVARFLT_playerButtCollisionBlendTimeSec;
        if ( !DVARFLT_playerButtCollisionBlendTimeSec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionBlendTimeSec") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v30 = v29->current.value;
        v31 = 0;
        if ( v6->secondaryCollisionStartTime <= 0 )
        {
          LODWORD(ps) = v6->secondaryCollisionStartTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2108, ASSERT_TYPE_ASSERT, "( 0 ) < ( ps->secondaryCollisionStartTime )", "%s < %s\n\t%i, %i", "0", "ps->secondaryCollisionStartTime", 0i64, ps) )
            __debugbreak();
        }
        if ( v30 > 0.0 )
          v32 = (float)((float)(v6->serverTime - v6->secondaryCollisionStartTime) * 0.001) / v30;
        else
          v32 = FLOAT_1_0;
        v33 = I_fclamp(v32, 0.0, 1.0);
        v34 = DVARFLT_playerButtCollisionOffset;
        if ( !DVARFLT_playerButtCollisionOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v34);
        frametime = pml->frametime;
        v36 = value - (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)SuitDef->bounds_radius).m128_f32[0] + (float)((float)((float)((float)((float)((float)(*(float *)&v33 * 6.0) - 15.0) * *(float *)&v33) + 10.0) * (float)((float)(*(float *)&v33 * *(float *)&v33) * *(float *)&v33)) * v34->current.value));
        v37 = (float)(v9 * v36) + (float)((float)(frametime * v6->velocity.v[0]) + v6->origin.v[0]);
        v38 = v10;
        *(float *)&v38 = (float)(*(float *)&v10 * v36) + (float)((float)(frametime * v6->velocity.v[1]) + v6->origin.v[1]);
        v39 = *(float *)&v38;
        v40 = (float)(v11 * v36) + (float)((float)(frametime * v6->velocity.v[2]) + v6->origin.v[2]);
        v41 = v37;
        start.v[0] = v37;
        v42 = v38;
        start.v[1] = *(float *)&v38;
        v43 = v40;
        start.v[2] = v40;
        if ( maxIterations > 0 )
        {
          while ( 1 )
          {
            v44 = DVARBOOL_killswitch_butt_collision_vs_players_enabled;
            if ( !DVARBOOL_killswitch_butt_collision_vs_players_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_butt_collision_vs_players_enabled") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v44);
            contentMask = pm->tracemask;
            if ( !v44->current.enabled )
              contentMask &= 0xFDFFBFFF;
            BgTrace::LegacyTraceHandler(pm->m_trace, v8, &results, &start, &start, &bounds, v6->clientNum, contentMask, v6);
            if ( results.fraction >= 1.0 || (float)((float)((float)(results.normal.v[0] * v9) + (float)(results.normal.v[1] * *(float *)&v10)) + (float)(results.normal.v[2] * v11)) < 0.0 )
              break;
            v41 = (float)(results.normal.v[0] * (float)(results.closestPointsPenetration + 0.001)) + start.v[0];
            start.v[0] = v41;
            v46 = LODWORD(results.normal.v[1]);
            *(float *)&v46 = (float)(results.normal.v[1] * (float)(results.closestPointsPenetration + 0.001)) + start.v[1];
            v42 = v46;
            start.v[1] = *(float *)&v46;
            v43 = (float)(results.normal.v[2] * (float)(results.closestPointsPenetration + 0.001)) + start.v[2];
            start.v[2] = v43;
            if ( ++v31 >= maxIterations )
              goto LABEL_56;
          }
          v43 = start.v[2];
          v42 = LODWORD(start.v[1]);
          v41 = start.v[0];
        }
LABEL_56:
        v47 = v42;
        *(float *)&v47 = (float)((float)((float)(*(float *)&v42 - v39) * outUp.v[1]) + (float)((float)(v41 - v37) * outUp.v[0])) + (float)((float)(v43 - v40) * outUp.v[2]);
        v51 = v47 ^ _xmm;
        v48 = (float)(*(float *)&v51 * outUp.v[0]) + (float)(v41 - v37);
        v49 = (float)(*(float *)&v51 * outUp.v[1]) + (float)(*(float *)&v42 - v39);
        v50 = (float)(*(float *)&v51 * outUp.v[2]) + (float)(v43 - v40);
        *(float *)&v51 = (float)((float)(v48 * v48) + (float)(v49 * v49)) + (float)(v50 * v50);
        if ( *(float *)&v51 > 0.0000010000001 )
        {
          if ( pml->frametime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2158, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
            __debugbreak();
          v52 = 1.0 / pml->frametime;
          v6->velocity.v[0] = (float)(v52 * v48) + v6->velocity.v[0];
          v6->velocity.v[1] = (float)(v52 * v49) + v6->velocity.v[1];
          v6->velocity.v[2] = (float)(v52 * v50) + v6->velocity.v[2];
          outAppliedInstantaneousVelocity->v[0] = (float)(v52 * v48) + outAppliedInstantaneousVelocity->v[0];
          outAppliedInstantaneousVelocity->v[1] = (float)(v52 * v49) + outAppliedInstantaneousVelocity->v[1];
          outAppliedInstantaneousVelocity->v[2] = (float)(v52 * v50) + outAppliedInstantaneousVelocity->v[2];
          GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v6->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u);
          *(float *)&v51 = fsqrt(*(float *)&v51);
          _XMM1 = v51;
          __asm
          {
            vcmpless xmm0, xmm1, cs:__real@80000000
            vblendvps xmm2, xmm1, xmm11, xmm0
          }
          vec.v[0] = (float)(1.0 / *(float *)&_XMM2) * v48;
          vec.v[1] = (float)(1.0 / *(float *)&_XMM2) * v49;
          v61 = (float)(1.0 / *(float *)&_XMM2) * v50;
          *(double *)&_XMM0 = vectoyaw(&vec);
          *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, 0.0, 360.0);
          v6->velocityClipDir = BG_DegreesToMovementDir(*(float *)&_XMM0);
        }
      }
    }
    else
    {
      v6->secondaryCollisionStartTime = 0;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_CharacterCollisionTestIntersect
==============
*/
bool PM_CharacterCollisionTestIntersect(pmove_t *pm, const Bounds *otherBounds, const vec3_t *velDir, const vec3_t *playerOrigin, vec3_t *inOutOtherOrigin, vec3_t *outContactPos, float *outContactTime, float *outMaxPenetration)
{
  Bounds *bounds; 
  int v12; 
  __int64 v13; 
  float v14; 
  vec3_t *p_halfSize; 
  int v16; 
  __int64 v17; 
  float v18; 
  double UpContribution; 
  float v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  int v27; 
  __int64 v28; 
  float v29; 
  int v30; 
  __int64 v31; 
  vec3_t *outHitPoint; 
  __int64 v33; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 972, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !otherBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 973, ASSERT_TYPE_ASSERT, "(otherBounds)", (const char *)&queryFormat, "otherBounds") )
    __debugbreak();
  bounds = pm->bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 978, ASSERT_TYPE_ASSERT, "(playerBounds)", (const char *)&queryFormat, "playerBounds") )
    __debugbreak();
  v12 = Vec3MajorAxis(&bounds->halfSize);
  v13 = v12;
  if ( (unsigned int)v12 >= 3 )
  {
    LODWORD(outHitPoint) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outHitPoint, 3) )
      __debugbreak();
  }
  v14 = bounds->halfSize.v[v13];
  p_halfSize = &otherBounds->halfSize;
  v16 = Vec3MajorAxis(&otherBounds->halfSize);
  v17 = v16;
  if ( (unsigned int)v16 >= 3 )
  {
    LODWORD(v33) = 3;
    LODWORD(outHitPoint) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outHitPoint, v33) )
      __debugbreak();
  }
  v18 = v14 + p_halfSize->v[v17];
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, playerOrigin);
  v20 = *(float *)&UpContribution;
  v21 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &bounds->midPoint);
  v22 = *(float *)&v21 + v20;
  v23 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &otherBounds->midPoint);
  v24 = *(float *)&v23;
  v25 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, inOutOtherOrigin);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v24 + *(float *)&v25) - v22) & _xmm) >= v18 )
    return 0;
  v27 = Vec3MinorAxis(&bounds->halfSize);
  v28 = v27;
  if ( (unsigned int)v27 >= 3 )
  {
    LODWORD(v33) = 3;
    LODWORD(outHitPoint) = v27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outHitPoint, v33) )
      __debugbreak();
  }
  v29 = bounds->halfSize.v[v28];
  v30 = Vec3MinorAxis(p_halfSize);
  v31 = v30;
  if ( (unsigned int)v30 >= 3 )
  {
    LODWORD(v33) = 3;
    LODWORD(outHitPoint) = v30;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outHitPoint, v33) )
      __debugbreak();
  }
  *outMaxPenetration = v29 + p_halfSize->v[v31];
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, v20, inOutOtherOrigin);
  return IntersectRaySphere(playerOrigin, velDir, inOutOtherOrigin, *outMaxPenetration, outContactTime, outContactPos);
}

/*
==============
PM_CorrectAllSolid
==============
*/
__int64 PM_CorrectAllSolid(pmove_t *pm, pml_t *pml, trace_t *trace)
{
  playerState_s *ps; 
  bool v7; 
  int hitId; 
  const entityState_t *EntityState; 
  bool v10; 
  Bounds *bounds; 
  float GridSize; 
  playerState_s *v14; 
  float v15; 
  float v16; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t correctDeltas; 
  vec3_t v20; 
  int v21; 
  int v22; 
  int v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  int v28; 
  int v29; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 695, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 695, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = (trace->contents & 0x2000000) != 0;
  if ( BGMovingPlatformClient::CorrectPlatformPenetration(pm->movingPlatforms, pm, trace, &pm->ps->origin, 0) )
    return 1i64;
  if ( trace->hitType == TRACE_HITTYPE_ENTITY )
  {
    hitId = trace->hitId;
    if ( hitId != 2046 )
    {
      EntityState = BG_GetEntityState(pm->m_bgHandler, hitId);
      if ( EntityState )
      {
        if ( BG_CoverWall_IsCoverWall(EntityState) )
        {
          pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, hitId, &angles);
          AnglesToAxis(&angles, &axis);
          v10 = pm->bounds == NULL;
          v20 = axis.m[2];
          v21 = LODWORD(axis.m[1].v[0]) ^ _xmm;
          v22 = LODWORD(axis.m[1].v[1]) ^ _xmm;
          v24 = axis.m[0].v[0];
          v23 = LODWORD(axis.m[1].v[2]) ^ _xmm;
          correctDeltas = axis.m[1];
          v27 = LODWORD(axis.m[0].v[0]) ^ _xmm;
          v25 = axis.m[0].v[1];
          v29 = LODWORD(axis.m[0].v[2]) ^ _xmm;
          v26 = axis.m[0].v[2];
          v28 = LODWORD(axis.m[0].v[1]) ^ _xmm;
          if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 671, ASSERT_TYPE_ASSERT, "(pm->bounds != nullptr)", (const char *)&queryFormat, "pm->bounds != nullptr") )
            __debugbreak();
          bounds = pm->bounds;
          GridSize = (float)BG_CoverWall_GetGridSize();
          if ( PM_JitterPoint(pm, pml, trace, GridSize + bounds->halfSize.v[0], &correctDeltas, 5u) )
            return 1i64;
        }
      }
    }
  }
  if ( PM_JitterPoint(pm, pml, trace, 1.0, CorrectSolidDeltas, g_correctAllSolidDeltasCount) )
    return 1i64;
  if ( v7 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_FIRING) && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_player_enableForcePlayerCollision, "player_enableForcePlayerCollision") )
      {
        v14 = pm->ps;
        v15 = trace->position.v[0] - v14->origin.v[0];
        v16 = trace->position.v[1] - v14->origin.v[1];
        if ( PM_JitterPoint(pm, pml, trace, fsqrt((float)(v15 * v15) + (float)(v16 * v16)), CorrectInsidePlayerDeltas, 0x1Au) )
          return 1i64;
      }
    }
    else if ( PM_JitterPoint(pm, pml, trace, 16.0, CorrectSolidDeltas, g_correctAllSolidDeltasCount) )
    {
      return 1i64;
    }
  }
  ps->groundEntityNum = 2047;
  pm->ground->groundPlane = 0;
  pm->ground->almostGroundPlane = 0;
  pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, 0);
  pm->ground->walking = 0;
  Jump_ClearState(pm);
  return 0i64;
}

/*
==============
PM_CrashLand
==============
*/
void PM_CrashLand(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  int v12; 
  int ViewDip; 
  int v14; 
  BgGroundState *ground; 
  int v16; 
  int v17; 
  BgWeaponMap *v18; 
  int v19; 
  unsigned int v20; 
  entity_event_t v21; 
  double Float_Internal_DebugName; 
  float v23; 
  double v24; 
  int v25; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  unsigned int v28; 
  int LandingEvent; 
  int v30; 
  const SuitDef *SuitDef; 
  float landing_speedScale; 
  int v33; 
  int v34; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2956, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2956, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DCONST_DVARMPBOOL_player_spaceEnabled;
  if ( !DCONST_DVARMPBOOL_player_spaceEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spaceEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
    v6 = pml->previous_velocity.v[2];
    LODWORD(v7) = _mm_cvtepi32_ps((__m128i)ps->gravity).m128_u32[0];
    v8 = COERCE_FLOAT(LODWORD(v7) ^ _xmm) * 0.5;
    v9 = (float)(v6 * v6) - (float)((float)((float)(pml->previous_origin.v[2] - ps->origin.v[2]) * v8) * 4.0);
    if ( v9 >= 0.0 )
    {
      v10 = (float)((float)(COERCE_FLOAT(LODWORD(v6) ^ _xmm) - fsqrt(v9)) * (float)(0.5 / v8)) * COERCE_FLOAT(LODWORD(v7) ^ _xmm);
      v11 = (float)((float)(COERCE_FLOAT(LODWORD(v6) ^ _xmm) - v10) * (float)(COERCE_FLOAT(LODWORD(v6) ^ _xmm) - v10)) * (float)(0.5 / v7);
      v12 = ComputeFallDamage(ps, pm, v11);
      ViewDip = BG_GetViewDip(ps, v11);
      v14 = PM_GroundSurfaceType(pm);
      if ( !v12 )
      {
        if ( v11 <= 4.0 )
          return;
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LANDING, 0, 0, &pml->holdrand);
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_landFXLightHeight, "bg_landFXLightHeight");
        v23 = *(float *)&Float_Internal_DebugName;
        v24 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_landFXMediumHeight, "bg_landFXMediumHeight");
        if ( v11 >= v23 )
        {
          if ( v11 >= *(float *)&v24 )
          {
            if ( !BG_IsPlayerZeroG(ps) )
            {
              SuitDef = BG_GetSuitDef(ps->suitIndex);
              if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3043, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
                __debugbreak();
              landing_speedScale = SuitDef->landing_speedScale;
              ps->velocity.v[0] = landing_speedScale * ps->velocity.v[0];
              ps->velocity.v[1] = landing_speedScale * ps->velocity.v[1];
              ps->velocity.v[2] = landing_speedScale * ps->velocity.v[2];
            }
            v33 = PM_GroundSurfaceType(pm);
            if ( !v33 )
              return;
            v34 = BG_PackSoftLandingEventParm(pm->weaponMap, ps, ViewDip, v33);
            weaponMap = pm->weaponMap;
            serverTime = pm->cmd.serverTime;
            v28 = v34;
            LandingEvent = BG_GetLandingEvent(v11, 0);
          }
          else
          {
            v30 = BG_PackFootstepEventParm(pm->weaponMap, ps, v14, FOOTSTEP_ACTION_TYPE_STEP, 0);
            weaponMap = pm->weaponMap;
            serverTime = pm->cmd.serverTime;
            v28 = v30;
            LandingEvent = PM_GroundSurfaceType(pm) != 0 ? 0xAC : 0;
          }
        }
        else
        {
          v25 = BG_PackFootstepEventParm(pm->weaponMap, ps, v14, FOOTSTEP_ACTION_TYPE_STEP, 0);
          weaponMap = pm->weaponMap;
          serverTime = pm->cmd.serverTime;
          v28 = v25;
          LandingEvent = PM_GroundSurfaceType(pm) != 0 ? 0xAD : 0;
        }
        BG_AddPredictableEventToPlayerstate((const entity_event_t)LandingEvent, v28, serverTime, weaponMap, ps);
        return;
      }
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LANDING, 0, 0, &pml->holdrand);
      ground = pm->ground;
      v16 = ground->trace.surfaceFlags & 0x1000;
      if ( !v14 )
      {
        Com_PrintError(1, "PM_DamageLandingForSurface has been called with a ground surface of type 'NONE' for material '%s' near (%.2f %.2f %.2f). \nThis means a player has landed on a surface that wasn't properly setup to be used as a ground surface. \nUse a different material which has a surface type set.\n", ground->trace.debugHitName, pml->previous_origin.v[0], pml->previous_origin.v[1], pml->previous_origin.v[2]);
        if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_fall_damage_fix_enabled, "fall_damage_fix_enabled") )
          return;
        v14 = 5;
      }
      v17 = BG_PackHardLandingEventParm(pm->weaponMap, ps, v12, v16, ViewDip, v14);
      v18 = pm->weaponMap;
      v19 = pm->cmd.serverTime;
      v20 = v17;
      v21 = BG_GetLandingEvent(v11, 1);
      BG_AddPredictableEventToPlayerstate(v21, v20, v19, v18, ps);
      if ( ps->skydivePlayerState.state[0] )
      {
        if ( v12 >= 100 )
          ps->skydivePlayerState.state[0] = 6;
      }
    }
  }
}

/*
==============
PM_Debug_TestPlayerCollisionPoint
==============
*/
void PM_Debug_TestPlayerCollisionPoint(const pmove_t *pm)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  playerState_s *ps; 
  Bounds *bounds; 
  const BgHandler *m_bgHandler; 
  int tracemask; 
  int passEntityNum; 
  Physics_WorldId v9; 
  const BgPlayerTraceInfo *v10; 
  BgTrace v11; 
  trace_t results; 

  v1 = DCONST_DVARINT_playerCharacterCollisionDebugWallExploits;
  if ( !DCONST_DVARINT_playerCharacterCollisionDebugWallExploits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionDebugWallExploits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer != -1 && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation )
  {
    v3 = DCONST_DVARINT_playerCharacterCollisionDebugWallExploits;
    ps = pm->ps;
    bounds = pm->bounds;
    m_bgHandler = pm->m_bgHandler;
    tracemask = pm->tracemask;
    if ( !DCONST_DVARINT_playerCharacterCollisionDebugWallExploits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionDebugWallExploits") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.integer == ps->clientNum && ps->pm_type <= 1u && ps->serverTime - ps->lastSpawnTime >= 5000 )
    {
      if ( !m_bgHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 4043, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
        __debugbreak();
      passEntityNum = ps->clientNum;
      if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
        passEntityNum = ps->movingPlatforms.m_movingPlatformEntity;
      v9 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
      v10 = m_bgHandler->GetPlayerTraceInfo(m_bgHandler, ps->clientNum);
      BgTrace::BgTrace(&v11, v10);
      BgTrace::LegacyTraceHandler(&v11, v9, &results, &ps->origin, &ps->origin, bounds, passEntityNum, tracemask & 0xFDFFBFFF, ps);
      if ( (results.allsolid || results.startsolid) && results.hitId == 2046 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 4063, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "In Static Geo!") )
        __debugbreak();
    }
    BG_Vehicle_DebugTestVehicleCollisionPoint(pm);
  }
}

/*
==============
PM_EntNumIsAgent
==============
*/
bool PM_EntNumIsAgent(const int entnum)
{
  unsigned int m_clientCount; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 825, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS )") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entnum < (int)ComCharacterLimits::ms_gameData.m_clientCount )
    return 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_clientCount = ComCharacterLimits::ms_gameData.m_clientCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return entnum < (int)(ComCharacterLimits::ms_gameData.m_agentCount + m_clientCount);
}

/*
==============
PM_GetCharacterCollisionType
==============
*/
__int64 PM_GetCharacterCollisionType(pmove_t *pm, team_t playerTeam, bool playerIsAgent, const BgAntiLagEntityInfo *info)
{
  BgHandler *m_bgHandler; 
  int entityIndex; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  CgHandler *v13; 
  int v14; 
  team_t v15; 
  double Float_Internal_DebugName; 
  playerState_s *ps; 
  int v18; 
  team_t outTeam; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 836, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 837, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  m_bgHandler = (BgHandler *)pm->m_bgHandler;
  entityIndex = info->entityIndex;
  if ( m_bgHandler->IsClient(m_bgHandler) )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(m_bgHandler[1].__vftable), entityIndex);
    if ( Entity )
      p_nextState = &Entity->nextState;
    else
      p_nextState = NULL;
  }
  else
  {
    p_nextState = GHandler::GetEntityState((GHandler *)m_bgHandler, entityIndex);
  }
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2004, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 0) )
    return 0i64;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_FIRING|0x80) && Dvar_GetBool_Internal_DebugName(DVARBOOL_pm_enable_solid_coop_agents, "pm_enable_solid_coop_agents") && PM_EntNumIsAgent(info->entityIndex) )
    return 2i64;
  if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_FIRING|0x80) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&pm->ps->otherFlags, ACTIVE, 0xBu) )
    return 0i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_playerCharacterCollisionFriendlySoftPush, "playerCharacterCollisionFriendlySoftPush") )
    goto LABEL_53;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 0x1Cu) )
    return 0i64;
  if ( ((p_nextState->eType - 1) & 0xFFEF) == 0 && pm->ps->mountState.mountFraction > 0.00000011920929 && (LOBYTE(p_nextState->lerp.u.vehicle.bodyPitch) & 2) != 0 )
    return 1i64;
  if ( playerIsAgent )
  {
    if ( PM_EntNumIsAgent(info->entityIndex) )
      return 0i64;
    goto LABEL_53;
  }
  if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_playerCharacterCollisionFriendlySoftPush, "playerCharacterCollisionFriendlySoftPush") )
    goto LABEL_53;
  v13 = (CgHandler *)pm->m_bgHandler;
  v14 = info->entityIndex;
  if ( v13->IsClient(v13) )
    CgHandler::GetPlayerTeam(v13, v14, &outTeam);
  else
    GHandler::GetPlayerTeam((GHandler *)v13, v14, &outTeam);
  v15 = outTeam;
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( playerTeam && playerTeam == v15 )
  {
    if ( pm->ps->serverTime >= pm->ps->lastSpawnTime )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionHardCollisionOnRespawnTime, "playerCharacterCollisionHardCollisionOnRespawnTime");
      if ( pm->ps->serverTime < pm->ps->lastSpawnTime - (int)(float)(*(float *)&Float_Internal_DebugName * -1000.0) )
        return 2i64;
    }
    return 3i64;
  }
  if ( PM_EntNumIsAgent(info->entityIndex) && p_nextState->otherEntityNum == pm->ps->clientNum )
    return 3i64;
  ps = pm->ps;
  v18 = info->entityIndex;
  if ( ps->activeExecutionPartnerEntNum == v18 )
    return 0i64;
  if ( ps->meleeChargeEnt == v18 || PM_EntNumIsAgent(v18) )
    return 2i64;
LABEL_53:
  if ( p_nextState->eType != ET_PLAYER )
    return 2i64;
  return 1i64;
}

/*
==============
PM_GroundTrace
==============
*/
void PM_GroundTrace(pmove_t *pm, pml_t *pml, bool endFrameUpdate)
{
  const dvar_t *v6; 
  playerState_s *ps; 
  WorldUpReferenceFramePM *p_refFrame; 
  float v9; 
  bool IsPlayerZeroG; 
  WorldUpReferenceFramePM *v11; 
  BgGroundState *ground; 
  int surfaceFlags; 
  bool v14; 
  int EntityHitId; 
  double UpContribution; 
  BOOL v17; 
  float v18; 
  double v19; 
  double Float_Internal_DebugName; 
  PlayerAnimScriptEventType v21; 
  char v22; 
  unsigned __int16 v23; 
  const entityState_t *EntityState; 
  const entityState_t *v25; 
  _BOOL8 v26; 
  double v27; 
  _BOOL8 v28; 
  int v29; 
  vec3_t end; 
  vec3_t vec; 
  trace_t trace; 

  v6 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled && !BG_UsingNewPlayerCollision() )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_GroundTrace");
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3679, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3679, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_IsPlayerWalkingDisabled(ps) )
      goto LABEL_43;
    vec = ps->origin;
    end = ps->origin;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( ps == (playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) )
    {
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
        goto LABEL_27;
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
    {
      p_refFrame = &pm->refFrame;
      v9 = FLOAT_N1_0;
      goto LABEL_30;
    }
LABEL_27:
    IsPlayerZeroG = BG_IsPlayerZeroG(ps);
    p_refFrame = &pm->refFrame;
    v11 = &pm->refFrame;
    if ( IsPlayerZeroG )
    {
      v9 = FLOAT_N0_25;
LABEL_31:
      WorldUpReferenceFrame::AddUpContribution(v11, v9, &end);
      BGMovingPlatforms::GroundTrace(pm, &trace, &vec, &end, &ps->origin, 0);
      if ( trace.startsolid || trace.allsolid || !trace.walkable )
        BGMovingPlatforms::GroundTrace(pm, &trace, &vec, &end, &ps->origin, 1);
      ground = pm->ground;
      surfaceFlags = ground->trace.surfaceFlags;
      ground->trace = trace;
      WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(p_refFrame, pm, pml, &trace);
      if ( PM_IsZeroGAntiLag(ps) )
      {
        v14 = BG_IsPlayerZeroG(ps) && PM_ZeroGravityIsWalkingDisabled(pm, &vec, &end);
        if ( trace.allsolid || trace.startsolid || v14 )
          goto LABEL_43;
      }
      else
      {
        if ( trace.allsolid )
        {
          EntityHitId = Trace_GetEntityHitId(&trace);
          if ( !(unsigned int)PM_CorrectAllSolid(pm, pml, &trace) )
          {
            if ( BGMovingPlatforms::IsMovingPlatform(EntityHitId) )
              pm->movingPlatforms->m_contactEnt = EntityHitId;
            goto LABEL_98;
          }
        }
        if ( trace.startsolid )
        {
          UpContribution = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->origin);
          WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&UpContribution - 0.001, &vec);
          BGMovingPlatforms::GroundTrace(pm, &trace, &vec, &end, &ps->origin, 1);
          if ( trace.startsolid )
            goto LABEL_43;
          pm->ground->trace = trace;
          WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(p_refFrame, pm, pml, &trace);
        }
      }
      if ( trace.fraction == 1.0 )
      {
        PM_GroundTraceMissed(pm, pml);
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
          pm->ground->trace.surfaceFlags = surfaceFlags;
        goto LABEL_98;
      }
      if ( trace.normal.v[0] == 0.0 && trace.normal.v[1] == 0.0 && trace.normal.v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3781, ASSERT_TYPE_ASSERT, "(trace.normal[0] || trace.normal[1] || trace.normal[2])", (const char *)&queryFormat, "trace.normal[0] || trace.normal[1] || trace.normal[2]") )
        __debugbreak();
      if ( !BG_IsPlayerZeroG(ps) || !PM_ZeroGravityIsWalkingDisabled(pm, &vec, &end) )
      {
        if ( BGMovingPlatforms::IsOnMovingPlatform(ps) )
          v17 = (float)((float)((float)(trace.normal.v[1] * pml->platformUp.v[1]) + (float)(trace.normal.v[0] * pml->platformUp.v[0])) + (float)(trace.normal.v[2] * pml->platformUp.v[2])) > 0.69999999;
        else
          v17 = 1;
        v18 = (float)((float)(trace.normal.v[1] * ps->velocity.v[1]) + (float)(trace.normal.v[0] * ps->velocity.v[0])) + (float)(trace.normal.v[2] * ps->velocity.v[2]);
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) || (v19 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->velocity), *(float *)&v19 <= 0.0) || v18 <= 10.0 || !v17 )
        {
          v22 = 0;
          if ( (trace.contents & 0x800000) != 0 && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
          {
            v23 = Trace_GetEntityHitId(&trace);
            EntityState = BG_GetEntityState(pm->m_bgHandler, v23);
            v25 = EntityState;
            if ( EntityState )
            {
              if ( BG_IsVehicleEntity(EntityState) || v25->eType == ET_TURRET )
                v22 = 1;
            }
          }
          if ( BGMovingPlatformClient::ShouldAdjustWalkable(pm->movingPlatforms, ps, p_refFrame, &trace) )
          {
            trace.walkable = 1;
            pm->ground->trace.walkable = 1;
          }
          if ( p_refFrame->m_axisAdjusted )
          {
            v27 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &trace.normal);
            trace.walkable = *(float *)&v27 > 0.69999999;
            pm->ground->trace.walkable = *(float *)&v27 > 0.69999999;
          }
          if ( !trace.walkable || trace.contents == 0x2000000 || v22 )
          {
            PM_GroundTraceDefaultClear(pm, pml);
            pm->ground->groundPlane = 1;
            pm->ground->almostGroundPlane = 1;
            LOBYTE(v28) = 1;
            pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, v28);
            Jump_ClearState(pm);
          }
          else
          {
            pm->ground->groundPlane = 1;
            pm->ground->almostGroundPlane = 1;
            LOBYTE(v26) = 1;
            pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, v26);
            pm->ground->walking = 1;
            if ( ps->groundEntityNum == 2047 )
            {
              PM_CrashLand(pm, pml);
              if ( Jump_IsJumpSlowDownEnabled(ps) )
                Jump_Landed(pm);
              else
                Jump_ClearState(pm);
              ps->leapState.lastLandTime = pm->cmd.serverTime;
              if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Fu) )
                Leap_End(pm);
            }
            ps->groundEntityNum = Trace_GetEntityHitId(&trace);
            pm->ground->surfaceType = PM_GroundSurfaceType(pm);
            PM_AddTouchEnt(pm, ps->groundEntityNum, PMTF_TOUCHER_PLAYER);
          }
          goto LABEL_98;
        }
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x29u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_ground_thrown_off_min_anims, "bg_ground_thrown_off_min_anims");
          if ( v18 >= *(float *)&Float_Internal_DebugName )
          {
            PM_SetJumpStrafeCondition(pm);
            if ( PlayerASM_IsEnabled() || (v21 = ANIM_ET_JUMPBK, pm->cmd.forwardmove >= 0) )
              v21 = ANIM_ET_JUMP;
            BG_AnimScriptEvent(pm->m_bgHandler, ps, v21, 0, 0, &pml->holdrand);
            BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
          }
        }
      }
LABEL_43:
      PM_GroundTraceDefaultClear(pm, pml);
LABEL_98:
      Sys_ProfEndNamedEvent();
      return;
    }
    WorldUpReferenceFrame::AddUpContribution(v11, 0.25, &vec);
    v9 = FLOAT_N0_25;
LABEL_30:
    v11 = p_refFrame;
    goto LABEL_31;
  }
  PM_DebugMispredict(pm, 0, NULL);
  PM_GroundTraceNew(pm, pml, endFrameUpdate);
  PM_Debug_TestPlayerCollisionPoint(pm);
  v29 = 2;
  if ( !endFrameUpdate )
    v29 = 1;
  PM_DebugMispredict(pm, v29, NULL);
}

/*
==============
PM_GroundTraceDefaultClear
==============
*/
void PM_GroundTraceDefaultClear(pmove_t *pm, pml_t *pml)
{
  pm->ps->groundEntityNum = 2047;
  pm->ground->groundPlane = 0;
  pm->ground->almostGroundPlane = 0;
  pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, 0);
  pm->ground->walking = 0;
}

/*
==============
PM_GroundTraceMissed
==============
*/
void PM_GroundTraceMissed(pmove_t *pm, pml_t *pml)
{
  playerState_s *v3; 
  Physics_WorldId v4; 
  bool IsSkydiving; 
  bool v6; 
  const vec3_t *p_origin; 
  BgTrace *m_trace; 
  bool v9; 
  playerState_s *v10; 
  int contentMask; 
  float v12; 
  bool v13; 
  playerState_s *ps; 
  vec3_t end; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2762, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v3 = pm->ps;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2762, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = ((unsigned int (__fastcall *)(const BgHandler *, pml_t *))pm->m_bgHandler->GetPhysicsWorldId)(pm->m_bgHandler, pml);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2768, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_MULTIPLAYER )") )
      __debugbreak();
    IsSkydiving = BG_Skydive_IsSkydiving(v3);
    v6 = v3->groundEntityNum == 2047;
    p_origin = &v3->origin;
    m_trace = pm->m_trace;
    v9 = IsSkydiving;
    v10 = pm->ps;
    end.v[0] = v3->origin.v[0];
    ps = v10;
    contentMask = pm->tracemask;
    end.v[1] = v3->origin.v[1];
    v12 = v3->origin.v[2];
    if ( v6 )
    {
      end.v[2] = v12 - 1.0;
      BgTrace::LegacyTraceHandler(m_trace, v4, &results, p_origin, &end, pm->bounds, v3->clientNum, contentMask, ps);
      pm->ground->almostGroundPlane = results.fraction != 1.0;
      ((void (__fastcall *)(const BgHandler *, playerState_s *))pm->m_bgHandler->BotSetAlmostGroundPlane)(pm->m_bgHandler, pm->ps);
      v13 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v3->pm_flags, ACTIVE, 0x1Du) && pm->ground->almostGroundPlane;
      if ( !v9 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v3->pm_flags, ACTIVE, 0x29u) && !v13 )
        BG_AnimScriptAnimation(pm->m_bgHandler, v3, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
    }
    else
    {
      end.v[2] = v12 - 64.0;
      BgTrace::LegacyTraceHandler(m_trace, v4, &results, p_origin, &end, pm->bounds, v3->clientNum, contentMask, ps);
      if ( results.fraction == 1.0 )
      {
        if ( !v9 )
          BG_AnimScriptAnimation(pm->m_bgHandler, v3, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
        pm->ground->almostGroundPlane = 0;
        pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, 0);
      }
      else
      {
        pm->ground->almostGroundPlane = results.fraction < 0.015625;
        ((void (__fastcall *)(const BgHandler *, playerState_s *))pm->m_bgHandler->BotSetAlmostGroundPlane)(pm->m_bgHandler, pm->ps);
      }
    }
  }
  v3->groundEntityNum = 2047;
  pm->ground->groundPlane = 0;
  pm->ground->walking = 0;
}

/*
==============
PM_GroundTraceNew
==============
*/
void PM_GroundTraceNew(pmove_t *pm, pml_t *pml, bool endFrameUpdate)
{
  bool v3; 
  playerState_s *ps; 
  bool v7; 
  float v8; 
  float v9; 
  float v10; 
  int contentMask; 
  bool v12; 
  double Float_Internal_DebugName; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  int integer; 
  char v18; 
  bool v19; 
  bool v20; 
  __int16 groundEntityNum; 
  playerState_s *v22; 
  bool v23; 
  bool v24; 
  int unwalkableStartTime; 
  int serverTime; 
  float v28; 
  double v29; 
  double v31; 
  double UpContribution; 
  float v33; 
  bool v36; 
  float closestPointsPenetration; 
  const dvar_t *v38; 
  int EntityHitId; 
  const BgTraceMoverInfo *RideMoverEntityInfo; 
  float v41; 
  float v42; 
  float v43; 
  playerState_s *v44; 
  float *v; 
  float fraction; 
  BgGroundState *ground; 
  int surfaceFlags; 
  _BOOL8 v49; 
  bool v50; 
  const BgTraceMoverInfo *v51; 
  unsigned __int16 v52; 
  int v53; 
  _BOOL8 v54; 
  char v56; 
  int v57; 
  vec3_t up; 
  vec3_t end; 
  vec3_t start; 
  vec3_t origin; 
  trace_t trace; 
  trace_t outResults; 

  v3 = endFrameUpdate;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3278, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3278, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_GroundTraceNew");
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x3Bu);
  }
  v56 = 0;
  if ( BG_IsPlayerWalkingDisabled(ps) )
  {
    pm->ps->groundEntityNum = 2047;
    pm->ground->groundPlane = 0;
    pm->ground->almostGroundPlane = 0;
    pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, 0);
    pm->ground->walking = 0;
    v7 = 0;
    goto LABEL_126;
  }
  v8 = pml->platformUp.v[0];
  up.v[0] = v8;
  up.v[1] = pml->platformUp.v[1];
  v9 = up.v[1];
  up.v[2] = pml->platformUp.v[2];
  v10 = up.v[2];
  contentMask = pm->tracemask & 0xFDFFBFFF;
  v57 = contentMask;
  origin = ps->origin;
  end.v[0] = (float)(v8 * COERCE_FLOAT(LODWORD(TRACE_LENGTH) ^ _xmm)) + origin.v[0];
  end.v[1] = (float)(up.v[1] * COERCE_FLOAT(LODWORD(TRACE_LENGTH) ^ _xmm)) + origin.v[1];
  end.v[2] = (float)(up.v[2] * COERCE_FLOAT(LODWORD(TRACE_LENGTH) ^ _xmm)) + origin.v[2];
  memset_0(&trace.position, 0, 0x54ui64);
  trace.fraction = FLOAT_1_0;
  pm->m_flags &= ~2u;
  if ( !BG_UsingNewPlayerCollision() )
  {
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &trace, &origin, &end, pm->bounds, pm->ps->clientNum, contentMask, 0);
    goto LABEL_63;
  }
  PM_GroundTrace_StanceChangeSolver(pm, pml, &up, v3, ps);
  if ( !v3 || (pm->m_flags & 1) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( pml->hadSlideContact && Dvar_GetBool_Internal_DebugName(DVARBOOL_fall_damage_fix_enabled, "fall_damage_fix_enabled") )
      v12 = !PM_GroundTraceNew_FallSpeedSlowed(pm, pml);
  }
  pm->m_flags &= ~1u;
  if ( v12 )
  {
    if ( PM_PlayerCollision_UseShortStickExtension(pm) )
    {
      v14 = TRACE_LENGTH;
    }
    else
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCollisionStickExtention, "playerCollisionStickExtention");
      v14 = TRACE_LENGTH;
      LODWORD(v15) = COERCE_UNSIGNED_INT(*(float *)&Float_Internal_DebugName + TRACE_LENGTH) ^ _xmm;
      end.v[0] = (float)(v8 * v15) + origin.v[0];
      end.v[1] = (float)(v9 * v15) + origin.v[1];
      end.v[2] = (float)(v15 * v10) + origin.v[2];
    }
    PM_GroundTrace_PerformDownTrace(pm, pml, v14, &trace, 1, v3, &up);
    if ( trace.fraction == 1.0 )
    {
      v7 = 0;
      goto LABEL_126;
    }
    goto LABEL_40;
  }
  v16 = DCONST_DVARINT_playerCollisionType;
  if ( !DCONST_DVARINT_playerCollisionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  integer = v16->current.integer;
  if ( !integer )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3367, ASSERT_TYPE_ASSERT, "(type != playerCollisionType_t::LEGACY)", (const char *)&queryFormat, "type != playerCollisionType_t::LEGACY") )
    {
      __debugbreak();
      v18 = 0;
      goto LABEL_36;
    }
    goto LABEL_34;
  }
  if ( (unsigned int)(integer - 2) > 1 )
  {
LABEL_34:
    v18 = 0;
    goto LABEL_36;
  }
  v18 = 1;
LABEL_36:
  v19 = (unsigned int)(integer - 1) <= 1;
  if ( !v18 || (v20 = PM_GroundTrace_PerformDownTrace(pm, pml, TRACE_LENGTH, &trace, 1, v3, &up), v10 = up.v[2], v9 = up.v[1], v8 = up.v[0], !v20) )
  {
    if ( v19 )
    {
      PM_GroundTrace_PerformDownTrace(pm, pml, TRACE_LENGTH, &trace, 0, v3, &up);
LABEL_40:
      v8 = up.v[0];
      v9 = up.v[1];
      v10 = up.v[2];
    }
  }
  groundEntityNum = ps->groundEntityNum;
  v22 = pm->ps;
  if ( pm->cmd.serverTime - v22->jumpState.jumpTime < 500 || (v23 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v22->pm_flags, ACTIVE, 0x13u)) )
    v23 = 1;
  v24 = groundEntityNum != 2047 && !v23;
  _XMM0 = LODWORD(trace.fraction);
  if ( trace.fraction >= 1.0 || !v24 || trace.walkable )
  {
    ps->unwalkableStartTime = 0;
    goto LABEL_63;
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerCharacterCollisionLedgeWalkFix, "playerCharacterCollisionLedgeWalkFix") )
  {
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerCharacterCollisionLedgeWalkFix_UseTime, "playerCharacterCollisionLedgeWalkFix_UseTime") )
    {
      unwalkableStartTime = ps->unwalkableStartTime;
      serverTime = ps->serverTime;
      if ( unwalkableStartTime )
      {
        v28 = (float)(serverTime - unwalkableStartTime);
        v29 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionLedgeWalkFixTime, "playerCharacterCollisionLedgeWalkFixTime");
        if ( (float)(v28 * 0.001) > *(float *)&v29 )
          goto LABEL_63;
      }
      else
      {
        ps->unwalkableStartTime = serverTime;
      }
    }
    else
    {
      *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(pm->bounds);
      __asm { vmaxss  xmm3, xmm0, cs:__real@3e000000 }
      start.v[0] = (float)(v8 * *(float *)&_XMM3) + ps->origin.v[0];
      start.v[1] = (float)(v9 * *(float *)&_XMM3) + ps->origin.v[1];
      start.v[2] = (float)(v10 * *(float *)&_XMM3) + ps->origin.v[2];
      v31 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCollisionStickExtention, "playerCollisionStickExtention");
      up.v[0] = (float)(v8 * COERCE_FLOAT(LODWORD(v31) ^ _xmm)) + ps->origin.v[0];
      up.v[1] = (float)(v9 * COERCE_FLOAT(LODWORD(v31) ^ _xmm)) + ps->origin.v[1];
      up.v[2] = (float)(v10 * COERCE_FLOAT(LODWORD(v31) ^ _xmm)) + ps->origin.v[2];
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &start, &up, &bounds_origin, pm->ps->clientNum, pm->tracemask, 0);
      if ( outResults.fraction == 1.0 )
        goto LABEL_63;
    }
  }
  pm->m_flags |= 2u;
  trace.normal.v[0] = v8;
  trace.normal.v[1] = v9;
  trace.normal.v[2] = v10;
  trace.walkable = 1;
  trace.allsolid = 0;
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix, "playerCharacterCollisionStickyMovementFix") )
  {
    start.v[0] = trace.position.v[0] - ps->origin.v[0];
    start.v[1] = trace.position.v[1] - ps->origin.v[1];
    start.v[2] = trace.position.v[2] - ps->origin.v[2];
    UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &start);
    v33 = *(float *)&UpContribution;
    _XMM6 = LODWORD(MIN_FLOAT_OVER_STEP);
    BG_PlayerCollision_GetCollisionStickLength(pm->bounds);
    __asm { vmaxss  xmm1, xmm6, xmm0 }
    if ( v33 > *(float *)&_XMM1 )
      pm->m_flags = pm->m_flags & 0xFFFFFDFD | 0x200;
  }
LABEL_63:
  v36 = 1;
  closestPointsPenetration = trace.closestPointsPenetration;
  v38 = DVARBOOL_playerCharacterCollisionVehicleWallFix;
  if ( !DVARBOOL_playerCharacterCollisionVehicleWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionVehicleWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( v38->current.enabled )
  {
    closestPointsPenetration = trace.closestPointsPenetration + 0.001;
    v36 = (float)(trace.closestPointsPenetration + 0.001) < pm->bounds->halfSize.v[0];
  }
  EntityHitId = Trace_GetEntityHitId(&trace);
  if ( trace.allsolid && v36 )
  {
    RideMoverEntityInfo = BgPlayerTraceInfo::GetRideMoverEntityInfo(pm->m_playerTraceInfo);
    v41 = closestPointsPenetration * trace.normal.v[0];
    v42 = closestPointsPenetration * trace.normal.v[1];
    v43 = closestPointsPenetration * trace.normal.v[2];
    if ( EntityHitId == 2046 )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCharacterCollisionVehicleHeadWallFix, "playerCharacterCollisionVehicleHeadWallFix") && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
      {
        v44 = pm->ps;
        v = v44->origin.v;
        BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &v44->origin, &v44->origin, pm->bounds, v44->clientNum, v57, v44 != NULL);
        if ( !outResults.startsolid && !outResults.allsolid )
          goto LABEL_84;
        outResults.closestPointsPenetration = outResults.closestPointsPenetration + 0.125;
        start.v[0] = outResults.closestPointsPenetration * outResults.normal.v[0];
        start.v[1] = outResults.closestPointsPenetration * outResults.normal.v[1];
        start.v[2] = outResults.closestPointsPenetration * outResults.normal.v[2];
        up.v[0] = (float)(outResults.closestPointsPenetration * outResults.normal.v[0]) + *v;
        up.v[1] = (float)(outResults.closestPointsPenetration * outResults.normal.v[1]) + v44->origin.v[1];
        up.v[2] = (float)(outResults.closestPointsPenetration * outResults.normal.v[2]) + v44->origin.v[2];
        if ( BGMovingPlatforms::DoesPenetractionExceedBounds(pm->bounds, &start) || (BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &up, &up, pm->bounds, v44->clientNum, v57, v44 != NULL), outResults.allsolid) )
        {
LABEL_84:
          v3 = endFrameUpdate;
        }
        else
        {
          v3 = endFrameUpdate;
          if ( !outResults.startsolid )
            *(vec3_t *)v = up;
        }
      }
      else
      {
        ps->origin.v[0] = v41 + ps->origin.v[0];
        ps->origin.v[1] = v42 + ps->origin.v[1];
        ps->origin.v[2] = v43 + ps->origin.v[2];
      }
    }
    else
    {
      if ( (!RideMoverEntityInfo || EntityHitId != RideMoverEntityInfo->entIndex) && (float)((float)((float)(v9 * trace.normal.v[1]) + (float)(v8 * trace.normal.v[0])) + (float)(v10 * trace.normal.v[2])) <= 0.69999999 )
        goto LABEL_86;
      end.v[0] = v41 + ps->origin.v[0];
      end.v[1] = v42 + ps->origin.v[1];
      end.v[2] = v43 + ps->origin.v[2];
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &end, pm->bounds, EntityHitId, v57, 0);
      fraction = outResults.fraction;
      ps->origin.v[0] = (float)((float)(end.v[0] - ps->origin.v[0]) * outResults.fraction) + ps->origin.v[0];
      ps->origin.v[1] = (float)((float)(end.v[1] - ps->origin.v[1]) * fraction) + ps->origin.v[1];
      ps->origin.v[2] = (float)((float)(end.v[2] - ps->origin.v[2]) * fraction) + ps->origin.v[2];
    }
    origin = ps->origin;
    end.v[0] = (float)(v8 * COERCE_FLOAT(LODWORD(TRACE_LENGTH) ^ _xmm)) + origin.v[0];
    end.v[1] = (float)(v9 * COERCE_FLOAT(LODWORD(TRACE_LENGTH) ^ _xmm)) + origin.v[1];
    end.v[2] = (float)(v10 * COERCE_FLOAT(LODWORD(TRACE_LENGTH) ^ _xmm)) + origin.v[2];
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &trace, &origin, &end, pm->bounds, pm->ps->clientNum, v57, 0);
LABEL_86:
    PM_Debug_TestPlayerCollisionPoint(pm);
  }
  ground = pm->ground;
  surfaceFlags = ground->trace.surfaceFlags;
  ground->trace = trace;
  WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(&pm->refFrame, pm, pml, &trace);
  if ( !trace.allsolid )
  {
    if ( trace.fraction >= 1.0 )
      goto LABEL_114;
    if ( trace.normal.v[0] == 0.0 && trace.normal.v[1] == 0.0 && trace.normal.v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3552, ASSERT_TYPE_ASSERT, "(trace.normal[0] || trace.normal[1] || trace.normal[2])", (const char *)&queryFormat, "trace.normal[0] || trace.normal[1] || trace.normal[2]") )
      __debugbreak();
    v50 = trace.walkable || (float)((float)((float)(v9 * trace.normal.v[1]) + (float)(v8 * trace.normal.v[0])) + (float)(v10 * trace.normal.v[2])) >= 0.69999999;
    if ( trace.fraction >= 1.0 )
    {
LABEL_114:
      PM_GroundTraceMissed(pm, pml);
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
      {
        pm->ground->trace.surfaceFlags = surfaceFlags;
        pm->ground->surfaceType = PM_GroundSurfaceType(pm);
      }
      goto LABEL_116;
    }
    if ( v50 )
    {
      v51 = BgPlayerTraceInfo::GetRideMoverEntityInfo(pm->m_playerTraceInfo);
      v52 = Trace_GetEntityHitId(&trace);
      if ( !v51 || v51->entIndex == v52 )
        goto LABEL_109;
      if ( v51->entIndex == 2046 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3571, ASSERT_TYPE_ASSERT, "(rideMoverInfo->entIndex != ENTITYNUM_WORLD)", (const char *)&queryFormat, "rideMoverInfo->entIndex != ENTITYNUM_WORLD") )
        __debugbreak();
      if ( v51->entIndex == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3572, ASSERT_TYPE_ASSERT, "(rideMoverInfo->entIndex != ENTITYNUM_NONE)", (const char *)&queryFormat, "rideMoverInfo->entIndex != ENTITYNUM_NONE") )
        __debugbreak();
      start.v[0] = (float)(v8 * COERCE_FLOAT(dword_14503AE2C ^ _xmm)) + ps->origin.v[0];
      start.v[1] = (float)(v9 * COERCE_FLOAT(dword_14503AE2C ^ _xmm)) + ps->origin.v[1];
      start.v[2] = (float)(v10 * COERCE_FLOAT(dword_14503AE2C ^ _xmm)) + ps->origin.v[2];
      BgTrace::PerformPlayerToEntityTrace(pm->m_trace, v51->entIndex, pm->bounds, &ps->origin, &start, &outResults);
      if ( outResults.fraction >= 1.0 )
      {
LABEL_109:
        v53 = Trace_GetEntityHitId(&trace);
        if ( trace.hitType != TRACE_HITTYPE_ENTITY || v53 == 2046 )
          v53 = 2047;
        BgPlayerTraceInfo::SetRideMover(pm->m_playerTraceInfo, pm->antiLag, pm->cmd.serverTime, v53, pm->m_bgHandler, pm->ps);
      }
      trace.walkable = 1;
      pm->ground->trace.walkable = 1;
    }
  }
  if ( !trace.walkable )
  {
    PM_GroundTraceDefaultClear(pm, pml);
    pm->ground->groundPlane = 1;
    pm->ground->almostGroundPlane = 1;
    LOBYTE(v54) = 1;
    pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, v54);
    Jump_ClearState(pm);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    {
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0x3Bu);
      v7 = 0;
      goto LABEL_126;
    }
LABEL_116:
    v7 = 0;
    goto LABEL_126;
  }
  pm->ground->groundPlane = 1;
  pm->ground->almostGroundPlane = 1;
  LOBYTE(v49) = 1;
  pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, v49);
  pm->ground->walking = 1;
  if ( ps->groundEntityNum == 2047 )
  {
    v56 = 1;
    PM_GroundTraceNew_CrashLand(pm, pml, v3);
  }
  ps->groundEntityNum = Trace_GetEntityHitId(&trace);
  pm->ground->surfaceType = PM_GroundSurfaceType(pm);
  PM_AddTouchEnt(pm, ps->groundEntityNum, PMTF_TOUCHER_PLAYER);
  v7 = v56;
LABEL_126:
  PM_GroundTraceNew_Finalize(pm, pml, v3, v7);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_GroundTraceNew_ApplyFallDamageFix
==============
*/
void PM_GroundTraceNew_ApplyFallDamageFix(pmove_t *pm, pml_t *pml, bool endFrameUpdate, bool crashLanded)
{
  const dvar_t *v8; 
  float v9; 
  double Float_Internal_DebugName; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3241, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = DVARBOOL_fall_damage_fix_enabled;
  if ( !DVARBOOL_fall_damage_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fall_damage_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && endFrameUpdate && !crashLanded && pml->hadSlideContact && PM_GroundTraceNew_FallSpeedSlowed(pm, pml) )
  {
    v9 = (float)((float)(pml->slideFirstContactNormal.v[1] * pml->platformUp.v[1]) + (float)(pml->slideFirstContactNormal.v[0] * pml->platformUp.v[0])) + (float)(pml->slideFirstContactNormal.v[2] * pml->platformUp.v[2]);
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_fall_damage_fix_min_surface_dot, "fall_damage_fix_min_surface_dot");
    if ( v9 >= *(float *)&Float_Internal_DebugName )
      PM_GroundTraceNew_CrashLand(pm, pml, endFrameUpdate);
  }
}

/*
==============
PM_GroundTraceNew_CrashLand
==============
*/
void PM_GroundTraceNew_CrashLand(pmove_t *pm, pml_t *pml, const bool endFrameUpdate)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3182, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3182, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_CrashLand(pm, pml);
  if ( Jump_IsJumpSlowDownEnabled(ps) )
    Jump_Landed(pm);
  else
    Jump_ClearState(pm);
  ps->leapState.lastLandTime = pm->cmd.serverTime;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Fu) )
    Leap_End(pm);
}

/*
==============
PM_GroundTraceNew_FallSpeedSlowed
==============
*/
bool PM_GroundTraceNew_FallSpeedSlowed(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  float v5; 
  const dvar_t *v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3211, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3211, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = pml->previous_velocity.v[2];
  if ( v5 >= 0.0 )
    return 0;
  v6 = DVARFLT_fall_damage_fix_min_fall_speed;
  if ( !DVARFLT_fall_damage_fix_min_fall_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fall_damage_fix_min_fall_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return v5 <= COERCE_FLOAT(v6->current.integer ^ _xmm) && v5 < ps->velocity.v[2];
}

/*
==============
PM_GroundTraceNew_Finalize
==============
*/
void PM_GroundTraceNew_Finalize(pmove_t *pm, pml_t *pml, bool endFrameUpdate, bool crashLanded)
{
  const dvar_t *v8; 
  float v9; 
  double Float_Internal_DebugName; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3241, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = DVARBOOL_fall_damage_fix_enabled;
  if ( !DVARBOOL_fall_damage_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fall_damage_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && endFrameUpdate && !crashLanded && pml->hadSlideContact && PM_GroundTraceNew_FallSpeedSlowed(pm, pml) )
  {
    v9 = (float)((float)(pml->slideFirstContactNormal.v[1] * pml->platformUp.v[1]) + (float)(pml->platformUp.v[0] * pml->slideFirstContactNormal.v[0])) + (float)(pml->slideFirstContactNormal.v[2] * pml->platformUp.v[2]);
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_fall_damage_fix_min_surface_dot, "fall_damage_fix_min_surface_dot");
    if ( v9 >= *(float *)&Float_Internal_DebugName )
      PM_GroundTraceNew_CrashLand(pm, pml, endFrameUpdate);
  }
}

/*
==============
PM_GroundTraceTest
==============
*/

void __fastcall PM_GroundTraceTest(pmove_t *pm, trace_t *trace, const vec3_t *start, const vec3_t *end, const vec3_t *base, int resolvePlatformUp)
{
  BGMovingPlatforms::GroundTrace(pm, trace, start, end, base, resolvePlatformUp);
}

/*
==============
PM_GroundTrace_FinalizePoint
==============
*/
char PM_GroundTrace_FinalizePoint(pmove_t *pm, pml_t *pml, trace_t *trace, const vec3_t *testPoint, const vec3_t *up)
{
  playerState_s *ps; 
  float v9; 
  float v10; 
  float v11; 
  const dvar_t *v13; 
  vec3_t *p_origin; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  __m256i v20; 
  __int128 v21; 
  const char *debugHitName; 
  trace_t outResults; 

  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, testPoint, testPoint, pm->bounds, pm->ps->clientNum, pm->tracemask, 0);
  ps = pm->ps;
  v9 = ps->origin.v[0];
  v10 = ps->origin.v[1];
  v11 = ps->origin.v[2];
  ps->origin = *testPoint;
  if ( *(_WORD *)&outResults.allsolid )
  {
    v13 = DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFix;
    if ( !DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionHeadPenetrationFix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      p_origin = &pm->ps->origin;
      p_origin->v[0] = v9;
      p_origin->v[1] = v10;
      p_origin->v[2] = v11;
      v15 = DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix;
      if ( !DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUnresolvedCollisionFix") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) && BGMovingPlatforms::IsMovingPlatform(outResults.hitId) )
        BGMovingPlatformPS::SetMoverEntityID(&pm->ps->movingPlatforms, pm->ps, pm->m_bgHandler, pm->ps->movingPlatforms.m_movingPlatformEntity, outResults.hitId, 0, 0);
      v16 = DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFallFix;
      if ( !DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionHeadPenetrationFallFix") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.enabled )
      {
        v17 = up->v[1];
        v18 = up->v[0];
        v19 = up->v[2];
        if ( (float)((float)((float)(up->v[0] * outResults.normal.v[0]) + (float)(v17 * outResults.normal.v[1])) + (float)(v19 * outResults.normal.v[2])) < 0.1 && (float)((float)((float)(v17 * (float)(pm->ps->origin.v[1] - outResults.position.v[1])) + (float)(v18 * (float)(pm->ps->origin.v[0] - outResults.position.v[0]))) + (float)((float)(pm->ps->origin.v[2] - outResults.position.v[2]) * v19)) < 0.0 )
        {
          trace->normal.v[0] = COERCE_FLOAT(LODWORD(v18) ^ _xmm);
          trace->normal.v[1] = COERCE_FLOAT(LODWORD(up->v[1]) ^ _xmm);
          trace->normal.v[2] = COERCE_FLOAT(LODWORD(up->v[2]) ^ _xmm);
          trace->fraction = 1.0;
          trace->walkable = 0;
        }
      }
    }
    else
    {
      v20 = *(__m256i *)&outResults.contents;
      *(__m256i *)&trace->fraction = *(__m256i *)&outResults.fraction;
      v21 = *(_OWORD *)&outResults.allsolid;
      *(__m256i *)&trace->contents = v20;
      debugHitName = outResults.debugHitName;
      *(_OWORD *)&trace->allsolid = v21;
      trace->debugHitName = debugHitName;
    }
    PM_Debug_TestPlayerCollisionPoint(pm);
    return 0;
  }
  else
  {
    PM_Debug_TestPlayerCollisionPoint(pm);
    return 1;
  }
}

/*
==============
PM_GroundTrace_PerformDownTrace
==============
*/
char PM_GroundTrace_PerformDownTrace(pmove_t *pm, pml_t *pml, float castLength, trace_t *trace, bool useRayCast, bool endFrameUpdate, const vec3_t *up)
{
  playerState_s *ps; 
  double CollisionStickLength; 
  const dvar_t *v12; 
  float v13; 
  float value; 
  const dvar_t *v15; 
  __int128 v17; 
  float v18; 
  __int128 v19; 
  const dvar_t *v21; 
  Bounds *v22; 
  __int128 v23; 
  float v26; 
  float v27; 
  float v28; 
  int contentMask; 
  playerState_s *v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  BgTrace *m_trace; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float fraction; 
  const dvar_t *v48; 
  __int128 v49; 
  const dvar_t *v53; 
  const dvar_t *v54; 
  const dvar_t *v55; 
  int v56; 
  bool v57; 
  const dvar_t *v58; 
  float v59; 
  float v60; 
  float v61; 
  double UpContribution; 
  bool v63; 
  float v64; 
  bool v65; 
  const entityState_t *EntityState; 
  double Float_Internal_DebugName; 
  double v68; 
  vec3_t testPoint; 
  vec3_t start; 
  vec3_t end; 
  Bounds bounds; 

  ps = pm->ps;
  PM_Debug_TestPlayerCollisionPoint(pm);
  CollisionStickLength = BG_PlayerCollision_GetCollisionStickLength(pm->bounds);
  v12 = DCONST_DVARFLT_playerCollisionStickExtention;
  v13 = *(float *)&CollisionStickLength;
  if ( !DCONST_DVARFLT_playerCollisionStickExtention && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionStickExtention") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  value = v12->current.value;
  if ( PM_PlayerCollision_UseShortStickExtension(pm) )
  {
    v15 = DCONST_DVARBOOL_playerCharacterCollisionExtendExtension;
    if ( !DCONST_DVARBOOL_playerCharacterCollisionExtendExtension && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionExtendExtension") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      LODWORD(_XMM0) = 0;
      if ( pm->cmd.serverTime - pm->ps->jumpState.jumpTime >= 500 )
      {
        v17 = LODWORD(ps->velocity.v[2]);
        if ( *(float *)&v17 < 0.0 )
        {
          v18 = (float)ps->gravity * pml->frametime;
          v19 = v17 & _xmm;
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_shortStickExtensionLength, "shortStickExtensionLength");
          *(float *)&v19 = (float)(COERCE_FLOAT(v17 & _xmm) + v18) * pml->frametime;
          _XMM1 = v19;
          __asm { vminss  xmm0, xmm1, xmm0 }
        }
      }
      value = *(float *)&_XMM0 + 0.25;
    }
    else
    {
      value = FLOAT_0_125;
    }
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2526, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsPlayerInExecution(ps) && !ps->activeExecutionIsVictim )
  {
    v21 = DVARFLT_execution_ground_trace_length_increase;
    if ( !DVARFLT_execution_ground_trace_length_increase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_ground_trace_length_increase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    value = value + v21->current.value;
  }
  v22 = pm->bounds;
  bounds = *v22;
  if ( useRayCast )
  {
    bounds = bounds_origin;
  }
  else
  {
    v23 = LODWORD(bounds.halfSize.v[2]);
    *(float *)&v23 = (float)((float)(bounds.halfSize.v[2] - v22->halfSize.v[0]) * 2.0) - v13;
    _XMM3 = v23;
    v13 = v13 + v22->halfSize.v[0];
    __asm { vmaxss  xmm0, xmm3, xmm9 }
    bounds.halfSize.v[2] = *(float *)&_XMM0 * 0.5;
    bounds.midPoint.v[2] = *(float *)&_XMM0 * 0.5;
  }
  LODWORD(v26) = LODWORD(value) ^ _xmm;
  start.v[0] = 0.0;
  start.v[1] = 0.0;
  start.v[2] = 0.0;
  end.v[0] = 0.0;
  end.v[1] = 0.0;
  end.v[2] = 0.0;
  if ( useRayCast )
  {
    v27 = 2.0 * v22->halfSize.v[2];
    v28 = v27 * up->v[1];
    contentMask = pm->tracemask;
    v30 = pm->ps;
    start.v[0] = (float)(v27 * up->v[0]) + ps->origin.v[0];
    v31 = v28 + ps->origin.v[1];
    v32 = v27 * up->v[2];
    v33 = v26 * up->v[1];
    start.v[1] = v31;
    v34 = v32 + ps->origin.v[2];
    v35 = v26 * up->v[0];
    start.v[2] = v34;
    end.v[0] = v35 + ps->origin.v[0];
    v36 = v33 + ps->origin.v[1];
    v37 = v26 * up->v[2];
    end.v[1] = v36;
    end.v[2] = v37 + ps->origin.v[2];
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, trace, &start, &end, &bounds, v30->clientNum, contentMask, 0);
  }
  else
  {
    v38 = v13 * up->v[1];
    v39 = v26 * up->v[1];
    m_trace = pm->m_trace;
    start.v[0] = (float)(v13 * up->v[0]) + ps->origin.v[0];
    v41 = v38 + ps->origin.v[1];
    v42 = v13 * up->v[2];
    start.v[1] = v41;
    v43 = v42 + ps->origin.v[2];
    v44 = v26 * up->v[0];
    start.v[2] = v43;
    end.v[0] = v44 + ps->origin.v[0];
    v45 = v39 + ps->origin.v[1];
    v46 = v26 * up->v[2];
    end.v[1] = v45;
    end.v[2] = v46 + ps->origin.v[2];
    if ( (m_trace->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 432, ASSERT_TYPE_ASSERT, "(!pm->m_trace->HasFlag( TRACE_FLAG_FORCE_CYLINDER ))", (const char *)&queryFormat, "!pm->m_trace->HasFlag( TRACE_FLAG_FORCE_CYLINDER )") )
      __debugbreak();
    pm->m_trace->m_flags |= 0x40u;
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, trace, &start, &end, &bounds, pm->ps->clientNum, pm->tracemask, 0);
    pm->m_trace->m_flags &= ~0x40u;
  }
  fraction = trace->fraction;
  v48 = DCONST_DVARBOOL_playerCharacterCollisionProneStuckFix;
  testPoint.v[0] = (float)((float)(end.v[0] - start.v[0]) * trace->fraction) + start.v[0];
  testPoint.v[1] = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
  testPoint.v[2] = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
  if ( !DCONST_DVARBOOL_playerCharacterCollisionProneStuckFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionProneStuckFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  if ( v48->current.enabled )
  {
    v49 = LODWORD(start.v[1]);
    *(float *)&v49 = fsqrt((float)((float)((float)(start.v[1] - end.v[1]) * (float)(start.v[1] - end.v[1])) + (float)((float)(start.v[0] - end.v[0]) * (float)(start.v[0] - end.v[0]))) + (float)((float)(start.v[2] - end.v[2]) * (float)(start.v[2] - end.v[2])));
    _XMM1 = v49;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
    testPoint.v[0] = (float)((float)((float)(start.v[0] - end.v[0]) * (float)(1.0 / *(float *)&_XMM0)) * 0.125) + testPoint.v[0];
    testPoint.v[1] = (float)((float)((float)(start.v[1] - end.v[1]) * (float)(1.0 / *(float *)&_XMM0)) * 0.125) + testPoint.v[1];
    testPoint.v[2] = (float)((float)((float)(start.v[2] - end.v[2]) * (float)(1.0 / *(float *)&_XMM0)) * 0.125) + testPoint.v[2];
  }
  if ( useRayCast )
  {
    v53 = DCONST_DVARBOOL_playerCollisionDebug;
    if ( !DCONST_DVARBOOL_playerCollisionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    if ( v53->current.enabled )
      pm->m_bgHandler->DebugLine((BgHandler *)pm->m_bgHandler, &start, &testPoint, &colorRed, 1, 0);
  }
  else
  {
    v54 = DCONST_DVARBOOL_playerCollisionDebug;
    if ( !DCONST_DVARBOOL_playerCollisionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    if ( v54->current.enabled )
      ((void (__fastcall *)(const BgHandler *, vec3_t *, Bounds *))pm->m_bgHandler->DebugBox)(pm->m_bgHandler, &start, &bounds);
    v55 = DCONST_DVARBOOL_playerCollisionDebug;
    if ( !DCONST_DVARBOOL_playerCollisionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    if ( v55->current.enabled )
      ((void (__fastcall *)(const BgHandler *, vec3_t *, Bounds *))pm->m_bgHandler->DebugBox)(pm->m_bgHandler, &testPoint, &bounds);
  }
  if ( trace->fraction < 1.0 && !endFrameUpdate )
  {
    v56 = pm->cmd.serverTime - pm->ps->jumpState.jumpTime;
    v57 = trace->walkable || ps->groundEntityNum == 2047 && v56 >= 500;
    v58 = DVARBOOL_playerCharacterCollisionWallClimbFix;
    if ( !DVARBOOL_playerCharacterCollisionWallClimbFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionWallClimbFix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    if ( v58->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    {
      if ( trace->walkable && v56 >= 500 )
        goto LABEL_69;
    }
    else if ( v57 )
    {
LABEL_69:
      v59 = testPoint.v[2] - ps->origin.v[2];
      v61 = (float)((float)((float)(ps->origin.v[1] - testPoint.v[1]) * (float)(ps->origin.v[1] - testPoint.v[1])) + (float)((float)(ps->origin.v[0] - testPoint.v[0]) * (float)(ps->origin.v[0] - testPoint.v[0]))) + (float)((float)(ps->origin.v[2] - testPoint.v[2]) * (float)(ps->origin.v[2] - testPoint.v[2]));
      v60 = v61;
      v63 = 0;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
      {
        UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->velocity);
        if ( *(float *)&UpContribution > 0.0 )
          v63 = 1;
      }
      if ( v61 <= 0.015625 )
      {
        if ( !v63 )
        {
          PM_Debug_TestPlayerCollisionPoint(pm);
          pm->ps->origin = testPoint;
          PM_Debug_TestPlayerCollisionPoint(pm);
        }
      }
      else
      {
        v64 = (float)((float)((float)(testPoint.v[1] - ps->origin.v[1]) * up->v[1]) + (float)((float)(testPoint.v[0] - ps->origin.v[0]) * up->v[0])) + (float)((float)(testPoint.v[2] - ps->origin.v[2]) * up->v[2]);
        v65 = 0;
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_vehicleMoverBlockCharacterPickup, "vehicleMoverBlockCharacterPickup") )
        {
          if ( BGMovingPlatforms::IsMovingPlatform(trace->hitId) )
          {
            EntityState = BG_GetEntityState(pm->m_bgHandler, trace->hitId);
            if ( BG_IsVehicleEntity(EntityState) )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_vehicleMoverBlockPickupHeight, "vehicleMoverBlockPickupHeight");
              v65 = v64 > *(float *)&Float_Internal_DebugName;
            }
          }
        }
        v68 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCollisionMaxStepHeight, "playerCollisionMaxStepHeight");
        if ( v64 > *(float *)&v68 || v65 )
        {
          trace->walkable = 0;
          return 1;
        }
        if ( !v63 )
          PM_GroundTrace_FinalizePoint(pm, pml, trace, &testPoint, up);
      }
      if ( v60 > MIN_SMOOTH_STEP_HEIGHT_SQ )
      {
        pm->m_flags |= 0x100u;
        pm->m_stepHeight = v59;
      }
    }
    PM_Debug_TestPlayerCollisionPoint(pm);
    return 1;
  }
  PM_Debug_TestPlayerCollisionPoint(pm);
  return 0;
}

/*
==============
PM_GroundTrace_StanceChangeSolver
==============
*/
void PM_GroundTrace_StanceChangeSolver(const pmove_t *pm, const pml_t *pml, const vec3_t *up, bool endFrameUpdate, playerState_s *ps)
{
  const dvar_t *v9; 
  vec3_t *p_origin; 
  int contentMask; 
  __int128 closestPointsPenetration_low; 
  playerState_s *v13; 
  int passEntityNum; 
  float v15; 
  const Bounds *Bounds; 
  int tracemask; 
  playerState_s *v18; 
  __int128 v20; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t end; 
  trace_t outResults; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3079, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3080, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3081, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = DCONST_DVARBOOL_playerCharacterCollisionCrouchStuckFix;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionCrouchStuckFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionCrouchStuckFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && !endFrameUpdate && !pm->isExtrapolation && pml->prevEffectiveStance != PM_GetEffectiveStance(ps) )
  {
    p_origin = &ps->origin;
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &ps->origin, pm->bounds, pm->ps->clientNum, pm->tracemask, 0);
    if ( *(_WORD *)&outResults.allsolid )
    {
      contentMask = pm->tracemask;
      closestPointsPenetration_low = LODWORD(outResults.closestPointsPenetration);
      v13 = pm->ps;
      passEntityNum = outResults.hitId;
      end.v[0] = (float)((float)(outResults.closestPointsPenetration + 0.125) * outResults.normal.v[0]) + p_origin->v[0];
      end.v[1] = (float)((float)(outResults.closestPointsPenetration + 0.125) * outResults.normal.v[1]) + ps->origin.v[1];
      end.v[2] = (float)((float)(outResults.closestPointsPenetration + 0.125) * outResults.normal.v[2]) + ps->origin.v[2];
      outResults.closestPointsPenetration = outResults.closestPointsPenetration + 0.125;
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &end, &end, pm->bounds, v13->clientNum, contentMask, 1);
      if ( !*(_WORD *)&outResults.allsolid )
        goto LABEL_29;
      *(double *)&closestPointsPenetration_low = BG_PlayerCollision_GetCollisionStickLength(pm->bounds);
      v15 = *(float *)&closestPointsPenetration_low;
      Bounds = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
      *(double *)&closestPointsPenetration_low = BG_PlayerCollision_GetCollisionStickLength(Bounds);
      tracemask = pm->tracemask;
      v18 = pm->ps;
      v20 = closestPointsPenetration_low;
      *(float *)&v20 = *(float *)&closestPointsPenetration_low - v15;
      _XMM2 = v20;
      __asm { vmaxss  xmm3, xmm2, xmm1 }
      v22 = *(float *)&_XMM3 * up->v[1];
      end.v[0] = (float)(*(float *)&_XMM3 * up->v[0]) + p_origin->v[0];
      *(float *)&v20 = *(float *)&_XMM3 * up->v[2];
      end.v[1] = v22 + ps->origin.v[1];
      end.v[2] = *(float *)&v20 + ps->origin.v[2];
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &end, &end, pm->bounds, v18->clientNum, tracemask, 1);
      if ( !*(_WORD *)&outResults.allsolid )
      {
LABEL_29:
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCharacterCollisionMoverStanceFix, "playerCharacterCollisionMoverStanceFix") && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) && BGMovingPlatforms::IsMovingPlatform(passEntityNum) )
        {
          BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &end, pm->bounds, passEntityNum, pm->tracemask & 0xFDFFBFFF, 0);
          v23 = (float)((float)(end.v[0] - p_origin->v[0]) * outResults.fraction) + p_origin->v[0];
          v24 = (float)((float)(end.v[1] - ps->origin.v[1]) * outResults.fraction) + ps->origin.v[1];
          v25 = (float)((float)(end.v[2] - ps->origin.v[2]) * outResults.fraction) + ps->origin.v[2];
        }
        else
        {
          v25 = end.v[2];
          v24 = end.v[1];
          v23 = end.v[0];
        }
        p_origin->v[0] = v23;
        ps->origin.v[1] = v24;
        ps->origin.v[2] = v25;
      }
    }
  }
  PM_Debug_TestPlayerCollisionPoint(pm);
}

/*
==============
PM_IsUsingNoCollMovement
==============
*/
bool PM_IsUsingNoCollMovement(const pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 556, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 556, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u);
}

/*
==============
PM_JitterPoint
==============
*/
__int64 PM_JitterPoint(pmove_t *pm, pml_t *pml, trace_t *trace, float jitterScale, const vec3_t *correctDeltas, const unsigned int deltasCount)
{
  playerState_s *ps; 
  playerState_s *v11; 
  unsigned int v12; 
  unsigned int v13; 
  float *v14; 
  float fraction; 
  __int64 passEntityNum; 
  vec3_t start; 
  vec3_t v18; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 593, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 593, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsPlayerLinked(ps) )
    return 0i64;
  v11 = pm->ps;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 556, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = 1;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v11->pm_flags, ACTIVE, 5u) || pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
    return 0i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_JitterPoint");
  v13 = 0;
  if ( deltasCount )
  {
    v14 = &correctDeltas->v[2];
    while ( 1 )
    {
      start.v[0] = (float)(jitterScale * *(v14 - 2)) + ps->origin.v[0];
      start.v[1] = (float)(jitterScale * *(v14 - 1)) + ps->origin.v[1];
      start.v[2] = (float)(jitterScale * *v14) + ps->origin.v[2];
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, trace, &start, &start, pm->bounds, ps->clientNum, pm->tracemask, 1);
      if ( !trace->startsolid )
      {
        v18 = start;
        WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, -1.25, &start);
        BgTrace::LegacyPlayerTrace(pm->m_trace, pm, trace, &v18, &start, pm->bounds, ps->clientNum, pm->tracemask, 1);
        if ( !trace->startsolid )
          break;
      }
      ++v13;
      v14 += 3;
      if ( v13 >= deltasCount )
        goto LABEL_19;
    }
    PM_UpdateGround(pm, pml, trace);
    fraction = trace->fraction;
    ps->origin.v[0] = (float)((float)(start.v[0] - v18.v[0]) * trace->fraction) + v18.v[0];
    ps->origin.v[1] = (float)((float)(start.v[1] - v18.v[1]) * fraction) + v18.v[1];
    ps->origin.v[2] = (float)((float)(start.v[2] - v18.v[2]) * fraction) + v18.v[2];
  }
  else
  {
LABEL_19:
    LODWORD(passEntityNum) = trace->hitId;
    Com_PrintWarning(17, "PM_JitterPoint: Player/agent stuck in geo, this will be slow. Client number %d (%.0f,%.0f,%.0f). Entity geo number %d\n", (unsigned int)ps->clientNum, ps->origin.v[0], ps->origin.v[1], ps->origin.v[2], passEntityNum);
    v12 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v12;
}

/*
==============
PM_LastStandCollision_DebugCapsule
==============
*/
void PM_LastStandCollision_DebugCapsule(pmove_t *pm, const vec3_t *origin, const Bounds *bounds, const vec4_t *color)
{
  __int128 v4; 
  const dvar_t *v5; 
  float v9; 
  double CollisionStickLength; 
  float v11; 
  float v12; 
  int v13[4]; 
  int v14[4]; 
  __int128 v15; 

  v5 = DCONST_DVARBOOL_playerLastStandDebug;
  if ( !DCONST_DVARBOOL_playerLastStandDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerLastStandDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v15 = v4;
    v9 = bounds->halfSize.v[0];
    CollisionStickLength = BG_PlayerCollision_GetCollisionStickLength(bounds);
    v11 = origin->v[1];
    v12 = origin->v[0];
    *(float *)&v14[2] = (float)(*(float *)&CollisionStickLength + v9) + origin->v[2];
    *(float *)&CollisionStickLength = bounds->halfSize.v[2];
    *(float *)&v14[1] = v11;
    *(float *)&v13[1] = v11;
    *(float *)v14 = v12;
    *(float *)v13 = v12;
    *(float *)&v13[2] = (float)((float)(*(float *)&CollisionStickLength * 2.0) - v9) + origin->v[2];
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2191, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ((void (__fastcall *)(const BgHandler *, int *, int *))pm->m_bgHandler->DebugCapsule)(pm->m_bgHandler, v14, v13);
  }
}

/*
==============
PM_LastStandCollision_Resolve
==============
*/
void PM_LastStandCollision_Resolve(pmove_t *pm, pml_t *pml, vec3_t *outAppliedInstantaneousVelocity)
{
  const dvar_t *v5; 
  __int128 v6; 
  playerState_s *v7; 
  const dvar_t *v8; 
  bool Bool_Internal_DebugName; 
  bool v10; 
  float v11; 
  __int128 v12; 
  float v13; 
  int v14; 
  __int128 v15; 
  float v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  double v21; 
  float v23; 
  __int128 v25; 
  float v26; 
  float v27; 
  float v28; 
  BgGroundState *ground; 
  __int128 v30; 
  float v31; 
  __int128 v32; 
  float v33; 
  float v34; 
  double v36; 
  float v39; 
  int Int_Internal_DebugName; 
  int v41; 
  double Float_Internal_DebugName; 
  float v43; 
  double v44; 
  int v45; 
  BgGroundState *v46; 
  bool v47; 
  int v48; 
  float frametime; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  EffectiveStance EffectiveStanceForWorldModelAnimation; 
  double BoundsHeight; 
  double CollisionStickLength; 
  float v57; 
  double v58; 
  float v59; 
  char v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  __int128 v66; 
  float v67; 
  float v68; 
  int v69; 
  int v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  int v76; 
  bool v77; 
  __int128 v78; 
  __int128 closestPointsPenetration_low; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  float v83; 
  __int128 v84; 
  __int128 v85; 
  float v86; 
  __int128 v87; 
  float v88; 
  float v89; 
  float v90; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  __int128 v103; 
  vec4_t *v104; 
  float v105; 
  float v106; 
  float v107; 
  double v108; 
  float v109; 
  double v113; 
  __int128 v114; 
  __int128 v118; 
  float v122; 
  double v123; 
  double v124; 
  double v125; 
  float fTorsoPitch; 
  float fWaistPitch; 
  __int64 contentMask; 
  playerState_s *ps; 
  playerState_s *psa; 
  float v134; 
  float v135; 
  bool v136; 
  char v137; 
  float v138; 
  float v139; 
  bool v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  int v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  Physics_WorldId worldId; 
  int v154; 
  float v155; 
  float v156; 
  float v157; 
  int v158; 
  float v159; 
  float v160; 
  float v161; 
  float v162; 
  float v163; 
  int v164; 
  float v165; 
  vec3_t outUp; 
  vec3_t v169; 
  vec3_t end; 
  vec3_t start; 
  vec3_t origin; 
  vec3_t v173; 
  Bounds bounds; 
  vec3_t v175; 
  vec3_t vec; 
  vec3_t v177; 
  vec2_t v178; 
  float v179; 
  Bounds v180; 
  trace_t results; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_LastStandCollision_Resolve");
  v5 = DVARBOOL_killswitch_last_stand_rewrite_enabled;
  if ( !DVARBOOL_killswitch_last_stand_rewrite_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_last_stand_rewrite_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v6 = 0i64;
    if ( pml->frametime > 0.0 )
    {
      if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2227, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
        __debugbreak();
      v7 = pm->ps;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2227, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( BG_PlayerSecondaryCollision_IsValidState_LastStand(v7) )
      {
        if ( BG_PlayerSecondaryCollision_IsValidState_ButtCollision(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2234, ASSERT_TYPE_ASSERT, "(!BG_PlayerSecondaryCollision_IsValidState_ButtCollision( ps ))", (const char *)&queryFormat, "!BG_PlayerSecondaryCollision_IsValidState_ButtCollision( ps )") )
          __debugbreak();
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&v7->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u);
        v8 = DVARBOOL_killswitch_last_stand_rewrite_enabled;
        if ( !DVARBOOL_killswitch_last_stand_rewrite_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_last_stand_rewrite_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.enabled )
        {
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_last_stand_forward_slope_adjust_enabled, "killswitch_last_stand_forward_slope_adjust_enabled");
          v140 = Bool_Internal_DebugName;
          v10 = (pm->cmd.buttons & 0x800000000i64) != 0;
          worldId = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
          WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
          v11 = pml->forward.v[0];
          v159 = pml->forward.v[0];
          v155 = pml->forward.v[1];
          v12 = LODWORD(v155);
          v156 = pml->forward.v[2];
          v13 = v156;
          v15 = LODWORD(v155);
          *(float *)&v15 = (float)((float)(v155 * outUp.v[1]) + (float)(outUp.v[0] * pml->forward.v[0])) + (float)(v156 * outUp.v[2]);
          v14 = v15;
          if ( *(float *)&v15 <= 0.001 )
          {
            v23 = FLOAT_1_0;
          }
          else
          {
            v16 = (float)(COERCE_FLOAT(v15 ^ _xmm) * outUp.v[0]) + v11;
            v17 = v15 ^ _xmm;
            *(float *)&v17 = (float)(COERCE_FLOAT(v14 ^ _xmm) * outUp.v[1]) + v155;
            v18 = v17;
            v19 = (float)(COERCE_FLOAT(v14 ^ _xmm) * outUp.v[2]) + v156;
            *(float *)&v17 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(v16 * v16)) + (float)(v19 * v19));
            _XMM6 = v17;
            v21 = *(float *)&v17;
            if ( v21 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2257, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( Vec3Length( forward ) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "Vec3Length( forward )", DOUBLE_9_999999974752427eN7, v21) )
              __debugbreak();
            __asm { vcmpless xmm0, xmm6, cs:__real@80000000 }
            v23 = FLOAT_1_0;
            __asm { vblendvps xmm1, xmm6, xmm13, xmm0 }
            v11 = v16 * (float)(1.0 / *(float *)&_XMM1);
            v159 = v11;
            v25 = v18;
            *(float *)&v25 = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM1);
            v12 = v25;
            v155 = *(float *)&v25;
            v13 = v19 * (float)(1.0 / *(float *)&_XMM1);
            v156 = v13;
          }
          v26 = v11;
          v142 = v11;
          v27 = *(float *)&v12;
          v143 = *(float *)&v12;
          v28 = v13;
          v144 = v13;
          if ( Bool_Internal_DebugName && v10 )
          {
            ground = pm->ground;
            if ( ground )
            {
              if ( ground->groundPlane )
              {
                v30 = v12;
                *(float *)&v30 = (float)((float)(*(float *)&v12 * ground->trace.normal.v[1]) + (float)(v11 * ground->trace.normal.v[0])) + (float)(v13 * ground->trace.normal.v[2]);
                v31 = (float)(COERCE_FLOAT(v30 ^ _xmm) * ground->trace.normal.v[0]) + v11;
                v32 = v30 ^ _xmm;
                v33 = (float)(*(float *)&v32 * ground->trace.normal.v[1]) + *(float *)&v12;
                v34 = (float)(*(float *)&v32 * ground->trace.normal.v[2]) + v13;
                *(float *)&v32 = fsqrt((float)((float)(v33 * v33) + (float)(v31 * v31)) + (float)(v34 * v34));
                _XMM6 = v32;
                v36 = *(float *)&v32;
                if ( v36 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2269, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( Vec3Length( resolveForwardCandidate ) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "Vec3Length( resolveForwardCandidate )", DOUBLE_9_999999974752427eN7, v36) )
                  __debugbreak();
                __asm
                {
                  vcmpless xmm0, xmm6, cs:__real@80000000
                  vblendvps xmm1, xmm6, xmm13, xmm0
                }
                v39 = v23 / *(float *)&_XMM1;
                if ( (float)((float)((float)((float)(v39 * v33) * outUp.v[1]) + (float)((float)((float)(v23 / *(float *)&_XMM1) * v31) * outUp.v[0])) + (float)((float)(v39 * v34) * outUp.v[2])) > 0.000001 )
                {
                  v26 = (float)(v23 / *(float *)&_XMM1) * v31;
                  v142 = v26;
                  v27 = (float)(v23 / *(float *)&_XMM1) * v33;
                  v143 = v27;
                  v28 = v39 * v34;
                  v144 = v39 * v34;
                }
              }
            }
          }
          v157 = (float)((float)(v26 * outUp.v[0]) + (float)(v27 * outUp.v[1])) + (float)(v28 * outUp.v[2]);
          BG_Suit_GetBoundsRadius(v7);
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playerLastStandCollisionTestSteps, "playerLastStandCollisionTestSteps");
          v164 = Int_Internal_DebugName;
          v41 = Dvar_GetInt_Internal_DebugName(DVARINT_playerLastStandCollisionTestMaxIterations, "playerLastStandCollisionTestMaxIterations");
          v158 = v41;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_playerLastStandCollisionTestIntervalRatio, "playerLastStandCollisionTestIntervalRatio");
          v43 = *(float *)&Float_Internal_DebugName * v157;
          v139 = *(float *)&Float_Internal_DebugName * v157;
          v44 = Dvar_GetFloat_Internal_DebugName(DVARFLT_playerLastStandDownTraceDistance, "playerLastStandDownTraceDistance");
          v45 = LODWORD(v44);
          v46 = pm->ground;
          v47 = v46 && BG_IsInAir(v7, v46->almostGroundPlane);
          v136 = v47;
          if ( Int_Internal_DebugName > v41 )
          {
            LODWORD(ps) = v41;
            LODWORD(contentMask) = Int_Internal_DebugName;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2287, ASSERT_TYPE_ASSERT, "( maxSteps ) <= ( maxIterations )", "%s <= %s\n\t%i, %i", "maxSteps", "maxIterations", contentMask, ps) )
              __debugbreak();
          }
          v48 = pm->tracemask & 0xFDFFBFFF;
          v147 = v48;
          frametime = pml->frametime;
          v51 = (float)(frametime * v7->velocity.v[0]) + v7->origin.v[0];
          v50 = v51;
          origin.v[0] = v51;
          v52 = (float)(frametime * v7->velocity.v[1]) + v7->origin.v[1];
          v146 = v52;
          origin.v[1] = v52;
          v53 = (float)(frametime * v7->velocity.v[2]) + v7->origin.v[2];
          v145 = v53;
          origin.v[2] = v53;
          EffectiveStanceForWorldModelAnimation = PM_GetEffectiveStanceForWorldModelAnimation(v7);
          BoundsHeight = BG_Suit_GetBoundsHeight(v7, EffectiveStanceForWorldModelAnimation);
          bounds.midPoint.v[0] = 0.0;
          bounds.midPoint.v[1] = 0.0;
          bounds.midPoint.v[2] = *(float *)&BoundsHeight * 0.5;
          bounds.halfSize.v[0] = v157;
          bounds.halfSize.v[1] = v157;
          bounds.halfSize.v[2] = *(float *)&BoundsHeight * 0.5;
          PM_LastStandCollision_DebugCapsule(pm, &origin, &bounds, &colorBlue);
          CollisionStickLength = BG_PlayerCollision_GetCollisionStickLength(&bounds);
          v57 = *(float *)&CollisionStickLength;
          v165 = *(float *)&CollisionStickLength;
          v58 = Dvar_GetFloat_Internal_DebugName(DVARFLT_playerLastStandContourShapecastRadius, "playerLastStandContourShapecastRadius");
          v180.midPoint.v[0] = 0.0;
          v180.midPoint.v[1] = 0.0;
          v180.midPoint.v[2] = 0.0;
          v180.halfSize.v[0] = *(float *)&v58;
          v180.halfSize.v[1] = *(float *)&v58;
          v180.halfSize.v[2] = *(float *)&v58;
          v59 = FLOAT_3_4028235e38;
          _XMM8 = LODWORD(FLOAT_3_4028235e38);
          v151 = FLOAT_3_4028235e38;
          v152 = FLOAT_3_4028235e38;
          v61 = 0;
          v62 = (float)(*(float *)&v58 + v57) + 0.125;
          v162 = v62;
          start.v[0] = (float)(v62 * outUp.v[0]) + v7->origin.v[0];
          start.v[1] = (float)(v62 * outUp.v[1]) + v7->origin.v[1];
          start.v[2] = (float)(v62 * outUp.v[2]) + v7->origin.v[2];
          LODWORD(v163) = v45 ^ _xmm;
          end.v[0] = (float)(COERCE_FLOAT(v45 ^ _xmm) * outUp.v[0]) + start.v[0];
          end.v[1] = (float)(COERCE_FLOAT(v45 ^ _xmm) * outUp.v[1]) + start.v[1];
          end.v[2] = (float)(COERCE_FLOAT(v45 ^ _xmm) * outUp.v[2]) + start.v[2];
          BgTrace::LegacyTraceHandler(pm->m_trace, worldId, &results, &start, &end, &v180, v7->clientNum, v48, v7);
          if ( v47 || results.fraction >= v23 || results.startsolid || results.allsolid )
          {
            v137 = 0;
            start = v7->origin;
          }
          else
          {
            v137 = 1;
            start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
            start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
            start.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
          }
          v63 = 0.0;
          v148 = 0.0;
          v64 = 0.0;
          v149 = 0.0;
          v65 = 0.0;
          v150 = 0.0;
          v66 = 0i64;
          v138 = 0.0;
          v67 = 0.0;
          v134 = 0.0;
          v68 = 0.0;
          v135 = 0.0;
          v69 = 0;
          v154 = 0;
          v70 = 0;
          v169.v[0] = (float)(v43 * v142) + v51;
          v169.v[1] = (float)(v43 * v143) + v52;
          v71 = v139;
          v169.v[2] = (float)(v139 * v144) + v53;
          v72 = FLOAT_360_0;
          if ( v158 > 0 )
          {
            v73 = outUp.v[2];
            v74 = outUp.v[1];
            v75 = outUp.v[0];
            v76 = v147;
            while ( 1 )
            {
              if ( v70 >= v164 )
              {
LABEL_103:
                _XMM8 = LODWORD(v151);
                v59 = v152;
                goto LABEL_104;
              }
              memset_0(&results, 0, sizeof(results));
              if ( !v10 )
                goto LABEL_55;
              BgTrace::LegacyTraceHandler(pm->m_trace, worldId, &results, &v169, &v169, &bounds, v7->clientNum, v76, v7);
              v154 = ++v69;
              if ( !results.startsolid && !results.allsolid )
                break;
              closestPointsPenetration_low = LODWORD(results.closestPointsPenetration);
              *(float *)&closestPointsPenetration_low = results.closestPointsPenetration + 0.001;
              v78 = closestPointsPenetration_low;
              *(float *)&closestPointsPenetration_low = (float)((float)(results.closestPointsPenetration + 0.001) * results.normal.v[0]) + v169.v[0];
              v80 = closestPointsPenetration_low;
              v175.v[0] = *(float *)&closestPointsPenetration_low;
              v81 = v78;
              *(float *)&v81 = (float)(*(float *)&v78 * results.normal.v[1]) + v169.v[1];
              v82 = v81;
              v175.v[1] = *(float *)&v81;
              v83 = (float)(*(float *)&v78 * results.normal.v[2]) + v169.v[2];
              v175.v[2] = v83;
              PM_LastStandCollision_DebugCapsule(pm, &v175, &bounds, &colorYellow);
              v85 = v80;
              *(float *)&v85 = *(float *)&v80 - v169.v[0];
              v84 = v85;
              v87 = v82;
              *(float *)&v87 = *(float *)&v82 - v169.v[1];
              v86 = *(float *)&v82 - v169.v[1];
              v88 = v83 - v169.v[2];
              v74 = outUp.v[1];
              v75 = outUp.v[0];
              v73 = outUp.v[2];
              LODWORD(v78) = COERCE_UNSIGNED_INT((float)((float)(outUp.v[1] * (float)(*(float *)&v82 - v169.v[1])) + (float)(outUp.v[0] * *(float *)&v84)) + (float)(outUp.v[2] * (float)(v83 - v169.v[2]))) ^ _xmm;
              v89 = (float)(outUp.v[2] * *(float *)&v78) + (float)(v83 - v169.v[2]);
              v90 = *(float *)&v80 - v50;
              v161 = *(float *)&v82 - v146;
              v160 = v83 - v145;
              v141 = *(float *)&v80;
              v146 = *(float *)&v82;
              v145 = v83;
              v169.v[0] = *(float *)&v80;
              v169.v[1] = *(float *)&v82;
              v169.v[2] = v83;
              if ( (float)((float)((float)((float)((float)(outUp.v[1] * *(float *)&v78) + v86) * (float)((float)(outUp.v[1] * *(float *)&v78) + v86)) + (float)((float)((float)(outUp.v[0] * *(float *)&v78) + *(float *)&v84) * (float)((float)(outUp.v[0] * *(float *)&v78) + *(float *)&v84))) + (float)(v89 * v89)) <= 0.0000010000001 )
                goto LABEL_100;
              *(float *)&v87 = fsqrt((float)((float)(*(float *)&v87 * *(float *)&v87) + (float)(*(float *)&v84 * *(float *)&v84)) + (float)(v88 * v88));
              _XMM3 = v87;
              __asm
              {
                vcmpless xmm0, xmm3, cs:__real@80000000
                vblendvps xmm1, xmm3, xmm2, xmm0
              }
              if ( (float)((float)((float)((float)(v86 * (float)(1.0 / *(float *)&_XMM1)) * outUp.v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&v84) * outUp.v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * v88) * outUp.v[2])) >= 0.69999999 )
              {
                if ( !v140 )
                  goto LABEL_100;
                v169.v[0] = (float)(outUp.v[0] * v165) + *(float *)&v80;
                v169.v[1] = (float)(outUp.v[1] * v165) + *(float *)&v82;
                v169.v[2] = (float)(outUp.v[2] * v165) + v83;
                v94 = pml->right.v[1];
                LODWORD(v95) = COERCE_UNSIGNED_INT((float)((float)(v90 * pml->right.v[0]) + (float)(v94 * v161)) + (float)((float)(v165 + v160) * pml->right.v[2])) ^ _xmm;
                v96 = (float)(v95 * pml->right.v[0]) + v90;
                v97 = (float)(v95 * v94) + v161;
                v98 = (float)(v95 * pml->right.v[2]) + (float)(v165 + v160);
                v99 = fsqrt((float)((float)(v97 * v97) + (float)(v96 * v96)) + (float)(v98 * v98));
                if ( v99 <= 0.000001 )
                  goto LABEL_100;
                if ( (float)((float)((float)(v96 * v159) + (float)(v97 * v155)) + (float)(v98 * v156)) > 0.000001 )
                {
                  v100 = (float)(1.0 / v99) * v96;
                  v101 = (float)(1.0 / v99) * v97;
                  v102 = (float)(1.0 / v99) * v98;
                  v50 = *(float *)&v80;
                  v6 = 0i64;
                  v71 = v139;
                  v72 = FLOAT_360_0;
                  if ( v157 < (float)((float)((float)(v101 * outUp.v[1]) + (float)(v100 * outUp.v[0])) + (float)(v102 * outUp.v[2])) )
                  {
                    v142 = v100;
                    v143 = v101;
                    v144 = (float)(1.0 / v99) * v98;
                    v157 = (float)((float)(v101 * outUp.v[1]) + (float)(v100 * outUp.v[0])) + (float)(v102 * outUp.v[2]);
                  }
                }
                else
                {
LABEL_100:
                  v72 = FLOAT_360_0;
                  v71 = v139;
                  v6 = 0i64;
                  v50 = v141;
                }
LABEL_101:
                v68 = v135;
                v67 = v134;
                v66 = LODWORD(v138);
                goto LABEL_102;
              }
              v103 = v84;
              *(float *)&v103 = *(float *)&v84 + v138;
              v66 = v103;
              v138 = *(float *)&v84 + v138;
              v67 = v86 + v134;
              v134 = v86 + v134;
              v68 = v88 + v135;
              v135 = v88 + v135;
              v50 = *(float *)&v80;
              v6 = 0i64;
              v71 = v139;
              v72 = FLOAT_360_0;
LABEL_102:
              v63 = v148;
              v64 = v149;
              v65 = v150;
              if ( v69 >= v158 )
                goto LABEL_103;
            }
            v73 = outUp.v[2];
            v74 = outUp.v[1];
            v75 = outUp.v[0];
LABEL_55:
            end.v[0] = (float)(v162 * v75) + v169.v[0];
            end.v[1] = (float)(v162 * v74) + v169.v[1];
            end.v[2] = (float)(v162 * v73) + v169.v[2];
            v173.v[0] = (float)(v163 * v75) + end.v[0];
            v173.v[1] = (float)(v163 * v74) + end.v[1];
            v173.v[2] = (float)(v163 * v73) + end.v[2];
            BgTrace::LegacyTraceHandler(pm->m_trace, worldId, &results, &end, &v173, &v180, v7->clientNum, v147, v7);
            v77 = results.startsolid || results.allsolid;
            end.v[0] = (float)((float)(v173.v[0] - end.v[0]) * results.fraction) + end.v[0];
            end.v[1] = (float)((float)(v173.v[1] - end.v[1]) * results.fraction) + end.v[1];
            end.v[2] = (float)((float)(v173.v[2] - end.v[2]) * results.fraction) + end.v[2];
            v104 = &colorPink;
            if ( v77 )
              v104 = &colorRed;
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerLastStandDebug, "playerLastStandDebug") )
              ((void (__fastcall *)(const BgHandler *, vec3_t *, void (__fastcall *)(BgHandler *, const vec3_t *, float, const vec4_t *, int, int), vec4_t *, int, int))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &end, pm->m_bgHandler->DebugSphere, v104, dword_148BA6BB8, dword_148BA6BBC);
            if ( v70 )
            {
              if ( v61 )
              {
                if ( v70 <= 0 )
                {
                  LODWORD(psa) = v70;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2407, ASSERT_TYPE_ASSERT, "( 0 ) < ( stepIndex )", "%s < %s\n\t%i, %i", "0", "stepIndex", 0i64, psa) )
                    __debugbreak();
                }
                _XMM0 = v6;
                if ( !v77 )
                {
                  v177.v[0] = end.v[0] - v63;
                  v177.v[1] = end.v[1] - v64;
                  v177.v[2] = end.v[2] - v65;
                  v113 = vectopitch(&v177);
                  v114 = *(unsigned __int64 *)&v113;
                  *(float *)&v114 = *(float *)&v113 * 0.0027777778;
                  _XMM0 = 0i64;
                  __asm { vroundss xmm1, xmm0, xmm3, 1 }
                  *(float *)&v114 = (float)(*(float *)&v114 - *(float *)&_XMM1) * v72;
                  _XMM0 = v114;
                }
                __asm { vminss  xmm4, xmm0, [rbp+200h+var_26C] }
                v152 = *(float *)&_XMM4;
              }
              else
              {
                if ( v70 <= 0 )
                {
                  LODWORD(psa) = v70;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2420, ASSERT_TYPE_ASSERT, "( 0 ) < ( stepIndex )", "%s < %s\n\t%i, %i", "0", "stepIndex", 0i64, psa) )
                    __debugbreak();
                }
                v152 = v151;
              }
              goto LABEL_95;
            }
            if ( v136 || results.fraction >= 1.0 )
            {
              v61 = 0;
              if ( v136 )
                goto LABEL_80;
            }
            else
            {
              v61 = 1;
            }
            if ( (v137 || v61) && !v77 )
            {
              v105 = end.v[0];
              v106 = end.v[1];
              v107 = end.v[2];
LABEL_81:
              v148 = v105;
              v149 = v106;
              v150 = v107;
              vec.v[0] = v105 - start.v[0];
              vec.v[1] = v106 - start.v[1];
              vec.v[2] = v107 - start.v[2];
              v74 = outUp.v[1];
              v75 = outUp.v[0];
              v73 = outUp.v[2];
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v106 - start.v[1]) * outUp.v[1]) + (float)((float)(v105 - start.v[0]) * outUp.v[0])) + (float)((float)(v107 - start.v[2]) * outUp.v[2])) & _xmm) <= 0.001 )
              {
                v151 = *(float *)&v6;
LABEL_96:
                origin = v169;
                v169.v[0] = (float)(v71 * v142) + v169.v[0];
                v169.v[1] = (float)(v71 * v143) + v169.v[1];
                v169.v[2] = (float)(v71 * v144) + v169.v[2];
                ++v70;
                if ( v10 )
                {
                  PM_LastStandCollision_DebugCapsule(pm, &origin, &bounds, &colorGreen);
                  v73 = outUp.v[2];
                  v74 = outUp.v[1];
                  v75 = outUp.v[0];
                }
                v145 = origin.v[2];
                v146 = origin.v[1];
                v50 = origin.v[0];
                v69 = v154;
                v76 = v147;
                goto LABEL_101;
              }
              v108 = vectopitch(&vec);
              v109 = *(float *)&v108 * 0.0027777778;
              _XMM0 = 0i64;
              __asm { vroundss xmm1, xmm0, xmm3, 1 }
              v151 = (float)(v109 - *(float *)&_XMM1) * v72;
LABEL_95:
              v73 = outUp.v[2];
              v74 = outUp.v[1];
              v75 = outUp.v[0];
              goto LABEL_96;
            }
LABEL_80:
            v107 = start.v[2];
            v106 = start.v[1];
            v105 = start.v[0];
            goto LABEL_81;
          }
LABEL_104:
          v118 = v66;
          *(float *)&v118 = fsqrt((float)((float)(*(float *)&v66 * *(float *)&v66) + (float)(v67 * v67)) + (float)(v68 * v68));
          _XMM3 = v118;
          __asm
          {
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm1, xmm3, xmm6, xmm0
          }
          v178.v[0] = v138 * (float)(1.0 / *(float *)&_XMM1);
          v178.v[1] = v67 * (float)(1.0 / *(float *)&_XMM1);
          v179 = v68 * (float)(1.0 / *(float *)&_XMM1);
          if ( *(float *)&v118 > 0.001 )
          {
            if ( *(float *)&v6 >= pml->frametime )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2520, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
                __debugbreak();
              v68 = v135;
              v67 = v134;
            }
            v122 = 1.0 / pml->frametime;
            v7->velocity.v[0] = (float)(v138 * v122) + v7->velocity.v[0];
            v7->velocity.v[1] = (float)(v67 * v122) + v7->velocity.v[1];
            v7->velocity.v[2] = (float)(v68 * v122) + v7->velocity.v[2];
            outAppliedInstantaneousVelocity->v[0] = (float)(v138 * v122) + outAppliedInstantaneousVelocity->v[0];
            outAppliedInstantaneousVelocity->v[1] = (float)(v67 * v122) + outAppliedInstantaneousVelocity->v[1];
            outAppliedInstantaneousVelocity->v[2] = (float)(v68 * v122) + outAppliedInstantaneousVelocity->v[2];
            GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v7->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u);
            v123 = vectoyaw(&v178);
            v124 = AngleNormalize360(*(const float *)&v123);
            v125 = I_fclamp(*(float *)&v124, *(float *)&v6, v72);
            v7->velocityClipDir = BG_DegreesToMovementDir(*(float *)&v125);
          }
          _XMM10 = LODWORD(FLOAT_3_4028235e38);
          __asm
          {
            vcmpless xmm1, xmm10, xmm8
            vblendvps xmm0, xmm8, xmm14, xmm1; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -44.427006, 44.427006);
          pm->fTorsoPitch = *(float *)&_XMM0;
          *(double *)&_XMM0 = AngleDelta(v59, *(const float *)&_XMM0);
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -90.0, 90.0);
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0 + pm->fTorsoPitch, -90.0, 90.0);
          pm->fWaistPitch = *(float *)&_XMM0;
          fTorsoPitch = pm->fTorsoPitch;
          if ( fTorsoPitch == 3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2540, ASSERT_TYPE_ASSERT, "( pm->fTorsoPitch ) != ( 3.402823466e+38F )", "%s != %s\n\t%g, %g", "pm->fTorsoPitch", "FLT_MAX", fTorsoPitch, DOUBLE_3_402823466385289e38) )
            __debugbreak();
          fWaistPitch = pm->fWaistPitch;
          if ( fWaistPitch == 3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2541, ASSERT_TYPE_ASSERT, "( pm->fWaistPitch ) != ( 3.402823466e+38F )", "%s != %s\n\t%g, %g", "pm->fWaistPitch", "FLT_MAX", fWaistPitch, DOUBLE_3_402823466385289e38) )
            __debugbreak();
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_PlayerCollision_DrawCapsule
==============
*/
void PM_PlayerCollision_DrawCapsule(const pmove_t *pm, const Bounds *bounds, const vec3_t *origin, const vec4_t *color)
{
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v10; 
  __int128 v11; 
  double v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  bool v19; 
  __int64 v20; 
  const BgHandler *m_bgHandler; 
  BgHandler_vtbl *v22; 
  float v0[4]; 
  float v1[4]; 
  Bounds boundsa; 
  __int128 v26; 
  __int128 v27; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 238, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 239, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_playerCollisionDebug;
  if ( !DCONST_DVARBOOL_playerCollisionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v11 = *(_OWORD *)bounds->midPoint.v;
    v12 = *(double *)&bounds->halfSize.y;
    v27 = v4;
    *(_OWORD *)boundsa.midPoint.v = v11;
    *(double *)&boundsa.halfSize.y = v12;
    v26 = v5;
    *(double *)&v11 = BG_PlayerCollision_GetCollisionStickLength(&boundsa);
    v13 = *(float *)&v11 * 0.5;
    v14 = boundsa.halfSize.v[2] - boundsa.halfSize.v[0];
    if ( (float)((float)(boundsa.halfSize.v[2] - boundsa.halfSize.v[0]) - (float)(*(float *)&v11 * 0.5)) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 214, ASSERT_TYPE_ASSERT, "((bounds->halfSize[2] - halfStickHeight) >= 0.0f)", (const char *)&queryFormat, "(bounds->halfSize[2] - halfStickHeight) >= 0.0f") )
      __debugbreak();
    v15 = boundsa.midPoint.v[1] + origin->v[1];
    v16 = boundsa.midPoint.v[0] + origin->v[0];
    v17 = (float)(v13 + boundsa.midPoint.v[2]) + origin->v[2];
    v18 = v14 - v13;
    v0[2] = v17 + v18;
    v0[0] = v16;
    v0[1] = v15;
    v1[0] = v16;
    v1[1] = v15;
    v1[2] = v17 - v18;
    v19 = VecNCompareCustomEpsilon(v0, v1, 0.001, 3);
    m_bgHandler = pm->m_bgHandler;
    v22 = m_bgHandler->__vftable;
    if ( v19 )
      ((void (__fastcall *)(const BgHandler *, float *, __int64, const vec4_t *, int, _DWORD))v22->DebugSphere)(m_bgHandler, v0, v20, color, 1, 0);
    else
      ((void (__fastcall *)(const BgHandler *, float *, float *))v22->DebugCapsule)(m_bgHandler, v0, v1);
  }
}

/*
==============
PM_PlayerCollision_UseShortStickExtension
==============
*/
bool PM_PlayerCollision_UseShortStickExtension(const pmove_t *pm)
{
  playerState_s *ps; 
  bool v3; 
  bool v4; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 158, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 158, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = pm->cmd.serverTime - ps->jumpState.jumpTime < 500 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u);
  v4 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
  return v3 || v4 || ps->groundEntityNum == 2047;
}

/*
==============
PM_PlayerSecondaryCollision_UpdateState
==============
*/
void PM_PlayerSecondaryCollision_UpdateState(pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2032, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2032, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_PlayerSecondaryCollision_IsValidState_ButtCollision(ps) && (!Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) || PM_GetEffectiveStanceForWorldModelAnimation(ps) != PM_EFF_STANCE_LASTSTANDCRAWL || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) || !BG_PlayerSecondaryCollision_IsValidState_Common(ps)) )
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u);
    ps->secondaryCollisionStartTime = 0;
  }
}

/*
==============
PM_ResolveCharacterCollision
==============
*/
void PM_ResolveCharacterCollision(pmove_t *pm, pml_t *pml, vec3_t *outAppliedInstantaneousVelocity, BgAntiLagEntityInfo *infoList, unsigned int numInfoItems)
{
  __int64 v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  playerState_s *ps; 
  unsigned int m_movingPlatformEntity; 
  const BgHandler *m_bgHandler; 
  int clientNum; 
  CgHandler *v16; 
  BgAntiLagEntityInfo *v17; 
  float v18; 
  BgAntiLagEntityInfo *v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  int CharacterCollisionType; 
  int v29; 
  unsigned int v30; 
  unsigned int v31; 
  __int128 v33; 
  float v35; 
  const entityState_t *EntityState; 
  EffectiveStance v38; 
  float v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  __int128 v46; 
  float v47; 
  __int128 v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  __int128 v53; 
  __int128 v58; 
  double Float_Internal_DebugName; 
  float v61; 
  double v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  __int128 v71; 
  float v72; 
  float v76; 
  float v77; 
  float v78; 
  __int128 v79; 
  __int128 v80; 
  float v81; 
  __int128 v82; 
  float v86; 
  __int128 v87; 
  float v88; 
  __int128 v91; 
  __int128 v92; 
  float v94; 
  double v95; 
  float v96; 
  float v97; 
  vec3_t *v98; 
  vec3_t *v99; 
  float v102; 
  float v103; 
  float v104; 
  char *fmt; 
  bool IsAgent; 
  char v107; 
  bool EntityInfoAtTime; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  vec3_t in1; 
  team_t outTeam; 
  int v117; 
  float v118; 
  __int64 v119; 
  float v120; 
  float v121; 
  float v122; 
  vec3_t inOutOtherOrigin; 
  BgAntiLagEntityInfo *v124; 
  float v125; 
  float outContactTime; 
  float outMaxPenetration; 
  BgAntiLagEntityInfo *v128; 
  float v129; 
  float v130; 
  vec3_t v131; 
  vec3_t *p_velocity; 
  vec3_t *v; 
  vec3_t out; 
  __int64 v135; 
  vec3_t vec; 
  vec3_t playerOrigin; 
  vec3_t angles; 
  vec3_t velDir; 
  vec3_t outContactPos; 
  Bounds otherBounds; 
  tmat43_t<vec3_t> v142; 
  tmat43_t<vec3_t> axis; 
  BgAntiLagEntityInfo outInfo; 

  v135 = -2i64;
  v = outAppliedInstantaneousVelocity;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1049, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  *(_QWORD *)outAppliedInstantaneousVelocity->v = 0i64;
  outAppliedInstantaneousVelocity->v[2] = 0.0;
  v9 = numInfoItems;
  if ( numInfoItems )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_ResolveCharacterCollision");
    v10 = DCONST_DVARBOOL_removePlayerCollision;
    if ( !DCONST_DVARBOOL_removePlayerCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "removePlayerCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( !v10->current.enabled )
    {
      v11 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
      if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled && pml->frametime > 0.0 )
      {
        ps = pm->ps;
        if ( !BG_IsPlayerInExecution(ps) )
        {
          EntityInfoAtTime = 0;
          if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) && pm->antiLag )
          {
            m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
            outInfo.boneInfo.boneList.m_usedSize = 0;
            outInfo.boneInfo.boneList.m_maxSize = 0;
            if ( !pm->antiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1098, ASSERT_TYPE_ASSERT, "(pm->antiLag)", (const char *)&queryFormat, "pm->antiLag") )
              __debugbreak();
            EntityInfoAtTime = BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)pm->antiLag, ps->clientNum, m_movingPlatformEntity, 0xBu, pm->cmd.serverTime, &outInfo);
            if ( EntityInfoAtTime )
            {
              AnglesToAxis(&outInfo.angles, (tmat33_t<vec3_t> *)&axis);
              BgAntiLagEntity_GetOrigin(&outInfo, &axis.m[3]);
              pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, m_movingPlatformEntity, &angles);
              AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&v142);
              m_bgHandler = pm->m_bgHandler;
              m_bgHandler->IsClient((BgHandler *)m_bgHandler);
              m_bgHandler->GetEntityOrigin((BgHandler *)m_bgHandler, m_movingPlatformEntity, &v142.m[3]);
            }
          }
          clientNum = ps->clientNum;
          v16 = (CgHandler *)pm->m_bgHandler;
          if ( v16->IsClient(v16) )
            CgHandler::GetPlayerTeam(v16, clientNum, &outTeam);
          else
            GHandler::GetPlayerTeam((GHandler *)v16, clientNum, &outTeam);
          IsAgent = 0;
          if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) )
            IsAgent = PM_EntNumIsAgent(ps->clientNum);
          if ( pm->cmd.forwardmove || (v107 = 0, pm->cmd.rightmove) )
            v107 = 1;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_OFFHAND_END|0x80) && (PM_IsInAir(pm) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du)) )
            v107 = 1;
          v17 = infoList;
          v128 = infoList;
          BgAntiLagEntity_GetOrigin(infoList, &v131);
          v18 = (float)((float)((float)(ps->origin.v[1] - v131.v[1]) * (float)(ps->origin.v[1] - v131.v[1])) + (float)((float)(ps->origin.v[0] - v131.v[0]) * (float)(ps->origin.v[0] - v131.v[0]))) + (float)((float)(ps->origin.v[2] - v131.v[2]) * (float)(ps->origin.v[2] - v131.v[2]));
          if ( numInfoItems > 1 )
          {
            v19 = infoList + 1;
            v20 = numInfoItems - 1;
            do
            {
              BgAntiLagEntity_GetOrigin(v19, &in1);
              v21 = (float)((float)((float)(ps->origin.v[1] - in1.v[1]) * (float)(ps->origin.v[1] - in1.v[1])) + (float)((float)(ps->origin.v[0] - in1.v[0]) * (float)(ps->origin.v[0] - in1.v[0]))) + (float)((float)(ps->origin.v[2] - in1.v[2]) * (float)(ps->origin.v[2] - in1.v[2]));
              if ( v21 < v18 && (unsigned int)PM_GetCharacterCollisionType(pm, outTeam, IsAgent, v19) == 3 )
              {
                v128 = v19;
                v18 = v21;
              }
              ++v19;
              --v20;
            }
            while ( v20 );
            v9 = numInfoItems;
            v17 = v128;
          }
          p_velocity = &ps->velocity;
          vec = ps->velocity;
          *(_QWORD *)angles.v = &pm->refFrame;
          WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
          playerOrigin = ps->origin;
          v22 = 0.0;
          v110 = 0.0;
          v23 = 0.0;
          v111 = 0.0;
          v24 = 0.0;
          v112 = 0.0;
          v25 = 0.0;
          v113 = 0.0;
          v118 = 0.0;
          v26 = 0i64;
          v114 = 0.0;
          LODWORD(_XMM12) = 0;
          v122 = 0.0;
          while ( 1 )
          {
            v124 = infoList;
            CharacterCollisionType = PM_GetCharacterCollisionType(pm, outTeam, IsAgent, infoList);
            v29 = CharacterCollisionType;
            if ( !CharacterCollisionType || CharacterCollisionType == 3 && (!v107 || infoList != v17) )
              goto LABEL_89;
            if ( EntityInfoAtTime )
            {
              BgAntiLagEntity_GetOrigin(infoList, &in1);
              MatrixTransposeTransformVector43(&in1, &axis, &out);
              MatrixTransformVector43(&out, &v142, &in1);
              if ( !infoList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 830, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
                __debugbreak();
              if ( ((LODWORD(in1.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(in1.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(in1.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 753, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
                __debugbreak();
              LOWORD(v117) = *(_WORD *)((char *)&v124 + 1);
              BYTE2(v117) = BYTE3(v124);
              HIBYTE(v117) = (_BYTE)infoList;
              v30 = v117 ^ LODWORD(in1.v[0]) ^ ~s_antilag_aab_X;
              v31 = s_antilag_aab_Z ^ v117 ^ v30 ^ LODWORD(in1.v[2]);
              LODWORD(infoList->origin.origin.v[0]) = s_antilag_aab_Y ^ v117 ^ v31 ^ LODWORD(in1.v[1]);
              LODWORD(infoList->origin.origin.v[1]) = v30;
              LODWORD(infoList->origin.origin.v[2]) = v31;
              memset(&v119, 0, sizeof(v119));
              memset(&out, 0, sizeof(out));
            }
            v33 = LODWORD(vec.v[1]);
            *(float *)&v33 = fsqrt((float)((float)(*(float *)&v33 * *(float *)&v33) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
            _XMM6 = v33;
            __asm { vcmpless xmm0, xmm6, xmm11 }
            v35 = FLOAT_1_0;
            __asm { vblendvps xmm1, xmm6, xmm9, xmm0 }
            *(float *)&v119 = *(float *)&_XMM1;
            velDir.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM1);
            velDir.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM1);
            velDir.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM1);
            BgAntiLagEntity_GetOrigin(infoList, &inOutOtherOrigin);
            EntityState = BG_GetEntityState(pm->m_bgHandler, infoList->entityIndex);
            v38 = BG_EstimateEffectiveStance(EntityState);
            LOBYTE(fmt) = (infoList->flags & 4) != 0;
            pm->GetEntityBounds(pm, infoList->entityIndex, infoList->suitIndex, v38, (bool)fmt, &otherBounds);
            if ( !PM_CharacterCollisionTestIntersect(pm, &otherBounds, &velDir, &playerOrigin, &inOutOtherOrigin, &outContactPos, &outContactTime, &outMaxPenetration) )
            {
              v25 = v113;
              v26 = LODWORD(v114);
              goto LABEL_88;
            }
            if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
            {
              PM_Ladder_ResolveCharacterCollision(pm, infoList, pml->ladderWidth);
              v25 = v113;
              v26 = LODWORD(v114);
            }
            else
            {
              v39 = fsqrt((float)((float)((float)(outContactPos.v[1] - playerOrigin.v[1]) * (float)(outContactPos.v[1] - playerOrigin.v[1])) + (float)((float)(outContactPos.v[0] - playerOrigin.v[0]) * (float)(outContactPos.v[0] - playerOrigin.v[0]))) + (float)((float)(outContactPos.v[2] - playerOrigin.v[2]) * (float)(outContactPos.v[2] - playerOrigin.v[2])));
              v41 = *(float *)&v33 * pml->frametime;
              v40 = *(float *)&_XMM6 * pml->frametime;
              if ( outContactTime <= 0.0 || v39 <= v41 )
              {
                v42 = LODWORD(outContactPos.v[1]);
                *(float *)&v42 = fsqrt((float)((float)((float)(outContactPos.v[1] - inOutOtherOrigin.v[1]) * (float)(outContactPos.v[1] - inOutOtherOrigin.v[1])) + (float)((float)(outContactPos.v[0] - inOutOtherOrigin.v[0]) * (float)(outContactPos.v[0] - inOutOtherOrigin.v[0]))) + (float)((float)(outContactPos.v[2] - inOutOtherOrigin.v[2]) * (float)(outContactPos.v[2] - inOutOtherOrigin.v[2])));
                _XMM7 = v42;
                __asm
                {
                  vcmpless xmm0, xmm7, xmm11
                  vblendvps xmm1, xmm7, xmm9, xmm0
                }
                *(float *)&v119 = *(float *)&_XMM1;
                v46 = LODWORD(FLOAT_1_0);
                v47 = (float)(1.0 / *(float *)&_XMM1) * (float)(outContactPos.v[0] - inOutOtherOrigin.v[0]);
                *(float *)&v46 = (float)(1.0 / *(float *)&_XMM1) * (float)(outContactPos.v[1] - inOutOtherOrigin.v[1]);
                v48 = v46;
                v49 = (float)(1.0 / *(float *)&_XMM1) * (float)(outContactPos.v[2] - inOutOtherOrigin.v[2]);
                if ( *(float *)&_XMM7 < 0.001 )
                {
                  *(float *)&_XMM7 = FLOAT_1_0;
                  v47 = FLOAT_1_0;
                  v48 = 0i64;
                  v49 = 0.0;
                }
                v50 = 0.0;
                v120 = 0.0;
                v51 = 0.0;
                v121 = 0.0;
                v52 = 0.0;
                v109 = 0.0;
                if ( v40 != 0.0 )
                {
                  v50 = vec.v[0] * (float)(v39 / v40);
                  v120 = v50;
                  v51 = vec.v[1] * (float)(v39 / v40);
                  v121 = v51;
                  v52 = vec.v[2] * (float)(v39 / v40);
                  v109 = v52;
                }
                vec.v[0] = vec.v[0] - v50;
                v53 = LODWORD(vec.v[1]);
                vec.v[1] = vec.v[1] - v51;
                vec.v[2] = vec.v[2] - v52;
                *(float *)&v53 = fsqrt((float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
                _XMM3 = v53;
                __asm
                {
                  vcmpless xmm0, xmm3, xmm11
                  vblendvps xmm1, xmm3, xmm9, xmm0
                }
                v125 = vec.v[0] * (float)(1.0 / *(float *)&_XMM1);
                v130 = vec.v[1] * (float)(1.0 / *(float *)&_XMM1);
                *(float *)&v119 = vec.v[2] * (float)(1.0 / *(float *)&_XMM1);
                v58 = LODWORD(outMaxPenetration);
                *(float *)&v58 = outMaxPenetration - *(float *)&_XMM7;
                _XMM1 = v58;
                __asm { vmaxss  xmm7, xmm1, xmm10 }
                if ( *(float *)&_XMM7 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1286, ASSERT_TYPE_ASSERT, "(penetrationDepth >= 0.0f)", (const char *)&queryFormat, "penetrationDepth >= 0.0f") )
                  __debugbreak();
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionPenetrationDepth, "playerCharacterCollisionPenetrationDepth");
                if ( *(float *)&Float_Internal_DebugName <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1288, ASSERT_TYPE_ASSERT, "(playerCharacterCollisionPenetrationDepth > 0.0f)", (const char *)&queryFormat, "playerCharacterCollisionPenetrationDepth > 0.0f") )
                  __debugbreak();
                v61 = *(float *)&_XMM7 / *(float *)&Float_Internal_DebugName;
                v62 = I_fclamp(*(float *)&_XMM7 / *(float *)&Float_Internal_DebugName, 0.0, 1.0);
                v63 = v61;
                v129 = *(float *)&v62;
                v64 = vec.v[0];
                v65 = vec.v[1];
                v66 = vec.v[2];
                v67 = (float)((float)(vec.v[0] * v47) + (float)(vec.v[1] * *(float *)&v48)) + (float)(vec.v[2] * v49);
                if ( v67 < 0.0 )
                {
                  if ( v29 == 3 )
                  {
                    v68 = fsqrt((float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
                    LODWORD(v69) = LODWORD(v67) ^ _xmm;
                    v70 = (float)(v47 * COERCE_FLOAT(LODWORD(v67) ^ _xmm)) + vec.v[0];
                    v71 = v48;
                    v72 = (float)(v49 * v69) + vec.v[2];
                    *(float *)&v71 = fsqrt((float)((float)((float)((float)(*(float *)&v48 * v69) + vec.v[1]) * (float)((float)(*(float *)&v48 * v69) + vec.v[1])) + (float)(v70 * v70)) + (float)(v72 * v72));
                    _XMM1 = v71;
                    __asm
                    {
                      vcmpless xmm0, xmm1, cs:__real@80000000
                      vblendvps xmm1, xmm1, xmm2, xmm0
                    }
                    *(float *)&v124 = *(float *)&_XMM1;
                    v76 = (float)((float)(1.0 / *(float *)&_XMM1) * v70) * v68;
                    v77 = (float)((float)(1.0 / *(float *)&_XMM1) * (float)((float)(*(float *)&v48 * v69) + vec.v[1])) * v68;
                    v78 = (float)((float)(1.0 / *(float *)&_XMM1) * v72) * v68;
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionSoftGlanceStrength, "playerCharacterCollisionSoftGlanceStrength");
                    v35 = FLOAT_1_0;
                    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0 * v129, 0.0, 1.0);
                    v64 = vec.v[0] + (float)((float)(v76 - vec.v[0]) * *(float *)&_XMM0);
                    v65 = vec.v[1] + (float)((float)(v77 - vec.v[1]) * *(float *)&_XMM0);
                    v66 = vec.v[2] + (float)((float)(v78 - vec.v[2]) * *(float *)&_XMM0);
                    goto LABEL_76;
                  }
                  v64 = vec.v[0] + (float)(v47 * COERCE_FLOAT(LODWORD(v67) ^ _xmm));
                  vec.v[0] = v64;
                  v65 = vec.v[1] + (float)(*(float *)&v48 * COERCE_FLOAT(LODWORD(v67) ^ _xmm));
                  vec.v[1] = v65;
                  v66 = vec.v[2] + (float)(v49 * COERCE_FLOAT(LODWORD(v67) ^ _xmm));
                  vec.v[2] = v66;
                }
                if ( v29 == 3 )
                {
LABEL_76:
                  v24 = v112;
                  v23 = v111;
                  v22 = v110;
                }
                else if ( v29 == 2 )
                {
                  if ( pml->frametime <= 0.0 )
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1320, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
                      __debugbreak();
                    v64 = vec.v[0];
                    v65 = vec.v[1];
                    v66 = vec.v[2];
                  }
                  v94 = *(float *)&_XMM7 / pml->frametime;
                  v22 = (float)(v47 * v94) + v110;
                  v110 = v22;
                  v23 = (float)(*(float *)&v48 * v94) + v111;
                  v111 = v23;
                  v24 = (float)(v49 * v94) + v112;
                  v112 = v24;
                }
                else
                {
                  v95 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionHardDampen, "playerCharacterCollisionHardDampen");
                  v96 = (float)(*(float *)&v95 * v63) * v63;
                  v22 = (float)(v47 * v96) + v110;
                  v110 = v22;
                  v23 = (float)(*(float *)&v48 * v96) + v111;
                  v111 = v23;
                  v24 = (float)(v49 * v96) + v112;
                  v112 = v24;
                  v66 = vec.v[2];
                  v65 = vec.v[1];
                  v64 = vec.v[0];
                }
                v79 = LODWORD(infoList->velocity.v[1]);
                v80 = LODWORD(infoList->velocity.v[0]);
                v81 = infoList->velocity.v[2];
                v82 = v80;
                *(float *)&v82 = fsqrt((float)((float)(*(float *)&v80 * *(float *)&v80) + (float)(*(float *)&v79 * *(float *)&v79)) + (float)(v81 * v81));
                _XMM7 = v82;
                __asm
                {
                  vcmpless xmm0, xmm7, cs:__real@80000000
                  vblendvps xmm1, xmm7, xmm9, xmm0
                }
                *(float *)&v124 = *(float *)&_XMM1;
                v86 = *(float *)&v80 * (float)(v35 / *(float *)&_XMM1);
                v87 = v79;
                *(float *)&v79 = *(float *)&v79 * (float)(v35 / *(float *)&_XMM1);
                v88 = v81 * (float)(v35 / *(float *)&_XMM1);
                *(float *)&v87 = (float)((float)(*(float *)&v79 * v130) + (float)(v86 * v125)) + (float)(v88 * *(float *)&v119);
                _XMM2 = v87;
                __asm { vminss  xmm3, xmm2, xmm7 }
                v25 = (float)(*(float *)&_XMM3 * v86) + v113;
                v113 = v25;
                v118 = (float)(*(float *)&_XMM3 * *(float *)&v79) + v118;
                v91 = _XMM3;
                *(float *)&v91 = (float)(*(float *)&_XMM3 * v88) + v114;
                v26 = v91;
                v114 = *(float *)&v91;
                vec.v[0] = v64 + v120;
                vec.v[1] = v65 + v121;
                vec.v[2] = v66 + v109;
                PM_AddTouchEnt(pm, infoList->entityIndex, PMTF_TOUCHER_PLAYER);
                v92 = LODWORD(infoList->velocity.v[0]);
                *(float *)&v92 = (float)((float)(infoList->velocity.v[0] * infoList->velocity.v[0]) + (float)(infoList->velocity.v[1] * infoList->velocity.v[1])) + (float)(infoList->velocity.v[2] * infoList->velocity.v[2]);
                _XMM2 = v92;
                __asm { vmaxss  xmm12, xmm2, [rbp+250h+var_2C0] }
                v122 = *(float *)&_XMM12;
                goto LABEL_88;
              }
              v25 = v113;
              v26 = LODWORD(v114);
            }
LABEL_88:
            memset(&inOutOtherOrigin, 0, sizeof(inOutOtherOrigin));
LABEL_89:
            ++infoList;
            --v9;
            v17 = v128;
            if ( !v9 )
            {
              v97 = v118;
              v98 = p_velocity;
              v99 = v;
              v->v[0] = v22 + v25;
              v99->v[1] = v23 + v97;
              *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v26 + 1);
              v99->v[2] = *(float *)&v26 + v24;
              Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionMaxPenetrationVelocity, "playerCharacterCollisionMaxPenetrationVelocity");
              fsqrt(*(float *)&_XMM12);
              *(double *)&_XMM0 = Vec3Normalize(v99);
              __asm { vminss  xmm1, xmm0, xmm6 }
              v102 = *(float *)&_XMM1 * v99->v[0];
              v99->v[0] = v102;
              v103 = *(float *)&_XMM1 * v99->v[1];
              v99->v[1] = v103;
              v104 = *(float *)&_XMM1 * v99->v[2];
              v99->v[2] = v104;
              vec.v[0] = v102 + vec.v[0];
              vec.v[1] = v103 + vec.v[1];
              vec.v[2] = v104 + vec.v[2];
              *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(*(WorldUpReferenceFrame **)angles.v, v98);
              *v98 = vec;
              WorldUpReferenceFrame::AddUpContribution(*(WorldUpReferenceFrame **)angles.v, *(float *)&_XMM0, v98);
              memset(&v131, 0, sizeof(v131));
              memset(&in1, 0, sizeof(in1));
              break;
            }
          }
        }
      }
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
PM_ResolveMoverCollision
==============
*/
void PM_ResolveMoverCollision(pmove_t *pm, pml_t *pml, vec3_t *inOutAppliedInstantaneousVelocity, bool *hasMoverPenetration)
{
  vec3_t *v5; 
  playerState_s *ps; 
  vec3_t *p_velocity; 
  WorldUpReferenceFramePM *p_refFrame; 
  float v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  BgPlayerTraceInfo *m_playerTraceInfo; 
  float v21; 
  float frametime; 
  float *v; 
  __int128 v24; 
  __int128 closestPointsPenetration_low; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  __int128 v31; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  const dvar_t *v40; 
  float value; 
  float v42; 
  float v43; 
  __int128 v44; 
  float v45; 
  float v46; 
  float v47; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v64; 
  float v67; 
  float v68; 
  __int128 v69; 
  float v70; 
  double Float_Internal_DebugName; 
  float v72; 
  double UpContribution; 
  bool startsolid; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  playerState_s *v88; 
  __int64 m_size_low; 
  vec3_t *v91; 
  BgTrace v93; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  trace_t outResult; 

  v5 = inOutAppliedInstantaneousVelocity;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1647, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ResolveMoverCollision");
  if ( pml->frametime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1652, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
    __debugbreak();
  if ( !hasMoverPenetration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1654, ASSERT_TYPE_ASSERT, "(hasMoverPenetration)", (const char *)&queryFormat, "hasMoverPenetration") )
    __debugbreak();
  *hasMoverPenetration = 0;
  if ( !pm->antiLag )
    goto LABEL_68;
  ps = pm->ps;
  v88 = ps;
  p_velocity = &ps->velocity;
  v91 = &ps->velocity;
  vec = ps->velocity;
  p_refFrame = &pm->refFrame;
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
  v11 = 0.0;
  v12 = 0i64;
  v13 = 0.0;
  v83 = 0.0;
  v14 = 0.0;
  v79 = 0.0;
  v15 = 0.0;
  v80 = 0.0;
  v16 = 0.0;
  v78 = 0.0;
  v17 = 0.0;
  v84 = 0.0;
  m_size_low = SLODWORD(pm->m_playerTraceInfo->m_moverList.m_size);
  if ( m_size_low <= 0 )
    goto LABEL_65;
  v18 = 0i64;
  v19 = 0i64;
  do
  {
    m_playerTraceInfo = pm->m_playerTraceInfo;
    if ( v18 >= m_playerTraceInfo->m_moverList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    if ( v18 >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
    if ( ps->movingPlatforms.m_movingPlatformEntity == *(_DWORD *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19] )
      goto LABEL_62;
    v21 = fsqrt((float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
    frametime = pml->frametime;
    v = ps->origin.v;
    end.v[0] = (float)(vec.v[0] * frametime) + ps->origin.v[0];
    end.v[1] = (float)(vec.v[1] * frametime) + ps->origin.v[1];
    end.v[2] = (float)(vec.v[2] * frametime) + ps->origin.v[2];
    BgTrace::BgTrace(&v93, pm->m_playerTraceInfo);
    v93.m_flags |= 0x10u;
    BgTrace::PerformPlayerToEntityTrace(&v93, *(_DWORD *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19], pm->bounds, &ps->origin, &end, &outResult);
    if ( outResult.allsolid )
    {
      closestPointsPenetration_low = LODWORD(outResult.closestPointsPenetration);
      *(float *)&closestPointsPenetration_low = outResult.closestPointsPenetration * outResult.normal.v[0];
      v24 = closestPointsPenetration_low;
      v26 = outResult.closestPointsPenetration * outResult.normal.v[1];
      v27 = outResult.closestPointsPenetration * outResult.normal.v[2];
    }
    else
    {
      v24 = 0i64;
      v26 = 0.0;
      v27 = 0.0;
    }
    startsolid = outResult.startsolid;
    v28 = v21 * pml->frametime;
    v29 = outResult.fraction * v28;
    if ( !outResult.startsolid && outResult.fraction == 1.0 )
      goto LABEL_61;
    LODWORD(_XMM14) = 0;
    if ( outResult.startsolid )
    {
      v31 = v24;
      *(float *)&v31 = fsqrt((float)((float)(*(float *)&v24 * *(float *)&v24) + (float)(v26 * v26)) + (float)(v27 * v27));
      _XMM14 = v31;
      __asm
      {
        vcmpless xmm0, xmm14, cs:__real@80000000
        vblendvps xmm1, xmm14, xmm15, xmm0
      }
      v34 = *(float *)&v24 * (float)(1.0 / *(float *)&_XMM1);
      v35 = (float)(1.0 / *(float *)&_XMM1) * v26;
      v36 = v27 * (float)(1.0 / *(float *)&_XMM1);
    }
    else
    {
      if ( outResult.fraction >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1744, ASSERT_TYPE_ASSERT, "(trace.fraction < 1.0f)", (const char *)&queryFormat, "trace.fraction < 1.0f") )
        __debugbreak();
      v34 = outResult.normal.v[0];
      v35 = outResult.normal.v[1];
      v36 = outResult.normal.v[2];
    }
    if ( (float)((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36)) < 0.001 )
    {
LABEL_61:
      v15 = v80;
      v14 = v79;
LABEL_62:
      v16 = v78;
      goto LABEL_63;
    }
    v37 = 0.0;
    v85 = 0.0;
    v38 = 0.0;
    v86 = 0.0;
    v39 = 0.0;
    v87 = 0.0;
    if ( v28 != 0.0 )
    {
      v37 = vec.v[0] * (float)(v29 / v28);
      v85 = v37;
      v38 = vec.v[1] * (float)(v29 / v28);
      v86 = v38;
      v39 = vec.v[2] * (float)(v29 / v28);
      v87 = v39;
    }
    vec.v[0] = vec.v[0] - v37;
    vec.v[1] = vec.v[1] - v38;
    vec.v[2] = vec.v[2] - v39;
    if ( *(float *)&_XMM14 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1769, ASSERT_TYPE_ASSERT, "(penetrationDepth >= 0.0f)", (const char *)&queryFormat, "penetrationDepth >= 0.0f") )
      __debugbreak();
    v40 = DCONST_DVARFLT_playerCharacterCollisionPenetrationDepth;
    if ( !DCONST_DVARFLT_playerCharacterCollisionPenetrationDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionPenetrationDepth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    value = v40->current.value;
    if ( value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1771, ASSERT_TYPE_ASSERT, "(playerCharacterCollisionPenetrationDepth > 0.0f)", (const char *)&queryFormat, "playerCharacterCollisionPenetrationDepth > 0.0f") )
      __debugbreak();
    I_fclamp(*(float *)&_XMM14 / value, 0.0, 1.0);
    v42 = (float)((float)(v34 * vec.v[0]) + (float)(v35 * vec.v[1])) + (float)(v36 * vec.v[2]);
    if ( v42 < 0.0 )
    {
      vec.v[0] = (float)(v34 * COERCE_FLOAT(LODWORD(v42) ^ _xmm)) + vec.v[0];
      vec.v[1] = (float)(COERCE_FLOAT(LODWORD(v42) ^ _xmm) * v35) + vec.v[1];
      vec.v[2] = (float)(v36 * COERCE_FLOAT(LODWORD(v42) ^ _xmm)) + vec.v[2];
    }
    if ( pml->frametime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1803, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
      __debugbreak();
    v43 = pml->frametime;
    v81 = v11 + (float)(v34 * (float)(*(float *)&_XMM14 / v43));
    v82 = *(float *)&v12 + (float)(v35 * (float)(*(float *)&_XMM14 / v43));
    v83 = (float)(v36 * (float)(*(float *)&_XMM14 / v43)) + v83;
    v44 = *(unsigned int *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 28];
    v45 = *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 32];
    v46 = *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 36];
    v47 = *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 40];
    if ( v47 != 0.0 || *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 44] != 0.0 || *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 48] != 0.0 )
    {
      angles.v[0] = v47 * v43;
      angles.v[1] = v43 * *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 44];
      angles.v[2] = v43 * *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 48];
      AnglesToAxis(&angles, &axis);
      v49 = *v - *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 4];
      v50 = v[1] - *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 8];
      v51 = v[2] - *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 12];
      v52 = (float)((float)(v50 * axis.m[1].v[2]) + (float)(v49 * axis.m[0].v[2])) + (float)(v51 * axis.m[2].v[2]);
      v53 = (float)((float)((float)(v50 * axis.m[1].v[0]) + (float)(v49 * axis.m[0].v[0])) + (float)(v51 * axis.m[2].v[0])) - v49;
      v54 = (float)((float)((float)(v50 * axis.m[1].v[1]) + (float)(v49 * axis.m[0].v[1])) + (float)(v51 * axis.m[2].v[1])) - v50;
      v55 = v52 - v51;
      if ( pml->frametime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1837, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
        __debugbreak();
      v56 = 1.0 / pml->frametime;
      v57 = v44;
      *(float *)&v57 = *(float *)&v44 + (float)(v56 * v53);
      v44 = v57;
      v45 = v45 + (float)(v56 * v54);
      v46 = v46 + (float)(v56 * v55);
    }
    v58 = v44;
    *(float *)&v58 = fsqrt((float)((float)(*(float *)&v44 * *(float *)&v44) + (float)(v45 * v45)) + (float)(v46 * v46));
    _XMM3 = v58;
    __asm
    {
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm1, xmm3, xmm15, xmm0
      vminss  xmm0, xmm3, xmm2
      vmaxss  xmm3, xmm0, xmm10
    }
    v14 = (float)(*(float *)&_XMM3 * (float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&v44)) + v79;
    v79 = v14;
    v15 = (float)(*(float *)&_XMM3 * (float)((float)(1.0 / *(float *)&_XMM1) * v45)) + v80;
    v80 = v15;
    v16 = (float)(*(float *)&_XMM3 * (float)((float)(1.0 / *(float *)&_XMM1) * v46)) + v78;
    v78 = v16;
    vec.v[0] = vec.v[0] + v85;
    vec.v[1] = vec.v[1] + v86;
    vec.v[2] = vec.v[2] + v87;
    v64 = *(unsigned int *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 28];
    *(float *)&v64 = (float)((float)(*(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 28] * *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 28]) + (float)(*(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 32] * *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 32])) + (float)(*(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 36] * *(float *)&m_playerTraceInfo->m_moverList.m_data.m_buffer[v19 + 36]);
    _XMM2 = v64;
    __asm { vmaxss  xmm1, xmm2, [rsp+270h+var_214] }
    v84 = *(float *)&_XMM1;
    v11 = v81;
    v12 = LODWORD(v82);
    ps = v88;
    if ( startsolid && *(float *)&_XMM14 > 0.125 )
      *hasMoverPenetration = 1;
LABEL_63:
    ++v18;
    v19 += 52i64;
  }
  while ( (__int64)v18 < m_size_low );
  v13 = v83;
  v17 = v84;
  p_velocity = v91;
  v5 = inOutAppliedInstantaneousVelocity;
  p_refFrame = &pm->refFrame;
LABEL_65:
  v67 = v11 + v14;
  v69 = v12;
  v68 = *(float *)&v12 + v15;
  v70 = v13 + v16;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionMaxMoverPenetrationVelocity, "playerCharacterCollisionMaxMoverPenetrationVelocity");
  v72 = *(float *)&Float_Internal_DebugName + fsqrt(v17);
  *(float *)&v69 = fsqrt((float)((float)(v68 * v68) + (float)(v67 * v67)) + (float)(v70 * v70));
  _XMM4 = v69;
  __asm
  {
    vcmpless xmm0, xmm4, xmm9
    vblendvps xmm1, xmm4, xmm15, xmm0
  }
  if ( *(float *)&v69 > v72 )
  {
    v67 = (float)((float)(1.0 / *(float *)&_XMM1) * v67) * v72;
    v68 = (float)((float)(1.0 / *(float *)&_XMM1) * v68) * v72;
    v70 = (float)((float)(1.0 / *(float *)&_XMM1) * v70) * v72;
  }
  vec.v[0] = v67 + vec.v[0];
  vec.v[1] = v68 + vec.v[1];
  vec.v[2] = v70 + vec.v[2];
  UpContribution = WorldUpReferenceFrame::GetUpContribution(p_refFrame, p_velocity);
  *p_velocity = vec;
  WorldUpReferenceFrame::AddUpContribution(p_refFrame, *(float *)&UpContribution, p_velocity);
  v5->v[0] = v67 + v5->v[0];
  v5->v[1] = v68 + v5->v[1];
  v5->v[2] = v70 + v5->v[2];
LABEL_68:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_ResolvePlayerPenetration
==============
*/
bool PM_ResolvePlayerPenetration(const pmove_t *pm, const vec3_t *origin, const vec3_t *angles, const Bounds *bounds, const vec3_t *hintNormal, int traceMask, bool vehicleTrace, vec3_t *outOrigin, bool *outHadPenetration)
{
  Physics_WorldId v13; 
  bool result; 
  bool v15; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 804, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v13 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  result = BG_ResolvePlayerPenetration(v13, pm->ps, bounds, origin, angles, hintNormal, traceMask, vehicleTrace, outOrigin, &v15);
  if ( outHadPenetration )
    *outHadPenetration = v15;
  return result;
}

/*
==============
PM_ResolveVehiclePlatform
==============
*/
void PM_ResolveVehiclePlatform(pmove_t *pm, pml_t *pml, vec3_t *inOutAppliedInstantaneousVelocity)
{
  playerState_s *ps; 
  const dvar_t *v6; 
  float value; 
  int m_movingPlatformEntity; 
  const entityState_t *EntityState; 
  int clientNum; 
  BgAntiLag *antiLag; 
  __int128 v12; 
  bool v14; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  tmat33_t<vec3_t> axis; 
  vec3_t outOrigin; 
  BgAntiLagEntityInfo outInfo; 

  ps = pm->ps;
  if ( !BG_IsPlayerLinked(ps) )
  {
    v6 = DCONST_DVARMPFLT_bg_pushPlayerOffVehicleSpeed;
    if ( !DCONST_DVARMPFLT_bg_pushPlayerOffVehicleSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pushPlayerOffVehicleSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
    if ( value > 0.0 )
    {
      if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
      {
        if ( pm->antiLag )
        {
          if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xDu) )
          {
            m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
            EntityState = BG_GetEntityState(pm->m_bgHandler, m_movingPlatformEntity);
            if ( BG_IsVehicleEntity(EntityState) && (EntityState->lerp.u.anonymous.data[1] & 0x40000) != 0 )
            {
              clientNum = ps->clientNum;
              antiLag = (BgAntiLag *)pm->antiLag;
              outInfo.boneInfo.boneList.m_usedSize = 0;
              outInfo.boneInfo.boneList.m_maxSize = 0;
              if ( BgAntiLag::GetEntityInfoAtTime(antiLag, clientNum, m_movingPlatformEntity, 0xBu, pm->cmd.serverTime, &outInfo) )
              {
                AnglesToAxis(&outInfo.angles, &axis);
                BgAntiLagEntity_GetOrigin(&outInfo, &outOrigin);
                v12 = LODWORD(outInfo.velocity.v[0]);
                *(float *)&v12 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(outInfo.velocity.v[1] * outInfo.velocity.v[1])) + (float)(outInfo.velocity.v[2] * outInfo.velocity.v[2]));
                _XMM11 = v12;
                v14 = *(float *)&v12 <= 1.0;
                __asm
                {
                  vcmpless xmm0, xmm11, cs:__real@80000000
                  vblendvps xmm0, xmm11, xmm13, xmm0
                }
                v18 = LODWORD(outInfo.velocity.v[1]);
                *(float *)&v18 = outInfo.velocity.v[1] * (float)(1.0 / *(float *)&_XMM0);
                v17 = v18;
                v40 = outInfo.velocity.v[2] * (float)(1.0 / *(float *)&_XMM0);
                v19 = ps->origin.v[0] - outOrigin.v[0];
                v20 = ps->origin.v[2] - outOrigin.v[2];
                v21 = outInfo.velocity.v[0] * (float)(1.0 / *(float *)&_XMM0);
                v23 = LODWORD(ps->origin.v[1]);
                v22 = ps->origin.v[1] - outOrigin.v[1];
                *(float *)&v23 = (float)((float)(v22 * axis.m[2].v[1]) + (float)(v19 * axis.m[2].v[0])) + (float)(v20 * axis.m[2].v[2]);
                v24 = v23 ^ _xmm;
                *(float *)&_XMM0 = COERCE_FLOAT(v23 ^ _xmm) * axis.m[2].v[1];
                v25 = v24;
                *(float *)&v25 = *(float *)&v24 * axis.m[2].v[0];
                v26 = *(float *)&_XMM0 + v22;
                v27 = (float)(*(float *)&v24 * axis.m[2].v[2]) + v20;
                *(float *)&v25 = *(float *)&v25 + v19;
                v28 = v25;
                if ( !v14 )
                {
                  v29 = v17;
                  *(float *)&v29 = (float)(*(float *)&v17 * *(float *)&_XMM11) + *(float *)&v28;
                  v28 = v29;
                  v27 = (float)(*(float *)&_XMM11 * v40) + v27;
                  v26 = v26 - (float)(v21 * *(float *)&_XMM11);
                }
                v30 = v28;
                *(float *)&v30 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(v26 * v26)) + (float)(v27 * v27));
                _XMM3 = v30;
                v14 = *(float *)&v30 <= 0.0;
                __asm
                {
                  vcmpless xmm0, xmm3, cs:__real@80000000
                  vblendvps xmm0, xmm3, xmm13, xmm0
                }
                v34 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v28;
                v35 = v26 * (float)(1.0 / *(float *)&_XMM0);
                v36 = v27 * (float)(1.0 / *(float *)&_XMM0);
                if ( v14 )
                {
                  v37 = axis.m[1].v[0] * value;
                  v36 = axis.m[1].v[2];
                  v38 = axis.m[1].v[1] * value;
                }
                else
                {
                  v37 = v34 * value;
                  v38 = v35 * value;
                }
                ps->velocity.v[0] = v37 + ps->velocity.v[0];
                ps->velocity.v[1] = v38 + ps->velocity.v[1];
                ps->velocity.v[2] = (float)(v36 * value) + ps->velocity.v[2];
                v39 = v38 + inOutAppliedInstantaneousVelocity->v[1];
                inOutAppliedInstantaneousVelocity->v[0] = v37 + inOutAppliedInstantaneousVelocity->v[0];
                inOutAppliedInstantaneousVelocity->v[2] = (float)(v36 * value) + inOutAppliedInstantaneousVelocity->v[2];
                inOutAppliedInstantaneousVelocity->v[1] = v39;
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
PM_SetAlmostGroundPlane
==============
*/
void PM_SetAlmostGroundPlane(pmove_t *pm, bool newValue)
{
  pm->ground->almostGroundPlane = newValue;
  pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, newValue);
}

/*
==============
PM_SetRideMover
==============
*/
void PM_SetRideMover(pmove_t *pm, trace_t *trace)
{
  int EntityHitId; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2844, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2845, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  EntityHitId = Trace_GetEntityHitId(trace);
  if ( trace->hitType != TRACE_HITTYPE_ENTITY || EntityHitId == 2046 )
    EntityHitId = 2047;
  BgPlayerTraceInfo::SetRideMover(pm->m_playerTraceInfo, pm->antiLag, pm->cmd.serverTime, EntityHitId, pm->m_bgHandler, pm->ps);
}

/*
==============
PM_UpdateGround
==============
*/
void PM_UpdateGround(pmove_t *pm, pml_t *pml, trace_t *trace)
{
  pm->ground->trace = *trace;
  WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(&pm->refFrame, pm, pml, trace);
}

/*
==============
PM_UpdatePlayerCollision
==============
*/
void PM_UpdatePlayerCollision(pmove_t *pm, pml_t *pml, int gravity, int bCheckFootsteps, int ignoreImpulseFields, bool performSlideMove)
{
  signed __int64 v6; 
  void *v7; 
  playerState_s *ps; 
  BgAntiLagEntityInfo *p_infoList; 
  __int64 v13; 
  unsigned int v14; 
  playerState_s *v15; 
  int serverTime; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  BgAntiLagEntityInfo *p_outInfoList; 
  __int64 v20; 
  const char *v21; 
  unsigned int v22; 
  bool v23; 
  const dvar_t *v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  WorldUpReferenceFramePM *p_refFrame; 
  const dvar_t *v37; 
  char v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  double v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  char *fmt; 
  unsigned int *outNumInfoItems; 
  __int64 v54; 
  bool hasMoverPenetration; 
  unsigned int v56; 
  int bCheckFootstepsa; 
  __int64 v58; 
  vec3_t outAppliedInstantaneousVelocity; 
  vec3_t outOrigin; 
  vec3_t vec; 
  vec3_t outCustomGravityDir; 
  WorldUpReferenceFrame v63; 
  BgAntiLagEntityInfo infoList; 
  BgAntiLagEntityInfo outInfoList; 

  v7 = alloca(v6);
  v58 = -2i64;
  bCheckFootstepsa = bCheckFootsteps;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2547, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2548, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdatePlayerCollision");
  PM_DebugMispredict(pm, 4, NULL);
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2557, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Debug_TestPlayerCollisionPoint(pm);
  vec = ps->velocity;
  PM_Door_Update(pm, pml);
  p_infoList = &infoList;
  v13 = 2i64;
  do
  {
    BgAntiLagEntityInfo::BgAntiLagEntityInfo(p_infoList++);
    --v13;
  }
  while ( v13 );
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_GetClosestPlayers");
  if ( pm->antiLag )
  {
    v15 = pm->ps;
    serverTime = pm->cmd.serverTime;
    v56 = 0;
    v17 = DCONST_DVARBOOL_antilagUseClosestCharacters;
    if ( !DCONST_DVARBOOL_antilagUseClosestCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagUseClosestCharacters") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      BgAntiLag::GetClosestCharacters((BgAntiLag *)pm->antiLag, v15->clientNum, 0x59u, serverTime, 2u, &v56, &infoList);
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1037, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      BgAntiLag::GetEntityInfoListAtTime((BgAntiLag *)pm->antiLag, v15->clientNum, 0x59u, serverTime, 0xF8u, &v56, &infoList);
    }
    v14 = v56;
    Sys_ProfEndNamedEvent();
  }
  else
  {
    Sys_ProfEndNamedEvent();
    v14 = 0;
  }
  PM_ResolveCharacterCollision(pm, pml, &outAppliedInstantaneousVelocity, &infoList, v14);
  PM_Door_ResolveCollisions(pm, pml, &outAppliedInstantaneousVelocity, &performSlideMove, &infoList, v14);
  PM_ButtCollision_Resolve(pm, pml, &outAppliedInstantaneousVelocity, &infoList, v14);
  PM_LastStandCollision_Resolve(pm, pml, &outAppliedInstantaneousVelocity);
  PM_ResolveVehiclePlatform(pm, pml, &outAppliedInstantaneousVelocity);
  PM_Turret_ApplyVelocity(pm, pml, &outAppliedInstantaneousVelocity);
  v18 = DCONST_DVARINT_debug_player_collision;
  if ( !DCONST_DVARINT_debug_player_collision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debug_player_collision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.integer == ps->clientNum )
  {
    if ( pm->antiLag )
    {
      p_outInfoList = &outInfoList;
      v20 = 248i64;
      do
      {
        BgAntiLagEntityInfo::BgAntiLagEntityInfo(p_outInfoList++);
        --v20;
      }
      while ( v20 );
      BgAntiLag::GetEntityInfoListAtTime((BgAntiLag *)pm->antiLag, ps->clientNum, 0x59u, pm->cmd.serverTime, 0xF8u, &v56, &outInfoList);
      if ( v56 )
      {
        v21 = "server";
        if ( Sys_IsMainThread() )
          v21 = "client";
        BgAntiLagEntity_GetOrigin(&outInfoList, &outOrigin);
        LODWORD(fmt) = pm->cmd.commandTime;
        Com_Printf(0, "%s %d %d - %f %f %f - %f %f %f - %f %f %f\n", v21, (unsigned int)pm->cmd.serverTime, fmt, outAppliedInstantaneousVelocity.v[0], outAppliedInstantaneousVelocity.v[1], outAppliedInstantaneousVelocity.v[2], outOrigin.v[0], outOrigin.v[1], outOrigin.v[2], outInfoList.velocity.v[0], outInfoList.velocity.v[1], outInfoList.velocity.v[2]);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
  v22 = 0;
  if ( MAX_MOVER_ITERATIONS )
  {
    while ( 1 )
    {
      v23 = 0;
      hasMoverPenetration = 0;
      v24 = DCONST_DVARBOOL_usePmoveMoverSystem;
      if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v24->current.enabled )
      {
        PM_ResolveMoverCollision(pm, pml, &outAppliedInstantaneousVelocity, &hasMoverPenetration);
        v23 = hasMoverPenetration;
      }
      if ( !v22 || v23 )
      {
        if ( performSlideMove || (outOrigin.v[0] = 0.0, outOrigin.v[1] = 0.0, outOrigin.v[2] = 0.0, !VecNCompareCustomEpsilon(outAppliedInstantaneousVelocity.v, outOrigin.v, 0.001, 3)) )
        {
          if ( v23 )
            pm->m_trace->m_flags |= 8u;
          PM_StepSlideMove(pm, pml, gravity, bCheckFootstepsa, ignoreImpulseFields);
          if ( v23 )
            pm->m_trace->m_flags &= ~8u;
        }
      }
      if ( outAppliedInstantaneousVelocity.v[0] == 0.0 && outAppliedInstantaneousVelocity.v[1] == 0.0 && outAppliedInstantaneousVelocity.v[2] == 0.0 )
        goto LABEL_77;
      v25 = ps->velocity.v[0] - outAppliedInstantaneousVelocity.v[0];
      v26 = ps->velocity.v[1] - outAppliedInstantaneousVelocity.v[1];
      v27 = ps->velocity.v[2] - outAppliedInstantaneousVelocity.v[2];
      v28 = LODWORD(vec.v[1]);
      *(float *)&v28 = (float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]);
      if ( *(float *)&v28 > 0.0 )
      {
        *(float *)&v28 = fsqrt(*(float *)&v28);
        _XMM1 = v28;
        __asm
        {
          vcmpless xmm0, xmm1, xmm13
          vblendvps xmm1, xmm1, xmm12, xmm0
        }
        v32 = vec.v[0] * (float)(1.0 / *(float *)&_XMM1);
        v33 = vec.v[1] * (float)(1.0 / *(float *)&_XMM1);
        v34 = vec.v[2] * (float)(1.0 / *(float *)&_XMM1);
        v35 = (float)((float)(v26 * v33) + (float)(v25 * v32)) + (float)(v34 * v27);
        if ( v35 < 0.0 )
        {
          v25 = (float)(v32 * COERCE_FLOAT(LODWORD(v35) ^ _xmm)) + v25;
          v26 = (float)(v33 * COERCE_FLOAT(LODWORD(v35) ^ _xmm)) + v26;
          v27 = (float)(v34 * COERCE_FLOAT(LODWORD(v35) ^ _xmm)) + v27;
        }
      }
      if ( gravity )
      {
        if ( WorldUpReferenceFramePM::GetCustomSlideMoveGravityDir(&pm->refFrame, pm, &outCustomGravityDir) )
        {
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v63);
          WorldUpReferenceFrame::InitFromNormal(&v63, &outCustomGravityDir);
          p_refFrame = (WorldUpReferenceFramePM *)&v63;
        }
        else
        {
          p_refFrame = &pm->refFrame;
        }
        WorldUpReferenceFrame::AddUpContribution(p_refFrame, (float)-ps->gravity * pml->frametime, &vec);
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE_COOLDOWN|0x80) )
        goto LABEL_66;
      v37 = DVARBOOL_killswitch_instantaneous_velocity_fall_fix_enabled;
      if ( !DVARBOOL_killswitch_instantaneous_velocity_fall_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_instantaneous_velocity_fall_fix_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      if ( v37->current.enabled && BG_IsInAir(ps, pm->ground->almostGroundPlane) )
      {
        v38 = 1;
        v39 = fsqrt((float)(v26 * v26) + (float)(v25 * v25));
        v40 = (float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0]);
      }
      else
      {
LABEL_66:
        v38 = 0;
        v39 = fsqrt((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27));
        v40 = (float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]);
      }
      v41 = fsqrt(v40);
      if ( v39 > v41 )
      {
        if ( v38 )
        {
          if ( v41 > 0.0 )
          {
            v42 = v41 / v39;
LABEL_75:
            v26 = v26 * v42;
            v25 = v25 * v42;
            goto LABEL_76;
          }
          v25 = 0.0;
          v26 = 0.0;
        }
        else
        {
          if ( v41 > 0.0 )
          {
            v42 = v41 / v39;
            v27 = v27 * (float)(v41 / v39);
            goto LABEL_75;
          }
          v25 = 0.0;
          v26 = 0.0;
          v27 = 0.0;
        }
      }
LABEL_76:
      ps->velocity.v[0] = v25;
      ps->velocity.v[1] = v26;
      ps->velocity.v[2] = v27;
LABEL_77:
      if ( v23 )
      {
        v43 = DCONST_DVARINT_debug_player_collision;
        if ( !DCONST_DVARINT_debug_player_collision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debug_player_collision") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v43);
        if ( v43->current.integer == ps->clientNum && v22 )
          Com_Printf(0, "Performing multiple penetration resolves. %d\n", v22);
        outAppliedInstantaneousVelocity.v[0] = 0.0;
        outAppliedInstantaneousVelocity.v[1] = 0.0;
        outAppliedInstantaneousVelocity.v[2] = 0.0;
        if ( ++v22 < MAX_MOVER_ITERATIONS )
          continue;
      }
      break;
    }
  }
  v44 = DVARBOOL_killswitch_butt_collision_velocity_clipping_enabled;
  if ( !DVARBOOL_killswitch_butt_collision_velocity_clipping_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_butt_collision_velocity_clipping_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  if ( v44->current.enabled && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_LADDER_AIM|0x80) && !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2010, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_CROUCH_BUTT_COLLISION ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_LAST_STAND_COLLISION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_CROUCH_BUTT_COLLISION ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_LAST_STAND_COLLISION )") )
      __debugbreak();
    if ( ps->velocityClipDir > 0x100u )
    {
      LODWORD(v54) = 256;
      LODWORD(outNumInfoItems) = ps->velocityClipDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2011, ASSERT_TYPE_ASSERT, "( 0 ) <= ( ps->velocityClipDir ) && ( ps->velocityClipDir ) <= ( (1 << 8) )", "ps->velocityClipDir not in [0, MOVEMENTDIR_360_DEGREES]\n\t%i not in [%i, %i]", outNumInfoItems, 0i64, v54) )
        __debugbreak();
    }
    outOrigin.v[0] = 0.0;
    outOrigin.v[1] = 0.0;
    outOrigin.v[2] = 0.0;
    v45 = BG_MovementDirToDegrees(ps->velocityClipDir);
    outOrigin.v[1] = *(float *)&v45;
    AngleVectors(&outOrigin, &outCustomGravityDir, NULL, NULL);
    v46 = ps->velocity.v[1];
    v47 = ps->velocity.v[0];
    v48 = ps->velocity.v[2];
    v49 = outCustomGravityDir.v[1];
    v50 = outCustomGravityDir.v[2];
    v51 = (float)((float)(outCustomGravityDir.v[0] * v47) + (float)(outCustomGravityDir.v[1] * v46)) + (float)(outCustomGravityDir.v[2] * v48);
    if ( v51 < 0.0 )
    {
      ps->velocity.v[0] = (float)(COERCE_FLOAT(LODWORD(v51) ^ _xmm) * outCustomGravityDir.v[0]) + v47;
      ps->velocity.v[1] = (float)(COERCE_FLOAT(LODWORD(v51) ^ _xmm) * v49) + v46;
      ps->velocity.v[2] = (float)(COERCE_FLOAT(LODWORD(v51) ^ _xmm) * v50) + v48;
    }
  }
  PM_Debug_TestPlayerCollisionPoint(pm);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_playerTrace
==============
*/
void PM_playerTrace(const pmove_t *const pm, trace_t *const outResults, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, bool allowCheapPointQueries, PhysicsQuery_ContextSettings *traceContext)
{
  PhysicsQuery_ContextSettings *v15; 
  bool v16; 
  const vec4_t *v17; 
  int v18; 
  BG_PMove_Cage *cage; 
  const char *v20; 
  Physics_WorldId v21; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3967, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3968, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !pm->m_playerTraceInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3969, ASSERT_TYPE_ASSERT, "(pm->m_playerTraceInfo)", (const char *)&queryFormat, "pm->m_playerTraceInfo") )
    __debugbreak();
  v15 = traceContext;
  if ( traceContext && (traceContext->m_flags & 1) == 0 && bounds->halfSize.v[0] > 0.0 )
  {
    v16 = VecNCompareCustomEpsilon(start->v, end->v, 0.001, 3);
    v17 = &colorBlue;
    if ( !v16 )
      v17 = &colorRed;
    PM_PlayerCollision_DrawCapsule(pm, bounds, start, v17);
  }
  v18 = contentMask;
  cage = BgPlayerTraceInfo::BuildCage(pm->m_playerTraceInfo, &pm->ps->origin, start, end, bounds, contentMask);
  pm->m_playerTraceInfo->StartTracePerfProbe(pm->m_playerTraceInfo);
  v20 = "PMove Trace No Cage";
  if ( cage )
    v20 = "PMove Trace Cage";
  Sys_ProfBeginNamedEvent(0xFF9400D3, v20);
  v21 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  PhysicsQuery_LegacyCapsuleTraceIgnoreBodies(v21, outResults, start, end, bounds, &passEntityNum, 1, ignoreBodies, numIgnoreBodies, v18 & 0xFDFFBFFF, pm->ps, allowCheapPointQueries, cage, v15);
  Sys_ProfEndNamedEvent();
  pm->m_playerTraceInfo->EndTracePerfProbe(pm->m_playerTraceInfo);
}

/*
==============
PM_trace
==============
*/
void PM_trace(const pmove_t *pm, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask)
{
  Physics_WorldId v11; 

  v11 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  BgTrace::LegacyTraceHandler(pm->m_trace, v11, results, start, end, bounds, passEntityNum, contentMask, pm->ps);
}

/*
==============
PM_traceHandler
==============
*/
void PM_traceHandler(const BgPlayerTraceInfo *traceInfo, Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask, const playerState_s *ps, PhysicsQuery_ContextSettings *traceContext)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v13; 
  const playerState_s *v14; 
  int v15; 
  BG_PMove_Cage *cage; 
  const char *v17; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v13 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPM_traceHandler");
  v14 = ps;
  v15 = contentMask;
  cage = BgPlayerTraceInfo::BuildCage((BgPlayerTraceInfo *)traceInfo, &ps->origin, start, end, bounds, contentMask);
  traceInfo->StartTracePerfProbe((BgPlayerTraceInfo *)traceInfo);
  v17 = "PMove Trace No Cage";
  if ( cage )
    v17 = "PMove Trace Cage";
  Sys_ProfBeginNamedEvent(0xFF9400D3, v17);
  PhysicsQuery_LegacyCapsuleTrace(worldId, results, start, end, bounds, &passEntityNum, 1, v15, v14, 0, cage, traceContext);
  Sys_ProfEndNamedEvent();
  traceInfo->EndTracePerfProbe((BgPlayerTraceInfo *)traceInfo);
  if ( v13 )
    hkMonitorStream::timerEnd(v13, "Et");
}

/*
==============
PM_traceHandlerRotated
==============
*/
void PM_traceHandlerRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, int passEntityNum, int contentMask)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v13; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v13 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPM_traceHandler");
  PhysicsQuery_LegacyTraceRotated(worldId, results, start, end, angles, bounds, passEntityNum, 0, contentMask, 0, NULL, All);
  if ( v13 )
    hkMonitorStream::timerEnd(v13, "Et");
}

/*
==============
PM_traceIgnoreList
==============
*/
void PM_traceIgnoreList(const pmove_t *pm, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *ignoreEntities, int numIgnoreEntities, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, bool allowCheapPointQueries, BG_PMove_Cage *cage, PhysicsQuery_ContextSettings *traceContext)
{
  Physics_WorldId v17; 

  v17 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  PhysicsQuery_LegacyCapsuleTraceIgnoreBodies(v17, results, start, end, bounds, ignoreEntities, numIgnoreEntities, ignoreBodies, numIgnoreBodies, contentMask, pm->ps, allowCheapPointQueries, cage, traceContext);
}

