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
  __asm { vmovss  xmm3, cs:__real@3f800000; scale }
  *(_DWORD *)&this->passRangeTest = 0;
  *(_WORD *)&this->passMaterialTest = 0;
  this->hitEntityNum = 2047;
  *(_QWORD *)this->equipBounds.midPoint.v = 0i64;
  this->equipBounds.midPoint.v[2] = 0.0;
  this->equipBounds.halfSize.v[0] = -3.4028235e38;
  this->equipBounds.halfSize.v[1] = -3.4028235e38;
  this->equipBounds.halfSize.v[2] = -3.4028235e38;
  MatrixSet43(&this->transform, &vec3_origin, &identityMatrix33, *(float *)&_XMM3);
}

/*
==============
BG_Deploy_CalcTestPoint
==============
*/
bool BG_Deploy_CalcTestPoint(const vec3_t *viewOrigin, const tmat33_t<vec3_t> *viewAxis, const playerState_s *ps, const WeaponDef *weapDef, const Physics_WorldId worldId, const int traceMask, vec3_t *outTestPoint, trace_t *outTrace)
{
  DeployType deployType; 
  const int *p_clientNum; 
  char v30; 
  bool v68; 
  const dvar_t *v90; 
  bool result; 
  DeployType skipEntities; 
  int skipEntityCount; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t up; 

  _RDI = weapDef;
  _RSI = outTestPoint;
  _R13 = ps;
  _RBX = outTrace;
  _R14 = viewOrigin;
  if ( weapDef->deployType >= (unsigned int)COUNT )
  {
    skipEntityCount = 2;
    skipEntities = weapDef->deployType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 282, ASSERT_TYPE_ASSERT, "(unsigned)( weapDef->deployType ) < (unsigned)( DeployType::COUNT )", "weapDef->deployType doesn't index DeployType::COUNT\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
      __debugbreak();
  }
  deployType = _RDI->deployType;
  __asm { vmovaps [rsp+110h+var_40], xmm6 }
  if ( deployType && deployType == DODGE )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+1DCh]
      vxorps  xmm1, xmm1, xmm1
      vmovaps [rsp+110h+var_50], xmm8
      vmovss  xmm8, dword ptr [r14+8]
      vmovaps [rsp+110h+var_60], xmm9
      vmovss  xmm9, dword ptr [r13+38h]
      vmovss  dword ptr [rbp+37h+angles], xmm1
      vmovss  dword ptr [rbp+37h+angles+4], xmm0
      vmovss  dword ptr [rbp+37h+angles+8], xmm1
    }
    AngleVectors(&angles, &forward, NULL, &up);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+1214h]
      vmulss  xmm1, xmm3, dword ptr [rbp+37h+forward]
      vaddss  xmm2, xmm1, dword ptr [r14]
      vmulss  xmm1, xmm3, dword ptr [rbp+37h+forward+4]
    }
    p_clientNum = &_R13->clientNum;
    __asm
    {
      vmovss  dword ptr [rbp+37h+end], xmm2
      vaddss  xmm2, xmm1, dword ptr [r14+4]
      vmulss  xmm1, xmm3, dword ptr [rbp+37h+forward+8]
      vmovss  dword ptr [rbp+37h+end+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [r14+8]
      vmovss  dword ptr [rbp+37h+end+8], xmm2
    }
    PhysicsQuery_LegacyTraceSkipEntities(worldId, outTrace, _R14, &end, &bounds_origin, p_clientNum, 1, 1, traceMask, 0, NULL, All);
    __asm
    {
      vmovss  xmm4, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rbp+37h+end]
      vsubss  xmm1, xmm0, dword ptr [r14]
      vmovss  xmm0, dword ptr [rbp+37h+end+4]
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm5, xmm2, dword ptr [r14]
      vmovss  dword ptr [rsi], xmm5
      vsubss  xmm1, xmm0, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rbp+37h+end+8]
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm6, xmm2, dword ptr [r14+4]
      vmovss  dword ptr [rsi+4], xmm6
      vsubss  xmm1, xmm0, dword ptr [r14+8]
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm4, xmm2, dword ptr [r14+8]
      vmovss  dword ptr [rsi+8], xmm4
      vmovss  xmm0, dword ptr [rbx]
      vcomiss xmm0, cs:__real@3f800000
    }
    if ( !v30 )
    {
      __asm
      {
        vsubss  xmm0, xmm9, xmm8
        vsubss  xmm3, xmm0, cs:belowDist
        vmulss  xmm2, xmm3, dword ptr [rbp+37h+up]
        vaddss  xmm0, xmm2, xmm5
        vmulss  xmm2, xmm3, dword ptr [rbp+37h+up+4]
        vmovss  dword ptr [rbp+37h+end], xmm0
        vaddss  xmm0, xmm2, xmm6
        vmulss  xmm2, xmm3, dword ptr [rbp+37h+up+8]
        vmovss  dword ptr [rbp+37h+end+4], xmm0
        vaddss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rbp+37h+end+8], xmm0
      }
      PhysicsQuery_LegacyTraceSkipEntities(worldId, outTrace, outTestPoint, &end, &bounds_origin, p_clientNum, 1, 1, traceMask, 0, NULL, All);
      __asm
      {
        vmovss  xmm6, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rbp+37h+end]
        vsubss  xmm1, xmm0, dword ptr [rsi]
        vmovss  xmm0, dword ptr [rbp+37h+end+4]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rsi+4]
        vaddss  xmm3, xmm2, dword ptr [rsi]
        vmovss  xmm0, dword ptr [rbp+37h+end+8]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rsi], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsi+4]
        vmovss  dword ptr [rsi+4], xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsi+8]
        vmovss  dword ptr [rsi+8], xmm3
        vmovss  xmm0, dword ptr [rbx]
      }
    }
    __asm
    {
      vcomiss xmm0, cs:__real@3f800000
      vmovaps xmm9, [rsp+110h+var_60]
      vmovaps xmm8, [rsp+110h+var_50]
    }
    if ( !v30 || (outTrace->contents & 0x800) != 0 )
      goto LABEL_20;
    v68 = !Dvar_GetBool_Internal_DebugName(DVARBOOL_deploy_allowInWater, "deploy_allowInWater");
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+1214h]
      vmulss  xmm0, xmm2, dword ptr [r15]
      vaddss  xmm1, xmm0, dword ptr [r14]
      vmulss  xmm0, xmm2, dword ptr [r15+4]
      vmovss  dword ptr [rbp+37h+end], xmm1
      vaddss  xmm1, xmm0, dword ptr [r14+4]
      vmulss  xmm0, xmm2, dword ptr [r15+8]
      vmovss  dword ptr [rbp+37h+end+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rbp+37h+end+8], xmm1
    }
    PhysicsQuery_LegacyTraceSkipEntities(worldId, outTrace, _R14, &end, &bounds_origin, &_R13->clientNum, 1, 1, traceMask, 0, NULL, All);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rbp+37h+end]
      vsubss  xmm1, xmm0, dword ptr [r14]
      vmovss  xmm0, dword ptr [rbp+37h+end+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [r14]
      vmovss  dword ptr [rsi], xmm3
      vsubss  xmm1, xmm0, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rbp+37h+end+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [r14+4]
      vmovss  dword ptr [rsi+4], xmm3
      vsubss  xmm1, xmm0, dword ptr [r14+8]
      vmovss  xmm0, cs:__real@3f800000
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [r14+8]
      vmovss  dword ptr [rsi+8], xmm3
      vcomiss xmm0, dword ptr [rbx]
    }
    if ( v30 | v68 || (outTrace->contents & 0x800) != 0 )
      goto LABEL_20;
    v90 = DVARBOOL_deploy_allowInWater;
    if ( !DVARBOOL_deploy_allowInWater && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_allowInWater") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v90);
    v68 = !v90->current.enabled;
  }
  if ( v68 && (outTrace->contents & 0x20) != 0 )
  {
LABEL_20:
    result = 0;
    goto LABEL_21;
  }
  result = 1;
