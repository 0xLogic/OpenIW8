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

double __fastcall BG_ContextMount_CalcCameraMinAngleToWallRad(double edgeToEyeForward, double edgeToEyeAbove)
{
  char v14; 
  char v15; 
  double result; 
  double v26; 
  double v27; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm1
    vmovaps xmm6, xmm0
  }
  *(float *)&edgeToEyeForward = BG_ContextMount_CalcCameraMinRadiusZNear();
  _RBX = DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush;
  __asm { vmovaps xmm7, xmm0 }
  if ( !DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_camera_min_dist_to_mountbrush") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmaxss  xmm8, xmm0, xmm7
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v14 | v15 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+98h+var_58], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+98h+var_60], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2763, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( edgeToEyeForward )", "%s < %s\n\t%g, %g", "0.0f", "edgeToEyeForward", v26, v27) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vsubss  xmm0, xmm8, xmm9
    vdivss  xmm0, xmm0, xmm6; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  result = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
  *(float *)&result = asinf_0(*(float *)&result);
  return result;
}

/*
==============
BG_ContextMount_CalcCameraMinDistToMountBrush
==============
*/

float __fastcall BG_ContextMount_CalcCameraMinDistToMountBrush(double _XMM0_8)
{
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  *(float *)&_XMM0_8 = BG_ContextMount_CalcCameraMinRadiusZNear();
  _RBX = DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_camera_min_dist_to_mountbrush") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmaxss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_ContextMount_CalcCameraMinDistToPlayerClip
==============
*/
float BG_ContextMount_CalcCameraMinDistToPlayerClip()
{
  char v6; 
  char v7; 
  double v16; 
  double v17; 

  _RBX = DCONST_DVARFLT_mount_tuning_camera_min_dist_to_clip;
  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  if ( !DCONST_DVARFLT_mount_tuning_camera_min_dist_to_clip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_camera_min_dist_to_clip") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mount_tuning_znear;
  if ( !DCONST_DVARFLT_mount_tuning_znear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_znear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3fdf2945
    vcomiss xmm0, xmm6
  }
  if ( !(v6 | v7) )
  {
    _RBX = DCONST_DVARFLT_mount_tuning_znear;
    if ( !DCONST_DVARFLT_mount_tuning_znear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_znear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@3fdf2945
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+68h+var_28], xmm2
      vcvtss2sd xmm3, xmm1, xmm1
      vmovsd  [rsp+68h+var_30], xmm3
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2739, ASSERT_TYPE_ASSERT, "( BG_ContextMount_CalcCameraMinRadiusZNear() ) <= ( dvarRadius )", "%s <= %s\n\t%g, %g", "BG_ContextMount_CalcCameraMinRadiusZNear()", "dvarRadius", v16, v17) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_ContextMount_CalcCameraMinRadiusZNear
==============
*/
float BG_ContextMount_CalcCameraMinRadiusZNear()
{
  _RBX = DCONST_DVARFLT_mount_tuning_znear;
  if ( !DCONST_DVARFLT_mount_tuning_znear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_znear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3fdf2945
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_ContextMount_CalcMountPoint
==============
*/
float BG_ContextMount_CalcMountPoint(const BgHandler *handler, const MountSurfaceProperties *mount, vec3_t *outMountPoint)
{
  float4 r_outEdgePoint; 
  float4 v32; 

  __asm { vmovss  xmm2, dword ptr [rdx+0Ch]; fraction }
  _RDI = mount;
  _RBX = outMountPoint;
  Edge_CalculatePoint(handler, mount->id, *(float *)&_XMM2, &r_outEdgePoint);
  if ( EdgeId::IsValid(&_RDI->adjId) )
  {
    __asm { vmovss  xmm2, dword ptr [rdi+30h]; fraction }
    Edge_CalculatePoint(handler, _RDI->adjId, *(float *)&_XMM2, &v32);
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+1Ch]
      vmulss  xmm0, xmm4, cs:__real@40c00000
      vsubss  xmm1, xmm0, cs:__real@41700000
      vmovups xmm5, xmmword ptr [rsp+68h+var_38.v]
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm3, xmm2, cs:__real@41200000
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm0, xmm4
      vmovups xmm4, xmmword ptr [rsp+68h+r_outEdgePoint.v]
      vmulss  xmm2, xmm3, xmm1
      vshufps xmm2, xmm2, xmm2, 0
      vsubps  xmm0, xmm5, xmm4
      vmulps  xmm1, xmm2, xmm0
      vaddps  xmm3, xmm1, xmm4
      vsubps  xmm0, xmm4, xmm5
      vmulps  xmm1, xmm0, xmm0
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
      vsqrtps xmm0, xmm0
      vmovss  dword ptr [rbx], xmm3
      vextractps dword ptr [rbx+4], xmm3, 1
      vextractps dword ptr [rbx+8], xmm3, 2
    }
  }
  else
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rsp+68h+r_outEdgePoint.v]
      vmovss  dword ptr [rbx], xmm1
      vextractps dword ptr [rbx+4], xmm1, 1
      vextractps dword ptr [rbx+8], xmm1, 2
      vxorps  xmm0, xmm0, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_ContextMount_CalcMountVectors
==============
*/
void BG_ContextMount_CalcMountVectors(const BgHandler *handler, const MountSurfaceProperties *mount, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  unsigned __int64 normalFaceIndex; 
  EdgeId id; 
  int v98; 
  const float4 *v106; 
  char v128; 
  bool v184; 
  bool v200; 
  bool v215; 
  bool v236; 
  float4 *outParallela; 
  float4 *outParallelb; 
  float4 *outParallelc; 
  float4 *outParalleld; 
  float4 *outParallele; 
  float4 *outParallelf; 
  float4 *outParallelg; 
  float4 *outParallelh; 
  float4 *outParalleli; 
  float4 *v263; 
  float4 *v264; 
  float4 *v265; 
  float4 *v266; 
  float4 *v267; 
  float4 *v268; 
  float4 *v269; 
  float4 *v270; 
  float4 *v271; 
  double v272; 
  double v273; 
  double v274; 
  double v275; 
  double v276; 
  double v277; 
  double v278; 
  double v279; 
  double v280; 
  double v281; 
  double v282; 
  double v283; 
  double v284; 
  double v285; 
  double v286; 
  double v287; 
  double v288; 
  double v289; 
  double v290; 
  double v291; 
  double v292; 
  double v293; 
  double v294; 
  double v295; 
  double v296; 
  double v297; 
  double v298; 
  float4 v299; 
  float4 v300; 
  float4 outNormala; 
  float4 v302; 
  float4 v303; 
  float4 v304; 
  float4 v305; 
  float4 v306; 

  _RDI = outParallel;
  _RSI = outBelow;
  _RBX = outNormal;
  _RBP = mount;
  if ( mount->type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 313, ASSERT_TYPE_ASSERT, "(mount.type != MOUNT_TYPE_NONE)", (const char *)&queryFormat, "mount.type != MOUNT_TYPE_NONE") )
    __debugbreak();
  normalFaceIndex = _RBP->normalFaceIndex;
  __asm { vmovss  xmm2, dword ptr [rbp+0Ch]; fraction }
  id = _RBP->id;
  __asm
  {
    vmovaps [rsp+178h+var_48], xmm6
    vmovaps [rsp+178h+var_58], xmm7
    vmovaps [rsp+178h+var_68], xmm8
    vmovaps [rsp+178h+var_78], xmm9
    vmovaps [rsp+178h+var_88], xmm10
  }
  Edge_CalculateVectors(handler, id, *(float *)&_XMM2, normalFaceIndex, &outNormala, &v302, &v303);
  if ( !EdgeId::IsValid(&_RBP->adjId) )
  {
    __asm
    {
      vmovups xmm4, xmmword ptr [rsp+178h+outNormal.v]
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm8, cs:__real@3b03126f
      vshufps xmm3, xmm4, xmm4, 55h ; 'U'
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vshufps xmm5, xmm4, xmm4, 0AAh ; 'ª'
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsubss  xmm0, xmm1, xmm6
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, xmm8
      vmovss  dword ptr [rbx], xmm4
      vmovss  dword ptr [rbx+4], xmm3
      vmovss  dword ptr [rbx+8], xmm5
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+178h+var_138], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+178h+var_140], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+178h+var_148], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+178h+outParallel], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 322, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal ) )", "(%g, %g, %g) len %g", *(double *)&outParallela, *(double *)&v263, v272, v281) )
      __debugbreak();
    __asm
    {
      vmovups xmm4, xmmword ptr [rsp+178h+var_E8.v]
      vshufps xmm3, xmm4, xmm4, 55h ; 'U'
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vshufps xmm5, xmm4, xmm4, 0AAh ; 'ª'
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsubss  xmm0, xmm1, xmm6
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, xmm8
      vmovss  dword ptr [rdi], xmm4
      vmovss  dword ptr [rdi+4], xmm3
      vmovss  dword ptr [rdi+8], xmm5
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+178h+var_138], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+178h+var_140], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+178h+var_148], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+178h+outParallel], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 324, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outParallel ) )", "(%g, %g, %g) len %g", *(double *)&outParallelb, *(double *)&v264, v273, v282) )
      __debugbreak();
    __asm
    {
      vmovups xmm4, xmmword ptr [rsp+178h+var_D8.v]
      vshufps xmm3, xmm4, xmm4, 55h ; 'U'
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vshufps xmm5, xmm4, xmm4, 0AAh ; 'ª'
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsubss  xmm0, xmm1, xmm6
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, xmm8
      vmovss  dword ptr [rsi], xmm4
      vmovss  dword ptr [rsi+4], xmm3
      vmovss  dword ptr [rsi+8], xmm5
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+178h+var_138], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+178h+var_140], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+178h+var_148], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+178h+outParallel], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 326, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outBelow ) )", "(%g, %g, %g) len %g", *(double *)&outParallelc, *(double *)&v265, v274, v283) )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm8, dword ptr [rdi+8]
      vmovss  xmm5, dword ptr [rbx+4]
      vmovss  xmm6, dword ptr [rbx]
      vmovss  xmm9, dword ptr [rbx+8]
      vmovss  xmm10, cs:__real@3a83126f
      vmulss  xmm1, xmm4, xmm6
      vmulss  xmm0, xmm5, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, xmm8
      vaddss  xmm1, xmm2, xmm1
      vandps  xmm0, xmm1, xmm7
      vcomiss xmm0, xmm10
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+178h+var_120], xmm0
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+178h+var_128], xmm1
      vmovsd  [rsp+178h+var_130], xmm2
      vmovsd  [rsp+178h+var_138], xmm3
      vcvtss2sd xmm4, xmm9, xmm9
      vmovsd  [rsp+178h+var_140], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+178h+var_148], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+178h+outParallel], xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 327, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outParallel ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", *(double *)&outParalleld, *(double *)&v266, v275, v284, v290, v293, v296) )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+4]
      vmovss  xmm5, dword ptr [rbx+4]
      vmovss  xmm6, dword ptr [rbx]
      vmovss  xmm4, dword ptr [rsi]
      vmovss  xmm8, dword ptr [rsi+8]
      vmovss  xmm9, dword ptr [rbx+8]
      vmulss  xmm1, xmm4, xmm6
      vmulss  xmm0, xmm3, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm9
      vaddss  xmm1, xmm2, xmm1
      vandps  xmm0, xmm1, xmm7
      vcomiss xmm0, xmm10
    }
    v98 = 328;
    goto LABEL_30;
  }
  __asm { vmovss  xmm2, dword ptr [rbp+30h]; fraction }
  Edge_CalculateVectors(handler, _RBP->adjId, *(float *)&_XMM2, _RBP->adjNormalFaceIndex, &v304, &v306, &v305);
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+178h+outNormal.v]
    vmovups xmm7, xmmword ptr [rsp+178h+var_C8.v]
    vmulps  xmm0, xmm6, xmm7
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  *(double *)&_XMM0 = j___vdecl_acosf4();
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0D2h ; 'Ò'
    vshufps xmm2, xmm6, xmm6, 0C9h ; 'É'
    vmulps  xmm4, xmm2, xmm1
    vshufps xmm2, xmm7, xmm7, 0C9h ; 'É'
    vmovups xmm7, xmmword ptr [rsp+178h+var_E8.v]
    vshufps xmm3, xmm6, xmm6, 0D2h ; 'Ò'
    vmulps  xmm1, xmm3, xmm2
    vsubps  xmm4, xmm4, xmm1
    vmulps  xmm2, xmm4, xmm7
    vinsertps xmm1, xmm2, xmm2, 8
    vhaddps xmm3, xmm1, xmm1
    vmovups xmm5, xmm0
    vhaddps xmm2, xmm3, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  if ( v128 )
    __asm { vsubps  xmm5, xmm0, xmm5 }
  __asm
  {
    vbroadcastss xmm0, dword ptr [rbp+1Ch]
    vmulps  xmm2, xmm0, xmm5
    vmulps  xmm0, xmm7, xmm7
    vinsertps xmm1, xmm0, xmm0, 8
    vmulps  xmm0, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vhaddps xmm6, xmm1, xmm1
  }
  Float4SinCos(v106, &v299, &v300);
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+178h+outNormal.v]
    vmovss  xmm9, cs:__real@3b03126f
    vhaddps xmm0, xmm6, xmm6
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm3, xmm2, [rsp+178h+var_118]
    vblendps xmm0, xmm3, [rsp+178h+var_108], 8
    vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm7, xmm0, xmm0, 0FFh
    vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm7, xmm4
    vaddps  xmm5, xmm0, xmm5
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm10, xmm1, xmm5
    vmovups xmm5, xmmword ptr [rsp+178h+var_D8.v]
    vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm7, xmm4
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddps  xmm5, xmm0, xmm5
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vmovss  xmm8, cs:__real@3f800000
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm6, xmm1, xmm5
    vshufps xmm3, xmm10, xmm10, 55h ; 'U'
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vshufps xmm4, xmm10, xmm10, 0AAh ; 'ª'
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm5, xmm2, xmm1
    vsubss  xmm0, xmm5, xmm8
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm9
    vmovss  dword ptr [rbx], xmm10
    vmovss  dword ptr [rbx+4], xmm3
    vmovss  dword ptr [rbx+8], xmm4
  }
  if ( !v128 )
  {
    __asm
    {
      vsqrtss xmm0, xmm5, xmm5
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+178h+var_138], xmm1
      vcvtss2sd xmm2, xmm4, xmm4
      vmovsd  [rsp+178h+var_140], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+178h+var_148], xmm3
      vcvtss2sd xmm0, xmm10, xmm10
      vmovsd  [rsp+178h+outParallel], xmm0
    }
    v184 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 361, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal ) )", "(%g, %g, %g) len %g", *(double *)&outParallele, *(double *)&v267, v276, v285);
    v128 = 0;
    if ( v184 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+178h+var_E8.v]
    vshufps xmm3, xmm4, xmm4, 55h ; 'U'
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vshufps xmm5, xmm4, xmm4, 0AAh ; 'ª'
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm8
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm9
    vmovss  dword ptr [rdi], xmm4
    vmovss  dword ptr [rdi+4], xmm3
    vmovss  dword ptr [rdi+8], xmm5
  }
  if ( !v128 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+178h+var_138], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+178h+var_140], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+178h+var_148], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+178h+outParallel], xmm0
    }
    v200 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 363, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outParallel ) )", "(%g, %g, %g) len %g", *(double *)&outParallelf, *(double *)&v268, v277, v286);
    v128 = 0;
    if ( v200 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm3, xmm6, xmm6, 55h ; 'U'
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vshufps xmm4, xmm6, xmm6, 0AAh ; 'ª'
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm5, xmm2, xmm1
    vsubss  xmm0, xmm5, xmm8
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm9
    vmovss  dword ptr [rsi], xmm6
    vmovss  dword ptr [rsi+4], xmm3
    vmovss  dword ptr [rsi+8], xmm4
  }
  if ( !v128 )
  {
    __asm
    {
      vsqrtss xmm0, xmm5, xmm5
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+178h+var_138], xmm1
      vcvtss2sd xmm2, xmm4, xmm4
      vmovsd  [rsp+178h+var_140], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+178h+var_148], xmm3
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+178h+outParallel], xmm0
    }
    v215 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 365, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outBelow ) )", "(%g, %g, %g) len %g", *(double *)&outParallelg, *(double *)&v269, v278, v287);
    v128 = 0;
    if ( v215 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rdi+8]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+8]
    vmovss  xmm10, cs:__real@3a83126f
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm8
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vcomiss xmm0, xmm10
  }
  if ( !v128 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+178h+var_120], xmm0
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+178h+var_128], xmm1
      vmovsd  [rsp+178h+var_130], xmm2
      vmovsd  [rsp+178h+var_138], xmm3
      vcvtss2sd xmm4, xmm9, xmm9
      vmovsd  [rsp+178h+var_140], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+178h+var_148], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+178h+outParallel], xmm6
    }
    v236 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 366, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outParallel ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", *(double *)&outParallelh, *(double *)&v270, v279, v288, v291, v294, v297);
    v128 = 0;
    if ( v236 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm8, dword ptr [rsi+8]
    vmovss  xmm9, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm9
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vcomiss xmm0, xmm10
  }
  if ( !v128 )
  {
    v98 = 367;
LABEL_30:
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+178h+var_120], xmm0
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+178h+var_128], xmm1
      vmovsd  [rsp+178h+var_130], xmm2
      vmovsd  [rsp+178h+var_138], xmm3
      vcvtss2sd xmm4, xmm9, xmm9
      vmovsd  [rsp+178h+var_140], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+178h+var_148], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+178h+outParallel], xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", v98, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outBelow ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", *(double *)&outParalleli, *(double *)&v271, v280, v289, v292, v295, v298) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm10, [rsp+178h+var_88]
    vmovaps xmm9, [rsp+178h+var_78]
    vmovaps xmm8, [rsp+178h+var_68]
    vmovaps xmm7, [rsp+178h+var_58]
    vmovaps xmm6, [rsp+178h+var_48]
  }
}

/*
==============
BG_ContextMount_GetMountUpVector
==============
*/
void BG_ContextMount_GetMountUpVector(const ContextMountType mountType, const tmat33_t<vec3_t> *eyeBasis, vec3_t *outMountUpDir)
{
  bool v5; 
  bool v6; 
  float v8; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 

  _RBX = outMountUpDir;
  _RDI = eyeBasis;
  v5 = mountType == MOUNT_TYPE_NONE;
  if ( mountType == MOUNT_TYPE_TOP )
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi+18h]
      vmovsd  qword ptr [rbx], xmm0
    }
    v8 = _RDI->m[2].v[2];
LABEL_7:
    _RBX->v[2] = v8;
    goto LABEL_8;
  }
  v5 = mountType == MOUNT_TYPE_TOP;
  if ( mountType == MOUNT_TYPE_LEFT )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rdx+0Ch]
      vmovsd  qword ptr [rbx], xmm0
    }
    v8 = eyeBasis->m[1].v[2];
    goto LABEL_7;
  }
  v5 = mountType == MOUNT_TYPE_LEFT;
  if ( mountType != MOUNT_TYPE_RIGHT )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 211, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BG_ContextMount_GetMountUpVector(): Unsupported mount type %i.", mountType);
    v5 = 0;
    if ( v6 )
      __debugbreak();
    goto LABEL_6;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, dword ptr [rdx+10h]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm0, dword ptr [rdx+14h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rbx+8], xmm1
  }
LABEL_8:
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v5 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+58h+var_18], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+58h+var_20], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+58h+var_28], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+58h+var_30], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 216, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outMountUpDir ) )", "(%g, %g, %g) len %g", v32, v33, v34, v35) )
      __debugbreak();
  }
}

/*
==============
BG_ContextMount_Quantize
==============
*/

float __fastcall BG_ContextMount_Quantize(double value, double quantum)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps xmm6, xmm1
    vcvtss2sd xmm1, xmm6, xmm1
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmm7, xmm0
    vmulss  xmm0, xmm6, cs:__real@3f000000
    vaddss  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vdivss  xmm2, xmm1, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvttss2si eax, xmm2
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
MountEdgeProperties::Initialize
==============
*/

bool __fastcall MountEdgeProperties::Initialize(MountEdgeProperties *this, const BgHandler *handler, EdgeId argId, double argFraction, const MountPlayerProperties *argPlayer)
{
  MountEdgeProperties *outNormal; 
  char v17; 
  char v18; 
  int v19; 
  bool result; 
  char v32; 

  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  this->id = argId;
  outNormal = this;
  __asm
  {
    vmovss  dword ptr [rcx+54h], xmm3
    vmovaps xmm2, xmm3; fraction
    vmovaps xmm6, xmm3
  }
  Edge_CalculatePoint(handler, argId, *(float *)&_XMM2, &this->point);
  *(double *)&_XMM0 = Edge_CalculateOpenAngleRad(argId);
  _R14 = (char *)&outNormal->below;
  __asm
  {
    vmovaps xmm2, xmm6; fraction
    vmovss  dword ptr [r15+3Ch], xmm0
  }
  outNormal->normalFaceIndex = Edge_CalculateVectors(handler, argId, *(float *)&_XMM2, &argPlayer->worldBasis.m[2], &argPlayer->eyeBasis, &outNormal->normal, &outNormal->parallel, &outNormal->below, &outNormal->otherNormal);
  *(double *)&_XMM0 = AngleBetween(&argPlayer->worldBasis.m[2], &outNormal->parallel);
  _RBX = DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope;
  __asm
  {
    vsubss  xmm6, xmm0, cs:__real@42b40000
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( !DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_top_mount_max_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v17 | v18 )
  {
    v19 = 1;
  }
  else
  {
    _RBX = DCONST_DVARFLT_mount_tuning_side_mount_min_slope;
    if ( !DCONST_DVARFLT_mount_tuning_side_mount_min_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_mount_min_slope") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( v17 )
    {
      v19 = 0;
    }
    else
    {
      if ( _R14 == &v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [r14+4]
        vmulss  xmm3, xmm0, dword ptr [r13+28h]
        vmovss  xmm1, dword ptr [r14]
        vmulss  xmm2, xmm1, dword ptr [r13+24h]
        vmovss  xmm0, dword ptr [r14+8]
        vmulss  xmm1, xmm0, dword ptr [r13+2Ch]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm2, xmm0
      }
      v19 = 3;
    }
  }
  outNormal->type = v19;
  result = v19 != 0;
  outNormal->isInitialized = result;
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  return result;
}

/*
==============
MountEdgeProperties::Initialize
==============
*/

bool __fastcall MountEdgeProperties::Initialize(MountEdgeProperties *this, const BgHandler *handler, EdgeId argId, double argFraction, unsigned __int64 argNormalFaceIndex, ContextMountType argType)
{
  MountEdgeProperties *outNormal; 
  bool result; 

  this->normalFaceIndex = argNormalFaceIndex;
  this->id = argId;
  outNormal = this;
  __asm { vmovss  dword ptr [rcx+54h], xmm3 }
  this->type = argType;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm2, xmm3; fraction
    vmovaps xmm6, xmm3
  }
  Edge_CalculatePoint(handler, argId, *(float *)&_XMM2, &this->point);
  *(double *)&_XMM0 = Edge_CalculateOpenAngleRad(argId);
  __asm
  {
    vmovaps xmm2, xmm6; fraction
    vmovss  dword ptr [rbp+3Ch], xmm0
  }
  Edge_CalculateVectors(handler, argId, *(float *)&_XMM2, argNormalFaceIndex, &outNormal->normal, &outNormal->parallel, &outNormal->below, &outNormal->otherNormal);
  result = 1;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  outNormal->isInitialized = 1;
  return result;
}

/*
==============
PM_ContextMount_BuildCandidatesFromEdgeId
==============
*/

void __fastcall PM_ContextMount_BuildCandidatesFromEdgeId(const MountPlayerProperties *player, const EdgeId *initialEdgeId, double fraction, const int edgeScoreOrdinal, EdgePropertyTuple *outEdgeProperties, int *outCount)
{
  const EdgeId *v10; 
  ContextMountType type; 
  const dvar_t *v32; 
  unsigned int v34; 
  ContextMountType v35; 
  int v36; 
  ContextMountTransitionType v37; 
  const dvar_t *v49; 
  const BgHandler *handler; 
  _BOOL8 v52; 
  EdgeId id; 
  EdgePropertyTuple *v58; 
  vec3_t *outClampedEyeForward; 
  vec3_t *outClampedEyeForwarda; 
  vec3_t *outBelow; 
  vec3_t *outOtherNormal; 
  ntl::random_access_iterator_tag v69; 
  int v70; 
  ContextMountTransitionType inOutTransType; 
  ContextMountType v72; 
  EdgeId outAdjacentEdgeId; 
  const EdgeId *v74; 
  __int64 v75; 
  EdgePropertyTuple v76; 
  vec3_t v77; 
  MountEdgeProperties edge; 
  MountEdgeProperties v79; 
  __int64 v80; 

  v75 = -2i64;
  __asm
  {
    vmovaps [rsp+230h+var_50], xmm6
    vmovaps xmm6, xmm2
  }
  v10 = initialEdgeId;
  v74 = initialEdgeId;
  _R12 = outEdgeProperties;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_BuildCandidatesFromEdgeId");
  if ( !outEdgeProperties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2181, ASSERT_TYPE_ASSERT, "( outEdgeProperties ) != ( nullptr )", "%s != %s\n\t%p, %p", "outEdgeProperties", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2182, ASSERT_TYPE_ASSERT, "( outCount ) != ( nullptr )", "%s != %s\n\t%p, %p", "outCount", "nullptr", NULL, NULL) )
    __debugbreak();
  *outCount = 0;
  edge.isInitialized = 0;
  EdgeId::Clear(&edge.id);
  __asm { vmovaps xmm3, xmm6; argFraction }
  if ( MountEdgeProperties::Initialize(&edge, player->handler, *v10, *(float *)&_XMM3, player) )
  {
    type = edge.type;
    v72 = edge.type;
    if ( !PM_ContextMount_IsValidEdge_Set(player, &edge, edgeScoreOrdinal, 0) )
      goto LABEL_57;
    v70 = 0;
    while ( 1 )
    {
      if ( edge.type >= (unsigned int)COUNT_MOUNT_TYPE )
      {
        LODWORD(outBelow) = 4;
        LODWORD(outClampedEyeForward) = edge.type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2207, ASSERT_TYPE_ASSERT, "(unsigned)( initialEdge.type ) < (unsigned)( COUNT_MOUNT_TYPE )", "initialEdge.type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", outClampedEyeForward, outBelow) )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+130h+edge.normal]
        vmovups ymmword ptr [rbp+130h+var_D0.normal], ymm0
        vmovups ymm1, ymmword ptr [rbp+130h+edge.below+8]
        vmovups ymmword ptr [rbp+130h+var_D0.below+8], ymm1
        vmovups ymm0, ymmword ptr [rbp+40h]
        vmovups ymmword ptr [rbp+130h+var_D0.normalFaceIndex], ymm0
      }
      inOutTransType = MOUNT_TRANSITION_TYPE_NONE;
      if ( PM_ContextMount_IsValidEdge_Preliminary(player, &v79, 1, edgeScoreOrdinal, 0, &v77) )
      {
        if ( (unsigned int)*outCount >= 6 )
        {
          LODWORD(outBelow) = 6;
          LODWORD(outClampedEyeForwarda) = *outCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2215, ASSERT_TYPE_ASSERT, "(unsigned)( *outCount ) < (unsigned)( (6) )", "*outCount doesn't index MAX_EDGE_ADJACENT_CANDIDATES\n\t%i not in [0, %i)", outClampedEyeForwarda, outBelow) )
            __debugbreak();
        }
        _RCX = 104i64 * *outCount;
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+130h+var_D0.normal]
          vmovups ymmword ptr [rcx+r12], ymm0
          vmovups ymm1, ymmword ptr [rbp+130h+var_D0.below+8]
          vmovups ymmword ptr [rcx+r12+20h], ymm1
          vmovups ymm0, ymmword ptr [rbp+130h+var_D0.normalFaceIndex]
          vmovups ymmword ptr [rcx+r12+40h], ymm0
          vmovss  xmm0, dword ptr [rbp+130h+var_140+4]
          vmulss  xmm3, xmm0, dword ptr [r15+1Ch]
          vmovss  xmm1, dword ptr [rbp+130h+var_140]
          vmulss  xmm2, xmm1, dword ptr [r15+18h]
          vaddss  xmm4, xmm3, xmm2
          vmovss  xmm0, dword ptr [rbp+130h+var_140+8]
          vmulss  xmm1, xmm0, dword ptr [r15+20h]
          vaddss  xmm6, xmm4, xmm1
        }
        if ( type != v79.type )
        {
          v32 = DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement;
          if ( !DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_switch_min_dot_improvement") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v32);
          __asm { vsubss  xmm6, xmm6, dword ptr [rbx+28h] }
          v10 = v74;
        }
        _RCX = 104i64 * *outCount;
        __asm { vmovss  dword ptr [rcx+r12+60h], xmm6 }
        outEdgeProperties[(*outCount)++].recurseCount = 0;
        v34 = 1;
        v35 = v79.type;
        if ( v79.type != MOUNT_TYPE_TOP )
          v34 = 3;
        v36 = 1;
        if ( v34 <= 1 )
          goto LABEL_44;
        do
        {
          EdgeId::Clear(&outAdjacentEdgeId);
          if ( !PM_ContextMount_EmitAdjacentEdgeForViewangles(player, &v79, edgeScoreOrdinal, v36, &inOutTransType, &outAdjacentEdgeId) || !EdgeId::IsValid(&outAdjacentEdgeId) || outAdjacentEdgeId == *v10 )
            break;
          v37 = inOutTransType;
          if ( inOutTransType == MOUNT_TRANSITION_TYPE_NONE )
          {
            LODWORD(outOtherNormal) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2243, ASSERT_TYPE_ASSERT, "( transType ) != ( MOUNT_TRANSITION_TYPE_NONE )", "%s != %s\n\t%i, %i", "transType", "MOUNT_TRANSITION_TYPE_NONE", outOtherNormal, 0i64) )
              __debugbreak();
          }
          MountEdgeProperties::TransitionToAdjacent(&v79, player->handler, outAdjacentEdgeId, v37 != MOUNT_TRANSITION_TYPE_FORWARD);
          if ( !PM_ContextMount_IsValidEdge_Preliminary(player, &v79, 1, edgeScoreOrdinal, 0, &v77) || !PM_ContextMount_IsValidEdge_Adjacency(player, &v79, edgeScoreOrdinal, v36) )
            break;
          if ( (unsigned int)*outCount >= 6 )
          {
            LODWORD(outBelow) = 6;
            LODWORD(outClampedEyeForwarda) = *outCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2259, ASSERT_TYPE_ASSERT, "(unsigned)( *outCount ) < (unsigned)( (6) )", "*outCount doesn't index MAX_EDGE_ADJACENT_CANDIDATES\n\t%i not in [0, %i)", outClampedEyeForwarda, outBelow) )
              __debugbreak();
          }
          _RCX = 104i64 * *outCount;
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+130h+var_D0.normal]
            vmovups ymmword ptr [rcx+r12], ymm0
            vmovups ymm1, ymmword ptr [rbp+130h+var_D0.below+8]
            vmovups ymmword ptr [rcx+r12+20h], ymm1
            vmovups ymm0, ymmword ptr [rbp+130h+var_D0.normalFaceIndex]
            vmovups ymmword ptr [rcx+r12+40h], ymm0
            vmovss  xmm1, dword ptr [rbp+130h+var_140+4]
            vmulss  xmm3, xmm1, dword ptr [r15+1Ch]
            vmovss  xmm0, dword ptr [rbp+130h+var_140]
            vmulss  xmm2, xmm0, dword ptr [r15+18h]
            vaddss  xmm4, xmm3, xmm2
            vmovss  xmm1, dword ptr [rbp+130h+var_140+8]
            vmulss  xmm0, xmm1, dword ptr [r15+20h]
            vaddss  xmm6, xmm4, xmm0
          }
          if ( v72 != v79.type )
          {
            v49 = DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement;
            if ( !DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_switch_min_dot_improvement") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v49);
            __asm { vsubss  xmm6, xmm6, dword ptr [rbx+28h] }
          }
          _RCX = 104i64 * *outCount;
          __asm { vmovss  dword ptr [rcx+r12+60h], xmm6 }
          outEdgeProperties[(*outCount)++].recurseCount = v36++;
          v10 = v74;
        }
        while ( v36 < (int)v34 );
      }
      v35 = v79.type;
