/*
==============
TestDoorOverlap2D
==============
*/

bool __fastcall TestDoorOverlap2D(float radius, vec2_t playerStart, vec2_t playerEnd, vec2_t doorOrigin, vec2_t doorStart, vec2_t doorEnd, float *outIntersectProj)
{
  return ?TestDoorOverlap2D@@YA_NMTvec2_t@@0000AEAM@Z(radius, playerStart, playerEnd, doorOrigin, doorStart, doorEnd, outIntersectProj);
}

/*
==============
BG_Door_ValidVehicle
==============
*/

bool __fastcall BG_Door_ValidVehicle(const VehicleDef *vehicleDef)
{
  return ?BG_Door_ValidVehicle@@YA_NPEBUVehicleDef@@@Z(vehicleDef);
}

/*
==============
PM_Door_UpdateState
==============
*/

void __fastcall PM_Door_UpdateState(pmove_t *pm, pml_t *pml, unsigned int stateIndex)
{
  ?PM_Door_UpdateState@@YAXPEAVpmove_t@@PEAUpml_t@@I@Z(pm, pml, stateIndex);
}

/*
==============
BG_Door_GetPlayerBounds
==============
*/

void __fastcall BG_Door_GetPlayerBounds(const pmove_t *pm, Bounds *outBounds)
{
  ?BG_Door_GetPlayerBounds@@YAXPEBVpmove_t@@AEAUBounds@@@Z(pm, outBounds);
}

/*
==============
BG_Door_CalcDoorAngles
==============
*/

void __fastcall BG_Door_CalcDoorAngles(const vec3_t *initialAngles, float targetAngle, vec3_t *outDoorAngles)
{
  ?BG_Door_CalcDoorAngles@@YAXAEBTvec3_t@@MAEAT1@@Z(initialAngles, targetAngle, outDoorAngles);
}

/*
==============
BG_CalcDoorUseSpeed
==============
*/

double __fastcall BG_CalcDoorUseSpeed(pmove_t *pm, const DoorState *ds)
{
  double result; 

  *(float *)&result = ?BG_CalcDoorUseSpeed@@YAMPEAVpmove_t@@PEBUDoorState@@@Z(pm, ds);
  return result;
}

/*
==============
BG_Door_IsOwnedInAntilag
==============
*/

bool __fastcall BG_Door_IsOwnedInAntilag(const pmove_t *pm, unsigned int scriptableIndex)
{
  return ?BG_Door_IsOwnedInAntilag@@YA_NPEBVpmove_t@@I@Z(pm, scriptableIndex);
}

/*
==============
BG_Door_TestTouching2D
==============
*/

bool __fastcall BG_Door_TestTouching2D(pmove_t *pm, const DoorState *ds, float *outProjection, float radiusInflation)
{
  return ?BG_Door_TestTouching2D@@YA_NPEAVpmove_t@@PEBUDoorState@@PEAMM@Z(pm, ds, outProjection, radiusInflation);
}

/*
==============
PM_Door_Update
==============
*/

void __fastcall PM_Door_Update(pmove_t *pm, pml_t *pml)
{
  ?PM_Door_Update@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Door_ResolveCollision
==============
*/

void __fastcall PM_Door_ResolveCollision(pmove_t *pm, pml_t *pml, unsigned int scriptableIndex, float doorAngle, float prevDoorAngle, vec3_t *inOutAppliedInstantaneousVelocity, bool *performSlideMove)
{
  ?PM_Door_ResolveCollision@@YAXPEAVpmove_t@@PEAUpml_t@@IMMAEATvec3_t@@AEA_N@Z(pm, pml, scriptableIndex, doorAngle, prevDoorAngle, inOutAppliedInstantaneousVelocity, performSlideMove);
}

/*
==============
PM_Door_GetIgnoreBodies
==============
*/

void __fastcall PM_Door_GetIgnoreBodies(const pmove_t *pm, pml_t *pml, unsigned int *inOutPhysicsBodies, unsigned int *inOutNumPhysicsBodies)
{
  ?PM_Door_GetIgnoreBodies@@YAXPEBVpmove_t@@PEAUpml_t@@PEAI2@Z(pm, pml, inOutPhysicsBodies, inOutNumPhysicsBodies);
}

/*
==============
PM_Door_ResolveCollisions
==============
*/

void __fastcall PM_Door_ResolveCollisions(pmove_t *pm, pml_t *pml, vec3_t *inOutAppliedInstantaneousVelocity, bool *performSlideMove, BgAntiLagEntityInfo *infoList, unsigned int numInfoItems)
{
  ?PM_Door_ResolveCollisions@@YAXPEAVpmove_t@@PEAUpml_t@@AEATvec3_t@@AEA_NPEAUBgAntiLagEntityInfo@@I@Z(pm, pml, inOutAppliedInstantaneousVelocity, performSlideMove, infoList, numInfoItems);
}

/*
==============
BG_Door_GetPlayerOrigin
==============
*/

void __fastcall BG_Door_GetPlayerOrigin(const playerState_s *ps, vec3_t *outOrigin)
{
  ?BG_Door_GetPlayerOrigin@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, outOrigin);
}

/*
==============
BG_Door_BlockedByVehicle
==============
*/

bool __fastcall BG_Door_BlockedByVehicle(unsigned int scriptableIndex, int ownersVehicle, const BgHandler *handler, float targetAngle, bool fullTest)
{
  return ?BG_Door_BlockedByVehicle@@YA_NIHPEBVBgHandler@@M_N@Z(scriptableIndex, ownersVehicle, handler, targetAngle, fullTest);
}

/*
==============
PM_Door_GetScriptableBodies
==============
*/

void __fastcall PM_Door_GetScriptableBodies(const pmove_t *pm, unsigned int scriptableIndex, unsigned int *inOutPhysicsBodies, unsigned int *inOutNumPhysicsBodies)
{
  ?PM_Door_GetScriptableBodies@@YAXPEBVpmove_t@@IPEAI1@Z(pm, scriptableIndex, inOutPhysicsBodies, inOutNumPhysicsBodies);
}

/*
==============
BG_Door_NearestAngle
==============
*/

double __fastcall BG_Door_NearestAngle(const ScriptablePartDef *doorPartDef, float doorAngle, float initialDoorAngle, unsigned int *outStateIdx)
{
  double result; 

  *(float *)&result = ?BG_Door_NearestAngle@@YAMPEBUScriptablePartDef@@MMPEAI@Z(doorPartDef, doorAngle, initialDoorAngle, outStateIdx);
  return result;
}

