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
  this->m_pPoints = pPoints;
  this->m_SearchOrigin = *origin;
  this->__vftable = (TacGraphSearchFilter_StaticNavLOS_vtbl *)&TacGraphSearchFilter_StaticNavLOS::`vftable';
  bfx::AreaHandle::AreaHandle(&this->m_hArea);
  this->m_PathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&this->m_PathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&this->m_PathSpec.m_areaPenaltyFlags = -1i64;
  this->m_PathSpec.m_usePathSharingPenalty = 0;
  *(_QWORD *)&this->m_PathSpec.m_pathSharingPenalty = 0i64;
  this->m_PathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&this->m_PathSpec.m_penaltyTable);
  this->m_PathSpec.m_snapMode = SNAP_CLOSEST;
  this->m_LosPos = *losPos;
  bfx::AreaHandle::operator=(&this->m_hArea, hArea);
  this->m_PathSpec.m_obstacleBlockageFlags = 0;
  this->m_MaxDist2DSq = maxDist2D * maxDist2D;
}

/*
==============
TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis
==============
*/
void TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(TacGraphSearchFilter_Vis *this, const TacticalGraph *pGraph, const vec3_t *origin, const tacpoint_t *pVisPoint, float minRadius, float minRadiusZ, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  tacpoint_t *m_Points; 
  unsigned __int32 v14; 
  unsigned int v15; 
  bool v16; 

  m_Points = pGraph->m_Points;
  this->__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter::`vftable';
  this->m_pPoints = m_Points;
  this->m_SearchOrigin = *origin;
  this->__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  this->m_pGraph = pGraph;
  this->m_pVisPoint = pVisPoint;
  this->m_MinRadiusSq = minRadius * minRadius;
  this->m_MinRadiusZSq = minRadiusZ * minRadiusZ;
  this->m_pIgnoreVecs = pIgnoreVecs;
  this->m_NumIgnoreVecs = numIgnoreVecs;
  this->m_IgnoreRadius = ignoreRadius;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v14 = 2;
    if ( nodeClaimTeam <= TEAM_TWO )
      v14 = nodeClaimTeam - 1;
    v15 = v14;
    if ( v14 >= 3 )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 205, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (3) )", "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)", v14, 3);
      goto LABEL_10;
    }
  }
  else
  {
    v15 = 1;
    if ( nodeClaimTeam <= TEAM_ONE )
      v15 = nodeClaimTeam - 1;
    if ( v15 >= 2 )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 210, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (2) )", "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v15, 2);
LABEL_10:
      if ( v16 )
        __debugbreak();
    }
  }
  this->m_NodeClaimTeam = v15;
  this->m_bCheckNodeClaim = bCheckNodeClaim;
  this->m_VisPointID = TacGraph_GetPointIndex(pVisPoint);
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
  __int64 v3; 
  const tacpoint_t *m_pPoints; 
  float v5; 
  float v6; 
  __int128 v7; 
  float v8; 
  bool v9; 
  float v13; 
  int v14; 
  bool HasVis; 
  float *m_pResults; 
  float v17; 
  bool result; 
  vec2_t vec; 
  float v20; 

  v3 = pointID;
  m_pPoints = this->m_pPoints;
  v5 = m_pPoints[pointID].m_Pos.v[0] - this->m_SearchOrigin.v[0];
  v7 = LODWORD(m_pPoints[pointID].m_Pos.v[1]);
  *(float *)&v7 = m_pPoints[pointID].m_Pos.v[1] - this->m_SearchOrigin.v[1];
  v6 = *(float *)&v7;
  v8 = m_pPoints[pointID].m_Pos.v[2] - this->m_SearchOrigin.v[2];
  v9 = (float)(v8 * v8) <= this->m_MaxZSq;
  v20 = v8;
  if ( !v9 || &m_pPoints[pointID] == this->m_pOriginPoint )
    return 0;
  *(float *)&v7 = fsqrt((float)(*(float *)&v7 * *(float *)&v7) + (float)(v5 * v5));
  _XMM6 = v7;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
  }
  vec.v[1] = v6 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[0] = v5 * (float)(1.0 / *(float *)&_XMM0);
  *(double *)&_XMM0 = vectoyaw(&vec);
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  v13 = *(float *)&_XMM0 / this->m_DegreesPerSlice;
  v14 = this->m_NumSlices - 1;
  HasVis = TacVisGraph_HasVis(&this->m_pPoints[v3], this->m_pOriginPoint);
  m_pResults = this->m_pResults;
  if ( (int)v13 < v14 )
    v14 = (int)v13;
  v17 = m_pResults[v14];
  if ( HasVis )
  {
    result = 0;
    if ( *(float *)&_XMM6 > v17 )
      m_pResults[v14] = *(float *)&_XMM6;
  }
  else
  {
    result = 0;
    if ( v17 == 0.0 )
      m_pResults[v14] = -1.0;
  }
  return result;
}

/*
==============
TacGraphSearchFilter_NoVis::AllowPoint
==============
*/
bool TacGraphSearchFilter_NoVis::AllowPoint(TacGraphSearchFilter_NoVis *this, unsigned __int16 pointID)
{
  float m_MinRadiusSq; 
  const tacpoint_t *v5; 
  float v6; 
  int m_NumIgnoreVecs; 
  bool result; 

  m_MinRadiusSq = this->m_MinRadiusSq;
  v5 = &this->m_pPoints[pointID];
  result = (m_MinRadiusSq <= 0.0 || (v6 = v5->m_Pos.v[1] - this->m_SearchOrigin.v[1], (float)((float)(v6 * v6) + (float)((float)(v5->m_Pos.v[0] - this->m_SearchOrigin.v[0]) * (float)(v5->m_Pos.v[0] - this->m_SearchOrigin.v[0]))) >= m_MinRadiusSq) || (float)((float)(this->m_SearchOrigin.v[2] - v5->m_Pos.v[2]) * (float)(this->m_SearchOrigin.v[2] - v5->m_Pos.v[2])) >= this->m_MinRadiusZSq) && ((m_NumIgnoreVecs = this->m_NumIgnoreVecs, m_NumIgnoreVecs <= 0) || !ShouldIgnorePoint(v5, this->m_pIgnoreVecs, m_NumIgnoreVecs, this->m_IgnoreRadius)) && !TacVisGraph_HasVis(this->m_pGraph, this->m_VisPointID, pointID);
  return result;
}

