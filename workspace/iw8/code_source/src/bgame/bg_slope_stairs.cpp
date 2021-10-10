/*
==============
BG_SlopeWorldmodel_GetBSCoord
==============
*/

void __fastcall BG_SlopeWorldmodel_GetBSCoord(const float legsYaw, const vec3_t *groundNormal, float *outForwardSlope, float *outRightSlope)
{
  ?BG_SlopeWorldmodel_GetBSCoord@@YAXMAEBTvec3_t@@AEAM1@Z(legsYaw, groundNormal, outForwardSlope, outRightSlope);
}

/*
==============
PM_Slope_GetBobCycleScale
==============
*/

void __fastcall PM_Slope_GetBobCycleScale(const pmove_t *pm, float *outStairsAscentRatio, float *outFrequencyScale, float *outAmplitudeScale)
{
  ?PM_Slope_GetBobCycleScale@@YAXPEBVpmove_t@@PEAM11@Z(pm, outStairsAscentRatio, outFrequencyScale, outAmplitudeScale);
}

/*
==============
BG_SlopeWorldmodel_Pack
==============
*/

void __fastcall BG_SlopeWorldmodel_Pack(const vec3_t *slopeNormal, unsigned __int16 *slopePacked)
{
  ?BG_SlopeWorldmodel_Pack@@YAXAEBTvec3_t@@AEAG@Z(slopeNormal, slopePacked);
}

/*
==============
BG_SlopeWorldmodel_Unpack
==============
*/

void __fastcall BG_SlopeWorldmodel_Unpack(const unsigned __int16 *slopePacked, vec3_t *outSlopeNormal)
{
  ?BG_SlopeWorldmodel_Unpack@@YAXAEBGAEATvec3_t@@@Z(slopePacked, outSlopeNormal);
}

/*
==============
PM_SlopeWorldmodel_Update
==============
*/

void __fastcall PM_SlopeWorldmodel_Update(const pmove_t *pm, pml_t *pml)
{
  ?PM_SlopeWorldmodel_Update@@YAXPEBVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Slope_GetSpeedScale
==============
*/

double __fastcall PM_Slope_GetSpeedScale(const vec3_t *wishDir, const pmove_t *pm)
{
  double result; 

  *(float *)&result = ?PM_Slope_GetSpeedScale@@YAMAEBTvec3_t@@PEBVpmove_t@@@Z(wishDir, pm);
  return result;
}

/*
==============
BG_Slope_CalcProperties
==============
*/

void __fastcall BG_Slope_CalcProperties(const vec3_t *wishDir, const bool isOnSlope, const bool isOnStairs, const vec3_t *entityUp, const vec3_t *groundNormal, float *outAscentRatio, float *outSteepnessRatio)
{
  ?BG_Slope_CalcProperties@@YAXAEBTvec3_t@@_N100PEAM2@Z(wishDir, isOnSlope, isOnStairs, entityUp, groundNormal, outAscentRatio, outSteepnessRatio);
}

/*
==============
BG_SlopeWorldmodel_GetZAdjustment
==============
*/

double __fastcall BG_SlopeWorldmodel_GetZAdjustment(const int suitIndex, const vec3_t *slopeNormal)
{
  double result; 

  *(float *)&result = ?BG_SlopeWorldmodel_GetZAdjustment@@YAMHAEBTvec3_t@@@Z(suitIndex, slopeNormal);
  return result;
}

/*
==============
BG_SlopeWorldmodel_GetBSCoord
==============
*/
void BG_SlopeWorldmodel_GetBSCoord(const float legsYaw, const vec3_t *groundNormal, float *outForwardSlope, float *outRightSlope)
{
  float v7; 
  float v8; 
  float v9; 
  tmat33_t<vec3_t> out; 
  char v11; 
  tmat33_t<vec3_t> axis; 

  YawToAxis(legsYaw, &axis);
  MatrixTranspose(&axis, &out);
  if ( groundNormal == (const vec3_t *)&v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v7 = groundNormal->v[1];
  v8 = groundNormal->v[2];
  v9 = (float)((float)(groundNormal->v[0] * out.m[0].v[1]) + (float)(v7 * out.m[1].v[1])) + (float)(v8 * out.m[2].v[1]);
  *outForwardSlope = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(groundNormal->v[0] * out.m[0].v[0]) + (float)(v7 * out.m[1].v[0])) + (float)(v8 * out.m[2].v[0])) ^ _xmm);
  *outRightSlope = v9;
}

/*
==============
BG_SlopeWorldmodel_GetZAdjustment
==============
*/
double BG_SlopeWorldmodel_GetZAdjustment(const int suitIndex, const vec3_t *slopeNormal)
{
  const SuitDef *SuitDef; 
  double v5; 
  float v6; 
  const dvar_t *v7; 

  SuitDef = BG_GetSuitDef(suitIndex);
  if ( !SuitDef )
    return 0.0;
  v5 = I_fclamp((float)((float)(worldUp_2.v[1] * slopeNormal->v[1]) + (float)(worldUp_2.v[0] * slopeNormal->v[0])) + (float)(worldUp_2.v[2] * slopeNormal->v[2]), -1.0, 1.0);
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) >= 0.000001 )
    v6 = (float)(fsqrt(1.0 - (float)(*(float *)&v5 * *(float *)&v5)) * (float)SuitDef->bounds_radius) / *(float *)&v5;
  else
    v6 = 0.0;
  v7 = DCONST_DVARFLT_bg_slope_max_offset;
  if ( !DCONST_DVARFLT_bg_slope_max_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_max_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return I_fclamp(COERCE_FLOAT(LODWORD(v6) ^ _xmm), COERCE_FLOAT(v7->current.integer ^ _xmm), v7->current.value);
}

