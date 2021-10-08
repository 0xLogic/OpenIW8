/*
==============
Edge_CalculateVectors
==============
*/

void __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, unsigned __int64 normalFaceIndex, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow, vec3_t *outOtherNormal)
{
  ?Edge_CalculateVectors@@YAXPEBVBgHandler@@UEdgeId@@M_KAEATvec3_t@@333@Z(handler, edgeId, fraction, normalFaceIndex, outNormal, outParallel, outBelow, outOtherNormal);
}

/*
==============
Edge_CalculateVectors
==============
*/

void __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, unsigned __int64 normalFaceIndex, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  ?Edge_CalculateVectors@@YAXPEBVBgHandler@@UEdgeId@@M_KAEATvec3_t@@33@Z(handler, edgeId, fraction, normalFaceIndex, outNormal, outParallel, outBelow);
}

/*
==============
Edge_CalculateOpenAngleRad
==============
*/

double __fastcall Edge_CalculateOpenAngleRad(EdgeId edgeId)
{
  double result; 

  *(float *)&result = ?Edge_CalculateOpenAngleRad@@YAMUEdgeId@@@Z(edgeId);
  return result;
}

/*
==============
EdgeOctreeQueryFrustum::CalcVertexBlendFunc
==============
*/

void (*__fastcall EdgeOctreeQueryFrustum::CalcVertexBlendFunc(const float4 *r_plane))(const float4 *__struct_ptr, const float4 *__struct_ptr, float4 *)
{
  return ?CalcVertexBlendFunc@EdgeOctreeQueryFrustum@@KAP6QXUfloat4@@0AEAU2@@ZAEBU2@@Z(r_plane);
}

/*
==============
EdgeOctreeQueryShape::Float4CalcNodeExtents
==============
*/

void __fastcall EdgeOctreeQueryShape::Float4CalcNodeExtents(const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, float4 *r_outMinExtent, float4 *r_outMaxExtent)
{
  ?Float4CalcNodeExtents@EdgeOctreeQueryShape@@KAXAEBUPMROctreeMetadata@@AEBUPMROctreeNode@@AEAUfloat4@@2@Z(r_octree, r_node, r_outMinExtent, r_outMaxExtent);
}

/*
==============
EdgeOctreeQueryFrustum::SetAxisBias
==============
*/

void __fastcall EdgeOctreeQueryFrustum::SetAxisBias(EdgeOctreeQueryFrustum *this, const vec3_t *axis, float bias)
{
  ?SetAxisBias@EdgeOctreeQueryFrustum@@QEAAXAEBTvec3_t@@M@Z(this, axis, bias);
}

/*
==============
Edge_GetDynamicLineSegment
==============
*/

void __fastcall Edge_GetDynamicLineSegment(const vector4 *entityTransform, const EdgeId *edgeId, float4 (*outLineSegment)[2], float4 *outNormal0)
{
  ?Edge_GetDynamicLineSegment@@YAXAEBUvector4@@AEBUEdgeId@@AEAY01Ufloat4@@PEAU3@@Z(entityTransform, edgeId, outLineSegment, outNormal0);
}

/*
==============
EdgeOctreeQueryCustomClip::TrimLineSegment
==============
*/

void __fastcall EdgeOctreeQueryCustomClip::TrimLineSegment(EdgeOctreeQueryCustomClip *this, const float4 *r_lineSegmentPoint, const float4 *r_lineSegmentDir, float *r_inOutTMin, float *r_inOutTMax)
{
  ?TrimLineSegment@EdgeOctreeQueryCustomClip@@QEBAXAEBUfloat4@@0AEAM1@Z(this, r_lineSegmentPoint, r_lineSegmentDir, r_inOutTMin, r_inOutTMax);
}

/*
==============
Edge_CalculateVectors
==============
*/

void __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, unsigned __int64 normalFaceIndex, float4 *outNormal, float4 *outParallel, float4 *outBelow, float4 *outOtherNormal)
{
  ?Edge_CalculateVectors@@YAXPEBVBgHandler@@UEdgeId@@M_KAEAUfloat4@@333@Z(handler, edgeId, fraction, normalFaceIndex, outNormal, outParallel, outBelow, outOtherNormal);
}

/*
==============
EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum
==============
*/

void __fastcall EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(EdgeOctreeQueryFrustum *this, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float horizHalfAngleRad, float vertHalfAngleRad, float nearDist, float farDist)
{
  ??0EdgeOctreeQueryFrustum@@QEAA@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@MMMM@Z(this, origin, axis, horizHalfAngleRad, vertHalfAngleRad, nearDist, farDist);
}

/*
==============
EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum
==============
*/

void __fastcall EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(EdgeOctreeQueryFrustum *this, const vec3_t *nearCenterPoint, float nearHalfWidth, float nearHalfHeight, const vec3_t *farCenterPoint, float farHalfWidth, float farHalfHeight, const vec3_t *up)
{
  ??0EdgeOctreeQueryFrustum@@QEAA@AEBTvec3_t@@MM0MM0@Z(this, nearCenterPoint, nearHalfWidth, nearHalfHeight, farCenterPoint, farHalfWidth, farHalfHeight, up);
}

/*
==============
EdgeOctreeQueryShape::Float4ClosestApproachOfTwoLines
==============
*/

void __fastcall EdgeOctreeQueryShape::Float4ClosestApproachOfTwoLines(const float4 *r_linePointA, const float4 *r_lineVecA, const float4 *r_linePointB, const float4 *r_lineVecB, float4 *r_outS, float4 *r_outT)
{
  ?Float4ClosestApproachOfTwoLines@EdgeOctreeQueryShape@@KAXAEBUfloat4@@000AEAU2@1@Z(r_linePointA, r_lineVecA, r_linePointB, r_lineVecB, r_outS, r_outT);
}

/*
==============
EdgeOctreeQueryCustomClip::Initialize
==============
*/

void __fastcall EdgeOctreeQueryCustomClip::Initialize(EdgeOctreeQueryCustomClip *this, bool (__fastcall *testFunc)(const float4 *, const float4 *), const vec3_t *textAxis, unsigned __int64 numTrueClipPlanes, const vec3_t *trueClipPlanePoints, const vec3_t *trueClipPlaneNormals, unsigned __int64 numFalseClipPlanes, const vec3_t *falseClipPlanePoints, const vec3_t *falseClipPlaneNormals)
{
  ?Initialize@EdgeOctreeQueryCustomClip@@QEAAXP6A_NAEBUfloat4@@0@ZAEBTvec3_t@@_KQEBT3@4344@Z(this, testFunc, textAxis, numTrueClipPlanes, trueClipPlanePoints, trueClipPlaneNormals, numFalseClipPlanes, falseClipPlanePoints, falseClipPlaneNormals);
}

/*
==============
Edge_CalculateVectors
==============
*/

void __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, unsigned __int64 normalFaceIndex, float4 *outNormal, float4 *outParallel, float4 *outBelow)
{
  ?Edge_CalculateVectors@@YAXPEBVBgHandler@@UEdgeId@@M_KAEAUfloat4@@33@Z(handler, edgeId, fraction, normalFaceIndex, outNormal, outParallel, outBelow);
}

/*
==============
EdgeOctreeQueryShape::SetUserClipPlanes
==============
*/

void __fastcall EdgeOctreeQueryShape::SetUserClipPlanes(EdgeOctreeQueryShape *this, unsigned __int64 numClipPlanes, const vec3_t *clipPlanePoints, const vec3_t *clipPlaneNormals)
{
  ?SetUserClipPlanes@EdgeOctreeQueryShape@@QEAAX_KQEBTvec3_t@@1@Z(this, numClipPlanes, clipPlanePoints, clipPlaneNormals);
}

/*
==============
Edge_HasEdges
==============
*/

bool __fastcall Edge_HasEdges()
{
  return ?Edge_HasEdges@@YA_NXZ();
}

/*
==============
Edge_CalculateNormals
==============
*/

void __fastcall Edge_CalculateNormals(const BgHandler *handler, EdgeId edgeId, float4 *r_outNormal0, float4 *outNormal1, float4 *outLineDir)
{
  ?Edge_CalculateNormals@@YAXPEBVBgHandler@@UEdgeId@@AEAUfloat4@@2PEAU3@@Z(handler, edgeId, r_outNormal0, outNormal1, outLineDir);
}

/*
==============
Edge_CalculateClosestPoint
==============
*/

void __fastcall Edge_CalculateClosestPoint(const BgHandler *handler, const float4 *point, EdgeId edgeId, float *outEdgeFraction, float4 *outEdgePoint)
{
  ?Edge_CalculateClosestPoint@@YAXPEBVBgHandler@@AEBUfloat4@@UEdgeId@@AEAMAEAU2@@Z(handler, point, edgeId, outEdgeFraction, outEdgePoint);
}

/*
==============
Edge_GetFlags
==============
*/

edgeFlags_t __fastcall Edge_GetFlags(EdgeId edgeId)
{
  return ?Edge_GetFlags@@YA?AW4edgeFlags_t@@UEdgeId@@@Z(edgeId);
}

/*
==============
Edge_GetLineSegment
==============
*/

void __fastcall Edge_GetLineSegment(const pmove_t *const pm, EdgeId edgeId, vec3_t (*outLineSegment)[2])
{
  ?Edge_GetLineSegment@@YAXQEBVpmove_t@@UEdgeId@@AEAY01Tvec3_t@@@Z(pm, edgeId, outLineSegment);
}

/*
==============
EdgeFrustumQueryShape::Transform
==============
*/

void __fastcall EdgeFrustumQueryShape::Transform(EdgeFrustumQueryShape *this, const tmat43_t<vec3_t> *transform)
{
  ?Transform@EdgeFrustumQueryShape@@QEAAXAEBT?$tmat43_t@Tvec3_t@@@@@Z(this, transform);
}

/*
==============
Edge_CalculatePoint
==============
*/

void __fastcall Edge_CalculatePoint(const BgHandler *handler, EdgeId edgeId, float fraction, float4 *r_outEdgePoint)
{
  ?Edge_CalculatePoint@@YAXPEBVBgHandler@@UEdgeId@@MAEAUfloat4@@@Z(handler, edgeId, fraction, r_outEdgePoint);
}

/*
==============
Edge_CalculatePoint
==============
*/

void __fastcall Edge_CalculatePoint(const pmove_t *const pm, EdgeId edgeId, float fraction, vec3_t *outEdgePoint)
{
  ?Edge_CalculatePoint@@YAXQEBVpmove_t@@UEdgeId@@MAEATvec3_t@@@Z(pm, edgeId, fraction, outEdgePoint);
}

/*
==============
EdgeFrustumQueryShape::Calculate
==============
*/

void __fastcall EdgeFrustumQueryShape::Calculate(EdgeFrustumQueryShape *this, const EdgeFrustumQueryDefinition *definition)
{
  ?Calculate@EdgeFrustumQueryShape@@QEAAXAEBUEdgeFrustumQueryDefinition@@@Z(this, definition);
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, const float4 *entityUp, const float4 *viewBasis, float4 *outNormal, float4 *outParallel, float4 *outBelow)
{
  return ?Edge_CalculateVectors@@YA_KPEBVBgHandler@@UEdgeId@@MAEBUfloat4@@QEBU3@AEAU3@44@Z(handler, edgeId, fraction, entityUp, viewBasis, outNormal, outParallel, outBelow);
}

/*
==============
EdgeOctreeQueryCustomClip::EdgeOctreeQueryCustomClip
==============
*/

void __fastcall EdgeOctreeQueryCustomClip::EdgeOctreeQueryCustomClip(EdgeOctreeQueryCustomClip *this)
{
  ??0EdgeOctreeQueryCustomClip@@QEAA@XZ(this);
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, const float4 *entityUp, const float4 *viewBasis, float4 *outNormal, float4 *outParallel, float4 *outBelow, float4 *outOtherNormal)
{
  return ?Edge_CalculateVectors@@YA_KPEBVBgHandler@@UEdgeId@@MAEBUfloat4@@QEBU3@AEAU3@444@Z(handler, edgeId, fraction, entityUp, viewBasis, outNormal, outParallel, outBelow, outOtherNormal);
}

/*
==============
Edge_CalculateNormals
==============
*/

void __fastcall Edge_CalculateNormals(const BgHandler *handler, EdgeId edgeId, vec3_t *outNormal0, vec3_t *outNormal1)
{
  ?Edge_CalculateNormals@@YAXPEBVBgHandler@@UEdgeId@@AEATvec3_t@@2@Z(handler, edgeId, outNormal0, outNormal1);
}

/*
==============
Edge_GetAdjacentEdges
==============
*/

unsigned __int64 __fastcall Edge_GetAdjacentEdges(EdgeId edgeId, edgeFlags_t flag, AdjacentEdgeInfo *outAdjacentEdgeInfo)
{
  return ?Edge_GetAdjacentEdges@@YA_KUEdgeId@@W4edgeFlags_t@@QEAUAdjacentEdgeInfo@@@Z(edgeId, flag, outAdjacentEdgeInfo);
}

/*
==============
Edge_CalculatePoint
==============
*/

void __fastcall Edge_CalculatePoint(const BgHandler *handler, EdgeId edgeId, float fraction, vec3_t *outEdgePoint)
{
  ?Edge_CalculatePoint@@YAXPEBVBgHandler@@UEdgeId@@MAEATvec3_t@@@Z(handler, edgeId, fraction, outEdgePoint);
}

/*
==============
EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum
==============
*/

void __fastcall EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(EdgeOctreeQueryFrustum *this, const EdgeFrustumQueryShape *shape)
{
  ??0EdgeOctreeQueryFrustum@@QEAA@AEBUEdgeFrustumQueryShape@@@Z(this, shape);
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow, vec3_t *outOtherNormmal)
{
  return ?Edge_CalculateVectors@@YA_KPEBVBgHandler@@UEdgeId@@MAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT3@444@Z(handler, edgeId, fraction, entityUp, viewBasis, outNormal, outParallel, outBelow, outOtherNormmal);
}

/*
==============
Edge_GetLineSegment
==============
*/

void __fastcall Edge_GetLineSegment(const BgHandler *handler, EdgeId edgeId, float4 (*r_outLineSegment)[2])
{
  ?Edge_GetLineSegment@@YAXPEBVBgHandler@@UEdgeId@@AEAY01Ufloat4@@@Z(handler, edgeId, r_outLineSegment);
}

/*
==============
EdgeOctreeQueryFrustum::SetDistanceCenterBias
==============
*/

void __fastcall EdgeOctreeQueryFrustum::SetDistanceCenterBias(EdgeOctreeQueryFrustum *this, float centerBias)
{
  ?SetDistanceCenterBias@EdgeOctreeQueryFrustum@@QEAAXM@Z(this, centerBias);
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const pmove_t *const pm, EdgeId edgeId, float fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  return ?Edge_CalculateVectors@@YA_KQEBVpmove_t@@UEdgeId@@MAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT3@44@Z(pm, edgeId, fraction, entityUp, viewBasis, outNormal, outParallel, outBelow);
}

/*
==============
Edge_GetLineSegment
==============
*/

void __fastcall Edge_GetLineSegment(const BgHandler *handler, EdgeId edgeId, vec3_t (*outLineSegment)[2])
{
  ?Edge_GetLineSegment@@YAXPEBVBgHandler@@UEdgeId@@AEAY01Tvec3_t@@@Z(handler, edgeId, outLineSegment);
}

/*
==============
EdgeOctreeQueryCustomClip::Initialize
==============
*/

void __fastcall EdgeOctreeQueryCustomClip::Initialize(EdgeOctreeQueryCustomClip *this, unsigned __int64 numClipPlanes, const vec3_t *clipPlanePoints, const vec3_t *clipPlaneNormals)
{
  ?Initialize@EdgeOctreeQueryCustomClip@@QEAAX_KQEBTvec3_t@@1@Z(this, numClipPlanes, clipPlanePoints, clipPlaneNormals);
}

/*
==============
EdgeOctreeQueryShape::TrimLineSegmentByPlanes
==============
*/

void __fastcall EdgeOctreeQueryShape::TrimLineSegmentByPlanes(const float4 *r_lineSegmentPoint, const float4 *r_lineSegmentDir, const float4 *r_planes, unsigned __int64 planeCount, float *r_inOutTMin, float *r_inOutTMax)
{
  ?TrimLineSegmentByPlanes@EdgeOctreeQueryShape@@KAXAEBUfloat4@@0QEBU2@_KAEAM3@Z(r_lineSegmentPoint, r_lineSegmentDir, r_planes, planeCount, r_inOutTMin, r_inOutTMax);
}

/*
==============
EdgeOctreeQueryFrustum::Initialize
==============
*/

void __fastcall EdgeOctreeQueryFrustum::Initialize(EdgeOctreeQueryFrustum *this, const EdgeFrustumQueryShape *shape)
{
  ?Initialize@EdgeOctreeQueryFrustum@@IEAAXAEBUEdgeFrustumQueryShape@@@Z(this, shape);
}

/*
==============
Edge_GetEntityTransform
==============
*/

void __fastcall Edge_GetEntityTransform(const BgHandler *handler, const EdgeId *edgeId, vector4 *outTransform)
{
  ?Edge_GetEntityTransform@@YAXPEBVBgHandler@@AEBUEdgeId@@AEAUvector4@@@Z(handler, edgeId, outTransform);
}

/*
==============
EdgeOctreeQuerySphere::EdgeOctreeQuerySphere
==============
*/

void __fastcall EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(EdgeOctreeQuerySphere *this, const vec3_t *midpoint, float radius)
{
  ??0EdgeOctreeQuerySphere@@QEAA@AEBTvec3_t@@M@Z(this, midpoint, radius);
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  return ?Edge_CalculateVectors@@YA_KPEBVBgHandler@@UEdgeId@@MAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT3@44@Z(handler, edgeId, fraction, entityUp, viewBasis, outNormal, outParallel, outBelow);
}

/*
==============
Edge_CalculateClosestPoint
==============
*/

void __fastcall Edge_CalculateClosestPoint(const BgHandler *handler, const vec3_t *point, EdgeId edgeId, float *outEdgeFraction, vec3_t *outEdgePoint)
{
  ?Edge_CalculateClosestPoint@@YAXPEBVBgHandler@@AEBTvec3_t@@UEdgeId@@AEAMAEAT2@@Z(handler, point, edgeId, outEdgeFraction, outEdgePoint);
}

/*
==============
EdgeOctreeQueryShape::SetUserClipPlanes
==============
*/

void __fastcall EdgeOctreeQueryShape::SetUserClipPlanes(EdgeOctreeQueryShape *this, bool (__fastcall *testFunc)(const float4 *, const float4 *), const vec3_t *textAxis, unsigned __int64 numTrueClipPlanes, const vec3_t *trueClipPlanePoints, const vec3_t *trueClipPlaneNormals, unsigned __int64 numFalseClipPlanes, const vec3_t *falseClipPlanePoints, const vec3_t *falseClipPlaneNormals)
{
  ?SetUserClipPlanes@EdgeOctreeQueryShape@@QEAAXP6A_NAEBUfloat4@@0@ZAEBTvec3_t@@_KQEBT3@4344@Z(this, testFunc, textAxis, numTrueClipPlanes, trueClipPlanePoints, trueClipPlaneNormals, numFalseClipPlanes, falseClipPlanePoints, falseClipPlaneNormals);
}

/*
==============
Edge_CalculateLengthSq
==============
*/

double __fastcall Edge_CalculateLengthSq(EdgeId edgeId)
{
  double result; 

  *(float *)&result = ?Edge_CalculateLengthSq@@YAMUEdgeId@@@Z(edgeId);
  return result;
}

/*
==============
EdgeOctreeQueryCustomClip::EdgeOctreeQueryCustomClip
==============
*/
void EdgeOctreeQueryCustomClip::EdgeOctreeQueryCustomClip(EdgeOctreeQueryCustomClip *this)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  this->m_clipPlaneTestFunc = NULL;
  this->m_numUserClipPlanes = 0i64;
  this->m_numUserClipPlanesTrue = 0i64;
  this->m_numUserClipPlanesFalse = 0i64;
  __asm { vmovups xmmword ptr [rcx+40h], xmm0 }
}

/*
==============
EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum
==============
*/