/*
==============
BG_CalcDoorUseSpeed
==============
*/
float BG_CalcDoorUseSpeed(pmove_t *pm, const DoorState *ds)
{
  playerState_s *ps; 
  DoorMoveType moveType; 
  int v8; 
  const dvar_t *v9; 
  int integer; 
  const char *v12; 
  const dvar_t *v13; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 28, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 28, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  moveType = ds->moveType;
  v8 = ps->serverTime - ds->moveTime;
  if ( ((moveType - 10) & 0xFFFFFFFC) != 0 || moveType == DOOR_MOVE_PUSHING_BLOCKED )
  {
    v13 = DVARINT_bg_doorUseAccelTime;
    if ( !DVARINT_bg_doorUseAccelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorUseAccelTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    _RDI = DVARFLT_bg_doorUseSpeed;
    if ( !DVARFLT_bg_doorUseSpeed )
    {
      v12 = "bg_doorUseSpeed";
LABEL_19:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v12) )
        __debugbreak();
    }
  }
  else
  {
    v9 = DVARINT_bg_doorPeekAccelTime;
    if ( !DVARINT_bg_doorPeekAccelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorPeekAccelTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    _RDI = DVARFLT_bg_doorPeekSpeed;
    if ( !DVARFLT_bg_doorPeekSpeed )
    {
      v12 = "bg_doorPeekSpeed";
      goto LABEL_19;
    }
  }
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm2, dword ptr [rdi+28h] }
  if ( v8 >= integer )
  {
    __asm { vmovaps xmm0, xmm2 }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vcvtsi2ss xmm1, xmm1, ebx
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm1, xmm2
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Door_BlockedByVehicle
==============
*/

bool __fastcall BG_Door_BlockedByVehicle(unsigned int scriptableIndex, int ownersVehicle, const BgHandler *handler, double targetAngle, bool fullTest)
{
  Physics_WorldId v16; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hknpShape *v39; 
  Physics_WorldId v42; 
  Physics_WorldId v43; 
  bool result; 
  int v75; 
  Physics_ShapecastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v77; 
  __int64 v78; 
  vec3_t maxs; 
  vec3_t mins; 
  int v81; 
  vec3_t start; 
  vec3_t angles; 
  char v85[12]; 
  vec4_t quat; 
  PhysicsQuery_ShapecastHit hit; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  v78 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmm6, xmm3
  }
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 175, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  handler->GetScriptableDimensions((BgHandler *)handler, scriptableIndex, (float *)&v75, (vec3_t *)&v81, (Bounds *)v85);
  v16 = handler->GetPhysicsWorldId((BgHandler *)handler);
  ClosestResult = PhysicsQuery_GetClosestResult(v16);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 183, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  __asm
  {
    vmovss  xmm1, [rsp+240h+var_1F0]; angle2
    vmovaps xmm0, xmm6; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovss  xmm8, [rsp+240h+var_1F0]
    vmulss  xmm11, xmm8, cs:__real@3c8efa35
    vmovaps xmm2, xmm11
    vmovaps xmm0, xmm2
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_();
  __asm
  {
    vmovups xmm9, xmm0
    vshufps xmm12, xmm0, xmm0, 1
  }
  if ( fullTest )
  {
    __asm
    {
      vmulss  xmm1, xmm12, [rbp+140h+var_114]
      vaddss  xmm2, xmm1, [rbp+140h+var_150]
      vmovss  dword ptr [rbp+140h+start], xmm2
      vmulss  xmm0, xmm9, [rbp+140h+var_114]
      vaddss  xmm1, xmm0, [rbp+140h+var_14C]
      vmovss  dword ptr [rbp+140h+start+4], xmm1
      vmovss  xmm2, [rbp+140h+var_148]
      vmovss  dword ptr [rbp+140h+start+8], xmm2
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rbp+140h+angles], xmm6
      vmovss  dword ptr [rbp+140h+angles+4], xmm8
      vmovss  dword ptr [rbp+140h+angles+8], xmm6
    }
    AnglesToQuat(&angles, &quat);
    __asm
    {
      vmovss  xmm4, [rbp+140h+var_114]
      vmulss  xmm1, xmm4, cs:__real@c0000000
      vxorps  xmm0, xmm4, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbp+140h+mins], xmm0
      vmovss  dword ptr [rbp+140h+mins+4], xmm1
      vmovss  dword ptr [rbp+140h+mins+8], xmm6
      vmovss  xmm2, cs:__real@40000000
      vmulss  xmm3, xmm2, [rbp+140h+var_10C]
      vmulss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rbp+140h+maxs], xmm4
      vmovss  dword ptr [rbp+140h+maxs+4], xmm1
      vmovss  dword ptr [rbp+140h+maxs+8], xmm3
    }
    v39 = Physics_CreateShapeConvexHullFromAABB(&mins, &maxs);
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 210, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
      __debugbreak();
    __asm
    {
      vmovss  [rsp+240h+extendedData.startTolerance], xmm6
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rsp+240h+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    extendedData.ignoreBodies = NULL;
    __asm
    {
      vmovss  [rsp+240h+extendedData.collisionBuffer], xmm6
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+240h+extendedData.nonBrushShape], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = 0x800000;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v77, 1, 1);
    if ( ownersVehicle != 2047 && ownersVehicle )
    {
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v77, 0, ownersVehicle, 1, 1, 0, 1, 1);
      extendedData.ignoreBodies = &v77;
    }
  }
  else
  {
    __asm
    {
      vandps  xmm0, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3c23d70a
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm7, xmm6
      vsubss  xmm0, xmm8, cs:__real@42b40000
      vmulss  xmm0, xmm0, cs:__real@3c8efa35
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm
    {
      vshufps xmm7, xmm0, xmm0, 1
      vmovaps xmm7, xmm7
      vmovaps xmm5, xmm0
      vmovss  xmm4, [rbp+140h+var_114]
      vmulss  xmm0, xmm12, xmm4
      vaddss  xmm2, xmm0, [rbp+140h+var_150]
      vmulss  xmm1, xmm9, xmm4
      vaddss  xmm3, xmm1, [rbp+140h+var_14C]
      vmulss  xmm0, xmm7, xmm4
      vaddss  xmm2, xmm0, xmm2
      vmovss  dword ptr [rbp+140h+start], xmm2
      vmulss  xmm1, xmm5, xmm4
      vaddss  xmm0, xmm1, xmm3
      vmovss  dword ptr [rbp+140h+start+4], xmm0
      vmovss  xmm2, [rbp+140h+var_148]
      vmovss  dword ptr [rbp+140h+start+8], xmm2
      vmovss  dword ptr [rbp+140h+mins], xmm6
      vmovss  dword ptr [rbp+140h+mins+4], xmm8
      vmovss  dword ptr [rbp+140h+mins+8], xmm6
    }
    AnglesToQuat(&mins, &quat);
    __asm
    {
      vmovss  xmm2, [rbp+140h+var_114]
      vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbp+140h+angles], xmm0
      vmovss  dword ptr [rbp+140h+angles+4], xmm0
      vmovss  dword ptr [rbp+140h+angles+8], xmm6
      vmovss  xmm0, [rbp+140h+var_10C]
      vmulss  xmm1, xmm0, cs:__real@40000000
      vmovss  dword ptr [rbp+140h+maxs], xmm2
      vmovss  dword ptr [rbp+140h+maxs+4], xmm2
      vmovss  dword ptr [rbp+140h+maxs+8], xmm1
    }
    v39 = Physics_CreateShapeConvexHullFromAABB(&angles, &maxs);
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 295, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
      __debugbreak();
    __asm
    {
      vmovss  [rsp+240h+extendedData.startTolerance], xmm6
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rsp+240h+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    extendedData.ignoreBodies = NULL;
    __asm
    {
      vmovss  [rsp+240h+extendedData.collisionBuffer], xmm6
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+240h+extendedData.nonBrushShape], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = 0x800000;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v77, 1, 1);
    if ( ownersVehicle != 2047 && ownersVehicle )
    {
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v77, 0, ownersVehicle, 1, 1, 0, 1, 1);
      extendedData.ignoreBodies = &v77;
    }
  }
  v42 = handler->GetPhysicsWorldId((BgHandler *)handler);
  PhysicsQuery_ImmediateShapecastClosest(v42, v39, &start, &start, &quat, &extendedData, &hit);
  v43 = handler->GetPhysicsWorldId((BgHandler *)handler);
  Physics_ReleaseShape(v43, v39, 1);
  if ( hit.isValid )
  {
    HavokPhysics_IgnoreBodies::~HavokPhysics_IgnoreBodies(&v77);
    result = 1;
  }
  else
  {
    HavokPhysics_IgnoreBodies::~HavokPhysics_IgnoreBodies(&v77);
    result = 0;
  }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm11, xmmword ptr [r11-58h]
    vmovaps xmm12, xmmword ptr [r11-68h]
  }
  return result;
}

/*
==============
BG_Door_CalcDoorAngles
==============
*/

void __fastcall BG_Door_CalcDoorAngles(const vec3_t *initialAngles, double targetAngle, vec3_t *outDoorAngles)
{
  char v22; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = outDoorAngles;
  __asm { vmovaps xmm6, xmm1 }
  _RDI = initialAngles;
  AnglesToAxis(initialAngles, &axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+axis+1Ch]
    vmovss  xmm1, dword ptr [rsp+78h+axis+18h]
    vmovss  xmm5, dword ptr [rsp+78h+axis+20h]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm1, xmm4, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm0, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm0
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3f7f069e
  }
  if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 356, ASSERT_TYPE_ASSERT, "(fabsf( angles_up[2] ) >= upDiffLimit)", "%s\n\tBG_Door_CalcDoorAngles: We assume door is rotating around a vertical axis.\n", "fabsf( angles_up[2] ) >= upDiffLimit") )
    __debugbreak();
  _RBX->v[0] = _RDI->v[0];
  _RBX->v[1] = _RDI->v[1];
  _RBX->v[2] = _RDI->v[2];
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4]; angle2
    vmovaps xmm0, xmm6; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vaddss  xmm0, xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm0
    vmovaps xmm6, [rsp+78h+var_18]
  }
}

