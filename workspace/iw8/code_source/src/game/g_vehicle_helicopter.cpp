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
  const dvar_t *v22; 
  const dvar_t *v24; 
  const dvar_t *v26; 
  const dvar_t *v28; 
  const dvar_t *v30; 
  const dvar_t *v32; 
  unsigned int v35; 
  bool v37; 
  bool v38; 
  bool v39; 
  const dvar_t *v44; 
  unsigned int v99; 
  bool v102; 
  bool v113; 
  bool v114; 
  bool v138; 
  bool v139; 
  bool v148; 
  bool v149; 
  bool v157; 
  bool v158; 
  const dvar_t *v167; 
  const dvar_t *v179; 
  unsigned int v224; 
  bool v226; 
  bool v227; 
  const dvar_t *v229; 
  bool v231; 
  bool v232; 
  const dvar_t *v234; 
  const dvar_t *v237; 
  const dvar_t *v243; 
  const dvar_t *v247; 
  const dvar_t *v253; 
  const dvar_t *v263; 
  const dvar_t *v268; 
  const dvar_t *v272; 
  const dvar_t *v278; 
  char v280; 
  char v281; 
  const dvar_t *v293; 
  const dvar_t *v296; 
  const dvar_t *v299; 
  unsigned int i; 
  bool v341; 
  bool v342; 
  bool v343; 
  bool v344; 
  bool v345; 
  bool v346; 
  bool v347; 
  bool v348; 
  __int64 v385; 
  __int64 v386; 
  __int64 v387; 
  __int64 v388; 
  __int64 v389; 
  double v390; 
  double v391; 
  double v392; 
  __int64 v393; 
  __int64 v394; 
  __int64 v395; 
  __int64 v396; 
  __int64 v397; 
  double v398; 
  double v399; 
  double v400; 
  int v402; 
  int v403; 
  int v404; 
  int v405; 
  int v406; 
  int v407; 
  vec3_t out; 
  vec3_t angles; 
  vec3_t up; 
  vec3_t v434; 
  vec4_t outFracs; 
  tmat43_t<vec3_t> forward; 
  usercmd_s outUserCmd; 
  char v438; 
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
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1908, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1909, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  _R15 = ent->vehicle;
  __asm
  {
    vmovss  xmm8, cs:__real@418ccccd
    vxorps  xmm14, xmm14, xmm14
    vcomiss xmm14, dword ptr [r15+6B8h]
  }
  v22 = DVARFLT_vehHelicopterMaxSpeedVertical;
  if ( !DVARFLT_vehHelicopterMaxSpeedVertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeedVertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  __asm { vmulss  xmm7, xmm8, dword ptr [rbx+28h] }
  v24 = DVARFLT_vehHelicopterMaxSpeed;
  if ( !DVARFLT_vehHelicopterMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  __asm { vmulss  xmm6, xmm8, dword ptr [rbx+28h] }
  v26 = DVARFLT_vehHelicopterMaxSpeed;
  if ( !DVARFLT_vehHelicopterMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  __asm { vmulss  xmm1, xmm8, dword ptr [rbx+28h] }
  v28 = DVARFLT_vehHelicopterMaxAccelVertical;
  __asm
  {
    vmovss  [rbp+260h+var_2D0], xmm1
    vmovss  [rbp+260h+var_2CC], xmm6
    vmovss  [rbp+260h+var_2C8], xmm7
  }
  if ( !DVARFLT_vehHelicopterMaxAccelVertical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccelVertical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  __asm { vmulss  xmm7, xmm8, dword ptr [rbx+28h] }
  v30 = DVARFLT_vehHelicopterMaxAccel;
  if ( !DVARFLT_vehHelicopterMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  __asm { vmulss  xmm6, xmm8, dword ptr [rbx+28h] }
  v32 = DVARFLT_vehHelicopterMaxAccel;
  if ( !DVARFLT_vehHelicopterMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  __asm
  {
    vmulss  xmm1, xmm8, dword ptr [rbx+28h]
    vmovss  [rsp+360h+var_2E4], xmm6
    vmovss  [rbp+260h+var_2E0], xmm7
    vmovss  [rsp+360h+var_2E8], xmm1
  }
  G_VehicleHeli_CmdScale(move, &outFracs);
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  v35 = 0;
  _RDI = 0i64;
  __asm { vmovss  dword ptr [rsp+360h+var_320], xmm10 }
  v37 = 1;
  v38 = 0;
  do
  {
    if ( !v37 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v35;
      v39 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
      v38 = !v39;
      if ( v39 )
        __debugbreak();
    }
    __asm { vucomiss xmm14, [rbp+rdi+260h+var_2D0] }
    if ( v38 )
    {
      if ( v35 >= 4 )
      {
        LODWORD(v393) = 4;
        LODWORD(v385) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      __asm { vmovaps xmm6, xmm10 }
    }
    else
    {
      if ( v35 >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
        LODWORD(v394) = 3;
        LODWORD(v386) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v386, v394) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rsp+rdi+360h+var_2E8]
        vdivss  xmm6, xmm0, [rbp+rdi+260h+var_2D0]
      }
      if ( v35 >= 4 )
      {
        LODWORD(v393) = 4;
        LODWORD(v385) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
    }
    __asm { vmovss  [rbp+rdi+260h+var_280], xmm6 }
    _RDI += 4i64;
    v37 = ++v35 < 3;
    v38 = v35 == 3;
  }
  while ( (int)v35 < 3 );
  __asm
  {
    vmovss  xmm0, [rbp+260h+var_2D0]
    vmulss  xmm7, xmm0, dword ptr [rbp+260h+outFracs]
  }
  v44 = DVARFLT_vehHelicopterPitchOffset;
  _R12 = outBodyAccel;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+260h+outFracs+8]
    vmovss  xmm1, dword ptr [rbp+260h+outFracs+4]
    vmulss  xmm6, xmm0, [rbp+260h+var_2C8]
    vmulss  xmm8, xmm1, [rbp+260h+var_2CC]
    vmovss  dword ptr [rbp+260h+angles+4], xmm14
  }
  if ( !DVARFLT_vehHelicopterPitchOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterPitchOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+114h]
    vsubss  xmm1, xmm0, dword ptr [rbx+28h]
    vmovss  dword ptr [rbp+260h+angles], xmm1
    vmovss  xmm2, dword ptr [r15+11Ch]
    vmovss  dword ptr [rbp+260h+angles+8], xmm2
  }
  AngleVectors(&angles, NULL, NULL, &up);
  __asm
  {
    vmulss  xmm3, xmm6, dword ptr [rbp+260h+up+8]
    vmulss  xmm1, xmm6, dword ptr [rbp+260h+up]
    vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
    vaddss  xmm4, xmm1, xmm7
    vmulss  xmm1, xmm6, dword ptr [rbp+260h+up+4]
    vaddss  xmm5, xmm1, xmm8
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm15, xmm2, xmm2
    vcomiss xmm15, xmm10
    vcmpless xmm0, xmm15, cs:__real@80000000
    vblendvps xmm0, xmm15, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm7, xmm4, xmm1
    vmulss  xmm8, xmm5, xmm1
    vmulss  xmm9, xmm3, xmm1
    vmovss  [rbp+260h+var_298], xmm4
    vmovss  [rbp+260h+var_294], xmm5
    vmovss  [rbp+260h+var_290], xmm3
  }
  if ( v37 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15+144h]
      vmovss  xmm1, dword ptr [r15+148h]
      vmovss  [rbp+260h+var_2A8], xmm0
      vmovss  xmm0, dword ptr [r15+14Ch]
      vmovss  [rbp+260h+var_2A0], xmm0
      vmovss  [rbp+260h+var_2A4], xmm1
      vmovss  [rbp+260h+var_2B8], xmm14
      vmovss  [rbp+260h+var_2B4], xmm14
      vmovss  [rbp+260h+var_2B0], xmm14
      vmovaps xmm15, xmm14
      vmovaps xmm13, xmm14
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm5, dword ptr [r15+148h]
      vmovss  xmm4, dword ptr [r15+144h]
      vmovss  xmm6, dword ptr [r15+14Ch]
      vmulss  xmm1, xmm5, xmm8
      vmulss  xmm0, xmm4, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm9
      vaddss  xmm13, xmm2, xmm1
      vxorps  xmm3, xmm13, xmm12
      vmulss  xmm0, xmm3, xmm7
      vaddss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm3, xmm8
      vaddss  xmm0, xmm2, xmm5
      vmovss  [rbp+260h+var_2A4], xmm0
      vmovss  [rbp+260h+var_2A8], xmm1
      vmulss  xmm0, xmm7, xmm13
      vmulss  xmm1, xmm3, xmm9
      vaddss  xmm2, xmm1, xmm6
      vmovss  [rbp+260h+var_2B8], xmm0
      vmulss  xmm0, xmm9, xmm13
      vmulss  xmm1, xmm8, xmm13
      vmovss  [rbp+260h+var_2B0], xmm0
      vmovss  [rbp+260h+var_2A0], xmm2
      vmovss  [rbp+260h+var_2B4], xmm1
    }
  }
  _RBX = DVARFLT_vehHelicopterDecelerationSide;
  if ( !DVARFLT_vehHelicopterDecelerationSide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterDecelerationSide") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_vehHelicopterDecelerationFwd;
  if ( !DVARFLT_vehHelicopterDecelerationFwd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterDecelerationFwd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rbp+260h+var_288], xmm0
    vmovss  [rbp+260h+var_284], xmm6
    vmovss  [rbp+260h+var_2C0], xmm14
    vmovss  [rbp+260h+var_2BC], xmm14
    vmovss  [rbp+260h+var_2D8], xmm14
    vmovss  [rbp+260h+var_2D4], xmm14
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm11, xmm0, cs:__real@3a83126f
  }
  v99 = 0;
  _RDI = 0i64;
  __asm { vdivss  xmm10, xmm10, xmm11 }
  v102 = 1;
  do
  {
    if ( !v102 )
    {
      LODWORD(v393) = 2;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    if ( v99 >= 4 )
    {
      LODWORD(v393) = 4;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, [rbp+rdi*4+260h+var_288]
      vmulss  xmm7, xmm0, [rbp+rdi*4+260h+var_280]
    }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, [rbp+rdi*4+260h+var_2A8]
      vmovaps xmm1, xmm6; cur
      vmovaps xmm3, xmm11; deltaTime
      vmovaps xmm2, xmm7; rate
      vmovaps xmm0, xmm14; tgt
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovaps xmm7, xmm0 }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vmulss  xmm6, xmm0, xmm10
    }
    v113 = v99 <= 2;
    if ( v99 >= 2 )
    {
      LODWORD(v393) = 2;
      LODWORD(v385) = v99;
      v114 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
      v113 = !v114;
      if ( v114 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm15, xmm13
      vmovss  [rbp+rdi*4+260h+var_2D8], xmm6
    }
    if ( v113 )
    {
      if ( v99 >= 2 )
      {
        LODWORD(v393) = 2;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      if ( v99 >= 4 )
      {
        LODWORD(v393) = 4;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rbp+rdi*4+260h+var_288]
        vmulss  xmm6, xmm0, [rbp+rdi*4+260h+var_280]
      }
      if ( v99 >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
        LODWORD(v396) = 3;
        LODWORD(v388) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v388, v396) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, [rbp+rdi*4+260h+var_2B8]; cur
        vmovss  xmm0, [rbp+rdi*4+260h+var_298]; tgt
        vmovaps xmm3, xmm11; deltaTime
        vmovaps xmm2, xmm6; rate
      }
      *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vmovaps xmm6, xmm0 }
      if ( v99 >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm0, xmm6, [rbp+rdi*4+260h+var_2B8]
        vmulss  xmm6, xmm0, xmm10
      }
      if ( v99 >= 2 )
      {
        LODWORD(v393) = 2;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, [rbp+rdi*4+260h+var_2D8]
        vmovss  [rbp+rdi*4+260h+var_2D8], xmm0
      }
    }
    else
    {
      if ( v99 >= 4 )
      {
        LODWORD(v393) = 4;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      if ( v99 >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
        LODWORD(v395) = 3;
        LODWORD(v387) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v387, v395) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm2, [rbp+rdi*4+260h+var_280]; rate
        vmovss  xmm1, [rbp+rdi*4+260h+var_2B8]; cur
        vmovss  xmm0, [rbp+rdi*4+260h+var_298]; tgt
        vmovaps xmm3, xmm11; deltaTime
      }
      *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vmovaps xmm6, xmm0 }
      if ( v99 >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm0, xmm6, [rbp+rdi*4+260h+var_2B8]
        vmulss  xmm6, xmm0, xmm10
      }
      if ( v99 >= 2 )
      {
        LODWORD(v393) = 2;
        LODWORD(v385) = v99;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, [rbp+rdi*4+260h+var_2C0]
        vmovss  [rbp+rdi*4+260h+var_2C0], xmm0
      }
    }
    if ( v99 >= 2 )
    {
      LODWORD(v393) = 2;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
      LODWORD(v397) = 2;
      LODWORD(v389) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v389, v397) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, [rbp+rdi*4+260h+var_2D8]
      vaddss  xmm6, xmm0, [rbp+rdi*4+260h+var_2C0]
    }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [r12+rdi*4], xmm6 }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, [rsp+rdi*4+360h+var_2E8]
      vmovaps xmm7, xmm6
    }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
      {
        __debugbreak();
        __asm { vmovaps xmm7, xmm6 }
      }
    }
    __asm { vxorps  xmm7, xmm7, xmm12 }
    v138 = v99 <= 3;
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      v139 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
      v138 = !v139;
      if ( v139 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm7, xmm6
      vmovss  xmm8, dword ptr [r12+rdi*4]
    }
    if ( !v138 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+360h+var_330], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+360h+var_338], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v390, v398) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm7, xmm8
      vminss  xmm6, xmm0, xmm6
    }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [r12+rdi*4], xmm6 }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, [rsp+rdi*4+360h+var_2E8]
      vmovaps xmm7, xmm6
    }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
      {
        __debugbreak();
        __asm { vmovaps xmm7, xmm6 }
      }
    }
    __asm { vxorps  xmm7, xmm7, xmm12 }
    v148 = v99 <= 2;
    if ( v99 >= 2 )
    {
      LODWORD(v393) = 2;
      LODWORD(v385) = v99;
      v149 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
      v148 = !v149;
      if ( v149 )
        __debugbreak();
    }
    __asm { vcomiss xmm7, xmm6 }
    if ( !v148 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+360h+var_330], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+360h+var_338], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v391, v399) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm7, [rbp+rdi*4+260h+var_2D8]
      vminss  xmm6, xmm0, xmm6
    }
    if ( v99 >= 2 )
    {
      LODWORD(v393) = 2;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm { vmovss  [rbp+rdi*4+260h+var_2D8], xmm6 }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, [rsp+rdi*4+360h+var_2E8]
      vmovaps xmm7, xmm6
    }
    if ( v99 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
      {
        __debugbreak();
        __asm { vmovaps xmm7, xmm6 }
      }
    }
    __asm { vxorps  xmm7, xmm7, xmm12 }
    v157 = v99 <= 2;
    if ( v99 >= 2 )
    {
      LODWORD(v393) = 2;
      LODWORD(v385) = v99;
      v158 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
      v157 = !v158;
      if ( v158 )
        __debugbreak();
    }
    __asm { vcomiss xmm7, xmm6 }
    if ( !v157 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+360h+var_330], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+360h+var_338], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v392, v400) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm7, [rbp+rdi*4+260h+var_2C0]
      vminss  xmm6, xmm0, xmm6
    }
    if ( v99 >= 2 )
    {
      LODWORD(v393) = 2;
      LODWORD(v385) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
        __debugbreak();
    }
    __asm { vmovss  [rbp+rdi*4+260h+var_2C0], xmm6 }
    ++_RDI;
    v102 = ++v99 < 2;
  }
  while ( (int)v99 < 2 );
  __asm
  {
    vmovss  xmm0, dword ptr [r15+14Ch]
    vmovss  xmm6, [rbp+260h+var_290]
    vcomiss xmm0, xmm6
  }
  _R13 = outRotAccel;
  if ( v99 <= 2 )
  {
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm1, xmm0; cur
      vmovss  xmm2, [rbp+260h+var_278]; rate
    }
  }
  else
  {
    __asm { vcomiss xmm0, xmm14 }
    v167 = DVARFLT_vehHelicopterDecelerationUp;
    if ( !DVARFLT_vehHelicopterDecelerationUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterDecelerationUp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v167);
    __asm
    {
      vmovss  xmm0, [rbp+260h+var_278]
      vmulss  xmm2, xmm0, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [r15+14Ch]
    }
  }
  __asm
  {
    vmovaps xmm3, xmm11; deltaTime
    vmovaps xmm0, xmm6; tgt
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vsubss  xmm1, xmm0, dword ptr [r15+14Ch]
    vmovss  xmm2, [rbp+260h+var_2E0]; max
    vmulss  xmm0, xmm1, xmm10; val
    vxorps  xmm1, xmm2, xmm12; min
    vmovss  dword ptr [r12+8], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [r12+8], xmm0 }
  _RBX = DVARFLT_vehHelicopterMaxYawRate;
  if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm14, dword ptr [rbx+28h] }
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1999, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterMaxYawRate, \"vehHelicopterMaxYawRate\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterMaxYawRate ) > 0.0f") )
    __debugbreak();
  _RBX = DVARFLT_vehHelicopterMaxYawAccel;
  if ( !DVARFLT_vehHelicopterMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v179 = DVARFLT_vehHelicopterMaxYawRate;
  if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v179);
  __asm
  {
    vdivss  xmm8, xmm6, dword ptr [rbx+28h]
    vmovss  xmm13, cs:__real@3f000000
  }
  if ( EntHandle::isDefined(&ent->remoteControlledOwner) )
  {
    G_Utils_GetClientCommonUserCommand(player->client, &outUserCmd);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, cs:__real@3f71e3c8
    }
  }
  else
  {
    _RAX = player->client;
    __asm
    {
      vmovss  xmm6, dword ptr [r15+118h]
      vmovaps xmm3, xmm11; deltaTime
      vmovaps xmm2, xmm8; rate
      vmovss  xmm0, dword ptr [rax+1DCh]; tgt
      vmovaps xmm1, xmm6; cur
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vsubss  xmm0, xmm0, xmm6
      vmulss  xmm5, xmm0, cs:__real@3b360b61
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm5, xmm13
      vmovss  xmm3, xmm1, xmm2
      vroundss xmm4, xmm0, xmm3, 1
      vsubss  xmm1, xmm5, xmm4
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vmulss  xmm6, xmm0, xmm10
    }
  }
  _RBX = DVARFLT_vehHelicopterMaxYawRate;
  if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DVARFLT_vehHelicopterMaxYawRate;
  if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vxorps  xmm1, xmm1, xmm12; min
    vmovaps xmm2, xmm7; max
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm1, dword ptr [r15+16Ch]; cur
    vandps  xmm4, xmm1, xmm9
    vandps  xmm5, xmm0, xmm9
    vcomiss xmm5, xmm4
  }
  if ( !v37 && !v38 )
  {
    __asm
    {
      vmovaps xmm3, xmm11; deltaTime
      vmovaps xmm2, xmm8; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  xmm1, dword ptr [r15+16Ch] }
  }
  __asm
  {
    vsubss  xmm0, xmm0, xmm1
    vmulss  xmm1, xmm0, xmm10
    vmovss  dword ptr [r13+4], xmm1
  }
  _RBX = DVARFLT_vehHelicopterMaxYawAccel;
  if ( !DVARFLT_vehHelicopterMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_vehHelicopterMaxYawAccel;
  if ( !DVARFLT_vehHelicopterMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vmovss  xmm0, dword ptr [r13+4]; val
    vxorps  xmm1, xmm1, xmm12; min
    vmovaps xmm2, xmm6; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm7, cs:__real@418ccccd }
  v224 = 0;
  __asm { vmovss  dword ptr [r13+4], xmm0 }
  _RSI = 0i64;
  do
  {
    v226 = v224 < 3;
    if ( v224 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v224;
      v227 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
      v226 = 0;
      if ( v227 )
        __debugbreak();
    }
    __asm { vcomiss xmm14, [rbp+rsi+260h+var_2D0] }
    if ( !v226 )
    {
      _RDI = DVARFLT_vehHelicopterMaxSpeed;
      if ( !DVARFLT_vehHelicopterMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm14, dword ptr [rdi+28h] }
      if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2028, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterMaxSpeed, \"vehHelicopterMaxSpeed\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterMaxSpeed ) > 0.0f") )
        __debugbreak();
      v229 = DVARFLT_vehHelicopterMaxSpeed;
      if ( !DVARFLT_vehHelicopterMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v229);
      __asm { vmulss  xmm6, xmm7, dword ptr [rdi+28h] }
      if ( v224 >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = v224;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      __asm { vmovss  [rbp+rsi+260h+var_2D0], xmm6 }
    }
    v231 = v224 < 3;
    if ( v224 >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = v224;
      v232 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
      v231 = 0;
      if ( v232 )
        __debugbreak();
    }
    __asm { vcomiss xmm14, [rsp+rsi+360h+var_2E8] }
    if ( !v231 )
    {
      _RDI = DVARFLT_vehHelicopterMaxAccel;
      if ( !DVARFLT_vehHelicopterMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm14, dword ptr [rdi+28h] }
      if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2033, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterMaxAccel, \"vehHelicopterMaxAccel\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterMaxAccel ) > 0.0f") )
        __debugbreak();
      v234 = DVARFLT_vehHelicopterMaxAccel;
      if ( !DVARFLT_vehHelicopterMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v234);
      __asm { vmulss  xmm6, xmm7, dword ptr [rdi+28h] }
      if ( v224 >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = v224;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      __asm { vmovss  [rsp+rsi+360h+var_2E8], xmm6 }
    }
    ++v224;
    _RSI += 4i64;
  }
  while ( (int)v224 < 2 );
  __asm
  {
    vmovss  dword ptr [rbp+260h+var_250], xmm14
    vmovss  xmm0, dword ptr [r15+10Ch]
    vmovss  dword ptr [rbp+260h+var_250+4], xmm0
    vmovss  dword ptr [rbp+260h+var_250+8], xmm14
  }
  AngleVectors(&v434, forward.m, &forward.m[1], &forward.m[2]);
  v237 = DVARFLT_vehHelicopterTiltFromVelocity;
  _R13 = outRotAccel;
  __asm
  {
    vmovss  [rbp+260h+var_20C], xmm14
    vmovss  [rbp+260h+var_208], xmm14
    vmovss  [rbp+260h+var_204], xmm14
  }
  if ( !DVARFLT_vehHelicopterTiltFromVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v237);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+144h]
    vmovss  xmm7, [rbp+260h+var_2D0]
    vdivss  xmm0, xmm0, xmm7
    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
  }
  v243 = DVARFLT_vehHelicopterTiltFromControllerAxes;
  __asm { vmovss  dword ptr [rsp+360h+out], xmm1 }
  if ( !DVARFLT_vehHelicopterTiltFromControllerAxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromControllerAxes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v243);
  __asm
  {
    vmovss  xmm1, [rbp+260h+var_298]
    vdivss  xmm0, xmm1, xmm7
    vmulss  xmm2, xmm0, dword ptr [rbx+28h]
  }
  v247 = DVARFLT_vehHelicopterTiltFromAcceleration;
  __asm
  {
    vaddss  xmm2, xmm2, dword ptr [rsp+360h+out]
    vmovss  dword ptr [rsp+360h+out], xmm2
  }
  if ( !DVARFLT_vehHelicopterTiltFromAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v247);
  __asm
  {
    vmovss  xmm0, [rbp+260h+var_2C0]
    vmovss  xmm6, [rsp+360h+var_2E8]
    vdivss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, dword ptr [rbx+28h]
  }
  v253 = DVARFLT_vehHelicopterTiltFromDeceleration;
  __asm
  {
    vaddss  xmm0, xmm3, dword ptr [rsp+360h+out]
    vmovss  dword ptr [rsp+360h+out], xmm0
  }
  if ( !DVARFLT_vehHelicopterTiltFromDeceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromDeceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v253);
  __asm
  {
    vmovss  xmm0, [rbp+260h+var_2D8]
    vmovss  xmm15, dword ptr [rsp+360h+var_320]
    vmovss  xmm12, cs:__real@bf800000
    vdivss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, dword ptr [rbx+28h]
    vaddss  xmm0, xmm3, dword ptr [rsp+360h+out]; val
    vmovaps xmm2, xmm15; max
    vmovaps xmm1, xmm12; min
    vmovss  dword ptr [rsp+360h+out], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v263 = DVARFLT_vehHelicopterTiltFromVelocity;
  __asm { vmovss  dword ptr [rsp+360h+out], xmm0 }
  if ( !DVARFLT_vehHelicopterTiltFromVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v263);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+148h]
    vmovss  xmm6, [rbp+260h+var_2CC]
    vdivss  xmm0, xmm0, xmm6
    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
  }
  v268 = DVARFLT_vehHelicopterTiltFromControllerAxes;
  __asm { vmovss  dword ptr [rsp+360h+out+4], xmm1 }
  if ( !DVARFLT_vehHelicopterTiltFromControllerAxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromControllerAxes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v268);
  __asm
  {
    vmovss  xmm1, [rbp+260h+var_294]
    vdivss  xmm0, xmm1, xmm6
    vmulss  xmm2, xmm0, dword ptr [rbx+28h]
  }
  v272 = DVARFLT_vehHelicopterTiltFromAcceleration;
  __asm
  {
    vaddss  xmm2, xmm2, dword ptr [rsp+360h+out+4]
    vmovss  dword ptr [rsp+360h+out+4], xmm2
  }
  if ( !DVARFLT_vehHelicopterTiltFromAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v272);
  __asm
  {
    vmovss  xmm0, [rbp+260h+var_2BC]
    vmovss  xmm6, [rsp+360h+var_2E4]
    vdivss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, dword ptr [rbx+28h]
  }
  v278 = DVARFLT_vehHelicopterTiltFromDeceleration;
  __asm
  {
    vaddss  xmm0, xmm3, dword ptr [rsp+360h+out+4]
    vmovss  dword ptr [rsp+360h+out+4], xmm0
  }
  if ( !DVARFLT_vehHelicopterTiltFromDeceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromDeceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v278);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+360h+out+4]
    vmovss  xmm0, [rbp+260h+var_2D4]
    vdivss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, dword ptr [rbx+28h]
    vaddss  xmm4, xmm2, xmm3
    vmovss  dword ptr [rsp+360h+out+4], xmm4
    vcomiss xmm14, dword ptr [r15+144h]
  }
  if ( v280 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15+16Ch]
      vandps  xmm0, xmm0, xmm9
      vcomiss xmm0, xmm14
    }
    if ( !(v280 | v281) )
    {
      __asm { vcomiss xmm7, xmm14 }
      if ( v280 | v281 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2060, ASSERT_TYPE_ASSERT, "(maxSpeed[0] > 0)", (const char *)&queryFormat, "maxSpeed[0] > 0") )
        __debugbreak();
      _RBX = DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+144h]
        vdivss  xmm6, xmm0, xmm7
      }
      if ( !DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( v37 )
      {
        _RBX = DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
        if ( !DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vcomiss xmm14, dword ptr [rbx+28h] }
        if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2064, ASSERT_TYPE_SANITY, "( Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt, \"vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt\" ) > 0 )", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt ) > 0") )
          __debugbreak();
        v293 = DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
        if ( !DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v293);
        __asm { vdivss  xmm6, xmm6, dword ptr [rbx+28h] }
      }
      else
      {
        __asm { vmovaps xmm6, xmm15 }
      }
      _RBX = DVARFLT_vehHelicopterMaxYawRate;
      if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm14, dword ptr [rbx+28h] }
      if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2072, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterMaxYawRate, \"vehHelicopterMaxYawRate\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterMaxYawRate ) > 0.0f") )
        __debugbreak();
      v296 = DVARFLT_vehHelicopterMaxYawRate;
      if ( !DVARFLT_vehHelicopterMaxYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxYawRate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v296);
      __asm
      {
        vmovss  xmm0, dword ptr [r15+16Ch]
        vdivss  xmm7, xmm0, dword ptr [rbx+28h]
      }
      v299 = DVARFLT_vehHelicopterTiltFromFwdAndYaw;
      if ( !DVARFLT_vehHelicopterTiltFromFwdAndYaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltFromFwdAndYaw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v299);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+28h]
        vmovss  xmm1, dword ptr [rsp+360h+out+4]
        vmulss  xmm2, xmm0, xmm7
        vsubss  xmm4, xmm1, xmm2
        vmovss  dword ptr [rsp+360h+out+4], xmm4
      }
    }
  }
  __asm
  {
    vmovaps xmm2, xmm15; max
    vmovaps xmm1, xmm12; min
    vmovaps xmm0, xmm4; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+360h+out]
    vmulss  xmm1, xmm4, dword ptr [rbp+260h+forward]
    vmulss  xmm3, xmm0, dword ptr [rbp+260h+right]
    vmulss  xmm2, xmm4, dword ptr [rbp+260h+forward+4]
  }
  _RBX = DVARFLT_vehHelicopterTiltMomentum;
  __asm
  {
    vaddss  xmm3, xmm3, xmm1
    vmovss  dword ptr [rsp+360h+out+4], xmm0
    vmovss  dword ptr [rsp+360h+out+8], xmm14
    vsubss  xmm7, xmm3, dword ptr [r15+26Ch]
    vmulss  xmm3, xmm0, dword ptr [rbp+260h+right+4]
    vaddss  xmm1, xmm3, xmm2
    vsubss  xmm11, xmm1, dword ptr [r15+270h]
  }
  if ( !DVARFLT_vehHelicopterTiltMomentum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterTiltMomentum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vucomiss xmm14, dword ptr [rbx+28h] }
  if ( v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2084, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterTiltMomentum, \"vehHelicopterTiltMomentum\" ))", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterTiltMomentum )") )
    __debugbreak();
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterTiltSpeed, "vehHelicopterTiltSpeed");
  __asm { vmovaps xmm6, xmm0 }
  Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterTiltMomentum, "vehHelicopterTiltMomentum");
  _RDI = (_DWORD *)_R15->phys.worldTiltVel.v;
  __asm { vdivss  xmm9, xmm6, xmm0 }
  Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterTiltMomentum, "vehHelicopterTiltMomentum");
  __asm
  {
    vmovss  xmm8, dword ptr [rdi]
    vmovss  xmm10, dword ptr [rdi+4]
    vdivss  xmm6, xmm12, xmm0
  }
  G_Vehicle_GetDeltaTime();
  __asm
  {
    vmulss  xmm2, xmm9, xmm7
    vmulss  xmm1, xmm6, xmm8
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm7, xmm3, dword ptr [rdi]
    vmulss  xmm2, xmm6, xmm10
    vmovss  dword ptr [rdi], xmm7
    vmulss  xmm1, xmm11, xmm9
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm0
    vaddss  xmm6, xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm6
  }
  G_Vehicle_GetDeltaTime();
  __asm
  {
    vaddss  xmm1, xmm7, xmm8
    vmulss  xmm2, xmm1, xmm13
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, dword ptr [r15+26Ch]
    vmovss  dword ptr [r15+26Ch], xmm4
    vaddss  xmm1, xmm6, xmm10
    vmulss  xmm2, xmm1, xmm13
    vmulss  xmm0, xmm2, xmm0
    vaddss  xmm3, xmm0, dword ptr [r15+270h]
    vmovss  dword ptr [r15+270h], xmm3
  }
  for ( i = 0; (int)i < 2; ++i )
  {
    v341 = i < 3;
    if ( i >= 3 )
    {
      LODWORD(v393) = 3;
      LODWORD(v385) = i;
      v342 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
      v341 = 0;
      if ( v342 )
        __debugbreak();
    }
    __asm { vcomiss xmm15, dword ptr [rdi-0Ch] }
    if ( v341 )
    {
      if ( i >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
          __debugbreak();
      }
      *(_RDI - 3) = 1065353216;
      v343 = i < 3;
      if ( i >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = i;
        v344 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
        v343 = 0;
        if ( v344 )
          __debugbreak();
      }
      __asm { vcomiss xmm14, dword ptr [rdi] }
      if ( v343 )
        goto LABEL_321;
    }
    else
    {
      v345 = i <= 3;
      if ( i >= 3 )
      {
        LODWORD(v393) = 3;
        LODWORD(v385) = i;
        v346 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
        v345 = !v346;
        if ( v346 )
          __debugbreak();
      }
      __asm { vcomiss xmm12, dword ptr [rdi-0Ch] }
      if ( !v345 )
      {
        if ( i >= 3 )
        {
          LODWORD(v393) = 3;
          LODWORD(v385) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
            __debugbreak();
        }
        *(_RDI - 3) = -1082130432;
        v347 = i <= 3;
        if ( i >= 3 )
        {
          LODWORD(v393) = 3;
          LODWORD(v385) = i;
          v348 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393);
          v347 = !v348;
          if ( v348 )
            __debugbreak();
        }
        __asm { vcomiss xmm14, dword ptr [rdi] }
        if ( !v347 )
        {
LABEL_321:
          if ( i >= 3 )
          {
            LODWORD(v393) = 3;
            LODWORD(v385) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v385, v393) )
              __debugbreak();
          }
          *_RDI = 0;
        }
      }
    }
    ++_RDI;
  }
  MatrixTransposeTransformVector43(&_R15->phys.worldTilt, &forward, &out);
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterMaxPitch, "vehHelicopterMaxPitch");
  __asm { vmulss  xmm6, xmm0, dword ptr [rsp+360h+out] }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterPitchOffset, "vehHelicopterPitchOffset");
  __asm
  {
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r13+0], xmm1
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterMaxRoll, "vehHelicopterMaxRoll");
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rsp+360h+out+4]
    vmovss  dword ptr [r13+8], xmm1
    vmovss  xmm3, dword ptr [r15+148h]
    vmovss  xmm0, dword ptr [r15+144h]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm7, xmm2, xmm1
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterHoverSpeedThreshold, "vehHelicopterHoverSpeedThreshold");
  __asm { vmovaps xmm6, xmm0 }
  Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterHoverSpeedThreshold, "vehHelicopterHoverSpeedThreshold");
  _R12 = outBodyAccel;
  __asm
  {
    vmulss  xmm1, xmm6, xmm0
    vcomiss xmm7, xmm1
  }
  if ( v37 )
  {
    _RBX = DVARFLT_vehHelicopterHoverSpeedThreshold;
    if ( !DVARFLT_vehHelicopterHoverSpeedThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterHoverSpeedThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm14, dword ptr [rbx+28h] }
    if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2119, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterHoverSpeedThreshold, \"vehHelicopterHoverSpeedThreshold\" ) > 0)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterHoverSpeedThreshold ) > 0") )
      __debugbreak();
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterHoverSpeedThreshold, "vehHelicopterHoverSpeedThreshold");
    __asm
    {
      vsqrtss xmm1, xmm7, xmm7
      vsubss  xmm6, xmm0, xmm1
    }
    Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterHoverSpeedThreshold, "vehHelicopterHoverSpeedThreshold");
    __asm { vdivss  xmm6, xmm6, xmm0 }
    G_VehicleHeli_UpdateJitter(&_R15->jitter);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [r15+5F4h]
      vaddss  xmm1, xmm0, dword ptr [r13+0]
      vmovss  dword ptr [r13+0], xmm1
      vmulss  xmm0, xmm6, dword ptr [r15+5FCh]
      vaddss  xmm1, xmm0, dword ptr [r13+8]
      vmovss  dword ptr [r13+8], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  dword ptr [rsp+360h+var_320], xmm0
  }
  if ( (v402 & 0x7F800000) == 2139095040 )
    goto LABEL_347;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  dword ptr [rsp+360h+var_320], xmm0
  }
  if ( (v403 & 0x7F800000) == 2139095040 )
    goto LABEL_347;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  dword ptr [rsp+360h+var_320], xmm0
  }
  if ( (v404 & 0x7F800000) == 2139095040 )
  {
LABEL_347:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2128, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  dword ptr [rsp+360h+var_320], xmm0
  }
  if ( (v405 & 0x7F800000) == 2139095040 )
    goto LABEL_348;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+4]
    vmovss  dword ptr [rsp+360h+var_320], xmm0
  }
  if ( (v406 & 0x7F800000) == 2139095040 )
    goto LABEL_348;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  dword ptr [rsp+360h+var_320], xmm0
  }
  if ( (v407 & 0x7F800000) == 2139095040 )
  {
LABEL_348:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2129, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] )") )
      __debugbreak();
  }
  _R11 = &v438;
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
G_VehicleHeli_CalcAccelFraction
==============
*/

