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
  int v6; 
  const dvar_t *v7; 
  int integer; 
  const dvar_t *v9; 
  const char *v10; 
  const dvar_t *v11; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 28, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 28, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  moveType = ds->moveType;
  v6 = ps->serverTime - ds->moveTime;
  if ( ((moveType - 10) & 0xFFFFFFFC) != 0 || moveType == DOOR_MOVE_PUSHING_BLOCKED )
  {
    v11 = DVARINT_bg_doorUseAccelTime;
    if ( !DVARINT_bg_doorUseAccelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorUseAccelTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    v9 = DVARFLT_bg_doorUseSpeed;
    if ( !DVARFLT_bg_doorUseSpeed )
    {
      v10 = "bg_doorUseSpeed";
LABEL_19:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v10) )
        __debugbreak();
    }
  }
  else
  {
    v7 = DVARINT_bg_doorPeekAccelTime;
    if ( !DVARINT_bg_doorPeekAccelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorPeekAccelTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    integer = v7->current.integer;
    v9 = DVARFLT_bg_doorPeekSpeed;
    if ( !DVARFLT_bg_doorPeekSpeed )
    {
      v10 = "bg_doorPeekSpeed";
      goto LABEL_19;
    }
  }
  Dvar_CheckFrontendServerThread(v9);
  if ( v6 >= integer )
    return v9->current.value;
  else
    return (float)((float)v6 / (float)integer) * v9->current.value;
}

/*
==============
BG_Door_BlockedByVehicle
==============
*/
char BG_Door_BlockedByVehicle(unsigned int scriptableIndex, int ownersVehicle, const BgHandler *handler, float targetAngle, bool fullTest)
{
  Physics_WorldId v8; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  double v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  __m128 v14; 
  float v15; 
  hknpShape *v16; 
  Physics_WorldId v19; 
  Physics_WorldId v20; 
  double v22; 
  Physics_WorldId v23; 
  __m128 v24; 
  float v25; 
  unsigned int v26; 
  __m128 v27; 
  float v30; 
  Physics_ShapecastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v32; 
  __int64 v33; 
  vec3_t maxs; 
  vec3_t mins; 
  float v36; 
  float v37; 
  float v38; 
  vec3_t start; 
  vec3_t angles; 
  char v41[12]; 
  float v42; 
  float v43; 
  vec4_t quat; 
  PhysicsQuery_ShapecastHit hit; 

  v33 = -2i64;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 175, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  handler->GetScriptableDimensions((BgHandler *)handler, scriptableIndex, &v30, (vec3_t *)&v36, (Bounds *)v41);
  v8 = handler->GetPhysicsWorldId((BgHandler *)handler);
  ClosestResult = PhysicsQuery_GetClosestResult(v8);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 183, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  v10 = AngleDelta(targetAngle, v30);
  v11 = *(float *)&v10;
  v12 = LODWORD(v30);
  v13 = LODWORD(v30);
  v14 = (__m128)COERCE_UNSIGNED_INT64(j___libm_sse2_sincosf_());
  LODWORD(v15) = _mm_shuffle_ps(v14, v14, 1).m128_u32[0];
  if ( fullTest )
  {
    start.v[0] = (float)(v15 * v42) + v36;
    start.v[1] = (float)(v14.m128_f32[0] * v42) + v37;
    start.v[2] = v38;
    angles.v[0] = 0.0;
    angles.v[1] = *(float *)&v12;
    angles.v[2] = 0.0;
    AnglesToQuat(&angles, &quat);
    LODWORD(mins.v[0]) = LODWORD(v42) ^ _xmm;
    mins.v[1] = v42 * -2.0;
    mins.v[2] = 0.0;
    maxs.v[0] = v42;
    maxs.v[1] = v42 * 2.0;
    maxs.v[2] = 2.0 * v43;
    v16 = Physics_CreateShapeConvexHullFromAABB(&mins, &maxs);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 210, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
      __debugbreak();
    extendedData.startTolerance = 0.0;
    _XMM0 = LODWORD(FLOAT_0_016000001);
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    extendedData.ignoreBodies = NULL;
    extendedData.collisionBuffer = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = 0x800000;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v32, 1, 1);
    if ( ownersVehicle != 2047 )
    {
      if ( ownersVehicle )
      {
        HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v32, 0, ownersVehicle, 1, 1, 0, 1, 1);
        extendedData.ignoreBodies = &v32;
      }
    }
  }
  else
  {
    if ( COERCE_FLOAT(LODWORD(v11) & _xmm) < 0.0099999998 )
    {
      v22 = j___libm_sse2_sincosf_();
      maxs.v[0] = v36;
      maxs.v[1] = v37;
      maxs.v[2] = (float)(v43 * 0.5) + v38;
      mins.v[0] = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v22, (__m128)*(unsigned __int64 *)&v22, 1).m128_f32[0] * (float)(v42 * 2.5)) + v36;
      mins.v[1] = (float)(*(float *)&v22 * (float)(v42 * 2.5)) + v37;
      mins.v[2] = maxs.v[2];
      *(_QWORD *)&extendedData.accuracy = 0i64;
      LODWORD(extendedData.ignoreBodies) = 1;
      *((float *)&extendedData.ignoreBodies + 1) = 0.0;
      extendedData.collisionBuffer = 0.0;
      *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
      LOWORD(extendedData.nonBrushShape) = 256;
      extendedData.contents = 0x800000;
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v32, 1, 1);
      if ( ownersVehicle != 2047 && ownersVehicle )
      {
        HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v32, 0, ownersVehicle, 1, 1, 0, 1, 1);
        *(_QWORD *)&extendedData.accuracy = &v32;
      }
      v23 = handler->GetPhysicsWorldId((BgHandler *)handler);
      Physics_Raycast(v23, &maxs, &mins, (Physics_RaycastExtendedData *)&extendedData, ClosestResult);
      if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
        goto LABEL_15;
      goto LABEL_32;
    }
    if ( v11 <= 0.0 )
    {
      v27.m128_u64[1] = *((_QWORD *)&v12 + 1);
      *(double *)v27.m128_u64 = j___libm_sse2_sincosf_();
      v26 = _mm_shuffle_ps(v27, v27, 1).m128_u32[0];
      v25 = v27.m128_f32[0];
    }
    else
    {
      v24.m128_u64[1] = *((_QWORD *)&v13 + 1);
      *(double *)v24.m128_u64 = j___libm_sse2_sincosf_();
      v25 = v24.m128_f32[0];
      v26 = _mm_shuffle_ps(v24, v24, 1).m128_u32[0];
    }
    start.v[0] = (float)(*(float *)&v26 * v42) + (float)((float)(v15 * v42) + v36);
    start.v[1] = (float)(v25 * v42) + (float)((float)(v14.m128_f32[0] * v42) + v37);
    start.v[2] = v38;
    mins.v[0] = 0.0;
    mins.v[1] = *(float *)&v12;
    mins.v[2] = 0.0;
    AnglesToQuat(&mins, &quat);
    LODWORD(angles.v[0]) = LODWORD(v42) ^ _xmm;
    LODWORD(angles.v[1]) = LODWORD(v42) ^ _xmm;
    angles.v[2] = 0.0;
    maxs.v[0] = v42;
    maxs.v[1] = v42;
    maxs.v[2] = v43 * 2.0;
    v16 = Physics_CreateShapeConvexHullFromAABB(&angles, &maxs);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 295, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
      __debugbreak();
    extendedData.startTolerance = 0.0;
    _XMM0 = LODWORD(FLOAT_0_016000001);
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    extendedData.ignoreBodies = NULL;
    extendedData.collisionBuffer = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = 0x800000;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v32, 1, 1);
    if ( ownersVehicle != 2047 && ownersVehicle )
    {
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v32, 0, ownersVehicle, 1, 1, 0, 1, 1);
      extendedData.ignoreBodies = &v32;
    }
  }
  v19 = handler->GetPhysicsWorldId((BgHandler *)handler);
  PhysicsQuery_ImmediateShapecastClosest(v19, v16, &start, &start, &quat, &extendedData, &hit);
  v20 = handler->GetPhysicsWorldId((BgHandler *)handler);
  Physics_ReleaseShape(v20, v16, 1);
  if ( hit.isValid )
  {
LABEL_15:
    HavokPhysics_IgnoreBodies::~HavokPhysics_IgnoreBodies(&v32);
    return 1;
  }