/*
==============
BG_Door_GetPlayerBounds
==============
*/
void BG_Door_GetPlayerBounds(const pmove_t *pm, Bounds *outBounds)
{
  playerState_s *ps; 
  int entity; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 

  _RBX = outBounds;
  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 129, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 130, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 130, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  entity = ps->vehicleState.entity;
  if ( BG_IsRemoteTurretActive(ps) )
  {
    _RBX->midPoint.v[0] = ps->vehicleState.origin.v[0];
    _RBX->midPoint.v[1] = ps->vehicleState.origin.v[1];
    _RBX->midPoint.v[2] = ps->vehicleState.origin.v[2];
    v6 = DCONST_DVARFLT_bg_doorWheelsonRadius;
    if ( !DCONST_DVARFLT_bg_doorWheelsonRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorWheelsonRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    LODWORD(_RBX->halfSize.v[0]) = v6->current.integer;
    v7 = DCONST_DVARFLT_bg_doorWheelsonRadius;
    if ( !DCONST_DVARFLT_bg_doorWheelsonRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorWheelsonRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    LODWORD(_RBX->halfSize.v[1]) = v7->current.integer;
    v8 = DCONST_DVARFLT_bg_doorWheelsonRadius;
    if ( !DCONST_DVARFLT_bg_doorWheelsonRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorWheelsonRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    LODWORD(_RBX->halfSize.v[2]) = v8->current.integer;
  }
  if ( entity == 2047 )
  {
    _RAX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbx+10h], xmm1
    }
  }
  else
  {
    _RBX->midPoint.v[0] = ps->vehicleState.origin.v[0];
    _RBX->midPoint.v[1] = ps->vehicleState.origin.v[1];
    _RBX->midPoint.v[2] = ps->vehicleState.origin.v[2];
    v9 = DCONST_DVARFLT_bg_doorATVRadius;
    if ( !DCONST_DVARFLT_bg_doorATVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorATVRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    LODWORD(_RBX->halfSize.v[0]) = v9->current.integer;
    v10 = DCONST_DVARFLT_bg_doorATVRadius;
    if ( !DCONST_DVARFLT_bg_doorATVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorATVRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    LODWORD(_RBX->halfSize.v[1]) = v10->current.integer;
    v11 = DCONST_DVARFLT_bg_doorATVRadius;
    if ( !DCONST_DVARFLT_bg_doorATVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorATVRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    LODWORD(_RBX->halfSize.v[2]) = v11->current.integer;
  }
}

/*
==============
BG_Door_GetPlayerOrigin
==============
*/
void BG_Door_GetPlayerOrigin(const playerState_s *ps, vec3_t *outOrigin)
{
  int entity; 

  _RDI = outOrigin;
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 112, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  entity = _RBX->vehicleState.entity;
  if ( BG_IsRemoteTurretActive(_RBX) || entity != 2047 )
  {
    _RDI->v[0] = _RBX->vehicleState.origin.v[0];
    _RDI->v[1] = _RBX->vehicleState.origin.v[1];
    __asm { vmovss  xmm0, dword ptr [rbx+134h] }
  }
  else
  {
    _RDI->v[0] = _RBX->origin.v[0];
    _RDI->v[1] = _RBX->origin.v[1];
    __asm { vmovss  xmm0, dword ptr [rbx+38h] }
  }
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
}

/*
==============
BG_Door_IsOwnedInAntilag
==============
*/
char BG_Door_IsOwnedInAntilag(const pmove_t *pm, unsigned int scriptableIndex)
{
  BgAntiLagEntityInfo *v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  unsigned int *v9; 
  unsigned __int8 flags; 
  char v11; 
  char v12; 
  unsigned int outNumInfoItems[4]; 
  BgAntiLagEntityInfo outInfoList[248]; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 323, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v4 = outInfoList;
  v5 = 248i64;
  do
  {
    BgAntiLagEntityInfo::BgAntiLagEntityInfo(v4++);
    --v5;
  }
  while ( v5 );
  BgAntiLag::GetClosestCharacters((BgAntiLag *)pm->antiLag, pm->ps->clientNum, 0x10u, pm->cmd.serverTime, 0xF8u, outNumInfoItems, outInfoList);
  v6 = 0;
  if ( outNumInfoItems[0] )
  {
    while ( 2 )
    {
      v7 = 0;
      v8 = 140i64 * v6;
      v9 = &outInfoList[0].doorIndex[v8 / 4];
      do
      {
        if ( scriptableIndex == *v9 )
        {
          if ( !&outInfoList[v8 / 0x8C] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 709, ASSERT_TYPE_ASSERT, "(antilagEntity)", (const char *)&queryFormat, "antilagEntity") )
            __debugbreak();
          flags = outInfoList[v8 / 0x8C].flags;
          v11 = flags >> 5;
          v12 = flags >> 6;
          if ( v7 )
            v11 = v12;
          if ( (v11 & 1) != 0 )
            return 1;
        }
        ++v7;
        ++v9;
      }
      while ( v7 < 2 );
      if ( ++v6 < outNumInfoItems[0] )
        continue;
      break;
    }
  }
  return 0;
}

/*
==============
BG_Door_NearestAngle
==============
*/

float __fastcall BG_Door_NearestAngle(const ScriptablePartDef *doorPartDef, double doorAngle, double initialDoorAngle, unsigned int *outStateIdx)
{
  unsigned int v16; 
  __int64 v19; 
  unsigned int v20; 
  ScriptableStateDef *v21; 
  __int64 numEvents; 
  char v28; 
  char v29; 
  char v39; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  if ( !doorPartDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 65, ASSERT_TYPE_ASSERT, "(doorPartDef)", (const char *)&queryFormat, "doorPartDef") )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm6; angle2
    vmovaps xmm0, xmm7; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  v16 = 0;
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm7, xmm6
  }
  v19 = 0i64;
  v20 = -1;
  do
  {
    if ( v16 >= doorPartDef->numStates )
      break;
    v21 = &doorPartDef->states[v19];
    if ( v21 )
    {
      numEvents = (int)v21->base.numEvents;
      if ( numEvents > 0 )
      {
        _RBX = 0i64;
        do
        {
          _RDI = v21->base.events;
          if ( _RDI[_RBX].type == Scriptable_EventType_Move )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+rbx+30h]; angle1
              vmovaps xmm1, xmm8; angle2
            }
            *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
            __asm
            {
              vandps  xmm0, xmm0, xmm9
              vcomiss xmm0, xmm6
            }
            if ( v28 | v29 )
            {
              __asm { vmovss  xmm7, dword ptr [rdi+rbx+30h] }
              v20 = v16;
              __asm { vmovaps xmm6, xmm0 }
            }
          }
          ++_RBX;
          --numEvents;
        }
        while ( numEvents );
      }
    }
    ++v16;
    ++v19;
  }
  while ( v16 <= 8 );
  if ( v20 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 99, ASSERT_TYPE_ASSERT, "(nearestStateIndex != -1)", (const char *)&queryFormat, "nearestStateIndex != -1") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm7 }
  if ( outStateIdx )
    *outStateIdx = v20;
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+98h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Door_TestTouching2D
==============
*/

bool __fastcall BG_Door_TestTouching2D(pmove_t *pm, const DoorState *ds, float *outProjection, double radiusInflation)
{
  playerState_s *ps; 
  char v18; 
  char v24; 
  bool result; 
  char v65[8]; 
  int v66[4]; 
  vec3_t outOrigin; 
  char v68[12]; 
  Bounds outBounds; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-0A8h], xmm14 }
  _RSI = outProjection;
  _R14 = ds;
  __asm { vmovaps xmm14, xmm3 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 442, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 442, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm->m_bgHandler->GetScriptableDimensions((BgHandler *)pm->m_bgHandler, _R14->index, (float *)v65, (vec3_t *)v66, (Bounds *)v68);
  BG_Door_GetPlayerOrigin(ps, &outOrigin);
  BG_Door_GetPlayerBounds(pm, &outBounds);
  __asm
  {
    vmovss  xmm0, [rsp+138h+var_CC]
    vmulss  xmm1, xmm0, cs:__real@40000000
    vmovss  xmm3, [rsp+138h+var_F8]
    vmovss  xmm4, dword ptr [rsp+138h+outOrigin+8]
    vaddss  xmm2, xmm1, xmm3
    vcomiss xmm4, xmm2
  }
  if ( !(v18 | v24) )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+138h+outBounds.halfSize+8]
    vmulss  xmm1, xmm0, cs:__real@40000000
    vaddss  xmm2, xmm1, xmm4
    vcomiss xmm2, xmm3
  }
  if ( v18 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35
    vmovaps [rsp+138h+var_38], xmm6
    vmovaps [rsp+138h+var_48], xmm7
    vmovaps [rsp+138h+var_58], xmm8
    vmovaps [rsp+138h+var_68], xmm9
    vmovaps [rsp+138h+var_78], xmm10
    vmovaps [rsp+138h+var_88], xmm11
    vmovaps [rsp+138h+var_98], xmm13
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_();
  __asm
  {
    vmovss  xmm9, [rsp+138h+var_100]
    vmovss  xmm6, [rsp+138h+var_FC]
    vmovss  xmm8, dword ptr [rsp+138h+outOrigin]
    vmovss  xmm7, dword ptr [rsp+138h+outOrigin+4]
    vsubss  xmm1, xmm8, xmm9
    vshufps xmm11, xmm0, xmm0, 1
    vmulss  xmm3, xmm1, xmm11
    vmovups xmm10, xmm0
    vsubss  xmm2, xmm7, xmm6
    vmulss  xmm1, xmm2, xmm10
    vaddss  xmm13, xmm3, xmm1
    vmovss  xmm3, [rsp+138h+var_D4]
    vmulss  xmm2, xmm3, cs:__real@40000000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm13; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vaddss  xmm5, xmm14, dword ptr [rsp+138h+outBounds.halfSize+4]
    vmulss  xmm1, xmm0, xmm10
    vmovaps xmm10, [rsp+138h+var_78]
    vaddss  xmm3, xmm1, xmm6
    vmovaps xmm6, [rsp+138h+var_38]
    vsubss  xmm4, xmm7, xmm3
    vmovaps xmm7, [rsp+138h+var_48]
    vmulss  xmm0, xmm0, xmm11
    vmovaps xmm11, [rsp+138h+var_88]
    vaddss  xmm2, xmm0, xmm9
    vmovaps xmm9, [rsp+138h+var_68]
    vsubss  xmm1, xmm8, xmm2
    vmovaps xmm8, [rsp+138h+var_58]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
  }
  if ( _RSI )
    __asm { vmovss  dword ptr [rsi], xmm13 }
  __asm
  {
    vmovaps xmm13, [rsp+138h+var_98]
    vmulss  xmm0, xmm5, xmm5
    vcomiss xmm3, xmm0
  }
  if ( _RSI )
LABEL_13:
    result = 0;
  else
    result = 1;
  __asm { vmovaps xmm14, [rsp+138h+var_A8] }
  return result;
}