LABEL_44:
      if ( v35 != MOUNT_TYPE_TOP && v70 <= 0 )
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
        v52 = edge.normalFaceIndex == 0;
        if ( (unsigned int)(edge.type - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 190, ASSERT_TYPE_ASSERT, "((this->type == MOUNT_TYPE_LEFT) || (this->type == MOUNT_TYPE_RIGHT))", (const char *)&queryFormat, "(this->type == MOUNT_TYPE_LEFT) || (this->type == MOUNT_TYPE_RIGHT)") )
          __debugbreak();
        __asm { vmovss  xmm6, [rbp+130h+edge.fraction] }
        id = edge.id;
        edge.normalFaceIndex = v52;
        edge.type = (edge.type == MOUNT_TYPE_LEFT) + 2;
        __asm { vmovaps xmm2, xmm6; fraction }
        Edge_CalculatePoint(handler, edge.id, *(float *)&_XMM2, &edge.point);
        *(double *)&_XMM0 = Edge_CalculateOpenAngleRad(id);
        __asm
        {
          vmovss  [rbp+130h+edge.openAngleRad], xmm0
          vmovaps xmm2, xmm6; fraction
        }
        Edge_CalculateVectors(handler, id, *(float *)&_XMM2, v52, &edge.normal, &edge.parallel, &edge.below, &edge.otherNormal);
        edge.isInitialized = 1;
        ++v70;
        v10 = v74;
        type = v72;
        if ( v70 < 2 )
          continue;
      }
      v79.isInitialized = 0;
      EdgeId::Clear(&v79.id);
      __asm { vmovss  xmm2, cs:__real@ff7fffff }
      HIDWORD(v80) = -1;
      v58 = &outEdgeProperties[*outCount];
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+130h+var_D0.normal]
        vmovups [rbp+130h+var_1B0], ymm0
        vmovups ymm1, ymmword ptr [rbp+130h+var_D0.below+8]
        vmovups [rbp+130h+var_190], ymm1
        vmovups ymm0, ymmword ptr [rbp+130h+var_D0.normalFaceIndex]
        vmovups [rbp+130h+var_170], ymm0
        vmovsd  xmm1, qword ptr [rbp+0C0h]
        vmovss  xmm1, xmm1, xmm2
        vmovsd  qword ptr [rbp+0C0h], xmm1
        vmovsd  [rbp+130h+var_150], xmm1
      }
      ntl::sort<EdgePropertyTuple *,EdgePropertyTuple>(outEdgeProperties, v58, &v76, v69);
      goto LABEL_57;
    }
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+130h+edge.normal]
    vmovups ymmword ptr [rbp+130h+var_D0.normal], ymm0
    vmovups ymm1, ymmword ptr [rbp+130h+edge.below+8]
    vmovups ymmword ptr [rbp+130h+var_D0.below+8], ymm1
    vmovups ymm0, ymmword ptr [rbp+40h]
    vmovups ymmword ptr [rbp+130h+var_D0.normalFaceIndex], ymm0
  }
  PM_ContextMount_DebugFailedEdge(player, &v79, edgeScoreOrdinal, 0, "no type");
LABEL_57:
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+230h+var_50] }
}

/*
==============
PM_ContextMount_BuildClipPlanes
==============
*/
void PM_ContextMount_BuildClipPlanes(const MountPlayerProperties *player, EdgeOctreeQueryShape *queryShape)
{
  const dvar_t *v6; 
  const dvar_t *v31; 
  const dvar_t *v61; 
  vec3_t falseClipPlaneNormals; 
  vec3_t falseClipPlanePoints; 
  vec3_t trueClipPlaneNormals; 
  vec3_t trueClipPlanePoints; 
  char v84; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovss  xmm0, dword ptr [rcx+54h]
  }
  v6 = DCONST_DVARMPFLT_mount_side_min_height;
  _RDI = player;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+58h]
    vmovss  dword ptr [rbp+57h+var_80], xmm0
    vmovss  xmm0, dword ptr [rcx+5Ch]
    vmovss  dword ptr [rbp+57h+var_80+8], xmm0
    vmovss  dword ptr [rbp+57h+var_80+4], xmm1
  }
  if ( !DCONST_DVARMPFLT_mount_side_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm5, dword ptr [rdi+54h]
    vmovss  xmm4, dword ptr [rdi+58h]
    vmovss  xmm2, dword ptr [rdi+5Ch]
    vmovss  xmm7, cs:__real@3dcccccd
    vaddss  xmm3, xmm7, dword ptr [rsi+28h]
  }
  _RSI = DCONST_DVARMPFLT_mount_side_max_height;
  __asm
  {
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rbp+57h+trueClipPlanePoints], xmm1
    vmulss  xmm0, xmm3, xmm4
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbp+57h+trueClipPlanePoints+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vxorps  xmm0, xmm5, xmm6
    vmovss  [rbp+57h+var_74], xmm0
    vmovss  dword ptr [rbp+57h+trueClipPlanePoints+8], xmm1
    vxorps  xmm0, xmm2, xmm6
    vxorps  xmm1, xmm4, xmm6
    vmovss  [rbp+57h+var_6C], xmm0
    vmovss  [rbp+57h+var_70], xmm1
  }
  if ( !DCONST_DVARMPFLT_mount_side_max_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_max_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovss  xmm5, dword ptr [rdi+54h]
    vmovss  xmm3, dword ptr [rdi+58h]
    vmovss  xmm2, dword ptr [rdi+5Ch]
  }
  v31 = DCONST_DVARMPFLT_mount_top_min_height;
  __asm
  {
    vsubss  xmm4, xmm0, xmm7
    vmulss  xmm1, xmm4, xmm5
    vaddss  xmm0, xmm1, dword ptr [rdi]
    vmulss  xmm1, xmm4, xmm3
    vmovss  [rbp+57h+var_5C], xmm0
    vaddss  xmm0, xmm1, dword ptr [rdi+4]
    vmulss  xmm1, xmm4, xmm2
    vmovss  [rbp+57h+var_58], xmm0
    vaddss  xmm0, xmm1, dword ptr [rdi+8]
    vmovss  [rbp+57h+var_54], xmm0
    vmovss  dword ptr [rbp+57h+var_B0], xmm5
    vmovss  dword ptr [rbp+57h+var_B0+4], xmm3
    vmovss  dword ptr [rbp+57h+var_B0+8], xmm2
  }
  if ( !DCONST_DVARMPFLT_mount_top_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_min_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  __asm
  {
    vaddss  xmm3, xmm7, dword ptr [rsi+28h]
    vmovss  xmm5, dword ptr [rdi+54h]
    vmovss  xmm4, dword ptr [rdi+58h]
    vmovss  xmm2, dword ptr [rdi+5Ch]
  }
  _RSI = DCONST_DVARMPFLT_mount_top_max_height;
  __asm
  {
    vmulss  xmm1, xmm3, xmm5
    vaddss  xmm0, xmm1, dword ptr [rdi]
    vmovss  dword ptr [rbp+57h+var_98], xmm0
    vmulss  xmm1, xmm3, xmm4
    vaddss  xmm0, xmm1, dword ptr [rdi+4]
    vmulss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rbp+57h+var_98+4], xmm0
    vaddss  xmm0, xmm1, dword ptr [rdi+8]
    vxorps  xmm1, xmm5, xmm6
    vmovss  [rbp+57h+var_A4], xmm1
    vmovss  dword ptr [rbp+57h+var_98+8], xmm0
    vxorps  xmm1, xmm2, xmm6
    vxorps  xmm0, xmm4, xmm6
    vmovss  [rbp+57h+var_9C], xmm1
    vmovss  [rbp+57h+var_A0], xmm0
  }
  if ( !DCONST_DVARMPFLT_mount_top_max_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_max_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vsubss  xmm3, xmm0, xmm7
    vmulss  xmm1, xmm3, dword ptr [rdi+54h]
    vaddss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm0, xmm3, dword ptr [rdi+58h]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm3, dword ptr [rdi+5Ch]
    vmovss  [rbp+57h+var_88], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  [rbp+57h+var_84], xmm1
    vmovss  [rbp+57h+var_8C], xmm2
  }
  EdgeOctreeQueryShape::SetUserClipPlanes(queryShape, PM_ContextMount_IsVerticalEdge, &_RDI->worldBasis.m[2], 2ui64, &trueClipPlanePoints, &trueClipPlaneNormals, 2ui64, &falseClipPlanePoints, &falseClipPlaneNormals);
  v61 = DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope;
  if ( !DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_top_mount_max_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v61);
  __asm
  {
    vmovss  xmm0, cs:__real@42b40000
    vsubss  xmm1, xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm1, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vmovss  cs:s_minVerticalDot, xmm0 }
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
PM_ContextMount_CalcAdjacentEdges
==============
*/
void PM_ContextMount_CalcAdjacentEdges(const BgHandler *handler, const MountEdgeProperties *edge, EdgeId *outPrevEdge, EdgeId *outNextEdge)
{
  ContextMountType type; 
  __int64 v16; 
  __int64 v18; 
  edgeFlags_t v20; 
  unsigned __int64 AdjacentEdges; 
  EdgeId *p_otherId; 
  unsigned int EdgeIndex; 
  unsigned int v28; 
  unsigned __int32 v57; 
  bool v60; 
  bool v62; 
  bool v73; 
  EdgeId *v74; 
  __int64 v84; 
  double v85; 
  __int64 v86; 
  double v87; 
  vec3_t dir; 
  vec3_t result; 
  vec3_t outLineSegment[2]; 
  AdjacentEdgeInfo outAdjacentEdgeInfo; 

  EdgeId::Clear(outPrevEdge);
  EdgeId::Clear(outNextEdge);
  type = edge->type;
  if ( type != MOUNT_TYPE_TOP )
  {
    v16 = 0i64;
    __asm { vmovaps [rsp+1D8h+var_A8], xmm11 }
    if ( type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 784, ASSERT_TYPE_ASSERT, "( edge.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "edge.type", "MOUNT_TYPE_NONE", 0, 0i64) )
      __debugbreak();
    _RBX = DCONST_DVARFLT_mount_side_transition_max_thickness;
    v18 = 0i64;
    if ( !DCONST_DVARFLT_mount_side_transition_max_thickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_transition_max_thickness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm11, dword ptr [rbx+28h] }
    LOBYTE(v20) = 1;
    AdjacentEdges = Edge_GetAdjacentEdges(edge->id, v20, &outAdjacentEdgeInfo);
    if ( AdjacentEdges )
    {
      p_otherId = &outAdjacentEdgeInfo.otherId;
      __asm
      {
        vmovaps [rsp+1D8h+var_98], xmm10
        vmovss  xmm10, cs:__real@3f800000
        vmovaps [rsp+1D8h+var_B8], xmm12
        vmovaps [rsp+1D8h+var_C8], xmm13
        vmovaps [rsp+1D8h+var_D8], xmm14
        vmovss  xmm14, cs:__real@80000000
        vmovaps [rsp+1D8h+var_58], xmm6
        vmovaps [rsp+1D8h+var_68], xmm7
        vmovaps [rsp+1D8h+var_78], xmm8
        vmovaps [rsp+1D8h+var_88], xmm9
        vxorps  xmm12, xmm12, xmm12
        vxorpd  xmm13, xmm13, xmm13
      }
      do
      {
        EdgeIndex = EdgeId::GetEdgeIndex(&edge->id);
        if ( EdgeIndex != EdgeId::GetEdgeIndex(p_otherId - 2) )
        {
          LODWORD(v86) = EdgeId::GetEdgeIndex(p_otherId - 2);
          LODWORD(v84) = EdgeId::GetEdgeIndex(&edge->id);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 797, ASSERT_TYPE_ASSERT, "( edge.id.GetEdgeIndex() ) == ( adjacentInfo[index].id.GetEdgeIndex() )", "%s == %s\n\t%i, %i", "edge.id.GetEdgeIndex()", "adjacentInfo[index].id.GetEdgeIndex()", v84, v86) )
            __debugbreak();
        }
        v28 = EdgeId::GetEdgeIndex(p_otherId);
        if ( MapEdgeList_IsLoaded(v28) )
        {
          Edge_GetLineSegment(handler, *p_otherId, (vec3_t (*)[2])outLineSegment);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1D8h+outLineSegment+0Ch]
            vsubss  xmm4, xmm0, dword ptr [rsp+1D8h+outLineSegment]
            vmovss  xmm1, dword ptr [rsp+1D8h+outLineSegment+10h]
            vsubss  xmm5, xmm1, dword ptr [rsp+1D8h+outLineSegment+4]
            vmovss  xmm0, dword ptr [rsp+1D8h+outLineSegment+14h]
            vsubss  xmm6, xmm0, dword ptr [rsp+1D8h+outLineSegment+8]
            vmulss  xmm0, xmm6, xmm6
            vmulss  xmm2, xmm5, xmm5
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcmpless xmm0, xmm1, xmm14
            vblendvps xmm1, xmm1, xmm10, xmm0
            vdivss  xmm2, xmm10, xmm1
            vmulss  xmm0, xmm2, xmm4
            vmovss  dword ptr [rsp+1D8h+dir], xmm0
            vmulss  xmm0, xmm2, xmm6
            vmulss  xmm1, xmm2, xmm5
            vmovss  dword ptr [rsp+1D8h+dir+8], xmm0
            vmovss  dword ptr [rsp+1D8h+dir+4], xmm1
          }
          PointOnLineClosestToPoint(&edge->point, outLineSegment, &dir, &result);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1D8h+result]
            vsubss  xmm7, xmm0, dword ptr [r15+30h]
            vmovss  xmm0, dword ptr [rsp+1D8h+result+4]
            vsubss  xmm8, xmm0, dword ptr [r15+34h]
            vmovss  xmm0, dword ptr [rsp+1D8h+result+8]
            vsubss  xmm9, xmm0, dword ptr [r15+38h]
            vmulss  xmm1, xmm8, xmm8
            vmulss  xmm0, xmm7, xmm7
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm9, xmm9
          }
          v57 = edge->type - 2;
          __asm
          {
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm6, xmm2, xmm2
          }
          v60 = v57 <= 1;
          if ( v57 > 1 )
            goto LABEL_16;
          __asm { vcomiss xmm11, xmm6 }
          if ( edge->type != MOUNT_TYPE_LEFT )
          {
LABEL_16:
            __asm { vcomiss xmm6, xmm12 }
            if ( (unsigned int)(edge->type - 2) <= 1 )
            {
              __asm
              {
                vcvtss2sd xmm0, xmm6, xmm6
                vmovsd  [rsp+1D8h+var_198], xmm0
                vmovsd  [rsp+1D8h+var_1A0], xmm13
              }
              v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 826, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( dist )", "%s < %s\n\t%g, %g", "0.0f", "dist", v85, v87);
              v60 = !v62;
              if ( v62 )
                __debugbreak();
            }
            __asm
            {
              vdivss  xmm0, xmm10, xmm6
              vmulss  xmm1, xmm8, xmm0
              vmulss  xmm1, xmm1, dword ptr [r15+1Ch]
              vmulss  xmm2, xmm7, xmm0
              vmulss  xmm3, xmm9, xmm0
              vmulss  xmm0, xmm2, dword ptr [r15+18h]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, dword ptr [r15+20h]
              vmovss  xmm0, cs:threshold
              vaddss  xmm2, xmm2, xmm1
              vcomiss xmm0, xmm2
            }
            if ( v60 )
            {
              v73 = v16++ == -1;
              if ( !v73 && v16 != 1 )
              {
                LODWORD(v86) = 1;
                LODWORD(v84) = v16;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 836, ASSERT_TYPE_ASSERT, "( prevEdgeCount ) <= ( 1 )", "%s <= %s\n\t%i, %i", "prevEdgeCount", "1", v84, v86) )
                  __debugbreak();
              }
              v74 = outPrevEdge;
            }
            else
            {
              v73 = v18++ == -1;
              if ( !v73 && v18 != 1 )
              {
                LODWORD(v86) = 1;
                LODWORD(v84) = v18;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 844, ASSERT_TYPE_ASSERT, "( nextEdgeCount ) <= ( 1 )", "%s <= %s\n\t%i, %i", "nextEdgeCount", "1", v84, v86) )
                  __debugbreak();
              }
              v74 = outNextEdge;
            }
            *v74 = *p_otherId;
          }
        }
        p_otherId += 4;
        --AdjacentEdges;
      }
      while ( AdjacentEdges );
      __asm
      {
        vmovaps xmm14, [rsp+1D8h+var_D8]
        vmovaps xmm13, [rsp+1D8h+var_C8]
        vmovaps xmm12, [rsp+1D8h+var_B8]
        vmovaps xmm10, [rsp+1D8h+var_98]
        vmovaps xmm9, [rsp+1D8h+var_88]
        vmovaps xmm8, [rsp+1D8h+var_78]
        vmovaps xmm7, [rsp+1D8h+var_68]
        vmovaps xmm6, [rsp+1D8h+var_58]
      }
    }
    __asm { vmovaps xmm11, [rsp+1D8h+var_A8] }
  }
}

/*
==============
PM_ContextMount_CalcCandidateScore
==============
*/
float PM_ContextMount_CalcCandidateScore(const MountPlayerProperties *player, const MountEdgeProperties *edge, const ContextMountType defaultType, const vec3_t *mountedEyeForward)
{
  const dvar_t *v13; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmovss  xmm1, dword ptr [rcx+18h]
    vmulss  xmm3, xmm0, dword ptr [r9+4]
    vmulss  xmm2, xmm1, dword ptr [r9]
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm1, xmm0, dword ptr [r9+8]
    vaddss  xmm4, xmm3, xmm2
    vmovaps [rsp+58h+var_18], xmm6
    vaddss  xmm6, xmm4, xmm1
  }
  if ( defaultType == edge->type )
  {
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  else
  {
    v13 = DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement;
    if ( !DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_switch_min_dot_improvement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    __asm
    {
      vsubss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_ContextMount_CalcEdgeTransitionAngles
==============
*/
bool PM_ContextMount_CalcEdgeTransitionAngles(const MountPlayerProperties *player, const MountEdgeProperties *edge, EdgeTransitionData *outTransitionData)
{
  ContextMountType type; 
  float v56; 
  bool result; 
  bool v85; 
  const dvar_t *v86; 
  const dvar_t *v89; 
  const dvar_t *v100; 
  const BgHandler *handler; 
  const BgHandler *v113; 
  const BgHandler *v129; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  double v143; 
  float outAbove; 
  float outForward; 
  int v146; 
  vec3_t dir; 
  vec3_t dst; 
  vec3_t point; 
  char v154; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _RDI = outTransitionData;
  _R14 = edge;
  _R13 = player;
  if ( (unsigned int)(edge->type - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 872, ASSERT_TYPE_ASSERT, "(edge.type == MOUNT_TYPE_LEFT || edge.type == MOUNT_TYPE_RIGHT || edge.type == MOUNT_TYPE_TOP)", (const char *)&queryFormat, "edge.type == MOUNT_TYPE_LEFT || edge.type == MOUNT_TYPE_RIGHT || edge.type == MOUNT_TYPE_TOP") )
    __debugbreak();
  type = _R14->type;
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  if ( type == MOUNT_TYPE_TOP )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+1Ch]
      vmulss  xmm3, xmm0, dword ptr [r13+58h]
      vmovss  xmm1, dword ptr [r13+54h]
      vmulss  xmm2, xmm1, dword ptr [r13+18h]
      vmovss  xmm0, dword ptr [r13+20h]
      vmulss  xmm1, xmm0, dword ptr [r13+5Ch]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vandps  xmm2, xmm2, xmm7
      vsubss  xmm0, xmm2, xmm11
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, cs:__real@3a83126f
    }
    _RBX = &_RDI->planeNormal;
    Vec3Cross(&_R13->worldBasis.m[2], _R13->eyeBasis.m, &_RDI->planeNormal);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  xmm5, dword ptr [rbx]
      vmovss  xmm3, dword ptr [rbx+8]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  else
  {
    _RBX = &_RDI->planeNormal;
    if ( type == MOUNT_TYPE_LEFT )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r13+54h]
        vxorps  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbx], xmm1
        vmovss  xmm2, dword ptr [r13+58h]
        vxorps  xmm0, xmm2, xmm6
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm1, dword ptr [r13+5Ch]
        vxorps  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbx+8], xmm2
      }
    }
    else
    {
      _RBX->v[0] = _R13->worldBasis.m[2].v[0];
      _RDI->planeNormal.v[1] = _R13->worldBasis.m[2].v[1];
      _RDI->planeNormal.v[2] = _R13->worldBasis.m[2].v[2];
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+18h]
    vmovss  xmm1, dword ptr [r14+1Ch]
    vxorps  xmm4, xmm0, xmm6
    vmovss  xmm0, dword ptr [r14+20h]
    vxorps  xmm2, xmm0, xmm6
    vxorps  xmm3, xmm1, xmm6
    vunpcklps xmm0, xmm4, xmm3
    vmovss  dword ptr [rbp+30h+point+8], xmm2
  }
  v56 = point.v[2];
  __asm { vmovsd  qword ptr [rdi+20h], xmm0 }
  _RDI->zeroAngleDir.v[2] = v56;
  __asm { vmovsd  qword ptr [rbp+30h+point], xmm0 }
  result = PM_ContextMount_ProjectAndNormalize(_RBX, &_RDI->zeroAngleDir);
  if ( result )
  {
    _R15 = &_RDI->planeNormal;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+4]
      vmulss  xmm2, xmm0, dword ptr [rdi+24h]
      vmovss  xmm0, dword ptr [r15+8]
      vmovaps xmmword ptr [rsp+130h+var_68+8], xmm8
      vmovss  xmm8, dword ptr [r15]
      vmovaps [rsp+130h+var_78+8], xmm9
      vmovss  xmm9, dword ptr [rdi+20h]
      vmulss  xmm1, xmm9, xmm8
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm0, dword ptr [rdi+28h]
      vaddss  xmm0, xmm3, xmm2
      vandps  xmm1, xmm0, xmm7
      vcomiss xmm1, cs:__real@3a83126f
      vmovss  xmm3, dword ptr [rdi+28h]
      vmovss  xmm4, dword ptr [rdi+24h]
      vmovss  xmm5, dword ptr [rdi+1Ch]
      vmovss  xmm6, dword ptr [rdi+18h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+130h+var_D8], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+130h+var_E0], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+130h+var_E8], xmm4
      vcvtss2sd xmm1, xmm9, xmm9
      vmovsd  [rsp+130h+var_F0], xmm1
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+130h+var_F8], xmm5
      vcvtss2sd xmm2, xmm8, xmm8
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+130h+var_100], xmm6
      vmovsd  [rsp+130h+var_108], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 897, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outTransitionData.planeNormal, outTransitionData.zeroAngleDir ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v137, v138, v139, v140, v141, v142, v143) )
      __debugbreak();
    BG_GetMountEdgeToEyeDistance((const ContextMountType)_R14->type, &_R13->weapon, _R13->isAlternate, &outForward, &outAbove);
    __asm
    {
      vmovss  xmm1, [rsp+130h+outAbove]; edgeToEyeAbove
      vmovss  xmm0, [rsp+130h+outForward]; edgeToEyeForward
    }
    *(double *)&_XMM0 = BG_ContextMount_CalcCameraMinAngleToWallRad(*(double *)&_XMM0, *(double *)&_XMM1);
    __asm
    {
      vmovss  xmm1, dword ptr [r14+3Ch]
      vmulss  xmm3, xmm1, cs:__real@42652ee0; degrees
      vmovaps xmm7, xmm0
    }
    RotatePointAroundVector(&dst, &_R14->parallel, &point, *(float *)&_XMM3);
    v85 = PM_ContextMount_CalcRelativeAngleInPlane(&_RDI->planeNormal, &_RDI->zeroAngleDir, _R13->eyeBasis.m, &_RDI->playerAngleRad) && PM_ContextMount_CalcRelativeAngleInPlane(&_RDI->planeNormal, &_RDI->zeroAngleDir, &dst, &_RDI->transitionForwardAngleRad);
    v86 = DCONST_DVARFLT_mount_transition_back_angle_deg;
    if ( !DCONST_DVARFLT_mount_transition_back_angle_deg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_back_angle_deg") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v86);
    __asm
    {
      vmovss  xmm6, cs:__real@3c8efa35
      vmulss  xmm9, xmm6, dword ptr [rbx+28h]
    }
    v89 = DCONST_DVARFLT_mount_transition_hysteresis_angle_deg;
    if ( !DCONST_DVARFLT_mount_transition_hysteresis_angle_deg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_hysteresis_angle_deg") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v89);
    __asm { vmulss  xmm8, xmm6, dword ptr [rbx+28h] }
    if ( _R14->type == MOUNT_TYPE_TOP )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    else
    {
      _RBX = DCONST_DVARFLT_mount_side_yaw_soft_clamp_inside_angle;
      if ( !DCONST_DVARFLT_mount_side_yaw_soft_clamp_inside_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_yaw_soft_clamp_inside_angle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm2, xmm0, xmm6
      }
    }
    __asm
    {
      vaddss  xmm0, xmm9, xmm7
      vmovaps xmm9, [rsp+130h+var_78+8]
      vmovss  dword ptr [rdi+8], xmm0
      vaddss  xmm0, xmm0, xmm8
      vaddss  xmm1, xmm0, dword ptr [rdi+0Ch]
      vmovss  dword ptr [rdi+0Ch], xmm1
      vaddss  xmm1, xmm1, xmm2
      vmovss  dword ptr [rdi+10h], xmm1
      vmovss  dword ptr [rdi+4], xmm7
    }
    v100 = DCONST_DVARINT_mount_debug;
    if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v100);
    if ( v100->current.integer == 1 )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@40800000
        vmulss  xmm0, xmm6, dword ptr [rdi+20h]
        vaddss  xmm1, xmm0, dword ptr [r14+30h]
        vmulss  xmm0, xmm6, dword ptr [rdi+24h]
      }
      handler = _R13->handler;
      __asm
      {
        vmovss  [rsp+130h+var_C8], xmm1
        vaddss  xmm1, xmm0, dword ptr [r14+34h]
        vmulss  xmm0, xmm6, dword ptr [rdi+28h]
        vmovss  [rsp+130h+var_C4], xmm1
        vaddss  xmm1, xmm0, dword ptr [r14+38h]
        vmovss  dword ptr [rsp+130h+var_C0], xmm1
      }
      handler->DebugLine((BgHandler *)handler, &_R14->point, (const vec3_t *)&v146, &colorLtBlue, 0, 1);
      __asm { vmovsd  xmm0, qword ptr [r13+18h] }
      dir.v[2] = _R13->eyeBasis.m[0].v[2];
      __asm { vmovsd  qword ptr [rsp+130h+dir], xmm0 }
      PM_ContextMount_ProjectAndNormalize(_R15, &dir);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+130h+dir]
        vaddss  xmm2, xmm1, dword ptr [r14+30h]
        vmulss  xmm1, xmm6, dword ptr [rsp+130h+dir+4]
      }
      v113 = _R13->handler;
      __asm
      {
        vmovss  [rsp+130h+var_C8], xmm2
        vaddss  xmm2, xmm1, dword ptr [r14+34h]
        vmulss  xmm1, xmm6, dword ptr [rbp+30h+dir+8]
        vmovss  [rsp+130h+var_C4], xmm2
        vaddss  xmm2, xmm1, dword ptr [r14+38h]
        vmovss  dword ptr [rsp+130h+var_C0], xmm2
      }
      v113->DebugLine((BgHandler *)v113, &_R14->point, (const vec3_t *)&v146, &colorGreen, 0, 1);
      __asm { vmovsd  xmm0, qword ptr [rbp+30h+dst] }
      dir.v[2] = dst.v[2];
      __asm { vmovsd  qword ptr [rsp+130h+dir], xmm0 }
      PM_ContextMount_ProjectAndNormalize(_R15, &dir);
      __asm { vmovd   xmm0, dword ptr [r14+48h] }
      _EAX = 2;
      __asm
      {
        vmovd   xmm1, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm11, xmm1, xmm2
        vmulss  xmm3, xmm0, xmm8; degrees
      }
      RotatePointAroundVector(&dst, _R15, &dir, *(float *)&_XMM3);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+30h+dst]
        vaddss  xmm2, xmm1, dword ptr [r14+30h]
        vmulss  xmm1, xmm6, dword ptr [rbp+30h+dst+4]
        vaddss  xmm1, xmm1, dword ptr [r14+34h]
      }
      v129 = _R13->handler;
      __asm
      {
        vmovss  [rsp+130h+var_C8], xmm2
        vmulss  xmm2, xmm6, dword ptr [rbp+30h+dst+8]
        vmovss  [rsp+130h+var_C4], xmm1
        vaddss  xmm1, xmm2, dword ptr [r14+38h]
        vmovss  dword ptr [rsp+130h+var_C0], xmm1
      }
      v129->DebugLine((BgHandler *)v129, &_R14->point, (const vec3_t *)&v146, &colorMagenta, 0, 1);
    }
    __asm { vmovaps xmm8, xmmword ptr [rsp+130h+var_68+8] }
    result = v85;
  }
  _R11 = &v154;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm11, xmmword ptr [r11-58h]
  }
  return result;
}

