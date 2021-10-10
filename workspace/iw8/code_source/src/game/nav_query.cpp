/*
==============
Nav_GetKindaRandomReachablePoints
==============
*/

int __fastcall Nav_GetKindaRandomReachablePoints(nav_space_s *pSpace, const vec3_t *origin, float radius, int layer, const bfx::PathSpec *pathSpec, int numPoints, vec3_t *outPoints)
{
  return ?Nav_GetKindaRandomReachablePoints@@YAHPEAUnav_space_s@@AEBTvec3_t@@MHAEBVPathSpec@bfx@@HPEAT2@@Z(pSpace, origin, radius, layer, pathSpec, numPoints, outPoints);
}

/*
==============
Nav3D_GetClosestVolume
==============
*/

bool __fastcall Nav3D_GetClosestVolume(nav_space_s *pSpace, const vec3_t *origin, const bfx::Path3DSpec *pPathSpec, bfx::VolumeHandle *pClosestVolume)
{
  return ?Nav3D_GetClosestVolume@@YA_NPEAUnav_space_s@@AEBTvec3_t@@PEBVPath3DSpec@bfx@@PEAVVolumeHandle@4@@Z(pSpace, origin, pPathSpec, pClosestVolume);
}

/*
==============
Nav_IsPointOnMesh
==============
*/

bool __fastcall Nav_IsPointOnMesh(nav_space_s *pSpace, const vec3_t *pos, AINavLayer layer)
{
  return ?Nav_IsPointOnMesh@@YA_NPEAUnav_space_s@@AEBTvec3_t@@W4AINavLayer@@@Z(pSpace, pos, layer);
}

/*
==============
Nav_IsPointOnMeshCustom
==============
*/

bool __fastcall Nav_IsPointOnMeshCustom(nav_space_s *pSpace, const vec3_t *pos, AINavLayer layer, const bfx::PathSpec *pPathSpec, vec3_t *outSnappedPos)
{
  return ?Nav_IsPointOnMeshCustom@@YA_NPEAUnav_space_s@@AEBTvec3_t@@W4AINavLayer@@PEBVPathSpec@bfx@@AEAT2@@Z(pSpace, pos, layer, pPathSpec, outSnappedPos);
}

/*
==============
Nav_FindPath3D
==============
*/

bfx::PolylinePath3DRCPtr *__fastcall Nav_FindPath3D(bfx::PolylinePath3DRCPtr *result, const vec3_t *startPos, const vec3_t *endPos)
{
  return ?Nav_FindPath3D@@YA?AVPolylinePath3DRCPtr@bfx@@AEBTvec3_t@@0@Z(result, startPos, endPos);
}

/*
==============
Nav3D_GetClosestReachablePos
==============
*/

bool __fastcall Nav3D_GetClosestReachablePos(const bfx::VolumeHandle startVolume, const vec3_t *origin, const bfx::Path3DSpec *pPathSpec, vec3_t *outClosestPos)
{
  return ?Nav3D_GetClosestReachablePos@@YA_NVVolumeHandle@bfx@@AEBTvec3_t@@PEBVPath3DSpec@2@AEAT3@@Z(startVolume, origin, pPathSpec, outClosestPos);
}

/*
==============
Nav_FindFirstNCornersOnPath
==============
*/

int __fastcall Nav_FindFirstNCornersOnPath(nav_space_s *pSpace, const vec3_t *startPos, bfx::AreaHandle *hStartArea, const vec3_t *goalPos, bfx::AreaHandle *hGoalArea, AINavLayer layer, const bfx::PathSpec *pPathSpec, int numCorners, vec3_t *cornerArray)
{
  return ?Nav_FindFirstNCornersOnPath@@YAHPEAUnav_space_s@@AEBTvec3_t@@VAreaHandle@bfx@@12W4AINavLayer@@PEBVPathSpec@4@HPEAT2@@Z(pSpace, startPos, hStartArea, goalPos, hGoalArea, layer, pPathSpec, numCorners, cornerArray);
}

/*
==============
Nav_IsPointInRepulsorBadplace
==============
*/

bool __fastcall Nav_IsPointInRepulsorBadplace(const vec3_t *pos, int usageFlags, int ignoreEntNum, int ignoreEntNum2)
{
  return ?Nav_IsPointInRepulsorBadplace@@YA_NAEBTvec3_t@@HHH@Z(pos, usageFlags, ignoreEntNum, ignoreEntNum2);
}

/*
==============
Nav_CheckBoxFit
==============
*/

bool __fastcall Nav_CheckBoxFit(const vec3_t *centerPoint, const vec4_t *qRot, const float length, const float width, const float height, AINavLayer layer, const bfx::PathSpec *pathSpec, bfx::SpaceHandle *spaceHandle)
{
  return ?Nav_CheckBoxFit@@YA_NAEBTvec3_t@@AEBTvec4_t@@MMMW4AINavLayer@@AEBVPathSpec@bfx@@AEAVSpaceHandle@5@@Z(centerPoint, qRot, length, width, height, layer, pathSpec, spaceHandle);
}

/*
==============
Nav3D_IsStraightLineReachable
==============
*/

bool __fastcall Nav3D_IsStraightLineReachable(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, const bfx::Path3DSpec *pPathSpec)
{
  return ?Nav3D_IsStraightLineReachable@@YA_NPEAUnav_space_s@@AEBTvec3_t@@1PEBVPath3DSpec@bfx@@@Z(pSpace, startPos, endPos, pPathSpec);
}

/*
==============
Nav_FindPath3DCustom
==============
*/

bfx::PolylinePath3DRCPtr *__fastcall Nav_FindPath3DCustom(bfx::PolylinePath3DRCPtr *result, nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, unsigned int volumeUsageFlags, unsigned int applyPenaltyFlags, float maxSearchDist)
{
  return ?Nav_FindPath3DCustom@@YA?AVPolylinePath3DRCPtr@bfx@@PEAUnav_space_s@@AEBTvec3_t@@1IIM@Z(result, pSpace, startPos, endPos, volumeUsageFlags, applyPenaltyFlags, maxSearchDist);
}

/*
==============
Nav_IsStraightLineReachable
==============
*/

bool __fastcall Nav_IsStraightLineReachable(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, AINavLayer layer, const bfx::PathSpec *pPathSpec)
{
  return ?Nav_IsStraightLineReachable@@YA_NPEAUnav_space_s@@AEBTvec3_t@@1W4AINavLayer@@PEBVPathSpec@bfx@@@Z(pSpace, startPos, endPos, layer, pPathSpec);
}

/*
==============
Nav_GetPointOnPath
==============
*/

void __fastcall Nav_GetPointOnPath(const bfx::PolylinePathRCPtr path, int pointIdx, vec3_t *outPoint)
{
  ?Nav_GetPointOnPath@@YAXVPolylinePathRCPtr@bfx@@HAEATvec3_t@@@Z(path, pointIdx, outPoint);
}

/*
==============
Nav_Trace3D
==============
*/

bool __fastcall Nav_Trace3D(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, const bfx::Path3DSpec *pathSpec, nav_probe_results_3D_s *pOutResults)
{
  return ?Nav_Trace3D@@YA_NPEAUnav_space_s@@AEBTvec3_t@@1PEBVPath3DSpec@bfx@@PEAUnav_probe_results_3D_s@@@Z(pSpace, startPos, endPos, pathSpec, pOutResults);
}

/*
==============
Nav_FindPathCustom
==============
*/

bfx::PolylinePathRCPtr *__fastcall Nav_FindPathCustom(bfx::PolylinePathRCPtr *result, nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *goalPos, unsigned int layer, unsigned int areaUsageFlags, unsigned int linkUsageFlags, unsigned int obstacleBlockageFlags)
{
  return ?Nav_FindPathCustom@@YA?AVPolylinePathRCPtr@bfx@@PEAUnav_space_s@@AEBTvec3_t@@1IIII@Z(result, pSpace, startPos, goalPos, layer, areaUsageFlags, linkUsageFlags, obstacleBlockageFlags);
}

/*
==============
Nav_GetModifierLocationOnPath
==============
*/

bool __fastcall Nav_GetModifierLocationOnPath(const bfx::PolylinePathRCPtr *path, unsigned int flags, int curSegment, float minCheckDist, float maxCheckDist, vec3_t *outStartPoint, vec3_t *outEndPoint)
{
  return ?Nav_GetModifierLocationOnPath@@YA_NAEBVPolylinePathRCPtr@bfx@@IHMMAEATvec3_t@@1@Z(path, flags, curSegment, minCheckDist, maxCheckDist, outStartPoint, outEndPoint);
}

/*
==============
Nav_Simplify3DPath
==============
*/

int __fastcall Nav_Simplify3DPath(nav_space_s *pSpace, const vec3_t *startPt, const bfx::PolylinePath3DRCPtr path, int maxNumPoints, vec3_t *outPath)
{
  return ?Nav_Simplify3DPath@@YAHPEAUnav_space_s@@AEBTvec3_t@@VPolylinePath3DRCPtr@bfx@@HPEAT2@@Z(pSpace, startPt, path, maxNumPoints, outPath);
}

/*
==============
Nav_GetPointOn3DPath
==============
*/

void __fastcall Nav_GetPointOn3DPath(const bfx::PolylinePath3DRCPtr path, int pointIdx, vec3_t *outPoint)
{
  ?Nav_GetPointOn3DPath@@YAXVPolylinePath3DRCPtr@bfx@@HAEATvec3_t@@@Z(path, pointIdx, outPoint);
}

/*
==============
Nav_Trace
==============
*/

bool __fastcall Nav_Trace(const vec3_t *startPos, const bfx::AreaHandle *hStartArea, const vec3_t *endPos, const bfx::PathSpec *pathSpec)
{
  return ?Nav_Trace@@YA_NAEBTvec3_t@@AEBVAreaHandle@bfx@@0PEBVPathSpec@3@@Z(startPos, hStartArea, endPos, pathSpec);
}

/*
==============
Nav_Trace
==============
*/

bool __fastcall Nav_Trace(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, AINavLayer layer, const bfx::PathSpec *pathSpec)
{
  return ?Nav_Trace@@YA_NPEAUnav_space_s@@AEBTvec3_t@@1W4AINavLayer@@PEBVPathSpec@bfx@@@Z(pSpace, startPos, endPos, layer, pathSpec);
}

/*
==============
Nav_Simplify3DPath
==============
*/

int __fastcall Nav_Simplify3DPath(nav_space_s *pSpace, const vec3_t *startPt, const vec3_t *sourcePath, int segmentCount, int maxNumPoints, vec3_t *outPath)
{
  return ?Nav_Simplify3DPath@@YAHPEAUnav_space_s@@AEBTvec3_t@@PEBT2@HHPEAT2@@Z(pSpace, startPt, sourcePath, segmentCount, maxNumPoints, outPath);
}

/*
==============
Nav3D_IsPointOnMesh
==============
*/

bool __fastcall Nav3D_IsPointOnMesh(nav_space_s *pSpace, const vec3_t *testPos, const bfx::Path3DSpec *pPathSpec)
{
  return ?Nav3D_IsPointOnMesh@@YA_NPEAUnav_space_s@@AEBTvec3_t@@PEBVPath3DSpec@bfx@@@Z(pSpace, testPos, pPathSpec);
}

/*
==============
Nav_DrawPolyLinePath
==============
*/

void __fastcall Nav_DrawPolyLinePath(bfx::PolylinePathRCPtr path)
{
  ?Nav_DrawPolyLinePath@@YAXVPolylinePathRCPtr@bfx@@@Z(path);
}

/*
==============
Nav_Trace
==============
*/

bool __fastcall Nav_Trace(const vec3_t *startPos, const bfx::AreaHandle *hStartArea, const vec3_t *endPos, const bfx::PathSpec *pathSpec, nav_probe_results_s *pOutResults)
{
  return ?Nav_Trace@@YA_NAEBTvec3_t@@AEBVAreaHandle@bfx@@0PEBVPathSpec@3@PEAUnav_probe_results_s@@@Z(startPos, hStartArea, endPos, pathSpec, pOutResults);
}

/*
==============
Nav_GetLargestRepulsorBadplaceRadius
==============
*/

double __fastcall Nav_GetLargestRepulsorBadplaceRadius()
{
  double result; 

  *(float *)&result = ?Nav_GetLargestRepulsorBadplaceRadius@@YAMXZ();
  return result;
}

/*
==============
Nav_IsPointOnMeshCustomWithHint
==============
*/

bool __fastcall Nav_IsPointOnMeshCustomWithHint(nav_space_s *pSpace, const vec3_t *pos, AINavLayer layer, const bfx::PathSpec *pPathSpec, vec3_t *outSnappedPos, const bfx::AreaHandle *hHintArea, bfx::AreaHandle *outAreaHandle)
{
  return ?Nav_IsPointOnMeshCustomWithHint@@YA_NPEAUnav_space_s@@AEBTvec3_t@@W4AINavLayer@@PEBVPathSpec@bfx@@AEAT2@AEBVAreaHandle@5@PEAV65@@Z(pSpace, pos, layer, pPathSpec, outSnappedPos, hHintArea, outAreaHandle);
}

/*
==============
Nav_IsPointOnMeshCustom
==============
*/

