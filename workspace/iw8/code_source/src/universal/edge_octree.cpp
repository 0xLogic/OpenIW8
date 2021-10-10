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
  this->m_clipPlaneTestFunc = NULL;
  this->m_numUserClipPlanes = 0i64;
  this->m_numUserClipPlanesTrue = 0i64;
  this->m_numUserClipPlanesFalse = 0i64;
  this->m_userClipPlaneTestAxis = 0i64;
}

/*
==============
EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum
==============
*/

void __fastcall EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(EdgeOctreeQueryFrustum *this, const vec3_t *origin, const tmat33_t<vec3_t> *axis, double horizHalfAngleRad, float vertHalfAngleRad, float nearDist, float farDist)
{
  __m128 v7; 
  const float4 *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
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
  float v28; 
  float v29; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v38; 
  __m128 v; 
  float v43; 
  __m128 v45; 
  float v48; 
  __m128 v50; 
  __m128 v53; 
  float v54; 
  __m128 v56; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v62; 
  __m128 v67; 
  __m128 v79; 
  __m128 v80; 
  __m128 v81; 
  __m128 v82; 
  __m128 v83; 
  __m128 v84; 
  const float4 *v94; 
  __m128 v97; 
  __m128 v98; 
  __m128 v99; 
  __m128 v100; 
  __m128 v101; 
  __m128 v102; 
  const float4 *v107; 
  const float4 *v108; 
  const float4 *v109; 
  const float4 *v110; 
  const float4 *v115; 
  const float4 *v116; 
  const float4 *v117; 
  const float4 *v118; 
  __m128 v123; 
  bool v124; 
  bool v125; 
  bool v126; 
  bool v127; 
  bool v128; 
  bool v129; 
  unsigned __int8 v130; 
  float4 v131; 
  EdgeFrustumQueryShape r_planeA_8; 
  __int64 v133; 
  float4 v134; 

  v133 = -2i64;
  v7 = *(__m128 *)&horizHalfAngleRad;
  this->m_customClip.m_userClipPlaneTestAxis = 0i64;
  this->m_customClip.m_clipPlaneTestFunc = NULL;
  this->m_customClip.m_numUserClipPlanes = 0i64;
  this->m_customClip.m_numUserClipPlanesTrue = 0i64;
  this->m_customClip.m_numUserClipPlanesFalse = 0i64;
  this->m_userAxis = 0i64;
  this->m_centerBias = 1.0;
  this->m_invCenterBias = 1.0;
  this->m_invAxisBias = 1.0;
  Sys_ProfBeginNamedEvent(0xFF008008, "EdgeOctreeQueryFrustum Full Constructor");
  v12 = axis->m[0].v[1];
  v13 = axis->m[0].v[0];
  v14 = axis->m[0].v[2];
  v15 = (float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 544, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[0] ) )", "(%g, %g, %g) len %g", v13, v12, v14, fsqrt(v15)) )
    __debugbreak();
  v16 = axis->m[1].v[1];
  v17 = axis->m[1].v[0];
  v18 = axis->m[1].v[2];
  v19 = (float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 545, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[1] ) )", "(%g, %g, %g) len %g", v17, v16, v18, fsqrt(v19)) )
    __debugbreak();
  v20 = axis->m[2].v[1];
  v21 = axis->m[2].v[0];
  v22 = axis->m[2].v[2];
  v23 = (float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 546, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v21, v20, v22, fsqrt(v23)) )
    __debugbreak();
  v24 = axis->m[1].v[1];
  v25 = axis->m[0].v[1];
  v26 = axis->m[1].v[0];
  v27 = axis->m[1].v[2];
  v28 = axis->m[0].v[2];
  v29 = (float)((float)(v26 * axis->m[0].v[0]) + (float)(v24 * v25)) + (float)(v27 * v28);
  _XMM8 = LODWORD(FLOAT_0_001);
  if ( COERCE_FLOAT(LODWORD(v29) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 547, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v25, v28, v26, v24, v27, v29) )
    __debugbreak();
  v31 = axis->m[2].v[1];
  v32 = axis->m[0].v[1];
  v33 = axis->m[2].v[0];
  v34 = axis->m[2].v[2];
  v35 = axis->m[0].v[2];
  v36 = (float)((float)(v33 * axis->m[0].v[0]) + (float)(v31 * v32)) + (float)(v34 * v35);
  if ( COERCE_FLOAT(LODWORD(v36) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 548, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v32, v35, v33, v31, v34, v36) )
    __debugbreak();
  __asm { vxorpd  xmm8, xmm8, xmm8 }
  if ( v7.m128_f32[0] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 549, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( horizHalfAngleRad )", "%s < %s\n\t%g, %g", "0.0f", "horizHalfAngleRad", *(double *)&_XMM8, v7.m128_f32[0]) )
    __debugbreak();
  if ( vertHalfAngleRad <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 550, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( vertHalfAngleRad )", "%s < %s\n\t%g, %g", "0.0f", "vertHalfAngleRad", *(double *)&_XMM8, vertHalfAngleRad) )
    __debugbreak();
  if ( nearDist <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 551, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( nearDist )", "%s < %s\n\t%g, %g", "0.0f", "nearDist", *(double *)&_XMM8, nearDist) )
    __debugbreak();
  if ( nearDist >= farDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 552, ASSERT_TYPE_ASSERT, "( nearDist ) < ( farDist )", "%s < %s\n\t%g, %g", "nearDist", "farDist", nearDist, farDist) )
    __debugbreak();
  v38 = origin->v[0];
  v134.v.m128_i32[3] = 0;
  v = v134.v;
  v.m128_f32[0] = v38;
  _XMM15 = v;
  __asm
  {
    vinsertps xmm15, xmm15, dword ptr [rsi+4], 10h
    vinsertps xmm15, xmm15, dword ptr [rsi+8], 20h ; ' '
  }
  v134.v = _XMM15;
  v43 = axis->m[0].v[0];
  v134.v.m128_i32[3] = 0;
  v45 = v134.v;
  v45.m128_f32[0] = v43;
  _XMM4 = v45;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rbx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rbx+8], 20h ; ' '
  }
  v134.v = _XMM4;
  r_planeA_8.m_forward.v = _XMM4;
  v48 = axis->m[1].v[0];
  v134.v.m128_i32[3] = 0;
  v50 = v134.v;
  v50.m128_f32[0] = v48;
  _XMM11 = v50;
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [rbx+10h], 10h
    vinsertps xmm11, xmm11, dword ptr [rbx+14h], 20h ; ' '
  }
  v134.v = _XMM11;
  v53 = _mm128_sub_ps((__m128)0i64, _XMM11);
  v54 = axis->m[2].v[0];
  v134.v.m128_i32[3] = 0;
  v56 = v134.v;
  v56.m128_f32[0] = v54;
  _XMM8 = v56;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rbx+1Ch], 10h
    vinsertps xmm8, xmm8, dword ptr [rbx+20h], 20h ; ' '
  }
  v134.v = _XMM8;
  v59 = _mm128_sub_ps((__m128)0i64, _XMM8);
  v60 = _mm_shuffle_ps(v7, v7, 0);
  _mm_shuffle_ps((__m128)LODWORD(vertHalfAngleRad), (__m128)LODWORD(vertHalfAngleRad), 0);
  v61 = _mm_shuffle_ps((__m128)LODWORD(nearDist), (__m128)LODWORD(nearDist), 0);
  v62 = _mm_shuffle_ps((__m128)LODWORD(farDist), (__m128)LODWORD(farDist), 0);
  _XMM2 = _mm128_mul_ps(_XMM4, _mm128_add_ps(_mm128_mul_ps(_XMM4, v61), _XMM15));
  __asm
  {
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  r_planeA_8.m_planes[0].v = _mm_shuffle_ps(_XMM4, _mm_shuffle_ps(_XMM4, _XMM0, 250), 132);
  v67 = _mm128_sub_ps((__m128)0i64, _XMM4);
  _XMM2 = _mm128_mul_ps(v67, _mm128_add_ps(_mm128_mul_ps(_XMM4, v62), _XMM15));
  __asm
  {
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
  }
  r_planeA_8.m_planes[1].v = _mm_shuffle_ps(v67, _mm_shuffle_ps(v67, _XMM2, 250), 132);
  _XMM1 = _mm128_mul_ps(_XMM8, _XMM8);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
    vrsqrtps xmm0, xmm1
  }
  _mm128_mul_ps(v60, g_oneHalf.v);
  Float4SinCos(v11, &v134, &v131);
  _XMM1 = _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM8), v134.v);
  __asm { vblendps xmm2, xmm1, [rsp+290h+var_238+8], 190h+var_190.v+8 }
  v79 = _mm_shuffle_ps(_XMM2, _XMM2, 255);
  v80 = _mm_shuffle_ps(_XMM2, _XMM2, 201);
  v81 = _mm_shuffle_ps(_XMM2, _XMM2, 210);
  v82 = _mm128_sub_ps(_mm128_mul_ps(v80, _mm_shuffle_ps(v53, v53, 210)), _mm128_mul_ps(v81, _mm_shuffle_ps(v53, v53, 201)));
  v83 = _mm128_add_ps(v82, v82);
  v84 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v79, v83), v53), _mm128_sub_ps(_mm128_mul_ps(v80, _mm_shuffle_ps(v83, v83, 210)), _mm128_mul_ps(v81, _mm_shuffle_ps(v83, v83, 201))));
  _XMM0 = _mm128_mul_ps(_XMM15, v84);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  r_planeA_8.m_planes[2].v = _mm_shuffle_ps(v84, _mm_shuffle_ps(v84, _XMM0, 250), 132);
  _XMM2 = _mm128_mul_ps(v59, v59);
  __asm
  {
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vrsqrtps xmm0, xmm2
  }
  _mm128_mul_ps(v60, g_oneHalf.v);
  Float4SinCos(v94, &v131, &v134);
  _XMM1 = _mm128_mul_ps(_mm128_mul_ps(_XMM0, v59), v131.v);
  __asm { vblendps xmm2, xmm1, xmmword ptr [rbp+190h+var_F0.v], 190h+var_190.v+8 }
  v134.v = _XMM2;
  v97 = _mm_shuffle_ps(_XMM2, _XMM2, 255);
  v98 = _mm_shuffle_ps(_XMM2, _XMM2, 201);
  v99 = _mm_shuffle_ps(_XMM2, _XMM2, 210);
  v100 = _mm128_sub_ps(_mm128_mul_ps(v98, _mm_shuffle_ps(_XMM11, _XMM11, 210)), _mm128_mul_ps(v99, _mm_shuffle_ps(_XMM11, _XMM11, 201)));
  v101 = _mm128_add_ps(v100, v100);
  v102 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v97, v101), _XMM11), _mm128_sub_ps(_mm128_mul_ps(v98, _mm_shuffle_ps(v101, v101, 210)), _mm128_mul_ps(v99, _mm_shuffle_ps(v101, v101, 201))));
  _XMM2 = _mm128_mul_ps(_XMM15, v102);
  __asm
  {
    vinsertps xmm3, xmm2, xmm2, 8
    vhaddps xmm4, xmm3, xmm3
    vhaddps xmm2, xmm4, xmm4
  }
  r_planeA_8.m_planes[3].v = _mm_shuffle_ps(v102, _mm_shuffle_ps(v102, _XMM2, 250), 132);
  r_planeA_8.m_planes[4].v = _XMM8;
  Float4QuatRotationAxis(v108, v107, &v134);
  Float4QuatTransform(v110, v109, &r_planeA_8.m_planes[4]);
  _XMM2 = _mm128_mul_ps(_XMM15, r_planeA_8.m_planes[4].v);
  __asm
  {
    vinsertps xmm3, xmm2, xmm2, 8
    vhaddps xmm4, xmm3, xmm3
    vhaddps xmm2, xmm4, xmm4
  }
  r_planeA_8.m_planes[4].v = _mm_shuffle_ps(r_planeA_8.m_planes[4].v, _mm_shuffle_ps(r_planeA_8.m_planes[4].v, _XMM2, 250), 132);
  r_planeA_8.m_planes[5].v = v59;
  Float4QuatRotationAxis(v116, v115, &v134);
  Float4QuatTransform(v118, v117, &r_planeA_8.m_planes[5]);
  _XMM0 = _mm128_mul_ps(_XMM15, r_planeA_8.m_planes[5].v);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  r_planeA_8.m_planes[5].v = _mm_shuffle_ps(r_planeA_8.m_planes[5].v, _mm_shuffle_ps(r_planeA_8.m_planes[5].v, _XMM0, 250), 132);
  r_planeA_8.m_nearOrigin.v = _mm128_add_ps(_XMM15, _mm128_mul_ps(v61, r_planeA_8.m_forward.v));
  r_planeA_8.m_farOrigin.v = _mm128_add_ps(_XMM15, _mm128_mul_ps(v62, r_planeA_8.m_forward.v));
  v123 = (__m128)LODWORD(nearDist);
  v123.m128_f32[0] = nearDist - farDist;
  r_planeA_8.m_nearToFarDist.v = _mm_shuffle_ps(v123, v123, 0);
  v124 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[2], r_planeA_8.m_corners);
  v125 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[1]) && v124;
  v126 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[2]) && v125;
  v127 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[3]) && v126;
  v128 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[4]) && v127;
  v129 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[5]) && v128;
  v130 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[6]) && v129;
  if ( (IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[7]) & v130) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 637, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tInvalid frustum from arguments.", "success") )
    __debugbreak();
  EdgeOctreeQueryFrustum::Initialize(this, &r_planeA_8);
  Sys_ProfEndNamedEvent();
}

/*
==============
EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum
==============
*/