void __fastcall EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(EdgeOctreeQueryFrustum *this, const vec3_t *origin, const tmat33_t<vec3_t> *axis, double horizHalfAngleRad, float vertHalfAngleRad, float nearDist, float farDist)
{
  EdgeOctreeQueryFrustum *v21; 
  char v23; 
  bool v24; 
  const float4 *v25; 
  bool v44; 
  bool v60; 
  bool v76; 
  bool v97; 
  bool v116; 
  bool v120; 
  bool v123; 
  bool v126; 
  const float4 *v215; 
  const float4 *v243; 
  const float4 *v244; 
  const float4 *v247; 
  const float4 *v248; 
  const float4 *v258; 
  const float4 *v259; 
  const float4 *v262; 
  const float4 *v263; 
  bool v278; 
  bool v279; 
  bool v280; 
  bool v281; 
  bool v282; 
  bool v283; 
  unsigned __int8 v284; 
  double v296; 
  double v297; 
  double v298; 
  double v299; 
  double v300; 
  double v301; 
  double v302; 
  double v303; 
  double v304; 
  double v305; 
  double v306; 
  double v307; 
  double v308; 
  double v309; 
  double v310; 
  double v311; 
  double v312; 
  double v313; 
  double v314; 
  double v315; 
  double v316; 
  double v317; 
  double v318; 
  double v319; 
  double v320; 
  double v321; 
  double v322; 
  double v323; 
  double v324; 
  double v325; 
  double v326; 
  double v327; 
  double v328; 
  __int64 v329; 
  EdgeFrustumQueryShape r_planeA_8; 
  __int64 v331; 
  float4 v332; 
  char v333; 
  void *retaddr; 

  _RAX = &retaddr;
  v331 = -2i64;
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
    vmovaps xmmword ptr [rax-0D8h], xmm15
    vmovaps xmm12, xmm3
  }
  _RBX = axis;
  _RSI = origin;
  v21 = this;
  __asm
  {
    vxorps  xmm14, xmm14, xmm14
    vmovups xmmword ptr [rcx+40h], xmm14
  }
  this->m_customClip.m_clipPlaneTestFunc = NULL;
  this->m_customClip.m_numUserClipPlanes = 0i64;
  this->m_customClip.m_numUserClipPlanesTrue = 0i64;
  this->m_customClip.m_numUserClipPlanesFalse = 0i64;
  __asm { vmovups xmmword ptr [rcx+190h], xmm14 }
  this->m_centerBias = 1.0;
  this->m_invCenterBias = 1.0;
  this->m_invAxisBias = 1.0;
  Sys_ProfBeginNamedEvent(0xFF008008, "EdgeOctreeQueryFrustum Full Constructor");
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
    vmovss  xmm6, cs:__real@3f800000
    vsubss  xmm0, xmm1, xmm6
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm0, xmm7
    vmovss  xmm8, cs:__real@3b03126f
    vcomiss xmm0, xmm8
  }
  if ( !v23 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm5, xmm5
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+290h+var_250], xmm1
      vmovsd  [rsp+290h+var_258], xmm2
      vmovsd  [rsp+290h+var_260], xmm3
      vmovsd  [rsp+290h+var_268], xmm0
    }
    v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 544, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", v296, v301, v306, v315);
    v23 = 0;
    v24 = !v44;
    if ( v44 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+10h]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmovss  xmm5, dword ptr [rbx+14h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v23 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm5, xmm5
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+290h+var_250], xmm1
      vmovsd  [rsp+290h+var_258], xmm2
      vmovsd  [rsp+290h+var_260], xmm3
      vmovsd  [rsp+290h+var_268], xmm0
    }
    v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 545, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", v297, v302, v307, v316);
    v23 = 0;
    v24 = !v60;
    if ( v60 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+1Ch]
    vmovss  xmm4, dword ptr [rbx+18h]
    vmovss  xmm5, dword ptr [rbx+20h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v23 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm5, xmm5
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+290h+var_250], xmm1
      vmovsd  [rsp+290h+var_258], xmm2
      vmovsd  [rsp+290h+var_260], xmm3
      vmovsd  [rsp+290h+var_268], xmm0
    }
    v76 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 546, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v298, v303, v308, v317);
    v23 = 0;
    v24 = !v76;
    if ( v76 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+10h]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+14h]
    vmovss  xmm10, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm10
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vmovss  xmm8, cs:__real@3a83126f
    vcomiss xmm0, xmm8
  }
  if ( !v23 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm9, xmm9
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vcvtss2sd xmm4, xmm10, xmm10
      vcvtss2sd xmm5, xmm5, xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  qword ptr [rsp+290h+var_238], xmm0
      vmovsd  [rsp+290h+var_240], xmm1
      vmovsd  [rsp+290h+var_248], xmm2
      vmovsd  [rsp+290h+var_250], xmm3
      vmovsd  [rsp+290h+var_258], xmm4
      vmovsd  [rsp+290h+var_260], xmm5
      vmovsd  [rsp+290h+var_268], xmm6
    }
    v97 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 547, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v299, v304, v309, v318, v324, v326, v328);
    v23 = 0;
    v24 = !v97;
    if ( v97 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+1Ch]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+18h]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+20h]
    vmovss  xmm10, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm10
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v23 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm9, xmm9
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vcvtss2sd xmm4, xmm10, xmm10
      vcvtss2sd xmm5, xmm5, xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  qword ptr [rsp+290h+var_238], xmm0
      vmovsd  [rsp+290h+var_240], xmm1
      vmovsd  [rsp+290h+var_248], xmm2
      vmovsd  [rsp+290h+var_250], xmm3
      vmovsd  [rsp+290h+var_258], xmm4
      vmovsd  [rsp+290h+var_260], xmm5
      vmovsd  [rsp+290h+var_268], xmm6
    }
    v116 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 548, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v300, v305, v310, v319, v325, v327, v328);
    v23 = 0;
    v24 = !v116;
    if ( v116 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorpd  xmm8, xmm8, xmm8
    vcomiss xmm12, xmm7
  }
  if ( v23 | v24 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm12, xmm12
      vmovsd  [rsp+290h+var_250], xmm0
      vmovsd  [rsp+290h+var_258], xmm8
    }
    v120 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 549, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( horizHalfAngleRad )", "%s < %s\n\t%g, %g", "0.0f", "horizHalfAngleRad", v311, v320);
    v23 = 0;
    v24 = !v120;
    if ( v120 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, [rbp+190h+vertHalfAngleRad]
    vcomiss xmm9, xmm7
  }
  if ( v23 | v24 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  [rsp+290h+var_250], xmm0
      vmovsd  [rsp+290h+var_258], xmm8
    }
    v123 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 550, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( vertHalfAngleRad )", "%s < %s\n\t%g, %g", "0.0f", "vertHalfAngleRad", v312, v321);
    v23 = 0;
    v24 = !v123;
    if ( v123 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rbp+190h+nearDist]
    vcomiss xmm6, xmm7
  }
  if ( v23 | v24 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+290h+var_250], xmm0
      vmovsd  [rsp+290h+var_258], xmm8
    }
    v126 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 551, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( nearDist )", "%s < %s\n\t%g, %g", "0.0f", "nearDist", v313, v322);
    v23 = 0;
    if ( v126 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm13, [rbp+190h+farDist]
    vcomiss xmm6, xmm13
  }
  if ( !v23 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm13, xmm13
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+290h+var_250], xmm0
      vmovsd  [rsp+290h+var_258], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 552, ASSERT_TYPE_ASSERT, "( nearDist ) < ( farDist )", "%s < %s\n\t%g, %g", "nearDist", "farDist", v314, v323) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [rsi] }
  v332.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm15, xmmword ptr [rbp+0A0h]
    vmovss  xmm15, xmm15, xmm0
    vinsertps xmm15, xmm15, dword ptr [rsi+4], 10h
    vinsertps xmm15, xmm15, dword ptr [rsi+8], 20h ; ' '
    vmovups xmmword ptr [rbp+0A0h], xmm15
    vmovss  xmm0, dword ptr [rbx]
  }
  v332.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rbp+0A0h]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [rbx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rbx+8], 20h ; ' '
    vmovups xmmword ptr [rbp+0A0h], xmm4
    vmovups [rbp+190h+var_110], xmm4
    vmovss  xmm0, dword ptr [rbx+0Ch]
  }
  v332.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm11, xmmword ptr [rbp+0A0h]
    vmovss  xmm11, xmm11, xmm0
    vinsertps xmm11, xmm11, dword ptr [rbx+10h], 10h
    vinsertps xmm11, xmm11, dword ptr [rbx+14h], 20h ; ' '
    vmovups xmmword ptr [rbp+0A0h], xmm11
    vsubps  xmm14, xmm14, xmm11
    vmovss  xmm0, dword ptr [rbx+18h]
  }
  v332.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rbp+0A0h]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [rbx+1Ch], 10h
    vinsertps xmm8, xmm8, dword ptr [rbx+20h], 20h ; ' '
    vmovups xmmword ptr [rbp+0A0h], xmm8
    vxorps  xmm3, xmm3, xmm3
    vsubps  xmm10, xmm3, xmm8
    vmovaps xmm7, xmm12
    vshufps xmm7, xmm7, xmm7, 0
    vshufps xmm9, xmm9, xmm9, 0
    vmovaps xmm12, xmm6
    vshufps xmm12, xmm12, xmm12, 0
    vshufps xmm13, xmm13, xmm13, 0
    vmulps  xmm0, xmm4, xmm12
    vaddps  xmm1, xmm0, xmm15
    vmulps  xmm2, xmm4, xmm1
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vshufps xmm2, xmm4, xmm0, 0FAh ; 'ú'
    vshufps xmm1, xmm4, xmm2, 84h ; '„'
    vmovups xmmword ptr [rsp+290h+r_planeA.v+8], xmm1
    vsubps  xmm3, xmm3, xmm4
    vmulps  xmm0, xmm4, xmm13
    vaddps  xmm1, xmm0, xmm15
    vmulps  xmm2, xmm3, xmm1
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vshufps xmm0, xmm3, xmm2, 0FAh ; 'ú'
    vshufps xmm0, xmm3, xmm0, 84h ; '„'
    vmovups xmmword ptr [rbp+190h+var_210.v], xmm0
    vmulps  xmm1, xmm8, xmm8
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vrsqrtps xmm0, xmm1
    vmulps  xmm6, xmm0, xmm8
    vmulps  xmm0, xmm7, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
  }
  Float4SinCos(v25, &v332, (float4 *)&v329);
  __asm
  {
    vmulps  xmm1, xmm6, xmmword ptr [rbp+190h+var_F0.v]
    vblendps xmm2, xmm1, [rsp+290h+var_238+8], 190h+var_190.v+8
    vshufps xmm3, xmm2, xmm2, 0FFh
    vshufps xmm5, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm1, xmm14, xmm14, 0D2h ; 'Ò'
    vshufps xmm4, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm0, xmm14, xmm14, 0C9h ; 'É'
    vmulps  xmm1, xmm5, xmm1
    vmulps  xmm0, xmm4, xmm0
    vsubps  xmm1, xmm1, xmm0
    vaddps  xmm2, xmm1, xmm1
    vmulps  xmm0, xmm3, xmm2
    vaddps  xmm3, xmm0, xmm14
    vshufps xmm1, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm0, xmm2, xmm2, 0C9h ; 'É'
    vmulps  xmm1, xmm5, xmm1
    vmulps  xmm0, xmm4, xmm0
    vsubps  xmm1, xmm1, xmm0
    vaddps  xmm3, xmm3, xmm1
    vmulps  xmm0, xmm15, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vshufps xmm1, xmm3, xmm0, 0FAh ; 'ú'
    vshufps xmm0, xmm3, xmm1, 84h ; '„'
    vmovups xmmword ptr [rbp+190h+r_planeC.v], xmm0
    vmulps  xmm2, xmm10, xmm10
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vrsqrtps xmm0, xmm2
    vmulps  xmm6, xmm0, xmm10
    vmulps  xmm0, xmm7, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
  }
  Float4SinCos(v215, (float4 *)&v329, &v332);
  __asm
  {
    vmulps  xmm1, xmm6, [rsp+290h+var_238+8]
    vblendps xmm2, xmm1, xmmword ptr [rbp+190h+var_F0.v], 190h+var_190.v+8
    vmovups xmmword ptr [rbp+190h+var_F0.v], xmm2
    vshufps xmm3, xmm2, xmm2, 0FFh
    vshufps xmm5, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm1, xmm11, xmm11, 0D2h ; 'Ò'
    vshufps xmm4, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm0, xmm11, xmm11, 0C9h ; 'É'
    vmulps  xmm1, xmm5, xmm1
    vmulps  xmm0, xmm4, xmm0
    vsubps  xmm1, xmm1, xmm0
    vaddps  xmm2, xmm1, xmm1
    vmulps  xmm0, xmm3, xmm2
    vaddps  xmm3, xmm0, xmm11
    vshufps xmm1, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm0, xmm2, xmm2, 0C9h ; 'É'
    vmulps  xmm1, xmm5, xmm1
    vmulps  xmm0, xmm4, xmm0
    vsubps  xmm1, xmm1, xmm0
    vaddps  xmm5, xmm3, xmm1
    vmulps  xmm2, xmm15, xmm5
    vinsertps xmm3, xmm2, xmm2, 8
    vhaddps xmm4, xmm3, xmm3
    vhaddps xmm2, xmm4, xmm4
    vshufps xmm3, xmm5, xmm2, 0FAh ; 'ú'
    vshufps xmm2, xmm5, xmm3, 84h ; '„'
    vmovups xmmword ptr [rbp+190h+var_1F0.v], xmm2
    vmovdqa xmmword ptr [rbp+190h+var_1E0.v], xmm8
    vmovups xmm1, xmm9
    vmovups xmm0, xmm11
  }
  Float4QuatRotationAxis(v244, v243, &v332);
  __asm
  {
    vmovups xmm1, xmm8
    vmovups xmm0, xmmword ptr [rbp+190h+var_F0.v]
  }
  Float4QuatTransform(v248, v247, &r_planeA_8.m_planes[4]);
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp+190h+var_1E0.v]
    vmulps  xmm2, xmm15, xmm5
    vinsertps xmm3, xmm2, xmm2, 8
    vhaddps xmm4, xmm3, xmm3
    vhaddps xmm2, xmm4, xmm4
    vshufps xmm3, xmm5, xmm2, 0FAh ; 'ú'
    vshufps xmm2, xmm5, xmm3, 84h ; '„'
    vmovups xmmword ptr [rbp+190h+var_1E0.v], xmm2
    vmovdqa xmmword ptr [rbp+190h+r_planeB.v], xmm10
    vmovups xmm1, xmm9
    vmovups xmm0, xmm14
  }
  Float4QuatRotationAxis(v259, v258, &v332);
  __asm
  {
    vmovups xmm1, xmm10
    vmovups xmm0, xmmword ptr [rbp+190h+var_F0.v]
  }
  Float4QuatTransform(v263, v262, &r_planeA_8.m_planes[5]);
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp+190h+r_planeB.v]
    vmulps  xmm0, xmm15, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vshufps xmm1, xmm3, xmm0, 0FAh ; 'ú'
    vshufps xmm0, xmm3, xmm1, 84h ; '„'
    vmovups xmmword ptr [rbp+190h+r_planeB.v], xmm0
    vmulps  xmm1, xmm12, [rbp+190h+var_110]
    vaddps  xmm0, xmm15, xmm1
    vmovups [rbp+190h+var_140], xmm0
    vmulps  xmm2, xmm13, [rbp+190h+var_110]
    vaddps  xmm0, xmm15, xmm2
    vmovups [rbp+190h+var_130], xmm0
    vmovss  xmm1, [rbp+190h+nearDist]
    vsubss  xmm2, xmm1, [rbp+190h+farDist]
    vshufps xmm2, xmm2, xmm2, 0
    vmovups [rbp+190h+var_120], xmm2
  }
  v278 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[2], r_planeA_8.m_corners);
  v279 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[1]) && v278;
  v280 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[2]) && v279;
  v281 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[3]) && v280;
  v282 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[4]) && v281;
  v283 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[5]) && v282;
  v284 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[6]) && v283;
  if ( (IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[7]) & v284) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 637, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tInvalid frustum from arguments.", "success") )
    __debugbreak();
  EdgeOctreeQueryFrustum::Initialize(v21, &r_planeA_8);
  Sys_ProfEndNamedEvent();
  _R11 = &v333;
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
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum
==============
*/