/*
==============
BG_SlopeWorldmodel_Pack
==============
*/
void BG_SlopeWorldmodel_Pack(const vec3_t *slopeNormal, unsigned __int16 *slopePacked)
{
  float v3; 
  double v6; 
  float v7; 
  int v8; 
  char v9; 
  int v10; 
  vec3_t angles; 

  if ( (float)((float)((float)(slopeNormal->v[0] * slopeNormal->v[0]) + (float)(slopeNormal->v[1] * slopeNormal->v[1])) + (float)(slopeNormal->v[2] * slopeNormal->v[2])) > 1.0e-12 )
  {
    vectoangles(slopeNormal, &angles);
    v3 = angles.v[0];
  }
  else
  {
    v3 = 0.0;
    angles.v[0] = 0.0;
    angles.v[1] = 0.0;
    angles.v[2] = 0.0;
  }
  _XMM2 = 0i64;
  __asm { vroundss xmm4, xmm2, xmm3, 1 }
  v6 = I_fclamp((float)((float)((float)(v3 * 0.0027777778) - *(float *)&_XMM4) * 360.0) + 90.0, 0.0, s_maxWalkablePitchValue);
  v7 = s_maxWalkablePitchValue;
  *slopePacked = 0;
  v8 = MSG_PackUnsignedFloat(*(float *)&v6, v7, 5u);
  v9 = truncate_cast<unsigned short,int>(v8);
  *(float *)&v6 = angles.v[1];
  *slopePacked = (*slopePacked | v9 & 0x1F) << 6;
  v10 = MSG_PackUnsignedFloat(*(float *)&v6, 360.0, 6u);
  *slopePacked |= truncate_cast<unsigned short,int>(v10) & 0x3F;
}

/*
==============
BG_SlopeWorldmodel_Unpack
==============
*/
void BG_SlopeWorldmodel_Unpack(const unsigned __int16 *slopePacked, vec3_t *outSlopeNormal)
{
  unsigned int v2; 
  double v4; 
  float v5; 
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  vec3_t angles; 

  v2 = *slopePacked;
  v4 = MSG_UnpackUnsignedFloat(*slopePacked & 0x3F, 360.0, 6u);
  v5 = *(float *)&v4;
  v6 = MSG_UnpackUnsignedFloat((v2 >> 6) & 0x1F, s_maxWalkablePitchValue, 5u);
  angles.v[2] = 0.0;
  angles.v[0] = *(float *)&v6 - 90.0;
  angles.v[1] = v5;
  AngleVectors(&angles, outSlopeNormal, NULL, NULL);
  v7 = outSlopeNormal->v[1];
  v8 = outSlopeNormal->v[0];
  v9 = outSlopeNormal->v[2];
  v10 = (float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 459, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outSlopeNormal ) )", "(%g, %g, %g) len %g", v8, v7, v9, fsqrt(v10)) )
    __debugbreak();
}