void __fastcall EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(EdgeOctreeQueryFrustum *this, const vec3_t *nearCenterPoint, double nearHalfWidth, double nearHalfHeight, const vec3_t *farCenterPoint, float farHalfWidth, float farHalfHeight, const vec3_t *up)
{
  float v10; 
  __m128 v12; 
  float v15; 
  __m128 v17; 
  __m128 v20; 
  float v21; 
  __m128 v23; 
  __m128 v26; 
  float4 v30; 
  float4 v31; 
  __m128 v36; 
  __m128 v37; 
  __m128 v42; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v55; 
  __m128 v56; 
  __m128 v61; 
  __m128 v62; 
  __m128 v67; 
  __m128 v72; 
  __m128 v73; 
  __m128 v74; 
  __m128 v75; 
  __m128 v80; 
  __m128 v81; 
  __m128 v86; 
  __m128 v87; 
  __m128 v92; 
  __m128 v97; 
  __m128 v98; 
  __m128 v103; 
  __m128 v104; 
  __m128 v109; 
  __m128 v110; 
  __m128 v115; 
  __m128 v120; 
  __m128 v121; 
  __m128 v126; 
  __m128 v127; 
  __m128 v132; 
  __m128 v133; 
  __m128 v138; 
  bool v143; 
  bool v144; 
  bool v145; 
  bool v146; 
  bool v147; 
  bool v148; 
  unsigned __int8 v149; 
  __m128 v150; 
  EdgeFrustumQueryShape r_planeA_8; 
  __m128 v152; 
  __int64 v153; 
  __m128 v154; 
  __m128 v; 

  v153 = -2i64;
  this->m_customClip.m_userClipPlaneTestAxis = 0i64;
  this->m_customClip.m_clipPlaneTestFunc = NULL;
  this->m_customClip.m_numUserClipPlanes = 0i64;
  this->m_customClip.m_numUserClipPlanesTrue = 0i64;
  this->m_customClip.m_numUserClipPlanesFalse = 0i64;
  this->m_userAxis = 0i64;
  this->m_centerBias = 1.0;
  this->m_invCenterBias = 1.0;
  this->m_invAxisBias = 1.0;
  Sys_ProfBeginNamedEvent(0xFF008008, "EdgeOctreeQueryFrustum Full Constructor");
  if ( *(float *)&nearHalfWidth <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 652, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( nearHalfWidth )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "nearHalfWidth", DOUBLE_9_999999974752427eN7, *(float *)&nearHalfWidth) )
    __debugbreak();
  if ( *(float *)&nearHalfHeight <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 653, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( nearHalfHeight )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "nearHalfHeight", DOUBLE_9_999999974752427eN7, *(float *)&nearHalfHeight) )
    __debugbreak();
  if ( farHalfWidth <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 654, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( farHalfWidth )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "farHalfWidth", DOUBLE_9_999999974752427eN7, farHalfWidth) )
    __debugbreak();
  if ( farHalfHeight <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 655, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( farHalfHeight )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "farHalfHeight", DOUBLE_9_999999974752427eN7, farHalfHeight) )
    __debugbreak();
  v10 = nearCenterPoint->v[0];
  v.m128_i32[3] = 0;
  v12 = v;
  v12.m128_f32[0] = v10;
  _XMM13 = v12;
  __asm
  {
    vinsertps xmm13, xmm13, dword ptr [rbx+4], 10h
    vinsertps xmm13, xmm13, dword ptr [rbx+8], 20h ; ' '
  }
  v = _XMM13.v;
  r_planeA_8.m_nearOrigin = (float4)_XMM13.v;
  v15 = farCenterPoint->v[0];
  v.m128_i32[3] = 0;
  v17 = v;
  v17.m128_f32[0] = v15;
  _XMM14 = v17;
  __asm
  {
    vinsertps xmm14, xmm14, dword ptr [rsi+4], 10h
    vinsertps xmm14, xmm14, dword ptr [rsi+8], 20h ; ' '
  }
  v = _XMM14.v;
  r_planeA_8.m_farOrigin = (float4)_XMM14.v;
  v20 = _mm_shuffle_ps(*(__m128 *)&nearHalfWidth, *(__m128 *)&nearHalfWidth, 0);
  v154 = _mm_shuffle_ps(*(__m128 *)&nearHalfHeight, *(__m128 *)&nearHalfHeight, 0);
  v150 = _mm_shuffle_ps((__m128)LODWORD(farHalfWidth), (__m128)LODWORD(farHalfWidth), 0);
  v152 = _mm_shuffle_ps((__m128)LODWORD(farHalfHeight), (__m128)LODWORD(farHalfHeight), 0);
  v21 = up->v[0];
  v.m128_i32[3] = 0;
  v23 = v;
  v23.m128_f32[0] = v21;
  _XMM12 = v23;
  __asm
  {
    vinsertps xmm12, xmm12, dword ptr [r14+4], 10h
    vinsertps xmm12, xmm12, dword ptr [r14+8], 20h ; ' '
  }
  v = _mm128_sub_ps((__m128)0i64, _XMM12);
  v26 = _mm128_sub_ps(_XMM14.v, _XMM13.v);
  _XMM0 = _mm128_mul_ps(v26, v26);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
  }
  v30.v = _mm_sqrt_ps(_XMM2);
  r_planeA_8.m_nearToFarDist = (float4)v30.v;
  if ( v30.v.m128_f32[0] <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 678, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( Float4ExtractX( shape.m_nearToFarDist ) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "Float4ExtractX( shape.m_nearToFarDist )", DOUBLE_9_999999974752427eN7, v30.v.m128_f32[0]) )
    __debugbreak();
  v31.v = _mm128_div_ps(v26, v30.v);
  r_planeA_8.m_forward = (float4)v31.v;
  _XMM0 = _mm128_mul_ps(_XMM12, v31.v);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  if ( *(float *)&_XMM0 > 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 686, ASSERT_TYPE_ASSERT, "( Float4ExtractX( dot4 ) ) <= ( 0.001f )", "%s <= %s\n\t%g, %g", "Float4ExtractX( dot4 )", "EQUAL_EPSILON", *(float *)&_XMM0, DOUBLE_0_001000000047497451) )
    __debugbreak();
  v36 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v31.v, v31.v, 201), _mm_shuffle_ps(_XMM12, _XMM12, 210)), _mm128_mul_ps(_mm_shuffle_ps(v31.v, v31.v, 210), _mm_shuffle_ps(_XMM12, _XMM12, 201)));
  v37 = _mm128_sub_ps((__m128)0i64, v36);
  _XMM0 = _mm128_mul_ps(_XMM13.v, v31.v);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  r_planeA_8.m_planes[0].v = _mm_shuffle_ps(v31.v, _mm_shuffle_ps(v31.v, _XMM0, 250), 132);
  v42 = _mm128_sub_ps((__m128)0i64, v31.v);
  _XMM0 = _mm128_mul_ps(_XMM14.v, v42);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  r_planeA_8.m_planes[1].v = _mm_shuffle_ps(v42, _mm_shuffle_ps(v42, _XMM0, 250), 132);
  v47 = _mm128_mul_ps(v20, v37);
  v48 = _mm128_add_ps(_XMM13.v, v47);
  v49 = _mm128_mul_ps(v154, v);
  v50 = _mm128_sub_ps(_mm128_add_ps(v48, v49), v48);
  _XMM0 = _mm128_mul_ps(v50, v50);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v55 = _mm128_div_ps(v50, _mm_sqrt_ps(_XMM0));
  v56 = _mm128_sub_ps(_mm128_add_ps(_XMM14.v, _mm128_mul_ps(v37, v150)), v48);
  _XMM0 = _mm128_mul_ps(v56, v56);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v61 = _mm128_div_ps(v56, _mm_sqrt_ps(_XMM0));
  v62 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v55, v55, 201), _mm_shuffle_ps(v61, v61, 210)), _mm128_mul_ps(_mm_shuffle_ps(v55, v55, 210), _mm_shuffle_ps(v61, v61, 201)));
  _XMM1 = _mm128_mul_ps(v62, v62);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  v67 = _mm128_div_ps(v62, _mm_sqrt_ps(_XMM1));
  _XMM1 = _mm128_mul_ps(v48, v67);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  r_planeA_8.m_planes[2].v = _mm_shuffle_ps(v67, _mm_shuffle_ps(v67, _XMM1, 250), 132);
  v72 = _mm128_mul_ps(v20, v36);
  v73 = _mm128_add_ps(v72, _XMM13.v);
  v74 = _mm128_mul_ps(v154, _XMM12);
  v75 = _mm128_sub_ps(_mm128_add_ps(v74, v73), v73);
  _XMM0 = _mm128_mul_ps(v75, v75);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v80 = _mm128_div_ps(v75, _mm_sqrt_ps(_XMM0));
  v81 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(v36, v150), _XMM14.v), v73);
  _XMM0 = _mm128_mul_ps(v81, v81);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v86 = _mm128_div_ps(v81, _mm_sqrt_ps(_XMM0));
  v87 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v80, v80, 201), _mm_shuffle_ps(v86, v86, 210)), _mm128_mul_ps(_mm_shuffle_ps(v80, v80, 210), _mm_shuffle_ps(v86, v86, 201)));
  _XMM1 = _mm128_mul_ps(v87, v87);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  v92 = _mm128_div_ps(v87, _mm_sqrt_ps(_XMM1));
  _XMM1 = _mm128_mul_ps(v73, v92);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  r_planeA_8.m_planes[3].v = _mm_shuffle_ps(v92, _mm_shuffle_ps(v92, _XMM1, 250), 132);
  v97 = _mm128_add_ps(_XMM13.v, v49);
  v98 = _mm128_sub_ps(_mm128_add_ps(v97, v47), v97);
  _XMM0 = _mm128_mul_ps(v98, v98);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v103 = _mm128_div_ps(v98, _mm_sqrt_ps(_XMM0));
  v104 = _mm128_sub_ps(_mm128_add_ps(_XMM14.v, _mm128_mul_ps(v152, v)), v97);
  _XMM0 = _mm128_mul_ps(v104, v104);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v109 = _mm128_div_ps(v104, _mm_sqrt_ps(_XMM0));
  v110 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v109, v109, 201), _mm_shuffle_ps(v103, v103, 210)), _mm128_mul_ps(_mm_shuffle_ps(v109, v109, 210), _mm_shuffle_ps(v103, v103, 201)));
  _XMM1 = _mm128_mul_ps(v110, v110);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  v115 = _mm128_div_ps(v110, _mm_sqrt_ps(_XMM1));
  _XMM1 = _mm128_mul_ps(v97, v115);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  r_planeA_8.m_planes[4].v = _mm_shuffle_ps(v115, _mm_shuffle_ps(v115, _XMM1, 250), 132);
  v120 = _mm128_add_ps(_XMM13.v, v74);
  v121 = _mm128_sub_ps(_mm128_add_ps(v120, v72), v120);
  _XMM0 = _mm128_mul_ps(v121, v121);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v126 = _mm128_div_ps(v121, _mm_sqrt_ps(_XMM0));
  v127 = _mm128_sub_ps(_mm128_add_ps(_XMM14.v, _mm128_mul_ps(v152, _XMM12)), v120);
  _XMM0 = _mm128_mul_ps(v127, v127);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v132 = _mm128_div_ps(v127, _mm_sqrt_ps(_XMM0));
  v133 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v132, v132, 201), _mm_shuffle_ps(v126, v126, 210)), _mm128_mul_ps(_mm_shuffle_ps(v132, v132, 210), _mm_shuffle_ps(v126, v126, 201)));
  _XMM1 = _mm128_mul_ps(v133, v133);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  v138 = _mm128_div_ps(v133, _mm_sqrt_ps(_XMM1));
  _XMM1 = _mm128_mul_ps(v120, v138);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  r_planeA_8.m_planes[5].v = _mm_shuffle_ps(v138, _mm_shuffle_ps(v138, _XMM1, 250), 132);
  v143 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[2], r_planeA_8.m_corners);
  v144 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[1]) && v143;
  v145 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[2]) && v144;
  v146 = IntersectThreePlanes(r_planeA_8.m_planes, &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[3]) && v145;
  v147 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[4]) && v146;
  v148 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[5], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[5]) && v147;
  v149 = IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[2], &r_planeA_8.m_corners[6]) && v148;
  if ( (IntersectThreePlanes(&r_planeA_8.m_planes[1], &r_planeA_8.m_planes[4], &r_planeA_8.m_planes[3], &r_planeA_8.m_corners[7]) & v149) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 774, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tInvalid frustum from arguments.", "success") )
    __debugbreak();
  EdgeOctreeQueryFrustum::Initialize(this, &r_planeA_8);
  Sys_ProfEndNamedEvent();
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
  this->m_customClip.m_userClipPlaneTestAxis = 0i64;
  this->m_userAxis = 0i64;
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
  __int128 v8; 
  __int128 v11; 

  this->m_customClip.m_clipPlaneTestFunc = NULL;
  this->m_customClip.m_userClipPlaneTestAxis = 0i64;
  this->m_customClip.m_numUserClipPlanes = 0i64;
  this->m_customClip.m_numUserClipPlanesTrue = 0i64;
  this->m_customClip.m_numUserClipPlanesFalse = 0i64;
  if ( *(float *)&radius <= 0.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 347, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( radius )", "%s < %s\n\t%g, %g", "0.0f", "radius", *(double *)&_XMM1, *(float *)&radius) )
      __debugbreak();
  }
  HIDWORD(v11) = 0;
  v8 = v11;
  *(float *)&v8 = midpoint->v[0];
  _XMM3 = v8;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdi+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+8], 20h ; ' '
  }
  this->m_radius.v = _mm_shuffle_ps(*(__m128 *)&radius, *(__m128 *)&radius, 0);
  this->m_radiusSq = *(float *)&radius * *(float *)&radius;
  this->m_midpoint = (float4)_XMM3.v;
}

/*
==============
EdgeOctreeQueryFrustum::CalcVertexBlendFunc
==============
*/
void (*EdgeOctreeQueryFrustum::CalcVertexBlendFunc(const float4 *r_plane, __int64 a2))(const float4 *__struct_ptr, const float4 *__struct_ptr, float4 *)
{
  float v2; 
  void (*v4)(const float4 *__struct_ptr, const float4 *__struct_ptr, float4 *); 
  unsigned __int64 i; 
  __m128 v11; 

  v2 = *(float *)&_xmm_ff7fffffff7fffffff7fffffff7fffff;
  v4 = Float4Blendxyzw;
  for ( i = 0i64; i < 8; ++i )
  {
    ((void (__fastcall *)(const float4 *, __int64, __m128 *))blendFunc[i])(r_plane, a2, &v11);
    _XMM1 = _mm128_mul_ps(r_plane->v, v11);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
    }
    if ( *(float *)&_XMM1 > v2 )
    {
      v4 = (void (*)(const float4 *__struct_ptr, const float4 *__struct_ptr, float4 *))blendFunc[i];
      v2 = *(float *)&_XMM1;
    }
  }
  return v4;
}

