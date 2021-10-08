/*
==============
FD_UpdateChaseCam
==============
*/

void __fastcall FD_UpdateChaseCam(LocalClientNum_t localClientNum, const playerState_s *ps, const float dT, const centity_t *cent, vec3_t *outViewOrigin, vec3_t *outViewAngles, bool isADS)
{
  ?FD_UpdateChaseCam@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@MPEBUcentity_t@@Tvec3_t@@3_N@Z(localClientNum, ps, dT, cent, outViewOrigin, outViewAngles, isADS);
}

/*
==============
FD_GetHorizontalSens
==============
*/

double __fastcall FD_GetHorizontalSens()
{
  double result; 

  *(float *)&result = ?FD_GetHorizontalSens@@YAMXZ();
  return result;
}

/*
==============
FD_RegisterDvars
==============
*/

void FD_RegisterDvars(void)
{
  ?FD_RegisterDvars@@YAXXZ();
}

/*
==============
I_pow
==============
*/

double __fastcall I_pow(float value, float expo)
{
  double result; 

  *(float *)&result = ?I_pow@@YAMMM@Z(value, expo);
  return result;
}

/*
==============
FD_DebugLine
==============
*/

void __fastcall FD_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  ?FD_DebugLine@@YAXAEBTvec3_t@@0AEBTvec4_t@@HH@Z(start, end, color, depthTest, duration);
}

/*
==============
FD_Trace
==============
*/

void __fastcall FD_Trace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int brushmask, const TraceData *data)
{
  ?FD_Trace@@YAXW4Physics_WorldId@@PEAUtrace_t@@Tvec3_t@@2PEBUBounds@@HPEBUTraceData@@@Z(worldId, results, start, end, bounds, brushmask, data);
}

/*
==============
FD_GetVerticalSens
==============
*/

double __fastcall FD_GetVerticalSens()
{
  double result; 

  *(float *)&result = ?FD_GetVerticalSens@@YAMXZ();
  return result;
}

/*
==============
FD_ClampWithinRange
==============
*/

double __fastcall FD_ClampWithinRange(float thisValue, float withinThisValue)
{
  double result; 

  *(float *)&result = ?FD_ClampWithinRange@@YAMMM@Z(thisValue, withinThisValue);
  return result;
}

/*
==============
FD_GetDrawAvoidanceTracesDvar
==============
*/

bool __fastcall FD_GetDrawAvoidanceTracesDvar()
{
  return ?FD_GetDrawAvoidanceTracesDvar@@YA_NXZ();
}

/*
==============
FD_SetChaseCameraOffsetObject
==============
*/

void __fastcall FD_SetChaseCameraOffsetObject(LocalClientNum_t localClientNum, __int16 entNum, bool overrideOriginAndAngles)
{
  ?FD_SetChaseCameraOffsetObject@@YAXW4LocalClientNum_t@@F_N@Z(localClientNum, entNum, overrideOriginAndAngles);
}

/*
==============
FD_GetAceModeDistancesFromDvars
==============
*/

void __fastcall FD_GetAceModeDistancesFromDvars(float *min, float *optimal, float *max)
{
  ?FD_GetAceModeDistancesFromDvars@@YAXPEAM00@Z(min, optimal, max);
}

/*
==============
FD_GetTimedSine
==============
*/

double __fastcall FD_GetTimedSine(float timeScale, float delta)
{
  double result; 

  *(float *)&result = ?FD_GetTimedSine@@YAMMM@Z(timeScale, delta);
  return result;
}

/*
==============
FD_ComputeExpo
==============
*/

double __fastcall FD_ComputeExpo(float value, float expo)
{
  double result; 

  *(float *)&result = ?FD_ComputeExpo@@YAMMM@Z(value, expo);
  return result;
}

/*
==============
FD_GetRandomFloat
==============
*/

double __fastcall FD_GetRandomFloat(float min, float max, unsigned int additionalSeed)
{
  double result; 

  *(float *)&result = ?FD_GetRandomFloat@@YAMMMI@Z(min, max, additionalSeed);
  return result;
}

/*
==============
FD_GetTFRStatus
==============
*/

bool __fastcall FD_GetTFRStatus()
{
  return ?FD_GetTFRStatus@@YA_NXZ();
}

/*
==============
FD_AllowAceModeDistanceChanges
==============
*/

bool __fastcall FD_AllowAceModeDistanceChanges()
{
  return ?FD_AllowAceModeDistanceChanges@@YA_NXZ();
}

/*
==============
FD_SetParticleEffectsRelativeVelocity
==============
*/

void __fastcall FD_SetParticleEffectsRelativeVelocity(vec3_t *newVelocity)
{
  ?FD_SetParticleEffectsRelativeVelocity@@YAXTvec3_t@@@Z(newVelocity);
}

/*
==============
FD_HarmonicCompressor
==============
*/

double __fastcall FD_HarmonicCompressor(float *newSignal, float currentSignal, float *currentRateSignal, float dT, float signalRateAttack, float signalRateDamping, float lowestSignal, float highestSignal)
{
  double result; 

  *(float *)&result = ?FD_HarmonicCompressor@@YAMAEAMM0MMMMM@Z(newSignal, currentSignal, currentRateSignal, dT, signalRateAttack, signalRateDamping, lowestSignal, highestSignal);
  return result;
}

/*
==============
FD_UpdateControlSurfacesOnModel
==============
*/

void __fastcall FD_UpdateControlSurfacesOnModel(const cpose_t *pose, const DObj *obj, const int *partBits, float aileron, float elevator, float rudder, float propeller)
{
  ?FD_UpdateControlSurfacesOnModel@@YAXPEBUcpose_t@@PEBUDObj@@QEBHMMMM@Z(pose, obj, partBits, aileron, elevator, rudder, propeller);
}

/*
==============
FD_QuatToAngleAxis
==============
*/

void __fastcall FD_QuatToAngleAxis(const vec4_t *quat, float *angleOut, vec3_t *axisOut)
{
  ?FD_QuatToAngleAxis@@YAXAEBTvec4_t@@PEAMAEATvec3_t@@@Z(quat, angleOut, axisOut);
}

/*
==============
FD_ControlInputStrength
==============
*/

double __fastcall FD_ControlInputStrength(float *inputArray)
{
  double result; 

  *(float *)&result = ?FD_ControlInputStrength@@YAMPEAM@Z(inputArray);
  return result;
}

/*
==============
FD_GetDrawAvoidanceTracesAsDoppler
==============
*/

bool __fastcall FD_GetDrawAvoidanceTracesAsDoppler()
{
  return ?FD_GetDrawAvoidanceTracesAsDoppler@@YA_NXZ();
}

/*
==============
FD_UpdateLocalControlSurfaceValues
==============
*/

void __fastcall FD_UpdateLocalControlSurfaceValues(LocalClientNum_t localClientNum, float *out_aileron, float *out_elevator, float *out_rudder, float *out_propeller)
{
  ?FD_UpdateLocalControlSurfaceValues@@YAXW4LocalClientNum_t@@PEAM111@Z(localClientNum, out_aileron, out_elevator, out_rudder, out_propeller);
}

/*
==============
CG_FlightDynamicsCameraUpdate
==============
*/

bool __fastcall CG_FlightDynamicsCameraUpdate(cg_t *cgameGlob, const centity_t *cent, const VehicleDef *vehDef, float frameTime, RefdefView *inOutRefDef)
{
  return ?CG_FlightDynamicsCameraUpdate@@YA_NPEAVcg_t@@PEBUcentity_t@@PEBUVehicleDef@@MAEAURefdefView@@@Z(cgameGlob, cent, vehDef, frameTime, inOutRefDef);
}

/*
==============
FD_GetCollisionStatus
==============
*/

bool __fastcall FD_GetCollisionStatus()
{
  return ?FD_GetCollisionStatus@@YA_NXZ();
}

/*
==============
CG_FlightDynamicsCameraUpdate
==============
*/