/*
==============
BG_Slope_CalcProperties
==============
*/
void BG_Slope_CalcProperties(const vec3_t *wishDir, const bool isOnSlope, const bool isOnStairs, const vec3_t *entityUp, const vec3_t *groundNormal, float *outAscentRatio, float *outSteepnessRatio)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v13; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  double v23; 
  float v24; 
  const dvar_t *v25; 
  float value; 
  const dvar_t *v27; 
  float v28; 
  float v29; 
  float v31; 
  __int128 v32; 
  float v33; 
  float v34; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  __int128 v52; 
  float v53; 
  float v54; 
  float v55; 
  __int128 v56; 
  float v60; 
  __int64 v61; 
  __int64 v62; 
  vec3_t outProjectedPoint; 
  vec3_t relativePoint; 

  v7 = entityUp->v[1];
  v8 = entityUp->v[0];
  v9 = entityUp->v[2];
  v10 = FLOAT_0_0020000001;
  v13 = (float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 16, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( entityUp ) )", "(%g, %g, %g) len %g", v8, v7, v9, fsqrt(v13)) )
    __debugbreak();
  v16 = groundNormal->v[1];
  v17 = groundNormal->v[0];
  v18 = groundNormal->v[2];
  v19 = (float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 17, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( groundNormal ) )", "(%g, %g, %g) len %g", v17, v16, v18, fsqrt(v19)) )
    __debugbreak();
  if ( !outAscentRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 18, ASSERT_TYPE_ASSERT, "(outAscentRatio)", (const char *)&queryFormat, "outAscentRatio") )
    __debugbreak();
  if ( !outSteepnessRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 19, ASSERT_TYPE_ASSERT, "(outSteepnessRatio)", (const char *)&queryFormat, "outSteepnessRatio") )
    __debugbreak();
  *outAscentRatio = 0.0;
  *outSteepnessRatio = 0.0;
  if ( isOnSlope || isOnStairs )
  {
    v21 = LODWORD(groundNormal->v[0]);
    *(float *)&v21 = (float)((float)(groundNormal->v[0] * entityUp->v[0]) + (float)(groundNormal->v[1] * entityUp->v[1])) + (float)(groundNormal->v[2] * entityUp->v[2]);
    v20 = v21;
    if ( COERCE_FLOAT(v21 & _xmm) < 0.99900001 )
    {
      if ( isOnStairs == isOnSlope )
      {
        LODWORD(v62) = isOnSlope;
        LODWORD(v61) = isOnStairs;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 35, ASSERT_TYPE_ASSERT, "( isOnStairs ) != ( isOnSlope )", "%s != %s\n\t%i, %i", "isOnStairs", "isOnSlope", v61, v62) )
          __debugbreak();
      }
      if ( isOnStairs )
      {
        _XMM0 = LODWORD(FLOAT_1_0);
      }
      else
      {
        v23 = I_fclamp(*(float *)&v21, -1.0, 1.0);
        v24 = acosf_0(*(float *)&v23);
        v25 = DCONST_DVARFLT_player_slope_minAngle;
        if ( !DCONST_DVARFLT_player_slope_minAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_minAngle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        value = v25->current.value;
        v27 = DCONST_DVARFLT_player_slope_maxAngle;
        if ( !DCONST_DVARFLT_player_slope_maxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_maxAngle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        v28 = v27->current.value - value;
        if ( v28 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 45, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( (slopeAngleDegMax - slopeAngleDegMin) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "(slopeAngleDegMax - slopeAngleDegMin)", DOUBLE_9_999999974752427eN7, v28) )
          __debugbreak();
        v29 = (float)((float)(v24 * 57.295776) - value) / v28;
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        *outSteepnessRatio = v29;
        *(double *)&_XMM0 = I_fclamp(v29, 0.0, 1.0);
        v10 = FLOAT_0_0020000001;
      }
      *outSteepnessRatio = *(float *)&_XMM0;
      if ( *(float *)&_XMM0 < 0.0 || *(float *)&_XMM0 > 1.0 )
      {
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 49, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( *outSteepnessRatio ) && ( *outSteepnessRatio ) <= ( 1.0f )", "*outSteepnessRatio not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *outSteepnessRatio, *(double *)&_XMM0, DOUBLE_1_0) )
          __debugbreak();
      }
      v31 = (float)(COERCE_FLOAT(v20 ^ _xmm) * groundNormal->v[0]) + entityUp->v[0];
      v32 = v20 ^ _xmm;
      v33 = (float)(COERCE_FLOAT(v20 ^ _xmm) * groundNormal->v[1]) + entityUp->v[1];
      v34 = (float)(COERCE_FLOAT(v20 ^ _xmm) * groundNormal->v[2]) + entityUp->v[2];
      *(float *)&v32 = fsqrt((float)((float)(v33 * v33) + (float)(v31 * v31)) + (float)(v34 * v34));
      _XMM1 = v32;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm7, xmm0
      }
      v38 = v31 * (float)(1.0 / *(float *)&_XMM0);
      v39 = v33 * (float)(1.0 / *(float *)&_XMM0);
      v40 = v34 * (float)(1.0 / *(float *)&_XMM0);
      v41 = (float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v41 - 1.0) & _xmm) >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 55, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( steepestAscentDir ) )", "(%g, %g, %g) len %g", v38, v39, v40, fsqrt(v41)) )
        __debugbreak();
      v42 = wishDir->v[1];
      v43 = wishDir->v[0];
      v44 = wishDir->v[2];
      v45 = fsqrt((float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)(v44 * v44));
      if ( v45 > 0.001 )
      {
        v46 = (float)(v42 / v45) * groundNormal->v[1];
        v47 = v43 / v45;
        relativePoint.v[1] = v42 / v45;
        v48 = (float)(v43 / v45) * groundNormal->v[0];
        v49 = v44 / v45;
        relativePoint.v[0] = v47;
        v50 = v46 + v48;
        v51 = v49 * groundNormal->v[2];
        relativePoint.v[2] = v49;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v50 + v51) & _xmm) < 0.99900001 )
        {
          ProjectPointOnPlane(&relativePoint, groundNormal, &outProjectedPoint);
          v52 = LODWORD(outProjectedPoint.v[0]);
          v53 = outProjectedPoint.v[1];
          v54 = outProjectedPoint.v[2];
          v55 = (float)((float)(*(float *)&v52 * *(float *)&v52) + (float)(v53 * v53)) + (float)(v54 * v54);
          if ( v55 <= 0.001 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 79, ASSERT_TYPE_ASSERT, "( 0.001f ) < ( Vec3LengthSq( projectedWishDir ) )", "%s < %s\n\t%g, %g", "EQUAL_EPSILON", "Vec3LengthSq( projectedWishDir )", DOUBLE_0_001000000047497451, v55) )
              __debugbreak();
            v52 = LODWORD(outProjectedPoint.v[0]);
            v53 = outProjectedPoint.v[1];
            v54 = outProjectedPoint.v[2];
          }
          v56 = v52;
          *(float *)&v56 = fsqrt((float)((float)(*(float *)&v52 * *(float *)&v52) + (float)(v53 * v53)) + (float)(v54 * v54));
          _XMM3 = v56;
          __asm
          {
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm7, xmm0
          }
          outProjectedPoint.v[1] = v53 * (float)(1.0 / *(float *)&_XMM0);
          outProjectedPoint.v[0] = *(float *)&v52 * (float)(1.0 / *(float *)&_XMM0);
          outProjectedPoint.v[2] = v54 * (float)(1.0 / *(float *)&_XMM0);
          *(double *)&_XMM0 = I_fclamp((float)((float)(v39 * outProjectedPoint.v[1]) + (float)(outProjectedPoint.v[0] * v38)) + (float)(outProjectedPoint.v[2] * v40), -1.0, 1.0);
          v60 = 1.0 - (float)(acosf_0(*(float *)&_XMM0) * 0.63661975);
          *outAscentRatio = v60;
          if ( (v60 < -1.0 || v60 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 88, ASSERT_TYPE_SANITY, "( -1.0f ) <= ( *outAscentRatio ) && ( *outAscentRatio ) <= ( 1.0f )", "*outAscentRatio not in [-1.0f, 1.0f]\n\t%g not in [%g, %g]", v60, DOUBLE_N1_0, DOUBLE_1_0) )
            __debugbreak();
        }
      }
    }
  }
}