LABEL_32:
  HavokPhysics_IgnoreBodies::~HavokPhysics_IgnoreBodies(&v32);
  return 0;
}

/*
==============
BG_Door_CalcDoorAngles
==============
*/
void BG_Door_CalcDoorAngles(const vec3_t *initialAngles, float targetAngle, vec3_t *outDoorAngles)
{
  __int128 v5; 
  double v9; 
  tmat33_t<vec3_t> axis; 

  AnglesToAxis(initialAngles, &axis);
  v5 = LODWORD(axis.m[2].v[1]);
  *(float *)&v5 = fsqrt((float)((float)(axis.m[2].v[1] * axis.m[2].v[1]) + (float)(axis.m[2].v[0] * axis.m[2].v[0])) + (float)(axis.m[2].v[2] * axis.m[2].v[2]));
  _XMM2 = v5;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(axis.m[2].v[2] * (float)(1.0 / *(float *)&_XMM0)) & _xmm) < 0.99619472 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 356, ASSERT_TYPE_ASSERT, "(fabsf( angles_up[2] ) >= upDiffLimit)", "%s\n\tBG_Door_CalcDoorAngles: We assume door is rotating around a vertical axis.\n", "fabsf( angles_up[2] ) >= upDiffLimit") )
    __debugbreak();
  outDoorAngles->v[0] = initialAngles->v[0];
  outDoorAngles->v[1] = initialAngles->v[1];
  outDoorAngles->v[2] = initialAngles->v[2];
  v9 = AngleDelta(targetAngle, initialAngles->v[1]);
  outDoorAngles->v[1] = *(float *)&v9 + outDoorAngles->v[1];
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
  Bounds *bounds; 

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
    outBounds->midPoint.v[0] = ps->vehicleState.origin.v[0];
    outBounds->midPoint.v[1] = ps->vehicleState.origin.v[1];
    outBounds->midPoint.v[2] = ps->vehicleState.origin.v[2];
    v6 = DCONST_DVARFLT_bg_doorWheelsonRadius;
    if ( !DCONST_DVARFLT_bg_doorWheelsonRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorWheelsonRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    LODWORD(outBounds->halfSize.v[0]) = v6->current.integer;
    v7 = DCONST_DVARFLT_bg_doorWheelsonRadius;
    if ( !DCONST_DVARFLT_bg_doorWheelsonRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorWheelsonRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    LODWORD(outBounds->halfSize.v[1]) = v7->current.integer;
    v8 = DCONST_DVARFLT_bg_doorWheelsonRadius;
    if ( !DCONST_DVARFLT_bg_doorWheelsonRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorWheelsonRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    LODWORD(outBounds->halfSize.v[2]) = v8->current.integer;
  }
  if ( entity == 2047 )
  {
    bounds = pm->bounds;
    *(_OWORD *)outBounds->midPoint.v = *(_OWORD *)bounds->midPoint.v;
    *(double *)&outBounds->halfSize.y = *(double *)&bounds->halfSize.y;
  }
  else
  {
    outBounds->midPoint.v[0] = ps->vehicleState.origin.v[0];
    outBounds->midPoint.v[1] = ps->vehicleState.origin.v[1];
    outBounds->midPoint.v[2] = ps->vehicleState.origin.v[2];
    v9 = DCONST_DVARFLT_bg_doorATVRadius;
    if ( !DCONST_DVARFLT_bg_doorATVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorATVRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    LODWORD(outBounds->halfSize.v[0]) = v9->current.integer;
    v10 = DCONST_DVARFLT_bg_doorATVRadius;
    if ( !DCONST_DVARFLT_bg_doorATVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorATVRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    LODWORD(outBounds->halfSize.v[1]) = v10->current.integer;
    v11 = DCONST_DVARFLT_bg_doorATVRadius;
    if ( !DCONST_DVARFLT_bg_doorATVRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorATVRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    LODWORD(outBounds->halfSize.v[2]) = v11->current.integer;
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
  float v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 112, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  entity = ps->vehicleState.entity;
  if ( BG_IsRemoteTurretActive(ps) || entity != 2047 )
  {
    outOrigin->v[0] = ps->vehicleState.origin.v[0];
    outOrigin->v[1] = ps->vehicleState.origin.v[1];
    v5 = ps->vehicleState.origin.v[2];
  }
  else
  {
    outOrigin->v[0] = ps->origin.v[0];
    outOrigin->v[1] = ps->origin.v[1];
    v5 = ps->origin.v[2];
  }
  outOrigin->v[2] = v5;
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
float BG_Door_NearestAngle(const ScriptablePartDef *doorPartDef, float doorAngle, float initialDoorAngle, unsigned int *outStateIdx)
{
  double v5; 
  float v6; 
  unsigned int v7; 
  float v8; 
  float startTimeMax; 
  __int64 v10; 
  unsigned int v11; 
  ScriptableStateDef *v12; 
  __int64 numEvents; 
  __int64 v14; 
  ScriptableEventDef *events; 
  double v16; 
  float v17; 
  float result; 

  if ( !doorPartDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 65, ASSERT_TYPE_ASSERT, "(doorPartDef)", (const char *)&queryFormat, "doorPartDef") )
    __debugbreak();
  v5 = AngleDelta(doorAngle, initialDoorAngle);
  v6 = FLOAT_3_4028235e38;
  v7 = 0;
  v8 = *(float *)&v5;
  startTimeMax = FLOAT_3_4028235e38;
  v10 = 0i64;
  v11 = -1;
  do
  {
    if ( v7 >= doorPartDef->numStates )
      break;
    v12 = &doorPartDef->states[v10];
    if ( v12 )
    {
      numEvents = (int)v12->base.numEvents;
      if ( numEvents > 0 )
      {
        v14 = 0i64;
        do
        {
          events = v12->base.events;
          if ( events[v14].type == Scriptable_EventType_Move )
          {
            v16 = AngleDelta(events[v14].data.animation.startTimeMax, v8);
            LODWORD(v17) = LODWORD(v16) & _xmm;
            if ( v17 <= v6 )
            {
              startTimeMax = events[v14].data.animation.startTimeMax;
              v11 = v7;
              v6 = v17;
            }
          }
          ++v14;
          --numEvents;
        }
        while ( numEvents );
      }
    }
    ++v7;
    ++v10;
  }
  while ( v7 <= 8 );
  if ( v11 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 99, ASSERT_TYPE_ASSERT, "(nearestStateIndex != -1)", (const char *)&queryFormat, "nearestStateIndex != -1") )
    __debugbreak();
  result = startTimeMax;
  if ( outStateIdx )
    *outStateIdx = v11;
  return result;
}

/*
==============
BG_Door_TestTouching2D
==============
*/
bool BG_Door_TestTouching2D(pmove_t *pm, const DoorState *ds, float *outProjection, float radiusInflation)
{
  playerState_s *ps; 
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  double v16; 
  float v17; 
  char v19[8]; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t outOrigin; 
  char v24[12]; 
  float v25; 
  float v26; 
  Bounds outBounds; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 442, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 442, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm->m_bgHandler->GetScriptableDimensions((BgHandler *)pm->m_bgHandler, ds->index, (float *)v19, (vec3_t *)&v20, (Bounds *)v24);
  BG_Door_GetPlayerOrigin(ps, &outOrigin);
  BG_Door_GetPlayerBounds(pm, &outBounds);
  if ( outOrigin.v[2] > (float)((float)(v26 * 2.0) + v22) || (float)((float)(outBounds.halfSize.v[2] * 2.0) + outOrigin.v[2]) < v22 )
    return 0;
  v8 = j___libm_sse2_sincosf_();
  v9 = v20;
  v10 = v21;
  v11 = outOrigin.v[0];
  v12 = outOrigin.v[1];
  v13 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v8, (__m128)*(unsigned __int64 *)&v8, 1).m128_f32[0];
  v14 = *(float *)&v8;
  v15 = (float)((float)(outOrigin.v[0] - v20) * v13) + (float)((float)(outOrigin.v[1] - v21) * *(float *)&v8);
  v16 = I_fclamp(v15, 0.0, v25 * 2.0);
  v17 = radiusInflation + outBounds.halfSize.v[1];
  if ( outProjection )
    *outProjection = v15;
  return (float)((float)((float)(v11 - (float)((float)(*(float *)&v16 * v13) + v9)) * (float)(v11 - (float)((float)(*(float *)&v16 * v13) + v9))) + (float)((float)(v12 - (float)((float)(*(float *)&v16 * v14) + v10)) * (float)(v12 - (float)((float)(*(float *)&v16 * v14) + v10)))) <= (float)(v17 * v17);
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
void PM_Door_ResolveCollision(pmove_t *pm, pml_t *pml, unsigned int scriptableIndex, float doorAngle, float prevDoorAngle, vec3_t *inOutAppliedInstantaneousVelocity, bool *performSlideMove)
{
  playerState_s *ps; 
  Bounds *bounds; 
  float v13; 
  float v14; 
  double UpContribution; 
  float v16; 
  double v17; 
  float v18; 
  float v19; 
  __int64 v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  const dvar_t *v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  double v33; 
  float v34; 
  __m128 v35; 
  __m128 v36; 
  float v40; 
  float v41; 
  __m128 v42; 
  __m128 v43; 
  __int128 v47; 
  __int128 v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  __int128 v55; 
  __int128 v56; 
  float v57; 
  float v58; 
  __int128 v59; 
  float v60; 
  __int128 v61; 
  __int128 v62; 
  float v66; 
  __int128 v67; 
  float v71; 
  float v77; 
  float v78; 
  __int128 v79; 
  float v83; 
  bool *v84; 
  float v85; 
  float v86; 
  float v87; 
  bool v88; 
  const char *v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  bool *v96; 
  vec3_t v97; 
  vec3_t vec; 
  __int64 v99; 
  vec3_t angles; 
  vec3_t v101; 
  int v102[3]; 
  tmat33_t<vec3_t> axis; 

  v96 = performSlideMove;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 941, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 941, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 942, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !BG_Ladder_IsActive(pm->ps) )
  {
    _XMM12 = 0i64;
    if ( pml->frametime != 0.0 )
    {
      bounds = pm->bounds;
      vec = ps->origin;
      if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 960, ASSERT_TYPE_ASSERT, "(playerBounds)", (const char *)&queryFormat, "playerBounds") )
        __debugbreak();
      v13 = bounds->halfSize.v[2];
      v14 = bounds->halfSize.v[0];
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
      v16 = *(float *)&UpContribution;
      v17 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &bounds->midPoint);
      v18 = *(float *)&v17 + v16;
      pm->m_bgHandler->GetScriptableDimensions((BgHandler *)pm->m_bgHandler, scriptableIndex, &v92, &v97, (Bounds *)&v101);
      angles.v[1] = v92;
      angles.v[0] = 0.0;
      angles.v[2] = 0.0;
      AnglesToAxis(&angles, &axis);
      v19 = v13 + *(float *)&v102[2];
      v20 = 1i64;
      if ( *(float *)v102 > *(float *)&v102[1] )
        v20 = 0i64;
      v21 = *(float *)&v102[v20];
      v22 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &v97);
      v23 = *(float *)&v22;
      v24 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &v101);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v23 + *(float *)&v24) - v18) & _xmm) < v19 )
      {
        v25 = DCONST_DVARFLT_bg_doorCollisionRadiusInflation;
        v26 = vec.v[0];
        v27 = vec.v[1];
        v28 = ps->velocity.v[0];
        v29 = ps->velocity.v[1];
        v93 = vec.v[0];
        v94 = vec.v[1];
        if ( !DCONST_DVARFLT_bg_doorCollisionRadiusInflation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorCollisionRadiusInflation") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        v30 = v14 + v25->current.value;
        v31 = v29 * pml->frametime;
        v32 = v21 * 2.0;
        v95 = v30;
        v90 = (float)(v28 * pml->frametime) + v26;
        v91 = v31 + v27;
        v33 = j___libm_sse2_sincosf_();
        v34 = *(float *)&v33;
        v35 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v33, (__m128)*(unsigned __int64 *)&v33, 1);
        v36 = v35;
        v36.m128_f32[0] = fsqrt((float)(v35.m128_f32[0] * v35.m128_f32[0]) + (float)(v34 * v34));
        _XMM3 = v36;
        __asm
        {
          vcmpless xmm1, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm13, xmm1
        }
        v40 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v35.m128_f32[0]) * (float)(v21 * 2.0)) + v97.v[0];
        v41 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v34) * (float)(v21 * 2.0)) + v97.v[1];
        *(double *)&_XMM0 = j___libm_sse2_sincosf_();
        v42 = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1);
        v43 = v42;
        v43.m128_f32[0] = fsqrt((float)(v42.m128_f32[0] * v42.m128_f32[0]) + (float)(*(float *)&_XMM0 * *(float *)&_XMM0));
        _XMM3 = v43;
        __asm
        {
          vcmpless xmm1, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm13, xmm1
        }
        v47 = LODWORD(FLOAT_1_0);
        *(float *)&v47 = (float)((float)((float)(1.0 / *(float *)&_XMM1) * v42.m128_f32[0]) * v32) + v97.v[0];
        v48 = v47;
        v49 = (float)((float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&_XMM0) * v32) + v97.v[1];
        v99 = *(_QWORD *)v97.v;
        v50 = v97.v[0];
        _XMM3.m128_f32[0] = v40 - v97.v[0];
        v51 = v97.v[1];
        v52 = 1.0 / (float)((float)((float)(v41 - v97.v[1]) * (float)(v41 - v97.v[1])) + (float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]));
        I_fclamp((float)((float)((float)(v93 - v97.v[0]) * _XMM3.m128_f32[0]) + (float)((float)(v94 - v97.v[1]) * (float)(v41 - v97.v[1]))) * v52, 0.0, 1.0);
        v53 = (float)((float)((float)(v91 - v51) * (float)(v49 - v51)) + (float)((float)(v90 - v50) * (float)(*(float *)&v47 - v50))) * v52;
        *(double *)&_XMM0 = I_fclamp(v53, 0.0, 1.0);
        *(float *)&v47 = (float)((float)(v49 - v51) * *(float *)&_XMM0) + v51;
        v54 = v95;
        if ( (float)((float)((float)(*(float *)&v47 - v91) * (float)(*(float *)&v47 - v91)) + (float)((float)((float)((float)((float)(*(float *)&v48 - v50) * *(float *)&_XMM0) + v50) - v90) * (float)((float)((float)((float)(*(float *)&v48 - v50) * *(float *)&_XMM0) + v50) - v90))) < (float)(v54 * v54) )
        {
          if ( v53 < 0.0 )
            goto LABEL_26;
          if ( v53 <= 1.0 )
          {
            v56 = LODWORD(ps->origin.v[1]);
            *(float *)&v56 = ps->origin.v[1] - v97.v[1];
            v55 = v56;
            v57 = ps->origin.v[0] - v97.v[0];
            v59 = v48;
            *(float *)&v59 = *(float *)&v48 - v97.v[0];
            v58 = *(float *)&v48 - v97.v[0];
            v60 = v49 - v97.v[1];
            v61 = v59 ^ _xmm;
            v62 = v55;
            *(float *)&v62 = fsqrt((float)(*(float *)&v55 * *(float *)&v55) + (float)(v57 * v57));
            _XMM3 = v62;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm13, xmm0
            }
            v66 = 1.0 / *(float *)&_XMM0;
            v67 = v61;
            *(float *)&_XMM0 = *(float *)&v55 * (float)(1.0 / *(float *)&_XMM0);
            *(float *)&v67 = fsqrt((float)(*(float *)&v61 * *(float *)&v61) + (float)(v60 * v60));
            _XMM4 = v67;
            __asm
            {
              vcmpless xmm2, xmm4, cs:__real@80000000
              vblendvps xmm2, xmm4, xmm13, xmm2
            }
            v71 = 1.0 / *(float *)&_XMM2;
            *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, v57 * v66);
            _XMM2 = 0i64;
            __asm { vroundss xmm4, xmm2, xmm3, 1 }
            AngleDelta(prevDoorAngle, (float)((float)(*(float *)&_XMM0 * 0.15915494) - *(float *)&_XMM4) * 360.0);
            __asm { vcmpless xmm1, xmm12, xmm0 }
            _XMM0 = LODWORD(FLOAT_N1_0);
            __asm { vblendvps xmm1, xmm0, xmm13, xmm1 }
            v77 = (float)((float)((float)(v53 * v58) + v97.v[0]) + (float)((float)(v60 * v71) * (float)(*(float *)&_XMM1 * v54))) - ps->origin.v[0];
            v78 = (float)((float)((float)(v53 * v60) + v97.v[1]) + (float)((float)(*(float *)&v61 * v71) * (float)(*(float *)&_XMM1 * v54))) - ps->origin.v[1];
            goto LABEL_28;
          }
          if ( v53 < 0.0 )
          {
LABEL_26:
            *(float *)&v48 = v97.v[0];
            v49 = v97.v[1];
          }
          v79 = LODWORD(v91);
          *(float *)&v79 = fsqrt((float)((float)(v91 - v49) * (float)(v91 - v49)) + (float)((float)(v90 - *(float *)&v48) * (float)(v90 - *(float *)&v48)));
          _XMM2 = v79;
          __asm
          {
            vcmpless xmm0, xmm2, cs:__real@80000000
            vblendvps xmm0, xmm2, xmm13, xmm0
          }
          v77 = (float)((float)((float)((float)(v90 - *(float *)&v48) * (float)(1.0 / *(float *)&_XMM0)) * v95) + *(float *)&v48) - ps->origin.v[0];
          v78 = (float)((float)((float)((float)(v91 - v49) * (float)(1.0 / *(float *)&_XMM0)) * v95) + v49) - ps->origin.v[1];
