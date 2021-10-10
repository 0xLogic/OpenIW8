/*
==============
G_VehicleHeli_UpdateAiMove
==============
*/

void __fastcall G_VehicleHeli_UpdateAiMove(Vehicle *veh)
{
  ?G_VehicleHeli_UpdateAiMove@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_VehicleHeli_PathSetGoal
==============
*/

void __fastcall G_VehicleHeli_PathSetGoal(HeliPathPos *pathPos, const HeliPathNodeData *node)
{
  ?G_VehicleHeli_PathSetGoal@@YAXPEAUHeliPathPos@@PEBUHeliPathNodeData@@@Z(pathPos, node);
}

/*
==============
G_VehicleHeli_PathSetSpeedAccel
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeedAccel(HeliPathPos *pathPos, float speed, float accel)
{
  ?G_VehicleHeli_PathSetSpeedAccel@@YAXPEAUHeliPathPos@@MM@Z(pathPos, speed, accel);
}

/*
==============
G_VehicleHeli_PathSetAirResistance
==============
*/

void __fastcall G_VehicleHeli_PathSetAirResistance(HeliPathPos *pathPos, float speed)
{
  ?G_VehicleHeli_PathSetAirResistance@@YAXPEAUHeliPathPos@@M@Z(pathPos, speed);
}

/*
==============
G_VehicleHeli_PathSetSpeed
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeed(HeliPathPos *pathPos, float speed, float accel)
{
  ?G_VehicleHeli_PathSetSpeed@@YAXPEAUHeliPathPos@@MM@Z(pathPos, speed, accel);
}

/*
==============
G_VehicleHeli_PathClearGoalYaw
==============
*/

void __fastcall G_VehicleHeli_PathClearGoalYaw(HeliPathPos *pathPos)
{
  ?G_VehicleHeli_PathClearGoalYaw@@YAXPEAUHeliPathPos@@@Z(pathPos);
}

/*
==============
G_VehicleHeli_IsHovering
==============
*/

bool __fastcall G_VehicleHeli_IsHovering(const HeliPathPos *pathPos)
{
  return ?G_VehicleHeli_IsHovering@@YA_NPEBUHeliPathPos@@@Z(pathPos);
}

/*
==============
G_VehicleHeli_PathSetTargetYaw
==============
*/

void __fastcall G_VehicleHeli_PathSetTargetYaw(HeliPathPos *pathPos, float yaw)
{
  ?G_VehicleHeli_PathSetTargetYaw@@YAXPEAUHeliPathPos@@M@Z(pathPos, yaw);
}

/*
==============
G_VehicleHeli_UpdateAiMoveInternal
==============
*/

void __fastcall G_VehicleHeli_UpdateAiMoveInternal(HeliPathPos *pathPos)
{
  ?G_VehicleHeli_UpdateAiMoveInternal@@YAXPEAUHeliPathPos@@@Z(pathPos);
}

/*
==============
G_VehicleHeli_TouchTriggers
==============
*/

void __fastcall G_VehicleHeli_TouchTriggers(gentity_s *entity)
{
  ?G_VehicleHeli_TouchTriggers@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
G_VehicleHeli_GetHoverDecel
==============
*/

double __fastcall G_VehicleHeli_GetHoverDecel(const HeliPathPos *pathPos)
{
  double result; 

  *(float *)&result = ?G_VehicleHeli_GetHoverDecel@@YAMPEBUHeliPathPos@@@Z(pathPos);
  return result;
}

/*
==============
G_VehicleHeli_PathSetYawSpeedMode
==============
*/

void __fastcall G_VehicleHeli_PathSetYawSpeedMode(HeliPathPos *pathPos, const char *yawMode)
{
  ?G_VehicleHeli_PathSetYawSpeedMode@@YAXPEAUHeliPathPos@@PEBD@Z(pathPos, yawMode);
}

/*
==============
G_VehicleHeli_PathSetYawSpeed
==============
*/

void __fastcall G_VehicleHeli_PathSetYawSpeed(HeliPathPos *pathPos, float speed, float accel, float decel, float overshootPercent)
{
  ?G_VehicleHeli_PathSetYawSpeed@@YAXPEAUHeliPathPos@@MMMM@Z(pathPos, speed, accel, decel, overshootPercent);
}

/*
==============
G_VehicleHeli_CancelAiMove
==============
*/

void __fastcall G_VehicleHeli_CancelAiMove(gentity_s *ent)
{
  ?G_VehicleHeli_CancelAiMove@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_VehicleHeli_PathFromVeh
==============
*/

void __fastcall G_VehicleHeli_PathFromVeh(HeliPathPos *pathPos, const Vehicle *veh)
{
  ?G_VehicleHeli_PathFromVeh@@YAXPEAUHeliPathPos@@PEBUVehicle@@@Z(pathPos, veh);
}

/*
==============
G_VehicleHeli_PathSetGoalYaw
==============
*/

void __fastcall G_VehicleHeli_PathSetGoalYaw(HeliPathPos *pathPos, float yaw)
{
  ?G_VehicleHeli_PathSetGoalYaw@@YAXPEAUHeliPathPos@@M@Z(pathPos, yaw);
}

/*
==============
G_VehicleHeli_UpdateDefaultMove
==============
*/

void __fastcall G_VehicleHeli_UpdateDefaultMove(Vehicle *veh)
{
  ?G_VehicleHeli_UpdateDefaultMove@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_VehicleHeli_UpdateMoveOrientation
==============
*/

void __fastcall G_VehicleHeli_UpdateMoveOrientation(HeliPathPos *pathPos, const vec3_t *desiredDir, float distToGoal)
{
  ?G_VehicleHeli_UpdateMoveOrientation@@YAXPEAUHeliPathPos@@AEBTvec3_t@@M@Z(pathPos, desiredDir, distToGoal);
}

/*
==============
G_VehicleHeli_GetNewSpeedAndAccel
==============
*/

void __fastcall G_VehicleHeli_GetNewSpeedAndAccel(const HeliPathPos *pathPos, float dt, int hovering, float *newSpeed, float *accelMax)
{
  ?G_VehicleHeli_GetNewSpeedAndAccel@@YAXPEBUHeliPathPos@@MHPEAM1@Z(pathPos, dt, hovering, newSpeed, accelMax);
}

/*
==============
G_VehicleHeli_UpdatePlayerMove
==============
*/

void __fastcall G_VehicleHeli_UpdatePlayerMove(Vehicle *veh)
{
  ?G_VehicleHeli_UpdatePlayerMove@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_VehicleHeli_PathSetSpeedAccelDecel
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeedAccelDecel(HeliPathPos *pathPos, float speed, float accel, float decel)
{
  ?G_VehicleHeli_PathSetSpeedAccelDecel@@YAXPEAUHeliPathPos@@MMM@Z(pathPos, speed, accel, decel);
}

/*
==============
G_VehicleHeli_PathClearTargetYaw
==============
*/

void __fastcall G_VehicleHeli_PathClearTargetYaw(HeliPathPos *pathPos)
{
  ?G_VehicleHeli_PathClearTargetYaw@@YAXPEAUHeliPathPos@@@Z(pathPos);
}

/*
==============
G_VehicleHeli_UpdateMove_CheckGoalReached
==============
*/

int __fastcall G_VehicleHeli_UpdateMove_CheckGoalReached(HeliPathPos *pathPos, float distToGoal)
{
  return ?G_VehicleHeli_UpdateMove_CheckGoalReached@@YAHPEAUHeliPathPos@@M@Z(pathPos, distToGoal);
}

/*
==============
G_VehicleHeli_PathSetGoalPos
==============
*/

void __fastcall G_VehicleHeli_PathSetGoalPos(HeliPathPos *pathPos, const vec3_t *goal, bool stop)
{
  ?G_VehicleHeli_PathSetGoalPos@@YAXPEAUHeliPathPos@@AEBTvec3_t@@_N@Z(pathPos, goal, stop);
}

/*
==============
G_VehicleHeli_UpdateMove_CheckNearGoal
==============
*/

void __fastcall G_VehicleHeli_UpdateMove_CheckNearGoal(HeliPathPos *pathPos, float distToGoal)
{
  ?G_VehicleHeli_UpdateMove_CheckNearGoal@@YAXPEAUHeliPathPos@@M@Z(pathPos, distToGoal);
}

/*
==============
G_VehicleHeli_GetHoverAccel
==============
*/

double __fastcall G_VehicleHeli_GetHoverAccel(const HeliPathPos *pathPos)
{
  double result; 

  *(float *)&result = ?G_VehicleHeli_GetHoverAccel@@YAMPEBUHeliPathPos@@@Z(pathPos);
  return result;
}

/*
==============
G_VehicleHeli_GetHoverSpeed
==============
*/

double __fastcall G_VehicleHeli_GetHoverSpeed(const HeliPathPos *pathPos)
{
  double result; 

  *(float *)&result = ?G_VehicleHeli_GetHoverSpeed@@YAMPEBUHeliPathPos@@@Z(pathPos);
  return result;
}

/*
==============
G_VehicleHeli_ContactRotors
==============
*/

int __fastcall G_VehicleHeli_ContactRotors(const gentity_s *vehEnt, const gentity_s *pOther)
{
  return ?G_VehicleHeli_ContactRotors@@YAHPEBUgentity_s@@0@Z(vehEnt, pOther);
}

/*
==============
G_VehicleHeli_CalcAccel
==============
*/
void G_VehicleHeli_CalcAccel(gentity_s *ent, gentity_s *player, char *move, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  Vehicle *vehicle; 
  int joltDecel_low; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  unsigned int v21; 
  unsigned __int64 v22; 
  bool v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  const dvar_t *v44; 
  float value; 
  const dvar_t *v46; 
  float v47; 
  unsigned int v48; 
  __int64 v49; 
  float v50; 
  bool v51; 
  float v52; 
  float v53; 
  double v54; 
  float v55; 
  float v56; 
  double v57; 
  float v58; 
  float v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v65; 
  __int128 v66; 
  __int128 v70; 
  __int128 v71; 
  float v75; 
  float v76; 
  float v77; 
  const dvar_t *v78; 
  float v79; 
  double v80; 
  float v81; 
  float v82; 
  float v83; 
  double v84; 
  const dvar_t *v85; 
  const dvar_t *v86; 
  float v87; 
  const dvar_t *v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  double v93; 
  float v94; 
  const dvar_t *v97; 
  float v98; 
  const dvar_t *v99; 
  double v100; 
  float v101; 
  const dvar_t *v102; 
  float v103; 
  const dvar_t *v104; 
  double v105; 
  unsigned int v106; 
  __int64 v107; 
  const dvar_t *v108; 
  const dvar_t *v109; 
  float v110; 
  const dvar_t *v111; 
  const dvar_t *v112; 
  float v113; 
  const dvar_t *v114; 
  float v115; 
  float v116; 
  const dvar_t *v117; 
  float v118; 
  const dvar_t *v119; 
  float v120; 
  float v121; 
  const dvar_t *v122; 
  double v123; 
  const dvar_t *v124; 
  float v125; 
  float v126; 
  const dvar_t *v127; 
  float v128; 
  const dvar_t *v129; 
  float v130; 
  float v131; 
  const dvar_t *v132; 
  float v133; 
  const dvar_t *v134; 
  float v135; 
  const dvar_t *v136; 
  const dvar_t *v137; 
  float v138; 
  const dvar_t *v139; 
  const dvar_t *v140; 
  float v141; 
  const dvar_t *v142; 
  double v143; 
  const dvar_t *v144; 
  float v145; 
  float v146; 
  double Float_Internal_DebugName; 
  float v148; 
  double v149; 
  float *v; 
  float v151; 
  double v152; 
  float v153; 
  float v154; 
  float v155; 
  double DeltaTime; 
  float v157; 
  float v158; 
  double v159; 
  unsigned int i; 
  double v161; 
  float v162; 
  double v163; 
  double v164; 
  float v165; 
  double v166; 
  float v167; 
  double v168; 
  const dvar_t *v169; 
  double v170; 
  float v171; 
  double v172; 
  float v173; 
  __int64 v174; 
  __int64 v175; 
  __int64 v176; 
  __int64 v177; 
  __int64 v178; 
  __int64 v179; 
  __int64 v180; 
  __int64 v181; 
  __int64 v182; 
  __int64 v183; 
  vec3_t out; 
  float v187; 
  float v188; 
  float v189; 
  float v190; 
  float v191; 
  float joltSpeed; 
  float v193; 
  float v194; 
  float v195; 
  float v196; 
  float v197; 
  float v198; 
  float v199; 
  float v200; 
  float v201; 
  float v202; 
  float v203; 
  float v204; 
  float v205; 
  int v206[4]; 
  float v207; 
  vec3_t angles; 
  vec3_t up; 
  vec3_t v210; 
  vec4_t outFracs; 
  tmat43_t<vec3_t> forward; 
  usercmd_s outUserCmd; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1908, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1909, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  vehicle = ent->vehicle;
  if ( vehicle->joltTime <= 0.0 )
  {
    v10 = DVARFLT_vehHelicopterMaxSpeedVertical;
    if ( !DVARFLT_vehHelicopterMaxSpeedVertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeedVertical") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = 17.6 * v10->current.value;
    v12 = DVARFLT_vehHelicopterMaxSpeed;
    if ( !DVARFLT_vehHelicopterMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = 17.6 * v12->current.value;
    v14 = DVARFLT_vehHelicopterMaxSpeed;
    if ( !DVARFLT_vehHelicopterMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = 17.6 * v14->current.value;
    v16 = DVARFLT_vehHelicopterMaxAccelVertical;
    joltSpeed = v15;
    v193 = v13;
    v194 = v11;
    if ( !DVARFLT_vehHelicopterMaxAccelVertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccelVertical") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = 17.6 * v16->current.value;
    v18 = DVARFLT_vehHelicopterMaxAccel;
    if ( !DVARFLT_vehHelicopterMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = 17.6 * v18->current.value;
    v20 = DVARFLT_vehHelicopterMaxAccel;
    if ( !DVARFLT_vehHelicopterMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    *(float *)&joltDecel_low = 17.6 * v20->current.value;
    v188 = v19;
    v189 = v17;
  }
  else
  {
    joltDecel_low = SLODWORD(vehicle->joltDecel);
    joltSpeed = vehicle->joltSpeed;
    v193 = joltSpeed;
    v194 = joltSpeed;
    v188 = *(float *)&joltDecel_low;
    v189 = *(float *)&joltDecel_low;
  }
  v187 = *(float *)&joltDecel_low;
  G_VehicleHeli_CmdScale(move, &outFracs);
  v21 = 0;
  v22 = 0i64;
  v23 = 1;
  do
  {
    if ( !v23 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( *(float *)((char *)&joltSpeed + v22) == 0.0 )
    {
      if ( v21 >= 4 )
      {
        LODWORD(v179) = 4;
        LODWORD(v174) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      v24 = FLOAT_1_0;
    }
    else
    {
      if ( v21 >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
        LODWORD(v180) = 3;
        LODWORD(v175) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v175, v180) )
          __debugbreak();
      }
      v24 = *(float *)((char *)&v187 + v22) / *(float *)((char *)&joltSpeed + v22);
      if ( v21 >= 4 )
      {
        LODWORD(v179) = 4;
        LODWORD(v174) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
    }
    *(float *)&v206[v22 / 4 + 2] = v24;
    v22 += 4i64;
    v23 = ++v21 < 3;
  }
  while ( (int)v21 < 3 );
  v25 = joltSpeed * outFracs.v[0];
  v26 = DVARFLT_vehHelicopterPitchOffset;
  v28 = LODWORD(outFracs.v[2]);
  *(float *)&v28 = outFracs.v[2] * v194;
  v27 = outFracs.v[2] * v194;
  v29 = outFracs.v[1] * v193;
  angles.v[1] = 0.0;
  if ( !DVARFLT_vehHelicopterPitchOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterPitchOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  angles.v[0] = vehicle->phys.prevAngles.v[0] - v26->current.value;
  angles.v[2] = vehicle->phys.prevAngles.v[2];
  AngleVectors(&angles, NULL, NULL, &up);
  v30 = *(float *)&v28 * up.v[2];
  v31 = (float)(*(float *)&v28 * up.v[0]) + v25;
  v32 = (float)(v27 * up.v[1]) + v29;
  *(float *)&v28 = fsqrt((float)((float)(v31 * v31) + (float)(v32 * v32)) + (float)(v30 * v30));
  _XMM15 = v28;
  v23 = *(float *)&v28 < 1.0;
  __asm
  {
    vcmpless xmm0, xmm15, cs:__real@80000000
    vblendvps xmm0, xmm15, xmm10, xmm0
  }
  v36 = v31 * (float)(1.0 / *(float *)&_XMM0);
  v37 = v32 * (float)(1.0 / *(float *)&_XMM0);
  v38 = v30 * (float)(1.0 / *(float *)&_XMM0);
  v203 = v31;
  v204 = v32;
  v205 = v30;
  if ( v23 )
  {
    v39 = vehicle->phys.bodyVel.v[1];
    v200 = vehicle->phys.bodyVel.v[0];
    v202 = vehicle->phys.bodyVel.v[2];
    v201 = v39;
    v197 = 0.0;
    v198 = 0.0;
    v199 = 0.0;
    LODWORD(_XMM15) = 0;
    v40 = 0.0;
  }
  else
  {
    v41 = vehicle->phys.bodyVel.v[1];
    v42 = vehicle->phys.bodyVel.v[0];
    v43 = vehicle->phys.bodyVel.v[2];
    v40 = (float)((float)(v41 * v37) + (float)(v42 * v36)) + (float)(v43 * v38);
    v201 = (float)(COERCE_FLOAT(LODWORD(v40) ^ _xmm) * v37) + v41;
    v200 = (float)(COERCE_FLOAT(LODWORD(v40) ^ _xmm) * v36) + v42;
    v197 = v36 * v40;
    v199 = v38 * v40;
    v202 = (float)(COERCE_FLOAT(LODWORD(v40) ^ _xmm) * v38) + v43;
    v198 = v37 * v40;
  }
  v44 = DVARFLT_vehHelicopterDecelerationSide;
  if ( !DVARFLT_vehHelicopterDecelerationSide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterDecelerationSide") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  value = v44->current.value;
  v46 = DVARFLT_vehHelicopterDecelerationFwd;
  if ( !DVARFLT_vehHelicopterDecelerationFwd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterDecelerationFwd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  v206[0] = v46->current.integer;
  *(float *)&v206[1] = value;
  v195 = 0.0;
  v196 = 0.0;
  v190 = 0.0;
  v191 = 0.0;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v47 = (float)level.frameDuration * 0.001;
  v48 = 0;
  v49 = 0i64;
  v50 = 1.0 / v47;
  v51 = 1;
  do
  {
    if ( !v51 )
    {
      LODWORD(v179) = 2;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( v48 >= 4 )
    {
      LODWORD(v179) = 4;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    v52 = *(float *)&v206[v49] * *(float *)&v206[v49 + 2];
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    v53 = *(&v200 + v49);
    DiffTrack(0.0, v53, v52, v47);
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( v48 >= 2 )
    {
      LODWORD(v179) = 2;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    *(&v190 + v49) = (float)(0.0 - v53) * v50;
    if ( *(float *)&_XMM15 <= v40 )
    {
      if ( v48 >= 2 )
      {
        LODWORD(v179) = 2;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      if ( v48 >= 4 )
      {
        LODWORD(v179) = 4;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      v56 = *(float *)&v206[v49] * *(float *)&v206[v49 + 2];
      if ( v48 >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
        LODWORD(v182) = 3;
        LODWORD(v177) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v177, v182) )
          __debugbreak();
      }
      v57 = DiffTrack(*(&v203 + v49), *(&v197 + v49), v56, v47);
      if ( v48 >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      v58 = (float)(*(float *)&v57 - *(&v197 + v49)) * v50;
      if ( v48 >= 2 )
      {
        LODWORD(v179) = 2;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      *(&v190 + v49) = v58 + *(&v190 + v49);
    }
    else
    {
      if ( v48 >= 4 )
      {
        LODWORD(v179) = 4;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      if ( v48 >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
        LODWORD(v181) = 3;
        LODWORD(v176) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v176, v181) )
          __debugbreak();
      }
      v54 = DiffTrack(*(&v203 + v49), *(&v197 + v49), *(float *)&v206[v49 + 2], v47);
      if ( v48 >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      v55 = (float)(*(float *)&v54 - *(&v197 + v49)) * v50;
      if ( v48 >= 2 )
      {
        LODWORD(v179) = 2;
        LODWORD(v174) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      *(&v195 + v49) = v55 + *(&v195 + v49);
    }
    if ( v48 >= 2 )
    {
      LODWORD(v179) = 2;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
      LODWORD(v183) = 2;
      LODWORD(v178) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v178, v183) )
        __debugbreak();
    }
    v59 = *(&v190 + v49) + *(&v195 + v49);
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    outBodyAccel->v[v49] = v59;
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    v60 = *((unsigned int *)&v187 + v49);
    v61 = v60;
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
      {
        __debugbreak();
        v61 = v60;
      }
    }
    _XMM7 = v61 ^ (unsigned int)_xmm;
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( *(float *)&_XMM7 > *(float *)&v60 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM7, *(float *)&v60) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm7, xmm8
      vminss  xmm6, xmm0, xmm6
    }
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    outBodyAccel->v[v49] = *(float *)&_XMM6;
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    v65 = *((unsigned int *)&v187 + v49);
    v66 = v65;
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
      {
        __debugbreak();
        v66 = v65;
      }
    }
    _XMM7 = v66 ^ (unsigned int)_xmm;
    if ( v48 >= 2 )
    {
      LODWORD(v179) = 2;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( *(float *)&_XMM7 > *(float *)&v65 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM7, *(float *)&v65) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm7, [rbp+rdi*4+260h+var_2D8]
      vminss  xmm6, xmm0, xmm6
    }
    if ( v48 >= 2 )
    {
      LODWORD(v179) = 2;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    *(&v190 + v49) = *(float *)&_XMM6;
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    v70 = *((unsigned int *)&v187 + v49);
    v71 = v70;
    if ( v48 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
      {
        __debugbreak();
        v71 = v70;
      }
    }
    _XMM7 = v71 ^ (unsigned int)_xmm;
    if ( v48 >= 2 )
    {
      LODWORD(v179) = 2;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( *(float *)&_XMM7 > *(float *)&v70 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM7, *(float *)&v70) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm7, [rbp+rdi*4+260h+var_2C0]
      vminss  xmm6, xmm0, xmm6
    }
    if ( v48 >= 2 )
    {
      LODWORD(v179) = 2;
      LODWORD(v174) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    *(&v195 + v49++) = *(float *)&_XMM6;
    v51 = ++v48 < 2;
  }
  while ( (int)v48 < 2 );
  v75 = vehicle->phys.bodyVel.v[2];
  v76 = v205;
  if ( (v75 <= v205 || v75 <= 0.0) && ((v77 = vehicle->phys.bodyVel.v[2], v75 >= v205) || v75 >= 0.0) )
  {
    v79 = v207;
  }
  else
  {
    v78 = DVARFLT_vehHelicopterDecelerationUp;
    if ( !DVARFLT_vehHelicopterDecelerationUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterDecelerationUp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v78);
    v79 = v207 * v78->current.value;
    v77 = vehicle->phys.bodyVel.v[2];
  }
  v80 = DiffTrack(v76, v77, v79, v47);
  v81 = v189;
  v82 = (float)(*(float *)&v80 - vehicle->phys.bodyVel.v[2]) * v50;
  LODWORD(v83) = LODWORD(v189) ^ _xmm;
  outBodyAccel->v[2] = v82;
  v84 = I_fclamp(v82, v83, v81);
  outBodyAccel->v[2] = *(float *)&v84;
  v85 = DVARFLT_vehHelicopterMaxYawRate;
  if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v85);
  if ( v85->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1999, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterMaxYawRate, \"vehHelicopterMaxYawRate\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterMaxYawRate ) > 0.0f") )
    __debugbreak();
  v86 = DVARFLT_vehHelicopterMaxYawAccel;
  if ( !DVARFLT_vehHelicopterMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v86);
  v87 = v86->current.value;
  v88 = DVARFLT_vehHelicopterMaxYawRate;
  if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v88);
  v90 = v87 / v88->current.value;
  v89 = v90;
  if ( EntHandle::isDefined(&ent->remoteControlledOwner) )
  {
    G_Utils_GetClientCommonUserCommand(player->client, &outUserCmd);
    v91 = (float)outUserCmd.remoteControlAngles[1] * 0.94488192;
  }
  else
  {
    v92 = vehicle->phys.prevAngles.v[1];
    v93 = DiffTrackAngle(player->client->ps.viewangles.v[1], v92, v90, v47);
    v94 = (float)(*(float *)&v93 - v92) * 0.0027777778;
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm3, 1 }
    v91 = (float)((float)(v94 - *(float *)&_XMM4) * 360.0) * v50;
  }
  v97 = DVARFLT_vehHelicopterMaxYawRate;
  if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v97);
  v98 = v97->current.value;
  v99 = DVARFLT_vehHelicopterMaxYawRate;
  if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v99);
  v100 = I_fclamp(v91, COERCE_FLOAT(v99->current.integer ^ _xmm), v98);
  v101 = vehicle->phys.rotVel.v[1];
  if ( COERCE_FLOAT(LODWORD(v91) & _xmm) > COERCE_FLOAT(LODWORD(v101) & _xmm) )
  {
    v100 = DiffTrack(*(float *)&v100, v101, v89, v47);
    v101 = vehicle->phys.rotVel.v[1];
  }
  outRotAccel->v[1] = (float)(*(float *)&v100 - v101) * v50;
  v102 = DVARFLT_vehHelicopterMaxYawAccel;
  if ( !DVARFLT_vehHelicopterMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v102);
  v103 = v102->current.value;
  v104 = DVARFLT_vehHelicopterMaxYawAccel;
  if ( !DVARFLT_vehHelicopterMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v104);
  v105 = I_fclamp(outRotAccel->v[1], COERCE_FLOAT(v104->current.integer ^ _xmm), v103);
  v106 = 0;
  outRotAccel->v[1] = *(float *)&v105;
  v107 = 0i64;
  do
  {
    if ( v106 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v106;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( *(float *)((char *)&joltSpeed + v107) <= 0.0 )
    {
      v108 = DVARFLT_vehHelicopterMaxSpeed;
      if ( !DVARFLT_vehHelicopterMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v108);
      if ( v108->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2028, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterMaxSpeed, \"vehHelicopterMaxSpeed\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterMaxSpeed ) > 0.0f") )
        __debugbreak();
      v109 = DVARFLT_vehHelicopterMaxSpeed;
      if ( !DVARFLT_vehHelicopterMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v109);
      v110 = 17.6 * v109->current.value;
      if ( v106 >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = v106;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      *(float *)((char *)&joltSpeed + v107) = v110;
    }
    if ( v106 >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = v106;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( *(float *)((char *)&v187 + v107) <= 0.0 )
    {
      v111 = DVARFLT_vehHelicopterMaxAccel;
      if ( !DVARFLT_vehHelicopterMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v111);
      if ( v111->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2033, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterMaxAccel, \"vehHelicopterMaxAccel\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterMaxAccel ) > 0.0f") )
        __debugbreak();
      v112 = DVARFLT_vehHelicopterMaxAccel;
      if ( !DVARFLT_vehHelicopterMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v112);
      v113 = 17.6 * v112->current.value;
      if ( v106 >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = v106;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      *(float *)((char *)&v187 + v107) = v113;
    }
    ++v106;
    v107 += 4i64;
  }
  while ( (int)v106 < 2 );
  v210.v[0] = 0.0;
  v210.v[1] = vehicle->phys.angles.v[1];
  v210.v[2] = 0.0;
  AngleVectors(&v210, forward.m, &forward.m[1], &forward.m[2]);
  v114 = DVARFLT_vehHelicopterTiltFromVelocity;
  forward.m[3].v[0] = 0.0;
  forward.m[3].v[1] = 0.0;
  forward.m[3].v[2] = 0.0;
  if ( !DVARFLT_vehHelicopterTiltFromVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v114);
  v115 = joltSpeed;
  v116 = (float)(vehicle->phys.bodyVel.v[0] / joltSpeed) * v114->current.value;
  v117 = DVARFLT_vehHelicopterTiltFromControllerAxes;
  out.v[0] = v116;
  if ( !DVARFLT_vehHelicopterTiltFromControllerAxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromControllerAxes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v117);
  v118 = (float)(v203 / v115) * v117->current.value;
  v119 = DVARFLT_vehHelicopterTiltFromAcceleration;
  out.v[0] = v118 + out.v[0];
  if ( !DVARFLT_vehHelicopterTiltFromAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v119);
  v120 = v187;
  v121 = (float)(v195 / v187) * v119->current.value;
  v122 = DVARFLT_vehHelicopterTiltFromDeceleration;
  out.v[0] = v121 + out.v[0];
  if ( !DVARFLT_vehHelicopterTiltFromDeceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromDeceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v122);
  v123 = I_fclamp((float)((float)(v190 / v120) * v122->current.value) + out.v[0], -1.0, 1.0);
  v124 = DVARFLT_vehHelicopterTiltFromVelocity;
  out.v[0] = *(float *)&v123;
  if ( !DVARFLT_vehHelicopterTiltFromVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v124);
  v125 = v193;
  v126 = (float)(vehicle->phys.bodyVel.v[1] / v193) * v124->current.value;
  v127 = DVARFLT_vehHelicopterTiltFromControllerAxes;
  out.v[1] = v126;
  if ( !DVARFLT_vehHelicopterTiltFromControllerAxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromControllerAxes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v127);
  v128 = (float)(v204 / v125) * v127->current.value;
  v129 = DVARFLT_vehHelicopterTiltFromAcceleration;
  out.v[1] = v128 + out.v[1];
  if ( !DVARFLT_vehHelicopterTiltFromAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v129);
  v130 = v188;
  v131 = (float)(v196 / v188) * v129->current.value;
  v132 = DVARFLT_vehHelicopterTiltFromDeceleration;
  out.v[1] = v131 + out.v[1];
  if ( !DVARFLT_vehHelicopterTiltFromDeceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromDeceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v132);
  v133 = out.v[1] + (float)((float)(v191 / v130) * v132->current.value);
  out.v[1] = v133;
  if ( vehicle->phys.bodyVel.v[0] > 0.0 && COERCE_FLOAT(LODWORD(vehicle->phys.rotVel.v[1]) & _xmm) > 0.0 )
  {
    if ( v115 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2060, ASSERT_TYPE_ASSERT, "(maxSpeed[0] > 0)", (const char *)&queryFormat, "maxSpeed[0] > 0") )
      __debugbreak();
    v134 = DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
    v135 = vehicle->phys.bodyVel.v[0] / v115;
    if ( !DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v134);
    if ( v135 >= v134->current.value )
    {
      v138 = FLOAT_1_0;
    }
    else
    {
      v136 = DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
      if ( !DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v136);
      if ( v136->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2064, ASSERT_TYPE_SANITY, "( Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt, \"vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt\" ) > 0 )", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt ) > 0") )
        __debugbreak();
      v137 = DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
      if ( !DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v137);
      v138 = v135 / v137->current.value;
    }
    v139 = DVARFLT_vehHelicopterMaxYawRate;
    if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v139);
    if ( v139->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2072, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterMaxYawRate, \"vehHelicopterMaxYawRate\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterMaxYawRate ) > 0.0f") )
      __debugbreak();
    v140 = DVARFLT_vehHelicopterMaxYawRate;
    if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v140);
    v141 = vehicle->phys.rotVel.v[1] / v140->current.value;
    v142 = DVARFLT_vehHelicopterTiltFromFwdAndYaw;
    if ( !DVARFLT_vehHelicopterTiltFromFwdAndYaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromFwdAndYaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v142);
    v133 = out.v[1] - (float)((float)(v138 * v142->current.value) * v141);
    out.v[1] = v133;
  }
  v143 = I_fclamp(v133, -1.0, 1.0);
  v144 = DVARFLT_vehHelicopterTiltMomentum;
  out.v[1] = *(float *)&v143;
  out.v[2] = 0.0;
  v145 = (float)((float)(*(float *)&v143 * forward.m[1].v[0]) + (float)(out.v[0] * forward.m[0].v[0])) - vehicle->phys.worldTilt.v[0];
  v146 = (float)((float)(*(float *)&v143 * forward.m[1].v[1]) + (float)(out.v[0] * forward.m[0].v[1])) - vehicle->phys.worldTilt.v[1];
  if ( !DVARFLT_vehHelicopterTiltMomentum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltMomentum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v144);
  if ( v144->current.value == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2084, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterTiltMomentum, \"vehHelicopterTiltMomentum\" ))", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterTiltMomentum )") )
    __debugbreak();
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterTiltSpeed, "vehHelicopterTiltSpeed");
  v148 = *(float *)&Float_Internal_DebugName;
  v149 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterTiltMomentum, "vehHelicopterTiltMomentum");
  v = vehicle->phys.worldTiltVel.v;
  v151 = v148 / *(float *)&v149;
  v152 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterTiltMomentum, "vehHelicopterTiltMomentum");
  v153 = vehicle->phys.worldTiltVel.v[0];
  v154 = vehicle->phys.worldTiltVel.v[1];
  v155 = -1.0 / *(float *)&v152;
  DeltaTime = G_Vehicle_GetDeltaTime();
  v157 = (float)((float)((float)(v151 * v145) + (float)(v155 * v153)) * *(float *)&DeltaTime) + vehicle->phys.worldTiltVel.v[0];
  vehicle->phys.worldTiltVel.v[0] = v157;
  v158 = (float)((float)((float)(v155 * v154) + (float)(v146 * v151)) * *(float *)&DeltaTime) + vehicle->phys.worldTiltVel.v[1];
  vehicle->phys.worldTiltVel.v[1] = v158;
  v159 = G_Vehicle_GetDeltaTime();
  vehicle->phys.worldTilt.v[0] = (float)((float)((float)(v157 + v153) * 0.5) * *(float *)&v159) + vehicle->phys.worldTilt.v[0];
  vehicle->phys.worldTilt.v[1] = (float)((float)((float)(v158 + v154) * 0.5) * *(float *)&v159) + vehicle->phys.worldTilt.v[1];
  for ( i = 0; (int)i < 2; ++i )
  {
    if ( i >= 3 )
    {
      LODWORD(v179) = 3;
      LODWORD(v174) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
        __debugbreak();
    }
    if ( *(v - 3) <= 1.0 )
    {
      if ( i >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      if ( *(v - 3) < -1.0 )
      {
        if ( i >= 3 )
        {
          LODWORD(v179) = 3;
          LODWORD(v174) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
            __debugbreak();
        }
        *(v - 3) = -1.0;
        if ( i >= 3 )
        {
          LODWORD(v179) = 3;
          LODWORD(v174) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
            __debugbreak();
        }
        if ( *v < 0.0 )
        {
LABEL_326:
          if ( i >= 3 )
          {
            LODWORD(v179) = 3;
            LODWORD(v174) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
              __debugbreak();
          }
          *v = 0.0;
        }
      }
    }
    else
    {
      if ( i >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      *(v - 3) = 1.0;
      if ( i >= 3 )
      {
        LODWORD(v179) = 3;
        LODWORD(v174) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v174, v179) )
          __debugbreak();
      }
      if ( *v > 0.0 )
        goto LABEL_326;
    }
    ++v;
  }
  MatrixTransposeTransformVector43(&vehicle->phys.worldTilt, &forward, &out);
  v161 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterMaxPitch, "vehHelicopterMaxPitch");
  v162 = *(float *)&v161 * out.v[0];
  v163 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterPitchOffset, "vehHelicopterPitchOffset");
  outRotAccel->v[0] = *(float *)&v163 + v162;
  v164 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterMaxRoll, "vehHelicopterMaxRoll");
  outRotAccel->v[2] = *(float *)&v164 * out.v[1];
  v165 = (float)(vehicle->phys.bodyVel.v[0] * vehicle->phys.bodyVel.v[0]) + (float)(vehicle->phys.bodyVel.v[1] * vehicle->phys.bodyVel.v[1]);
  v166 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterHoverSpeedThreshold, "vehHelicopterHoverSpeedThreshold");
  v167 = *(float *)&v166;
  v168 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterHoverSpeedThreshold, "vehHelicopterHoverSpeedThreshold");
  if ( v165 < (float)(v167 * *(float *)&v168) )
  {
    v169 = DVARFLT_vehHelicopterHoverSpeedThreshold;
    if ( !DVARFLT_vehHelicopterHoverSpeedThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterHoverSpeedThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v169);
    if ( v169->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2119, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterHoverSpeedThreshold, \"vehHelicopterHoverSpeedThreshold\" ) > 0)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterHoverSpeedThreshold ) > 0") )
      __debugbreak();
    v170 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterHoverSpeedThreshold, "vehHelicopterHoverSpeedThreshold");
    v171 = *(float *)&v170 - fsqrt(v165);
    v172 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterHoverSpeedThreshold, "vehHelicopterHoverSpeedThreshold");
    v173 = v171 / *(float *)&v172;
    G_VehicleHeli_UpdateJitter(&vehicle->jitter);
    outRotAccel->v[0] = (float)(v173 * vehicle->jitter.jitterPos.v[0]) + outRotAccel->v[0];
    outRotAccel->v[2] = (float)(v173 * vehicle->jitter.jitterPos.v[2]) + outRotAccel->v[2];
  }
  if ( ((LODWORD(outBodyAccel->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outBodyAccel->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outBodyAccel->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2128, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] )") )
    __debugbreak();
  if ( ((LODWORD(outRotAccel->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outRotAccel->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outRotAccel->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2129, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] )") )
    __debugbreak();
}

/*
==============
G_VehicleHeli_CalcAccelFraction
==============
*/
float G_VehicleHeli_CalcAccelFraction(float accel, float vehDefAccel)
{
  double v2; 

  if ( vehDefAccel <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 234, ASSERT_TYPE_ASSERT, "(maxAccel > minAccel)", (const char *)&queryFormat, "maxAccel > minAccel") )
    __debugbreak();
  v2 = I_fclamp(accel, 0.0, vehDefAccel);
  return *(float *)&v2 / vehDefAccel;
}

/*
==============
G_VehicleHeli_CancelAiMove
==============
*/
void G_VehicleHeli_CancelAiMove(gentity_s *ent)
{
  Vehicle *vehicle; 
  const dvar_t *v3; 
  float v4; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float v9; 
  float v10; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  float v15; 
  float v16; 
  float v17; 
  char v18; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 54, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 55, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  vehicle = ent->vehicle;
  angles.v[0] = 0.0;
  angles.v[1] = vehicle->phys.angles.v[1];
  angles.v[2] = 0.0;
  AngleVectors(&angles, &forward, &right, &up);
  v3 = DVARFLT_vehHelicopterMaxPitch;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  if ( !DVARFLT_vehHelicopterMaxPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxPitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = FLOAT_1_0;
  if ( v3->current.value <= 0.0 )
  {
    value = FLOAT_1_0;
  }
  else
  {
    v5 = DVARFLT_vehHelicopterMaxPitch;
    if ( !DVARFLT_vehHelicopterMaxPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxPitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
  }
  v7 = DVARFLT_vehHelicopterMaxRoll;
  if ( !DVARFLT_vehHelicopterMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxRoll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.value > 0.0 )
  {
    v8 = DVARFLT_vehHelicopterMaxRoll;
    if ( !DVARFLT_vehHelicopterMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v4 = v8->current.value;
  }
  v9 = vehicle->phys.angles.v[0] / value;
  v10 = vehicle->phys.angles.v[2] / v4;
  if ( &v18 == (char *)&vehicle->phys.worldTilt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  vehicle->phys.worldTilt.v[0] = (float)((float)(v9 * forward.v[0]) + (float)(v10 * right.v[0])) + (float)(0.0 * up.v[0]);
  vehicle->phys.worldTilt.v[1] = (float)((float)(v9 * forward.v[1]) + (float)(v10 * right.v[1])) + (float)(0.0 * up.v[1]);
  vehicle->phys.worldTilt.v[2] = (float)((float)(v9 * forward.v[2]) + (float)(v10 * right.v[2])) + (float)(0.0 * up.v[2]);
  *(_QWORD *)vehicle->phys.worldTiltVel.v = 0i64;
  vehicle->phys.worldTiltVel.v[2] = 0.0;
}

/*
==============
G_VehicleHeli_CheckForPredictedCrash
==============
*/
void G_VehicleHeli_CheckForPredictedCrash(gentity_s *ent)
{
  const dvar_t *v2; 
  Vehicle *vehicle; 
  const float *v; 
  const dvar_t *v5; 
  float value; 
  int number; 
  int contentmask; 
  scrContext_t *v9; 
  vec3_t end; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2218, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2219, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  v2 = DVARFLT_vehHelicopterLookaheadTime;
  vehicle = ent->vehicle;
  if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.value != 0.0 )
  {
    v = vehicle->phys.vel.v;
    if ( vehicle->phys.vel.v[0] != 0.0 || vehicle->phys.vel.v[1] != 0.0 || vehicle->phys.vel.v[2] != 0.0 )
    {
      v5 = DVARFLT_vehHelicopterLookaheadTime;
      if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      value = v5->current.value;
      number = ent->s.number;
      contentmask = ent->clipmask;
      end.v[0] = (float)(value * *v) + vehicle->phys.origin.v[0];
      end.v[1] = (float)(value * vehicle->phys.vel.v[1]) + vehicle->phys.origin.v[1];
      end.v[2] = (float)(value * vehicle->phys.vel.v[2]) + vehicle->phys.origin.v[2];
      G_Main_TraceCapsule(&results, &vehicle->phys.origin, &end, &vehicle->phys.bounds, number, contentmask);
      if ( results.fraction < 1.0 )
      {
        v9 = ScriptContext_Server();
        Scr_AddVector(v9, results.normal.v);
        Scr_AddVector(v9, v);
        GScr_Notify(ent, scr_const.veh_predictedcollision, 2u);
      }
    }
  }
}

/*
==============
G_VehicleHeli_CheckHorizontalVelocityToGoal
==============
*/
void G_VehicleHeli_CheckHorizontalVelocityToGoal(HeliPathPos *pathPos, const vec2_t *vecToGoal, float accelMax, vec3_t *inOutAccelVec)
{
  float turningAbility; 
  float v7; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double DeltaTime; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v28; 
  double v30; 
  float v31; 
  float v32; 
  float v33; 

  turningAbility = FLOAT_1_0;
  v7 = fsqrt((float)(vecToGoal->v[0] * vecToGoal->v[0]) + (float)(vecToGoal->v[1] * vecToGoal->v[1]));
  if ( v7 >= 1.0 )
  {
    v10 = pathPos->vel.v[1];
    v11 = LODWORD(pathPos->vel.v[0]);
    v13 = v11;
    *(float *)&v13 = (float)(*(float *)&v11 * *(float *)&v11) + (float)(v10 * v10);
    v12 = v13;
    v14 = fsqrt(*(float *)&v13);
    if ( pathPos->stopAtGoal && (v15 = *(float *)&v11 + inOutAccelVec->v[0], v16 = v10 + inOutAccelVec->v[1], v17 = fsqrt((float)(v16 * v16) + (float)(v15 * v15)), v17 > 0.0) )
    {
      DeltaTime = G_Vehicle_GetDeltaTime();
      v19 = *(float *)&DeltaTime * (float)((float)(0.5 / v7) * *(float *)&v13);
      if ( v19 > COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - v14) & _xmm) )
      {
        v20 = (float)(v14 - v19) / v17;
        inOutAccelVec->v[0] = (float)(v15 * v20) - pathPos->vel.v[0];
        inOutAccelVec->v[1] = (float)(v16 * v20) - pathPos->vel.v[1];
      }
    }
    else
    {
      if ( v7 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 539, ASSERT_TYPE_ASSERT, "(horizontalDist)", (const char *)&queryFormat, "horizontalDist") )
        __debugbreak();
      v21 = vecToGoal->v[1];
      v22 = vecToGoal->v[0] * v10;
      LODWORD(v23) = COERCE_UNSIGNED_INT(v22 - (float)(v21 * *(float *)&v11)) & _xmm;
      if ( v23 > v7 )
      {
        v24 = (float)(v21 * pathPos->vel.v[1]) + (float)(vecToGoal->v[0] * pathPos->vel.v[0]);
        v26 = (float)((float)((float)(v24 * (float)(1.0 / v14)) * (float)(v24 * (float)(1.0 / v14))) + (float)((float)(v23 * (float)(1.0 / v14)) * (float)(v23 * (float)(1.0 / v14)))) * (float)(0.5 / (float)(v23 * (float)(1.0 / v14)));
        v25 = v26;
        if ( v26 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 551, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
          __debugbreak();
        if ( v26 > 1.0 && *(float *)&v12 > (float)(v26 * accelMax) )
        {
          if ( v26 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 561, ASSERT_TYPE_ASSERT, "(radius)", (const char *)&queryFormat, "radius") )
            __debugbreak();
          v28 = v12;
          *(float *)&v28 = *(float *)&v12 / v25;
          _XMM0 = v28;
          __asm { vminss  xmm6, xmm0, xmm10 }
          if ( !pathPos->stopAtGoal )
            turningAbility = pathPos->turningAbility;
          v30 = G_Vehicle_GetDeltaTime();
          v31 = *(float *)&v30 * (float)((float)(turningAbility * *(float *)&_XMM6) * (float)(1.0 / v14));
          v32 = COERCE_FLOAT(LODWORD(v31) ^ _xmm) * pathPos->vel.v[0];
          v33 = COERCE_FLOAT(LODWORD(v31) ^ _xmm) * pathPos->vel.v[1];
          pathPos->vel.v[0] = v32 + pathPos->vel.v[0];
          pathPos->vel.v[1] = v33 + pathPos->vel.v[1];
          inOutAccelVec->v[0] = v32 + inOutAccelVec->v[0];
          inOutAccelVec->v[1] = v33 + inOutAccelVec->v[1];
        }
      }
    }
  }
}

/*
==============
G_VehicleHeli_CmdScale
==============
*/
void G_VehicleHeli_CmdScale(const char *move, vec4_t *outFracs)
{
  int v4; 
  const char *v5; 
  vec4_t *v6; 
  float v7; 
  float v8; 
  int v9; 
  float v10; 
  int v11; 
  int v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  __int64 v24; 
  __int64 v25; 

  if ( !move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1769, ASSERT_TYPE_ASSERT, "(move)", (const char *)&queryFormat, "move") )
    __debugbreak();
  v4 = 0;
  v5 = move;
  v6 = outFracs;
  do
  {
    v7 = (float)*v5 * 0.0078125;
    if ( (unsigned int)v4 >= 4 )
    {
      LODWORD(v25) = 4;
      LODWORD(v24) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v6->v[0] = v7;
    v6 = (vec4_t *)((char *)v6 + 4);
    ++v4;
    ++v5;
  }
  while ( v4 < 4 );
  if ( *(_WORD *)move )
  {
    v8 = outFracs->v[1];
    v9 = *move;
    v10 = (float)(move[1] * move[1] + v9 * v9);
    v11 = abs8(v9);
    v12 = abs8(move[1]);
    v13 = fsqrt(v10);
    if ( v12 > v11 )
      v11 = v12;
    if ( v11 )
    {
      v14 = (float)v11 / v13;
      v8 = v8 * v14;
      outFracs->v[0] = v14 * outFracs->v[0];
      outFracs->v[1] = v8;
    }
    v15 = DVARFLT_vehHelicopterStrafeDeadzone;
    LODWORD(v16) = LODWORD(v8) & _xmm;
    if ( !DVARFLT_vehHelicopterStrafeDeadzone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterStrafeDeadzone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v16 < v15->current.value )
      outFracs->v[1] = 0.0;
    v17 = DVARBOOL_vehHelicopterScaleMovement;
    if ( !DVARBOOL_vehHelicopterScaleMovement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterScaleMovement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      LODWORD(v18) = LODWORD(outFracs->v[0]) & _xmm;
      LODWORD(v19) = LODWORD(outFracs->v[1]) & _xmm;
      if ( v18 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1800, ASSERT_TYPE_ASSERT, "(absAxis[0] <= 1.0f)", (const char *)&queryFormat, "absAxis[0] <= 1.0f") )
        __debugbreak();
      if ( v19 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1801, ASSERT_TYPE_ASSERT, "(absAxis[1] <= 1.0f)", (const char *)&queryFormat, "absAxis[1] <= 1.0f") )
        __debugbreak();
      if ( v18 <= v19 )
        outFracs->v[0] = (float)(1.0 - (float)(v19 - v18)) * outFracs->v[0];
      else
        outFracs->v[1] = (float)(1.0 - (float)(v18 - v19)) * outFracs->v[1];
    }
  }
  v20 = DVARFLT_vehHelicopterRightStickDeadzone;
  LODWORD(v21) = LODWORD(outFracs->v[2]) & _xmm;
  if ( !DVARFLT_vehHelicopterRightStickDeadzone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterRightStickDeadzone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v21 < v20->current.value )
    outFracs->v[2] = 0.0;
  v22 = DVARFLT_vehHelicopterRightStickDeadzone;
  LODWORD(v23) = LODWORD(outFracs->v[3]) & _xmm;
  if ( !DVARFLT_vehHelicopterRightStickDeadzone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterRightStickDeadzone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v23 < v22->current.value )
    outFracs->v[3] = 0.0;
}

