/*
==============
MountEdgeProperties::TransitionToAdjacent
==============
*/

void __fastcall MountEdgeProperties::TransitionToAdjacent(MountEdgeProperties *this, const BgHandler *handler, EdgeId adjacentId, bool isPreviousEdge)
{
  ?TransitionToAdjacent@MountEdgeProperties@@QEAAXPEBVBgHandler@@UEdgeId@@_N@Z(this, handler, adjacentId, isPreviousEdge);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/

bool __fastcall PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, const float edgeToEyeForward, const float edgeToEyeAbove, vec3_t *outEyePoint, tmat33_t<vec3_t> *outClampedEyeBasis)
{
  return ?PM_ContextMount_CalcMountEyePoint@@YA_NAEBUMountSurfaceDetailedProperties@@AEBUMountPlayerProperties@@MMAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(mountDetail, player, edgeToEyeForward, edgeToEyeAbove, outEyePoint, outClampedEyeBasis);
}

/*
==============
PM_ContextMount_DebugValidEdge
==============
*/

void __fastcall PM_ContextMount_DebugValidEdge(const MountPlayerProperties *player, const MountSurfaceDetailedProperties *mountDetail, const vec4_t *edgeColor, const vec4_t *coneColor, int edgeScoreOrdinal, int recurseCount, const char *text)
{
  ?PM_ContextMount_DebugValidEdge@@YAXAEBUMountPlayerProperties@@AEBUMountSurfaceDetailedProperties@@AEBTvec4_t@@2HHPEBD@Z(player, mountDetail, edgeColor, coneColor, edgeScoreOrdinal, recurseCount, text);
}

/*
==============
MountSurfaceDetailedProperties::MountSurfaceDetailedProperties
==============
*/

void __fastcall MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(MountSurfaceDetailedProperties *this)
{
  ??0MountSurfaceDetailedProperties@@QEAA@XZ(this);
}

/*
==============
MountPlayerProperties::MountPlayerProperties
==============
*/

void __fastcall MountPlayerProperties::MountPlayerProperties(MountPlayerProperties *this)
{
  ??0MountPlayerProperties@@QEAA@XZ(this);
}

/*
==============
PM_ContextMount_FindMountEdge_Initial
==============
*/

bool __fastcall PM_ContextMount_FindMountEdge_Initial(const MountPlayerProperties *player, MountSurfaceDetailedProperties *outSurfaceDetail)
{
  return ?PM_ContextMount_FindMountEdge_Initial@@YA_NAEBUMountPlayerProperties@@AEAUMountSurfaceDetailedProperties@@@Z(player, outSurfaceDetail);
}

/*
==============
MountEdgeProperties::Initialize
==============
*/

bool __fastcall MountEdgeProperties::Initialize(MountEdgeProperties *this, const BgHandler *handler, EdgeId argId, float argFraction, unsigned __int64 argNormalFaceIndex, ContextMountType argType)
{
  return ?Initialize@MountEdgeProperties@@QEAA_NPEBVBgHandler@@UEdgeId@@M_KW4ContextMountType@@@Z(this, handler, argId, argFraction, argNormalFaceIndex, argType);
}

/*
==============
PM_ContextMount_GetEdgeType
==============
*/

ContextMountType __fastcall PM_ContextMount_GetEdgeType(const vec3_t *entityUp, const tmat33_t<vec3_t> *eyeBasis, const vec3_t *edgeParallelVec, const vec3_t *edgeBelowVec)
{
  return ?PM_ContextMount_GetEdgeType@@YA?AW4ContextMountType@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@00@Z(entityUp, eyeBasis, edgeParallelVec, edgeBelowVec);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/

bool __fastcall PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, vec3_t *outEyePoint)
{
  return ?PM_ContextMount_CalcMountEyePoint@@YA_NAEBUMountSurfaceDetailedProperties@@AEBUMountPlayerProperties@@AEATvec3_t@@@Z(mountDetail, player, outEyePoint);
}

/*
==============
PM_ContextMount_CalcCandidateScore
==============
*/

double __fastcall PM_ContextMount_CalcCandidateScore(const MountPlayerProperties *player, const MountEdgeProperties *edge, const ContextMountType defaultType, const vec3_t *mountedEyeForward)
{
  double result; 

  *(float *)&result = ?PM_ContextMount_CalcCandidateScore@@YAMAEBUMountPlayerProperties@@AEBUMountEdgeProperties@@W4ContextMountType@@AEBTvec3_t@@@Z(player, edge, defaultType, mountedEyeForward);
  return result;
}

/*
==============
BG_ContextMount_CalcCameraMinDistToMountBrush
==============
*/

double __fastcall BG_ContextMount_CalcCameraMinDistToMountBrush()
{
  double result; 

  *(float *)&result = ?BG_ContextMount_CalcCameraMinDistToMountBrush@@YAMXZ();
  return result;
}

/*
==============
PM_ContextMount_FindMountEdge_Maintain
==============
*/

bool __fastcall PM_ContextMount_FindMountEdge_Maintain(const MountPlayerProperties *player, const pml_t *pml, const tmat33_t<vec3_t> *prevEyeBasis, MountSurfaceDetailedProperties *outSurfaceDetail)
{
  return ?PM_ContextMount_FindMountEdge_Maintain@@YA_NAEBUMountPlayerProperties@@AEBUpml_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAUMountSurfaceDetailedProperties@@@Z(player, pml, prevEyeBasis, outSurfaceDetail);
}

/*
==============
BG_ContextMount_CalcMountPoint
==============
*/

double __fastcall BG_ContextMount_CalcMountPoint(const BgHandler *handler, const MountSurfaceProperties *mount, vec3_t *outMountPoint)
{
  double result; 

  *(float *)&result = ?BG_ContextMount_CalcMountPoint@@YAMPEBVBgHandler@@AEBUMountSurfaceProperties@@AEATvec3_t@@@Z(handler, mount, outMountPoint);
  return result;
}

/*
==============
BG_ContextMount_CalcMountVectors
==============
*/

void __fastcall BG_ContextMount_CalcMountVectors(const BgHandler *handler, const MountSurfaceProperties *mount, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  ?BG_ContextMount_CalcMountVectors@@YAXPEBVBgHandler@@AEBUMountSurfaceProperties@@AEATvec3_t@@22@Z(handler, mount, outNormal, outParallel, outBelow);
}

/*
==============
MountEdgeProperties::SwitchSide
==============
*/

void __fastcall MountEdgeProperties::SwitchSide(MountEdgeProperties *this, const BgHandler *handler)
{
  ?SwitchSide@MountEdgeProperties@@QEAAXPEBVBgHandler@@@Z(this, handler);
}

/*
==============
MountEdgeProperties::MountEdgeProperties
==============
*/

void __fastcall MountEdgeProperties::MountEdgeProperties(MountEdgeProperties *this)
{
  ??0MountEdgeProperties@@QEAA@XZ(this);
}

/*
==============
PM_ContextMount_CalcFinalClampAngles
==============
*/

bool __fastcall PM_ContextMount_CalcFinalClampAngles(const MountPlayerProperties *player, const MountEdgeProperties *edge, MountSurfaceDetailedProperties *inOutDetailMount)
{
  return ?PM_ContextMount_CalcFinalClampAngles@@YA_NAEBUMountPlayerProperties@@AEBUMountEdgeProperties@@AEAUMountSurfaceDetailedProperties@@@Z(player, edge, inOutDetailMount);
}

/*
==============
EdgePropertyTuple::EdgePropertyTuple
==============
*/

void __fastcall EdgePropertyTuple::EdgePropertyTuple(EdgePropertyTuple *this)
{
  ??0EdgePropertyTuple@@QEAA@XZ(this);
}

/*
==============
MountEdgeProperties::Initialize
==============
*/

bool __fastcall MountEdgeProperties::Initialize(MountEdgeProperties *this, const BgHandler *handler, EdgeId argId, float argFraction, const MountPlayerProperties *argPlayer)
{
  return ?Initialize@MountEdgeProperties@@QEAA_NPEBVBgHandler@@UEdgeId@@MAEBUMountPlayerProperties@@@Z(this, handler, argId, argFraction, argPlayer);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/

bool __fastcall PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, vec3_t *outEyePoint, tmat33_t<vec3_t> *outClampedEyeBasis)
{
  return ?PM_ContextMount_CalcMountEyePoint@@YA_NAEBUMountSurfaceDetailedProperties@@AEBUMountPlayerProperties@@AEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(mountDetail, player, outEyePoint, outClampedEyeBasis);
}

/*
==============
PM_ContextMount_EmitAdjacentEdgeForViewangles
==============
*/

bool __fastcall PM_ContextMount_EmitAdjacentEdgeForViewangles(const MountPlayerProperties *player, const MountEdgeProperties *edge, const int edgeScoreOrdinal, const int recurseCount, ContextMountTransitionType *inOutTransType, EdgeId *outAdjacentEdgeId)
{
  return ?PM_ContextMount_EmitAdjacentEdgeForViewangles@@YA_NAEBUMountPlayerProperties@@AEBUMountEdgeProperties@@HHAEAW4ContextMountTransitionType@@AEAUEdgeId@@@Z(player, edge, edgeScoreOrdinal, recurseCount, inOutTransType, outAdjacentEdgeId);
}

/*
==============
PM_ContextMount_BuildCandidatesFromEdgeId
==============
*/

void __fastcall PM_ContextMount_BuildCandidatesFromEdgeId(const MountPlayerProperties *player, const EdgeId *initialEdgeId, const float fraction, const int edgeScoreOrdinal, EdgePropertyTuple *outEdgeProperties, int *outCount)
{
  ?PM_ContextMount_BuildCandidatesFromEdgeId@@YAXAEBUMountPlayerProperties@@AEBUEdgeId@@MHPEAUEdgePropertyTuple@@PEAH@Z(player, initialEdgeId, fraction, edgeScoreOrdinal, outEdgeProperties, outCount);
}

/*
==============
PM_ContextMount_DebugFailedEdge
==============
*/

void __fastcall PM_ContextMount_DebugFailedEdge(const MountPlayerProperties *player, MountEdgeProperties *edge, int edgeScoreOrdinal, int recurseCount, const char *reasonStr)
{
  ?PM_ContextMount_DebugFailedEdge@@YAXAEBUMountPlayerProperties@@UMountEdgeProperties@@HHPEBD@Z(player, edge, edgeScoreOrdinal, recurseCount, reasonStr);
}

/*
==============
BG_ContextMount_CalcCameraMinDistToPlayerClip
==============
*/

double __fastcall BG_ContextMount_CalcCameraMinDistToPlayerClip()
{
  double result; 

  *(float *)&result = ?BG_ContextMount_CalcCameraMinDistToPlayerClip@@YAMXZ();
  return result;
}

/*
==============
EdgePropertyTuple::EdgePropertyTuple
==============
*/
void EdgePropertyTuple::EdgePropertyTuple(EdgePropertyTuple *this)
{
  this->edge.isInitialized = 0;
  EdgeId::Clear(&this->edge.id);
  *(_QWORD *)&this->viewDot = -8388609i64;
}

/*
==============
MountEdgeProperties::MountEdgeProperties
==============
*/
void MountEdgeProperties::MountEdgeProperties(MountEdgeProperties *this)
{
  this->isInitialized = 0;
  EdgeId::Clear(&this->id);
}

/*
==============
MountPlayerProperties::MountPlayerProperties
==============
*/
void MountPlayerProperties::MountPlayerProperties(MountPlayerProperties *this)
{
  this->handler = NULL;
  this->ps = NULL;
}

/*
==============
MountSurfaceDetailedProperties::MountSurfaceDetailedProperties
==============
*/
void MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(MountSurfaceDetailedProperties *this)
{
  this->minClampDeg.v[0] = -180.0;
  *(_QWORD *)&this->minResistDeg.y = 0i64;
  this->maxResistDeg.v[1] = 0.0;
  this->minClampDeg.v[1] = -180.0;
  this->maxClampDeg.v[0] = 180.0;
  *(_QWORD *)&this->maxClampDeg.y = 1127481344i64;
}

/*
==============
BG_ContextMount_CalcCameraMinAngleToWallRad
==============
*/

double __fastcall BG_ContextMount_CalcCameraMinAngleToWallRad(float edgeToEyeForward, double edgeToEyeAbove)
{
  float v2; 
  const dvar_t *v4; 
  double result; 

  v2 = *(float *)&edgeToEyeAbove;
  BG_ContextMount_CalcCameraMinRadiusZNear();
  v4 = DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush;
  if ( !DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_camera_min_dist_to_mountbrush") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  _XMM0 = v4->current.unsignedInt;
  __asm { vmaxss  xmm8, xmm0, xmm7 }
  if ( edgeToEyeForward <= 0.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2763, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( edgeToEyeForward )", "%s < %s\n\t%g, %g", "0.0f", "edgeToEyeForward", *(double *)&_XMM1, edgeToEyeForward) )
      __debugbreak();
  }
  result = I_fclamp((float)(*(float *)&_XMM8 - v2) / edgeToEyeForward, 0.0, 1.0);
  *(float *)&result = asinf_0(*(float *)&result);
  return result;
}

/*
==============
BG_ContextMount_CalcCameraMinDistToMountBrush
==============
*/
float BG_ContextMount_CalcCameraMinDistToMountBrush()
{
  const dvar_t *v0; 

  BG_ContextMount_CalcCameraMinRadiusZNear();
  v0 = DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush;
  if ( !DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_camera_min_dist_to_mountbrush") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  _XMM0 = v0->current.unsignedInt;
  __asm { vmaxss  xmm0, xmm0, xmm6 }
  return *(float *)&_XMM0;
}

/*
==============
BG_ContextMount_CalcCameraMinDistToPlayerClip
==============
*/
float BG_ContextMount_CalcCameraMinDistToPlayerClip()
{
  const dvar_t *v0; 
  float value; 
  const dvar_t *v2; 
  const dvar_t *v3; 

  v0 = DCONST_DVARFLT_mount_tuning_camera_min_dist_to_clip;
  if ( !DCONST_DVARFLT_mount_tuning_camera_min_dist_to_clip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_camera_min_dist_to_clip") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  value = v0->current.value;
  v2 = DCONST_DVARFLT_mount_tuning_znear;
  if ( !DCONST_DVARFLT_mount_tuning_znear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_znear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( (float)(v2->current.value * 1.7434469) > value )
  {
    v3 = DCONST_DVARFLT_mount_tuning_znear;
    if ( !DCONST_DVARFLT_mount_tuning_znear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_znear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2739, ASSERT_TYPE_ASSERT, "( BG_ContextMount_CalcCameraMinRadiusZNear() ) <= ( dvarRadius )", "%s <= %s\n\t%g, %g", "BG_ContextMount_CalcCameraMinRadiusZNear()", "dvarRadius", (float)(v3->current.value * 1.7434469), value) )
      __debugbreak();
  }
  return value;
}

/*
==============
BG_ContextMount_CalcCameraMinRadiusZNear
==============
*/
float BG_ContextMount_CalcCameraMinRadiusZNear()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARFLT_mount_tuning_znear;
  if ( !DCONST_DVARFLT_mount_tuning_znear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_znear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value * 1.7434469;
}

/*
==============
BG_ContextMount_CalcMountPoint
==============
*/
float BG_ContextMount_CalcMountPoint(const BgHandler *handler, const MountSurfaceProperties *mount, vec3_t *outMountPoint)
{
  float result; 
  __m128 transitionFraction_low; 
  __m128 v10; 
  float4 r_outEdgePoint; 
  float4 v16; 

  _RBX = outMountPoint;
  Edge_CalculatePoint(handler, mount->id, mount->fraction, &r_outEdgePoint);
  if ( EdgeId::IsValid(&mount->adjId) )
  {
    Edge_CalculatePoint(handler, mount->adjId, mount->adjFraction, &v16);
    transitionFraction_low = (__m128)LODWORD(mount->transitionFraction);
    transitionFraction_low.m128_f32[0] = (float)((float)((float)((float)(transitionFraction_low.m128_f32[0] * 6.0) - 15.0) * transitionFraction_low.m128_f32[0]) + 10.0) * (float)((float)(transitionFraction_low.m128_f32[0] * transitionFraction_low.m128_f32[0]) * transitionFraction_low.m128_f32[0]);
    _XMM3 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(transitionFraction_low, transitionFraction_low, 0), _mm128_sub_ps(v16.v, r_outEdgePoint.v)), r_outEdgePoint.v);
    v10 = _mm128_sub_ps(r_outEdgePoint.v, v16.v);
    _XMM1 = _mm128_mul_ps(v10, v10);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
    }
    LODWORD(result) = _mm_sqrt_ps(_XMM0).m128_u32[0];
    _RBX->v[0] = _XMM3.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rbx+4], xmm3, 1
      vextractps dword ptr [rbx+8], xmm3, 2
    }
  }
  else
  {
    _XMM1 = r_outEdgePoint.v;
    _RBX->v[0] = r_outEdgePoint.v.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rbx+4], xmm1, 1
      vextractps dword ptr [rbx+8], xmm1, 2
    }
    return 0.0;
  }
  return result;
}

/*
==============
BG_ContextMount_CalcMountVectors
==============
*/
void BG_ContextMount_CalcMountVectors(const BgHandler *handler, const MountSurfaceProperties *mount, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  __m128 v9; 
  float v10; 
  float v11; 
  float v12; 
  __m128 v13; 
  float v14; 
  float v15; 
  float v16; 
  __m128 v17; 
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
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  int v33; 
  __m128 v; 
  __m128 v35; 
  const float4 *v39; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v47; 
  __m128 v50; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v62; 
  __m128 v63; 
  __m128 v64; 
  __m128 v65; 
  __m128 v66; 
  float v67; 
  float v68; 
  float v69; 
  __m128 v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float4 v82; 
  float4 v83; 
  float4 outNormala; 
  float4 v85; 
  float4 v86; 
  float4 v87; 
  float4 v88; 
  float4 v89; 

  _RBP = mount;
  if ( mount->type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 313, ASSERT_TYPE_ASSERT, "(mount.type != MOUNT_TYPE_NONE)", (const char *)&queryFormat, "mount.type != MOUNT_TYPE_NONE") )
    __debugbreak();
  Edge_CalculateVectors(handler, _RBP->id, _RBP->fraction, _RBP->normalFaceIndex, &outNormala, &v85, &v86);
  if ( EdgeId::IsValid(&_RBP->adjId) )
  {
    Edge_CalculateVectors(handler, _RBP->adjId, _RBP->adjFraction, _RBP->adjNormalFaceIndex, &v87, &v89, &v88);
    v = outNormala.v;
    v35 = v87.v;
    _XMM0 = _mm128_mul_ps(outNormala.v, v87.v);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    *(double *)_XMM0.m128_u64 = j___vdecl_acosf4();
    v41 = _mm128_mul_ps(_mm_shuffle_ps(v, v, 201), _mm_shuffle_ps(v35, v35, 210));
    v42 = _mm_shuffle_ps(v35, v35, 201);
    v43 = v85.v;
    _XMM2 = _mm128_mul_ps(_mm128_sub_ps(v41, _mm128_mul_ps(_mm_shuffle_ps(v, v, 210), v42)), v85.v);
    __asm
    {
      vinsertps xmm1, xmm2, xmm2, 8
      vhaddps xmm3, xmm1, xmm1
    }
    v47 = _XMM0;
    __asm { vhaddps xmm2, xmm3, xmm3 }
    if ( *(float *)&_XMM2 < 0.0 )
      v47 = _mm128_sub_ps((__m128)0i64, _XMM0);
    __asm { vbroadcastss xmm0, dword ptr [rbp+1Ch] }
    v50 = _mm128_mul_ps(_XMM0, v47);
    _XMM0 = _mm128_mul_ps(v85.v, v85.v);
    __asm { vinsertps xmm1, xmm0, xmm0, 8 }
    _mm128_mul_ps(v50, g_oneHalf.v);
    __asm { vhaddps xmm6, xmm1, xmm1 }
    Float4SinCos(v39, &v82, &v83);
    __asm
    {
      vhaddps xmm0, xmm6, xmm6
      vrsqrtps xmm1, xmm0
    }
    _XMM3 = _mm128_mul_ps(_mm128_mul_ps(_XMM1, v43), v82.v);
    __asm { vblendps xmm0, xmm3, [rsp+178h+var_108], 8 }
    v58 = _mm_shuffle_ps(_XMM0, _XMM0, 210);
    v59 = _mm_shuffle_ps(_XMM0, _XMM0, 201);
    v60 = _mm_shuffle_ps(_XMM0, _XMM0, 255);
    v61 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(outNormala.v, outNormala.v, 210), v59), _mm128_mul_ps(_mm_shuffle_ps(outNormala.v, outNormala.v, 201), v58));
    v62 = _mm128_add_ps(v61, v61);
    v63 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v62, v62, 210), v59), _mm128_mul_ps(_mm_shuffle_ps(v62, v62, 201), v58)), _mm128_add_ps(_mm128_mul_ps(v60, v62), outNormala.v));
    v64 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v86.v, v86.v, 210), v59), _mm128_mul_ps(_mm_shuffle_ps(v86.v, v86.v, 201), v58));
    v65 = _mm128_add_ps(v64, v64);
    v66 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v65, v65, 210), v59), _mm128_mul_ps(_mm_shuffle_ps(v65, v65, 201), v58)), _mm128_add_ps(_mm128_mul_ps(v60, v65), v86.v));
    v67 = _mm_shuffle_ps(v63, v63, 85).m128_f32[0];
    v68 = _mm_shuffle_ps(v63, v63, 170).m128_f32[0];
    v69 = (float)((float)(v63.m128_f32[0] * v63.m128_f32[0]) + (float)(v67 * v67)) + (float)(v68 * v68);
    outNormal->v[0] = v63.m128_f32[0];
    outNormal->v[1] = v67;
    outNormal->v[2] = v68;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v69 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 361, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal ) )", "(%g, %g, %g) len %g", v63.m128_f32[0], v67, v68, fsqrt(v69)) )
      __debugbreak();
    v70 = v85.v;
    v71 = _mm_shuffle_ps(v70, v70, 85).m128_f32[0];
    v72 = _mm_shuffle_ps(v70, v70, 170).m128_f32[0];
    v73 = (float)((float)(v71 * v71) + (float)(v70.m128_f32[0] * v70.m128_f32[0])) + (float)(v72 * v72);
    outParallel->v[0] = v85.v.m128_f32[0];
    outParallel->v[1] = v71;
    outParallel->v[2] = v72;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v73 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 363, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outParallel ) )", "(%g, %g, %g) len %g", v70.m128_f32[0], v71, v72, fsqrt(v73)) )
      __debugbreak();
    v74 = _mm_shuffle_ps(v66, v66, 85).m128_f32[0];
    v75 = _mm_shuffle_ps(v66, v66, 170).m128_f32[0];
    v76 = (float)((float)(v74 * v74) + (float)(v66.m128_f32[0] * v66.m128_f32[0])) + (float)(v75 * v75);
    outBelow->v[0] = v66.m128_f32[0];
    outBelow->v[1] = v74;
    outBelow->v[2] = v75;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v76 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 365, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outBelow ) )", "(%g, %g, %g) len %g", v66.m128_f32[0], v74, v75, fsqrt(v76)) )
      __debugbreak();
    v77 = outParallel->v[1];
    v78 = outParallel->v[2];
    v79 = outNormal->v[1];
    v80 = outNormal->v[2];
    v81 = (float)((float)(outParallel->v[0] * outNormal->v[0]) + (float)(v79 * v77)) + (float)(v80 * v78);
    if ( COERCE_FLOAT(LODWORD(v81) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 366, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outParallel ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outNormal->v[0], v79, v80, outParallel->v[0], v77, v78, v81) )
      __debugbreak();
    v26 = outBelow->v[1];
    v27 = outNormal->v[1];
    v28 = outNormal->v[0];
    v29 = outBelow->v[0];
    v30 = outBelow->v[2];
    v31 = outNormal->v[2];
    v32 = (float)((float)(outBelow->v[0] * outNormal->v[0]) + (float)(v26 * v27)) + (float)(v30 * v31);
    if ( COERCE_FLOAT(LODWORD(v32) & _xmm) >= 0.001 )
    {
      v33 = 367;
LABEL_35:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", v33, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outBelow ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v28, v27, v31, v29, v26, v30, v32) )
        __debugbreak();
    }
  }
  else
  {
    v9 = outNormala.v;
    v10 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    v11 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    v12 = (float)((float)(v10 * v10) + (float)(v9.m128_f32[0] * v9.m128_f32[0])) + (float)(v11 * v11);
    outNormal->v[0] = outNormala.v.m128_f32[0];
    outNormal->v[1] = v10;
    outNormal->v[2] = v11;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 322, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal ) )", "(%g, %g, %g) len %g", v9.m128_f32[0], v10, v11, fsqrt(v12)) )
      __debugbreak();
    v13 = v85.v;
    v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
    v15 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
    v16 = (float)((float)(v14 * v14) + (float)(v13.m128_f32[0] * v13.m128_f32[0])) + (float)(v15 * v15);
    outParallel->v[0] = v85.v.m128_f32[0];
    outParallel->v[1] = v14;
    outParallel->v[2] = v15;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 324, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outParallel ) )", "(%g, %g, %g) len %g", v13.m128_f32[0], v14, v15, fsqrt(v16)) )
      __debugbreak();
    v17 = v86.v;
    v18 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
    v19 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
    v20 = (float)((float)(v18 * v18) + (float)(v17.m128_f32[0] * v17.m128_f32[0])) + (float)(v19 * v19);
    outBelow->v[0] = v86.v.m128_f32[0];
    outBelow->v[1] = v18;
    outBelow->v[2] = v19;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 326, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outBelow ) )", "(%g, %g, %g) len %g", v17.m128_f32[0], v18, v19, fsqrt(v20)) )
      __debugbreak();
    v21 = outParallel->v[1];
    v22 = outParallel->v[2];
    v23 = outNormal->v[1];
    v24 = outNormal->v[2];
    v25 = (float)((float)(outParallel->v[0] * outNormal->v[0]) + (float)(v23 * v21)) + (float)(v24 * v22);
    if ( COERCE_FLOAT(LODWORD(v25) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 327, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outParallel ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outNormal->v[0], v23, v24, outParallel->v[0], v21, v22, v25) )
      __debugbreak();
    v26 = outBelow->v[1];
    v27 = outNormal->v[1];
    v28 = outNormal->v[0];
    v29 = outBelow->v[0];
    v30 = outBelow->v[2];
    v31 = outNormal->v[2];
    v32 = (float)((float)(outBelow->v[0] * outNormal->v[0]) + (float)(v26 * v27)) + (float)(v30 * v31);
    if ( COERCE_FLOAT(LODWORD(v32) & _xmm) >= 0.001 )
    {
      v33 = 328;
      goto LABEL_35;
    }
  }
}