/*
==============
BG_Door_ValidVehicle
==============
*/
bool BG_Door_ValidVehicle(const VehicleDef *vehicleDef)
{
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 159, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  return ((vehicleDef->vehiclePhysicsDef.physics_gameProfile - 1) & 0xFD) == 0;
}

/*
==============
PM_Door_GetIgnoreBodies
==============
*/
void PM_Door_GetIgnoreBodies(const pmove_t *pm, pml_t *pml, unsigned int *inOutPhysicsBodies, unsigned int *inOutNumPhysicsBodies)
{
  playerState_s *ps; 
  const dvar_t *v8; 
  unsigned int *p_index; 
  __int64 v10; 
  BgAntiLagEntityInfo *v11; 
  __int64 v12; 
  BgAntiLag *antiLag; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned int *v17; 
  unsigned __int8 flags; 
  char v19; 
  char v20; 
  unsigned int i; 
  unsigned int outNumInfoItems[3]; 
  BgAntiLagEntityInfo outInfoList[248]; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 394, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 394, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !inOutPhysicsBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 396, ASSERT_TYPE_ASSERT, "(inOutPhysicsBodies)", (const char *)&queryFormat, "inOutPhysicsBodies") )
    __debugbreak();
  if ( !inOutNumPhysicsBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 397, ASSERT_TYPE_ASSERT, "(inOutNumPhysicsBodies)", (const char *)&queryFormat, "inOutNumPhysicsBodies") )
    __debugbreak();
  v8 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    p_index = &ps->doorState[0].index;
    v10 = 2i64;
    do
    {
      if ( *p_index != -1 )
        PM_Door_GetScriptableBodies(pm, *p_index, inOutPhysicsBodies, inOutNumPhysicsBodies);
      p_index += 4;
      --v10;
    }
    while ( v10 );
    v11 = outInfoList;
    v12 = 248i64;
    do
    {
      BgAntiLagEntityInfo::BgAntiLagEntityInfo(v11++);
      --v12;
    }
    while ( v12 );
    antiLag = (BgAntiLag *)pm->antiLag;
    if ( antiLag )
    {
      if ( BgAntiLag::GetClosestCharacters(antiLag, ps->clientNum, 0x10u, pm->cmd.serverTime, 0xF8u, outNumInfoItems, outInfoList) )
      {
        v14 = 0;
        for ( i = 0; v14 < outNumInfoItems[0]; i = v14 )
        {
          v15 = 0;
          v16 = 140i64 * v14;
          v17 = &outInfoList[0].doorIndex[v16 / 4];
          do
          {
            if ( *v17 != -1 )
            {
              if ( !&outInfoList[v16 / 0x8C] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 709, ASSERT_TYPE_ASSERT, "(antilagEntity)", (const char *)&queryFormat, "antilagEntity") )
                __debugbreak();
              flags = outInfoList[v16 / 0x8C].flags;
              v19 = flags >> 5;
              v20 = flags >> 6;
              if ( v15 )
                v19 = v20;
              if ( (v19 & 1) != 0 )
                PM_Door_GetScriptableBodies(pm, *v17, inOutPhysicsBodies, inOutNumPhysicsBodies);
            }
            ++v15;
            ++v17;
          }
          while ( v15 < 2 );
          v14 = i + 1;
        }
      }
    }
  }
}

/*
==============
PM_Door_GetScriptableBodies
==============
*/
void PM_Door_GetScriptableBodies(const pmove_t *pm, unsigned int scriptableIndex, unsigned int *inOutPhysicsBodies, unsigned int *inOutNumPhysicsBodies)
{
  unsigned int *v4; 
  unsigned int v8; 
  Physics_WorldId v9; 
  int NumRigidBodys; 
  unsigned int v11; 
  signed int v12; 
  int v13; 
  __int64 v14; 
  Physics_WorldId v15; 
  hknpBodyId *RigidBodyID; 
  __int64 v17; 
  hknpBodyId result; 
  unsigned int *v19; 
  unsigned int *v20; 

  v20 = inOutNumPhysicsBodies;
  v19 = inOutPhysicsBodies;
  v4 = inOutNumPhysicsBodies;
  if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 369, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  if ( !inOutPhysicsBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 370, ASSERT_TYPE_ASSERT, "(inOutPhysicsBodies)", (const char *)&queryFormat, "inOutPhysicsBodies") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 371, ASSERT_TYPE_ASSERT, "(inOutNumPhysicsBodies)", (const char *)&queryFormat, "inOutNumPhysicsBodies") )
    __debugbreak();
  v8 = pm->m_bgHandler->GetScriptablePhysicsInstanceId((BgHandler *)pm->m_bgHandler, scriptableIndex);
  if ( v8 != -1 )
  {
    v9 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
    NumRigidBodys = Physics_GetNumRigidBodys(v9, v8);
    v11 = *v4;
    v12 = 0;
    v13 = NumRigidBodys;
    if ( NumRigidBodys > 0 )
    {
      v14 = (int)*v4;
      do
      {
        if ( v14 >= 5 )
          break;
        v15 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v15 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v17) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v17) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v15 - 2) <= 5 )
        {
          LODWORD(v17) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v17) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v15 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v17) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, v15, v8, v12++);
        ++v11;
        v19[v14++] = RigidBodyID->m_serialAndIndex;
      }
      while ( v12 < v13 );
      v4 = v20;
    }
    *v4 = v11;
  }
}

/*
==============
PM_Door_ResolveCollision
==============
*/

void __fastcall PM_Door_ResolveCollision(pmove_t *pm, pml_t *pml, unsigned int scriptableIndex, double doorAngle, float prevDoorAngle, vec3_t *inOutAppliedInstantaneousVelocity, bool *performSlideMove)
{
  playerState_s *ps; 
  bool *v16; 

  __asm { vmovaps [rsp+1B0h+var_D0], xmm15 }
  _R12 = pml;
  v16 = performSlideMove;
  __asm { vmovaps xmm15, xmm3 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 941, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 941, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 942, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !BG_Ladder_IsActive(pm->ps) )
  {
    __asm
    {
      vmovaps [rsp+1B0h+var_A0], xmm12
      vxorps  xmm12, xmm12, xmm12
      vucomiss xmm12, dword ptr [r12+24h]
      vmovaps xmm12, [rsp+1B0h+var_A0]
    }
  }
  __asm { vmovaps xmm15, [rsp+1B0h+var_D0] }
}