/*
==============
EdgeFrustumQueryShape::Calculate
==============
*/
void EdgeFrustumQueryShape::Calculate(EdgeFrustumQueryShape *this, const EdgeFrustumQueryDefinition *definition)
{
  double nearHalfWidth; 
  double nearHalfHeight; 
  double farHalfWidth; 
  double farHalfHeight; 
  float nearDist; 
  float farDist; 
  __m128 v18; 
  __m128 farDist_low; 
  __m128 v20; 
  __m128 v21; 
  __m128 v26; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v40; 
  __m128 v41; 
  __m128 v46; 
  __m128 v47; 
  __m128 v52; 
  __m128 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v65; 
  __m128 v66; 
  __m128 v71; 
  __m128 v72; 
  __m128 v77; 
  __m128 v82; 
  __m128 v83; 
  __m128 v88; 
  __m128 v89; 
  __m128 v94; 
  __m128 v95; 
  __m128 v100; 
  __m128 v105; 
  __m128 v106; 
  __m128 v111; 
  __m128 v112; 
  __m128 v117; 
  __m128 v118; 
  __m128 v123; 
  bool v128; 
  bool v129; 
  bool v130; 
  bool v131; 
  bool v132; 
  bool v133; 
  unsigned __int8 v134; 
  double v135; 
  __m128 v136; 

  _RBX = definition;
  nearHalfWidth = definition->nearHalfWidth;
  if ( nearHalfWidth <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 357, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( definition.nearHalfWidth )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "definition.nearHalfWidth", DOUBLE_9_999999974752427eN7, nearHalfWidth) )
    __debugbreak();
  nearHalfHeight = _RBX->nearHalfHeight;
  if ( nearHalfHeight <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 358, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( definition.nearHalfHeight )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "definition.nearHalfHeight", DOUBLE_9_999999974752427eN7, nearHalfHeight) )
    __debugbreak();
  farHalfWidth = _RBX->farHalfWidth;
  if ( farHalfWidth <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 359, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( definition.farHalfWidth )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "definition.farHalfWidth", DOUBLE_9_999999974752427eN7, farHalfWidth) )
    __debugbreak();
  farHalfHeight = _RBX->farHalfHeight;
  if ( farHalfHeight <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 360, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( definition.farHalfHeight )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "definition.farHalfHeight", DOUBLE_9_999999974752427eN7, farHalfHeight) )
    __debugbreak();
  _XMM1 = LODWORD(_RBX->nearDist);
  if ( *(float *)&_XMM1 < 0.0 )
  {
    v135 = *(float *)&_XMM1;
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 361, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( definition.nearDist )", "%s <= %s\n\t%g, %g", "0.0f", "definition.nearDist", *(double *)&_XMM1, v135) )
      __debugbreak();
  }
  nearDist = _RBX->nearDist;
  farDist = _RBX->farDist;
  if ( nearDist >= farDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 362, ASSERT_TYPE_ASSERT, "( definition.nearDist ) < ( definition.farDist )", "%s < %s\n\t%g, %g", "definition.nearDist", "definition.farDist", nearDist, farDist) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "EdgeOctreeQueryFrustum::Shape::Calculate");
  this->m_forward = (float4)_xmm;
  __asm { vbroadcastss xmm0, dword ptr [rbx+10h] }
  this->m_nearOrigin.v = _mm128_mul_ps((__m128)_xmm, _XMM0);
  __asm { vbroadcastss xmm0, dword ptr [rbx+14h] }
  this->m_farOrigin.v = _mm128_mul_ps((__m128)_xmm, _XMM0);
  __asm
  {
    vbroadcastss xmm8, dword ptr [rbx]
    vbroadcastss xmm11, dword ptr [rbx+4]
    vbroadcastss xmm13, dword ptr [rbx+8]
    vbroadcastss xmm0, dword ptr [rbx+0Ch]
  }
  v136 = _XMM0;
  v18 = _mm128_sub_ps((__m128)0i64, (__m128)_xmm);
  farDist_low = (__m128)LODWORD(_RBX->farDist);
  farDist_low.m128_f32[0] = _RBX->farDist - _RBX->nearDist;
  this->m_nearToFarDist.v = _mm_shuffle_ps(farDist_low, farDist_low, 0);
  v20 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 201), _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 210)), _mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 210), _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 201)));
  v21 = _mm128_sub_ps((__m128)0i64, v20);
  this->m_planes[0] = (float4)_xmm;
  _XMM1 = _mm128_mul_ps((__m128)_xmm, this->m_nearOrigin.v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  this->m_planes[0].v = _mm_shuffle_ps((__m128)_xmm, _mm_shuffle_ps((__m128)_xmm, _XMM1, 250), 132);
  v26 = _mm128_sub_ps((__m128)0i64, this->m_forward.v);
  this->m_planes[1].v = v26;
  _XMM1 = _mm128_mul_ps(v26, this->m_farOrigin.v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm3, xmm0, xmm0
  }
  this->m_planes[1].v = _mm_shuffle_ps(this->m_planes[1].v, _mm_shuffle_ps(this->m_planes[1].v, _XMM3, 250), 132);
  v31 = _mm128_mul_ps(_XMM8, v21);
  v32 = _mm128_add_ps(v31, this->m_nearOrigin.v);
  v33 = _mm128_mul_ps(_XMM11, v18);
  v34 = _mm128_add_ps(_mm128_mul_ps(_XMM13, v21), this->m_farOrigin.v);
  v35 = _mm128_sub_ps(_mm128_add_ps(v32, v33), v32);
  _XMM0 = _mm128_mul_ps(v35, v35);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v40 = _mm128_div_ps(v35, _mm_sqrt_ps(_XMM0));
  v41 = _mm128_sub_ps(v34, v32);
  _XMM0 = _mm128_mul_ps(v41, v41);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v46 = _mm128_div_ps(v41, _mm_sqrt_ps(_XMM0));
  v47 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v40, v40, 201), _mm_shuffle_ps(v46, v46, 210)), _mm128_mul_ps(_mm_shuffle_ps(v40, v40, 210), _mm_shuffle_ps(v46, v46, 201)));
  _XMM0 = _mm128_mul_ps(v47, v47);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v52 = _mm128_div_ps(v47, _mm_sqrt_ps(_XMM0));
  _XMM0 = _mm128_mul_ps(v32, v52);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  this->m_planes[2].v = _mm_shuffle_ps(v52, _mm_shuffle_ps(v52, _XMM0, 250), 132);
  v57 = _mm128_mul_ps(_XMM8, v20);
  v58 = _mm128_add_ps(v57, this->m_nearOrigin.v);
  v59 = _mm128_mul_ps(_XMM11, (__m128)_xmm);
  v60 = _mm128_sub_ps(_mm128_add_ps(v59, v58), v58);
  _XMM0 = _mm128_mul_ps(v60, v60);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v65 = _mm128_div_ps(v60, _mm_sqrt_ps(_XMM0));
  v66 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(_XMM13, v20), this->m_farOrigin.v), v58);
  _XMM0 = _mm128_mul_ps(v66, v66);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v71 = _mm128_div_ps(v66, _mm_sqrt_ps(_XMM0));
  v72 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v65, v65, 201), _mm_shuffle_ps(v71, v71, 210)), _mm128_mul_ps(_mm_shuffle_ps(v65, v65, 210), _mm_shuffle_ps(v71, v71, 201)));
  _XMM0 = _mm128_mul_ps(v72, v72);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v77 = _mm128_div_ps(v72, _mm_sqrt_ps(_XMM0));
  _XMM0 = _mm128_mul_ps(v58, v77);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  this->m_planes[3].v = _mm_shuffle_ps(v77, _mm_shuffle_ps(v77, _XMM0, 250), 132);
  v82 = _mm128_add_ps(v33, this->m_nearOrigin.v);
  v83 = _mm128_sub_ps(_mm128_add_ps(v82, v31), v82);
  _XMM0 = _mm128_mul_ps(v83, v83);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v88 = _mm128_div_ps(v83, _mm_sqrt_ps(_XMM0));
  v89 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(v18, v136), this->m_farOrigin.v), v82);
  _XMM0 = _mm128_mul_ps(v89, v89);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v94 = _mm128_div_ps(v89, _mm_sqrt_ps(_XMM0));
  v95 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v94, v94, 201), _mm_shuffle_ps(v88, v88, 210)), _mm128_mul_ps(_mm_shuffle_ps(v94, v94, 210), _mm_shuffle_ps(v88, v88, 201)));
  _XMM0 = _mm128_mul_ps(v95, v95);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v100 = _mm128_div_ps(v95, _mm_sqrt_ps(_XMM0));
  _XMM0 = _mm128_mul_ps(v82, v100);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  this->m_planes[4].v = _mm_shuffle_ps(v100, _mm_shuffle_ps(v100, _XMM0, 250), 132);
  v105 = _mm128_add_ps(v59, this->m_nearOrigin.v);
  v106 = _mm128_sub_ps(_mm128_add_ps(v105, v57), v105);
  _XMM0 = _mm128_mul_ps(v106, v106);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v111 = _mm128_div_ps(v106, _mm_sqrt_ps(_XMM0));
  v112 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps((__m128)_xmm, v136), this->m_farOrigin.v), v105);
  _XMM0 = _mm128_mul_ps(v112, v112);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v117 = _mm128_div_ps(v112, _mm_sqrt_ps(_XMM0));
  v118 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v117, v117, 201), _mm_shuffle_ps(v111, v111, 210)), _mm128_mul_ps(_mm_shuffle_ps(v117, v117, 210), _mm_shuffle_ps(v111, v111, 201)));
  _XMM0 = _mm128_mul_ps(v118, v118);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v123 = _mm128_div_ps(v118, _mm_sqrt_ps(_XMM0));
  _XMM0 = _mm128_mul_ps(v105, v123);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  this->m_planes[5].v = _mm_shuffle_ps(v123, _mm_shuffle_ps(v123, _XMM0, 250), 132);
  v128 = IntersectThreePlanes(this->m_planes, &this->m_planes[5], &this->m_planes[2], this->m_corners);
  v129 = IntersectThreePlanes(this->m_planes, &this->m_planes[5], &this->m_planes[3], &this->m_corners[1]) && v128;
  v130 = IntersectThreePlanes(this->m_planes, &this->m_planes[4], &this->m_planes[2], &this->m_corners[2]) && v129;
  v131 = IntersectThreePlanes(this->m_planes, &this->m_planes[4], &this->m_planes[3], &this->m_corners[3]) && v130;
  v132 = IntersectThreePlanes(&this->m_planes[1], &this->m_planes[5], &this->m_planes[2], &this->m_corners[4]) && v131;
  v133 = IntersectThreePlanes(&this->m_planes[1], &this->m_planes[5], &this->m_planes[3], &this->m_corners[5]) && v132;
  v134 = IntersectThreePlanes(&this->m_planes[1], &this->m_planes[4], &this->m_planes[2], &this->m_corners[6]) && v133;
  if ( (IntersectThreePlanes(&this->m_planes[1], &this->m_planes[4], &this->m_planes[3], &this->m_corners[7]) & v134) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 476, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tInvalid frustum from arguments.", "success") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
}

/*
==============
Edge_CalculateClosestPoint
==============
*/
void Edge_CalculateClosestPoint(const BgHandler *handler, const vec3_t *point, EdgeId edgeId, float *outEdgeFraction, vec3_t *outEdgePoint)
{
  float v9; 
  __int128 v11; 
  __m128 v; 
  __m128 v15; 
  unsigned int EdgeIndex; 
  const float4 (*v17)[2]; 
  __m128 v18; 
  __int64 v20; 
  unsigned int EntityIndex; 
  __int64 v22; 
  int v23; 
  EdgeId v24; 
  float4 edgeId_8; 
  float4 outLineSegment_8[2]; 
  float4 pointa; 
  vector4 outTransform; 
  EdgeId v29[2]; 

  _RSI = outEdgePoint;
  v24 = edgeId;
  if ( EdgeId::GetEntityIndex(&v24) >= 0x7A920 )
  {
    v23 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&v24);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1094, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v23) )
      __debugbreak();
  }
  v9 = point->v[0];
  v29[1].m_entityIndex = 0;
  v11 = *(_OWORD *)&v29[0].m_edgeIndex;
  *(float *)&v11 = v9;
  _XMM3 = v11;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
  }
  v29[1] = *(EdgeId *)&_XMM3.m128_u16[4];
  v29[0] = v24;
  pointa.v = _XMM3;
  if ( EdgeId::GetEntityIndex(v29) >= 0x7A920 )
  {
    LODWORD(v22) = 502048;
    LODWORD(v20) = EdgeId::GetEntityIndex(v29);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1108, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  *(EdgeId *)edgeId_8.v.m128_f32 = v29[0];
  if ( EdgeId::GetIsDynamic((EdgeId *)&edgeId_8) )
  {
    Edge_GetEntityTransform(handler, (const EdgeId *)&edgeId_8, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, (const EdgeId *)&edgeId_8, (float4 (*)[2])outLineSegment_8, NULL);
    v = outLineSegment_8[1].v;
    v15 = outLineSegment_8[0].v;
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex((EdgeId *)&edgeId_8);
    v17 = MapEdgeList_LookupSegment(EdgeIndex);
    v15 = *(__m128 *)v17;
    v = (*v17)[1].v;
    outLineSegment_8[0] = *(float4 *)v17;
    outLineSegment_8[1] = (float4)v;
  }
  Float4PointLineSegmentDistSq(outLineSegment_8, &outLineSegment_8[1], &pointa, &edgeId_8);
  v18 = edgeId_8.v;
  *outEdgeFraction = edgeId_8.v.m128_f32[0];
  _XMM2 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v, v15), v18), v15);
  outEdgePoint->v[0] = _XMM2.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rsi+4], xmm2, 1
    vextractps dword ptr [rsi+8], xmm2, 2
  }
}

/*
==============
Edge_CalculateClosestPoint
==============
*/
void Edge_CalculateClosestPoint(const BgHandler *handler, const float4 *point, EdgeId edgeId, float *outEdgeFraction, float4 *outEdgePoint)
{
  __m128 v; 
  __m128 v9; 
  unsigned int EdgeIndex; 
  const float4 (*v11)[2]; 
  __m128 v12; 
  unsigned int EntityIndex; 
  int v14; 
  EdgeId v15; 
  EdgeId edgeIda[2]; 
  float4 outLineSegment[2]; 
  vector4 outTransform; 

  v15 = edgeId;
  if ( EdgeId::GetEntityIndex(&v15) >= 0x7A920 )
  {
    v14 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&v15);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1108, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v14) )
      __debugbreak();
  }
  edgeIda[0] = v15;
  if ( EdgeId::GetIsDynamic(edgeIda) )
  {
    Edge_GetEntityTransform(handler, edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, edgeIda, (float4 (*)[2])outLineSegment, NULL);
    v = outLineSegment[1].v;
    v9 = outLineSegment[0].v;
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(edgeIda);
    v11 = MapEdgeList_LookupSegment(EdgeIndex);
    v9 = *(__m128 *)v11;
    v = (*v11)[1].v;
    outLineSegment[0] = *(float4 *)v11;
    outLineSegment[1] = (float4)v;
  }
  Float4PointLineSegmentDistSq(outLineSegment, &outLineSegment[1], point, (float4 *)edgeIda);
  v12 = *(__m128 *)&edgeIda[0].m_edgeIndex;
  *outEdgeFraction = *(float *)&edgeIda[0].m_edgeIndex;
  outEdgePoint->v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v, v9), v12), v9);
}

/*
==============
Edge_CalculateLengthSq
==============
*/
float Edge_CalculateLengthSq(EdgeId edgeId)
{
  unsigned int EdgeIndex; 
  __m128 *v2; 
  __m128 v3; 
  EdgeId v8; 

  v8 = edgeId;
  EdgeIndex = EdgeId::GetEdgeIndex(&v8);
  v2 = (__m128 *)MapEdgeList_LookupSegment(EdgeIndex);
  v3 = _mm128_sub_ps(*v2, v2[1]);
  _XMM2 = _mm128_mul_ps(v3, v3);
  __asm
  {
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
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  unsigned int EntityIndex; 
  int v18; 
  EdgeId edgeIda; 
  float4 outNormal1a; 
  float4 r_outNormal0; 

  edgeIda = edgeId;
  _RBX = outNormal1;
  _RDI = outNormal0;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v18 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1319, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v18) )
      __debugbreak();
  }
  Edge_CalculateNormals(handler, edgeIda, &r_outNormal0, &outNormal1a, NULL);
  _XMM1 = r_outNormal0.v;
  _XMM2 = outNormal1a.v;
  _RDI->v[0] = r_outNormal0.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rdi+4], xmm1, 1
    vextractps dword ptr [rdi+8], xmm1, 2
  }
  _RBX->v[0] = _XMM2.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+4], xmm2, 1
    vextractps dword ptr [rbx+8], xmm2, 2
  }
  v9 = _RDI->v[1];
  v10 = _RDI->v[0];
  v11 = _RDI->v[2];
  v12 = (float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1328, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal0 ) )", "(%g, %g, %g) len %g", v10, v9, v11, fsqrt(v12)) )
    __debugbreak();
  v13 = _RBX->v[1];
  v14 = _RBX->v[0];
  v15 = _RBX->v[2];
  v16 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1329, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal1 ) )", "(%g, %g, %g) len %g", v14, v13, v15, fsqrt(v16)) )
    __debugbreak();
}

