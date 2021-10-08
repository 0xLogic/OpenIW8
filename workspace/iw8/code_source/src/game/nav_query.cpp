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

bool __fastcall AdjustPtToWithinRadiusSq(const vec3_t *pt, const vec3_t *origin, const vec3_t *centroid, double radiusSq, vec3_t *outPoint)
{
  bool result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm1, dword ptr [r8]
    vmovss  xmm2, dword ptr [r8+8]
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm4, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-18h], xmm6
    vsubss  xmm6, xmm0, xmm1
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm5, xmm0, xmm2
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmmword ptr [rax-48h], xmm9
    vsubss  xmm9, xmm4, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-58h], xmm10
    vsubss  xmm10, xmm2, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-68h], xmm11
    vsubss  xmm11, xmm1, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm4, xmm1, xmm4
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  _RAX = outPoint;
  __asm
  {
    vmulss  xmm0, xmm5, xmm5
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps [rsp+0B8h+var_98], xmm14
    vmovaps [rsp+0B8h+var_A8], xmm15
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm12, xmm3
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
    vmovss  [rsp+0B8h+var_B8], xmm1
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm13, xmm6, xmm1
    vmulss  xmm14, xmm4, xmm1
    vmulss  xmm15, xmm5, xmm1
    vmulss  xmm1, xmm14, xmm14
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm15, xmm15
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm3, xmm14, xmm9
    vmulss  xmm0, xmm13, xmm11
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm15, xmm10
    vaddss  xmm7, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm5, xmm0, cs:__real@40800000
    vmulss  xmm0, xmm11, xmm11
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm12
    vmulss  xmm3, xmm0, xmm6
    vmulss  xmm1, xmm3, cs:__real@40800000
    vsubss  xmm2, xmm5, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vmulss  xmm0, xmm4, cs:__real@3f000000
    vmulss  xmm2, xmm7, cs:__real@c0000000
    vsubss  xmm1, xmm0, xmm7
    vsubss  xmm0, xmm2, xmm4
    vdivss  xmm5, xmm8, xmm6
    vmulss  xmm6, xmm1, xmm5
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vxorps  xmm4, xmm4, xmm4
    vcomiss xmm6, xmm4
    vmulss  xmm2, xmm1, xmm5
    vmaxss  xmm0, xmm2, xmm6
    vminss  xmm3, xmm0, [rsp+0B8h+var_B8]
    vmulss  xmm1, xmm3, xmm13
    vaddss  xmm2, xmm1, dword ptr [r8]
    vmovss  dword ptr [rax], xmm2
    vmulss  xmm0, xmm3, xmm14
    vaddss  xmm1, xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rax+4], xmm1
    vmulss  xmm2, xmm3, xmm15
    vaddss  xmm0, xmm2, dword ptr [r8+8]
    vmovss  dword ptr [rax+8], xmm0
  }
  result = 1;
  __asm { vmovaps xmm13, [rsp+0B8h+var_88] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, [rsp+0B8h+var_98]
    vmovaps xmm15, [rsp+0B8h+var_A8]
  }
  return result;
}

/*
==============
GetRandomPointsInTriangles
==============
*/

void __fastcall GetRandomPointsInTriangles(Triangle *triangles, int numTriangles, double totalArea, vec3_t *outPoints, int numPoints)
{
  __int64 v17; 
  __int64 v19; 
  __int64 v23; 
  bool v24; 
  vec3_t point; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm7 }
  v17 = numPoints;
  v19 = numTriangles;
  __asm
  {
    vmovss  [rsp+128h+var_F0], xmm2
    vmovaps xmm7, xmm2
  }
  if ( numPoints > 0 )
  {
    _RDI = &outPoints->v[2];
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovaps xmmword ptr [r11-88h], xmm11
      vmovaps xmmword ptr [r11-98h], xmm12
      vmovaps xmmword ptr [r11-0A8h], xmm13
      vmovaps [rsp+128h+var_B8], xmm14
      vmovaps [rsp+128h+var_C8], xmm15
    }
    do
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
      *(double *)&_XMM0 = G_random();
      v23 = 0i64;
      v24 = 0;
      if ( v19 > 0 )
      {
        __asm { vdivss  xmm2, xmm9, xmm7 }
        _RBX = triangles;
        while ( 1 )
        {
          __asm
          {
            vmulss  xmm1, xmm2, dword ptr [rbx+24h]
            vaddss  xmm6, xmm6, xmm1
            vcomiss xmm6, xmm0
          }
          if ( !v24 )
            break;
          ++v23;
          ++_RBX;
          v24 = v23 < (unsigned __int64)v19;
          if ( v23 >= v19 )
            goto LABEL_13;
        }
        *(double *)&_XMM0 = G_random();
        __asm { vmovaps xmm10, xmm0 }
        *(double *)&_XMM0 = G_random();
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]
          vmovss  xmm3, dword ptr [rbx+4]
          vmovss  xmm4, dword ptr [rbx+8]
          vmovss  xmm1, dword ptr [rbx+0Ch]
          vsubss  xmm12, xmm1, xmm2
          vmovss  xmm1, dword ptr [rbx+10h]
          vsubss  xmm13, xmm1, xmm3
          vmovss  xmm1, dword ptr [rbx+14h]
          vsubss  xmm14, xmm1, xmm4
          vmovss  xmm1, dword ptr [rbx+1Ch]
          vsubss  xmm5, xmm1, xmm3
          vmovaps xmm11, xmm0
          vmovss  xmm0, dword ptr [rbx+18h]
          vsubss  xmm15, xmm0, xmm2
          vmovss  xmm0, dword ptr [rbx+20h]
          vsubss  xmm8, xmm0, xmm4
          vmulss  xmm1, xmm12, xmm10
          vmulss  xmm0, xmm15, xmm11
          vaddss  xmm1, xmm1, xmm0
          vaddss  xmm6, xmm1, xmm2
          vmulss  xmm2, xmm13, xmm10
          vmulss  xmm0, xmm5, xmm11
          vaddss  xmm1, xmm2, xmm0
          vmulss  xmm0, xmm8, xmm11
          vaddss  xmm7, xmm1, xmm3
          vmulss  xmm2, xmm14, xmm10
          vaddss  xmm1, xmm2, xmm0
          vmovss  [rsp+128h+var_F4], xmm8
          vaddss  xmm8, xmm1, xmm4
          vmovss  dword ptr [rsp+128h+point+8], xmm8
          vmovss  [rsp+128h+var_F8], xmm5
          vmovss  dword ptr [rsp+128h+point], xmm6
          vmovss  dword ptr [rsp+128h+point+4], xmm7
        }
        if ( !Nav_PointWithinTriangle(_RBX, &point) )
        {
          __asm
          {
            vsubss  xmm4, xmm9, xmm10
            vsubss  xmm3, xmm9, xmm11
            vmulss  xmm1, xmm4, xmm12
            vmulss  xmm0, xmm3, xmm15
            vaddss  xmm1, xmm1, xmm0
            vaddss  xmm6, xmm1, dword ptr [rbx]
            vmulss  xmm0, xmm3, [rsp+128h+var_F8]
            vmulss  xmm2, xmm4, xmm13
            vaddss  xmm1, xmm2, xmm0
            vaddss  xmm7, xmm1, dword ptr [rbx+4]
            vmulss  xmm0, xmm3, [rsp+128h+var_F4]
            vmulss  xmm2, xmm4, xmm14
            vaddss  xmm1, xmm2, xmm0
            vaddss  xmm8, xmm1, dword ptr [rbx+8]
            vmovss  dword ptr [rsp+128h+point+8], xmm8
            vmovss  dword ptr [rsp+128h+point], xmm6
            vmovss  dword ptr [rsp+128h+point+4], xmm7
          }
          if ( !Nav_PointWithinTriangle(_RBX, &point) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 829, ASSERT_TYPE_ASSERT, "( Nav_PointWithinTriangle( pTri, sum ) )", (const char *)&queryFormat, "Nav_PointWithinTriangle( pTri, sum )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  dword ptr [rdi-4], xmm7
          vmovss  xmm7, [rsp+128h+var_F0]
          vmovss  dword ptr [rdi-8], xmm6
          vmovss  dword ptr [rdi], xmm8
        }
      }
LABEL_13:
      _RDI += 3;
      --v17;
    }
    while ( v17 );
    __asm
    {
      vmovaps xmm15, [rsp+128h+var_C8]
      vmovaps xmm14, [rsp+128h+var_B8]
      vmovaps xmm13, [rsp+128h+var_A8]
      vmovaps xmm12, [rsp+128h+var_98]
      vmovaps xmm11, [rsp+128h+var_88]
      vmovaps xmm10, [rsp+128h+var_78]
      vmovaps xmm9, [rsp+128h+var_68]
      vmovaps xmm8, [rsp+128h+var_58]
      vmovaps xmm6, [rsp+128h+var_38]
    }
  }
  __asm { vmovaps xmm7, [rsp+128h+var_48] }
}

/*
==============
Nav3D_GetClosestPointInsideVolume
==============
*/
void Nav3D_GetClosestPointInsideVolume(const vec3_t *testPos, const bfx::VolumeHandle hVolume, vec3_t *outClosestPos)
{
  bfx::Vector3 v13; 
  bfx::Vector3 v14; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = outClosestPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr [rax-30h], xmm0
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [rax-2Ch], xmm1
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rax-28h], xmm0
  }
  _RAX = bfx::VolumeHandle::GetClosestPos((bfx::VolumeHandle *)hVolume.m_pProxy, &v14, &v13);
  __asm { vmovsd  xmm1, qword ptr [rax] }
  v14.m_z = _RAX->m_z;
  __asm
  {
    vmovss  dword ptr [rbx], xmm1
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, [rsp+58h+var_18]
    vmovss  dword ptr [rbx+8], xmm0
  }
  bfx::VolumeHandle::~VolumeHandle((bfx::VolumeHandle *)hVolume.m_pProxy);
}