/*
==============
PM_Door_ResolveCollisions
==============
*/
void PM_Door_ResolveCollisions(pmove_t *pm, pml_t *pml, vec3_t *inOutAppliedInstantaneousVelocity, bool *performSlideMove, BgAntiLagEntityInfo *infoList, unsigned int numInfoItems)
{
  playerState_s *ps; 
  const dvar_t *v12; 
  __int64 v13; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v20; 
  BgAntiLagEntityInfo *v22; 
  pmove_t *v23; 
  unsigned __int8 *p_flags; 
  unsigned int *doorIndex; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned __int8 v29; 
  char v30; 
  char v31; 
  char v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned __int64 v39; 
  unsigned int *v40; 
  BgAntiLagEntityInfo *v42; 
  unsigned __int8 flags; 
  char v44; 
  const dvar_t *v46; 
  bool v47; 
  float fmta; 
  float fmtb; 
  char *fmt; 
  vec3_t *inOutAppliedInstantaneousVelocitya; 
  bool *performSlideMovea; 
  __int64 v68; 
  __int64 v69; 
  char v70; 
  unsigned int outNumInfoItems; 
  __int64 v72; 
  unsigned int v73; 
  pmove_t *pma; 
  int gameTime; 
  __int64 v76; 
  BgAntiLagEntityInfo *v77; 
  playerState_s *v78; 
  bool *v79; 
  vec3_t *v80; 
  unsigned int *v81; 
  unsigned int *v82; 
  __int64 v83; 
  pml_t *pmla; 
  __int64 v85; 
  BgAntiLagEntityInfo outInfoList[2]; 
  void *retaddr; 

  _RAX = &retaddr;
  v85 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  v79 = performSlideMove;
  v80 = inOutAppliedInstantaneousVelocity;
  pmla = pml;
  pma = pm;
  v77 = infoList;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Door_ResolveCollisions");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 1121, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  v78 = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 1121, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 1122, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v12 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    v13 = 0i64;
    _RBP = pml->doorPrevAngle;
    _RBX = &ps->doorState[0].angle;
    v16 = 2i64;
    do
    {
      v17 = *((_DWORD *)_RBX - 1);
      if ( v17 != -1 && (*((_DWORD *)_RBX + 2) || pml->doorIsClosed[v13]) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0]
          vmovss  dword ptr [rsp+268h+fmt], xmm0
          vmovss  xmm3, dword ptr [rbx]; doorAngle
        }
        PM_Door_ResolveCollision(pm, pml, v17, *(float *)&_XMM3, fmta, v80, v79);
      }
      ++v13;
      ++_RBP;
      _RBX += 4;
      --v16;
    }
    while ( v16 );
    v20 = 2i64;
    _R13 = (__int64)v78;
    if ( numInfoItems )
    {
      outNumInfoItems = 0;
      v22 = outInfoList;
      do
      {
        BgAntiLagEntityInfo::BgAntiLagEntityInfo(v22++);
        --v20;
      }
      while ( v20 );
      v23 = pma;
      gameTime = pma->oldcmd.serverTime;
      v70 = 0;
      v76 = 7i64;
      p_flags = &v77->flags;
      doorIndex = v77->doorIndex;
      v82 = v77->doorIndex;
      v83 = numInfoItems;
      do
      {
        v26 = 0;
        v73 = 0;
        v27 = 0i64;
        v72 = 0i64;
        v81 = doorIndex;
        do
        {
          v28 = *doorIndex;
          if ( p_flags == (unsigned __int8 *)24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 709, ASSERT_TYPE_ASSERT, "(antilagEntity)", (const char *)&queryFormat, "antilagEntity") )
            __debugbreak();
          v29 = *p_flags;
          if ( v26 )
            v30 = v29 >> 6;
          else
            v30 = v29 >> 5;
          v31 = v30 & 1;
          if ( v28 - 1 <= 0xFFFFFFFD )
          {
            if ( !v70 )
            {
              BgAntiLag::GetClosestCharacters((BgAntiLag *)v23->antiLag, *(_DWORD *)(_R13 + 460), 0x10u, gameTime, 0xF8u, &outNumInfoItems, outInfoList);
              v70 = 1;
            }
            _RAX = v27 + v76;
            _RCX = v77;
            __asm
            {
              vmovss  xmm7, dword ptr [rcx+rax*4]
              vmovaps xmm6, xmm7
            }
            v36 = 0;
            v37 = 0;
            if ( !outNumInfoItems )
              goto LABEL_51;
            do
            {
              v38 = 0;
              v39 = 140i64 * v37;
              v40 = &outInfoList[0].doorIndex[v39 / 4];
              while ( *v40 != v28 || *(&outInfoList[0].entityIndex + 70 * v37) != *((_WORD *)p_flags + 1) )
              {
                ++v38;
                ++v40;
                if ( v38 >= 2 )
                  goto LABEL_48;
              }
              _RCX = v38 + 35i64 * v37;
              __asm { vmovss  xmm6, [rsp+rcx*4+268h+outInfoList.baseclass_0.doorAngle] }
              v42 = &outInfoList[v39 / 0x8C];
              if ( !&outInfoList[v39 / 0x8C] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 709, ASSERT_TYPE_ASSERT, "(antilagEntity)", (const char *)&queryFormat, "antilagEntity") )
                __debugbreak();
              flags = v42->flags;
              if ( v38 )
                v44 = flags >> 6;
              else
                v44 = flags >> 5;
              v36 = v44 & 1;
LABEL_48:
              ++v37;
            }
            while ( v37 < outNumInfoItems );
            _R13 = (__int64)v78;
            v26 = v73;
            if ( !v36 )
            {
              v23 = pma;
              v27 = v72;
LABEL_51:
              if ( !v31 )
                goto LABEL_65;
            }
            if ( *(_DWORD *)(_R13 + 1020) == v28 && *(_DWORD *)(_R13 + 1032) || *(_DWORD *)(_R13 + 1036) == v28 && *(_DWORD *)(_R13 + 1048) )
            {
              v23 = pma;
            }
            else
            {
              __asm
              {
                vmovss  dword ptr [rsp+268h+fmt], xmm6
                vmovaps xmm3, xmm7; doorAngle
              }
              v23 = pma;
              PM_Door_ResolveCollision(pma, pmla, v28, *(float *)&_XMM3, fmtb, v80, v79);
              v46 = DCONST_DVARINT_bg_doorResolveCollisionDebugPrint;
              if ( !DCONST_DVARINT_bg_doorResolveCollisionDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorResolveCollisionDebugPrint") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v46);
              if ( v46->current.integer == *(_DWORD *)(_R13 + 460) )
              {
                v47 = v23->m_bgHandler->IsServer((BgHandler *)v23->m_bgHandler);
                __asm
                {
                  vmovss  xmm0, dword ptr [r13+40h]
                  vmovss  xmm4, dword ptr [r13+3Ch]
                  vmovss  xmm5, dword ptr [r13+34h]
                  vmovss  xmm3, dword ptr [r13+30h]
                  vcvtss2sd xmm2, xmm7, xmm7
                  vcvtss2sd xmm1, xmm6, xmm6
                  vcvtss2sd xmm0, xmm0, xmm0
                  vcvtss2sd xmm4, xmm4, xmm4
                  vcvtss2sd xmm5, xmm5, xmm5
                  vcvtss2sd xmm3, xmm3, xmm3
                  vmovq   r8, xmm2
                  vmovq   rdx, xmm1
                  vmovq   r9, xmm3
                }
                LODWORD(v69) = v23->cmd.serverTime;
                LODWORD(v68) = v23->oldcmd.serverTime;
                __asm
                {
                  vmovsd  [rsp+268h+performSlideMove], xmm0
                  vmovsd  [rsp+268h+inOutAppliedInstantaneousVelocity], xmm4
                  vmovsd  [rsp+268h+fmt], xmm5
                }
                if ( v47 )
                  Com_Printf_NoFilter("SERVER PM_Door_ResolveCollisions - Prev Angle: %0.6f, Curr Angle: %0.6f, Origin %0.6f %0.6f Vel %0.6f %0.6f PrevTime: %d Time: %d \n", *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, *(double *)&inOutAppliedInstantaneousVelocitya, *(double *)&performSlideMovea, v68, v69);
                else
                  Com_Printf_NoFilter("CLIENT PM_Door_ResolveCollisions - Prev Angle: %0.6f, Curr Angle: %0.6f, Origin %0.6f %0.6f Vel %0.6f %0.6f Prev Found: %d, Time: %d \n", *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, *(double *)&inOutAppliedInstantaneousVelocitya, *(double *)&performSlideMovea, v68, v69);
              }
            }
            v27 = v72;
          }
LABEL_65:
          v73 = ++v26;
          v72 = ++v27;
          doorIndex = ++v81;
        }
        while ( v26 < 2 );
        p_flags += 140;
        doorIndex = v82 + 35;
        v82 += 35;
        v76 += 35i64;
        --v83;
      }
      while ( v83 );
    }
  }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, [rsp+268h+var_58]
    vmovaps xmm7, [rsp+268h+var_68]
  }
}

/*
==============
PM_Door_Update
==============
*/
void PM_Door_Update(pmove_t *pm, pml_t *pml)
{
  signed int i; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Door_Update");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 929, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm", -2i64) )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 929, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 930, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  for ( i = 0; i < 2; ++i )
    PM_Door_UpdateState(pm, pml, i);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Door_UpdateState