/*
==============
TacGraphSearchFilter_NoVisWithinCone::AllowPoint
==============
*/
bool TacGraphSearchFilter_NoVisWithinCone::AllowPoint(TacGraphSearchFilter_NoVisWithinCone *this, unsigned __int16 pointID)
{
  float m_MinRadiusSq; 
  __int64 v5; 
  const tacpoint_t *v6; 
  float v7; 
  int m_NumIgnoreVecs; 
  const tacpoint_t *m_pPoints; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  float v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  bool v31; 
  bool v32; 
  float v36; 
  float v37; 

  m_MinRadiusSq = this->m_MinRadiusSq;
  v5 = pointID;
  v6 = &this->m_pPoints[pointID];
  if ( m_MinRadiusSq > 0.0 )
  {
    v7 = v6->m_Pos.v[1] - this->m_SearchOrigin.v[1];
    if ( (float)((float)(v7 * v7) + (float)((float)(v6->m_Pos.v[0] - this->m_SearchOrigin.v[0]) * (float)(v6->m_Pos.v[0] - this->m_SearchOrigin.v[0]))) < m_MinRadiusSq && (float)((float)(this->m_SearchOrigin.v[2] - v6->m_Pos.v[2]) * (float)(this->m_SearchOrigin.v[2] - v6->m_Pos.v[2])) < this->m_MinRadiusZSq )
      return 0;
  }
  m_NumIgnoreVecs = this->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 && ShouldIgnorePoint(v6, this->m_pIgnoreVecs, m_NumIgnoreVecs, this->m_IgnoreRadius) )
    return 0;
  if ( TacVisGraph_HasVis(this->m_pGraph, this->m_VisPointID, pointID) )
    return 0;
  m_pPoints = this->m_pPoints;
  v12 = LODWORD(m_pPoints[v5].m_Pos.v[0]);
  *(float *)&v12 = m_pPoints[v5].m_Pos.v[0] - this->m_SearchOrigin.v[0];
  v11 = v12;
  v14 = LODWORD(m_pPoints[v5].m_Pos.v[1]);
  *(float *)&v14 = m_pPoints[v5].m_Pos.v[1] - this->m_SearchOrigin.v[1];
  v13 = v14;
  v16 = LODWORD(m_pPoints[v5].m_Pos.v[2]);
  *(float *)&v16 = m_pPoints[v5].m_Pos.v[2] - this->m_SearchOrigin.v[2];
  v15 = v16;
  v17 = v13;
  *(float *)&v17 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(*(float *)&v11 * *(float *)&v11)) + (float)(*(float *)&v15 * *(float *)&v15));
  _XMM1 = v17;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm3, xmm0
  }
  v21 = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
  v23 = v11;
  *(float *)&v23 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
  v22 = v23;
  v25 = v15;
  *(float *)&v25 = *(float *)&v15 * (float)(1.0 / *(float *)&_XMM0);
  v24 = v25;
  v26 = v22;
  *(float *)&v26 = (float)(*(float *)&v22 * *(float *)&v22) + (float)(v21 * v21);
  if ( this->m_b3D )
  {
    v27 = v24;
    *(float *)&v27 = fsqrt((float)(*(float *)&v24 * *(float *)&v24) + (float)((float)(*(float *)&v22 * *(float *)&v22) + (float)(v21 * v21)));
    _XMM2 = v27;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm3, xmm0
    }
    *(float *)&v27 = (float)((float)((float)(v21 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[1]) + (float)((float)(*(float *)&v22 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[0])) + (float)((float)(*(float *)&v24 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[2]);
    v31 = *(float *)&v27 < this->m_Dot;
    v32 = *(float *)&v27 == this->m_Dot;
  }
  else
  {
    *(float *)&v26 = fsqrt(*(float *)&v26);
    _XMM1 = v26;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm3, xmm0
    }
    v36 = (float)(v21 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[1];
    v37 = (float)(*(float *)&v22 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[0];
    v31 = (float)(v36 + v37) < this->m_Dot;
    v32 = (float)(v36 + v37) == this->m_Dot;
  }
  return !v31 && !v32;
}

/*
==============
TacGraphSearchFilter_NoVisWithinVolume::AllowPoint
==============
*/
bool TacGraphSearchFilter_NoVisWithinVolume::AllowPoint(TacGraphSearchFilter_NoVisWithinVolume *this, unsigned __int16 pointID)
{
  const tacpoint_t *v4; 
  int m_NumIgnoreVecs; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  bool v8; 

  v4 = &this->m_pPoints[pointID];
  m_NumIgnoreVecs = this->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 && ShouldIgnorePoint(v4, this->m_pIgnoreVecs, m_NumIgnoreVecs, this->m_IgnoreRadius) || TacVisGraph_HasVis(this->m_pGraph, this->m_VisPointID, pointID) )
    return 0;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  v8 = IsPointInRegion(&v4->m_Pos, this->m_VolPhysID, CollisionQueryResult);
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  return v8;
}

/*
==============
TacGraphSearchFilter_StaticNavLOS::AllowPoint
==============
*/
bool TacGraphSearchFilter_StaticNavLOS::AllowPoint(TacGraphSearchFilter_StaticNavLOS *this, unsigned __int16 pointID)
{
  __int64 v3; 
  const tacpoint_t *m_pPoints; 
  float v5; 
  float v6; 
  const bfx::AreaHandle *AreaForPoint; 

  v3 = pointID;
  m_pPoints = this->m_pPoints;
  v5 = this->m_LosPos.v[1] - m_pPoints[pointID].m_Pos.v[1];
  v6 = this->m_LosPos.v[0] - m_pPoints[pointID].m_Pos.v[0];
  if ( (float)((float)(v5 * v5) + (float)(v6 * v6)) > this->m_MaxDist2DSq )
    return 0;
  AreaForPoint = TacGraph_GetAreaForPoint(&m_pPoints[pointID]);
  return bfx::AreaHandle::operator==(&this->m_hArea, AreaForPoint) || Nav_IsStraightLineReachable(&this->m_LosPos, &this->m_hArea, &this->m_pPoints[v3].m_Pos, AreaForPoint, &this->m_PathSpec);
}

/*
==============
TacGraphSearchFilter_ViewCone::AllowPoint
==============
*/
bool TacGraphSearchFilter_ViewCone::AllowPoint(TacGraphSearchFilter_ViewCone *this, unsigned __int16 pointID)
{
  __int64 v2; 
  const tacpoint_t *m_pPoints; 
  float v4; 
  float v5; 
  __int128 v6; 
  float v7; 

  v2 = pointID;
  m_pPoints = this->m_pPoints;
  v4 = m_pPoints[v2].m_Pos.v[0] - this->m_SearchOrigin.v[0];
  v6 = LODWORD(m_pPoints[v2].m_Pos.v[1]);
  v5 = m_pPoints[v2].m_Pos.v[1] - this->m_SearchOrigin.v[1];
  v7 = m_pPoints[v2].m_Pos.v[2] - this->m_SearchOrigin.v[2];
  *(float *)&v6 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v7 * v7));
  _XMM4 = v6;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  return (float)((float)((float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[1]) + (float)((float)(v4 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[0])) + (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[2])) >= this->m_Dot;
}

/*
==============
TacGraphSearchFilter_Vis::AllowPoint
==============
*/
bool TacGraphSearchFilter_Vis::AllowPoint(TacGraphSearchFilter_Vis *this, unsigned __int16 pointID)
{
  float m_MinRadiusSq; 
  const tacpoint_t *v5; 
  float v6; 
  int m_NumIgnoreVecs; 
  bool result; 
  pathsort_s nodes; 

  result = 0;
  if ( pointID != this->m_VisPointID )
  {
    m_MinRadiusSq = this->m_MinRadiusSq;
    v5 = &this->m_pPoints[pointID];
    if ( m_MinRadiusSq <= 0.0 || (v6 = v5->m_Pos.v[1] - this->m_SearchOrigin.v[1], (float)((float)(v6 * v6) + (float)((float)(v5->m_Pos.v[0] - this->m_SearchOrigin.v[0]) * (float)(v5->m_Pos.v[0] - this->m_SearchOrigin.v[0]))) >= m_MinRadiusSq) || (float)((float)(this->m_SearchOrigin.v[2] - v5->m_Pos.v[2]) * (float)(this->m_SearchOrigin.v[2] - v5->m_Pos.v[2])) >= this->m_MinRadiusZSq )
    {
      m_NumIgnoreVecs = this->m_NumIgnoreVecs;
      if ( (m_NumIgnoreVecs <= 0 || !ShouldIgnorePoint(v5, this->m_pIgnoreVecs, m_NumIgnoreVecs, this->m_IgnoreRadius)) && TacVisGraph_HasVis(this->m_pGraph, this->m_VisPointID, pointID) && (!this->m_bCheckNodeClaim || Path_NodesInRadius(&v5->m_Pos, 4.0, &nodes, 1, -1) <= 0 || !Path_NodeIsClaimed(nodes.node, this->m_NodeClaimTeam)) )
        return 1;
    }
  }
  return result;
}

