/*
==============
G_VehicleUGV_CalcRotAccel
==============
*/

void __fastcall G_VehicleUGV_CalcRotAccel(gentity_s *ent, const vec3_t *targetVelocity, vec3_t *outRotAccel)
{
  ?G_VehicleUGV_CalcRotAccel@@YAXPEAUgentity_s@@AEBTvec3_t@@AEAT2@@Z(ent, targetVelocity, outRotAccel);
}

/*
==============
G_VehicleUGV_ClipVelocity
==============
*/

void __fastcall G_VehicleUGV_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  ?G_VehicleUGV_ClipVelocity@@YAXAEBTvec3_t@@0AEAT1@@Z(in, normal, out);
}

/*
==============
G_VehicleUGV_CorrectAllSolid
==============
*/

int __fastcall G_VehicleUGV_CorrectAllSolid(gentity_s *ent, trace_t *trace)
{
  return ?G_VehicleUGV_CorrectAllSolid@@YAHPEAUgentity_s@@PEAUtrace_t@@@Z(ent, trace);
}

/*
==============
G_VehicleUGV_UpdatePlayerMove
==============
*/

void __fastcall G_VehicleUGV_UpdatePlayerMove(Vehicle *veh)
{
  ?G_VehicleUGV_UpdatePlayerMove@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_VehicleUGV_CalcAccel
==============
*/

double __fastcall G_VehicleUGV_CalcAccel(gentity_s *ent, const vec3_t *moveInput, float throttle)
{
  double result; 

  *(float *)&result = ?G_VehicleUGV_CalcAccel@@YAMPEAUgentity_s@@AEBTvec3_t@@M@Z(ent, moveInput, throttle);
  return result;
}

/*
==============
G_VehicleUGV_CalcAccel
==============
*/
double G_VehicleUGV_CalcAccel(gentity_s *ent, const vec3_t *moveInput, float throttle)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  float topSpeedForward; 
  float accel; 

  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 266, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( vehicle->joltTime <= 0.0 )
  {
    accel = ServerDef->accel;
    topSpeedForward = ent->vehicle->topSpeedForward;
  }
  else
  {
    topSpeedForward = vehicle->joltSpeed;
    accel = vehicle->joltDecel;
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  return I_fclamp((float)((float)(topSpeedForward * throttle) - fsqrt((float)((float)(vehicle->phys.bodyVel.v[0] * vehicle->phys.bodyVel.v[0]) + (float)(vehicle->phys.bodyVel.v[1] * vehicle->phys.bodyVel.v[1])) + (float)(vehicle->phys.bodyVel.v[2] * vehicle->phys.bodyVel.v[2]))) * (float)(1000.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)level.frameDuration).m128_f32[0]), COERCE_FLOAT(LODWORD(accel) ^ _xmm), accel);
}

/*
==============
G_VehicleUGV_CalcRotAccel
==============
*/
void G_VehicleUGV_CalcRotAccel(gentity_s *ent, const vec3_t *targetVelocity, vec3_t *outRotAccel)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  float v7; 
  float v8; 
  double v9; 
  int v10; 
  double v13; 
  float v14; 
  float v15; 
  double v16; 
  float v17; 
  double v18; 

  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 224, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v8 = 1000.0 / (float)level.frameDuration;
  v7 = v8;
  if ( (float)((float)((float)(targetVelocity->v[0] * targetVelocity->v[0]) + (float)(targetVelocity->v[1] * targetVelocity->v[1])) + (float)(targetVelocity->v[2] * targetVelocity->v[2])) <= 0.0 )
  {
    v10 = _xmm;
    LODWORD(v14) = COERCE_UNSIGNED_INT(v8 * vehicle->phys.rotVel.v[1]) ^ _xmm;
    outRotAccel->v[1] = v14;
    v13 = I_fclamp(v14, COERCE_FLOAT(LODWORD(ServerDef->rotAccel) ^ _xmm), ServerDef->rotAccel);
  }
  else
  {
    v9 = vectosignedyaw((const vec2_t *)targetVelocity);
    v10 = _xmm;
    _XMM3 = 0i64;
    __asm { vroundss xmm5, xmm3, xmm4, 1 }
    v13 = I_fclamp((float)((float)((float)((float)(*(float *)&v9 - vehicle->phys.prevAngles.v[1]) * 0.0027777778) - *(float *)&_XMM5) * 360.0) * v8, COERCE_FLOAT(LODWORD(vehicle->topSpeedYawRate) ^ _xmm), vehicle->topSpeedYawRate);
    *(float *)&v13 = (float)(*(float *)&v13 - vehicle->phys.rotVel.v[1]) * v8;
  }
  outRotAccel->v[1] = *(float *)&v13;
  v15 = v8 * vehicle->phys.rotVel.v[0];
  outRotAccel->v[0] = COERCE_FLOAT(LODWORD(v15) ^ v10);
  v16 = I_fclamp(COERCE_FLOAT(LODWORD(v15) ^ v10), COERCE_FLOAT(LODWORD(ServerDef->rotAccel) ^ v10), ServerDef->rotAccel);
  outRotAccel->v[0] = *(float *)&v16;
  v17 = v7 * vehicle->phys.rotVel.v[2];
  outRotAccel->v[2] = COERCE_FLOAT(LODWORD(v17) ^ v10);
  v18 = I_fclamp(COERCE_FLOAT(LODWORD(v17) ^ v10), COERCE_FLOAT(LODWORD(ServerDef->rotAccel) ^ v10), ServerDef->rotAccel);
  outRotAccel->v[2] = *(float *)&v18;
}

/*
==============
G_VehicleUGV_CalcTargetVelocity
==============
*/