==============
*/
void PM_Door_UpdateState(pmove_t *pm, pml_t *pml, unsigned int stateIndex)
{
  __int64 v13; 
  const dvar_t *v17; 
  unsigned int moveType; 
  bool v43; 
  unsigned int v52; 
  int entity; 
  bool v59; 
  bool v60; 
  char v63; 
  char v65; 
  const dvar_t *v66; 
  char v77; 
  unsigned int index; 
  bool v84; 
  bool IsOwnedInAntilag; 
  unsigned int v86; 
  char v88; 
  unsigned int v89; 
  char v113; 
  bool v123; 
  bool v130; 
  bool v131; 
  bool v132; 
  bool v133; 
  bool v154; 
  unsigned int v174; 
  bool v183; 
  const char *v185; 
  char *fmt; 
  char *fmta; 
  __int64 v219; 
  double v220; 
  __int64 v221; 
  double v222; 
  unsigned int v223; 
  bool v224; 
  int v225; 
  int v226; 
  float outProjection[2]; 
  unsigned int outIndex[2]; 
  unsigned int v230; 
  vec3_t outOrigin; 
  int v232; 
  char v233[12]; 
  Bounds outBounds; 

  v13 = stateIndex;
  _R13 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 551, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 551, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 552, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v17 = DVARBOOL_bg_doorEnableEnhanced;
  _R15 = v13;
  _RBX = &_RSI->doorState[v13];
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled && _RBX->index != -1 )
  {
    _R13->doorPrevAngle[_R15] = _RBX->angle;
    moveType = _RBX->moveType;
    if ( moveType - 13 > 1 )
    {
      v60 = !pm->doorAvailable[_R15];
      __asm
      {
        vmovaps [rsp+190h+var_40], xmm6
        vmovaps [rsp+190h+var_50], xmm7
        vmovaps [rsp+190h+var_60], xmm8
        vmovaps [rsp+190h+var_70], xmm9
        vmovaps [rsp+190h+var_80], xmm10
        vmovaps [rsp+190h+var_90], xmm11
        vmovaps [rsp+190h+var_A0], xmm12
        vmovaps [rsp+190h+var_B0], xmm13
        vmovaps [rsp+190h+var_C0], xmm14
        vmovaps [rsp+190h+var_D0], xmm15
      }
      if ( v60 && moveType )
        _RBX->moveType = DOOR_MOVE_INVALID;
      pm->m_bgHandler->GetScriptableDimensions((BgHandler *)pm->m_bgHandler, _RBX->index, (float *)&v225, (vec3_t *)&v232, (Bounds *)v233);
      BG_Door_GetPlayerOrigin(_RSI, &outOrigin);
      BG_Door_GetPlayerBounds(pm, &outBounds);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+24h]
        vmulss  xmm1, xmm3, dword ptr [rsi+3Ch]
        vaddss  xmm4, xmm1, dword ptr [rsp+190h+outOrigin]
        vmulss  xmm1, xmm3, dword ptr [rsi+40h]
        vaddss  xmm2, xmm1, dword ptr [rsp+190h+outOrigin+4]
        vsubss  xmm3, xmm2, [rsp+190h+var_114]
        vsubss  xmm5, xmm4, [rsp+190h+var_118]
        vmovss  xmm9, cs:__real@3f800000
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm15, xmm1, xmm0
        vsqrtss xmm2, xmm15, xmm15
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm9, xmm0
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm6, xmm5, xmm1
        vmulss  xmm7, xmm3, xmm1
        vmovss  xmm1, [rsp+190h+var_14C]; angle2
      }
      _R13->doorIsClosed[_R15] = 0;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]; angle1
        vmovss  [rsp+190h+var_134], xmm15
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm0, xmm0, xmm14
        vcomiss xmm0, cs:__real@3c23d70a
      }
      if ( v59 && _RBX->moveType != DOOR_MOVE_PUSHING )
        _R13->doorIsClosed[_R15] = 1;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorTouchRadiusInflation, "bg_doorTouchRadiusInflation");
      __asm { vmovaps xmm3, xmm0; radiusInflation }
      v43 = BG_Door_TestTouching2D(pm, _RBX, outProjection, *(float *)&_XMM3);
      v224 = v43;
      __asm
      {
        vmovaps xmm1, xmm6; X
        vmovaps xmm0, xmm7; Y
      }
      v230 = _RBX->moveType;
      *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@42652ee0; angle1
        vmovss  xmm1, dword ptr [rbx+4]; angle2
        vmovss  [rsp+190h+var_138], xmm0
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, [rsp+190h+var_14C]; angle2
        vmovaps xmm13, xmm0
        vmovss  xmm0, dword ptr [rbx+4]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      v52 = _RBX->moveType;
      __asm
      {
        vmovss  xmm11, cs:__real@bf800000
        vmovss  xmm6, cs:__real@42b40000
      }
      entity = pm->ps->vehicleState.entity;
      __asm { vmovss  xmm8, cs:__real@40000000 }
      v226 = entity;
      __asm
      {
        vmovaps xmm12, xmm0
        vxorps  xmm10, xmm10, xmm10
      }
      v59 = v52 == 7;
      v60 = v52 == 8;
      if ( v52 - 7 > 1 )
      {
        v59 = v52 < 0xD;
        v60 = v52 == 13;
        if ( v52 != 13 )
        {
          v59 = 0;
          v60 = !pm->doorAvailable[_R15];
          if ( pm->doorAvailable[_R15] )
          {
            if ( !_R13->meleeFired )
              goto LABEL_29;
            if ( !v43 )
              goto LABEL_29;
            __asm
            {
              vmovss  xmm7, [rsp+190h+outProjection]
              vcomiss xmm7, xmm10
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorMeleeExtensionDist, "bg_doorMeleeExtensionDist");
            __asm
            {
              vmulss  xmm2, xmm8, [rbp+90h+var_FC]
              vaddss  xmm0, xmm0, xmm2
              vcomiss xmm7, xmm0
            }
            if ( v59 )
              v63 = 1;
            else
LABEL_29:
              v63 = 0;
            if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x14u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x1Du) )
              goto LABEL_34;
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorBashRadiusInflation, "bg_doorBashRadiusInflation");
            __asm { vmovaps xmm3, xmm0; radiusInflation }
            if ( BG_Door_TestTouching2D(pm, _RBX, NULL, *(float *)&_XMM3) )
              v65 = 1;
            else
LABEL_34:
              v65 = 0;
            if ( v63 || (v59 = 0, v60 = v65 == 0, v65) )
            {
              v66 = DCONST_DVARSTR_bg_doorBashRumbleName;
              if ( !DCONST_DVARSTR_bg_doorBashRumbleName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorBashRumbleName") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v66);
              NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_RUMBLE, v66->current.string, outIndex);
              __asm
              {
                vmovss  xmm1, dword ptr [rbx+4]; angle2
                vmovss  xmm0, dword ptr [rsi+1DCh]; angle1
              }
              *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
              __asm
              {
                vmovaps xmm8, xmm0
                vandps  xmm7, xmm0, xmm14
              }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorBashLookAngleDifference, "bg_doorBashLookAngleDifference");
              __asm { vcomiss xmm7, xmm0 }
              if ( v59 )
                goto LABEL_44;
              __asm
              {
                vmovss  xmm1, cs:__real@43340000
                vsubss  xmm2, xmm1, xmm0
                vcomiss xmm7, xmm2
              }
              if ( !v59 )
                goto LABEL_44;
              __asm
              {
                vcmpless xmm0, xmm10, xmm8
                vblendvps xmm1, xmm11, xmm9, xmm0
                vcmpless xmm0, xmm10, xmm13
                vblendvps xmm0, xmm11, xmm9, xmm0
                vucomiss xmm1, xmm0
              }
              if ( v60 )
              {
LABEL_44:
                v77 = 0;
                v59 = 0;
                v60 = 1;
              }
              else
              {
                v77 = 1;
              }
              __asm
              {
                vandps  xmm0, xmm13, xmm14
                vcomiss xmm0, xmm6
              }
              if ( v59 || v60 )
              {
                v59 = 0;
                v60 = v77 == 0;
                if ( v77 )
                {
                  __asm
                  {
                    vcomiss xmm13, xmm10
                    vcomiss xmm12, cs:__real@c2b3fae1
                    vmovss  xmm0, [rsp+190h+var_14C]
                    vsubss  xmm3, xmm0, xmm6; targetAngle
                  }
                  v84 = BG_Door_BlockedByVehicle(_RBX->index, pm->ps->vehicleState.entity, pm->m_bgHandler, *(float *)&_XMM3, 1);
                  v59 = 0;
                  v60 = !v84;
                  if ( !v84 )
                  {
                    IsOwnedInAntilag = BG_Door_IsOwnedInAntilag(pm, _RBX->index);
                    v59 = 0;
                    v60 = !IsOwnedInAntilag;
                    if ( !IsOwnedInAntilag )
                    {
                      _RBX->moveType = DOOR_MOVE_BASH_RIGHT;
                      index = _RBX->index;
                      _RBX->moveTime = pm->cmd.serverTime;
                      BG_AddPredictableEventToPlayerstate(EV_DOOR_BASH, index, pm->cmd.serverTime, pm->weaponMap, _RSI);
                      BG_AddPredictableEventToPlayerstate(EV_PLAY_RUMBLE_ON_ENT, outIndex[0], pm->cmd.serverTime, pm->weaponMap, _RSI);
                    }
                  }
                }
              }
              __asm { vmovss  xmm8, cs:__real@40000000 }
            }
            entity = v226;
            v43 = v224;
          }
        }
      }
      __asm
      {
        vmovss  xmm0, cs:DOOR_RELEASE_DIST
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm15, xmm1
      }
      if ( !v59 && !v60 && _RBX->moveType == DOOR_MOVE_INVALID )
      {
        _RBX->moveType = DOOR_MOVE_RELEASE;
LABEL_128:
        __asm
        {
          vmovaps xmm14, [rsp+190h+var_C0]
          vmovaps xmm13, [rsp+190h+var_B0]
          vmovaps xmm12, [rsp+190h+var_A0]
          vmovaps xmm11, [rsp+190h+var_90]
          vmovaps xmm10, [rsp+190h+var_80]
          vmovaps xmm9, [rsp+190h+var_70]
          vmovaps xmm8, [rsp+190h+var_60]
          vmovaps xmm7, [rsp+190h+var_50]
          vmovaps xmm6, [rsp+190h+var_40]
          vmovaps xmm15, [rsp+190h+var_D0]
        }
        return;
      }
      v86 = _RBX->moveType;
      if ( ((v86 - 10) & 0xFFFFFFFC) != 0 )
        goto LABEL_61;
      if ( v86 == 12 )
        goto LABEL_61;
      __asm
      {
        vandps  xmm0, xmm12, xmm14
        vcomiss xmm0, cs:DOOR_PEEK_BREAK_ANGLE
      }
      if ( v86 <= 0xC )
        goto LABEL_61;
      __asm { vmovss  xmm3, cs:DOOR_PEEK_BREAK_RADIUS; radiusInflation }
      if ( !BG_Door_TestTouching2D(pm, _RBX, NULL, *(float *)&_XMM3) )
