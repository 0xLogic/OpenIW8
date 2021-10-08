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
  char v9; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 204, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(_RBX);
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@3f000000
    vmovss  xmm1, dword ptr [rbx+14h]
    vsubss  xmm0, xmm1, dword ptr [rbx+0Ch]
    vsubss  xmm2, xmm0, xmm6
    vmovss  dword ptr [rbx+14h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 214, ASSERT_TYPE_ASSERT, "((bounds->halfSize[2] - halfStickHeight) >= 0.0f)", (const char *)&queryFormat, "(bounds->halfSize[2] - halfStickHeight) >= 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+14h], xmm1
    vaddss  xmm0, xmm6, dword ptr [rbx+8]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
BG_PlayerCollision_GetCollisionStickLength
==============
*/
float BG_PlayerCollision_GetCollisionStickLength(const Bounds *bounds)
{
  char v10; 
  char v13; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = bounds;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 178, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vsubss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm7, xmm1, cs:__real@40000000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm7, xmm8
  }
  _RBX = DCONST_DVARMPFLT_playerCollisionStandingStickHeight;
  if ( !DCONST_DVARMPFLT_playerCollisionStandingStickHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionStandingStickHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vdivss  xmm6, xmm0, cs:STANDING_CYLINDER_PART_OF_CAPSULE_REFERENCE
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !(v10 | v13) )
    goto LABEL_15;
  __asm { vcomiss xmm6, xmm8 }
  if ( v10 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 195, ASSERT_TYPE_ASSERT, "(stickHeightFraction <= 1.0f && stickHeightFraction >= 0.0f)", (const char *)&queryFormat, "stickHeightFraction <= 1.0f && stickHeightFraction >= 0.0f") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm8, [rsp+78h+var_38]
    vmulss  xmm0, xmm6, xmm7
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_PlayerSecondaryCollision_ClipToVelocityPlane
==============
*/
void BG_PlayerSecondaryCollision_ClipToVelocityPlane(const playerState_s *const ps, vec3_t *inOutPlayerVelocity)
{
  int velocityClipDir; 
  char v24; 
  __int64 v36; 
  int v37; 
  vec3_t angles; 
  vec3_t forward; 

  _RBX = inOutPlayerVelocity;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u) )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_18], xmm6
      vmovaps [rsp+0C8h+var_28], xmm7
      vmovaps [rsp+0C8h+var_38], xmm8
      vmovaps [rsp+0C8h+var_48], xmm9
      vmovaps [rsp+0C8h+var_58], xmm10
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_LADDER_AIM|0x80) && !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2010, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_CROUCH_BUTT_COLLISION ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_LAST_STAND_COLLISION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_CROUCH_BUTT_COLLISION ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_LAST_STAND_COLLISION )") )
      __debugbreak();
    if ( ps->velocityClipDir > 0x100u )
    {
      v37 = 256;
      LODWORD(v36) = ps->velocityClipDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2011, ASSERT_TYPE_ASSERT, "( 0 ) <= ( ps->velocityClipDir ) && ( ps->velocityClipDir ) <= ( (1 << 8) )", "ps->velocityClipDir not in [0, MOVEMENTDIR_360_DEGREES]\n\t%i not in [%i, %i]", v36, 0i64, v37) )
        __debugbreak();
    }
    velocityClipDir = ps->velocityClipDir;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rsp+0C8h+angles], xmm6
      vmovss  dword ptr [rsp+0C8h+angles+4], xmm6
      vmovss  dword ptr [rsp+0C8h+angles+8], xmm6
    }
    *(double *)&_XMM0 = BG_MovementDirToDegrees(velocityClipDir);
    __asm { vmovss  dword ptr [rsp+0C8h+angles+4], xmm0 }
    AngleVectors(&angles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+4]
      vmovss  xmm5, dword ptr [rbx]
      vmovss  xmm8, dword ptr [rsp+0C8h+forward]
      vmovss  xmm9, dword ptr [rsp+0C8h+forward+4]
      vmovss  xmm7, dword ptr [rbx+8]
      vmovss  xmm10, dword ptr [rsp+0C8h+forward+8]
      vmulss  xmm1, xmm5, xmm8
      vmulss  xmm0, xmm4, xmm9
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm10
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+0C8h+var_18]
    }
    if ( v24 )
    {
      __asm
      {
        vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm8, xmm3
        vaddss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm9, xmm3
        vaddss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rbx], xmm1
        vmulss  xmm1, xmm10, xmm3
        vaddss  xmm2, xmm1, xmm7
        vmovss  dword ptr [rbx+8], xmm2
        vmovss  dword ptr [rbx+4], xmm0
      }
    }
    __asm
    {
      vmovaps xmm9, [rsp+0C8h+var_48]
      vmovaps xmm8, [rsp+0C8h+var_38]
      vmovaps xmm7, [rsp+0C8h+var_28]
      vmovaps xmm10, [rsp+0C8h+var_58]
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
  char v6; 

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
  _RBX = DVARFLT_playerButtCollisionOffset;
  if ( !DVARFLT_playerButtCollisionOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  return !v6 && (PM_GetEffectiveStanceForWorldModelAnimation(ps) & 0xFFFFFFFD) == 0 && BG_PlayerSecondaryCollision_IsValidState_Common(ps);
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
bool BG_ResolvePlayerPenetration(const Physics_WorldId worldId, const playerState_s *ps, const Bounds *bounds, const vec3_t *origin, const vec3_t *angles, const vec3_t *hintNormal, int traceMask, bool vehicleTrace, vec3_t *outOrigin, bool *outHadPenetration)
{
  int ignoreEnt; 
  bool result; 
  bool penetrating; 
  bool penetratingBrushBasis; 
  vec3_t penetration; 

  _RSI = outOrigin;
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
  if ( penetrating )
  {
    _RDI = hintNormal;
    __asm
    {
      vmovaps [rsp+108h+var_58], xmm6
      vmovaps [rsp+108h+var_68], xmm7
      vmovaps [rsp+108h+var_78], xmm8
    }
    *outHadPenetration = 1;
    if ( !hintNormal || penetratingBrushBasis )
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rsp+108h+penetration+8]
        vmovss  xmm7, dword ptr [rsp+108h+penetration+4]
        vmovss  xmm6, dword ptr [rsp+108h+penetration]
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [rdi]
        vucomiss xmm0, dword ptr [rdi+4]
        vucomiss xmm0, dword ptr [rdi+8]
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 782, ASSERT_TYPE_ASSERT, "(Vec3NotZero( *hintNormal ))", (const char *)&queryFormat, "Vec3NotZero( *hintNormal )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+108h+penetration]
        vmovss  xmm7, dword ptr [rsp+108h+penetration+4]
        vmovss  xmm8, dword ptr [rsp+108h+penetration+8]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm0, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm5, xmm1, xmm0
        vmulss  xmm0, xmm7, xmm5
        vmulss  xmm3, xmm0, dword ptr [rdi+4]
        vmulss  xmm1, xmm6, xmm5
        vmulss  xmm2, xmm1, dword ptr [rdi]
        vmulss  xmm0, xmm8, xmm5
        vmulss  xmm1, xmm0, dword ptr [rdi+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, cs:__real@ba83126f
      }
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rsi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rbx+4]
      vmovss  dword ptr [rsi+4], xmm1
      vaddss  xmm0, xmm8, dword ptr [rbx+8]
      vmovss  dword ptr [rsi+8], xmm0
    }
    result = 1;
    __asm
    {
      vmovaps xmm7, [rsp+108h+var_68]
      vmovaps xmm6, [rsp+108h+var_58]
      vmovaps xmm8, [rsp+108h+var_78]
    }
  }
  else
  {
    *outOrigin = *origin;
    return 1;
  }
  return result;
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

int __fastcall ComputeFallDamage(playerState_s *ps, pmove_t *pm, double fallHeight)
{
  BgGroundState *ground; 
  char v16; 
  char v17; 
  int result; 
  void *retaddr; 

  _R11 = &retaddr;
  ground = pm->ground;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmm8, xmm2
  }
  if ( (ground->trace.surfaceFlags & 0x1000) != 0 )
  {
    _RBX = DVARFLT_bg_softLandingMinHeight;
    if ( !DVARFLT_bg_softLandingMinHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_softLandingMinHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DVARFLT_bg_softLandingMaxHeight;
    if ( !DVARFLT_bg_softLandingMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_softLandingMaxHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    _RBX = DVARFLT_bg_softLandingMaxDamage;
    if ( !DVARFLT_bg_softLandingMaxDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_softLandingMaxDamage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@42c80000
      vcvttss2si eax, xmm1
    }
  }
  else
  {
    _RBX = DVARFLT_bg_fallDamageMinHeight;
    if ( !DVARFLT_bg_fallDamageMinHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_fallDamageMinHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DVARFLT_bg_fallDamageMaxHeight;
    if ( !DVARFLT_bg_fallDamageMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_fallDamageMaxHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    result = 100;
  }
  __asm { vcomiss xmm6, xmm7 }
  if ( v16 )
  {
    __asm
    {
      vcvtss2sd xmm3, xmm7, xmm7
      vcvtss2sd xmm2, xmm6, xmm6
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_Printf(17, "Invalid bg_fall*Height: max (%f) must be greater than min (%f)\n", *(double *)&_XMM2, *(double *)&_XMM3);
LABEL_21:
    result = 0;
    goto LABEL_22;
  }
  __asm { vcomiss xmm8, xmm7 }
  if ( v16 | v17 || (pm->ground->trace.surfaceFlags & 1) != 0 || ps->pm_type >= 7 )
    goto LABEL_21;
  __asm { vcomiss xmm8, xmm6 }
  if ( ps->pm_type < 7u )
  {
    __asm
    {
      vsubss  xmm1, xmm8, xmm7
      vsubss  xmm0, xmm6, xmm7
      vdivss  xmm2, xmm1, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm2, xmm2, xmm1
      vcvttss2si eax, xmm2
    }
  }
LABEL_22:
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
  return result;
}

/*
==============
PM_ButtCollision_Resolve
==============
*/
void PM_ButtCollision_Resolve(pmove_t *pm, pml_t *pml, vec3_t *outAppliedInstantaneousVelocity, BgAntiLagEntityInfo *infoList)
{
  Physics_WorldId v20; 
  char v21; 
  char v22; 
  EffectiveStance EffectiveStanceForWorldModelAnimation; 
  int secondaryCollisionStartTime; 
  int v62; 
  bool v63; 
  bool v64; 
  const dvar_t *v71; 
  bool v100; 
  bool v101; 
  const dvar_t *v102; 
  int tracemask; 
  double contentMask; 
  double contentMaska; 
  playerState_s *ps; 
  playerState_s *psa; 
  playerState_s *psb; 
  vec3_t start; 
  vec3_t outUp; 
  vec2_t vec; 
  Bounds bounds; 
  trace_t results; 
  char v180; 
  void *retaddr; 

  _RAX = &retaddr;
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
  _R12 = pml;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ButtCollision_Resolve");
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm10, dword ptr [r12+24h]
  }
  if ( v21 )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2057, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    _RBX = pm->ps;
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2057, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&_RBX->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u);
    if ( BG_PlayerSecondaryCollision_IsValidState_ButtCollision(_RBX) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) && PM_GetEffectiveStanceForWorldModelAnimation(_RBX) == PM_EFF_STANCE_LASTSTANDCRAWL && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 0xBu) && BG_PlayerSecondaryCollision_IsValidState_Common(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2066, ASSERT_TYPE_ASSERT, "(!BG_PlayerSecondaryCollision_IsValidState_LastStand( ps ))", (const char *)&queryFormat, "!BG_PlayerSecondaryCollision_IsValidState_LastStand( ps )") )
        __debugbreak();
      if ( _RBX->secondaryCollisionStartTime <= 0 )
        _RBX->secondaryCollisionStartTime = _RBX->serverTime;
      if ( (pm->cmd.buttons & 0x800000000i64) != 0 )
      {
        _R15 = BG_GetSuitDef(_RBX->suitIndex);
        if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2081, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
          __debugbreak();
        v20 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
        WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
        __asm
        {
          vmovss  xmm12, dword ptr [r12]
          vmovss  xmm8, dword ptr [r12+4]
          vmovss  xmm9, dword ptr [r12+8]
          vmovss  xmm3, dword ptr [rsp+1F0h+outUp+4]
          vmulss  xmm1, xmm3, xmm8
          vmovss  xmm4, dword ptr [rsp+1F0h+outUp]
          vmulss  xmm0, xmm4, xmm12
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm5, dword ptr [rbp+0F0h+outUp+8]
          vmulss  xmm1, xmm5, xmm9
          vaddss  xmm0, xmm2, xmm1
          vmovss  xmm11, cs:__real@3f800000
          vmovss  xmm13, cs:__real@3a83126f
          vcomiss xmm0, xmm13
        }
        if ( !(v21 | v22) )
        {
          __asm
          {
            vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
            vmulss  xmm0, xmm4, xmm1
            vaddss  xmm7, xmm0, xmm12
            vmulss  xmm0, xmm3, xmm1
            vaddss  xmm8, xmm0, xmm8
            vmulss  xmm0, xmm5, xmm1
            vaddss  xmm9, xmm0, xmm9
            vmulss  xmm1, xmm7, xmm7
            vmulss  xmm0, xmm8, xmm8
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm9, xmm9
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm6, xmm2, xmm2
            vcvtss2sd xmm0, xmm6, xmm6
            vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
          }
          if ( v21 | v22 )
          {
            __asm
            {
              vmovsd  [rsp+1F0h+ps], xmm0
              vmovsd  xmm0, cs:__real@3eb0c6f7a0000000
              vmovsd  qword ptr [rsp+1F0h+contentMask], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2093, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( Vec3Length( forward ) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "Vec3Length( forward )", contentMask, *(double *)&psa) )
              __debugbreak();
          }
          __asm
          {
            vcmpless xmm0, xmm6, cs:__real@80000000
            vblendvps xmm1, xmm6, xmm11, xmm0
            vdivss  xmm0, xmm11, xmm1
            vmulss  xmm12, xmm7, xmm0
            vmulss  xmm8, xmm8, xmm0
            vmulss  xmm9, xmm9, xmm0
          }
        }
        _RDI = DVARFLT_playerButtCollisionTestRadius;
        if ( !DVARFLT_playerButtCollisionTestRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionTestRadius") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm7, dword ptr [rdi+28h] }
        EffectiveStanceForWorldModelAnimation = PM_GetEffectiveStanceForWorldModelAnimation(_RBX);
        *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_RBX, EffectiveStanceForWorldModelAnimation);
        __asm
        {
          vmovss  dword ptr [rbp+0F0h+var_158.midPoint], xmm10
          vmovss  dword ptr [rbp+0F0h+var_158.midPoint+4], xmm10
          vmulss  xmm1, xmm0, cs:__real@3f000000
          vmovss  dword ptr [rbp+0F0h+var_158.midPoint+8], xmm1
          vmovss  dword ptr [rbp+0F0h+var_158.halfSize], xmm7
          vmovss  dword ptr [rbp+0F0h+var_158.halfSize+4], xmm7
          vmovss  dword ptr [rbp+0F0h+var_158.halfSize+8], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r15+220h]
          vcomiss xmm7, xmm0
        }
        if ( !(v21 | v22) )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vcvtss2sd xmm1, xmm7, xmm7
            vmovsd  [rsp+1F0h+ps], xmm0
            vmovsd  qword ptr [rsp+1F0h+contentMask], xmm1
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2106, ASSERT_TYPE_ASSERT, "( capsuleRadius ) <= ( suit->bounds_radius )", "%s <= %s\n\t%g, %g", "capsuleRadius", "suit->bounds_radius", contentMaska, *(double *)&psb) )
            __debugbreak();
        }
        _RDI = DVARFLT_playerButtCollisionBlendTimeSec;
        if ( !DVARFLT_playerButtCollisionBlendTimeSec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionBlendTimeSec") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm6, dword ptr [rdi+28h] }
        secondaryCollisionStartTime = _RBX->secondaryCollisionStartTime;
        v62 = 0;
        v63 = secondaryCollisionStartTime == 0;
        if ( secondaryCollisionStartTime <= 0 )
        {
          LODWORD(ps) = _RBX->secondaryCollisionStartTime;
          v64 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2108, ASSERT_TYPE_ASSERT, "( 0 ) < ( ps->secondaryCollisionStartTime )", "%s < %s\n\t%i, %i", "0", "ps->secondaryCollisionStartTime", 0i64, ps);
          v63 = !v64;
          if ( v64 )
            __debugbreak();
        }
        __asm { vcomiss xmm6, xmm10 }
        if ( v63 )
        {
          __asm { vmovaps xmm0, xmm11 }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm13
            vdivss  xmm0, xmm1, xmm6; val
          }
        }
        __asm
        {
          vmovaps xmm2, xmm11; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
        v71 = DVARFLT_playerButtCollisionOffset;
        if ( !DVARFLT_playerButtCollisionOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerButtCollisionOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v71);
        __asm
        {
          vmulss  xmm0, xmm6, cs:__real@40c00000
          vsubss  xmm1, xmm0, cs:__real@41700000
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, cs:__real@41200000
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm3, xmm1
          vmulss  xmm3, xmm2, dword ptr [rdi+28h]
          vmovss  xmm2, dword ptr [r12+24h]
          vmulss  xmm0, xmm2, dword ptr [rbx+3Ch]
          vaddss  xmm4, xmm0, dword ptr [rbx+30h]
          vmulss  xmm1, xmm2, dword ptr [rbx+40h]
          vaddss  xmm5, xmm1, dword ptr [rbx+34h]
          vmulss  xmm0, xmm2, dword ptr [rbx+44h]
          vaddss  xmm6, xmm0, dword ptr [rbx+38h]
          vmovd   xmm1, dword ptr [r15+220h]
          vcvtdq2ps xmm1, xmm1
          vaddss  xmm2, xmm1, xmm3
          vsubss  xmm3, xmm7, xmm2
          vmulss  xmm0, xmm12, xmm3
          vaddss  xmm7, xmm0, xmm4
          vmulss  xmm1, xmm8, xmm3
          vaddss  xmm14, xmm1, xmm5
          vmulss  xmm0, xmm9, xmm3
          vaddss  xmm15, xmm0, xmm6
          vmovaps xmm2, xmm7
          vmovss  dword ptr [rsp+1F0h+start], xmm7
          vmovaps xmm3, xmm14
          vmovss  dword ptr [rsp+1F0h+start+4], xmm3
          vmovaps xmm0, xmm15
          vmovss  dword ptr [rsp+1F0h+start+8], xmm0
        }
        v100 = 0;
        v101 = maxIterations == 0;
        if ( maxIterations > 0 )
        {
          while ( 1 )
          {
            v102 = DVARBOOL_killswitch_butt_collision_vs_players_enabled;
            if ( !DVARBOOL_killswitch_butt_collision_vs_players_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_butt_collision_vs_players_enabled") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v102);
            tracemask = pm->tracemask;
            if ( !v102->current.enabled )
              tracemask &= 0xFDFFBFFF;
            BgTrace::LegacyTraceHandler(pm->m_trace, v20, &results, &start, &start, &bounds, _RBX->clientNum, tracemask, _RBX);
            __asm
            {
              vmovss  xmm0, [rbp+0F0h+results.fraction]
              vcomiss xmm0, xmm11
            }
            if ( !v100 )
              break;
            __asm
            {
              vmovss  xmm3, dword ptr [rbp+0F0h+results.normal]
              vmulss  xmm1, xmm3, xmm12
              vmovss  xmm5, dword ptr [rbp+0F0h+results.normal+4]
              vmulss  xmm0, xmm5, xmm8
              vaddss  xmm2, xmm1, xmm0
              vmovss  xmm6, dword ptr [rbp+0F0h+results.normal+8]
              vmulss  xmm1, xmm6, xmm9
              vaddss  xmm0, xmm2, xmm1
              vcomiss xmm0, xmm10
            }
            if ( v100 )
              break;
            __asm
            {
              vaddss  xmm4, xmm13, [rbp+0F0h+results.closestPointsPenetration]
              vmulss  xmm2, xmm3, xmm4
              vaddss  xmm2, xmm2, dword ptr [rsp+1F0h+start]
              vmovss  dword ptr [rsp+1F0h+start], xmm2
              vmulss  xmm3, xmm5, xmm4
              vaddss  xmm3, xmm3, dword ptr [rsp+1F0h+start+4]
              vmovss  dword ptr [rsp+1F0h+start+4], xmm3
              vmulss  xmm1, xmm6, xmm4
              vaddss  xmm0, xmm1, dword ptr [rsp+1F0h+start+8]
              vmovss  dword ptr [rsp+1F0h+start+8], xmm0
            }
            v100 = ++v62 < (unsigned int)maxIterations;
            v101 = v62 == maxIterations;
            if ( v62 >= maxIterations )
              goto LABEL_56;
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1F0h+start+8]
            vmovss  xmm3, dword ptr [rsp+1F0h+start+4]
            vmovss  xmm2, dword ptr [rsp+1F0h+start]
          }
        }
LABEL_56:
        __asm
        {
          vsubss  xmm6, xmm2, xmm7
          vsubss  xmm8, xmm3, xmm14
          vsubss  xmm9, xmm0, xmm15
          vmulss  xmm1, xmm8, dword ptr [rsp+1F0h+outUp+4]
          vmulss  xmm0, xmm6, dword ptr [rsp+1F0h+outUp]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rbp+0F0h+outUp+8]
          vaddss  xmm0, xmm2, xmm1
          vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm2, xmm4, dword ptr [rsp+1F0h+outUp]
          vaddss  xmm6, xmm2, xmm6
          vmulss  xmm0, xmm4, dword ptr [rsp+1F0h+outUp+4]
          vaddss  xmm7, xmm0, xmm8
          vmulss  xmm0, xmm4, dword ptr [rbp+0F0h+outUp+8]
          vaddss  xmm8, xmm0, xmm9
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm9, xmm2, xmm1
          vcomiss xmm9, cs:__real@358637be
        }
        if ( !v100 && !v101 )
        {
          __asm { vcomiss xmm10, dword ptr [r12+24h] }
          if ( !v100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2158, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
            __debugbreak();
          __asm
          {
            vdivss  xmm0, xmm11, dword ptr [r12+24h]
            vmulss  xmm2, xmm0, xmm6
            vmulss  xmm3, xmm0, xmm7
            vmulss  xmm4, xmm0, xmm8
            vaddss  xmm0, xmm2, dword ptr [rbx+3Ch]
            vmovss  dword ptr [rbx+3Ch], xmm0
            vaddss  xmm1, xmm3, dword ptr [rbx+40h]
            vmovss  dword ptr [rbx+40h], xmm1
            vaddss  xmm0, xmm4, dword ptr [rbx+44h]
            vmovss  dword ptr [rbx+44h], xmm0
          }
          _RAX = outAppliedInstantaneousVelocity;
          __asm
          {
            vaddss  xmm1, xmm2, dword ptr [rax]
            vmovss  dword ptr [rax], xmm1
            vaddss  xmm0, xmm3, dword ptr [rax+4]
            vmovss  dword ptr [rax+4], xmm0
            vaddss  xmm1, xmm4, dword ptr [rax+8]
            vmovss  dword ptr [rax+8], xmm1
          }
          GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&_RBX->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u);
          __asm
          {
            vsqrtss xmm1, xmm9, xmm9
            vcmpless xmm0, xmm1, cs:__real@80000000
            vblendvps xmm2, xmm1, xmm11, xmm0
            vdivss  xmm3, xmm11, xmm2
            vmulss  xmm0, xmm3, xmm6
            vmovss  dword ptr [rbp+0F0h+vec], xmm0
            vmulss  xmm2, xmm3, xmm7
            vmovss  dword ptr [rbp+0F0h+vec+4], xmm2
            vmulss  xmm0, xmm3, xmm8
            vmovss  [rbp+0F0h+var_160], xmm0
          }
          *(double *)&_XMM0 = vectoyaw(&vec);
          *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          __asm
          {
            vmovss  xmm2, cs:__real@43b40000; max
            vmovaps xmm1, xmm10; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          _RBX->velocityClipDir = BG_DegreesToMovementDir(*(float *)&_XMM0);
        }
      }
    }
    else
    {
      _RBX->secondaryCollisionStartTime = 0;
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v180;
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
}