void __fastcall G_VehicleUGV_CalcTargetVelocity(Vehicle *veh, const vec3_t *moveInput, float throttle, double topSpeed, vec3_t *outTargetVelocity)
{
  gentity_s *ent; 
  unsigned __int16 number; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  gentity_s *v12; 
  float v13; 
  float v14; 
  float v16; 
  float v17; 
  __int128 v19; 
  float v24; 
  float v25; 
  __int128 v26; 
  __int128 v27; 
  float v31; 
  __int64 v32; 
  __int64 v33; 
  vec3_t angles; 

  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 176, ASSERT_TYPE_ASSERT, "(veh->ent)", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  ent = veh->ent;
  number = veh->ent->r.ownerNum.number;
  if ( !number )
    goto LABEL_32;
  v9 = number;
  v10 = number - 1;
  if ( v10 >= 0x800 )
  {
    LODWORD(v32) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v11 = v9 - 1;
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] )
  {
    LODWORD(v33) = ent->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v33) )
      __debugbreak();
  }
  if ( !ent->r.ownerNum.number )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 177, ASSERT_TYPE_ASSERT, "(veh->ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "veh->ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v12 = EntHandle::ent(&veh->ent->r.ownerNum);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 180, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !v12->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 181, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  v13 = 0.0;
  v14 = 0.0;
  if ( throttle <= 0.0 )
  {
    v31 = 0.0;
  }
  else
  {
    *((double *)&_XMM0 + 1) = *(&topSpeed + 1);
    v16 = v12->client->ps.viewangles.v[1];
    I_fclamp(*(float *)&topSpeed * throttle, 0.0, *(float *)&topSpeed);
    v17 = *(float *)&topSpeed * throttle;
    *(double *)&_XMM0 = vectosignedyaw((const vec2_t *)moveInput);
    v19 = _XMM0;
    *(float *)&v19 = *(float *)&_XMM0 - 90.0;
    _XMM3 = v19;
    __asm
    {
      vcmpltss xmm1, xmm0, cs:__real@c2b40000
      vblendvps xmm2, xmm3, xmm2, xmm1
    }
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm2, 1 }
    angles.v[1] = (float)((float)((float)(*(float *)&_XMM2 + v16) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    angles.v[0] = 0.0;
    angles.v[2] = 0.0;
    AngleVectors(&angles, outTargetVelocity, NULL, NULL);
    v24 = outTargetVelocity->v[1];
    v25 = outTargetVelocity->v[2];
    v26 = LODWORD(outTargetVelocity->v[0]);
    v27 = v26;
    *(float *)&v27 = fsqrt((float)((float)(*(float *)&v26 * *(float *)&v26) + (float)(v24 * v24)) + (float)(v25 * v25));
    _XMM3 = v27;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    *(float *)&_XMM2 = v24 * (float)(1.0 / *(float *)&_XMM0);
    outTargetVelocity->v[2] = v25 * (float)(1.0 / *(float *)&_XMM0);
    v13 = (float)(v25 * (float)(1.0 / *(float *)&_XMM0)) * v17;
    outTargetVelocity->v[1] = *(float *)&_XMM2;
    v14 = *(float *)&_XMM2 * v17;
    v31 = (float)(*(float *)&v26 * (float)(1.0 / *(float *)&_XMM0)) * v17;
  }
  outTargetVelocity->v[0] = v31;
  outTargetVelocity->v[1] = v14;
  outTargetVelocity->v[2] = v13;
}

/*
==============
G_VehicleUGV_ClipVelocity
==============
*/
void G_VehicleUGV_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  float v3; 
  const vec3_t *v4; 
  float v5; 
  float v6; 
  __int128 v7; 
  signed __int64 v10; 
  int v11; 
  signed __int64 v14; 
  float v15; 
  bool v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  __int64 v20; 

  v3 = normal->v[2];
  v4 = in;
  if ( v3 < 0.69999999 || (v5 = in->v[1], v6 = in->v[0], (float)((float)(v6 * v6) + (float)(v5 * v5)) < (float)(in->v[2] * in->v[2])) )
  {
    v7 = LODWORD(in->v[1]);
    *(float *)&v7 = (float)((float)(in->v[1] * normal->v[1]) + (float)(in->v[0] * normal->v[0])) + (float)(v3 * in->v[2]);
    _XMM5 = v7;
    _XMM0 = LODWORD(FLOAT_0_99009901);
    v10 = (char *)normal - (char *)in;
    v11 = 0;
    __asm
    {
      vcmpltss xmm3, xmm5, xmm1
      vblendvps xmm1, xmm0, xmm2, xmm3
    }
    v14 = (char *)out - (char *)in;
    v15 = *(float *)&_XMM1 * *(float *)&v7;
    v16 = 1;
    do
    {
      if ( !v16 )
      {
        LODWORD(v20) = 3;
        LODWORD(v19) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v17 = v15 * *(float *)((char *)v4->v + v10);
      if ( (unsigned int)v11 >= 3 )
      {
        LODWORD(v20) = 3;
        LODWORD(v19) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v18 = v4->v[0] - v17;
      if ( (unsigned int)v11 >= 3 )
      {
        LODWORD(v20) = 3;
        LODWORD(v19) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      *(float *)((char *)v4->v + v14) = v18;
      v4 = (const vec3_t *)((char *)v4 + 4);
      v16 = (unsigned int)++v11 < 3;
    }
    while ( v11 < 3 );
  }
  else
  {
    out->v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 * normal->v[0]) ^ _xmm) - (float)(v5 * normal->v[1]);
    out->v[0] = in->v[0] * normal->v[2];
    out->v[1] = in->v[1] * normal->v[2];
  }
}

/*
==============
G_VehicleUGV_CorrectAllSolid
==============
*/
__int64 G_VehicleUGV_CorrectAllSolid(gentity_s *ent, trace_t *trace)
{
  Vehicle *vehicle; 
  float *v3; 
  unsigned int v6; 
  float v7; 
  int passEntityNum; 
  int contentmask; 
  __int64 result; 
  float v11; 
  int number; 
  int clipmask; 
  float fraction; 
  vec3_t start; 

  vehicle = ent->vehicle;
  v3 = &s_correctSolidDeltas_ugv[0].v[2];
  v6 = 0;
  while ( 1 )
  {
    v7 = *(v3 - 1);
    passEntityNum = ent->s.number;
    contentmask = ent->clipmask;
    start.v[0] = *(v3 - 2) + vehicle->phys.origin.v[0];
    start.v[1] = v7 + vehicle->phys.origin.v[1];
    start.v[2] = vehicle->phys.origin.v[2] + *v3;
    G_Main_TraceCapsule(trace, &start, &start, &vehicle->phys.bounds, passEntityNum, contentmask);
    if ( !trace->startsolid )
      break;
    ++v6;
    v3 += 3;
    if ( v6 >= 0x1A )
      return 0i64;
  }
  vehicle->phys.origin.v[0] = start.v[0];
  vehicle->phys.origin.v[1] = start.v[1];
  v11 = vehicle->phys.origin.v[0];
  vehicle->phys.origin.v[2] = start.v[2];
  number = ent->s.number;
  clipmask = ent->clipmask;
  start.v[0] = v11;
  start.v[1] = vehicle->phys.origin.v[1];
  start.v[2] = vehicle->phys.origin.v[2] - 1.0;
  G_Main_TraceCapsule(trace, &vehicle->phys.origin, &start, &vehicle->phys.bounds, number, clipmask);
  *(__m256i *)&s_phys_ugv.groundTrace.fraction = *(__m256i *)&trace->fraction;
  *(__m256i *)&s_phys_ugv.groundTrace.contents = *(__m256i *)&trace->contents;
  *(_OWORD *)&s_phys_ugv.groundTrace.allsolid = *(_OWORD *)&trace->allsolid;
  s_phys_ugv.groundTrace.debugHitName = trace->debugHitName;
  fraction = trace->fraction;
  vehicle->phys.origin.v[0] = (float)((float)(start.v[0] - vehicle->phys.origin.v[0]) * trace->fraction) + vehicle->phys.origin.v[0];
  vehicle->phys.origin.v[1] = (float)((float)(start.v[1] - vehicle->phys.origin.v[1]) * fraction) + vehicle->phys.origin.v[1];
  result = 1i64;
  vehicle->phys.origin.v[2] = (float)((float)(start.v[2] - vehicle->phys.origin.v[2]) * fraction) + vehicle->phys.origin.v[2];
  return result;
}