LABEL_61:
        v88 = 0;
      else
        v88 = 1;
      v89 = _RBX->moveType;
      __asm
      {
        vmovss  xmm15, cs:__real@3f000000
        vmovss  xmm14, cs:__real@43b40000
      }
      if ( v89 - 2 > 4 && v89 != 13 && v89 - 7 > 1 && (((v89 - 10) & 0xFFFFFFFC) != 0 || v89 == 12 || v88) )
      {
        if ( !pm->doorAvailable[_R15] || !v43 || _R13->doorIsClosed[_R15] && entity == 2047 )
        {
          _RBX->moveType = DOOR_MOVE_INVALID;
        }
        else
        {
          __asm
          {
            vmovss  xmm14, [rsp+190h+var_134]
            vmulss  xmm8, xmm8, [rbp+90h+var_FC]
            vsqrtss xmm14, xmm14, xmm14
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorCollisionRadiusInflation, "bg_doorCollisionRadiusInflation");
          __asm
          {
            vaddss  xmm7, xmm0, dword ptr [rbp+90h+outBounds.halfSize+4]
            vmovss  xmm0, [rsp+190h+outProjection]
            vcomiss xmm0, xmm8
          }
          if ( !v59 && !v60 )
          {
            __asm
            {
              vsubss  xmm0, xmm0, xmm8
              vdivss  xmm1, xmm0, xmm7
              vsubss  xmm0, xmm9, xmm1; val
              vxorps  xmm1, xmm1, xmm1; min
              vmovaps xmm2, xmm9; max
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmulss  xmm0, xmm0, cs:slopeCoefficient; val
              vmovaps xmm2, xmm9; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmulss  xmm7, xmm0, xmm7 }
          }
          __asm
          {
            vcmpless xmm0, xmm10, xmm13
            vblendvps xmm13, xmm9, xmm11, xmm0
            vdivss  xmm0, xmm7, xmm14
            vminss  xmm0, xmm0, xmm9; X
          }
          *(float *)&_XMM0 = asinf_0(*(float *)&_XMM0);
          __asm
          {
            vmulss  xmm1, xmm0, cs:__real@42652ee0
            vmulss  xmm0, xmm1, xmm13
            vaddss  xmm7, xmm0, [rsp+190h+var_138]
            vmovss  xmm1, [rsp+190h+var_14C]; angle2
            vmovaps xmm0, xmm7; angle1
          }
          *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          __asm { vcomiss xmm0, xmm6 }
          if ( v113 | v60 )
          {
            __asm { vcomiss xmm0, cs:__real@c2b40000 }
            if ( v113 )
            {
              __asm
              {
                vmovss  xmm0, [rsp+190h+var_14C]
                vsubss  xmm7, xmm0, xmm6
              }
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, [rsp+190h+var_14C]
              vaddss  xmm7, xmm0, xmm6
            }
          }
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+4]; angle2
            vmovaps xmm0, xmm7; angle1
          }
          *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          __asm
          {
            vaddss  xmm8, xmm0, dword ptr [rbx+4]
            vmovss  xmm1, [rsp+190h+var_14C]; angle2
            vmovaps xmm7, xmm0
            vmovaps xmm0, xmm8; angle1
          }
          AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          v123 = _RBX->moveType == DOOR_MOVE_PUSHING;
          __asm
          {
            vcmpless xmm1, xmm10, xmm0
            vblendvps xmm2, xmm11, xmm9, xmm1
            vmulss  xmm0, xmm2, xmm6
            vaddss  xmm3, xmm0, [rsp+190h+var_14C]; targetAngle
            vmovss  [rsp+190h+var_140], xmm2
          }
          if ( !v123 )
            goto LABEL_131;
          __asm
          {
            vcmpless xmm0, xmm10, xmm12
            vblendvps xmm0, xmm11, xmm9, xmm0
            vucomiss xmm2, xmm0
          }
          if ( !v123 )
          {
LABEL_131:
            if ( BG_Door_BlockedByVehicle(_RBX->index, pm->ps->vehicleState.entity, pm->m_bgHandler, *(float *)&_XMM3, 0) )
            {
              _RBX->moveType = DOOR_MOVE_PUSHING_BLOCKED;
              goto LABEL_128;
            }
          }
          v130 = _RBX->moveType == DOOR_MOVE_INVALID;
          v131 = _RBX->moveType == DOOR_MOVE_PUSHING;
          v132 = _RBX->moveType <= (unsigned int)DOOR_MOVE_PUSHING;
          if ( _RBX->moveType != DOOR_MOVE_PUSHING )
          {
            v133 = BG_Door_IsOwnedInAntilag(pm, _RBX->index);
            v130 = 0;
            v131 = !v133;
            v132 = !v133;
            if ( v133 )
            {
              _RBX->moveType = DOOR_MOVE_INVALID;
              goto LABEL_128;
            }
          }
          __asm
          {
            vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vandps  xmm0, xmm7, xmm6
            vcomiss xmm0, xmm10
          }
          if ( !v132 )
          {
            __asm
            {
              vcmpless xmm1, xmm10, xmm7
              vblendvps xmm1, xmm11, xmm9, xmm1
              vucomiss xmm1, xmm13
            }
            if ( v131 )
            {
              __asm
              {
                vmovss  xmm7, [rsp+190h+outProjection]
                vcomiss xmm7, cs:MIN_PROJECTION_PUSH_DIST
              }
              if ( !v130 )
              {
                __asm
                {
                  vmovss  dword ptr [rbx+4], xmm8
                  vmovss  xmm1, [rsp+190h+var_14C]; angle2
                  vmovaps xmm0, xmm8; angle1
                }
                *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
                __asm
                {
                  vaddss  xmm0, xmm0, [rsp+190h+var_14C]; angle1
                  vmovss  dword ptr [rbx+4], xmm0
                  vmovss  xmm1, [rsp+190h+var_14C]; angle2
                }
                *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
                __asm
                {
                  vmovss  xmm1, cs:__real@34000000
                  vandps  xmm0, xmm0, xmm6
                  vcomiss xmm0, xmm1
                }
                if ( v59 )
                {
                  __asm
                  {
                    vaddss  xmm1, xmm1, dword ptr [rbx+4]
                    vmovss  dword ptr [rbx+4], xmm1
                  }
                }
              }
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vmulss  xmm5, xmm0, cs:__real@3b360b61
            vmovss  xmm14, cs:__real@43b40000
            vxorps  xmm0, xmm0, xmm0
          }
          _RBX->moveType = DOOR_MOVE_PUSHING;
          __asm
          {
            vaddss  xmm2, xmm5, xmm15
            vroundss xmm4, xmm0, xmm2, 1
            vsubss  xmm1, xmm5, xmm4
            vmulss  xmm0, xmm1, xmm14
            vmovss  dword ptr [rbx+4], xmm0
          }
          _RBX->moveTime = pm->cmd.serverTime;
          if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_doorStateDebugPrint, "bg_doorStateDebugPrint") == _RSI->clientNum )
          {
            v154 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
            __asm
            {
              vmovss  xmm0, dword ptr [r13+r15*4+220h]
              vmovss  xmm1, dword ptr [rbx+4]
              vmovss  xmm5, dword ptr [r13+24h]
            }
            v223 = _RBX->index;
            __asm
            {
              vcvtss2sd xmm4, xmm0, xmm0
              vmovsd  [rsp+190h+var_160], xmm4
              vsubss  xmm0, xmm1, xmm0
              vcvtss2sd xmm5, xmm5, xmm5
              vcvtss2sd xmm3, xmm0, xmm0
              vcvtss2sd xmm2, xmm1, xmm1
              vmovsd  [rsp+190h+var_168], xmm5
            }
            LODWORD(fmt) = _RSI->serverTime;
            __asm
            {
              vmovq   r9, xmm3
              vmovq   r8, xmm2
            }
            if ( v154 )
              Com_Printf(0, "SERVER - DOOR PUSH Angle: %f Diff: %0.3f Time %d DeltaTime: %0.3f PrevAngle: %0.3f  Index: %d \n", *(double *)&_XMM2, *(double *)&_XMM3, fmt, v220, v222, v223);
            else
              Com_Printf(0, "CLIENT - DOOR PUSH Angle: %f Diff: %0.3f Time %d DeltaTime: %0.3f PrevAngle: %0.3f  Index: %d \n", *(double *)&_XMM2, *(double *)&_XMM3, fmt, v220, v222, v223);
          }
        }