/*
==============
G_VehicleHeli_ContactRotors
==============
*/
__int64 G_VehicleHeli_ContactRotors(const gentity_s *vehEnt, const gentity_s *pOther)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  bool v7; 
  bool v8; 
  float v9; 
  float v10; 
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v12; 
  BgVehiclePhysics *ObjectById; 
  double RPMForRotorIndex; 
  double v15; 
  float v16; 
  __int128 plRadius; 
  GHandler *Handler; 
  GHandler *v27; 
  vec3_t plCapStart; 
  vec3_t plCapEnd; 
  vec3_t planePos; 
  char v32[12]; 
  vec3_t v33; 
  vec3_t planeNormal; 

  if ( !vehEnt )
    return 0i64;
  if ( !pOther )
    return 0i64;
  vehicle = vehEnt->vehicle;
  if ( !vehicle )
    return 0i64;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2439, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( pOther->s.eType != ET_PLAYER )
    return 0i64;
  v7 = ServerDef->vehiclePhysicsDef.physicsEnabled && ServerDef->type == VEH_AIRCRAFT && ServerDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_ROTARYWING && BGVehicles::PhysicsIsValid(vehicle->physicsVehicle);
  v8 = 0;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_vehLegacyHeliRotorsDamage, "vehLegacyHeliRotorsDamage") && vehEnt->s.eType == ET_HELICOPTER )
  {
    _XMM0 = LODWORD(FLOAT_0_001);
    if ( ServerDef->dlcFloat[3] > 0.001 )
      v8 = 1;
  }
  if ( !v7 && !v8 )
    return 0i64;
  v9 = FLOAT_100000_0;
  v10 = FLOAT_100000_0;
  if ( v7 )
  {
    VehicleSystem = GVehicles::GetVehicleSystem();
    v12 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v12, vehicle->physicsVehicle);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2470, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( ObjectById->m_vehicleGameProfile != VEH_GAMEPROFILE_ROTARYWING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2471, ASSERT_TYPE_ASSERT, "(vehObj->GetGameProfile() == VEH_GAMEPROFILE_ROTARYWING)", (const char *)&queryFormat, "vehObj->GetGameProfile() == VEH_GAMEPROFILE_ROTARYWING") )
      __debugbreak();
    if ( *((_BYTE *)&ObjectById[3].m_controls.DefaultPolicy + 2) < 2u )
      return 0i64;
    RPMForRotorIndex = HelicopterDynamics::GetRPMForRotorIndex((HelicopterDynamics *)ObjectById, 0);
    v9 = *(float *)&RPMForRotorIndex;
    v15 = HelicopterDynamics::GetRPMForRotorIndex((HelicopterDynamics *)ObjectById, 1);
    v10 = *(float *)&v15;
  }
  v16 = pOther->r.currentOrigin.v[2];
  *(_QWORD *)plCapStart.v = *(_QWORD *)pOther->r.currentOrigin.v;
  plCapStart.v[2] = v16;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerCapHeight, "bg_vehHeliPlayerCapHeight");
  __asm { vmaxss  xmm3, xmm0, xmm8 }
  plCapEnd.v[0] = (float)(*(float *)&_XMM3 * 0.0) + plCapStart.v[0];
  *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM3 + 1);
  plCapEnd.v[2] = (float)(*(float *)&_XMM3 * 1.0) + plCapStart.v[2];
  plCapEnd.v[1] = (float)(*(float *)&_XMM3 * 0.0) + plCapStart.v[1];
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerCapRadius, "bg_vehHeliPlayerCapRadius");
  __asm { vmaxss  xmm10, xmm0, xmm8 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerMinRPMMain, "bg_vehHeliPlayerMinRPMMain");
  _XMM9 = 0i64;
  __asm { vmaxss  xmm0, xmm0, xmm9 }
  if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= *(float *)&_XMM0 )
  {
    Handler = GHandler::getHandler();
    if ( Handler->GetWorldTagMatrix(Handler, vehEnt->s.number, (const scr_string_t)scr_const.main_rotor_jnt, (tmat33_t<vec3_t> *)v32, &planePos) )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliBladesRadiusMain, "bg_vehHeliBladesRadiusMain");
      _XMM2 = _XMM0;
      if ( !v7 )
      {
        __asm
        {
          vcmpltss xmm0, xmm9, xmm1
          vblendvps xmm2, xmm2, xmm1, xmm0
        }
      }
      __asm { vmaxss  xmm2, xmm2, xmm8; bladesRad }
      if ( G_VehicleHeli_RotorContactPlayer(&planePos, &planeNormal, *(float *)&_XMM2, &plCapStart, &plCapEnd, *(float *)&plRadius) )
        return 1i64;
    }
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerMinRPMTail, "bg_vehHeliPlayerMinRPMTail");
  __asm { vmaxss  xmm0, xmm0, xmm9 }
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) >= *(float *)&_XMM0 )
  {
    v27 = GHandler::getHandler();
    if ( v27->GetWorldTagMatrix(v27, vehEnt->s.number, (const scr_string_t)scr_const.tail_rotor_jnt, (tmat33_t<vec3_t> *)v32, &planePos) )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliBladesRadiusTail, "bg_vehHeliBladesRadiusTail");
      __asm { vmaxss  xmm2, xmm0, xmm8; bladesRad }
      if ( G_VehicleHeli_RotorContactPlayer(&planePos, &v33, *(float *)&_XMM2, &plCapStart, &plCapEnd, *(float *)&plRadius) )
        return 2i64;
    }
  }
  return 0i64;
}