/*
==============
BG_ContextMount_GetMountUpVector
==============
*/
void BG_ContextMount_GetMountUpVector(const ContextMountType mountType, const tmat33_t<vec3_t> *eyeBasis, vec3_t *outMountUpDir)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  if ( mountType == MOUNT_TYPE_TOP )
  {
LABEL_6:
    *(double *)outMountUpDir->v = *(double *)eyeBasis->row2.v;
    v5 = eyeBasis->m[2].v[2];
LABEL_7:
    outMountUpDir->v[2] = v5;
    goto LABEL_8;
  }
  if ( mountType == MOUNT_TYPE_LEFT )
  {
    *(double *)outMountUpDir->v = *(double *)eyeBasis->row1.v;
    v5 = eyeBasis->m[1].v[2];
    goto LABEL_7;
  }
  if ( mountType != MOUNT_TYPE_RIGHT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 211, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BG_ContextMount_GetMountUpVector(): Unsupported mount type %i.", mountType) )
      __debugbreak();
    goto LABEL_6;
  }
  outMountUpDir->v[0] = COERCE_FLOAT(LODWORD(eyeBasis->m[1].v[0]) ^ _xmm);
  outMountUpDir->v[1] = COERCE_FLOAT(LODWORD(eyeBasis->m[1].v[1]) ^ _xmm);
  outMountUpDir->v[2] = COERCE_FLOAT(LODWORD(eyeBasis->m[1].v[2]) ^ _xmm);
LABEL_8:
  v6 = outMountUpDir->v[1];
  v7 = outMountUpDir->v[0];
  v8 = outMountUpDir->v[2];
  v9 = (float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 216, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outMountUpDir ) )", "(%g, %g, %g) len %g", v7, v6, v8, fsqrt(v9)) )
    __debugbreak();
}

/*
==============
BG_ContextMount_Quantize
==============
*/
float BG_ContextMount_Quantize(const float value, const float quantum)
{
  if ( quantum <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1448, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( quantum )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "quantum", DOUBLE_9_999999974752427eN7, quantum) )
    __debugbreak();
  return (float)(int)(float)((float)((float)(quantum * 0.5) + value) / quantum) * quantum;
}

/*
==============
MountEdgeProperties::Initialize
==============
*/
bool MountEdgeProperties::Initialize(MountEdgeProperties *this, const BgHandler *handler, EdgeId argId, float argFraction, const MountPlayerProperties *argPlayer)
{
  double v8; 
  char *p_below; 
  double v10; 
  const dvar_t *v11; 
  float v12; 
  ContextMountType v13; 
  const dvar_t *v14; 
  bool result; 
  char v16; 

  this->id = argId;
  this->fraction = argFraction;
  Edge_CalculatePoint(handler, argId, argFraction, &this->point);
  v8 = Edge_CalculateOpenAngleRad(argId);
  p_below = (char *)&this->below;
  this->openAngleRad = *(float *)&v8;
  this->normalFaceIndex = Edge_CalculateVectors(handler, argId, argFraction, &argPlayer->worldBasis.m[2], &argPlayer->eyeBasis, &this->normal, &this->parallel, &this->below, &this->otherNormal);
  v10 = AngleBetween(&argPlayer->worldBasis.m[2], &this->parallel);
  v11 = DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope;
  LODWORD(v12) = COERCE_UNSIGNED_INT(*(float *)&v10 - 90.0) & _xmm;
  if ( !DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_top_mount_max_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v12 > v11->current.value )
  {
    v14 = DCONST_DVARFLT_mount_tuning_side_mount_min_slope;
    if ( !DCONST_DVARFLT_mount_tuning_side_mount_min_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_mount_min_slope") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v12 < v14->current.value )
    {
      v13 = MOUNT_TYPE_NONE;
    }
    else
    {
      if ( p_below == &v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v13 = ((float)((float)((float)(this->below.v[1] * argPlayer->eyeBasis.m[1].v[1]) + (float)(*(float *)p_below * argPlayer->eyeBasis.m[1].v[0])) + (float)(this->below.v[2] * argPlayer->eyeBasis.m[1].v[2])) >= 0.0) + 2;
    }
  }
  else
  {
    v13 = MOUNT_TYPE_TOP;
  }
  this->type = v13;
  result = v13 != MOUNT_TYPE_NONE;
  this->isInitialized = result;
  return result;
}

/*
==============
MountEdgeProperties::Initialize
==============
*/
bool MountEdgeProperties::Initialize(MountEdgeProperties *this, const BgHandler *handler, EdgeId argId, float argFraction, unsigned __int64 argNormalFaceIndex, ContextMountType argType)
{
  double v9; 
  bool result; 

  this->normalFaceIndex = argNormalFaceIndex;
  this->id = argId;
  this->fraction = argFraction;
  this->type = argType;
  Edge_CalculatePoint(handler, argId, argFraction, &this->point);
  v9 = Edge_CalculateOpenAngleRad(argId);
  this->openAngleRad = *(float *)&v9;
  Edge_CalculateVectors(handler, argId, argFraction, argNormalFaceIndex, &this->normal, &this->parallel, &this->below, &this->otherNormal);
  result = 1;
  this->isInitialized = 1;
  return result;
}

/*
==============
PM_ContextMount_BuildCandidatesFromEdgeId
==============
*/
void PM_ContextMount_BuildCandidatesFromEdgeId(const MountPlayerProperties *player, const EdgeId *initialEdgeId, const float fraction, const int edgeScoreOrdinal, EdgePropertyTuple *outEdgeProperties, int *outCount)
{
  const EdgeId *v7; 
  ContextMountType type; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  ContextMountType v14; 
  int v15; 
  ContextMountTransitionType v16; 
  float v17; 
  float v18; 
  const dvar_t *v19; 
  const BgHandler *handler; 
  _BOOL8 v21; 
  float v22; 
  EdgeId id; 
  double v24; 
  EdgePropertyTuple *v25; 
  double v26; 
  vec3_t *outClampedEyeForward; 
  vec3_t *outClampedEyeForwarda; 
  vec3_t *outBelow; 
  vec3_t *outOtherNormal; 
  ntl::random_access_iterator_tag v31; 
  int v32; 
  ContextMountTransitionType inOutTransType; 
  ContextMountType v34; 
  EdgeId outAdjacentEdgeId; 
  const EdgeId *v36; 
  __int64 v37; 
  EdgePropertyTuple v38; 
  vec3_t v39; 
  MountEdgeProperties edge; 
  MountEdgeProperties v41; 
  double v42; 

  v37 = -2i64;
  v7 = initialEdgeId;
  v36 = initialEdgeId;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_BuildCandidatesFromEdgeId");
  if ( !outEdgeProperties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2181, ASSERT_TYPE_ASSERT, "( outEdgeProperties ) != ( nullptr )", "%s != %s\n\t%p, %p", "outEdgeProperties", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2182, ASSERT_TYPE_ASSERT, "( outCount ) != ( nullptr )", "%s != %s\n\t%p, %p", "outCount", "nullptr", NULL, NULL) )
    __debugbreak();
  *outCount = 0;
  edge.isInitialized = 0;
  EdgeId::Clear(&edge.id);
  if ( MountEdgeProperties::Initialize(&edge, player->handler, *v7, fraction, player) )
  {
    type = edge.type;
    v34 = edge.type;
    if ( !PM_ContextMount_IsValidEdge_Set(player, &edge, edgeScoreOrdinal, 0) )
      goto LABEL_57;
    v32 = 0;
    while ( 1 )
    {
      if ( edge.type >= (unsigned int)COUNT_MOUNT_TYPE )
      {
        LODWORD(outBelow) = 4;
        LODWORD(outClampedEyeForward) = edge.type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2207, ASSERT_TYPE_ASSERT, "(unsigned)( initialEdge.type ) < (unsigned)( COUNT_MOUNT_TYPE )", "initialEdge.type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", outClampedEyeForward, outBelow) )
          __debugbreak();
      }
      v41 = edge;
      inOutTransType = MOUNT_TRANSITION_TYPE_NONE;
      if ( PM_ContextMount_IsValidEdge_Preliminary(player, &v41, 1, edgeScoreOrdinal, 0, &v39) )
      {
        if ( (unsigned int)*outCount >= 6 )
        {
          LODWORD(outBelow) = 6;
          LODWORD(outClampedEyeForwarda) = *outCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2215, ASSERT_TYPE_ASSERT, "(unsigned)( *outCount ) < (unsigned)( (6) )", "*outCount doesn't index MAX_EDGE_ADJACENT_CANDIDATES\n\t%i not in [0, %i)", outClampedEyeForwarda, outBelow) )
            __debugbreak();
        }
        outEdgeProperties[*outCount].edge = v41;
        v11 = (float)((float)(v39.v[1] * player->eyeBasis.m[0].v[1]) + (float)(v39.v[0] * player->eyeBasis.m[0].v[0])) + (float)(v39.v[2] * player->eyeBasis.m[0].v[2]);
        v10 = v11;
        if ( type != v41.type )
        {
          v12 = DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement;
          if ( !DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_switch_min_dot_improvement") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v12);
          v10 = v11 - v12->current.value;
          v7 = v36;
        }
        outEdgeProperties[*outCount].viewDot = v10;
        outEdgeProperties[(*outCount)++].recurseCount = 0;
        v13 = 1;
        v14 = v41.type;
        if ( v41.type != MOUNT_TYPE_TOP )
          v13 = 3;
        v15 = 1;
        if ( v13 <= 1 )
          goto LABEL_44;
        do
        {
          EdgeId::Clear(&outAdjacentEdgeId);
          if ( !PM_ContextMount_EmitAdjacentEdgeForViewangles(player, &v41, edgeScoreOrdinal, v15, &inOutTransType, &outAdjacentEdgeId) || !EdgeId::IsValid(&outAdjacentEdgeId) || outAdjacentEdgeId == *v7 )
            break;
          v16 = inOutTransType;
          if ( inOutTransType == MOUNT_TRANSITION_TYPE_NONE )
          {
            LODWORD(outOtherNormal) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2243, ASSERT_TYPE_ASSERT, "( transType ) != ( MOUNT_TRANSITION_TYPE_NONE )", "%s != %s\n\t%i, %i", "transType", "MOUNT_TRANSITION_TYPE_NONE", outOtherNormal, 0i64) )
              __debugbreak();
          }
          MountEdgeProperties::TransitionToAdjacent(&v41, player->handler, outAdjacentEdgeId, v16 != MOUNT_TRANSITION_TYPE_FORWARD);
          if ( !PM_ContextMount_IsValidEdge_Preliminary(player, &v41, 1, edgeScoreOrdinal, 0, &v39) || !PM_ContextMount_IsValidEdge_Adjacency(player, &v41, edgeScoreOrdinal, v15) )
            break;
          if ( (unsigned int)*outCount >= 6 )
          {
            LODWORD(outBelow) = 6;
            LODWORD(outClampedEyeForwarda) = *outCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2259, ASSERT_TYPE_ASSERT, "(unsigned)( *outCount ) < (unsigned)( (6) )", "*outCount doesn't index MAX_EDGE_ADJACENT_CANDIDATES\n\t%i not in [0, %i)", outClampedEyeForwarda, outBelow) )
              __debugbreak();
          }
          outEdgeProperties[*outCount].edge = v41;
          v18 = (float)((float)(v39.v[1] * player->eyeBasis.m[0].v[1]) + (float)(v39.v[0] * player->eyeBasis.m[0].v[0])) + (float)(v39.v[2] * player->eyeBasis.m[0].v[2]);
          v17 = v18;
          if ( v34 != v41.type )
          {
            v19 = DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement;
            if ( !DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_switch_min_dot_improvement") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v19);
            v17 = v18 - v19->current.value;
          }
          outEdgeProperties[*outCount].viewDot = v17;
          outEdgeProperties[(*outCount)++].recurseCount = v15++;
          v7 = v36;
        }
        while ( v15 < (int)v13 );
      }
      v14 = v41.type;
LABEL_44:
      if ( v14 != MOUNT_TYPE_TOP && v32 <= 0 )
      {
        handler = player->handler;
        if ( !edge.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 185, ASSERT_TYPE_ASSERT, "(this->isInitialized)", (const char *)&queryFormat, "this->isInitialized") )
          __debugbreak();
        if ( LODWORD(edge.normalFaceIndex) >= 2 )
        {
          LODWORD(outBelow) = 2;
          LODWORD(outClampedEyeForwarda) = edge.normalFaceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( this->normalFaceIndex ) < (unsigned)( 2 )", "this->normalFaceIndex doesn't index 2\n\t%i not in [0, %i)", outClampedEyeForwarda, outBelow) )
            __debugbreak();
        }
        v21 = edge.normalFaceIndex == 0;
        if ( (unsigned int)(edge.type - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 190, ASSERT_TYPE_ASSERT, "((this->type == MOUNT_TYPE_LEFT) || (this->type == MOUNT_TYPE_RIGHT))", (const char *)&queryFormat, "(this->type == MOUNT_TYPE_LEFT) || (this->type == MOUNT_TYPE_RIGHT)") )
          __debugbreak();
        v22 = edge.fraction;
        id = edge.id;
        edge.normalFaceIndex = v21;
        edge.type = (edge.type == MOUNT_TYPE_LEFT) + 2;
        Edge_CalculatePoint(handler, edge.id, edge.fraction, &edge.point);
        v24 = Edge_CalculateOpenAngleRad(id);
        edge.openAngleRad = *(float *)&v24;
        Edge_CalculateVectors(handler, id, v22, v21, &edge.normal, &edge.parallel, &edge.below, &edge.otherNormal);
        edge.isInitialized = 1;
        ++v32;
        v7 = v36;
        type = v34;
        if ( v32 < 2 )
          continue;
      }
      v41.isInitialized = 0;
      EdgeId::Clear(&v41.id);
      HIDWORD(v42) = -1;
      v25 = &outEdgeProperties[*outCount];
      v38.edge = v41;
      HIDWORD(v26) = -1;
      *(float *)&v26 = -3.4028235e38;
      v42 = v26;
      *(double *)&v38.viewDot = v26;
      ntl::sort<EdgePropertyTuple *,EdgePropertyTuple>(outEdgeProperties, v25, &v38, v31);
      goto LABEL_57;
    }
  }
  v41 = edge;
  PM_ContextMount_DebugFailedEdge(player, &v41, edgeScoreOrdinal, 0, "no type");