/*
==============
Edge_CalculateNormals
==============
*/
void Edge_CalculateNormals(const BgHandler *handler, EdgeId edgeId, float4 *r_outNormal0, float4 *outNormal1, float4 *outLineDir)
{
  unsigned int EdgeIndex; 
  const FlaggedEdgeMetadata *v9; 
  const float4 *v10; 
  float4 v11; 
  unsigned int v12; 
  const DiskStaticLineSegment *v13; 
  __m128 v14; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  unsigned int EntityIndex; 
  EdgeId edgeIda; 
  float4 outLineSegment[2]; 
  float4 v30; 
  vector4 outTransform; 

  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1337, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, 502048) )
      __debugbreak();
  }
  EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
  v9 = MapEdgeList_LookupMetadata(EdgeIndex);
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegment, r_outNormal0);
    v11.v = _mm128_sub_ps(outLineSegment[1].v, outLineSegment[0].v);
  }
  else
  {
    v12 = EdgeId::GetEdgeIndex(&edgeIda);
    v13 = (const DiskStaticLineSegment *)MapEdgeList_LookupSegment(v12);
    v11.v = _mm128_sub_ps(v13->endPoints[1].v, v13->endPoints[0].v);
    EdgeAdjacentFaceNormalUnpack(v13, v9->packedAdjacentNormal, r_outNormal0);
  }
  if ( outLineDir )
    *outLineDir = (float4)v11.v;
  if ( v9->packedOpenAngle )
  {
    v10 = (const float4 *)(((v9->packedOpenAngle & 0x8000) << 16) | (((((v9->packedOpenAngle & 0x3FFF) << 14) - (~(v9->packedOpenAngle << 14) & 0x10000000)) ^ 0x80000001) >> 1));
    edgeIda.m_edgeIndex = (unsigned int)v10;
    v14 = (__m128)(unsigned int)v10;
  }
  else
  {
    v14 = 0i64;
  }
  _XMM0 = _mm128_mul_ps(v11.v, v11.v);
  __asm { vinsertps xmm1, xmm0, xmm0, 8 }
  _mm128_mul_ps(_mm_shuffle_ps(v14, v14, 0), g_oneHalf.v);
  __asm { vhaddps xmm6, xmm1, xmm1 }
  Float4SinCos(v10, &v30, outLineSegment);
  __asm
  {
    vhaddps xmm0, xmm6, xmm6
    vrsqrtps xmm1, xmm0
  }
  _XMM3 = _mm128_mul_ps(_mm128_mul_ps(_XMM1, v11.v), v30.v);
  __asm { vblendps xmm0, xmm3, xmmword ptr [rsp+128h+outLineSegment.v], 8 }
  v22 = _mm_shuffle_ps(_XMM0, _XMM0, 210);
  v23 = _mm_shuffle_ps(_XMM0, _XMM0, 201);
  v24 = _mm_shuffle_ps(_XMM0, _XMM0, 255);
  v25 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(r_outNormal0->v, r_outNormal0->v, 210), v23), _mm128_mul_ps(_mm_shuffle_ps(r_outNormal0->v, r_outNormal0->v, 201), v22));
  v26 = _mm128_add_ps(v25, v25);
  outNormal1->v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v26, v26, 210), v23), _mm128_mul_ps(_mm_shuffle_ps(v26, v26, 201), v22)), _mm128_add_ps(_mm128_mul_ps(v24, v26), r_outNormal0->v));
}

/*
==============
Edge_CalculateOpenAngleRad
==============
*/
float Edge_CalculateOpenAngleRad(EdgeId edgeId)
{
  unsigned int EdgeIndex; 
  const FlaggedEdgeMetadata *v2; 
  EdgeId v4; 
  float v5; 

  v4 = edgeId;
  EdgeIndex = EdgeId::GetEdgeIndex(&v4);
  v2 = MapEdgeList_LookupMetadata(EdgeIndex);
  if ( !v2->packedOpenAngle )
    return 0.0;
  LODWORD(v5) = ((v2->packedOpenAngle & 0x8000) << 16) | (((((v2->packedOpenAngle & 0x3FFF) << 14) - (~(v2->packedOpenAngle << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  return v5;
}

/*
==============
Edge_CalculatePoint
==============
*/

void __fastcall Edge_CalculatePoint(const BgHandler *handler, EdgeId edgeId, double fraction, vec3_t *outEdgePoint)
{
  __m128 v8; 
  unsigned int EdgeIndex; 
  __m128 *v11; 
  __int64 v12; 
  unsigned int EntityIndex; 
  __int64 v14; 
  int v15; 
  EdgeId edgeIda; 
  EdgeId v17; 
  float4 outLineSegment[2]; 
  vector4 outTransform; 

  v17 = edgeId;
  _RBX = outEdgePoint;
  if ( EdgeId::GetEntityIndex(&v17) >= 0x7A920 )
  {
    v15 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&v17);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1052, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v15) )
      __debugbreak();
  }
  __asm { vxorpd  xmm10, xmm10, xmm10 }
  if ( (*(float *)&fraction < 0.0 || *(float *)&fraction > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1052, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&fraction, *(double *)&_XMM10, DOUBLE_1_0) )
    __debugbreak();
  edgeIda = v17;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    LODWORD(v14) = 502048;
    LODWORD(v12) = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1076, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( (*(float *)&fraction < 0.0 || *(float *)&fraction > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1076, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&fraction, *(double *)&_XMM10, DOUBLE_1_0) )
    __debugbreak();
  v8 = _mm_shuffle_ps(*(__m128 *)&fraction, *(__m128 *)&fraction, 0);
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegment, NULL);
    _XMM4 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(outLineSegment[1].v, outLineSegment[0].v), v8), outLineSegment[0].v);
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    v11 = (__m128 *)MapEdgeList_LookupSegment(EdgeIndex);
    _XMM4 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v11[1], *v11), v8), *v11);
  }
  _RBX->v[0] = _XMM4.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+4], xmm4, 1
    vextractps dword ptr [rbx+8], xmm4, 2
  }
}

/*
==============
Edge_CalculatePoint
==============
*/

void __fastcall Edge_CalculatePoint(const BgHandler *handler, EdgeId edgeId, double fraction, float4 *r_outEdgePoint)
{
  __m128 v8; 
  unsigned int EdgeIndex; 
  __m128 *v10; 
  unsigned int EntityIndex; 
  int v12; 
  EdgeId edgeIda; 
  float4 outLineSegment[2]; 
  vector4 outTransform; 

  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v12 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1076, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v12) )
      __debugbreak();
  }
  if ( *(float *)&fraction < 0.0 || *(float *)&fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1076, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  v8 = _mm_shuffle_ps(*(__m128 *)&fraction, *(__m128 *)&fraction, 0);
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegment, NULL);
    r_outEdgePoint->v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(outLineSegment[1].v, outLineSegment[0].v), v8), outLineSegment[0].v);
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    v10 = (__m128 *)MapEdgeList_LookupSegment(EdgeIndex);
    r_outEdgePoint->v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v10[1], *v10), v8), *v10);
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
void Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, unsigned __int64 normalFaceIndex, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow, vec3_t *outOtherNormal)
{
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
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float4 *v43; 
  unsigned int EntityIndex; 
  int v45; 
  float4 *v46; 
  EdgeId edgeIda; 
  float4 v48; 
  float4 v49; 
  float4 v50; 
  float4 v51; 

  _RBX = outNormal;
  _RSI = outParallel;
  _RDI = outBelow;
  _R14 = outOtherNormal;
  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v45 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1250, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v45) )
      __debugbreak();
  }
  if ( fraction < 0.0 || fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1250, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( normalFaceIndex > 1 )
  {
    LODWORD(v46) = 1;
    LODWORD(v43) = normalFaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1251, ASSERT_TYPE_ASSERT, "( 0 ) <= ( normalFaceIndex ) && ( normalFaceIndex ) <= ( 1 )", "normalFaceIndex not in [0, 1]\n\t%i not in [%i, %i]", v43, 0i64, v46) )
      __debugbreak();
  }
  Edge_CalculateVectors(handler, edgeIda, fraction, normalFaceIndex, &v51, &v48, &v49, &v50);
  _XMM1 = v51.v;
  _XMM2 = v48.v;
  outNormal->v[0] = v51.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+4], xmm1, 1
    vextractps dword ptr [rbx+8], xmm1, 2
  }
  outParallel->v[0] = _XMM2.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rsi+4], xmm2, 1
    vextractps dword ptr [rsi+8], xmm2, 2
  }
  _XMM2 = v49.v;
  outBelow->v[0] = v49.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rdi+4], xmm2, 1
    vextractps dword ptr [rdi+8], xmm2, 2
  }
  _XMM2 = v50.v;
  outOtherNormal->v[0] = v50.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [r14+4], xmm2, 1
    vextractps dword ptr [r14+8], xmm2, 2
  }
  v20 = outNormal->v[1];
  v21 = outNormal->v[0];
  v22 = outNormal->v[2];
  v23 = (float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1264, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal ) )", "(%g, %g, %g) len %g", v21, v20, v22, fsqrt(v23)) )
    __debugbreak();
  v24 = outParallel->v[1];
  v25 = outParallel->v[0];
  v26 = outParallel->v[2];
  v27 = (float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1265, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outParallel ) )", "(%g, %g, %g) len %g", v25, v24, v26, fsqrt(v27)) )
    __debugbreak();
  v28 = outBelow->v[1];
  v29 = outBelow->v[0];
  v30 = outBelow->v[2];
  v31 = (float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v30 * v30);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v31 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1266, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outBelow ) )", "(%g, %g, %g) len %g", v29, v28, v30, fsqrt(v31)) )
    __debugbreak();
  v32 = outOtherNormal->v[1];
  v33 = outOtherNormal->v[0];
  v34 = outOtherNormal->v[2];
  v35 = (float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v35 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1267, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outOtherNormal ) )", "(%g, %g, %g) len %g", v33, v32, v34, fsqrt(v35)) )
    __debugbreak();
  v36 = outParallel->v[1];
  v37 = outParallel->v[2];
  v38 = outNormal->v[1];
  v39 = (float)((float)(outParallel->v[0] * outNormal->v[0]) + (float)(v36 * v38)) + (float)(v37 * outNormal->v[2]);
  if ( COERCE_FLOAT(LODWORD(v39) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1268, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outParallel ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outNormal->v[0], v38, outNormal->v[2], outParallel->v[0], v36, v37, v39) )
    __debugbreak();
  v40 = outBelow->v[1];
  v41 = outNormal->v[1];
  v42 = outBelow->v[2];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(outBelow->v[0] * outNormal->v[0]) + (float)(v40 * v41)) + (float)(v42 * outNormal->v[2])) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1269, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outBelow ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outNormal->v[0], v41, outNormal->v[2], outBelow->v[0], v40, v42, (float)((float)((float)(outBelow->v[0] * outNormal->v[0]) + (float)(v40 * v41)) + (float)(v42 * outNormal->v[2]))) )
    __debugbreak();
}

/*
==============
Edge_CalculateVectors
==============
*/
void Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, unsigned __int64 normalFaceIndex, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  vec3_t *v11; 
  unsigned int EntityIndex; 
  int v13; 
  vec3_t *outOtherNormal; 
  EdgeId edgeIda; 
  vec3_t v16; 

  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v13 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1240, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v13) )
      __debugbreak();
  }
  if ( fraction < 0.0 || fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1240, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( normalFaceIndex > 1 )
  {
    LODWORD(outOtherNormal) = 1;
    LODWORD(v11) = normalFaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1241, ASSERT_TYPE_ASSERT, "( 0 ) <= ( normalFaceIndex ) && ( normalFaceIndex ) <= ( 1 )", "normalFaceIndex not in [0, 1]\n\t%i not in [%i, %i]", v11, 0i64, outOtherNormal) )
      __debugbreak();
  }
  Edge_CalculateVectors(handler, edgeIda, fraction, normalFaceIndex, outNormal, outParallel, outBelow, &v16);
}