/*
==============
G_VehicleUGV_GroundPlant
==============
*/
void G_VehicleUGV_GroundPlant(gentity_s *ent, vehicle_physic_t *phys, int gravity)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  int v7; 
  scr_string_t **v8; 
  int v9; 
  vehicle_physic_t *v10; 
  int v11; 
  float v12; 
  vec3_t *p_angles; 
  __int64 v14; 
  float v15; 
  float *wheelZVel; 
  __int64 v17; 
  const dvar_t *v18; 
  char *v19; 
  float value; 
  int v21; 
  const char *v22; 
  const char *v23; 
  DObjAnimMat *LocalBoneIndexMatrix; 
  const dvar_t *v25; 
  float v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  float v30; 
  float v31; 
  int v32; 
  float v33; 
  const dvar_t *v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  float v42; 
  __int128 v46; 
  float v47; 
  float v48; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  __int64 v56; 
  float suspensionTravel; 
  float *v58; 
  unsigned __int64 v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  __int64 v65; 
  float *v66; 
  float v67; 
  __int128 v68; 
  __int128 v72; 
  float v76; 
  float v77; 
  float v78; 
  __int64 v79; 
  bool v80; 
  float v81; 
  __int64 duration; 
  __int64 durationa; 
  __int64 v84; 
  __int64 v85; 
  int v86; 
  int contentmask_4; 
  __int64 v89; 
  __int64 v90; 
  const VehicleDef *v92; 
  Vehicle *v93; 
  vec3_t end; 
  vec3_t cross; 
  float v96; 
  vec3_t start; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  vec3_t v1; 
  vec3_t v0; 
  vec3_t v102; 
  vec3_t v103; 
  vec3_t v104; 
  vec3_t v105; 
  vec3_t angles; 
  Bounds box; 
  Bounds v108; 
  vec4_t v109; 
  vec4_t v110; 
  vec4_t v111; 
  vec4_t v112; 
  vec4_t v113; 
  vec4_t color; 
  vec4_t v115; 
  trace_t results; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  vec3_t out[12]; 
  vec3_t origin[12]; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 470, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !phys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 471, ASSERT_TYPE_ASSERT, "(phys)", (const char *)&queryFormat, "phys") )
    __debugbreak();
  vehicle = ent->vehicle;
  v93 = vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 474, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  v92 = ServerDef;
  if ( ServerDef->type != VEH_UGV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 477, ASSERT_TYPE_ASSERT, "(vehDef->type == VEH_UGV)", (const char *)&queryFormat, "vehDef->type == VEH_UGV") )
    __debugbreak();
  v7 = 0;
  v8 = s_wheelTags_ugv;
  v9 = 0;
  do
  {
    if ( SV_Game_DObjGetBoneIndex(ent, **v8) < 0 )
      break;
    ++v9;
    ++v8;
  }
  while ( (__int64)v8 < (__int64)&unk_147FB4DA0 );
  v10 = phys;
  v11 = 66065;
  if ( vehicle->drivingState != VEH_DRIVE_PLAYER )
    v11 = 529;
  contentmask_4 = v11;
  v12 = phys->origin.v[1];
  axis.m[3].v[0] = phys->origin.v[0];
  p_angles = &phys->angles;
  axis.m[3].v[2] = phys->prevOrigin.v[2];
  axis.m[3].v[1] = v12;
  AnglesToAxis(&phys->angles, (tmat33_t<vec3_t> *)&axis);
  v86 = 0;
  v14 = v9;
  v15 = FLOAT_1_0;
  if ( v9 > 0 )
  {
    v89 = 0i64;
    wheelZVel = phys->wheelZVel;
    v90 = 1648i64 - (_QWORD)phys;
    v17 = 0i64;
    do
    {
      v18 = DVARFLT_vehUGVWheelInfluence;
      if ( !DVARFLT_vehUGVWheelInfluence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehUGVWheelInfluence") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v19 = (char *)wheelZVel + (unsigned __int64)ent->vehicle;
      value = v18->current.value;
      v21 = *(_DWORD *)&v19[v90];
      if ( v21 < 0 )
      {
        v22 = SL_ConvertToString(*s_wheelTags_ugv[v89]);
        v23 = SL_ConvertToString(ent->targetname);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E34918, 306i64, v23, v22);
        v21 = *(_DWORD *)&v19[v90];
      }
      LocalBoneIndexMatrix = G_Utils_DObjGetLocalBoneIndexMatrix(ent, v21);
      if ( !LocalBoneIndexMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 422, ASSERT_TYPE_ASSERT, "(mtx)", (const char *)&queryFormat, "mtx") )
        __debugbreak();
      in1 = LocalBoneIndexMatrix->trans;
      MatrixTransformVector43(&in1, &axis, &out[v86]);
      v25 = DCONST_DVARINT_bg_vehicleDebug;
      if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v25->current.integer )
      {
        color = (vec4_t)_xmm;
        *(_OWORD *)box.midPoint.v = _xmm;
        box.halfSize.v[1] = FLOAT_2_0;
        box.halfSize.v[2] = FLOAT_2_0;
        G_DebugBox(&out[v86], &box, 0.0, &color, 1, 0);
      }
      v26 = out[v17].v[2];
      v27 = out[v17].v[0];
      v28 = DCONST_DVARINT_bg_vehicleDebug;
      start.v[1] = out[v17].v[1];
      end.v[1] = start.v[1];
      end.v[2] = v26 - 256.0;
      start.v[0] = v27;
      end.v[0] = v27;
      start.v[2] = v26 + 64.0;
      if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.integer )
      {
        v115 = (vec4_t)_xmm;
        G_DebugLine(&start, &end, &v115, 1);
      }
      G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, ent->s.number, contentmask_4);
      if ( results.fraction >= v15 )
      {
        v29 = end.v[0];
        v30 = end.v[1];
        v31 = end.v[2];
        v32 = 0;
      }
      else
      {
        v29 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
        v30 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
        v31 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
        v32 = (results.surfaceFlags >> 19) & 0x3F;
      }
      *((_DWORD *)wheelZVel + 24) = v32;
      if ( !gravity )
        goto LABEL_49;
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      *wheelZVel = *wheelZVel - (float)((float)level.frameDuration * 0.80000001);
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v33 = (float)((float)((float)level.frameDuration * *wheelZVel) * 0.001) + wheelZVel[12];
      wheelZVel[12] = v33;
      if ( v33 < v31 )
      {
LABEL_49:
        wheelZVel[12] = v31;
        *wheelZVel = 0.0;
        v33 = v31;
      }
      v34 = DCONST_DVARINT_bg_vehicleDebug;
      origin[v17].v[0] = v29;
      origin[v17].v[1] = v30;
      origin[v17].v[2] = v33;
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.integer )
      {
        v108.halfSize.v[1] = FLOAT_2_0;
        v108.halfSize.v[2] = FLOAT_2_0;
        v109 = (vec4_t)_xmm;
        *(_OWORD *)v108.midPoint.v = _xmm;
        G_DebugBox(&origin[v86], &v108, 0.0, &v109, 1, 0);
      }
      v35 = out[v17].v[1];
      v36 = out[v17].v[2];
      ++v86;
      v15 = FLOAT_1_0;
      v37 = origin[v17].v[2];
      v38 = (float)(origin[v17].v[1] - v35) * value;
      *(float *)((char *)&v117 + v17 * 12) = (float)((float)(origin[v17].v[0] - out[v17].v[0]) * value) + out[v17].v[0];
      *(float *)((char *)&v118 + v17 * 12) = v38 + v35;
      *(float *)((char *)&v119 + v17 * 12) = (float)((float)(v37 - v36) * value) + v36;
      ++v17;
      ++v89;
      ++wheelZVel;
    }
    while ( v89 < v14 );
    v10 = phys;
    ServerDef = v92;
    p_angles = &phys->angles;
  }
  v39 = LODWORD(v121);
  v40 = (float)((float)(v120 + v126) * 0.5) - (float)((float)(v123 + v117) * 0.5);
  v41 = (float)((float)(v121 + v127) * 0.5) - (float)((float)(v124 + v118) * 0.5);
  v42 = (float)((float)(v122 + v128) * 0.5) - (float)((float)(v125 + v119) * 0.5);
  *(float *)&v39 = fsqrt((float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v42 * v42));
  _XMM4 = v39;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v0.v[0] = (float)(1.0 / *(float *)&_XMM0) * v40;
  v0.v[2] = (float)(1.0 / *(float *)&_XMM0) * v42;
  v0.v[1] = (float)(1.0 / *(float *)&_XMM0) * v41;
  v46 = LODWORD(v121);
  v47 = (float)((float)(v120 + v117) * 0.5) - (float)((float)(v123 + v126) * 0.5);
  v48 = (float)((float)(v121 + v118) * 0.5) - (float)((float)(v124 + v127) * 0.5);
  *(float *)&_XMM4 = (float)((float)(v122 + v119) * 0.5) - (float)((float)(v125 + v128) * 0.5);
  *(float *)&v46 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4));
  _XMM3 = v46;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm14, xmm0
  }
  v1.v[0] = (float)(1.0 / *(float *)&_XMM0) * v47;
  v1.v[2] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&_XMM4;
  v1.v[1] = (float)(1.0 / *(float *)&_XMM0) * v48;
  Vec3Cross(&v0, &v1, &cross);
  v52 = cross.v[1];
  v53 = cross.v[0];
  v54 = cross.v[2];
  v55 = (float)((float)(cross.v[1] * v118) + (float)(cross.v[0] * v117)) + (float)(cross.v[2] * v119);
  v96 = v55;
  if ( v14 > 1 )
  {
    v56 = 1i64;
    if ( v14 >= 5 )
    {
      suspensionTravel = ServerDef->vehiclePhysicsDef.suspensionTravel;
      v58 = &v122;
      v59 = ((unsigned __int64)(v14 - 5) >> 2) + 1;
      v56 = 4 * v59 + 1;
      do
      {
        v60 = (float)((float)(cross.v[0] * *(v58 - 2)) + (float)(cross.v[1] * *(v58 - 1))) + (float)(cross.v[2] * *v58);
        if ( (float)(v60 - v55) > suspensionTravel )
        {
          v55 = v60 - suspensionTravel;
          v96 = v60 - suspensionTravel;
        }
        v61 = (float)((float)(cross.v[0] * v58[1]) + (float)(cross.v[1] * v58[2])) + (float)(cross.v[2] * v58[3]);
        if ( (float)(v61 - v55) > suspensionTravel )
        {
          v55 = v61 - suspensionTravel;
          v96 = v61 - suspensionTravel;
        }
        v62 = (float)((float)(cross.v[0] * v58[4]) + (float)(cross.v[1] * v58[5])) + (float)(cross.v[2] * v58[6]);
        if ( (float)(v62 - v55) > suspensionTravel )
        {
          v55 = v62 - suspensionTravel;
          v96 = v62 - suspensionTravel;
        }
        v63 = (float)((float)(cross.v[0] * v58[7]) + (float)(cross.v[1] * v58[8])) + (float)(cross.v[2] * v58[9]);
        if ( (float)(v63 - v55) > suspensionTravel )
        {
          v55 = v63 - suspensionTravel;
          v96 = v63 - suspensionTravel;
        }
        v58 += 12;
        --v59;
      }
      while ( v59 );
    }
    if ( v56 < v14 )
    {
      v64 = ServerDef->vehiclePhysicsDef.suspensionTravel;
      v65 = v14 - v56;
      v66 = &v119 + 3 * v56;
      do
      {
        v67 = (float)((float)(cross.v[0] * *(v66 - 2)) + (float)(cross.v[1] * *(v66 - 1))) + (float)(cross.v[2] * *v66);
        if ( (float)(v67 - v55) > v64 )
          v55 = v67 - v64;
        v66 += 3;
        --v65;
      }
      while ( v65 );
      v96 = v55;
    }
  }
  Vec3Cross(&cross, axis.m, &axis.m[1]);
  v68 = LODWORD(axis.m[1].v[0]);
  *(float *)&v68 = fsqrt((float)((float)(*(float *)&v68 * *(float *)&v68) + (float)(axis.m[1].v[1] * axis.m[1].v[1])) + (float)(axis.m[1].v[2] * axis.m[1].v[2]));
  _XMM3 = v68;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm14, xmm0
  }
  axis.m[1].v[0] = axis.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
  axis.m[1].v[2] = axis.m[1].v[2] * (float)(1.0 / *(float *)&_XMM0);
  axis.m[1].v[1] = axis.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
  Vec3Cross(&axis.m[1], &cross, axis.m);
  v72 = LODWORD(axis.m[0].v[0]);
  *(float *)&v72 = fsqrt((float)((float)(*(float *)&v72 * *(float *)&v72) + (float)(axis.m[0].v[1] * axis.m[0].v[1])) + (float)(axis.m[0].v[2] * axis.m[0].v[2]));
  _XMM3 = v72;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm14, xmm0
  }
  axis.m[0].v[0] = axis.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0);
  axis.m[0].v[2] = axis.m[0].v[2] * (float)(1.0 / *(float *)&_XMM0);
  axis.m[0].v[1] = axis.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  v76 = *(float *)&_XMM0;
  v77 = 1.0 / *(float *)&_XMM0;
  AxisToAngles((const tmat33_t<vec3_t> *)&axis, &angles);
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehUGVPitchTrack, "vehUGVPitchTrack");
  *(double *)&_XMM0 = DiffTrackAngle(angles.v[0], v10->prevAngles.v[0], *(float *)&_XMM0, v76);
  p_angles->v[0] = *(float *)&_XMM0;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehUGVRollTrack, "vehUGVRollTrack");
  *(double *)&_XMM0 = DiffTrackAngle(angles.v[2], v10->prevAngles.v[2], *(float *)&_XMM0, v76);
  v10->angles.v[2] = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_fclamp(p_angles->v[0], -60.0, 60.0);
  p_angles->v[0] = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_fclamp(v10->angles.v[2], -60.0, 60.0);
  v10->angles.v[2] = *(float *)&_XMM0;
  if ( v93->drivingState != VEH_DRIVE_PLAYER )
  {
    if ( COERCE_FLOAT(LODWORD(v54) & _xmm) <= 0.001 )
    {
      v78 = v10->origin.v[2];
    }
    else
    {
      v78 = (float)((float)((float)(v53 * v10->origin.v[0]) + (float)(v52 * v10->origin.v[1])) - v55) * (float)(-1.0 / v54);
      v10->origin.v[2] = v78;
    }
    if ( (LODWORD(v78) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 612, ASSERT_TYPE_SANITY, "( !IS_NAN( phys->origin[2] ) )", (const char *)&queryFormat, "!IS_NAN( phys->origin[2] )") )
      __debugbreak();
  }
  AnglesSubtract(&v10->angles, &v10->prevAngles, &v10->rotVel);
  v10->rotVel.v[0] = v77 * v10->rotVel.v[0];
  v10->rotVel.v[1] = v77 * v10->rotVel.v[1];
  v10->rotVel.v[2] = v77 * v10->rotVel.v[2];
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug") )
  {
    v79 = 0i64;
    v80 = 1;
    do
    {
      if ( !v80 )
      {
        LODWORD(v84) = 4;
        LODWORD(duration) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v84) )
          __debugbreak();
      }
      v102.v[v79] = *(float *)((char *)&v117 + v79 * 4);
      v102.v[v79 + 1] = *(float *)((char *)&v118 + v79 * 4);
      v102.v[v79 + 2] = *(float *)((char *)&v119 + v79 * 4);
      if ( (unsigned int)v7 >= 4 )
      {
        LODWORD(v84) = 4;
        LODWORD(duration) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v84) )
          __debugbreak();
        LODWORD(v85) = 4;
        LODWORD(durationa) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", durationa, v85) )
          __debugbreak();
      }
      v81 = (float)((float)((float)(v53 * v102.v[v79]) + (float)(v52 * v102.v[v79 + 1])) - v55) * (float)(-1.0 / v54);
      if ( (unsigned int)v7 >= 4 )
      {
        LODWORD(v84) = 4;
        LODWORD(duration) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v84) )
          __debugbreak();
      }
      v102.v[v79 + 2] = v81;
      v79 += 3i64;
      v80 = (unsigned int)++v7 < 4;
    }
    while ( v7 < 4 );
    v110 = (vec4_t)_xmm;
    G_DebugLine(&v102, &v103, &v110, 1);
    v111 = (vec4_t)_xmm;
    G_DebugLine(&v103, &v105, &v111, 1);
    v112 = (vec4_t)_xmm;
    G_DebugLine(&v105, &v104, &v112, 1);
    v113 = (vec4_t)_xmm;
    G_DebugLine(&v104, &v102, &v113, 1);
  }
}