/*
==============
PM_SlopeWorldmodel_Update
==============
*/
void PM_SlopeWorldmodel_Update(const pmove_t *pm, pml_t *pml)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  playerState_s *ps; 
  bool v9; 
  bool v10; 
  bool v11; 
  float v12; 
  float v13; 
  float v14; 
  BgGroundState *ground; 
  BgGroundPersistentState *groundPersistent; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float frametime; 
  float v24; 
  __int128 v25; 
  __int128 v26; 
  __m128 v27; 
  double v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  double Float_Internal_DebugName; 
  float v33; 
  float v34; 
  float v35; 
  double v36; 
  __m128 v37; 
  __int128 v42; 
  float v43; 
  __int128 v47; 
  const dvar_t *v60; 
  BgGroundPersistentState *v61; 
  const BgHandler *m_bgHandler; 
  BgGroundPersistentState *v63; 
  float v64; 
  double v67; 
  int v68; 
  unsigned __int16 v69; 
  int v70; 
  char v71; 
  unsigned int v72; 
  double v73; 
  float v74; 
  double v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  const BgHandler *v80; 
  float v81; 
  __int128 v82; 
  vec3_t forward; 
  float v84; 
  float v85; 
  float v86; 
  __int128 v87; 
  __int128 v88; 
  __int128 v89; 
  __int128 v90; 

  if ( pm->groundPersistent )
  {
    ps = pm->ps;
    v89 = v3;
    v88 = v4;
    v87 = v5;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 287, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( pml->ranSlopeUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 288, ASSERT_TYPE_ASSERT, "(!pml->ranSlopeUpdate)", (const char *)&queryFormat, "!pml->ranSlopeUpdate") )
      __debugbreak();
    pml->ranSlopeUpdate = 1;
    v9 = PM_IsInAir(pm);
    v10 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
    if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 294, ASSERT_TYPE_ASSERT, "( pm->ground ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->ground", "nullptr", NULL, NULL) )
      __debugbreak();
    v11 = v9 || v10 || !pm->ground->groundPlane;
    v12 = worldUp_1.v[0];
    v13 = worldUp_1.v[1];
    v14 = worldUp_1.v[2];
    if ( !v11 )
    {
      ground = pm->ground;
      v12 = ground->trace.normal.v[0];
      v13 = ground->trace.normal.v[1];
      v14 = ground->trace.normal.v[2];
    }
    groundPersistent = pm->groundPersistent;
    v17 = FLOAT_0_0020000001;
    v18 = groundPersistent->smoothedNormal.v[1];
    v19 = groundPersistent->smoothedNormal.v[0];
    v20 = groundPersistent->smoothedNormal.v[2];
    v21 = (float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20);
    v22 = fsqrt(v21);
    if ( v22 >= 0.99900001 )
    {
      frametime = pml->frametime;
      v90 = v2;
      if ( frametime > 0.000001 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 315, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( pm->groundPersistent->smoothedNormal ) )", "(%g, %g, %g) len %g", v19, v18, v20, v22) )
          __debugbreak();
        v24 = ps->origin.v[0] - pml->previous_origin.v[0];
        v26 = LODWORD(ps->origin.v[1]);
        *(float *)&v26 = ps->origin.v[1] - pml->previous_origin.v[1];
        v25 = v26;
        *(float *)&v26 = ps->origin.v[2] - pml->previous_origin.v[2];
        v27.m128_u64[1] = 0i64;
        v28 = pml->frametime;
        v29 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v24 * v24)) + (float)(*(float *)&v26 * *(float *)&v26));
        if ( v28 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 318, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( pml->frametime )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "pml->frametime", DOUBLE_9_999999974752427eN7, v28) )
          __debugbreak();
        v30 = DCONST_DVARFLT_bg_slope_blend_movespeed_min_threshold;
        v31 = v29 / pml->frametime;
        if ( !DCONST_DVARFLT_bg_slope_blend_movespeed_min_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_blend_movespeed_min_threshold") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        if ( v31 < v30->current.value )
        {
          v17 = FLOAT_0_0020000001;
        }
        else
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_slope_blend_movespeed_min, "bg_slope_blend_movespeed_min");
          v33 = *(float *)&Float_Internal_DebugName;
          *(double *)v27.m128_u64 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_slope_blend_movespeed_max, "bg_slope_blend_movespeed_max");
          if ( (float)(v27.m128_f32[0] - v33) <= 0.0 )
          {
            v34 = 0.0;
          }
          else
          {
            v27.m128_u64[1] = *((_QWORD *)&v25 + 1);
            v34 = (float)(v31 - v33) / (float)(v27.m128_f32[0] - v33);
          }
          *(double *)v27.m128_u64 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_slope_blend_time_min, "bg_slope_blend_time_min");
          v35 = v27.m128_f32[0];
          *(double *)v27.m128_u64 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_slope_blend_time_max, "bg_slope_blend_time_max");
          v37 = v27;
          v36 = pml->frametime;
          v37.m128_f32[0] = (float)(v27.m128_f32[0] * (float)(1.0 - v34)) + (float)(v35 * v34);
          if ( v36 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 334, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( pml->frametime )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "pml->frametime", DOUBLE_9_999999974752427eN7, v36) )
            __debugbreak();
          v37.m128_f32[0] = v37.m128_f32[0] / pml->frametime;
          v17 = FLOAT_0_0020000001;
          HIDWORD(v82) = 0;
          _RAX = pm->groundPersistent;
          _XMM5 = _mm_shuffle_ps(v37, v37, 0);
          __asm { vrcpps  xmm1, xmm5 }
          v42 = v82;
          *(float *)&v42 = v12;
          _XMM4 = v42;
          v43 = _RAX->smoothedNormal.v[0];
          __asm
          {
            vinsertps xmm4, xmm4, xmm11, 10h
            vinsertps xmm4, xmm4, xmm12, 20h ; ' '
          }
          v82 = (__int128)_XMM4;
          HIDWORD(v82) = 0;
          v47 = v82;
          *(float *)&v47 = v43;
          _XMM3 = v47;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rax+4], 10h
            vinsertps xmm3, xmm3, dword ptr [rax+8], 20h ; ' '
            vcmpleps xmm0, xmm5, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          }
          v82 = (__int128)_XMM3;
          _XMM3 = _mm128_add_ps(_mm128_mul_ps(_XMM4, _XMM1), _mm128_sub_ps(_XMM3, _mm128_mul_ps(_XMM1, _XMM3)));
          __asm { vblendvps xmm5, xmm3, xmm4, xmm0 }
          _XMM2 = _mm128_mul_ps(_XMM5, _XMM5);
          __asm
          {
            vhaddps xmm0, xmm2, xmm2
            vhaddps xmm0, xmm0, xmm0
          }
          if ( _mm_sqrt_ps(_XMM0).m128_f32[0] >= 0.000001 )
          {
            __asm
            {
              vinsertps xmm0, xmm2, xmm2, 8
              vhaddps xmm1, xmm0, xmm0
              vhaddps xmm0, xmm1, xmm1
            }
            _XMM2 = _mm128_div_ps(_XMM5, _mm_sqrt_ps(_XMM0));
            _RAX->smoothedNormal.v[0] = _XMM2.m128_f32[0];
            __asm
            {
              vextractps dword ptr [rax+4], xmm2, 1
              vextractps dword ptr [rax+8], xmm2, 2
            }
          }
        }
      }
    }
    else
    {
      groundPersistent->smoothedNormal.v[0] = v12;
      groundPersistent->smoothedNormal.v[1] = v13;
      groundPersistent->smoothedNormal.v[2] = v14;
    }
    v60 = DCONST_DVARINT_bg_slope_debug;
    if ( !DCONST_DVARINT_bg_slope_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v60);
    if ( v60->current.integer == ps->clientNum && !pm->isExtrapolation && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
    {
      v61 = pm->groundPersistent;
      m_bgHandler = pm->m_bgHandler;
      v84 = (float)(length * v61->smoothedNormal.v[0]) + ps->origin.v[0];
      v85 = (float)(length * v61->smoothedNormal.v[1]) + ps->origin.v[1];
      v86 = (float)(length * v61->smoothedNormal.v[2]) + ps->origin.v[2];
      ((void (__fastcall *)(const BgHandler *, vec3_t *, float *))m_bgHandler->DebugLineAll)(m_bgHandler, &ps->origin, &v84);
      v63 = pm->groundPersistent;
      if ( (float)((float)((float)(v63->smoothedNormal.v[0] * v63->smoothedNormal.v[0]) + (float)(v63->smoothedNormal.v[1] * v63->smoothedNormal.v[1])) + (float)(v63->smoothedNormal.v[2] * v63->smoothedNormal.v[2])) > 1.0e-12 )
      {
        vectoangles(&v63->smoothedNormal, (vec3_t *)&v82);
        v64 = *(float *)&v82;
      }
      else
      {
        v64 = 0.0;
        *(float *)&v82 = 0.0;
        *((float *)&v82 + 1) = 0.0;
        *((float *)&v82 + 2) = 0.0;
      }
      _XMM1 = 0i64;
      __asm { vroundss xmm3, xmm1, xmm2, 1 }
      v67 = I_fclamp((float)((float)((float)(v64 * 0.0027777778) - *(float *)&_XMM3) * 360.0) + 90.0, 0.0, s_maxWalkablePitchValue);
      v68 = MSG_PackUnsignedFloat(*(float *)&v67, s_maxWalkablePitchValue, 5u);
      v69 = truncate_cast<unsigned short,int>(v68);
      v70 = MSG_PackUnsignedFloat(*((float *)&v82 + 1), 360.0, 6u);
      v71 = truncate_cast<unsigned short,int>(v70);
      v69 <<= 6;
      v72 = v69 | v71 & 0x3F;
      v73 = MSG_UnpackUnsignedFloat(v69 & 0x3F | v71 & 0x3Fu, 360.0, 6u);
      v74 = *(float *)&v73;
      v75 = MSG_UnpackUnsignedFloat((v72 >> 6) & 0x1F, s_maxWalkablePitchValue, 5u);
      *(float *)&v82 = *(float *)&v75 - 90.0;
      *((float *)&v82 + 2) = 0.0;
      *((float *)&v82 + 1) = v74;
      AngleVectors((const vec3_t *)&v82, &forward, NULL, NULL);
      v76 = forward.v[0];
      v77 = forward.v[1];
      v78 = forward.v[2];
      v79 = (float)((float)(v76 * v76) + (float)(v77 * v77)) + (float)(v78 * v78);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v79 - 1.0) & _xmm) >= v17 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 459, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outSlopeNormal ) )", "(%g, %g, %g) len %g", forward.v[0], forward.v[1], forward.v[2], fsqrt(v79)) )
          __debugbreak();
        v76 = forward.v[0];
        v77 = forward.v[1];
        v78 = forward.v[2];
      }
      v80 = pm->m_bgHandler;
      v84 = (float)(v76 * length) + ps->origin.v[0];
      v81 = (float)(v77 * length) + ps->origin.v[1];
      v86 = (float)(v78 * length) + ps->origin.v[2];
      v85 = v81;
      ((void (__fastcall *)(const BgHandler *, vec3_t *, float *))v80->DebugLineAll)(v80, &ps->origin, &v84);
    }
  }
}