LABEL_57:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_ContextMount_BuildClipPlanes
==============
*/
void PM_ContextMount_BuildClipPlanes(const MountPlayerProperties *player, EdgeOctreeQueryShape *queryShape)
{
  const dvar_t *v2; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  float value; 
  float v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  vec3_t falseClipPlaneNormals; 
  int v28; 
  int v29; 
  int v30; 
  vec3_t falseClipPlanePoints; 
  float v32; 
  float v33; 
  float v34; 
  vec3_t trueClipPlaneNormals; 
  int v36; 
  int v37; 
  int v38; 
  vec3_t trueClipPlanePoints; 
  float v40; 
  float v41; 
  float v42; 

  v2 = DCONST_DVARMPFLT_mount_side_min_height;
  v5 = player->worldBasis.m[2].v[1];
  trueClipPlaneNormals.v[0] = player->worldBasis.m[2].v[0];
  trueClipPlaneNormals.v[2] = player->worldBasis.m[2].v[2];
  trueClipPlaneNormals.v[1] = v5;
  if ( !DCONST_DVARMPFLT_mount_side_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v6 = player->worldBasis.m[2].v[0];
  v7 = player->worldBasis.m[2].v[1];
  v8 = player->worldBasis.m[2].v[2];
  v9 = v2->current.value + 0.1;
  v10 = DCONST_DVARMPFLT_mount_side_max_height;
  trueClipPlanePoints.v[0] = (float)(v9 * v6) + player->origin.v[0];
  trueClipPlanePoints.v[1] = (float)(v9 * v7) + player->origin.v[1];
  v11 = (float)(v9 * v8) + player->origin.v[2];
  v36 = LODWORD(v6) ^ _xmm;
  trueClipPlanePoints.v[2] = v11;
  v38 = LODWORD(v8) ^ _xmm;
  v37 = LODWORD(v7) ^ _xmm;
  if ( !DCONST_DVARMPFLT_mount_side_max_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_max_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  value = v10->current.value;
  v13 = player->worldBasis.m[2].v[0];
  v14 = player->worldBasis.m[2].v[1];
  v15 = player->worldBasis.m[2].v[2];
  v16 = DCONST_DVARMPFLT_mount_top_min_height;
  v40 = (float)((float)(value - 0.1) * v13) + player->origin.v[0];
  v41 = (float)((float)(value - 0.1) * v14) + player->origin.v[1];
  v42 = (float)((float)(value - 0.1) * v15) + player->origin.v[2];
  falseClipPlaneNormals.v[0] = v13;
  falseClipPlaneNormals.v[1] = v14;
  falseClipPlaneNormals.v[2] = v15;
  if ( !DCONST_DVARMPFLT_mount_top_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v16->current.value + 0.1;
  v18 = player->worldBasis.m[2].v[0];
  v19 = player->worldBasis.m[2].v[1];
  v20 = player->worldBasis.m[2].v[2];
  v21 = DCONST_DVARMPFLT_mount_top_max_height;
  falseClipPlanePoints.v[0] = (float)(v17 * v18) + player->origin.v[0];
  falseClipPlanePoints.v[1] = (float)(v17 * v19) + player->origin.v[1];
  v22 = (float)(v17 * v20) + player->origin.v[2];
  v28 = LODWORD(v18) ^ _xmm;
  falseClipPlanePoints.v[2] = v22;
  v30 = LODWORD(v20) ^ _xmm;
  v29 = LODWORD(v19) ^ _xmm;
  if ( !DCONST_DVARMPFLT_mount_top_max_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_max_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v23 = v21->current.value - 0.1;
  v24 = (float)(v23 * player->worldBasis.m[2].v[0]) + player->origin.v[0];
  v25 = v23 * player->worldBasis.m[2].v[2];
  v33 = (float)(v23 * player->worldBasis.m[2].v[1]) + player->origin.v[1];
  v34 = v25 + player->origin.v[2];
  v32 = v24;
  EdgeOctreeQueryShape::SetUserClipPlanes(queryShape, PM_ContextMount_IsVerticalEdge, &player->worldBasis.m[2], 2ui64, &trueClipPlanePoints, &trueClipPlaneNormals, 2ui64, &falseClipPlanePoints, &falseClipPlaneNormals);
  v26 = DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope;
  if ( !DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_top_mount_max_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  s_minVerticalDot = cosf_0((float)(90.0 - v26->current.value) * 0.017453292);
}

/*
==============
PM_ContextMount_CalcAdjacentEdges
==============
*/
void PM_ContextMount_CalcAdjacentEdges(const BgHandler *handler, const MountEdgeProperties *edge, EdgeId *outPrevEdge, EdgeId *outNextEdge)
{
  ContextMountType type; 
  __int64 v8; 
  const dvar_t *v9; 
  __int64 v10; 
  float value; 
  edgeFlags_t v12; 
  unsigned __int64 AdjacentEdges; 
  EdgeId *p_otherId; 
  unsigned int EdgeIndex; 
  unsigned int v17; 
  __int128 v18; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  bool v26; 
  EdgeId *v27; 
  __int64 v28; 
  __int64 v29; 
  vec3_t dir; 
  vec3_t result; 
  vec3_t outLineSegment[2]; 
  AdjacentEdgeInfo outAdjacentEdgeInfo; 
  __int128 v37; 

  EdgeId::Clear(outPrevEdge);
  EdgeId::Clear(outNextEdge);
  type = edge->type;
  if ( type != MOUNT_TYPE_TOP )
  {
    v8 = 0i64;
    if ( type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 784, ASSERT_TYPE_ASSERT, "( edge.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "edge.type", "MOUNT_TYPE_NONE", 0, 0i64) )
      __debugbreak();
    v9 = DCONST_DVARFLT_mount_side_transition_max_thickness;
    v10 = 0i64;
    if ( !DCONST_DVARFLT_mount_side_transition_max_thickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_transition_max_thickness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    LOBYTE(v12) = 1;
    AdjacentEdges = Edge_GetAdjacentEdges(edge->id, v12, &outAdjacentEdgeInfo);
    if ( AdjacentEdges )
    {
      p_otherId = &outAdjacentEdgeInfo.otherId;
      v37 = _XMM13;
      __asm { vxorpd  xmm13, xmm13, xmm13 }
      do
      {
        EdgeIndex = EdgeId::GetEdgeIndex(&edge->id);
        if ( EdgeIndex != EdgeId::GetEdgeIndex(p_otherId - 2) )
        {
          LODWORD(v29) = EdgeId::GetEdgeIndex(p_otherId - 2);
          LODWORD(v28) = EdgeId::GetEdgeIndex(&edge->id);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 797, ASSERT_TYPE_ASSERT, "( edge.id.GetEdgeIndex() ) == ( adjacentInfo[index].id.GetEdgeIndex() )", "%s == %s\n\t%i, %i", "edge.id.GetEdgeIndex()", "adjacentInfo[index].id.GetEdgeIndex()", v28, v29) )
            __debugbreak();
        }
        v17 = EdgeId::GetEdgeIndex(p_otherId);
        if ( MapEdgeList_IsLoaded(v17) )
        {
          Edge_GetLineSegment(handler, *p_otherId, (vec3_t (*)[2])outLineSegment);
          v18 = LODWORD(outLineSegment[1].v[1]);
          *(float *)&v18 = fsqrt((float)((float)((float)(outLineSegment[1].v[1] - outLineSegment[0].v[1]) * (float)(outLineSegment[1].v[1] - outLineSegment[0].v[1])) + (float)((float)(outLineSegment[1].v[0] - outLineSegment[0].v[0]) * (float)(outLineSegment[1].v[0] - outLineSegment[0].v[0]))) + (float)((float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]) * (float)(outLineSegment[1].v[2] - outLineSegment[0].v[2])));
          _XMM1 = v18;
          __asm
          {
            vcmpless xmm0, xmm1, xmm14
            vblendvps xmm1, xmm1, xmm10, xmm0
          }
          dir.v[0] = (float)(1.0 / *(float *)&_XMM1) * (float)(outLineSegment[1].v[0] - outLineSegment[0].v[0]);
          dir.v[2] = (float)(1.0 / *(float *)&_XMM1) * (float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]);
          dir.v[1] = (float)(1.0 / *(float *)&_XMM1) * (float)(outLineSegment[1].v[1] - outLineSegment[0].v[1]);
          PointOnLineClosestToPoint(&edge->point, outLineSegment, &dir, &result);
          v22 = result.v[0] - edge->point.v[0];
          v23 = result.v[1] - edge->point.v[1];
          v24 = result.v[2] - edge->point.v[2];
          v25 = fsqrt((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
          if ( (unsigned int)(edge->type - 2) > 1 || value >= v25 )
          {
            if ( v25 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 826, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( dist )", "%s < %s\n\t%g, %g", "0.0f", "dist", *(double *)&_XMM13, v25) )
              __debugbreak();
            if ( threshold > (float)((float)((float)((float)(v23 * (float)(1.0 / v25)) * edge->below.v[1]) + (float)((float)(v22 * (float)(1.0 / v25)) * edge->below.v[0])) + (float)((float)(v24 * (float)(1.0 / v25)) * edge->below.v[2])) )
            {
              v26 = v10++ == -1;
              if ( !v26 && v10 != 1 )
              {
                LODWORD(v29) = 1;
                LODWORD(v28) = v10;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 844, ASSERT_TYPE_ASSERT, "( nextEdgeCount ) <= ( 1 )", "%s <= %s\n\t%i, %i", "nextEdgeCount", "1", v28, v29) )
                  __debugbreak();
              }
              v27 = outNextEdge;
            }
            else
            {
              v26 = v8++ == -1;
              if ( !v26 && v8 != 1 )
              {
                LODWORD(v29) = 1;
                LODWORD(v28) = v8;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 836, ASSERT_TYPE_ASSERT, "( prevEdgeCount ) <= ( 1 )", "%s <= %s\n\t%i, %i", "prevEdgeCount", "1", v28, v29) )
                  __debugbreak();
              }
              v27 = outPrevEdge;
            }
            *v27 = *p_otherId;
          }
        }
        p_otherId += 4;
        --AdjacentEdges;
      }
      while ( AdjacentEdges );
    }
  }
}

/*
==============
PM_ContextMount_CalcCandidateScore
==============
*/
float PM_ContextMount_CalcCandidateScore(const MountPlayerProperties *player, const MountEdgeProperties *edge, const ContextMountType defaultType, const vec3_t *mountedEyeForward)
{
  float v4; 
  const dvar_t *v5; 

  v4 = (float)((float)(player->eyeBasis.m[0].v[1] * mountedEyeForward->v[1]) + (float)(player->eyeBasis.m[0].v[0] * mountedEyeForward->v[0])) + (float)(player->eyeBasis.m[0].v[2] * mountedEyeForward->v[2]);
  if ( defaultType == edge->type )
    return (float)((float)(player->eyeBasis.m[0].v[1] * mountedEyeForward->v[1]) + (float)(player->eyeBasis.m[0].v[0] * mountedEyeForward->v[0])) + (float)(player->eyeBasis.m[0].v[2] * mountedEyeForward->v[2]);
  v5 = DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement;
  if ( !DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_switch_min_dot_improvement") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v4 - v5->current.value;
}

/*
==============
PM_ContextMount_CalcEdgeTransitionAngles
==============
*/
bool PM_ContextMount_CalcEdgeTransitionAngles(const MountPlayerProperties *player, const MountEdgeProperties *edge, EdgeTransitionData *outTransitionData)
{
  __int128 v3; 
  ContextMountType type; 
  vec3_t *p_planeNormal; 
  __int128 v10; 
  __int128 v11; 
  float v17; 
  bool result; 
  vec3_t *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  double v25; 
  bool v26; 
  const dvar_t *v27; 
  float v28; 
  const dvar_t *v29; 
  float v30; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  const dvar_t *v34; 
  float v35; 
  const BgHandler *handler; 
  float v37; 
  double v38; 
  const BgHandler *v39; 
  float v43; 
  const BgHandler *v44; 
  float outAbove; 
  float outForward; 
  float v47; 
  float v48; 
  __int64 v49; 
  vec3_t dir; 
  vec3_t dst; 
  vec3_t point; 
  __int128 v53; 

  if ( (unsigned int)(edge->type - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 872, ASSERT_TYPE_ASSERT, "(edge.type == MOUNT_TYPE_LEFT || edge.type == MOUNT_TYPE_RIGHT || edge.type == MOUNT_TYPE_TOP)", (const char *)&queryFormat, "edge.type == MOUNT_TYPE_LEFT || edge.type == MOUNT_TYPE_RIGHT || edge.type == MOUNT_TYPE_TOP") )
    __debugbreak();
  type = edge->type;
  _XMM11 = LODWORD(FLOAT_1_0);
  if ( type == MOUNT_TYPE_TOP )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(player->eyeBasis.m[0].v[1] * player->worldBasis.m[2].v[1]) + (float)(player->worldBasis.m[2].v[0] * player->eyeBasis.m[0].v[0])) + (float)(player->eyeBasis.m[0].v[2] * player->worldBasis.m[2].v[2])) & _xmm) - 1.0) & _xmm) < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 876, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( player.worldBasis[2], player.eyeBasis[0] ))", (const char *)&queryFormat, "!Vec3IsParallel( player.worldBasis[2], player.eyeBasis[0] )") )
      __debugbreak();
    p_planeNormal = &outTransitionData->planeNormal;
    Vec3Cross(&player->worldBasis.m[2], player->eyeBasis.m, &outTransitionData->planeNormal);
    v10 = LODWORD(outTransitionData->planeNormal.v[0]);
    v11 = v10;
    *(float *)&v11 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(outTransitionData->planeNormal.v[1] * outTransitionData->planeNormal.v[1])) + (float)(outTransitionData->planeNormal.v[2] * outTransitionData->planeNormal.v[2]));
    _XMM4 = v11;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm11, xmm0
    }
    outTransitionData->planeNormal.v[0] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
    outTransitionData->planeNormal.v[1] = (float)(1.0 / *(float *)&_XMM0) * outTransitionData->planeNormal.v[1];
    outTransitionData->planeNormal.v[2] = (float)(1.0 / *(float *)&_XMM0) * outTransitionData->planeNormal.v[2];
  }
  else
  {
    p_planeNormal = &outTransitionData->planeNormal;
    if ( type == MOUNT_TYPE_LEFT )
    {
      p_planeNormal->v[0] = COERCE_FLOAT(LODWORD(player->worldBasis.m[2].v[0]) ^ _xmm);
      outTransitionData->planeNormal.v[1] = COERCE_FLOAT(LODWORD(player->worldBasis.m[2].v[1]) ^ _xmm);
      outTransitionData->planeNormal.v[2] = COERCE_FLOAT(LODWORD(player->worldBasis.m[2].v[2]) ^ _xmm);
    }
    else
    {
      p_planeNormal->v[0] = player->worldBasis.m[2].v[0];
      outTransitionData->planeNormal.v[1] = player->worldBasis.m[2].v[1];
      outTransitionData->planeNormal.v[2] = player->worldBasis.m[2].v[2];
    }
  }
  _XMM4 = LODWORD(edge->below.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm { vunpcklps xmm0, xmm4, xmm3 }
  LODWORD(point.v[2]) = LODWORD(edge->below.v[2]) ^ _xmm;
  v17 = point.v[2];
  *(double *)outTransitionData->zeroAngleDir.v = *(double *)&_XMM0;
  outTransitionData->zeroAngleDir.v[2] = v17;
  *(double *)point.v = *(double *)&_XMM0;
  result = PM_ContextMount_ProjectAndNormalize(p_planeNormal, &outTransitionData->zeroAngleDir);
  if ( result )
  {
    v19 = &outTransitionData->planeNormal;
    v20 = outTransitionData->planeNormal.v[1] * outTransitionData->zeroAngleDir.v[1];
    v21 = outTransitionData->planeNormal.v[2];
    v22 = outTransitionData->planeNormal.v[0];
    v53 = v3;
    v23 = outTransitionData->zeroAngleDir.v[0];
    v24 = (float)(v20 + (float)(v23 * v22)) + (float)(v21 * outTransitionData->zeroAngleDir.v[2]);
    if ( COERCE_FLOAT(LODWORD(v24) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 897, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outTransitionData.planeNormal, outTransitionData.zeroAngleDir ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v22, outTransitionData->planeNormal.v[1], outTransitionData->planeNormal.v[2], v23, outTransitionData->zeroAngleDir.v[1], outTransitionData->zeroAngleDir.v[2], v24) )
      __debugbreak();
    BG_GetMountEdgeToEyeDistance((const ContextMountType)edge->type, &player->weapon, player->isAlternate, &outForward, &outAbove);
    v25 = BG_ContextMount_CalcCameraMinAngleToWallRad(outForward, COERCE_DOUBLE((unsigned __int64)LODWORD(outAbove)));
    RotatePointAroundVector(&dst, &edge->parallel, &point, edge->openAngleRad * 57.295776);
    v26 = PM_ContextMount_CalcRelativeAngleInPlane(&outTransitionData->planeNormal, &outTransitionData->zeroAngleDir, player->eyeBasis.m, &outTransitionData->playerAngleRad) && PM_ContextMount_CalcRelativeAngleInPlane(&outTransitionData->planeNormal, &outTransitionData->zeroAngleDir, &dst, &outTransitionData->transitionForwardAngleRad);
    v27 = DCONST_DVARFLT_mount_transition_back_angle_deg;
    if ( !DCONST_DVARFLT_mount_transition_back_angle_deg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_back_angle_deg") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v28 = 0.017453292 * v27->current.value;
    v29 = DCONST_DVARFLT_mount_transition_hysteresis_angle_deg;
    if ( !DCONST_DVARFLT_mount_transition_hysteresis_angle_deg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_hysteresis_angle_deg") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v30 = 0.017453292 * v29->current.value;
    if ( edge->type == MOUNT_TYPE_TOP )
    {
      v31 = 0.0;
    }
    else
    {
      v32 = DCONST_DVARFLT_mount_side_yaw_soft_clamp_inside_angle;
      if ( !DCONST_DVARFLT_mount_side_yaw_soft_clamp_inside_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_yaw_soft_clamp_inside_angle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      v31 = v32->current.value * 0.017453292;
    }
    outTransitionData->transitionBackAngleRad = v28 + *(float *)&v25;
    v33 = (float)((float)(v28 + *(float *)&v25) + v30) + outTransitionData->transitionForwardAngleRad;
    outTransitionData->transitionForwardAngleRad = v33;
    outTransitionData->maxAngleRad = v33 + v31;
    outTransitionData->minAngleRad = *(float *)&v25;
    v34 = DCONST_DVARINT_mount_debug;
    if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.integer == 1 )
    {
      v35 = 4.0 * outTransitionData->zeroAngleDir.v[1];
      handler = player->handler;
      v47 = (float)(4.0 * outTransitionData->zeroAngleDir.v[0]) + edge->point.v[0];
      v37 = 4.0 * outTransitionData->zeroAngleDir.v[2];
      v48 = v35 + edge->point.v[1];
      *(float *)&v49 = v37 + edge->point.v[2];
      handler->DebugLine((BgHandler *)handler, &edge->point, (const vec3_t *)&v47, &colorLtBlue, 0, 1);
      v38 = *(double *)player->eyeBasis.m[0].v;
      dir.v[2] = player->eyeBasis.m[0].v[2];
      *(double *)dir.v = v38;
      PM_ContextMount_ProjectAndNormalize(v19, &dir);
      v39 = player->handler;
      v47 = (float)(4.0 * dir.v[0]) + edge->point.v[0];
      v48 = (float)(4.0 * dir.v[1]) + edge->point.v[1];
      *(float *)&v49 = (float)(4.0 * dir.v[2]) + edge->point.v[2];
      v39->DebugLine((BgHandler *)v39, &edge->point, (const vec3_t *)&v47, &colorGreen, 0, 1);
      dir = dst;
      PM_ContextMount_ProjectAndNormalize(v19, &dir);
      _XMM0 = (unsigned int)edge->type;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm11, xmm1, xmm2
      }
      RotatePointAroundVector(&dst, v19, &dir, *(float *)&_XMM0 * v30);
      v43 = (float)(4.0 * dst.v[1]) + edge->point.v[1];
      v44 = player->handler;
      v47 = (float)(4.0 * dst.v[0]) + edge->point.v[0];
      v48 = v43;
      *(float *)&v49 = (float)(4.0 * dst.v[2]) + edge->point.v[2];
      v44->DebugLine((BgHandler *)v44, &edge->point, (const vec3_t *)&v47, &colorMagenta, 0, 1);
    }
    return v26;
  }
  return result;
}

/*
==============
PM_ContextMount_CalcFinalClampAngles
==============
*/
char PM_ContextMount_CalcFinalClampAngles(const MountPlayerProperties *player, const MountEdgeProperties *edge, MountSurfaceDetailedProperties *inOutDetailMount)
{
  __int128 v3; 
  __int128 v4; 
  float v8; 
  playerState_s *ps; 
  unsigned __int8 v10; 
  float v11; 
  playerState_s *v12; 
  float v13; 
  ContextMountType type; 
  __m128 v19; 
  const dvar_t *v22; 
  float v23; 
  double v24; 
  unsigned int EdgeIndex; 
  float v26; 
  float v29; 
  double v30; 
  float v32; 
  double TopMountYawMax; 
  float v34; 
  ContextMountSurfFlags v38; 
  const dvar_t *v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v45; 
  ContextMountSurfFlags flags; 
  double v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  double Float_Internal_DebugName; 
  double v56; 
  float v57; 
  float v58; 
  const dvar_t *v59; 
  float value; 
  const dvar_t *v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  EdgeId outPrevEdge; 
  float outAbove; 
  float outForward; 
  float v71; 
  EdgeId edgeId; 
  float v73; 
  vec3_t b; 
  vec3_t outZeroYawDir; 
  EdgeTransitionData outTransitionData; 
  __int128 v77; 
  __int128 v78; 

  inOutDetailMount->minClampDeg.v[0] = -180.0;
  inOutDetailMount->minClampDeg.v[1] = -180.0;
  inOutDetailMount->maxClampDeg.v[0] = 180.0;
  *(_QWORD *)&inOutDetailMount->maxClampDeg.y = 1127481344i64;
  *(_QWORD *)&inOutDetailMount->minResistDeg.y = 0i64;
  inOutDetailMount->maxResistDeg.v[1] = 0.0;
  BG_GetMountEdgeToEyeDistance((const ContextMountType)edge->type, &player->weapon, player->isAlternate, &outForward, &outAbove);
  v8 = 0.0;
  if ( outForward <= 0.0 || outAbove <= 0.0 )
    return 0;
  ps = player->ps;
  v10 = 0;
  v11 = ps->viewangles.v[2];
  edgeId = *(EdgeId *)ps->viewangles.v;
  v73 = v11;
  if ( BG_ContextMount_IsActive(ps) )
  {
    v12 = player->ps;
    v73 = 0.0;
    v10 = v12->mountState.flags & 1;
  }
  v13 = FLOAT_360_0;
  _XMM6 = 0i64;
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  *(float *)&_XMM0 = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0];
  __asm
  {
    vroundss xmm2, xmm6, xmm1, 1
    vroundss xmm1, xmm6, xmm2, 1
  }
  type = edge->type;
  *(float *)&edgeId.m_edgeIndex = (float)((float)(*(float *)&_XMM0 * 0.000015258789) - *(float *)&_XMM2) * 360.0;
  v19 = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1);
  __asm { vroundss xmm3, xmm6, xmm2, 1 }
  *((_QWORD *)&_XMM0 + 1) = v19.m128_u64[1];
  v71 = (float)((float)(v19.m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
  if ( (unsigned int)(type - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1020, ASSERT_TYPE_ASSERT, "(edge.type == MOUNT_TYPE_LEFT || edge.type == MOUNT_TYPE_RIGHT || edge.type == MOUNT_TYPE_TOP)", (const char *)&queryFormat, "edge.type == MOUNT_TYPE_LEFT || edge.type == MOUNT_TYPE_RIGHT || edge.type == MOUNT_TYPE_TOP") )
    __debugbreak();
  if ( edge->type != MOUNT_TYPE_TOP )
  {
    if ( PM_ContextMount_CalcEdgeTransitionAngles(player, edge, &outTransitionData) )
    {
      flags = inOutDetailMount->mount.flags;
      *(float *)&_XMM6 = outTransitionData.minAngleRad;
      *(float *)&_XMM8 = outTransitionData.maxAngleRad;
      if ( (flags & 2) != 0 )
      {
        *(double *)&_XMM0 = MSG_UnpackSignedFloat(inOutDetailMount->mount.packedRelYawClamp[0], 6.2831855, 9u);
        __asm { vmaxss  xmm6, xmm0, xmm6 }
      }
      if ( (flags & 4) != 0 )
      {
        *(double *)&_XMM0 = MSG_UnpackSignedFloat(inOutDetailMount->mount.packedRelYawClamp[1], 6.2831855, 9u);
        __asm { vminss  xmm8, xmm0, xmm8 }
      }
      v49 = SignedAngleBetween(player->worldBasis.m, &outTransitionData.zeroAngleDir, &edge->parallel);
      v50 = (float)(*(float *)&_XMM6 * 57.295776) + *(float *)&v49;
      v51 = (float)(*(float *)&_XMM8 * 57.295776) + *(float *)&v49;
      EdgeId::Clear(&outPrevEdge);
      EdgeId::Clear(&edgeId);
      if ( BG_GetMountTransitionEnabled(&player->weapon, player->isAlternate) && (inOutDetailMount->mount.flags & 1) != 0 )
      {
        PM_ContextMount_CalcAdjacentEdges(player->handler, edge, &outPrevEdge, &edgeId);
        EdgeId::Clear(&outPrevEdge);
        if ( (inOutDetailMount->mount.flags & 1) == 0 )
          EdgeId::Clear(&edgeId);
      }
      if ( v10 )
      {
        if ( EdgeId::IsValid(&outPrevEdge) && EdgeId::IsValid(&edgeId) )
        {
          v52 = inOutDetailMount->minClampDeg.v[1];
          if ( v52 != -180.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1182, ASSERT_TYPE_ASSERT, "( inOutDetailMount.minClampDeg[YAW] ) == ( -180.0f )", "%s == %s\n\t%g, %g", "inOutDetailMount.minClampDeg[YAW]", "-180.0f", v52, DOUBLE_N180_0) )
            __debugbreak();
          v53 = inOutDetailMount->maxClampDeg.v[1];
          if ( v53 != 180.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1183, ASSERT_TYPE_ASSERT, "( inOutDetailMount.maxClampDeg[YAW] ) == ( 180.0f )", "%s == %s\n\t%g, %g", "inOutDetailMount.maxClampDeg[YAW]", "180.0f", v53, DOUBLE_180_0) )
            __debugbreak();
        }
        else
        {
          v54 = 0.0;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
          {
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_side_yaw_soft_clamp_inside_angle, "mount_side_yaw_soft_clamp_inside_angle");
            v8 = *(float *)&Float_Internal_DebugName;
            v56 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_side_yaw_soft_clamp_outside_angle, "mount_side_yaw_soft_clamp_outside_angle");
            v54 = *(float *)&v56;
          }
          if ( EdgeId::IsValid(&outPrevEdge) || EdgeId::IsValid(&edgeId) )
          {
            if ( EdgeId::IsValid(&outPrevEdge) )
            {
              if ( !EdgeId::IsValid(&edgeId) )
              {
                inOutDetailMount->minClampDeg.v[1] = v51 - 270.0;
                inOutDetailMount->maxClampDeg.v[1] = v51;
                inOutDetailMount->minResistDeg.v[1] = v8;
              }
            }
            else
            {
              inOutDetailMount->minClampDeg.v[1] = v50;
              inOutDetailMount->maxClampDeg.v[1] = v50 + 270.0;
              inOutDetailMount->maxResistDeg.v[1] = v54;
            }
          }
          else
          {
            inOutDetailMount->minClampDeg.v[1] = v50;
            inOutDetailMount->maxClampDeg.v[1] = v51;
            inOutDetailMount->minResistDeg.v[1] = v8;
            inOutDetailMount->maxResistDeg.v[1] = v54;
          }
        }
      }
      else
      {
        inOutDetailMount->minClampDeg.v[1] = v50;
        inOutDetailMount->maxClampDeg.v[1] = v51;
        inOutDetailMount->minResistDeg.v[1] = 0.0;
        inOutDetailMount->maxResistDeg.v[1] = 0.0;
      }
      if ( edge->type == MOUNT_TYPE_LEFT )
      {
        v57 = inOutDetailMount->minClampDeg.v[1];
        inOutDetailMount->minClampDeg.v[1] = COERCE_FLOAT(LODWORD(inOutDetailMount->maxClampDeg.v[1]) ^ _xmm);
        inOutDetailMount->maxClampDeg.v[1] = COERCE_FLOAT(LODWORD(v57) ^ _xmm);
        v58 = inOutDetailMount->minResistDeg.v[1];
        inOutDetailMount->minResistDeg.v[1] = inOutDetailMount->maxResistDeg.v[1];
        inOutDetailMount->maxResistDeg.v[1] = v58;
      }
      v59 = DCONST_DVARMPFLT_mount_side_clamp_pitch;
      if ( !DCONST_DVARMPFLT_mount_side_clamp_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_clamp_pitch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v59);
      value = v59->current.value;
      v61 = DCONST_DVARMPFLT_mount_side_clamp_pitch_soft;
      if ( !DCONST_DVARMPFLT_mount_side_clamp_pitch_soft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_clamp_pitch_soft") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v61);
      v62 = v61->current.value;
      inOutDetailMount->minClampDeg.v[0] = COERCE_FLOAT(LODWORD(value) ^ _xmm);
      inOutDetailMount->maxClampDeg.v[0] = value;
      inOutDetailMount->minResistDeg.v[0] = v62;
      inOutDetailMount->maxResistDeg.v[0] = v62;
      goto LABEL_75;
    }
    return 0;
  }
  if ( !PM_ContextMount_CalcTopZeroDir(player, edge, &outZeroYawDir) )
    return 0;
  v22 = DCONST_DVARFLT_mount_top_pitch_overpitch_clamp;
  v78 = v3;
  v77 = v4;
  if ( !DCONST_DVARFLT_mount_top_pitch_overpitch_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_pitch_overpitch_clamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = v22->current.value;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
  {
    v24 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_top_pitch_soft_clamp_angle, "mount_top_pitch_soft_clamp_angle");
    inOutDetailMount->minResistDeg.v[0] = *(float *)&v24;
    v23 = v23 + *(float *)&v24;
  }
  EdgeIndex = EdgeId::GetEdgeIndex(&edge->id);
  EdgeId::Set(&edgeId, EdgeIndex);
  LODWORD(v26) = LODWORD(edge->below.v[1]) ^ _xmm;
  LODWORD(b.v[0]) = LODWORD(edge->below.v[0]) ^ _xmm;
  _XMM0 = LODWORD(edge->below.v[2]);
  LODWORD(b.v[2]) = _XMM0 ^ _xmm;
  b.v[1] = v26;
  *(double *)&_XMM0 = SignedAngleBetween(&outZeroYawDir, &b, &edge->parallel);
  __asm { vminss  xmm12, xmm0, cs:__real@42b20000 }
  *(double *)&_XMM0 = Edge_CalculateOpenAngleRad(edgeId);
  inOutDetailMount->minClampDeg.v[0] = *(float *)&_XMM12;
  inOutDetailMount->maxClampDeg.v[0] = (float)((float)(*(float *)&_XMM0 * 57.295776) + *(float *)&_XMM12) + v23;
  v29 = inOutDetailMount->minClampDeg.v[0];
  if ( v29 >= 90.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1050, ASSERT_TYPE_ASSERT, "( inOutDetailMount.minClampDeg[PITCH] ) < ( 90.0f )", "%s < %s\n\t%g, %g", "inOutDetailMount.minClampDeg[PITCH]", "90.0f", v29, DOUBLE_90_0) )
    __debugbreak();
  v30 = SignedAngleBetween(player->worldBasis.m, &outZeroYawDir, &player->worldBasis.m[2]);
  _XMM6 = LODWORD(FLOAT_3_1415927);
  v32 = *(float *)&v30;
  if ( BG_IsTopMountYawClamped(&player->weapon, player->isAlternate) )
  {
    TopMountYawMax = BG_GetTopMountYawMax(&player->weapon, player->isAlternate);
    v34 = *(float *)&TopMountYawMax * 0.017453292;
    _XMM0 = LODWORD(outForward);
    *(double *)&_XMM0 = BG_ContextMount_CalcCameraMinAngleToWallRad(outForward, COERCE_DOUBLE((unsigned __int64)LODWORD(outAbove)));
    *(float *)&_XMM6 = v34 - *(float *)&_XMM0;
  }
  else
  {
    _XMM0 = v10;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm6, xmm6, xmm1, xmm2
    }
  }
  v38 = inOutDetailMount->mount.flags;
  LODWORD(_XMM7) = _XMM6 ^ _xmm;
  if ( (v38 & 2) != 0 )
  {
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(inOutDetailMount->mount.packedRelYawClamp[0], 6.2831855, 9u);
    __asm { vmaxss  xmm7, xmm0, xmm7 }
  }
  if ( (v38 & 4) != 0 )
  {
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(inOutDetailMount->mount.packedRelYawClamp[1], 6.2831855, 9u);
    __asm { vminss  xmm6, xmm0, xmm6 }
  }
  inOutDetailMount->minClampDeg.v[1] = (float)(*(float *)&_XMM7 * 57.295776) + v32;
  inOutDetailMount->maxClampDeg.v[1] = (float)(*(float *)&_XMM6 * 57.295776) + v32;
  v40 = DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle;
  if ( !DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_yaw_soft_clamp_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  LODWORD(inOutDetailMount->minResistDeg.v[1]) = v40->current.integer;
  v41 = DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle;
  if ( !DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_yaw_soft_clamp_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  LODWORD(inOutDetailMount->maxResistDeg.v[1]) = v41->current.integer;
  v42 = DCONST_DVARMPFLT_mount_top_clamp_pitch_up;
  if ( !DCONST_DVARMPFLT_mount_top_clamp_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_clamp_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  _XMM1 = v42->current.unsignedInt ^ (unsigned __int128)(unsigned int)_xmm;
  __asm { vmaxss  xmm2, xmm1, xmm12 }
  inOutDetailMount->minClampDeg.v[0] = *(float *)&_XMM2;
  v45 = DCONST_DVARMPFLT_mount_top_clamp_pitch_up_soft;
  if ( !DCONST_DVARMPFLT_mount_top_clamp_pitch_up_soft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_clamp_pitch_up_soft") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  v13 = FLOAT_360_0;
  LODWORD(inOutDetailMount->minResistDeg.v[0]) = v45->current.integer;
LABEL_75:
  v63 = inOutDetailMount->minClampDeg.v[1];
  v64 = (float)(inOutDetailMount->maxClampDeg.v[1] - v63) * 0.5;
  v65 = v63 + v64;
  v66 = v71 - (float)(v63 + v64);
  if ( v66 <= 180.0 )
  {
    if ( v66 < -180.0 )
      v65 = v65 + -360.0;
  }
  else
  {
    v65 = v65 + v13;
  }
  inOutDetailMount->minClampDeg.v[1] = v65 - v64;
  inOutDetailMount->maxClampDeg.v[1] = v65 + v64;
  return 1;
}

/*
==============
PM_ContextMount_CalcMountCylinder
==============
*/
void PM_ContextMount_CalcMountCylinder(const MountPlayerProperties *player, const MountEdgeProperties *edge, const float edgeToEyeForward, const float edgeToEyeAbove, vec3_t *outMountCylinderGroundPos, float *outCylinderMidpointHeight, Bounds *outCylinder)
{
  float v9; 
  float v10; 
  ContextMountType type; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  double v16; 
  const dvar_t *v17; 
  float v18; 
  float value; 
  const dvar_t *v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  float v25; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t point; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(player->worldBasis.m[2].v[2]) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1471, ASSERT_TYPE_ASSERT, "(Vec3IsParallel( worldZ, player.worldBasis[2] ))", (const char *)&queryFormat, "Vec3IsParallel( worldZ, player.worldBasis[2] )") )
    __debugbreak();
  AxisToAngles(&player->eyeBasis, &angles);
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &forward, NULL, NULL);
  v9 = player->worldBasis.m[2].v[0];
  v10 = (float)((float)(forward.v[1] * player->worldBasis.m[2].v[1]) + (float)(forward.v[0] * v9)) + (float)(forward.v[2] * player->worldBasis.m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1482, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( viewForward, player.worldBasis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", forward.v[0], forward.v[1], forward.v[2], v9, player->worldBasis.m[2].v[1], player->worldBasis.m[2].v[2], v10) )
    __debugbreak();
  type = edge->type;
  if ( type == MOUNT_TYPE_TOP )
  {
    v12 = player->worldBasis.m[2].v[0];
    v13 = player->worldBasis.m[2].v[1];
    v14 = player->worldBasis.m[2].v[2];
  }
  else
  {
    BG_ContextMount_GetMountUpVector(type, &player->eyeBasis, &angles);
    v13 = angles.v[1];
    v12 = angles.v[0];
    v14 = angles.v[2];
  }
  v15 = (float)((float)(v13 * edgeToEyeAbove) + edge->point.v[1]) + (float)(COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * forward.v[1]);
  point.v[0] = (float)((float)(v12 * edgeToEyeAbove) + edge->point.v[0]) + (float)(COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * forward.v[0]);
  point.v[2] = (float)((float)(v14 * edgeToEyeAbove) + edge->point.v[2]) + (float)(COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * forward.v[2]);
  point.v[1] = v15;
  ProjectPointOnPlane(&point, &player->origin, &player->worldBasis.m[2], outMountCylinderGroundPos);
  v16 = BG_ContextMount_CalcCameraMinDistToPlayerClip();
  v17 = DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_ground_clearance;
  v18 = *(float *)&v16;
  if ( !DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_ground_clearance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_cylinder_ground_clearance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  value = v17->current.value;
  v20 = DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_additional_height;
  v21 = value - v18;
  if ( !DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_additional_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_cylinder_additional_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v22 = LODWORD(point.v[2]);
  v23 = (float)((float)(point.v[2] - outMountCylinderGroundPos->v[2]) + v18) + v20->current.value;
  *(float *)&v22 = (float)(v23 - v21) * 0.5;
  _XMM1 = v22;
  v25 = BG_ContextMount_Quantize(*(const float *)&dword_145039CA4, *(const float *)&dword_145039CA0);
  __asm { vmaxss  xmm0, xmm1, cs:__real@3f800000; value }
  *(float *)&_XMM0 = BG_ContextMount_Quantize(*(const float *)&_XMM0, *(const float *)&dword_145039CA0);
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&dword_145039CA0, v25);
  *outCylinderMidpointHeight = (float)(v23 + v21) * 0.5;
  *(_QWORD *)outCylinder->midPoint.v = 0i64;
  outCylinder->midPoint.v[2] = 0.0;
  outCylinder->halfSize.v[0] = v18;
  outCylinder->halfSize.v[1] = v18;
  outCylinder->halfSize.v[2] = *(float *)&_XMM0;
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/
bool PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, vec3_t *outEyePoint)
{
  float edgeToEyeForward; 
  float outForward; 
  tmat33_t<vec3_t> outClampedEyeBasis; 

  BG_GetMountEdgeToEyeDistance((const ContextMountType)mountDetail->mount.type, &player->weapon, player->isAlternate, &outForward, &edgeToEyeForward);
  return PM_ContextMount_CalcMountEyePoint(mountDetail, player->handler, &player->eyeBasis, &player->worldBasis, outForward, edgeToEyeForward, outEyePoint, &outClampedEyeBasis);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/
bool PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, vec3_t *outEyePoint, tmat33_t<vec3_t> *outClampedEyeBasis)
{
  float edgeToEyeForward; 
  float outForward; 

  BG_GetMountEdgeToEyeDistance((const ContextMountType)mountDetail->mount.type, &player->weapon, player->isAlternate, &outForward, &edgeToEyeForward);
  return PM_ContextMount_CalcMountEyePoint(mountDetail, player->handler, &player->eyeBasis, &player->worldBasis, outForward, edgeToEyeForward, outEyePoint, outClampedEyeBasis);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/
bool PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, const float edgeToEyeForward, const float edgeToEyeAbove, vec3_t *outEyePoint, tmat33_t<vec3_t> *outClampedEyeBasis)
{
  return PM_ContextMount_CalcMountEyePoint(mountDetail, player->handler, &player->eyeBasis, &player->worldBasis, edgeToEyeForward, edgeToEyeAbove, outEyePoint, outClampedEyeBasis);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/
bool PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const BgHandler *const handler, const tmat33_t<vec3_t> *eyeBasis, const tmat33_t<vec3_t> *worldBasis, const float edgeToEyeForward, const float edgeToEyeAbove, vec3_t *outEyePoint, tmat33_t<vec3_t> *outClampedEyeBasis)
{
  float v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  bool result; 
  __int128 v18; 
  __int128 v19; 
  __int128 v23; 
  __int128 v24; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  vec3_t angles; 
  vec3_t outMountPoint; 
  vec3_t outMountUpDir; 

  if ( mountDetail->mount.type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 222, ASSERT_TYPE_ASSERT, "(mountDetail.mount.type != MOUNT_TYPE_NONE)", (const char *)&queryFormat, "mountDetail.mount.type != MOUNT_TYPE_NONE") )
    __debugbreak();
  BG_ContextMount_CalcMountPoint(handler, &mountDetail->mount, &outMountPoint);
  BG_ContextMount_GetMountUpVector((const ContextMountType)mountDetail->mount.type, eyeBasis, &outMountUpDir);
  v12 = (float)(mountDetail->maxClampDeg.v[0] - mountDetail->minClampDeg.v[0]) * 0.5;
  v13 = (float)(mountDetail->maxClampDeg.v[1] - mountDetail->minClampDeg.v[1]) * 0.5;
  vectoangles(eyeBasis->m, &angles);
  v14 = AngleClamp(angles.v[0], v12 + mountDetail->minClampDeg.v[0], v12);
  v15 = v13 + mountDetail->minClampDeg.v[1];
  angles.v[0] = *(float *)&v14;
  v16 = AngleClamp(angles.v[1], v15, v13);
  angles.v[1] = *(float *)&v16;
  AngleVectors(&angles, outClampedEyeBasis->m, NULL, NULL);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(worldBasis->m[2].v[1] * outClampedEyeBasis->m[0].v[1]) + (float)(worldBasis->m[2].v[0] * outClampedEyeBasis->m[0].v[0])) + (float)(worldBasis->m[2].v[2] * outClampedEyeBasis->m[0].v[2])) & _xmm) - 1.0) & _xmm) < 0.001 )
    return 0;
  Vec3Cross(&worldBasis->m[2], outClampedEyeBasis->m, &outClampedEyeBasis->m[1]);
  v18 = LODWORD(outClampedEyeBasis->m[1].v[0]);
  v19 = v18;
  *(float *)&v19 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(outClampedEyeBasis->m[1].v[1] * outClampedEyeBasis->m[1].v[1])) + (float)(outClampedEyeBasis->m[1].v[2] * outClampedEyeBasis->m[1].v[2]));
  _XMM4 = v19;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  outClampedEyeBasis->m[1].v[0] = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM0);
  outClampedEyeBasis->m[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * outClampedEyeBasis->m[1].v[1];
  outClampedEyeBasis->m[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * outClampedEyeBasis->m[1].v[2];
  Vec3Cross(outClampedEyeBasis->m, &outClampedEyeBasis->m[1], &outClampedEyeBasis->m[2]);
  v23 = LODWORD(outClampedEyeBasis->m[2].v[0]);
  v24 = v23;
  *(float *)&v24 = fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(outClampedEyeBasis->m[2].v[1] * outClampedEyeBasis->m[2].v[1])) + (float)(outClampedEyeBasis->m[2].v[2] * outClampedEyeBasis->m[2].v[2]));
  _XMM4 = v24;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  outClampedEyeBasis->m[2].v[0] = *(float *)&v23 * (float)(1.0 / *(float *)&_XMM0);
  outClampedEyeBasis->m[2].v[1] = (float)(1.0 / *(float *)&_XMM0) * outClampedEyeBasis->m[2].v[1];
  outClampedEyeBasis->m[2].v[2] = (float)(1.0 / *(float *)&_XMM0) * outClampedEyeBasis->m[2].v[2];
  v28 = outClampedEyeBasis->m[0].v[1];
  v29 = outClampedEyeBasis->m[1].v[0];
  v30 = outClampedEyeBasis->m[0].v[2];
  v31 = (float)((float)(v28 * outClampedEyeBasis->m[1].v[1]) + (float)(v29 * outClampedEyeBasis->m[0].v[0])) + (float)(v30 * outClampedEyeBasis->m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v31) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 251, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outClampedEyeBasis[0], outClampedEyeBasis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outClampedEyeBasis->m[0].v[0], v28, v30, v29, outClampedEyeBasis->m[1].v[1], outClampedEyeBasis->m[1].v[2], v31) )
    __debugbreak();
  v32 = outClampedEyeBasis->m[0].v[1];
  v33 = outClampedEyeBasis->m[2].v[0];
  v34 = outClampedEyeBasis->m[0].v[2];
  v35 = (float)((float)(v32 * outClampedEyeBasis->m[2].v[1]) + (float)(v33 * outClampedEyeBasis->m[0].v[0])) + (float)(v34 * outClampedEyeBasis->m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v35) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 252, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outClampedEyeBasis[0], outClampedEyeBasis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outClampedEyeBasis->m[0].v[0], v32, v34, v33, outClampedEyeBasis->m[2].v[1], outClampedEyeBasis->m[2].v[2], v35) )
    __debugbreak();
  v36 = (float)(COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * outClampedEyeBasis->m[0].v[0]) + outMountPoint.v[0];
  v37 = edgeToEyeAbove * outMountUpDir.v[0];
  result = 1;
  outEyePoint->v[0] = v36;
  v38 = (float)(COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * outClampedEyeBasis->m[0].v[1]) + outMountPoint.v[1];
  v39 = edgeToEyeAbove * outMountUpDir.v[1];
  outEyePoint->v[1] = v38;
  v40 = outClampedEyeBasis->m[0].v[2];
  outEyePoint->v[0] = v37 + v36;
  v41 = (float)(COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * v40) + outMountPoint.v[2];
  outEyePoint->v[1] = v39 + v38;
  outEyePoint->v[2] = v41 + (float)(edgeToEyeAbove * outMountUpDir.v[2]);
  return result;
}