/*
==============
PM_CharacterCollisionTestIntersect
==============
*/
bool PM_CharacterCollisionTestIntersect(pmove_t *pm, const Bounds *otherBounds, const vec3_t *velDir, const vec3_t *playerOrigin, vec3_t *inOutOtherOrigin, vec3_t *outContactPos, float *outContactTime, float *outMaxPenetration)
{
  int v18; 
  unsigned int v21; 
  char v29; 
  bool result; 
  int v31; 
  unsigned int v34; 
  vec3_t *outHitPoint; 
  __int64 v45; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 972, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !otherBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 973, ASSERT_TYPE_ASSERT, "(otherBounds)", (const char *)&queryFormat, "otherBounds") )
    __debugbreak();
  _RBX = pm->bounds;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 978, ASSERT_TYPE_ASSERT, "(playerBounds)", (const char *)&queryFormat, "playerBounds") )
    __debugbreak();
  v18 = Vec3MajorAxis(&_RBX->halfSize);
  _RDI = v18;
  if ( (unsigned int)v18 >= 3 )
  {
    LODWORD(outHitPoint) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outHitPoint, 3) )
      __debugbreak();
  }
  __asm { vmovss  xmm6, dword ptr [rbx+rdi*4+0Ch] }
  v21 = Vec3MajorAxis(&otherBounds->halfSize);
  if ( v21 >= 3 )
  {
    LODWORD(v45) = 3;
    LODWORD(outHitPoint) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outHitPoint, v45) )
      __debugbreak();
  }
  __asm { vaddss  xmm8, xmm6, dword ptr [rbp+rdi*4+0] }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, playerOrigin);
  __asm { vmovaps xmm9, xmm0 }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &_RBX->midPoint);
  __asm { vaddss  xmm7, xmm0, xmm9 }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &otherBounds->midPoint);
  __asm { vmovaps xmm6, xmm0 }
  WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, inOutOtherOrigin);
  __asm
  {
    vaddss  xmm1, xmm6, xmm0
    vsubss  xmm2, xmm1, xmm7
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, xmm8
  }
  if ( v29 )
  {
    v31 = Vec3MinorAxis(&_RBX->halfSize);
    _RDI = v31;
    if ( (unsigned int)v31 >= 3 )
    {
      LODWORD(v45) = 3;
      LODWORD(outHitPoint) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outHitPoint, v45) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rbx+rdi*4+0Ch] }
    v34 = Vec3MinorAxis(&otherBounds->halfSize);
    if ( v34 >= 3 )
    {
      LODWORD(v45) = 3;
      LODWORD(outHitPoint) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outHitPoint, v45) )
        __debugbreak();
    }
    __asm { vaddss  xmm0, xmm6, dword ptr [rbp+rbx*4+0] }
    _RBX = outMaxPenetration;
    __asm
    {
      vmovaps xmm1, xmm9; height
      vmovss  dword ptr [rbx], xmm0
    }
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, inOutOtherOrigin);
    __asm { vmovss  xmm3, dword ptr [rbx]; radius }
    result = IntersectRaySphere(playerOrigin, velDir, inOutOtherOrigin, *(float *)&_XMM3, outContactTime, outContactPos);
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
  return result;
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
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t correctDeltas; 

  _RSI = trace;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 695, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 695, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = (_RSI->contents & 0x2000000) != 0;
  if ( BGMovingPlatformClient::CorrectPlatformPenetration(pm->movingPlatforms, pm, _RSI, &pm->ps->origin, 0) )
    return 1i64;
  if ( _RSI->hitType == TRACE_HITTYPE_ENTITY )
  {
    hitId = _RSI->hitId;
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
          __asm
          {
            vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
            vmovss  xmm1, dword ptr [rbp+57h+axis+1Ch]
            vmovss  xmm2, dword ptr [rbp+57h+axis+0Ch]
            vmovss  xmm0, dword ptr [rbp+57h+axis+18h]
            vmovss  xmm3, dword ptr [rbp+57h+axis+10h]
            vmovss  xmm4, dword ptr [rbp+57h+axis+14h]
            vmovss  [rbp+57h+var_6C], xmm0
            vmovss  xmm0, dword ptr [rbp+57h+axis+20h]
            vmovss  [rbp+57h+var_64], xmm0
            vmovss  [rbp+57h+var_68], xmm1
            vxorps  xmm1, xmm2, xmm5
            vmovss  [rbp+57h+var_60], xmm1
            vxorps  xmm0, xmm3, xmm5
            vmovss  [rbp+57h+var_5C], xmm0
            vmovss  xmm0, dword ptr [rbp+57h+axis]
            vxorps  xmm1, xmm4, xmm5
            vmovss  [rbp+57h+var_54], xmm0
            vmovss  [rbp+57h+var_58], xmm1
            vmovss  xmm1, dword ptr [rbp+57h+axis+4]
            vxorps  xmm0, xmm0, xmm5
            vmovss  dword ptr [rbp+57h+correctDeltas], xmm2
            vmovss  xmm2, dword ptr [rbp+57h+axis+8]
            vmovss  [rbp+57h+var_48], xmm0
            vmovss  [rbp+57h+var_50], xmm1
            vxorps  xmm0, xmm2, xmm5
            vxorps  xmm1, xmm1, xmm5
            vmovss  [rbp+57h+var_40], xmm0
            vmovss  dword ptr [rbp+57h+correctDeltas+4], xmm3
            vmovss  dword ptr [rbp+57h+correctDeltas+8], xmm4
            vmovss  [rbp+57h+var_4C], xmm2
            vmovss  [rbp+57h+var_44], xmm1
          }
          if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 671, ASSERT_TYPE_ASSERT, "(pm->bounds != nullptr)", (const char *)&queryFormat, "pm->bounds != nullptr") )
            __debugbreak();
          BG_CoverWall_GetGridSize();
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vaddss  xmm3, xmm0, dword ptr [rbx+0Ch]; jitterScale
          }
          if ( PM_JitterPoint(pm, pml, _RSI, *(float *)&_XMM3, &correctDeltas, 5u) )
            return 1i64;
        }
      }
    }
  }
  __asm { vmovss  xmm3, cs:__real@3f800000; jitterScale }
  if ( PM_JitterPoint(pm, pml, _RSI, *(float *)&_XMM3, CorrectSolidDeltas, g_correctAllSolidDeltasCount) )
    return 1i64;
  if ( v7 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_FIRING) && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_player_enableForcePlayerCollision, "player_enableForcePlayerCollision") )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+4]
          vmovss  xmm1, dword ptr [rsi+8]
          vsubss  xmm3, xmm0, dword ptr [rax+30h]
          vsubss  xmm2, xmm1, dword ptr [rax+34h]
          vmulss  xmm3, xmm3, xmm3
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm1, xmm3, xmm0
          vsqrtss xmm3, xmm1, xmm1; jitterScale
        }
        if ( PM_JitterPoint(pm, pml, _RSI, *(float *)&_XMM3, CorrectInsidePlayerDeltas, 0x1Au) )
          return 1i64;
      }
    }
    else
    {
      __asm { vmovss  xmm3, cs:__real@41800000; jitterScale }
      if ( PM_JitterPoint(pm, pml, _RSI, *(float *)&_XMM3, CorrectSolidDeltas, g_correctAllSolidDeltasCount) )
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
  const dvar_t *v9; 
  int v37; 
  int ViewDip; 
  int v39; 
  BgGroundState *ground; 
  int v41; 
  int v49; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  unsigned int v52; 
  entity_event_t LandingEvent; 
  char *fmt; 
  unsigned int *holdrand; 

  _RBX = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2956, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2956, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = DCONST_DVARMPBOOL_player_spaceEnabled;
  if ( !DCONST_DVARMPBOOL_player_spaceEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spaceEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vsubss  xmm1, xmm0, dword ptr [rbp+38h]
    }
    _EAX = ps->gravity;
    __asm
    {
      vmovss  xmm5, cs:__real@3f000000
      vmovss  xmm4, dword ptr [rbx+54h]
      vmovaps [rsp+98h+var_28], xmm6
      vmovss  xmm6, cs:__real@40800000
      vmovaps [rsp+98h+var_38], xmm7
      vmovaps [rsp+98h+var_48], xmm9
      vmovd   xmm7, eax
      vcvtdq2ps xmm7, xmm7
      vxorps  xmm9, xmm7, cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+98h+var_58], xmm10
      vmulss  xmm10, xmm9, xmm5
      vmulss  xmm2, xmm1, xmm10
      vmulss  xmm0, xmm2, xmm6
      vmulss  xmm3, xmm4, xmm4
      vsubss  xmm2, xmm3, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm2, xmm1
      vxorps  xmm3, xmm4, cs:__xmm@80000000800000008000000080000000
      vsqrtss xmm0, xmm2, xmm2
      vsubss  xmm2, xmm3, xmm0
      vdivss  xmm1, xmm5, xmm10
      vmulss  xmm0, xmm2, xmm1
      vmulss  xmm2, xmm0, xmm9
      vsubss  xmm3, xmm3, xmm2
      vmulss  xmm1, xmm3, xmm3
      vdivss  xmm0, xmm5, xmm7
      vmulss  xmm7, xmm1, xmm0
      vmovaps xmm2, xmm7; fallHeight
      vmovaps xmm1, xmm7; fallHeight
    }
    v37 = ComputeFallDamage(ps, pm, *(double *)&_XMM2);
    ViewDip = BG_GetViewDip(ps, *(float *)&_XMM1);
    v39 = PM_GroundSurfaceType(pm);
    if ( v37 )
    {
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LANDING, 0, 0, &_RBX->holdrand);
      ground = pm->ground;
      v41 = ground->trace.surfaceFlags & 0x1000;
      if ( v39 )
        goto LABEL_15;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+48h]
        vmovss  xmm3, dword ptr [rbx+40h]
        vmovss  xmm1, dword ptr [rbx+44h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+98h+holdrand], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+98h+fmt], xmm1
      }
      Com_PrintError((unsigned __int8)v39 + 1, "PM_DamageLandingForSurface has been called with a ground surface of type 'NONE' for material '%s' near (%.2f %.2f %.2f). \nThis means a player has landed on a surface that wasn't properly setup to be used as a ground surface. \nUse a different material which has a surface type set.\n", ground->trace.debugHitName, _R9, fmt, holdrand);
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_fall_damage_fix_enabled, "fall_damage_fix_enabled") )
      {
        v39 = 5;
LABEL_15:
        v49 = BG_PackHardLandingEventParm(pm->weaponMap, ps, v37, v41, ViewDip, v39);
        weaponMap = pm->weaponMap;
        serverTime = pm->cmd.serverTime;
        v52 = v49;
        __asm { vmovaps xmm0, xmm7; fallHeight }
        LandingEvent = BG_GetLandingEvent(*(const float *)&_XMM0, 1);
        BG_AddPredictableEventToPlayerstate(LandingEvent, v52, serverTime, weaponMap, ps);
        if ( ps->skydivePlayerState.state[0] )
        {
          if ( v37 >= 100 )
            ps->skydivePlayerState.state[0] = 6;
        }
      }
    }
    else
    {
      __asm { vcomiss xmm7, xmm6 }
    }
    __asm
    {
      vmovaps xmm6, [rsp+98h+var_28]
      vmovaps xmm7, [rsp+98h+var_38]
      vmovaps xmm9, [rsp+98h+var_48]
      vmovaps xmm10, [rsp+98h+var_58]
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
  CgHandler *v15; 
  int v16; 
  team_t v17; 
  playerState_s *ps; 
  int v21; 
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
    goto LABEL_52;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 0x1Cu) )
    return 0i64;
  if ( ((p_nextState->eType - 1) & 0xFFEF) == 0 )
  {
    _RAX = pm->ps;
    __asm
    {
      vmovss  xmm0, cs:__real@34000000
      vcomiss xmm0, dword ptr [rax+4C0h]
    }
  }
  if ( playerIsAgent )
  {
    if ( PM_EntNumIsAgent(info->entityIndex) )
      return 0i64;
    goto LABEL_52;
  }
  if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_playerCharacterCollisionFriendlySoftPush, "playerCharacterCollisionFriendlySoftPush") )
    goto LABEL_52;
  v15 = (CgHandler *)pm->m_bgHandler;
  v16 = info->entityIndex;
  if ( v15->IsClient(v15) )
    CgHandler::GetPlayerTeam(v15, v16, &outTeam);
  else
    GHandler::GetPlayerTeam((GHandler *)v15, v16, &outTeam);
  v17 = outTeam;
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( playerTeam && playerTeam == v17 )
  {
    if ( pm->ps->serverTime >= pm->ps->lastSpawnTime )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionHardCollisionOnRespawnTime, "playerCharacterCollisionHardCollisionOnRespawnTime");
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@c47a0000
        vcvttss2si ecx, xmm1
      }
      if ( pm->ps->serverTime < pm->ps->lastSpawnTime - _ECX )
        return 2i64;
    }
    return 3i64;
  }
  if ( PM_EntNumIsAgent(info->entityIndex) && p_nextState->otherEntityNum == pm->ps->clientNum )
    return 3i64;
  ps = pm->ps;
  v21 = info->entityIndex;
  if ( ps->activeExecutionPartnerEntNum == v21 )
    return 0i64;
  if ( ps->meleeChargeEnt == v21 || PM_EntNumIsAgent(v21) )
    return 2i64;