/*
==============
G_VehicleHeli_GetHoverAccel
==============
*/
float G_VehicleHeli_GetHoverAccel(const HeliPathPos *pathPos)
{
  if ( pathPos->ent->vehicle->useDroneLogic )
    return FLOAT_22_879999;
  else
    return pathPos->hover.hoverAccel;
}

/*
==============
G_VehicleHeli_GetHoverDecel
==============
*/
float G_VehicleHeli_GetHoverDecel(const HeliPathPos *pathPos)
{
  if ( pathPos->ent->vehicle->useDroneLogic )
    return FLOAT_22_879999;
  else
    return pathPos->hover.hoverAccel * 0.5;
}

/*
==============
G_VehicleHeli_GetHoverSpeed
==============
*/
float G_VehicleHeli_GetHoverSpeed(const HeliPathPos *pathPos)
{
  if ( pathPos->ent->vehicle->useDroneLogic )
    return FLOAT_26_4;
  else
    return pathPos->hover.hoverSpeed;
}

/*
==============
G_VehicleHeli_GetNewSpeedAndAccel
==============
*/
void G_VehicleHeli_GetNewSpeedAndAccel(const HeliPathPos *pathPos, float dt, int hovering, float *newSpeed, float *accelMax)
{
  float hoverAccel; 
  float hoverSpeed; 
  float manualDecel; 
  double v11; 

  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 721, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( hovering )
  {
    if ( pathPos->ent->vehicle->useDroneLogic )
    {
      hoverAccel = FLOAT_22_879999;
      hoverSpeed = FLOAT_26_4;
      manualDecel = FLOAT_22_879999;
    }
    else
    {
      hoverAccel = pathPos->hover.hoverAccel;
      manualDecel = hoverAccel * 0.5;
      hoverSpeed = pathPos->hover.hoverSpeed;
    }
  }
  else
  {
    hoverSpeed = pathPos->manualSpeed;
    hoverAccel = pathPos->manualAccel;
    manualDecel = pathPos->manualDecel;
  }
  if ( pathPos->stopping )
  {
    hoverSpeed = 0.0;
  }
  else
  {
    if ( hoverSpeed < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 743, ASSERT_TYPE_ASSERT, "(speed >= 0.0f)", (const char *)&queryFormat, "speed >= 0.0f") )
      __debugbreak();
    manualDecel = hoverAccel;
  }
  v11 = Vehicle_AccelerateSpeed(pathPos->speed, hoverSpeed, manualDecel, dt);
  *newSpeed = *(float *)&v11;
  *accelMax = manualDecel;
}