LABEL_21:
  __asm { vmovaps xmm6, [rsp+110h+var_40] }
  return result;
}

/*
==============
BG_Deploy_ComputeFXOffset
==============
*/
void BG_Deploy_ComputeFXOffset(float playerZ, float desiredHeightOffset, const tmat43_t<vec3_t> *transform, vec3_t *outFxOffset)
{
  outFxOffset->v[2] = 0.0;
  *(_QWORD *)outFxOffset->v = 0i64;
  __asm
  {
    vmovss  xmm2, dword ptr [r8+2Ch]
    vsubss  xmm0, xmm2, xmm0
    vcmpltss xmm3, xmm0, cs:THRESHOLD_TO_CONSIDER_ON_GROUND
    vmovss  xmm0, dword ptr [r9+8]
    vblendvps xmm1, xmm0, xmm1, xmm3
    vmovss  dword ptr [r9+8], xmm1
  }
}

/*
==============
BG_Deploy_EdgeSnap
==============
*/
bool BG_Deploy_EdgeSnap(const BgHandler *pmoveHandler, const playerState_s *ps, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const WeaponDef *weapDef, vec3_t *outPos, tmat33_t<vec3_t> *outAxis)
{
  DeployType deployType; 
  DeployType v27; 
  unsigned __int64 v71; 
  EdgeId v76; 
  DeployType v92; 
  bool v93; 
  bool v94; 
  bool result; 
  const dvar_t *v116; 
  __int64 farHalfWidth; 
  float farHalfWidthb; 
  __int64 farHalfWidtha; 
  int farHalfWidthc; 
  __int64 farHalfHeight; 
  float farHalfHeightb; 
  __int64 farHalfHeighta; 
  unsigned __int64 outResultCount; 
  vec3_t *v152; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v153; 
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
  EdgeOctreeQueryFrustum v165; 
  float resultFractionPool[6]; 
  float resultDistancePool[6]; 
  EdgeId resultIdPool[6]; 
  char v170; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  _RBX = DCONST_DVARFLT_deploy_offsetForwardOnEdge;
  _RSI = ps;
  _R14 = weapDef;
  _R13 = axis;
  _R15 = outAxis;
  v152 = outPos;
  if ( !DCONST_DVARFLT_deploy_offsetForwardOnEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_offsetForwardOnEdge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm12, dword ptr [rbx+28h]
    vmovss  xmm0, cs:edgeMaxDistFactor
  }
  deployType = weapDef->deployType;
  __asm { vmulss  xmm9, xmm0, dword ptr [r14+1214h] }
  outResultCount = 0i64;
  if ( (unsigned int)deployType >= COUNT )
  {
    LODWORD(farHalfHeight) = 2;
    LODWORD(farHalfWidth) = deployType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 154, ASSERT_TYPE_ASSERT, "(unsigned)( weapDef->deployType ) < (unsigned)( DeployType::COUNT )", "weapDef->deployType doesn't index DeployType::COUNT\n\t%i not in [0, %i)", farHalfWidth, farHalfHeight) )
      __debugbreak();
  }
  v27 = weapDef->deployType;
  if ( v27 && v27 == DODGE )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1DCh]
      vxorps  xmm1, xmm1, xmm1
      vmovss  dword ptr [rbp+330h+angles], xmm1
      vmovss  dword ptr [rbp+330h+angles+4], xmm0
      vmovss  dword ptr [rbp+330h+angles+8], xmm1
    }
    AngleVectors(&angles, &forward, NULL, &up);
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+330h+forward+8]
      vmovss  xmm7, dword ptr [rbp+330h+forward+4]
      vmovss  xmm8, dword ptr [rbp+330h+forward]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+18h]
      vmovss  xmm8, dword ptr [r13+0]
      vmovss  xmm7, dword ptr [r13+4]
      vmovss  xmm6, dword ptr [r13+8]
      vmovss  xmm1, dword ptr [r13+1Ch]
      vmovss  dword ptr [rbp+330h+up], xmm0
      vmovss  xmm0, dword ptr [r13+20h]
      vmovss  dword ptr [rbp+330h+up+8], xmm0
      vmovss  dword ptr [rbp+330h+forward], xmm8
      vmovss  dword ptr [rbp+330h+forward+4], xmm7
      vmovss  dword ptr [rbp+330h+forward+8], xmm6
      vmovss  dword ptr [rbp+330h+up+4], xmm1
    }
  }
  __asm
  {
    vmovss  xmm2, cs:frustumNearDist
    vmovss  xmm3, cs:frustumHalfHeightNear; nearHalfHeight
    vmulss  xmm0, xmm8, xmm2
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rbp+330h+nearCenterPoint], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rbp+330h+nearCenterPoint+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+330h+nearCenterPoint+8], xmm1
    vmulss  xmm2, xmm8, xmm9
    vaddss  xmm0, xmm2, dword ptr [rdi]
    vmovss  dword ptr [rbp+330h+farCenterPoint], xmm0
    vmulss  xmm1, xmm7, xmm9
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmulss  xmm0, xmm6, xmm9
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  xmm0, cs:frustumHalfHeightFar
    vmovaps xmmword ptr [rsp+430h+var_98+8], xmm11
    vmovss  [rsp+430h+farHalfHeight], xmm0
    vmovss  dword ptr [rbp+330h+farCenterPoint+8], xmm1
    vmovss  xmm1, cs:frustumHalfWidthFar
    vmovss  dword ptr [rbp+330h+farCenterPoint+4], xmm2
    vmovss  xmm2, cs:frustumHalfWidthNear; nearHalfWidth
    vmovss  [rsp+430h+farHalfWidth], xmm1
  }
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v165, &nearCenterPoint, *(float *)&_XMM2, *(float *)&_XMM3, &farCenterPoint, farHalfWidthb, farHalfHeightb, &up);
  __asm { vmovss  xmm1, cs:queryBiasCenterline; centerBias }
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v165, *(float *)&_XMM1);
  __asm { vmovss  xmm2, cs:queryBiasUp; bias }
  EdgeOctreeQueryFrustum::SetAxisBias(&v165, &identityMatrix33.m[2], *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm5, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmovss  xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vxorps  xmm1, xmm2, xmm8
    vxorps  xmm0, xmm5, xmm8
    vmovss  dword ptr [rbp+330h+clipPlaneNormals+4], xmm1
    vmovss  xmm1, dword ptr [r14+1218h]
    vaddss  xmm3, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+330h+clipPlaneNormals], xmm0
    vxorps  xmm0, xmm4, xmm8
    vmovss  dword ptr [rbp+330h+clipPlaneNormals+8], xmm0
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm1, xmm0, dword ptr [rsi+30h]
    vmulss  xmm2, xmm2, xmm3
    vaddss  xmm0, xmm2, dword ptr [rsi+34h]
    vmovss  dword ptr [rbp+330h+clipPlanePoints], xmm1
    vmulss  xmm1, xmm4, xmm3
    vaddss  xmm2, xmm1, dword ptr [rsi+38h]
    vmovss  dword ptr [rbp+330h+clipPlanePoints+8], xmm2
    vmovss  dword ptr [rbp+330h+clipPlanePoints+4], xmm0
  }
  EdgeOctreeQueryShape::SetUserClipPlanes(&v165, 1ui64, &clipPlanePoints, &clipPlaneNormals);
  v153.m_bucket = queryDbType;
  v153.m_queryShape = &v165;
  v153.m_hint = 16777208;
  v153.m_flags = 1;
  EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v153, pmoveHandler, resultIdPool, resultFractionPool, resultDistancePool, 6ui64, &outResultCount, NULL);
  _RSI = 0i64;
  v71 = maxEdgeCandidates;
  __asm
  {
    vmovss  xmm0, cs:edgeMinLength
    vmulss  xmm9, xmm9, xmm9
  }
  if ( maxEdgeCandidates > outResultCount )
    v71 = outResultCount;
  outResultCount = v71;
  __asm { vmulss  xmm10, xmm0, xmm0 }
  if ( v71 )
  {
    __asm { vmovss  xmm11, cs:__real@3f800000 }
    while ( 1 )
    {
      v76 = resultIdPool[_RSI];
      __asm
      {
        vmovss  xmm7, [rbp+rsi*4+330h+resultFractionPool]
        vmovaps xmm2, xmm7; fraction
      }
      Edge_CalculateVectors(pmoveHandler, v76, *(float *)&_XMM2, &identityMatrix33.m[2], _R13, &outNormal, &outParallel, &outBelow);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+430h+var_3C8]
        vmovss  xmm1, dword ptr [rsp+430h+var_3C8+4]
        vxorps  xmm5, xmm0, xmm8
        vmovss  xmm0, dword ptr [rsp+430h+var_3C8+8]
        vxorps  xmm3, xmm1, xmm8
        vmulss  xmm4, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmovss  dword ptr [rsp+430h+var_3C8+4], xmm3
        vmulss  xmm3, xmm5, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vxorps  xmm6, xmm0, xmm8
        vmulss  xmm0, xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmovss  dword ptr [rsp+430h+var_3C8], xmm5
        vaddss  xmm5, xmm4, xmm3
        vaddss  xmm3, xmm5, xmm0
        vsubss  xmm1, xmm11, xmm3
        vcomiss xmm1, cs:cosThresholdVerticality
        vmovss  dword ptr [rsp+430h+var_3C8+8], xmm6
      }
      if ( v93 || v94 )
      {
        __asm { vmovaps xmm2, xmm7; fraction }
        Edge_CalculatePoint(pmoveHandler, v76, *(float *)&_XMM2, &outEdgePoint);
        if ( weapDef->deployType >= (unsigned int)COUNT )
        {
          LODWORD(farHalfHeighta) = 2;
          LODWORD(farHalfWidtha) = weapDef->deployType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( weapDef->deployType ) < (unsigned)( DeployType::COUNT )", "weapDef->deployType doesn't index DeployType::COUNT\n\t%i not in [0, %i)", farHalfWidtha, farHalfHeighta) )
            __debugbreak();
        }
        v92 = weapDef->deployType;
        v93 = 0;
        v94 = v92 == MOVEMENT;
        if ( v92 && (v93 = v92 == MOVEMENT, v94 = v92 == DODGE) )
        {
          ProjectPointOnPlane(&outEdgePoint, origin, &up, &angles);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+330h+angles]
            vsubss  xmm3, xmm0, dword ptr [rdi]
            vmovss  xmm0, dword ptr [rbp+330h+angles+8]
            vmovss  xmm1, dword ptr [rbp+330h+angles+4]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+430h+outEdgePoint]
            vsubss  xmm3, xmm0, dword ptr [rdi]
            vmovss  xmm0, dword ptr [rbp+330h+outEdgePoint+8]
            vmovss  xmm1, dword ptr [rsp+430h+outEdgePoint+4]
          }
        }
        __asm
        {
          vsubss  xmm2, xmm1, dword ptr [rdi+4]
          vsubss  xmm4, xmm0, dword ptr [rdi+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm5, xmm3, xmm0
          vcomiss xmm5, xmm9
        }
        if ( v93 || v94 )
        {
          *(double *)&_XMM0 = Edge_CalculateLengthSq(v76);
          __asm { vcomiss xmm0, xmm10 }
          if ( !v93 )
            break;
        }
      }
      if ( ++_RSI >= outResultCount )
        goto LABEL_26;
    }
    v116 = DCONST_DVARBOOL_deploy_debug;
    if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v116);
    if ( v116->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+1214h]
        vmovss  [rsp+430h+farHalfWidth], xmm0
      }
      ((void (__fastcall *)(const BgHandler *, __int64, EdgeId *, float *, float *, int, _DWORD))pmoveHandler->DebugEdgeQueryResults)(pmoveHandler, 1i64, &resultIdPool[_RSI], &resultFractionPool[_RSI], &resultDistancePool[_RSI], farHalfWidthc, 0);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+330h+outNormal]
      vxorps  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [rbp+330h+outNormal+4]
      vmovss  dword ptr [r15], xmm1
      vxorps  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [rbp+330h+outNormal+8]
      vmovss  dword ptr [r15+4], xmm1
      vxorps  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [rbp+330h+outParallel]
      vmovss  dword ptr [r15+8], xmm1
      vmovss  xmm1, dword ptr [rbp+330h+outParallel+4]
      vmovss  dword ptr [r15+0Ch], xmm0
      vmovss  xmm0, dword ptr [rbp+330h+outParallel+8]
      vmovss  dword ptr [r15+10h], xmm1
      vmovss  xmm1, dword ptr [rsp+430h+var_3C8]
      vmovss  dword ptr [r15+14h], xmm0
      vmovss  xmm0, dword ptr [rsp+430h+var_3C8+4]
      vmovss  dword ptr [r15+18h], xmm1
      vmovss  xmm1, dword ptr [rsp+430h+var_3C8+8]
      vmovss  dword ptr [r15+20h], xmm1
      vmovss  dword ptr [r15+1Ch], xmm0
    }
    GenerateAxisFromUpVector(&identityMatrix33.m[2], outAxis, outAxis);
    _RAX = v152;
    __asm
    {
      vmovss  xmm2, cs:edgeSnapCylPosOffset
      vmulss  xmm1, xmm2, dword ptr [rsp+430h+var_3C8]
      vaddss  xmm3, xmm1, dword ptr [rsp+430h+outEdgePoint]
      vmulss  xmm1, xmm2, dword ptr [rsp+430h+var_3C8+4]
      vaddss  xmm4, xmm1, dword ptr [rsp+430h+outEdgePoint+4]
      vmulss  xmm1, xmm2, dword ptr [rsp+430h+var_3C8+8]
      vaddss  xmm5, xmm1, dword ptr [rbp+330h+outEdgePoint+8]
      vmovss  dword ptr [rax+8], xmm5
      vmovss  dword ptr [rax], xmm3
      vmovss  dword ptr [rax+4], xmm4
      vmulss  xmm0, xmm12, dword ptr [r15]
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rax], xmm1
      vmulss  xmm0, xmm12, dword ptr [r15+4]
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rax+4], xmm1
      vmulss  xmm0, xmm12, dword ptr [r15+8]
      vaddss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rax+8], xmm1
    }
    result = 1;
  }
  else
  {
LABEL_26:
    result = 0;
  }
  __asm { vmovaps xmm11, xmmword ptr [rsp+430h+var_98+8] }
  _R11 = &v170;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
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
  bool deployRequireOnNavmesh; 
  const dvar_t *v24; 
  int v25; 
  const dvar_t *v26; 
  int v27; 
  bool v28; 
  bool result; 
  char IsTraceContentsValid; 
  unsigned __int64 v49; 
  const playerState_s *v52; 
  char v64; 
  bool v65; 
  bool v70; 
  const dvar_t *v115; 
  const vec3_t *v126; 
  const dvar_t *v137; 
  bool v148; 
  const dvar_t *v150; 
  bool v167; 
  const dvar_t *v174; 
  int v176; 
  const dvar_t *v177; 
  int v181; 
  Physics_WorldId v186; 
  bool v187; 
  bool v197; 
  char v198; 
  double traceMask; 
  __int128 outTestPoint; 
  vec3_t *outTestPointa; 
  vec3_t *outTestPointb; 
  vec3_t *outTestPointc; 
  vec3_t *outTestPoint_8; 
  vec3_t *outTestPoint_8a; 
  vec3_t *outTestPoint_8b; 
  double contentMask; 
  double contentMaska; 
  double contentMaskb; 
  __int64 locational; 
  __int64 locationala; 
  bool v223; 
  char v224; 
  bool v225; 
  hknpShape *shape; 
  int v228; 
  int *skipEntities; 
  Physics_ShapecastExtendedData extendedData; 
  vec3_t outPos; 
  vec3_t angles; 
  tmat33_t<vec3_t> outAxis; 
  vec3_t end; 
  vec3_t viewOrigina; 
  vec3_t start; 
  vec3_t v239; 
  vec3_t origin; 
  vec3_t center; 
  vec4_t out; 
  trace_t outTrace; 
  PhysicsQuery_ShapecastHit in2; 
  PhysicsQuery_ShapecastHit hit; 
  trace_t results; 
  trace_t v249; 
  char v255; 

  __asm { vmovaps [rsp+3F0h+var_60], xmm8 }
  _R15 = weapDef;
  _R12 = ps;
  _RDI = outResults;
  _RBX = viewOrigin;
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 340, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !outResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 341, ASSERT_TYPE_ASSERT, "(outResults)", (const char *)&queryFormat, "outResults") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+2F0h+viewOrigin], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+2F0h+viewOrigin+4], xmm1
    vmovss  dword ptr [rbp+2F0h+viewOrigin+8], xmm0
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R12->pm_flags, ACTIVE, 0x13u) && !_R12->pm_time )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12+0C8h]
      vsubss  xmm2, xmm0, dword ptr [r12+38h]
      vaddss  xmm2, xmm2, dword ptr [rbp+2F0h+viewOrigin+8]
      vmovss  dword ptr [rbp+2F0h+viewOrigin+8], xmm2
    }
  }
  deployRequireOnNavmesh = weapDef->deployRequireOnNavmesh;
  v24 = DCONST_DVARBOOL_deploy_testMissileClip;
  v25 = 8388883;
  if ( deployRequireOnNavmesh )
    v25 = 8585491;
  if ( !DCONST_DVARBOOL_deploy_testMissileClip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_testMissileClip") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.enabled )
  {
    v25 = 8389011;
    if ( deployRequireOnNavmesh )
      v25 = 8585619;
  }
  v26 = DVARBOOL_deploy_allowInWater;
  if ( !DVARBOOL_deploy_allowInWater && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_allowInWater") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v27 = v25 | 0x20;
  if ( v26->current.enabled )
    v27 = v25;
  v228 = v27;
  v28 = BG_Deploy_CalcTestPoint(&viewOrigina, playerViewAxis, _R12, weapDef, worldId, v27, &origin, &outTrace);
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  if ( v28 )
    goto LABEL_26;
  outResults->passRangeTest = 0;
  __asm { vmovaps xmm3, xmm8; scale }
  MatrixSet43(&outResults->transform, &origin, playerViewAxis, *(float *)&_XMM3);
  if ( weapDef->deployEdgeSnap )
  {
LABEL_26:
    __asm
    {
      vmovaps [rsp+3F0h+var_40], xmm6
      vmovaps [rsp+3F0h+var_50], xmm7
      vmovaps [rsp+3F0h+var_70], xmm11
    }
    IsTraceContentsValid = BG_Deploy_IsTraceContentsValid(&outTrace);
    GenerateAxisFromUpVector(&outTrace.normal, playerViewAxis, &outAxis);
    if ( !Physics_IsPredictiveWorld(worldId) || Sys_IsMainThread() )
    {
      v224 = 0;
    }
    else
    {
      v224 = 1;
      Physics_LockWorld(worldId);
    }
    __asm
    {
      vmovss  xmm6, cs:__real@3f000000
      vmulss  xmm1, xmm6, dword ptr [r15+1210h]; halfHeight
      vmovss  xmm2, dword ptr [r15+120Ch]; radius
      vxorps  xmm7, xmm7, xmm7
      vmovss  dword ptr [rbp+2F0h+center+8], xmm1
      vmovss  dword ptr [rbp+2F0h+center], xmm7
      vmovss  dword ptr [rbp+2F0h+center+4], xmm7
    }
    shape = Physics_CreateShapeCylinder(&center, *(float *)&_XMM1, *(float *)&_XMM2, 32, 1);
    if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 391, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    __asm
    {
      vmovss  xmm11, cs:__real@3e000000
      vmulss  xmm2, xmm6, dword ptr [r15+1210h]
      vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  xmm3, dword ptr [r15+120Ch]
      vmovss  dword ptr [rbp+2F0h+var_278+4], xmm1
      vaddss  xmm1, xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
      vmovss  dword ptr [rbp+2F0h+var_278+8], xmm1
      vmulss  xmm1, xmm11, dword ptr [rbp+2F0h+outTrace.normal]
      vmovss  dword ptr [rbp+2F0h+var_268+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+origin]
      vmulss  xmm1, xmm11, dword ptr [rbp+2F0h+outTrace.normal+4]
    }
    extendedData.contents = v27;
    __asm
    {
      vmovss  dword ptr [rbp+2F0h+outPos], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+origin+4]
      vmulss  xmm1, xmm11, dword ptr [rbp+2F0h+outTrace.normal+8]
      vmovss  [rbp+2F0h+extendedData.accuracy], xmm0
      vpxor   xmm0, xmm0, xmm0
    }
    v49 = 0i64;
    extendedData.simplifyStart = 0;
    __asm
    {
      vmovss  dword ptr [rbp+2F0h+outPos+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+origin+8]
      vmovdqu xmmword ptr [rbp+2F0h+extendedData.nonBrushShape], xmm0
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovss  dword ptr [rbp+2F0h+outPos+8], xmm2
      vmovss  [rbp+2F0h+extendedData.startTolerance], xmm7
      vmovss  [rbp+2F0h+extendedData.collisionBuffer], xmm11
      vmovss  dword ptr [rbp+2F0h+var_278], xmm0
      vmovss  dword ptr [rbp+2F0h+var_278+0Ch], xmm3
      vmovss  dword ptr [rbp+2F0h+var_268], xmm3
    }
    extendedData.ignoreBodies = NULL;
    extendedData.permitOutwardTrace = 0;
    extendedData.phaseSelection = All;
    if ( weapDef->deployEdgeSnap )
    {
      v52 = ps;
      if ( !BG_Deploy_EdgeSnap(pmoveHandler, ps, &viewOrigina, playerViewAxis, weapDef, &outPos, &outAxis) && !v28 )
      {
        __asm { vmovaps xmm3, xmm8; scale }
        MatrixSet43(&outResults->transform, &origin, playerViewAxis, *(float *)&_XMM3);
        Physics_ReleaseShape(worldId, shape, 0);
        result = 0;
LABEL_118:
        __asm
        {
          vmovaps xmm7, [rsp+3F0h+var_50]
          vmovaps xmm6, [rsp+3F0h+var_40]
          vmovaps xmm11, [rsp+3F0h+var_70]
        }
        goto LABEL_119;
      }
    }
    else
    {
      v52 = ps;
    }
    __asm
    {
      vmovaps [rsp+3F0h+var_80], xmm12
      vmovss  xmm12, cs:__real@bf800000
    }
    if ( weapDef->deployAlwaysUpright )
    {
      AxisToAngles(&outAxis, &angles);
      __asm
      {
        vmovss  dword ptr [rbp+2F0h+angles], xmm7
        vmovss  dword ptr [rbp+2F0h+angles+8], xmm7
      }
      AnglesToAxis(&angles, &outAxis);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2F0h+outTrace.normal+4]
        vmulss  xmm3, xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmovss  xmm1, dword ptr [rbp+2F0h+outTrace.normal]
        vmulss  xmm2, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vmovss  xmm0, dword ptr [rbp+2F0h+outTrace.normal+8]
        vmulss  xmm1, xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm0, xmm4, xmm1; val
        vmovaps xmm1, xmm12; min
        vmovaps xmm2, xmm8; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vcomiss xmm0, xmm12
        vmovaps xmm6, xmm0
      }
      if ( v64 )
        goto LABEL_122;
      __asm { vcomiss xmm0, xmm8 }
      if ( !(v64 | v65) )
      {
LABEL_122:
        __asm
        {
          vmovaps xmm1, cs:__xmm@3ff0000000000000bff0000000000000
          vmovups xmmword ptr [rsp+3F0h+outTestPoint], xmm1
          vcvtss2sd xmm3, xmm6, xmm6
          vmovsd  qword ptr [rsp+3F0h+traceMask], xmm3
        }
        v70 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 428, ASSERT_TYPE_ASSERT, "( -1.0f ) <= ( normalDotUp ) && ( normalDotUp ) <= ( 1.0f )", "normalDotUp not in [-1.0f, 1.0f]\n\t%g not in [%g, %g]", traceMask, *(double *)&outTestPoint, *((double *)&outTestPoint + 1));
        v64 = 0;
        v65 = !v70;
        if ( v70 )
          __debugbreak();
      }
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
      }
      if ( !(v64 | v65) )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm6
          vsubss  xmm0, xmm8, xmm0
          vsqrtss xmm1, xmm0, xmm0
          vmulss  xmm2, xmm1, dword ptr [r15+120Ch]
          vdivss  xmm7, xmm2, xmm6
        }
      }
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+2F0h+outAxis]
      vmovss  xmm5, dword ptr [rbp+2F0h+outAxis+4]
      vmovss  xmm6, dword ptr [rbp+2F0h+outAxis+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm3, xmm0, xmm8
      vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm3, cs:__real@3b03126f
      vcvtss2sd xmm0, xmm6, xmm6
      vcvtss2sd xmm1, xmm5, xmm5
      vcvtss2sd xmm2, xmm4, xmm4
      vmovsd  qword ptr [rsp+3F0h+contentMask], xmm0
      vmovsd  [rsp+3F0h+outTestPoint+8], xmm1
      vmovsd  [rsp+3F0h+outTestPoint], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 432, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( endAxis[0] ))", "%s\n\t%f %f %f, foundHit %d", "Vec3IsNormalized( endAxis[0] )", *(double *)&outTestPointa, *(double *)&outTestPoint_8, contentMask, v28) )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+2F0h+outAxis+0Ch]
      vmovss  xmm4, dword ptr [rbp+2F0h+outAxis+10h]
      vmovss  xmm5, dword ptr [rbp+2F0h+outAxis+14h]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm2, xmm0, xmm8
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm2, cs:__real@3b03126f
      vcvtss2sd xmm0, xmm5, xmm5
      vcvtss2sd xmm1, xmm4, xmm4
      vcvtss2sd xmm2, xmm3, xmm3
    }
    LODWORD(locational) = v28;
    __asm
    {
      vmovsd  qword ptr [rsp+3F0h+contentMask], xmm0
      vmovsd  [rsp+3F0h+outTestPoint+8], xmm1
      vmovsd  [rsp+3F0h+outTestPoint], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 433, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( endAxis[1] ))", "%s\n\t%f %f %f, foundHit %d", "Vec3IsNormalized( endAxis[1] )", *(double *)&outTestPointb, *(double *)&outTestPoint_8a, contentMaska, locational) )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+2F0h+outAxis+18h]
      vmovss  xmm4, dword ptr [rbp+2F0h+outAxis+1Ch]
      vmovss  xmm5, dword ptr [rbp+2F0h+outAxis+20h]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm2, xmm0, xmm8
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm2, cs:__real@3b03126f
      vcvtss2sd xmm0, xmm5, xmm5
      vcvtss2sd xmm1, xmm4, xmm4
      vcvtss2sd xmm2, xmm3, xmm3
    }
    LODWORD(locationala) = v28;
    __asm
    {
      vmovsd  qword ptr [rsp+3F0h+contentMask], xmm0
      vmovsd  [rsp+3F0h+outTestPoint+8], xmm1
      vmovsd  [rsp+3F0h+outTestPoint], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equip_deploy.cpp", 434, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( endAxis[2] ))", "%s\n\t%f %f %f, foundHit %d", "Vec3IsNormalized( endAxis[2] )", *(double *)&outTestPointc, *(double *)&outTestPoint_8b, contentMaskb, locationala) )
      __debugbreak();
    v115 = DCONST_DVARFLT_deploy_penTestSurfaceOffset;
    if ( !DCONST_DVARFLT_deploy_penTestSurfaceOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_penTestSurfaceOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v115);
    __asm
    {
      vaddss  xmm3, xmm7, dword ptr [rbx+28h]
      vmulss  xmm1, xmm3, dword ptr [rbp+2F0h+outAxis+18h]
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+outPos]
      vmulss  xmm1, xmm3, dword ptr [rbp+2F0h+outAxis+1Ch]
      vmovss  dword ptr [rbp+2F0h+start], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+outPos+4]
      vmulss  xmm1, xmm3, dword ptr [rbp+2F0h+outAxis+20h]
      vmovss  dword ptr [rbp+2F0h+start+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+outPos+8]
      vmovss  dword ptr [rbp+2F0h+start+8], xmm2
    }
    AxisToQuat(&outAxis, &out);
    PhysicsQuery_ImmediateShapecastClosest(worldId, shape, &start, &outPos, &out, &extendedData, &hit);
    v223 = 0;
    if ( hit.isValid )
    {
      __asm
      {
        vmovss  xmm6, [rbp+2F0h+hit.fraction]
        vcomiss xmm6, xmm11
        vcomiss xmm6, xmm8
      }
    }
    else
    {
      v223 = 1;
    }
    v225 = 1;
    if ( weapDef->deployRequireNoOverhang )
    {
      __asm { vmovss  xmm3, dword ptr [r15+120Ch]; scale }
      MatrixSet43((tmat43_t<vec3_t> *)&in2, &outPos, &outAxis, *(float *)&_XMM3);
      __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
      skipEntities = &v52->clientNum;
      v126 = s_overhangTestPoints;
      while ( 1 )
      {
        MatrixTransformVector43(v126, (const tmat43_t<vec3_t> *)&in2, &v239);
        _RBX = DCONST_DVARFLT_deploy_overhangTestOffset;
        if ( !DCONST_DVARFLT_deploy_overhangTestOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_overhangTestOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vxorps  xmm3, xmm0, xmm6
          vmulss  xmm2, xmm3, dword ptr [rbp+2F0h+outAxis+18h]
          vaddss  xmm0, xmm2, dword ptr [rbp+2F0h+var_2A8]
          vmulss  xmm2, xmm3, dword ptr [rbp+2F0h+outAxis+1Ch]
          vmovss  dword ptr [rbp+2F0h+angles], xmm0
          vaddss  xmm0, xmm2, dword ptr [rbp+2F0h+var_2A8+4]
          vmulss  xmm2, xmm3, dword ptr [rbp+2F0h+outAxis+20h]
          vmovss  dword ptr [rbp+2F0h+angles+4], xmm0
          vaddss  xmm0, xmm2, dword ptr [rbp+2F0h+var_2A8+8]
          vmovss  dword ptr [rbp+2F0h+angles+8], xmm0
        }
        PhysicsQuery_LegacyTraceSkipEntities(worldId, &results, &v239, &angles, &bounds_origin, skipEntities, 1, 1, v228, 0, NULL, All);
        __asm
        {
          vmovss  xmm0, [rbp+2F0h+results.fraction]
          vcomiss xmm0, xmm8
        }
        v137 = DCONST_DVARBOOL_deploy_debug;
        if ( !v64 )
          break;
        if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v137);
        if ( v137->current.enabled )
          pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &v239, &angles, &colorGreen, 1, 0);
        IsTraceContentsValid = IsTraceContentsValid && BG_Deploy_IsTraceContentsValid(&results);
        v49 += 12i64;
        ++v126;
        if ( v49 >= 0x30 )
          goto LABEL_80;
      }
      if ( !DCONST_DVARBOOL_deploy_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v137);
      if ( v137->current.enabled )
        pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &v239, &angles, &colorRed, 1, 0);
      v225 = 0;
    }