/*
==============
TacGraphSearchFilter_VisWithinCone::AllowPoint
==============
*/
bool TacGraphSearchFilter_VisWithinCone::AllowPoint(TacGraphSearchFilter_VisWithinCone *this, unsigned __int16 pointID)
{
  float m_MinRadiusSq; 
  __int64 v5; 
  const tacpoint_t *v6; 
  float v7; 
  int m_NumIgnoreVecs; 
  const tacpoint_t *m_pPoints; 
  __int128 v10; 
  __int128 v11; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  bool v20; 
  bool v21; 
  float v26; 
  pathsort_s nodes; 

  if ( pointID == this->m_VisPointID )
    return 0;
  m_MinRadiusSq = this->m_MinRadiusSq;
  v5 = pointID;
  v6 = &this->m_pPoints[pointID];
  if ( m_MinRadiusSq > 0.0 )
  {
    v7 = v6->m_Pos.v[1] - this->m_SearchOrigin.v[1];
    if ( (float)((float)(v7 * v7) + (float)((float)(v6->m_Pos.v[0] - this->m_SearchOrigin.v[0]) * (float)(v6->m_Pos.v[0] - this->m_SearchOrigin.v[0]))) < m_MinRadiusSq && (float)((float)(this->m_SearchOrigin.v[2] - v6->m_Pos.v[2]) * (float)(this->m_SearchOrigin.v[2] - v6->m_Pos.v[2])) < this->m_MinRadiusZSq )
      return 0;
  }
  m_NumIgnoreVecs = this->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 && ShouldIgnorePoint(v6, this->m_pIgnoreVecs, m_NumIgnoreVecs, this->m_IgnoreRadius) )
    return 0;
  if ( !TacVisGraph_HasVis(this->m_pGraph, this->m_VisPointID, pointID) || this->m_bCheckNodeClaim && Path_NodesInRadius(&v6->m_Pos, 4.0, &nodes, 1, -1) > 0 && Path_NodeIsClaimed(nodes.node, this->m_NodeClaimTeam) )
    return 0;
  m_pPoints = this->m_pPoints;
  v11 = LODWORD(m_pPoints[v5].m_Pos.v[0]);
  *(float *)&v11 = m_pPoints[v5].m_Pos.v[0] - this->m_SearchOrigin.v[0];
  v10 = v11;
  v12 = m_pPoints[v5].m_Pos.v[1] - this->m_SearchOrigin.v[1];
  v14 = LODWORD(m_pPoints[v5].m_Pos.v[2]);
  *(float *)&v14 = m_pPoints[v5].m_Pos.v[2] - this->m_SearchOrigin.v[2];
  v13 = v14;
  v15 = v10;
  *(float *)&v15 = (float)(*(float *)&v10 * *(float *)&v10) + (float)(v12 * v12);
  if ( this->m_b3D )
  {
    v16 = v13;
    *(float *)&v16 = fsqrt((float)(*(float *)&v13 * *(float *)&v13) + (float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v12 * v12)));
    _XMM2 = v16;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    *(float *)&v16 = (float)((float)((float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[1]) + (float)((float)(*(float *)&v10 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[0])) + (float)((float)(*(float *)&v13 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[2]);
    v20 = *(float *)&v16 < this->m_Dot;
    v21 = *(float *)&v16 == this->m_Dot;
  }
  else
  {
    *(float *)&v15 = fsqrt(*(float *)&v15);
    _XMM2 = v15;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v26 = (float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[1];
    *(float *)&_XMM2 = (float)(*(float *)&v10 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[0];
    v20 = (float)(v26 + *(float *)&_XMM2) < this->m_Dot;
    v21 = (float)(v26 + *(float *)&_XMM2) == this->m_Dot;
  }
  return !v20 && !v21;
}

/*
==============
TacGraphSearchFilter_VisWithinVolume::AllowPoint
==============
*/
bool TacGraphSearchFilter_VisWithinVolume::AllowPoint(TacGraphSearchFilter_VisWithinVolume *this, unsigned __int16 pointID)
{
  const tacpoint_t *v4; 
  int m_NumIgnoreVecs; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  bool v8; 

  v4 = &this->m_pPoints[pointID];
  m_NumIgnoreVecs = this->m_NumIgnoreVecs;
  if ( m_NumIgnoreVecs > 0 && ShouldIgnorePoint(v4, this->m_pIgnoreVecs, m_NumIgnoreVecs, this->m_IgnoreRadius) || !TacVisGraph_HasVis(this->m_pGraph, this->m_VisPointID, pointID) )
    return 0;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  v8 = IsPointInRegion(&v4->m_Pos, this->m_VolPhysID, CollisionQueryResult);
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  return v8;
}

/*
==============
TacGraphSearchFilter::GetScore
==============
*/
float TacGraphSearchFilter::GetScore(TacGraphSearchFilter *this, const vec3_t *pos, unsigned __int16 pointID)
{
  __int64 v3; 
  const tacpoint_t *m_pPoints; 
  float v5; 
  float v6; 
  float v7; 

  v3 = pointID;
  m_pPoints = this->m_pPoints;
  v5 = m_pPoints[v3].m_Pos.v[0] - pos->v[0];
  v6 = m_pPoints[v3].m_Pos.v[1] - pos->v[1];
  v7 = m_pPoints[v3].m_Pos.v[2] - pos->v[2];
  return (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
}

/*
==============
TacGraphSearchFilter_VisNearCone::GetScore
==============
*/
float TacGraphSearchFilter_VisNearCone::GetScore(TacGraphSearchFilter_VisNearCone *this, const vec3_t *pos, unsigned __int16 pointID)
{
  __int64 v3; 
  const tacpoint_t *m_pPoints; 
  float v5; 
  float v6; 
  float v7; 
  __int128 v9; 

  v3 = pointID;
  m_pPoints = this->m_pPoints;
  v5 = m_pPoints[v3].m_Pos.v[0] - pos->v[0];
  v9 = LODWORD(m_pPoints[v3].m_Pos.v[1]);
  v6 = m_pPoints[v3].m_Pos.v[1] - pos->v[1];
  v7 = m_pPoints[v3].m_Pos.v[2] - pos->v[2];
  *(float *)&v9 = fsqrt((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7));
  _XMM8 = v9;
  __asm
  {
    vcmpless xmm0, xmm8, cs:__real@80000000
    vblendvps xmm0, xmm8, xmm1, xmm0
  }
  if ( (float)((float)((float)((float)(v6 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[1]) + (float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[0])) + (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * this->m_Forward.v[2])) < this->m_Dot )
    return *(float *)&v9;
  else
    return *(float *)&v9 * this->m_Weight;
}

/*
==============
ShouldIgnorePoint
==============
*/
char ShouldIgnorePoint(const tacpoint_t *pPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  __int64 v6; 
  __int64 v7; 
  float *i; 
  float v9; 

  v6 = numIgnoreVecs;
  if ( !numIgnoreVecs )
    return 0;
  if ( !pIgnoreVecs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 62, ASSERT_TYPE_ASSERT, "(pIgnoreVecs)", (const char *)&queryFormat, "pIgnoreVecs") )
    __debugbreak();
  if ( (int)v6 <= 0 )
    return 0;
  v7 = 0i64;
  for ( i = &pIgnoreVecs->v[2]; ; i += 3 )
  {
    v9 = pPoint->m_Pos.v[1] - *(i - 1);
    if ( (float)((float)((float)(v9 * v9) + (float)((float)(pPoint->m_Pos.v[0] - *(i - 2)) * (float)(pPoint->m_Pos.v[0] - *(i - 2)))) + (float)((float)(pPoint->m_Pos.v[2] - *i) * (float)(pPoint->m_Pos.v[2] - *i))) < (float)(ignoreRadius * ignoreRadius) )
      break;
    if ( ++v7 >= v6 )
      return 0;
  }
  return 1;
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
  __int64 v7; 

  while ( 1 )
  {
    if ( !pPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 561, ASSERT_TYPE_ASSERT, "(pPoints)", (const char *)&queryFormat, "pPoints") )
      __debugbreak();
    if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 562, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
      __debugbreak();
    m_PointListRoot = pNode->m_PointListRoot;
    if ( m_PointListRoot != 0xFFFF )
      break;
    if ( (float)(0.5 * pNode->m_HalfSize.v[0]) <= 32.0 || (float)(0.5 * pNode->m_HalfSize.v[1]) < 32.0 )
    {
      if ( pNode->m_ChildNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 584, ASSERT_TYPE_ASSERT, "(!pNode->m_ChildNodes)", (const char *)&queryFormat, "!pNode->m_ChildNodes") )
        __debugbreak();
      if ( pNode->m_PointListRoot != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 585, ASSERT_TYPE_ASSERT, "(pNode->m_PointListRoot == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pNode->m_PointListRoot == cTacPoint_InvalidIndex") )
        __debugbreak();
      goto LABEL_21;
    }
    pNode = pNode->m_ChildNodes[TacGraphSearch_GetChildNodeForPos(pNode, (const vec2_t *)&pPoints[pointID])];
  }
  v7 = m_PointListRoot;
  if ( pPoints[m_PointListRoot].m_SearchPrev != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 569, ASSERT_TYPE_ASSERT, "(pOldHead->m_SearchPrev == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pOldHead->m_SearchPrev == cTacPoint_InvalidIndex") )
    __debugbreak();
  pPoints[v7].m_SearchPrev = pointID;
  pPoints[pointID].m_SearchNext = pNode->m_PointListRoot;
  pPoints[pointID].m_SearchPrev = -1;
LABEL_21:
  pNode->m_PointListRoot = pointID;
}

