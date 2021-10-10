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
bool CG_FlightDynamicsCameraUpdate(cg_t *cgameGlob, const centity_t *cent, const VehicleDef *vehDef, float frameTime, RefdefView *inOutRefDef)
{
  __int64 localClientNum; 
  FlightDynamicsManager *FlightDynamicsManager; 
  __int64 v9; 
  double v10; 
  float v11; 
  CgVehicleSystem *v12; 
  VehicleClient *Client; 
  BgVehiclePhysicsManager *v14; 
  BgVehiclePhysics *ObjectById; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  float v20; 
  unsigned int PhysicsBodyId; 
  Physics_WorldId m_worldId; 
  hknpWorld *world; 
  __int64 v24; 
  __int128 v25; 
  float v26; 
  float v28; 
  float value; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  __int128 v33; 
  float v35; 
  int v39; 
  int v40; 
  float fovDeltaCurrent; 
  unsigned int v42; 
  float v46; 
  float v50; 
  float v54; 
  float v58; 
  float v62; 
  float v63; 
  float v64; 
  int v65; 
  const dvar_t *v66; 
  int integer; 
  int v68; 
  const dvar_t *v69; 
  const dvar_t *v70; 
  const dvar_t *v71; 
  const char *v72; 
  const dvar_t *v73; 
  const dvar_t *v74; 
  const char *v75; 
  const dvar_t *v76; 
  unsigned int z_low; 
  unsigned int v78; 
  unsigned int v79; 
  const DObj *v80; 
  float v81; 
  const dvar_t *v82; 
  const dvar_t *v83; 
  const dvar_t *v84; 
  cpose_t *v85; 
  __int64 v86; 
  double v87; 
  __int128 v88; 
  float v89; 
  float v90; 
  float v91; 
  bool v95; 
  float v96; 
  float v97; 
  float v98; 
  __int64 v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  double Float_Internal_DebugName; 
  float v105; 
  float v106; 
  double v107; 
  float v108; 
  float v109; 
  double v110; 
  double v111; 
  float v112; 
  float v113; 
  double v114; 
  double v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  double v122; 
  float v123; 
  double v124; 
  float v125; 
  double v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  double v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  const vec3_t *v140; 
  float lateralOffset; 
  float v142; 
  float v143; 
  double v144; 
  double v145; 
  float v146; 
  float v147; 
  vec3_t *p_prevFinalVector; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float *v161; 
  float v162; 
  float *v163; 
  float v164; 
  float *v165; 
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  double v170; 
  float v171; 
  float v172; 
  double v173; 
  double v174; 
  double v175; 
  float v176; 
  double v177; 
  float v178; 
  double v179; 
  float v180; 
  float v181; 
  float v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  __int64 v188; 
  float v189; 
  float v190; 
  float v191; 
  float v192; 
  float v193; 
  float v194; 
  float v195; 
  float v196; 
  float v197; 
  float v198; 
  float v199; 
  RefdefView *v200; 
  float v201; 
  float v202; 
  float v203; 
  float v204; 
  float v205; 
  float v206; 
  __int128 v207; 
  float v208; 
  float v211; 
  float v212; 
  float v213; 
  float v214; 
  float v215; 
  float v216; 
  float v217; 
  float v218; 
  float v219; 
  float avoidanceDistance; 
  float v221; 
  float *v222; 
  float v223; 
  float *v224; 
  float v225; 
  float *v226; 
  float v227; 
  float v228; 
  float v229; 
  float v230; 
  float v231; 
  float *v232; 
  float *v233; 
  vec3_t *end; 
  float *outRawFrac; 
  float v236; 
  vec3_t v237; 
  __int64 v238; 
  const VehicleDef *v239; 
  cpose_t *pose; 
  float v241; 
  vec3_t v242; 
  vec3_t outOrg; 
  int ignoreEntities; 
  __int64 v245; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec3_t v248; 
  vec3_t v249; 
  vec4_t result; 
  vec3_t inOrg; 
  vec3_t v252; 
  vec3_t v253; 
  vec3_t v254; 
  vec3_t vec; 
  vec3_t v256; 
  vec3_t v; 
  vec3_t v258; 
  float v259; 
  float v260; 
  float v261; 
  int v262[2]; 
  float v263; 
  vec3_t v264; 
  __int64 v265; 
  float v266; 
  vec3_t v267; 
  vec3_t v268; 
  vec3_t v269; 
  vec4_t out; 
  vec4_t v271; 
  vec4_t to; 
  vec3_t angles; 
  float v274; 
  float v275; 
  float v276; 
  float v277; 
  int v278; 
  int v279; 
  int v280; 
  float v281; 
  int v282; 
  int v283; 
  int v284; 
  float v285; 
  float v286; 
  float v287; 
  float v288; 
  float v289; 
  vec4_t v290; 
  tmat33_t<vec3_t> outTagMat; 
  vec4_t quat; 

  v245 = -2i64;
  v239 = vehDef;
  pose = &cent->pose;
  *(_QWORD *)v.v = inOutRefDef;
  localClientNum = cgameGlob->localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 342, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 343, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  FlightDynamicsManager = BG_GetFlightDynamicsManager();
  if ( !FlightDynamicsManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 346, ASSERT_TYPE_ASSERT, "(fdManager)", (const char *)&queryFormat, "fdManager") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&outRawFrac = cl_maxLocalClients;
    LODWORD(end) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 550, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( clientNum ) ) < (unsigned)( (cl_maxLocalClients) )", "static_cast<int>( clientNum ) doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", end, outRawFrac) )
      __debugbreak();
  }
  v9 = localClientNum;
  if ( (FlightDynamicsManager *)((char *)FlightDynamicsManager + 280 * localClientNum) == (FlightDynamicsManager *)-196i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 349, ASSERT_TYPE_ASSERT, "(fdLocalCameraData)", (const char *)&queryFormat, "fdLocalCameraData") )
    __debugbreak();
  v10 = I_fclamp(frameTime, 0.0041666669, 0.06666667);
  v11 = (float)(FlightDynamicsManager->m_fdCameraData[v9].accumulatedDT - (float)(FlightDynamicsManager->m_fdCameraData[v9].accumulatedDT * 0.1)) + (float)(*(float *)&v10 * 0.1);
  FlightDynamicsManager->m_fdCameraData[v9].accumulatedDT = v11;
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
  v12 = CgVehicleSystem::ms_vehicleSystemArray[localClientNum];
  Client = CgVehicleSystem::GetClient(v12, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 358, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  v14 = v12->PhysicsGetVehiclePhysicsManager(v12);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v14, Client->physicsId);
  if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 360, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  if ( BgVehiclePhysics::IsDynamic(ObjectById) )
  {
    v17 = LODWORD(ObjectById->m_transform.m[0].v[1]);
    *(float *)&v17 = ObjectById->m_transform.m[0].v[1] * ObjectById->m_linearVelocityWs.v[1];
    v16 = v17;
    v18 = ObjectById->m_transform.m[0].v[0] * ObjectById->m_linearVelocityWs.v[0];
    _XMM0 = LODWORD(ObjectById->m_transform.m[0].v[2]);
    v20 = *(float *)&_XMM0 * ObjectById->m_linearVelocityWs.v[2];
  }
  else
  {
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(ObjectById);
    m_worldId = ObjectById->m_worldId;
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
    v24 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, PhysicsBodyId);
    v274 = *(float *)v24;
    v275 = *(float *)(v24 + 4);
    v276 = *(float *)(v24 + 8);
    v277 = 0.0;
    v278 = *(_DWORD *)(v24 + 16);
    v279 = *(_DWORD *)(v24 + 20);
    v280 = *(_DWORD *)(v24 + 24);
    v281 = 0.0;
    v282 = *(_DWORD *)(v24 + 32);
    v283 = *(_DWORD *)(v24 + 36);
    v284 = *(_DWORD *)(v24 + 40);
    v285 = 0.0;
    v286 = 32.0 * *(float *)(v24 + 48);
    v287 = 32.0 * *(float *)(v24 + 52);
    v288 = 32.0 * *(float *)(v24 + 56);
    v289 = FLOAT_1_0;
    _XMM0 = *(unsigned __int64 *)ObjectById->m_history.m_lastLinearVel.v;
    v265 = *(_QWORD *)ObjectById->m_history.m_lastLinearVel.v;
    v266 = ObjectById->m_history.m_lastLinearVel.v[2];
    v25 = LODWORD(v275);
    *(float *)&v25 = v275 * *((float *)&v265 + 1);
    v16 = v25;
    v18 = v274 * *(float *)&v265;
    v20 = v276 * v266;
  }
  v26 = (float)(*(float *)&v16 + v18) + v20;
  if ( v26 <= 0.0 )
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(ObjectById);
  else
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(ObjectById);
  __asm { vmaxss  xmm0, xmm0, cs:__real@41200000 }
  *(double *)&_XMM0 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 / *(float *)&_XMM0) & _xmm), 0.0, 1.0);
  v28 = *(float *)&_XMM0;
  if ( *(float *)&_XMM0 >= FlightDynamicsManager->m_fdCameraData[v9].lastNSpeed )
  {
    v30 = DCONST_DVARFLT_fd_camera_fov_lerp_speed;
    if ( !DCONST_DVARFLT_fd_camera_fov_lerp_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_fov_lerp_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    value = v30->current.value;
  }
  else
  {
    value = FLOAT_0_5;
  }
  v31 = DCONST_DVARFLT_fd_camera_fov_max_delta;
  if ( !DCONST_DVARFLT_fd_camera_fov_max_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_fov_max_delta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v16 + 1) & *((_QWORD *)&_xmm + 1);
  v33 = _XMM0;
  *(float *)&v33 = *(float *)&_XMM0 - 0.30000001;
  _XMM0 = v33;
  __asm { vmaxss  xmm1, xmm0, xmm14 }
  v35 = (float)((float)((float)(*(float *)&_XMM1 * *(float *)&_XMM1) * *(float *)&_XMM1) * 2.915452) * v31->current.value;
  _XMM5 = LODWORD(FLOAT_0_016000001);
  if ( v11 <= 0.016000001 || v11 >= 1.0 )
  {
    v39 = 1;
  }
  else
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm1, xmm1, xmm0, 1 }
    v39 = (int)*(float *)&_XMM1;
    if ( (float)(v11 - (float)(*(float *)&_XMM1 * 0.016000001)) > 0.0 )
      ++v39;
  }
  v40 = 0;
  if ( v39 >= 4 )
  {
    fovDeltaCurrent = FlightDynamicsManager->m_fdCameraData[v9].fovDeltaCurrent;
    v42 = 2;
    do
    {
      _XMM0 = (unsigned int)v40;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
      }
      v46 = (float)((float)(*(float *)&_XMM1 * (float)(v35 - fovDeltaCurrent)) * value) + fovDeltaCurrent;
      _XMM0 = v42 - 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
      }
      v50 = (float)((float)(*(float *)&_XMM1 * (float)(v35 - v46)) * value) + v46;
      _XMM0 = v42;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
      }
      v54 = (float)((float)(*(float *)&_XMM1 * (float)(v35 - v50)) * value) + v50;
      _XMM0 = v42 + 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm5, xmm6, xmm2
      }
      v58 = (float)((float)((float)(v35 - v54) * *(float *)&_XMM1) * value) + v54;
      fovDeltaCurrent = v58;
      v40 += 4;
      v42 += 4;
    }
    while ( v40 < v39 - 3 );
    FlightDynamicsManager->m_fdCameraData[v9].fovDeltaCurrent = v58;
  }
  for ( ; v40 < v39; ++v40 )
  {
    _XMM0 = (unsigned int)v40;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm5, xmm6, xmm2
    }
    FlightDynamicsManager->m_fdCameraData[v9].fovDeltaCurrent = (float)((float)((float)(v35 - FlightDynamicsManager->m_fdCameraData[v9].fovDeltaCurrent) * *(float *)&_XMM1) * value) + FlightDynamicsManager->m_fdCameraData[v9].fovDeltaCurrent;
  }
  FlightDynamicsManager->m_fdCameraData[v9].lastNSpeed = v28;
  v62 = FLOAT_N450_0;
  v63 = FLOAT_40_0;
  *(float *)&v238 = FLOAT_40_0;
  v64 = 0.0;
  v65 = 0;
  if ( !v239 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 391, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( v239->type == VEH_SEACRAFT )
  {
    v76 = DVARFLT_fd_camera_boat_chase_dist;
    if ( !DVARFLT_fd_camera_boat_chase_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_boat_chase_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v76);
    v62 = v76->current.value;
    v74 = DVARFLT_fd_camera_boat_chase_verticalOffset;
    if ( DVARFLT_fd_camera_boat_chase_verticalOffset )
      goto LABEL_99;
    v75 = "fd_camera_boat_chase_verticalOffset";
    goto LABEL_97;
  }
  v66 = DVARINT_fd_camera_mode;
  if ( !DVARINT_fd_camera_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v66);
  integer = v66->current.integer;
  if ( !integer )
  {
    v65 = 4;
    v73 = DVARFLT_fd_camera_default_chase_dist;
    if ( !DVARFLT_fd_camera_default_chase_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_default_chase_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v73);
    v62 = v73->current.value;
    v74 = DVARFLT_fd_camera_default_chase_verticalOffset;
    if ( DVARFLT_fd_camera_default_chase_verticalOffset )
      goto LABEL_99;
    v75 = "fd_camera_default_chase_verticalOffset";
LABEL_97:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v75) )
      __debugbreak();