/*
==============
Edge_CalculateVectors
==============
*/
void Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, unsigned __int64 normalFaceIndex, float4 *outNormal, float4 *outParallel, float4 *outBelow, float4 *outOtherNormal)
{
  float4 v23; 
  __m128 v; 
  float4 v25; 
  __int64 v30; 
  unsigned int EntityIndex; 
  int v32; 
  __int64 v33; 
  EdgeId edgeIda; 
  float4 outLineDir; 

  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v32 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1282, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v32) )
      __debugbreak();
  }
  if ( fraction < 0.0 || fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1282, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( normalFaceIndex > 1 )
  {
    LODWORD(v33) = 1;
    LODWORD(v30) = normalFaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1283, ASSERT_TYPE_ASSERT, "( 0 ) <= ( normalFaceIndex ) && ( normalFaceIndex ) <= ( 1 )", "normalFaceIndex not in [0, 1]\n\t%i not in [%i, %i]", v30, 0i64, v33) )
      __debugbreak();
  }
  Edge_CalculateNormals(handler, edgeIda, outNormal, outOtherNormal, &outLineDir);
  _XMM0 = _mm128_mul_ps(outLineDir.v, outLineDir.v);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM3.v = _mm128_div_ps(outLineDir.v, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm3, xmm3
    vmovmskps eax, xmm0
  }
  *outParallel = (float4)_XMM3.v;
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1288, ASSERT_TYPE_SANITY, "( !Float4IsNaN( outParallel ) )", (const char *)&queryFormat, "!Float4IsNaN( outParallel )") )
    __debugbreak();
  _XMM1 = _mm128_mul_ps(outOtherNormal->v, outOtherNormal->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  v23.v = _mm128_div_ps(outOtherNormal->v, _mm_sqrt_ps(_XMM0));
  *outOtherNormal = (float4)v23.v;
  if ( normalFaceIndex )
  {
    v = outNormal->v;
    *outNormal = (float4)v23.v;
    *outOtherNormal = (float4)v;
  }
  v25.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(outNormal->v, outNormal->v, 201), _mm_shuffle_ps(outParallel->v, outParallel->v, 210)), _mm128_mul_ps(_mm_shuffle_ps(outNormal->v, outNormal->v, 210), _mm_shuffle_ps(outParallel->v, outParallel->v, 201)));
  *outBelow = (float4)v25.v;
  if ( normalFaceIndex )
  {
    outBelow->v = _mm128_sub_ps((__m128)0i64, v25.v);
    outParallel->v = _mm128_sub_ps((__m128)0i64, outParallel->v);
  }
  _XMM1 = _mm128_mul_ps(outBelow->v, outBelow->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  outBelow->v = _mm128_div_ps(outBelow->v, _mm_sqrt_ps(_XMM0));
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
unsigned __int64 Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow, vec3_t *outOtherNormmal)
{
  float v17; 
  __m128 v; 
  float v22; 
  __m128 v24; 
  float v27; 
  __m128 v29; 
  float v32; 
  __m128 v34; 
  unsigned __int64 v37; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  unsigned __int64 v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  unsigned int EntityIndex; 
  int v68; 
  EdgeId edgeIda; 
  _QWORD entityUpa[3]; 
  float4 v71; 
  float4 v72; 
  float4 outOtherNormal; 
  float4 v74; 
  __m128 v75; 
  __m128 v76; 
  float4 v77; 

  _RBX = outNormal;
  _RSI = outParallel;
  _RDI = outBelow;
  _R14 = outOtherNormmal;
  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v68 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1137, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v68) )
      __debugbreak();
  }
  if ( fraction < 0.0 || fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1137, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  v17 = entityUp->v[0];
  v77.v.m128_i32[3] = 0;
  v = v77.v;
  v.m128_f32[0] = v17;
  _XMM3 = v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r12+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r12+8], 20h ; ' '
  }
  v22 = viewBasis->m[0].v[0];
  v77.v = _XMM3;
  *(__m128 *)&entityUpa[1] = _XMM3;
  v77.v.m128_i32[3] = 0;
  v24 = v77.v;
  v24.m128_f32[0] = v22;
  _XMM3 = v24;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r15+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r15+8], 20h ; ' '
  }
  v27 = viewBasis->m[1].v[0];
  v77.v = _XMM3;
  v74.v = _XMM3;
  v77.v.m128_i32[3] = 0;
  v29 = v77.v;
  v29.m128_f32[0] = v27;
  _XMM3 = v29;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r15+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [r15+14h], 20h ; ' '
  }
  v32 = viewBasis->m[2].v[0];
  v77.v = _XMM3;
  v77.v.m128_i32[3] = 0;
  v75 = _XMM3;
  v34 = v77.v;
  v34.m128_f32[0] = v32;
  _XMM3 = v34;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r15+1Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [r15+20h], 20h ; ' '
  }
  v77.v = _XMM3;
  v76 = _XMM3;
  v37 = Edge_CalculateVectors(handler, edgeIda, fraction, (const float4 *)&entityUpa[1], &v74, &v77, &v71, &v72, &outOtherNormal);
  _XMM1 = v77.v;
  _XMM2 = v71.v;
  outNormal->v[0] = v77.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+4], xmm1, 1
    vextractps dword ptr [rbx+8], xmm1, 2
  }
  outParallel->v[0] = _XMM2.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rsi+4], xmm2, 1
    vextractps dword ptr [rsi+8], xmm2, 2
  }
  _XMM2 = v72.v;
  outBelow->v[0] = v72.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rdi+4], xmm2, 1
    vextractps dword ptr [rdi+8], xmm2, 2
  }
  _XMM2 = outOtherNormal.v;
  outOtherNormmal->v[0] = outOtherNormal.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [r14+4], xmm2, 1
    vextractps dword ptr [r14+8], xmm2, 2
  }
  v42 = outNormal->v[1];
  v43 = outNormal->v[0];
  v44 = outNormal->v[2];
  v45 = (float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)(v44 * v44);
  v46 = v37;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v45 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1157, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outNormal ) )", "(%g, %g, %g) len %g", v43, v42, v44, fsqrt(v45)) )
    __debugbreak();
  v47 = outParallel->v[1];
  v48 = outParallel->v[0];
  v49 = outParallel->v[2];
  v50 = (float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v50 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1158, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outParallel ) )", "(%g, %g, %g) len %g", v48, v47, v49, fsqrt(v50)) )
    __debugbreak();
  v51 = outBelow->v[1];
  v52 = outBelow->v[0];
  v53 = outBelow->v[2];
  v54 = (float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v54 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1159, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outBelow ) )", "(%g, %g, %g) len %g", v52, v51, v53, fsqrt(v54)) )
    __debugbreak();
  v55 = outOtherNormmal->v[1];
  v56 = outOtherNormmal->v[0];
  v57 = outOtherNormmal->v[2];
  v58 = (float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v58 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1160, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outOtherNormmal ) )", "(%g, %g, %g) len %g", v56, v55, v57, fsqrt(v58)) )
    __debugbreak();
  v59 = outParallel->v[1];
  v60 = outParallel->v[2];
  v61 = outNormal->v[1];
  v62 = (float)((float)(outParallel->v[0] * outNormal->v[0]) + (float)(v59 * v61)) + (float)(v60 * outNormal->v[2]);
  if ( COERCE_FLOAT(LODWORD(v62) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1161, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outParallel ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outNormal->v[0], v61, outNormal->v[2], outParallel->v[0], v59, v60, v62) )
    __debugbreak();
  v63 = outBelow->v[1];
  v64 = outNormal->v[1];
  v65 = outBelow->v[2];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(outBelow->v[0] * outNormal->v[0]) + (float)(v63 * v64)) + (float)(v65 * outNormal->v[2])) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1162, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( outNormal, outBelow ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", outNormal->v[0], v64, outNormal->v[2], outBelow->v[0], v63, v65, (float)((float)((float)(outBelow->v[0] * outNormal->v[0]) + (float)(v63 * v64)) + (float)(v65 * outNormal->v[2]))) )
    __debugbreak();
  return v46;
}

/*
==============
Edge_CalculateVectors
==============
*/
unsigned __int64 Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  unsigned int EntityIndex; 
  int v14; 
  EdgeId edgeIda; 
  vec3_t outOtherNormmal; 

  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v14 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1123, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v14) )
      __debugbreak();
  }
  if ( fraction < 0.0 || fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1123, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  return Edge_CalculateVectors(handler, edgeIda, fraction, entityUp, viewBasis, outNormal, outParallel, outBelow, &outOtherNormmal);
}

/*
==============
Edge_CalculateVectors
==============
*/
_BOOL8 Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, const float4 *entityUp, const float4 *viewBasis, float4 *outNormal, float4 *outParallel, float4 *outBelow, float4 *outOtherNormal)
{
  __m128 v17; 
  __m128 v18; 
  __m128 v41; 
  _BOOL8 v50; 
  float4 v51; 
  unsigned int EntityIndex; 
  EdgeId edgeIda; 
  float4 outLineDir; 
  float4 r_outNormal0; 
  float4 outNormal1; 

  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1182, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, 502048) )
      __debugbreak();
  }
  if ( fraction < 0.0 || fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1182, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  _XMM1 = _mm128_mul_ps(viewBasis->v, entityUp->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  if ( COERCE_FLOAT(_XMM1.m128_i32[0] & _xmm) >= 0.99900001 )
  {
    v18 = _mm128_sub_ps((__m128)0i64, viewBasis[2].v);
    _XMM1 = _mm128_mul_ps(v18, entityUp->v);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
    }
    v17 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)0i64, _XMM0), entityUp->v), v18);
  }
  else
  {
    v17 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)0i64, _XMM1), entityUp->v), viewBasis->v);
  }
  _XMM0 = _mm128_mul_ps(v17, v17);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM7 = _mm128_div_ps(v17, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1204, ASSERT_TYPE_SANITY, "( !Float4IsNaN( viewForwardYaw ) )", (const char *)&queryFormat, "!Float4IsNaN( viewForwardYaw )") )
    __debugbreak();
  Edge_CalculateNormals(handler, edgeIda, &r_outNormal0, &outNormal1, &outLineDir);
  _XMM0 = _mm128_mul_ps(outLineDir.v, outLineDir.v);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM3.v = _mm128_div_ps(outLineDir.v, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm3, xmm3
    vmovmskps eax, xmm0
  }
  *outParallel = (float4)_XMM3.v;
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1212, ASSERT_TYPE_SANITY, "( !Float4IsNaN( outParallel ) )", (const char *)&queryFormat, "!Float4IsNaN( outParallel )") )
    __debugbreak();
  _XMM0 = _mm128_mul_ps(outNormal1.v, outNormal1.v);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v41 = _mm128_div_ps(outNormal1.v, _mm_sqrt_ps(_XMM0));
  _XMM1 = _mm128_mul_ps(_XMM7, r_outNormal0.v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm3, xmm0, xmm0
  }
  _XMM1 = _mm128_mul_ps(_XMM7, v41);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  outNormal1.v = v41;
  v50 = *(float *)&_XMM1 < *(float *)&_XMM3;
  *outNormal = *(&r_outNormal0 + v50);
  *outOtherNormal = *(&r_outNormal0 + (*(float *)&_XMM1 >= *(float *)&_XMM3));
  v51.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(outNormal->v, outNormal->v, 201), _mm_shuffle_ps(outParallel->v, outParallel->v, 210)), _mm128_mul_ps(_mm_shuffle_ps(outNormal->v, outNormal->v, 210), _mm_shuffle_ps(outParallel->v, outParallel->v, 201)));
  *outBelow = (float4)v51.v;
  if ( *(float *)&_XMM1 < *(float *)&_XMM3 )
  {
    outBelow->v = _mm128_sub_ps((__m128)0i64, v51.v);
    outParallel->v = _mm128_sub_ps((__m128)0i64, outParallel->v);
  }
  _XMM1 = _mm128_mul_ps(outBelow->v, outBelow->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  outBelow->v = _mm128_div_ps(outBelow->v, _mm_sqrt_ps(_XMM0));
  return v50;
}

/*
==============
Edge_CalculateVectors
==============
*/
unsigned __int64 Edge_CalculateVectors(const BgHandler *handler, EdgeId edgeId, float fraction, const float4 *entityUp, const float4 *viewBasis, float4 *outNormal, float4 *outParallel, float4 *outBelow)
{
  unsigned int EntityIndex; 
  int v14; 
  float4 outOtherNormal; 
  EdgeId edgeIda; 

  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v14 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v14) )
      __debugbreak();
  }
  if ( fraction < 0.0 || fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1170, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  return Edge_CalculateVectors(handler, edgeIda, fraction, entityUp, viewBasis, outNormal, outParallel, outBelow, &outOtherNormal);
}

/*
==============
Edge_CalculateVectors
==============
*/
unsigned __int64 Edge_CalculateVectors(const pmove_t *const pm, EdgeId edgeId, float fraction, const vec3_t *entityUp, const tmat33_t<vec3_t> *viewBasis, vec3_t *outNormal, vec3_t *outParallel, vec3_t *outBelow)
{
  const BgHandler *m_bgHandler; 
  unsigned int EntityIndex; 
  int v14; 
  EdgeId edgeIda; 
  vec3_t outOtherNormmal; 

  m_bgHandler = pm->m_bgHandler;
  edgeIda = edgeId;
  if ( EdgeId::GetEntityIndex(&edgeIda) >= 0x7A920 )
  {
    v14 = 502048;
    EntityIndex = EdgeId::GetEntityIndex(&edgeIda);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1123, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, v14) )
      __debugbreak();
  }
  if ( fraction < 0.0 || fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1123, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fraction, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  return Edge_CalculateVectors(m_bgHandler, edgeIda, fraction, entityUp, viewBasis, outNormal, outParallel, outBelow, &outOtherNormmal);
}

/*
==============
Edge_GetAdjacentEdges
==============
*/
unsigned __int64 Edge_GetAdjacentEdges(EdgeId edgeId, edgeFlags_t flag, AdjacentEdgeInfo *outAdjacentEdgeInfo)
{
  AdjacentEdgeInfo *v3; 
  unsigned __int8 v4; 
  unsigned int EdgeIndex; 
  const MapEdgeList *List; 
  const MapEdgeList *v7; 
  unsigned int v8; 
  __int64 EntryIndex; 
  EdgeAdjacencyMetadata *edgeAdjacencyMetadata; 
  unsigned __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  EdgeAdjacency *edgeAdjacency; 
  unsigned int v20; 
  AdjacentEdgeInfo *v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  EdgeId v26; 
  float v27; 
  double v28; 
  float v29; 
  double v30; 
  bool IsDynamic; 
  unsigned int v32; 
  __int64 v34; 
  unsigned int EntityIndex; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  EdgeId v39; 
  EdgeId v40; 
  AdjacentEdgeInfo *v41; 
  unsigned int v42; 

  v41 = outAdjacentEdgeInfo;
  v40 = edgeId;
  v3 = outAdjacentEdgeInfo;
  v4 = flag;
  if ( EdgeId::GetEntityIndex(&v40) >= 0x7A920 )
  {
    EntityIndex = EdgeId::GetEntityIndex(&v40);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1445, ASSERT_TYPE_ASSERT, "(unsigned)( edgeId.GetEntityIndex() ) < (unsigned)( ( SCRIPTABLE_MAX_INSTANCE_COUNT + ( 2048 ) ) )", "edgeId.GetEntityIndex() doesn't index MAX_EDGE_ENTITY_INDEX\n\t%i not in [0, %i)", EntityIndex, 502048) )
      __debugbreak();
  }
  EdgeIndex = EdgeId::GetEdgeIndex(&v40);
  List = MapEdgeList_GetList(EdgeIndex);
  v7 = List;
  if ( !List || !List->edgeAdjacencyMetadata || !List->edgeAdjacency || !EdgeAdjacencySupported((const DiskEdgeFlags)v4) )
    return 0i64;
  v8 = EdgeId::GetEdgeIndex(&v40);
  EntryIndex = MapEdgeList_GetEntryIndex(v8);
  if ( (unsigned int)EntryIndex >= v7->numEdgeAdjacencyMetadata )
  {
    LODWORD(v36) = v7->numEdgeAdjacencyMetadata;
    LODWORD(v34) = EntryIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1463, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( mapEdgeList->numEdgeAdjacencyMetadata )", "entryIndex doesn't index mapEdgeList->numEdgeAdjacencyMetadata\n\t%i not in [0, %i)", v34, v36) )
      __debugbreak();
  }
  edgeAdjacencyMetadata = v7->edgeAdjacencyMetadata;
  v11 = 0i64;
  v12 = 0i64;
  if ( v4 != 1 )
  {
    if ( v4 == 16 )
    {
      v12 = (*(_DWORD *)&edgeAdjacencyMetadata[EntryIndex] >> 23) & 3;
    }
    else
    {
      LODWORD(v34) = (char)v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1422, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Edge_GetAdjacentEdgeFlagOffset: unsupported edgeFlag_t encountered: %i", v34) )
        __debugbreak();
      v12 = 0i64;
    }
  }
  v13 = (unsigned int)edgeAdjacencyMetadata[EntryIndex];
  v14 = v12 + (v13 & 0x7FFFFF);
  if ( v4 == 1 )
  {
    v16 = v13 >> 23;
    goto LABEL_24;
  }
  if ( v4 == 16 )
  {
    v16 = v13 >> 25;
LABEL_24:
    v17 = v16 & 3;
    v15 = (unsigned int)v17;
    if ( v17 > 2 )
    {
      LODWORD(v34) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1467, ASSERT_TYPE_ASSERT, "( 0 ) <= ( adjacencyCount ) && ( adjacencyCount ) <= ( 2 )", "adjacencyCount not in [0, 2]\n\t%i not in [%i, %i]", v34, 0i64, 2) )
        __debugbreak();
    }
    goto LABEL_27;
  }
  LODWORD(v34) = (char)v4;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1406, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Edge_GetAdjacentEdgeFlagCount: unsupported edgeFlag_t encountered: %i", v34) )
    __debugbreak();
  v15 = 0i64;