LABEL_28:
          v83 = 1.0 / pml->frametime;
          v84 = v96;
          v85 = (float)(v83 * v77) - ps->velocity.v[0];
          v86 = (float)(v83 * v78) - ps->velocity.v[1];
          inOutAppliedInstantaneousVelocity->v[0] = v85 + inOutAppliedInstantaneousVelocity->v[0];
          inOutAppliedInstantaneousVelocity->v[1] = v86 + inOutAppliedInstantaneousVelocity->v[1];
          v87 = v86 + ps->velocity.v[1];
          ps->velocity.v[0] = v85 + ps->velocity.v[0];
          ps->velocity.v[1] = v87;
          *v84 = 1;
          if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_doorResolveCollisionDebugPrint, "bg_doorResolveCollisionDebugPrint") == ps->clientNum )
          {
            v88 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
            v89 = "SERVER Move Diff x: %0.6f y: %0.6f Time: %d \n";
            if ( !v88 )
              v89 = "CLIENT Move Diff x: %0.6f y: %0.6f Time: %d \n";
            Com_Printf_NoFilter(v89, v77, v78, pm->ps->commandTime);
          }
        }
      }
    }
  }
}

/*
==============
PM_Door_ResolveCollisions
==============
*/
void PM_Door_ResolveCollisions(pmove_t *pm, pml_t *pml, vec3_t *inOutAppliedInstantaneousVelocity, bool *performSlideMove, BgAntiLagEntityInfo *infoList, unsigned int numInfoItems)
{
  playerState_s *ps; 
  const dvar_t *v9; 
  __int64 v10; 
  float *doorPrevAngle; 
  float *p_angle; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  BgAntiLagEntityInfo *v17; 
  pmove_t *v18; 
  unsigned __int8 *p_flags; 
  unsigned int *doorIndex; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int v23; 
  unsigned __int8 v24; 
  char v25; 
  char v26; 
  float v27; 
  float v28; 
  char v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned __int64 v32; 
  unsigned int *v33; 
  BgAntiLagEntityInfo *v34; 
  unsigned __int8 flags; 
  char v36; 
  const dvar_t *v37; 
  bool v38; 
  double v39; 
  double v40; 
  double v41; 
  double fmt; 
  double inOutAppliedInstantaneousVelocitya; 
  double performSlideMovea; 
  __int64 v45; 
  __int64 v46; 
  char v47; 
  unsigned int outNumInfoItems; 
  __int64 v49; 
  unsigned int v50; 
  pmove_t *pma; 
  int gameTime; 
  __int64 v53; 
  BgAntiLagEntityInfo *v54; 
  playerState_s *v55; 
  bool *v56; 
  vec3_t *v57; 
  unsigned int *v58; 
  unsigned int *v59; 
  __int64 v60; 
  pml_t *pmla; 
  __int64 v62; 
  BgAntiLagEntityInfo outInfoList[2]; 

  v62 = -2i64;
  v56 = performSlideMove;
  v57 = inOutAppliedInstantaneousVelocity;
  pmla = pml;
  pma = pm;
  v54 = infoList;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Door_ResolveCollisions");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 1121, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  v55 = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 1121, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 1122, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v9 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v10 = 0i64;
    doorPrevAngle = pml->doorPrevAngle;
    p_angle = &ps->doorState[0].angle;
    v13 = 2i64;
    do
    {
      v14 = *((_DWORD *)p_angle - 1);
      if ( v14 != -1 && (*((_DWORD *)p_angle + 2) || pml->doorIsClosed[v10]) )
        PM_Door_ResolveCollision(pm, pml, v14, *p_angle, *doorPrevAngle, v57, v56);
      ++v10;
      ++doorPrevAngle;
      p_angle += 4;
      --v13;
    }
    while ( v13 );
    v15 = 2i64;
    v16 = (__int64)v55;
    if ( numInfoItems )
    {
      outNumInfoItems = 0;
      v17 = outInfoList;
      do
      {
        BgAntiLagEntityInfo::BgAntiLagEntityInfo(v17++);
        --v15;
      }
      while ( v15 );
      v18 = pma;
      gameTime = pma->oldcmd.serverTime;
      v47 = 0;
      v53 = 7i64;
      p_flags = &v54->flags;
      doorIndex = v54->doorIndex;
      v59 = v54->doorIndex;
      v60 = numInfoItems;
      do
      {
        v21 = 0;
        v50 = 0;
        v22 = 0i64;
        v49 = 0i64;
        v58 = doorIndex;
        do
        {
          v23 = *doorIndex;
          if ( p_flags == (unsigned __int8 *)24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 709, ASSERT_TYPE_ASSERT, "(antilagEntity)", (const char *)&queryFormat, "antilagEntity") )
            __debugbreak();
          v24 = *p_flags;
          if ( v21 )
            v25 = v24 >> 6;
          else
            v25 = v24 >> 5;
          v26 = v25 & 1;
          if ( v23 - 1 <= 0xFFFFFFFD )
          {
            if ( !v47 )
            {
              BgAntiLag::GetClosestCharacters((BgAntiLag *)v18->antiLag, *(_DWORD *)(v16 + 460), 0x10u, gameTime, 0xF8u, &outNumInfoItems, outInfoList);
              v47 = 1;
            }
            v27 = v54->origin.origin.v[v22 + v53];
            v28 = v27;
            v29 = 0;
            v30 = 0;
            if ( !outNumInfoItems )
              goto LABEL_51;
            do
            {
              v31 = 0;
              v32 = 140i64 * v30;
              v33 = &outInfoList[0].doorIndex[v32 / 4];
              while ( *v33 != v23 || *(&outInfoList[0].entityIndex + 70 * v30) != *((_WORD *)p_flags + 1) )
              {
                ++v31;
                ++v33;
                if ( v31 >= 2 )
                  goto LABEL_48;
              }
              v28 = outInfoList[0].doorAngle[35 * v30 + v31];
              v34 = &outInfoList[v32 / 0x8C];
              if ( !&outInfoList[v32 / 0x8C] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 709, ASSERT_TYPE_ASSERT, "(antilagEntity)", (const char *)&queryFormat, "antilagEntity") )
                __debugbreak();
              flags = v34->flags;
              if ( v31 )
                v36 = flags >> 6;
              else
                v36 = flags >> 5;
              v29 = v36 & 1;
LABEL_48:
              ++v30;
            }
            while ( v30 < outNumInfoItems );
            v16 = (__int64)v55;
            v21 = v50;
            if ( !v29 )
            {
              v18 = pma;
              v22 = v49;
LABEL_51:
              if ( !v26 )
                goto LABEL_65;
            }
            if ( *(_DWORD *)(v16 + 1020) == v23 && *(_DWORD *)(v16 + 1032) || *(_DWORD *)(v16 + 1036) == v23 && *(_DWORD *)(v16 + 1048) )
            {
              v18 = pma;
            }
            else
            {
              v18 = pma;
              PM_Door_ResolveCollision(pma, pmla, v23, v27, v28, v57, v56);
              v37 = DCONST_DVARINT_bg_doorResolveCollisionDebugPrint;
              if ( !DCONST_DVARINT_bg_doorResolveCollisionDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorResolveCollisionDebugPrint") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v37);
              if ( v37->current.integer == *(_DWORD *)(v16 + 460) )
              {
                v38 = v18->m_bgHandler->IsServer((BgHandler *)v18->m_bgHandler);
                v39 = v27;
                v40 = v28;
                v41 = *(float *)(v16 + 48);
                LODWORD(v46) = v18->cmd.serverTime;
                LODWORD(v45) = v18->oldcmd.serverTime;
                performSlideMovea = *(float *)(v16 + 64);
                inOutAppliedInstantaneousVelocitya = *(float *)(v16 + 60);
                fmt = *(float *)(v16 + 52);
                if ( v38 )
                  Com_Printf_NoFilter("SERVER PM_Door_ResolveCollisions - Prev Angle: %0.6f, Curr Angle: %0.6f, Origin %0.6f %0.6f Vel %0.6f %0.6f PrevTime: %d Time: %d \n", v40, v39, v41, fmt, inOutAppliedInstantaneousVelocitya, performSlideMovea, v45, v46);
                else
                  Com_Printf_NoFilter("CLIENT PM_Door_ResolveCollisions - Prev Angle: %0.6f, Curr Angle: %0.6f, Origin %0.6f %0.6f Vel %0.6f %0.6f Prev Found: %d, Time: %d \n", v40, v39, v41, fmt, inOutAppliedInstantaneousVelocitya, performSlideMovea, v45, v46);
              }
            }
            v22 = v49;
          }
LABEL_65:
          v50 = ++v21;
          v49 = ++v22;
          doorIndex = ++v58;
        }
        while ( v21 < 2 );
        p_flags += 140;
        doorIndex = v59 + 35;
        v59 += 35;
        v53 += 35i64;
        --v60;
      }
      while ( v60 );
    }
  }
  Sys_ProfEndNamedEvent();
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
  __int64 v3; 
  playerState_s *ps; 
  const dvar_t *v7; 
  __int64 v8; 
  DoorState *v9; 
  unsigned int moveType; 
  float frametime; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v16; 
  float v20; 
  float v21; 
  float v22; 
  double Float_Internal_DebugName; 
  bool v24; 
  float v25; 
  float angle; 
  double v27; 
  unsigned int v28; 
  int entity; 
  float v31; 
  float v32; 
  float v34; 
  double v35; 
  bool v36; 
  double v37; 
  bool v38; 
  const dvar_t *v39; 
  double v40; 
  float v41; 
  double v42; 
  char v47; 
  bool v48; 
  unsigned int v49; 
  __int128 v50; 
  unsigned int v51; 
  bool v52; 
  unsigned int v53; 
  float v54; 
  float v55; 
  float v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  double v60; 
  double v61; 
  __int128 v65; 
  float v67; 
  double v68; 
  double v69; 
  float v70; 
  bool v71; 
  double v78; 
  float v79; 
  float v80; 
  bool v83; 
  float v84; 
  float v85; 
  double v86; 
  double v87; 
  float v89; 
  double v90; 
  double v92; 
  double v93; 
  float v94; 
  unsigned int v97; 
  bool v100; 
  const char *v101; 
  char *fmt; 
  __int64 v106; 
  double v107; 
  __int64 v108; 
  double v109; 
  unsigned int index; 
  bool v111; 
  float v112; 
  int v113; 
  float outProjection[2]; 
  unsigned int outIndex; 
  float v116; 
  float v117; 
  unsigned int v118; 
  vec3_t outOrigin; 
  int v120[4]; 
  char v121[12]; 
  float v122; 
  Bounds outBounds; 

  v3 = stateIndex;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 551, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 551, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 552, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v7 = DVARBOOL_bg_doorEnableEnhanced;
  v8 = v3;
  v9 = &ps->doorState[v3];
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && v9->index != -1 )
  {
    pml->doorPrevAngle[v8] = v9->angle;
    moveType = v9->moveType;
    if ( moveType - 13 > 1 )
    {
      if ( !pm->doorAvailable[v8] && moveType )
        v9->moveType = DOOR_MOVE_INVALID;
      pm->m_bgHandler->GetScriptableDimensions((BgHandler *)pm->m_bgHandler, v9->index, &v112, (vec3_t *)v120, (Bounds *)v121);
      BG_Door_GetPlayerOrigin(ps, &outOrigin);
      BG_Door_GetPlayerBounds(pm, &outBounds);
      frametime = pml->frametime;
      v12 = (float)(frametime * ps->velocity.v[0]) + outOrigin.v[0];
      v13 = LODWORD(frametime);
      v14 = (float)((float)(frametime * ps->velocity.v[1]) + outOrigin.v[1]) - *(float *)&v120[1];
      _XMM9 = LODWORD(FLOAT_1_0);
      v16 = (float)(v14 * v14) + (float)((float)(v12 - *(float *)v120) * (float)(v12 - *(float *)v120));
      *(float *)&v13 = fsqrt(v16);
      _XMM2 = v13;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm9, xmm0
      }
      v20 = (float)(v12 - *(float *)v120) * (float)(1.0 / *(float *)&_XMM0);
      v21 = v14 * (float)(1.0 / *(float *)&_XMM0);
      v22 = v112;
      pml->doorIsClosed[v8] = 0;
      *(float *)&_XMM0 = v9->angle;
      v117 = v16;
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, v22);
      if ( COERCE_FLOAT(_XMM0 & _xmm) < 0.0099999998 && v9->moveType != DOOR_MOVE_PUSHING )
        pml->doorIsClosed[v8] = 1;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorTouchRadiusInflation, "bg_doorTouchRadiusInflation");
      v24 = BG_Door_TestTouching2D(pm, v9, outProjection, *(float *)&Float_Internal_DebugName);
      v111 = v24;
      v118 = v9->moveType;
      v25 = atan2f_0(v21, v20) * 57.295776;
      angle = v9->angle;
      v116 = v25;
      AngleDelta(v25, angle);
      v27 = AngleDelta(v9->angle, v112);
      v28 = v9->moveType;
      _XMM11 = LODWORD(FLOAT_N1_0);
      entity = pm->ps->vehicleState.entity;
      v31 = FLOAT_2_0;
      v113 = entity;
      v32 = *(float *)&v27;
      _XMM10 = 0i64;
      if ( v28 - 7 <= 1 || v28 == 13 || !pm->doorAvailable[v8] )
      {
LABEL_56:
        v50 = LODWORD(DOOR_RELEASE_DIST);
        if ( v16 > (float)(*(float *)&v50 * *(float *)&v50) && v9->moveType == DOOR_MOVE_INVALID )
        {
          v9->moveType = DOOR_MOVE_RELEASE;
          return;
        }
        v51 = v9->moveType;
        v52 = 0;
        if ( ((v51 - 10) & 0xFFFFFFFC) == 0 && v51 != 12 )
        {
          *((_QWORD *)&v50 + 1) = 0i64;
          if ( COERCE_FLOAT(LODWORD(v32) & _xmm) > DOOR_PEEK_BREAK_ANGLE && BG_Door_TestTouching2D(pm, v9, NULL, DOOR_PEEK_BREAK_RADIUS) )
            v52 = 1;
        }
        v53 = v9->moveType;
        v54 = FLOAT_360_0;
        if ( v53 - 2 > 4 && v53 != 13 && v53 - 7 > 1 && (((v53 - 10) & 0xFFFFFFFC) != 0 || v53 == 12 || v52) )
        {
          if ( !pm->doorAvailable[v8] || !v24 || pml->doorIsClosed[v8] && entity == 2047 )
          {
            v9->moveType = DOOR_MOVE_INVALID;
          }
          else
          {
            v55 = v31 * v122;
            v56 = fsqrt(v117);
            *(double *)&v50 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorCollisionRadiusInflation, "bg_doorCollisionRadiusInflation");
            v58 = v50;
            *(float *)&v58 = *(float *)&v50 + outBounds.halfSize.v[1];
            v57 = v58;
            if ( outProjection[0] > v55 )
            {
              v59 = LODWORD(FLOAT_1_0);
              v60 = I_fclamp(1.0 - (float)((float)(outProjection[0] - v55) / *(float *)&v57), 0.0, 1.0);
              v61 = I_fclamp(*(float *)&v60 * slopeCoefficient, 0.0, 1.0);
              *(float *)&v59 = *(float *)&v61 * *(float *)&v57;
              v57 = v59;
            }
            __asm
            {
              vcmpless xmm0, xmm10, xmm13
              vblendvps xmm13, xmm9, xmm11, xmm0
            }
            v65 = v57;
            *(float *)&v65 = *(float *)&v57 / v56;
            _XMM0 = v65;
            __asm { vminss  xmm0, xmm0, xmm9; X }
            v67 = (float)((float)(asinf_0(*(float *)&_XMM0) * 57.295776) * *(float *)&_XMM13) + v116;
            v68 = AngleDelta(v67, v112);
            if ( *(float *)&v68 <= 90.0 )
            {
              if ( *(float *)&v68 < -90.0 )
                v67 = v112 - 90.0;
            }
            else
            {
              v67 = v112 + 90.0;
            }
            v69 = AngleDelta(v67, v9->angle);
            v70 = *(float *)&v69 + v9->angle;
            AngleDelta(v70, v112);
            v71 = v9->moveType == DOOR_MOVE_PUSHING;
            __asm
            {
              vcmpless xmm1, xmm10, xmm0
              vblendvps xmm2, xmm11, xmm9, xmm1
            }
            outProjection[1] = *(float *)&_XMM2;
            if ( !v71 )
              goto LABEL_147;
            __asm
            {
              vcmpless xmm0, xmm10, xmm12
              vblendvps xmm0, xmm11, xmm9, xmm0
            }
            if ( *(float *)&_XMM2 != *(float *)&_XMM0 )
            {
LABEL_147:
              if ( BG_Door_BlockedByVehicle(v9->index, pm->ps->vehicleState.entity, pm->m_bgHandler, (float)(*(float *)&_XMM2 * 90.0) + v112, 0) )
              {
                v9->moveType = DOOR_MOVE_PUSHING_BLOCKED;
                return;
              }
            }
            if ( v9->moveType != DOOR_MOVE_PUSHING && BG_Door_IsOwnedInAntilag(pm, v9->index) )
            {
              v9->moveType = DOOR_MOVE_INVALID;
              return;
            }
            if ( COERCE_FLOAT(LODWORD(v67) & _xmm) > 0.0 )
            {
              __asm
              {
                vcmpless xmm1, xmm10, xmm7
                vblendvps xmm1, xmm11, xmm9, xmm1
              }
              if ( *(float *)&_XMM1 == *(float *)&_XMM13 && outProjection[0] >= MIN_PROJECTION_PUSH_DIST )
              {
                v9->angle = v70;
                v78 = AngleDelta(v70, v112);
                v79 = *(float *)&v78 + v112;
                v9->angle = *(float *)&v78 + v112;
                AngleDelta(v79, v112);
                if ( COERCE_FLOAT(LODWORD(v79) & _xmm) < 0.00000011920929 )
                  v9->angle = v9->angle + 0.00000011920929;
              }
            }
            v80 = v9->angle * 0.0027777778;
            v54 = FLOAT_360_0;
            _XMM0 = 0i64;
            v9->moveType = DOOR_MOVE_PUSHING;
            __asm { vroundss xmm4, xmm0, xmm2, 1 }
            v9->angle = (float)(v80 - *(float *)&_XMM4) * 360.0;
            v9->moveTime = pm->cmd.serverTime;
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_doorStateDebugPrint, "bg_doorStateDebugPrint") == ps->clientNum )
            {
              v83 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
              v84 = pml->doorPrevAngle[v8];
              v85 = v9->angle;
              index = v9->index;
              v109 = v84;
              v86 = (float)(v85 - v84);
              v87 = v85;
              v107 = pml->frametime;
              LODWORD(fmt) = ps->serverTime;
              if ( v83 )
                Com_Printf(0, "SERVER - DOOR PUSH Angle: %f Diff: %0.3f Time %d DeltaTime: %0.3f PrevAngle: %0.3f  Index: %d \n", v87, v86, fmt, v107, v109, index);
              else
                Com_Printf(0, "CLIENT - DOOR PUSH Angle: %f Diff: %0.3f Time %d DeltaTime: %0.3f PrevAngle: %0.3f  Index: %d \n", v87, v86, fmt, v107, v109, index);
            }
          }
          goto LABEL_141;
        }
        if ( ps->serverTime < v9->moveTime )
          return;
        if ( v53 == 2 )
        {
          *(float *)&_XMM8 = FLOAT_N1_0;
          if ( v32 >= 0.0099999998 )
          {
LABEL_107:
            v89 = v112;
            v90 = BG_CalcDoorUseSpeed(pm, v9);
            goto LABEL_135;
          }
LABEL_113:
          v89 = v112 - 90.0;
          v90 = BG_CalcDoorUseSpeed(pm, v9);
          goto LABEL_135;
        }
        if ( v53 == 3 )
        {
          *(float *)&_XMM8 = FLOAT_1_0;
          if ( v32 <= -0.0099999998 )
            goto LABEL_107;
        }
        else
        {
          if ( v53 == 4 )
          {
            *(float *)&_XMM8 = FLOAT_N1_0;
            goto LABEL_113;
          }
          if ( v53 != 5 )
          {
            if ( v53 == 6 )
            {
              v89 = v112;
              __asm
              {
                vcmpless xmm0, xmm10, xmm12
                vblendvps xmm8, xmm9, xmm11, xmm0
              }
              v90 = BG_CalcDoorUseSpeed(pm, v9);
            }
            else
            {
              if ( v53 == 10 )
              {
                *(float *)&_XMM8 = FLOAT_N1_0;
                if ( v32 < 0.0099999998 )
                {
                  v92 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_doorPeekAngle, "bg_doorPeekAngle");
                  v89 = v112 - *(float *)&v92;
                }
                else
                {
                  v89 = v112;
                }
              }
              else
              {
                if ( v53 != 11 )
                {
                  if ( v53 == 7 )
                  {
                    v89 = v112 - 90.0;
                    *(float *)&_XMM8 = FLOAT_N1_0;
                  }
                  else
                  {
                    if ( v53 != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_door.cpp", 778, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entered with invalid door move type.  Should not get here.") )
                      __debugbreak();
                    v89 = v112 + 90.0;
                    *(float *)&_XMM8 = FLOAT_1_0;
                  }
                  v90 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_doorBashSpeed, "bg_doorBashSpeed");
                  goto LABEL_135;
                }
                *(float *)&_XMM8 = FLOAT_1_0;
                if ( v32 > -0.0099999998 )
                {
                  v93 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_doorPeekAngle, "bg_doorPeekAngle");
                  v89 = *(float *)&v93 + v112;
                }
                else
                {
                  v89 = v112;
                }
              }
              v90 = BG_CalcDoorUseSpeed(pm, v9);
            }