bool __fastcall CG_FlightDynamicsCameraUpdate(cg_t *cgameGlob, const centity_t *cent, const VehicleDef *vehDef, double frameTime, RefdefView *inOutRefDef)
{
  __int64 localClientNum; 
  CgVehicleSystem *v30; 
  VehicleClient *Client; 
  BgVehiclePhysicsManager *v32; 
  bool IsDynamic; 
  char v37; 
  bool v38; 
  unsigned int PhysicsBodyId; 
  Physics_WorldId m_worldId; 
  hknpWorld *world; 
  const dvar_t *v75; 
  char v76; 
  char v77; 
  int v145; 
  const dvar_t *v146; 
  int integer; 
  int v148; 
  const char *v152; 
  const char *v155; 
  unsigned int z_low; 
  unsigned int v158; 
  unsigned int v159; 
  const DObj *v160; 
  bool v161; 
  cpose_t *v166; 
  __int64 v169; 
  bool v268; 
  __int64 v294; 
  __int64 v640; 
  RefdefView *v664; 
  char v734; 
  vec3_t *end; 
  float *outRawFrac; 
  int v797; 
  int v798; 
  int v799; 
  vec3_t v801; 
  const VehicleDef *v803; 
  cpose_t *pose; 
  float v805; 
  vec3_t v806; 
  vec3_t outOrg; 
  int ignoreEntities; 
  __int64 v809; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec3_t v812; 
  vec3_t v813; 
  vec4_t result; 
  vec3_t inOrg; 
  vec3_t v816; 
  vec3_t v817; 
  vec3_t v818; 
  vec3_t vec; 
  vec3_t v820; 
  vec3_t v; 
  vec3_t v822; 
  int v823; 
  int v826[2]; 
  vec3_t v827; 
  float v829; 
  vec3_t v830; 
  vec3_t v831; 
  vec3_t v832; 
  vec4_t out; 
  vec4_t v834; 
  vec4_t to; 
  vec3_t angles; 
  vec4_t v853; 
  tmat33_t<vec3_t> outTagMat; 
  vec4_t quat; 
  char v856; 
  void *retaddr; 

  _RAX = &retaddr;
  v809 = -2i64;
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
    vmovaps xmm6, xmm3
  }
  v803 = vehDef;
  pose = &cent->pose;
  _R13 = cgameGlob;
  *(_QWORD *)v.v = inOutRefDef;
  localClientNum = cgameGlob->localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 342, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 343, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  _RBX = BG_GetFlightDynamicsManager();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 346, ASSERT_TYPE_ASSERT, "(fdManager)", (const char *)&queryFormat, "fdManager") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&outRawFrac = cl_maxLocalClients;
    LODWORD(end) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 550, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( clientNum ) ) < (unsigned)( (cl_maxLocalClients) )", "static_cast<int>( clientNum ) doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", end, outRawFrac) )
      __debugbreak();
  }
  _RSI = localClientNum;
  if ( (FlightDynamicsManager *)((char *)_RBX + 280 * localClientNum) == (FlightDynamicsManager *)-196i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 349, ASSERT_TYPE_ASSERT, "(fdLocalCameraData)", (const char *)&queryFormat, "fdLocalCameraData") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3d888889; max
    vmovss  xmm1, cs:__real@3b888889; min
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+rbx+0C8h]
    vmulss  xmm1, xmm2, cs:__real@3dcccccd
    vsubss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm0, cs:__real@3dcccccd
    vaddss  xmm13, xmm2, xmm0
    vmovss  dword ptr [rsi+rbx+0C8h], xmm13
  }
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(outRawFrac) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", outRawFrac) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(outRawFrac) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(end) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", end, outRawFrac) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[localClientNum] )
  {
    LODWORD(outRawFrac) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", outRawFrac) )
      __debugbreak();
  }
  v30 = CgVehicleSystem::ms_vehicleSystemArray[localClientNum];
  Client = CgVehicleSystem::GetClient(v30, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 358, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  v32 = v30->PhysicsGetVehiclePhysicsManager(v30);
  _R14 = BgVehiclePhysicsManager::GetObjectById(v32, Client->physicsId);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 360, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  IsDynamic = BgVehiclePhysics::IsDynamic(_R14);
  __asm
  {
    vxorps  xmm14, xmm14, xmm14
    vmovss  xmm11, cs:__real@3f800000
  }
  v37 = 0;
  v38 = !IsDynamic;
  if ( IsDynamic )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14+178h]
      vmulss  xmm3, xmm0, dword ptr [r14+1A8h]
      vmovss  xmm1, dword ptr [r14+174h]
      vmulss  xmm2, xmm1, dword ptr [r14+1A4h]
      vmovss  xmm0, dword ptr [r14+17Ch]
      vmulss  xmm1, xmm0, dword ptr [r14+1ACh]
    }
  }
  else
  {
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_R14);
    m_worldId = _R14->m_worldId;
    LODWORD(outOrigin.v[0]) = PhysicsBodyId;
    if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      LODWORD(outRawFrac) = m_worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", outRawFrac) )
        __debugbreak();
    }
    if ( (PhysicsBodyId & 0xFFFFFF) == 0xFFFFFF )
    {
      LODWORD(outRawFrac) = m_worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", outRawFrac) )
        __debugbreak();
    }
    world = HavokPhysics_GetConstWorld(m_worldId)->world;
    *(_QWORD *)outOrigin.v = world;
    if ( !world )
    {
      LODWORD(outRawFrac) = m_worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", outRawFrac) )
        __debugbreak();
      world = *(hknpWorld **)outOrigin.v;
    }
    _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, PhysicsBodyId);
    __asm
    {
      vmovss  xmm6, dword ptr [rax]
      vmovss  [rbp+290h+var_160], xmm6
      vmovss  xmm4, dword ptr [rax+4]
      vmovss  [rbp+290h+var_15C], xmm4
      vmovss  xmm5, dword ptr [rax+8]
      vmovss  [rbp+290h+var_158], xmm5
      vmovss  [rbp+290h+var_154], xmm14
      vmovss  xmm0, dword ptr [rax+10h]
      vmovss  [rbp+290h+var_150], xmm0
      vmovss  xmm1, dword ptr [rax+14h]
      vmovss  [rbp+290h+var_14C], xmm1
      vmovss  xmm0, dword ptr [rax+18h]
      vmovss  [rbp+290h+var_148], xmm0
      vmovss  [rbp+290h+var_144], xmm14
      vmovss  xmm0, dword ptr [rax+20h]
      vmovss  [rbp+290h+var_140], xmm0
      vmovss  xmm1, dword ptr [rax+24h]
      vmovss  [rbp+290h+var_13C], xmm1
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  [rbp+290h+var_138], xmm0
      vmovss  [rbp+290h+var_134], xmm14
      vmovss  xmm3, cs:__real@42000000
      vmulss  xmm0, xmm3, dword ptr [rax+30h]
      vmovss  [rbp+290h+var_130], xmm0
      vmulss  xmm2, xmm3, dword ptr [rax+34h]
      vmovss  [rbp+290h+var_12C], xmm2
      vmulss  xmm1, xmm3, dword ptr [rax+38h]
      vmovss  [rbp+290h+var_128], xmm1
      vmovss  [rbp+290h+var_124], xmm11
      vmovsd  xmm0, qword ptr [r14+140h]
      vmovsd  [rbp+290h+var_1E8], xmm0
    }
    v829 = _R14->m_history.m_lastLinearVel.v[2];
    __asm
    {
      vmulss  xmm3, xmm4, dword ptr [rbp+290h+var_1E8+4]
      vmulss  xmm2, xmm6, dword ptr [rbp+290h+var_1E8]
      vmulss  xmm1, xmm5, [rbp+290h+var_1E0]
    }
  }
  __asm
  {
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
    vcomiss xmm6, xmm14
  }
  if ( v37 | v38 )
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(_R14);
  else
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_R14);
  __asm
  {
    vmaxss  xmm0, xmm0, cs:__real@41200000
    vdivss  xmm0, xmm6, xmm0
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
    vmovaps xmm2, xmm11; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovss  xmm10, cs:__real@3f000000
    vcomiss xmm0, dword ptr [rsi+rbx+1D8h]
  }
  if ( v37 )
  {
    __asm { vmovaps xmm7, xmm10 }
  }
  else
  {
    _RDI = DCONST_DVARFLT_fd_camera_fov_lerp_speed;
    if ( !DCONST_DVARFLT_fd_camera_fov_lerp_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_fov_lerp_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm7, dword ptr [rdi+28h] }
  }
  v75 = DCONST_DVARFLT_fd_camera_fov_max_delta;
  if ( !DCONST_DVARFLT_fd_camera_fov_max_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_fov_max_delta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v75);
  __asm
  {
    vsubss  xmm0, xmm9, cs:__real@3e99999a
    vmaxss  xmm1, xmm0, xmm14
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm1
    vmulss  xmm2, xmm1, cs:__real@403a96c4
    vmulss  xmm8, xmm2, dword ptr [rdi+28h]
    vmovss  xmm5, cs:__real@3c83126f
    vcomiss xmm13, xmm5
  }
  if ( v76 | v77 )
    goto LABEL_61;
  __asm { vcomiss xmm13, xmm11 }
  if ( !v76 )
  {
LABEL_61:
    __asm { vmovaps xmm6, xmm13 }
    _ER8 = 1;
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm13, cs:__real@4279ffff
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm1, xmm1, xmm0, 1
      vmulss  xmm0, xmm1, xmm5
      vsubss  xmm2, xmm13, xmm0
      vcvttss2si r8d, xmm1
      vcomiss xmm2, xmm14
    }
    if ( v76 | v77 )
    {
      __asm { vmovaps xmm6, xmm5 }
    }
    else
    {
      __asm { vmulss  xmm6, xmm2, xmm5 }
      ++_ER8;
    }
  }
  _ECX = 0;
  if ( _ER8 >= 4 )
  {
    _EDI = _ER8 - 1;
    __asm { vmovss  xmm3, dword ptr [rsi+rbx+1D4h] }
    _EDX = 2;
    do
    {
      __asm
      {
        vmovd   xmm1, edi
        vmovd   xmm0, ecx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
        vsubss  xmm0, xmm8, xmm3
        vmulss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm3
      }
      _EAX = _EDX - 1;
      __asm
      {
        vmovd   xmm1, edi
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
        vsubss  xmm0, xmm8, xmm3
        vmulss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm4, xmm2, xmm3
        vmovd   xmm1, edi
        vmovd   xmm0, edx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
        vsubss  xmm0, xmm8, xmm4
        vmulss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm4
      }
      _EAX = _EDX + 1;
      __asm
      {
        vmovd   xmm1, edi
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
        vsubss  xmm0, xmm8, xmm3
        vmovss  [rsp+390h+var_350], xmm1
        vmulss  xmm0, xmm0, xmm1
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm3, xmm1, xmm3
      }
      _ECX += 4;
      _EDX += 4;
    }
    while ( _ECX < _ER8 - 3 );
    __asm { vmovss  dword ptr [rsi+rbx+1D4h], xmm3 }
  }
  if ( _ECX < _ER8 )
  {
    _EAX = _ER8 - 1;
    do
    {
      __asm
      {
        vmovd   xmm1, eax
        vmovd   xmm0, ecx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
        vmovss  xmm3, dword ptr [rsi+rbx+1D4h]
        vsubss  xmm0, xmm8, xmm3
        vmovss  [rsp+390h+var_350], xmm1
        vmulss  xmm0, xmm0, xmm1
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rsi+rbx+1D4h], xmm2
      }
      ++_ECX;
    }
    while ( _ECX < _ER8 );
  }
  __asm
  {
    vmovss  dword ptr [rsi+rbx+1D8h], xmm9
    vmovss  xmm12, cs:__real@c3e10000
    vmovss  xmm9, cs:__real@42200000
    vmovss  dword ptr [rsp+390h+var_338], xmm9
    vmovaps xmm15, xmm14
  }
  v145 = 0;
  if ( !v803 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 391, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( v803->type == VEH_SEACRAFT )
  {
    _RDI = DVARFLT_fd_camera_boat_chase_dist;
    if ( !DVARFLT_fd_camera_boat_chase_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_boat_chase_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm12, dword ptr [rdi+28h] }
    _RDI = DVARFLT_fd_camera_boat_chase_verticalOffset;
    if ( DVARFLT_fd_camera_boat_chase_verticalOffset )
      goto LABEL_100;
    v155 = "fd_camera_boat_chase_verticalOffset";
    goto LABEL_98;
  }
  v146 = DVARINT_fd_camera_mode;
  if ( !DVARINT_fd_camera_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v146);
  integer = v146->current.integer;
  if ( !integer )
  {
    v145 = 4;
    _RDI = DVARFLT_fd_camera_default_chase_dist;
    if ( !DVARFLT_fd_camera_default_chase_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_default_chase_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm12, dword ptr [rdi+28h] }
    _RDI = DVARFLT_fd_camera_default_chase_verticalOffset;
    if ( DVARFLT_fd_camera_default_chase_verticalOffset )
      goto LABEL_100;
    v155 = "fd_camera_default_chase_verticalOffset";
LABEL_98:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v155) )
      __debugbreak();
LABEL_100:
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm9, dword ptr [rdi+28h] }
    _RDI = DVARFLT_fd_camera_default_chase_lateralOffset;
    __asm { vmovss  dword ptr [rsp+390h+var_338], xmm9 }
    if ( DVARFLT_fd_camera_default_chase_lateralOffset )
    {
LABEL_104:
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm15, dword ptr [rdi+28h] }
      goto LABEL_105;
    }
    v152 = "fd_camera_default_chase_lateralOffset";
LABEL_102:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v152) )
      __debugbreak();
    goto LABEL_104;
  }
  v148 = integer - 1;
  if ( !v148 )
  {
    v145 = 2;
    _RDI = DVARFLT_fd_camera_cockpit_chase_dist;
    if ( !DVARFLT_fd_camera_cockpit_chase_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm12, dword ptr [rdi+28h] }
    _RDI = DVARFLT_fd_camera_cockpit_chase_verticalOffset;
    if ( !DVARFLT_fd_camera_cockpit_chase_verticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_verticalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm9, dword ptr [rdi+28h]
      vmovss  dword ptr [rsp+390h+var_338], xmm9
    }
    _RDI = DVARFLT_fd_camera_cockpit_chase_lateralOffset;
    if ( DVARFLT_fd_camera_cockpit_chase_lateralOffset )
      goto LABEL_104;
    v152 = "fd_camera_cockpit_chase_lateralOffset";
    goto LABEL_102;
  }
  if ( v148 == 1 )
    v145 = 5;