bool __fastcall Nav_IsPointOnMeshCustom(nav_space_s *pSpace, const vec3_t *pos, AINavLayer layer, const bfx::PathSpec *pPathSpec, vec3_t *outSnappedPos, bfx::AreaHandle *outAreaHandle)
{
  return ?Nav_IsPointOnMeshCustom@@YA_NPEAUnav_space_s@@AEBTvec3_t@@W4AINavLayer@@PEBVPathSpec@bfx@@AEAT2@PEAVAreaHandle@5@@Z(pSpace, pos, layer, pPathSpec, outSnappedPos, outAreaHandle);
}

/*
==============
Nav3D_GetClosestPointOnMesh
==============
*/

bool __fastcall Nav3D_GetClosestPointOnMesh(nav_space_s *pSpace, const bfx::Path3DSpec *pathSpec, const vec3_t *pos, vec3_t *outClosestPos)
{
  return ?Nav3D_GetClosestPointOnMesh@@YA_NPEAUnav_space_s@@PEBVPath3DSpec@bfx@@AEBTvec3_t@@AEAT4@@Z(pSpace, pathSpec, pos, outClosestPos);
}

/*
==============
Nav_SimplifyPath
==============
*/

int __fastcall Nav_SimplifyPath(nav_space_s *pSpace, const vec3_t *startPt, const bfx::PolylinePathRCPtr path, AINavLayer layer, const bfx::PathSpec *pPathSpec, int maxNumPoints, vec3_t *outPath)
{
  return ?Nav_SimplifyPath@@YAHPEAUnav_space_s@@AEBTvec3_t@@VPolylinePathRCPtr@bfx@@W4AINavLayer@@PEBVPathSpec@4@HPEAT2@@Z(pSpace, startPt, path, layer, pPathSpec, maxNumPoints, outPath);
}

/*
==============
Nav_FindPath
==============
*/

bfx::PolylinePathRCPtr *__fastcall Nav_FindPath(bfx::PolylinePathRCPtr *result, nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *goalPos, unsigned int layer)
{
  return ?Nav_FindPath@@YA?AVPolylinePathRCPtr@bfx@@PEAUnav_space_s@@AEBTvec3_t@@1I@Z(result, pSpace, startPos, goalPos, layer);
}

/*
==============
Nav_IsStraightLineReachable
==============
*/

bool __fastcall Nav_IsStraightLineReachable(const vec3_t *startPos, const bfx::AreaHandle *hStartArea, const vec3_t *endPos, const bfx::AreaHandle *hEndArea, const bfx::PathSpec *pPathSpec)
{
  return ?Nav_IsStraightLineReachable@@YA_NAEBTvec3_t@@AEBVAreaHandle@bfx@@01PEBVPathSpec@3@@Z(startPos, hStartArea, endPos, hEndArea, pPathSpec);
}

/*
==============
Nav_GetRandomReachablePoints
==============
*/

bool __fastcall Nav_GetRandomReachablePoints(nav_space_s *pSpace, const vec3_t *origin, float radius, int layer, const bfx::PathSpec *pathSpec, int numPoints, vec3_t *outPoints)
{
  return ?Nav_GetRandomReachablePoints@@YA_NPEAUnav_space_s@@AEBTvec3_t@@MHAEBVPathSpec@bfx@@HPEAT2@@Z(pSpace, origin, radius, layer, pathSpec, numPoints, outPoints);
}

/*
==============
Nav_Trace3D
==============
*/

bool __fastcall Nav_Trace3D(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos)
{
  return ?Nav_Trace3D@@YA_NPEAUnav_space_s@@AEBTvec3_t@@1@Z(pSpace, startPos, endPos);
}

/*
==============
Nav3D_GetClosestPointInsideVolume
==============
*/

void __fastcall Nav3D_GetClosestPointInsideVolume(const vec3_t *testPos, const bfx::VolumeHandle hVolume, vec3_t *outClosestPos)
{
  ?Nav3D_GetClosestPointInsideVolume@@YAXAEBTvec3_t@@VVolumeHandle@bfx@@AEAT1@@Z(testPos, hVolume, outClosestPos);
}

/*
==============
Nav_Trace
==============
*/

bool __fastcall Nav_Trace(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, AINavLayer layer, const bfx::PathSpec *pathSpec, nav_probe_results_s *pOutResults)
{
  return ?Nav_Trace@@YA_NPEAUnav_space_s@@AEBTvec3_t@@1W4AINavLayer@@PEBVPathSpec@bfx@@PEAUnav_probe_results_s@@@Z(pSpace, startPos, endPos, layer, pathSpec, pOutResults);
}

/*
==============
Nav3D_GetClosestReachableVolume
==============
*/

bool __fastcall Nav3D_GetClosestReachableVolume(const bfx::VolumeHandle startVolume, const vec3_t *origin, const bfx::Path3DSpec *pPathSpec, bfx::VolumeHandle *pClosestVolume)
{
  return ?Nav3D_GetClosestReachableVolume@@YA_NVVolumeHandle@bfx@@AEBTvec3_t@@PEBVPath3DSpec@2@PEAV12@@Z(startVolume, origin, pPathSpec, pClosestVolume);
}

/*
==============
Nav_Trace3DAllowEdgeHit
==============
*/

bool __fastcall Nav_Trace3DAllowEdgeHit(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, const bfx::Path3DSpec *pathSpec, nav_probe_results_3D_s *pOutResults)
{
  return ?Nav_Trace3DAllowEdgeHit@@YA_NPEAUnav_space_s@@AEBTvec3_t@@1PEBVPath3DSpec@bfx@@PEAUnav_probe_results_3D_s@@@Z(pSpace, startPos, endPos, pathSpec, pOutResults);
}

/*
==============
AdjustPtToWithinRadiusSq
==============
*/
char AdjustPtToWithinRadiusSq(const vec3_t *pt, const vec3_t *origin, const vec3_t *centroid, float radiusSq, vec3_t *outPoint)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v23; 

  v5 = centroid->v[2];
  v6 = centroid->v[1];
  v7 = pt->v[0] - centroid->v[0];
  v8 = pt->v[2] - v5;
  v9 = v6 - origin->v[1];
  v10 = v5 - origin->v[2];
  v11 = centroid->v[0] - origin->v[0];
  v13 = LODWORD(pt->v[1]);
  *(float *)&v13 = pt->v[1] - v6;
  v12 = v13;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v7 * v7)) + (float)(v8 * v8));
  _XMM1 = v13;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
  }
  v17 = v7 * (float)(1.0 / *(float *)&_XMM0);
  v23 = v12;
  v18 = *(float *)&v12 * (float)(1.0 / *(float *)&_XMM0);
  v19 = v8 * (float)(1.0 / *(float *)&_XMM0);
  v20 = (float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19);
  v21 = (float)((float)(v18 * v9) + (float)(v17 * v11)) + (float)(v19 * v10);
  LODWORD(v12) = fsqrt((float)((float)(v21 * v21) * 4.0) - (float)((float)((float)((float)((float)((float)(v9 * v9) + (float)(v11 * v11)) + (float)(v10 * v10)) - radiusSq) * v20) * 4.0));
  *(float *)&v23 = (float)((float)((float)(v21 * -2.0) - *(float *)&v12) * 0.5) * (float)(1.0 / v20);
  _XMM2 = v23;
  if ( (float)((float)((float)(*(float *)&v12 * 0.5) - v21) * (float)(1.0 / v20)) <= 0.0 && *(float *)&v23 <= 0.0 )
    return 0;
  __asm
  {
    vmaxss  xmm0, xmm2, xmm6
    vminss  xmm3, xmm0, [rsp+0B8h+var_B8]
  }
  outPoint->v[0] = (float)(*(float *)&_XMM3 * v17) + centroid->v[0];
  outPoint->v[1] = (float)(*(float *)&_XMM3 * v18) + centroid->v[1];
  outPoint->v[2] = (float)(*(float *)&_XMM3 * v19) + centroid->v[2];
  return 1;
}