LABEL_27:
  if ( v15 )
  {
    v18 = v14;
    do
    {
      if ( (unsigned int)(v11 + v14) >= v7->numEdgeAdjacency )
      {
        LODWORD(v36) = v7->numEdgeAdjacency;
        LODWORD(v34) = v11 + v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( adjacencyIndex + offset ) < (unsigned)( mapEdgeList->numEdgeAdjacency )", "adjacencyIndex + offset doesn't index mapEdgeList->numEdgeAdjacency\n\t%i not in [0, %i)", v34, v36) )
          __debugbreak();
      }
      edgeAdjacency = v7->edgeAdjacency;
      if ( EdgeId::GetIsDynamic(&v40) )
      {
        v20 = EdgeId::GetEntityIndex(&v40);
        EdgeId::Set(&v39, edgeAdjacency[v18].adjEdge, v20);
      }
      else
      {
        EdgeId::Set(&v39, edgeAdjacency[v18].adjEdge);
      }
      v21 = &v3[v11];
      v21->id = v40;
      if ( edgeAdjacency[v18].start )
      {
        v42 = ((edgeAdjacency[v18].start & 0x8000) << 16) | (((((edgeAdjacency[v18].start & 0x3FFF) << 14) - (~(edgeAdjacency[v18].start << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        v22 = *(float *)&v42;
      }
      else
      {
        v22 = 0.0;
      }
      v23 = I_fclamp(v22, 0.0, 1.0);
      v21->fractions[0] = *(float *)&v23;
      if ( edgeAdjacency[v18].end )
      {
        v42 = ((edgeAdjacency[v18].end & 0x8000) << 16) | (((((edgeAdjacency[v18].end & 0x3FFF) << 14) - (~(edgeAdjacency[v18].end << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        v24 = *(float *)&v42;
      }
      else
      {
        v24 = 0.0;
      }
      v25 = I_fclamp(v24, 0.0, 1.0);
      v26 = v39;
      v21->fractions[1] = *(float *)&v25;
      v21->otherId = v26;
      if ( edgeAdjacency[v18].adjStart )
      {
        v42 = ((edgeAdjacency[v18].adjStart & 0x8000) << 16) | (((((edgeAdjacency[v18].adjStart & 0x3FFF) << 14) - (~(edgeAdjacency[v18].adjStart << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        v27 = *(float *)&v42;
      }
      else
      {
        v27 = 0.0;
      }
      v28 = I_fclamp(v27, 0.0, 1.0);
      v21->otherFractions[0] = *(float *)&v28;
      if ( edgeAdjacency[v18].adjEnd )
      {
        v42 = ((edgeAdjacency[v18].adjEnd & 0x8000) << 16) | (((((edgeAdjacency[v18].adjEnd & 0x3FFF) << 14) - (~(edgeAdjacency[v18].adjEnd << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        v29 = *(float *)&v42;
      }
      else
      {
        v29 = 0.0;
      }
      v30 = I_fclamp(v29, 0.0, 1.0);
      v21->otherFractions[1] = *(float *)&v30;
      IsDynamic = EdgeId::GetIsDynamic(&v21->otherId);
      if ( EdgeId::GetIsDynamic(&v3[v11].id) != IsDynamic )
      {
        LODWORD(v38) = EdgeId::GetIsDynamic(&v21->otherId);
        LODWORD(v37) = EdgeId::GetIsDynamic(&v3[v11].id);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1490, ASSERT_TYPE_ASSERT, "( outAdjacentEdgeInfo[offset].id.GetIsDynamic() ) == ( outAdjacentEdgeInfo[offset].otherId.GetIsDynamic() )", "%s == %s\n\t%i, %i", "outAdjacentEdgeInfo[offset].id.GetIsDynamic()", "outAdjacentEdgeInfo[offset].otherId.GetIsDynamic()", v37, v38) )
          __debugbreak();
      }
      v32 = EdgeId::GetEntityIndex(&v21->otherId);
      if ( EdgeId::GetEntityIndex(&v3[v11].id) != v32 )
      {
        LODWORD(v38) = EdgeId::GetEntityIndex(&v21->otherId);
        LODWORD(v37) = EdgeId::GetEntityIndex(&v3[v11].id);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 1491, ASSERT_TYPE_ASSERT, "( outAdjacentEdgeInfo[offset].id.GetEntityIndex() ) == ( outAdjacentEdgeInfo[offset].otherId.GetEntityIndex() )", "%s == %s\n\t%i, %i", "outAdjacentEdgeInfo[offset].id.GetEntityIndex()", "outAdjacentEdgeInfo[offset].otherId.GetEntityIndex()", v37, v38) )
          __debugbreak();
      }
      v3 = v41;
      ++v11;
      ++v18;
    }
    while ( v11 < v15 );
  }
  return v15;
}

/*
==============
Edge_GetDynamicLineSegment
==============
*/
void Edge_GetDynamicLineSegment(const vector4 *entityTransform, const EdgeId *edgeId, float4 (*outLineSegment)[2], float4 *outNormal0)
{
  unsigned int EdgeIndex; 
  unsigned int v9; 
  const float4 (*v10)[2]; 
  __m128 v11; 
  __m128 v; 
  unsigned int v13; 
  const FlaggedEdgeMetadata *v14; 
  float4 v15; 
  float4 r_outAdjacentFaceNormal; 

  if ( !EdgeId::GetIsDynamic((EdgeId *)edgeId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 921, ASSERT_TYPE_SANITY, "( edgeId.GetIsDynamic() )", (const char *)&queryFormat, "edgeId.GetIsDynamic()") )
    __debugbreak();
  EdgeIndex = EdgeId::GetEdgeIndex((EdgeId *)edgeId);
  if ( MapEdgeList_GetListIndex(EdgeIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 922, ASSERT_TYPE_ASSERT, "(MapEdgeList_GetListIndex( edgeId.GetEdgeIndex() ) == TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "MapEdgeList_GetListIndex( edgeId.GetEdgeIndex() ) == TRANSIENT_ZONE_ALWAYSLOADED") )
    __debugbreak();
  v9 = EdgeId::GetEdgeIndex((EdgeId *)edgeId);
  v10 = MapEdgeList_LookupSegment(v9);
  v11 = *(__m128 *)v10;
  (*outLineSegment)[0] = (float4)_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v11, v11, 255), entityTransform->w.v), _mm128_mul_ps(_mm_shuffle_ps(v11, v11, 85), entityTransform->y.v)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v11, v11, 170), entityTransform->z.v), _mm128_mul_ps(_mm_shuffle_ps(v11, v11, 0), entityTransform->x.v)));
  v = (*v10)[1].v;
  (*outLineSegment)[1].v = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 255), entityTransform->w.v), _mm128_mul_ps(_mm_shuffle_ps(v, v, 85), entityTransform->y.v)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 170), entityTransform->z.v), _mm128_mul_ps(_mm_shuffle_ps(v, v, 0), entityTransform->x.v)));
  if ( outNormal0 )
  {
    v13 = EdgeId::GetEdgeIndex((EdgeId *)edgeId);
    v14 = MapEdgeList_LookupMetadata(v13);
    EdgeAdjacentFaceNormalUnpack((const DiskStaticLineSegment *)v10, v14->packedAdjacentNormal, &r_outAdjacentFaceNormal);
    v15.v = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(r_outAdjacentFaceNormal.v, r_outAdjacentFaceNormal.v, 85), entityTransform->y.v), g_negativeZero.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(r_outAdjacentFaceNormal.v, r_outAdjacentFaceNormal.v, 170), entityTransform->z.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(r_outAdjacentFaceNormal.v, r_outAdjacentFaceNormal.v, 0), entityTransform->x.v), g_negativeZero.v)));
    *outNormal0 = (float4)v15.v;
    *outNormal0 = (float4)(*(_OWORD *)&v15.v & *(_OWORD *)&g_keepXYZ.v);
  }
}

/*
==============
Edge_GetEntityTransform
==============
*/
void Edge_GetEntityTransform(const BgHandler *handler, const EdgeId *edgeId, vector4 *outTransform)
{
  __int128 v3; 
  unsigned int EntityIndex; 
  bool (__fastcall *IsClient)(BgHandler *); 
  unsigned int v9; 
  __int128 v11; 
  const float4 *v14; 
  const vec3_t *InstanceOrigin; 
  __int128 v17; 
  const float4 *v20; 
  __int128 v22; 
  __int128 v26; 
  __m128 v29; 
  const float4 *v30; 
  float4 *v31; 
  const float4 *v32; 
  vector3 *v33; 
  __m128 v35; 
  __m256i v37; 
  __int128 v38; 
  __m128 v; 
  __int128 v40; 
  vec3_t outOrigin; 
  float v42; 

  if ( !EdgeId::GetIsDynamic((EdgeId *)edgeId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 872, ASSERT_TYPE_SANITY, "( edgeId.GetIsDynamic() )", (const char *)&queryFormat, "edgeId.GetIsDynamic()") )
    __debugbreak();
  EntityIndex = EdgeId::GetEntityIndex((EdgeId *)edgeId);
  IsClient = handler->IsClient;
  if ( EntityIndex < 0x800 )
  {
    IsClient((BgHandler *)handler);
    handler->GetEntityOrigin((BgHandler *)handler, EntityIndex, &outOrigin);
    handler->GetEntityAngles((BgHandler *)handler, EntityIndex, (vec3_t *)&v42);
    HIDWORD(v38) = 0;
    v26 = v38;
    *(float *)&v26 = v42;
    _XMM2 = v26;
    __asm
    {
      vinsertps xmm2, xmm2, [rsp+0B8h+var_34], 10h
      vinsertps xmm2, xmm2, [rsp+0B8h+var_30], 20h
    }
    v29 = _mm128_mul_ps(_XMM2.v, g_degreeToRadian.v);
    v = _XMM2.v;
    Float4RadianToQuat(v31, v30);
    Float4UnitQuatToAxis(v33, v32);
    *(_OWORD *)&v37.m256i_u64[2] = v3;
    *(__m128 *)v37.m256i_i8 = v29;
    *(__m256i *)outTransform->x.v.m128_f32 = v37;
    outTransform->z = (float4)_XMM2.v;
    goto LABEL_9;
  }
  v9 = EntityIndex - 2048;
  if ( IsClient((BgHandler *)handler) )
  {
    ScriptableCl_GetInstanceOrigin(LOCAL_CLIENT_0, v9, &outOrigin);
    HIDWORD(v38) = 0;
    v11 = v38;
    *(float *)&v11 = ScriptableCl_GetInstanceAngles(LOCAL_CLIENT_0, v9)->v[0];
    _XMM0 = v11;
    __asm
    {
      vinsertps xmm0, xmm0, xmm2, 10h
      vinsertps xmm0, xmm0, xmm3, 20h ; ' '
    }
    v = _XMM0;
    Float4AnglesToAxis(v14, outTransform);
LABEL_9:
    v.m128_i32[3] = 0;
    v35 = v;
    v35.m128_f32[0] = outOrigin.v[0];
    _XMM3 = v35;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsp+0B8h+outOrigin+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsp+0B8h+outOrigin+8], 20h
    }
    goto LABEL_10;
  }
  InstanceOrigin = ScriptableSv_GetInstanceOrigin(v9);
  HIDWORD(v38) = 0;
  v17 = v38;
  *(float *)&v17 = ScriptableSv_GetInstanceAngles(v9)->v[0];
  _XMM0 = v17;
  __asm
  {
    vinsertps xmm0, xmm0, xmm2, 10h
    vinsertps xmm0, xmm0, xmm3, 20h ; ' '
  }
  v40 = _XMM0;
  Float4AnglesToAxis(v20, outTransform);
  HIDWORD(v40) = 0;
  v22 = v40;
  *(float *)&v22 = InstanceOrigin->v[0];
  _XMM3 = v22;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
  }
LABEL_10:
  outTransform->w = (float4)_XMM3.v;
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
  const float4 (*v8)[2]; 
  EdgeId edgeIda; 
  float4 outLineSegmenta[2]; 
  vector4 outTransform; 

  edgeIda = edgeId;
  _RBX = (float *)outLineSegment;
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegmenta, NULL);
    _XMM2.v = (__m128)outLineSegmenta[1];
    _XMM1.v = (__m128)outLineSegmenta[0];
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    v8 = MapEdgeList_LookupSegment(EdgeIndex);
    _XMM1.v = *(__m128 *)v8;
    _XMM2.v = (__m128)(*v8)[1];
  }
  *_RBX = _XMM1.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+4], xmm1, 1
    vextractps dword ptr [rbx+8], xmm1, 2
  }
  _RBX[3] = _XMM2.v.m128_f32[0];
  __asm
  {
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
  const float4 (*v6)[2]; 
  EdgeId edgeIda; 
  vector4 outTransform; 

  edgeIda = edgeId;
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(handler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, r_outLineSegment, NULL);
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    v6 = MapEdgeList_LookupSegment(EdgeIndex);
    (*r_outLineSegment)[0] = *(float4 *)v6;
    (*r_outLineSegment)[1] = (*v6)[1];
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
  const float4 (*v8)[2]; 
  EdgeId edgeIda; 
  float4 outLineSegmenta[2]; 
  vector4 outTransform; 

  m_bgHandler = pm->m_bgHandler;
  _RBX = (float *)outLineSegment;
  edgeIda = edgeId;
  if ( EdgeId::GetIsDynamic(&edgeIda) )
  {
    Edge_GetEntityTransform(m_bgHandler, &edgeIda, &outTransform);
    Edge_GetDynamicLineSegment(&outTransform, &edgeIda, (float4 (*)[2])outLineSegmenta, NULL);
    _XMM2.v = (__m128)outLineSegmenta[1];
    _XMM1.v = (__m128)outLineSegmenta[0];
  }
  else
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&edgeIda);
    v8 = MapEdgeList_LookupSegment(EdgeIndex);
    _XMM1.v = *(__m128 *)v8;
    _XMM2.v = (__m128)(*v8)[1];
  }
  *_RBX = _XMM1.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+4], xmm1, 1
    vextractps dword ptr [rbx+8], xmm1, 2
  }
  _RBX[3] = _XMM2.v.m128_f32[0];
  __asm
  {
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
void Float4BlendXYZW(const float4 *result, const float4 *a2, float4 *a3)
{
  float4 v3; 

  *a3 = (float4)v3.v;
}

/*
==============
Float4Blendxyzw
==============
*/
void Float4Blendxyzw(const float4 *result, const float4 *a2, float4 *a3)
{
  float4 v3; 

  *a3 = (float4)v3.v;
}

/*
==============
EdgeOctreeQueryShape::Float4CalcNodeExtents
==============
*/
void EdgeOctreeQueryShape::Float4CalcNodeExtents(const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, float4 *r_outMinExtent, float4 *r_outMaxExtent)
{
  __m128 v10; 
  float4 v11; 
  float4 v12; 

  __asm
  {
    vlddqu  xmm1, xmmword ptr [rdx]
    vpxor   xmm0, xmm0, xmm0
    vpunpcklwd xmm1, xmm1, xmm0
  }
  _XMM2 = _mm_cvtepi32_ps(_XMM1);
  __asm { vinsertps xmm0, xmm2, xmm2, 8 }
  v10 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_XMM0, g_two.v), g_one.v), r_octree->nodeHalfWidth[r_node->depth].v), r_octree->minExtent.v);
  v11.v = _mm128_sub_ps(v10, r_octree->nodeHalfWidth[r_node->depth].v);
  *r_outMinExtent = (float4)v11.v;
  r_outMinExtent->v = _mm_shuffle_ps(v11.v, _mm_shuffle_ps(v11.v, g_negativeInfinity.v, 250), 132);
  v12.v = _mm128_add_ps(v10, r_octree->nodeHalfWidth[r_node->depth].v);
  *r_outMaxExtent = (float4)v12.v;
  r_outMaxExtent->v = _mm_shuffle_ps(v12.v, _mm_shuffle_ps(v12.v, g_infinity.v, 250), 132);
}