LABEL_135:
            v94 = (float)((float)(*(float *)&v90 * *(float *)&_XMM8) * pml->frametime) + v9->angle;
            AngleDelta(v89, v94);
            __asm
            {
              vcmpless xmm1, xmm10, xmm0
              vblendvps xmm0, xmm11, xmm9, xmm1
            }
            if ( *(float *)&_XMM0 != *(float *)&_XMM8 )
            {
              v97 = v9->index;
              v9->angle = v89;
              v9->moveType = DOOR_MOVE_COMPLETE;
              BG_AddPredictableEventToPlayerstate(EV_DOOR_MOVE_COMPLETE, v97, pm->cmd.serverTime, pm->weaponMap, ps);
              v94 = v9->angle;
            }
            _XMM1 = 0i64;
            __asm { vroundss xmm3, xmm1, xmm2, 1 }
            v9->angle = (float)((float)(v94 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_doorStateDebugPrint, "bg_doorStateDebugPrint") == ps->clientNum )
            {
              v100 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
              v101 = "CLIENT - DOOR MOVE/BASH Angle: %f Prev: %f  Dir: %0.3f  Time: %d  Index: %d \n";
              if ( v100 )
                v101 = "SERVER - DOOR MOVE/BASH Angle: %f Prev: %f  Dir: %0.3f  Time: %d  Index: %d \n";
              LODWORD(v106) = ps->serverTime;
              LODWORD(v108) = v9->index;
              Com_Printf(0, v101, v9->angle, pml->doorPrevAngle[(unsigned int)v8], *(float *)&_XMM8, v106, v108);
            }
