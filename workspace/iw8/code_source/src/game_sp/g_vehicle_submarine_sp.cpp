/*
==============
G_VehicleSubmarine_ClipVelocity
==============
*/

void __fastcall G_VehicleSubmarine_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  ?G_VehicleSubmarine_ClipVelocity@@YAXAEBTvec3_t@@0AEAT1@@Z(in, normal, out);
}

/*
==============
G_VehicleSubmarine_UpdatePlayerMove
==============
*/

void __fastcall G_VehicleSubmarine_UpdatePlayerMove(Vehicle *veh)
{
  ?G_VehicleSubmarine_UpdatePlayerMove@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_VehicleSubmarine_CalcAccel
==============
*/
void G_VehicleSubmarine_CalcAccel(gentity_s *ent, char *move, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  unsigned __int16 number; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  Vehicle *vehicle; 
  char v13; 
  float v14; 
  float v15; 
  GVehicles *v16; 
  const dvar_t *v17; 
  const char *v18; 
  float v19; 
  const dvar_t *v20; 
  const char *v21; 
  float v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  const char *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  float v31; 
  float v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  float value; 
  unsigned __int128 v38; 
  const dvar_t *v39; 
  unsigned __int128 v40; 
  const dvar_t *v43; 
  int v44; 
  const dvar_t *v45; 
  ClActiveClient *Client; 
  float v47; 
  float v48; 
  __int64 v49; 
  int v50[3]; 
  __int64 v51; 
  vec3_t v52; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 

  v51 = -2i64;
  number = ent->r.ownerNum.number;
  if ( !number )
    goto LABEL_113;
  v9 = number;
  v10 = number - 1;
  if ( v10 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v11 = v9 - 1;
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] )
  {
    LODWORD(v49) = ent->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v49) )
      __debugbreak();
  }
  if ( !ent->r.ownerNum.number )
  {
LABEL_113:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 52, ASSERT_TYPE_ASSERT, "(ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  vehicle = ent->vehicle;
  v13 = move[2];
  if ( v13 < 0 )
    v14 = 0.0;
  else
    v14 = (float)v13 * 0.0078740157;
  if ( v13 > 0 )
    v15 = 0.0;
  else
    v15 = (float)-v13 * 0.0078740157;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v16 = GVehicles::ms_gVehiclesSystem;
  GVehicles::PhysicsSetInputControl(GVehicles::ms_gVehiclesSystem, vehicle->physicsVehicle, 0, v14);
  GVehicles::PhysicsSetInputControl(v16, vehicle->physicsVehicle, 1u, v15);
  angles = vehicle->phys.prevAngles;
  AngleVectors(&angles, &forward, &right, &up);
  if ( move[2] <= 0 )
  {
    v17 = DVARFLT_vehSubmarineMaxReverseAccel;
    if ( DVARFLT_vehSubmarineMaxReverseAccel )
      goto LABEL_33;
    v18 = "vehSubmarineMaxReverseAccel";
  }
  else
  {
    v17 = DVARFLT_vehSubmarineMaxForwardAccel;
    if ( DVARFLT_vehSubmarineMaxForwardAccel )
      goto LABEL_33;
    v18 = "vehSubmarineMaxForwardAccel";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v18) )
    __debugbreak();
LABEL_33:
  Dvar_CheckFrontendServerThread(v17);
  v19 = (float)((float)move[2] * 0.0078740157) * v17->current.value;
  if ( move[3] <= 0 )
  {
    v20 = DVARFLT_vehSubmarineMaxNegativeBuoyancy;
    if ( DVARFLT_vehSubmarineMaxNegativeBuoyancy )
      goto LABEL_40;
    v21 = "vehSubmarineMaxNegativeBuoyancy";
  }
  else
  {
    v20 = DVARFLT_vehSubmarineMaxPositiveBuoyancy;
    if ( DVARFLT_vehSubmarineMaxPositiveBuoyancy )
      goto LABEL_40;
    v21 = "vehSubmarineMaxPositiveBuoyancy";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v21) )
    __debugbreak();