/*
==============
G_VehicleHeli_IsHovering
==============
*/
bool G_VehicleHeli_IsHovering(const HeliPathPos *pathPos)
{
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 78, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  return pathPos->moveState == VEH_MOVESTATE_HOVER;
}

/*
==============
G_VehicleHeli_PathClearGoalYaw
==============
*/
void G_VehicleHeli_PathClearGoalYaw(HeliPathPos *pathPos)
{
  pathPos->goalYaw = 0.0;
  pathPos->hasGoalYaw = 0;
}

/*
==============
G_VehicleHeli_PathClearTargetYaw
==============
*/
void G_VehicleHeli_PathClearTargetYaw(HeliPathPos *pathPos)
{
  pathPos->targetYaw = 0.0;
  pathPos->hasTargetYaw = 0;
}

/*
==============
G_VehicleHeli_PathFromVeh
==============
*/
void G_VehicleHeli_PathFromVeh(HeliPathPos *pathPos, const Vehicle *veh)
{
  gentity_s *v4; 

  if ( EntHandle::isDefined(&veh->lookAtEnt) )
  {
    v4 = EntHandle::ent(&veh->lookAtEnt);
    pathPos->hasLookAtEnt = 1;
    pathPos->lookAtEntOrigin = v4->r.currentOrigin;
  }
  else
  {
    pathPos->hasLookAtEnt = 0;
  }
  pathPos->manualAccel = veh->manualAccel;
  pathPos->manualDecel = veh->manualDecel;
  pathPos->manualSpeed = veh->manualSpeed;
  pathPos->vehDefAccel = G_Vehicle_GetServerDef(veh->defIndex)->accel;
  pathPos->origin.v[0] = veh->phys.origin.v[0];
  pathPos->origin.v[1] = veh->phys.origin.v[1];
  pathPos->origin.v[2] = veh->phys.origin.v[2];
  pathPos->angles.v[0] = veh->phys.angles.v[0];
  pathPos->angles.v[1] = veh->phys.angles.v[1];
  pathPos->angles.v[2] = veh->phys.angles.v[2];
  pathPos->vel.v[0] = veh->phys.vel.v[0];
  pathPos->vel.v[1] = veh->phys.vel.v[1];
  pathPos->vel.v[2] = veh->phys.vel.v[2];
  pathPos->rotVel.v[0] = veh->phys.rotVel.v[0];
  pathPos->rotVel.v[1] = veh->phys.rotVel.v[1];
  pathPos->rotVel.v[2] = veh->phys.rotVel.v[2];
  pathPos->accel.v[0] = veh->phys.accel.v[0];
  pathPos->accel.v[1] = veh->phys.accel.v[1];
  pathPos->accel.v[2] = veh->phys.accel.v[2];
  pathPos->speed = veh->speed;
  pathPos->ent = veh->ent;
}

/*
==============
G_VehicleHeli_PathSetAirResistance
==============
*/

void __fastcall G_VehicleHeli_PathSetAirResistance(HeliPathPos *pathPos, double speed)
{
  __asm { vmaxss  xmm0, xmm1, cs:__real@3f800000 }
  pathPos->maxDragSpeed = *(float *)&_XMM0 * 17.6;
}

/*
==============
G_VehicleHeli_PathSetGoal
==============
*/
void G_VehicleHeli_PathSetGoal(HeliPathPos *pathPos, const HeliPathNodeData *node)
{
  __int128 speed_low; 
  float v10; 
  __int128 v14; 
  float decel; 
  float v20; 
  float v21; 
  int v22; 
  bool goalYawDefined; 

  if ( node->setAirResistance )
  {
    _XMM0 = LODWORD(node->airResistance);
    __asm { vmaxss  xmm1, xmm0, cs:__real@3f800000 }
    pathPos->maxDragSpeed = *(float *)&_XMM1 * 17.6;
  }
  if ( node->setSpeed )
  {
    if ( node->hasAccel )
    {
      *(float *)&_XMM0 = node->accel;
    }
    else
    {
      speed_low = LODWORD(node->speed);
      *(float *)&speed_low = node->speed * 0.25;
      _XMM1 = speed_low;
      __asm
      {
        vmaxss  xmm2, xmm1, cs:__real@41700000
        vminss  xmm0, xmm2, cs:__real@41c80000
      }
    }
    v10 = *(float *)&_XMM0 * 17.6;
    _XMM0 = LODWORD(node->speed);
    if ( node->hasDecel )
    {
      __asm { vmaxss  xmm0, xmm0, xmm5 }
      v14 = _XMM0;
      *(float *)&v14 = *(float *)&_XMM0 * 17.6;
      _XMM4 = v14;
      decel = node->decel;
      pathPos->manualSpeed = *(float *)&_XMM0 * 17.6;
      pathPos->manualAccel = v10;
      if ( v10 <= 0.0 )
        pathPos->manualAccel = 17.6;
      if ( *(float *)&v14 > pathPos->speed )
      {
        _XMM0 = LODWORD(pathPos->manualAccel);
        __asm
        {
          vcmpltss xmm1, xmm4, xmm2
          vblendvps xmm1, xmm0, xmm4, xmm1
        }
        pathPos->manualAccel = *(float *)&_XMM1;
      }
      pathPos->manualDecel = decel * 17.6;
      if ( (float)(decel * 17.6) <= 0.0 )
        pathPos->manualDecel = 17.6;
    }
    else
    {
      __asm { vmaxss  xmm0, xmm0, xmm1 }
      v20 = *(float *)&_XMM0 * 17.6;
      pathPos->manualSpeed = *(float *)&_XMM0 * 17.6;
      pathPos->manualAccel = v10;
      if ( v10 <= 0.0 )
      {
        pathPos->manualAccel = 17.6;
        v10 = FLOAT_17_6;
      }
      v21 = v10;
      if ( v20 > pathPos->speed && v20 < v10 )
      {
        pathPos->manualAccel = v20;
        v21 = v20;
      }
      pathPos->manualDecel = v21 * 0.5;
    }
  }
  if ( node->stopNode || node->unload || node->flagWait || node->endOfPath || (v22 = 0, node->hasDelay) )
    v22 = 1;
  goalYawDefined = node->goalYawDefined;
  if ( node->setGoalYaw )
  {
    if ( !goalYawDefined && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1228, ASSERT_TYPE_ASSERT, "(node->goalYawDefined)", (const char *)&queryFormat, "node->goalYawDefined") )
      __debugbreak();
    pathPos->targetYaw = 0.0;
    pathPos->hasTargetYaw = 0;
    pathPos->goalYaw = node->yaw;
    pathPos->hasGoalYaw = 1;
  }
  else if ( goalYawDefined || node->angleVehicleDefined )
  {
    pathPos->goalYaw = 0.0;
    pathPos->hasGoalYaw = 0;
    pathPos->targetYaw = node->yaw;
    pathPos->hasTargetYaw = 1;
  }
  else
  {
    *(_QWORD *)&pathPos->goalYaw = 0i64;
    *(_QWORD *)&pathPos->hasGoalYaw = 0i64;
  }
  pathPos->goalPosition.v[0] = node->origin.v[0];
  pathPos->goalPosition.v[1] = node->origin.v[1];
  pathPos->goalPosition.v[2] = node->origin.v[2];
  pathPos->stopAtGoal = v22;
  pathPos->stopping = 0;
  pathPos->moveState = VEH_MOVESTATE_MOVE;
}

/*
==============
G_VehicleHeli_PathSetGoalPos
==============
*/
void G_VehicleHeli_PathSetGoalPos(HeliPathPos *pathPos, const vec3_t *goal, bool stop)
{
  pathPos->goalPosition = *goal;
  pathPos->stopAtGoal = stop;
  pathPos->moveState = VEH_MOVESTATE_MOVE;
  pathPos->stopping = 0;
}

/*
==============
G_VehicleHeli_PathSetGoalYaw
==============
*/
void G_VehicleHeli_PathSetGoalYaw(HeliPathPos *pathPos, float yaw)
{
  pathPos->goalYaw = yaw;
  pathPos->hasGoalYaw = 1;
}