LABEL_99:
    Dvar_CheckFrontendServerThread(v74);
    v63 = v74->current.value;
    v71 = DVARFLT_fd_camera_default_chase_lateralOffset;
    *(float *)&v238 = v63;
    if ( DVARFLT_fd_camera_default_chase_lateralOffset )
    {
LABEL_103:
      Dvar_CheckFrontendServerThread(v71);
      v64 = v71->current.value;
      goto LABEL_104;
    }
    v72 = "fd_camera_default_chase_lateralOffset";
LABEL_101:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v72) )
      __debugbreak();
    goto LABEL_103;
  }
  v68 = integer - 1;
  if ( !v68 )
  {
    v65 = 2;
    v69 = DVARFLT_fd_camera_cockpit_chase_dist;
    if ( !DVARFLT_fd_camera_cockpit_chase_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v69);
    v62 = v69->current.value;
    v70 = DVARFLT_fd_camera_cockpit_chase_verticalOffset;
    if ( !DVARFLT_fd_camera_cockpit_chase_verticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_verticalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    v63 = v70->current.value;
    *(float *)&v238 = v63;
    v71 = DVARFLT_fd_camera_cockpit_chase_lateralOffset;
    if ( DVARFLT_fd_camera_cockpit_chase_lateralOffset )
      goto LABEL_103;
    v72 = "fd_camera_cockpit_chase_lateralOffset";
    goto LABEL_101;
  }
  if ( v68 == 1 )
    v65 = 5;
LABEL_104:
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
  v78 = 2533 * localClientNum + z_low;
  if ( v78 >= 0x13CA )
  {
    LODWORD(outRawFrac) = v78;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", outRawFrac) )
      __debugbreak();
  }
  v79 = clientObjMap[v78];
  if ( v79 )
  {
    if ( v79 >= (unsigned int)s_objCount )
    {
      LODWORD(outRawFrac) = v79;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", outRawFrac) )
        __debugbreak();
    }
    v80 = (const DObj *)s_objBuf[v79];
  }
  else
  {
    v80 = NULL;
  }
  if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 427, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 431, ASSERT_TYPE_ASSERT, "(fd)", (const char *)&queryFormat, "fd") )
    __debugbreak();
  if ( FlightDynamicsManager->m_Use1stPerson == FlightDynamicsManager->m_Prefer1stPerson )
    goto LABEL_134;
  v81 = v11 + FlightDynamicsManager->m_InternalTimer;
  FlightDynamicsManager->m_InternalTimer = v81;
  if ( v81 > 1.0 )
  {
    FlightDynamicsManager->m_Use1stPerson = FlightDynamicsManager->m_Prefer1stPerson;
LABEL_134:
    FlightDynamicsManager->m_InternalTimer = 0.0;
    goto LABEL_135;
  }
  FlightDynamicsManager->m_Prefer1stPerson = FlightDynamicsManager->m_Use1stPerson;