/*
==============
TacGraphSearch_CalcOpenView
==============
*/
void TacGraphSearch_CalcOpenView(const TacticalGraph *pGraph, const vec3_t *pos, float radius, const tacpoint_t *pOriginPoint, float *pResults, int numSlices)
{
  float *v9; 
  tacpoint_t *m_Points; 
  __int64 i; 
  tacpoint_t *ppOutPoints; 
  TacGraphSearchFilter pFilter; 
  float v14; 
  float *v15; 
  int v16; 
  float v17; 
  const tacpoint_t *v18; 

  v9 = pResults;
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
  pFilter.m_SearchOrigin = *pos;
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_CalcOpenView::`vftable';
  v14 = FLOAT_6400_0;
  v15 = pResults;
  v16 = numSlices;
  v17 = 360.0 / (float)numSlices;
  v18 = pOriginPoint;
  if ( numSlices > 0 )
  {
    for ( i = numSlices; i; --i )
      *v9++ = 0.0;
  }
  TacGraphSearch_FindPointsInRadius_r(m_Points, &pGraph->m_SearchRoot, pos, radius, &pFilter, (const tacpoint_t **)&ppOutPoints, 1);
}

/*
==============
TacGraphSearch_FindClosestPoint
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPoint(const TacticalGraphData *pTacData, const vec3_t *pos)
{
  const tacpoint_t *v4; 
  int v5; 
  TacticalGraph *v6; 
  const tacpoint_t *ClosestPoint_r; 
  float closestDistSq2D; 
  float closestDistSq; 

  v4 = NULL;
  v5 = 0;
  closestDistSq = FLOAT_1048576_0;
  for ( closestDistSq2D = FLOAT_65536_0; v5 < pTacData->m_NumTacGraphs; ++v5 )
  {
    v6 = &pTacData->m_TacGraphs[v5];
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
      __debugbreak();
    ClosestPoint_r = TacGraphSearch_FindClosestPoint_r(v6, &v6->m_SearchRoot, pos, NULL, NULL, &closestDistSq, &closestDistSq2D);
    if ( ClosestPoint_r )
      v4 = ClosestPoint_r;
  }
  return v4;
}

/*
==============
TacGraphSearch_FindClosestPointWithStaticNavLos
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithStaticNavLos(const TacticalGraphData *pTacData, const vec3_t *pos, const vec3_t *losPos, const bfx::AreaHandle *hArea)
{
  const bfx::AreaHandle *v4; 
  const tacpoint_t *v8; 
  int v9; 
  __int64 v10; 
  TacticalGraph *v11; 
  const tacpoint_t *ClosestPoint_r; 
  float closestDistSq[2]; 
  const bfx::AreaHandle *v15; 
  __int64 v16; 
  TacGraphSearchFilter pFilter; 
  float v18; 
  float v19; 
  float v20; 
  bfx::AreaHandle v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  char v25; 
  float v26; 
  float v27; 
  float v28; 
  bfx::PenaltyTable v29; 
  int v30; 
  float v31; 

  v16 = -2i64;
  v4 = hArea;
  v15 = hArea;
  v8 = NULL;
  closestDistSq[1] = FLOAT_1048576_0;
  closestDistSq[0] = FLOAT_65536_0;
  if ( pos == losPos )
  {
    closestDistSq[0] = FLOAT_16384_0;
    closestDistSq[1] = FLOAT_16384_0;
  }
  v9 = 0;
  if ( pTacData->m_NumTacGraphs > 0 )
  {
    v10 = 0i64;
    do
    {
      pFilter.m_pPoints = pTacData->m_TacGraphs[v10].m_Points;
      pFilter.m_SearchOrigin = *pos;
      pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_StaticNavLOS::`vftable';
      bfx::AreaHandle::AreaHandle(&v21);
      v22 = 0;
      v23 = -1i64;
      v24 = -1i64;
      v25 = 0;
      v26 = 0.0;
      v27 = 0.0;
      v28 = 0.0;
      bfx::PenaltyTable::PenaltyTable(&v29);
      v30 = 0;
      v18 = losPos->v[0];
      v19 = losPos->v[1];
      v20 = losPos->v[2];
      bfx::AreaHandle::operator=(&v21, v4);
      LODWORD(v23) = 0;
      v31 = FLOAT_16384_0;
      v11 = &pTacData->m_TacGraphs[v9];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
        __debugbreak();
      ClosestPoint_r = TacGraphSearch_FindClosestPoint_r(v11, &v11->m_SearchRoot, pos, &pFilter, NULL, &closestDistSq[1], closestDistSq);
      if ( ClosestPoint_r )
        v8 = ClosestPoint_r;
      bfx::AreaHandle::~AreaHandle(&v21);
      ++v9;
      ++v10;
      v4 = v15;
    }
    while ( v9 < pTacData->m_NumTacGraphs );
  }
  return v8;
}