void __fastcall EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(EdgeOctreeQueryFrustum *this, const vec3_t *nearCenterPoint, double nearHalfWidth, double nearHalfHeight, const vec3_t *farCenterPoint, float farHalfWidth, float farHalfHeight, const vec3_t *up)
{
  EdgeOctreeQueryFrustum *v22; 
  char v26; 
  bool v27; 
  bool v31; 
  bool v33; 
  bool v36; 
  bool v70; 
  bool v253; 
  bool v254; 
  bool v255; 
  bool v256; 
  bool v257; 
  bool v258; 
  unsigned __int8 v259; 
  double v271; 
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
  EdgeFrustumQueryShape r_planeA_8; 
  __int64 v286; 
  __int128 v288; 
  char v289; 
  void *retaddr; 

  _RAX = &retaddr;
  v286 = -2i64;
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
    vmovaps xmmword ptr [rax-0D8h], xmm15
    vmovaps xmm11, xmm3
    vmovaps xmm12, xmm2
  }
  _RBX = nearCenterPoint;
  v22 = this;
  _RSI = farCenterPoint;
  _R14 = up;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovups xmmword ptr [rcx+40h], xmm8
  }
  this->m_customClip.m_clipPlaneTestFunc = NULL;
  this->m_customClip.m_numUserClipPlanes = 0i64;
  this->m_customClip.m_numUserClipPlanesTrue = 0i64;
  this->m_customClip.m_numUserClipPlanesFalse = 0i64;
  __asm { vmovups xmmword ptr [rcx+190h], xmm8 }
  this->m_centerBias = 1.0;
  this->m_invCenterBias = 1.0;
  this->m_invAxisBias = 1.0;
  Sys_ProfBeginNamedEvent(0xFF008008, "EdgeOctreeQueryFrustum Full Constructor");
  __asm
  {
    vcvtss2sd xmm0, xmm12, xmm12
    vmovsd  xmm6, cs:__real@3eb0c6f7a0000000
    vmovsd  xmm7, cs:__real@3eb0c6f7a0b5ed8d
    vcomisd xmm0, xmm7
  }
  if ( v26 | v27 )
  {
    __asm
    {
      vmovsd  [rsp+2C0h+var_280], xmm0
      vmovsd  [rsp+2C0h+var_288], xmm6
    }
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 652, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( nearHalfWidth )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "nearHalfWidth", v271, v277);
    v26 = 0;
    v27 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm
  {
    vcvtss2sd xmm0, xmm11, xmm11
    vcomisd xmm0, xmm7
  }
  if ( v26 | v27 )
  {
    __asm
    {
      vmovsd  [rsp+2C0h+var_280], xmm0
      vmovsd  [rsp+2C0h+var_288], xmm6
    }
    v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 653, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( nearHalfHeight )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "nearHalfHeight", v272, v278);
    v26 = 0;
    v27 = !v33;
    if ( v33 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, [rbp+1C0h+farHalfWidth]
    vcvtss2sd xmm0, xmm10, xmm10
    vcomisd xmm0, xmm7
  }
  if ( v26 | v27 )
  {
    __asm
    {
      vmovsd  [rsp+2C0h+var_280], xmm0
      vmovsd  [rsp+2C0h+var_288], xmm6
    }
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 654, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( farHalfWidth )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "farHalfWidth", v273, v279);
    v26 = 0;
    v27 = !v36;
    if ( v36 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, [rbp+1C0h+farHalfHeight]
    vcvtss2sd xmm0, xmm9, xmm9
    vcomisd xmm0, xmm7
  }
  if ( v26 | v27 )
  {
    __asm
    {
      vmovsd  [rsp+2C0h+var_280], xmm0
      vmovsd  [rsp+2C0h+var_288], xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 655, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( farHalfHeight )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "farHalfHeight", v274, v280) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [rbx] }
  HIDWORD(v288) = 0;
  __asm
  {
    vmovups xmm13, xmmword ptr [rbp+0D0h]
    vmovss  xmm13, xmm13, xmm0
    vinsertps xmm13, xmm13, dword ptr [rbx+4], 10h
    vinsertps xmm13, xmm13, dword ptr [rbx+8], 20h ; ' '
    vmovups xmmword ptr [rbp+0D0h], xmm13
    vmovups [rbp+1C0h+var_180], xmm13
    vmovss  xmm0, dword ptr [rsi]
  }
  HIDWORD(v288) = 0;
  __asm
  {
    vmovups xmm14, xmmword ptr [rbp+0D0h]
    vmovss  xmm14, xmm14, xmm0
    vinsertps xmm14, xmm14, dword ptr [rsi+4], 10h
    vinsertps xmm14, xmm14, dword ptr [rsi+8], 20h ; ' '
    vmovups xmmword ptr [rbp+0D0h], xmm14
    vmovups [rbp+1C0h+var_170], xmm14
    vmovaps xmm15, xmm12
    vshufps xmm15, xmm15, xmm15, 0
    vmovaps xmm0, xmm11
    vshufps xmm0, xmm0, xmm0, 0
    vmovups [rbp+1C0h+var_100], xmm0
    vmovaps xmm0, xmm10
    vshufps xmm0, xmm0, xmm0, 0
    vmovups [rsp+2C0h+var_278+8], xmm0
    vmovaps xmm0, xmm9
    vshufps xmm0, xmm0, xmm0, 0
    vmovups [rbp+1C0h+var_140], xmm0
    vmovss  xmm0, dword ptr [r14]
  }
  HIDWORD(v288) = 0;
  __asm
  {
    vmovups xmm12, xmmword ptr [rbp+0D0h]
    vmovss  xmm12, xmm12, xmm0
    vinsertps xmm12, xmm12, dword ptr [r14+4], 10h
    vinsertps xmm12, xmm12, dword ptr [r14+8], 20h ; ' '
    vmovups xmmword ptr [rbp+0D0h], xmm12
    vsubps  xmm0, xmm8, xmm12
    vmovups xmmword ptr [rbp+0D0h], xmm0
    vsubps  xmm9, xmm14, xmm13
    vmulps  xmm0, xmm9, xmm9
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vsqrtps xmm10, xmm2
    vmovups [rbp+1C0h+var_160], xmm10
    vcvtss2sd xmm0, xmm10, xmm10
    vcomisd xmm0, xmm7
    vmovsd  [rsp+2C0h+var_280], xmm0
    vmovsd  [rsp+2C0h+var_288], xmm6
  }
  v70 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 678, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( Float4ExtractX( shape.m_nearToFarDist ) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "Float4ExtractX( shape.m_nearToFarDist )", v275, v281);
  if ( v70 )
    __debugbreak();
  __asm
  {
    vdivps  xmm6, xmm9, xmm10
    vmovups [rbp+1C0h+var_150], xmm6
    vmulps  xmm0, xmm12, xmm6
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v70 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  xmm0, cs:__real@3f50624de0000000
      vmovsd  [rsp+2C0h+var_280], xmm0
      vmovsd  [rsp+2C0h+var_288], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 686, ASSERT_TYPE_ASSERT, "( Float4ExtractX( dot4 ) ) <= ( 0.001f )", "%s <= %s\n\t%g, %g", "Float4ExtractX( dot4 )", "EQUAL_EPSILON", v276, v282) )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm3, xmm6, xmm6, 0C9h ; 'É'
    vshufps xmm1, xmm12, xmm12, 0D2h ; 'Ò'
    vshufps xmm2, xmm6, xmm6, 0D2h ; 'Ò'
    vshufps xmm0, xmm12, xmm12, 0C9h ; 'É'
    vmulps  xmm1, xmm3, xmm1
    vmulps  xmm0, xmm2, xmm0
    vsubps  xmm7, xmm1, xmm0
    vsubps  xmm4, xmm8, xmm7
    vmulps  xmm0, xmm13, xmm6
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vshufps xmm1, xmm6, xmm0, 0FAh ; 'ú'
    vshufps xmm0, xmm6, xmm1, 84h ; '„'
    vmovups xmmword ptr [rsp+2C0h+r_planeA.v+8], xmm0
    vsubps  xmm3, xmm8, xmm6
    vmulps  xmm0, xmm14, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vshufps xmm1, xmm3, xmm0, 0FAh ; 'ú'
    vshufps xmm0, xmm3, xmm1, 84h ; '„'
    vmovups xmmword ptr [rsp+2C0h+var_258.v+8], xmm0
    vmulps  xmm11, xmm15, xmm4
    vaddps  xmm6, xmm13, xmm11
    vmovups xmm8, [rbp+1C0h+var_100]
    vmulps  xmm9, xmm8, xmmword ptr [rbp+0D0h]
    vaddps  xmm1, xmm6, xmm9
    vmulps  xmm0, xmm4, [rsp+2C0h+var_278+8]
    vaddps  xmm4, xmm14, xmm0
    vsubps  xmm3, xmm1, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm3, xmm1
    vsubps  xmm4, xmm4, xmm6
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm4, xmm1
    vshufps xmm4, xmm5, xmm5, 0C9h ; 'É'
    vshufps xmm1, xmm3, xmm3, 0D2h ; 'Ò'
    vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
    vmulps  xmm1, xmm4, xmm1
    vmulps  xmm0, xmm2, xmm0
    vsubps  xmm3, xmm1, xmm0
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vsqrtps xmm0, xmm1
    vdivps  xmm4, xmm3, xmm0
    vmulps  xmm1, xmm6, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vshufps xmm0, xmm4, xmm1, 0FAh ; 'ú'
    vshufps xmm0, xmm4, xmm0, 84h ; '„'
    vmovups xmmword ptr [rbp+1C0h+r_planeC.v], xmm0
    vmulps  xmm10, xmm15, xmm7
    vaddps  xmm6, xmm10, xmm13
    vmulps  xmm8, xmm8, xmm12
    vaddps  xmm1, xmm8, xmm6
    vmulps  xmm0, xmm7, [rsp+2C0h+var_278+8]
    vaddps  xmm4, xmm0, xmm14
    vsubps  xmm3, xmm1, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm3, xmm1
    vsubps  xmm4, xmm4, xmm6
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm4, xmm1
    vshufps xmm4, xmm5, xmm5, 0C9h ; 'É'
    vshufps xmm1, xmm3, xmm3, 0D2h ; 'Ò'
    vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
    vmulps  xmm1, xmm4, xmm1
    vmulps  xmm0, xmm2, xmm0
    vsubps  xmm3, xmm1, xmm0
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vsqrtps xmm0, xmm1
    vdivps  xmm4, xmm3, xmm0
    vmulps  xmm1, xmm6, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vshufps xmm0, xmm4, xmm1, 0FAh ; 'ú'
    vshufps xmm0, xmm4, xmm0, 84h ; '„'
    vmovups xmmword ptr [rbp+1C0h+var_230.v], xmm0
    vaddps  xmm6, xmm13, xmm9
    vaddps  xmm1, xmm6, xmm11
    vmovups xmm7, [rbp+1C0h+var_140]
    vmulps  xmm0, xmm7, xmmword ptr [rbp+0D0h]
    vaddps  xmm4, xmm14, xmm0
    vsubps  xmm3, xmm1, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm3, xmm1
    vsubps  xmm4, xmm4, xmm6
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm4, xmm1
    vshufps xmm4, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm3, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm1, xmm4, xmm1
    vmulps  xmm0, xmm3, xmm0
    vsubps  xmm4, xmm1, xmm0
    vmulps  xmm1, xmm4, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vsqrtps xmm0, xmm1
    vdivps  xmm3, xmm4, xmm0
    vmulps  xmm1, xmm6, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vshufps xmm0, xmm3, xmm1, 0FAh ; 'ú'
    vshufps xmm0, xmm3, xmm0, 84h ; '„'
    vmovups xmmword ptr [rbp+1C0h+var_220.v], xmm0
    vaddps  xmm6, xmm13, xmm8
    vaddps  xmm1, xmm6, xmm10
    vmulps  xmm0, xmm7, xmm12
    vaddps  xmm4, xmm14, xmm0
    vsubps  xmm3, xmm1, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm3, xmm1
    vsubps  xmm3, xmm4, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm3, xmm1
    vshufps xmm3, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm1, xmm3, xmm1
    vmulps  xmm0, xmm2, xmm0
    vsubps  xmm3, xmm1, xmm0
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vsqrtps xmm0, xmm1
    vdivps  xmm4, xmm3, xmm0
    vmulps  xmm1, xmm6, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vshufps xmm0, xmm4, xmm1, 0FAh ; 'ú'
    vshufps xmm0, xmm4, xmm0, 84h ; '„'
    vmovups xmmword ptr [rbp+1C0h+r_planeB.v], xmm0
  }
  v253 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[2], r_planeA_8.m_corners);
  v254 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[1]) && v253;
  v255 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[2]) && v254;
  v256 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[3]) && v255;
  v257 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[4]) && v256;
  v258 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[5]) && v257;
  v259 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[6]) && v258;
  if ( (IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[7]) & v259) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 774, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tInvalid frustum from arguments.", "success") )
    __debugbreak();
  EdgeOctreeQueryFrustum::Initialize(v22, &r_planeA_8);
  Sys_ProfEndNamedEvent();
  _R11 = &v289;
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
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum
==============
*/
void EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(EdgeOctreeQueryFrustum *this, const EdgeFrustumQueryShape *shape)
{
  this->m_customClip.m_clipPlaneTestFunc = NULL;
  this->m_customClip.m_numUserClipPlanes = 0i64;
  this->m_customClip.m_numUserClipPlanesTrue = 0i64;
  this->m_customClip.m_numUserClipPlanesFalse = 0i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmmword ptr [rcx+190h], xmm0
  }
  this->m_centerBias = 1.0;
  this->m_invCenterBias = 1.0;
  this->m_invAxisBias = 1.0;
  EdgeOctreeQueryFrustum::Initialize(this, shape);
}

/*
==============
EdgeOctreeQuerySphere::EdgeOctreeQuerySphere
==============
*/

void __fastcall EdgeOctreeQuerySphere::EdgeOctreeQuerySphere(EdgeOctreeQuerySphere *this, const vec3_t *midpoint, double radius)
{
  double v21; 
  double v22; 
  __int128 v23; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RDI = midpoint;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps xmm6, xmm2
  }
  _RBX = this;
  this->m_customClip.m_clipPlaneTestFunc = NULL;
  __asm { vmovups xmmword ptr [rcx+40h], xmm0 }
  this->m_customClip.m_numUserClipPlanes = 0i64;
  this->m_customClip.m_numUserClipPlanesTrue = 0i64;
  this->m_customClip.m_numUserClipPlanesFalse = 0i64;
  __asm
  {
    vcvtss2sd xmm0, xmm6, xmm2
    vmovsd  [rsp+88h+var_48], xmm0
    vxorpd  xmm1, xmm1, xmm1
    vmovsd  [rsp+88h+var_50], xmm1
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 347, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( radius )", "%s < %s\n\t%g, %g", "0.0f", "radius", v21, v22) )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rdi] }
  HIDWORD(v23) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+50h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdi+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+8], 20h ; ' '
    vmovaps xmm0, xmm6
    vshufps xmm0, xmm0, xmm0, 0
    vmovups xmmword ptr [rbx+80h], xmm0
    vmulss  xmm0, xmm6, xmm6
    vmovss  dword ptr [rbx+90h], xmm0
    vmovups xmmword ptr [rbx+70h], xmm3
    vmovaps xmm6, [rsp+88h+var_18]
  }
}

/*
==============
EdgeOctreeQueryFrustum::CalcVertexBlendFunc
==============
*/
void (*EdgeOctreeQueryFrustum::CalcVertexBlendFunc(const float4 *r_plane, __int64 a2))(const float4 *__struct_ptr, const float4 *__struct_ptr, float4 *)
{
  void (*v5)(const float4 *__struct_ptr, const float4 *__struct_ptr, float4 *); 
  unsigned __int64 i; 
  char v14; 
  char v15; 
  void (*result)(const float4 *__struct_ptr, const float4 *__struct_ptr, float4 *); 
  __int128 v18; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovups xmm6, cs:__xmm@ff7fffffff7fffffff7fffffff7fffff
  }
  _RSI = r_plane;
  v5 = Float4Blendxyzw;
  for ( i = 0i64; i < 8; ++i )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vmovups xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    }
    ((void (__fastcall *)(const float4 *, __int64, __int128 *))blendFunc[i])(r_plane, a2, &v18);
    __asm
    {
      vmovups xmm1, xmmword ptr [rsi]
      vmulps  xmm1, xmm1, [rsp+58h+var_38]
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vcomiss xmm1, xmm6
    }
    if ( !(v14 | v15) )
    {
      v5 = (void (*)(const float4 *__struct_ptr, const float4 *__struct_ptr, float4 *))blendFunc[i];
      __asm { vmovups xmm6, xmm1 }
    }
  }
  result = v5;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
EdgeFrustumQueryShape::Calculate
==============
*/
void EdgeFrustumQueryShape::Calculate(EdgeFrustumQueryShape *this, const EdgeFrustumQueryDefinition *definition)
{
  bool v13; 
  bool v20; 
  bool v23; 
  bool v26; 
  bool v225; 
  bool v226; 
  bool v227; 
  bool v228; 
  bool v229; 
  bool v230; 
  unsigned __int8 v231; 
  _BYTE v243[32]; 
  double v244; 
  double v245; 
  __int64 v247; 
  char v248; 
  void *retaddr; 

  _RAX = &retaddr;
  v247 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  v13 = (unsigned __int64)v243 == _security_cookie;
  _RBX = definition;
  _R13 = this;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  xmm7, cs:__real@3eb0c6f7a0000000
    vmovsd  xmm6, cs:__real@3eb0c6f7a0b5ed8d
    vcomisd xmm0, xmm6
  }
  if ( (unsigned __int64)v243 == _security_cookie )
  {
    __asm
    {
      vmovsd  [rsp+168h+var_128], xmm0
      vmovsd  [rsp+168h+var_130], xmm7
    }
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 357, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( definition.nearHalfWidth )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "definition.nearHalfWidth", v244, v245);
    v13 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, xmm6
  }
  if ( v13 )
  {
    __asm
    {
      vmovsd  [rsp+168h+var_128], xmm0
      vmovsd  [rsp+168h+var_130], xmm7
    }
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 358, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( definition.nearHalfHeight )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "definition.nearHalfHeight", v244, v245);
    v13 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, xmm6
  }
  if ( v13 )
  {
    __asm
    {
      vmovsd  [rsp+168h+var_128], xmm0
      vmovsd  [rsp+168h+var_130], xmm7
    }
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 359, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( definition.farHalfWidth )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "definition.farHalfWidth", v244, v245);
    v13 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, xmm6
  }
  if ( v13 )
  {
    __asm
    {
      vmovsd  [rsp+168h+var_128], xmm0
      vmovsd  [rsp+168h+var_130], xmm7
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 360, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( definition.farHalfHeight )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "definition.farHalfHeight", v244, v245) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+10h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rbx+14h]
    vcomiss xmm1, xmm0
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+168h+var_128], xmm0
    vmovsd  [rsp+168h+var_130], xmm1
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 362, ASSERT_TYPE_ASSERT, "( definition.nearDist ) < ( definition.farDist )", "%s < %s\n\t%g, %g", "definition.nearDist", "definition.farDist", v244, v245) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "EdgeOctreeQueryFrustum::Shape::Calculate");
  __asm
  {
    vmovups xmm6, cs:__xmm@0000000000000000000000003f800000
    vmovups xmmword ptr [r13+110h], xmm6
    vbroadcastss xmm0, dword ptr [rbx+10h]
    vmulps  xmm1, xmm6, xmm0
    vmovups xmmword ptr [r13+0E0h], xmm1
    vbroadcastss xmm0, dword ptr [rbx+14h]
    vmulps  xmm1, xmm6, xmm0
    vmovups xmmword ptr [r13+0F0h], xmm1
    vbroadcastss xmm8, dword ptr [rbx]
    vbroadcastss xmm11, dword ptr [rbx+4]
    vbroadcastss xmm13, dword ptr [rbx+8]
    vbroadcastss xmm0, dword ptr [rbx+0Ch]
    vmovups [rsp+168h+var_118], xmm0
    vmovups xmm15, cs:__xmm@000000003f8000000000000000000000
    vxorps  xmm4, xmm4, xmm4
    vsubps  xmm14, xmm4, xmm15
    vmovss  xmm0, dword ptr [rbx+14h]
    vsubss  xmm2, xmm0, dword ptr [rbx+10h]
    vshufps xmm2, xmm2, xmm2, 0
    vmovups xmmword ptr [r13+100h], xmm2
    vshufps xmm3, xmm6, xmm6, 0C9h ; 'É'
    vshufps xmm1, xmm15, xmm15, 0D2h ; 'Ò'
    vshufps xmm2, xmm6, xmm6, 0D2h ; 'Ò'
    vshufps xmm0, xmm15, xmm15, 0C9h ; 'É'
    vmulps  xmm1, xmm3, xmm1
    vmulps  xmm0, xmm2, xmm0
    vsubps  xmm7, xmm1, xmm0
    vsubps  xmm5, xmm4, xmm7
    vmovups xmmword ptr [r13+0], xmm6
    vmulps  xmm1, xmm6, xmmword ptr [r13+0E0h]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vshufps xmm0, xmm6, xmm1, 0FAh ; 'ú'
    vshufps xmm0, xmm6, xmm0, 84h ; '„'
    vmovups xmmword ptr [r13+0], xmm0
    vsubps  xmm2, xmm4, xmmword ptr [r13+110h]
    vmovups xmmword ptr [r13+10h], xmm2
    vmulps  xmm1, xmm2, xmmword ptr [r13+0F0h]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm3, xmm0, xmm0
    vmovups xmm1, xmmword ptr [r13+10h]
    vshufps xmm0, xmm1, xmm3, 0FAh ; 'ú'
    vshufps xmm0, xmm1, xmm0, 84h ; '„'
    vmovups xmmword ptr [r13+10h], xmm0
    vmulps  xmm12, xmm8, xmm5
    vaddps  xmm6, xmm12, xmmword ptr [r13+0E0h]
    vmulps  xmm9, xmm11, xmm14
    vaddps  xmm2, xmm6, xmm9
    vmulps  xmm0, xmm13, xmm5
    vaddps  xmm4, xmm0, xmmword ptr [r13+0F0h]
    vsubps  xmm3, xmm2, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm3, xmm1
    vsubps  xmm4, xmm4, xmm6
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm4, xmm1
    vshufps xmm4, xmm5, xmm5, 0C9h ; 'É'
    vshufps xmm1, xmm3, xmm3, 0D2h ; 'Ò'
    vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
    vmulps  xmm1, xmm4, xmm1
    vmulps  xmm0, xmm2, xmm0
    vsubps  xmm3, xmm1, xmm0
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm4, xmm3, xmm1
    vmulps  xmm0, xmm6, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vshufps xmm0, xmm4, xmm0, 0FAh ; 'ú'
    vshufps xmm0, xmm4, xmm0, 84h ; '„'
    vmovups xmmword ptr [r13+20h], xmm0
    vmulps  xmm10, xmm8, xmm7
    vaddps  xmm6, xmm10, xmmword ptr [r13+0E0h]
    vmulps  xmm8, xmm11, xmm15
    vaddps  xmm2, xmm8, xmm6
    vmulps  xmm0, xmm13, xmm7
    vaddps  xmm4, xmm0, xmmword ptr [r13+0F0h]
    vsubps  xmm3, xmm2, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm3, xmm1
    vsubps  xmm4, xmm4, xmm6
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm4, xmm1
    vshufps xmm4, xmm5, xmm5, 0C9h ; 'É'
    vshufps xmm1, xmm3, xmm3, 0D2h ; 'Ò'
    vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
    vmulps  xmm1, xmm4, xmm1
    vmulps  xmm0, xmm2, xmm0
    vsubps  xmm3, xmm1, xmm0
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm4, xmm3, xmm1
    vmulps  xmm0, xmm6, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vshufps xmm0, xmm4, xmm0, 0FAh ; 'ú'
    vshufps xmm0, xmm4, xmm0, 84h ; '„'
    vmovups xmmword ptr [r13+30h], xmm0
    vaddps  xmm6, xmm9, xmmword ptr [r13+0E0h]
    vaddps  xmm2, xmm6, xmm12
    vmulps  xmm0, xmm14, [rsp+168h+var_118]
    vaddps  xmm4, xmm0, xmmword ptr [r13+0F0h]
    vsubps  xmm3, xmm2, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm3, xmm1
    vsubps  xmm4, xmm4, xmm6
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm4, xmm1
    vshufps xmm4, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm3, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm1, xmm4, xmm1
    vmulps  xmm0, xmm3, xmm0
    vsubps  xmm4, xmm1, xmm0
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm4, xmm1
    vmulps  xmm0, xmm6, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vshufps xmm0, xmm3, xmm0, 0FAh ; 'ú'
    vshufps xmm0, xmm3, xmm0, 84h ; '„'
    vmovups xmmword ptr [r13+40h], xmm0
    vaddps  xmm6, xmm8, xmmword ptr [r13+0E0h]
    vaddps  xmm2, xmm6, xmm10
    vmulps  xmm0, xmm15, [rsp+168h+var_118]
    vaddps  xmm4, xmm0, xmmword ptr [r13+0F0h]
    vsubps  xmm3, xmm2, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm3, xmm1
    vsubps  xmm3, xmm4, xmm6
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm3, xmm1
    vshufps xmm3, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm1, xmm3, xmm1
    vmulps  xmm0, xmm2, xmm0
    vsubps  xmm3, xmm1, xmm0
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm4, xmm3, xmm1
    vmulps  xmm0, xmm6, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vshufps xmm0, xmm4, xmm0, 0FAh ; 'ú'
    vshufps xmm0, xmm4, xmm0, 84h ; '„'
    vmovups xmmword ptr [r13+50h], xmm0
  }
  v225 = IntersectThreePlanes(_R13->m_planes, &_R13->m_planes[5], &_R13->m_planes[2], _R13->m_corners);
  v226 = IntersectThreePlanes(_R13->m_planes, &_R13->m_planes[5], &_R13->m_planes[3], &_R13->m_corners[1]) && v225;
  v227 = IntersectThreePlanes(_R13->m_planes, &_R13->m_planes[4], &_R13->m_planes[2], &_R13->m_corners[2]) && v226;
  v228 = IntersectThreePlanes(_R13->m_planes, &_R13->m_planes[4], &_R13->m_planes[3], &_R13->m_corners[3]) && v227;
  v229 = IntersectThreePlanes(&_R13->m_planes[1], &_R13->m_planes[5], &_R13->m_planes[2], &_R13->m_corners[4]) && v228;
  v230 = IntersectThreePlanes(&_R13->m_planes[1], &_R13->m_planes[5], &_R13->m_planes[3], &_R13->m_corners[5]) && v229;
  v231 = IntersectThreePlanes(&_R13->m_planes[1], &_R13->m_planes[4], &_R13->m_planes[2], &_R13->m_corners[6]) && v230;
  if ( (IntersectThreePlanes(&_R13->m_planes[1], &_R13->m_planes[4], &_R13->m_planes[3], &_R13->m_corners[7]) & v231) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 476, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tInvalid frustum from arguments.", "success") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  _R11 = &v248;
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
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
Edge_CalculateClosestPoint
==============
*/
void Edge_CalculateClosestPoint(const BgHandler *handler, const vec3_t *point, EdgeId edgeId, float *outEdgeFraction, vec3_t *outEdgePoint)
{
  unsigned int EdgeIndex; 
  __int64 v30; 
  unsigned int EntityIndex; 
  __int64 v32; 
  int v33; 
  EdgeId v34; 
  float4 edgeId_8; 
  float4 outLineSegment_8[2]; 
  float4 pointa; 
  vector4 outTransform; 
  EdgeId v39[2]; 
  __int128 v41; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v41;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RSI = outEdgePoint;
  v34 = edgeId;
  _R14 = outEdgeFraction;
  _RBX = point;
  if ( EdgeId::GetEntityIndex(&v34) >= 0x7A920 )
  {
    v33 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&v34);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1094, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v33) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [rbx] }
  v39[1].m_entityIndex = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp+40h+var_70.m_edgeIndex]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
    vmovups xmmword ptr [rbp+40h+var_70.m_edgeIndex], xmm3
  }
  v39[1] = *(EdgeId *)((char *)&_RT0 + 8);
  v39[0] = v34;
  __asm { vmovups xmmword ptr [rbp+40h+point.v], xmm3 }
  if ( EdgeId::GetEntityIndex(v39) >= 0x7A920 )
  {
    LODWORD(v32) = 502048;
    LODWORD(v30) = EdgeId::GetEntityIndex(v39);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1108, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v30, v32) )
      __debugbreak();
  }
  *(EdgeId *)edgeId_8.v.m128_f32 = v39[0];
  if ( EdgeId::GetIsDynamic((EdgeId *)&edgeId_8) )
  {
    Edge_GetEntityTransform(handler, (const EdgeId *)&edgeId_8, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, (const EdgeId *)&edgeId_8, (float4 (*)[2])outLineSegment_8, NULL);
    __asm
    {
      vmovups xmm7, xmmword ptr [rsp+140h+outLineSegment.v+18h]
      vmovups xmm6, xmmword ptr [rsp+140h+outLineSegment.v+8]
    }
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex((EdgeId *)&edgeId_8);
    _RAX = MapEdgeList_LookupSegment(EdgeIndex);
    __asm
    {
      vmovups xmm6, xmmword ptr [rax]
      vmovups xmm7, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rsp+140h+outLineSegment.v+8], xmm6
      vmovups xmmword ptr [rsp+140h+outLineSegment.v+18h], xmm7
    }
  }
  Float4PointLineSegmentDistSq(outLineSegment_8, &outLineSegment_8[1], &pointa, &edgeId_8);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+140h+edgeId.m_edgeIndex+8]
    vmovss  dword ptr [r14], xmm1
    vsubps  xmm0, xmm7, xmm6
    vmulps  xmm1, xmm0, xmm1
    vaddps  xmm2, xmm1, xmm6
    vmovss  dword ptr [rsi], xmm2
    vextractps dword ptr [rsi+4], xmm2, 1
    vextractps dword ptr [rsi+8], xmm2, 2
    vmovaps xmm6, [rsp+140h+var_48+8]
    vmovaps xmm7, [rsp+140h+var_58+8]
  }
}