/*
==============
G_VehicleHeli_PathSetSpeed
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeed(HeliPathPos *pathPos, double speed, float accel)
{
  __int128 v5; 

  __asm { vmaxss  xmm0, xmm1, xmm3 }
  v5 = _XMM0;
  *(float *)&v5 = *(float *)&_XMM0 * 17.6;
  _XMM4 = v5;
  pathPos->manualSpeed = *(float *)&_XMM0 * 17.6;
  pathPos->manualAccel = accel * 17.6;
  if ( (float)(accel * 17.6) <= 0.0 )
    pathPos->manualAccel = 17.6;
  if ( *(float *)&v5 > pathPos->speed )
  {
    _XMM0 = LODWORD(pathPos->manualAccel);
    __asm
    {
      vcmpltss xmm1, xmm4, xmm1
      vblendvps xmm1, xmm0, xmm4, xmm1
    }
    pathPos->manualAccel = *(float *)&_XMM1;
  }
}

/*
==============
G_VehicleHeli_PathSetSpeedAccel
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeedAccel(HeliPathPos *pathPos, double speed, float accel)
{
  float v4; 
  float v5; 

  __asm { vmaxss  xmm0, xmm1, xmm3 }
  v4 = *(float *)&_XMM0 * 17.6;
  v5 = accel * 17.6;
  pathPos->manualSpeed = v4;
  pathPos->manualAccel = accel * 17.6;
  if ( (float)(accel * 17.6) <= 0.0 )
  {
    pathPos->manualAccel = 17.6;
    v5 = FLOAT_17_6;
  }
  if ( v4 <= pathPos->speed || v4 >= v5 )
  {
    pathPos->manualDecel = v5 * 0.5;
  }
  else
  {
    pathPos->manualDecel = v4 * 0.5;
    pathPos->manualAccel = v4;
  }
}

/*
==============
G_VehicleHeli_PathSetSpeedAccelDecel
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeedAccelDecel(HeliPathPos *pathPos, double speed, float accel, double decel)
{
  __int128 v6; 
  __int128 v11; 

  __asm { vmaxss  xmm0, xmm1, xmm6 }
  v6 = _XMM0;
  *(float *)&v6 = *(float *)&_XMM0 * 17.6;
  _XMM5 = v6;
  pathPos->manualSpeed = *(float *)&_XMM0 * 17.6;
  pathPos->manualAccel = accel * 17.6;
  if ( (float)(accel * 17.6) <= 0.0 )
    pathPos->manualAccel = 17.6;
  if ( *(float *)&v6 > pathPos->speed )
  {
    _XMM0 = LODWORD(pathPos->manualAccel);
    __asm
    {
      vcmpltss xmm1, xmm5, xmm1
      vblendvps xmm1, xmm0, xmm5, xmm1
    }
    pathPos->manualAccel = *(float *)&_XMM1;
  }
  v11 = *(_OWORD *)&decel;
  *(float *)&v11 = *(float *)&decel * 17.6;
  _XMM1 = v11;
  __asm
  {
    vcmpless xmm0, xmm1, xmm6
    vblendvps xmm0, xmm1, xmm4, xmm0
  }
  pathPos->manualDecel = *(float *)&_XMM0;
}

/*
==============
G_VehicleHeli_PathSetTargetYaw
==============
*/
void G_VehicleHeli_PathSetTargetYaw(HeliPathPos *pathPos, float yaw)
{
  pathPos->targetYaw = yaw;
  pathPos->hasTargetYaw = 1;
}

/*
==============
G_VehicleHeli_PathSetYawSpeed
==============
*/
void G_VehicleHeli_PathSetYawSpeed(HeliPathPos *pathPos, float speed, float accel, float decel, float overshootPercent)
{
  double v6; 

  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1138, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( speed < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1139, ASSERT_TYPE_ASSERT, "(speed >= 0)", (const char *)&queryFormat, "speed >= 0") )
    __debugbreak();
  if ( accel < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1140, ASSERT_TYPE_ASSERT, "(accel >= 0)", (const char *)&queryFormat, "accel >= 0") )
    __debugbreak();
  pathPos->maxAngleVel.v[1] = speed;
  pathPos->yawAccel = accel;
  pathPos->yawDecel = decel;
  v6 = I_fclamp(overshootPercent, 0.0, 1.0);
  pathPos->yawOverShoot = *(float *)&v6;
}

/*
==============
G_VehicleHeli_PathSetYawSpeedMode
==============
*/
void G_VehicleHeli_PathSetYawSpeedMode(HeliPathPos *pathPos, const char *yawMode)
{
  float v4; 
  float v5; 
  float v6; 

  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1151, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !yawMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1152, ASSERT_TYPE_ASSERT, "(yawMode)", (const char *)&queryFormat, "yawMode") )
    __debugbreak();
  if ( I_strcmp(yawMode, "instant") )
  {
    if ( I_strcmp(yawMode, "faster") )
    {
      if ( I_strcmp(yawMode, "fast") && !I_strcmp(yawMode, "slow") )
      {
        v4 = FLOAT_15_0;
        v5 = FLOAT_5_0;
        v6 = FLOAT_15_0;
        goto LABEL_16;
      }
      v5 = FLOAT_45_0;
      v4 = FLOAT_90_0;
    }
    else
    {
      v4 = FLOAT_180_0;
      v5 = FLOAT_90_0;
    }
    v6 = FLOAT_22_5;
    goto LABEL_16;
  }
  v4 = FLOAT_290_0;
  v5 = FLOAT_245_0;
  v6 = FLOAT_222_5;
LABEL_16:
  G_VehicleHeli_PathSetYawSpeed(pathPos, v4, v5, v6, 0.0);
}

/*
==============
G_VehicleHeli_RotorContactPlayer
==============
*/
bool G_VehicleHeli_RotorContactPlayer(const vec3_t *planePos, const vec3_t *planeNormal, float bladesRad, const vec3_t *plCapStart, const vec3_t *plCapEnd, float plRadius)
{
  __int128 v9; 
  double v13; 

  if ( bladesRad <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2391, ASSERT_TYPE_ASSERT, "(bladesRad > 0.0f)", (const char *)&queryFormat, "bladesRad > 0.0f") )
    __debugbreak();
  if ( plRadius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2392, ASSERT_TYPE_ASSERT, "(plRadius > 0.0f)", (const char *)&queryFormat, "plRadius > 0.0f") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(planeNormal->v[0] * planeNormal->v[0]) + (float)(planeNormal->v[1] * planeNormal->v[1])) + (float)(planeNormal->v[2] * planeNormal->v[2])) - 1.0) & _xmm) >= 0.00019999999 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2393, ASSERT_TYPE_ASSERT, "(Vec3IsNormalizedEpsilon( planeNormal, 0.0001f ))", (const char *)&queryFormat, "Vec3IsNormalizedEpsilon( planeNormal, 0.0001f )") )
    __debugbreak();
  v9 = LODWORD(plCapEnd->v[1]);
  *(float *)&v9 = (float)((float)((float)(plCapEnd->v[1] - planePos->v[1]) * planeNormal->v[1]) + (float)((float)(plCapEnd->v[0] - planePos->v[0]) * planeNormal->v[0])) + (float)((float)(plCapEnd->v[2] - planePos->v[2]) * planeNormal->v[2]);
  if ( (float)(*(float *)&v9 * (float)((float)((float)((float)(plCapStart->v[1] - planePos->v[1]) * planeNormal->v[1]) + (float)((float)(plCapStart->v[0] - planePos->v[0]) * planeNormal->v[0])) + (float)((float)(plCapStart->v[2] - planePos->v[2]) * planeNormal->v[2]))) > 0.0 )
  {
    _XMM3 = v9 & _xmm;
    __asm { vminss  xmm0, xmm3, xmm12 }
    if ( *(float *)&_XMM0 > plRadius )
      return 0;
  }
  v13 = PointToLineSegmentDistSq(planePos, plCapStart, plCapEnd);
  return (float)((float)(bladesRad + plRadius) * (float)(bladesRad + plRadius)) > *(float *)&v13;
}

/*
==============
G_VehicleHeli_SoftenCollisions
==============
*/
void G_VehicleHeli_SoftenCollisions(gentity_s *ent, vec3_t *inOutWorldAccel)
{
  Vehicle *vehicle; 
  float v5; 
  const dvar_t *v6; 
  float value; 
  float v8; 
  Vehicle *v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  float v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  double DeltaTime; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2170, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2171, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  vehicle = ent->vehicle;
  v5 = vehicle->phys.vel.v[0];
  if ( v5 != 0.0 || vehicle->phys.vel.v[1] != 0.0 || vehicle->phys.vel.v[2] != 0.0 )
  {
    v6 = DVARFLT_vehHelicopterLookaheadTime;
    v40 = vehicle->phys.vel.v[1];
    v41 = vehicle->phys.vel.v[2];
    if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v8 = (float)(1000.0 / (float)level.frameDuration) * value;
    vehicle->phys.vel.v[0] = v8 * vehicle->phys.vel.v[0];
    vehicle->phys.vel.v[1] = v8 * vehicle->phys.vel.v[1];
    vehicle->phys.vel.v[2] = v8 * vehicle->phys.vel.v[2];
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v9 = ent->vehicle;
    v10 = v9->phys.origin.v[0];
    v11 = (float)((float)((float)level.frameDuration * vehicle->phys.vel.v[0]) * 0.001) + vehicle->phys.origin.v[0];
    v12 = (float)((float)((float)level.frameDuration * vehicle->phys.vel.v[1]) * 0.001) + vehicle->phys.origin.v[1];
    v13 = (float)((float)((float)level.frameDuration * vehicle->phys.vel.v[2]) * 0.001) + vehicle->phys.origin.v[2];
    v35 = v9->phys.origin.v[1];
    v36 = v9->phys.origin.v[2];
    v37 = v9->phys.vel.v[0];
    v38 = v9->phys.vel.v[1];
    v39 = v9->phys.vel.v[2];
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v14 = G_Vehicle_SlideMove(ent, 0, (float)level.frameDuration * 0.001, NULL);
    v15 = v9->phys.origin.v[0];
    v16 = v9->phys.origin.v[1];
    v17 = v9->phys.origin.v[2];
    v9->phys.origin.v[0] = v10;
    v9->phys.origin.v[1] = v35;
    v9->phys.origin.v[2] = v36;
    v9->phys.vel.v[0] = v37;
    v9->phys.vel.v[1] = v38;
    v9->phys.vel.v[2] = v39;
    vehicle->phys.vel.v[1] = v40;
    vehicle->phys.vel.v[2] = v41;
    vehicle->phys.vel.v[0] = v5;
    if ( v14 )
    {
      v18 = v13 - v17;
      v19 = v11 - v15;
      v20 = v12 - v16;
      v21 = (float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v18 * v18);
      if ( v21 >= 1.0 )
      {
        v22 = inOutWorldAccel->v[1];
        v23 = inOutWorldAccel->v[2];
        v24 = (float)((float)((float)(v22 * v20) + (float)(inOutWorldAccel->v[0] * v19)) + (float)(v23 * v18)) / v21;
        if ( v24 > 0.0 )
        {
          inOutWorldAccel->v[0] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v19) + inOutWorldAccel->v[0];
          inOutWorldAccel->v[2] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v18) + v23;
          inOutWorldAccel->v[1] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v20) + v22;
        }
        v25 = DVARFLT_vehHelicopterLookaheadTime;
        v26 = v15 - vehicle->phys.origin.v[0];
        v27 = v16 - vehicle->phys.origin.v[1];
        v28 = v17 - vehicle->phys.origin.v[2];
        if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        if ( v25->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2204, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterLookaheadTime, \"vehHelicopterLookaheadTime\" ) > 0)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterLookaheadTime ) > 0") )
          __debugbreak();
        v29 = DVARFLT_vehHelicopterLookaheadTime;
        if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v30 = 1.0 / v29->current.value;
        v31 = vehicle->phys.vel.v[0];
        v32 = vehicle->phys.vel.v[1];
        v33 = vehicle->phys.vel.v[2];
        DeltaTime = G_Vehicle_GetDeltaTime();
        inOutWorldAccel->v[0] = (float)((float)((float)(v30 * v26) - v31) * (float)(1.0 / *(float *)&DeltaTime)) + inOutWorldAccel->v[0];
        inOutWorldAccel->v[1] = (float)((float)((float)(v30 * v27) - v32) * (float)(1.0 / *(float *)&DeltaTime)) + inOutWorldAccel->v[1];
        inOutWorldAccel->v[2] = (float)((float)((float)(v30 * v28) - v33) * (float)(1.0 / *(float *)&DeltaTime)) + inOutWorldAccel->v[2];
      }
    }
  }
}

/*
==============
G_VehicleHeli_TouchTriggers
==============
*/
void G_VehicleHeli_TouchTriggers(gentity_s *entity)
{
  signed __int64 v1; 
  void *v2; 
  double v4; 
  float v5; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  Bounds boundsToUse; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  unsigned __int16 touch[2048]; 

  v2 = alloca(v1);
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 800, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v4 = *(double *)&entity->r.absBox.halfSize.y;
  *(_OWORD *)boundsToUse.midPoint.v = *(_OWORD *)entity->r.absBox.midPoint.v;
  *(double *)&boundsToUse.halfSize.y = v4;
  v5 = _mm_shuffle_ps(*(__m128 *)boundsToUse.midPoint.v, *(__m128 *)boundsToUse.midPoint.v, 255).m128_f32[0] + 20.0;
  aabbMin.v[0] = boundsToUse.midPoint.v[0] - v5;
  aabbMin.v[1] = boundsToUse.midPoint.v[1] - (float)(*(float *)&v4 + 20.0);
  collectedEnts.countMax = 2048;
  collectedEnts.ids = touch;
  aabbMin.v[2] = boundsToUse.midPoint.v[2] - (float)(boundsToUse.halfSize.v[2] + 20.0);
  aabbMax.v[0] = v5 + boundsToUse.midPoint.v[0];
  collectedEnts.count = 0;
  aabbMax.v[1] = (float)(*(float *)&v4 + 20.0) + boundsToUse.midPoint.v[1];
  boundsToUse.halfSize.v[0] = v5;
  boundsToUse.halfSize.v[1] = *(float *)&v4 + 20.0;
  boundsToUse.halfSize.v[2] = boundsToUse.halfSize.v[2] + 20.0;
  aabbMax.v[2] = boundsToUse.halfSize.v[2] + boundsToUse.midPoint.v[2];
  PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 1078198280, &collectedEnts, NULL);
  if ( collectedEnts.count >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 812, ASSERT_TYPE_ASSERT, "(results.count < ( 2048 ))", (const char *)&queryFormat, "results.count < MAX_GENTITIES") )
    __debugbreak();
  if ( collectedEnts.count )
  {
    if ( boundsToUse.halfSize.v[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
      __debugbreak();
    if ( boundsToUse.halfSize.v[1] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
      __debugbreak();
    if ( boundsToUse.halfSize.v[2] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
      __debugbreak();
    _XMM0 = LODWORD(boundsToUse.halfSize.v[1]);
    __asm { vmaxss  xmm1, xmm0, dword ptr [rsp+10B0h+boundsToUse.halfSize] }
    _XMM0 = LODWORD(boundsToUse.halfSize.v[2]);
    boundsToUse.halfSize.v[0] = *(float *)&_XMM1;
    boundsToUse.halfSize.v[1] = *(float *)&_XMM1;
    __asm { vmaxss  xmm1, xmm0, xmm1 }
    boundsToUse.halfSize.v[2] = *(float *)&_XMM1;
    G_VehicleHeli_TouchTriggers(entity, &boundsToUse, touch, collectedEnts.count);
  }
}

/*
==============
G_VehicleHeli_TouchTriggers
==============
*/
void G_VehicleHeli_TouchTriggers(gentity_s *ent, Bounds *boundsToUse, unsigned __int16 *touch, unsigned int touchCount)
{
  __int64 v4; 
  const GEntityHandlerList *EntHandlerList; 
  __int64 v9; 
  __int64 v10; 
  const gentity_s *v11; 
  const GEntityHandlerList *v12; 
  unsigned int Instance; 
  const scrContext_t *v14; 
  void (__fastcall *v15)(gentity_s *, gentity_s *, int); 
  __int64 v16; 
  __int64 v17; 

  v4 = touchCount;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 758, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntHandlerList = G_Main_GetEntHandlerList(ent);
  if ( (_DWORD)v4 )
  {
    v9 = v4;
    do
    {
      v10 = *touch;
      if ( (unsigned int)v10 >= 0x800 )
      {
        LODWORD(v17) = 2048;
        LODWORD(v16) = *touch;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v10] )
      {
        v11 = &g_entities[*touch];
        v12 = G_Main_GetEntHandlerList(v11);
        if ( v12->touch || EntHandlerList->touch )
        {
          Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v11);
          if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, boundsToUse, Instance, v11) )
          {
            v14 = ScriptContext_Server();
            if ( Scr_IsSystemActive(v14, 1u) )
            {
              GScr_AddEntity(ent);
              GScr_Notify(v11, scr_const.touch, 1u);
              GScr_AddEntity(v11);
              GScr_Notify(ent, scr_const.touch, 1u);
            }
            v15 = v12->touch;
            if ( v15 )
              v15((gentity_s *)v11, ent, 1);
          }
        }
      }
      ++touch;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
G_VehicleHeli_UpdateAiMove
==============
*/
void G_VehicleHeli_UpdateAiMove(Vehicle *veh)
{
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->UpdateHelicopterAIMove(GVehicles::ms_gVehiclesSystem, veh);
}

/*
==============
G_VehicleHeli_UpdateAiMoveInternal
==============
*/
void G_VehicleHeli_UpdateAiMoveInternal(HeliPathPos *pathPos)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  HelicopterMoveState moveState; 
  __int32 v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float hoverRadius; 
  int v13; 
  vec3_t *p_goalPos; 
  double v15; 
  float v16; 
  float v17; 
  float v18; 
  gentity_s *ent; 
  gentity_s *v20; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  __int64 v23; 
  __int64 v24; 
  vec3_t goalPos; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 

  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1043, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  moveState = pathPos->moveState;
  v28 = v1;
  v6 = moveState - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v7 = pathPos->goalPosition.v[0];
      v8 = pathPos->goalPosition.v[1];
      v27 = v2;
      v9 = v8 + pathPos->hover.hoverGoalPos.v[1];
      v26 = v3;
      v10 = v7 + pathPos->hover.hoverGoalPos.v[0];
      goalPos.v[2] = pathPos->goalPosition.v[2] + pathPos->hover.hoverGoalPos.v[2];
      v11 = goalPos.v[2];
      goalPos.v[0] = v10;
      goalPos.v[1] = v9;
      G_VehicleHeli_UpdateMoveToGoal(pathPos, &goalPos);
      hoverRadius = pathPos->hover.hoverRadius;
      if ( (float)((float)((float)((float)(v9 - pathPos->origin.v[1]) * (float)(v9 - pathPos->origin.v[1])) + (float)((float)(v10 - pathPos->origin.v[0]) * (float)(v10 - pathPos->origin.v[0]))) + (float)((float)(v11 - pathPos->origin.v[2]) * (float)(v11 - pathPos->origin.v[2]))) < (float)((float)(hoverRadius * hoverRadius) * 0.0625) )
      {
        if ( hoverRadius == 0.0 )
        {
          *(_QWORD *)pathPos->hover.hoverGoalPos.v = 0i64;
          pathPos->hover.hoverGoalPos.v[2] = 0.0;
        }
        else
        {
          v13 = 0;
          p_goalPos = &goalPos;
          do
          {
            v15 = G_flrand(COERCE_FLOAT(LODWORD(pathPos->hover.hoverRadius) ^ _xmm), pathPos->hover.hoverRadius);
            if ( (unsigned int)v13 >= 3 )
            {
              LODWORD(v24) = 3;
              LODWORD(v23) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            p_goalPos->v[0] = *(float *)&v15;
            p_goalPos = (vec3_t *)((char *)p_goalPos + 4);
            ++v13;
          }
          while ( v13 < 3 );
          v16 = goalPos.v[1];
          pathPos->hover.hoverGoalPos.v[0] = goalPos.v[0] - (float)(0.5 * pathPos->hover.hoverGoalPos.v[0]);
          v17 = v16 - (float)(0.5 * pathPos->hover.hoverGoalPos.v[1]);
          v18 = goalPos.v[2];
          pathPos->hover.hoverGoalPos.v[1] = v17;
          pathPos->hover.hoverGoalPos.v[2] = v18 - (float)(0.5 * pathPos->hover.hoverGoalPos.v[2]);
        }
      }
    }
  }
  else
  {
    G_VehicleHeli_UpdateMoveToGoal(pathPos, &pathPos->goalPosition);
  }
  ent = pathPos->ent;
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
  {
    v20 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v20->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1013, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v20->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    vehicle = ent->vehicle;
    if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1018, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
    v20->client->linkAnglesFrac = 0.0;
    v20->client->link_viewClamp.min.goal.v[1] = COERCE_FLOAT(LODWORD(ServerDef->turretHorizSpanRight) ^ _xmm);
    v20->client->link_viewClamp.max.goal.v[1] = ServerDef->turretHorizSpanLeft;
    v20->client->link_viewClamp.min.goal.v[0] = COERCE_FLOAT(LODWORD(ServerDef->turretVertSpanUp) ^ _xmm);
    v20->client->link_viewClamp.max.goal.v[0] = ServerDef->turretVertSpanDown;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
    {
      v20->client->link_viewClamp.resistMin.goal.v[1] = ServerDef->turretHorizResistLeft;
      v20->client->link_viewClamp.resistMax.goal.v[1] = ServerDef->turretHorizResistRight;
      v20->client->link_viewClamp.resistMin.goal.v[0] = ServerDef->turretVertResistDown;
      v20->client->link_viewClamp.resistMax.goal.v[0] = ServerDef->turretVertResistUp;
    }
    G_SnapToViewAngleClampGoal(&v20->client->link_viewClamp);
  }
}