/*
==============
EdgeOctreeQueryShape::Float4ClosestApproachOfTwoLines
==============
*/
void EdgeOctreeQueryShape::Float4ClosestApproachOfTwoLines(const float4 *r_linePointA, const float4 *r_lineVecA, const float4 *r_linePointB, const float4 *r_lineVecB, float4 *r_outS, float4 *r_outT)
{
  __m128 v6; 
  float v19; 
  float v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  float v32; 
  __int128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 

  v6 = _mm128_sub_ps(r_linePointA->v, r_linePointB->v);
  _XMM1 = _mm128_mul_ps(r_lineVecA->v, r_lineVecA->v);
  __asm { vinsertps xmm2, xmm1, xmm1, 8 }
  _XMM1 = _mm128_mul_ps(r_lineVecB->v, r_lineVecB->v);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vinsertps xmm2, xmm1, xmm1, 8
  }
  _XMM1 = _mm128_mul_ps(r_lineVecB->v, r_lineVecA->v);
  __asm
  {
    vhaddps xmm6, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm11, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  LODWORD(v19) = _XMM1 ^ _xmm;
  _XMM1 = _mm128_mul_ps(v6, r_lineVecA->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm7, xmm0, xmm0
  }
  v24 = (float)(*(float *)&_XMM11 * *(float *)&_XMM6) - (float)(v19 * v19);
  if ( (float)(v24 * v24) > COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 * *(float *)&_XMM6) & _xmm) * 0.000001 )
  {
    _XMM1 = _mm128_mul_ps(v6, r_lineVecB->v);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
    }
    LODWORD(v32) = _XMM1 ^ _xmm;
    if ( (float)((float)(*(float *)&_XMM11 * *(float *)&_XMM6) - (float)(v19 * v19)) <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 996, ASSERT_TYPE_ASSERT, "(1.0E-6 < determinant)", (const char *)&queryFormat, "ZERO_EPSILON < determinant") )
      __debugbreak();
    v33 = _XMM1 ^ (unsigned int)_xmm;
    *(float *)&v33 = (float)(v32 * v19) - (float)(_XMM7.m128_f32[0] * *(float *)&_XMM11);
    v34 = (__m128)v33;
    v36 = _XMM7;
    v36.m128_f32[0] = _XMM7.m128_f32[0] * v19;
    v35 = v36;
    v37 = v34;
    v37.m128_f32[0] = v34.m128_f32[0] * (float)(1.0 / v24);
    v26 = v37;
    v38 = v35;
    v38.m128_f32[0] = (float)(v35.m128_f32[0] - (float)(v32 * *(float *)&_XMM6)) * (float)(1.0 / v24);
    v27 = v38;
  }
  else
  {
    if ( *(float *)&_XMM6 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 985, ASSERT_TYPE_ASSERT, "(1.0E-6 < lineVecALenSq)", (const char *)&queryFormat, "ZERO_EPSILON < lineVecALenSq") )
      __debugbreak();
    v25 = _XMM7;
    v25.m128_f32[0] = _XMM7.m128_f32[0] / *(float *)&_XMM6;
    v26 = (__m128)(*(_OWORD *)&v25 ^ (unsigned int)_xmm);
    v27 = 0i64;
  }
  r_outS->v = _mm_shuffle_ps(v26, v26, 0);
  r_outT->v = _mm_shuffle_ps(v27, v27, 0);
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
  EdgeOctreeQueryCustomClip *v13; 
  float *v14; 
  unsigned __int64 v15; 
  float v16; 
  __m128 v18; 
  __m128 v22; 
  float4 *v29; 
  float *v30; 
  unsigned __int64 v31; 
  float v32; 
  __m128 v34; 
  __m128 v38; 
  float v45; 
  __m128 v47; 
  __int64 v50; 
  __int64 v51; 
  __m128 v53; 
  __m128 type; 
  __m128 v55; 

  v11 = numTrueClipPlanes + numFalseClipPlanes;
  type.m128_u64[0] = (unsigned __int64)testFunc;
  v55.m128_u64[0] = (unsigned __int64)falseClipPlaneNormals;
  if ( numTrueClipPlanes + numFalseClipPlanes > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 267, ASSERT_TYPE_ASSERT, "( (numTrueClipPlanes + numFalseClipPlanes) ) <= ( ms_maxCustomPlanes )", "%s <= %s\n\t%i, %i", "(numTrueClipPlanes + numFalseClipPlanes)", "ms_maxCustomPlanes", numFalseClipPlanes + numTrueClipPlanes, 4) )
    __debugbreak();
  if ( numTrueClipPlanes )
  {
    if ( numTrueClipPlanes != 2 )
    {
      LODWORD(v51) = 2;
      LODWORD(v50) = numTrueClipPlanes;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 272, ASSERT_TYPE_ASSERT, "( numTrueClipPlanes ) == ( 2 )", "%s == %s\n\t%i, %i", "numTrueClipPlanes", "2", v50, v51) )
        __debugbreak();
    }
  }
  if ( numFalseClipPlanes )
  {
    if ( numFalseClipPlanes != 2 )
    {
      LODWORD(v51) = 2;
      LODWORD(v50) = numFalseClipPlanes;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 276, ASSERT_TYPE_ASSERT, "( numFalseClipPlanes ) == ( 2 )", "%s == %s\n\t%i, %i", "numFalseClipPlanes", "2", v50, v51) )
        __debugbreak();
    }
  }
  v12 = (bool (__fastcall *)(const float4 *, const float4 *))type.m128_u64[0];
  if ( !type.m128_u64[0] && v11 != 2 )
  {
    LODWORD(v51) = 2;
    LODWORD(v50) = numFalseClipPlanes + numTrueClipPlanes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 280, ASSERT_TYPE_ASSERT, "( numTrueClipPlanes + numFalseClipPlanes ) == ( 2 )", "%s == %s\n\t%i, %i", "numTrueClipPlanes + numFalseClipPlanes", "2", v50, v51) )
      __debugbreak();
    v12 = NULL;
  }
  if ( numTrueClipPlanes )
  {
    v13 = this;
    v14 = &trueClipPlaneNormals->v[2];
    v15 = numTrueClipPlanes;
    do
    {
      v16 = *(v14 - 2);
      v13 = (EdgeOctreeQueryCustomClip *)((char *)v13 + 16);
      type.m128_i32[3] = 0;
      v14 += 3;
      v53.m128_i32[3] = 0;
      v18 = type;
      v18.m128_f32[0] = v16;
      _XMM4 = v18;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
        vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
      }
      v22 = v53;
      v22.m128_f32[0] = *(float *)((char *)v14 + (char *)trueClipPlanePoints - (char *)trueClipPlaneNormals - 20);
      _XMM3 = v22;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r14+rax-10h], 10h
        vinsertps xmm3, xmm3, dword ptr [r14+rax-0Ch], 20h ; ' '
      }
      _XMM0 = _mm128_mul_ps(_XMM3, _XMM4);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      *(__m128 *)&v13[-1].m_numUserClipPlanesTrue = _mm_shuffle_ps(_XMM4, _mm_shuffle_ps(_XMM4, _XMM0, 250), 132);
      type = _XMM4;
      v53 = _XMM3;
      --v15;
    }
    while ( v15 );
  }
  if ( numFalseClipPlanes )
  {
    v29 = &this->m_userClipPlanes[numTrueClipPlanes];
    v30 = &falseClipPlaneNormals->v[2];
    v31 = numFalseClipPlanes;
    do
    {
      v32 = *(v30 - 2);
      ++v29;
      v53.m128_i32[3] = 0;
      v30 += 3;
      v55.m128_i32[3] = 0;
      v34 = v53;
      v34.m128_f32[0] = v32;
      _XMM4 = v34;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
        vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
      }
      v38 = v55;
      v38.m128_f32[0] = *(float *)((char *)v30 + (char *)falseClipPlanePoints - (char *)falseClipPlaneNormals - 20);
      _XMM3 = v38;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r15+rax-10h], 10h
        vinsertps xmm3, xmm3, dword ptr [r15+rax-0Ch], 20h ; ' '
      }
      _XMM0 = _mm128_mul_ps(_XMM3, _XMM4);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v29[-1].v = _mm_shuffle_ps(_XMM4, _mm_shuffle_ps(_XMM4, _XMM0, 250), 132);
      v53 = _XMM4;
      v55 = _XMM3;
      --v31;
    }
    while ( v31 );
  }
  this->m_numUserClipPlanes = v11;
  this->m_clipPlaneTestFunc = v12;
  v45 = textAxis->v[0];
  this->m_numUserClipPlanesTrue = numTrueClipPlanes;
  v53.m128_i32[3] = 0;
  v47 = v53;
  v47.m128_f32[0] = v45;
  _XMM3 = v47;
  __asm
  {
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
  }
  this->m_userClipPlaneTestAxis = (float4)_XMM3.v;
  this->m_numUserClipPlanesFalse = numFalseClipPlanes;
}

/*
==============
EdgeOctreeQueryCustomClip::Initialize
==============
*/
void EdgeOctreeQueryCustomClip::Initialize(EdgeOctreeQueryCustomClip *this, unsigned __int64 numClipPlanes, const vec3_t *clipPlanePoints, const vec3_t *clipPlaneNormals)
{
  EdgeOctreeQueryCustomClip *v8; 
  float *v9; 
  signed __int64 v10; 
  unsigned __int64 v11; 
  float v12; 
  __m128 v14; 
  __m128 v18; 
  int v25; 
  int v26; 
  __m128 v27; 
  __m128 v28; 

  if ( numClipPlanes > 4 )
  {
    v26 = 4;
    v25 = numClipPlanes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 249, ASSERT_TYPE_ASSERT, "( numClipPlanes ) <= ( ms_maxCustomPlanes )", "%s <= %s\n\t%i, %i", "numClipPlanes", "ms_maxCustomPlanes", v25, v26) )
      __debugbreak();
  }
  if ( numClipPlanes )
  {
    v8 = this;
    v9 = &clipPlaneNormals->v[2];
    v10 = (char *)clipPlanePoints - (char *)clipPlaneNormals;
    v11 = numClipPlanes;
    do
    {
      v12 = *(v9 - 2);
      v8 = (EdgeOctreeQueryCustomClip *)((char *)v8 + 16);
      v27.m128_i32[3] = 0;
      v9 += 3;
      v28.m128_i32[3] = 0;
      v14 = v27;
      v14.m128_f32[0] = v12;
      _XMM4 = v14;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
        vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
      }
      v18 = v28;
      v18.m128_f32[0] = *(float *)((char *)v9 + v10 - 20);
      _XMM3 = v18;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsi+rax-10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+rax-0Ch], 20h ; ' '
      }
      _XMM0 = _mm128_mul_ps(_XMM3, _XMM4);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      *(__m128 *)&v8[-1].m_numUserClipPlanesTrue = _mm_shuffle_ps(_XMM4, _mm_shuffle_ps(_XMM4, _XMM0, 250), 132);
      v27 = _XMM4;
      v28 = _XMM3;
      --v11;
    }
    while ( v11 );
  }
  this->m_numUserClipPlanes = numClipPlanes;
  this->m_clipPlaneTestFunc = NULL;
  this->m_userClipPlaneTestAxis = 0i64;
  this->m_numUserClipPlanesTrue = 0i64;
  this->m_numUserClipPlanesFalse = 0i64;
}

/*
==============
EdgeOctreeQueryFrustum::Initialize
==============
*/
void EdgeOctreeQueryFrustum::Initialize(EdgeOctreeQueryFrustum *this, const EdgeFrustumQueryShape *shape)
{
  EdgeFrustumQueryShape *p_m_shape; 
  __int64 v3; 
  EdgeFrustumQueryShape *v4; 
  float4 v5; 
  void (**m_nodeBlendFunc)(const float4, const float4, float4 *); 
  __int64 v25; 
  float v26; 
  void (__fastcall *v27)(const float4 *, const float4 *, float4 *); 
  unsigned __int64 i; 
  __m128 v33; 

  p_m_shape = &this->m_shape;
  v3 = 2i64;
  v4 = &this->m_shape;
  do
  {
    v4 = (EdgeFrustumQueryShape *)((char *)v4 + 128);
    v5.v = (__m128)shape->m_planes[0];
    shape = (const EdgeFrustumQueryShape *)((char *)shape + 128);
    v4[-1].m_corners[4] = (float4)v5.v;
    v4[-1].m_corners[5] = shape[-1].m_corners[5];
    v4[-1].m_corners[6] = shape[-1].m_corners[6];
    v4[-1].m_corners[7] = shape[-1].m_corners[7];
    v4[-1].m_nearOrigin = shape[-1].m_nearOrigin;
    v4[-1].m_farOrigin = shape[-1].m_farOrigin;
    v4[-1].m_nearToFarDist = shape[-1].m_nearToFarDist;
    v4[-1].m_forward = shape[-1].m_forward;
    --v3;
  }
  while ( v3 );
  v4->m_planes[0] = shape->m_planes[0];
  v4->m_planes[1] = shape->m_planes[1];
  this->m_minExtent = (float4)g_infinity.v;
  this->m_maxExtent = (float4)g_negativeInfinity.v;
  _XMM0.v = (__m128)this->m_minExtent;
  __asm { vminps  xmm3, xmm0, xmmword ptr [rcx+0D0h] }
  _XMM0.v = (__m128)this->m_maxExtent;
  this->m_minExtent = (float4)_XMM3.v;
  __asm { vmaxps  xmm2, xmm0, xmmword ptr [rcx+0D0h] }
  this->m_maxExtent = (float4)_XMM2.v;
  __asm { vminps  xmm1, xmm3, xmmword ptr [rcx+0E0h] }
  this->m_minExtent = (float4)_XMM1.v;
  __asm { vmaxps  xmm3, xmm2, xmmword ptr [rcx+0E0h] }
  this->m_maxExtent = (float4)_XMM3.v;
  __asm { vminps  xmm2, xmm1, xmmword ptr [rcx+0F0h] }
  this->m_minExtent = (float4)_XMM2.v;
  __asm { vmaxps  xmm1, xmm3, xmmword ptr [rcx+0F0h] }
  this->m_maxExtent = (float4)_XMM1.v;
  __asm { vminps  xmm3, xmm2, xmmword ptr [rcx+100h] }
  this->m_minExtent = (float4)_XMM3.v;
  __asm { vmaxps  xmm2, xmm1, xmmword ptr [rcx+100h] }
  this->m_maxExtent = (float4)_XMM2.v;
  __asm { vminps  xmm1, xmm3, xmmword ptr [rcx+110h] }
  this->m_minExtent = (float4)_XMM1.v;
  __asm { vmaxps  xmm3, xmm2, xmmword ptr [rcx+110h] }
  this->m_maxExtent = (float4)_XMM3.v;
  __asm { vminps  xmm2, xmm1, xmmword ptr [rcx+120h] }
  this->m_minExtent = (float4)_XMM2.v;
  __asm { vmaxps  xmm1, xmm3, xmmword ptr [rcx+120h] }
  this->m_maxExtent = (float4)_XMM1.v;
  __asm { vminps  xmm3, xmm2, xmmword ptr [rcx+130h] }
  this->m_minExtent = (float4)_XMM3.v;
  __asm { vmaxps  xmm2, xmm1, xmmword ptr [rcx+130h] }
  this->m_maxExtent = (float4)_XMM2.v;
  __asm { vminps  xmm0, xmm3, xmmword ptr [rcx+140h] }
  this->m_minExtent = (float4)_XMM0.v;
  __asm { vmaxps  xmm0, xmm2, xmmword ptr [rcx+140h] }
  this->m_maxExtent = (float4)_XMM0.v;
  m_nodeBlendFunc = this->m_nodeBlendFunc;
  v25 = 6i64;
  do
  {
    v26 = *(float *)&_xmm_ff7fffffff7fffffff7fffffff7fffff;
    v27 = Float4Blendxyzw;
    for ( i = 0i64; i < 8; ++i )
    {
      ((void (__fastcall *)(EdgeOctreeQueryFrustum *, const EdgeFrustumQueryShape *, __m128 *))blendFunc[i])(this, shape, &v33);
      _XMM1 = _mm128_mul_ps(p_m_shape->m_planes[0].v, v33);
      __asm
      {
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
      }
      if ( *(float *)&_XMM1 > v26 )
      {
        v27 = (void (__fastcall *)(const float4 *, const float4 *, float4 *))blendFunc[i];
        v26 = *(float *)&_XMM1;
      }
    }
    *m_nodeBlendFunc = (void (*)(const float4, const float4, float4 *))v27;
    p_m_shape = (EdgeFrustumQueryShape *)((char *)p_m_shape + 16);
    ++m_nodeBlendFunc;
    --v25;
  }
  while ( v25 );
}