float __fastcall G_VehicleHeli_CalcAccelFraction(double accel, double vehDefAccel)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm6, xmm1
    vmovaps xmm8, xmm0
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm8; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vdivss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
G_VehicleHeli_CancelAiMove
==============
*/
void G_VehicleHeli_CancelAiMove(gentity_s *ent)
{
  char v11; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  char v49; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 54, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 55, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  _RDI = ent->vehicle;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+0E8h+angles], xmm6
    vmovss  xmm0, dword ptr [rdi+10Ch]
    vmovss  dword ptr [rsp+0E8h+angles+4], xmm0
    vmovss  dword ptr [rsp+0E8h+angles+8], xmm6
  }
  AngleVectors(&angles, &forward, &right, &up);
  _RBX = DVARFLT_vehHelicopterMaxPitch;
  __asm
  {
    vmovss  [rsp+0E8h+var_74], xmm6
    vmovss  [rsp+0E8h+var_70], xmm6
    vmovss  [rsp+0E8h+var_6C], xmm6
  }
  if ( !DVARFLT_vehHelicopterMaxPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxPitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vcomiss xmm6, dword ptr [rbx+28h]
    vmovss  xmm7, cs:__real@3f800000
  }
  if ( v11 )
  {
    _RBX = DVARFLT_vehHelicopterMaxPitch;
    if ( !DVARFLT_vehHelicopterMaxPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxPitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovaps xmm8, xmm7 }
  }
  _RBX = DVARFLT_vehHelicopterMaxRoll;
  if ( !DVARFLT_vehHelicopterMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxRoll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v11 )
  {
    _RBX = DVARFLT_vehHelicopterMaxRoll;
    if ( !DVARFLT_vehHelicopterMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterMaxRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+108h]
    vmovss  xmm1, dword ptr [rdi+110h]
  }
  _RBX = &_RDI->phys.worldTilt;
  __asm
  {
    vdivss  xmm8, xmm0, xmm8
    vdivss  xmm7, xmm1, xmm7
  }
  if ( &v49 == (char *)&_RDI->phys.worldTilt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmulss  xmm3, xmm8, dword ptr [rsp+0E8h+forward]
    vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+right]
    vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+up]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx], xmm2
    vmulss  xmm3, xmm8, dword ptr [rsp+0E8h+forward+4]
    vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+right+4]
    vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+up+4]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+4], xmm2
    vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+right+8]
    vmulss  xmm3, xmm8, dword ptr [rsp+0E8h+forward+8]
    vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+up+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+8], xmm2
  }
  *(_QWORD *)_RDI->phys.worldTiltVel.v = 0i64;
  _RDI->phys.worldTiltVel.v[2] = 0.0;
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
G_VehicleHeli_CheckForPredictedCrash
==============
*/
void G_VehicleHeli_CheckForPredictedCrash(gentity_s *ent)
{
  char v5; 
  int number; 
  int contentmask; 
  char v19; 
  scrContext_t *v20; 
  vec3_t end; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2218, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2219, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  _RSI = DVARFLT_vehHelicopterLookaheadTime;
  _RBX = ent->vehicle;
  if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rsi+28h]
  }
  if ( !v5 )
  {
    _RSI = _RBX->phys.vel.v;
    __asm { vucomiss xmm0, dword ptr [rsi] }
    if ( v5 )
    {
      __asm { vucomiss xmm0, dword ptr [rbx+13Ch] }
      if ( v5 )
        __asm { vucomiss xmm0, dword ptr [rbx+140h] }
    }
    _RBP = DVARFLT_vehHelicopterLookaheadTime;
    if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+28h]
      vmulss  xmm0, xmm2, dword ptr [rsi]
      vaddss  xmm1, xmm0, dword ptr [rbx+0F0h]
    }
    number = ent->s.number;
    contentmask = ent->clipmask;
    __asm
    {
      vmovss  dword ptr [rsp+0E8h+end], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+4]
      vaddss  xmm1, xmm0, dword ptr [rbx+0F4h]
      vmovss  dword ptr [rsp+0E8h+end+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+8]
      vaddss  xmm1, xmm0, dword ptr [rbx+0F8h]
      vmovss  dword ptr [rsp+0E8h+end+8], xmm1
    }
    G_Main_TraceCapsule(&results, &_RBX->phys.origin, &end, &_RBX->phys.bounds, number, contentmask);
    __asm
    {
      vmovss  xmm0, [rsp+0E8h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
    if ( v19 )
    {
      v20 = ScriptContext_Server();
      Scr_AddVector(v20, results.normal.v);
      Scr_AddVector(v20, _RSI);
      GScr_Notify(ent, scr_const.veh_predictedcollision, 2u);
    }
  }
}

