/*
==============
CG_PlayerState_InterpolateSlopeProperties
==============
*/

void __fastcall CG_PlayerState_InterpolateSlopeProperties(LocalClientNum_t localClientNum, const playerState_s *const ps)
{
  ?CG_PlayerState_InterpolateSlopeProperties@@YAXW4LocalClientNum_t@@QEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CG_CalcSlopeAnimBlendWeights
==============
*/

void __fastcall CG_CalcSlopeAnimBlendWeights(const cg_t *const cgameGlob, unsigned int walkAnimGroup, float *outBlendWeights, bool *outAnimMissing)
{
  ?CG_CalcSlopeAnimBlendWeights@@YAXQEBVcg_t@@IQEAMQEA_N@Z(cgameGlob, walkAnimGroup, outBlendWeights, outAnimMissing);
}

/*
==============
CG_PlayerState_PMoveSlopeProperties
==============
*/

void __fastcall CG_PlayerState_PMoveSlopeProperties(LocalClientNum_t localClientNum, const pmove_t *const pm, const playerState_s *const ps)
{
  ?CG_PlayerState_PMoveSlopeProperties@@YAXW4LocalClientNum_t@@QEBVpmove_t@@QEBUplayerState_s@@@Z(localClientNum, pm, ps);
}

/*
==============
CG_UpdateSlopeAnimBlends
==============
*/

void __fastcall CG_UpdateSlopeAnimBlends(const LocalClientNum_t localClientNum, const vec3_t *velocity, const bool isOnSlope, const bool isOnStairs, const vec3_t *entityUp, const vec3_t *groundNormal)
{
  ?CG_UpdateSlopeAnimBlends@@YAXW4LocalClientNum_t@@AEBTvec3_t@@_N211@Z(localClientNum, velocity, isOnSlope, isOnStairs, entityUp, groundNormal);
}

/*
==============
CG_CalcSlopeAnimBlendWeights
==============
*/
void CG_CalcSlopeAnimBlendWeights(const cg_t *const cgameGlob, unsigned int walkAnimGroup, float *outBlendWeights, bool *outAnimMissing)
{
  __int64 v7; 
  float slopeAnimBlend; 
  float stairsAnimBlend; 
  float v10; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  char v12; 
  __int64 v13; 
  char *v14; 
  double v15; 
  double v16; 
  double v17; 
  float v18; 
  double v19; 

  v7 = walkAnimGroup;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 59, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !outBlendWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 60, ASSERT_TYPE_ASSERT, "(outBlendWeights)", (const char *)&queryFormat, "outBlendWeights") )
    __debugbreak();
  if ( !outAnimMissing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 61, ASSERT_TYPE_ASSERT, "(outAnimMissing)", (const char *)&queryFormat, "outAnimMissing") )
    __debugbreak();
  slopeAnimBlend = cgameGlob->slopeAnimBlend;
  stairsAnimBlend = cgameGlob->stairsAnimBlend;
  v10 = COERCE_FLOAT(LODWORD(stairsAnimBlend) & _xmm) + COERCE_FLOAT(LODWORD(slopeAnimBlend) & _xmm);
  if ( v10 > 1.0 )
  {
    slopeAnimBlend = (float)(1.0 / v10) * slopeAnimBlend;
    stairsAnimBlend = (float)(1.0 / v10) * stairsAnimBlend;
  }
  if ( cgameGlob == (const cg_t *const)-8i64 )
  {
    p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
    goto LABEL_17;
  }
  p_weapFlags = &cgameGlob->predictedPlayerState.weapCommon.weapFlags;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) )
    goto LABEL_20;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) )
  {
LABEL_17:
    if ( cgameGlob != (const cg_t *const)-8i64 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu) )
      goto LABEL_19;
LABEL_20:
    v12 = 0;
    goto LABEL_21;
  }
LABEL_19:
  v12 = 1;