/*
==============
PM_ContextMount_CalcFinalClampAngles
==============
*/
bool PM_ContextMount_CalcFinalClampAngles(const MountPlayerProperties *player, const MountEdgeProperties *edge, MountSurfaceDetailedProperties *inOutDetailMount)
{
  char v17; 
  char v18; 
  unsigned __int8 v23; 
  int v25; 
  ContextMountType type; 
  unsigned int EdgeIndex; 
  ContextMountSurfFlags v88; 
  const dvar_t *v98; 
  const dvar_t *v99; 
  const dvar_t *v105; 
  char v106; 
  char v107; 
  ContextMountSurfFlags flags; 
  bool v122; 
  bool result; 
  double v159; 
  double v160; 
  double v161; 
  double v162; 
  double v163; 
  double v164; 
  EdgeId outPrevEdge; 
  float outAbove; 
  float outForward; 
  EdgeId edgeId; 
  int v170; 
  vec3_t b; 
  vec3_t outZeroYawDir; 
  EdgeTransitionData outTransitionData; 
  char v176; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  inOutDetailMount->minClampDeg.v[0] = -180.0;
  inOutDetailMount->minClampDeg.v[1] = -180.0;
  inOutDetailMount->maxClampDeg.v[0] = 180.0;
  _R15 = edge;
  *(_QWORD *)&inOutDetailMount->maxClampDeg.y = 1127481344i64;
  *(_QWORD *)&inOutDetailMount->minResistDeg.y = 0i64;
  _RBX = inOutDetailMount;
  inOutDetailMount->maxResistDeg.v[1] = 0.0;
  BG_GetMountEdgeToEyeDistance((const ContextMountType)edge->type, &player->weapon, player->isAlternate, &outForward, &outAbove);
  __asm
  {
    vmovss  xmm0, [rsp+1A0h+outForward]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
  }
  if ( v17 | v18 )
    goto LABEL_81;
  __asm
  {
    vmovss  xmm0, [rsp+1A0h+var_148]
    vcomiss xmm0, xmm7
  }
  if ( v17 | v18 )
    goto LABEL_81;
  _RCX = player->ps;
  v23 = 0;
  __asm { vmovsd  xmm0, qword ptr [rcx+1D8h] }
  v25 = LODWORD(_RCX->viewangles.v[2]);
  __asm { vmovsd  qword ptr [rsp+1A0h+edgeId.m_edgeIndex], xmm0 }
  v170 = v25;
  if ( BG_ContextMount_IsActive(_RCX) )
  {
    _RAX = player->ps;
    __asm
    {
      vmovss  [rsp+1A0h+var_130], xmm7
      vmovss  xmm0, dword ptr [rax+4E8h]
      vmovss  xmm8, dword ptr [rax+4ECh]
    }
    v23 = _RAX->mountState.flags & 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm8, [rsp+1A0h+edgeId.m_entityIndex]
      vmovss  xmm0, [rsp+1A0h+edgeId.m_edgeIndex]
    }
  }
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@43360b61
    vmovss  xmm15, cs:__real@3f000000
    vmovss  xmm10, cs:__real@43b40000
    vaddss  xmm1, xmm0, xmm15
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm2, xmm6, xmm1, 1
    vcvttss2si eax, xmm2
  }
  _ECX = (unsigned __int16)_EAX;
  __asm
  {
    vmovd   xmm0, ecx
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm3, xmm0, cs:__real@37800000
    vaddss  xmm1, xmm3, xmm15
    vroundss xmm2, xmm6, xmm1, 1
    vmulss  xmm1, xmm8, cs:__real@43360b61
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm10
    vaddss  xmm2, xmm1, xmm15
    vroundss xmm1, xmm6, xmm2, 1
    vcvttss2si eax, xmm1
  }
  _ECX = (unsigned __int16)_EAX;
  type = _R15->type;
  __asm
  {
    vmovss  [rsp+1A0h+edgeId.m_edgeIndex], xmm0
    vmovd   xmm0, ecx
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm4, xmm0, cs:__real@37800000
    vaddss  xmm2, xmm4, xmm15
    vroundss xmm3, xmm6, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm10
    vmovss  [rsp+1A0h+var_140], xmm0
  }
  if ( (unsigned int)(type - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1020, ASSERT_TYPE_ASSERT, "(edge.type == MOUNT_TYPE_LEFT || edge.type == MOUNT_TYPE_RIGHT || edge.type == MOUNT_TYPE_TOP)", (const char *)&queryFormat, "edge.type == MOUNT_TYPE_LEFT || edge.type == MOUNT_TYPE_RIGHT || edge.type == MOUNT_TYPE_TOP") )
    __debugbreak();
  __asm
  {
    vmovss  xmm13, cs:__real@c3340000
    vmovss  xmm14, cs:__real@43340000
  }
  if ( _R15->type != MOUNT_TYPE_TOP )
  {
    if ( PM_ContextMount_CalcEdgeTransitionAngles(player, _R15, &outTransitionData) )
    {
      flags = _RBX->mount.flags;
      __asm
      {
        vmovss  xmm6, [rbp+0A0h+outTransitionData.minAngleRad]
        vmovss  xmm8, [rbp+0A0h+outTransitionData.maxAngleRad]
        vmovss  xmm9, cs:__real@40c90fdb
      }
      if ( (flags & 2) != 0 )
      {
        __asm { vmovaps xmm1, xmm9; maxAbsValueSize }
        *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RBX->mount.packedRelYawClamp[0], *(float *)&_XMM1, 9u);
        __asm { vmaxss  xmm6, xmm0, xmm6 }
      }
      if ( (flags & 4) != 0 )
      {
        __asm { vmovaps xmm1, xmm9; maxAbsValueSize }
        *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RBX->mount.packedRelYawClamp[1], *(float *)&_XMM1, 9u);
        __asm { vminss  xmm8, xmm0, xmm8 }
      }
      SignedAngleBetween(player->worldBasis.m, &outTransitionData.zeroAngleDir, &_R15->parallel);
      __asm
      {
        vmulss  xmm1, xmm6, cs:__real@42652ee0
        vmulss  xmm2, xmm8, cs:__real@42652ee0
        vaddss  xmm6, xmm1, xmm0
        vaddss  xmm8, xmm2, xmm0
      }
      EdgeId::Clear(&outPrevEdge);
      EdgeId::Clear(&edgeId);
      if ( BG_GetMountTransitionEnabled(&player->weapon, player->isAlternate) && (_RBX->mount.flags & 1) != 0 )
      {
        PM_ContextMount_CalcAdjacentEdges(player->handler, _R15, &outPrevEdge, &edgeId);
        EdgeId::Clear(&outPrevEdge);
        if ( (_RBX->mount.flags & 1) == 0 )
          EdgeId::Clear(&edgeId);
      }
      if ( v23 )
      {
        if ( EdgeId::IsValid(&outPrevEdge) && EdgeId::IsValid(&edgeId) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+3Ch]
            vucomiss xmm0, xmm13
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  xmm0, cs:__real@c066800000000000
            vmovsd  [rsp+1A0h+var_160], xmm0
            vmovsd  [rsp+1A0h+var_168], xmm1
          }
          v122 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1182, ASSERT_TYPE_ASSERT, "( inOutDetailMount.minClampDeg[YAW] ) == ( -180.0f )", "%s == %s\n\t%g, %g", "inOutDetailMount.minClampDeg[YAW]", "-180.0f", v160, v163);
          if ( v122 )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+44h]
            vucomiss xmm0, xmm14
          }
          if ( v122 )
          {
            __asm
            {
              vcvtss2sd xmm1, xmm0, xmm0
              vmovsd  xmm0, cs:__real@4066800000000000
              vmovsd  [rsp+1A0h+var_160], xmm0
              vmovsd  [rsp+1A0h+var_168], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1183, ASSERT_TYPE_ASSERT, "( inOutDetailMount.maxClampDeg[YAW] ) == ( 180.0f )", "%s == %s\n\t%g, %g", "inOutDetailMount.maxClampDeg[YAW]", "180.0f", v161, v164) )
              __debugbreak();
          }
        }
        else
        {
          __asm { vxorps  xmm9, xmm9, xmm9 }
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_side_yaw_soft_clamp_inside_angle, "mount_side_yaw_soft_clamp_inside_angle");
            __asm { vmovaps xmm7, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_side_yaw_soft_clamp_outside_angle, "mount_side_yaw_soft_clamp_outside_angle");
            __asm { vmovaps xmm9, xmm0 }
          }
          if ( EdgeId::IsValid(&outPrevEdge) || EdgeId::IsValid(&edgeId) )
          {
            if ( EdgeId::IsValid(&outPrevEdge) )
            {
              if ( !EdgeId::IsValid(&edgeId) )
              {
                __asm
                {
                  vsubss  xmm0, xmm8, cs:__real@43870000
                  vmovss  dword ptr [rbx+3Ch], xmm0
                  vmovss  dword ptr [rbx+44h], xmm8
                  vmovss  dword ptr [rbx+4Ch], xmm7
                }
              }
            }
            else
            {
              __asm
              {
                vaddss  xmm0, xmm6, cs:__real@43870000
                vmovss  dword ptr [rbx+3Ch], xmm6
                vmovss  dword ptr [rbx+44h], xmm0
                vmovss  dword ptr [rbx+54h], xmm9
              }
            }
          }
          else
          {
            __asm
            {
              vmovss  dword ptr [rbx+3Ch], xmm6
              vmovss  dword ptr [rbx+44h], xmm8
              vmovss  dword ptr [rbx+4Ch], xmm7
              vmovss  dword ptr [rbx+54h], xmm9
            }
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbx+3Ch], xmm6
          vmovss  dword ptr [rbx+44h], xmm8
        }
        _RBX->minResistDeg.v[1] = 0.0;
        _RBX->maxResistDeg.v[1] = 0.0;
      }
      __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
      if ( _R15->type == MOUNT_TYPE_LEFT )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+44h]
          vmovss  xmm2, dword ptr [rbx+3Ch]
          vxorps  xmm1, xmm0, xmm6
          vmovss  dword ptr [rbx+3Ch], xmm1
          vxorps  xmm2, xmm2, xmm6
          vmovss  dword ptr [rbx+44h], xmm2
          vmovss  xmm0, dword ptr [rbx+4Ch]
        }
        _RBX->minResistDeg.v[1] = _RBX->maxResistDeg.v[1];
        __asm { vmovss  dword ptr [rbx+54h], xmm0 }
      }
      _RDI = DCONST_DVARMPFLT_mount_side_clamp_pitch;
      if ( !DCONST_DVARMPFLT_mount_side_clamp_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_clamp_pitch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm7, dword ptr [rdi+28h] }
      _RDI = DCONST_DVARMPFLT_mount_side_clamp_pitch_soft;
      if ( !DCONST_DVARMPFLT_mount_side_clamp_pitch_soft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_side_clamp_pitch_soft") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+28h]
        vxorps  xmm0, xmm7, xmm6
        vmovss  dword ptr [rbx+38h], xmm0
        vmovss  dword ptr [rbx+40h], xmm7
        vmovss  dword ptr [rbx+48h], xmm1
        vmovss  dword ptr [rbx+50h], xmm1
      }
      goto LABEL_76;
    }
LABEL_81:
    result = 0;
    goto LABEL_82;
  }
  if ( !PM_ContextMount_CalcTopZeroDir(player, _R15, &outZeroYawDir) )
    goto LABEL_81;
  _R13 = DCONST_DVARFLT_mount_top_pitch_overpitch_clamp;
  __asm
  {
    vmovaps [rsp+1A0h+var_90], xmm11
    vmovaps [rsp+1A0h+var_A0], xmm12
  }
  if ( !DCONST_DVARFLT_mount_top_pitch_overpitch_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_pitch_overpitch_clamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R13);
  __asm { vmovss  xmm6, dword ptr [r13+28h] }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_top_pitch_soft_clamp_angle, "mount_top_pitch_soft_clamp_angle");
    __asm
    {
      vmovss  dword ptr [rbx+48h], xmm0
      vaddss  xmm6, xmm6, xmm0
    }
  }
  EdgeIndex = EdgeId::GetEdgeIndex(&_R15->id);
  EdgeId::Set(&edgeId, EdgeIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+18h]
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm1, dword ptr [r15+1Ch]
    vxorps  xmm0, xmm0, xmm10
    vxorps  xmm2, xmm1, xmm10
    vmovss  dword ptr [rsp+1A0h+b], xmm0
    vmovss  xmm0, dword ptr [r15+20h]
    vxorps  xmm1, xmm0, xmm10
    vmovss  dword ptr [rbp+0A0h+b+8], xmm1
    vmovss  dword ptr [rsp+1A0h+b+4], xmm2
  }
  *(double *)&_XMM0 = SignedAngleBetween(&outZeroYawDir, &b, &_R15->parallel);
  __asm { vminss  xmm12, xmm0, cs:__real@42b20000 }
  *(double *)&_XMM0 = Edge_CalculateOpenAngleRad(edgeId);
  __asm
  {
    vmovss  xmm11, cs:__real@42652ee0
    vmulss  xmm0, xmm0, xmm11
    vaddss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rbx+38h], xmm12
    vaddss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbx+40h], xmm2
    vmovss  xmm0, dword ptr [rbx+38h]
    vcomiss xmm0, cs:__real@42b40000
  }
  if ( !v17 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  xmm0, cs:__real@4056800000000000
      vmovsd  [rsp+1A0h+var_160], xmm0
      vmovsd  [rsp+1A0h+var_168], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1050, ASSERT_TYPE_ASSERT, "( inOutDetailMount.minClampDeg[PITCH] ) < ( 90.0f )", "%s < %s\n\t%g, %g", "inOutDetailMount.minClampDeg[PITCH]", "90.0f", v159, v162) )
      __debugbreak();
  }
  *(double *)&_XMM0 = SignedAngleBetween(player->worldBasis.m, &outZeroYawDir, &player->worldBasis.m[2]);
  __asm
  {
    vmovss  xmm6, cs:__real@40490fdb
    vmovaps xmm9, xmm0
  }
  if ( BG_IsTopMountYawClamped(&player->weapon, player->isAlternate) )
  {
    *(double *)&_XMM0 = BG_GetTopMountYawMax(&player->weapon, player->isAlternate);
    __asm
    {
      vmulss  xmm6, xmm0, cs:__real@3c8efa35
      vmovss  xmm0, [rsp+1A0h+outForward]; edgeToEyeForward
      vmovss  xmm1, [rsp+1A0h+var_148]; edgeToEyeAbove
    }
    BG_ContextMount_CalcCameraMinAngleToWallRad(*(double *)&_XMM0, *(double *)&_XMM1);
    __asm { vsubss  xmm6, xmm6, xmm0 }
  }
  else
  {
    _EAX = 0;
    __asm { vmovd   xmm1, eax }
    _EAX = v23;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3fbde44f
      vblendvps xmm6, xmm6, xmm1, xmm2
    }
  }
  v88 = _RBX->mount.flags;
  __asm
  {
    vmovss  xmm8, cs:__real@40c90fdb
    vxorps  xmm7, xmm6, xmm10
  }
  if ( (v88 & 2) != 0 )
  {
    __asm { vmovaps xmm1, xmm8; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RBX->mount.packedRelYawClamp[0], *(float *)&_XMM1, 9u);
    __asm { vmaxss  xmm7, xmm0, xmm7 }
  }
  if ( (v88 & 4) != 0 )
  {
    __asm { vmovaps xmm1, xmm8; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RBX->mount.packedRelYawClamp[1], *(float *)&_XMM1, 9u);
    __asm { vminss  xmm6, xmm0, xmm6 }
  }
  __asm
  {
    vmulss  xmm0, xmm7, xmm11
    vmulss  xmm2, xmm6, xmm11
    vmovaps xmm11, [rsp+1A0h+var_90]
    vaddss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rbx+3Ch], xmm1
    vaddss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rbx+44h], xmm0
  }
  v98 = DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle;
  if ( !DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_yaw_soft_clamp_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v98);
  LODWORD(_RBX->minResistDeg.v[1]) = v98->current.integer;
  v99 = DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle;
  if ( !DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_yaw_soft_clamp_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v99);
  LODWORD(_RBX->maxResistDeg.v[1]) = v99->current.integer;
  _RDI = DCONST_DVARMPFLT_mount_top_clamp_pitch_up;
  if ( !DCONST_DVARMPFLT_mount_top_clamp_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_clamp_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vxorps  xmm1, xmm0, xmm10
    vmaxss  xmm2, xmm1, xmm12
    vmovaps xmm12, [rsp+1A0h+var_A0]
    vmovss  dword ptr [rbx+38h], xmm2
  }
  v105 = DCONST_DVARMPFLT_mount_top_clamp_pitch_up_soft;
  if ( !DCONST_DVARMPFLT_mount_top_clamp_pitch_up_soft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_clamp_pitch_up_soft") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v105);
  __asm { vmovss  xmm10, cs:__real@43b40000 }
  LODWORD(_RBX->minResistDeg.v[0]) = v105->current.integer;
LABEL_76:
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+3Ch]
    vmovss  xmm0, dword ptr [rbx+44h]
    vsubss  xmm1, xmm0, xmm2
    vmovss  xmm0, [rsp+1A0h+var_140]
    vmulss  xmm4, xmm1, xmm15
    vaddss  xmm3, xmm2, xmm4
    vsubss  xmm0, xmm0, xmm3
    vcomiss xmm0, xmm14
  }
  if ( v106 | v107 )
  {
    __asm { vcomiss xmm0, xmm13 }
    if ( v106 )
      __asm { vaddss  xmm3, xmm3, cs:__real@c3b40000 }
  }
  else
  {
    __asm { vaddss  xmm3, xmm3, xmm10 }
  }
  __asm
  {
    vsubss  xmm0, xmm3, xmm4
    vaddss  xmm1, xmm3, xmm4
    vmovss  dword ptr [rbx+3Ch], xmm0
    vmovss  dword ptr [rbx+44h], xmm1
  }
  result = 1;
LABEL_82:
  _R11 = &v176;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
PM_ContextMount_CalcMountCylinder
==============
*/

void __fastcall PM_ContextMount_CalcMountCylinder(const MountPlayerProperties *player, const MountEdgeProperties *edge, double edgeToEyeForward, double edgeToEyeAbove, vec3_t *outMountCylinderGroundPos, float *outCylinderMidpointHeight, Bounds *outCylinder)
{
  char v35; 
  ContextMountType type; 
  const dvar_t *v65; 
  double v88; 
  double v89; 
  double v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t point; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm0, dword ptr [rcx+5Ch]
  }
  _R12 = outCylinderMidpointHeight;
  _RDI = player;
  _RSI = outCylinder;
  __asm
  {
    vandps  xmm0, xmm0, xmm6
    vsubss  xmm1, xmm0, cs:__real@3f800000
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, cs:__real@3a83126f
    vmovaps xmm10, xmm3
    vmovaps xmm12, xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1471, ASSERT_TYPE_ASSERT, "(Vec3IsParallel( worldZ, player.worldBasis[2] ))", (const char *)&queryFormat, "Vec3IsParallel( worldZ, player.worldBasis[2] )") )
    __debugbreak();
  AxisToAngles(&_RDI->eyeBasis, &angles);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+118h+angles], xmm0
    vmovss  dword ptr [rsp+118h+angles+8], xmm0
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+118h+forward+4]
    vmulss  xmm1, xmm5, dword ptr [rdi+58h]
    vmovss  xmm8, dword ptr [rdi+54h]
    vmovss  xmm9, dword ptr [rsp+118h+forward]
    vmovss  xmm4, dword ptr [rsp+118h+forward+8]
    vmulss  xmm0, xmm9, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [rdi+5Ch]
    vaddss  xmm3, xmm2, xmm0
    vandps  xmm1, xmm3, xmm6
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( !v35 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+5Ch]
      vcvtss2sd xmm1, xmm3, xmm3
      vmovss  xmm3, dword ptr [rdi+58h]
      vmovsd  [rsp+118h+var_C0], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+118h+var_C8], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+118h+var_D0], xmm3
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+118h+var_D8], xmm0
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+118h+var_E0], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+118h+var_E8], xmm5
      vcvtss2sd xmm6, xmm9, xmm9
      vmovsd  [rsp+118h+var_F0], xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1482, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( viewForward, player.worldBasis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v88, v89, v90, v91, v92, v93, v94) )
      __debugbreak();
  }
  type = edge->type;
  if ( type == MOUNT_TYPE_TOP )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+54h]
      vmovss  xmm5, dword ptr [rdi+58h]
      vmovss  xmm6, dword ptr [rdi+5Ch]
    }
  }
  else
  {
    BG_ContextMount_GetMountUpVector(type, &_RDI->eyeBasis, &angles);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+118h+angles+4]
      vmovss  xmm0, dword ptr [rsp+118h+angles]
      vmovss  xmm6, dword ptr [rsp+118h+angles+8]
    }
  }
  __asm
  {
    vxorps  xmm4, xmm12, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm4, dword ptr [rsp+118h+forward]
    vmulss  xmm0, xmm0, xmm10
    vaddss  xmm3, xmm0, dword ptr [rbp+30h]
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm2, xmm4, dword ptr [rsp+118h+forward+4]
    vmulss  xmm1, xmm5, xmm10
    vaddss  xmm3, xmm1, dword ptr [rbp+34h]
    vaddss  xmm1, xmm3, xmm2
    vmulss  xmm2, xmm4, dword ptr [rsp+118h+forward+8]
    vmovss  dword ptr [rsp+118h+point], xmm0
    vmulss  xmm0, xmm6, xmm10
    vaddss  xmm3, xmm0, dword ptr [rbp+38h]
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsp+118h+point+8], xmm0
    vmovss  dword ptr [rsp+118h+point+4], xmm1
  }
  ProjectPointOnPlane(&point, &_RDI->origin, &_RDI->worldBasis.m[2], outMountCylinderGroundPos);
  *(double *)&_XMM0 = BG_ContextMount_CalcCameraMinDistToPlayerClip();
  _RBX = DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_ground_clearance;
  __asm { vmovaps xmm9, xmm0 }
  if ( !DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_ground_clearance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_cylinder_ground_clearance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  v65 = DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_additional_height;
  __asm { vsubss  xmm10, xmm0, xmm9 }
  if ( !DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_additional_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_cylinder_additional_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+118h+point+8]
    vsubss  xmm1, xmm0, dword ptr [r15+8]
    vmovss  xmm0, cs:dword_145039CA4; value
    vaddss  xmm2, xmm1, xmm9
    vmovss  xmm1, cs:dword_145039CA0; quantum
    vaddss  xmm8, xmm2, dword ptr [rbx+28h]
  }
  *(float *)&_XMM0 = BG_ContextMount_Quantize(*(double *)&_XMM0, *(double *)&_XMM1);
  __asm
  {
    vsubss  xmm1, xmm8, xmm10
    vmulss  xmm1, xmm1, cs:__real@3f000000
    vmovaps xmm6, xmm0
    vmaxss  xmm0, xmm1, cs:__real@3f800000; value
    vmovss  xmm1, cs:dword_145039CA0; quantum
  }
  *(float *)&_XMM0 = BG_ContextMount_Quantize(*(double *)&_XMM0, *(double *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:dword_145039CA0; min
    vmovaps xmm2, xmm6; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vaddss  xmm1, xmm8, xmm10
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vmovss  dword ptr [r12], xmm2
  }
  *(_QWORD *)outCylinder->midPoint.v = 0i64;
  outCylinder->midPoint.v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rsi+0Ch], xmm9
    vmovss  dword ptr [rsi+10h], xmm9
    vmovss  dword ptr [rsi+14h], xmm0
  }
  _R11 = &v98;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-50h]
  }
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/
bool PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, vec3_t *outEyePoint)
{
  float outAbove; 
  float v10; 
  float edgeToEyeForward; 
  float outForward; 
  tmat33_t<vec3_t> outClampedEyeBasis; 

  BG_GetMountEdgeToEyeDistance((const ContextMountType)mountDetail->mount.type, &player->weapon, player->isAlternate, &outForward, &edgeToEyeForward);
  __asm
  {
    vmovss  xmm0, [rsp+98h+edgeToEyeForward]
    vmovss  xmm1, [rsp+98h+outForward]
    vmovss  [rsp+98h+var_70], xmm0
    vmovss  dword ptr [rsp+98h+outAbove], xmm1
  }
  return PM_ContextMount_CalcMountEyePoint(mountDetail, player->handler, &player->eyeBasis, &player->worldBasis, outAbove, v10, outEyePoint, &outClampedEyeBasis);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/
bool PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, vec3_t *outEyePoint, tmat33_t<vec3_t> *outClampedEyeBasis)
{
  float outAbove; 
  float v12; 
  float edgeToEyeForward; 
  float outForward; 

  BG_GetMountEdgeToEyeDistance((const ContextMountType)mountDetail->mount.type, &player->weapon, player->isAlternate, &outForward, &edgeToEyeForward);
  __asm
  {
    vmovss  xmm0, [rsp+58h+edgeToEyeForward]
    vmovss  xmm1, [rsp+58h+outForward]
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  dword ptr [rsp+58h+outAbove], xmm1
  }
  return PM_ContextMount_CalcMountEyePoint(mountDetail, player->handler, &player->eyeBasis, &player->worldBasis, outAbove, v12, outEyePoint, outClampedEyeBasis);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/

bool __fastcall PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const MountPlayerProperties *player, double edgeToEyeForward, double edgeToEyeAbove, vec3_t *outEyePoint, tmat33_t<vec3_t> *outClampedEyeBasis)
{
  float v7; 
  float v8; 

  __asm
  {
    vmovss  [rsp+48h+var_20], xmm3
    vmovss  [rsp+48h+var_28], xmm2
  }
  return PM_ContextMount_CalcMountEyePoint(mountDetail, player->handler, &player->eyeBasis, &player->worldBasis, v7, v8, outEyePoint, outClampedEyeBasis);
}

/*
==============
PM_ContextMount_CalcMountEyePoint
==============
*/
bool PM_ContextMount_CalcMountEyePoint(const MountSurfaceDetailedProperties *mountDetail, const BgHandler *const handler, const tmat33_t<vec3_t> *eyeBasis, const tmat33_t<vec3_t> *worldBasis, const float edgeToEyeForward, const float edgeToEyeAbove, vec3_t *outEyePoint, tmat33_t<vec3_t> *outClampedEyeBasis)
{
  bool result; 
  char v61; 
  bool v96; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  double v143; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  double v149; 
  double v150; 
  vec3_t angles; 
  vec3_t outMountPoint; 
  vec3_t outMountUpDir; 
  char v155; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  _RSI = outEyePoint;
  _RBX = mountDetail;
  _RDI = outClampedEyeBasis;
  if ( mountDetail->mount.type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 222, ASSERT_TYPE_ASSERT, "(mountDetail.mount.type != MOUNT_TYPE_NONE)", (const char *)&queryFormat, "mountDetail.mount.type != MOUNT_TYPE_NONE") )
    __debugbreak();
  BG_ContextMount_CalcMountPoint(handler, &_RBX->mount, &outMountPoint);
  BG_ContextMount_GetMountUpVector((const ContextMountType)_RBX->mount.type, eyeBasis, &outMountUpDir);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vsubss  xmm1, xmm0, dword ptr [rbx+38h]
    vmovss  xmm0, dword ptr [rbx+44h]
    vmulss  xmm6, xmm1, cs:__real@3f000000
    vsubss  xmm1, xmm0, dword ptr [rbx+3Ch]
    vmulss  xmm7, xmm1, cs:__real@3f000000
  }
  vectoangles(eyeBasis->m, &angles);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbx+38h]; angle2
    vmovss  xmm0, dword ptr [rsp+118h+angles]; angle1
    vmovaps xmm2, xmm6; range
  }
  *(double *)&_XMM0 = AngleClamp(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
  __asm
  {
    vaddss  xmm1, xmm7, dword ptr [rbx+3Ch]; angle2
    vmovss  dword ptr [rsp+118h+angles], xmm0
    vmovss  xmm0, dword ptr [rsp+118h+angles+4]; angle1
    vmovaps xmm2, xmm7; range
  }
  *(double *)&_XMM0 = AngleClamp(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
  __asm { vmovss  dword ptr [rsp+118h+angles+4], xmm0 }
  AngleVectors(&angles, outClampedEyeBasis->m, NULL, NULL);
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3f800000
  }
  _RCX = &worldBasis->m[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, xmm9
    vsubss  xmm0, xmm2, xmm7
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v61 )
  {
    result = 0;
  }
  else
  {
    __asm { vmovaps [rsp+118h+var_68], xmm8 }
    Vec3Cross(_RCX, outClampedEyeBasis->m, &outClampedEyeBasis->m[1]);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+10h]
      vmovss  xmm5, dword ptr [rdi+0Ch]
      vmovss  xmm3, dword ptr [rdi+14h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rdi+0Ch], xmm0
      vmulss  xmm1, xmm2, dword ptr [rdi+10h]
      vmovss  dword ptr [rdi+10h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+14h]
      vmovss  dword ptr [rdi+14h], xmm0
    }
    Vec3Cross(outClampedEyeBasis->m, &outClampedEyeBasis->m[1], &outClampedEyeBasis->m[2]);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1Ch]
      vmovss  xmm5, dword ptr [rdi+18h]
      vmovss  xmm3, dword ptr [rdi+20h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rdi+18h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rdi+1Ch]
      vmovss  dword ptr [rdi+1Ch], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+20h]
      vmovss  dword ptr [rdi+20h], xmm0
      vmovss  xmm7, dword ptr [rdi+4]
      vmulss  xmm1, xmm7, dword ptr [rdi+10h]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm3, dword ptr [rdi+0Ch]
      vmovss  xmm8, dword ptr [rdi+8]
      vmulss  xmm0, xmm3, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rdi+14h]
      vaddss  xmm1, xmm2, xmm1
      vandps  xmm0, xmm1, xmm9
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( !v61 )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+14h]
        vmovss  xmm6, dword ptr [rdi+10h]
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  [rsp+118h+var_C0], xmm0
        vcvtss2sd xmm1, xmm3, xmm3
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+118h+var_C8], xmm5
        vcvtss2sd xmm2, xmm8, xmm8
        vcvtss2sd xmm3, xmm7, xmm7
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+118h+var_D0], xmm6
        vmovsd  [rsp+118h+var_D8], xmm1
        vmovsd  [rsp+118h+var_E0], xmm2
        vmovsd  [rsp+118h+var_E8], xmm3
        vmovsd  [rsp+118h+var_F0], xmm4
      }
      v96 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 251, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outClampedEyeBasis[0], outClampedEyeBasis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v137, v139, v141, v143, v145, v147, v149);
      v61 = 0;
      if ( v96 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rdi+4]
      vmulss  xmm1, xmm7, dword ptr [rdi+1Ch]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm3, dword ptr [rdi+18h]
      vmovss  xmm8, dword ptr [rdi+8]
      vmulss  xmm0, xmm3, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rdi+20h]
      vaddss  xmm1, xmm2, xmm1
      vandps  xmm0, xmm1, xmm9
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( !v61 )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+20h]
        vmovss  xmm6, dword ptr [rdi+1Ch]
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  [rsp+118h+var_C0], xmm0
        vcvtss2sd xmm1, xmm3, xmm3
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+118h+var_C8], xmm5
        vcvtss2sd xmm2, xmm8, xmm8
        vcvtss2sd xmm3, xmm7, xmm7
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+118h+var_D0], xmm6
        vmovsd  [rsp+118h+var_D8], xmm1
        vmovsd  [rsp+118h+var_E0], xmm2
        vmovsd  [rsp+118h+var_E8], xmm3
        vmovsd  [rsp+118h+var_F0], xmm4
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 252, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outClampedEyeBasis[0], outClampedEyeBasis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v138, v140, v142, v144, v146, v148, v150) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm5, [rsp+118h+edgeToEyeAbove]
      vmovss  xmm0, [rsp+118h+edgeToEyeForward]
      vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm6, dword ptr [rdi]
      vaddss  xmm2, xmm1, dword ptr [rsp+118h+outMountPoint]
      vmulss  xmm1, xmm5, dword ptr [rsp+118h+outMountUpDir]
      vmovaps xmm8, [rsp+118h+var_68]
    }
    result = 1;
    __asm
    {
      vmovss  dword ptr [rsi], xmm2
      vmulss  xmm0, xmm6, dword ptr [rdi+4]
      vaddss  xmm4, xmm0, dword ptr [rsp+118h+outMountPoint+4]
      vaddss  xmm2, xmm1, xmm2
      vmulss  xmm1, xmm5, dword ptr [rsp+118h+outMountUpDir+4]
      vmovss  dword ptr [rsi+4], xmm4
      vmovss  xmm3, dword ptr [rdi+8]
      vmovss  dword ptr [rsi], xmm2
      vaddss  xmm2, xmm1, xmm4
      vmulss  xmm0, xmm6, xmm3
      vaddss  xmm3, xmm0, dword ptr [rsp+118h+outMountPoint+8]
      vmovss  dword ptr [rsi+4], xmm2
      vmulss  xmm2, xmm5, dword ptr [rsp+118h+outMountUpDir+8]
      vaddss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rsi+8], xmm0
    }
  }
  _R11 = &v155;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-58h]
  }
  return result;
}