LABEL_52:
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
  const dvar_t *v9; 
  playerState_s *ps; 
  WorldUpReferenceFramePM *p_refFrame; 
  bool IsPlayerZeroG; 
  WorldUpReferenceFramePM *v21; 
  int surfaceFlags; 
  bool v29; 
  bool v30; 
  int EntityHitId; 
  int v43; 
  int v52; 
  char v58; 
  char v59; 
  PlayerAnimScriptEventType v60; 
  char v61; 
  unsigned __int16 v62; 
  const entityState_t *EntityState; 
  const entityState_t *v64; 
  _BOOL8 v65; 
  _BOOL8 v66; 
  int v67; 
  vec3_t end; 
  vec3_t vec; 
  trace_t trace; 
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v9 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled && !BG_UsingNewPlayerCollision() )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_GroundTrace");
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3679, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3679, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_IsPlayerWalkingDisabled(ps) )
      goto LABEL_43;
    _R15 = &ps->origin;
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vmovss  dword ptr [rsp+130h+vec], xmm0
      vmovss  xmm1, dword ptr [r15+4]
      vmovss  dword ptr [rbp+57h+vec+4], xmm1
      vmovss  xmm0, dword ptr [r15+8]
      vmovss  dword ptr [rbp+57h+vec+8], xmm0
      vmovss  xmm1, dword ptr [r15]
      vmovss  dword ptr [rsp+130h+end], xmm1
      vmovss  xmm0, dword ptr [r15+4]
      vmovss  dword ptr [rsp+130h+end+4], xmm0
      vmovss  xmm1, dword ptr [r15+8]
      vmovss  dword ptr [rsp+130h+end+8], xmm1
    }
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
      __asm { vmovss  xmm1, cs:__real@bf800000 }
      goto LABEL_30;
    }
LABEL_27:
    IsPlayerZeroG = BG_IsPlayerZeroG(ps);
    p_refFrame = &pm->refFrame;
    v21 = &pm->refFrame;
    if ( IsPlayerZeroG )
    {
      __asm { vmovss  xmm1, cs:__real@be800000 }
LABEL_31:
      WorldUpReferenceFrame::AddUpContribution(v21, *(float *)&_XMM1, &end);
      BGMovingPlatforms::GroundTrace(pm, &trace, &vec, &end, &ps->origin, 0);
      if ( trace.startsolid || trace.allsolid || !trace.walkable )
        BGMovingPlatforms::GroundTrace(pm, &trace, &vec, &end, &ps->origin, 1);
      _RAX = pm->ground;
      surfaceFlags = _RAX->trace.surfaceFlags;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+57h+trace.fraction]
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm1, ymmword ptr [rbp+57h+trace.contents]
        vmovups ymmword ptr [rax+20h], ymm1
        vmovups xmm0, xmmword ptr [rbp+57h+trace.allsolid]
        vmovups xmmword ptr [rax+40h], xmm0
        vmovsd  xmm1, [rbp+57h+trace.debugHitName]
        vmovsd  qword ptr [rax+50h], xmm1
      }
      WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(p_refFrame, pm, pml, &trace);
      if ( PM_IsZeroGAntiLag(ps) )
      {
        v29 = BG_IsPlayerZeroG(ps) && PM_ZeroGravityIsWalkingDisabled(pm, &vec, &end);
        if ( trace.allsolid )
          goto LABEL_43;
        if ( trace.startsolid )
          goto LABEL_43;
        v30 = !v29;
        if ( v29 )
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
        v30 = !trace.startsolid;
        if ( trace.startsolid )
        {
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->origin);
          __asm { vsubss  xmm1, xmm0, cs:__real@3a83126f; height }
          WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&_XMM1, &vec);
          BGMovingPlatforms::GroundTrace(pm, &trace, &vec, &end, &ps->origin, 1);
          if ( trace.startsolid )
            goto LABEL_43;
          _RAX = pm->ground;
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+57h+trace.fraction]
            vmovups ymmword ptr [rax], ymm0
            vmovups ymm1, ymmword ptr [rbp+57h+trace.contents]
            vmovups ymmword ptr [rax+20h], ymm1
            vmovups xmm0, xmmword ptr [rbp+57h+trace.allsolid]
            vmovups xmmword ptr [rax+40h], xmm0
            vmovsd  xmm1, [rbp+57h+trace.debugHitName]
            vmovsd  qword ptr [rax+50h], xmm1
          }
          WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(p_refFrame, pm, pml, &trace);
        }
      }
      __asm
      {
        vmovss  xmm0, [rbp+57h+trace.fraction]
        vucomiss xmm0, cs:__real@3f800000
      }
      if ( v30 )
      {
        PM_GroundTraceMissed(pm, pml);
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
          pm->ground->trace.surfaceFlags = surfaceFlags;
        goto LABEL_98;
      }
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vmovss  xmm0, dword ptr [rbp+57h+trace.normal]
        vucomiss xmm0, xmm6
      }
      if ( v30 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+trace.normal+4]
          vucomiss xmm0, xmm6
        }
        if ( v30 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+trace.normal+8]
            vucomiss xmm0, xmm6
          }
          if ( v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3781, ASSERT_TYPE_ASSERT, "(trace.normal[0] || trace.normal[1] || trace.normal[2])", (const char *)&queryFormat, "trace.normal[0] || trace.normal[1] || trace.normal[2]") )
            __debugbreak();
        }
      }
      if ( !BG_IsPlayerZeroG(ps) || !PM_ZeroGravityIsWalkingDisabled(pm, &vec, &end) )
      {
        v43 = BGMovingPlatforms::IsOnMovingPlatform(ps);
        __asm
        {
          vmovss  xmm3, dword ptr [rbp+57h+trace.normal+8]
          vmovss  xmm4, dword ptr [rbp+57h+trace.normal+4]
          vmovss  xmm5, dword ptr [rbp+57h+trace.normal]
        }
        if ( v43 )
        {
          __asm
          {
            vmulss  xmm1, xmm4, dword ptr [rsi+6Ch]
            vmulss  xmm0, xmm5, dword ptr [rsi+68h]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, dword ptr [rsi+70h]
            vaddss  xmm0, xmm2, xmm1
            vcomiss xmm0, cs:__real@3f333333
          }
          v52 = 0;
        }
        else
        {
          v52 = 1;
        }
        __asm
        {
          vmulss  xmm1, xmm4, dword ptr [rdi+40h]
          vmulss  xmm0, xmm5, dword ptr [rdi+3Ch]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [rdi+44h]
          vaddss  xmm7, xmm2, xmm1
        }
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
          goto LABEL_77;
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->velocity);
        __asm { vcomiss xmm0, xmm6 }
        if ( v58 | v59 )
          goto LABEL_77;
        __asm { vcomiss xmm7, cs:__real@41200000 }
        if ( v58 | v59 || !v52 )
        {
LABEL_77:
          v61 = 0;
          if ( (trace.contents & 0x800000) != 0 && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
          {
            v62 = Trace_GetEntityHitId(&trace);
            EntityState = BG_GetEntityState(pm->m_bgHandler, v62);
            v64 = EntityState;
            if ( EntityState )
            {
              if ( BG_IsVehicleEntity(EntityState) || v64->eType == ET_TURRET )
                v61 = 1;
            }
          }
          if ( BGMovingPlatformClient::ShouldAdjustWalkable(pm->movingPlatforms, ps, p_refFrame, &trace) )
          {
            trace.walkable = 1;
            pm->ground->trace.walkable = 1;
          }
          if ( p_refFrame->m_axisAdjusted )
          {
            *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &trace.normal);
            __asm { vcomiss xmm0, cs:__real@3f333333 }
            trace.walkable = !(v58 | v30);
            pm->ground->trace.walkable = trace.walkable;
          }
          if ( !trace.walkable || trace.contents == 0x2000000 || v61 )
          {
            PM_GroundTraceDefaultClear(pm, pml);
            pm->ground->groundPlane = 1;
            pm->ground->almostGroundPlane = 1;
            LOBYTE(v66) = 1;
            pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, v66);
            Jump_ClearState(pm);
          }
          else
          {
            pm->ground->groundPlane = 1;
            pm->ground->almostGroundPlane = 1;
            LOBYTE(v65) = 1;
            pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, v65);
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
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_ground_thrown_off_min_anims, "bg_ground_thrown_off_min_anims");
          __asm { vcomiss xmm7, xmm0 }
          if ( !v58 )
          {
            PM_SetJumpStrafeCondition(pm);
            if ( PlayerASM_IsEnabled() || (v60 = ANIM_ET_JUMPBK, pm->cmd.forwardmove >= 0) )
              v60 = ANIM_ET_JUMP;
            BG_AnimScriptEvent(pm->m_bgHandler, ps, v60, 0, 0, &pml->holdrand);
            BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
          }
        }
      }
LABEL_43:
      PM_GroundTraceDefaultClear(pm, pml);
LABEL_98:
      Sys_ProfEndNamedEvent();
      goto LABEL_102;
    }
    __asm { vmovss  xmm1, cs:__real@3e800000; height }
    WorldUpReferenceFrame::AddUpContribution(v21, *(float *)&_XMM1, &vec);
    __asm { vmovss  xmm1, cs:__real@be800000; height }
LABEL_30:
    v21 = p_refFrame;
    goto LABEL_31;
  }
  PM_DebugMispredict(pm, 0, NULL);
  PM_GroundTraceNew(pm, pml, endFrameUpdate);
  PM_Debug_TestPlayerCollisionPoint(pm);
  v67 = 2;
  if ( !endFrameUpdate )
    v67 = 1;
  PM_DebugMispredict(pm, v67, NULL);
LABEL_102:
  _R11 = &v74;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  BgTrace *m_trace; 
  bool v10; 
  playerState_s *v11; 
  int contentMask; 
  bool v16; 
  bool v20; 
  bool v21; 
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
    _R9 = &v3->origin;
    __asm { vmovss  xmm0, dword ptr [r9] }
    m_trace = pm->m_trace;
    v10 = IsSkydiving;
    v11 = pm->ps;
    __asm
    {
      vmovss  dword ptr [rsp+0E8h+end], xmm0
      vmovss  xmm1, dword ptr [r9+4]
    }
    ps = v11;
    contentMask = pm->tracemask;
    __asm
    {
      vmovss  dword ptr [rsp+0E8h+end+4], xmm1
      vmovss  xmm0, dword ptr [r9+8]
    }
    if ( v6 )
    {
      __asm
      {
        vsubss  xmm0, xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+0E8h+end+8], xmm0
      }
      BgTrace::LegacyTraceHandler(m_trace, v4, &results, _R9, &end, pm->bounds, v3->clientNum, contentMask, ps);
      __asm
      {
        vmovss  xmm0, [rsp+0E8h+results.fraction]
        vucomiss xmm0, cs:__real@3f800000
      }
      v20 = !v6;
      pm->ground->almostGroundPlane = v20;
      ((void (__fastcall *)(const BgHandler *, playerState_s *))pm->m_bgHandler->BotSetAlmostGroundPlane)(pm->m_bgHandler, pm->ps);
      v21 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v3->pm_flags, ACTIVE, 0x1Du) && pm->ground->almostGroundPlane;
      if ( !v10 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v3->pm_flags, ACTIVE, 0x29u) && !v21 )
        BG_AnimScriptAnimation(pm->m_bgHandler, v3, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
    }
    else
    {
      __asm
      {
        vsubss  xmm2, xmm0, cs:__real@42800000
        vmovss  dword ptr [rsp+0E8h+end+8], xmm2
      }
      BgTrace::LegacyTraceHandler(m_trace, v4, &results, _R9, &end, pm->bounds, v3->clientNum, contentMask, ps);
      __asm
      {
        vmovss  xmm0, [rsp+0E8h+results.fraction]
        vucomiss xmm0, cs:__real@3f800000
      }
      if ( v6 )
      {
        if ( !v10 )
          BG_AnimScriptAnimation(pm->m_bgHandler, v3, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
        pm->ground->almostGroundPlane = 0;
        pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, 0);
      }
      else
      {
        __asm { vcomiss xmm0, cs:__real@3c800000 }
        pm->ground->almostGroundPlane = v16;
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
  bool v12; 
  bool v16; 
  int contentMask; 
  bool v35; 
  const dvar_t *v47; 
  int integer; 
  char v49; 
  bool v50; 
  bool v52; 
  playerState_s *ps; 
  char v56; 
  const dvar_t *v58; 
  int EntityHitId; 
  char v62; 
  char v63; 
  const BgTraceMoverInfo *RideMoverEntityInfo; 
  playerState_s *v73; 
  int surfaceFlags; 
  _BOOL8 v122; 
  _BOOL8 v124; 
  char v135; 
  int v136; 
  vec3_t up; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v140; 
  trace_t trace; 
  trace_t outResults; 
  char v143; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  v12 = endFrameUpdate;
  _RDI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3278, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3278, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_GroundTraceNew");
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&_RSI->otherFlags, ACTIVE, 0x3Bu);
  }
  v135 = 0;
  if ( BG_IsPlayerWalkingDisabled(_RSI) )
  {
    pm->ps->groundEntityNum = 2047;
    pm->ground->groundPlane = 0;
    pm->ground->almostGroundPlane = 0;
    pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, 0);
    pm->ground->walking = 0;
    v16 = 0;
    goto LABEL_82;
  }
  __asm
  {
    vmovss  xmm9, dword ptr [rdi+68h]
    vmovss  dword ptr [rsp+220h+up], xmm9
    vmovss  xmm10, dword ptr [rdi+6Ch]
    vmovss  dword ptr [rsp+220h+up+4], xmm10
    vmovss  xmm11, dword ptr [rdi+70h]
    vmovss  dword ptr [rsp+220h+up+8], xmm11
  }
  contentMask = pm->tracemask & 0xFDFFBFFF;
  v136 = contentMask;
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+30h]
    vmovss  dword ptr [rbp+120h+var_190], xmm2
    vmovss  xmm4, dword ptr [rsi+34h]
    vmovss  dword ptr [rbp+120h+var_190+4], xmm4
    vmovss  xmm5, dword ptr [rsi+38h]
    vmovss  dword ptr [rbp+120h+var_190+8], xmm5
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, cs:TRACE_LENGTH
    vxorps  xmm3, xmm0, xmm15
    vmulss  xmm1, xmm9, xmm3
    vaddss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rsp+220h+end], xmm2
    vmulss  xmm0, xmm10, xmm3
    vaddss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rsp+220h+end+4], xmm1
    vmulss  xmm2, xmm11, xmm3
    vaddss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rsp+220h+end+8], xmm0
  }
  memset_0(&trace.position, 0, 0x54ui64);
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovss  [rbp+120h+trace.fraction], xmm13
  }
  pm->m_flags &= ~2u;
  __asm { vmovss  xmm8, cs:__real@3a83126f }
  if ( !BG_UsingNewPlayerCollision() )
  {
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &trace, &v140, &end, pm->bounds, pm->ps->clientNum, contentMask, 0);
    goto LABEL_45;
  }
  PM_GroundTrace_StanceChangeSolver(pm, _RDI, &up, v12, _RSI);
  if ( !v12 || (pm->m_flags & 1) != 0 )
  {
    v35 = 0;
  }
  else
  {
    v35 = 1;
    if ( _RDI->hadSlideContact && Dvar_GetBool_Internal_DebugName(DVARBOOL_fall_damage_fix_enabled, "fall_damage_fix_enabled") )
      v35 = !PM_GroundTraceNew_FallSpeedSlowed(pm, _RDI);
  }
  pm->m_flags &= ~1u;
  if ( v35 )
  {
    if ( PM_PlayerCollision_UseShortStickExtension(pm) )
    {
      __asm { vmovss  xmm4, cs:TRACE_LENGTH }
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCollisionStickExtention, "playerCollisionStickExtention");
      __asm
      {
        vmovss  xmm4, cs:TRACE_LENGTH
        vaddss  xmm0, xmm0, xmm4
        vxorps  xmm3, xmm0, xmm15
        vmulss  xmm1, xmm9, xmm3
        vaddss  xmm0, xmm1, dword ptr [rbp+120h+var_190]
        vmovss  dword ptr [rsp+220h+end], xmm0
        vmulss  xmm2, xmm10, xmm3
        vaddss  xmm1, xmm2, dword ptr [rbp+120h+var_190+4]
        vmovss  dword ptr [rsp+220h+end+4], xmm1
        vmulss  xmm0, xmm3, xmm11
        vaddss  xmm2, xmm0, dword ptr [rbp+120h+var_190+8]
        vmovss  dword ptr [rsp+220h+end+8], xmm2
      }
    }
    __asm { vmovaps xmm2, xmm4; castLength }
    PM_GroundTrace_PerformDownTrace(pm, _RDI, *(float *)&_XMM2, &trace, 1, v12, &up);
    __asm
    {
      vmovss  xmm0, [rbp+120h+trace.fraction]
      vucomiss xmm0, xmm13
    }
    if ( v63 )
    {
      v16 = 0;
      goto LABEL_82;
    }
    goto LABEL_40;
  }
  v47 = DCONST_DVARINT_playerCollisionType;
  if ( !DCONST_DVARINT_playerCollisionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  integer = v47->current.integer;
  if ( integer )
  {
    if ( (unsigned int)(integer - 2) <= 1 )
    {
      v49 = 1;
      goto LABEL_36;
    }
    goto LABEL_34;
  }
  if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3367, ASSERT_TYPE_ASSERT, "(type != playerCollisionType_t::LEGACY)", (const char *)&queryFormat, "type != playerCollisionType_t::LEGACY") )
  {
LABEL_34:
    v49 = 0;
    goto LABEL_36;
  }
  __debugbreak();
  v49 = 0;