LABEL_105:
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 422, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (LOBYTE(pose[2].angles.v[0]) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 423, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  z_low = SLOWORD(pose[1].prevOrigin.prevOrigin.xyz.z);
  if ( z_low > 0x9E4 )
  {
    LODWORD(outRawFrac) = SLOWORD(pose[1].prevOrigin.prevOrigin.xyz.z);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", outRawFrac) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= 2 )
  {
    LODWORD(outRawFrac) = 2;
    LODWORD(end) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", end, outRawFrac) )
      __debugbreak();
  }
  v158 = 2533 * localClientNum + z_low;
  if ( v158 >= 0x13CA )
  {
    LODWORD(outRawFrac) = v158;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", outRawFrac) )
      __debugbreak();
  }
  v159 = clientObjMap[v158];
  if ( v159 )
  {
    if ( v159 >= (unsigned int)s_objCount )
    {
      LODWORD(outRawFrac) = v159;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", outRawFrac) )
        __debugbreak();
    }
    v160 = (const DObj *)s_objBuf[v159];
  }
  else
  {
    v160 = NULL;
  }
  if ( !v160 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 427, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 431, ASSERT_TYPE_ASSERT, "(fd)", (const char *)&queryFormat, "fd") )
    __debugbreak();
  v161 = _RBX->m_Use1stPerson <= (unsigned int)_RBX->m_Prefer1stPerson;
  if ( _RBX->m_Use1stPerson == _RBX->m_Prefer1stPerson )
    goto LABEL_135;
  __asm
  {
    vaddss  xmm0, xmm13, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm0
    vcomiss xmm0, xmm11
  }
  if ( !v161 )
  {
    _RBX->m_Use1stPerson = _RBX->m_Prefer1stPerson;
LABEL_135:
    _RBX->m_InternalTimer = 0.0;
    goto LABEL_136;
  }
  _RBX->m_Prefer1stPerson = _RBX->m_Use1stPerson;
LABEL_136:
  if ( _RBX->m_Use1stPerson )
  {
    v145 = 2;
    _R15 = DVARFLT_fd_camera_cockpit_chase_dist;
    if ( !DVARFLT_fd_camera_cockpit_chase_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm { vmovss  xmm12, dword ptr [r15+28h] }
    _R15 = DVARFLT_fd_camera_cockpit_chase_verticalOffset;
    if ( !DVARFLT_fd_camera_cockpit_chase_verticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_verticalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm
    {
      vmovss  xmm9, dword ptr [r15+28h]
      vmovss  dword ptr [rsp+390h+var_338], xmm9
    }
    _R15 = DVARFLT_fd_camera_cockpit_chase_lateralOffset;
    if ( !DVARFLT_fd_camera_cockpit_chase_lateralOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_lateralOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm { vmovss  xmm15, dword ptr [r15+28h] }
  }
  v166 = pose;
  if ( CG_DObjGetWorldTagMatrix(pose, v160, scr_const.tag_origin, &outTagMat, &outOrigin) )
  {
    AxisToQuat(&outTagMat, &out);
    AxisToAngles(&outTagMat, &angles);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+290h+out]
      vmovdqa xmmword ptr [rbp+290h+to], xmm0
      vmovsd  xmm1, qword ptr [rbp+290h+outOrigin]
      vmovsd  qword ptr [rbp+290h+inOrg], xmm1
    }
    inOrg.v[2] = outOrigin.v[2];
    QuatTransform(&out, &_RBX->m_ForwardAxis, &v812);
    QuatTransform(&out, &_RBX->m_UpAxis, &v820);
    QuatTransform(&out, &_RBX->m_ElevatorAxis, &v816);
    switch ( v145 )
    {
      case 0:
        if ( ((unsigned __int8 (__fastcall *)(BgVehiclePhysics *))_R14->__vftable[1].LoadFromMemFile)(_R14) )
        {
          __asm { vmovaps xmm1, xmm11 }
          ((void (__fastcall *)(BgVehiclePhysics *, __int64, vec3_t *))_R14->__vftable[1].Setup)(_R14, v169, &v813);
        }
        else
        {
          QuatTransform(&out, &_RBX->m_ForwardAxis, &v813);
        }
        __asm
        {
          vmulss  xmm4, xmm13, cs:?FD_CAM_FBW_VECTOR_LERP@@3MA; float FD_CAM_FBW_VECTOR_LERP
          vmovss  xmm3, dword ptr [rsi+rbx+144h]
          vmovss  xmm0, dword ptr [rbp+290h+var_2B8]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm10, xmm2, xmm3
          vmovss  dword ptr [rbp+290h+var_2B8], xmm10
          vmovss  xmm3, dword ptr [rsi+rbx+148h]
          vmovss  xmm0, dword ptr [rbp+290h+var_2B8+4]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm9, xmm2, xmm3
          vmovss  dword ptr [rbp+290h+var_2B8+4], xmm9
          vmovss  xmm3, dword ptr [rsi+rbx+14Ch]
          vmovss  xmm0, dword ptr [rbp+290h+var_2B8+8]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm5, xmm2, xmm3
          vmovss  dword ptr [rbp+290h+var_2B8+8], xmm5
          vmovss  xmm3, dword ptr [rsi+rbx+18Ch]
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm8, xmm2, xmm3
          vmovss  dword ptr [rbp+290h+var_2C8], xmm8
          vmovss  xmm3, dword ptr [rsi+rbx+190h]
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8+4]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm7, xmm2, xmm3
          vmovss  dword ptr [rbp+290h+var_2C8+4], xmm7
          vmovss  xmm3, dword ptr [rsi+rbx+194h]
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8+8]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm4, xmm2, xmm3
          vmovss  dword ptr [rbp+290h+var_2C8+8], xmm4
          vmulss  xmm1, xmm4, xmm9
          vmulss  xmm0, xmm5, xmm7
          vsubss  xmm6, xmm1, xmm0
          vmulss  xmm3, xmm5, xmm8
          vmulss  xmm2, xmm4, xmm10
          vsubss  xmm5, xmm3, xmm2
          vmulss  xmm4, xmm7, xmm10
          vmulss  xmm0, xmm8, xmm9
          vsubss  xmm0, xmm4, xmm0
          vmulss  xmm3, xmm5, xmm5
          vmulss  xmm2, xmm6, xmm6
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm0, xmm0, xmm0
          vaddss  xmm3, xmm4, xmm0
          vsqrtss xmm2, xmm3, xmm3
          vmulss  xmm0, xmm2, cs:?FD_CAM_FBW_ANGULAR_DISTANCE_MULTI@@3MA; val
          vmovaps xmm2, xmm11; max
          vmovaps xmm1, xmm14; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm7, xmm0
          vmulss  xmm8, xmm13, cs:?FD_CAM_VECTOR_LERP@@3MA; float FD_CAM_VECTOR_LERP
          vmovss  xmm5, dword ptr [rsi+rbx+198h]
          vmovss  xmm1, dword ptr [rbp+290h+var_2C8]
          vsubss  xmm2, xmm1, dword ptr [rbp+290h+var_2B8]
          vmulss  xmm3, xmm2, xmm0
          vaddss  xmm4, xmm3, dword ptr [rbp+290h+var_2B8]
          vsubss  xmm1, xmm4, xmm5
          vmulss  xmm2, xmm1, xmm8
          vaddss  xmm9, xmm2, xmm5
          vmovss  xmm4, dword ptr [rsi+rbx+19Ch]
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8+4]
          vsubss  xmm1, xmm0, dword ptr [rbp+290h+var_2B8+4]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm3, xmm2, dword ptr [rbp+290h+var_2B8+4]
          vsubss  xmm0, xmm3, xmm4
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm6, xmm1, xmm4
          vmovss  xmm5, dword ptr [rsi+rbx+1A0h]
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8+8]
          vsubss  xmm1, xmm0, dword ptr [rbp+290h+var_2B8+8]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm3, xmm2, dword ptr [rbp+290h+var_2B8+8]
          vsubss  xmm0, xmm3, xmm5
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm5, xmm1, xmm5
          vmulss  xmm2, xmm9, xmm9
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm3, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, cs:__real@80000000
          vblendvps xmm0, xmm4, xmm11, xmm0
          vdivss  xmm2, xmm11, xmm0
          vmulss  xmm0, xmm9, xmm2
          vmovss  dword ptr [rbp+290h+vec], xmm0
          vmulss  xmm1, xmm6, xmm2
          vmovss  dword ptr [rbp+290h+vec+4], xmm1
          vmulss  xmm0, xmm2, xmm5
          vmovss  dword ptr [rbp+290h+vec+8], xmm0
          vcomiss xmm4, cs:__real@3a83126f
        }
        if ( v37 )
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+290h+var_2B8]
            vmovsd  qword ptr [rbp+290h+vec], xmm0
          }
          vec.v[2] = v813.v[2];
        }
        vectoangles(&vec, &angles);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+var_2B8]
          vmovss  dword ptr [rsi+rbx+144h], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+var_2B8+4]
          vmovss  dword ptr [rsi+rbx+148h], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+var_2B8+8]
          vmovss  dword ptr [rsi+rbx+14Ch], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+var_2C8]
          vmovss  dword ptr [rsi+rbx+18Ch], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8+4]
          vmovss  dword ptr [rsi+rbx+190h], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+var_2C8+8]
          vmovss  dword ptr [rsi+rbx+194h], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+vec]
          vmovss  dword ptr [rsi+rbx+198h], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+vec+4]
          vmovss  dword ptr [rsi+rbx+19Ch], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+vec+8]
          vmovss  dword ptr [rsi+rbx+1A0h], xmm0
        }
        v268 = 1;
        break;
      case 1:
        __asm
        {
          vmulss  xmm6, xmm13, cs:?FD_CAM_VECTOR_LERP@@3MA; jumptable 00000001403336B4 case 1
          vmovss  xmm3, dword ptr [rsi+rbx+198h]
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm3
          vmovss  dword ptr [rbp+290h+var_228], xmm3
          vmovss  xmm4, dword ptr [rsi+rbx+19Ch]
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8+4]
          vsubss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm4
          vmovss  dword ptr [rbp+290h+var_228+4], xmm3
          vmovss  xmm5, dword ptr [rsi+rbx+1A0h]
          vmovss  xmm0, dword ptr [rbp+290h+var_2C8+8]
          vsubss  xmm1, xmm0, xmm5
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm5
          vmovss  dword ptr [rbp+290h+var_228+8], xmm3
        }
        vectoangles(&v822, &angles);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+var_228]
          vmovss  dword ptr [rsi+rbx+198h], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+var_228+4]
          vmovss  dword ptr [rsi+rbx+19Ch], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+var_228+8]
          vmovss  dword ptr [rsi+rbx+1A0h], xmm0
        }
        v268 = 1;
        break;
      case 2:
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+var_288]; jumptable 00000001403336B4 case 2
          vmovss  dword ptr [rbp+290h+v], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+var_288+4]
          vmovss  dword ptr [rbp+290h+v+4], xmm1
          vmovss  dword ptr [rbp+290h+v+8], xmm14
        }
        Vec3Normalize(&v);
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+290h+outOrigin]
          vmovss  dword ptr [rbx+50h], xmm6
          vmovss  xmm7, dword ptr [rbp+290h+outOrigin+4]
          vmovss  dword ptr [rbx+54h], xmm7
          vmovss  xmm8, dword ptr [rbp+290h+outOrigin+8]
          vmovss  dword ptr [rbx+58h], xmm8
          vmovaps xmm1, xmm11
        }
        ((void (__fastcall *)(BgVehiclePhysics *, __int64, int *))_R14->__vftable[1].Setup)(_R14, v294, v826);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+rbx+100h]
          vmulss  xmm1, xmm0, cs:__real@42480000
          vsubss  xmm4, xmm15, xmm1
          vmulss  xmm0, xmm12, dword ptr [rbp+290h+var_2C8]
          vaddss  xmm3, xmm0, xmm6
          vmulss  xmm2, xmm9, dword ptr [rbp+290h+var_248]
          vaddss  xmm3, xmm3, xmm2
          vmulss  xmm0, xmm4, dword ptr [rbp+290h+var_288]
          vaddss  xmm1, xmm3, xmm0
          vmovss  dword ptr [rbp+290h+inOrg], xmm1
          vmulss  xmm0, xmm12, dword ptr [rbp+290h+var_2C8+4]
          vaddss  xmm3, xmm0, xmm7
          vmulss  xmm2, xmm9, dword ptr [rbp+290h+var_248+4]
          vaddss  xmm3, xmm3, xmm2
          vmulss  xmm0, xmm4, dword ptr [rbp+290h+var_288+4]
          vaddss  xmm1, xmm3, xmm0
          vmovss  dword ptr [rbp+290h+inOrg+4], xmm1
          vmulss  xmm0, xmm12, dword ptr [rbp+290h+var_2C8+8]
          vaddss  xmm3, xmm0, xmm8
          vmulss  xmm2, xmm9, dword ptr [rbp+290h+var_248+8]
          vaddss  xmm3, xmm3, xmm2
          vmulss  xmm0, xmm4, dword ptr [rbp+290h+var_288+8]
          vaddss  xmm1, xmm3, xmm0
          vmovss  dword ptr [rbp+290h+inOrg+8], xmm1
          vmovss  xmm8, [rbp+290h+var_208]
          vandps  xmm7, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmulss  xmm1, xmm10, [rbp+290h+var_200]
          vsubss  xmm0, xmm8, xmm1; val
          vmovaps xmm2, xmm11; max
          vmovss  xmm9, cs:__real@bf800000
          vmovaps xmm1, xmm9; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_camera_look_rudder_factor, "fd_camera_look_rudder_factor");
        __asm
        {
          vsubss  xmm1, xmm11, xmm7
          vmulss  xmm3, xmm1, xmm6
          vmulss  xmm2, xmm7, xmm8
          vaddss  xmm3, xmm3, xmm2
          vmulss  xmm7, xmm0, xmm3
          vmovss  xmm6, dword ptr [rsi+rbx+0F4h]
          vmovaps xmm2, xmm14; max
          vmovaps xmm1, xmm9; min
          vmovss  xmm0, [rbp+290h+var_208]; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vaddss  xmm1, xmm0, [rbp+290h+var_200]
          vsubss  xmm2, xmm1, xmm6
          vsubss  xmm3, xmm2, dword ptr [rsi+rbx+100h]
          vmulss  xmm0, xmm3, xmm13
          vaddss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rsi+rbx+0F4h], xmm1
          vmulss  xmm1, xmm1, cs:?FD_CAMERA_STRAFE_DAMPING@@3MA; float FD_CAMERA_STRAFE_DAMPING
          vmulss  xmm0, xmm1, xmm13
          vaddss  xmm0, xmm0, dword ptr [rsi+rbx+100h]; value
          vmovss  dword ptr [rsi+rbx+100h], xmm0
          vmovaps xmm2, xmm13; dT
          vmovss  xmm1, cs:?FD_CAMERA_YAW_SPEED@@3MA; dragCoefficient
        }
        *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+100h], xmm0
          vmovss  xmm2, cs:?FD_CAMERA_OFFSET_CLAMP@@3MA; max
          vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
          vxorps  xmm1, xmm2, xmm12; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+100h], xmm0
          vmovss  xmm3, dword ptr [rsi+rbx+0ECh]
          vsubss  xmm0, xmm7, xmm3
          vsubss  xmm1, xmm0, dword ptr [rsi+rbx+0F8h]
          vmulss  xmm2, xmm1, xmm13
          vaddss  xmm3, xmm2, xmm3
          vmovss  dword ptr [rsi+rbx+0ECh], xmm3
          vmulss  xmm0, xmm3, cs:?FD_CAMERA_YAW_DAMPING_HELO@@3MA; float FD_CAMERA_YAW_DAMPING_HELO
          vmulss  xmm1, xmm0, xmm13
          vaddss  xmm0, xmm1, dword ptr [rsi+rbx+0F8h]; value
          vmovss  dword ptr [rsi+rbx+0F8h], xmm0
          vmovaps xmm2, xmm13; dT
          vmovss  xmm1, cs:?FD_CAMERA_YAW_SPEED@@3MA; dragCoefficient
        }
        *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+0F8h], xmm0
          vmovss  xmm2, cs:?FD_CAMERA_OFFSET_CLAMP@@3MA; max
          vxorps  xmm1, xmm2, xmm12; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+0F8h], xmm0
          vmovss  xmm4, dword ptr [rsi+rbx+1A0h]
          vmovss  xmm1, cs:?FD_CAMERA_LATERAL_POSITION_OFFSET_MAX@@3MA; float FD_CAMERA_LATERAL_POSITION_OFFSET_MAX
          vmulss  xmm0, xmm1, dword ptr [rsi+rbx+11Ch]
          vmulss  xmm2, xmm0, dword ptr [rbp+290h+v+8]
          vaddss  xmm3, xmm2, dword ptr [r14+1ACh]
          vsubss  xmm1, xmm3, xmm4
          vmulss  xmm0, xmm13, cs:?vehCam_chaseFD_PositionlerpSpeed@@3MA; float vehCam_chaseFD_PositionlerpSpeed
          vmulss  xmm1, xmm1, xmm0
          vaddss  xmm11, xmm1, xmm4
          vdivss  xmm10, xmm9, cs:?FD_CAMERA_UP_DOWN_OFFSET_VELOCITY@@3MA; float FD_CAMERA_UP_DOWN_OFFSET_VELOCITY
          vmovss  xmm0, dword ptr [rbp+290h+var_248+8]
          vmulss  xmm9, xmm0, dword ptr [rbx+14h]
          vmovss  xmm1, dword ptr [rbp+290h+var_248]
          vmulss  xmm8, xmm1, dword ptr [rbx+0Ch]
          vmovss  xmm0, dword ptr [rbp+290h+var_248+4]
          vmulss  xmm7, xmm0, dword ptr [rbx+10h]
          vmovss  xmm6, dword ptr [rsi+rbx+0F0h]
          vmovss  xmm1, cs:?FD_CAMERA_PITCH_DEADZONE@@3MA; deadzone
          vmovss  xmm0, [rbp+290h+var_204]; value
        }
        *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vsubss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, xmm13
          vaddss  xmm0, xmm2, xmm6; value
          vmovss  dword ptr [rsi+rbx+0F0h], xmm0
          vmovaps xmm2, xmm13; dT
          vmovss  xmm1, cs:?FD_CAMERA_PITCH_DAMPING@@3MA; dragCoefficient
        }
        *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+0F0h], xmm0
          vmulss  xmm0, xmm0, cs:?FD_CAMERA_PITCH_SPEED@@3MA; float FD_CAMERA_PITCH_SPEED
          vmulss  xmm2, xmm0, xmm13
          vaddss  xmm0, xmm2, dword ptr [rsi+rbx+0FCh]; val
          vmovss  dword ptr [rsi+rbx+0FCh], xmm0
          vmovss  xmm2, cs:?FD_CAMERA_OFFSET_CLAMP@@3MA; max
          vxorps  xmm1, xmm2, xmm12; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+0FCh], xmm0
          vmovss  dword ptr [rbp+290h+var_1F8], xmm14
          vmovss  dword ptr [rbp+290h+var_1F8+4], xmm14
          vmovss  dword ptr [rbp+290h+var_1F8+8], xmm14
          vmovss  xmm0, dword ptr [rbp+290h+var_288+4]
          vmulss  xmm3, xmm0, dword ptr [rbx+10h]
          vmovss  xmm1, dword ptr [rbp+290h+var_288]
          vmulss  xmm2, xmm1, dword ptr [rbx+0Ch]
          vaddss  xmm4, xmm3, xmm2
          vmovss  xmm0, dword ptr [rbp+290h+var_288+8]
          vmulss  xmm1, xmm0, dword ptr [rbx+14h]
          vaddss  xmm2, xmm4, xmm1
          vmulss  xmm3, xmm2, xmm11
          vdivss  xmm5, xmm3, cs:?FD_CAMERA_UP_DOWN_OFFSET_VELOCITY@@3MA; float FD_CAMERA_UP_DOWN_OFFSET_VELOCITY
          vaddss  xmm0, xmm8, xmm7
          vaddss  xmm1, xmm0, xmm9
          vmulss  xmm2, xmm1, xmm11
          vmulss  xmm3, xmm2, xmm10
          vaddss  xmm0, xmm3, dword ptr [rsi+rbx+0FCh]
          vmulss  xmm1, xmm0, cs:__real@41f00000
          vmovss  dword ptr [rbp+290h+var_1F8], xmm1
          vmulss  xmm3, xmm5, cs:?FD_CAM_COCKPIT_ANGLE_STRAFE_SIDEWAYS@@3MA; float FD_CAM_COCKPIT_ANGLE_STRAFE_SIDEWAYS
          vmovss  xmm0, cs:?FD_CAM_COCKPIT_ANGLE_STRAFE@@3MA; float FD_CAM_COCKPIT_ANGLE_STRAFE
          vmulss  xmm1, xmm0, dword ptr [rsi+rbx+0F8h]
          vaddss  xmm2, xmm3, xmm1
          vmovss  dword ptr [rbp+290h+var_1F8+4], xmm2
        }
        AnglesToQuat(&v827, &quat);
        RefdefView_SetOrg(&_R13->refdef.view, &inOrg);
        AxisToQuat(&outTagMat, &to);
        _RDI = &_RBX->m_fdCameraData[_RSI].prevViewQuat;
        __asm { vmulss  xmm2, xmm13, cs:?vehCam_chaseFD_SlerpSpeed_Unlock@@3MA; frac }
        QuatSlerp(_RDI, &to, *(float *)&_XMM2, &result);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+result]
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+result+4]
          vmovss  dword ptr [rdi+4], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+result+8]
          vmovss  dword ptr [rdi+8], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+result+0Ch]
          vmovss  dword ptr [rdi+0Ch], xmm1
        }
        QuatMultiply(&quat, &result, &v853);
        QuatToAxis(&v853, &_R13->refdef.view.axis);
        QuatToAngles(&v853, &_R13->refdefViewAngles);
        v268 = 1;
        break;
      case 3:
        __asm
        {
          vmulss  xmm7, xmm13, cs:?vehCam_chaseFD_PositionlerpSpeed@@3MA; jumptable 00000001403336B4 case 3
          vmovss  xmm0, dword ptr [rbp+290h+outOrigin]
          vsubss  xmm1, xmm0, dword ptr [rbx+50h]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm6, xmm2, dword ptr [rbx+50h]
          vmovss  dword ptr [rbp+290h+inOrg], xmm6
          vmovss  xmm0, dword ptr [rbp+290h+outOrigin+4]
          vsubss  xmm1, xmm0, dword ptr [rbx+54h]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm5, xmm2, dword ptr [rbx+54h]
          vmovss  dword ptr [rbp+290h+inOrg+4], xmm5
          vmovss  xmm0, dword ptr [rbp+290h+outOrigin+8]
          vsubss  xmm1, xmm0, dword ptr [rbx+58h]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm4, xmm2, dword ptr [rbx+58h]
          vmovss  dword ptr [rbp+290h+inOrg+8], xmm4
          vmovss  dword ptr [rbx+50h], xmm6
          vmovss  dword ptr [rbx+54h], xmm5
          vmovss  dword ptr [rbx+58h], xmm4
        }
        RefdefView_SetOrg(&_R13->refdef.view, &inOrg);
        RefdefView_GetOrg(&_R13->refdef.view, &outOrg);
        __asm
        {
          vmovss  xmm4, cs:__real@447a0000
          vmulss  xmm2, xmm4, dword ptr [rbp+290h+var_2C8]
          vmovss  xmm1, dword ptr [rbp+290h+outOrg]
          vsubss  xmm3, xmm1, xmm2
          vmovss  xmm5, cs:__real@43160000
          vmulss  xmm1, xmm5, dword ptr [rbp+290h+var_248]
          vaddss  xmm2, xmm3, xmm1
          vmovss  dword ptr [rbp+290h+outOrg], xmm2
          vmulss  xmm3, xmm4, dword ptr [rbp+290h+var_2C8+4]
          vmovss  xmm1, dword ptr [rbp+290h+outOrg+4]
          vsubss  xmm4, xmm1, xmm3
          vmulss  xmm2, xmm5, dword ptr [rbp+290h+var_248+4]
          vaddss  xmm1, xmm4, xmm2
          vmovss  dword ptr [rbp+290h+outOrg+4], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+inOrg+8]
          vaddss  xmm2, xmm0, cs:__real@43480000
          vmovss  dword ptr [rbp+290h+outOrg+8], xmm2
        }
        RefdefView_SetOrg(&_R13->refdef.view, &outOrg);
        AxisToQuat(&outTagMat, &to);
        _RDI = &_RBX->m_fdCameraData[_RSI].prevViewQuat;
        __asm { vmulss  xmm2, xmm13, cs:?vehCam_chaseFD_SlerpSpeed@@3MA; frac }
        QuatSlerp(_RDI, &to, *(float *)&_XMM2, &result);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+result]
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+result+4]
          vmovss  dword ptr [rdi+4], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+result+8]
          vmovss  dword ptr [rdi+8], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+result+0Ch]
          vmovss  dword ptr [rdi+0Ch], xmm1
        }
        QuatToAxis(&result, &_R13->refdef.view.axis);
        QuatToAngles(&result, &_R13->refdefViewAngles);
        v268 = 1;
        memset(&outOrg, 0, sizeof(outOrg));
        break;
      case 4:
        if ( !BG_IsSpectatingOrSpectator(&_R13->predictedPlayerState) && !_R14->m_playerControlled )
          Com_PrintWarning(14, "HELICOPTER_FBW_LEAD camera running on a non player-controlled client vehicle.\n");
        if ( !BG_IsSpectatingOrSpectator(&_R13->predictedPlayerState) && !((unsigned __int8 (__fastcall *)(BgVehiclePhysics *))_R14->__vftable[1].LoadFromMemFile)(_R14) )
          Com_PrintWarning(14, "HELICOPTER_FBW_LEAD camera running on a FBW disabled client vehicle.\n");
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+var_288]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+var_288+4]
          vmovss  dword ptr [rbp+290h+outOrigin+4], xmm1
          vmovss  dword ptr [rbp+290h+outOrigin+8], xmm14
        }
        Vec3Normalize(&outOrigin);
        if ( BG_IsSpectatingOrSpectator(&_R13->predictedPlayerState) )
        {
          _RAX = tmat43_t<vec3_t>::operator[](&_R14->m_transform, 0);
          __asm
          {
            vmovss  xmm8, dword ptr [rax]
            vmovss  xmm9, dword ptr [rax+4]
            vmovss  xmm10, dword ptr [rax+8]
            vmovss  [rbp+290h+var_218], xmm14
            vmovss  [rbp+290h+var_214], xmm14
            vmovss  [rbp+290h+var_210], xmm14
          }
        }
        else
        {
          __asm { vmovaps xmm1, xmm11 }
          ((void (__fastcall *)(BgVehiclePhysics *, bool (__fastcall *)(BgVehiclePhysics *, BGVehicles *, Physics_WorldId, unsigned int, int, unsigned int, const VehicleDef *), int *))_R14->__vftable[1].Setup)(_R14, _R14->__vftable[1].Setup, &v823);
          if ( LOBYTE(_R14[1].m_manualIntegratedPos.z) )
          {
            __asm
            {
              vmovss  xmm8, dword ptr [r14+4ECh]
              vmovss  xmm9, dword ptr [r14+4F0h]
              vmovss  xmm10, dword ptr [r14+4F4h]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm8, dword ptr [r14+344h]
              vmovss  xmm9, dword ptr [r14+348h]
              vmovss  xmm10, dword ptr [r14+34Ch]
            }
          }
          __asm
          {
            vmulss  xmm1, xmm8, xmm8
            vmulss  xmm0, xmm9, xmm9
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm10, xmm10
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm0, xmm2, xmm2
            vcomiss xmm0, cs:__real@3a83126f
          }
        }
        __asm
        {
          vmovss  xmm4, dword ptr [rsi+rbx+12Ch]
          vmovss  xmm0, [rbp+290h+var_210]
          vsubss  xmm1, xmm0, dword ptr [rsi+rbx+11Ch]
          vsubss  xmm2, xmm1, xmm4
          vmulss  xmm3, xmm2, xmm13
          vaddss  xmm0, xmm4, xmm3
          vmovss  dword ptr [rsi+rbx+12Ch], xmm0
          vmulss  xmm0, xmm0, cs:?FD_CAMERA_OFFSET_SPEED@@3MA; float FD_CAMERA_OFFSET_SPEED
          vmulss  xmm1, xmm0, xmm13
          vaddss  xmm0, xmm1, dword ptr [rsi+rbx+11Ch]; value
          vmovss  dword ptr [rsi+rbx+11Ch], xmm0
          vmovaps xmm2, xmm13; dT
          vmovss  xmm1, cs:?FD_CAMERA_OFFSET_DAMPING@@3MA; dragCoefficient
        }
        *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+11Ch], xmm0
          vmovss  xmm2, cs:?FD_CAMERA_OFFSET_CLAMP@@3MA; max
          vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+11Ch], xmm0
          vmulss  xmm2, xmm0, cs:?FD_CAMERA_LATERAL_POSITION_OFFSET_MAX@@3MA; float FD_CAMERA_LATERAL_POSITION_OFFSET_MAX
          vmulss  xmm0, xmm2, dword ptr [rbp+290h+outOrigin]
          vaddss  xmm7, xmm0, dword ptr [r14+1A4h]
          vmovss  dword ptr [rsp+390h+pose], xmm7
          vmulss  xmm1, xmm2, dword ptr [rbp+290h+outOrigin+4]
          vaddss  xmm0, xmm1, dword ptr [r14+1A8h]
          vmovss  dword ptr [rsp+390h+var_330], xmm0
          vmulss  xmm0, xmm2, dword ptr [rbp+290h+outOrigin+8]
          vaddss  xmm6, xmm0, dword ptr [r14+1ACh]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm6
        }
        _RDI = &_RBX->m_fdCameraData[_RSI].prevFinalVector;
        _RAX = vec3_t::operator[](_RDI, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  [rsp+390h+var_350], xmm0
        }
        if ( (v797 & 0x7F800000) == 2139095040 )
          goto LABEL_214;
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFinalVector, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  [rsp+390h+var_350], xmm0
        }
        if ( (v798 & 0x7F800000) == 2139095040 )
          goto LABEL_214;
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFinalVector, 2);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  [rsp+390h+var_350], xmm0
        }
        if ( (v799 & 0x7F800000) == 2139095040 )
        {
LABEL_214:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 728, ASSERT_TYPE_SANITY, "( !IS_NAN( ( fdLocalCameraData->prevFinalVector )[0] ) && !IS_NAN( ( fdLocalCameraData->prevFinalVector )[1] ) && !IS_NAN( ( fdLocalCameraData->prevFinalVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( fdLocalCameraData->prevFinalVector )[0] ) && !IS_NAN( ( fdLocalCameraData->prevFinalVector )[1] ) && !IS_NAN( ( fdLocalCameraData->prevFinalVector )[2] )") )
            __debugbreak();
        }
        __asm { vmovss  xmm5, dword ptr [rsp+390h+var_330] }
        if ( _RBX->m_fdCameraData[_RSI].resetParams )
        {
          __asm
          {
            vmovss  dword ptr [rdi], xmm7
            vmovss  dword ptr [rdi+4], xmm5
            vmovss  dword ptr [rdi+8], xmm6
            vmovaps xmm7, xmm6
          }
        }
        else
        {
          __asm { vmovss  xmm7, dword ptr [rdi+8] }
        }
        __asm
        {
          vmulss  xmm4, xmm13, cs:?vehCam_chaseFD_PositionlerpSpeed@@3MA; float vehCam_chaseFD_PositionlerpSpeed
          vmovss  xmm0, dword ptr [rsp+390h+pose]
          vsubss  xmm0, xmm0, dword ptr [rdi]
          vmulss  xmm1, xmm0, xmm4
          vaddss  xmm6, xmm1, dword ptr [rdi]
          vsubss  xmm0, xmm5, dword ptr [rdi+4]
          vmulss  xmm1, xmm0, xmm4
          vaddss  xmm5, xmm1, dword ptr [rdi+4]
          vmovss  xmm2, dword ptr [rbp+290h+outOrigin]
          vsubss  xmm2, xmm2, xmm7
          vmulss  xmm0, xmm2, xmm4
          vaddss  xmm4, xmm0, xmm7
          vmovss  dword ptr [rdi], xmm6
          vmovss  dword ptr [rdi+4], xmm5
          vmovss  dword ptr [rdi+8], xmm4
          vmulss  xmm3, xmm13, cs:?vehCam_chaseFD_LookAheadRate@@3MA; float vehCam_chaseFD_LookAheadRate
          vmulss  xmm0, xmm3, xmm6
          vaddss  xmm1, xmm0, dword ptr [rbp+290h+inOrg]
          vmovss  dword ptr [rbp+290h+start], xmm1
          vmulss  xmm2, xmm3, xmm5
          vaddss  xmm0, xmm2, dword ptr [rbp+290h+inOrg+4]
          vmovss  dword ptr [rbp+290h+start+4], xmm0
          vmulss  xmm1, xmm4, xmm3
          vaddss  xmm2, xmm1, dword ptr [rbp+290h+inOrg+8]
          vmovss  dword ptr [rbp+290h+start+8], xmm2
        }
        if ( _RBX->m_fdCameraData[_RSI].resetParams )
        {
          _RBX->m_fdCameraData[_RSI].avoidanceDistance = 0.5;
          __asm
          {
            vmovss  dword ptr [rsi+rbx+144h], xmm8
            vmovss  dword ptr [rsi+rbx+148h], xmm9
            vmovss  dword ptr [rsi+rbx+14Ch], xmm10
            vmovss  xmm0, dword ptr [rbp+290h+start]
            vmovss  dword ptr [rbx+50h], xmm0
            vmovss  xmm1, dword ptr [rbp+290h+start+4]
            vmovss  dword ptr [rbx+54h], xmm1
            vmovss  xmm0, dword ptr [rbp+290h+start+8]
            vmovss  dword ptr [rbx+58h], xmm0
          }
        }
        __asm { vmulss  xmm7, xmm13, cs:?FD_CAM_HELI_FBW_VECTOR_LERP@@3MA; float FD_CAM_HELI_FBW_VECTOR_LERP }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 0);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 0);
        __asm
        {
          vsubss  xmm0, xmm8, xmm6
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm8, xmm1, dword ptr [rax]
          vmovss  dword ptr [rsp+390h+pose], xmm8
        }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 1);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 1);
        __asm
        {
          vsubss  xmm0, xmm9, xmm6
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm9, xmm1, dword ptr [rax]
          vmovss  [rsp+390h+var_350], xmm9
        }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 2);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 2);
        __asm
        {
          vsubss  xmm0, xmm10, xmm6
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm0, xmm1, dword ptr [rax]
          vmovss  dword ptr [rsp+390h+var_330], xmm0
          vmulss  xmm7, xmm13, cs:?vehCam_chaseFD_PositionlerpSpeed@@3MA; float vehCam_chaseFD_PositionlerpSpeed
        }
        vec3_t::operator[](&_RBX->m_WorldViewPosition, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+start]
          vsubss  xmm6, xmm0, dword ptr [rax]
        }
        vec3_t::operator[](&_RBX->m_WorldViewPosition, 0);
        __asm
        {
          vmulss  xmm0, xmm6, xmm7
          vaddss  xmm1, xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+start], xmm1
        }
        vec3_t::operator[](&_RBX->m_WorldViewPosition, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+start+4]
          vsubss  xmm6, xmm0, dword ptr [rax]
        }
        vec3_t::operator[](&_RBX->m_WorldViewPosition, 1);
        __asm
        {
          vmulss  xmm0, xmm6, xmm7
          vaddss  xmm1, xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+start+4], xmm1
        }
        vec3_t::operator[](&_RBX->m_WorldViewPosition, 2);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+start+8]
          vsubss  xmm6, xmm0, dword ptr [rax]
        }
        vec3_t::operator[](&_RBX->m_WorldViewPosition, 2);
        __asm
        {
          vmulss  xmm0, xmm6, xmm7
          vaddss  xmm1, xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+start+8], xmm1
          vmovss  xmm6, dword ptr [rbp+290h+start]
        }
        _RAX = vec3_t::operator[](&_RBX->m_WorldViewPosition, 0);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm6, dword ptr [rbp+290h+start+4]
        }
        _RAX = vec3_t::operator[](&_RBX->m_WorldViewPosition, 1);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm6, dword ptr [rbp+290h+start+8]
        }
        _RAX = vec3_t::operator[](&_RBX->m_WorldViewPosition, 2);
        __asm { vmovss  dword ptr [rax], xmm6 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_camera_look_rudder_factor, "fd_camera_look_rudder_factor");
        __asm
        {
          vmulss  xmm1, xmm0, [rbp+290h+var_218]
          vmovss  xmm3, dword ptr [rsi+rbx+0ECh]
          vsubss  xmm0, xmm1, xmm3
          vsubss  xmm1, xmm0, dword ptr [rsi+rbx+0F8h]
          vmulss  xmm2, xmm1, xmm13
          vaddss  xmm3, xmm2, xmm3
          vmovss  dword ptr [rsi+rbx+0ECh], xmm3
          vmulss  xmm1, xmm3, cs:?FD_CAMERA_YAW_DAMPING@@3MA; float FD_CAMERA_YAW_DAMPING
          vmulss  xmm2, xmm1, xmm13
          vaddss  xmm0, xmm2, dword ptr [rsi+rbx+0F8h]; value
          vmovss  dword ptr [rsi+rbx+0F8h], xmm0
          vmovaps xmm2, xmm13; dT
          vmovss  xmm1, cs:?FD_CAMERA_YAW_SPEED@@3MA; dragCoefficient
        }
        *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+0F8h], xmm0
          vmovss  xmm2, cs:?FD_CAMERA_OFFSET_CLAMP@@3MA; max
          vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
          vxorps  xmm1, xmm2, xmm10; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+0F8h], xmm0
          vmovss  xmm1, cs:?FD_CAMERA_PITCH_DEADZONE@@3MA; deadzone
          vmovss  xmm0, [rbp+290h+var_214]; value
        }
        *(double *)&_XMM0 = FlightDynamics::ComputeDeadzone(*(float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vxorps  xmm1, xmm0, xmm10
          vmovss  xmm2, dword ptr [rsi+rbx+0F0h]
          vsubss  xmm0, xmm1, xmm2
          vmulss  xmm1, xmm0, xmm13
          vaddss  xmm0, xmm2, xmm1; value
          vmovss  dword ptr [rsi+rbx+0F0h], xmm0
          vmovaps xmm2, xmm13; dT
          vmovss  xmm1, cs:?FD_CAMERA_PITCH_DAMPING@@3MA; dragCoefficient
        }
        *(double *)&_XMM0 = FlightDynamics::CalculateDrag(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rsi+rbx+0F0h], xmm0
          vmulss  xmm0, xmm0, cs:?FD_CAMERA_PITCH_SPEED@@3MA; float FD_CAMERA_PITCH_SPEED
          vmulss  xmm2, xmm0, xmm13
          vaddss  xmm0, xmm2, dword ptr [rsi+rbx+0FCh]; val
          vmovss  dword ptr [rsi+rbx+0FCh], xmm0
          vmovss  xmm2, cs:?FD_CAMERA_OFFSET_CLAMP_VERTICAL_UP@@3MA; max
          vmovss  xmm1, cs:?FD_CAMERA_OFFSET_CLAMP_VERTICAL_DOWN@@3MA; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  dword ptr [rsi+rbx+0FCh], xmm0 }
        if ( _RBX->m_fdCameraData[_RSI].resetParams )
        {
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 0);
          __asm { vmovss  dword ptr [rax], xmm8 }
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 1);
          __asm { vmovss  dword ptr [rax], xmm9 }
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 2);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+390h+var_330]
            vmovss  dword ptr [rax], xmm0
          }
        }
        __asm { vmulss  xmm8, xmm13, cs:?vehCam_chaseFD_PositionlerpSpeed@@3MA; float vehCam_chaseFD_PositionlerpSpeed }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 0);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+390h+pose]
          vsubss  xmm0, xmm0, xmm6
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm9, xmm1, dword ptr [rax]
        }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 1);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 1);
        __asm
        {
          vmovss  xmm0, [rsp+390h+var_350]
          vsubss  xmm0, xmm0, xmm6
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm7, xmm1, dword ptr [rax]
        }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 2);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 2);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+390h+var_330]
          vsubss  xmm0, xmm0, xmm6
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm6, xmm1, dword ptr [rax]
        }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 0);
        __asm { vmovss  dword ptr [rax], xmm9 }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 1);
        __asm { vmovss  dword ptr [rax], xmm7 }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].additionalLocalOffset, 2);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  dword ptr [rbp+290h+var_278], xmm9
          vmovss  dword ptr [rbp+290h+var_278+4], xmm7
          vmovss  dword ptr [rbp+290h+var_278+8], xmm6
          vmovss  xmm0, dword ptr [rsi+rbx+0FCh]
          vxorps  xmm6, xmm0, xmm10
        }
        _RAX = vec3_t::operator[](&v817, 2);
        __asm { vmovss  dword ptr [rax], xmm6 }
        Vec3Normalize(&v817);
        vectoangles(&v817, &v832);
        v640 = *(_QWORD *)v.v;
        AnglesToAxis(&v832, (tmat33_t<vec3_t> *)(*(_QWORD *)v.v + 20i64));
        AxisToQuat((const tmat33_t<vec3_t> *)(v640 + 20), &v834);
        if ( _RBX->m_fdCameraData[_RSI].resetParams )
        {
          __asm { vmovss  xmm6, dword ptr [rbp+290h+var_190] }
          _RAX = vec4_t::operator[](&_RBX->m_fdCameraData[_RSI].prevViewQuat, 0);
          __asm
          {
            vmovss  dword ptr [rax], xmm6
            vmovss  xmm6, dword ptr [rbp+290h+var_190+4]
          }
          _RAX = vec4_t::operator[](&_RBX->m_fdCameraData[_RSI].prevViewQuat, 1);
          __asm
          {
            vmovss  dword ptr [rax], xmm6
            vmovss  xmm6, dword ptr [rbp+290h+var_190+8]
          }
          _RAX = vec4_t::operator[](&_RBX->m_fdCameraData[_RSI].prevViewQuat, 2);
          __asm
          {
            vmovss  dword ptr [rax], xmm6
            vmovss  xmm6, dword ptr [rbp+290h+var_190+0Ch]
          }
          _RAX = vec4_t::operator[](&_RBX->m_fdCameraData[_RSI].prevViewQuat, 3);
          __asm { vmovss  dword ptr [rax], xmm6 }
        }
        __asm { vmulss  xmm2, xmm13, cs:?vehCam_chaseFD_SlerpSpeed@@3MA; frac }
        QuatSlerp(&_RBX->m_fdCameraData[_RSI].prevViewQuat, &v834, *(float *)&_XMM2, &result);
        __asm { vmovss  xmm6, dword ptr [rbp+290h+result] }
        _RAX = vec4_t::operator[](&_RBX->m_fdCameraData[_RSI].prevViewQuat, 0);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm6, dword ptr [rbp+290h+result+4]
        }
        _RAX = vec4_t::operator[](&_RBX->m_fdCameraData[_RSI].prevViewQuat, 1);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm6, dword ptr [rbp+290h+result+8]
        }
        _RAX = vec4_t::operator[](&_RBX->m_fdCameraData[_RSI].prevViewQuat, 2);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm6, dword ptr [rbp+290h+result+0Ch]
        }
        _RAX = vec4_t::operator[](&_RBX->m_fdCameraData[_RSI].prevViewQuat, 3);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm6, dword ptr [rbp+290h+var_1B8]
        }
        _RAX = vec3_t::operator[](&_R13->refdefViewAngles, 0);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm6, dword ptr [rbp+290h+var_1B8+4]
        }
        _RAX = vec3_t::operator[](&_R13->refdefViewAngles, 1);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm6, dword ptr [rbp+290h+var_1B8+8]
        }
        _RAX = vec3_t::operator[](&_R13->refdefViewAngles, 2);
        __asm { vmovss  dword ptr [rax], xmm6 }
        v664 = *(RefdefView **)v.v;
        QuatToAxis(&result, (tmat33_t<vec3_t> *)(*(_QWORD *)v.v + 20i64));
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+var_278]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
          goto LABEL_215;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+var_278+4]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
          goto LABEL_215;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+var_278+8]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
        {
LABEL_215:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 796, ASSERT_TYPE_SANITY, "( !IS_NAN( ( directionToObject )[0] ) && !IS_NAN( ( directionToObject )[1] ) && !IS_NAN( ( directionToObject )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( directionToObject )[0] ) && !IS_NAN( ( directionToObject )[1] ) && !IS_NAN( ( directionToObject )[2] )") )
            __debugbreak();
        }
        RefdefView_GetOrg(v664, &v801);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+start]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
          goto LABEL_216;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+start+4]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
          goto LABEL_216;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+start+8]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
        {
LABEL_216:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 801, ASSERT_TYPE_SANITY, "( !IS_NAN( ( planePlusVelocity )[0] ) && !IS_NAN( ( planePlusVelocity )[1] ) && !IS_NAN( ( planePlusVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( planePlusVelocity )[0] ) && !IS_NAN( ( planePlusVelocity )[1] ) && !IS_NAN( ( planePlusVelocity )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm1, xmm12, dword ptr [rbp+290h+var_278]
          vaddss  xmm3, xmm1, dword ptr [rbp+290h+start]
          vmulss  xmm0, xmm15, dword ptr [rbp+290h+var_288]
          vaddss  xmm1, xmm3, xmm0
          vmovss  dword ptr [rsp+390h+var_348], xmm1
          vmulss  xmm0, xmm12, dword ptr [rbp+290h+var_278+4]
          vaddss  xmm3, xmm0, dword ptr [rbp+290h+start+4]
          vmulss  xmm2, xmm15, dword ptr [rbp+290h+var_288+4]
          vaddss  xmm0, xmm3, xmm2
          vmovss  dword ptr [rsp+390h+var_348+4], xmm0
          vmulss  xmm2, xmm12, dword ptr [rbp+290h+var_278+8]
          vaddss  xmm0, xmm2, dword ptr [rbp+290h+start+8]
          vaddss  xmm3, xmm0, dword ptr [rsp+390h+var_338]
          vmovss  dword ptr [rsp+390h+var_348+8], xmm3
        }
        _RAX = vec3_t::operator[](&v801, 0);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevWorldPositionOffset, 0);
        __asm
        {
          vsubss  xmm0, xmm6, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+var_268], xmm0
        }
        _RAX = vec3_t::operator[](&v801, 1);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevWorldPositionOffset, 1);
        __asm
        {
          vsubss  xmm0, xmm6, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+var_268+4], xmm0
        }
        _RAX = vec3_t::operator[](&v801, 2);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevWorldPositionOffset, 2);
        __asm
        {
          vsubss  xmm0, xmm6, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+var_268+8], xmm0
        }
        _RAX = vec3_t::operator[](&v801, 0);
        __asm { vmovss  xmm6, dword ptr [rax] }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevWorldPositionOffset, 0);
        __asm { vmovss  dword ptr [rax], xmm6 }
        _RAX = vec3_t::operator[](&v801, 1);
        __asm { vmovss  xmm6, dword ptr [rax] }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevWorldPositionOffset, 1);
        __asm { vmovss  dword ptr [rax], xmm6 }
        _RAX = vec3_t::operator[](&v801, 2);
        __asm { vmovss  xmm6, dword ptr [rax] }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevWorldPositionOffset, 2);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmovss  xmm0, dword ptr [rbp+290h+var_268+4]
          vmulss  xmm2, xmm0, xmm0
          vmovss  xmm6, dword ptr [rbp+290h+var_268]
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm0, dword ptr [rbp+290h+var_268+8]
          vmulss  xmm2, xmm0, xmm0
          vaddss  xmm1, xmm3, xmm2
          vsqrtss xmm3, xmm1, xmm1
          vmulss  xmm0, xmm3, cs:?FD_CAMERA_AVOIDANCE_DISTANCE@@3MA; float FD_CAMERA_AVOIDANCE_DISTANCE
          vcomiss xmm0, cs:__real@3a83126f
        }
        if ( !(v37 | v38) )
        {
          __asm { vmaxss  xmm7, xmm0, cs:?FD_CAMERA_AVOIDANCE_LOOKAHEAD_DISTANCE_MIN@@3MA; float FD_CAMERA_AVOIDANCE_LOOKAHEAD_DISTANCE_MIN }
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 0);
          __asm
          {
            vmovss  dword ptr [rax], xmm6
            vmovss  xmm6, dword ptr [rbp+290h+var_268+4]
          }
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 1);
          __asm
          {
            vmovss  dword ptr [rax], xmm6
            vmovss  xmm6, dword ptr [rbp+290h+var_268+8]
          }
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 2);
          __asm { vmovss  dword ptr [rax], xmm6 }
          Vec3Normalize(&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection);
          vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 0);
          __asm { vmulss  xmm6, xmm7, dword ptr [rax] }
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 0);
          __asm { vmovss  dword ptr [rax], xmm6 }
          vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 1);
          __asm { vmulss  xmm6, xmm7, dword ptr [rax] }
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 1);
          __asm { vmovss  dword ptr [rax], xmm6 }
          vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 2);
          __asm { vmulss  xmm6, xmm7, dword ptr [rax] }
          _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 2);
          __asm { vmovss  dword ptr [rax], xmm6 }
        }
        _RAX = vec3_t::operator[](&v801, 0);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 0);
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+var_268], xmm0
        }
        _RAX = vec3_t::operator[](&v801, 1);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 1);
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+var_268+4], xmm0
        }
        _RAX = vec3_t::operator[](&v801, 2);
        __asm { vmovss  xmm6, dword ptr [rax] }
        vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].avoidanceLastNonZeroDirection, 2);
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+var_268+8], xmm0
          vmovss  [rsp+390h+var_320], xmm11
        }
        ignoreEntities = SLOWORD(v166[1].prevOrigin.prevOrigin.xyz.z);
        BG_Camera_VehicleCameraShapeCast(_R14->m_worldId, &ignoreEntities, 1, 2705, &start, &v818, &v805);
        __asm
        {
          vmovss  xmm1, cs:?FD_CAMERA_AVOIDANCE_RESPONSE_EXPO@@3MA; Y
          vmovss  xmm0, [rsp+390h+var_320]; X
          vcomiss xmm0, xmm14
        }
        if ( v37 )
        {
          __asm { vxorps  xmm0, xmm0, xmm10; X }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vxorps  xmm5, xmm0, xmm10 }
        }
        else
        {
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vmovaps xmm5, xmm0 }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+rbx+178h]
          vcomiss xmm5, xmm0
        }
        if ( v734 )
        {
          __asm
          {
            vmulss  xmm3, xmm13, cs:?FD_CAMERA_AVOIDANCE_RESPONSE_IN@@3MA; float FD_CAMERA_AVOIDANCE_RESPONSE_IN
            vsubss  xmm1, xmm11, xmm3
            vmulss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm3, xmm5
            vaddss  xmm2, xmm2, xmm0
            vmovss  dword ptr [rsi+rbx+178h], xmm2
          }
          _RBX->m_fdCameraData[_RSI].avoidanceSpeed = 0.0;
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm11, xmm13
            vmulss  xmm2, xmm0, dword ptr [rsi+rbx+17Ch]
            vmulss  xmm1, xmm13, cs:?FD_CAMERA_AVOIDANCE_RESPONSE_OUT@@3MA; float FD_CAMERA_AVOIDANCE_RESPONSE_OUT
            vaddss  xmm3, xmm2, xmm1
            vmovss  dword ptr [rsi+rbx+17Ch], xmm3
            vmulss  xmm4, xmm3, xmm13
            vsubss  xmm0, xmm11, xmm4
            vmulss  xmm2, xmm0, dword ptr [rsi+rbx+178h]
            vmulss  xmm1, xmm4, xmm5
            vaddss  xmm2, xmm2, xmm1
            vmovss  dword ptr [rsi+rbx+178h], xmm2
          }
        }
        _RAX = vec3_t::operator[](&v801, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vsubss  xmm6, xmm0, dword ptr [rbp+290h+start]
        }
        _RAX = vec3_t::operator[](&v801, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vsubss  xmm7, xmm0, dword ptr [rbp+290h+start+4]
        }
        _RAX = vec3_t::operator[](&v801, 2);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vsubss  xmm9, xmm0, dword ptr [rbp+290h+start+8]
          vmovss  xmm8, dword ptr [rsi+rbx+178h]
          vmulss  xmm1, xmm8, xmm6
          vaddss  xmm6, xmm1, dword ptr [rbp+290h+start]
        }
        _RAX = vec3_t::operator[](&v801, 0);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmulss  xmm0, xmm8, xmm7
          vaddss  xmm6, xmm0, dword ptr [rbp+290h+start+4]
        }
        _RAX = vec3_t::operator[](&v801, 1);
        __asm
        {
          vmovss  dword ptr [rax], xmm6
          vmulss  xmm0, xmm8, xmm9
          vaddss  xmm6, xmm0, dword ptr [rbp+290h+start+8]
        }
        _RAX = vec3_t::operator[](&v801, 2);
        __asm { vmovss  dword ptr [rax], xmm6 }
        _RAX = vec3_t::operator[](&v801, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
          goto LABEL_217;
        _RAX = vec3_t::operator[](&v801, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
          goto LABEL_217;
        _RAX = SecureVec3::operator[]((SecureVec3 *)&v801, 2);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+290h+outOrigin], xmm0
        }
        if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 )
        {
LABEL_217:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 848, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempRefOrg )[0] ) && !IS_NAN( ( tempRefOrg )[1] ) && !IS_NAN( ( tempRefOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempRefOrg )[0] ) && !IS_NAN( ( tempRefOrg )[1] ) && !IS_NAN( ( tempRefOrg )[2] )") )
            __debugbreak();
        }
        RefdefView_SetOrg(v664, &v801);
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+390h+pose]
          vmovss  dword ptr [rax], xmm0
        }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 1);
        __asm
        {
          vmovss  xmm0, [rsp+390h+var_350]
          vmovss  dword ptr [rax], xmm0
        }
        _RAX = vec3_t::operator[](&_RBX->m_fdCameraData[_RSI].prevFBWvect, 2);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+390h+var_330]
          vmovss  dword ptr [rax], xmm0
        }
        _RBX->m_fdCameraData[_RSI].resetParams = 0;
        v268 = 1;
        memset(&v801, 0, sizeof(v801));
        break;
      case 5:
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+290h+outOrigin]; jumptable 00000001403336B4 case 5
          vsubss  xmm3, xmm6, dword ptr [rbx+50h]
          vmovss  xmm7, dword ptr [rbp+290h+outOrigin+4]
          vsubss  xmm0, xmm7, dword ptr [rbx+54h]
          vmovss  xmm8, dword ptr [rbp+290h+outOrigin+8]
          vsubss  xmm4, xmm8, dword ptr [rbx+58h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm3, xmm1, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm3, xmm3, xmm1
          vsqrtss xmm0, xmm3, xmm3
          vmulss  xmm4, xmm0, cs:?vehCam_chaseFD_RcPositionlerpSpeed@@3MA; float vehCam_chaseFD_RcPositionlerpSpeed
          vmulss  xmm1, xmm13, xmm4
          vmulss  xmm0, xmm1, cs:?vehCam_chaseFD_PositionlerpSpeed@@3MA; val
          vmovaps xmm2, xmm11; max
          vmovaps xmm1, xmm14; min
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vsubss  xmm1, xmm6, dword ptr [rbx+50h]
          vmulss  xmm2, xmm1, xmm0
          vaddss  xmm9, xmm2, dword ptr [rbx+50h]
          vsubss  xmm1, xmm7, dword ptr [rbx+54h]
          vmulss  xmm2, xmm1, xmm0
          vaddss  xmm7, xmm2, dword ptr [rbx+54h]
          vsubss  xmm1, xmm8, dword ptr [rbx+58h]
          vmulss  xmm0, xmm1, xmm0
          vaddss  xmm6, xmm0, dword ptr [rbx+58h]
          vmovss  dword ptr [rbx+50h], xmm9
          vmovss  dword ptr [rbx+54h], xmm7
          vmovss  dword ptr [rbx+58h], xmm6
        }
        RefdefView_GetOrg(&_R13->refdef.view, &v806);
        __asm
        {
          vmovss  xmm0, cs:?vehCam_chaseFD_RC_posX@@3MA; float vehCam_chaseFD_RC_posX
          vmovss  dword ptr [rsp+390h+var_318], xmm0
          vmovss  xmm1, cs:?vehCam_chaseFD_RC_posY@@3MA; float vehCam_chaseFD_RC_posY
          vmovss  dword ptr [rsp+390h+var_318+4], xmm1
          vmovss  xmm0, cs:?vehCam_chaseFD_RC_posZ@@3MA; float vehCam_chaseFD_RC_posZ
          vmovss  dword ptr [rbp+290h+var_318+8], xmm0
        }
        RefdefView_SetOrg(&_R13->refdef.view, &v806);
        __asm
        {
          vsubss  xmm0, xmm9, dword ptr [rsp+390h+var_318]
          vmovss  dword ptr [rbp+290h+var_1D8], xmm0
          vsubss  xmm1, xmm7, dword ptr [rsp+390h+var_318+4]
          vmovss  dword ptr [rbp+290h+var_1D8+4], xmm1
          vsubss  xmm0, xmm6, dword ptr [rbp+290h+var_318+8]
          vmovss  dword ptr [rbp+290h+var_1D8+8], xmm0
        }
        Vec3Normalize(&v830);
        vectoangles(&v830, &v831);
        AnglesToAxis(&v831, &_R13->refdef.view.axis);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+290h+var_1C8]
          vmovss  dword ptr [r13+178C0h], xmm0
          vmovss  xmm1, dword ptr [rbp+290h+var_1C8+4]
          vmovss  dword ptr [r13+178C4h], xmm1
          vmovss  xmm0, dword ptr [rbp+290h+var_1C8+8]
          vmovss  dword ptr [r13+178C8h], xmm0
        }
        v268 = 1;
        memset(&v806, 0, sizeof(v806));
        break;
    }
  }
  else
  {
    v268 = 0;
  }
  _R11 = &v856;
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
  return v268;
}