/*
==============
G_VehicleUGV_GroundTrace
==============
*/
void G_VehicleUGV_GroundTrace(gentity_s *ent)
{
  __int128 v1; 
  Vehicle *vehicle; 
  int passEntityNum; 
  int contentmask; 
  const dvar_t *v6; 
  int v7; 
  Vehicle *v8; 
  float *i; 
  float v10; 
  int number; 
  int clipmask; 
  float v13; 
  int v14; 
  int v15; 
  vec4_t color; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 
  __int128 v20; 

  vehicle = ent->vehicle;
  passEntityNum = ent->s.number;
  contentmask = ent->clipmask;
  *(_QWORD *)start.v = *(_QWORD *)vehicle->phys.origin.v;
  start.v[2] = vehicle->phys.origin.v[2] + 12.0;
  *(_QWORD *)end.v = *(_QWORD *)vehicle->phys.origin.v;
  end.v[2] = vehicle->phys.origin.v[2] - 12.0;
  G_Main_TraceCapsule(&results, &start, &end, &vehicle->phys.bounds, passEntityNum, contentmask);
  v6 = DCONST_DVARINT_bg_vehicleDebug;
  v7 = 0;
  *(_QWORD *)&s_phys_ugv.hasGround = 0i64;
  s_phys_ugv.groundTrace = results;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer )
  {
    color = (vec4_t)_xmm;
    G_DebugLine(&start, &end, &color, 1);
  }
  if ( results.allsolid )
  {
    v8 = ent->vehicle;
    for ( i = &s_correctSolidDeltas_ugv[0].v[2]; ; i += 3 )
    {
      v10 = *(i - 1);
      number = ent->s.number;
      clipmask = ent->clipmask;
      color.v[0] = *(i - 2) + v8->phys.origin.v[0];
      color.v[1] = v10 + v8->phys.origin.v[1];
      color.v[2] = v8->phys.origin.v[2] + *i;
      G_Main_TraceCapsule(&results, (const vec3_t *)&color, (const vec3_t *)&color, &v8->phys.bounds, number, clipmask);
      if ( !results.startsolid )
        break;
      if ( (unsigned int)++v7 >= 0x1A )
        return;
    }
    v8->phys.origin.v[0] = color.v[0];
    v8->phys.origin.v[1] = color.v[1];
    v13 = v8->phys.origin.v[0];
    v8->phys.origin.v[2] = color.v[2];
    v14 = ent->s.number;
    v15 = ent->clipmask;
    color.v[0] = v13;
    color.v[1] = v8->phys.origin.v[1];
    color.v[2] = v8->phys.origin.v[2] - 1.0;
    v20 = v1;
    G_Main_TraceCapsule(&results, &v8->phys.origin, (const vec3_t *)&color, &v8->phys.bounds, v14, v15);
    s_phys_ugv.groundTrace = results;
    v8->phys.origin.v[0] = (float)((float)(color.v[0] - v8->phys.origin.v[0]) * *(float *)&v1) + v8->phys.origin.v[0];
    v8->phys.origin.v[1] = (float)((float)(color.v[1] - v8->phys.origin.v[1]) * *(float *)&v1) + v8->phys.origin.v[1];
    v8->phys.origin.v[2] = (float)((float)(color.v[2] - v8->phys.origin.v[2]) * *(float *)&v1) + v8->phys.origin.v[2];
  }
  if ( results.fraction != 1.0 && (vehicle->phys.vel.v[2] <= 0.0 || (float)((float)((float)(results.normal.v[1] * vehicle->phys.vel.v[1]) + (float)(results.normal.v[0] * vehicle->phys.vel.v[0])) + (float)(results.normal.v[2] * vehicle->phys.vel.v[2])) <= 10.0) )
  {
    s_phys_ugv.hasGround = 1;
    if ( results.normal.v[2] >= 0.69999999 )
      s_phys_ugv.onGround = 1;
  }
}