LABEL_124:
        if ( v230 == 1 && _RBX->moveType != DOOR_MOVE_PUSHING )
          BG_AddPredictableEventToPlayerstate(EV_DOOR_MOVE_COMPLETE, _RBX->index, pm->cmd.serverTime, pm->weaponMap, _RSI);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmulss  xmm1, xmm0, cs:__real@43360b61
          vaddss  xmm3, xmm1, xmm15
          vxorps  xmm5, xmm5, xmm5
          vroundss xmm1, xmm5, xmm3, 1
          vcvttss2si eax, xmm1
        }
        _ECX = (unsigned __int16)_EAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, cs:__real@37800000
          vaddss  xmm2, xmm4, xmm15
          vroundss xmm3, xmm5, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm14
          vmovss  dword ptr [rbx+4], xmm0
        }
        goto LABEL_128;
      }
      if ( _RSI->serverTime < _RBX->moveTime )
        goto LABEL_128;
      if ( v89 == 2 )
      {
        __asm
        {
          vcomiss xmm12, cs:__real@3c23d70a
          vmovaps xmm8, xmm11
          vmovss  xmm7, [rsp+190h+var_14C]
        }
        *(double *)&_XMM0 = BG_CalcDoorUseSpeed(pm, _RBX);
      }
      else if ( v89 == 3 )
      {
        __asm
        {
          vcomiss xmm12, cs:__real@bc23d70a
          vmovaps xmm8, xmm9
          vmovss  xmm7, [rsp+190h+var_14C]
        }
        *(double *)&_XMM0 = BG_CalcDoorUseSpeed(pm, _RBX);
      }
      else if ( v89 == 4 )
      {
        __asm
        {
          vmovaps xmm8, xmm11
          vmovss  xmm0, [rsp+190h+var_14C]
          vsubss  xmm7, xmm0, xmm6
        }
        *(double *)&_XMM0 = BG_CalcDoorUseSpeed(pm, _RBX);
      }
      else if ( v89 == 5 )
      {
        __asm
        {
          vmovaps xmm8, xmm9
          vmovss  xmm0, [rsp+190h+var_14C]
          vaddss  xmm7, xmm0, xmm6
        }
        *(double *)&_XMM0 = BG_CalcDoorUseSpeed(pm, _RBX);
      }
      else if ( v89 == 6 )
      {
        __asm
        {
          vmovss  xmm7, [rsp+190h+var_14C]
          vcmpless xmm0, xmm10, xmm12
          vblendvps xmm8, xmm9, xmm11, xmm0
        }
        *(double *)&_XMM0 = BG_CalcDoorUseSpeed(pm, _RBX);
      }
      else
      {
        if ( v89 == 10 )
        {
          __asm
          {
            vcomiss xmm12, cs:__real@3c23d70a
            vmovaps xmm8, xmm11
            vmovss  xmm7, [rsp+190h+var_14C]
          }
        }
        else
        {
          if ( v89 != 11 )
          {
            if ( v89 == 7 )
            {
              __asm
              {
                vmovss  xmm0, [rsp+190h+var_14C]
                vsubss  xmm7, xmm0, xmm6
                vmovaps xmm8, xmm11
              }
            }
            else
            {
              if ( v89 != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 778, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entered with invalid door move type.  Should not get here.") )
                __debugbreak();
              __asm
              {
                vmovss  xmm0, [rsp+190h+var_14C]
                vaddss  xmm7, xmm0, xmm6
                vmovaps xmm8, xmm9
              }
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_doorBashSpeed, "bg_doorBashSpeed");
            goto LABEL_118;
          }
          __asm
          {
            vcomiss xmm12, cs:__real@bc23d70a
            vmovaps xmm8, xmm9
            vmovss  xmm7, [rsp+190h+var_14C]
          }
        }
        *(double *)&_XMM0 = BG_CalcDoorUseSpeed(pm, _RBX);
      }
LABEL_118:
      __asm
      {
        vmulss  xmm0, xmm0, xmm8
        vmulss  xmm1, xmm0, dword ptr [r13+24h]
        vaddss  xmm6, xmm1, dword ptr [rbx+4]
        vmovaps xmm1, xmm6; angle2
        vmovaps xmm0, xmm7; angle1
      }
      AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vcmpless xmm1, xmm10, xmm0
        vblendvps xmm0, xmm11, xmm9, xmm1
        vucomiss xmm0, xmm8
      }
      if ( !v60 )
      {
        v174 = _RBX->index;
        __asm { vmovss  dword ptr [rbx+4], xmm7 }
        _RBX->moveType = DOOR_MOVE_COMPLETE;
        BG_AddPredictableEventToPlayerstate(EV_DOOR_MOVE_COMPLETE, v174, pm->cmd.serverTime, pm->weaponMap, _RSI);
        __asm { vmovss  xmm6, dword ptr [rbx+4] }
      }
      __asm
      {
        vmulss  xmm4, xmm6, cs:__real@3b360b61
        vaddss  xmm1, xmm4, xmm15
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm2, xmm0, xmm1
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm14
        vmovss  dword ptr [rbx+4], xmm1
      }
      if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_doorStateDebugPrint, "bg_doorStateDebugPrint") == _RSI->clientNum )
      {
        v183 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
        __asm { vmovss  xmm2, dword ptr [rbx+4] }
        v185 = "CLIENT - DOOR MOVE/BASH Angle: %f Prev: %f  Dir: %0.3f  Time: %d  Index: %d \n";
        _RCX = (unsigned int)_R15;
        __asm
        {
          vcvtss2sd xmm0, xmm8, xmm8
          vcvtss2sd xmm2, xmm2, xmm2
          vmovss  xmm3, dword ptr [r13+rcx*4+220h]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
          vmovsd  [rsp+190h+fmt], xmm0
          vmovq   r8, xmm2
        }
        if ( v183 )
          v185 = "SERVER - DOOR MOVE/BASH Angle: %f Prev: %f  Dir: %0.3f  Time: %d  Index: %d \n";
        LODWORD(v219) = _RSI->serverTime;
        LODWORD(v221) = _RBX->index;
        Com_Printf(0, v185, _R8, _R9, fmta, v219, v221);
      }
      goto LABEL_124;
    }
  }
}

/*
==============
TestDoorOverlap2D
==============
*/

bool __fastcall TestDoorOverlap2D(double radius, vec2_t playerStart, vec2_t playerEnd, vec2_t doorOrigin, vec2_t doorStart, vec2_t doorEnd, float *outIntersectProj)
{
  char v65; 
  bool result; 
  vec2_t v77; 
  vec2_t v78; 
  vec2_t v79; 
  vec2_t v80; 
  vec2_t v81; 
  char v84; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmmword ptr [r11-68h], xmm11
    vmovaps xmmword ptr [r11-78h], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
    vmovss  xmm11, cs:__real@3f800000
  }
  _RBX = outIntersectProj;
  __asm { vmovaps xmm14, xmm0 }
  v78 = doorStart;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+var_C0]
    vmovss  xmm1, dword ptr [rsp+0E8h+var_C0+4]
  }
  v77 = doorOrigin;
  __asm
  {
    vmovss  xmm12, dword ptr [rsp+0E8h+var_C8]
    vmovss  xmm13, dword ptr [rsp+0E8h+var_C8+4]
    vsubss  xmm3, xmm1, xmm13
    vsubss  xmm4, xmm0, xmm12
    vmulss  xmm2, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm2, xmm0
    vdivss  xmm10, xmm11, xmm1
  }
  v79 = playerStart;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+var_B8+4]
    vmovss  xmm2, dword ptr [rsp+0E8h+var_B8]
    vsubss  xmm1, xmm0, xmm13
    vsubss  xmm0, xmm2, xmm12
    vmulss  xmm3, xmm1, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm3, xmm3, xmm1
    vmulss  xmm0, xmm3, xmm10; val
    vmovaps xmm2, xmm11; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  v81 = playerEnd;
  v80 = doorEnd;
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+0E8h+var_B0+4]
    vmovss  xmm0, dword ptr [rsp+0E8h+var_B0]
    vmovss  xmm9, dword ptr [rsp+0E8h+var_A8+4]
    vmovss  xmm6, dword ptr [rsp+0E8h+var_A8]
    vsubss  xmm7, xmm0, xmm12
    vsubss  xmm8, xmm3, xmm13
    vsubss  xmm0, xmm9, xmm13
    vmulss  xmm4, xmm0, xmm8
    vsubss  xmm3, xmm6, xmm12
    vmulss  xmm0, xmm3, xmm7
    vaddss  xmm4, xmm4, xmm0
    vmulss  xmm10, xmm4, xmm10
    vmovaps xmm0, xmm10; val
    vmovaps xmm2, xmm11; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm7, xmm0
    vaddss  xmm2, xmm1, xmm12
    vsubss  xmm4, xmm2, xmm6
    vmulss  xmm0, xmm8, xmm0
    vaddss  xmm1, xmm0, xmm13
    vsubss  xmm2, xmm1, xmm9
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm14, xmm14
    vcomiss xmm4, xmm1
  }
  if ( v65 )
  {
    __asm { vmovss  dword ptr [rbx], xmm10 }
    result = 1;
  }
  else
  {
    result = 0;
  }
  _R11 = &v84;
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
    vmovaps xmm14, [rsp+0E8h+var_98]
  }
  return result;
}