/*
==============
G_VehicleHeli_CheckHorizontalVelocityToGoal
==============
*/

void __fastcall G_VehicleHeli_CheckHorizontalVelocityToGoal(HeliPathPos *pathPos, const vec2_t *vecToGoal, double accelMax, vec3_t *inOutAccelVec)
{
  bool v26; 
  char v46; 
  bool v54; 
  bool v73; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rdx]
    vmovaps xmmword ptr [rax-28h], xmm6
  }
  _RDI = inOutAccelVec;
  __asm
  {
    vmulss  xmm3, xmm0, xmm0
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RSI = vecToGoal;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm3, xmm3, xmm1
    vsqrtss xmm6, xmm3, xmm3
    vcomiss xmm6, xmm7
    vmovaps [rsp+0E8h+var_B8], xmm15
  }
  _RBX = pathPos;
  __asm { vmovaps xmm15, xmm2 }
  v26 = pathPos->stopAtGoal == 0;
  __asm
  {
    vmovss  xmm2, dword ptr [rcx+24h]
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovss  xmm9, dword ptr [rcx+20h]
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0E8h+var_88], xmm12
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm8, xmm1, xmm0
    vmovaps [rsp+0E8h+var_98], xmm13
    vsqrtss xmm10, xmm8, xmm8
    vmovaps [rsp+0E8h+var_A8], xmm14
    vxorps  xmm12, xmm12, xmm12
  }
  if ( v26 )
  {
    __asm
    {
      vucomiss xmm6, xmm12
      vmovaps xmm11, xmm2
    }
    if ( v26 )
    {
      v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 539, ASSERT_TYPE_ASSERT, "(horizontalDist)", (const char *)&queryFormat, "horizontalDist");
      v26 = !v54;
      if ( v54 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+4]
      vmovss  xmm3, dword ptr [rsi]
      vmulss  xmm1, xmm3, xmm11
      vmulss  xmm0, xmm4, xmm9
      vsubss  xmm2, xmm1, xmm0
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm2, xmm6
    }
    if ( !v26 )
    {
      __asm
      {
        vmulss  xmm1, xmm4, dword ptr [rbx+24h]
        vmulss  xmm0, xmm3, dword ptr [rbx+20h]
        vaddss  xmm1, xmm1, xmm0
        vdivss  xmm9, xmm7, xmm10
        vmulss  xmm5, xmm2, xmm9
        vmulss  xmm2, xmm1, xmm9
        vmovss  xmm1, cs:__real@3f000000
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm4, xmm3, xmm0
        vdivss  xmm2, xmm1, xmm5
        vmulss  xmm6, xmm4, xmm2
        vcomiss xmm6, xmm12
      }
      if ( v26 )
      {
        v73 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 551, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f");
        v26 = !v73;
        if ( v73 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm7 }
      if ( !v26 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm15
          vcomiss xmm8, xmm0
          vucomiss xmm6, xmm12
        }
        if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 561, ASSERT_TYPE_ASSERT, "(radius)", (const char *)&queryFormat, "radius") )
          __debugbreak();
        __asm
        {
          vdivss  xmm0, xmm8, xmm6
          vminss  xmm6, xmm0, xmm10
        }
        if ( !_RBX->stopAtGoal )
          __asm { vmovss  xmm7, dword ptr [rbx+2A4h] }
        *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
        __asm
        {
          vmulss  xmm1, xmm7, xmm6
          vmulss  xmm2, xmm1, xmm9
          vmulss  xmm0, xmm0, xmm2
          vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm2, xmm3, dword ptr [rbx+20h]
          vmulss  xmm4, xmm3, dword ptr [rbx+24h]
          vaddss  xmm0, xmm2, dword ptr [rbx+20h]
          vmovss  dword ptr [rbx+20h], xmm0
          vaddss  xmm1, xmm4, dword ptr [rbx+24h]
          vmovss  dword ptr [rbx+24h], xmm1
          vaddss  xmm0, xmm2, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
          vaddss  xmm0, xmm4, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm0
        }
      }
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm13, xmm9, dword ptr [r9]
      vaddss  xmm14, xmm2, dword ptr [r9+4]
      vmulss  xmm1, xmm14, xmm14
      vmulss  xmm0, xmm13, xmm13
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm11, xmm1, xmm1
      vcomiss xmm11, xmm12
    }
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmovss  xmm1, cs:__real@3f000000
      vdivss  xmm2, xmm1, xmm6
      vmulss  xmm3, xmm2, xmm8
      vmulss  xmm4, xmm0, xmm3
      vsubss  xmm0, xmm11, xmm10
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm4, xmm0
    }
    if ( !(v46 | v26) )
    {
      __asm
      {
        vsubss  xmm0, xmm10, xmm4
        vdivss  xmm3, xmm0, xmm11
        vmulss  xmm1, xmm13, xmm3
        vsubss  xmm2, xmm1, dword ptr [rbx+20h]
        vmulss  xmm0, xmm14, xmm3
        vmovss  dword ptr [rdi], xmm2
        vsubss  xmm1, xmm0, dword ptr [rbx+24h]
        vmovss  dword ptr [rdi+4], xmm1
      }
    }
  }
  __asm
  {
    vmovaps xmm12, [rsp+0E8h+var_88]
    vmovaps xmm11, [rsp+0E8h+var_78]
    vmovaps xmm10, [rsp+0E8h+var_68]
    vmovaps xmm9, [rsp+0E8h+var_58]
    vmovaps xmm8, [rsp+0E8h+var_48]
    vmovaps xmm13, [rsp+0E8h+var_98]
    vmovaps xmm14, [rsp+0E8h+var_A8]
    vmovaps xmm6, [rsp+0E8h+var_28]
    vmovaps xmm7, [rsp+0E8h+var_38]
    vmovaps xmm15, [rsp+0E8h+var_B8]
  }
}

/*
==============
G_VehicleHeli_CmdScale
==============
*/
void G_VehicleHeli_CmdScale(const char *move, vec4_t *outFracs)
{
  int v11; 
  const char *v12; 
  int v20; 
  int v21; 
  char v29; 
  const dvar_t *v30; 
  bool v31; 
  bool v37; 
  bool v38; 
  __int64 v55; 
  __int64 v56; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = outFracs;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( !move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1769, ASSERT_TYPE_ASSERT, "(move)", (const char *)&queryFormat, "move") )
    __debugbreak();
  __asm { vmovss  xmm7, cs:__real@3c000000 }
  v11 = 0;
  v12 = move;
  _RBP = _RDI;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, xmm7
    }
    if ( (unsigned int)v11 >= 4 )
    {
      LODWORD(v56) = 4;
      LODWORD(v55) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v55, v56) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rbp+0], xmm6 }
    _RBP = (vec4_t *)((char *)_RBP + 4);
    ++v11;
    ++v12;
  }
  while ( v11 < 4 );
  __asm { vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( *(_WORD *)move )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+4]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
    }
    v20 = abs8(*move);
    v21 = abs8(move[1]);
    __asm { vsqrtss xmm1, xmm0, xmm0 }
    if ( v21 > v20 )
      v20 = v21;
    if ( v20 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm2, xmm0, xmm1
        vmulss  xmm1, xmm2, dword ptr [rdi]
        vmulss  xmm6, xmm6, xmm2
        vmovss  dword ptr [rdi], xmm1
        vmovss  dword ptr [rdi+4], xmm6
      }
    }
    _RBX = DVARFLT_vehHelicopterStrafeDeadzone;
    __asm { vandps  xmm6, xmm6, xmm9 }
    if ( !DVARFLT_vehHelicopterStrafeDeadzone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterStrafeDeadzone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( v29 )
      _RDI->v[1] = 0.0;
    v30 = DVARBOOL_vehHelicopterScaleMovement;
    if ( !DVARBOOL_vehHelicopterScaleMovement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterScaleMovement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v31 = !v30->current.enabled;
    if ( v30->current.enabled )
    {
      __asm
      {
        vmovss  xmm7, dword ptr [rdi]
        vmovss  xmm6, dword ptr [rdi+4]
        vmovaps [rsp+0A8h+var_58], xmm8
        vmovss  xmm8, cs:__real@3f800000
        vandps  xmm7, xmm7, xmm9
        vcomiss xmm7, xmm8
        vandps  xmm6, xmm6, xmm9
      }
      if ( v30->current.enabled )
      {
        v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1800, ASSERT_TYPE_ASSERT, "(absAxis[0] <= 1.0f)", (const char *)&queryFormat, "absAxis[0] <= 1.0f");
        v31 = !v37;
        if ( v37 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm8 }
      if ( !v31 )
      {
        v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1801, ASSERT_TYPE_ASSERT, "(absAxis[1] <= 1.0f)", (const char *)&queryFormat, "absAxis[1] <= 1.0f");
        v31 = !v38;
        if ( v38 )
          __debugbreak();
      }
      __asm { vcomiss xmm7, xmm6 }
      if ( v31 )
      {
        __asm
        {
          vsubss  xmm0, xmm6, xmm7
          vsubss  xmm0, xmm8, xmm0
          vmulss  xmm1, xmm0, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vsubss  xmm0, xmm8, xmm0
          vmulss  xmm1, xmm0, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm1
        }
      }
      __asm { vmovaps xmm8, [rsp+0A8h+var_58] }
    }
  }
  _RBX = DVARFLT_vehHelicopterRightStickDeadzone;
  __asm
  {
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovss  xmm6, dword ptr [rdi+8]
    vandps  xmm6, xmm6, xmm9
  }
  if ( !DVARFLT_vehHelicopterRightStickDeadzone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterRightStickDeadzone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v29 )
    _RDI->v[2] = 0.0;
  __asm { vmovss  xmm6, dword ptr [rdi+0Ch] }
  _RBX = DVARFLT_vehHelicopterRightStickDeadzone;
  __asm
  {
    vandps  xmm6, xmm6, xmm9
    vmovaps xmm9, [rsp+0A8h+var_68]
  }
  if ( !DVARFLT_vehHelicopterRightStickDeadzone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterRightStickDeadzone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vcomiss xmm6, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  if ( v29 )
    _RDI->v[3] = 0.0;
}

/*
==============
G_VehicleHeli_ContactRotors
==============
*/
__int64 G_VehicleHeli_ContactRotors(const gentity_s *vehEnt, const gentity_s *pOther)
{
  Vehicle *vehicle; 
  bool v13; 
  char v14; 
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v18; 
  BgVehiclePhysics *ObjectById; 
  float v21; 
  char v34; 
  GHandler *Handler; 
  __int64 result; 
  GHandler *v42; 
  float plRadius; 
  float plRadiusa; 
  vec3_t plCapStart; 
  vec3_t plCapEnd; 
  vec3_t planePos; 
  char v55[12]; 
  vec3_t v56; 
  vec3_t planeNormal; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _R14 = pOther;
  if ( !vehEnt )
    goto LABEL_40;
  if ( !pOther )
    goto LABEL_40;
  vehicle = vehEnt->vehicle;
  if ( !vehicle )
    goto LABEL_40;
  _RBX = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2439, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( _R14->s.eType != ET_PLAYER )
    goto LABEL_40;
  v13 = _RBX->vehiclePhysicsDef.physicsEnabled && _RBX->type == VEH_AIRCRAFT && _RBX->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_ROTARYWING && BGVehicles::PhysicsIsValid(vehicle->physicsVehicle);
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_vehLegacyHeliRotorsDamage, "vehLegacyHeliRotorsDamage") )
    goto LABEL_18;
  if ( vehEnt->s.eType != ET_HELICOPTER )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm0, dword ptr [rbx+0EF4h]
  }
  if ( vehEnt->s.eType < ET_HELICOPTER )
    v14 = 1;
  else
LABEL_18:
    v14 = 0;
  if ( !v13 && !v14 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm7, cs:__real@47c35000
    vmovaps xmm6, xmm7
  }
  if ( v13 )
  {
    VehicleSystem = GVehicles::GetVehicleSystem();
    v18 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v18, vehicle->physicsVehicle);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2470, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( ObjectById->m_vehicleGameProfile != VEH_GAMEPROFILE_ROTARYWING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2471, ASSERT_TYPE_ASSERT, "(vehObj->GetGameProfile() == VEH_GAMEPROFILE_ROTARYWING)", (const char *)&queryFormat, "vehObj->GetGameProfile() == VEH_GAMEPROFILE_ROTARYWING") )
      __debugbreak();
    if ( *((_BYTE *)&ObjectById[3].m_controls.DefaultPolicy + 2) < 2u )
      goto LABEL_40;
    *(double *)&_XMM0 = HelicopterDynamics::GetRPMForRotorIndex((HelicopterDynamics *)ObjectById, 0);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = HelicopterDynamics::GetRPMForRotorIndex((HelicopterDynamics *)ObjectById, 1);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm { vmovsd  xmm1, qword ptr [r14+130h] }
  v21 = _R14->r.currentOrigin.v[2];
  __asm { vmovsd  qword ptr [rsp+118h+plCapStart], xmm1 }
  plCapStart.v[2] = v21;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerCapHeight, "bg_vehHeliPlayerCapHeight");
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmaxss  xmm3, xmm0, xmm8
    vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm0, xmm1, dword ptr [rsp+118h+plCapStart]
    vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm1, xmm2, dword ptr [rsp+118h+plCapStart+4]
    vmovss  dword ptr [rsp+118h+plCapEnd], xmm0
    vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm2, xmm0, dword ptr [rsp+118h+plCapStart+8]
    vmovss  dword ptr [rsp+118h+plCapEnd+8], xmm2
    vmovss  dword ptr [rsp+118h+plCapEnd+4], xmm1
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerCapRadius, "bg_vehHeliPlayerCapRadius");
  __asm
  {
    vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmaxss  xmm10, xmm0, xmm8
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerMinRPMMain, "bg_vehHeliPlayerMinRPMMain");
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmaxss  xmm0, xmm0, xmm9
    vcomiss xmm7, xmm0
  }
  if ( v34 )
    goto LABEL_36;
  Handler = GHandler::getHandler();
  if ( !Handler->GetWorldTagMatrix(Handler, vehEnt->s.number, (const scr_string_t)scr_const.main_rotor_jnt, (tmat33_t<vec3_t> *)v55, &planePos) )
    goto LABEL_36;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliBladesRadiusMain, "bg_vehHeliBladesRadiusMain");
  __asm { vmovaps xmm2, xmm0 }
  if ( !v13 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+0EF4h]
      vcmpltss xmm0, xmm9, xmm1
      vblendvps xmm2, xmm2, xmm1, xmm0
    }
  }
  __asm
  {
    vmovss  [rsp+118h+plRadius], xmm10
    vmaxss  xmm2, xmm2, xmm8; bladesRad
  }
  if ( !G_VehicleHeli_RotorContactPlayer(&planePos, &planeNormal, *(float *)&_XMM2, &plCapStart, &plCapEnd, plRadius) )
  {
LABEL_36:
    __asm { vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerMinRPMTail, "bg_vehHeliPlayerMinRPMTail");
    __asm
    {
      vmaxss  xmm0, xmm0, xmm9
      vcomiss xmm6, xmm0
    }
    if ( !v34 )
    {
      v42 = GHandler::getHandler();
      if ( v42->GetWorldTagMatrix(v42, vehEnt->s.number, (const scr_string_t)scr_const.tail_rotor_jnt, (tmat33_t<vec3_t> *)v55, &planePos) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliBladesRadiusTail, "bg_vehHeliBladesRadiusTail");
        __asm
        {
          vmovss  [rsp+118h+plRadius], xmm10
          vmaxss  xmm2, xmm0, xmm8; bladesRad
        }
        if ( G_VehicleHeli_RotorContactPlayer(&planePos, &v56, *(float *)&_XMM2, &plCapStart, &plCapEnd, plRadiusa) )
        {
          result = 2i64;
          goto LABEL_41;
        }
      }
    }