/*
==============
PM_ContextMount_CalcRelativeAngleInPlane
==============
*/
bool PM_ContextMount_CalcRelativeAngleInPlane(const vec3_t *planeNormal, const vec3_t *refDir, const vec3_t *dir, float *outAngleRad)
{
  bool result; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  double v106; 
  vec3_t dira; 
  vec3_t cross; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovss  xmm3, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rcx+8]
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3b03126f
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm7
  }
  _R14 = outAngleRad;
  _RSI = dir;
  _RDI = refDir;
  _RBX = planeNormal;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_C0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 751, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v92, v95, v98, v101) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm5, dword ptr [rdi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm7
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_C0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 752, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( refDir ) )", "(%g, %g, %g) len %g", v93, v96, v99, v102) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm7, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+8]
    vmulss  xmm1, xmm7, xmm4
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rdi+8]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm6
    vcomiss xmm0, cs:__real@3a83126f
    vcvtss2sd xmm0, xmm1, xmm1
    vmovss  xmm1, dword ptr [rdi+8]
    vmovsd  [rsp+0E8h+var_90], xmm0
    vcvtss2sd xmm2, xmm3, xmm3
    vcvtss2sd xmm3, xmm4, xmm4
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+0E8h+var_98], xmm1
    vmovsd  [rsp+0E8h+var_A0], xmm2
    vmovsd  [rsp+0E8h+var_A8], xmm3
    vcvtss2sd xmm4, xmm9, xmm9
    vmovsd  [rsp+0E8h+var_B0], xmm4
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+0E8h+var_B8], xmm5
    vcvtss2sd xmm6, xmm7, xmm7
    vmovsd  [rsp+0E8h+var_C0], xmm6
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 753, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( planeNormal, refDir ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v94, v97, v100, v103, v104, v105, v106) )
    __debugbreak();
  __asm { vmovsd  xmm0, qword ptr [rsi] }
  dira.v[2] = _RSI->v[2];
  __asm { vmovsd  qword ptr [rsp+0E8h+dir], xmm0 }
  result = PM_ContextMount_ProjectAndNormalize(_RBX, &dira);
  if ( result )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0E8h+dir+4]
      vmulss  xmm4, xmm0, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [rsp+0E8h+dir]
      vmulss  xmm3, xmm1, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rsp+0E8h+dir+8]
      vmulss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  xmm2, cs:__real@3f800000; max
      vaddss  xmm5, xmm4, xmm3
      vaddss  xmm0, xmm5, xmm1; val
      vmovss  xmm1, cs:__real@bf800000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm { vmovss  dword ptr [r14], xmm0 }
    Vec3Cross(_RDI, &dira, &cross);
    __asm
    {
      vmovss  xmm5, dword ptr [r14]
      vmovss  xmm0, dword ptr [rsp+0E8h+cross]
      vmulss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rsp+0E8h+cross+4]
      vmulss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rsp+0E8h+cross+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+8]
      vaddss  xmm4, xmm3, xmm2
      vxorps  xmm3, xmm5, cs:__xmm@80000000800000008000000080000000
      vaddss  xmm2, xmm4, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcmpless xmm1, xmm0, xmm2
      vblendvps xmm1, xmm3, xmm5, xmm1
      vmovss  dword ptr [r14], xmm1
    }
    result = 1;
  }
  else
  {
    *_R14 = 0.0;
  }
  _R11 = &v109;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
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
  bool v7; 
  bool v11; 
  bool result; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  vec3_t dir; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm9
  }
  v7 = edge->type == MOUNT_TYPE_NONE;
  _RBP = outZeroYawDir;
  _RSI = player;
  _RBX = edge;
  if ( edge->type != MOUNT_TYPE_TOP )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 964, ASSERT_TYPE_ASSERT, "(edge.type == MOUNT_TYPE_TOP)", (const char *)&queryFormat, "edge.type == MOUNT_TYPE_TOP");
    v7 = 0;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmulss  xmm3, xmm0, dword ptr [rsi+58h]
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rsi+54h]
    vmovss  xmm0, dword ptr [rbx+14h]
    vmulss  xmm1, xmm0, dword ptr [rsi+5Ch]
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@3f800000
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, xmm6
    vsubss  xmm0, xmm2, xmm9
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 965, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( player.worldBasis[2], edge.parallel ))", (const char *)&queryFormat, "!Vec3IsParallel( player.worldBasis[2], edge.parallel )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  dword ptr [rsp+0C8h+dir], xmm0
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  dword ptr [rsp+0C8h+dir+8], xmm0
    vmovss  dword ptr [rsp+0C8h+dir+4], xmm1
  }
  result = PM_ContextMount_ProjectAndNormalize(&_RSI->worldBasis.m[2], &dir);
  if ( result )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0C8h+dir+4]
      vmulss  xmm1, xmm3, dword ptr [rsi+58h]
      vmovss  xmm4, dword ptr [rsp+0C8h+dir]
      vmovss  xmm5, dword ptr [rsp+0C8h+dir+8]
      vmovaps [rsp+0C8h+var_38], xmm7
      vmovss  xmm7, dword ptr [rsi+54h]
      vmulss  xmm0, xmm7, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm5, dword ptr [rsi+5Ch]
      vaddss  xmm0, xmm2, xmm0
      vandps  xmm1, xmm0, xmm6
      vcomiss xmm1, cs:__real@3a83126f
      vcvtss2sd xmm1, xmm5, xmm5
      vmovss  xmm5, dword ptr [rsi+58h]
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vmovss  xmm4, dword ptr [rsi+5Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_70], xmm0
      vmovsd  [rsp+0C8h+var_78], xmm1
      vmovsd  [rsp+0C8h+var_80], xmm2
      vmovsd  [rsp+0C8h+var_88], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0C8h+var_90], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+0C8h+var_98], xmm5
      vcvtss2sd xmm6, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_A0], xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 974, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( player.worldBasis[2], parallelProj ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v66, v67, v68, v69, v70, v71, v72) )
      __debugbreak();
    Vec3Cross(&dir, &_RSI->worldBasis.m[2], _RBP);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4]
      vmovss  xmm5, dword ptr [rbp+0]
      vmovss  xmm3, dword ptr [rbp+8]
      vmovaps xmm7, [rsp+0C8h+var_38]
    }
    result = 1;
    __asm
    {
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm9, xmm0
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+0], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbp+4]
      vmovss  dword ptr [rbp+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbp+8]
      vmovss  dword ptr [rbp+8], xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_28]
    vmovaps xmm9, [rsp+0C8h+var_48]
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
  const BgHandler *handler; 
  EdgeId v16; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  EdgeId adjacentId; 
  ContextMountTransitionType inOutTransType; 
  vec3_t outClampedEyeForward; 
  MountEdgeProperties edgea; 

  v4 = DCONST_DVARMPBOOL_mount_transition_enable;
  type = edge->type;
  _RSI = edge;
  if ( !DCONST_DVARMPBOOL_mount_transition_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( (!v4->current.enabled || type == MOUNT_TYPE_TOP || !BG_GetMountTransitionEnabled(&player->weapon, player->isAlternate)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2284, ASSERT_TYPE_ASSERT, "(PM_ContextMount_ShouldCheckTransitions( player, edge.type, false ))", (const char *)&queryFormat, "PM_ContextMount_ShouldCheckTransitions( player, edge.type, false )") )
    __debugbreak();
  inOutTransType = *inOutTransitionType;
  adjacentId = *inOutTransId;
  if ( !PM_ContextMount_EmitAdjacentEdgeForViewangles(player, _RSI, 0, 0, &inOutTransType, &adjacentId) || !EdgeId::IsValid(&adjacentId) )
    return 0;
  EdgeIndex = EdgeId::GetEdgeIndex(&_RSI->id);
  if ( EdgeId::GetEdgeIndex(&adjacentId) == EdgeIndex )
  {
    v20 = EdgeId::GetEdgeIndex(&_RSI->id);
    v19 = EdgeId::GetEdgeIndex(&adjacentId);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2298, ASSERT_TYPE_ASSERT, "( transId.GetEdgeIndex() ) != ( edge.id.GetEdgeIndex() )", "%s != %s\n\t%i, %i", "transId.GetEdgeIndex()", "edge.id.GetEdgeIndex()", v19, v20) )
      __debugbreak();
  }
  v11 = inOutTransType;
  if ( inOutTransType == MOUNT_TRANSITION_TYPE_NONE )
  {
    LODWORD(v18) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2299, ASSERT_TYPE_ASSERT, "( transType ) != ( MOUNT_TRANSITION_TYPE_NONE )", "%s != %s\n\t%i, %i", "transType", "MOUNT_TRANSITION_TYPE_NONE", v18, 0i64) )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymm1, ymmword ptr [rsi+20h]
  }
  handler = player->handler;
  __asm
  {
    vmovups ymmword ptr [rsp+118h+edge.normal], ymm0
    vmovups ymm0, ymmword ptr [rsi+40h]
    vmovups ymmword ptr [rsp+118h+edge.normalFaceIndex], ymm0
    vmovups ymmword ptr [rsp+118h+edge.below+8], ymm1
  }
  MountEdgeProperties::TransitionToAdjacent(&edgea, handler, adjacentId, v11 != MOUNT_TRANSITION_TYPE_FORWARD);
  if ( !PM_ContextMount_IsValidEdge_Preliminary(player, &edgea, 0, 0, 0, &outClampedEyeForward) || !PM_ContextMount_IsValidEdge_Adjacency(player, &edgea, 0, 0) || !PM_ContextMount_IsValidEdge_Detail(player, &edgea, 0, 1, 0, 0) )
    return 0;
  v16 = adjacentId;
  *inOutTransitionType = v11;
  *inOutTransId = v16;
  return 1;
}

/*
==============
PM_ContextMount_DebugFailedEdge
==============
*/
void PM_ContextMount_DebugFailedEdge(const MountPlayerProperties *player, MountEdgeProperties *edge, int edgeScoreOrdinal, int recurseCount, const char *reasonStr)
{
  const dvar_t *v7; 
  const BgHandler *handler; 
  const BgHandler *v31; 
  const BgHandler *v38; 
  const BgHandler *v45; 
  const char *v49; 
  unsigned int EdgeIndex; 
  bool v51; 
  char *fmt; 
  char *fmta; 
  __int64 v61; 
  int v62; 
  int v65[2]; 
  int v67[4]; 
  int v68[4]; 
  char dest[256]; 

  v7 = DCONST_DVARINT_mount_debug;
  _R15 = edge;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer == 1 && reasonStr )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@40800000
      vmulss  xmm3, xmm2, dword ptr [r15+14h]
      vmulss  xmm5, xmm2, dword ptr [r15+10h]
      vmovss  xmm4, dword ptr [r15+34h]
    }
    handler = player->handler;
    __asm
    {
      vmovaps [rsp+1F0h+var_50], xmm6
      vmovss  xmm6, dword ptr [r15+30h]
      vmovaps [rsp+1F0h+var_60], xmm7
      vmulss  xmm7, xmm2, dword ptr [r15+0Ch]
      vmovss  xmm2, dword ptr [r15+38h]
      vsubss  xmm0, xmm6, xmm7
      vmovss  [rsp+1F0h+var_180], xmm0
      vsubss  xmm0, xmm4, xmm5
      vmovss  [rsp+1F0h+var_17C], xmm0
      vsubss  xmm0, xmm2, xmm3
      vaddss  xmm1, xmm6, xmm7
      vmovss  [rsp+1F0h+var_178], xmm0
      vmovss  [rsp+1F0h+var_190], xmm1
      vaddss  xmm1, xmm2, xmm3
      vmovss  xmm3, cs:__real@3f000000
      vaddss  xmm0, xmm4, xmm5
      vmovss  [rsp+1F0h+var_18C], xmm0
      vmovss  [rsp+1F0h+var_188], xmm1
    }
    fmt = (char *)&colorRed;
    ((void (__fastcall *)(const BgHandler *, int *, int *))handler->DebugCapsule)(handler, v68, v67);
    __asm
    {
      vmovss  xmm6, cs:__real@40000000
      vmulss  xmm0, xmm6, dword ptr [r15+0Ch]
      vaddss  xmm1, xmm0, dword ptr [r15+30h]
      vmulss  xmm0, xmm6, dword ptr [r15+10h]
    }
    v31 = player->handler;
    __asm
    {
      vmovss  [rsp+1F0h+var_1B0], xmm1
      vaddss  xmm1, xmm0, dword ptr [r15+34h]
      vmulss  xmm0, xmm6, dword ptr [r15+14h]
      vmovss  [rsp+1F0h+var_1AC], xmm1
      vaddss  xmm1, xmm0, dword ptr [r15+38h]
      vmovss  [rsp+1F0h+var_1A8], xmm1
    }
    LODWORD(fmt) = 0;
    v31->DebugLine((BgHandler *)v31, &_R15->point, (const vec3_t *)&v62, &colorBlue, (int)fmt, 0);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [r15+18h]
      vaddss  xmm2, xmm1, dword ptr [r15+30h]
      vmulss  xmm1, xmm6, dword ptr [r15+1Ch]
    }
    v38 = player->handler;
    __asm
    {
      vmovss  [rsp+1F0h+var_1B0], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+34h]
      vmulss  xmm1, xmm6, dword ptr [r15+20h]
      vmovss  [rsp+1F0h+var_1AC], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+38h]
      vmovss  [rsp+1F0h+var_1A8], xmm2
    }
    v38->DebugLine((BgHandler *)v38, &_R15->point, (const vec3_t *)&v62, &colorRed, 0, 0);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [r15]
      vaddss  xmm2, xmm1, dword ptr [r15+30h]
      vmulss  xmm1, xmm6, dword ptr [r15+4]
    }
    v45 = player->handler;
    __asm
    {
      vmovss  [rsp+1F0h+var_1B0], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+34h]
      vmulss  xmm1, xmm6, dword ptr [r15+8]
      vmovss  [rsp+1F0h+var_1AC], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+38h]
      vmovss  [rsp+1F0h+var_1A8], xmm2
    }
    v45->DebugLine((BgHandler *)v45, &_R15->point, (const vec3_t *)&v62, &colorGreen, 0, 0);
    v49 = s_mountTypeNames[_R15->type];
    EdgeIndex = EdgeId::GetEdgeIndex(&_R15->id);
    LODWORD(v61) = recurseCount;
    LODWORD(fmta) = edgeScoreOrdinal;
    Com_sprintf_truncate(dest, 0x100ui64, "%i [%i, %s, %i]: %s", EdgeIndex, fmta, v49, v61, reasonStr);
    v51 = _R15->type == MOUNT_TYPE_RIGHT;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+30h]
      vmovss  xmm1, dword ptr [r15+34h]
      vmovaps xmm7, [rsp+1F0h+var_60]
      vmovaps xmm6, [rsp+1F0h+var_50]
      vmovss  [rsp+1F0h+var_1A0], xmm0
      vmovss  xmm0, dword ptr [r15+38h]
      vmovss  [rsp+1F0h+var_198], xmm0
      vmovss  [rsp+1F0h+var_19C], xmm1
    }
    if ( v51 )
    {
      __asm
      {
        vsubss  xmm0, xmm0, cs:s_mountDebugZOffsetRight
        vmovss  [rsp+1F0h+var_198], xmm0
      }
    }
    __asm { vmovss  xmm3, cs:s_mountDebugScale }
    ((void (__fastcall *)(const BgHandler *, int *, vec4_t *))player->handler->DebugString)(player->handler, v65, &colorRed);
  }
}

/*
==============
PM_ContextMount_DebugValidEdge
==============
*/
void PM_ContextMount_DebugValidEdge(const MountPlayerProperties *player, const MountSurfaceDetailedProperties *mountDetail, const vec4_t *edgeColor, const vec4_t *coneColor, int edgeScoreOrdinal, int recurseCount, const char *text)
{
  const dvar_t *v11; 
  EdgeId id; 
  const BgHandler *handler; 
  const BgHandler *v26; 
  const char *v34; 
  unsigned int EdgeIndex; 
  bool v36; 
  EdgeId adjId; 
  const BgHandler *v43; 
  const BgHandler *v51; 
  bool v62; 
  const BgHandler *v70; 
  float fmt; 
  float outParallel; 
  vec3_t *outBelow; 
  float outAbove; 
  float outForward; 
  vec3_t outEyePoint; 
  vec3_t v83; 
  int v84; 
  vec3_t v87; 
  vec3_t outEdgePoint; 
  int v89[4]; 
  vec3_t v90; 
  vec3_t outNormal; 
  tmat33_t<vec3_t> outClampedEyeBasis; 
  char dest[256]; 

  v11 = DCONST_DVARINT_mount_debug;
  _R14 = mountDetail;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer == 1 )
  {
    __asm { vmovss  xmm2, dword ptr [r14+0Ch]; fraction }
    id = _R14->mount.id;
    handler = player->handler;
    __asm
    {
      vmovaps [rsp+280h+var_50], xmm6
      vmovaps [rsp+280h+var_60], xmm7
      vmovaps [rsp+280h+var_80], xmm9
    }
    Edge_CalculatePoint(handler, id, *(float *)&_XMM2, &outEdgePoint);
    __asm { vmovss  xmm2, dword ptr [r14+0Ch]; fraction }
    Edge_CalculateVectors(player->handler, _R14->mount.id, *(float *)&_XMM2, _R14->mount.normalFaceIndex, &outNormal, &v83, &v90);
    __asm
    {
      vmovss  xmm9, cs:__real@40800000
      vmulss  xmm3, xmm9, dword ptr [rsp+280h+var_228+8]
      vmulss  xmm7, xmm9, dword ptr [rsp+280h+var_228]
      vmovss  xmm6, dword ptr [rbp+180h+outEdgePoint]
      vmulss  xmm5, xmm9, dword ptr [rsp+280h+var_228+4]
      vmovss  xmm4, dword ptr [rbp+180h+outEdgePoint+4]
      vmovss  xmm2, dword ptr [rbp+180h+outEdgePoint+8]
    }
    v26 = player->handler;
    __asm
    {
      vsubss  xmm1, xmm6, xmm7
      vmovss  dword ptr [rsp+280h+var_208], xmm1
      vsubss  xmm1, xmm4, xmm5
      vmovss  dword ptr [rsp+280h+var_208+4], xmm1
      vsubss  xmm1, xmm2, xmm3
      vaddss  xmm0, xmm7, xmm6
      vmovss  dword ptr [rbp+180h+var_208+8], xmm1
      vmovss  [rsp+280h+var_218], xmm0
      vaddss  xmm0, xmm3, xmm2
      vmovss  xmm3, cs:__real@3f000000
      vaddss  xmm1, xmm5, xmm4
      vmovss  [rsp+280h+var_214], xmm1
      vmovss  [rsp+280h+var_210], xmm0
    }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, int *))v26->DebugCapsule)(v26, &v87, &v84);
    v34 = s_mountTypeNames[_R14->mount.type];
    EdgeIndex = EdgeId::GetEdgeIndex(&_R14->mount.id);
    LODWORD(outBelow) = recurseCount;
    Com_sprintf_truncate(dest, 0x100ui64, "%i [%i, %s, %i]: %s", EdgeIndex, __PAIR64__(HIDWORD(edgeColor), edgeScoreOrdinal), v34, outBelow, text);
    v36 = _R14->mount.type == MOUNT_TYPE_RIGHT;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+180h+outEdgePoint]
      vmovsd  qword ptr [rsp+280h+outEyePoint], xmm0
    }
    outEyePoint.v[2] = outEdgePoint.v[2];
    if ( v36 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+180h+outEdgePoint+8]
        vsubss  xmm1, xmm0, cs:s_mountDebugZOffsetRight
        vmovss  dword ptr [rsp+280h+outEyePoint+8], xmm1
      }
    }
    __asm { vmovss  xmm3, cs:s_mountDebugScale }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, const vec4_t *))player->handler->DebugString)(player->handler, &outEyePoint, edgeColor);
    if ( EdgeId::IsValid(&_R14->mount.adjId) )
    {
      __asm { vmovss  xmm2, dword ptr [r14+30h]; fraction }
      adjId = _R14->mount.adjId;
      v43 = player->handler;
      __asm { vmovaps [rsp+280h+var_70], xmm8 }
      Edge_CalculatePoint(v43, adjId, *(float *)&_XMM2, &v87);
      __asm { vmovss  xmm2, dword ptr [r14+30h]; fraction }
      Edge_CalculateVectors(player->handler, _R14->mount.adjId, *(float *)&_XMM2, _R14->mount.adjNormalFaceIndex, &v90, &outEyePoint, &outNormal);
      __asm
      {
        vmulss  xmm8, xmm9, dword ptr [rsp+280h+outEyePoint]
        vmovss  xmm7, dword ptr [rsp+280h+var_208]
        vmulss  xmm6, xmm9, dword ptr [rsp+280h+outEyePoint+4]
        vmovss  xmm5, dword ptr [rsp+280h+var_208+4]
        vmulss  xmm4, xmm9, dword ptr [rsp+280h+outEyePoint+8]
        vmovss  xmm2, dword ptr [rbp+180h+var_208+8]
      }
      v51 = player->handler;
      __asm
      {
        vmovss  xmm3, cs:__real@3f000000
        vsubss  xmm1, xmm7, xmm8
        vmovss  dword ptr [rsp+280h+var_228], xmm1
        vsubss  xmm1, xmm5, xmm6
        vmovss  dword ptr [rsp+280h+var_228+4], xmm1
        vsubss  xmm1, xmm2, xmm4
        vaddss  xmm0, xmm7, xmm8
        vmovss  dword ptr [rsp+280h+var_228+8], xmm1
        vmovss  [rsp+280h+var_218], xmm0
        vaddss  xmm1, xmm5, xmm6
        vaddss  xmm0, xmm2, xmm4
        vmovss  [rsp+280h+var_214], xmm1
        vmovss  [rsp+280h+var_210], xmm0
      }
      ((void (__fastcall *)(const BgHandler *, vec3_t *, int *))v51->DebugCapsule)(v51, &v83, &v84);
      __asm { vmovaps xmm8, [rsp+280h+var_70] }
    }
    BG_GetMountEdgeToEyeDistance((const ContextMountType)_R14->mount.type, &player->weapon, player->isAlternate, &outForward, &outAbove);
    __asm
    {
      vmovss  xmm0, [rsp+280h+outAbove]
      vmovss  xmm1, [rsp+280h+outForward]
      vmovss  dword ptr [rsp+280h+outParallel], xmm0
      vmovss  dword ptr [rsp+280h+fmt], xmm1
    }
    v62 = PM_ContextMount_CalcMountEyePoint(_R14, player->handler, &player->eyeBasis, &player->worldBasis, fmt, outParallel, &outEyePoint, &outClampedEyeBasis);
    __asm
    {
      vmovaps xmm9, [rsp+280h+var_80]
      vmovaps xmm7, [rsp+280h+var_60]
      vmovaps xmm6, [rsp+280h+var_50]
    }
    if ( v62 )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@41400000
        vmulss  xmm1, xmm3, dword ptr [rbp+180h+var_1B8]
        vaddss  xmm2, xmm1, dword ptr [rsp+280h+outEyePoint]
        vmulss  xmm1, xmm3, dword ptr [rbp+180h+var_1B8+4]
      }
      v70 = player->handler;
      __asm
      {
        vmovss  xmm0, cs:__real@c1400000
        vmovss  [rbp+180h+var_1E8], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+280h+outEyePoint+4]
        vmulss  xmm1, xmm3, dword ptr [rbp+180h+var_1B8+8]
        vmovss  xmm3, cs:__real@3f800000
        vmovss  [rbp+180h+var_1E4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+280h+outEyePoint+8]
        vmovss  [rbp+180h+var_1E0], xmm2
        vmovss  dword ptr [rsp+280h+fmt], xmm0
      }
      ((void (__fastcall *)(const BgHandler *, int *, tmat33_t<vec3_t> *))v70->DebugCone)(v70, v89, &outClampedEyeBasis);
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
  char v17; 
  bool v24; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  tmat33_t<vec3_t> dst; 
  vec3_t outMountUpDir; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm0, [rsp+0F8h+edgeAngleRad]
    vmulss  xmm3, xmm0, cs:__real@42652ee0; degrees
  }
  _RBX = outCapsulePoint;
  _RBP = edge;
  _RDI = player;
  RotatePointAroundVector(dst.m, planeNormal, zeroAngleDir, *(float *)&_XMM3);
  __asm
  {
    vmovsd  xmm0, qword ptr cs:worldZ_0
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovsd  qword ptr [rsp+0F8h+v0], xmm0
    vmovss  xmm0, dword ptr [rdi+5Ch]
    vandps  xmm0, xmm0, xmm6
    vsubss  xmm1, xmm0, cs:__real@3f800000
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, cs:__real@3a83126f
  }
  dst.m[2].v[2] = worldZ_0.v[2];
  if ( !v17 )
  {
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1807, ASSERT_TYPE_ASSERT, "(Vec3IsParallel( worldZ, player.worldBasis[2] ))", (const char *)&queryFormat, "Vec3IsParallel( worldZ, player.worldBasis[2] )");
    v17 = 0;
    if ( v24 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, dword ptr [rsp+0F8h+v0]
    vmovss  xmm3, dword ptr [rsp+0F8h+dst]
    vmovss  xmm5, dword ptr [rsp+0F8h+v0+4]
    vmovss  xmm4, dword ptr [rsp+0F8h+dst+4]
    vmovss  xmm8, dword ptr [rsp+0F8h+v0+8]
    vmulss  xmm1, xmm7, xmm3
    vmulss  xmm0, xmm5, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm8, dword ptr [rsp+0F8h+dst+8]
    vaddss  xmm0, xmm2, xmm0
    vandps  xmm1, xmm0, xmm6
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( !v17 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+0F8h+dst+8]
      vcvtss2sd xmm2, xmm4, xmm4
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0F8h+var_A0], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0F8h+var_A8], xmm1
      vmovsd  [rsp+0F8h+var_B0], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0F8h+var_B8], xmm3
      vcvtss2sd xmm4, xmm8, xmm8
      vmovsd  [rsp+0F8h+var_C0], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+0F8h+var_C8], xmm5
      vcvtss2sd xmm6, xmm7, xmm7
      vmovsd  [rsp+0F8h+var_D0], xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1808, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[2], axis[0] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v64, v65, v66, v67, v68, v69, v70) )
      __debugbreak();
  }
  Vec3Cross(&dst.m[2], dst.m, &dst.m[1]);
  BG_ContextMount_GetMountUpVector((const ContextMountType)_RBP->type, &dst, &outMountUpDir);
  __asm
  {
    vmovss  xmm7, [rsp+0F8h+edgeToEyeAbove]
    vmulss  xmm1, xmm7, dword ptr [rsp+0F8h+outMountUpDir]
    vaddss  xmm3, xmm1, dword ptr [rbp+30h]
    vmovss  xmm0, [rsp+0F8h+edgeToEyeForward]
    vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm7, dword ptr [rsp+0F8h+outMountUpDir+4]
    vmulss  xmm2, xmm6, dword ptr [rsp+0F8h+dst]
    vaddss  xmm0, xmm2, xmm3
    vmulss  xmm2, xmm6, dword ptr [rsp+0F8h+dst+4]
    vmovss  dword ptr [rbx], xmm3
    vaddss  xmm4, xmm1, dword ptr [rbp+34h]
    vmulss  xmm1, xmm6, dword ptr [rsp+0F8h+dst+8]
    vmovss  dword ptr [rbx+4], xmm4
    vmovss  xmm5, dword ptr [rbp+38h]
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm0, xmm2, xmm4
    vmulss  xmm2, xmm7, dword ptr [rsp+0F8h+outMountUpDir+8]
    vaddss  xmm3, xmm2, xmm5
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  dword ptr [rbx+4], xmm0
  }
  ProjectPointOnPlane(outCapsulePoint, &_RDI->origin, &_RDI->worldBasis.m[2], outCapsulePoint);
  _R11 = &v73;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