/*
==============
FD_AllowAceModeDistanceChanges
==============
*/
bool FD_AllowAceModeDistanceChanges()
{
  return 0;
}

/*
==============
FD_ClampWithinRange
==============
*/

double __fastcall FD_ClampWithinRange(float thisValue, double withinThisValue)
{
  __asm
  {
    vmovaps xmm2, xmm1; max
    vxorps  xmm1, xmm1, cs:__xmm@80000000800000008000000080000000; min
  }
  return I_fclamp(thisValue, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
FD_ComputeExpo
==============
*/

double __fastcall FD_ComputeExpo(double value, float expo, double _XMM2_8)
{
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm0, xmm2
  }
  *(float *)&value = powf_0(*(float *)&value, expo);
  return value;
}

/*
==============
FD_ControlInputStrength
==============
*/
float FD_ControlInputStrength(float *inputArray)
{
  char v1; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm4, dword ptr [rcx+0Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm5, xmm3, xmm0
    vcomiss xmm5, cs:__real@3a83126f
  }
  if ( v1 )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  else
    __asm { vsqrtss xmm0, xmm5, xmm5 }
  return *(float *)&_XMM0;
}

/*
==============
FD_DebugLine
==============
*/
void FD_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  CG_DebugLine(start, end, color, 0, 0);
}