LABEL_36:
  v50 = (unsigned int)(integer - 1) <= 1;
  if ( v49 )
  {
    __asm { vmovss  xmm2, cs:TRACE_LENGTH; castLength }
    v52 = PM_GroundTrace_PerformDownTrace(pm, _RDI, *(float *)&_XMM2, &trace, 1, v12, &up);
    __asm
    {
      vmovss  xmm11, dword ptr [rsp+220h+up+8]
      vmovss  xmm10, dword ptr [rsp+220h+up+4]
      vmovss  xmm9, dword ptr [rsp+220h+up]
    }
    if ( v52 )
      goto LABEL_41;
  }
  if ( !v50 )
    goto LABEL_41;
  __asm { vmovss  xmm2, cs:TRACE_LENGTH; castLength }
  PM_GroundTrace_PerformDownTrace(pm, _RDI, *(float *)&_XMM2, &trace, 0, v12, &up);
LABEL_40:
  __asm
  {
    vmovss  xmm9, dword ptr [rsp+220h+up]
    vmovss  xmm10, dword ptr [rsp+220h+up+4]
    vmovss  xmm11, dword ptr [rsp+220h+up+8]
  }
LABEL_41:
  ps = pm->ps;
  if ( pm->cmd.serverTime - ps->jumpState.jumpTime >= 500 )
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u);
  __asm
  {
    vmovss  xmm0, [rbp+120h+trace.fraction]
    vcomiss xmm0, xmm13
  }
  _RSI->unwalkableStartTime = 0;
LABEL_45:
  v56 = 1;
  __asm { vmovss  xmm6, [rbp+120h+trace.closestPointsPenetration] }
  v58 = DVARBOOL_playerCharacterCollisionVehicleWallFix;
  if ( !DVARBOOL_playerCharacterCollisionVehicleWallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionVehicleWallFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, [rbp+120h+trace.closestPointsPenetration]
      vaddss  xmm6, xmm0, xmm8
    }
    _RAX = pm->bounds;
    __asm { vcomiss xmm6, dword ptr [rax+0Ch] }
    v56 = 0;
  }
  EntityHitId = Trace_GetEntityHitId(&trace);
  if ( trace.allsolid && v56 )
  {
    RideMoverEntityInfo = BgPlayerTraceInfo::GetRideMoverEntityInfo(pm->m_playerTraceInfo);
    __asm
    {
      vmulss  xmm7, xmm6, dword ptr [rbp+120h+trace.normal]
      vmulss  xmm8, xmm6, dword ptr [rbp+120h+trace.normal+4]
      vmulss  xmm6, xmm6, dword ptr [rbp+120h+trace.normal+8]
      vmulss  xmm1, xmm10, dword ptr [rbp+120h+trace.normal+4]
      vmulss  xmm0, xmm9, dword ptr [rbp+120h+trace.normal]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, dword ptr [rbp+120h+trace.normal+8]
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@3f333333
    }
    if ( EntityHitId == 2046 )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCharacterCollisionVehicleHeadWallFix, "playerCharacterCollisionVehicleHeadWallFix") && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
      {
        v73 = pm->ps;
        _R15 = &v73->origin;
        BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &v73->origin, &v73->origin, pm->bounds, v73->clientNum, v136, v73 != NULL);
        if ( !outResults.startsolid && !outResults.allsolid )
          goto LABEL_66;
        __asm
        {
          vmovss  xmm0, [rbp+120h+outResults.closestPointsPenetration]
          vaddss  xmm2, xmm0, cs:__real@3e000000
          vmovss  [rbp+120h+outResults.closestPointsPenetration], xmm2
          vmulss  xmm3, xmm2, dword ptr [rbp+120h+outResults.normal]
          vmovss  dword ptr [rbp+120h+start], xmm3
          vmulss  xmm4, xmm2, dword ptr [rbp+120h+outResults.normal+4]
          vmovss  dword ptr [rbp+120h+start+4], xmm4
          vmulss  xmm5, xmm2, dword ptr [rbp+120h+outResults.normal+8]
          vmovss  dword ptr [rbp+120h+start+8], xmm5
          vaddss  xmm0, xmm3, dword ptr [r15]
          vmovss  dword ptr [rsp+220h+up], xmm0
          vaddss  xmm1, xmm4, dword ptr [r15+4]
          vmovss  dword ptr [rsp+220h+up+4], xmm1
          vaddss  xmm0, xmm5, dword ptr [r15+8]
          vmovss  dword ptr [rsp+220h+up+8], xmm0
        }
        if ( BGMovingPlatforms::DoesPenetractionExceedBounds(pm->bounds, &start) || (BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &up, &up, pm->bounds, v73->clientNum, v136, v73 != NULL), outResults.allsolid) )
        {
LABEL_66:
          v12 = endFrameUpdate;
        }
        else
        {
          v12 = endFrameUpdate;
          if ( !outResults.startsolid )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+220h+up]
              vmovss  dword ptr [r15], xmm0
              vmovss  xmm1, dword ptr [rsp+220h+up+4]
              vmovss  dword ptr [r15+4], xmm1
              vmovss  xmm0, dword ptr [rsp+220h+up+8]
              vmovss  dword ptr [r15+8], xmm0
            }
          }
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm7, dword ptr [rsi+30h]
          vmovss  dword ptr [rsi+30h], xmm0
          vaddss  xmm1, xmm8, dword ptr [rsi+34h]
          vmovss  dword ptr [rsi+34h], xmm1
          vaddss  xmm0, xmm6, dword ptr [rsi+38h]
          vmovss  dword ptr [rsi+38h], xmm0
        }
      }
    }
    else
    {
      if ( (!RideMoverEntityInfo || EntityHitId != RideMoverEntityInfo->entIndex) && v62 | v63 )
        goto LABEL_68;
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rsi+30h]
        vmovss  dword ptr [rsp+220h+end], xmm0
        vaddss  xmm1, xmm8, dword ptr [rsi+34h]
        vmovss  dword ptr [rsp+220h+end+4], xmm1
        vaddss  xmm0, xmm6, dword ptr [rsi+38h]
        vmovss  dword ptr [rsp+220h+end+8], xmm0
      }
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &_RSI->origin, &end, pm->bounds, EntityHitId, v136, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+220h+end]
        vsubss  xmm1, xmm0, dword ptr [rsi+30h]
        vmovss  xmm5, [rbp+120h+outResults.fraction]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, dword ptr [rsi+30h]
        vmovss  dword ptr [rsi+30h], xmm0
        vmovss  xmm1, dword ptr [rsp+220h+end+4]
        vsubss  xmm0, xmm1, dword ptr [rsi+34h]
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm3, xmm2, dword ptr [rsi+34h]
        vmovss  dword ptr [rsi+34h], xmm3
        vmovss  xmm0, dword ptr [rsp+220h+end+8]
        vsubss  xmm1, xmm0, dword ptr [rsi+38h]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [rsi+38h]
        vmovss  dword ptr [rsi+38h], xmm3
      }
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+30h]
      vmovss  dword ptr [rbp+120h+var_190], xmm2
      vmovss  xmm4, dword ptr [rsi+34h]
      vmovss  dword ptr [rbp+120h+var_190+4], xmm4
      vmovss  xmm5, dword ptr [rsi+38h]
      vmovss  dword ptr [rbp+120h+var_190+8], xmm5
      vmovss  xmm0, cs:TRACE_LENGTH
      vxorps  xmm3, xmm0, xmm15
      vmulss  xmm1, xmm9, xmm3
      vaddss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rsp+220h+end], xmm2
      vmulss  xmm0, xmm10, xmm3
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rsp+220h+end+4], xmm1
      vmulss  xmm2, xmm11, xmm3
      vaddss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rsp+220h+end+8], xmm0
    }
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &trace, &v140, &end, pm->bounds, pm->ps->clientNum, v136, 0);
LABEL_68:
    PM_Debug_TestPlayerCollisionPoint(pm);
  }
  _RAX = pm->ground;
  surfaceFlags = _RAX->trace.surfaceFlags;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+120h+trace.fraction]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm1, ymmword ptr [rbp+120h+trace.contents]
    vmovups ymmword ptr [rax+20h], ymm1
    vmovups xmm0, xmmword ptr [rbp+120h+trace.allsolid]
    vmovups xmmword ptr [rax+40h], xmm0
    vmovsd  xmm1, [rbp+120h+trace.debugHitName]
    vmovsd  qword ptr [rax+50h], xmm1
  }
  WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(&pm->refFrame, pm, _RDI, &trace);
  if ( !trace.allsolid )
  {
    __asm
    {
      vmovss  xmm0, [rbp+120h+trace.fraction]
      vcomiss xmm0, xmm13
    }
    PM_GroundTraceMissed(pm, _RDI);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 6u) )
    {
      pm->ground->trace.surfaceFlags = surfaceFlags;
      pm->ground->surfaceType = PM_GroundSurfaceType(pm);
    }
    goto LABEL_72;
  }
  if ( trace.walkable )
  {
    pm->ground->groundPlane = 1;
    pm->ground->almostGroundPlane = 1;
    LOBYTE(v122) = 1;
    pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, v122);
    pm->ground->walking = 1;
    if ( _RSI->groundEntityNum == 2047 )
    {
      v135 = 1;
      PM_GroundTraceNew_CrashLand(pm, _RDI, v12);
    }
    _RSI->groundEntityNum = Trace_GetEntityHitId(&trace);
    pm->ground->surfaceType = PM_GroundSurfaceType(pm);
    PM_AddTouchEnt(pm, _RSI->groundEntityNum, PMTF_TOUCHER_PLAYER);
    v16 = v135;
  }
  else
  {
    PM_GroundTraceDefaultClear(pm, _RDI);
    pm->ground->groundPlane = 1;
    pm->ground->almostGroundPlane = 1;
    LOBYTE(v124) = 1;
    pm->m_bgHandler->BotSetAlmostGroundPlane((BgHandler *)pm->m_bgHandler, pm->ps, v124);
    Jump_ClearState(pm);
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    {
LABEL_72:
      v16 = 0;
      goto LABEL_82;
    }
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&_RSI->otherFlags, ACTIVE, 0x3Bu);
    v16 = 0;
  }
LABEL_82:
  PM_GroundTraceNew_Finalize(pm, _RDI, v12, v16);
  Sys_ProfEndNamedEvent();
  _R11 = &v143;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm15, xmmword ptr [r11-80h]
  }
}

/*
==============
PM_GroundTraceNew_ApplyFallDamageFix
==============
*/
void PM_GroundTraceNew_ApplyFallDamageFix(pmove_t *pm, pml_t *pml, bool endFrameUpdate, bool crashLanded)
{
  const dvar_t *v9; 
  char v19; 

  _RBX = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3241, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = DVARBOOL_fall_damage_fix_enabled;
  if ( !DVARBOOL_fall_damage_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fall_damage_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && endFrameUpdate && !crashLanded && _RBX->hadSlideContact && PM_GroundTraceNew_FallSpeedSlowed(pm, _RBX) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+23Ch]
      vmovss  xmm1, dword ptr [rbx+238h]
      vmulss  xmm3, xmm0, dword ptr [rbx+6Ch]
      vmulss  xmm2, xmm1, dword ptr [rbx+68h]
      vmovss  xmm0, dword ptr [rbx+240h]
      vmulss  xmm1, xmm0, dword ptr [rbx+70h]
      vaddss  xmm4, xmm3, xmm2
      vmovaps [rsp+68h+var_28], xmm6
      vaddss  xmm6, xmm4, xmm1
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fall_damage_fix_min_surface_dot, "fall_damage_fix_min_surface_dot");
    __asm
    {
      vcomiss xmm6, xmm0
      vmovaps xmm6, [rsp+68h+var_28]
    }
    if ( !v19 )
      PM_GroundTraceNew_CrashLand(pm, _RBX, endFrameUpdate);
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
  bool result; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3211, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3211, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+54h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  result = 0;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