LABEL_40:
    result = 0i64;
    goto LABEL_41;
  }
  result = 1i64;
LABEL_41:
  _R11 = &v58;
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
G_VehicleHeli_GetHoverAccel
==============
*/
float G_VehicleHeli_GetHoverAccel(const HeliPathPos *pathPos)
{
  if ( pathPos->ent->vehicle->useDroneLogic )
    __asm { vmovss  xmm0, cs:__real@41b70a3d }
  else
    __asm { vmovss  xmm0, dword ptr [rcx+4Ch] }
  return *(float *)&_XMM0;
}

/*
==============
G_VehicleHeli_GetHoverDecel
==============
*/
float G_VehicleHeli_GetHoverDecel(const HeliPathPos *pathPos)
{
  if ( pathPos->ent->vehicle->useDroneLogic )
  {
    __asm { vmovss  xmm0, cs:__real@41b70a3d }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+4Ch]
      vmulss  xmm0, xmm0, cs:__real@3f000000
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
G_VehicleHeli_GetHoverSpeed
==============
*/
float G_VehicleHeli_GetHoverSpeed(const HeliPathPos *pathPos)
{
  if ( pathPos->ent->vehicle->useDroneLogic )
    __asm { vmovss  xmm0, cs:__real@41d33333 }
  else
    __asm { vmovss  xmm0, dword ptr [rcx+48h] }
  return *(float *)&_XMM0;
}

/*
==============
G_VehicleHeli_GetNewSpeedAndAccel
==============
*/

void __fastcall G_VehicleHeli_GetNewSpeedAndAccel(const HeliPathPos *pathPos, double dt, int hovering, float *newSpeed, float *accelMax)
{
  char v31; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps [rsp+78h+var_28], xmm7 }
  _RSI = newSpeed;
  __asm { vmovaps xmmword ptr [r11-38h], xmm8 }
  _RBX = pathPos;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmm9, xmm1
  }
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 721, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  if ( hovering )
  {
    if ( _RBX->ent->vehicle->useDroneLogic )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@41b70a3d
        vmovss  xmm7, cs:__real@41d33333
        vmovaps xmm8, xmm6
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+4Ch]
        vmulss  xmm8, xmm6, cs:__real@3f000000
        vmovss  xmm7, dword ptr [rbx+48h]
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+0B0h]
      vmovss  xmm6, dword ptr [rbx+0B4h]
      vmovss  xmm8, dword ptr [rbx+0B8h]
    }
  }
  if ( _RBX->stopping )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm7, xmm0
      vmovaps xmm8, xmm6
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]; speed
    vmovaps xmm3, xmm9; dt
    vmovaps xmm2, xmm8; accel
    vmovaps xmm1, xmm7; tgtSpeed
  }
  *(double *)&_XMM0 = Vehicle_AccelerateSpeed(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  _RAX = accelMax;
  _R11 = &v31;
  __asm
  {
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rax], xmm8
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
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
  __asm
  {
    vmaxss  xmm0, xmm1, cs:__real@3f800000
    vmulss  xmm1, xmm0, cs:__real@418ccccd
    vmovss  dword ptr [rcx+0BCh], xmm1
  }
}

/*
==============
G_VehicleHeli_PathSetGoal
==============
*/
void G_VehicleHeli_PathSetGoal(HeliPathPos *pathPos, const HeliPathNodeData *node)
{
  const HeliPathNodeData *v5; 
  HeliPathPos *v7; 
  bool v13; 
  int v31; 
  bool goalYawDefined; 

  v5 = node;
  __asm { vmovss  xmm3, cs:__real@418ccccd }
  v7 = pathPos;
  if ( node->setAirResistance )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+4]
      vmaxss  xmm1, xmm0, cs:__real@3f800000
      vmulss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rcx+0BCh], xmm2
    }
  }
  if ( node->setSpeed )
  {
    if ( node->hasAccel )
    {
      __asm { vmovss  xmm0, dword ptr [rdx+14h] }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+0Ch]
        vmulss  xmm1, xmm0, cs:__real@3e800000
        vmaxss  xmm2, xmm1, cs:__real@41700000
        vminss  xmm0, xmm2, cs:__real@41c80000
      }
    }
    v13 = !node->hasDecel;
    __asm
    {
      vmulss  xmm2, xmm0, xmm3
      vmovss  xmm0, dword ptr [rdx+0Ch]
    }
    if ( node->hasDecel )
    {
      __asm
      {
        vxorps  xmm5, xmm5, xmm5
        vcomiss xmm2, xmm5
        vmaxss  xmm0, xmm0, xmm5
        vmulss  xmm4, xmm0, xmm3
        vmovaps [rsp+48h+var_18], xmm6
        vmovss  xmm6, dword ptr [rdx+1Ch]
        vmovss  dword ptr [rcx+0B0h], xmm4
        vmovss  dword ptr [rcx+0B4h], xmm2
      }
      if ( v13 )
      {
        pathPos->manualAccel = 17.6;
        __asm { vmovaps xmm2, xmm3 }
      }
      __asm { vcomiss xmm4, dword ptr [rcx+4] }
      if ( !v13 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+0B4h]
          vcmpltss xmm1, xmm4, xmm2
          vblendvps xmm1, xmm0, xmm4, xmm1
          vmovss  dword ptr [rcx+0B4h], xmm1
        }
      }
      __asm
      {
        vmulss  xmm0, xmm6, xmm3
        vcomiss xmm0, xmm5
        vmovaps xmm6, [rsp+48h+var_18]
        vmovss  dword ptr [rcx+0B8h], xmm0
      }
      if ( v13 )
        pathPos->manualDecel = 17.6;
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm2, xmm1
        vmaxss  xmm0, xmm0, xmm1
        vmulss  xmm4, xmm0, xmm3
        vmovss  dword ptr [rcx+0B0h], xmm4
        vmovss  dword ptr [rcx+0B4h], xmm2
      }
      if ( v13 )
      {
        pathPos->manualAccel = 17.6;
        __asm { vmovaps xmm2, xmm3 }
      }
      __asm
      {
        vcomiss xmm4, dword ptr [rcx+4]
        vmovaps xmm0, xmm2
      }
      if ( !v13 )
        __asm { vcomiss xmm4, xmm2 }
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f000000
        vmovss  dword ptr [rcx+0B8h], xmm0
      }
    }
  }
  if ( node->stopNode || node->unload || node->flagWait || node->endOfPath || (v31 = 0, node->hasDelay) )
    v31 = 1;
  goalYawDefined = node->goalYawDefined;
  if ( node->setGoalYaw )
  {
    if ( !goalYawDefined && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1228, ASSERT_TYPE_ASSERT, "(node->goalYawDefined)", (const char *)&queryFormat, "node->goalYawDefined") )
      __debugbreak();
    v7->targetYaw = 0.0;
    v7->hasTargetYaw = 0;
    v7->goalYaw = v5->yaw;
    v7->hasGoalYaw = 1;
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
  v7->goalPosition.v[0] = v5->origin.v[0];
  v7->goalPosition.v[1] = v5->origin.v[1];
  v7->goalPosition.v[2] = v5->origin.v[2];
  v7->stopAtGoal = v31;
  v7->stopping = 0;
  v7->moveState = VEH_MOVESTATE_MOVE;
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

void __fastcall G_VehicleHeli_PathSetGoalYaw(HeliPathPos *pathPos, double yaw)
{
  __asm { vmovss  dword ptr [rcx+2C0h], xmm1 }
  pathPos->hasGoalYaw = 1;
}

/*
==============
G_VehicleHeli_PathSetSpeed
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeed(HeliPathPos *pathPos, double speed, double accel, double _XMM3_8)
{
  char v4; 
  char v5; 

  __asm
  {
    vmovss  xmm5, cs:__real@418ccccd
    vxorps  xmm3, xmm3, xmm3
    vmaxss  xmm0, xmm1, xmm3
    vmulss  xmm1, xmm2, xmm5
    vcomiss xmm1, xmm3
    vmulss  xmm4, xmm0, xmm5
    vmovss  dword ptr [rcx+0B0h], xmm4
    vmovss  dword ptr [rcx+0B4h], xmm1
  }
  if ( v4 | v5 )
  {
    pathPos->manualAccel = 17.6;
    __asm { vmovaps xmm1, xmm5 }
  }
  __asm { vcomiss xmm4, dword ptr [rcx+4] }
  if ( !(v4 | v5) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0B4h]
      vcmpltss xmm1, xmm4, xmm1
      vblendvps xmm1, xmm0, xmm4, xmm1
      vmovss  dword ptr [rcx+0B4h], xmm1
    }
  }
}

/*
==============
G_VehicleHeli_PathSetSpeedAccel
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeedAccel(HeliPathPos *pathPos, double speed, double accel, double _XMM3_8)
{
  char v4; 
  char v5; 

  __asm
  {
    vmovss  xmm5, cs:__real@418ccccd
    vxorps  xmm3, xmm3, xmm3
    vmaxss  xmm0, xmm1, xmm3
    vmulss  xmm4, xmm0, xmm5
    vmulss  xmm0, xmm2, xmm5
    vcomiss xmm0, xmm3
    vmovss  dword ptr [rcx+0B0h], xmm4
    vmovss  dword ptr [rcx+0B4h], xmm0
  }
  if ( v4 | v5 )
  {
    pathPos->manualAccel = 17.6;
    __asm { vmovaps xmm0, xmm5 }
  }
  __asm { vcomiss xmm4, dword ptr [rcx+4] }
  if ( v4 | v5 )
    goto LABEL_6;
  __asm { vcomiss xmm4, xmm0 }
  if ( !v4 )
  {
LABEL_6:
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vmovss  dword ptr [rcx+0B8h], xmm0
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm4, cs:__real@3f000000
      vmovss  dword ptr [rcx+0B8h], xmm0
      vmovss  dword ptr [rcx+0B4h], xmm4
    }
  }
}

/*
==============
G_VehicleHeli_PathSetSpeedAccelDecel
==============
*/

void __fastcall G_VehicleHeli_PathSetSpeedAccelDecel(HeliPathPos *pathPos, double speed, double accel, double decel)
{
  __asm
  {
    vmovss  xmm4, cs:__real@418ccccd
    vmovaps [rsp+18h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vmaxss  xmm0, xmm1, xmm6
    vmulss  xmm1, xmm2, xmm4
    vcomiss xmm1, xmm6
    vmulss  xmm5, xmm0, xmm4
    vmovss  dword ptr [rcx+0B0h], xmm5
    vmovss  dword ptr [rcx+0B4h], xmm1
    vcomiss xmm5, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+0B4h]
    vcmpltss xmm1, xmm5, xmm1
    vblendvps xmm1, xmm0, xmm5, xmm1
    vmovss  dword ptr [rcx+0B4h], xmm1
    vmulss  xmm1, xmm3, xmm4
    vcmpless xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vblendvps xmm0, xmm1, xmm4, xmm0
    vmovss  dword ptr [rcx+0B8h], xmm0
  }
}

/*
==============
G_VehicleHeli_PathSetTargetYaw
==============
*/

void __fastcall G_VehicleHeli_PathSetTargetYaw(HeliPathPos *pathPos, double yaw)
{
  __asm { vmovss  dword ptr [rcx+2C4h], xmm1 }
  pathPos->hasTargetYaw = 1;
}

/*
==============
G_VehicleHeli_PathSetYawSpeed
==============
*/

void __fastcall G_VehicleHeli_PathSetYawSpeed(HeliPathPos *pathPos, double speed, double accel, double decel, float overshootPercent)
{
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = pathPos;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1138, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm8, xmm6
    vcomiss xmm7, xmm6
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm0, [rsp+78h+overshootPercent]; val
    vmovss  dword ptr [rbx+2D0h], xmm8
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  dword ptr [rbx+2D8h], xmm7
    vmovss  dword ptr [rbx+2DCh], xmm9
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovss  dword ptr [rbx+2C8h], xmm0
  }
}

/*
==============
G_VehicleHeli_PathSetYawSpeedMode
==============
*/
void G_VehicleHeli_PathSetYawSpeedMode(HeliPathPos *pathPos, const char *yawMode)
{
  float fmt; 

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
        __asm
        {
          vmovss  xmm1, cs:__real@41700000
          vmovss  xmm2, cs:__real@40a00000
          vmovaps xmm3, xmm1
        }
        goto LABEL_16;
      }
      __asm
      {
        vmovss  xmm2, cs:__real@42340000; accel
        vmovss  xmm1, cs:__real@42b40000; speed
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@43340000
        vmovss  xmm2, cs:__real@42b40000
      }
    }
    __asm { vmovss  xmm3, cs:__real@41b40000; decel }
    goto LABEL_16;
  }
  __asm
  {
    vmovss  xmm1, cs:__real@43910000
    vmovss  xmm2, cs:__real@43750000
    vmovss  xmm3, cs:__real@435e8000
  }
LABEL_16:
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+38h+fmt], xmm0
  }
  G_VehicleHeli_PathSetYawSpeed(pathPos, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
}

/*
==============
G_VehicleHeli_RotorContactPlayer
==============
*/