/*
==============
Edge_CalculateClosestPoint
==============
*/
void Edge_CalculateClosestPoint(const BgHandler *handler, const float4 *point, EdgeId edgeId, float *outEdgeFraction, float4 *outEdgePoint)
{
  unsigned int EdgeIndex; 
  unsigned int EntityIndex; 
  int v24; 
  EdgeId v25; 
  EdgeId edgeIda[2]; 
  float4 outLineSegment[2]; 
  vector4 outTransform; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RBP = outEdgePoint;
  v25 = edgeId;
  _RSI = outEdgeFraction;
  if ( EdgeId::GetEntityIndex(&v25) >= 0x7A920 )
  {
    v24 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&v25);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1108, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v24) )
      __debugbreak();
  }
  edgeIda[0] = v25;
  if ( EdgeId::GetIsDynamic(edgeIda) )
  {
    Edge_GetEntityTransform(handler, edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, edgeIda, (float4 (*)[2])outLineSegment, NULL);
    __asm
    {
      vmovups xmm7, xmmword ptr [rsp+118h+outLineSegment.v+10h]
      vmovups xmm6, xmmword ptr [rsp+118h+outLineSegment.v]
    }
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(edgeIda);
    _RAX = MapEdgeList_LookupSegment(EdgeIndex);
    __asm
    {
      vmovups xmm6, xmmword ptr [rax]
      vmovups xmm7, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rsp+118h+outLineSegment.v], xmm6
      vmovups xmmword ptr [rsp+118h+outLineSegment.v+10h], xmm7
    }
  }
  Float4PointLineSegmentDistSq(outLineSegment, &outLineSegment[1], point, (float4 *)edgeIda);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+118h+edgeId.m_edgeIndex]
    vmovss  dword ptr [rsi], xmm1
    vsubps  xmm0, xmm7, xmm6
    vmulps  xmm1, xmm0, xmm1
    vaddps  xmm2, xmm1, xmm6
    vmovups xmmword ptr [rbp+0], xmm2
    vmovaps xmm6, [rsp+118h+var_38]
    vmovaps xmm7, [rsp+118h+var_48]
  }
}

/*
==============
Edge_CalculateLengthSq
==============
*/
float Edge_CalculateLengthSq(EdgeId edgeId)
{
  unsigned int EdgeIndex; 
  EdgeId v9; 

  v9 = edgeId;
  EdgeIndex = EdgeId::GetEdgeIndex(&v9);
  _RAX = MapEdgeList_LookupSegment(EdgeIndex);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vsubps  xmm1, xmm0, xmmword ptr [rax+10h]
    vmulps  xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Edge_CalculateNormals
==============
*/
void Edge_CalculateNormals(const BgHandler *handler, EdgeId edgeId, vec3_t *outNormal0, vec3_t *outNormal1)
{
  char v7; 
  bool v25; 
  unsigned int EntityIndex; 
  double v42; 
  double v43; 
  int v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  EdgeId edgeIda; 
  float4 outNormal1a; 
  float4 r_outNormal0; 

  edgeIda = edgeId;
  _RBX = outNormal1;
  _RDI = outNormal0;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v44 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1319, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v44) )
      __debugbreak();
  }
  Edge_CalculateNormals(handler, edgeIda, &r_outNormal0, &outNormal1a, NULL);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+0A8h+r_outNormal0.v]
    vmovups xmm2, xmmword ptr [rsp+0A8h+outNormal1.v]
    vmovss  dword ptr [rdi], xmm1
    vextractps dword ptr [rdi+4], xmm1, 1
    vextractps dword ptr [rdi+8], xmm1, 2
    vmovss  dword ptr [rbx], xmm2
    vextractps dword ptr [rbx+4], xmm2, 1
    vextractps dword ptr [rbx+8], xmm2, 2
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm5, dword ptr [rdi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v7 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0A8h+var_68], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+0A8h+var_70], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0A8h+var_78], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+0A8h+var_80], xmm0
    }
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1328, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal0 ) )", "(%g, %g, %g) len %g", v42, v45, v47, v49);
    v7 = 0;
    if ( v25 )
      __debugbreak();
  }
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
  if ( !v7 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0A8h+var_68], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+0A8h+var_70], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0A8h+var_78], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+0A8h+var_80], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1329, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal1 ) )", "(%g, %g, %g) len %g", v43, v46, v48, v50) )
      __debugbreak();
  }
}

/*
==============
Edge_CalculateNormals
==============
*/
void Edge_CalculateNormals(const BgHandler *handler, EdgeId edgeId, float4 *r_outNormal0, float4 *outNormal1, float4 *outLineDir)
{
  unsigned int EdgeIndex; 
  const float4 *v16; 
  unsigned int v19; 
  int packedOpenAngle; 
  unsigned int EntityIndex; 
  int v59; 
  EdgeId edgeIda; 
  float4 outLineSegment[2]; 
  float4 v62; 
  vector4 outTransform; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RBX = outLineDir;
  edgeIda = edgeId;
  _R14 = outNormal1;
  _RSI = r_outNormal0;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v59 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1337, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v59) )
      __debugbreak();
  }
  EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
  _RDI = MapEdgeList_LookupMetadata(EdgeIndex);
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegment, _RSI);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+128h+outLineSegment.v+10h]
      vsubps  xmm7, xmm0, xmmword ptr [rsp+128h+outLineSegment.v]
    }
  }
  else
  {
    v19 = EdgeId::GetEdgeIndex(&edgeIda);
    _RAX = (const DiskStaticLineSegment *)MapEdgeList_LookupSegment(v19);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi]; referenceAngle
      vmovups xmm0, xmmword ptr [rax+10h]
      vsubps  xmm7, xmm0, xmmword ptr [rax]
    }
    EdgeAdjacentFaceNormalUnpack(_RAX, *(const float *)&_XMM1, _RSI);
  }
  if ( outLineDir )
    __asm { vmovups xmmword ptr [rbx], xmm7 }
  packedOpenAngle = _RDI->packedOpenAngle;
  if ( _RDI->packedOpenAngle )
  {
    v16 = (const float4 *)(((packedOpenAngle & 0xFFFF8000) << 16) | (((((packedOpenAngle & 0x3FFF) << 14) - (~(packedOpenAngle << 14) & 0x10000000)) ^ 0x80000001) >> 1));
    edgeIda.m_edgeIndex = ((packedOpenAngle & 0xFFFF8000) << 16) | (((((packedOpenAngle & 0x3FFF) << 14) - (~(packedOpenAngle << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm2, [rsp+128h+edgeId.m_edgeIndex] }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  __asm
  {
    vmulps  xmm0, xmm7, xmm7
    vinsertps xmm1, xmm0, xmm0, 8
    vmovaps xmm0, xmm2
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm0, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vhaddps xmm6, xmm1, xmm1
  }
  Float4SinCos(v16, &v62, outLineSegment);
  __asm
  {
    vhaddps xmm0, xmm6, xmm6
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm3, xmm2, [rsp+128h+var_B8]
    vblendps xmm0, xmm3, xmmword ptr [rsp+128h+outLineSegment.v], 8
    vmovups xmm7, xmmword ptr [rsi]
    vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm5, xmm0, xmm0, 0FFh
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm7
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm5
    vmovups xmmword ptr [r14], xmm3
  }
  _R11 = &v64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Edge_CalculateOpenAngleRad
==============
*/
float Edge_CalculateOpenAngleRad(EdgeId edgeId)
{
  unsigned int EdgeIndex; 
  const FlaggedEdgeMetadata *v3; 
  EdgeId v6; 
  unsigned int v7; 

  v6 = edgeId;
  EdgeIndex = EdgeId::GetEdgeIndex(&v6);
  v3 = MapEdgeList_LookupMetadata(EdgeIndex);
  if ( v3->packedOpenAngle )
  {
    v7 = ((v3->packedOpenAngle & 0x8000) << 16) | (((((v3->packedOpenAngle & 0x3FFF) << 14) - (~(v3->packedOpenAngle << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, [rsp+28h+arg_8] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Edge_CalculatePoint
==============
*/

void __fastcall Edge_CalculatePoint(const BgHandler *handler, EdgeId edgeId, double fraction, vec3_t *outEdgePoint)
{
  unsigned int EntityIndex; 
  bool v13; 
  bool v14; 
  bool v15; 
  unsigned int v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  unsigned int EdgeIndex; 
  __int64 v40; 
  unsigned int v41; 
  double v42; 
  double v43; 
  __int64 v44; 
  int v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  EdgeId edgeIda; 
  EdgeId v51; 
  float4 outLineSegment[2]; 
  vector4 outTransform; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v51 = edgeId;
  _RBX = outEdgePoint;
  __asm { vmovaps xmm6, xmm2 }
  EntityIndex = EdgeId::GetEntityIndex(&v51);
  v13 = EntityIndex < 0x7A920;
  v14 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v45 = 502048;
    v41 = EdgeId::GetEntityIndex(&v51);
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1052, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v41, v45);
    v13 = 0;
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm9, cs:__real@3ff0000000000000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vxorpd  xmm10, xmm10, xmm10
  }
  if ( v13 )
    goto LABEL_21;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v14 )
  {
LABEL_21:
    __asm
    {
      vmovsd  [rsp+128h+var_F0], xmm9
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+128h+var_F8], xmm10
      vmovsd  [rsp+128h+var_100], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1052, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v42, v46, v48) )
      __debugbreak();
  }
  edgeIda = v51;
  v20 = EdgeId::GetEntityIndex(&edgeIda);
  v21 = v20 < 0x7A920;
  v22 = v20 <= 0x7A920;
  if ( v20 >= 0x7A920 )
  {
    LODWORD(v44) = 502048;
    LODWORD(v40) = EdgeId::GetEntityIndex(&edgeIda);
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1076, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v40, v44);
    v21 = 0;
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm8 }
  if ( v21 )
    goto LABEL_22;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v22 )
  {
LABEL_22:
    __asm
    {
      vmovsd  [rsp+128h+var_F0], xmm9
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+128h+var_F8], xmm10
      vmovsd  [rsp+128h+var_100], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1076, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v43, v47, v49) )
      __debugbreak();
  }
  __asm { vshufps xmm6, xmm6, xmm6, 0 }
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegment, NULL);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+128h+outLineSegment.v+10h]
      vsubps  xmm1, xmm0, xmmword ptr [rsp+128h+outLineSegment.v]
      vmulps  xmm2, xmm1, xmm6
      vaddps  xmm4, xmm2, xmmword ptr [rsp+128h+outLineSegment.v]
    }
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    _RAX = MapEdgeList_LookupSegment(EdgeIndex);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+10h]
      vsubps  xmm0, xmm0, xmmword ptr [rax]
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm4, xmm1, xmmword ptr [rax]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm4
    vextractps dword ptr [rbx+4], xmm4, 1
    vextractps dword ptr [rbx+8], xmm4, 2
  }
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-48h]
  }
}

/*
==============
Edge_CalculatePoint
==============
*/

void __fastcall Edge_CalculatePoint(const BgHandler *handler, EdgeId edgeId, double fraction, float4 *r_outEdgePoint)
{
  unsigned int EntityIndex; 
  bool v11; 
  bool v12; 
  bool v13; 
  unsigned int EdgeIndex; 
  unsigned int v31; 
  double v32; 
  int v33; 
  double v34; 
  double v35; 
  EdgeId edgeIda; 
  float4 outLineSegment[2]; 
  vector4 outTransform; 

  __asm { vmovaps [rsp+0D8h+var_28], xmm6 }
  edgeIda = edgeId;
  _RBX = r_outEdgePoint;
  __asm { vmovaps xmm6, xmm2 }
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v11 = EntityIndex < 0x7A920;
  v12 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v33 = 502048;
    v31 = EdgeId::GetEntityIndex(&edgeIda);
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1076, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v31, v33);
    v11 = 0;
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v11 )
    goto LABEL_13;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v12 )
  {
LABEL_13:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0D8h+var_A0], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0D8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1076, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v32, v34, v35) )
      __debugbreak();
  }
  __asm { vshufps xmm6, xmm6, xmm6, 0 }
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegment, NULL);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+0D8h+outLineSegment.v+10h]
      vsubps  xmm1, xmm0, xmmword ptr [rsp+0D8h+outLineSegment.v]
      vmulps  xmm2, xmm1, xmm6
      vaddps  xmm3, xmm2, xmmword ptr [rsp+0D8h+outLineSegment.v]
      vmovups xmmword ptr [rbx], xmm3
      vmovaps xmm6, [rsp+0D8h+var_28]
    }
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    _RAX = MapEdgeList_LookupSegment(EdgeIndex);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+10h]
      vsubps  xmm0, xmm0, xmmword ptr [rax]
      vmulps  xmm1, xmm0, xmm6
      vaddps  xmm2, xmm1, xmmword ptr [rax]
      vmovaps xmm6, [rsp+0D8h+var_28]
      vmovups xmmword ptr [rbx], xmm2
    }
  }
}

/*
==============
Edge_CalculatePoint
==============
*/
void Edge_CalculatePoint(const pmove_t *const pm, EdgeId edgeId, float fraction, vec3_t *outEdgePoint)
{
  Edge_CalculatePoint(pm->m_bgHandler, edgeId, fraction, outEdgePoint);
}

/*
==============
Edge_CalculateVectors
==============
*/