/*
==============
Nav3D_GetClosestPointOnMesh
==============
*/
__int64 Nav3D_GetClosestPointOnMesh(nav_space_s *pSpace, const bfx::Path3DSpec *pathSpec, const vec3_t *pos, vec3_t *outClosestPos)
{
  unsigned __int8 v10; 
  bfx::VolumeHandle *v11; 
  bfx::VolumeHandle *v12; 
  bfx::VolumeHandle pClosestVolume; 
  bfx::VolumeHandle v22; 
  __int64 v23; 
  bfx::VolumeHandle *v24; 
  float m_z; 
  bfx::Vector3 posa; 
  bfx::Vector3 result; 

  v23 = -2i64;
  _RSI = outClosestPos;
  _RDI = pos;
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  if ( Nav_MeshLoaded() && Nav3D_GetClosestVolume(pSpace, _RDI, pathSpec, &pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle(&v22, &pClosestVolume);
    v12 = v11;
    v24 = v11;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  [rsp+78h+pos.m_x], xmm0
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  [rsp+78h+pos.m_y], xmm1
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+78h+pos.m_z], xmm0
    }
    _RAX = bfx::VolumeHandle::GetClosestPos(v11, &result, &posa);
    __asm { vmovsd  xmm1, qword ptr [rax] }
    m_z = _RAX->m_z;
    __asm
    {
      vmovss  dword ptr [rsi], xmm1
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm0, [rsp+78h+var_38]
      vmovss  dword ptr [rsi+8], xmm0
    }
    bfx::VolumeHandle::~VolumeHandle(v12);
    v10 = 1;
  }
  else
  {
    _RSI->v[0] = _RDI->v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rsi+8], xmm1
    }
    v10 = 0;
  }
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return v10;
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
  __int64 v17; 
  bfx::Vector3 pos; 
  bfx::VolumeHandle v19; 

  v17 = -2i64;
  _RSI = outClosestPos;
  _RBX = origin;
  bfx::VolumeHandle::VolumeHandle(&v19);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+58h+pos.m_x], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  [rsp+58h+pos.m_y], xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+58h+pos.m_z], xmm0
  }
  ClosestReachableVolume = bfx::GetClosestReachableVolume(&result, (const bfx::VolumeHandle *)startVolume.m_pProxy, &pos, pPathSpec);
  bfx::VolumeHandle::operator=(&v19, ClosestReachableVolume);
  bfx::VolumeHandle::~VolumeHandle(&result);
  if ( bfx::VolumeHandle::IsValid(&v19) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+58h+pos.m_x]
      vmovss  dword ptr [rsi], xmm0
      vmovss  xmm1, [rsp+58h+pos.m_y]
      vmovss  dword ptr [rsi+4], xmm1
      vmovss  xmm0, [rsp+58h+pos.m_z]
      vmovss  dword ptr [rsi+8], xmm0
    }
    bfx::VolumeHandle::~VolumeHandle(&v19);
    bfx::VolumeHandle::~VolumeHandle((bfx::VolumeHandle *)startVolume.m_pProxy);
    return 1;
  }
  else
  {
    bfx::VolumeHandle::~VolumeHandle(&v19);
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

  _RSI = origin;
  if ( !pClosestVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1049, ASSERT_TYPE_ASSERT, "(pClosestVolume)", (const char *)&queryFormat, "pClosestVolume", -2i64) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+68h+pos.m_x], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  [rsp+68h+pos.m_y], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+68h+pos.m_z], xmm0
  }
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

  _RSI = origin;
  if ( !pClosestVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1058, ASSERT_TYPE_ASSERT, "(pClosestVolume)", (const char *)&queryFormat, "pClosestVolume", -2i64) )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1059, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( Nav_IsRunning() )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+68h+pos.m_x], xmm0
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  [rsp+68h+pos.m_y], xmm1
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  [rsp+68h+pos.m_z], xmm0
    }
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
  bfx::Vector3 v16; 
  bfx::VolumeHandle v17; 
  bfx::VolumeHandle result; 

  _RBX = testPos;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1084, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1085, ASSERT_TYPE_ASSERT, "(pPathSpec)", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  bfx::VolumeHandle::VolumeHandle(&v17);
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1059, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( Nav_IsRunning() )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  [rsp+78h+pos.m_x], xmm0
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  [rsp+78h+pos.m_y], xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  [rsp+78h+pos.m_z], xmm0
    }
    ClosestVolume = bfx::GetClosestVolume(&result, &pSpace->hSpace, &pos, pPathSpec);
    bfx::VolumeHandle::operator=(&v17, ClosestVolume);
    bfx::VolumeHandle::~VolumeHandle(&result);
    if ( bfx::VolumeHandle::IsValid(&v17) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+78h+var_30.m_x], xmm0
        vmovss  xmm1, dword ptr [rbx+4]
        vmovss  [rsp+78h+var_30.m_y], xmm1
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  [rsp+78h+var_30.m_z], xmm0
      }
      IsPosInside = bfx::VolumeHandle::IsPosInside(&v17, &v16);
      goto LABEL_13;
    }
  }
  else
  {
    bfx::VolumeHandle::Release(&v17);
  }
  IsPosInside = 0;
LABEL_13:
  bfx::VolumeHandle::~VolumeHandle(&v17);
  return IsPosInside;
}

/*
==============
Nav3D_IsStraightLineReachable
==============
*/
bool Nav3D_IsStraightLineReachable(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, const bfx::Path3DSpec *pPathSpec)
{
  bool result; 
  bfx::Vector3 dir; 
  bfx::Vector3 startPosa; 
  bfx::Probe3DResults clientResults; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RSI = endPos;
  __asm { vmovaps xmmword ptr [rax-48h], xmm8 }
  _RBP = startPos;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1114, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1115, ASSERT_TYPE_ASSERT, "(pPathSpec)", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm8, dword ptr [rbp+4]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  xmm7, dword ptr [rbp+8]
    vsubss  xmm6, xmm0, xmm9
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm5, xmm1, xmm8
    vsubss  xmm4, xmm0, xmm7
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm10, xmm2, xmm2
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm5, xmm1
  }
  clientResults.m_collided = 0;
  __asm
  {
    vmovss  [rsp+0D8h+dir.m_y], xmm3
    vmulss  xmm2, xmm6, xmm1
    vmulss  xmm0, xmm4, xmm1
    vmovaps xmm3, xmm10; dist
    vmovss  [rsp+0D8h+startPos.m_x], xmm9
    vmovss  [rsp+0D8h+startPos.m_y], xmm8
    vmovss  [rsp+0D8h+startPos.m_z], xmm7
    vmovss  [rsp+0D8h+dir.m_x], xmm2
    vmovss  [rsp+0D8h+dir.m_z], xmm0
  }
  bfx::NavProbe3D(&pSpace->hSpace, &startPosa, &dir, *(float *)&_XMM3, pPathSpec, &clientResults);
  if ( clientResults.m_collided )
  {
    __asm
    {
      vsubss  xmm0, xmm10, [rsp+0D8h+var_88.m_distTravelled]
      vcomiss xmm0, cs:__real@3b449ba6
    }
    result = 0;
  }
  else
  {
    result = 1;
  }
  _R11 = &v48;
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
Nav_CheckBoxFit
==============
*/

__int64 __fastcall Nav_CheckBoxFit(const vec3_t *centerPoint, const vec4_t *qRot, double length, double width, const float height, AINavLayer layer, const bfx::PathSpec *pathSpec, bfx::SpaceHandle *spaceHandle)
{
  __int64 result; 
  bfx::BoxExtents extents; 
  bfx::Vector3 iPos; 
  bfx::BoxFitResults pResultsOut; 
  bfx::Quaternion iRot; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  _RDI = qRot;
  _RBX = centerPoint;
  Sys_ProfBeginNamedEvent(0xFF808080, "Nav_CheckBoxFit");
  pResultsOut.m_boxFits = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0B8h+var_50.m_snappedCenterPos.m_x], xmm0
    vmovss  [rsp+0B8h+var_50.m_snappedCenterPos.m_y], xmm0
    vmovss  [rsp+0B8h+var_50.m_snappedCenterPos.m_z], xmm0
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0B8h+iPos.m_x], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  [rsp+0B8h+iPos.m_y], xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0B8h+iPos.m_z], xmm0
    vmovss  xmm1, dword ptr [rdi]
    vmovss  [rsp+0B8h+iRot.m_x], xmm1
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0B8h+iRot.m_y], xmm0
    vmovss  xmm1, dword ptr [rdi+8]
    vmovss  [rsp+0B8h+iRot.m_z], xmm1
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  [rsp+0B8h+iRot.m_w], xmm0
    vmovss  [rsp+0B8h+extents.m_length], xmm6
    vmovss  [rsp+0B8h+extents.m_width], xmm7
    vmovss  xmm0, [rsp+0B8h+height]
    vmovss  [rsp+0B8h+extents.m_height], xmm0
  }
  LOBYTE(_RBX) = bfx::CheckBoxFit(spaceHandle, &iPos, &iRot, &extents, layer, pathSpec, &pResultsOut);
  Sys_ProfEndNamedEvent();
  result = (unsigned __int8)_RBX;
  _R11 = &v33;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