/*
==============
FD_GetAceModeDistancesFromDvars
==============
*/
void FD_GetAceModeDistancesFromDvars(float *min, float *optimal, float *max)
{
  if ( !min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 272, ASSERT_TYPE_ASSERT, "(min)", (const char *)&queryFormat, "min") )
    __debugbreak();
  if ( !max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 273, ASSERT_TYPE_ASSERT, "(max)", (const char *)&queryFormat, "max") )
    __debugbreak();
  if ( !optimal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 274, ASSERT_TYPE_ASSERT, "(optimal)", (const char *)&queryFormat, "optimal") )
    __debugbreak();
}

/*
==============
FD_GetCollisionStatus
==============
*/
char FD_GetCollisionStatus()
{
  return 1;
}

/*
==============
FD_GetDrawAvoidanceTracesAsDoppler
==============
*/
bool FD_GetDrawAvoidanceTracesAsDoppler()
{
  return 0;
}

/*
==============
FD_GetDrawAvoidanceTracesDvar
==============
*/
bool FD_GetDrawAvoidanceTracesDvar()
{
  return 0;
}

/*
==============
FD_GetHorizontalSens
==============
*/
float FD_GetHorizontalSens()
{
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
FD_GetRandomFloat
==============
*/

float __fastcall FD_GetRandomFloat(double min, double max, unsigned int additionalSeed)
{
  double v9; 
  unsigned int pHoldrand; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  pHoldrand = additionalSeed + level.time;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm6, xmm1
    vmovaps xmm7, xmm0
  }
  BG_srand(&pHoldrand);
  __asm
  {
    vmovaps xmm1, xmm6; max
    vmovaps xmm0, xmm7; min
  }
  v9 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return *(float *)&v9;
}