PM_ContextMount_EmitAdjacentEdgeForViewangles
==============
*/
bool PM_ContextMount_EmitAdjacentEdgeForViewangles(const MountPlayerProperties *player, const MountEdgeProperties *edge, const int edgeScoreOrdinal, const int recurseCount, ContextMountTransitionType *inOutTransType)
{
  EdgeId outNextEdge; 
  EdgeId outPrevEdge; 
  MountEdgeProperties v23; 
  EdgeTransitionData outTransitionData; 
  MountEdgeProperties edgea; 

  _RBX = edge;
  EdgeId::Clear(&outPrevEdge);
  EdgeId::Clear(&outNextEdge);
  PM_ContextMount_CalcAdjacentEdges(player->handler, _RBX, &outPrevEdge, &outNextEdge);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rbp+80h+edge.normal], ymm0
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rbp+80h+edge.normalFaceIndex], ymm0
    vmovups ymmword ptr [rbp+80h+edge.below+8], ymm1
  }
  if ( EdgeId::IsValid(&outNextEdge) && *inOutTransType == MOUNT_TRANSITION_TYPE_FORWARD )
    MountEdgeProperties::TransitionToAdjacent(&edgea, player->handler, outNextEdge, 0);
  if ( PM_ContextMount_CalcEdgeTransitionAngles(player, &edgea, &outTransitionData) )
  {
    __asm
    {
      vmovss  xmm1, [rbp+80h+outTransitionData.playerAngleRad]
      vmovss  xmm0, [rbp+80h+outTransitionData.transitionBackAngleRad]
      vcomiss xmm0, xmm1
      vcomiss xmm1, [rbp+80h+outTransitionData.transitionForwardAngleRad]
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups [rsp+180h+var_140], ymm0
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups [rbp+80h+var_100], ymm0
      vmovups [rsp+180h+var_120], ymm1
    }
    PM_ContextMount_DebugFailedEdge(player, &v23, edgeScoreOrdinal, recurseCount, "edge angle too shallow");
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups [rsp+180h+var_140], ymm0
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups [rbp+80h+var_100], ymm0
      vmovups [rsp+180h+var_120], ymm1
    }
    PM_ContextMount_DebugFailedEdge(player, &v23, edgeScoreOrdinal, recurseCount, "can't calc transition");
  }
  return 0;
}

/*
==============
PM_ContextMount_FindMountEdge_Initial
==============
*/
__int64 PM_ContextMount_FindMountEdge_Initial(const MountPlayerProperties *player, MountSurfaceDetailedProperties *outSurfaceDetail)
{
  bool v28; 
  const dvar_t *v29; 
  int integer; 
  const dvar_t *v31; 
  bool v32; 
  float *v33; 
  char v34; 
  const dvar_t *v68; 
  bool v72; 
  const dvar_t *v73; 
  __int64 v93; 
  unsigned __int64 v106; 
  int v107; 
  __int64 v108; 
  EdgePropertyTuple *v111; 
  __int64 v112; 
  int v114; 
  unsigned __int8 v120; 
  __int64 result; 
  int v132; 
  int resultPoolSize; 
  int outCount[2]; 
  float *resultDistancePool; 
  __int64 v148; 
  unsigned __int64 outResultCount; 
  __int64 relativeYawClampRad; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v151; 
  __int64 v152; 
  vec3_t outProjectedPoint; 
  EdgeFrustumQueryDefinition definition; 
  tmat43_t<vec3_t> v1; 
  MountEdgeProperties v156; 
  EdgeFrustumQueryShape shape; 
  EdgeOctreeQueryFrustum v158; 
  float resultFractionPool[6]; 
  EdgeId resultIdPool[6]; 
  char v161; 
  EdgePropertyTuple outEdgeProperties[6]; 
  char v163; 
  void *retaddr; 

  _RAX = &retaddr;
  v152 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _RDI = player;
  if ( !player->handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2388, ASSERT_TYPE_ASSERT, "( player.handler ) != ( nullptr )", "%s != %s\n\t%p, %p", "player.handler", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !_RDI->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2389, ASSERT_TYPE_ASSERT, "( player.ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "player.ps", "nullptr", NULL, NULL) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_FindMountEdge_Initial");
  _RBX = DCONST_DVARMPFLT_mount_tuning_query_distance;
  if ( !DCONST_DVARMPFLT_mount_tuning_query_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm11, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mount_tuning_query_halfwidth_near;
  if ( !DCONST_DVARFLT_mount_tuning_query_halfwidth_near && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_halfwidth_near") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm12, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mount_tuning_query_halfheight_near;
  if ( !DCONST_DVARFLT_mount_tuning_query_halfheight_near && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_halfheight_near") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm10, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mount_tuning_query_halfwidth_far;
  if ( !DCONST_DVARFLT_mount_tuning_query_halfwidth_far && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_halfwidth_far") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mount_tuning_query_halfheight_far;
  if ( !DCONST_DVARFLT_mount_tuning_query_halfheight_far && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_halfheight_far") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mount_tuning_query_bias_centerline;
  if ( !DCONST_DVARFLT_mount_tuning_query_bias_centerline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_bias_centerline") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm14, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mount_tuning_query_bias_up;
  if ( !DCONST_DVARFLT_mount_tuning_query_bias_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_bias_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm13, dword ptr [rbx+28h] }
  v28 = PM_GetEffectiveStance(_RDI->ps) == PM_EFF_STANCE_DEFAULT && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->ps->pm_flags, ACTIVE, 0x1Du);
  outResultCount = 0i64;
  v29 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  integer = v29->current.integer;
  LODWORD(v148) = integer;
  v31 = DCONST_DVARBOOL_mount_tuning_query_draw_results;
  if ( !DCONST_DVARBOOL_mount_tuning_query_draw_results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_draw_results") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  v32 = v31->current.enabled || integer == 1;
  LOBYTE(outCount[0]) = v32;
  v33 = (float *)&v161;
  if ( !v32 )
    v33 = NULL;
  resultDistancePool = v33;
  _RBX = (__int64)_RDI->handler->GetEdgeQueryCache(_RDI->handler, (unsigned int)_RDI->ps->clientNum);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+58h]
    vmovss  xmm2, dword ptr [rdi+54h]
    vmovss  xmm4, dword ptr [rdi+5Ch]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm4, xmm3
    vmovss  xmm7, cs:__real@3f800000
    vsubss  xmm0, xmm0, xmm7
    vandps  xmm0, xmm0, xmm3
    vmovss  xmm5, cs:__real@3a83126f
    vcomiss xmm0, xmm5
  }
  if ( !v34 )
    goto LABEL_79;
  __asm
  {
    vmulss  xmm1, xmm1, dword ptr [rcx+4]
    vmulss  xmm0, xmm2, dword ptr [rcx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rcx+8]
    vaddss  xmm0, xmm2, xmm1
    vandps  xmm0, xmm0, xmm3
    vsubss  xmm0, xmm0, xmm7
    vandps  xmm0, xmm0, xmm3
    vcomiss xmm0, xmm5
  }
  if ( v34 )
    goto LABEL_79;
  ProjectPointOnPlane(_RDI->eyeBasis.m, &_RDI->worldBasis.m[2], &outProjectedPoint);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+710h+outProjectedPoint]
    vmulss  xmm1, xmm5, xmm5
    vmovss  xmm6, dword ptr [rbp+710h+outProjectedPoint+4]
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm4, dword ptr [rbp+710h+outProjectedPoint+8]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm7, xmm0
    vmovss  [rsp+810h+outCount+4], xmm1
    vdivss  xmm2, xmm7, xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+710h+outProjectedPoint], xmm0
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+710h+outProjectedPoint+4], xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+710h+outProjectedPoint+8], xmm0
  }
  if ( !BG_GetSuitDef(_RDI->ps->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2448, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v68 = DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_stand;
  if ( !DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_stand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_ideal_height_offset_stand") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v68);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r12+200h]
    vaddss  xmm6, xmm0, dword ptr [r14+28h]
  }
  v72 = !v28;
  if ( !v28 )
  {
    v73 = DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_crouch;
    if ( !DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_crouch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_ideal_height_offset_crouch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v73);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r12+204h]
      vaddss  xmm6, xmm0, dword ptr [r14+28h]
    }
  }
  __asm
  {
    vmovss  [rbp+710h+definition.nearHalfWidth], xmm12
    vmovss  [rbp+710h+definition.nearHalfHeight], xmm10
    vmovss  [rbp+710h+definition.farHalfWidth], xmm9
    vmovss  [rbp+710h+definition.farHalfHeight], xmm8
    vmovss  xmm0, cs:mountNearDist
    vmovss  [rbp+710h+definition.nearDist], xmm0
    vmovss  [rbp+710h+definition.farDist], xmm11
    vucomiss xmm12, dword ptr [rbx+18h]
  }
  if ( !v72 )
    goto LABEL_63;
  __asm { vucomiss xmm10, dword ptr [rbx+1Ch] }
  if ( !v72 )
    goto LABEL_63;
  __asm { vucomiss xmm9, dword ptr [rbx+20h] }
  if ( !v72 )
    goto LABEL_63;
  __asm { vucomiss xmm8, dword ptr [rbx+24h] }
  if ( !v72 )
    goto LABEL_63;
  __asm { vucomiss xmm0, dword ptr [rbx+28h] }
  if ( !v72 )
    goto LABEL_63;
  __asm { vucomiss xmm11, dword ptr [rbx+2Ch] }
  if ( !v72 )
  {
LABEL_63:
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+710h+definition.nearHalfWidth]
      vmovups xmmword ptr [rbx+18h], xmm0
      vmovsd  xmm1, qword ptr [rbp+710h+definition.nearDist]
      vmovsd  qword ptr [rbx+28h], xmm1
    }
    EdgeFrustumQueryShape::Calculate((EdgeFrustumQueryShape *)(_RBX + 48), &definition);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+710h+outProjectedPoint]
    vmovss  dword ptr [rbp+710h+v1], xmm0
    vmovss  xmm1, dword ptr [rbp+710h+outProjectedPoint+4]
    vmovss  dword ptr [rbp+710h+v1+4], xmm1
    vmovss  xmm0, dword ptr [rbp+710h+outProjectedPoint+8]
    vmovss  dword ptr [rbp+710h+v1+8], xmm0
    vmovss  xmm1, dword ptr [rdi+54h]
    vmovss  dword ptr [rbp+710h+v0], xmm1
    vmovss  xmm0, dword ptr [rdi+58h]
    vmovss  dword ptr [rbp+710h+v0+4], xmm0
    vmovss  xmm1, dword ptr [rdi+5Ch]
    vmovss  dword ptr [rbp+710h+v0+8], xmm1
  }
  Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+54h]
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  [rbp+710h+var_72C], xmm1
    vmulss  xmm2, xmm6, dword ptr [rdi+58h]
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  [rbp+710h+var_728], xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+5Ch]
    vaddss  xmm0, xmm1, dword ptr [rdi+8]
    vmovss  [rbp+710h+var_724], xmm0
  }
  _RAX = _RBX + 48;
  _RCX = &shape;
  v93 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (EdgeFrustumQueryShape *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX += 128i64;
    --v93;
  }
  while ( v93 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm3, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm3
  }
  EdgeFrustumQueryShape::Transform(&shape, &v1);
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v158, &shape);
  __asm { vmovaps xmm1, xmm14; centerBias }
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v158, *(float *)&_XMM1);
  __asm { vmovaps xmm2, xmm13; bias }
  EdgeOctreeQueryFrustum::SetAxisBias(&v158, &_RDI->worldBasis.m[2], *(float *)&_XMM2);
  PM_ContextMount_BuildClipPlanes(_RDI, &v158);
  v151.m_hint = 16777208;
  v151.m_flags = 1;
  v151.m_bucket = MOUNT;
  v151.m_queryShape = &v158;
  v151.m_hint = *(_DWORD *)(_RBX + 20);
  EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v151, _RDI->handler, resultIdPool, resultFractionPool, resultDistancePool, 6ui64, &outResultCount, (unsigned int *)(_RBX + 20));
  v106 = outResultCount;
  if ( LOBYTE(outCount[0]) )
  {
    __asm { vmovss  dword ptr [rsp+810h+resultPoolSize], xmm11 }
    ((void (__fastcall *)(const BgHandler *, unsigned __int64, EdgeId *, float *, float *, int, _DWORD))_RDI->handler->DebugEdgeQueryResults)(_RDI->handler, outResultCount, resultIdPool, resultFractionPool, resultDistancePool, resultPoolSize, 0);
  }
  v107 = 0;
  if ( !v106 )
  {
LABEL_79:
    v120 = 0;
    goto LABEL_80;
  }
  v108 = 0i64;
  _R13 = resultFractionPool;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  while ( 1 )
  {
    v111 = outEdgeProperties;
    v112 = 6i64;
    do
    {
      EdgePropertyTuple::EdgePropertyTuple(v111++);
      --v112;
    }
    while ( v112 );
    outCount[1] = 0;
    __asm { vmovss  xmm2, dword ptr [r13+0]; fraction }
    PM_ContextMount_BuildCandidatesFromEdgeId(_RDI, &resultIdPool[v108], *(const float *)&_XMM2, v107, outEdgeProperties, &outCount[1]);
    v114 = 0;
    if ( outCount[1] > 0 )
      break;
LABEL_78:
    ++v107;
    ++_R13;
    v108 = v107;
    if ( v107 >= outResultCount )
      goto LABEL_79;
  }
  _RBX = outEdgeProperties;
  while ( !PM_ContextMount_IsValidEdge_Detail(_RDI, &_RBX->edge, 1, 0, v107, _RBX->recurseCount) )
  {
LABEL_77:
    ++v114;
    ++_RBX;
    if ( v114 >= outCount[1] )
      goto LABEL_78;
  }
  EdgeId::Clear((EdgeId *)&resultDistancePool);
  relativeYawClampRad = 0i64;
  __asm { vmovaps xmm3, xmm6; transitionFraction }
  PM_ContextMount_SetDetailedProperties(_RDI, &_RBX->edge, (const EdgeId *)&resultDistancePool, *(float *)&_XMM3, MOUNT_TRANSITION_TYPE_NONE, (float *)&relativeYawClampRad, (ContextMountSurfFlags)0, outSurfaceDetail);
  if ( !PM_ContextMount_CalcFinalClampAngles(_RDI, &_RBX->edge, outSurfaceDetail) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rbp+710h+var_720.m_edgeIndex], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups [rbp+710h+var_700], ymm1
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups [rbp+710h+var_6E0], ymm0
    }
    PM_ContextMount_DebugFailedEdge(_RDI, &v156, v107, _RBX->recurseCount, "failed final clamp");
    goto LABEL_77;
  }
  if ( (_DWORD)v148 == 1 )
  {
    PM_ContextMount_DebugValidEdge(_RDI, outSurfaceDetail, &colorGreen, &colorCyan, v107, _RBX->recurseCount, "best");
    v132 = v114 + 1;
    if ( v132 < outCount[1] )
    {
      _RBX = &outEdgeProperties[v132].edge.id;
      __asm
      {
        vmovss  xmm9, [rsp+810h+var_79C]
        vmovss  xmm10, [rsp+810h+relativeYawClampRad]
        vmovss  xmm7, cs:__real@c3340000
        vmovss  xmm8, cs:__real@40c90fdb
      }
      do
      {
        EdgeId::Clear((EdgeId *)&resultDistancePool);
        __asm
        {
          vmovss  dword ptr [rbp+710h+var_700+18h], xmm7
          vmovss  dword ptr [rbp+710h+var_700+1Ch], xmm7
          vmovups xmm0, cs:__xmm@00000000000000004334000043340000
          vmovups xmmword ptr [rbp+710h+var_6E0], xmm0
          vmovss  dword ptr [rbp+710h+var_6E0+10h], xmm6
          vmovss  dword ptr [rbp+710h+var_6E0+14h], xmm6
        }
        LODWORD(v156.normal.v[0]) = _RBX[-1].m_entityIndex;
        *(EdgeId *)&v156.normal.y = *_RBX;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  [rbp+710h+var_720.m_entityIndex+8], xmm0
        }
        LODWORD(v156.parallel.v[1]) = truncate_cast<unsigned int,unsigned __int64>(*(_QWORD *)&_RBX[-2].m_entityIndex);
        EdgeId::Clear((EdgeId *)&v156.parallel.z);
        __asm { vmovss  dword ptr [rbp+710h+var_700+10h], xmm6 }
        v156.point.v[1] = 0.0;
        __asm { vmovaps xmm0, xmm6; value }
        *(double *)&_XMM0 = BG_ContextMount_QuantizeFloat01Byte(*(float *)&_XMM0);
        __asm { vmovss  [rbp+710h+var_720.m_entityIndex+18h], xmm0 }
        v156.below.v[2] = 0.0;
        __asm
        {
          vmovaps xmm1, xmm8; maxAbsValueSize
          vmovaps xmm0, xmm10; value
        }
        LODWORD(v156.otherNormal.v[0]) = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
        __asm
        {
          vmovaps xmm1, xmm8; maxAbsValueSize
          vmovaps xmm0, xmm9; value
        }
        LODWORD(v156.otherNormal.v[1]) = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
        LOBYTE(v156.otherNormal.z) = 0;
        if ( PM_ContextMount_CalcFinalClampAngles(_RDI, (const MountEdgeProperties *)&_RBX[-10].m_entityIndex, (MountSurfaceDetailedProperties *)&v156) )
          PM_ContextMount_DebugValidEdge(_RDI, (const MountSurfaceDetailedProperties *)&v156, &colorDkGreen, &colorDkCyan, v107, _RBX[3].m_edgeIndex, "candidate");
        ++v132;
        _RBX += 13;
      }
      while ( v132 < outCount[1] );
    }
  }
  v120 = 1;
LABEL_80:
  Sys_ProfEndNamedEvent();
  result = v120;
  _R11 = &v163;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
  return result;
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
  EdgeQueryCache *v14; 
  char v22; 
  char v23; 
  int v25; 
  int v26; 
  EdgeId *p_resultIdPool; 
  int v28; 
  unsigned int normalFaceIndex; 
  EdgeId id; 
  const BgHandler *handler; 
  ContextMountTransitionType transitionType; 
  char v37; 
  ContextMountSurfFlags flags; 
  ContextMountSurfFlags v39; 
  const char *v43; 
  unsigned __int8 v47; 
  __int64 result; 
  unsigned int *outHintNodeIndex; 
  ContextMountSurfFlags inOutSurfFlags[8]; 
  float inOutTransitionFraction[2]; 
  ContextMountTransitionType inOutTransitionType[2]; 
  EdgeId inOutTransId; 
  EdgeOctreeQuery<EdgeOctreeQuerySphere> v56; 
  __int64 v57; 
  MountEdgeProperties v58; 
  int v59[4]; 
  MountEdgeProperties edge; 
  MountSurfaceProperties mountSurface; 
  vec3_t outExtrapolatedPivotPoint; 
  EdgeOctreeQuerySphere v63; 
  float resultFractionPool[6]; 
  EdgeId resultIdPool; 
  void *retaddr; 

  _RAX = &retaddr;
  v57 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  if ( !player->handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2570, ASSERT_TYPE_ASSERT, "( player.handler ) != ( nullptr )", "%s != %s\n\t%p, %p", "player.handler", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !player->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2571, ASSERT_TYPE_ASSERT, "( player.ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "player.ps", "nullptr", NULL, NULL) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_FindMountEdge_Maintain");
  ps = player->ps;
  p_mountState = &ps->mountState;
  v14 = player->handler->GetEdgeQueryCache(player->handler, (unsigned int)ps->clientNum);
  MountSurfaceProperties::Initialize(&mountSurface, player->handler, &p_mountState->surface);
  if ( !PM_ContextMount_UpdateMountPivotPoint(player, &mountSurface, prevEyeBasis, &outExtrapolatedPivotPoint) )
    goto LABEL_35;
  if ( mountSurface.id.m_entityIndex < 0x800 && player->handler->IsEntAttachedToVehicle((BgHandler *)player->handler, mountSurface.id.m_entityIndex, (int *)inOutTransitionFraction) )
  {
    if ( player->handler->GetEntityAntilagVelocity((BgHandler *)player->handler, LODWORD(inOutTransitionFraction[0]), player->ps, (vec3_t *)v59) )
    {
      __asm
      {
        vmovss  xmm0, [rbp+210h+var_220]
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm1, [rbp+210h+var_21C]
        vmulss  xmm2, xmm1, xmm1
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, [rbp+210h+var_218]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm6, xmm4, xmm1
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_edge_max_velocity_sqr, "mount_edge_max_velocity_sqr");
      __asm { vcomiss xmm6, xmm0 }
      if ( !(v22 | v23) )
        goto LABEL_35;
    }
  }
  __asm { vmovss  xmm2, cs:sphereRadius; radius }
  EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(&v63, &outExtrapolatedPivotPoint, *(float *)&_XMM2);
  PM_ContextMount_BuildClipPlanes(player, &v63);
  v56.m_hint = 16777208;
  v56.m_flags = 1;
  v56.m_bucket = MOUNT;
  v56.m_queryShape = &v63;
  v56.m_hint = v14->mountHintNode;
  *(_QWORD *)inOutTransitionFraction = 0i64;
  EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(&v56, player->handler, &resultIdPool, resultFractionPool, NULL, 6ui64, (unsigned __int64 *)inOutTransitionFraction, &v14->mountHintNode);
  v25 = -1;
  v26 = 0;
  if ( !*(_QWORD *)inOutTransitionFraction )
    goto LABEL_35;
  p_resultIdPool = &resultIdPool;
  do
  {
    v28 = v26;
    if ( *p_resultIdPool != *(_QWORD *)&mountSurface.id )
      v28 = v25;
    v25 = v28;
    ++v26;
    ++p_resultIdPool;
  }
  while ( (unsigned __int64)v26 < *(_QWORD *)inOutTransitionFraction );
  if ( v28 < 0 )
    goto LABEL_35;
  edge.isInitialized = 0;
  EdgeId::Clear(&edge.id);
  normalFaceIndex = mountSurface.normalFaceIndex;
  __asm { vmovss  xmm6, [rbp+210h+mountSurface.baseclass_0.fraction] }
  id = mountSurface.id;
  handler = player->handler;
  edge.id = mountSurface.id;
  __asm { vmovss  [rbp+210h+edge.fraction], xmm6 }
  edge.normalFaceIndex = mountSurface.normalFaceIndex;
  edge.type = mountSurface.type;
  __asm { vmovaps xmm2, xmm6; fraction }
  Edge_CalculatePoint(handler, mountSurface.id, *(float *)&_XMM2, &edge.point);
  *(double *)&_XMM0 = Edge_CalculateOpenAngleRad(id);
  __asm
  {
    vmovss  [rbp+210h+edge.openAngleRad], xmm0
    vmovaps xmm2, xmm6; fraction
  }
  Edge_CalculateVectors(handler, id, *(float *)&_XMM2, normalFaceIndex, &edge.normal, &edge.parallel, &edge.below, &edge.otherNormal);
  edge.isInitialized = 1;
  inOutTransId = mountSurface.adjId;
  __asm
  {
    vmovss  xmm7, [rbp+210h+mountSurface.baseclass_0.transitionFraction]
    vmovss  [rsp+310h+inOutTransitionFraction], xmm7
  }
  transitionType = mountSurface.transitionType;
  inOutTransitionType[0] = mountSurface.transitionType;
  if ( BG_ContextMount_IsActive(player->ps) && (p_mountState->flags & 1) == 0 )
  {
    v37 = 0;
    goto LABEL_26;
  }
  if ( mountSurface.transitionType )
    goto LABEL_24;
  v37 = 0;
  if ( !PM_ContextMount_ShouldCheckTransitions(player, (const ContextMountType)mountSurface.type, 0) )
    goto LABEL_26;
  if ( PM_ContextMount_CheckForStartTransition(player, &edge, &inOutTransId, inOutTransitionType) )
  {
LABEL_24:
    PM_ContextMount_UpdateTransition(pml, player, &edge, &inOutTransId, inOutTransitionFraction, inOutTransitionType);
    v37 = 1;
    __asm { vmovss  xmm7, [rsp+310h+inOutTransitionFraction] }
  }
  transitionType = inOutTransitionType[0];
LABEL_26:
  flags = p_mountState->surface.flags;
  if ( transitionType )
    v39 = flags | 1;
  else
    v39 = flags & 0xFE;
  inOutSurfFlags[0] = v39;
  __asm { vmovss  xmm1, cs:__real@40c90fdb; maxAbsValueSize }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(p_mountState->surface.packedRelYawClamp[0], *(float *)&_XMM1, 9u);
  __asm
  {
    vmovss  [rsp+310h+inOutTransitionFraction], xmm0
    vmovss  xmm1, cs:__real@40c90fdb; maxAbsValueSize
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(p_mountState->surface.packedRelYawClamp[1], *(float *)&_XMM1, 9u);
  __asm { vmovss  [rsp+310h+inOutTransitionFraction+4], xmm0 }
  if ( !v37 )
  {
    if ( !PM_ContextMount_SweepYawClamp(pml, player, &edge, inOutSurfFlags, inOutTransitionFraction) )
      goto LABEL_35;
    v39 = inOutSurfFlags[0];
  }
  __asm { vmovaps xmm3, xmm7; transitionFraction }
  PM_ContextMount_SetDetailedProperties(player, &edge, &inOutTransId, *(float *)&_XMM3, transitionType, inOutTransitionFraction, v39, outSurfaceDetail);
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
      v47 = 1;
      goto LABEL_36;
    }
    v43 = "failed to find edge";
  }
  else
  {
    v43 = "exited final clamp";
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+210h+edge.normal]
    vmovups [rbp+210h+var_280], ymm0
    vmovups ymm0, ymmword ptr [rbp+210h+edge.normalFaceIndex]
    vmovups ymm1, ymmword ptr [rbp+20h]
    vmovups [rbp+210h+var_240], ymm0
    vmovups [rbp+210h+var_260], ymm1
  }
  PM_ContextMount_DebugFailedEdge(player, &v58, 0, 0, v43);
LABEL_35:
  v47 = 0;
LABEL_36:
  Sys_ProfEndNamedEvent();
  result = v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+310h+var_58+8]
    vmovaps xmm7, [rsp+310h+var_68+8]
  }
  return result;
}

/*
==============
PM_ContextMount_GetEdgeToCylinderDistance
==============
*/
void PM_ContextMount_GetEdgeToCylinderDistance(const ContextMountType *type, const Weapon *weapon, const bool isAlternate, float *outEdgeToCylinderForward, float *outEdgeToCylinderAbove)
{
  _RBX = outEdgeToCylinderForward;
  BG_GetMountEdgeToEyeDistance(*type, weapon, isAlternate, outEdgeToCylinderForward, outEdgeToCylinderAbove);
  _RDI = DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min;
  if ( !DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_cylinder_forward_distance_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmaxss  xmm1, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm1
  }
}

