/*
==============
AINavigator2D::GetStairsStateAtDist
==============
*/

AI_STAIRS_STATE __fastcall AINavigator2D::GetStairsStateAtDist(AINavigator2D *this, float checkDist, vec3_t *outPosAtDist)
{
  return ?GetStairsStateAtDist@AINavigator2D@@UEBA?AW4AI_STAIRS_STATE@@MAEATvec3_t@@@Z(this, checkDist, outPosAtDist);
}

/*
==============
AINavigator2D::ConvertCornerData
==============
*/

void __fastcall AINavigator2D::ConvertCornerData(AINavigator2D *this, const nav_cornerdata_2D_t *fromCorner, nav_cornerdata_t *pToCorner)
{
  ?ConvertCornerData@AINavigator2D@@IEBAXAEBUnav_cornerdata_2D_t@@PEAUnav_cornerdata_t@@@Z(this, fromCorner, pToCorner);
}

/*
==============
AINavigator2D::AdjustCornerForTeamWalking
==============
*/

bool __fastcall AINavigator2D::AdjustCornerForTeamWalking(AINavigator2D *this, int iCorner, const vec3_t *prevLocalCorner, const bfx::AreaHandle *hPrevArea)
{
  return ?AdjustCornerForTeamWalking@AINavigator2D@@IEAA_NHAEBTvec3_t@@AEBVAreaHandle@bfx@@@Z(this, iCorner, prevLocalCorner, hPrevArea);
}

/*
==============
AINavigator2D::TraceFromCurPos
==============
*/

bool __fastcall AINavigator2D::TraceFromCurPos(AINavigator2D *this, const vec3_t *endPos)
{
  return ?TraceFromCurPos@AINavigator2D@@UEBA_NAEBTvec3_t@@@Z(this, endPos);
}

/*
==============
AINavigator2D::ClearSuppressionPlanes
==============
*/

void __fastcall AINavigator2D::ClearSuppressionPlanes(AINavigator2D *this, bool bClearBlockPlanes)
{
  ?ClearSuppressionPlanes@AINavigator2D@@IEAAX_N@Z(this, bClearBlockPlanes);
}

/*
==============
AINavigator2D::SetCurPos
==============
*/

void __fastcall AINavigator2D::SetCurPos(AINavigator2D *this, const vec3_t *curPos)
{
  ?SetCurPos@AINavigator2D@@UEAAXAEBTvec3_t@@@Z(this, curPos);
}

/*
==============
AINavigator2D::Trace
==============
*/

bool __fastcall AINavigator2D::Trace(AINavigator2D *this, const vec3_t *startPos, const vec3_t *endPos, vec3_t *outHitPos)
{
  return ?Trace@AINavigator2D@@UEBA_NAEBTvec3_t@@0AEAT2@@Z(this, startPos, endPos, outHitPos);
}

/*
==============
AINavigator2D::SetSuppressionObstacleIdx
==============
*/

void __fastcall AINavigator2D::SetSuppressionObstacleIdx(AINavigator2D *this, int idx)
{
  ?SetSuppressionObstacleIdx@AINavigator2D@@IEAAXH@Z(this, idx);
}

/*
==============
Nav_Create2DNavigator
==============
*/

AINavigator *__fastcall Nav_Create2DNavigator(gentity_s *pEnt, AINavLayer planLayer)
{
  return ?Nav_Create2DNavigator@@YAPEAVAINavigator@@PEAUgentity_s@@W4AINavLayer@@@Z(pEnt, planLayer);
}

/*
==============
nav_path_t::TrimLeadingPathPoints
==============
*/

void __fastcall nav_path_t::TrimLeadingPathPoints(nav_path_t *this, int newFirstPathPoint)
{
  ?TrimLeadingPathPoints@nav_path_t@@QEAAXH@Z(this, newFirstPathPoint);
}

/*
==============
nav_path_t::nav_path_t
==============
*/

void __fastcall nav_path_t::nav_path_t(nav_path_t *this)
{
  ??0nav_path_t@@QEAA@XZ(this);
}

/*
==============
AINavigator2D::GetPathSpec
==============
*/

const bfx::PathSpec *__fastcall AINavigator2D::GetPathSpec(AINavigator2D *this)
{
  return ?GetPathSpec@AINavigator2D@@QEBAAEBVPathSpec@bfx@@XZ(this);
}

/*
==============
AINavigator2D::FindLastPointOnPathWithinRegion
==============
*/

bool __fastcall AINavigator2D::FindLastPointOnPathWithinRegion(AINavigator2D *this, const vec3_t *goalPos, const gentity_s *pRegion, vec3_t *outPoint)
{
  return ?FindLastPointOnPathWithinRegion@AINavigator2D@@UEBA_NAEBTvec3_t@@PEBUgentity_s@@AEAT2@@Z(this, goalPos, pRegion, outPoint);
}

/*
==============
AINavigator2D::FixUpAreasIfNecessary
==============
*/

void __fastcall AINavigator2D::FixUpAreasIfNecessary(AINavigator2D *this)
{
  ?FixUpAreasIfNecessary@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
AINavigator2D::GetStairsWithinDist
==============
*/

bool __fastcall AINavigator2D::GetStairsWithinDist(AINavigator2D *this, float checkDist)
{
  return ?GetStairsWithinDist@AINavigator2D@@UEBA_NM@Z(this, checkDist);
}

/*
==============
AINavigator2D::GetNextNCorners
==============
*/

int __fastcall AINavigator2D::GetNextNCorners(AINavigator2D *this, nav_cornerdata_t *pOutCorners, int maxCorners, float pathDistThreshold, bool bGetCornerAfterThreshold)
{
  return ?GetNextNCorners@AINavigator2D@@UEBAHPEAUnav_cornerdata_t@@HM_N@Z(this, pOutCorners, maxCorners, pathDistThreshold, bGetCornerAfterThreshold);
}

/*
==============
AINavigator2D::FindLastTacPointOnPathWithVis
==============
*/

const tacpoint_t *__fastcall AINavigator2D::FindLastTacPointOnPathWithVis(AINavigator2D *this, const vec3_t *startPos, const tacpoint_t *pTacPoint, const vec3_t *goalPos, vec3_t *outCornerPos)
{
  return ?FindLastTacPointOnPathWithVis@AINavigator2D@@UEBAPEBUtacpoint_t@@AEBTvec3_t@@PEBU2@0AEAT3@@Z(this, startPos, pTacPoint, goalPos, outCornerPos);
}

/*
==============
AINavigator2D::ShouldRefreshSuppressionPlanes
==============
*/

bool __fastcall AINavigator2D::ShouldRefreshSuppressionPlanes(AINavigator2D *this)
{
  return ?ShouldRefreshSuppressionPlanes@AINavigator2D@@IEBA_NXZ(this);
}

/*
==============
AINavigator2D::TraceFromCurPos
==============
*/

bool __fastcall AINavigator2D::TraceFromCurPos(AINavigator2D *this, const vec3_t *endPos, vec3_t *outHitPos)
{
  return ?TraceFromCurPos@AINavigator2D@@UEBA_NAEBTvec3_t@@AEAT2@@Z(this, endPos, outHitPos);
}

/*
==============
AINavigator2D::HasPath
==============
*/

bool __fastcall AINavigator2D::HasPath(AINavigator2D *this)
{
  return ?HasPath@AINavigator2D@@UEBA_NXZ(this);
}

/*
==============
AINavigator2D::ReFindPathToPoint
==============
*/

bool __fastcall AINavigator2D::ReFindPathToPoint(AINavigator2D *this, int iPointToPathTo)
{
  return ?ReFindPathToPoint@AINavigator2D@@IEAA_NH@Z(this, iPointToPathTo);
}

/*
==============
AINavigator2D::ClearSuppressionObstacleIdx
==============
*/

void __fastcall AINavigator2D::ClearSuppressionObstacleIdx(AINavigator2D *this)
{
  ?ClearSuppressionObstacleIdx@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
AINavigator2D::GetFinalPathPoint
==============
*/

void __fastcall AINavigator2D::GetFinalPathPoint(AINavigator2D *this, vec3_t *outPoint)
{
  ?GetFinalPathPoint@AINavigator2D@@QEBAXAEATvec3_t@@@Z(this, outPoint);
}

/*
==============
AINavigator2D::GetFinalPathPoint
==============
*/

void __fastcall AINavigator2D::GetFinalPathPoint(AINavigator2D *this, const bfx::PolylinePathRCPtr *path, vec3_t *outPoint)
{
  ?GetFinalPathPoint@AINavigator2D@@QEBAXAEBVPolylinePathRCPtr@bfx@@AEATvec3_t@@@Z(this, path, outPoint);
}

/*
==============
AINavigator2D::PreUpdateAll
==============
*/

void AINavigator2D::PreUpdateAll(void)
{
  ?PreUpdateAll@AINavigator2D@@SAXXZ();
}

/*
==============
nav_path_t::Reset
==============
*/

void __fastcall nav_path_t::Reset(nav_path_t *this)
{
  ?Reset@nav_path_t@@QEAAXXZ(this);
}

/*
==============
AINavigator2D::DrawPath
==============
*/

void __fastcall AINavigator2D::DrawPath(AINavigator2D *this, int mode)
{
  ?DrawPath@AINavigator2D@@UEBAXH@Z(this, mode);
}

/*
==============
AINavigator2D::ReserveSuppression
==============
*/

int __fastcall AINavigator2D::ReserveSuppression(AINavigator2D *this)
{
  return ?ReserveSuppression@AINavigator2D@@IEAAHXZ(this);
}

/*
==============
AINavigator2D::ReFindMultiGoalPath
==============
*/

bool __fastcall AINavigator2D::ReFindMultiGoalPath(AINavigator2D *this, bool bFirstGoalOnly)
{
  return ?ReFindMultiGoalPath@AINavigator2D@@IEAA_N_N@Z(this, bFirstGoalOnly);
}

/*
==============
AINavigator2D::IsPathDistToGoalOrLinkAtLeast
==============
*/

bool __fastcall AINavigator2D::IsPathDistToGoalOrLinkAtLeast(AINavigator2D *this, float dist)
{
  return ?IsPathDistToGoalOrLinkAtLeast@AINavigator2D@@UEBA_NM@Z(this, dist);
}

/*
==============
AINavigator2D::ReadNavigator
==============
*/

AINavigator2D *__fastcall AINavigator2D::ReadNavigator(MemoryFile *memFile, int index)
{
  return ?ReadNavigator@AINavigator2D@@SAPEAV1@PEAUMemoryFile@@H@Z(memFile, index);
}

/*
==============
nav_path_t::GetNextLinkPathPoint
==============
*/

int __fastcall nav_path_t::GetNextLinkPathPoint(nav_path_t *this, int iCurPoint)
{
  return ?GetNextLinkPathPoint@nav_path_t@@QEBAHH@Z(this, iCurPoint);
}

/*
==============
AINavigator2D::GetNextCornerArea
==============
*/

const bfx::AreaHandle *__fastcall AINavigator2D::GetNextCornerArea(AINavigator2D *this)
{
  return ?GetNextCornerArea@AINavigator2D@@QEBAAEBVAreaHandle@bfx@@XZ(this);
}

/*
==============
AINavigator2D::GetClosestReachablePoint
==============
*/

void __fastcall AINavigator2D::GetClosestReachablePoint(AINavigator2D *this, const vec3_t *pos, vec3_t *closestPos)
{
  ?GetClosestReachablePoint@AINavigator2D@@UEBAXTvec3_t@@AEAT2@@Z(this, pos, closestPos);
}

/*
==============
AINavigator2D::VerifyShutdown
==============
*/

void AINavigator2D::VerifyShutdown(void)
{
  ?VerifyShutdown@AINavigator2D@@SAXXZ();
}

/*
==============
AINavigator2D::IsApproachingTightQuarters
==============
*/

bool __fastcall AINavigator2D::IsApproachingTightQuarters(AINavigator2D *this, float maxDistance)
{
  return ?IsApproachingTightQuarters@AINavigator2D@@QEBA_NM@Z(this, maxDistance);
}

/*
==============
AINavigator2D::UpdateCurSegment
==============
*/

bool __fastcall AINavigator2D::UpdateCurSegment(AINavigator2D *this, const vec3_t *newPos, const bfx::AreaHandle *hNewArea)
{
  return ?UpdateCurSegment@AINavigator2D@@QEAA_NAEBTvec3_t@@AEBVAreaHandle@bfx@@@Z(this, newPos, hNewArea);
}

/*
==============
AINavigator2D::AddMultiGoalPathGoal
==============
*/

bool __fastcall AINavigator2D::AddMultiGoalPathGoal(AINavigator2D *this, const vec3_t *goalPos)
{
  return ?AddMultiGoalPathGoal@AINavigator2D@@UEAA_NAEBTvec3_t@@@Z(this, goalPos);
}

/*
==============
AINavigator2D::GetStairsWithinDist_OLD
==============
*/

bool __fastcall AINavigator2D::GetStairsWithinDist_OLD(AINavigator2D *this, float checkDist)
{
  return ?GetStairsWithinDist_OLD@AINavigator2D@@UEBA_NM@Z(this, checkDist);
}

/*
==============
AINavigator2D::IsStraightLineToGoalOrLink
==============
*/

bool __fastcall AINavigator2D::IsStraightLineToGoalOrLink(AINavigator2D *this)
{
  return ?IsStraightLineToGoalOrLink@AINavigator2D@@UEBA_NXZ(this);
}

/*
==============
AINavigator2D::IsPathLengthAtLeast
==============
*/

bool __fastcall AINavigator2D::IsPathLengthAtLeast(AINavigator2D *this, float dist)
{
  return ?IsPathLengthAtLeast@AINavigator2D@@UEBA_NM@Z(this, dist);
}

/*
==============
AINavigator2D::IsNextCornerGoal
==============
*/

bool __fastcall AINavigator2D::IsNextCornerGoal(AINavigator2D *this)
{
  return ?IsNextCornerGoal@AINavigator2D@@UEBA_NXZ(this);
}

/*
==============
AINavigator2D::WritePath
==============
*/

void __fastcall AINavigator2D::WritePath(AINavigator2D *this, MemoryFile *memFile)
{
  ?WritePath@AINavigator2D@@IEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
AINavigator2D::GetPathDistToGoal
==============
*/

double __fastcall AINavigator2D::GetPathDistToGoal(AINavigator2D *this)
{
  double result; 

  *(float *)&result = ?GetPathDistToGoal@AINavigator2D@@UEBAMXZ(this);
  return result;
}

/*
==============
AINavigator2D::ClearNavigatorsFromSpace
==============
*/

void __fastcall AINavigator2D::ClearNavigatorsFromSpace(nav_space_s *pOldSpace, nav_space_s *pNewSpace)
{
  ?ClearNavigatorsFromSpace@AINavigator2D@@SAXPEAUnav_space_s@@0@Z(pOldSpace, pNewSpace);
}

/*
==============
nav_path_t::GetDir
==============
*/

void __fastcall nav_path_t::GetDir(nav_path_t *this, int iPoint, vec3_t *outDir)
{
  ?GetDir@nav_path_t@@QEBAXHAEATvec3_t@@@Z(this, iPoint, outDir);
}

/*
==============
AINavigator2D::GetNavIndex
==============
*/

int __fastcall AINavigator2D::GetNavIndex(AINavigator2D *this)
{
  return ?GetNavIndex@AINavigator2D@@UEBAHXZ(this);
}

/*
==============
AINavigator2D::ClearPenaltyTable
==============
*/

void __fastcall AINavigator2D::ClearPenaltyTable(AINavigator2D *this)
{
  ?ClearPenaltyTable@AINavigator2D@@UEAAXXZ(this);
}

/*
==============
AINavigator2D::IsTightPathSegment
==============
*/

bool __fastcall AINavigator2D::IsTightPathSegment(AINavigator2D *this, const vec3_t *startPoint, const vec3_t *endPoint, const float maxDistance, bool *outFullyProcessed, float *outRemainingLength)
{
  return ?IsTightPathSegment@AINavigator2D@@IEBA_NAEBTvec3_t@@0MAEA_NAEAM@Z(this, startPoint, endPoint, maxDistance, outFullyProcessed, outRemainingLength);
}

/*
==============
AINavigator2D::GetPathDistToGoalOrLink
==============
*/

double __fastcall AINavigator2D::GetPathDistToGoalOrLink(AINavigator2D *this)
{
  double result; 

  *(float *)&result = ?GetPathDistToGoalOrLink@AINavigator2D@@UEBAMXZ(this);
  return result;
}

/*
==============
AINavigator2D::SetPenaltyTableValue
==============
*/

void __fastcall AINavigator2D::SetPenaltyTableValue(AINavigator2D *this, unsigned int index, char value)
{
  ?SetPenaltyTableValue@AINavigator2D@@UEAAXID@Z(this, index, value);
}

/*
==============
AINavigator2D::GetClosestVerticalPosInMostLikelySpace
==============
*/

nav_space_s *__fastcall AINavigator2D::GetClosestVerticalPosInMostLikelySpace(AINavigator2D *this, const vec3_t *pos, vec3_t *outClosestPos, bfx::AreaHandle *pOutArea)
{
  return ?GetClosestVerticalPosInMostLikelySpace@AINavigator2D@@QEBAPEAUnav_space_s@@AEBTvec3_t@@AEAT3@PEAVAreaHandle@bfx@@@Z(this, pos, outClosestPos, pOutArea);
}

/*
==============
AINavigator2D::GetAllowanceOffMesh
==============
*/

double __fastcall AINavigator2D::GetAllowanceOffMesh()
{
  double result; 

  *(float *)&result = ?GetAllowanceOffMesh@AINavigator2D@@SAMXZ();
  return result;
}

/*
==============
AINavigator2D::GetLastPathPointWithinRadius
==============
*/

bool __fastcall AINavigator2D::GetLastPathPointWithinRadius(AINavigator2D *this, const vec3_t *origin, float radius, vec3_t *outPoint)
{
  return ?GetLastPathPointWithinRadius@AINavigator2D@@UEBA_NAEBTvec3_t@@MAEAT2@@Z(this, origin, radius, outPoint);
}

/*
==============
AINavigator2D::IsPosUsable
==============
*/

bool __fastcall AINavigator2D::IsPosUsable(AINavigator2D *this, const vec3_t *pos)
{
  return ?IsPosUsable@AINavigator2D@@UEBA_NAEBTvec3_t@@@Z(this, pos);
}

/*
==============
AINavigator2D::SetSuppressionPlanes
==============
*/

void __fastcall AINavigator2D::SetSuppressionPlanes(AINavigator2D *this, PathBlockPlanes *pPlanes)
{
  ?SetSuppressionPlanes@AINavigator2D@@QEAAXPEAUPathBlockPlanes@@@Z(this, pPlanes);
}

/*
==============
nav_path_t::CopyPathPoint
==============
*/

void __fastcall nav_path_t::CopyPathPoint(nav_path_t *this, const nav_path_t::pathpoint_t *pSrc, nav_path_t::pathpoint_t *pDest)
{
  ?CopyPathPoint@nav_path_t@@QEBAXPEBUpathpoint_t@1@PEAU21@@Z(this, pSrc, pDest);
}

/*
==============
AINavigator2D::IsAreaReachable
==============
*/

bool __fastcall AINavigator2D::IsAreaReachable(AINavigator2D *this, const bfx::AreaHandle *hArea)
{
  return ?IsAreaReachable@AINavigator2D@@UEBA_NAEBVAreaHandle@bfx@@@Z(this, hArea);
}

/*
==============
AINavigator2D::GetLinkUsageFlags
==============
*/

unsigned int __fastcall AINavigator2D::GetLinkUsageFlags(AINavigator2D *this)
{
  return ?GetLinkUsageFlags@AINavigator2D@@UEBAIXZ(this);
}

/*
==============
AINavigator2D::FindClosestStraightLineReachableTacPoint
==============
*/

const tacpoint_t *__fastcall AINavigator2D::FindClosestStraightLineReachableTacPoint(AINavigator2D *this)
{
  return ?FindClosestStraightLineReachableTacPoint@AINavigator2D@@UEBAPEBUtacpoint_t@@XZ(this);
}

/*
==============
AINavigator2D::GetAllowedStances
==============
*/

ai_stance_e __fastcall AINavigator2D::GetAllowedStances(AINavigator2D *this, bfx::AreaHandle *phArea)
{
  return ?GetAllowedStances@AINavigator2D@@IEBA?AW4ai_stance_e@@PEAVAreaHandle@bfx@@@Z(this, phArea);
}

/*
==============
AINavigator2D::IsNodeUsable
==============
*/

bool __fastcall AINavigator2D::IsNodeUsable(AINavigator2D *this, const pathnode_t *pNode)
{
  return ?IsNodeUsable@AINavigator2D@@UEBA_NPEBUpathnode_t@@@Z(this, pNode);
}

/*
==============
AINavigator2D::FreeClaimedTraversal
==============
*/

void __fastcall AINavigator2D::FreeClaimedTraversal(AINavigator2D *this)
{
  ?FreeClaimedTraversal@AINavigator2D@@QEAAXXZ(this);
}

/*
==============
AINavigator2D::SetCornerCurrentAngle
==============
*/

void __fastcall AINavigator2D::SetCornerCurrentAngle(AINavigator2D *this, int cornerIndex, float currentAngle)
{
  ?SetCornerCurrentAngle@AINavigator2D@@QEAAXHM@Z(this, cornerIndex, currentAngle);
}

/*
==============
AINavigator2D::GetCornerCurrentAngle
==============
*/

double __fastcall AINavigator2D::GetCornerCurrentAngle(AINavigator2D *this, int cornerIndex)
{
  double result; 

  *(float *)&result = ?GetCornerCurrentAngle@AINavigator2D@@QEBAMH@Z(this, cornerIndex);
  return result;
}

/*
==============
AINavigator2D::AdjustCornersForTeamWalking
==============
*/

void __fastcall AINavigator2D::AdjustCornersForTeamWalking(AINavigator2D *this)
{
  ?AdjustCornersForTeamWalking@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
AINavigator2D::Free
==============
*/

void __fastcall AINavigator2D::Free(AINavigator2D *this)
{
  ?Free@AINavigator2D@@UEAAXXZ(this);
}

/*
==============
AINavigator2D::AINavigator2D
==============
*/

void __fastcall AINavigator2D::AINavigator2D(AINavigator2D *this)
{
  ??0AINavigator2D@@QEAA@XZ(this);
}

/*
==============
AINavigator2D::IsInOrApproachingTightQuarters
==============
*/

bool __fastcall AINavigator2D::IsInOrApproachingTightQuarters(AINavigator2D *this, float maxDistance)
{
  return ?IsInOrApproachingTightQuarters@AINavigator2D@@QEBA_NM@Z(this, maxDistance);
}

/*
==============
AINavigator2D::GetGoalOrLink
==============
*/

void __fastcall AINavigator2D::GetGoalOrLink(AINavigator2D *this, vec3_t *outPos)
{
  ?GetGoalOrLink@AINavigator2D@@UEBAXAEATvec3_t@@@Z(this, outPos);
}

/*
==============
AINavigator2D::IsPointVisibleOnPath
==============
*/

bool __fastcall AINavigator2D::IsPointVisibleOnPath(AINavigator2D *this, const vec3_t *pathStartPos, const vec3_t *point, float ignoreDistance)
{
  return ?IsPointVisibleOnPath@AINavigator2D@@UEBA_NAEBTvec3_t@@0M@Z(this, pathStartPos, point, ignoreDistance);
}

/*
==============
AINavigator2D::GetPathLength
==============
*/

double __fastcall AINavigator2D::GetPathLength(AINavigator2D *this)
{
  double result; 

  *(float *)&result = ?GetPathLength@AINavigator2D@@UEBAMXZ(this);
  return result;
}

/*
==============
AINavigator2D::SetSpace
==============
*/

void __fastcall AINavigator2D::SetSpace(AINavigator2D *this, nav_space_s *pSpace)
{
  ?SetSpace@AINavigator2D@@UEAAXPEAUnav_space_s@@@Z(this, pSpace);
}

/*
==============
AINavigator2D::GetNextCorner
==============
*/

void __fastcall AINavigator2D::GetNextCorner(AINavigator2D *this, vec3_t *corner)
{
  ?GetNextCorner@AINavigator2D@@UEBAXAEATvec3_t@@@Z(this, corner);
}

/*
==============
AINavigator2D::EnableTeamWalking
==============
*/

void __fastcall AINavigator2D::EnableTeamWalking(AINavigator2D *this, bool bEnable)
{
  ?EnableTeamWalking@AINavigator2D@@UEAAX_N@Z(this, bEnable);
}

/*
==============
AINavigator2D::GetModifierLocationOnEntPath
==============
*/

bool __fastcall AINavigator2D::GetModifierLocationOnEntPath(AINavigator2D *this, unsigned int flags, float checkDist, vec3_t *outStartPoint, vec3_t *outEndPoint)
{
  return ?GetModifierLocationOnEntPath@AINavigator2D@@QEBA_NIMAEATvec3_t@@0@Z(this, flags, checkDist, outStartPoint, outEndPoint);
}

/*
==============
AINavigator2D::SetObstacleBlockageFlags
==============
*/

void __fastcall AINavigator2D::SetObstacleBlockageFlags(AINavigator2D *this, unsigned int flags)
{
  ?SetObstacleBlockageFlags@AINavigator2D@@UEAAXI@Z(this, flags);
}

/*
==============
AINavigator2D::ExtendPath
==============
*/

bool __fastcall AINavigator2D::ExtendPath(AINavigator2D *this, const vec3_t *startPos, const bfx::AreaHandle *hStartArea, const vec3_t *newGoal)
{
  return ?ExtendPath@AINavigator2D@@IEAA_NAEBTvec3_t@@AEBVAreaHandle@bfx@@0@Z(this, startPos, hStartArea, newGoal);
}

/*
==============
AINavigator2D::FindPath
==============
*/

bfx::PolylinePathRCPtr *__fastcall AINavigator2D::FindPath(AINavigator2D *this, bfx::PolylinePathRCPtr *result, nav_pathfind_input_t *pInput)
{
  return ?FindPath@AINavigator2D@@QEBA?AVPolylinePathRCPtr@bfx@@PEAUnav_pathfind_input_t@@@Z(this, result, pInput);
}

/*
==============
AINavigator2D::IsNodeReachable
==============
*/

bool __fastcall AINavigator2D::IsNodeReachable(AINavigator2D *this, const pathnode_t *node)
{
  return ?IsNodeReachable@AINavigator2D@@UEAA_NPEBUpathnode_t@@@Z(this, node);
}

/*
==============
AINavigator2D::UpdateTightQuarters
==============
*/

void __fastcall AINavigator2D::UpdateTightQuarters(AINavigator2D *this, float updateDistance)
{
  ?UpdateTightQuarters@AINavigator2D@@QEAAXM@Z(this, updateDistance);
}

/*
==============
AINavigator2D::GetCurArea
==============
*/

const bfx::AreaHandle *__fastcall AINavigator2D::GetCurArea(AINavigator2D *this)
{
  return ?GetCurArea@AINavigator2D@@QEBAAEBVAreaHandle@bfx@@XZ(this);
}

/*
==============
AINavigator2D::SetPenaltyTableMode
==============
*/

void __fastcall AINavigator2D::SetPenaltyTableMode(AINavigator2D *this, bfx::PenaltyTableMode mode)
{
  ?SetPenaltyTableMode@AINavigator2D@@UEAAXW4PenaltyTableMode@bfx@@@Z(this, mode);
}

/*
==============
AINavigator2D::GetUsableCurPos
==============
*/

void __fastcall AINavigator2D::GetUsableCurPos(AINavigator2D *this, vec3_t *closestUsablePos)
{
  ?GetUsableCurPos@AINavigator2D@@UEBAXAEATvec3_t@@@Z(this, closestUsablePos);
}

/*
==============
AINavigator2D::IsStraightLineToGoal
==============
*/

bool __fastcall AINavigator2D::IsStraightLineToGoal(AINavigator2D *this)
{
  return ?IsStraightLineToGoal@AINavigator2D@@UEBA_NXZ(this);
}

/*
==============
AINavigator2D::DoPathReeval
==============
*/

bool __fastcall AINavigator2D::DoPathReeval(AINavigator2D *this)
{
  return ?DoPathReeval@AINavigator2D@@UEAA_NXZ(this);
}

/*
==============
AINavigator2D::GetModifierApproachDir
==============
*/

bool __fastcall AINavigator2D::GetModifierApproachDir(AINavigator2D *this, unsigned int flags, float checkDist, float approachDist, vec3_t *outStartPoint, vec3_t *outEndPoint, vec3_t *outApproachDir, vec3_t *outModifierDir)
{
  return ?GetModifierApproachDir@AINavigator2D@@QEBA_NIMMAEATvec3_t@@000@Z(this, flags, checkDist, approachDist, outStartPoint, outEndPoint, outApproachDir, outModifierDir);
}

/*
==============
AINavigator2D::ApplySuppressionPlanes
==============
*/

void __fastcall AINavigator2D::ApplySuppressionPlanes(AINavigator2D *this)
{
  ?ApplySuppressionPlanes@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
AINavigator2D::IncreaseLinkWeightsForPath
==============
*/

void __fastcall AINavigator2D::IncreaseLinkWeightsForPath(AINavigator2D *this)
{
  ?IncreaseLinkWeightsForPath@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
nav_path_t::GetLinkForPathPoint
==============
*/

bool __fastcall nav_path_t::GetLinkForPathPoint(nav_path_t *this, int iPoint, bfx::LinkHandle *phOutLink)
{
  return ?GetLinkForPathPoint@nav_path_t@@QEBA_NHPEAVLinkHandle@bfx@@@Z(this, iPoint, phOutLink);
}

/*
==============
AINavigator2D::GeneratePath
==============
*/

void __fastcall AINavigator2D::GeneratePath(AINavigator2D *this, const bfx::PolylinePathRCPtr *path, nav_path_t *pPath2D, const bfx::PathSpec *pathSpec, bool *pbOutHasDoors)
{
  ?GeneratePath@AINavigator2D@@QEAAXAEBVPolylinePathRCPtr@bfx@@PEAVnav_path_t@@AEBVPathSpec@3@PEA_N@Z(this, path, pPath2D, pathSpec, pbOutHasDoors);
}

/*
==============
AINavigator2D::IsPathDistToGoalAtLeast
==============
*/

bool __fastcall AINavigator2D::IsPathDistToGoalAtLeast(AINavigator2D *this, float dist)
{
  return ?IsPathDistToGoalAtLeast@AINavigator2D@@UEBA_NM@Z(this, dist);
}

/*
==============
AINavigator2D::GetNextMultiGoalPathGoal
==============
*/

unsigned __int8 __fastcall AINavigator2D::GetNextMultiGoalPathGoal(AINavigator2D *this, unsigned __int8 prevPoint, vec3_t *outPoint, bool *pbOutIsPathPoint)
{
  return ?GetNextMultiGoalPathGoal@AINavigator2D@@UEBAEEAEATvec3_t@@PEA_N@Z(this, prevPoint, outPoint, pbOutIsPathPoint);
}

/*
==============
AINavigator2D::ClearCachedData
==============
*/

void __fastcall AINavigator2D::ClearCachedData(const nav_space_s *pSpace)
{
  ?ClearCachedData@AINavigator2D@@SAXPEBUnav_space_s@@@Z(pSpace);
}

/*
==============
AINavigator2D::IsPosReachable
==============
*/

bool __fastcall AINavigator2D::IsPosReachable(AINavigator2D *this, const vec3_t *goalPos)
{
  return ?IsPosReachable@AINavigator2D@@UEBA_NAEBTvec3_t@@@Z(this, goalPos);
}

/*
==============
AINavigator2D::GetPrevCornerPassed
==============
*/

void __fastcall AINavigator2D::GetPrevCornerPassed(AINavigator2D *this, vec3_t *corner)
{
  ?GetPrevCornerPassed@AINavigator2D@@UEBAXAEATvec3_t@@@Z(this, corner);
}

/*
==============
AINavigator2D::HasTraversalWithin
==============
*/

bool __fastcall AINavigator2D::HasTraversalWithin(AINavigator2D *this, float checkDist)
{
  return ?HasTraversalWithin@AINavigator2D@@UEBA_NM@Z(this, checkDist);
}

/*
==============
AINavigator2D::IsGoalPosWithin
==============
*/

bool __fastcall AINavigator2D::IsGoalPosWithin(AINavigator2D *this, float radius)
{
  return ?IsGoalPosWithin@AINavigator2D@@UEBA_NM@Z(this, radius);
}

/*
==============
AINavigator2D::IsInBadPlace
==============
*/

bool __fastcall AINavigator2D::IsInBadPlace(AINavigator2D *this)
{
  return ?IsInBadPlace@AINavigator2D@@UEBA_NXZ(this);
}

/*
==============
AINavigator2D::FixUpGoalAreaIfNecessary
==============
*/

void __fastcall AINavigator2D::FixUpGoalAreaIfNecessary(AINavigator2D *this)
{
  ?FixUpGoalAreaIfNecessary@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
AINavigator2D::IsNextCornerMultiGoalPathGoal
==============
*/

bool __fastcall AINavigator2D::IsNextCornerMultiGoalPathGoal(AINavigator2D *this)
{
  return ?IsNextCornerMultiGoalPathGoal@AINavigator2D@@UEBA_NXZ(this);
}

/*
==============
AINavigator2D::ClearAllSuppression
==============
*/

void __fastcall AINavigator2D::ClearAllSuppression(AINavigator2D *this)
{
  ?ClearAllSuppression@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
nav_path_t::AppendPathPoints
==============
*/

int __fastcall nav_path_t::AppendPathPoints(nav_path_t *this, const nav_path_t::pathpoint_t *pPoints, int numPoints)
{
  return ?AppendPathPoints@nav_path_t@@QEAAHPEBUpathpoint_t@1@H@Z(this, pPoints, numPoints);
}

/*
==============
AINavigator2D::ExtendPath
==============
*/

bool __fastcall AINavigator2D::ExtendPath(AINavigator2D *this, const vec3_t *newGoal)
{
  return ?ExtendPath@AINavigator2D@@IEAA_NAEBTvec3_t@@@Z(this, newGoal);
}

/*
==============
AINavigator2D::WriteNavigator
==============
*/

void __fastcall AINavigator2D::WriteNavigator(AINavigator2D *this, MemoryFile *memFile)
{
  ?WriteNavigator@AINavigator2D@@UEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
AINavigator2D::GetAllowedStances
==============
*/

ai_stance_e __fastcall AINavigator2D::GetAllowedStances(AINavigator2D *this)
{
  return ?GetAllowedStances@AINavigator2D@@UEBA?AW4ai_stance_e@@XZ(this);
}

/*
==============
AINavigator2D::CanAddMultiGoalPathGoal
==============
*/

bool __fastcall AINavigator2D::CanAddMultiGoalPathGoal(AINavigator2D *this)
{
  return ?CanAddMultiGoalPathGoal@AINavigator2D@@UEAA_NXZ(this);
}

/*
==============
AINavigator2D::ReadPath
==============
*/

void __fastcall AINavigator2D::ReadPath(AINavigator2D *pNav, MemoryFile *memFile)
{
  ?ReadPath@AINavigator2D@@KAXPEAV1@PEAUMemoryFile@@@Z(pNav, memFile);
}

/*
==============
AINavigator2D::SetLayer
==============
*/

void __fastcall AINavigator2D::SetLayer(AINavigator2D *this, AINavLayer layer)
{
  ?SetLayer@AINavigator2D@@UEAAXW4AINavLayer@@@Z(this, layer);
}

/*
==============
AINavigator2D::Teleport
==============
*/

void __fastcall AINavigator2D::Teleport(AINavigator2D *this, const vec3_t *curPos)
{
  ?Teleport@AINavigator2D@@UEAAXAEBTvec3_t@@@Z(this, curPos);
}

/*
==============
AINavigator2D::IsApproachingPlayerObstacle
==============
*/

bool __fastcall AINavigator2D::IsApproachingPlayerObstacle(AINavigator2D *this, float maxDistance)
{
  return ?IsApproachingPlayerObstacle@AINavigator2D@@QEBA_NM@Z(this, maxDistance);
}

/*
==============
AINavigator2D::WorldChanged
==============
*/

void __fastcall AINavigator2D::WorldChanged(AINavigator2D *this)
{
  ?WorldChanged@AINavigator2D@@UEAAXXZ(this);
}

/*
==============
AINavigator2D::GetObstacleBlockageFlags
==============
*/

unsigned int __fastcall AINavigator2D::GetObstacleBlockageFlags(AINavigator2D *this)
{
  return ?GetObstacleBlockageFlags@AINavigator2D@@UEBAIXZ(this);
}

/*
==============
AINavigator2D::AINavigator2D
==============
*/

void __fastcall AINavigator2D::AINavigator2D(AINavigator2D *this, gentity_s *pEnt, AINavLayer layer)
{
  ??0AINavigator2D@@QEAA@PEAUgentity_s@@W4AINavLayer@@@Z(this, pEnt, layer);
}

/*
==============
AINavigator2D::GetStairsStateWithinDist
==============
*/

AI_STAIRS_STATE __fastcall AINavigator2D::GetStairsStateWithinDist(AINavigator2D *this, float checkDist, bool bCurrentlyOnStairs)
{
  return ?GetStairsStateWithinDist@AINavigator2D@@UEBA?AW4AI_STAIRS_STATE@@M_N@Z(this, checkDist, bCurrentlyOnStairs);
}

/*
==============
AINavigator2D::DoPathFind
==============
*/

bool __fastcall AINavigator2D::DoPathFind(AINavigator2D *this)
{
  return ?DoPathFind@AINavigator2D@@UEAA_NXZ(this);
}

/*
==============
AINavigator2D::IsStraightLineReachable
==============
*/

bool __fastcall AINavigator2D::IsStraightLineReachable(AINavigator2D *this, const vec3_t *startPos, const vec3_t *endPos)
{
  return ?IsStraightLineReachable@AINavigator2D@@UEBA_NAEBTvec3_t@@0@Z(this, startPos, endPos);
}

/*
==============
AINavigator2D::IsOnStairs
==============
*/

bool __fastcall AINavigator2D::IsOnStairs(AINavigator2D *this)
{
  return ?IsOnStairs@AINavigator2D@@QEBA_NXZ(this);
}

/*
==============
AINavigator2D::GetSuppressionObstacleMask
==============
*/

unsigned int __fastcall AINavigator2D::GetSuppressionObstacleMask(AINavigator2D *this, int idx)
{
  return ?GetSuppressionObstacleMask@AINavigator2D@@IEBAIH@Z(this, idx);
}

/*
==============
AINavigator2D::SetPath
==============
*/

void __fastcall AINavigator2D::SetPath(AINavigator2D *this, const bfx::PolylinePathRCPtr *path, const nav_pathfind_input_t *pInput)
{
  ?SetPath@AINavigator2D@@QEAAXAEBVPolylinePathRCPtr@bfx@@PEBUnav_pathfind_input_t@@@Z(this, path, pInput);
}

/*
==============
AINavigator2D::ClaimNextTraversal
==============
*/

bool __fastcall AINavigator2D::ClaimNextTraversal(AINavigator2D *this)
{
  return ?ClaimNextTraversal@AINavigator2D@@QEAA_NXZ(this);
}

/*
==============
AINavigator2D::DrawLineToSuppression
==============
*/

void __fastcall AINavigator2D::DrawLineToSuppression(AINavigator2D *this)
{
  ?DrawLineToSuppression@AINavigator2D@@QEBAXXZ(this);
}

/*
==============
AINavigator2D::MayPathReeval
==============
*/

bool __fastcall AINavigator2D::MayPathReeval(AINavigator2D *this)
{
  return ?MayPathReeval@AINavigator2D@@QEBA_NXZ(this);
}

/*
==============
AINavigator2D::ClearGoal
==============
*/

void __fastcall AINavigator2D::ClearGoal(AINavigator2D *this)
{
  ?ClearGoal@AINavigator2D@@UEAAXXZ(this);
}

/*
==============
AINavigator2D::ExtractCornersFromRawPath
==============
*/

int __fastcall AINavigator2D::ExtractCornersFromRawPath(AINavigator2D *this, const bfx::PolylinePathRCPtr *rawPath, nav_path_t *pPath2D, int maxCorners, const bfx::PathSpec *pathSpec, bool *pbOutHasDoors)
{
  return ?ExtractCornersFromRawPath@AINavigator2D@@IEBAHAEBVPolylinePathRCPtr@bfx@@PEAVnav_path_t@@HAEBVPathSpec@3@PEA_N@Z(this, rawPath, pPath2D, maxCorners, pathSpec, pbOutHasDoors);
}

/*
==============
AINavigator2D::SetGoalPos
==============
*/

bool __fastcall AINavigator2D::SetGoalPos(AINavigator2D *this, const vec3_t *goalPos)
{
  return ?SetGoalPos@AINavigator2D@@UEAA_NAEBTvec3_t@@@Z(this, goalPos);
}

/*
==============
AINavigator2D::FixUpStartAreaIfNecessary
==============
*/

void __fastcall AINavigator2D::FixUpStartAreaIfNecessary(AINavigator2D *this)
{
  ?FixUpStartAreaIfNecessary@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
nav_path_t::GetPathPoint
==============
*/

void __fastcall nav_path_t::GetPathPoint(nav_path_t *this, int iPoint, vec3_t *outPoint)
{
  ?GetPathPoint@nav_path_t@@QEBAXHAEATvec3_t@@@Z(this, iPoint, outPoint);
}

/*
==============
AINavigator2D::ClearPath
==============
*/

void __fastcall AINavigator2D::ClearPath(AINavigator2D *this)
{
  ?ClearPath@AINavigator2D@@UEAAXXZ(this);
}

/*
==============
AINavigator2D::GetAllowanceOffMeshZ
==============
*/

double __fastcall AINavigator2D::GetAllowanceOffMeshZ()
{
  double result; 

  *(float *)&result = ?GetAllowanceOffMeshZ@AINavigator2D@@SAMXZ();
  return result;
}

/*
==============
AINavigator2D::IsInTightQuarters
==============
*/

bool __fastcall AINavigator2D::IsInTightQuarters(AINavigator2D *this)
{
  return ?IsInTightQuarters@AINavigator2D@@QEBA_NXZ(this);
}

/*
==============
Nav_InitStaticNavigatorData2D
==============
*/

void Nav_InitStaticNavigatorData2D(void)
{
  ?Nav_InitStaticNavigatorData2D@@YAXXZ();
}

/*
==============
AINavigator2D::CleanupAll
==============
*/

void AINavigator2D::CleanupAll(void)
{
  ?CleanupAll@AINavigator2D@@SAXXZ();
}

/*
==============
AINavigator2D::SetLinkUsageFlags
==============
*/

void __fastcall AINavigator2D::SetLinkUsageFlags(AINavigator2D *this, unsigned int flags)
{
  ?SetLinkUsageFlags@AINavigator2D@@UEAAXI@Z(this, flags);
}

/*
==============
AINavigator2D::GetPrevCorner
==============
*/

void __fastcall AINavigator2D::GetPrevCorner(AINavigator2D *this, vec3_t *corner)
{
  ?GetPrevCorner@AINavigator2D@@UEBAXAEATvec3_t@@@Z(this, corner);
}

/*
==============
AINavigator2D::GetPosAlongPath
==============
*/

void __fastcall AINavigator2D::GetPosAlongPath(AINavigator2D *this, float dist, bool bStopAtLink, nav_posAlongPathResults_t *pOutResults, bool bCalcArea)
{
  ?GetPosAlongPath@AINavigator2D@@UEBAXM_NPEAUnav_posAlongPathResults_t@@0@Z(this, dist, bStopAtLink, pOutResults, bCalcArea);
}

/*
==============
AINavigator2D::ClearSuppressionReservation
==============
*/

void __fastcall AINavigator2D::ClearSuppressionReservation(AINavigator2D *this)
{
  ?ClearSuppressionReservation@AINavigator2D@@IEAAXXZ(this);
}

/*
==============
AINavigator2D::GetNextCornerAfterLink
==============
*/

bool __fastcall AINavigator2D::GetNextCornerAfterLink(AINavigator2D *this, vec3_t *corner)
{
  return ?GetNextCornerAfterLink@AINavigator2D@@UEBA_NAEATvec3_t@@@Z(this, corner);
}

/*
==============
AINavigator2D::TransferNavigatorsToSpace
==============
*/

void __fastcall AINavigator2D::TransferNavigatorsToSpace(nav_space_s *pNewSpace)
{
  ?TransferNavigatorsToSpace@AINavigator2D@@SAXPEAUnav_space_s@@@Z(pNewSpace);
}

/*
==============
AINavigator2D::Trace
==============
*/

bool __fastcall AINavigator2D::Trace(AINavigator2D *this, const vec3_t *startPos, const vec3_t *endPos)
{
  return ?Trace@AINavigator2D@@UEBA_NAEBTvec3_t@@0@Z(this, startPos, endPos);
}

/*
==============
IsPointInRegion
==============
*/
char IsPointInRegion(const vec3_t *pos, unsigned int volumePhysInstId, HavokPhysics_CollisionQueryResult *pResult)
{
  int NumRigidBodys; 
  unsigned int v7; 
  unsigned int m_serialAndIndex; 
  __int64 v10; 
  Physics_QueryPointExtendedData extendedData; 
  hknpBodyId result; 

  if ( !pResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 41, ASSERT_TYPE_ASSERT, "(pResult)", (const char *)&queryFormat, "pResult") )
    __debugbreak();
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  extendedData.collisionBuffer = 0.0;
  extendedData.contents = -1;
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, volumePhysInstId);
  v7 = 0;
  if ( NumRigidBodys <= 0 )
    return 0;
  while ( 1 )
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( volumePhysInstId == -1 )
    {
      LODWORD(v10) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v10) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v10) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v10) )
        __debugbreak();
    }
    m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, volumePhysInstId, v7)->m_serialAndIndex;
    HavokPhysics_CollisionQueryResult::Reset(pResult, 0);
    Physics_QueryPoint(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, pos, 0.0, &extendedData, pResult);
    if ( HavokPhysics_CollisionQueryResult::HasHit(pResult) )
      break;
    if ( (int)++v7 >= NumRigidBodys )
      return 0;
  }
  return 1;
}

/*
==============
AINavigator2D::AINavigator2D
==============
*/
void AINavigator2D::AINavigator2D(AINavigator2D *this, gentity_s *pEnt, AINavLayer layer)
{
  vec3_t outUp; 
  vec3_t worldPos; 

  AINavigator::AINavigator(this, pEnt, layer);
  this->__vftable = (AINavigator_vtbl *)&AINavigator2D::`vftable';
  `eh vector constructor iterator'(&this->m_Path, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::pathpoint_t, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
  this->m_Path.m_NumPoints = 20;
  this->m_Path.m_pSpace = NULL;
  nav_path_t::Reset(&this->m_Path);
  this->m_BasePathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&this->m_BasePathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&this->m_BasePathSpec.m_areaPenaltyFlags = -1i64;
  this->m_BasePathSpec.m_usePathSharingPenalty = 0;
  *(_QWORD *)&this->m_BasePathSpec.m_pathSharingPenalty = 0i64;
  this->m_BasePathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&this->m_BasePathSpec.m_penaltyTable);
  this->m_BasePathSpec.m_snapMode = SNAP_CLOSEST;
  this->m_PathSpecOfCurPath.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&this->m_PathSpecOfCurPath.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&this->m_PathSpecOfCurPath.m_areaPenaltyFlags = -1i64;
  this->m_PathSpecOfCurPath.m_usePathSharingPenalty = 0;
  *(_QWORD *)&this->m_PathSpecOfCurPath.m_pathSharingPenalty = 0i64;
  this->m_PathSpecOfCurPath.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&this->m_PathSpecOfCurPath.m_penaltyTable);
  this->m_PathSpecOfCurPath.m_snapMode = SNAP_CLOSEST;
  bfx::AreaHandle::AreaHandle(&this->m_hGoalArea);
  bfx::AreaHandle::AreaHandle(&this->m_hCurArea);
  bfx::LinkReservationRCPtr::LinkReservationRCPtr(&this->m_LinkReservation);
  AINavigator::GetUpVector(this, &outUp);
  this->m_BasePathSpec.m_linkUsageFlags = 1;
  *(_QWORD *)&this->m_BasePathSpec.m_obstacleBlockageFlags = -8065i64;
  Nav_GetClosestVerticalPos(&pEnt->r.currentOrigin, &outUp, layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &worldPos, &this->m_hGoalArea);
  AINavigator::LocalizePosToSpace(this, &worldPos, &this->m_LocalCurSnappedPos);
  AINavigator::WorldifyPosFromSpace(this, &this->m_LocalCurSnappedPos, &this->m_CurSnappedPos);
  this->m_LocalSnappedGoalPos = this->m_LocalCurSnappedPos;
  bfx::AreaHandle::operator=(&this->m_hCurArea, &this->m_hGoalArea);
  this->m_AllowedStances = STANCE_ANY;
  this->m_CurPathPoint = 0;
  *(_QWORD *)this->m_SuppressionIDs = -1i64;
  *(_QWORD *)&this->m_SuppressionIDs[2] = -1i64;
  this->m_bTeamWalkEnabled = 0;
}

/*
==============
AINavigator2D::AINavigator2D
==============
*/
void AINavigator2D::AINavigator2D(AINavigator2D *this)
{
  AINavigator::AINavigator(this);
  this->__vftable = (AINavigator_vtbl *)&AINavigator2D::`vftable';
  `eh vector constructor iterator'(&this->m_Path, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::pathpoint_t, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
  this->m_Path.m_NumPoints = 20;
  this->m_Path.m_pSpace = NULL;
  nav_path_t::Reset(&this->m_Path);
  *(_QWORD *)&this->m_CurPathPoint = 0i64;
  *(_QWORD *)&this->m_BasePathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&this->m_BasePathSpec.m_areaPenaltyFlags = -1i64;
  this->m_BasePathSpec.m_usePathSharingPenalty = 0;
  *(_QWORD *)&this->m_BasePathSpec.m_pathSharingPenalty = 0i64;
  this->m_BasePathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&this->m_BasePathSpec.m_penaltyTable);
  *(_QWORD *)&this->m_BasePathSpec.m_snapMode = 0i64;
  *(_QWORD *)&this->m_PathSpecOfCurPath.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&this->m_PathSpecOfCurPath.m_areaPenaltyFlags = -1i64;
  this->m_PathSpecOfCurPath.m_usePathSharingPenalty = 0;
  *(_QWORD *)&this->m_PathSpecOfCurPath.m_pathSharingPenalty = 0i64;
  this->m_PathSpecOfCurPath.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&this->m_PathSpecOfCurPath.m_penaltyTable);
  this->m_PathSpecOfCurPath.m_snapMode = SNAP_CLOSEST;
  bfx::AreaHandle::AreaHandle(&this->m_hGoalArea);
  bfx::AreaHandle::AreaHandle(&this->m_hCurArea);
  this->m_AllowedStances = STANCE_ANY;
  bfx::LinkReservationRCPtr::LinkReservationRCPtr(&this->m_LinkReservation);
  *(_QWORD *)this->m_SuppressionIDs = -1i64;
  *(_QWORD *)&this->m_SuppressionIDs[2] = -1i64;
}

/*
==============
nav_path_t::nav_path_t
==============
*/
void nav_path_t::nav_path_t(nav_path_t *this)
{
  `eh vector constructor iterator'(this, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::pathpoint_t, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
  this->m_NumPoints = 20;
  this->m_pSpace = NULL;
  nav_path_t::Reset(this);
}

/*
==============
AINavigator2D::AddMultiGoalPathGoal
==============
*/
__int64 AINavigator2D::AddMultiGoalPathGoal(AINavigator2D *this, const vec3_t *goalPos)
{
  __int64 m_NumPoints; 
  bool v5; 
  bfx::PathSpec *p_m_PathSpecOfCurPath; 
  unsigned int m_TimeOfLastPathSuppressed; 
  int v8; 
  bool v9; 
  AINavigator2D *v10; 
  unsigned __int8 v11; 
  float v12; 
  float v13; 
  float v14; 
  bfx::AreaHandle hStartArea; 
  __int64 v17; 
  vec3_t point; 
  vec3_t v19; 
  vec3_t outUp; 
  vec3_t outPoint; 

  v17 = -2i64;
  m_NumPoints = this->m_Path.m_NumPoints;
  v5 = (int)m_NumPoints > 0 && (*(_DWORD *)(&this->m_MaxDeviationFromPath + 12 * m_NumPoints) & 1) == 0;
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2070, ASSERT_TYPE_ASSERT, "( !m_Path.IsIncomplete() )", (const char *)&queryFormat, "!m_Path.IsIncomplete()") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&hStartArea);
  if ( this->m_Path.m_NumPoints <= 0 )
  {
    m_TimeOfLastPathSuppressed = this->m_TimeOfLastPathSuppressed;
    if ( m_TimeOfLastPathSuppressed && level.time - m_TimeOfLastPathSuppressed < 0x5DC )
      goto LABEL_18;
    p_m_PathSpecOfCurPath = &this->m_PathSpecOfCurPath;
    *(__m256i *)&this->m_PathSpecOfCurPath.m_obstacleMode = *(__m256i *)&this->m_BasePathSpec.m_obstacleMode;
    *(__m256i *)&this->m_PathSpecOfCurPath.m_maxSearchDist = *(__m256i *)&this->m_BasePathSpec.m_maxSearchDist;
    *(_OWORD *)&this->m_PathSpecOfCurPath.m_penaltyTable.m_perFlagPenalties[24] = *(_OWORD *)&this->m_BasePathSpec.m_penaltyTable.m_perFlagPenalties[24];
    if ( this->IsInBadPlace(this) )
      this->m_PathSpecOfCurPath.m_obstacleBlockageFlags = 1;
    this->GetCurPos(this, &outPoint);
    bfx::AreaHandle::operator=(&hStartArea, &this->m_hCurArea);
  }
  else
  {
    nav_path_t::TrimLeadingPathPoints(&this->m_Path, this->m_CurPathPoint);
    this->m_CurPathPoint = 0;
    nav_path_t::GetPathPoint(&this->m_Path, this->m_Path.m_NumPoints - 1, &outPoint);
    bfx::AreaHandle::operator=(&hStartArea, (const bfx::AreaHandle *)&this->m_hLink.m_pSpace + 3 * this->m_Path.m_NumPoints);
    p_m_PathSpecOfCurPath = &this->m_PathSpecOfCurPath;
  }
  v8 = this->m_Path.m_NumPoints;
  AINavigator::GetUpVector(this, &outUp);
  Nav_GetClosestVerticalPos(goalPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, p_m_PathSpecOfCurPath, &point, NULL);
  v9 = Nav_PointWithinCylinderWithUp(&point, goalPos, &outUp, 12.0, 72.0);
  v10 = this;
  if ( !v9 )
  {
LABEL_17:
    AINavigator::BadPathNotify(v10, goalPos);
LABEL_18:
    v11 = 0;
    goto LABEL_27;
  }
  if ( !AINavigator2D::ExtendPath(this, &outPoint, &hStartArea, &point) )
  {
    v10 = this;
    goto LABEL_17;
  }
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2052, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  nav_path_t::GetPathPoint(&this->m_Path, this->m_Path.m_NumPoints - 1, &v19);
  v12 = point.v[0];
  v13 = point.v[1];
  v14 = point.v[2];
  if ( (float)((float)((float)((float)(point.v[1] - v19.v[1]) * (float)(point.v[1] - v19.v[1])) + (float)((float)(point.v[0] - v19.v[0]) * (float)(point.v[0] - v19.v[0]))) + (float)((float)(point.v[2] - v19.v[2]) * (float)(point.v[2] - v19.v[2]))) < 4.0 )
  {
    *((_DWORD *)&this->m_MaxDeviationFromPath + 12 * this->m_Path.m_NumPoints) |= 0x400u;
    v14 = point.v[2];
    v13 = point.v[1];
    v12 = point.v[0];
  }
  this->m_SnappedGoalPos.v[0] = v12;
  this->m_SnappedGoalPos.v[1] = v13;
  this->m_SnappedGoalPos.v[2] = v14;
  this->m_RequestedGoalPos.v[0] = goalPos->v[0];
  this->m_RequestedGoalPos.v[1] = goalPos->v[1];
  this->m_RequestedGoalPos.v[2] = goalPos->v[2];
  AINavigator::LocalizePosToSpace(this, &this->m_RequestedGoalPos, &this->m_LocalRequestedGoalPos);
  AINavigator::LocalizePosToSpace(this, &this->m_SnappedGoalPos, &this->m_LocalSnappedGoalPos);
  *(_WORD *)&this->m_bMultiGoalPath = 257;
  this->m_bPathingOutOfBounds = 0;
  if ( v8 <= 0 )
    this->m_TimeOfLastPathUpdate = level.time;
  v11 = 1;
LABEL_27:
  bfx::AreaHandle::~AreaHandle(&hStartArea);
  return v11;
}

/*
==============
AINavigator2D::AdjustCornerForTeamWalking
==============
*/
__int64 AINavigator2D::AdjustCornerForTeamWalking(AINavigator2D *this, int iCorner, const vec3_t *prevLocalCorner, const bfx::AreaHandle *hPrevArea)
{
  __int64 v5; 
  int v7; 
  __int64 v8; 
  nav_path_t::pathpoint_t *v9; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  float v21; 
  __int128 v22; 
  float v26; 
  __int128 v27; 
  __int128 v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  float v35; 
  unsigned __int8 v39; 
  int outClosestPos; 
  int hHintArea; 
  bfx::AreaHandle hEndArea; 
  bfx::AreaHandle *hStartArea; 
  __int64 v45; 
  vec3_t outWorldPos; 
  vec3_t outUp; 
  vec3_t localPos; 
  vec3_t startPos; 
  vec3_t outPoint; 

  v45 = -2i64;
  hStartArea = (bfx::AreaHandle *)hPrevArea;
  v5 = iCorner;
  v7 = iCorner + 1;
  if ( (unsigned int)(iCorner + 1) >= this->m_Path.m_NumPoints )
  {
    hHintArea = this->m_Path.m_NumPoints;
    outClosestPos = iCorner + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1978, ASSERT_TYPE_ASSERT, "(unsigned)( iNextCorner ) < (unsigned)( m_Path.m_NumPoints )", "iNextCorner doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", outClosestPos, hHintArea) )
      __debugbreak();
  }
  v8 = v5;
  v9 = &this->m_Path.m_Points[v5];
  Nav_GetSpaceUp(this->m_pSpace, &outUp);
  v10 = v9->m_LocalPos.v[0] - prevLocalCorner->v[0];
  v11 = LODWORD(this->m_Path.m_Points[v5].m_LocalPos.v[1]);
  v13 = v11;
  *(float *)&v13 = *(float *)&v11 - prevLocalCorner->v[1];
  v12 = v13;
  v14 = this->m_Path.m_Points[v5].m_LocalPos.v[2];
  v15 = v14 - prevLocalCorner->v[2];
  v16 = 2 * (3 * v5 + 3);
  v18 = LODWORD(v9->m_LocalPos.v[0]);
  *(float *)&v18 = v9->m_LocalPos.v[0] - this->m_Path.m_Points[0].m_LocalPos.v[2 * v16];
  v17 = v18;
  v20 = LODWORD(v9->m_LocalPos.v[1]);
  *(float *)&v20 = *(float *)&v11 - this->m_Path.m_Points[0].m_LocalPos.v[2 * v16 + 1];
  v19 = v20;
  v21 = v14 - this->m_Path.m_Points[0].m_LocalPos.v[2 * v16 + 2];
  v22 = v12;
  *(float *)&v22 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(v10 * v10)) + (float)(v15 * v15));
  _XMM3 = v22;
  __asm
  {
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm1, xmm3, xmm12, xmm0
  }
  v26 = 1.0 / *(float *)&_XMM1;
  v27 = v19;
  *(float *)&v27 = fsqrt((float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(*(float *)&v17 * *(float *)&v17)) + (float)(v21 * v21));
  _XMM3 = v27;
  __asm
  {
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm1, xmm3, xmm12, xmm0
  }
  v31 = v17;
  *(float *)&v31 = (float)(*(float *)&v17 * (float)(1.0 / *(float *)&_XMM1)) + (float)(v10 * v26);
  *(float *)&v17 = (float)(*(float *)&v19 * (float)(1.0 / *(float *)&_XMM1)) + (float)(*(float *)&v12 * v26);
  v32 = (float)(v21 * (float)(1.0 / *(float *)&_XMM1)) + (float)(v15 * v26);
  *(float *)&v19 = *(float *)&v31 * 0.5;
  *(float *)&v31 = (float)((float)((float)(*(float *)&v31 * 0.5) * outUp.v[0]) + (float)((float)(*(float *)&v17 * 0.5) * outUp.v[1])) + (float)((float)(v32 * 0.5) * outUp.v[2]);
  v33 = (float)(COERCE_FLOAT(v31 ^ _xmm) * outUp.v[0]) + *(float *)&v19;
  v34 = v31 ^ _xmm;
  v35 = (float)(*(float *)&v34 * outUp.v[1]) + (float)(*(float *)&v17 * 0.5);
  *(float *)&v19 = (float)(*(float *)&v34 * outUp.v[2]) + (float)(v32 * 0.5);
  *(float *)&v34 = fsqrt((float)((float)(v35 * v35) + (float)(v33 * v33)) + (float)(*(float *)&v19 * *(float *)&v19));
  _XMM4 = v34;
  __asm
  {
    vcmpless xmm0, xmm4, xmm11
    vblendvps xmm1, xmm4, xmm12, xmm0
  }
  localPos.v[0] = (float)((float)(v33 * (float)(1.0 / *(float *)&_XMM1)) * 16.0) + v9->m_LocalPos.v[0];
  localPos.v[1] = (float)((float)(v35 * (float)(1.0 / *(float *)&_XMM1)) * 16.0) + *(float *)&v11;
  localPos.v[2] = (float)((float)(*(float *)&v19 * (float)(1.0 / *(float *)&_XMM1)) * 16.0) + v14;
  Nav_SpaceConvertLocalToWorld(this->m_pSpace, &localPos, &outWorldPos);
  bfx::AreaHandle::AreaHandle(&hEndArea);
  Nav_GetClosestVerticalPosWithHint(&outWorldPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_PathSpecOfCurPath, &outWorldPos, &this->m_Path.m_Points[v8].m_hArea, &hEndArea);
  Nav_SpaceConvertLocalToWorld(this->m_pSpace, prevLocalCorner, &startPos);
  nav_path_t::GetPathPoint(&this->m_Path, v7, &outPoint);
  if ( Nav_IsStraightLineReachable(&startPos, hStartArea, &outWorldPos, &hEndArea, &this->m_PathSpecOfCurPath) && Nav_IsStraightLineReachable(&outWorldPos, &hEndArea, &outPoint, (const bfx::AreaHandle *)((char *)&this->m_Path.m_Points[0].m_hArea + 8 * v16), &this->m_PathSpecOfCurPath) )
  {
    Nav_SpaceConvertWorldToLocal(this->m_pSpace, &outWorldPos, &v9->m_LocalPos);
    this->m_Path.m_Points[v8].m_Flags |= 0x20u;
    bfx::AreaHandle::operator=(&this->m_Path.m_Points[v8].m_hArea, &hEndArea);
    v39 = 1;
  }
  else
  {
    v39 = 0;
  }
  bfx::AreaHandle::~AreaHandle(&hEndArea);
  return v39;
}

/*
==============
AINavigator2D::AdjustCornersForTeamWalking
==============
*/
void AINavigator2D::AdjustCornersForTeamWalking(AINavigator2D *this)
{
  int m_NumPoints; 
  unsigned int m_CurPathPoint; 
  __int64 v4; 
  __int64 v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  int Navigator2DMaxCount; 
  __int64 v11; 
  __int64 v12; 
  float *v13; 
  float *v14; 
  __int64 v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  int v27; 
  vec3_t prevLocalCorner; 

  if ( this->m_bTeamWalkEnabled )
  {
    m_NumPoints = this->m_Path.m_NumPoints;
    if ( m_NumPoints > 0 )
    {
      m_CurPathPoint = this->m_CurPathPoint;
      if ( m_CurPathPoint >= m_NumPoints )
      {
        v27 = m_NumPoints;
        v25 = m_CurPathPoint;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1907, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurPathPoint ) < (unsigned)( m_Path.m_NumPoints )", "m_CurPathPoint doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", v25, v27) )
          __debugbreak();
      }
      v4 = this->m_CurPathPoint;
      if ( (this->m_Path.m_Points[v4].m_Flags & 0x407) == 0 && (_DWORD)v4 != this->m_Path.m_NumPoints - 1 )
      {
        if ( !this->m_pEnt->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1915, ASSERT_TYPE_ASSERT, "(m_pEnt->sentient)", (const char *)&queryFormat, "m_pEnt->sentient") )
          __debugbreak();
        v5 = this->m_CurPathPoint;
        prevLocalCorner.v[0] = this->m_Path.m_Points[v5].m_LocalPos.v[0];
        v6 = prevLocalCorner.v[0] - this->m_LocalCurSnappedPos.v[0];
        prevLocalCorner.v[1] = this->m_Path.m_Points[v5].m_LocalPos.v[1];
        v7 = prevLocalCorner.v[1] - this->m_LocalCurSnappedPos.v[1];
        v8 = this->m_Path.m_Points[v5].m_LocalPos.v[2] - this->m_LocalCurSnappedPos.v[2];
        prevLocalCorner.v[2] = this->m_Path.m_Points[v5].m_LocalPos.v[2];
        v9 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8));
        if ( v9 >= 48.0 )
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AITeamWalking");
          Navigator2DMaxCount = Nav_GetNavigator2DMaxCount();
          v11 = Navigator2DMaxCount;
          if ( Navigator2DMaxCount > 0 )
          {
            v12 = 0i64;
            v13 = &s_Navigators2D.m_LocalCurSnappedPos.v[2];
            while ( 1 )
            {
              v14 = v13 - 23;
              if ( v13 - 23 != (float *)this && *((_BYTE *)v13 + 80) && (*(unsigned __int8 (__fastcall **)(float *))(*(_QWORD *)v14 + 144i64))(v13 - 23) )
              {
                if ( !*(_QWORD *)(v13 - 21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1936, ASSERT_TYPE_ASSERT, "(pOtherNav->m_pEnt)", (const char *)&queryFormat, "pOtherNav->m_pEnt") )
                  __debugbreak();
                v15 = *(_QWORD *)(*(_QWORD *)(v13 - 21) + 344i64);
                if ( v15 && *(_DWORD *)(v15 + 16) == this->m_pEnt->sentient->eTeam && *(nav_space_s **)(v13 - 19) == this->m_pSpace )
                {
                  if ( *((_DWORD *)v13 + 273) >= *((_DWORD *)v13 + 267) )
                  {
                    *(float *)&v26 = v13[267];
                    *(float *)&v24 = v13[273];
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1944, ASSERT_TYPE_ASSERT, "(unsigned)( pOtherNav->m_CurPathPoint ) < (unsigned)( pOtherNav->m_Path.m_NumPoints )", "pOtherNav->m_CurPathPoint doesn't index pOtherNav->m_Path.m_NumPoints\n\t%i not in [0, %i)", v24, v26) )
                      __debugbreak();
                  }
                  v16 = *((int *)v13 + 273);
                  v17 = v14[12 * v16 + 51];
                  v18 = v14[12 * v16 + 50];
                  v19 = v14[12 * v16 + 52];
                  if ( (float)((float)((float)((float)(v17 - prevLocalCorner.v[1]) * (float)(v17 - prevLocalCorner.v[1])) + (float)((float)(v18 - prevLocalCorner.v[0]) * (float)(v18 - prevLocalCorner.v[0]))) + (float)((float)(v19 - prevLocalCorner.v[2]) * (float)(v19 - prevLocalCorner.v[2]))) <= 144.0 )
                  {
                    v20 = fsqrt((float)((float)((float)(v17 - *(v13 - 1)) * (float)(v17 - *(v13 - 1))) + (float)((float)(v18 - *(v13 - 2)) * (float)(v18 - *(v13 - 2)))) + (float)((float)(v19 - *v13) * (float)(v19 - *v13))) - v9;
                    if ( v20 <= 0.0 && (float)(v20 * v20) <= 5184.0 && AINavigator2D::AdjustCornerForTeamWalking(this, this->m_CurPathPoint, &this->m_LocalCurSnappedPos, &this->m_hCurArea) )
                      break;
                  }
                }
              }
              ++v12;
              v13 += 368;
              if ( v12 >= v11 )
                goto LABEL_36;
            }
            v21 = this->m_CurPathPoint;
            if ( (int)v21 + 2 < this->m_Path.m_NumPoints )
            {
              v22 = 2 * (3 * v21 + 3);
              if ( (*((_DWORD *)&this->m_CurSnappedPos + 12 * v21 + 53) & 0x407) == 0 )
              {
                v23 = v21 + 1;
                if ( *(&this->m_Path.m_Points[0].m_Length + 2 * v22) < 24.0 )
                  AINavigator2D::AdjustCornerForTeamWalking(this, v23, &prevLocalCorner, &this->m_Path.m_Points[this->m_CurPathPoint].m_hArea);
              }
            }
          }
LABEL_36:
          Sys_ProfEndNamedEvent();
        }
      }
    }
  }
}

/*
==============
nav_path_t::AppendPathPoints
==============
*/
__int64 nav_path_t::AppendPathPoints(nav_path_t *this, const nav_path_t::pathpoint_t *pPoints, int numPoints)
{
  int v3; 
  char v7; 
  unsigned int v8; 
  float *v9; 
  __int64 v10; 
  __int64 m_NumPoints; 
  float v12; 
  float v13; 
  float v14; 
  int v15; 
  __int64 v16; 

  v3 = 0;
  v7 = 1;
  v8 = 0;
  if ( numPoints <= 0 )
    return 0i64;
  v9 = &pPoints->m_LocalPos.v[1];
  v10 = 0i64;
  do
  {
    m_NumPoints = this->m_NumPoints;
    if ( (int)m_NumPoints >= 20 )
      break;
    if ( v3 || (v12 = this->m_Points[m_NumPoints - 1].m_LocalPos.v[0] - *(v9 - 1), v13 = this->m_Points[m_NumPoints - 1].m_LocalPos.v[1] - *v9, v14 = this->m_Points[m_NumPoints - 1].m_LocalPos.v[2] - v9[1], (float)((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14)) >= 1.0) )
    {
      if ( v7 && this->m_Points[m_NumPoints - 1].m_LocalPos.v[0] == *(v9 - 1) && this->m_Points[m_NumPoints - 1].m_LocalPos.v[1] == *v9 && this->m_Points[m_NumPoints - 1].m_LocalPos.v[2] == v9[1] )
      {
        Nav_PrintPath("Current path points: (local space):", this->m_Points, m_NumPoints);
        Nav_PrintPath("Extended path points:", pPoints, numPoints);
        v16 = this->m_NumPoints;
        if ( this->m_Points[v16 - 1].m_LocalPos.v[0] == *(v9 - 1) && this->m_Points[v16 - 1].m_LocalPos.v[1] == *v9 && this->m_Points[v16 - 1].m_LocalPos.v[2] == v9[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4324, ASSERT_TYPE_ASSERT, "( !Vec3Compare( pPoints[ iPoint ].m_LocalPos, m_Points[ m_NumPoints - 1 ].m_LocalPos ) )", "Duped path point.  See console for details.") )
          __debugbreak();
        LODWORD(m_NumPoints) = this->m_NumPoints;
      }
      v7 = 0;
      nav_path_t::CopyPathPoint(this, &pPoints[v3], &this->m_Points[(int)m_NumPoints]);
      ++this->m_NumPoints;
      ++v8;
    }
    else if ( this->m_Points[m_NumPoints - 1].m_LinkID == -1 )
    {
      v15 = *((_DWORD *)v9 + 3);
      if ( v15 == -1 || ((_BYTE)v9[2] & 2) == 0 )
      {
        Nav_PrintPath("Current path points: (local space):", this->m_Points, m_NumPoints);
        Nav_PrintPath("Extended path points:", pPoints, numPoints);
      }
      else
      {
        this->m_Points[m_NumPoints - 1].m_LinkID = v15;
        this->m_Points[this->m_NumPoints - 1].m_Flags |= *((_DWORD *)v9 + 2);
      }
    }
    ++v3;
    ++v10;
    v9 += 12;
  }
  while ( v3 < numPoints );
  return v8;
}

/*
==============
AINavigator2D::ApplySuppressionPlanes
==============
*/
void AINavigator2D::ApplySuppressionPlanes(AINavigator2D *this)
{
  __int64 iPlaneCount; 
  int v2; 
  __int64 v4; 
  unsigned int *i; 
  int v6; 
  float *fDist; 
  __int64 v8; 
  PathBlockPlanes *v9; 
  unsigned int v10; 
  int v11; 
  nav_obstacle_s *ObstacleByID; 
  float v13; 
  unsigned int *m_SuppressionIDs; 
  __int64 v15; 
  unsigned int *v16; 
  int v17; 
  unsigned int blockageFlags; 
  PathBlockPlanes *p_m_BlockPlanes; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  vec3_t dir; 
  vec3_t start; 
  vec3_t result; 
  Bounds bounds; 
  vec3_t angles; 

  iPlaneCount = this->m_BlockPlanes.iPlaneCount;
  v2 = 0;
  if ( !(_DWORD)iPlaneCount )
  {
    v4 = 0i64;
    for ( i = this->m_SuppressionIDs; *i == -1; ++i )
    {
      if ( ++v4 >= 4 )
        return;
    }
LABEL_20:
    m_SuppressionIDs = this->m_SuppressionIDs;
    v15 = 4i64;
    v16 = this->m_SuppressionIDs;
    do
    {
      if ( *v16 != -1 )
      {
        Nav_DestroyObstacleByID(*v16);
        *v16 = -1;
      }
      ++v16;
      --v15;
    }
    while ( v15 );
    if ( this->m_BlockPlanes.iPlaneCount > 0 )
    {
      v17 = AINavigator2D::ReserveSuppression(this);
      blockageFlags = AINavigator2D::GetSuppressionObstacleMask(this, v17);
      if ( this->m_BlockPlanes.iPlaneCount > 0 )
      {
        p_m_BlockPlanes = &this->m_BlockPlanes;
        do
        {
          v20 = p_m_BlockPlanes->vNormal[0].v[0];
          v21 = p_m_BlockPlanes->vNormal[0].v[1];
          v22 = v21 * *((float *)m_SuppressionIDs - 5);
          start.v[0] = p_m_BlockPlanes->vNormal[0].v[0] * *((float *)m_SuppressionIDs - 5);
          v23 = this->m_CurSnappedPos.v[2];
          start.v[1] = v22;
          start.v[2] = v23;
          LODWORD(dir.v[1]) = LODWORD(v20) ^ _xmm;
          dir.v[0] = v21;
          dir.v[2] = 0.0;
          PointOnLineClosestToPoint(&this->m_CurSnappedPos, &start, &dir, &result);
          bounds.midPoint = result;
          bounds.halfSize.v[0] = FLOAT_256_0;
          bounds.halfSize.v[1] = FLOAT_6_0;
          bounds.halfSize.v[2] = FLOAT_36_0;
          vectoangles(&dir, &angles);
          *m_SuppressionIDs++ = Nav_CreateObstacleByBounds(this->m_pSpace, &bounds, &angles, 13.0, 1 << this->m_Layer, blockageFlags);
          ++v2;
          p_m_BlockPlanes = (PathBlockPlanes *)((char *)p_m_BlockPlanes + 8);
        }
        while ( v2 < this->m_BlockPlanes.iPlaneCount );
      }
      this->m_SuppressionTimestamp = level.time;
    }
    return;
  }
  if ( LODWORD(this->m_BlockPlanes.fDist[iPlaneCount + 4]) == -1 )
    goto LABEL_20;
  v6 = 0;
  fDist = this->m_BlockPlanes.fDist;
  v8 = 0i64;
  v9 = &this->m_BlockPlanes;
  do
  {
    v10 = *((_DWORD *)fDist + 5);
    v11 = this->m_BlockPlanes.iPlaneCount;
    if ( v10 == -1 )
      break;
    if ( v6 >= v11 )
      goto LABEL_20;
    ObstacleByID = Nav_GetObstacleByID(v10);
    if ( !ObstacleByID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2589, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
      __debugbreak();
    if ( !ObstacleByID->m_bUsesExtents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2590, ASSERT_TYPE_ASSERT, "( pObstacle->m_bUsesExtents )", (const char *)&queryFormat, "pObstacle->m_bUsesExtents") )
      __debugbreak();
    v13 = (float)((float)(v9->vNormal[0].v[1] * ObstacleByID->pos.v[1]) + (float)(ObstacleByID->pos.v[0] * v9->vNormal[0].v[0])) - *fDist;
    if ( (float)(v13 * v13) > 0.0000010000001 )
      goto LABEL_20;
    ++v6;
    ++v8;
    ++fDist;
    v9 = (PathBlockPlanes *)((char *)v9 + 8);
  }
  while ( v8 < 4 );
  if ( v6 < v11 )
    goto LABEL_20;
}

/*
==============
AINavigator2D::CanAddMultiGoalPathGoal
==============
*/
bool AINavigator2D::CanAddMultiGoalPathGoal(AINavigator2D *this)
{
  __int64 m_NumPoints; 

  if ( this->m_Path.m_NumPoints <= 0 )
    return 1;
  m_NumPoints = this->m_Path.m_NumPoints;
  return (int)m_NumPoints <= 0 || (*(_DWORD *)(&this->m_MaxDeviationFromPath + 12 * m_NumPoints) & 1) != 0;
}

/*
==============
AINavigator2D::ClaimNextTraversal
==============
*/
bool AINavigator2D::ClaimNextTraversal(AINavigator2D *this)
{
  __int64 m_NumPoints; 
  __int64 m_CurPathPoint; 
  __int64 v4; 
  unsigned int *i; 
  const bfx::LinkReservationRCPtr *v7; 
  bool IsValid; 
  __int64 v9; 
  int v10; 
  bfx::LinkHandle phLink; 
  bfx::LinkReservationRCPtr result; 

  if ( !((unsigned __int8 (__fastcall *)(AINavigator2D *))this->HasTraversalWithin)(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1082, ASSERT_TYPE_ASSERT, "( HasTraversalWithin( 3.402823466e+38F ) )", (const char *)&queryFormat, "HasTraversalWithin( FLT_MAX )") )
    __debugbreak();
  m_NumPoints = this->m_Path.m_NumPoints;
  if ( (int)m_NumPoints <= 0 )
    return 0;
  m_CurPathPoint = this->m_CurPathPoint;
  v4 = m_CurPathPoint;
  if ( m_CurPathPoint >= m_NumPoints )
    return 0;
  for ( i = &this->m_Path.m_Points[m_CurPathPoint].m_Flags; (*(_BYTE *)i & 2) == 0; i += 12 )
  {
    LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
    if ( ++v4 >= this->m_Path.m_NumPoints )
      return 0;
  }
  bfx::LinkHandle::LinkHandle(&phLink);
  if ( (unsigned int)m_CurPathPoint >= this->m_Path.m_NumPoints )
  {
    v10 = this->m_Path.m_NumPoints;
    LODWORD(v9) = m_CurPathPoint;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  Nav_GetLinkByID(this->m_Path.m_Points[(int)m_CurPathPoint].m_LinkID, &phLink);
  v7 = bfx::ReserveLink(&result, &phLink);
  bfx::LinkReservationRCPtr::operator=(&this->m_LinkReservation, v7);
  bfx::LinkReservationRCPtr::~LinkReservationRCPtr(&result);
  IsValid = bfx::LinkReservationRCPtr::IsValid(&this->m_LinkReservation);
  bfx::LinkHandle::~LinkHandle(&phLink);
  return IsValid;
}

/*
==============
AINavigator2D::CleanupAll
==============
*/
void AINavigator2D::CleanupAll(void)
{
  __int16 **v0; 
  unsigned int i; 
  unsigned int *v2; 
  __int64 v3; 
  __int16 *v4; 
  __int64 v5; 
  bfx::AreaHandle *v6; 
  __int64 v7; 

  v0 = (__int16 **)&unk_14A50FCC8;
  for ( i = 0; i < 0x110; ++i )
  {
    if ( *((_BYTE *)v0 - 1020) )
    {
      if ( !*(v0 - 148) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 124, ASSERT_TYPE_ASSERT, "(m_pEnt)", (const char *)&queryFormat, "m_pEnt") )
        __debugbreak();
      Nav_ClearLinkWeightsForEnt(**(v0 - 148));
      v2 = (unsigned int *)(v0 + 30);
      v3 = 4i64;
      do
      {
        if ( *v2 != -1 )
        {
          Nav_DestroyObstacleByID(*v2);
          *v2 = -1;
        }
        ++v2;
        --v3;
      }
      while ( v3 );
      v4 = *(v0 - 148);
      v5 = 0i64;
      *(_DWORD *)v0 &= 0xFFFFF0FF;
      *((_DWORD *)v0 + 59) = 0;
      while ( s_SuppressionObstacleReservations[v5] != *v4 )
      {
        if ( ++v5 >= 4 )
          goto LABEL_15;
      }
      s_SuppressionObstacleReservations[v5] = 2047;
LABEL_15:
      AINavigator::Free((AINavigator *)(v0 - 149));
      bfx::AreaHandle::Release((bfx::AreaHandle *)((char *)v0 + 172));
      bfx::AreaHandle::Release((bfx::AreaHandle *)((char *)v0 + 156));
      bfx::LinkReservationRCPtr::Release((bfx::LinkReservationRCPtr *)v0 + 33);
      nav_path_t::Reset((nav_path_t *)(v0 - 124));
      v6 = (bfx::AreaHandle *)(v0 - 120);
      v7 = 20i64;
      do
      {
        if ( bfx::AreaHandle::IsValid(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 139, ASSERT_TYPE_ASSERT, "(!m_Path.m_Points[ iPoint ].m_hArea.IsValid())", (const char *)&queryFormat, "!m_Path.m_Points[ iPoint ].m_hArea.IsValid()") )
          __debugbreak();
        v6 += 3;
        --v7;
      }
      while ( v7 );
    }
    v0 += 184;
  }
}

/*
==============
AINavigator2D::ClearAllSuppression
==============
*/
void AINavigator2D::ClearAllSuppression(AINavigator2D *this)
{
  unsigned int *m_SuppressionIDs; 
  __int64 v3; 
  gentity_s *m_pEnt; 
  int v5; 
  int number; 
  int *v7; 

  m_SuppressionIDs = this->m_SuppressionIDs;
  v3 = 4i64;
  do
  {
    if ( *m_SuppressionIDs != -1 )
    {
      Nav_DestroyObstacleByID(*m_SuppressionIDs);
      *m_SuppressionIDs = -1;
    }
    ++m_SuppressionIDs;
    --v3;
  }
  while ( v3 );
  m_pEnt = this->m_pEnt;
  v5 = 0;
  this->m_BasePathSpec.m_obstacleBlockageFlags &= 0xFFFFF0FF;
  this->m_BlockPlanes.iPlaneCount = 0;
  number = m_pEnt->s.number;
  v7 = s_SuppressionObstacleReservations;
  while ( *v7 != number )
  {
    ++v5;
    if ( (__int64)++v7 >= (__int64)&unk_14A571430 )
      return;
  }
  s_SuppressionObstacleReservations[v5] = 2047;
}

/*
==============
AINavigator2D::ClearCachedData
==============
*/
void AINavigator2D::ClearCachedData(const nav_space_s *pSpace)
{
  signed int maxSentients; 
  __int64 v3; 
  AINavigator *v4; 

  maxSentients = level.maxSentients;
  if ( level.maxSentients > 0x110 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", level.maxSentients, 272) )
      __debugbreak();
    maxSentients = level.maxSentients;
  }
  v3 = maxSentients;
  if ( maxSentients > 0 )
  {
    v4 = &s_Navigators2D;
    do
    {
      if ( v4->m_bInUse && v4->m_pSpace == pSpace )
        v4->WorldChanged(v4);
      v4 = (AINavigator *)((char *)v4 + 1472);
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
AINavigator2D::ClearGoal
==============
*/
void AINavigator2D::ClearGoal(AINavigator2D *this)
{
  AINavigator::ClearGoal(this);
  bfx::AreaHandle::operator=(&this->m_hGoalArea, &this->m_hCurArea);
}

/*
==============
AINavigator2D::ClearNavigatorsFromSpace
==============
*/
void AINavigator2D::ClearNavigatorsFromSpace(nav_space_s *pOldSpace, nav_space_s *pNewSpace)
{
  signed int maxSentients; 
  __int64 v5; 
  AINavigator *v6; 
  nav_space_s *v7; 
  nav_space_s *(__fastcall *FindMostLikelySpace)(AINavigator *, const vec3_t *, const AINavLayer, nav_space_s *); 
  AINavLayer Layer; 
  vec3_t outCurPos; 

  maxSentients = level.maxSentients;
  if ( level.maxSentients > 0x110 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", level.maxSentients, 272) )
      __debugbreak();
    maxSentients = level.maxSentients;
  }
  v5 = maxSentients;
  if ( maxSentients > 0 )
  {
    v6 = &s_Navigators2D;
    do
    {
      if ( v6->m_bInUse && v6->m_pSpace == pOldSpace )
      {
        if ( pNewSpace )
        {
          v7 = pNewSpace;
        }
        else
        {
          Nav_GetPos(v6, &outCurPos);
          FindMostLikelySpace = v6->FindMostLikelySpace;
          Layer = Nav_GetLayer(v6);
          v7 = FindMostLikelySpace(v6, &outCurPos, (const AINavLayer)Layer, pOldSpace);
        }
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3834, ASSERT_TYPE_ASSERT, "( pDestinationSpace )", (const char *)&queryFormat, "pDestinationSpace") )
          __debugbreak();
        Nav_MoveNavigatorToSpace(v6, v7);
      }
      v6 = (AINavigator *)((char *)v6 + 1472);
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
AINavigator2D::ClearPath
==============
*/
void AINavigator2D::ClearPath(AINavigator2D *this)
{
  __int64 m_NumPoints; 
  __int64 v3; 
  bfx::AreaHandle *p_m_hArea; 

  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1643, ASSERT_TYPE_ASSERT, "(m_pEnt)", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  AINavigator::ClearPath(this);
  Nav_ClearLinkWeightsForEnt(this->m_pEnt->s.number);
  nav_path_t::Reset(&this->m_Path);
  m_NumPoints = this->m_Path.m_NumPoints;
  this->m_CurPathPoint = 0;
  this->m_bAllowSkipMultigoalPoint = 0;
  this->m_bPathReevalRequested = 0;
  if ( (int)m_NumPoints < 20 )
  {
    v3 = (unsigned int)(20 - m_NumPoints);
    p_m_hArea = &this->m_Path.m_Points[m_NumPoints].m_hArea;
    do
    {
      if ( bfx::AreaHandle::IsValid(p_m_hArea) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1657, ASSERT_TYPE_ASSERT, "(!m_Path.m_Points[iPoint].m_hArea.IsValid())", (const char *)&queryFormat, "!m_Path.m_Points[iPoint].m_hArea.IsValid()") )
        __debugbreak();
      p_m_hArea += 3;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
AINavigator2D::ClearPenaltyTable
==============
*/
void AINavigator2D::ClearPenaltyTable(AINavigator2D *this)
{
  unsigned int v1; 
  char *v2; 

  v1 = 0;
  v2 = &this->m_BasePathSpec.m_penaltyTable.m_perFlagPenalties[1];
  do
  {
    *(_QWORD *)(v2 - 1) = 0i64;
    v1 += 32;
    *(_QWORD *)(v2 + 7) = 0i64;
    *(_QWORD *)(v2 + 15) = 0i64;
    *(_QWORD *)(v2 + 23) = 0i64;
    v2 += 32;
  }
  while ( v1 < 0x20 );
}

/*
==============
AINavigator2D::ClearSuppressionObstacleIdx
==============
*/
void AINavigator2D::ClearSuppressionObstacleIdx(AINavigator2D *this)
{
  this->m_BasePathSpec.m_obstacleBlockageFlags &= 0xFFFFF0FF;
}

/*
==============
AINavigator2D::ClearSuppressionPlanes
==============
*/
void AINavigator2D::ClearSuppressionPlanes(AINavigator2D *this, bool bClearBlockPlanes)
{
  unsigned int *m_SuppressionIDs; 
  __int64 v5; 

  m_SuppressionIDs = this->m_SuppressionIDs;
  v5 = 4i64;
  do
  {
    if ( *m_SuppressionIDs != -1 )
    {
      Nav_DestroyObstacleByID(*m_SuppressionIDs);
      *m_SuppressionIDs = -1;
    }
    ++m_SuppressionIDs;
    --v5;
  }
  while ( v5 );
  if ( bClearBlockPlanes )
    this->m_BlockPlanes.iPlaneCount = 0;
}

/*
==============
AINavigator2D::ClearSuppressionReservation
==============
*/
void AINavigator2D::ClearSuppressionReservation(AINavigator2D *this)
{
  int v1; 
  int number; 
  int *v3; 

  v1 = 0;
  number = this->m_pEnt->s.number;
  v3 = s_SuppressionObstacleReservations;
  while ( *v3 != number )
  {
    ++v1;
    if ( (__int64)++v3 >= (__int64)&unk_14A571430 )
      return;
  }
  s_SuppressionObstacleReservations[v1] = 2047;
}

/*
==============
AINavigator2D::ConvertCornerData
==============
*/
void AINavigator2D::ConvertCornerData(AINavigator2D *this, const nav_cornerdata_2D_t *fromCorner, nav_cornerdata_t *pToCorner)
{
  if ( !pToCorner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3773, ASSERT_TYPE_ASSERT, "( pToCorner )", (const char *)&queryFormat, "pToCorner") )
    __debugbreak();
  pToCorner->m_Pos.v[0] = fromCorner->m_Pos.v[0];
  pToCorner->m_Pos.v[1] = fromCorner->m_Pos.v[1];
  pToCorner->m_Pos.v[2] = fromCorner->m_Pos.v[2];
  pToCorner->m_LinkType = fromCorner->m_LinkType;
  bfx::LinkHandle::operator=(&pToCorner->m_hLink, &fromCorner->m_hLink);
  pToCorner->m_bBackwardsLink = fromCorner->m_bBackwardsLink;
  pToCorner->m_bIsGoal = fromCorner->m_bIsGoal;
  pToCorner->m_pathPointIndex = fromCorner->m_pathPointIndex;
}

/*
==============
nav_path_t::CopyPathPoint
==============
*/
void nav_path_t::CopyPathPoint(nav_path_t *this, const nav_path_t::pathpoint_t *pSrc, nav_path_t::pathpoint_t *pDest)
{
  if ( !pSrc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4269, ASSERT_TYPE_ASSERT, "( pSrc )", (const char *)&queryFormat, "pSrc") )
    __debugbreak();
  if ( !pDest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4270, ASSERT_TYPE_ASSERT, "( pDest )", (const char *)&queryFormat, "pDest") )
    __debugbreak();
  pDest->m_LocalPos.v[0] = pSrc->m_LocalPos.v[0];
  pDest->m_LocalPos.v[1] = pSrc->m_LocalPos.v[1];
  pDest->m_LocalPos.v[2] = pSrc->m_LocalPos.v[2];
  bfx::AreaHandle::operator=(&pDest->m_hArea, &pSrc->m_hArea);
  pDest->m_Flags = pSrc->m_Flags;
  pDest->m_LinkID = pSrc->m_LinkID;
  pDest->m_Length = pSrc->m_Length;
  pDest->m_CornerAngle = pSrc->m_CornerAngle;
  pDest->m_TightQuartersRemainingLength = pSrc->m_TightQuartersRemainingLength;
}

/*
==============
AINavigator2D::DoPathFind
==============
*/
char AINavigator2D::DoPathFind(AINavigator2D *this)
{
  bfx::PathSpec *pPathSpec; 
  bfx::PathSpec *p_m_PathSpecOfCurPath; 
  unsigned int m_TimeOfLastPathSuppressed; 
  char v6; 
  bfx::PolylinePathRCPtr path; 
  nav_pathfind_input_t pInput; 
  __int64 v9; 
  vec3_t point; 
  bfx::Vector3 result; 
  vec3_t outUp; 
  vec3_t targetPos; 
  char v14[16]; 

  v9 = -2i64;
  pPathSpec = &this->m_BasePathSpec;
  p_m_PathSpecOfCurPath = &this->m_PathSpecOfCurPath;
  if ( !this->m_bPathRequested )
  {
    *(__m256i *)&p_m_PathSpecOfCurPath->m_obstacleMode = *(__m256i *)&pPathSpec->m_obstacleMode;
    *(__m256i *)&this->m_PathSpecOfCurPath.m_maxSearchDist = *(__m256i *)&this->m_BasePathSpec.m_maxSearchDist;
    *(_OWORD *)&this->m_PathSpecOfCurPath.m_penaltyTable.m_perFlagPenalties[24] = *(_OWORD *)&this->m_BasePathSpec.m_penaltyTable.m_perFlagPenalties[24];
  }
  if ( this->IsInBadPlace(this) )
    this->m_PathSpecOfCurPath.m_obstacleBlockageFlags = 1;
  AINavigator2D::FixUpStartAreaIfNecessary(this);
  AINavigator2D::FixUpGoalAreaIfNecessary(this);
  m_TimeOfLastPathSuppressed = this->m_TimeOfLastPathSuppressed;
  if ( m_TimeOfLastPathSuppressed && level.time - m_TimeOfLastPathSuppressed < 0x5DC )
    return 1;
  this->GetCurPos(this, (vec3_t *)v14);
  this->GetRequestedGoalPos(this, &targetPos);
  AINavigator::GetUpVector(this, &outUp);
  Nav_GetClosestVerticalPos(&targetPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, pPathSpec, &point, NULL);
  if ( Nav_PointWithinCylinderWithUp(&point, &targetPos, &outUp, 12.0, 72.0) )
  {
    bfx::SpaceHandle::GetPos(&this->m_pSpace->hSpace, &result);
    bfx::LinkHandle::Release(&this->m_hLink);
    this->m_bPathReevalRequested = 0;
    bfx::AreaHandle::AreaHandle(&pInput.m_hStartArea);
    bfx::AreaHandle::AreaHandle(&pInput.m_hGoalArea);
    pInput.m_pPathSpec = NULL;
    *(_WORD *)&pInput.m_bSnapPoints = 257;
    pInput.m_bModifyLinkWeights = 1;
    pInput.m_pStartPos = (const vec3_t *)v14;
    pInput.m_pGoalPos = &point;
    bfx::AreaHandle::operator=(&pInput.m_hStartArea, &this->m_hCurArea);
    *(_WORD *)&pInput.m_bSnapPoints = 256;
    pInput.m_pPathSpec = p_m_PathSpecOfCurPath;
    AINavigator2D::FindPath(this, &path, &pInput);
    if ( bfx::PolylinePathRCPtr::IsValid(&path) && (AINavigator2D::GetFinalPathPoint(this, &path, (vec3_t *)&result), (float)((float)((float)((float)(point.v[1] - result.m_y) * (float)(point.v[1] - result.m_y)) + (float)((float)(point.v[0] - result.m_x) * (float)(point.v[0] - result.m_x))) + (float)((float)(point.v[2] - result.m_z) * (float)(point.v[2] - result.m_z))) <= 4.0) )
    {
      AINavigator2D::SetPath(this, &path, &pInput);
      v6 = 1;
    }
    else
    {
      bfx::PolylinePathRCPtr::Release(&path);
      this->ClearPath(this);
      v6 = 0;
    }
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&path);
    bfx::AreaHandle::~AreaHandle(&pInput.m_hGoalArea);
    bfx::AreaHandle::~AreaHandle(&pInput.m_hStartArea);
    return v6;
  }
  else
  {
    this->ClearPath(this);
    return 0;
  }
}

/*
==============
AINavigator2D::DoPathReeval
==============
*/
bool AINavigator2D::DoPathReeval(AINavigator2D *this)
{
  if ( this->m_bMultiGoalPath && this->HasPath(this) )
    return AINavigator2D::ReFindMultiGoalPath(this, 0);
  else
    return this->DoPathFind(this);
}

/*
==============
AINavigator2D::DrawLineToSuppression
==============
*/
void AINavigator2D::DrawLineToSuppression(AINavigator2D *this)
{
  unsigned int *m_SuppressionIDs; 
  __int64 v3; 
  nav_obstacle_s *ObstacleByID; 

  m_SuppressionIDs = this->m_SuppressionIDs;
  v3 = 4i64;
  do
  {
    if ( *m_SuppressionIDs != -1 )
    {
      ObstacleByID = Nav_GetObstacleByID(*m_SuppressionIDs);
      if ( !ObstacleByID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3997, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
        __debugbreak();
      G_DebugLine(&this->m_CurSnappedPos, &ObstacleByID->pos, &colorLtYellow, 0);
    }
    ++m_SuppressionIDs;
    --v3;
  }
  while ( v3 );
}

/*
==============
AINavigator2D::DrawPath
==============
*/
void AINavigator2D::DrawPath(AINavigator2D *this, int mode)
{
  __int128 v2; 
  int m_NumPoints; 
  float v5; 
  __int64 m_CurPathPoint; 
  unsigned int *p_m_Flags; 
  unsigned int v8; 
  const vec4_t *v9; 
  vec4_t *v10; 
  const dvar_t *v11; 
  bfx::AreaHandle *p_m_hCurArea; 
  int v13; 
  int NumEdges; 
  bfx::Vector3 *EdgeStartPos; 
  float m_z; 
  float m_y; 
  bfx::Vector3 *EdgeEndPos; 
  float v19; 
  float v20; 
  bfx::Vector3 result; 
  bfx::Vector3 v22; 
  vec3_t outPoint; 
  vec3_t start; 
  vec3_t end; 
  __int128 v26; 

  m_NumPoints = this->m_Path.m_NumPoints;
  if ( m_NumPoints > 0 )
  {
    v5 = this->m_CurSnappedPos.v[1];
    m_CurPathPoint = this->m_CurPathPoint;
    start.v[0] = this->m_CurSnappedPos.v[0];
    start.v[2] = this->m_CurSnappedPos.v[2] + 4.0;
    start.v[1] = v5;
    if ( (int)m_CurPathPoint < m_NumPoints )
    {
      v26 = v2;
      p_m_Flags = &this->m_Path.m_Points[m_CurPathPoint].m_Flags;
      do
      {
        nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &outPoint);
        v8 = *p_m_Flags;
        outPoint.v[2] = outPoint.v[2] + 4.0;
        if ( (v8 & 4) != 0 )
        {
          v9 = &colorCyan;
        }
        else if ( (v8 & 0x10) != 0 )
        {
          v9 = &colorOrange;
        }
        else if ( (v8 & 0x20) != 0 )
        {
          v9 = &colorRedFaded;
        }
        else
        {
          v9 = &colorLtBlue;
          if ( (v8 & 0x400) == 0 )
            v9 = &colorMagenta;
        }
        G_DebugLine(&start, &outPoint, v9, 0);
        if ( (_DWORD)m_CurPathPoint == this->m_Path.m_NumPoints - 1 )
        {
          v10 = &colorRed;
          if ( (*(_BYTE *)p_m_Flags & 1) != 0 )
            v10 = (vec4_t *)v9;
          v9 = v10;
        }
        G_DebugCircle(&outPoint, 6.0, v9, 0, 1, 1);
        if ( (v8 & 0x140) != 0 )
          G_DebugCircle(&outPoint, 6.0, &colorYellow, 0, 1, 1);
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        p_m_Flags += 12;
        start = outPoint;
      }
      while ( (int)m_CurPathPoint < this->m_Path.m_NumPoints );
    }
    v11 = DCONST_DVARBOOL_ai_showBfxPath;
    if ( !DCONST_DVARBOOL_ai_showBfxPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showBfxPath") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      p_m_hCurArea = &this->m_hCurArea;
      if ( bfx::AreaHandle::IsValid(p_m_hCurArea) )
      {
        v13 = 0;
        NumEdges = bfx::AreaHandle::GetNumEdges(p_m_hCurArea);
        if ( NumEdges > 0 )
        {
          do
          {
            EdgeStartPos = bfx::AreaHandle::GetEdgeStartPos(p_m_hCurArea, &result, v13);
            m_z = EdgeStartPos->m_z;
            m_y = EdgeStartPos->m_y;
            outPoint.v[0] = EdgeStartPos->m_x;
            outPoint.v[1] = m_y;
            outPoint.v[2] = m_z;
            EdgeEndPos = bfx::AreaHandle::GetEdgeEndPos(p_m_hCurArea, &v22, v13);
            v19 = EdgeEndPos->m_z;
            v20 = EdgeEndPos->m_y;
            end.v[0] = EdgeEndPos->m_x;
            outPoint.v[2] = outPoint.v[2] + 4.0;
            end.v[1] = v20;
            end.v[2] = v19 + 4.0;
            G_DebugLine(&outPoint, &end, &colorDkCyan, 0);
            ++v13;
          }
          while ( v13 < NumEdges );
        }
      }
    }
  }
}

/*
==============
AINavigator2D::EnableTeamWalking
==============
*/
void AINavigator2D::EnableTeamWalking(AINavigator2D *this, bool bEnable)
{
  this->m_bTeamWalkEnabled = bEnable;
}

/*
==============
AINavigator2D::ExtendPath
==============
*/
bool AINavigator2D::ExtendPath(AINavigator2D *this, const vec3_t *newGoal)
{
  vec3_t outPoint; 

  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1838, ASSERT_TYPE_ASSERT, "(m_Path.m_NumPoints > 0)", (const char *)&queryFormat, "m_Path.m_NumPoints > 0") )
    __debugbreak();
  nav_path_t::GetPathPoint(&this->m_Path, this->m_Path.m_NumPoints - 1, &outPoint);
  return AINavigator2D::ExtendPath(this, &outPoint, (const bfx::AreaHandle *)&this->m_hLink.m_pSpace + 3 * this->m_Path.m_NumPoints, newGoal);
}

/*
==============
AINavigator2D::ExtendPath
==============
*/
_BOOL8 AINavigator2D::ExtendPath(AINavigator2D *this, const vec3_t *startPos, const bfx::AreaHandle *hStartArea, const vec3_t *newGoal)
{
  __int64 v8; 
  bool IsValid; 
  __int64 m_NumPoints; 
  int v11; 
  unsigned int *p_m_Flags; 
  int v13; 
  float *v14; 
  int v15; 
  nav_path_t::pathpoint_t *v16; 
  bool pbOutHasDoors; 
  bfx::PolylinePathRCPtr result; 
  nav_pathfind_input_t pInput; 
  __int64 v21; 
  vec3_t outPoint; 
  nav_path_t ptr; 

  v21 = -2i64;
  bfx::AreaHandle::AreaHandle(&pInput.m_hStartArea);
  bfx::AreaHandle::AreaHandle(&pInput.m_hGoalArea);
  v8 = 0i64;
  pInput.m_pPathSpec = NULL;
  *(_WORD *)&pInput.m_bSnapPoints = 257;
  pInput.m_bModifyLinkWeights = 1;
  pInput.m_pStartPos = startPos;
  pInput.m_pGoalPos = newGoal;
  bfx::AreaHandle::operator=(&pInput.m_hStartArea, hStartArea);
  pInput.m_pPathSpec = &this->m_PathSpecOfCurPath;
  pInput.m_bSnapPoints = 0;
  AINavigator2D::FindPath(this, &result, &pInput);
  IsValid = bfx::PolylinePathRCPtr::IsValid(&result);
  if ( IsValid )
  {
    AINavigator2D::GetFinalPathPoint(this, &result, &outPoint);
    if ( (float)((float)((float)((float)(newGoal->v[1] - outPoint.v[1]) * (float)(newGoal->v[1] - outPoint.v[1])) + (float)((float)(newGoal->v[0] - outPoint.v[0]) * (float)(newGoal->v[0] - outPoint.v[0]))) + (float)((float)(newGoal->v[2] - outPoint.v[2]) * (float)(newGoal->v[2] - outPoint.v[2]))) <= 4.0 )
    {
      m_NumPoints = this->m_Path.m_NumPoints;
      if ( (int)m_NumPoints <= 0 )
      {
        this->m_Path.m_pSpace = this->m_pSpace;
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GeneratePath");
        AINavigator2D::ExtractCornersFromRawPath(this, &result, &this->m_Path, 20, &this->m_PathSpecOfCurPath, &pbOutHasDoors);
        Sys_ProfEndNamedEvent();
        v15 = this->m_Path.m_NumPoints;
        if ( v15 - 1 > 0 )
        {
          v16 = &this->m_Path.m_Points[1];
          while ( v16->m_LocalPos.v[0] != v16[-1].m_LocalPos.v[0] || v16->m_LocalPos.v[1] != v16[-1].m_LocalPos.v[1] )
          {
            ++v8;
            ++v16;
            if ( v8 >= v15 - 1 )
              goto LABEL_22;
          }
          Nav_PrintPath("Path Points:", this->m_Path.m_Points, v15);
        }
LABEL_22:
        AINavigator::LocalizePosToSpace(this, startPos, &this->m_LocalSnappedPathStartPos);
      }
      else
      {
        *((_DWORD *)&this->m_MaxDeviationFromPath + 12 * m_NumPoints) &= ~1u;
        `eh vector constructor iterator'(&ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::pathpoint_t, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
        ptr.m_NumPoints = 20;
        ptr.m_pSpace = NULL;
        v11 = 0;
        p_m_Flags = &ptr.m_Points[0].m_Flags;
        do
        {
          bfx::AreaHandle::Release(&ptr.m_Points[v11].m_hArea);
          p_m_Flags[1] = -1;
          *p_m_Flags = 0;
          p_m_Flags[3] = -1082130432;
          ++v11;
          p_m_Flags += 12;
        }
        while ( v11 < ptr.m_NumPoints );
        ptr.m_NumPoints = 0;
        ptr.m_pSpace = this->m_pSpace;
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GeneratePath");
        AINavigator2D::ExtractCornersFromRawPath(this, &result, &ptr, 20, &this->m_PathSpecOfCurPath, &pbOutHasDoors);
        Sys_ProfEndNamedEvent();
        v13 = ptr.m_NumPoints;
        if ( ptr.m_NumPoints - 1 > 0 )
        {
          v14 = &ptr.m_Points[1].m_LocalPos.v[1];
          while ( *(v14 - 1) != *(v14 - 13) || *v14 != *(v14 - 12) )
          {
            ++v8;
            v14 += 12;
            if ( v8 >= ptr.m_NumPoints - 1 )
              goto LABEL_14;
          }
          Nav_PrintPath("Path Points:", ptr.m_Points, ptr.m_NumPoints);
          v13 = ptr.m_NumPoints;
        }
LABEL_14:
        nav_path_t::AppendPathPoints(&this->m_Path, ptr.m_Points, v13);
        nav_path_t::Reset(&ptr);
        `eh vector destructor iterator'(&ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
      }
      this->m_bPathingOutOfBounds = 0;
      if ( pbOutHasDoors )
        GScr_Notify(this->m_pEnt, scr_const.path_has_door, 0);
    }
    else
    {
      IsValid = 0;
    }
  }
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
  bfx::AreaHandle::~AreaHandle(&pInput.m_hGoalArea);
  bfx::AreaHandle::~AreaHandle(&pInput.m_hStartArea);
  return IsValid;
}

/*
==============
AINavigator2D::ExtractCornersFromRawPath
==============
*/
__int64 AINavigator2D::ExtractCornersFromRawPath(AINavigator2D *this, const bfx::PolylinePathRCPtr *rawPath, nav_path_t *pPath2D, int maxCorners, const bfx::PathSpec *pathSpec, bool *pbOutHasDoors)
{
  float v6; 
  __int64 v7; 
  nav_path_t *v9; 
  AINavigator2D *v11; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::Vector3 *StartPos; 
  float m_z; 
  float m_y; 
  const bfx::AreaHandle *Area; 
  bfx::LinkSegment *LinkSegment; 
  const bfx::AreaHandle *ClosestArea; 
  int v21; 
  __int128 v22; 
  int v23; 
  float v24; 
  float v25; 
  bfx::PolylinePathRCPtr *v26; 
  bfx::SegmentType v27; 
  bfx::SurfaceSegment *v28; 
  const bfx::Vector3 *v29; 
  float v30; 
  float v31; 
  const bfx::Vector3 *v32; 
  float v33; 
  __int128 m_y_low; 
  float m_x; 
  bool IsStraightLineReachable; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  __int128 v51; 
  float v54; 
  const bfx::AreaHandle *v55; 
  nav_path_t::pathpoint_t *v56; 
  int v57; 
  const bfx::AreaHandle *v58; 
  __int128 v59; 
  float v60; 
  unsigned int AreaUsageFlags; 
  int v65; 
  const bfx::AreaHandle *v66; 
  __int128 v67; 
  int NumObstacles; 
  int i; 
  int v70; 
  __int64 v71; 
  nav_path_t::pathpoint_t *v72; 
  const bfx::AreaHandle *v73; 
  bfx::LinkSegment *v74; 
  nav_path_t::pathpoint_t *v75; 
  bool Forward; 
  bool v77; 
  bfx::Vector3 *v78; 
  const bfx::AreaHandle *v79; 
  __int64 m_NumPoints; 
  nav_path_t::pathpoint_t *v81; 
  bfx::Vector3 *v82; 
  const bfx::AreaHandle *v83; 
  float v84; 
  int v85; 
  bool v86; 
  int NumSegments; 
  bfx::AreaHandle rhs; 
  bfx::AreaHandle v91; 
  bfx::AreaHandle result; 
  bfx::PathSpec *v93; 
  bfx::LinkHandle phLink; 
  bfx::PolylinePathRCPtr *v95; 
  nav_path_t *v96; 
  bfx::Vector3 v97; 
  bfx::Vector3 v98; 
  __int64 v99; 
  bfx::AreaHandle v100; 
  bfx::AreaHandle v101; 
  bfx::AreaHandle v102; 
  bfx::AreaHandle v103; 
  bfx::AreaHandle v104; 
  bfx::AreaHandle v105; 
  bfx::ObstacleDat v106; 
  vec3_t endPos; 
  vec3_t v108; 
  vec3_t worldPos; 
  bfx::Vector3 pos; 
  bfx::PathSpec pPathSpec; 

  v99 = -2i64;
  v9 = pPath2D;
  v96 = pPath2D;
  v95 = (bfx::PolylinePathRCPtr *)rawPath;
  v11 = this;
  v93 = (bfx::PathSpec *)pathSpec;
  nav_path_t::Reset(pPath2D);
  if ( pbOutHasDoors )
    *pbOutHasDoors = 0;
  if ( !bfx::PolylinePathRCPtr::IsValid((bfx::PolylinePathRCPtr *)rawPath) )
    return 0i64;
  pPathSpec = *pathSpec;
  pPathSpec.m_obstacleBlockageFlags = HIDWORD(v7) | 0x2000;
  if ( maxCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1227, ASSERT_TYPE_ASSERT, "( maxCorners > 0 )", (const char *)&queryFormat, "maxCorners > 0") )
    __debugbreak();
  NumSegments = bfx::PolylinePathRCPtr::GetNumSegments((bfx::PolylinePathRCPtr *)rawPath);
  if ( NumSegments <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1230, ASSERT_TYPE_ASSERT, "( numSegments > 0 )", (const char *)&queryFormat, "numSegments > 0") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&rhs);
  LOBYTE(v6) = 0;
  v86 = 0;
  SegmentType = bfx::PolylinePathRCPtr::GetSegmentType((bfx::PolylinePathRCPtr *)rawPath, 0);
  if ( SegmentType )
  {
    if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1252, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
      __debugbreak();
    LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment((bfx::PolylinePathRCPtr *)rawPath, 0);
    if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1254, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    pos = *bfx::LinkSegment::GetStartPos(LinkSegment);
    worldPos = (vec3_t)pos;
    ClosestArea = bfx::GetClosestArea(&result, &v11->m_pSpace->hSpace, &pos, v11->m_Layer, pathSpec);
    bfx::AreaHandle::operator=(&rhs, ClosestArea);
  }
  else
  {
    SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment((bfx::PolylinePathRCPtr *)rawPath, 0);
    if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1245, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    StartPos = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
    m_z = StartPos->m_z;
    m_y = StartPos->m_y;
    worldPos.v[0] = StartPos->m_x;
    worldPos.v[1] = m_y;
    worldPos.v[2] = m_z;
    Area = bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
    bfx::AreaHandle::operator=(&rhs, Area);
  }
  bfx::AreaHandle::~AreaHandle(&result);
  Nav_SpaceConvertWorldToLocal(v11->m_pSpace, &worldPos, &v9->m_LocalStartPoint);
  v21 = 0;
  v22 = 0i64;
  bfx::AreaHandle::AreaHandle(&v91, &rhs);
  v23 = 0;
  if ( NumSegments > 0 )
  {
    v24 = v6;
    v25 = v6;
    while ( 1 )
    {
      v26 = v95;
      v27 = bfx::PolylinePathRCPtr::GetSegmentType(v95, v23);
      if ( v27 == SURFACE_SEGMENT )
        break;
      if ( v27 != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1405, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
        __debugbreak();
      v74 = bfx::PolylinePathRCPtr::GetLinkSegment(v26, v23);
      if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1407, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
        __debugbreak();
      v75 = &v9->m_Points[v9->m_NumPoints];
      Forward = bfx::LinkSegment::GetForward(v74);
      v77 = !Forward;
      if ( Forward )
        v78 = (bfx::Vector3 *)bfx::LinkSegment::GetStartPos(v74);
      else
        v78 = (bfx::Vector3 *)bfx::LinkSegment::GetEndPos(v74);
      v97 = *v78;
      pos = v97;
      Nav_SpaceConvertWorldToLocal(v11->m_pSpace, (const vec3_t *)&pos, &v75->m_LocalPos);
      bfx::LinkSegment::GetLink(v74, &phLink);
      v79 = bfx::GetClosestArea(&v104, &v11->m_pSpace->hSpace, &v97, v11->m_Layer, v93);
      bfx::AreaHandle::operator=(&v75->m_hArea, v79);
      bfx::AreaHandle::~AreaHandle(&v104);
      v75->m_LinkID = Nav_GetLinkID(&phLink);
      v75->m_Length = *(float *)&v22;
      v75->m_CornerAngle = -1.0;
      v75->m_TightQuartersRemainingLength = *(float *)&v22;
      v75->m_Flags = 2;
      if ( v77 )
        v75->m_Flags = 10;
      m_NumPoints = v9->m_NumPoints;
      v57 = m_NumPoints + 1;
      v9->m_NumPoints = m_NumPoints + 1;
      if ( (int)m_NumPoints + 1 >= maxCorners )
        goto LABEL_96;
      v81 = &v9->m_Points[m_NumPoints + 1];
      if ( v77 )
        v82 = (bfx::Vector3 *)bfx::LinkSegment::GetStartPos(v74);
      else
        v82 = (bfx::Vector3 *)bfx::LinkSegment::GetEndPos(v74);
      v98 = *v82;
      endPos = (vec3_t)v98;
      Nav_SpaceConvertWorldToLocal(v11->m_pSpace, &endPos, &v81->m_LocalPos);
      v83 = bfx::GetClosestArea(&v105, &v11->m_pSpace->hSpace, &v98, v11->m_Layer, v93);
      bfx::AreaHandle::operator=(&v81->m_hArea, v83);
      bfx::AreaHandle::~AreaHandle(&v105);
      v81->m_LinkID = Nav_GetLinkID(&phLink);
      v84 = fsqrt((float)((float)((float)(endPos.v[1] - pos.m_y) * (float)(endPos.v[1] - pos.m_y)) + (float)((float)(endPos.v[0] - pos.m_x) * (float)(endPos.v[0] - pos.m_x))) + (float)((float)(endPos.v[2] - pos.m_z) * (float)(endPos.v[2] - pos.m_z)));
      v81->m_Length = v84;
      v81->m_CornerAngle = -1.0;
      v81->m_TightQuartersRemainingLength = v84;
      v81->m_Flags = 4;
      v85 = 4;
      if ( v77 )
      {
        v81->m_Flags = 12;
        v85 = 12;
      }
      if ( v23 == NumSegments - 1 )
        v81->m_Flags = v85 | 1;
      worldPos = endPos;
      bfx::AreaHandle::operator=(&rhs, &v81->m_hArea);
      ++v9->m_NumPoints;
      v21 = 0;
      v22 = 0i64;
      bfx::AreaHandle::operator=(&v91, &rhs);
      v57 = v9->m_NumPoints;
      if ( v57 >= maxCorners )
      {
LABEL_96:
        bfx::LinkHandle::~LinkHandle(&phLink);
        goto LABEL_98;
      }
      bfx::LinkHandle::~LinkHandle(&phLink);
LABEL_73:
      if ( ++v23 >= NumSegments )
        goto LABEL_97;
      LOBYTE(v6) = v86;
    }
    v28 = bfx::PolylinePathRCPtr::GetSurfaceSegment(v26, v23);
    if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1275, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    v29 = bfx::SurfaceSegment::GetStartPos(v28);
    v30 = v29->m_z;
    v31 = v29->m_y;
    v108.v[0] = v29->m_x;
    v108.v[1] = v31;
    v108.v[2] = v30;
    v32 = bfx::SurfaceSegment::GetEndPos(v28);
    v33 = v32->m_z;
    m_y_low = LODWORD(v32->m_y);
    m_x = v32->m_x;
    endPos.v[0] = v32->m_x;
    endPos.v[1] = *(float *)&m_y_low;
    endPos.v[2] = v33;
    IsStraightLineReachable = 1;
    if ( *(float *)&v22 == 0.0 )
    {
      v37 = m_x - worldPos.v[0];
      v39 = m_y_low;
      v38 = *(float *)&m_y_low - worldPos.v[1];
      v40 = v33 - worldPos.v[2];
      v41 = (float)(v38 * v38) + (float)(v37 * v37);
      *(float *)&v39 = fsqrt(v41);
      _XMM2 = v39;
      __asm
      {
        vcmpless xmm0, xmm2, xmm15
        vblendvps xmm1, xmm2, xmm11, xmm0
      }
      v25 = (float)(1.0 / *(float *)&_XMM1) * v37;
      v24 = (float)(1.0 / *(float *)&_XMM1) * v38;
      v45 = (float)(v40 * v40) + v41;
    }
    else
    {
      if ( !bfx::AreaHandle::IsValid(&rhs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1289, ASSERT_TYPE_ASSERT, "( hPrevArea.IsValid() )", (const char *)&queryFormat, "hPrevArea.IsValid()") )
        __debugbreak();
      v46 = v108.v[0];
      v47 = v108.v[1];
      v51 = LODWORD(endPos.v[1]);
      v48 = endPos.v[1] - v108.v[1];
      v49 = (float)(v48 * v48) + (float)((float)(endPos.v[0] - v108.v[0]) * (float)(endPos.v[0] - v108.v[0]));
      *(float *)&v51 = fsqrt(v49);
      _XMM7 = v51;
      __asm
      {
        vcmpless xmm0, xmm7, xmm15
        vblendvps xmm1, xmm7, xmm11, xmm0
      }
      v54 = (float)((float)(endPos.v[2] - v108.v[2]) * (float)(endPos.v[2] - v108.v[2])) + v49;
      if ( LOBYTE(v6) && (float)((float)(v25 * (float)((float)(1.0 / *(float *)&_XMM1) * (float)(endPos.v[0] - v108.v[0]))) + (float)(v24 * (float)((float)(1.0 / *(float *)&_XMM1) * v48))) < 0.99000001 && v54 >= 1.0 && *(float *)&v51 > 1.0 && v23 > 1 )
      {
        IsStraightLineReachable = 0;
      }
      else if ( v23 && *(float *)&v51 != 0.0 )
      {
        v55 = bfx::SurfaceSegment::GetArea(v28, &v100);
        IsStraightLineReachable = Nav_IsStraightLineReachable(&worldPos, &rhs, &endPos, v55, &pPathSpec);
        bfx::AreaHandle::~AreaHandle(&v100);
        v47 = v108.v[1];
        v46 = v108.v[0];
      }
      if ( !LOBYTE(v6) )
        v86 = v54 >= 1.0;
      if ( IsStraightLineReachable || v46 == worldPos.v[0] && v47 == worldPos.v[1] )
        goto LABEL_51;
      v56 = &v9->m_Points[v9->m_NumPoints];
      Nav_SpaceConvertWorldToLocal(this->m_pSpace, &v108, &v56->m_LocalPos);
      bfx::AreaHandle::operator=(&v56->m_hArea, &v91);
      v56->m_LinkID = -1;
      v56->m_Length = *(float *)&v22;
      v56->m_Flags = v21;
      v56->m_CornerAngle = -1.0;
      v56->m_TightQuartersRemainingLength = *(float *)&v22;
      v57 = ++v9->m_NumPoints;
      if ( v57 >= maxCorners )
        goto LABEL_98;
      v21 = 0;
      v22 = 0i64;
      worldPos = v108;
      v58 = bfx::SurfaceSegment::GetArea(v28, &v101);
      bfx::AreaHandle::operator=(&rhs, v58);
      bfx::AreaHandle::~AreaHandle(&v101);
      v59 = LODWORD(endPos.v[1]);
      v60 = (float)((float)(endPos.v[1] - v108.v[1]) * (float)(endPos.v[1] - v108.v[1])) + (float)((float)(endPos.v[0] - v108.v[0]) * (float)(endPos.v[0] - v108.v[0]));
      *(float *)&v59 = fsqrt(v60);
      _XMM3 = v59;
      __asm
      {
        vcmpless xmm0, xmm3, xmm15
        vblendvps xmm1, xmm3, xmm11, xmm0
      }
      v25 = (float)(1.0 / *(float *)&_XMM1) * (float)(endPos.v[0] - v108.v[0]);
      v24 = (float)(1.0 / *(float *)&_XMM1) * (float)(endPos.v[1] - v108.v[1]);
      v45 = (float)((float)(endPos.v[2] - v108.v[2]) * (float)(endPos.v[2] - v108.v[2])) + v60;
    }
    v86 = v45 >= 1.0;
LABEL_51:
    AreaUsageFlags = bfx::SurfaceSegment::GetAreaUsageFlags(v28);
    v65 = v21 | 0x10;
    if ( (AreaUsageFlags & 0x80000000) == 0 )
      v65 = v21;
    v21 = v65;
    v66 = bfx::SurfaceSegment::GetArea(v28, &v102);
    bfx::AreaHandle::operator=(&v91, v66);
    bfx::AreaHandle::~AreaHandle(&v102);
    v67 = v22;
    *(float *)&v67 = *(float *)&v22 + fsqrt((float)((float)((float)(endPos.v[1] - v108.v[1]) * (float)(endPos.v[1] - v108.v[1])) + (float)((float)(endPos.v[0] - v108.v[0]) * (float)(endPos.v[0] - v108.v[0]))) + (float)((float)(endPos.v[2] - v108.v[2]) * (float)(endPos.v[2] - v108.v[2])));
    v22 = v67;
    NumObstacles = bfx::AreaHandle::GetNumObstacles(&v91);
    if ( NumObstacles > 0 )
    {
      for ( i = 0; i < NumObstacles; ++i )
      {
        bfx::AreaHandle::GetObstacle(&v91, (bfx::ObstacleHandle *)&result, i);
        bfx::ObstacleHandle::GetObstacleDat((bfx::ObstacleHandle *)&result, &v106);
        if ( v106.m_userData )
        {
          if ( (v106.m_userData & 0x8000000) == 0 || (v70 = 2048, (this->m_BasePathSpec.m_obstacleBlockageFlags & v106.m_obstacleBlockageFlags) == 0) )
            v70 = 16;
          v21 |= v70;
          if ( (v106.m_userData & 0x10000000) != 0 && pbOutHasDoors )
            *pbOutHasDoors = 1;
        }
        bfx::ObstacleHandle::~ObstacleHandle((bfx::ObstacleHandle *)&result);
      }
      v9 = v96;
    }
    if ( v23 == NumSegments - 1 )
    {
      v71 = v9->m_NumPoints;
      if ( (int)v71 > 0 && (*(float *)&v67 == 0.0 || v108.v[0] == endPos.v[0] && v108.v[1] == endPos.v[1]) )
      {
        v9->m_Points[v71 - 1].m_Flags |= 1u;
      }
      else
      {
        v72 = &v9->m_Points[v71];
        Nav_SpaceConvertWorldToLocal(this->m_pSpace, &endPos, &v72->m_LocalPos);
        v73 = bfx::SurfaceSegment::GetArea(v28, &v103);
        bfx::AreaHandle::operator=(&v72->m_hArea, v73);
        bfx::AreaHandle::~AreaHandle(&v103);
        v72->m_LinkID = -1;
        v72->m_Length = *(float *)&v67;
        v72->m_Flags = v21 | 1;
        v72->m_CornerAngle = -1.0;
        v72->m_TightQuartersRemainingLength = *(float *)&v67;
        ++v9->m_NumPoints;
      }
      v57 = v9->m_NumPoints;
      if ( v57 >= maxCorners )
        goto LABEL_98;
    }
    v11 = this;
    goto LABEL_73;
  }
LABEL_97:
  v57 = v9->m_NumPoints;
LABEL_98:
  bfx::AreaHandle::~AreaHandle(&v91);
  bfx::AreaHandle::~AreaHandle(&rhs);
  return (unsigned int)v57;
}

/*
==============
AINavigator2D::FindClosestStraightLineReachableTacPoint
==============
*/
const tacpoint_t *AINavigator2D::FindClosestStraightLineReachableTacPoint(AINavigator2D *this)
{
  return TacGraph_FindClosestPointWithStaticNavLos(&this->m_CurSnappedPos, &this->m_CurSnappedPos, &this->m_hCurArea);
}

/*
==============
AINavigator2D::FindLastPointOnPathWithinRegion
==============
*/
char AINavigator2D::FindLastPointOnPathWithinRegion(AINavigator2D *this, const vec3_t *goalPos, const gentity_s *pRegion, vec3_t *outPoint)
{
  unsigned int Instance; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  char v11; 
  int v12; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::Vector3 *v15; 
  float v16; 
  float v17; 
  bfx::LinkSegment *LinkSegment; 
  const bfx::Vector3 *StartPos; 
  float m_z; 
  float m_y; 
  bfx::PolylinePathRCPtr result; 
  nav_pathfind_input_t pInput; 
  __int64 v24; 
  vec3_t pos; 
  vec3_t v26; 
  _BYTE v27[64]; 
  __int128 v28; 

  v24 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "FindLastPointOnPathWithinRegion");
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, pRegion);
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3689, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( IsPointInRegion_0(PHYSICS_WORLD_ID_FIRST, goalPos, Instance, CollisionQueryResult) )
  {
    outPoint->v[0] = goalPos->v[0];
    outPoint->v[1] = goalPos->v[1];
    outPoint->v[2] = goalPos->v[2];
    Physics_FreeCollisionQueryResult(CollisionQueryResult);
    Sys_ProfEndNamedEvent();
    return 1;
  }
  else if ( IsPointInRegion_0(PHYSICS_WORLD_ID_FIRST, &this->m_CurSnappedPos, Instance, CollisionQueryResult) )
  {
    *(__m256i *)v27 = *(__m256i *)&this->m_BasePathSpec.m_obstacleMode;
    *(__m256i *)&v27[32] = *(__m256i *)&this->m_BasePathSpec.m_maxSearchDist;
    v28 = *(_OWORD *)&this->m_BasePathSpec.m_penaltyTable.m_perFlagPenalties[24];
    bfx::AreaHandle::AreaHandle(&pInput.m_hStartArea);
    bfx::AreaHandle::AreaHandle(&pInput.m_hGoalArea);
    pInput.m_pPathSpec = NULL;
    *(_WORD *)&pInput.m_bSnapPoints = 257;
    pInput.m_bModifyLinkWeights = 1;
    pInput.m_pStartPos = &this->m_CurSnappedPos;
    bfx::AreaHandle::operator=(&pInput.m_hStartArea, &this->m_hCurArea);
    pInput.m_pGoalPos = goalPos;
    pInput.m_pPathSpec = (bfx::PathSpec *)v27;
    *(_WORD *)&pInput.m_bSnapPoints = 0;
    pInput.m_bModifyLinkWeights = 0;
    AINavigator2D::FindPath(this, &result, &pInput);
    if ( bfx::PolylinePathRCPtr::IsValid(&result) )
    {
      v12 = bfx::PolylinePathRCPtr::GetNumSegments(&result) - 1;
      if ( v12 >= 0 )
      {
        while ( v12 )
        {
          SegmentType = bfx::PolylinePathRCPtr::GetSegmentType(&result, v12);
          if ( SegmentType )
          {
            if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3751, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
              __debugbreak();
            LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment(&result, v12);
            if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3753, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
              __debugbreak();
            StartPos = bfx::LinkSegment::GetStartPos(LinkSegment);
            m_z = StartPos->m_z;
            m_y = StartPos->m_y;
            v26.v[0] = StartPos->m_x;
            v26.v[1] = m_y;
            v26.v[2] = m_z;
            if ( IsPointInRegion_0(PHYSICS_WORLD_ID_FIRST, &v26, Instance, CollisionQueryResult) )
            {
              *outPoint = v26;
              goto LABEL_29;
            }
          }
          else
          {
            SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(&result, v12);
            if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3739, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
              __debugbreak();
            v15 = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
            v16 = v15->m_z;
            v17 = v15->m_y;
            pos.v[0] = v15->m_x;
            pos.v[1] = v17;
            pos.v[2] = v16;
            if ( IsPointInRegion_0(PHYSICS_WORLD_ID_FIRST, &pos, Instance, CollisionQueryResult) )
            {
              *outPoint = pos;
              goto LABEL_29;
            }
          }
          if ( --v12 < 0 )
            goto LABEL_29;
        }
        outPoint->v[0] = this->m_CurSnappedPos.v[0];
        outPoint->v[1] = this->m_CurSnappedPos.v[1];
        outPoint->v[2] = this->m_CurSnappedPos.v[2];
      }
LABEL_29:
      Physics_FreeCollisionQueryResult(CollisionQueryResult);
      Sys_ProfEndNamedEvent();
      v11 = 1;
    }
    else
    {
      Physics_FreeCollisionQueryResult(CollisionQueryResult);
      Sys_ProfEndNamedEvent();
      v11 = 0;
    }
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
    bfx::AreaHandle::~AreaHandle(&pInput.m_hGoalArea);
    bfx::AreaHandle::~AreaHandle(&pInput.m_hStartArea);
    return v11;
  }
  else
  {
    Physics_FreeCollisionQueryResult(CollisionQueryResult);
    Sys_ProfEndNamedEvent();
    return 0;
  }
}

/*
==============
AINavigator2D::FindLastTacPointOnPathWithVis
==============
*/
const tacpoint_t *AINavigator2D::FindLastTacPointOnPathWithVis(AINavigator2D *this, const vec3_t *startPos, const tacpoint_t *pTacPoint, const vec3_t *goalPos, vec3_t *outCornerPos)
{
  AINavLayer m_Layer; 
  bfx::AreaHandle *v10; 
  bfx::AreaHandle *v11; 
  bfx::AreaHandle *v12; 
  int FirstNCornersOnPath; 
  __int64 v14; 
  const dvar_t *v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  float *v19; 
  const tacpoint_t *ClosestPoint; 
  const dvar_t *v21; 
  vec3_t *p_start; 
  bool HasVis; 
  const vec4_t *v24; 
  bfx::AreaHandle pOutArea; 
  bfx::AreaHandle rhs; 
  __int64 v28; 
  bfx::AreaHandle *v29; 
  bfx::AreaHandle v30; 
  bfx::AreaHandle v31; 
  vec3_t pos; 
  vec3_t start; 
  vec3_t outUp; 
  vec3_t end[5]; 

  v28 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "FindLastTacPointOnPathWithVis");
  bfx::AreaHandle::AreaHandle(&rhs);
  bfx::AreaHandle::AreaHandle(&pOutArea);
  Nav_GetSpaceUp(this->m_pSpace, &outUp);
  Nav_GetClosestVerticalPosWithHint(startPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &start, &this->m_hCurArea, &pOutArea);
  m_Layer = this->m_Layer;
  v29 = &v30;
  bfx::AreaHandle::AreaHandle(&v30, &rhs);
  v11 = v10;
  bfx::AreaHandle::AreaHandle(&v31, &pOutArea);
  FirstNCornersOnPath = Nav_FindFirstNCornersOnPath(this->m_pSpace, &start, v12, goalPos, v11, m_Layer, &this->m_BasePathSpec, 5, end);
  v14 = FirstNCornersOnPath;
  if ( FirstNCornersOnPath > 0 )
  {
    v15 = DVARBOOL_ai_debugLikelyEnemyAngles;
    if ( !DVARBOOL_ai_debugLikelyEnemyAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLikelyEnemyAngles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      G_DebugLineWithDuration(&start, &pTacPoint->m_Pos, &colorLtOrange, 0, 40);
      TacGraph_DebugDraw_Point(pTacPoint, &colorYellowHeat, 40);
      G_DebugLineWithDuration(&start, goalPos, &colorLtOrange, 0, 40);
    }
    v16 = 0;
    v17 = v14;
    if ( (int)v14 > 0 )
    {
      v18 = 0i64;
      v19 = &end[0].v[2];
      do
      {
        *(_QWORD *)pos.v = *((_QWORD *)v19 - 1);
        pos.v[2] = *v19 + 30.0;
        ClosestPoint = TacGraph_FindClosestPoint(&pos);
        v21 = DVARBOOL_ai_debugLikelyEnemyAngles;
        if ( !DVARBOOL_ai_debugLikelyEnemyAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLikelyEnemyAngles") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        if ( v21->current.enabled )
        {
          if ( v16 )
            p_start = &end[v16 - 1];
          else
            p_start = &start;
          G_DebugLineWithDuration(p_start, &end[v16], &colorLtPurple, 0, 40);
          if ( !ClosestPoint )
            goto LABEL_22;
          HasVis = TacVisGraph_HasVis(pTacPoint, ClosestPoint);
          v24 = &colorLtRed;
          if ( HasVis )
            v24 = &colorLtGreen;
          TacGraph_DebugDraw_Point(ClosestPoint, v24, 40);
          G_DebugLineWithDuration(&end[v16], &ClosestPoint->m_Pos, &colorLtYellow, 0, 40);
        }
        if ( ClosestPoint && TacVisGraph_HasVis(pTacPoint, ClosestPoint) )
        {
          outCornerPos->v[0] = end[v16].v[0];
          outCornerPos->v[1] = end[v16].v[1];
          outCornerPos->v[2] = end[v16].v[2];
          Sys_ProfEndNamedEvent();
          goto LABEL_24;
        }
LABEL_22:
        ++v16;
        ++v18;
        v19 += 3;
      }
      while ( v18 < v17 );
    }
  }
  Sys_ProfEndNamedEvent();
  ClosestPoint = NULL;
LABEL_24:
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  bfx::AreaHandle::~AreaHandle(&rhs);
  return ClosestPoint;
}

/*
==============
AINavigator2D::FindPath
==============
*/
bfx::PolylinePathRCPtr *AINavigator2D::FindPath(AINavigator2D *this, bfx::PolylinePathRCPtr *result, nav_pathfind_input_t *pInput)
{
  char *Value; 
  int *v7; 
  _QWORD *v8; 
  char *v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  ThreadContext CurrentThreadContext; 
  const vec3_t *m_pStartPos; 
  bfx::Vector3 *m_pGoalPos; 
  bfx::PathSpec *m_pPathSpec; 
  float v16; 
  float v17; 
  const char *v18; 
  const char *v19; 
  const bfx::AreaHandle *ClosestArea; 
  int v21; 
  const bfx::PolylinePathRCPtr *v22; 
  int v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const vec3_t *v27; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *hHintArea; 
  bfx::AreaHandle pOutArea; 
  bfx::Vector3 pos; 
  bfx::Vector3 goalPos; 
  __int64 v34; 
  bfx::PolylinePathRCPtr *v35; 
  bfx::AreaHandle resulta; 
  vec3_t outUp; 
  vec3_t v38; 

  v34 = -2i64;
  v35 = result;
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1111, ASSERT_TYPE_ASSERT, "( pInput )", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  if ( !pInput->m_pStartPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1112, ASSERT_TYPE_ASSERT, "( pInput->m_pStartPos )", (const char *)&queryFormat, "pInput->m_pStartPos") )
    __debugbreak();
  if ( !pInput->m_pGoalPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1113, ASSERT_TYPE_ASSERT, "( pInput->m_pGoalPos )", (const char *)&queryFormat, "pInput->m_pGoalPos") )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v7 = (int *)(Value + 12656);
  if ( (unsigned int)(*((_DWORD *)Value + 3164) + 1) >= 3 )
  {
    LODWORD(outClosestPos) = *((_DWORD *)Value + 3164) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outClosestPos, 3) )
      __debugbreak();
  }
  if ( (unsigned int)++*v7 >= 3 )
  {
    LODWORD(hHintArea) = 3;
    LODWORD(outClosestPos) = *v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outClosestPos, hHintArea) )
      __debugbreak();
  }
  v8 = Value + 2088;
  v9 = Value + 40;
  if ( *v8 < (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v8 += 8i64;
  if ( *v8 >= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v8 = v7;
  if ( *v8 <= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v10 = *v7;
  v11 = __rdtsc();
  v7[v10 + 2] = v11;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 264, NULL, 0);
  bfx::AreaHandle::AreaHandle(&pOutArea);
  AINavigator::GetUpVector(this, &outUp);
  m_pStartPos = pInput->m_pStartPos;
  pos = (bfx::Vector3)*pInput->m_pStartPos;
  m_pGoalPos = (bfx::Vector3 *)pInput->m_pGoalPos;
  goalPos = *m_pGoalPos;
  m_pPathSpec = pInput->m_pPathSpec;
  if ( !m_pPathSpec )
    m_pPathSpec = &this->m_BasePathSpec;
  v16 = m_pGoalPos->m_y - m_pStartPos->v[1];
  v17 = (float)(v16 * v16) + (float)((float)(m_pGoalPos->m_x - m_pStartPos->v[0]) * (float)(m_pGoalPos->m_x - m_pStartPos->v[0]));
  if ( v17 > 6250000.0 )
  {
    v18 = vtos((const vec3_t *)m_pGoalPos);
    v19 = vtos(pInput->m_pStartPos);
    Com_PrintWarning(18, "AI %d requested very long path (%i units) from %s to %s.\n", (unsigned int)this->m_pEnt->s.number, (unsigned int)(int)fsqrt(v17), v19, v18);
  }
  if ( pInput->m_bSnapPoints )
    Nav_GetClosestVerticalPosWithHint(pInput->m_pStartPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, m_pPathSpec, &v38, &this->m_hCurArea, &pOutArea);
  if ( bfx::AreaHandle::IsValid(&pInput->m_hStartArea) )
  {
    bfx::AreaHandle::operator=(&pOutArea, &pInput->m_hStartArea);
  }
  else if ( !bfx::AreaHandle::IsValid(&pOutArea) )
  {
    ClosestArea = bfx::GetClosestArea(&resulta, &this->m_pSpace->hSpace, &pos, this->m_Layer, m_pPathSpec);
    bfx::AreaHandle::operator=(&pOutArea, ClosestArea);
    bfx::AreaHandle::~AreaHandle(&resulta);
  }
  if ( !bfx::AreaHandle::IsValid(&pInput->m_hStartArea) )
    bfx::AreaHandle::operator=(&pInput->m_hStartArea, &pOutArea);
  bfx::PolylinePathRCPtr::PolylinePathRCPtr(result);
  Nav_UpdateLinkWeights();
  if ( bfx::AreaHandle::IsValid(&pInput->m_hStartArea) )
  {
    v21 = Sys_Milliseconds();
    v22 = bfx::CreatePolylinePath((bfx::PolylinePathRCPtr *)&resulta, &pOutArea, &pos, &goalPos, m_pPathSpec, &bfx::g_defaultPathCreationOptions);
    bfx::PolylinePathRCPtr::operator=(result, v22);
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr((bfx::PolylinePathRCPtr *)&resulta);
    v23 = Sys_Milliseconds() - v21;
    if ( v23 > 5 )
    {
      v24 = "failed";
      if ( bfx::PolylinePathRCPtr::IsValid(result) )
        v24 = "succeeded";
      v25 = vtos(pInput->m_pGoalPos);
      v26 = vtos(pInput->m_pStartPos);
      Com_PrintWarning(18, "AI %d: Long path find (%d ms): from %s to %s. (%s)\n", (unsigned int)this->m_pEnt->s.number, (unsigned int)v23, v26, v25, v24);
    }
  }
  if ( pInput->m_bPathMustReachGoal && bfx::PolylinePathRCPtr::IsValid(result) )
  {
    AINavigator2D::GetFinalPathPoint(this, result, (vec3_t *)&resulta);
    v27 = pInput->m_pGoalPos;
    if ( (float)((float)((float)((float)(v27->v[1] - *((float *)&resulta.m_handleImpl + 1)) * (float)(v27->v[1] - *((float *)&resulta.m_handleImpl + 1))) + (float)((float)(v27->v[0] - *(float *)&resulta.m_handleImpl) * (float)(v27->v[0] - *(float *)&resulta.m_handleImpl))) + (float)((float)(v27->v[2] - *(float *)&resulta.m_pSpace) * (float)(v27->v[2] - *(float *)&resulta.m_pSpace))) > 1.0 )
      bfx::PolylinePathRCPtr::Release(result);
  }
  Profile_EndInternal(NULL);
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  return result;
}

/*
==============
AINavigator2D::FixUpAreasIfNecessary
==============
*/
void AINavigator2D::FixUpAreasIfNecessary(AINavigator2D *this)
{
  AINavigator2D::FixUpStartAreaIfNecessary(this);
  AINavigator2D::FixUpGoalAreaIfNecessary(this);
}

/*
==============
AINavigator2D::FixUpGoalAreaIfNecessary
==============
*/
void AINavigator2D::FixUpGoalAreaIfNecessary(AINavigator2D *this)
{
  bfx::AreaHandle *pOutArea; 
  vec3_t outUp; 

  pOutArea = &this->m_hGoalArea;
  if ( !bfx::AreaHandle::IsValid(&this->m_hGoalArea) )
  {
    AINavigator::GetUpVector(this, &outUp);
    Nav_GetClosestVerticalPos(&this->m_RequestedGoalPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &this->m_SnappedGoalPos, pOutArea);
  }
}

/*
==============
AINavigator2D::FixUpStartAreaIfNecessary
==============
*/
void AINavigator2D::FixUpStartAreaIfNecessary(AINavigator2D *this)
{
  bfx::AreaHandle *pOutArea; 
  __int64 v3; 
  vec3_t targetPos; 
  vec3_t outUp; 

  pOutArea = &this->m_hCurArea;
  if ( !bfx::AreaHandle::IsValid(&this->m_hCurArea) )
  {
    AINavigator::GetUpVector(this, &outUp);
    this->GetCurPos(this, &targetPos);
    v3 = 1268i64;
    if ( this->m_Path.m_NumPoints <= 0 )
      v3 = 1188i64;
    Nav_GetClosestVerticalPos(&targetPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, (const bfx::PathSpec *)((char *)this + v3), &targetPos, pOutArea);
    AINavigator::LocalizePosToSpace(this, &targetPos, &this->m_LocalCurSnappedPos);
    AINavigator::WorldifyPosFromSpace(this, &this->m_LocalCurSnappedPos, &this->m_CurSnappedPos);
    this->m_AllowedStances = AINavigator2D::GetAllowedStances(this, pOutArea);
  }
}

/*
==============
AINavigator2D::Free
==============
*/
void AINavigator2D::Free(AINavigator2D *this)
{
  unsigned int *m_SuppressionIDs; 
  __int64 v3; 
  gentity_s *m_pEnt; 
  int v5; 
  int number; 
  int *v7; 
  bfx::AreaHandle *p_m_hArea; 
  __int64 v9; 

  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 124, ASSERT_TYPE_ASSERT, "(m_pEnt)", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  Nav_ClearLinkWeightsForEnt(this->m_pEnt->s.number);
  m_SuppressionIDs = this->m_SuppressionIDs;
  v3 = 4i64;
  do
  {
    if ( *m_SuppressionIDs != -1 )
    {
      Nav_DestroyObstacleByID(*m_SuppressionIDs);
      *m_SuppressionIDs = -1;
    }
    ++m_SuppressionIDs;
    --v3;
  }
  while ( v3 );
  m_pEnt = this->m_pEnt;
  v5 = 0;
  this->m_BasePathSpec.m_obstacleBlockageFlags &= 0xFFFFF0FF;
  this->m_BlockPlanes.iPlaneCount = 0;
  number = m_pEnt->s.number;
  v7 = s_SuppressionObstacleReservations;
  while ( *v7 != number )
  {
    ++v5;
    if ( (__int64)++v7 >= (__int64)&unk_14A571430 )
      goto LABEL_13;
  }
  s_SuppressionObstacleReservations[v5] = 2047;
LABEL_13:
  AINavigator::Free(this);
  bfx::AreaHandle::Release(&this->m_hCurArea);
  bfx::AreaHandle::Release(&this->m_hGoalArea);
  bfx::LinkReservationRCPtr::Release(&this->m_LinkReservation);
  nav_path_t::Reset(&this->m_Path);
  p_m_hArea = &this->m_Path.m_Points[0].m_hArea;
  v9 = 20i64;
  do
  {
    if ( bfx::AreaHandle::IsValid(p_m_hArea) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 139, ASSERT_TYPE_ASSERT, "(!m_Path.m_Points[ iPoint ].m_hArea.IsValid())", (const char *)&queryFormat, "!m_Path.m_Points[ iPoint ].m_hArea.IsValid()") )
      __debugbreak();
    p_m_hArea += 3;
    --v9;
  }
  while ( v9 );
}

/*
==============
AINavigator2D::FreeClaimedTraversal
==============
*/
void AINavigator2D::FreeClaimedTraversal(AINavigator2D *this)
{
  bfx::LinkReservationRCPtr *p_m_LinkReservation; 

  p_m_LinkReservation = &this->m_LinkReservation;
  if ( bfx::LinkReservationRCPtr::IsValid(&this->m_LinkReservation) )
    bfx::LinkReservationRCPtr::Release(p_m_LinkReservation);
}

/*
==============
AINavigator2D::GeneratePath
==============
*/
void AINavigator2D::GeneratePath(AINavigator2D *this, const bfx::PolylinePathRCPtr *path, nav_path_t *pPath2D, const bfx::PathSpec *pathSpec, bool *pbOutHasDoors)
{
  int m_NumPoints; 
  __int64 v10; 
  nav_path_t::pathpoint_t *i; 

  pPath2D->m_pSpace = this->m_pSpace;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GeneratePath");
  AINavigator2D::ExtractCornersFromRawPath(this, path, pPath2D, 20, pathSpec, pbOutHasDoors);
  Sys_ProfEndNamedEvent();
  m_NumPoints = pPath2D->m_NumPoints;
  if ( m_NumPoints - 1 > 0 )
  {
    v10 = 0i64;
    for ( i = &pPath2D->m_Points[1]; i->m_LocalPos.v[0] != i[-1].m_LocalPos.v[0] || i->m_LocalPos.v[1] != i[-1].m_LocalPos.v[1]; ++i )
    {
      if ( ++v10 >= m_NumPoints - 1 )
        return;
    }
    Nav_PrintPath("Path Points:", pPath2D->m_Points, m_NumPoints);
  }
}

/*
==============
AINavigator2D::GetAllowanceOffMesh
==============
*/
float AINavigator2D::GetAllowanceOffMesh()
{
  return FLOAT_12_0;
}

/*
==============
AINavigator2D::GetAllowanceOffMeshZ
==============
*/
float AINavigator2D::GetAllowanceOffMeshZ()
{
  return FLOAT_72_0;
}

/*
==============
AINavigator2D::GetAllowedStances
==============
*/
__int64 AINavigator2D::GetAllowedStances(AINavigator2D *this, bfx::AreaHandle *phArea)
{
  int v3; 
  int NumObstacles; 
  int v5; 
  unsigned int v6; 
  unsigned __int64 m_userData; 
  bfx::ObstacleHandle result; 
  bfx::ObstacleDat v10; 

  if ( !phArea && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3546, ASSERT_TYPE_ASSERT, "( phArea )", (const char *)&queryFormat, "phArea", -2i64) )
    __debugbreak();
  if ( !bfx::AreaHandle::IsValid(phArea) )
    return 7i64;
  v3 = 1;
  NumObstacles = bfx::AreaHandle::GetNumObstacles(phArea);
  v5 = 0;
  if ( NumObstacles <= 0 )
    return 7i64;
  v6 = 4;
  do
  {
    bfx::AreaHandle::GetObstacle(phArea, &result, v5);
    m_userData = bfx::ObstacleHandle::GetObstacleDat(&result, &v10)->m_userData;
    if ( (m_userData & 0x20000000) != 0 && v3 < 2 )
    {
      v3 = 2;
    }
    else if ( (m_userData & 0x40000000) != 0 && v3 < 4 )
    {
      v3 = 4;
    }
    bfx::ObstacleHandle::~ObstacleHandle(&result);
    ++v5;
  }
  while ( v5 < NumObstacles );
  if ( v3 == 1 )
    return 7i64;
  if ( v3 == 2 )
    return 6;
  return v6;
}

/*
==============
AINavigator2D::GetAllowedStances
==============
*/
__int64 AINavigator2D::GetAllowedStances(AINavigator2D *this)
{
  return (unsigned int)this->m_AllowedStances;
}

/*
==============
AINavigator2D::GetClosestReachablePoint
==============
*/
void AINavigator2D::GetClosestReachablePoint(AINavigator2D *this, const vec3_t *pos, vec3_t *closestPos)
{
  bfx::Vector3 posa; 
  bfx::Vector3 v5; 
  bfx::AreaHandle result; 
  __int64 v7; 

  v7 = -2i64;
  posa = (bfx::Vector3)*pos;
  bfx::GetClosestReachableArea(&result, &posa, &this->m_hCurArea, &this->m_BasePathSpec);
  bfx::AreaHandle::GetClosestPosInArea(&result, &v5, &posa, NULL);
  *(bfx::Vector3 *)closestPos = v5;
  bfx::AreaHandle::~AreaHandle(&result);
}

/*
==============
AINavigator2D::GetClosestVerticalPosInMostLikelySpace
==============
*/
nav_space_s *AINavigator2D::GetClosestVerticalPosInMostLikelySpace(AINavigator2D *this, const vec3_t *pos, vec3_t *outClosestPos, bfx::AreaHandle *pOutArea)
{
  gentity_s *m_pEnt; 
  float v5; 
  float v6; 

  m_pEnt = this->m_pEnt;
  v5 = COERCE_FLOAT(LODWORD(m_pEnt->r.box.midPoint.v[0]) & _xmm) + m_pEnt->r.box.halfSize.v[0];
  v6 = COERCE_FLOAT(LODWORD(m_pEnt->r.box.midPoint.v[1]) & _xmm) + m_pEnt->r.box.halfSize.v[1];
  return Nav_GetClosestVerticalPosInMostLikelySpace(pos, this->m_Layer, fsqrt((float)(v6 * v6) + (float)(v5 * v5)), &this->m_BasePathSpec, outClosestPos, pOutArea);
}

/*
==============
AINavigator2D::GetCornerCurrentAngle
==============
*/
float AINavigator2D::GetCornerCurrentAngle(AINavigator2D *this, int cornerIndex)
{
  __int64 v3; 
  int m_NumPoints; 

  v3 = cornerIndex;
  if ( (unsigned int)cornerIndex >= this->m_Path.m_NumPoints )
  {
    m_NumPoints = this->m_Path.m_NumPoints;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4365, ASSERT_TYPE_ASSERT, "(unsigned)( cornerIndex ) < (unsigned)( m_Path.m_NumPoints )", "cornerIndex doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", cornerIndex, m_NumPoints) )
      __debugbreak();
  }
  return this->m_Path.m_Points[v3].m_CornerAngle;
}

/*
==============
AINavigator2D::GetCurArea
==============
*/
bfx::AreaHandle *AINavigator2D::GetCurArea(AINavigator2D *this)
{
  return &this->m_hCurArea;
}

/*
==============
nav_path_t::GetDir
==============
*/
void nav_path_t::GetDir(nav_path_t *this, int iPoint, vec3_t *outDir)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  __int128 v11; 
  vec3_t outPoint; 
  vec3_t outWorldPos; 
  vec3_t v17; 

  if ( this->m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4341, ASSERT_TYPE_ASSERT, "( m_NumPoints > 0 )", (const char *)&queryFormat, "m_NumPoints > 0") )
    __debugbreak();
  nav_path_t::GetPathPoint(this, iPoint, &outPoint);
  if ( iPoint )
  {
    nav_path_t::GetPathPoint(this, iPoint - 1, &v17);
    v6 = outPoint.v[2] - v17.v[2];
    v7 = outPoint.v[0] - v17.v[0];
    v8 = outPoint.v[1] - v17.v[1];
  }
  else
  {
    Nav_SpaceConvertLocalToWorld(this->m_pSpace, &this->m_LocalStartPoint, &outWorldPos);
    v6 = outPoint.v[2] - outWorldPos.v[2];
    v7 = outPoint.v[0] - outWorldPos.v[0];
    v8 = outPoint.v[1] - outWorldPos.v[1];
  }
  outDir->v[0] = v7;
  outDir->v[1] = v8;
  outDir->v[2] = v6;
  v9 = outDir->v[1];
  v10 = LODWORD(outDir->v[0]);
  v11 = v10;
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v9 * v9)) + (float)(v6 * v6));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  outDir->v[0] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  outDir->v[2] = v6 * (float)(1.0 / *(float *)&_XMM0);
  outDir->v[1] = v9 * (float)(1.0 / *(float *)&_XMM0);
}

/*
==============
AINavigator2D::GetFinalPathPoint
==============
*/
void AINavigator2D::GetFinalPathPoint(AINavigator2D *this, vec3_t *outPoint)
{
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2052, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  nav_path_t::GetPathPoint(&this->m_Path, this->m_Path.m_NumPoints - 1, outPoint);
}

/*
==============
AINavigator2D::GetFinalPathPoint
==============
*/
void AINavigator2D::GetFinalPathPoint(AINavigator2D *this, const bfx::PolylinePathRCPtr *path, vec3_t *outPoint)
{
  int v5; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::Vector3 *EndPos; 
  bfx::LinkSegment *LinkSegment; 
  float m_y; 
  float m_z; 

  if ( !bfx::PolylinePathRCPtr::IsValid((bfx::PolylinePathRCPtr *)path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2029, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  v5 = bfx::PolylinePathRCPtr::GetNumSegments((bfx::PolylinePathRCPtr *)path) - 1;
  SegmentType = bfx::PolylinePathRCPtr::GetSegmentType((bfx::PolylinePathRCPtr *)path, v5);
  if ( SegmentType )
  {
    if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2042, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
      __debugbreak();
    LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment((bfx::PolylinePathRCPtr *)path, v5);
    if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2044, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    EndPos = bfx::LinkSegment::GetEndPos(LinkSegment);
  }
  else
  {
    SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment((bfx::PolylinePathRCPtr *)path, v5);
    if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2037, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    EndPos = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
  }
  m_y = EndPos->m_y;
  m_z = EndPos->m_z;
  outPoint->v[0] = EndPos->m_x;
  outPoint->v[1] = m_y;
  outPoint->v[2] = m_z;
}

/*
==============
AINavigator2D::GetGoalOrLink
==============
*/
void AINavigator2D::GetGoalOrLink(AINavigator2D *this, vec3_t *outPos)
{
  __int64 m_CurPathPoint; 
  __int64 m_NumPoints; 
  __int64 v6; 
  unsigned int *i; 
  nav_path_t *p_m_Path; 
  nav_space_s *m_pSpace; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 665, ASSERT_TYPE_ASSERT, "(m_Path.Exists())", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  m_CurPathPoint = this->m_CurPathPoint;
  m_NumPoints = this->m_Path.m_NumPoints;
  if ( (int)m_CurPathPoint < (int)m_NumPoints )
  {
    v6 = this->m_CurPathPoint;
    for ( i = &this->m_Path.m_Points[m_CurPathPoint].m_Flags; (*(_BYTE *)i & 2) == 0 && (_DWORD)m_CurPathPoint != (_DWORD)m_NumPoints - 1; i += 12 )
    {
      LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
      if ( ++v6 >= m_NumPoints )
        return;
    }
    p_m_Path = &this->m_Path;
    if ( !p_m_Path->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4205, ASSERT_TYPE_ASSERT, "(m_pSpace)", (const char *)&queryFormat, "m_pSpace") )
      __debugbreak();
    if ( (unsigned int)m_CurPathPoint >= p_m_Path->m_NumPoints )
    {
      v12 = p_m_Path->m_NumPoints;
      LODWORD(v10) = m_CurPathPoint;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4206, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v10, v12) )
        __debugbreak();
    }
    m_pSpace = p_m_Path->m_pSpace;
    if ( Nav_GetDefaultSpace() == m_pSpace )
    {
      outPos->v[0] = p_m_Path->m_Points[(int)m_CurPathPoint].m_LocalPos.v[0];
      outPos->v[1] = p_m_Path->m_Points[(int)m_CurPathPoint].m_LocalPos.v[1];
      outPos->v[2] = p_m_Path->m_Points[(int)m_CurPathPoint].m_LocalPos.v[2];
    }
    else
    {
      if ( m_pSpace->parentEntNum >= 0x800u )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = m_pSpace->parentEntNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4214, ASSERT_TYPE_ASSERT, "(unsigned)( m_pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "m_pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      Nav_SpaceConvertLocalToWorld(p_m_Path->m_pSpace, &p_m_Path->m_Points[(int)m_CurPathPoint].m_LocalPos, outPos);
    }
  }
}

/*
==============
AINavigator2D::GetLastPathPointWithinRadius
==============
*/
bool AINavigator2D::GetLastPathPointWithinRadius(AINavigator2D *this, const vec3_t *origin, float radius, vec3_t *outPoint)
{
  float v7; 
  __int64 m_CurPathPoint; 
  __int64 m_NumPoints; 
  int v10; 
  __int64 v11; 
  float *v12; 
  int v13; 
  float v14; 
  float v15; 
  float v16; 
  __int64 v17; 
  bool result; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v23; 
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
  vec3_t outLocalPos; 

  if ( this->m_Path.m_NumPoints <= 0 )
    return 0;
  v7 = radius * radius;
  Nav_SpaceConvertWorldToLocal(this->m_Path.m_pSpace, origin, &outLocalPos);
  m_CurPathPoint = this->m_CurPathPoint;
  m_NumPoints = this->m_Path.m_NumPoints;
  v10 = m_CurPathPoint;
  if ( (int)m_CurPathPoint >= (int)m_NumPoints )
  {
LABEL_6:
    v13 = m_NumPoints - 1;
LABEL_12:
    nav_path_t::GetPathPoint(&this->m_Path, v13, outPoint);
    return 1;
  }
  v11 = this->m_CurPathPoint;
  v12 = &this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2];
  while ( (float)((float)((float)((float)(outLocalPos.v[1] - *(v12 - 1)) * (float)(outLocalPos.v[1] - *(v12 - 1))) + (float)((float)(outLocalPos.v[0] - *(v12 - 2)) * (float)(outLocalPos.v[0] - *(v12 - 2)))) + (float)((float)(outLocalPos.v[2] - *v12) * (float)(outLocalPos.v[2] - *v12))) <= v7 )
  {
    ++v10;
    ++v11;
    v12 += 12;
    if ( v11 >= m_NumPoints )
      goto LABEL_6;
  }
  if ( v10 == (_DWORD)m_CurPathPoint )
  {
    v14 = this->m_LocalCurSnappedPos.v[1];
    v15 = this->m_LocalCurSnappedPos.v[0];
    v16 = this->m_LocalCurSnappedPos.v[2];
    if ( (float)((float)((float)((float)(outLocalPos.v[1] - v14) * (float)(outLocalPos.v[1] - v14)) + (float)((float)(outLocalPos.v[0] - v15) * (float)(outLocalPos.v[0] - v15))) + (float)((float)(outLocalPos.v[2] - v16) * (float)(outLocalPos.v[2] - v16))) <= v7 )
    {
      v17 = v10;
      goto LABEL_14;
    }
    return 0;
  }
  v17 = v10;
  if ( (this->m_Path.m_Points[v10].m_Flags & 4) != 0 )
  {
    v13 = v10 - 1;
    goto LABEL_12;
  }
  v15 = *((float *)&this->m_ReevalPathTask.pPrev + 12 * v10);
  v14 = *((float *)&this->m_ReevalPathTask.pPrev + 12 * v10 + 1);
  v16 = *(&this->m_DistFromGoalToPathToRequestedGoal + 12 * v10);
LABEL_14:
  v19 = this->m_Path.m_Points[v17].m_LocalPos.v[0] - v15;
  v21 = LODWORD(this->m_Path.m_Points[v17].m_LocalPos.v[1]);
  v20 = this->m_Path.m_Points[v17].m_LocalPos.v[1] - v14;
  v22 = this->m_Path.m_Points[v17].m_LocalPos.v[2] - v16;
  v23 = v14 - origin->v[1];
  *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v22 * v22));
  _XMM11 = v21;
  __asm
  {
    vcmpless xmm0, xmm11, cs:__real@80000000
    vblendvps xmm0, xmm11, xmm1, xmm0
  }
  v27 = v20 * (float)(1.0 / *(float *)&_XMM0);
  v28 = v15 - origin->v[0];
  v29 = v19 * (float)(1.0 / *(float *)&_XMM0);
  v30 = v22 * (float)(1.0 / *(float *)&_XMM0);
  v31 = v16 - origin->v[2];
  v32 = (float)((float)(v27 * v23) + (float)(v29 * v28)) + (float)(v30 * v31);
  v33 = (float)(v32 * v32) - (float)((float)((float)((float)(v23 * v23) + (float)(v28 * v28)) + (float)(v31 * v31)) - v7);
  if ( v33 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1714, ASSERT_TYPE_ASSERT, "( disc >= 0.f )", (const char *)&queryFormat, "disc >= 0.f") )
    __debugbreak();
  v34 = fsqrt(v33);
  v35 = v34 - v32;
  if ( (float)(v34 - v32) < 0.0 || (float)(v34 - v32) > *(float *)&_XMM11 )
  {
    v36 = COERCE_FLOAT(LODWORD(v32) ^ _xmm) - v34;
    v35 = v36;
    if ( (v36 < 0.0 || v36 > *(float *)&_XMM11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1721, ASSERT_TYPE_ASSERT, "(d >= 0.f && d <= distStartToEnd)", "%s\n\t%f %f", "d >= 0.f && d <= distStartToEnd", v36, *(float *)&_XMM11) )
      __debugbreak();
  }
  result = 1;
  outPoint->v[0] = (float)(v29 * v35) + v15;
  outPoint->v[2] = (float)(v30 * v35) + v16;
  outPoint->v[1] = (float)(v27 * v35) + v14;
  return result;
}

/*
==============
nav_path_t::GetLinkForPathPoint
==============
*/
bool nav_path_t::GetLinkForPathPoint(nav_path_t *this, int iPoint, bfx::LinkHandle *phOutLink)
{
  __int64 v4; 

  v4 = iPoint;
  if ( (unsigned int)iPoint >= this->m_NumPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", iPoint, this->m_NumPoints) )
    __debugbreak();
  if ( !phOutLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4222, ASSERT_TYPE_ASSERT, "(phOutLink)", (const char *)&queryFormat, "phOutLink") )
    __debugbreak();
  return Nav_GetLinkByID(this->m_Points[v4].m_LinkID, phOutLink);
}

/*
==============
AINavigator2D::GetLinkUsageFlags
==============
*/
__int64 AINavigator2D::GetLinkUsageFlags(AINavigator2D *this)
{
  return this->m_BasePathSpec.m_linkUsageFlags;
}

/*
==============
AINavigator2D::GetModifierApproachDir
==============
*/
char AINavigator2D::GetModifierApproachDir(AINavigator2D *this, unsigned int flags, float checkDist, float approachDist, vec3_t *outStartPoint, vec3_t *outEndPoint, vec3_t *outApproachDir, vec3_t *outModifierDir)
{
  AINavigator2D *v8; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  __int64 m_CurPathPoint; 
  float v15; 
  float v16; 
  float v17; 
  float *p_m_Length; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  __int128 v25; 
  __int128 v27; 
  __int128 v28; 
  float v29; 
  int v30; 
  __int128 v31; 
  const bfx::PathSpec *pathSpec; 
  int v35; 
  int NumSegments; 
  char v37; 
  int v38; 
  bfx::SurfaceSegment *SurfaceSegment; 
  int NumObstacles; 
  int v41; 
  __int64 v42; 
  int NumEdges; 
  int m_collideEdgeIndex; 
  __int128 v45; 
  float v49; 
  float v50; 
  __int64 v51; 
  int v52; 
  bfx::Vector3 *EdgeStartPos; 
  float v54; 
  __int128 m_y_low; 
  float v56; 
  bfx::Vector3 *EdgeEndPos; 
  float v58; 
  __int128 v59; 
  __int128 v60; 
  float v64; 
  float v65; 
  __int128 v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v74; 
  float v75; 
  float v76; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 
  float v80; 
  float v81; 
  float v82; 
  __int64 v83; 
  int v84; 
  bool IsValid; 
  __int128 v86; 
  __int128 v87; 
  __int128 v88; 
  __int128 v89; 
  __int128 v90; 
  __int128 v91; 
  __int128 v92; 
  char v93; 
  const bfx::Vector3 *StartPos; 
  float v95; 
  float v96; 
  vec3_t *v97; 
  const bfx::Vector3 *EndPos; 
  float v99; 
  __int128 v100; 
  float v101; 
  vec3_t *v102; 
  __int128 v103; 
  float v104; 
  __int128 v105; 
  float v106; 
  float v107; 
  __int64 v109; 
  nav_path_t *p_m_Path; 
  float v111; 
  float *v112; 
  float v113; 
  __int128 v114; 
  float v115; 
  int v119; 
  __int128 v120; 
  __int128 v121; 
  int v122; 
  float v123; 
  __int128 v124; 
  float v125; 
  __int128 v126; 
  float v130; 
  __int128 v131; 
  float v132; 
  float v133; 
  int v134; 
  float v135; 
  float v136; 
  vec3_t *v137; 
  float v138; 
  __int128 v139; 
  float v140; 
  float v144; 
  float v145; 
  float v146; 
  float v149; 
  const char *v150; 
  const char *v151; 
  int v152; 
  float m_z; 
  _BYTE v154[12]; 
  float m_y; 
  int v156; 
  float *v158; 
  bfx::Vector3 iStartPos; 
  int v160; 
  float v161; 
  float v162; 
  float v163; 
  float m_x; 
  float v165; 
  float v166; 
  bfx::ProbeResults results; 
  AINavigator2D *v168; 
  bfx::AreaHandle startingArea; 
  bfx::ProbeSpec probeSpec; 
  unsigned int v171; 
  float v172; 
  float v173; 
  float v174; 
  float v175; 
  bfx::AreaHandle result; 
  vec3_t *v177; 
  bfx::AreaHandle rhs; 
  bfx::Vector3 posWCoord; 
  bfx::Vector3 dir; 
  vec3_t *v181; 
  vec3_t *v182; 
  bfx::ObstacleHandle v183; 
  __int64 v184; 
  bfx::Vector3 v185; 
  bfx::Vector3 v186; 
  bfx::ObstacleDat v187; 
  vec3_t pDataOut; 
  vec3_t v189; 
  bfx::Vector3 v190; 
  vec3_t outPoint; 
  int v192[4]; 

  v184 = -2i64;
  v172 = approachDist;
  v171 = flags;
  v8 = this;
  v168 = this;
  v181 = outStartPoint;
  v182 = outEndPoint;
  v177 = outApproachDir;
  *(_QWORD *)v189.v = outModifierDir;
  if ( this->m_Path.m_NumPoints <= 0 )
    return 0;
  bfx::AreaHandle::AreaHandle(&startingArea);
  v10 = v8->m_CurSnappedPos.v[0];
  *(float *)v154 = v10;
  v11 = v8->m_CurSnappedPos.v[1];
  *(float *)&v154[4] = v11;
  v12 = v8->m_CurSnappedPos.v[2];
  *(float *)&v154[8] = v12;
  bfx::AreaHandle::operator=(&startingArea, &v8->m_hCurArea);
  v13 = 0i64;
  v163 = 0.0;
  m_CurPathPoint = v8->m_CurPathPoint;
  v156 = m_CurPathPoint;
  if ( (int)m_CurPathPoint >= v8->m_Path.m_NumPoints )
  {
LABEL_66:
    v93 = 0;
    goto LABEL_67;
  }
  v15 = v10;
  v16 = v11;
  v17 = v12;
  p_m_Length = &v8->m_Path.m_Points[m_CurPathPoint].m_Length;
  v158 = p_m_Length;
  v19 = checkDist;
  while ( 1 )
  {
    nav_path_t::GetPathPoint(&v8->m_Path, m_CurPathPoint, &outPoint);
    if ( (*(_BYTE *)(p_m_Length - 2) & 0x10) == 0 )
      goto LABEL_64;
    v20 = outPoint.v[0] - v15;
    v21 = LODWORD(outPoint.v[1]);
    v22 = outPoint.v[2] - v17;
    *(float *)&v21 = fsqrt((float)((float)((float)(outPoint.v[1] - v16) * (float)(outPoint.v[1] - v16)) + (float)(v20 * v20)) + (float)(v22 * v22));
    _XMM1 = v21;
    __asm { vcmpless xmm0, xmm1, xmm13 }
    v25 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm1, xmm1, xmm8, xmm0 }
    v27 = LODWORD(FLOAT_1_0);
    *(float *)&v27 = (float)(1.0 / *(float *)&_XMM1) * v20;
    v28 = v27;
    v175 = *(float *)&v27;
    v29 = (float)(1.0 / *(float *)&_XMM1) * (float)(outPoint.v[1] - v16);
    v173 = v29;
    v166 = (float)(1.0 / *(float *)&_XMM1) * v22;
    iStartPos.m_x = v10;
    iStartPos.m_y = v11;
    iStartPos.m_z = v12;
    dir.m_x = *(float *)&v27;
    dir.m_y = v29;
    dir.m_z = v166;
    bfx::AreaHandle::AreaHandle(&results.m_endArea);
    results.m_collided = 0;
    results.m_collideEdgeIndex = -1;
    results.m_generatePath = 0;
    bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
    results.m_generatePath = 1;
    probeSpec.m_probeType = NAVPROBE_TYPE_HORIZONTAL;
    v30 = 0;
    v160 = 0;
    v31 = 0i64;
    v162 = 0.0;
    *(float *)&_XMM0 = *p_m_Length;
    _XMM13 = LODWORD(checkDist);
    __asm { vminss  xmm6, xmm13, xmm0 }
    v161 = *(float *)&_XMM6;
    if ( *(float *)&_XMM0 > 0.0 )
      break;
LABEL_63:
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
    bfx::AreaHandle::~AreaHandle(&results.m_endArea);
    v13 = LODWORD(v163);
    v19 = checkDist;
    LODWORD(m_CurPathPoint) = v156;
LABEL_64:
    v92 = v13;
    *(float *)&v92 = *(float *)&v13 + fsqrt((float)((float)((float)(outPoint.v[1] - v11) * (float)(outPoint.v[1] - v11)) + (float)((float)(outPoint.v[0] - v10) * (float)(outPoint.v[0] - v10))) + (float)((float)(outPoint.v[2] - v12) * (float)(outPoint.v[2] - v12)));
    v13 = v92;
    v163 = *(float *)&v92;
    if ( *(float *)&v92 <= v19 )
    {
      v10 = outPoint.v[0];
      *(vec3_t *)v154 = outPoint;
      v11 = outPoint.v[1];
      v12 = outPoint.v[2];
      bfx::AreaHandle::operator=(&startingArea, &v8->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
      LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
      v156 = m_CurPathPoint;
      p_m_Length += 12;
      v158 = p_m_Length;
      v15 = v10;
      v16 = v11;
      v17 = v12;
      if ( (int)m_CurPathPoint < v8->m_Path.m_NumPoints )
        continue;
    }
    goto LABEL_66;
  }
  pathSpec = &v8->m_PathSpecOfCurPath;
  while ( 1 )
  {
    v35 = v30;
    v152 = v30;
    bfx::NavProbe(&startingArea, &iStartPos, &dir, *(float *)&_XMM6, pathSpec, &probeSpec, &results);
    if ( !bfx::PolylinePathRCPtr::IsValid(&results.m_path) )
    {
LABEL_61:
      p_m_Length = v158;
LABEL_62:
      v10 = *(float *)v154;
      v11 = *(float *)&v154[4];
      v12 = *(float *)&v154[8];
      goto LABEL_63;
    }
    NumSegments = bfx::PolylinePathRCPtr::GetNumSegments(&results.m_path);
    v37 = 0;
    v38 = 0;
    if ( NumSegments > 0 )
      break;
LABEL_22:
    if ( !results.m_collided || results.m_distTravelled >= *(float *)&_XMM6 || !bfx::AreaHandle::operator!=(&results.m_endArea, &v8->m_Path.m_Points[(int)m_CurPathPoint].m_hArea) || v37 )
      goto LABEL_61;
    v160 = ++v30;
    if ( v35 >= 50 )
    {
      v150 = vtos(&v8->m_RequestedGoalPos);
      v151 = vtos(&v8->m_LocalSnappedPathStartPos);
      Com_PrintError(18, "  DOOR DETECTION FAIL: path start point: %s  goal pos %s\n", v151, v150);
      Nav_PrintPath("  All path points:", v8->m_Path.m_Points, v8->m_Path.m_NumPoints);
LABEL_90:
      v93 = 0;
      goto LABEL_91;
    }
    if ( results.m_distTravelled > 0.001 )
    {
      iStartPos = results.m_endPos;
      v90 = _XMM6;
      *(float *)&v90 = *(float *)&_XMM6 - results.m_distTravelled;
      _XMM6 = v90;
      v161 = *(float *)&v90;
      v91 = v31;
      *(float *)&v91 = *(float *)&v31 + results.m_distTravelled;
      v31 = v91;
      v162 = *(float *)&v91;
      bfx::AreaHandle::operator=(&startingArea, &results.m_endArea);
    }
    else
    {
      m_x = results.m_endPos.m_x;
      m_y = results.m_endPos.m_y;
      m_z = results.m_endPos.m_z;
      v174 = 0.0;
      NumEdges = bfx::AreaHandle::GetNumEdges(&results.m_endArea);
      m_collideEdgeIndex = results.m_collideEdgeIndex;
      v45 = v28;
      *(float *)&v45 = fsqrt((float)(*(float *)&v28 * *(float *)&v28) + (float)(v29 * v29));
      _XMM2 = v45;
      __asm
      {
        vcmpless xmm0, xmm2, xmm7
        vblendvps xmm1, xmm2, xmm8, xmm0
      }
      v165 = *(float *)&_XMM1;
      v49 = (float)(*(float *)&v25 / *(float *)&_XMM1) * *(float *)&v28;
      v50 = (float)(*(float *)&v25 / *(float *)&_XMM1) * v29;
      bfx::AreaHandle::Release(&startingArea);
      v192[0] = 0;
      v192[1] = -1;
      v192[2] = 1;
      v51 = 0i64;
      while ( 1 )
      {
        v52 = v192[v51] + results.m_collideEdgeIndex;
        if ( v52 >= 0 )
        {
          if ( v52 >= NumEdges )
            v52 = 0;
        }
        else
        {
          v52 = NumEdges - 1;
        }
        EdgeStartPos = bfx::AreaHandle::GetEdgeStartPos(&results.m_endArea, &v185, v52);
        v54 = EdgeStartPos->m_z;
        m_y_low = LODWORD(EdgeStartPos->m_y);
        v56 = EdgeStartPos->m_x;
        EdgeEndPos = bfx::AreaHandle::GetEdgeEndPos(&results.m_endArea, &v186, v52);
        v58 = EdgeEndPos->m_z;
        v59 = LODWORD(EdgeEndPos->m_y);
        v165 = EdgeEndPos->m_x;
        v60 = v59;
        *(float *)&v60 = fsqrt((float)((float)((float)(*(float *)&v59 - *(float *)&m_y_low) * (float)(*(float *)&v59 - *(float *)&m_y_low)) + (float)((float)(v165 - v56) * (float)(v165 - v56))) + (float)((float)(v58 - v54) * (float)(v58 - v54)));
        _XMM3 = v60;
        __asm
        {
          vcmpless xmm0, xmm3, xmm7
          vblendvps xmm1, xmm3, xmm8, xmm0
        }
        v66 = v25;
        *(float *)&_XMM0 = *(float *)&v25 / *(float *)&_XMM1;
        v64 = (float)(*(float *)&v25 / *(float *)&_XMM1) * (float)(v165 - v56);
        *(float *)&v66 = (float)(*(float *)&v25 / *(float *)&_XMM1) * (float)(*(float *)&v59 - *(float *)&m_y_low);
        v65 = *(float *)&v66;
        v67 = *(float *)&_XMM0 * (float)(v58 - v54);
        v68 = (float)((float)((float)(*(float *)&_XMM0 * (float)(*(float *)&v59 - *(float *)&m_y_low)) * (float)(m_y - *(float *)&m_y_low)) + (float)((float)(m_x - v56) * v64)) + (float)(v67 * (float)(m_z - v54));
        v69 = (float)(v68 * v67) + v54;
        v70 = m_x;
        if ( (float)((float)((float)((float)(m_y - (float)((float)(v68 * *(float *)&v66) + *(float *)&m_y_low)) * (float)(m_y - (float)((float)(v68 * *(float *)&v66) + *(float *)&m_y_low))) + (float)((float)(m_x - (float)((float)(v68 * v64) + v56)) * (float)(m_x - (float)((float)(v68 * v64) + v56)))) + (float)((float)(m_z - v69) * (float)(m_z - v69))) < 1.0 )
        {
          *(float *)&v66 = fsqrt((float)(*(float *)&v66 * *(float *)&v66) + (float)(v64 * v64));
          _XMM2 = v66;
          __asm
          {
            vcmpless xmm0, xmm2, cs:__real@80000000
            vblendvps xmm1, xmm2, xmm3, xmm0
          }
          v74 = v64 * (float)(1.0 / *(float *)&_XMM1);
          v75 = v65 * (float)(1.0 / *(float *)&_XMM1);
          if ( v74 == 0.0 && v75 == 0.0 || v49 == 0.0 && v50 == 0.0 )
            goto LABEL_90;
          v76 = (float)(v75 * v50) + (float)(v49 * v74);
          if ( v76 >= 0.99900001 )
          {
            v79 = v59;
            *(float *)&v79 = fsqrt((float)((float)((float)(*(float *)&v59 - m_y) * (float)(*(float *)&v59 - m_y)) + (float)((float)(v165 - m_x) * (float)(v165 - m_x))) + (float)((float)(v58 - m_z) * (float)(v58 - m_z)));
            v78 = v79;
            iStartPos.m_x = v165;
            iStartPos.m_y = *(float *)&v59;
            iStartPos.m_z = v58;
            v70 = v165;
            m_y = *(float *)&v59;
            m_z = v58;
            m_collideEdgeIndex = v52;
            goto LABEL_45;
          }
          if ( v76 < -0.99900001 )
          {
            v77 = m_y_low;
            *(float *)&v77 = fsqrt((float)((float)((float)(*(float *)&m_y_low - m_y) * (float)(*(float *)&m_y_low - m_y)) + (float)((float)(v56 - m_x) * (float)(v56 - m_x))) + (float)((float)(v54 - m_z) * (float)(v54 - m_z)));
            v78 = v77;
            iStartPos.m_x = v56;
            iStartPos.m_y = *(float *)&m_y_low;
            iStartPos.m_z = v54;
            v70 = v56;
            m_y = *(float *)&m_y_low;
            m_z = v54;
            m_collideEdgeIndex = v52;
            goto LABEL_45;
          }
        }
        if ( ++v51 >= 3 )
          break;
        v25 = LODWORD(FLOAT_1_0);
      }
      v78 = LODWORD(v174);
LABEL_45:
      v28 = LODWORD(v175);
      v80 = (float)(v175 * 0.5) + v70;
      v29 = v173;
      v81 = (float)(v173 * 0.5) + m_y;
      v82 = (float)(0.5 * v166) + m_z;
      posWCoord.m_x = v80;
      posWCoord.m_y = v81;
      posWCoord.m_z = v82;
      v83 = 0i64;
      while ( 1 )
      {
        v84 = m_collideEdgeIndex + v192[v83];
        if ( v84 >= 0 )
        {
          if ( v84 >= NumEdges )
            v84 = 0;
        }
        else
        {
          v84 = NumEdges - 1;
        }
        bfx::AreaHandle::GetAdjacentArea(&results.m_endArea, &rhs, v84);
        if ( bfx::AreaHandle::IsValid(&rhs) )
        {
          LOBYTE(pDataOut.v[0]) = 0;
          pDataOut.v[1] = NAN;
          bfx::AreaHandle::GetClosestPosInArea(&rhs, &v190, &posWCoord, (bfx::ClosestPosData *)&pDataOut);
          if ( !LOBYTE(pDataOut.v[0]) || (float)((float)((float)((float)(v81 - v190.m_y) * (float)(v81 - v190.m_y)) + (float)((float)(v80 - v190.m_x) * (float)(v80 - v190.m_x))) + (float)((float)(v82 - v190.m_z) * (float)(v82 - v190.m_z))) < 0.0024999999 )
            break;
        }
        bfx::AreaHandle::~AreaHandle(&rhs);
        if ( ++v83 >= 3 )
          goto LABEL_56;
      }
      bfx::AreaHandle::operator=(&startingArea, &rhs);
      bfx::AreaHandle::~AreaHandle(&rhs);
LABEL_56:
      IsValid = bfx::AreaHandle::IsValid(&startingArea);
      v8 = v168;
      if ( !IsValid )
        goto LABEL_61;
      v87 = v78;
      *(float *)&v87 = *(float *)&v78 + results.m_distTravelled;
      v86 = v87;
      v88 = LODWORD(v161);
      *(float *)&v88 = v161 - *(float *)&v86;
      _XMM6 = v88;
      v161 = v161 - *(float *)&v86;
      v89 = v86;
      *(float *)&v89 = *(float *)&v86 + v162;
      v31 = v89;
      v162 = *(float *)&v86 + v162;
      v25 = LODWORD(FLOAT_1_0);
      LODWORD(m_CurPathPoint) = v156;
    }
    p_m_Length = v158;
    pathSpec = &v8->m_PathSpecOfCurPath;
    if ( *(float *)&v31 >= *v158 )
      goto LABEL_62;
  }
  while ( 1 )
  {
    if ( bfx::PolylinePathRCPtr::GetSegmentType(&results.m_path, v38) )
      goto LABEL_18;
    SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(&results.m_path, v38);
    bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
    NumObstacles = bfx::AreaHandle::GetNumObstacles(&result);
    v41 = 0;
    if ( NumObstacles > 0 )
      break;
LABEL_16:
    v8 = v168;
    if ( bfx::AreaHandle::operator==(&result, &v168->m_Path.m_Points[(int)m_CurPathPoint].m_hArea) )
    {
      v37 = 1;
      bfx::AreaHandle::~AreaHandle(&result);
LABEL_21:
      v30 = v160;
      v35 = v152;
      goto LABEL_22;
    }
    bfx::AreaHandle::~AreaHandle(&result);
LABEL_18:
    if ( ++v38 >= NumSegments )
      goto LABEL_21;
  }
  v42 = v171;
  while ( 1 )
  {
    bfx::AreaHandle::GetObstacle(&result, &v183, v41);
    if ( (v42 & bfx::ObstacleHandle::GetObstacleDat(&v183, &v187)->m_userData) != 0 )
      break;
    bfx::ObstacleHandle::~ObstacleHandle(&v183);
    if ( ++v41 >= NumObstacles )
    {
      LODWORD(m_CurPathPoint) = v156;
      goto LABEL_16;
    }
  }
  StartPos = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
  v95 = StartPos->m_z;
  v96 = StartPos->m_y;
  v97 = v181;
  v181->v[0] = StartPos->m_x;
  v97->v[1] = v96;
  v97->v[2] = v95;
  EndPos = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
  v99 = EndPos->m_z;
  v100 = LODWORD(EndPos->m_y);
  v101 = EndPos->m_x;
  v102 = v182;
  v182->v[0] = v101;
  v102->v[1] = *(float *)&v100;
  v102->v[2] = v99;
  v103 = LODWORD(v97->v[0]);
  v105 = v103;
  v104 = *(float *)&v103 - *(float *)v154;
  v106 = v97->v[1] - *(float *)&v154[4];
  v107 = v97->v[2] - *(float *)&v154[8];
  *(float *)&v105 = fsqrt((float)((float)(v104 * v104) + (float)(v106 * v106)) + (float)(v107 * v107));
  _XMM7 = v105;
  if ( (float)(*(float *)&v105 + v163) > checkDist )
  {
    v93 = 0;
    goto LABEL_88;
  }
  v109 = (__int64)v168;
  if ( v156 < v168->m_Path.m_NumPoints - 1 && (v168->m_Path.m_Points[v156 + 1].m_Flags & 0x10) != 0 )
  {
    p_m_Path = &v168->m_Path;
    nav_path_t::GetPathPoint(&v168->m_Path, v156 + 1, &pDataOut);
    *(float *)&v103 = v97->v[0];
    v99 = pDataOut.v[2];
    v100 = LODWORD(pDataOut.v[1]);
    v101 = pDataOut.v[0];
  }
  else
  {
    pDataOut.v[0] = v101;
    pDataOut.v[1] = *(float *)&v100;
    pDataOut.v[2] = v99;
    p_m_Path = &v168->m_Path;
  }
  v111 = v101 - *(float *)&v103;
  v112 = *(float **)v189.v;
  **(float **)v189.v = v111;
  v114 = v100;
  v113 = *(float *)&v100 - v97->v[1];
  v112[1] = v113;
  v115 = v99 - v97->v[2];
  *(float *)&v114 = fsqrt((float)((float)(v113 * v113) + (float)(v111 * v111)) + (float)(v115 * v115));
  _XMM3 = v114;
  __asm
  {
    vcmpless xmm0, xmm3, xmm13
    vblendvps xmm1, xmm3, xmm12, xmm0
  }
  *v112 = v111 * (float)(1.0 / *(float *)&_XMM1);
  v112[1] = v113 * (float)(1.0 / *(float *)&_XMM1);
  v112[2] = v115 * (float)(1.0 / *(float *)&_XMM1);
  if ( *(float *)&_XMM7 >= v172 || (v119 = *(_DWORD *)(v109 + 1184), v156 == v119) )
  {
    __asm
    {
      vcmpless xmm0, xmm7, xmm13
      vblendvps xmm1, xmm7, xmm12, xmm0
    }
    v149 = 1.0 / *(float *)&_XMM1;
    v137 = v177;
    v177->v[0] = (float)(1.0 / *(float *)&_XMM1) * v104;
    v145 = (float)(1.0 / *(float *)&_XMM1) * v106;
    v146 = v149 * v107;
    goto LABEL_86;
  }
  v121 = LODWORD(v172);
  *(float *)&v121 = v172 - *(float *)&_XMM7;
  v120 = v121;
  v122 = v156 - 1;
  if ( v156 > v119 )
  {
    while ( 1 )
    {
      nav_path_t::GetPathPoint(p_m_Path, v122, (vec3_t *)&v190);
      if ( *(_DWORD *)(v109 + 1184) == v122 )
      {
        v123 = *(float *)(v109 + 48);
        v189.v[0] = v123;
        v124 = *(unsigned int *)(v109 + 52);
        v189.v[1] = *(float *)(v109 + 52);
        v125 = *(float *)(v109 + 56);
        v189.v[2] = v125;
      }
      else
      {
        nav_path_t::GetPathPoint(p_m_Path, v122 - 1, &v189);
        v125 = v189.v[2];
        v124 = LODWORD(v189.v[1]);
        v123 = v189.v[0];
      }
      v126 = v124;
      *(float *)&v126 = fsqrt((float)((float)((float)(*(float *)&v124 - v190.m_y) * (float)(*(float *)&v124 - v190.m_y)) + (float)((float)(v123 - v190.m_x) * (float)(v123 - v190.m_x))) + (float)((float)(v125 - v190.m_z) * (float)(v125 - v190.m_z)));
      _XMM3 = v126;
      __asm
      {
        vcmpless xmm0, xmm3, xmm13
        vblendvps xmm1, xmm3, xmm12, xmm0
      }
      v130 = 1.0 / *(float *)&_XMM1;
      v131 = v120;
      *(float *)&v131 = *(float *)&v120 - *(float *)&_XMM3;
      v132 = (float)(1.0 / *(float *)&_XMM1) * (float)(v123 - v190.m_x);
      v133 = v130 * (float)(*(float *)&v124 - v190.m_y);
      if ( *(float *)&v131 <= 0.0 )
        break;
      v134 = *(_DWORD *)(v109 + 1184);
      if ( v122 == v134 )
        break;
      v120 = v131;
      if ( --v122 < v134 )
        goto LABEL_87;
    }
    v135 = (float)((float)(v130 * (float)(v125 - v190.m_z)) * *(float *)&v120) + v125;
    v136 = v97->v[0] - (float)((float)(v132 * *(float *)&v120) + v123);
    v137 = v177;
    v177->v[0] = v136;
    v139 = LODWORD(v97->v[1]);
    v138 = v97->v[1] - (float)((float)(v133 * *(float *)&v120) + *(float *)&v124);
    v137->v[1] = v138;
    v140 = v97->v[2] - v135;
    *(float *)&v139 = fsqrt((float)((float)(v138 * v138) + (float)(v136 * v136)) + (float)(v140 * v140));
    _XMM1 = v139;
    __asm
    {
      vcmpless xmm0, xmm1, xmm13
      vblendvps xmm1, xmm1, xmm12, xmm0
    }
    v144 = 1.0 / *(float *)&_XMM1;
    v137->v[0] = v136 * (float)(1.0 / *(float *)&_XMM1);
    v145 = v138 * (float)(1.0 / *(float *)&_XMM1);
    v146 = v140 * v144;
LABEL_86:
    v137->v[2] = v146;
    v137->v[1] = v145;
  }
LABEL_87:
  v93 = 1;
LABEL_88:
  bfx::ObstacleHandle::~ObstacleHandle(&v183);
  bfx::AreaHandle::~AreaHandle(&result);
LABEL_91:
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
  bfx::AreaHandle::~AreaHandle(&results.m_endArea);
LABEL_67:
  bfx::AreaHandle::~AreaHandle(&startingArea);
  return v93;
}

/*
==============
AINavigator2D::GetModifierLocationOnEntPath
==============
*/
bool AINavigator2D::GetModifierLocationOnEntPath(AINavigator2D *this, unsigned int flags, float checkDist, vec3_t *outStartPoint, vec3_t *outEndPoint)
{
  vec3_t outModifierDir; 
  vec3_t outApproachDir; 

  return AINavigator2D::GetModifierApproachDir(this, flags, checkDist, 0.0, outStartPoint, outEndPoint, &outApproachDir, &outModifierDir);
}

/*
==============
AINavigator2D::GetNavIndex
==============
*/
signed __int64 AINavigator2D::GetNavIndex(AINavigator2D *this)
{
  return ((char *)this - (char *)&s_Navigators2D) / 1472;
}

/*
==============
AINavigator2D::GetNextCorner
==============
*/
void AINavigator2D::GetNextCorner(AINavigator2D *this, vec3_t *corner)
{
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 923, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  nav_path_t::GetPathPoint(&this->m_Path, this->m_CurPathPoint, corner);
}

/*
==============
AINavigator2D::GetNextCornerAfterLink
==============
*/
char AINavigator2D::GetNextCornerAfterLink(AINavigator2D *this, vec3_t *corner)
{
  __int64 m_CurPathPoint; 
  __int64 m_NumPoints; 
  __int64 v6; 
  char *i; 
  int v9; 
  int v10; 
  unsigned int v11; 
  nav_path_t *p_m_Path; 
  nav_space_s *m_pSpace; 
  __int64 v14; 
  __int64 v15; 
  int v16; 

  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 979, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  m_CurPathPoint = this->m_CurPathPoint;
  m_NumPoints = this->m_Path.m_NumPoints;
  v6 = m_CurPathPoint;
  if ( m_CurPathPoint >= m_NumPoints )
    return 0;
  for ( i = (char *)this + 48 * m_CurPathPoint; *((_DWORD *)i + 54) == -1; i += 48 )
  {
    LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
    if ( ++v6 >= m_NumPoints )
      return 0;
  }
  v9 = *((_DWORD *)i + 53);
  if ( (v9 & 2) != 0 )
  {
    v10 = 2;
  }
  else
  {
    if ( (v9 & 4) == 0 )
      return 0;
    v10 = 1;
  }
  v11 = m_CurPathPoint + v10;
  if ( (int)m_CurPathPoint + v10 >= (int)m_NumPoints )
    return 0;
  p_m_Path = &this->m_Path;
  if ( !p_m_Path->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4205, ASSERT_TYPE_ASSERT, "(m_pSpace)", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  if ( v11 >= p_m_Path->m_NumPoints )
  {
    v16 = p_m_Path->m_NumPoints;
    LODWORD(v14) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4206, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  m_pSpace = p_m_Path->m_pSpace;
  if ( Nav_GetDefaultSpace() == m_pSpace )
  {
    corner->v[0] = p_m_Path->m_Points[v11].m_LocalPos.v[0];
    corner->v[1] = p_m_Path->m_Points[v11].m_LocalPos.v[1];
    corner->v[2] = p_m_Path->m_Points[v11].m_LocalPos.v[2];
    return 1;
  }
  else
  {
    if ( m_pSpace->parentEntNum >= 0x800u )
    {
      LODWORD(v15) = 2048;
      LODWORD(v14) = m_pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4214, ASSERT_TYPE_ASSERT, "(unsigned)( m_pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "m_pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    Nav_SpaceConvertLocalToWorld(p_m_Path->m_pSpace, &p_m_Path->m_Points[v11].m_LocalPos, corner);
    return 1;
  }
}

/*
==============
AINavigator2D::GetNextCornerArea
==============
*/
bfx::AreaHandle *AINavigator2D::GetNextCornerArea(AINavigator2D *this)
{
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 930, ASSERT_TYPE_ASSERT, "(m_Path.Exists())", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  return &this->m_Path.m_Points[this->m_CurPathPoint].m_hArea;
}

/*
==============
nav_path_t::GetNextLinkPathPoint
==============
*/
__int64 nav_path_t::GetNextLinkPathPoint(nav_path_t *this, int iCurPoint)
{
  __int64 m_NumPoints; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int *i; 

  m_NumPoints = this->m_NumPoints;
  v3 = iCurPoint;
  v4 = iCurPoint;
  if ( iCurPoint >= m_NumPoints )
    return 0xFFFFFFFFi64;
  for ( i = &this->m_Points[iCurPoint].m_Flags; (*(_BYTE *)i & 2) == 0; i += 12 )
  {
    ++v3;
    if ( ++v4 >= m_NumPoints )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
AINavigator2D::GetNextMultiGoalPathGoal
==============
*/
unsigned __int8 AINavigator2D::GetNextMultiGoalPathGoal(AINavigator2D *this, unsigned __int8 prevPoint, vec3_t *outPoint, bool *pbOutIsPathPoint)
{
  unsigned __int8 m_CurPathPoint; 
  unsigned __int8 m_NumPoints; 
  nav_path_t *p_m_Path; 
  nav_space_s *m_pSpace; 
  __int64 v11; 
  __int64 v12; 

  m_CurPathPoint = prevPoint;
  if ( !this->m_bMultiGoalPath )
    return -1;
  if ( prevPoint == 0xFF )
    m_CurPathPoint = this->m_CurPathPoint;
  m_NumPoints = this->m_Path.m_NumPoints;
  if ( m_CurPathPoint >= m_NumPoints )
  {
LABEL_7:
    if ( pbOutIsPathPoint )
    {
      *outPoint = this->m_SnappedGoalPos;
      *pbOutIsPathPoint = 0;
    }
    return -1;
  }
  while ( (this->m_Path.m_Points[m_CurPathPoint].m_Flags & 0x400) == 0 )
  {
    if ( ++m_CurPathPoint >= m_NumPoints )
      goto LABEL_7;
  }
  p_m_Path = &this->m_Path;
  if ( !this->m_Path.m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4205, ASSERT_TYPE_ASSERT, "(m_pSpace)", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  if ( (unsigned int)m_CurPathPoint >= p_m_Path->m_NumPoints )
  {
    LODWORD(v11) = m_CurPathPoint;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4206, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v11, p_m_Path->m_NumPoints) )
      __debugbreak();
  }
  m_pSpace = p_m_Path->m_pSpace;
  if ( Nav_GetDefaultSpace() == m_pSpace )
  {
    outPoint->v[0] = p_m_Path->m_Points[m_CurPathPoint].m_LocalPos.v[0];
    outPoint->v[1] = p_m_Path->m_Points[m_CurPathPoint].m_LocalPos.v[1];
    outPoint->v[2] = p_m_Path->m_Points[m_CurPathPoint].m_LocalPos.v[2];
  }
  else
  {
    if ( m_pSpace->parentEntNum >= 0x800u )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = m_pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4214, ASSERT_TYPE_ASSERT, "(unsigned)( m_pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "m_pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    Nav_SpaceConvertLocalToWorld(p_m_Path->m_pSpace, &p_m_Path->m_Points[m_CurPathPoint].m_LocalPos, outPoint);
  }
  if ( pbOutIsPathPoint )
    *pbOutIsPathPoint = 1;
  return m_CurPathPoint;
}

/*
==============
AINavigator2D::GetNextNCorners
==============
*/

__int64 __fastcall AINavigator2D::GetNextNCorners(AINavigator2D *this, nav_cornerdata_t *pOutCorners, int maxCorners, double pathDistThreshold, bool bGetCornerAfterThreshold)
{
  nav_cornerdata_t *v5; 
  __int64 m_CurPathPoint; 
  int v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v16; 
  bfx::CornerLinkType *p_m_LinkType; 
  unsigned int *p_m_Flags; 
  __int128 v19; 
  nav_cornerdata_t *v20; 
  unsigned int v21; 

  v5 = pOutCorners;
  _XMM6 = *(_OWORD *)&pathDistThreshold;
  if ( this->m_Path.m_NumPoints <= 0 )
    return 0i64;
  if ( maxCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1012, ASSERT_TYPE_ASSERT, "( maxCorners > 0 )", (const char *)&queryFormat, "maxCorners > 0") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1013, ASSERT_TYPE_ASSERT, "( pOutCorners )", (const char *)&queryFormat, "pOutCorners") )
    __debugbreak();
  m_CurPathPoint = this->m_CurPathPoint;
  v10 = 0;
  v11 = this->m_LocalCurSnappedPos.v[0];
  v12 = this->m_LocalCurSnappedPos.v[2];
  v13 = 0i64;
  __asm
  {
    vcmpless xmm1, xmm6, xmm8
    vblendvps xmm0, xmm6, xmm0, xmm1
  }
  v16 = this->m_LocalCurSnappedPos.v[1];
  if ( (int)m_CurPathPoint < this->m_Path.m_NumPoints )
  {
    p_m_LinkType = &v5->m_LinkType;
    p_m_Flags = &this->m_Path.m_Points[m_CurPathPoint].m_Flags;
    do
    {
      v19 = v13;
      *(float *)&v19 = *(float *)&v13 + fsqrt((float)((float)((float)(*((float *)p_m_Flags - 2) - v16) * (float)(*((float *)p_m_Flags - 2) - v16)) + (float)((float)(*((float *)p_m_Flags - 3) - v11) * (float)(*((float *)p_m_Flags - 3) - v11))) + (float)((float)(*((float *)p_m_Flags - 1) - v12) * (float)(*((float *)p_m_Flags - 1) - v12)));
      v13 = v19;
      if ( *(float *)&v19 < *(float *)&_XMM0 || bGetCornerAfterThreshold )
      {
        v20 = &v5[v10];
        nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &v20->m_Pos);
        nav_path_t::GetLinkForPathPoint(&this->m_Path, m_CurPathPoint, &v20->m_hLink);
        if ( p_m_Flags[1] == -1 )
        {
          *p_m_LinkType = CORNER_NOT_A_LINK;
        }
        else if ( (*p_m_Flags & 2) != 0 )
        {
          *p_m_LinkType = CORNER_LINK_START;
        }
        else if ( (*p_m_Flags & 4) != 0 )
        {
          *p_m_LinkType = CORNER_LINK_END;
        }
        ++v10;
        *((_BYTE *)p_m_LinkType + 20) = *(_BYTE *)p_m_Flags & 1;
        v21 = *p_m_Flags;
        *((_DWORD *)p_m_LinkType + 6) = m_CurPathPoint;
        *((_BYTE *)p_m_LinkType + 21) = (v21 & 8) != 0;
        p_m_LinkType += 10;
        v11 = *((float *)p_m_Flags - 3);
        v16 = *((float *)p_m_Flags - 2);
        v12 = *((float *)p_m_Flags - 1);
        if ( v10 >= maxCorners || *(float *)&v19 >= *(float *)&_XMM0 )
          return (unsigned int)v10;
        v5 = pOutCorners;
      }
      LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
      p_m_Flags += 12;
    }
    while ( (int)m_CurPathPoint < this->m_Path.m_NumPoints );
  }
  return (unsigned int)v10;
}

/*
==============
AINavigator2D::GetObstacleBlockageFlags
==============
*/
__int64 AINavigator2D::GetObstacleBlockageFlags(AINavigator2D *this)
{
  return this->m_BasePathSpec.m_obstacleBlockageFlags;
}

/*
==============
AINavigator2D::GetPathDistToGoal
==============
*/
float AINavigator2D::GetPathDistToGoal(AINavigator2D *this)
{
  gentity_s *m_pEnt; 
  float v4; 
  float v5; 
  __int64 m_CurPathPoint; 
  __int64 v7; 
  int v8; 
  __int64 m_NumPoints; 
  __int64 v10; 
  float v11; 
  __int128 v12; 
  float v13; 
  __int128 v14; 
  float *v15; 
  float v16; 
  unsigned __int64 v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v23; 
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
  __int64 v35; 
  float *v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  __int128 v41; 
  float v42; 

  if ( this->m_Path.m_NumPoints <= 0 )
    return 0.0;
  if ( AINavigator::ShouldPathOutOfBounds(this) )
  {
    m_pEnt = this->m_pEnt;
    v4 = this->m_RequestedGoalPos.v[0] - m_pEnt->r.currentOrigin.v[0];
    v5 = this->m_RequestedGoalPos.v[1] - m_pEnt->r.currentOrigin.v[1];
    return fsqrt((float)(v5 * v5) + (float)(v4 * v4));
  }
  else
  {
    m_CurPathPoint = this->m_CurPathPoint;
    v7 = m_CurPathPoint;
    v8 = m_CurPathPoint + 1;
    m_NumPoints = this->m_Path.m_NumPoints;
    v10 = v8;
    v11 = this->m_Path.m_Points[v7].m_LocalPos.v[0] - this->m_LocalCurSnappedPos.v[0];
    v12 = LODWORD(this->m_Path.m_Points[v7].m_LocalPos.v[1]);
    *(float *)&v12 = this->m_Path.m_Points[v7].m_LocalPos.v[1] - this->m_LocalCurSnappedPos.v[1];
    v13 = this->m_Path.m_Points[v7].m_LocalPos.v[2] - this->m_LocalCurSnappedPos.v[2];
    *(float *)&v12 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(v11 * v11)) + (float)(v13 * v13));
    v14 = v12;
    v42 = *(float *)&v12;
    if ( v8 < m_NumPoints )
    {
      if ( m_NumPoints - v8 >= 4 )
      {
        v15 = (float *)&this->m_ReevalPathTask.pPrev + 12 * v8 + 1;
        v16 = *v15;
        v17 = ((unsigned __int64)(m_NumPoints - v8 - 4) >> 2) + 1;
        v10 = v8 + 4 * v17;
        do
        {
          v18 = *((unsigned int *)v15 + 12);
          v19 = v15[24];
          v20 = v15[11];
          v21 = v20 - *(v15 - 1);
          v22 = v15[23];
          v15 += 48;
          v23 = v18;
          *(float *)&v23 = *(float *)&v18 - v16;
          v24 = *(v15 - 35);
          v25 = v24 - *(v15 - 47);
          v26 = v22 - v20;
          v27 = *(v15 - 23);
          v28 = v27 - v24;
          v29 = *(v15 - 12);
          v30 = v19 - *(float *)&v18;
          *(float *)&v18 = *(v15 - 13);
          v31 = *(float *)&v18 - v22;
          v32 = *(v15 - 11);
          v33 = (float)((float)(fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(v21 * v21)) + (float)(v25 * v25)) + v42) + fsqrt((float)((float)(v30 * v30) + (float)(v26 * v26)) + (float)(v28 * v28))) + fsqrt((float)((float)((float)(v29 - v19) * (float)(v29 - v19)) + (float)(v31 * v31)) + (float)((float)(v32 - v27) * (float)(v32 - v27)));
          v34 = fsqrt((float)((float)((float)(*v15 - v29) * (float)(*v15 - v29)) + (float)((float)(*(v15 - 1) - *(float *)&v18) * (float)(*(v15 - 1) - *(float *)&v18))) + (float)((float)(v15[1] - v32) * (float)(v15[1] - v32)));
          v16 = *v15;
          *(float *)&v23 = v33 + v34;
          v14 = v23;
          v42 = v33 + v34;
          --v17;
        }
        while ( v17 );
      }
      if ( v10 < m_NumPoints )
      {
        v35 = m_NumPoints - v10;
        v36 = (float *)&this->m_ReevalPathTask.pPrev + 12 * v10 + 1;
        v37 = *v36;
        do
        {
          v38 = v36[12];
          v39 = v36[11] - *(v36 - 1);
          v40 = v36[13] - v36[1];
          v36 += 12;
          v41 = v14;
          *(float *)&v41 = *(float *)&v14 + fsqrt((float)((float)((float)(v38 - v37) * (float)(v38 - v37)) + (float)(v39 * v39)) + (float)(v40 * v40));
          v14 = v41;
          v37 = v38;
          --v35;
        }
        while ( v35 );
      }
    }
    return *(float *)&v14;
  }
}

/*
==============
AINavigator2D::GetPathDistToGoalOrLink
==============
*/
float AINavigator2D::GetPathDistToGoalOrLink(AINavigator2D *this)
{
  gentity_s *m_pEnt; 
  float v4; 
  float v5; 
  __int64 m_CurPathPoint; 
  __int64 m_NumPoints; 
  __int64 v8; 
  __int64 v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  __int128 v13; 
  float *v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  __int128 v32; 
  float v33; 
  float v34; 
  float *v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  __int128 v40; 

  if ( this->m_Path.m_NumPoints <= 0 )
    return 0.0;
  if ( AINavigator::ShouldPathOutOfBounds(this) )
  {
    m_pEnt = this->m_pEnt;
    v4 = this->m_RequestedGoalPos.v[0] - m_pEnt->r.currentOrigin.v[0];
    v5 = this->m_RequestedGoalPos.v[1] - m_pEnt->r.currentOrigin.v[1];
    return fsqrt((float)(v5 * v5) + (float)(v4 * v4));
  }
  else
  {
    m_CurPathPoint = this->m_CurPathPoint;
    m_NumPoints = this->m_Path.m_NumPoints;
    v8 = m_CurPathPoint;
    v9 = (int)m_CurPathPoint + 1;
    v10 = this->m_Path.m_Points[v8].m_LocalPos.v[0] - this->m_LocalCurSnappedPos.v[0];
    v11 = LODWORD(this->m_Path.m_Points[v8].m_LocalPos.v[1]);
    *(float *)&v11 = this->m_Path.m_Points[v8].m_LocalPos.v[1] - this->m_LocalCurSnappedPos.v[1];
    v12 = this->m_Path.m_Points[v8].m_LocalPos.v[2] - this->m_LocalCurSnappedPos.v[2];
    *(float *)&v11 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v10 * v10)) + (float)(v12 * v12));
    v13 = v11;
    if ( v9 < m_NumPoints )
    {
      if ( m_NumPoints - v9 < 4 )
      {
LABEL_13:
        if ( v9 < m_NumPoints )
        {
          v35 = (float *)&this->m_ReevalPathTask.pPrev + 12 * v9 + 1;
          do
          {
            if ( ((_BYTE)v35[2] & 2) != 0 )
              break;
            v36 = v35[11] - *(v35 - 1);
            v37 = v35[13] - v35[1];
            v38 = (float)((float)((float)(v35[12] - *v35) * (float)(v35[12] - *v35)) + (float)(v36 * v36)) + (float)(v37 * v37);
            ++v9;
            v35 += 12;
            v39 = fsqrt(v38);
            v40 = v13;
            *(float *)&v40 = *(float *)&v13 + v39;
            v13 = v40;
          }
          while ( v9 < m_NumPoints );
        }
      }
      else
      {
        v14 = (float *)&this->m_ReevalPathTask.pPrev + 12 * v9 + 1;
        while ( ((_BYTE)v14[2] & 2) == 0 )
        {
          v15 = v14[12];
          v16 = v14[11];
          v17 = v14[13];
          v18 = v13;
          *(float *)&v18 = *(float *)&v13 + fsqrt((float)((float)((float)(v15 - *v14) * (float)(v15 - *v14)) + (float)((float)(v16 - *(v14 - 1)) * (float)(v16 - *(v14 - 1)))) + (float)((float)(v17 - v14[1]) * (float)(v17 - v14[1])));
          v13 = v18;
          if ( ((_BYTE)v14[14] & 2) != 0 )
            break;
          v19 = v14[23];
          v20 = v19 - v16;
          v21 = v14[24];
          v22 = v21 - v15;
          v23 = v14[25];
          v24 = fsqrt((float)((float)(v22 * v22) + (float)(v20 * v20)) + (float)((float)(v23 - v17) * (float)(v23 - v17)));
          v25 = v13;
          *(float *)&v25 = *(float *)&v13 + v24;
          v13 = v25;
          if ( ((_BYTE)v14[26] & 2) != 0 )
            break;
          v26 = v14[35];
          v27 = v26 - v19;
          v28 = v14[36];
          v29 = v28 - v21;
          v30 = v14[37];
          v31 = fsqrt((float)((float)(v29 * v29) + (float)(v27 * v27)) + (float)((float)(v30 - v23) * (float)(v30 - v23)));
          v32 = v13;
          *(float *)&v32 = *(float *)&v13 + v31;
          *(float *)&v13 = *(float *)&v13 + v31;
          if ( ((_BYTE)v14[38] & 2) != 0 )
            break;
          v33 = (float)((float)(v14[48] - v28) * (float)(v14[48] - v28)) + (float)((float)(v14[47] - v26) * (float)(v14[47] - v26));
          v34 = (float)(v14[49] - v30) * (float)(v14[49] - v30);
          v9 += 4i64;
          v14 += 48;
          *(float *)&v32 = *(float *)&v32 + fsqrt(v33 + v34);
          v13 = v32;
          if ( v9 >= m_NumPoints - 3 )
            goto LABEL_13;
        }
      }
    }
    return *(float *)&v13;
  }
}

/*
==============
AINavigator2D::GetPathLength
==============
*/
float AINavigator2D::GetPathLength(AINavigator2D *this)
{
  __int64 m_NumPoints; 
  float v4; 
  float v5; 
  float v6; 
  int v7; 
  float v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  float *v12; 
  unsigned __int64 v13; 
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
  float v30; 
  __int64 v31; 
  float *v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 

  m_NumPoints = this->m_Path.m_NumPoints;
  if ( (int)m_NumPoints <= 0 )
    return 0.0;
  v4 = this->m_Path.m_Points[0].m_LocalPos.v[0] - this->m_LocalSnappedPathStartPos.v[0];
  v5 = this->m_Path.m_Points[0].m_LocalPos.v[1] - this->m_LocalSnappedPathStartPos.v[1];
  v6 = this->m_Path.m_Points[0].m_LocalPos.v[2] - this->m_LocalSnappedPathStartPos.v[2];
  v7 = 1;
  v8 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6));
  if ( m_NumPoints > 1 )
  {
    v9 = 1i64;
    if ( m_NumPoints >= 5 )
    {
      v10 = m_NumPoints - 1;
      v11 = 3;
      v12 = &this->m_Path.m_Points[0].m_LocalPos.v[2];
      v13 = ((unsigned __int64)(m_NumPoints - 5) >> 2) + 1;
      v9 = 4 * v13 + 1;
      do
      {
        if ( v7 == v10 )
        {
          v14 = this->m_LocalRequestedGoalPos.v[0] - *(v12 - 2);
          v15 = this->m_LocalRequestedGoalPos.v[2];
          v16 = this->m_LocalRequestedGoalPos.v[1];
        }
        else
        {
          v14 = v12[10] - *(v12 - 2);
          v15 = v12[12];
          v16 = v12[11];
        }
        v17 = fsqrt((float)((float)((float)(v16 - *(v12 - 1)) * (float)(v16 - *(v12 - 1))) + (float)(v14 * v14)) + (float)((float)(v15 - *v12) * (float)(v15 - *v12))) + v8;
        if ( v11 - 1 == v10 )
        {
          v18 = this->m_LocalRequestedGoalPos.v[0] - v12[10];
          v19 = this->m_LocalRequestedGoalPos.v[2];
          v20 = this->m_LocalRequestedGoalPos.v[1];
        }
        else
        {
          v18 = v12[22] - v12[10];
          v19 = v12[24];
          v20 = v12[23];
        }
        v21 = fsqrt((float)((float)((float)(v20 - v12[11]) * (float)(v20 - v12[11])) + (float)(v18 * v18)) + (float)((float)(v19 - v12[12]) * (float)(v19 - v12[12]))) + v17;
        if ( v11 == v10 )
        {
          v22 = this->m_LocalRequestedGoalPos.v[0] - v12[22];
          v23 = this->m_LocalRequestedGoalPos.v[2];
          v24 = this->m_LocalRequestedGoalPos.v[1];
        }
        else
        {
          v22 = v12[34] - v12[22];
          v23 = v12[36];
          v24 = v12[35];
        }
        v25 = fsqrt((float)((float)((float)(v24 - v12[23]) * (float)(v24 - v12[23])) + (float)(v22 * v22)) + (float)((float)(v23 - v12[24]) * (float)(v23 - v12[24]))) + v21;
        if ( v11 + 1 == v10 )
        {
          v26 = this->m_LocalRequestedGoalPos.v[0] - v12[34];
          v27 = this->m_LocalRequestedGoalPos.v[2];
          v28 = this->m_LocalRequestedGoalPos.v[1];
        }
        else
        {
          v26 = v12[46] - v12[34];
          v27 = v12[48];
          v28 = v12[47];
        }
        v29 = v27 - v12[36];
        v30 = (float)(v28 - v12[35]) * (float)(v28 - v12[35]);
        v7 += 4;
        v11 += 4;
        v12 += 48;
        v8 = fsqrt((float)(v30 + (float)(v26 * v26)) + (float)(v29 * v29)) + v25;
        --v13;
      }
      while ( v13 );
    }
    if ( v9 < m_NumPoints )
    {
      v31 = m_NumPoints - v9;
      v32 = (float *)&this->m_ReevalPathTask.pPrev + 12 * v9 + 1;
      do
      {
        if ( v7 == (_DWORD)m_NumPoints - 1 )
        {
          v33 = this->m_LocalRequestedGoalPos.v[0] - *(v32 - 1);
          v34 = this->m_LocalRequestedGoalPos.v[2];
          v35 = this->m_LocalRequestedGoalPos.v[1] - *v32;
        }
        else
        {
          v35 = v32[11] - *(v32 - 1);
          v34 = v32[13];
          v33 = v32[12] - *v32;
        }
        v36 = (float)(v34 - v32[1]) * (float)(v34 - v32[1]);
        ++v7;
        v32 += 12;
        v8 = fsqrt((float)((float)(v33 * v33) + (float)(v35 * v35)) + v36) + v8;
        --v31;
      }
      while ( v31 );
    }
  }
  return v8;
}

/*
==============
nav_path_t::GetPathPoint
==============
*/
void nav_path_t::GetPathPoint(nav_path_t *this, int iPoint, vec3_t *outPoint)
{
  __int64 v4; 
  nav_space_s *m_pSpace; 
  __int64 v7; 
  __int64 v8; 
  int m_NumPoints; 

  v4 = iPoint;
  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4205, ASSERT_TYPE_ASSERT, "(m_pSpace)", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  if ( (unsigned int)v4 >= this->m_NumPoints )
  {
    m_NumPoints = this->m_NumPoints;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4206, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v7, m_NumPoints) )
      __debugbreak();
  }
  m_pSpace = this->m_pSpace;
  if ( Nav_GetDefaultSpace() == m_pSpace )
  {
    outPoint->v[0] = this->m_Points[v4].m_LocalPos.v[0];
    outPoint->v[1] = this->m_Points[v4].m_LocalPos.v[1];
    outPoint->v[2] = this->m_Points[v4].m_LocalPos.v[2];
  }
  else
  {
    if ( m_pSpace->parentEntNum >= 0x800u )
    {
      LODWORD(v8) = 2048;
      LODWORD(v7) = m_pSpace->parentEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4214, ASSERT_TYPE_ASSERT, "(unsigned)( m_pSpace->parentEntNum ) < (unsigned)( ( 2048 ) )", "m_pSpace->parentEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    Nav_SpaceConvertLocalToWorld(this->m_pSpace, &this->m_Points[v4].m_LocalPos, outPoint);
  }
}

/*
==============
AINavigator2D::GetPathSpec
==============
*/
const bfx::PathSpec *AINavigator2D::GetPathSpec(AINavigator2D *this)
{
  const bfx::PathSpec *result; 

  result = &this->m_PathSpecOfCurPath;
  if ( !this->m_bPathRequested )
    return &this->m_BasePathSpec;
  return result;
}

/*
==============
AINavigator2D::GetPosAlongPath
==============
*/
void AINavigator2D::GetPosAlongPath(AINavigator2D *this, float dist, bool bStopAtLink, nav_posAlongPathResults_t *pOutResults, bool bCalcArea)
{
  bool ShouldPathOutOfBounds; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 m_CurPathPoint; 
  int m_NumPoints; 
  float v16; 
  float v17; 
  __int128 m_PathDistToPos_low; 
  float *v19; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  __int64 v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  __int64 v35; 
  const bfx::AreaHandle *ClosestArea; 
  bfx::AreaHandle result; 
  vec3_t outLocalPos; 
  bfx::Vector3 pos; 
  vec3_t localPos; 

  if ( !pOutResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 786, ASSERT_TYPE_ASSERT, "( pOutResults )", (const char *)&queryFormat, "pOutResults") )
    __debugbreak();
  pOutResults->m_PathDistToPos = 0.0;
  if ( dist == 0.0 || this->m_Path.m_NumPoints <= 0 )
  {
    this->GetCurPos(this, (vec3_t *)&pos);
    pOutResults->m_Pos = (vec3_t)pos;
    bfx::AreaHandle::operator=(&pOutResults->m_hArea, &this->m_hCurArea);
    bfx::LinkHandle::Release(&pOutResults->m_hLink);
    pOutResults->m_numPointsAlongPath = 0;
    goto LABEL_35;
  }
  ShouldPathOutOfBounds = AINavigator::ShouldPathOutOfBounds(this);
  if ( ShouldPathOutOfBounds )
  {
    Nav_SpaceConvertWorldToLocal(this->m_pSpace, &this->m_pEnt->r.currentOrigin, &outLocalPos);
    v10 = outLocalPos.v[1];
    v11 = outLocalPos.v[0];
  }
  else
  {
    v11 = this->m_LocalCurSnappedPos.v[0];
    outLocalPos.v[0] = v11;
    v10 = this->m_LocalCurSnappedPos.v[1];
    outLocalPos.v[1] = v10;
  }
  v12 = this->m_LocalCurSnappedPos.v[2];
  v13 = v12;
  outLocalPos.v[2] = v12;
  m_CurPathPoint = this->m_CurPathPoint;
  m_NumPoints = this->m_Path.m_NumPoints;
  if ( (int)m_CurPathPoint < m_NumPoints )
  {
    v16 = v12;
    v17 = v12;
    m_PathDistToPos_low = LODWORD(pOutResults->m_PathDistToPos);
    v19 = &this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2];
    while ( 1 )
    {
      if ( ShouldPathOutOfBounds && (v16 = v17, (_DWORD)m_CurPathPoint == m_NumPoints - 1) )
      {
        v20 = this->m_LocalRequestedGoalPos.v[0] - v11;
        v21 = this->m_LocalRequestedGoalPos.v[1];
        v22 = this->m_LocalRequestedGoalPos.v[2] - v13;
      }
      else
      {
        v20 = *(v19 - 2) - v11;
        v21 = *(v19 - 1);
        v22 = *v19 - v16;
      }
      v23 = m_PathDistToPos_low;
      *(float *)&v23 = *(float *)&m_PathDistToPos_low + fsqrt((float)((float)((float)(v21 - v10) * (float)(v21 - v10)) + (float)(v20 * v20)) + (float)(v22 * v22));
      if ( *(float *)&v23 > dist )
        break;
      pOutResults->m_PathDistToPos = *(float *)&v23;
      pOutResults->m_numPointsAlongPath = m_CurPathPoint - this->m_CurPathPoint;
      v11 = *(v19 - 2);
      outLocalPos.v[0] = v11;
      v10 = *(v19 - 1);
      outLocalPos.v[1] = v10;
      v12 = *v19;
      v13 = *v19;
      outLocalPos.v[2] = *v19;
      m_NumPoints = this->m_Path.m_NumPoints;
      if ( (_DWORD)m_CurPathPoint == m_NumPoints - 1 )
      {
        nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &pOutResults->m_Pos);
        bfx::AreaHandle::operator=(&pOutResults->m_hArea, &this->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
        bfx::LinkHandle::Release(&pOutResults->m_hLink);
        pOutResults->m_PosType = POS_AT_GOAL;
        return;
      }
      if ( bStopAtLink && ((_BYTE)v19[1] & 2) != 0 )
      {
        nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &pOutResults->m_Pos);
        bfx::AreaHandle::operator=(&pOutResults->m_hArea, &this->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
        nav_path_t::GetLinkForPathPoint(&this->m_Path, m_CurPathPoint, &pOutResults->m_hLink);
        pOutResults->m_bBackwardsLink = (this->m_Path.m_Points[(int)m_CurPathPoint].m_Flags & 8) != 0;
        pOutResults->m_PosType = POS_ON_LINK;
        return;
      }
      LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
      v19 += 12;
      v16 = v13;
      v17 = v13;
      m_PathDistToPos_low = v23;
      if ( (int)m_CurPathPoint >= m_NumPoints )
        return;
    }
    v24 = dist - *(float *)&m_PathDistToPos_low;
    pOutResults->m_PathDistToPos = *(float *)&m_PathDistToPos_low + v24;
    pOutResults->m_numPointsAlongPath = m_CurPathPoint - this->m_CurPathPoint;
    if ( ShouldPathOutOfBounds && (_DWORD)m_CurPathPoint == this->m_Path.m_NumPoints - 1 )
    {
      v25 = this->m_LocalRequestedGoalPos.v[0] - v11;
      v26 = LODWORD(this->m_LocalRequestedGoalPos.v[1]);
      v27 = this->m_LocalRequestedGoalPos.v[2];
      v28 = (int)m_CurPathPoint;
    }
    else
    {
      v28 = (int)m_CurPathPoint;
      v25 = this->m_Path.m_Points[(int)m_CurPathPoint].m_LocalPos.v[0] - v11;
      v26 = LODWORD(this->m_Path.m_Points[(int)m_CurPathPoint].m_LocalPos.v[1]);
      v27 = this->m_Path.m_Points[(int)m_CurPathPoint].m_LocalPos.v[2];
    }
    v29 = v27 - v12;
    v31 = v26;
    v30 = *(float *)&v26 - v10;
    *(float *)&v31 = fsqrt((float)((float)(v30 * v30) + (float)(v25 * v25)) + (float)(v29 * v29));
    _XMM3 = v31;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm2, xmm0
    }
    localPos.v[0] = (float)((float)(v25 * (float)(1.0 / *(float *)&_XMM1)) * v24) + v11;
    localPos.v[1] = (float)((float)(v30 * (float)(1.0 / *(float *)&_XMM1)) * v24) + v10;
    localPos.v[2] = (float)((float)(v29 * (float)(1.0 / *(float *)&_XMM1)) * v24) + v12;
    Nav_SpaceConvertLocalToWorld(this->m_Path.m_pSpace, &localPos, &pOutResults->m_Pos);
    v35 = v28;
    if ( (this->m_Path.m_Points[v35].m_Flags & 4) != 0 )
    {
      bfx::AreaHandle::operator=(&pOutResults->m_hArea, &this->m_Path.m_Points[v35].m_hArea);
      pOutResults->m_bBackwardsLink = (this->m_Path.m_Points[v35].m_Flags & 8) != 0;
      if ( !bStopAtLink )
      {
        nav_path_t::GetLinkForPathPoint(&this->m_Path, m_CurPathPoint, &pOutResults->m_hLink);
        pOutResults->m_PosType = POS_ON_LINK;
        return;
      }
    }
    else
    {
      pos = (bfx::Vector3)pOutResults->m_Pos;
      if ( bCalcArea )
      {
        ClosestArea = bfx::GetClosestArea(&result, &this->m_pSpace->hSpace, &pos, this->m_Layer, &this->m_PathSpecOfCurPath);
        bfx::AreaHandle::operator=(&pOutResults->m_hArea, ClosestArea);
        bfx::AreaHandle::~AreaHandle(&result);
        bfx::LinkHandle::Release(&pOutResults->m_hLink);
LABEL_35:
        pOutResults->m_PosType = POS_ON_SURFACE;
        return;
      }
      bfx::AreaHandle::Release(&pOutResults->m_hArea);
    }
    bfx::LinkHandle::Release(&pOutResults->m_hLink);
    goto LABEL_35;
  }
}

/*
==============
AINavigator2D::GetPrevCorner
==============
*/
void AINavigator2D::GetPrevCorner(AINavigator2D *this, vec3_t *corner)
{
  int m_CurPathPoint; 

  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 936, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  m_CurPathPoint = this->m_CurPathPoint;
  if ( m_CurPathPoint <= 0 )
    AINavigator::WorldifyPosFromSpace(this, &this->m_Path.m_LocalStartPoint, corner);
  else
    nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint - 1, corner);
}

/*
==============
AINavigator2D::GetPrevCornerPassed
==============
*/
void AINavigator2D::GetPrevCornerPassed(AINavigator2D *this, vec3_t *corner)
{
  int m_CurPathPoint; 
  int v5; 
  unsigned int *p_m_Flags; 
  float v7; 
  float v8; 
  float v9; 
  vec3_t outDir; 

  m_CurPathPoint = this->m_CurPathPoint;
  if ( m_CurPathPoint )
  {
    v5 = m_CurPathPoint - 1;
    if ( v5 < 0 )
    {
LABEL_9:
      if ( v5 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 973, ASSERT_TYPE_ASSERT, "(prevCornerIndex == -1)", (const char *)&queryFormat, "prevCornerIndex == -1") )
        __debugbreak();
    }
    else
    {
      p_m_Flags = &this->m_Path.m_Points[v5].m_Flags;
      while ( 1 )
      {
        nav_path_t::GetPathPoint(&this->m_Path, v5, corner);
        v7 = corner->v[0] - this->m_CurSnappedPos.v[0];
        v8 = corner->v[2] - this->m_CurSnappedPos.v[2];
        v9 = corner->v[1] - this->m_CurSnappedPos.v[1];
        nav_path_t::GetDir(&this->m_Path, v5, &outDir);
        if ( (*p_m_Flags & 2) != 0 || (*p_m_Flags & 0xC10) != 0 || (float)((float)((float)(v9 * outDir.v[1]) + (float)(v7 * outDir.v[0])) + (float)(v8 * outDir.v[2])) < 0.0 )
          break;
        p_m_Flags -= 12;
        if ( --v5 < 0 )
          goto LABEL_9;
      }
    }
  }
  else
  {
    AINavigator::WorldifyPosFromSpace(this, &this->m_Path.m_LocalStartPoint, corner);
  }
}

/*
==============
AINavigator2D::GetStairsStateAtDist
==============
*/
__int64 AINavigator2D::GetStairsStateAtDist(AINavigator2D *this, float checkDist, vec3_t *outPosAtDist)
{
  unsigned int v5; 
  bfx::PathSpec *pathSpec; 
  __int128 v8; 
  float v9; 
  float v10; 
  float v11; 
  __int64 m_CurPathPoint; 
  float v13; 
  float v14; 
  float v15; 
  float *p_m_Length; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v21; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v32; 
  float v33; 
  bfx::ProbeSpec probeSpec; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  bfx::AreaHandle startingArea; 
  bfx::ProbeResults results; 
  __int64 v40; 
  vec3_t outPoint; 
  vec3_t outUp; 

  v40 = -2i64;
  v5 = 0;
  *(_QWORD *)outPosAtDist->v = 0i64;
  outPosAtDist->v[2] = 0.0;
  if ( this->m_Path.m_NumPoints <= 0 )
    return 0i64;
  probeSpec.m_probeType = NAVPROBE_TYPE_HORIZONTAL;
  pathSpec = &this->m_PathSpecOfCurPath;
  v8 = 0i64;
  bfx::AreaHandle::AreaHandle(&startingArea);
  v9 = this->m_CurSnappedPos.v[0];
  v10 = this->m_CurSnappedPos.v[1];
  v11 = this->m_CurSnappedPos.v[2];
  bfx::AreaHandle::operator=(&startingArea, &this->m_hCurArea);
  m_CurPathPoint = this->m_CurPathPoint;
  if ( (int)m_CurPathPoint < this->m_Path.m_NumPoints )
  {
    v13 = v9;
    v14 = v10;
    v15 = v11;
    p_m_Length = &this->m_Path.m_Points[m_CurPathPoint].m_Length;
    while ( 1 )
    {
      nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &outPoint);
      v17 = outPoint.v[0];
      v18 = outPoint.v[0] - v13;
      v19 = outPoint.v[1];
      v20 = LODWORD(outPoint.v[1]);
      v21 = outPoint.v[2] - v15;
      *(float *)&v20 = fsqrt((float)((float)((float)(outPoint.v[1] - v14) * (float)(outPoint.v[1] - v14)) + (float)(v18 * v18)) + (float)(v21 * v21));
      _XMM3 = v20;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm2, xmm0
      }
      v25 = v18 * (float)(1.0 / *(float *)&_XMM1);
      v26 = (float)(outPoint.v[1] - v14) * (float)(1.0 / *(float *)&_XMM1);
      v27 = v21 * (float)(1.0 / *(float *)&_XMM1);
      v33 = v27;
      v28 = v8;
      *(float *)&v28 = *(float *)&v8 + *p_m_Length;
      if ( *(float *)&v28 >= checkDist )
        break;
      v8 = v28;
      v9 = outPoint.v[0];
      v10 = outPoint.v[1];
      v11 = outPoint.v[2];
      bfx::AreaHandle::operator=(&startingArea, &this->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
      LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
      p_m_Length += 12;
      v13 = v17;
      v14 = v19;
      v15 = v11;
      if ( (int)m_CurPathPoint >= this->m_Path.m_NumPoints )
        goto LABEL_15;
    }
    if ( (this->m_Path.m_Points[(int)m_CurPathPoint].m_Flags & 0x10) != 0 )
    {
      iStartPos.m_x = v9;
      iStartPos.m_y = v10;
      iStartPos.m_z = v11;
      dir.m_x = v25;
      dir.m_y = v26;
      dir.m_z = v27;
      _XMM0 = LODWORD(this->m_Path.m_Points[(int)m_CurPathPoint].m_Length);
      __asm
      {
        vminss  xmm1, xmm0, xmm1
        vmaxss  xmm6, xmm1, cs:__real@3dcccccd
      }
      bfx::AreaHandle::AreaHandle(&results.m_endArea);
      results.m_collided = 0;
      results.m_collideEdgeIndex = -1;
      results.m_generatePath = 0;
      bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
      bfx::NavProbe(&startingArea, &iStartPos, &dir, *(float *)&_XMM6, pathSpec, &probeSpec, &results);
      if ( bfx::AreaHandle::IsValid(&results.m_endArea) && (bfx::AreaHandle::GetAreaUsageFlags(&results.m_endArea) & 0x80000000) != 0 )
      {
        outPosAtDist->v[0] = results.m_endPos.m_x;
        outPosAtDist->v[1] = results.m_endPos.m_y;
        outPosAtDist->v[2] = results.m_endPos.m_z;
        Nav_GetSpaceUp(this->m_pSpace, &outUp);
        v32 = (float)((float)(v25 * outUp.v[0]) + (float)(v26 * outUp.v[1])) + (float)(v33 * outUp.v[2]);
        if ( COERCE_FLOAT(LODWORD(v32) & _xmm) >= 0.001 )
        {
          v5 = 1;
          if ( v32 <= 0.0 )
            v5 = 2;
        }
      }
      bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
      bfx::AreaHandle::~AreaHandle(&results.m_endArea);
    }
  }
LABEL_15:
  bfx::AreaHandle::~AreaHandle(&startingArea);
  return v5;
}

/*
==============
AINavigator2D::GetStairsStateWithinDist
==============
*/
__int64 AINavigator2D::GetStairsStateWithinDist(AINavigator2D *this, float checkDist, bool bCurrentlyOnStairs)
{
  float v3; 
  __int128 v16; 
  float v17; 
  float v18; 
  float v19; 
  __int64 m_CurPathPoint; 
  __int64 v21; 
  float v22; 
  float v23; 
  float v24; 
  int v25; 
  unsigned int *p_m_Flags; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  float v32; 
  float v33; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float m_x; 
  float m_y; 
  float m_z; 
  int v44; 
  __int64 v45; 
  float v47; 
  float v48; 
  float v49; 
  __int128 v50; 
  __int128 v53; 
  __int128 v56; 
  float v57; 
  int v58; 
  unsigned int v59; 
  bfx::ProbeSpec probeSpec; 
  float v62; 
  float v63; 
  float v64; 
  bfx::AreaHandle startingArea; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  bfx::ProbeResults results; 
  __int64 v69; 
  vec3_t outPoint; 
  vec3_t outUp; 
  bfx::PathSpec pathSpec; 

  v69 = -2i64;
  v3 = checkDist;
  if ( this->m_Path.m_NumPoints <= 0 )
    return 0i64;
  _XMM0 = bCurrentlyOnStairs;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_0_17399999);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  v63 = *(float *)&_XMM0;
  _XMM0 = bCurrentlyOnStairs;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM2 = LODWORD(FLOAT_40_0);
  _XMM1 = LODWORD(FLOAT_20_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  v64 = *(float *)&_XMM0;
  probeSpec.m_probeType = NAVPROBE_TYPE_HORIZONTAL;
  pathSpec = this->m_PathSpecOfCurPath;
  __asm { vpextrd rax, xmm2, 2 }
  pathSpec.m_areaUsageFlags = _RAX & 0x7FFFFFFF;
  v16 = 0i64;
  bfx::AreaHandle::AreaHandle(&startingArea, &this->m_hCurArea);
  v17 = this->m_CurSnappedPos.v[0];
  v18 = this->m_CurSnappedPos.v[1];
  v19 = this->m_CurSnappedPos.v[2];
  m_CurPathPoint = this->m_CurPathPoint;
  if ( (int)m_CurPathPoint < this->m_Path.m_NumPoints )
  {
    v21 = this->m_CurPathPoint;
    v22 = this->m_CurSnappedPos.v[0];
    v23 = this->m_CurSnappedPos.v[1];
    v24 = this->m_CurSnappedPos.v[2];
    v25 = m_CurPathPoint + 1;
    p_m_Flags = &this->m_Path.m_Points[m_CurPathPoint].m_Flags;
    while ( *(float *)&v16 <= v3 )
    {
      nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &outPoint);
      v27 = outPoint.v[0];
      v28 = outPoint.v[0] - v22;
      v29 = outPoint.v[1];
      v31 = LODWORD(outPoint.v[1]);
      v30 = outPoint.v[1] - v23;
      v32 = outPoint.v[2];
      v33 = outPoint.v[2] - v24;
      *(float *)&v31 = fsqrt((float)((float)(v30 * v30) + (float)(v28 * v28)) + (float)(v33 * v33));
      _XMM7 = v31;
      __asm
      {
        vcmpless xmm0, xmm7, cs:__real@80000000
        vblendvps xmm1, xmm7, xmm15, xmm0
      }
      v37 = 1.0 / *(float *)&_XMM1;
      v38 = v28 * (float)(1.0 / *(float *)&_XMM1);
      v62 = v38;
      v39 = v30 * (float)(1.0 / *(float *)&_XMM1);
      v40 = (float)(outPoint.v[2] - v24) * v37;
      if ( (_DWORD)m_CurPathPoint != this->m_CurPathPoint )
        LODWORD(_XMM7) = p_m_Flags[2];
      if ( (*(_BYTE *)p_m_Flags & 0x10) != 0 )
      {
        iStartPos.m_x = v17;
        iStartPos.m_y = v18;
        iStartPos.m_z = v19;
        dir.m_x = v38;
        dir.m_y = v39;
        dir.m_z = v33 * v37;
        bfx::AreaHandle::AreaHandle(&results.m_endArea);
        results.m_collided = 0;
        results.m_collideEdgeIndex = -1;
        results.m_generatePath = 0;
        bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
        bfx::NavProbe(&startingArea, &iStartPos, &dir, *(float *)&_XMM7, &pathSpec, &probeSpec, &results);
        if ( bfx::AreaHandle::IsValid(&results.m_endArea) )
        {
          m_x = results.m_endPos.m_x;
          m_y = results.m_endPos.m_y;
          m_z = results.m_endPos.m_z;
          v44 = m_CurPathPoint;
          v45 = v21;
          if ( (bfx::AreaHandle::GetAreaUsageFlags(&startingArea) & 0x80000000) == 0 )
          {
            if ( (float)(results.m_distTravelled + *(float *)&v16) >= checkDist )
              goto LABEL_31;
            if ( results.m_distTravelled >= (float)(*(float *)&_XMM7 - 1.0) )
            {
              if ( (int)m_CurPathPoint >= this->m_Path.m_NumPoints - 1 )
                goto LABEL_31;
              nav_path_t::GetPathPoint(&this->m_Path, v25, &outUp);
              v53 = LODWORD(outUp.v[1]);
              v44 = v25;
              v45 = v21 + 1;
              *(float *)&v53 = fsqrt((float)((float)((float)(outUp.v[1] - m_y) * (float)(outUp.v[1] - m_y)) + (float)((float)(outUp.v[0] - m_x) * (float)(outUp.v[0] - m_x))) + (float)((float)(outUp.v[2] - m_z) * (float)(outUp.v[2] - m_z)));
              _XMM2 = v53;
              __asm
              {
                vcmpless xmm0, xmm2, cs:__real@80000000
                vblendvps xmm1, xmm2, xmm15, xmm0
              }
              v47 = (float)(1.0 / *(float *)&_XMM1) * (float)(outUp.v[0] - m_x);
              v48 = (float)(1.0 / *(float *)&_XMM1) * (float)(outUp.v[1] - m_y);
              v40 = (float)(1.0 / *(float *)&_XMM1) * (float)(outUp.v[2] - m_z);
            }
            else
            {
              v49 = outPoint.v[0] - m_x;
              v50 = LODWORD(outPoint.v[1]);
              *(float *)&v50 = fsqrt((float)((float)((float)(outPoint.v[1] - m_y) * (float)(outPoint.v[1] - m_y)) + (float)(v49 * v49)) + (float)((float)(outPoint.v[2] - m_z) * (float)(outPoint.v[2] - m_z)));
              _XMM2 = v50;
              __asm
              {
                vcmpless xmm0, xmm2, cs:__real@80000000
                vblendvps xmm1, xmm2, xmm15, xmm0
              }
              v47 = (float)(1.0 / *(float *)&_XMM1) * v49;
              v48 = (float)(1.0 / *(float *)&_XMM1) * (float)(outPoint.v[1] - m_y);
              v40 = (float)(1.0 / *(float *)&_XMM1) * (float)(outPoint.v[2] - m_z);
            }
          }
          else
          {
            LODWORD(_XMM2) = _XMM7;
            v47 = v62;
            v48 = v39;
          }
          if ( COERCE_FLOAT(LODWORD(v40) & _xmm) > v63 && (*(float *)&_XMM2 >= v64 || v44 != this->m_Path.m_NumPoints - 1 && (this->m_Path.m_Points[v45 + 1].m_Flags & 0x10) != 0) && ((bfx::AreaHandle::GetAreaUsageFlags(&results.m_endArea) & 0x80000000) != 0 || results.m_collideEdgeIndex >= 0 || (bfx::AreaHandle::GetAreaUsageFlags(&startingArea) & 0x80000000) != 0) )
          {
            Nav_GetSpaceUp(this->m_pSpace, &outUp);
            v57 = (float)((float)(v47 * outUp.v[0]) + (float)(v48 * outUp.v[1])) + (float)(v40 * outUp.v[2]);
            if ( COERCE_FLOAT(LODWORD(v57) & _xmm) < 0.001 )
            {
LABEL_31:
              v58 = 0;
LABEL_32:
              v59 = v58;
            }
            else
            {
              if ( v57 > 0.0 )
              {
                v58 = 1;
                goto LABEL_32;
              }
              v59 = 2;
            }
            bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
            bfx::AreaHandle::~AreaHandle(&results.m_endArea);
            goto LABEL_35;
          }
        }
        bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
        bfx::AreaHandle::~AreaHandle(&results.m_endArea);
        v32 = outPoint.v[2];
        v29 = outPoint.v[1];
        v27 = outPoint.v[0];
      }
      v56 = v16;
      *(float *)&v56 = *(float *)&v16 + *(float *)&_XMM7;
      v16 = v56;
      v17 = v27;
      v18 = v29;
      v19 = v32;
      bfx::AreaHandle::operator=(&startingArea, &this->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
      LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
      ++v25;
      ++v21;
      p_m_Flags += 12;
      v22 = v27;
      v23 = v29;
      v24 = v19;
      if ( (int)m_CurPathPoint >= this->m_Path.m_NumPoints )
        break;
      v3 = checkDist;
    }
  }
  v59 = 0;
LABEL_35:
  bfx::AreaHandle::~AreaHandle(&startingArea);
  return v59;
}

/*
==============
AINavigator2D::GetStairsWithinDist
==============
*/
bool AINavigator2D::GetStairsWithinDist(AINavigator2D *this, float checkDist)
{
  __int64 v2; 

  return ((unsigned int (__fastcall *)(AINavigator2D *, __int64, _QWORD))this->GetStairsStateWithinDist)(this, v2, 0i64) != 0;
}

/*
==============
AINavigator2D::GetStairsWithinDist_OLD
==============
*/
char AINavigator2D::GetStairsWithinDist_OLD(AINavigator2D *this, float checkDist)
{
  __int128 v5; 
  float v6; 
  float v7; 
  float v8; 
  __int64 m_CurPathPoint; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int *p_m_Flags; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v23; 
  __int128 v24; 
  __int128 v27; 
  char v28; 
  bfx::ProbeSpec probeSpec; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  bfx::AreaHandle result; 
  bfx::ProbeResults results; 
  bfx::AreaHandle startingArea; 
  __int64 v35; 
  vec3_t outPoint; 
  bfx::PathSpec pathSpec; 

  v35 = -2i64;
  if ( this->m_Path.m_NumPoints <= 0 )
    return 0;
  if ( bfx::AreaHandle::IsValid(&this->m_hCurArea) && (bfx::AreaHandle::GetAreaUsageFlags(&this->m_hCurArea) & 0x80000000) != 0 )
    return 1;
  v5 = 0i64;
  bfx::AreaHandle::AreaHandle(&startingArea, &this->m_hCurArea);
  v6 = this->m_CurSnappedPos.v[0];
  v7 = this->m_CurSnappedPos.v[1];
  v8 = this->m_CurSnappedPos.v[2];
  m_CurPathPoint = this->m_CurPathPoint;
  if ( (int)m_CurPathPoint < this->m_Path.m_NumPoints )
  {
    v10 = this->m_CurSnappedPos.v[0];
    v11 = this->m_CurSnappedPos.v[1];
    v12 = this->m_CurSnappedPos.v[2];
    p_m_Flags = &this->m_Path.m_Points[m_CurPathPoint].m_Flags;
    do
    {
      if ( *(float *)&v5 > checkDist )
        break;
      nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &outPoint);
      v14 = outPoint.v[0];
      v15 = outPoint.v[0] - v10;
      v16 = outPoint.v[1];
      v18 = LODWORD(outPoint.v[1]);
      v17 = outPoint.v[1] - v11;
      v19 = outPoint.v[2];
      *(float *)&v18 = fsqrt((float)((float)(v17 * v17) + (float)(v15 * v15)) + (float)((float)(outPoint.v[2] - v12) * (float)(outPoint.v[2] - v12)));
      _XMM7 = v18;
      __asm
      {
        vcmpless xmm0, xmm7, cs:__real@80000000
        vblendvps xmm1, xmm7, xmm2, xmm0
      }
      probeSpec.m_probeType = _XMM1;
      v24 = LODWORD(FLOAT_1_0);
      v23 = 1.0 / *(float *)&_XMM1;
      *(float *)&v24 = (float)(1.0 / *(float *)&_XMM1) * v15;
      _XMM2 = v24;
      if ( (_DWORD)m_CurPathPoint != this->m_CurPathPoint )
        LODWORD(_XMM7) = p_m_Flags[2];
      if ( (*(_BYTE *)p_m_Flags & 0x10) != 0 )
      {
        iStartPos.m_x = v6;
        iStartPos.m_y = v7;
        iStartPos.m_z = v8;
        dir.m_x = (float)(1.0 / *(float *)&_XMM1) * v15;
        dir.m_y = v23 * v17;
        dir.m_z = v23 * (float)(outPoint.v[2] - v12);
        probeSpec.m_probeType = NAVPROBE_TYPE_HORIZONTAL;
        pathSpec = this->m_PathSpecOfCurPath;
        __asm { vpextrd rax, xmm2, 2 }
        pathSpec.m_areaUsageFlags = _RAX & 0x7FFFFFFF;
        bfx::AreaHandle::AreaHandle(&results.m_endArea);
        results.m_collided = 0;
        results.m_collideEdgeIndex = -1;
        results.m_generatePath = 0;
        bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
        bfx::NavProbe(&startingArea, &iStartPos, &dir, *(float *)&_XMM7, &pathSpec, &probeSpec, &results);
        if ( (float)(*(float *)&v5 + results.m_distTravelled) >= checkDist )
        {
          v28 = 0;
          goto LABEL_27;
        }
        if ( bfx::AreaHandle::IsValid(&results.m_endArea) )
        {
          if ( (bfx::AreaHandle::GetAreaUsageFlags(&results.m_endArea) & 0x80000000) != 0 )
          {
            v28 = 1;
            goto LABEL_27;
          }
          if ( results.m_collideEdgeIndex >= 0 )
          {
            bfx::AreaHandle::GetAdjacentArea(&results.m_endArea, &result, results.m_collideEdgeIndex);
            if ( bfx::AreaHandle::IsValid(&result) && (bfx::AreaHandle::GetAreaUsageFlags(&result) & 0x80000000) != 0 )
            {
              v28 = 1;
              bfx::AreaHandle::~AreaHandle(&result);
LABEL_27:
              bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
              bfx::AreaHandle::~AreaHandle(&results.m_endArea);
              goto LABEL_22;
            }
            bfx::AreaHandle::~AreaHandle(&result);
          }
        }
        bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
        bfx::AreaHandle::~AreaHandle(&results.m_endArea);
        v19 = outPoint.v[2];
        v16 = outPoint.v[1];
        v14 = outPoint.v[0];
      }
      v27 = v5;
      *(float *)&v27 = *(float *)&v5 + *(float *)&_XMM7;
      v5 = v27;
      v6 = v14;
      v7 = v16;
      v8 = v19;
      bfx::AreaHandle::operator=(&startingArea, &this->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
      LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
      p_m_Flags += 12;
      v10 = v14;
      v11 = v16;
      v12 = v8;
    }
    while ( (int)m_CurPathPoint < this->m_Path.m_NumPoints );
  }
  v28 = 0;
LABEL_22:
  bfx::AreaHandle::~AreaHandle(&startingArea);
  return v28;
}

/*
==============
AINavigator2D::GetSuppressionObstacleMask
==============
*/
__int64 AINavigator2D::GetSuppressionObstacleMask(AINavigator2D *this, int idx)
{
  __int64 v2; 
  int v5; 
  int v6[4]; 

  v2 = idx;
  v6[0] = 256;
  v6[1] = 512;
  v6[2] = 1024;
  v6[3] = 2048;
  if ( (unsigned int)idx >= 4 )
  {
    v5 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2462, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( obstacleMasks ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( obstacleMasks )\n\t%i not in [0, %i)", idx, v5) )
      __debugbreak();
  }
  return (unsigned int)v6[v2];
}

/*
==============
AINavigator2D::GetUsableCurPos
==============
*/
void AINavigator2D::GetUsableCurPos(AINavigator2D *this, vec3_t *closestUsablePos)
{
  vec3_t outUp; 

  AINavigator::GetUpVector(this, &outUp);
  Nav_GetClosestVerticalPosWithHint(&this->m_CurSnappedPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, closestUsablePos, &this->m_hCurArea, NULL);
}

/*
==============
AINavigator2D::HasPath
==============
*/
bool AINavigator2D::HasPath(AINavigator2D *this)
{
  return this->m_Path.m_NumPoints > 0;
}

/*
==============
AINavigator2D::HasTraversalWithin
==============
*/
bool AINavigator2D::HasTraversalWithin(AINavigator2D *this, float checkDist)
{
  __int64 m_NumPoints; 
  __int64 m_CurPathPoint; 
  __int64 v5; 
  float v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  float *v10; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v14; 

  m_NumPoints = this->m_Path.m_NumPoints;
  if ( (int)m_NumPoints <= 0 )
    return 0;
  m_CurPathPoint = this->m_CurPathPoint;
  v5 = this->m_Path.m_NumPoints;
  v6 = this->m_LocalCurSnappedPos.v[0];
  v7 = this->m_LocalCurSnappedPos.v[1];
  v8 = this->m_LocalCurSnappedPos.v[2];
  v9 = 0i64;
  if ( m_CurPathPoint >= m_NumPoints )
    return 0;
  v10 = &this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2];
  while ( 1 )
  {
    v11 = *(v10 - 2);
    v12 = *(v10 - 1);
    v13 = *v10;
    v14 = v9;
    *(float *)&v14 = *(float *)&v9 + fsqrt((float)((float)((float)(v7 - v12) * (float)(v7 - v12)) + (float)((float)(v6 - v11) * (float)(v6 - v11))) + (float)((float)(v8 - v13) * (float)(v8 - v13)));
    v9 = v14;
    if ( ((_BYTE)v10[1] & 2) != 0 )
      break;
    if ( *(float *)&v14 <= checkDist )
    {
      ++m_CurPathPoint;
      v10 += 12;
      v6 = v11;
      v7 = v12;
      v8 = v13;
      if ( m_CurPathPoint < v5 )
        continue;
    }
    return 0;
  }
  return checkDist >= *(float *)&v14;
}

/*
==============
AINavigator2D::IncreaseLinkWeightsForPath
==============
*/
void AINavigator2D::IncreaseLinkWeightsForPath(AINavigator2D *this)
{
  int v2; 
  __int64 v3; 
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v6; 
  float value; 
  const dvar_t *v8; 
  double v9; 
  __int64 v10; 
  __int64 v11; 
  bfx::LinkHandle phLink; 

  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1537, ASSERT_TYPE_ASSERT, "(m_Path.Exists())", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1538, ASSERT_TYPE_ASSERT, "(m_pEnt)", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  v2 = 0;
  if ( this->m_Path.m_NumPoints > 0 )
  {
    v3 = 0i64;
    do
    {
      if ( (this->m_Path.m_Points[v3].m_Flags & 2) != 0 )
      {
        bfx::LinkHandle::LinkHandle(&phLink);
        if ( (unsigned int)v2 >= this->m_Path.m_NumPoints )
        {
          LODWORD(v11) = this->m_Path.m_NumPoints;
          LODWORD(v10) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( Nav_GetLinkByID(this->m_Path.m_Points[v3].m_LinkID, &phLink) )
        {
          v4 = DVARINT_ai_linkWeightTime;
          if ( !DVARINT_ai_linkWeightTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_linkWeightTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v4);
          integer = v4->current.integer;
          v6 = DVARFLT_ai_linkWeightPerUserMax;
          if ( !DVARFLT_ai_linkWeightPerUserMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_linkWeightPerUserMax") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v6);
          value = v6->current.value;
          v8 = DVARFLT_ai_linkWeightPerUserMin;
          if ( !DVARFLT_ai_linkWeightPerUserMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_linkWeightPerUserMin") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          v9 = G_flrand(v8->current.value, value);
          Nav_ModifyLinkWeightForTime(this->m_pEnt->s.number, &phLink, *(float *)&v9, integer);
        }
        bfx::LinkHandle::~LinkHandle(&phLink);
      }
      ++v2;
      ++v3;
    }
    while ( v2 < this->m_Path.m_NumPoints );
  }
}

/*
==============
AINavigator2D::IsApproachingPlayerObstacle
==============
*/
char AINavigator2D::IsApproachingPlayerObstacle(AINavigator2D *this, float maxDistance)
{
  __int64 m_CurPathPoint; 
  __int64 m_NumPoints; 
  float v4; 
  float v5; 
  float v6; 
  __int128 v7; 
  float *v8; 
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 

  m_CurPathPoint = this->m_CurPathPoint;
  m_NumPoints = this->m_Path.m_NumPoints;
  v4 = this->m_LocalCurSnappedPos.v[0];
  v5 = this->m_LocalCurSnappedPos.v[1];
  v6 = this->m_LocalCurSnappedPos.v[2];
  v7 = 0i64;
  if ( m_CurPathPoint >= m_NumPoints )
    return 0;
  v8 = &this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2];
  while ( ((_DWORD)v8[1] & 0x800) == 0 )
  {
    v9 = *(v8 - 2);
    v10 = *(v8 - 1);
    v11 = *v8;
    v12 = v7;
    *(float *)&v12 = *(float *)&v7 + fsqrt((float)((float)((float)(v10 - v5) * (float)(v10 - v5)) + (float)((float)(v9 - v4) * (float)(v9 - v4))) + (float)((float)(v11 - v6) * (float)(v11 - v6)));
    v7 = v12;
    if ( *(float *)&v12 <= maxDistance )
    {
      ++m_CurPathPoint;
      v8 += 12;
      v4 = v9;
      v5 = v10;
      v6 = v11;
      if ( m_CurPathPoint < m_NumPoints )
        continue;
    }
    return 0;
  }
  return 1;
}

/*
==============
AINavigator2D::IsApproachingTightQuarters
==============
*/

char __fastcall AINavigator2D::IsApproachingTightQuarters(AINavigator2D *this, double maxDistance)
{
  __int64 m_NumPoints; 
  __int64 m_CurPathPoint; 
  __int128 v6; 
  __int128 v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  __int64 v11; 
  float *v12; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  __int128 v17; 

  m_NumPoints = this->m_Path.m_NumPoints;
  if ( (int)m_NumPoints <= 0 )
    return 0;
  m_CurPathPoint = this->m_CurPathPoint;
  __asm
  {
    vcmpless xmm3, xmm1, xmm0
    vblendvps xmm11, xmm1, xmm2, xmm3
  }
  v6 = LODWORD(this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[1]);
  v7 = v6;
  v8 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[0];
  v9 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2];
  *(float *)&v7 = fsqrt((float)((float)((float)(*(float *)&v6 - this->m_LocalCurSnappedPos.v[1]) * (float)(*(float *)&v6 - this->m_LocalCurSnappedPos.v[1])) + (float)((float)(v8 - this->m_LocalCurSnappedPos.v[0]) * (float)(v8 - this->m_LocalCurSnappedPos.v[0]))) + (float)((float)(v9 - this->m_LocalCurSnappedPos.v[2]) * (float)(v9 - this->m_LocalCurSnappedPos.v[2])));
  v10 = v7;
  if ( *(float *)&v7 > *(float *)&_XMM11 )
    return 0;
  v11 = (int)m_CurPathPoint + 1;
  if ( v11 >= m_NumPoints )
    return 0;
  v12 = &this->m_Path.m_Points[v11].m_LocalPos.v[2];
  while ( 1 )
  {
    v13 = *(v12 - 1);
    v14 = *(v12 - 2);
    v15 = *v12;
    v16 = *((_DWORD *)v12 + 1);
    v17 = v10;
    *(float *)&v17 = *(float *)&v10 + fsqrt((float)((float)((float)(v13 - *(float *)&v6) * (float)(v13 - *(float *)&v6)) + (float)((float)(v14 - v8) * (float)(v14 - v8))) + (float)((float)(v15 - v9) * (float)(v15 - v9)));
    v10 = v17;
    if ( (v16 & 0x40) != 0 || (v16 & 0x100) != 0 )
      break;
    if ( *(float *)&v17 < *(float *)&_XMM11 )
    {
      ++v11;
      v12 += 12;
      v8 = v14;
      *(float *)&v6 = v13;
      v9 = v15;
      if ( v11 < m_NumPoints )
        continue;
    }
    return 0;
  }
  return 1;
}

/*
==============
AINavigator2D::IsAreaReachable
==============
*/
bool AINavigator2D::IsAreaReachable(AINavigator2D *this, const bfx::AreaHandle *hArea)
{
  return bfx::IsAreaReachableFromArea(&this->m_hCurArea, hArea, &this->m_BasePathSpec);
}

/*
==============
AINavigator2D::IsGoalPosWithin
==============
*/
bool AINavigator2D::IsGoalPosWithin(AINavigator2D *this, float radius)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  vec3_t outUp; 

  AINavigator::GetUpVector(this, &outUp);
  v3 = this->m_LocalSnappedGoalPos.v[0] - this->m_LocalCurSnappedPos.v[0];
  v4 = this->m_LocalSnappedGoalPos.v[2] - this->m_LocalCurSnappedPos.v[2];
  v5 = this->m_LocalSnappedGoalPos.v[1] - this->m_LocalCurSnappedPos.v[1];
  v6 = (float)((float)(v5 * outUp.v[1]) + (float)(v3 * outUp.v[0])) + (float)(v4 * outUp.v[2]);
  return v6 <= 6.0 && (float)(radius * radius) >= (float)((float)((float)((float)((float)(outUp.v[1] * COERCE_FLOAT(LODWORD(v6) ^ _xmm)) + v5) * (float)((float)(outUp.v[1] * COERCE_FLOAT(LODWORD(v6) ^ _xmm)) + v5)) + (float)((float)((float)(outUp.v[0] * COERCE_FLOAT(LODWORD(v6) ^ _xmm)) + v3) * (float)((float)(outUp.v[0] * COERCE_FLOAT(LODWORD(v6) ^ _xmm)) + v3))) + (float)((float)((float)(outUp.v[2] * COERCE_FLOAT(LODWORD(v6) ^ _xmm)) + v4) * (float)((float)(outUp.v[2] * COERCE_FLOAT(LODWORD(v6) ^ _xmm)) + v4)));
}

/*
==============
AINavigator2D::IsInBadPlace
==============
*/
bool AINavigator2D::IsInBadPlace(AINavigator2D *this)
{
  bfx::AreaHandle *hHintArea; 
  bool result; 
  bool v4; 
  bfx::AreaHandle pOutArea; 
  __int64 v6; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t outClosestPos; 

  v6 = -2i64;
  hHintArea = &this->m_hCurArea;
  result = bfx::AreaHandle::IsValid(&this->m_hCurArea);
  if ( result )
  {
    bfx::AreaHandle::AreaHandle(&pOutArea, hHintArea);
    if ( bfx::AreaHandle::GetNumObstacles(hHintArea) )
      goto LABEL_6;
    pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
    *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
    pPathSpec.m_usePathSharingPenalty = 0;
    pPathSpec.m_pathSharingPenalty = 0.0;
    pPathSpec.m_maxPathSharingPenalty = 0.0;
    pPathSpec.m_maxSearchDist = 0.0;
    bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
    pPathSpec.m_snapMode = SNAP_CLOSEST;
    Nav_GetSpaceUp(this->m_pSpace, &outUp);
    pPathSpec.m_obstacleBlockageFlags = 0;
    Nav_GetClosestVerticalPosWithHint(&this->m_pEnt->r.currentOrigin, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &pPathSpec, &outClosestPos, hHintArea, &pOutArea);
    if ( !bfx::AreaHandle::IsValid(&pOutArea) )
      goto LABEL_6;
    if ( bfx::AreaHandle::operator==(&pOutArea, hHintArea) )
      v4 = 0;
    else
LABEL_6:
      v4 = !bfx::AreaHandle::IsUsable(&pOutArea, &this->m_BasePathSpec);
    bfx::AreaHandle::~AreaHandle(&pOutArea);
    return v4;
  }
  return result;
}

/*
==============
AINavigator2D::IsInOrApproachingTightQuarters
==============
*/

char __fastcall AINavigator2D::IsInOrApproachingTightQuarters(AINavigator2D *this, double maxDistance)
{
  __int64 m_NumPoints; 
  __int64 m_CurPathPoint; 
  __int128 v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  __int64 v13; 
  float *v14; 
  float v15; 
  float v16; 
  float v17; 
  int v18; 
  __int128 v19; 

  m_NumPoints = this->m_Path.m_NumPoints;
  _XMM3 = *(_OWORD *)&maxDistance;
  if ( (int)m_NumPoints <= 0 )
    return 0;
  if ( (this->m_Path.m_Points[this->m_CurPathPoint].m_Flags & 0x140) != 0 )
    return 1;
  if ( (int)m_NumPoints <= 0 )
    return 0;
  m_CurPathPoint = this->m_CurPathPoint;
  __asm
  {
    vcmpless xmm2, xmm3, xmm0
    vblendvps xmm11, xmm3, xmm1, xmm2
  }
  v8 = LODWORD(this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[1]);
  v9 = v8;
  v10 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[0];
  v11 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2];
  *(float *)&v9 = fsqrt((float)((float)((float)(*(float *)&v8 - this->m_LocalCurSnappedPos.v[1]) * (float)(*(float *)&v8 - this->m_LocalCurSnappedPos.v[1])) + (float)((float)(v10 - this->m_LocalCurSnappedPos.v[0]) * (float)(v10 - this->m_LocalCurSnappedPos.v[0]))) + (float)((float)(v11 - this->m_LocalCurSnappedPos.v[2]) * (float)(v11 - this->m_LocalCurSnappedPos.v[2])));
  v12 = v9;
  if ( *(float *)&v9 > *(float *)&_XMM11 )
    return 0;
  v13 = (int)m_CurPathPoint + 1;
  if ( v13 >= m_NumPoints )
    return 0;
  v14 = &this->m_Path.m_Points[v13].m_LocalPos.v[2];
  while ( 1 )
  {
    v15 = *(v14 - 1);
    v16 = *(v14 - 2);
    v17 = *v14;
    v18 = *((_DWORD *)v14 + 1);
    v19 = v12;
    *(float *)&v19 = *(float *)&v12 + fsqrt((float)((float)((float)(v15 - *(float *)&v8) * (float)(v15 - *(float *)&v8)) + (float)((float)(v16 - v10) * (float)(v16 - v10))) + (float)((float)(v17 - v11) * (float)(v17 - v11)));
    v12 = v19;
    if ( (v18 & 0x40) != 0 || (v18 & 0x100) != 0 )
      break;
    if ( *(float *)&v19 < *(float *)&_XMM11 )
    {
      ++v13;
      v14 += 12;
      v10 = v16;
      *(float *)&v8 = v15;
      v11 = v17;
      if ( v13 < m_NumPoints )
        continue;
    }
    return 0;
  }
  return 1;
}

/*
==============
AINavigator2D::IsInTightQuarters
==============
*/
bool AINavigator2D::IsInTightQuarters(AINavigator2D *this)
{
  return this->m_Path.m_NumPoints > 0 && (this->m_Path.m_Points[this->m_CurPathPoint].m_Flags & 0x140) != 0;
}

/*
==============
AINavigator2D::IsNextCornerGoal
==============
*/
bool AINavigator2D::IsNextCornerGoal(AINavigator2D *this)
{
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 915, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  return this->m_Path.m_Points[this->m_CurPathPoint].m_Flags & 1;
}

/*
==============
AINavigator2D::IsNextCornerMultiGoalPathGoal
==============
*/
bool AINavigator2D::IsNextCornerMultiGoalPathGoal(AINavigator2D *this)
{
  if ( !this->m_bMultiGoalPath )
    return 0;
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2359, ASSERT_TYPE_ASSERT, "(m_Path.Exists())", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  return (this->m_Path.m_Points[this->m_CurPathPoint].m_Flags & 0x400) != 0;
}

/*
==============
AINavigator2D::IsNodeReachable
==============
*/
_BOOL8 AINavigator2D::IsNodeReachable(AINavigator2D *this, const pathnode_t *node)
{
  const tacpoint_t *PointForPathnode; 
  const bfx::AreaHandle *AreaForPoint; 
  bool IsAreaReachableFromArea; 
  bool v7; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 725, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "IsNodeReachable");
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  PointForPathnode = TacGraph_GetPointForPathnode(node);
  if ( PointForPathnode )
  {
    AreaForPoint = TacGraph_GetAreaForPoint(PointForPathnode);
    IsAreaReachableFromArea = bfx::IsAreaReachableFromArea(&this->m_hCurArea, AreaForPoint, &this->m_BasePathSpec);
  }
  else
  {
    IsAreaReachableFromArea = this->IsPosReachable(this, &pos);
  }
  v7 = IsAreaReachableFromArea;
  Sys_ProfEndNamedEvent();
  return v7;
}

/*
==============
AINavigator2D::IsNodeUsable
==============
*/
__int64 AINavigator2D::IsNodeUsable(AINavigator2D *this, const pathnode_t *pNode)
{
  const tacpoint_t *PointForPathnode; 
  const bfx::AreaHandle *AreaForPoint; 
  bool v7; 
  bfx::AreaHandle v8; 
  __int64 v9; 
  vec3_t pos; 

  v9 = -2i64;
  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3525, ASSERT_TYPE_ASSERT, "( pNode )", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  PointForPathnode = TacGraph_GetPointForPathnode(pNode);
  if ( PointForPathnode )
  {
    AreaForPoint = TacGraph_GetAreaForPoint(PointForPathnode);
    bfx::AreaHandle::AreaHandle(&v8, AreaForPoint);
    v7 = bfx::AreaHandle::IsValid(&v8) && bfx::AreaHandle::IsUsable(&v8, &this->m_BasePathSpec);
    bfx::AreaHandle::~AreaHandle(&v8);
    return v7;
  }
  else
  {
    pathnode_t::GetPos((pathnode_t *)pNode, &pos);
    return ((__int64 (__fastcall *)(AINavigator2D *, vec3_t *))this->IsPosUsable)(this, &pos);
  }
}

/*
==============
AINavigator2D::IsOnStairs
==============
*/
bool AINavigator2D::IsOnStairs(AINavigator2D *this)
{
  bfx::AreaHandle *p_m_hCurArea; 
  int v2; 

  p_m_hCurArea = &this->m_hCurArea;
  LOBYTE(v2) = bfx::AreaHandle::IsValid(&this->m_hCurArea);
  if ( (_BYTE)v2 )
    return bfx::AreaHandle::GetAreaUsageFlags(p_m_hCurArea) >> 31;
  return v2;
}

/*
==============
AINavigator2D::IsPathDistToGoalAtLeast
==============
*/
bool AINavigator2D::IsPathDistToGoalAtLeast(AINavigator2D *this, float dist)
{
  float v4; 
  float v5; 
  __int64 m_CurPathPoint; 
  float v8; 
  __int128 v9; 
  float v10; 
  __int128 v11; 
  __int64 m_NumPoints; 
  __int64 v13; 
  float *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 

  if ( this->m_Path.m_NumPoints <= 0 )
    return 0;
  if ( AINavigator::ShouldPathOutOfBounds(this) )
  {
    v4 = this->m_RequestedGoalPos.v[1] - this->m_pEnt->r.currentOrigin.v[1];
    v5 = this->m_RequestedGoalPos.v[0] - this->m_pEnt->r.currentOrigin.v[0];
    return fsqrt((float)(v4 * v4) + (float)(v5 * v5)) >= dist;
  }
  m_CurPathPoint = this->m_CurPathPoint;
  v8 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[0] - this->m_LocalCurSnappedPos.v[0];
  v9 = LODWORD(this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[1]);
  *(float *)&v9 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[1] - this->m_LocalCurSnappedPos.v[1];
  v10 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2] - this->m_LocalCurSnappedPos.v[2];
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  v11 = v9;
  if ( *(float *)&v9 >= dist )
    return 1;
  m_NumPoints = this->m_Path.m_NumPoints;
  v13 = (int)m_CurPathPoint + 1;
  if ( v13 >= m_NumPoints )
    return 0;
  v14 = (float *)&this->m_ReevalPathTask.pPrev + 12 * v13 + 1;
  v15 = *v14;
  while ( 1 )
  {
    v16 = v14[11] - *(v14 - 1);
    v17 = v14[12];
    v18 = v14[13] - v14[1];
    v19 = fsqrt((float)((float)((float)(v17 - v15) * (float)(v17 - v15)) + (float)(v16 * v16)) + (float)(v18 * v18));
    v20 = v11;
    *(float *)&v20 = *(float *)&v11 + v19;
    v11 = v20;
    if ( *(float *)&v20 >= dist )
      break;
    ++v13;
    v14 += 12;
    v15 = v17;
    if ( v13 >= m_NumPoints )
      return 0;
  }
  return 1;
}

/*
==============
AINavigator2D::IsPathDistToGoalOrLinkAtLeast
==============
*/
bool AINavigator2D::IsPathDistToGoalOrLinkAtLeast(AINavigator2D *this, float dist)
{
  float v4; 
  float v5; 
  __int64 m_CurPathPoint; 
  float v8; 
  __int128 v9; 
  float v10; 
  __int128 v11; 
  __int64 m_NumPoints; 
  __int64 v13; 
  float *v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 

  if ( this->m_Path.m_NumPoints <= 0 )
    return 0;
  if ( AINavigator::ShouldPathOutOfBounds(this) )
  {
    v4 = this->m_RequestedGoalPos.v[1] - this->m_pEnt->r.currentOrigin.v[1];
    v5 = this->m_RequestedGoalPos.v[0] - this->m_pEnt->r.currentOrigin.v[0];
    return fsqrt((float)(v4 * v4) + (float)(v5 * v5)) >= dist;
  }
  m_CurPathPoint = this->m_CurPathPoint;
  v8 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[0] - this->m_LocalCurSnappedPos.v[0];
  v9 = LODWORD(this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[1]);
  *(float *)&v9 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[1] - this->m_LocalCurSnappedPos.v[1];
  v10 = this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2] - this->m_LocalCurSnappedPos.v[2];
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  v11 = v9;
  if ( *(float *)&v9 < dist )
  {
    m_NumPoints = this->m_Path.m_NumPoints;
    v13 = (int)m_CurPathPoint + 1;
    if ( v13 < m_NumPoints )
    {
      v14 = (float *)&this->m_ReevalPathTask.pPrev + 12 * v13 + 1;
      do
      {
        if ( ((_BYTE)v14[2] & 2) != 0 )
          break;
        v15 = v14[11] - *(v14 - 1);
        v16 = v14[13] - v14[1];
        v17 = fsqrt((float)((float)((float)(v14[12] - *v14) * (float)(v14[12] - *v14)) + (float)(v15 * v15)) + (float)(v16 * v16));
        v18 = v11;
        *(float *)&v18 = *(float *)&v11 + v17;
        v11 = v18;
        if ( *(float *)&v18 >= dist )
          return 1;
        ++v13;
        v14 += 12;
      }
      while ( v13 < m_NumPoints );
    }
    return 0;
  }
  return 1;
}

/*
==============
AINavigator2D::IsPathLengthAtLeast
==============
*/
char AINavigator2D::IsPathLengthAtLeast(AINavigator2D *this, float dist)
{
  __int64 m_NumPoints; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  float *v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  float v16; 

  m_NumPoints = this->m_Path.m_NumPoints;
  if ( (int)m_NumPoints <= 0 )
    return 0;
  v5 = this->m_Path.m_Points[0].m_LocalPos.v[0] - this->m_LocalSnappedPathStartPos.v[0];
  v6 = this->m_Path.m_Points[0].m_LocalPos.v[1] - this->m_LocalSnappedPathStartPos.v[1];
  v7 = this->m_Path.m_Points[0].m_LocalPos.v[2] - this->m_LocalSnappedPathStartPos.v[2];
  v8 = fsqrt((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7));
  if ( v8 < dist )
  {
    v9 = 1;
    if ( (int)m_NumPoints > 1 )
    {
      v10 = m_NumPoints;
      v11 = m_NumPoints - 1;
      v12 = &this->m_Path.m_Points[0].m_LocalPos.v[2];
      v13 = 1i64;
      while ( 1 )
      {
        if ( v9 == v11 )
        {
          v14 = this->m_LocalRequestedGoalPos.v[0] - *(v12 - 2);
          v15 = this->m_LocalRequestedGoalPos.v[2];
          v16 = this->m_LocalRequestedGoalPos.v[1];
        }
        else
        {
          v14 = v12[10] - *(v12 - 2);
          v15 = v12[12];
          v16 = v12[11];
        }
        v8 = fsqrt((float)((float)((float)(v16 - *(v12 - 1)) * (float)(v16 - *(v12 - 1))) + (float)(v14 * v14)) + (float)((float)(v15 - *v12) * (float)(v15 - *v12))) + v8;
        if ( v8 >= dist )
          break;
        ++v9;
        ++v13;
        v12 += 12;
        if ( v13 >= v10 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}

/*
==============
AINavigator2D::IsPointVisibleOnPath
==============
*/
char AINavigator2D::IsPointVisibleOnPath(AINavigator2D *this, const vec3_t *pathStartPos, const vec3_t *point, float ignoreDistance)
{
  int m_NumPoints; 
  int v7; 
  const tacpoint_t *ClosestPoint; 
  const tacpoint_t *v9; 
  vec3_t outPoint; 

  m_NumPoints = this->m_Path.m_NumPoints;
  v7 = 0;
  ClosestPoint = TacGraph_FindClosestPoint(point);
  if ( m_NumPoints <= 0 )
    return 0;
  while ( 1 )
  {
    nav_path_t::GetPathPoint(&this->m_Path, v7, &outPoint);
    if ( fsqrt((float)((float)((float)(pathStartPos->v[1] - outPoint.v[1]) * (float)(pathStartPos->v[1] - outPoint.v[1])) + (float)((float)(pathStartPos->v[0] - outPoint.v[0]) * (float)(pathStartPos->v[0] - outPoint.v[0]))) + (float)((float)(pathStartPos->v[2] - outPoint.v[2]) * (float)(pathStartPos->v[2] - outPoint.v[2]))) > ignoreDistance )
    {
      v9 = TacGraph_FindClosestPoint(&outPoint);
      if ( TacVisGraph_HasVis(ClosestPoint, v9) )
        break;
    }
    if ( ++v7 >= m_NumPoints )
      return 0;
  }
  return 1;
}

/*
==============
AINavigator2D::IsPosReachable
==============
*/
_BOOL8 AINavigator2D::IsPosReachable(AINavigator2D *this, const vec3_t *goalPos)
{
  bool v4; 
  bfx::AreaHandle areaB; 
  __int64 v7; 
  vec3_t outUp; 
  vec3_t point; 

  v7 = -2i64;
  bfx::AreaHandle::AreaHandle(&areaB);
  AINavigator::GetUpVector(this, &outUp);
  v4 = Nav_GetClosestVerticalPos(goalPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &point, &areaB) && Nav_PointWithinCylinderWithUp(&point, goalPos, &outUp, 12.0, 72.0) && bfx::IsAreaReachableFromArea(&this->m_hCurArea, &areaB, &this->m_BasePathSpec);
  bfx::AreaHandle::~AreaHandle(&areaB);
  return v4;
}

/*
==============
AINavigator2D::IsPosUsable
==============
*/
_BOOL8 AINavigator2D::IsPosUsable(AINavigator2D *this, const vec3_t *pos)
{
  bool v4; 
  bfx::AreaHandle pOutArea; 
  __int64 v7; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t outClosestPos; 

  v7 = -2i64;
  bfx::AreaHandle::AreaHandle(&pOutArea);
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  pPathSpec.m_pathSharingPenalty = 0.0;
  pPathSpec.m_maxPathSharingPenalty = 0.0;
  pPathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  Nav_GetSpaceUp(this->m_pSpace, &outUp);
  pPathSpec.m_obstacleBlockageFlags = 0;
  Nav_GetClosestVerticalPos(pos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &pPathSpec, &outClosestPos, &pOutArea);
  v4 = bfx::AreaHandle::IsValid(&pOutArea) && bfx::AreaHandle::IsUsable(&pOutArea, &this->m_BasePathSpec);
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  return v4;
}

/*
==============
AINavigator2D::IsStraightLineReachable
==============
*/
bool AINavigator2D::IsStraightLineReachable(AINavigator2D *this, const vec3_t *startPos, const vec3_t *endPos)
{
  return Nav_IsStraightLineReachable(this->m_pSpace, startPos, endPos, this->m_Layer, &this->m_BasePathSpec);
}

/*
==============
AINavigator2D::IsStraightLineToGoal
==============
*/
bool AINavigator2D::IsStraightLineToGoal(AINavigator2D *this)
{
  return this->m_Path.m_NumPoints <= 0 || this->IsNextCornerGoal(this);
}

/*
==============
AINavigator2D::IsStraightLineToGoalOrLink
==============
*/
bool AINavigator2D::IsStraightLineToGoalOrLink(AINavigator2D *this)
{
  return this->m_Path.m_NumPoints <= 0 || (this->m_Path.m_Points[this->m_CurPathPoint].m_Flags & 2) != 0 || this->IsStraightLineToGoal(this);
}

/*
==============
AINavigator2D::IsTightPathSegment
==============
*/

bool __fastcall AINavigator2D::IsTightPathSegment(AINavigator2D *this, const vec3_t *startPoint, const vec3_t *endPoint, double maxDistance, bool *outFullyProcessed, float *outRemainingLength)
{
  float v6; 
  float v7; 
  float v8; 
  bool v9; 
  __int64 v10; 
  nav_space_s *spaceHandle; 
  AINavLayer layer; 
  __int128 v15; 
  float v18; 
  float v19; 
  float v21; 
  float v22; 
  float v23; 
  __m256i v24; 
  bool v25; 
  bool v26; 
  vec3_t vec; 
  vec3_t centerPoint; 
  vec3_t v32; 
  vec4_t quat; 
  vec3_t angles; 
  bfx::PathSpec pathSpec; 

  v6 = endPoint->v[0] - startPoint->v[0];
  v15 = LODWORD(endPoint->v[1]);
  v7 = endPoint->v[1] - startPoint->v[1];
  v8 = endPoint->v[2] - startPoint->v[2];
  v9 = !this->m_bPathRequested;
  v10 = 1268i64;
  spaceHandle = this->m_pSpace;
  layer = this->m_Layer;
  _XMM13 = *(_OWORD *)&maxDistance;
  *(float *)&v15 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  _XMM12 = v15;
  __asm
  {
    vcmpless xmm0, xmm12, cs:__real@80000000
    vblendvps xmm0, xmm12, xmm1, xmm0
  }
  v18 = v6 * (float)(1.0 / *(float *)&_XMM0);
  v19 = v8 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = v7 * (float)(1.0 / *(float *)&_XMM0);
  __asm { vminss  xmm11, xmm13, xmm12 }
  v21 = (float)(vec.v[1] * (float)(*(float *)&_XMM11 * 0.5)) + startPoint->v[1];
  v22 = (float)(v18 * (float)(*(float *)&_XMM11 * 0.5)) + startPoint->v[0];
  v23 = (float)(v19 * (float)(*(float *)&_XMM11 * 0.5)) + startPoint->v[2];
  v32.v[1] = v21 + (float)(v18 * -25.0);
  v32.v[0] = (float)(vec.v[1] * 25.0) + v22;
  centerPoint.v[1] = v21 - (float)(v18 * -25.0);
  if ( v9 )
    v10 = 1188i64;
  centerPoint.v[0] = v22 - (float)(vec.v[1] * 25.0);
  vec.v[0] = v18;
  vec.v[2] = v19;
  v24 = *(__m256i *)((char *)&this->m_RequestedGoalPos.z + v10);
  *(__m256i *)&pathSpec.m_obstacleMode = *(__m256i *)((char *)&this->__vftable + v10);
  *(_OWORD *)&pathSpec.m_penaltyTable.m_perFlagPenalties[24] = *(_OWORD *)((char *)&this->m_LocalRequestedGoalPos.y + v10);
  v32.v[2] = v23;
  centerPoint.v[2] = v23;
  *(__m256i *)&pathSpec.m_maxSearchDist = v24;
  vectoangles(&vec, &angles);
  AnglesToQuat(&angles, &quat);
  v25 = Nav_CheckBoxFit(&centerPoint, &quat, *(const float *)&_XMM11, 30.0, 100.0, layer, &pathSpec, &spaceHandle->hSpace);
  v26 = Nav_CheckBoxFit(&v32, &quat, *(const float *)&_XMM11, 30.0, 100.0, layer, &pathSpec, &spaceHandle->hSpace);
  *(float *)&v15 = *(float *)&v15 - *(float *)&_XMM13;
  _XMM1 = v15;
  *outFullyProcessed = *(float *)&_XMM13 >= *(float *)&_XMM12;
  __asm { vmaxss  xmm1, xmm1, xmm0 }
  *outRemainingLength = *(float *)&_XMM1;
  return !v25 && !v26;
}

/*
==============
AINavigator2D::MayPathReeval
==============
*/
bool AINavigator2D::MayPathReeval(AINavigator2D *this)
{
  return !bfx::LinkHandle::IsValid(&this->m_hLink);
}

/*
==============
Nav_Create2DNavigator
==============
*/
AINavigator *Nav_Create2DNavigator(gentity_s *pEnt, AINavLayer planLayer)
{
  return Nav_Create2DNavigator(pEnt, planLayer, -1);
}

/*
==============
Nav_Create2DNavigator
==============
*/
void Nav_Create2DNavigator(gentity_s *pEnt, AINavLayer planLayer, int index)
{
  __int64 v3; 
  signed int maxSentients; 
  int v7; 
  __int64 v8; 
  bool *p_m_bInUse; 
  AINavigator2D *v10; 
  bool v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  int v19; 
  int v20; 

  v3 = index;
  if ( index < 0 )
  {
    maxSentients = level.maxSentients;
    if ( level.maxSentients > 0x110 )
    {
      v19 = 272;
      v16 = level.maxSentients;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", v16, v19) )
        __debugbreak();
      maxSentients = level.maxSentients;
    }
    v7 = 0;
    if ( maxSentients <= 0 )
      goto LABEL_12;
    v8 = 0i64;
    p_m_bInUse = &s_Navigators2D.m_bInUse;
    while ( *p_m_bInUse )
    {
      ++v7;
      ++v8;
      p_m_bInUse += 1472;
      if ( v8 >= maxSentients )
        goto LABEL_12;
    }
    v10 = (AINavigator2D *)((char *)&s_Navigators2D + 1472 * v7);
    v10->m_bInUse = 1;
    if ( !v10 )
    {
LABEL_12:
      if ( (unsigned int)maxSentients > 0x110 )
      {
        LODWORD(v18) = 272;
        LODWORD(v15) = maxSentients;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", v15, v18) )
          __debugbreak();
        maxSentients = level.maxSentients;
      }
      LODWORD(v18) = maxSentients;
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 185, ASSERT_TYPE_ASSERT, "(pNav)", "%s\n\tRan out of 2D navigators to alloc!  Max %d.", "pNav", v18);
      goto LABEL_32;
    }
LABEL_30:
    AINavigator2D::AINavigator2D(v10, pEnt, planLayer);
    *(_BYTE *)(v14 + 196) = 0;
    return;
  }
  v12 = level.maxSentients;
  if ( level.maxSentients > 0x110 )
  {
    v20 = 272;
    v17 = level.maxSentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", v17, v20) )
      __debugbreak();
    v12 = level.maxSentients;
  }
  if ( (unsigned int)v3 >= v12 )
  {
    if ( v12 > 0x110 )
    {
      LODWORD(v18) = 272;
      LODWORD(v15) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", v15, v18) )
        __debugbreak();
      v12 = level.maxSentients;
    }
    LODWORD(v18) = v12;
    LODWORD(v15) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 169, ASSERT_TYPE_ASSERT, "(unsigned)( iNav ) < (unsigned)( Nav_GetNavigator2DMaxCount() )", "iNav doesn't index Nav_GetNavigator2DMaxCount()\n\t%i not in [0, %i)", v15, v18) )
      __debugbreak();
  }
  v13 = 1472 * v3;
  if ( !*(&s_Navigators2D.m_bInUse + 1472 * v3) )
  {
    v10 = (AINavigator2D *)((char *)&s_Navigators2D + v13);
    *(&s_Navigators2D.m_bInUse + v13) = 1;
    if ( (AINavigator *)((char *)&s_Navigators2D + v13) )
      goto LABEL_30;
  }
  LODWORD(v18) = v3;
  v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 190, ASSERT_TYPE_ASSERT, "(pNav)", "%s\n\tUnable to create 2D navigator %d!  Navigator already in use.", "pNav", v18);
LABEL_32:
  if ( v11 )
    __debugbreak();
}

/*
==============
Nav_GetNavigator2DMaxCount
==============
*/
__int64 Nav_GetNavigator2DMaxCount()
{
  __int64 result; 

  result = level.maxSentients;
  if ( level.maxSentients > 0x110 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", level.maxSentients, 272) )
      __debugbreak();
    return level.maxSentients;
  }
  return result;
}

/*
==============
Nav_InitStaticNavigatorData2D
==============
*/
void Nav_InitStaticNavigatorData2D(void)
{
  *(_OWORD *)s_SuppressionObstacleReservations = _xmm;
}

/*
==============
Nav_PrintPath
==============
*/
void Nav_PrintPath(const char *header, const nav_path_t::pathpoint_t *pPathPoints, int numPoints)
{
  __int64 v3; 
  const nav_path_t::pathpoint_t *v4; 
  __int64 v6; 
  unsigned int *p_m_Flags; 
  unsigned int v8; 
  unsigned int v9; 
  const char *v10; 
  char *fmt; 

  v3 = (unsigned int)numPoints;
  v4 = pPathPoints;
  if ( !pPathPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 73, ASSERT_TYPE_ASSERT, "(pPathPoints)", (const char *)&queryFormat, "pPathPoints") )
    __debugbreak();
  Com_PrintWarning(18, "  %s\n", header);
  if ( (int)v3 > 0 )
  {
    v6 = v3;
    p_m_Flags = &v4->m_Flags;
    do
    {
      v8 = p_m_Flags[1];
      v9 = *p_m_Flags;
      v10 = vtos(&v4->m_LocalPos);
      LODWORD(fmt) = v8;
      Com_PrintWarning(18, "    %s flags: %d link: %d\n", v10, v9, fmt);
      ++v4;
      p_m_Flags += 12;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
AINavigator2D::PreUpdateAll
==============
*/
void AINavigator2D::PreUpdateAll(void)
{
  char v0; 
  nav_space_s *DefaultSpace; 
  signed int maxSentients; 
  nav_space_s *v3; 
  __int64 v4; 
  vec3_t *p_m_CurSnappedPos; 
  __int64 v6; 

  v0 = 0;
  DefaultSpace = Nav_GetDefaultSpace();
  maxSentients = level.maxSentients;
  v3 = DefaultSpace;
  if ( level.maxSentients > 0x110 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", level.maxSentients, 272) )
      __debugbreak();
    maxSentients = level.maxSentients;
  }
  v4 = maxSentients;
  if ( maxSentients > 0 )
  {
    p_m_CurSnappedPos = &s_Navigators2D.m_CurSnappedPos;
    do
    {
      if ( LOBYTE(p_m_CurSnappedPos[10].y) )
      {
        if ( *(nav_space_s **)&p_m_CurSnappedPos[-3].y != v3 )
        {
          AINavigator::WorldifyPosFromSpace((AINavigator *)&p_m_CurSnappedPos[-4], p_m_CurSnappedPos + 3, p_m_CurSnappedPos);
          AINavigator::WorldifyPosFromSpace((AINavigator *)&p_m_CurSnappedPos[-4], p_m_CurSnappedPos + 1, p_m_CurSnappedPos - 2);
          AINavigator::WorldifyPosFromSpace((AINavigator *)&p_m_CurSnappedPos[-4], p_m_CurSnappedPos + 2, p_m_CurSnappedPos - 1);
        }
        v6 = *(_QWORD *)&p_m_CurSnappedPos[-4].z;
        if ( *(_BYTE *)(v6 + 252) && *(int *)(v6 + 440) > 0 )
          v0 = 1;
      }
      p_m_CurSnappedPos = (vec3_t *)((char *)p_m_CurSnappedPos + 1472);
      --v4;
    }
    while ( v4 );
    if ( v0 )
    {
      if ( !v3->numResources )
        Com_PrintWarning(18, "No navmesh data found in default space.  This will assert eventually.  Add some navmesh to your ground!\n");
    }
  }
}

/*
==============
AINavigator2D::ReFindMultiGoalPath
==============
*/
bool AINavigator2D::ReFindMultiGoalPath(AINavigator2D *this, bool bFirstGoalOnly)
{
  __int64 v4; 
  int v5; 
  int m_NumPoints; 
  int v8; 
  int v9; 
  __int64 m_CurPathPoint; 
  unsigned int *p_m_Flags; 
  __int64 v12; 
  float v13; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  char v18[8]; 
  char v19[24]; 
  vec3_t outPoint[20]; 

  if ( (!this->m_bMultiGoalPath || !this->HasPath(this)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2266, ASSERT_TYPE_ASSERT, "( HasMultiGoalPath() )", (const char *)&queryFormat, "HasMultiGoalPath()") )
    __debugbreak();
  if ( bFirstGoalOnly )
  {
    LOBYTE(v4) = -1;
    v5 = this->GetNextMultiGoalPathGoal(this, v4, (vec3_t *)v19, (bool *)v18);
    if ( v5 == 255 )
    {
      if ( !v18[0] )
      {
LABEL_11:
        this->ClearPath(this);
        return this->AddMultiGoalPathGoal(this, (const vec3_t *)v19);
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2273, ASSERT_TYPE_ASSERT, "(iFirstGoalPt != cMultiGoalPathPointInvalidIndex || !bIsPathPoint)", (const char *)&queryFormat, "iFirstGoalPt != cMultiGoalPathPointInvalidIndex || !bIsPathPoint") )
        __debugbreak();
    }
    if ( !v18[0] )
      goto LABEL_11;
    return AINavigator2D::ReFindPathToPoint(this, v5);
  }
  else
  {
    m_NumPoints = this->m_Path.m_NumPoints;
    v8 = 0;
    v9 = 0;
    m_CurPathPoint = this->m_CurPathPoint;
    if ( (int)m_CurPathPoint < m_NumPoints )
    {
      p_m_Flags = &this->m_Path.m_Points[m_CurPathPoint].m_Flags;
      do
      {
        if ( (*p_m_Flags & 0x400) != 0 )
        {
          if ( (unsigned int)v9 >= 0x14 )
          {
            LODWORD(v17) = 20;
            LODWORD(v16) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2294, ASSERT_TYPE_ASSERT, "(unsigned)( numSubGoals ) < (unsigned)( cMaxPath2DPoints )", "numSubGoals doesn't index cMaxPath2DPoints\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &outPoint[v9++]);
        }
        m_NumPoints = this->m_Path.m_NumPoints;
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        p_m_Flags += 12;
      }
      while ( (int)m_CurPathPoint < m_NumPoints );
    }
    v12 = 3i64 * m_NumPoints;
    v13 = this->m_RequestedGoalPos.v[0];
    v14 = (*(_BYTE *)(&this->m_MaxDeviationFromPath + 4 * v12) & 1) == 0;
    v15 = v9;
    if ( v14 )
    {
      outPoint[v9++].v[0] = v13;
      outPoint[v15].v[1] = this->m_RequestedGoalPos.v[1];
      outPoint[v15].v[2] = this->m_RequestedGoalPos.v[2];
    }
    else
    {
      *(float *)&v19[12 * v9 + 12] = v13;
      *(float *)&v19[12 * v9 + 16] = this->m_RequestedGoalPos.v[1];
      *(float *)&v19[12 * v9 + 20] = this->m_RequestedGoalPos.v[2];
    }
    this->ClearPath(this);
    if ( v9 <= 0 )
    {
      return 1;
    }
    else
    {
      while ( this->CanAddMultiGoalPathGoal(this) && this->AddMultiGoalPathGoal(this, &outPoint[v8]) )
      {
        if ( ++v8 >= v9 )
          return 1;
      }
      this->ClearPath(this);
      return 0;
    }
  }
}

/*
==============
AINavigator2D::ReFindPathToPoint
==============
*/
char AINavigator2D::ReFindPathToPoint(AINavigator2D *this, int iPointToPathTo)
{
  __int64 v2; 
  char v5; 
  int v6; 
  _DWORD *v7; 
  int v8; 
  __int64 v9; 
  float *v10; 
  __int64 v11; 
  int j; 
  int v13; 
  int v14; 
  int k; 
  int v16; 
  bfx::AreaHandle *p_m_hArea; 
  __int64 v18; 
  int v19; 
  int v20; 
  int m_NumPoints; 
  int v22; 
  __int64 v23; 
  int v24; 
  unsigned int *p_m_Flags; 
  int v26; 
  unsigned int *v27; 
  __int64 v28; 
  int i; 
  __int64 v30; 
  bfx::AreaHandle *v31; 
  __int64 v32; 
  int v33; 
  _DWORD *v34; 
  bool pbOutHasDoors; 
  int v36; 
  bfx::PolylinePathRCPtr result; 
  __int64 v38; 
  nav_pathfind_input_t pInput; 
  __int64 v40; 
  _OWORD ptr[62]; 
  vec3_t outPoint; 

  v40 = -2i64;
  v2 = iPointToPathTo;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "RefindPathToPoint");
  if ( (unsigned int)v2 >= this->m_Path.m_NumPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2147, ASSERT_TYPE_ASSERT, "(unsigned)( iPointToPathTo ) < (unsigned)( m_Path.m_NumPoints )", "iPointToPathTo doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", v2, this->m_Path.m_NumPoints) )
    __debugbreak();
  if ( (this->m_Path.m_Points[v2].m_Flags & 2) != 0 )
  {
    LODWORD(v2) = v2 + 1;
    if ( (int)v2 >= this->m_Path.m_NumPoints )
    {
      this->ClearPath(this);
      Sys_ProfEndNamedEvent();
      return 0;
    }
  }
  nav_path_t::GetPathPoint(&this->m_Path, v2, &outPoint);
  bfx::AreaHandle::AreaHandle(&pInput.m_hStartArea);
  bfx::AreaHandle::AreaHandle(&pInput.m_hGoalArea);
  pInput.m_pPathSpec = NULL;
  *(_WORD *)&pInput.m_bSnapPoints = 257;
  pInput.m_bModifyLinkWeights = 1;
  pInput.m_pStartPos = &this->m_CurSnappedPos;
  bfx::AreaHandle::operator=(&pInput.m_hStartArea, &this->m_hCurArea);
  pInput.m_pGoalPos = &outPoint;
  pInput.m_pPathSpec = &this->m_PathSpecOfCurPath;
  AINavigator2D::FindPath(this, &result, &pInput);
  if ( bfx::PolylinePathRCPtr::IsValid(&result) )
  {
    `eh vector constructor iterator'(ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::pathpoint_t, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
    LODWORD(ptr[60]) = 20;
    *(_QWORD *)&ptr[61] = 0i64;
    v6 = 0;
    v7 = (_DWORD *)ptr + 3;
    do
    {
      bfx::AreaHandle::Release((bfx::AreaHandle *)&ptr[3 * v6 + 2]);
      v7[1] = -1;
      *v7 = 0;
      v7[3] = -1082130432;
      ++v6;
      v7 += 12;
    }
    while ( v6 < SLODWORD(ptr[60]) );
    LODWORD(ptr[60]) = 0;
    *(_QWORD *)&ptr[61] = this->m_pSpace;
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GeneratePath");
    AINavigator2D::ExtractCornersFromRawPath(this, &result, (nav_path_t *)ptr, 20, &this->m_PathSpecOfCurPath, &pbOutHasDoors);
    Sys_ProfEndNamedEvent();
    v8 = ptr[60];
    if ( LODWORD(ptr[60]) - 1 > 0 )
    {
      v9 = 0i64;
      v10 = (float *)&ptr[3] + 1;
      while ( *(v10 - 1) != *(v10 - 13) || *v10 != *(v10 - 12) )
      {
        ++v9;
        v10 += 12;
        if ( v9 >= LODWORD(ptr[60]) - 1 )
          goto LABEL_18;
      }
      Nav_PrintPath("Path Points:", (const nav_path_t::pathpoint_t *)ptr, ptr[60]);
      v8 = ptr[60];
    }
LABEL_18:
    if ( (int)v2 < this->m_Path.m_NumPoints - 1 )
    {
      HIDWORD(ptr[3 * v8 - 3]) &= ~1u;
      v8 = ptr[60];
    }
    v11 = (int)v2;
    v38 = (int)v2;
    HIDWORD(ptr[3 * v8 - 3]) |= this->m_Path.m_Points[(int)v2].m_Flags & 0x402;
    this->m_Path.m_LocalStartPoint.v[0] = *((float *)&ptr[60] + 1);
    this->m_Path.m_LocalStartPoint.v[1] = *((float *)&ptr[60] + 2);
    this->m_Path.m_LocalStartPoint.v[2] = *((float *)&ptr[60] + 3);
    if ( LODWORD(ptr[60]) - 1 > (int)v2 )
    {
      v20 = LODWORD(ptr[60]) - v2 - 1;
      v36 = v20;
      if ( v20 <= 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2215, ASSERT_TYPE_ASSERT, "( delta > 0 )", (const char *)&queryFormat, "delta > 0") )
          __debugbreak();
        v11 = v38;
      }
      m_NumPoints = this->m_Path.m_NumPoints;
      v22 = m_NumPoints - 1;
      v23 = m_NumPoints - 1;
      if ( m_NumPoints > m_NumPoints - v20 )
      {
        v24 = v22 + v20;
        p_m_Flags = &this->m_Path.m_Points[v22].m_Flags;
        while ( v24 < 20 || (*p_m_Flags & 0x401) != 1024 )
        {
          v23 = (unsigned int)(v23 - 1);
          --v24;
          p_m_Flags -= 12;
          if ( (int)v23 < m_NumPoints - v20 )
            goto LABEL_44;
        }
        ((void (__fastcall *)(AINavigator2D *, __int64))this->ClearPath)(this, v23);
        nav_path_t::Reset((nav_path_t *)ptr);
        Sys_ProfEndNamedEvent();
        v5 = 0;
        goto LABEL_76;
      }
LABEL_44:
      if ( v22 >= v11 )
      {
        v26 = v22 + v20;
        v27 = &this->m_Path.m_Points[v22].m_Flags;
        v28 = v22 - v11 + 1;
        do
        {
          if ( v26 < 20 )
          {
            nav_path_t::CopyPathPoint(&this->m_Path, &this->m_Path.m_Points[v22], &this->m_Path.m_Points[v26]);
          }
          else if ( (*v27 & 0x401) == 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2233, ASSERT_TYPE_ASSERT, "( !( m_Path.m_Points[iPt].m_Flags & NAVPP_FLAG_MULTIGOAL ) || m_Path.m_Points[ iPt ].m_Flags & NAVPP_FLAG_PATH_END )", (const char *)&queryFormat, "!( m_Path.m_Points[iPt].m_Flags & NAVPP_FLAG_MULTIGOAL ) || m_Path.m_Points[ iPt ].m_Flags & NAVPP_FLAG_PATH_END") )
          {
            __debugbreak();
          }
          --v22;
          --v26;
          v27 -= 12;
          --v28;
        }
        while ( v28 );
        v20 = v36;
      }
      for ( i = 0; i < SLODWORD(ptr[60]); ++i )
        nav_path_t::CopyPathPoint(&this->m_Path, (const nav_path_t::pathpoint_t *)&ptr[3 * i], &this->m_Path.m_Points[i]);
      v30 = LODWORD(ptr[60]) - 1;
      if ( *(float *)ptr == this->m_Path.m_Points[v30].m_LocalPos.v[0] && *((float *)ptr + 1) == this->m_Path.m_Points[v30].m_LocalPos.v[1] && *((float *)ptr + 2) == this->m_Path.m_Points[v30].m_LocalPos.v[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2243, ASSERT_TYPE_ASSERT, "(!Vec3Compare( m_Path.m_Points[ firstSubPathCorners.m_NumPoints - 1 ].m_LocalPos, firstSubPathCorners.m_Points[ 0 ].m_LocalPos ))", (const char *)&queryFormat, "!Vec3Compare( m_Path.m_Points[ firstSubPathCorners.m_NumPoints - 1 ].m_LocalPos, firstSubPathCorners.m_Points[ 0 ].m_LocalPos )") )
        __debugbreak();
      v19 = 20;
      if ( v20 + this->m_Path.m_NumPoints < 20 )
        v19 = v20 + this->m_Path.m_NumPoints;
      this->m_Path.m_NumPoints = v19;
    }
    else
    {
      for ( j = 0; j < SLODWORD(ptr[60]); ++j )
        nav_path_t::CopyPathPoint(&this->m_Path, (const nav_path_t::pathpoint_t *)&ptr[3 * j], &this->m_Path.m_Points[j]);
      v13 = ptr[60];
      v14 = v2 + 1;
      if ( SLODWORD(ptr[60]) < (int)v2 + 1 )
      {
        for ( k = this->m_Path.m_NumPoints; v14 < k; k = this->m_Path.m_NumPoints )
          nav_path_t::CopyPathPoint(&this->m_Path, &this->m_Path.m_Points[v14++], &this->m_Path.m_Points[v13++]);
        v16 = v13;
        if ( v13 < k )
        {
          do
            bfx::AreaHandle::Release(&this->m_Path.m_Points[v16++].m_hArea);
          while ( v16 < this->m_Path.m_NumPoints );
        }
        this->m_Path.m_NumPoints = v13;
        if ( v13 < 20 )
        {
          p_m_hArea = &this->m_Path.m_Points[v13].m_hArea;
          v18 = (unsigned int)(20 - v13);
          do
          {
            if ( bfx::AreaHandle::IsValid(p_m_hArea) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2208, ASSERT_TYPE_ASSERT, "(!m_Path.m_Points[iPoint].m_hArea.IsValid())", (const char *)&queryFormat, "!m_Path.m_Points[iPoint].m_hArea.IsValid()") )
              __debugbreak();
            p_m_hArea += 3;
            --v18;
          }
          while ( v18 );
        }
      }
      v19 = this->m_Path.m_NumPoints;
    }
    if ( v19 < 20 )
    {
      v31 = &this->m_Path.m_Points[v19].m_hArea;
      v32 = (unsigned int)(20 - v19);
      do
      {
        if ( bfx::AreaHandle::IsValid(v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2250, ASSERT_TYPE_ASSERT, "(!m_Path.m_Points[iPoint].m_hArea.IsValid())", (const char *)&queryFormat, "!m_Path.m_Points[iPoint].m_hArea.IsValid()") )
          __debugbreak();
        v31 += 3;
        --v32;
      }
      while ( v32 );
    }
    v33 = 0;
    if ( SLODWORD(ptr[60]) > 0 )
    {
      v34 = (_DWORD *)ptr + 3;
      do
      {
        bfx::AreaHandle::Release((bfx::AreaHandle *)&ptr[3 * v33 + 2]);
        v34[1] = -1;
        *v34 = 0;
        v34[3] = -1082130432;
        ++v33;
        v34 += 12;
      }
      while ( v33 < SLODWORD(ptr[60]) );
    }
    LODWORD(ptr[60]) = 0;
    if ( pbOutHasDoors )
      GScr_Notify(this->m_pEnt, scr_const.path_has_door, 0);
    this->m_CurPathPoint = 0;
    Sys_ProfEndNamedEvent();
    v5 = 1;
LABEL_76:
    `eh vector destructor iterator'(ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
    goto LABEL_77;
  }
  this->ClearPath(this);
  Sys_ProfEndNamedEvent();
  v5 = 0;
LABEL_77:
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
  bfx::AreaHandle::~AreaHandle(&pInput.m_hGoalArea);
  bfx::AreaHandle::~AreaHandle(&pInput.m_hStartArea);
  return v5;
}

/*
==============
AINavigator2D::ReadNavigator
==============
*/
AINavigator2D *AINavigator2D::ReadNavigator(MemoryFile *memFile, int index)
{
  __int64 v4; 
  gentity_s *v5; 
  __int64 v6; 
  __int64 v7; 
  AINavigator2D *v8; 
  nav_space_s *SpaceByEntNum; 
  double Float; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  bool v33; 
  int *m_SuppressionIDs; 
  __int64 v35; 
  const nav_space_s *m_pSpace; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *pOutArea; 
  unsigned __int8 p; 
  char v41[3]; 
  int entNum; 
  unsigned int v43; 
  AINavLayer planLayer; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t v47; 

  MemFile_ReadData(memFile, 1ui64, &p);
  MemFile_ReadData(memFile, 4ui64, &v43);
  v4 = (int)v43;
  if ( v43 >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4093, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v43, 2048) )
      __debugbreak();
    LODWORD(pOutArea) = 2048;
    LODWORD(outClosestPos) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClosestPos, pOutArea) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4094, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  v5 = &g_entities[v4];
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  MemFile_ReadData(memFile, 4ui64, &entNum);
  Nav_Create2DNavigator(v5, planLayer, index);
  v7 = v6;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4101, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  v8 = (AINavigator2D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 592i64))(v7);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4104, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  SpaceByEntNum = Nav_GetSpaceByEntNum(entNum);
  v8->SetSpace(v8, SpaceByEntNum);
  Float = MemFile_ReadFloat(memFile);
  v8->m_CurSnappedPos.v[0] = *(float *)&Float;
  v11 = MemFile_ReadFloat(memFile);
  v8->m_CurSnappedPos.v[1] = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  v8->m_CurSnappedPos.v[2] = *(float *)&v12;
  v13 = MemFile_ReadFloat(memFile);
  v8->m_LocalCurSnappedPos.v[0] = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  v8->m_LocalCurSnappedPos.v[1] = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  v8->m_LocalCurSnappedPos.v[2] = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  v8->m_RequestedGoalPos.v[0] = *(float *)&v16;
  v17 = MemFile_ReadFloat(memFile);
  v8->m_RequestedGoalPos.v[1] = *(float *)&v17;
  v18 = MemFile_ReadFloat(memFile);
  v8->m_RequestedGoalPos.v[2] = *(float *)&v18;
  v19 = MemFile_ReadFloat(memFile);
  v8->m_LocalRequestedGoalPos.v[0] = *(float *)&v19;
  v20 = MemFile_ReadFloat(memFile);
  v8->m_LocalRequestedGoalPos.v[1] = *(float *)&v20;
  v21 = MemFile_ReadFloat(memFile);
  v8->m_LocalRequestedGoalPos.v[2] = *(float *)&v21;
  v22 = MemFile_ReadFloat(memFile);
  v8->m_SnappedGoalPos.v[0] = *(float *)&v22;
  v23 = MemFile_ReadFloat(memFile);
  v8->m_SnappedGoalPos.v[1] = *(float *)&v23;
  v24 = MemFile_ReadFloat(memFile);
  v8->m_SnappedGoalPos.v[2] = *(float *)&v24;
  v25 = MemFile_ReadFloat(memFile);
  v8->m_LocalSnappedGoalPos.v[0] = *(float *)&v25;
  v26 = MemFile_ReadFloat(memFile);
  v8->m_LocalSnappedGoalPos.v[1] = *(float *)&v26;
  v27 = MemFile_ReadFloat(memFile);
  v8->m_LocalSnappedGoalPos.v[2] = *(float *)&v27;
  v28 = MemFile_ReadFloat(memFile);
  v8->m_LocalSnappedPathStartPos.v[0] = *(float *)&v28;
  v29 = MemFile_ReadFloat(memFile);
  v8->m_LocalSnappedPathStartPos.v[1] = *(float *)&v29;
  v30 = MemFile_ReadFloat(memFile);
  v8->m_LocalSnappedPathStartPos.v[2] = *(float *)&v30;
  MemFile_ReadData(memFile, 0x50ui64, &v8->m_BasePathSpec);
  MemFile_ReadData(memFile, 0x50ui64, &v8->m_PathSpecOfCurPath);
  MemFile_ReadData(memFile, 4ui64, &entNum);
  v8->m_TimeOfLastPathUpdate = entNum;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  v8->m_TimeOfLastBlockage = entNum;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  v8->m_TimeOfLastPathFindFail = entNum;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  v8->m_TimeOfLastPathSuppressed = entNum;
  v31 = MemFile_ReadFloat(memFile);
  v8->m_DistFromGoalToPathToRequestedGoal = *(float *)&v31;
  v32 = MemFile_ReadFloat(memFile);
  v8->m_MaxDeviationFromPath = *(float *)&v32;
  MemFile_ReadData(memFile, 1ui64, v41);
  v8->m_bPathingOutOfBounds = v41[0];
  MemFile_ReadData(memFile, 4ui64, &entNum);
  v8->m_AllowedStances = entNum;
  MemFile_ReadData(memFile, 1ui64, v41);
  v8->m_bTeamWalkEnabled = v41[0];
  MemFile_ReadData(memFile, 1ui64, v41);
  v33 = p < 2u;
  v8->m_bAllowSkipMultigoalPoint = v41[0];
  if ( v33 )
  {
    v8->m_bPathReevalRequested = 0;
  }
  else
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    v8->m_bPathReevalRequested = p;
  }
  MemFile_ReadData(memFile, 4ui64, &entNum);
  if ( entNum >= 0 )
  {
    Nav_GetLinkByID(entNum, &v8->m_hLink);
    if ( !bfx::LinkHandle::IsValid(&v8->m_hLink) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4142, ASSERT_TYPE_ASSERT, "( pNav2D->m_hLink.IsValid() )", (const char *)&queryFormat, "pNav2D->m_hLink.IsValid()") )
      __debugbreak();
  }
  m_SuppressionIDs = (int *)v8->m_SuppressionIDs;
  v35 = 4i64;
  do
  {
    MemFile_ReadData(memFile, 4ui64, &entNum);
    *m_SuppressionIDs++ = entNum;
    --v35;
  }
  while ( v35 );
  MemFile_ReadData(memFile, 4ui64, &entNum);
  v8->m_SuppressionTimestamp = entNum;
  MemFile_ReadData(memFile, 1ui64, &p);
  v8->m_bMultiGoalPath = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  v8->m_bPathRequested = p;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  v8->m_CurPathPoint = entNum;
  v8->m_ReevalPathTask.entNum = v4;
  MemFile_ReadData(memFile, 1ui64, &p);
  v8->m_ReevalPathTask.status[0] = p;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  m_pSpace = v8->m_pSpace;
  v8->m_ReevalPathTask.timestamp = entNum;
  Nav_GetSpaceUp(m_pSpace, &outUp);
  pPathSpec = v8->m_BasePathSpec;
  if ( v8->m_bPathRequested )
    pPathSpec = v8->m_PathSpecOfCurPath;
  pPathSpec.m_obstacleBlockageFlags = 1;
  Nav_GetClosestVerticalPos(&v8->m_CurSnappedPos, &outUp, v8->m_Layer, &v8->m_pSpace->hSpace, &pPathSpec, &v47, &v8->m_hCurArea);
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( p )
    AINavigator2D::ReadPath(v8, memFile);
  else
    bfx::AreaHandle::operator=(&v8->m_hGoalArea, &v8->m_hCurArea);
  return v8;
}

/*
==============
AINavigator2D::ReadPath
==============
*/
void AINavigator2D::ReadPath(AINavigator2D *pNav, MemoryFile *memFile)
{
  int v4; 
  double Float; 
  double v6; 
  double v7; 
  int v8; 
  float *v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  int v16; 
  int m_NumPoints; 
  unsigned int *p_m_Flags; 
  __int128 v19; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::AreaHandle *Area; 
  const bfx::AreaHandle *ClosestArea; 
  bfx::ProbeSpec probeSpec; 
  int p; 
  bfx::SpaceHandle spaceHandle; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  bfx::Vector3 pos; 
  bfx::ProbeResults results; 
  __int64 v33; 
  bfx::AreaHandle result; 
  bfx::AreaHandle v35; 
  vec3_t outPoint; 
  vec3_t v37; 
  vec3_t v38; 

  v33 = -2i64;
  nav_path_t::Reset(&pNav->m_Path);
  MemFile_ReadData(memFile, 4ui64, &p);
  v4 = p;
  pNav->m_Path.m_NumPoints = p;
  pNav->m_Path.m_pSpace = pNav->m_pSpace;
  if ( v4 <= 0 )
  {
    bfx::AreaHandle::operator=(&pNav->m_hGoalArea, &pNav->m_hCurArea);
  }
  else
  {
    Float = MemFile_ReadFloat(memFile);
    pNav->m_Path.m_LocalStartPoint.v[0] = *(float *)&Float;
    v6 = MemFile_ReadFloat(memFile);
    pNav->m_Path.m_LocalStartPoint.v[1] = *(float *)&v6;
    v7 = MemFile_ReadFloat(memFile);
    pNav->m_Path.m_LocalStartPoint.v[2] = *(float *)&v7;
    v8 = 0;
    if ( pNav->m_Path.m_NumPoints > 0 )
    {
      v9 = &pNav->m_Path.m_Points[0].m_LocalPos.v[2];
      do
      {
        v10 = MemFile_ReadFloat(memFile);
        *(v9 - 2) = *(float *)&v10;
        v11 = MemFile_ReadFloat(memFile);
        *(v9 - 1) = *(float *)&v11;
        v12 = MemFile_ReadFloat(memFile);
        *v9 = *(float *)&v12;
        MemFile_ReadData(memFile, 4ui64, &p);
        *((_DWORD *)v9 + 1) = p;
        v13 = MemFile_ReadFloat(memFile);
        v9[3] = *(float *)&v13;
        MemFile_ReadData(memFile, 4ui64, &probeSpec);
        *((bfx::ProbeSpec *)v9 + 2) = probeSpec;
        v14 = MemFile_ReadFloat(memFile);
        v9[4] = *(float *)&v14;
        v15 = MemFile_ReadFloat(memFile);
        v9[5] = *(float *)&v15;
        ++v8;
        v9 += 12;
      }
      while ( v8 < pNav->m_Path.m_NumPoints );
    }
    bfx::SpaceHandle::SpaceHandle(&spaceHandle, &pNav->m_pSpace->hSpace);
    v16 = 0;
    m_NumPoints = pNav->m_Path.m_NumPoints;
    if ( m_NumPoints > 0 )
    {
      p_m_Flags = &pNav->m_Path.m_Points[0].m_Flags;
      do
      {
        if ( !v16 || (*(_BYTE *)p_m_Flags & 4) != 0 )
        {
          nav_path_t::GetPathPoint(&pNav->m_Path, v16, &v38);
          pos = (bfx::Vector3)v38;
          ClosestArea = bfx::GetClosestArea(&v35, &spaceHandle, &pos, pNav->m_Layer, &pNav->m_PathSpecOfCurPath);
          bfx::AreaHandle::operator=(&pNav->m_Path.m_Points[v16].m_hArea, ClosestArea);
          bfx::AreaHandle::~AreaHandle(&v35);
        }
        else
        {
          nav_path_t::GetPathPoint(&pNav->m_Path, v16, &outPoint);
          iStartPos = (bfx::Vector3)outPoint;
          nav_path_t::GetPathPoint(&pNav->m_Path, v16 - 1, &v37);
          v19 = LODWORD(outPoint.v[1]);
          *(float *)&v19 = fsqrt((float)((float)((float)(outPoint.v[1] - v37.v[1]) * (float)(outPoint.v[1] - v37.v[1])) + (float)((float)(outPoint.v[0] - v37.v[0]) * (float)(outPoint.v[0] - v37.v[0]))) + (float)((float)(outPoint.v[2] - v37.v[2]) * (float)(outPoint.v[2] - v37.v[2])));
          _XMM1 = v19;
          __asm
          {
            vcmpless xmm0, xmm1, xmm8
            vblendvps xmm1, xmm1, xmm7, xmm0
          }
          dir.m_x = (float)(1.0 / *(float *)&_XMM1) * (float)(outPoint.v[0] - v37.v[0]);
          dir.m_y = (float)(1.0 / *(float *)&_XMM1) * (float)(outPoint.v[1] - v37.v[1]);
          dir.m_z = (float)(1.0 / *(float *)&_XMM1) * (float)(outPoint.v[2] - v37.v[2]);
          probeSpec.m_probeType = NAVPROBE_TYPE_FULL3D;
          bfx::AreaHandle::AreaHandle(&results.m_endArea);
          results.m_collided = 0;
          results.m_collideEdgeIndex = -1;
          results.m_generatePath = 0;
          bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
          results.m_generatePath = 1;
          bfx::NavProbe(&spaceHandle, &iStartPos, &dir, 6.0, pNav->m_Layer, &pNav->m_PathSpecOfCurPath, &probeSpec, &results);
          if ( bfx::PolylinePathRCPtr::GetSegmentType(&results.m_path, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4460, ASSERT_TYPE_ASSERT, "(results.m_path.GetSegmentType( 0 ) == bfx::SURFACE_SEGMENT)", (const char *)&queryFormat, "results.m_path.GetSegmentType( 0 ) == bfx::SURFACE_SEGMENT") )
            __debugbreak();
          SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(&results.m_path, 0);
          if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4462, ASSERT_TYPE_ASSERT, "(pSegment)", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          Area = bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
          bfx::AreaHandle::operator=(&pNav->m_Path.m_Points[v16].m_hArea, Area);
          bfx::AreaHandle::~AreaHandle(&result);
          bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
          bfx::AreaHandle::~AreaHandle(&results.m_endArea);
        }
        ++v16;
        p_m_Flags += 12;
        m_NumPoints = pNav->m_Path.m_NumPoints;
      }
      while ( v16 < m_NumPoints );
    }
    bfx::AreaHandle::operator=(&pNav->m_hGoalArea, (const bfx::AreaHandle *)&pNav->m_hLink.m_pSpace + 3 * m_NumPoints);
    bfx::SpaceHandle::~SpaceHandle(&spaceHandle);
  }
}

/*
==============
AINavigator2D::ReserveSuppression
==============
*/
__int64 AINavigator2D::ReserveSuppression(AINavigator2D *this)
{
  int v1; 
  unsigned int v2; 
  int *v3; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  AINavigator *Navigator; 
  __int64 v9; 
  int number; 
  __int64 v12; 
  __int64 v13; 
  bool v14; 
  AINavigator *v15; 
  __int64 v16; 
  unsigned int *v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v1 = -1;
  v2 = -1;
  v3 = s_SuppressionObstacleReservations;
  v5 = 0;
  v6 = -1;
  do
  {
    v7 = *v3;
    if ( (_DWORD)v7 == this->m_pEnt->s.number )
      return (unsigned int)v5;
    if ( (_DWORD)v7 == 2047 )
      goto LABEL_20;
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(v21) = 2048;
      LODWORD(v19) = *v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v21) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v7] )
    {
LABEL_20:
      v1 = v5;
    }
    else
    {
      Navigator = Nav_GetNavigator(&g_entities[v7]);
      if ( Navigator )
      {
        v9 = (__int64)Navigator->Get2DNavigator(Navigator);
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2508, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
          __debugbreak();
        if ( *(_DWORD *)(v9 + 1448) < v6 )
        {
          v2 = v5;
          v6 = *(_DWORD *)(v9 + 1448);
        }
      }
    }
    ++v5;
    ++v3;
  }
  while ( v5 < 4 );
  if ( v1 >= 0 )
  {
    number = this->m_pEnt->s.number;
    this->m_BasePathSpec.m_obstacleBlockageFlags &= 0xFFFFF0FF;
    s_SuppressionObstacleReservations[v1] = number;
    this->m_BasePathSpec.m_obstacleBlockageFlags |= AINavigator2D::GetSuppressionObstacleMask(this, v1);
    return (unsigned int)v1;
  }
  v12 = 4i64;
  if ( v2 >= 4 )
  {
    LODWORD(v21) = 4;
    LODWORD(v19) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2525, ASSERT_TYPE_ASSERT, "(unsigned)( oldestIdx ) < (unsigned)( cMaxSuppressionReservations )", "oldestIdx doesn't index cMaxSuppressionReservations\n\t%i not in [0, %i)", v19, v21) )
      __debugbreak();
  }
  v13 = s_SuppressionObstacleReservations[v2];
  if ( (_DWORD)v13 == 2047 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2527, ASSERT_TYPE_ASSERT, "( oldestEntNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "oldestEntNum != ENTITYNUM_NONE");
LABEL_33:
    if ( v14 )
      __debugbreak();
    goto LABEL_35;
  }
  if ( (unsigned int)v13 >= 0x800 )
  {
    LODWORD(v21) = 2048;
    LODWORD(v19) = s_SuppressionObstacleReservations[v2];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2528, ASSERT_TYPE_ASSERT, "(unsigned)( oldestEntNum ) < (unsigned)( ( 2048 ) )", "oldestEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v21) )
      __debugbreak();
    LODWORD(v22) = 2048;
    LODWORD(v20) = v13;
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v22);
    goto LABEL_33;
  }
LABEL_35:
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2529, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( oldestEntNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( oldestEntNum )") )
    __debugbreak();
  v15 = Nav_GetNavigator(&g_entities[v13]);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2531, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  v16 = (__int64)v15->Get2DNavigator(v15);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2533, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  v17 = (unsigned int *)(v16 + 1432);
  do
  {
    if ( *v17 != -1 )
    {
      Nav_DestroyObstacleByID(*v17);
      *v17 = -1;
    }
    ++v17;
    --v12;
  }
  while ( v12 );
  *(_DWORD *)(v16 + 1192) &= 0xFFFFF0FF;
  *(_DWORD *)(v16 + 1428) = 0;
  v18 = this->m_pEnt->s.number;
  this->m_BasePathSpec.m_obstacleBlockageFlags &= 0xFFFFF0FF;
  s_SuppressionObstacleReservations[v2] = v18;
  this->m_BasePathSpec.m_obstacleBlockageFlags |= AINavigator2D::GetSuppressionObstacleMask(this, v2);
  return v2;
}

/*
==============
nav_path_t::Reset
==============
*/
void nav_path_t::Reset(nav_path_t *this)
{
  int v2; 
  unsigned int *p_m_Flags; 

  v2 = 0;
  if ( this->m_NumPoints <= 0 )
  {
    this->m_NumPoints = 0;
  }
  else
  {
    p_m_Flags = &this->m_Points[0].m_Flags;
    do
    {
      bfx::AreaHandle::Release(&this->m_Points[v2].m_hArea);
      p_m_Flags[1] = -1;
      ++v2;
      *p_m_Flags = 0;
      p_m_Flags[3] = -1082130432;
      p_m_Flags += 12;
    }
    while ( v2 < this->m_NumPoints );
    this->m_NumPoints = 0;
  }
}

/*
==============
AINavigator2D::SetCornerCurrentAngle
==============
*/
void AINavigator2D::SetCornerCurrentAngle(AINavigator2D *this, int cornerIndex, float currentAngle)
{
  __int64 v4; 
  int m_NumPoints; 

  v4 = cornerIndex;
  if ( (unsigned int)cornerIndex >= this->m_Path.m_NumPoints )
  {
    m_NumPoints = this->m_Path.m_NumPoints;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4373, ASSERT_TYPE_ASSERT, "(unsigned)( cornerIndex ) < (unsigned)( m_Path.m_NumPoints )", "cornerIndex doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", cornerIndex, m_NumPoints) )
      __debugbreak();
  }
  if ( (LODWORD(currentAngle) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4374, ASSERT_TYPE_ASSERT, "( !IS_NAN( currentAngle ) )", (const char *)&queryFormat, "!IS_NAN( currentAngle )") )
    __debugbreak();
  this->m_Path.m_Points[v4].m_CornerAngle = currentAngle;
}

/*
==============
AINavigator2D::SetCurPos
==============
*/
void AINavigator2D::SetCurPos(AINavigator2D *this, const vec3_t *curPos)
{
  __int64 m_CurPathPoint; 
  __int64 v5; 
  __int64 v6; 
  unsigned int m_Flags; 
  int v8; 
  __int64 v9; 
  __int128 v10; 
  __int64 v14; 
  bool v15; 
  bool MultiGoalPath; 
  int m_NumPoints; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  unsigned int *p_m_Flags; 
  int v22; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *hHintArea; 
  bfx::LinkHandle phLink; 
  bfx::AreaHandle hNewArea; 
  bfx::AreaHandle v27; 
  __int64 v28; 
  vec3_t v29; 
  vec3_t worldPos; 
  vec3_t outPoint; 
  vec3_t outLocalPos; 
  vec3_t outUp; 
  vec3_t goalPos; 
  bfx::PathSpec pPathSpec; 

  v28 = -2i64;
  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 265, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  AINavigator::GetUpVector(this, &outUp);
  bfx::AreaHandle::AreaHandle(&hNewArea);
  if ( bfx::LinkHandle::IsValid(&this->m_hLink) && this->m_Path.m_NumPoints > 0 )
  {
    bfx::LinkHandle::LinkHandle(&phLink);
    m_CurPathPoint = this->m_CurPathPoint;
    if ( (unsigned int)m_CurPathPoint >= this->m_Path.m_NumPoints )
    {
      LODWORD(outClosestPos) = this->m_CurPathPoint;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", outClosestPos, this->m_Path.m_NumPoints) )
        __debugbreak();
    }
    if ( Nav_GetLinkByID(this->m_Path.m_Points[m_CurPathPoint].m_LinkID, &phLink) && bfx::LinkHandle::operator==(&phLink, &this->m_hLink) )
    {
      v5 = this->m_CurPathPoint;
      v6 = v5;
      m_Flags = this->m_Path.m_Points[v5].m_Flags;
      if ( (m_Flags & 2) != 0 )
      {
        v8 = v5 + 1;
        if ( (unsigned int)(v5 + 1) >= this->m_Path.m_NumPoints )
        {
          LODWORD(hHintArea) = this->m_Path.m_NumPoints;
          LODWORD(outClosestPos) = v5 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( iLinkEnd ) < (unsigned)( m_Path.m_NumPoints )", "iLinkEnd doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", outClosestPos, hHintArea) )
            __debugbreak();
        }
        v9 = 2 * (3 * v6 + 3);
        if ( (*(_BYTE *)(&this->m_Path.m_Points[0].m_Flags + 2 * v9) & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 286, ASSERT_TYPE_ASSERT, "(m_Path.m_Points[ iLinkEnd ].m_Flags & NAVPP_FLAG_LINK_END)", (const char *)&queryFormat, "m_Path.m_Points[ iLinkEnd ].m_Flags & NAVPP_FLAG_LINK_END") )
          __debugbreak();
        nav_path_t::GetPathPoint(&this->m_Path, this->m_CurPathPoint, &outPoint);
        nav_path_t::GetPathPoint(&this->m_Path, v8, &v29);
        v10 = LODWORD(v29.v[1]);
        *(float *)&v10 = fsqrt((float)((float)((float)(v29.v[1] - outPoint.v[1]) * (float)(v29.v[1] - outPoint.v[1])) + (float)((float)(v29.v[0] - outPoint.v[0]) * (float)(v29.v[0] - outPoint.v[0]))) + (float)((float)(v29.v[2] - outPoint.v[2]) * (float)(v29.v[2] - outPoint.v[2])));
        _XMM6 = v10;
        __asm
        {
          vcmpless xmm0, xmm6, cs:__real@80000000
          vblendvps xmm1, xmm6, xmm2, xmm0
        }
        if ( (float)((float)((float)((float)((float)(v29.v[1] - outPoint.v[1]) * (float)(1.0 / *(float *)&_XMM1)) * (float)(curPos->v[1] - outPoint.v[1])) + (float)((float)((float)(v29.v[0] - outPoint.v[0]) * (float)(1.0 / *(float *)&_XMM1)) * (float)(curPos->v[0] - outPoint.v[0]))) + (float)((float)((float)(v29.v[2] - outPoint.v[2]) * (float)(1.0 / *(float *)&_XMM1)) * (float)(curPos->v[2] - outPoint.v[2]))) > (float)(*(float *)&v10 * 0.5) )
        {
          bfx::AreaHandle::operator=(&this->m_hCurArea, (const bfx::AreaHandle *)((char *)&this->m_Path.m_Points[0].m_hArea + 8 * v9));
          this->m_CurSnappedPos = v29;
          this->m_LocalCurSnappedPos.v[0] = this->m_Path.m_Points[0].m_LocalPos.v[2 * v9];
          this->m_LocalCurSnappedPos.v[1] = this->m_Path.m_Points[0].m_LocalPos.v[2 * v9 + 1];
          this->m_LocalCurSnappedPos.v[2] = this->m_Path.m_Points[0].m_LocalPos.v[2 * v9 + 2];
          ++this->m_CurPathPoint;
        }
      }
      else if ( (m_Flags & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 310, ASSERT_TYPE_ASSERT, "(m_Path.m_Points[ m_CurPathPoint ].m_Flags & NAVPP_FLAG_LINK_END)", (const char *)&queryFormat, "m_Path.m_Points[ m_CurPathPoint ].m_Flags & NAVPP_FLAG_LINK_END") )
      {
        __debugbreak();
      }
      bfx::LinkHandle::~LinkHandle(&phLink);
      goto LABEL_56;
    }
    bfx::LinkHandle::~LinkHandle(&phLink);
  }
  bfx::AreaHandle::AreaHandle(&v27);
  if ( !bfx::LinkHandle::IsValid(&this->m_hLink) )
    bfx::AreaHandle::operator=(&v27, &this->m_hCurArea);
  v14 = 1268i64;
  if ( !this->m_bPathRequested )
    v14 = 1188i64;
  pPathSpec = *(bfx::PathSpec *)((char *)&this->__vftable + v14);
  pPathSpec.m_obstacleBlockageFlags = 1;
  Nav_GetClosestVerticalPosWithHint(curPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &pPathSpec, &worldPos, &v27, &hNewArea);
  AINavigator::LocalizePosToSpace(this, &worldPos, &outLocalPos);
  v15 = 0;
  AINavigator2D::FixUpGoalAreaIfNecessary(this);
  if ( this->m_bPathRequested )
    v15 = this->m_Path.m_NumPoints <= 0 || !AINavigator2D::UpdateCurSegment(this, &worldPos, &hNewArea);
  this->GetRequestedGoalPos(this, &goalPos);
  this->m_LocalCurSnappedPos = outLocalPos;
  this->m_CurSnappedPos = worldPos;
  bfx::AreaHandle::operator=(&this->m_hCurArea, &hNewArea);
  this->m_AllowedStances = AINavigator2D::GetAllowedStances(this, &this->m_hCurArea);
  if ( v15 )
  {
    if ( this->m_bMultiGoalPath && this->HasPath(this) )
    {
      MultiGoalPath = AINavigator2D::ReFindMultiGoalPath(this, 1);
    }
    else
    {
      m_NumPoints = this->m_Path.m_NumPoints;
      if ( m_NumPoints <= 0 )
        goto LABEL_47;
      v18 = this->m_CurPathPoint;
      v19 = this->m_CurPathPoint;
      v20 = v18;
      if ( v18 >= m_NumPoints )
        goto LABEL_44;
      p_m_Flags = &this->m_Path.m_Points[v18].m_Flags;
      while ( (*(_BYTE *)p_m_Flags & 2) == 0 )
      {
        ++v19;
        ++v20;
        p_m_Flags += 12;
        if ( v20 >= m_NumPoints )
          goto LABEL_44;
      }
      if ( v19 >= 0 )
      {
LABEL_47:
        MultiGoalPath = this->DoPathFind(this);
      }
      else
      {
LABEL_44:
        v22 = m_NumPoints - 1;
        if ( (int)v18 + 3 < m_NumPoints - 1 )
          v22 = v18 + 3;
        MultiGoalPath = AINavigator2D::ReFindPathToPoint(this, v22);
      }
    }
    if ( !MultiGoalPath )
    {
      AINavigator::BadPathNotify(this, &goalPos);
      this->m_TimeOfLastPathFindFail = level.time;
    }
  }
  else
  {
    this->UpdatePathOutOfBounds(this);
  }
  if ( this->m_bPathReevalRequested && !bfx::LinkHandle::IsValid(&this->m_hLink) && this->m_ReevalPathTask.status[0] != 1 )
  {
    AIScheduler::AddReevalPathTask(&this->m_ReevalPathTask);
    this->m_bPathReevalRequested = 0;
  }
  bfx::AreaHandle::~AreaHandle(&v27);
LABEL_56:
  bfx::AreaHandle::~AreaHandle(&hNewArea);
}

/*
==============
AINavigator2D::SetGoalPos
==============
*/
char AINavigator2D::SetGoalPos(AINavigator2D *this, const vec3_t *goalPos)
{
  bool v5; 
  AINavigator_vtbl *v6; 
  bool v7; 

  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 400, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  if ( this->HasPath(this) && VecNCompareCustomEpsilon(goalPos->v, this->m_RequestedGoalPos.v, 0.001, 3) )
    return 1;
  AINavigator::LocalizePosToSpace(this, goalPos, &this->m_LocalRequestedGoalPos);
  AINavigator::WorldifyPosFromSpace(this, &this->m_LocalRequestedGoalPos, &this->m_RequestedGoalPos);
  AINavigator2D::FixUpStartAreaIfNecessary(this);
  v5 = VecNCompareCustomEpsilon(this->m_CurSnappedPos.v, this->m_RequestedGoalPos.v, 0.001, 3);
  v6 = this->__vftable;
  if ( v5 )
  {
    v6->ClearPath(this);
    return 1;
  }
  else
  {
    v7 = v6->DoPathFind(this);
    if ( !v7 )
    {
      AINavigator::BadPathNotify(this, goalPos);
      this->m_TimeOfLastPathFindFail = level.time;
    }
    this->m_bPathRequested = v7;
    return v7;
  }
}

/*
==============
AINavigator2D::SetLayer
==============
*/
void AINavigator2D::SetLayer(AINavigator2D *this, AINavLayer layer)
{
  vec3_t targetPos; 
  vec3_t worldPos; 
  vec3_t outUp; 

  AINavigator::SetLayer(this, layer);
  AINavigator::GetUpVector(this, &outUp);
  this->GetCurPos(this, &targetPos);
  this->GetGoalPos(this, &worldPos);
  Nav_GetClosestVerticalPos(&targetPos, &outUp, layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &targetPos, &this->m_hCurArea);
  Nav_GetClosestVerticalPos(&worldPos, &outUp, layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &worldPos, &this->m_hGoalArea);
  AINavigator::LocalizePosToSpace(this, &targetPos, &this->m_LocalCurSnappedPos);
  AINavigator::LocalizePosToSpace(this, &worldPos, &this->m_LocalSnappedGoalPos);
}

/*
==============
AINavigator2D::SetLinkUsageFlags
==============
*/
void AINavigator2D::SetLinkUsageFlags(AINavigator2D *this, unsigned int flags)
{
  int m_NumPoints; 
  __int64 m_CurPathPoint; 
  unsigned int *p_m_Flags; 
  __int64 v7; 
  unsigned int m_forwardLinkUsageFlags; 
  __int64 v9; 
  __int64 v10; 
  bfx::LinkHandle phLink; 
  bfx::LinkDat result; 

  this->m_BasePathSpec.m_linkUsageFlags = flags;
  m_NumPoints = this->m_Path.m_NumPoints;
  if ( m_NumPoints > 0 )
  {
    m_CurPathPoint = this->m_CurPathPoint;
    if ( (int)m_CurPathPoint < m_NumPoints )
    {
      p_m_Flags = &this->m_Path.m_Points[m_CurPathPoint].m_Flags;
      v7 = -212i64 - (_QWORD)this;
      do
      {
        if ( (*(_BYTE *)p_m_Flags & 2) != 0 )
        {
          bfx::LinkHandle::LinkHandle(&phLink);
          if ( (unsigned int)m_CurPathPoint >= this->m_Path.m_NumPoints )
          {
            LODWORD(v10) = this->m_Path.m_NumPoints;
            LODWORD(v9) = m_CurPathPoint;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          if ( Nav_GetLinkByID(*(int *)((char *)&this->m_Path.m_Points[0].m_LinkID + (_QWORD)p_m_Flags + v7), &phLink) )
          {
            bfx::LinkHandle::GetLinkDat(&phLink, &result);
            m_forwardLinkUsageFlags = result.m_forwardLinkUsageFlags;
            if ( (*(_BYTE *)p_m_Flags & 8) != 0 )
              m_forwardLinkUsageFlags = result.m_backwardLinkUsageFlags;
            if ( (m_forwardLinkUsageFlags & flags) == 0 )
            {
              Nav_ClearLinkWeightsForEnt(this->m_pEnt->s.number);
              nav_path_t::Reset(&this->m_Path);
              *(__m256i *)&this->m_PathSpecOfCurPath.m_obstacleMode = *(__m256i *)&this->m_BasePathSpec.m_obstacleMode;
              *(__m256i *)&this->m_PathSpecOfCurPath.m_maxSearchDist = *(__m256i *)&this->m_BasePathSpec.m_maxSearchDist;
              *(_OWORD *)&this->m_PathSpecOfCurPath.m_penaltyTable.m_perFlagPenalties[24] = *(_OWORD *)&this->m_BasePathSpec.m_penaltyTable.m_perFlagPenalties[24];
              bfx::LinkHandle::~LinkHandle(&phLink);
              return;
            }
          }
          bfx::LinkHandle::~LinkHandle(&phLink);
        }
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        p_m_Flags += 12;
      }
      while ( (int)m_CurPathPoint < this->m_Path.m_NumPoints );
    }
  }
}

/*
==============
AINavigator2D::SetObstacleBlockageFlags
==============
*/
void AINavigator2D::SetObstacleBlockageFlags(AINavigator2D *this, unsigned int flags)
{
  this->m_BasePathSpec.m_obstacleBlockageFlags = flags;
}

/*
==============
AINavigator2D::SetPath
==============
*/
void AINavigator2D::SetPath(AINavigator2D *this, const bfx::PolylinePathRCPtr *path, const nav_pathfind_input_t *pInput)
{
  bfx::PathSpec *m_pPathSpec; 
  const dvar_t *v7; 
  const vec3_t *m_pGoalPos; 
  bfx::Color color; 
  bool pbOutHasDoors; 

  if ( !bfx::PolylinePathRCPtr::IsValid((bfx::PolylinePathRCPtr *)path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1490, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1491, ASSERT_TYPE_ASSERT, "( pInput )", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  if ( this->m_ReevalPathTask.status[0] == 1 )
    AIScheduler::RemoveReevalPathTask(&this->m_ReevalPathTask);
  m_pPathSpec = pInput->m_pPathSpec;
  *(__m256i *)&this->m_PathSpecOfCurPath.m_obstacleMode = *(__m256i *)&m_pPathSpec->m_obstacleMode;
  *(__m256i *)&this->m_PathSpecOfCurPath.m_maxSearchDist = *(__m256i *)&m_pPathSpec->m_maxSearchDist;
  *(_OWORD *)&this->m_PathSpecOfCurPath.m_penaltyTable.m_perFlagPenalties[24] = *(_OWORD *)&m_pPathSpec->m_penaltyTable.m_perFlagPenalties[24];
  this->m_TimeOfLastPathUpdate = level.time;
  if ( bfx::AreaHandle::IsValid(&pInput->m_hStartArea) && !bfx::AreaHandle::IsValid(&this->m_hCurArea) )
    bfx::AreaHandle::operator=(&this->m_hCurArea, &pInput->m_hStartArea);
  v7 = DCONST_DVARBOOL_ai_showBfxPath;
  if ( !DCONST_DVARBOOL_ai_showBfxPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showBfxPath") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    color = (bfx::Color)_xmm;
    bfx::PolylinePathRCPtr::Draw((bfx::PolylinePathRCPtr *)path, &color);
  }
  AINavigator2D::GeneratePath(this, path, &this->m_Path, &this->m_PathSpecOfCurPath, &pbOutHasDoors);
  this->m_CurPathPoint = 0;
  AINavigator::LocalizePosToSpace(this, pInput->m_pStartPos, &this->m_LocalSnappedPathStartPos);
  AINavigator::LocalizePosToSpace(this, pInput->m_pGoalPos, &this->m_LocalSnappedGoalPos);
  m_pGoalPos = pInput->m_pGoalPos;
  this->m_SnappedGoalPos.v[0] = m_pGoalPos->v[0];
  this->m_SnappedGoalPos.v[1] = m_pGoalPos->v[1];
  this->m_SnappedGoalPos.v[2] = m_pGoalPos->v[2];
  bfx::AreaHandle::operator=(&this->m_hGoalArea, (const bfx::AreaHandle *)&this->m_hLink.m_pSpace + 3 * this->m_Path.m_NumPoints);
  this->m_bPathRequested = 1;
  *(_WORD *)&this->m_bPathingOutOfBounds = 0;
  if ( pInput->m_bModifyLinkWeights )
    AINavigator2D::IncreaseLinkWeightsForPath(this);
  if ( pbOutHasDoors )
    GScr_Notify(this->m_pEnt, scr_const.path_has_door, 0);
}

/*
==============
AINavigator2D::SetPenaltyTableMode
==============
*/
void AINavigator2D::SetPenaltyTableMode(AINavigator2D *this, bfx::PenaltyTableMode mode)
{
  this->m_BasePathSpec.m_penaltyTable.m_mode = mode;
}

/*
==============
AINavigator2D::SetPenaltyTableValue
==============
*/
void AINavigator2D::SetPenaltyTableValue(AINavigator2D *this, unsigned int index, char value)
{
  __int64 v3; 
  int v7; 

  v3 = index;
  if ( index < 0x20 )
  {
    this->m_BasePathSpec.m_penaltyTable.m_perFlagPenalties[index] = value;
  }
  else
  {
    v7 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 514, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( m_BasePathSpec.m_penaltyTable.m_perFlagPenalties ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( m_BasePathSpec.m_penaltyTable.m_perFlagPenalties )\n\t%i not in [0, %i)", index, v7) )
      __debugbreak();
    this->m_BasePathSpec.m_penaltyTable.m_perFlagPenalties[v3] = value;
  }
}

/*
==============
AINavigator2D::SetSpace
==============
*/
void AINavigator2D::SetSpace(AINavigator2D *this, nav_space_s *pSpace)
{
  AINavLayer m_Layer; 
  vec3_t outUp; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2388, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( pSpace != this->m_pSpace )
  {
    AINavigator::GetUpVector(this, &outUp);
    this->ClearPath(this);
    m_Layer = this->m_Layer;
    this->m_pSpace = pSpace;
    Nav_GetClosestVerticalPos(&this->m_CurSnappedPos, &outUp, m_Layer, &pSpace->hSpace, &this->m_BasePathSpec, &this->m_CurSnappedPos, &this->m_hCurArea);
    Nav_GetClosestVerticalPos(&this->m_SnappedGoalPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &this->m_SnappedGoalPos, &this->m_hGoalArea);
    AINavigator::LocalizePosToSpace(this, &this->m_CurSnappedPos, &this->m_LocalCurSnappedPos);
    AINavigator::WorldifyPosFromSpace(this, &this->m_LocalCurSnappedPos, &this->m_CurSnappedPos);
    AINavigator::LocalizePosToSpace(this, &this->m_SnappedGoalPos, &this->m_LocalSnappedGoalPos);
    AINavigator::WorldifyPosFromSpace(this, &this->m_LocalSnappedGoalPos, &this->m_SnappedGoalPos);
    AINavigator::LocalizePosToSpace(this, &this->m_RequestedGoalPos, &this->m_LocalRequestedGoalPos);
    AINavigator::WorldifyPosFromSpace(this, &this->m_LocalRequestedGoalPos, &this->m_RequestedGoalPos);
    this->m_AllowedStances = AINavigator2D::GetAllowedStances(this, &this->m_hCurArea);
  }
}

/*
==============
AINavigator2D::SetSuppressionObstacleIdx
==============
*/
void AINavigator2D::SetSuppressionObstacleIdx(AINavigator2D *this, int idx)
{
  this->m_BasePathSpec.m_obstacleBlockageFlags &= 0xFFFFF0FF;
  this->m_BasePathSpec.m_obstacleBlockageFlags |= AINavigator2D::GetSuppressionObstacleMask(this, idx);
}

/*
==============
AINavigator2D::SetSuppressionPlanes
==============
*/
void AINavigator2D::SetSuppressionPlanes(AINavigator2D *this, PathBlockPlanes *pPlanes)
{
  if ( !pPlanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2556, ASSERT_TYPE_ASSERT, "( pPlanes )", (const char *)&queryFormat, "pPlanes") )
    __debugbreak();
  if ( pPlanes->iPlaneCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2557, ASSERT_TYPE_ASSERT, "( pPlanes->iPlaneCount <= 4 )", (const char *)&queryFormat, "pPlanes->iPlaneCount <= MAX_PATH_BLOCK_PLANES") )
    __debugbreak();
  *(__m256i *)this->m_BlockPlanes.vNormal[0].v = *(__m256i *)pPlanes->vNormal[0].v;
  *(_OWORD *)this->m_BlockPlanes.fDist = *(_OWORD *)pPlanes->fDist;
  this->m_BlockPlanes.iPlaneCount = pPlanes->iPlaneCount;
}

/*
==============
AINavigator2D::ShouldRefreshSuppressionPlanes
==============
*/
bool AINavigator2D::ShouldRefreshSuppressionPlanes(AINavigator2D *this)
{
  __int64 iPlaneCount; 
  __int64 v3; 
  unsigned int *i; 
  int v6; 
  float *fDist; 
  __int64 v8; 
  PathBlockPlanes *j; 
  unsigned int v10; 
  int v11; 
  nav_obstacle_s *ObstacleByID; 
  float v13; 

  iPlaneCount = this->m_BlockPlanes.iPlaneCount;
  if ( !(_DWORD)iPlaneCount )
  {
    v3 = 0i64;
    for ( i = this->m_SuppressionIDs; *i == -1; ++i )
    {
      if ( ++v3 >= 4 )
        return 0;
    }
    return 1;
  }
  if ( LODWORD(this->m_BlockPlanes.fDist[iPlaneCount + 4]) == -1 )
    return 1;
  v6 = 0;
  fDist = this->m_BlockPlanes.fDist;
  v8 = 0i64;
  for ( j = &this->m_BlockPlanes; ; j = (PathBlockPlanes *)((char *)j + 8) )
  {
    v10 = *((_DWORD *)fDist + 5);
    v11 = this->m_BlockPlanes.iPlaneCount;
    if ( v10 == -1 )
      break;
    if ( v6 >= v11 )
      return 1;
    ObstacleByID = Nav_GetObstacleByID(v10);
    if ( !ObstacleByID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2589, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
      __debugbreak();
    if ( !ObstacleByID->m_bUsesExtents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2590, ASSERT_TYPE_ASSERT, "( pObstacle->m_bUsesExtents )", (const char *)&queryFormat, "pObstacle->m_bUsesExtents") )
      __debugbreak();
    v13 = (float)((float)(j->vNormal[0].v[1] * ObstacleByID->pos.v[1]) + (float)(j->vNormal[0].v[0] * ObstacleByID->pos.v[0])) - *fDist;
    if ( (float)(v13 * v13) > 0.0000010000001 )
      return 1;
    ++v6;
    ++v8;
    ++fDist;
    if ( v8 >= 4 )
      return 0;
  }
  return v6 < v11;
}

/*
==============
AINavigator2D::Teleport
==============
*/
void AINavigator2D::Teleport(AINavigator2D *this, const vec3_t *curPos)
{
  vec3_t outUp; 
  vec3_t worldPos; 

  AINavigator::Teleport(this, curPos);
  AINavigator::GetUpVector(this, &outUp);
  Nav_GetClosestVerticalPosWithHint(curPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &worldPos, &this->m_hCurArea, &this->m_hCurArea);
  AINavigator::LocalizePosToSpace(this, &worldPos, &this->m_LocalCurSnappedPos);
  AINavigator::WorldifyPosFromSpace(this, &this->m_LocalCurSnappedPos, &this->m_CurSnappedPos);
  this->m_LocalSnappedGoalPos = this->m_LocalCurSnappedPos;
  this->m_SnappedGoalPos = this->m_CurSnappedPos;
  bfx::AreaHandle::operator=(&this->m_hGoalArea, &this->m_hCurArea);
  this->m_AllowedStances = AINavigator2D::GetAllowedStances(this, &this->m_hCurArea);
}

/*
==============
AINavigator2D::Trace
==============
*/
__int64 AINavigator2D::Trace(AINavigator2D *this, const vec3_t *startPos, const vec3_t *endPos)
{
  nav_probe_results_s pOutResults; 

  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  LOBYTE(this) = Nav_Trace(this->m_pSpace, startPos, endPos, this->m_Layer, &this->m_BasePathSpec, &pOutResults);
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  return (unsigned __int8)this;
}

/*
==============
AINavigator2D::Trace
==============
*/
__int64 AINavigator2D::Trace(AINavigator2D *this, const vec3_t *startPos, const vec3_t *endPos, vec3_t *outHitPos)
{
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  float m_DistTraveled; 
  nav_probe_results_s pOutResults; 

  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  LOBYTE(this) = Nav_Trace(this->m_pSpace, startPos, endPos, this->m_Layer, &this->m_BasePathSpec, &pOutResults);
  v8 = endPos->v[0] - startPos->v[0];
  v10 = LODWORD(endPos->v[1]);
  v9 = endPos->v[1] - startPos->v[1];
  v11 = endPos->v[2] - startPos->v[2];
  *(float *)&v10 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v11 * v11));
  _XMM1 = v10;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm1, xmm1, xmm2, xmm0
  }
  m_DistTraveled = pOutResults.m_DistTraveled;
  outHitPos->v[0] = (float)((float)(v8 * (float)(1.0 / *(float *)&_XMM1)) * pOutResults.m_DistTraveled) + startPos->v[0];
  outHitPos->v[1] = (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM1)) * m_DistTraveled) + startPos->v[1];
  outHitPos->v[2] = (float)((float)(v11 * (float)(1.0 / *(float *)&_XMM1)) * m_DistTraveled) + startPos->v[2];
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  return (unsigned __int8)this;
}

/*
==============
AINavigator2D::TraceFromCurPos
==============
*/
__int64 AINavigator2D::TraceFromCurPos(AINavigator2D *this, const vec3_t *endPos)
{
  return ((__int64 (__fastcall *)(AINavigator2D *, vec3_t *, const vec3_t *))this->Trace)(this, &this->m_CurSnappedPos, endPos);
}

/*
==============
AINavigator2D::TraceFromCurPos
==============
*/
__int64 AINavigator2D::TraceFromCurPos(AINavigator2D *this, const vec3_t *endPos, vec3_t *outHitPos)
{
  return ((__int64 (__fastcall *)(AINavigator2D *, vec3_t *, const vec3_t *, vec3_t *))this->Trace)(this, &this->m_CurSnappedPos, endPos, outHitPos);
}

/*
==============
AINavigator2D::TransferNavigatorsToSpace
==============
*/
void AINavigator2D::TransferNavigatorsToSpace(nav_space_s *pNewSpace)
{
  signed int maxSentients; 
  __int64 v3; 
  AINavigator *v4; 
  nav_space_s *(__fastcall *FindMostLikelySpace)(AINavigator *, const vec3_t *, const AINavLayer, nav_space_s *); 
  AINavLayer Layer; 
  vec3_t v7; 

  maxSentients = level.maxSentients;
  if ( level.maxSentients > 0x110 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 147, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators2D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators2D )\n\t%i, %i", level.maxSentients, 272) )
      __debugbreak();
    maxSentients = level.maxSentients;
  }
  v3 = maxSentients;
  if ( maxSentients > 0 )
  {
    v4 = &s_Navigators2D;
    do
    {
      if ( v4->m_bInUse && v4->m_pSpace != pNewSpace )
      {
        v4->GetCurPos(v4, &v7);
        FindMostLikelySpace = v4->FindMostLikelySpace;
        Layer = Nav_GetLayer(v4);
        if ( FindMostLikelySpace(v4, &v7, (const AINavLayer)Layer, NULL) == pNewSpace )
          Nav_MoveNavigatorToSpace(v4, pNewSpace);
      }
      v4 = (AINavigator *)((char *)v4 + 1472);
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
nav_path_t::TrimLeadingPathPoints
==============
*/
void nav_path_t::TrimLeadingPathPoints(nav_path_t *this, int newFirstPathPoint)
{
  __int64 v2; 
  int v4; 
  int i; 
  int v6; 
  __int64 v7; 
  bfx::AreaHandle *p_m_hArea; 
  __int64 v9; 
  int m_NumPoints; 

  v2 = newFirstPathPoint;
  if ( this->m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4240, ASSERT_TYPE_ASSERT, "(m_NumPoints > 0)", (const char *)&queryFormat, "m_NumPoints > 0") )
    __debugbreak();
  if ( (unsigned int)v2 >= this->m_NumPoints )
  {
    m_NumPoints = this->m_NumPoints;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4241, ASSERT_TYPE_ASSERT, "(unsigned)( newFirstPathPoint ) < (unsigned)( m_NumPoints )", "newFirstPathPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v9, m_NumPoints) )
      __debugbreak();
  }
  if ( (_DWORD)v2 )
  {
    v4 = 0;
    this->m_LocalStartPoint.v[0] = this->m_Points[v2 - 1].m_LocalPos.v[0];
    this->m_LocalStartPoint.v[1] = this->m_Points[v2 - 1].m_LocalPos.v[1];
    this->m_LocalStartPoint.v[2] = this->m_Points[v2 - 1].m_LocalPos.v[2];
    for ( i = this->m_NumPoints; (int)v2 < i; LODWORD(v2) = v2 + 1 )
    {
      nav_path_t::CopyPathPoint(this, &this->m_Points[(int)v2], &this->m_Points[v4]);
      i = this->m_NumPoints;
      ++v4;
    }
    v6 = v4;
    if ( v4 < i )
    {
      do
        bfx::AreaHandle::Release(&this->m_Points[v6++].m_hArea);
      while ( v6 < this->m_NumPoints );
    }
    this->m_NumPoints = v4;
    if ( v4 < 20 )
    {
      v7 = (unsigned int)(20 - v4);
      p_m_hArea = &this->m_Points[v4].m_hArea;
      do
      {
        if ( bfx::AreaHandle::IsValid(p_m_hArea) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4263, ASSERT_TYPE_ASSERT, "(!m_Points[iPoint].m_hArea.IsValid())", (const char *)&queryFormat, "!m_Points[iPoint].m_hArea.IsValid()") )
          __debugbreak();
        p_m_hArea += 3;
        --v7;
      }
      while ( v7 );
    }
  }
}

/*
==============
AINavigator2D::UpdateCurSegment
==============
*/
_BOOL8 AINavigator2D::UpdateCurSegment(AINavigator2D *this, const vec3_t *newPos, const bfx::AreaHandle *hNewArea)
{
  __int64 v3; 
  int m_CurPathPoint; 
  int v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  bool updated; 
  unsigned int m_Flags; 
  bool v15; 
  __int64 m_NumPoints; 
  int v18; 
  vec3_t outDir; 
  vec3_t outPoint; 
  bfx::PathSpec pPathSpec; 

  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateCurSegment");
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1740, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()", -2i64) )
    __debugbreak();
  if ( AINavigator::ShouldPathOutOfBounds(this) && this->IsNextCornerGoal(this) )
    goto LABEL_37;
  pPathSpec = this->m_PathSpecOfCurPath;
  pPathSpec.m_obstacleBlockageFlags = HIDWORD(v3) | 0x2000;
  AINavigator2D::AdjustCornersForTeamWalking(this);
  if ( this->m_CurPathPoint >= this->m_Path.m_NumPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1750, ASSERT_TYPE_ASSERT, "( m_CurPathPoint < m_Path.m_NumPoints )", (const char *)&queryFormat, "m_CurPathPoint < m_Path.m_NumPoints") )
    __debugbreak();
  m_CurPathPoint = this->m_CurPathPoint;
  v8 = m_CurPathPoint + 1;
  nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &outPoint);
  if ( v8 >= this->m_Path.m_NumPoints )
    goto LABEL_23;
  nav_path_t::GetDir(&this->m_Path, this->m_CurPathPoint, &outDir);
  v9 = outPoint.v[0] - newPos->v[0];
  v10 = newPos->v[1];
  v11 = outPoint.v[2] - newPos->v[2];
  v12 = (float)((float)((float)(outPoint.v[1] - v10) * outDir.v[1]) + (float)(v9 * outDir.v[0])) + (float)(v11 * outDir.v[2]);
  if ( v12 > 0.0 )
  {
    if ( v12 < 18.0 && this->m_CurPathPoint > 0 && (float)((float)((float)((float)((float)(outPoint.v[1] - v10) * (float)(outPoint.v[1] - v10)) + (float)(v9 * v9)) + (float)(v11 * v11)) - (float)(v12 * v12)) > 1764.0 )
      goto LABEL_24;
    m_Flags = this->m_Path.m_Points[this->m_CurPathPoint].m_Flags;
    v15 = (m_Flags & 2) == 0;
    if ( (m_Flags & 2) == 0 )
    {
      if ( this->m_bAllowSkipMultigoalPoint && (m_Flags & 0x400) != 0 )
        goto LABEL_21;
      if ( (m_Flags & 0xC10) != 0 )
        v15 = (float)((float)((float)(newPos->v[0] - outPoint.v[0]) * (float)(newPos->v[0] - outPoint.v[0])) + (float)((float)(v10 - outPoint.v[1]) * (float)(v10 - outPoint.v[1]))) < 144.0;
      if ( v15 )
      {
LABEL_21:
        nav_path_t::GetPathPoint(&this->m_Path, v8, &outDir);
        if ( Nav_IsStraightLineReachable(newPos, hNewArea, &outDir, &this->m_Path.m_Points[v8].m_hArea, &pPathSpec) )
        {
          ++this->m_CurPathPoint;
LABEL_37:
          updated = 1;
          goto LABEL_38;
        }
      }
    }
LABEL_23:
    if ( Nav_IsStraightLineReachable(newPos, hNewArea, &outPoint, &this->m_Path.m_Points[this->m_CurPathPoint].m_hArea, &this->m_PathSpecOfCurPath) )
    {
      m_NumPoints = this->m_Path.m_NumPoints;
      if ( (int)m_NumPoints > 0 && (*(_DWORD *)(&this->m_MaxDeviationFromPath + 12 * m_NumPoints) & 1) == 0 && this->GetPathDistToGoal(this) < 550.0 )
      {
        v18 = this->m_CurPathPoint;
        if ( v18 > 0 || this->m_Path.m_NumPoints < 20 )
        {
          nav_path_t::TrimLeadingPathPoints(&this->m_Path, v18);
          this->m_CurPathPoint = 0;
          if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1838, ASSERT_TYPE_ASSERT, "(m_Path.m_NumPoints > 0)", (const char *)&queryFormat, "m_Path.m_NumPoints > 0") )
            __debugbreak();
          nav_path_t::GetPathPoint(&this->m_Path, this->m_Path.m_NumPoints - 1, &outDir);
          if ( !AINavigator2D::ExtendPath(this, &outDir, (const bfx::AreaHandle *)&this->m_hLink.m_pSpace + 3 * this->m_Path.m_NumPoints, &this->m_SnappedGoalPos) )
            AINavigator::BadPathNotify(this, &this->m_RequestedGoalPos);
        }
      }
      goto LABEL_37;
    }
LABEL_24:
    updated = 0;
    goto LABEL_38;
  }
  ++this->m_CurPathPoint;
  updated = AINavigator2D::UpdateCurSegment(this, newPos, hNewArea);
LABEL_38:
  Sys_ProfEndNamedEvent();
  return updated;
}

/*
==============
AINavigator2D::UpdateTightQuarters
==============
*/

void __fastcall AINavigator2D::UpdateTightQuarters(AINavigator2D *this, double updateDistance)
{
  int m_NumPoints; 
  __int128 v7; 
  float v8; 
  float v9; 
  float v10; 
  __int64 m_CurPathPoint; 
  unsigned int *p_m_Flags; 
  float v13; 
  unsigned int v14; 
  float v15; 
  float v16; 
  float v17; 
  int v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  bool outFullyProcessed; 
  float outRemainingLength; 
  __int64 v24; 
  vec3_t startPoint; 

  v24 = -2i64;
  _XMM6 = *(_OWORD *)&updateDistance;
  Sys_ProfBeginNamedEvent(0xFF808080, "UpdateTightQuarters");
  m_NumPoints = this->m_Path.m_NumPoints;
  if ( m_NumPoints > 0 )
  {
    __asm
    {
      vcmpless xmm1, xmm6, xmm11
      vblendvps xmm0, xmm6, xmm0, xmm1
    }
    outRemainingLength = *(float *)&_XMM0;
    v7 = 0i64;
    v8 = this->m_LocalCurSnappedPos.v[0];
    startPoint.v[0] = v8;
    v9 = this->m_LocalCurSnappedPos.v[1];
    startPoint.v[1] = v9;
    v10 = this->m_LocalCurSnappedPos.v[2];
    startPoint.v[2] = v10;
    m_CurPathPoint = this->m_CurPathPoint;
    if ( (int)m_CurPathPoint < m_NumPoints )
    {
      p_m_Flags = &this->m_Path.m_Points[m_CurPathPoint].m_Flags;
      v13 = outRemainingLength;
      do
      {
        v14 = *p_m_Flags;
        if ( (*p_m_Flags & 0xC0) == 0 )
        {
          if ( (v14 & 0x300) == 0 || (v15 = *((float *)p_m_Flags - 3) - this->m_LocalCurSnappedPos.v[0], v16 = *((float *)p_m_Flags - 2) - this->m_LocalCurSnappedPos.v[1], v17 = *((float *)p_m_Flags - 1) - this->m_LocalCurSnappedPos.v[2], (float)(fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17)) - *((float *)p_m_Flags + 4)) <= 50.0) )
          {
            outFullyProcessed = 0;
            outRemainingLength = 0.0;
            *p_m_Flags = v14 & 0xFFFFFCFF;
            if ( AINavigator2D::IsTightPathSegment(this, &startPoint, (const vec3_t *)p_m_Flags - 1, 100.0, &outFullyProcessed, &outRemainingLength) )
            {
              v18 = 256;
              if ( outFullyProcessed )
                v18 = 64;
            }
            else
            {
              v18 = 512;
              if ( outFullyProcessed )
                v18 = 128;
            }
            *p_m_Flags |= v18;
            *((float *)p_m_Flags + 4) = outRemainingLength;
          }
        }
        v19 = *((float *)p_m_Flags - 2);
        v20 = *((float *)p_m_Flags - 1);
        v21 = v7;
        *(float *)&v21 = *(float *)&v7 + fsqrt((float)((float)((float)(v19 - v9) * (float)(v19 - v9)) + (float)((float)(*((float *)p_m_Flags - 3) - v8) * (float)(*((float *)p_m_Flags - 3) - v8))) + (float)((float)(v20 - v10) * (float)(v20 - v10)));
        v7 = v21;
        if ( *(float *)&v21 >= v13 )
          break;
        v8 = *((float *)p_m_Flags - 3);
        startPoint.v[0] = v8;
        v9 = v19;
        startPoint.v[1] = v19;
        v10 = v20;
        startPoint.v[2] = v20;
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        p_m_Flags += 12;
      }
      while ( (int)m_CurPathPoint < this->m_Path.m_NumPoints );
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
AINavigator2D::VerifyShutdown
==============
*/
void AINavigator2D::VerifyShutdown(void)
{
  unsigned int v0; 
  bool *p_m_bInUse; 

  v0 = 0;
  p_m_bInUse = &s_Navigators2D.m_bInUse;
  do
  {
    if ( *p_m_bInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 65, ASSERT_TYPE_ASSERT, "( !s_Navigators2D[ iNav ].m_bInUse )", (const char *)&queryFormat, "!s_Navigators2D[ iNav ].m_bInUse") )
      __debugbreak();
    ++v0;
    p_m_bInUse += 1472;
  }
  while ( v0 < 0x110 );
}

/*
==============
AINavigator2D::WorldChanged
==============
*/
void AINavigator2D::WorldChanged(AINavigator2D *this)
{
  if ( this->m_Path.m_NumPoints > 0 )
  {
    if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 218, ASSERT_TYPE_ASSERT, "(m_pEnt)", (const char *)&queryFormat, "m_pEnt") )
      __debugbreak();
    Nav_ClearLinkWeightsForEnt(this->m_pEnt->s.number);
    if ( this->m_pEnt->health > 0 )
    {
      if ( bfx::LinkHandle::IsValid(&this->m_hLink) )
      {
        this->m_bPathReevalRequested = 1;
      }
      else if ( this->m_ReevalPathTask.status[0] != 1 )
      {
        AIScheduler::AddReevalPathTask(&this->m_ReevalPathTask);
      }
    }
  }
}

/*
==============
AINavigator2D::WriteNavigator
==============
*/
void AINavigator2D::WriteNavigator(AINavigator2D *this, MemoryFile *memFile)
{
  int LinkID; 
  unsigned int *m_SuppressionIDs; 
  __int64 v6; 
  int m_NumPoints; 
  float *p_m_Length; 
  unsigned __int32 p; 

  LOBYTE(p) = 2;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4026, ASSERT_TYPE_ASSERT, "( m_pEnt )", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  p = this->m_pEnt->s.number;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_Layer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_pSpace->parentEntNum;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, &this->m_CurSnappedPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_LocalCurSnappedPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_RequestedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_LocalRequestedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_SnappedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_LocalSnappedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_LocalSnappedPathStartPos);
  MemFile_WriteData(memFile, 0x50ui64, &this->m_BasePathSpec);
  MemFile_WriteData(memFile, 0x50ui64, &this->m_PathSpecOfCurPath);
  p = this->m_TimeOfLastPathUpdate;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_TimeOfLastBlockage;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_TimeOfLastPathFindFail;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_TimeOfLastPathSuppressed;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, this->m_DistFromGoalToPathToRequestedGoal);
  MemFile_WriteFloat(memFile, this->m_MaxDeviationFromPath);
  LOBYTE(p) = this->m_bPathingOutOfBounds;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = this->m_AllowedStances;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = this->m_bTeamWalkEnabled;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->m_bAllowSkipMultigoalPoint;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->m_bPathReevalRequested;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( bfx::LinkHandle::IsValid(&this->m_hLink) )
    LinkID = Nav_GetLinkID(&this->m_hLink);
  else
    LinkID = -1;
  p = LinkID;
  MemFile_WriteData(memFile, 4ui64, &p);
  m_SuppressionIDs = this->m_SuppressionIDs;
  v6 = 4i64;
  do
  {
    p = *m_SuppressionIDs;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++m_SuppressionIDs;
    --v6;
  }
  while ( v6 );
  p = this->m_SuppressionTimestamp;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = this->m_bMultiGoalPath;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->m_bPathRequested;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = this->m_CurPathPoint;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = this->m_ReevalPathTask.status[0];
  MemFile_WriteData(memFile, 1ui64, &p);
  p = this->m_ReevalPathTask.timestamp;
  MemFile_WriteData(memFile, 4ui64, &p);
  m_NumPoints = this->m_Path.m_NumPoints;
  LOBYTE(p) = m_NumPoints > 0;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( m_NumPoints > 0 )
  {
    p = this->m_Path.m_NumPoints;
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( this->m_Path.m_NumPoints > 0 )
    {
      MemFile_WriteData(memFile, 0xCui64, &this->m_Path.m_LocalStartPoint);
      if ( this->m_Path.m_NumPoints > 0 )
      {
        p_m_Length = &this->m_Path.m_Points[0].m_Length;
        do
        {
          MemFile_WriteData(memFile, 0xCui64, p_m_Length - 5);
          p = *((_DWORD *)p_m_Length - 2);
          MemFile_WriteData(memFile, 4ui64, &p);
          MemFile_WriteFloat(memFile, *p_m_Length);
          p = *((_DWORD *)p_m_Length - 1);
          MemFile_WriteData(memFile, 4ui64, &p);
          MemFile_WriteFloat(memFile, p_m_Length[1]);
          MemFile_WriteFloat(memFile, p_m_Length[2]);
          LODWORD(v6) = v6 + 1;
          p_m_Length += 12;
        }
        while ( (int)v6 < this->m_Path.m_NumPoints );
      }
    }
  }
}

/*
==============
AINavigator2D::WritePath
==============
*/
void AINavigator2D::WritePath(AINavigator2D *this, MemoryFile *memFile)
{
  int v4; 
  float *p_m_Length; 
  int p; 

  p = this->m_Path.m_NumPoints;
  MemFile_WriteData(memFile, 4ui64, &p);
  if ( this->m_Path.m_NumPoints > 0 )
  {
    MemFile_WriteData(memFile, 0xCui64, &this->m_Path.m_LocalStartPoint);
    v4 = 0;
    if ( this->m_Path.m_NumPoints > 0 )
    {
      p_m_Length = &this->m_Path.m_Points[0].m_Length;
      do
      {
        MemFile_WriteData(memFile, 0xCui64, p_m_Length - 5);
        p = *((_DWORD *)p_m_Length - 2);
        MemFile_WriteData(memFile, 4ui64, &p);
        MemFile_WriteFloat(memFile, *p_m_Length);
        p = *((_DWORD *)p_m_Length - 1);
        MemFile_WriteData(memFile, 4ui64, &p);
        MemFile_WriteFloat(memFile, p_m_Length[1]);
        MemFile_WriteFloat(memFile, p_m_Length[2]);
        ++v4;
        p_m_Length += 12;
      }
      while ( v4 < this->m_Path.m_NumPoints );
    }
  }
}