bool __fastcall G_VehicleHeli_RotorContactPlayer(const vec3_t *planePos, const vec3_t *planeNormal, double bladesRad, const vec3_t *plCapStart, const vec3_t *plCapEnd, float plRadius)
{
  bool v29; 
  bool result; 
  char v59; 
  char v60; 
  char v68; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBP = plCapEnd;
  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RSI = plCapStart;
  __asm { vmovaps xmmword ptr [r11-38h], xmm11 }
  _RBX = planeNormal;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm12
    vmovaps xmmword ptr [r11-58h], xmm14
    vxorps  xmm14, xmm14, xmm14
    vcomiss xmm2, xmm14
    vmovaps xmmword ptr [r11-68h], xmm15
    vmovaps xmm15, xmm2
    vmovss  xmm11, [rsp+98h+plRadius]
    vcomiss xmm11, xmm14
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3951b717
  }
  v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2393, ASSERT_TYPE_ASSERT, "(Vec3IsNormalizedEpsilon( planeNormal, 0.0001f ))", (const char *)&queryFormat, "Vec3IsNormalizedEpsilon( planeNormal, 0.0001f )");
  if ( v29 )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rsi]
    vsubss  xmm0, xmm2, dword ptr [rdi]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rsi+8]
    vsubss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  xmm2, dword ptr [rbp+4]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vsubss  xmm0, xmm2, dword ptr [rdi+4]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vaddss  xmm12, xmm4, xmm1
    vmovss  xmm1, dword ptr [rbp+0]
    vsubss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbp+8]
    vsubss  xmm2, xmm1, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm0
    vmulss  xmm1, xmm3, xmm12
    vcomiss xmm1, xmm14
  }
  if ( v29 )
  {
    __asm
    {
      vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm12, xmm12, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vminss  xmm0, xmm3, xmm12
      vcomiss xmm0, xmm11
    }
    result = 0;
  }
  else
  {
    __asm { vaddss  xmm6, xmm15, xmm11 }
    *(double *)&_XMM0 = PointToLineSegmentDistSq(planePos, _RSI, plCapEnd);
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vcomiss xmm1, xmm0
    }
    result = !(v59 | v60);
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v68;
  __asm
  {
    vmovaps xmm11, xmmword ptr [r11-20h]
    vmovaps xmm12, xmmword ptr [r11-30h]
    vmovaps xmm14, xmmword ptr [r11-40h]
    vmovaps xmm15, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
G_VehicleHeli_SoftenCollisions
==============
*/
void G_VehicleHeli_SoftenCollisions(gentity_s *ent, vec3_t *inOutWorldAccel)
{
  bool v16; 
  bool v17; 
  int v55; 
  char v96; 
  const dvar_t *v97; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RDI = inOutWorldAccel;
  __asm { vmovaps xmmword ptr [rax-58h], xmm7 }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2170, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v16 = ent->vehicle == NULL;
  if ( !ent->vehicle )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2171, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  _RBX = ent->vehicle;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm7, dword ptr [rbx+138h]
    vucomiss xmm7, xmm6
  }
  if ( !v16 )
    goto LABEL_10;
  __asm { vucomiss xmm6, dword ptr [rbx+13Ch] }
  if ( !v16 )
    goto LABEL_10;
  __asm { vucomiss xmm6, dword ptr [rbx+140h] }
  if ( !v16 )
  {
LABEL_10:
    __asm { vmovss  xmm0, dword ptr [rbx+13Ch] }
    _RBP = DVARFLT_vehHelicopterLookaheadTime;
    __asm
    {
      vmovaps [rsp+138h+var_68], xmm8
      vmovaps [rsp+138h+var_78], xmm9
      vmovaps [rsp+138h+var_88], xmm10
      vmovaps [rsp+138h+var_98], xmm11
      vmovaps [rsp+138h+var_A8], xmm12
      vmovaps [rsp+138h+var_B8], xmm13
      vmovaps [rsp+138h+var_C8], xmm14
      vmovaps [rsp+138h+var_D8], xmm15
      vmovss  [rsp+138h+var_E4], xmm0
      vmovss  xmm0, dword ptr [rbx+140h]
      vmovss  [rsp+138h+var_E0], xmm0
    }
    if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm { vmovss  xmm8, dword ptr [rbp+28h] }
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@447a0000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vdivss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, xmm8
      vmulss  xmm0, xmm2, dword ptr [rbx+138h]
      vmovss  dword ptr [rbx+138h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+13Ch]
      vmovss  dword ptr [rbx+13Ch], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+140h]
      vmovss  dword ptr [rbx+140h], xmm0
    }
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    _RBP = ent->vehicle;
    __asm
    {
      vmovss  xmm11, cs:__real@3a83126f
      vxorps  xmm2, xmm2, xmm2
      vmovss  xmm15, dword ptr [rbp+0F0h]
      vcvtsi2ss xmm2, xmm2, eax
      vmulss  xmm0, xmm2, dword ptr [rbx+138h]
      vmulss  xmm0, xmm0, xmm11
      vaddss  xmm8, xmm0, dword ptr [rbx+0F0h]
      vmulss  xmm0, xmm2, dword ptr [rbx+13Ch]
      vmulss  xmm1, xmm0, xmm11
      vmulss  xmm0, xmm2, dword ptr [rbx+140h]
      vaddss  xmm9, xmm1, dword ptr [rbx+0F4h]
      vmulss  xmm1, xmm0, xmm11
      vmovss  xmm0, dword ptr [rbp+0F4h]
      vaddss  xmm10, xmm1, dword ptr [rbx+0F8h]
      vmovss  [rsp+138h+var_F8], xmm0
      vmovss  xmm0, dword ptr [rbp+0F8h]
      vmovss  [rsp+138h+var_F4], xmm0
      vmovss  xmm0, dword ptr [rbp+138h]
      vmovss  [rsp+138h+var_F0], xmm0
      vmovss  xmm0, dword ptr [rbp+13Ch]
      vmovss  [rsp+138h+var_EC], xmm0
      vmovss  xmm0, dword ptr [rbp+140h]
      vmovss  [rsp+138h+var_E8], xmm0
    }
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vmulss  xmm2, xmm0, xmm11; frameTime
    }
    v55 = G_Vehicle_SlideMove(ent, 0, *(float *)&_XMM2, NULL);
    __asm
    {
      vmovss  xmm12, dword ptr [rbp+0F0h]
      vmovss  xmm13, dword ptr [rbp+0F4h]
      vmovss  xmm14, dword ptr [rbp+0F8h]
      vmovss  xmm0, [rsp+138h+var_F8]
      vmovss  xmm1, [rsp+138h+var_F4]
      vmovss  xmm2, [rsp+138h+var_E8]
      vmovss  dword ptr [rbp+0F0h], xmm15
      vmovaps xmm15, [rsp+138h+var_D8]
      vmovss  dword ptr [rbp+0F4h], xmm0
      vmovss  xmm0, [rsp+138h+var_F0]
      vmovss  dword ptr [rbp+0F8h], xmm1
      vmovss  xmm1, [rsp+138h+var_EC]
      vmovss  dword ptr [rbp+138h], xmm0
      vmovss  xmm0, [rsp+138h+var_E4]
      vmovss  dword ptr [rbp+13Ch], xmm1
      vmovss  xmm1, [rsp+138h+var_E0]
      vmovss  dword ptr [rbp+140h], xmm2
      vmovss  dword ptr [rbx+13Ch], xmm0
      vmovss  dword ptr [rbx+140h], xmm1
      vmovss  dword ptr [rbx+138h], xmm7
    }
    if ( v55 )
    {
      __asm
      {
        vsubss  xmm7, xmm10, xmm14
        vmovss  xmm10, cs:__real@3f800000
        vsubss  xmm4, xmm8, xmm12
        vsubss  xmm5, xmm9, xmm13
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm10
        vmovss  xmm8, dword ptr [rdi+4]
        vmovss  xmm9, dword ptr [rdi]
        vmovss  xmm11, dword ptr [rdi+8]
        vmulss  xmm1, xmm8, xmm5
        vmulss  xmm0, xmm9, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, xmm7
        vaddss  xmm2, xmm2, xmm1
        vdivss  xmm0, xmm2, xmm3
        vcomiss xmm0, xmm6
        vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm3, xmm4
        vaddss  xmm1, xmm0, xmm9
        vmulss  xmm2, xmm3, xmm5
        vaddss  xmm0, xmm2, xmm8
        vmovss  dword ptr [rdi], xmm1
        vmulss  xmm1, xmm3, xmm7
        vaddss  xmm2, xmm1, xmm11
        vmovss  dword ptr [rdi+8], xmm2
        vmovss  dword ptr [rdi+4], xmm0
      }
      _RSI = DVARFLT_vehHelicopterLookaheadTime;
      __asm
      {
        vsubss  xmm11, xmm12, dword ptr [rbx+0F0h]
        vsubss  xmm12, xmm13, dword ptr [rbx+0F4h]
        vsubss  xmm13, xmm14, dword ptr [rbx+0F8h]
      }
      if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vcomiss xmm6, dword ptr [rsi+28h] }
      if ( !v96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2204, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_vehHelicopterLookaheadTime, \"vehHelicopterLookaheadTime\" ) > 0)", (const char *)&queryFormat, "Dvar_GetFloat( vehHelicopterLookaheadTime ) > 0") )
        __debugbreak();
      v97 = DVARFLT_vehHelicopterLookaheadTime;
      if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v97);
      __asm
      {
        vdivss  xmm9, xmm10, dword ptr [rsi+28h]
        vmovss  xmm6, dword ptr [rbx+138h]
        vmovss  xmm7, dword ptr [rbx+13Ch]
        vmovss  xmm8, dword ptr [rbx+140h]
      }
      G_Vehicle_GetDeltaTime();
      __asm
      {
        vdivss  xmm4, xmm10, xmm0
        vmulss  xmm0, xmm9, xmm11
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm4
        vaddss  xmm3, xmm2, dword ptr [rdi]
        vmulss  xmm0, xmm9, xmm12
        vsubss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rdi], xmm3
        vaddss  xmm3, xmm2, dword ptr [rdi+4]
        vmulss  xmm0, xmm9, xmm13
        vsubss  xmm1, xmm0, xmm8
        vmulss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rdi+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm3
      }
    }
    __asm
    {
      vmovaps xmm13, [rsp+138h+var_B8]
      vmovaps xmm12, [rsp+138h+var_A8]
      vmovaps xmm11, [rsp+138h+var_98]
      vmovaps xmm10, [rsp+138h+var_88]
      vmovaps xmm9, [rsp+138h+var_78]
      vmovaps xmm8, [rsp+138h+var_68]
      vmovaps xmm14, [rsp+138h+var_C8]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+138h+var_48]
    vmovaps xmm7, [rsp+138h+var_58]
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
  void *v4; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  Bounds boundsToUse; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  unsigned __int16 touch[2048]; 
  char vars0; 

  v4 = alloca(v1);
  __asm
  {
    vmovaps [rsp+10B0h+var_10], xmm6
    vmovaps [rsp+10B0h+var_20], xmm7
  }
  _RBX = entity;
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 800, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@41a00000
    vmovsd  xmm1, qword ptr [rbx+128h]
    vmovups xmm0, xmmword ptr [rbx+118h]
    vmovups xmmword ptr [rsp+10B0h+boundsToUse.midPoint], xmm0
    vmovss  xmm4, dword ptr [rsp+10B0h+boundsToUse.midPoint]
    vmovss  xmm3, dword ptr [rsp+10B0h+boundsToUse.midPoint+4]
    vaddss  xmm6, xmm1, xmm2
    vmovsd  qword ptr [rsp+10B0h+boundsToUse.halfSize+4], xmm1
    vaddss  xmm5, xmm2, dword ptr [rsp+10B0h+boundsToUse.halfSize+8]
    vshufps xmm0, xmm0, xmm0, 0FFh
    vaddss  xmm7, xmm0, xmm2
    vmovss  xmm2, dword ptr [rsp+10B0h+boundsToUse.midPoint+8]
    vsubss  xmm0, xmm4, xmm7
    vsubss  xmm1, xmm3, xmm6
    vmovss  dword ptr [rsp+10B0h+aabbMin], xmm0
    vmovss  dword ptr [rsp+10B0h+aabbMin+4], xmm1
    vsubss  xmm0, xmm2, xmm5
    vaddss  xmm1, xmm7, xmm4
  }
  collectedEnts.countMax = 2048;
  collectedEnts.ids = touch;
  __asm
  {
    vmovss  dword ptr [rsp+10B0h+aabbMin+8], xmm0
    vmovss  dword ptr [rsp+10B0h+aabbMax], xmm1
  }
  collectedEnts.count = 0;
  __asm
  {
    vaddss  xmm0, xmm6, xmm3
    vaddss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+10B0h+aabbMax+4], xmm0
    vmovss  dword ptr [rsp+10B0h+boundsToUse.halfSize], xmm7
    vmovss  dword ptr [rsp+10B0h+boundsToUse.halfSize+4], xmm6
    vmovss  dword ptr [rsp+10B0h+boundsToUse.halfSize+8], xmm5
    vmovss  dword ptr [rsp+10B0h+aabbMax+8], xmm1
  }
  PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 1078198280, &collectedEnts, NULL);
  if ( collectedEnts.count >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 812, ASSERT_TYPE_ASSERT, "(results.count < ( 2048 ))", (const char *)&queryFormat, "results.count < MAX_GENTITIES") )
    __debugbreak();
  if ( collectedEnts.count )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+10B0h+boundsToUse.halfSize]
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm0, xmm6
      vmovss  xmm0, dword ptr [rsp+10B0h+boundsToUse.halfSize+4]
      vcomiss xmm0, xmm6
      vmovss  xmm0, dword ptr [rsp+10B0h+boundsToUse.halfSize+8]
      vcomiss xmm0, xmm6
      vmovss  xmm0, dword ptr [rsp+10B0h+boundsToUse.halfSize+4]
      vmaxss  xmm1, xmm0, dword ptr [rsp+10B0h+boundsToUse.halfSize]
      vmovss  xmm0, dword ptr [rsp+10B0h+boundsToUse.halfSize+8]
      vmovss  dword ptr [rsp+10B0h+boundsToUse.halfSize], xmm1
      vmovss  dword ptr [rsp+10B0h+boundsToUse.halfSize+4], xmm1
      vmaxss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rsp+10B0h+boundsToUse.halfSize+8], xmm1
    }
    G_VehicleHeli_TouchTriggers(_RBX, &boundsToUse, touch, collectedEnts.count);
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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
  HelicopterMoveState moveState; 
  __int32 v8; 
  char v15; 
  char v29; 
  int v31; 
  gentity_s *ent; 
  int isDefined; 
  gentity_s *v49; 
  Vehicle *vehicle; 
  __int64 v59; 
  __int64 v60; 
  vec3_t goalPos; 

  __asm { vmovaps [rsp+0B8h+var_58], xmm9 }
  _RBX = pathPos;
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1043, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  moveState = _RBX->moveState;
  __asm
  {
    vmovaps [rsp+0B8h+var_28], xmm6
    vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  v8 = moveState - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0A0h]
        vmovss  xmm1, dword ptr [rbx+0A4h]
        vmovaps [rsp+0B8h+var_38], xmm7
        vaddss  xmm7, xmm1, dword ptr [rbx+54h]
        vmovaps [rsp+0B8h+var_48], xmm8
        vaddss  xmm8, xmm0, dword ptr [rbx+50h]
        vmovss  xmm0, dword ptr [rbx+0A8h]
        vaddss  xmm6, xmm0, dword ptr [rbx+58h]
        vmovss  dword ptr [rsp+0B8h+goalPos+8], xmm6
        vmovss  dword ptr [rsp+0B8h+goalPos], xmm8
        vmovss  dword ptr [rsp+0B8h+goalPos+4], xmm7
      }
      G_VehicleHeli_UpdateMoveToGoal(_RBX, &goalPos);
      __asm
      {
        vsubss  xmm0, xmm7, dword ptr [rbx+0Ch]
        vsubss  xmm2, xmm8, dword ptr [rbx+8]
        vsubss  xmm3, xmm6, dword ptr [rbx+10h]
        vmovss  xmm4, dword ptr [rbx+44h]
        vmovaps xmm8, [rsp+0B8h+var_48]
        vmovaps xmm7, [rsp+0B8h+var_38]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm2, xmm0, cs:__real@3d800000
        vcomiss xmm3, xmm2
      }
      if ( v29 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm4, xmm0
        }
        if ( v15 )
        {
          *(_QWORD *)_RBX->hover.hoverGoalPos.v = 0i64;
          _RBX->hover.hoverGoalPos.v[2] = 0.0;
        }
        else
        {
          v31 = 0;
          _RSI = &goalPos;
          do
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+44h]; max
              vxorps  xmm0, xmm1, xmm9; min
            }
            *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm { vmovaps xmm6, xmm0 }
            if ( (unsigned int)v31 >= 3 )
            {
              LODWORD(v60) = 3;
              LODWORD(v59) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v59, v60) )
                __debugbreak();
            }
            __asm { vmovss  dword ptr [rsi], xmm6 }
            _RSI = (vec3_t *)((char *)_RSI + 4);
            ++v31;
          }
          while ( v31 < 3 );
          __asm
          {
            vmovss  xmm4, cs:__real@3f000000
            vmulss  xmm1, xmm4, dword ptr [rbx+50h]
            vmovss  xmm0, dword ptr [rsp+0B8h+goalPos]
            vsubss  xmm1, xmm0, xmm1
            vmovss  xmm0, dword ptr [rsp+0B8h+goalPos+4]
            vmovss  dword ptr [rbx+50h], xmm1
            vmulss  xmm3, xmm4, dword ptr [rbx+54h]
            vsubss  xmm1, xmm0, xmm3
            vmovss  xmm0, dword ptr [rsp+0B8h+goalPos+8]
            vmovss  dword ptr [rbx+54h], xmm1
            vmulss  xmm3, xmm4, dword ptr [rbx+58h]
            vsubss  xmm1, xmm0, xmm3
            vmovss  dword ptr [rbx+58h], xmm1
          }
        }
      }
    }
  }
  else
  {
    G_VehicleHeli_UpdateMoveToGoal(_RBX, &_RBX->goalPosition);
  }
  ent = _RBX->ent;
  isDefined = EntHandle::isDefined(&ent->r.ownerNum);
  __asm { vmovaps xmm6, [rsp+0B8h+var_28] }
  if ( isDefined )
  {
    v49 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v49->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1013, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v49->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    vehicle = ent->vehicle;
    if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1018, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    _RDI = G_Vehicle_GetServerDef(vehicle->defIndex);
    v49->client->linkAnglesFrac = 0.0;
    __asm { vmovss  xmm0, dword ptr [rax+0C84h] }
    _RCX = v49->client;
    __asm
    {
      vxorps  xmm1, xmm0, xmm9
      vmovss  dword ptr [rcx+5ED0h], xmm1
    }
    v49->client->link_viewClamp.max.goal.v[1] = _RDI->turretHorizSpanLeft;
    __asm { vmovss  xmm0, dword ptr [rax+0C88h] }
    _RCX = v49->client;
    __asm
    {
      vxorps  xmm1, xmm0, xmm9
      vmovss  dword ptr [rcx+5ECCh], xmm1
    }
    v49->client->link_viewClamp.max.goal.v[0] = _RDI->turretVertSpanDown;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
    {
      v49->client->link_viewClamp.resistMin.goal.v[1] = _RDI->turretHorizResistLeft;
      v49->client->link_viewClamp.resistMax.goal.v[1] = _RDI->turretHorizResistRight;
      v49->client->link_viewClamp.resistMin.goal.v[0] = _RDI->turretVertResistDown;
      v49->client->link_viewClamp.resistMax.goal.v[0] = _RDI->turretVertResistUp;
    }
    G_SnapToViewAngleClampGoal(&v49->client->link_viewClamp);
  }
  __asm { vmovaps xmm9, [rsp+0B8h+var_58] }
}

/*
==============
G_VehicleHeli_UpdateAngleAndAngularVel
==============
*/