/*
==============
PM_ContextMount_GetEdgeType
==============
*/
__int64 PM_ContextMount_GetEdgeType(const vec3_t *entityUp, const tmat33_t<vec3_t> *eyeBasis, const vec3_t *edgeParallelVec, const vec3_t *edgeBelowVec)
{
  char v11; 
  char v12; 
  __int64 result; 
  char v25; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RSI = eyeBasis;
  *(double *)&_XMM0 = AngleBetween(entityUp, edgeParallelVec);
  _RBX = DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope;
  __asm
  {
    vsubss  xmm6, xmm0, cs:__real@42b40000
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( !DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_top_mount_max_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v11 | v12 )
  {
    result = 1i64;
  }
  else
  {
    _RBX = DCONST_DVARFLT_mount_tuning_side_mount_min_slope;
    if ( !DCONST_DVARFLT_mount_tuning_side_mount_min_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_side_mount_min_slope") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( v11 )
    {
      result = 0i64;
    }
    else
    {
      if ( edgeBelowVec == (const vec3_t *)&v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+10h]
        vmulss  xmm3, xmm0, dword ptr [rdi+4]
        vmovss  xmm1, dword ptr [rsi+0Ch]
        vmulss  xmm2, xmm1, dword ptr [rdi]
        vmovss  xmm0, dword ptr [rsi+14h]
        vmulss  xmm1, xmm0, dword ptr [rdi+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm2, xmm0
      }
      result = 3i64;
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  return result;
}

/*
==============
PM_ContextMount_IsValidEdge_Adjacency
==============
*/
char PM_ContextMount_IsValidEdge_Adjacency(const MountPlayerProperties *player, const MountEdgeProperties *edge, int edgeScoreOrdinal, int recurseCount)
{
  MountEdgeProperties v13; 
  vec3_t outBelow; 
  vec3_t outParallel; 
  vec3_t outNormal; 

  __asm { vmovss  xmm2, dword ptr [rdx+54h]; fraction }
  _RBX = edge;
  if ( Edge_CalculateVectors(player->handler, edge->id, *(float *)&_XMM2, &player->worldBasis.m[2], &player->eyeBasis, &outNormal, &outParallel, &outBelow) == edge->normalFaceIndex )
    return 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups [rsp+108h+var_C8], ymm0
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups [rsp+108h+var_88], ymm0
    vmovups [rsp+108h+var_A8], ymm1
  }
  PM_ContextMount_DebugFailedEdge(player, &v13, edgeScoreOrdinal, recurseCount, "wrong normalFaceIndex");
  return 0;
}

/*
==============
PM_ContextMount_IsValidEdge_Detail
==============
*/
__int64 PM_ContextMount_IsValidEdge_Detail(const MountPlayerProperties *player, const MountEdgeProperties *edge, bool isInitialSearch, bool isCheckForTransition, int edgeScoreOrdinal, int recurseCount)
{
  unsigned __int8 v20; 
  char v33; 
  __int64 m_entityIndex; 
  char v67; 
  __int64 result; 
  ContextMountTransitionType transitionType; 
  float relativeYawClampRad; 
  __int64 edgeToEyeAbove; 
  float outForward; 
  EdgeId nextEdge; 
  MountEdgeProperties v75; 
  __int64 v76; 
  vec3_t endPoint; 
  vec3_t outEyePoint; 
  vec3_t outMountUpDir; 
  tmat33_t<vec3_t> outClampedEyeBasis; 
  MountSurfaceDetailedProperties inOutDetailMount; 
  void *retaddr; 

  _RAX = &retaddr;
  v76 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RBX = edge;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_IsValidEdge_Detail");
  if ( isInitialSearch )
  {
    EdgeId::Clear(&nextEdge);
    __asm
    {
      vmovss  xmm0, cs:__real@c3340000
      vmovss  dword ptr [rbp+0C0h+inOutDetailMount.minClampDeg], xmm0
      vmovss  dword ptr [rbp+0C0h+inOutDetailMount.minClampDeg+4], xmm0
      vmovups xmm0, cs:__xmm@00000000000000004334000043340000
      vmovups xmmword ptr [rbp+0C0h+inOutDetailMount.maxClampDeg], xmm0
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rbp+0C0h+inOutDetailMount.maxResistDeg], xmm6
      vmovss  dword ptr [rbp+0C0h+inOutDetailMount.maxResistDeg+4], xmm6
    }
    edgeToEyeAbove = 0i64;
    __asm { vxorps  xmm3, xmm3, xmm3; transitionFraction }
    PM_ContextMount_SetDetailedProperties(player, _RBX, &nextEdge, *(float *)&_XMM3, MOUNT_TRANSITION_TYPE_NONE, (float *)&edgeToEyeAbove, (ContextMountSurfFlags)0, &inOutDetailMount);
    if ( !PM_ContextMount_CalcFinalClampAngles(player, _RBX, &inOutDetailMount) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rsp+1C0h+var_168+8], ymm0
        vmovups ymm1, ymmword ptr [rbx+20h]
        vmovups [rbp+0C0h+var_140], ymm1
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups [rbp+0C0h+var_120], ymm0
      }
      PM_ContextMount_DebugFailedEdge(player, &v75, edgeScoreOrdinal, recurseCount, "failed to calc tempClamp");
      v20 = 0;
      goto LABEL_22;
    }
    __asm
    {
      vmovss  dword ptr [rsp+1C0h+relativeYawClampRad], xmm6
      vmovss  [rsp+1C0h+transitionType], xmm6
    }
    if ( !PM_ContextMount_CalcMountEyePoint(&inOutDetailMount, player->handler, &player->eyeBasis, &player->worldBasis, *(const float *)&transitionType, relativeYawClampRad, &outEyePoint, &outClampedEyeBasis) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rsp+1C0h+var_168+8], ymm0
        vmovups ymm1, ymmword ptr [rbx+20h]
        vmovups [rbp+0C0h+var_140], ymm1
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups [rbp+0C0h+var_120], ymm0
      }
      PM_ContextMount_DebugFailedEdge(player, &v75, edgeScoreOrdinal, recurseCount, "clamped eye parallel up");
      v20 = 0;
      goto LABEL_22;
    }
    if ( (unsigned int)(_RBX->type - 2) <= 1 )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_side_max_viewangle_adjust, "mount_side_max_viewangle_adjust");
      __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; X }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+0C0h+outClampedEyeBasis+4]
        vmulss  xmm4, xmm1, dword ptr [rdi+1Ch]
        vmovss  xmm2, dword ptr [rbp+0C0h+outClampedEyeBasis]
        vmulss  xmm3, xmm2, dword ptr [rdi+18h]
        vaddss  xmm5, xmm4, xmm3
        vmovss  xmm1, dword ptr [rbp+0C0h+outClampedEyeBasis+8]
        vmulss  xmm2, xmm1, dword ptr [rdi+20h]
        vaddss  xmm3, xmm5, xmm2
        vcomiss xmm3, xmm0
      }
      if ( v33 )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx]
          vmovups [rsp+1C0h+var_168+8], ymm0
          vmovups ymm1, ymmword ptr [rbx+20h]
          vmovups [rbp+0C0h+var_140], ymm1
          vmovups ymm0, ymmword ptr [rbx+40h]
          vmovups [rbp+0C0h+var_120], ymm0
        }
        PM_ContextMount_DebugFailedEdge(player, &v75, edgeScoreOrdinal, recurseCount, "extreme viewangle change");
        v20 = 0;
        goto LABEL_22;
      }
    }
    BG_GetMountEdgeToEyeDistance((const ContextMountType)_RBX->type, &player->weapon, player->isAlternate, &outForward, (float *)&edgeToEyeAbove);
    BG_ContextMount_GetMountUpVector((const ContextMountType)_RBX->type, &outClampedEyeBasis, &outMountUpDir);
    __asm
    {
      vmovss  xmm0, [rsp+1C0h+outForward]
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm3, dword ptr [rbp+0C0h+outClampedEyeBasis]
      vaddss  xmm4, xmm2, dword ptr [rbp+0C0h+outEyePoint]
      vmulss  xmm1, xmm3, dword ptr [rbp+0C0h+outClampedEyeBasis+4]
      vaddss  xmm6, xmm1, dword ptr [rbp+0C0h+outEyePoint+4]
      vmulss  xmm0, xmm3, dword ptr [rbp+0C0h+outClampedEyeBasis+8]
      vaddss  xmm3, xmm0, dword ptr [rbp+0C0h+outEyePoint+8]
      vmovss  xmm5, dword ptr [rsp+1C0h+edgeToEyeAbove]
      vmulss  xmm0, xmm5, dword ptr [rbp+0C0h+outMountUpDir]
      vaddss  xmm2, xmm0, xmm4
      vmovss  dword ptr [rbp+0C0h+endPoint], xmm2
      vmulss  xmm0, xmm5, dword ptr [rbp+0C0h+outMountUpDir+4]
      vaddss  xmm2, xmm0, xmm6
      vmovss  dword ptr [rbp+0C0h+endPoint+4], xmm2
      vmulss  xmm0, xmm5, dword ptr [rbp+0C0h+outMountUpDir+8]
      vaddss  xmm2, xmm0, xmm3
      vmovss  dword ptr [rbp+0C0h+endPoint+8], xmm2
    }
    if ( PM_ContextMount_TestRayHit(player, &player->eyeOrigin, &endPoint) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rsp+1C0h+var_168+8], ymm0
        vmovups ymm1, ymmword ptr [rbx+20h]
        vmovups [rbp+0C0h+var_140], ymm1
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups [rbp+0C0h+var_120], ymm0
      }
      PM_ContextMount_DebugFailedEdge(player, &v75, edgeScoreOrdinal, recurseCount, "view obstructed to mount point");
      v20 = 0;
      goto LABEL_22;
    }
    if ( PM_ContextMount_IsViewObstructed(player, _RBX, &outEyePoint, &outClampedEyeBasis) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rsp+1C0h+var_168+8], ymm0
        vmovups ymm1, ymmword ptr [rbx+20h]
        vmovups [rbp+0C0h+var_140], ymm1
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups [rbp+0C0h+var_120], ymm0
      }
      PM_ContextMount_DebugFailedEdge(player, &v75, edgeScoreOrdinal, recurseCount, "view obstructed");
      v20 = 0;
      goto LABEL_22;
    }
  }
  m_entityIndex = _RBX->id.m_entityIndex;
  if ( (unsigned int)m_entityIndex < 0x800 && player->handler->IsEntAttachedToVehicle((BgHandler *)player->handler, m_entityIndex, (int *)&edgeToEyeAbove) )
  {
    if ( player->handler->GetEntityAntilagVelocity((BgHandler *)player->handler, edgeToEyeAbove, player->ps, &endPoint) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C0h+endPoint]
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm1, dword ptr [rbp+0C0h+endPoint+4]
        vmulss  xmm2, xmm1, xmm1
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rbp+0C0h+endPoint+8]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm6, xmm4, xmm1
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_edge_max_velocity_sqr, "mount_edge_max_velocity_sqr");
      __asm { vcomiss xmm6, xmm0 }
      if ( !(v33 | v67) )
        goto LABEL_20;
    }
  }
  if ( (isInitialSearch || isCheckForTransition) && !PM_ContextMount_IsValidEdge_SweepCylinder(player, _RBX, edgeScoreOrdinal, recurseCount) )
LABEL_20:
    v20 = 0;
  else
    v20 = 1;
LABEL_22:
  Sys_ProfEndNamedEvent();
  result = v20;
  __asm { vmovaps xmm6, xmmword ptr [rsp+1C0h+var_38+8] }
  return result;
}

/*
==============
PM_ContextMount_IsValidEdge_Preliminary
==============
*/
__int64 PM_ContextMount_IsValidEdge_Preliminary(const MountPlayerProperties *player, const MountEdgeProperties *edge, bool initialSearch, int edgeScoreOrdinal, int recurseCount, vec3_t *outClampedEyeForward)
{
  char v31; 
  const char *v35; 
  MountEdgeProperties *v36; 
  __int64 result; 
  float fmt; 
  float relativeYawClampRad; 
  float outAbove[2]; 
  __int64 outForward; 
  EdgeId nextEdge; 
  __int64 v76; 
  __int64 v77; 
  _BYTE v78[96]; 
  char inOutDetailMount[96]; 
  tmat33_t<vec3_t> outClampedEyeBasis; 
  vec3_t outEyePoint; 
  char v82; 
  void *retaddr; 

  _RAX = &retaddr;
  v77 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBX = edge;
  _RDI = player;
  _R15 = outClampedEyeForward;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_IsValidEdge_Preliminary");
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsp+1E0h+var_188], xmm0
    vunpcklps xmm1, xmm7, xmm7
    vmovsd  qword ptr [r15], xmm1
  }
  LODWORD(outClampedEyeForward->v[2]) = v76;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vxorps  xmm4, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, dword ptr [rdi+1Ch]
    vmulss  xmm3, xmm2, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+18h]
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vaddss  xmm2, xmm3, xmm1
    vsubss  xmm6, xmm4, xmm2
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  _R12 = DCONST_DVARFLT_mount_tuning_query_max_angle_player;
  if ( !DCONST_DVARFLT_mount_tuning_query_max_angle_player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_query_max_angle_player") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R12);
  __asm
  {
    vmovss  xmm0, dword ptr [r12+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vcomiss xmm6, xmm0 }
  if ( v31 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rbp+0E0h+inOutDetailMount], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rbp+0E0h+inOutDetailMount+20h], ymm1
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups ymmword ptr [rbp+0E0h+inOutDetailMount+40h], ymm0
    }
    v35 = "wrong normal (view)";
    v36 = (MountEdgeProperties *)inOutDetailMount;
  }
  else if ( initialSearch )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rbx+4]
      vmovss  xmm6, dword ptr [rbx]
      vmovss  xmm8, dword ptr [rbx+8]
      vmulss  xmm1, xmm5, dword ptr [rdi+1Ch]
      vmulss  xmm0, xmm6, dword ptr [rdi+18h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rdi+20h]
      vaddss  xmm0, xmm2, xmm1
      vcvtss2sd xmm2, xmm0, xmm0
      vcomisd xmm2, cs:__real@beb0c6f7a0b5ed8d
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rbp+0E0h+inOutDetailMount], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rbp+0E0h+inOutDetailMount+20h], ymm1
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups ymmword ptr [rbp+0E0h+inOutDetailMount+40h], ymm0
    }
    v35 = "wrong side (view)";
    v36 = (MountEdgeProperties *)inOutDetailMount;
  }
  else
  {
    EdgeId::Clear(&nextEdge);
    __asm
    {
      vmovss  xmm0, cs:__real@c3340000
      vmovss  dword ptr [rbp+0E0h+inOutDetailMount+38h], xmm0
      vmovss  dword ptr [rbp+0E0h+inOutDetailMount+3Ch], xmm0
      vmovups xmm0, cs:__xmm@00000000000000004334000043340000
      vmovups xmmword ptr [rbp+0E0h+inOutDetailMount+40h], xmm0
      vmovss  dword ptr [rbp+0E0h+inOutDetailMount+50h], xmm7
      vmovss  dword ptr [rbp+0E0h+inOutDetailMount+54h], xmm7
    }
    outForward = 0i64;
    __asm { vxorps  xmm3, xmm3, xmm3; transitionFraction }
    PM_ContextMount_SetDetailedProperties(_RDI, _RBX, &nextEdge, *(float *)&_XMM3, MOUNT_TRANSITION_TYPE_NONE, (float *)&outForward, (ContextMountSurfFlags)0, (MountSurfaceDetailedProperties *)inOutDetailMount);
    if ( PM_ContextMount_CalcFinalClampAngles(_RDI, _RBX, (MountSurfaceDetailedProperties *)inOutDetailMount) )
    {
      BG_GetMountEdgeToEyeDistance(*(const ContextMountType *)inOutDetailMount, &_RDI->weapon, _RDI->isAlternate, (float *)&outForward, outAbove);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+outAbove]
        vmovss  dword ptr [rsp+1E0h+relativeYawClampRad], xmm0
        vmovss  xmm1, dword ptr [rsp+1E0h+outForward]
        vmovss  dword ptr [rsp+1E0h+fmt], xmm1
      }
      if ( PM_ContextMount_CalcMountEyePoint((const MountSurfaceDetailedProperties *)inOutDetailMount, _RDI->handler, &_RDI->eyeBasis, &_RDI->worldBasis, fmt, relativeYawClampRad, &outEyePoint, &outClampedEyeBasis) )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+0E0h+outClampedEyeBasis]
          vmovss  dword ptr [r15], xmm2
          vmovss  xmm0, dword ptr [rbp+0E0h+outClampedEyeBasis+4]
          vmovss  dword ptr [r15+4], xmm0
          vmovss  xmm3, dword ptr [rbp+0E0h+outClampedEyeBasis+8]
          vmovss  dword ptr [r15+8], xmm3
          vmulss  xmm1, xmm0, dword ptr [rbx+10h]
          vmulss  xmm0, xmm2, dword ptr [rbx+0Ch]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [rbx+14h]
          vaddss  xmm0, xmm2, xmm1
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm0, cs:__real@3f7fbe77
        }
        v35 = "clampedView parallel to edge";
      }
      else
      {
        v35 = "clamped eye parallel up";
      }
    }
    else
    {
      v35 = "tempClamp failed";
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups [rsp+1E0h+var_178+8], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups [rbp+0E0h+var_150], ymm1
      vmovups [rbp+0E0h+var_130], ymm0
    }
    v36 = (MountEdgeProperties *)v78;
  }
  PM_ContextMount_DebugFailedEdge(_RDI, v36, edgeScoreOrdinal, recurseCount, v35);
  Sys_ProfEndNamedEvent();
  result = 0i64;
  _R11 = &v82;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
PM_ContextMount_IsValidEdge_Set
==============
*/
bool PM_ContextMount_IsValidEdge_Set(const MountPlayerProperties *player, const MountEdgeProperties *edge, int edgeScoreOrdinal, int recurseCount)
{
  bool result; 
  const char *v32; 
  char v47; 
  bool v48; 
  char v75; 
  char v77; 
  MountEdgeProperties v83; 
  vec3_t outLineSegment[2]; 

  _RBX = edge;
  _RDI = player;
  if ( !BG_IsMountTypeEnabled(player->ps, &player->weapon, player->isAlternate, (const ContextMountType)edge->type) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups [rsp+140h+var_100], ymm0
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups [rbp+40h+var_C0], ymm0
      vmovups [rsp+140h+var_E0], ymm1
    }
    PM_ContextMount_DebugFailedEdge(_RDI, &v83, edgeScoreOrdinal, recurseCount, "type not enabled");
    return 0;
  }
  if ( BG_ContextMount_IsViewangleTooShallow((const ContextMountType)_RBX->type, &_RDI->eyeBasis, &_RDI->worldBasis.m[2], &_RBX->parallel) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups [rsp+140h+var_100], ymm0
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups [rbp+40h+var_C0], ymm0
      vmovups [rsp+140h+var_E0], ymm1
    }
    PM_ContextMount_DebugFailedEdge(_RDI, &v83, edgeScoreOrdinal, recurseCount, "parallel to view");
    return 0;
  }
  v48 = _RBX->type == MOUNT_TYPE_TOP;
  __asm { vmovaps [rsp+140h+var_40], xmm6 }
  if ( v48 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+34h]
      vsubss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm3, xmm1, dword ptr [rdi+58h]
      vmovss  xmm2, dword ptr [rbx+30h]
      vsubss  xmm0, xmm2, dword ptr [rdi]
      vmulss  xmm1, xmm0, dword ptr [rdi+54h]
      vmovss  xmm2, dword ptr [rbx+38h]
      vsubss  xmm0, xmm2, dword ptr [rdi+8]
    }
    _RSI = DCONST_DVARMPFLT_mount_top_min_height;
    __asm
    {
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm0, dword ptr [rdi+5Ch]
      vaddss  xmm6, xmm4, xmm1
    }
    if ( !DCONST_DVARMPFLT_mount_top_min_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_min_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vcomiss xmm6, dword ptr [rsi+28h] }
    if ( v47 )
      goto LABEL_32;
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_mount_top_max_height, "mount_top_max_height");
    __asm { vcomiss xmm6, xmm0 }
    if ( !(v47 | v48) )
    {
LABEL_32:
      v32 = "invalid height";
      goto LABEL_33;
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mount_top_enforce_distance_besides_edge, "mount_top_enforce_distance_besides_edge") )
    {
      __asm
      {
        vmovaps [rsp+140h+var_50], xmm7
        vmovaps [rsp+140h+var_60], xmm8
        vmovaps [rsp+140h+var_70], xmm9
        vmovaps [rsp+140h+var_80], xmm10
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_mount_top_max_distance_besides_edge, "mount_top_max_distance_besides_edge");
      __asm
      {
        vmulss  xmm9, xmm0, xmm0
        vxorps  xmm10, xmm10, xmm10
        vcomiss xmm9, xmm10
      }
      if ( v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1308, ASSERT_TYPE_ASSERT, "(maxSideDistanceSq >= 0)", (const char *)&queryFormat, "maxSideDistanceSq >= 0") )
        __debugbreak();
      Edge_GetLineSegment(_RDI->handler, _RBX->id, (vec3_t (*)[2])outLineSegment);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+40h+outLineSegment+0Ch]
        vsubss  xmm8, xmm0, dword ptr [rbp+40h+outLineSegment]
        vmovss  xmm1, dword ptr [rbp+40h+outLineSegment+10h]
        vsubss  xmm6, xmm1, dword ptr [rbp+40h+outLineSegment+4]
        vmovss  xmm0, dword ptr [rbp+40h+outLineSegment+14h]
        vsubss  xmm7, xmm0, dword ptr [rbp+40h+outLineSegment+8]
        vmovss  xmm1, dword ptr [rdi+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+40h+outLineSegment+4]
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm1, xmm0, dword ptr [rbp+40h+outLineSegment]
        vmovss  xmm0, dword ptr [rdi+8]
        vmulss  xmm3, xmm2, xmm6
        vmulss  xmm2, xmm1, xmm8
        vsubss  xmm1, xmm0, dword ptr [rbp+40h+outLineSegment+8]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm5, xmm4, xmm2
        vmulss  xmm0, xmm8, xmm8
        vmovaps xmm8, [rsp+140h+var_60]
        vmulss  xmm1, xmm7, xmm7
        vmovaps xmm7, [rsp+140h+var_50]
        vmulss  xmm3, xmm6, xmm6
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm5, xmm10
        vmovaps xmm10, [rsp+140h+var_80]
        vaddss  xmm4, xmm2, xmm1
      }
      if ( !v47 )
        goto LABEL_23;
      __asm
      {
        vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm9
      }
      if ( v47 | v48 )
      {
LABEL_23:
        v75 = 0;
        v47 = 0;
        v48 = 1;
      }
      else
      {
        v75 = 1;
      }
      __asm { vcomiss xmm5, xmm4 }
      if ( v47 | v48 )
        goto LABEL_27;
      __asm
      {
        vsubss  xmm0, xmm5, xmm4
        vcomiss xmm0, xmm9
      }
      if ( v47 | v48 )
LABEL_27:
        v77 = 0;
      else
        v77 = 1;
      __asm { vmovaps xmm9, [rsp+140h+var_70] }
      if ( v75 || v77 )
      {
        v32 = "player too far besides edge";
        goto LABEL_33;
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rdi+54h]
      vmulss  xmm3, xmm0, dword ptr [rdi+58h]
      vmulss  xmm2, xmm1, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rbx+8]
      vmulss  xmm1, xmm0, dword ptr [rdi+5Ch]
    }
    _RSI = DCONST_DVARFLT_mount_tuning_max_wall_slope;
    __asm
    {
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm6, xmm4, xmm1
      vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    if ( !DCONST_DVARFLT_mount_tuning_max_wall_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_max_wall_slope") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+28h]
      vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm { vcomiss xmm6, xmm0 }
    if ( !v47 )
    {
      v32 = "normal parallel entUp";
LABEL_33:
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymm1, ymmword ptr [rbx+20h]
        vmovups [rsp+140h+var_100], ymm0
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups [rbp+40h+var_C0], ymm0
        vmovups [rsp+140h+var_E0], ymm1
      }
      PM_ContextMount_DebugFailedEdge(_RDI, &v83, edgeScoreOrdinal, recurseCount, v32);
      result = 0;
      goto LABEL_34;
    }
  }
  result = 1;
LABEL_34:
  __asm { vmovaps xmm6, [rsp+140h+var_40] }
  return result;
}

/*
==============
PM_ContextMount_IsValidEdge_SweepCylinder
==============
*/
bool PM_ContextMount_IsValidEdge_SweepCylinder(const MountPlayerProperties *player, const MountEdgeProperties *edge, const int edgeScoreOrdinal, const int recurseCount)
{
  const MountPlayerProperties *v14; 
  bool result; 
  bool v24; 
  ContextMountType type; 
  bool v26; 
  const char *v27; 
  char v36; 
  char v37; 
  bool v38; 
  const vec3_t *v56; 
  int clientNum; 
  int v80; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float *outCylinderMidpointHeight; 
  float v96; 
  float outForward; 
  float outAbove; 
  float outFrac; 
  MountEdgeProperties v100; 
  vec3_t point; 
  vec3_t outMountUpDir; 
  vec3_t outMountCylinderGroundPos; 
  tmat33_t<vec3_t> dst; 
  Bounds cylinder; 
  EdgeTransitionData outTransitionData; 

  __asm
  {
    vmovaps [rsp+1D0h+var_70], xmm8
    vmovss  xmm0, dword ptr [rcx+5Ch]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm2, xmm0, cs:__real@3f800000
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3a83126f
  }
  _RDI = edge;
  v14 = player;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1524, ASSERT_TYPE_ASSERT, "(Vec3IsParallel( worldZ, player.worldBasis[2] ))", (const char *)&queryFormat, "Vec3IsParallel( worldZ, player.worldBasis[2] )") )
    __debugbreak();
  BG_GetMountEdgeToEyeDistance((const ContextMountType)_RDI->type, &v14->weapon, v14->isAlternate, &outForward, &outAbove);
  _RBX = DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min;
  if ( !DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_cylinder_forward_distance_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmaxss  xmm2, xmm0, [rsp+1D0h+outForward]; edgeToEyeForward
    vmovss  xmm3, [rsp+1D0h+outAbove]; edgeToEyeAbove
    vmovss  [rsp+1D0h+outForward], xmm2
  }
  PM_ContextMount_CalcMountCylinder(v14, _RDI, *(double *)&_XMM2, *(double *)&_XMM3, &outMountCylinderGroundPos, &v96, &cylinder);
  __asm
  {
    vmovss  xmm8, [rsp+1D0h+var_190]
    vmovss  dword ptr [rsp+1D0h+fmt], xmm8
  }
  if ( !PM_ContextMount_TestCylinderHit(v14, v14->ps->clientNum, &v14->origin, &outMountCylinderGroundPos, fmt, 1, &cylinder, &outFrac) )
  {
    __asm
    {
      vmovaps [rsp+1D0h+var_50], xmm6
      vmovaps [rsp+1D0h+var_60], xmm7
    }
    v24 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_LADDER_AIM|0x80);
    type = _RDI->type;
    v26 = v24;
    if ( type == MOUNT_TYPE_TOP )
    {
      _RBX = DCONST_DVARFLT_mount_tuning_shapecast_min_top_yaw;
      if ( !DCONST_DVARFLT_mount_tuning_shapecast_min_top_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_min_top_yaw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+28h]
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm6, xmm7
      }
      if ( !(v36 | v37) )
      {
        __asm { vxorps  xmm2, xmm6, cs:__xmm@80000000800000008000000080000000; degrees }
        MatrixRotationDeg(&dst, &worldZ, *(float *)&_XMM2);
        RotatePointAroundPoint(&outMountUpDir, &outMountCylinderGroundPos, &_RDI->point, &dst);
        clientNum = v14->ps->clientNum;
        __asm
        {
          vmovss  dword ptr [rsp+1D0h+fmt], xmm8
          vmovss  [rsp+1D0h+var_190], xmm7
        }
        PM_ContextMount_TestCylinderHit(v14, clientNum, &outMountCylinderGroundPos, &outMountUpDir, fmtc, v26, &cylinder, &v96);
        __asm { vmovaps xmm2, xmm6; degrees }
        MatrixRotationDeg(&dst, &worldZ, *(float *)&_XMM2);
        RotatePointAroundPoint(&outMountUpDir, &outMountCylinderGroundPos, &_RDI->point, &dst);
        v80 = v14->ps->clientNum;
        __asm
        {
          vmovss  dword ptr [rsp+1D0h+fmt], xmm8
          vmovss  [rsp+1D0h+var_184], xmm7
        }
        PM_ContextMount_TestCylinderHit(v14, v80, &outMountCylinderGroundPos, &outMountUpDir, fmtd, v26, &cylinder, &outFrac);
        __asm
        {
          vmovss  xmm0, [rsp+1D0h+var_184]
          vaddss  xmm1, xmm0, [rsp+1D0h+var_190]
          vmulss  xmm2, xmm1, xmm6
          vcomiss xmm2, xmm6
        }
        if ( v36 )
        {
          v27 = "top mount sweep failed";
          goto LABEL_28;
        }
      }
    }
    else
    {
      if ( (unsigned int)(type - 2) > 1 )
      {
        LODWORD(outCylinderMidpointHeight) = _RDI->type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1670, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encountered unexpected mount type %i", outCylinderMidpointHeight) )
          __debugbreak();
        result = 0;
        goto LABEL_30;
      }
      if ( !PM_ContextMount_CalcEdgeTransitionAngles(v14, _RDI, &outTransitionData) )
      {
        v27 = "failed capsule angle calc";
LABEL_28:
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymm1, ymmword ptr [rdi+20h]
          vmovups [rsp+1D0h+var_180], ymm0
          vmovups ymm0, ymmword ptr [rdi+40h]
          vmovups [rbp+0D0h+var_140], ymm0
          vmovups [rsp+1D0h+var_160], ymm1
        }
        PM_ContextMount_DebugFailedEdge(v14, &v100, edgeScoreOrdinal, recurseCount, v27);
        result = 0;
LABEL_30:
        __asm
        {
          vmovaps xmm6, [rsp+1D0h+var_50]
          vmovaps xmm7, [rsp+1D0h+var_60]
        }
        goto LABEL_31;
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_shapecast_validity_grace_angle_deg, "mount_tuning_shapecast_validity_grace_angle_deg");
      __asm
      {
        vmovss  xmm4, [rbp+0D0h+outTransitionData.playerAngleRad]
        vmulss  xmm3, xmm0, cs:__real@3c8efa35
        vmovss  xmm0, [rbp+0D0h+outTransitionData.transitionForwardAngleRad]
        vaddss  xmm2, xmm3, [rbp+0D0h+outTransitionData.minAngleRad]
        vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
        vsubss  xmm1, xmm0, xmm3
        vmaxss  xmm6, xmm1, xmm4
        vcomiss xmm6, xmm4
        vminss  xmm5, xmm2, xmm4
      }
      v38 = !(v36 | v37);
      __asm { vcomiss xmm5, xmm4 }
      if ( v36 )
      {
        __asm { vmulss  xmm3, xmm5, cs:__real@42652ee0; degrees }
        RotatePointAroundVector(dst.m, &outTransitionData.planeNormal, &outTransitionData.zeroAngleDir, *(float *)&_XMM3);
        __asm { vmovsd  xmm0, qword ptr cs:worldZ }
        dst.m[2].v[2] = worldZ.v[2];
        __asm { vmovsd  qword ptr [rbp+0D0h+v0], xmm0 }
        Vec3Cross(&dst.m[2], dst.m, &dst.m[1]);
        BG_ContextMount_GetMountUpVector((const ContextMountType)_RDI->type, &dst, &outMountUpDir);
        __asm
        {
          vmovss  xmm4, [rsp+1D0h+outAbove]
          vmovss  xmm0, [rsp+1D0h+outForward]
          vxorps  xmm5, xmm0, xmm7
          vmulss  xmm0, xmm4, dword ptr [rbp+0D0h+outMountUpDir]
          vaddss  xmm3, xmm0, dword ptr [rdi+30h]
          vmulss  xmm1, xmm5, dword ptr [rbp+0D0h+dst]
          vmulss  xmm2, xmm5, dword ptr [rbp+0D0h+dst+4]
          vaddss  xmm0, xmm3, xmm1
          vmulss  xmm1, xmm4, dword ptr [rbp+0D0h+outMountUpDir+4]
          vaddss  xmm3, xmm1, dword ptr [rdi+34h]
          vaddss  xmm1, xmm3, xmm2
          vmulss  xmm2, xmm4, dword ptr [rbp+0D0h+outMountUpDir+8]
          vaddss  xmm3, xmm2, dword ptr [rdi+38h]
          vmovss  dword ptr [rbp+0D0h+point], xmm0
          vmulss  xmm0, xmm5, dword ptr [rbp+0D0h+dst+8]
          vaddss  xmm2, xmm3, xmm0
        }
        v56 = &v14->worldBasis.m[2];
        __asm
        {
          vmovss  dword ptr [rbp+0D0h+point+8], xmm2
          vmovss  dword ptr [rbp+0D0h+point+4], xmm1
        }
        ProjectPointOnPlane(&point, &v14->origin, &v14->worldBasis.m[2], &point);
        __asm { vmovss  dword ptr [rsp+1D0h+fmt], xmm8 }
        if ( PM_ContextMount_TestCylinderHit(v14, v14->ps->clientNum, &outMountCylinderGroundPos, &point, fmta, v26, &cylinder, &v96) )
        {
          v27 = "back capsule sweep failed";
          goto LABEL_28;
        }
      }
      else
      {
        v56 = &v14->worldBasis.m[2];
      }
      if ( v38 )
      {
        __asm { vmulss  xmm3, xmm6, cs:__real@42652ee0; degrees }
        RotatePointAroundVector(dst.m, &outTransitionData.planeNormal, &outTransitionData.zeroAngleDir, *(float *)&_XMM3);
        __asm { vmovsd  xmm0, qword ptr cs:worldZ }
        dst.m[2].v[2] = worldZ.v[2];
        __asm { vmovsd  qword ptr [rbp+0D0h+v0], xmm0 }
        Vec3Cross(&dst.m[2], dst.m, &dst.m[1]);
        BG_ContextMount_GetMountUpVector((const ContextMountType)_RDI->type, &dst, &outMountUpDir);
        __asm
        {
          vmovss  xmm4, [rsp+1D0h+outAbove]
          vmovss  xmm0, [rsp+1D0h+outForward]
          vxorps  xmm5, xmm0, xmm7
          vmulss  xmm0, xmm4, dword ptr [rbp+0D0h+outMountUpDir]
          vaddss  xmm3, xmm0, dword ptr [rdi+30h]
          vmulss  xmm1, xmm5, dword ptr [rbp+0D0h+dst]
          vmulss  xmm2, xmm5, dword ptr [rbp+0D0h+dst+4]
          vaddss  xmm0, xmm3, xmm1
          vmulss  xmm1, xmm4, dword ptr [rbp+0D0h+outMountUpDir+4]
          vaddss  xmm3, xmm1, dword ptr [rdi+34h]
          vaddss  xmm1, xmm3, xmm2
          vmulss  xmm2, xmm4, dword ptr [rbp+0D0h+outMountUpDir+8]
          vaddss  xmm3, xmm2, dword ptr [rdi+38h]
          vmovss  dword ptr [rbp+0D0h+point], xmm0
          vmulss  xmm0, xmm5, dword ptr [rbp+0D0h+dst+8]
          vaddss  xmm2, xmm3, xmm0
          vmovss  dword ptr [rbp+0D0h+point+8], xmm2
          vmovss  dword ptr [rbp+0D0h+point+4], xmm1
        }
        ProjectPointOnPlane(&point, &v14->origin, v56, &point);
        __asm { vmovss  dword ptr [rsp+1D0h+fmt], xmm8 }
        if ( PM_ContextMount_TestCylinderHit(v14, v14->ps->clientNum, &outMountCylinderGroundPos, &point, fmtb, v26, &cylinder, &v96) )
        {
          v27 = "forward capsule sweep failed";
          goto LABEL_28;
        }
      }
    }
    result = 1;
    goto LABEL_30;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups [rsp+1D0h+var_180], ymm0
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups [rbp+0D0h+var_140], ymm0
    vmovups [rsp+1D0h+var_160], ymm1
  }
  PM_ContextMount_DebugFailedEdge(v14, &v100, edgeScoreOrdinal, recurseCount, "capsule obstructed");
  result = 0;