/*
==============
FD_GetTFRStatus
==============
*/
_BOOL8 FD_GetTFRStatus()
{
  return fd_TFR_DebugEnable;
}

/*
==============
FD_GetTimedSine
==============
*/

float __fastcall FD_GetTimedSine(float timeScale, float delta, double _XMM2_8)
{
  float s; 
  float c; 

  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
    vaddss  xmm1, xmm2, xmm1
    vmulss  xmm0, xmm1, xmm0; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm { vmovss  xmm0, [rsp+28h+s] }
  return *(float *)&_XMM0;
}

/*
==============
FD_GetVerticalSens
==============
*/
float FD_GetVerticalSens()
{
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
FD_HarmonicCompressor
==============
*/
float FD_HarmonicCompressor(float *newSignal, float currentSignal, float *currentRateSignal, float dT, float signalRateAttack, float signalRateDamping, float lowestSignal, float highestSignal)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm2, xmm0, xmm1
    vmulss  xmm4, xmm2, [rsp+28h+signalRateAttack]
    vmulss  xmm5, xmm4, xmm3
    vaddss  xmm4, xmm5, dword ptr [r8]
    vmulss  xmm0, xmm4, [rsp+28h+signalRateDamping]
    vmulss  xmm2, xmm0, xmm3
    vsubss  xmm4, xmm4, xmm2
    vmovss  xmm2, [rsp+28h+highestSignal]; max
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm0, xmm0, xmm1; val
    vmovss  xmm1, [rsp+28h+lowestSignal]; min
    vmovss  dword ptr [r8], xmm4
    vmovss  dword ptr [rcx], xmm0
  }
  _RBX = newSignal;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rbx], xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