PM_GroundTraceNew_Finalize
==============
*/
void PM_GroundTraceNew_Finalize(pmove_t *pm, pml_t *pml, bool endFrameUpdate, bool crashLanded)
{
  const dvar_t *v9; 
  char v19; 

  _RBX = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3241, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = DVARBOOL_fall_damage_fix_enabled;
  if ( !DVARBOOL_fall_damage_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fall_damage_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && endFrameUpdate && !crashLanded && _RBX->hadSlideContact && PM_GroundTraceNew_FallSpeedSlowed(pm, _RBX) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+23Ch]
      vmovss  xmm1, dword ptr [rbx+68h]
      vmulss  xmm3, xmm0, dword ptr [rbx+6Ch]
      vmulss  xmm2, xmm1, dword ptr [rbx+238h]
      vmovss  xmm0, dword ptr [rbx+240h]
      vmulss  xmm1, xmm0, dword ptr [rbx+70h]
      vaddss  xmm4, xmm3, xmm2
      vmovaps [rsp+68h+var_28], xmm6
      vaddss  xmm6, xmm4, xmm1
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fall_damage_fix_min_surface_dot, "fall_damage_fix_min_surface_dot");
    __asm
    {
      vcomiss xmm6, xmm0
      vmovaps xmm6, [rsp+68h+var_28]
    }
    if ( !v19 )
      PM_GroundTraceNew_CrashLand(pm, _RBX, endFrameUpdate);
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
bool PM_GroundTrace_FinalizePoint(pmove_t *pm, pml_t *pml, trace_t *trace, const vec3_t *testPoint, const vec3_t *up)
{
  bool result; 
  const dvar_t *v18; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  trace_t outResults; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = trace;
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, testPoint, testPoint, pm->bounds, pm->ps->clientNum, pm->tracemask, 0);
  _RDX = pm->ps;
  __asm
  {
    vmovss  xmm6, dword ptr [rdx+30h]
    vmovss  xmm7, dword ptr [rdx+34h]
    vmovss  xmm8, dword ptr [rdx+38h]
  }
  _RDX->origin = *testPoint;
  if ( *(_WORD *)&outResults.allsolid )
  {
    v18 = DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFix;
    if ( !DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionHeadPenetrationFix") )
      __debugbreak();
    __asm { vmovaps [rsp+128h+var_68], xmm9 }
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      _RAX = &pm->ps->origin;
      __asm
      {
        vmovss  dword ptr [rax], xmm6
        vmovss  dword ptr [rax+4], xmm7
        vmovss  dword ptr [rax+8], xmm8
      }
      v20 = DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix;
      if ( !DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUnresolvedCollisionFix") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) && BGMovingPlatforms::IsMovingPlatform(outResults.hitId) )
        BGMovingPlatformPS::SetMoverEntityID(&pm->ps->movingPlatforms, pm->ps, pm->m_bgHandler, pm->ps->movingPlatforms.m_movingPlatformEntity, outResults.hitId, 0, 0);
      v21 = DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFallFix;
      if ( !DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFallFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionHeadPenetrationFallFix") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.enabled )
      {
        _RAX = up;
        _RCX = pm->ps;
        __asm
        {
          vmovss  xmm6, dword ptr [rax+4]
          vmovss  xmm1, dword ptr [rcx+34h]
          vmulss  xmm2, xmm6, dword ptr [rsp+128h+outResults.normal+4]
          vmovss  xmm5, dword ptr [rax]
          vmulss  xmm3, xmm5, dword ptr [rsp+128h+outResults.normal]
          vmovss  xmm7, dword ptr [rax+8]
          vsubss  xmm9, xmm1, dword ptr [rsp+128h+outResults.position+4]
          vmulss  xmm1, xmm7, dword ptr [rsp+128h+outResults.normal+8]
          vmovss  xmm0, dword ptr [rcx+30h]
          vsubss  xmm8, xmm0, dword ptr [rsp+128h+outResults.position]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, cs:__real@3dcccccd
        }
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+128h+outResults.fraction]
        vmovups ymm1, ymmword ptr [rsp+70h]
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmm0, xmmword ptr [rsp+128h+outResults.allsolid]
        vmovups ymmword ptr [rdi+20h], ymm1
        vmovsd  xmm1, [rsp+128h+outResults.debugHitName]
        vmovups xmmword ptr [rdi+40h], xmm0
        vmovsd  qword ptr [rdi+50h], xmm1
      }
    }
    PM_Debug_TestPlayerCollisionPoint(pm);
    __asm { vmovaps xmm9, [rsp+128h+var_68] }
    result = 0;
  }
  else
  {
    PM_Debug_TestPlayerCollisionPoint(pm);
    result = 1;
  }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
PM_GroundTrace_PerformDownTrace
==============
*/
bool PM_GroundTrace_PerformDownTrace(pmove_t *pm, pml_t *pml, float castLength, trace_t *trace, bool useRayCast, bool endFrameUpdate, const vec3_t *up)
{
  const dvar_t *v22; 
  const dvar_t *v25; 
  int contentMask; 
  playerState_s *ps; 
  BgTrace *m_trace; 
  const dvar_t *v72; 
  const dvar_t *v105; 
  char v106; 
  bool v107; 
  const dvar_t *v108; 
  const dvar_t *v109; 
  int v111; 
  bool v112; 
  const dvar_t *v113; 
  char v127; 
  char v128; 
  char v129; 
  bool v141; 
  const entityState_t *EntityState; 
  char v143; 
  bool v144; 
  bool result; 
  vec3_t testPoint; 
  vec3_t start; 
  vec3_t end; 
  Bounds bounds; 
  char v161; 
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
  _RSI = trace;
  _RDI = pm->ps;
  _RBX = pm;
  PM_Debug_TestPlayerCollisionPoint(pm);
  *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(_RBX->bounds);
  _R14 = DCONST_DVARFLT_playerCollisionStickExtention;
  __asm { vmovaps xmm7, xmm0 }
  if ( !DCONST_DVARFLT_playerCollisionStickExtention && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionStickExtention") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm6, dword ptr [r14+28h]
    vmovss  xmm10, cs:__real@3e000000
    vxorps  xmm8, xmm8, xmm8
  }
  if ( PM_PlayerCollision_UseShortStickExtension(_RBX) )
  {
    v22 = DCONST_DVARBOOL_playerCharacterCollisionExtendExtension;
    if ( !DCONST_DVARBOOL_playerCharacterCollisionExtendExtension && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionExtendExtension") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      if ( _RBX->cmd.serverTime - _RBX->ps->jumpState.jumpTime >= 500 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+44h]
          vcomiss xmm2, xmm8
        }
      }
      __asm { vaddss  xmm6, xmm0, cs:__real@3e800000 }
    }
    else
    {
      __asm { vmovaps xmm6, xmm10 }
    }
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2526, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsPlayerInExecution(_RDI) && !_RDI->activeExecutionIsVictim )
  {
    v25 = DVARFLT_execution_ground_trace_length_increase;
    if ( !DVARFLT_execution_ground_trace_length_increase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_ground_trace_length_increase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    __asm { vaddss  xmm6, xmm6, dword ptr [r14+28h] }
  }
  _RAX = _RBX->bounds;
  __asm
  {
    vmovss  xmm5, cs:__real@40000000
    vmovss  xmm9, cs:__real@3f800000
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+3Fh+var_A8.midPoint], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rbp+3Fh+var_A8.halfSize+4], xmm1
  }
  if ( useRayCast )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?bounds_origin@@3UBounds@@B.midPoint; Bounds const bounds_origin
      vmovsd  xmm1, qword ptr cs:?bounds_origin@@3UBounds@@B.halfSize+4; Bounds const bounds_origin
      vmovups xmmword ptr [rbp+3Fh+var_A8.midPoint], xmm0
      vmovsd  qword ptr [rbp+3Fh+var_A8.halfSize+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+3Fh+var_A8.halfSize+8]
      vsubss  xmm1, xmm0, dword ptr [rax+0Ch]
      vmulss  xmm2, xmm1, xmm5
      vsubss  xmm3, xmm2, xmm7
      vaddss  xmm7, xmm7, dword ptr [rax+0Ch]
      vmaxss  xmm0, xmm3, xmm9
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  dword ptr [rbp+3Fh+var_A8.halfSize+8], xmm1
      vmovss  dword ptr [rbp+3Fh+var_A8.midPoint+8], xmm1
    }
  }
  __asm
  {
    vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rsp+130h+start], xmm8
    vmovss  dword ptr [rsp+130h+start+4], xmm8
    vmovss  dword ptr [rsp+130h+start+8], xmm8
    vmovss  dword ptr [rbp+3Fh+end], xmm8
    vmovss  dword ptr [rbp+3Fh+end+4], xmm8
    vmovss  dword ptr [rbp+3Fh+end+8], xmm8
  }
  if ( useRayCast )
  {
    __asm
    {
      vmulss  xmm2, xmm5, dword ptr [rax+14h]
      vmulss  xmm0, xmm2, dword ptr [r13+0]
      vaddss  xmm1, xmm0, dword ptr [rdi+30h]
      vmulss  xmm0, xmm2, dword ptr [r13+4]
    }
    contentMask = _RBX->tracemask;
    ps = _RBX->ps;
    __asm
    {
      vmovss  dword ptr [rsp+130h+start], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+34h]
      vmulss  xmm0, xmm2, dword ptr [r13+8]
      vmulss  xmm2, xmm6, dword ptr [r13+4]
      vmovss  dword ptr [rsp+130h+start+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+38h]
      vmulss  xmm0, xmm6, dword ptr [r13+0]
      vmovss  dword ptr [rsp+130h+start+8], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+30h]
      vmovss  dword ptr [rbp+3Fh+end], xmm1
      vaddss  xmm0, xmm2, dword ptr [rdi+34h]
      vmulss  xmm1, xmm6, dword ptr [r13+8]
      vmovss  dword ptr [rbp+3Fh+end+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rdi+38h]
      vmovss  dword ptr [rbp+3Fh+end+8], xmm2
    }
    BgTrace::LegacyPlayerTrace(_RBX->m_trace, _RBX, _RSI, &start, &end, &bounds, ps->clientNum, contentMask, 0);
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [r13+0]
      vaddss  xmm1, xmm0, dword ptr [rdi+30h]
      vmulss  xmm0, xmm7, dword ptr [r13+4]
      vmulss  xmm2, xmm6, dword ptr [r13+4]
    }
    m_trace = _RBX->m_trace;
    __asm
    {
      vmovss  dword ptr [rsp+130h+start], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+34h]
      vmulss  xmm0, xmm7, dword ptr [r13+8]
      vmovss  dword ptr [rsp+130h+start+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+38h]
      vmulss  xmm0, xmm6, dword ptr [r13+0]
      vmovss  dword ptr [rsp+130h+start+8], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+30h]
      vmovss  dword ptr [rbp+3Fh+end], xmm1
      vaddss  xmm0, xmm2, dword ptr [rdi+34h]
      vmulss  xmm1, xmm6, dword ptr [r13+8]
      vmovss  dword ptr [rbp+3Fh+end+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rdi+38h]
      vmovss  dword ptr [rbp+3Fh+end+8], xmm2
    }
    if ( (m_trace->m_flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 432, ASSERT_TYPE_ASSERT, "(!pm->m_trace->HasFlag( TRACE_FLAG_FORCE_CYLINDER ))", (const char *)&queryFormat, "!pm->m_trace->HasFlag( TRACE_FLAG_FORCE_CYLINDER )") )
      __debugbreak();
    _RBX->m_trace->m_flags |= 0x40u;
    BgTrace::LegacyPlayerTrace(_RBX->m_trace, _RBX, _RSI, &start, &end, &bounds, _RBX->ps->clientNum, _RBX->tracemask, 0);
    _RBX->m_trace->m_flags &= ~0x40u;
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rbp+3Fh+end]
    vsubss  xmm1, xmm0, dword ptr [rsp+130h+start]
    vmovss  xmm0, dword ptr [rbp+3Fh+end+4]
  }
  v72 = DCONST_DVARBOOL_playerCharacterCollisionProneStuckFix;
  __asm
  {
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsp+130h+start]
    vsubss  xmm1, xmm0, dword ptr [rsp+130h+start+4]
    vmovss  xmm0, dword ptr [rbp+3Fh+end+8]
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm1, xmm0, dword ptr [rsp+130h+start+8]
    vmovss  dword ptr [rsp+130h+testPoint], xmm3
    vaddss  xmm3, xmm2, dword ptr [rsp+130h+start+4]
    vmulss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rsp+130h+testPoint+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rsp+130h+start+8]
    vmovss  dword ptr [rsp+130h+testPoint+8], xmm3
  }
  if ( !DCONST_DVARBOOL_playerCharacterCollisionProneStuckFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionProneStuckFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v72);
  if ( v72->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+130h+start]
      vsubss  xmm5, xmm0, dword ptr [rbp+3Fh+end]
      vmovss  xmm1, dword ptr [rsp+130h+start+4]
      vsubss  xmm6, xmm1, dword ptr [rbp+3Fh+end+4]
      vmovss  xmm0, dword ptr [rsp+130h+start+8]
      vsubss  xmm7, xmm0, dword ptr [rbp+3Fh+end+8]
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm9, xmm0
      vdivss  xmm4, xmm9, xmm0
      vmulss  xmm0, xmm5, xmm4
      vmulss  xmm2, xmm0, xmm10
      vaddss  xmm2, xmm2, dword ptr [rsp+130h+testPoint]
      vmulss  xmm0, xmm6, xmm4
      vmulss  xmm3, xmm0, xmm10
      vmovss  dword ptr [rsp+130h+testPoint], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+130h+testPoint+4]
      vmulss  xmm0, xmm7, xmm4
      vmulss  xmm3, xmm0, xmm10
      vmovss  dword ptr [rsp+130h+testPoint+4], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+130h+testPoint+8]
      vmovss  dword ptr [rsp+130h+testPoint+8], xmm2
    }
  }
  if ( useRayCast )
  {
    v105 = DCONST_DVARBOOL_playerCollisionDebug;
    if ( !DCONST_DVARBOOL_playerCollisionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v105);
    v106 = 0;
    v107 = !v105->current.enabled;
    if ( v105->current.enabled )
      _RBX->m_bgHandler->DebugLine((BgHandler *)_RBX->m_bgHandler, &start, &testPoint, &colorRed, 1, 0);
  }
  else
  {
    v108 = DCONST_DVARBOOL_playerCollisionDebug;
    if ( !DCONST_DVARBOOL_playerCollisionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v108);
    if ( v108->current.enabled )
    {
      __asm { vxorps  xmm3, xmm3, xmm3 }
      ((void (__fastcall *)(const BgHandler *, vec3_t *, Bounds *))_RBX->m_bgHandler->DebugBox)(_RBX->m_bgHandler, &start, &bounds);
    }
    v109 = DCONST_DVARBOOL_playerCollisionDebug;
    if ( !DCONST_DVARBOOL_playerCollisionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v109);
    v106 = 0;
    v107 = !v109->current.enabled;
    if ( v109->current.enabled )
    {
      __asm { vxorps  xmm3, xmm3, xmm3 }
      ((void (__fastcall *)(const BgHandler *, vec3_t *, Bounds *))_RBX->m_bgHandler->DebugBox)(_RBX->m_bgHandler, &testPoint, &bounds);
    }
  }
  __asm { vcomiss xmm9, dword ptr [rsi] }
  if ( v106 | v107 || endFrameUpdate )
  {
    PM_Debug_TestPlayerCollisionPoint(_RBX);
    result = 0;
    goto LABEL_88;
  }
  v111 = _RBX->cmd.serverTime - _RBX->ps->jumpState.jumpTime;
  v112 = _RSI->walkable || _RDI->groundEntityNum == 2047 && v111 >= 500;
  v113 = DVARBOOL_playerCharacterCollisionWallClimbFix;
  if ( !DVARBOOL_playerCharacterCollisionWallClimbFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionWallClimbFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v113);
  if ( !v113->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
  {
    if ( v112 )
      goto LABEL_68;
LABEL_86:
    PM_Debug_TestPlayerCollisionPoint(_RBX);
    result = 1;
    goto LABEL_88;
  }
  if ( !_RSI->walkable || v111 < 500 )
    goto LABEL_86;
LABEL_68:
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vsubss  xmm4, xmm0, dword ptr [rsp+130h+testPoint]
    vmovss  xmm1, dword ptr [rdi+34h]
    vsubss  xmm2, xmm1, dword ptr [rsp+130h+testPoint+4]
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  xmm5, dword ptr [rsp+130h+testPoint+8]
    vsubss  xmm9, xmm5, dword ptr [rdi+38h]
    vsubss  xmm3, xmm0, xmm5
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm7, xmm2, xmm1
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u) )
    goto LABEL_71;
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&_RBX->refFrame, &_RDI->velocity);
  __asm { vcomiss xmm0, xmm8 }
  if ( v127 | v128 )
  {
LABEL_71:
    v129 = 0;
    v127 = 0;
    v128 = 1;
  }
  else
  {
    v129 = 1;
  }
  __asm { vcomiss xmm7, cs:__real@3c800000 }
  if ( v127 | v128 )
  {
    v143 = 0;
    v144 = v129 == 0;
    if ( !v129 )
    {
      PM_Debug_TestPlayerCollisionPoint(_RBX);
      __asm { vmovss  xmm0, dword ptr [rsp+130h+testPoint] }
      _RAX = (__int64)&_RBX->ps->origin;
      __asm
      {
        vmovss  dword ptr [rax], xmm0
        vmovss  xmm1, dword ptr [rsp+130h+testPoint+4]
        vmovss  dword ptr [rax+4], xmm1
        vmovss  xmm0, dword ptr [rsp+130h+testPoint+8]
        vmovss  dword ptr [rax+8], xmm0
      }
      PM_Debug_TestPlayerCollisionPoint(_RBX);
    }
    goto LABEL_84;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+testPoint+4]
    vsubss  xmm1, xmm0, dword ptr [rdi+34h]
    vmulss  xmm3, xmm1, dword ptr [r13+4]
    vmovss  xmm2, dword ptr [rsp+130h+testPoint]
    vsubss  xmm0, xmm2, dword ptr [rdi+30h]
    vmulss  xmm1, xmm0, dword ptr [r13+0]
    vmovss  xmm2, dword ptr [rsp+130h+testPoint+8]
    vsubss  xmm0, xmm2, dword ptr [rdi+38h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [r13+8]
    vaddss  xmm6, xmm4, xmm1
  }
  v141 = 0;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_vehicleMoverBlockCharacterPickup, "vehicleMoverBlockCharacterPickup") )
  {
    if ( BGMovingPlatforms::IsMovingPlatform(_RSI->hitId) )
    {
      EntityState = BG_GetEntityState(_RBX->m_bgHandler, _RSI->hitId);
      if ( BG_IsVehicleEntity(EntityState) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_vehicleMoverBlockPickupHeight, "vehicleMoverBlockPickupHeight");
        __asm { vcomiss xmm6, xmm0 }
        v141 = !(v106 | v107);
      }
    }
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCollisionMaxStepHeight, "playerCollisionMaxStepHeight");
  __asm { vcomiss xmm6, xmm0 }
  if ( v106 | v107 && !v141 )
  {
    v143 = 0;
    v144 = v129 == 0;
    if ( !v129 )
      PM_GroundTrace_FinalizePoint(_RBX, pml, _RSI, &testPoint, up);
LABEL_84:
    __asm { vcomiss xmm7, cs:MIN_SMOOTH_STEP_HEIGHT_SQ }
    if ( !(v143 | v144) )
    {
      _RBX->m_flags |= 0x100u;
      __asm { vmovss  dword ptr [rbx+384h], xmm9 }
    }
    goto LABEL_86;
  }
  _RSI->walkable = 0;
  result = 1;
LABEL_88:
  _R11 = &v161;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
PM_GroundTrace_StanceChangeSolver
==============
*/
void PM_GroundTrace_StanceChangeSolver(const pmove_t *pm, const pml_t *pml, const vec3_t *up, bool endFrameUpdate, playerState_s *ps)
{
  const dvar_t *v9; 
  int tracemask; 
  playerState_s *v17; 
  int hitId; 
  int passEntityNum; 
  BgTrace *m_trace; 
  const Bounds *v25; 
  int v26; 
  playerState_s *v27; 
  const Bounds *bounds; 
  int contentMask; 
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
    _RDI = &ps->origin;
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &ps->origin, pm->bounds, pm->ps->clientNum, pm->tracemask, 0);
    if ( *(_WORD *)&outResults.allsolid )
    {
      tracemask = pm->tracemask;
      __asm
      {
        vmovss  xmm0, [rbp+4Fh+outResults.closestPointsPenetration]
        vaddss  xmm3, xmm0, cs:__real@3e000000
        vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+outResults.normal]
        vaddss  xmm2, xmm1, dword ptr [rdi]
        vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+outResults.normal+4]
      }
      v17 = pm->ps;
      hitId = outResults.hitId;
      __asm
      {
        vmovss  dword ptr [rbp+4Fh+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+4]
        vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+outResults.normal+8]
      }
      contentMask = tracemask;
      __asm
      {
        vmovss  dword ptr [rbp+4Fh+end+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rbp+4Fh+end+8], xmm2
        vmovss  [rbp+4Fh+outResults.closestPointsPenetration], xmm3
      }
      passEntityNum = v17->clientNum;
      m_trace = pm->m_trace;
      bounds = pm->bounds;
      __asm { vmovaps [rsp+100h+var_30], xmm6 }
      BgTrace::LegacyPlayerTrace(m_trace, pm, &outResults, &end, &end, bounds, passEntityNum, contentMask, 1);
      if ( !outResults.allsolid && !outResults.startsolid )
        goto LABEL_31;
      *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(pm->bounds);
      __asm { vmovaps xmm6, xmm0 }
      v25 = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
      *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(v25);
      v26 = pm->tracemask;
      v27 = pm->ps;
      __asm
      {
        vsubss  xmm2, xmm0, xmm6
        vxorps  xmm1, xmm1, xmm1
        vmaxss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm3, dword ptr [r12]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmulss  xmm0, xmm3, dword ptr [r12+4]
        vmovss  dword ptr [rbp+4Fh+end], xmm1
        vaddss  xmm1, xmm0, dword ptr [rdi+4]
        vmulss  xmm0, xmm3, dword ptr [r12+8]
        vmovss  dword ptr [rbp+4Fh+end+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rbp+4Fh+end+8], xmm1
      }
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &end, &end, pm->bounds, v27->clientNum, v26, 1);
      if ( !*(_WORD *)&outResults.allsolid )
      {
LABEL_31:
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCharacterCollisionMoverStanceFix, "playerCharacterCollisionMoverStanceFix") && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) && BGMovingPlatforms::IsMovingPlatform(hitId) )
        {
          BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &end, pm->bounds, hitId, pm->tracemask & 0xFDFFBFFF, 0);
          __asm
          {
            vmovss  xmm5, [rbp+4Fh+outResults.fraction]
            vmovss  xmm0, dword ptr [rbp+4Fh+end]
            vsubss  xmm1, xmm0, dword ptr [rdi]
            vmovss  xmm0, dword ptr [rbp+4Fh+end+4]
            vmulss  xmm1, xmm1, xmm5
            vaddss  xmm6, xmm1, dword ptr [rdi]
            vsubss  xmm1, xmm0, dword ptr [rdi+4]
            vmovss  xmm0, dword ptr [rbp+4Fh+end+8]
            vmulss  xmm2, xmm1, xmm5
            vsubss  xmm1, xmm0, dword ptr [rdi+8]
            vaddss  xmm3, xmm2, dword ptr [rdi+4]
            vmulss  xmm2, xmm1, xmm5
            vaddss  xmm0, xmm2, dword ptr [rdi+8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+4Fh+end+8]
            vmovss  xmm3, dword ptr [rbp+4Fh+end+4]
            vmovss  xmm6, dword ptr [rbp+4Fh+end]
          }
        }
        __asm
        {
          vmovss  dword ptr [rdi], xmm6
          vmovss  dword ptr [rdi+4], xmm3
          vmovss  dword ptr [rdi+8], xmm0
        }
      }
      __asm { vmovaps xmm6, [rsp+100h+var_30] }
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

