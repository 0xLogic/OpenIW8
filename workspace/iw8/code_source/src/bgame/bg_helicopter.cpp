/*
==============
BG_HeliCmdScale
==============
*/

void __fastcall BG_HeliCmdScale(bool scaleMovement, const char (*move)[4], vec4_t *outFracs, bool allowDeadzone)
{
  ?BG_HeliCmdScale@@YAX_NAEAY03$$CBDAEATvec4_t@@0@Z(scaleMovement, move, outFracs, allowDeadzone);
}

/*
==============
BG_VehicleHelicopterMove
==============
*/

void __fastcall BG_VehicleHelicopterMove(pmove_t *pm, const pml_t *pml)
{
  ?BG_VehicleHelicopterMove@@YAXPEAVpmove_t@@PEBUpml_t@@@Z(pm, pml);
}

/*
==============
BG_HeliCalcAccel
==============
*/
void BG_HeliCalcAccel(const pmove_t *pm, const pml_t *pml, VehicleState *vehicleState, const vec4_t *moveRequest, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  const VehicleDef *VehicleDef; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  int v15; 
  __int64 v16; 
  bool v18; 
  float v21; 
  float v22; 
  float v23; 
  float frametime; 
  float v25; 
  __int128 v26; 
  float v27; 
  float v28; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float vehHelicopterDecelerationSide; 
  unsigned int v40; 
  __int64 v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  double v47; 
  float v48; 
  float v49; 
  double v50; 
  float v51; 
  float v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v58; 
  __int128 v59; 
  __int128 v63; 
  __int128 v64; 
  float v68; 
  bool v69; 
  float v70; 
  double v71; 
  float v72; 
  double v73; 
  float v74; 
  float v75; 
  double v76; 
  float v79; 
  double v80; 
  float v81; 
  float v82; 
  double v83; 
  unsigned int v84; 
  __int64 v85; 
  float v86; 
  float v87; 
  float v88; 
  double v89; 
  float v90; 
  float vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt; 
  float v92; 
  double v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  vec2_t *p_tiltVelocity; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  unsigned int v105; 
  bool v106; 
  float v107; 
  float v108; 
  __int64 v109; 
  __int64 v110; 
  __int64 v111; 
  __int64 v112; 
  __int64 v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  __int64 v118; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  vec3_t out; 
  float v128; 
  float v129; 
  vec3_t outAccel; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  int v140[4]; 
  float v141; 
  vec3_t angles; 
  vec3_t in1; 
  tmat43_t<vec3_t> forward; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 191, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 192, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 193, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  if ( !VehicleDef )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 196, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 97, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
  }
  v10 = 17.6 * VehicleDef->vehHelicopterMaxSpeed;
  v11 = 17.6 * VehicleDef->vehHelicopterMaxAccel;
  v12 = 17.6 * VehicleDef->vehHelicopterMaxSpeedVertical;
  v13 = 17.6 * VehicleDef->vehHelicopterMaxAccelVertical;
  _XMM8 = LODWORD(FLOAT_1_0);
  v15 = 0;
  v16 = 0i64;
  v134 = v10;
  v135 = v10;
  v136 = v12;
  v124 = v11;
  v125 = v11;
  v126 = v13;
  _XMM12 = 0i64;
  v18 = 1;
  do
  {
    if ( !v18 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
      LODWORD(v115) = 3;
      LODWORD(v110) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v110, v115) )
        __debugbreak();
    }
    if ( (unsigned int)v15 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    __asm
    {
      vcmpless xmm0, xmm12, xmm6
      vblendvps xmm0, xmm8, xmm7, xmm0
    }
    v122 = *(float *)&_XMM0;
    if ( (unsigned int)v15 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    *(float *)&v140[v16 + 2] = v122;
    ++v16;
    v18 = (unsigned int)++v15 < 3;
  }
  while ( v15 < 3 );
  v21 = moveRequest->v[0];
  v22 = moveRequest->v[1];
  v23 = moveRequest->v[2];
  BG_HelicopterHovering(pm, pml, moveRequest, vehicleState, &outAccel);
  frametime = pml->frametime;
  v25 = (float)(frametime * outAccel.v[0]) + (float)(v10 * v21);
  v26 = LODWORD(frametime);
  v27 = (float)(frametime * outAccel.v[1]) + (float)(v10 * v22);
  v28 = (float)(frametime * outAccel.v[2]) + (float)(v12 * v23);
  *(float *)&v26 = fsqrt((float)((float)(v27 * v27) + (float)(v25 * v25)) + (float)(v28 * v28));
  _XMM11 = v26;
  v18 = *(float *)&v26 < 1.0;
  __asm
  {
    vcmpless xmm0, xmm11, cs:__real@80000000
    vblendvps xmm0, xmm11, xmm2, xmm0
  }
  v32 = (float)(1.0 / *(float *)&_XMM0) * v25;
  v33 = (float)(1.0 / *(float *)&_XMM0) * v27;
  v34 = (float)(1.0 / *(float *)&_XMM0) * v28;
  v137 = v25;
  v138 = v27;
  v139 = v28;
  if ( v18 )
  {
    v35 = vehicleState->bodyVelocity.v[1];
    outAccel.v[0] = vehicleState->bodyVelocity.v[0];
    outAccel.v[2] = vehicleState->bodyVelocity.v[2];
    outAccel.v[1] = v35;
    v131 = 0.0;
    v132 = 0.0;
    v133 = 0.0;
    LODWORD(_XMM11) = 0;
    v36 = 0.0;
  }
  else
  {
    v36 = (float)((float)(v33 * vehicleState->bodyVelocity.v[1]) + (float)(v32 * vehicleState->bodyVelocity.v[0])) + (float)(v34 * vehicleState->bodyVelocity.v[2]);
    v37 = (float)(COERCE_FLOAT(LODWORD(v36) ^ _xmm) * v32) + vehicleState->bodyVelocity.v[0];
    outAccel.v[1] = (float)(COERCE_FLOAT(LODWORD(v36) ^ _xmm) * v33) + vehicleState->bodyVelocity.v[1];
    outAccel.v[0] = v37;
    v38 = (float)(COERCE_FLOAT(LODWORD(v36) ^ _xmm) * v34) + vehicleState->bodyVelocity.v[2];
    v131 = v32 * v36;
    v133 = v34 * v36;
    outAccel.v[2] = v38;
    v132 = (float)((float)(1.0 / *(float *)&_XMM0) * v27) * v36;
  }
  vehHelicopterDecelerationSide = VehicleDef->vehHelicopterDecelerationSide;
  v40 = 0;
  v140[0] = LODWORD(VehicleDef->vehHelicopterDecelerationFwd);
  *(float *)&v140[1] = vehHelicopterDecelerationSide;
  v41 = 0i64;
  v128 = 0.0;
  v129 = 0.0;
  v122 = 0.0;
  v123 = 0.0;
  do
  {
    v42 = pml->frametime;
    if ( v40 >= 2 )
    {
      LODWORD(v114) = 2;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    if ( v40 >= 4 )
    {
      LODWORD(v114) = 4;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    v43 = *(float *)&v140[v41 + 2] * *(float *)&v140[v41];
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    v44 = outAccel.v[v41];
    DiffTrack(0.0, v44, v43, v42);
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    v45 = (float)(0.0 - v44) / pml->frametime;
    if ( v40 >= 2 )
    {
      LODWORD(v114) = 2;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    v46 = pml->frametime;
    *(&v122 + v41) = v45;
    if ( *(float *)&_XMM11 <= v36 )
    {
      if ( v40 >= 2 )
      {
        LODWORD(v114) = 2;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      if ( v40 >= 4 )
      {
        LODWORD(v114) = 4;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      v49 = *(float *)&v140[v41 + 2] * *(float *)&v140[v41];
      if ( v40 >= 3 )
      {
        LODWORD(v114) = 3;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
        LODWORD(v117) = 3;
        LODWORD(v112) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v112, v117) )
          __debugbreak();
      }
      v50 = DiffTrack(*(&v137 + v41), *(&v131 + v41), v49, v46);
      if ( v40 >= 3 )
      {
        LODWORD(v114) = 3;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      v51 = (float)(*(float *)&v50 - *(&v131 + v41)) / pml->frametime;
      if ( v40 >= 2 )
      {
        LODWORD(v114) = 2;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      *(&v122 + v41) = v51 + *(&v122 + v41);
    }
    else
    {
      if ( v40 >= 4 )
      {
        LODWORD(v114) = 4;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      if ( v40 >= 3 )
      {
        LODWORD(v114) = 3;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
        LODWORD(v116) = 3;
        LODWORD(v111) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v116) )
          __debugbreak();
      }
      v47 = DiffTrack(*(&v137 + v41), *(&v131 + v41), *(float *)&v140[v41 + 2], v46);
      if ( v40 >= 3 )
      {
        LODWORD(v114) = 3;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      v48 = (float)(*(float *)&v47 - *(&v131 + v41)) / pml->frametime;
      if ( v40 >= 2 )
      {
        LODWORD(v114) = 2;
        LODWORD(v109) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      *(&v128 + v41) = v48 + *(&v128 + v41);
    }
    if ( v40 >= 2 )
    {
      LODWORD(v114) = 2;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
      LODWORD(v118) = 2;
      LODWORD(v113) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v113, v118) )
        __debugbreak();
    }
    v52 = *(&v128 + v41) + *(&v122 + v41);
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    outBodyAccel->v[v41] = v52;
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    v53 = *((unsigned int *)&v124 + v41);
    v54 = v53;
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
      {
        __debugbreak();
        v54 = v53;
      }
    }
    _XMM7 = v54 ^ (unsigned int)_xmm;
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    if ( *(float *)&_XMM7 > *(float *)&v53 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM7, *(float *)&v53) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm7, xmm8
      vminss  xmm6, xmm0, xmm6
    }
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    outBodyAccel->v[v41] = *(float *)&_XMM6;
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    v58 = *((unsigned int *)&v124 + v41);
    v59 = v58;
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
      {
        __debugbreak();
        v59 = v58;
      }
    }
    _XMM7 = v59 ^ (unsigned int)_xmm;
    if ( v40 >= 2 )
    {
      LODWORD(v114) = 2;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    if ( *(float *)&_XMM7 > *(float *)&v58 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM7, *(float *)&v58) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm7, [rsp+rdi*4+220h+var_1B8]
      vminss  xmm6, xmm0, xmm6
    }
    if ( v40 >= 2 )
    {
      LODWORD(v114) = 2;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    *(&v122 + v41) = *(float *)&_XMM6;
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    v63 = *((unsigned int *)&v124 + v41);
    v64 = v63;
    if ( v40 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
      {
        __debugbreak();
        v64 = v63;
      }
    }
    _XMM7 = v64 ^ (unsigned int)_xmm;
    if ( v40 >= 2 )
    {
      LODWORD(v114) = 2;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    if ( *(float *)&_XMM7 > *(float *)&v63 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM7, *(float *)&v63) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm7, [rbp+rdi*4+120h+var_190]
      vminss  xmm6, xmm0, xmm6
    }
    if ( v40 >= 2 )
    {
      LODWORD(v114) = 2;
      LODWORD(v109) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    *(&v128 + v41++) = *(float *)&_XMM6;
    ++v40;
  }
  while ( (int)v40 < 2 );
  v68 = vehicleState->bodyVelocity.v[2];
  v69 = v68 < v28;
  if ( v68 > v28 )
  {
    if ( v68 > 0.0 )
    {
LABEL_140:
      v70 = v141 * VehicleDef->vehHelicopterDecelerationUp;
      goto LABEL_142;
    }
    v69 = v68 < v28;
  }
  if ( v69 && v68 < 0.0 )
    goto LABEL_140;
  v70 = v141;
LABEL_142:
  v71 = DiffTrack(v28, v68, v70, pml->frametime);
  v72 = (float)(*(float *)&v71 - vehicleState->bodyVelocity.v[2]) / pml->frametime;
  outBodyAccel->v[2] = v72;
  v73 = I_fclamp(v72, COERCE_FLOAT(LODWORD(v13) ^ _xmm), v13);
  outBodyAccel->v[2] = *(float *)&v73;
  if ( VehicleDef->vehHelicopterMaxYawRate <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 269, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxYawRate > 0.0f)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxYawRate > 0.0f") )
    __debugbreak();
  v74 = VehicleDef->vehHelicopterMaxYawAccel / VehicleDef->vehHelicopterMaxYawRate;
  v75 = vehicleState->previousAngles.v[1];
  v76 = DiffTrackAngle(pm->ps->viewangles.v[1], v75, v74, pml->frametime);
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  v79 = (float)((float)((float)((float)(*(float *)&v76 - v75) * 0.0027777778) - *(float *)&_XMM3) * 360.0) / pml->frametime;
  v80 = I_fclamp(v79, COERCE_FLOAT(LODWORD(VehicleDef->vehHelicopterMaxYawRate) ^ _xmm), VehicleDef->vehHelicopterMaxYawRate);
  v81 = vehicleState->angVelocity.v[1];
  if ( COERCE_FLOAT(LODWORD(v79) & _xmm) > COERCE_FLOAT(LODWORD(v81) & _xmm) )
  {
    v80 = DiffTrack(*(float *)&v80, v81, v74, pml->frametime);
    v81 = vehicleState->angVelocity.v[1];
  }
  v82 = (float)(*(float *)&v80 - v81) / pml->frametime;
  outRotAccel->v[1] = v82;
  v83 = I_fclamp(v82, COERCE_FLOAT(LODWORD(VehicleDef->vehHelicopterMaxYawAccel) ^ _xmm), VehicleDef->vehHelicopterMaxYawAccel);
  v84 = 0;
  outRotAccel->v[1] = *(float *)&v83;
  v85 = 0i64;
  do
  {
    if ( v84 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v84;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    if ( *(float *)((char *)&v134 + v85) <= 0.0 )
    {
      if ( VehicleDef->vehHelicopterMaxSpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 286, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxSpeed > 0.0f)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxSpeed > 0.0f") )
        __debugbreak();
      v86 = 17.6 * VehicleDef->vehHelicopterMaxSpeed;
      if ( v84 >= 3 )
      {
        LODWORD(v114) = 3;
        LODWORD(v109) = v84;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      *(float *)((char *)&v134 + v85) = v86;
    }
    if ( v84 >= 3 )
    {
      LODWORD(v114) = 3;
      LODWORD(v109) = v84;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    if ( *(float *)((char *)&v124 + v85) <= 0.0 )
    {
      if ( VehicleDef->vehHelicopterMaxAccel <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 291, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxAccel > 0.0f)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxAccel > 0.0f") )
        __debugbreak();
      v87 = 17.6 * VehicleDef->vehHelicopterMaxAccel;
      if ( v84 >= 3 )
      {
        LODWORD(v114) = 3;
        LODWORD(v109) = v84;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      *(float *)((char *)&v124 + v85) = v87;
    }
    ++v84;
    v85 += 4i64;
  }
  while ( (int)v84 < 2 );
  angles.v[1] = vehicleState->angles.v[1];
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  v88 = v134;
  forward.m[3].v[0] = 0.0;
  forward.m[3].v[1] = 0.0;
  forward.m[3].v[2] = 0.0;
  out.v[0] = (float)((float)((float)((float)(1.0 / v134) * v137) * VehicleDef->vehHelicopterTiltFromControllerAxes) + (float)((float)((float)(1.0 / v134) * vehicleState->bodyVelocity.v[0]) * VehicleDef->vehHelicopterTiltFromVelocity)) + (float)((float)((float)(1.0 / v124) * v128) * VehicleDef->vehHelicopterTiltFromAcceleration);
  out.v[0] = (float)((float)((float)(1.0 / v124) * v122) * VehicleDef->vehHelicopterTiltFromDeceleration) + out.v[0];
  v89 = I_fclamp(out.v[0], -1.0, 1.0);
  v18 = vehicleState->bodyVelocity.v[0] > 0.0;
  out.v[0] = *(float *)&v89;
  out.v[1] = (float)((float)((float)((float)(1.0 / v135) * vehicleState->bodyVelocity.v[1]) * VehicleDef->vehHelicopterTiltFromVelocity) + (float)((float)((float)(1.0 / v135) * v138) * VehicleDef->vehHelicopterTiltFromControllerAxes)) + (float)((float)((float)(1.0 / v125) * v129) * VehicleDef->vehHelicopterTiltFromAcceleration);
  out.v[1] = (float)((float)((float)(1.0 / v125) * v123) * VehicleDef->vehHelicopterTiltFromDeceleration) + out.v[1];
  if ( v18 && COERCE_FLOAT(LODWORD(vehicleState->angVelocity.v[1]) & _xmm) > 0.0 )
  {
    if ( v88 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 319, ASSERT_TYPE_ASSERT, "(maxSpeed[0] > 0)", (const char *)&queryFormat, "maxSpeed[0] > 0") )
      __debugbreak();
    v90 = vehicleState->bodyVelocity.v[0] / v88;
    vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt = VehicleDef->vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
    if ( v90 >= vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt )
    {
      v92 = FLOAT_1_0;
    }
    else
    {
      if ( vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 323, ASSERT_TYPE_SANITY, "( vehDef->vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt > 0 )", (const char *)&queryFormat, "vehDef->vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt > 0") )
        __debugbreak();
      v92 = v90 / VehicleDef->vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt;
    }
    if ( VehicleDef->vehHelicopterMaxYawRate <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 329, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxYawRate > 0.0f)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxYawRate > 0.0f") )
      __debugbreak();
    out.v[1] = out.v[1] - (float)((float)(v92 * VehicleDef->vehHelicopterTiltFromFwdAndYaw) * (float)(vehicleState->angVelocity.v[1] / VehicleDef->vehHelicopterMaxYawRate));
  }
  v93 = I_fclamp(out.v[1], -1.0, 1.0);
  v94 = (float)((float)(*(float *)&v93 * forward.m[1].v[0]) + (float)(out.v[0] * forward.m[0].v[0])) - vehicleState->tilt.v[0];
  v95 = (float)((float)(*(float *)&v93 * forward.m[1].v[1]) + (float)(out.v[0] * forward.m[0].v[1])) - vehicleState->tilt.v[1];
  out.v[1] = *(float *)&v93;
  out.v[2] = 0.0;
  if ( VehicleDef->vehHelicopterTiltMomentum == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 341, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterTiltMomentum)", (const char *)&queryFormat, "vehDef->vehHelicopterTiltMomentum") )
    __debugbreak();
  v96 = pml->frametime;
  v97 = 1.0 / VehicleDef->vehHelicopterTiltMomentum;
  v98 = v97 * VehicleDef->vehHelicopterTiltSpeed;
  p_tiltVelocity = &vehicleState->tiltVelocity;
  v100 = vehicleState->tiltVelocity.v[0];
  v101 = vehicleState->tiltVelocity.v[1];
  v102 = (float)((float)((float)(v98 * v94) + (float)(COERCE_FLOAT(LODWORD(v97) ^ _xmm) * v100)) * v96) + v100;
  vehicleState->tiltVelocity.v[0] = v102;
  v103 = (float)((float)((float)(v95 * v98) + (float)(COERCE_FLOAT(LODWORD(v97) ^ _xmm) * v101)) * v96) + vehicleState->tiltVelocity.v[1];
  vehicleState->tiltVelocity.v[1] = v103;
  v104 = pml->frametime;
  vehicleState->tilt.v[0] = (float)((float)((float)(v102 + v100) * 0.5) * v104) + vehicleState->tilt.v[0];
  v105 = 0;
  vehicleState->tilt.v[1] = (float)((float)((float)(v103 + v101) * 0.5) * v104) + vehicleState->tilt.v[1];
  v106 = 1;
  do
  {
    if ( !v106 )
    {
      LODWORD(v114) = 2;
      LODWORD(v109) = v105;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
        __debugbreak();
    }
    if ( p_tiltVelocity[-1].v[0] <= 1.0 )
    {
      if ( v105 >= 2 )
      {
        LODWORD(v114) = 2;
        LODWORD(v109) = v105;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      if ( p_tiltVelocity[-1].v[0] < -1.0 )
      {
        if ( v105 >= 2 )
        {
          LODWORD(v114) = 2;
          LODWORD(v109) = v105;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
            __debugbreak();
        }
        p_tiltVelocity[-1].v[0] = -1.0;
        if ( v105 >= 2 )
        {
          LODWORD(v114) = 2;
          LODWORD(v109) = v105;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
            __debugbreak();
        }
        if ( p_tiltVelocity->v[0] < 0.0 )
        {
LABEL_213:
          if ( v105 >= 2 )
          {
            LODWORD(v114) = 2;
            LODWORD(v109) = v105;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
              __debugbreak();
          }
          p_tiltVelocity->v[0] = 0.0;
        }
      }
    }
    else
    {
      if ( v105 >= 2 )
      {
        LODWORD(v114) = 2;
        LODWORD(v109) = v105;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      p_tiltVelocity[-1].v[0] = 1.0;
      if ( v105 >= 2 )
      {
        LODWORD(v114) = 2;
        LODWORD(v109) = v105;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v109, v114) )
          __debugbreak();
      }
      if ( p_tiltVelocity->v[0] > 0.0 )
        goto LABEL_213;
    }
    ++v105;
    p_tiltVelocity = (vec2_t *)((char *)p_tiltVelocity + 4);
    v106 = v105 < 2;
  }
  while ( (int)v105 < 2 );
  v107 = vehicleState->tilt.v[1];
  in1.v[0] = vehicleState->tilt.v[0];
  in1.v[1] = v107;
  in1.v[2] = 0.0;
  MatrixTransposeTransformVector43(&in1, &forward, &out);
  v108 = out.v[1];
  outRotAccel->v[0] = (float)(out.v[0] * VehicleDef->vehHelicopterMaxPitch) + VehicleDef->vehHelicopterPitchOffset;
  outRotAccel->v[2] = v108 * VehicleDef->vehHelicopterMaxRoll;
  v122 = outBodyAccel->v[0];
  if ( (LODWORD(v122) & 0x7F800000) == 2139095040 || (v122 = outBodyAccel->v[1], (LODWORD(v122) & 0x7F800000) == 2139095040) || (v122 = outBodyAccel->v[2], (LODWORD(v122) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 373, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] )") )
      __debugbreak();
  }
  v122 = outRotAccel->v[0];
  if ( (LODWORD(v122) & 0x7F800000) == 2139095040 || (v122 = outRotAccel->v[1], (LODWORD(v122) & 0x7F800000) == 2139095040) || (v122 = outRotAccel->v[2], (LODWORD(v122) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 374, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] )") )
      __debugbreak();
  }
}

/*
==============
BG_HeliCalcTargetMoveRequest
==============
*/
__int64 BG_HeliCalcTargetMoveRequest(const pmove_t *pm, const pml_t *pml, const VehicleState *vehicleState, const int targetEntity, vec4_t *outMoveRequest)
{
  const VehicleDef *VehicleDef; 
  __int64 v10; 
  CgStatic *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v21; 
  float frametime; 
  float v23; 
  float vehHelicopterLookaheadTime; 
  float v28; 
  float v30; 
  float v32; 
  double v35; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t right; 
  float v49; 
  float v50; 
  float v51; 
  char v52; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 456, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 457, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 458, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( targetEntity == 2047 )
    return 0i64;
  VehicleDef = BG_GetVehicleDef(pm);
  if ( !VehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 464, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  v10 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v11 = *(CgStatic **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v10) + 272i64);
  if ( v11->IsClient(v11) )
    CgStatic::GetOrigin(v11, targetEntity, &outOrigin);
  else
    ((void (__fastcall *)(CgStatic *, _QWORD, vec3_t *))v11->GetClientInfo)(v11, (unsigned int)targetEntity, &outOrigin);
  v12 = outOrigin.v[0] - vehicleState->origin.v[0];
  v13 = DCONST_DVARFLT_bg_vehicle_target_min_speed;
  v14 = outOrigin.v[2] - vehicleState->origin.v[2];
  v16 = LODWORD(outOrigin.v[1]);
  *(float *)&v16 = outOrigin.v[1] - vehicleState->origin.v[1];
  v15 = *(float *)&v16;
  if ( !DCONST_DVARFLT_bg_vehicle_target_min_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_target_min_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v17 = vehicleState->velocity.v[1];
  v18 = vehicleState->velocity.v[0];
  v19 = vehicleState->velocity.v[2];
  _XMM6 = 0i64;
  if ( (float)((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19)) > (float)(v13->current.value * v13->current.value) && (float)((float)((float)(v18 * v12) + (float)(*(float *)&v16 * v17)) + (float)(v19 * v14)) < 0.0 )
    return 0i64;
  v21 = DCONST_DVARFLT_bg_vehicle_target_radius;
  if ( !DCONST_DVARFLT_bg_vehicle_target_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_target_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  *(float *)&v16 = (float)(*(float *)&v16 * *(float *)&v16) + (float)(v12 * v12);
  if ( (float)((float)(v14 * v14) + *(float *)&v16) < (float)(v21->current.value * v21->current.value) )
    return 0i64;
  if ( VehicleDef->vehHelicopterMaxAccel == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 482, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxAccel)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxAccel") )
    __debugbreak();
  frametime = pml->frametime;
  v23 = vehicleState->velocity.v[2];
  *(float *)&v16 = fsqrt(*(float *)&v16);
  _XMM1 = v16;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  *(float *)&_XMM1 = 1.0 / *(float *)&_XMM0;
  vehHelicopterLookaheadTime = VehicleDef->vehHelicopterLookaheadTime;
  v28 = v12 * *(float *)&_XMM1;
  _XMM7 = LODWORD(VehicleDef->vehHelicopterMaxAccelVertical);
  v30 = v15 * *(float *)&_XMM1;
  if ( *(float *)&_XMM7 > 0.0 )
  {
    _XMM3 = _XMM7 ^ (unsigned int)_xmm;
    if ( v14 == 0.0 )
    {
      if ( frametime <= 0.0 )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm2
          vblendvps xmm0, xmm3, xmm7, xmm0
        }
        LODWORD(_XMM7) = _XMM0 ^ _xmm;
        goto LABEL_42;
      }
      LODWORD(v32) = COERCE_UNSIGNED_INT(v23 / frametime) ^ _xmm;
    }
    else
    {
      if ( vehHelicopterLookaheadTime <= 0.0 )
      {
        __asm
        {
          vcmpless xmm1, xmm6, xmm8
          vblendvps xmm7, xmm3, xmm7, xmm1
        }
        goto LABEL_42;
      }
      v32 = (float)(v14 / vehHelicopterLookaheadTime) - v23;
    }
    v35 = I_fclamp(v32, COERCE_FLOAT(_XMM7 ^ _xmm), VehicleDef->vehHelicopterMaxAccelVertical);
    *(float *)&_XMM7 = *(float *)&v35 / *(float *)&_XMM7;
    goto LABEL_42;
  }
  LODWORD(_XMM7) = 0;
LABEL_42:
  YawVectors(vehicleState->previousAngles.v[1], &forward, &right);
  v49 = 0.0;
  v50 = 0.0;
  v51 = FLOAT_1_0;
  if ( &v52 == (char *)outMoveRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v37 = v30 * right.v[1];
  v38 = v28 * right.v[0];
  v39 = *(float *)&_XMM7 * right.v[2];
  outMoveRequest->v[0] = (float)((float)(v30 * forward.v[1]) + (float)(v28 * forward.v[0])) + (float)(*(float *)&_XMM7 * forward.v[2]);
  v40 = v37 + v38;
  v41 = v30 * v50;
  v42 = v28 * v49;
  v43 = v40 + v39;
  v44 = *(float *)&_XMM7 * v51;
  outMoveRequest->v[1] = v43;
  outMoveRequest->v[2] = (float)(v41 + v42) + v44;
  outMoveRequest->v[3] = 0.0;
  return 1i64;
}

/*
==============
BG_HeliCmdScale
==============
*/
void BG_HeliCmdScale(bool scaleMovement, const char (*move)[4], vec4_t *outFracs, bool allowDeadzone)
{
  const char (*v8)[4]; 
  int v9; 
  vec4_t *v10; 
  float v11; 
  int v12; 
  float v13; 
  int v14; 
  int v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  __int64 v22; 

  if ( !move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 34, ASSERT_TYPE_ASSERT, "(move)", (const char *)&queryFormat, "move") )
    __debugbreak();
  v8 = move;
  v9 = 0;
  v10 = outFracs;
  do
  {
    v11 = (float)*(_BYTE *)v8 * 0.0078740157;
    if ( (unsigned int)v9 >= 4 )
    {
      LODWORD(v22) = 4;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v10->v[0] = v11;
    v10 = (vec4_t *)((char *)v10 + 4);
    ++v9;
    v8 = (const char (*)[4])((char *)v8 + 1);
  }
  while ( v9 < 4 );
  if ( *(_WORD *)move )
  {
    v12 = (*move)[0];
    v13 = (float)((*move)[1] * (*move)[1] + v12 * v12);
    v14 = abs8(v12);
    v15 = abs8((*move)[1]);
    v16 = fsqrt(v13);
    if ( v15 > v14 )
      v14 = v15;
    if ( v14 )
    {
      v17 = (float)v14 / v16;
      v18 = v17 * outFracs->v[1];
      outFracs->v[0] = v17 * outFracs->v[0];
      outFracs->v[1] = v18;
    }
    if ( allowDeadzone && COERCE_FLOAT(LODWORD(outFracs->v[1]) & _xmm) < 0.30000001 )
      outFracs->v[1] = 0.0;
    if ( scaleMovement )
    {
      LODWORD(v19) = LODWORD(outFracs->v[0]) & _xmm;
      LODWORD(v20) = LODWORD(outFracs->v[1]) & _xmm;
      if ( v19 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 66, ASSERT_TYPE_ASSERT, "(absAxis[0] <= 1.0f)", (const char *)&queryFormat, "absAxis[0] <= 1.0f") )
        __debugbreak();
      if ( v20 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 67, ASSERT_TYPE_ASSERT, "(absAxis[1] <= 1.0f)", (const char *)&queryFormat, "absAxis[1] <= 1.0f") )
        __debugbreak();
      if ( v19 <= v20 )
        outFracs->v[0] = (float)(1.0 - (float)(v20 - v19)) * outFracs->v[0];
      else
        outFracs->v[1] = (float)(1.0 - (float)(v19 - v20)) * outFracs->v[1];
    }
  }
  if ( allowDeadzone )
  {
    if ( COERCE_FLOAT(LODWORD(outFracs->v[2]) & _xmm) < 0.30000001 )
      outFracs->v[2] = 0.0;
    if ( COERCE_FLOAT(LODWORD(outFracs->v[3]) & _xmm) < 0.30000001 )
      outFracs->v[3] = 0.0;
  }
}

/*
==============
BG_HelicopterAirMove
==============
*/
void BG_HelicopterAirMove(pmove_t *pm, const pml_t *pml, VehicleState *vehicleState, vec3_t *inOutAccel)
{
  int VehicleTargetEntity; 
  const VehicleDef *VehicleDef; 
  int clipmask; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  float altitudeMinNormal; 
  double Float_Internal_DebugName; 
  float frametime; 
  const dvar_t *v22; 
  float v23; 
  float vehHelicopterLookaheadTime; 
  float v25; 
  float v26; 
  int entity; 
  __int128 fraction_low; 
  double v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  double v33; 
  double v34; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  int inOutAccela; 
  vec3_t end; 
  vec3_t start; 
  GroundTrace groundTrace; 
  VehicleCollisionInfo outCollisionInfo; 
  trace_t results; 

  VehicleTargetEntity = BG_GetVehicleTargetEntity(pm);
  VehicleDef = BG_GetVehicleDef(pm);
  if ( !VehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 670, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 672, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 673, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( pml->frametime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 674, ASSERT_TYPE_ASSERT, "(pml->frametime)", (const char *)&queryFormat, "pml->frametime") )
    __debugbreak();
  clipmask = vehicleState->clipmask;
  if ( VehicleDef->vehHelicopterLockAltitude )
  {
    if ( VehicleTargetEntity == 2047 )
    {
      v11 = vehicleState->origin.v[2] + VehicleDef->vehHelicopterAltitudeOffset;
      vehicleState->clipmask = 512;
      vehicleState->origin.v[2] = v11;
      if ( VehicleDef->vehHelicopterOffsetFromMesh )
      {
        v12 = DCONST_DVARFLT_bg_helicopter_altitude_min_normal;
        v13 = vehicleState->velocity.v[2];
        if ( !DCONST_DVARFLT_bg_helicopter_altitude_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_min_normal") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 540, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_helicopter_altitude_min_normal, \"bg_helicopter_altitude_min_normal\" ) > 0.0f)", (const char *)&queryFormat, "Dconst_GetFloat( bg_helicopter_altitude_min_normal ) > 0.0f") )
          __debugbreak();
        v14 = DCONST_DVARFLT_bg_helicopter_altitude_min_normal;
        v15 = VehicleDef->vehHelicopterMaxSpeed * VehicleDef->vehHelicopterLookaheadTime;
        if ( !DCONST_DVARFLT_bg_helicopter_altitude_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_min_normal") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        v16 = (float)(1.0 - v14->current.value) / v14->current.value;
        v17 = DCONST_DVARFLT_bg_helicopter_altitude_min_normal;
        v18 = v16 * v15;
        if ( !DCONST_DVARFLT_bg_helicopter_altitude_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_min_normal") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        altitudeMinNormal = v17->current.value;
        BG_HelicopterAltitudeTrace(pm, vehicleState, &groundTrace, pml->frametime);
        if ( groundTrace.validGroundNormal )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_helicopter_altitude_min_normal, "bg_helicopter_altitude_min_normal");
          if ( *(float *)&Float_Internal_DebugName > groundTrace.trace.normal.v[2] )
            Com_PrintError(16, "The normal of the altitude mesh near %f,%f exceeds the maximum allowable slope\n", vehicleState->origin.v[0], vehicleState->origin.v[1]);
        }
        BG_HelicopterSoftenCollision(pm, pml, VehicleDef, vehicleState, v18, inOutAccel, altitudeMinNormal);
        frametime = pml->frametime;
        vehicleState->velocity.v[0] = (float)(frametime * inOutAccel->v[0]) + vehicleState->velocity.v[0];
        vehicleState->velocity.v[1] = (float)(frametime * inOutAccel->v[1]) + vehicleState->velocity.v[1];
        v22 = DCONST_DVARFLT_bg_helicopter_stepsize;
        v23 = pml->frametime;
        if ( !DCONST_DVARFLT_bg_helicopter_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_stepsize") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        BG_VehicleStepSlideMove(pm, vehicleState, &groundTrace, groundTrace.onGround == 0, v22->current.value, v23, 0);
        vehHelicopterLookaheadTime = VehicleDef->vehHelicopterLookaheadTime;
        v25 = pml->frametime;
        if ( vehHelicopterLookaheadTime <= 0.0 )
        {
          v31 = LODWORD(vehicleState->origin.v[2]);
        }
        else
        {
          v26 = (float)(vehHelicopterLookaheadTime * vehicleState->velocity.v[0]) + vehicleState->origin.v[0];
          inOutAccela = vehicleState->clipmask;
          entity = vehicleState->entity;
          end.v[1] = (float)(vehHelicopterLookaheadTime * vehicleState->velocity.v[1]) + vehicleState->origin.v[1];
          start.v[1] = end.v[1];
          start.v[2] = v18 + v11;
          end.v[0] = v26;
          start.v[0] = v26;
          end.v[2] = v11 - v18;
          BG_Vehicle_Trace(pm, &start, &end, &vehicleState->bounds, entity, inOutAccela, &results);
          if ( results.allsolid || results.startsolid || (fraction_low = LODWORD(results.fraction), results.fraction >= 1.0) )
          {
            v31 = LODWORD(vehicleState->origin.v[2]);
            v25 = pml->frametime;
          }
          else
          {
            v29 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_helicopter_altitude_min_normal, "bg_helicopter_altitude_min_normal");
            if ( *(float *)&v29 > results.normal.v[2] )
              Com_PrintError(16, "The normal of the altitude mesh near %f,%f exceeds the maximum allowable slope\n", end.v[0], end.v[1]);
            *(double *)&fraction_low = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_helicopter_altitude_offset, "bg_helicopter_altitude_offset");
            v30 = fraction_low;
            *(float *)&v30 = (float)((float)((float)(*(float *)&fraction_low + (float)((float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2])) - v11) / VehicleDef->vehHelicopterLookaheadTime) * v25;
            v25 = pml->frametime;
            *(float *)&v30 = *(float *)&v30 + v11;
            v31 = v30;
          }
        }
        v32 = v31;
        v33 = I_fclamp((float)((float)((float)(*(float *)&v31 - v11) * (float)(1.0 / v25)) - v13) * (float)(1.0 / v25), COERCE_FLOAT(LODWORD(VehicleDef->vehHelicopterMaxAccelVertical) ^ _xmm), VehicleDef->vehHelicopterMaxAccelVertical);
        v34 = I_fclamp((float)(*(float *)&v33 * pml->frametime) + v13, COERCE_FLOAT(LODWORD(VehicleDef->vehHelicopterMaxSpeedVertical) ^ _xmm), VehicleDef->vehHelicopterMaxSpeedVertical);
        vehicleState->velocity.v[2] = *(float *)&v34;
        *(float *)&v32 = (float)(*(float *)&v34 * pml->frametime) + v11;
        _XMM1 = v32;
        __asm { vmaxss  xmm2, xmm1, dword ptr [rbx+0Ch] }
        vehicleState->origin.v[2] = *(float *)&_XMM2;
      }
      else
      {
        *(_QWORD *)vehicleState->groundNormal.v = 0i64;
        vehicleState->groundNormal.v[2] = 1.0;
        groundTrace.hasGround = 1;
        BG_HelicopterSoftenCollision(pm, pml, VehicleDef, vehicleState, 0.0, inOutAccel, 1.0);
        v37 = pml->frametime;
        vehicleState->velocity.v[0] = (float)(v37 * inOutAccel->v[0]) + vehicleState->velocity.v[0];
        vehicleState->velocity.v[1] = (float)(v37 * inOutAccel->v[1]) + vehicleState->velocity.v[1];
        BG_VehicleSlideMove(pm, vehicleState, &groundTrace, 0, pml->frametime, 0, &outCollisionInfo);
        *(float *)&_XMM2 = vehicleState->origin.v[2];
      }
      vehicleState->origin.v[2] = *(float *)&_XMM2 - VehicleDef->vehHelicopterAltitudeOffset;
      goto LABEL_52;
    }
    goto LABEL_47;
  }
  if ( VehicleTargetEntity != 2047 )
LABEL_47:
    vehicleState->clipmask = 1;
  v38 = pml->frametime;
  v39 = (float)(v38 * inOutAccel->v[0]) + vehicleState->velocity.v[0];
  vehicleState->velocity.v[0] = v39;
  v40 = (float)(v38 * inOutAccel->v[1]) + vehicleState->velocity.v[1];
  vehicleState->velocity.v[1] = v40;
  v41 = (float)(v38 * inOutAccel->v[2]) + vehicleState->velocity.v[2];
  vehicleState->velocity.v[2] = v41;
  if ( v39 != 0.0 || v40 != 0.0 || v41 != 0.0 )
  {
    BG_VehicleGroundTrace(pm, vehicleState, &groundTrace, pml->frametime);
    v42 = groundTrace.trace.normal.v[1];
    vehicleState->groundNormal.v[0] = groundTrace.trace.normal.v[0];
    vehicleState->groundNormal.v[2] = groundTrace.trace.normal.v[2];
    vehicleState->groundNormal.v[1] = v42;
    BG_VehicleSlideMove(pm, vehicleState, &groundTrace, 0, pml->frametime, 0, &outCollisionInfo);
  }
LABEL_52:
  vehicleState->clipmask = clipmask;
}

/*
==============
BG_HelicopterAltitudeTrace
==============
*/
void BG_HelicopterAltitudeTrace(pmove_t *pm, VehicleState *vehicleState, GroundTrace *groundTrace, const float dt)
{
  const dvar_t *v4; 
  float v8; 
  float v9; 
  float v10; 
  int entity; 
  float fraction; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  const dvar_t *v17; 
  int contentMask; 
  vec3_t end; 
  vec3_t start; 

  v4 = DCONST_DVARFLT_bg_helicopter_altitude_offset;
  v8 = vehicleState->origin.v[1];
  start.v[0] = vehicleState->origin.v[0];
  start.v[2] = vehicleState->origin.v[2] + 18.0;
  start.v[1] = v8;
  if ( !DCONST_DVARFLT_bg_helicopter_altitude_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v9 = vehicleState->origin.v[0];
  v10 = vehicleState->origin.v[1];
  contentMask = vehicleState->clipmask;
  entity = vehicleState->entity;
  end.v[2] = (float)(vehicleState->origin.v[2] - 18.0) - v4->current.value;
  end.v[0] = v9;
  end.v[1] = v10;
  BG_Vehicle_Trace(pm, &start, &end, &vehicleState->bounds, entity, contentMask, &groundTrace->trace);
  fraction = groundTrace->trace.fraction;
  if ( groundTrace->trace.fraction >= 1.0 )
  {
    v15 = end.v[1];
    groundTrace->location.v[0] = end.v[0];
    groundTrace->location.v[2] = end.v[2];
    groundTrace->location.v[1] = v15;
  }
  else
  {
    v13 = (float)(end.v[1] - start.v[1]) * fraction;
    v14 = end.v[2] - start.v[2];
    groundTrace->location.v[0] = (float)((float)(end.v[0] - start.v[0]) * fraction) + start.v[0];
    groundTrace->location.v[1] = v13 + start.v[1];
    groundTrace->location.v[2] = (float)(v14 * fraction) + start.v[2];
  }
  if ( fraction < 1.0 )
  {
    vehicleState->groundNormal.v[0] = groundTrace->trace.normal.v[0];
    vehicleState->groundNormal.v[1] = groundTrace->trace.normal.v[1];
    vehicleState->groundNormal.v[2] = groundTrace->trace.normal.v[2];
    groundTrace->hasGround = 1;
    groundTrace->onGround = 1;
    v17 = DCONST_DVARFLT_bg_helicopter_altitude_min_normal;
    if ( !DCONST_DVARFLT_bg_helicopter_altitude_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_min_normal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v16 = v17->current.value <= groundTrace->trace.normal.v[2];
  }
  else
  {
    v16 = 0;
    vehicleState->groundNormal.v[2] = 1.0;
    *(_QWORD *)vehicleState->groundNormal.v = 0i64;
    *(_QWORD *)&groundTrace->onGround = 0i64;
  }
  groundTrace->validGroundNormal = v16;
}

/*
==============
BG_HelicopterHovering
==============
*/
void BG_HelicopterHovering(const pmove_t *pm, const pml_t *pml, const vec4_t *move, VehicleState *vehicleState, vec3_t *outAccel)
{
  bool v7; 
  const dvar_t *v8; 
  bool v9; 
  unsigned int v10; 
  int serverTime; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v16; 
  float v18; 
  __int64 v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float value; 
  float v27; 
  float v28; 
  float v29; 

  v7 = COERCE_FLOAT(LODWORD(move->v[0]) & _xmm) > 0.001 || COERCE_FLOAT(LODWORD(move->v[1]) & _xmm) > 0.001;
  v8 = DCONST_DVARFLT_bg_helicopter_hover_minspeed;
  if ( !DCONST_DVARFLT_bg_helicopter_hover_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_hover_minspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = !v7 && (float)((float)(vehicleState->velocity.v[0] * vehicleState->velocity.v[0]) + (float)(vehicleState->velocity.v[1] * vehicleState->velocity.v[1])) < (float)(v8->current.value * v8->current.value);
  v10 = 0;
  *(_QWORD *)outAccel->v = 0i64;
  outAccel->v[2] = 0.0;
  if ( v9 )
  {
    serverTime = pm->ps->serverTime;
    v12 = cosf_0((float)(serverTime % 137) * 0.023099946);
    v13 = DCONST_DVARFLT_bg_helicopter_hover_cellsize;
    v14 = v12;
    if ( !DCONST_DVARFLT_bg_helicopter_hover_cellsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_hover_cellsize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    _XMM0 = v13->current.unsignedInt;
    v16 = DCONST_DVARINT_bg_helicopter_hover_timealt;
    __asm { vmaxss  xmm4, xmm0, xmm6 }
    *(float *)&_XMM0 = (float)(1.0 / *(float *)&_XMM4) * vehicleState->origin.v[1];
    v27 = (float)((float)(int)(float)((float)(1.0 / *(float *)&_XMM4) * vehicleState->origin.v[0]) + 0.5) * *(float *)&_XMM4;
    v18 = vehicleState->origin.v[2];
    v28 = (float)((float)(int)*(float *)&_XMM0 + 0.5) * *(float *)&_XMM4;
    v29 = v18;
    if ( !DCONST_DVARINT_bg_helicopter_hover_timealt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_hover_timealt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    LOBYTE(v10) = serverTime % v16->current.integer < v16->current.integer / 2;
    v19 = v10;
    v20 = DCONST_DVARFLT_bg_helicopter_hover_scalewind;
    v21 = (float)((float)(int)v19 * 2.0) - 1.0;
    v22 = vehicleState->origin.v[1];
    *(&v27 + v19) = (float)((float)(v14 * 30.0) * (float)(v14 + 2.0)) + *(&v27 + v19);
    v23 = (float)(vehicleState->origin.v[0] - v27) * v21;
    v24 = (float)(vehicleState->origin.v[2] - v29) * v21;
    v25 = (float)(v22 - v28) * v21;
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_hover_scalewind") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    value = v20->current.value;
    outAccel->v[0] = v23 * value;
    outAccel->v[2] = v24 * value;
    outAccel->v[1] = v25 * value;
  }
}

/*
==============
BG_HelicopterSoftenCollision
==============
*/
void BG_HelicopterSoftenCollision(const pmove_t *pm, const pml_t *pml, const VehicleDef *vehicleDef, const VehicleState *vehicleState, const float maxVerticalOffset, vec3_t *inOutAccel, float altitudeMinNormal)
{
  float vehHelicopterLookaheadTime; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  int skipEntity; 
  float v16; 
  float v17; 
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
  int contentMask; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 

  vehHelicopterLookaheadTime = vehicleDef->vehHelicopterLookaheadTime;
  if ( vehHelicopterLookaheadTime != 0.0 )
  {
    v11 = vehicleState->velocity.v[0];
    if ( v11 != 0.0 || 0.0 != vehicleState->velocity.v[1] )
    {
      v12 = vehicleState->origin.v[1];
      v13 = maxVerticalOffset + vehicleState->origin.v[2];
      start.v[0] = vehicleState->origin.v[0];
      v14 = vehHelicopterLookaheadTime * vehicleState->velocity.v[1];
      contentMask = vehicleState->clipmask;
      skipEntity = vehicleState->entity;
      end.v[0] = (float)(v11 * vehHelicopterLookaheadTime) + start.v[0];
      end.v[1] = v14 + v12;
      start.v[1] = v12;
      start.v[2] = v13;
      end.v[2] = v13;
      BG_Vehicle_Trace(pm, &start, &end, &vehicleState->bounds, skipEntity, contentMask, &results);
      if ( !*(_WORD *)&results.allsolid && results.fraction < 1.0 && results.normal.v[2] < altitudeMinNormal )
      {
        v16 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
        v17 = end.v[0] - v16;
        v18 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
        v19 = end.v[1] - v18;
        v20 = (float)(v19 * v19) + (float)(v17 * v17);
        if ( v20 >= 1.0 )
        {
          v21 = inOutAccel->v[0];
          v22 = inOutAccel->v[1];
          v23 = (float)(v17 * inOutAccel->v[0]) + (float)(v19 * v22);
          if ( v23 > 0.0 )
          {
            v22 = (float)((float)(v23 / v20) * v19) + v22;
            v21 = (float)((float)(v23 / v20) * v17) + v21;
            inOutAccel->v[1] = v22;
            inOutAccel->v[0] = v21;
          }
          v24 = 1.0 / vehicleDef->vehHelicopterLookaheadTime;
          v25 = 1.0 / pml->frametime;
          v26 = vehicleState->velocity.v[1];
          v27 = (float)(v18 - vehicleState->origin.v[1]) * v24;
          inOutAccel->v[0] = (float)((float)((float)((float)(v16 - vehicleState->origin.v[0]) * v24) - vehicleState->velocity.v[0]) * v25) + v21;
          inOutAccel->v[1] = (float)((float)(v27 - v26) * v25) + v22;
        }
      }
    }
  }
}

/*
==============
BG_VehicleHelicopterMove
==============
*/
void BG_VehicleHelicopterMove(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  cg_t *LocalClientGlobals; 
  VehicleState vehicleState; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 846, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 847, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 848, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !BG_GetVehicleDef(pm) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 852, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 854, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  memset_0(&vehicleState, 0, sizeof(vehicleState));
  vehicleState.entity = ps->vehicleState.entity;
  vehicleState.clipmask = 41943697;
  vehicleState.origin = ps->vehicleState.origin;
  vehicleState.previousOrigin = ps->vehicleState.origin;
  vehicleState.angles = ps->vehicleState.angles;
  vehicleState.previousAngles = ps->vehicleState.angles;
  vehicleState.velocity = ps->vehicleState.velocity;
  vehicleState.angVelocity = ps->vehicleState.angVelocity;
  vehicleState.tilt = ps->vehicleState.tilt;
  vehicleState.tiltVelocity = ps->vehicleState.tiltVelocity;
  BG_GetVehicleBounds(pm, &vehicleState.bounds);
  BG_Vehicle_DebugTestVehicleCollisionPoint(pm);
  BG_VehicleHelicopterMoveInternal(pm, pml, &vehicleState);
  BG_Vehicle_DebugTestVehicleCollisionPoint(pm);
  pm->ps->vehicleState.origin = vehicleState.origin;
  pm->ps->vehicleState.angles = vehicleState.angles;
  pm->ps->vehicleState.velocity = vehicleState.velocity;
  pm->ps->vehicleState.angVelocity = vehicleState.angVelocity;
  ps->vehicleState.tilt = vehicleState.tilt;
  ps->vehicleState.tiltVelocity = vehicleState.tiltVelocity;
  if ( pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)pm->localClientNum);
    LocalClientGlobals->clientVehicle.acceleration.xyz = vehicleState.acceleration;
  }
}

/*
==============
BG_VehicleHelicopterMoveInternal
==============
*/
void BG_VehicleHelicopterMoveInternal(pmove_t *pm, const pml_t *pml, VehicleState *vehicleState)
{
  float v6; 
  int VehicleTargetEntity; 
  const VehicleDef *VehicleDef; 
  char v9; 
  float v10; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  __int64 move; 
  vec3_t angles; 
  vec3_t outBodyAccel; 
  vec3_t outRotAccel; 
  tmat43_t<vec3_t> forward; 
  vec4_t outMoveRequest; 

  LODWORD(move) = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 783, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm", move) )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 784, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 785, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  v6 = vehicleState->previousAngles.v[1];
  angles.v[0] = 0.0;
  angles.v[1] = v6;
  angles.v[2] = 0.0;
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  forward.m[3].v[0] = 0.0;
  forward.m[3].v[1] = 0.0;
  forward.m[3].v[2] = 0.0;
  MatrixTransposeTransformVector43(&vehicleState->velocity, &forward, &vehicleState->bodyVelocity);
  VehicleTargetEntity = BG_GetVehicleTargetEntity(pm);
  if ( !(unsigned int)BG_HeliCalcTargetMoveRequest(pm, pml, vehicleState, VehicleTargetEntity, &outMoveRequest) )
  {
    pm->ps->vehicleState.targetEntity = 2047;
    LOWORD(move) = *(_WORD *)&pm->cmd.forwardmove;
    VehicleDef = BG_GetVehicleDef(pm);
    if ( !VehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 384, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef", move) )
      __debugbreak();
    if ( VehicleDef->vehHelicopterLockAltitude )
    {
      v9 = 0;
    }
    else
    {
      v9 = (pm->cmd.buttons & 0x10000000000i64) != 0 ? 0 : -127;
      if ( (pm->cmd.buttons & 0x20000000000i64) == 0 )
        v9 = (pm->cmd.buttons & 0x10000000000i64) != 0 ? 0x7F : 0;
    }
    BYTE2(move) = v9;
    BG_HeliCmdScale(1, (const char (*)[4])&move, &outMoveRequest, 1);
  }
  BG_HeliCalcAccel(pm, pml, vehicleState, &outMoveRequest, &outBodyAccel, &outRotAccel);
  v10 = (float)(outRotAccel.v[1] * pml->frametime) + vehicleState->angVelocity.v[1];
  vehicleState->angVelocity.v[1] = v10;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  v13 = outRotAccel.v[0];
  vehicleState->angles.v[1] = (float)((float)((float)((float)(v10 * pml->frametime) + vehicleState->previousAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  v14 = outRotAccel.v[2];
  vehicleState->angles.v[0] = v13;
  vehicleState->angles.v[2] = v14;
  *(float *)&move = vehicleState->angles.v[0];
  if ( (move & 0x7F800000) == 2139095040 || (*(float *)&move = vehicleState->angles.v[1], (move & 0x7F800000) == 2139095040) || (*(float *)&move = v14, (LODWORD(v14) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 820, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicleState->angles )[0] ) && !IS_NAN( ( vehicleState->angles )[1] ) && !IS_NAN( ( vehicleState->angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicleState->angles )[0] ) && !IS_NAN( ( vehicleState->angles )[1] ) && !IS_NAN( ( vehicleState->angles )[2] )", move) )
      __debugbreak();
  }
  angles.v[1] = vehicleState->angles.v[1];
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  forward.m[3].v[0] = 0.0;
  forward.m[3].v[1] = 0.0;
  forward.m[3].v[2] = 0.0;
  v15 = (float)((float)(forward.m[0].v[0] * outBodyAccel.v[0]) + (float)(forward.m[1].v[0] * outBodyAccel.v[1])) + (float)(outBodyAccel.v[2] * forward.m[2].v[0]);
  v16 = (float)((float)(forward.m[0].v[1] * outBodyAccel.v[0]) + (float)(forward.m[1].v[1] * outBodyAccel.v[1])) + (float)(outBodyAccel.v[2] * forward.m[2].v[1]);
  outRotAccel.v[2] = (float)((float)(forward.m[0].v[2] * outBodyAccel.v[0]) + (float)(forward.m[1].v[2] * outBodyAccel.v[1])) + (float)(outBodyAccel.v[2] * forward.m[2].v[2]);
  vehicleState->acceleration.v[2] = outRotAccel.v[2];
  outRotAccel.v[0] = v15;
  outRotAccel.v[1] = v16;
  vehicleState->acceleration.v[0] = v15;
  vehicleState->acceleration.v[1] = v16;
  BG_HelicopterAirMove(pm, pml, vehicleState, &outRotAccel);
}