LABEL_31:
  __asm { vmovaps xmm8, [rsp+1D0h+var_70] }
  return result;
}

/*
==============
PM_ContextMount_IsVerticalEdge
==============
*/
char PM_ContextMount_IsVerticalEdge(const float4 *testAxis, const float4 *edgeParallelVec)
{
  __asm
  {
    vmovups xmm1, xmmword ptr [rdx]
    vmulps  xmm1, xmm1, xmmword ptr [rcx]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm2, xmm0, xmm1
    vcomiss xmm2, cs:s_minVerticalDot
  }
  return 1;
}

/*
==============
PM_ContextMount_IsViewObstructed
==============
*/
_BOOL8 PM_ContextMount_IsViewObstructed(const MountPlayerProperties *player, const MountEdgeProperties *edge, const vec3_t *mountPivotPoint, const tmat33_t<vec3_t> *mountEyeBasis)
{
  ContextMountType type; 
  char v36; 
  bool v52; 
  const dvar_t *v65; 
  bool v86; 
  const dvar_t *v87; 
  bool v88; 
  _BOOL8 result; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  int v101; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  vec3_t v106; 
  vec3_t dst; 
  vec3_t startPoint; 
  vec3_t endPoint; 
  vec3_t point; 
  char v111; 
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
  _RDI = DCONST_DVARFLT_mount_tuning_raycast_behind_edge;
  _RBX = mountEyeBasis;
  _RSI = edge;
  if ( !DCONST_DVARFLT_mount_tuning_raycast_behind_edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_raycast_behind_edge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm9, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_mount_tuning_raycast_above_edge;
  if ( !DCONST_DVARFLT_mount_tuning_raycast_above_edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_raycast_above_edge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  type = _RSI->type;
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+28h]
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  if ( (unsigned int)(type - 2) <= 1 )
  {
    if ( type == MOUNT_TYPE_NONE )
    {
      v101 = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 614, ASSERT_TYPE_ASSERT, "( edge.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "edge.type", "MOUNT_TYPE_NONE", v101, 0i64) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+18h]
      vmovss  xmm2, dword ptr [rsi+1Ch]
      vmovss  xmm6, cs:__real@42652ee0
      vxorps  xmm1, xmm0, xmm10
      vxorps  xmm0, xmm2, xmm10
      vmovss  dword ptr [rbp+57h+point], xmm1
      vmovss  xmm1, dword ptr [rsi+20h]
      vmovss  dword ptr [rbp+57h+point+4], xmm0
      vmulss  xmm0, xmm6, dword ptr [rsi+3Ch]
      vmulss  xmm3, xmm0, cs:ratio; degrees
      vxorps  xmm2, xmm1, xmm10
      vmovss  dword ptr [rbp+57h+point+8], xmm2
    }
    RotatePointAroundVector(&dst, &_RSI->parallel, &point, *(float *)&_XMM3);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsi+3Ch]
      vmulss  xmm3, xmm1, cs:ratio; degrees
    }
    RotatePointAroundVector(&v106, &_RSI->parallel, &_RSI->normal, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+57h+dst+4]
      vmovss  xmm4, dword ptr [rbp+57h+dst]
      vmovss  xmm5, dword ptr [rbp+57h+dst+8]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsubss  xmm0, xmm1, cs:__real@3f800000
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
    }
    if ( !v36 )
    {
      __asm
      {
        vsqrtss xmm0, xmm1, xmm1
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+120h+var_E0], xmm1
        vcvtss2sd xmm2, xmm5, xmm5
        vmovsd  [rsp+120h+var_E8], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+120h+var_F0], xmm3
        vcvtss2sd xmm0, xmm4, xmm4
        vmovsd  [rsp+120h+var_F8], xmm0
      }
      v52 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 620, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( checkEyeForward ) )", "(%g, %g, %g) len %g", v97, v99, v102, v104);
      v36 = 0;
      if ( v52 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+57h+var_D0+4]
      vmovss  xmm5, dword ptr [rbp+57h+var_D0]
      vmovss  xmm7, dword ptr [rbp+57h+var_D0+8]
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm0, xmm3, cs:__real@3f800000
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
    }
    if ( !v36 )
    {
      __asm
      {
        vsqrtss xmm0, xmm3, xmm3
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+120h+var_E0], xmm1
        vcvtss2sd xmm2, xmm7, xmm7
        vmovsd  [rsp+120h+var_E8], xmm2
        vcvtss2sd xmm3, xmm6, xmm6
        vmovsd  [rsp+120h+var_F0], xmm3
        vcvtss2sd xmm0, xmm5, xmm5
        vmovsd  [rsp+120h+var_F8], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 621, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( checkEyeUp ) )", "(%g, %g, %g) len %g", v98, v100, v103, v105) )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+57h+var_D0]
        vmovss  xmm6, dword ptr [rbp+57h+var_D0+4]
        vmovss  xmm7, dword ptr [rbp+57h+var_D0+8]
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  xmm5, dword ptr [rbx+18h]
      vmovss  xmm6, dword ptr [rbx+1Ch]
      vmovss  xmm7, dword ptr [rbx+20h]
      vmovss  dword ptr [rbp+57h+dst], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+57h+dst+8], xmm0
      vmovss  dword ptr [rbp+57h+dst+4], xmm1
      vmovss  dword ptr [rbp+57h+var_D0], xmm5
      vmovss  dword ptr [rbp+57h+var_D0+4], xmm6
      vmovss  dword ptr [rbp+57h+var_D0+8], xmm7
    }
  }
  v65 = DCONST_DVARFLT_mount_tuning_raycast_beyond_edge;
  __asm
  {
    vxorps  xmm4, xmm9, xmm10
    vmulss  xmm1, xmm4, dword ptr [rbp+57h+dst]
    vaddss  xmm3, xmm1, dword ptr [rsi+30h]
    vmulss  xmm2, xmm5, xmm8
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm2, xmm4, dword ptr [rbp+57h+dst+4]
    vaddss  xmm3, xmm2, dword ptr [rsi+34h]
    vmovss  dword ptr [rbp+57h+startPoint], xmm0
    vmulss  xmm0, xmm6, xmm8
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm4, dword ptr [rbp+57h+dst+8]
    vaddss  xmm3, xmm0, dword ptr [rsi+38h]
    vmovss  dword ptr [rbp+57h+startPoint+4], xmm1
    vmulss  xmm1, xmm7, xmm8
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rbp+57h+startPoint+8], xmm2
  }
  if ( !DCONST_DVARFLT_mount_tuning_raycast_beyond_edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_raycast_beyond_edge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  __asm
  {
    vaddss  xmm3, xmm9, dword ptr [rbx+28h]
    vmulss  xmm1, xmm3, dword ptr [rbp+57h+dst]
    vaddss  xmm2, xmm1, dword ptr [rbp+57h+startPoint]
    vmulss  xmm1, xmm3, dword ptr [rbp+57h+dst+4]
    vmovss  dword ptr [rbp+57h+endPoint], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+57h+startPoint+4]
    vmulss  xmm1, xmm3, dword ptr [rbp+57h+dst+8]
    vmovss  dword ptr [rbp+57h+endPoint+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+57h+startPoint+8]
    vmovss  dword ptr [rbp+57h+endPoint+8], xmm2
  }
  v86 = PM_ContextMount_TestRayHit(player, &startPoint, &endPoint);
  v87 = DCONST_DVARINT_mount_debug;
  v88 = v86;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v87);
  if ( v87->current.integer == 1 )
  {
    __asm { vmovss  xmm3, cs:__real@3dcccccd }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, vec3_t *))player->handler->DebugCapsule)(player->handler, &startPoint, &endPoint);
  }
  result = v88;
  _R11 = &v111;
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
PM_ContextMount_ProjectAndNormalize
==============
*/
bool PM_ContextMount_ProjectAndNormalize(const vec3_t *planeNormal, vec3_t *dir)
{
  const vec3_t *v15; 
  char v30; 
  char v31; 
  bool result; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 

  __asm
  {
    vmovss  xmm3, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rcx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vmovaps [rsp+68h+var_18], xmm6
  }
  _RBX = dir;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  v15 = planeNormal;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+68h+var_28], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+68h+var_30], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+68h+var_38], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+68h+var_40], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 736, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( planeNormal ) )", "(%g, %g, %g) len %g", v39, v40, v41, v42) )
    __debugbreak();
  ProjectPointOnPlane(_RBX, v15, _RBX);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v30 | v31 )
  {
    result = 0;
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
  }
  else
  {
    __asm
    {
      vdivss  xmm2, xmm6, xmm0
      vmovaps xmm6, [rsp+68h+var_18]
    }
    result = 1;
    __asm
    {
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm0, xmm2, xmm5
      vmulss  xmm1, xmm2, xmm3
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
  return result;
}

/*
==============
PM_ContextMount_SetDetailedProperties
==============
*/

void __fastcall PM_ContextMount_SetDetailedProperties(const MountPlayerProperties *player, const MountEdgeProperties *edge, const EdgeId *nextEdge, double transitionFraction, ContextMountTransitionType transitionType, float *relativeYawClampRad, ContextMountSurfFlags mountSurfFlags, MountSurfaceDetailedProperties *outMountDetail)
{
  char v17; 
  char v18; 
  unsigned int v19; 
  EdgeId v22; 
  const BgHandler *handler; 
  EdgeId v25; 
  unsigned __int64 normalFaceIndex; 
  int v31; 
  MountEdgeProperties v35; 

  __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
  _RBX = outMountDetail;
  _RBP = relativeYawClampRad;
  _RDI = edge;
  __asm { vmovaps xmm6, xmm3 }
  outMountDetail->mount.type = edge->type;
  outMountDetail->mount.id = edge->id;
  outMountDetail->mount.fraction = edge->fraction;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  outMountDetail->mount.normalFaceIndex = truncate_cast<unsigned int,unsigned __int64>(edge->normalFaceIndex);
  if ( v17 | v18 )
  {
    EdgeId::Clear(&outMountDetail->mount.adjId);
    v19 = 0;
    outMountDetail->mount.adjFraction = 0.0;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymm1, ymmword ptr [rdi+20h]
    }
    v22 = *nextEdge;
    handler = player->handler;
    __asm
    {
      vmovups ymmword ptr [rsp+0D8h+var_B8.normal], ymm0
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rsp+0D8h+var_B8.normalFaceIndex], ymm0
      vmovups ymmword ptr [rsp+0D8h+var_B8.below+8], ymm1
    }
    MountEdgeProperties::TransitionToAdjacent(&v35, handler, v22, 0);
    v25 = *nextEdge;
    __asm { vmovss  xmm1, [rsp+0D8h+var_B8.fraction] }
    normalFaceIndex = v35.normalFaceIndex;
    __asm { vmovss  dword ptr [rbx+30h], xmm1 }
    outMountDetail->mount.adjId = v25;
    v19 = truncate_cast<unsigned int,unsigned __int64>(normalFaceIndex);
  }
  __asm { vmovaps xmm0, xmm6; value }
  outMountDetail->mount.adjNormalFaceIndex = v19;
  *(double *)&_XMM0 = BG_ContextMount_QuantizeFloat01Byte(*(float *)&_XMM0);
  __asm { vmovss  xmm1, cs:__real@40c90fdb; maxAbsValueSize }
  outMountDetail->mount.transitionType = transitionType;
  __asm
  {
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmovss  xmm0, dword ptr [rbp+0]; value
  }
  v31 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
  __asm { vmovss  xmm1, cs:__real@40c90fdb; maxAbsValueSize }
  outMountDetail->mount.packedRelYawClamp[0] = v31;
  __asm { vmovss  xmm0, dword ptr [rbp+4]; value }
  outMountDetail->mount.packedRelYawClamp[1] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
  outMountDetail->mount.flags = mountSurfFlags;
  __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
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
  const dvar_t *v28; 
  bool v31; 
  int v33; 
  const dvar_t *v39; 
  ContextMountType type; 
  bool v43; 
  bool v44; 
  bool v58; 
  char v81; 
  bool v87; 
  const char *v89; 
  ContextMountSurfFlags v90; 
  unsigned __int8 v95; 
  __int64 result; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float *outCylinderMidpointHeight; 
  float outCylinderMidpointHeighta; 
  float outCylinderMidpointHeightb; 
  float outCylinder; 
  float outCylindera; 
  vec3_t *outCapsulePoint; 
  double v122; 
  char v123; 
  bool v124; 
  float outAngleRad; 
  float *v127; 
  float edgeToEyeForward; 
  float outFrac; 
  ContextMountSurfFlags *v131; 
  MountEdgeProperties v132; 
  __int64 v133; 
  vec3_t planeNormal; 
  vec3_t outZeroYawDir; 
  EdgeTransitionData outTransitionData; 
  vec3_t endPoint; 
  vec3_t startPoint; 
  vec3_t outMountCylinderGroundPos; 
  Bounds cylinder; 
  float outEdgeToCylinderForward; 
  float outEdgeToCylinderAbove; 
  char v143; 
  float outForward; 
  float outAbove; 
  char v146; 
  char v147; 
  void *retaddr; 

  _RAX = &retaddr;
  v133 = -2i64;
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
  v131 = inOutSurfFlags;
  _RDI = edge;
  _RBX = pml;
  v127 = outYawClampRad;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_SweepYawClamp");
  if ( !_RBX->mountState.isPreviousViewangleValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1826, ASSERT_TYPE_ASSERT, "(pml.mountState.isPreviousViewangleValid)", (const char *)&queryFormat, "pml.mountState.isPreviousViewangleValid") )
    __debugbreak();
  _RAX = player->ps;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+2B4h]; angle2
    vmovss  xmm0, dword ptr [rax+1DCh]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovss  dword ptr [rsp+290h+var_220], xmm0
    vxorps  xmm10, xmm10, xmm10
    vucomiss xmm0, xmm10
  }
  if ( v44 )
    goto LABEL_51;
  _RBX = DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_angle_deg;
  if ( !DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_angle_deg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_clamp_sweep_angle_deg") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm12, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_epsilon_deg;
  if ( !DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_epsilon_deg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_clamp_sweep_epsilon_deg") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vmovss  dword ptr [rsp+290h+var_238], xmm6
  }
  v124 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_LADDER_AIM|0x80);
  PM_ContextMount_GetEdgeToCylinderDistance(&_RDI->type, &player->weapon, player->isAlternate, &outEdgeToCylinderForward, &outEdgeToCylinderAbove);
  v143 = 0;
  BG_GetMountEdgeToEyeDistance((const ContextMountType)_RDI->type, &player->weapon, player->isAlternate, &outForward, &outAbove);
  v28 = DVARFLT_mount_tuning_shapecast_eye_cylinder_forward_distance_min;
  if ( !DVARFLT_mount_tuning_shapecast_eye_cylinder_forward_distance_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_eye_cylinder_forward_distance_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  __asm
  {
    vmovss  xmm0, [rbp+190h+outForward]
    vmaxss  xmm1, xmm0, dword ptr [rbx+28h]
    vmovss  [rbp+190h+outForward], xmm1
  }
  v146 = 1;
  v123 = 0;
  v31 = 0;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  v33 = 0;
  _R14 = &outEdgeToCylinderAbove;
  __asm
  {
    vmovss  xmm13, cs:__real@3fc90fdb
    vmovss  xmm14, cs:__real@bfc90fdb
    vmovss  xmm15, cs:__real@bf800000
    vmovss  xmm11, cs:__real@3c8efa35
  }
  while ( 1 )
  {
    v39 = DVARBOOL_killswitch_mount_eye_shapecast_clamp_enabled;
    if ( !DVARBOOL_killswitch_mount_eye_shapecast_clamp_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mount_eye_shapecast_clamp_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    if ( !v39->current.enabled && v33 > 0 )
      break;
    __asm
    {
      vmovss  xmm3, dword ptr [r14]; edgeToEyeAbove
      vmovss  xmm2, dword ptr [r14-4]; edgeToEyeForward
    }
    PM_ContextMount_CalcMountCylinder(player, _RDI, *(double *)&_XMM2, *(double *)&_XMM3, &outMountCylinderGroundPos, &edgeToEyeForward, &cylinder);
    type = _RDI->type;
    if ( type == MOUNT_TYPE_TOP )
    {
      _RBX = &player->worldBasis.m[2];
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  dword ptr [rbp+190h+planeNormal], xmm0
        vmovss  xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rbp+190h+planeNormal+4], xmm1
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbp+190h+planeNormal+8], xmm0
      }
      if ( !PM_ContextMount_CalcTopZeroDir(player, _RDI, &outZeroYawDir) )
      {
        v89 = "failed zero dir calc";
LABEL_54:
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups [rbp+190h+var_210], ymm0
          vmovups ymm1, ymmword ptr [rdi+20h]
          vmovups ymm0, ymmword ptr [rdi+40h]
          vmovups [rbp+190h+var_1F0], ymm1
          vmovups [rbp+190h+var_1D0], ymm0
        }
        PM_ContextMount_DebugFailedEdge(player, &v132, 0, 0, v89);
LABEL_55:
        v95 = 0;
        goto LABEL_56;
      }
      v58 = PM_ContextMount_CalcRelativeAngleInPlane(&player->worldBasis.m[2], &outZeroYawDir, player->eyeBasis.m, &outAngleRad);
      v44 = !v58;
      if ( !v58 )
      {
        v89 = "failed player angle calc";
        goto LABEL_54;
      }
      __asm
      {
        vmovaps xmm4, xmm13
        vmovaps xmm3, xmm14
        vmovss  xmm6, [rsp+290h+outAngleRad]
      }
    }
    else
    {
      if ( (unsigned int)(type - 2) > 1 )
      {
        LODWORD(outCylinderMidpointHeight) = _RDI->type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1921, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encountered unexpected mount type %i", outCylinderMidpointHeight) )
          __debugbreak();
        goto LABEL_55;
      }
      v43 = PM_ContextMount_CalcEdgeTransitionAngles(player, _RDI, &outTransitionData);
      v44 = !v43;
      if ( !v43 )
      {
        v89 = "failed sweep angles calc";
        goto LABEL_54;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+190h+outTransitionData.zeroAngleDir]
        vmovss  dword ptr [rbp+190h+outZeroYawDir], xmm0
        vmovss  xmm1, dword ptr [rbp+190h+outTransitionData.zeroAngleDir+4]
        vmovss  dword ptr [rbp+190h+outZeroYawDir+4], xmm1
        vmovss  xmm0, dword ptr [rbp+190h+outTransitionData.zeroAngleDir+8]
        vmovss  dword ptr [rbp+190h+outZeroYawDir+8], xmm0
        vmovss  xmm1, dword ptr [rbp+190h+outTransitionData.planeNormal]
        vmovss  dword ptr [rbp+190h+planeNormal], xmm1
        vmovss  xmm0, dword ptr [rbp+190h+outTransitionData.planeNormal+4]
        vmovss  dword ptr [rbp+190h+planeNormal+4], xmm0
        vmovss  xmm1, dword ptr [rbp+190h+outTransitionData.planeNormal+8]
        vmovss  dword ptr [rbp+190h+planeNormal+8], xmm1
        vmovss  xmm6, [rbp+190h+outTransitionData.playerAngleRad]
        vmovss  [rsp+290h+outAngleRad], xmm6
        vmovss  xmm3, [rbp+190h+outTransitionData.minAngleRad]
        vmovss  xmm4, [rbp+190h+outTransitionData.maxAngleRad]
      }
    }
    _EAX = 2;
    __asm
    {
      vmovd   xmm1, eax
      vmovd   xmm0, dword ptr [rdi+48h]
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm5, cs:__real@3f800000
      vblendvps xmm1, xmm5, xmm15, xmm2
      vcmpless xmm0, xmm10, xmm7
      vblendvps xmm0, xmm15, xmm5, xmm0
      vmulss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm12, xmm11
      vcomiss xmm1, xmm10
    }
    if ( v44 )
    {
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vmaxss  xmm7, xmm1, xmm3
      }
    }
    else
    {
      __asm
      {
        vaddss  xmm1, xmm0, xmm6
        vminss  xmm7, xmm1, xmm4
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  dword ptr [rsp+290h+outCylinder], xmm0
      vmovss  xmm1, dword ptr [r14-4]
      vmovss  dword ptr [rsp+290h+outCylinderMidpointHeight], xmm1
      vmovss  dword ptr [rsp+290h+fmt], xmm6
    }
    PM_ContextMount_EdgeAngleToCylinderPoint(player, _RDI, &planeNormal, &outZeroYawDir, fmt, outCylinderMidpointHeighta, outCylinder, &startPoint);
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  dword ptr [rsp+290h+outCylinder], xmm0
      vmovss  xmm1, dword ptr [r14-4]
      vmovss  dword ptr [rsp+290h+outCylinderMidpointHeight], xmm1
      vmovss  dword ptr [rsp+290h+fmt], xmm7
    }
    PM_ContextMount_EdgeAngleToCylinderPoint(player, _RDI, &planeNormal, &outZeroYawDir, fmta, outCylinderMidpointHeightb, outCylindera, &endPoint);
    __asm
    {
      vmovss  xmm0, [rsp+290h+edgeToEyeForward]
      vmovss  dword ptr [rsp+290h+fmt], xmm0
    }
    if ( PM_ContextMount_TestCylinderHit(player, player->ps->clientNum, &startPoint, &endPoint, fmtb, v124, &cylinder, &outFrac) )
    {
      __asm
      {
        vmovss  xmm1, [rsp+290h+outFrac]
        vcomiss xmm1, xmm10
      }
      v81 = v123;
      v123 = 1;
      __asm
      {
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm1, xmm0, xmm1
        vaddss  xmm8, xmm1, xmm6
        vucomiss xmm6, xmm7
        vcvtss2sd xmm0, xmm7, xmm7
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+290h+var_250], xmm0
        vmovsd  [rsp+290h+outCapsulePoint], xmm1
      }
      v87 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 1969, ASSERT_TYPE_ASSERT, "( startAngleEdgeRad ) != ( endAngleEdgeRad )", "%s != %s\n\t%g, %g", "startAngleEdgeRad", "endAngleEdgeRad", *(double *)&outCapsulePoint, v122);
      if ( v87 )
        __debugbreak();
      __asm { vcomiss xmm7, xmm6 }
      v31 = v87;
      if ( v81 )
      {
        if ( v87 )
          __asm { vminss  xmm9, xmm8, xmm9 }
        else
          __asm { vmaxss  xmm9, xmm8, xmm9 }
      }
      else
      {
        __asm { vmovaps xmm9, xmm8 }
      }
    }
    ++v33;
    _R14 += 3;
    if ( (unsigned int)v33 >= 2 )
      break;
    __asm { vmovss  xmm7, dword ptr [rsp+290h+var_220] }
  }
  if ( !v123 )
    goto LABEL_51;
  v90 = *v131;
  _RCX = v127;
  if ( !v31 )
  {
    __asm
    {
      vmulss  xmm0, xmm11, dword ptr [rsp+290h+var_238]
      vaddss  xmm1, xmm9, xmm0
    }
    if ( (v90 & 2) == 0 )
      goto LABEL_50;
    __asm { vcomiss xmm1, dword ptr [rcx] }
    if ( (v90 & 2) != 0 )
    {
LABEL_50:
      *v131 = v90 | 2;
      __asm { vmovss  dword ptr [rcx], xmm1 }
    }
LABEL_51:
    v95 = 1;
    goto LABEL_56;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+290h+var_238]
    vmulss  xmm0, xmm0, cs:__real@bc8efa35
    vaddss  xmm1, xmm9, xmm0
  }
  if ( (v90 & 4) != 0 )
  {
    __asm { vcomiss xmm1, dword ptr [rcx+4] }
    goto LABEL_51;
  }
  *v131 = v90 | 4;
  __asm { vmovss  dword ptr [rcx+4], xmm1 }
  v95 = 1;
LABEL_56:
  Sys_ProfEndNamedEvent();
  result = v95;
  _R11 = &v147;
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
  return result;
}