LABEL_141:
            if ( v118 == 1 && v9->moveType != DOOR_MOVE_PUSHING )
              BG_AddPredictableEventToPlayerstate(EV_DOOR_MOVE_COMPLETE, v9->index, pm->cmd.serverTime, pm->weaponMap, ps);
            _XMM5 = 0i64;
            __asm
            {
              vroundss xmm1, xmm5, xmm3, 1
              vroundss xmm3, xmm5, xmm2, 1
            }
            v9->angle = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * v54;
            return;
          }
          *(float *)&_XMM8 = FLOAT_1_0;
        }
        v89 = v112 + 90.0;
        v90 = BG_CalcDoorUseSpeed(pm, v9);
        goto LABEL_135;
      }
      v36 = 0;
      if ( pml->meleeFired && v24 )
      {
        v34 = outProjection[0];
        if ( outProjection[0] > 0.0 )
        {
          v35 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorMeleeExtensionDist, "bg_doorMeleeExtensionDist");
          if ( v34 < (float)(*(float *)&v35 + (float)(2.0 * v122)) )
            v36 = 1;
        }
      }
      v38 = 0;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
      {
        v37 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorBashRadiusInflation, "bg_doorBashRadiusInflation");
        if ( BG_Door_TestTouching2D(pm, v9, NULL, *(float *)&v37) )
          v38 = 1;
      }
      if ( !v36 && !v38 )
      {
LABEL_55:
        entity = v113;
        v24 = v111;
        goto LABEL_56;
      }
      v39 = DCONST_DVARSTR_bg_doorBashRumbleName;
      if ( !DCONST_DVARSTR_bg_doorBashRumbleName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorBashRumbleName") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_RUMBLE, v39->current.string, &outIndex);
      v40 = AngleDelta(ps->viewangles.v[1], v9->angle);
      LODWORD(v41) = LODWORD(v40) & _xmm;
      v42 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorBashLookAngleDifference, "bg_doorBashLookAngleDifference");
      if ( v41 < *(float *)&v42 )
        goto LABEL_45;
      if ( v41 >= (float)(180.0 - *(float *)&v42) )
        goto LABEL_45;
      __asm
      {
        vcmpless xmm0, xmm10, xmm8
        vblendvps xmm1, xmm11, xmm9, xmm0
        vcmpless xmm0, xmm10, xmm13
        vblendvps xmm0, xmm11, xmm9, xmm0
      }
      if ( *(float *)&_XMM1 == *(float *)&_XMM0 )