FD_QuatToAngleAxis
==============
*/
void FD_QuatToAngleAxis(const vec4_t *quat, float *angleOut, vec3_t *axisOut)
{
  char v19; 
  char v20; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm0, xmm0, xmm0
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = axisOut;
  __asm
  {
    vmovss  xmm6, dword ptr [rcx]
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, dword ptr [rcx+0Ch]; X
    vmovaps [rsp+48h+var_28], xmm7
  }
  _RSI = angleOut;
  __asm
  {
    vsqrtss xmm7, xmm2, xmm2
    vmovaps xmm0, xmm7; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm1, xmm7, xmm7
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v19 | v20 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    *(_QWORD *)_RBX->v = 0i64;
    __asm
    {
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rsi], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vdivss  xmm3, xmm1, xmm7
      vmulss  xmm2, xmm6, xmm3
      vmovss  dword ptr [rbx], xmm2
      vmulss  xmm1, xmm3, dword ptr [rdi+4]
      vmulss  xmm2, xmm0, cs:__real@40000000
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm3, dword ptr [rdi+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rsi], xmm2
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

/*
==============
FD_RegisterDvars
==============
*/
void FD_RegisterDvars(void)
{
  ;
}

/*
==============
FD_SetChaseCameraOffsetObject
==============
*/
void FD_SetChaseCameraOffsetObject(LocalClientNum_t localClientNum, __int16 entNum, bool overrideOriginAndAngles)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 242, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
}

/*
==============
FD_SetParticleEffectsRelativeVelocity
==============
*/
void FD_SetParticleEffectsRelativeVelocity(vec3_t *newVelocity)
{
  ;
}

/*
==============
FD_Trace
==============
*/
void FD_Trace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int brushmask)
{
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  char v32; 
  char v33; 
  hkMemoryAllocator *v34; 
  hkMemoryAllocator *v35; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v37; 
  __int64 v38; 

  v38 = -2i64;
  _RBX = results;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Vehicle FlightDynamics Trace");
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 176, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v37, 0, 0);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+108h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.contents = brushmask;
  extendedData.ignoreBodies = &v37;
  *(_WORD *)&extendedData.collectInsideHits = 1;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  _RBX->fraction = 1.0;
  _RBX->startsolid = 0;
  if ( bounds )
    PhysicsQuery_LegacyTraceSkipEntities(worldId, _RBX, start, end, bounds, NULL, 0, 0, brushmask, 0, NULL, All);
  else
    Physics_Raycast(worldId, start, end, &extendedData, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::GetNumHits(ClosestResult) )
  {
    _RBX->fraction = HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0)->m_fraction;
    _RAX = HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0);
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rax+10h]
      vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB; int const near * const hkVector4f_indexToComponent32_SSE3
      vmovss  dword ptr [rbx+10h], xmm1
    }
    _RAX = HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0);
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rax+10h]
      vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB+10h; int const near * const hkVector4f_indexToComponent32_SSE3
      vmovss  dword ptr [rbx+14h], xmm1
    }
    _RAX = HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0);
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rax+10h]
      vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB+20h; int const near * const hkVector4f_indexToComponent32_SSE3
      vmovss  dword ptr [rbx+18h], xmm1
    }
    _RAX = HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0);
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rax]
      vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB; int const near * const hkVector4f_indexToComponent32_SSE3
      vmovss  dword ptr [rbx+4], xmm1
    }
    _RAX = HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0);
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rax]
      vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB+10h; int const near * const hkVector4f_indexToComponent32_SSE3
      vmovss  dword ptr [rbx+8], xmm1
    }
    _RAX = HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0);
    __asm
    {
      vmovdqu xmm0, xmmword ptr [rax]
      vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB+20h; int const near * const hkVector4f_indexToComponent32_SSE3
      vmovss  dword ptr [rbx+0Ch], xmm1
      vmovss  xmm0, cs:__real@3d4ccccd
      vcomiss xmm0, dword ptr [rbx]
    }
    if ( !(v32 | v33) )
      _RBX->startsolid = 1;
  }
  v34 = hkMemHeapAllocator();
  v37.m_ignoreBodies.m_size = 0;
  if ( v37.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v34, v37.m_ignoreBodies.m_data, 4, v37.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v37.m_ignoreBodies.m_data = NULL;
  v37.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v35 = hkMemHeapAllocator();
  v37.m_ignoreEntities.m_size = 0;
  if ( v37.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v35, v37.m_ignoreEntities.m_data, 8, v37.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v37.m_ignoreEntities.m_data = NULL;
  v37.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  Sys_ProfEndNamedEvent();
}

/*
==============
FD_UpdateChaseCam
==============
*/
void FD_UpdateChaseCam(LocalClientNum_t localClientNum, const playerState_s *ps, const float dT, const centity_t *cent)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 248, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
}

/*
==============
FD_UpdateControlSurfacesOnModel
==============
*/
void FD_UpdateControlSurfacesOnModel(const cpose_t *pose, const DObj *obj, const int *partBits, float aileron)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 312, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
}

/*
==============
FD_UpdateLocalControlSurfaceValues
==============
*/
void FD_UpdateLocalControlSurfaceValues(LocalClientNum_t localClientNum, float *out_aileron, float *out_elevator, float *out_rudder)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 224, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
}

/*
==============
I_pow
==============
*/

double __fastcall I_pow(float value, float expo)
{
  double result; 

  *(float *)&result = powf_0(value, expo);
  return result;
}