void __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, double fraction, unsigned __int64 normalFaceIndex, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow, vec3_t *outOtherNormal)
{
  unsigned int EntityIndex; 
  bool v22; 
  bool v23; 
  bool v24; 
  char v31; 
  bool v53; 
  bool v69; 
  bool v85; 
  bool v101; 
  bool v121; 
  float4 *v145; 
  unsigned int v146; 
  float4 *v147; 
  float4 *v148; 
  float4 *v149; 
  float4 *v150; 
  float4 *v151; 
  float4 *v152; 
  float4 *v153; 
  int v154; 
  float4 *v155; 
  float4 *v156; 
  float4 *v157; 
  float4 *v158; 
  float4 *v159; 
  float4 *v160; 
  float4 *v161; 
  float4 *v162; 
  float4 *v163; 
  float4 *v164; 
  float4 *v165; 
  float4 *v166; 
  float4 *v167; 
  float4 *v168; 
  float4 *v169; 
  double v170; 
  double v171; 
  double v172; 
  double v173; 
  double v174; 
  double v175; 
  double v176; 
  double v177; 
  double v178; 
  double v179; 
  double v180; 
  double v181; 
  EdgeId edgeIda; 
  float4 v183; 
  float4 v184; 
  float4 v185; 
  float4 v186; 
  char v187; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBX = outNormal;
  _RSI = outParallel;
  _RDI = outBelow;
  _R14 = outOtherNormal;
  __asm { vmovaps xmm7, xmm2 }
  edgeIda = edgeId;
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v22 = EntityIndex < 0x7A920;
  v23 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v154 = 502048;
    v146 = EdgeId::GetEntityIndex(&edgeIda);
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1250, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v146, v154);
    v22 = 0;
    v23 = !v24;
    if ( v24 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  if ( v22 )
    goto LABEL_32;
  __asm { vcomiss xmm7, xmm6 }
  if ( !v23 )
  {
LABEL_32:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+128h+var_F0], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+128h+var_F8], xmm1
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+128h+var_100], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1250, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v147, *(double *)&v155, *(double *)&v163) )
      __debugbreak();
  }
  if ( normalFaceIndex > 1 )
  {
    LODWORD(v162) = 1;
    LODWORD(v145) = normalFaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1251, ASSERT_TYPE_ASSERT, "( 0 ) <= ( normalFaceIndex ) && ( normalFaceIndex ) <= ( 1 )", "normalFaceIndex not in [0, 1]\n\t%i not in [%i, %i]", v145, 0i64, v162) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm7; fraction }
  Edge_CalculateVectors(handler, edgeIda, *(float *)&_XMM2, normalFaceIndex, &v186, &v183, &v184, &v185);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+128h+var_88.v]
    vmovups xmm2, xmmword ptr [rsp+128h+var_B8.v]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3b03126f
    vmovss  dword ptr [rbx], xmm1
    vextractps dword ptr [rbx+4], xmm1, 1
    vextractps dword ptr [rbx+8], xmm1, 2
    vmovss  dword ptr [rsi], xmm2
    vextractps dword ptr [rsi+4], xmm2, 1
    vextractps dword ptr [rsi+8], xmm2, 2
    vmovups xmm2, xmmword ptr [rsp+128h+var_A8.v]
    vmovss  dword ptr [rdi], xmm2
    vextractps dword ptr [rdi+4], xmm2, 1
    vextractps dword ptr [rdi+8], xmm2, 2
    vmovups xmm2, xmmword ptr [rsp+128h+var_98.v]
    vmovss  dword ptr [r14], xmm2
    vextractps dword ptr [r14+4], xmm2, 1
    vextractps dword ptr [r14+8], xmm2, 2
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v31 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+128h+var_E8], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+128h+var_F0], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+128h+var_F8], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1264, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal ) )", "(%g, %g, %g) len %g", *(double *)&v148, *(double *)&v156, *(double *)&v164, v170);
    v31 = 0;
    if ( v53 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rsi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v31 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+128h+var_E8], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+128h+var_F0], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+128h+var_F8], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v69 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1265, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outParallel ) )", "(%g, %g, %g) len %g", *(double *)&v149, *(double *)&v157, *(double *)&v165, v171);
    v31 = 0;
    if ( v69 )
      __debugbreak();
  }
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
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v31 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+128h+var_E8], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+128h+var_F0], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+128h+var_F8], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v85 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1266, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outBelow ) )", "(%g, %g, %g) len %g", *(double *)&v150, *(double *)&v158, *(double *)&v166, v172);
    v31 = 0;
    if ( v85 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [r14+4]
    vmovss  xmm4, dword ptr [r14]
    vmovss  xmm5, dword ptr [r14+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v31 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+128h+var_E8], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+128h+var_F0], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+128h+var_F8], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v101 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1267, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outOtherNormal ) )", "(%g, %g, %g) len %g", *(double *)&v151, *(double *)&v159, *(double *)&v167, v173);
    v31 = 0;
    if ( v101 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm8, dword ptr [rsi+8]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm6, dword ptr [rbx]
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+8]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v31 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+128h+var_D0], xmm0
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vmovss  xmm4, dword ptr [rbx+8]
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+128h+var_D8], xmm1
      vmovsd  [rsp+128h+var_E0], xmm2
      vmovsd  [rsp+128h+var_E8], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+128h+var_F0], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+128h+var_F8], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+128h+var_100], xmm6
    }
    v121 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1268, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outParallel ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", *(double *)&v152, *(double *)&v160, *(double *)&v168, v174, v176, v178, v180);
    v31 = 0;
    if ( v121 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rdi+8]
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+8]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v31 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+128h+var_D0], xmm0
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vmovss  xmm4, dword ptr [rbx+8]
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+128h+var_D8], xmm1
      vmovsd  [rsp+128h+var_E0], xmm2
      vmovsd  [rsp+128h+var_E8], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+128h+var_F0], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+128h+var_F8], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+128h+var_100], xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1269, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outBelow ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", *(double *)&v153, *(double *)&v161, *(double *)&v169, v175, v177, v179, v181) )
      __debugbreak();
  }
  _R11 = &v187;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
Edge_CalculateVectors
==============
*/

void __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, double fraction, unsigned __int64 normalFaceIndex, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  unsigned int EntityIndex; 
  bool v14; 
  bool v15; 
  bool v16; 
  vec3_t *v23; 
  unsigned int v24; 
  vec3_t *v25; 
  int v26; 
  vec3_t *v27; 
  vec3_t *outOtherNormal; 
  vec3_t *outOtherNormala; 
  EdgeId edgeIda; 
  vec3_t v31; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  edgeIda = edgeId;
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v14 = EntityIndex < 0x7A920;
  v15 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v26 = 502048;
    v24 = EdgeId::GetEntityIndex(&edgeIda);
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1240, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v24, v26);
    v14 = 0;
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v14 )
    goto LABEL_14;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v15 )
  {
LABEL_14:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+98h+outOtherNormal], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+98h+var_68], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+98h+var_70], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1240, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v25, *(double *)&v27, *(double *)&outOtherNormala) )
      __debugbreak();
  }
  if ( normalFaceIndex > 1 )
  {
    LODWORD(outOtherNormal) = 1;
    LODWORD(v23) = normalFaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1241, ASSERT_TYPE_ASSERT, "( 0 ) <= ( normalFaceIndex ) && ( normalFaceIndex ) <= ( 1 )", "normalFaceIndex not in [0, 1]\n\t%i not in [%i, %i]", v23, 0i64, outOtherNormal) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm6; fraction }
  Edge_CalculateVectors(handler, edgeIda, *(float *)&_XMM2, normalFaceIndex, outNormal, outParallel, outBelow, &v31);
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
}

/*
==============
Edge_CalculateVectors
==============
*/

void __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, double fraction, unsigned __int64 normalFaceIndex, float4 *outNormal, float4 *outParallel, float4 *outBelow, float4 *outOtherNormal)
{
  unsigned int EntityIndex; 
  bool v19; 
  bool v20; 
  bool v21; 
  __int64 v64; 
  unsigned int v65; 
  double v66; 
  int v67; 
  double v68; 
  __int64 v69; 
  double v70; 
  EdgeId edgeIda; 
  float4 outLineDir; 

  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  _RBP = outNormal;
  _R14 = outParallel;
  _RBX = outBelow;
  _RDI = outOtherNormal;
  __asm { vmovaps xmm6, xmm2 }
  edgeIda = edgeId;
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v19 = EntityIndex < 0x7A920;
  v20 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v67 = 502048;
    v65 = EdgeId::GetEntityIndex(&edgeIda);
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1282, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v65, v67);
    v19 = 0;
    v20 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v19 )
    goto LABEL_21;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v20 )
  {
LABEL_21:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0B8h+var_80], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0B8h+var_88], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0B8h+var_90], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1282, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v66, v68, v70) )
      __debugbreak();
  }
  if ( normalFaceIndex > 1 )
  {
    LODWORD(v69) = 1;
    LODWORD(v64) = normalFaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1283, ASSERT_TYPE_ASSERT, "( 0 ) <= ( normalFaceIndex ) && ( normalFaceIndex ) <= ( 1 )", "normalFaceIndex not in [0, 1]\n\t%i not in [%i, %i]", v64, 0i64, v69) )
      __debugbreak();
  }
  Edge_CalculateNormals(handler, edgeIda, outNormal, outOtherNormal, &outLineDir);
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+0B8h+outLineDir.v]
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm3, xmm1
    vcmpneqps xmm0, xmm3, xmm3
    vmovmskps eax, xmm0
    vmovups xmmword ptr [r14], xmm3
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1288, ASSERT_TYPE_SANITY, "( !Float4IsNaN( outParallel ) )", (const char *)&queryFormat, "!Float4IsNaN( outParallel )") )
    __debugbreak();
  __asm
  {
    vmovups xmm3, xmmword ptr [rdi]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm3, xmm1
    vmovups xmmword ptr [rdi], xmm2
  }
  if ( normalFaceIndex )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rbp+0]
      vmovdqu xmmword ptr [rbp+0], xmm2
      vmovups xmmword ptr [rdi], xmm1
    }
  }
  __asm
  {
    vmovups xmm4, xmmword ptr [r14]
    vmovups xmm2, xmmword ptr [rbp+0]
    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm2, xmm3, xmm0
    vmovups xmmword ptr [rbx], xmm2
  }
  if ( normalFaceIndex )
  {
    __asm
    {
      vmovups xmm0, xmm2
      vxorps  xmm2, xmm2, xmm2
      vsubps  xmm0, xmm2, xmm0
      vmovups xmmword ptr [rbx], xmm0
      vsubps  xmm0, xmm2, xmmword ptr [r14]
      vmovups xmmword ptr [r14], xmm0
    }
  }
  __asm
  {
    vmovups xmm3, xmmword ptr [rbx]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm3, xmm1
    vmovups xmmword ptr [rbx], xmm2
    vmovaps xmm6, [rsp+0B8h+var_48]
  }
}

/*
==============
Edge_CalculateVectors
==============
*/
void Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, unsigned __int64 normalFaceIndex, float4 *outNormal, float4 *outParallel, float4 *outBelow)
{
  float4 outOtherNormal; 

  Edge_CalculateVectors(handler, edgeId, fraction, normalFaceIndex, outNormal, outParallel, outBelow, &outOtherNormal);
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, double fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow, vec3_t *outOtherNormmal)
{
  unsigned int EntityIndex; 
  bool v24; 
  bool v25; 
  bool v26; 
  char v53; 
  unsigned __int64 v54; 
  unsigned __int64 v71; 
  bool v77; 
  bool v93; 
  bool v109; 
  bool v125; 
  bool v145; 
  unsigned __int64 result; 
  unsigned int v170; 
  float4 *v171; 
  float4 *v172; 
  float4 *v173; 
  float4 *v174; 
  float4 *v175; 
  float4 *v176; 
  float4 *v177; 
  int v178; 
  float4 *v179; 
  float4 *v180; 
  float4 *v181; 
  float4 *v182; 
  float4 *v183; 
  float4 *v184; 
  float4 *v185; 
  float4 *v186; 
  float4 *v187; 
  float4 *v188; 
  float4 *v189; 
  float4 *v190; 
  float4 *v191; 
  float4 *v192; 
  float4 *outOtherNormal; 
  float4 *outOtherNormala; 
  float4 *outOtherNormalb; 
  float4 *outOtherNormalc; 
  float4 *outOtherNormald; 
  float4 *outOtherNormale; 
  double v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  double v204; 
  EdgeId edgeIda; 
  _QWORD entityUpa[3]; 
  float4 v207; 
  float4 v208; 
  float4 v209; 
  float4 v210; 
  float4 v213; 
  char v214; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _R15 = viewBasis;
  _RBX = outNormal;
  _RSI = outParallel;
  _R12 = entityUp;
  _RDI = outBelow;
  _R14 = outOtherNormmal;
  __asm { vmovaps xmm7, xmm2 }
  edgeIda = edgeId;
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v24 = EntityIndex < 0x7A920;
  v25 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v178 = 502048;
    v170 = EdgeId::GetEntityIndex(&edgeIda);
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1137, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v170, v178);
    v24 = 0;
    v25 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  if ( v24 )
    goto LABEL_29;
  __asm { vcomiss xmm7, xmm6 }
  if ( !v25 )
  {
LABEL_29:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+170h+var_138], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+170h+var_140], xmm1
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+170h+var_148], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1137, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v171, *(double *)&v179, *(double *)&v186) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [r12] }
  v213.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp-20h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r12+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r12+8], 20h ; ' '
    vmovss  xmm0, dword ptr [r15]
    vmovups xmmword ptr [rbp-20h], xmm3
    vmovups xmmword ptr [rsp+170h+entityUp+8], xmm3
  }
  v213.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp-20h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r15+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r15+8], 20h ; ' '
    vmovss  xmm0, dword ptr [r15+0Ch]
    vmovups xmmword ptr [rbp-20h], xmm3
    vmovups xmmword ptr [rbp+70h+var_C0.v], xmm3
  }
  v213.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp-20h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r15+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [r15+14h], 20h ; ' '
    vmovss  xmm0, dword ptr [r15+18h]
    vmovups xmmword ptr [rbp-20h], xmm3
  }
  v213.v.m128_i32[3] = 0;
  __asm
  {
    vmovups [rbp+70h+var_B0], xmm3
    vmovups xmm3, xmmword ptr [rbp-20h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r15+1Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [r15+20h], 20h ; ' '
    vmovaps xmm2, xmm7; fraction
    vmovups xmmword ptr [rbp+70h+var_90.v], xmm3
    vmovups [rbp+70h+var_A0], xmm3
  }
  v54 = Edge_CalculateVectors(handler, edgeIda, *(float *)&_XMM2, (const float4 *)&entityUpa[1], &v210, &v213, &v207, &v208, &v209);
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp+70h+var_90.v]
    vmovups xmm2, xmmword ptr [rbp+70h+var_F0.v]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3b03126f
    vmovss  dword ptr [rbx], xmm1
    vextractps dword ptr [rbx+4], xmm1, 1
    vextractps dword ptr [rbx+8], xmm1, 2
    vmovss  dword ptr [rsi], xmm2
    vextractps dword ptr [rsi+4], xmm2, 1
    vextractps dword ptr [rsi+8], xmm2, 2
    vmovups xmm2, xmmword ptr [rbp+70h+var_E0.v]
    vmovss  dword ptr [rdi], xmm2
    vextractps dword ptr [rdi+4], xmm2, 1
    vextractps dword ptr [rdi+8], xmm2, 2
    vmovups xmm2, xmmword ptr [rbp+70h+var_D0.v]
    vmovss  dword ptr [r14], xmm2
    vextractps dword ptr [r14+4], xmm2, 1
    vextractps dword ptr [r14+8], xmm2, 2
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  v71 = v54;
  if ( !v53 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+170h+outOtherNormal], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+170h+var_138], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+170h+var_140], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+170h+var_148], xmm0
    }
    v77 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1157, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal ) )", "(%g, %g, %g) len %g", *(double *)&v172, *(double *)&v180, *(double *)&v187, *(double *)&outOtherNormal);
    v53 = 0;
    if ( v77 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rsi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v53 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+170h+outOtherNormal], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+170h+var_138], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+170h+var_140], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+170h+var_148], xmm0
    }
    v93 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1158, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outParallel ) )", "(%g, %g, %g) len %g", *(double *)&v173, *(double *)&v181, *(double *)&v188, *(double *)&outOtherNormala);
    v53 = 0;
    if ( v93 )
      __debugbreak();
  }
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
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v53 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+170h+outOtherNormal], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+170h+var_138], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+170h+var_140], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+170h+var_148], xmm0
    }
    v109 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1159, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outBelow ) )", "(%g, %g, %g) len %g", *(double *)&v174, *(double *)&v182, *(double *)&v189, *(double *)&outOtherNormalb);
    v53 = 0;
    if ( v109 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [r14+4]
    vmovss  xmm4, dword ptr [r14]
    vmovss  xmm5, dword ptr [r14+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v53 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+170h+outOtherNormal], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+170h+var_138], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+170h+var_140], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+170h+var_148], xmm0
    }
    v125 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1160, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outOtherNormmal ) )", "(%g, %g, %g) len %g", *(double *)&v175, *(double *)&v183, *(double *)&v190, *(double *)&outOtherNormalc);
    v53 = 0;
    if ( v125 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm8, dword ptr [rsi+8]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm6, dword ptr [rbx]
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+8]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v53 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+170h+var_118], xmm0
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vmovss  xmm4, dword ptr [rbx+8]
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+170h+var_120], xmm1
      vmovsd  [rsp+170h+var_128], xmm2
      vmovsd  [rsp+170h+outOtherNormal], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+170h+var_138], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+170h+var_140], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+170h+var_148], xmm6
    }
    v145 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1161, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outParallel ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", *(double *)&v176, *(double *)&v184, *(double *)&v191, *(double *)&outOtherNormald, v199, v201, v203);
    v53 = 0;
    if ( v145 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rdi+8]
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+8]
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !v53 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+170h+var_118], xmm0
      vcvtss2sd xmm2, xmm3, xmm3
      vcvtss2sd xmm3, xmm4, xmm4
      vmovss  xmm4, dword ptr [rbx+8]
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+170h+var_120], xmm1
      vmovsd  [rsp+170h+var_128], xmm2
      vmovsd  [rsp+170h+outOtherNormal], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+170h+var_138], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+170h+var_140], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+170h+var_148], xmm6
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1162, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outBelow ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", *(double *)&v177, *(double *)&v185, *(double *)&v192, *(double *)&outOtherNormale, v200, v202, v204) )
      __debugbreak();
  }
  result = v71;
  _R11 = &v214;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  return result;
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, double fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  unsigned int EntityIndex; 
  bool v15; 
  bool v16; 
  bool v17; 
  unsigned __int64 result; 
  unsigned int v25; 
  vec3_t *v26; 
  int v27; 
  vec3_t *v28; 
  vec3_t *v29; 
  EdgeId edgeIda; 
  vec3_t outOtherNormmal; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps xmm6, xmm2
  }
  edgeIda = edgeId;
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v15 = EntityIndex < 0x7A920;
  v16 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v27 = 502048;
    v25 = EdgeId::GetEntityIndex(&edgeIda);
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1123, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v25, v27);
    v15 = 0;
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v15 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v16 )
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0B8h+var_80], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0B8h+var_88], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0B8h+var_90], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1123, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v26, *(double *)&v28, *(double *)&v29) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm6; fraction }
  result = Edge_CalculateVectors(handler, edgeIda, *(float *)&_XMM2, entityUp, viewBasis, outNormal, outParallel, outBelow, &outOtherNormmal);
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  return result;
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, double fraction, const float4 *entityUp, const float4 *viewBasis, float4 *outNormal, float4 *outParallel, float4 *outBelow, float4 *outOtherNormal)
{
  unsigned int EntityIndex; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v28; 
  unsigned __int64 result; 
  unsigned int v102; 
  double v103; 
  int v104; 
  double v105; 
  double v106; 
  EdgeId edgeIda; 
  float4 outLineDir; 
  float4 r_outNormal0; 
  float4 outNormal1; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R14 = outNormal;
  _RSI = outParallel;
  _RBX = outBelow;
  _R15 = outOtherNormal;
  __asm { vmovaps xmm6, xmm2 }
  edgeIda = edgeId;
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v21 = EntityIndex < 0x7A920;
  v22 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v104 = 502048;
    v102 = EdgeId::GetEntityIndex(&edgeIda);
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1182, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v102, v104);
    v21 = 0;
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v21 )
    goto LABEL_20;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v22 )
  {
LABEL_20:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0E8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0E8h+var_C0], xmm2
    }
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1182, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v103, v105, v106);
    v21 = 0;
    if ( v28 )
      __debugbreak();
  }
  _RAX = viewBasis;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovups xmm1, xmmword ptr [rax]
    vmulps  xmm1, xmm1, xmmword ptr [rdi]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3f7fbe77
  }
  if ( v21 )
  {
    __asm
    {
      vsubps  xmm2, xmm6, xmm1
      vmulps  xmm0, xmm2, xmmword ptr [rdi]
      vaddps  xmm3, xmm0, xmmword ptr [rax]
    }
  }
  else
  {
    __asm
    {
      vsubps  xmm3, xmm6, xmmword ptr [rax+20h]
      vmulps  xmm1, xmm3, xmmword ptr [rdi]
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
      vsubps  xmm1, xmm6, xmm0
      vmulps  xmm0, xmm1, xmmword ptr [rdi]
      vaddps  xmm3, xmm0, xmm3
    }
  }
  __asm
  {
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm3, xmm1
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1204, ASSERT_TYPE_SANITY, "( !Float4IsNaN( viewForwardYaw ) )", (const char *)&queryFormat, "!Float4IsNaN( viewForwardYaw )") )
    __debugbreak();
  Edge_CalculateNormals(handler, edgeIda, &r_outNormal0, &outNormal1, &outLineDir);
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+0E8h+outLineDir.v]
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm3, xmm1
    vcmpneqps xmm0, xmm3, xmm3
    vmovmskps eax, xmm0
    vmovups xmmword ptr [rsi], xmm3
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1212, ASSERT_TYPE_SANITY, "( !Float4IsNaN( outParallel ) )", (const char *)&queryFormat, "!Float4IsNaN( outParallel )") )
    __debugbreak();
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+0E8h+outNormal1.v]
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm4, xmm3, xmm1
    vmulps  xmm1, xmm7, xmmword ptr [rsp+0E8h+r_outNormal0.v]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm3, xmm0, xmm0
    vmulps  xmm1, xmm7, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vcomiss xmm1, xmm3
    vmovdqa xmmword ptr [rsp+0E8h+outNormal1.v], xmm4
  }
  _RAX = 0i64;
  _RDI = 2i64;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+rax*8+0E8h+r_outNormal0.v]
    vmovdqu xmmword ptr [r14], xmm0
    vmovups xmm0, xmmword ptr [rsp+rdi*8+0E8h+r_outNormal0.v]
    vmovdqu xmmword ptr [r15], xmm0
    vmovups xmm4, xmmword ptr [rsi]
    vmovups xmm2, xmmword ptr [r14]
    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm2, xmm3, xmm0
    vmovups xmmword ptr [rbx], xmm2
    vmovups xmm3, xmmword ptr [rbx]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm3, xmm1
    vmovups xmmword ptr [rbx], xmm2
  }
  result = 0i64;
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_48]
    vmovaps xmm7, [rsp+0E8h+var_58]
  }
  return result;
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, double fraction, const float4 *entityUp, const float4 *viewBasis, float4 *outNormal, float4 *outParallel, float4 *outBelow)
{
  unsigned int EntityIndex; 
  bool v16; 
  bool v17; 
  bool v18; 
  unsigned __int64 result; 
  unsigned int v26; 
  float4 *v27; 
  int v28; 
  float4 *v29; 
  float4 *v30; 
  float4 outOtherNormal; 
  void *retaddr; 
  EdgeId edgeIda; 

  _RAX = &retaddr;
  edgeIda = edgeId;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm2
  }
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v16 = EntityIndex < 0x7A920;
  v17 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v28 = 502048;
    v26 = EdgeId::GetEntityIndex(&edgeIda);
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v26, v28);
    v16 = 0;
    v17 = !v18;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v16 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v17 )
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+78h+var_40], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+78h+var_48], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+78h+var_50], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1170, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v27, *(double *)&v29, *(double *)&v30) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm6; fraction }
  result = Edge_CalculateVectors(handler, edgeIda, *(float *)&_XMM2, entityUp, viewBasis, outNormal, outParallel, outBelow, &outOtherNormal);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