Nav_DrawPolyLinePath
==============
*/
void Nav_DrawPolyLinePath(bfx::PolylinePathRCPtr path)
{
  bfx::Color color; 

  __asm
  {
    vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000
    vmovups xmmword ptr [rsp+48h+color.m_r], xmm0
  }
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
  bfx::AreaHandle *v21; 
  const bfx::MultiPathRCPtr *v22; 
  bfx::PolylinePathRCPtr v23; 
  unsigned int v24; 
  bfx::Vector3 startPosa; 
  bfx::MultiPathGoal ptr; 
  bfx::MultiPathGoalOutput goalOut; 
  __int64 v29; 
  bfx::MultiPathRCPtr v30; 
  bfx::AreaHandle *v31; 
  bfx::MultiPathSpec multiPathSpec; 

  v31 = hStartArea;
  v29 = -2i64;
  _R14 = goalPos;
  _R15 = startPos;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "FindFirstNCornersOnPath");
  v13 = pPathSpec;
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 542, ASSERT_TYPE_ASSERT, "( pPathSpec )", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  v14 = cornerArray;
  if ( !cornerArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 543, ASSERT_TYPE_ASSERT, "( cornerArray )", (const char *)&queryFormat, "cornerArray") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rbp+37h+startPos.m_x], xmm0
    vmovss  xmm1, dword ptr [r15+4]
    vmovss  [rbp+37h+startPos.m_y], xmm1
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rbp+37h+startPos.m_z], xmm0
  }
  multiPathSpec.m_generatePaths = 1;
  multiPathSpec.m_maxNumCorners = numCorners;
  `eh vector constructor iterator'(&ptr, 0x28ui64, 1ui64, (void (__fastcall *)(void *))bfx::MultiPathGoal::MultiPathGoal, (void (__fastcall *)(void *))bfx::MultiPathGoal::~MultiPathGoal);
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rbp+37h+ptr], xmm0
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  [rbp+37h+var_9C], xmm1
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rbp+37h+var_98], xmm0
  }
  v21 = hGoalArea;
  bfx::AreaHandle::operator=(&ptr.m_goalArea, hGoalArea);
  bfx::MultiPathRCPtr::MultiPathRCPtr(&v30);
  if ( bfx::AreaHandle::IsValid(hStartArea) )
    v22 = bfx::SearchToMultipleGoals((bfx::MultiPathRCPtr *)&pPathSpec, hStartArea, &startPosa, v13, &multiPathSpec, &ptr, 1);
  else
    v22 = bfx::SearchToMultipleGoals((bfx::MultiPathRCPtr *)&pPathSpec, &pSpace->hSpace, &startPosa, layer, v13, &multiPathSpec, &ptr, 1);
  bfx::MultiPathRCPtr::operator=(&v30, v22);
  bfx::MultiPathRCPtr::~MultiPathRCPtr((bfx::MultiPathRCPtr *)&pPathSpec);
  if ( !bfx::MultiPathRCPtr::IsValid(&v30) )
    goto LABEL_18;
  bfx::MultiPathGoalOutput::MultiPathGoalOutput(&goalOut);
  if ( !bfx::MultiPathRCPtr::GetGoalOutput(&v30, 0, &goalOut) || !goalOut.m_goalReached )
  {
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&goalOut.m_path);
    bfx::AreaHandle::~AreaHandle(&goalOut.m_goalArea);
LABEL_18:
    Sys_ProfEndNamedEvent();
    bfx::MultiPathRCPtr::~MultiPathRCPtr(&v30);
    `eh vector destructor iterator'(&ptr, 0x28ui64, 1ui64, (void (__fastcall *)(void *))bfx::MultiPathGoal::~MultiPathGoal);
    bfx::AreaHandle::~AreaHandle(hStartArea);
    bfx::AreaHandle::~AreaHandle(v21);
    return 0i64;
  }
  if ( !bfx::PolylinePathRCPtr::IsValid(&goalOut.m_path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 570, ASSERT_TYPE_ASSERT, "( pathOutput.m_path.IsValid() )", (const char *)&queryFormat, "pathOutput.m_path.IsValid()") )
    __debugbreak();
  bfx::PolylinePathRCPtr::PolylinePathRCPtr((bfx::PolylinePathRCPtr *)&pPathSpec, &goalOut.m_path);
  v24 = Nav_SimplifyPath(pSpace, _R15, v23, layer, v13, numCorners, v14);
  Sys_ProfEndNamedEvent();
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&goalOut.m_path);
  bfx::AreaHandle::~AreaHandle(&goalOut.m_goalArea);
  bfx::MultiPathRCPtr::~MultiPathRCPtr(&v30);
  `eh vector destructor iterator'(&ptr, 0x28ui64, 1ui64, (void (__fastcall *)(void *))bfx::MultiPathGoal::~MultiPathGoal);
  bfx::AreaHandle::~AreaHandle(hStartArea);
  bfx::AreaHandle::~AreaHandle(v21);
  return v24;
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

  _RBP = endPos;
  _R14 = startPos;
  DefaultSpace = Nav_GetDefaultSpace();
  if ( !DefaultSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 584, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", 0, -2i64) )
    __debugbreak();
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 585, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+pathSpec.m_maxSearchDist], xmm0
    vmovss  xmm1, dword ptr [r14]
    vmovss  [rsp+88h+startPos.m_x], xmm1
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+88h+startPos.m_y], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  [rsp+88h+startPos.m_z], xmm1
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+goalPos.m_x], xmm0
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  [rsp+88h+goalPos.m_y], xmm1
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+goalPos.m_z], xmm0
  }
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

  _RBP = endPos;
  _R14 = startPos;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 584, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", 0, -2i64) )
    __debugbreak();
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 585, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  pathSpec.m_volumeUsageFlags = volumeUsageFlags;
  pathSpec.m_applyPenaltyFlags = applyPenaltyFlags;
  __asm
  {
    vmovss  xmm0, [rsp+88h+maxSearchDist]
    vmovss  [rsp+88h+pathSpec.m_maxSearchDist], xmm0
    vmovss  xmm1, dword ptr [r14]
    vmovss  [rsp+88h+startPos.m_x], xmm1
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+88h+startPos.m_y], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  [rsp+88h+startPos.m_z], xmm1
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+goalPos.m_x], xmm0
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  [rsp+88h+goalPos.m_y], xmm1
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+goalPos.m_z], xmm0
  }
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
  bfx::PathCreationOptions options; 
  bfx::Vector3 goalPosa; 
  bfx::Vector3 startPosa; 
  bfx::PathSpec pathSpec; 

  *(_QWORD *)&goalPosa.m_x = result;
  _RSI = goalPos;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  __asm
  {
    vmovss  [rbp+4Fh+var_80.m_pathSharingPenalty], xmm0
    vmovss  [rbp+4Fh+var_80.m_maxPathSharingPenalty], xmm0
    vmovss  [rbp+4Fh+var_80.m_maxSearchDist], xmm0
  }
  _RBX = startPos;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  [rbp+4Fh+startPos.m_x], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+4Fh+startPos.m_y], xmm1
    vmovss  xmm1, dword ptr [rsi]
  }
  pathSpec.m_snapMode = SNAP_CLOSEST;
  __asm
  {
    vmovss  [rbp+4Fh+startPos.m_z], xmm0
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rbp+4Fh+goalPos.m_x], xmm1
    vmovss  xmm1, dword ptr [rsi+8]
  }
  *(_WORD *)&options.m_performInitialNavProbe = 257;
  options.m_forceFirstPosOntoNavGraph = 0;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  __asm
  {
    vmovss  [rbp+4Fh+goalPos.m_y], xmm0
    vmovss  [rbp+4Fh+goalPos.m_z], xmm1
  }
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
  bfx::PathCreationOptions options; 
  bfx::Vector3 goalPosa; 
  bfx::Vector3 startPosa; 
  bfx::PathSpec pathSpec; 

  *(_QWORD *)&goalPosa.m_x = result;
  _RDI = goalPos;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  __asm
  {
    vmovss  [rbp+37h+var_80.m_pathSharingPenalty], xmm0
    vmovss  [rbp+37h+var_80.m_maxPathSharingPenalty], xmm0
    vmovss  [rbp+37h+var_80.m_maxSearchDist], xmm0
  }
  _RBX = startPos;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
  }
  pathSpec.m_areaUsageFlags = areaUsageFlags;
  __asm
  {
    vmovss  [rbp+37h+startPos.m_x], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+37h+startPos.m_y], xmm1
    vmovss  xmm1, dword ptr [rdi]
  }
  pathSpec.m_linkUsageFlags = linkUsageFlags;
  __asm
  {
    vmovss  [rbp+37h+startPos.m_z], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rbp+37h+goalPos.m_x], xmm1
    vmovss  xmm1, dword ptr [rdi+8]
  }
  pathSpec.m_obstacleBlockageFlags = obstacleBlockageFlags;
  __asm
  {
    vmovss  [rbp+37h+goalPos.m_y], xmm0
    vmovss  [rbp+37h+goalPos.m_z], xmm1
  }
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

__int64 __fastcall Nav_GetKindaRandomReachablePoints(nav_space_s *pSpace, const vec3_t *origin, double radius, int layer, const bfx::PathSpec *pathSpec, int numPoints, vec3_t *outPoints)
{
  int v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  int v49; 
  const bfx::AreaHandle *AdjacentArea; 
  __int64 v67; 
  bfx::ClosestPosData pDataOut; 
  bfx::AreaHandle v80; 
  bfx::Vector3 pos; 
  bfx::Vector3 posWCoord; 
  float m_z; 
  bfx::AreaHandle result; 
  __int64 v86; 
  bfx::AreaHandle v87; 
  bfx::Vector3 v88; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  v86 = -2i64;
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
    vmovaps xmm12, xmm2
  }
  _R13 = origin;
  _RBX = outPoints;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 977, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 978, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !outPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 979, ASSERT_TYPE_ASSERT, "( outPoints )", (const char *)&queryFormat, "outPoints") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  [rsp+180h+pos.m_x], xmm0
    vmovss  xmm1, dword ptr [r13+4]
    vmovss  [rsp+180h+pos.m_y], xmm1
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  [rsp+180h+pos.m_z], xmm0
  }
  bfx::GetClosestArea(&result, &pSpace->hSpace, &pos, layer, pathSpec);
  if ( !bfx::AreaHandle::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 985, ASSERT_TYPE_ASSERT, "( startArea.IsValid() )", (const char *)&queryFormat, "startArea.IsValid()") )
    __debugbreak();
  v26 = 0;
  v27 = 0;
  v28 = numPoints;
  v29 = 0i64;
  __asm
  {
    vmovss  xmm14, cs:__real@40490fdb
    vmovss  xmm15, cs:__real@40000000
    vmovss  xmm13, cs:__real@40c00000
  }
  do
  {
    if ( v29 >= v28 )
      break;
    *(double *)&_XMM0 = G_random();
    __asm
    {
      vmulss  xmm1, xmm0, xmm14
      vmulss  xmm6, xmm1, xmm15
    }
    *(double *)&_XMM0 = G_random();
    __asm
    {
      vmulss  xmm7, xmm0, xmm12
      vmovaps xmm2, xmm6
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_(v40, v39, v41, v42);
    __asm
    {
      vmulss  xmm2, xmm0, xmm7
      vshufps xmm0, xmm0, xmm0, 1
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm9, xmm1, dword ptr [r13+0]
      vaddss  xmm10, xmm2, dword ptr [r13+4]
      vmovss  xmm11, dword ptr [r13+8]
    }
    v49 = 0;
    bfx::AreaHandle::AreaHandle(&v80, &result);
    while ( 1 )
    {
      __asm
      {
        vmovss  [rsp+180h+posWCoord.m_x], xmm9
        vmovss  [rsp+180h+posWCoord.m_y], xmm10
        vmovss  [rsp+180h+posWCoord.m_z], xmm11
      }
      pDataOut.m_isEdgePos = 0;
      pDataOut.m_edgeIndex = -1;
      _RAX = bfx::AreaHandle::GetClosestPosInArea(&v80, &v88, &posWCoord, &pDataOut);
      __asm { vmovsd  xmm0, qword ptr [rax] }
      m_z = _RAX->m_z;
      __asm
      {
        vmovss  xmm6, [rsp+180h+var_110]
        vshufps xmm7, xmm0, xmm0, 55h ; 'U'
        vmovsd  [rsp+180h+var_118], xmm0
        vmovss  xmm8, dword ptr [rsp+180h+var_118]
      }
      if ( !pDataOut.m_isEdgePos )
        break;
      AdjacentArea = bfx::AreaHandle::GetAdjacentArea(&v80, &v87, pDataOut.m_edgeIndex);
      bfx::AreaHandle::operator=(&v80, AdjacentArea);
      bfx::AreaHandle::~AreaHandle(&v87);
      if ( !bfx::AreaHandle::IsValid(&v80) || !bfx::AreaHandle::IsUsable(&v80, pathSpec) )
      {
        __asm
        {
          vmovss  dword ptr [rbx], xmm8
          vmovss  dword ptr [rbx+4], xmm7
          vmovss  dword ptr [rbx+8], xmm6
          vmovss  xmm0, dword ptr [r13+0]
          vsubss  xmm3, xmm0, xmm8
          vmovss  xmm1, dword ptr [r13+4]
          vsubss  xmm2, xmm1, xmm7
          vmovss  xmm0, dword ptr [r13+8]
          vsubss  xmm4, xmm0, xmm6
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm4, xmm2, xmm2
          vaddss  xmm1, xmm12, xmm13
          vcomiss xmm4, xmm1
        }
        ++v26;
        goto LABEL_23;
      }
      if ( ++v49 >= 6 )
        goto LABEL_23;
    }
    __asm
    {
      vmovss  dword ptr [rbx], xmm8
      vmovss  dword ptr [rbx+4], xmm7
      vmovss  dword ptr [rbx+8], xmm6
    }
    ++v27;
    ++v29;
    ++_RBX;
LABEL_23:
    if ( v49 == 6 )
    {
      __asm
      {
        vmovss  dword ptr [rbx], xmm8
        vmovss  dword ptr [rbx+4], xmm7
        vmovss  dword ptr [rbx+8], xmm6
      }
      ++v27;
      ++v29;
      ++_RBX;
    }
    bfx::AreaHandle::~AreaHandle(&v80);
    v28 = numPoints;
  }
  while ( v26 < 3 );
  bfx::AreaHandle::~AreaHandle(&result);
  v67 = v27;
  _R11 = &v89;
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
  return v67;
}

/*
==============
Nav_GetLargestRepulsorBadplaceRadius
==============
*/
float Nav_GetLargestRepulsorBadplaceRadius()
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, cs:__real@bf800000
  }
  for ( _RAX = Nav_GetFirstRepulsor(); _RAX; _RAX = Nav_GetNextRepulsor(_RAX) )
  {
    if ( _RAX->bBadplace )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax+30h]
        vmaxss  xmm6, xmm1, xmm6
      }
    }
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
Nav_GetModifierLocationOnPath
==============
*/

bool __fastcall Nav_GetModifierLocationOnPath(const bfx::PolylinePathRCPtr *path, unsigned int flags, int curSegment, double minCheckDist, float maxCheckDist, vec3_t *outStartPoint, vec3_t *outEndPoint)
{
  __int64 v19; 
  bool IsValid; 
  int NumSegments; 
  bool v26; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  char v38; 
  const bfx::AreaHandle *Area; 
  int NumObstacles; 
  int v41; 
  bfx::LinkSegment *LinkSegment; 
  bool v67; 
  bfx::AreaHandle v79; 
  bfx::ObstacleHandle v80; 
  __int64 v81; 
  bfx::AreaHandle result; 
  bfx::ObstacleDat v83; 
  char v84; 
  void *retaddr; 

  _RAX = &retaddr;
  v81 = -2i64;
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
    vmovaps xmm14, xmm3
  }
  v19 = flags;
  _R12 = outStartPoint;
  _R13 = outEndPoint;
  IsValid = bfx::PolylinePathRCPtr::IsValid((bfx::PolylinePathRCPtr *)path);
  if ( IsValid )
  {
    NumSegments = bfx::PolylinePathRCPtr::GetNumSegments((bfx::PolylinePathRCPtr *)path);
    bfx::AreaHandle::AreaHandle(&v79);
    __asm { vxorps  xmm9, xmm9, xmm9 }
    v26 = curSegment <= (unsigned int)NumSegments;
    if ( curSegment < NumSegments )
    {
      __asm { vmovss  xmm13, [rsp+158h+maxCheckDist] }
      do
      {
        __asm { vcomiss xmm9, xmm13 }
        if ( !v26 )
          break;
        SegmentType = bfx::PolylinePathRCPtr::GetSegmentType((bfx::PolylinePathRCPtr *)path, curSegment);
        if ( SegmentType )
        {
          if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 524, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
            __debugbreak();
          LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment((bfx::PolylinePathRCPtr *)path, curSegment);
          if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 526, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          _RAX = bfx::LinkSegment::GetStartPos(LinkSegment);
          __asm
          {
            vmovss  xmm8, dword ptr [rax+8]
            vmovss  xmm7, dword ptr [rax+4]
            vmovss  xmm6, dword ptr [rax]
          }
          _RAX = bfx::LinkSegment::GetEndPos(LinkSegment);
          __asm
          {
            vmovss  xmm2, dword ptr [rax+8]
            vmovss  xmm1, dword ptr [rax+4]
            vmovss  xmm0, dword ptr [rax]
            vsubss  xmm3, xmm0, xmm6
            vsubss  xmm1, xmm1, xmm7
            vsubss  xmm4, xmm2, xmm8
            vmulss  xmm2, xmm1, xmm1
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm1
          }
        }
        else
        {
          SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment((bfx::PolylinePathRCPtr *)path, curSegment);
          if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 497, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          _RAX = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
          __asm
          {
            vmovss  xmm6, dword ptr [rax+8]
            vmovss  xmm7, dword ptr [rax+4]
            vmovss  xmm8, dword ptr [rax]
          }
          _RAX = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
          __asm
          {
            vmovss  xmm10, dword ptr [rax+8]
            vmovss  xmm11, dword ptr [rax+4]
            vmovss  xmm12, dword ptr [rax]
            vcomiss xmm9, xmm14
          }
          if ( !v38 )
          {
            Area = bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
            bfx::AreaHandle::operator=(&v79, Area);
            bfx::AreaHandle::~AreaHandle(&result);
            NumObstacles = bfx::AreaHandle::GetNumObstacles(&v79);
            v41 = 0;
            if ( NumObstacles > 0 )
            {
              while ( 1 )
              {
                bfx::AreaHandle::GetObstacle(&v79, &v80, v41);
                if ( (v19 & bfx::ObstacleHandle::GetObstacleDat(&v80, &v83)->m_userData) != 0 )
                  break;
                bfx::ObstacleHandle::~ObstacleHandle(&v80);
                if ( ++v41 >= NumObstacles )
                {
                  v19 = flags;
                  goto LABEL_14;
                }
              }
              __asm
              {
                vmovss  dword ptr [r12], xmm8
                vmovss  dword ptr [r12+4], xmm7
                vmovss  dword ptr [r12+8], xmm6
                vmovss  dword ptr [r13+0], xmm12
                vmovss  dword ptr [r13+4], xmm11
                vmovss  dword ptr [r13+8], xmm10
              }
              bfx::ObstacleHandle::~ObstacleHandle(&v80);
              v67 = 1;
              goto LABEL_24;
            }
          }
LABEL_14:
          __asm
          {
            vsubss  xmm0, xmm12, xmm8
            vsubss  xmm2, xmm11, xmm7
            vsubss  xmm3, xmm10, xmm6
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
          }
        }
        __asm { vsqrtss xmm0, xmm2, xmm2 }
        ++curSegment;
        __asm { vaddss  xmm9, xmm9, xmm0 }
        v26 = curSegment <= (unsigned int)NumSegments;
      }
      while ( curSegment < NumSegments );
    }
    v67 = 0;
LABEL_24:
    bfx::AreaHandle::~AreaHandle(&v79);
    IsValid = v67;
  }
  _R11 = &v84;
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
  __int64 v10; 
  unsigned int NumSegments; 

  _RSI = outPoint;
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
  _RAX = bfx::VolumePathSegment::GetEndPos(Segment);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  xmm0, dword ptr [rax+4]
  }
  _RSI->v[0] = _RAX->m_x;
  __asm
  {
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  dword ptr [rsi+8], xmm1
  }
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
  bfx::LinkSegment *LinkSegment; 
  float m_x; 
  __int64 v13; 
  int NumSegments; 

  _RSI = outPoint;
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
    _RAX = bfx::LinkSegment::GetEndPos(LinkSegment);
  }
  else
  {
    SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment((bfx::PolylinePathRCPtr *)path.m_pProxy, pointIdx);
    _RAX = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  xmm0, dword ptr [rax+4]
  }
  m_x = _RAX->m_x;
  __asm
  {
    vmovss  dword ptr [rsi+8], xmm1
    vmovss  dword ptr [rsi+4], xmm0
  }
  _RSI->v[0] = m_x;
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr((bfx::PolylinePathRCPtr *)path.m_pProxy);
}

/*
==============
Nav_GetRandomReachablePoints
==============
*/

__int64 __fastcall Nav_GetRandomReachablePoints(nav_space_s *pSpace, const vec3_t *origin, double radius, int layer, const bfx::PathSpec *pathSpec, int numPoints, vec3_t *outPoints)
{
  signed __int64 v7; 
  void *v18; 
  int FloodFillAreas; 
  __int64 v28; 
  __int64 v30; 
  const bfx::AreaHandle *v31; 
  __int64 v32; 
  char v33; 
  int NumEdges; 
  int v47; 
  char v53; 
  bool v75; 
  unsigned __int8 v111; 
  __int64 v112; 
  bool v124; 
  int numTriangles; 
  bfx::Vector3 v126; 
  bfx::Vector3 v127; 
  bfx::Vector3 v128; 
  bfx::AreaHandle v129; 
  bfx::AreaHandle *v130; 
  __int64 v131; 
  bfx::Vector3 pos; 
  vec3_t *outPointsa; 
  bfx::AreaHandle result; 
  __int64 v135; 
  vec3_t centroid; 
  vec3_t pt; 
  vec3_t outPoint; 
  bfx::AreaHandle ptr[64]; 
  Triangle triangles[256]; 
  char v151; 

  v18 = alloca(v7);
  v135 = -2i64;
  __asm
  {
    vmovaps [rsp+2DD0h+var_40], xmm6
    vmovaps [rsp+2DD0h+var_50], xmm7
    vmovaps [rsp+2DD0h+var_60], xmm8
    vmovaps [rsp+2DD0h+var_70], xmm9
    vmovaps [rsp+2DD0h+var_80], xmm10
    vmovaps [rsp+2DD0h+var_90], xmm11
    vmovaps [rsp+2DD0h+var_A0], xmm12
    vmovaps [rsp+2DD0h+var_B0], xmm13
    vmovaps [rsp+2DD0h+var_C0], xmm14
    vmovaps [rsp+2DD0h+var_D0], xmm15
    vmovaps xmm6, xmm2
  }
  _RDI = origin;
  outPointsa = outPoints;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 845, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 846, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !outPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 847, ASSERT_TYPE_ASSERT, "( outPoints )", (const char *)&queryFormat, "outPoints") )
    __debugbreak();
  __asm { vmulss  xmm11, xmm6, xmm6 }
  `eh vector constructor iterator'(ptr, 0x10ui64, 0x40ui64, (void (__fastcall *)(void *))bfx::AreaHandle::AreaHandle, (void (__fastcall *)(void *))bfx::AreaHandle::~AreaHandle);
  numTriangles = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rbp+2CD0h+pos.m_x], xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  [rbp+2CD0h+pos.m_y], xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rbp+2CD0h+pos.m_z], xmm0
  }
  bfx::GetClosestArea(&result, &pSpace->hSpace, &pos, layer, pathSpec);
  if ( !bfx::AreaHandle::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 861, ASSERT_TYPE_ASSERT, "( startArea.IsValid() )", (const char *)&queryFormat, "startArea.IsValid()") )
    __debugbreak();
  FloodFillAreas = bfx::GetFloodFillAreas(&result, pathSpec, 64, ptr);
  v28 = (unsigned int)FloodFillAreas;
  if ( FloodFillAreas <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 864, ASSERT_TYPE_ASSERT, "( numAreas > 0 )", (const char *)&queryFormat, "numAreas > 0") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&v129);
  __asm { vxorps  xmm12, xmm12, xmm12 }
  if ( (int)v28 <= 0 )
    goto LABEL_36;
  v30 = 0i64;
  v31 = ptr;
  v130 = ptr;
  v32 = v28;
  v131 = v28;
  do
  {
    bfx::AreaHandle::operator=(&v129, v31);
    bfx::AreaHandle::CalcCentroid(&v129, &v126);
    NumEdges = bfx::AreaHandle::GetNumEdges(&v129);
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+2DD0h+var_2D98.m_x]
      vmovsd  qword ptr [rbp+2CD0h+centroid], xmm0
    }
    centroid.v[2] = v126.m_z;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm3, xmm0, [rsp+2DD0h+var_2D98.m_x]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm2, xmm1, [rsp+2DD0h+var_2D98.m_y]
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm4, xmm0, [rsp+2DD0h+var_2D98.m_z]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm11
    }
    v47 = 0;
    if ( NumEdges <= 0 )
      goto LABEL_33;
    _RSI = &triangles[v30].m_vert[1].v[1];
    __asm
    {
      vmovss  xmm13, dword ptr [rbp+2CD0h+centroid+8]
      vmovss  xmm14, dword ptr [rbp+2CD0h+centroid+4]
      vmovss  xmm15, dword ptr [rbp+2CD0h+centroid]
    }
    v124 = !v33;
    do
    {
      _R14 = _RSI - 4;
      bfx::AreaHandle::GetEdgeStartPos(&v129, &v127, v47);
      bfx::AreaHandle::GetEdgeEndPos(&v129, &v128, v47);
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+2DD0h+var_2D88.m_x]
        vmovsd  qword ptr [rbp+2CD0h+pt], xmm0
      }
      pt.v[2] = v127.m_z;
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+2DD0h+var_2D78.m_x]
        vmovsd  qword ptr [rbp+2CD0h+outPoint], xmm0
      }
      outPoint.v[2] = v128.m_z;
      __asm
      {
        vmovss  xmm6, dword ptr [rdi]
        vsubss  xmm2, xmm6, [rsp+2DD0h+var_2D88.m_x]
        vmovss  xmm5, dword ptr [rdi+4]
        vsubss  xmm0, xmm5, [rsp+2DD0h+var_2D88.m_y]
        vmovss  xmm4, dword ptr [rdi+8]
        vsubss  xmm3, xmm4, [rsp+2DD0h+var_2D88.m_z]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm11
        vsubss  xmm3, xmm6, [rsp+2DD0h+var_2D78.m_x]
        vsubss  xmm0, xmm5, [rsp+2DD0h+var_2D78.m_y]
        vsubss  xmm4, xmm4, [rsp+2DD0h+var_2D78.m_z]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm11
      }
      v75 = !v53;
      if ( v124 )
      {
        if ( !v53 )
          goto LABEL_31;
      }
      else if ( !v53 )
      {
        __asm { vmovaps xmm3, xmm11; radiusSq }
        if ( !AdjustPtToWithinRadiusSq(&pt, _RDI, &centroid, *(double *)&_XMM3, &pt) )
          goto LABEL_31;
      }
      if ( !v75 )
        goto LABEL_27;
      __asm { vmovaps xmm3, xmm11; radiusSq }
      if ( AdjustPtToWithinRadiusSq(&outPoint, _RDI, &centroid, *(double *)&_XMM3, &outPoint) )
      {
LABEL_27:
        __asm
        {
          vmovss  dword ptr [r14], xmm15
          vmovss  dword ptr [rsi-0Ch], xmm14
          vmovss  dword ptr [rsi-8], xmm13
          vmovss  xmm0, dword ptr [rbp+2CD0h+pt]
          vmovss  dword ptr [rsi-4], xmm0
          vmovss  xmm1, dword ptr [rbp+2CD0h+pt+4]
          vmovss  dword ptr [rsi], xmm1
          vmovss  xmm0, dword ptr [rbp+2CD0h+pt+8]
          vmovss  dword ptr [rsi+4], xmm0
          vmovss  xmm7, dword ptr [rbp+2CD0h+outPoint]
          vmovss  dword ptr [rsi+8], xmm7
          vmovss  xmm8, dword ptr [rbp+2CD0h+outPoint+4]
          vmovss  dword ptr [rsi+0Ch], xmm8
          vmovss  xmm6, dword ptr [rbp+2CD0h+outPoint+8]
          vmovss  dword ptr [rsi+10h], xmm6
          vmovss  xmm0, dword ptr [rsi-4]
          vsubss  xmm10, xmm0, dword ptr [r14]
          vmovss  xmm1, dword ptr [rsi]
          vsubss  xmm9, xmm1, dword ptr [rsi-0Ch]
          vmovss  xmm0, dword ptr [rsi+4]
          vsubss  xmm4, xmm0, dword ptr [rsi-8]
          vsubss  xmm7, xmm7, dword ptr [r14]
          vsubss  xmm5, xmm8, dword ptr [rsi-0Ch]
          vsubss  xmm3, xmm6, dword ptr [rsi-8]
          vmulss  xmm1, xmm3, xmm9
          vmulss  xmm0, xmm5, xmm4
          vsubss  xmm6, xmm1, xmm0
          vmulss  xmm2, xmm7, xmm4
          vmulss  xmm1, xmm3, xmm10
          vsubss  xmm4, xmm2, xmm1
          vmulss  xmm3, xmm5, xmm10
          vmulss  xmm0, xmm7, xmm9
          vsubss  xmm5, xmm3, xmm0
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vmulss  xmm6, xmm1, cs:__real@3f000000
          vmovss  dword ptr [rsi+14h], xmm6
        }
        ++numTriangles;
        ++v30;
        _RSI += 10;
        if ( v30 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 917, ASSERT_TYPE_ASSERT, "(numTriangles < cMaxNumTriangles)", "%s\n\tran out of triangles on stack. need to increase.", "numTriangles < cMaxNumTriangles") )
        {
          __debugbreak();
          __asm { vmovss  xmm6, dword ptr [r14+24h] }
        }
        __asm { vaddss  xmm12, xmm12, xmm6 }
      }
