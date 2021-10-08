/*
==============
TacGraphSearch_FindClosestPointWithVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, float minRadiusZ, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraphSearch_FindClosestPointWithVisWithinRadius@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@MMM1PEBU1@PEBT3@HM@Z(pTacData, origin, minRadius, maxRadius, minRadiusZ, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
TacGraphSearchFilter_VisWithinVolume::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_VisWithinVolume::AllowPoint(TacGraphSearchFilter_VisWithinVolume *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_VisWithinVolume@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearch_AddPoint
==============
*/

void __fastcall TacGraphSearch_AddPoint(TacticalGraph *pGraph, unsigned __int16 pointID)
{
  ?TacGraphSearch_AddPoint@@YAXPEAUTacticalGraph@@G@Z(pGraph, pointID);
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithVis_Sorted
==============
*/

int __fastcall TacGraphSearch_FindPointsInRadiusWithVis_Sorted(const TacticalGraph *pGraph, const vec3_t *pos, float minRadius, float maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraphSearch_FindPointsInRadiusWithVis_Sorted@@YAHPEBUTacticalGraph@@AEBTvec3_t@@MMMPEBUtacpoint_t@@PEAPEBU3@H@Z(pGraph, pos, minRadius, maxRadius, minRadiusZ, pVisPoint, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearch_FindPointsInRadius
==============
*/

int __fastcall TacGraphSearch_FindPointsInRadius(TacticalGraph *pGraph, const vec3_t *pos, float radius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraphSearch_FindPointsInRadius@@YAHPEAUTacticalGraph@@AEBTvec3_t@@MPEAPEBUtacpoint_t@@H@Z(pGraph, pos, radius, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearchFilter_StaticNavLOS::TacGraphSearchFilter_StaticNavLOS
==============
*/

void __fastcall TacGraphSearchFilter_StaticNavLOS::TacGraphSearchFilter_StaticNavLOS(TacGraphSearchFilter_StaticNavLOS *this, const tacpoint_t *pPoints, const vec3_t *origin, const vec3_t *losPos, const bfx::AreaHandle *hArea, float maxDist2D)
{
  ??0TacGraphSearchFilter_StaticNavLOS@@QEAA@PEBUtacpoint_t@@AEBTvec3_t@@1AEBVAreaHandle@bfx@@M@Z(this, pPoints, origin, losPos, hArea, maxDist2D);
}

/*
==============
TacGraphSearchFilter::GetScore
==============
*/

double __fastcall TacGraphSearchFilter::GetScore(TacGraphSearchFilter *this, const vec3_t *pos, unsigned __int16 pointID)
{
  double result; 

  *(float *)&result = ?GetScore@TacGraphSearchFilter@@UEAAMAEBTvec3_t@@G@Z(this, pos, pointID);
  return result;
}

/*
==============
TacGraphSearch_UpdatePoint
==============
*/

void __fastcall TacGraphSearch_UpdatePoint(TacticalGraph *pGraph, unsigned __int16 pointID, const vec3_t *formerPos)
{
  ?TacGraphSearch_UpdatePoint@@YAXPEAUTacticalGraph@@GAEBTvec3_t@@@Z(pGraph, pointID, formerPos);
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisWithinConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithoutVisWithinConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  return ?TacGraphSearch_FindClosestPointWithoutVisWithinConeWithinRadius@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@MM1PEBU1@1M_N@Z(pTacData, origin, minRadius, maxRadius, pos, pTargetPoint, dir, dot, b3D);
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithoutVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, float minDistFromPos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraphSearch_FindClosestPointWithoutVisWithinRadius@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@MM1MPEBU1@PEBT3@HM@Z(pTacData, origin, minRadius, maxRadius, pos, minDistFromPos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
TacGraphSearchFilter_Vis::~TacGraphSearchFilter_Vis
==============
*/

void __fastcall TacGraphSearchFilter_Vis::~TacGraphSearchFilter_Vis(TacGraphSearchFilter_Vis *this)
{
  ??1TacGraphSearchFilter_Vis@@UEAA@XZ(this);
}

/*
==============
TacGraphSearchFilter_VisWithinVolume::~TacGraphSearchFilter_VisWithinVolume
==============
*/

void __fastcall TacGraphSearchFilter_VisWithinVolume::~TacGraphSearchFilter_VisWithinVolume(TacGraphSearchFilter_VisWithinVolume *this)
{
  ??1TacGraphSearchFilter_VisWithinVolume@@UEAA@XZ(this);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinRadiusWithNavLos
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinRadiusWithNavLos(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *losPos, const bfx::AreaHandle *hArea, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  return ?TacGraphSearch_FindClosestPointWithVisWithinRadiusWithNavLos@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@MM1PEBU1@1AEBVAreaHandle@bfx@@_NW4team_t@@@Z(pTacData, origin, minRadius, maxRadius, pos, pTargetPoint, losPos, hArea, bCheckNodeClaim, nodeClaimTeam);
}

/*
==============
TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis
==============
*/

void __fastcall TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(TacGraphSearchFilter_Vis *this, const TacticalGraph *pGraph, const vec3_t *origin, const tacpoint_t *pVisPoint, float minRadius, float minRadiusZ, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  ??0TacGraphSearchFilter_Vis@@QEAA@PEBUTacticalGraph@@AEBTvec3_t@@PEBUtacpoint_t@@MMPEBT2@HM_NW4team_t@@@Z(this, pGraph, origin, pVisPoint, minRadius, minRadiusZ, pIgnoreVecs, numIgnoreVecs, ignoreRadius, bCheckNodeClaim, nodeClaimTeam);
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithoutVis
==============
*/

int __fastcall TacGraphSearch_FindPointsInRadiusWithoutVis(const TacticalGraph *pGraph, const vec3_t *pos, float minRadius, float maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraphSearch_FindPointsInRadiusWithoutVis@@YAHPEBUTacticalGraph@@AEBTvec3_t@@MMMPEBUtacpoint_t@@PEAPEBU3@H@Z(pGraph, pos, minRadius, maxRadius, minRadiusZ, pVisPoint, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearchFilter_NoVis::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_NoVis::AllowPoint(TacGraphSearchFilter_NoVis *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_NoVis@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearchFilter::~TacGraphSearchFilter
==============
*/

void __fastcall TacGraphSearchFilter::~TacGraphSearchFilter(TacGraphSearchFilter *this)
{
  ??1TacGraphSearchFilter@@UEAA@XZ(this);
}

/*
==============
TacGraphSearchFilter_NoVisWithinCone::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_NoVisWithinCone::AllowPoint(TacGraphSearchFilter_NoVisWithinCone *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_NoVisWithinCone@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinVolume
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinVolume(const TacticalGraphData *pTacData, const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraphSearch_FindClosestPointWithVisWithinVolume@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@PEBUgentity_s@@AEBTvec3_t@@PEBU1@PEBT4@HM@Z(pTacData, pVolume, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
TacGraphSearch_FindPointsInRadius_Sorted
==============
*/

int __fastcall TacGraphSearch_FindPointsInRadius_Sorted(const TacticalGraph *pGraph, const vec3_t *pos, float maxRadius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraphSearch_FindPointsInRadius_Sorted@@YAHPEBUTacticalGraph@@AEBTvec3_t@@MPEAPEBUtacpoint_t@@H@Z(pGraph, pos, maxRadius, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  return ?TacGraphSearch_FindClosestPointWithVisWithinConeWithinRadius@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@MM1PEBU1@1M_N@Z(pTacData, origin, minRadius, maxRadius, pos, pTargetPoint, dir, dot, b3D);
}

/*
==============
TacGraphSearch_FindClosestPoint
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPoint(const TacticalGraphData *pTacData, const vec3_t *pos)
{
  return ?TacGraphSearch_FindClosestPoint@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@@Z(pTacData, pos);
}

/*
==============
TacGraphSearch_FindPointsInVolume
==============
*/

int __fastcall TacGraphSearch_FindPointsInVolume(const TacticalGraph *pGraph, const gentity_s *pVolume, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraphSearch_FindPointsInVolume@@YAHPEBUTacticalGraph@@PEBUgentity_s@@PEAPEBUtacpoint_t@@H@Z(pGraph, pVolume, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearch_CalcOpenView
==============
*/

void __fastcall TacGraphSearch_CalcOpenView(const TacticalGraph *pGraph, const vec3_t *pos, float radius, const tacpoint_t *pOriginPoint, float *pResults, int numSlices)
{
  ?TacGraphSearch_CalcOpenView@@YAXPEBUTacticalGraph@@AEBTvec3_t@@MPEBUtacpoint_t@@PEAMH@Z(pGraph, pos, radius, pOriginPoint, pResults, numSlices);
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithinCone
==============
*/

int __fastcall TacGraphSearch_FindPointsInRadiusWithinCone(const TacticalGraph *pGraph, const vec3_t *pos, float radius, const vec3_t *forward, float dot, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraphSearch_FindPointsInRadiusWithinCone@@YAHPEBUTacticalGraph@@AEBTvec3_t@@M1MPEAPEBUtacpoint_t@@H@Z(pGraph, pos, radius, forward, dot, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearchFilter_NoVis::~TacGraphSearchFilter_NoVis
==============
*/

void __fastcall TacGraphSearchFilter_NoVis::~TacGraphSearchFilter_NoVis(TacGraphSearchFilter_NoVis *this)
{
  ??1TacGraphSearchFilter_NoVis@@UEAA@XZ(this);
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisWithinVolume
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithoutVisWithinVolume(const TacticalGraphData *pTacData, const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraphSearch_FindClosestPointWithoutVisWithinVolume@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@PEBUgentity_s@@AEBTvec3_t@@PEBU1@PEBT4@HM@Z(pTacData, pVolume, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
TacGraphSearch_Validate_r
==============
*/

bool __fastcall TacGraphSearch_Validate_r(tacpoint_t *pPoints, tacpoint_search_node_t *pNode)
{
  return ?TacGraphSearch_Validate_r@@YA_NPEAUtacpoint_t@@PEAUtacpoint_search_node_t@@@Z(pPoints, pNode);
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisNearConeWithinVolume
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithoutVisNearConeWithinVolume(const TacticalGraphData *pTacData, const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  return ?TacGraphSearch_FindClosestPointWithoutVisNearConeWithinVolume@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@PEBUgentity_s@@AEBTvec3_t@@PEBU1@2M@Z(pTacData, pVolume, pos, pTargetPoint, dir, weight);
}

/*
==============
TacGraphSearchFilter_VisWithinCone::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_VisWithinCone::AllowPoint(TacGraphSearchFilter_VisWithinCone *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_VisWithinCone@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearchFilter_NoVisWithinVolume::~TacGraphSearchFilter_NoVisWithinVolume
==============
*/

void __fastcall TacGraphSearchFilter_NoVisWithinVolume::~TacGraphSearchFilter_NoVisWithinVolume(TacGraphSearchFilter_NoVisWithinVolume *this)
{
  ??1TacGraphSearchFilter_NoVisWithinVolume@@UEAA@XZ(this);
}

/*
==============
TacGraphSearchFilter_ViewCone::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_ViewCone::AllowPoint(TacGraphSearchFilter_ViewCone *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_ViewCone@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisNearConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithoutVisNearConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  return ?TacGraphSearch_FindClosestPointWithoutVisNearConeWithinRadius@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@M1PEBU1@1M@Z(pTacData, origin, radius, pos, pTargetPoint, dir, weight);
}

/*
==============
TacGraphSearchFilter_StaticNavLOS::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_StaticNavLOS::AllowPoint(TacGraphSearchFilter_StaticNavLOS *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_StaticNavLOS@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  return ?TacGraphSearch_FindClosestPointWithVisWithinRadius@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@M1PEBU1@PEBT3@HM@Z(pTacData, origin, radius, pos, pTargetPoint, pIgnoreVecs, numIgnoreVecs, ignoreRadius);
}

/*
==============
TacGraphSearchFilter_NoVisWithinVolume::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_NoVisWithinVolume::AllowPoint(TacGraphSearchFilter_NoVisWithinVolume *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_NoVisWithinVolume@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearch_GetNumBytes
==============
*/

int __fastcall TacGraphSearch_GetNumBytes(const TacticalGraph *pGraph)
{
  return ?TacGraphSearch_GetNumBytes@@YAHPEBUTacticalGraph@@@Z(pGraph);
}

/*
==============
TacGraphSearch_FindPointsInRadius
==============
*/

int __fastcall TacGraphSearch_FindPointsInRadius(const TacticalGraph *pGraph, const vec3_t *pos, float radius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraphSearch_FindPointsInRadius@@YAHPEBUTacticalGraph@@AEBTvec3_t@@MPEAPEBUtacpoint_t@@H@Z(pGraph, pos, radius, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearch_FindClosestPointWithStaticNavLos
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithStaticNavLos(const TacticalGraphData *pTacData, const vec3_t *pos, const vec3_t *losPos, const bfx::AreaHandle *hArea)
{
  return ?TacGraphSearch_FindClosestPointWithStaticNavLos@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@1AEBVAreaHandle@bfx@@@Z(pTacData, pos, losPos, hArea);
}

/*
==============
TacGraphSearchFilter_Vis::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_Vis::AllowPoint(TacGraphSearchFilter_Vis *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_Vis@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearchFilter_VisNearCone::GetScore
==============
*/

double __fastcall TacGraphSearchFilter_VisNearCone::GetScore(TacGraphSearchFilter_VisNearCone *this, const vec3_t *pos, unsigned __int16 pointID)
{
  double result; 

  *(float *)&result = ?GetScore@TacGraphSearchFilter_VisNearCone@@UEAAMAEBTvec3_t@@G@Z(this, pos, pointID);
  return result;
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithVis
==============
*/

int __fastcall TacGraphSearch_FindPointsInRadiusWithVis(const TacticalGraph *pGraph, const vec3_t *pos, float minRadius, float maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return ?TacGraphSearch_FindPointsInRadiusWithVis@@YAHPEBUTacticalGraph@@AEBTvec3_t@@MMMPEBUtacpoint_t@@PEAPEBU3@H@Z(pGraph, pos, minRadius, maxRadius, minRadiusZ, pVisPoint, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearchFilter_CalcOpenView::AllowPoint
==============
*/

bool __fastcall TacGraphSearchFilter_CalcOpenView::AllowPoint(TacGraphSearchFilter_CalcOpenView *this, unsigned __int16 pointID)
{
  return ?AllowPoint@TacGraphSearchFilter_CalcOpenView@@UEAA_NG@Z(this, pointID);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisNearConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisNearConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, float weight, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  return ?TacGraphSearch_FindClosestPointWithVisNearConeWithinRadius@@YAPEBUtacpoint_t@@PEBUTacticalGraphData@@AEBTvec3_t@@M1PEBU1@1MM_NW4team_t@@@Z(pTacData, origin, radius, pos, pTargetPoint, dir, dot, weight, bCheckNodeClaim, nodeClaimTeam);
}

/*
==============
TacGraphSearchFilter_StaticNavLOS::TacGraphSearchFilter_StaticNavLOS
==============
*/
void TacGraphSearchFilter_StaticNavLOS::TacGraphSearchFilter_StaticNavLOS(TacGraphSearchFilter_StaticNavLOS *this, const tacpoint_t *pPoints, const vec3_t *origin, const vec3_t *losPos, const bfx::AreaHandle *hArea, float maxDist2D)
{
  _RDI = losPos;
  _RSI = this;
  this->m_pPoints = pPoints;
  this->m_SearchOrigin.v[0] = origin->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rcx+14h], xmm0
    vmovss  xmm1, dword ptr [r8+8]
    vmovss  dword ptr [rcx+18h], xmm1
  }
  this->__vftable = (TacGraphSearchFilter_StaticNavLOS_vtbl *)&TacGraphSearchFilter_StaticNavLOS::`vftable';
  bfx::AreaHandle::AreaHandle(&this->m_hArea);
  _RSI->m_PathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&_RSI->m_PathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&_RSI->m_PathSpec.m_areaPenaltyFlags = -1i64;
  _RSI->m_PathSpec.m_usePathSharingPenalty = 0;
  *(_QWORD *)&_RSI->m_PathSpec.m_pathSharingPenalty = 0i64;
  _RSI->m_PathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&_RSI->m_PathSpec.m_penaltyTable);
  _RSI->m_PathSpec.m_snapMode = SNAP_CLOSEST;
  _RSI->m_LosPos.v[0] = _RDI->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rsi+24h], xmm0
    vmovss  xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rsi+28h], xmm1
  }
  bfx::AreaHandle::operator=(&_RSI->m_hArea, hArea);
  _RSI->m_PathSpec.m_obstacleBlockageFlags = 0;
  __asm
  {
    vmovss  xmm0, [rsp+38h+maxDist2D]
    vmulss  xmm1, xmm0, xmm0
    vmovss  dword ptr [rsi+8Ch], xmm1
  }
}

/*
==============
TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis
==============
*/
void TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(TacGraphSearchFilter_Vis *this, const TacticalGraph *pGraph, const vec3_t *origin, const tacpoint_t *pVisPoint, float minRadius, float minRadiusZ, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  tacpoint_t *m_Points; 
  unsigned __int32 v21; 
  unsigned __int32 v22; 
  bool v23; 
  unsigned __int32 v24; 
  unsigned __int32 v25; 
  int v26; 
  int v27; 

  _RDI = this;
  m_Points = pGraph->m_Points;
  this->__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter::`vftable';
  this->m_pPoints = m_Points;
  this->m_SearchOrigin.v[0] = origin->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rdi+14h], xmm0
    vmovss  xmm1, dword ptr [r8+8]
    vmovss  dword ptr [rdi+18h], xmm1
  }
  this->__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  this->m_pGraph = pGraph;
  this->m_pVisPoint = pVisPoint;
  __asm
  {
    vmovss  xmm0, [rsp+58h+minRadius]
    vmulss  xmm1, xmm0, xmm0
    vmovss  dword ptr [rdi+34h], xmm1
    vmovss  xmm2, [rsp+58h+minRadiusZ]
    vmulss  xmm0, xmm2, xmm2
    vmovss  dword ptr [rdi+38h], xmm0
  }
  this->m_pIgnoreVecs = pIgnoreVecs;
  this->m_NumIgnoreVecs = numIgnoreVecs;
  __asm
  {
    vmovss  xmm0, [rsp+58h+ignoreRadius]
    vmovss  dword ptr [rdi+4Ch], xmm0
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v21 = 2;
    if ( nodeClaimTeam <= TEAM_TWO )
      v21 = nodeClaimTeam - 1;
    v22 = v21;
    if ( v21 >= 3 )
    {
      v26 = 3;
      v24 = v21;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 205, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (3) )", "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)", v24, v26);
      goto LABEL_10;
    }
  }
  else
  {
    v22 = 1;
    if ( nodeClaimTeam <= TEAM_ONE )
      v22 = nodeClaimTeam - 1;
    if ( v22 >= 2 )
    {
      v27 = 2;
      v25 = v22;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 210, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (2) )", "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v25, v27);
LABEL_10:
      if ( v23 )
        __debugbreak();
    }
  }
  _RDI->m_NodeClaimTeam = v22;
  _RDI->m_bCheckNodeClaim = bCheckNodeClaim;
  _RDI->m_VisPointID = TacGraph_GetPointIndex(pVisPoint);
}

/*
==============
TacGraphSearchFilter::~TacGraphSearchFilter
==============
*/
void TacGraphSearchFilter::~TacGraphSearchFilter(TacGraphSearchFilter *this)
{
  this->__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter::`vftable';
}

/*
==============
TacGraphSearchFilter_NoVis::~TacGraphSearchFilter_NoVis
==============
*/
void TacGraphSearchFilter_NoVis::~TacGraphSearchFilter_NoVis(TacGraphSearchFilter_NoVis *this)
{
  this->__vftable = (TacGraphSearchFilter_NoVis_vtbl *)&TacGraphSearchFilter::`vftable';
}

/*
==============
TacGraphSearchFilter_NoVisWithinVolume::~TacGraphSearchFilter_NoVisWithinVolume
==============
*/
void TacGraphSearchFilter_NoVisWithinVolume::~TacGraphSearchFilter_NoVisWithinVolume(TacGraphSearchFilter_NoVisWithinVolume *this)
{
  this->__vftable = (TacGraphSearchFilter_NoVisWithinVolume_vtbl *)&TacGraphSearchFilter::`vftable';
}

/*
==============
TacGraphSearchFilter_Vis::~TacGraphSearchFilter_Vis
==============
*/
void TacGraphSearchFilter_Vis::~TacGraphSearchFilter_Vis(TacGraphSearchFilter_Vis *this)
{
  this->__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter::`vftable';
}

/*
==============
TacGraphSearchFilter_VisWithinVolume::~TacGraphSearchFilter_VisWithinVolume
==============
*/
void TacGraphSearchFilter_VisWithinVolume::~TacGraphSearchFilter_VisWithinVolume(TacGraphSearchFilter_VisWithinVolume *this)
{
  this->__vftable = (TacGraphSearchFilter_VisWithinVolume_vtbl *)&TacGraphSearchFilter::`vftable';
}

/*
==============
TacGraphSearchFilter_CalcOpenView::AllowPoint
==============
*/
bool TacGraphSearchFilter_CalcOpenView::AllowPoint(TacGraphSearchFilter_CalcOpenView *this, unsigned __int16 pointID)
{
  char v3; 
  int v25; 
  bool HasVis; 
  bool result; 
  vec2_t vec; 

  _RSI = this;
  _RBP = pointID;
  _RAX = this->m_pPoints;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rbp*8]
    vsubss  xmm2, xmm0, dword ptr [rsi+10h]
    vmovss  xmm0, dword ptr [rax+rbp*8+4]
    vsubss  xmm3, xmm0, dword ptr [rsi+14h]
    vmovss  xmm0, dword ptr [rax+rbp*8+8]
    vsubss  xmm1, xmm0, dword ptr [rsi+18h]
    vmulss  xmm0, xmm1, xmm1
    vcomiss xmm0, dword ptr [rsi+20h]
    vmovss  [rsp+68h+var_40], xmm1
  }
  if ( !v3 || &_RAX[pointID] == this->m_pOriginPoint )
    return 0;
  __asm
  {
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vmovaps [rsp+68h+var_28], xmm6
    vsqrtss xmm6, xmm1, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm3, xmm1
    vmovss  dword ptr [rsp+68h+vec+4], xmm1
    vmovss  dword ptr [rsp+68h+vec], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm { vdivss  xmm0, xmm0, dword ptr [rsi+34h] }
  v25 = _RSI->m_NumSlices - 1;
  __asm { vcvttss2si ebx, xmm0 }
  HasVis = TacVisGraph_HasVis(&_RSI->m_pPoints[_RBP], _RSI->m_pOriginPoint);
  _RDX = _RSI->m_pResults;
  if ( _EBX < v25 )
    v25 = _EBX;
  _RCX = v25;
  __asm { vmovss  xmm1, dword ptr [rdx+rcx*4] }
  if ( HasVis )
  {
    result = 0;
    __asm { vcomiss xmm6, xmm1 }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    result = 0;
    __asm { vucomiss xmm1, xmm0 }
    _RDX[v25] = -1.0;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
TacGraphSearchFilter_NoVis::AllowPoint
==============
*/
bool TacGraphSearchFilter_NoVis::AllowPoint(TacGraphSearchFilter_NoVis *this, unsigned __int16 pointID)
{
  int m_NumIgnoreVecs; 

  _RBX = this;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm5, dword ptr [rbx+34h]
    vcomiss xmm5, xmm0
  }
  _RCX = &this->m_pPoints[pointID];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+14h]
    vsubss  xmm4, xmm0, dword ptr [rbx+10h]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, xmm5
  }
  m_NumIgnoreVecs = _RBX->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs <= 0 )
    return !TacVisGraph_HasVis(_RBX->m_pGraph, _RBX->m_VisPointID, pointID);
  __asm { vmovss  xmm3, dword ptr [rbx+4Ch]; ignoreRadius }
  return !ShouldIgnorePoint(_RCX, _RBX->m_pIgnoreVecs, m_NumIgnoreVecs, *(float *)&_XMM3) && !TacVisGraph_HasVis(_RBX->m_pGraph, _RBX->m_VisPointID, pointID);
}

/*
==============
TacGraphSearchFilter_NoVisWithinCone::AllowPoint
==============
*/
bool TacGraphSearchFilter_NoVisWithinCone::AllowPoint(TacGraphSearchFilter_NoVisWithinCone *this, unsigned __int16 pointID)
{
  int m_NumIgnoreVecs; 
  bool result; 

  _RBX = this;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm5, dword ptr [rbx+34h]
    vcomiss xmm5, xmm0
  }
  _RSI = 5i64 * pointID;
  _RCX = &this->m_pPoints[pointID];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+14h]
    vsubss  xmm4, xmm0, dword ptr [rbx+10h]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, xmm5
  }
  m_NumIgnoreVecs = _RBX->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 )
  {
    __asm { vmovss  xmm3, dword ptr [rbx+4Ch]; ignoreRadius }
    if ( ShouldIgnorePoint(_RCX, _RBX->m_pIgnoreVecs, m_NumIgnoreVecs, *(float *)&_XMM3) )
      return 0;
  }
  if ( TacVisGraph_HasVis(_RBX->m_pGraph, _RBX->m_VisPointID, pointID) )
    return 0;
  _RAX = _RBX->m_pPoints;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovss  xmm0, dword ptr [rax+rsi*8]
    vsubss  xmm4, xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rax+rsi*8+4]
    vsubss  xmm5, xmm1, dword ptr [rbx+14h]
    vmovss  xmm0, dword ptr [rax+rsi*8+8]
    vsubss  xmm6, xmm0, dword ptr [rbx+18h]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm3, cs:__real@3f800000
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm3, xmm0
    vdivss  xmm1, xmm3, xmm0
    vmulss  xmm7, xmm5, xmm1
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
  }
  if ( _RBX->m_b3D )
  {
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm1, xmm0, xmm2
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm3, xmm0
      vdivss  xmm5, xmm3, xmm0
      vmulss  xmm1, xmm4, xmm5
      vmulss  xmm2, xmm1, dword ptr [rbx+50h]
      vmulss  xmm0, xmm7, xmm5
      vmulss  xmm3, xmm0, dword ptr [rbx+54h]
      vmulss  xmm0, xmm6, xmm5
      vmulss  xmm1, xmm0, dword ptr [rbx+58h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, dword ptr [rbx+5Ch]
    }
  }
  else
  {
    __asm
    {
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm3, xmm0
      vdivss  xmm1, xmm3, xmm0
      vmulss  xmm0, xmm7, xmm1
      vmulss  xmm3, xmm0, dword ptr [rbx+54h]
      vmulss  xmm1, xmm4, xmm1
      vmulss  xmm2, xmm1, dword ptr [rbx+50h]
      vaddss  xmm0, xmm3, xmm2
      vcomiss xmm0, dword ptr [rbx+5Ch]
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  result = _RBX->m_b3D;
  __asm { vmovaps xmm7, [rsp+48h+var_28] }
  return result;
}

/*
==============
TacGraphSearchFilter_NoVisWithinVolume::AllowPoint
==============
*/
bool TacGraphSearchFilter_NoVisWithinVolume::AllowPoint(TacGraphSearchFilter_NoVisWithinVolume *this, unsigned __int16 pointID)
{
  TacGraphSearchFilter_NoVisWithinVolume *v2; 
  const tacpoint_t *v4; 
  int m_NumIgnoreVecs; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  bool v9; 

  v2 = this;
  v4 = &this->m_pPoints[pointID];
  m_NumIgnoreVecs = this->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 )
  {
    __asm { vmovss  xmm3, dword ptr [rcx+44h]; ignoreRadius }
    if ( ShouldIgnorePoint(v4, this->m_pIgnoreVecs, m_NumIgnoreVecs, *(float *)&_XMM3) )
      return 0;
  }
  if ( TacVisGraph_HasVis(v2->m_pGraph, v2->m_VisPointID, pointID) )
    return 0;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  v9 = IsPointInRegion(&v4->m_Pos, v2->m_VolPhysID, CollisionQueryResult);
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  return v9;
}

/*
==============
TacGraphSearchFilter_StaticNavLOS::AllowPoint
==============
*/
bool TacGraphSearchFilter_StaticNavLOS::AllowPoint(TacGraphSearchFilter_StaticNavLOS *this, unsigned __int16 pointID)
{
  _RBX = this;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  xmm1, dword ptr [rbx+24h]
    vsubss  xmm2, xmm1, dword ptr [rax+r14*8+4]
    vsubss  xmm4, xmm0, dword ptr [rax+r14*8]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, dword ptr [rbx+8Ch]
  }
  return 0;
}

/*
==============
TacGraphSearchFilter_ViewCone::AllowPoint
==============
*/
char TacGraphSearchFilter_ViewCone::AllowPoint(TacGraphSearchFilter_ViewCone *this, unsigned __int16 pointID)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps [rsp+38h+var_38], xmm8
  }
  _RDX = 5i64 * pointID;
  _RAX = this->m_pPoints;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rdx*8]
    vsubss  xmm8, xmm0, dword ptr [rcx+10h]
    vmovss  xmm1, dword ptr [rax+rdx*8+4]
    vsubss  xmm6, xmm1, dword ptr [rcx+14h]
    vmovss  xmm0, dword ptr [rax+rdx*8+8]
    vsubss  xmm7, xmm0, dword ptr [rcx+18h]
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm3, xmm0, dword ptr [rcx+24h]
    vmovaps xmm6, [rsp+38h+var_18]
    vmulss  xmm1, xmm8, xmm5
    vmulss  xmm2, xmm1, dword ptr [rcx+20h]
    vmovaps xmm8, [rsp+38h+var_38]
    vmulss  xmm0, xmm7, xmm5
    vmulss  xmm1, xmm0, dword ptr [rcx+28h]
    vmovaps xmm7, [rsp+38h+var_28]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, dword ptr [rcx+2Ch]
  }
  return 1;
}

/*
==============
TacGraphSearchFilter_Vis::AllowPoint
==============
*/
bool TacGraphSearchFilter_Vis::AllowPoint(TacGraphSearchFilter_Vis *this, unsigned __int16 pointID)
{
  int m_NumIgnoreVecs; 
  pathsort_s nodes; 

  _RBX = this;
  if ( pointID == this->m_VisPointID )
    return 0;
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+34h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm5, xmm0
  }
  _RDI = &this->m_pPoints[pointID];
  if ( pointID > this->m_VisPointID )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm2, xmm1, dword ptr [rbx+14h]
      vsubss  xmm4, xmm0, dword ptr [rbx+10h]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, xmm5
    }
    if ( pointID < this->m_VisPointID )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vsubss  xmm1, xmm0, dword ptr [rdi+8]
        vmulss  xmm2, xmm1, xmm1
        vcomiss xmm2, dword ptr [rbx+38h]
      }
      if ( pointID < this->m_VisPointID )
        return 0;
    }
  }
  m_NumIgnoreVecs = this->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 )
  {
    __asm { vmovss  xmm3, dword ptr [rbx+4Ch]; ignoreRadius }
    if ( ShouldIgnorePoint(_RDI, this->m_pIgnoreVecs, m_NumIgnoreVecs, *(float *)&_XMM3) )
      return 0;
  }
  if ( !TacVisGraph_HasVis(_RBX->m_pGraph, _RBX->m_VisPointID, pointID) )
    return 0;
  if ( !_RBX->m_bCheckNodeClaim )
    return 1;
  __asm { vmovss  xmm1, cs:__real@40800000; maxDist }
  if ( Path_NodesInRadius(&_RDI->m_Pos, *(float *)&_XMM1, &nodes, 1, -1) <= 0 )
    return 1;
  return !Path_NodeIsClaimed(nodes.node, _RBX->m_NodeClaimTeam);
}

/*
==============
TacGraphSearchFilter_VisWithinCone::AllowPoint
==============
*/
bool TacGraphSearchFilter_VisWithinCone::AllowPoint(TacGraphSearchFilter_VisWithinCone *this, unsigned __int16 pointID)
{
  int m_NumIgnoreVecs; 
  bool v23; 
  pathsort_s nodes; 

  _RBX = this;
  if ( pointID == this->m_VisPointID )
    return 0;
  __asm
  {
    vmovss  xmm5, dword ptr [rcx+34h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm5, xmm0
  }
  _RBP = 5i64 * pointID;
  _RDI = &this->m_pPoints[pointID];
  if ( pointID > this->m_VisPointID )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm2, xmm1, dword ptr [rcx+14h]
      vsubss  xmm4, xmm0, dword ptr [rcx+10h]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, xmm5
    }
    if ( pointID < this->m_VisPointID )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+18h]
        vsubss  xmm1, xmm0, dword ptr [rdi+8]
        vmulss  xmm2, xmm1, xmm1
        vcomiss xmm2, dword ptr [rcx+38h]
      }
      if ( pointID < this->m_VisPointID )
        return 0;
    }
  }
  m_NumIgnoreVecs = this->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 )
  {
    __asm { vmovss  xmm3, dword ptr [rcx+4Ch]; ignoreRadius }
    if ( ShouldIgnorePoint(_RDI, this->m_pIgnoreVecs, m_NumIgnoreVecs, *(float *)&_XMM3) )
      return 0;
  }
  if ( !TacVisGraph_HasVis(_RBX->m_pGraph, _RBX->m_VisPointID, pointID) )
    return 0;
  if ( _RBX->m_bCheckNodeClaim )
  {
    __asm { vmovss  xmm1, cs:__real@40800000; maxDist }
    if ( Path_NodesInRadius(&_RDI->m_Pos, *(float *)&_XMM1, &nodes, 1, -1) > 0 && Path_NodeIsClaimed(nodes.node, _RBX->m_NodeClaimTeam) )
      return 0;
  }
  v23 = !_RBX->m_b3D;
  _RAX = _RBX->m_pPoints;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovss  xmm0, dword ptr [rax+rbp*8]
    vmovss  xmm1, dword ptr [rax+rbp*8+4]
    vsubss  xmm4, xmm0, dword ptr [rbx+10h]
    vsubss  xmm3, xmm1, dword ptr [rbx+14h]
    vmovss  xmm0, dword ptr [rax+rbp*8+8]
    vsubss  xmm6, xmm0, dword ptr [rbx+18h]
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm5, xmm2, xmm1
  }
  if ( v23 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm2, xmm5, xmm5
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm3, xmm0, dword ptr [rbx+5Ch]
      vmulss  xmm1, xmm4, xmm1
      vmulss  xmm2, xmm1, dword ptr [rbx+58h]
      vaddss  xmm0, xmm3, xmm2
      vcomiss xmm0, dword ptr [rbx+64h]
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm1, xmm0, xmm5
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm5, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm5
      vmulss  xmm2, xmm1, dword ptr [rbx+58h]
      vmulss  xmm0, xmm3, xmm5
      vmulss  xmm3, xmm0, dword ptr [rbx+5Ch]
      vmulss  xmm0, xmm6, xmm5
      vmulss  xmm1, xmm0, dword ptr [rbx+60h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, dword ptr [rbx+64h]
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return !v23;
}

/*
==============
TacGraphSearchFilter_VisWithinVolume::AllowPoint
==============
*/
bool TacGraphSearchFilter_VisWithinVolume::AllowPoint(TacGraphSearchFilter_VisWithinVolume *this, unsigned __int16 pointID)
{
  TacGraphSearchFilter_VisWithinVolume *v2; 
  const tacpoint_t *v4; 
  int m_NumIgnoreVecs; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  bool v9; 

  v2 = this;
  v4 = &this->m_pPoints[pointID];
  m_NumIgnoreVecs = this->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 )
  {
    __asm { vmovss  xmm3, dword ptr [rcx+44h]; ignoreRadius }
    if ( ShouldIgnorePoint(v4, this->m_pIgnoreVecs, m_NumIgnoreVecs, *(float *)&_XMM3) )
      return 0;
  }
  if ( !TacVisGraph_HasVis(v2->m_pGraph, v2->m_VisPointID, pointID) )
    return 0;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  v9 = IsPointInRegion(&v4->m_Pos, v2->m_VolPhysID, CollisionQueryResult);
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  return v9;
}

/*
==============
TacGraphSearchFilter::GetScore
==============
*/
float TacGraphSearchFilter::GetScore(TacGraphSearchFilter *this, const vec3_t *pos, unsigned __int16 pointID)
{
  _R8 = 5i64 * pointID;
  _RAX = this->m_pPoints;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+r8*8]
    vsubss  xmm3, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rax+r8*8+4]
    vmovss  xmm0, dword ptr [rax+r8*8+8]
    vsubss  xmm2, xmm1, dword ptr [rdx+4]
    vsubss  xmm4, xmm0, dword ptr [rdx+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
TacGraphSearchFilter_VisNearCone::GetScore
==============
*/
float TacGraphSearchFilter_VisNearCone::GetScore(TacGraphSearchFilter_VisNearCone *this, const vec3_t *pos, unsigned __int16 pointID)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps [rsp+38h+var_38], xmm8
  }
  _R8 = 5i64 * pointID;
  _RAX = this->m_pPoints;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+r8*8]
    vsubss  xmm7, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rax+r8*8+4]
    vsubss  xmm4, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rax+r8*8+8]
    vsubss  xmm6, xmm0, dword ptr [rdx+8]
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm8, xmm2, xmm2
    vcmpless xmm0, xmm8, cs:__real@80000000
    vblendvps xmm0, xmm8, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, dword ptr [rcx+5Ch]
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm2, xmm1, dword ptr [rcx+58h]
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm1, xmm0, dword ptr [rcx+60h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, dword ptr [rcx+64h]
    vmulss  xmm0, xmm8, dword ptr [rcx+68h]
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
ShouldIgnorePoint
==============
*/

bool __fastcall ShouldIgnorePoint(const tacpoint_t *pPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, double ignoreRadius)
{
  unsigned __int64 v8; 
  bool v14; 
  unsigned __int64 v15; 
  float *v16; 
  bool result; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RDI = pPoint;
  v8 = numIgnoreVecs;
  __asm { vmovaps xmm6, xmm3 }
  if ( !numIgnoreVecs )
    goto LABEL_9;
  if ( !pIgnoreVecs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 62, ASSERT_TYPE_ASSERT, "(pIgnoreVecs)", (const char *)&queryFormat, "pIgnoreVecs") )
    __debugbreak();
  __asm { vmulss  xmm4, xmm6, xmm6 }
  if ( (int)v8 > 0 )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rdi]
      vmovss  xmm6, dword ptr [rdi+4]
      vmovss  xmm7, dword ptr [rdi+8]
    }
    v14 = 0;
    v15 = 0i64;
    v16 = &pIgnoreVecs->v[2];
    while ( 1 )
    {
      __asm
      {
        vsubss  xmm0, xmm6, dword ptr [rax-4]
        vsubss  xmm2, xmm5, dword ptr [rax-8]
        vsubss  xmm3, xmm7, dword ptr [rax]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm4
      }
      if ( v14 )
        break;
      ++v15;
      v16 += 3;
      v14 = v15 < v8;
      if ( (__int64)v15 >= (__int64)v8 )
        goto LABEL_9;
    }
    result = 1;
  }
  else
  {
LABEL_9:
    result = 0;
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return result;
}

/*
==============
TacGraphSearch_AddPoint
==============
*/
void TacGraphSearch_AddPoint(TacticalGraph *pGraph, unsigned __int16 pointID)
{
  unsigned __int16 m_NumPoints; 
  __int64 v5; 
  __int64 v6; 

  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 622, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  m_NumPoints = pGraph->m_NumPoints;
  if ( pointID >= m_NumPoints )
  {
    LODWORD(v6) = pointID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 623, ASSERT_TYPE_ASSERT, "(unsigned)( pointID ) < (unsigned)( pGraph->m_NumPoints )", "pointID doesn't index pGraph->m_NumPoints\n\t%i not in [0, %i)", v6, m_NumPoints) )
      __debugbreak();
  }
  v5 = pointID;
  if ( pGraph->m_Points[v5].m_SearchPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 624, ASSERT_TYPE_ASSERT, "(pGraph->m_Points[ pointID ].m_SearchPrev == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pGraph->m_Points[ pointID ].m_SearchPrev == cTacPoint_InvalidIndex") )
    __debugbreak();
  if ( pGraph->m_Points[v5].m_SearchNext != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 625, ASSERT_TYPE_ASSERT, "(pGraph->m_Points[ pointID ].m_SearchNext == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pGraph->m_Points[ pointID ].m_SearchNext == cTacPoint_InvalidIndex") )
    __debugbreak();
  TacGraphSearch_AddPoint_r(pGraph->m_Points, &pGraph->m_SearchRoot, pointID);
}

/*
==============
TacGraphSearch_AddPoint_r
==============
*/
void TacGraphSearch_AddPoint_r(tacpoint_t *pPoints, tacpoint_search_node_t *pNode, unsigned __int16 pointID)
{
  unsigned __int16 m_PointListRoot; 
  __int64 v12; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovss  xmm6, cs:__real@3f000000
    vmovaps [rsp+68h+var_38], xmm7
    vmovss  xmm7, cs:__real@42000000
  }
  if ( !pPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 561, ASSERT_TYPE_ASSERT, "(pPoints)", (const char *)&queryFormat, "pPoints") )
    __debugbreak();
  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 562, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  m_PointListRoot = pNode->m_PointListRoot;
  if ( m_PointListRoot == 0xFFFF )
  {
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbx+8]
      vcomiss xmm1, xmm7
    }
    if ( pNode->m_ChildNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 584, ASSERT_TYPE_ASSERT, "(!pNode->m_ChildNodes)", (const char *)&queryFormat, "!pNode->m_ChildNodes") )
      __debugbreak();
    if ( pNode->m_PointListRoot != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 585, ASSERT_TYPE_ASSERT, "(pNode->m_PointListRoot == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pNode->m_PointListRoot == cTacPoint_InvalidIndex") )
      __debugbreak();
  }
  else
  {
    v12 = m_PointListRoot;
    if ( pPoints[m_PointListRoot].m_SearchPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 569, ASSERT_TYPE_ASSERT, "(pOldHead->m_SearchPrev == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pOldHead->m_SearchPrev == cTacPoint_InvalidIndex") )
      __debugbreak();
    pPoints[v12].m_SearchPrev = pointID;
    pPoints[pointID].m_SearchNext = pNode->m_PointListRoot;
    pPoints[pointID].m_SearchPrev = -1;
  }
  pNode->m_PointListRoot = pointID;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
}

/*
==============
TacGraphSearch_CalcOpenView
==============
*/

void __fastcall TacGraphSearch_CalcOpenView(const TacticalGraph *pGraph, const vec3_t *pos, double radius, const tacpoint_t *pOriginPoint, float *pResults, int numSlices)
{
  float *v12; 
  tacpoint_t *m_Points; 
  __int64 i; 
  tacpoint_t *ppOutPoints; 
  TacGraphSearchFilter pFilter; 
  float *v28; 
  int v29; 
  const tacpoint_t *v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmm6, xmm2
  }
  _RSI = pos;
  v12 = pResults;
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1358, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( !pOriginPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1359, ASSERT_TYPE_ASSERT, "(pOriginPoint)", (const char *)&queryFormat, "pOriginPoint") )
    __debugbreak();
  if ( !pResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1360, ASSERT_TYPE_ASSERT, "(pResults)", (const char *)&queryFormat, "pResults") )
    __debugbreak();
  if ( numSlices <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1361, ASSERT_TYPE_ASSERT, "(numSlices > 0)", (const char *)&queryFormat, "numSlices > 0") )
    __debugbreak();
  m_Points = pGraph->m_Points;
  pFilter.m_pPoints = pGraph->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin+8], xmm0
  }
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_CalcOpenView::`vftable';
  __asm
  {
    vmovss  xmm0, cs:__real@45c80000
    vmovss  [rsp+0D8h+var_68], xmm0
  }
  v28 = pResults;
  v29 = numSlices;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vmovss  xmm0, cs:__real@43b40000
    vdivss  xmm1, xmm0, xmm1
    vmovss  [rsp+0D8h+var_54], xmm1
  }
  v31 = pOriginPoint;
  if ( numSlices > 0 )
  {
    for ( i = numSlices; i; --i )
      *v12++ = 0.0;
  }
  __asm { vmovaps xmm3, xmm6; radius }
  TacGraphSearch_FindPointsInRadius_r(m_Points, &pGraph->m_SearchRoot, _RSI, *(float *)&_XMM3, &pFilter, (const tacpoint_t **)&ppOutPoints, 1);
  __asm { vmovaps xmm6, [rsp+0D8h+var_38] }
}

/*
==============
TacGraphSearch_FindClosestPoint
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPoint(const TacticalGraphData *pTacData, const vec3_t *pos)
{
  const tacpoint_t *v7; 
  int v8; 
  TacticalGraph *v9; 
  const tacpoint_t *ClosestPoint_r; 
  void *retaddr; 
  float closestDistSq2D; 
  float closestDistSq; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, cs:__real@49800000
    vmovss  xmm1, cs:__real@47800000
  }
  v7 = NULL;
  v8 = 0;
  __asm
  {
    vmovss  dword ptr [rax+18h], xmm0
    vmovss  dword ptr [rax+8], xmm1
  }
  if ( pTacData->m_NumTacGraphs > 0 )
  {
    do
    {
      v9 = &pTacData->m_TacGraphs[v8];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
        __debugbreak();
      ClosestPoint_r = TacGraphSearch_FindClosestPoint_r(v9, &v9->m_SearchRoot, pos, NULL, NULL, &closestDistSq, &closestDistSq2D);
      if ( ClosestPoint_r )
        v7 = ClosestPoint_r;
      ++v8;
    }
    while ( v8 < pTacData->m_NumTacGraphs );
  }
  return v7;
}

/*
==============
TacGraphSearch_FindClosestPointWithStaticNavLos
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithStaticNavLos(const TacticalGraphData *pTacData, const vec3_t *pos, const vec3_t *losPos, const bfx::AreaHandle *hArea)
{
  const bfx::AreaHandle *v7; 
  const tacpoint_t *v11; 
  int v15; 
  __int64 v16; 
  TacticalGraph *v24; 
  const tacpoint_t *ClosestPoint_r; 
  const tacpoint_t *result; 
  float closestDistSq[2]; 
  const bfx::AreaHandle *v31; 
  __int64 v32; 
  TacGraphSearchFilter pFilter; 
  bfx::AreaHandle v37; 
  int v38; 
  __int64 v39; 
  __int64 v40; 
  char v41; 
  bfx::PenaltyTable v45; 
  int v46; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  v32 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v7 = hArea;
  v31 = hArea;
  _R13 = losPos;
  _RDI = pos;
  v11 = NULL;
  __asm
  {
    vmovss  xmm0, cs:__real@49800000
    vmovss  [rsp+150h+var_110+4], xmm0
    vmovss  xmm1, cs:__real@47800000
    vmovss  [rsp+150h+var_110], xmm1
    vmovss  xmm6, cs:__real@46800000
  }
  if ( pos == losPos )
  {
    __asm
    {
      vmovss  [rsp+150h+var_110], xmm6
      vmovss  [rsp+150h+var_110+4], xmm6
    }
  }
  v15 = 0;
  if ( pTacData->m_NumTacGraphs > 0 )
  {
    v16 = 0i64;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    do
    {
      pFilter.m_pPoints = pTacData->m_TacGraphs[v16].m_Points;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  dword ptr [rsp+150h+pFilter.m_SearchOrigin], xmm0
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+150h+pFilter.m_SearchOrigin+4], xmm1
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+150h+pFilter.m_SearchOrigin+8], xmm0
      }
      pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_StaticNavLOS::`vftable';
      bfx::AreaHandle::AreaHandle(&v37);
      v38 = 0;
      v39 = -1i64;
      v40 = -1i64;
      v41 = 0;
      __asm
      {
        vmovss  [rbp+50h+var_9C], xmm7
        vmovss  [rbp+50h+var_98], xmm7
        vmovss  [rbp+50h+var_94], xmm7
      }
      bfx::PenaltyTable::PenaltyTable(&v45);
      v46 = 0;
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0]
        vmovss  [rbp+50h+var_D0], xmm0
        vmovss  xmm1, dword ptr [r13+4]
        vmovss  [rbp+50h+var_CC], xmm1
        vmovss  xmm0, dword ptr [r13+8]
        vmovss  [rbp+50h+var_C8], xmm0
      }
      bfx::AreaHandle::operator=(&v37, v7);
      LODWORD(v39) = 0;
      __asm { vmovss  [rbp+50h+var_64], xmm6 }
      v24 = &pTacData->m_TacGraphs[v15];
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
        __debugbreak();
      ClosestPoint_r = TacGraphSearch_FindClosestPoint_r(v24, &v24->m_SearchRoot, _RDI, &pFilter, NULL, &closestDistSq[1], closestDistSq);
      if ( ClosestPoint_r )
        v11 = ClosestPoint_r;
      bfx::AreaHandle::~AreaHandle(&v37);
      ++v15;
      ++v16;
      v7 = v31;
    }
    while ( v15 < pTacData->m_NumTacGraphs );
  }
  result = v11;
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
TacGraphSearch_FindClosestPointWithVisNearConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisNearConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, float weight, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v16; 
  const tacpoint_t *result; 
  float fmt; 
  __int64 minRadiusZ; 
  float minRadiusZa; 
  float v30; 
  float closestDistSq2D; 
  float closestDistSq; 
  __int64 v33; 
  TacGraphSearchFilter_Vis v34; 

  v33 = -2i64;
  __asm
  {
    vmovaps [rsp+128h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !pTacData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1339, ASSERT_TYPE_ASSERT, "( pTacData )", (const char *)&queryFormat, "pTacData") )
    __debugbreak();
  if ( !pTargetPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1340, ASSERT_TYPE_ASSERT, "( pTargetPoint )", (const char *)&queryFormat, "pTargetPoint") )
    __debugbreak();
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    LODWORD(minRadiusZ) = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1343, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", minRadiusZ, pTacData->m_NumTacGraphs) )
      __debugbreak();
  }
  v16 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+128h+var_E8], xmm1
    vmovss  xmm0, cs:__real@42700000
    vmovss  [rsp+128h+minRadiusZ], xmm0
    vmovss  dword ptr [rsp+128h+fmt], xmm1
  }
  TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(&v34, v16, origin, pTargetPoint, fmt, minRadiusZa, NULL, 0, v30, bCheckNodeClaim, nodeClaimTeam);
  v34.__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter_VisNearCone::`vftable';
  __asm
  {
    vmovss  xmm0, [rsp+128h+dot]
    vmovss  [rsp+128h+var_54], xmm0
    vmovss  xmm1, [rsp+128h+weight]
    vmovss  [rsp+128h+var_50], xmm1
  }
  _RAX = dir;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+128h+var_60], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  [rsp+128h+var_5C], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rsp+128h+var_58], xmm0
    vmovss  [rsp+128h+closestDistSq], xmm6
    vmovss  [rsp+128h+closestDistSq2D], xmm6
  }
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  result = TacGraphSearch_FindClosestPoint_r(v16, &v16->m_SearchRoot, origin, &v34, NULL, &closestDistSq, &closestDistSq2D);
  __asm { vmovaps xmm6, [rsp+128h+var_38] }
  return result;
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, double minRadius, double maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v17; 
  const tacpoint_t *result; 
  float *closestDistSq; 
  float closestDistSq2D[2]; 
  __int64 v45; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v47; 
  const tacpoint_t *v48; 
  unsigned __int16 PointIndex; 
  __int64 v52; 
  int v53; 
  int v55; 
  char v56; 
  bool v61; 
  void *retaddr; 

  _RAX = &retaddr;
  v45 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  _R14 = origin;
  if ( !pTacData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1276, ASSERT_TYPE_ASSERT, "( pTacData )", (const char *)&queryFormat, "pTacData") )
    __debugbreak();
  if ( !pTargetPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1277, ASSERT_TYPE_ASSERT, "( pTargetPoint )", (const char *)&queryFormat, "pTargetPoint") )
    __debugbreak();
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    LODWORD(closestDistSq) = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1280, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", closestDistSq, pTacData->m_NumTacGraphs) )
      __debugbreak();
  }
  v17 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  pFilter.m_pPoints = v17->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  dword ptr [rsp+110h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  dword ptr [rbp+2Fh+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rbp+2Fh+pFilter.m_SearchOrigin+8], xmm0
  }
  v47 = v17;
  v48 = pTargetPoint;
  __asm
  {
    vmulss  xmm0, xmm7, xmm7
    vmovss  [rbp+2Fh+var_8C], xmm0
    vmovss  xmm1, cs:__real@45610000
    vmovss  [rbp+2Fh+var_88], xmm1
  }
  v52 = 0i64;
  v53 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+2Fh+var_74], xmm0
  }
  Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v55 = 0;
  v56 = 0;
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_VisWithinCone::`vftable';
  __asm
  {
    vmovss  xmm0, [rbp+2Fh+dot]
    vmovss  [rbp+2Fh+var_5C], xmm0
  }
  v61 = b3D;
  _RAX = dir;
  __asm
  {
    vmovss  xmm4, dword ptr [rax]
    vmovss  [rbp+2Fh+var_68], xmm4
    vmovss  xmm5, dword ptr [rax+4]
    vmovss  [rbp+2Fh+var_64], xmm5
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rbp+2Fh+var_60], xmm0
  }
  if ( !b3D )
  {
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vmovss  xmm3, cs:__real@3f800000
      vblendvps xmm1, xmm2, xmm3, xmm0
      vmovss  [rsp+110h+closestDistSq2D], xmm1
      vdivss  xmm1, xmm3, xmm1
      vmulss  xmm0, xmm4, xmm1
      vmovss  [rbp+2Fh+var_68], xmm0
      vmulss  xmm1, xmm5, xmm1
      vmovss  [rbp+2Fh+var_64], xmm1
    }
  }
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vmovss  [rsp+110h+closestDistSq2D], xmm0
    vmovss  [rsp+110h+closestDistSq2D+4], xmm0
  }
  result = TacGraphSearch_FindClosestPoint_r(v17, &v17->m_SearchRoot, _R14, &pFilter, NULL, closestDistSq2D, &closestDistSq2D[1]);
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+110h+var_38+8]
    vmovaps xmm7, [rsp+110h+var_48+8]
  }
  return result;
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v14; 
  const tacpoint_t *result; 
  float fmt; 
  float minRadiusZ; 
  float v22; 
  float closestDistSq2D; 
  float closestDistSq; 
  __int64 v25; 
  TacGraphSearchFilter_Vis v26; 

  v25 = -2i64;
  __asm
  {
    vmovaps [rsp+118h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1102, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", pTargetPoint->m_GraphIdx, pTacData->m_NumTacGraphs) )
    __debugbreak();
  v14 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  __asm
  {
    vmovss  xmm0, [rsp+118h+ignoreRadius]
    vmovss  [rsp+118h+var_D8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+118h+minRadiusZ], xmm0
    vmovss  dword ptr [rsp+118h+fmt], xmm0
  }
  TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(&v26, v14, origin, pTargetPoint, fmt, minRadiusZ, pIgnoreVecs, numIgnoreVecs, v22, 0, TEAM_ONE);
  v26.__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vmovss  [rsp+118h+closestDistSq], xmm0
    vmovss  [rsp+118h+closestDistSq2D], xmm0
  }
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  result = TacGraphSearch_FindClosestPoint_r(v14, &v14->m_SearchRoot, pos, &v26, NULL, &closestDistSq, &closestDistSq2D);
  __asm { vmovaps xmm6, [rsp+118h+var_38] }
  return result;
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, double minRadius, double maxRadius, float minRadiusZ, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v18; 
  const tacpoint_t *result; 
  float fmt; 
  float closestDistSq; 
  float v28; 
  float closestDistSq2D; 
  float v30; 
  __int64 v31; 
  TacGraphSearchFilter_Vis v32; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  v31 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1117, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", pTargetPoint->m_GraphIdx, pTacData->m_NumTacGraphs) )
    __debugbreak();
  v18 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  __asm
  {
    vmovss  xmm0, [rsp+118h+ignoreRadius]
    vmovss  [rsp+118h+var_D8], xmm0
    vmovss  xmm0, [rsp+118h+minRadiusZ]
    vmovss  dword ptr [rsp+118h+closestDistSq], xmm0
    vmovss  dword ptr [rsp+118h+fmt], xmm7
  }
  TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(&v32, v18, origin, pTargetPoint, fmt, closestDistSq, pIgnoreVecs, numIgnoreVecs, v28, 0, TEAM_ONE);
  v32.__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vmovss  [rsp+118h+var_B4], xmm0
    vmovss  [rsp+118h+closestDistSq2D], xmm0
  }
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  result = TacGraphSearch_FindClosestPoint_r(v18, &v18->m_SearchRoot, pos, &v32, NULL, &v30, &closestDistSq2D);
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
TacGraphSearch_FindClosestPointWithVisWithinRadiusWithNavLos
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithVisWithinRadiusWithNavLos(const TacticalGraphData *pTacData, const vec3_t *origin, double minRadius, double maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *losPos, const bfx::AreaHandle *hArea, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  unsigned int m_GraphIdx; 
  const TacticalGraph *v19; 
  const tacpoint_t *v21; 
  __int64 PointsInRadius_Sorted; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned __int16 PointIndex; 
  __int64 v29; 
  char v37; 
  char v38; 
  const bfx::AreaHandle *AreaForPoint; 
  const tacpoint_t *result; 
  float fmt; 
  __int64 minRadiusZ; 
  float minRadiusZa; 
  float minRadiusZb; 
  float v48; 
  TacGraphSearchFilter_StaticNavLOS v49; 
  TacGraphSearchFilter_Vis v50; 
  tacpoint_t *ppOutPoints[33]; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "Tac_FindClosestPoint_VisRadiusLOS");
  if ( !pTacData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1133, ASSERT_TYPE_ASSERT, "( pTacData )", (const char *)&queryFormat, "pTacData") )
    __debugbreak();
  if ( !pTargetPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1134, ASSERT_TYPE_ASSERT, "( pTargetPoint )", (const char *)&queryFormat, "pTargetPoint") )
    __debugbreak();
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    LODWORD(minRadiusZ) = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1137, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", minRadiusZ, pTacData->m_NumTacGraphs) )
      __debugbreak();
  }
  v19 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+2B8h+var_278], xmm0
  }
  v21 = NULL;
  __asm
  {
    vmovss  xmm0, cs:__real@42a00000
    vmovss  [rsp+2B8h+minRadiusZ], xmm0
    vmovss  dword ptr [rsp+2B8h+fmt], xmm7
  }
  TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(&v50, v19, origin, pTargetPoint, fmt, minRadiusZa, NULL, 0, v48, bCheckNodeClaim, nodeClaimTeam);
  __asm { vmovaps xmm2, xmm6; maxRadius }
  PointsInRadius_Sorted = TacGraphSearch_FindPointsInRadius_Sorted(v19, pos, *(float *)&_XMM2, &v50, (const tacpoint_t **)ppOutPoints, 32);
  __asm { vmovss  [rsp+2B8h+minRadiusZ], xmm6 }
  TacGraphSearchFilter_StaticNavLOS::TacGraphSearchFilter_StaticNavLOS(&v49, v19->m_Points, origin, losPos, hArea, minRadiusZb);
  v25 = 0;
  v26 = PointsInRadius_Sorted;
  if ( (int)PointsInRadius_Sorted > 0 )
  {
    v27 = 0i64;
    while ( 1 )
    {
      PointIndex = TacGraph_GetPointIndex(ppOutPoints[v27]);
      v29 = PointIndex;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+2B8h+var_248.m_LosPos]
        vsubss  xmm4, xmm0, dword ptr [rcx]
        vmovss  xmm1, dword ptr [rsp+2B8h+var_248.m_LosPos+4]
        vsubss  xmm2, xmm1, dword ptr [rcx+4]
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, [rsp+2B8h+var_248.m_MaxDist2DSq]
      }
      if ( v37 | v38 )
      {
        AreaForPoint = TacGraph_GetAreaForPoint(&v49.m_pPoints[PointIndex]);
        if ( bfx::AreaHandle::operator==(&v49.m_hArea, AreaForPoint) || Nav_IsStraightLineReachable(&v49.m_LosPos, &v49.m_hArea, &v49.m_pPoints[v29].m_Pos, AreaForPoint, &v49.m_PathSpec) )
          break;
      }
      ++v25;
      if ( ++v27 >= v26 )
        goto LABEL_18;
    }
    v21 = ppOutPoints[v25];
  }
LABEL_18:
  bfx::AreaHandle::~AreaHandle(&v49.m_hArea);
  v49.__vftable = (TacGraphSearchFilter_StaticNavLOS_vtbl *)&TacGraphSearchFilter::`vftable';
  v50.__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter::`vftable';
  Sys_ProfEndNamedEvent();
  result = v21;
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinVolume
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithVisWithinVolume(const TacticalGraphData *pTacData, const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v12; 
  const tacpoint_t *ClosestPoint_r; 
  float *closestDistSq; 
  float closestDistSq2D; 
  float v36; 
  __int64 v37; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v39; 
  const tacpoint_t *v40; 
  unsigned __int16 PointIndex; 
  unsigned int Instance; 
  const vec3_t *v43; 
  int v44; 

  v37 = -2i64;
  _RBP = pVolume;
  Sys_ProfBeginNamedEvent(0xFF808080, "Tac_FindClosestPointWithVisWithinVolume");
  if ( !pTacData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1085, ASSERT_TYPE_ASSERT, "( pTacData )", (const char *)&queryFormat, "pTacData") )
    __debugbreak();
  if ( !pTargetPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1086, ASSERT_TYPE_ASSERT, "( pTargetPoint )", (const char *)&queryFormat, "pTargetPoint") )
    __debugbreak();
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    LODWORD(closestDistSq) = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1089, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", closestDistSq, pTacData->m_NumTacGraphs) )
      __debugbreak();
  }
  v12 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  pFilter.m_pPoints = v12->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+130h]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [rbp+134h]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rbp+138h]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin+8], xmm0
  }
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_VisWithinVolume::`vftable';
  v39 = v12;
  v40 = pTargetPoint;
  v43 = pIgnoreVecs;
  v44 = numIgnoreVecs;
  __asm
  {
    vmovss  xmm0, [rsp+0D8h+ignoreRadius]
    vmovss  [rsp+0D8h+var_44], xmm0
  }
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RBP);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+100h]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm0, xmm3
    vaddss  xmm4, xmm0, dword ptr [rbp+10Ch]
    vmovss  xmm1, dword ptr [rbp+104h]
    vandps  xmm1, xmm1, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbp+110h]
    vmovss  xmm0, dword ptr [rbp+108h]
    vandps  xmm0, xmm0, xmm3
    vaddss  xmm3, xmm0, dword ptr [rbp+114h]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  [rsp+0D8h+var_94], xmm3
    vmovss  [rsp+0D8h+var_98], xmm3
  }
  ClosestPoint_r = TacGraphSearch_FindClosestPoint_r(v12, &v12->m_SearchRoot, pos, &pFilter, NULL, &v36, &closestDistSq2D);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter::`vftable';
  Sys_ProfEndNamedEvent();
  return ClosestPoint_r;
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisNearConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithoutVisNearConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, double radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  unsigned __int16 PointIndex; 
  unsigned int m_GraphIdx; 
  unsigned __int16 v21; 
  TacticalGraph *v24; 
  unsigned __int16 v25; 
  bool HasVis; 
  bool v31; 
  const tacpoint_t *result; 
  int v84; 
  int m_NumTacGraphs; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _R14 = origin;
  __asm { vmovaps xmm6, xmm2 }
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  v21 = PointIndex;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    m_NumTacGraphs = pTacData->m_NumTacGraphs;
    v84 = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1296, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", v84, m_NumTacGraphs) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, cs:__real@49800000
    vmulss  xmm9, xmm6, xmm6
  }
  v24 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  v25 = 0;
  if ( v24->m_NumPoints )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_78], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps [rsp+0E8h+var_88], xmm11
      vmovss  xmm11, [rsp+0E8h+weight]
      vmovaps [rsp+0E8h+var_98], xmm12
      vmovss  xmm12, cs:__real@80000000
      vmovaps [rsp+0E8h+var_A8], xmm13
      vmovss  xmm13, cs:__real@3f000000
      vmovaps [rsp+0E8h+var_48], xmm7
    }
    do
    {
      if ( v25 != v21 )
      {
        HasVis = TacVisGraph_HasVis(v24, v21, v25);
        v31 = !HasVis;
        if ( !HasVis )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14]
            vmovss  xmm1, dword ptr [r14+4]
          }
          _RCX = 5i64 * v25;
          _RAX = v24->m_Points;
          __asm
          {
            vmovss  xmm5, dword ptr [rax+rcx*8]
            vmovss  xmm6, dword ptr [rax+rcx*8+4]
            vmovss  xmm7, dword ptr [rax+rcx*8+8]
            vsubss  xmm3, xmm0, xmm5
            vmovss  xmm0, dword ptr [r14+8]
            vsubss  xmm2, xmm1, xmm6
            vmulss  xmm2, xmm2, xmm2
            vsubss  xmm4, xmm0, xmm7
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, xmm9
          }
          if ( v31 )
          {
            __asm
            {
              vsubss  xmm4, xmm5, dword ptr [r12]
              vsubss  xmm3, xmm6, dword ptr [r12+4]
              vsubss  xmm6, xmm7, dword ptr [r12+8]
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm7, xmm2, xmm2
              vcmpless xmm0, xmm7, xmm12
              vblendvps xmm0, xmm7, xmm10, xmm0
              vdivss  xmm5, xmm10, xmm0
              vmulss  xmm0, xmm5, xmm3
              vmulss  xmm3, xmm0, dword ptr [r15+4]
              vmulss  xmm1, xmm5, xmm4
              vmulss  xmm2, xmm1, dword ptr [r15]
              vaddss  xmm4, xmm3, xmm2
              vmulss  xmm0, xmm5, xmm6
              vmulss  xmm1, xmm0, dword ptr [r15+8]
              vaddss  xmm2, xmm4, xmm1
              vaddss  xmm3, xmm2, xmm10
              vmulss  xmm0, xmm3, xmm13
              vmulss  xmm1, xmm0, xmm11
              vsubss  xmm0, xmm10, xmm0
              vaddss  xmm1, xmm1, xmm0
              vmulss  xmm2, xmm1, xmm7
              vcomiss xmm2, xmm8
            }
          }
        }
      }
      ++v25;
    }
    while ( v25 < v24->m_NumPoints );
    __asm
    {
      vmovaps xmm13, [rsp+0E8h+var_A8]
      vmovaps xmm12, [rsp+0E8h+var_98]
      vmovaps xmm11, [rsp+0E8h+var_88]
      vmovaps xmm10, [rsp+0E8h+var_78]
      vmovaps xmm7, [rsp+0E8h+var_48]
    }
  }
  _R11 = &v91;
  result = NULL;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisNearConeWithinVolume
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithoutVisNearConeWithinVolume(const TacticalGraphData *pTacData, const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  unsigned __int16 PointIndex; 
  unsigned int m_GraphIdx; 
  unsigned __int16 v19; 
  TacticalGraph *v21; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned __int16 v23; 
  unsigned int v69; 
  int m_NumTacGraphs; 

  __asm { vmovaps [rsp+108h+var_78], xmm9 }
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  v19 = PointIndex;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    m_NumTacGraphs = pTacData->m_NumTacGraphs;
    v69 = m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1209, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", v69, m_NumTacGraphs) )
      __debugbreak();
  }
  __asm { vmovss  xmm9, cs:__real@49800000 }
  v21 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, pVolume);
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  v23 = 0;
  if ( v21->m_NumPoints )
  {
    __asm
    {
      vmovaps [rsp+108h+var_88], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps [rsp+108h+var_98], xmm11
      vmovss  xmm11, [rsp+108h+weight]
      vmovaps [rsp+108h+var_A8], xmm12
      vmovss  xmm12, cs:__real@80000000
      vmovaps [rsp+108h+var_B8], xmm13
      vmovss  xmm13, cs:__real@3f000000
      vmovaps [rsp+108h+var_48], xmm6
      vmovaps [rsp+108h+var_58], xmm7
      vmovaps [rsp+108h+var_68], xmm8
    }
    do
    {
      if ( v23 != v19 && !TacVisGraph_HasVis(v21, v19, v23) )
      {
        _RCX = 5i64 * v23;
        _RAX = v21->m_Points;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rcx*8]
          vmovss  xmm1, dword ptr [rax+rcx*8+4]
        }
        _RSI = (__int64)&v21->m_Points[v23];
        __asm
        {
          vsubss  xmm7, xmm0, dword ptr [rax]
          vsubss  xmm4, xmm1, dword ptr [rax+4]
          vmovss  xmm0, dword ptr [rsi+8]
          vsubss  xmm6, xmm0, dword ptr [rax+8]
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm8, xmm2, xmm2
          vcmpless xmm0, xmm8, xmm12
          vblendvps xmm0, xmm8, xmm10, xmm0
          vdivss  xmm5, xmm10, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm3, xmm0, dword ptr [r13+4]
          vmulss  xmm0, xmm5, xmm6
          vmulss  xmm1, xmm5, xmm7
          vmulss  xmm2, xmm1, dword ptr [r13+0]
          vmulss  xmm1, xmm0, dword ptr [r13+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm3, xmm2, xmm10
          vmulss  xmm0, xmm3, xmm13
          vmulss  xmm1, xmm0, xmm11
          vsubss  xmm0, xmm10, xmm0
          vaddss  xmm1, xmm1, xmm0
          vmulss  xmm6, xmm1, xmm8
          vcomiss xmm6, xmm9
        }
      }
      ++v23;
    }
    while ( v23 < v21->m_NumPoints );
    __asm
    {
      vmovaps xmm13, [rsp+108h+var_B8]
      vmovaps xmm12, [rsp+108h+var_A8]
      vmovaps xmm11, [rsp+108h+var_98]
      vmovaps xmm10, [rsp+108h+var_88]
      vmovaps xmm8, [rsp+108h+var_68]
      vmovaps xmm7, [rsp+108h+var_58]
      vmovaps xmm6, [rsp+108h+var_48]
    }
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  __asm { vmovaps xmm9, [rsp+108h+var_78] }
  return 0i64;
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisWithinConeWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithoutVisWithinConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, double minRadius, double maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v17; 
  const tacpoint_t *result; 
  float *closestDistSq; 
  float closestDistSq2D[2]; 
  __int64 v35; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v37; 
  const tacpoint_t *v38; 
  unsigned __int16 PointIndex; 
  __int64 v42; 
  int v43; 
  bool v49; 
  void *retaddr; 

  _RAX = &retaddr;
  v35 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  _R14 = origin;
  if ( !pTacData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1258, ASSERT_TYPE_ASSERT, "( pTacData )", (const char *)&queryFormat, "pTacData") )
    __debugbreak();
  if ( !pTargetPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1259, ASSERT_TYPE_ASSERT, "( pTargetPoint )", (const char *)&queryFormat, "pTargetPoint") )
    __debugbreak();
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    LODWORD(closestDistSq) = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1262, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", closestDistSq, pTacData->m_NumTacGraphs) )
      __debugbreak();
  }
  v17 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  pFilter.m_pPoints = v17->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  dword ptr [rsp+110h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  dword ptr [rbp+2Fh+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rbp+2Fh+pFilter.m_SearchOrigin+8], xmm0
  }
  v37 = v17;
  v38 = pTargetPoint;
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vmovss  [rbp+2Fh+var_8C], xmm0
    vmovss  xmm1, cs:__real@45610000
    vmovss  [rbp+2Fh+var_88], xmm1
  }
  v42 = 0i64;
  v43 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+2Fh+var_74], xmm0
  }
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_NoVisWithinCone::`vftable';
  __asm
  {
    vmovss  xmm0, [rbp+2Fh+dot]
    vmovss  [rbp+2Fh+var_64], xmm0
  }
  v49 = b3D;
  _RAX = dir;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rbp+2Fh+var_70], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  [rbp+2Fh+var_6C], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rbp+2Fh+var_68], xmm0
    vmulss  xmm0, xmm7, xmm7
    vmovss  [rsp+110h+closestDistSq2D+4], xmm0
    vmovss  [rsp+110h+closestDistSq2D], xmm0
  }
  result = TacGraphSearch_FindClosestPoint_r(v17, &v17->m_SearchRoot, _R14, &pFilter, NULL, &closestDistSq2D[1], closestDistSq2D);
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+110h+var_38+8]
    vmovaps xmm7, [rsp+110h+var_48+8]
  }
  return result;
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisWithinRadius
==============
*/

const tacpoint_t *__fastcall TacGraphSearch_FindClosestPointWithoutVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, double minRadius, double maxRadius, const vec3_t *pos, float minDistFromPos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v23; 
  int PointsInRadius_Sorted; 
  unsigned __int64 v38; 
  bool v39; 
  bool v40; 
  unsigned __int64 v41; 
  const tacpoint_t *result; 
  int maxNumPoints; 
  int m_NumTacGraphs; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v76; 
  const tacpoint_t *v77; 
  unsigned __int16 PointIndex; 
  const vec3_t *v81; 
  int v82; 
  tacpoint_t *ppOutPoints[65]; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  _RDI = origin;
  _RSI = pos;
  Sys_ProfBeginNamedEvent(0xFF808080, "Tac_FindClosestPointNoVisWithRadius");
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    m_NumTacGraphs = pTacData->m_NumTacGraphs;
    maxNumPoints = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1180, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", maxNumPoints, m_NumTacGraphs) )
      __debugbreak();
  }
  v23 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  __asm
  {
    vmulss  xmm11, xmm6, xmm6
    vmovss  xmm0, [rsp+328h+minDistFromPos]
    vmulss  xmm10, xmm0, xmm0
  }
  pFilter.m_pPoints = v23->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+328h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+328h+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+328h+pFilter.m_SearchOrigin+8], xmm0
  }
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_NoVis::`vftable';
  v76 = v23;
  v77 = pTargetPoint;
  __asm
  {
    vmulss  xmm0, xmm7, xmm7
    vmovss  [rsp+328h+var_2A4], xmm0
    vmovss  xmm1, cs:__real@45c80000
    vmovss  [rsp+328h+var_2A0], xmm1
  }
  v81 = pIgnoreVecs;
  v82 = numIgnoreVecs;
  __asm
  {
    vmovss  xmm0, [rsp+328h+ignoreRadius]
    vmovss  [rsp+328h+var_28C], xmm0
  }
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  __asm { vmovss  xmm2, cs:__real@49800000; maxRadius }
  PointsInRadius_Sorted = TacGraphSearch_FindPointsInRadius_Sorted(v23, pos, *(float *)&_XMM2, &pFilter, (const tacpoint_t **)ppOutPoints, 64);
  if ( PointsInRadius_Sorted <= 0 )
  {
LABEL_9:
    _RBX = NULL;
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rsi]
      vmovss  xmm8, dword ptr [rsi+4]
      vmovss  xmm9, dword ptr [rsi+8]
    }
    v38 = PointsInRadius_Sorted;
    v39 = 0;
    v40 = 1;
    v41 = 0i64;
    while ( 1 )
    {
      _RBX = ppOutPoints[v41];
      __asm
      {
        vmovss  xmm4, dword ptr [rbx]
        vsubss  xmm2, xmm7, xmm4
        vmovss  xmm5, dword ptr [rbx+4]
        vsubss  xmm0, xmm8, xmm5
        vmovss  xmm6, dword ptr [rbx+8]
        vsubss  xmm3, xmm9, xmm6
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm10
      }
      if ( !v40 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vsubss  xmm3, xmm0, xmm4
          vmovss  xmm1, dword ptr [rdi+4]
          vsubss  xmm2, xmm1, xmm5
          vmovss  xmm0, dword ptr [rdi+8]
          vsubss  xmm4, xmm0, xmm6
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm11
        }
        if ( v39 )
          break;
      }
      v39 = ++v41 < v38;
      v40 = v41 <= v38;
      if ( (__int64)v41 >= (__int64)v38 )
        goto LABEL_9;
    }
  }
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter::`vftable';
  Sys_ProfEndNamedEvent();
  result = _RBX;
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisWithinVolume
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithoutVisWithinVolume(const TacticalGraphData *pTacData, const gentity_s *pVolume, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v12; 
  float *closestDistSq; 
  float closestDistSq2D; 
  float v35; 
  __int64 v36; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v38; 
  const tacpoint_t *v39; 
  unsigned __int16 PointIndex; 
  unsigned int Instance; 
  const vec3_t *v42; 
  int v43; 

  v36 = -2i64;
  _RBP = pVolume;
  if ( !pTacData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1161, ASSERT_TYPE_ASSERT, "( pTacData )", (const char *)&queryFormat, "pTacData") )
    __debugbreak();
  if ( !pTargetPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1162, ASSERT_TYPE_ASSERT, "( pTargetPoint )", (const char *)&queryFormat, "pTargetPoint") )
    __debugbreak();
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    LODWORD(closestDistSq) = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1165, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", closestDistSq, pTacData->m_NumTacGraphs) )
      __debugbreak();
  }
  v12 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  pFilter.m_pPoints = v12->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+130h]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [rbp+134h]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rbp+138h]
    vmovss  dword ptr [rsp+0D8h+pFilter.m_SearchOrigin+8], xmm0
  }
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_NoVisWithinVolume::`vftable';
  v38 = v12;
  v39 = pTargetPoint;
  v42 = pIgnoreVecs;
  v43 = numIgnoreVecs;
  __asm
  {
    vmovss  xmm0, [rsp+0D8h+ignoreRadius]
    vmovss  [rsp+0D8h+var_44], xmm0
  }
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RBP);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+100h]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm0, xmm3
    vaddss  xmm4, xmm0, dword ptr [rbp+10Ch]
    vmovss  xmm1, dword ptr [rbp+104h]
    vandps  xmm1, xmm1, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbp+110h]
    vmovss  xmm0, dword ptr [rbp+108h]
    vandps  xmm0, xmm0, xmm3
    vaddss  xmm3, xmm0, dword ptr [rbp+114h]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  [rsp+0D8h+var_94], xmm3
    vmovss  [rsp+0D8h+var_98], xmm3
  }
  return TacGraphSearch_FindClosestPoint_r(v12, &v12->m_SearchRoot, pos, &pFilter, NULL, &v35, &closestDistSq2D);
}

/*
==============
TacGraphSearch_FindClosestPoint_r
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPoint_r(const TacticalGraph *pGraph, const tacpoint_search_node_t *pNode, const vec3_t *pos, TacGraphSearchFilter *pFilter, const tacpoint_t *pCurClosest, float *closestDistSq, float *closestDistSq2D)
{
  unsigned __int16 m_PointListRoot; 
  const tacpoint_search_node_t *v15; 
  const tacpoint_t *result; 
  unsigned __int64 ChildNodeForPos; 
  __int64 i; 

  m_PointListRoot = pNode->m_PointListRoot;
  _R15 = closestDistSq;
  _R12 = closestDistSq2D;
  v15 = pNode;
  __asm { vmovaps [rsp+0A8h+var_58], xmm6 }
  if ( m_PointListRoot != 0xFFFF )
  {
    do
    {
      _RBX = &pGraph->m_Points[m_PointListRoot];
      if ( pFilter )
      {
        *(double *)&_XMM0 = ((double (__fastcall *)(TacGraphSearchFilter *, const vec3_t *, _QWORD))pFilter->GetScore)(pFilter, pos, m_PointListRoot);
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vsubss  xmm3, xmm0, dword ptr [rdi]
          vmovss  xmm1, dword ptr [rbx+4]
          vmovss  xmm0, dword ptr [rbx+8]
          vsubss  xmm2, xmm1, dword ptr [rdi+4]
          vsubss  xmm4, xmm0, dword ptr [rdi+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm6, xmm3, xmm0
        }
      }
      if ( pCurClosest )
      {
        __asm { vcomiss xmm6, dword ptr [r15] }
      }
      else if ( !pFilter || pFilter->AllowPoint(pFilter, m_PointListRoot) )
      {
        __asm
        {
          vmovss  dword ptr [r15], xmm6
          vmovss  xmm0, dword ptr [rbx]
          vmovss  xmm1, dword ptr [rbx+4]
          vsubss  xmm2, xmm1, dword ptr [rdi+4]
          vsubss  xmm4, xmm0, dword ptr [rdi]
          vmulss  xmm3, xmm2, xmm2
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm1, xmm3, xmm0
          vmovss  dword ptr [r12], xmm1
        }
        pCurClosest = _RBX;
      }
      m_PointListRoot = _RBX->m_SearchNext;
    }
    while ( m_PointListRoot != 0xFFFF );
    v15 = pNode;
  }
  if ( v15->m_ChildNodes )
  {
    ChildNodeForPos = TacGraphSearch_GetChildNodeForPos(v15, (const vec2_t *)pos);
    result = TacGraphSearch_FindClosestPoint_r(pGraph, v15->m_ChildNodes[ChildNodeForPos], pos, pFilter, pCurClosest, closestDistSq, closestDistSq2D);
    __asm { vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
    for ( i = 0i64; i < 4; ++i )
    {
      if ( i != ChildNodeForPos )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [r12]
          vsqrtss xmm2, xmm2, xmm2
        }
        _RDX = pNode->m_ChildNodes[i];
        __asm
        {
          vmovss  xmm0, dword ptr [rdx]
          vsubss  xmm1, xmm0, dword ptr [rdi]
          vaddss  xmm0, xmm2, dword ptr [rdx+8]
          vandps  xmm1, xmm1, xmm6
          vcomiss xmm1, xmm0
        }
        if ( i <= ChildNodeForPos )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdx+4]
            vsubss  xmm1, xmm0, dword ptr [rdi+4]
            vaddss  xmm0, xmm2, dword ptr [rdx+0Ch]
            vandps  xmm1, xmm1, xmm6
            vcomiss xmm1, xmm0
          }
          if ( i <= ChildNodeForPos )
            result = TacGraphSearch_FindClosestPoint_r(pGraph, _RDX, pos, pFilter, result, closestDistSq, closestDistSq2D);
        }
      }
    }
  }
  else
  {
    result = pCurClosest;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_58] }
  return result;
}

/*
==============
TacGraphSearch_FindNodeForPos_r
==============
*/
tacpoint_search_node_t *TacGraphSearch_FindNodeForPos_r(tacpoint_search_node_t *pNode, const vec3_t *pos)
{
  while ( 1 )
  {
    if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 658, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
      __debugbreak();
    if ( pNode->m_PointListRoot != 0xFFFF || !pNode->m_ChildNodes )
      break;
    pNode = pNode->m_ChildNodes[TacGraphSearch_GetChildNodeForPos(pNode, (const vec2_t *)pos)];
  }
  return pNode;
}

/*
==============
TacGraphSearch_FindNode_r
==============
*/
tacpoint_search_node_t *TacGraphSearch_FindNode_r(TacticalGraph *pGraph, tacpoint_search_node_t *pNode, unsigned __int16 pointID, tacpoint_t *pPoint, const vec3_t *formerPos)
{
  unsigned __int16 m_NumPoints; 
  unsigned __int16 m_PointListRoot; 
  __int64 v12; 
  __int64 v13; 

  while ( 1 )
  {
    if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 632, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
      __debugbreak();
    if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 633, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
      __debugbreak();
    m_NumPoints = pGraph->m_NumPoints;
    if ( pointID >= m_NumPoints )
    {
      LODWORD(v13) = m_NumPoints;
      LODWORD(v12) = pointID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 634, ASSERT_TYPE_ASSERT, "(unsigned)( pointID ) < (unsigned)( pGraph->m_NumPoints )", "pointID doesn't index pGraph->m_NumPoints\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 635, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
      __debugbreak();
    m_PointListRoot = pNode->m_PointListRoot;
    if ( m_PointListRoot != 0xFFFF )
      break;
LABEL_16:
    if ( !pNode->m_ChildNodes )
      return 0i64;
    pNode = pNode->m_ChildNodes[TacGraphSearch_GetChildNodeForPos(pNode, (const vec2_t *)formerPos)];
  }
  while ( m_PointListRoot != pointID )
  {
    m_PointListRoot = pGraph->m_Points[m_PointListRoot].m_SearchNext;
    if ( m_PointListRoot == 0xFFFF )
      goto LABEL_16;
  }
  return pNode;
}

/*
==============
TacGraphSearch_FindPointsInRadius
==============
*/

__int64 __fastcall TacGraphSearch_FindPointsInRadius(TacticalGraph *pGraph, const vec3_t *pos, double radius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  bool v11; 
  bool v12; 
  unsigned int PointsInRadius_r; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 797, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 798, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  v11 = pGraph == NULL;
  if ( !pGraph )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 799, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 800, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  __asm { vmovaps xmm3, xmm6; radius }
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, pos, *(float *)&_XMM3, NULL, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  result = PointsInRadius_r;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
TacGraphSearch_FindPointsInRadius
==============
*/

__int64 __fastcall TacGraphSearch_FindPointsInRadius(const TacticalGraph *pGraph, const vec3_t *pos, double radius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  bool v11; 
  bool v12; 
  unsigned int PointsInRadius_r; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 797, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 798, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  v11 = pGraph == NULL;
  if ( !pGraph )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 799, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 800, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  __asm { vmovaps xmm3, xmm6; radius }
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, pos, *(float *)&_XMM3, NULL, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  result = PointsInRadius_r;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithVis
==============
*/

__int64 __fastcall TacGraphSearch_FindPointsInRadiusWithVis(const TacticalGraph *pGraph, const vec3_t *pos, double minRadius, double maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  bool v16; 
  bool v17; 
  unsigned int PointsInRadius_r; 
  __int64 result; 
  TacGraphSearchFilter pFilter; 
  const TacticalGraph *v33; 
  const tacpoint_t *v34; 
  unsigned __int16 PointIndex; 
  __int64 v38; 
  int v39; 
  int v41; 
  char v42; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  _RBP = pos;
  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 811, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 812, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  v16 = pGraph == NULL;
  if ( !pGraph )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 813, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 814, ASSERT_TYPE_ASSERT, "(maxRadius > 0.f)", (const char *)&queryFormat, "maxRadius > 0.f") )
    __debugbreak();
  pFilter.m_pPoints = pGraph->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rsp+128h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  dword ptr [rsp+128h+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+128h+pFilter.m_SearchOrigin+8], xmm0
  }
  v33 = pGraph;
  v34 = pVisPoint;
  __asm
  {
    vmulss  xmm0, xmm8, xmm8
    vmovss  [rsp+128h+var_A4], xmm0
    vmovss  xmm1, [rsp+128h+minRadiusZ]
    vmulss  xmm2, xmm1, xmm1
    vmovss  [rsp+128h+var_A0], xmm2
  }
  v38 = 0i64;
  v39 = 0;
  __asm { vmovss  [rsp+128h+var_8C], xmm6 }
  Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v41 = 0;
  v42 = 0;
  PointIndex = TacGraph_GetPointIndex(pVisPoint);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  __asm { vmovaps xmm3, xmm7; radius }
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, _RBP, *(float *)&_XMM3, &pFilter, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  result = PointsInRadius_r;
  _R11 = &v43;
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
TacGraphSearch_FindPointsInRadiusWithVis_Sorted
==============
*/

int __fastcall TacGraphSearch_FindPointsInRadiusWithVis_Sorted(const TacticalGraph *pGraph, const vec3_t *pos, double minRadius, double maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  bool v16; 
  bool v17; 
  int result; 
  TacGraphSearchFilter pFilter; 
  const TacticalGraph *v32; 
  const tacpoint_t *v33; 
  unsigned __int16 PointIndex; 
  __int64 v37; 
  int v38; 
  int v40; 
  char v41; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  _RBP = pos;
  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 874, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints", -2i64) )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 875, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  v16 = pGraph == NULL;
  if ( !pGraph )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 876, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 877, ASSERT_TYPE_ASSERT, "(maxRadius > 0.f)", (const char *)&queryFormat, "maxRadius > 0.f") )
    __debugbreak();
  pFilter.m_pPoints = pGraph->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rsp+118h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  dword ptr [rsp+118h+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+118h+pFilter.m_SearchOrigin+8], xmm0
  }
  v32 = pGraph;
  v33 = pVisPoint;
  __asm
  {
    vmulss  xmm0, xmm8, xmm8
    vmovss  [rsp+118h+var_A4], xmm0
    vmovss  xmm1, [rsp+118h+minRadiusZ]
    vmulss  xmm2, xmm1, xmm1
    vmovss  [rsp+118h+var_A0], xmm2
  }
  v37 = 0i64;
  v38 = 0;
  __asm { vmovss  [rsp+118h+var_8C], xmm6 }
  Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v40 = 0;
  v41 = 0;
  PointIndex = TacGraph_GetPointIndex(pVisPoint);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  __asm { vmovaps xmm2, xmm7; maxRadius }
  result = TacGraphSearch_FindPointsInRadius_Sorted(pGraph, _RBP, *(float *)&_XMM2, &pFilter, ppOutPoints, maxNumPoints);
  _R11 = &v42;
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
TacGraphSearch_FindPointsInRadiusWithinCone
==============
*/

__int64 __fastcall TacGraphSearch_FindPointsInRadiusWithinCone(const TacticalGraph *pGraph, const vec3_t *pos, double radius, const vec3_t *forward, float dot, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  bool v14; 
  bool v15; 
  unsigned int PointsInRadius_r; 
  __int64 result; 
  TacGraphSearchFilter pFilter; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _R14 = forward;
  __asm { vmovaps xmm6, xmm2 }
  _RBP = pos;
  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 891, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 892, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  v14 = pGraph == NULL;
  if ( !pGraph )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 893, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 894, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  pFilter.m_pPoints = pGraph->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rsp+0B8h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  dword ptr [rsp+0B8h+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+0B8h+pFilter.m_SearchOrigin+8], xmm0
  }
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_ViewCone::`vftable';
  __asm
  {
    vmovss  xmm0, [rsp+0B8h+dot]
    vmovss  [rsp+0B8h+var_44], xmm0
    vmovss  xmm1, dword ptr [r14]
    vmovss  [rsp+0B8h+var_50], xmm1
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+0B8h+var_4C], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  [rsp+0B8h+var_48], xmm1
  }
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  __asm { vmovaps xmm3, xmm6; radius }
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, _RBP, *(float *)&_XMM3, &pFilter, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  result = PointsInRadius_r;
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
  return result;
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithoutVis
==============
*/

__int64 __fastcall TacGraphSearch_FindPointsInRadiusWithoutVis(const TacticalGraph *pGraph, const vec3_t *pos, double minRadius, double maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  bool v16; 
  bool v17; 
  unsigned int PointsInRadius_r; 
  __int64 result; 
  TacGraphSearchFilter pFilter; 
  const TacticalGraph *v33; 
  const tacpoint_t *v34; 
  unsigned __int16 PointIndex; 
  __int64 v38; 
  int v39; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  _RBP = pos;
  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 827, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 828, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  v16 = pGraph == NULL;
  if ( !pGraph )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 829, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 830, ASSERT_TYPE_ASSERT, "(maxRadius > 0.f)", (const char *)&queryFormat, "maxRadius > 0.f") )
    __debugbreak();
  pFilter.m_pPoints = pGraph->m_Points;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rsp+108h+pFilter.m_SearchOrigin], xmm0
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  dword ptr [rsp+108h+pFilter.m_SearchOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+108h+pFilter.m_SearchOrigin+8], xmm0
  }
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_NoVis::`vftable';
  v33 = pGraph;
  v34 = pVisPoint;
  __asm
  {
    vmulss  xmm0, xmm8, xmm8
    vmovss  [rsp+108h+var_84], xmm0
    vmovss  xmm1, [rsp+108h+minRadiusZ]
    vmulss  xmm2, xmm1, xmm1
    vmovss  [rsp+108h+var_80], xmm2
  }
  v38 = 0i64;
  v39 = 0;
  __asm { vmovss  [rsp+108h+var_6C], xmm6 }
  PointIndex = TacGraph_GetPointIndex(pVisPoint);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  __asm { vmovaps xmm3, xmm7; radius }
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, _RBP, *(float *)&_XMM3, &pFilter, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  result = PointsInRadius_r;
  _R11 = &v41;
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
TacGraphSearch_FindPointsInRadius_Sorted
==============
*/
int TacGraphSearch_FindPointsInRadius_Sorted(const TacticalGraph *pGraph, const vec3_t *pos, float maxRadius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  return TacGraphSearch_FindPointsInRadius_Sorted(pGraph, pos, maxRadius, NULL, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearch_FindPointsInRadius_Sorted
==============
*/

__int64 __fastcall TacGraphSearch_FindPointsInRadius_Sorted(const TacticalGraph *pGraph, const vec3_t *pos, double maxRadius, TacGraphSearchFilter *pFilter, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  signed __int64 v6; 
  void *v9; 
  bool v14; 
  bool v15; 
  int PointsInRadius_r; 
  signed __int64 v19; 
  signed __int64 v20; 
  __int64 v21; 
  unsigned __int64 v26; 
  const tacpoint_t **v27; 
  __int64 v28; 
  const tacpoint_t *v65; 
  const tacpoint_t **v74; 
  const tacpoint_t *v75; 
  __int64 result; 
  char Base[8]; 
  _OWORD v79[511]; 

  v9 = alloca(v6);
  __asm { vmovaps [rsp+20A8h+var_48], xmm6 }
  _RBP = pos;
  __asm { vmovaps xmm6, xmm2 }
  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 843, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 844, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  v14 = pGraph == NULL;
  if ( !pGraph )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 845, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 846, ASSERT_TYPE_ASSERT, "(maxRadius > 0.f)", (const char *)&queryFormat, "maxRadius > 0.f") )
    __debugbreak();
  if ( maxNumPoints > 512 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 849, ASSERT_TYPE_ASSERT, "( maxNumPoints ) <= ( cMaxSorts )", "%s <= %s\n\t%i, %i", "maxNumPoints", "cMaxSorts", maxNumPoints, 512) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius_Sorted");
  __asm { vmovaps xmm3, xmm6; radius }
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, _RBP, *(float *)&_XMM3, pFilter, ppOutPoints, maxNumPoints);
  v19 = 0i64;
  v20 = PointsInRadius_r;
  v21 = 0i64;
  if ( PointsInRadius_r >= 4i64 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+0]
      vmovss  xmm5, dword ptr [rbp+4]
      vmovss  xmm6, dword ptr [rbp+8]
    }
    _R8 = v79;
    v26 = ((unsigned __int64)(PointsInRadius_r - 4i64) >> 2) + 1;
    v27 = ppOutPoints + 2;
    v21 = 4 * v26;
    do
    {
      v28 = (__int64)*(v27 - 2);
      v27 += 4;
      *((_QWORD *)_R8 - 1) = v28;
      _R8 += 4;
      __asm
      {
        vsubss  xmm0, xmm5, dword ptr [rax+4]
        vsubss  xmm2, xmm4, dword ptr [rax]
        vsubss  xmm3, xmm6, dword ptr [rax+8]
      }
      *((_QWORD *)_R8 - 7) = *(v27 - 5);
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [r8-40h], xmm2
        vsubss  xmm0, xmm5, dword ptr [rax+4]
        vsubss  xmm2, xmm4, dword ptr [rax]
        vsubss  xmm3, xmm6, dword ptr [rax+8]
      }
      *((_QWORD *)_R8 - 5) = *(v27 - 4);
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [r8-30h], xmm2
        vsubss  xmm0, xmm5, dword ptr [rax+4]
        vsubss  xmm2, xmm4, dword ptr [rax]
        vsubss  xmm3, xmm6, dword ptr [rax+8]
      }
      *((_QWORD *)_R8 - 3) = *(v27 - 3);
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [r8-20h], xmm2
        vsubss  xmm0, xmm5, dword ptr [rax+4]
        vsubss  xmm2, xmm4, dword ptr [rax]
        vsubss  xmm3, xmm6, dword ptr [rax+8]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [r8-10h], xmm2
      }
      --v26;
    }
    while ( v26 );
  }
  if ( v21 < v20 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+0]
      vmovss  xmm5, dword ptr [rbp+4]
      vmovss  xmm6, dword ptr [rbp+8]
    }
    _RDX = &v79[v21];
    do
    {
      v65 = ppOutPoints[v21++];
      *((_QWORD *)_RDX++ - 1) = v65;
      __asm
      {
        vsubss  xmm0, xmm5, dword ptr [rax+4]
        vsubss  xmm2, xmm4, dword ptr [rax]
        vsubss  xmm3, xmm6, dword ptr [rax+8]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rdx-10h], xmm2
      }
    }
    while ( v21 < v20 );
  }
  qsort(Base, v20, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)TacPoint_CompareDist);
  if ( (int)v20 > 0 )
  {
    v74 = (const tacpoint_t **)Base;
    do
    {
      v75 = *v74;
      v74 += 2;
      ppOutPoints[v19++] = v75;
    }
    while ( v19 < v20 );
  }
  Sys_ProfEndNamedEvent();
  result = (unsigned int)v20;
  __asm { vmovaps xmm6, [rsp+20A8h+var_48] }
  return result;
}

/*
==============
TacGraphSearch_FindPointsInRadius_r
==============
*/

tacpoint_search_node_t **__fastcall TacGraphSearch_FindPointsInRadius_r(const tacpoint_t *pPoints, const tacpoint_search_node_t *pNode, const vec3_t *pos, double radius, TacGraphSearchFilter *pFilter, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  unsigned int v8; 
  tacpoint_search_node_t **result; 
  const tacpoint_t *v12; 
  unsigned __int16 m_PointListRoot; 
  __int64 v16; 
  const tacpoint_t *v21; 
  int ChildNodeForPos; 
  char v29; 
  int PointsInRadius_r; 
  __int64 v32; 
  int v33; 
  unsigned int v36; 
  int v37; 
  unsigned int v43; 
  int v44; 
  int v49; 
  char v52; 
  char v53; 
  vec2_t posa; 

  __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
  v8 = 0;
  _RBP = pos;
  result = pNode->m_ChildNodes;
  v12 = pPoints;
  __asm { vmovaps xmm6, xmm3 }
  if ( pNode->m_PointListRoot == 0xFFFF )
  {
    if ( result )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r8]
        vsubss  xmm1, xmm0, xmm6
        vaddss  xmm0, xmm6, dword ptr [r8+4]
        vmovss  dword ptr [rsp+0B8h+pos+4], xmm0
        vmovss  dword ptr [rsp+0B8h+pos], xmm1
      }
      ChildNodeForPos = TacGraphSearch_GetChildNodeForPos(pNode, &posa);
      v29 = ChildNodeForPos;
      __asm { vmovaps xmm3, xmm6; radius }
      PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(v12, pNode->m_ChildNodes[ChildNodeForPos], _RBP, *(float *)&_XMM3, pFilter, ppOutPoints, maxNumPoints);
      v32 = PointsInRadius_r;
      v33 = 1 << v29;
      if ( PointsInRadius_r < maxNumPoints )
      {
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rbp+0]
          vaddss  xmm1, xmm6, dword ptr [rbp+4]
          vmovss  dword ptr [rsp+0B8h+pos], xmm0
          vmovss  dword ptr [rsp+0B8h+pos+4], xmm1
        }
        v36 = TacGraphSearch_GetChildNodeForPos(pNode, &posa);
        v37 = (unsigned __int8)v33;
        v53 = v36;
        if ( !_bittest(&v37, v36) )
        {
          __asm { vmovaps xmm3, xmm6; radius }
          LODWORD(v32) = TacGraphSearch_FindPointsInRadius_r(pPoints, pNode->m_ChildNodes[v36], _RBP, *(float *)&_XMM3, pFilter, &ppOutPoints[v32], maxNumPoints - v32) + v32;
          v33 = (unsigned __int8)v33 | (1 << v53);
        }
        if ( (int)v32 < maxNumPoints )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0]
            vmovss  xmm2, dword ptr [rbp+4]
            vsubss  xmm1, xmm0, xmm6
            vsubss  xmm0, xmm2, xmm6
            vmovss  dword ptr [rsp+0B8h+pos+4], xmm0
            vmovss  dword ptr [rsp+0B8h+pos], xmm1
          }
          v43 = TacGraphSearch_GetChildNodeForPos(pNode, &posa);
          v44 = (unsigned __int8)v33;
          v52 = v43;
          if ( !_bittest(&v44, v43) )
          {
            __asm { vmovaps xmm3, xmm6; radius }
            LODWORD(v32) = TacGraphSearch_FindPointsInRadius_r(pPoints, pNode->m_ChildNodes[v43], _RBP, *(float *)&_XMM3, pFilter, &ppOutPoints[(int)v32], maxNumPoints - v32) + v32;
            v33 = (unsigned __int8)v33 | (1 << v52);
          }
          if ( (int)v32 < maxNumPoints )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+4]
              vaddss  xmm0, xmm6, dword ptr [rbp+0]
              vsubss  xmm2, xmm1, xmm6
              vmovss  dword ptr [rsp+0B8h+pos+4], xmm2
              vmovss  dword ptr [rsp+0B8h+pos], xmm0
            }
            v49 = TacGraphSearch_GetChildNodeForPos(pNode, &posa);
            if ( ((unsigned __int8)(1 << v49) & (unsigned __int8)v33) == 0 )
            {
              __asm { vmovaps xmm3, xmm6; radius }
              LODWORD(v32) = TacGraphSearch_FindPointsInRadius_r(pPoints, pNode->m_ChildNodes[v49], _RBP, *(float *)&_XMM3, pFilter, &ppOutPoints[(int)v32], maxNumPoints - v32) + v32;
            }
          }
        }
      }
      result = (tacpoint_search_node_t **)(unsigned int)v32;
    }
  }
  else
  {
    if ( result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 716, ASSERT_TYPE_ASSERT, "(!pNode->m_ChildNodes)", (const char *)&queryFormat, "!pNode->m_ChildNodes") )
      __debugbreak();
    m_PointListRoot = pNode->m_PointListRoot;
    __asm { vmulss  xmm6, xmm6, xmm6 }
    if ( m_PointListRoot != 0xFFFF )
    {
      v16 = 0i64;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0]
          vmovss  xmm1, dword ptr [rbp+4]
          vsubss  xmm2, xmm1, dword ptr [rdi+rcx*8+4]
          vsubss  xmm4, xmm0, dword ptr [rdi+rcx*8]
        }
        v21 = &v12[m_PointListRoot];
        __asm
        {
          vmulss  xmm3, xmm2, xmm2
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm1, xmm3, xmm0
          vcomiss xmm1, xmm6
        }
        if ( !pFilter || ((unsigned __int8 (__fastcall *)(TacGraphSearchFilter *))pFilter->AllowPoint)(pFilter) )
        {
          ppOutPoints[v16] = v21;
          ++v8;
          if ( ++v16 >= maxNumPoints )
            break;
        }
        m_PointListRoot = v21->m_SearchNext;
        v12 = pPoints;
      }
      while ( m_PointListRoot != 0xFFFF );
    }
    result = (tacpoint_search_node_t **)v8;
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_58] }
  return result;
}

/*
==============
TacGraphSearch_FindPointsInVolume
==============
*/
__int64 TacGraphSearch_FindPointsInVolume(const TacticalGraph *pGraph, const gentity_s *pVolume, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  unsigned int PointsInVolume_r; 

  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 967, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 968, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 969, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( !pVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 970, ASSERT_TYPE_ASSERT, "(pVolume)", (const char *)&queryFormat, "pVolume") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInVolume");
  PointsInVolume_r = TacGraphSearch_FindPointsInVolume_r(pGraph->m_Points, &pGraph->m_SearchRoot, pVolume, NULL, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  return PointsInVolume_r;
}

/*
==============
TacGraphSearch_FindPointsInVolume_r
==============
*/
__int64 TacGraphSearch_FindPointsInVolume_r(const tacpoint_t *pPoints, const tacpoint_search_node_t *pNode, const gentity_s *pVolume, TacGraphSearchFilter *pFilter, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  int v6; 
  const gentity_s *v8; 
  const tacpoint_t *v10; 
  unsigned __int16 m_PointListRoot; 
  __int64 v12; 
  const tacpoint_t *v13; 
  __int64 v19; 
  unsigned int volumePhysInstId; 
  HavokPhysics_CollisionQueryResult *pResult; 
  vec2_t maxs1; 
  vec2_t mins1; 
  vec2_t maxs0; 
  vec2_t mins0; 

  v6 = 0;
  v8 = pVolume;
  v10 = pPoints;
  if ( pNode->m_PointListRoot == 0xFFFF )
  {
    if ( !pNode->m_ChildNodes )
      return 0i64;
    __asm
    {
      vmovss  xmm4, dword ptr [r8+118h]
      vmovss  xmm1, dword ptr [r8+124h]
      vmovss  xmm3, dword ptr [r8+11Ch]
      vmovss  xmm2, dword ptr [r8+128h]
    }
    v19 = 0i64;
    __asm
    {
      vsubss  xmm0, xmm4, xmm1
      vmovss  dword ptr [rsp+0B8h+mins0], xmm0
      vsubss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rsp+0B8h+mins0+4], xmm0
      vaddss  xmm0, xmm2, xmm3
      vaddss  xmm1, xmm1, xmm4
      vmovss  dword ptr [rsp+0B8h+maxs0+4], xmm0
      vmovss  dword ptr [rsp+0B8h+maxs0], xmm1
    }
    do
    {
      _RSI = pNode->m_ChildNodes[v19];
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+4]
        vsubss  xmm2, xmm0, dword ptr [rsi+0Ch]
        vmovss  xmm1, dword ptr [rsi]
        vsubss  xmm0, xmm1, dword ptr [rsi+8]
        vmovss  dword ptr [rsp+0B8h+mins1], xmm0
        vmovss  dword ptr [rsp+0B8h+mins1+4], xmm2
        vmovss  xmm1, dword ptr [rsi+0Ch]
        vmovss  xmm0, dword ptr [rsi+8]
        vaddss  xmm3, xmm1, dword ptr [rsi+4]
        vaddss  xmm2, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsp+0B8h+maxs1], xmm2
        vmovss  dword ptr [rsp+0B8h+maxs1+4], xmm3
      }
      if ( BoundsOverlap2D(&mins0, &maxs0, &mins1, &maxs1) )
        v6 += TacGraphSearch_FindPointsInVolume_r(pPoints, _RSI, v8, pFilter, ppOutPoints, maxNumPoints);
      if ( v6 >= maxNumPoints )
        break;
      ++v19;
    }
    while ( v19 < 4 );
  }
  else
  {
    volumePhysInstId = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, pVolume);
    pResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
    if ( !pResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 914, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result", volumePhysInstId) )
      __debugbreak();
    if ( pNode->m_ChildNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 916, ASSERT_TYPE_ASSERT, "(!pNode->m_ChildNodes)", (const char *)&queryFormat, "!pNode->m_ChildNodes") )
      __debugbreak();
    m_PointListRoot = pNode->m_PointListRoot;
    if ( m_PointListRoot != 0xFFFF )
    {
      v12 = 0i64;
      do
      {
        v13 = &v10[m_PointListRoot];
        if ( IsPointInRegion(&v13->m_Pos, volumePhysInstId, pResult) && (!pFilter || pFilter->AllowPoint(pFilter, m_PointListRoot)) )
        {
          ppOutPoints[v12] = v13;
          ++v6;
          if ( ++v12 >= maxNumPoints )
            break;
        }
        m_PointListRoot = v13->m_SearchNext;
        v10 = pPoints;
      }
      while ( m_PointListRoot != 0xFFFF );
    }
    Physics_FreeCollisionQueryResult(pResult);
  }
  return (unsigned int)v6;
}

/*
==============
TacGraphSearch_GetChildNodeForPos
==============
*/
__int64 TacGraphSearch_GetChildNodeForPos(const tacpoint_search_node_t *pNode, const vec2_t *pos)
{
  __int64 result; 

  _RDI = pos;
  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 539, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rdi]
    vsubss  xmm3, xmm0, dword ptr [rbx+4]
    vsubss  xmm2, xmm1, dword ptr [rbx]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  result = 1i64;
  __asm { vcomiss xmm3, xmm0 }
  return result;
}

/*
==============
TacGraphSearch_GetNumBytes
==============
*/
int TacGraphSearch_GetNumBytes(const TacticalGraph *pGraph)
{
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1390, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  return TacGraphSearch_GetNumBytes_r(&pGraph->m_SearchRoot);
}

/*
==============
TacGraphSearch_GetNumBytes_r
==============
*/
__int64 TacGraphSearch_GetNumBytes_r(const tacpoint_search_node_t *pNode)
{
  unsigned int v2; 
  __int64 i; 

  v2 = 17;
  if ( pNode->m_PointListRoot != 0xFFFF )
    return 19i64;
  if ( pNode->m_ChildNodes )
  {
    for ( i = 0i64; i < 4; ++i )
      v2 += TacGraphSearch_GetNumBytes_r(pNode->m_ChildNodes[i]);
  }
  return v2;
}

/*
==============
TacGraphSearch_UpdatePoint
==============
*/
void TacGraphSearch_UpdatePoint(TacticalGraph *pGraph, unsigned __int16 pointID, const vec3_t *formerPos)
{
  unsigned __int16 m_NumPoints; 
  __int64 v7; 
  tacpoint_t *v8; 
  tacpoint_search_node_t *Node_r; 
  tacpoint_search_node_t *NodeForPos_r; 
  unsigned __int16 m_SearchNext; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 672, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  m_NumPoints = pGraph->m_NumPoints;
  if ( pointID >= m_NumPoints )
  {
    LODWORD(v14) = pointID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 673, ASSERT_TYPE_ASSERT, "(unsigned)( pointID ) < (unsigned)( pGraph->m_NumPoints )", "pointID doesn't index pGraph->m_NumPoints\n\t%i not in [0, %i)", v14, m_NumPoints) )
      __debugbreak();
  }
  v7 = pointID;
  v8 = &pGraph->m_Points[v7];
  Node_r = TacGraphSearch_FindNode_r(pGraph, &pGraph->m_SearchRoot, pointID, v8, formerPos);
  if ( !Node_r && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 677, ASSERT_TYPE_ASSERT, "(pOldNode)", (const char *)&queryFormat, "pOldNode") )
    __debugbreak();
  NodeForPos_r = TacGraphSearch_FindNodeForPos_r(&pGraph->m_SearchRoot, &v8->m_Pos);
  if ( !NodeForPos_r && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 680, ASSERT_TYPE_ASSERT, "(pNewNode)", (const char *)&queryFormat, "pNewNode") )
    __debugbreak();
  if ( NodeForPos_r != Node_r )
  {
    if ( Node_r->m_PointListRoot == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 688, ASSERT_TYPE_ASSERT, "(pOldNode->m_PointListRoot != cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pOldNode->m_PointListRoot != cTacPoint_InvalidIndex") )
      __debugbreak();
    if ( Node_r->m_PointListRoot == pointID )
    {
      Node_r->m_PointListRoot = v8->m_SearchNext;
      m_SearchNext = v8->m_SearchNext;
      if ( m_SearchNext != 0xFFFF )
        pGraph->m_Points[m_SearchNext].m_SearchPrev = -1;
      v8->m_SearchNext = -1;
      if ( v8->m_SearchPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 695, ASSERT_TYPE_ASSERT, "(pPoint->m_SearchPrev == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pPoint->m_SearchPrev == cTacPoint_InvalidIndex") )
        __debugbreak();
    }
    else
    {
      if ( v8->m_SearchPrev == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 699, ASSERT_TYPE_ASSERT, "(pPoint->m_SearchPrev != cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pPoint->m_SearchPrev != cTacPoint_InvalidIndex") )
        __debugbreak();
      pGraph->m_Points[v8->m_SearchPrev].m_SearchNext = v8->m_SearchNext;
      v12 = v8->m_SearchNext;
      if ( v12 != 0xFFFF )
        pGraph->m_Points[v12].m_SearchPrev = v8->m_SearchPrev;
      *(_DWORD *)&v8->m_SearchNext = -1;
    }
    v13 = pGraph->m_NumPoints;
    if ( pointID >= v13 )
    {
      LODWORD(v15) = v13;
      LODWORD(v14) = pointID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 623, ASSERT_TYPE_ASSERT, "(unsigned)( pointID ) < (unsigned)( pGraph->m_NumPoints )", "pointID doesn't index pGraph->m_NumPoints\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( pGraph->m_Points[v7].m_SearchPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 624, ASSERT_TYPE_ASSERT, "(pGraph->m_Points[ pointID ].m_SearchPrev == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pGraph->m_Points[ pointID ].m_SearchPrev == cTacPoint_InvalidIndex") )
      __debugbreak();
    if ( pGraph->m_Points[v7].m_SearchNext != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 625, ASSERT_TYPE_ASSERT, "(pGraph->m_Points[ pointID ].m_SearchNext == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pGraph->m_Points[ pointID ].m_SearchNext == cTacPoint_InvalidIndex") )
      __debugbreak();
    TacGraphSearch_AddPoint_r(pGraph->m_Points, &pGraph->m_SearchRoot, pointID);
  }
}

/*
==============
TacGraphSearch_Validate_r
==============
*/
char TacGraphSearch_Validate_r(tacpoint_t *pPoints, tacpoint_search_node_t *pNode)
{
  return 1;
}

/*
==============
TacPoint_CompareDist
==============
*/
__int64 TacPoint_CompareDist(const void *pPoint1, const void *pPoint2)
{
  char v2; 
  __int64 result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vcomiss xmm0, dword ptr [rdx+8]
  }
  result = 1i64;
  if ( v2 )
    return 0xFFFFFFFFi64;
  return result;
}

