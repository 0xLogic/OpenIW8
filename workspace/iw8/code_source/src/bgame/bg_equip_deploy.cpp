/*
==============
BG_Deploy_TestLocation
==============
*/

bool __fastcall BG_Deploy_TestLocation(const BgHandler *pmoveHandler, Physics_WorldId worldId, const playerState_s *ps, const vec3_t *viewOrigin, const tmat33_t<vec3_t> *playerViewAxis, const WeaponDef *weapDef, DeployTestResults *outResults)
{
  return ?BG_Deploy_TestLocation@@YA_NPEBVBgHandler@@W4Physics_WorldId@@PEBUplayerState_s@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@PEBUWeaponDef@@PEAUDeployTestResults@@@Z(pmoveHandler, worldId, ps, viewOrigin, playerViewAxis, weapDef, outResults);
}

/*
==============
BG_Deploy_ComputeFXOffset
==============
*/

void __fastcall BG_Deploy_ComputeFXOffset(float playerZ, float desiredHeightOffset, const tmat43_t<vec3_t> *transform, vec3_t *outFxOffset)
{
  ?BG_Deploy_ComputeFXOffset@@YAXMMAEBT?$tmat43_t@Tvec3_t@@@@AEATvec3_t@@@Z(playerZ, desiredHeightOffset, transform, outFxOffset);
}

/*
==============
DeployTestResults::DeployTestResults
==============
*/

void __fastcall DeployTestResults::DeployTestResults(DeployTestResults *this)
{
  ??0DeployTestResults@@QEAA@XZ(this);
}

/*
==============
DeployTestResults::DeployTestResults
==============
*/
void DeployTestResults::DeployTestResults(DeployTestResults *this)
{
  *(_DWORD *)&this->passRangeTest = 0;
  *(_WORD *)&this->passMaterialTest = 0;
  this->hitEntityNum = 2047;
  *(_QWORD *)this->equipBounds.midPoint.v = 0i64;
  this->equipBounds.midPoint.v[2] = 0.0;
  this->equipBounds.halfSize.v[0] = -3.4028235e38;
  this->equipBounds.halfSize.v[1] = -3.4028235e38;
  this->equipBounds.halfSize.v[2] = -3.4028235e38;
  MatrixSet43(&this->transform, &vec3_origin, &identityMatrix33, 1.0);
}