__int64 __fastcall PM_JitterPoint(pmove_t *pm, pml_t *pml, trace_t *trace, double jitterScale, const vec3_t *correctDeltas, const unsigned int deltasCount)
{
  __int64 result; 
  playerState_s *ps; 
  unsigned int v16; 
  unsigned int v17; 
  float *v18; 
  char *fmt; 
  Bounds *bounds; 
  __int64 passEntityNum; 
  vec3_t start; 
  vec3_t v55; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmm6, xmm3
  }
  _R14 = trace;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 593, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 593, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsPlayerLinked(_RDI) )
    goto LABEL_8;
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 556, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v16 = 1;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) || pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
LABEL_8:
    result = 0i64;
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_JitterPoint");
    v17 = 0;
    if ( deltasCount )
    {
      v18 = &correctDeltas->v[2];
      __asm { vmovss  xmm7, cs:__real@bfa00000 }
      while ( 1 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rbp-8]
          vaddss  xmm1, xmm0, dword ptr [rdi+30h]
          vmovss  dword ptr [rsp+0E8h+start], xmm1
          vmulss  xmm0, xmm6, dword ptr [rbp-4]
          vaddss  xmm1, xmm0, dword ptr [rdi+34h]
          vmovss  dword ptr [rsp+0E8h+start+4], xmm1
          vmulss  xmm0, xmm6, dword ptr [rbp+0]
          vaddss  xmm1, xmm0, dword ptr [rdi+38h]
          vmovss  dword ptr [rsp+0E8h+start+8], xmm1
        }
        BgTrace::LegacyPlayerTrace(pm->m_trace, pm, _R14, &start, &start, pm->bounds, _RDI->clientNum, pm->tracemask, 1);
        if ( !_R14->startsolid )
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+0E8h+start]
            vmovsd  qword ptr [rsp+0E8h+var_80], xmm0
          }
          v55.v[2] = start.v[2];
          __asm { vmovaps xmm1, xmm7; height }
          WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &start);
          BgTrace::LegacyPlayerTrace(pm->m_trace, pm, _R14, &v55, &start, pm->bounds, _RDI->clientNum, pm->tracemask, 1);
          if ( !_R14->startsolid )
            break;
        }
        ++v17;
        v18 += 3;
        if ( v17 >= deltasCount )
          goto LABEL_19;
      }
      PM_UpdateGround(pm, pml, _R14);
      __asm
      {
        vmovss  xmm6, dword ptr [r14]
        vmovss  xmm0, dword ptr [rsp+0E8h+start]
        vsubss  xmm1, xmm0, dword ptr [rsp+0E8h+var_80]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsp+0E8h+var_80]
        vmovss  dword ptr [rdi+30h], xmm3
        vmovss  xmm0, dword ptr [rsp+0E8h+start+4]
        vsubss  xmm1, xmm0, dword ptr [rsp+0E8h+var_80+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsp+0E8h+var_80+4]
        vmovss  dword ptr [rdi+34h], xmm3
        vmovss  xmm0, dword ptr [rsp+0E8h+start+8]
        vsubss  xmm1, xmm0, dword ptr [rsp+0E8h+var_80+8]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsp+0E8h+var_80+8]
        vmovss  dword ptr [rdi+38h], xmm3
      }
    }
    else
    {
LABEL_19:
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm1, dword ptr [rdi+34h]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovss  xmm3, dword ptr [rdi+30h]
        vcvtss2sd xmm3, xmm3, xmm3
      }
      LODWORD(passEntityNum) = _R14->hitId;
      __asm
      {
        vmovsd  [rsp+0E8h+bounds], xmm0
        vmovsd  [rsp+0E8h+fmt], xmm1
        vmovq   r9, xmm3
      }
      Com_PrintWarning(17, "PM_JitterPoint: Player/agent stuck in geo, this will be slow. Client number %d (%.0f,%.0f,%.0f). Entity geo number %d\n", (unsigned int)_RDI->clientNum, _R9, fmt, bounds, passEntityNum);
      v16 = 0;
    }
    Sys_ProfEndNamedEvent();
    result = v16;
  }
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
PM_LastStandCollision_DebugCapsule
==============
*/
void PM_LastStandCollision_DebugCapsule(pmove_t *pm, const vec3_t *origin, const Bounds *bounds, const vec4_t *color)
{
  const dvar_t *v6; 
  int v21[4]; 
  int v22[4]; 

  v6 = DCONST_DVARBOOL_playerLastStandDebug;
  _RDI = bounds;
  _RBP = origin;
  if ( !DCONST_DVARBOOL_playerLastStandDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerLastStandDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovss  xmm6, dword ptr [rdi+0Ch]
    }
    *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(_RDI);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+4]
      vmovss  xmm3, dword ptr [rbp+0]
      vaddss  xmm1, xmm0, xmm6
      vaddss  xmm0, xmm1, dword ptr [rbp+8]
      vmovss  [rsp+0A8h+var_50], xmm0
      vmovss  xmm0, dword ptr [rdi+14h]
      vmulss  xmm1, xmm0, cs:__real@40000000
      vmovss  [rsp+0A8h+var_54], xmm2
      vmovss  [rsp+0A8h+var_64], xmm2
      vsubss  xmm2, xmm1, xmm6
      vmovaps xmm6, [rsp+0A8h+var_38]
      vmovss  [rsp+0A8h+var_58], xmm3
      vmovss  [rsp+0A8h+var_68], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+8]
      vmovss  [rsp+0A8h+var_60], xmm3
    }
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2191, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    __asm { vmovss  xmm3, dword ptr [rdi+0Ch] }
    ((void (__fastcall *)(const BgHandler *, int *, int *))pm->m_bgHandler->DebugCapsule)(pm->m_bgHandler, v22, v21);
  }
}

/*
==============
PM_LastStandCollision_Resolve
==============
*/
void PM_LastStandCollision_Resolve(pmove_t *pm, pml_t *pml, vec3_t *outAppliedInstantaneousVelocity)
{
  const dvar_t *v15; 
  char v28; 
  void *retaddr; 

  _RAX = &retaddr;
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
  _R15 = pml;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_LastStandCollision_Resolve");
  v15 = DVARBOOL_killswitch_last_stand_rewrite_enabled;
  if ( !DVARBOOL_killswitch_last_stand_rewrite_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_last_stand_rewrite_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    __asm
    {
      vxorps  xmm14, xmm14, xmm14
      vcomiss xmm14, dword ptr [r15+24h]
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v28;
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
}

/*
==============
PM_PlayerCollision_DrawCapsule
==============
*/
void PM_PlayerCollision_DrawCapsule(const pmove_t *pm, const Bounds *bounds, const vec3_t *origin, const vec4_t *color)
{
  const dvar_t *v9; 
  char v17; 
  bool v28; 
  __int64 v29; 
  const BgHandler *m_bgHandler; 
  BgHandler_vtbl *v33; 
  float v0[4]; 
  float v1[4]; 
  Bounds boundsa; 

  _RDI = bounds;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 238, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 239, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v9 = DCONST_DVARBOOL_playerCollisionDebug;
  if ( !DCONST_DVARBOOL_playerCollisionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovsd  xmm1, qword ptr [rdi+10h]
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovups xmmword ptr [rsp+0C8h+bounds.midPoint], xmm0
      vmovsd  qword ptr [rsp+0C8h+bounds.halfSize+4], xmm1
      vmovaps [rsp+0C8h+var_48], xmm8
    }
    *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(&boundsa);
    __asm
    {
      vmulss  xmm8, xmm0, cs:__real@3f000000
      vmovss  xmm1, dword ptr [rsp+0C8h+bounds.halfSize+8]
      vsubss  xmm6, xmm1, dword ptr [rsp+0C8h+bounds.halfSize]
      vsubss  xmm2, xmm6, xmm8
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
    }
    if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 214, ASSERT_TYPE_ASSERT, "((bounds->halfSize[2] - halfStickHeight) >= 0.0f)", (const char *)&queryFormat, "(bounds->halfSize[2] - halfStickHeight) >= 0.0f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+0C8h+bounds.midPoint+4]
      vaddss  xmm4, xmm1, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rsp+0C8h+bounds.midPoint]
      vaddss  xmm5, xmm0, dword ptr [r14]
      vaddss  xmm1, xmm8, dword ptr [rsp+0C8h+bounds.midPoint+8]
      vaddss  xmm3, xmm1, dword ptr [r14+8]
      vsubss  xmm6, xmm6, xmm8
      vaddss  xmm2, xmm3, xmm6
      vmovss  [rsp+0C8h+var_80], xmm2
      vmovss  xmm2, cs:__real@3a83126f; epsilon
      vsubss  xmm0, xmm3, xmm6
      vmovss  [rsp+0C8h+v0], xmm5
      vmovss  [rsp+0C8h+var_84], xmm4
      vmovss  [rsp+0C8h+v1], xmm5
      vmovss  [rsp+0C8h+var_74], xmm4
      vmovss  [rsp+0C8h+var_70], xmm0
    }
    v28 = VecNCompareCustomEpsilon(v0, v1, *(float *)&_XMM2, 3);
    m_bgHandler = pm->m_bgHandler;
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
    v33 = m_bgHandler->__vftable;
    if ( v28 )
    {
      __asm { vmovss  xmm2, dword ptr [rsp+0C8h+bounds.halfSize] }
      ((void (__fastcall *)(const BgHandler *, float *, __int64, const vec4_t *, int, _DWORD))v33->DebugSphere)(m_bgHandler, v0, v29, color, 1, 0);
    }
    else
    {
      __asm { vmovss  xmm3, dword ptr [rsp+0C8h+bounds.halfSize] }
      ((void (__fastcall *)(const BgHandler *, float *, float *))v33->DebugCapsule)(m_bgHandler, v0, v1);
    }
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
  const dvar_t *v18; 
  const dvar_t *v19; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  _R12 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1049, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  *(_QWORD *)outAppliedInstantaneousVelocity->v = 0i64;
  outAppliedInstantaneousVelocity->v[2] = 0.0;
  if ( numInfoItems )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_ResolveCharacterCollision");
    v18 = DCONST_DVARBOOL_removePlayerCollision;
    if ( !DCONST_DVARBOOL_removePlayerCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "removePlayerCollision") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( !v18->current.enabled )
    {
      v19 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
      if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
      {
        __asm
        {
          vxorps  xmm10, xmm10, xmm10
          vcomiss xmm10, dword ptr [r12+24h]
        }
      }
    }
    Sys_ProfEndNamedEvent();
  }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
PM_ResolveMoverCollision
==============
*/
void PM_ResolveMoverCollision(pmove_t *pm, pml_t *pml, vec3_t *inOutAppliedInstantaneousVelocity, bool *hasMoverPenetration)
{
  playerState_s *ps; 
  WorldUpReferenceFramePM *p_refFrame; 
  unsigned __int64 v37; 
  bool v64; 
  bool v76; 
  char v100; 
  bool v101; 
  bool v114; 
  char v127; 
  bool startsolid; 
  playerState_s *v259; 
  __int64 m_size_low; 
  vec3_t *v262; 
  BgTrace v264; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  trace_t outResult; 
  char v270; 
  void *retaddr; 

  _RAX = &retaddr;
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
  _RDI = inOutAppliedInstantaneousVelocity;
  _R12 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1647, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ResolveMoverCollision");
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm10, dword ptr [r12+24h]
  }
  if ( !v100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1652, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
    __debugbreak();
  if ( !hasMoverPenetration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1654, ASSERT_TYPE_ASSERT, "(hasMoverPenetration)", (const char *)&queryFormat, "hasMoverPenetration") )
    __debugbreak();
  *hasMoverPenetration = 0;
  if ( !pm->antiLag )
    goto LABEL_63;
  ps = pm->ps;
  v259 = ps;
  _RBX = &ps->velocity;
  v262 = _RBX;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbp+170h+vec], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+170h+vec+4], xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+170h+vec+8], xmm0
  }
  p_refFrame = &pm->refFrame;
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm8, xmm8, xmm8
    vmovss  [rsp+270h+var_218], xmm8
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+270h+var_228], xmm7
    vxorps  xmm11, xmm11, xmm11
    vmovss  [rsp+270h+var_224], xmm11
    vxorps  xmm4, xmm4, xmm4
    vmovss  [rsp+270h+var_22C], xmm4
    vxorps  xmm14, xmm14, xmm14
    vmovss  [rsp+270h+var_214], xmm14
  }
  m_size_low = SLODWORD(pm->m_playerTraceInfo->m_moverList.m_size);
  __asm
  {
    vmovss  xmm15, cs:__real@3f800000
    vmovss  xmm9, cs:__real@80000000
  }
  if ( m_size_low <= 0 )
    goto LABEL_60;
  v37 = 0i64;
  _RDI = 0i64;
  do
  {
    _RBX = pm->m_playerTraceInfo;
    if ( v37 >= _RBX->m_moverList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    if ( v37 >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
    if ( ps->movingPlatforms.m_movingPlatformEntity == *(_DWORD *)&_RBX->m_moverList.m_data.m_buffer[_RDI] )
      goto LABEL_57;
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+170h+vec+4]
      vmulss  xmm1, xmm6, xmm6
      vmovss  xmm4, dword ptr [rbp+170h+vec]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm5, dword ptr [rbp+170h+vec+8]
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm7, xmm0, xmm0
      vmovss  xmm3, dword ptr [r12+24h]
    }
    _R15 = &ps->origin;
    __asm
    {
      vmulss  xmm0, xmm4, xmm3
      vaddss  xmm1, xmm0, dword ptr [r15]
      vmovss  dword ptr [rbp+170h+end], xmm1
      vmulss  xmm2, xmm6, xmm3
      vaddss  xmm0, xmm2, dword ptr [r15+4]
      vmovss  dword ptr [rbp+170h+end+4], xmm0
      vmulss  xmm1, xmm5, xmm3
      vaddss  xmm2, xmm1, dword ptr [r15+8]
      vmovss  dword ptr [rbp+170h+end+8], xmm2
    }
    BgTrace::BgTrace(&v264, pm->m_playerTraceInfo);
    v264.m_flags |= 0x10u;
    BgTrace::PerformPlayerToEntityTrace(&v264, *(_DWORD *)&_RBX->m_moverList.m_data.m_buffer[_RDI], pm->bounds, &ps->origin, &end, &outResult);
    if ( outResult.allsolid )
    {
      __asm
      {
        vmovss  xmm2, [rbp+170h+var_140.closestPointsPenetration]
        vmulss  xmm3, xmm2, dword ptr [rbp+170h+var_140.normal]
        vmulss  xmm4, xmm2, dword ptr [rbp+170h+var_140.normal+4]
        vmulss  xmm5, xmm2, dword ptr [rbp+170h+var_140.normal+8]
      }
    }
    else
    {
      __asm
      {
        vmovaps xmm3, xmm10
        vmovaps xmm4, xmm10
        vmovaps xmm5, xmm10
      }
    }
    startsolid = outResult.startsolid;
    __asm
    {
      vmulss  xmm9, xmm7, dword ptr [r12+24h]
      vmovss  xmm0, [rbp+170h+var_140.fraction]
      vmulss  xmm11, xmm0, xmm9
    }
    if ( !outResult.startsolid )
    {
      __asm
      {
        vucomiss xmm0, xmm15
        vmovss  xmm11, [rsp+270h+var_224]
        vmovss  xmm7, [rsp+270h+var_228]
        vmovss  xmm9, cs:__real@80000000
      }
LABEL_57:
      __asm { vmovss  xmm4, [rsp+270h+var_22C] }
      goto LABEL_58;
    }
    __asm { vmovaps xmm14, xmm10 }
    v64 = !outResult.startsolid;
    if ( outResult.startsolid )
    {
      __asm
      {
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm14, xmm2, xmm2
        vcmpless xmm0, xmm14, cs:__real@80000000
        vblendvps xmm1, xmm14, xmm15, xmm0
        vmovss  [rsp+270h+var_204], xmm1
        vdivss  xmm0, xmm15, xmm1
        vmulss  xmm6, xmm3, xmm0
        vmulss  xmm7, xmm0, xmm4
        vmulss  xmm8, xmm5, xmm0
      }
    }
    else
    {
      __asm { vcomiss xmm0, xmm15 }
      v76 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1744, ASSERT_TYPE_ASSERT, "(trace.fraction < 1.0f)", (const char *)&queryFormat, "trace.fraction < 1.0f");
      v64 = !v76;
      if ( v76 )
        __debugbreak();
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+170h+var_140.normal]
        vmovss  xmm7, dword ptr [rbp+170h+var_140.normal+4]
        vmovss  xmm8, dword ptr [rbp+170h+var_140.normal+8]
      }
    }
    __asm
    {
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@3a83126f
      vmovaps xmm4, xmm10
      vmovss  [rsp+270h+var_210], xmm4
      vmovaps xmm5, xmm10
      vmovss  [rsp+270h+var_20C], xmm5
      vmovaps xmm0, xmm10
      vmovss  [rsp+270h+var_208], xmm0
      vmovss  xmm1, dword ptr [rbp+170h+vec+8]
      vmovss  xmm2, dword ptr [rbp+170h+vec+4]
      vmovss  xmm3, dword ptr [rbp+170h+vec]
      vucomiss xmm9, xmm10
    }
    if ( !v64 )
    {
      __asm
      {
        vdivss  xmm0, xmm11, xmm9
        vmulss  xmm4, xmm3, xmm0
        vmovss  [rsp+270h+var_210], xmm4
        vmulss  xmm5, xmm2, xmm0
        vmovss  [rsp+270h+var_20C], xmm5
        vmulss  xmm0, xmm1, xmm0
        vmovss  [rsp+270h+var_208], xmm0
      }
    }
    __asm
    {
      vsubss  xmm3, xmm3, xmm4
      vmovss  [rsp+270h+var_200], xmm3
      vmovss  dword ptr [rbp+170h+vec], xmm3
      vsubss  xmm2, xmm2, xmm5
      vmovss  [rsp+270h+var_1FC], xmm2
      vmovss  dword ptr [rbp+170h+vec+4], xmm2
      vsubss  xmm0, xmm1, xmm0
      vmovss  [rsp+270h+var_204], xmm0
      vmovss  dword ptr [rbp+170h+vec+8], xmm0
      vcomiss xmm14, xmm10
    }
    _RSI = DCONST_DVARFLT_playerCharacterCollisionPenetrationDepth;
    if ( !DCONST_DVARFLT_playerCharacterCollisionPenetrationDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionPenetrationDepth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm9, dword ptr [rsi+28h]
      vcomiss xmm9, xmm10
    }
    if ( v100 | v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1771, ASSERT_TYPE_ASSERT, "(playerCharacterCollisionPenetrationDepth > 0.0f)", (const char *)&queryFormat, "playerCharacterCollisionPenetrationDepth > 0.0f") )
      __debugbreak();
    __asm
    {
      vdivss  xmm0, xmm14, xmm9; val
      vmovaps xmm2, xmm15; max
      vmovaps xmm1, xmm10; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm3, xmm6, dword ptr [rbp+170h+vec]
      vmulss  xmm2, xmm7, dword ptr [rbp+170h+vec+4]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm1, xmm8, dword ptr [rbp+170h+vec+8]
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm10
    }
    if ( v100 )
    {
      __asm
      {
        vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm1, xmm6, xmm3
        vaddss  xmm1, xmm1, dword ptr [rbp+170h+vec]
        vmovss  dword ptr [rbp+170h+vec], xmm1
        vmulss  xmm2, xmm3, xmm7
        vaddss  xmm1, xmm2, dword ptr [rbp+170h+vec+4]
        vmovss  dword ptr [rbp+170h+vec+4], xmm1
        vmulss  xmm3, xmm8, xmm3
        vaddss  xmm1, xmm3, dword ptr [rbp+170h+vec+8]
        vmovss  dword ptr [rbp+170h+vec+8], xmm1
      }
    }
    __asm { vcomiss xmm10, dword ptr [r12+24h] }
    if ( !v100 )
    {
      v114 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1803, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f");
      v101 = !v114;
      if ( v114 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm3, dword ptr [r12+24h]
      vdivss  xmm2, xmm14, xmm3
      vmulss  xmm0, xmm6, xmm2
      vaddss  xmm12, xmm12, xmm0
      vmovss  [rsp+270h+var_220], xmm12
      vmulss  xmm1, xmm7, xmm2
      vaddss  xmm13, xmm13, xmm1
      vmovss  [rsp+270h+var_21C], xmm13
      vmulss  xmm0, xmm8, xmm2
      vaddss  xmm8, xmm0, [rsp+270h+var_218]
      vmovss  [rsp+270h+var_218], xmm8
      vmovss  xmm11, dword ptr [rdi+rbx+34h]
      vmovss  xmm12, dword ptr [rdi+rbx+38h]
      vmovss  xmm13, dword ptr [rdi+rbx+3Ch]
      vmovss  xmm0, dword ptr [rdi+rbx+40h]
      vucomiss xmm0, xmm10
    }
    if ( !v101 )
      goto LABEL_47;
    __asm { vucomiss xmm10, dword ptr [rdi+rbx+44h] }
    if ( !v101 )
      goto LABEL_47;
    __asm { vucomiss xmm10, dword ptr [rdi+rbx+48h] }
    if ( v101 )
      v127 = 0;
    else
LABEL_47:
      v127 = 1;
    if ( v127 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, xmm3
        vmovss  dword ptr [rbp+170h+angles], xmm0
        vmulss  xmm1, xmm3, dword ptr [rdi+rbx+44h]
        vmovss  dword ptr [rbp+170h+angles+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [rdi+rbx+48h]
        vmovss  dword ptr [rbp+170h+angles+8], xmm0
      }
      AnglesToAxis(&angles, &axis);
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vsubss  xmm9, xmm0, dword ptr [rdi+rbx+1Ch]
        vmovss  xmm1, dword ptr [r15+4]
        vsubss  xmm8, xmm1, dword ptr [rdi+rbx+20h]
        vmovss  xmm0, dword ptr [r15+8]
        vsubss  xmm7, xmm0, dword ptr [rdi+rbx+24h]
        vmulss  xmm2, xmm8, dword ptr [rbp+170h+axis+0Ch]
        vmulss  xmm1, xmm9, dword ptr [rbp+170h+axis]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm7, dword ptr [rbp+170h+axis+18h]
        vaddss  xmm6, xmm3, xmm0
        vmulss  xmm2, xmm8, dword ptr [rbp+170h+axis+10h]
        vmulss  xmm1, xmm9, dword ptr [rbp+170h+axis+4]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm7, dword ptr [rbp+170h+axis+1Ch]
        vaddss  xmm5, xmm3, xmm0
        vmulss  xmm2, xmm8, dword ptr [rbp+170h+axis+14h]
        vmulss  xmm1, xmm9, dword ptr [rbp+170h+axis+8]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm7, dword ptr [rbp+170h+axis+20h]
        vaddss  xmm4, xmm3, xmm0
        vsubss  xmm6, xmm6, xmm9
        vsubss  xmm8, xmm5, xmm8
        vsubss  xmm7, xmm4, xmm7
        vcomiss xmm10, dword ptr [r12+24h]
      }
      if ( !v100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1837, ASSERT_TYPE_ASSERT, "(pml->frametime > 0.0f)", (const char *)&queryFormat, "pml->frametime > 0.0f") )
        __debugbreak();
      __asm
      {
        vdivss  xmm2, xmm15, dword ptr [r12+24h]
        vmulss  xmm0, xmm2, xmm6
        vaddss  xmm11, xmm11, xmm0
        vmulss  xmm1, xmm2, xmm8
        vaddss  xmm12, xmm12, xmm1
        vmulss  xmm0, xmm2, xmm7
        vaddss  xmm13, xmm13, xmm0
      }
    }
    __asm
    {
      vmulss  xmm1, xmm11, xmm11
      vmulss  xmm0, xmm12, xmm12
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm13, xmm13
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vmovss  xmm9, cs:__real@80000000
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm1, xmm3, xmm15, xmm0
      vdivss  xmm0, xmm15, xmm1
      vmulss  xmm4, xmm0, xmm11
      vmulss  xmm5, xmm0, xmm12
      vmulss  xmm6, xmm0, xmm13
      vmulss  xmm1, xmm4, [rsp+270h+var_200]
      vmulss  xmm0, xmm5, [rsp+270h+var_1FC]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, [rsp+270h+var_204]
      vaddss  xmm2, xmm2, xmm1
      vminss  xmm0, xmm3, xmm2
      vmaxss  xmm3, xmm0, xmm10
      vmulss  xmm0, xmm3, xmm4
      vaddss  xmm7, xmm0, [rsp+270h+var_228]
      vmovss  [rsp+270h+var_228], xmm7
      vmulss  xmm1, xmm3, xmm5
      vaddss  xmm11, xmm1, [rsp+270h+var_224]
      vmovss  [rsp+270h+var_224], xmm11
      vmulss  xmm0, xmm3, xmm6
      vaddss  xmm4, xmm0, [rsp+270h+var_22C]
      vmovss  [rsp+270h+var_22C], xmm4
      vmovss  xmm1, dword ptr [rbp+170h+vec]
      vaddss  xmm2, xmm1, [rsp+270h+var_210]
      vmovss  dword ptr [rbp+170h+vec], xmm2
      vmovss  xmm0, dword ptr [rbp+170h+vec+4]
      vaddss  xmm1, xmm0, [rsp+270h+var_20C]
      vmovss  dword ptr [rbp+170h+vec+4], xmm1
      vmovss  xmm2, dword ptr [rbp+170h+vec+8]
      vaddss  xmm0, xmm2, [rsp+270h+var_208]
      vmovss  dword ptr [rbp+170h+vec+8], xmm0
      vmovss  xmm2, dword ptr [rdi+rbx+38h]
      vmovss  xmm0, dword ptr [rdi+rbx+34h]
      vmovss  xmm3, dword ptr [rdi+rbx+3Ch]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmaxss  xmm1, xmm2, [rsp+270h+var_214]
      vmovss  [rsp+270h+var_214], xmm1
      vmovss  xmm12, [rsp+270h+var_220]
      vmovss  xmm13, [rsp+270h+var_21C]
    }
    ps = v259;
    if ( startsolid )
    {
      __asm { vcomiss xmm14, cs:__real@3e000000 }
      *hasMoverPenetration = 1;
    }