/*
==============
PM_Slope_BlendAscentAndSteepness
==============
*/

float __fastcall PM_Slope_BlendAscentAndSteepness(double ascentRatio, float steepnessRatio, float levelGroundValue, float upSlopeValue, float lateralSlopeValue, float downSlopeValue)
{
  float v7; 
  float v9; 
  float v10; 

  v7 = *(float *)&ascentRatio;
  if ( steepnessRatio < 0.0 || steepnessRatio > 1.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 140, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( steepnessRatio ) && ( steepnessRatio ) <= ( 1.0f )", "steepnessRatio not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", steepnessRatio, *(double *)&_XMM0, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( (v7 < -1.0 || v7 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 126, ASSERT_TYPE_ASSERT, "( -1.0f ) <= ( ascentRatio ) && ( ascentRatio ) <= ( 1.0f )", "ascentRatio not in [-1.0f, 1.0f]\n\t%g not in [%g, %g]", v7, DOUBLE_N1_0, DOUBLE_1_0) )
    __debugbreak();
  if ( v7 < 0.0 )
  {
    v9 = 1.0 - COERCE_FLOAT(LODWORD(v7) ^ _xmm);
    v10 = COERCE_FLOAT(LODWORD(v7) ^ _xmm) * downSlopeValue;
  }
  else
  {
    v9 = 1.0 - v7;
    v10 = v7 * upSlopeValue;
  }
  return (float)((float)(1.0 - steepnessRatio) * levelGroundValue) + (float)((float)((float)(v9 * lateralSlopeValue) + v10) * steepnessRatio);
}

/*
==============
PM_Slope_CalcProperties
==============
*/
void PM_Slope_CalcProperties(const vec3_t *wishDir, const pmove_t *pm, float *outAscentRatio, float *outSteepnessRatio)
{
  playerState_s *ps; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  bool v10; 
  bool v11; 
  bool v12; 
  BgGroundState *ground; 
  float v14; 
  float v15; 
  float v16; 
  vec3_t outUp; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 94, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 94, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outAscentRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 95, ASSERT_TYPE_ASSERT, "(outAscentRatio)", (const char *)&queryFormat, "outAscentRatio") )
    __debugbreak();
  if ( !outSteepnessRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 96, ASSERT_TYPE_ASSERT, "(outSteepnessRatio)", (const char *)&queryFormat, "outSteepnessRatio") )
    __debugbreak();
  p_pm_flags = &ps->pm_flags;
  *outAscentRatio = 0.0;
  *outSteepnessRatio = 0.0;
  v10 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 7u);
  v11 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 8u);
  v12 = v11;
  if ( v10 || v11 )
  {
    if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 110, ASSERT_TYPE_ASSERT, "( pm->ground ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->ground", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( pm->ground->groundPlane )
    {
      WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
      ground = pm->ground;
      v14 = ground->trace.normal.v[0];
      v15 = ground->trace.normal.v[2];
      v16 = (float)((float)(v14 * v14) + (float)(ground->trace.normal.v[1] * ground->trace.normal.v[1])) + (float)(v15 * v15);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 119, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( pm->ground->trace.normal ) )", "(%g, %g, %g) len %g", v14, ground->trace.normal.v[1], v15, fsqrt(v16)) )
        __debugbreak();
      BG_Slope_CalcProperties(wishDir, v10, v12, &outUp, &pm->ground->trace.normal, outAscentRatio, outSteepnessRatio);
    }
  }
}