LABEL_31:
      ++v47;
    }
    while ( v47 < NumEdges );
    v31 = v130;
    v32 = v131;
LABEL_33:
    v130 = (bfx::AreaHandle *)++v31;
    v131 = --v32;
  }
  while ( v32 );
  if ( !numTriangles )
  {
LABEL_36:
    v111 = 0;
    goto LABEL_37;
  }
  __asm { vmovaps xmm2, xmm12; totalArea }
  GetRandomPointsInTriangles(triangles, numTriangles, *(double *)&_XMM2, outPointsa, numPoints);
  v111 = 1;
LABEL_37:
  bfx::AreaHandle::~AreaHandle(&v129);
  bfx::AreaHandle::~AreaHandle(&result);
  `eh vector destructor iterator'(ptr, 0x10ui64, 0x40ui64, (void (__fastcall *)(void *))bfx::AreaHandle::~AreaHandle);
  v112 = v111;
  _R11 = &v151;
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
  return v112;
}

/*
==============
Nav_IsPointInRepulsorBadplace
==============
*/
bool Nav_IsPointInRepulsorBadplace(const vec3_t *pos, int usageFlags, int ignoreEntNum, int ignoreEntNum2)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  _RSI = pos;
  _RAX = Nav_GetFirstRepulsor();
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm7, cs:__real@42a00000
    }
    do
    {
      if ( _RAX->bBadplace && (ignoreEntNum == 2047 || _RAX->entNum != ignoreEntNum) && (ignoreEntNum2 == 2047 || _RAX->entNum != ignoreEntNum2) && (usageFlags & _RAX->usageFlags) != 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+2Ch]
          vsubss  xmm1, xmm0, dword ptr [rsi+8]
          vandps  xmm1, xmm1, xmm6
          vcomiss xmm1, xmm7
        }
        if ( (usageFlags & _RAX->usageFlags) == 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vmovss  xmm1, dword ptr [rsi+4]
            vsubss  xmm4, xmm0, dword ptr [rax+24h]
            vsubss  xmm2, xmm1, dword ptr [rax+28h]
            vmovss  xmm5, dword ptr [rax+30h]
            vmulss  xmm3, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm1, xmm5, xmm5
            vcomiss xmm4, xmm1
          }
        }
      }
      _RAX = Nav_GetNextRepulsor(_RAX);
    }
    while ( _RAX );
  }
  result = 0;
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return result;
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

  __asm { vxorps  xmm0, xmm0, xmm0 }
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  __asm
  {
    vmovss  [rsp+0B8h+pPathSpec.m_pathSharingPenalty], xmm0
    vmovss  [rsp+0B8h+pPathSpec.m_maxPathSharingPenalty], xmm0
    vmovss  [rsp+0B8h+pPathSpec.m_maxSearchDist], xmm0
  }
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
  char v12; 
  vec3_t outUp; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 295, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 296, ASSERT_TYPE_ASSERT, "( pPathSpec )", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  Nav_GetSpaceUp(pSpace, &outUp);
  result = Nav_GetClosestVerticalPos(pos, &outUp, layer, &pSpace->hSpace, pPathSpec, outSnappedPos, outAreaHandle);
  if ( result )
  {
    *(double *)&_XMM0 = Nav_Get2DDistanceSqWithUp(pos, outSnappedPos, &outUp);
    __asm { vcomiss xmm0, cs:__real@3b449ba6 }
    return v12;
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
  char v13; 
  vec3_t outUp; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 314, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pPathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 315, ASSERT_TYPE_ASSERT, "( pPathSpec )", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  Nav_GetSpaceUp(pSpace, &outUp);
  result = Nav_GetClosestVerticalPosWithHint(pos, &outUp, layer, &pSpace->hSpace, pPathSpec, outSnappedPos, hHintArea, outAreaHandle);
  if ( result )
  {
    *(double *)&_XMM0 = Nav_Get2DDistanceSqWithUp(pos, outSnappedPos, &outUp);
    __asm { vcomiss xmm0, cs:__real@3b449ba6 }
    return v13;
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
  bool IsStraightLineReachable; 
  bfx::Vector3 iEndPos; 
  bfx::Vector3 iStartPos; 

  _R14 = startPos;
  _RSI = endPos;
  Profile_Begin(271);
  if ( bfx::AreaHandle::IsUsable((bfx::AreaHandle *)hStartArea, pPathSpec) && bfx::AreaHandle::IsUsable((bfx::AreaHandle *)hEndArea, pPathSpec) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [r14+4]
      vmovss  [rsp+58h+iStartPos.m_x], xmm0
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  [rsp+58h+iStartPos.m_y], xmm1
      vmovss  xmm1, dword ptr [rsi]
      vmovss  [rsp+58h+iStartPos.m_z], xmm0
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  [rsp+58h+iEndPos.m_x], xmm1
      vmovss  xmm1, dword ptr [rsi+8]
      vmovss  [rsp+58h+iEndPos.m_y], xmm0
      vmovss  [rsp+58h+iEndPos.m_z], xmm1
    }
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
  __int64 v17; 
  vec3_t outSnappedPos; 
  vec3_t v19; 

  v17 = -2i64;
  Profile_Begin(271);
  bfx::AreaHandle::AreaHandle(&startArea);
  bfx::AreaHandle::AreaHandle(&endArea);
  if ( Nav_IsPointOnMeshCustom(pSpace, startPos, layer, pPathSpec, &outSnappedPos, &startArea) && Nav_IsPointOnMeshCustom(pSpace, endPos, layer, pPathSpec, &v19, &endArea) )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+0C8h+var_50]
      vmovsd  qword ptr [rsp+0C8h+iStartPos.m_x], xmm0
    }
    iStartPos.m_z = outSnappedPos.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+0C8h+var_40]
      vmovsd  qword ptr [rsp+0C8h+iEndPos.m_x], xmm0
    }
    iEndPos.m_z = v19.v[2];
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
bool Nav_PointWithinTriangle(Triangle *pTri, const vec3_t *point)
{
  bool v13; 
  __int64 v14; 
  signed int v16; 
  bool result; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RDI = point;
  __asm { vmovaps [rsp+88h+var_28], xmm7 }
  _RBX = pTri;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps [rsp+88h+var_58], xmm10
  }
  if ( !pTri && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 737, ASSERT_TYPE_ASSERT, "( pTri )", (const char *)&queryFormat, "pTri") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [rdi]
    vmovss  xmm9, dword ptr [rdi+4]
    vmovss  xmm10, cs:__real@bcf5c28f
    vmovss  xmm7, cs:__real@3cf5c28f
  }
  v13 = 0;
  v14 = 0i64;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v16 = 1;
  while ( 1 )
  {
    __asm { vsubss  xmm3, xmm8, dword ptr [rbx+r8*4] }
    _RCX = 3i64 * (v16 % 3);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rcx*4]
      vsubss  xmm5, xmm0, dword ptr [rbx+r8*4]
      vmovss  xmm1, dword ptr [rbx+rcx*4+4]
      vsubss  xmm0, xmm9, dword ptr [rbx+r8*4+4]
      vsubss  xmm4, xmm1, dword ptr [rbx+r8*4+4]
      vmulss  xmm2, xmm5, xmm0
      vmulss  xmm1, xmm4, xmm3
      vsubss  xmm0, xmm2, xmm1
      vcomiss xmm0, xmm10
    }
    if ( v16 > (unsigned int)(3 * (v16 / 3)) )
    {
      __asm { vcomiss xmm0, xmm7 }
      if ( v16 < (unsigned int)(3 * (v16 / 3)) )
      {
LABEL_11:
        result = 1;
        goto LABEL_13;
      }
    }
    if ( v14 )
      break;
    __asm { vcomiss xmm0, xmm6 }
    v13 = (unsigned __int8)v14 != 0i64;
LABEL_10:
    ++v16;
    if ( ++v14 >= 3 )
      goto LABEL_11;
  }
  __asm { vcomiss xmm0, xmm6 }
  if ( !v13 )
    goto LABEL_10;
  result = 0;
LABEL_13:
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
  }
  return result;
}

/*
==============
Nav_Simplify3DPath
==============
*/
__int64 Nav_Simplify3DPath(nav_space_s *pSpace, const vec3_t *startPt, const vec3_t *sourcePath, int segmentCount, int maxNumPoints, vec3_t *outPath)
{
  int v13; 
  int v15; 
  __int64 v16; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  int v22; 
  int v23; 
  __int64 v24; 
  int v35; 
  __int64 v36; 
  float *v37; 
  bfx::Path3DSpec pathSpec; 
  const vec3_t *v39; 
  vec3_t startPos; 
  vec3_t endPos; 

  _RBX = startPt;
  _R12 = sourcePath;
  v39 = sourcePath;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 627, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !outPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 628, ASSERT_TYPE_ASSERT, "( outPath )", (const char *)&queryFormat, "outPath") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 629, ASSERT_TYPE_ASSERT, "( sourcePath )", (const char *)&queryFormat, "sourcePath") )
    __debugbreak();
  Profile_Begin(276);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
  }
  v13 = 0;
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+startPos], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
  }
  v15 = -1;
  v35 = 0;
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+startPos+8], xmm0
    vmovss  dword ptr [rsp+0C8h+startPos+4], xmm1
  }
  if ( segmentCount - 1 > -1 )
  {
    v16 = maxNumPoints;
    _RCX = &outPath->v[2];
    v18 = segmentCount - 1;
    v19 = 0i64;
    __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
    v36 = 0i64;
    v20 = -1i64;
    v37 = &outPath->v[2];
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      if ( v19 >= v16 )
        break;
      v22 = v15 + 1;
      v23 = v15 + 2;
      v24 = ++v20 + 1;
      if ( v15 + 2 < segmentCount )
      {
        _RDI = (__int64)&_R12[v24].z;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi-8]
            vmovss  xmm1, dword ptr [rdi-4]
            vmovss  dword ptr [rsp+0C8h+endPos], xmm0
            vmovss  xmm0, dword ptr [rdi]
            vmovss  dword ptr [rsp+0C8h+endPos+8], xmm0
            vmovss  dword ptr [rsp+0C8h+endPos+4], xmm1
          }
          if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 195, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
            __debugbreak();
          if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 196, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
            __debugbreak();
          *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
          __asm { vmovss  [rsp+0C8h+pathSpec.m_maxSearchDist], xmm6 }
          if ( Nav_Trace3D(pSpace, &startPos, &endPos, &pathSpec, NULL) )
            break;
          v22 = v23;
          v20 = v24;
          ++v23;
          ++v24;
          _RDI += 12i64;
        }
        while ( v23 < segmentCount );
        _R12 = v39;
        v18 = segmentCount - 1;
        _RCX = v37;
        v19 = v36;
        v16 = maxNumPoints;
      }
      _RAX = 3 * v20;
      __asm
      {
        vmovss  xmm2, dword ptr [r12+rax*4]
        vmovss  xmm1, dword ptr [r12+rax*4+4]
        vmovss  xmm0, dword ptr [r12+rax*4+8]
      }
      v13 = v35 + 1;
      ++v19;
      __asm
      {
        vmovss  dword ptr [rcx-8], xmm2
        vmovss  dword ptr [rcx-4], xmm1
        vmovss  dword ptr [rcx], xmm0
      }
      _RCX += 3;
      ++v35;
      v36 = v19;
      v15 = v22;
      v37 = _RCX;
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+startPos], xmm2
        vmovss  dword ptr [rsp+0C8h+startPos+4], xmm1
        vmovss  dword ptr [rsp+0C8h+startPos+8], xmm0
      }
    }
    while ( v22 < v18 );
    __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
  }
  if ( segmentCount && v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 663, ASSERT_TYPE_ASSERT, "( segmentCount == 0 || numPoints > 0 )", (const char *)&queryFormat, "segmentCount == 0 || numPoints > 0") )
    __debugbreak();
  Profile_EndInternal(NULL);
  return (unsigned int)v13;
}

/*
==============
Nav_Simplify3DPath
==============
*/
__int64 Nav_Simplify3DPath(nav_space_s *pSpace, const vec3_t *startPt, const bfx::PolylinePath3DRCPtr path, int maxNumPoints, vec3_t *outPath)
{
  __int64 v7; 
  signed int NumSegments; 
  int v12; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v21; 
  bfx::PolylinePath3DRCPtr v22; 
  bfx::PolylinePath3DRCPtr v23; 
  __int64 result; 
  int v29; 
  __int64 v30; 
  float *v31; 
  bfx::Path3DSpec pathSpec; 
  bfx::PolylinePath3DRCPtr v33; 
  bfx::PolylinePath3DRCPtr v34; 
  __int64 v35; 
  __int64 v36; 
  void *m_pProxy; 
  vec3_t startPos; 
  vec3_t outPoint; 
  void *retaddr; 

  _R11 = &retaddr;
  v36 = -2i64;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  v7 = maxNumPoints;
  _RBX = startPt;
  m_pProxy = path.m_pProxy;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 674, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::PolylinePath3DRCPtr::IsValid((bfx::PolylinePath3DRCPtr *)path.m_pProxy) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 675, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( !outPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 676, ASSERT_TYPE_ASSERT, "( outPath )", (const char *)&queryFormat, "outPath") )
    __debugbreak();
  Profile_Begin(276);
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments((bfx::PolylinePath3DRCPtr *)path.m_pProxy);
  v12 = 0;
  v29 = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  dword ptr [rsp+0F8h+startPos], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+0F8h+startPos+4], xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+0F8h+startPos+8], xmm0
  }
  v16 = -1;
  if ( NumSegments - 1 > -1 )
  {
    v17 = v7;
    v35 = v7;
    v18 = 0i64;
    v30 = 0i64;
    _RSI = &outPath->v[2];
    v31 = &outPath->v[2];
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      if ( v18 >= v17 )
        break;
      v21 = ++v16 + 1;
      if ( v16 + 1 < NumSegments )
      {
        do
        {
          bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(&v33, (const bfx::PolylinePath3DRCPtr *)path.m_pProxy);
          Nav_GetPointOn3DPath(v22, v21, &outPoint);
          if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 195, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
            __debugbreak();
          if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 196, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
            __debugbreak();
          *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
          __asm { vmovss  [rsp+0F8h+pathSpec.m_maxSearchDist], xmm6 }
          if ( Nav_Trace3D(pSpace, &startPos, &outPoint, &pathSpec, NULL) )
            break;
          v16 = v21++;
        }
        while ( v21 < NumSegments );
        v18 = v30;
        v12 = v29;
        _RSI = v31;
      }
      bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(&v34, (const bfx::PolylinePath3DRCPtr *)path.m_pProxy);
      Nav_GetPointOn3DPath(v23, v16, &startPos);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0F8h+startPos]
        vmovss  dword ptr [rsi-8], xmm0
        vmovss  xmm1, dword ptr [rsp+0F8h+startPos+4]
        vmovss  dword ptr [rsi-4], xmm1
        vmovss  xmm0, dword ptr [rsp+0F8h+startPos+8]
        vmovss  dword ptr [rsi], xmm0
      }
      v29 = ++v12;
      v30 = ++v18;
      _RSI += 3;
      v31 = _RSI;
      v17 = v35;
    }
    while ( v16 < NumSegments - 1 );
  }
  if ( NumSegments && v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 712, ASSERT_TYPE_ASSERT, "( segmentCount == 0 || numPoints > 0 )", (const char *)&queryFormat, "segmentCount == 0 || numPoints > 0") )
    __debugbreak();
  Profile_EndInternal(NULL);
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr((bfx::PolylinePath3DRCPtr *)path.m_pProxy);
  result = (unsigned int)v12;
  __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
  return result;
}

/*
==============
Nav_SimplifyPath
==============
*/
__int64 Nav_SimplifyPath(nav_space_s *pSpace, const vec3_t *startPt, const bfx::PolylinePathRCPtr path, AINavLayer layer, const bfx::PathSpec *pPathSpec, int maxNumPoints, vec3_t *outPath)
{
  bfx::PolylinePathRCPtr *m_pProxy; 
  int v18; 
  int v19; 
  int v20; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::AreaHandle *Area; 
  bfx::AreaHandle *v42; 
  bool IsStraightLineReachable; 
  const bfx::AreaHandle *v52; 
  const bfx::AreaHandle *v54; 
  __int64 v55; 
  bfx::LinkSegment *LinkSegment; 
  const bfx::Vector3 *EndPos; 
  const bfx::AreaHandle *ClosestArea; 
  int NumSegments; 
  bfx::AreaHandle startArea; 
  unsigned int layera[2]; 
  const vec3_t *v76; 
  bfx::Vector3 iEndPos; 
  bfx::Vector3 iStartPos; 
  bfx::SpaceHandle *spaceHandle; 
  __int64 v80; 
  void *v81; 
  bfx::AreaHandle result; 
  bfx::AreaHandle v83; 
  bfx::AreaHandle v84; 
  bfx::AreaHandle v85; 
  bfx::AreaHandle v86; 
  float v1; 
  bfx::PathSpec pathSpec; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  v80 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  layera[0] = layer;
  m_pProxy = (bfx::PolylinePathRCPtr *)path.m_pProxy;
  _R13 = startPt;
  v76 = startPt;
  spaceHandle = &pSpace->hSpace;
  v81 = path.m_pProxy;
  _RBX = pPathSpec;
  _RSI = outPath;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 355, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::PolylinePathRCPtr::IsValid(m_pProxy) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 356, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( !outPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 357, ASSERT_TYPE_ASSERT, "( outPath )", (const char *)&queryFormat, "outPath") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_SimplifyPath");
  NumSegments = bfx::PolylinePathRCPtr::GetNumSegments(m_pProxy);
  outPath->v[0] = _R13->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r13+4]
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  xmm1, dword ptr [r13+8]
    vmovss  dword ptr [rsi+8], xmm1
  }
  v18 = 1;
  v19 = maxNumPoints;
  if ( maxNumPoints > 1 )
  {
    bfx::AreaHandle::AreaHandle(&startArea);
    v20 = 0;
    pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
    *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
    pathSpec.m_usePathSharingPenalty = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rbp+0E0h+pathSpec.m_pathSharingPenalty], xmm0
      vmovss  [rbp+0E0h+pathSpec.m_maxPathSharingPenalty], xmm0
      vmovss  [rbp+0E0h+pathSpec.m_maxSearchDist], xmm0
    }
    bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
    pathSpec.m_snapMode = SNAP_CLOSEST;
    if ( pPathSpec )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rbp+0E0h+pathSpec.m_obstacleMode], ymm0
        vmovups ymm1, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rbp+0E0h+pathSpec.m_maxSearchDist], ymm1
        vmovups xmm0, xmmword ptr [rbx+40h]
        vmovups xmmword ptr [rbp+40h], xmm0
      }
    }
    if ( NumSegments > 0 )
    {
      __asm { vmovss  xmm9, cs:__real@3a83126f }
      while ( 1 )
      {
        SegmentType = bfx::PolylinePathRCPtr::GetSegmentType(m_pProxy, v20);
        if ( SegmentType )
        {
          if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 423, ASSERT_TYPE_ASSERT, "( segmentType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segmentType == bfx::LINK_SEGMENT") )
            __debugbreak();
          LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment(m_pProxy, v20);
          if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 426, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          _RBX = 3i64 * v18;
          _RAX = bfx::LinkSegment::GetStartPos(LinkSegment);
          __asm
          {
            vmovss  xmm1, dword ptr [rax+8]
            vmovss  xmm0, dword ptr [rax+4]
          }
          outPath[v18].v[0] = _RAX->m_x;
          __asm
          {
            vmovss  dword ptr [rsi+rbx*4+4], xmm0
            vmovss  dword ptr [rsi+rbx*4+8], xmm1
          }
          if ( ++v18 >= v19 )
            goto LABEL_40;
          _RBX = 3i64 * v18;
          _RAX = bfx::LinkSegment::GetEndPos(LinkSegment);
          __asm
          {
            vmovss  xmm1, dword ptr [rax+8]
            vmovss  xmm0, dword ptr [rax+4]
          }
          outPath[v18].v[0] = _RAX->m_x;
          __asm
          {
            vmovss  dword ptr [rsi+rbx*4+4], xmm0
            vmovss  dword ptr [rsi+rbx*4+8], xmm1
          }
          if ( ++v18 >= v19 )
          {
LABEL_40:
            if ( v18 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 441, ASSERT_TYPE_ASSERT, "( numPoints > 0 )", (const char *)&queryFormat, "numPoints > 0") )
              __debugbreak();
            m_pProxy = (bfx::PolylinePathRCPtr *)path.m_pProxy;
            break;
          }
          EndPos = bfx::LinkSegment::GetEndPos(LinkSegment);
          ClosestArea = bfx::GetClosestArea(&v86, spaceHandle, EndPos, layera[0], &bfx::g_defaultPathSpec);
          bfx::AreaHandle::operator=(&startArea, ClosestArea);
          bfx::AreaHandle::~AreaHandle(&v86);
        }
        else
        {
          SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(m_pProxy, v20);
          if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 384, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          if ( !v20 )
          {
            _RAX = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
            __asm
            {
              vmovss  xmm2, dword ptr [rax+8]
              vmovss  xmm1, dword ptr [rax+4]
              vmovss  xmm0, dword ptr [rax]
              vmovss  [rbp+0E0h+v1], xmm0
              vmovss  [rbp+0E0h+var_F4], xmm1
              vmovss  [rbp+0E0h+var_F0], xmm2
              vmovaps xmm2, xmm9; epsilon
            }
            if ( !VecNCompareCustomEpsilon(_R13->v, &v1, *(float *)&_XMM2, 3) )
            {
              _RCX = 3i64 * v18;
              __asm
              {
                vmovss  xmm0, [rbp+0E0h+v1]
                vmovss  dword ptr [rsi+rcx*4], xmm0
                vmovss  xmm1, [rbp+0E0h+var_F4]
                vmovss  dword ptr [rsi+rcx*4+4], xmm1
                vmovss  xmm0, [rbp+0E0h+var_F0]
                vmovss  dword ptr [rsi+rcx*4+8], xmm0
              }
              if ( ++v18 >= v19 )
                goto LABEL_40;
            }
            Area = bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
            bfx::AreaHandle::operator=(&startArea, Area);
            bfx::AreaHandle::~AreaHandle(&result);
          }
          _RAX = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
          __asm
          {
            vmovss  xmm6, dword ptr [rax+8]
            vmovss  xmm7, dword ptr [rax+4]
            vmovss  xmm8, dword ptr [rax]
          }
          if ( !bfx::AreaHandle::IsValid(&startArea) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 403, ASSERT_TYPE_ASSERT, "( hPrevArea.IsValid() )", (const char *)&queryFormat, "hPrevArea.IsValid()") )
            __debugbreak();
          v42 = bfx::SurfaceSegment::GetArea(SurfaceSegment, &v83);
          _R13 = 3i64 * v18;
          Profile_Begin(271);
          if ( bfx::AreaHandle::IsUsable(&startArea, &pathSpec) && bfx::AreaHandle::IsUsable(v42, &pathSpec) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+r13*4-0Ch]
              vmovss  [rsp+1E0h+iStartPos.m_x], xmm0
              vmovss  xmm1, dword ptr [rsi+r13*4-8]
              vmovss  [rsp+1E0h+iStartPos.m_y], xmm1
              vmovss  xmm0, dword ptr [rsi+r13*4-4]
              vmovss  [rsp+1E0h+iStartPos.m_z], xmm0
              vmovss  [rsp+1E0h+iEndPos.m_x], xmm8
              vmovss  [rsp+1E0h+iEndPos.m_y], xmm7
              vmovss  [rsp+1E0h+iEndPos.m_z], xmm6
            }
            IsStraightLineReachable = bfx::IsStraightLineReachable(&iStartPos, &startArea, &iEndPos, v42, &pathSpec);
            Profile_EndInternal(NULL);
          }
          else
          {
            Profile_EndInternal(NULL);
            IsStraightLineReachable = 0;
          }
          bfx::AreaHandle::~AreaHandle(&v83);
          if ( IsStraightLineReachable )
          {
            v19 = maxNumPoints;
          }
          else
          {
            _RBX = 3i64 * v18;
            _RAX = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
            __asm
            {
              vmovss  xmm1, dword ptr [rax+8]
              vmovss  xmm0, dword ptr [rax+4]
            }
            outPath[v18].v[0] = _RAX->m_x;
            __asm
            {
              vmovss  dword ptr [rsi+rbx*4+4], xmm0
              vmovss  dword ptr [rsi+rbx*4+8], xmm1
            }
            ++v18;
            v19 = maxNumPoints;
            if ( v18 >= maxNumPoints )
              goto LABEL_40;
            v52 = bfx::SurfaceSegment::GetArea(SurfaceSegment, &v84);
            bfx::AreaHandle::operator=(&startArea, v52);
            bfx::AreaHandle::~AreaHandle(&v84);
          }
          if ( v20 == NumSegments - 1 )
          {
            _RCX = 3i64 * v18;
            __asm
            {
              vmovss  dword ptr [rsi+rcx*4], xmm8
              vmovss  dword ptr [rsi+rcx*4+4], xmm7
              vmovss  dword ptr [rsi+rcx*4+8], xmm6
            }
            if ( ++v18 >= v19 )
              goto LABEL_40;
            v54 = bfx::SurfaceSegment::GetArea(SurfaceSegment, &v85);
            bfx::AreaHandle::operator=(&startArea, v54);
            bfx::AreaHandle::~AreaHandle(&v85);
          }
          _R13 = v76;
        }
        ++v20;
        m_pProxy = (bfx::PolylinePathRCPtr *)path.m_pProxy;
        if ( v20 >= NumSegments )
          goto LABEL_40;
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
  v55 = (unsigned int)v18;
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  return v55;
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
  __asm { vxorps  xmm0, xmm0, xmm0 }
  *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
  __asm { vmovss  [rsp+48h+pathSpec.m_maxSearchDist], xmm0 }
  return Nav_Trace3D(pSpace, startPos, endPos, &pathSpec, NULL);
}

/*
==============
Nav_Trace3D
==============
*/
_BOOL8 Nav_Trace3D(nav_space_s *pSpace, const vec3_t *startPos, const vec3_t *endPos, const bfx::Path3DSpec *pathSpec, nav_probe_results_3D_s *pOutResults)
{
  _BOOL8 result; 
  bfx::Probe3DResults clientResults; 
  bfx::Vector3 dir; 
  bfx::Vector3 startPosa; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = pOutResults;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RBP = endPos;
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  _R14 = startPos;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 164, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 165, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 166, ASSERT_TYPE_ASSERT, "( pathSpec )", (const char *)&queryFormat, "pathSpec") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, dword ptr [r14]
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  xmm8, dword ptr [r14+4]
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  xmm7, dword ptr [r14+8]
    vsubss  xmm6, xmm0, xmm9
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm4, xmm1, xmm8
    vsubss  xmm5, xmm0, xmm7
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm3, xmm2, xmm2; dist
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
  }
  clientResults.m_collided = 0;
  __asm
  {
    vmulss  xmm2, xmm6, xmm1
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm0, xmm5, xmm1
    vmovss  [rsp+0D8h+dir.m_x], xmm2
    vmovss  [rsp+0D8h+dir.m_y], xmm4
    vmovss  [rsp+0D8h+dir.m_z], xmm0
    vmovss  [rsp+0D8h+startPos.m_x], xmm9
    vmovss  [rsp+0D8h+startPos.m_y], xmm8
    vmovss  [rsp+0D8h+startPos.m_z], xmm7
  }
  bfx::NavProbe3D(&pSpace->hSpace, &startPosa, &dir, *(float *)&_XMM3, pathSpec, &clientResults);
  result = clientResults.m_collided;
  if ( pOutResults )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+0D8h+var_A8.m_endPos.m_x]
      vmovss  xmm1, [rsp+0D8h+var_A8.m_endNorm.m_z]
      vmovups xmmword ptr [rbx], xmm0
      vmovss  xmm0, [rsp+0D8h+var_A8.m_endNorm.m_y]
      vmovss  dword ptr [rbx+10h], xmm0
      vmovss  xmm0, [rsp+0D8h+var_A8.m_distTravelled]
      vmovss  dword ptr [rbx+14h], xmm1
      vmovss  dword ptr [rbx+18h], xmm0
    }
    pOutResults->m_bCollided = result;
  }
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  bool v15; 
  bool result; 
  bfx::Vector3 dir; 
  bfx::Vector3 startPosa; 
  bfx::Probe3DResults clientResults; 

  _R15 = pOutResults;
  _RDI = endPos;
  __asm { vmovaps [rsp+0F8h+var_88], xmm10 }
  _RBX = startPos;
  v15 = Nav_Trace3D(pSpace, startPos, endPos, pathSpec, pOutResults);
  if ( !v15 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, dword ptr [r15+18h]
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vsubss  xmm0, xmm1, xmm4
    vmulss  xmm2, xmm0, xmm0
    vcomiss xmm2, cs:__real@3b23d70a
    vmovaps [rsp+0F8h+var_48], xmm6
    vmovaps [rsp+0F8h+var_58], xmm7
    vmovaps [rsp+0F8h+var_68], xmm8
    vmovaps [rsp+0F8h+var_78], xmm9
  }
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1114, ASSERT_TYPE_ASSERT, "(pSpace)", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 1115, ASSERT_TYPE_ASSERT, "(pPathSpec)", (const char *)&queryFormat, "pPathSpec") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  xmm7, dword ptr [rbx+8]
    vsubss  xmm6, xmm0, xmm9
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm5, xmm1, xmm8
    vsubss  xmm4, xmm0, xmm7
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm10, xmm2, xmm2
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm3, xmm5, xmm1
  }
  clientResults.m_collided = 0;
  __asm
  {
    vmovss  [rsp+0F8h+dir.m_y], xmm3
    vmulss  xmm2, xmm6, xmm1
    vmulss  xmm0, xmm4, xmm1
    vmovaps xmm3, xmm10; dist
    vmovss  [rsp+0F8h+startPos.m_x], xmm9
    vmovss  [rsp+0F8h+startPos.m_y], xmm8
    vmovss  [rsp+0F8h+startPos.m_z], xmm7
    vmovss  [rsp+0F8h+dir.m_x], xmm2
    vmovss  [rsp+0F8h+dir.m_z], xmm0
  }
  bfx::NavProbe3D(&pSpace->hSpace, &startPosa, &dir, *(float *)&_XMM3, pathSpec, &clientResults);
  __asm
  {
    vmovaps xmm9, [rsp+0F8h+var_78]
    vmovaps xmm8, [rsp+0F8h+var_68]
    vmovaps xmm7, [rsp+0F8h+var_58]
    vmovaps xmm6, [rsp+0F8h+var_48]
  }
  if ( clientResults.m_collided )
  {
    __asm
    {
      vsubss  xmm0, xmm10, [rsp+0F8h+var_A8.m_distTravelled]
      vcomiss xmm0, cs:__real@3b449ba6
    }
    result = v15;
  }
  else
  {
LABEL_10:
    result = 0;
  }
  __asm { vmovaps xmm10, [rsp+0F8h+var_88] }
  return result;
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
  bool m_collided; 
  _BOOL8 v57; 
  bfx::ProbeSpec probeSpec; 
  bfx::Vector3 result; 
  bfx::ProbeResults results; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  float m_z; 
  float v70; 
  __int64 v71; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  v71 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _RSI = endPos;
  _R14 = startPos;
  _RBX = pOutResults;
  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 86, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 87, ASSERT_TYPE_ASSERT, "( pathSpec )", (const char *)&queryFormat, "pathSpec") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_Trace");
  __asm
  {
    vmovss  xmm9, dword ptr [r14]
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm6, xmm0, xmm9
    vmovss  xmm8, dword ptr [r14+4]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm5, xmm1, xmm8
    vmovss  xmm7, dword ptr [r14+8]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, xmm7
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm10, xmm2, xmm2
    vcmpless xmm0, xmm10, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm10, xmm2, xmm0
    vmovss  [rsp+150h+var_110.m_probeType], xmm1
    vdivss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm6, xmm0
    vmulss  xmm3, xmm5, xmm0
    vmulss  xmm1, xmm4, xmm0
    vmovss  [rbp+50h+iStartPos.m_x], xmm9
    vmovss  [rbp+50h+iStartPos.m_y], xmm8
    vmovss  [rbp+50h+iStartPos.m_z], xmm7
    vmovss  [rbp+50h+dir.m_x], xmm2
    vmovss  [rbp+50h+dir.m_y], xmm3
    vmovss  [rbp+50h+dir.m_z], xmm1
  }
  probeSpec.m_probeType = NAVPROBE_TYPE_FULL3D;
  bfx::AreaHandle::AreaHandle(&results.m_endArea);
  results.m_collided = 0;
  results.m_collideEdgeIndex = -1;
  results.m_generatePath = 0;
  bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
  __asm { vmovaps xmm3, xmm10; dist }
  bfx::NavProbe(hStartArea, &iStartPos, &dir, *(float *)&_XMM3, pathSpec, &probeSpec, &results);
  if ( pOutResults )
  {
    __asm
    {
      vmovss  xmm0, [rsp+150h+var_F8.m_endPos.m_x]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, [rsp+150h+var_F8.m_endPos.m_y]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, [rsp+150h+var_F8.m_endPos.m_z]
      vmovss  dword ptr [rbx+8], xmm0
    }
    pOutResults->m_bCollided = results.m_collided;
    __asm
    {
      vmovss  xmm0, [rsp+150h+var_F8.m_distTravelled]
      vmovss  dword ptr [rbx+30h], xmm0
    }
    bfx::AreaHandle::operator=(&pOutResults->m_hEndArea, &results.m_endArea);
    if ( results.m_collided )
    {
      _RAX = bfx::AreaHandle::GetEdgeStartPos(&results.m_endArea, &result, results.m_collideEdgeIndex);
      __asm { vmovsd  xmm7, qword ptr [rax] }
      m_z = _RAX->m_z;
      _RAX = bfx::AreaHandle::GetEdgeEndPos(&results.m_endArea, &result, results.m_collideEdgeIndex);
      __asm { vmovsd  xmm6, qword ptr [rax] }
      v70 = _RAX->m_z;
      _RAX = bfx::AreaHandle::GetNormal(&results.m_endArea, &result);
      __asm { vmovsd  xmm1, qword ptr [rax] }
      result.m_z = _RAX->m_z;
      __asm
      {
        vmovss  dword ptr [rbx+0Ch], xmm7
        vshufps xmm0, xmm7, xmm7, 55h ; 'U'
        vmovss  dword ptr [rbx+10h], xmm0
        vmovss  xmm0, [rbp+50h+var_98]
        vmovss  dword ptr [rbx+14h], xmm0
        vmovss  dword ptr [rbx+18h], xmm6
        vshufps xmm0, xmm6, xmm6, 55h ; 'U'
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovss  xmm0, [rbp+50h+var_88]
        vmovss  dword ptr [rbx+20h], xmm0
        vmovss  dword ptr [rbx+24h], xmm1
        vshufps xmm0, xmm1, xmm1, 55h ; 'U'
        vmovss  dword ptr [rbx+28h], xmm0
        vmovss  xmm0, [rsp+150h+result.m_z]
        vmovss  dword ptr [rbx+2Ch], xmm0
      }
    }
  }
  Sys_ProfEndNamedEvent();
  m_collided = results.m_collided;
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
  bfx::AreaHandle::~AreaHandle(&results.m_endArea);
  v57 = m_collided;
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return v57;
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
  bool m_collided; 
  _BOOL8 v58; 
  bfx::PathSpec *v65; 
  bfx::ProbeSpec probeSpec; 
  bfx::Vector3 result; 
  bfx::ProbeResults results; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  float m_z; 
  float v72; 
  __int64 v73; 
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  v73 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _R15 = endPos;
  _R12 = startPos;
  _RBX = pOutResults;
  if ( !Nav_MeshLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 21, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded()") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 22, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !pathSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 23, ASSERT_TYPE_ASSERT, "( pathSpec )", (const char *)&queryFormat, "pathSpec") )
    __debugbreak();
  if ( (unsigned int)layer >= NAV_NUM_LAYERS )
  {
    LODWORD(v65) = layer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_query.cpp", 24, ASSERT_TYPE_ASSERT, "(unsigned)( layer ) < (unsigned)( NAV_NUM_LAYERS )", "layer doesn't index NAV_NUM_LAYERS\n\t%i not in [0, %i)", v65, 3) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Nav_Trace");
  __asm
  {
    vmovss  xmm9, dword ptr [r12]
    vmovss  xmm0, dword ptr [r15]
    vsubss  xmm6, xmm0, xmm9
    vmovss  xmm8, dword ptr [r12+4]
    vmovss  xmm1, dword ptr [r15+4]
    vsubss  xmm5, xmm1, xmm8
    vmovss  xmm7, dword ptr [r12+8]
    vmovss  xmm0, dword ptr [r15+8]
    vsubss  xmm4, xmm0, xmm7
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm10, xmm2, xmm2
    vcmpless xmm0, xmm10, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm10, xmm2, xmm0
    vmovss  [rsp+160h+var_120.m_probeType], xmm1
    vdivss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm6
    vmulss  xmm3, xmm0, xmm5
    vmulss  xmm1, xmm4, xmm0
    vmovss  [rbp+60h+iStartPos.m_x], xmm9
    vmovss  [rbp+60h+iStartPos.m_y], xmm8
    vmovss  [rbp+60h+iStartPos.m_z], xmm7
    vmovss  [rbp+60h+dir.m_x], xmm2
    vmovss  [rbp+60h+dir.m_y], xmm3
    vmovss  [rbp+60h+dir.m_z], xmm1
  }
  probeSpec.m_probeType = NAVPROBE_TYPE_FULL3D;
  bfx::AreaHandle::AreaHandle(&results.m_endArea);
  results.m_collided = 0;
  results.m_collideEdgeIndex = -1;
  results.m_generatePath = 0;
  bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
  __asm { vmovaps xmm3, xmm10; dist }
  bfx::NavProbe(&pSpace->hSpace, &iStartPos, &dir, *(float *)&_XMM3, layer, pathSpec, &probeSpec, &results);
  if ( pOutResults )
  {
    __asm
    {
      vmovss  xmm0, [rsp+160h+var_108.m_endPos.m_x]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, [rsp+160h+var_108.m_endPos.m_y]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, [rsp+160h+var_108.m_endPos.m_z]
      vmovss  dword ptr [rbx+8], xmm0
    }
    pOutResults->m_bCollided = results.m_collided;
    __asm
    {
      vmovss  xmm0, [rsp+160h+var_108.m_distTravelled]
      vmovss  dword ptr [rbx+30h], xmm0
    }
    bfx::AreaHandle::operator=(&pOutResults->m_hEndArea, &results.m_endArea);
    if ( results.m_collided )
    {
      _RAX = bfx::AreaHandle::GetEdgeStartPos(&results.m_endArea, &result, results.m_collideEdgeIndex);
      __asm { vmovsd  xmm7, qword ptr [rax] }
      m_z = _RAX->m_z;
      _RAX = bfx::AreaHandle::GetEdgeEndPos(&results.m_endArea, &result, results.m_collideEdgeIndex);
      __asm { vmovsd  xmm6, qword ptr [rax] }
      v72 = _RAX->m_z;
      _RAX = bfx::AreaHandle::GetNormal(&results.m_endArea, &result);
      __asm { vmovsd  xmm1, qword ptr [rax] }
      result.m_z = _RAX->m_z;
      __asm
      {
        vmovss  dword ptr [rbx+0Ch], xmm7
        vshufps xmm0, xmm7, xmm7, 55h ; 'U'
        vmovss  dword ptr [rbx+10h], xmm0
        vmovss  xmm0, [rbp+60h+var_A8]
        vmovss  dword ptr [rbx+14h], xmm0
        vmovss  dword ptr [rbx+18h], xmm6
        vshufps xmm0, xmm6, xmm6, 55h ; 'U'
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovss  xmm0, [rbp+60h+var_98]
        vmovss  dword ptr [rbx+20h], xmm0
        vmovss  dword ptr [rbx+24h], xmm1
        vshufps xmm0, xmm1, xmm1, 55h ; 'U'
        vmovss  dword ptr [rbx+28h], xmm0
        vmovss  xmm0, [rsp+160h+result.m_z]
        vmovss  dword ptr [rbx+2Ch], xmm0
      }
    }
  }
  Sys_ProfEndNamedEvent();
  m_collided = results.m_collided;
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
  bfx::AreaHandle::~AreaHandle(&results.m_endArea);
  v58 = m_collided;
  _R11 = &v74;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return v58;
}