LABEL_58:
    ++v37;
    _RDI += 52i64;
  }
  while ( (__int64)v37 < m_size_low );
  __asm
  {
    vmovss  xmm8, [rsp+270h+var_218]
    vmovss  xmm14, [rsp+270h+var_214]
  }
  _RBX = v262;
  _RDI = inOutAppliedInstantaneousVelocity;
  p_refFrame = &pm->refFrame;
LABEL_60:
  __asm
  {
    vaddss  xmm6, xmm12, xmm7
    vaddss  xmm7, xmm13, xmm11
    vaddss  xmm8, xmm8, xmm4
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerCharacterCollisionMaxMoverPenetrationVelocity, "playerCharacterCollisionMaxMoverPenetrationVelocity");
  __asm
  {
    vsqrtss xmm1, xmm14, xmm14
    vaddss  xmm5, xmm0, xmm1
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, xmm9
    vblendvps xmm1, xmm4, xmm15, xmm0
    vdivss  xmm0, xmm15, xmm1
    vmulss  xmm2, xmm0, xmm6
    vmulss  xmm3, xmm0, xmm7
    vmulss  xmm1, xmm0, xmm8
    vcomiss xmm4, xmm5
  }
  if ( !(v100 | v64) )
  {
    __asm
    {
      vmulss  xmm6, xmm2, xmm5
      vmulss  xmm7, xmm3, xmm5
      vmulss  xmm8, xmm1, xmm5
    }
  }
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbp+170h+vec]
    vmovss  dword ptr [rbp+170h+vec], xmm1
    vaddss  xmm0, xmm7, dword ptr [rbp+170h+vec+4]
    vmovss  dword ptr [rbp+170h+vec+4], xmm0
    vaddss  xmm2, xmm8, dword ptr [rbp+170h+vec+8]
    vmovss  dword ptr [rbp+170h+vec+8], xmm2
  }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, _RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+170h+vec]
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm2, dword ptr [rbp+170h+vec+4]
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm1, dword ptr [rbp+170h+vec+8]
    vmovss  dword ptr [rbx+8], xmm1
    vmovaps xmm1, xmm0; height
  }
  WorldUpReferenceFrame::AddUpContribution(p_refFrame, *(float *)&_XMM1, _RBX);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
    vaddss  xmm1, xmm7, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm1
    vaddss  xmm0, xmm8, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