/*
==============
TacGraphSearch_FindClosestPointWithVisNearConeWithinRadius
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithVisNearConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, float weight, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v13; 
  __int64 minRadiusZ; 
  float closestDistSq2D; 
  float closestDistSq; 
  __int64 v18; 
  TacGraphSearchFilter_Vis v19; 
  vec3_t v20; 
  float v21; 
  float v22; 

  v18 = -2i64;
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
  v13 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(&v19, v13, origin, pTargetPoint, 0.0, 60.0, NULL, 0, 0.0, bCheckNodeClaim, nodeClaimTeam);
  v19.__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter_VisNearCone::`vftable';
  v21 = dot;
  v22 = weight;
  v20 = *dir;
  closestDistSq = radius;
  closestDistSq2D = radius;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  return TacGraphSearch_FindClosestPoint_r(v13, &v13->m_SearchRoot, origin, &v19, NULL, &closestDistSq, &closestDistSq2D);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinConeWithinRadius
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithVisWithinConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v12; 
  float v13; 
  __int128 v14; 
  __int128 v15; 
  float *closestDistSq; 
  float closestDistSq2D[2]; 
  __int64 v22; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v24; 
  const tacpoint_t *v25; 
  unsigned __int16 PointIndex; 
  float v27; 
  float v28; 
  __int64 v29; 
  int v30; 
  float v31; 
  int v32; 
  char v33; 
  float v34; 
  __int64 v35; 
  float v36; 
  bool v37; 

  v22 = -2i64;
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
  v12 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  pFilter.m_pPoints = v12->m_Points;
  pFilter.m_SearchOrigin = *origin;
  v24 = v12;
  v25 = pTargetPoint;
  v27 = minRadius * minRadius;
  v28 = FLOAT_3600_0;
  v29 = 0i64;
  v30 = 0;
  v31 = 0.0;
  Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v32 = 0;
  v33 = 0;
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_VisWithinCone::`vftable';
  v36 = dot;
  v37 = b3D;
  v13 = dir->v[0];
  v34 = dir->v[0];
  v14 = LODWORD(dir->v[1]);
  v35 = *(_QWORD *)&dir->y;
  if ( !b3D )
  {
    v15 = v14;
    *(float *)&v15 = fsqrt((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13));
    _XMM2 = v15;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm3, xmm0
    }
    closestDistSq2D[0] = *(float *)&_XMM1;
    *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
    v34 = v13 * *(float *)&_XMM1;
    *(float *)&v35 = *(float *)&v14 * *(float *)&_XMM1;
  }
  closestDistSq2D[0] = maxRadius * maxRadius;
  closestDistSq2D[1] = maxRadius * maxRadius;
  return TacGraphSearch_FindClosestPoint_r(v12, &v12->m_SearchRoot, origin, &pFilter, NULL, closestDistSq2D, &closestDistSq2D[1]);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinRadius
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v12; 
  float closestDistSq2D; 
  float closestDistSq; 
  __int64 v16; 
  TacGraphSearchFilter_Vis v17; 

  v16 = -2i64;
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1102, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", pTargetPoint->m_GraphIdx, pTacData->m_NumTacGraphs) )
    __debugbreak();
  v12 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(&v17, v12, origin, pTargetPoint, 0.0, 0.0, pIgnoreVecs, numIgnoreVecs, ignoreRadius, 0, TEAM_ONE);
  v17.__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  closestDistSq = radius * radius;
  closestDistSq2D = radius * radius;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  return TacGraphSearch_FindClosestPoint_r(v12, &v12->m_SearchRoot, pos, &v17, NULL, &closestDistSq, &closestDistSq2D);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinRadius
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, float minRadiusZ, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v13; 
  float closestDistSq2D; 
  float closestDistSq; 
  __int64 v17; 
  TacGraphSearchFilter_Vis v18; 

  v17 = -2i64;
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1117, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", pTargetPoint->m_GraphIdx, pTacData->m_NumTacGraphs) )
    __debugbreak();
  v13 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(&v18, v13, origin, pTargetPoint, minRadius, minRadiusZ, pIgnoreVecs, numIgnoreVecs, ignoreRadius, 0, TEAM_ONE);
  v18.__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  closestDistSq = maxRadius * maxRadius;
  closestDistSq2D = maxRadius * maxRadius;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1031, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  return TacGraphSearch_FindClosestPoint_r(v13, &v13->m_SearchRoot, pos, &v18, NULL, &closestDistSq, &closestDistSq2D);
}

/*
==============
TacGraphSearch_FindClosestPointWithVisWithinRadiusWithNavLos
==============
*/
tacpoint_t *TacGraphSearch_FindClosestPointWithVisWithinRadiusWithNavLos(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *losPos, const bfx::AreaHandle *hArea, bool bCheckNodeClaim, team_t nodeClaimTeam)
{
  unsigned int m_GraphIdx; 
  const TacticalGraph *v13; 
  tacpoint_t *v14; 
  __int64 PointsInRadius_Sorted; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int16 PointIndex; 
  __int64 v20; 
  const tacpoint_t *v21; 
  const bfx::AreaHandle *AreaForPoint; 
  __int64 minRadiusZ; 
  TacGraphSearchFilter_StaticNavLOS v25; 
  TacGraphSearchFilter_Vis v26; 
  tacpoint_t *ppOutPoints[33]; 

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
  v13 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  v14 = NULL;
  TacGraphSearchFilter_Vis::TacGraphSearchFilter_Vis(&v26, v13, origin, pTargetPoint, minRadius, 80.0, NULL, 0, 0.0, bCheckNodeClaim, nodeClaimTeam);
  PointsInRadius_Sorted = TacGraphSearch_FindPointsInRadius_Sorted(v13, pos, maxRadius, &v26, (const tacpoint_t **)ppOutPoints, 32);
  TacGraphSearchFilter_StaticNavLOS::TacGraphSearchFilter_StaticNavLOS(&v25, v13->m_Points, origin, losPos, hArea, maxRadius);
  v16 = 0;
  v17 = PointsInRadius_Sorted;
  if ( (int)PointsInRadius_Sorted > 0 )
  {
    v18 = 0i64;
    while ( 1 )
    {
      PointIndex = TacGraph_GetPointIndex(ppOutPoints[v18]);
      v20 = PointIndex;
      v21 = &v25.m_pPoints[PointIndex];
      if ( (float)((float)((float)(v25.m_LosPos.v[1] - v21->m_Pos.v[1]) * (float)(v25.m_LosPos.v[1] - v21->m_Pos.v[1])) + (float)((float)(v25.m_LosPos.v[0] - v21->m_Pos.v[0]) * (float)(v25.m_LosPos.v[0] - v21->m_Pos.v[0]))) <= v25.m_MaxDist2DSq )
      {
        AreaForPoint = TacGraph_GetAreaForPoint(v21);
        if ( bfx::AreaHandle::operator==(&v25.m_hArea, AreaForPoint) || Nav_IsStraightLineReachable(&v25.m_LosPos, &v25.m_hArea, &v25.m_pPoints[v20].m_Pos, AreaForPoint, &v25.m_PathSpec) )
          break;
      }
      ++v16;
      if ( ++v18 >= v17 )
        goto LABEL_18;
    }
    v14 = ppOutPoints[v16];
  }
LABEL_18:
  bfx::AreaHandle::~AreaHandle(&v25.m_hArea);
  v25.__vftable = (TacGraphSearchFilter_StaticNavLOS_vtbl *)&TacGraphSearchFilter::`vftable';
  v26.__vftable = (TacGraphSearchFilter_Vis_vtbl *)&TacGraphSearchFilter::`vftable';
  Sys_ProfEndNamedEvent();
  return v14;
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
  float v13; 
  float v14; 
  float v15; 
  const tacpoint_t *ClosestPoint_r; 
  float *closestDistSq; 
  float closestDistSq2D; 
  float v20; 
  __int64 v21; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v23; 
  const tacpoint_t *v24; 
  unsigned __int16 PointIndex; 
  unsigned int Instance; 
  const vec3_t *v27; 
  int v28; 
  float v29; 

  v21 = -2i64;
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
  pFilter.m_SearchOrigin = pVolume->r.currentOrigin;
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_VisWithinVolume::`vftable';
  v23 = v12;
  v24 = pTargetPoint;
  v27 = pIgnoreVecs;
  v28 = numIgnoreVecs;
  v29 = ignoreRadius;
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, pVolume);
  v13 = COERCE_FLOAT(LODWORD(pVolume->r.box.midPoint.v[0]) & _xmm) + pVolume->r.box.halfSize.v[0];
  v14 = COERCE_FLOAT(LODWORD(pVolume->r.box.midPoint.v[1]) & _xmm) + pVolume->r.box.halfSize.v[1];
  v15 = COERCE_FLOAT(LODWORD(pVolume->r.box.midPoint.v[2]) & _xmm) + pVolume->r.box.halfSize.v[2];
  v20 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
  closestDistSq2D = v20;
  ClosestPoint_r = TacGraphSearch_FindClosestPoint_r(v12, &v12->m_SearchRoot, pos, &pFilter, NULL, &v20, &closestDistSq2D);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter::`vftable';
  Sys_ProfEndNamedEvent();
  return ClosestPoint_r;
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisNearConeWithinRadius
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithoutVisNearConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float radius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float weight)
{
  unsigned __int16 PointIndex; 
  unsigned int m_GraphIdx; 
  unsigned __int16 v12; 
  float v13; 
  TacticalGraph *v14; 
  __int64 v15; 
  unsigned __int16 i; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v24; 
  float v27; 
  float v28; 
  int v30; 
  int m_NumTacGraphs; 

  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  v12 = PointIndex;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs )
  {
    m_NumTacGraphs = pTacData->m_NumTacGraphs;
    v30 = pTargetPoint->m_GraphIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1296, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", v30, m_NumTacGraphs) )
      __debugbreak();
  }
  v13 = FLOAT_1048576_0;
  v14 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  v15 = 0i64;
  for ( i = 0; i < v14->m_NumPoints; ++i )
  {
    if ( i != v12 && !TacVisGraph_HasVis(v14, v12, i) )
    {
      v17 = v14->m_Points[i].m_Pos.v[0];
      v18 = v14->m_Points[i].m_Pos.v[1];
      v19 = v14->m_Points[i].m_Pos.v[2];
      if ( (float)((float)((float)((float)(origin->v[1] - v18) * (float)(origin->v[1] - v18)) + (float)((float)(origin->v[0] - v17) * (float)(origin->v[0] - v17))) + (float)((float)(origin->v[2] - v19) * (float)(origin->v[2] - v19))) <= (float)(radius * radius) )
      {
        v20 = v17 - pos->v[0];
        v24 = LODWORD(v14->m_Points[i].m_Pos.v[1]);
        v21 = v18 - pos->v[1];
        v22 = v19 - pos->v[2];
        *(float *)&v24 = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22));
        _XMM7 = v24;
        __asm
        {
          vcmpless xmm0, xmm7, xmm12
          vblendvps xmm0, xmm7, xmm10, xmm0
        }
        *(float *)&_XMM0 = (float)((float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v21) * dir->v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v20) * dir->v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v22) * dir->v[2])) + 1.0) * 0.5;
        v27 = *(float *)&_XMM0 * weight;
        v28 = 1.0 - *(float *)&_XMM0;
        if ( (float)((float)(v27 + v28) * *(float *)&v24) < v13 )
        {
          v15 = (__int64)&v14->m_Points[i];
          v13 = (float)(v27 + v28) * *(float *)&v24;
        }
      }
    }
  }
  return (const tacpoint_t *)v15;
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
  unsigned __int16 v11; 
  float v12; 
  __int64 v13; 
  TacticalGraph *v14; 
  unsigned int Instance; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned __int16 i; 
  __int64 v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v23; 
  float v26; 
  float v27; 

  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  v11 = PointIndex;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1209, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", m_GraphIdx, pTacData->m_NumTacGraphs) )
    __debugbreak();
  v12 = FLOAT_1048576_0;
  v13 = 0i64;
  v14 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, pVolume);
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  for ( i = 0; i < v14->m_NumPoints; ++i )
  {
    if ( i != v11 && !TacVisGraph_HasVis(v14, v11, i) )
    {
      v18 = (__int64)&v14->m_Points[i];
      v19 = *(float *)v18 - pos->v[0];
      v23 = *(unsigned int *)(v18 + 4);
      v20 = *(float *)(v18 + 4) - pos->v[1];
      v21 = *(float *)(v18 + 8) - pos->v[2];
      *(float *)&v23 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
      _XMM8 = v23;
      __asm
      {
        vcmpless xmm0, xmm8, xmm12
        vblendvps xmm0, xmm8, xmm10, xmm0
      }
      *(float *)&_XMM0 = (float)((float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v20) * dir->v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v19) * dir->v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v21) * dir->v[2])) + 1.0) * 0.5;
      v26 = *(float *)&_XMM0 * weight;
      v27 = 1.0 - *(float *)&_XMM0;
      if ( (float)((float)(v26 + v27) * *(float *)&v23) < v12 )
      {
        HavokPhysics_CollisionQueryResult::Reset(CollisionQueryResult, 0);
        if ( IsPointInRegion((const vec3_t *)v18, Instance, CollisionQueryResult) )
        {
          v13 = v18;
          v12 = (float)(v26 + v27) * *(float *)&v23;
        }
      }
    }
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  return (const tacpoint_t *)v13;
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisWithinConeWithinRadius
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPointWithoutVisWithinConeWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, const tacpoint_t *pTargetPoint, const vec3_t *dir, float dot, bool b3D)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v12; 
  float *closestDistSq; 
  float closestDistSq2D[2]; 
  __int64 v16; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v18; 
  const tacpoint_t *v19; 
  unsigned __int16 PointIndex; 
  float v21; 
  float v22; 
  __int64 v23; 
  int v24; 
  float v25; 
  vec3_t v26; 
  float v27; 
  bool v28; 

  v16 = -2i64;
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
  v12 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  pFilter.m_pPoints = v12->m_Points;
  pFilter.m_SearchOrigin = *origin;
  v18 = v12;
  v19 = pTargetPoint;
  v21 = minRadius * minRadius;
  v22 = FLOAT_3600_0;
  v23 = 0i64;
  v24 = 0;
  v25 = 0.0;
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_NoVisWithinCone::`vftable';
  v27 = dot;
  v28 = b3D;
  v26 = *dir;
  closestDistSq2D[1] = maxRadius * maxRadius;
  closestDistSq2D[0] = maxRadius * maxRadius;
  return TacGraphSearch_FindClosestPoint_r(v12, &v12->m_SearchRoot, origin, &pFilter, NULL, &closestDistSq2D[1], closestDistSq2D);
}

/*
==============
TacGraphSearch_FindClosestPointWithoutVisWithinRadius
==============
*/
tacpoint_t *TacGraphSearch_FindClosestPointWithoutVisWithinRadius(const TacticalGraphData *pTacData, const vec3_t *origin, float minRadius, float maxRadius, const vec3_t *pos, float minDistFromPos, const tacpoint_t *pTargetPoint, const vec3_t *pIgnoreVecs, int numIgnoreVecs, float ignoreRadius)
{
  unsigned int m_GraphIdx; 
  TacticalGraph *v13; 
  int PointsInRadius_Sorted; 
  __int64 v15; 
  __int64 v16; 
  tacpoint_t *v17; 
  float v18; 
  float v19; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v22; 
  const tacpoint_t *v23; 
  unsigned __int16 PointIndex; 
  float v25; 
  float v26; 
  const vec3_t *v27; 
  int v28; 
  float v29; 
  tacpoint_t *ppOutPoints[65]; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Tac_FindClosestPointNoVisWithRadius");
  m_GraphIdx = pTargetPoint->m_GraphIdx;
  if ( m_GraphIdx >= pTacData->m_NumTacGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 1180, ASSERT_TYPE_ASSERT, "(unsigned)( graphIdx ) < (unsigned)( pTacData->m_NumTacGraphs )", "graphIdx doesn't index pTacData->m_NumTacGraphs\n\t%i not in [0, %i)", pTargetPoint->m_GraphIdx, pTacData->m_NumTacGraphs) )
    __debugbreak();
  v13 = &pTacData->m_TacGraphs[(unsigned __int8)m_GraphIdx];
  pFilter.m_pPoints = v13->m_Points;
  pFilter.m_SearchOrigin = *origin;
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_NoVis::`vftable';
  v22 = v13;
  v23 = pTargetPoint;
  v25 = minRadius * minRadius;
  v26 = FLOAT_6400_0;
  v27 = pIgnoreVecs;
  v28 = numIgnoreVecs;
  v29 = ignoreRadius;
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  PointsInRadius_Sorted = TacGraphSearch_FindPointsInRadius_Sorted(v13, pos, 1048576.0, &pFilter, (const tacpoint_t **)ppOutPoints, 64);
  if ( PointsInRadius_Sorted <= 0 )
  {
LABEL_9:
    v17 = NULL;
  }
  else
  {
    v15 = PointsInRadius_Sorted;
    v16 = 0i64;
    while ( 1 )
    {
      v17 = ppOutPoints[v16];
      v18 = v17->m_Pos.v[1];
      v19 = v17->m_Pos.v[2];
      if ( (float)((float)((float)((float)(pos->v[1] - v18) * (float)(pos->v[1] - v18)) + (float)((float)(pos->v[0] - v17->m_Pos.v[0]) * (float)(pos->v[0] - v17->m_Pos.v[0]))) + (float)((float)(pos->v[2] - v19) * (float)(pos->v[2] - v19))) > (float)(minDistFromPos * minDistFromPos) && (float)((float)((float)((float)(origin->v[1] - v18) * (float)(origin->v[1] - v18)) + (float)((float)(origin->v[0] - v17->m_Pos.v[0]) * (float)(origin->v[0] - v17->m_Pos.v[0]))) + (float)((float)(origin->v[2] - v19) * (float)(origin->v[2] - v19))) < (float)(maxRadius * maxRadius) )
        break;
      if ( ++v16 >= v15 )
        goto LABEL_9;
    }
  }
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter::`vftable';
  Sys_ProfEndNamedEvent();
  return v17;
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
  float v13; 
  float v14; 
  float v15; 
  float *closestDistSq; 
  float closestDistSq2D; 
  float v19; 
  __int64 v20; 
  TacGraphSearchFilter pFilter; 
  TacticalGraph *v22; 
  const tacpoint_t *v23; 
  unsigned __int16 PointIndex; 
  unsigned int Instance; 
  const vec3_t *v26; 
  int v27; 
  float v28; 

  v20 = -2i64;
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
  pFilter.m_SearchOrigin = pVolume->r.currentOrigin;
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_NoVisWithinVolume::`vftable';
  v22 = v12;
  v23 = pTargetPoint;
  v26 = pIgnoreVecs;
  v27 = numIgnoreVecs;
  v28 = ignoreRadius;
  PointIndex = TacGraph_GetPointIndex(pTargetPoint);
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, pVolume);
  v13 = COERCE_FLOAT(LODWORD(pVolume->r.box.midPoint.v[0]) & _xmm) + pVolume->r.box.halfSize.v[0];
  v14 = COERCE_FLOAT(LODWORD(pVolume->r.box.midPoint.v[1]) & _xmm) + pVolume->r.box.halfSize.v[1];
  v15 = COERCE_FLOAT(LODWORD(pVolume->r.box.midPoint.v[2]) & _xmm) + pVolume->r.box.halfSize.v[2];
  v19 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
  closestDistSq2D = v19;
  return TacGraphSearch_FindClosestPoint_r(v12, &v12->m_SearchRoot, pos, &pFilter, NULL, &v19, &closestDistSq2D);
}