/*
==============
PM_ContextMount_TestCylinderHit
==============
*/
__int64 PM_ContextMount_TestCylinderHit(const MountPlayerProperties *player, const int clientNum, const vec3_t *startPoint, const vec3_t *endPoint, const float cylinderMidpointHeight, const bool testBody, const Bounds *cylinder, float *outFrac)
{
  Physics_WorldId v15; 
  const dvar_t *v16; 
  int v19; 
  char v24; 
  hknpShape *ShapeCylinder; 
  const dvar_t *v42; 
  const MountPlayerProperties *v49; 
  hkMemoryAllocator *v71; 
  hkMemoryAllocator *v72; 
  __int64 result; 
  double v77; 
  double v78; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v81; 
  vec3_t start; 
  __int64 v83; 
  __int64 v85; 
  vec3_t end; 
  const MountPlayerProperties *v88; 
  PhysicsQuery_ShapecastHit hit; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  v81 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v88 = player;
  _RBX = cylinder;
  _R14 = outFrac;
  v15 = player->handler->GetPhysicsWorldId((BgHandler *)player->handler);
  if ( (unsigned int)v15 > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 525, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 526, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
  HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
  v16 = DVARBOOL_mount_tuning_shapecast_ignore_children;
  if ( !DVARBOOL_mount_tuning_shapecast_ignore_children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_ignore_children") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  PhysicsQuery_AddEntityChainToIgnoreList(clientNum, &ignoreBodies, 1, v16->current.enabled, 0, 1, 1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+0D0h+extendedData.startTolerance], xmm0
    vmovss  xmm1, cs:__real@3c83126f
    vmovss  [rbp+0D0h+extendedData.accuracy], xmm1
  }
  extendedData.simplifyStart = 0;
  __asm { vmovdqu xmmword ptr [rbp+0D0h+extendedData.nonBrushShape], xmm0 }
  extendedData.phaseSelection = All;
  v19 = 8454145;
  extendedData.ignoreBodies = &ignoreBodies;
  __asm
  {
    vmovss  xmm0, cs:__real@3e000000
    vmovss  [rbp+0D0h+extendedData.collisionBuffer], xmm0
  }
  extendedData.permitOutwardTrace = 0;
  if ( testBody )
    v19 = 42024961;
  extendedData.contents = v19;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rbx]
  }
  if ( testBody )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 545, ASSERT_TYPE_ASSERT, "(Vec3Compare( vec3_origin, cylinder.midPoint ))", (const char *)&queryFormat, "Vec3Compare( vec3_origin, cylinder.midPoint )") )
      __debugbreak();
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vucomiss xmm0, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
      vucomiss xmm0, dword ptr [rbx+8]
    }
  }
  __asm { vmovss  xmm6, dword ptr [rbx+0Ch] }
  *(double *)&_XMM0 = BG_ContextMount_CalcCameraMinDistToPlayerClip();
  __asm { vucomiss xmm0, xmm6 }
  if ( !v24 )
  {
    __asm { vcvtss2sd xmm6, xmm6, xmm6 }
    *(double *)&_XMM0 = BG_ContextMount_CalcCameraMinDistToPlayerClip();
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+1D0h+var_190], xmm6
      vmovsd  [rsp+1D0h+var_198], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 548, ASSERT_TYPE_ASSERT, "( BG_ContextMount_CalcCameraMinDistToPlayerClip() ) == ( cylinder.halfSize[0] )", "%s == %s\n\t%g, %g", "BG_ContextMount_CalcCameraMinDistToPlayerClip()", "cylinder.halfSize[0]", v77, v78) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+0Ch]; radius
    vmovss  xmm1, dword ptr [rbx+14h]; halfHeight
  }
  ShapeCylinder = Physics_CreateShapeCylinder(&cylinder->midPoint, *(float *)&_XMM1, *(float *)&_XMM2, 32, 1);
  if ( !ShapeCylinder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 551, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, [rbp+0D0h+cylinderMidpointHeight]
    vmulss  xmm4, xmm2, dword ptr cs:worldUp_0
    vaddss  xmm1, xmm4, dword ptr [r12]
    vmovss  dword ptr [rbp+0D0h+start], xmm1
    vmulss  xmm3, xmm2, dword ptr cs:worldUp_0+4
    vaddss  xmm1, xmm3, dword ptr [r12+4]
    vmovss  dword ptr [rbp+0D0h+start+4], xmm1
    vmulss  xmm2, xmm2, dword ptr cs:worldUp_0+8
    vaddss  xmm1, xmm2, dword ptr [r12+8]
    vmovss  dword ptr [rbp+0D0h+start+8], xmm1
    vaddss  xmm0, xmm4, dword ptr [r15]
    vmovss  dword ptr [rbp+0D0h+end], xmm0
    vaddss  xmm1, xmm3, dword ptr [r15+4]
    vmovss  dword ptr [rbp+0D0h+end+4], xmm1
    vaddss  xmm0, xmm2, dword ptr [r15+8]
    vmovss  dword ptr [rbp+0D0h+end+8], xmm0
  }
  PhysicsQuery_ImmediateShapecastClosest(v15, ShapeCylinder, &start, &end, &quat_identity, &extendedData, &hit);
  Physics_ReleaseShape(v15, ShapeCylinder, 0);
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  if ( hit.isValid )
  {
    __asm
    {
      vmovss  xmm0, [rbp+0D0h+hit.fraction]
      vmovss  dword ptr [r14], xmm0
    }
  }
  else
  {
    *outFrac = 1.0;
    __asm { vmovaps xmm0, xmm1 }
  }
  __asm { vcomiss xmm0, xmm1 }
  v42 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.integer == 1 )
  {
    __asm
    {
      vmovsd  xmm4, qword ptr [rbp+0D0h+start]
      vmovsd  [rbp+0D0h+var_E8], xmm4
      vmovss  xmm3, dword ptr [rbx+8]
      vsubss  xmm0, xmm3, dword ptr [rbx+14h]
      vaddss  xmm0, xmm0, dword ptr [rbp+0D0h+start+8]
      vmovss  [rbp+0D0h+var_E0], xmm0
      vmovsd  [rbp+0D0h+var_F8], xmm4
      vaddss  xmm0, xmm3, dword ptr [rbx+14h]
      vaddss  xmm1, xmm0, dword ptr [rbp+0D0h+start+8]
      vmovss  [rbp+0D0h+var_F0], xmm1
    }
    v49 = v88;
    __asm { vmovss  xmm3, dword ptr [rbx+0Ch] }
    ((void (__fastcall *)(const BgHandler *, __int64 *, __int64 *))v88->handler->DebugCapsule)(v88->handler, &v85, &v83);
    __asm
    {
      vmovss  xmm7, dword ptr [r14]
      vmovss  xmm0, dword ptr [rbp+0D0h+end]
      vsubss  xmm1, xmm0, dword ptr [rbp+0D0h+start]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm6, xmm2, dword ptr [rbp+0D0h+start]
      vmovss  xmm0, dword ptr [rbp+0D0h+end+4]
      vsubss  xmm1, xmm0, dword ptr [rbp+0D0h+start+4]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm5, xmm2, dword ptr [rbp+0D0h+start+4]
      vmovss  xmm0, dword ptr [rbp+0D0h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+0D0h+start+8]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm7, xmm2, dword ptr [rbp+0D0h+start+8]
      vunpcklps xmm4, xmm6, xmm5
      vmovsd  [rbp+0D0h+var_E8], xmm4
      vmovss  xmm3, dword ptr [rbx+8]
      vsubss  xmm0, xmm3, dword ptr [rbx+14h]
      vaddss  xmm1, xmm0, xmm7
      vmovss  [rbp+0D0h+var_E0], xmm1
      vmovsd  [rbp+0D0h+var_F8], xmm4
      vaddss  xmm0, xmm3, dword ptr [rbx+14h]
      vaddss  xmm1, xmm0, xmm7
      vmovss  [rbp+0D0h+var_F0], xmm1
      vmovss  xmm3, dword ptr [rbx+0Ch]
    }
    ((void (__fastcall *)(const BgHandler *, __int64 *, __int64 *))v49->handler->DebugCapsule)(v49->handler, &v85, &v83);
  }
  v71 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreBodies.m_size = 0;
  if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v71, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  ignoreBodies.m_ignoreBodies.m_data = NULL;
  ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v72 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreEntities.m_size = 0;
  if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v72, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  result = 0i64;
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
PM_ContextMount_TestRayHit
==============
*/
_BOOL8 PM_ContextMount_TestRayHit(const MountPlayerProperties *player, const vec3_t *startPoint, const vec3_t *endPoint)
{
  Physics_WorldId v6; 
  unsigned int ThreadId; 
  bool v8; 
  bool v9; 
  const dvar_t *v23; 
  bool v25; 
  hkMemoryAllocator *v26; 
  hkMemoryAllocator *v27; 
  double v29; 
  double v30; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v33; 

  v33 = -2i64;
  _RSI = endPoint;
  v6 = player->handler->GetPhysicsWorldId((BgHandler *)player->handler);
  if ( (unsigned int)v6 > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 499, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  ThreadId = Physics_GetThreadId();
  v8 = ThreadId <= 0x1C;
  if ( ThreadId >= 0x1C )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 500, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( v8 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+0E8h+var_A8], xmm0
      vmovsd  xmm1, cs:__real@3f50624de0000000
      vmovsd  [rsp+0E8h+var_B0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 503, ASSERT_TYPE_ASSERT, "( 0.001f ) < ( Vec3Distance( startPoint, endPoint ) )", "%s < %s\n\t%g, %g", "EQUAL_EPSILON", "Vec3Distance( startPoint, endPoint )", v29, v30) )
      __debugbreak();
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
  HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
  v23 = DVARBOOL_mount_tuning_shapecast_ignore_children;
  if ( !DVARBOOL_mount_tuning_shapecast_ignore_children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_shapecast_ignore_children") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  PhysicsQuery_AddEntityChainToIgnoreList(player->ps->clientNum, &ignoreBodies, 1, v23->current.enabled, 0, 1, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0E8h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.contents = 8388737;
  extendedData.ignoreBodies = &ignoreBodies;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InitialInsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 1;
  v25 = !PhysicsQuery_ImmediateRaycastSightCheck(v6, startPoint, _RSI, &extendedData);
  v26 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreBodies.m_size = 0;
  if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v26, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  ignoreBodies.m_ignoreBodies.m_data = NULL;
  ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v27 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreEntities.m_size = 0;
  if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v27, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v25;
}

/*
==============
PM_ContextMount_UpdateMountPivotPoint
==============
*/
bool PM_ContextMount_UpdateMountPivotPoint(const MountPlayerProperties *player, const MountSurfaceProperties *mountSurface, const tmat33_t<vec3_t> *prevEyeBasis, vec3_t *outExtrapolatedPivotPoint)
{
  int v17; 
  char v48; 
  ContextMountType type; 
  vec3_t *v50; 
  bool result; 
  float outAbove; 
  ContextMountType argTypea; 
  __int64 argType; 
  float v56; 
  float outForward; 
  vec3_t outEyePoint; 
  vec3_t outNormal; 
  vec3_t planePoint; 
  tmat33_t<vec3_t> eyeBasis; 
  MountSurfaceDetailedProperties inOutDetailMount; 
  vec3_t outParallel; 
  vec3_t outMountPoint; 
  MountEdgeProperties edge; 

  __asm { vmovaps [rsp+1C0h+var_30], xmm6 }
  _RDI = mountSurface;
  BG_GetMountEdgeToEyeDistance((const ContextMountType)mountSurface->type, &player->weapon, player->isAlternate, &outForward, &v56);
  BG_ContextMount_CalcMountPoint(player->handler, _RDI, &outMountPoint);
  __asm
  {
    vmovss  xmm0, cs:__real@c3340000
    vmovss  dword ptr [rbp+0C0h+inOutDetailMount.minClampDeg], xmm0
    vmovss  dword ptr [rbp+0C0h+inOutDetailMount.minClampDeg+4], xmm0
    vmovups xmm0, cs:__xmm@00000000000000004334000043340000
    vxorps  xmm6, xmm6, xmm6
  }
  edge.isInitialized = 0;
  __asm
  {
    vmovups xmmword ptr [rbp+0C0h+inOutDetailMount.maxClampDeg], xmm0
    vmovss  dword ptr [rbp+0C0h+inOutDetailMount.maxResistDeg], xmm6
    vmovss  dword ptr [rbp+0C0h+inOutDetailMount.maxResistDeg+4], xmm6
  }
  EdgeId::Clear(&edge.id);
  __asm { vmovss  xmm3, dword ptr [rdi+0Ch]; argFraction }
  if ( MountEdgeProperties::Initialize(&edge, player->handler, _RDI->id, *(float *)&_XMM3, _RDI->normalFaceIndex, _RDI->type) )
  {
    EdgeId::Clear((EdgeId *)&outEyePoint);
    __asm { vmovss  xmm1, [rbp+0C0h+edge.fraction] }
    inOutDetailMount.mount.type = edge.type;
    inOutDetailMount.mount.id = edge.id;
    __asm { vmovss  [rbp+0C0h+inOutDetailMount.mount.baseclass_0.fraction], xmm1 }
    *(_QWORD *)outNormal.v = 0i64;
    inOutDetailMount.mount.normalFaceIndex = truncate_cast<unsigned int,unsigned __int64>(edge.normalFaceIndex);
    EdgeId::Clear(&inOutDetailMount.mount.adjId);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0; value
      vmovss  [rbp+0C0h+inOutDetailMount.mount.adjFraction], xmm6
    }
    inOutDetailMount.mount.adjNormalFaceIndex = 0;
    *(double *)&_XMM0 = BG_ContextMount_QuantizeFloat01Byte(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm1, cs:__real@40c90fdb; maxAbsValueSize
      vmovss  [rbp+0C0h+inOutDetailMount.mount.baseclass_0.transitionFraction], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+outNormal]; value
    }
    inOutDetailMount.mount.transitionType = MOUNT_TRANSITION_TYPE_NONE;
    v17 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
    __asm
    {
      vmovss  xmm1, cs:__real@40c90fdb; maxAbsValueSize
      vmovss  xmm0, dword ptr [rsp+1C0h+outNormal+4]; value
    }
    inOutDetailMount.mount.packedRelYawClamp[0] = v17;
    inOutDetailMount.mount.packedRelYawClamp[1] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
    inOutDetailMount.mount.flags = 0;
    if ( PM_ContextMount_CalcFinalClampAngles(player, &edge, &inOutDetailMount) )
    {
      __asm
      {
        vmovss  xmm0, [rsp+1C0h+var_180]
        vmovss  xmm1, [rsp+1C0h+outForward]
        vmovss  [rsp+1C0h+argType], xmm0
        vmovss  dword ptr [rsp+1C0h+outAbove], xmm1
      }
      PM_ContextMount_CalcMountEyePoint(&inOutDetailMount, player->handler, prevEyeBasis, &player->worldBasis, outAbove, *(const float *)&argTypea, &outEyePoint, &eyeBasis);
      BG_ContextMount_CalcMountVectors(player->handler, _RDI, &outNormal, &outParallel, &outEyePoint);
      BG_ContextMount_GetMountUpVector((const ContextMountType)_RDI->type, &eyeBasis, &outEyePoint);
      __asm
      {
        vmovss  xmm4, [rsp+1C0h+outForward]
        vmovss  xmm0, [rsp+1C0h+var_180]
        vxorps  xmm5, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm4, dword ptr [rsp+1C0h+eyeBasis]
        vaddss  xmm3, xmm0, dword ptr [rbx+0Ch]
        vmulss  xmm1, xmm5, [rsp+1C0h+var_178.m_edgeIndex]
        vmulss  xmm2, xmm5, [rsp+1C0h+var_178.m_entityIndex]
        vaddss  xmm0, xmm3, xmm1
        vmulss  xmm1, xmm4, dword ptr [rsp+1C0h+eyeBasis+4]
        vaddss  xmm3, xmm1, dword ptr [rbx+10h]
        vaddss  xmm1, xmm3, xmm2
        vmulss  xmm2, xmm4, dword ptr [rbp+0C0h+eyeBasis+8]
        vaddss  xmm3, xmm2, dword ptr [rbx+14h]
        vmovss  dword ptr [rsp+1C0h+planePoint], xmm0
        vmulss  xmm0, xmm5, [rsp+1C0h+var_170]
        vaddss  xmm2, xmm3, xmm0
        vmovss  xmm0, dword ptr [rbp+0C0h+eyeBasis+10h]
        vmulss  xmm3, xmm0, dword ptr [rbx+58h]
        vmovss  xmm0, dword ptr [rbp+0C0h+eyeBasis+14h]
        vmovss  dword ptr [rsp+1C0h+planePoint+8], xmm2
        vmovss  dword ptr [rsp+1C0h+planePoint+4], xmm1
        vmovss  xmm1, dword ptr [rbp+0C0h+eyeBasis+0Ch]
        vmulss  xmm2, xmm1, dword ptr [rbx+54h]
        vmulss  xmm1, xmm0, dword ptr [rbx+5Ch]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vsubss  xmm0, xmm2, cs:__real@3f800000
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3a83126f
      }
      if ( v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 715, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( player.worldBasis[2], prevClampedEyeBasis[1] ))", (const char *)&queryFormat, "!Vec3IsParallel( player.worldBasis[2], prevClampedEyeBasis[1] )") )
        __debugbreak();
      type = player->ps->mountState.surface.type;
      if ( type == MOUNT_TYPE_TOP )
      {
        v50 = &eyeBasis.m[1];
LABEL_14:
        IntersectLinePlane(&outMountPoint, &outParallel, &planePoint, v50, outExtrapolatedPivotPoint);
        result = 1;
        goto LABEL_12;
      }
      if ( (unsigned int)(type - 2) <= 1 )
      {
        v50 = &eyeBasis.m[2];
        goto LABEL_14;
      }
      LODWORD(argType) = player->ps->mountState.surface.type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 726, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BG_ContextMount_CalculateMountPoint() mount type %i not supported.", argType) )
        __debugbreak();
    }
  }
  result = 0;
LABEL_12:
  __asm { vmovaps xmm6, [rsp+1C0h+var_30] }
  return result;
}

/*
==============
PM_ContextMount_UpdateTransition
==============
*/
void PM_ContextMount_UpdateTransition(const pml_t *pml, const MountPlayerProperties *player, MountEdgeProperties *inOutEdge, EdgeId *inOutGoalEdge, float *inOutTransitionFraction, ContextMountTransitionType *inOutTransitionType)
{
  ContextMountTransitionType v14; 
  const dvar_t *v15; 
  ContextMountTransitionType v27; 
  bool v29; 
  bool v30; 
  unsigned int EdgeIndex; 
  EdgeId id; 
  double v42; 
  double v43; 
  __int64 v44; 
  double v45; 
  __int64 v46; 

  v14 = *inOutTransitionType;
  if ( (unsigned int)(inOutEdge->type - 2) <= 1 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
    }
    if ( v14 == MOUNT_TRANSITION_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2339, ASSERT_TYPE_ASSERT, "( inOutTransitionType ) != ( MOUNT_TRANSITION_TYPE_NONE )", "%s != %s\n\t%i, %i", "inOutTransitionType", "MOUNT_TRANSITION_TYPE_NONE", 0, 0i64) )
      __debugbreak();
    if ( !EdgeId::IsValid(inOutGoalEdge) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2340, ASSERT_TYPE_ASSERT, "(inOutGoalEdge.IsValid())", (const char *)&queryFormat, "inOutGoalEdge.IsValid()") )
      __debugbreak();
    if ( !BG_GetMountTransitionEnabled(&player->weapon, player->isAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2341, ASSERT_TYPE_ASSERT, "(BG_GetMountTransitionEnabled( player.weapon, player.isAlternate ))", (const char *)&queryFormat, "BG_GetMountTransitionEnabled( player.weapon, player.isAlternate )") )
      __debugbreak();
    v15 = DCONST_DVARINT_mount_transition_time_ms;
    if ( !DCONST_DVARINT_mount_transition_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_transition_time_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, dword ptr [rbx+28h]
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm7, xmm6
    }
    if ( v29 || v30 )
    {
      __asm { vcvttss2si eax, xmm7 }
      LODWORD(v46) = _EAX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2344, ASSERT_TYPE_ASSERT, "( 0 ) < ( transitionMs )", "%s < %s\n\t%i, %i", "0", "transitionMs", 0i64, v46) )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
      vdivss  xmm0, xmm0, xmm7; val
      vmovss  xmm7, cs:__real@3f800000
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm8, xmm0
    }
    if ( v29 || v30 )
      goto LABEL_37;
    v27 = *inOutTransitionType;
    _RDI = inOutTransitionFraction;
    v29 = *inOutTransitionType < (unsigned int)MOUNT_TRANSITION_TYPE_BACK;
    v30 = *inOutTransitionType == MOUNT_TRANSITION_TYPE_BACK;
    if ( *inOutTransitionType == MOUNT_TRANSITION_TYPE_BACK )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rdi]
        vucomiss xmm1, xmm6
      }
      if ( *inOutTransitionType == MOUNT_TRANSITION_TYPE_BACK )
      {
        EdgeIndex = EdgeId::GetEdgeIndex(&inOutEdge->id);
        if ( EdgeIndex == EdgeId::GetEdgeIndex(inOutGoalEdge) )
        {
          LODWORD(v46) = EdgeId::GetEdgeIndex(inOutGoalEdge);
          LODWORD(v44) = EdgeId::GetEdgeIndex(&inOutEdge->id);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2356, ASSERT_TYPE_ASSERT, "( inOutEdge.id.GetEdgeIndex() ) != ( inOutGoalEdge.GetEdgeIndex() )", "%s != %s\n\t%i, %i", "inOutEdge.id.GetEdgeIndex()", "inOutGoalEdge.GetEdgeIndex()", v44, v46) )
            __debugbreak();
        }
        *inOutTransitionFraction = 1.0;
        id = inOutEdge->id;
        MountEdgeProperties::TransitionToAdjacent(inOutEdge, player->handler, *inOutGoalEdge, 0);
        *inOutGoalEdge = id;
        __asm { vmovss  xmm1, dword ptr [rdi] }
      }
      __asm
      {
        vsubss  xmm0, xmm1, xmm8
        vcomiss xmm0, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( !v29 && !v30 )
        goto LABEL_33;
      *inOutTransitionFraction = 0.0;
      *inOutTransitionType = MOUNT_TRANSITION_TYPE_NONE;
    }
    else
    {
      v29 = v27 == MOUNT_TRANSITION_TYPE_NONE;
      v30 = v27 == MOUNT_TRANSITION_TYPE_FORWARD;
      if ( v27 != MOUNT_TRANSITION_TYPE_FORWARD )
        goto LABEL_33;
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [rdi]
        vcomiss xmm0, xmm7
        vmovss  dword ptr [rdi], xmm0
      }
      *inOutTransitionFraction = 0.0;
      *inOutTransitionType = MOUNT_TRANSITION_TYPE_NONE;
      MountEdgeProperties::TransitionToAdjacent(inOutEdge, player->handler, *inOutGoalEdge, 0);
    }
    EdgeId::Clear(inOutGoalEdge);
LABEL_33:
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vcomiss xmm0, xmm6
    }
    if ( v29 )
      goto LABEL_40;
    __asm { vcomiss xmm0, xmm7 }
    if ( !v29 && !v30 )
    {
LABEL_40:
      __asm
      {
        vcvtss2sd xmm2, xmm0, xmm0
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+0A8h+var_70], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+0A8h+var_78], xmm1
        vmovsd  [rsp+0A8h+var_80], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2382, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( inOutTransitionFraction ) && ( inOutTransitionFraction ) <= ( 1.0f )", "inOutTransitionFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v42, v43, v45) )
        __debugbreak();
    }
LABEL_37:
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
      vmovaps xmm8, [rsp+0A8h+var_58]
    }
    return;
  }
  if ( v14 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 2335, ASSERT_TYPE_ASSERT, "( inOutTransitionType ) == ( MOUNT_TRANSITION_TYPE_NONE )", "%s == %s\n\t%i, %i", "inOutTransitionType", "MOUNT_TRANSITION_TYPE_NONE", *inOutTransitionType, 0i64) )
      __debugbreak();
  }
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
  int v8; 

  _RBX = this;
  if ( !this->isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 185, ASSERT_TYPE_ASSERT, "(this->isInitialized)", (const char *)&queryFormat, "this->isInitialized") )
    __debugbreak();
  if ( LODWORD(_RBX->normalFaceIndex) >= 2 )
  {
    v8 = 2;
    LODWORD(argType) = _RBX->normalFaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( this->normalFaceIndex ) < (unsigned)( 2 )", "this->normalFaceIndex doesn't index 2\n\t%i not in [0, %i)", argType, v8) )
      __debugbreak();
  }
  v4 = 0;
  v5 = _RBX->normalFaceIndex == 0;
  if ( (unsigned int)(_RBX->type - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 190, ASSERT_TYPE_ASSERT, "((this->type == MOUNT_TYPE_LEFT) || (this->type == MOUNT_TYPE_RIGHT))", (const char *)&queryFormat, "(this->type == MOUNT_TYPE_LEFT) || (this->type == MOUNT_TYPE_RIGHT)") )
    __debugbreak();
  __asm { vmovss  xmm3, dword ptr [rbx+54h]; argFraction }
  LOBYTE(v4) = _RBX->type == MOUNT_TYPE_LEFT;
  MountEdgeProperties::Initialize(_RBX, handler, _RBX->id, *(float *)&_XMM3, v5, (ContextMountType)(v4 + 2));
}

/*
==============
MountEdgeProperties::TransitionToAdjacent
==============
*/
void MountEdgeProperties::TransitionToAdjacent(MountEdgeProperties *this, const BgHandler *handler, EdgeId adjacentId, bool isPreviousEdge)
{
  bool v9; 
  bool IsDynamic; 
  unsigned int EntityIndex; 
  char v45; 
  __int64 v51; 
  unsigned __int64 i; 
  __int64 v76; 
  float v83; 
  float v86; 
  float v88; 
  EdgeId v90; 
  float v91; 
  vec3_t *outParallel; 
  vec3_t *outBelow; 
  vec3_t *outOtherNormal; 
  BOOL outOtherNormala; 
  vec3_t *outOtherNormalb; 
  __int64 v102; 
  BOOL v103; 
  double v104; 
  EdgeId edgeId; 
  vec3_t dir; 
  vec3_t result; 
  vec3_t outLineSegment[2]; 
  vec3_t outNormal[2]; 
  vec3_t v111[2]; 
  vec3_t v112[2]; 
  vec3_t v113[2]; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v9 = !this->isInitialized;
  _RDI = this;
  edgeId = adjacentId;
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 122, ASSERT_TYPE_ASSERT, "(this->isInitialized)", (const char *)&queryFormat, "this->isInitialized") )
    __debugbreak();
  IsDynamic = EdgeId::GetIsDynamic(&_RDI->id);
  if ( IsDynamic != EdgeId::GetIsDynamic(&edgeId) )
  {
    v103 = EdgeId::GetIsDynamic(&edgeId);
    outOtherNormala = EdgeId::GetIsDynamic(&_RDI->id);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 123, ASSERT_TYPE_ASSERT, "( id.GetIsDynamic() ) == ( adjacentId.GetIsDynamic() )", "%s == %s\n\t%i, %i", "id.GetIsDynamic()", "adjacentId.GetIsDynamic()", outOtherNormala, v103) )
      __debugbreak();
  }
  EntityIndex = EdgeId::GetEntityIndex(&_RDI->id);
  if ( EntityIndex != EdgeId::GetEntityIndex(&edgeId) )
  {
    LODWORD(v102) = EdgeId::GetEntityIndex(&edgeId);
    LODWORD(outOtherNormal) = EdgeId::GetEntityIndex(&_RDI->id);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 124, ASSERT_TYPE_ASSERT, "( id.GetEntityIndex() ) == ( adjacentId.GetEntityIndex() )", "%s == %s\n\t%i, %i", "id.GetEntityIndex()", "adjacentId.GetEntityIndex()", outOtherNormal, v102) )
      __debugbreak();
  }
  Edge_GetLineSegment(handler, edgeId, (vec3_t (*)[2])outLineSegment);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+70h+outLineSegment+0Ch]
    vsubss  xmm4, xmm0, dword ptr [rbp+70h+outLineSegment]
    vmovss  xmm1, dword ptr [rbp+70h+outLineSegment+10h]
    vsubss  xmm5, xmm1, dword ptr [rbp+70h+outLineSegment+4]
    vmovss  xmm0, dword ptr [rbp+70h+outLineSegment+14h]
    vsubss  xmm6, xmm0, dword ptr [rbp+70h+outLineSegment+8]
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm7, xmm2, xmm2
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm9, xmm0
    vdivss  xmm2, xmm9, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+170h+dir], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+170h+dir+8], xmm0
    vmovss  dword ptr [rsp+170h+dir+4], xmm1
  }
  PointOnLineClosestToPoint(&_RDI->point, outLineSegment, &dir, &result);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+170h+result]
    vsubss  xmm3, xmm0, dword ptr [rbp+70h+outLineSegment]
    vmovss  xmm1, dword ptr [rsp+170h+result+4]
    vsubss  xmm2, xmm1, dword ptr [rbp+70h+outLineSegment+4]
    vmulss  xmm0, xmm2, dword ptr [rsp+170h+dir+4]
    vmovss  xmm1, dword ptr [rsp+170h+result+8]
    vmulss  xmm3, xmm3, dword ptr [rsp+170h+dir]
    vsubss  xmm2, xmm1, dword ptr [rbp+70h+outLineSegment+8]
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm0, xmm2, dword ptr [rsp+170h+dir+8]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
    vaddss  xmm8, xmm4, xmm0
  }
  if ( v45 | v9 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+170h+var_130], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+170h+outOtherNormal], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 141, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( segmentLength )", "%s < %s\n\t%g, %g", "0.0f", "segmentLength", *(double *)&outOtherNormalb, v104) )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm0, xmm8, xmm7; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm6, cs:__real@7f7fffff }
  v51 = -1i64;
  __asm
  {
    vmulss  xmm4, xmm7, xmm0
    vmulss  xmm2, xmm4, dword ptr [rsp+170h+dir]
    vaddss  xmm3, xmm2, dword ptr [rbp+70h+outLineSegment]
    vmulss  xmm2, xmm4, dword ptr [rsp+170h+dir+4]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  dword ptr [rsp+170h+result], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbp+70h+outLineSegment+4]
    vmulss  xmm2, xmm4, dword ptr [rsp+170h+dir+8]
    vmovss  dword ptr [rsp+170h+result+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbp+70h+outLineSegment+8]
    vmovss  dword ptr [rsp+170h+result+8], xmm3
    vmovaps xmm8, xmm0
  }
  for ( i = 0i64; i < 2; ++i )
  {
    _R14 = &outNormal[i];
    __asm { vmovaps xmm2, xmm8; fraction }
    Edge_CalculateVectors(handler, edgeId, *(float *)&_XMM2, i, _R14, &v111[i], &v112[i], &v113[i]);
    if ( isPreviousEdge )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vmovss  xmm1, dword ptr [rdi]
        vmulss  xmm3, xmm0, dword ptr [rsi+4]
        vmovss  xmm0, dword ptr [rdi+8]
        vmulss  xmm2, xmm1, dword ptr [rsi]
        vmulss  xmm1, xmm0, dword ptr [rsi+8]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+4]
        vmovss  xmm1, dword ptr [r14]
        vmulss  xmm3, xmm0, dword ptr [rdi+28h]
        vmovss  xmm0, dword ptr [r14+8]
        vmulss  xmm2, xmm1, dword ptr [rdi+24h]
        vmulss  xmm1, xmm0, dword ptr [rdi+2Ch]
      }
    }
    __asm { vaddss  xmm4, xmm3, xmm2 }
    v76 = i;
    __asm
    {
      vaddss  xmm2, xmm4, xmm1
      vandps  xmm2, xmm2, xmm7
      vsubss  xmm0, xmm2, xmm9
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm6, xmm0
      vminss  xmm6, xmm0, xmm6
    }
    if ( !isPreviousEdge )
      v76 = v51;
    v51 = v76;
  }
  if ( (unsigned int)v76 >= 2 )
  {
    LODWORD(outBelow) = 2;
    LODWORD(outParallel) = v76;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount_edges.cpp", 168, ASSERT_TYPE_ASSERT, "(unsigned)( bestFaceIndex ) < (unsigned)( ( sizeof( *array_counter( adjacentNormal ) ) + 0 ) )", "bestFaceIndex doesn't index ARRAY_COUNT( adjacentNormal )\n\t%i not in [0, %i)", outParallel, outBelow) )
      __debugbreak();
  }
  _RCX = 3 * v51;
  _RDI->normalFaceIndex = v51;
  __asm { vmovsd  xmm0, qword ptr [rbp+rcx*4+70h+outNormal] }
  v83 = outNormal[v51].v[2];
  __asm
  {
    vmovsd  qword ptr [rdi], xmm0
    vmovsd  xmm0, qword ptr [rbp+rcx*4+70h+var_C0]
    vmovsd  qword ptr [rdi+0Ch], xmm0
    vmovsd  xmm0, qword ptr [rbp+rcx*4+70h+var_A8]
  }
  _RDI->normal.v[2] = v83;
  v86 = v111[v51].v[2];
  __asm
  {
    vmovsd  qword ptr [rdi+18h], xmm0
    vmovsd  xmm0, qword ptr [rbp+rcx*4+70h+var_90]
  }
  _RDI->parallel.v[2] = v86;
  v88 = v112[v51].v[2];
  __asm
  {
    vmovsd  qword ptr [rdi+24h], xmm0
    vmovsd  xmm0, qword ptr [rsp+170h+result]
  }
  _RDI->below.v[2] = v88;
  v90 = edgeId;
  _RDI->otherNormal.v[2] = v113[v51].v[2];
  v91 = result.v[2];
  __asm { vmovsd  qword ptr [rdi+30h], xmm0 }
  _RDI->point.v[2] = v91;
  __asm { vmovss  dword ptr [rdi+54h], xmm8 }
  _RDI->id = v90;
  *(double *)&_XMM0 = Edge_CalculateOpenAngleRad(v90);
  __asm { vmovss  dword ptr [rdi+3Ch], xmm0 }
  _R11 = &v114;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