LABEL_63:
  Sys_ProfEndNamedEvent();
  _R11 = &v270;
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
  int m_movingPlatformEntity; 
  const entityState_t *EntityState; 
  int clientNum; 
  BgAntiLag *antiLag; 
  char v23; 
  char v24; 
  tmat33_t<vec3_t> axis; 
  vec3_t outOrigin; 
  BgAntiLagEntityInfo outInfo; 

  _RBX = pm->ps;
  _RSI = inOutAppliedInstantaneousVelocity;
  if ( !BG_IsPlayerLinked(_RBX) )
  {
    _RBP = DCONST_DVARMPFLT_bg_pushPlayerOffVehicleSpeed;
    __asm
    {
      vmovaps [rsp+1D8h+var_68], xmm10
      vmovaps [rsp+1D8h+var_88], xmm12
    }
    if ( !DCONST_DVARMPFLT_bg_pushPlayerOffVehicleSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pushPlayerOffVehicleSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm10, dword ptr [rbp+28h]
      vxorps  xmm12, xmm12, xmm12
      vcomiss xmm10, xmm12
    }
    if ( !(v23 | v24) )
    {
      if ( BGMovingPlatformPS::IsOnMovingPlatform(&_RBX->movingPlatforms) )
      {
        if ( pm->antiLag )
        {
          if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 0xDu) )
          {
            m_movingPlatformEntity = _RBX->movingPlatforms.m_movingPlatformEntity;
            EntityState = BG_GetEntityState(pm->m_bgHandler, m_movingPlatformEntity);
            if ( BG_IsVehicleEntity(EntityState) && (EntityState->lerp.u.anonymous.data[1] & 0x40000) != 0 )
            {
              clientNum = _RBX->clientNum;
              antiLag = (BgAntiLag *)pm->antiLag;
              outInfo.boneInfo.boneList.m_usedSize = 0;
              outInfo.boneInfo.boneList.m_maxSize = 0;
              if ( BgAntiLag::GetEntityInfoAtTime(antiLag, clientNum, m_movingPlatformEntity, 0xBu, pm->cmd.serverTime, &outInfo) )
              {
                __asm
                {
                  vmovaps [rsp+1D8h+var_28], xmm6
                  vmovaps [rsp+1D8h+var_38], xmm7
                  vmovaps [rsp+1D8h+var_48], xmm8
                  vmovaps [rsp+1D8h+var_58], xmm9
                  vmovaps [rsp+1D8h+var_78], xmm11
                  vmovaps [rsp+1D8h+var_98], xmm13
                  vmovaps [rsp+1D8h+var_A8], xmm14
                  vmovaps [rsp+1D8h+var_B8], xmm15
                }
                AnglesToAxis(&outInfo.angles, &axis);
                BgAntiLagEntity_GetOrigin(&outInfo, &outOrigin);
                __asm
                {
                  vmovss  xmm4, dword ptr [rsp+1D8h+var_158.velocity+4]
                  vmovss  xmm13, cs:__real@3f800000
                  vmovss  xmm5, dword ptr [rsp+1D8h+var_158.velocity]
                  vmovss  xmm3, dword ptr [rsp+1D8h+var_158.velocity+8]
                  vmulss  xmm0, xmm4, xmm4
                  vmulss  xmm1, xmm5, xmm5
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm0, xmm2, xmm1
                  vsqrtss xmm11, xmm0, xmm0
                  vcomiss xmm11, xmm13
                  vcmpless xmm0, xmm11, cs:__real@80000000
                  vblendvps xmm0, xmm11, xmm13, xmm0
                  vdivss  xmm1, xmm13, xmm0
                  vmulss  xmm0, xmm3, xmm1
                  vmulss  xmm15, xmm4, xmm1
                  vmovss  [rsp+1D8h+var_198], xmm0
                  vmovss  xmm0, dword ptr [rbx+30h]
                  vsubss  xmm7, xmm0, dword ptr [rsp+1D8h+outOrigin]
                  vmovss  xmm0, dword ptr [rbx+38h]
                  vsubss  xmm9, xmm0, dword ptr [rsp+1D8h+outOrigin+8]
                  vmulss  xmm0, xmm7, dword ptr [rsp+1D8h+axis+18h]
                  vmulss  xmm14, xmm5, xmm1
                  vmovss  xmm1, dword ptr [rbx+34h]
                  vsubss  xmm8, xmm1, dword ptr [rsp+1D8h+outOrigin+4]
                  vmulss  xmm1, xmm8, dword ptr [rsp+1D8h+axis+1Ch]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm9, dword ptr [rsp+1D8h+axis+20h]
                  vaddss  xmm0, xmm2, xmm1
                  vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
                  vmulss  xmm0, xmm4, dword ptr [rsp+1D8h+axis+1Ch]
                  vmulss  xmm2, xmm4, dword ptr [rsp+1D8h+axis+18h]
                  vmulss  xmm1, xmm4, dword ptr [rsp+1D8h+axis+20h]
                  vaddss  xmm6, xmm0, xmm8
                  vmovaps xmm8, [rsp+1D8h+var_48]
                  vaddss  xmm4, xmm1, xmm9
                  vmovaps xmm9, [rsp+1D8h+var_58]
                  vaddss  xmm7, xmm2, xmm7
                }
                if ( !(v23 | v24) )
                {
                  __asm
                  {
                    vmulss  xmm0, xmm15, xmm11
                    vaddss  xmm7, xmm0, xmm7
                    vmulss  xmm0, xmm11, [rsp+1D8h+var_198]
                    vmulss  xmm1, xmm14, xmm11
                    vaddss  xmm4, xmm0, xmm4
                    vsubss  xmm6, xmm6, xmm1
                  }
                }
                __asm
                {
                  vmovaps xmm15, [rsp+1D8h+var_B8]
                  vmovaps xmm14, [rsp+1D8h+var_A8]
                  vmovaps xmm11, [rsp+1D8h+var_78]
                  vmulss  xmm0, xmm6, xmm6
                  vmulss  xmm1, xmm7, xmm7
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm4, xmm4
                  vaddss  xmm2, xmm2, xmm1
                  vsqrtss xmm3, xmm2, xmm2
                  vcomiss xmm3, xmm12
                  vcmpless xmm0, xmm3, cs:__real@80000000
                  vblendvps xmm0, xmm3, xmm13, xmm0
                  vdivss  xmm1, xmm13, xmm0
                  vmovaps xmm13, [rsp+1D8h+var_98]
                  vmulss  xmm2, xmm1, xmm7
                  vmovaps xmm7, [rsp+1D8h+var_38]
                  vmulss  xmm5, xmm6, xmm1
                  vmovaps xmm6, [rsp+1D8h+var_28]
                  vmulss  xmm0, xmm4, xmm1
                }
                if ( v23 | v24 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1D8h+axis+0Ch]
                    vmovss  xmm1, dword ptr [rsp+1D8h+axis+10h]
                    vmulss  xmm2, xmm0, xmm10
                    vmovss  xmm0, dword ptr [rsp+1D8h+axis+14h]
                    vmulss  xmm3, xmm1, xmm10
                  }
                }
                else
                {
                  __asm
                  {
                    vmulss  xmm2, xmm2, xmm10
                    vmulss  xmm3, xmm5, xmm10
                  }
                }
                __asm
                {
                  vmulss  xmm4, xmm0, xmm10
                  vaddss  xmm0, xmm2, dword ptr [rbx+3Ch]
                  vmovss  dword ptr [rbx+3Ch], xmm0
                  vaddss  xmm1, xmm3, dword ptr [rbx+40h]
                  vmovss  dword ptr [rbx+40h], xmm1
                  vaddss  xmm0, xmm4, dword ptr [rbx+44h]
                  vmovss  dword ptr [rbx+44h], xmm0
                  vaddss  xmm1, xmm2, dword ptr [rsi]
                  vaddss  xmm0, xmm3, dword ptr [rsi+4]
                  vmovss  dword ptr [rsi], xmm1
                  vaddss  xmm1, xmm4, dword ptr [rsi+8]
                  vmovss  dword ptr [rsi+8], xmm1
                  vmovss  dword ptr [rsi+4], xmm0
                }
              }
            }
          }
        }
      }
    }
    __asm
    {
      vmovaps xmm10, [rsp+1D8h+var_68]
      vmovaps xmm12, [rsp+1D8h+var_88]
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
  __asm { vmovups ymm0, ymmword ptr [r8] }
  _RAX = pm->ground;
  __asm
  {
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm1, ymmword ptr [r8+20h]
    vmovups ymmword ptr [rax+20h], ymm1
    vmovups xmm0, xmmword ptr [r8+40h]
    vmovups xmmword ptr [rax+40h], xmm0
    vmovsd  xmm1, qword ptr [r8+50h]
    vmovsd  qword ptr [rax+50h], xmm1
  }
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
  void *v15; 
  BgAntiLagEntityInfo *p_infoList; 
  __int64 v24; 
  unsigned int v25; 
  playerState_s *ps; 
  int serverTime; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  BgAntiLagEntityInfo *v30; 
  __int64 v31; 
  const char *v32; 
  unsigned int v49; 
  bool v55; 
  const dvar_t *v56; 
  bool v57; 
  bool v59; 
  BgTrace *m_trace; 
  WorldUpReferenceFramePM *p_refFrame; 
  const dvar_t *v93; 
  bool v94; 
  bool v95; 
  char v96; 
  const dvar_t *v117; 
  const dvar_t *v118; 
  char v130; 
  char *fmt; 
  unsigned int *outNumInfoItems; 
  unsigned int *outNumInfoItemsa; 
  BgAntiLagEntityInfo *outInfoList; 
  __int64 v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158; 
  bool hasMoverPenetration; 
  unsigned int v160; 
  int bCheckFootstepsa; 
  __int64 v162; 
  vec3_t outAppliedInstantaneousVelocity; 
  vec3_t outOrigin; 
  vec3_t vec; 
  vec3_t outCustomGravityDir; 
  WorldUpReferenceFrame v167; 
  BgAntiLagEntityInfo infoList; 
  BgAntiLagEntityInfo v169; 
  char v178; 

  v15 = alloca(v6);
  v162 = -2i64;
  __asm
  {
    vmovaps [rsp+8A80h+var_50], xmm6
    vmovaps [rsp+8A80h+var_60], xmm7
    vmovaps [rsp+8A80h+var_70], xmm8
    vmovaps [rsp+8A80h+var_80], xmm9
    vmovaps [rsp+8A80h+var_90], xmm10
    vmovaps [rsp+8A80h+var_A0], xmm11
    vmovaps [rsp+8A80h+var_B0], xmm12
    vmovaps [rsp+8A80h+var_C0], xmm13
  }
  bCheckFootstepsa = bCheckFootsteps;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2547, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2548, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdatePlayerCollision");
  PM_DebugMispredict(pm, 4, NULL);
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2557, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Debug_TestPlayerCollisionPoint(pm);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+3Ch]
    vmovss  dword ptr [rbp+8980h+vec], xmm0
    vmovss  xmm1, dword ptr [rsi+40h]
    vmovss  dword ptr [rbp+8980h+vec+4], xmm1
    vmovss  xmm0, dword ptr [rsi+44h]
    vmovss  dword ptr [rbp+8980h+vec+8], xmm0
  }
  PM_Door_Update(pm, pml);
  p_infoList = &infoList;
  v24 = 2i64;
  do
  {
    BgAntiLagEntityInfo::BgAntiLagEntityInfo(p_infoList++);
    --v24;
  }
  while ( v24 );
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_GetClosestPlayers");
  if ( pm->antiLag )
  {
    ps = pm->ps;
    serverTime = pm->cmd.serverTime;
    v160 = 0;
    v28 = DCONST_DVARBOOL_antilagUseClosestCharacters;
    if ( !DCONST_DVARBOOL_antilagUseClosestCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagUseClosestCharacters") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( v28->current.enabled )
    {
      BgAntiLag::GetClosestCharacters((BgAntiLag *)pm->antiLag, ps->clientNum, 0x59u, serverTime, 2u, &v160, &infoList);
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 1037, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      BgAntiLag::GetEntityInfoListAtTime((BgAntiLag *)pm->antiLag, ps->clientNum, 0x59u, serverTime, 0xF8u, &v160, &infoList);
    }
    v25 = v160;
    Sys_ProfEndNamedEvent();
  }
  else
  {
    Sys_ProfEndNamedEvent();
    v25 = 0;
  }
  PM_ResolveCharacterCollision(pm, pml, &outAppliedInstantaneousVelocity, &infoList, v25);
  PM_Door_ResolveCollisions(pm, pml, &outAppliedInstantaneousVelocity, &performSlideMove, &infoList, v25);
  PM_ButtCollision_Resolve(pm, pml, &outAppliedInstantaneousVelocity, &infoList, v25);
  PM_LastStandCollision_Resolve(pm, pml, &outAppliedInstantaneousVelocity);
  PM_ResolveVehiclePlatform(pm, pml, &outAppliedInstantaneousVelocity);
  PM_Turret_ApplyVelocity(pm, pml, &outAppliedInstantaneousVelocity);
  v29 = DCONST_DVARINT_debug_player_collision;
  if ( !DCONST_DVARINT_debug_player_collision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debug_player_collision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v29->current.integer == _RSI->clientNum )
  {
    if ( pm->antiLag )
    {
      v30 = &v169;
      v31 = 248i64;
      do
      {
        BgAntiLagEntityInfo::BgAntiLagEntityInfo(v30++);
        --v31;
      }
      while ( v31 );
      BgAntiLag::GetEntityInfoListAtTime((BgAntiLag *)pm->antiLag, _RSI->clientNum, 0x59u, pm->cmd.serverTime, 0xF8u, &v160, &v169);
      if ( v160 )
      {
        v32 = "server";
        if ( Sys_IsMainThread() )
          v32 = "client";
        BgAntiLagEntity_GetOrigin(&v169, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+8980h+var_8870.velocity+8]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovss  xmm1, dword ptr [rbp+8980h+var_8870.velocity+4]
          vcvtss2sd xmm1, xmm1, xmm1
          vmovss  xmm2, dword ptr [rbp+8980h+var_8870.velocity]
          vcvtss2sd xmm2, xmm2, xmm2
          vmovss  xmm3, dword ptr [rbp+8980h+outOrigin+8]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovss  xmm4, dword ptr [rbp+8980h+outOrigin+4]
          vcvtss2sd xmm4, xmm4, xmm4
          vmovss  xmm5, dword ptr [rbp+8980h+outOrigin]
          vcvtss2sd xmm5, xmm5, xmm5
          vmovss  xmm6, dword ptr [rbp+8980h+outAppliedInstantaneousVelocity+8]
          vcvtss2sd xmm6, xmm6, xmm6
          vmovss  xmm7, dword ptr [rbp+8980h+outAppliedInstantaneousVelocity+4]
          vcvtss2sd xmm7, xmm7, xmm7
          vmovss  xmm8, dword ptr [rbp+8980h+outAppliedInstantaneousVelocity]
          vcvtss2sd xmm8, xmm8, xmm8
          vmovsd  [rsp+8A80h+var_8A18], xmm0
          vmovsd  [rsp+8A80h+var_8A20], xmm1
          vmovsd  [rsp+8A80h+var_8A28], xmm2
          vmovsd  [rsp+8A80h+var_8A30], xmm3
          vmovsd  [rsp+8A80h+var_8A38], xmm4
          vmovsd  [rsp+8A80h+var_8A40], xmm5
          vmovsd  [rsp+8A80h+var_8A48], xmm6
          vmovsd  [rsp+8A80h+outInfoList], xmm7
          vmovsd  [rsp+8A80h+outNumInfoItems], xmm8
        }
        LODWORD(fmt) = pm->cmd.commandTime;
        Com_Printf(0, "%s %d %d - %f %f %f - %f %f %f - %f %f %f\n", v32, (unsigned int)pm->cmd.serverTime, fmt, *(double *)&outNumInfoItemsa, *(double *)&outInfoList, v152, v153, v154, v155, v156, v157, v158);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
  v49 = 0;
  __asm
  {
    vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm6, xmm6, xmm6
  }
  if ( MAX_MOVER_ITERATIONS )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@3a83126f
      vmovss  xmm13, cs:__real@80000000
      vmovss  xmm12, cs:__real@3f800000
    }
    do
    {
      v55 = 0;
      hasMoverPenetration = 0;
      v56 = DCONST_DVARBOOL_usePmoveMoverSystem;
      if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v56);
      if ( v56->current.enabled )
      {
        PM_ResolveMoverCollision(pm, pml, &outAppliedInstantaneousVelocity, &hasMoverPenetration);
        v55 = hasMoverPenetration;
      }
      if ( !v49 || (v57 = !v55, v55) )
      {
        if ( performSlideMove )
          goto LABEL_45;
        __asm
        {
          vmovss  dword ptr [rbp+8980h+outOrigin], xmm6
          vmovss  dword ptr [rbp+8980h+outOrigin+4], xmm6
          vmovss  dword ptr [rbp+8980h+outOrigin+8], xmm6
          vmovaps xmm2, xmm10; epsilon
        }
        v59 = VecNCompareCustomEpsilon(outAppliedInstantaneousVelocity.v, outOrigin.v, *(float *)&_XMM2, 3);
        v57 = !v59;
        if ( !v59 )
        {
LABEL_45:
          if ( v55 )
            pm->m_trace->m_flags |= 8u;
          PM_StepSlideMove(pm, pml, gravity, bCheckFootstepsa, ignoreImpulseFields);
          v57 = !v55;
          if ( v55 )
          {
            m_trace = pm->m_trace;
            v57 = (m_trace->m_flags & 0xFFFFFFF7) == 0;
            m_trace->m_flags &= ~8u;
          }
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+8980h+outAppliedInstantaneousVelocity+8]
        vmovss  xmm2, dword ptr [rbp+8980h+outAppliedInstantaneousVelocity+4]
        vmovss  xmm3, dword ptr [rbp+8980h+outAppliedInstantaneousVelocity]
        vucomiss xmm3, xmm6
      }
      if ( v57 )
      {
        __asm { vucomiss xmm2, xmm6 }
        if ( v57 )
        {
          __asm { vucomiss xmm1, xmm6 }
          if ( v57 )
            goto LABEL_72;
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+3Ch]
        vsubss  xmm7, xmm0, xmm3
        vmovss  xmm0, dword ptr [rsi+40h]
        vsubss  xmm8, xmm0, xmm2
        vmovss  xmm0, dword ptr [rsi+44h]
        vsubss  xmm9, xmm0, xmm1
        vmovss  xmm3, dword ptr [rbp+8980h+vec+4]
        vmulss  xmm1, xmm3, xmm3
        vmovss  xmm4, dword ptr [rbp+8980h+vec]
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm5, dword ptr [rbp+8980h+vec+8]
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, xmm6
      }
      if ( !v57 )
      {
        __asm
        {
          vsqrtss xmm1, xmm0, xmm0
          vcmpless xmm0, xmm1, xmm13
          vblendvps xmm1, xmm1, xmm12, xmm0
          vdivss  xmm0, xmm12, xmm1
          vmulss  xmm4, xmm4, xmm0
          vmulss  xmm3, xmm3, xmm0
          vmulss  xmm5, xmm5, xmm0
          vmulss  xmm1, xmm8, xmm3
          vmulss  xmm0, xmm7, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, xmm9
          vaddss  xmm0, xmm2, xmm1
          vcomiss xmm0, xmm6
        }
      }
      if ( gravity )
      {
        if ( WorldUpReferenceFramePM::GetCustomSlideMoveGravityDir(&pm->refFrame, pm, &outCustomGravityDir) )
        {
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v167);
          WorldUpReferenceFrame::InitFromNormal(&v167, &outCustomGravityDir);
          p_refFrame = (WorldUpReferenceFramePM *)&v167;
        }
        else
        {
          p_refFrame = &pm->refFrame;
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, dword ptr [r12+24h]; height
        }
        WorldUpReferenceFrame::AddUpContribution(p_refFrame, *(float *)&_XMM1, &vec);
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE_COOLDOWN|0x80) )
        goto LABEL_66;
      v93 = DVARBOOL_killswitch_instantaneous_velocity_fall_fix_enabled;
      if ( !DVARBOOL_killswitch_instantaneous_velocity_fall_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_instantaneous_velocity_fall_fix_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v93);
      if ( v93->current.enabled && (v94 = BG_IsInAir(_RSI, pm->ground->almostGroundPlane), v95 = !v94, v94) )
      {
        v96 = 1;
        __asm
        {
          vmulss  xmm1, xmm8, xmm8
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm5, xmm1, xmm1
          vmovss  xmm2, dword ptr [rbp+8980h+vec+4]
          vmulss  xmm3, xmm2, xmm2
          vmovss  xmm0, dword ptr [rbp+8980h+vec]
          vmulss  xmm1, xmm0, xmm0
          vaddss  xmm2, xmm3, xmm1
        }
      }
      else
      {
LABEL_66:
        v96 = 0;
        v95 = 1;
        __asm
        {
          vmulss  xmm1, xmm8, xmm8
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, xmm9
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm5, xmm2, xmm2
          vmovss  xmm0, dword ptr [rbp+8980h+vec+4]
          vmulss  xmm3, xmm0, xmm0
          vmovss  xmm1, dword ptr [rbp+8980h+vec]
          vmulss  xmm2, xmm1, xmm1
          vaddss  xmm4, xmm3, xmm2
          vmovss  xmm0, dword ptr [rbp+8980h+vec+8]
          vmulss  xmm1, xmm0, xmm0
          vaddss  xmm2, xmm4, xmm1
        }
      }
      __asm
      {
        vsqrtss xmm4, xmm2, xmm2
        vcomiss xmm5, xmm4
      }
      if ( !v95 )
      {
        if ( v96 )
        {
          __asm
          {
            vcomiss xmm4, xmm6
            vdivss  xmm0, xmm4, xmm5
            vmulss  xmm8, xmm8, xmm0
            vmulss  xmm7, xmm7, xmm0
          }
        }
        else
        {
          __asm
          {
            vcomiss xmm4, xmm6
            vmovaps xmm7, xmm6
            vmovaps xmm8, xmm6
            vmovaps xmm9, xmm6
          }
        }
      }
      __asm
      {
        vmovss  dword ptr [rsi+3Ch], xmm7
        vmovss  dword ptr [rsi+40h], xmm8
        vmovss  dword ptr [rsi+44h], xmm9
      }
LABEL_72:
      if ( !v55 )
        break;
      v117 = DCONST_DVARINT_debug_player_collision;
      if ( !DCONST_DVARINT_debug_player_collision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debug_player_collision") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v117);
      if ( v117->current.integer == _RSI->clientNum && v49 )
        Com_Printf(0, "Performing multiple penetration resolves. %d\n", v49);
      __asm
      {
        vmovss  dword ptr [rbp+8980h+outAppliedInstantaneousVelocity], xmm6
        vmovss  dword ptr [rbp+8980h+outAppliedInstantaneousVelocity+4], xmm6
        vmovss  dword ptr [rbp+8980h+outAppliedInstantaneousVelocity+8], xmm6
      }
      ++v49;
    }
    while ( v49 < MAX_MOVER_ITERATIONS );
  }
  v118 = DVARBOOL_killswitch_butt_collision_velocity_clipping_enabled;
  if ( !DVARBOOL_killswitch_butt_collision_velocity_clipping_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_butt_collision_velocity_clipping_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v118);
  if ( v118->current.enabled && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0xBu) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, GameModeFlagValues::ms_mpValue, 0x31u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_LADDER_AIM|0x80) && !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2010, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_CROUCH_BUTT_COLLISION ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_LAST_STAND_COLLISION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_CROUCH_BUTT_COLLISION ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_LAST_STAND_COLLISION )") )
      __debugbreak();
    if ( _RSI->velocityClipDir > 0x100u )
    {
      LODWORD(v151) = 256;
      LODWORD(outNumInfoItems) = _RSI->velocityClipDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 2011, ASSERT_TYPE_ASSERT, "( 0 ) <= ( ps->velocityClipDir ) && ( ps->velocityClipDir ) <= ( (1 << 8) )", "ps->velocityClipDir not in [0, MOVEMENTDIR_360_DEGREES]\n\t%i not in [%i, %i]", outNumInfoItems, 0i64, v151) )
        __debugbreak();
    }
    __asm
    {
      vmovss  dword ptr [rbp+8980h+outOrigin], xmm6
      vmovss  dword ptr [rbp+8980h+outOrigin+4], xmm6
      vmovss  dword ptr [rbp+8980h+outOrigin+8], xmm6
    }
    *(double *)&_XMM0 = BG_MovementDirToDegrees(_RSI->velocityClipDir);
    __asm { vmovss  dword ptr [rbp+8980h+outOrigin+4], xmm0 }
    AngleVectors(&outOrigin, &outCustomGravityDir, NULL, NULL);
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+40h]
      vmovss  xmm5, dword ptr [rsi+3Ch]
      vmovss  xmm7, dword ptr [rsi+44h]
      vmovss  xmm8, dword ptr [rbp+8980h+outCustomGravityDir]
      vmulss  xmm1, xmm8, xmm5
      vmovss  xmm9, dword ptr [rbp+8980h+outCustomGravityDir+4]
      vmulss  xmm0, xmm9, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm10, dword ptr [rbp+8980h+outCustomGravityDir+8]
      vmulss  xmm1, xmm10, xmm7
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, xmm6
    }
    if ( v130 )
    {
      __asm
      {
        vxorps  xmm3, xmm0, xmm11
        vmulss  xmm0, xmm3, xmm8
        vaddss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rsi+3Ch], xmm1
        vmulss  xmm2, xmm3, xmm9
        vaddss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rsi+40h], xmm0
        vmulss  xmm1, xmm3, xmm10
        vaddss  xmm2, xmm1, xmm7
        vmovss  dword ptr [rsi+44h], xmm2
      }
    }
  }
  PM_Debug_TestPlayerCollisionPoint(pm);
  Sys_ProfEndNamedEvent();
  _R11 = &v178;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
  }
}

/*
==============
PM_playerTrace
==============
*/
void PM_playerTrace(const pmove_t *const pm, trace_t *const outResults, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, bool allowCheapPointQueries, PhysicsQuery_ContextSettings *traceContext)
{
  PhysicsQuery_ContextSettings *v16; 
  int v19; 
  BG_PMove_Cage *cage; 
  const char *v21; 
  Physics_WorldId v22; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3967, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3968, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !pm->m_playerTraceInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_collision.cpp", 3969, ASSERT_TYPE_ASSERT, "(pm->m_playerTraceInfo)", (const char *)&queryFormat, "pm->m_playerTraceInfo") )
    __debugbreak();
  v16 = traceContext;
  _RBP = bounds;
  if ( traceContext && (traceContext->m_flags & 1) == 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbp+0Ch]
    }
  }
  v19 = contentMask;
  cage = BgPlayerTraceInfo::BuildCage(pm->m_playerTraceInfo, &pm->ps->origin, start, end, bounds, contentMask);
  pm->m_playerTraceInfo->StartTracePerfProbe(pm->m_playerTraceInfo);
  v21 = "PMove Trace No Cage";
  if ( cage )
    v21 = "PMove Trace Cage";
  Sys_ProfBeginNamedEvent(0xFF9400D3, v21);
  v22 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  PhysicsQuery_LegacyCapsuleTraceIgnoreBodies(v22, outResults, start, end, bounds, &passEntityNum, 1, ignoreBodies, numIgnoreBodies, v19 & 0xFDFFBFFF, pm->ps, allowCheapPointQueries, cage, v16);
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