LABEL_21:
  if ( cgameGlob == (const cg_t *const)-790760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 77, ASSERT_TYPE_ASSERT, "(animArrays)", (const char *)&queryFormat, "animArrays") )
    __debugbreak();
  v13 = 795736i64;
  if ( !v12 )
    v13 = 790760i64;
  v14 = (char *)cgameGlob + v13;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 79, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  *outAnimMissing = *(_QWORD *)&v14[8 * v7] == 0i64;
  outAnimMissing[1] = *(_QWORD *)&v14[8 * (unsigned int)(v7 + 1)] == 0i64;
  outAnimMissing[2] = *(_QWORD *)&v14[8 * (unsigned int)(v7 + 2)] == 0i64;
  outAnimMissing[3] = *(_QWORD *)&v14[8 * (unsigned int)(v7 + 3)] == 0i64;
  outAnimMissing[4] = *(_QWORD *)&v14[8 * (unsigned int)(v7 + 4)] == 0i64;
  *outBlendWeights = 0.0;
  if ( outAnimMissing[1] )
    LODWORD(v15) = 0;
  else
    v15 = I_fclamp(slopeAnimBlend, 0.0, 1.0);
  outBlendWeights[1] = *(float *)&v15;
  if ( outAnimMissing[2] )
    LODWORD(v16) = 0;
  else
    v16 = I_fclamp(COERCE_FLOAT(LODWORD(slopeAnimBlend) ^ _xmm), 0.0, 1.0);
  outBlendWeights[2] = *(float *)&v16;
  if ( outAnimMissing[3] )
    LODWORD(v17) = 0;
  else
    v17 = I_fclamp(stairsAnimBlend, 0.0, 1.0);
  outBlendWeights[3] = *(float *)&v17;
  v18 = 0.0;
  if ( !outAnimMissing[4] )
  {
    v17 = I_fclamp(COERCE_FLOAT(LODWORD(stairsAnimBlend) ^ _xmm), 0.0, 1.0);
    v18 = *(float *)&v17;
    *(float *)&v17 = outBlendWeights[3];
  }
  outBlendWeights[4] = v18;
  v19 = I_fclamp((float)((float)((float)(1.0 - outBlendWeights[1]) - outBlendWeights[2]) - *(float *)&v17) - v18, 0.0, 1.0);
  *outBlendWeights = *(float *)&v19;
}