/*
==============
G_VehicleHeli_UpdateAngleAndAngularVel
==============
*/

void __fastcall G_VehicleHeli_UpdateAngleAndAngularVel(int index, double desiredAngle, float accel, float decel, float overShoot, HeliPathPos *pathPos)
{
  __int64 v6; 
  float v8; 
  __int128 v10; 
  float v12; 
  float frameDuration; 
  float v15; 
  double v24; 
  float v25; 
  float v28; 
  __int64 v29; 
  __int64 v30; 

  v6 = index;
  *(float *)&_XMM13 = accel;
  v8 = *(float *)&desiredAngle;
  if ( (unsigned int)index >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", index, 3) )
    __debugbreak();
  _XMM2 = 0i64;
  v10 = *(_OWORD *)&desiredAngle;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v12 = (float)((float)(*(float *)&desiredAngle - pathPos->angles.v[v6]) * 0.0027777778) - *(float *)&_XMM2;
  *(float *)&v10 = v12 * 360.0;
  _XMM9 = v10;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  frameDuration = (float)level.frameDuration;
  if ( (float)((float)(v12 * v12) * 129600.0) >= 0.000099999997 )
    goto LABEL_55;
  if ( (unsigned int)v6 >= 3 )
  {
    LODWORD(v30) = 3;
    LODWORD(v29) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  if ( (float)(pathPos->rotVel.v[v6] * pathPos->rotVel.v[v6]) >= (float)((float)(frameDuration * frameDuration) * 0.000001) )
  {
LABEL_55:
    if ( (unsigned int)v6 >= 3 )
    {
      LODWORD(v30) = 3;
      LODWORD(v29) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    LODWORD(v15) = LODWORD(pathPos->rotVel.v[v6]) & _xmm;
    if ( (unsigned int)v6 >= 3 )
    {
      LODWORD(v30) = 3;
      LODWORD(v29) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    _XMM15 = LODWORD(pathPos->maxAngleVel.v[v6]);
    if ( (unsigned int)v6 >= 3 )
    {
      LODWORD(v30) = 3;
      LODWORD(v29) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    if ( (float)(*(float *)&_XMM9 * pathPos->rotVel.v[v6]) >= 0.0 )
    {
      if ( decel == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 113, ASSERT_TYPE_ASSERT, "(decel)", (const char *)&queryFormat, "decel") )
        __debugbreak();
      if ( (overShoot < 0.0 || overShoot >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 117, ASSERT_TYPE_ASSERT, "(overShoot >= 0.f && overShoot < 1.f)", (const char *)&queryFormat, "overShoot >= 0.f && overShoot < 1.f") )
        __debugbreak();
      _XMM13 = LODWORD(accel);
      _XMM3 = _XMM9 & (unsigned int)_xmm;
      __asm
      {
        vcmpless xmm0, xmm3, xmm2
        vblendvps xmm1, xmm15, xmm8, xmm0
        vcmpless xmm0, xmm3, xmm2
        vblendvps xmm13, xmm13, xmm2, xmm0
      }
      _XMM15 = _XMM1;
    }
    __asm
    {
      vcmpltss xmm0, xmm9, xmm8
      vblendvps xmm0, xmm15, xmm1, xmm0
    }
    if ( v15 >= (float)((float)(frameDuration * *(float *)&_XMM13) * 0.001) || COERCE_FLOAT(_XMM9 & _xmm) >= (float)((float)(v15 * frameDuration) * 0.001) )
    {
      if ( (unsigned int)v6 >= 3 )
      {
        LODWORD(v30) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      v24 = Vehicle_AccelerateSpeed(pathPos->rotVel.v[v6], *(float *)&_XMM0, *(float *)&_XMM13, frameDuration * 0.001);
      if ( (unsigned int)v6 >= 3 )
      {
        LODWORD(v30) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      pathPos->rotVel.v[v6] = *(float *)&v24;
      if ( (unsigned int)v6 >= 3 )
      {
        LODWORD(v30) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      v25 = (float)(frameDuration * pathPos->rotVel.v[v6]) * 0.001;
      if ( (unsigned int)v6 >= 3 )
      {
        LODWORD(v30) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      pathPos->angles.v[v6] = v25 + pathPos->angles.v[v6];
      if ( (unsigned int)v6 >= 3 )
      {
        LODWORD(v30) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      _XMM3 = 0i64;
      __asm { vroundss xmm3, xmm3, xmm2, 1 }
      v28 = (float)((float)(pathPos->angles.v[v6] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      if ( (unsigned int)v6 >= 3 )
      {
        LODWORD(v30) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      pathPos->angles.v[v6] = v28;
    }
    else
    {
      *vec3_t::operator[](&pathPos->angles, v6) = v8;
      *vec3_t::operator[](&pathPos->rotVel, v6) = 0.0;
    }
  }
  else
  {
    *vec3_t::operator[](&pathPos->rotVel, v6) = 0.0;
    *vec3_t::operator[](&pathPos->angles, v6) = *(float *)&desiredAngle;
  }
}

/*
==============
G_VehicleHeli_UpdateDefaultMove
==============
*/
void G_VehicleHeli_UpdateDefaultMove(Vehicle *veh)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2374, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2375, ASSERT_TYPE_ASSERT, "(veh->ent)", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
    G_Vehicle_UpdateDefaultMove_Physics(veh);
  else
    G_Vehicle_UpdateDefaultMove_NonPhysics(veh);
}

/*
==============
G_VehicleHeli_UpdateJitter
==============
*/
void G_VehicleHeli_UpdateJitter(VehicleJitter *jitter)
{
  __int128 v1; 
  double DeltaTime; 
  unsigned int v4; 
  float v5; 
  int jitterPeriodMin; 
  int v7; 
  int v8; 
  vec3_t *p_jitterOffsetRange; 
  unsigned int v10; 
  int v11; 
  bool v12; 
  float v13; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  vec3_t *p_jitterPos; 
  const dvar_t *v20; 
  float value; 
  float v22; 
  double v23; 
  __int64 v24; 
  __int64 v25; 
  int v26[4]; 
  __int128 v27; 

  if ( !jitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1826, ASSERT_TYPE_ASSERT, "(jitter)", (const char *)&queryFormat, "jitter") )
    __debugbreak();
  if ( jitter->jitterPeriodMin || jitter->jitterPeriodMax )
  {
    DeltaTime = G_Vehicle_GetDeltaTime();
    v4 = 0;
    v5 = *(float *)&DeltaTime;
    if ( level.time > jitter->jitterEndTime )
    {
      jitterPeriodMin = jitter->jitterPeriodMin;
      v7 = (int)(float)(*(float *)&DeltaTime * 1000.0);
      v27 = v1;
      if ( jitterPeriodMin < v7 )
      {
        jitter->jitterPeriodMin = v7;
        jitterPeriodMin = (int)(float)(*(float *)&DeltaTime * 1000.0);
      }
      v8 = G_irand(jitterPeriodMin, jitter->jitterPeriodMax);
      p_jitterOffsetRange = &jitter->jitterOffsetRange;
      v10 = 0;
      jitter->jitterEndTime = v8 + level.time;
      v11 = v8;
      v12 = 1;
      do
      {
        if ( !v12 )
        {
          LODWORD(v25) = 3;
          LODWORD(v24) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
            __debugbreak();
        }
        if ( p_jitterOffsetRange->v[0] == 0.0 )
        {
          if ( v10 >= 3 )
          {
            LODWORD(v25) = 3;
            LODWORD(v24) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          v15 = 0.0;
        }
        else
        {
          if ( v10 >= 3 )
          {
            LODWORD(v25) = 3;
            LODWORD(v24) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          v13 = p_jitterOffsetRange->v[0];
          if ( v10 >= 3 )
          {
            LODWORD(v25) = 3;
            LODWORD(v24) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          v14 = G_flrand(COERCE_FLOAT(LODWORD(p_jitterOffsetRange->v[0]) ^ _xmm), v13);
          v15 = *(float *)&v14;
          if ( v10 >= 3 )
          {
            LODWORD(v25) = 3;
            LODWORD(v24) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
        }
        *(float *)((char *)p_jitterOffsetRange->v + (char *)v26 - (char *)&jitter->jitterOffsetRange) = v15;
        p_jitterOffsetRange = (vec3_t *)((char *)p_jitterOffsetRange + 4);
        v12 = ++v10 < 3;
      }
      while ( (int)v10 < 3 );
      v16 = *(float *)&v26[1];
      jitter->jitterDeltaAccel.v[0] = *(float *)v26 - jitter->jitterAccel.v[0];
      v17 = *(float *)&v26[2];
      jitter->jitterDeltaAccel.v[1] = v16 - jitter->jitterAccel.v[1];
      jitter->jitterDeltaAccel.v[2] = v17 - jitter->jitterAccel.v[2];
      if ( v11 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1865, ASSERT_TYPE_ASSERT, "(jitterDelay > 0)", (const char *)&queryFormat, "jitterDelay > 0") )
        __debugbreak();
      v18 = (float)v7 / (float)v11;
      jitter->jitterDeltaAccel.v[0] = v18 * jitter->jitterDeltaAccel.v[0];
      jitter->jitterDeltaAccel.v[1] = v18 * jitter->jitterDeltaAccel.v[1];
      jitter->jitterDeltaAccel.v[2] = v18 * jitter->jitterDeltaAccel.v[2];
    }
    jitter->jitterAccel.v[0] = jitter->jitterDeltaAccel.v[0] + jitter->jitterAccel.v[0];
    jitter->jitterAccel.v[1] = jitter->jitterAccel.v[1] + jitter->jitterDeltaAccel.v[1];
    jitter->jitterAccel.v[2] = jitter->jitterAccel.v[2] + jitter->jitterDeltaAccel.v[2];
    p_jitterPos = &jitter->jitterPos;
    do
    {
      v20 = DVARFLT_vehHelicopterJitterJerkyness;
      if ( !DVARFLT_vehHelicopterJitterJerkyness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterJitterJerkyness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      value = v20->current.value;
      if ( v4 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v22 = p_jitterPos->v[0];
      if ( v4 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v23 = DiffTrack(p_jitterPos[-1].v[0], v22, value, v5);
      if ( v4 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      p_jitterPos->v[0] = *(float *)&v23;
      p_jitterPos = (vec3_t *)((char *)p_jitterPos + 4);
      ++v4;
    }
    while ( (int)v4 < 3 );
  }
}

/*
==============
G_VehicleHeli_UpdateMoveOrientation
==============
*/
void G_VehicleHeli_UpdateMoveOrientation(HeliPathPos *pathPos, const vec3_t *desiredDir, float distToGoal)
{
  double v3; 
  int hasGoalYaw; 
  float v6; 
  double v7; 
  BOOL v8; 
  float v9; 
  float yawAccel; 
  float yawDecel; 
  float yawOverShoot; 
  float v13; 
  float maxDragSpeed; 
  __int64 v15; 
  __int128 v16; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  float v22; 
  __int64 v25; 
  __int64 v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  __int128 v32; 
  __int64 v36; 
  float v37; 
  float v38; 
  __int64 v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  __int64 v44; 
  double HoverAccel; 
  float vehDefAccel; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  double v52; 
  float v53; 
  float c; 
  float s; 

  *(float *)&v3 = G_VehicleHeli_UpdateMove_GetDesiredYaw(pathPos, desiredDir);
  hasGoalYaw = pathPos->hasGoalYaw;
  v6 = pathPos->angles.v[1] - pathPos->goalYaw;
  v7 = v3;
  v8 = hasGoalYaw && COERCE_FLOAT(COERCE_UNSIGNED_INT(pathPos->angles.v[1] - pathPos->goalYaw) & _xmm) > 0.001;
  v9 = pathPos->rotVel.v[1];
  yawAccel = pathPos->yawAccel;
  yawDecel = pathPos->yawDecel;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v3 - pathPos->prevGoalYaw) & _xmm) <= 0.001 )
  {
    if ( pathPos->yawSlowDown )
    {
      yawAccel = yawAccel * 0.2;
      yawDecel = yawDecel * 0.2;
    }
  }
  else
  {
    pathPos->prevGoalYaw = *(float *)&v3;
    pathPos->yawSlowDown = 0;
  }
  if ( hasGoalYaw || pathPos->hasTargetYaw )
    yawOverShoot = pathPos->yawOverShoot;
  else
    yawOverShoot = 0.0;
  G_VehicleHeli_UpdateAngleAndAngularVel(1, v7, yawAccel, yawDecel, yawOverShoot, pathPos);
  if ( (pathPos->hasGoalYaw && *(float *)&v7 == pathPos->goalYaw || pathPos->hasTargetYaw && *(float *)&v7 == pathPos->targetYaw) && (float)(v9 * pathPos->rotVel.v[1]) < 0.0 )
    pathPos->yawSlowDown = 1;
  if ( v8 )
  {
    v13 = pathPos->angles.v[1] - pathPos->goalYaw;
    if ( (float)(v13 * v6) < 0.0 || COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.001 )
      GScr_Notify(pathPos->ent, scr_const.goal_yaw, 0);
  }
  maxDragSpeed = pathPos->maxDragSpeed;
  v15 = LODWORD(pathPos->vel.v[0]);
  v16 = LODWORD(pathPos->vel.v[1]);
  v17 = pathPos->accel.v[0];
  v18 = LODWORD(pathPos->accel.v[2]);
  v19 = v16;
  v53 = pathPos->accel.v[1];
  *(float *)&v19 = fsqrt((float)(*(float *)&v16 * *(float *)&v16) + (float)(*(float *)&v15 * *(float *)&v15));
  _XMM12 = v19;
  __asm { vminss  xmm9, xmm12, xmm8 }
  if ( maxDragSpeed == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 375, ASSERT_TYPE_ASSERT, "(maxDragSpeed)", (const char *)&queryFormat, "maxDragSpeed") )
    __debugbreak();
  v22 = (float)((float)(*(float *)&_XMM9 / maxDragSpeed) * (float)(*(float *)&_XMM9 / maxDragSpeed)) * 5.0;
  __asm
  {
    vcmpless xmm0, xmm12, xmm4
    vblendvps xmm0, xmm12, xmm9, xmm0
  }
  HIDWORD(v25) = HIDWORD(v15);
  *(float *)&v25 = (float)((float)(*(float *)&v15 * (float)(1.0 / *(float *)&_XMM0)) * v22) + v17;
  v26 = v25;
  v27 = (float)((float)(*(float *)&v16 * (float)(1.0 / *(float *)&_XMM0)) * v22) + v53;
  v28 = (float)(v27 * v27) + (float)(*(float *)&v26 * *(float *)&v26);
  v29 = fsqrt(v28);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v31 = (float)(1000.0 / (float)level.frameDuration) * v29;
  v30 = v31;
  if ( pathPos->ent->vehicle->useDroneLogic )
    v30 = v31 * droneAngularAccelFactor;
  v32 = v18;
  *(float *)&v32 = fsqrt((float)(*(float *)&v18 * *(float *)&v18) + v28);
  _XMM2 = v32;
  __asm
  {
    vcmpless xmm0, xmm2, xmm4
    vblendvps xmm0, xmm2, xmm9, xmm0
  }
  DWORD1(v32) = HIDWORD(v26);
  *(float *)&v32 = *(float *)&v26 * (float)(1.0 / *(float *)&_XMM0);
  v36 = v32;
  v37 = v27 * (float)(1.0 / *(float *)&_XMM0);
  FastSinCos(pathPos->angles.v[1] * 0.017453292, &s, &c);
  v38 = FLOAT_1_0;
  if ( pathPos->hover.hoverRadius == 0.0 && pathPos->stopAtGoal && distToGoal < 15.0 && pathPos->speed < 176.0 )
  {
    v39 = 0i64;
    v40 = 0.0;
  }
  else
  {
    v41 = G_VehicleHeli_CalcAccelFraction(v30, pathPos->vehDefAccel);
    if ( pathPos->stopping && v30 > 0.0 )
    {
      v42 = fsqrt((float)(pathPos->vel.v[0] * pathPos->vel.v[0]) + (float)(pathPos->vel.v[1] * pathPos->vel.v[1])) * (float)(1.0 / v30);
      v43 = (float)((float)(1.0 - v41) * 3.5) + (float)(v41 * 2.5);
      if ( v43 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 452, ASSERT_TYPE_ASSERT, "(stoppingTime)", (const char *)&queryFormat, "stoppingTime") )
        __debugbreak();
      if ( v42 < v43 )
        v38 = v42 / v43;
    }
    HIDWORD(v44) = HIDWORD(v36);
    *(float *)&v44 = (float)((float)(*(float *)&v36 * c) + (float)(v37 * s)) * v38;
    v39 = v44;
    v40 = (float)((float)(1.0 - v41) * 0.1) + v41;
  }
  if ( pathPos->moveState == VEH_MOVESTATE_HOVER )
  {
    if ( pathPos->hover.useHoverAccelForAngles )
    {
      if ( pathPos->ent->vehicle->useDroneLogic )
        *(float *)&HoverAccel = FLOAT_22_879999;
      else
        *(float *)&HoverAccel = pathPos->hover.hoverAccel;
      goto LABEL_56;
    }
    if ( COERCE_FLOAT(LODWORD(pathPos->angles.v[0]) & _xmm) <= 5.0 && COERCE_FLOAT(LODWORD(pathPos->angles.v[2]) & _xmm) <= 5.0 && COERCE_FLOAT(LODWORD(pathPos->rotVel.v[0]) & _xmm) <= 3.0 && COERCE_FLOAT(LODWORD(pathPos->rotVel.v[2]) & _xmm) <= 3.0 )
    {
      pathPos->hover.useHoverAccelForAngles = 1;
      HoverAccel = G_VehicleHeli_GetHoverAccel(pathPos);
      goto LABEL_56;
    }
  }
  else
  {
    pathPos->hover.useHoverAccelForAngles = 0;
  }
  *(float *)&HoverAccel = pathPos->manualAccel;
LABEL_56:
  vehDefAccel = pathPos->vehDefAccel;
  if ( pathPos->ent->vehicle->useDroneLogic )
  {
    v47 = G_VehicleHeli_CalcAccelFraction(*(float *)&HoverAccel * droneAngularAccelFactor, vehDefAccel);
    v49 = (float)(1.0 - v47) + (float)(v47 * 45.0);
    v48 = v49;
  }
  else
  {
    v51 = G_VehicleHeli_CalcAccelFraction(*(float *)&HoverAccel, vehDefAccel);
    v48 = (float)(1.0 - v51) + (float)(v51 * 45.0);
    v49 = v48 * 0.40000001;
  }
  v50 = v49;
  HIDWORD(v52) = HIDWORD(v39);
  *(float *)&v52 = (float)(*(float *)&v39 * pathPos->maxPitchAngle) * v40;
  G_VehicleHeli_UpdateAngleAndAngularVel(0, v52, v48, v50, 0.0, pathPos);
  HIDWORD(v52) = HIDWORD(v36);
  *(float *)&v52 = (float)((float)((float)((float)(*(float *)&v36 * s) - (float)(v37 * c)) * v38) * pathPos->maxRollAngle) * v40;
  G_VehicleHeli_UpdateAngleAndAngularVel(2, v52, v48, v50, 0.0, pathPos);
}

/*
==============
G_VehicleHeli_UpdateMoveToGoal
==============
*/
void G_VehicleHeli_UpdateMoveToGoal(HeliPathPos *pathPos, const vec3_t *goalPos)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  float v10; 
  int v11; 
  int v12; 
  bool v13; 
  float v14; 
  float v15; 
  BOOL v16; 
  float nearGoalNotifyDist; 
  float hoverRadius; 
  double DeltaTime; 
  float v20; 
  float v21; 
  __int128 v22; 
  double v23; 
  float v24; 
  float hoverSpeed; 
  float hoverAccel; 
  float manualDecel; 
  float v28; 
  double v29; 
  float v30; 
  float speed; 
  double v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  __int128 v40; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  double v50; 
  float v51; 
  float v52; 
  float v53; 
  double v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  double v62; 
  float v63; 
  float v64; 
  gentity_s *ent; 
  gentity_s *v69; 
  unsigned __int16 GlassHitId; 
  float v71; 
  __int128 v72; 
  float v73; 
  __int128 v74; 
  float v78; 
  float v79; 
  float v80; 
  vec3_t inOutAccelVec; 
  vec2_t vecToGoal; 
  int v83; 
  vec3_t start; 
  vec3_t damageDir; 
  vec3_t desiredDir; 
  Bounds bounds; 
  trace_t results; 
  __int128 v89; 
  _OWORD v90[9]; 

  if ( !pathPos )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 847, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 78, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
      __debugbreak();
  }
  v10 = goalPos->v[0] - pathPos->origin.v[0];
  *(float *)&v11 = goalPos->v[2] - pathPos->origin.v[2];
  v12 = 0;
  v13 = pathPos->moveState == VEH_MOVESTATE_HOVER;
  vecToGoal.v[1] = goalPos->v[1] - pathPos->origin.v[1];
  v15 = fsqrt((float)((float)(vecToGoal.v[1] * vecToGoal.v[1]) + (float)(v10 * v10)) + (float)(*(float *)&v11 * *(float *)&v11));
  v14 = v15;
  vecToGoal.v[0] = v10;
  v83 = v11;
  v16 = v13;
  if ( !v13 )
  {
    nearGoalNotifyDist = pathPos->nearGoalNotifyDist;
    if ( nearGoalNotifyDist != 0.0 && v15 < nearGoalNotifyDist )
      GScr_Notify(pathPos->ent, scr_const.near_goal, 0);
    if ( pathPos->stopAtGoal )
    {
      hoverRadius = pathPos->hover.hoverRadius;
      if ( hoverRadius == 0.0 )
      {
        if ( !pathPos->stopping && v15 != 0.0 || pathPos->speed != 0.0 )
          goto LABEL_22;
      }
      else if ( v15 > hoverRadius || pathPos->speed >= 35.200001 )
      {
        goto LABEL_22;
      }
      pathPos->moveState = VEH_MOVESTATE_HOVER;
      if ( hoverRadius == 0.0 )
      {
        *(_QWORD *)pathPos->accel.v = 0i64;
        pathPos->accel.v[2] = 0.0;
        *(_QWORD *)pathPos->vel.v = 0i64;
        pathPos->vel.v[2] = 0.0;
      }
    }
    else
    {
      DeltaTime = G_Vehicle_GetDeltaTime();
      if ( v15 > (float)(*(float *)&DeltaTime * pathPos->speed) )
      {
LABEL_22:
        v16 = pathPos->moveState == VEH_MOVESTATE_HOVER;
        goto LABEL_23;
      }
    }
    GScr_Notify(pathPos->ent, scr_const.goal, 0);
    goto LABEL_22;
  }
LABEL_23:
  if ( v15 <= 0.0 )
    return;
  v20 = pathPos->vel.v[2];
  v90[6] = v2;
  v90[5] = v3;
  v90[4] = v4;
  v90[1] = v5;
  v90[0] = v6;
  v21 = pathPos->vel.v[1];
  v89 = v7;
  v22 = LODWORD(pathPos->vel.v[0]);
  v80 = pathPos->vel.v[0];
  v79 = v21;
  v78 = v20;
  if ( pathPos->stopAtGoal || v16 )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v28 = (float)level.frameDuration * 0.001;
    v24 = v28;
    v29 = Vehicle_AccelerateSpeed(pathPos->speed, pathPos->manualSpeed, pathPos->manualAccel, v28);
    if ( pathPos->manualDecel == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 676, ASSERT_TYPE_ASSERT, "(pathPos->manualDecel)", (const char *)&queryFormat, "pathPos->manualDecel") )
      __debugbreak();
    v30 = (float)((float)(0.5 / pathPos->manualDecel) * *(float *)&v29) * *(float *)&v29;
    if ( (float)(v14 - (float)(*(float *)&v29 * v28)) <= v30 )
    {
      speed = pathPos->speed;
      if ( speed > 0.0 )
      {
        if ( v14 > v30 )
        {
          I_fclamp(v28 - (float)((float)(v14 - v30) / speed), 0.0, v28);
          v24 = v28 - (float)((float)(v14 - v30) / speed);
        }
        v12 = 1;
      }
    }
    pathPos->stopping = v12;
    v11 = v83;
    if ( v16 )
    {
      if ( pathPos->ent->vehicle->useDroneLogic )
      {
        hoverAccel = FLOAT_22_879999;
        hoverSpeed = FLOAT_26_4;
        manualDecel = FLOAT_22_879999;
      }
      else
      {
        hoverAccel = pathPos->hover.hoverAccel;
        hoverSpeed = pathPos->hover.hoverSpeed;
        manualDecel = hoverAccel * 0.5;
      }
      goto LABEL_28;
    }
  }
  else
  {
    v23 = G_Vehicle_GetDeltaTime();
    v24 = *(float *)&v23;
  }
  hoverSpeed = pathPos->manualSpeed;
  hoverAccel = pathPos->manualAccel;
  manualDecel = pathPos->manualDecel;
LABEL_28:
  if ( pathPos->stopping )
  {
    hoverSpeed = 0.0;
  }
  else
  {
    if ( hoverSpeed < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 743, ASSERT_TYPE_ASSERT, "(speed >= 0.0f)", (const char *)&queryFormat, "speed >= 0.0f") )
      __debugbreak();
    manualDecel = hoverAccel;
  }
  v32 = Vehicle_AccelerateSpeed(pathPos->speed, hoverSpeed, manualDecel, v24);
  v13 = pathPos->stopping == 0;
  v33 = *(float *)&v32 * (float)((float)(1.0 / v14) * vecToGoal.v[0]);
  v34 = v33 - *(float *)&v22;
  desiredDir.v[1] = (float)(1.0 / v14) * vecToGoal.v[1];
  v36 = (float)(*(float *)&v32 * desiredDir.v[1]) - v21;
  v35 = v36;
  v37 = (float)(*(float *)&v32 * (float)((float)(1.0 / v14) * *(float *)&v11)) - v78;
  desiredDir.v[0] = (float)(1.0 / v14) * vecToGoal.v[0];
  inOutAccelVec.v[2] = v37;
  desiredDir.v[2] = (float)(1.0 / v14) * *(float *)&v11;
  inOutAccelVec.v[0] = v33 - *(float *)&v22;
  inOutAccelVec.v[1] = v36;
  v38 = v36;
  v39 = v33 - *(float *)&v22;
  if ( v13 && pathPos->manualSpeed >= pathPos->speed && (float)((float)(*(float *)&v22 * v33) + (float)((float)(*(float *)&v32 * desiredDir.v[1]) * v79)) > 0.0 && (float)((float)(*(float *)&v22 * v34) + (float)(v36 * v79)) < 0.0 )
  {
    v40 = v22;
    *(float *)&v40 = fsqrt((float)(*(float *)&v22 * *(float *)&v22) + (float)(v79 * v79));
    _XMM2 = v40;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v44 = (float)(1.0 / *(float *)&_XMM0) * v79;
    v45 = (float)(v44 * v35) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v22) * v34);
    v39 = v34 - (float)(v45 * (float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v22));
    v38 = v35 - (float)(v45 * v44);
    inOutAccelVec.v[0] = v39;
    inOutAccelVec.v[1] = v38;
    v34 = v39;
    v35 = v38;
  }
  v46 = fsqrt((float)((float)(v38 * v38) + (float)(v39 * v39)) + (float)(v37 * v37));
  v47 = manualDecel * v24;
  if ( v46 > (float)(manualDecel * v24) )
  {
    if ( v46 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 909, ASSERT_TYPE_ASSERT, "(accelMagnitude)", (const char *)&queryFormat, "accelMagnitude") )
      __debugbreak();
    v48 = (float)(manualDecel * v24) / v46;
    v34 = v34 * v48;
    v35 = v35 * v48;
    v37 = v37 * v48;
    inOutAccelVec.v[0] = v34;
    inOutAccelVec.v[1] = v35;
    inOutAccelVec.v[2] = v37;
  }
  if ( !v16 )
  {
    G_VehicleHeli_CheckHorizontalVelocityToGoal(pathPos, &vecToGoal, manualDecel, &inOutAccelVec);
    v37 = inOutAccelVec.v[2];
    if ( *(float *)&v11 != 0.0 )
    {
      v49 = pathPos->vel.v[2];
      if ( COERCE_FLOAT(LODWORD(inOutAccelVec.v[2]) & _xmm) >= 0.001 && COERCE_FLOAT(LODWORD(v49) & _xmm) >= 0.001 && (float)(v49 * inOutAccelVec.v[2]) < 0.0 && (float)(v49 * *(float *)&v11) > 0.0 )
      {
        v50 = G_Vehicle_GetDeltaTime();
        v51 = (float)(2.0 / v49) * *(float *)&v11;
        v52 = *(float *)&v50;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v50 * v49) / v37) ^ _xmm) > v51 )
        {
          if ( v51 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 602, ASSERT_TYPE_ASSERT, "(desiredStoppingTime)", (const char *)&queryFormat, "desiredStoppingTime") )
            __debugbreak();
          LODWORD(v53) = COERCE_UNSIGNED_INT((float)(*(float *)&v50 * v49) / v51) ^ _xmm;
          if ( (float)(v53 * v53) > (float)(v37 * v37) )
          {
            v54 = I_fclamp(v53, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v52 * pathPos->manualAccel) * 3.0) ^ _xmm), (float)(v52 * pathPos->manualAccel) * 3.0);
            pathPos->vel.v[2] = (float)(*(float *)&v54 - v37) + pathPos->vel.v[2];
            v37 = *(float *)&v54;
          }
        }
      }
    }
    v35 = inOutAccelVec.v[1];
    v34 = inOutAccelVec.v[0];
  }
  pathPos->vel.v[2] = v37 + v78;
  pathPos->vel.v[0] = v80 + v34;
  pathPos->vel.v[1] = v35 + v79;
  pathPos->speed = fsqrt((float)((float)((float)(v35 + v79) * (float)(v35 + v79)) + (float)((float)(v80 + v34) * (float)(v80 + v34))) + (float)((float)(v37 + v78) * (float)(v37 + v78)));
  v55 = (float)((float)(v34 - pathPos->accel.v[0]) * 0.5) + pathPos->accel.v[0];
  pathPos->accel.v[0] = v55;
  v56 = (float)((float)(v35 - pathPos->accel.v[1]) * 0.5) + pathPos->accel.v[1];
  pathPos->accel.v[1] = v56;
  v57 = (float)((float)(v37 - pathPos->accel.v[2]) * 0.5) + pathPos->accel.v[2];
  v58 = fsqrt((float)((float)(v55 * v55) + (float)(v56 * v56)) + (float)(v57 * v57));
  pathPos->accel.v[2] = v57;
  if ( v58 > v47 && !pathPos->stopAtGoal )
  {
    pathPos->accel.v[0] = v55 * (float)(v47 / v58);
    pathPos->accel.v[2] = (float)(v47 / v58) * v57;
    pathPos->accel.v[1] = (float)(v47 / v58) * v56;
  }
  v59 = (float)(v80 + pathPos->vel.v[0]) * 0.5;
  v60 = (float)(v78 + pathPos->vel.v[2]) * 0.5;
  v61 = (float)(v79 + pathPos->vel.v[1]) * 0.5;
  v62 = G_Vehicle_GetDeltaTime();
  if ( v24 < *(float *)&v62 )
  {
    pathPos->origin.v[0] = (float)((float)(*(float *)&v62 - v24) * v80) + pathPos->origin.v[0];
    pathPos->origin.v[1] = (float)((float)(*(float *)&v62 - v24) * v79) + pathPos->origin.v[1];
    pathPos->origin.v[2] = (float)((float)(*(float *)&v62 - v24) * v78) + pathPos->origin.v[2];
  }
  v63 = pathPos->origin.v[0];
  v64 = pathPos->origin.v[2];
  start.v[1] = pathPos->origin.v[1];
  start.v[2] = v64;
  pathPos->origin.v[0] = (float)(v59 * v24) + v63;
  start.v[0] = v63;
  pathPos->origin.v[1] = (float)(v61 * v24) + pathPos->origin.v[1];
  pathPos->origin.v[2] = (float)(v60 * v24) + pathPos->origin.v[2];
  if ( pathPos->touchTriggers )
    G_VehicleHeli_TouchTriggers(pathPos->ent);
  if ( pathPos->breakGlass )
  {
    ent = pathPos->ent;
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 828, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    _XMM0 = LODWORD(ent->r.box.halfSize.v[1]);
    __asm
    {
      vmaxss  xmm1, xmm0, dword ptr [rdi+10Ch]
      vmaxss  xmm2, xmm1, dword ptr [rdi+114h]
    }
    v69 = pathPos->ent;
    bounds.halfSize.v[0] = *(float *)&_XMM2;
    bounds.halfSize.v[1] = *(float *)&_XMM2;
    bounds.halfSize.v[2] = *(float *)&_XMM2;
    bounds.midPoint.v[0] = 0.0;
    bounds.midPoint.v[1] = 0.0;
    bounds.midPoint.v[2] = 0.0;
    G_Main_TraceCapsule(&results, &start, &pathPos->origin, &bounds, v69->s.number, 16);
    if ( results.fraction < 1.0 )
    {
      GlassHitId = Trace_GetGlassHitId(&results);
      if ( GlassHitId )
      {
        v71 = pathPos->vel.v[1];
        v72 = LODWORD(pathPos->vel.v[0]);
        v73 = pathPos->vel.v[2];
        v74 = v72;
        *(float *)&v74 = fsqrt((float)((float)(*(float *)&v72 * *(float *)&v72) + (float)(v71 * v71)) + (float)(v73 * v73));
        _XMM3 = v74;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm7, xmm0
        }
        damageDir.v[0] = *(float *)&v72 * (float)(1.0 / *(float *)&_XMM0);
        damageDir.v[2] = v73 * (float)(1.0 / *(float *)&_XMM0);
        damageDir.v[1] = v71 * (float)(1.0 / *(float *)&_XMM0);
        G_Glass_DestroyPiece(GlassHitId - 1, &pathPos->origin, &damageDir);
      }
    }
  }
  G_VehicleHeli_UpdateMoveOrientation(pathPos, &desiredDir, v14);
}