LABEL_45:
        v47 = 0;
      else
        v47 = 1;
      if ( COERCE_FLOAT(LODWORD(v25) & _xmm) > 90.0 || !v47 )
        goto LABEL_54;
      v48 = v25 <= 0.0;
      if ( v25 < 0.0 )
      {
        if ( v32 < 89.989998 && !BG_Door_BlockedByVehicle(v9->index, pm->ps->vehicleState.entity, pm->m_bgHandler, v112 + 90.0, 1) )
        {
          if ( !BG_Door_IsOwnedInAntilag(pm, v9->index) )
          {
            v9->moveType = DOOR_MOVE_BASH_LEFT;
LABEL_53:
            v49 = v9->index;
            v9->moveTime = pm->cmd.serverTime;
            BG_AddPredictableEventToPlayerstate(EV_DOOR_BASH, v49, pm->cmd.serverTime, pm->weaponMap, ps);
            BG_AddPredictableEventToPlayerstate(EV_PLAY_RUMBLE_ON_ENT, outIndex, pm->cmd.serverTime, pm->weaponMap, ps);
          }
LABEL_54:
          v31 = FLOAT_2_0;
          goto LABEL_55;
        }
        v48 = v25 <= 0.0;
      }
      if ( v48 || v32 <= -89.989998 || BG_Door_BlockedByVehicle(v9->index, pm->ps->vehicleState.entity, pm->m_bgHandler, v112 - 90.0, 1) || BG_Door_IsOwnedInAntilag(pm, v9->index) )
        goto LABEL_54;
      v9->moveType = DOOR_MOVE_BASH_RIGHT;
      goto LABEL_53;
    }
  }
}