/*
==============
IntersectThreePlanes
==============
*/
bool IntersectThreePlanes(const float4 *r_planeA, const float4 *r_planeB, const float4 *r_planeC, float4 *r_outCorner)
{
  __m128 v; 
  __m128 v5; 
  bool result; 
  __int128 v9; 
  __int128 v12[4]; 

  v = r_planeB->v;
  v12[1] = (__int128)r_planeA->v;
  v5 = r_planeC->v;
  v12[2] = (__int128)v;
  *(float *)v12 = 0.0;
  *((float *)v12 + 1) = 0.0;
  *((float *)v12 + 2) = 0.0;
  v12[3] = (__int128)v5;
  result = IntersectPlanes((const vec4_t (*)[3])&v12[1], (vec3_t *)v12);
  HIDWORD(v12[0]) = 0;
  v9 = v12[0];
  *(float *)&v9 = *(float *)v12;
  _XMM3 = v9;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsp+78h+var_58+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rsp+78h+var_58+8], 20h
  }
  *r_outCorner = (float4)_XMM3.v;
  return result;
}

/*
==============
EdgeOctreeQueryFrustum::SetAxisBias
==============
*/
void EdgeOctreeQueryFrustum::SetAxisBias(EdgeOctreeQueryFrustum *this, const vec3_t *axis, float bias)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  __int128 v10; 
  __int128 v13; 

  v3 = axis->v[1];
  v4 = axis->v[0];
  v5 = axis->v[2];
  v6 = (float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 815, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis ) )", "(%g, %g, %g) len %g", v4, v3, v5, fsqrt(v6)) )
    __debugbreak();
  if ( bias <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 816, ASSERT_TYPE_ASSERT, "( 0.001f ) < ( bias )", "%s < %s\n\t%g, %g", "EQUAL_EPSILON", "bias", DOUBLE_0_001000000047497451, bias) )
    __debugbreak();
  HIDWORD(v13) = 0;
  v10 = v13;
  *(float *)&v10 = axis->v[0];
  _XMM3 = v10;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
  }
  this->m_userAxis = (float4)_XMM3.v;
  this->m_invAxisBias = 1.0 / bias;
}

/*
==============
EdgeOctreeQueryFrustum::SetDistanceCenterBias
==============
*/
void EdgeOctreeQueryFrustum::SetDistanceCenterBias(EdgeOctreeQueryFrustum *this, float centerBias)
{
  if ( centerBias <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 807, ASSERT_TYPE_ASSERT, "( 0.001f ) < ( centerBias )", "%s < %s\n\t%g, %g", "EQUAL_EPSILON", "centerBias", DOUBLE_0_001000000047497451, centerBias) )
    __debugbreak();
  this->m_centerBias = centerBias;
  this->m_invCenterBias = 1.0 / centerBias;
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
  EdgeOctreeQueryShape *v8; 
  float *v9; 
  signed __int64 v10; 
  unsigned __int64 v11; 
  float v12; 
  __m128 v14; 
  __m128 v18; 
  int v25; 
  int v26; 
  __m128 v27; 
  __m128 v28; 

  if ( numClipPlanes > 4 )
  {
    v26 = 4;
    v25 = numClipPlanes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 249, ASSERT_TYPE_ASSERT, "( numClipPlanes ) <= ( ms_maxCustomPlanes )", "%s <= %s\n\t%i, %i", "numClipPlanes", "ms_maxCustomPlanes", v25, v26) )
      __debugbreak();
  }
  if ( numClipPlanes )
  {
    v8 = this;
    v9 = &clipPlaneNormals->v[2];
    v10 = (char *)clipPlanePoints - (char *)clipPlaneNormals;
    v11 = numClipPlanes;
    do
    {
      v12 = *(v9 - 2);
      v8 = (EdgeOctreeQueryShape *)((char *)v8 + 16);
      v27.m128_i32[3] = 0;
      v9 += 3;
      v28.m128_i32[3] = 0;
      v14 = v27;
      v14.m128_f32[0] = v12;
      _XMM4 = v14;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
        vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
      }
      v18 = v28;
      v18.m128_f32[0] = *(float *)((char *)v9 + v10 - 20);
      _XMM3 = v18;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsi+rax-10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+rax-0Ch], 20h ; ' '
      }
      _XMM0 = _mm128_mul_ps(_XMM3, _XMM4);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      *(__m128 *)&v8[-1].m_customClip.m_numUserClipPlanesTrue = _mm_shuffle_ps(_XMM4, _mm_shuffle_ps(_XMM4, _XMM0, 250), 132);
      v27 = _XMM4;
      v28 = _XMM3;
      --v11;
    }
    while ( v11 );
  }
  this->m_customClip.m_numUserClipPlanes = numClipPlanes;
  this->m_customClip.m_clipPlaneTestFunc = NULL;
  this->m_customClip.m_userClipPlaneTestAxis = 0i64;
  this->m_customClip.m_numUserClipPlanesTrue = 0i64;
  this->m_customClip.m_numUserClipPlanesFalse = 0i64;
}

/*
==============
EdgeFrustumQueryShape::Transform
==============
*/
void EdgeFrustumQueryShape::Transform(EdgeFrustumQueryShape *this, const tmat43_t<vec3_t> *transform)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
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
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v29; 
  __m128 v33; 
  __m128 v37; 
  __m128 v41; 
  __m128 v44; 
  __int64 v46; 
  __m128 v48; 
  __m128 v49; 
  __m128 v54; 
  __m128 v55; 
  float4 *v60; 
  __int64 v61; 
  __m128 v; 
  __m128 v63; 
  __m128 v64; 
  float4 v65; 
  float4 v66; 
  __int128 v67; 
  __m128 v68; 
  __m128 v69; 
  __m128 v70; 

  v4 = transform->m[0].v[1];
  v5 = transform->m[0].v[0];
  v6 = transform->m[0].v[2];
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 482, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( transform[0] ) )", "(%g, %g, %g) len %g", v5, v4, v6, fsqrt(v7)) )
    __debugbreak();
  v8 = transform->m[1].v[1];
  v9 = transform->m[1].v[0];
  v10 = transform->m[1].v[2];
  v11 = (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 483, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( transform[1] ) )", "(%g, %g, %g) len %g", v9, v8, v10, fsqrt(v11)) )
    __debugbreak();
  v12 = transform->m[2].v[1];
  v13 = transform->m[2].v[0];
  v14 = transform->m[2].v[2];
  v15 = (float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 484, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( transform[2] ) )", "(%g, %g, %g) len %g", v13, v12, v14, fsqrt(v15)) )
    __debugbreak();
  v16 = transform->m[1].v[1];
  v17 = transform->m[0].v[1];
  v18 = transform->m[1].v[0];
  v19 = transform->m[1].v[2];
  v20 = transform->m[0].v[2];
  v21 = (float)((float)(transform->m[0].v[0] * v18) + (float)(v17 * v16)) + (float)(v20 * v19);
  if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 485, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( transform[0], transform[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", transform->m[0].v[0], v17, v20, v18, v16, v19, v21) )
    __debugbreak();
  v22 = transform->m[2].v[1];
  v23 = transform->m[0].v[1];
  v24 = transform->m[2].v[0];
  v25 = transform->m[2].v[2];
  v26 = transform->m[0].v[2];
  v27 = (float)((float)(v24 * transform->m[0].v[0]) + (float)(v22 * v23)) + (float)(v25 * v26);
  if ( COERCE_FLOAT(LODWORD(v27) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.cpp", 486, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( transform[0], transform[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", transform->m[0].v[0], v23, v26, v24, v22, v25, v27) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "EdgeOctreeQueryFrustum::Shape::Transform");
  HIDWORD(v67) = 0;
  v29 = v67;
  *(float *)&v29 = transform->m[0].v[0];
  _XMM6 = v29;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rbx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+8], 20h ; ' '
  }
  v68 = _XMM6;
  v68.m128_i32[3] = 0;
  v33 = v68;
  v33.m128_f32[0] = transform->m[1].v[0];
  _XMM7 = v33;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [rbx+10h], 10h
    vinsertps xmm7, xmm7, dword ptr [rbx+14h], 20h ; ' '
  }
  v69 = _XMM7;
  v69.m128_i32[3] = 0;
  v37 = v69;
  v37.m128_f32[0] = transform->m[2].v[0];
  _XMM8 = v37;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rbx+1Ch], 10h
    vinsertps xmm8, xmm8, dword ptr [rbx+20h], 20h ; ' '
  }
  v70 = _XMM8;
  v70.m128_i32[3] = 0;
  v41 = v70;
  v41.m128_f32[0] = transform->m[3].v[0];
  _XMM3 = v41;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbx+28h], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+2Ch], 20h ; ' '
  }
  v44 = (__m128)(_XMM3 ^ (_XMM3 ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v);
  _RAX = &this->m_planes[1];
  v46 = 3i64;
  do
  {
    __asm { vbroadcastss xmm0, dword ptr [rax-4] }
    v48 = _mm128_mul_ps(_XMM0, _RAX[-1].v);
    v49 = _mm128_add_ps(_mm128_mul_ps(_XMM6, _mm_shuffle_ps(_RAX[-1].v, _RAX[-1].v, 0)), _mm128_add_ps(_mm128_mul_ps(_XMM7, _mm_shuffle_ps(_RAX[-1].v, _RAX[-1].v, 85)), _mm128_mul_ps(_XMM8, _mm_shuffle_ps(_RAX[-1].v, _RAX[-1].v, 170))));
    _XMM0 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_XMM6, _mm_shuffle_ps(v48, v48, 0)), _mm128_add_ps(_mm128_mul_ps(_XMM7, _mm_shuffle_ps(v48, v48, 85)), _mm128_add_ps(_mm128_mul_ps(_XMM8, _mm_shuffle_ps(v48, v48, 170)), v44))), v49);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    _RAX[-1].v = _mm_shuffle_ps(v49, _mm_shuffle_ps(v49, _XMM0, 250), 132);
    v54 = _mm128_mul_ps(_RAX->v, _mm_shuffle_ps(_RAX->v, _RAX->v, 255));
    v55 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_XMM8, _mm_shuffle_ps(_RAX->v, _RAX->v, 170)), _mm128_mul_ps(_XMM7, _mm_shuffle_ps(_RAX->v, _RAX->v, 85))), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(_RAX->v, _RAX->v, 0)));
    _XMM0 = _mm128_mul_ps(_mm128_add_ps(_mm128_add_ps(_mm128_add_ps(v44, _mm128_mul_ps(_XMM8, _mm_shuffle_ps(v54, v54, 170))), _mm128_mul_ps(_XMM7, _mm_shuffle_ps(v54, v54, 85))), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(v54, v54, 0))), v55);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    _RAX->v = _mm_shuffle_ps(v55, _mm_shuffle_ps(v55, _XMM0, 250), 132);
    _RAX += 2;
    --v46;
  }
  while ( v46 );
  this->m_forward.v = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_XMM8, _mm_shuffle_ps(this->m_forward.v, this->m_forward.v, 170)), _mm128_mul_ps(_XMM7, _mm_shuffle_ps(this->m_forward.v, this->m_forward.v, 85))), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(this->m_forward.v, this->m_forward.v, 0)));
  v60 = &this->m_corners[1];
  v61 = 2i64;
  do
  {
    v = v60[-1].v;
    v60[-1].v = _mm128_add_ps(_mm128_mul_ps(_XMM6, _mm_shuffle_ps(v, v, 0)), _mm128_add_ps(_mm128_mul_ps(_XMM7, _mm_shuffle_ps(v, v, 85)), _mm128_add_ps(_mm128_mul_ps(_XMM8, _mm_shuffle_ps(v, v, 170)), v44)));
    v60->v = _mm128_add_ps(_mm128_mul_ps(_XMM6, _mm_shuffle_ps(v60->v, v60->v, 0)), _mm128_add_ps(_mm128_mul_ps(_XMM7, _mm_shuffle_ps(v60->v, v60->v, 85)), _mm128_add_ps(_mm128_mul_ps(_XMM8, _mm_shuffle_ps(v60->v, v60->v, 170)), v44)));
    v63 = v60[1].v;
    v60[1].v = _mm128_add_ps(_mm128_mul_ps(_XMM6, _mm_shuffle_ps(v63, v63, 0)), _mm128_add_ps(_mm128_mul_ps(_XMM7, _mm_shuffle_ps(v63, v63, 85)), _mm128_add_ps(_mm128_mul_ps(_XMM8, _mm_shuffle_ps(v63, v63, 170)), v44)));
    v64 = v60[2].v;
    v60[2].v = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(v44, _mm128_mul_ps(_XMM8, _mm_shuffle_ps(v64, v64, 170))), _mm128_mul_ps(_XMM7, _mm_shuffle_ps(v64, v64, 85))), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(v64, v64, 0)));
    v60 += 4;
    --v61;
  }
  while ( v61 );
  v65.v = (__m128)this->m_nearOrigin;
  this->m_nearOrigin.v = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(v44, _mm128_mul_ps(_XMM8, _mm_shuffle_ps(v65.v, v65.v, 170))), _mm128_mul_ps(_XMM7, _mm_shuffle_ps(v65.v, v65.v, 85))), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(v65.v, v65.v, 0)));
  v66.v = (__m128)this->m_farOrigin;
  this->m_farOrigin.v = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(v44, _mm128_mul_ps(_XMM8, _mm_shuffle_ps(v66.v, v66.v, 170))), _mm128_mul_ps(_XMM7, _mm_shuffle_ps(v66.v, v66.v, 85))), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(v66.v, v66.v, 0)));
  Sys_ProfEndNamedEvent();
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