/*
==============
PM_Slope_GetBobCycleScale
==============
*/
void PM_Slope_GetBobCycleScale(const pmove_t *pm, float *outStairsAscentRatio, float *outFrequencyScale, float *outAmplitudeScale)
{
  playerState_s *ps; 
  __int64 v9; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  unsigned __int8 v12; 
  bool IsSprinting; 
  const dvar_t *v14; 
  float value; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  const dvar_t *v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 
  const dvar_t *v38; 
  float v39; 
  const dvar_t *v40; 
  float v41; 
  const dvar_t *v42; 
  float v43; 
  const dvar_t *v44; 
  float v45; 
  const dvar_t *v46; 
  float v47; 
  const dvar_t *v48; 
  float v49; 
  const dvar_t *v50; 
  float v51; 
  const dvar_t *v52; 
  float v53; 
  const dvar_t *v54; 
  float v55; 
  const dvar_t *v56; 
  float v57; 
  const dvar_t *v58; 
  float v59; 
  const dvar_t *v60; 
  double v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float downSlopeValue; 
  float outSteepnessRatio; 
  float outAscentRatio; 
  float *v70; 
  float *v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  int v77[19]; 

  v71 = outAmplitudeScale;
  v70 = outFrequencyScale;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 211, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 211, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outStairsAscentRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 212, ASSERT_TYPE_ASSERT, "(outStairsAscentRatio)", (const char *)&queryFormat, "outStairsAscentRatio") )
    __debugbreak();
  if ( !outFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 213, ASSERT_TYPE_ASSERT, "(outFrequencyScale)", (const char *)&queryFormat, "outFrequencyScale") )
    __debugbreak();
  if ( !outAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 214, ASSERT_TYPE_ASSERT, "(outAmplitudeScale)", (const char *)&queryFormat, "outAmplitudeScale") )
    __debugbreak();
  v9 = 0i64;
  *outStairsAscentRatio = 0.0;
  *outFrequencyScale = 1.0;
  *outAmplitudeScale = 1.0;
  v10 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 7u);
  v11 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  v12 = v11;
  if ( v10 )
  {
    if ( v10 == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 226, ASSERT_TYPE_ASSERT, "( isOnSlope ) != ( isOnStairs )", "%s != %s\n\t%i, %i", "isOnSlope", "isOnStairs", v10, v11) )
      __debugbreak();
  }
  else if ( !v11 )
  {
    return;
  }
  IsSprinting = PM_IsSprinting(ps);
  v14 = DCONST_DVARFLT_player_slope_upBobFrequencyScale;
  if ( IsSprinting )
    v9 = 1i64;
  if ( !DCONST_DVARFLT_player_slope_upBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_upBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  value = v14->current.value;
  v16 = DCONST_DVARFLT_player_slope_lateralBobFrequencyScale;
  v72 = value;
  if ( !DCONST_DVARFLT_player_slope_lateralBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_lateralBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v16->current.value;
  v18 = DCONST_DVARFLT_player_slope_downBobFrequencyScale;
  v73 = v17;
  if ( !DCONST_DVARFLT_player_slope_downBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_downBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = v18->current.value;
  v20 = DCONST_DVARFLT_player_slope_upBobAmplitudeScale;
  v74 = v19;
  if ( !DCONST_DVARFLT_player_slope_upBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_upBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v21 = v20->current.value;
  v22 = DCONST_DVARFLT_player_slope_lateralBobAmplitudeScale;
  v75 = v21;
  if ( !DCONST_DVARFLT_player_slope_lateralBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_lateralBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = v22->current.value;
  v24 = DCONST_DVARFLT_player_slope_downBobAmplitudeScale;
  v76 = v23;
  if ( !DCONST_DVARFLT_player_slope_downBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_downBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = v24->current.value;
  v26 = DCONST_DVARFLT_player_stairs_upBobFrequencyScale;
  *(float *)v77 = v25;
  if ( !DCONST_DVARFLT_player_stairs_upBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_upBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v27 = v26->current.value;
  v28 = DCONST_DVARFLT_player_stairs_lateralBobFrequencyScale;
  *(float *)&v77[1] = v27;
  if ( !DCONST_DVARFLT_player_stairs_lateralBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_lateralBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  v29 = v28->current.value;
  v30 = DCONST_DVARFLT_player_stairs_downBobFrequencyScale;
  *(float *)&v77[2] = v29;
  if ( !DCONST_DVARFLT_player_stairs_downBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_downBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = v30->current.value;
  v32 = DCONST_DVARFLT_player_stairs_upBobAmplitudeScale;
  *(float *)&v77[3] = v31;
  if ( !DCONST_DVARFLT_player_stairs_upBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_upBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  v33 = v32->current.value;
  v34 = DCONST_DVARFLT_player_stairs_lateralBobAmplitudeScale;
  *(float *)&v77[4] = v33;
  if ( !DCONST_DVARFLT_player_stairs_lateralBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_lateralBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  v35 = v34->current.value;
  v36 = DCONST_DVARFLT_player_stairs_downBobAmplitudeScale;
  *(float *)&v77[5] = v35;
  if ( !DCONST_DVARFLT_player_stairs_downBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_downBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  v37 = v36->current.value;
  v38 = DCONST_DVARFLT_player_slope_sprint_upBobFrequencyScale;
  *(float *)&v77[6] = v37;
  if ( !DCONST_DVARFLT_player_slope_sprint_upBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_upBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  v39 = v38->current.value;
  v40 = DCONST_DVARFLT_player_slope_sprint_lateralBobFrequencyScale;
  *(float *)&v77[7] = v39;
  if ( !DCONST_DVARFLT_player_slope_sprint_lateralBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_lateralBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  v41 = v40->current.value;
  v42 = DCONST_DVARFLT_player_slope_sprint_downBobFrequencyScale;
  *(float *)&v77[8] = v41;
  if ( !DCONST_DVARFLT_player_slope_sprint_downBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_downBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v43 = v42->current.value;
  v44 = DCONST_DVARFLT_player_slope_sprint_upBobAmplitudeScale;
  *(float *)&v77[9] = v43;
  if ( !DCONST_DVARFLT_player_slope_sprint_upBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_upBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  v45 = v44->current.value;
  v46 = DCONST_DVARFLT_player_slope_sprint_lateralBobAmplitudeScale;
  *(float *)&v77[10] = v45;
  if ( !DCONST_DVARFLT_player_slope_sprint_lateralBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_lateralBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  v47 = v46->current.value;
  v48 = DCONST_DVARFLT_player_slope_sprint_downBobAmplitudeScale;
  *(float *)&v77[11] = v47;
  if ( !DCONST_DVARFLT_player_slope_sprint_downBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_downBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  v49 = v48->current.value;
  v50 = DCONST_DVARFLT_player_stairs_sprint_upBobFrequencyScale;
  *(float *)&v77[12] = v49;
  if ( !DCONST_DVARFLT_player_stairs_sprint_upBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_upBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  v51 = v50->current.value;
  v52 = DCONST_DVARFLT_player_stairs_sprint_lateralBobFrequencyScale;
  *(float *)&v77[13] = v51;
  if ( !DCONST_DVARFLT_player_stairs_sprint_lateralBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_lateralBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  v53 = v52->current.value;
  v54 = DCONST_DVARFLT_player_stairs_sprint_downBobFrequencyScale;
  *(float *)&v77[14] = v53;
  if ( !DCONST_DVARFLT_player_stairs_sprint_downBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_downBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  v55 = v54->current.value;
  v56 = DCONST_DVARFLT_player_stairs_sprint_upBobAmplitudeScale;
  *(float *)&v77[15] = v55;
  if ( !DCONST_DVARFLT_player_stairs_sprint_upBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_upBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  v57 = v56->current.value;
  v58 = DCONST_DVARFLT_player_stairs_sprint_lateralBobAmplitudeScale;
  *(float *)&v77[16] = v57;
  if ( !DCONST_DVARFLT_player_stairs_sprint_lateralBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_lateralBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  v59 = v58->current.value;
  v60 = DCONST_DVARFLT_player_stairs_sprint_downBobAmplitudeScale;
  *(float *)&v77[17] = v59;
  if ( !DCONST_DVARFLT_player_stairs_sprint_downBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_downBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  v77[18] = v60->current.integer;
  PM_Slope_CalcProperties(&ps->velocity, pm, &outAscentRatio, &outSteepnessRatio);
  *(_QWORD *)&v61 = LODWORD(outAscentRatio);
  if ( v12 )
    *outStairsAscentRatio = outAscentRatio;
  v62 = PM_Slope_BlendAscentAndSteepness(v61, outSteepnessRatio, 1.0, *(&v72 + 12 * v9 + 6 * v12), *(&v73 + 12 * v9 + 6 * v12), *(&v74 + 12 * v9 + 6 * v12));
  v63 = *(float *)&v77[12 * v9 - 1 + 6 * v12];
  v64 = outSteepnessRatio;
  downSlopeValue = *(float *)&v77[12 * v9 + 6 * v12];
  v65 = *(&v75 + 12 * v9 + 6 * v12);
  *v70 = v62;
  v66 = PM_Slope_BlendAscentAndSteepness(v61, v64, 1.0, v65, v63, downSlopeValue);
  *v71 = v66;
}

/*
==============
PM_Slope_GetSpeedScale
==============
*/
float PM_Slope_GetSpeedScale(const vec3_t *wishDir, const pmove_t *pm)
{
  playerState_s *ps; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  unsigned __int8 v6; 
  bool v7; 
  unsigned __int8 v8; 
  const dvar_t *v10; 
  float downSlopeValue; 
  const dvar_t *v12; 
  float value; 
  const dvar_t *v14; 
  const char *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  float outSteepnessRatio; 
  float outAscentRatio; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 149, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 149, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_pm_flags = &ps->pm_flags;
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 7u);
  v7 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 8u);
  v8 = v7;
  if ( !v6 && !v7 )
    return FLOAT_1_0;
  PM_Slope_CalcProperties(wishDir, pm, &outAscentRatio, &outSteepnessRatio);
  if ( v6 == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 163, ASSERT_TYPE_ASSERT, "( isOnSlope ) != ( isOnStairs )", "%s != %s\n\t%i, %i", "isOnSlope", "isOnStairs", v6, v8) )
    __debugbreak();
  if ( v6 )
  {
    v10 = DCONST_DVARFLT_player_slope_downSpeedScale;
    if ( !DCONST_DVARFLT_player_slope_downSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_downSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    downSlopeValue = v10->current.value;
    v12 = DCONST_DVARFLT_player_slope_lateralSpeedScale;
    if ( !DCONST_DVARFLT_player_slope_lateralSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_lateralSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    value = v12->current.value;
    v14 = DCONST_DVARFLT_player_slope_upSpeedScale;
    if ( DCONST_DVARFLT_player_slope_upSpeedScale )
      goto LABEL_32;
    v15 = "player_slope_upSpeedScale";
  }
  else
  {
    v16 = DCONST_DVARFLT_player_stairs_downSpeedScale;
    if ( !DCONST_DVARFLT_player_stairs_downSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_downSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    downSlopeValue = v16->current.value;
    v17 = DCONST_DVARFLT_player_stairs_lateralSpeedScale;
    if ( !DCONST_DVARFLT_player_stairs_lateralSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_lateralSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    value = v17->current.value;
    v14 = DCONST_DVARFLT_player_stairs_upSpeedScale;
    if ( DCONST_DVARFLT_player_stairs_upSpeedScale )
      goto LABEL_32;
    v15 = "player_stairs_upSpeedScale";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v15) )
    __debugbreak();
LABEL_32:
  Dvar_CheckFrontendServerThread(v14);
  return PM_Slope_BlendAscentAndSteepness(COERCE_DOUBLE((unsigned __int64)LODWORD(outAscentRatio)), outSteepnessRatio, 1.0, v14->current.value, value, downSlopeValue);
}