/*
==============
G_VehicleUGV_StepSlideMove
==============
*/
void G_VehicleUGV_StepSlideMove(gentity_s *ent, Bounds *bounds, int gravity, float frameTime)
{
  vehicle_physic_t *p_phys; 
  GStepSlideMove stepSlide; 

  stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
  p_phys = &ent->vehicle->phys;
  stepSlide.deltaTime = frameTime;
  stepSlide.origin = &p_phys->origin;
  stepSlide.velocity = &p_phys->vel;
  stepSlide.bounds = bounds;
  stepSlide.gravity = gravity != 0;
  stepSlide.hasGround = s_phys_ugv.hasGround != 0;
  stepSlide.zerog = 0;
  stepSlide.inSolid = NULL;
  stepSlide.groundNormal = &s_phys_ugv.groundTrace.normal;
  stepSlide.passEntities[0] = ent->s.number;
  stepSlide.passEntityCount = 1;
  stepSlide.clipMask = ent->clipmask;
  stepSlide.velocityClipType = VELOCITY_CLIP_VEHICLE_UGV;
  G_Vehicle_SlideMoveIgnoreLinkedChildren(ent, &stepSlide);
  BgStepSlideMove::StepSlideMove(&stepSlide);
  BgStepSlideMove::~BgStepSlideMove(&stepSlide);
}