/*
==============
PM_ContextMount_CalcRelativeAngleInPlane
==============
*/
bool PM_ContextMount_CalcRelativeAngleInPlane(const vec3_t *planeNormal, const vec3_t *refDir, const vec3_t *dir, float *outAngleRad)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  double v20; 
  bool result; 
  double v22; 
  vec3_t dira; 
  vec3_t cross; 

  v4 = planeNormal->v[1];
  v5 = planeNormal->v[0];
  v6 = planeNormal->v[2];
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 751, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v5, v4, v6, fsqrt(v7)) )
    __debugbreak();
  v12 = refDir->v[1];
  v13 = refDir->v[0];
  v14 = refDir->v[2];
  v15 = (float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 752, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( refDir ) )", "(%g, %g, %g) len %g", v13, v12, v14, fsqrt(v15)) )
    __debugbreak();
  v16 = refDir->v[1];
  v17 = planeNormal->v[1];
  v18 = planeNormal->v[2];
  v19 = (float)((float)(planeNormal->v[0] * refDir->v[0]) + (float)(v17 * v16)) + (float)(v18 * refDir->v[2]);
  if ( COERCE_FLOAT(LODWORD(v19) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 753, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( planeNormal, refDir ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", planeNormal->v[0], v17, v18, refDir->v[0], v16, refDir->v[2], v19) )
    __debugbreak();
  v20 = *(double *)dir->v;
  dira.v[2] = dir->v[2];
  *(double *)dira.v = v20;
  result = PM_ContextMount_ProjectAndNormalize(planeNormal, &dira);
  if ( result )
  {
    v22 = I_fclamp((float)((float)(dira.v[1] * refDir->v[1]) + (float)(dira.v[0] * refDir->v[0])) + (float)(dira.v[2] * refDir->v[2]), -1.0, 1.0);
    *outAngleRad = acosf_0(*(float *)&v22);
    Vec3Cross(refDir, &dira, &cross);
    _XMM3 = *(unsigned int *)outAngleRad ^ (unsigned __int128)_xmm;
    _XMM0 = 0i64;
    __asm
    {
      vcmpless xmm1, xmm0, xmm2
      vblendvps xmm1, xmm3, xmm5, xmm1
    }
    *outAngleRad = *(float *)&_XMM1;
    return 1;
  }
  else
  {
    *outAngleRad = 0.0;
  }
  return result;
}

/*
==============
PM_ContextMount_CalcTopZeroDir
==============
*/
bool PM_ContextMount_CalcTopZeroDir(const MountPlayerProperties *player, const MountEdgeProperties *edge, vec3_t *outZeroYawDir)
{
  float v6; 
  bool result; 
  float v8; 
  float v9; 
  __int128 v10; 
  __int128 v11; 
  vec3_t dir; 

  if ( edge->type != MOUNT_TYPE_TOP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 964, ASSERT_TYPE_ASSERT, "(edge.type == MOUNT_TYPE_TOP)", (const char *)&queryFormat, "edge.type == MOUNT_TYPE_TOP") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(edge->parallel.v[1] * player->worldBasis.m[2].v[1]) + (float)(edge->parallel.v[0] * player->worldBasis.m[2].v[0])) + (float)(edge->parallel.v[2] * player->worldBasis.m[2].v[2])) & _xmm) - 1.0) & _xmm) < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 965, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( player.worldBasis[2], edge.parallel ))", (const char *)&queryFormat, "!Vec3IsParallel( player.worldBasis[2], edge.parallel )") )
    __debugbreak();
  v6 = edge->parallel.v[1];
  dir.v[0] = edge->parallel.v[0];
  dir.v[2] = edge->parallel.v[2];
  dir.v[1] = v6;
  result = PM_ContextMount_ProjectAndNormalize(&player->worldBasis.m[2], &dir);
  if ( result )
  {
    v8 = player->worldBasis.m[2].v[0];
    v9 = (float)((float)(dir.v[1] * player->worldBasis.m[2].v[1]) + (float)(v8 * dir.v[0])) + (float)(dir.v[2] * player->worldBasis.m[2].v[2]);
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 974, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( player.worldBasis[2], parallelProj ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v8, player->worldBasis.m[2].v[1], player->worldBasis.m[2].v[2], dir.v[0], dir.v[1], dir.v[2], v9) )
      __debugbreak();
    Vec3Cross(&dir, &player->worldBasis.m[2], outZeroYawDir);
    v10 = LODWORD(outZeroYawDir->v[0]);
    result = 1;
    v11 = v10;
    *(float *)&v11 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(outZeroYawDir->v[1] * outZeroYawDir->v[1])) + (float)(outZeroYawDir->v[2] * outZeroYawDir->v[2]));
    _XMM4 = v11;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm9, xmm0
    }
    outZeroYawDir->v[0] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
    outZeroYawDir->v[1] = (float)(1.0 / *(float *)&_XMM0) * outZeroYawDir->v[1];
    outZeroYawDir->v[2] = (float)(1.0 / *(float *)&_XMM0) * outZeroYawDir->v[2];
  }
  return result;
}

/*
==============
PM_ContextMount_CheckForStartTransition
==============
*/
char PM_ContextMount_CheckForStartTransition(const MountPlayerProperties *player, const MountEdgeProperties *edge, EdgeId *inOutTransId, ContextMountTransitionType *inOutTransitionType)
{
  const dvar_t *v4; 
  ContextMountType type; 
  unsigned int EdgeIndex; 
  ContextMountTransitionType v11; 
  __m256i v12; 
  const BgHandler *handler; 
  EdgeId v14; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  EdgeId adjacentId; 
  ContextMountTransitionType inOutTransType; 
  vec3_t outClampedEyeForward; 
  MountEdgeProperties edgea; 

  v4 = DCONST_DVARMPBOOL_mount_transition_enable;
  type = edge->type;
  if ( !DCONST_DVARMPBOOL_mount_transition_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( (!v4->current.enabled || type == MOUNT_TYPE_TOP || !BG_GetMountTransitionEnabled(&player->weapon, player->isAlternate)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2284, ASSERT_TYPE_ASSERT, "(PM_ContextMount_ShouldCheckTransitions( player, edge.type, false ))", (const char *)&queryFormat, "PM_ContextMount_ShouldCheckTransitions( player, edge.type, false )") )
    __debugbreak();
  inOutTransType = *inOutTransitionType;
  adjacentId = *inOutTransId;
  if ( !PM_ContextMount_EmitAdjacentEdgeForViewangles(player, edge, 0, 0, &inOutTransType, &adjacentId) || !EdgeId::IsValid(&adjacentId) )
    return 0;
  EdgeIndex = EdgeId::GetEdgeIndex(&edge->id);
  if ( EdgeId::GetEdgeIndex(&adjacentId) == EdgeIndex )
  {
    v18 = EdgeId::GetEdgeIndex(&edge->id);
    v17 = EdgeId::GetEdgeIndex(&adjacentId);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2298, ASSERT_TYPE_ASSERT, "( transId.GetEdgeIndex() ) != ( edge.id.GetEdgeIndex() )", "%s != %s\n\t%i, %i", "transId.GetEdgeIndex()", "edge.id.GetEdgeIndex()", v17, v18) )
      __debugbreak();
  }
  v11 = inOutTransType;
  if ( inOutTransType == MOUNT_TRANSITION_TYPE_NONE )
  {
    LODWORD(v16) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2299, ASSERT_TYPE_ASSERT, "( transType ) != ( MOUNT_TRANSITION_TYPE_NONE )", "%s != %s\n\t%i, %i", "transType", "MOUNT_TRANSITION_TYPE_NONE", v16, 0i64) )
      __debugbreak();
  }
  v12 = *(__m256i *)&edge->below.z;
  handler = player->handler;
  *(__m256i *)edgea.normal.v = *(__m256i *)edge->normal.v;
  *(__m256i *)&edgea.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
  *(__m256i *)&edgea.below.z = v12;
  MountEdgeProperties::TransitionToAdjacent(&edgea, handler, adjacentId, v11 != MOUNT_TRANSITION_TYPE_FORWARD);
  if ( !PM_ContextMount_IsValidEdge_Preliminary(player, &edgea, 0, 0, 0, &outClampedEyeForward) || !PM_ContextMount_IsValidEdge_Adjacency(player, &edgea, 0, 0) || !PM_ContextMount_IsValidEdge_Detail(player, &edgea, 0, 1, 0, 0) )
    return 0;
  v14 = adjacentId;
  *inOutTransitionType = v11;
  *inOutTransId = v14;
  return 1;
}

/*
==============
PM_ContextMount_DebugFailedEdge
==============
*/
void PM_ContextMount_DebugFailedEdge(const MountPlayerProperties *player, MountEdgeProperties *edge, int edgeScoreOrdinal, int recurseCount, const char *reasonStr)
{
  __int128 v5; 
  __int128 v6; 
  const dvar_t *v7; 
  float v12; 
  float v13; 
  float v14; 
  const BgHandler *handler; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const BgHandler *v20; 
  float v21; 
  float v22; 
  const BgHandler *v23; 
  float v24; 
  float v25; 
  const BgHandler *v26; 
  float v27; 
  const char *v28; 
  unsigned int EdgeIndex; 
  bool v30; 
  float v31; 
  float v32; 
  char *fmt; 
  char *fmta; 
  __int64 v35; 
  float v36; 
  float v37; 
  float v38; 
  int v39[2]; 
  float v40; 
  int v41[4]; 
  int v42[4]; 
  char dest[256]; 
  __int128 v44; 
  __int128 v45; 

  v7 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer == 1 && reasonStr )
  {
    v12 = 4.0 * edge->parallel.v[2];
    v13 = 4.0 * edge->parallel.v[1];
    v14 = edge->point.v[1];
    handler = player->handler;
    v45 = v5;
    v16 = edge->point.v[0];
    v44 = v6;
    v17 = 4.0 * edge->parallel.v[0];
    v18 = edge->point.v[2];
    *(float *)v42 = v16 - v17;
    *(float *)&v42[1] = v14 - v13;
    *(float *)&v42[2] = v18 - v12;
    *(float *)v41 = v16 + v17;
    *(float *)&v41[1] = v14 + v13;
    *(float *)&v41[2] = v18 + v12;
    fmt = (char *)&colorRed;
    ((void (__fastcall *)(const BgHandler *, int *, int *))handler->DebugCapsule)(handler, v42, v41);
    v19 = 2.0 * edge->parallel.v[1];
    v20 = player->handler;
    v36 = (float)(2.0 * edge->parallel.v[0]) + edge->point.v[0];
    v21 = 2.0 * edge->parallel.v[2];
    v37 = v19 + edge->point.v[1];
    v38 = v21 + edge->point.v[2];
    LODWORD(fmt) = 0;
    v20->DebugLine((BgHandler *)v20, &edge->point, (const vec3_t *)&v36, &colorBlue, (int)fmt, 0);
    v22 = 2.0 * edge->below.v[1];
    v23 = player->handler;
    v36 = (float)(2.0 * edge->below.v[0]) + edge->point.v[0];
    v24 = 2.0 * edge->below.v[2];
    v37 = v22 + edge->point.v[1];
    v38 = v24 + edge->point.v[2];
    v23->DebugLine((BgHandler *)v23, &edge->point, (const vec3_t *)&v36, &colorRed, 0, 0);
    v25 = 2.0 * edge->normal.v[1];
    v26 = player->handler;
    v36 = (float)(2.0 * edge->normal.v[0]) + edge->point.v[0];
    v27 = 2.0 * edge->normal.v[2];
    v37 = v25 + edge->point.v[1];
    v38 = v27 + edge->point.v[2];
    v26->DebugLine((BgHandler *)v26, &edge->point, (const vec3_t *)&v36, &colorGreen, 0, 0);
    v28 = s_mountTypeNames[edge->type];
    EdgeIndex = EdgeId::GetEdgeIndex(&edge->id);
    LODWORD(v35) = recurseCount;
    LODWORD(fmta) = edgeScoreOrdinal;
    Com_sprintf_truncate(dest, 0x100ui64, "%i [%i, %s, %i]: %s", EdgeIndex, fmta, v28, v35, reasonStr);
    v30 = edge->type == MOUNT_TYPE_RIGHT;
    v31 = edge->point.v[1];
    v39[0] = LODWORD(edge->point.v[0]);
    v32 = edge->point.v[2];
    v40 = v32;
    *(float *)&v39[1] = v31;
    if ( v30 )
      v40 = v32 - s_mountDebugZOffsetRight;
    ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))player->handler->DebugString)(player->handler, v39, &colorRed);
  }
}

/*
==============
PM_ContextMount_DebugValidEdge
==============
*/
void PM_ContextMount_DebugValidEdge(const MountPlayerProperties *player, const MountSurfaceDetailedProperties *mountDetail, const vec4_t *edgeColor, const vec4_t *coneColor, int edgeScoreOrdinal, int recurseCount, const char *text)
{
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  const dvar_t *v11; 
  float fraction; 
  EdgeId id; 
  const BgHandler *handler; 
  const BgHandler *v18; 
  const char *v19; 
  unsigned int EdgeIndex; 
  bool v21; 
  float adjFraction; 
  EdgeId adjId; 
  const BgHandler *v24; 
  const BgHandler *v25; 
  const BgHandler *v26; 
  vec3_t *outBelow; 
  float outAbove; 
  float outForward; 
  vec3_t outEyePoint; 
  vec3_t outParallel; 
  float v32; 
  float v33; 
  float v34; 
  vec3_t v35; 
  vec3_t outEdgePoint; 
  int v37[4]; 
  vec3_t v38; 
  vec3_t outNormal; 
  tmat33_t<vec3_t> outClampedEyeBasis; 
  char dest[256]; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 

  v11 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer == 1 )
  {
    fraction = mountDetail->mount.fraction;
    id = mountDetail->mount.id;
    handler = player->handler;
    v45 = v7;
    v44 = v8;
    v42 = v10;
    Edge_CalculatePoint(handler, id, fraction, &outEdgePoint);
    Edge_CalculateVectors(player->handler, mountDetail->mount.id, mountDetail->mount.fraction, mountDetail->mount.normalFaceIndex, &outNormal, &outParallel, &v38);
    v18 = player->handler;
    v35.v[0] = outEdgePoint.v[0] - (float)(4.0 * outParallel.v[0]);
    v35.v[1] = outEdgePoint.v[1] - (float)(4.0 * outParallel.v[1]);
    v35.v[2] = outEdgePoint.v[2] - (float)(4.0 * outParallel.v[2]);
    v32 = (float)(4.0 * outParallel.v[0]) + outEdgePoint.v[0];
    v33 = (float)(4.0 * outParallel.v[1]) + outEdgePoint.v[1];
    v34 = (float)(4.0 * outParallel.v[2]) + outEdgePoint.v[2];
    ((void (__fastcall *)(const BgHandler *, vec3_t *, float *))v18->DebugCapsule)(v18, &v35, &v32);
    v19 = s_mountTypeNames[mountDetail->mount.type];
    EdgeIndex = EdgeId::GetEdgeIndex(&mountDetail->mount.id);
    LODWORD(outBelow) = recurseCount;
    Com_sprintf_truncate(dest, 0x100ui64, "%i [%i, %s, %i]: %s", EdgeIndex, __PAIR64__(HIDWORD(edgeColor), edgeScoreOrdinal), v19, outBelow, text);
    v21 = mountDetail->mount.type == MOUNT_TYPE_RIGHT;
    outEyePoint = outEdgePoint;
    if ( v21 )
      outEyePoint.v[2] = outEdgePoint.v[2] - s_mountDebugZOffsetRight;
    ((void (__fastcall *)(const BgHandler *, vec3_t *, const vec4_t *))player->handler->DebugString)(player->handler, &outEyePoint, edgeColor);
    if ( EdgeId::IsValid(&mountDetail->mount.adjId) )
    {
      adjFraction = mountDetail->mount.adjFraction;
      adjId = mountDetail->mount.adjId;
      v24 = player->handler;
      v43 = v9;
      Edge_CalculatePoint(v24, adjId, adjFraction, &v35);
      Edge_CalculateVectors(player->handler, mountDetail->mount.adjId, mountDetail->mount.adjFraction, mountDetail->mount.adjNormalFaceIndex, &v38, &outEyePoint, &outNormal);
      v25 = player->handler;
      outParallel.v[0] = v35.v[0] - (float)(4.0 * outEyePoint.v[0]);
      outParallel.v[1] = v35.v[1] - (float)(4.0 * outEyePoint.v[1]);
      outParallel.v[2] = v35.v[2] - (float)(4.0 * outEyePoint.v[2]);
      v32 = v35.v[0] + (float)(4.0 * outEyePoint.v[0]);
      v33 = v35.v[1] + (float)(4.0 * outEyePoint.v[1]);
      v34 = v35.v[2] + (float)(4.0 * outEyePoint.v[2]);
      ((void (__fastcall *)(const BgHandler *, vec3_t *, float *))v25->DebugCapsule)(v25, &outParallel, &v32);
    }
    BG_GetMountEdgeToEyeDistance((const ContextMountType)mountDetail->mount.type, &player->weapon, player->isAlternate, &outForward, &outAbove);
    if ( PM_ContextMount_CalcMountEyePoint(mountDetail, player->handler, &player->eyeBasis, &player->worldBasis, outForward, outAbove, &outEyePoint, &outClampedEyeBasis) )
    {
      v26 = player->handler;
      *(float *)v37 = (float)(12.0 * outClampedEyeBasis.m[0].v[0]) + outEyePoint.v[0];
      *(float *)&v37[1] = (float)(12.0 * outClampedEyeBasis.m[0].v[1]) + outEyePoint.v[1];
      *(float *)&v37[2] = (float)(12.0 * outClampedEyeBasis.m[0].v[2]) + outEyePoint.v[2];
      ((void (__fastcall *)(const BgHandler *, int *, tmat33_t<vec3_t> *))v26->DebugCone)(v26, v37, &outClampedEyeBasis);
    }
  }
}