/*
==============
TacGraphSearch_FindClosestPoint_r
==============
*/
const tacpoint_t *TacGraphSearch_FindClosestPoint_r(const TacticalGraph *pGraph, const tacpoint_search_node_t *pNode, const vec3_t *pos, TacGraphSearchFilter *pFilter, const tacpoint_t *pCurClosest, float *closestDistSq, float *closestDistSq2D)
{
  unsigned __int16 m_PointListRoot; 
  const tacpoint_search_node_t *v11; 
  tacpoint_t *v13; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  const tacpoint_t *result; 
  __int64 ChildNodeForPos; 
  __int64 i; 
  float v22; 
  tacpoint_search_node_t *v23; 

  m_PointListRoot = pNode->m_PointListRoot;
  v11 = pNode;
  if ( m_PointListRoot != 0xFFFF )
  {
    do
    {
      v13 = &pGraph->m_Points[m_PointListRoot];
      if ( pFilter )
      {
        v14 = ((double (__fastcall *)(TacGraphSearchFilter *, const vec3_t *, _QWORD))pFilter->GetScore)(pFilter, pos, m_PointListRoot);
        v15 = *(float *)&v14;
      }
      else
      {
        v16 = v13->m_Pos.v[1] - pos->v[1];
        v17 = v13->m_Pos.v[2] - pos->v[2];
        v15 = (float)((float)(v16 * v16) + (float)((float)(v13->m_Pos.v[0] - pos->v[0]) * (float)(v13->m_Pos.v[0] - pos->v[0]))) + (float)(v17 * v17);
      }
      if ( (!pCurClosest || v15 < *closestDistSq) && (!pFilter || pFilter->AllowPoint(pFilter, m_PointListRoot)) )
      {
        *closestDistSq = v15;
        v18 = v13->m_Pos.v[1] - pos->v[1];
        *closestDistSq2D = (float)(v18 * v18) + (float)((float)(v13->m_Pos.v[0] - pos->v[0]) * (float)(v13->m_Pos.v[0] - pos->v[0]));
        pCurClosest = v13;
      }
      m_PointListRoot = v13->m_SearchNext;
    }
    while ( m_PointListRoot != 0xFFFF );
    v11 = pNode;
  }
  if ( !v11->m_ChildNodes )
    return pCurClosest;
  ChildNodeForPos = TacGraphSearch_GetChildNodeForPos(v11, (const vec2_t *)pos);
  result = TacGraphSearch_FindClosestPoint_r(pGraph, v11->m_ChildNodes[ChildNodeForPos], pos, pFilter, pCurClosest, closestDistSq, closestDistSq2D);
  for ( i = 0i64; i < 4; ++i )
  {
    if ( i != ChildNodeForPos )
    {
      v22 = fsqrt(*closestDistSq2D);
      v23 = pNode->m_ChildNodes[i];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23->m_MidPoint.v[0] - pos->v[0]) & _xmm) <= (float)(v22 + v23->m_HalfSize.v[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v23->m_MidPoint.v[1] - pos->v[1]) & _xmm) <= (float)(v22 + v23->m_HalfSize.v[1]) )
        result = TacGraphSearch_FindClosestPoint_r(pGraph, v23, pos, pFilter, result, closestDistSq, closestDistSq2D);
    }
  }
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
__int64 TacGraphSearch_FindPointsInRadius(TacticalGraph *pGraph, const vec3_t *pos, float radius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  unsigned int PointsInRadius_r; 

  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 797, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 798, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 799, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 800, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, pos, radius, NULL, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  return PointsInRadius_r;
}