LABEL_80:
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2F0h+outAxis+18h]
      vmulss  xmm3, xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmovss  xmm1, dword ptr [rbp+2F0h+outAxis+1Ch]
      vmulss  xmm2, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmovss  xmm0, dword ptr [rbp+2F0h+outAxis+20h]
      vmulss  xmm1, xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1; val
      vmovaps xmm1, xmm12; min
      vmovaps xmm2, xmm8; max
    }
    v148 = 1;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    if ( weapDef->deployRequireOnWalkableSurface )
    {
      v150 = DCONST_DVARFLT_deploy_maxWalkableSlopeAngle;
      if ( !DCONST_DVARFLT_deploy_maxWalkableSlopeAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_maxWalkableSlopeAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v150);
      __asm
      {
        vmovss  xmm0, cs:__real@42b40000
        vsubss  xmm1, xmm0, dword ptr [rbx+28h]
        vmovss  xmm7, cs:__real@3c8efa35
        vmulss  xmm0, xmm1, xmm7; X
      }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmovaps xmm2, xmm8; max
        vmovaps xmm1, xmm12; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+2F0h+outTrace.normal+4]
        vmulss  xmm3, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vcomiss xmm6, xmm0
        vmovss  xmm0, dword ptr [rbp+2F0h+outTrace.normal]
        vmulss  xmm2, xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm3, dword ptr [rbp+2F0h+outTrace.normal+8]
        vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm0, xmm4, xmm0; val
        vmovaps xmm2, xmm8; max
        vmovaps xmm1, xmm12; min
      }
      v167 = !v64;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm7, dword ptr [r15+1220h]; X
      }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmovaps xmm2, xmm8; max
        vmovaps xmm1, xmm12; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vcomiss xmm0, xmm6 }
      v148 = v167;
      if ( !(v64 | v65) )
        v148 = 0;
    }
    _RBX = DCONST_DVARFLT_deploy_maxSkyDistanceRayCheck;
    __asm { vmovaps xmm12, [rsp+3F0h+var_80] }
    if ( !DCONST_DVARFLT_deploy_maxSkyDistanceRayCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_maxSkyDistanceRayCheck") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    v174 = DCONST_DVARBOOL_deploy_testMissileClip;
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    if ( !DCONST_DVARBOOL_deploy_testMissileClip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_testMissileClip") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v174);
    v176 = 387;
    v177 = DVARBOOL_deploy_allowInWater;
    if ( !v174->current.enabled )
      v176 = 259;
    if ( !DVARBOOL_deploy_allowInWater && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_allowInWater") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v177);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+outPos]
      vmulss  xmm1, xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    }
    v181 = v176 | 0x20;
    v65 = !v177->current.enabled;
    __asm
    {
      vmovss  dword ptr [rbp+2F0h+end], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+outPos+4]
      vmulss  xmm1, xmm6, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    }
    if ( !v65 )
      v181 = v176;
    __asm
    {
      vmovss  dword ptr [rbp+2F0h+end+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+outPos+8]
      vmovss  dword ptr [rbp+2F0h+end+8], xmm2
    }
    PhysicsQuery_LegacyTraceSkipEntities(worldId, &v249, &outPos, &end, &bounds_origin, &ps->clientNum, 1, 1, v181, 0, NULL, All);
    __asm
    {
      vmovss  xmm0, [rbp+2F0h+var_F0.fraction]
      vucomiss xmm0, xmm8
    }
    if ( v65 )
    {
      _RBX = DCONST_DVARFLT_deploy_maxSkyDistanceShapeCheck;
      if ( !DCONST_DVARFLT_deploy_maxSkyDistanceShapeCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_maxSkyDistanceShapeCheck") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+28h]
        vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm1, xmm0, dword ptr [rbp+2F0h+outPos]
        vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm0, xmm2, dword ptr [rbp+2F0h+outPos+4]
        vmovss  dword ptr [rbp+2F0h+end], xmm1
        vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm2, xmm1, dword ptr [rbp+2F0h+outPos+8]
      }
      extendedData.contents = v181;
      v186 = worldId;
      __asm
      {
        vmovss  dword ptr [rbp+2F0h+end+8], xmm2
        vmovss  dword ptr [rbp+2F0h+end+4], xmm0
      }
      PhysicsQuery_ImmediateShapecastClosest(worldId, shape, &outPos, &end, &out, &extendedData, &in2);
      if ( in2.isValid )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2F0h+in2+4]
          vucomiss xmm0, xmm8
        }
        v187 = 0;
      }
      else
      {
        v187 = 1;
      }
    }
    else
    {
      v186 = worldId;
      v187 = 0;
    }
    v197 = !weapDef->deployRequireSkyAbove || v187;
    if ( shape )
      Physics_ReleaseShape(v186, shape, 0);
    v198 = 0;
    if ( v224 )
      Physics_UnlockWorld(v186);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2F0h+outPos+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+2F0h+viewOrigin+8]
      vcomiss xmm1, dword ptr [r15+1218h]
    }
    if ( v198 )
    {
      __asm
      {
        vmovups xmm0, [rbp+2F0h+var_278]
        vmovsd  xmm1, [rbp+2F0h+var_268]
      }
      outResults->passCylinderTest = v223;
      __asm { vmovups xmmword ptr [rdi], xmm0 }
      outResults->passOverhangTest = v225;
      __asm { vmovsd  qword ptr [rdi+10h], xmm1 }
      outResults->passRangeTest = 1;
      outResults->passWalkableTest = v148;
      outResults->passSkyTest = v197;
      outResults->passMaterialTest = IsTraceContentsValid;
      __asm { vmovaps xmm3, xmm8; scale }
      outResults->hitEntityNum = Trace_GetEntityHitId(&outTrace);
      MatrixSet43(&outResults->transform, &outPos, &outAxis, *(float *)&_XMM3);
      result = 1;
      outResults->isSkyVisible = v187;
    }
    else
    {
      __asm { vmovaps xmm3, xmm8; scale }
      outResults->passRangeTest = 0;
      MatrixSet43(&outResults->transform, &origin, playerViewAxis, *(float *)&_XMM3);
      result = 0;
    }
    goto LABEL_118;
  }
  result = 0;
LABEL_119:
  _R11 = &v255;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
  return result;
}