/*
==============
PM_ContextMount_EdgeAngleToCylinderPoint
==============
*/
void PM_ContextMount_EdgeAngleToCylinderPoint(const MountPlayerProperties *player, const MountEdgeProperties *edge, const vec3_t *planeNormal, const vec3_t *zeroAngleDir, const float edgeAngleRad, const float edgeToEyeForward, const float edgeToEyeAbove, vec3_t *outCapsulePoint)
{
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  tmat33_t<vec3_t> dst; 
  vec3_t outMountUpDir; 

  RotatePointAroundVector(dst.m, planeNormal, zeroAngleDir, edgeAngleRad * 57.295776);
  *(double *)dst.row2.v = *(double *)worldZ_0.v;
  v10 = COERCE_FLOAT(LODWORD(player->worldBasis.m[2].v[2]) & _xmm) - 1.0;
  dst.m[2].v[2] = worldZ_0.v[2];
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1807, ASSERT_TYPE_ASSERT, "(Vec3IsParallel( worldZ, player.worldBasis[2] ))", (const char *)&queryFormat, "Vec3IsParallel( worldZ, player.worldBasis[2] )") )
    __debugbreak();
  v11 = (float)((float)(dst.m[2].v[0] * dst.m[0].v[0]) + (float)(dst.m[2].v[1] * dst.m[0].v[1])) + (float)(dst.m[2].v[2] * dst.m[0].v[2]);
  if ( COERCE_FLOAT(LODWORD(v11) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1808, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[2], axis[0] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", dst.m[2].v[0], dst.m[2].v[1], dst.m[2].v[2], dst.m[0].v[0], dst.m[0].v[1], dst.m[0].v[2], v11) )
    __debugbreak();
  Vec3Cross(&dst.m[2], dst.m, &dst.m[1]);
  BG_ContextMount_GetMountUpVector((const ContextMountType)edge->type, &dst, &outMountUpDir);
  v12 = (float)(edgeToEyeAbove * outMountUpDir.v[0]) + edge->point.v[0];
  v13 = edgeToEyeAbove * outMountUpDir.v[1];
  v14 = (float)(COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * dst.m[0].v[0]) + v12;
  v15 = COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * dst.m[0].v[1];
  outCapsulePoint->v[0] = v12;
  v16 = v13 + edge->point.v[1];
  v17 = COERCE_FLOAT(LODWORD(edgeToEyeForward) ^ _xmm) * dst.m[0].v[2];
  outCapsulePoint->v[1] = v16;
  v18 = edge->point.v[2];
  outCapsulePoint->v[0] = v14;
  outCapsulePoint->v[2] = (float)((float)(edgeToEyeAbove * outMountUpDir.v[2]) + v18) + v17;
  outCapsulePoint->v[1] = v15 + v16;
  ProjectPointOnPlane(outCapsulePoint, &player->origin, &player->worldBasis.m[2], outCapsulePoint);
}

/*
==============
PM_ContextMount_EmitAdjacentEdgeForViewangles
==============
*/
bool PM_ContextMount_EmitAdjacentEdgeForViewangles(const MountPlayerProperties *player, const MountEdgeProperties *edge, const int edgeScoreOrdinal, const int recurseCount, ContextMountTransitionType *inOutTransType, EdgeId *outAdjacentEdgeId)
{
  __m256i v10; 
  __m256i v11; 
  bool result; 
  bool v13; 
  __m256i v14; 
  EdgeId outNextEdge; 
  EdgeId outPrevEdge; 
  MountEdgeProperties v17; 
  EdgeTransitionData outTransitionData; 
  MountEdgeProperties edgea; 

  EdgeId::Clear(&outPrevEdge);
  EdgeId::Clear(&outNextEdge);
  PM_ContextMount_CalcAdjacentEdges(player->handler, edge, &outPrevEdge, &outNextEdge);
  v10 = *(__m256i *)&edge->below.z;
  *(__m256i *)edgea.normal.v = *(__m256i *)edge->normal.v;
  *(__m256i *)&edgea.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
  *(__m256i *)&edgea.below.z = v10;
  if ( EdgeId::IsValid(&outNextEdge) && *inOutTransType == MOUNT_TRANSITION_TYPE_FORWARD )
    MountEdgeProperties::TransitionToAdjacent(&edgea, player->handler, outNextEdge, 0);
  if ( !PM_ContextMount_CalcEdgeTransitionAngles(player, &edgea, &outTransitionData) )
  {
    v11 = *(__m256i *)&edge->below.z;
    *(__m256i *)v17.normal.v = *(__m256i *)edge->normal.v;
    *(__m256i *)&v17.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
    *(__m256i *)&v17.below.z = v11;
    PM_ContextMount_DebugFailedEdge(player, &v17, edgeScoreOrdinal, recurseCount, "can't calc transition");
    return 0;
  }
  v13 = outTransitionData.playerAngleRad >= outTransitionData.transitionForwardAngleRad;
  if ( outTransitionData.transitionBackAngleRad <= outTransitionData.playerAngleRad || outTransitionData.playerAngleRad < outTransitionData.transitionForwardAngleRad )
  {
    if ( *inOutTransType == MOUNT_TRANSITION_TYPE_FORWARD )
    {
      if ( outTransitionData.transitionBackAngleRad > outTransitionData.playerAngleRad )
        return 0;
    }
    else
    {
      if ( *inOutTransType == MOUNT_TRANSITION_TYPE_BACK && outTransitionData.playerAngleRad >= outTransitionData.transitionForwardAngleRad )
        return 0;
      if ( outTransitionData.transitionBackAngleRad > outTransitionData.playerAngleRad && EdgeId::IsValid(&outPrevEdge) )
      {
        *outAdjacentEdgeId = outPrevEdge;
        result = 1;
        *inOutTransType = MOUNT_TRANSITION_TYPE_BACK;
        return result;
      }
    }
    if ( v13 && EdgeId::IsValid(&outNextEdge) )
    {
      *outAdjacentEdgeId = outNextEdge;
      result = 1;
      *inOutTransType = MOUNT_TRANSITION_TYPE_FORWARD;
      return result;
    }
    return 0;
  }
  v14 = *(__m256i *)&edge->below.z;
  *(__m256i *)v17.normal.v = *(__m256i *)edge->normal.v;
  *(__m256i *)&v17.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
  *(__m256i *)&v17.below.z = v14;
  PM_ContextMount_DebugFailedEdge(player, &v17, edgeScoreOrdinal, recurseCount, "edge angle too shallow");
  return 0;
}

/*
==============
PM_ContextMount_FindMountEdge_Initial
==============
*/
__int64 PM_ContextMount_FindMountEdge_Initial(const MountPlayerProperties *player, MountSurfaceDetailedProperties *outSurfaceDetail)
{
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  bool v18; 
  const dvar_t *v19; 
  int integer; 
  const dvar_t *v21; 
  bool v22; 
  float *v23; 
  EdgeQueryCache *v24; 
  float v25; 
  __int128 v26; 
  const SuitDef *SuitDef; 
  const dvar_t *v31; 
  float v32; 
  const dvar_t *v33; 
  EdgeFrustumQueryShape *p_mountQueryShape; 
  EdgeFrustumQueryShape *p_shape; 
  __int64 v36; 
  unsigned __int64 v37; 
  int v38; 
  __int64 v39; 
  float *v40; 
  EdgePropertyTuple *v41; 
  __int64 v42; 
  int v43; 
  EdgePropertyTuple *v44; 
  unsigned __int8 v45; 
  int v47; 
  EdgeId *p_id; 
  float v49; 
  float v50; 
  double v51; 
  int outCount[2]; 
  float *resultDistancePool; 
  __int64 v54; 
  unsigned __int64 outResultCount; 
  __int64 relativeYawClampRad; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v57; 
  __int64 v58; 
  vec3_t outProjectedPoint; 
  EdgeFrustumQueryDefinition definition; 
  tmat43_t<vec3_t> v1; 
  MountEdgeProperties edge; 
  EdgeFrustumQueryShape shape; 
  EdgeOctreeQueryFrustum v64; 
  float resultFractionPool[6]; 
  EdgeId resultIdPool[6]; 
  char v67; 
  EdgePropertyTuple outEdgeProperties[6]; 

  v58 = -2i64;
  if ( !player->handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2388, ASSERT_TYPE_ASSERT, "( player.handler ) != ( nullptr )", "%s != %s\n\t%p, %p", "player.handler", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !player->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2389, ASSERT_TYPE_ASSERT, "( player.ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "player.ps", "nullptr", NULL, NULL) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_FindMountEdge_Initial");
  v4 = DCONST_DVARMPFLT_mount_tuning_query_distance;
  if ( !DCONST_DVARMPFLT_mount_tuning_query_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v6 = DCONST_DVARFLT_mount_tuning_query_halfwidth_near;
  if ( !DCONST_DVARFLT_mount_tuning_query_halfwidth_near && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_halfwidth_near") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.value;
  v8 = DCONST_DVARFLT_mount_tuning_query_halfheight_near;
  if ( !DCONST_DVARFLT_mount_tuning_query_halfheight_near && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_halfheight_near") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value;
  v10 = DCONST_DVARFLT_mount_tuning_query_halfwidth_far;
  if ( !DCONST_DVARFLT_mount_tuning_query_halfwidth_far && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_halfwidth_far") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  v12 = DCONST_DVARFLT_mount_tuning_query_halfheight_far;
  if ( !DCONST_DVARFLT_mount_tuning_query_halfheight_far && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_halfheight_far") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.value;
  v14 = DCONST_DVARFLT_mount_tuning_query_bias_centerline;
  if ( !DCONST_DVARFLT_mount_tuning_query_bias_centerline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_bias_centerline") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.value;
  v16 = DCONST_DVARFLT_mount_tuning_query_bias_up;
  if ( !DCONST_DVARFLT_mount_tuning_query_bias_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_bias_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v16->current.value;
  v18 = PM_GetEffectiveStance(player->ps) == PM_EFF_STANCE_DEFAULT && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&player->ps->pm_flags, ACTIVE, 0x1Du);
  outResultCount = 0i64;
  v19 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  integer = v19->current.integer;
  LODWORD(v54) = integer;
  v21 = DCONST_DVARBOOL_mount_tuning_query_draw_results;
  if ( !DCONST_DVARBOOL_mount_tuning_query_draw_results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_draw_results") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v22 = v21->current.enabled || integer == 1;
  LOBYTE(outCount[0]) = v22;
  v23 = (float *)&v67;
  if ( !v22 )
    v23 = NULL;
  resultDistancePool = v23;
  v24 = player->handler->GetEdgeQueryCache(player->handler, (unsigned int)player->ps->clientNum);
  v25 = player->worldBasis.m[2].v[2];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v25) & _xmm) - 1.0) & _xmm) >= 0.001 || COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(player->worldBasis.m[2].v[1] * player->eyeBasis.m[0].v[1]) + (float)(player->worldBasis.m[2].v[0] * player->eyeBasis.m[0].v[0])) + (float)(v25 * player->eyeBasis.m[0].v[2])) & _xmm) - 1.0) & _xmm) < 0.001 )
    goto LABEL_79;
  ProjectPointOnPlane(player->eyeBasis.m, &player->worldBasis.m[2], &outProjectedPoint);
  v26 = LODWORD(outProjectedPoint.v[0]);
  *(float *)&v26 = fsqrt((float)((float)(*(float *)&v26 * *(float *)&v26) + (float)(outProjectedPoint.v[1] * outProjectedPoint.v[1])) + (float)(outProjectedPoint.v[2] * outProjectedPoint.v[2]));
  _XMM3 = v26;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm7, xmm0
  }
  outCount[1] = _XMM1;
  outProjectedPoint.v[0] = outProjectedPoint.v[0] * (float)(1.0 / *(float *)&_XMM1);
  outProjectedPoint.v[1] = outProjectedPoint.v[1] * (float)(1.0 / *(float *)&_XMM1);
  outProjectedPoint.v[2] = outProjectedPoint.v[2] * (float)(1.0 / *(float *)&_XMM1);
  SuitDef = BG_GetSuitDef(player->ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2448, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v31 = DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_stand;
  if ( !DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_stand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_ideal_height_offset_stand") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  v32 = (float)SuitDef->viewheight_stand + v31->current.value;
  if ( !v18 )
  {
    v33 = DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_crouch;
    if ( !DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_crouch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_ideal_height_offset_crouch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    v32 = (float)SuitDef->viewheight_crouch + v33->current.value;
  }
  definition.nearHalfWidth = v7;
  definition.nearHalfHeight = v9;
  definition.farHalfWidth = v11;
  definition.farHalfHeight = v13;
  definition.nearDist = mountNearDist;
  definition.farDist = value;
  if ( v7 != v24->mountQueryDefinition.nearHalfWidth || v9 != v24->mountQueryDefinition.nearHalfHeight || v11 != v24->mountQueryDefinition.farHalfWidth || v13 != v24->mountQueryDefinition.farHalfHeight || mountNearDist != v24->mountQueryDefinition.nearDist || value != v24->mountQueryDefinition.farDist )
  {
    v24->mountQueryDefinition = definition;
    EdgeFrustumQueryShape::Calculate(&v24->mountQueryShape, &definition);
  }
  v1.m[0] = outProjectedPoint;
  v1.m[2] = player->worldBasis.row2;
  Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
  v1.m[3].v[0] = (float)(v32 * player->worldBasis.m[2].v[0]) + player->origin.v[0];
  v1.m[3].v[1] = (float)(v32 * player->worldBasis.m[2].v[1]) + player->origin.v[1];
  v1.m[3].v[2] = (float)(v32 * player->worldBasis.m[2].v[2]) + player->origin.v[2];
  p_mountQueryShape = &v24->mountQueryShape;
  p_shape = &shape;
  v36 = 2i64;
  do
  {
    p_shape->m_planes[0] = p_mountQueryShape->m_planes[0];
    p_shape->m_planes[1] = p_mountQueryShape->m_planes[1];
    p_shape->m_planes[2] = p_mountQueryShape->m_planes[2];
    p_shape->m_planes[3] = p_mountQueryShape->m_planes[3];
    p_shape->m_planes[4] = p_mountQueryShape->m_planes[4];
    p_shape->m_planes[5] = p_mountQueryShape->m_planes[5];
    p_shape->m_corners[0] = p_mountQueryShape->m_corners[0];
    p_shape = (EdgeFrustumQueryShape *)((char *)p_shape + 128);
    p_shape[-1].m_forward = p_mountQueryShape->m_corners[1];
    p_mountQueryShape = (EdgeFrustumQueryShape *)((char *)p_mountQueryShape + 128);
    --v36;
  }
  while ( v36 );
  p_shape->m_planes[0] = p_mountQueryShape->m_planes[0];
  p_shape->m_planes[1] = p_mountQueryShape->m_planes[1];
  EdgeFrustumQueryShape::Transform(&shape, &v1);
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v64, &shape);
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v64, v15);
  EdgeOctreeQueryFrustum::SetAxisBias(&v64, &player->worldBasis.m[2], v17);
  PM_ContextMount_BuildClipPlanes(player, &v64);
  v57.m_hint = 16777208;
  v57.m_flags = 1;
  v57.m_bucket = MOUNT;
  v57.m_queryShape = &v64;
  v57.m_hint = v24->mountHintNode;
  EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v57, player->handler, resultIdPool, resultFractionPool, resultDistancePool, 6ui64, &outResultCount, &v24->mountHintNode);
  v37 = outResultCount;
  if ( LOBYTE(outCount[0]) )
    ((void (__fastcall *)(const BgHandler *, unsigned __int64, EdgeId *, float *, float *, _DWORD, _DWORD))player->handler->DebugEdgeQueryResults)(player->handler, outResultCount, resultIdPool, resultFractionPool, resultDistancePool, LODWORD(value), 0);
  v38 = 0;
  if ( !v37 )
  {
LABEL_79:
    v45 = 0;
    goto LABEL_80;
  }
  v39 = 0i64;
  v40 = resultFractionPool;
  while ( 1 )
  {
    v41 = outEdgeProperties;
    v42 = 6i64;
    do
    {
      EdgePropertyTuple::EdgePropertyTuple(v41++);
      --v42;
    }
    while ( v42 );
    outCount[1] = 0;
    PM_ContextMount_BuildCandidatesFromEdgeId(player, &resultIdPool[v39], *v40, v38, outEdgeProperties, &outCount[1]);
    v43 = 0;
    if ( outCount[1] > 0 )
      break;
LABEL_78:
    ++v38;
    ++v40;
    v39 = v38;
    if ( v38 >= outResultCount )
      goto LABEL_79;
  }
  v44 = outEdgeProperties;
  while ( !PM_ContextMount_IsValidEdge_Detail(player, &v44->edge, 1, 0, v38, v44->recurseCount) )
  {
LABEL_77:
    ++v43;
    ++v44;
    if ( v43 >= outCount[1] )
      goto LABEL_78;
  }
  EdgeId::Clear((EdgeId *)&resultDistancePool);
  relativeYawClampRad = 0i64;
  PM_ContextMount_SetDetailedProperties(player, &v44->edge, (const EdgeId *)&resultDistancePool, 0.0, MOUNT_TRANSITION_TYPE_NONE, (float *)&relativeYawClampRad, (ContextMountSurfFlags)0, outSurfaceDetail);
  if ( !PM_ContextMount_CalcFinalClampAngles(player, &v44->edge, outSurfaceDetail) )
  {
    edge = v44->edge;
    PM_ContextMount_DebugFailedEdge(player, &edge, v38, v44->recurseCount, "failed final clamp");
    goto LABEL_77;
  }
  if ( (_DWORD)v54 == 1 )
  {
    PM_ContextMount_DebugValidEdge(player, outSurfaceDetail, &colorGreen, &colorCyan, v38, v44->recurseCount, "best");
    v47 = v43 + 1;
    if ( v47 < outCount[1] )
    {
      p_id = &outEdgeProperties[v47].edge.id;
      v49 = *((float *)&relativeYawClampRad + 1);
      v50 = *(float *)&relativeYawClampRad;
      do
      {
        EdgeId::Clear((EdgeId *)&resultDistancePool);
        edge.point.v[2] = FLOAT_N180_0;
        edge.openAngleRad = FLOAT_N180_0;
        *(_OWORD *)&edge.normalFaceIndex = _xmm;
        *(float *)&edge.id.m_entityIndex = 0.0;
        edge.fraction = 0.0;
        LODWORD(edge.normal.v[0]) = p_id[-1].m_entityIndex;
        *(EdgeId *)&edge.normal.y = *p_id;
        LODWORD(edge.parallel.v[0]) = p_id[1].m_edgeIndex;
        LODWORD(edge.parallel.v[1]) = truncate_cast<unsigned int,unsigned __int64>(*(_QWORD *)&p_id[-2].m_entityIndex);
        EdgeId::Clear((EdgeId *)&edge.parallel.z);
        edge.point.v[0] = 0.0;
        edge.point.v[1] = 0.0;
        v51 = BG_ContextMount_QuantizeFloat01Byte(0.0);
        edge.below.v[1] = *(float *)&v51;
        edge.below.v[2] = 0.0;
        LODWORD(edge.otherNormal.v[0]) = MSG_PackSignedFloat(v50, 6.2831855, 9u);
        LODWORD(edge.otherNormal.v[1]) = MSG_PackSignedFloat(v49, 6.2831855, 9u);
        LOBYTE(edge.otherNormal.z) = 0;
        if ( PM_ContextMount_CalcFinalClampAngles(player, (const MountEdgeProperties *)&p_id[-10].m_entityIndex, (MountSurfaceDetailedProperties *)&edge) )
          PM_ContextMount_DebugValidEdge(player, (const MountSurfaceDetailedProperties *)&edge, &colorDkGreen, &colorDkCyan, v38, p_id[3].m_edgeIndex, "candidate");
        ++v47;
        p_id += 13;
      }
      while ( v47 < outCount[1] );
    }
  }
  v45 = 1;
LABEL_80:
  Sys_ProfEndNamedEvent();
  return v45;
}

/*
==============
PM_ContextMount_FindMountEdge_Maintain
==============
*/
__int64 PM_ContextMount_FindMountEdge_Maintain(const MountPlayerProperties *player, const pml_t *pml, const tmat33_t<vec3_t> *prevEyeBasis, MountSurfaceDetailedProperties *outSurfaceDetail)
{
  playerState_s *ps; 
  ContextMountState *p_mountState; 
  EdgeQueryCache *v10; 
  float v11; 
  double Float_Internal_DebugName; 
  int v13; 
  int v14; 
  EdgeId *p_resultIdPool; 
  int v16; 
  unsigned int normalFaceIndex; 
  float fraction; 
  EdgeId id; 
  const BgHandler *handler; 
  double v21; 
  float transitionFraction; 
  ContextMountTransitionType transitionType; 
  char v24; 
  ContextMountSurfFlags flags; 
  ContextMountSurfFlags v26; 
  double v27; 
  double v28; 
  const char *v29; 
  unsigned __int8 v30; 
  unsigned int *outHintNodeIndex; 
  ContextMountSurfFlags inOutSurfFlags[8]; 
  float inOutTransitionFraction[2]; 
  ContextMountTransitionType inOutTransitionType[2]; 
  EdgeId inOutTransId; 
  EdgeOctreeQuery<EdgeOctreeQuerySphere> v37; 
  __int64 v38; 
  MountEdgeProperties v39; 
  float v40; 
  float v41; 
  float v42; 
  MountEdgeProperties edge; 
  MountSurfaceProperties mountSurface; 
  vec3_t outExtrapolatedPivotPoint; 
  EdgeOctreeQuerySphere v46; 
  float resultFractionPool[6]; 
  EdgeId resultIdPool; 

  v38 = -2i64;
  if ( !player->handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2570, ASSERT_TYPE_ASSERT, "( player.handler ) != ( nullptr )", "%s != %s\n\t%p, %p", "player.handler", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !player->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2571, ASSERT_TYPE_ASSERT, "( player.ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "player.ps", "nullptr", NULL, NULL) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_FindMountEdge_Maintain");
  ps = player->ps;
  p_mountState = &ps->mountState;
  v10 = player->handler->GetEdgeQueryCache(player->handler, (unsigned int)ps->clientNum);
  MountSurfaceProperties::Initialize(&mountSurface, player->handler, &p_mountState->surface);
  if ( !PM_ContextMount_UpdateMountPivotPoint(player, &mountSurface, prevEyeBasis, &outExtrapolatedPivotPoint) )
    goto LABEL_35;
  if ( mountSurface.id.m_entityIndex < 0x800 && player->handler->IsEntAttachedToVehicle((BgHandler *)player->handler, mountSurface.id.m_entityIndex, (int *)inOutTransitionFraction) )
  {
    if ( player->handler->GetEntityAntilagVelocity((BgHandler *)player->handler, LODWORD(inOutTransitionFraction[0]), player->ps, (vec3_t *)&v40) )
    {
      v11 = (float)((float)(v40 * v40) + (float)(v41 * v41)) + (float)(v42 * v42);
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_edge_max_velocity_sqr, "mount_edge_max_velocity_sqr");
      if ( v11 > *(float *)&Float_Internal_DebugName )
        goto LABEL_35;
    }
  }
  EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(&v46, &outExtrapolatedPivotPoint, sphereRadius);
  PM_ContextMount_BuildClipPlanes(player, &v46);
  v37.m_hint = 16777208;
  v37.m_flags = 1;
  v37.m_bucket = MOUNT;
  v37.m_queryShape = &v46;
  v37.m_hint = v10->mountHintNode;
  *(_QWORD *)inOutTransitionFraction = 0i64;
  EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(&v37, player->handler, &resultIdPool, resultFractionPool, NULL, 6ui64, (unsigned __int64 *)inOutTransitionFraction, &v10->mountHintNode);
  v13 = -1;
  v14 = 0;
  if ( !*(_QWORD *)inOutTransitionFraction )
    goto LABEL_35;
  p_resultIdPool = &resultIdPool;
  do
  {
    v16 = v14;
    if ( *p_resultIdPool != *(_QWORD *)&mountSurface.id )
      v16 = v13;
    v13 = v16;
    ++v14;
    ++p_resultIdPool;
  }
  while ( (unsigned __int64)v14 < *(_QWORD *)inOutTransitionFraction );
  if ( v16 < 0 )
    goto LABEL_35;
  edge.isInitialized = 0;
  EdgeId::Clear(&edge.id);
  normalFaceIndex = mountSurface.normalFaceIndex;
  fraction = mountSurface.fraction;
  id = mountSurface.id;
  handler = player->handler;
  edge.id = mountSurface.id;
  edge.fraction = mountSurface.fraction;
  edge.normalFaceIndex = mountSurface.normalFaceIndex;
  edge.type = mountSurface.type;
  Edge_CalculatePoint(handler, mountSurface.id, mountSurface.fraction, &edge.point);
  v21 = Edge_CalculateOpenAngleRad(id);
  edge.openAngleRad = *(float *)&v21;
  Edge_CalculateVectors(handler, id, fraction, normalFaceIndex, &edge.normal, &edge.parallel, &edge.below, &edge.otherNormal);
  edge.isInitialized = 1;
  inOutTransId = mountSurface.adjId;
  transitionFraction = mountSurface.transitionFraction;
  inOutTransitionFraction[0] = mountSurface.transitionFraction;
  transitionType = mountSurface.transitionType;
  inOutTransitionType[0] = mountSurface.transitionType;
  if ( BG_ContextMount_IsActive(player->ps) && (p_mountState->flags & 1) == 0 )
  {
    v24 = 0;
    goto LABEL_26;
  }
  if ( mountSurface.transitionType )
    goto LABEL_24;
  v24 = 0;
  if ( !PM_ContextMount_ShouldCheckTransitions(player, (const ContextMountType)mountSurface.type, 0) )
    goto LABEL_26;
  if ( PM_ContextMount_CheckForStartTransition(player, &edge, &inOutTransId, inOutTransitionType) )
  {
LABEL_24:
    PM_ContextMount_UpdateTransition(pml, player, &edge, &inOutTransId, inOutTransitionFraction, inOutTransitionType);
    v24 = 1;
    transitionFraction = inOutTransitionFraction[0];
  }
  transitionType = inOutTransitionType[0];