/*
==============
G_VehicleHeli_UpdateMove_CheckGoalReached
==============
*/
__int64 G_VehicleHeli_UpdateMove_CheckGoalReached(HeliPathPos *pathPos, float distToGoal)
{
  float hoverRadius; 
  double DeltaTime; 

  if ( pathPos->stopAtGoal )
  {
    hoverRadius = pathPos->hover.hoverRadius;
    if ( hoverRadius == 0.0 )
    {
      if ( !pathPos->stopping && distToGoal != 0.0 || pathPos->speed != 0.0 )
        return 0i64;
    }
    else if ( distToGoal > hoverRadius || pathPos->speed >= 35.200001 )
    {
      return 0i64;
    }
    pathPos->moveState = VEH_MOVESTATE_HOVER;
    if ( hoverRadius == 0.0 )
    {
      *(_QWORD *)pathPos->accel.v = 0i64;
      pathPos->accel.v[2] = 0.0;
      *(_QWORD *)pathPos->vel.v = 0i64;
      pathPos->vel.v[2] = 0.0;
    }
    GScr_Notify(pathPos->ent, scr_const.goal, 0);
    return 1i64;
  }
  else
  {
    DeltaTime = G_Vehicle_GetDeltaTime();
    if ( distToGoal > (float)(*(float *)&DeltaTime * pathPos->speed) )
      return 0i64;
    GScr_Notify(pathPos->ent, scr_const.goal, 0);
    return 1i64;
  }
}