void __fastcall G_VehicleHeli_UpdateAngleAndAngularVel(int index, double desiredAngle, double accel, double decel, float overShoot, HeliPathPos *pathPos)
{
  bool v40; 
  bool v41; 
  bool v42; 
  bool v49; 
  __int64 v97; 
  __int64 v99; 
  int v100; 
  char v106; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  dword ptr [rax+20h], xmm3
    vmovss  dword ptr [rax+18h], xmm2
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _RBX = index;
  __asm
  {
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
    vmovaps xmm13, xmm2
    vmovaps xmm10, xmm3
    vmovaps xmm11, xmm1
  }
  if ( (unsigned int)index >= 3 )
  {
    v100 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", index, v100) )
      __debugbreak();
  }
  _RDI = pathPos;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vsubss  xmm0, xmm11, dword ptr [rdi+rbx*4+14h]
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm2, xmm1, 1
    vsubss  xmm6, xmm3, xmm2
    vmulss  xmm9, xmm6, cs:__real@43b40000
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm12, cs:__real@3a83126f
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm0, cs:__real@47fd2000
    vcomiss xmm1, cs:__real@38d1b717
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmovaps [rsp+108h+var_58], xmm8
    vmovaps [rsp+108h+var_B8], xmm14
    vmovaps [rsp+108h+var_C8], xmm15
  }
  if ( (unsigned int)_RBX >= 3 )
  {
    LODWORD(v99) = 3;
    LODWORD(v97) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+rbx*4+2Ch]
    vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm6, xmm6, xmm14
  }
  if ( (unsigned int)_RBX >= 3 )
  {
    LODWORD(v99) = 3;
    LODWORD(v97) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99) )
      __debugbreak();
  }
  __asm { vmovss  xmm15, dword ptr [rdi+rbx*4+2CCh] }
  v40 = (unsigned int)_RBX < 3;
  v41 = (_DWORD)_RBX == 3;
  if ( (unsigned int)_RBX >= 3 )
  {
    LODWORD(v99) = 3;
    LODWORD(v97) = _RBX;
    v42 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99);
    v40 = 0;
    v41 = !v42;
    if ( v42 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm9, dword ptr [rdi+rbx*4+2Ch]
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
  }
  if ( v40 )
  {
    __asm { vmovss  xmm10, cs:__real@3f000000 }
  }
  else
  {
    __asm { vucomiss xmm10, xmm8 }
    if ( v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 113, ASSERT_TYPE_ASSERT, "(decel)", (const char *)&queryFormat, "decel") )
      __debugbreak();
    __asm
    {
      vmovss  xmm13, cs:__real@3f800000
      vdivss  xmm0, xmm6, xmm10
      vmovss  xmm10, [rsp+108h+arg_20]
      vcomiss xmm10, xmm8
      vmulss  xmm0, xmm0, xmm6
      vmovss  [rsp+108h+arg_0], xmm0
      vcomiss xmm10, xmm13
    }
    v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 117, ASSERT_TYPE_ASSERT, "(overShoot >= 0.f && overShoot < 1.f)", (const char *)&queryFormat, "overShoot >= 0.f && overShoot < 1.f");
    v40 = 0;
    if ( v49 )
      __debugbreak();
    __asm
    {
      vsubss  xmm0, xmm13, xmm10
      vmulss  xmm1, xmm0, [rsp+108h+arg_0]
      vmovss  xmm10, cs:__real@3f000000
      vmovss  xmm13, [rsp+108h+arg_10]
      vmulss  xmm2, xmm1, xmm10
      vandps  xmm3, xmm9, xmm14
      vcmpless xmm0, xmm3, xmm2
      vblendvps xmm1, xmm15, xmm8, xmm0
      vcmpless xmm0, xmm3, xmm2
      vmovss  xmm2, [rsp+108h+arg_18]
      vblendvps xmm13, xmm13, xmm2, xmm0
      vmovss  [rsp+108h+arg_0], xmm1
      vmovss  [rsp+108h+arg_0], xmm13
      vmovaps xmm15, xmm1
    }
  }
  __asm
  {
    vxorps  xmm1, xmm15, cs:__xmm@80000000800000008000000080000000
    vcmpltss xmm0, xmm9, xmm8
    vmovaps xmm8, [rsp+108h+var_58]
    vblendvps xmm0, xmm15, xmm1, xmm0
    vmovaps xmm15, [rsp+108h+var_C8]
    vmulss  xmm1, xmm7, xmm13
    vmulss  xmm2, xmm1, xmm12
    vcomiss xmm6, xmm2
    vmovss  [rsp+108h+arg_0], xmm0
  }
  if ( !v40 )
    goto LABEL_51;
  __asm
  {
    vmulss  xmm0, xmm6, xmm7
    vmulss  xmm1, xmm0, xmm12
    vandps  xmm9, xmm9, xmm14
    vcomiss xmm9, xmm1
  }
  if ( v40 )
  {
    _RAX = vec3_t::operator[](&pathPos->angles, _RBX);
    __asm { vmovss  dword ptr [rax], xmm11 }
    *vec3_t::operator[](&pathPos->rotVel, _RBX) = 0.0;
  }
  else
  {
LABEL_51:
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v99) = 3;
      LODWORD(v97) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, [rsp+108h+arg_0]; tgtSpeed
      vmovss  xmm0, dword ptr [rdi+rbx*4+2Ch]; speed
      vmulss  xmm3, xmm7, xmm12; dt
      vmovaps xmm2, xmm13; accel
    }
    *(double *)&_XMM0 = Vehicle_AccelerateSpeed(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovaps xmm6, xmm0 }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v99) = 3;
      LODWORD(v97) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+rbx*4+2Ch], xmm6 }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v99) = 3;
      LODWORD(v97) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rdi+rbx*4+2Ch]
      vmulss  xmm6, xmm0, xmm12
    }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v99) = 3;
      LODWORD(v97) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi+rbx*4+14h]
      vmovss  dword ptr [rdi+rbx*4+14h], xmm0
    }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v99) = 3;
      LODWORD(v97) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rbx*4+14h]
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, xmm10
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm6, xmm1, cs:__real@43b40000
    }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v99) = 3;
      LODWORD(v97) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v97, v99) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+rbx*4+14h], xmm6 }
  }
  __asm
  {
    vmovaps xmm14, [rsp+108h+var_B8]
    vmovaps xmm13, [rsp+108h+var_A8]
  }
  _R11 = &v106;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
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
  unsigned int v7; 
  int jitterPeriodMin; 
  int v12; 
  unsigned int v15; 
  int v17; 
  bool v18; 
  bool v19; 
  bool v21; 
  __int64 v60; 
  __int64 v61; 
  int v62[4]; 

  _R14 = jitter;
  if ( !jitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1826, ASSERT_TYPE_ASSERT, "(jitter)", (const char *)&queryFormat, "jitter") )
    __debugbreak();
  if ( _R14->jitterPeriodMin || _R14->jitterPeriodMax )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovaps [rsp+0C8h+var_68], xmm9
    }
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    v7 = 0;
    __asm { vmovaps xmm9, xmm0 }
    if ( level.time > _R14->jitterEndTime )
    {
      __asm { vmulss  xmm1, xmm0, cs:__real@447a0000 }
      jitterPeriodMin = _R14->jitterPeriodMin;
      __asm
      {
        vcvttss2si r15d, xmm1
        vmovaps [rsp+0C8h+var_58], xmm8
      }
      if ( jitterPeriodMin < _ER15 )
      {
        _R14->jitterPeriodMin = _ER15;
        jitterPeriodMin = _ER15;
      }
      v12 = G_irand(jitterPeriodMin, _R14->jitterPeriodMax);
      _RSI = &_R14->jitterOffsetRange;
      __asm { vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000 }
      v15 = 0;
      _R14->jitterEndTime = v12 + level.time;
      _RBP = (char *)((char *)v62 - (char *)&_R14->jitterOffsetRange);
      v17 = v12;
      v18 = 1;
      v19 = 0;
      __asm { vxorps  xmm7, xmm7, xmm7 }
      do
      {
        if ( !v18 )
        {
          LODWORD(v61) = 3;
          LODWORD(v60) = v15;
          v21 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v60, v61);
          v19 = !v21;
          if ( v21 )
            __debugbreak();
        }
        __asm { vucomiss xmm7, dword ptr [rsi] }
        if ( v19 )
        {
          if ( v15 >= 3 )
          {
            LODWORD(v61) = 3;
            LODWORD(v60) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v60, v61) )
              __debugbreak();
          }
          __asm { vmovaps xmm6, xmm7 }
        }
        else
        {
          if ( v15 >= 3 )
          {
            LODWORD(v61) = 3;
            LODWORD(v60) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v60, v61) )
              __debugbreak();
          }
          __asm { vmovss  xmm6, dword ptr [rsi] }
          if ( v15 >= 3 )
          {
            LODWORD(v61) = 3;
            LODWORD(v60) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v60, v61) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vxorps  xmm0, xmm0, xmm8; min
            vmovaps xmm1, xmm6; max
          }
          *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vmovaps xmm6, xmm0 }
          if ( v15 >= 3 )
          {
            LODWORD(v61) = 3;
            LODWORD(v60) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v60, v61) )
              __debugbreak();
          }
        }
        __asm { vmovss  dword ptr [rsi+rbp], xmm6 }
        _RSI = (vec3_t *)((char *)_RSI + 4);
        v18 = ++v15 < 3;
        v19 = v15 == 3;
      }
      while ( (int)v15 < 3 );
      __asm
      {
        vmovaps xmm8, [rsp+0C8h+var_58]
        vmovss  xmm0, [rsp+0C8h+var_88]
        vsubss  xmm1, xmm0, dword ptr [r14+24h]
        vmovss  xmm2, [rsp+0C8h+var_84]
        vmovss  dword ptr [r14+18h], xmm1
        vsubss  xmm0, xmm2, dword ptr [r14+28h]
        vmovss  xmm1, [rsp+0C8h+var_80]
        vmovss  dword ptr [r14+1Ch], xmm0
        vsubss  xmm2, xmm1, dword ptr [r14+2Ch]
        vmovss  dword ptr [r14+20h], xmm2
      }
      if ( v17 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 1865, ASSERT_TYPE_ASSERT, "(jitterDelay > 0)", (const char *)&queryFormat, "jitterDelay > 0") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r12d
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r15d
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm2, dword ptr [r14+18h]
        vmovss  dword ptr [r14+18h], xmm0
        vmulss  xmm1, xmm2, dword ptr [r14+1Ch]
        vmovss  dword ptr [r14+1Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [r14+20h]
        vmovss  dword ptr [r14+20h], xmm0
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14+18h]
      vaddss  xmm1, xmm0, dword ptr [r14+24h]
      vmovss  dword ptr [r14+24h], xmm1
      vmovss  xmm2, dword ptr [r14+28h]
      vaddss  xmm0, xmm2, dword ptr [r14+1Ch]
      vmovss  dword ptr [r14+28h], xmm0
      vmovss  xmm1, dword ptr [r14+2Ch]
      vaddss  xmm2, xmm1, dword ptr [r14+20h]
      vmovss  dword ptr [r14+2Ch], xmm2
    }
    _RSI = &_R14->jitterPos;
    do
    {
      _RBX = DVARFLT_vehHelicopterJitterJerkyness;
      if ( !DVARFLT_vehHelicopterJitterJerkyness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterJitterJerkyness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      if ( v7 >= 3 )
      {
        LODWORD(v61) = 3;
        LODWORD(v60) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v60, v61) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rsi] }
      if ( v7 >= 3 )
      {
        LODWORD(v61) = 3;
        LODWORD(v60) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v60, v61) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi-0Ch]; tgt
        vmovaps xmm3, xmm9; deltaTime
        vmovaps xmm2, xmm7; rate
        vmovaps xmm1, xmm6; cur
      }
      *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vmovaps xmm6, xmm0 }
      if ( v7 >= 3 )
      {
        LODWORD(v61) = 3;
        LODWORD(v60) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v60, v61) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rsi], xmm6 }
      _RSI = (vec3_t *)((char *)_RSI + 4);
      ++v7;
    }
    while ( (int)v7 < 3 );
    __asm
    {
      vmovaps xmm9, [rsp+0C8h+var_68]
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
}

/*
==============
G_VehicleHeli_UpdateMoveOrientation
==============
*/

void __fastcall G_VehicleHeli_UpdateMoveOrientation(HeliPathPos *pathPos, const vec3_t *desiredDir, double distToGoal)
{
  int hasGoalYaw; 
  bool v21; 
  int v23; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 v148; 
  float c; 
  float s; 
  char v153; 
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
    vmovaps [rsp+0E8h+var_88], xmm14
    vmovaps [rsp+0E8h+var_98], xmm15
    vmovss  [rsp+0E8h+var_B4], xmm2
  }
  _RBX = pathPos;
  *(float *)&_XMM0 = G_VehicleHeli_UpdateMove_GetDesiredYaw(pathPos, desiredDir);
  __asm { vmovss  xmm1, dword ptr [rbx+18h] }
  hasGoalYaw = _RBX->hasGoalYaw;
  __asm
  {
    vsubss  xmm10, xmm1, dword ptr [rbx+2C0h]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@3a83126f
    vmovaps xmm8, xmm0
  }
  v21 = hasGoalYaw == 0;
  if ( hasGoalYaw )
  {
    __asm
    {
      vandps  xmm1, xmm10, xmm7
      vcomiss xmm1, xmm9
    }
    v23 = 1;
  }
  else
  {
    v21 = 1;
    v23 = 0;
  }
  __asm
  {
    vsubss  xmm0, xmm8, dword ptr [rbx+8Ch]
    vmovss  xmm11, dword ptr [rbx+30h]
    vmovss  xmm2, dword ptr [rbx+2D8h]
    vmovss  xmm3, dword ptr [rbx+2DCh]
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm9
  }
  if ( v21 )
  {
    if ( _RBX->yawSlowDown )
    {
      __asm
      {
        vmulss  xmm2, xmm2, cs:__real@3e4ccccd; accel
        vmulss  xmm3, xmm3, cs:__real@3e4ccccd; decel
      }
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rbx+8Ch], xmm8 }
    _RBX->yawSlowDown = 0;
  }
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( hasGoalYaw || _RBX->hasTargetYaw )
    __asm { vmovss  xmm0, dword ptr [rbx+2C8h] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm
  {
    vmovaps xmm1, xmm8; desiredAngle
    vmovss  dword ptr [rsp+0E8h+fmt], xmm0
  }
  G_VehicleHeli_UpdateAngleAndAngularVel(1, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmt, _RBX);
  if ( _RBX->hasGoalYaw )
  {
    __asm { vucomiss xmm8, dword ptr [rbx+2C0h] }
    if ( !_RBX->hasGoalYaw )
      goto LABEL_17;
  }
  if ( _RBX->hasTargetYaw )
  {
    __asm { vucomiss xmm8, dword ptr [rbx+2C4h] }
    if ( !_RBX->hasTargetYaw )
    {
LABEL_17:
      __asm
      {
        vmulss  xmm0, xmm11, dword ptr [rbx+30h]
        vcomiss xmm0, xmm6
      }
    }
  }
  if ( v23 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vsubss  xmm2, xmm0, dword ptr [rbx+2C0h]
      vmulss  xmm1, xmm2, xmm10
      vcomiss xmm1, xmm6
      vandps  xmm2, xmm2, xmm7
      vcomiss xmm2, xmm9
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmovss  xmm8, dword ptr [rbx+0BCh]
    vucomiss xmm8, xmm6
    vmovss  xmm10, dword ptr [rbx+20h]
    vmovss  xmm11, dword ptr [rbx+24h]
    vmovss  xmm15, dword ptr [rbx+38h]
    vmovss  xmm14, dword ptr [rbx+40h]
    vmulss  xmm1, xmm11, xmm11
    vmovss  [rsp+0E8h+var_B8], xmm0
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm12, xmm1, xmm1
    vminss  xmm9, xmm12, xmm8
  }
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 375, ASSERT_TYPE_ASSERT, "(maxDragSpeed)", (const char *)&queryFormat, "maxDragSpeed", v148) )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, cs:__real@80000000
    vdivss  xmm1, xmm9, xmm8
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm2, xmm1, cs:__real@40a00000
    vcmpless xmm0, xmm12, xmm4
    vblendvps xmm0, xmm12, xmm9, xmm0
    vdivss  xmm3, xmm9, xmm0
    vmulss  xmm0, xmm10, xmm3
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm0, xmm11, xmm3
    vaddss  xmm10, xmm1, xmm15
    vmulss  xmm1, xmm0, xmm2
    vaddss  xmm11, xmm1, [rsp+0E8h+var_B8]
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm12, xmm1, xmm0
    vsqrtss xmm8, xmm12, xmm12
  }
  if ( !level.frameDuration )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm { vmovss  xmm4, cs:__real@80000000 }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vdivss  xmm1, xmm0, xmm1
    vmulss  xmm8, xmm1, xmm8
  }
  if ( _RBX->ent->vehicle->useDroneLogic )
    __asm { vmulss  xmm8, xmm8, cs:droneAngularAccelFactor }
  __asm
  {
    vmulss  xmm0, xmm14, xmm14
    vaddss  xmm1, xmm0, xmm12
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, xmm4
    vblendvps xmm0, xmm2, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmovss  xmm0, dword ptr [rbx+18h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
    vmulss  xmm14, xmm10, xmm1
    vmulss  xmm15, xmm11, xmm1
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vucomiss xmm6, dword ptr [rbx+44h]
    vmovaps xmm12, xmm9
  }
  if ( v21 && _RBX->stopAtGoal )
  {
    __asm
    {
      vmovss  xmm0, [rsp+0E8h+var_B4]
      vcomiss xmm0, cs:__real@41700000
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+2E8h]; vehDefAccel
    vmovaps xmm0, xmm8; accel
  }
  *(float *)&_XMM0 = G_VehicleHeli_CalcAccelFraction(*(double *)&_XMM0, *(double *)&_XMM1);
  __asm { vmovaps xmm10, xmm0 }
  if ( _RBX->stopping )
  {
    __asm { vcomiss xmm8, xmm6 }
    if ( _RBX->stopping )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+24h]
        vmovss  xmm1, dword ptr [rbx+20h]
        vmulss  xmm3, xmm1, xmm1
        vdivss  xmm0, xmm9, xmm8
        vmulss  xmm2, xmm2, xmm2
        vaddss  xmm3, xmm3, xmm2
        vsqrtss xmm1, xmm3, xmm3
        vmulss  xmm11, xmm1, xmm0
        vmulss  xmm1, xmm10, cs:__real@40200000
        vsubss  xmm0, xmm9, xmm10
        vmulss  xmm2, xmm0, cs:__real@40600000
        vaddss  xmm8, xmm2, xmm1
        vucomiss xmm8, xmm6
      }
      if ( !_RBX->stopping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 452, ASSERT_TYPE_ASSERT, "(stoppingTime)", (const char *)&queryFormat, "stoppingTime") )
        __debugbreak();
      __asm { vcomiss xmm11, xmm8 }
    }
  }
  __asm
  {
    vmulss  xmm3, xmm14, [rsp+0E8h+c]
    vmulss  xmm2, xmm15, [rsp+0E8h+s]
    vaddss  xmm0, xmm3, xmm2
    vsubss  xmm1, xmm9, xmm10
    vmulss  xmm11, xmm0, xmm12
    vmulss  xmm0, xmm1, cs:__real@3dcccccd
    vaddss  xmm10, xmm0, xmm10
  }
  if ( _RBX->moveState == VEH_MOVESTATE_HOVER )
  {
    if ( _RBX->hover.useHoverAccelForAngles )
    {
      if ( _RBX->ent->vehicle->useDroneLogic )
        __asm { vmovss  xmm0, cs:__real@41b70a3d }
      else
        __asm { vmovss  xmm0, dword ptr [rbx+4Ch] }
      goto LABEL_50;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+14h]
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, cs:__real@40a00000
    }
    if ( !_RBX->hover.useHoverAccelForAngles )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, cs:__real@40a00000
      }
      if ( !_RBX->hover.useHoverAccelForAngles )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vmovss  xmm1, cs:__real@40400000
          vandps  xmm0, xmm0, xmm7
          vcomiss xmm0, xmm1
        }
        if ( !_RBX->hover.useHoverAccelForAngles )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+34h]
            vandps  xmm0, xmm0, xmm7
            vcomiss xmm0, xmm1
          }
          if ( !_RBX->hover.useHoverAccelForAngles )
          {
            _RBX->hover.useHoverAccelForAngles = 1;
            *(double *)&_XMM0 = G_VehicleHeli_GetHoverAccel(_RBX);
            goto LABEL_50;
          }
        }
      }
    }
  }
  else
  {
    _RBX->hover.useHoverAccelForAngles = 0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+0B4h]; accel }
LABEL_50:
  __asm { vmovss  xmm1, dword ptr [rbx+2E8h]; vehDefAccel }
  if ( _RBX->ent->vehicle->useDroneLogic )
  {
    __asm { vmulss  xmm0, xmm0, cs:droneAngularAccelFactor; accel }
    *(float *)&_XMM0 = G_VehicleHeli_CalcAccelFraction(*(double *)&_XMM0, *(double *)&_XMM1);
    __asm
    {
      vsubss  xmm1, xmm9, xmm0
      vmulss  xmm0, xmm0, cs:__real@42340000
      vaddss  xmm7, xmm1, xmm0
      vmovaps xmm8, xmm7
    }
  }
  else
  {
    *(float *)&_XMM0 = G_VehicleHeli_CalcAccelFraction(*(double *)&_XMM0, *(double *)&_XMM1);
    __asm
    {
      vsubss  xmm1, xmm9, xmm0
      vmulss  xmm0, xmm0, cs:__real@42340000
      vaddss  xmm7, xmm1, xmm0
      vmulss  xmm8, xmm7, cs:__real@3ecccccd
    }
  }
  __asm
  {
    vmulss  xmm0, xmm11, dword ptr [rbx+2E0h]
    vmulss  xmm1, xmm0, xmm10; desiredAngle
    vmovaps xmm3, xmm8; decel
    vmovaps xmm2, xmm7; accel
    vmovss  dword ptr [rsp+0E8h+fmt], xmm6
  }
  G_VehicleHeli_UpdateAngleAndAngularVel(0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmta, _RBX);
  __asm
  {
    vmulss  xmm5, xmm14, [rsp+0E8h+s]
    vmulss  xmm4, xmm15, [rsp+0E8h+c]
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm5, xmm0, xmm12
    vmulss  xmm1, xmm5, dword ptr [rbx+2E4h]
    vmulss  xmm1, xmm1, xmm10; desiredAngle
    vmovaps xmm3, xmm8; decel
    vmovaps xmm2, xmm7; accel
    vmovss  dword ptr [rsp+0E8h+fmt], xmm6
  }
  G_VehicleHeli_UpdateAngleAndAngularVel(2, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtb, _RBX);
  _R11 = &v153;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+0E8h+var_98]
  }
}