/*
==============
Edge_CalculateVectors
==============
*/

unsigned __int64 __fastcall Edge_CalculateVectors(const pmove_t *const pm, EdgeId edgeId, double fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  const BgHandler *m_bgHandler; 
  unsigned int EntityIndex; 
  bool v15; 
  bool v16; 
  bool v17; 
  unsigned __int64 result; 
  unsigned int v25; 
  vec3_t *v26; 
  int v27; 
  vec3_t *v28; 
  vec3_t *v29; 
  EdgeId edgeIda; 
  vec3_t outOtherNormmal; 

  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  m_bgHandler = pm->m_bgHandler;
  __asm { vmovaps xmm6, xmm2 }
  edgeIda = edgeId;
  EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
  v15 = EntityIndex < 0x7A920;
  v16 = EntityIndex <= 0x7A920;
  if ( EntityIndex >= 0x7A920 )
  {
    v27 = 502048;
    v25 = EdgeId::GetEntityIndex(&edgeIda);
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1123, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v25, v27);
    v15 = 0;
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v15 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v16 )
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0B8h+var_80], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0B8h+var_88], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0B8h+var_90], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1123, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v26, *(double *)&v28, *(double *)&v29) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm6; fraction }
  result = Edge_CalculateVectors(m_bgHandler, edgeIda, *(float *)&_XMM2, entityUp, viewBasis, outNormal, outParallel, outBelow, &outOtherNormmal);
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  return result;
}

/*
==============
Edge_GetAdjacentEdges
==============
*/
unsigned __int64 Edge_GetAdjacentEdges(EdgeId edgeId, edgeFlags_t flag, AdjacentEdgeInfo *outAdjacentEdgeInfo)
{
  AdjacentEdgeInfo *v6; 
  unsigned __int8 v7; 
  unsigned int EdgeIndex; 
  const MapEdgeList *List; 
  const MapEdgeList *v10; 
  unsigned int v11; 
  __int64 EntryIndex; 
  EdgeAdjacencyMetadata *edgeAdjacencyMetadata; 
  unsigned __int64 v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  __int64 v22; 
  EdgeAdjacency *edgeAdjacency; 
  unsigned int v24; 
  EdgeId v32; 
  bool IsDynamic; 
  unsigned int v38; 
  __int64 v41; 
  unsigned int EntityIndex; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  EdgeId v46; 
  EdgeId v48; 
  AdjacentEdgeInfo *v49; 
  unsigned int v50; 

  v49 = outAdjacentEdgeInfo;
  v48 = edgeId;
  v6 = outAdjacentEdgeInfo;
  v7 = flag;
  if ( EdgeId::GetEntityIndex(&v48) >= 0x7A920 )
  {
    EntityIndex = EdgeId::GetEntityIndex(&v48);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1445, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, 502048) )
      __debugbreak();
  }
  EdgeIndex = EdgeId::GetEdgeIndex(&v48);
  List = MapEdgeList_GetList(EdgeIndex);
  v10 = List;
  if ( !List || !List->edgeAdjacencyMetadata || !List->edgeAdjacency || !EdgeAdjacencySupported((const DiskEdgeFlags)v7) )
    return 0i64;
  v11 = EdgeId::GetEdgeIndex(&v48);
  EntryIndex = MapEdgeList_GetEntryIndex(v11);
  if ( (unsigned int)EntryIndex >= v10->numEdgeAdjacencyMetadata )
  {
    LODWORD(v43) = v10->numEdgeAdjacencyMetadata;
    LODWORD(v41) = EntryIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1463, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( mapEdgeList->numEdgeAdjacencyMetadata )", "entryIndex doesn't index mapEdgeList->numEdgeAdjacencyMetadata\n\t%i not in [0, %i)", v41, v43) )
      __debugbreak();
  }
  edgeAdjacencyMetadata = v10->edgeAdjacencyMetadata;
  v14 = 0i64;
  v15 = 0i64;
  if ( v7 != 1 )
  {
    if ( v7 == 16 )
    {
      v15 = (*(_DWORD *)&edgeAdjacencyMetadata[EntryIndex] >> 23) & 3;
    }
    else
    {
      LODWORD(v41) = (char)v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1422, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Edge_GetAdjacentEdgeFlagOffset: unsupported edgeFlag_t encountered: %i", v41) )
        __debugbreak();
      v15 = 0i64;
    }
  }
  v16 = (unsigned int)edgeAdjacencyMetadata[EntryIndex];
  v17 = v15 + (v16 & 0x7FFFFF);
  if ( v7 == 1 )
  {
    v19 = v16 >> 23;
    goto LABEL_24;
  }
  if ( v7 == 16 )
  {
    v19 = v16 >> 25;
LABEL_24:
    v20 = v19 & 3;
    v18 = (unsigned int)v20;
    if ( v20 > 2 )
    {
      LODWORD(v41) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1467, ASSERT_TYPE_ASSERT, "( 0 ) <= ( adjacencyCount ) && ( adjacencyCount ) <= ( 2 )", "adjacencyCount not in [0, 2]\n\t%i not in [%i, %i]", v41, 0i64, 2) )
        __debugbreak();
    }
    goto LABEL_27;
  }
  LODWORD(v41) = (char)v7;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1406, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Edge_GetAdjacentEdgeFlagCount: unsupported edgeFlag_t encountered: %i", v41) )
    __debugbreak();
  v18 = 0i64;
LABEL_27:
  if ( v18 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    v22 = v17;
    do
    {
      if ( (unsigned int)(v14 + v17) >= v10->numEdgeAdjacency )
      {
        LODWORD(v43) = v10->numEdgeAdjacency;
        LODWORD(v41) = v14 + v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( adjacencyIndex + offset ) < (unsigned)( mapEdgeList->numEdgeAdjacency )", "adjacencyIndex + offset doesn't index mapEdgeList->numEdgeAdjacency\n\t%i not in [0, %i)", v41, v43) )
          __debugbreak();
      }
      edgeAdjacency = v10->edgeAdjacency;
      if ( EdgeId::GetIsDynamic(&v48) )
      {
        v24 = EdgeId::GetEntityIndex(&v48);
        EdgeId::Set(&v46, edgeAdjacency[v22].adjEdge, v24);
      }
      else
      {
        EdgeId::Set(&v46, edgeAdjacency[v22].adjEdge);
      }
      _RDI = &v6[v14].id;
      *_RDI = v48;
      if ( edgeAdjacency[v22].start )
      {
        v50 = ((edgeAdjacency[v22].start & 0x8000) << 16) | (((((edgeAdjacency[v22].start & 0x3FFF) << 14) - (~(edgeAdjacency[v22].start << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm0, [rsp+0A8h+arg_18]; val }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+8], xmm0 }
      if ( edgeAdjacency[v22].end )
      {
        v50 = ((edgeAdjacency[v22].end & 0x8000) << 16) | (((((edgeAdjacency[v22].end & 0x3FFF) << 14) - (~(edgeAdjacency[v22].end << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm0, [rsp+0A8h+arg_18]; val }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v32 = v46;
      __asm { vmovss  dword ptr [rdi+0Ch], xmm0 }
      _RDI[2] = v32;
      if ( edgeAdjacency[v22].adjStart )
      {
        v50 = ((edgeAdjacency[v22].adjStart & 0x8000) << 16) | (((((edgeAdjacency[v22].adjStart & 0x3FFF) << 14) - (~(edgeAdjacency[v22].adjStart << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm0, [rsp+0A8h+arg_18]; val }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+18h], xmm0 }
      if ( edgeAdjacency[v22].adjEnd )
      {
        v50 = ((edgeAdjacency[v22].adjEnd & 0x8000) << 16) | (((((edgeAdjacency[v22].adjEnd & 0x3FFF) << 14) - (~(edgeAdjacency[v22].adjEnd << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm0, [rsp+0A8h+arg_18]; val }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+1Ch], xmm0 }
      IsDynamic = EdgeId::GetIsDynamic(_RDI + 2);
      if ( EdgeId::GetIsDynamic(&v6[v14].id) != IsDynamic )
      {
        LODWORD(v45) = EdgeId::GetIsDynamic(_RDI + 2);
        LODWORD(v44) = EdgeId::GetIsDynamic(&v6[v14].id);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1490, ASSERT_TYPE_ASSERT, "( outAdjacentEdgeInfo[offset].id.GetIsDynamic() ) == ( outAdjacentEdgeInfo[offset].otherId.GetIsDynamic() )", "%s == %s\n\t%i, %i", "outAdjacentEdgeInfo[offset].id.GetIsDynamic()", "outAdjacentEdgeInfo[offset].otherId.GetIsDynamic()", v44, v45) )
          __debugbreak();
      }
      v38 = EdgeId::GetEntityIndex(_RDI + 2);
      if ( EdgeId::GetEntityIndex(&v6[v14].id) != v38 )
      {
        LODWORD(v45) = EdgeId::GetEntityIndex(_RDI + 2);
        LODWORD(v44) = EdgeId::GetEntityIndex(&v6[v14].id);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1491, ASSERT_TYPE_ASSERT, "( outAdjacentEdgeInfo[offset].id.GetEntityIndex() ) == ( outAdjacentEdgeInfo[offset].otherId.GetEntityIndex() )", "%s == %s\n\t%i, %i", "outAdjacentEdgeInfo[offset].id.GetEntityIndex()", "outAdjacentEdgeInfo[offset].otherId.GetEntityIndex()", v44, v45) )
          __debugbreak();
      }
      v6 = v49;
      ++v14;
      ++v22;
    }
    while ( v14 < v18 );
    __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
  }
  return v18;
}

/*
==============
Edge_GetDynamicLineSegment
==============
*/
void Edge_GetDynamicLineSegment(const vector4 *entityTransform, const EdgeId *edgeId, float4 (*outLineSegment)[2], float4 *outNormal0)
{
  unsigned int EdgeIndex; 
  unsigned int v8; 
  unsigned int v34; 
  float4 r_outAdjacentFaceNormal; 

  _RSI = outNormal0;
  _RBP = outLineSegment;
  if ( !EdgeId::GetIsDynamic((EdgeId *)edgeId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 921, ASSERT_TYPE_SANITY, "( edgeId.GetIsDynamic() )", (const char *)&queryFormat, "edgeId.GetIsDynamic()") )
    __debugbreak();
  EdgeIndex = EdgeId::GetEdgeIndex((EdgeId *)edgeId);
  if ( MapEdgeList_GetListIndex(EdgeIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 922, ASSERT_TYPE_ASSERT, "(MapEdgeList_GetListIndex( edgeId.GetEdgeIndex() ) == TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "MapEdgeList_GetListIndex( edgeId.GetEdgeIndex() ) == TRANSIENT_ZONE_ALWAYSLOADED") )
    __debugbreak();
  v8 = EdgeId::GetEdgeIndex((EdgeId *)edgeId);
  _R14 = (const DiskStaticLineSegment *)MapEdgeList_LookupSegment(v8);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vshufps xmm1, xmm0, xmm0, 0
    vmulps  xmm2, xmm1, xmmword ptr [rdi]
    vshufps xmm3, xmm0, xmm0, 55h ; 'U'
    vmulps  xmm1, xmm3, xmmword ptr [rdi+10h]
    vshufps xmm4, xmm0, xmm0, 0AAh ; 'ª'
    vshufps xmm5, xmm0, xmm0, 0FFh
    vmulps  xmm0, xmm4, xmmword ptr [rdi+20h]
    vaddps  xmm2, xmm0, xmm2
    vmulps  xmm0, xmm5, xmmword ptr [rdi+30h]
    vaddps  xmm1, xmm0, xmm1
    vaddps  xmm2, xmm1, xmm2
    vmovups xmmword ptr [rbp+0], xmm2
    vmovups xmm0, xmmword ptr [rax+10h]
    vshufps xmm1, xmm0, xmm0, 0
    vmulps  xmm2, xmm1, xmmword ptr [rdi]
    vshufps xmm3, xmm0, xmm0, 55h ; 'U'
    vmulps  xmm1, xmm3, xmmword ptr [rdi+10h]
    vshufps xmm4, xmm0, xmm0, 0AAh ; 'ª'
    vshufps xmm5, xmm0, xmm0, 0FFh
    vmulps  xmm0, xmm4, xmmword ptr [rdi+20h]
    vaddps  xmm2, xmm0, xmm2
    vmulps  xmm0, xmm5, xmmword ptr [rdi+30h]
    vaddps  xmm1, xmm0, xmm1
    vaddps  xmm2, xmm1, xmm2
    vmovups xmmword ptr [rbp+10h], xmm2
  }
  if ( _RSI )
  {
    v34 = EdgeId::GetEdgeIndex((EdgeId *)edgeId);
    _RAX = MapEdgeList_LookupMetadata(v34);
    __asm { vmovss  xmm1, dword ptr [rax]; referenceAngle }
    EdgeAdjacentFaceNormalUnpack(_R14, *(const float *)&_XMM1, &r_outAdjacentFaceNormal);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+78h+r_outAdjacentFaceNormal.v]
      vshufps xmm2, xmm0, xmm0, 0
      vshufps xmm4, xmm0, xmm0, 55h ; 'U'
      vshufps xmm5, xmm0, xmm0, 0AAh ; 'ª'
      vmulps  xmm0, xmm2, xmmword ptr [rdi]
      vaddps  xmm3, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
      vmulps  xmm0, xmm4, xmmword ptr [rdi+10h]
      vaddps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
      vmulps  xmm0, xmm5, xmmword ptr [rdi+20h]
      vaddps  xmm1, xmm0, xmm3
      vaddps  xmm1, xmm2, xmm1
      vmovups xmmword ptr [rsi], xmm1
      vandps  xmm0, xmm1, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
      vmovups xmmword ptr [rsi], xmm0
    }
  }
}

/*
==============
Edge_GetEntityTransform
==============
*/
void Edge_GetEntityTransform(const BgHandler *handler, const EdgeId *edgeId, vector4 *outTransform)
{
  unsigned int EntityIndex; 
  bool (__fastcall *IsClient)(BgHandler *); 
  unsigned int v9; 
  const float4 *v18; 
  const float4 *v28; 
  const float4 *v40; 
  float4 *v41; 
  const float4 *v42; 
  vector3 *v43; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  vec3_t outOrigin; 
  int v54; 

  _RSI = outTransform;
  if ( !EdgeId::GetIsDynamic((EdgeId *)edgeId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 872, ASSERT_TYPE_SANITY, "( edgeId.GetIsDynamic() )", (const char *)&queryFormat, "edgeId.GetIsDynamic()") )
    __debugbreak();
  EntityIndex = EdgeId::GetEntityIndex((EdgeId *)edgeId);
  IsClient = handler->IsClient;
  if ( EntityIndex < 0x800 )
  {
    IsClient((BgHandler *)handler);
    handler->GetEntityOrigin((BgHandler *)handler, EntityIndex, &outOrigin);
    handler->GetEntityAngles((BgHandler *)handler, EntityIndex, (vec3_t *)&v54);
    __asm { vmovss  xmm0, [rsp+0B8h+var_38] }
    HIDWORD(v50) = 0;
    __asm
    {
      vmovups xmm2, xmmword ptr [rsp+60h]
      vmovss  xmm2, xmm2, xmm0
      vinsertps xmm2, xmm2, [rsp+0B8h+var_34], 10h
      vinsertps xmm2, xmm2, [rsp+0B8h+var_30], 20h
      vmulps  xmm0, xmm2, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
      vmovups xmmword ptr [rsp+60h], xmm2
    }
    Float4RadianToQuat(v41, v40);
    Float4UnitQuatToAxis(v43, v42);
    __asm
    {
      vmovups xmmword ptr [rsp+0B8h+var_88+10h], xmm1
      vmovups xmmword ptr [rsp+0B8h+var_88], xmm0
      vmovups ymm1, [rsp+0B8h+var_88]
      vmovups ymmword ptr [rsi], ymm1
      vmovups xmmword ptr [rsi+20h], xmm2
    }
    goto LABEL_9;
  }
  v9 = EntityIndex - 2048;
  if ( IsClient((BgHandler *)handler) )
  {
    ScriptableCl_GetInstanceOrigin(LOCAL_CLIENT_0, v9, &outOrigin);
    _RAX = ScriptableCl_GetInstanceAngles(LOCAL_CLIENT_0, v9);
    __asm
    {
      vmovss  xmm1, dword ptr [rax]
      vmovss  xmm2, dword ptr [rax+4]
      vmovss  xmm3, dword ptr [rax+8]
    }
    HIDWORD(v50) = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+60h]
      vmovss  xmm0, xmm0, xmm1
      vinsertps xmm0, xmm0, xmm2, 10h
      vinsertps xmm0, xmm0, xmm3, 20h ; ' '
      vmovups xmmword ptr [rsp+60h], xmm0
    }
    Float4AnglesToAxis(v18, _RSI);
LABEL_9:
    __asm { vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin] }
    HIDWORD(v51) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+60h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsp+0B8h+outOrigin+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+0B8h+outOrigin+8], 20h
    }
    goto LABEL_10;
  }
  _RBX = ScriptableSv_GetInstanceOrigin(v9);
  _RAX = ScriptableSv_GetInstanceAngles(v9);
  __asm
  {
    vmovss  xmm1, dword ptr [rax]
    vmovss  xmm2, dword ptr [rax+4]
    vmovss  xmm3, dword ptr [rax+8]
  }
  HIDWORD(v50) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+60h]
    vmovss  xmm0, xmm0, xmm1
    vinsertps xmm0, xmm0, xmm2, 10h
    vinsertps xmm0, xmm0, xmm3, 20h ; ' '
    vmovups xmmword ptr [rsp+60h], xmm0
  }
  Float4AnglesToAxis(v28, _RSI);
  __asm { vmovss  xmm0, dword ptr [rbx] }
  HIDWORD(v52) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+60h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
  }
LABEL_10:
  __asm { vmovups xmmword ptr [rsi+30h], xmm3 }
}

/*
==============
Edge_GetFlags
==============
*/
__int64 Edge_GetFlags(EdgeId edgeId)
{
  unsigned int EdgeIndex; 
  EdgeId v3; 

  v3 = edgeId;
  EdgeIndex = EdgeId::GetEdgeIndex(&v3);
  return (unsigned __int8)MapEdgeList_LookupMetadata(EdgeIndex)->flags[0];
}

/*
==============
Edge_GetLineSegment
==============
*/
void Edge_GetLineSegment(const BgHandler *handler, EdgeId edgeId, vec3_t (*outLineSegment)[2])
{
  unsigned int EdgeIndex; 
  EdgeId edgeIda; 
  float4 outLineSegmenta[2]; 
  vector4 outTransform; 

  edgeIda = edgeId;
  _RBX = outLineSegment;
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegmenta, NULL);
    __asm
    {
      vmovups xmm2, xmmword ptr [rsp+98h+outLineSegment.v+10h]
      vmovups xmm1, xmmword ptr [rsp+98h+outLineSegment.v]
    }
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    _RAX = MapEdgeList_LookupSegment(EdgeIndex);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovups xmm2, xmmword ptr [rax+10h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm1
    vextractps dword ptr [rbx+4], xmm1, 1
    vextractps dword ptr [rbx+8], xmm1, 2
    vmovss  dword ptr [rbx+0Ch], xmm2
    vextractps dword ptr [rbx+10h], xmm2, 1
    vextractps dword ptr [rbx+14h], xmm2, 2
  }
}