/*
==============
CG_PlayerState_InterpolateSlopeProperties
==============
*/
void CG_PlayerState_InterpolateSlopeProperties(LocalClientNum_t localClientNum, const playerState_s *const ps)
{
  __int128 v2; 
  __int128 v3; 
  bool v6; 
  bool v7; 
  CgHandler *Handler; 
  EffectiveStance EffectiveStance; 
  const Bounds *v10; 
  float v11; 
  double v12; 
  float v13; 
  float v14; 
  int skipEntity; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  vec3_t outUp; 
  Bounds bounds; 
  vec3_t groundNormal; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 
  WorldUpReferenceFrame v28; 
  __int128 v29; 
  __int128 v30; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !CG_GetLocalClientGlobals(localClientNum)->originInterpolated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 136, ASSERT_TYPE_ASSERT, "(cgameGlob->originInterpolated)", "%s\n\tCG_PlayerState_InterpolateSlopeProperties() should only be executed on an interpolated playerState.", "cgameGlob->originInterpolated") )
    __debugbreak();
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 7u);
  v7 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v28, ps, Handler);
  WorldUpReferenceFrame::GetUpVector(&v28, &outUp);
  groundNormal = outUp;
  if ( v7 || v6 )
  {
    v30 = v2;
    v29 = v3;
    if ( boundsPad > 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 156, ASSERT_TYPE_ASSERT, "( boundsPad ) <= ( 0.0f )", "%s <= %s\n\t%g, %g", "boundsPad", "0.0f", boundsPad, 0.0) )
      __debugbreak();
    EffectiveStance = PM_GetEffectiveStance(ps);
    v10 = BG_Suit_GetBounds(ps->suitIndex, EffectiveStance);
    v11 = boundsPad;
    *(_OWORD *)bounds.midPoint.v = *(_OWORD *)v10->midPoint.v;
    v12 = *(double *)&v10->halfSize.y;
    v13 = _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0];
    bounds.halfSize.v[0] = v13;
    *(double *)&bounds.halfSize.y = v12;
    if ( boundsPad > v13 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 160, ASSERT_TYPE_ASSERT, "( boundsPad ) <= ( bounds.halfSize[0] )", "%s <= %s\n\t%g, %g", "boundsPad", "bounds.halfSize[0]", boundsPad, v13) )
        __debugbreak();
      v11 = boundsPad;
    }
    if ( v11 > bounds.halfSize.v[1] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 161, ASSERT_TYPE_ASSERT, "( boundsPad ) <= ( bounds.halfSize[1] )", "%s <= %s\n\t%g, %g", "boundsPad", "bounds.halfSize[1]", v11, bounds.halfSize.v[1]) )
        __debugbreak();
      v11 = boundsPad;
    }
    v14 = bounds.halfSize.v[2];
    if ( v11 > bounds.halfSize.v[2] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 162, ASSERT_TYPE_ASSERT, "( boundsPad ) <= ( bounds.halfSize[2] )", "%s <= %s\n\t%g, %g", "boundsPad", "bounds.halfSize[2]", v11, bounds.halfSize.v[2]) )
        __debugbreak();
      v11 = boundsPad;
      v14 = bounds.halfSize.v[2];
    }
    bounds.halfSize.v[0] = v11 + bounds.halfSize.v[0];
    bounds.halfSize.v[1] = v11 + bounds.halfSize.v[1];
    skipEntity = ps->clientNum;
    bounds.halfSize.v[2] = v14 + v11;
    start.v[0] = (float)(0.25 * outUp.v[0]) + ps->origin.v[0];
    v16 = (float)(v11 * 2.0) - 0.25;
    start.v[1] = (float)(0.25 * outUp.v[1]) + ps->origin.v[1];
    start.v[2] = (float)(0.25 * outUp.v[2]) + ps->origin.v[2];
    v17 = (float)(v16 * outUp.v[1]) + ps->origin.v[1];
    end.v[0] = (float)(v16 * outUp.v[0]) + ps->origin.v[0];
    end.v[2] = (float)(v16 * outUp.v[2]) + ps->origin.v[2];
    end.v[1] = v17;
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &start, &end, &bounds, skipEntity, 1, 65553, 0, NULL, All);
    if ( !results.allsolid && !results.startsolid && results.fraction < 1.0 )
    {
      v18 = results.normal.v[0];
      v19 = results.normal.v[1];
      v20 = results.normal.v[2];
      v21 = (float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(v20 * v20);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 1.0) & _xmm) >= 0.0020000001 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 178, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( trace.normal ) )", "(%g, %g, %g) len %g", results.normal.v[0], results.normal.v[1], results.normal.v[2], fsqrt(v21)) )
          __debugbreak();
        v18 = results.normal.v[0];
        v19 = results.normal.v[1];
        v20 = results.normal.v[2];
      }
      groundNormal.v[0] = v18;
      groundNormal.v[1] = v19;
      groundNormal.v[2] = v20;
    }
  }
  CG_UpdateSlopeAnimBlends(localClientNum, &ps->velocity, v6, v7, &outUp, &groundNormal);
}

/*
==============
CG_PlayerState_PMoveSlopeProperties
==============
*/
void CG_PlayerState_PMoveSlopeProperties(LocalClientNum_t localClientNum, const pmove_t *const pm, const playerState_s *const ps)
{
  bool v6; 
  bool v7; 
  CgHandler *Handler; 
  BgGroundState *ground; 
  float v10; 
  float v11; 
  float v12; 
  vec3_t groundNormal; 
  vec3_t outUp; 
  WorldUpReferenceFrame v15; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 107, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 108, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 7u);
  v7 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v15, ps, Handler);
  WorldUpReferenceFrame::GetUpVector(&v15, &outUp);
  groundNormal = outUp;
  if ( v6 || v7 )
  {
    ground = pm->ground;
    if ( ground )
    {
      if ( ground->groundPlane )
      {
        v10 = ground->trace.normal.v[0];
        v11 = ground->trace.normal.v[2];
        v12 = (float)((float)(v10 * v10) + (float)(ground->trace.normal.v[1] * ground->trace.normal.v[1])) + (float)(v11 * v11);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 121, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( pm->ground->trace.normal ) )", "(%g, %g, %g) len %g", v10, ground->trace.normal.v[1], v11, fsqrt(v12)) )
          __debugbreak();
        groundNormal = pm->ground->trace.normal;
      }
    }
  }
  CG_UpdateSlopeAnimBlends(localClientNum, &ps->velocity, v6, v7, &outUp, &groundNormal);
}