LABEL_26:
  flags = p_mountState->surface.flags;
  if ( transitionType )
    v26 = flags | 1;
  else
    v26 = flags & 0xFE;
  inOutSurfFlags[0] = v26;
  v27 = MSG_UnpackSignedFloat(p_mountState->surface.packedRelYawClamp[0], 6.2831855, 9u);
  inOutTransitionFraction[0] = *(float *)&v27;
  v28 = MSG_UnpackSignedFloat(p_mountState->surface.packedRelYawClamp[1], 6.2831855, 9u);
  inOutTransitionFraction[1] = *(float *)&v28;
  if ( !v24 )
  {
    if ( !PM_ContextMount_SweepYawClamp(pml, player, &edge, inOutSurfFlags, inOutTransitionFraction) )
      goto LABEL_35;
    v26 = inOutSurfFlags[0];
  }
  PM_ContextMount_SetDetailedProperties(player, &edge, &inOutTransId, transitionFraction, transitionType, inOutTransitionFraction, v26, outSurfaceDetail);
  if ( PM_ContextMount_CalcFinalClampAngles(player, &edge, outSurfaceDetail) )
  {
    if ( edge.type )
      goto LABEL_42;
    LODWORD(outHintNodeIndex) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2711, ASSERT_TYPE_ASSERT, "( edge.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "edge.type", "MOUNT_TYPE_NONE", outHintNodeIndex, 0i64) )
      __debugbreak();
    if ( edge.type )
    {
LABEL_42:
      v30 = 1;
      goto LABEL_36;
    }
    v29 = "failed to find edge";
  }
  else
  {
    v29 = "exited final clamp";
  }
  v39 = edge;
  PM_ContextMount_DebugFailedEdge(player, &v39, 0, 0, v29);
LABEL_35:
  v30 = 0;
LABEL_36:
  Sys_ProfEndNamedEvent();
  return v30;
}

/*
==============
PM_ContextMount_GetEdgeToCylinderDistance
==============
*/
void PM_ContextMount_GetEdgeToCylinderDistance(const ContextMountType *type, const Weapon *weapon, const bool isAlternate, float *outEdgeToCylinderForward, float *outEdgeToCylinderAbove)
{
  const dvar_t *v6; 

  BG_GetMountEdgeToEyeDistance(*type, weapon, isAlternate, outEdgeToCylinderForward, outEdgeToCylinderAbove);
  v6 = DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min;
  if ( !DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_cylinder_forward_distance_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  _XMM0 = v6->current.unsignedInt;
  __asm { vmaxss  xmm1, xmm0, dword ptr [rbx] }
  *outEdgeToCylinderForward = *(float *)&_XMM1;
}

/*
==============
PM_ContextMount_GetEdgeType
==============
*/
__int64 PM_ContextMount_GetEdgeType(const vec3_t *entityUp, const tmat33_t<vec3_t> *eyeBasis, const vec3_t *edgeParallelVec, const vec3_t *edgeBelowVec)
{
  double v6; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v10; 
  char v11; 

  v6 = AngleBetween(entityUp, edgeParallelVec);
  v7 = DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope;
  LODWORD(v8) = COERCE_UNSIGNED_INT(*(float *)&v6 - 90.0) & _xmm;
  if ( !DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_top_mount_max_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v8 <= v7->current.value )
    return 1i64;
  v10 = DCONST_DVARFLT_mount_tuning_side_mount_min_slope;
  if ( !DCONST_DVARFLT_mount_tuning_side_mount_min_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_mount_min_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v8 < v10->current.value )
    return 0i64;
  if ( edgeBelowVec == (const vec3_t *)&v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  return (unsigned int)((float)((float)((float)(eyeBasis->m[1].v[1] * edgeBelowVec->v[1]) + (float)(eyeBasis->m[1].v[0] * edgeBelowVec->v[0])) + (float)(eyeBasis->m[1].v[2] * edgeBelowVec->v[2])) >= 0.0) + 2;
}

/*
==============
PM_ContextMount_IsValidEdge_Adjacency
==============
*/
char PM_ContextMount_IsValidEdge_Adjacency(const MountPlayerProperties *player, const MountEdgeProperties *edge, int edgeScoreOrdinal, int recurseCount)
{
  __m256i v8; 
  MountEdgeProperties v10; 
  vec3_t outBelow; 
  vec3_t outParallel; 
  vec3_t outNormal; 

  if ( Edge_CalculateVectors(player->handler, edge->id, edge->fraction, &player->worldBasis.m[2], &player->eyeBasis, &outNormal, &outParallel, &outBelow) == edge->normalFaceIndex )
    return 1;
  v8 = *(__m256i *)&edge->below.z;
  *(__m256i *)v10.normal.v = *(__m256i *)edge->normal.v;
  *(__m256i *)&v10.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
  *(__m256i *)&v10.below.z = v8;
  PM_ContextMount_DebugFailedEdge(player, &v10, edgeScoreOrdinal, recurseCount, "wrong normalFaceIndex");
  return 0;
}

/*
==============
PM_ContextMount_IsValidEdge_Detail
==============
*/
_BOOL8 PM_ContextMount_IsValidEdge_Detail(const MountPlayerProperties *player, const MountEdgeProperties *edge, bool isInitialSearch, bool isCheckForTransition, int edgeScoreOrdinal, int recurseCount)
{
  bool v10; 
  double Float_Internal_DebugName; 
  __int64 m_entityIndex; 
  float v13; 
  double v14; 
  __int64 edgeToEyeAbove; 
  float outForward; 
  EdgeId nextEdge; 
  MountEdgeProperties v19; 
  __int64 v20; 
  vec3_t endPoint; 
  vec3_t outEyePoint; 
  vec3_t outMountUpDir; 
  tmat33_t<vec3_t> outClampedEyeBasis; 
  MountSurfaceDetailedProperties inOutDetailMount; 

  v20 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_IsValidEdge_Detail");
  if ( isInitialSearch )
  {
    EdgeId::Clear(&nextEdge);
    inOutDetailMount.minClampDeg.v[0] = FLOAT_N180_0;
    inOutDetailMount.minClampDeg.v[1] = FLOAT_N180_0;
    *(_OWORD *)inOutDetailMount.maxClampDeg.v = _xmm;
    inOutDetailMount.maxResistDeg.v[0] = 0.0;
    inOutDetailMount.maxResistDeg.v[1] = 0.0;
    edgeToEyeAbove = 0i64;
    PM_ContextMount_SetDetailedProperties(player, edge, &nextEdge, 0.0, MOUNT_TRANSITION_TYPE_NONE, (float *)&edgeToEyeAbove, (ContextMountSurfFlags)0, &inOutDetailMount);
    if ( !PM_ContextMount_CalcFinalClampAngles(player, edge, &inOutDetailMount) )
    {
      v19 = *edge;
      PM_ContextMount_DebugFailedEdge(player, &v19, edgeScoreOrdinal, recurseCount, "failed to calc tempClamp");
      v10 = 0;
      goto LABEL_22;
    }
    if ( !PM_ContextMount_CalcMountEyePoint(&inOutDetailMount, player->handler, &player->eyeBasis, &player->worldBasis, 0.0, 0.0, &outEyePoint, &outClampedEyeBasis) )
    {
      v19 = *edge;
      PM_ContextMount_DebugFailedEdge(player, &v19, edgeScoreOrdinal, recurseCount, "clamped eye parallel up");
      v10 = 0;
      goto LABEL_22;
    }
    if ( (unsigned int)(edge->type - 2) <= 1 )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_side_max_viewangle_adjust, "mount_side_max_viewangle_adjust");
      if ( (float)((float)((float)(outClampedEyeBasis.m[0].v[1] * player->eyeBasis.m[0].v[1]) + (float)(outClampedEyeBasis.m[0].v[0] * player->eyeBasis.m[0].v[0])) + (float)(outClampedEyeBasis.m[0].v[2] * player->eyeBasis.m[0].v[2])) < cosf_0(*(float *)&Float_Internal_DebugName * 0.017453292) )
      {
        v19 = *edge;
        PM_ContextMount_DebugFailedEdge(player, &v19, edgeScoreOrdinal, recurseCount, "extreme viewangle change");
        v10 = 0;
        goto LABEL_22;
      }
    }
    BG_GetMountEdgeToEyeDistance((const ContextMountType)edge->type, &player->weapon, player->isAlternate, &outForward, (float *)&edgeToEyeAbove);
    BG_ContextMount_GetMountUpVector((const ContextMountType)edge->type, &outClampedEyeBasis, &outMountUpDir);
    endPoint.v[0] = (float)(*(float *)&edgeToEyeAbove * outMountUpDir.v[0]) + (float)((float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * outClampedEyeBasis.m[0].v[0]) + outEyePoint.v[0]);
    endPoint.v[1] = (float)(*(float *)&edgeToEyeAbove * outMountUpDir.v[1]) + (float)((float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * outClampedEyeBasis.m[0].v[1]) + outEyePoint.v[1]);
    endPoint.v[2] = (float)(*(float *)&edgeToEyeAbove * outMountUpDir.v[2]) + (float)((float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * outClampedEyeBasis.m[0].v[2]) + outEyePoint.v[2]);
    if ( PM_ContextMount_TestRayHit(player, &player->eyeOrigin, &endPoint) )
    {
      v19 = *edge;
      PM_ContextMount_DebugFailedEdge(player, &v19, edgeScoreOrdinal, recurseCount, "view obstructed to mount point");
      v10 = 0;
      goto LABEL_22;
    }
    if ( PM_ContextMount_IsViewObstructed(player, edge, &outEyePoint, &outClampedEyeBasis) )
    {
      v19 = *edge;
      PM_ContextMount_DebugFailedEdge(player, &v19, edgeScoreOrdinal, recurseCount, "view obstructed");
      v10 = 0;
      goto LABEL_22;
    }
  }
  m_entityIndex = edge->id.m_entityIndex;
  v10 = ((unsigned int)m_entityIndex >= 0x800 || !player->handler->IsEntAttachedToVehicle((BgHandler *)player->handler, m_entityIndex, (int *)&edgeToEyeAbove) || !player->handler->GetEntityAntilagVelocity((BgHandler *)player->handler, edgeToEyeAbove, player->ps, &endPoint) || (v13 = (float)((float)(endPoint.v[0] * endPoint.v[0]) + (float)(endPoint.v[1] * endPoint.v[1])) + (float)(endPoint.v[2] * endPoint.v[2]), v14 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_edge_max_velocity_sqr, "mount_edge_max_velocity_sqr"), v13 <= *(float *)&v14)) && (!isInitialSearch && !isCheckForTransition || PM_ContextMount_IsValidEdge_SweepCylinder(player, edge, edgeScoreOrdinal, recurseCount));
LABEL_22:
  Sys_ProfEndNamedEvent();
  return v10;
}

/*
==============
PM_ContextMount_IsValidEdge_Preliminary
==============
*/
__int64 PM_ContextMount_IsValidEdge_Preliminary(const MountPlayerProperties *player, const MountEdgeProperties *edge, bool initialSearch, int edgeScoreOrdinal, int recurseCount, vec3_t *outClampedEyeForward)
{
  float v12; 
  const dvar_t *v13; 
  const char *v14; 
  MountEdgeProperties *v15; 
  float v16; 
  float v17; 
  double Float_Internal_DebugName; 
  float v19; 
  double v20; 
  double v21; 
  float v22; 
  float v23; 
  float v24; 
  __m256i v25; 
  unsigned __int8 v26; 
  float outAbove[2]; 
  __int64 outForward; 
  EdgeId nextEdge; 
  __int64 v31; 
  __int64 v32; 
  _BYTE v33[96]; 
  char inOutDetailMount[96]; 
  tmat33_t<vec3_t> outClampedEyeBasis; 
  vec3_t outEyePoint; 

  v32 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_IsValidEdge_Preliminary");
  _XMM7 = 0i64;
  *(float *)&v31 = FLOAT_1_0;
  __asm { vunpcklps xmm1, xmm7, xmm7 }
  *(double *)outClampedEyeForward->v = *(double *)&_XMM1;
  LODWORD(outClampedEyeForward->v[2]) = v31;
  LODWORD(v12) = COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(player->eyeBasis.m[0].v[2] * edge->normal.v[2]) ^ _xmm) - (float)((float)(player->eyeBasis.m[0].v[1] * edge->normal.v[1]) + (float)(player->eyeBasis.m[0].v[0] * edge->normal.v[0]))) & _xmm;
  v13 = DCONST_DVARFLT_mount_tuning_query_max_angle_player;
  if ( !DCONST_DVARFLT_mount_tuning_query_max_angle_player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_max_angle_player") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v12 >= cosf_0(v13->current.value * 0.017453292) )
  {
    if ( initialSearch )
    {
      v16 = edge->normal.v[1];
      v17 = edge->normal.v[2];
      if ( (float)((float)((float)(v16 * player->eyeBasis.m[0].v[1]) + (float)(edge->normal.v[0] * player->eyeBasis.m[0].v[0])) + (float)(v17 * player->eyeBasis.m[0].v[2])) >= -0.000001 )
      {
        *(__m256i *)inOutDetailMount = *(__m256i *)edge->normal.v;
        *(__m256i *)&inOutDetailMount[32] = *(__m256i *)&edge->below.z;
        *(__m256i *)&inOutDetailMount[64] = *(__m256i *)&edge->normalFaceIndex;
        v14 = "wrong side (view)";
        v15 = (MountEdgeProperties *)inOutDetailMount;
        goto LABEL_21;
      }
      if ( (float)((float)((float)((float)(player->eyeOrigin.v[1] - edge->point.v[1]) * v16) + (float)((float)(player->eyeOrigin.v[0] - edge->point.v[0]) * edge->normal.v[0])) + (float)((float)(player->eyeOrigin.v[2] - edge->point.v[2]) * v17)) <= 0.0 )
      {
        *(__m256i *)inOutDetailMount = *(__m256i *)edge->normal.v;
        *(__m256i *)&inOutDetailMount[32] = *(__m256i *)&edge->below.z;
        *(__m256i *)&inOutDetailMount[64] = *(__m256i *)&edge->normalFaceIndex;
        v14 = "wrong side (eye origin)";
        v15 = (MountEdgeProperties *)inOutDetailMount;
        goto LABEL_21;
      }
      if ( edge->type == MOUNT_TYPE_TOP )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_top_mount_near_face_min_slope, "mount_tuning_top_mount_near_face_min_slope");
        v19 = *(float *)&Float_Internal_DebugName;
        v20 = SignedAngleBetween(&edge->below, &player->worldBasis.m[2], &edge->parallel);
        v21 = AngleNormalize360(*(const float *)&v20);
        if ( (float)(*(float *)&v21 - 90.0) < v19 )
        {
          *(__m256i *)inOutDetailMount = *(__m256i *)edge->normal.v;
          *(__m256i *)&inOutDetailMount[32] = *(__m256i *)&edge->below.z;
          *(__m256i *)&inOutDetailMount[64] = *(__m256i *)&edge->normalFaceIndex;
          v14 = "sloping away";
          v15 = (MountEdgeProperties *)inOutDetailMount;
          goto LABEL_21;
        }
      }
    }
    EdgeId::Clear(&nextEdge);
    *(float *)&inOutDetailMount[56] = FLOAT_N180_0;
    *(float *)&inOutDetailMount[60] = FLOAT_N180_0;
    *(_OWORD *)&inOutDetailMount[64] = _xmm;
    *(float *)&inOutDetailMount[80] = 0.0;
    *(float *)&inOutDetailMount[84] = 0.0;
    outForward = 0i64;
    PM_ContextMount_SetDetailedProperties(player, edge, &nextEdge, 0.0, MOUNT_TRANSITION_TYPE_NONE, (float *)&outForward, (ContextMountSurfFlags)0, (MountSurfaceDetailedProperties *)inOutDetailMount);
    if ( PM_ContextMount_CalcFinalClampAngles(player, edge, (MountSurfaceDetailedProperties *)inOutDetailMount) )
    {
      BG_GetMountEdgeToEyeDistance(*(const ContextMountType *)inOutDetailMount, &player->weapon, player->isAlternate, (float *)&outForward, outAbove);
      if ( PM_ContextMount_CalcMountEyePoint((const MountSurfaceDetailedProperties *)inOutDetailMount, player->handler, &player->eyeBasis, &player->worldBasis, *(const float *)&outForward, outAbove[0], &outEyePoint, &outClampedEyeBasis) )
      {
        v22 = outClampedEyeBasis.m[0].v[0];
        outClampedEyeForward->v[0] = outClampedEyeBasis.m[0].v[0];
        v23 = outClampedEyeBasis.m[0].v[1];
        outClampedEyeForward->v[1] = outClampedEyeBasis.m[0].v[1];
        v24 = outClampedEyeBasis.m[0].v[2];
        outClampedEyeForward->v[2] = outClampedEyeBasis.m[0].v[2];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v23 * edge->parallel.v[1]) + (float)(v22 * edge->parallel.v[0])) + (float)(v24 * edge->parallel.v[2])) & _xmm) < 0.99900001 )
        {
          v26 = 1;
          goto LABEL_23;
        }
        v14 = "clampedView parallel to edge";
      }
      else
      {
        v14 = "clamped eye parallel up";
      }
    }
    else
    {
      v14 = "tempClamp failed";
    }
    *(__m256i *)v33 = *(__m256i *)edge->normal.v;
    v25 = *(__m256i *)&edge->normalFaceIndex;
    *(__m256i *)&v33[32] = *(__m256i *)&edge->below.z;
    *(__m256i *)&v33[64] = v25;
    v15 = (MountEdgeProperties *)v33;
  }
  else
  {
    *(__m256i *)inOutDetailMount = *(__m256i *)edge->normal.v;
    *(__m256i *)&inOutDetailMount[32] = *(__m256i *)&edge->below.z;
    *(__m256i *)&inOutDetailMount[64] = *(__m256i *)&edge->normalFaceIndex;
    v14 = "wrong normal (view)";
    v15 = (MountEdgeProperties *)inOutDetailMount;
  }
LABEL_21:
  PM_ContextMount_DebugFailedEdge(player, v15, edgeScoreOrdinal, recurseCount, v14);
  v26 = 0;
LABEL_23:
  Sys_ProfEndNamedEvent();
  return v26;
}

/*
==============
PM_ContextMount_IsValidEdge_Set
==============
*/
char PM_ContextMount_IsValidEdge_Set(const MountPlayerProperties *player, const MountEdgeProperties *edge, int edgeScoreOrdinal, int recurseCount)
{
  __m256i v8; 
  __m256i v10; 
  const dvar_t *v11; 
  float v12; 
  const char *v13; 
  const dvar_t *v14; 
  float v15; 
  double Float_Internal_DebugName; 
  double v17; 
  float v18; 
  float v19; 
  float v20; 
  bool v21; 
  bool v22; 
  __m256i v23; 
  MountEdgeProperties v24; 
  vec3_t outLineSegment[2]; 

  if ( !BG_IsMountTypeEnabled(player->ps, &player->weapon, player->isAlternate, (const ContextMountType)edge->type) )
  {
    v8 = *(__m256i *)&edge->below.z;
    *(__m256i *)v24.normal.v = *(__m256i *)edge->normal.v;
    *(__m256i *)&v24.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
    *(__m256i *)&v24.below.z = v8;
    PM_ContextMount_DebugFailedEdge(player, &v24, edgeScoreOrdinal, recurseCount, "type not enabled");
    return 0;
  }
  if ( BG_ContextMount_IsViewangleTooShallow((const ContextMountType)edge->type, &player->eyeBasis, &player->worldBasis.m[2], &edge->parallel) )
  {
    v10 = *(__m256i *)&edge->below.z;
    *(__m256i *)v24.normal.v = *(__m256i *)edge->normal.v;
    *(__m256i *)&v24.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
    *(__m256i *)&v24.below.z = v10;
    PM_ContextMount_DebugFailedEdge(player, &v24, edgeScoreOrdinal, recurseCount, "parallel to view");
    return 0;
  }
  if ( edge->type == MOUNT_TYPE_TOP )
  {
    v14 = DCONST_DVARMPFLT_mount_top_min_height;
    v15 = (float)((float)((float)(edge->point.v[1] - player->origin.v[1]) * player->worldBasis.m[2].v[1]) + (float)((float)(edge->point.v[0] - player->origin.v[0]) * player->worldBasis.m[2].v[0])) + (float)((float)(edge->point.v[2] - player->origin.v[2]) * player->worldBasis.m[2].v[2]);
    if ( !DCONST_DVARMPFLT_mount_top_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_min_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v15 < v14->current.value || (Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_mount_top_max_height, "mount_top_max_height"), v15 > *(float *)&Float_Internal_DebugName) )
    {
      v13 = "invalid height";
      goto LABEL_33;
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mount_top_enforce_distance_besides_edge, "mount_top_enforce_distance_besides_edge") )
    {
      v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_mount_top_max_distance_besides_edge, "mount_top_max_distance_besides_edge");
      v18 = *(float *)&v17 * *(float *)&v17;
      if ( (float)(*(float *)&v17 * *(float *)&v17) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1308, ASSERT_TYPE_ASSERT, "(maxSideDistanceSq >= 0)", (const char *)&queryFormat, "maxSideDistanceSq >= 0") )
        __debugbreak();
      Edge_GetLineSegment(player->handler, edge->id, (vec3_t (*)[2])outLineSegment);
      v19 = outLineSegment[1].v[0] - outLineSegment[0].v[0];
      v20 = (float)((float)((float)(player->origin.v[1] - outLineSegment[0].v[1]) * (float)(outLineSegment[1].v[1] - outLineSegment[0].v[1])) + (float)((float)(player->origin.v[0] - outLineSegment[0].v[0]) * (float)(outLineSegment[1].v[0] - outLineSegment[0].v[0]))) + (float)((float)(player->origin.v[2] - outLineSegment[0].v[2]) * (float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]));
      v21 = v20 < 0.0 && COERCE_FLOAT(LODWORD(v20) & _xmm) > v18;
      v22 = v20 > (float)((float)((float)((float)(outLineSegment[1].v[1] - outLineSegment[0].v[1]) * (float)(outLineSegment[1].v[1] - outLineSegment[0].v[1])) + (float)(v19 * v19)) + (float)((float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]) * (float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]))) && (float)(v20 - (float)((float)((float)((float)(outLineSegment[1].v[1] - outLineSegment[0].v[1]) * (float)(outLineSegment[1].v[1] - outLineSegment[0].v[1])) + (float)(v19 * v19)) + (float)((float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]) * (float)(outLineSegment[1].v[2] - outLineSegment[0].v[2])))) > v18;
      if ( v21 || v22 )
      {
        v13 = "player too far besides edge";
        goto LABEL_33;
      }
    }
    return 1;
  }
  v11 = DCONST_DVARFLT_mount_tuning_max_wall_slope;
  LODWORD(v12) = COERCE_UNSIGNED_INT((float)((float)(edge->normal.v[1] * player->worldBasis.m[2].v[1]) + (float)(player->worldBasis.m[2].v[0] * edge->normal.v[0])) + (float)(edge->normal.v[2] * player->worldBasis.m[2].v[2])) & _xmm;
  if ( !DCONST_DVARFLT_mount_tuning_max_wall_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_max_wall_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v12 < cosf_0(v11->current.value * 0.017453292) )
    return 1;
  v13 = "normal parallel entUp";
LABEL_33:
  v23 = *(__m256i *)&edge->below.z;
  *(__m256i *)v24.normal.v = *(__m256i *)edge->normal.v;
  *(__m256i *)&v24.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
  *(__m256i *)&v24.below.z = v23;
  PM_ContextMount_DebugFailedEdge(player, &v24, edgeScoreOrdinal, recurseCount, v13);
  return 0;
}