/*
==============
BG_Deploy_CalcTestPoint
==============
*/
bool BG_Deploy_CalcTestPoint(const vec3_t *viewOrigin, const tmat33_t<vec3_t> *viewAxis, const playerState_s *ps, const WeaponDef *weapDef, const Physics_WorldId worldId, const int traceMask, vec3_t *outTestPoint, trace_t *outTrace)
{
  DeployType deployType; 
  float v13; 
  float v14; 
  float v15; 
  float deployMaxDistance; 
  int *p_clientNum; 
  float fraction; 
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
  float v29; 
  bool v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  const dvar_t *v38; 
  DeployType skipEntities; 
  int skipEntityCount; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t up; 

  if ( weapDef->deployType >= (unsigned int)COUNT )
  {
    skipEntityCount = 2;
    skipEntities = weapDef->deployType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 282, ASSERT_TYPE_ASSERT, "(unsigned)( weapDef->deployType ) < (unsigned)( DeployType::COUNT )", "weapDef->deployType doesn't index DeployType::COUNT\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
      __debugbreak();
  }
  deployType = weapDef->deployType;
  if ( deployType && deployType == DODGE )
  {
    v13 = ps->viewangles.v[1];
    v14 = viewOrigin->v[2];
    v15 = ps->origin.v[2];
    angles.v[0] = 0.0;
    angles.v[1] = v13;
    angles.v[2] = 0.0;
    AngleVectors(&angles, &forward, NULL, &up);
    deployMaxDistance = weapDef->deployMaxDistance;
    p_clientNum = &ps->clientNum;
    end.v[0] = (float)(deployMaxDistance * forward.v[0]) + viewOrigin->v[0];
    end.v[1] = (float)(deployMaxDistance * forward.v[1]) + viewOrigin->v[1];
    end.v[2] = (float)(deployMaxDistance * forward.v[2]) + viewOrigin->v[2];
    PhysicsQuery_LegacyTraceSkipEntities(worldId, outTrace, viewOrigin, &end, &bounds_origin, p_clientNum, 1, 1, traceMask, 0, NULL, All);
    fraction = outTrace->fraction;
    v19 = end.v[1];
    v20 = (float)((float)(end.v[0] - viewOrigin->v[0]) * outTrace->fraction) + viewOrigin->v[0];
    outTestPoint->v[0] = v20;
    v21 = v19 - viewOrigin->v[1];
    v22 = end.v[2];
    v23 = (float)(v21 * fraction) + viewOrigin->v[1];
    outTestPoint->v[1] = v23;
    v24 = (float)((float)(v22 - viewOrigin->v[2]) * fraction) + viewOrigin->v[2];
    outTestPoint->v[2] = v24;
    v25 = outTrace->fraction;
    if ( outTrace->fraction >= 1.0 )
    {
      v26 = (float)(v15 - v14) - belowDist;
      end.v[0] = (float)(v26 * up.v[0]) + v20;
      end.v[1] = (float)(v26 * up.v[1]) + v23;
      end.v[2] = (float)(v26 * up.v[2]) + v24;
      PhysicsQuery_LegacyTraceSkipEntities(worldId, outTrace, outTestPoint, &end, &bounds_origin, p_clientNum, 1, 1, traceMask, 0, NULL, All);
      v27 = outTrace->fraction;
      v28 = (float)(end.v[1] - outTestPoint->v[1]) * outTrace->fraction;
      v29 = end.v[2] - outTestPoint->v[2];
      outTestPoint->v[0] = (float)((float)(end.v[0] - outTestPoint->v[0]) * outTrace->fraction) + outTestPoint->v[0];
      outTestPoint->v[1] = v28 + outTestPoint->v[1];
      outTestPoint->v[2] = (float)(v29 * v27) + outTestPoint->v[2];
      v25 = outTrace->fraction;
    }
    if ( v25 >= 1.0 || (outTrace->contents & 0x800) != 0 )
      return 0;
    v30 = !Dvar_GetBool_Internal_DebugName(DVARBOOL_deploy_allowInWater, "deploy_allowInWater");
  }
  else
  {
    v31 = weapDef->deployMaxDistance;
    v32 = v31 * viewAxis->m[0].v[1];
    end.v[0] = (float)(v31 * viewAxis->m[0].v[0]) + viewOrigin->v[0];
    v33 = v31 * viewAxis->m[0].v[2];
    end.v[1] = v32 + viewOrigin->v[1];
    end.v[2] = v33 + viewOrigin->v[2];
    PhysicsQuery_LegacyTraceSkipEntities(worldId, outTrace, viewOrigin, &end, &bounds_origin, &ps->clientNum, 1, 1, traceMask, 0, NULL, All);
    v34 = outTrace->fraction;
    v35 = end.v[1];
    outTestPoint->v[0] = (float)((float)(end.v[0] - viewOrigin->v[0]) * outTrace->fraction) + viewOrigin->v[0];
    v36 = v35 - viewOrigin->v[1];
    v37 = end.v[2];
    outTestPoint->v[1] = (float)(v36 * v34) + viewOrigin->v[1];
    outTestPoint->v[2] = (float)((float)(v37 - viewOrigin->v[2]) * v34) + viewOrigin->v[2];
    if ( outTrace->fraction >= 1.0 || (outTrace->contents & 0x800) != 0 )
      return 0;
    v38 = DVARBOOL_deploy_allowInWater;
    if ( !DVARBOOL_deploy_allowInWater && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_allowInWater") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v30 = !v38->current.enabled;
  }
  return !v30 || (outTrace->contents & 0x20) == 0;
}

/*
==============
BG_Deploy_ComputeFXOffset
==============
*/
void BG_Deploy_ComputeFXOffset(float playerZ, float desiredHeightOffset, const tmat43_t<vec3_t> *transform, vec3_t *outFxOffset)
{
  __int128 v5; 

  outFxOffset->v[2] = 0.0;
  *(_QWORD *)outFxOffset->v = 0i64;
  v5 = LODWORD(transform->m[3].v[2]);
  *(float *)&v5 = transform->m[3].v[2] - playerZ;
  _XMM0 = v5;
  __asm { vcmpltss xmm3, xmm0, cs:THRESHOLD_TO_CONSIDER_ON_GROUND }
  _XMM0 = LODWORD(outFxOffset->v[2]);
  __asm { vblendvps xmm1, xmm0, xmm1, xmm3 }
  outFxOffset->v[2] = *(float *)&_XMM1;
}

/*
==============
BG_Deploy_EdgeSnap
==============
*/
char BG_Deploy_EdgeSnap(const BgHandler *pmoveHandler, const playerState_s *ps, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const WeaponDef *weapDef, vec3_t *outPos, tmat33_t<vec3_t> *outAxis)
{
  const dvar_t *v7; 
  float value; 
  DeployType deployType; 
  float v14; 
  DeployType v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  float v26; 
  EdgeId v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  DeployType v32; 
  float v33; 
  float v34; 
  float v35; 
  double v36; 
  const dvar_t *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float *v48; 
  float v49; 
  float v50; 
  float v51; 
  __int64 farHalfWidth; 
  __int64 farHalfWidtha; 
  __int64 farHalfHeight; 
  __int64 farHalfHeighta; 
  unsigned __int64 outResultCount; 
  vec3_t *v57; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v58; 
  vec3_t outBelow; 
  vec3_t outEdgePoint; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t up; 
  vec3_t farCenterPoint; 
  vec3_t nearCenterPoint; 
  vec3_t clipPlaneNormals; 
  vec3_t clipPlanePoints; 
  vec3_t outNormal; 
  vec3_t outParallel; 
  EdgeOctreeQueryFrustum v70; 
  float resultFractionPool[6]; 
  float resultDistancePool[6]; 
  EdgeId resultIdPool[6]; 

  v7 = DCONST_DVARFLT_deploy_offsetForwardOnEdge;
  v57 = outPos;
  if ( !DCONST_DVARFLT_deploy_offsetForwardOnEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_offsetForwardOnEdge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  deployType = weapDef->deployType;
  v14 = edgeMaxDistFactor * weapDef->deployMaxDistance;
  outResultCount = 0i64;
  if ( (unsigned int)deployType >= COUNT )
  {
    LODWORD(farHalfHeight) = 2;
    LODWORD(farHalfWidth) = deployType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 154, ASSERT_TYPE_ASSERT, "(unsigned)( weapDef->deployType ) < (unsigned)( DeployType::COUNT )", "weapDef->deployType doesn't index DeployType::COUNT\n\t%i not in [0, %i)", farHalfWidth, farHalfHeight) )
      __debugbreak();
  }
  v15 = weapDef->deployType;
  if ( v15 && v15 == DODGE )
  {
    v16 = ps->viewangles.v[1];
    angles.v[0] = 0.0;
    angles.v[1] = v16;
    angles.v[2] = 0.0;
    AngleVectors(&angles, &forward, NULL, &up);
    v17 = forward.v[2];
    v18 = forward.v[1];
    v19 = forward.v[0];
  }
  else
  {
    v19 = axis->m[0].v[0];
    v18 = axis->m[0].v[1];
    v17 = axis->m[0].v[2];
    v20 = axis->m[2].v[1];
    up.v[0] = axis->m[2].v[0];
    up.v[2] = axis->m[2].v[2];
    forward.v[0] = v19;
    forward.v[1] = v18;
    forward.v[2] = v17;
    up.v[1] = v20;
  }
  nearCenterPoint.v[0] = (float)(v19 * frustumNearDist) + origin->v[0];
  nearCenterPoint.v[1] = (float)(v18 * frustumNearDist) + origin->v[1];
  nearCenterPoint.v[2] = (float)(v17 * frustumNearDist) + origin->v[2];
  farCenterPoint.v[0] = (float)(v19 * v14) + origin->v[0];
  v21 = (float)(v18 * v14) + origin->v[1];
  farCenterPoint.v[2] = (float)(v17 * v14) + origin->v[2];
  farCenterPoint.v[1] = v21;
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v70, &nearCenterPoint, frustumHalfWidthNear, frustumHalfHeightNear, &farCenterPoint, frustumHalfWidthFar, frustumHalfHeightFar, &up);
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v70, queryBiasCenterline);
  EdgeOctreeQueryFrustum::SetAxisBias(&v70, &identityMatrix33.m[2], queryBiasUp);
  LODWORD(clipPlaneNormals.v[1]) = LODWORD(identityMatrix33.m[2].v[1]) ^ _xmm;
  v22 = weapDef->deployMaxHeightAboveEye + origin->v[2];
  LODWORD(clipPlaneNormals.v[0]) = LODWORD(identityMatrix33.m[2].v[0]) ^ _xmm;
  LODWORD(clipPlaneNormals.v[2]) = LODWORD(identityMatrix33.m[2].v[2]) ^ _xmm;
  v23 = (float)(0.0 * v22) + ps->origin.v[1];
  clipPlanePoints.v[0] = (float)(0.0 * v22) + ps->origin.v[0];
  clipPlanePoints.v[2] = (float)(1.0 * v22) + ps->origin.v[2];
  clipPlanePoints.v[1] = v23;
  EdgeOctreeQueryShape::SetUserClipPlanes(&v70, 1ui64, &clipPlanePoints, &clipPlaneNormals);
  v58.m_bucket = queryDbType;
  v58.m_queryShape = &v70;
  v58.m_hint = 16777208;
  v58.m_flags = 1;
  EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v58, pmoveHandler, resultIdPool, resultFractionPool, resultDistancePool, 6ui64, &outResultCount, NULL);
  v24 = 0i64;
  v25 = maxEdgeCandidates;
  if ( maxEdgeCandidates > outResultCount )
    v25 = outResultCount;
  outResultCount = v25;
  v26 = edgeMinLength * edgeMinLength;
  if ( !v25 )
    return 0;
  while ( 1 )
  {
    v27 = resultIdPool[v24];
    v28 = resultFractionPool[v24];
    Edge_CalculateVectors(pmoveHandler, v27, v28, &identityMatrix33.m[2], axis, &outNormal, &outParallel, &outBelow);
    v29 = COERCE_FLOAT(LODWORD(outBelow.v[1]) ^ _xmm) * 0.0;
    LODWORD(outBelow.v[1]) ^= _xmm;
    v30 = COERCE_FLOAT(LODWORD(outBelow.v[0]) ^ _xmm) * 0.0;
    LODWORD(outBelow.v[0]) ^= _xmm;
    v31 = (float)(v29 + v30) + (float)(COERCE_FLOAT(LODWORD(outBelow.v[2]) ^ _xmm) * 1.0);
    LODWORD(outBelow.v[2]) ^= _xmm;
    if ( (float)(1.0 - v31) <= cosThresholdVerticality )
    {
      Edge_CalculatePoint(pmoveHandler, v27, v28, &outEdgePoint);
      if ( weapDef->deployType >= (unsigned int)COUNT )
      {
        LODWORD(farHalfHeighta) = 2;
        LODWORD(farHalfWidtha) = weapDef->deployType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( weapDef->deployType ) < (unsigned)( DeployType::COUNT )", "weapDef->deployType doesn't index DeployType::COUNT\n\t%i not in [0, %i)", farHalfWidtha, farHalfHeighta) )
          __debugbreak();
      }
      v32 = weapDef->deployType;
      if ( v32 && v32 == DODGE )
      {
        ProjectPointOnPlane(&outEdgePoint, origin, &up, &angles);
        v33 = angles.v[0] - origin->v[0];
        v34 = angles.v[2];
        v35 = angles.v[1];
      }
      else
      {
        v33 = outEdgePoint.v[0] - origin->v[0];
        v34 = outEdgePoint.v[2];
        v35 = outEdgePoint.v[1];
      }
      if ( (float)((float)((float)((float)(v35 - origin->v[1]) * (float)(v35 - origin->v[1])) + (float)(v33 * v33)) + (float)((float)(v34 - origin->v[2]) * (float)(v34 - origin->v[2]))) <= (float)(v14 * v14) )
      {
        v36 = Edge_CalculateLengthSq(v27);
        if ( *(float *)&v36 >= v26 )
          break;
      }
    }
    if ( ++v24 >= outResultCount )
      return 0;
  }
  v38 = DCONST_DVARBOOL_deploy_debug;
  if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( v38->current.enabled )
    ((void (__fastcall *)(const BgHandler *, __int64, EdgeId *, float *, float *, _DWORD, _DWORD))pmoveHandler->DebugEdgeQueryResults)(pmoveHandler, 1i64, &resultIdPool[v24], &resultFractionPool[v24], &resultDistancePool[v24], LODWORD(weapDef->deployMaxDistance), 0);
  v39 = outNormal.v[1];
  outAxis->m[0].v[0] = COERCE_FLOAT(LODWORD(outNormal.v[0]) ^ _xmm);
  LODWORD(v40) = LODWORD(v39) ^ _xmm;
  v41 = outNormal.v[2];
  outAxis->m[0].v[1] = v40;
  LODWORD(v42) = LODWORD(v41) ^ _xmm;
  v43 = outParallel.v[0];
  outAxis->m[0].v[2] = v42;
  v44 = outParallel.v[1];
  outAxis->m[1].v[0] = v43;
  v45 = outParallel.v[2];
  outAxis->m[1].v[1] = v44;
  v46 = outBelow.v[0];
  outAxis->m[1].v[2] = v45;
  v47 = outBelow.v[1];
  outAxis->m[2].v[0] = v46;
  outAxis->m[2].v[2] = outBelow.v[2];
  outAxis->m[2].v[1] = v47;
  GenerateAxisFromUpVector(&identityMatrix33.m[2], outAxis, outAxis);
  v48 = (float *)v57;
  v49 = (float)(edgeSnapCylPosOffset * outBelow.v[0]) + outEdgePoint.v[0];
  v50 = (float)(edgeSnapCylPosOffset * outBelow.v[1]) + outEdgePoint.v[1];
  v51 = (float)(edgeSnapCylPosOffset * outBelow.v[2]) + outEdgePoint.v[2];
  v57->v[2] = v51;
  *v48 = v49;
  v48[1] = v50;
  *v48 = (float)(value * outAxis->m[0].v[0]) + v49;
  v48[1] = (float)(value * outAxis->m[0].v[1]) + v50;
  v48[2] = (float)(value * outAxis->m[0].v[2]) + v51;
  return 1;
}