/*
==============
GetRandomPointsInTriangles
==============
*/
void GetRandomPointsInTriangles(Triangle *triangles, int numTriangles, float totalArea, vec3_t *outPoints, int numPoints)
{
  __int64 v5; 
  __int64 v7; 
  float v8; 
  float *v9; 
  __int128 v10; 
  double v11; 
  __int64 v12; 
  Triangle *v13; 
  __int128 v14; 
  double v15; 
  float v16; 
  double v17; 
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
  vec3_t point; 

  v5 = numPoints;
  v7 = numTriangles;
  v8 = totalArea;
  if ( numPoints > 0 )
  {
    v9 = &outPoints->v[2];
    do
    {
      v10 = 0i64;
      v11 = G_random();
      v12 = 0i64;
      if ( v7 > 0 )
      {
        v13 = triangles;
        while ( 1 )
        {
          v14 = v10;
          *(float *)&v14 = *(float *)&v10 + (float)((float)(1.0 / v8) * v13->m_area);
          v10 = v14;
          if ( *(float *)&v14 >= *(float *)&v11 )
            break;
          ++v12;
          ++v13;
          if ( v12 >= v7 )
            goto LABEL_13;
        }
        v15 = G_random();
        v16 = *(float *)&v15;
        v17 = G_random();
        v18 = v13->m_vert[0].v[1];
        v19 = v13->m_vert[0].v[2];
        v20 = v13->m_vert[1].v[0] - v13->m_vert[0].v[0];
        v21 = v13->m_vert[1].v[1] - v18;
        v22 = v13->m_vert[1].v[2] - v19;
        v23 = v13->m_vert[2].v[1] - v18;
        v24 = v13->m_vert[2].v[0] - v13->m_vert[0].v[0];
        v25 = (float)((float)(v20 * v16) + (float)(v24 * *(float *)&v17)) + v13->m_vert[0].v[0];
        v26 = (float)((float)(v21 * v16) + (float)(v23 * *(float *)&v17)) + v18;
        v29 = v13->m_vert[2].v[2] - v19;
        v27 = (float)((float)(v22 * v16) + (float)(v29 * *(float *)&v17)) + v19;
        point.v[2] = v27;
        v28 = v23;
        point.v[0] = v25;
        point.v[1] = v26;
        if ( !Nav_PointWithinTriangle(v13, &point) )
        {
          v25 = (float)((float)((float)(1.0 - v16) * v20) + (float)((float)(1.0 - *(float *)&v17) * v24)) + v13->m_vert[0].v[0];
          v26 = (float)((float)((float)(1.0 - v16) * v21) + (float)((float)(1.0 - *(float *)&v17) * v28)) + v13->m_vert[0].v[1];
          v27 = (float)((float)((float)(1.0 - v16) * v22) + (float)((float)(1.0 - *(float *)&v17) * v29)) + v13->m_vert[0].v[2];
          point.v[2] = v27;
          point.v[0] = v25;
          point.v[1] = v26;
          if ( !Nav_PointWithinTriangle(v13, &point) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 829, ASSERT_TYPE_ASSERT, "( Nav_PointWithinTriangle( pTri, sum ) )", (const char *)&queryFormat, "Nav_PointWithinTriangle( pTri, sum )") )
            __debugbreak();
        }
        *(v9 - 1) = v26;
        v8 = totalArea;
        *(v9 - 2) = v25;
        *v9 = v27;
      }
LABEL_13:
      v9 += 3;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
Nav3D_GetClosestPointInsideVolume
==============
*/
void Nav3D_GetClosestPointInsideVolume(const vec3_t *testPos, const bfx::VolumeHandle hVolume, vec3_t *outClosestPos)
{
  bfx::Vector3 *ClosestPos; 
  __m128 v6; 
  vec3_t v7; 
  bfx::Vector3 v8; 

  v7 = *testPos;
  ClosestPos = bfx::VolumeHandle::GetClosestPos((bfx::VolumeHandle *)hVolume.m_pProxy, &v8, (const bfx::Vector3 *)&v7);
  v6 = (__m128)*(unsigned __int64 *)&ClosestPos->m_x;
  v8.m_z = ClosestPos->m_z;
  outClosestPos->v[0] = v6.m128_f32[0];
  outClosestPos->v[1] = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  outClosestPos->v[2] = v8.m_z;
  bfx::VolumeHandle::~VolumeHandle((bfx::VolumeHandle *)hVolume.m_pProxy);
}

/*
==============
Nav3D_GetClosestPointOnMesh
==============
*/
__int64 Nav3D_GetClosestPointOnMesh(nav_space_s *pSpace, const bfx::Path3DSpec *pathSpec, const vec3_t *pos, vec3_t *outClosestPos)
{
  unsigned __int8 v8; 
  bfx::VolumeHandle *v9; 
  bfx::VolumeHandle *v10; 
  bfx::Vector3 *ClosestPos; 
  __m128 v12; 
  bfx::VolumeHandle pClosestVolume; 
  bfx::VolumeHandle v15; 
  __int64 v16; 
  bfx::VolumeHandle *v17; 
  float m_z; 
  bfx::Vector3 posa; 
  bfx::Vector3 result; 

  v16 = -2i64;
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  if ( Nav_MeshLoaded() && Nav3D_GetClosestVolume(pSpace, pos, pathSpec, &pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle(&v15, &pClosestVolume);
    v10 = v9;
    v17 = v9;
    posa = (bfx::Vector3)*pos;
    ClosestPos = bfx::VolumeHandle::GetClosestPos(v9, &result, &posa);
    v12 = (__m128)*(unsigned __int64 *)&ClosestPos->m_x;
    m_z = ClosestPos->m_z;
    outClosestPos->v[0] = v12.m128_f32[0];
    outClosestPos->v[1] = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
    outClosestPos->v[2] = m_z;
    bfx::VolumeHandle::~VolumeHandle(v10);
    v8 = 1;
  }
  else
  {
    outClosestPos->v[0] = pos->v[0];
    outClosestPos->v[1] = pos->v[1];
    outClosestPos->v[2] = pos->v[2];
    v8 = 0;
  }
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return v8;
}

/*
==============
Nav3D_GetClosestReachablePos
==============
*/
char Nav3D_GetClosestReachablePos(const bfx::VolumeHandle startVolume, const vec3_t *origin, const bfx::Path3DSpec *pPathSpec, vec3_t *outClosestPos)
{
  const bfx::VolumeHandle *ClosestReachableVolume; 
  bfx::VolumeHandle result; 
  __int64 v11; 
  bfx::Vector3 pos; 
  bfx::VolumeHandle v13; 

  v11 = -2i64;
  bfx::VolumeHandle::VolumeHandle(&v13);
  pos = (bfx::Vector3)*origin;
  ClosestReachableVolume = bfx::GetClosestReachableVolume(&result, (const bfx::VolumeHandle *)startVolume.m_pProxy, &pos, pPathSpec);
  bfx::VolumeHandle::operator=(&v13, ClosestReachableVolume);
  bfx::VolumeHandle::~VolumeHandle(&result);
  if ( bfx::VolumeHandle::IsValid(&v13) )
  {
    *(bfx::Vector3 *)outClosestPos = pos;
    bfx::VolumeHandle::~VolumeHandle(&v13);
    bfx::VolumeHandle::~VolumeHandle((bfx::VolumeHandle *)startVolume.m_pProxy);
    return 1;
  }
  else
  {
    bfx::VolumeHandle::~VolumeHandle(&v13);
    bfx::VolumeHandle::~VolumeHandle((bfx::VolumeHandle *)startVolume.m_pProxy);
    return 0;
  }
}

/*
==============
Nav3D_GetClosestReachableVolume
==============
*/
_BOOL8 Nav3D_GetClosestReachableVolume(const bfx::VolumeHandle startVolume, const vec3_t *origin, const bfx::Path3DSpec *pPathSpec, bfx::VolumeHandle *pClosestVolume)
{
  const bfx::VolumeHandle *ClosestReachableVolume; 
  bool IsValid; 
  bfx::Vector3 pos; 
  bfx::VolumeHandle result; 

  if ( !pClosestVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1049, ASSERT_TYPE_ASSERT, "(pClosestVolume)", (const char *)&queryFormat, "pClosestVolume", -2i64) )
    __debugbreak();
  pos = (bfx::Vector3)*origin;
  ClosestReachableVolume = bfx::GetClosestReachableVolume(&result, (const bfx::VolumeHandle *)startVolume.m_pProxy, &pos, pPathSpec);
  bfx::VolumeHandle::operator=(pClosestVolume, ClosestReachableVolume);
  bfx::VolumeHandle::~VolumeHandle(&result);
  IsValid = bfx::VolumeHandle::IsValid(pClosestVolume);
  bfx::VolumeHandle::~VolumeHandle((bfx::VolumeHandle *)startVolume.m_pProxy);
  return IsValid;
}

/*
==============
Nav3D_GetClosestVolume
==============
*/
bool Nav3D_GetClosestVolume(nav_space_s *pSpace, const vec3_t *origin, const bfx::Path3DSpec *pPathSpec, bfx::VolumeHandle *pClosestVolume)
{
  const bfx::VolumeHandle *ClosestVolume; 
  bfx::Vector3 pos; 
  bfx::VolumeHandle result; 

  if ( !pClosestVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1058, ASSERT_TYPE_ASSERT, "(pClosestVolume)", (const char *)&queryFormat, "pClosestVolume", -2i64) )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1059, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( Nav_IsRunning() )
  {
    pos = (bfx::Vector3)*origin;
    ClosestVolume = bfx::GetClosestVolume(&result, &pSpace->hSpace, &pos, pPathSpec);
    bfx::VolumeHandle::operator=(pClosestVolume, ClosestVolume);
    bfx::VolumeHandle::~VolumeHandle(&result);
    return bfx::VolumeHandle::IsValid(pClosestVolume);
  }
  else
  {
    bfx::VolumeHandle::Release(pClosestVolume);
    return 0;
  }
}

/*
==============
Nav3D_IsPointOnMesh
==============
*/
_BOOL8 Nav3D_IsPointOnMesh(nav_space_s *pSpace, const vec3_t *testPos, const bfx::Path3DSpec *pPathSpec)
{
  bool IsPosInside; 
  const bfx::VolumeHandle *ClosestVolume; 
  bfx::Vector3 pos; 
  bfx::Vector3 v10; 
  bfx::VolumeHandle v11; 
  bfx::VolumeHandle result; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1084, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1085, ASSERT_TYPE_ASSERT, "(pPathSpec)", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  bfx::VolumeHandle::VolumeHandle(&v11);
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1059, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( Nav_IsRunning() )
  {
    pos = (bfx::Vector3)*testPos;
    ClosestVolume = bfx::GetClosestVolume(&result, &pSpace->hSpace, &pos, pPathSpec);
    bfx::VolumeHandle::operator=(&v11, ClosestVolume);
    bfx::VolumeHandle::~VolumeHandle(&result);
    if ( bfx::VolumeHandle::IsValid(&v11) )
    {
      v10 = (bfx::Vector3)*testPos;
      IsPosInside = bfx::VolumeHandle::IsPosInside(&v11, &v10);
      goto LABEL_13;
    }
  }
  else
  {
    bfx::VolumeHandle::Release(&v11);
  }
  IsPosInside = 0;
LABEL_13:
  bfx::VolumeHandle::~VolumeHandle(&v11);
  return IsPosInside;
}

/*
==============
Nav3D_IsStraightLineReachable
==============
*/
bool Nav3D_IsStraightLineReachable(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, const bfx::Path3DSpec *pPathSpec)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v15; 
  bfx::Vector3 dir; 
  bfx::Vector3 startPosa; 
  bfx::Probe3DResults clientResults; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1114, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1115, ASSERT_TYPE_ASSERT, "(pPathSpec)", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  v8 = startPos->v[0];
  v9 = startPos->v[1];
  v10 = startPos->v[2];
  v11 = endPos->v[0] - startPos->v[0];
  v15 = LODWORD(endPos->v[1]);
  v12 = endPos->v[1] - v9;
  v13 = endPos->v[2] - v10;
  *(float *)&v15 = fsqrt((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13));
  _XMM10 = v15;
  __asm
  {
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
  }
  clientResults.m_collided = 0;
  dir.m_y = v12 * (float)(1.0 / *(float *)&_XMM0);
  startPosa.m_x = v8;
  startPosa.m_y = v9;
  startPosa.m_z = v10;
  dir.m_x = v11 * (float)(1.0 / *(float *)&_XMM0);
  dir.m_z = v13 * (float)(1.0 / *(float *)&_XMM0);
  bfx::NavProbe3D(&pSpace->hSpace, &startPosa, &dir, *(float *)&v15, pPathSpec, &clientResults);
  return !clientResults.m_collided || (float)(*(float *)&v15 - clientResults.m_distTravelled) < 0.003;
}

/*
==============
Nav_CheckBoxFit
==============
*/
__int64 Nav_CheckBoxFit(const vec3_t *centerPoint, const vec4_t *qRot, const float length, const float width, const float height, AINavLayer layer, const bfx::PathSpec *pathSpec, bfx::SpaceHandle *spaceHandle)
{
  bfx::BoxExtents extents; 
  bfx::Vector3 iPos; 
  bfx::BoxFitResults pResultsOut; 
  bfx::Quaternion iRot; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Nav_CheckBoxFit");
  pResultsOut.m_boxFits = 0;
  pResultsOut.m_snappedCenterPos.m_x = 0.0;
  pResultsOut.m_snappedCenterPos.m_y = 0.0;
  pResultsOut.m_snappedCenterPos.m_z = 0.0;
  iPos = (bfx::Vector3)*centerPoint;
  iRot.m_x = qRot->v[0];
  iRot.m_y = qRot->v[1];
  iRot.m_z = qRot->v[2];
  iRot.m_w = qRot->v[3];
  extents.m_length = length;
  extents.m_width = width;
  extents.m_height = height;
  LOBYTE(centerPoint) = bfx::CheckBoxFit(spaceHandle, &iPos, &iRot, &extents, layer, pathSpec, &pResultsOut);
  Sys_ProfEndNamedEvent();
  return (unsigned __int8)centerPoint;
}

/*
==============
Nav_DrawPolyLinePath
==============
*/
void Nav_DrawPolyLinePath(bfx::PolylinePathRCPtr path)
{
  bfx::Color color; 

  color = (bfx::Color)_xmm;
  bfx::PolylinePathRCPtr::Draw((bfx::PolylinePathRCPtr *)path.m_pProxy, &color);
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr((bfx::PolylinePathRCPtr *)path.m_pProxy);
}