LABEL_135:
  if ( FlightDynamicsManager->m_Use1stPerson )
  {
    v65 = 2;
    v82 = DVARFLT_fd_camera_cockpit_chase_dist;
    if ( !DVARFLT_fd_camera_cockpit_chase_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v82);
    v62 = v82->current.value;
    v83 = DVARFLT_fd_camera_cockpit_chase_verticalOffset;
    if ( !DVARFLT_fd_camera_cockpit_chase_verticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_verticalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v83);
    v63 = v83->current.value;
    *(float *)&v238 = v63;
    v84 = DVARFLT_fd_camera_cockpit_chase_lateralOffset;
    if ( !DVARFLT_fd_camera_cockpit_chase_lateralOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_cockpit_chase_lateralOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v84);
    v64 = v84->current.value;
  }
  v85 = pose;
  if ( !CG_DObjGetWorldTagMatrix(pose, v80, scr_const.tag_origin, &outTagMat, &outOrigin) )
    return 0;
  AxisToQuat(&outTagMat, &out);
  AxisToAngles(&outTagMat, &angles);
  to = out;
  inOrg = outOrigin;
  QuatTransform(&out, &FlightDynamicsManager->m_ForwardAxis, &v248);
  QuatTransform(&out, &FlightDynamicsManager->m_UpAxis, &v256);
  QuatTransform(&out, &FlightDynamicsManager->m_ElevatorAxis, &v252);
  switch ( v65 )
  {
    case 0:
      if ( ((unsigned __int8 (__fastcall *)(BgVehiclePhysics *))ObjectById->__vftable[1].LoadFromMemFile)(ObjectById) )
        ((void (__fastcall *)(BgVehiclePhysics *, __int64, vec3_t *))ObjectById->__vftable[1].Setup)(ObjectById, v86, &v249);
      else
        QuatTransform(&out, &FlightDynamicsManager->m_ForwardAxis, &v249);
      v249.v[0] = (float)((float)(v249.v[0] - FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[0]) * (float)(v11 * FD_CAM_FBW_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[0];
      v249.v[1] = (float)((float)(v249.v[1] - FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[1]) * (float)(v11 * FD_CAM_FBW_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[1];
      v249.v[2] = (float)((float)(v249.v[2] - FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[2]) * (float)(v11 * FD_CAM_FBW_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[2];
      v248.v[0] = (float)((float)(v248.v[0] - FlightDynamicsManager->m_fdCameraData[v9].prevForwardVect.v[0]) * (float)(v11 * FD_CAM_FBW_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevForwardVect.v[0];
      v248.v[1] = (float)((float)(v248.v[1] - FlightDynamicsManager->m_fdCameraData[v9].prevForwardVect.v[1]) * (float)(v11 * FD_CAM_FBW_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevForwardVect.v[1];
      v248.v[2] = (float)((float)(v248.v[2] - FlightDynamicsManager->m_fdCameraData[v9].prevForwardVect.v[2]) * (float)(v11 * FD_CAM_FBW_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevForwardVect.v[2];
      v87 = I_fclamp(fsqrt((float)((float)((float)((float)(v249.v[2] * v248.v[0]) - (float)(v248.v[2] * v249.v[0])) * (float)((float)(v249.v[2] * v248.v[0]) - (float)(v248.v[2] * v249.v[0]))) + (float)((float)((float)(v248.v[2] * v249.v[1]) - (float)(v249.v[2] * v248.v[1])) * (float)((float)(v248.v[2] * v249.v[1]) - (float)(v249.v[2] * v248.v[1])))) + (float)((float)((float)(v248.v[1] * v249.v[0]) - (float)(v248.v[0] * v249.v[1])) * (float)((float)(v248.v[1] * v249.v[0]) - (float)(v248.v[0] * v249.v[1])))) * FD_CAM_FBW_ANGULAR_DISTANCE_MULTI, 0.0, 1.0);
      v88 = LODWORD(v248.v[0]);
      v89 = (float)((float)((float)((float)((float)(v248.v[0] - v249.v[0]) * *(float *)&v87) + v249.v[0]) - FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[0]) * (float)(v11 * FD_CAM_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[0];
      v90 = (float)((float)((float)((float)((float)(v248.v[1] - v249.v[1]) * *(float *)&v87) + v249.v[1]) - FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[1]) * (float)(v11 * FD_CAM_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[1];
      v91 = (float)((float)((float)((float)((float)(v248.v[2] - v249.v[2]) * *(float *)&v87) + v249.v[2]) - FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2]) * (float)(v11 * FD_CAM_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2];
      *(float *)&v88 = fsqrt((float)((float)(v89 * v89) + (float)(v90 * v90)) + (float)(v91 * v91));
      _XMM4 = v88;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm11, xmm0
      }
      vec.v[0] = v89 * (float)(1.0 / *(float *)&_XMM0);
      vec.v[1] = v90 * (float)(1.0 / *(float *)&_XMM0);
      vec.v[2] = (float)(1.0 / *(float *)&_XMM0) * v91;
      if ( *(float *)&v88 < 0.001 )
        vec = v249;
      vectoangles(&vec, &angles);
      FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect = v249;
      FlightDynamicsManager->m_fdCameraData[v9].prevForwardVect = v248;
      FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector = vec;
      v95 = 1;
      break;
    case 1:
      v258.v[0] = (float)((float)(v248.v[0] - FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[0]) * (float)(v11 * FD_CAM_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[0];
      v258.v[1] = (float)((float)(v248.v[1] - FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[1]) * (float)(v11 * FD_CAM_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[1];
      v258.v[2] = (float)((float)(v248.v[2] - FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2]) * (float)(v11 * FD_CAM_VECTOR_LERP)) + FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2];
      vectoangles(&v258, &angles);
      FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector = v258;
      v95 = 1;
      break;
    case 2:
      v.v[0] = v252.v[0];
      v.v[1] = v252.v[1];
      v.v[2] = 0.0;
      Vec3Normalize(&v);
      v96 = outOrigin.v[0];
      FlightDynamicsManager->m_WorldViewPosition.v[0] = outOrigin.v[0];
      v97 = outOrigin.v[1];
      FlightDynamicsManager->m_WorldViewPosition.v[1] = outOrigin.v[1];
      v98 = outOrigin.v[2];
      FlightDynamicsManager->m_WorldViewPosition.v[2] = outOrigin.v[2];
      ((void (__fastcall *)(BgVehiclePhysics *, __int64, int *))ObjectById->__vftable[1].Setup)(ObjectById, v99, v262);
      v100 = v64 - (float)(FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[2] * 50.0);
      inOrg.v[0] = (float)((float)((float)(v62 * v248.v[0]) + v96) + (float)(v63 * v256.v[0])) + (float)(v100 * v252.v[0]);
      inOrg.v[1] = (float)((float)((float)(v62 * v248.v[1]) + v97) + (float)(v63 * v256.v[1])) + (float)(v100 * v252.v[1]);
      inOrg.v[2] = (float)((float)((float)(v62 * v248.v[2]) + v98) + (float)(v63 * v256.v[2])) + (float)(v100 * v252.v[2]);
      v101 = *(float *)v262;
      LODWORD(v102) = v262[0] & _xmm;
      v103 = *(float *)v262 - (float)(0.5 * v263);
      I_fclamp(v103, -1.0, 1.0);
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_camera_look_rudder_factor, "fd_camera_look_rudder_factor");
      v105 = *(float *)&Float_Internal_DebugName * (float)((float)((float)(1.0 - v102) * v103) + (float)(v102 * v101));
      v106 = FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[2];
      v107 = I_fclamp(*(float *)v262, -1.0, 0.0);
      v108 = (float)((float)((float)((float)(*(float *)&v107 + v263) - v106) - FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[2]) * v11) + v106;
      FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[2] = v108;
      v109 = (float)((float)(v108 * FD_CAMERA_STRAFE_DAMPING) * v11) + FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[2];
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[2] = v109;
      v110 = FlightDynamics::CalculateDrag(v109, FD_CAMERA_YAW_SPEED, v11);
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[2] = *(float *)&v110;
      v111 = I_fclamp(*(float *)&v110, COERCE_FLOAT(LODWORD(FD_CAMERA_OFFSET_CLAMP) ^ _xmm), FD_CAMERA_OFFSET_CLAMP);
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[2] = *(float *)&v111;
      v112 = (float)((float)((float)(v105 - FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[0]) - FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0]) * v11) + FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[0];
      FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[0] = v112;
      v113 = (float)((float)(v112 * FD_CAMERA_YAW_DAMPING_HELO) * v11) + FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0];
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0] = v113;
      v114 = FlightDynamics::CalculateDrag(v113, FD_CAMERA_YAW_SPEED, v11);
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0] = *(float *)&v114;
      v115 = I_fclamp(*(float *)&v114, COERCE_FLOAT(LODWORD(FD_CAMERA_OFFSET_CLAMP) ^ _xmm), FD_CAMERA_OFFSET_CLAMP);
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0] = *(float *)&v115;
      v116 = (float)((float)((float)((float)((float)(FD_CAMERA_LATERAL_POSITION_OFFSET_MAX * FlightDynamicsManager->m_fdCameraData[v9].lateralPosition) * v.v[2]) + ObjectById->m_linearVelocityWs.v[2]) - FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2]) * (float)(v11 * vehCam_chaseFD_PositionlerpSpeed)) + FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2];
      v117 = -1.0 / FD_CAMERA_UP_DOWN_OFFSET_VELOCITY;
      v118 = v256.v[2] * FlightDynamicsManager->m_UpAxis.v[2];
      v119 = v256.v[0] * FlightDynamicsManager->m_UpAxis.v[0];
      v120 = v256.v[1] * FlightDynamicsManager->m_UpAxis.v[1];
      v121 = FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[1];
      v122 = FlightDynamics::ComputeDeadzone(*(float *)&v262[1], FD_CAMERA_PITCH_DEADZONE);
      v123 = (float)((float)(*(float *)&v122 - v121) * v11) + v121;
      FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[1] = v123;
      v124 = FlightDynamics::CalculateDrag(v123, FD_CAMERA_PITCH_DAMPING, v11);
      FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[1] = *(float *)&v124;
      v125 = (float)((float)(*(float *)&v124 * FD_CAMERA_PITCH_SPEED) * v11) + FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[1];
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[1] = v125;
      v126 = I_fclamp(v125, COERCE_FLOAT(LODWORD(FD_CAMERA_OFFSET_CLAMP) ^ _xmm), FD_CAMERA_OFFSET_CLAMP);
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[1] = *(float *)&v126;
      v264.v[0] = 0.0;
      v264.v[1] = 0.0;
      v264.v[2] = 0.0;
      v127 = (float)((float)((float)((float)(v252.v[1] * FlightDynamicsManager->m_UpAxis.v[1]) + (float)(v252.v[0] * FlightDynamicsManager->m_UpAxis.v[0])) + (float)(v252.v[2] * FlightDynamicsManager->m_UpAxis.v[2])) * v116) / FD_CAMERA_UP_DOWN_OFFSET_VELOCITY;
      v264.v[0] = (float)((float)((float)((float)((float)(v119 + v120) + v118) * v116) * v117) + FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[1]) * 30.0;
      v264.v[1] = (float)(v127 * FD_CAM_COCKPIT_ANGLE_STRAFE_SIDEWAYS) + (float)(FD_CAM_COCKPIT_ANGLE_STRAFE * FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0]);
      AnglesToQuat(&v264, &quat);
      RefdefView_SetOrg(&cgameGlob->refdef.view, &inOrg);
      AxisToQuat(&outTagMat, &to);
      QuatSlerp(&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, &to, v11 * vehCam_chaseFD_SlerpSpeed_Unlock, &result);
      FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat = result;
      QuatMultiply(&quat, &result, &v290);
      QuatToAxis(&v290, &cgameGlob->refdef.view.axis);
      QuatToAngles(&v290, &cgameGlob->refdefViewAngles);
      v95 = 1;
      break;
    case 3:
      inOrg.v[0] = (float)((float)(outOrigin.v[0] - FlightDynamicsManager->m_WorldViewPosition.v[0]) * (float)(v11 * vehCam_chaseFD_PositionlerpSpeed)) + FlightDynamicsManager->m_WorldViewPosition.v[0];
      inOrg.v[1] = (float)((float)(outOrigin.v[1] - FlightDynamicsManager->m_WorldViewPosition.v[1]) * (float)(v11 * vehCam_chaseFD_PositionlerpSpeed)) + FlightDynamicsManager->m_WorldViewPosition.v[1];
      v128 = inOrg.v[1];
      inOrg.v[2] = (float)((float)(outOrigin.v[2] - FlightDynamicsManager->m_WorldViewPosition.v[2]) * (float)(v11 * vehCam_chaseFD_PositionlerpSpeed)) + FlightDynamicsManager->m_WorldViewPosition.v[2];
      v129 = inOrg.v[2];
      FlightDynamicsManager->m_WorldViewPosition.v[0] = inOrg.v[0];
      FlightDynamicsManager->m_WorldViewPosition.v[1] = v128;
      FlightDynamicsManager->m_WorldViewPosition.v[2] = v129;
      RefdefView_SetOrg(&cgameGlob->refdef.view, &inOrg);
      RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
      outOrg.v[0] = (float)(outOrg.v[0] - (float)(1000.0 * v248.v[0])) + (float)(150.0 * v256.v[0]);
      outOrg.v[1] = (float)(outOrg.v[1] - (float)(1000.0 * v248.v[1])) + (float)(150.0 * v256.v[1]);
      outOrg.v[2] = inOrg.v[2] + 200.0;
      RefdefView_SetOrg(&cgameGlob->refdef.view, &outOrg);
      AxisToQuat(&outTagMat, &to);
      QuatSlerp(&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, &to, v11 * vehCam_chaseFD_SlerpSpeed, &result);
      FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat = result;
      QuatToAxis(&result, &cgameGlob->refdef.view.axis);
      QuatToAngles(&result, &cgameGlob->refdefViewAngles);
      v95 = 1;
      memset(&outOrg, 0, sizeof(outOrg));
      break;
    case 4:
      if ( !BG_IsSpectatingOrSpectator(&cgameGlob->predictedPlayerState) && !ObjectById->m_playerControlled )
        Com_PrintWarning(14, "HELICOPTER_FBW_LEAD camera running on a non player-controlled client vehicle.\n");
      if ( !BG_IsSpectatingOrSpectator(&cgameGlob->predictedPlayerState) && !((unsigned __int8 (__fastcall *)(BgVehiclePhysics *))ObjectById->__vftable[1].LoadFromMemFile)(ObjectById) )
        Com_PrintWarning(14, "HELICOPTER_FBW_LEAD camera running on a FBW disabled client vehicle.\n");
      outOrigin.v[0] = v252.v[0];
      outOrigin.v[1] = v252.v[1];
      outOrigin.v[2] = 0.0;
      Vec3Normalize(&outOrigin);
      if ( BG_IsSpectatingOrSpectator(&cgameGlob->predictedPlayerState) )
      {
        v140 = tmat43_t<vec3_t>::operator[](&ObjectById->m_transform, 0);
        v137 = v140->v[0];
        v138 = v140->v[1];
        v139 = v140->v[2];
        v259 = 0.0;
        v260 = 0.0;
        v261 = 0.0;
      }
      else
      {
        ((void (__fastcall *)(BgVehiclePhysics *, bool (__fastcall *)(BgVehiclePhysics *, BGVehicles *, Physics_WorldId, unsigned int, int, unsigned int, const VehicleDef *), float *))ObjectById->__vftable[1].Setup)(ObjectById, ObjectById->__vftable[1].Setup, &v259);
        if ( LOBYTE(ObjectById[1].m_manualIntegratedPos.z) )
        {
          v137 = ObjectById[1].m_invInertiaWs.m[1].v[0];
          v138 = ObjectById[1].m_invInertiaWs.m[1].v[1];
          v139 = ObjectById[1].m_invInertiaWs.m[1].v[2];
        }
        else
        {
          v137 = ObjectById[1].m_linkedPlayers.playerPositionsWs[1].v[0];
          v138 = ObjectById[1].m_linkedPlayers.playerPositionsWs[1].v[1];
          v139 = ObjectById[1].m_linkedPlayers.playerPositionsWs[1].v[2];
        }
        if ( fsqrt((float)((float)(v137 * v137) + (float)(v138 * v138)) + (float)(v139 * v139)) < 0.001 )
        {
          v137 = v248.v[0];
          v138 = v248.v[1];
          v139 = v248.v[2];
        }
      }
      lateralOffset = FlightDynamicsManager->m_fdCameraData[v9].lateralOffset;
      v142 = (float)((float)(v261 - FlightDynamicsManager->m_fdCameraData[v9].lateralPosition) - lateralOffset) * v11;
      FlightDynamicsManager->m_fdCameraData[v9].lateralOffset = lateralOffset + v142;
      v143 = (float)((float)((float)(lateralOffset + v142) * FD_CAMERA_OFFSET_SPEED) * v11) + FlightDynamicsManager->m_fdCameraData[v9].lateralPosition;
      FlightDynamicsManager->m_fdCameraData[v9].lateralPosition = v143;
      v144 = FlightDynamics::CalculateDrag(v143, FD_CAMERA_OFFSET_DAMPING, v11);
      FlightDynamicsManager->m_fdCameraData[v9].lateralPosition = *(float *)&v144;
      v145 = I_fclamp(*(float *)&v144, COERCE_FLOAT(LODWORD(FD_CAMERA_OFFSET_CLAMP) ^ _xmm), FD_CAMERA_OFFSET_CLAMP);
      FlightDynamicsManager->m_fdCameraData[v9].lateralPosition = *(float *)&v145;
      v146 = (float)((float)(*(float *)&v145 * FD_CAMERA_LATERAL_POSITION_OFFSET_MAX) * outOrigin.v[0]) + ObjectById->m_linearVelocityWs.v[0];
      *(float *)&pose = v146;
      *(float *)&v239 = (float)((float)(*(float *)&v145 * FD_CAMERA_LATERAL_POSITION_OFFSET_MAX) * outOrigin.v[1]) + ObjectById->m_linearVelocityWs.v[1];
      v147 = (float)((float)(*(float *)&v145 * FD_CAMERA_LATERAL_POSITION_OFFSET_MAX) * outOrigin.v[2]) + ObjectById->m_linearVelocityWs.v[2];
      outOrigin.v[0] = v147;
      p_prevFinalVector = &FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector;
      if ( ((*(_DWORD *)vec3_t::operator[](p_prevFinalVector, 0) & 0x7F800000) == 2139095040 || (*(_DWORD *)vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector, 1) & 0x7F800000) == 2139095040 || (*(_DWORD *)vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector, 2) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 728, ASSERT_TYPE_SANITY, "( !IS_NAN( ( fdLocalCameraData->prevFinalVector )[0] ) && !IS_NAN( ( fdLocalCameraData->prevFinalVector )[1] ) && !IS_NAN( ( fdLocalCameraData->prevFinalVector )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( fdLocalCameraData->prevFinalVector )[0] ) && !IS_NAN( ( fdLocalCameraData->prevFinalVector )[1] ) && !IS_NAN( ( fdLocalCameraData->prevFinalVector )[2] )") )
        __debugbreak();
      v149 = *(float *)&v239;
      if ( FlightDynamicsManager->m_fdCameraData[v9].resetParams )
      {
        p_prevFinalVector->v[0] = v146;
        FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[1] = v149;
        FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2] = v147;
        v150 = v147;
      }
      else
      {
        v150 = FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2];
      }
      v151 = (float)((float)(*(float *)&pose - p_prevFinalVector->v[0]) * (float)(v11 * vehCam_chaseFD_PositionlerpSpeed)) + p_prevFinalVector->v[0];
      v152 = (float)((float)(v149 - FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[1]) * (float)(v11 * vehCam_chaseFD_PositionlerpSpeed)) + FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[1];
      v153 = (float)((float)(outOrigin.v[0] - v150) * (float)(v11 * vehCam_chaseFD_PositionlerpSpeed)) + v150;
      p_prevFinalVector->v[0] = v151;
      FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[1] = v152;
      FlightDynamicsManager->m_fdCameraData[v9].prevFinalVector.v[2] = v153;
      start.v[0] = (float)((float)(v11 * vehCam_chaseFD_LookAheadRate) * v151) + inOrg.v[0];
      start.v[1] = (float)((float)(v11 * vehCam_chaseFD_LookAheadRate) * v152) + inOrg.v[1];
      start.v[2] = (float)(v153 * (float)(v11 * vehCam_chaseFD_LookAheadRate)) + inOrg.v[2];
      if ( FlightDynamicsManager->m_fdCameraData[v9].resetParams )
      {
        FlightDynamicsManager->m_fdCameraData[v9].avoidanceDistance = 0.5;
        FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[0] = v137;
        FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[1] = v138;
        FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect.v[2] = v139;
        FlightDynamicsManager->m_WorldViewPosition = start;
      }
      v154 = v11 * FD_CAM_HELI_FBW_VECTOR_LERP;
      v155 = *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 0);
      v156 = (float)((float)(v137 - v155) * v154) + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 0);
      *(float *)&pose = v156;
      v157 = *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 1);
      v158 = (float)((float)(v138 - v157) * v154) + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 1);
      v236 = v158;
      v159 = *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 2);
      *(float *)&v239 = (float)((float)(v139 - v159) * v154) + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 2);
      v160 = v11 * vehCam_chaseFD_PositionlerpSpeed;
      v161 = (float *)vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 0);
      v162 = start.v[0] - *v161;
      start.v[0] = (float)(v162 * v160) + *vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 0);
      v163 = (float *)vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 1);
      v164 = start.v[1] - *v163;
      start.v[1] = (float)(v164 * v160) + *vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 1);
      v165 = (float *)vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 2);
      v166 = start.v[2] - *v165;
      start.v[2] = (float)(v166 * v160) + *vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 2);
      v167 = start.v[0];
      *vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 0) = v167;
      v168 = start.v[1];
      *vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 1) = v168;
      v169 = start.v[2];
      *vec3_t::operator[](&FlightDynamicsManager->m_WorldViewPosition, 2) = v169;
      v170 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_camera_look_rudder_factor, "fd_camera_look_rudder_factor");
      v171 = (float)((float)((float)((float)(*(float *)&v170 * v259) - FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[0]) - FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0]) * v11) + FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[0];
      FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[0] = v171;
      v172 = (float)((float)(v171 * FD_CAMERA_YAW_DAMPING) * v11) + FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0];
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0] = v172;
      v173 = FlightDynamics::CalculateDrag(v172, FD_CAMERA_YAW_SPEED, v11);
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0] = *(float *)&v173;
      v174 = I_fclamp(*(float *)&v173, COERCE_FLOAT(LODWORD(FD_CAMERA_OFFSET_CLAMP) ^ _xmm), FD_CAMERA_OFFSET_CLAMP);
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[0] = *(float *)&v174;
      v175 = FlightDynamics::ComputeDeadzone(v260, FD_CAMERA_PITCH_DEADZONE);
      v176 = FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[1] + (float)((float)(COERCE_FLOAT(LODWORD(v175) ^ _xmm) - FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[1]) * v11);
      FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[1] = v176;
      v177 = FlightDynamics::CalculateDrag(v176, FD_CAMERA_PITCH_DAMPING, v11);
      FlightDynamicsManager->m_fdCameraData[v9].angleVelocity.v[1] = *(float *)&v177;
      v178 = (float)((float)(*(float *)&v177 * FD_CAMERA_PITCH_SPEED) * v11) + FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[1];
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[1] = v178;
      v179 = I_fclamp(v178, FD_CAMERA_OFFSET_CLAMP_VERTICAL_DOWN, FD_CAMERA_OFFSET_CLAMP_VERTICAL_UP);
      FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[1] = *(float *)&v179;
      if ( FlightDynamicsManager->m_fdCameraData[v9].resetParams )
      {
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 0) = v156;
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 1) = v158;
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 2) = *(float *)&v239;
      }
      v180 = v11 * vehCam_chaseFD_PositionlerpSpeed;
      v181 = *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 0);
      v182 = (float)((float)(*(float *)&pose - v181) * v180) + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 0);
      v183 = *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 1);
      v184 = (float)((float)(v236 - v183) * v180) + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 1);
      v185 = (float)(*(float *)&v239 - *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 2)) * v180;
      v186 = v185 + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 2);
      *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 0) = v182;
      *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 1) = v184;
      *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].additionalLocalOffset, 2) = v186;
      v253.v[0] = v182;
      v253.v[1] = v184;
      v253.v[2] = v186;
      LODWORD(v187) = LODWORD(FlightDynamicsManager->m_fdCameraData[v9].anglePosition.v[1]) ^ _xmm;
      *vec3_t::operator[](&v253, 2) = v187;
      Vec3Normalize(&v253);
      vectoangles(&v253, &v269);
      v188 = *(_QWORD *)v.v;
      AnglesToAxis(&v269, (tmat33_t<vec3_t> *)(*(_QWORD *)v.v + 20i64));
      AxisToQuat((const tmat33_t<vec3_t> *)(v188 + 20), &v271);
      if ( FlightDynamicsManager->m_fdCameraData[v9].resetParams )
      {
        v189 = v271.v[0];
        *vec4_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, 0) = v189;
        v190 = v271.v[1];
        *vec4_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, 1) = v190;
        v191 = v271.v[2];
        *vec4_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, 2) = v191;
        v192 = v271.v[3];
        *vec4_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, 3) = v192;
      }
      QuatSlerp(&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, &v271, v11 * vehCam_chaseFD_SlerpSpeed, &result);
      v193 = result.v[0];
      *vec4_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, 0) = v193;
      v194 = result.v[1];
      *vec4_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, 1) = v194;
      v195 = result.v[2];
      *vec4_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, 2) = v195;
      v196 = result.v[3];
      *vec4_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevViewQuat, 3) = v196;
      v197 = v269.v[0];
      *vec3_t::operator[](&cgameGlob->refdefViewAngles, 0) = v197;
      v198 = v269.v[1];
      *vec3_t::operator[](&cgameGlob->refdefViewAngles, 1) = v198;
      v199 = v269.v[2];
      *vec3_t::operator[](&cgameGlob->refdefViewAngles, 2) = v199;
      v200 = *(RefdefView **)v.v;
      QuatToAxis(&result, (tmat33_t<vec3_t> *)(*(_QWORD *)v.v + 20i64));
      outOrigin.v[0] = v253.v[0];
      if ( (LODWORD(v253.v[0]) & 0x7F800000) == 2139095040 || (outOrigin.v[0] = v253.v[1], (LODWORD(v253.v[1]) & 0x7F800000) == 2139095040) || (outOrigin.v[0] = v253.v[2], (LODWORD(v253.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 796, ASSERT_TYPE_SANITY, "( !IS_NAN( ( directionToObject )[0] ) && !IS_NAN( ( directionToObject )[1] ) && !IS_NAN( ( directionToObject )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( directionToObject )[0] ) && !IS_NAN( ( directionToObject )[1] ) && !IS_NAN( ( directionToObject )[2] )") )
          __debugbreak();
      }
      RefdefView_GetOrg(v200, &v237);
      outOrigin.v[0] = start.v[0];
      if ( (LODWORD(start.v[0]) & 0x7F800000) == 2139095040 || (outOrigin.v[0] = start.v[1], (LODWORD(start.v[1]) & 0x7F800000) == 2139095040) || (outOrigin.v[0] = start.v[2], (LODWORD(start.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 801, ASSERT_TYPE_SANITY, "( !IS_NAN( ( planePlusVelocity )[0] ) && !IS_NAN( ( planePlusVelocity )[1] ) && !IS_NAN( ( planePlusVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( planePlusVelocity )[0] ) && !IS_NAN( ( planePlusVelocity )[1] ) && !IS_NAN( ( planePlusVelocity )[2] )") )
          __debugbreak();
      }
      v237.v[0] = (float)((float)(v62 * v253.v[0]) + start.v[0]) + (float)(v64 * v252.v[0]);
      v237.v[1] = (float)((float)(v62 * v253.v[1]) + start.v[1]) + (float)(v64 * v252.v[1]);
      v237.v[2] = (float)((float)(v62 * v253.v[2]) + start.v[2]) + *(float *)&v238;
      v201 = *vec3_t::operator[](&v237, 0);
      v254.v[0] = v201 - *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevWorldPositionOffset, 0);
      v202 = *vec3_t::operator[](&v237, 1);
      v254.v[1] = v202 - *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevWorldPositionOffset, 1);
      v203 = *vec3_t::operator[](&v237, 2);
      v254.v[2] = v203 - *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevWorldPositionOffset, 2);
      v204 = *vec3_t::operator[](&v237, 0);
      *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevWorldPositionOffset, 0) = v204;
      v205 = *vec3_t::operator[](&v237, 1);
      *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevWorldPositionOffset, 1) = v205;
      v206 = *vec3_t::operator[](&v237, 2);
      *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevWorldPositionOffset, 2) = v206;
      v207 = LODWORD(v254.v[1]);
      v208 = v254.v[0];
      *(float *)&v207 = fsqrt((float)((float)(v254.v[1] * v254.v[1]) + (float)(v208 * v208)) + (float)(v254.v[2] * v254.v[2])) * FD_CAMERA_AVOIDANCE_DISTANCE;
      _XMM0 = v207;
      if ( *(float *)&v207 > 0.001 )
      {
        __asm { vmaxss  xmm7, xmm0, cs:?FD_CAMERA_AVOIDANCE_LOOKAHEAD_DISTANCE_MIN@@3MA; float FD_CAMERA_AVOIDANCE_LOOKAHEAD_DISTANCE_MIN }
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 0) = v208;
        v211 = v254.v[1];
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 1) = v211;
        v212 = v254.v[2];
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 2) = v212;
        Vec3Normalize(&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection);
        v213 = *(float *)&_XMM7 * *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 0);
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 0) = v213;
        v214 = *(float *)&_XMM7 * *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 1);
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 1) = v214;
        v215 = *(float *)&_XMM7 * *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 2);
        *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 2) = v215;
      }
      v216 = *vec3_t::operator[](&v237, 0);
      v254.v[0] = v216 + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 0);
      v217 = *vec3_t::operator[](&v237, 1);
      v254.v[1] = v217 + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 1);
      v218 = *vec3_t::operator[](&v237, 2);
      v254.v[2] = v218 + *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].avoidanceLastNonZeroDirection, 2);
      v241 = FLOAT_1_0;
      ignoreEntities = SLOWORD(v85[1].prevOrigin.prevOrigin.xyz.z);
      BG_Camera_VehicleCameraShapeCast(ObjectById->m_worldId, &ignoreEntities, 1, 2705, &start, &v254, &v241);
      if ( v241 >= 0.0 )
        v219 = powf_0(v241, FD_CAMERA_AVOIDANCE_RESPONSE_EXPO);
      else
        LODWORD(v219) = COERCE_UNSIGNED_INT(powf_0(COERCE_FLOAT(LODWORD(v241) ^ _xmm), FD_CAMERA_AVOIDANCE_RESPONSE_EXPO)) ^ _xmm;
      avoidanceDistance = FlightDynamicsManager->m_fdCameraData[v9].avoidanceDistance;
      if ( v219 >= avoidanceDistance )
      {
        v221 = (float)((float)(1.0 - v11) * FlightDynamicsManager->m_fdCameraData[v9].avoidanceSpeed) + (float)(v11 * FD_CAMERA_AVOIDANCE_RESPONSE_OUT);
        FlightDynamicsManager->m_fdCameraData[v9].avoidanceSpeed = v221;
        FlightDynamicsManager->m_fdCameraData[v9].avoidanceDistance = (float)((float)(1.0 - (float)(v221 * v11)) * FlightDynamicsManager->m_fdCameraData[v9].avoidanceDistance) + (float)((float)(v221 * v11) * v219);
      }
      else
      {
        FlightDynamicsManager->m_fdCameraData[v9].avoidanceDistance = (float)((float)(1.0 - (float)(v11 * FD_CAMERA_AVOIDANCE_RESPONSE_IN)) * avoidanceDistance) + (float)((float)(v11 * FD_CAMERA_AVOIDANCE_RESPONSE_IN) * v219);
        FlightDynamicsManager->m_fdCameraData[v9].avoidanceSpeed = 0.0;
      }
      v222 = (float *)vec3_t::operator[](&v237, 0);
      v223 = *v222 - start.v[0];
      v224 = (float *)vec3_t::operator[](&v237, 1);
      v225 = *v224 - start.v[1];
      v226 = (float *)vec3_t::operator[](&v237, 2);
      v227 = *v226 - start.v[2];
      v228 = FlightDynamicsManager->m_fdCameraData[v9].avoidanceDistance;
      v229 = (float)(v228 * v223) + start.v[0];
      *vec3_t::operator[](&v237, 0) = v229;
      v230 = (float)(v228 * v225) + start.v[1];
      *vec3_t::operator[](&v237, 1) = v230;
      v231 = (float)(v228 * v227) + start.v[2];
      *vec3_t::operator[](&v237, 2) = v231;
      outOrigin.v[0] = *vec3_t::operator[](&v237, 0);
      if ( (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 || (outOrigin.v[0] = *vec3_t::operator[](&v237, 1), (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040) || (outOrigin.v[0] = *SecureVec3::operator[]((SecureVec3 *)&v237, 2), (LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 848, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tempRefOrg )[0] ) && !IS_NAN( ( tempRefOrg )[1] ) && !IS_NAN( ( tempRefOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tempRefOrg )[0] ) && !IS_NAN( ( tempRefOrg )[1] ) && !IS_NAN( ( tempRefOrg )[2] )") )
          __debugbreak();
      }
      RefdefView_SetOrg(v200, &v237);
      v232 = vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 0);
      *v232 = *(float *)&pose;
      *vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 1) = v236;
      v233 = vec3_t::operator[](&FlightDynamicsManager->m_fdCameraData[v9].prevFBWvect, 2);
      *v233 = *(float *)&v239;
      FlightDynamicsManager->m_fdCameraData[v9].resetParams = 0;
      v95 = 1;
      memset(&v237, 0, sizeof(v237));
      break;
    case 5:
      v130 = outOrigin.v[0];
      v131 = outOrigin.v[1];
      v132 = outOrigin.v[2];
      v133 = I_fclamp((float)(v11 * (float)(fsqrt((float)((float)((float)(outOrigin.v[1] - FlightDynamicsManager->m_WorldViewPosition.v[1]) * (float)(outOrigin.v[1] - FlightDynamicsManager->m_WorldViewPosition.v[1])) + (float)((float)(outOrigin.v[0] - FlightDynamicsManager->m_WorldViewPosition.v[0]) * (float)(outOrigin.v[0] - FlightDynamicsManager->m_WorldViewPosition.v[0]))) + (float)((float)(outOrigin.v[2] - FlightDynamicsManager->m_WorldViewPosition.v[2]) * (float)(outOrigin.v[2] - FlightDynamicsManager->m_WorldViewPosition.v[2]))) * vehCam_chaseFD_RcPositionlerpSpeed)) * vehCam_chaseFD_PositionlerpSpeed, 0.0, 1.0);
      v134 = (float)((float)(v130 - FlightDynamicsManager->m_WorldViewPosition.v[0]) * *(float *)&v133) + FlightDynamicsManager->m_WorldViewPosition.v[0];
      v135 = (float)((float)(v131 - FlightDynamicsManager->m_WorldViewPosition.v[1]) * *(float *)&v133) + FlightDynamicsManager->m_WorldViewPosition.v[1];
      v136 = (float)((float)(v132 - FlightDynamicsManager->m_WorldViewPosition.v[2]) * *(float *)&v133) + FlightDynamicsManager->m_WorldViewPosition.v[2];
      FlightDynamicsManager->m_WorldViewPosition.v[0] = v134;
      FlightDynamicsManager->m_WorldViewPosition.v[1] = v135;
      FlightDynamicsManager->m_WorldViewPosition.v[2] = v136;
      RefdefView_GetOrg(&cgameGlob->refdef.view, &v242);
      v242.v[0] = vehCam_chaseFD_RC_posX;
      v242.v[1] = vehCam_chaseFD_RC_posY;
      v242.v[2] = vehCam_chaseFD_RC_posZ;
      RefdefView_SetOrg(&cgameGlob->refdef.view, &v242);
      v267.v[0] = v134 - v242.v[0];
      v267.v[1] = v135 - v242.v[1];
      v267.v[2] = v136 - v242.v[2];
      Vec3Normalize(&v267);
      vectoangles(&v267, &v268);
      AnglesToAxis(&v268, &cgameGlob->refdef.view.axis);
      cgameGlob->refdefViewAngles = v268;
      v95 = 1;
      memset(&v242, 0, sizeof(v242));
      break;
  }
  return v95;
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
double FD_ClampWithinRange(float thisValue, float withinThisValue)
{
  return I_fclamp(thisValue, COERCE_FLOAT(LODWORD(withinThisValue) ^ _xmm), withinThisValue);
}