/*
==============
Edge_GetLineSegment
==============
*/
void Edge_GetLineSegment(const BgHandler *handler, EdgeId edgeId, float4 (*r_outLineSegment)[2])
{
  unsigned int EdgeIndex; 
  EdgeId edgeIda; 
  vector4 outTransform; 

  edgeIda = edgeId;
  _RBX = r_outLineSegment;
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, _RBX, NULL);
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    _RAX = MapEdgeList_LookupSegment(EdgeIndex);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rbx+10h], xmm1
    }
  }
}

/*
==============
Edge_GetLineSegment
==============
*/
void Edge_GetLineSegment(const pmove_t *const pm, EdgeId edgeId, vec3_t (*outLineSegment)[2])
{
  const BgHandler *m_bgHandler; 
  unsigned int EdgeIndex; 
  EdgeId edgeIda; 
  float4 outLineSegmenta[2]; 
  vector4 outTransform; 

  m_bgHandler = pm->m_bgHandler;
  _RBX = outLineSegment;
  edgeIda = edgeId;
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(m_bgHandler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegmenta, NULL);
    __asm
    {
      vmovups xmm2, xmmword ptr [rsp+98h+outLineSegment.v+10h]
      vmovups xmm1, xmmword ptr [rsp+98h+outLineSegment.v]
    }
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    _RAX = MapEdgeList_LookupSegment(EdgeIndex);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovups xmm2, xmmword ptr [rax+10h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm1
    vextractps dword ptr [rbx+4], xmm1, 1
    vextractps dword ptr [rbx+8], xmm1, 2
    vmovss  dword ptr [rbx+0Ch], xmm2
    vextractps dword ptr [rbx+10h], xmm2, 1
    vextractps dword ptr [rbx+14h], xmm2, 2
  }
}

/*
==============
Edge_HasEdges
==============
*/
bool Edge_HasEdges()
{
  return cm.mapEnts->numEdgeLists != 0;
}

/*
==============
Float4BlendXYZW
==============
*/
void Float4BlendXYZW(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm { vmovups xmmword ptr [r8], xmm1 }
}

/*
==============
Float4Blendxyzw
==============
*/
void Float4Blendxyzw(const float4 *result, const float4 *a2, float4 *_R8)
{
  __asm { vmovups xmmword ptr [r8], xmm0 }
}

/*
==============
EdgeOctreeQueryShape::Float4CalcNodeExtents
==============
*/
void EdgeOctreeQueryShape::Float4CalcNodeExtents(const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, float4 *r_outMinExtent, float4 *r_outMaxExtent)
{
  __asm
  {
    vlddqu  xmm1, xmmword ptr [rdx]
    vpxor   xmm0, xmm0, xmm0
    vpunpcklwd xmm1, xmm1, xmm0
    vcvtdq2ps xmm2, xmm1
    vinsertps xmm0, xmm2, xmm2, 8
    vmulps  xmm1, xmm0, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
    vaddps  xmm2, xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm3, xmm2, xmmword ptr [rcx+rax*8]
    vaddps  xmm5, xmm3, xmmword ptr [rcx+100h]
    vsubps  xmm1, xmm5, xmmword ptr [rcx+rax*8]
    vmovups xmmword ptr [r8], xmm1
    vshufps xmm0, xmm1, xmmword ptr cs:?g_negativeInfinity@@3Ufloat4@@B.v, 0FAh ; 'ú'; float4 const g_negativeInfinity
    vshufps xmm1, xmm1, xmm0, 84h ; '„'
    vmovups xmmword ptr [r8], xmm1
    vaddps  xmm1, xmm5, xmmword ptr [rcx+rax*8]
    vmovups xmmword ptr [r9], xmm1
    vshufps xmm0, xmm1, xmmword ptr cs:?g_infinity@@3Ufloat4@@B.v, 0FAh ; 'ú'; float4 const g_infinity
    vshufps xmm1, xmm1, xmm0, 84h ; '„'
    vmovups xmmword ptr [r9], xmm1
  }
}

/*
==============
EdgeOctreeQueryShape::Float4ClosestApproachOfTwoLines
==============
*/
void EdgeOctreeQueryShape::Float4ClosestApproachOfTwoLines(const float4 *r_linePointA, const float4 *r_lineVecA, const float4 *r_linePointB, const float4 *r_lineVecB, float4 *r_outS, float4 *r_outT)
{
  _BYTE v76[32]; 
  char v77; 
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
    vmovups xmm0, xmmword ptr [rcx]
    vsubps  xmm4, xmm0, xmmword ptr [r8]
    vmovups xmm1, xmmword ptr [rdx]
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovsd  xmm3, cs:__real@3eb0c6f7a0b5ed8d
  }
  _RBX = r_outS;
  _RDI = r_outT;
  __asm
  {
    vmulps  xmm1, xmm1, xmm1
    vinsertps xmm2, xmm1, xmm1, 8
    vmovups xmm1, xmmword ptr [r9]
    vmulps  xmm1, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vinsertps xmm2, xmm1, xmm1, 8
    vmovups xmm1, xmmword ptr [r9]
    vmulps  xmm1, xmm1, xmmword ptr [rdx]
    vhaddps xmm6, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm11, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vxorps  xmm9, xmm1, xmm8
    vmulps  xmm1, xmm4, xmmword ptr [rdx]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm7, xmm0, xmm0
    vmulss  xmm0, xmm9, xmm9
    vmulss  xmm1, xmm11, xmm6
    vsubss  xmm10, xmm1, xmm0
    vmulss  xmm0, xmm9, xmm6
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm10, xmm10
    vcvtss2sd xmm2, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmulsd  xmm0, xmm1, xmm3
    vcomisd xmm2, xmm0
  }
  if ( (unsigned __int64)v76 != _security_cookie )
  {
    __asm
    {
      vmulps  xmm1, xmm4, xmmword ptr [r9]
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vcvtss2sd xmm0, xmm10, xmm10
      vcomisd xmm0, xmm3
      vxorps  xmm8, xmm1, xmm8
    }
    if ( (unsigned __int64)v76 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 996, ASSERT_TYPE_ASSERT, "(1.0E-6 < determinant)", (const char *)&queryFormat, "ZERO_EPSILON < determinant") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm4, xmm0, xmm10
      vmulss  xmm2, xmm8, xmm9
      vmulss  xmm1, xmm7, xmm11
      vsubss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm8, xmm6
      vmulss  xmm3, xmm7, xmm9
      vmulss  xmm2, xmm0, xmm4
      vsubss  xmm0, xmm3, xmm1
      vmulss  xmm1, xmm0, xmm4
    }
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vcomisd xmm0, xmm3
    }
    if ( (unsigned __int64)v76 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 985, ASSERT_TYPE_ASSERT, "(1.0E-6 < lineVecALenSq)", (const char *)&queryFormat, "ZERO_EPSILON < lineVecALenSq") )
      __debugbreak();
    __asm
    {
      vdivss  xmm0, xmm7, xmm6
      vxorps  xmm2, xmm0, xmm8
      vxorps  xmm1, xmm1, xmm1
    }
  }
  __asm
  {
    vmovaps xmm0, xmm2
    vshufps xmm0, xmm0, xmm0, 0
    vshufps xmm1, xmm1, xmm1, 0
    vmovups xmmword ptr [rbx], xmm0
    vmovups xmmword ptr [rdi], xmm1
  }
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
EdgeOctreeQueryCustomClip::Initialize
==============
*/
void EdgeOctreeQueryCustomClip::Initialize(EdgeOctreeQueryCustomClip *this, bool (*testFunc)(const float4 *, const float4 *), const vec3_t *textAxis, unsigned __int64 numTrueClipPlanes, const vec3_t *trueClipPlanePoints, const vec3_t *trueClipPlaneNormals, unsigned __int64 numFalseClipPlanes, const vec3_t *falseClipPlanePoints, const vec3_t *falseClipPlaneNormals)
{
  unsigned __int64 v11; 
  bool (__fastcall *v12)(const float4 *, const float4 *); 
  unsigned __int64 v16; 
  unsigned __int64 v36; 
  __int64 v61; 
  __int64 v62; 
  __int128 v64; 
  __int128 type; 
  __int128 v66; 

  _RSI = this;
  v11 = numTrueClipPlanes + numFalseClipPlanes;
  *(_QWORD *)&type = testFunc;
  *(_QWORD *)&v66 = falseClipPlaneNormals;
  if ( numTrueClipPlanes + numFalseClipPlanes > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 267, ASSERT_TYPE_ASSERT, "( (numTrueClipPlanes + numFalseClipPlanes) ) <= ( ms_maxCustomPlanes )", "%s <= %s\n\t%i, %i", "(numTrueClipPlanes + numFalseClipPlanes)", "ms_maxCustomPlanes", numFalseClipPlanes + numTrueClipPlanes, 4) )
    __debugbreak();
  if ( numTrueClipPlanes )
  {
    if ( numTrueClipPlanes != 2 )
    {
      LODWORD(v62) = 2;
      LODWORD(v61) = numTrueClipPlanes;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 272, ASSERT_TYPE_ASSERT, "( numTrueClipPlanes ) == ( 2 )", "%s == %s\n\t%i, %i", "numTrueClipPlanes", "2", v61, v62) )
        __debugbreak();
    }
  }
  if ( numFalseClipPlanes )
  {
    if ( numFalseClipPlanes != 2 )
    {
      LODWORD(v62) = 2;
      LODWORD(v61) = numFalseClipPlanes;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 276, ASSERT_TYPE_ASSERT, "( numFalseClipPlanes ) == ( 2 )", "%s == %s\n\t%i, %i", "numFalseClipPlanes", "2", v61, v62) )
        __debugbreak();
    }
  }
  v12 = (bool (__fastcall *)(const float4 *, const float4 *))type;
  if ( !(_QWORD)type && v11 != 2 )
  {
    LODWORD(v62) = 2;
    LODWORD(v61) = numFalseClipPlanes + numTrueClipPlanes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 280, ASSERT_TYPE_ASSERT, "( numTrueClipPlanes + numFalseClipPlanes ) == ( 2 )", "%s == %s\n\t%i, %i", "numTrueClipPlanes + numFalseClipPlanes", "2", v61, v62) )
      __debugbreak();
    v12 = NULL;
  }
  if ( numTrueClipPlanes )
  {
    _RCX = _RSI;
    _RAX = &trueClipPlaneNormals->v[2];
    _R14 = (char *)trueClipPlanePoints - (char *)trueClipPlaneNormals;
    v16 = numTrueClipPlanes;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rax-8] }
      _RCX = (EdgeOctreeQueryCustomClip *)((char *)_RCX + 16);
      HIDWORD(type) = 0;
      _RAX += 3;
      HIDWORD(v64) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rbp+37h+type]
        vmovups xmm3, xmmword ptr [rbp-39h]
        vmovss  xmm4, xmm4, xmm0
        vmovss  xmm0, dword ptr [r14+rax-14h]
        vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
        vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r14+rax-10h], 10h
        vinsertps xmm3, xmm3, dword ptr [r14+rax-0Ch], 20h ; ' '
        vmulps  xmm0, xmm3, xmm4
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vshufps xmm1, xmm4, xmm0, 0FAh ; 'ú'
        vshufps xmm2, xmm4, xmm1, 84h ; '„'
        vmovups xmmword ptr [rcx-10h], xmm2
        vmovups xmmword ptr [rbp+37h+type], xmm4
        vmovups xmmword ptr [rbp-39h], xmm3
      }
      --v16;
    }
    while ( v16 );
  }
  if ( numFalseClipPlanes )
  {
    _RCX = &_RSI->m_userClipPlanes[numTrueClipPlanes];
    _R15 = (char *)falseClipPlanePoints - (char *)falseClipPlaneNormals;
    _RAX = &falseClipPlaneNormals->v[2];
    v36 = numFalseClipPlanes;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rax-8] }
      ++_RCX;
      HIDWORD(v64) = 0;
      _RAX += 3;
      HIDWORD(v66) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rbp-39h]
        vmovups xmm3, [rbp+37h+var_50]
        vmovss  xmm4, xmm4, xmm0
        vmovss  xmm0, dword ptr [r15+rax-14h]
        vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
        vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r15+rax-10h], 10h
        vinsertps xmm3, xmm3, dword ptr [r15+rax-0Ch], 20h ; ' '
        vmulps  xmm0, xmm3, xmm4
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vshufps xmm1, xmm4, xmm0, 0FAh ; 'ú'
        vshufps xmm2, xmm4, xmm1, 84h ; '„'
        vmovups xmmword ptr [rcx-10h], xmm2
        vmovups xmmword ptr [rbp-39h], xmm4
        vmovups [rbp+37h+var_50], xmm3
      }
      --v36;
    }
    while ( v36 );
  }
  _RAX = textAxis;
  _RSI->m_numUserClipPlanes = v11;
  _RSI->m_clipPlaneTestFunc = v12;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm2, dword ptr [rax+8]
  }
  _RSI->m_numUserClipPlanesTrue = numTrueClipPlanes;
  HIDWORD(v64) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp-39h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    vmovups xmmword ptr [rsi+40h], xmm3
  }
  _RSI->m_numUserClipPlanesFalse = numFalseClipPlanes;
}

/*
==============
EdgeOctreeQueryCustomClip::Initialize
==============
*/
void EdgeOctreeQueryCustomClip::Initialize(EdgeOctreeQueryCustomClip *this, unsigned __int64 numClipPlanes, const vec3_t *clipPlanePoints, const vec3_t *clipPlaneNormals)
{
  unsigned __int64 v12; 
  int v29; 
  int v30; 
  __int128 v31; 
  __int128 v32; 

  _RBX = this;
  if ( numClipPlanes > 4 )
  {
    v30 = 4;
    v29 = numClipPlanes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 249, ASSERT_TYPE_ASSERT, "( numClipPlanes ) <= ( ms_maxCustomPlanes )", "%s <= %s\n\t%i, %i", "numClipPlanes", "ms_maxCustomPlanes", v29, v30) )
      __debugbreak();
  }
  if ( numClipPlanes )
  {
    _RCX = _RBX;
    _RAX = &clipPlaneNormals->v[2];
    _RSI = (char *)clipPlanePoints - (char *)clipPlaneNormals;
    v12 = numClipPlanes;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rax-8] }
      _RCX = (EdgeOctreeQueryCustomClip *)((char *)_RCX + 16);
      HIDWORD(v31) = 0;
      _RAX += 3;
      HIDWORD(v32) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp+50h]
        vmovups xmm3, xmmword ptr [rsp+60h]
        vmovss  xmm4, xmm4, xmm0
        vmovss  xmm0, dword ptr [rsi+rax-14h]
        vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
        vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsi+rax-10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+rax-0Ch], 20h ; ' '
        vmulps  xmm0, xmm3, xmm4
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vshufps xmm1, xmm4, xmm0, 0FAh ; 'ú'
        vshufps xmm2, xmm4, xmm1, 84h ; '„'
        vmovups xmmword ptr [rcx-10h], xmm2
        vmovups xmmword ptr [rsp+50h], xmm4
        vmovups xmmword ptr [rsp+60h], xmm3
      }
      --v12;
    }
    while ( v12 );
  }
  _RBX->m_numUserClipPlanes = numClipPlanes;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RBX->m_clipPlaneTestFunc = NULL;
  __asm { vmovups xmmword ptr [rbx+40h], xmm0 }
  _RBX->m_numUserClipPlanesTrue = 0i64;
  _RBX->m_numUserClipPlanesFalse = 0i64;
}

/*
==============
EdgeOctreeQueryFrustum::Initialize
==============
*/
void EdgeOctreeQueryFrustum::Initialize(EdgeOctreeQueryFrustum *this, const EdgeFrustumQueryShape *shape)
{
  __int64 v5; 
  void (**m_nodeBlendFunc)(const float4, const float4, float4 *); 
  __int64 v39; 
  void (__fastcall *v41)(const float4 *, const float4 *, float4 *); 
  unsigned __int64 i; 
  char v50; 
  char v51; 
  __int128 v54; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  _RDI = &this->m_shape;
  v5 = 2i64;
  _RAX = &this->m_shape;
  do
  {
    _RAX = (EdgeFrustumQueryShape *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rdx] }
    shape = (const EdgeFrustumQueryShape *)((char *)shape + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rdx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rdx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rdx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rdx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rdx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rdx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v5;
  }
  while ( v5 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmm7, cs:__xmm@ff7fffffff7fffffff7fffffff7fffff
    vmovups xmmword ptr [rax], xmm0
    vmovups xmm1, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rax+10h], xmm1
    vmovups xmm0, xmmword ptr cs:?g_infinity@@3Ufloat4@@B.v; float4 const g_infinity
    vmovups xmmword ptr [rcx+1A0h], xmm0
    vmovups xmm0, xmmword ptr cs:?g_negativeInfinity@@3Ufloat4@@B.v; float4 const g_negativeInfinity
    vmovups xmmword ptr [rcx+1B0h], xmm0
    vmovups xmm0, xmmword ptr [rcx+1A0h]
    vminps  xmm3, xmm0, xmmword ptr [rcx+0D0h]
    vmovups xmm0, xmmword ptr [rcx+1B0h]
    vmovups xmmword ptr [rcx+1A0h], xmm3
    vmaxps  xmm2, xmm0, xmmword ptr [rcx+0D0h]
    vmovups xmmword ptr [rcx+1B0h], xmm2
    vminps  xmm1, xmm3, xmmword ptr [rcx+0E0h]
    vmovups xmmword ptr [rcx+1A0h], xmm1
    vmaxps  xmm3, xmm2, xmmword ptr [rcx+0E0h]
    vmovups xmmword ptr [rcx+1B0h], xmm3
    vminps  xmm2, xmm1, xmmword ptr [rcx+0F0h]
    vmovups xmmword ptr [rcx+1A0h], xmm2
    vmaxps  xmm1, xmm3, xmmword ptr [rcx+0F0h]
    vmovups xmmword ptr [rcx+1B0h], xmm1
    vminps  xmm3, xmm2, xmmword ptr [rcx+100h]
    vmovups xmmword ptr [rcx+1A0h], xmm3
    vmaxps  xmm2, xmm1, xmmword ptr [rcx+100h]
    vmovups xmmword ptr [rcx+1B0h], xmm2
    vminps  xmm1, xmm3, xmmword ptr [rcx+110h]
    vmovups xmmword ptr [rcx+1A0h], xmm1
    vmaxps  xmm3, xmm2, xmmword ptr [rcx+110h]
    vmovups xmmword ptr [rcx+1B0h], xmm3
    vminps  xmm2, xmm1, xmmword ptr [rcx+120h]
    vmovups xmmword ptr [rcx+1A0h], xmm2
    vmaxps  xmm1, xmm3, xmmword ptr [rcx+120h]
    vmovups xmmword ptr [rcx+1B0h], xmm1
    vminps  xmm3, xmm2, xmmword ptr [rcx+130h]
    vmovups xmmword ptr [rcx+1A0h], xmm3
    vmaxps  xmm2, xmm1, xmmword ptr [rcx+130h]
    vmovups xmmword ptr [rcx+1B0h], xmm2
    vminps  xmm0, xmm3, xmmword ptr [rcx+140h]
    vmovups xmmword ptr [rcx+1A0h], xmm0
    vmaxps  xmm0, xmm2, xmmword ptr [rcx+140h]
    vmovups xmmword ptr [rcx+1B0h], xmm0
  }
  m_nodeBlendFunc = this->m_nodeBlendFunc;
  v39 = (unsigned int)(unsigned __int8)v5 + 6;
  do
  {
    __asm { vmovups xmm6, xmm7 }
    v41 = Float4Blendxyzw;
    for ( i = 0i64; i < 8; ++i )
    {
      __asm
      {
        vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
      }
      ((void (__fastcall *)(EdgeOctreeQueryFrustum *, const EdgeFrustumQueryShape *, __int128 *))blendFunc[i])(this, shape, &v54);
      __asm
      {
        vmovups xmm1, xmmword ptr [rdi]
        vmulps  xmm1, xmm1, [rsp+78h+var_58]
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vcomiss xmm1, xmm6
      }
      if ( !(v50 | v51) )
      {
        v41 = (void (__fastcall *)(const float4 *, const float4 *, float4 *))blendFunc[i];
        __asm { vmovups xmm6, xmm1 }
      }
    }
    *m_nodeBlendFunc = (void (*)(const float4, const float4, float4 *))v41;
    _RDI = (EdgeFrustumQueryShape *)((char *)_RDI + 16);
    ++m_nodeBlendFunc;
    --v39;
  }
  while ( v39 );
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
IntersectThreePlanes
==============
*/
bool IntersectThreePlanes(const float4 *r_planeA, const float4 *r_planeB, const float4 *r_planeC, float4 *r_outCorner)
{
  bool v9; 
  bool result; 
  __int128 v16[4]; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmm1, xmmword ptr [rdx]
    vmovups xmmword ptr [rsp+78h+plane], xmm0
    vmovups xmm0, xmmword ptr [r8]
    vmovups xmmword ptr [rsp+78h+plane+10h], xmm1
    vxorps  xmm1, xmm1, xmm1
  }
  _RBX = r_outCorner;
  __asm
  {
    vmovss  dword ptr [rsp+78h+var_58], xmm1
    vmovss  dword ptr [rsp+78h+var_58+4], xmm1
    vmovss  dword ptr [rsp+78h+var_58+8], xmm1
    vmovups xmmword ptr [rsp+78h+plane+20h], xmm0
  }
  v9 = IntersectPlanes((const vec4_t (*)[3])&v16[1], (vec3_t *)v16);
  __asm { vmovss  xmm0, dword ptr [rsp+78h+var_58] }
  result = v9;
  HIDWORD(v16[0]) = 0;
  __asm
  {
    vmovups xmm3, [rsp+78h+var_58]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rsp+78h+var_58+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rsp+78h+var_58+8], 20h
    vmovups xmmword ptr [rbx], xmm3
  }
  return result;
}