/*
==============
G_VehicleHeli_UpdateMoveToGoal
==============
*/
void G_VehicleHeli_UpdateMoveToGoal(HeliPathPos *pathPos, const vec3_t *goalPos)
{
  int v21; 
  bool v22; 
  bool v23; 
  BOOL v30; 
  bool v33; 
  char v52; 
  bool v53; 
  bool v55; 
  bool v71; 
  char v101; 
  bool v102; 
  bool v119; 
  gentity_s *ent; 
  unsigned __int16 GlassHitId; 
  vec3_t inOutAccelVec; 
  vec2_t vecToGoal; 
  vec3_t start; 
  vec3_t damageDir; 
  vec3_t desiredDir; 
  Bounds bounds; 
  trace_t results; 
  char v236; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
  }
  _R15 = goalPos;
  _RBX = pathPos;
  if ( !pathPos )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 847, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 78, ASSERT_TYPE_ASSERT, "(pathPos)", (const char *)&queryFormat, "pathPos") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vsubss  xmm3, xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [r15+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm0, dword ptr [r15+8]
    vsubss  xmm11, xmm0, dword ptr [rbx+10h]
  }
  v21 = 0;
  v22 = _RBX->moveState < (unsigned int)VEH_MOVESTATE_HOVER;
  v33 = _RBX->moveState == VEH_MOVESTATE_HOVER;
  v23 = _RBX->moveState <= (unsigned int)VEH_MOVESTATE_HOVER;
  __asm
  {
    vmulss  xmm1, xmm2, xmm2
    vmovss  dword ptr [rsp+1E0h+vecToGoal+4], xmm2
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm12, xmm2, xmm2
    vmovss  dword ptr [rsp+1E0h+vecToGoal], xmm3
    vmovss  [rsp+1E0h+var_188], xmm11
  }
  v30 = v33;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( !v33 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0C0h]
      vucomiss xmm0, xmm6
      vcomiss xmm12, xmm0
    }
    if ( v22 )
      GScr_Notify(_RBX->ent, scr_const.near_goal, 0);
    v33 = _RBX->stopAtGoal == 0;
    if ( _RBX->stopAtGoal )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+44h]
        vucomiss xmm1, xmm6
      }
      if ( _RBX->stopAtGoal )
      {
        __asm { vcomiss xmm12, xmm1 }
        if ( _RBX->stopAtGoal )
          goto LABEL_22;
        __asm
        {
          vmovss  xmm0, cs:__real@420ccccd
          vcomiss xmm0, dword ptr [rbx+4]
        }
        if ( !_RBX->stopAtGoal )
          goto LABEL_22;
      }
      else
      {
        v33 = _RBX->stopping == 0;
        if ( !_RBX->stopping )
        {
          __asm { vucomiss xmm12, xmm6 }
          if ( _RBX->stopping )
            goto LABEL_22;
        }
        __asm { vucomiss xmm6, dword ptr [rbx+4] }
        if ( _RBX->stopping )
          goto LABEL_22;
      }
      __asm { vucomiss xmm1, xmm6 }
      _RBX->moveState = VEH_MOVESTATE_HOVER;
      if ( v33 )
      {
        *(_QWORD *)_RBX->accel.v = 0i64;
        _RBX->accel.v[2] = 0.0;
        *(_QWORD *)_RBX->vel.v = 0i64;
        _RBX->vel.v[2] = 0.0;
      }
    }
    else
    {
      *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rbx+4]
        vcomiss xmm12, xmm1
      }
      if ( !v22 && !v33 )
      {
LABEL_22:
        v23 = _RBX->moveState <= (unsigned int)VEH_MOVESTATE_HOVER;
        v30 = _RBX->moveState == VEH_MOVESTATE_HOVER;
        goto LABEL_23;
      }
    }
    GScr_Notify(_RBX->ent, scr_const.goal, 0);
    goto LABEL_22;
  }
LABEL_23:
  __asm { vcomiss xmm12, xmm6 }
  if ( v23 )
    goto LABEL_82;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovaps xmmword ptr [rsp+1E0h+var_48+8], xmm7
    vmovss  xmm7, cs:__real@3a83126f
    vmovaps [rsp+1E0h+var_58+8], xmm8
    vmovaps [rsp+1E0h+var_68+8], xmm9
    vmovss  xmm9, cs:__real@3f000000
    vmovaps [rsp+1E0h+var_78+8], xmm10
    vmovaps xmmword ptr [rsp+1E0h+var_A8+8], xmm13
    vmovaps [rsp+1E0h+var_B8+8], xmm14
    vmovss  xmm14, dword ptr [rbx+24h]
    vmovaps [rsp+1E0h+var_C8+8], xmm15
    vmovss  xmm15, dword ptr [rbx+20h]
    vmovss  [rsp+1E0h+var_1A8], xmm15
    vmovss  [rsp+1E0h+var_1AC], xmm14
    vmovss  [rsp+1E0h+var_1B0], xmm0
  }
  if ( !_RBX->stopAtGoal && !v30 )
  {
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm { vmovaps xmm10, xmm0 }
LABEL_27:
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+0B0h]
      vmovss  xmm7, dword ptr [rbx+0B4h]
      vmovss  xmm13, dword ptr [rbx+0B8h]
    }
    goto LABEL_28;
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+0B4h]; accel
    vmovss  xmm1, dword ptr [rbx+0B0h]; tgtSpeed
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm10, xmm0, xmm7
    vmovss  xmm0, dword ptr [rbx+4]; speed
    vmovaps xmm3, xmm10; dt
  }
  *(double *)&_XMM0 = Vehicle_AccelerateSpeed(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vucomiss xmm6, dword ptr [rbx+0B8h]
    vmovaps xmm7, xmm0
  }
  if ( v53 )
  {
    v55 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 676, ASSERT_TYPE_ASSERT, "(pathPos->manualDecel)", (const char *)&queryFormat, "pathPos->manualDecel");
    v52 = 0;
    v53 = !v55;
    if ( v55 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm0, xmm9, dword ptr [rbx+0B8h]
    vmulss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm7, xmm10
    vmulss  xmm3, xmm1, xmm7
    vsubss  xmm0, xmm12, xmm2
    vcomiss xmm0, xmm3
  }
  if ( v52 | v53 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+4]
      vcomiss xmm1, xmm6
    }
    if ( !(v52 | v53) )
    {
      __asm { vcomiss xmm12, xmm3 }
      if ( !(v52 | v53) )
      {
        __asm
        {
          vsubss  xmm0, xmm12, xmm3
          vdivss  xmm1, xmm0, xmm1
          vsubss  xmm0, xmm10, xmm1; val
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm2, xmm10; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm10, xmm0 }
      }
      v21 = 1;
    }
  }
  _RBX->stopping = v21;
  __asm { vmovss  xmm11, [rsp+1E0h+var_188] }
  if ( !v30 )
    goto LABEL_27;
  if ( _RBX->ent->vehicle->useDroneLogic )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@41b70a3d
      vmovss  xmm8, cs:__real@41d33333
      vmovaps xmm13, xmm7
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+4Ch]
      vmovss  xmm8, dword ptr [rbx+48h]
      vmulss  xmm13, xmm7, xmm9
    }
  }
LABEL_28:
  if ( _RBX->stopping )
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  else
  {
    __asm
    {
      vcomiss xmm8, xmm6
      vmovaps xmm13, xmm7
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]; speed
    vmovaps xmm3, xmm10; dt
    vmovaps xmm2, xmm13; accel
    vmovaps xmm1, xmm8; tgtSpeed
  }
  *(double *)&_XMM0 = Vehicle_AccelerateSpeed(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  v71 = _RBX->stopping == 0;
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm1, xmm1, xmm12
    vmulss  xmm3, xmm1, dword ptr [rsp+1E0h+vecToGoal]
    vmulss  xmm2, xmm1, dword ptr [rsp+1E0h+vecToGoal+4]
    vmulss  xmm5, xmm0, xmm3
    vmulss  xmm4, xmm1, xmm11
    vsubss  xmm8, xmm5, xmm15
    vmovss  dword ptr [rbp+0E0h+desiredDir+4], xmm2
    vmulss  xmm2, xmm0, xmm2
    vsubss  xmm9, xmm2, xmm14
    vmulss  xmm0, xmm0, xmm4
    vsubss  xmm7, xmm0, [rsp+1E0h+var_1B0]
    vmovss  dword ptr [rbp+0E0h+desiredDir], xmm3
    vmovss  dword ptr [rsp+1E0h+inOutAccelVec+8], xmm7
    vmovss  dword ptr [rbp+0E0h+desiredDir+8], xmm4
    vmovss  dword ptr [rsp+1E0h+inOutAccelVec], xmm8
    vmovss  dword ptr [rsp+1E0h+inOutAccelVec+4], xmm9
    vmovaps xmm3, xmm9
    vmovaps xmm14, xmm8
  }
  if ( v71 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0B0h]
      vcomiss xmm0, dword ptr [rbx+4]
      vmovss  xmm4, [rsp+1E0h+var_1AC]
      vmulss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm15, xmm5
      vaddss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm6
    }
    if ( !v71 )
    {
      __asm
      {
        vmulss  xmm1, xmm15, xmm8
        vmulss  xmm0, xmm9, xmm4
        vaddss  xmm2, xmm1, xmm0
        vcomiss xmm2, xmm6
      }
    }
  }
  __asm
  {
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm14, xmm14
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm14, xmm2, xmm2
    vmulss  xmm15, xmm13, xmm10
    vcomiss xmm14, xmm15
  }
  if ( !v71 )
  {
    __asm { vucomiss xmm14, xmm6 }
    if ( v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 909, ASSERT_TYPE_ASSERT, "(accelMagnitude)", (const char *)&queryFormat, "accelMagnitude") )
      __debugbreak();
    __asm
    {
      vdivss  xmm0, xmm15, xmm14
      vmulss  xmm8, xmm8, xmm0
      vmulss  xmm9, xmm9, xmm0
      vmulss  xmm7, xmm7, xmm0
      vmovss  dword ptr [rsp+1E0h+inOutAccelVec], xmm8
      vmovss  dword ptr [rsp+1E0h+inOutAccelVec+4], xmm9
      vmovss  dword ptr [rsp+1E0h+inOutAccelVec+8], xmm7
    }
  }
  v101 = 0;
  v102 = !v30;
  if ( !v30 )
  {
    __asm { vmovaps xmm2, xmm13; accelMax }
    G_VehicleHeli_CheckHorizontalVelocityToGoal(_RBX, &vecToGoal, *(double *)&_XMM2, &inOutAccelVec);
    __asm
    {
      vucomiss xmm11, xmm6
      vmovss  xmm7, dword ptr [rsp+1E0h+inOutAccelVec+8]
    }
    if ( !v102 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm2, cs:__real@3a83126f
        vmovss  xmm8, dword ptr [rbx+28h]
        vandps  xmm0, xmm7, xmm1
        vcomiss xmm0, xmm2
      }
      if ( !v101 )
      {
        __asm
        {
          vandps  xmm0, xmm8, xmm1
          vcomiss xmm0, xmm2
          vmulss  xmm0, xmm8, xmm7
          vcomiss xmm0, xmm6
        }
        if ( v101 )
        {
          __asm
          {
            vmulss  xmm0, xmm8, xmm11
            vcomiss xmm0, xmm6
          }
          if ( !(v101 | v102) )
          {
            *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
            __asm
            {
              vmovss  xmm1, cs:__real@40000000
              vdivss  xmm2, xmm1, xmm8
              vmulss  xmm9, xmm2, xmm11
              vmulss  xmm11, xmm0, xmm8
              vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
              vdivss  xmm1, xmm11, xmm7
              vxorps  xmm1, xmm1, xmm8
              vcomiss xmm1, xmm9
              vmovaps xmm13, xmm0
            }
            if ( !(v101 | v102) )
            {
              __asm { vucomiss xmm9, xmm6 }
              if ( v102 )
              {
                v119 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 602, ASSERT_TYPE_ASSERT, "(desiredStoppingTime)", (const char *)&queryFormat, "desiredStoppingTime");
                v101 = 0;
                v102 = !v119;
                if ( v119 )
                  __debugbreak();
              }
              __asm
              {
                vdivss  xmm0, xmm11, xmm9
                vxorps  xmm0, xmm0, xmm8; val
                vmulss  xmm2, xmm0, xmm0
                vmulss  xmm1, xmm7, xmm7
                vcomiss xmm2, xmm1
              }
              if ( !(v101 | v102) )
              {
                __asm
                {
                  vmulss  xmm1, xmm13, dword ptr [rbx+0B4h]
                  vmulss  xmm2, xmm1, cs:__real@40400000; max
                  vxorps  xmm1, xmm2, xmm8; min
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm
                {
                  vsubss  xmm1, xmm0, xmm7
                  vaddss  xmm2, xmm1, dword ptr [rbx+28h]
                  vmovss  dword ptr [rbx+28h], xmm2
                  vmovaps xmm7, xmm0
                }
              }
            }
          }
        }
      }
    }
    __asm
    {
      vmovss  xmm9, dword ptr [rsp+1E0h+inOutAccelVec+4]
      vmovss  xmm8, dword ptr [rsp+1E0h+inOutAccelVec]
    }
  }
  __asm
  {
    vaddss  xmm3, xmm7, [rsp+1E0h+var_1B0]
    vmovss  xmm11, cs:__real@3f000000
    vmovss  xmm14, [rsp+1E0h+var_1AC]
    vmovss  xmm13, [rsp+1E0h+var_1A8]
    vmovss  dword ptr [rbx+28h], xmm3
    vaddss  xmm2, xmm13, xmm8
    vmovss  dword ptr [rbx+20h], xmm2
    vaddss  xmm0, xmm9, xmm14
    vmovss  dword ptr [rbx+24h], xmm0
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  dword ptr [rbx+4], xmm0
    vsubss  xmm0, xmm8, dword ptr [rbx+38h]
    vmulss  xmm1, xmm0, xmm11
    vaddss  xmm8, xmm1, dword ptr [rbx+38h]
    vmovss  dword ptr [rbx+38h], xmm8
    vsubss  xmm0, xmm9, dword ptr [rbx+3Ch]
    vmulss  xmm1, xmm0, xmm11
    vaddss  xmm5, xmm1, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rbx+3Ch], xmm5
    vsubss  xmm0, xmm7, dword ptr [rbx+40h]
    vmulss  xmm1, xmm0, xmm11
    vaddss  xmm4, xmm1, dword ptr [rbx+40h]
    vmulss  xmm2, xmm8, xmm8
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, xmm15
    vmovss  dword ptr [rbx+40h], xmm4
  }
  if ( !(v101 | v102) && !_RBX->stopAtGoal )
  {
    __asm
    {
      vdivss  xmm2, xmm15, xmm0
      vmulss  xmm0, xmm8, xmm2
      vmovss  dword ptr [rbx+38h], xmm0
      vmulss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm2, xmm5
      vmovss  dword ptr [rbx+40h], xmm0
      vmovss  dword ptr [rbx+3Ch], xmm1
    }
  }
  __asm
  {
    vaddss  xmm0, xmm13, dword ptr [rbx+20h]
    vaddss  xmm1, xmm14, dword ptr [rbx+24h]
    vmovss  xmm15, [rsp+1E0h+var_1B0]
    vmulss  xmm7, xmm0, xmm11
    vaddss  xmm0, xmm15, dword ptr [rbx+28h]
    vmulss  xmm9, xmm0, xmm11
    vmulss  xmm8, xmm1, xmm11
  }
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm { vcomiss xmm10, xmm0 }
  if ( v22 )
  {
    __asm
    {
      vsubss  xmm3, xmm0, xmm10
      vmulss  xmm0, xmm3, xmm13
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
      vmulss  xmm2, xmm3, xmm14
      vaddss  xmm0, xmm2, dword ptr [rbx+0Ch]
      vmulss  xmm1, xmm3, xmm15
      vmovss  dword ptr [rbx+0Ch], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+10h]
      vmovss  dword ptr [rbx+10h], xmm2
    }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovaps xmm15, [rsp+1E0h+var_C8+8]
    vmovaps xmm14, [rsp+1E0h+var_B8+8]
    vmovaps xmm13, xmmword ptr [rsp+1E0h+var_A8+8]
    vmovss  dword ptr [rsp+1E0h+start+4], xmm0
    vmulss  xmm0, xmm7, xmm10
    vmovss  dword ptr [rsp+1E0h+start+8], xmm1
    vaddss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rbx+8], xmm1
    vmulss  xmm1, xmm9, xmm10
    vmovaps xmm9, [rsp+1E0h+var_68+8]
    vmovss  dword ptr [rsp+1E0h+start], xmm2
    vmulss  xmm2, xmm8, xmm10
    vaddss  xmm0, xmm2, dword ptr [rbx+0Ch]
    vmovaps xmm10, [rsp+1E0h+var_78+8]
    vmovaps xmm8, [rsp+1E0h+var_58+8]
    vmovss  dword ptr [rbx+0Ch], xmm0
    vaddss  xmm2, xmm1, dword ptr [rbx+10h]
    vmovss  dword ptr [rbx+10h], xmm2
  }
  if ( _RBX->touchTriggers )
    G_VehicleHeli_TouchTriggers(_RBX->ent);
  if ( _RBX->breakGlass )
  {
    _RDI = _RBX->ent;
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 828, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+110h]
      vmaxss  xmm1, xmm0, dword ptr [rdi+10Ch]
      vmaxss  xmm2, xmm1, dword ptr [rdi+114h]
    }
    ent = _RBX->ent;
    __asm
    {
      vmovss  dword ptr [rbp+0E0h+bounds.halfSize], xmm2
      vmovss  dword ptr [rbp+0E0h+bounds.halfSize+4], xmm2
      vmovss  dword ptr [rbp+0E0h+bounds.halfSize+8], xmm2
      vmovss  dword ptr [rbp+0E0h+bounds.midPoint], xmm6
      vmovss  dword ptr [rbp+0E0h+bounds.midPoint+4], xmm6
      vmovss  dword ptr [rbp+0E0h+bounds.midPoint+8], xmm6
    }
    G_Main_TraceCapsule(&results, &start, &_RBX->origin, &bounds, ent->s.number, 16);
    __asm
    {
      vmovss  xmm0, [rbp+0E0h+results.fraction]
      vmovss  xmm7, cs:__real@3f800000
      vcomiss xmm0, xmm7
    }
    if ( v22 )
    {
      GlassHitId = Trace_GetGlassHitId(&results);
      if ( GlassHitId )
      {
        __asm
        {
          vmovss  xmm5, dword ptr [rbx+24h]
          vmovss  xmm4, dword ptr [rbx+20h]
          vmovss  xmm6, dword ptr [rbx+28h]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm7, xmm0
          vdivss  xmm3, xmm7, xmm0
          vmulss  xmm0, xmm4, xmm3
          vmovss  dword ptr [rsp+1E0h+damageDir], xmm0
          vmulss  xmm0, xmm6, xmm3
          vmulss  xmm1, xmm5, xmm3
          vmovss  dword ptr [rsp+1E0h+damageDir+8], xmm0
          vmovss  dword ptr [rsp+1E0h+damageDir+4], xmm1
        }
        G_Glass_DestroyPiece(GlassHitId - 1, &_RBX->origin, &damageDir);
      }
    }
  }
  __asm { vmovaps xmm2, xmm12; distToGoal }
  G_VehicleHeli_UpdateMoveOrientation(_RBX, &desiredDir, *(float *)&_XMM2);
  __asm { vmovaps xmm7, xmmword ptr [rsp+1E0h+var_48+8] }