/*
==============
FD_ComputeExpo
==============
*/
double FD_ComputeExpo(double value, float expo)
{
  __int64 v2; 

  if ( *(float *)&value >= 0.0 )
  {
    *(float *)&value = powf_0(*(float *)&value, expo);
  }
  else
  {
    v2 = *(_QWORD *)&value ^ _xmm;
    *(float *)&v2 = powf_0(*(float *)&v2, expo);
    *(_QWORD *)&value = v2 ^ _xmm;
  }
  return value;
}

/*
==============
FD_ControlInputStrength
==============
*/
float FD_ControlInputStrength(float *inputArray)
{
  float v1; 

  v1 = (float)((float)((float)(*inputArray * *inputArray) + (float)(inputArray[1] * inputArray[1])) + (float)(inputArray[2] * inputArray[2])) + (float)(inputArray[3] * inputArray[3]);
  if ( v1 >= 0.001 )
    return fsqrt(v1);
  else
    return 0.0;
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
  return FLOAT_1_0;
}

/*
==============
FD_GetRandomFloat
==============
*/
float FD_GetRandomFloat(float min, float max, unsigned int additionalSeed)
{
  double v3; 
  unsigned int pHoldrand; 

  pHoldrand = additionalSeed + level.time;
  BG_srand(&pHoldrand);
  v3 = BG_flrand(min, max, &pHoldrand);
  return *(float *)&v3;
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
float FD_GetTimedSine(float timeScale, float delta)
{
  float s; 
  float c; 

  FastSinCos((float)((float)level.time + delta) * timeScale, &s, &c);
  return s;
}

/*
==============
FD_GetVerticalSens
==============
*/
float FD_GetVerticalSens()
{
  return FLOAT_1_0;
}

/*
==============
FD_HarmonicCompressor
==============
*/
float FD_HarmonicCompressor(float *newSignal, float currentSignal, float *currentRateSignal, float dT, float signalRateAttack, float signalRateDamping, float lowestSignal, float highestSignal)
{
  float v8; 
  float v9; 
  double v11; 

  v8 = (float)((float)((float)((float)(*newSignal - currentSignal) * signalRateAttack) * dT) + *currentRateSignal) - (float)((float)((float)((float)((float)((float)(*newSignal - currentSignal) * signalRateAttack) * dT) + *currentRateSignal) * signalRateDamping) * dT);
  v9 = (float)(v8 * dT) + currentSignal;
  *currentRateSignal = v8;
  *newSignal = v9;
  v11 = I_fclamp(v9, lowestSignal, highestSignal);
  *newSignal = *(float *)&v11;
  return *(float *)&v11;
}

/*
==============
FD_QuatToAngleAxis
==============
*/
void FD_QuatToAngleAxis(const vec4_t *quat, float *angleOut, vec3_t *axisOut)
{
  float v4; 
  float v6; 
  float v8; 

  v4 = quat->v[0];
  v6 = fsqrt((float)((float)(v4 * v4) + (float)(quat->v[1] * quat->v[1])) + (float)(quat->v[2] * quat->v[2]));
  v8 = atan2f_0(v6, quat->v[3]);
  if ( v6 <= 0.000001 )
  {
    *(_QWORD *)axisOut->v = 0i64;
    axisOut->v[2] = 0;
    *angleOut = 0;
  }
  else
  {
    axisOut->v[0] = v4 * (float)(1.0 / v6);
    axisOut->v[1] = (float)(1.0 / v6) * quat->v[1];
    axisOut->v[2] = (float)(1.0 / v6) * quat->v[2];
    *angleOut = v8 * 2.0;
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
  hkMemoryAllocator *v23; 
  hkMemoryAllocator *v24; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v26; 
  __int64 v27; 

  v27 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Vehicle FlightDynamics Trace");
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics_platform.cpp", 176, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v26, 0, 0);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = brushmask;
  extendedData.ignoreBodies = &v26;
  *(_WORD *)&extendedData.collectInsideHits = 1;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  results->fraction = 1.0;
  results->startsolid = 0;
  if ( bounds )
    PhysicsQuery_LegacyTraceSkipEntities(worldId, results, start, end, bounds, NULL, 0, 0, brushmask, 0, NULL, All);
  else
    Physics_Raycast(worldId, start, end, &extendedData, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::GetNumHits(ClosestResult) )
  {
    results->fraction = HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0)->m_fraction;
    _XMM0.m_quad = (__m128)HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0)->m_normal;
    __asm { vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB; int const near * const hkVector4f_indexToComponent32_SSE3 }
    results->normal.v[0] = *(float *)&_XMM1;
    _XMM0.m_quad = (__m128)HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0)->m_normal;
    __asm { vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB+10h; int const near * const hkVector4f_indexToComponent32_SSE3 }
    results->normal.v[1] = *(float *)&_XMM1;
    _XMM0.m_quad = (__m128)HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0)->m_normal;
    __asm { vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB+20h; int const near * const hkVector4f_indexToComponent32_SSE3 }
    results->normal.v[2] = *(float *)&_XMM1;
    _XMM0.m_quad = (__m128)HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0)->m_position;
    __asm { vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB; int const near * const hkVector4f_indexToComponent32_SSE3 }
    results->position.v[0] = *(float *)&_XMM1;
    _XMM0.m_quad = (__m128)HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0)->m_position;
    __asm { vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB+10h; int const near * const hkVector4f_indexToComponent32_SSE3 }
    results->position.v[1] = *(float *)&_XMM1;
    _XMM0.m_quad = (__m128)HavokPhysics_CollisionQueryResult::GetHit(ClosestResult, 0)->m_position;
    __asm { vpshufb xmm1, xmm0, xmmword ptr cs:?hkVector4f_indexToComponent32_SSE3@@3QBHB+20h; int const near * const hkVector4f_indexToComponent32_SSE3 }
    results->position.v[2] = *(float *)&_XMM1;
    if ( results->fraction < 0.050000001 )
      results->startsolid = 1;
  }
  v23 = hkMemHeapAllocator();
  v26.m_ignoreBodies.m_size = 0;
  if ( v26.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v23, v26.m_ignoreBodies.m_data, 4, v26.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v26.m_ignoreBodies.m_data = NULL;
  v26.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v24 = hkMemHeapAllocator();
  v26.m_ignoreEntities.m_size = 0;
  if ( v26.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v24, v26.m_ignoreEntities.m_data, 8, v26.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v26.m_ignoreEntities.m_data = NULL;
  v26.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
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