/*
==============
Nav_FindFirstNCornersOnPath
==============
*/
__int64 Nav_FindFirstNCornersOnPath(nav_space_s *pSpace, const vec3_t *startPos, bfx::AreaHandle *hStartArea, const vec3_t *goalPos, bfx::AreaHandle *hGoalArea, AINavLayer layer, const bfx::PathSpec *pPathSpec, int numCorners, vec3_t *cornerArray)
{
  const bfx::PathSpec *v13; 
  vec3_t *v14; 
  bfx::AreaHandle *v15; 
  const bfx::MultiPathRCPtr *v16; 
  bfx::PolylinePathRCPtr v17; 
  unsigned int v18; 
  bfx::Vector3 startPosa; 
  bfx::MultiPathGoal ptr; 
  bfx::MultiPathGoalOutput goalOut; 
  __int64 v23; 
  bfx::MultiPathRCPtr v24; 
  bfx::AreaHandle *v25; 
  bfx::MultiPathSpec multiPathSpec; 

  v25 = hStartArea;
  v23 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "FindFirstNCornersOnPath");
  v13 = pPathSpec;
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 542, ASSERT_TYPE_ASSERT, "( pPathSpec )", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  v14 = cornerArray;
  if ( !cornerArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 543, ASSERT_TYPE_ASSERT, "( cornerArray )", (const char *)&queryFormat, "cornerArray") )
    __debugbreak();
  startPosa = (bfx::Vector3)*startPos;
  multiPathSpec.m_generatePaths = 1;
  multiPathSpec.m_maxNumCorners = numCorners;
  `eh vector constructor iterator'(&ptr, 0x28ui64, 1ui64, (void (__fastcall *)(void *))bfx::MultiPathGoal::MultiPathGoal, (void (__fastcall *)(void *))bfx::MultiPathGoal::~MultiPathGoal);
  ptr.m_goalPos.m_x = goalPos->v[0];
  ptr.m_goalPos.m_y = goalPos->v[1];
  ptr.m_goalPos.m_z = goalPos->v[2];
  v15 = hGoalArea;
  bfx::AreaHandle::operator=(&ptr.m_goalArea, hGoalArea);
  bfx::MultiPathRCPtr::MultiPathRCPtr(&v24);
  if ( bfx::AreaHandle::IsValid(hStartArea) )
    v16 = bfx::SearchToMultipleGoals((bfx::MultiPathRCPtr *)&pPathSpec, hStartArea, &startPosa, v13, &multiPathSpec, &ptr, 1);
  else
    v16 = bfx::SearchToMultipleGoals((bfx::MultiPathRCPtr *)&pPathSpec, &pSpace->hSpace, &startPosa, layer, v13, &multiPathSpec, &ptr, 1);
  bfx::MultiPathRCPtr::operator=(&v24, v16);
  bfx::MultiPathRCPtr::~MultiPathRCPtr((bfx::MultiPathRCPtr *)&pPathSpec);
  if ( !bfx::MultiPathRCPtr::IsValid(&v24) )
    goto LABEL_18;
  bfx::MultiPathGoalOutput::MultiPathGoalOutput(&goalOut);
  if ( !bfx::MultiPathRCPtr::GetGoalOutput(&v24, 0, &goalOut) || !goalOut.m_goalReached )
  {
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&goalOut.m_path);
    bfx::AreaHandle::~AreaHandle(&goalOut.m_goalArea);
LABEL_18:
    Sys_ProfEndNamedEvent();
    bfx::MultiPathRCPtr::~MultiPathRCPtr(&v24);
    `eh vector destructor iterator'(&ptr, 0x28ui64, 1ui64, (void (__fastcall *)(void *))bfx::MultiPathGoal::~MultiPathGoal);
    bfx::AreaHandle::~AreaHandle(hStartArea);
    bfx::AreaHandle::~AreaHandle(v15);
    return 0i64;
  }
  if ( !bfx::PolylinePathRCPtr::IsValid(&goalOut.m_path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 570, ASSERT_TYPE_ASSERT, "( pathOutput.m_path.IsValid() )", (const char *)&queryFormat, "pathOutput.m_path.IsValid()") )
    __debugbreak();
  bfx::PolylinePathRCPtr::PolylinePathRCPtr((bfx::PolylinePathRCPtr *)&pPathSpec, &goalOut.m_path);
  v18 = Nav_SimplifyPath(pSpace, startPos, v17, layer, v13, numCorners, v14);
  Sys_ProfEndNamedEvent();
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&goalOut.m_path);
  bfx::AreaHandle::~AreaHandle(&goalOut.m_goalArea);
  bfx::MultiPathRCPtr::~MultiPathRCPtr(&v24);
  `eh vector destructor iterator'(&ptr, 0x28ui64, 1ui64, (void (__fastcall *)(void *))bfx::MultiPathGoal::~MultiPathGoal);
  bfx::AreaHandle::~AreaHandle(hStartArea);
  bfx::AreaHandle::~AreaHandle(v15);
  return v18;
}

/*
==============
Nav_FindPath3D
==============
*/
bfx::PolylinePath3DRCPtr *Nav_FindPath3D(bfx::PolylinePath3DRCPtr *result, const vec3_t *startPos, const vec3_t *endPos)
{
  nav_space_s *DefaultSpace; 
  bfx::Path3DSpec pathSpec; 
  bfx::Vector3 goalPos; 
  bfx::Vector3 startPosa; 

  DefaultSpace = Nav_GetDefaultSpace();
  if ( !DefaultSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 584, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", 0, -2i64) )
    __debugbreak();
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 585, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
  pathSpec.m_maxSearchDist = 0.0;
  startPosa = (bfx::Vector3)*startPos;
  goalPos = (bfx::Vector3)*endPos;
  Profile_Begin(275);
  bfx::CreatePolylinePath3D(result, &DefaultSpace->hSpace, &startPosa, &goalPos, &pathSpec);
  Profile_EndInternal(NULL);
  return result;
}

/*
==============
Nav_FindPath3DCustom
==============
*/
bfx::PolylinePath3DRCPtr *Nav_FindPath3DCustom(bfx::PolylinePath3DRCPtr *result, nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, unsigned int volumeUsageFlags, unsigned int applyPenaltyFlags, float maxSearchDist)
{
  bfx::Path3DSpec pathSpec; 
  bfx::Vector3 goalPos; 
  bfx::Vector3 startPosa; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 584, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", 0, -2i64) )
    __debugbreak();
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 585, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  pathSpec.m_volumeUsageFlags = volumeUsageFlags;
  pathSpec.m_applyPenaltyFlags = applyPenaltyFlags;
  pathSpec.m_maxSearchDist = maxSearchDist;
  startPosa = (bfx::Vector3)*startPos;
  goalPos = (bfx::Vector3)*endPos;
  Profile_Begin(275);
  bfx::CreatePolylinePath3D(result, &pSpace->hSpace, &startPosa, &goalPos, &pathSpec);
  Profile_EndInternal(NULL);
  return result;
}

/*
==============
Nav_FindPath
==============
*/
bfx::PolylinePathRCPtr *Nav_FindPath(bfx::PolylinePathRCPtr *result, nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *goalPos, unsigned int layer)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  bfx::PathCreationOptions options; 
  bfx::Vector3 goalPosa; 
  bfx::Vector3 startPosa; 
  bfx::PathSpec pathSpec; 

  *(_QWORD *)&goalPosa.m_x = result;
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  pathSpec.m_pathSharingPenalty = 0.0;
  pathSpec.m_maxPathSharingPenalty = 0.0;
  pathSpec.m_maxSearchDist = 0.0;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  v9 = startPos->v[1];
  startPosa.m_x = startPos->v[0];
  v10 = startPos->v[2];
  startPosa.m_y = v9;
  v11 = goalPos->v[0];
  pathSpec.m_snapMode = SNAP_CLOSEST;
  startPosa.m_z = v10;
  v12 = goalPos->v[1];
  goalPosa.m_x = v11;
  v13 = goalPos->v[2];
  *(_WORD *)&options.m_performInitialNavProbe = 257;
  options.m_forceFirstPosOntoNavGraph = 0;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  goalPosa.m_y = v12;
  goalPosa.m_z = v13;
  pathSpec.m_linkUsageFlags = 2047;
  bfx::CreatePolylinePath(result, &pSpace->hSpace, &startPosa, &goalPosa, layer, &pathSpec, &options);
  return result;
}

/*
==============
Nav_FindPathCustom
==============
*/
bfx::PolylinePathRCPtr *Nav_FindPathCustom(bfx::PolylinePathRCPtr *result, nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *goalPos, unsigned int layer, unsigned int areaUsageFlags, unsigned int linkUsageFlags, unsigned int obstacleBlockageFlags)
{
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  bfx::PathCreationOptions options; 
  bfx::Vector3 goalPosa; 
  bfx::Vector3 startPosa; 
  bfx::PathSpec pathSpec; 

  *(_QWORD *)&goalPosa.m_x = result;
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  pathSpec.m_pathSharingPenalty = 0.0;
  pathSpec.m_maxPathSharingPenalty = 0.0;
  pathSpec.m_maxSearchDist = 0.0;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  v12 = startPos->v[0];
  v13 = startPos->v[1];
  pathSpec.m_areaUsageFlags = areaUsageFlags;
  startPosa.m_x = v12;
  v14 = startPos->v[2];
  startPosa.m_y = v13;
  v15 = goalPos->v[0];
  pathSpec.m_linkUsageFlags = linkUsageFlags;
  startPosa.m_z = v14;
  v16 = goalPos->v[1];
  goalPosa.m_x = v15;
  v17 = goalPos->v[2];
  pathSpec.m_obstacleBlockageFlags = obstacleBlockageFlags;
  goalPosa.m_y = v16;
  goalPosa.m_z = v17;
  pathSpec.m_snapMode = SNAP_CLOSEST;
  *(_WORD *)&options.m_performInitialNavProbe = 257;
  options.m_forceFirstPosOntoNavGraph = 0;
  bfx::CreatePolylinePath(result, &pSpace->hSpace, &startPosa, &goalPosa, layer, &pathSpec, &options);
  return result;
}

/*
==============
Nav_GetKindaRandomReachablePoints
==============
*/
__int64 Nav_GetKindaRandomReachablePoints(nav_space_s *pSpace, const vec3_t *origin, float radius, int layer, const bfx::PathSpec *pathSpec, int numPoints, vec3_t *outPoints)
{
  vec3_t *v10; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  double v15; 
  float v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  double v21; 
  float v22; 
  float v23; 
  float v24; 
  int v25; 
  bfx::Vector3 *ClosestPosInArea; 
  __m128 v27; 
  float v28; 
  float v29; 
  float v30; 
  const bfx::AreaHandle *AdjacentArea; 
  bfx::ClosestPosData pDataOut; 
  bfx::AreaHandle v34; 
  bfx::Vector3 pos; 
  bfx::Vector3 posWCoord; 
  __int64 v37; 
  float m_z; 
  bfx::AreaHandle result; 
  __int64 v40; 
  bfx::AreaHandle v41; 
  bfx::Vector3 v42; 

  v40 = -2i64;
  v10 = outPoints;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 977, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 978, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !outPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 979, ASSERT_TYPE_ASSERT, "( outPoints )", (const char *)&queryFormat, "outPoints") )
    __debugbreak();
  pos = (bfx::Vector3)*origin;
  bfx::GetClosestArea(&result, &pSpace->hSpace, &pos, layer, pathSpec);
  if ( !bfx::AreaHandle::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 985, ASSERT_TYPE_ASSERT, "( startArea.IsValid() )", (const char *)&queryFormat, "startArea.IsValid()") )
    __debugbreak();
  v11 = 0;
  v12 = 0;
  v13 = numPoints;
  v14 = 0i64;
  do
  {
    if ( v14 >= v13 )
      break;
    G_random();
    v15 = G_random();
    v16 = *(float *)&v15 * radius;
    v21 = j___libm_sse2_sincosf_(v18, v17, v19, v20);
    v22 = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v21, (__m128)*(unsigned __int64 *)&v21, 1).m128_f32[0] * v16) + origin->v[0];
    v23 = (float)(*(float *)&v21 * v16) + origin->v[1];
    v24 = origin->v[2];
    v25 = 0;
    bfx::AreaHandle::AreaHandle(&v34, &result);
    while ( 1 )
    {
      posWCoord.m_x = v22;
      posWCoord.m_y = v23;
      posWCoord.m_z = v24;
      pDataOut.m_isEdgePos = 0;
      pDataOut.m_edgeIndex = -1;
      ClosestPosInArea = bfx::AreaHandle::GetClosestPosInArea(&v34, &v42, &posWCoord, &pDataOut);
      v27 = (__m128)*(unsigned __int64 *)&ClosestPosInArea->m_x;
      m_z = ClosestPosInArea->m_z;
      v28 = m_z;
      LODWORD(v29) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
      v37 = v27.m128_i64[0];
      v30 = *(float *)&v37;
      if ( !pDataOut.m_isEdgePos )
      {
        v10->v[0] = *(float *)&v37;
        v10->v[1] = v29;
        v10->v[2] = v28;
        goto LABEL_24;
      }
      AdjacentArea = bfx::AreaHandle::GetAdjacentArea(&v34, &v41, pDataOut.m_edgeIndex);
      bfx::AreaHandle::operator=(&v34, AdjacentArea);
      bfx::AreaHandle::~AreaHandle(&v41);
      if ( !bfx::AreaHandle::IsValid(&v34) || !bfx::AreaHandle::IsUsable(&v34, pathSpec) )
        break;
      if ( ++v25 >= 6 )
        goto LABEL_25;
    }
    v10->v[0] = v30;
    v10->v[1] = v29;
    v10->v[2] = v28;
    if ( fsqrt((float)((float)((float)(origin->v[1] - v29) * (float)(origin->v[1] - v29)) + (float)((float)(origin->v[0] - v30) * (float)(origin->v[0] - v30))) + (float)((float)(origin->v[2] - v28) * (float)(origin->v[2] - v28))) >= (float)(radius + 6.0) )
    {
      ++v11;
      goto LABEL_25;
    }
LABEL_24:
    ++v12;
    ++v14;
    ++v10;
LABEL_25:
    if ( v25 == 6 )
    {
      v10->v[0] = v30;
      v10->v[1] = v29;
      v10->v[2] = v28;
      ++v12;
      ++v14;
      ++v10;
    }
    bfx::AreaHandle::~AreaHandle(&v34);
    v13 = numPoints;
  }
  while ( v11 < 3 );
  bfx::AreaHandle::~AreaHandle(&result);
  return v12;
}

/*
==============
Nav_GetLargestRepulsorBadplaceRadius
==============
*/
float Nav_GetLargestRepulsorBadplaceRadius()
{
  nav_repulsor_s *i; 

  *(float *)&_XMM6 = FLOAT_N1_0;
  for ( i = Nav_GetFirstRepulsor(); i; i = Nav_GetNextRepulsor(i) )
  {
    if ( i->bBadplace )
    {
      _XMM1 = LODWORD(i->radius);
      __asm { vmaxss  xmm6, xmm1, xmm6 }
    }
  }
  return *(float *)&_XMM6;
}

/*
==============
Nav_GetModifierLocationOnPath
==============
*/
char Nav_GetModifierLocationOnPath(const bfx::PolylinePathRCPtr *path, unsigned int flags, int curSegment, float minCheckDist, float maxCheckDist, vec3_t *outStartPoint, vec3_t *outEndPoint)
{
  __int64 v8; 
  char IsValid; 
  int NumSegments; 
  __int128 v12; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::Vector3 *v15; 
  float v16; 
  float v17; 
  float v18; 
  const bfx::Vector3 *v19; 
  float v20; 
  float v21; 
  float v22; 
  const bfx::AreaHandle *Area; 
  int NumObstacles; 
  int v25; 
  float v26; 
  bfx::LinkSegment *LinkSegment; 
  const bfx::Vector3 *StartPos; 
  float m_z; 
  float m_y; 
  float m_x; 
  const bfx::Vector3 *EndPos; 
  __int128 v33; 
  char v34; 
  bfx::AreaHandle v36; 
  bfx::ObstacleHandle v37; 
  __int64 v38; 
  bfx::AreaHandle result; 
  bfx::ObstacleDat v40; 

  v38 = -2i64;
  v8 = flags;
  IsValid = bfx::PolylinePathRCPtr::IsValid((bfx::PolylinePathRCPtr *)path);
  if ( IsValid )
  {
    NumSegments = bfx::PolylinePathRCPtr::GetNumSegments((bfx::PolylinePathRCPtr *)path);
    bfx::AreaHandle::AreaHandle(&v36);
    v12 = 0i64;
    if ( curSegment < NumSegments )
    {
      while ( *(float *)&v12 <= maxCheckDist )
      {
        SegmentType = bfx::PolylinePathRCPtr::GetSegmentType((bfx::PolylinePathRCPtr *)path, curSegment);
        if ( SegmentType )
        {
          if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 524, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
            __debugbreak();
          LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment((bfx::PolylinePathRCPtr *)path, curSegment);
          if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 526, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          StartPos = bfx::LinkSegment::GetStartPos(LinkSegment);
          m_z = StartPos->m_z;
          m_y = StartPos->m_y;
          m_x = StartPos->m_x;
          EndPos = bfx::LinkSegment::GetEndPos(LinkSegment);
          v26 = (float)((float)((float)(EndPos->m_y - m_y) * (float)(EndPos->m_y - m_y)) + (float)((float)(EndPos->m_x - m_x) * (float)(EndPos->m_x - m_x))) + (float)((float)(EndPos->m_z - m_z) * (float)(EndPos->m_z - m_z));
        }
        else
        {
          SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment((bfx::PolylinePathRCPtr *)path, curSegment);
          if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 497, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          v15 = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
          v16 = v15->m_z;
          v17 = v15->m_y;
          v18 = v15->m_x;
          v19 = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
          v20 = v19->m_z;
          v21 = v19->m_y;
          v22 = v19->m_x;
          if ( *(float *)&v12 >= minCheckDist )
          {
            Area = bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
            bfx::AreaHandle::operator=(&v36, Area);
            bfx::AreaHandle::~AreaHandle(&result);
            NumObstacles = bfx::AreaHandle::GetNumObstacles(&v36);
            v25 = 0;
            if ( NumObstacles > 0 )
            {
              while ( 1 )
              {
                bfx::AreaHandle::GetObstacle(&v36, &v37, v25);
                if ( (v8 & bfx::ObstacleHandle::GetObstacleDat(&v37, &v40)->m_userData) != 0 )
                  break;
                bfx::ObstacleHandle::~ObstacleHandle(&v37);
                if ( ++v25 >= NumObstacles )
                {
                  v8 = flags;
                  goto LABEL_13;
                }
              }
              outStartPoint->v[0] = v18;
              outStartPoint->v[1] = v17;
              outStartPoint->v[2] = v16;
              outEndPoint->v[0] = v22;
              outEndPoint->v[1] = v21;
              outEndPoint->v[2] = v20;
              bfx::ObstacleHandle::~ObstacleHandle(&v37);
              v34 = 1;
              goto LABEL_23;
            }
          }
LABEL_13:
          v26 = (float)((float)((float)(v22 - v18) * (float)(v22 - v18)) + (float)((float)(v21 - v17) * (float)(v21 - v17))) + (float)((float)(v20 - v16) * (float)(v20 - v16));
        }
        ++curSegment;
        v33 = v12;
        *(float *)&v33 = *(float *)&v12 + fsqrt(v26);
        v12 = v33;
        if ( curSegment >= NumSegments )
          break;
      }
    }
    v34 = 0;
LABEL_23:
    bfx::AreaHandle::~AreaHandle(&v36);
    return v34;
  }
  return IsValid;
}

/*
==============
Nav_GetPointOn3DPath
==============
*/
void Nav_GetPointOn3DPath(const bfx::PolylinePath3DRCPtr path, int pointIdx, vec3_t *outPoint)
{
  bfx::VolumePathSegment *Segment; 
  const bfx::Vector3 *EndPos; 
  float m_z; 
  float m_y; 
  __int64 v10; 
  unsigned int NumSegments; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid((bfx::PolylinePath3DRCPtr *)path.m_pProxy) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 615, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( pointIdx >= bfx::PolylinePath3DRCPtr::GetNumSegments((bfx::PolylinePath3DRCPtr *)path.m_pProxy) )
  {
    NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments((bfx::PolylinePath3DRCPtr *)path.m_pProxy);
    LODWORD(v10) = pointIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 616, ASSERT_TYPE_ASSERT, "(unsigned)( pointIdx ) < (unsigned)( path.GetNumSegments() )", "pointIdx doesn't index path.GetNumSegments()\n\t%i not in [0, %i)", v10, NumSegments) )
      __debugbreak();
  }
  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment((bfx::PolylinePath3DRCPtr *)path.m_pProxy, pointIdx);
  if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 619, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
    __debugbreak();
  EndPos = bfx::VolumePathSegment::GetEndPos(Segment);
  m_z = EndPos->m_z;
  m_y = EndPos->m_y;
  outPoint->v[0] = EndPos->m_x;
  outPoint->v[1] = m_y;
  outPoint->v[2] = m_z;
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr((bfx::PolylinePath3DRCPtr *)path.m_pProxy);
}

/*
==============
Nav_GetPointOnPath
==============
*/
void Nav_GetPointOnPath(const bfx::PolylinePathRCPtr path, int pointIdx, vec3_t *outPoint)
{
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::Vector3 *EndPos; 
  bfx::LinkSegment *LinkSegment; 
  float m_z; 
  float m_y; 
  float m_x; 
  __int64 v13; 
  int NumSegments; 

  if ( !bfx::PolylinePathRCPtr::IsValid((bfx::PolylinePathRCPtr *)path.m_pProxy) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 333, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( pointIdx >= (unsigned int)bfx::PolylinePathRCPtr::GetNumSegments((bfx::PolylinePathRCPtr *)path.m_pProxy) )
  {
    NumSegments = bfx::PolylinePathRCPtr::GetNumSegments((bfx::PolylinePathRCPtr *)path.m_pProxy);
    LODWORD(v13) = pointIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 334, ASSERT_TYPE_ASSERT, "(unsigned)( pointIdx ) < (unsigned)( path.GetNumSegments() )", "pointIdx doesn't index path.GetNumSegments()\n\t%i not in [0, %i)", v13, NumSegments) )
      __debugbreak();
  }
  SegmentType = bfx::PolylinePathRCPtr::GetSegmentType((bfx::PolylinePathRCPtr *)path.m_pProxy, pointIdx);
  if ( SegmentType )
  {
    if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 344, ASSERT_TYPE_ASSERT, "( segmentType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segmentType == bfx::LINK_SEGMENT") )
      __debugbreak();
    LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment((bfx::PolylinePathRCPtr *)path.m_pProxy, pointIdx);
    EndPos = bfx::LinkSegment::GetEndPos(LinkSegment);
  }
  else
  {
    SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment((bfx::PolylinePathRCPtr *)path.m_pProxy, pointIdx);
    EndPos = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
  }
  m_z = EndPos->m_z;
  m_y = EndPos->m_y;
  m_x = EndPos->m_x;
  outPoint->v[2] = m_z;
  outPoint->v[1] = m_y;
  outPoint->v[0] = m_x;
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr((bfx::PolylinePathRCPtr *)path.m_pProxy);
}

/*
==============
Nav_GetRandomReachablePoints
==============
*/
__int64 Nav_GetRandomReachablePoints(nav_space_s *pSpace, const vec3_t *origin, float radius, int layer, const bfx::PathSpec *pathSpec, int numPoints, vec3_t *outPoints)
{
  signed __int64 v7; 
  void *v8; 
  float v12; 
  int FloodFillAreas; 
  __int64 v14; 
  __int128 v15; 
  __int64 v16; 
  const bfx::AreaHandle *v17; 
  __int64 v18; 
  int NumEdges; 
  int v20; 
  float *v21; 
  float v22; 
  float v23; 
  float v24; 
  float *v25; 
  float v26; 
  float v27; 
  float v28; 
  bool v29; 
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
  __int128 v40; 
  unsigned __int8 v41; 
  bool v43; 
  int numTriangles; 
  bfx::Vector3 v45; 
  bfx::Vector3 v46; 
  bfx::Vector3 v47; 
  bfx::AreaHandle v48; 
  bfx::AreaHandle *v49; 
  __int64 v50; 
  bfx::Vector3 pos; 
  vec3_t *outPointsa; 
  bfx::AreaHandle result; 
  __int64 v54; 
  vec3_t centroid; 
  vec3_t pt; 
  vec3_t outPoint; 
  bfx::AreaHandle ptr[64]; 
  Triangle triangles[256]; 

  v8 = alloca(v7);
  v54 = -2i64;
  outPointsa = outPoints;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 845, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 846, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !outPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 847, ASSERT_TYPE_ASSERT, "( outPoints )", (const char *)&queryFormat, "outPoints") )
    __debugbreak();
  v12 = radius * radius;
  `eh vector constructor iterator'(ptr, 0x10ui64, 0x40ui64, (void (__fastcall *)(void *))bfx::AreaHandle::AreaHandle, (void (__fastcall *)(void *))bfx::AreaHandle::~AreaHandle);
  numTriangles = 0;
  pos = (bfx::Vector3)*origin;
  bfx::GetClosestArea(&result, &pSpace->hSpace, &pos, layer, pathSpec);
  if ( !bfx::AreaHandle::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 861, ASSERT_TYPE_ASSERT, "( startArea.IsValid() )", (const char *)&queryFormat, "startArea.IsValid()") )
    __debugbreak();
  FloodFillAreas = bfx::GetFloodFillAreas(&result, pathSpec, 64, ptr);
  v14 = (unsigned int)FloodFillAreas;
  if ( FloodFillAreas <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 864, ASSERT_TYPE_ASSERT, "( numAreas > 0 )", (const char *)&queryFormat, "numAreas > 0") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&v48);
  v15 = 0i64;
  if ( (int)v14 <= 0 )
    goto LABEL_36;
  v16 = 0i64;
  v17 = ptr;
  v49 = ptr;
  v18 = v14;
  v50 = v14;
  do
  {
    bfx::AreaHandle::operator=(&v48, v17);
    bfx::AreaHandle::CalcCentroid(&v48, &v45);
    NumEdges = bfx::AreaHandle::GetNumEdges(&v48);
    centroid = (vec3_t)v45;
    v20 = 0;
    if ( NumEdges <= 0 )
      goto LABEL_33;
    v21 = &triangles[v16].m_vert[1].v[1];
    v22 = centroid.v[2];
    v23 = centroid.v[1];
    v24 = centroid.v[0];
    v43 = (float)((float)((float)((float)(origin->v[1] - v45.m_y) * (float)(origin->v[1] - v45.m_y)) + (float)((float)(origin->v[0] - v45.m_x) * (float)(origin->v[0] - v45.m_x))) + (float)((float)(origin->v[2] - v45.m_z) * (float)(origin->v[2] - v45.m_z))) >= v12;
    do
    {
      v25 = v21 - 4;
      bfx::AreaHandle::GetEdgeStartPos(&v48, &v46, v20);
      bfx::AreaHandle::GetEdgeEndPos(&v48, &v47, v20);
      pt = (vec3_t)v46;
      outPoint = (vec3_t)v47;
      v26 = origin->v[1];
      v27 = origin->v[2];
      v28 = (float)((float)((float)(v26 - v47.m_y) * (float)(v26 - v47.m_y)) + (float)((float)(origin->v[0] - v47.m_x) * (float)(origin->v[0] - v47.m_x))) + (float)((float)(v27 - v47.m_z) * (float)(v27 - v47.m_z));
      v29 = v28 >= v12;
      if ( !v43 )
        goto LABEL_23;
      if ( (float)((float)((float)((float)(v26 - v46.m_y) * (float)(v26 - v46.m_y)) + (float)((float)(origin->v[0] - v46.m_x) * (float)(origin->v[0] - v46.m_x))) + (float)((float)(v27 - v46.m_z) * (float)(v27 - v46.m_z))) >= v12 )
      {
        if ( v28 >= v12 )
          goto LABEL_31;
LABEL_23:
        if ( (float)((float)((float)((float)(v26 - v46.m_y) * (float)(v26 - v46.m_y)) + (float)((float)(origin->v[0] - v46.m_x) * (float)(origin->v[0] - v46.m_x))) + (float)((float)(v27 - v46.m_z) * (float)(v27 - v46.m_z))) >= v12 && !AdjustPtToWithinRadiusSq(&pt, origin, &centroid, v12, &pt) )
          goto LABEL_31;
      }
      if ( !v29 || AdjustPtToWithinRadiusSq(&outPoint, origin, &centroid, v12, &outPoint) )
      {
        *v25 = v24;
        *(v21 - 3) = v23;
        *(v21 - 2) = v22;
        *(vec3_t *)(v21 - 1) = pt;
        v30 = outPoint.v[0];
        v21[2] = outPoint.v[0];
        v31 = outPoint.v[1];
        v21[3] = outPoint.v[1];
        v32 = outPoint.v[2];
        v21[4] = outPoint.v[2];
        v33 = *(v21 - 1) - *v25;
        v34 = *v21 - *(v21 - 3);
        v35 = v21[1] - *(v21 - 2);
        v36 = v30 - *v25;
        v37 = v31 - *(v21 - 3);
        v38 = v32 - *(v21 - 2);
        v39 = fsqrt((float)((float)((float)((float)(v36 * v35) - (float)(v38 * v33)) * (float)((float)(v36 * v35) - (float)(v38 * v33))) + (float)((float)((float)(v38 * v34) - (float)(v37 * v35)) * (float)((float)(v38 * v34) - (float)(v37 * v35)))) + (float)((float)((float)(v37 * v33) - (float)(v36 * v34)) * (float)((float)(v37 * v33) - (float)(v36 * v34)))) * 0.5;
        v21[5] = v39;
        ++numTriangles;
        ++v16;
        v21 += 10;
        if ( v16 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 917, ASSERT_TYPE_ASSERT, "(numTriangles < cMaxNumTriangles)", "%s\n\tran out of triangles on stack. need to increase.", "numTriangles < cMaxNumTriangles") )
        {
          __debugbreak();
          v39 = v25[9];
        }
        v40 = v15;
        *(float *)&v40 = *(float *)&v15 + v39;
        v15 = v40;
      }
LABEL_31:
      ++v20;
    }
    while ( v20 < NumEdges );
    v17 = v49;
    v18 = v50;