/*
==============
BG_Deploy_IsTraceContentsValid
==============
*/
char BG_Deploy_IsTraceContentsValid(const trace_t *r_trace)
{
  const dvar_t *v1; 
  int v3; 
  int contents; 
  __int64 v5; 

  v1 = DVARBOOL_deploy_allowInWater;
  if ( !DVARBOOL_deploy_allowInWater && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_allowInWater") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v3 = 34;
  contents = r_trace->contents;
  if ( v1->current.enabled )
    v3 = 2;
  if ( (v3 & contents) == 0 && ((contents & 0x10) == 0 || !Trace_GetGlassHitId(r_trace) || !Com_IsSurfaceTypeBreakableGlass(r_trace->surfaceFlags)) && r_trace->hitSubType != TRACE_HITSUBTYPE_COVERWALL )
  {
    v5 = 0i64;
    while ( ((r_trace->surfaceFlags >> 19) & 0x3F) != EdgeOctree_BucketFlagsMask_0[v5 + 1] )
    {
      if ( (unsigned __int64)++v5 >= 6 )
        return 1;
    }
  }
  return 0;
}

/*
==============
BG_Deploy_TestLocation
==============
*/
bool BG_Deploy_TestLocation(const BgHandler *pmoveHandler, Physics_WorldId worldId, const playerState_s *ps, const vec3_t *viewOrigin, const tmat33_t<vec3_t> *playerViewAxis, const WeaponDef *weapDef, DeployTestResults *outResults)
{
  __int128 v7; 
  float v11; 
  float v12; 
  bool deployRequireOnNavmesh; 
  const dvar_t *v14; 
  int v15; 
  const dvar_t *v16; 
  int traceMask; 
  bool v18; 
  bool result; 
  char IsTraceContentsValid; 
  float deployCylinderRadius; 
  float v22; 
  float v23; 
  float v25; 
  unsigned __int64 v27; 
  const playerState_s *v28; 
  float v29; 
  double v30; 
  const dvar_t *v31; 
  float v32; 
  int EntityNum; 
  const vec3_t *v34; 
  const dvar_t *v35; 
  float v36; 
  const dvar_t *v37; 
  float v38; 
  bool v39; 
  float v40; 
  const dvar_t *v41; 
  float v42; 
  double v43; 
  float v44; 
  bool v45; 
  float v46; 
  double v47; 
  const dvar_t *v48; 
  const dvar_t *v49; 
  float value; 
  int v51; 
  const dvar_t *v52; 
  int v53; 
  bool v54; 
  Physics_WorldId v55; 
  bool v56; 
  const dvar_t *v57; 
  float v58; 
  bool v59; 
  __int128 v60; 
  double v61; 
  __int64 locational; 
  bool v63; 
  char v64; 
  bool v65; 
  hknpShape *shape; 
  int contentMask; 
  int *skipEntities; 
  Physics_ShapecastExtendedData extendedData; 
  vec3_t outPos; 
  vec3_t angles; 
  tmat33_t<vec3_t> outAxis; 
  vec3_t end; 
  vec3_t viewOrigina; 
  vec3_t start; 
  vec3_t v79; 
  vec3_t origin; 
  vec3_t center; 
  __int128 v82; 
  double v83; 
  vec4_t out; 
  trace_t outTrace; 
  PhysicsQuery_ShapecastHit in2; 
  PhysicsQuery_ShapecastHit hit; 
  trace_t results; 
  trace_t v89; 
  __int128 v90; 

  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 340, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !outResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 341, ASSERT_TYPE_ASSERT, "(outResults)", (const char *)&queryFormat, "outResults") )
    __debugbreak();
  v11 = viewOrigin->v[1];
  viewOrigina.v[0] = viewOrigin->v[0];
  v12 = viewOrigin->v[2];
  viewOrigina.v[1] = v11;
  viewOrigina.v[2] = v12;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && !ps->pm_time )
    viewOrigina.v[2] = (float)(ps->jumpState.jumpOriginZ - ps->origin.v[2]) + viewOrigina.v[2];
  deployRequireOnNavmesh = weapDef->deployRequireOnNavmesh;
  v14 = DCONST_DVARBOOL_deploy_testMissileClip;
  v15 = 8388883;
  if ( deployRequireOnNavmesh )
    v15 = 8585491;
  if ( !DCONST_DVARBOOL_deploy_testMissileClip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_testMissileClip") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    v15 = 8389011;
    if ( deployRequireOnNavmesh )
      v15 = 8585619;
  }
  v16 = DVARBOOL_deploy_allowInWater;
  if ( !DVARBOOL_deploy_allowInWater && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_allowInWater") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  traceMask = v15 | 0x20;
  if ( v16->current.enabled )
    traceMask = v15;
  contentMask = traceMask;
  v18 = BG_Deploy_CalcTestPoint(&viewOrigina, playerViewAxis, ps, weapDef, worldId, traceMask, &origin, &outTrace);
  if ( !v18 )
  {
    outResults->passRangeTest = 0;
    MatrixSet43(&outResults->transform, &origin, playerViewAxis, 1.0);
    if ( !weapDef->deployEdgeSnap )
      return 0;
  }
  IsTraceContentsValid = BG_Deploy_IsTraceContentsValid(&outTrace);
  GenerateAxisFromUpVector(&outTrace.normal, playerViewAxis, &outAxis);
  if ( !Physics_IsPredictiveWorld(worldId) || Sys_IsMainThread() )
  {
    v64 = 0;
  }
  else
  {
    v64 = 1;
    Physics_LockWorld(worldId);
  }
  deployCylinderRadius = weapDef->deployCylinderRadius;
  v22 = 0.0;
  center.v[2] = 0.5 * weapDef->deployCylinderHeight;
  center.v[0] = 0.0;
  center.v[1] = 0.0;
  shape = Physics_CreateShapeCylinder(&center, center.v[2], deployCylinderRadius, 32, 1);
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 391, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  v23 = 0.5 * weapDef->deployCylinderHeight;
  _XMM0 = LODWORD(FLOAT_0_016000001);
  v25 = weapDef->deployCylinderRadius;
  *((float *)&v82 + 1) = vec3_origin.v[1];
  *((float *)&v82 + 2) = v23 + 0.0;
  *((float *)&v83 + 1) = v23;
  extendedData.contents = traceMask;
  outPos.v[0] = (float)(0.125 * outTrace.normal.v[0]) + origin.v[0];
  extendedData.accuracy = FLOAT_0_016000001;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v27 = 0i64;
  extendedData.simplifyStart = 0;
  outPos.v[1] = (float)(0.125 * outTrace.normal.v[1]) + origin.v[1];
  *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
  outPos.v[2] = (float)(0.125 * outTrace.normal.v[2]) + origin.v[2];
  extendedData.startTolerance = 0.0;
  extendedData.collisionBuffer = FLOAT_0_125;
  *(float *)&v82 = vec3_origin.v[0];
  *((float *)&v82 + 3) = v25;
  *(float *)&v83 = v25;
  extendedData.ignoreBodies = NULL;
  extendedData.permitOutwardTrace = 0;
  extendedData.phaseSelection = All;
  if ( weapDef->deployEdgeSnap )
  {
    v28 = ps;
    if ( !BG_Deploy_EdgeSnap(pmoveHandler, ps, &viewOrigina, playerViewAxis, weapDef, &outPos, &outAxis) && !v18 )
    {
      MatrixSet43(&outResults->transform, &origin, playerViewAxis, 1.0);
      Physics_ReleaseShape(worldId, shape, 0);
      return 0;
    }
  }
  else
  {
    v28 = ps;
  }
  v90 = v7;
  if ( weapDef->deployAlwaysUpright )
  {
    AxisToAngles(&outAxis, &angles);
    angles.v[0] = 0.0;
    angles.v[2] = 0.0;
    AnglesToAxis(&angles, &outAxis);
    v29 = (float)((float)(outTrace.normal.v[1] * 0.0) + (float)(outTrace.normal.v[0] * 0.0)) + (float)(outTrace.normal.v[2] * 1.0);
    v30 = I_fclamp(v29, -1.0, 1.0);
    if ( (*(float *)&v30 < -1.0 || *(float *)&v30 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 428, ASSERT_TYPE_ASSERT, "( -1.0f ) <= ( normalDotUp ) && ( normalDotUp ) <= ( 1.0f )", "normalDotUp not in [-1.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v30, *(double *)&_xmm, *((double *)&_xmm + 1)) )
      __debugbreak();
    if ( v29 > 0.000001 )
      v22 = (float)(fsqrt(1.0 - (float)(v29 * v29)) * weapDef->deployCylinderRadius) / v29;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(outAxis.m[0].v[0] * outAxis.m[0].v[0]) + (float)(outAxis.m[0].v[1] * outAxis.m[0].v[1])) + (float)(outAxis.m[0].v[2] * outAxis.m[0].v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 432, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( endAxis[0] ))", "%s\n\t%f %f %f, foundHit %d", "Vec3IsNormalized( endAxis[0] )", outAxis.m[0].v[0], outAxis.m[0].v[1], outAxis.m[0].v[2], v18) )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(outAxis.m[1].v[0] * outAxis.m[1].v[0]) + (float)(outAxis.m[1].v[1] * outAxis.m[1].v[1])) + (float)(outAxis.m[1].v[2] * outAxis.m[1].v[2])) - 1.0) & _xmm) >= 0.0020000001 )
  {
    LODWORD(locational) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 433, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( endAxis[1] ))", "%s\n\t%f %f %f, foundHit %d", "Vec3IsNormalized( endAxis[1] )", outAxis.m[1].v[0], outAxis.m[1].v[1], outAxis.m[1].v[2], locational) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(outAxis.m[2].v[0] * outAxis.m[2].v[0]) + (float)(outAxis.m[2].v[1] * outAxis.m[2].v[1])) + (float)(outAxis.m[2].v[2] * outAxis.m[2].v[2])) - 1.0) & _xmm) >= 0.0020000001 )
  {
    LODWORD(locational) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 434, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( endAxis[2] ))", "%s\n\t%f %f %f, foundHit %d", "Vec3IsNormalized( endAxis[2] )", outAxis.m[2].v[0], outAxis.m[2].v[1], outAxis.m[2].v[2], locational) )
      __debugbreak();
  }
  v31 = DCONST_DVARFLT_deploy_penTestSurfaceOffset;
  if ( !DCONST_DVARFLT_deploy_penTestSurfaceOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_penTestSurfaceOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  v32 = v22 + v31->current.value;
  start.v[0] = (float)(v32 * outAxis.m[2].v[0]) + outPos.v[0];
  start.v[1] = (float)(v32 * outAxis.m[2].v[1]) + outPos.v[1];
  start.v[2] = (float)(v32 * outAxis.m[2].v[2]) + outPos.v[2];
  AxisToQuat(&outAxis, &out);
  PhysicsQuery_ImmediateShapecastClosest(worldId, shape, &start, &outPos, &out, &extendedData, &hit);
  v63 = 0;
  if ( hit.isValid )
  {
    if ( hit.fraction <= 0.125 || hit.fraction >= 1.0 )
      goto LABEL_62;
    outPos.v[0] = (float)((float)(outPos.v[0] - start.v[0]) * hit.fraction) + start.v[0];
    outPos.v[1] = (float)((float)(outPos.v[1] - start.v[1]) * hit.fraction) + start.v[1];
    outPos.v[2] = (float)((float)(outPos.v[2] - start.v[2]) * hit.fraction) + start.v[2];
    outTrace.hitType = TRACE_HITTYPE_ENTITY;
    EntityNum = Physics_GetEntityNum(hit.ref);
    outTrace.hitId = truncate_cast<unsigned short,int>(EntityNum);
  }
  v63 = 1;
LABEL_62:
  v65 = 1;
  if ( weapDef->deployRequireNoOverhang )
  {
    MatrixSet43((tmat43_t<vec3_t> *)&in2, &outPos, &outAxis, weapDef->deployCylinderRadius);
    skipEntities = &v28->clientNum;
    v34 = s_overhangTestPoints;
    while ( 1 )
    {
      MatrixTransformVector43(v34, (const tmat43_t<vec3_t> *)&in2, &v79);
      v35 = DCONST_DVARFLT_deploy_overhangTestOffset;
      if ( !DCONST_DVARFLT_deploy_overhangTestOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_overhangTestOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      LODWORD(v36) = v35->current.integer ^ _xmm;
      angles.v[0] = (float)(v36 * outAxis.m[2].v[0]) + v79.v[0];
      angles.v[1] = (float)(v36 * outAxis.m[2].v[1]) + v79.v[1];
      angles.v[2] = (float)(v36 * outAxis.m[2].v[2]) + v79.v[2];
      PhysicsQuery_LegacyTraceSkipEntities(worldId, &results, &v79, &angles, &bounds_origin, skipEntities, 1, 1, contentMask, 0, NULL, All);
      v37 = DCONST_DVARBOOL_deploy_debug;
      if ( results.fraction >= 1.0 )
        break;
      if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      if ( v37->current.enabled )
        pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &v79, &angles, &colorGreen, 1, 0);
      IsTraceContentsValid = IsTraceContentsValid && BG_Deploy_IsTraceContentsValid(&results);
      v27 += 12i64;
      ++v34;
      if ( v27 >= 0x30 )
        goto LABEL_85;
    }
    if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &v79, &angles, &colorRed, 1, 0);
    v65 = 0;
  }
LABEL_85:
  v38 = (float)((float)(outAxis.m[2].v[0] * 0.0) + (float)(outAxis.m[2].v[1] * 0.0)) + (float)(outAxis.m[2].v[2] * 1.0);
  v39 = 1;
  I_fclamp(v38, -1.0, 1.0);
  v40 = v38;
  if ( weapDef->deployRequireOnWalkableSurface )
  {
    v41 = DCONST_DVARFLT_deploy_maxWalkableSlopeAngle;
    if ( !DCONST_DVARFLT_deploy_maxWalkableSlopeAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_maxWalkableSlopeAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = cosf_0((float)(90.0 - v41->current.value) * 0.017453292);
    v43 = I_fclamp(v42, -1.0, 1.0);
    v44 = (float)((float)(outTrace.normal.v[1] * 0.0) + (float)(outTrace.normal.v[0] * 0.0)) + (float)(outTrace.normal.v[2] * 1.0);
    v45 = v40 >= *(float *)&v43;
    I_fclamp(v44, -1.0, 1.0);
    v46 = cosf_0(0.017453292 * weapDef->deployMaxSlope);
    v47 = I_fclamp(v46, -1.0, 1.0);
    v39 = v45;
    if ( *(float *)&v47 > v44 )
      v39 = 0;
  }
  v48 = DCONST_DVARFLT_deploy_maxSkyDistanceRayCheck;
  if ( !DCONST_DVARFLT_deploy_maxSkyDistanceRayCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_maxSkyDistanceRayCheck") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  v49 = DCONST_DVARBOOL_deploy_testMissileClip;
  value = v48->current.value;
  if ( !DCONST_DVARBOOL_deploy_testMissileClip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_testMissileClip") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  v51 = 387;
  v52 = DVARBOOL_deploy_allowInWater;
  if ( !v49->current.enabled )
    v51 = 259;
  if ( !DVARBOOL_deploy_allowInWater && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_allowInWater") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  v53 = v51 | 0x20;
  v54 = !v52->current.enabled;
  end.v[0] = (float)(value * 0.0) + outPos.v[0];
  if ( !v54 )
    v53 = v51;
  end.v[1] = (float)(value * 0.0) + outPos.v[1];
  end.v[2] = (float)(value * 1.0) + outPos.v[2];
  PhysicsQuery_LegacyTraceSkipEntities(worldId, &v89, &outPos, &end, &bounds_origin, &ps->clientNum, 1, 1, v53, 0, NULL, All);
  if ( v89.fraction == 1.0 )
  {
    v57 = DCONST_DVARFLT_deploy_maxSkyDistanceShapeCheck;
    if ( !DCONST_DVARFLT_deploy_maxSkyDistanceShapeCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_maxSkyDistanceShapeCheck") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    v58 = v57->current.value;
    end.v[0] = (float)(v58 * 0.0) + outPos.v[0];
    extendedData.contents = v53;
    v55 = worldId;
    end.v[2] = (float)(v58 * 1.0) + outPos.v[2];
    end.v[1] = (float)(v58 * 0.0) + outPos.v[1];
    PhysicsQuery_ImmediateShapecastClosest(worldId, shape, &outPos, &end, &out, &extendedData, &in2);
    v56 = !in2.isValid || in2.fraction == 1.0;
  }
  else
  {
    v55 = worldId;
    v56 = 0;
  }
  v59 = !weapDef->deployRequireSkyAbove || v56;
  if ( shape )
    Physics_ReleaseShape(v55, shape, 0);
  if ( v64 )
    Physics_UnlockWorld(v55);
  if ( (float)(outPos.v[2] - viewOrigina.v[2]) < weapDef->deployMaxHeightAboveEye )
  {
    v60 = v82;
    v61 = v83;
    outResults->passCylinderTest = v63;
    *(_OWORD *)outResults->equipBounds.midPoint.v = v60;
    outResults->passOverhangTest = v65;
    *(double *)&outResults->equipBounds.halfSize.y = v61;
    outResults->passRangeTest = 1;
    outResults->passWalkableTest = v39;
    outResults->passSkyTest = v59;
    outResults->passMaterialTest = IsTraceContentsValid;
    outResults->hitEntityNum = Trace_GetEntityHitId(&outTrace);
    MatrixSet43(&outResults->transform, &outPos, &outAxis, 1.0);
    result = 1;
    outResults->isSkyVisible = v56;
  }
  else
  {
    outResults->passRangeTest = 0;
    MatrixSet43(&outResults->transform, &origin, playerViewAxis, 1.0);
    return 0;
  }
  return result;
}