/*
==============
TestDoorOverlap2D
==============
*/
char TestDoorOverlap2D(float radius, vec2_t playerStart, vec2_t playerEnd, vec2_t doorOrigin, vec2_t doorStart, vec2_t doorEnd, float *outIntersectProj)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  double v12; 

  v8 = doorOrigin.v[0];
  v9 = doorOrigin.v[1];
  v10 = 1.0 / (float)((float)((float)(doorStart.v[1] - doorOrigin.v[1]) * (float)(doorStart.v[1] - doorOrigin.v[1])) + (float)((float)(doorStart.v[0] - doorOrigin.v[0]) * (float)(doorStart.v[0] - doorOrigin.v[0])));
  I_fclamp((float)((float)((float)(playerStart.v[1] - doorOrigin.v[1]) * (float)(doorStart.v[1] - doorOrigin.v[1])) + (float)((float)(playerStart.v[0] - doorOrigin.v[0]) * (float)(doorStart.v[0] - doorOrigin.v[0]))) * v10, 0.0, 1.0);
  v11 = (float)((float)((float)(playerEnd.v[1] - v9) * (float)(doorEnd.v[1] - v9)) + (float)((float)(playerEnd.v[0] - v8) * (float)(doorEnd.v[0] - v8))) * v10;
  v12 = I_fclamp(v11, 0.0, 1.0);
  if ( (float)((float)((float)((float)((float)((float)(doorEnd.v[1] - v9) * *(float *)&v12) + v9) - playerEnd.v[1]) * (float)((float)((float)((float)(doorEnd.v[1] - v9) * *(float *)&v12) + v9) - playerEnd.v[1])) + (float)((float)((float)((float)((float)(doorEnd.v[0] - v8) * *(float *)&v12) + v8) - playerEnd.v[0]) * (float)((float)((float)((float)(doorEnd.v[0] - v8) * *(float *)&v12) + v8) - playerEnd.v[0]))) >= (float)(radius * radius) )
    return 0;
  *outIntersectProj = v11;
  return 1;
}