/*
==============
G_VehicleUGV_UpdatePlayerMove
==============
*/
void G_VehicleUGV_UpdatePlayerMove(Vehicle *veh)
{
  gentity_s *ent; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  gentity_s *v7; 
  gclient_s *client; 
  float v9; 
  __m128 v10; 
  __m128 v11; 
  double v15; 
  GVehicles *v16; 
  float v17; 
  const VehicleDef *ServerDef; 
  gentity_s *v19; 
  const VehicleDef *v20; 
  unsigned __int16 v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  gentity_s *v25; 
  float v26; 
  __int128 v30; 
  gclient_s *v32; 
  __m128 v33; 
  __m128 v34; 
  float v35; 
  bool v39; 
  double v40; 
  float joltDecel; 
  Vehicle *vehicle; 
  double DeltaTime; 
  float v44; 
  float v45; 
  __int128 v46; 
  __int128 v47; 
  float v50; 
  float v51; 
  __int128 v52; 
  float v53; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  vec3_t *v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  __int128 v74; 
  int v78; 
  float *v79; 
  __int64 b; 
  __int64 v81; 
  float v82; 
  vec3_t moveInput; 
  Bounds bounds; 
  vec3_t targetVelocity; 
  vec3_t outTargetVelocity; 
  tmat43_t<vec3_t> axis; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 642, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 657, ASSERT_TYPE_ASSERT, "(veh->ent)", (const char *)&queryFormat, "veh->ent") )
      __debugbreak();
    ent = veh->ent;
    number = veh->ent->r.ownerNum.number;
    if ( !number )
      goto LABEL_96;
    v4 = number;
    v5 = number - 1;
    if ( v5 >= 0x800 )
    {
      LODWORD(b) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", b, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v6 = v4 - 1;
    if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v6] )
    {
      LODWORD(v81) = ent->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v81) )
        __debugbreak();
    }
    if ( !ent->r.ownerNum.number )
    {
LABEL_96:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 658, ASSERT_TYPE_ASSERT, "(veh->ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "veh->ent->r.ownerNum.isDefined()") )
        __debugbreak();
    }
    v7 = EntHandle::ent(&veh->ent->r.ownerNum);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 661, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
      __debugbreak();
    if ( !v7->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 662, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
      __debugbreak();
    client = v7->client;
    v9 = _mm_cvtepi32_ps((__m128i)(unsigned int)client->sess.cmd.forwardmove).m128_f32[0];
    v10 = _mm_cvtepi32_ps((__m128i)(unsigned int)client->sess.cmd.rightmove);
    v11 = v10;
    v11.m128_f32[0] = fsqrt((float)((float)(v10.m128_f32[0] * v10.m128_f32[0]) + (float)(v9 * v9)) * 0.000062000123);
    _XMM0 = v11;
    __asm
    {
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm1, xmm0, xmm2, xmm1
    }
    moveInput.v[1] = (float)(v9 * 0.0078740157) * (float)(1.0 / *(float *)&_XMM1);
    moveInput.v[0] = (float)(v10.m128_f32[0] * 0.0078740157) * (float)(1.0 / *(float *)&_XMM1);
    moveInput.v[2] = 0.0;
    v15 = I_fclamp(v11.m128_f32[0], 0.0, 1.0);
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    v16 = GVehicles::ms_gVehiclesSystem;
    if ( *(float *)&v15 > 0.0 )
    {
      G_VehicleUGV_CalcTargetVelocity(veh, &moveInput, *(float *)&v15, COERCE_DOUBLE((unsigned __int64)LODWORD(veh->ent->vehicle->topSpeedForward)), &outTargetVelocity);
      GVehicles::PhysicsSetLinearVelocity(v16, veh->physicsVehicle, &outTargetVelocity);
    }
    GVehicles::PhysicsSetInputControl(v16, veh->physicsVehicle, 2u, 0.0);
    GVehicles::PhysicsSetInputControl(v16, veh->physicsVehicle, 1u, 0.0);
    GVehicles::PhysicsSetInputControl(v16, veh->physicsVehicle, 0, *(float *)&v15);
    return;
  }
  v17 = 0.0;
  ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
  v19 = veh->ent;
  v20 = ServerDef;
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 711, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v21 = v19->r.ownerNum.number;
  if ( !v21 )
    goto LABEL_97;
  v22 = v21;
  v23 = v21 - 1;
  if ( v23 >= 0x800 )
  {
    LODWORD(b) = v23;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", b, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v24 = v22 - 1;
  if ( g_entities[v24].r.isInUse != g_entityIsInUse[v24] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v24] )
  {
    LODWORD(v81) = v19->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v81) )
      __debugbreak();
  }
  if ( !v19->r.ownerNum.number )
  {
LABEL_97:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 712, ASSERT_TYPE_ASSERT, "(ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v25 = EntHandle::ent(&v19->r.ownerNum);
  if ( !v25->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 715, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  bounds = v19->r.box;
  if ( _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 840, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
    __debugbreak();
  if ( bounds.halfSize.v[1] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 841, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
    __debugbreak();
  v26 = bounds.halfSize.v[2];
  if ( bounds.halfSize.v[2] < 0.0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 842, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
      __debugbreak();
    v26 = bounds.halfSize.v[2];
  }
  _XMM0 = LODWORD(bounds.halfSize.v[1]);
  __asm { vmaxss  xmm3, xmm0, dword ptr [rsp+160h+bounds.halfSize] }
  v30 = _XMM3;
  *(float *)&v30 = *(float *)&_XMM3 - v26;
  _XMM1 = v30;
  __asm { vmaxss  xmm2, xmm1, xmm13 }
  bounds.midPoint.v[2] = *(float *)&_XMM2 + bounds.midPoint.v[2];
  bounds.halfSize.v[2] = v26 + *(float *)&_XMM2;
  bounds.halfSize.v[0] = *(float *)&_XMM3;
  bounds.halfSize.v[1] = *(float *)&_XMM3;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v25->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v25->client->ps.pm_flags, ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v25->client->ps.pm_flags, ACTIVE, 0xFu) )
  {
    v32 = v25->client;
    v33 = _mm_cvtepi32_ps((__m128i)(unsigned int)v32->sess.cmd.rightmove);
    v34 = v33;
    v35 = _mm_cvtepi32_ps((__m128i)(unsigned int)v32->sess.cmd.forwardmove).m128_f32[0];
    v34.m128_f32[0] = fsqrt((float)((float)(v33.m128_f32[0] * v33.m128_f32[0]) + (float)(v35 * v35)) * 0.000062000123);
    _XMM0 = v34;
    __asm
    {
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm1, xmm0, xmm14, xmm1
    }
    moveInput.v[1] = (float)(v35 * 0.0078740157) * (float)(1.0 / *(float *)&_XMM1);
    moveInput.v[0] = (float)(v33.m128_f32[0] * 0.0078740157) * (float)(1.0 / *(float *)&_XMM1);
    moveInput.v[2] = 0.0;
    *(double *)_XMM0.m128_u64 = I_fclamp(v34.m128_f32[0], 0.0, 1.0);
    v17 = _XMM0.m128_f32[0];
  }
  v39 = veh->joltTime > 0.0;
  targetVelocity.v[0] = 0.0;
  targetVelocity.v[1] = 0.0;
  targetVelocity.v[2] = 0.0;
  if ( v39 )
  {
    *(_QWORD *)&v40 = LODWORD(veh->joltSpeed);
    joltDecel = veh->joltDecel;
  }
  else
  {
    vehicle = v19->vehicle;
    if ( moveInput.v[1] < 0.0 )
      *(_QWORD *)&v40 = LODWORD(vehicle->topSpeedReverse);
    else
      *(_QWORD *)&v40 = LODWORD(vehicle->topSpeedForward);
    joltDecel = v20->accel;
  }
  if ( v17 > 0.0 )
    G_VehicleUGV_CalcTargetVelocity(veh, &moveInput, v17, v40, &targetVelocity);
  G_VehicleUGV_CalcRotAccel(v19, &targetVelocity, &outTargetVelocity);
  DeltaTime = G_Vehicle_GetDeltaTime();
  v44 = *(float *)&DeltaTime * outTargetVelocity.v[1];
  veh->phys.rotVel.v[0] = (float)(*(float *)&DeltaTime * outTargetVelocity.v[0]) + veh->phys.rotVel.v[0];
  v45 = v44 + veh->phys.rotVel.v[1];
  veh->phys.rotVel.v[1] = v45;
  v82 = *(float *)&DeltaTime;
  v47 = LODWORD(FLOAT_1_0);
  *(float *)&v47 = 1.0 / *(float *)&DeltaTime;
  v46 = v47;
  veh->phys.rotVel.v[2] = (float)(*(float *)&DeltaTime * outTargetVelocity.v[2]) + veh->phys.rotVel.v[2];
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm3, 1 }
  veh->phys.angles.v[1] = (float)((float)((float)((float)(*(float *)&DeltaTime * v45) + veh->phys.prevAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  veh->phys.angles.v[0] = 0.0;
  veh->phys.angles.v[2] = 0.0;
  AnglesToAxis(&veh->phys.angles, (tmat33_t<vec3_t> *)&axis);
  *(float *)&v47 = targetVelocity.v[0] - veh->phys.vel.v[0];
  *(float *)&_XMM1 = targetVelocity.v[1];
  v50 = targetVelocity.v[2];
  veh->phys.accel.v[0] = *(float *)&v47;
  veh->phys.accel.v[1] = *(float *)&_XMM1 - veh->phys.vel.v[1];
  veh->phys.accel.v[2] = v50 - veh->phys.vel.v[2];
  v51 = *(float *)&v47 * *(float *)&v46;
  veh->phys.accel.v[0] = *(float *)&v47 * *(float *)&v46;
  v52 = v46;
  *(float *)&v52 = *(float *)&v46 * veh->phys.accel.v[1];
  veh->phys.accel.v[1] = *(float *)&v52;
  v53 = *(float *)&v46 * veh->phys.accel.v[2];
  veh->phys.accel.v[2] = v53;
  *(float *)&v52 = fsqrt((float)((float)(*(float *)&v52 * *(float *)&v52) + (float)(v51 * v51)) + (float)(v53 * v53));
  _XMM0 = v52;
  __asm
  {
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm1, xmm0, xmm14, xmm1
  }
  veh->phys.accel.v[0] = (float)(1.0 / *(float *)&_XMM1) * v51;
  veh->phys.accel.v[1] = (float)(1.0 / *(float *)&_XMM1) * veh->phys.accel.v[1];
  veh->phys.accel.v[2] = (float)(1.0 / *(float *)&_XMM1) * veh->phys.accel.v[2];
  axis.m[3].v[0] = 0.0;
  axis.m[3].v[1] = 0.0;
  axis.m[3].v[2] = 0.0;
  *(double *)&_XMM0 = I_fclamp(*(float *)&v52, COERCE_FLOAT(LODWORD(joltDecel) ^ _xmm), joltDecel);
  v57 = *(float *)&_XMM0 * veh->phys.accel.v[0];
  veh->phys.accel.v[0] = v57;
  *(float *)&_XMM1 = *(float *)&_XMM0 * veh->phys.accel.v[1];
  veh->phys.accel.v[1] = *(float *)&_XMM1;
  v58 = *(float *)&_XMM0 * veh->phys.accel.v[2];
  *(float *)&_XMM0 = (float)((float)(*(float *)&_XMM1 * axis.m[0].v[1]) + (float)(v57 * axis.m[0].v[0])) + (float)(v58 * axis.m[0].v[2]);
  veh->phys.accel.v[2] = v58;
  v59 = axis.m[1].v[1];
  v60 = axis.m[1].v[0];
  v61 = axis.m[1].v[2];
  *(float *)&v46 = axis.m[2].v[1];
  v62 = axis.m[2].v[0];
  v63 = axis.m[2].v[2];
  veh->phys.bodyAccel.v[0] = *(float *)&_XMM0;
  veh->phys.bodyAccel.v[1] = (float)((float)(v59 * veh->phys.accel.v[1]) + (float)(v60 * veh->phys.accel.v[0])) + (float)(v61 * veh->phys.accel.v[2]);
  veh->phys.bodyAccel.v[2] = (float)((float)(*(float *)&v46 * veh->phys.accel.v[1]) + (float)(v62 * veh->phys.accel.v[0])) + (float)(v63 * veh->phys.accel.v[2]);
  v64 = (float)(v82 * veh->phys.accel.v[0]) + veh->phys.vel.v[0];
  veh->phys.vel.v[0] = v64;
  *(float *)&_XMM1 = (float)(v82 * veh->phys.accel.v[1]) + veh->phys.vel.v[1];
  veh->phys.vel.v[1] = *(float *)&_XMM1;
  *(float *)&v52 = (float)(v82 * veh->phys.accel.v[2]) + veh->phys.vel.v[2];
  v65 = (float)(*(float *)&_XMM1 * axis.m[0].v[1]) + (float)(v64 * axis.m[0].v[0]);
  *(float *)&_XMM1 = *(float *)&v52 * axis.m[0].v[2];
  veh->phys.vel.v[2] = *(float *)&v52;
  veh->phys.bodyVel.v[0] = v65 + *(float *)&_XMM1;
  veh->phys.bodyVel.v[1] = (float)((float)(v59 * veh->phys.vel.v[1]) + (float)(v60 * veh->phys.vel.v[0])) + (float)(v61 * veh->phys.vel.v[2]);
  veh->phys.bodyVel.v[2] = (float)((float)(*(float *)&v46 * veh->phys.vel.v[1]) + (float)(v62 * veh->phys.vel.v[0])) + (float)(v63 * veh->phys.vel.v[2]);
  if ( 0.0 != veh->phys.vel.v[0] || 0.0 != veh->phys.vel.v[1] || 0.0 != veh->phys.vel.v[2] )
  {
    G_VehicleUGV_GroundTrace(v19);
    v66 = (vec3_t *)v19->vehicle;
    if ( s_phys_ugv.onGround )
    {
      v67 = v66[26].v[1];
      v68 = v66[26].v[0];
      v69 = v66[26].v[2];
      v70 = fsqrt((float)((float)(v68 * v68) + (float)(v67 * v67)) + (float)(v69 * v69));
      G_VehicleUGV_ClipVelocity(v66 + 26, &s_phys_ugv.groundTrace.normal, v66 + 26);
      v71 = v66[26].v[1];
      v72 = v66[26].v[0];
      v73 = v66[26].v[2];
      if ( (float)((float)((float)(v72 * v68) + (float)(v71 * v67)) + (float)(v73 * v69)) > 0.0 )
      {
        v74 = LODWORD(v66[26].v[0]);
        *(float *)&v74 = fsqrt((float)((float)(v72 * v72) + (float)(v71 * v71)) + (float)(v73 * v73));
        _XMM3 = v74;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm14, xmm0
        }
        v66[26].v[0] = (float)(1.0 / *(float *)&_XMM0) * v72;
        v66[26].v[1] = (float)(1.0 / *(float *)&_XMM0) * v71;
        v66[26].v[2] = (float)(1.0 / *(float *)&_XMM0) * v73;
        v66[26].v[0] = v70 * v66[26].v[0];
        v66[26].v[1] = v70 * v66[26].v[1];
        v66[26].v[2] = v70 * v66[26].v[2];
        v72 = v66[26].v[0];
      }
      if ( v72 == 0.0 && v66[26].v[1] == 0.0 )
        goto LABEL_92;
      v78 = 0;
    }
    else
    {
      if ( s_phys_ugv.hasGround )
        G_VehicleUGV_ClipVelocity(v66 + 26, &s_phys_ugv.groundTrace.normal, v66 + 26);
      v78 = 1;
    }
    G_VehicleUGV_StepSlideMove(v19, &bounds, v78, v82);
  }
LABEL_92:
  G_VehicleUGV_GroundPlant(v19, &veh->phys, 1);
  MatrixTransposeTransformVector43(&veh->phys.vel, &axis, &veh->phys.bodyVel);
  veh->speed = COERCE_FLOAT(LODWORD(veh->phys.bodyVel.v[0]) & _xmm);
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug") )
  {
    v79 = (float *)vec3_t::operator[](&bounds.halfSize, 2);
    G_Vehicle_DebugCapsule(&veh->phys.origin, bounds.halfSize.v[0], *v79 * 2.0, 1.0, 1.0, 0.0);
  }
}