/*
==============
PM_ContextMount_IsValidEdge_SweepCylinder
==============
*/
char PM_ContextMount_IsValidEdge_SweepCylinder(const MountPlayerProperties *player, const MountEdgeProperties *edge, const int edgeScoreOrdinal, const int recurseCount)
{
  const dvar_t *v8; 
  float v11; 
  __m256i v12; 
  bool v14; 
  ContextMountType type; 
  bool v16; 
  const char *v17; 
  __int128 v18; 
  __int128 transitionForwardAngleRad_low; 
  bool v24; 
  float v25; 
  float v26; 
  vec3_t *v27; 
  float v28; 
  float v29; 
  const dvar_t *v30; 
  float value; 
  int clientNum; 
  int v33; 
  __m256i v34; 
  float *outCylinderMidpointHeight; 
  float v36; 
  float outForward; 
  float outAbove; 
  float outFrac; 
  MountEdgeProperties v40; 
  vec3_t point; 
  vec3_t outMountUpDir; 
  vec3_t outMountCylinderGroundPos; 
  tmat33_t<vec3_t> dst; 
  Bounds cylinder; 
  EdgeTransitionData outTransitionData; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(player->worldBasis.m[2].v[2]) & _xmm) - 1.0) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1524, ASSERT_TYPE_ASSERT, "(Vec3IsParallel( worldZ, player.worldBasis[2] ))", (const char *)&queryFormat, "Vec3IsParallel( worldZ, player.worldBasis[2] )") )
    __debugbreak();
  BG_GetMountEdgeToEyeDistance((const ContextMountType)edge->type, &player->weapon, player->isAlternate, &outForward, &outAbove);
  v8 = DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min;
  if ( !DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_cylinder_forward_distance_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  _XMM0 = v8->current.unsignedInt;
  __asm { vmaxss  xmm2, xmm0, [rsp+1D0h+outForward]; edgeToEyeForward }
  outForward = *(float *)&_XMM2;
  PM_ContextMount_CalcMountCylinder(player, edge, *(const float *)&_XMM2, outAbove, &outMountCylinderGroundPos, &v36, &cylinder);
  v11 = v36;
  if ( PM_ContextMount_TestCylinderHit(player, player->ps->clientNum, &player->origin, &outMountCylinderGroundPos, v36, 1, &cylinder, &outFrac) )
  {
    v12 = *(__m256i *)&edge->below.z;
    *(__m256i *)v40.normal.v = *(__m256i *)edge->normal.v;
    *(__m256i *)&v40.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
    *(__m256i *)&v40.below.z = v12;
    PM_ContextMount_DebugFailedEdge(player, &v40, edgeScoreOrdinal, recurseCount, "capsule obstructed");
    return 0;
  }
  v14 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_LADDER_AIM|0x80);
  type = edge->type;
  v16 = v14;
  if ( type == MOUNT_TYPE_TOP )
  {
    v30 = DCONST_DVARFLT_mount_tuning_shapecast_min_top_yaw;
    if ( !DCONST_DVARFLT_mount_tuning_shapecast_min_top_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_min_top_yaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    value = v30->current.value;
    if ( value > 0.0 )
    {
      MatrixRotationDeg(&dst, &worldZ, COERCE_FLOAT(LODWORD(value) ^ _xmm));
      RotatePointAroundPoint(&outMountUpDir, &outMountCylinderGroundPos, &edge->point, &dst);
      clientNum = player->ps->clientNum;
      v36 = 0.0;
      PM_ContextMount_TestCylinderHit(player, clientNum, &outMountCylinderGroundPos, &outMountUpDir, v11, v16, &cylinder, &v36);
      MatrixRotationDeg(&dst, &worldZ, value);
      RotatePointAroundPoint(&outMountUpDir, &outMountCylinderGroundPos, &edge->point, &dst);
      v33 = player->ps->clientNum;
      outFrac = 0.0;
      PM_ContextMount_TestCylinderHit(player, v33, &outMountCylinderGroundPos, &outMountUpDir, v11, v16, &cylinder, &outFrac);
      if ( (float)((float)(outFrac + v36) * value) < value )
      {
        v17 = "top mount sweep failed";
        goto LABEL_29;
      }
    }
    return 1;
  }
  if ( (unsigned int)(type - 2) <= 1 )
  {
    if ( !PM_ContextMount_CalcEdgeTransitionAngles(player, edge, &outTransitionData) )
    {
      v17 = "failed capsule angle calc";
LABEL_29:
      v34 = *(__m256i *)&edge->below.z;
      *(__m256i *)v40.normal.v = *(__m256i *)edge->normal.v;
      *(__m256i *)&v40.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
      *(__m256i *)&v40.below.z = v34;
      PM_ContextMount_DebugFailedEdge(player, &v40, edgeScoreOrdinal, recurseCount, v17);
      return 0;
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_shapecast_validity_grace_angle_deg, "mount_tuning_shapecast_validity_grace_angle_deg");
    v18 = _XMM0;
    *(float *)&v18 = (float)(*(float *)&_XMM0 * 0.017453292) + outTransitionData.minAngleRad;
    _XMM2 = v18;
    transitionForwardAngleRad_low = LODWORD(outTransitionData.transitionForwardAngleRad);
    *(float *)&transitionForwardAngleRad_low = outTransitionData.transitionForwardAngleRad - (float)(*(float *)&_XMM0 * 0.017453292);
    _XMM1 = transitionForwardAngleRad_low;
    __asm
    {
      vmaxss  xmm6, xmm1, xmm4
      vminss  xmm5, xmm2, xmm4
    }
    v24 = *(float *)&_XMM6 > outTransitionData.playerAngleRad;
    if ( *(float *)&_XMM5 >= outTransitionData.playerAngleRad )
    {
      v27 = &player->worldBasis.m[2];
    }
    else
    {
      RotatePointAroundVector(dst.m, &outTransitionData.planeNormal, &outTransitionData.zeroAngleDir, *(float *)&_XMM5 * 57.295776);
      dst.m[2] = worldZ;
      Vec3Cross(&dst.m[2], dst.m, &dst.m[1]);
      BG_ContextMount_GetMountUpVector((const ContextMountType)edge->type, &dst, &outMountUpDir);
      v25 = (float)((float)(outAbove * outMountUpDir.v[1]) + edge->point.v[1]) + (float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * dst.m[0].v[1]);
      v26 = (float)(outAbove * outMountUpDir.v[2]) + edge->point.v[2];
      point.v[0] = (float)((float)(outAbove * outMountUpDir.v[0]) + edge->point.v[0]) + (float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * dst.m[0].v[0]);
      v27 = &player->worldBasis.m[2];
      point.v[2] = v26 + (float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * dst.m[0].v[2]);
      point.v[1] = v25;
      ProjectPointOnPlane(&point, &player->origin, &player->worldBasis.m[2], &point);
      if ( PM_ContextMount_TestCylinderHit(player, player->ps->clientNum, &outMountCylinderGroundPos, &point, v11, v16, &cylinder, &v36) )
      {
        v17 = "back capsule sweep failed";
        goto LABEL_29;
      }
    }
    if ( v24 )
    {
      RotatePointAroundVector(dst.m, &outTransitionData.planeNormal, &outTransitionData.zeroAngleDir, *(float *)&_XMM6 * 57.295776);
      dst.m[2] = worldZ;
      Vec3Cross(&dst.m[2], dst.m, &dst.m[1]);
      BG_ContextMount_GetMountUpVector((const ContextMountType)edge->type, &dst, &outMountUpDir);
      v28 = (float)((float)(outAbove * outMountUpDir.v[1]) + edge->point.v[1]) + (float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * dst.m[0].v[1]);
      v29 = (float)(outAbove * outMountUpDir.v[2]) + edge->point.v[2];
      point.v[0] = (float)((float)(outAbove * outMountUpDir.v[0]) + edge->point.v[0]) + (float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * dst.m[0].v[0]);
      point.v[2] = v29 + (float)(COERCE_FLOAT(LODWORD(outForward) ^ _xmm) * dst.m[0].v[2]);
      point.v[1] = v28;
      ProjectPointOnPlane(&point, &player->origin, v27, &point);
      if ( PM_ContextMount_TestCylinderHit(player, player->ps->clientNum, &outMountCylinderGroundPos, &point, v11, v16, &cylinder, &v36) )
      {
        v17 = "forward capsule sweep failed";
        goto LABEL_29;
      }
    }
    return 1;
  }
  LODWORD(outCylinderMidpointHeight) = edge->type;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1670, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encountered unexpected mount type %i", outCylinderMidpointHeight) )
    __debugbreak();
  return 0;
}

/*
==============
PM_ContextMount_IsVerticalEdge
==============
*/
bool PM_ContextMount_IsVerticalEdge(const float4 *testAxis, const float4 *edgeParallelVec)
{
  _XMM1 = _mm128_mul_ps(edgeParallelVec->v, testAxis->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm2, xmm0, xmm1 }
  return *(float *)&_XMM2 >= s_minVerticalDot;
}

/*
==============
PM_ContextMount_IsViewObstructed
==============
*/
_BOOL8 PM_ContextMount_IsViewObstructed(const MountPlayerProperties *player, const MountEdgeProperties *edge, const vec3_t *mountPivotPoint, const tmat33_t<vec3_t> *mountEyeBasis)
{
  const dvar_t *v4; 
  float value; 
  const dvar_t *v9; 
  ContextMountType type; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  bool v26; 
  const dvar_t *v27; 
  bool v28; 
  int v30; 
  vec3_t v31; 
  vec3_t dst; 
  vec3_t startPoint; 
  vec3_t endPoint; 
  vec3_t point; 

  v4 = DCONST_DVARFLT_mount_tuning_raycast_behind_edge;
  if ( !DCONST_DVARFLT_mount_tuning_raycast_behind_edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_raycast_behind_edge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v9 = DCONST_DVARFLT_mount_tuning_raycast_above_edge;
  if ( !DCONST_DVARFLT_mount_tuning_raycast_above_edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_raycast_above_edge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  type = edge->type;
  v11 = v9->current.value;
  if ( (unsigned int)(type - 2) <= 1 )
  {
    if ( type == MOUNT_TYPE_NONE )
    {
      v30 = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 614, ASSERT_TYPE_ASSERT, "( edge.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "edge.type", "MOUNT_TYPE_NONE", v30, 0i64) )
        __debugbreak();
    }
    LODWORD(v16) = LODWORD(edge->below.v[1]) ^ _xmm;
    LODWORD(point.v[0]) = LODWORD(edge->below.v[0]) ^ _xmm;
    v17 = edge->below.v[2];
    point.v[1] = v16;
    v18 = (float)(57.295776 * edge->openAngleRad) * ratio;
    LODWORD(point.v[2]) = LODWORD(v17) ^ _xmm;
    RotatePointAroundVector(&dst, &edge->parallel, &point, v18);
    RotatePointAroundVector(&v31, &edge->parallel, &edge->normal, (float)(57.295776 * edge->openAngleRad) * ratio);
    v19 = (float)((float)(dst.v[1] * dst.v[1]) + (float)(dst.v[0] * dst.v[0])) + (float)(dst.v[2] * dst.v[2]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 620, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( checkEyeForward ) )", "(%g, %g, %g) len %g", dst.v[0], dst.v[1], dst.v[2], fsqrt(v19)) )
      __debugbreak();
    v14 = v31.v[1];
    v13 = v31.v[0];
    v15 = v31.v[2];
    v20 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - 1.0) & _xmm) >= 0.0020000001 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 621, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( checkEyeUp ) )", "(%g, %g, %g) len %g", v31.v[0], v31.v[1], v31.v[2], fsqrt(v20)) )
        __debugbreak();
      v13 = v31.v[0];
      v14 = v31.v[1];
      v15 = v31.v[2];
    }
  }
  else
  {
    v12 = mountEyeBasis->m[0].v[1];
    v13 = mountEyeBasis->m[2].v[0];
    v14 = mountEyeBasis->m[2].v[1];
    v15 = mountEyeBasis->m[2].v[2];
    dst.v[0] = mountEyeBasis->m[0].v[0];
    dst.v[2] = mountEyeBasis->m[0].v[2];
    dst.v[1] = v12;
    v31.v[0] = v13;
    v31.v[1] = v14;
    v31.v[2] = v15;
  }
  v21 = DCONST_DVARFLT_mount_tuning_raycast_beyond_edge;
  v22 = (float)(COERCE_FLOAT(LODWORD(value) ^ _xmm) * dst.v[1]) + edge->point.v[1];
  startPoint.v[0] = (float)((float)(COERCE_FLOAT(LODWORD(value) ^ _xmm) * dst.v[0]) + edge->point.v[0]) + (float)(v13 * v11);
  v23 = v22 + (float)(v14 * v11);
  v24 = (float)(COERCE_FLOAT(LODWORD(value) ^ _xmm) * dst.v[2]) + edge->point.v[2];
  startPoint.v[1] = v23;
  startPoint.v[2] = v24 + (float)(v15 * v11);
  if ( !DCONST_DVARFLT_mount_tuning_raycast_beyond_edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_raycast_beyond_edge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v25 = value + v21->current.value;
  endPoint.v[0] = (float)(v25 * dst.v[0]) + startPoint.v[0];
  endPoint.v[1] = (float)(v25 * dst.v[1]) + startPoint.v[1];
  endPoint.v[2] = (float)(v25 * dst.v[2]) + startPoint.v[2];
  v26 = PM_ContextMount_TestRayHit(player, &startPoint, &endPoint);
  v27 = DCONST_DVARINT_mount_debug;
  v28 = v26;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.integer == 1 )
    ((void (__fastcall *)(const BgHandler *, vec3_t *, vec3_t *))player->handler->DebugCapsule)(player->handler, &startPoint, &endPoint);
  return v28;
}

/*
==============
PM_ContextMount_ProjectAndNormalize
==============
*/
bool PM_ContextMount_ProjectAndNormalize(const vec3_t *planeNormal, vec3_t *dir)
{
  float v2; 
  float v3; 
  float v4; 
  float v6; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  bool result; 

  v2 = planeNormal->v[1];
  v3 = planeNormal->v[0];
  v4 = planeNormal->v[2];
  v6 = (float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 736, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v3, v2, v4, fsqrt(v6)) )
    __debugbreak();
  ProjectPointOnPlane(dir, planeNormal, dir);
  v8 = dir->v[1];
  v9 = dir->v[0];
  v10 = dir->v[2];
  v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  if ( v11 <= 0.001 )
    return 0;
  result = 1;
  dir->v[0] = (float)(1.0 / v11) * v9;
  dir->v[2] = (float)(1.0 / v11) * v10;
  dir->v[1] = (float)(1.0 / v11) * v8;
  return result;
}

/*
==============
PM_ContextMount_SetDetailedProperties
==============
*/
void PM_ContextMount_SetDetailedProperties(const MountPlayerProperties *player, const MountEdgeProperties *edge, const EdgeId *nextEdge, float transitionFraction, ContextMountTransitionType transitionType, float *relativeYawClampRad, ContextMountSurfFlags mountSurfFlags, MountSurfaceDetailedProperties *outMountDetail)
{
  unsigned int v11; 
  __m256i v12; 
  EdgeId v13; 
  const BgHandler *handler; 
  EdgeId v15; 
  unsigned __int64 normalFaceIndex; 
  double v17; 
  MountEdgeProperties v18; 

  outMountDetail->mount.type = edge->type;
  outMountDetail->mount.id = edge->id;
  outMountDetail->mount.fraction = edge->fraction;
  outMountDetail->mount.normalFaceIndex = truncate_cast<unsigned int,unsigned __int64>(edge->normalFaceIndex);
  if ( transitionFraction > 0.0 )
  {
    v12 = *(__m256i *)&edge->below.z;
    v13 = *nextEdge;
    handler = player->handler;
    *(__m256i *)v18.normal.v = *(__m256i *)edge->normal.v;
    *(__m256i *)&v18.normalFaceIndex = *(__m256i *)&edge->normalFaceIndex;
    *(__m256i *)&v18.below.z = v12;
    MountEdgeProperties::TransitionToAdjacent(&v18, handler, v13, 0);
    v15 = *nextEdge;
    normalFaceIndex = v18.normalFaceIndex;
    outMountDetail->mount.adjFraction = v18.fraction;
    outMountDetail->mount.adjId = v15;
    v11 = truncate_cast<unsigned int,unsigned __int64>(normalFaceIndex);
  }
  else
  {
    EdgeId::Clear(&outMountDetail->mount.adjId);
    v11 = 0;
    outMountDetail->mount.adjFraction = 0.0;
  }
  outMountDetail->mount.adjNormalFaceIndex = v11;
  v17 = BG_ContextMount_QuantizeFloat01Byte(transitionFraction);
  outMountDetail->mount.transitionType = transitionType;
  outMountDetail->mount.transitionFraction = *(float *)&v17;
  outMountDetail->mount.packedRelYawClamp[0] = MSG_PackSignedFloat(*relativeYawClampRad, 6.2831855, 9u);
  outMountDetail->mount.packedRelYawClamp[1] = MSG_PackSignedFloat(relativeYawClampRad[1], 6.2831855, 9u);
  outMountDetail->mount.flags = mountSurfFlags;
}

/*
==============
PM_ContextMount_ShouldCheckTransitions
==============
*/
bool PM_ContextMount_ShouldCheckTransitions(const MountPlayerProperties *player, const ContextMountType mountType, bool initialSearch)
{
  const dvar_t *v3; 

  v3 = DCONST_DVARMPBOOL_mount_transition_enable;
  if ( !DCONST_DVARMPBOOL_mount_transition_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && mountType != MOUNT_TYPE_TOP && (initialSearch || BG_GetMountTransitionEnabled(&player->weapon, player->isAlternate));
}

/*
==============
PM_ContextMount_SweepYawClamp
==============
*/
__int64 PM_ContextMount_SweepYawClamp(const pml_t *pml, const MountPlayerProperties *player, const MountEdgeProperties *edge, ContextMountSurfFlags *inOutSurfFlags, float *outYawClampRad)
{
  double v8; 
  const dvar_t *v10; 
  __int128 unsignedInt; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  bool v16; 
  int v18; 
  float *p_outEdgeToCylinderAbove; 
  const dvar_t *v21; 
  ContextMountType type; 
  __int128 playerAngleRad_low; 
  __int128 v30; 
  __int128 v34; 
  const char *v35; 
  char v36; 
  __int128 v38; 
  ContextMountSurfFlags v39; 
  float *v40; 
  float v41; 
  unsigned __int8 v42; 
  float v43; 
  __m256i v44; 
  float *outCylinderMidpointHeight; 
  char v47; 
  bool v48; 
  float outAngleRad; 
  __int64 v50; 
  float *v51; 
  float edgeToEyeForward; 
  float outFrac[3]; 
  ContextMountSurfFlags *v54; 
  MountEdgeProperties v55; 
  __int64 v56; 
  vec3_t planeNormal; 
  vec3_t outZeroYawDir; 
  EdgeTransitionData outTransitionData; 
  vec3_t endPoint; 
  vec3_t startPoint; 
  vec3_t outMountCylinderGroundPos; 
  Bounds cylinder; 
  float outEdgeToCylinderForward; 
  float outEdgeToCylinderAbove; 
  char v66; 
  float outForward; 
  float outAbove; 
  char v69; 

  v56 = -2i64;
  v54 = inOutSurfFlags;
  v51 = outYawClampRad;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_SweepYawClamp");
  if ( !pml->mountState.isPreviousViewangleValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1826, ASSERT_TYPE_ASSERT, "(pml.mountState.isPreviousViewangleValid)", (const char *)&queryFormat, "pml.mountState.isPreviousViewangleValid") )
    __debugbreak();
  v8 = AngleDelta(player->ps->viewangles.v[1], pml->mountState.previousViewangles.v[1]);
  outFrac[1] = *(float *)&v8;
  _XMM10 = 0i64;
  if ( *(float *)&v8 != 0.0 )
  {
    v10 = DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_angle_deg;
    if ( !DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_angle_deg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_clamp_sweep_angle_deg") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    unsignedInt = v10->current.unsignedInt;
    v12 = DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_epsilon_deg;
    if ( !DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_epsilon_deg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_clamp_sweep_epsilon_deg") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    LODWORD(v50) = v12->current.integer;
    v48 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_LADDER_AIM|0x80);
    PM_ContextMount_GetEdgeToCylinderDistance(&edge->type, &player->weapon, player->isAlternate, &outEdgeToCylinderForward, &outEdgeToCylinderAbove);
    v66 = 0;
    BG_GetMountEdgeToEyeDistance((const ContextMountType)edge->type, &player->weapon, player->isAlternate, &outForward, &outAbove);
    v13 = DVARFLT_mount_tuning_shapecast_eye_cylinder_forward_distance_min;
    if ( !DVARFLT_mount_tuning_shapecast_eye_cylinder_forward_distance_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_eye_cylinder_forward_distance_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    _XMM0 = LODWORD(outForward);
    __asm { vmaxss  xmm1, xmm0, dword ptr [rbx+28h] }
    outForward = *(float *)&_XMM1;
    v69 = 1;
    v47 = 0;
    v16 = 0;
    LODWORD(_XMM9) = 0;
    v18 = 0;
    p_outEdgeToCylinderAbove = &outEdgeToCylinderAbove;
    _XMM15 = LODWORD(FLOAT_N1_0);
    do
    {
      v21 = DVARBOOL_killswitch_mount_eye_shapecast_clamp_enabled;
      if ( !DVARBOOL_killswitch_mount_eye_shapecast_clamp_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mount_eye_shapecast_clamp_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( !v21->current.enabled && v18 > 0 )
        break;
      PM_ContextMount_CalcMountCylinder(player, edge, *(p_outEdgeToCylinderAbove - 1), *p_outEdgeToCylinderAbove, &outMountCylinderGroundPos, &edgeToEyeForward, &cylinder);
      type = edge->type;
      if ( type == MOUNT_TYPE_TOP )
      {
        planeNormal = player->worldBasis.row2;
        if ( !PM_ContextMount_CalcTopZeroDir(player, edge, &outZeroYawDir) )
        {
          v35 = "failed zero dir calc";
LABEL_58:
          *(__m256i *)v55.normal.v = *(__m256i *)edge->normal.v;
          v44 = *(__m256i *)&edge->normalFaceIndex;
          *(__m256i *)&v55.below.z = *(__m256i *)&edge->below.z;
          *(__m256i *)&v55.normalFaceIndex = v44;
          PM_ContextMount_DebugFailedEdge(player, &v55, 0, 0, v35);
LABEL_59:
          v42 = 0;
          goto LABEL_60;
        }
        if ( !PM_ContextMount_CalcRelativeAngleInPlane(&player->worldBasis.m[2], &outZeroYawDir, player->eyeBasis.m, &outAngleRad) )
        {
          v35 = "failed player angle calc";
          goto LABEL_58;
        }
        playerAngleRad_low = LODWORD(outAngleRad);
      }
      else
      {
        if ( (unsigned int)(type - 2) > 1 )
        {
          LODWORD(outCylinderMidpointHeight) = edge->type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1921, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encountered unexpected mount type %i", outCylinderMidpointHeight) )
            __debugbreak();
          goto LABEL_59;
        }
        if ( !PM_ContextMount_CalcEdgeTransitionAngles(player, edge, &outTransitionData) )
        {
          v35 = "failed sweep angles calc";
          goto LABEL_58;
        }
        outZeroYawDir = outTransitionData.zeroAngleDir;
        planeNormal = outTransitionData.planeNormal;
        playerAngleRad_low = LODWORD(outTransitionData.playerAngleRad);
        outAngleRad = outTransitionData.playerAngleRad;
      }
      _XMM0 = (unsigned int)edge->type;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM5 = LODWORD(FLOAT_1_0);
      __asm
      {
        vblendvps xmm1, xmm5, xmm15, xmm2
        vcmpless xmm0, xmm10, xmm7
        vblendvps xmm0, xmm15, xmm5, xmm0
      }
      v30 = unsignedInt;
      *(float *)&v30 = *(float *)&unsignedInt * 0.017453292;
      if ( (float)(*(float *)&_XMM1 * *(float *)&_XMM0) <= 0.0 )
      {
        v34 = playerAngleRad_low;
        *(float *)&v34 = *(float *)&playerAngleRad_low - (float)(*(float *)&unsignedInt * 0.017453292);
        _XMM1 = v34;
        __asm { vmaxss  xmm7, xmm1, xmm3 }
      }
      else
      {
        *(float *)&v30 = *(float *)&v30 + *(float *)&playerAngleRad_low;
        _XMM1 = v30;
        __asm { vminss  xmm7, xmm1, xmm4 }
      }
      PM_ContextMount_EdgeAngleToCylinderPoint(player, edge, &planeNormal, &outZeroYawDir, *(const float *)&playerAngleRad_low, *(p_outEdgeToCylinderAbove - 1), *p_outEdgeToCylinderAbove, &startPoint);
      PM_ContextMount_EdgeAngleToCylinderPoint(player, edge, &planeNormal, &outZeroYawDir, *(const float *)&_XMM7, *(p_outEdgeToCylinderAbove - 1), *p_outEdgeToCylinderAbove, &endPoint);
      if ( PM_ContextMount_TestCylinderHit(player, player->ps->clientNum, &startPoint, &endPoint, edgeToEyeForward, v48, &cylinder, outFrac) )
      {
        if ( outFrac[0] > 0.0 )
        {
          v36 = v47;
          v47 = 1;
          v38 = _XMM7;
          *(float *)&v38 = (float)((float)(*(float *)&_XMM7 - *(float *)&playerAngleRad_low) * outFrac[0]) + *(float *)&playerAngleRad_low;
          _XMM8 = v38;
          if ( *(float *)&playerAngleRad_low == *(float *)&_XMM7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1969, ASSERT_TYPE_ASSERT, "( startAngleEdgeRad ) != ( endAngleEdgeRad )", "%s != %s\n\t%g, %g", "startAngleEdgeRad", "endAngleEdgeRad", *(float *)&playerAngleRad_low, *(float *)&_XMM7) )
            __debugbreak();
          v16 = *(float *)&_XMM7 > *(float *)&playerAngleRad_low;
          if ( v36 )
          {
            if ( *(float *)&_XMM7 <= *(float *)&playerAngleRad_low )
              __asm { vmaxss  xmm9, xmm8, xmm9 }
            else
              __asm { vminss  xmm9, xmm8, xmm9 }
          }
          else
          {
            LODWORD(_XMM9) = v38;
          }
        }
        else if ( !*((_BYTE *)p_outEdgeToCylinderAbove + 4) )
        {
          v35 = "capsule started in penetration";
          goto LABEL_58;
        }
      }
      ++v18;
      p_outEdgeToCylinderAbove += 3;
    }
    while ( (unsigned int)v18 < 2 );
    if ( !v47 )
      goto LABEL_55;
    v39 = *v54;
    v40 = v51;
    if ( v16 )
    {
      v41 = *(float *)&_XMM9 + (float)(*(float *)&v50 * -0.017453292);
      if ( (v39 & 4) == 0 || v41 < v51[1] )
      {
        *v54 = v39 | 4;
        v40[1] = v41;
        v42 = 1;
        goto LABEL_60;
      }
    }
    else
    {
      v43 = *(float *)&_XMM9 + (float)(0.017453292 * *(float *)&v50);
      if ( (v39 & 2) == 0 || v43 > *v51 )
      {
        *v54 = v39 | 2;
        *v40 = v43;
      }
    }
  }
LABEL_55:
  v42 = 1;
LABEL_60:
  Sys_ProfEndNamedEvent();
  return v42;
}

/*
==============
PM_ContextMount_TestCylinderHit
==============
*/
_BOOL8 PM_ContextMount_TestCylinderHit(const MountPlayerProperties *player, const int clientNum, const vec3_t *startPoint, const vec3_t *endPoint, const float cylinderMidpointHeight, const bool testBody, const Bounds *cylinder, float *outFrac)
{
  Physics_WorldId v11; 
  const dvar_t *v12; 
  int v13; 
  float v14; 
  double v15; 
  double v16; 
  hknpShape *ShapeCylinder; 
  float fraction; 
  const dvar_t *v19; 
  float v20; 
  const MountPlayerProperties *v21; 
  __int128 v22; 
  float v24; 
  float v26; 
  hkMemoryAllocator *v27; 
  hkMemoryAllocator *v28; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v32; 
  vec3_t start; 
  __int64 v34; 
  float v35; 
  __int64 v36; 
  float v37; 
  vec3_t end; 
  const MountPlayerProperties *v39; 
  PhysicsQuery_ShapecastHit hit; 

  v32 = -2i64;
  v39 = player;
  v11 = player->handler->GetPhysicsWorldId((BgHandler *)player->handler);
  if ( (unsigned int)v11 > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 525, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 526, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
  HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
  v12 = DVARBOOL_mount_tuning_shapecast_ignore_children;
  if ( !DVARBOOL_mount_tuning_shapecast_ignore_children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_ignore_children") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  PhysicsQuery_AddEntityChainToIgnoreList(clientNum, &ignoreBodies, 1, v12->current.enabled, 0, 1, 1);
  extendedData.startTolerance = 0.0;
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.simplifyStart = 0;
  memset(&extendedData.nonBrushShape, 0, 21);
  v13 = 8454145;
  extendedData.ignoreBodies = &ignoreBodies;
  extendedData.collisionBuffer = FLOAT_0_125;
  if ( testBody )
    v13 = 42024961;
  extendedData.contents = v13;
  if ( (0.0 != cylinder->midPoint.v[0] || 0.0 != cylinder->midPoint.v[1] || 0.0 != cylinder->midPoint.v[2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 545, ASSERT_TYPE_ASSERT, "(Vec3Compare( vec3_origin, cylinder.midPoint ))", (const char *)&queryFormat, "Vec3Compare( vec3_origin, cylinder.midPoint )") )
    __debugbreak();
  v14 = cylinder->halfSize.v[0];
  v15 = BG_ContextMount_CalcCameraMinDistToPlayerClip();
  if ( *(float *)&v15 != v14 )
  {
    v16 = BG_ContextMount_CalcCameraMinDistToPlayerClip();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 548, ASSERT_TYPE_ASSERT, "( BG_ContextMount_CalcCameraMinDistToPlayerClip() ) == ( cylinder.halfSize[0] )", "%s == %s\n\t%g, %g", "BG_ContextMount_CalcCameraMinDistToPlayerClip()", "cylinder.halfSize[0]", *(float *)&v16, v14) )
      __debugbreak();
  }
  ShapeCylinder = Physics_CreateShapeCylinder(&cylinder->midPoint, cylinder->halfSize.v[2], cylinder->halfSize.v[0], 32, 1);
  if ( !ShapeCylinder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 551, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
    __debugbreak();
  start.v[0] = (float)(cylinderMidpointHeight * worldUp_0.v[0]) + startPoint->v[0];
  start.v[1] = (float)(cylinderMidpointHeight * worldUp_0.v[1]) + startPoint->v[1];
  start.v[2] = (float)(cylinderMidpointHeight * worldUp_0.v[2]) + startPoint->v[2];
  end.v[0] = (float)(cylinderMidpointHeight * worldUp_0.v[0]) + endPoint->v[0];
  end.v[1] = (float)(cylinderMidpointHeight * worldUp_0.v[1]) + endPoint->v[1];
  end.v[2] = (float)(cylinderMidpointHeight * worldUp_0.v[2]) + endPoint->v[2];
  PhysicsQuery_ImmediateShapecastClosest(v11, ShapeCylinder, &start, &end, &quat_identity, &extendedData, &hit);
  Physics_ReleaseShape(v11, ShapeCylinder, 0);
  if ( hit.isValid )
  {
    fraction = hit.fraction;
    *outFrac = hit.fraction;
  }
  else
  {
    *outFrac = 1.0;
    fraction = FLOAT_1_0;
  }
  v19 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer == 1 )
  {
    v36 = *(__int64 *)start.v;
    v20 = cylinder->midPoint.v[2];
    v37 = (float)(v20 - cylinder->halfSize.v[2]) + start.v[2];
    v34 = *(__int64 *)start.v;
    v35 = (float)(v20 + cylinder->halfSize.v[2]) + start.v[2];
    v21 = v39;
    ((void (__fastcall *)(const BgHandler *, __int64 *, __int64 *))v39->handler->DebugCapsule)(v39->handler, &v36, &v34);
    v22 = LODWORD(end.v[0]);
    *(float *)&v22 = (float)((float)(end.v[0] - start.v[0]) * *outFrac) + start.v[0];
    _XMM6 = v22;
    v24 = (float)((float)(end.v[2] - start.v[2]) * *outFrac) + start.v[2];
    __asm { vunpcklps xmm4, xmm6, xmm5 }
    v36 = *(__int64 *)&_XMM4;
    v26 = cylinder->midPoint.v[2];
    v37 = (float)(v26 - cylinder->halfSize.v[2]) + v24;
    v34 = *(__int64 *)&_XMM4;
    v35 = (float)(v26 + cylinder->halfSize.v[2]) + v24;
    ((void (__fastcall *)(const BgHandler *, __int64 *, __int64 *))v21->handler->DebugCapsule)(v21->handler, &v36, &v34);
  }
  v27 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreBodies.m_size = 0;
  if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v27, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  ignoreBodies.m_ignoreBodies.m_data = NULL;
  ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v28 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreEntities.m_size = 0;
  if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return fraction < 1.0;
}

/*
==============
PM_ContextMount_TestRayHit
==============
*/
_BOOL8 PM_ContextMount_TestRayHit(const MountPlayerProperties *player, const vec3_t *startPoint, const vec3_t *endPoint)
{
  Physics_WorldId v6; 
  float v7; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  bool v11; 
  hkMemoryAllocator *v12; 
  hkMemoryAllocator *v13; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v17; 

  v17 = -2i64;
  v6 = player->handler->GetPhysicsWorldId((BgHandler *)player->handler);
  if ( (unsigned int)v6 > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 499, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 500, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v7 = endPoint->v[1] - startPoint->v[1];
  v8 = endPoint->v[2] - startPoint->v[2];
  v9 = fsqrt((float)((float)(v7 * v7) + (float)((float)(endPoint->v[0] - startPoint->v[0]) * (float)(endPoint->v[0] - startPoint->v[0]))) + (float)(v8 * v8));
  if ( v9 <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 503, ASSERT_TYPE_ASSERT, "( 0.001f ) < ( Vec3Distance( startPoint, endPoint ) )", "%s < %s\n\t%g, %g", "EQUAL_EPSILON", "Vec3Distance( startPoint, endPoint )", DOUBLE_0_001000000047497451, v9) )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
  HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
  v10 = DVARBOOL_mount_tuning_shapecast_ignore_children;
  if ( !DVARBOOL_mount_tuning_shapecast_ignore_children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_ignore_children") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  PhysicsQuery_AddEntityChainToIgnoreList(player->ps->clientNum, &ignoreBodies, 1, v10->current.enabled, 0, 1, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = 8388737;
  extendedData.ignoreBodies = &ignoreBodies;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InitialInsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 1;
  v11 = !PhysicsQuery_ImmediateRaycastSightCheck(v6, startPoint, endPoint, &extendedData);
  v12 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreBodies.m_size = 0;
  if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v12, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  ignoreBodies.m_ignoreBodies.m_data = NULL;
  ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v13 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreEntities.m_size = 0;
  if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v13, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v11;
}

/*
==============
PM_ContextMount_UpdateMountPivotPoint
==============
*/
char PM_ContextMount_UpdateMountPivotPoint(const MountPlayerProperties *player, const MountSurfaceProperties *mountSurface, const tmat33_t<vec3_t> *prevEyeBasis, vec3_t *outExtrapolatedPivotPoint)
{
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  ContextMountType type; 
  vec3_t *v14; 
  __int64 argType; 
  float outAbove; 
  float outForward; 
  vec3_t outEyePoint; 
  vec3_t outNormal; 
  vec3_t planePoint; 
  tmat33_t<vec3_t> eyeBasis; 
  MountSurfaceDetailedProperties inOutDetailMount; 
  vec3_t outParallel; 
  vec3_t outMountPoint; 
  MountEdgeProperties edge; 

  BG_GetMountEdgeToEyeDistance((const ContextMountType)mountSurface->type, &player->weapon, player->isAlternate, &outForward, &outAbove);
  BG_ContextMount_CalcMountPoint(player->handler, mountSurface, &outMountPoint);
  inOutDetailMount.minClampDeg.v[0] = FLOAT_N180_0;
  inOutDetailMount.minClampDeg.v[1] = FLOAT_N180_0;
  edge.isInitialized = 0;
  *(_OWORD *)inOutDetailMount.maxClampDeg.v = _xmm;
  inOutDetailMount.maxResistDeg.v[0] = 0.0;
  inOutDetailMount.maxResistDeg.v[1] = 0.0;
  EdgeId::Clear(&edge.id);
  if ( MountEdgeProperties::Initialize(&edge, player->handler, mountSurface->id, mountSurface->fraction, mountSurface->normalFaceIndex, mountSurface->type) )
  {
    EdgeId::Clear((EdgeId *)&outEyePoint);
    inOutDetailMount.mount.type = edge.type;
    inOutDetailMount.mount.id = edge.id;
    inOutDetailMount.mount.fraction = edge.fraction;
    *(_QWORD *)outNormal.v = 0i64;
    inOutDetailMount.mount.normalFaceIndex = truncate_cast<unsigned int,unsigned __int64>(edge.normalFaceIndex);
    EdgeId::Clear(&inOutDetailMount.mount.adjId);
    inOutDetailMount.mount.adjFraction = 0.0;
    inOutDetailMount.mount.adjNormalFaceIndex = 0;
    v8 = BG_ContextMount_QuantizeFloat01Byte(0.0);
    inOutDetailMount.mount.transitionFraction = *(float *)&v8;
    inOutDetailMount.mount.transitionType = MOUNT_TRANSITION_TYPE_NONE;
    inOutDetailMount.mount.packedRelYawClamp[0] = MSG_PackSignedFloat(outNormal.v[0], 6.2831855, 9u);
    inOutDetailMount.mount.packedRelYawClamp[1] = MSG_PackSignedFloat(outNormal.v[1], 6.2831855, 9u);
    inOutDetailMount.mount.flags = 0;
    if ( PM_ContextMount_CalcFinalClampAngles(player, &edge, &inOutDetailMount) )
    {
      PM_ContextMount_CalcMountEyePoint(&inOutDetailMount, player->handler, prevEyeBasis, &player->worldBasis, outForward, outAbove, &outEyePoint, &eyeBasis);
      BG_ContextMount_CalcMountVectors(player->handler, mountSurface, &outNormal, &outParallel, &outEyePoint);
      BG_ContextMount_GetMountUpVector((const ContextMountType)mountSurface->type, &eyeBasis, &outEyePoint);
      v9 = (float)((float)(outForward * eyeBasis.m[0].v[1]) + player->eyeOrigin.v[1]) + (float)(COERCE_FLOAT(LODWORD(outAbove) ^ _xmm) * outEyePoint.v[1]);
      v10 = (float)(outForward * eyeBasis.m[0].v[2]) + player->eyeOrigin.v[2];
      planePoint.v[0] = (float)((float)(outForward * eyeBasis.m[0].v[0]) + player->eyeOrigin.v[0]) + (float)(COERCE_FLOAT(LODWORD(outAbove) ^ _xmm) * outEyePoint.v[0]);
      v11 = v10 + (float)(COERCE_FLOAT(LODWORD(outAbove) ^ _xmm) * outEyePoint.v[2]);
      v12 = eyeBasis.m[1].v[1] * player->worldBasis.m[2].v[1];
      planePoint.v[2] = v11;
      planePoint.v[1] = v9;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v12 + (float)(eyeBasis.m[1].v[0] * player->worldBasis.m[2].v[0])) + (float)(eyeBasis.m[1].v[2] * player->worldBasis.m[2].v[2])) & _xmm) - 1.0) & _xmm) < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 715, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( player.worldBasis[2], prevClampedEyeBasis[1] ))", (const char *)&queryFormat, "!Vec3IsParallel( player.worldBasis[2], prevClampedEyeBasis[1] )") )
        __debugbreak();
      type = player->ps->mountState.surface.type;
      if ( type == MOUNT_TYPE_TOP )
      {
        v14 = &eyeBasis.m[1];
LABEL_14:
        IntersectLinePlane(&outMountPoint, &outParallel, &planePoint, v14, outExtrapolatedPivotPoint);
        return 1;
      }
      if ( (unsigned int)(type - 2) <= 1 )
      {
        v14 = &eyeBasis.m[2];
        goto LABEL_14;
      }
      LODWORD(argType) = player->ps->mountState.surface.type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 726, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BG_ContextMount_CalculateMountPoint() mount type %i not supported.", argType) )
        __debugbreak();
    }
  }
  return 0;
}