/*
==============
TacGraphSearch_FindPointsInRadius
==============
*/
__int64 TacGraphSearch_FindPointsInRadius(const TacticalGraph *pGraph, const vec3_t *pos, float radius, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  unsigned int PointsInRadius_r; 

  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 797, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 798, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 799, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 800, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, pos, radius, NULL, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  return PointsInRadius_r;
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithVis
==============
*/
__int64 TacGraphSearch_FindPointsInRadiusWithVis(const TacticalGraph *pGraph, const vec3_t *pos, float minRadius, float maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  unsigned int PointsInRadius_r; 
  TacGraphSearchFilter pFilter; 
  const TacticalGraph *v13; 
  const tacpoint_t *v14; 
  unsigned __int16 PointIndex; 
  float v16; 
  float v17; 
  __int64 v18; 
  int v19; 
  float v20; 
  int v21; 
  char v22; 

  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 811, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 812, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 813, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( maxRadius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 814, ASSERT_TYPE_ASSERT, "(maxRadius > 0.f)", (const char *)&queryFormat, "maxRadius > 0.f") )
    __debugbreak();
  pFilter.m_pPoints = pGraph->m_Points;
  pFilter.m_SearchOrigin = *pos;
  v13 = pGraph;
  v14 = pVisPoint;
  v16 = minRadius * minRadius;
  v17 = minRadiusZ * minRadiusZ;
  v18 = 0i64;
  v19 = 0;
  v20 = 0.0;
  Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v21 = 0;
  v22 = 0;
  PointIndex = TacGraph_GetPointIndex(pVisPoint);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, pos, maxRadius, &pFilter, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  return PointsInRadius_r;
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithVis_Sorted
==============
*/
int TacGraphSearch_FindPointsInRadiusWithVis_Sorted(const TacticalGraph *pGraph, const vec3_t *pos, float minRadius, float maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  TacGraphSearchFilter pFilter; 
  const TacticalGraph *v12; 
  const tacpoint_t *v13; 
  unsigned __int16 PointIndex; 
  float v15; 
  float v16; 
  __int64 v17; 
  int v18; 
  float v19; 
  int v20; 
  char v21; 

  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 874, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints", -2i64) )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 875, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 876, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( maxRadius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 877, ASSERT_TYPE_ASSERT, "(maxRadius > 0.f)", (const char *)&queryFormat, "maxRadius > 0.f") )
    __debugbreak();
  pFilter.m_pPoints = pGraph->m_Points;
  pFilter.m_SearchOrigin = *pos;
  v12 = pGraph;
  v13 = pVisPoint;
  v15 = minRadius * minRadius;
  v16 = minRadiusZ * minRadiusZ;
  v17 = 0i64;
  v18 = 0;
  v19 = 0.0;
  Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v20 = 0;
  v21 = 0;
  PointIndex = TacGraph_GetPointIndex(pVisPoint);
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_Vis::`vftable';
  return TacGraphSearch_FindPointsInRadius_Sorted(pGraph, pos, maxRadius, &pFilter, ppOutPoints, maxNumPoints);
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithinCone
==============
*/
__int64 TacGraphSearch_FindPointsInRadiusWithinCone(const TacticalGraph *pGraph, const vec3_t *pos, float radius, const vec3_t *forward, float dot, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  unsigned int PointsInRadius_r; 
  TacGraphSearchFilter pFilter; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 

  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 891, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 892, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 893, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 894, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  pFilter.m_pPoints = pGraph->m_Points;
  pFilter.m_SearchOrigin = *pos;
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_ViewCone::`vftable';
  v16 = dot;
  v13 = forward->v[0];
  v14 = forward->v[1];
  v15 = forward->v[2];
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, pos, radius, &pFilter, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  return PointsInRadius_r;
}

/*
==============
TacGraphSearch_FindPointsInRadiusWithoutVis
==============
*/
__int64 TacGraphSearch_FindPointsInRadiusWithoutVis(const TacticalGraph *pGraph, const vec3_t *pos, float minRadius, float maxRadius, float minRadiusZ, const tacpoint_t *pVisPoint, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  unsigned int PointsInRadius_r; 
  TacGraphSearchFilter pFilter; 
  const TacticalGraph *v13; 
  const tacpoint_t *v14; 
  unsigned __int16 PointIndex; 
  float v16; 
  float v17; 
  __int64 v18; 
  int v19; 
  float v20; 

  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 827, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 828, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 829, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( maxRadius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 830, ASSERT_TYPE_ASSERT, "(maxRadius > 0.f)", (const char *)&queryFormat, "maxRadius > 0.f") )
    __debugbreak();
  pFilter.m_pPoints = pGraph->m_Points;
  pFilter.m_SearchOrigin = *pos;
  pFilter.__vftable = (TacGraphSearchFilter_vtbl *)&TacGraphSearchFilter_NoVis::`vftable';
  v13 = pGraph;
  v14 = pVisPoint;
  v16 = minRadius * minRadius;
  v17 = minRadiusZ * minRadiusZ;
  v18 = 0i64;
  v19 = 0;
  v20 = 0.0;
  PointIndex = TacGraph_GetPointIndex(pVisPoint);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius");
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, pos, maxRadius, &pFilter, ppOutPoints, maxNumPoints);
  Sys_ProfEndNamedEvent();
  return PointsInRadius_r;
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
__int64 TacGraphSearch_FindPointsInRadius_Sorted(const TacticalGraph *pGraph, const vec3_t *pos, float maxRadius, TacGraphSearchFilter *pFilter, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  signed __int64 v6; 
  void *v7; 
  int PointsInRadius_r; 
  signed __int64 v12; 
  signed __int64 v13; 
  __int64 v14; 
  float v15; 
  float v16; 
  float v17; 
  _OWORD *v18; 
  unsigned __int64 v19; 
  const tacpoint_t **v20; 
  float *v21; 
  float v22; 
  float v23; 
  float v24; 
  float *v25; 
  float v26; 
  float v27; 
  float v28; 
  float *v29; 
  float v30; 
  float v31; 
  float v32; 
  float *v33; 
  float v34; 
  float v35; 
  float v36; 
  float *v37; 
  const tacpoint_t *v38; 
  const tacpoint_t **v39; 
  const tacpoint_t *v40; 
  char Base[8]; 
  _OWORD v43[511]; 

  v7 = alloca(v6);
  if ( !ppOutPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 843, ASSERT_TYPE_ASSERT, "(ppOutPoints)", (const char *)&queryFormat, "ppOutPoints") )
    __debugbreak();
  if ( maxNumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 844, ASSERT_TYPE_ASSERT, "(maxNumPoints > 0)", (const char *)&queryFormat, "maxNumPoints > 0") )
    __debugbreak();
  if ( !pGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 845, ASSERT_TYPE_ASSERT, "(pGraph)", (const char *)&queryFormat, "pGraph") )
    __debugbreak();
  if ( maxRadius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 846, ASSERT_TYPE_ASSERT, "(maxRadius > 0.f)", (const char *)&queryFormat, "maxRadius > 0.f") )
    __debugbreak();
  if ( maxNumPoints > 512 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 849, ASSERT_TYPE_ASSERT, "( maxNumPoints ) <= ( cMaxSorts )", "%s <= %s\n\t%i, %i", "maxNumPoints", "cMaxSorts", maxNumPoints, 512) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Tac_FindPointsInRadius_Sorted");
  PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(pGraph->m_Points, &pGraph->m_SearchRoot, pos, maxRadius, pFilter, ppOutPoints, maxNumPoints);
  v12 = 0i64;
  v13 = PointsInRadius_r;
  v14 = 0i64;
  if ( PointsInRadius_r >= 4i64 )
  {
    v15 = pos->v[0];
    v16 = pos->v[1];
    v17 = pos->v[2];
    v18 = v43;
    v19 = ((unsigned __int64)(PointsInRadius_r - 4i64) >> 2) + 1;
    v20 = ppOutPoints + 2;
    v14 = 4 * v19;
    do
    {
      v21 = (float *)*(v20 - 2);
      v20 += 4;
      *((_QWORD *)v18 - 1) = v21;
      v18 += 4;
      v22 = v16 - v21[1];
      v23 = v15 - *v21;
      v24 = v17 - v21[2];
      v25 = (float *)*(v20 - 5);
      *((_QWORD *)v18 - 7) = v25;
      *((float *)v18 - 16) = (float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v24 * v24);
      v26 = v16 - v25[1];
      v27 = v15 - *v25;
      v28 = v17 - v25[2];
      v29 = (float *)*(v20 - 4);
      *((_QWORD *)v18 - 5) = v29;
      *((float *)v18 - 12) = (float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(v28 * v28);
      v30 = v16 - v29[1];
      v31 = v15 - *v29;
      v32 = v17 - v29[2];
      v33 = (float *)*(v20 - 3);
      *((_QWORD *)v18 - 3) = v33;
      *((float *)v18 - 8) = (float)((float)(v30 * v30) + (float)(v31 * v31)) + (float)(v32 * v32);
      *((float *)v18 - 4) = (float)((float)((float)(v16 - v33[1]) * (float)(v16 - v33[1])) + (float)((float)(v15 - *v33) * (float)(v15 - *v33))) + (float)((float)(v17 - v33[2]) * (float)(v17 - v33[2]));
      --v19;
    }
    while ( v19 );
  }
  if ( v14 < v13 )
  {
    v34 = pos->v[0];
    v35 = pos->v[1];
    v36 = pos->v[2];
    v37 = (float *)&v43[v14];
    do
    {
      v38 = ppOutPoints[v14++];
      *((_QWORD *)v37 - 1) = v38;
      v37 += 4;
      *(v37 - 4) = (float)((float)((float)(v35 - v38->m_Pos.v[1]) * (float)(v35 - v38->m_Pos.v[1])) + (float)((float)(v34 - v38->m_Pos.v[0]) * (float)(v34 - v38->m_Pos.v[0]))) + (float)((float)(v36 - v38->m_Pos.v[2]) * (float)(v36 - v38->m_Pos.v[2]));
    }
    while ( v14 < v13 );
  }
  qsort(Base, v13, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)TacPoint_CompareDist);
  if ( (int)v13 > 0 )
  {
    v39 = (const tacpoint_t **)Base;
    do
    {
      v40 = *v39;
      v39 += 2;
      ppOutPoints[v12++] = v40;
    }
    while ( v12 < v13 );
  }
  Sys_ProfEndNamedEvent();
  return (unsigned int)v13;
}

/*
==============
TacGraphSearch_FindPointsInRadius_r
==============
*/
tacpoint_search_node_t **TacGraphSearch_FindPointsInRadius_r(const tacpoint_t *pPoints, const tacpoint_search_node_t *pNode, const vec3_t *pos, float radius, TacGraphSearchFilter *pFilter, const tacpoint_t **ppOutPoints, int maxNumPoints)
{
  unsigned int v7; 
  tacpoint_search_node_t **result; 
  const tacpoint_t *v11; 
  unsigned __int16 m_PointListRoot; 
  __int64 v13; 
  float v14; 
  float v15; 
  const tacpoint_t *v16; 
  float v17; 
  int ChildNodeForPos; 
  char v19; 
  int PointsInRadius_r; 
  __int64 v21; 
  int v22; 
  float v23; 
  unsigned int v24; 
  int v25; 
  float v26; 
  unsigned int v27; 
  int v28; 
  float v29; 
  int v30; 
  char v31; 
  char v32; 
  vec2_t posa; 

  v7 = 0;
  result = pNode->m_ChildNodes;
  v11 = pPoints;
  if ( pNode->m_PointListRoot == 0xFFFF )
  {
    if ( result )
    {
      v17 = pos->v[0] - radius;
      posa.v[1] = radius + pos->v[1];
      posa.v[0] = v17;
      ChildNodeForPos = TacGraphSearch_GetChildNodeForPos(pNode, &posa);
      v19 = ChildNodeForPos;
      PointsInRadius_r = TacGraphSearch_FindPointsInRadius_r(v11, pNode->m_ChildNodes[ChildNodeForPos], pos, radius, pFilter, ppOutPoints, maxNumPoints);
      v21 = PointsInRadius_r;
      v22 = 1 << v19;
      if ( PointsInRadius_r < maxNumPoints )
      {
        v23 = radius + pos->v[1];
        posa.v[0] = radius + pos->v[0];
        posa.v[1] = v23;
        v24 = TacGraphSearch_GetChildNodeForPos(pNode, &posa);
        v25 = (unsigned __int8)v22;
        v32 = v24;
        if ( !_bittest(&v25, v24) )
        {
          LODWORD(v21) = TacGraphSearch_FindPointsInRadius_r(pPoints, pNode->m_ChildNodes[v24], pos, radius, pFilter, &ppOutPoints[v21], maxNumPoints - v21) + v21;
          v22 = (unsigned __int8)v22 | (1 << v32);
        }
        if ( (int)v21 < maxNumPoints )
        {
          v26 = pos->v[0] - radius;
          posa.v[1] = pos->v[1] - radius;
          posa.v[0] = v26;
          v27 = TacGraphSearch_GetChildNodeForPos(pNode, &posa);
          v28 = (unsigned __int8)v22;
          v31 = v27;
          if ( !_bittest(&v28, v27) )
          {
            LODWORD(v21) = TacGraphSearch_FindPointsInRadius_r(pPoints, pNode->m_ChildNodes[v27], pos, radius, pFilter, &ppOutPoints[(int)v21], maxNumPoints - v21) + v21;
            v22 = (unsigned __int8)v22 | (1 << v31);
          }
          if ( (int)v21 < maxNumPoints )
          {
            v29 = radius + pos->v[0];
            posa.v[1] = pos->v[1] - radius;
            posa.v[0] = v29;
            v30 = TacGraphSearch_GetChildNodeForPos(pNode, &posa);
            if ( ((unsigned __int8)(1 << v30) & (unsigned __int8)v22) == 0 )
              LODWORD(v21) = TacGraphSearch_FindPointsInRadius_r(pPoints, pNode->m_ChildNodes[v30], pos, radius, pFilter, &ppOutPoints[(int)v21], maxNumPoints - v21) + v21;
          }
        }
      }
      return (tacpoint_search_node_t **)(unsigned int)v21;
    }
  }
  else
  {
    if ( result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 716, ASSERT_TYPE_ASSERT, "(!pNode->m_ChildNodes)", (const char *)&queryFormat, "!pNode->m_ChildNodes") )
      __debugbreak();
    m_PointListRoot = pNode->m_PointListRoot;
    if ( m_PointListRoot != 0xFFFF )
    {
      v13 = 0i64;
      do
      {
        v14 = pos->v[1] - v11[m_PointListRoot].m_Pos.v[1];
        v15 = pos->v[0] - v11[m_PointListRoot].m_Pos.v[0];
        v16 = &v11[m_PointListRoot];
        if ( (float)((float)(v14 * v14) + (float)(v15 * v15)) <= (float)(radius * radius) && (!pFilter || ((unsigned __int8 (__fastcall *)(TacGraphSearchFilter *))pFilter->AllowPoint)(pFilter)) )
        {
          ppOutPoints[v13] = v16;
          ++v7;
          if ( ++v13 >= maxNumPoints )
            break;
        }
        m_PointListRoot = v16->m_SearchNext;
        v11 = pPoints;
      }
      while ( m_PointListRoot != 0xFFFF );
    }
    return (tacpoint_search_node_t **)v7;
  }
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
  const tacpoint_t *v10; 
  unsigned __int16 m_PointListRoot; 
  __int64 v12; 
  const tacpoint_t *v13; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  tacpoint_search_node_t *v20; 
  float v21; 
  float v22; 
  unsigned int volumePhysInstId; 
  HavokPhysics_CollisionQueryResult *pResult; 
  vec2_t maxs1; 
  vec2_t mins1; 
  vec2_t maxs0; 
  vec2_t mins0; 

  v6 = 0;
  v10 = pPoints;
  if ( pNode->m_PointListRoot == 0xFFFF )
  {
    if ( !pNode->m_ChildNodes )
      return 0i64;
    v15 = pVolume->r.absBox.midPoint.v[0];
    v16 = pVolume->r.absBox.halfSize.v[0];
    v17 = pVolume->r.absBox.midPoint.v[1];
    v18 = pVolume->r.absBox.halfSize.v[1];
    v19 = 0i64;
    mins0.v[0] = v15 - v16;
    mins0.v[1] = v17 - v18;
    maxs0.v[1] = v18 + v17;
    maxs0.v[0] = v16 + v15;
    do
    {
      v20 = pNode->m_ChildNodes[v19];
      v21 = v20->m_MidPoint.v[1] - v20->m_HalfSize.v[1];
      mins1.v[0] = v20->m_MidPoint.v[0] - v20->m_HalfSize.v[0];
      mins1.v[1] = v21;
      v22 = v20->m_HalfSize.v[1] + v20->m_MidPoint.v[1];
      maxs1.v[0] = v20->m_HalfSize.v[0] + v20->m_MidPoint.v[0];
      maxs1.v[1] = v22;
      if ( BoundsOverlap2D(&mins0, &maxs0, &mins1, &maxs1) )
        v6 += TacGraphSearch_FindPointsInVolume_r(pPoints, v20, pVolume, pFilter, ppOutPoints, maxNumPoints);
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
  float v4; 
  __int64 result; 

  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 539, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  v4 = pos->v[1] - pNode->m_MidPoint.v[1];
  if ( (float)(pos->v[0] - pNode->m_MidPoint.v[0]) >= 0.0 )
  {
    result = 1i64;
    if ( v4 < 0.0 )
      return 3i64;
  }
  else
  {
    result = 0i64;
    if ( v4 < 0.0 )
      return 2i64;
  }
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
  __int64 result; 

  result = 1i64;
  if ( *((float *)pPoint1 + 2) < *((float *)pPoint2 + 2) )
    return 0xFFFFFFFFi64;
  return result;
}