/*
==============
CG_UpdateSlopeAnimBlends
==============
*/
void CG_UpdateSlopeAnimBlends(const LocalClientNum_t localClientNum, const vec3_t *velocity, const bool isOnSlope, const bool isOnStairs, const vec3_t *entityUp, const vec3_t *groundNormal)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v10; 
  __int128 unsignedInt; 
  const dvar_t *v12; 
  __int128 v13; 
  const dvar_t *v17; 
  unsigned int v18; 
  const dvar_t *v19; 
  unsigned int v20; 
  float v21; 
  double v22; 
  float v23; 
  float v24; 
  double v25; 
  float v26; 
  float outAscentRatio; 
  float outSteepnessRatio[3]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->frametime > 0 )
  {
    v10 = DCONST_DVARFLT_player_slopestairs_blend_min_moveSpeed;
    if ( !DCONST_DVARFLT_player_slopestairs_blend_min_moveSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slopestairs_blend_min_moveSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    unsignedInt = v10->current.unsignedInt;
    v12 = DCONST_DVARFLT_player_slopestairs_blend_max_moveSpeed;
    if ( !DCONST_DVARFLT_player_slopestairs_blend_max_moveSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slopestairs_blend_max_moveSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    *((_QWORD *)&v13 + 1) = *((_QWORD *)&unsignedInt + 1);
    *(double *)&v13 = *(float *)&unsignedInt + 0.000001;
    _XMM0 = v13;
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmaxss  xmm7, xmm1, dword ptr [rdi+28h]
    }
    v17 = DCONST_DVARINT_player_slopestairs_blend_min_moveSpeed_blendTimeMs;
    if ( !DCONST_DVARINT_player_slopestairs_blend_min_moveSpeed_blendTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slopestairs_blend_min_moveSpeed_blendTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = v17->current.unsignedInt;
    v19 = DCONST_DVARINT_player_slopestairs_blend_max_moveSpeed_blendTimeMs;
    if ( !DCONST_DVARINT_player_slopestairs_blend_max_moveSpeed_blendTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slopestairs_blend_max_moveSpeed_blendTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = v19->current.unsignedInt;
    v21 = *(float *)&_XMM7 - *(float *)&unsignedInt;
    v22 = (float)(*(float *)&_XMM7 - *(float *)&unsignedInt);
    if ( v22 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_slope_stairs.cpp", 28, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( (maxSpeed - minSpeed) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "(maxSpeed - minSpeed)", DOUBLE_9_999999974752427eN7, v22) )
      __debugbreak();
    BG_Slope_CalcProperties(velocity, isOnSlope, isOnStairs, entityUp, groundNormal, &outAscentRatio, outSteepnessRatio);
    v23 = 0.0;
    v24 = 0.0;
    if ( isOnStairs )
    {
      v23 = outAscentRatio;
    }
    else if ( isOnSlope )
    {
      v24 = outAscentRatio * outSteepnessRatio[0];
    }
    v25 = I_fclamp((float)(fsqrt((float)((float)(velocity->v[0] * velocity->v[0]) + (float)(velocity->v[1] * velocity->v[1])) + (float)(velocity->v[2] * velocity->v[2])) - *(float *)&unsignedInt) / v21, 0.0, 1.0);
    v26 = (float)((float)((float)(1.0 - *(float *)&v25) * _mm_cvtepi32_ps((__m128i)v18).m128_f32[0]) + (float)(_mm_cvtepi32_ps((__m128i)v20).m128_f32[0] * *(float *)&v25)) / _mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0];
    if ( v26 > 1.0 )
      v23 = (float)(LocalClientGlobals->stairsAnimBlend - (float)((float)(1.0 / v26) * LocalClientGlobals->stairsAnimBlend)) + (float)((float)(1.0 / v26) * v23);
    LocalClientGlobals->stairsAnimBlend = v23;
    if ( v26 > 1.0 )
      v24 = (float)(LocalClientGlobals->slopeAnimBlend - (float)((float)(1.0 / v26) * LocalClientGlobals->slopeAnimBlend)) + (float)((float)(1.0 / v26) * v24);
    LocalClientGlobals->slopeAnimBlend = v24;
  }
}