LABEL_40:
  Dvar_CheckFrontendServerThread(v20);
  v22 = (float)((float)move[3] * 0.0078740157) * v20->current.value;
  outBodyAccel->v[0] = (float)(v22 * forward.v[2]) + v19;
  outBodyAccel->v[1] = v22 * right.v[2];
  outBodyAccel->v[2] = v22 * up.v[2];
  v23 = DVARFLT_vehSubmarineStoppedVel;
  if ( !DVARFLT_vehSubmarineStoppedVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineStoppedVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.value >= vehicle->phys.bodyVel.v[0] )
  {
    v28 = DVARFLT_vehSubmarineStoppedVel;
    if ( !DVARFLT_vehSubmarineStoppedVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineStoppedVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( COERCE_FLOAT(v28->current.integer ^ _xmm) <= vehicle->phys.bodyVel.v[0] )
    {
      v30 = DVARFLT_vehSubmarineMaxStoppedPitchAccel;
      if ( !DVARFLT_vehSubmarineMaxStoppedPitchAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxStoppedPitchAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      v25 = (float)((float)*move * 0.0078740157) * v30->current.value;
      v26 = DVARFLT_vehSubmarineMaxStoppedYawAccel;
      if ( DVARFLT_vehSubmarineMaxStoppedYawAccel )
        goto LABEL_65;
      v27 = "vehSubmarineMaxStoppedYawAccel";
    }
    else
    {
      v29 = DVARFLT_vehSubmarineMaxReversePitchAccel;
      if ( !DVARFLT_vehSubmarineMaxReversePitchAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxReversePitchAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      v25 = (float)((float)*move * 0.0078740157) * v29->current.value;
      v26 = DVARFLT_vehSubmarineMaxReverseYawAccel;
      if ( DVARFLT_vehSubmarineMaxReverseYawAccel )
        goto LABEL_65;
      v27 = "vehSubmarineMaxReverseYawAccel";
    }
LABEL_63:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v27) )
      __debugbreak();
    goto LABEL_65;
  }
  v24 = DVARFLT_vehSubmarineMaxForwardPitchAccel;
  if ( !DVARFLT_vehSubmarineMaxForwardPitchAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxForwardPitchAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = (float)((float)*move * 0.0078740157) * v24->current.value;
  v26 = DVARFLT_vehSubmarineMaxForwardYawAccel;
  if ( !DVARFLT_vehSubmarineMaxForwardYawAccel )
  {
    v27 = "vehSubmarineMaxForwardYawAccel";
    goto LABEL_63;
  }
LABEL_65:
  Dvar_CheckFrontendServerThread(v26);
  v31 = (float)((float)move[1] * -0.0078740157) * v26->current.value;
  v32 = 0.0;
  v33 = DVARFLT_vehSubmarineStoppedVel;
  if ( !DVARFLT_vehSubmarineStoppedVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineStoppedVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( v33->current.value < vehicle->phys.bodyVel.v[0] )
  {
    v34 = DVARFLT_vehSubmarineMaxRollAccel;
    if ( !DVARFLT_vehSubmarineMaxRollAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRollAccel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v32 = (float)((float)move[1] * 0.0078740157) * v34->current.value;
  }
  v35 = DVARFLT_vehSubmarineRollDrivenYaw;
  if ( !DVARFLT_vehSubmarineRollDrivenYaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineRollDrivenYaw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.value > 0.0 )
  {
    v36 = DVARFLT_vehSubmarineMaxRoll;
    if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    value = v36->current.value;
    v38 = LODWORD(vehicle->phys.angles.v[2]) & (unsigned __int128)_xmm;
    v39 = DVARFLT_vehSubmarineRollDrivenYaw;
    if ( !DVARFLT_vehSubmarineRollDrivenYaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineRollDrivenYaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = v38;
    *(float *)&v40 = (float)(*(float *)&v38 * v39->current.value) / value;
    _XMM2 = v40;
    __asm { vminss  xmm3, xmm2, cs:__real@3f800000 }
    v31 = v31 * *(float *)&_XMM3;
  }
  v43 = DVARINT_vehSubmarineBodyRelRotation;
  if ( !DVARINT_vehSubmarineBodyRelRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineBodyRelRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  v44 = v43->current.integer & 3;
  if ( v44 )
  {
    v52.v[1] = 0.0;
    v52.v[0] = 0.0;
    v52.v[2] = vehicle->phys.angles.v[2];
    v45 = DVARINT_vehSubmarineBodyRelRotation;
    if ( !DVARINT_vehSubmarineBodyRelRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineBodyRelRotation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    if ( (v45->current.integer & 4) != 0 )
    {
      Client = ClActiveClient::GetClient(LOCAL_CLIENT_0);
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 264, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
        __debugbreak();
      LODWORD(v52.v[2]) = ((Client->clviewangles_aab ^ ((_DWORD)Client + 436)) * ((Client->clviewangles_aab ^ ((_DWORD)Client + 436)) + 2)) ^ LODWORD(Client->clViewangles.clViewangles.v[2]);
      memset(v50, 0, sizeof(v50));
    }
    AnglesToAxis(&v52, &axis);
    if ( v44 == 1 )
    {
      v47 = (float)(v31 * axis.m[1].v[1]) - (float)(v25 * axis.m[2].v[1]);
      v25 = (float)(v25 * axis.m[2].v[2]) - (float)(v31 * axis.m[1].v[2]);
      v31 = v47;
    }
    else
    {
      v48 = v25 * axis.m[2].v[1];
      v25 = axis.m[2].v[2] * v25;
      if ( v44 == 2 )
        LODWORD(v31) = LODWORD(v48) ^ _xmm;
      else
        v31 = v31 - v48;
    }
  }
  outRotAccel->v[1] = v31;
  outRotAccel->v[0] = v25;
  outRotAccel->v[2] = v32;
  if ( ((LODWORD(outBodyAccel->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outBodyAccel->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outBodyAccel->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 175, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] )") )
    __debugbreak();
  if ( ((LODWORD(outRotAccel->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outRotAccel->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outRotAccel->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 176, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] )") )
    __debugbreak();
}

/*
==============
G_VehicleSubmarine_CalcCollisionAccel
==============
*/
void G_VehicleSubmarine_CalcCollisionAccel(gentity_s *ent, Bounds *bounds, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  const dvar_t *v4; 
  Bounds *v7; 
  float v10; 
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  EntHandle *p_ownerNum; 
  unsigned __int16 number; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  __int16 *v22; 
  float v23; 
  float *v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  int v34; 
  int v35; 
  const Bounds *v36; 
  char *p_y; 
  float *v38; 
  char *v39; 
  __int64 v40; 
  float v41; 
  int v42; 
  vec3_t *v43; 
  int v44; 
  float v45; 
  float v46; 
  const dvar_t *v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  vec3_t *v56; 
  const vec4_t *v57; 
  float v58; 
  float v59; 
  __int128 v60; 
  __int128 v61; 
  float v62; 
  float v63; 
  char v66; 
  float v67; 
  float *v68; 
  float v69; 
  const dvar_t *v70; 
  const dvar_t *v71; 
  float v72; 
  __int64 v73; 
  float v74; 
  int v75; 
  int v76; 
  float v77; 
  vec3_t *v78; 
  int v79; 
  bool v80; 
  float v81; 
  __int128 v83; 
  float *v84; 
  float v86; 
  float v87; 
  float v88; 
  __int128 v89; 
  float v90; 
  float v91; 
  int v95; 
  float *v96; 
  __int64 v97; 
  float v98; 
  float *v99; 
  int v100; 
  bool v101; 
  float v102; 
  _DWORD *v103; 
  char *v104; 
  bool v105; 
  float *v106; 
  float v107; 
  const dvar_t *v108; 
  float v109; 
  float v110; 
  float v111; 
  int v112; 
  int v113; 
  float v114; 
  float v115; 
  __int64 contentmask; 
  __int64 contentmaska; 
  __int64 contentmaskb; 
  __int64 v119; 
  __int64 v120; 
  int v122; 
  float v123; 
  float v124; 
  float v125; 
  int v126; 
  float v127; 
  float v128; 
  float v129; 
  vec3_t *in1; 
  vec3_t v131; 
  vec3_t v132; 
  vec3_t up; 
  vec3_t right; 
  vec3_t forward; 
  vec3_t v136; 
  vec3_t v137; 
  vec3_t v138; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t v142; 
  vec3_t v143; 
  vec3_t v144; 
  vec3_t v145; 
  int v146[4]; 
  vec3_t out; 
  int v148[4]; 
  vec3_t v149; 
  tmat43_t<vec3_t> v150; 
  __int128 v151; 
  float v152; 
  float v153; 
  int v154[21]; 
  char v155; 
  char v156; 

  v4 = DVARFLT_vehSubmarineSideCollMaxAngAccel;
  *(_QWORD *)v136.v = outRotAccel;
  *(_QWORD *)v137.v = ent;
  v7 = bounds;
  __asm { vbroadcastss xmm6, dword ptr [rdx+0Ch] }
  if ( !DVARFLT_vehSubmarineSideCollMaxAngAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineSideCollMaxAngAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v10 = 0.2 * v4->current.value;
  v11 = DVARFLT_vehSubmarineSideCollMaxAccel;
  v123 = v10;
  if ( !DVARFLT_vehSubmarineSideCollMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineSideCollMaxAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  v13 = DVARFLT_vehSubmarineFwdCollMaxAngAccel;
  v124 = value;
  if ( !DVARFLT_vehSubmarineFwdCollMaxAngAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineFwdCollMaxAngAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = 0.2 * v13->current.value;
  v15 = DVARFLT_vehSubmarineFwdCollMaxAccel;
  v125 = v14;
  if ( !DVARFLT_vehSubmarineFwdCollMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineFwdCollMaxAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value * 0.1;
  p_ownerNum = &ent->r.ownerNum;
  number = ent->r.ownerNum.number;
  v152 = *(float *)&_XMM6 * 2.0;
  v151 = _XMM6;
  if ( !number )
    goto LABEL_120;
  v19 = number;
  v20 = number - 1;
  if ( v20 >= 0x800 )
  {
    LODWORD(v119) = 2048;
    LODWORD(contentmask) = v20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v119) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v21 = v19 - 1;
  if ( g_entities[v21].r.isInUse != g_entityIsInUse[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v21] )
  {
    LODWORD(v119) = p_ownerNum->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v119) )
      __debugbreak();
  }
  if ( !p_ownerNum->number )
  {
LABEL_120:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 219, ASSERT_TYPE_ASSERT, "(ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  if ( !EntHandle::ent(p_ownerNum)->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 221, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  v22 = *(__int16 **)v137.v;
  v23 = outBodyAccel->v[1];
  v127 = outRotAccel->v[0];
  v148[0] = LODWORD(outRotAccel->v[0]);
  v24 = *(float **)(*(_QWORD *)v137.v + 352i64);
  v126 = LODWORD(outRotAccel->v[1]);
  v148[1] = v126;
  v25 = outRotAccel->v[2];
  v24 += 60;
  *(_QWORD *)v138.v = &outBodyAccel->y;
  *(float *)&v148[2] = v25;
  v129 = outBodyAccel->v[2];
  angles.v[0] = v24[9];
  v128 = v23;
  angles.v[1] = v24[10];
  v26 = v24[11];
  *(_QWORD *)v131.v = v24;
  angles.v[2] = v26;
  AngleVectors(&angles, &forward, &right, &up);
  v27 = v7->midPoint.v[0];
  v28 = v7->midPoint.v[2];
  *(float *)&v154[2] = up.v[0] * -1.0;
  *(float *)&v154[3] = up.v[1] * -1.0;
  v154[5] = SLODWORD(right.v[0]);
  *(float *)&v154[4] = up.v[2] * -1.0;
  *(float *)&v154[8] = right.v[0] * -1.0;
  v29 = v24[2];
  *(float *)&v154[9] = right.v[1] * -1.0;
  *(float *)&v154[10] = right.v[2] * -1.0;
  v154[6] = SLODWORD(right.v[1]);
  v30 = (float)(forward.v[0] * v27) + *v24;
  v154[11] = SLODWORD(forward.v[0]);
  v154[7] = SLODWORD(right.v[2]);
  v31 = v30 + (float)(up.v[0] * v28);
  v32 = (float)((float)(forward.v[1] * v27) + v24[1]) + (float)(up.v[1] * v28);
  v33 = (float)((float)(forward.v[2] * v27) + v29) + (float)(up.v[2] * v28);
  v34 = 0;
  start.v[2] = v33;
  v153 = up.v[0];
  v154[0] = SLODWORD(up.v[1]);
  v154[1] = SLODWORD(up.v[2]);
  v154[12] = SLODWORD(forward.v[1]);
  v154[13] = SLODWORD(forward.v[2]);
  start.v[0] = v31;
  start.v[1] = v32;
  v35 = 0;
  v36 = (const Bounds *)(v24 + 12);
  v122 = 0;
  p_y = &v155;
  *(_QWORD *)v132.v = v24 + 12;
  in1 = (vec3_t *)&v155;
  v38 = (float *)v154;
  v39 = &v156;
  v40 = 0i64;
  while ( 1 )
  {
    v41 = *(float *)((char *)&v151 + v40 * 4) * 1.75;
    v42 = *v22;
    v43 = (vec3_t *)(v38 - 1);
    v44 = *((_DWORD *)v22 + 106);
    v45 = v41 * *v38;
    end.v[0] = (float)(v41 * *(v38 - 1)) + v31;
    v46 = v41 * v38[1];
    end.v[1] = v45 + v32;
    end.v[2] = v46 + v33;
    G_Main_TraceCapsule((trace_t *)(p_y - 16), &start, &end, v36, v42, v44);
    v47 = DCONST_DVARINT_bg_vehicleDebug;
    if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.integer )
    {
      if ( bUseOrigin )
      {
        v48 = 0.0;
        v49 = 0.0;
        v50 = 0.0;
      }
      else
      {
        v48 = (float)(60.0 * forward.v[0]) + (float)(36.0 * up.v[0]);
        v49 = (float)(60.0 * forward.v[1]) + (float)(36.0 * up.v[1]);
        v50 = (float)(60.0 * forward.v[2]) + (float)(36.0 * up.v[2]);
      }
      v51 = v48 + start.v[0];
      v52 = v49 + start.v[1];
      v53 = *((float *)v39 - 6);
      v54 = v48 + end.v[0];
      v55 = v49 + end.v[1];
      v144.v[0] = v54;
      v144.v[1] = v55;
      v145.v[0] = v51;
      v145.v[1] = v52;
      v145.v[2] = v50 + start.v[2];
      v144.v[2] = v50 + end.v[2];
      v56 = &v145;
      if ( v53 >= 1.0 )
      {
        v57 = &colorGreen;
      }
      else
      {
        v143.v[0] = (float)((float)(v54 - v51) * v53) + v51;
        v143.v[1] = (float)((float)(v55 - v52) * v53) + v52;
        v143.v[2] = (float)((float)((float)(v50 + end.v[2]) - (float)(v50 + start.v[2])) * v53) + (float)(v50 + start.v[2]);
        G_DebugLine(&v145, &v143, &colorBlue, 1);
        v57 = &colorRed;
        v56 = &v143;
      }
      G_DebugLine(v56, &v144, v57, 1);
    }
    v58 = *((float *)v39 - 6);
    if ( v58 >= 1.0 )
      goto LABEL_63;
    if ( v35 < 4 )
    {
      v59 = *((float *)v39 - 1);
      v60 = *((unsigned int *)v39 - 2);
      v61 = v60;
      v62 = 1.0 - v58;
      v63 = v41 * v58;
      *(float *)&v61 = (float)((float)((float)(*(float *)&v60 * v43->v[0]) + (float)(v59 * *v38)) + (float)(*(float *)v39 * v38[1])) + 1.0;
      _XMM0 = v61;
      __asm { vmaxss  xmm8, xmm0, xmm11 }
      if ( (float)((float)((float)(*(float *)&v60 * forward.v[0]) + (float)(v59 * forward.v[1])) + (float)(*(float *)v39 * forward.v[2])) <= 0.0 )
      {
        v66 = v39[41];
        v67 = traceIdx2RotSign[v40];
        v68 = vec3_t::operator[](*(vec3_t **)v136.v, traceIdx2RotAxis[v40]);
        if ( v66 )
          v69 = (float)(v67 * 0.0099999998) * v123;
        else
          v69 = (float)((float)(v62 * *(float *)&_XMM8) * v67) * v123;
        *v68 = v69;
      }
      v70 = DVARFLT_vehSubmarineSideProbeMinDist;
      if ( !DVARFLT_vehSubmarineSideProbeMinDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineSideProbeMinDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v70);
      if ( v63 >= v70->current.value )
      {
        v72 = (float)(*(float *)&_XMM8 + 0.1) * v62;
      }
      else
      {
        v71 = DVARFLT_vehSubmarineSideProbeMinDist;
        if ( !DVARFLT_vehSubmarineSideProbeMinDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineSideProbeMinDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v71);
        v72 = 1.0 - (float)(v63 / v71->current.value);
      }
      v73 = traceIdx2BodyAxis[v40];
      v74 = (float)(v72 * traceIdx2AccelSign[v40]) * v124;
      if ( (unsigned int)v73 >= 3 )
      {
        LODWORD(v119) = 3;
        LODWORD(contentmaska) = traceIdx2BodyAxis[v40];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
          __debugbreak();
      }
      outBodyAccel->v[v73] = v74 + outBodyAccel->v[v73];
LABEL_63:
      v75 = _xmm;
      goto LABEL_64;
    }
    AngleVectors(&angles, v150.m, &v150.m[1], &v150.m[2]);
    v150.m[3].v[0] = 0.0;
    v150.m[3].v[1] = 0.0;
    v150.m[3].v[2] = 0.0;
    MatrixTransposeTransformVector43(in1, &v150, &out);
    v75 = _xmm;
    LODWORD(v77) = LODWORD(out.v[0]) ^ _xmm;
    if ( COERCE_FLOAT(LODWORD(out.v[0]) ^ _xmm) <= 0.99000001 )
    {
      if ( !v39[41] )
      {
        v83 = LODWORD(FLOAT_1_1);
        *(float *)&v83 = 1.1 - *((float *)v39 - 6);
        _XMM0 = v83;
        v84 = (float *)(v39 - 8);
        __asm { vminss  xmm9, xmm0, xmm14 }
        if ( v39 - 8 == (char *)&v142 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
          __debugbreak();
        if ( v43 == &v142 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
          __debugbreak();
        v86 = v38[1];
        v87 = *((float *)v39 - 1);
        v88 = (float)(v87 * v86) - (float)(*v38 * *(float *)v39);
        v89 = *(unsigned int *)v39;
        v90 = (float)(*(float *)v39 * v43->v[0]) - (float)(v86 * *v84);
        v91 = (float)(*v38 * *v84) - (float)(v87 * v43->v[0]);
        *(float *)&v89 = fsqrt((float)((float)(v90 * v90) + (float)(v88 * v88)) + (float)(v91 * v91));
        _XMM3 = v89;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm14, xmm0
        }
        v142.v[0] = (float)(1.0 / *(float *)&_XMM0) * v88;
        v142.v[2] = (float)(1.0 / *(float *)&_XMM0) * v91;
        v142.v[1] = (float)(1.0 / *(float *)&_XMM0) * v90;
        MatrixTransposeTransformVector43(&v142, &v150, &v149);
        *(float *)v146 = (float)((float)(*(float *)&_XMM9 * v149.v[1]) * v77) * v125;
        v95 = 0;
        v96 = (float *)v146;
        v146[1] = COERCE_UNSIGNED_INT((float)((float)(*(float *)&_XMM9 * v149.v[2]) * v77) * v125) ^ _xmm;
        v97 = *(_QWORD *)v136.v - (_QWORD)v146;
        do
        {
          if ( (unsigned int)v95 >= 3 )
          {
            LODWORD(v119) = 3;
            LODWORD(contentmaska) = v95;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
              __debugbreak();
          }
          v98 = *v96;
          if ( COERCE_FLOAT(*(_DWORD *)v96 & _xmm) > 0.0099999998 )
          {
            if ( (unsigned int)v95 >= 3 )
            {
              LODWORD(v119) = 3;
              LODWORD(contentmaska) = v95;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
                __debugbreak();
              LODWORD(v120) = 3;
              LODWORD(contentmaskb) = v95;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaskb, v120) )
                __debugbreak();
            }
            *(float *)((char *)v96 + v97) = v98;
          }
          ++v95;
          ++v96;
        }
        while ( v95 < 2 );
      }
      v99 = *(float **)v138.v;
      v100 = 1;
      v101 = 1;
      do
      {
        if ( !v101 )
        {
          LODWORD(v119) = 3;
          LODWORD(contentmaska) = v100;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
            __debugbreak();
        }
        v102 = (float)((float)(v77 + 0.1) * *(float *)((char *)v99 + (char *)&out - (char *)outBodyAccel)) * v16;
        if ( (unsigned int)v100 >= 3 )
        {
          LODWORD(v119) = 3;
          LODWORD(contentmaska) = v100;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
            __debugbreak();
        }
        *v99 = v102 + *v99;
        ++v99;
        v101 = (unsigned int)++v100 < 3;
      }
      while ( v100 < 3 );
      v34 = 0;
    }
    else
    {
      v78 = outBodyAccel;
      v79 = 0;
      v80 = 1;
      do
      {
        if ( !v80 )
        {
          LODWORD(v119) = 3;
          LODWORD(contentmaska) = v79;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
            __debugbreak();
        }
        v81 = (float)((float)(v77 + 0.1) * *(float *)((char *)v78->v + (char *)&out - (char *)outBodyAccel)) * v16;
        if ( (unsigned int)v79 >= 3 )
        {
          LODWORD(v119) = 3;
          LODWORD(contentmaska) = v79;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
            __debugbreak();
        }
        v78->v[0] = v81 + v78->v[0];
        v78 = (vec3_t *)((char *)v78 + 4);
        v80 = (unsigned int)++v79 < 3;
      }
      while ( v79 < 3 );
      v34 = 0;
    }
LABEL_64:
    ++v40;
    v76 = v122 + 1;
    p_y = (char *)&in1[7].y;
    v122 = v76;
    v38 += 3;
    in1 = (vec3_t *)((char *)in1 + 88);
    v39 += 88;
    if ( v76 >= 5 )
      break;
    v33 = start.v[2];
    v32 = start.v[1];
    v31 = start.v[0];
    v22 = *(__int16 **)v137.v;
    v35 = v76;
    v36 = *(const Bounds **)v132.v;
  }
  v103 = *(_DWORD **)v136.v;
  v104 = (char *)v148 - *(_QWORD *)v136.v;
  v105 = 1;
  v106 = *(float **)v136.v;
  do
  {
    if ( !v105 )
    {
      LODWORD(v119) = 3;
      LODWORD(contentmaska) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
        __debugbreak();
    }
    v107 = *(float *)((char *)v106 + (_QWORD)v104);
    if ( (unsigned int)v34 >= 3 )
    {
      LODWORD(v119) = 3;
      LODWORD(contentmaska) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v119) )
        __debugbreak();
    }
    *v106 = v107 + *v106;
    ++v106;
    v105 = (unsigned int)++v34 < 3;
  }
  while ( v34 < 3 );
  v108 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v108);
  if ( v108->current.integer )
  {
    angles.v[0] = 0.0;
    angles.v[1] = *(float *)(*(_QWORD *)v131.v + 40i64);
    angles.v[2] = 0.0;
    AngleVectors(&angles, &v149, &v137, &v136);
    v109 = (float)((float)((float)(120.0 * forward.v[0]) + **(float **)v131.v) + (float)(36.0 * up.v[0])) - (float)(12.0 * right.v[0]);
    v110 = (float)((float)((float)(120.0 * forward.v[1]) + *(float *)(*(_QWORD *)v131.v + 4i64)) + (float)(36.0 * up.v[1])) - (float)(12.0 * right.v[1]);
    v111 = (float)((float)((float)(120.0 * forward.v[2]) + *(float *)(*(_QWORD *)v131.v + 8i64)) + (float)(36.0 * up.v[2])) - (float)(12.0 * right.v[2]);
    v112 = v103[1] ^ v75;
    v113 = *v103 ^ v75;
    v131.v[0] = (float)((float)(*(float *)&v112 * v137.v[0]) + v109) + (float)(*(float *)&v113 * v136.v[0]);
    v131.v[2] = (float)((float)(*(float *)&v112 * v137.v[2]) + v111) + (float)(*(float *)&v113 * v136.v[2]);
    v132.v[0] = v109;
    v132.v[1] = v110;
    v132.v[2] = v111;
    v131.v[1] = (float)((float)(*(float *)&v112 * v137.v[1]) + v110) + (float)(*(float *)&v113 * v136.v[1]);
    G_DebugLine(&v132, &v131, &colorCyan, 1);
    v131.v[0] = (float)((float)(COERCE_FLOAT(v126 ^ v75) * v137.v[0]) + v132.v[0]) + (float)(COERCE_FLOAT(LODWORD(v127) ^ v75) * v136.v[0]);
    v131.v[2] = (float)((float)(COERCE_FLOAT(v126 ^ v75) * v137.v[2]) + v132.v[2]) + (float)(COERCE_FLOAT(LODWORD(v127) ^ v75) * v136.v[2]);
    v131.v[1] = (float)((float)(COERCE_FLOAT(v126 ^ v75) * v137.v[1]) + v132.v[1]) + (float)(COERCE_FLOAT(LODWORD(v127) ^ v75) * v136.v[1]);
    G_DebugLine(&v132, &v131, &colorBlue, 1);
    v114 = outBodyAccel->v[1];
    v115 = outBodyAccel->v[2];
    v131.v[0] = (float)((float)(v114 * right.v[0]) + v132.v[0]) + (float)(v115 * up.v[0]);
    v131.v[2] = (float)((float)(v114 * right.v[2]) + v132.v[2]) + (float)(v115 * up.v[2]);
    v131.v[1] = (float)((float)(v114 * right.v[1]) + v132.v[1]) + (float)(v115 * up.v[1]);
    G_DebugLine(&v132, &v131, &colorMagenta, 1);
    v131.v[0] = (float)((float)(v128 * right.v[0]) + v132.v[0]) + (float)(v129 * up.v[0]);
    v131.v[1] = (float)((float)(v128 * right.v[1]) + v132.v[1]) + (float)(v129 * up.v[1]);
    v131.v[2] = (float)((float)(v128 * right.v[2]) + v132.v[2]) + (float)(v129 * up.v[2]);
    G_DebugLine(&v132, &v131, &colorLtGreen, 1);
    v131.v[0] = (float)(4.0 * up.v[0]) + v132.v[0];
    v131.v[1] = (float)(4.0 * up.v[1]) + v132.v[1];
    v131.v[2] = (float)(4.0 * up.v[2]) + v132.v[2];
    v138.v[0] = v132.v[0] - (float)(4.0 * up.v[0]);
    v138.v[1] = v132.v[1] - (float)(4.0 * up.v[1]);
    v138.v[2] = v132.v[2] - (float)(4.0 * up.v[2]);
    G_DebugLine(&v138, &v131, &colorBlack, 1);
    v131.v[0] = (float)(4.0 * right.v[0]) + v132.v[0];
    v131.v[1] = (float)(4.0 * right.v[1]) + v132.v[1];
    v131.v[2] = (float)(4.0 * right.v[2]) + v132.v[2];
    v138.v[0] = v132.v[0] - (float)(4.0 * right.v[0]);
    v138.v[2] = v132.v[2] - (float)(4.0 * right.v[2]);
    v138.v[1] = v132.v[1] - (float)(4.0 * right.v[1]);
    G_DebugLine(&v138, &v131, &colorBlack, 1);
  }
}

/*
==============
G_VehicleSubmarine_CheckForPredictedCrash
==============
*/
void G_VehicleSubmarine_CheckForPredictedCrash(gentity_s *ent)
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

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 468, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 469, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
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
G_VehicleSubmarine_ClipVelocity
==============
*/
void G_VehicleSubmarine_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  float v3; 
  float v4; 

  v3 = in->v[0];
  v4 = (float)((float)(normal->v[0] * in->v[0]) + (float)(normal->v[1] * in->v[1])) + (float)(normal->v[2] * in->v[2]);
  if ( v4 >= 0.0 )
  {
    out->v[0] = v3;
    out->v[1] = in->v[1];
    out->v[2] = in->v[2];
  }
  else
  {
    out->v[0] = (float)(normal->v[0] * COERCE_FLOAT(LODWORD(v4) ^ _xmm)) + v3;
    out->v[1] = (float)(COERCE_FLOAT(LODWORD(v4) ^ _xmm) * normal->v[1]) + in->v[1];
    out->v[2] = (float)(COERCE_FLOAT(LODWORD(v4) ^ _xmm) * normal->v[2]) + in->v[2];
  }
}

/*
==============
G_VehicleSubmarine_GammaMap
==============
*/
__int64 G_VehicleSubmarine_GammaMap(float gamma, char in_val)
{
  __int64 result; 
  int v4; 

  if ( gamma == 1.0 )
    return (unsigned __int8)in_val;
  v4 = (int)(float)(powf_0((float)abs8(in_val) * 0.0078740157, gamma) * 127.0);
  if ( v4 > 127 )
    LOBYTE(v4) = 127;
  result = (unsigned __int8)-(char)v4;
  if ( in_val >= 0 )
    return (unsigned __int8)v4;
  return result;
}

/*
==============
G_VehicleSubmarine_UpdatePlayerMove
==============
*/
void G_VehicleSubmarine_UpdatePlayerMove(Vehicle *veh)
{
  const VehicleDef *ServerDef; 
  gentity_s *ent; 
  gentity_s *v4; 
  gclient_s *client; 
  const dvar_t *v6; 
  bool v7; 
  char v8; 
  const dvar_t *v9; 
  char v10; 
  const dvar_t *v11; 
  float v12; 
  float frameDuration; 
  float v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  float v31; 
  float v32; 
  float v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  const dvar_t *v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  float v45; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  float v49; 
  const dvar_t *v50; 
  const dvar_t *v51; 
  float v52; 
  float v53; 
  float v54; 
  __int64 EntityHitId; 
  Vehicle *vehicle; 
  float v57; 
  float v58; 
  float v59; 
  bool v60; 
  __int64 bumpEntityNum; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  __int128 v70; 
  float v71; 
  scrContext_t *v75; 
  scrContext_t *v76; 
  float v77; 
  float *v78; 
  const vec4_t *v79; 
  int v80; 
  char move[4]; 
  __int64 v82; 
  __int64 v83; 
  GStepSlideMove stepSlide; 
  vec3_t outBodyAccel; 
  float v86; 
  float v87; 
  float v88; 
  vec3_t start; 
  vec3_t outRotAccel; 
  vec3_t out; 
  float v92; 
  float v93; 
  float v94; 
  vec3_t in1; 
  tmat43_t<vec3_t> forward; 
  Bounds bounds; 
  vec3_t angles; 
  vec3_t end; 
  float value[6]; 
  trace_t results; 

  v83 = -2i64;
  *(_DWORD *)move = 0;
  in1.v[0] = FLOAT_30_0;
  in1.v[1] = 0.0;
  in1.v[2] = FLOAT_8_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  bounds.halfSize.v[1] = FLOAT_12_0;
  bounds.halfSize.v[2] = FLOAT_12_0;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 578, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
  ent = veh->ent;
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 583, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  LOWORD(v80) = 0;
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
  {
    v4 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 591, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v4->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    v4->client->linkAnglesFrac = 0.0;
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v4->client->ps.pm_flags, ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v4->client->ps.pm_flags, ACTIVE, 0xFu) )
    {
      client = v4->client;
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      GVehicles::ms_gVehiclesSystem->GetVehicleSubPlayerMove(GVehicles::ms_gVehiclesSystem, &client->sess.cmd, move);
      v6 = DVARBOOL_vehSubmarineInvertUpDown;
      if ( !DVARBOOL_vehSubmarineInvertUpDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineInvertUpDown") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      v7 = !v6->current.enabled;
      v8 = move[0];
      if ( !v7 )
      {
        v8 = -move[0];
        move[0] = -move[0];
      }
      v9 = DVARFLT_vehSubmarineVertControlGamma;
      if ( !DVARFLT_vehSubmarineVertControlGamma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineVertControlGamma") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      move[0] = G_VehicleSubmarine_GammaMap(v9->current.value, v8);
      v10 = move[1];
      v11 = DVARFLT_vehSubmarineHorizControlGamma;
      if ( !DVARFLT_vehSubmarineHorizControlGamma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineHorizControlGamma") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      move[1] = G_VehicleSubmarine_GammaMap(v11->current.value, v10);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v4->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
      v4->client->link_viewClamp.min.goal.v[1] = COERCE_FLOAT(LODWORD(ServerDef->turretHorizSpanRight) ^ _xmm);
      v4->client->link_viewClamp.max.goal.v[1] = ServerDef->turretHorizSpanLeft;
      v4->client->link_viewClamp.min.goal.v[0] = COERCE_FLOAT(LODWORD(ServerDef->turretVertSpanUp) ^ _xmm);
      v4->client->link_viewClamp.max.goal.v[0] = ServerDef->turretVertSpanDown;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
      {
        v4->client->link_viewClamp.resistMin.goal.v[1] = ServerDef->turretHorizResistLeft;
        v4->client->link_viewClamp.resistMax.goal.v[1] = ServerDef->turretHorizResistRight;
        v4->client->link_viewClamp.resistMin.goal.v[0] = ServerDef->turretVertResistDown;
        v4->client->link_viewClamp.resistMax.goal.v[0] = ServerDef->turretVertResistUp;
      }
      G_SnapToViewAngleClampGoal(&v4->client->link_viewClamp);
    }
  }
  G_VehicleSubmarine_CalcAccel(ent, move, &outBodyAccel, &outRotAccel);
  G_VehicleSubmarine_CalcCollisionAccel(ent, &bounds, &outBodyAccel, &outRotAccel);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  frameDuration = (float)level.frameDuration;
  v12 = frameDuration;
  v14 = frameDuration * 0.001;
  v15 = DVARFLT_vehSubmarineYawDampening;
  if ( !DVARFLT_vehSubmarineYawDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineYawDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  veh->phys.rotVel.v[1] = (float)(v15->current.value * veh->phys.rotVel.v[1]) + (float)(v14 * outRotAccel.v[1]);
  v16 = DVARFLT_vehSubmarinePitchDampening;
  if ( !DVARFLT_vehSubmarinePitchDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarinePitchDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  veh->phys.rotVel.v[0] = (float)(v16->current.value * veh->phys.rotVel.v[0]) + (float)(v14 * outRotAccel.v[0]);
  v17 = DVARFLT_vehSubmarineRollDampening;
  if ( !DVARFLT_vehSubmarineRollDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineRollDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  veh->phys.rotVel.v[2] = (float)(v17->current.value * veh->phys.rotVel.v[2]) + (float)(v14 * outRotAccel.v[2]);
  _XMM1 = 0i64;
  __asm { vroundss xmm0, xmm1, xmm3, 1 }
  veh->phys.angles.v[1] = (float)((float)((float)((float)((float)(frameDuration * veh->phys.rotVel.v[1]) * 0.001) + veh->phys.prevAngles.v[1]) * 0.0027777778) - *(float *)&_XMM0) * 360.0;
  veh->phys.angles.v[0] = (float)((float)(frameDuration * veh->phys.rotVel.v[0]) * 0.001) + veh->phys.prevAngles.v[0];
  v20 = DVARFLT_vehSubmarineMaxUpPitch;
  if ( !DVARFLT_vehSubmarineMaxUpPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxUpPitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.value < veh->phys.angles.v[0] )
  {
    v21 = DVARFLT_vehSubmarineMaxUpPitch;
    if ( !DVARFLT_vehSubmarineMaxUpPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxUpPitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    LODWORD(veh->phys.angles.v[0]) = v21->current.integer;
LABEL_58:
    veh->phys.rotVel.v[0] = 0.0;
    goto LABEL_59;
  }
  v22 = DVARFLT_vehSubmarineMaxDownPitch;
  if ( !DVARFLT_vehSubmarineMaxDownPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxDownPitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( COERCE_FLOAT(v22->current.integer ^ _xmm) > veh->phys.angles.v[0] )
  {
    v23 = DVARFLT_vehSubmarineMaxDownPitch;
    if ( !DVARFLT_vehSubmarineMaxDownPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxDownPitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    veh->phys.angles.v[0] = COERCE_FLOAT(v23->current.integer ^ _xmm);
    goto LABEL_58;
  }
LABEL_59:
  veh->phys.angles.v[2] = (float)((float)(frameDuration * veh->phys.rotVel.v[2]) * 0.001) + veh->phys.prevAngles.v[2];
  v24 = DVARFLT_vehSubmarineMaxRoll;
  if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = v24->current.value;
  v26 = DVARFLT_vehSubmarineMaxRoll;
  if ( v25 < veh->phys.angles.v[2] )
  {
    if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    LODWORD(veh->phys.angles.v[2]) = v26->current.integer;
LABEL_75:
    veh->phys.rotVel.v[2] = 0.0;
    goto LABEL_76;
  }
  if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( COERCE_FLOAT(v26->current.integer ^ _xmm) > veh->phys.angles.v[2] )
  {
    v27 = DVARFLT_vehSubmarineMaxRoll;
    if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    veh->phys.angles.v[2] = COERCE_FLOAT(v27->current.integer ^ _xmm);
    goto LABEL_75;
  }
LABEL_76:
  if ( outRotAccel.v[0] == 0.0 )
  {
    v28 = DVARFLT_vehSubmarineMinVelNoRestore;
    if ( !DVARFLT_vehSubmarineMinVelNoRestore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMinVelNoRestore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( v28->current.value > veh->phys.bodyVel.v[0] )
    {
      v29 = DVARFLT_vehSubmarinePitchRestore;
      if ( !DVARFLT_vehSubmarinePitchRestore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarinePitchRestore") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      veh->phys.angles.v[0] = v29->current.value * veh->phys.angles.v[0];
    }
  }
  if ( outRotAccel.v[2] == 0.0 )
  {
    v30 = DVARFLT_vehSubmarineRollRestore;
    if ( !DVARFLT_vehSubmarineRollRestore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineRollRestore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    veh->phys.angles.v[2] = v30->current.value * veh->phys.angles.v[2];
  }
  *(float *)&v82 = veh->phys.angles.v[0];
  if ( (v82 & 0x7F800000) == 2139095040 || (*(float *)&v82 = veh->phys.angles.v[1], (v82 & 0x7F800000) == 2139095040) || (*(float *)&v82 = veh->phys.angles.v[2], (v82 & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 654, ASSERT_TYPE_SANITY, "( !IS_NAN( ( phys->angles )[0] ) && !IS_NAN( ( phys->angles )[1] ) && !IS_NAN( ( phys->angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( phys->angles )[0] ) && !IS_NAN( ( phys->angles )[1] ) && !IS_NAN( ( phys->angles )[2] )") )
      __debugbreak();
  }
  angles = veh->phys.angles;
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  forward.m[3].v[0] = 0.0;
  forward.m[3].v[1] = 0.0;
  forward.m[3].v[2] = 0.0;
  v31 = outBodyAccel.v[0];
  v32 = outBodyAccel.v[1];
  v33 = outBodyAccel.v[2];
  veh->phys.vel.v[0] = (float)((float)((float)((float)((float)(outBodyAccel.v[0] * forward.m[0].v[0]) + (float)(outBodyAccel.v[1] * forward.m[1].v[0])) + (float)(outBodyAccel.v[2] * forward.m[2].v[0])) * frameDuration) * 0.001) + veh->phys.vel.v[0];
  veh->phys.vel.v[1] = (float)((float)((float)((float)((float)(v31 * forward.m[0].v[1]) + (float)(v32 * forward.m[1].v[1])) + (float)(v33 * forward.m[2].v[1])) * frameDuration) * 0.001) + veh->phys.vel.v[1];
  veh->phys.vel.v[2] = (float)((float)((float)((float)((float)(v31 * forward.m[0].v[2]) + (float)(v32 * forward.m[1].v[2])) + (float)(v33 * forward.m[2].v[2])) * frameDuration) * 0.001) + veh->phys.vel.v[2];
  MatrixTransposeTransformVector43(&veh->phys.vel, &forward, &veh->phys.bodyVel);
  v34 = DVARFLT_vehSubmarineForwardDampening;
  if ( !DVARFLT_vehSubmarineForwardDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineForwardDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  veh->phys.bodyVel.v[0] = v34->current.value * veh->phys.bodyVel.v[0];
  v35 = DVARFLT_vehSubmarineLateralDampening;
  if ( !DVARFLT_vehSubmarineLateralDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineLateralDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  veh->phys.bodyVel.v[1] = v35->current.value * veh->phys.bodyVel.v[1];
  v36 = DVARFLT_vehSubmarineLateralDampening;
  if ( !DVARFLT_vehSubmarineLateralDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineLateralDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  veh->phys.bodyVel.v[2] = v36->current.value * veh->phys.bodyVel.v[2];
  v37 = DVARFLT_vehSubmarineMinForwardVel;
  if ( !DVARFLT_vehSubmarineMinForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMinForwardVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.value > 0.0 )
  {
    v38 = DVARFLT_vehSubmarineMinForwardVel;
    if ( !DVARFLT_vehSubmarineMinForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMinForwardVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    if ( v38->current.value > veh->phys.bodyVel.v[0] )
    {
      v39 = DVARFLT_vehSubmarineMinForwardVel;
      if ( !DVARFLT_vehSubmarineMinForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMinForwardVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      LODWORD(veh->phys.bodyVel.v[0]) = v39->current.integer;
    }
  }
  v40 = DVARFLT_vehSubmarineMaxForwardVel;
  if ( !DVARFLT_vehSubmarineMaxForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxForwardVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.value >= veh->phys.bodyVel.v[0] )
  {
    v42 = DVARFLT_vehSubmarineMaxReverseVel;
    if ( !DVARFLT_vehSubmarineMaxReverseVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxReverseVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    if ( COERCE_FLOAT(v42->current.integer ^ _xmm) > veh->phys.bodyVel.v[0] )
    {
      v43 = DVARFLT_vehSubmarineMaxReverseVel;
      if ( !DVARFLT_vehSubmarineMaxReverseVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxReverseVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      veh->phys.bodyVel.v[0] = COERCE_FLOAT(v43->current.integer ^ _xmm);
    }
  }
  else
  {
    v41 = DVARFLT_vehSubmarineMaxForwardVel;
    if ( !DVARFLT_vehSubmarineMaxForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxForwardVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    LODWORD(veh->phys.bodyVel.v[0]) = v41->current.integer;
  }
  v44 = DVARFLT_vehSubmarineMaxLateralVel;
  if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  v45 = v44->current.value;
  v46 = DVARFLT_vehSubmarineMaxLateralVel;
  if ( v45 >= veh->phys.bodyVel.v[1] )
  {
    if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( COERCE_FLOAT(v46->current.integer ^ _xmm) > veh->phys.bodyVel.v[1] )
    {
      v47 = DVARFLT_vehSubmarineMaxLateralVel;
      if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      veh->phys.bodyVel.v[1] = COERCE_FLOAT(v47->current.integer ^ _xmm);
    }
  }
  else
  {
    if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    LODWORD(veh->phys.bodyVel.v[1]) = v46->current.integer;
  }
  v48 = DVARFLT_vehSubmarineMaxLateralVel;
  if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  v49 = v48->current.value;
  v50 = DVARFLT_vehSubmarineMaxLateralVel;
  if ( v49 >= veh->phys.bodyVel.v[2] )
  {
    if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    if ( COERCE_FLOAT(v50->current.integer ^ _xmm) > veh->phys.bodyVel.v[2] )
    {
      v51 = DVARFLT_vehSubmarineMaxLateralVel;
      if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v51);
      veh->phys.bodyVel.v[2] = COERCE_FLOAT(v51->current.integer ^ _xmm);
    }
  }
  else
  {
    if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    LODWORD(veh->phys.bodyVel.v[2]) = v50->current.integer;
  }
  MatrixTransformVector(&veh->phys.bodyVel, (const tmat33_t<vec3_t> *)&forward, &veh->phys.vel);
  if ( 0.0 != veh->phys.vel.v[0] || 0.0 != veh->phys.vel.v[1] || 0.0 != veh->phys.vel.v[2] )
  {
    MatrixTransformVector43(&in1, &forward, &out);
    v92 = veh->phys.vel.v[0];
    v93 = veh->phys.vel.v[1];
    v94 = veh->phys.vel.v[2];
    v86 = v92;
    v87 = v93;
    v88 = v94;
    v52 = veh->phys.origin.v[0];
    v53 = veh->phys.origin.v[1];
    v54 = veh->phys.origin.v[2];
    start.v[0] = v52 + out.v[0];
    start.v[1] = v53 + out.v[1];
    start.v[2] = v54 + out.v[2];
    end.v[0] = (float)((float)(frameDuration * v92) * 0.001) + (float)(v52 + out.v[0]);
    end.v[1] = (float)((float)(frameDuration * v93) * 0.001) + (float)(v53 + out.v[1]);
    end.v[2] = (float)((float)(frameDuration * v94) * 0.001) + (float)(v54 + out.v[2]);
    G_Main_TraceCapsule(&results, &start, &end, &bounds, ent->s.number, ent->clipmask);
    if ( results.fraction < 1.0 && (EntityHitId = Trace_GetEntityHitId(&results), (unsigned int)(EntityHitId - 2046) > 1) && (vehicle = g_entities[EntityHitId].vehicle) != NULL )
    {
      v57 = vehicle->phys.vel.v[0];
      v58 = vehicle->phys.vel.v[1];
      v59 = vehicle->phys.vel.v[2];
      BYTE1(v80) = 1;
      v86 = v86 - v57;
      v87 = v87 - v58;
      v88 = v88 - v59;
    }
    else
    {
      v58 = *(float *)&v82;
      v57 = *(float *)&v82;
      v59 = *(float *)&v82;
    }
    G_Vehicle_ClearGround(ent);
    stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
    outBodyAccel.v[0] = 0.0;
    outBodyAccel.v[1] = 0.0;
    outBodyAccel.v[2] = FLOAT_1_0;
    stepSlide.deltaTime = frameDuration * 0.001;
    stepSlide.origin = &start;
    stepSlide.velocity = (vec3_t *)&v86;
    stepSlide.bounds = &bounds;
    *(_WORD *)&stepSlide.gravity = 0;
    stepSlide.zerog = 1;
    stepSlide.inSolid = (bool *)&v80;
    stepSlide.groundNormal = &outBodyAccel;
    stepSlide.passEntities[0] = ent->s.number;
    stepSlide.passEntityCount = 1;
    stepSlide.clipMask = ent->clipmask;
    stepSlide.velocityClipType = VELOCITY_CLIP_VEHICLE_SUB;
    G_Vehicle_SlideMoveIgnoreLinkedChildren(ent, &stepSlide);
    v60 = BgStepSlideMove::SlideMove(&stepSlide);
    bumpEntityNum = (unsigned int)stepSlide.bumpEntityNum;
    BgStepSlideMove::~BgStepSlideMove(&stepSlide);
    v62 = start.v[0] - out.v[0];
    veh->phys.origin.v[0] = start.v[0] - out.v[0];
    v63 = start.v[1] - out.v[1];
    veh->phys.origin.v[1] = start.v[1] - out.v[1];
    v64 = start.v[2] - out.v[2];
    veh->phys.origin.v[2] = start.v[2] - out.v[2];
    if ( !BYTE1(v80) || (_BYTE)v80 )
    {
      v67 = v88;
      v66 = v87;
      v65 = v86;
    }
    else
    {
      veh->phys.origin.v[0] = (float)((float)(v12 * v57) * 0.001) + v62;
      veh->phys.origin.v[1] = (float)((float)(v58 * v12) * 0.001) + v63;
      veh->phys.origin.v[2] = (float)((float)(v59 * v12) * 0.001) + v64;
      v65 = v86 + v57;
      v86 = v86 + v57;
      v66 = v87 + v58;
      v87 = v87 + v58;
      v67 = v88 + v59;
      v88 = v88 + v59;
    }
    veh->phys.vel.v[0] = v65;
    veh->phys.vel.v[1] = v66;
    veh->phys.vel.v[2] = v67;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_vehSubmarineAllowInSolid, "vehSubmarineAllowInSolid") && (_BYTE)v80 )
    {
      veh->phys.origin.v[0] = (float)((float)(v12 * veh->phys.vel.v[0]) * 0.001) + veh->phys.origin.v[0];
      veh->phys.origin.v[1] = (float)((float)(v12 * veh->phys.vel.v[1]) * 0.001) + veh->phys.origin.v[1];
      veh->phys.origin.v[2] = (float)((float)(v12 * veh->phys.vel.v[2]) * 0.001) + veh->phys.origin.v[2];
    }
    if ( v60 )
    {
      v68 = veh->phys.origin.v[0] - (float)((float)((float)(v12 * 0.001) * v92) + v52);
      v70 = LODWORD(veh->phys.origin.v[1]);
      v69 = veh->phys.origin.v[1] - (float)((float)((float)(v12 * 0.001) * v93) + v53);
      v71 = veh->phys.origin.v[2] - (float)((float)((float)(v12 * 0.001) * v94) + v54);
      *(float *)&v70 = fsqrt((float)((float)(v69 * v69) + (float)(v68 * v68)) + (float)(v71 * v71));
      _XMM3 = v70;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      value[0] = v68 * (float)(1.0 / *(float *)&_XMM0);
      value[1] = v69 * (float)(1.0 / *(float *)&_XMM0);
      value[2] = v71 * (float)(1.0 / *(float *)&_XMM0);
      if ( *(float *)&v70 > 0.0 )
      {
        v75 = ScriptContext_Server();
        v76 = v75;
        if ( (unsigned int)(bumpEntityNum - 2046) <= 1 )
          Scr_AddUndefined(v75);
        else
          GScr_AddEntity(&g_entities[bumpEntityNum]);
        Scr_AddVector(v76, value);
        Scr_AddVector(v76, &v92);
        GScr_Notify(ent, scr_const.veh_collision, 3u);
      }
    }
  }
  G_VehicleSubmarine_CheckForPredictedCrash(ent);
  MatrixTransposeTransformVector43(&veh->phys.vel, &forward, &veh->phys.bodyVel);
  v77 = fsqrt((float)((float)(veh->phys.vel.v[0] * veh->phys.vel.v[0]) + (float)(veh->phys.vel.v[1] * veh->phys.vel.v[1])) + (float)(veh->phys.vel.v[2] * veh->phys.vel.v[2]));
  veh->speed = v77;
  if ( v77 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 767, ASSERT_TYPE_ASSERT, "(veh->speed >= 0.0f)", (const char *)&queryFormat, "veh->speed >= 0.0f") )
    __debugbreak();
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug") )
  {
    MatrixTransformVector(&in1, (const tmat33_t<vec3_t> *)&forward, &outBodyAccel);
    outBodyAccel.v[0] = outBodyAccel.v[0] + veh->phys.origin.v[0];
    outBodyAccel.v[1] = outBodyAccel.v[1] + veh->phys.origin.v[1];
    outBodyAccel.v[2] = (float)(outBodyAccel.v[2] + veh->phys.origin.v[2]) - bounds.halfSize.v[2];
    v78 = (float *)vec3_t::operator[](&bounds.halfSize, 2);
    G_Vehicle_DebugCapsule(&outBodyAccel, bounds.halfSize.v[0], *v78 * 2.0, 1.0, 1.0, 0.0);
    outBodyAccel.v[0] = veh->phys.origin.v[0] + veh->phys.vel.v[0];
    outBodyAccel.v[1] = veh->phys.vel.v[1] + veh->phys.origin.v[1];
    outBodyAccel.v[2] = veh->phys.vel.v[2] + veh->phys.origin.v[2];
    v79 = &colorYellow;
    if ( (_BYTE)v80 )
      v79 = &colorBlue;
    G_DebugLine(&veh->phys.origin, &outBodyAccel, v79, 1);
  }
}