LABEL_82:
  _R11 = &v236;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
G_VehicleHeli_UpdateMove_CheckGoalReached
==============
*/

__int64 __fastcall G_VehicleHeli_UpdateMove_CheckGoalReached(HeliPathPos *pathPos, double distToGoal, double _XMM2_8)
{
  bool v5; 
  HeliPathPos *v6; 
  __int64 result; 
  char v15; 

  v5 = pathPos->stopAtGoal == 0;
  v6 = pathPos;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pathPos->stopAtGoal )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+44h]
      vxorps  xmm2, xmm2, xmm2
      vucomiss xmm1, xmm2
    }
    if ( pathPos->stopAtGoal )
    {
      __asm { vcomiss xmm6, xmm1 }
      if ( pathPos->stopAtGoal )
        goto LABEL_5;
      __asm
      {
        vmovss  xmm0, cs:__real@420ccccd
        vcomiss xmm0, dword ptr [rcx+4]
      }
      if ( !pathPos->stopAtGoal )
        goto LABEL_5;
    }
    else
    {
      v5 = pathPos->stopping == 0;
      if ( !pathPos->stopping )
      {
        __asm { vucomiss xmm6, xmm2 }
        if ( pathPos->stopping )
          goto LABEL_5;
      }
      __asm { vucomiss xmm2, dword ptr [rcx+4] }
      if ( pathPos->stopping )
        goto LABEL_5;
    }
    __asm { vucomiss xmm1, xmm2 }
    pathPos->moveState = VEH_MOVESTATE_HOVER;
    if ( v5 )
    {
      *(_QWORD *)pathPos->accel.v = 0i64;
      pathPos->accel.v[2] = 0.0;
      *(_QWORD *)pathPos->vel.v = 0i64;
      pathPos->vel.v[2] = 0.0;
    }
    GScr_Notify(pathPos->ent, scr_const.goal, 0);
    result = 1i64;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  else
  {
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbx+4]
      vcomiss xmm6, xmm1
    }
    if ( !(v15 | v5) )
    {
LABEL_5:
      result = 0i64;
      __asm { vmovaps xmm6, [rsp+38h+var_18] }
      return result;
    }
    GScr_Notify(v6->ent, scr_const.goal, 0);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return 1i64;
  }
  return result;
}

/*
==============
G_VehicleHeli_UpdateMove_CheckNearGoal
==============
*/

void __fastcall G_VehicleHeli_UpdateMove_CheckNearGoal(HeliPathPos *pathPos, double distToGoal)
{
  char v2; 
  char v3; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+0C0h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm2, xmm0
  }
  if ( !v3 )
  {
    __asm { vcomiss xmm1, xmm2 }
    if ( v2 )
      GScr_Notify(pathPos->ent, scr_const.near_goal, 0);
  }
}

/*
==============
G_VehicleHeli_UpdateMove_GetDesiredYaw
==============
*/
float G_VehicleHeli_UpdateMove_GetDesiredYaw(const HeliPathPos *pathPos, const vec3_t *desiredDir)
{
  const vec2_t *v15; 
  bool v16; 
  bool IsHovering; 
  bool v20; 
  int v43[4]; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm8 }
  _RBX = pathPos;
  if ( pathPos->hasLookAtEnt )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2A8h]
      vsubss  xmm1, xmm0, dword ptr [rcx+8]
      vmovss  xmm2, dword ptr [rcx+2ACh]
      vsubss  xmm0, xmm2, dword ptr [rcx+0Ch]
      vmovss  [rsp+0A8h+var_78], xmm1
      vmovss  xmm1, dword ptr [rcx+2B0h]
      vsubss  xmm2, xmm1, dword ptr [rcx+10h]
      vmovss  [rsp+0A8h+var_70], xmm2
      vmovss  [rsp+0A8h+var_74], xmm0
    }
    v15 = (const vec2_t *)v43;
LABEL_18:
    *(double *)&_XMM0 = vectoyaw(v15);
    goto LABEL_19;
  }
  if ( pathPos->hasGoalYaw && ((v16 = pathPos->stopping == 0, pathPos->stopping) || (IsHovering = G_VehicleHeli_IsHovering(pathPos), v16 = !IsHovering, IsHovering)) )
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+2C0h]
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovaps [rsp+0A8h+var_28], xmm7
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm6, dword ptr [rbx+2D0h]
      vmovaps [rsp+0A8h+var_48], xmm9
      vmovaps [rsp+0A8h+var_58], xmm10
    }
    if ( v16 )
    {
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 197, ASSERT_TYPE_ASSERT, "(pathPos->maxAngleVel[YAW])", (const char *)&queryFormat, "pathPos->maxAngleVel[YAW]");
      v16 = !v20;
      if ( v20 )
        __debugbreak();
    }
    __asm { vucomiss xmm6, dword ptr [rbx+0B8h] }
    if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 198, ASSERT_TYPE_ASSERT, "(pathPos->manualDecel)", (const char *)&queryFormat, "pathPos->manualDecel") )
      __debugbreak();
    __asm
    {
      vmovss  xmm9, dword ptr [rbx+2D0h]
      vdivss  xmm1, xmm9, dword ptr [rbx+2D8h]
      vmulss  xmm6, xmm1, cs:__real@40000000
      vsubss  xmm1, xmm8, dword ptr [rbx+18h]
      vmulss  xmm5, xmm1, cs:__real@3b360b61
      vmovss  xmm0, dword ptr [rbx+4]
      vdivss  xmm10, xmm0, dword ptr [rbx+0B8h]
      vcomiss xmm6, xmm10
      vmulss  xmm0, xmm9, cs:__real@3f000000
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm2, 1
      vmulss  xmm7, xmm0, xmm6
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps xmm9, [rsp+0A8h+var_48]
      vmovaps xmm7, [rsp+0A8h+var_28]
      vcomiss xmm6, xmm10
      vmovaps xmm10, [rsp+0A8h+var_58]
      vmovaps xmm6, [rsp+0A8h+var_18]
      vmovaps xmm0, xmm8
    }
  }
  else if ( _RBX->hasTargetYaw )
  {
    __asm { vmovss  xmm0, dword ptr [rbx+2C4h] }
  }
  else
  {
    if ( !G_VehicleHeli_IsHovering(_RBX) )
    {
      v15 = (const vec2_t *)desiredDir;
      goto LABEL_18;
    }
    __asm { vmovss  xmm0, dword ptr [rbx+18h] }
  }
LABEL_19:
  __asm { vmovaps xmm8, [rsp+0A8h+var_38] }
  return *(float *)&_XMM0;
}

/*
==============
G_VehicleHeli_UpdatePlayerMove
==============
*/
void G_VehicleHeli_UpdatePlayerMove(Vehicle *veh)
{
  gentity_s *ent; 
  gentity_s *v10; 
  int v11; 
  const dvar_t *v36; 
  bool v48; 
  scrContext_t *v84; 
  char v98; 
  const dvar_t *v99; 
  float fmt; 
  float b; 
  unsigned int bumpEntityNum; 
  char move[4]; 
  vec3_t outRotAccel; 
  vec3_t outBodyAccel; 
  float v117[4]; 
  vec3_t angles; 
  float value[4]; 
  tmat43_t<vec3_t> forward; 

  *(_DWORD *)move = 0;
  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2259, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ent = _RBX->ent;
  if ( !_RBX->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2264, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
  {
    v10 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v10->client )
    {
      v11 = 2269;
      goto LABEL_14;
    }
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) || !EntHandle::isDefined(&ent->remoteControlledOwner) )
      return;
    v10 = EntHandle::ent(&ent->remoteControlledOwner);
    if ( !v10->client )
    {
      v11 = 2274;
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", v11, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
        __debugbreak();
    }
  }
  __asm
  {
    vmovaps [rsp+150h+var_30], xmm6
    vmovaps [rsp+150h+var_40], xmm7
    vmovaps [rsp+150h+var_50], xmm8
    vmovaps [rsp+150h+var_60], xmm9
    vmovaps [rsp+150h+var_70], xmm10
    vmovaps [rsp+150h+var_80], xmm11
  }
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->GetVehicleHeliPlayerMove(GVehicles::ms_gVehiclesSystem, _RBX, v10, move);
  G_VehicleHeli_CalcAccel(ent, v10, move, &outBodyAccel, &outRotAccel);
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm
  {
    vmulss  xmm2, xmm0, dword ptr [rsp+150h+outRotAccel+4]
    vaddss  xmm3, xmm2, dword ptr [rbx+16Ch]
    vmulss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rbx+16Ch], xmm3
    vaddss  xmm2, xmm1, dword ptr [rbx+118h]
    vmulss  xmm6, xmm2, cs:__real@3b360b61
    vaddss  xmm3, xmm6, cs:__real@3f000000
    vmovaps xmm8, xmm0
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm5, xmm2, xmm3, 1
    vsubss  xmm0, xmm6, xmm5
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  xmm0, dword ptr [rsp+150h+outRotAccel]
    vmovss  dword ptr [rbx+10Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+150h+outRotAccel+8]
    vmovss  dword ptr [rbx+108h], xmm0
    vmovss  dword ptr [rbx+110h], xmm1
    vmovss  xmm0, dword ptr [rbx+108h]
    vmovss  [rsp+150h+bumpEntityNum], xmm0
  }
  if ( (bumpEntityNum & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10Ch]
    vmovss  [rsp+150h+bumpEntityNum], xmm0
  }
  if ( (bumpEntityNum & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm { vmovss  [rsp+150h+bumpEntityNum], xmm1 }
  if ( (bumpEntityNum & 0x7F800000) == 2139095040 )
  {
LABEL_49:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2300, ASSERT_TYPE_SANITY, "( !IS_NAN( ( phys->angles )[0] ) && !IS_NAN( ( phys->angles )[1] ) && !IS_NAN( ( phys->angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( phys->angles )[0] ) && !IS_NAN( ( phys->angles )[1] ) && !IS_NAN( ( phys->angles )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10Ch]
    vxorps  xmm9, xmm9, xmm9
    vmovss  dword ptr [rsp+150h+angles], xmm9
    vmovss  dword ptr [rsp+150h+angles+4], xmm0
    vmovss  dword ptr [rbp+50h+angles+8], xmm9
  }
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+150h+outBodyAccel+4]
    vmovss  xmm7, dword ptr [rsp+150h+outBodyAccel]
    vmovss  xmm5, dword ptr [rsp+150h+outBodyAccel+8]
    vmulss  xmm2, xmm7, dword ptr [rbp+50h+forward]
    vmulss  xmm0, xmm6, dword ptr [rbp+50h+right]
    vmulss  xmm1, xmm5, dword ptr [rbp+50h+up]
    vmulss  xmm3, xmm7, dword ptr [rbp+50h+forward+4]
  }
  v36 = DVARBOOL_vehHelicopterSoftCollisions;
  __asm
  {
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm10, xmm2, xmm1
    vmulss  xmm2, xmm6, dword ptr [rbp+50h+right+4]
    vmulss  xmm1, xmm5, dword ptr [rbp+50h+up+4]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm6, dword ptr [rbp+50h+right+8]
    vmulss  xmm3, xmm7, dword ptr [rbp+50h+forward+8]
    vaddss  xmm11, xmm4, xmm1
    vmulss  xmm1, xmm5, dword ptr [rbp+50h+up+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
    vmovss  dword ptr [rsp+150h+outRotAccel+8], xmm6
    vmovss  [rbp+50h+var_94], xmm9
    vmovss  [rbp+50h+var_90], xmm9
    vmovss  [rbp+50h+var_8C], xmm9
    vmovss  dword ptr [rsp+150h+outRotAccel], xmm10
    vmovss  dword ptr [rsp+150h+outRotAccel+4], xmm11
  }
  if ( !DVARBOOL_vehHelicopterSoftCollisions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterSoftCollisions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  v48 = !v36->current.enabled;
  if ( v36->current.enabled )
  {
    G_VehicleHeli_SoftenCollisions(ent, &outRotAccel);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+150h+outRotAccel+8]
      vmovss  xmm11, dword ptr [rsp+150h+outRotAccel+4]
      vmovss  xmm10, dword ptr [rsp+150h+outRotAccel]
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm0, xmm10, xmm8
    vaddss  xmm2, xmm0, dword ptr [rbx+138h]
    vmovss  dword ptr [rbx+138h], xmm2
    vmulss  xmm1, xmm11, xmm8
    vaddss  xmm4, xmm1, dword ptr [rbx+13Ch]
    vmovss  dword ptr [rbx+13Ch], xmm4
    vmulss  xmm0, xmm6, xmm8
    vaddss  xmm3, xmm0, dword ptr [rbx+140h]
    vmovss  dword ptr [rbx+140h], xmm3
    vucomiss xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  if ( !v48 )
    goto LABEL_50;
  __asm { vucomiss xmm4, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin }
  if ( !v48 )
    goto LABEL_50;
  __asm { vucomiss xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin }
  if ( !v48 )
  {
LABEL_50:
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+0F0h]
      vmovss  xmm10, dword ptr [rbx+0F4h]
      vmovss  xmm11, dword ptr [rbx+0F8h]
      vmovss  [rsp+150h+var_E8], xmm2
      vmovss  [rsp+150h+var_E4], xmm4
      vmovss  [rsp+150h+var_E0], xmm3
    }
    G_Vehicle_ClearGround(ent);
    __asm { vmovaps xmm2, xmm8; frameTime }
    if ( G_Vehicle_SlideMove(ent, 0, *(float *)&_XMM2, &bumpEntityNum) )
    {
      __asm
      {
        vmulss  xmm1, xmm8, [rsp+150h+var_E8]
        vmovss  xmm2, dword ptr [rbx+0F0h]
        vaddss  xmm3, xmm1, xmm6
        vmulss  xmm1, xmm8, [rsp+150h+var_E4]
        vsubss  xmm6, xmm2, xmm3
        vmovss  xmm2, dword ptr [rbx+0F4h]
        vaddss  xmm3, xmm1, xmm10
        vmulss  xmm1, xmm8, [rsp+150h+var_E0]
        vsubss  xmm5, xmm2, xmm3
        vmovss  xmm2, dword ptr [rbx+0F8h]
        vaddss  xmm3, xmm1, xmm11
        vsubss  xmm4, xmm2, xmm3
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcomiss xmm3, xmm9
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm2, xmm7, xmm0
        vmulss  xmm0, xmm2, xmm6
        vmovss  [rbp+50h+value], xmm0
        vmulss  xmm0, xmm2, xmm4
        vmulss  xmm1, xmm2, xmm5
        vmovss  [rbp+50h+var_C0], xmm0
        vmovss  [rbp+50h+var_C4], xmm1
      }
      v84 = ScriptContext_Server();
      if ( bumpEntityNum - 2046 <= 1 )
        Scr_AddUndefined(v84);
      else
        GScr_AddEntity(&g_entities[bumpEntityNum]);
      Scr_AddVector(v84, value);
      Scr_AddVector(v84, v117);
      GScr_Notify(ent, scr_const.veh_collision, 3u);
    }
  }
  G_VehicleHeli_CheckForPredictedCrash(ent);
  MatrixTransposeTransformVector43(&_RBX->phys.vel, &forward, &_RBX->phys.bodyVel);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+138h]
    vmovss  xmm2, dword ptr [rbx+13Ch]
    vmovss  xmm3, dword ptr [rbx+140h]
    vmovaps xmm11, [rsp+150h+var_80]
    vmovaps xmm10, [rsp+150h+var_70]
    vmovaps xmm8, [rsp+150h+var_50]
    vmovaps xmm6, [rsp+150h+var_30]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, xmm9
    vmovss  dword ptr [rbx+588h], xmm0
  }
  if ( v98 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_helicopter.cpp", 2354, ASSERT_TYPE_ASSERT, "(veh->speed >= 0.0f)", (const char *)&queryFormat, "veh->speed >= 0.0f") )
    __debugbreak();
  v99 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v99);
  if ( v99->current.integer )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0F0h]
      vmovss  xmm1, dword ptr [rbx+0F4h]
      vmovss  xmm4, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+150h+outBodyAccel+4], xmm1
      vmovss  dword ptr [rsp+150h+outBodyAccel], xmm0
      vmovss  xmm0, dword ptr [rbx+128h]
      vsubss  xmm1, xmm0, xmm4
      vaddss  xmm2, xmm1, dword ptr [rbx+0F8h]
      vmovss  xmm1, dword ptr [rbx+12Ch]; rad
      vmovss  dword ptr [rsp+150h+outBodyAccel+8], xmm2
      vmulss  xmm2, xmm4, cs:__real@40000000; height
      vmovss  [rsp+150h+b], xmm9
      vmovaps xmm3, xmm7; r
      vmovss  dword ptr [rsp+150h+fmt], xmm7
    }
    G_Vehicle_DebugCapsule(&outBodyAccel, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, b);
  }
  __asm
  {
    vmovaps xmm7, [rsp+150h+var_40]
    vmovaps xmm9, [rsp+150h+var_60]
  }
}