/*
==============
PM_ContextMount_UpdateTransition
==============
*/
void PM_ContextMount_UpdateTransition(const pml_t *pml, const MountPlayerProperties *player, MountEdgeProperties *inOutEdge, EdgeId *inOutGoalEdge, float *inOutTransitionFraction, ContextMountTransitionType *inOutTransitionType)
{
  ContextMountTransitionType v10; 
  const dvar_t *v11; 
  float integer; 
  float v13; 
  double v15; 
  unsigned int EdgeIndex; 
  EdgeId id; 
  float v18; 
  float v19; 
  __int64 v21; 
  __int64 v22; 

  v10 = *inOutTransitionType;
  if ( (unsigned int)(inOutEdge->type - 2) <= 1 )
  {
    if ( v10 == MOUNT_TRANSITION_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2339, ASSERT_TYPE_ASSERT, "( inOutTransitionType ) != ( MOUNT_TRANSITION_TYPE_NONE )", "%s != %s\n\t%i, %i", "inOutTransitionType", "MOUNT_TRANSITION_TYPE_NONE", 0, 0i64) )
      __debugbreak();
    if ( !EdgeId::IsValid(inOutGoalEdge) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2340, ASSERT_TYPE_ASSERT, "(inOutGoalEdge.IsValid())", (const char *)&queryFormat, "inOutGoalEdge.IsValid()") )
      __debugbreak();
    if ( !BG_GetMountTransitionEnabled(&player->weapon, player->isAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2341, ASSERT_TYPE_ASSERT, "(BG_GetMountTransitionEnabled( player.weapon, player.isAlternate ))", (const char *)&queryFormat, "BG_GetMountTransitionEnabled( player.weapon, player.isAlternate )") )
      __debugbreak();
    v11 = DCONST_DVARINT_mount_transition_time_ms;
    if ( !DCONST_DVARINT_mount_transition_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_time_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = (float)v11->current.integer;
    if ( integer <= 0.0 )
    {
      LODWORD(v22) = (int)integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2344, ASSERT_TYPE_ASSERT, "( 0 ) < ( transitionMs )", "%s < %s\n\t%i, %i", "0", "transitionMs", 0i64, v22) )
        __debugbreak();
    }
    v13 = (float)pml->msec / integer;
    _XMM1 = 0i64;
    v15 = I_fclamp(v13, 0.0, 1.0);
    if ( *(float *)&v15 <= 0.0 )
      return;
    if ( *inOutTransitionType == MOUNT_TRANSITION_TYPE_BACK )
    {
      _XMM1 = *(unsigned int *)inOutTransitionFraction;
      if ( *(float *)&_XMM1 == 0.0 )
      {
        EdgeIndex = EdgeId::GetEdgeIndex(&inOutEdge->id);
        if ( EdgeIndex == EdgeId::GetEdgeIndex(inOutGoalEdge) )
        {
          LODWORD(v22) = EdgeId::GetEdgeIndex(inOutGoalEdge);
          LODWORD(v21) = EdgeId::GetEdgeIndex(&inOutEdge->id);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2356, ASSERT_TYPE_ASSERT, "( inOutEdge.id.GetEdgeIndex() ) != ( inOutGoalEdge.GetEdgeIndex() )", "%s != %s\n\t%i, %i", "inOutEdge.id.GetEdgeIndex()", "inOutGoalEdge.GetEdgeIndex()", v21, v22) )
            __debugbreak();
        }
        *inOutTransitionFraction = 1.0;
        id = inOutEdge->id;
        MountEdgeProperties::TransitionToAdjacent(inOutEdge, player->handler, *inOutGoalEdge, 0);
        *inOutGoalEdge = id;
        _XMM1 = *(unsigned int *)inOutTransitionFraction;
      }
      *inOutTransitionFraction = *(float *)&_XMM1 - v13;
      if ( (float)(*(float *)&_XMM1 - v13) > 0.0 )
      {
LABEL_33:
        v19 = *inOutTransitionFraction;
        if ( *inOutTransitionFraction < 0.0 || v19 > 1.0 )
        {
          __asm { vxorpd  xmm1, xmm1, xmm1 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2382, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( inOutTransitionFraction ) && ( inOutTransitionFraction ) <= ( 1.0f )", "inOutTransitionFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v19, *(double *)&_XMM1, DOUBLE_1_0) )
            goto LABEL_36;
        }
        return;
      }
      *inOutTransitionFraction = 0.0;
      *inOutTransitionType = MOUNT_TRANSITION_TYPE_NONE;
    }
    else
    {
      if ( *inOutTransitionType != MOUNT_TRANSITION_TYPE_FORWARD )
        goto LABEL_33;
      v18 = *(float *)&v15 + *inOutTransitionFraction;
      *inOutTransitionFraction = v18;
      if ( v18 < 1.0 )
        goto LABEL_33;
      *inOutTransitionFraction = 0.0;
      *inOutTransitionType = MOUNT_TRANSITION_TYPE_NONE;
      MountEdgeProperties::TransitionToAdjacent(inOutEdge, player->handler, *inOutGoalEdge, 0);
    }
    EdgeId::Clear(inOutGoalEdge);
    goto LABEL_33;
  }
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2335, ASSERT_TYPE_ASSERT, "( inOutTransitionType ) == ( MOUNT_TRANSITION_TYPE_NONE )", "%s == %s\n\t%i, %i", "inOutTransitionType", "MOUNT_TRANSITION_TYPE_NONE", *inOutTransitionType, 0i64) )
LABEL_36:
    __debugbreak();
}

/*
==============
MountEdgeProperties::SwitchSide
==============
*/
void MountEdgeProperties::SwitchSide(MountEdgeProperties *this, const BgHandler *handler)
{
  int v4; 
  _BOOL8 v5; 
  __int64 argType; 
  int v7; 

  if ( !this->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 185, ASSERT_TYPE_ASSERT, "(this->isInitialized)", (const char *)&queryFormat, "this->isInitialized") )
    __debugbreak();
  if ( LODWORD(this->normalFaceIndex) >= 2 )
  {
    v7 = 2;
    LODWORD(argType) = this->normalFaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( this->normalFaceIndex ) < (unsigned)( 2 )", "this->normalFaceIndex doesn't index 2\n\t%i not in [0, %i)", argType, v7) )
      __debugbreak();
  }
  v4 = 0;
  v5 = this->normalFaceIndex == 0;
  if ( (unsigned int)(this->type - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 190, ASSERT_TYPE_ASSERT, "((this->type == MOUNT_TYPE_LEFT) || (this->type == MOUNT_TYPE_RIGHT))", (const char *)&queryFormat, "(this->type == MOUNT_TYPE_LEFT) || (this->type == MOUNT_TYPE_RIGHT)") )
    __debugbreak();
  LOBYTE(v4) = this->type == MOUNT_TYPE_LEFT;
  MountEdgeProperties::Initialize(this, handler, this->id, this->fraction, v5, (ContextMountType)(v4 + 2));
}

/*
==============
MountEdgeProperties::TransitionToAdjacent
==============
*/
void MountEdgeProperties::TransitionToAdjacent(MountEdgeProperties *this, const BgHandler *handler, EdgeId adjacentId, bool isPreviousEdge)
{
  bool v4; 
  bool IsDynamic; 
  unsigned int EntityIndex; 
  __int128 v9; 
  float v14; 
  double v16; 
  unsigned __int64 v18; 
  float v19; 
  unsigned __int64 i; 
  vec3_t *v21; 
  vec3_t *v22; 
  __int128 v23; 
  __int128 v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  __int128 v28; 
  unsigned __int64 v29; 
  __int128 v30; 
  __int128 v31; 
  bool v33; 
  float v34; 
  double v35; 
  float v36; 
  double v37; 
  float v38; 
  double v39; 
  EdgeId v40; 
  float v41; 
  double v42; 
  vec3_t *outParallel; 
  vec3_t *outBelow; 
  vec3_t *outOtherNormal; 
  BOOL outOtherNormala; 
  __int64 v47; 
  BOOL v48; 
  EdgeId edgeId; 
  vec3_t dir; 
  vec3_t result; 
  vec3_t outLineSegment[2]; 
  vec3_t outNormal[2]; 
  vec3_t v55[2]; 
  vec3_t v56[2]; 
  vec3_t v57[2]; 

  v4 = !this->isInitialized;
  edgeId = adjacentId;
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 122, ASSERT_TYPE_ASSERT, "(this->isInitialized)", (const char *)&queryFormat, "this->isInitialized") )
    __debugbreak();
  IsDynamic = EdgeId::GetIsDynamic(&this->id);
  if ( IsDynamic != EdgeId::GetIsDynamic(&edgeId) )
  {
    v48 = EdgeId::GetIsDynamic(&edgeId);
    outOtherNormala = EdgeId::GetIsDynamic(&this->id);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 123, ASSERT_TYPE_ASSERT, "( id.GetIsDynamic() ) == ( adjacentId.GetIsDynamic() )", "%s == %s\n\t%i, %i", "id.GetIsDynamic()", "adjacentId.GetIsDynamic()", outOtherNormala, v48) )
      __debugbreak();
  }
  EntityIndex = EdgeId::GetEntityIndex(&this->id);
  if ( EntityIndex != EdgeId::GetEntityIndex(&edgeId) )
  {
    LODWORD(v47) = EdgeId::GetEntityIndex(&edgeId);
    LODWORD(outOtherNormal) = EdgeId::GetEntityIndex(&this->id);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 124, ASSERT_TYPE_ASSERT, "( id.GetEntityIndex() ) == ( adjacentId.GetEntityIndex() )", "%s == %s\n\t%i, %i", "id.GetEntityIndex()", "adjacentId.GetEntityIndex()", outOtherNormal, v47) )
      __debugbreak();
  }
  Edge_GetLineSegment(handler, edgeId, (vec3_t (*)[2])outLineSegment);
  v9 = LODWORD(outLineSegment[1].v[1]);
  *(float *)&v9 = fsqrt((float)((float)((float)(outLineSegment[1].v[1] - outLineSegment[0].v[1]) * (float)(outLineSegment[1].v[1] - outLineSegment[0].v[1])) + (float)((float)(outLineSegment[1].v[0] - outLineSegment[0].v[0]) * (float)(outLineSegment[1].v[0] - outLineSegment[0].v[0]))) + (float)((float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]) * (float)(outLineSegment[1].v[2] - outLineSegment[0].v[2])));
  _XMM7 = v9;
  __asm
  {
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm9, xmm0
  }
  dir.v[0] = (float)(outLineSegment[1].v[0] - outLineSegment[0].v[0]) * (float)(1.0 / *(float *)&_XMM0);
  dir.v[2] = (float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]) * (float)(1.0 / *(float *)&_XMM0);
  dir.v[1] = (float)(outLineSegment[1].v[1] - outLineSegment[0].v[1]) * (float)(1.0 / *(float *)&_XMM0);
  PointOnLineClosestToPoint(&this->point, outLineSegment, &dir, &result);
  _XMM1 = LODWORD(result.v[2]);
  v14 = (float)((float)((float)(result.v[0] - outLineSegment[0].v[0]) * dir.v[0]) + (float)((float)(result.v[1] - outLineSegment[0].v[1]) * dir.v[1])) + (float)((float)(result.v[2] - outLineSegment[0].v[2]) * dir.v[2]);
  if ( *(float *)&_XMM7 <= 0.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 141, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( segmentLength )", "%s < %s\n\t%g, %g", "0.0f", "segmentLength", *(double *)&_XMM1, *(float *)&_XMM7) )
      __debugbreak();
  }
  v16 = I_fclamp(v14 / *(float *)&_XMM7, 0.0, 1.0);
  *(float *)&_XMM6 = FLOAT_3_4028235e38;
  v18 = -1i64;
  result.v[0] = (float)((float)(*(float *)&_XMM7 * *(float *)&v16) * dir.v[0]) + outLineSegment[0].v[0];
  result.v[1] = (float)((float)(*(float *)&_XMM7 * *(float *)&v16) * dir.v[1]) + outLineSegment[0].v[1];
  result.v[2] = (float)((float)(*(float *)&_XMM7 * *(float *)&v16) * dir.v[2]) + outLineSegment[0].v[2];
  v19 = *(float *)&v16;
  for ( i = 0i64; i < 2; ++i )
  {
    v21 = &v57[i];
    v22 = &outNormal[i];
    Edge_CalculateVectors(handler, edgeId, v19, i, v22, &v55[i], &v56[i], v21);
    if ( isPreviousEdge )
    {
      v24 = LODWORD(this->normal.v[1]);
      *(float *)&v24 = this->normal.v[1] * v21->v[1];
      v23 = v24;
      v25 = this->normal.v[0] * v21->v[0];
      v26 = this->normal.v[2] * v21->v[2];
    }
    else
    {
      v27 = LODWORD(v22->v[1]);
      *(float *)&v27 = v22->v[1] * this->otherNormal.v[1];
      v23 = v27;
      v25 = v22->v[0] * this->otherNormal.v[0];
      v26 = v22->v[2] * this->otherNormal.v[2];
    }
    v28 = v23;
    v29 = i;
    *(float *)&v28 = (float)(*(float *)&v23 + v25) + v26;
    v30 = v28 & (unsigned int)_xmm;
    v31 = v30;
    *(float *)&v31 = *(float *)&v30 - 1.0;
    _XMM0 = v31 & (unsigned int)_xmm;
    v33 = *(float *)&_XMM6 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v30 - 1.0) & _xmm);
    __asm { vminss  xmm6, xmm0, xmm6 }
    if ( v33 )
      v29 = v18;
    v18 = v29;
  }
  if ( (unsigned int)v29 >= 2 )
  {
    LODWORD(outBelow) = 2;
    LODWORD(outParallel) = v29;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 168, ASSERT_TYPE_ASSERT, "(unsigned)( bestFaceIndex ) < (unsigned)( ( sizeof( *array_counter( adjacentNormal ) ) + 0 ) )", "bestFaceIndex doesn't index ARRAY_COUNT( adjacentNormal )\n\t%i not in [0, %i)", outParallel, outBelow) )
      __debugbreak();
  }
  this->normalFaceIndex = v18;
  v34 = outNormal[v18].v[2];
  *(double *)this->normal.v = *(double *)outNormal[v18].v;
  *(double *)this->parallel.v = *(double *)v55[v18].v;
  v35 = *(double *)v56[v18].v;
  this->normal.v[2] = v34;
  v36 = v55[v18].v[2];
  *(double *)this->below.v = v35;
  v37 = *(double *)v57[v18].v;
  this->parallel.v[2] = v36;
  v38 = v56[v18].v[2];
  *(double *)this->otherNormal.v = v37;
  v39 = *(double *)result.v;
  this->below.v[2] = v38;
  v40 = edgeId;
  this->otherNormal.v[2] = v57[v18].v[2];
  v41 = result.v[2];
  *(double *)this->point.v = v39;
  this->point.v[2] = v41;
  this->fraction = v19;
  this->id = v40;
  v42 = Edge_CalculateOpenAngleRad(v40);
  this->openAngleRad = *(float *)&v42;
}