/*
==============
EdgeOctreeQueryFrustum::SetAxisBias
==============
*/

void __fastcall EdgeOctreeQueryFrustum::SetAxisBias(EdgeOctreeQueryFrustum *this, const vec3_t *axis, double bias)
{
  bool v24; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  __int128 v41; 

  __asm
  {
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rdx+8]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vmovaps xmm6, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RBX = axis;
  _RDI = this;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+98h+var_58], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+98h+var_60], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+98h+var_68], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+98h+var_70], xmm0
  }
  v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 815, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis ) )", "(%g, %g, %g) len %g", v35, v36, v37, v39);
  if ( v24 )
    __debugbreak();
  __asm { vcomiss xmm6, cs:__real@3a83126f }
  if ( !v24 )
  {
    __asm
    {
      vmovsd  xmm1, cs:__real@3f50624de0000000
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+98h+var_58], xmm0
      vmovsd  [rsp+98h+var_60], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 816, ASSERT_TYPE_ASSERT, "( 0.001f ) < ( bias )", "%s < %s\n\t%g, %g", "EQUAL_EPSILON", "bias", v38, v40) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [rbx] }
  HIDWORD(v41) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+50h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
    vdivss  xmm0, xmm7, xmm6
    vmovups xmmword ptr [rdi+190h], xmm3
    vmovss  dword ptr [rdi+1F8h], xmm0
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
  }
}

/*
==============
EdgeOctreeQueryFrustum::SetDistanceCenterBias
==============
*/

void __fastcall EdgeOctreeQueryFrustum::SetDistanceCenterBias(EdgeOctreeQueryFrustum *this, double centerBias)
{
  __asm
  {
    vcomiss xmm1, cs:__real@3a83126f
    vmovaps [rsp+68h+var_18], xmm6
  }
  _RBX = this;
  __asm
  {
    vmovaps xmm6, xmm1
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+1F0h], xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rbx+1F4h], xmm1
  }
}

/*
==============
EdgeOctreeQueryShape::SetUserClipPlanes
==============
*/

void __fastcall EdgeOctreeQueryShape::SetUserClipPlanes(EdgeOctreeQueryShape *this, bool (__fastcall *testFunc)(const float4 *, const float4 *), const vec3_t *textAxis, unsigned __int64 numTrueClipPlanes, const vec3_t *trueClipPlanePoints, const vec3_t *trueClipPlaneNormals, unsigned __int64 numFalseClipPlanes, const vec3_t *falseClipPlanePoints, const vec3_t *falseClipPlaneNormals)
{
  EdgeOctreeQueryCustomClip::Initialize(&this->m_customClip, testFunc, textAxis, numTrueClipPlanes, trueClipPlanePoints, trueClipPlaneNormals, numFalseClipPlanes, falseClipPlanePoints, falseClipPlaneNormals);
}

/*
==============
EdgeOctreeQueryShape::SetUserClipPlanes
==============
*/
void EdgeOctreeQueryShape::SetUserClipPlanes(EdgeOctreeQueryShape *this, unsigned __int64 numClipPlanes, const vec3_t *clipPlanePoints, const vec3_t *clipPlaneNormals)
{
  unsigned __int64 v12; 
  int v29; 
  int v30; 
  __int128 v31; 
  __int128 v32; 

  _RBX = this;
  if ( numClipPlanes > 4 )
  {
    v30 = 4;
    v29 = numClipPlanes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 249, ASSERT_TYPE_ASSERT, "( numClipPlanes ) <= ( ms_maxCustomPlanes )", "%s <= %s\n\t%i, %i", "numClipPlanes", "ms_maxCustomPlanes", v29, v30) )
      __debugbreak();
  }
  if ( numClipPlanes )
  {
    _RCX = _RBX;
    _RAX = &clipPlaneNormals->v[2];
    _RSI = (char *)clipPlanePoints - (char *)clipPlaneNormals;
    v12 = numClipPlanes;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rax-8] }
      _RCX = (EdgeOctreeQueryShape *)((char *)_RCX + 16);
      HIDWORD(v31) = 0;
      _RAX += 3;
      HIDWORD(v32) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp+50h]
        vmovups xmm3, xmmword ptr [rsp+60h]
        vmovss  xmm4, xmm4, xmm0
        vmovss  xmm0, dword ptr [rsi+rax-14h]
        vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
        vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsi+rax-10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+rax-0Ch], 20h ; ' '
        vmulps  xmm0, xmm3, xmm4
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vshufps xmm1, xmm4, xmm0, 0FAh ; 'ú'
        vshufps xmm2, xmm4, xmm1, 84h ; '„'
        vmovups xmmword ptr [rcx-10h], xmm2
        vmovups xmmword ptr [rsp+50h], xmm4
        vmovups xmmword ptr [rsp+60h], xmm3
      }
      --v12;
    }
    while ( v12 );
  }
  _RBX->m_customClip.m_numUserClipPlanes = numClipPlanes;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RBX->m_customClip.m_clipPlaneTestFunc = NULL;
  __asm { vmovups xmmword ptr [rbx+40h], xmm0 }
  _RBX->m_customClip.m_numUserClipPlanesTrue = 0i64;
  _RBX->m_customClip.m_numUserClipPlanesFalse = 0i64;
}

/*
==============
EdgeFrustumQueryShape::Transform
==============
*/
void EdgeFrustumQueryShape::Transform(EdgeFrustumQueryShape *this, const tmat43_t<vec3_t> *transform)
{
  __int64 v121; 
  __int64 v185; 
  double v252; 
  double v253; 
  double v254; 
  double v255; 
  double v256; 
  double v257; 
  double v258; 
  double v259; 
  double v260; 
  double v261; 
  double v262; 
  double v263; 
  double v264; 
  double v265; 
  double v266; 
  double v267; 
  double v268; 
  double v269; 
  double v270; 
  double v271; 
  double v272; 
  double v273; 
  double v274; 
  double v275; 
  double v276; 
  double v277; 
  __int128 v278; 
  __int128 v279; 
  __int128 v280; 
  __int128 v281; 
  char v282; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RBX = transform;
  _RDI = this;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rdx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vmovss  xmm6, cs:__real@3f800000
    vsubss  xmm0, xmm1, xmm6
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm0, xmm7
    vmovss  xmm8, cs:__real@3b03126f
    vcomiss xmm0, xmm8
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vcvtss2sd xmm2, xmm5, xmm5
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vmovsd  [rsp+0E8h+var_C0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 482, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( transform[0] ) )", "(%g, %g, %g) len %g", v252, v257, v262, v267) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+10h]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmovss  xmm5, dword ptr [rbx+14h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vcvtss2sd xmm2, xmm5, xmm5
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vmovsd  [rsp+0E8h+var_C0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 483, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( transform[1] ) )", "(%g, %g, %g) len %g", v253, v258, v263, v268) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+1Ch]
    vmovss  xmm4, dword ptr [rbx+18h]
    vmovss  xmm5, dword ptr [rbx+20h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm6
    vandps  xmm0, xmm0, xmm7
    vcomiss xmm0, xmm8
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vcvtss2sd xmm2, xmm5, xmm5
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+0E8h+var_A8], xmm1
    vmovsd  [rsp+0E8h+var_B0], xmm2
    vmovsd  [rsp+0E8h+var_B8], xmm3
    vmovsd  [rsp+0E8h+var_C0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 484, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( transform[2] ) )", "(%g, %g, %g) len %g", v254, v259, v264, v269) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+10h]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+14h]
    vmovss  xmm10, dword ptr [rbx+8]
    vmulss  xmm1, xmm6, xmm4
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm9
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vmovss  xmm8, cs:__real@3a83126f
    vcomiss xmm0, xmm8
    vcvtss2sd xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm9, xmm9
    vcvtss2sd xmm2, xmm3, xmm3
    vcvtss2sd xmm3, xmm4, xmm4
    vcvtss2sd xmm4, xmm10, xmm10
    vcvtss2sd xmm5, xmm5, xmm5
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+0E8h+var_90], xmm0
    vmovsd  [rsp+0E8h+var_98], xmm1
    vmovsd  [rsp+0E8h+var_A0], xmm2
    vmovsd  [rsp+0E8h+var_A8], xmm3
    vmovsd  [rsp+0E8h+var_B0], xmm4
    vmovsd  [rsp+0E8h+var_B8], xmm5
    vmovsd  [rsp+0E8h+var_C0], xmm6
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 485, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( transform[0], transform[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v255, v260, v265, v270, v272, v274, v276) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+1Ch]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+18h]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+20h]
    vmovss  xmm10, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm3, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm10
    vaddss  xmm1, xmm2, xmm1
    vandps  xmm0, xmm1, xmm7
    vcomiss xmm0, xmm8
    vcvtss2sd xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm9, xmm9
    vcvtss2sd xmm2, xmm3, xmm3
    vcvtss2sd xmm3, xmm4, xmm4
    vcvtss2sd xmm4, xmm10, xmm10
    vcvtss2sd xmm5, xmm5, xmm5
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+0E8h+var_90], xmm0
    vmovsd  [rsp+0E8h+var_98], xmm1
    vmovsd  [rsp+0E8h+var_A0], xmm2
    vmovsd  [rsp+0E8h+var_A8], xmm3
    vmovsd  [rsp+0E8h+var_B0], xmm4
    vmovsd  [rsp+0E8h+var_B8], xmm5
    vmovsd  [rsp+0E8h+var_C0], xmm6
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 486, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( transform[0], transform[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v256, v261, v266, v271, v273, v275, v277) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "EdgeOctreeQueryFrustum::Shape::Transform");
  __asm { vmovss  xmm0, dword ptr [rbx] }
  HIDWORD(v278) = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+70h]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rbx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+8], 20h ; ' '
    vmovups xmmword ptr [rsp+70h], xmm6
    vmovss  xmm0, dword ptr [rbx+0Ch]
  }
  HIDWORD(v279) = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+70h]
    vmovss  xmm7, xmm7, xmm0
    vinsertps xmm7, xmm7, dword ptr [rbx+10h], 10h
    vinsertps xmm7, xmm7, dword ptr [rbx+14h], 20h ; ' '
    vmovups xmmword ptr [rsp+70h], xmm7
    vmovss  xmm0, dword ptr [rbx+18h]
  }
  HIDWORD(v280) = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rsp+70h]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [rbx+1Ch], 10h
    vinsertps xmm8, xmm8, dword ptr [rbx+20h], 20h ; ' '
    vmovups xmmword ptr [rsp+70h], xmm8
    vmovss  xmm0, dword ptr [rbx+24h]
  }
  HIDWORD(v281) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+70h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rbx+28h], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+2Ch], 20h ; ' '
    vxorps  xmm1, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vandps  xmm1, xmm1, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
    vxorps  xmm9, xmm3, xmm1
  }
  _RAX = &_RDI->m_planes[1];
  v121 = 3i64;
  do
  {
    __asm
    {
      vbroadcastss xmm0, dword ptr [rax-4]
      vmulps  xmm2, xmm0, xmmword ptr [rax-10h]
      vshufps xmm3, xmm2, xmm2, 0AAh ; 'ª'
      vshufps xmm1, xmm2, xmm2, 55h ; 'U'
      vshufps xmm4, xmm2, xmm2, 0
      vmulps  xmm0, xmm8, xmm3
      vaddps  xmm2, xmm0, xmm9
      vmulps  xmm1, xmm7, xmm1
      vaddps  xmm3, xmm1, xmm2
      vmulps  xmm0, xmm6, xmm4
      vaddps  xmm5, xmm0, xmm3
      vmovups xmm0, xmmword ptr [rax-10h]
      vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm2, xmm0, xmm0, 55h ; 'U'
      vshufps xmm3, xmm0, xmm0, 0
      vmulps  xmm1, xmm8, xmm1
      vmulps  xmm0, xmm7, xmm2
      vaddps  xmm2, xmm0, xmm1
      vmulps  xmm1, xmm6, xmm3
      vaddps  xmm4, xmm1, xmm2
      vmulps  xmm0, xmm5, xmm4
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vshufps xmm1, xmm4, xmm0, 0FAh ; 'ú'
      vshufps xmm2, xmm4, xmm1, 84h ; '„'
      vmovups xmmword ptr [rax-10h], xmm2
      vmovups xmm0, xmmword ptr [rax]
      vshufps xmm1, xmm0, xmm0, 0FFh
      vmulps  xmm2, xmm0, xmm1
      vshufps xmm3, xmm2, xmm2, 0AAh ; 'ª'
      vshufps xmm1, xmm2, xmm2, 55h ; 'U'
      vshufps xmm4, xmm2, xmm2, 0
      vmulps  xmm0, xmm8, xmm3
      vaddps  xmm2, xmm9, xmm0
      vmulps  xmm1, xmm7, xmm1
      vaddps  xmm3, xmm2, xmm1
      vmulps  xmm0, xmm6, xmm4
      vaddps  xmm5, xmm3, xmm0
      vmovups xmm0, xmmword ptr [rax]
      vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm2, xmm0, xmm0, 55h ; 'U'
      vshufps xmm3, xmm0, xmm0, 0
      vmulps  xmm1, xmm8, xmm1
      vmulps  xmm0, xmm7, xmm2
      vaddps  xmm2, xmm1, xmm0
      vmulps  xmm1, xmm6, xmm3
      vaddps  xmm4, xmm2, xmm1
      vmulps  xmm0, xmm5, xmm4
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vshufps xmm0, xmm4, xmm0, 0FAh ; 'ú'
      vshufps xmm0, xmm4, xmm0, 84h ; '„'
      vmovups xmmword ptr [rax], xmm0
    }
    _RAX += 2;
    --v121;
  }
  while ( v121 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+110h]
    vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
    vshufps xmm2, xmm0, xmm0, 55h ; 'U'
    vshufps xmm3, xmm0, xmm0, 0
    vmulps  xmm1, xmm8, xmm1
    vmulps  xmm0, xmm7, xmm2
    vaddps  xmm2, xmm1, xmm0
    vmulps  xmm1, xmm6, xmm3
    vaddps  xmm0, xmm2, xmm1
    vmovups xmmword ptr [rdi+110h], xmm0
  }
  _RAX = &_RDI->m_corners[1];
  v185 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax-10h]
      vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm3, xmm0, xmm0, 55h ; 'U'
      vshufps xmm4, xmm0, xmm0, 0
      vmulps  xmm0, xmm8, xmm1
      vaddps  xmm2, xmm0, xmm9
      vmulps  xmm1, xmm7, xmm3
      vaddps  xmm3, xmm1, xmm2
      vmulps  xmm0, xmm6, xmm4
      vaddps  xmm1, xmm0, xmm3
      vmovups xmmword ptr [rax-10h], xmm1
      vmovups xmm0, xmmword ptr [rax]
      vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm3, xmm0, xmm0, 55h ; 'U'
      vshufps xmm4, xmm0, xmm0, 0
      vmulps  xmm0, xmm8, xmm1
      vaddps  xmm2, xmm0, xmm9
      vmulps  xmm1, xmm7, xmm3
      vaddps  xmm3, xmm1, xmm2
      vmulps  xmm0, xmm6, xmm4
      vaddps  xmm1, xmm0, xmm3
      vmovups xmmword ptr [rax], xmm1
      vmovups xmm0, xmmword ptr [rax+10h]
      vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm3, xmm0, xmm0, 55h ; 'U'
      vshufps xmm4, xmm0, xmm0, 0
      vmulps  xmm0, xmm8, xmm1
      vaddps  xmm2, xmm0, xmm9
      vmulps  xmm1, xmm7, xmm3
      vaddps  xmm3, xmm1, xmm2
      vmulps  xmm0, xmm6, xmm4
      vaddps  xmm1, xmm0, xmm3
      vmovups xmmword ptr [rax+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm3, xmm0, xmm0, 55h ; 'U'
      vshufps xmm4, xmm0, xmm0, 0
      vmulps  xmm0, xmm8, xmm1
      vaddps  xmm2, xmm9, xmm0
      vmulps  xmm1, xmm7, xmm3
      vaddps  xmm3, xmm2, xmm1
      vmulps  xmm0, xmm6, xmm4
      vaddps  xmm0, xmm3, xmm0
      vmovups xmmword ptr [rax+20h], xmm0
    }
    _RAX += 4;
    --v185;
  }
  while ( v185 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+0E0h]
    vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
    vshufps xmm3, xmm0, xmm0, 55h ; 'U'
    vshufps xmm4, xmm0, xmm0, 0
    vmulps  xmm0, xmm8, xmm1
    vaddps  xmm2, xmm9, xmm0
    vmulps  xmm1, xmm7, xmm3
    vaddps  xmm3, xmm2, xmm1
    vmulps  xmm0, xmm6, xmm4
    vaddps  xmm0, xmm3, xmm0
    vmovups xmmword ptr [rdi+0E0h], xmm0
    vmovups xmm0, xmmword ptr [rdi+0F0h]
    vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
    vshufps xmm3, xmm0, xmm0, 55h ; 'U'
    vshufps xmm4, xmm0, xmm0, 0
    vmulps  xmm0, xmm8, xmm1
    vaddps  xmm2, xmm9, xmm0
    vmulps  xmm1, xmm7, xmm3
    vaddps  xmm3, xmm2, xmm1
    vmulps  xmm0, xmm6, xmm4
    vaddps  xmm0, xmm3, xmm0
    vmovups xmmword ptr [rdi+0F0h], xmm0
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v282;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
EdgeOctreeQueryCustomClip::TrimLineSegment
==============
*/
void EdgeOctreeQueryCustomClip::TrimLineSegment(EdgeOctreeQueryCustomClip *this, const float4 *r_lineSegmentPoint, const float4 *r_lineSegmentDir, float *r_inOutTMin, float *r_inOutTMax)
{
  unsigned __int64 m_numUserClipPlanes; 
  EdgeOctreeQueryCustomClip *v10; 
  bool (__fastcall *m_clipPlaneTestFunc)(const float4 *, const float4 *); 
  int v12; 
  int v13; 

  m_numUserClipPlanes = this->m_numUserClipPlanes;
  v10 = this;
  if ( m_numUserClipPlanes )
  {
    m_clipPlaneTestFunc = this->m_clipPlaneTestFunc;
    if ( m_clipPlaneTestFunc )
    {
      if ( m_clipPlaneTestFunc(&this->m_userClipPlaneTestAxis, r_lineSegmentDir) )
      {
        m_numUserClipPlanes = this->m_numUserClipPlanesTrue;
      }
      else
      {
        m_numUserClipPlanes = this->m_numUserClipPlanesFalse;
        v10 = (EdgeOctreeQueryCustomClip *)((char *)this + 16 * this->m_numUserClipPlanesTrue);
      }
    }
    if ( m_numUserClipPlanes != 2 )
    {
      v13 = 2;
      v12 = m_numUserClipPlanes;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 328, ASSERT_TYPE_ASSERT, "( userClipCount ) == ( 2 )", "%s == %s\n\t%i, %i", "userClipCount", "2", v12, v13) )
        __debugbreak();
    }
    TrimLineSegmentByPlanes_Internal_2_(r_lineSegmentPoint, r_lineSegmentDir, v10->m_userClipPlanes, m_numUserClipPlanes, r_inOutTMin, r_inOutTMax);
  }
}

/*
==============
EdgeOctreeQueryShape::TrimLineSegmentByPlanes
==============
*/

void __fastcall EdgeOctreeQueryShape::TrimLineSegmentByPlanes(const float4 *r_lineSegmentPoint, const float4 *r_lineSegmentDir, const float4 *r_planes, unsigned __int64 planeCount, float *r_inOutTMin, float *r_inOutTMax)
{
  TrimLineSegmentByPlanes_Internal_6_(r_lineSegmentPoint, r_lineSegmentDir, r_planes, planeCount, r_inOutTMin, r_inOutTMax);
}