LABEL_33:
    v49 = (bfx::AreaHandle *)++v17;
    v50 = --v18;
  }
  while ( v18 );
  if ( !numTriangles )
  {
LABEL_36:
    v41 = 0;
    goto LABEL_37;
  }
  GetRandomPointsInTriangles(triangles, numTriangles, *(float *)&v15, outPointsa, numPoints);
  v41 = 1;
LABEL_37:
  bfx::AreaHandle::~AreaHandle(&v48);
  bfx::AreaHandle::~AreaHandle(&result);
  `eh vector destructor iterator'(ptr, 0x10ui64, 0x40ui64, (void (__fastcall *)(void *))bfx::AreaHandle::~AreaHandle);
  return v41;
}

/*
==============
Nav_IsPointInRepulsorBadplace
==============
*/
char Nav_IsPointInRepulsorBadplace(const vec3_t *pos, int usageFlags, int ignoreEntNum, int ignoreEntNum2)
{
  nav_repulsor_s *FirstRepulsor; 
  float v9; 

  FirstRepulsor = Nav_GetFirstRepulsor();
  if ( !FirstRepulsor )
    return 0;
  while ( 1 )
  {
    if ( FirstRepulsor->bBadplace && (ignoreEntNum == 2047 || FirstRepulsor->entNum != ignoreEntNum) && (ignoreEntNum2 == 2047 || FirstRepulsor->entNum != ignoreEntNum2) && (usageFlags & FirstRepulsor->usageFlags) != 0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(FirstRepulsor->origin.v[2] - pos->v[2]) & _xmm) <= 80.0 )
    {
      v9 = pos->v[1] - FirstRepulsor->origin.v[1];
      if ( (float)((float)(v9 * v9) + (float)((float)(pos->v[0] - FirstRepulsor->origin.v[0]) * (float)(pos->v[0] - FirstRepulsor->origin.v[0]))) < (float)(FirstRepulsor->radius * FirstRepulsor->radius) )
        break;
    }
    FirstRepulsor = Nav_GetNextRepulsor(FirstRepulsor);
    if ( !FirstRepulsor )
      return 0;
  }
  return 1;
}

/*
==============
Nav_IsPointOnMesh
==============
*/
bool Nav_IsPointOnMesh(nav_space_s *pSpace, const vec3_t *pos, AINavLayer layer)
{
  bfx::PathSpec pPathSpec; 
  vec3_t outSnappedPos; 

  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  pPathSpec.m_pathSharingPenalty = 0.0;
  pPathSpec.m_maxPathSharingPenalty = 0.0;
  pPathSpec.m_maxSearchDist = 0.0;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  return Nav_IsPointOnMeshCustom(pSpace, pos, layer, &pPathSpec, &outSnappedPos, NULL);
}

/*
==============
Nav_IsPointOnMeshCustom
==============
*/
bool Nav_IsPointOnMeshCustom(nav_space_s *pSpace, const vec3_t *pos, AINavLayer layer, const bfx::PathSpec *pPathSpec, vec3_t *outSnappedPos)
{
  return Nav_IsPointOnMeshCustom(pSpace, pos, layer, pPathSpec, outSnappedPos, NULL);
}

/*
==============
Nav_IsPointOnMeshCustom
==============
*/
bool Nav_IsPointOnMeshCustom(nav_space_s *pSpace, const vec3_t *pos, AINavLayer layer, const bfx::PathSpec *pPathSpec, vec3_t *outSnappedPos, bfx::AreaHandle *outAreaHandle)
{
  bool result; 
  double v11; 
  vec3_t outUp; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 295, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 296, ASSERT_TYPE_ASSERT, "( pPathSpec )", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  Nav_GetSpaceUp(pSpace, &outUp);
  result = Nav_GetClosestVerticalPos(pos, &outUp, layer, &pSpace->hSpace, pPathSpec, outSnappedPos, outAreaHandle);
  if ( result )
  {
    v11 = Nav_Get2DDistanceSqWithUp(pos, outSnappedPos, &outUp);
    return *(float *)&v11 < 0.003;
  }
  return result;
}

/*
==============
Nav_IsPointOnMeshCustomWithHint
==============
*/
bool Nav_IsPointOnMeshCustomWithHint(nav_space_s *pSpace, const vec3_t *pos, AINavLayer layer, const bfx::PathSpec *pPathSpec, vec3_t *outSnappedPos, const bfx::AreaHandle *hHintArea, bfx::AreaHandle *outAreaHandle)
{
  bool result; 
  double v12; 
  vec3_t outUp; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 314, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 315, ASSERT_TYPE_ASSERT, "( pPathSpec )", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  Nav_GetSpaceUp(pSpace, &outUp);
  result = Nav_GetClosestVerticalPosWithHint(pos, &outUp, layer, &pSpace->hSpace, pPathSpec, outSnappedPos, hHintArea, outAreaHandle);
  if ( result )
  {
    v12 = Nav_Get2DDistanceSqWithUp(pos, outSnappedPos, &outUp);
    return *(float *)&v12 < 0.003;
  }
  return result;
}

/*
==============
Nav_IsStraightLineReachable
==============
*/
bool Nav_IsStraightLineReachable(const vec3_t *startPos, const bfx::AreaHandle *hStartArea, const vec3_t *endPos, const bfx::AreaHandle *hEndArea, const bfx::PathSpec *pPathSpec)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  bool IsStraightLineReachable; 
  bfx::Vector3 iEndPos; 
  bfx::Vector3 iStartPos; 

  Profile_Begin(271);
  if ( bfx::AreaHandle::IsUsable((bfx::AreaHandle *)hStartArea, pPathSpec) && bfx::AreaHandle::IsUsable((bfx::AreaHandle *)hEndArea, pPathSpec) )
  {
    v9 = startPos->v[1];
    iStartPos.m_x = startPos->v[0];
    v10 = startPos->v[2];
    iStartPos.m_y = v9;
    v11 = endPos->v[0];
    iStartPos.m_z = v10;
    v12 = endPos->v[1];
    iEndPos.m_x = v11;
    v13 = endPos->v[2];
    iEndPos.m_y = v12;
    iEndPos.m_z = v13;
    IsStraightLineReachable = bfx::IsStraightLineReachable(&iStartPos, hStartArea, &iEndPos, hEndArea, pPathSpec);
    Profile_EndInternal(NULL);
    return IsStraightLineReachable;
  }
  else
  {
    Profile_EndInternal(NULL);
    return 0;
  }
}

/*
==============
Nav_IsStraightLineReachable
==============
*/
_BOOL8 Nav_IsStraightLineReachable(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, AINavLayer layer, const bfx::PathSpec *pPathSpec)
{
  bool IsStraightLineReachable; 
  bfx::Vector3 iEndPos; 
  bfx::Vector3 iStartPos; 
  bfx::AreaHandle endArea; 
  bfx::AreaHandle startArea; 
  __int64 v15; 
  vec3_t outSnappedPos; 
  vec3_t v17; 

  v15 = -2i64;
  Profile_Begin(271);
  bfx::AreaHandle::AreaHandle(&startArea);
  bfx::AreaHandle::AreaHandle(&endArea);
  if ( Nav_IsPointOnMeshCustom(pSpace, startPos, layer, pPathSpec, &outSnappedPos, &startArea) && Nav_IsPointOnMeshCustom(pSpace, endPos, layer, pPathSpec, &v17, &endArea) )
  {
    iStartPos = (bfx::Vector3)outSnappedPos;
    iEndPos = (bfx::Vector3)v17;
    IsStraightLineReachable = bfx::IsStraightLineReachable(&iStartPos, &startArea, &iEndPos, &endArea, pPathSpec);
    Profile_EndInternal(NULL);
  }
  else
  {
    Profile_EndInternal(NULL);
    IsStraightLineReachable = 0;
  }
  bfx::AreaHandle::~AreaHandle(&endArea);
  bfx::AreaHandle::~AreaHandle(&startArea);
  return IsStraightLineReachable;
}

/*
==============
Nav_PointWithinTriangle
==============
*/
char Nav_PointWithinTriangle(Triangle *pTri, const vec3_t *point)
{
  bool v4; 
  __int64 v5; 
  int i; 
  float v7; 

  if ( !pTri && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 737, ASSERT_TYPE_ASSERT, "( pTri )", (const char *)&queryFormat, "pTri") )
    __debugbreak();
  v4 = 0;
  v5 = 0i64;
  for ( i = 1; ; ++i )
  {
    v7 = (float)((float)(pTri->m_vert[i % 3].v[0] - pTri->m_vert[v5].v[0]) * (float)(point->v[1] - pTri->m_vert[v5].v[1])) - (float)((float)(pTri->m_vert[i % 3].v[1] - pTri->m_vert[v5].v[1]) * (float)(point->v[0] - pTri->m_vert[v5].v[0]));
    if ( v7 > -0.029999999 && v7 < 0.029999999 )
      return 1;
    if ( v5 )
      break;
    v4 = v7 > 0.0;
LABEL_10:
    if ( ++v5 >= 3 )
      return 1;
  }
  if ( v4 == v7 > 0.0 )
    goto LABEL_10;
  return 0;
}

/*
==============
Nav_Simplify3DPath
==============
*/
__int64 Nav_Simplify3DPath(nav_space_s *pSpace, const vec3_t *startPt, const vec3_t *sourcePath, int segmentCount, int maxNumPoints, vec3_t *outPath)
{
  __int128 v6; 
  const vec3_t *v9; 
  float v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  float *v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  float *v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  int v28; 
  __int64 v29; 
  float *v30; 
  bfx::Path3DSpec pathSpec; 
  const vec3_t *v32; 
  vec3_t startPos; 
  vec3_t endPos; 
  __int128 v35; 

  v9 = sourcePath;
  v32 = sourcePath;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 627, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !outPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 628, ASSERT_TYPE_ASSERT, "( outPath )", (const char *)&queryFormat, "outPath") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 629, ASSERT_TYPE_ASSERT, "( sourcePath )", (const char *)&queryFormat, "sourcePath") )
    __debugbreak();
  Profile_Begin(276);
  v11 = startPt->v[1];
  v12 = 0;
  startPos.v[0] = startPt->v[0];
  v13 = -1;
  v28 = 0;
  startPos.v[2] = startPt->v[2];
  startPos.v[1] = v11;
  if ( segmentCount - 1 > -1 )
  {
    v14 = maxNumPoints;
    v15 = &outPath->v[2];
    v16 = segmentCount - 1;
    v17 = 0i64;
    v35 = v6;
    v29 = 0i64;
    v18 = -1i64;
    v30 = &outPath->v[2];
    do
    {
      if ( v17 >= v14 )
        break;
      v19 = v13 + 1;
      v20 = v13 + 2;
      v21 = ++v18 + 1;
      if ( v13 + 2 < segmentCount )
      {
        v22 = &v9[v21].v[2];
        do
        {
          v23 = *(v22 - 1);
          endPos.v[0] = *(v22 - 2);
          endPos.v[2] = *v22;
          endPos.v[1] = v23;
          if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 195, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
            __debugbreak();
          if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 196, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
            __debugbreak();
          *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
          pathSpec.m_maxSearchDist = 0.0;
          if ( Nav_Trace3D(pSpace, &startPos, &endPos, &pathSpec, NULL) )
            break;
          v19 = v20;
          v18 = v21;
          ++v20;
          ++v21;
          v22 += 3;
        }
        while ( v20 < segmentCount );
        v9 = v32;
        v16 = segmentCount - 1;
        v15 = v30;
        v17 = v29;
        v14 = maxNumPoints;
      }
      v24 = v9[v18].v[0];
      v25 = v9[v18].v[1];
      v26 = v9[v18].v[2];
      v12 = v28 + 1;
      ++v17;
      *(v15 - 2) = v24;
      *(v15 - 1) = v25;
      *v15 = v26;
      v15 += 3;
      ++v28;
      v29 = v17;
      v13 = v19;
      v30 = v15;
      startPos.v[0] = v24;
      startPos.v[1] = v25;
      startPos.v[2] = v26;
    }
    while ( v19 < v16 );
  }
  if ( segmentCount && v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 663, ASSERT_TYPE_ASSERT, "( segmentCount == 0 || numPoints > 0 )", (const char *)&queryFormat, "segmentCount == 0 || numPoints > 0") )
    __debugbreak();
  Profile_EndInternal(NULL);
  return (unsigned int)v12;
}

/*
==============
Nav_Simplify3DPath
==============
*/
__int64 Nav_Simplify3DPath(nav_space_s *pSpace, const vec3_t *startPt, const bfx::PolylinePath3DRCPtr path, int maxNumPoints, vec3_t *outPath)
{
  __int64 v5; 
  signed int NumSegments; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  float *v14; 
  int v15; 
  bfx::PolylinePath3DRCPtr v16; 
  bfx::PolylinePath3DRCPtr v17; 
  int v19; 
  __int64 v20; 
  float *v21; 
  bfx::Path3DSpec pathSpec; 
  bfx::PolylinePath3DRCPtr v23; 
  bfx::PolylinePath3DRCPtr v24; 
  __int64 v25; 
  __int64 v26; 
  void *m_pProxy; 
  vec3_t startPos; 
  vec3_t outPoint; 

  v26 = -2i64;
  v5 = maxNumPoints;
  m_pProxy = path.m_pProxy;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 674, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::PolylinePath3DRCPtr::IsValid((bfx::PolylinePath3DRCPtr *)path.m_pProxy) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 675, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( !outPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 676, ASSERT_TYPE_ASSERT, "( outPath )", (const char *)&queryFormat, "outPath") )
    __debugbreak();
  Profile_Begin(276);
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments((bfx::PolylinePath3DRCPtr *)path.m_pProxy);
  v10 = 0;
  v19 = 0;
  startPos = *startPt;
  v11 = -1;
  if ( NumSegments - 1 > -1 )
  {
    v12 = v5;
    v25 = v5;
    v13 = 0i64;
    v20 = 0i64;
    v14 = &outPath->v[2];
    v21 = &outPath->v[2];
    do
    {
      if ( v13 >= v12 )
        break;
      v15 = ++v11 + 1;
      if ( v11 + 1 < NumSegments )
      {
        do
        {
          bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(&v23, (const bfx::PolylinePath3DRCPtr *)path.m_pProxy);
          Nav_GetPointOn3DPath(v16, v15, &outPoint);
          if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 195, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
            __debugbreak();
          if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 196, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
            __debugbreak();
          *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
          pathSpec.m_maxSearchDist = 0.0;
          if ( Nav_Trace3D(pSpace, &startPos, &outPoint, &pathSpec, NULL) )
            break;
          v11 = v15++;
        }
        while ( v15 < NumSegments );
        v13 = v20;
        v10 = v19;
        v14 = v21;
      }
      bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(&v24, (const bfx::PolylinePath3DRCPtr *)path.m_pProxy);
      Nav_GetPointOn3DPath(v17, v11, &startPos);
      *(vec3_t *)(v14 - 2) = startPos;
      v19 = ++v10;
      v20 = ++v13;
      v14 += 3;
      v21 = v14;
      v12 = v25;
    }
    while ( v11 < NumSegments - 1 );
  }
  if ( NumSegments && v10 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 712, ASSERT_TYPE_ASSERT, "( segmentCount == 0 || numPoints > 0 )", (const char *)&queryFormat, "segmentCount == 0 || numPoints > 0") )
    __debugbreak();
  Profile_EndInternal(NULL);
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr((bfx::PolylinePath3DRCPtr *)path.m_pProxy);
  return (unsigned int)v10;
}

/*
==============
Nav_SimplifyPath
==============
*/
__int64 Nav_SimplifyPath(nav_space_s *pSpace, const vec3_t *startPt, const bfx::PolylinePathRCPtr path, AINavLayer layer, const bfx::PathSpec *pPathSpec, int maxNumPoints, vec3_t *outPath)
{
  bfx::PolylinePathRCPtr *m_pProxy; 
  vec3_t *v8; 
  int v9; 
  int v10; 
  int v11; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::Vector3 *v14; 
  float v15; 
  float v16; 
  __int64 v17; 
  const bfx::AreaHandle *Area; 
  const bfx::Vector3 *v19; 
  float v20; 
  float v21; 
  float m_x; 
  bfx::AreaHandle *v23; 
  bool IsStraightLineReachable; 
  const bfx::Vector3 *v25; 
  float v26; 
  float v27; 
  const bfx::AreaHandle *v28; 
  __int64 v29; 
  const bfx::AreaHandle *v30; 
  bfx::LinkSegment *LinkSegment; 
  const bfx::Vector3 *StartPos; 
  float m_z; 
  float m_y; 
  const bfx::Vector3 *EndPos; 
  float v37; 
  float v38; 
  const bfx::Vector3 *v39; 
  const bfx::AreaHandle *ClosestArea; 
  int NumSegments; 
  bfx::AreaHandle startArea; 
  unsigned int layera[2]; 
  const vec3_t *v45; 
  bfx::Vector3 iEndPos; 
  bfx::Vector3 iStartPos; 
  bfx::SpaceHandle *spaceHandle; 
  __int64 v49; 
  void *v50; 
  bfx::AreaHandle result; 
  bfx::AreaHandle v52; 
  bfx::AreaHandle v53; 
  bfx::AreaHandle v54; 
  bfx::AreaHandle v55; 
  float v1; 
  float v57; 
  float v58; 
  bfx::PathSpec pathSpec; 

  v49 = -2i64;
  layera[0] = layer;
  m_pProxy = (bfx::PolylinePathRCPtr *)path.m_pProxy;
  v8 = (vec3_t *)startPt;
  v45 = startPt;
  spaceHandle = &pSpace->hSpace;
  v50 = path.m_pProxy;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 355, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::PolylinePathRCPtr::IsValid(m_pProxy) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 356, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( !outPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 357, ASSERT_TYPE_ASSERT, "( outPath )", (const char *)&queryFormat, "outPath") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_SimplifyPath");
  NumSegments = bfx::PolylinePathRCPtr::GetNumSegments(m_pProxy);
  *outPath = *v8;
  v9 = 1;
  v10 = maxNumPoints;
  if ( maxNumPoints > 1 )
  {
    bfx::AreaHandle::AreaHandle(&startArea);
    v11 = 0;
    pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
    *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
    pathSpec.m_usePathSharingPenalty = 0;
    pathSpec.m_pathSharingPenalty = 0.0;
    pathSpec.m_maxPathSharingPenalty = 0.0;
    pathSpec.m_maxSearchDist = 0.0;
    bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
    pathSpec.m_snapMode = SNAP_CLOSEST;
    if ( pPathSpec )
      pathSpec = *pPathSpec;
    if ( NumSegments > 0 )
    {
      while ( 1 )
      {
        SegmentType = bfx::PolylinePathRCPtr::GetSegmentType(m_pProxy, v11);
        if ( SegmentType )
        {
          if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 423, ASSERT_TYPE_ASSERT, "( segmentType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segmentType == bfx::LINK_SEGMENT") )
            __debugbreak();
          LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment(m_pProxy, v11);
          if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 426, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          StartPos = bfx::LinkSegment::GetStartPos(LinkSegment);
          m_z = StartPos->m_z;
          m_y = StartPos->m_y;
          outPath[v9].v[0] = StartPos->m_x;
          outPath[v9].v[1] = m_y;
          outPath[v9++].v[2] = m_z;
          if ( v9 >= v10 || (EndPos = bfx::LinkSegment::GetEndPos(LinkSegment), v37 = EndPos->m_z, v38 = EndPos->m_y, outPath[v9].v[0] = EndPos->m_x, outPath[v9].v[1] = v38, outPath[v9].v[2] = v37, ++v9, v9 >= v10) )
          {
LABEL_39:
            if ( v9 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 441, ASSERT_TYPE_ASSERT, "( numPoints > 0 )", (const char *)&queryFormat, "numPoints > 0") )
              __debugbreak();
            m_pProxy = (bfx::PolylinePathRCPtr *)path.m_pProxy;
            break;
          }
          v39 = bfx::LinkSegment::GetEndPos(LinkSegment);
          ClosestArea = bfx::GetClosestArea(&v55, spaceHandle, v39, layera[0], &bfx::g_defaultPathSpec);
          bfx::AreaHandle::operator=(&startArea, ClosestArea);
          bfx::AreaHandle::~AreaHandle(&v55);
        }
        else
        {
          SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(m_pProxy, v11);
          if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 384, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          if ( !v11 )
          {
            v14 = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
            v15 = v14->m_z;
            v16 = v14->m_y;
            v1 = v14->m_x;
            v57 = v16;
            v58 = v15;
            if ( !VecNCompareCustomEpsilon(v8->v, &v1, 0.001, 3) )
            {
              v17 = v9;
              outPath[v17].v[0] = v1;
              outPath[v17].v[1] = v57;
              outPath[v17].v[2] = v58;
              if ( ++v9 >= v10 )
                goto LABEL_39;
            }
            Area = bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
            bfx::AreaHandle::operator=(&startArea, Area);
            bfx::AreaHandle::~AreaHandle(&result);
          }
          v19 = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
          v20 = v19->m_z;
          v21 = v19->m_y;
          m_x = v19->m_x;
          if ( !bfx::AreaHandle::IsValid(&startArea) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 403, ASSERT_TYPE_ASSERT, "( hPrevArea.IsValid() )", (const char *)&queryFormat, "hPrevArea.IsValid()") )
            __debugbreak();
          v23 = bfx::SurfaceSegment::GetArea(SurfaceSegment, &v52);
          Profile_Begin(271);
          if ( bfx::AreaHandle::IsUsable(&startArea, &pathSpec) && bfx::AreaHandle::IsUsable(v23, &pathSpec) )
          {
            iStartPos = (bfx::Vector3)outPath[v9 - 1];
            iEndPos.m_x = m_x;
            iEndPos.m_y = v21;
            iEndPos.m_z = v20;
            IsStraightLineReachable = bfx::IsStraightLineReachable(&iStartPos, &startArea, &iEndPos, v23, &pathSpec);
            Profile_EndInternal(NULL);
          }
          else
          {
            Profile_EndInternal(NULL);
            IsStraightLineReachable = 0;
          }
          bfx::AreaHandle::~AreaHandle(&v52);
          if ( IsStraightLineReachable )
          {
            v10 = maxNumPoints;
          }
          else
          {
            v25 = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
            v26 = v25->m_z;
            v27 = v25->m_y;
            outPath[v9].v[0] = v25->m_x;
            outPath[v9].v[1] = v27;
            outPath[v9++].v[2] = v26;
            v10 = maxNumPoints;
            if ( v9 >= maxNumPoints )
              goto LABEL_39;
            v28 = bfx::SurfaceSegment::GetArea(SurfaceSegment, &v53);
            bfx::AreaHandle::operator=(&startArea, v28);
            bfx::AreaHandle::~AreaHandle(&v53);
          }
          if ( v11 == NumSegments - 1 )
          {
            v29 = v9;
            outPath[v29].v[0] = m_x;
            outPath[v29].v[1] = v21;
            outPath[v29].v[2] = v20;
            if ( ++v9 >= v10 )
              goto LABEL_39;
            v30 = bfx::SurfaceSegment::GetArea(SurfaceSegment, &v54);
            bfx::AreaHandle::operator=(&startArea, v30);
            bfx::AreaHandle::~AreaHandle(&v54);
          }
          v8 = (vec3_t *)v45;
        }
        ++v11;
        m_pProxy = (bfx::PolylinePathRCPtr *)path.m_pProxy;
        if ( v11 >= NumSegments )
          goto LABEL_39;
      }
    }
    Sys_ProfEndNamedEvent();
    bfx::AreaHandle::~AreaHandle(&startArea);
  }
  else
  {
    Sys_ProfEndNamedEvent();
  }
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(m_pProxy);
  return (unsigned int)v9;
}

/*
==============
Nav_Trace3D
==============
*/
bool Nav_Trace3D(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos)
{
  bfx::Path3DSpec pathSpec; 

  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 195, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 196, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
  pathSpec.m_maxSearchDist = 0.0;
  return Nav_Trace3D(pSpace, startPos, endPos, &pathSpec, NULL);
}

/*
==============
Nav_Trace3D
==============
*/
_BOOL8 Nav_Trace3D(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, const bfx::Path3DSpec *pathSpec, nav_probe_results_3D_s *pOutResults)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  _BOOL8 result; 
  float m_z; 
  float m_distTravelled; 
  bfx::Probe3DResults clientResults; 
  bfx::Vector3 dir; 
  bfx::Vector3 startPosa; 

  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 164, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 166, ASSERT_TYPE_ASSERT, "( pathSpec )", (const char *)&queryFormat, "pathSpec") )
    __debugbreak();
  v9 = startPos->v[0];
  v10 = startPos->v[1];
  v11 = startPos->v[2];
  v12 = endPos->v[0] - startPos->v[0];
  v14 = LODWORD(endPos->v[1]);
  v13 = endPos->v[1] - v10;
  v15 = endPos->v[2] - v11;
  *(float *)&v14 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v15 * v15));
  _XMM3 = v14;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  clientResults.m_collided = 0;
  dir.m_x = v12 * (float)(1.0 / *(float *)&_XMM0);
  dir.m_y = v13 * (float)(1.0 / *(float *)&_XMM0);
  dir.m_z = v15 * (float)(1.0 / *(float *)&_XMM0);
  startPosa.m_x = v9;
  startPosa.m_y = v10;
  startPosa.m_z = v11;
  bfx::NavProbe3D(&pSpace->hSpace, &startPosa, &dir, *(float *)&v14, pathSpec, &clientResults);
  result = clientResults.m_collided;
  if ( pOutResults )
  {
    m_z = clientResults.m_endNorm.m_z;
    *(_OWORD *)pOutResults->m_EndPos.v = *(_OWORD *)&clientResults.m_endPos.m_x;
    pOutResults->m_Normal.v[1] = clientResults.m_endNorm.m_y;
    m_distTravelled = clientResults.m_distTravelled;
    pOutResults->m_Normal.v[2] = m_z;
    pOutResults->m_DistTraveled = m_distTravelled;
    pOutResults->m_bCollided = result;
  }
  return result;
}

/*
==============
Nav_Trace3DAllowEdgeHit
==============
*/
bool Nav_Trace3DAllowEdgeHit(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, const bfx::Path3DSpec *pathSpec, nav_probe_results_3D_s *pOutResults)
{
  bool v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v20; 
  bfx::Vector3 dir; 
  bfx::Vector3 startPosa; 
  bfx::Probe3DResults clientResults; 

  v9 = Nav_Trace3D(pSpace, startPos, endPos, pathSpec, pOutResults);
  if ( !v9 )
    return 0;
  v10 = endPos->v[1] - startPos->v[1];
  v11 = endPos->v[2] - startPos->v[2];
  v12 = pOutResults->m_DistTraveled - fsqrt((float)((float)(v10 * v10) + (float)((float)(endPos->v[0] - startPos->v[0]) * (float)(endPos->v[0] - startPos->v[0]))) + (float)(v11 * v11));
  if ( (float)(v12 * v12) < 0.0024999999 )
    return 0;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1114, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1115, ASSERT_TYPE_ASSERT, "(pPathSpec)", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  v13 = startPos->v[0];
  v14 = startPos->v[1];
  v15 = startPos->v[2];
  v16 = endPos->v[0] - startPos->v[0];
  v20 = LODWORD(endPos->v[1]);
  v17 = endPos->v[1] - v14;
  v18 = endPos->v[2] - v15;
  *(float *)&v20 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18));
  _XMM10 = v20;
  __asm
  {
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
  }
  clientResults.m_collided = 0;
  dir.m_y = v17 * (float)(1.0 / *(float *)&_XMM0);
  startPosa.m_x = v13;
  startPosa.m_y = v14;
  startPosa.m_z = v15;
  dir.m_x = v16 * (float)(1.0 / *(float *)&_XMM0);
  dir.m_z = v18 * (float)(1.0 / *(float *)&_XMM0);
  bfx::NavProbe3D(&pSpace->hSpace, &startPosa, &dir, *(float *)&v20, pathSpec, &clientResults);
  if ( !clientResults.m_collided )
    return 0;
  return (float)(*(float *)&v20 - clientResults.m_distTravelled) >= 0.003 && v9;
}

/*
==============
Nav_Trace
==============
*/
_BOOL8 Nav_Trace(const vec3_t *startPos, const bfx::AreaHandle *hStartArea, const vec3_t *endPos, const bfx::PathSpec *pathSpec)
{
  bool v8; 
  nav_probe_results_s pOutResults; 

  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 152, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()", -2i64) )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 153, ASSERT_TYPE_ASSERT, "( pathSpec )", (const char *)&queryFormat, "pathSpec") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  v8 = Nav_Trace(startPos, hStartArea, endPos, pathSpec, &pOutResults);
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  return v8;
}

/*
==============
Nav_Trace
==============
*/
_BOOL8 Nav_Trace(const vec3_t *startPos, const bfx::AreaHandle *hStartArea, const vec3_t *endPos, const bfx::PathSpec *pathSpec, nav_probe_results_s *pOutResults)
{
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  bfx::Vector3 *EdgeStartPos; 
  __m128 v19; 
  bfx::Vector3 *EdgeEndPos; 
  __m128 v21; 
  bfx::Vector3 *Normal; 
  __m128 v23; 
  bool m_collided; 
  bfx::ProbeSpec probeSpec; 
  bfx::Vector3 result; 
  bfx::ProbeResults results; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  float m_z; 
  float v32; 
  __int64 v33; 

  v33 = -2i64;
  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 86, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 87, ASSERT_TYPE_ASSERT, "( pathSpec )", (const char *)&queryFormat, "pathSpec") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_Trace");
  v9 = endPos->v[0] - startPos->v[0];
  v10 = startPos->v[1];
  v12 = LODWORD(endPos->v[1]);
  v11 = endPos->v[1] - v10;
  v13 = startPos->v[2];
  v14 = endPos->v[2] - v13;
  *(float *)&v12 = fsqrt((float)((float)(v11 * v11) + (float)(v9 * v9)) + (float)(v14 * v14));
  _XMM10 = v12;
  __asm
  {
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm1, xmm10, xmm2, xmm0
  }
  iStartPos.m_x = startPos->v[0];
  iStartPos.m_y = v10;
  iStartPos.m_z = v13;
  dir.m_x = v9 * (float)(1.0 / *(float *)&_XMM1);
  dir.m_y = v11 * (float)(1.0 / *(float *)&_XMM1);
  dir.m_z = v14 * (float)(1.0 / *(float *)&_XMM1);
  probeSpec.m_probeType = NAVPROBE_TYPE_FULL3D;
  bfx::AreaHandle::AreaHandle(&results.m_endArea);
  results.m_collided = 0;
  results.m_collideEdgeIndex = -1;
  results.m_generatePath = 0;
  bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
  bfx::NavProbe(hStartArea, &iStartPos, &dir, *(float *)&v12, pathSpec, &probeSpec, &results);
  if ( pOutResults )
  {
    pOutResults->m_EndPos.v[0] = results.m_endPos.m_x;
    pOutResults->m_EndPos.v[1] = results.m_endPos.m_y;
    pOutResults->m_EndPos.v[2] = results.m_endPos.m_z;
    pOutResults->m_bCollided = results.m_collided;
    pOutResults->m_DistTraveled = results.m_distTravelled;
    bfx::AreaHandle::operator=(&pOutResults->m_hEndArea, &results.m_endArea);
    if ( results.m_collided )
    {
      EdgeStartPos = bfx::AreaHandle::GetEdgeStartPos(&results.m_endArea, &result, results.m_collideEdgeIndex);
      v19 = (__m128)*(unsigned __int64 *)&EdgeStartPos->m_x;
      m_z = EdgeStartPos->m_z;
      EdgeEndPos = bfx::AreaHandle::GetEdgeEndPos(&results.m_endArea, &result, results.m_collideEdgeIndex);
      v21 = (__m128)*(unsigned __int64 *)&EdgeEndPos->m_x;
      v32 = EdgeEndPos->m_z;
      Normal = bfx::AreaHandle::GetNormal(&results.m_endArea, &result);
      v23 = (__m128)*(unsigned __int64 *)&Normal->m_x;
      result.m_z = Normal->m_z;
      pOutResults->m_edgeStartPos.v[0] = v19.m128_f32[0];
      pOutResults->m_edgeStartPos.v[1] = _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
      pOutResults->m_edgeStartPos.v[2] = m_z;
      pOutResults->m_edgeEndPos.v[0] = v21.m128_f32[0];
      pOutResults->m_edgeEndPos.v[1] = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      pOutResults->m_edgeEndPos.v[2] = v32;
      pOutResults->m_areaNormal.v[0] = v23.m128_f32[0];
      pOutResults->m_areaNormal.v[1] = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
      pOutResults->m_areaNormal.v[2] = result.m_z;
    }
  }
  Sys_ProfEndNamedEvent();
  m_collided = results.m_collided;
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
  bfx::AreaHandle::~AreaHandle(&results.m_endArea);
  return m_collided;
}

/*
==============
Nav_Trace
==============
*/
_BOOL8 Nav_Trace(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, AINavLayer layer, const bfx::PathSpec *pathSpec)
{
  bool v9; 
  nav_probe_results_s *pOutResults; 
  nav_probe_results_s v12; 

  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 72, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 73, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 74, ASSERT_TYPE_ASSERT, "( pathSpec )", (const char *)&queryFormat, "pathSpec") )
    __debugbreak();
  if ( (unsigned int)layer >= NAV_NUM_LAYERS )
  {
    LODWORD(pOutResults) = layer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( layer ) < (unsigned)( NAV_NUM_LAYERS )", "layer doesn't index NAV_NUM_LAYERS\n\t%i not in [0, %i)", pOutResults, 3) )
      __debugbreak();
  }
  bfx::AreaHandle::AreaHandle(&v12.m_hEndArea);
  v9 = Nav_Trace(pSpace, startPos, endPos, layer, pathSpec, &v12);
  bfx::AreaHandle::~AreaHandle(&v12.m_hEndArea);
  return v9;
}

/*
==============
Nav_Trace
==============
*/
_BOOL8 Nav_Trace(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, AINavLayer layer, const bfx::PathSpec *pathSpec, nav_probe_results_s *pOutResults)
{
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  bfx::Vector3 *EdgeStartPos; 
  __m128 v20; 
  bfx::Vector3 *EdgeEndPos; 
  __m128 v22; 
  bfx::Vector3 *Normal; 
  __m128 v24; 
  bool m_collided; 
  bfx::PathSpec *v27; 
  bfx::ProbeSpec probeSpec; 
  bfx::Vector3 result; 
  bfx::ProbeResults results; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  float m_z; 
  float v34; 
  __int64 v35; 

  v35 = -2i64;
  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 21, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 22, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 23, ASSERT_TYPE_ASSERT, "( pathSpec )", (const char *)&queryFormat, "pathSpec") )
    __debugbreak();
  if ( (unsigned int)layer >= NAV_NUM_LAYERS )
  {
    LODWORD(v27) = layer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 24, ASSERT_TYPE_ASSERT, "(unsigned)( layer ) < (unsigned)( NAV_NUM_LAYERS )", "layer doesn't index NAV_NUM_LAYERS\n\t%i not in [0, %i)", v27, 3) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_Trace");
  v10 = endPos->v[0] - startPos->v[0];
  v11 = startPos->v[1];
  v13 = LODWORD(endPos->v[1]);
  v12 = endPos->v[1] - v11;
  v14 = startPos->v[2];
  v15 = endPos->v[2] - v14;
  *(float *)&v13 = fsqrt((float)((float)(v12 * v12) + (float)(v10 * v10)) + (float)(v15 * v15));
  _XMM10 = v13;
  __asm
  {
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm1, xmm10, xmm2, xmm0
  }
  iStartPos.m_x = startPos->v[0];
  iStartPos.m_y = v11;
  iStartPos.m_z = v14;
  dir.m_x = (float)(1.0 / *(float *)&_XMM1) * v10;
  dir.m_y = (float)(1.0 / *(float *)&_XMM1) * v12;
  dir.m_z = v15 * (float)(1.0 / *(float *)&_XMM1);
  probeSpec.m_probeType = NAVPROBE_TYPE_FULL3D;
  bfx::AreaHandle::AreaHandle(&results.m_endArea);
  results.m_collided = 0;
  results.m_collideEdgeIndex = -1;
  results.m_generatePath = 0;
  bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
  bfx::NavProbe(&pSpace->hSpace, &iStartPos, &dir, *(float *)&v13, layer, pathSpec, &probeSpec, &results);
  if ( pOutResults )
  {
    pOutResults->m_EndPos.v[0] = results.m_endPos.m_x;
    pOutResults->m_EndPos.v[1] = results.m_endPos.m_y;
    pOutResults->m_EndPos.v[2] = results.m_endPos.m_z;
    pOutResults->m_bCollided = results.m_collided;
    pOutResults->m_DistTraveled = results.m_distTravelled;
    bfx::AreaHandle::operator=(&pOutResults->m_hEndArea, &results.m_endArea);
    if ( results.m_collided )
    {
      EdgeStartPos = bfx::AreaHandle::GetEdgeStartPos(&results.m_endArea, &result, results.m_collideEdgeIndex);
      v20 = (__m128)*(unsigned __int64 *)&EdgeStartPos->m_x;
      m_z = EdgeStartPos->m_z;
      EdgeEndPos = bfx::AreaHandle::GetEdgeEndPos(&results.m_endArea, &result, results.m_collideEdgeIndex);
      v22 = (__m128)*(unsigned __int64 *)&EdgeEndPos->m_x;
      v34 = EdgeEndPos->m_z;
      Normal = bfx::AreaHandle::GetNormal(&results.m_endArea, &result);
      v24 = (__m128)*(unsigned __int64 *)&Normal->m_x;
      result.m_z = Normal->m_z;
      pOutResults->m_edgeStartPos.v[0] = v20.m128_f32[0];
      pOutResults->m_edgeStartPos.v[1] = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
      pOutResults->m_edgeStartPos.v[2] = m_z;
      pOutResults->m_edgeEndPos.v[0] = v22.m128_f32[0];
      pOutResults->m_edgeEndPos.v[1] = _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
      pOutResults->m_edgeEndPos.v[2] = v34;
      pOutResults->m_areaNormal.v[0] = v24.m128_f32[0];
      pOutResults->m_areaNormal.v[1] = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
      pOutResults->m_areaNormal.v[2] = result.m_z;
    }
  }
  Sys_ProfEndNamedEvent();
  m_collided = results.m_collided;
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
  bfx::AreaHandle::~AreaHandle(&results.m_endArea);
  return m_collided;
}