/*
==============
G_VehicleHeli_UpdateMove_CheckNearGoal
==============
*/
void G_VehicleHeli_UpdateMove_CheckNearGoal(HeliPathPos *pathPos, float distToGoal)
{
  float nearGoalNotifyDist; 

  nearGoalNotifyDist = pathPos->nearGoalNotifyDist;
  if ( nearGoalNotifyDist != 0.0 && distToGoal < nearGoalNotifyDist )
    GScr_Notify(pathPos->ent, scr_const.near_goal, 0);
}

/*
==============
G_VehicleHeli_UpdateMove_GetDesiredYaw
==============
*/
float G_VehicleHeli_UpdateMove_GetDesiredYaw(const HeliPathPos *pathPos, const vec3_t *desiredDir)
{
  int v4; 
  const vec2_t *v5; 
  float goalYaw; 
  float v7; 
  float v8; 
  float v9; 
  float v12; 
  float v13; 
  double v14; 
  int v16[4]; 

  if ( pathPos->hasLookAtEnt )
  {
    *(float *)&v4 = pathPos->lookAtEntOrigin.v[1] - pathPos->origin.v[1];
    *(float *)v16 = pathPos->lookAtEntOrigin.v[0] - pathPos->origin.v[0];
    *(float *)&v16[2] = pathPos->lookAtEntOrigin.v[2] - pathPos->origin.v[2];
    v16[1] = v4;
    v5 = (const vec2_t *)v16;
LABEL_22:
    v14 = vectoyaw(v5);
    return *(float *)&v14;
  }
  if ( !pathPos->hasGoalYaw || !pathPos->stopping && !G_VehicleHeli_IsHovering(pathPos) )
    goto LABEL_26;
  goalYaw = pathPos->goalYaw;
  if ( pathPos->maxAngleVel.v[1] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 197, ASSERT_TYPE_ASSERT, "(pathPos->maxAngleVel[YAW])", (const char *)&queryFormat, "pathPos->maxAngleVel[YAW]") )
    __debugbreak();
  if ( pathPos->manualDecel == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 198, ASSERT_TYPE_ASSERT, "(pathPos->manualDecel)", (const char *)&queryFormat, "pathPos->manualDecel") )
    __debugbreak();
  v7 = pathPos->maxAngleVel.v[1];
  v8 = (float)(v7 / pathPos->yawAccel) * 2.0;
  v9 = pathPos->speed / pathPos->manualDecel;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  v12 = (float)(v7 * 0.5) * v8;
  LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)((float)(goalYaw - pathPos->angles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0) & _xmm;
  if ( v8 < v9 && v12 < v13 )
    v8 = v8 + (float)((float)(v13 - v12) / v7);
  if ( v8 >= v9 )
    return goalYaw;
LABEL_26:
  if ( pathPos->hasTargetYaw )
    return pathPos->targetYaw;
  if ( !G_VehicleHeli_IsHovering(pathPos) )
  {
    v5 = (const vec2_t *)desiredDir;
    goto LABEL_22;
  }
  *(float *)&v14 = pathPos->angles.v[1];
  return *(float *)&v14;
}

/*
==============
G_VehicleHeli_UpdatePlayerMove
==============
*/
void G_VehicleHeli_UpdatePlayerMove(Vehicle *veh)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  gentity_s *ent; 
  gentity_s *v7; 
  int v8; 
  double DeltaTime; 
  float v10; 
  float v11; 
  float v12; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  scrContext_t *v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 
  float v38; 
  float v39; 
  unsigned int bumpEntityNum; 
  char move[4]; 
  vec3_t outRotAccel; 
  vec3_t outBodyAccel; 
  float v44; 
  float v45; 
  float v46; 
  vec3_t angles; 
  float value[4]; 
  tmat43_t<vec3_t> forward; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 

  *(_DWORD *)move = 0;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2259, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ent = veh->ent;
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2264, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
  {
    v7 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v7->client )
    {
      v8 = 2269;
      goto LABEL_14;
    }
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) || !EntHandle::isDefined(&ent->remoteControlledOwner) )
      return;
    v7 = EntHandle::ent(&ent->remoteControlledOwner);
    if ( !v7->client )
    {
      v8 = 2274;
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", v8, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
        __debugbreak();
    }
  }
  v53 = v1;
  v52 = v2;
  v51 = v3;
  v50 = v4;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->GetVehicleHeliPlayerMove(GVehicles::ms_gVehiclesSystem, veh, v7, move);
  G_VehicleHeli_CalcAccel(ent, v7, move, &outBodyAccel, &outRotAccel);
  DeltaTime = G_Vehicle_GetDeltaTime();
  v10 = (float)(*(float *)&DeltaTime * outRotAccel.v[1]) + veh->phys.rotVel.v[1];
  veh->phys.rotVel.v[1] = v10;
  v11 = (float)((float)(v10 * *(float *)&DeltaTime) + veh->phys.prevAngles.v[1]) * 0.0027777778;
  v12 = *(float *)&DeltaTime;
  _XMM2 = 0i64;
  __asm { vroundss xmm5, xmm2, xmm3, 1 }
  *(float *)&DeltaTime = outRotAccel.v[0];
  veh->phys.angles.v[1] = (float)(v11 - *(float *)&_XMM5) * 360.0;
  v15 = outRotAccel.v[2];
  veh->phys.angles.v[0] = *(float *)&DeltaTime;
  veh->phys.angles.v[2] = v15;
  bumpEntityNum = LODWORD(veh->phys.angles.v[0]);
  if ( (bumpEntityNum & 0x7F800000) == 2139095040 || (bumpEntityNum = LODWORD(veh->phys.angles.v[1]), (bumpEntityNum & 0x7F800000) == 2139095040) || (*(float *)&bumpEntityNum = v15, (LODWORD(v15) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2300, ASSERT_TYPE_SANITY, "( !IS_NAN( ( phys->angles )[0] ) && !IS_NAN( ( phys->angles )[1] ) && !IS_NAN( ( phys->angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( phys->angles )[0] ) && !IS_NAN( ( phys->angles )[1] ) && !IS_NAN( ( phys->angles )[2] )") )
      __debugbreak();
  }
  v16 = veh->phys.angles.v[1];
  angles.v[0] = 0.0;
  angles.v[1] = v16;
  angles.v[2] = 0.0;
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  v17 = DVARBOOL_vehHelicopterSoftCollisions;
  v18 = (float)((float)(outBodyAccel.v[0] * forward.m[0].v[0]) + (float)(outBodyAccel.v[1] * forward.m[1].v[0])) + (float)(outBodyAccel.v[2] * forward.m[2].v[0]);
  v19 = (float)((float)(outBodyAccel.v[0] * forward.m[0].v[1]) + (float)(outBodyAccel.v[1] * forward.m[1].v[1])) + (float)(outBodyAccel.v[2] * forward.m[2].v[1]);
  v20 = (float)((float)(outBodyAccel.v[0] * forward.m[0].v[2]) + (float)(outBodyAccel.v[1] * forward.m[1].v[2])) + (float)(outBodyAccel.v[2] * forward.m[2].v[2]);
  outRotAccel.v[2] = v20;
  forward.m[3].v[0] = 0.0;
  forward.m[3].v[1] = 0.0;
  forward.m[3].v[2] = 0.0;
  outRotAccel.v[0] = v18;
  outRotAccel.v[1] = v19;
  if ( !DVARBOOL_vehHelicopterSoftCollisions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterSoftCollisions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    G_VehicleHeli_SoftenCollisions(ent, &outRotAccel);
    v20 = outRotAccel.v[2];
    v19 = outRotAccel.v[1];
    v18 = outRotAccel.v[0];
  }
  v21 = (float)(v18 * v12) + veh->phys.vel.v[0];
  veh->phys.vel.v[0] = v21;
  v22 = (float)(v19 * v12) + veh->phys.vel.v[1];
  veh->phys.vel.v[1] = v22;
  v23 = (float)(v20 * v12) + veh->phys.vel.v[2];
  veh->phys.vel.v[2] = v23;
  if ( v21 != 0.0 || v22 != 0.0 || v23 != 0.0 )
  {
    v24 = veh->phys.origin.v[0];
    v25 = veh->phys.origin.v[1];
    v26 = veh->phys.origin.v[2];
    v44 = v21;
    v45 = v22;
    v46 = v23;
    G_Vehicle_ClearGround(ent);
    if ( G_Vehicle_SlideMove(ent, 0, v12, &bumpEntityNum) )
    {
      v27 = veh->phys.origin.v[0] - (float)((float)(v12 * v44) + v24);
      v29 = LODWORD(veh->phys.origin.v[1]);
      v28 = veh->phys.origin.v[1] - (float)((float)(v12 * v45) + v25);
      v30 = veh->phys.origin.v[2] - (float)((float)(v12 * v46) + v26);
      *(float *)&v29 = fsqrt((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v30 * v30));
      _XMM3 = v29;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
      }
      value[0] = (float)(1.0 / *(float *)&_XMM0) * v27;
      value[2] = (float)(1.0 / *(float *)&_XMM0) * v30;
      value[1] = (float)(1.0 / *(float *)&_XMM0) * v28;
      if ( *(float *)&v29 > 0.0 )
      {
        v34 = ScriptContext_Server();
        if ( bumpEntityNum - 2046 <= 1 )
          Scr_AddUndefined(v34);
        else
          GScr_AddEntity(&g_entities[bumpEntityNum]);
        Scr_AddVector(v34, value);
        Scr_AddVector(v34, &v44);
        GScr_Notify(ent, scr_const.veh_collision, 3u);
      }
    }
  }
  G_VehicleHeli_CheckForPredictedCrash(ent);
  MatrixTransposeTransformVector43(&veh->phys.vel, &forward, &veh->phys.bodyVel);
  v35 = fsqrt((float)((float)(veh->phys.vel.v[0] * veh->phys.vel.v[0]) + (float)(veh->phys.vel.v[1] * veh->phys.vel.v[1])) + (float)(veh->phys.vel.v[2] * veh->phys.vel.v[2]));
  veh->speed = v35;
  if ( v35 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2354, ASSERT_TYPE_ASSERT, "(veh->speed >= 0.0f)", (const char *)&queryFormat, "veh->speed >= 0.0f") )
    __debugbreak();
  v36 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( v36->current.integer )
  {
    v37 = veh->phys.origin.v[0];
    v38 = veh->phys.bounds.halfSize.v[2];
    outBodyAccel.v[1] = veh->phys.origin.v[1];
    outBodyAccel.v[0] = v37;
    v39 = veh->phys.bounds.halfSize.v[0];
    outBodyAccel.v[2] = (float)(veh->phys.bounds.midPoint.v[2] - v38) + veh->phys.origin.v[2];
    G_Vehicle_DebugCapsule(&outBodyAccel, v39, v38 * 2.0, 1.0, 1.0, 0.0);
  }
}

