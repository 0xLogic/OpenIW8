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
bool IsPointInRegion(const vec3_t *pos, unsigned int volumePhysInstId, HavokPhysics_CollisionQueryResult *pResult)
{
  int NumRigidBodys; 
  unsigned int v9; 
  unsigned int m_serialAndIndex; 
  bool v12; 
  __int64 v14; 
  Physics_QueryPointExtendedData extendedData; 
  hknpBodyId result; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  if ( !pResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_search.cpp", 41, ASSERT_TYPE_ASSERT, "(pResult)", (const char *)&queryFormat, "pResult") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  __asm { vmovss  [rsp+98h+extendedData.collisionBuffer], xmm6 }
  extendedData.contents = -1;
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, volumePhysInstId);
  v9 = 0;
  if ( NumRigidBodys <= 0 )
  {
LABEL_16:
    v12 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( volumePhysInstId == -1 )
      {
        LODWORD(v14) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v14) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v14) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v14) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, volumePhysInstId, v9)->m_serialAndIndex;
      HavokPhysics_CollisionQueryResult::Reset(pResult, 0);
      __asm { vmovaps xmm3, xmm6; maxDistance }
      Physics_QueryPoint(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, pos, *(float *)&_XMM3, &extendedData, pResult);
      if ( HavokPhysics_CollisionQueryResult::HasHit(pResult) )
        break;
      if ( (int)++v9 >= NumRigidBodys )
        goto LABEL_16;
    }
    v12 = 1;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  return v12;
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

  _R15 = this;
  AINavigator::AINavigator(this, pEnt, layer);
  _R15->__vftable = (AINavigator_vtbl *)&AINavigator2D::`vftable';
  `eh vector constructor iterator'(&_R15->m_Path, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::pathpoint_t, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
  _R15->m_Path.m_NumPoints = 20;
  _R15->m_Path.m_pSpace = NULL;
  nav_path_t::Reset(&_R15->m_Path);
  _R15->m_BasePathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&_R15->m_BasePathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&_R15->m_BasePathSpec.m_areaPenaltyFlags = -1i64;
  _R15->m_BasePathSpec.m_usePathSharingPenalty = 0;
  *(_QWORD *)&_R15->m_BasePathSpec.m_pathSharingPenalty = 0i64;
  _R15->m_BasePathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&_R15->m_BasePathSpec.m_penaltyTable);
  _R15->m_BasePathSpec.m_snapMode = SNAP_CLOSEST;
  _R15->m_PathSpecOfCurPath.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&_R15->m_PathSpecOfCurPath.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&_R15->m_PathSpecOfCurPath.m_areaPenaltyFlags = -1i64;
  _R15->m_PathSpecOfCurPath.m_usePathSharingPenalty = 0;
  *(_QWORD *)&_R15->m_PathSpecOfCurPath.m_pathSharingPenalty = 0i64;
  _R15->m_PathSpecOfCurPath.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&_R15->m_PathSpecOfCurPath.m_penaltyTable);
  _R15->m_PathSpecOfCurPath.m_snapMode = SNAP_CLOSEST;
  bfx::AreaHandle::AreaHandle(&_R15->m_hGoalArea);
  bfx::AreaHandle::AreaHandle(&_R15->m_hCurArea);
  bfx::LinkReservationRCPtr::LinkReservationRCPtr(&_R15->m_LinkReservation);
  AINavigator::GetUpVector(_R15, &outUp);
  _R15->m_BasePathSpec.m_linkUsageFlags = 1;
  *(_QWORD *)&_R15->m_BasePathSpec.m_obstacleBlockageFlags = -8065i64;
  Nav_GetClosestVerticalPos(&pEnt->r.currentOrigin, &outUp, layer, &_R15->m_pSpace->hSpace, &_R15->m_BasePathSpec, &worldPos, &_R15->m_hGoalArea);
  AINavigator::LocalizePosToSpace(_R15, &worldPos, &_R15->m_LocalCurSnappedPos);
  AINavigator::WorldifyPosFromSpace(_R15, &_R15->m_LocalCurSnappedPos, &_R15->m_CurSnappedPos);
  _R15->m_LocalSnappedGoalPos.v[0] = _R15->m_LocalCurSnappedPos.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r15+58h]
    vmovss  dword ptr [r15+4Ch], xmm0
    vmovss  xmm1, dword ptr [r15+5Ch]
    vmovss  dword ptr [r15+50h], xmm1
  }
  bfx::AreaHandle::operator=(&_R15->m_hCurArea, &_R15->m_hGoalArea);
  _R15->m_AllowedStances = STANCE_ANY;
  _R15->m_CurPathPoint = 0;
  *(_QWORD *)_R15->m_SuppressionIDs = -1i64;
  *(_QWORD *)&_R15->m_SuppressionIDs[2] = -1i64;
  _R15->m_bTeamWalkEnabled = 0;
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
  bool v7; 
  unsigned int m_TimeOfLastPathSuppressed; 
  int v13; 
  bool v16; 
  AINavigator *v17; 
  unsigned __int8 v18; 
  char v30; 
  __int64 result; 
  float fmt; 
  bfx::AreaHandle hStartArea; 
  __int64 v40; 
  vec3_t point; 
  vec3_t v42; 
  vec3_t outUp; 
  vec3_t outPoint; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  v40 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RSI = goalPos;
  _RDI = this;
  m_NumPoints = this->m_Path.m_NumPoints;
  v7 = (int)m_NumPoints > 0 && (*(_DWORD *)(&this->m_MaxDeviationFromPath + 12 * m_NumPoints) & 1) == 0;
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2070, ASSERT_TYPE_ASSERT, "( !m_Path.IsIncomplete() )", (const char *)&queryFormat, "!m_Path.IsIncomplete()") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&hStartArea);
  if ( _RDI->m_Path.m_NumPoints <= 0 )
  {
    m_TimeOfLastPathSuppressed = _RDI->m_TimeOfLastPathSuppressed;
    if ( m_TimeOfLastPathSuppressed && level.time - m_TimeOfLastPathSuppressed < 0x5DC )
      goto LABEL_18;
    _RBX = &_RDI->m_PathSpecOfCurPath;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+4A4h]
      vmovups ymmword ptr [rbx], ymm0
      vmovups ymm1, ymmword ptr [rdi+4C4h]
      vmovups ymmword ptr [rbx+20h], ymm1
      vmovups xmm0, xmmword ptr [rdi+4E4h]
      vmovups xmmword ptr [rbx+40h], xmm0
    }
    if ( _RDI->IsInBadPlace(_RDI) )
      _RDI->m_PathSpecOfCurPath.m_obstacleBlockageFlags = 1;
    _RDI->GetCurPos(_RDI, &outPoint);
    bfx::AreaHandle::operator=(&hStartArea, &_RDI->m_hCurArea);
  }
  else
  {
    nav_path_t::TrimLeadingPathPoints(&_RDI->m_Path, _RDI->m_CurPathPoint);
    _RDI->m_CurPathPoint = 0;
    nav_path_t::GetPathPoint(&_RDI->m_Path, _RDI->m_Path.m_NumPoints - 1, &outPoint);
    bfx::AreaHandle::operator=(&hStartArea, (const bfx::AreaHandle *)&_RDI->m_hLink.m_pSpace + 3 * _RDI->m_Path.m_NumPoints);
    _RBX = &_RDI->m_PathSpecOfCurPath;
  }
  v13 = _RDI->m_Path.m_NumPoints;
  AINavigator::GetUpVector(_RDI, &outUp);
  Nav_GetClosestVerticalPos(_RSI, &outUp, _RDI->m_Layer, &_RDI->m_pSpace->hSpace, _RBX, &point, NULL);
  __asm
  {
    vmovss  xmm0, cs:__real@42900000
    vmovss  dword ptr [rsp+0D0h+fmt], xmm0
    vmovss  xmm3, cs:__real@41400000; radius
  }
  v16 = Nav_PointWithinCylinderWithUp(&point, _RSI, &outUp, *(float *)&_XMM3, fmt);
  v17 = _RDI;
  if ( !v16 )
  {
LABEL_17:
    AINavigator::BadPathNotify(v17, _RSI);
LABEL_18:
    v18 = 0;
    goto LABEL_27;
  }
  if ( !AINavigator2D::ExtendPath(_RDI, &outPoint, &hStartArea, &point) )
  {
    v17 = _RDI;
    goto LABEL_17;
  }
  if ( _RDI->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2052, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  nav_path_t::GetPathPoint(&_RDI->m_Path, _RDI->m_Path.m_NumPoints - 1, &v42);
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+57h+point]
    vsubss  xmm2, xmm4, dword ptr [rbp+57h+var_68]
    vmovss  xmm5, dword ptr [rbp+57h+point+4]
    vsubss  xmm0, xmm5, dword ptr [rbp+57h+var_68+4]
    vmovss  xmm6, dword ptr [rbp+57h+point+8]
    vsubss  xmm3, xmm6, dword ptr [rbp+57h+var_68+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@40800000
  }
  if ( v30 )
  {
    *((_DWORD *)&_RDI->m_MaxDeviationFromPath + 12 * _RDI->m_Path.m_NumPoints) |= 0x400u;
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+57h+point+8]
      vmovss  xmm5, dword ptr [rbp+57h+point+4]
      vmovss  xmm4, dword ptr [rbp+57h+point]
    }
  }
  _RBX = &_RDI->m_SnappedGoalPos;
  __asm
  {
    vmovss  dword ptr [rbx], xmm4
    vmovss  dword ptr [rbx+4], xmm5
    vmovss  dword ptr [rbx+8], xmm6
  }
  _RDX = &_RDI->m_RequestedGoalPos;
  _RDI->m_RequestedGoalPos.v[0] = _RSI->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rdx+4], xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rdx+8], xmm1
  }
  AINavigator::LocalizePosToSpace(_RDI, &_RDI->m_RequestedGoalPos, &_RDI->m_LocalRequestedGoalPos);
  AINavigator::LocalizePosToSpace(_RDI, &_RDI->m_SnappedGoalPos, &_RDI->m_LocalSnappedGoalPos);
  *(_WORD *)&_RDI->m_bMultiGoalPath = 257;
  _RDI->m_bPathingOutOfBounds = 0;
  if ( v13 <= 0 )
    _RDI->m_TimeOfLastPathUpdate = level.time;
  v18 = 1;
LABEL_27:
  bfx::AreaHandle::~AreaHandle(&hStartArea);
  result = v18;
  _R11 = &v45;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
AINavigator2D::AdjustCornerForTeamWalking
==============
*/
__int64 AINavigator2D::AdjustCornerForTeamWalking(AINavigator2D *this, int iCorner, const vec3_t *prevLocalCorner, const bfx::AreaHandle *hPrevArea)
{
  __int64 v16; 
  int v18; 
  __int64 v19; 
  __int64 v27; 
  unsigned __int8 v95; 
  __int64 result; 
  int outClosestPos; 
  int hHintArea; 
  bfx::AreaHandle hEndArea; 
  bfx::AreaHandle *hStartArea; 
  __int64 v112; 
  vec3_t outWorldPos; 
  vec3_t outUp; 
  vec3_t localPos; 
  vec3_t startPos; 
  vec3_t outPoint; 
  char v118; 
  void *retaddr; 

  _RAX = &retaddr;
  v112 = -2i64;
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
  hStartArea = (bfx::AreaHandle *)hPrevArea;
  v16 = iCorner;
  v18 = iCorner + 1;
  if ( (unsigned int)(iCorner + 1) >= this->m_Path.m_NumPoints )
  {
    hHintArea = this->m_Path.m_NumPoints;
    outClosestPos = iCorner + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1978, ASSERT_TYPE_ASSERT, "(unsigned)( iNextCorner ) < (unsigned)( m_Path.m_NumPoints )", "iNextCorner doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", outClosestPos, hHintArea) )
      __debugbreak();
  }
  v19 = v16;
  _R15 = &this->m_Path.m_Points[v16].m_LocalPos;
  Nav_GetSpaceUp(this->m_pSpace, &outUp);
  __asm
  {
    vmovss  xmm13, dword ptr [r15]
    vsubss  xmm5, xmm13, dword ptr [r13+0]
    vmovss  xmm14, dword ptr [r15+4]
    vsubss  xmm9, xmm14, dword ptr [r13+4]
    vmovss  xmm15, dword ptr [r15+8]
    vsubss  xmm10, xmm15, dword ptr [r13+8]
  }
  v27 = 2 * (3 * v16 + 3);
  __asm
  {
    vsubss  xmm4, xmm13, dword ptr [rbx+r14*8+0C8h]
    vsubss  xmm7, xmm14, dword ptr [rbx+r14*8+0CCh]
    vsubss  xmm8, xmm15, dword ptr [rbx+r14*8+0D0h]
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmovss  xmm11, cs:__real@80000000
    vcmpless xmm0, xmm3, xmm11
    vmovss  xmm12, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm12, xmm0
    vdivss  xmm6, xmm12, xmm1
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm1, xmm3, xmm12, xmm0
    vdivss  xmm3, xmm12, xmm1
    vmulss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm5, xmm6
    vaddss  xmm5, xmm1, xmm0
    vmulss  xmm2, xmm7, xmm3
    vmulss  xmm1, xmm9, xmm6
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm8, xmm3
    vmulss  xmm0, xmm10, xmm6
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm1, cs:__real@3f000000
    vmulss  xmm7, xmm5, xmm1
    vmulss  xmm8, xmm4, xmm1
    vmulss  xmm9, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+1A0h+outUp]
    vmulss  xmm0, xmm8, dword ptr [rsp+1A0h+outUp+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rbp+0A0h+outUp+8]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm3, dword ptr [rsp+1A0h+outUp]
    vaddss  xmm5, xmm2, xmm7
    vmulss  xmm0, xmm3, dword ptr [rsp+1A0h+outUp+4]
    vaddss  xmm6, xmm0, xmm8
    vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+outUp+8]
    vaddss  xmm7, xmm1, xmm9
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, xmm11
    vblendvps xmm1, xmm4, xmm12, xmm0
    vdivss  xmm4, xmm12, xmm1
    vmulss  xmm0, xmm5, xmm4
    vmovss  xmm3, cs:__real@41800000
    vmulss  xmm0, xmm0, xmm3
    vaddss  xmm1, xmm0, xmm13
    vmovss  dword ptr [rbp+0A0h+localPos], xmm1
    vmulss  xmm2, xmm6, xmm4
    vmulss  xmm0, xmm2, xmm3
    vaddss  xmm1, xmm0, xmm14
    vmovss  dword ptr [rbp+0A0h+localPos+4], xmm1
    vmulss  xmm2, xmm7, xmm4
    vmulss  xmm0, xmm2, xmm3
    vaddss  xmm1, xmm0, xmm15
    vmovss  dword ptr [rbp+0A0h+localPos+8], xmm1
  }
  Nav_SpaceConvertLocalToWorld(this->m_pSpace, &localPos, &outWorldPos);
  bfx::AreaHandle::AreaHandle(&hEndArea);
  Nav_GetClosestVerticalPosWithHint(&outWorldPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_PathSpecOfCurPath, &outWorldPos, &this->m_Path.m_Points[v19].m_hArea, &hEndArea);
  Nav_SpaceConvertLocalToWorld(this->m_pSpace, prevLocalCorner, &startPos);
  nav_path_t::GetPathPoint(&this->m_Path, v18, &outPoint);
  if ( Nav_IsStraightLineReachable(&startPos, hStartArea, &outWorldPos, &hEndArea, &this->m_PathSpecOfCurPath) && Nav_IsStraightLineReachable(&outWorldPos, &hEndArea, &outPoint, (const bfx::AreaHandle *)((char *)&this->m_Path.m_Points[0].m_hArea + 8 * v27), &this->m_PathSpecOfCurPath) )
  {
    Nav_SpaceConvertWorldToLocal(this->m_pSpace, &outWorldPos, _R15);
    this->m_Path.m_Points[v19].m_Flags |= 0x20u;
    bfx::AreaHandle::operator=(&this->m_Path.m_Points[v19].m_hArea, &hEndArea);
    v95 = 1;
  }
  else
  {
    v95 = 0;
  }
  bfx::AreaHandle::~AreaHandle(&hEndArea);
  result = v95;
  _R11 = &v118;
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
AINavigator2D::AdjustCornersForTeamWalking
==============
*/
void AINavigator2D::AdjustCornersForTeamWalking(AINavigator2D *this)
{
  int m_NumPoints; 
  unsigned int m_CurPathPoint; 
  __int64 v9; 
  gentity_s *m_pEnt; 
  __int64 v11; 
  int Navigator2DMaxCount; 
  __int64 v26; 
  __int64 v27; 
  float *v28; 
  __int64 v33; 
  __int64 v34; 
  __int64 v58; 
  bool v61; 
  int v62; 
  __int64 v68; 
  unsigned int v69; 
  __int64 v70; 
  int v71; 
  vec3_t prevLocalCorner; 

  _RBX = this;
  if ( this->m_bTeamWalkEnabled )
  {
    m_NumPoints = this->m_Path.m_NumPoints;
    if ( m_NumPoints > 0 )
    {
      m_CurPathPoint = this->m_CurPathPoint;
      if ( m_CurPathPoint >= m_NumPoints )
      {
        v71 = m_NumPoints;
        v69 = m_CurPathPoint;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1907, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurPathPoint ) < (unsigned)( m_Path.m_NumPoints )", "m_CurPathPoint doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", v69, v71) )
          __debugbreak();
      }
      v9 = _RBX->m_CurPathPoint;
      if ( (_RBX->m_Path.m_Points[v9].m_Flags & 0x407) == 0 && (_DWORD)v9 != _RBX->m_Path.m_NumPoints - 1 )
      {
        m_pEnt = _RBX->m_pEnt;
        __asm { vmovaps [rsp+0D8h+var_58], xmm8 }
        if ( !m_pEnt->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1915, ASSERT_TYPE_ASSERT, "(m_pEnt->sentient)", (const char *)&queryFormat, "m_pEnt->sentient") )
          __debugbreak();
        v11 = _RBX->m_CurPathPoint;
        _RCX = 6 * v11;
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+rcx*8+0C8h]
          vmovss  dword ptr [rsp+0D8h+prevLocalCorner], xmm2
          vmovss  xmm0, dword ptr [rbx+rcx*8+0CCh]
          vsubss  xmm2, xmm2, dword ptr [rbx+54h]
          vmovss  dword ptr [rsp+0D8h+prevLocalCorner+4], xmm0
          vmovss  xmm1, dword ptr [rbx+rcx*8+0D0h]
          vsubss  xmm0, xmm0, dword ptr [rbx+58h]
          vsubss  xmm3, xmm1, dword ptr [rbx+5Ch]
          vmovss  dword ptr [rsp+0D8h+prevLocalCorner+8], xmm1
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm8, xmm2, xmm2
          vcomiss xmm8, cs:__real@42400000
        }
        if ( !__CFADD__(3 * v11, 3 * v11) )
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AITeamWalking");
          Navigator2DMaxCount = Nav_GetNavigator2DMaxCount();
          v26 = Navigator2DMaxCount;
          if ( Navigator2DMaxCount > 0 )
          {
            v27 = 0i64;
            v28 = &s_Navigators2D.m_LocalCurSnappedPos.v[2];
            __asm
            {
              vmovaps [rsp+0D8h+var_48], xmm7
              vmovss  xmm7, cs:__real@45a20000
              vmovaps [rsp+0D8h+var_68], xmm9
              vmovaps [rsp+0D8h+var_78], xmm10
              vmovss  xmm10, cs:__real@43100000
              vmovaps [rsp+0D8h+var_38], xmm6
              vxorps  xmm9, xmm9, xmm9
            }
            while ( 1 )
            {
              _RSI = v28 - 23;
              if ( v28 - 23 != (float *)_RBX && *((_BYTE *)v28 + 80) && (*(unsigned __int8 (__fastcall **)(float *))(*(_QWORD *)_RSI + 144i64))(v28 - 23) )
              {
                if ( !*(_QWORD *)(v28 - 21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1936, ASSERT_TYPE_ASSERT, "(pOtherNav->m_pEnt)", (const char *)&queryFormat, "pOtherNav->m_pEnt") )
                  __debugbreak();
                v33 = *(_QWORD *)(*(_QWORD *)(v28 - 21) + 344i64);
                if ( v33 && *(_DWORD *)(v33 + 16) == _RBX->m_pEnt->sentient->eTeam && *(nav_space_s **)(v28 - 19) == _RBX->m_pSpace )
                {
                  if ( *((_DWORD *)v28 + 273) >= *((_DWORD *)v28 + 267) )
                  {
                    *(float *)&v70 = v28[267];
                    *(float *)&v68 = v28[273];
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1944, ASSERT_TYPE_ASSERT, "(unsigned)( pOtherNav->m_CurPathPoint ) < (unsigned)( pOtherNav->m_Path.m_NumPoints )", "pOtherNav->m_CurPathPoint doesn't index pOtherNav->m_Path.m_NumPoints\n\t%i not in [0, %i)", v68, v70) )
                      __debugbreak();
                  }
                  v34 = *((int *)v28 + 273);
                  _RCX = 6 * v34;
                  __asm
                  {
                    vmovss  xmm5, dword ptr [rsi+rcx*8+0CCh]
                    vsubss  xmm0, xmm5, dword ptr [rsp+0D8h+prevLocalCorner+4]
                    vmovss  xmm4, dword ptr [rsi+rcx*8+0C8h]
                    vsubss  xmm2, xmm4, dword ptr [rsp+0D8h+prevLocalCorner]
                    vmovss  xmm6, dword ptr [rsi+rcx*8+0D0h]
                    vsubss  xmm3, xmm6, dword ptr [rsp+0D8h+prevLocalCorner+8]
                    vmulss  xmm1, xmm0, xmm0
                    vmulss  xmm0, xmm2, xmm2
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm3, xmm3
                    vaddss  xmm2, xmm2, xmm1
                    vcomiss xmm2, xmm10
                  }
                  if ( __CFADD__(3 * v34, 3 * v34) || 6 * v34 == 0 )
                  {
                    __asm
                    {
                      vsubss  xmm0, xmm5, dword ptr [rdi-4]
                      vsubss  xmm2, xmm4, dword ptr [rdi-8]
                      vsubss  xmm3, xmm6, dword ptr [rdi]
                      vmulss  xmm1, xmm0, xmm0
                      vmulss  xmm0, xmm2, xmm2
                      vaddss  xmm2, xmm1, xmm0
                      vmulss  xmm1, xmm3, xmm3
                      vaddss  xmm2, xmm2, xmm1
                      vsqrtss xmm0, xmm2, xmm2
                      vsubss  xmm3, xmm0, xmm8
                      vcomiss xmm3, xmm9
                    }
                    if ( __CFADD__(3 * v34, 3 * v34) || 6 * v34 == 0 )
                    {
                      __asm
                      {
                        vmulss  xmm0, xmm3, xmm3
                        vcomiss xmm0, xmm7
                      }
                      if ( (__CFADD__(3 * v34, 3 * v34) || 6 * v34 == 0) && AINavigator2D::AdjustCornerForTeamWalking(_RBX, _RBX->m_CurPathPoint, &_RBX->m_LocalCurSnappedPos, &_RBX->m_hCurArea) )
                        break;
                    }
                  }
                }
              }
              ++v27;
              v28 += 368;
              if ( v27 >= v26 )
                goto LABEL_36;
            }
            v58 = _RBX->m_CurPathPoint;
            if ( (int)v58 + 2 < _RBX->m_Path.m_NumPoints )
            {
              _RAX = 2 * (3 * v58 + 3);
              if ( (*((_DWORD *)&_RBX->m_CurSnappedPos + 12 * v58 + 53) & 0x407) == 0 )
              {
                __asm { vmovss  xmm0, cs:__real@41c00000 }
                v61 = (_DWORD)v58 == -1;
                v62 = v58 + 1;
                __asm { vcomiss xmm0, dword ptr [rbx+rax*8+0DCh] }
                if ( !v61 )
                  AINavigator2D::AdjustCornerForTeamWalking(_RBX, v62, &prevLocalCorner, &_RBX->m_Path.m_Points[_RBX->m_CurPathPoint].m_hArea);
              }
            }
LABEL_36:
            __asm
            {
              vmovaps xmm6, [rsp+0D8h+var_38]
              vmovaps xmm7, [rsp+0D8h+var_48]
              vmovaps xmm9, [rsp+0D8h+var_68]
              vmovaps xmm10, [rsp+0D8h+var_78]
            }
          }
          Sys_ProfEndNamedEvent();
        }
        __asm { vmovaps xmm8, [rsp+0D8h+var_58] }
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
  int v4; 
  char v8; 
  unsigned int v9; 
  __int64 v11; 
  __int64 m_NumPoints; 
  int v26; 
  __int64 v31; 
  __int64 result; 

  v4 = 0;
  _RBX = this;
  v8 = 1;
  v9 = 0;
  if ( numPoints <= 0 )
    return 0i64;
  _RDI = &pPoints->m_LocalPos.v[1];
  v11 = 0i64;
  __asm
  {
    vmovaps [rsp+78h+var_48], xmm6
    vmovss  xmm6, cs:__real@3f800000
  }
  do
  {
    m_NumPoints = _RBX->m_NumPoints;
    if ( (int)m_NumPoints >= 20 )
      break;
    if ( v4 )
      goto LABEL_27;
    _RDX = 6 * m_NumPoints;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rdx*8-30h]
      vsubss  xmm2, xmm0, dword ptr [rdi-4]
      vmovss  xmm1, dword ptr [rbx+rdx*8-2Ch]
      vmovss  xmm0, dword ptr [rbx+rdx*8-28h]
      vsubss  xmm3, xmm1, dword ptr [rdi]
      vsubss  xmm4, xmm0, dword ptr [rdi+4]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm6
    }
    if ( !__CFADD__(3 * m_NumPoints, 3 * m_NumPoints) )
    {
LABEL_27:
      if ( v8 )
      {
        _RDX = 6 * m_NumPoints;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rdx*8-30h]
          vucomiss xmm0, dword ptr [rdi-4]
        }
        if ( !(6 * m_NumPoints) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdx*8-2Ch]
            vucomiss xmm0, dword ptr [rdi]
          }
          if ( !(6 * m_NumPoints) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+rdx*8-28h]
              vucomiss xmm0, dword ptr [rdi+4]
            }
            if ( !(6 * m_NumPoints) )
            {
              Nav_PrintPath("Current path points: (local space):", _RBX->m_Points, m_NumPoints);
              Nav_PrintPath("Extended path points:", pPoints, numPoints);
              v31 = _RBX->m_NumPoints;
              _RCX = 6 * v31;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+rcx*8-30h]
                vucomiss xmm0, dword ptr [rdi-4]
              }
              if ( !(6 * v31) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+rcx*8-2Ch]
                  vucomiss xmm0, dword ptr [rdi]
                }
                if ( !(6 * v31) )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+rcx*8-28h]
                    vucomiss xmm0, dword ptr [rdi+4]
                  }
                  if ( !(6 * v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4324, ASSERT_TYPE_ASSERT, "( !Vec3Compare( pPoints[ iPoint ].m_LocalPos, m_Points[ m_NumPoints - 1 ].m_LocalPos ) )", "Duped path point.  See console for details.") )
                    __debugbreak();
                }
              }
              LODWORD(m_NumPoints) = _RBX->m_NumPoints;
            }
          }
        }
      }
      v8 = 0;
      nav_path_t::CopyPathPoint(_RBX, &pPoints[v4], &_RBX->m_Points[(int)m_NumPoints]);
      ++_RBX->m_NumPoints;
      ++v9;
    }
    else if ( _RBX->m_Points[m_NumPoints - 1].m_LinkID == -1 )
    {
      v26 = *((_DWORD *)_RDI + 3);
      if ( v26 == -1 || ((_BYTE)_RDI[2] & 2) == 0 )
      {
        Nav_PrintPath("Current path points: (local space):", _RBX->m_Points, m_NumPoints);
        Nav_PrintPath("Extended path points:", pPoints, numPoints);
      }
      else
      {
        _RBX->m_Points[m_NumPoints - 1].m_LinkID = v26;
        _RBX->m_Points[_RBX->m_NumPoints - 1].m_Flags |= *((_DWORD *)_RDI + 2);
      }
    }
    ++v4;
    ++v11;
    _RDI += 12;
  }
  while ( v4 < numPoints );
  result = v9;
  __asm { vmovaps xmm6, [rsp+78h+var_48] }
  return result;
}

/*
==============
AINavigator2D::ApplySuppressionPlanes
==============
*/
void AINavigator2D::ApplySuppressionPlanes(AINavigator2D *this)
{
  __int64 iPlaneCount; 
  int v9; 
  __int64 v11; 
  unsigned int *m_SuppressionIDs; 
  int v14; 
  float *fDist; 
  __int64 v16; 
  unsigned int v18; 
  int v19; 
  bool v21; 
  bool v22; 
  unsigned int *v30; 
  __int64 v31; 
  unsigned int *v32; 
  int v33; 
  unsigned int blockageFlags; 
  vec3_t dir; 
  vec3_t start; 
  vec3_t result; 
  Bounds bounds; 
  vec3_t angles; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  iPlaneCount = this->m_BlockPlanes.iPlaneCount;
  v9 = 0;
  _RDI = this;
  if ( !(_DWORD)iPlaneCount )
  {
    v11 = 0i64;
    m_SuppressionIDs = _RDI->m_SuppressionIDs;
    while ( *m_SuppressionIDs == -1 )
    {
      ++v11;
      ++m_SuppressionIDs;
      if ( v11 >= 4 )
        goto LABEL_30;
    }
LABEL_20:
    v30 = _RDI->m_SuppressionIDs;
    v31 = 4i64;
    v32 = _RDI->m_SuppressionIDs;
    do
    {
      if ( *v32 != -1 )
      {
        Nav_DestroyObstacleByID(*v32);
        *v32 = -1;
      }
      ++v32;
      --v31;
    }
    while ( v31 );
    if ( _RDI->m_BlockPlanes.iPlaneCount > 0 )
    {
      v33 = AINavigator2D::ReserveSuppression(_RDI);
      blockageFlags = AINavigator2D::GetSuppressionObstacleMask(_RDI, v33);
      if ( _RDI->m_BlockPlanes.iPlaneCount > 0 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
          vmovaps [rsp+118h+var_48], xmm7
        }
        _RBX = &_RDI->m_BlockPlanes;
        __asm
        {
          vmovaps [rsp+118h+var_58], xmm8
          vmovss  xmm8, cs:__real@43800000
          vmovaps [rsp+118h+var_68], xmm9
          vmovss  xmm9, cs:__real@40c00000
          vmovaps [rsp+118h+var_78], xmm10
          vmovss  xmm10, cs:__real@42100000
          vmovaps [rsp+118h+var_88], xmm11
          vmovss  xmm11, cs:__real@41500000
          vxorps  xmm7, xmm7, xmm7
        }
        do
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rbx]
            vmovss  xmm2, dword ptr [rbx+4]
            vmulss  xmm0, xmm3, dword ptr [r14-14h]
            vmulss  xmm1, xmm2, dword ptr [r14-14h]
            vmovss  dword ptr [rsp+118h+start], xmm0
            vmovss  xmm0, dword ptr [rdi+38h]
            vmovss  dword ptr [rsp+118h+start+4], xmm1
            vxorps  xmm1, xmm3, xmm6
            vmovss  dword ptr [rsp+118h+start+8], xmm0
            vmovss  dword ptr [rsp+118h+dir+4], xmm1
            vmovss  dword ptr [rsp+118h+dir], xmm2
            vmovss  dword ptr [rsp+118h+dir+8], xmm7
          }
          PointOnLineClosestToPoint(&_RDI->m_CurSnappedPos, &start, &dir, &result);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+118h+result]
            vmovss  xmm1, dword ptr [rsp+118h+result+4]
            vmovss  dword ptr [rsp+118h+bounds.midPoint], xmm0
            vmovss  xmm0, dword ptr [rsp+118h+result+8]
            vmovss  dword ptr [rsp+118h+bounds.midPoint+8], xmm0
            vmovss  dword ptr [rsp+118h+bounds.midPoint+4], xmm1
            vmovss  dword ptr [rsp+118h+bounds.halfSize], xmm8
            vmovss  dword ptr [rsp+118h+bounds.halfSize+4], xmm9
            vmovss  dword ptr [rsp+118h+bounds.halfSize+8], xmm10
          }
          vectoangles(&dir, &angles);
          __asm { vmovaps xmm3, xmm11; penalty }
          *v30++ = Nav_CreateObstacleByBounds(_RDI->m_pSpace, &bounds, &angles, *(float *)&_XMM3, 1 << _RDI->m_Layer, blockageFlags);
          ++v9;
          _RBX = (PathBlockPlanes *)((char *)_RBX + 8);
        }
        while ( v9 < _RDI->m_BlockPlanes.iPlaneCount );
        __asm
        {
          vmovaps xmm11, [rsp+118h+var_88]
          vmovaps xmm10, [rsp+118h+var_78]
          vmovaps xmm9, [rsp+118h+var_68]
          vmovaps xmm8, [rsp+118h+var_58]
          vmovaps xmm7, [rsp+118h+var_48]
        }
      }
      _RDI->m_SuppressionTimestamp = level.time;
    }
    goto LABEL_30;
  }
  if ( LODWORD(this->m_BlockPlanes.fDist[iPlaneCount + 4]) == -1 )
    goto LABEL_20;
  __asm { vmovss  xmm6, cs:__real@358637be }
  v14 = 0;
  fDist = this->m_BlockPlanes.fDist;
  v16 = 0i64;
  _RBP = &this->m_BlockPlanes;
  do
  {
    v18 = *((_DWORD *)fDist + 5);
    v19 = _RDI->m_BlockPlanes.iPlaneCount;
    if ( v18 == -1 )
      break;
    if ( v14 >= v19 )
      goto LABEL_20;
    _RBX = Nav_GetObstacleByID(v18);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2589, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
      __debugbreak();
    v21 = !_RBX->m_bUsesExtents;
    if ( !_RBX->m_bUsesExtents )
    {
      v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2590, ASSERT_TYPE_ASSERT, "( pObstacle->m_bUsesExtents )", (const char *)&queryFormat, "pObstacle->m_bUsesExtents");
      v21 = !v22;
      if ( v22 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4]
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vmulss  xmm3, xmm0, dword ptr [rbx+20h]
      vmulss  xmm2, xmm1, dword ptr [rbp+0]
      vaddss  xmm0, xmm3, xmm2
      vsubss  xmm3, xmm0, dword ptr [rsi]
      vmulss  xmm1, xmm3, xmm3
      vcomiss xmm1, xmm6
    }
    if ( !v21 )
      goto LABEL_20;
    ++v14;
    ++v16;
    ++fDist;
    _RBP = (PathBlockPlanes *)((char *)_RBP + 8);
  }
  while ( v16 < 4 );
  if ( v14 < v19 )
    goto LABEL_20;
LABEL_30:
  _R11 = &v69;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  __int64 v5; 
  unsigned int *i; 
  const bfx::LinkReservationRCPtr *v8; 
  bool IsValid; 
  __int64 v10; 
  int v11; 
  bfx::LinkHandle phLink; 
  bfx::LinkReservationRCPtr result; 

  __asm { vmovss  xmm1, cs:__real@7f7fffff }
  if ( !((unsigned __int8 (__fastcall *)(AINavigator2D *))this->HasTraversalWithin)(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1082, ASSERT_TYPE_ASSERT, "( HasTraversalWithin( 3.402823466e+38F ) )", (const char *)&queryFormat, "HasTraversalWithin( FLT_MAX )") )
    __debugbreak();
  m_NumPoints = this->m_Path.m_NumPoints;
  if ( (int)m_NumPoints <= 0 )
    return 0;
  m_CurPathPoint = this->m_CurPathPoint;
  v5 = m_CurPathPoint;
  if ( m_CurPathPoint >= m_NumPoints )
    return 0;
  for ( i = &this->m_Path.m_Points[m_CurPathPoint].m_Flags; (*(_BYTE *)i & 2) == 0; i += 12 )
  {
    LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
    if ( ++v5 >= this->m_Path.m_NumPoints )
      return 0;
  }
  bfx::LinkHandle::LinkHandle(&phLink);
  if ( (unsigned int)m_CurPathPoint >= this->m_Path.m_NumPoints )
  {
    v11 = this->m_Path.m_NumPoints;
    LODWORD(v10) = m_CurPathPoint;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  Nav_GetLinkByID(this->m_Path.m_Points[(int)m_CurPathPoint].m_LinkID, &phLink);
  v8 = bfx::ReserveLink(&result, &phLink);
  bfx::LinkReservationRCPtr::operator=(&this->m_LinkReservation, v8);
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
  unsigned int m_TimeOfLastPathSuppressed; 
  char v22; 
  char v23; 
  char v24; 
  float pPathSpec; 
  bfx::PolylinePathRCPtr path; 
  nav_pathfind_input_t pInput; 
  __int64 v28; 
  vec3_t point; 
  bfx::Vector3 result; 
  vec3_t outUp; 
  vec3_t targetPos; 
  char v33[16]; 

  v28 = -2i64;
  _RDI = &this->m_BasePathSpec;
  _RSI = &this->m_PathSpecOfCurPath;
  if ( !this->m_bPathRequested )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rsi], ymm0
      vmovups ymm1, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rsi+20h], ymm1
      vmovups xmm0, xmmword ptr [rdi+40h]
      vmovups xmmword ptr [rsi+40h], xmm0
    }
  }
  if ( this->IsInBadPlace(this) )
    this->m_PathSpecOfCurPath.m_obstacleBlockageFlags = 1;
  AINavigator2D::FixUpStartAreaIfNecessary(this);
  AINavigator2D::FixUpGoalAreaIfNecessary(this);
  m_TimeOfLastPathSuppressed = this->m_TimeOfLastPathSuppressed;
  if ( m_TimeOfLastPathSuppressed && level.time - m_TimeOfLastPathSuppressed < 0x5DC )
    return 1;
  this->GetCurPos(this, (vec3_t *)v33);
  this->GetRequestedGoalPos(this, &targetPos);
  AINavigator::GetUpVector(this, &outUp);
  Nav_GetClosestVerticalPos(&targetPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, _RDI, &point, NULL);
  __asm
  {
    vmovss  xmm0, cs:__real@42900000
    vmovss  dword ptr [rsp+0F0h+pPathSpec], xmm0
    vmovss  xmm3, cs:__real@41400000; radius
  }
  if ( Nav_PointWithinCylinderWithUp(&point, &targetPos, &outUp, *(float *)&_XMM3, pPathSpec) )
  {
    bfx::SpaceHandle::GetPos(&this->m_pSpace->hSpace, &result);
    bfx::LinkHandle::Release(&this->m_hLink);
    this->m_bPathReevalRequested = 0;
    bfx::AreaHandle::AreaHandle(&pInput.m_hStartArea);
    bfx::AreaHandle::AreaHandle(&pInput.m_hGoalArea);
    pInput.m_pPathSpec = NULL;
    *(_WORD *)&pInput.m_bSnapPoints = 257;
    pInput.m_bModifyLinkWeights = 1;
    pInput.m_pStartPos = (const vec3_t *)v33;
    pInput.m_pGoalPos = &point;
    bfx::AreaHandle::operator=(&pInput.m_hStartArea, &this->m_hCurArea);
    *(_WORD *)&pInput.m_bSnapPoints = 256;
    pInput.m_pPathSpec = _RSI;
    AINavigator2D::FindPath(this, &path, &pInput);
    if ( !bfx::PolylinePathRCPtr::IsValid(&path) )
      goto LABEL_13;
    AINavigator2D::GetFinalPathPoint(this, &path, (vec3_t *)&result);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+point]
      vsubss  xmm3, xmm0, [rbp+57h+result.m_x]
      vmovss  xmm1, dword ptr [rbp+57h+point+4]
      vsubss  xmm2, xmm1, [rbp+57h+result.m_y]
      vmovss  xmm0, dword ptr [rbp+57h+point+8]
      vsubss  xmm4, xmm0, [rbp+57h+result.m_z]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@40800000
    }
    if ( v22 | v23 )
    {
      AINavigator2D::SetPath(this, &path, &pInput);
      v24 = 1;
    }
    else
    {
LABEL_13:
      bfx::PolylinePathRCPtr::Release(&path);
      this->ClearPath(this);
      v24 = 0;
    }
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&path);
    bfx::AreaHandle::~AreaHandle(&pInput.m_hGoalArea);
    bfx::AreaHandle::~AreaHandle(&pInput.m_hStartArea);
    return v24;
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
  int m_NumPoints; 
  AINavigator2D *v6; 
  __int64 m_CurPathPoint; 
  unsigned int *p_m_Flags; 
  unsigned int v15; 
  const vec4_t *v16; 
  vec4_t *v17; 
  const dvar_t *v22; 
  bfx::AreaHandle *p_m_hCurArea; 
  int v24; 
  int NumEdges; 
  bfx::Vector3 result; 
  bfx::Vector3 v38; 
  vec3_t outPoint; 
  vec3_t start; 
  vec3_t end; 
  void *retaddr; 

  _R11 = &retaddr;
  m_NumPoints = this->m_Path.m_NumPoints;
  v6 = this;
  if ( m_NumPoints > 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+30h]
      vmovss  xmm1, dword ptr [rcx+34h]
    }
    m_CurPathPoint = this->m_CurPathPoint;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovss  xmm6, cs:__real@40800000
      vmovss  dword ptr [rbp+57h+start], xmm0
      vaddss  xmm0, xmm6, dword ptr [rcx+38h]
      vmovss  dword ptr [rbp+57h+start+8], xmm0
      vmovss  dword ptr [rbp+57h+start+4], xmm1
    }
    if ( (int)m_CurPathPoint < m_NumPoints )
    {
      __asm
      {
        vmovaps xmmword ptr [r11-48h], xmm7
        vmovss  xmm7, cs:__real@40c00000
      }
      p_m_Flags = &this->m_Path.m_Points[m_CurPathPoint].m_Flags;
      do
      {
        nav_path_t::GetPathPoint(&v6->m_Path, m_CurPathPoint, &outPoint);
        __asm { vaddss  xmm1, xmm6, dword ptr [rbp+57h+outPoint+8] }
        v15 = *p_m_Flags;
        __asm { vmovss  dword ptr [rbp+57h+outPoint+8], xmm1 }
        if ( (v15 & 4) != 0 )
        {
          v16 = &colorCyan;
        }
        else if ( (v15 & 0x10) != 0 )
        {
          v16 = &colorOrange;
        }
        else if ( (v15 & 0x20) != 0 )
        {
          v16 = &colorRedFaded;
        }
        else
        {
          v16 = &colorLtBlue;
          if ( (v15 & 0x400) == 0 )
            v16 = &colorMagenta;
        }
        G_DebugLine(&start, &outPoint, v16, 0);
        if ( (_DWORD)m_CurPathPoint == v6->m_Path.m_NumPoints - 1 )
        {
          v17 = &colorRed;
          if ( (*(_BYTE *)p_m_Flags & 1) != 0 )
            v17 = (vec4_t *)v16;
          v16 = v17;
        }
        __asm { vmovaps xmm1, xmm7; radius }
        G_DebugCircle(&outPoint, *(float *)&_XMM1, v16, 0, 1, 1);
        if ( (v15 & 0x140) != 0 )
        {
          __asm { vmovaps xmm1, xmm7; radius }
          G_DebugCircle(&outPoint, *(float *)&_XMM1, &colorYellow, 0, 1, 1);
        }
        __asm { vmovsd  xmm0, qword ptr [rbp+57h+outPoint] }
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        p_m_Flags += 12;
        start.v[2] = outPoint.v[2];
        __asm { vmovsd  qword ptr [rbp+57h+start], xmm0 }
      }
      while ( (int)m_CurPathPoint < v6->m_Path.m_NumPoints );
      __asm { vmovaps xmm7, [rsp+0D0h+var_48+8] }
    }
    v22 = DCONST_DVARBOOL_ai_showBfxPath;
    if ( !DCONST_DVARBOOL_ai_showBfxPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showBfxPath") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
    {
      p_m_hCurArea = &v6->m_hCurArea;
      if ( bfx::AreaHandle::IsValid(p_m_hCurArea) )
      {
        v24 = 0;
        NumEdges = bfx::AreaHandle::GetNumEdges(p_m_hCurArea);
        if ( NumEdges > 0 )
        {
          do
          {
            _RAX = bfx::AreaHandle::GetEdgeStartPos(p_m_hCurArea, &result, v24);
            __asm
            {
              vmovss  xmm2, dword ptr [rax+8]
              vmovss  xmm1, dword ptr [rax+4]
              vmovss  xmm0, dword ptr [rax]
              vmovss  dword ptr [rbp+57h+outPoint], xmm0
              vmovss  dword ptr [rbp+57h+outPoint+4], xmm1
              vmovss  dword ptr [rbp+57h+outPoint+8], xmm2
            }
            _RAX = bfx::AreaHandle::GetEdgeEndPos(p_m_hCurArea, &v38, v24);
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vmovss  xmm2, dword ptr [rax+8]
              vmovss  xmm1, dword ptr [rax+4]
              vmovss  dword ptr [rbp+57h+end], xmm0
              vaddss  xmm0, xmm6, dword ptr [rbp+57h+outPoint+8]
              vaddss  xmm2, xmm6, xmm2
              vmovss  dword ptr [rbp+57h+outPoint+8], xmm0
              vmovss  dword ptr [rbp+57h+end+4], xmm1
              vmovss  dword ptr [rbp+57h+end+8], xmm2
            }
            G_DebugLine(&outPoint, &end, &colorDkCyan, 0);
            ++v24;
          }
          while ( v24 < NumEdges );
        }
      }
    }
    __asm { vmovaps xmm6, [rsp+0D0h+var_38+8] }
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
  char v21; 
  __int64 m_NumPoints; 
  int v23; 
  unsigned int *p_m_Flags; 
  int v25; 
  __int64 v26; 
  bool v27; 
  int v31; 
  __int64 v32; 
  bool v33; 
  bool pbOutHasDoors; 
  bfx::PolylinePathRCPtr result; 
  nav_pathfind_input_t pInput; 
  __int64 v41; 
  vec3_t outPoint; 
  nav_path_t ptr; 

  v41 = -2i64;
  _RSI = newGoal;
  bfx::AreaHandle::AreaHandle(&pInput.m_hStartArea);
  bfx::AreaHandle::AreaHandle(&pInput.m_hGoalArea);
  v8 = 0i64;
  pInput.m_pPathSpec = NULL;
  *(_WORD *)&pInput.m_bSnapPoints = 257;
  pInput.m_bModifyLinkWeights = 1;
  pInput.m_pStartPos = startPos;
  pInput.m_pGoalPos = _RSI;
  bfx::AreaHandle::operator=(&pInput.m_hStartArea, hStartArea);
  pInput.m_pPathSpec = &this->m_PathSpecOfCurPath;
  pInput.m_bSnapPoints = 0;
  AINavigator2D::FindPath(this, &result, &pInput);
  IsValid = bfx::PolylinePathRCPtr::IsValid(&result);
  if ( IsValid )
  {
    AINavigator2D::GetFinalPathPoint(this, &result, &outPoint);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm3, xmm0, dword ptr [rbp+3D0h+outPoint]
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+3D0h+outPoint+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+3D0h+outPoint+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@40800000
    }
    if ( v21 | v27 )
    {
      m_NumPoints = this->m_Path.m_NumPoints;
      if ( (int)m_NumPoints <= 0 )
      {
        this->m_Path.m_pSpace = this->m_pSpace;
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GeneratePath");
        AINavigator2D::ExtractCornersFromRawPath(this, &result, &this->m_Path, 20, &this->m_PathSpecOfCurPath, &pbOutHasDoors);
        Sys_ProfEndNamedEvent();
        v31 = this->m_Path.m_NumPoints;
        v32 = v31 - 1;
        v33 = v31 == 1;
        if ( v31 - 1 > 0 )
        {
          _RAX = &this->m_Path.m_Points[1];
          while ( 1 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vucomiss xmm0, dword ptr [rax-30h]
            }
            if ( v33 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rax+4]
                vucomiss xmm0, dword ptr [rax-2Ch]
              }
              if ( v33 )
                break;
            }
            ++v8;
            ++_RAX;
            v33 = v8 == v32;
            if ( v8 >= v32 )
              goto LABEL_22;
          }
          Nav_PrintPath("Path Points:", this->m_Path.m_Points, v31);
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
        v23 = 0;
        p_m_Flags = &ptr.m_Points[0].m_Flags;
        do
        {
          bfx::AreaHandle::Release(&ptr.m_Points[v23].m_hArea);
          p_m_Flags[1] = -1;
          *p_m_Flags = 0;
          p_m_Flags[3] = -1082130432;
          ++v23;
          p_m_Flags += 12;
        }
        while ( v23 < ptr.m_NumPoints );
        ptr.m_NumPoints = 0;
        ptr.m_pSpace = this->m_pSpace;
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GeneratePath");
        AINavigator2D::ExtractCornersFromRawPath(this, &result, &ptr, 20, &this->m_PathSpecOfCurPath, &pbOutHasDoors);
        Sys_ProfEndNamedEvent();
        v25 = ptr.m_NumPoints;
        v26 = ptr.m_NumPoints - 1;
        v27 = ptr.m_NumPoints == 1;
        if ( ptr.m_NumPoints - 1 > 0 )
        {
          _RAX = &ptr.m_Points[1].m_LocalPos.v[1];
          while ( 1 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax-4]
              vucomiss xmm0, dword ptr [rax-34h]
            }
            if ( v27 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vucomiss xmm0, dword ptr [rax-30h]
              }
              if ( v27 )
                break;
            }
            ++v8;
            _RAX += 12;
            v27 = v8 == v26;
            if ( v8 >= v26 )
              goto LABEL_14;
          }
          Nav_PrintPath("Path Points:", ptr.m_Points, ptr.m_NumPoints);
          v25 = ptr.m_NumPoints;
        }
LABEL_14:
        nav_path_t::AppendPathPoints(&this->m_Path, ptr.m_Points, v25);
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
  int v6; 
  nav_path_t *v20; 
  AINavigator2D *v22; 
  __int64 v24; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::AreaHandle *Area; 
  bfx::LinkSegment *LinkSegment; 
  const bfx::AreaHandle *ClosestArea; 
  int v40; 
  int v43; 
  bfx::PolylinePathRCPtr *v48; 
  bfx::SegmentType v49; 
  bfx::SurfaceSegment *v50; 
  char v55; 
  bool IsStraightLineReachable; 
  char v61; 
  const bfx::AreaHandle *v96; 
  unsigned int AreaUsageFlags; 
  int v98; 
  const bfx::AreaHandle *v99; 
  int NumObstacles; 
  int i; 
  int v114; 
  __int64 v115; 
  const bfx::AreaHandle *v119; 
  int v120; 
  bfx::LinkSegment *v121; 
  bool Forward; 
  bool v124; 
  const bfx::AreaHandle *v127; 
  __int64 m_NumPoints; 
  const bfx::AreaHandle *v132; 
  int v145; 
  int v158; 
  int NumSegments; 
  bfx::AreaHandle rhs; 
  bfx::AreaHandle v163; 
  bfx::AreaHandle result; 
  bfx::PathSpec *v165; 
  bfx::LinkHandle phLink; 
  bfx::PolylinePathRCPtr *v167; 
  nav_path_t *v168; 
  bfx::Vector3 v169; 
  bfx::Vector3 v170; 
  __int64 v171; 
  bfx::AreaHandle v172; 
  bfx::AreaHandle v173; 
  bfx::AreaHandle v174; 
  bfx::AreaHandle v175; 
  bfx::AreaHandle v176; 
  bfx::ObstacleDat v177; 
  vec3_t endPos; 
  vec3_t worldPos; 
  bfx::Vector3 pos; 
  bfx::PathSpec pPathSpec; 
  char v183; 
  void *retaddr; 

  _RAX = &retaddr;
  v171 = -2i64;
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
  }
  v20 = pPath2D;
  v168 = pPath2D;
  v167 = (bfx::PolylinePathRCPtr *)rawPath;
  v22 = this;
  _R15 = pathSpec;
  v165 = (bfx::PathSpec *)pathSpec;
  nav_path_t::Reset(pPath2D);
  if ( pbOutHasDoors )
    *pbOutHasDoors = 0;
  if ( !bfx::PolylinePathRCPtr::IsValid((bfx::PolylinePathRCPtr *)rawPath) )
  {
    v24 = 0i64;
    goto LABEL_90;
  }
  __asm
  {
    vmovups ymm2, ymmword ptr [r15]
    vmovups ymmword ptr [rbp+1C0h+pPathSpec.m_obstacleMode], ymm2
    vmovups ymm0, ymmword ptr [r15+20h]
    vmovups ymmword ptr [rbp+1C0h+pPathSpec.m_maxSearchDist], ymm0
    vmovups xmm1, xmmword ptr [r15+40h]
    vmovups xmmword ptr [rbp+1C0h+pPathSpec.m_penaltyTable.m_perFlagPenalties+18h], xmm1
    vmovq   rax, xmm2
  }
  pPathSpec.m_obstacleBlockageFlags = HIDWORD(_RAX) | 0x2000;
  if ( maxCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1227, ASSERT_TYPE_ASSERT, "( maxCorners > 0 )", (const char *)&queryFormat, "maxCorners > 0") )
    __debugbreak();
  NumSegments = bfx::PolylinePathRCPtr::GetNumSegments((bfx::PolylinePathRCPtr *)rawPath);
  if ( NumSegments <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1230, ASSERT_TYPE_ASSERT, "( numSegments > 0 )", (const char *)&queryFormat, "numSegments > 0") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&rhs);
  LOBYTE(v6) = 0;
  v158 = v6;
  SegmentType = bfx::PolylinePathRCPtr::GetSegmentType((bfx::PolylinePathRCPtr *)rawPath, 0);
  if ( SegmentType )
  {
    if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1252, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
      __debugbreak();
    LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment((bfx::PolylinePathRCPtr *)rawPath, 0);
    if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1254, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    _RAX = bfx::LinkSegment::GetStartPos(LinkSegment);
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vmovsd  qword ptr [rbp+1C0h+pos.m_x], xmm0
    }
    pos.m_z = _RAX->m_z;
    __asm { vmovsd  qword ptr [rbp+1C0h+worldPos], xmm0 }
    worldPos.v[2] = pos.m_z;
    ClosestArea = bfx::GetClosestArea(&result, &v22->m_pSpace->hSpace, &pos, v22->m_Layer, pathSpec);
    bfx::AreaHandle::operator=(&rhs, ClosestArea);
  }
  else
  {
    SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment((bfx::PolylinePathRCPtr *)rawPath, 0);
    if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1245, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    _RAX = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
    __asm
    {
      vmovss  xmm2, dword ptr [rax+8]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rax]
      vmovss  dword ptr [rbp+1C0h+worldPos], xmm0
      vmovss  dword ptr [rbp+1C0h+worldPos+4], xmm1
      vmovss  dword ptr [rbp+1C0h+worldPos+8], xmm2
    }
    Area = bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
    bfx::AreaHandle::operator=(&rhs, Area);
  }
  bfx::AreaHandle::~AreaHandle(&result);
  Nav_SpaceConvertWorldToLocal(v22->m_pSpace, &worldPos, &v20->m_LocalStartPoint);
  v40 = 0;
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm10, xmm10, xmm10
  }
  bfx::AreaHandle::AreaHandle(&v163, &rhs);
  v43 = 0;
  if ( NumSegments > 0 )
  {
    __asm
    {
      vmovss  xmm15, cs:__real@80000000
      vmovss  xmm11, cs:__real@3f800000
      vmovss  xmm13, [rsp+2C0h+var_290]
      vmovss  xmm14, [rsp+2C0h+var_290]
    }
    while ( 1 )
    {
      v48 = v167;
      v49 = bfx::PolylinePathRCPtr::GetSegmentType(v167, v43);
      if ( v49 == SURFACE_SEGMENT )
        break;
      if ( v49 != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1405, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
        __debugbreak();
      v121 = bfx::PolylinePathRCPtr::GetLinkSegment(v48, v43);
      if ( !v121 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1407, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
        __debugbreak();
      _RBX = &v20->m_Points[v20->m_NumPoints];
      Forward = bfx::LinkSegment::GetForward(v121);
      v124 = !Forward;
      if ( Forward )
        _RAX = bfx::LinkSegment::GetStartPos(v121);
      else
        _RAX = bfx::LinkSegment::GetEndPos(v121);
      __asm
      {
        vmovsd  xmm0, qword ptr [rax]
        vmovsd  qword ptr [rbp+1C0h+var_218.m_x], xmm0
      }
      v169.m_z = _RAX->m_z;
      __asm { vmovsd  qword ptr [rbp+1C0h+pos.m_x], xmm0 }
      pos.m_z = v169.m_z;
      Nav_SpaceConvertWorldToLocal(v22->m_pSpace, (const vec3_t *)&pos, &_RBX->m_LocalPos);
      bfx::LinkSegment::GetLink(v121, &phLink);
      v127 = bfx::GetClosestArea(&v175, &v22->m_pSpace->hSpace, &v169, v22->m_Layer, v165);
      bfx::AreaHandle::operator=(&_RBX->m_hArea, v127);
      bfx::AreaHandle::~AreaHandle(&v175);
      _RBX->m_LinkID = Nav_GetLinkID(&phLink);
      __asm { vmovss  dword ptr [rbx+14h], xmm10 }
      _RBX->m_CornerAngle = -1.0;
      __asm { vmovss  dword ptr [rbx+1Ch], xmm10 }
      _RBX->m_Flags = 2;
      if ( v124 )
        _RBX->m_Flags = 10;
      m_NumPoints = v20->m_NumPoints;
      v120 = m_NumPoints + 1;
      v20->m_NumPoints = m_NumPoints + 1;
      if ( (int)m_NumPoints + 1 >= maxCorners )
        goto LABEL_87;
      _RBX = &v20->m_Points[m_NumPoints + 1];
      if ( v124 )
        _RAX = bfx::LinkSegment::GetStartPos(v121);
      else
        _RAX = bfx::LinkSegment::GetEndPos(v121);
      __asm
      {
        vmovsd  xmm0, qword ptr [rax]
        vmovsd  qword ptr [rbp+1C0h+var_208.m_x], xmm0
      }
      v170.m_z = _RAX->m_z;
      __asm { vmovsd  qword ptr [rbp+1C0h+endPos], xmm0 }
      endPos.v[2] = v170.m_z;
      Nav_SpaceConvertWorldToLocal(v22->m_pSpace, &endPos, &_RBX->m_LocalPos);
      v132 = bfx::GetClosestArea(&v176, &v22->m_pSpace->hSpace, &v170, v22->m_Layer, v165);
      bfx::AreaHandle::operator=(&_RBX->m_hArea, v132);
      bfx::AreaHandle::~AreaHandle(&v176);
      _RBX->m_LinkID = Nav_GetLinkID(&phLink);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1C0h+endPos]
        vsubss  xmm3, xmm0, [rbp+1C0h+pos.m_x]
        vmovss  xmm1, dword ptr [rbp+1C0h+endPos+4]
        vsubss  xmm2, xmm1, [rbp+1C0h+pos.m_y]
        vmovss  xmm0, dword ptr [rbp+1C0h+endPos+8]
        vsubss  xmm4, xmm0, [rbp+1C0h+pos.m_z]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vmovss  dword ptr [rbx+14h], xmm1
      }
      _RBX->m_CornerAngle = -1.0;
      __asm { vmovss  dword ptr [rbx+1Ch], xmm1 }
      _RBX->m_Flags = 4;
      v145 = 4;
      if ( v124 )
      {
        _RBX->m_Flags = 12;
        v145 = 12;
      }
      if ( v43 == NumSegments - 1 )
        _RBX->m_Flags = v145 | 1;
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+1C0h+endPos]
        vmovsd  qword ptr [rbp+1C0h+worldPos], xmm0
      }
      worldPos.v[2] = endPos.v[2];
      bfx::AreaHandle::operator=(&rhs, &_RBX->m_hArea);
      ++v20->m_NumPoints;
      v40 = 0;
      __asm { vmovaps xmm10, xmm12 }
      bfx::AreaHandle::operator=(&v163, &rhs);
      v120 = v20->m_NumPoints;
      if ( v120 >= maxCorners )
      {
LABEL_87:
        bfx::LinkHandle::~LinkHandle(&phLink);
        goto LABEL_89;
      }
      bfx::LinkHandle::~LinkHandle(&phLink);
LABEL_64:
      if ( ++v43 >= NumSegments )
        goto LABEL_88;
      LOBYTE(v6) = v158;
    }
    v50 = bfx::PolylinePathRCPtr::GetSurfaceSegment(v48, v43);
    if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1275, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    _RAX = bfx::SurfaceSegment::GetStartPos(v50);
    __asm
    {
      vmovss  xmm2, dword ptr [rax+8]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rax]
      vmovss  dword ptr [rbp+1C0h+var_160], xmm0
      vmovss  dword ptr [rbp+1C0h+var_160+4], xmm1
      vmovss  dword ptr [rbp+1C0h+var_160+8], xmm2
    }
    _RAX = bfx::SurfaceSegment::GetEndPos(v50);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  xmm2, dword ptr [rax]
      vmovss  dword ptr [rbp+1C0h+endPos], xmm2
      vmovss  dword ptr [rbp+1C0h+endPos+4], xmm1
      vmovss  dword ptr [rbp+1C0h+endPos+8], xmm0
    }
    IsStraightLineReachable = 1;
    __asm { vucomiss xmm10, xmm12 }
    if ( v61 )
    {
      __asm
      {
        vsubss  xmm4, xmm2, dword ptr [rbp+1C0h+worldPos]
        vsubss  xmm5, xmm1, dword ptr [rbp+1C0h+worldPos+4]
        vsubss  xmm6, xmm0, dword ptr [rbp+1C0h+worldPos+8]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm1, xmm0
        vsqrtss xmm2, xmm3, xmm3
        vcmpless xmm0, xmm2, xmm15
        vblendvps xmm1, xmm2, xmm11, xmm0
        vmovss  [rsp+2C0h+var_290], xmm1
        vdivss  xmm0, xmm11, xmm1
        vmulss  xmm14, xmm0, xmm4
        vmulss  xmm13, xmm0, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm1, xmm0, xmm3
        vcomiss xmm1, xmm11
      }
      LOBYTE(v158) = !v55;
    }
    else
    {
      if ( !bfx::AreaHandle::IsValid(&rhs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1289, ASSERT_TYPE_ASSERT, "( hPrevArea.IsValid() )", (const char *)&queryFormat, "hPrevArea.IsValid()") )
        __debugbreak();
      __asm
      {
        vmovss  xmm8, dword ptr [rbp+1C0h+var_160]
        vmovss  xmm0, dword ptr [rbp+1C0h+endPos]
        vsubss  xmm6, xmm0, xmm8
        vmovss  xmm9, dword ptr [rbp+1C0h+var_160+4]
        vmovss  xmm1, dword ptr [rbp+1C0h+endPos+4]
        vsubss  xmm3, xmm1, xmm9
        vmovss  xmm0, dword ptr [rbp+1C0h+endPos+8]
        vsubss  xmm5, xmm0, dword ptr [rbp+1C0h+var_160+8]
        vmulss  xmm2, xmm3, xmm3
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm4, xmm2, xmm1
        vsqrtss xmm7, xmm4, xmm4
        vcmpless xmm0, xmm7, xmm15
        vblendvps xmm1, xmm7, xmm11, xmm0
        vdivss  xmm0, xmm11, xmm1
        vmulss  xmm2, xmm0, xmm6
        vmulss  xmm3, xmm0, xmm3
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm6, xmm0, xmm4
        vmulss  xmm2, xmm14, xmm2
        vmulss  xmm1, xmm13, xmm3
        vaddss  xmm0, xmm2, xmm1
      }
      if ( (_BYTE)v6 )
        __asm { vcomiss xmm0, cs:__real@3f7d70a4 }
      if ( v43 )
      {
        __asm { vucomiss xmm7, xmm12 }
        v96 = bfx::SurfaceSegment::GetArea(v50, &v172);
        IsStraightLineReachable = Nav_IsStraightLineReachable(&worldPos, &rhs, &endPos, v96, &pPathSpec);
        bfx::AreaHandle::~AreaHandle(&v172);
        __asm
        {
          vmovss  xmm9, dword ptr [rbp+1C0h+var_160+4]
          vmovss  xmm8, dword ptr [rbp+1C0h+var_160]
        }
      }
      if ( !(_BYTE)v6 )
      {
        __asm { vcomiss xmm6, xmm11 }
        LOBYTE(v158) = 1;
      }
      if ( !IsStraightLineReachable )
      {
        __asm
        {
          vucomiss xmm8, dword ptr [rbp+1C0h+worldPos]
          vucomiss xmm9, dword ptr [rbp+1C0h+worldPos+4]
        }
      }
    }
    AreaUsageFlags = bfx::SurfaceSegment::GetAreaUsageFlags(v50);
    v98 = v40 | 0x10;
    if ( (AreaUsageFlags & 0x80000000) == 0 )
      v98 = v40;
    v40 = v98;
    v99 = bfx::SurfaceSegment::GetArea(v50, &v173);
    bfx::AreaHandle::operator=(&v163, v99);
    bfx::AreaHandle::~AreaHandle(&v173);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1C0h+endPos]
      vsubss  xmm3, xmm0, dword ptr [rbp+1C0h+var_160]
      vmovss  xmm1, dword ptr [rbp+1C0h+endPos+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+1C0h+var_160+4]
      vmovss  xmm0, dword ptr [rbp+1C0h+endPos+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+1C0h+var_160+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vaddss  xmm10, xmm10, xmm1
    }
    NumObstacles = bfx::AreaHandle::GetNumObstacles(&v163);
    if ( NumObstacles > 0 )
    {
      for ( i = 0; i < NumObstacles; ++i )
      {
        bfx::AreaHandle::GetObstacle(&v163, (bfx::ObstacleHandle *)&result, i);
        bfx::ObstacleHandle::GetObstacleDat((bfx::ObstacleHandle *)&result, &v177);
        if ( v177.m_userData )
        {
          if ( (v177.m_userData & 0x8000000) == 0 || (v114 = 2048, (this->m_BasePathSpec.m_obstacleBlockageFlags & v177.m_obstacleBlockageFlags) == 0) )
            v114 = 16;
          v40 |= v114;
          if ( (v177.m_userData & 0x10000000) != 0 && pbOutHasDoors )
            *pbOutHasDoors = 1;
        }
        bfx::ObstacleHandle::~ObstacleHandle((bfx::ObstacleHandle *)&result);
      }
      v20 = v168;
    }
    if ( v43 != NumSegments - 1 )
    {
LABEL_63:
      v22 = this;
      goto LABEL_64;
    }
    v115 = v20->m_NumPoints;
    if ( (int)v115 > 0 )
    {
      __asm { vucomiss xmm10, xmm12 }
      if ( !(_DWORD)v115 )
      {
LABEL_60:
        v20->m_Points[v115 - 1].m_Flags |= 1u;
        goto LABEL_62;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1C0h+var_160]
        vucomiss xmm0, dword ptr [rbp+1C0h+endPos]
      }
      if ( !(_DWORD)v115 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1C0h+var_160+4]
          vucomiss xmm0, dword ptr [rbp+1C0h+endPos+4]
        }
        goto LABEL_60;
      }
    }
    _RBX = &v20->m_Points[v115];
    Nav_SpaceConvertWorldToLocal(this->m_pSpace, &endPos, &_RBX->m_LocalPos);
    v119 = bfx::SurfaceSegment::GetArea(v50, &v174);
    bfx::AreaHandle::operator=(&_RBX->m_hArea, v119);
    bfx::AreaHandle::~AreaHandle(&v174);
    _RBX->m_LinkID = -1;
    __asm { vmovss  dword ptr [rbx+14h], xmm10 }
    _RBX->m_Flags = v40 | 1;
    _RBX->m_CornerAngle = -1.0;
    __asm { vmovss  dword ptr [rbx+1Ch], xmm10 }
    ++v20->m_NumPoints;
LABEL_62:
    v120 = v20->m_NumPoints;
    if ( v120 >= maxCorners )
      goto LABEL_89;
    goto LABEL_63;
  }
LABEL_88:
  v120 = v20->m_NumPoints;
LABEL_89:
  bfx::AreaHandle::~AreaHandle(&v163);
  bfx::AreaHandle::~AreaHandle(&rhs);
  v24 = (unsigned int)v120;
LABEL_90:
  _R11 = &v183;
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
  return v24;
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
  char v15; 
  int v16; 
  bfx::SegmentType SegmentType; 
  bfx::SurfaceSegment *SurfaceSegment; 
  bfx::LinkSegment *LinkSegment; 
  bfx::PolylinePathRCPtr result; 
  nav_pathfind_input_t pInput; 
  __int64 v38; 
  vec3_t pos; 
  vec3_t v40; 
  _BYTE v41[64]; 

  v38 = -2i64;
  _RDI = outPoint;
  _R14 = this;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "FindLastPointOnPathWithinRegion");
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, pRegion);
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3689, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( IsPointInRegion_0(PHYSICS_WORLD_ID_FIRST, goalPos, Instance, CollisionQueryResult) )
  {
    _RDI->v[0] = goalPos->v[0];
    _RDI->v[1] = goalPos->v[1];
    _RDI->v[2] = goalPos->v[2];
    Physics_FreeCollisionQueryResult(CollisionQueryResult);
    Sys_ProfEndNamedEvent();
    return 1;
  }
  else
  {
    _R12 = _R14->m_CurSnappedPos.v;
    if ( IsPointInRegion_0(PHYSICS_WORLD_ID_FIRST, &_R14->m_CurSnappedPos, Instance, CollisionQueryResult) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r14+4A4h]
        vmovups [rbp+50h+var_A0], ymm0
        vmovups ymm1, ymmword ptr [r14+4C4h]
        vmovups [rbp+50h+var_80], ymm1
        vmovups xmm0, xmmword ptr [r14+4E4h]
        vmovups [rbp+50h+var_60], xmm0
      }
      bfx::AreaHandle::AreaHandle(&pInput.m_hStartArea);
      bfx::AreaHandle::AreaHandle(&pInput.m_hGoalArea);
      pInput.m_pPathSpec = NULL;
      *(_WORD *)&pInput.m_bSnapPoints = 257;
      pInput.m_bModifyLinkWeights = 1;
      pInput.m_pStartPos = &_R14->m_CurSnappedPos;
      bfx::AreaHandle::operator=(&pInput.m_hStartArea, &_R14->m_hCurArea);
      pInput.m_pGoalPos = goalPos;
      pInput.m_pPathSpec = (bfx::PathSpec *)v41;
      *(_WORD *)&pInput.m_bSnapPoints = 0;
      pInput.m_bModifyLinkWeights = 0;
      AINavigator2D::FindPath(_R14, &result, &pInput);
      if ( bfx::PolylinePathRCPtr::IsValid(&result) )
      {
        v16 = bfx::PolylinePathRCPtr::GetNumSegments(&result) - 1;
        if ( v16 >= 0 )
        {
          while ( v16 )
          {
            SegmentType = bfx::PolylinePathRCPtr::GetSegmentType(&result, v16);
            if ( SegmentType )
            {
              if ( SegmentType != LINK_SEGMENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3751, ASSERT_TYPE_ASSERT, "( segType == bfx::LINK_SEGMENT )", (const char *)&queryFormat, "segType == bfx::LINK_SEGMENT") )
                __debugbreak();
              LinkSegment = bfx::PolylinePathRCPtr::GetLinkSegment(&result, v16);
              if ( !LinkSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3753, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
                __debugbreak();
              _RAX = bfx::LinkSegment::GetStartPos(LinkSegment);
              __asm
              {
                vmovss  xmm2, dword ptr [rax+8]
                vmovss  xmm1, dword ptr [rax+4]
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rbp+50h+var_B8], xmm0
                vmovss  dword ptr [rbp+50h+var_B8+4], xmm1
                vmovss  dword ptr [rbp+50h+var_B8+8], xmm2
              }
              if ( IsPointInRegion_0(PHYSICS_WORLD_ID_FIRST, &v40, Instance, CollisionQueryResult) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+50h+var_B8]
                  vmovss  dword ptr [rdi], xmm0
                  vmovss  xmm1, dword ptr [rbp+50h+var_B8+4]
                  vmovss  dword ptr [rdi+4], xmm1
                  vmovss  xmm0, dword ptr [rbp+50h+var_B8+8]
                  vmovss  dword ptr [rdi+8], xmm0
                }
                goto LABEL_29;
              }
            }
            else
            {
              SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(&result, v16);
              if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 3739, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
                __debugbreak();
              _RAX = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
              __asm
              {
                vmovss  xmm2, dword ptr [rax+8]
                vmovss  xmm1, dword ptr [rax+4]
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rbp+50h+pos], xmm0
                vmovss  dword ptr [rbp+50h+pos+4], xmm1
                vmovss  dword ptr [rbp+50h+pos+8], xmm2
              }
              if ( IsPointInRegion_0(PHYSICS_WORLD_ID_FIRST, &pos, Instance, CollisionQueryResult) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+50h+pos]
                  vmovss  dword ptr [rdi], xmm0
                  vmovss  xmm1, dword ptr [rbp+50h+pos+4]
                  vmovss  dword ptr [rdi+4], xmm1
                  vmovss  xmm0, dword ptr [rbp+50h+pos+8]
                  vmovss  dword ptr [rdi+8], xmm0
                }
                goto LABEL_29;
              }
            }
            if ( --v16 < 0 )
              goto LABEL_29;
          }
          _RDI->v[0] = *_R12;
          __asm
          {
            vmovss  xmm0, dword ptr [r12+4]
            vmovss  dword ptr [rdi+4], xmm0
            vmovss  xmm1, dword ptr [r12+8]
            vmovss  dword ptr [rdi+8], xmm1
          }
        }
LABEL_29:
        Physics_FreeCollisionQueryResult(CollisionQueryResult);
        Sys_ProfEndNamedEvent();
        v15 = 1;
      }
      else
      {
        Physics_FreeCollisionQueryResult(CollisionQueryResult);
        Sys_ProfEndNamedEvent();
        v15 = 0;
      }
      bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
      bfx::AreaHandle::~AreaHandle(&pInput.m_hGoalArea);
      bfx::AreaHandle::~AreaHandle(&pInput.m_hStartArea);
      return v15;
    }
    else
    {
      Physics_FreeCollisionQueryResult(CollisionQueryResult);
      Sys_ProfEndNamedEvent();
      return 0;
    }
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
  bfx::AreaHandle *v11; 
  bfx::AreaHandle *v12; 
  bfx::AreaHandle *v13; 
  int FirstNCornersOnPath; 
  __int64 v15; 
  const dvar_t *v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  const tacpoint_t *ClosestPoint; 
  const dvar_t *v26; 
  vec3_t *p_start; 
  bool HasVis; 
  const vec4_t *v29; 
  const tacpoint_t *result; 
  bfx::AreaHandle pOutArea; 
  bfx::AreaHandle rhs; 
  __int64 v38; 
  bfx::AreaHandle *v39; 
  bfx::AreaHandle v40; 
  bfx::AreaHandle v41; 
  vec3_t pos; 
  vec3_t start; 
  vec3_t outUp; 
  vec3_t end[5]; 

  v38 = -2i64;
  __asm { vmovaps [rsp+170h+var_50], xmm6 }
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "FindLastTacPointOnPathWithVis");
  bfx::AreaHandle::AreaHandle(&rhs);
  bfx::AreaHandle::AreaHandle(&pOutArea);
  Nav_GetSpaceUp(this->m_pSpace, &outUp);
  Nav_GetClosestVerticalPosWithHint(startPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &start, &this->m_hCurArea, &pOutArea);
  m_Layer = this->m_Layer;
  v39 = &v40;
  bfx::AreaHandle::AreaHandle(&v40, &rhs);
  v12 = v11;
  bfx::AreaHandle::AreaHandle(&v41, &pOutArea);
  FirstNCornersOnPath = Nav_FindFirstNCornersOnPath(this->m_pSpace, &start, v13, goalPos, v12, m_Layer, &this->m_BasePathSpec, 5, end);
  v15 = FirstNCornersOnPath;
  if ( FirstNCornersOnPath > 0 )
  {
    v16 = DVARBOOL_ai_debugLikelyEnemyAngles;
    if ( !DVARBOOL_ai_debugLikelyEnemyAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLikelyEnemyAngles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      G_DebugLineWithDuration(&start, &pTacPoint->m_Pos, &colorLtOrange, 0, 40);
      TacGraph_DebugDraw_Point(pTacPoint, &colorYellowHeat, 40);
      G_DebugLineWithDuration(&start, goalPos, &colorLtOrange, 0, 40);
    }
    v17 = 0;
    v18 = v15;
    if ( (int)v15 > 0 )
    {
      v19 = 0i64;
      _RSI = &end[0].v[2];
      __asm { vmovss  xmm6, cs:__real@41f00000 }
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi-8]
          vmovss  dword ptr [rbp+70h+pos], xmm0
          vmovss  xmm1, dword ptr [rsi-4]
          vmovss  dword ptr [rbp+70h+pos+4], xmm1
          vaddss  xmm2, xmm6, dword ptr [rsi]
          vmovss  dword ptr [rbp+70h+pos+8], xmm2
        }
        ClosestPoint = TacGraph_FindClosestPoint(&pos);
        v26 = DVARBOOL_ai_debugLikelyEnemyAngles;
        if ( !DVARBOOL_ai_debugLikelyEnemyAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLikelyEnemyAngles") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.enabled )
        {
          if ( v17 )
            p_start = &end[v17 - 1];
          else
            p_start = &start;
          G_DebugLineWithDuration(p_start, &end[v17], &colorLtPurple, 0, 40);
          if ( !ClosestPoint )
            goto LABEL_22;
          HasVis = TacVisGraph_HasVis(pTacPoint, ClosestPoint);
          v29 = &colorLtRed;
          if ( HasVis )
            v29 = &colorLtGreen;
          TacGraph_DebugDraw_Point(ClosestPoint, v29, 40);
          G_DebugLineWithDuration(&end[v17], &ClosestPoint->m_Pos, &colorLtYellow, 0, 40);
        }
        if ( ClosestPoint && TacVisGraph_HasVis(pTacPoint, ClosestPoint) )
        {
          _RCX = 3i64 * v17;
          _RDX = outCornerPos;
          outCornerPos->v[0] = end[v17].v[0];
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+rcx*4+70h+end+4]
            vmovss  dword ptr [rdx+4], xmm0
            vmovss  xmm1, dword ptr [rbp+rcx*4+70h+end+8]
            vmovss  dword ptr [rdx+8], xmm1
          }
          Sys_ProfEndNamedEvent();
          goto LABEL_24;
        }
LABEL_22:
        ++v17;
        ++v19;
        _RSI += 3;
      }
      while ( v19 < v18 );
    }
  }
  Sys_ProfEndNamedEvent();
  ClosestPoint = NULL;
LABEL_24:
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  bfx::AreaHandle::~AreaHandle(&rhs);
  result = ClosestPoint;
  __asm { vmovaps xmm6, [rsp+170h+var_50] }
  return result;
}

/*
==============
AINavigator2D::FindPath
==============
*/
bfx::PolylinePathRCPtr *AINavigator2D::FindPath(AINavigator2D *this, bfx::PolylinePathRCPtr *result, nav_pathfind_input_t *pInput)
{
  char *Value; 
  int *v9; 
  _QWORD *v10; 
  char *v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  ThreadContext CurrentThreadContext; 
  bfx::PathSpec *m_pPathSpec; 
  bool v24; 
  char *v32; 
  char *v33; 
  const bfx::AreaHandle *ClosestArea; 
  int v37; 
  const bfx::PolylinePathRCPtr *v38; 
  int v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  char v55; 
  bfx::PolylinePathRCPtr *v56; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *hHintArea; 
  bfx::AreaHandle pOutArea; 
  bfx::Vector3 pos; 
  bfx::Vector3 goalPos; 
  __int64 v63; 
  bfx::PolylinePathRCPtr *v64; 
  bfx::AreaHandle resulta; 
  vec3_t outUp; 
  vec3_t v67; 
  void *retaddr; 

  _RAX = &retaddr;
  v63 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v64 = result;
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1111, ASSERT_TYPE_ASSERT, "( pInput )", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  if ( !pInput->m_pStartPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1112, ASSERT_TYPE_ASSERT, "( pInput->m_pStartPos )", (const char *)&queryFormat, "pInput->m_pStartPos") )
    __debugbreak();
  if ( !pInput->m_pGoalPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1113, ASSERT_TYPE_ASSERT, "( pInput->m_pGoalPos )", (const char *)&queryFormat, "pInput->m_pGoalPos") )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v9 = (int *)(Value + 12656);
  if ( (unsigned int)(*((_DWORD *)Value + 3164) + 1) >= 3 )
  {
    LODWORD(outClosestPos) = *((_DWORD *)Value + 3164) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outClosestPos, 3) )
      __debugbreak();
  }
  if ( (unsigned int)++*v9 >= 3 )
  {
    LODWORD(hHintArea) = 3;
    LODWORD(outClosestPos) = *v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outClosestPos, hHintArea) )
      __debugbreak();
  }
  v10 = Value + 2088;
  v11 = Value + 40;
  if ( *v10 < (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v10 += 8i64;
  if ( *v10 >= (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v10 = v9;
  if ( *v10 <= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v12 = *v9;
  v13 = __rdtsc();
  v9[v12 + 2] = v13;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 264, NULL, 0);
  bfx::AreaHandle::AreaHandle(&pOutArea);
  AINavigator::GetUpVector(this, &outUp);
  _RAX = pInput->m_pStartPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rbp+57h+pos.m_x], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  [rbp+57h+pos.m_y], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rbp+57h+pos.m_z], xmm0
  }
  _RCX = pInput->m_pGoalPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rbp+57h+goalPos.m_x], xmm0
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  [rbp+57h+goalPos.m_y], xmm1
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rbp+57h+goalPos.m_z], xmm0
  }
  m_pPathSpec = pInput->m_pPathSpec;
  v24 = m_pPathSpec == NULL;
  if ( !m_pPathSpec )
    m_pPathSpec = &this->m_BasePathSpec;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm4, xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr [rax+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm6, xmm3, xmm0
    vcomiss xmm6, cs:__real@4abebc20
  }
  if ( !v24 )
  {
    v32 = vtos(_RCX);
    v33 = vtos(pInput->m_pStartPos);
    __asm
    {
      vsqrtss xmm0, xmm6, xmm6
      vcvttss2si r9d, xmm0
    }
    Com_PrintWarning(18, "AI %d requested very long path (%i units) from %s to %s.\n", (unsigned int)this->m_pEnt->s.number, _R9, v33, v32);
  }
  if ( pInput->m_bSnapPoints )
    Nav_GetClosestVerticalPosWithHint(pInput->m_pStartPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, m_pPathSpec, &v67, &this->m_hCurArea, &pOutArea);
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
    v37 = Sys_Milliseconds();
    v38 = bfx::CreatePolylinePath((bfx::PolylinePathRCPtr *)&resulta, &pOutArea, &pos, &goalPos, m_pPathSpec, &bfx::g_defaultPathCreationOptions);
    bfx::PolylinePathRCPtr::operator=(result, v38);
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr((bfx::PolylinePathRCPtr *)&resulta);
    v39 = Sys_Milliseconds() - v37;
    if ( v39 > 5 )
    {
      v40 = "failed";
      if ( bfx::PolylinePathRCPtr::IsValid(result) )
        v40 = "succeeded";
      v41 = vtos(pInput->m_pGoalPos);
      v42 = vtos(pInput->m_pStartPos);
      Com_PrintWarning(18, "AI %d: Long path find (%d ms): from %s to %s. (%s)\n", (unsigned int)this->m_pEnt->s.number, (unsigned int)v39, v42, v41, v40);
    }
  }
  if ( pInput->m_bPathMustReachGoal && bfx::PolylinePathRCPtr::IsValid(result) )
  {
    AINavigator2D::GetFinalPathPoint(this, result, (vec3_t *)&resulta);
    _RAX = pInput->m_pGoalPos;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm3, xmm0, dword ptr [rbp+57h+result.m_handleImpl]
      vmovss  xmm1, dword ptr [rax+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+57h+result.m_handleImpl+4]
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+57h+result.m_pSpace]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@3f800000
    }
    if ( !(v55 | v24) )
      bfx::PolylinePathRCPtr::Release(result);
  }
  Profile_EndInternal(NULL);
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  v56 = result;
  __asm { vmovaps xmm6, xmmword ptr [rsp+100h+var_48+8] }
  return v56;
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
  bool v11; 
  __int64 v12; 

  pPath2D->m_pSpace = this->m_pSpace;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GeneratePath");
  AINavigator2D::ExtractCornersFromRawPath(this, path, pPath2D, 20, pathSpec, pbOutHasDoors);
  Sys_ProfEndNamedEvent();
  m_NumPoints = pPath2D->m_NumPoints;
  v10 = m_NumPoints - 1;
  if ( m_NumPoints - 1 > 0 )
  {
    v11 = 1;
    v12 = 0i64;
    for ( _RAX = &pPath2D->m_Points[1]; ; ++_RAX )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vucomiss xmm0, dword ptr [rax-30h]
      }
      if ( v11 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4]
          vucomiss xmm0, dword ptr [rax-2Ch]
        }
        if ( v11 )
          break;
      }
      v11 = ++v12 == v10;
      if ( v12 >= v10 )
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
  __asm { vmovss  xmm0, cs:__real@41400000 }
  return *(float *)&_XMM0;
}

/*
==============
AINavigator2D::GetAllowanceOffMeshZ
==============
*/
float AINavigator2D::GetAllowanceOffMeshZ()
{
  __asm { vmovss  xmm0, cs:__real@42900000 }
  return *(float *)&_XMM0;
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
  bfx::Vector3 v11; 
  bfx::AreaHandle result; 
  __int64 v13; 

  v13 = -2i64;
  _RBX = closestPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+68h+pos.m_x], xmm0
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  [rsp+68h+pos.m_y], xmm1
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+68h+pos.m_z], xmm0
  }
  bfx::GetClosestReachableArea(&result, &posa, &this->m_hCurArea, &this->m_BasePathSpec);
  bfx::AreaHandle::GetClosestPosInArea(&result, &v11, &posa, NULL);
  __asm
  {
    vmovss  xmm0, [rsp+68h+var_38.m_x]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, [rsp+68h+var_38.m_y]
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, [rsp+68h+var_38.m_z]
    vmovss  dword ptr [rbx+8], xmm0
  }
  bfx::AreaHandle::~AreaHandle(&result);
}

/*
==============
AINavigator2D::GetClosestVerticalPosInMostLikelySpace
==============
*/
nav_space_s *AINavigator2D::GetClosestVerticalPosInMostLikelySpace(AINavigator2D *this, const vec3_t *pos, vec3_t *outClosestPos, bfx::AreaHandle *pOutArea)
{
  _RAX = this->m_pEnt;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+100h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm2, xmm0, dword ptr [rax+10Ch]
    vmovss  xmm0, dword ptr [rax+104h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm1, xmm0, dword ptr [rax+110h]
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1; radius
  }
  return Nav_GetClosestVerticalPosInMostLikelySpace(pos, this->m_Layer, *(float *)&_XMM2, &this->m_BasePathSpec, outClosestPos, pOutArea);
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

  _RDI = this;
  v3 = cornerIndex;
  if ( (unsigned int)cornerIndex >= this->m_Path.m_NumPoints )
  {
    m_NumPoints = this->m_Path.m_NumPoints;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4365, ASSERT_TYPE_ASSERT, "(unsigned)( cornerIndex ) < (unsigned)( m_Path.m_NumPoints )", "cornerIndex doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", cornerIndex, m_NumPoints) )
      __debugbreak();
  }
  _RCX = 6 * v3;
  __asm { vmovss  xmm0, dword ptr [rdi+rcx*8+0E0h] }
  return *(float *)&_XMM0;
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
  vec3_t outPoint; 
  vec3_t outWorldPos; 
  vec3_t v35; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RSI = outDir;
  if ( this->m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4341, ASSERT_TYPE_ASSERT, "( m_NumPoints > 0 )", (const char *)&queryFormat, "m_NumPoints > 0") )
    __debugbreak();
  nav_path_t::GetPathPoint(this, iPoint, &outPoint);
  if ( iPoint )
  {
    nav_path_t::GetPathPoint(this, iPoint - 1, &v35);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+outPoint+8]
      vsubss  xmm2, xmm0, dword ptr [rsp+98h+var_48+8]
      vmovss  xmm0, dword ptr [rsp+98h+outPoint]
      vmovss  xmm1, dword ptr [rsp+98h+outPoint+4]
      vsubss  xmm4, xmm0, dword ptr [rsp+98h+var_48]
      vsubss  xmm3, xmm1, dword ptr [rsp+98h+var_48+4]
    }
  }
  else
  {
    Nav_SpaceConvertLocalToWorld(this->m_pSpace, &this->m_LocalStartPoint, &outWorldPos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+outPoint+8]
      vsubss  xmm2, xmm0, dword ptr [rsp+98h+outWorldPos+8]
      vmovss  xmm0, dword ptr [rsp+98h+outPoint]
      vmovss  xmm1, dword ptr [rsp+98h+outPoint+4]
      vsubss  xmm4, xmm0, dword ptr [rsp+98h+outWorldPos]
      vsubss  xmm3, xmm1, dword ptr [rsp+98h+outWorldPos+4]
    }
  }
  __asm
  {
    vmovss  dword ptr [rsi], xmm4
    vmovss  dword ptr [rsi+4], xmm3
    vmovss  dword ptr [rsi+8], xmm2
    vmovss  xmm6, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi]
    vmovaps xmm5, xmm2
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsi+8], xmm0
    vmovss  dword ptr [rsi+4], xmm1
    vmovaps xmm6, [rsp+98h+var_28]
  }
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
  bfx::LinkSegment *LinkSegment; 

  _RSI = outPoint;
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
    _RAX = bfx::LinkSegment::GetEndPos(LinkSegment);
  }
  else
  {
    SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment((bfx::PolylinePathRCPtr *)path, v5);
    if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2037, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    _RAX = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm2, dword ptr [rax+4]
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rsi+4], xmm2
    vmovss  dword ptr [rsi+8], xmm1
  }
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

bool __fastcall AINavigator2D::GetLastPathPointWithinRadius(AINavigator2D *this, const vec3_t *origin, double radius, vec3_t *outPoint)
{
  __int64 m_CurPathPoint; 
  unsigned __int64 m_NumPoints; 
  signed int v20; 
  unsigned __int64 v24; 
  bool v25; 
  __int64 p_z; 
  int v35; 
  __int64 v47; 
  bool result; 
  bool v50; 
  bool v51; 
  bool v89; 
  double v113; 
  double v114; 
  vec3_t outLocalPos; 
  char v121; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RDI = outPoint;
  _RBX = this;
  if ( this->m_Path.m_NumPoints <= 0 )
    goto LABEL_24;
  __asm { vmulss  xmm7, xmm2, xmm2 }
  Nav_SpaceConvertWorldToLocal(this->m_Path.m_pSpace, origin, &outLocalPos);
  m_CurPathPoint = _RBX->m_CurPathPoint;
  m_NumPoints = _RBX->m_Path.m_NumPoints;
  v20 = m_CurPathPoint;
  if ( (int)m_CurPathPoint >= (int)m_NumPoints )
  {
LABEL_6:
    v35 = m_NumPoints - 1;
LABEL_12:
    nav_path_t::GetPathPoint(&_RBX->m_Path, v35, _RDI);
    result = 1;
    goto LABEL_25;
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+118h+outLocalPos+8]
    vmovss  xmm5, dword ptr [rsp+118h+outLocalPos+4]
    vmovss  xmm6, dword ptr [rsp+118h+outLocalPos]
  }
  v24 = _RBX->m_CurPathPoint;
  v25 = __CFSHL__(3 * m_CurPathPoint, 4) || 48 * m_CurPathPoint == 0;
  p_z = (__int64)&_RBX->m_Path.m_Points[m_CurPathPoint].m_LocalPos.z;
  while ( 1 )
  {
    __asm
    {
      vsubss  xmm0, xmm5, dword ptr [rcx-4]
      vsubss  xmm2, xmm6, dword ptr [rcx-8]
      vsubss  xmm3, xmm4, dword ptr [rcx]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, xmm7
    }
    if ( !v25 )
      break;
    ++v20;
    ++v24;
    p_z += 48i64;
    v25 = v24 <= m_NumPoints;
    if ( (__int64)v24 >= (__int64)m_NumPoints )
      goto LABEL_6;
  }
  if ( v20 == (_DWORD)m_CurPathPoint )
  {
    __asm
    {
      vmovss  xmm9, dword ptr [rbx+58h]
      vmovss  xmm8, dword ptr [rbx+54h]
      vmovss  xmm10, dword ptr [rbx+5Ch]
      vsubss  xmm0, xmm5, xmm9
      vmulss  xmm1, xmm0, xmm0
      vsubss  xmm2, xmm6, xmm8
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vsubss  xmm3, xmm4, xmm10
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, xmm7
    }
    if ( v20 <= (unsigned int)m_CurPathPoint )
    {
      v47 = v20;
      goto LABEL_14;
    }
LABEL_24:
    result = 0;
    goto LABEL_25;
  }
  v47 = v20;
  if ( (_RBX->m_Path.m_Points[v20].m_Flags & 4) != 0 )
  {
    v35 = v20 - 1;
    goto LABEL_12;
  }
  _RAX = 6i64 * v20;
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+rax*8+98h]
    vmovss  xmm9, dword ptr [rbx+rax*8+9Ch]
    vmovss  xmm10, dword ptr [rbx+rax*8+0A0h]
  }
LABEL_14:
  __asm { vmovaps [rsp+118h+var_78], xmm11 }
  v50 = __CFSHL__(3 * v47, 4);
  _RAX = 48 * v47;
  v51 = v50 || 48 * v47 == 0;
  __asm
  {
    vmovaps [rsp+118h+var_88], xmm12
    vmovaps [rsp+118h+var_98], xmm13
    vmovaps [rsp+118h+var_A8], xmm14
    vmovss  xmm0, dword ptr [rax+rbx+0C8h]
    vmovss  xmm1, dword ptr [rax+rbx+0CCh]
    vsubss  xmm4, xmm0, xmm8
    vmovss  xmm0, dword ptr [rax+rbx+0D0h]
    vsubss  xmm5, xmm1, xmm9
    vsubss  xmm6, xmm0, xmm10
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm3, xmm9, dword ptr [rsi+4]
    vsqrtss xmm11, xmm2, xmm2
    vcmpless xmm0, xmm11, cs:__real@80000000
    vblendvps xmm0, xmm11, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm14, xmm5, xmm2
    vsubss  xmm5, xmm8, dword ptr [rsi]
    vmulss  xmm13, xmm4, xmm2
    vmulss  xmm1, xmm14, xmm3
    vmulss  xmm0, xmm13, xmm5
    vmovaps [rsp+118h+var_B8], xmm15
    vmulss  xmm15, xmm6, xmm2
    vsubss  xmm6, xmm10, dword ptr [rsi+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm15, xmm6
    vaddss  xmm12, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm3, xmm3, xmm3
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm7
    vmulss  xmm4, xmm12, xmm12
    vsubss  xmm6, xmm4, xmm0
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v50 )
  {
    v89 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1714, ASSERT_TYPE_ASSERT, "( disc >= 0.f )", (const char *)&queryFormat, "disc >= 0.f");
    v50 = 0;
    v51 = !v89;
    if ( v89 )
      __debugbreak();
  }
  __asm
  {
    vsqrtss xmm1, xmm6, xmm6
    vsubss  xmm6, xmm1, xmm12
    vcomiss xmm6, xmm7
  }
  if ( v50 )
    goto LABEL_28;
  __asm { vcomiss xmm6, xmm11 }
  if ( !v51 )
  {
LABEL_28:
    __asm
    {
      vxorps  xmm0, xmm12, cs:__xmm@80000000800000008000000080000000
      vsubss  xmm6, xmm0, xmm1
      vcomiss xmm6, xmm7
    }
    if ( v50 )
      goto LABEL_21;
    __asm { vcomiss xmm6, xmm11 }
    if ( !v51 )
    {
LABEL_21:
      __asm
      {
        vcvtss2sd xmm0, xmm11, xmm11
        vmovsd  [rsp+118h+var_E0], xmm0
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+118h+var_E8], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1721, ASSERT_TYPE_ASSERT, "(d >= 0.f && d <= distStartToEnd)", "%s\n\t%f %f", "d >= 0.f && d <= distStartToEnd", v113, v114) )
        __debugbreak();
    }
  }
  __asm { vmovaps xmm12, [rsp+118h+var_88] }
  result = 1;
  __asm
  {
    vmovaps xmm11, [rsp+118h+var_78]
    vmulss  xmm0, xmm13, xmm6
    vmovaps xmm13, [rsp+118h+var_98]
    vaddss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm14, xmm6
    vmovaps xmm14, [rsp+118h+var_A8]
    vaddss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm1, xmm15, xmm6
    vmovaps xmm15, [rsp+118h+var_B8]
    vaddss  xmm2, xmm1, xmm10
    vmovss  dword ptr [rdi+8], xmm2
    vmovss  dword ptr [rdi+4], xmm0
  }
LABEL_25:
  _R11 = &v121;
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

bool __fastcall AINavigator2D::GetModifierApproachDir(AINavigator2D *this, unsigned int flags, double checkDist, double approachDist, vec3_t *outStartPoint, vec3_t *outEndPoint, vec3_t *outApproachDir, vec3_t *outModifierDir)
{
  bool v20; 
  __int64 m_CurPathPoint; 
  char v32; 
  bool v33; 
  int NumSegments; 
  int v61; 
  bfx::SurfaceSegment *SurfaceSegment; 
  int NumObstacles; 
  int v64; 
  __int64 v65; 
  bool v85; 
  int v120; 
  bool v121; 
  nav_path_t *p_m_Path; 
  int v143; 
  unsigned int v145; 
  bool v147; 
  bool v148; 
  int v168; 
  int v201; 
  __int64 v203; 
  bfx::Vector3 iStartPos; 
  int v205; 
  bfx::ProbeResults results; 
  AINavigator2D *v211; 
  bfx::AreaHandle startingArea; 
  bfx::ProbeSpec probeSpec; 
  unsigned int v214; 
  bfx::AreaHandle result; 
  vec3_t *v219; 
  bfx::Vector3 dir; 
  vec3_t *v221; 
  vec3_t *v222; 
  bfx::ObstacleHandle v223; 
  __int64 v224; 
  bfx::ObstacleDat v225; 
  vec3_t pDataOut; 
  vec3_t v227; 
  bfx::Vector3 v228; 
  vec3_t outPoint; 
  char v230; 
  void *retaddr; 

  _RAX = &retaddr;
  v224 = -2i64;
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
    vmovss  [rbp+1D0h+var_1E0], xmm3
    vmovss  dword ptr [rsp+2D0h+var_278+4], xmm2
  }
  v214 = flags;
  _RDI = this;
  v211 = this;
  v221 = outStartPoint;
  v222 = outEndPoint;
  v219 = outApproachDir;
  *(_QWORD *)v227.v = outModifierDir;
  if ( this->m_Path.m_NumPoints <= 0 )
  {
    v20 = 0;
    goto LABEL_28;
  }
  bfx::AreaHandle::AreaHandle(&startingArea);
  __asm
  {
    vmovss  xmm12, dword ptr [rdi+30h]
    vmovss  [rsp+2D0h+var_28C], xmm12
    vmovss  xmm14, dword ptr [rdi+34h]
    vmovss  [rsp+2D0h+var_288], xmm14
    vmovss  xmm15, dword ptr [rdi+38h]
    vmovss  [rsp+2D0h+var_284], xmm15
  }
  bfx::AreaHandle::operator=(&startingArea, &_RDI->m_hCurArea);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovss  [rbp+1D0h+var_24C], xmm9
  }
  m_CurPathPoint = _RDI->m_CurPathPoint;
  v201 = m_CurPathPoint;
  if ( (int)m_CurPathPoint >= _RDI->m_Path.m_NumPoints )
  {
LABEL_26:
    v85 = 0;
    goto LABEL_27;
  }
  __asm
  {
    vmovaps xmm6, xmm12
    vmovaps xmm7, xmm14
    vmovaps xmm8, xmm15
  }
  _RBX = (__int64)&_RDI->m_Path.m_Points[m_CurPathPoint].m_Length;
  v203 = _RBX;
  __asm
  {
    vmovss  xmm13, cs:__real@80000000
    vmovss  xmm11, dword ptr [rsp+2D0h+var_278+4]
  }
  while ( 1 )
  {
    nav_path_t::GetPathPoint(&_RDI->m_Path, m_CurPathPoint, &outPoint);
    v32 = 0;
    v33 = (*(_BYTE *)(_RBX - 8) & 0x10) == 0;
    if ( (*(_BYTE *)(_RBX - 8) & 0x10) == 0 )
      goto LABEL_24;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1D0h+outPoint]
      vsubss  xmm6, xmm0, xmm6
      vmovss  xmm1, dword ptr [rbp+1D0h+outPoint+4]
      vsubss  xmm5, xmm1, xmm7
      vmovss  xmm0, dword ptr [rbp+1D0h+outPoint+8]
      vsubss  xmm4, xmm0, xmm8
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, xmm13
      vmovss  xmm8, cs:__real@3f800000
      vblendvps xmm1, xmm1, xmm8, xmm0
      vmovss  [rbp+1D0h+var_240], xmm1
      vdivss  xmm0, xmm8, xmm1
      vmulss  xmm10, xmm0, xmm6
      vmovss  [rbp+1D0h+var_1D4], xmm10
      vmulss  xmm11, xmm0, xmm5
      vmovss  [rbp+1D0h+var_1DC], xmm11
      vmulss  xmm0, xmm0, xmm4
      vmovss  [rbp+1D0h+var_240], xmm0
      vmovss  [rsp+2D0h+iStartPos.m_x], xmm12
      vmovss  [rsp+2D0h+iStartPos.m_y], xmm14
      vmovss  [rsp+2D0h+iStartPos.m_z], xmm15
      vmovss  [rbp+1D0h+dir.m_x], xmm10
      vmovss  [rbp+1D0h+dir.m_y], xmm11
      vmovss  [rbp+1D0h+dir.m_z], xmm0
    }
    bfx::AreaHandle::AreaHandle(&results.m_endArea);
    results.m_collided = 0;
    results.m_collideEdgeIndex = -1;
    results.m_generatePath = 0;
    bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
    results.m_generatePath = 1;
    probeSpec.m_probeType = NAVPROBE_TYPE_HORIZONTAL;
    v205 = 0;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm9, xmm9, xmm9
      vmovss  [rbp+1D0h+var_250], xmm9
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm13, dword ptr [rsp+2D0h+var_278+4]
      vminss  xmm6, xmm13, xmm0
      vmovss  [rsp+2D0h+var_254], xmm6
      vcomiss xmm0, xmm7
    }
    if ( !(v32 | v33) )
      break;
LABEL_23:
    bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
    bfx::AreaHandle::~AreaHandle(&results.m_endArea);
    __asm
    {
      vmovss  xmm13, cs:__real@80000000
      vmovss  xmm9, [rbp+1D0h+var_24C]
      vmovss  xmm11, dword ptr [rsp+2D0h+var_278+4]
    }
    LODWORD(m_CurPathPoint) = v201;
LABEL_24:
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+1D0h+outPoint]
      vsubss  xmm2, xmm4, xmm12
      vmovss  xmm5, dword ptr [rbp+1D0h+outPoint+4]
      vsubss  xmm0, xmm5, xmm14
      vmovss  xmm6, dword ptr [rbp+1D0h+outPoint+8]
      vsubss  xmm3, xmm6, xmm15
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vaddss  xmm9, xmm9, xmm0
      vmovss  [rbp+1D0h+var_24C], xmm9
      vcomiss xmm9, xmm11
    }
    if ( v32 | v33 )
    {
      __asm
      {
        vmovaps xmm12, xmm4
        vmovss  [rsp+2D0h+var_28C], xmm4
        vmovaps xmm14, xmm5
        vmovss  [rsp+2D0h+var_288], xmm5
        vmovaps xmm15, xmm6
        vmovss  [rsp+2D0h+var_284], xmm6
      }
      bfx::AreaHandle::operator=(&startingArea, &_RDI->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
      LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
      v201 = m_CurPathPoint;
      _RBX += 48i64;
      v203 = _RBX;
      __asm
      {
        vmovaps xmm6, xmm12
        vmovaps xmm7, xmm14
        vmovaps xmm8, xmm15
      }
      if ( (int)m_CurPathPoint < _RDI->m_Path.m_NumPoints )
        continue;
    }
    goto LABEL_26;
  }
  __asm { vmovaps xmm3, xmm6; dist }
  bfx::NavProbe(&startingArea, &iStartPos, &dir, *(float *)&_XMM3, &_RDI->m_PathSpecOfCurPath, &probeSpec, &results);
  if ( !bfx::PolylinePathRCPtr::IsValid(&results.m_path) )
  {
LABEL_22:
    _RBX = v203;
    __asm
    {
      vmovss  xmm12, [rsp+2D0h+var_28C]
      vmovss  xmm14, [rsp+2D0h+var_288]
      vmovss  xmm15, [rsp+2D0h+var_284]
    }
    goto LABEL_23;
  }
  NumSegments = bfx::PolylinePathRCPtr::GetNumSegments(&results.m_path);
  v61 = 0;
  if ( NumSegments <= 0 )
  {
LABEL_20:
    if ( results.m_collided )
    {
      __asm
      {
        vmovss  xmm0, [rbp+1D0h+var_238.m_distTravelled]
        vcomiss xmm0, xmm6
      }
    }
    goto LABEL_22;
  }
  while ( 1 )
  {
    if ( bfx::PolylinePathRCPtr::GetSegmentType(&results.m_path, v61) )
      goto LABEL_17;
    SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(&results.m_path, v61);
    bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
    NumObstacles = bfx::AreaHandle::GetNumObstacles(&result);
    v64 = 0;
    if ( NumObstacles > 0 )
      break;
LABEL_15:
    _RDI = v211;
    if ( bfx::AreaHandle::operator==(&result, &v211->m_Path.m_Points[(int)m_CurPathPoint].m_hArea) )
    {
      bfx::AreaHandle::~AreaHandle(&result);
      goto LABEL_20;
    }
    bfx::AreaHandle::~AreaHandle(&result);
LABEL_17:
    if ( ++v61 >= NumSegments )
      goto LABEL_20;
  }
  v65 = v214;
  while ( 1 )
  {
    bfx::AreaHandle::GetObstacle(&result, &v223, v64);
    if ( (v65 & bfx::ObstacleHandle::GetObstacleDat(&v223, &v225)->m_userData) != 0 )
      break;
    bfx::ObstacleHandle::~ObstacleHandle(&v223);
    if ( ++v64 >= NumObstacles )
    {
      LODWORD(m_CurPathPoint) = v201;
      goto LABEL_15;
    }
  }
  _RAX = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  xmm0, dword ptr [rax+4]
  }
  _R12 = v221;
  v221->v[0] = _RAX->m_x;
  __asm
  {
    vmovss  dword ptr [r12+4], xmm0
    vmovss  dword ptr [r12+8], xmm1
  }
  _RAX = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
  __asm
  {
    vmovss  xmm3, dword ptr [rax+8]
    vmovss  xmm4, dword ptr [rax+4]
    vmovss  xmm5, dword ptr [rax]
  }
  _RAX = v222;
  __asm
  {
    vmovss  dword ptr [rax], xmm5
    vmovss  dword ptr [rax+4], xmm4
    vmovss  dword ptr [rax+8], xmm3
    vmovss  xmm6, dword ptr [r12]
    vsubss  xmm8, xmm6, [rsp+2D0h+var_28C]
    vmovss  xmm0, dword ptr [r12+4]
    vsubss  xmm9, xmm0, [rsp+2D0h+var_288]
    vmovss  xmm1, dword ptr [r12+8]
    vsubss  xmm10, xmm1, [rsp+2D0h+var_284]
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm7, xmm2, xmm2
    vaddss  xmm0, xmm7, [rbp+1D0h+var_24C]
    vcomiss xmm0, dword ptr [rsp+2D0h+var_278+4]
  }
  if ( !(v32 | v33) )
  {
    v85 = 0;
    goto LABEL_50;
  }
  _RDI = v211;
  v120 = v211->m_Path.m_NumPoints - 1;
  v121 = v201 < (unsigned int)v120;
  if ( v201 < v120 && (v121 = 0, (v211->m_Path.m_Points[v201 + 1].m_Flags & 0x10) != 0) )
  {
    p_m_Path = &v211->m_Path;
    nav_path_t::GetPathPoint(&v211->m_Path, v201 + 1, &pDataOut);
    __asm
    {
      vmovss  xmm6, dword ptr [r12]
      vmovss  xmm3, [rbp+1D0h+var_120]
      vmovss  xmm4, [rbp+1D0h+pDataOut.m_edgeIndex]
      vmovss  xmm5, dword ptr [rbp+1D0h+pDataOut.m_isEdgePos]
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbp+1D0h+pDataOut.m_isEdgePos], xmm5
      vmovss  [rbp+1D0h+pDataOut.m_edgeIndex], xmm4
      vmovss  [rbp+1D0h+var_120], xmm3
    }
    p_m_Path = &v211->m_Path;
  }
  __asm { vsubss  xmm5, xmm5, xmm6 }
  _RAX = *(_QWORD *)v227.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm5
    vsubss  xmm6, xmm4, dword ptr [r12+4]
    vmovss  dword ptr [rax+4], xmm6
    vsubss  xmm4, xmm3, dword ptr [r12+8]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmovss  xmm13, cs:__real@80000000
    vcmpless xmm0, xmm3, xmm13
    vmovss  xmm12, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rax], xmm0
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rax+4], xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rax+8], xmm0
    vmovss  xmm0, [rbp+1D0h+var_1E0]
    vcomiss xmm7, xmm0
  }
  if ( !v121 || (v143 = _RDI->m_CurPathPoint, v201 == v143) )
  {
    __asm
    {
      vcmpless xmm0, xmm7, xmm13
      vblendvps xmm1, xmm7, xmm12, xmm0
      vdivss  xmm2, xmm12, xmm1
      vmulss  xmm0, xmm2, xmm8
    }
    _RAX = v219;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmulss  xmm1, xmm2, xmm9
      vmulss  xmm0, xmm2, xmm10
    }
    goto LABEL_48;
  }
  __asm { vsubss  xmm10, xmm0, xmm7 }
  v145 = v201 - 1;
  if ( v201 > v143 )
  {
    __asm { vxorps  xmm11, xmm11, xmm11 }
    while ( 1 )
    {
      nav_path_t::GetPathPoint(p_m_Path, v145, (vec3_t *)&v228);
      v147 = _RDI->m_CurPathPoint < v145;
      v148 = _RDI->m_CurPathPoint == v145;
      if ( _RDI->m_CurPathPoint == v145 )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rdi+30h]
          vmovss  dword ptr [rbp+1D0h+var_118], xmm7
          vmovss  xmm8, dword ptr [rdi+34h]
          vmovss  dword ptr [rbp+1D0h+var_118+4], xmm8
          vmovss  xmm9, dword ptr [rdi+38h]
          vmovss  dword ptr [rbp+1D0h+var_118+8], xmm9
        }
      }
      else
      {
        nav_path_t::GetPathPoint(p_m_Path, v145 - 1, &v227);
        __asm
        {
          vmovss  xmm9, dword ptr [rbp+1D0h+var_118+8]
          vmovss  xmm8, dword ptr [rbp+1D0h+var_118+4]
          vmovss  xmm7, dword ptr [rbp+1D0h+var_118]
        }
      }
      __asm
      {
        vsubss  xmm4, xmm7, [rbp+1D0h+var_108.m_x]
        vsubss  xmm5, xmm8, [rbp+1D0h+var_108.m_y]
        vsubss  xmm6, xmm9, [rbp+1D0h+var_108.m_z]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm13
        vblendvps xmm1, xmm3, xmm12, xmm0
        vdivss  xmm0, xmm12, xmm1
        vsubss  xmm2, xmm10, xmm3
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm3, xmm0, xmm5
        vmulss  xmm4, xmm0, xmm6
        vcomiss xmm2, xmm11
      }
      if ( v147 || v148 )
        break;
      v168 = _RDI->m_CurPathPoint;
      if ( v145 == v168 )
        break;
      __asm { vmovaps xmm10, xmm2 }
      if ( (int)--v145 < v168 )
        goto LABEL_49;
    }
    __asm
    {
      vmulss  xmm0, xmm1, xmm10
      vmulss  xmm1, xmm3, xmm10
      vmulss  xmm2, xmm4, xmm10
      vaddss  xmm3, xmm0, xmm7
      vaddss  xmm4, xmm1, xmm8
      vaddss  xmm5, xmm2, xmm9
      vmovss  xmm0, dword ptr [r12]
      vsubss  xmm7, xmm0, xmm3
    }
    _RAX = v219;
    __asm
    {
      vmovss  dword ptr [rax], xmm7
      vmovss  xmm1, dword ptr [r12+4]
      vsubss  xmm6, xmm1, xmm4
      vmovss  dword ptr [rax+4], xmm6
      vmovss  xmm0, dword ptr [r12+8]
      vsubss  xmm4, xmm0, xmm5
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, xmm13
      vblendvps xmm1, xmm1, xmm12, xmm0
      vdivss  xmm2, xmm12, xmm1
      vmulss  xmm0, xmm7, xmm2
      vmovss  dword ptr [rax], xmm0
      vmulss  xmm1, xmm6, xmm2
      vmulss  xmm0, xmm4, xmm2
    }
LABEL_48:
    __asm
    {
      vmovss  dword ptr [rax+8], xmm0
      vmovss  dword ptr [rax+4], xmm1
    }
  }
LABEL_49:
  v85 = 1;
LABEL_50:
  bfx::ObstacleHandle::~ObstacleHandle(&v223);
  bfx::AreaHandle::~AreaHandle(&result);
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
  bfx::AreaHandle::~AreaHandle(&results.m_endArea);
LABEL_27:
  bfx::AreaHandle::~AreaHandle(&startingArea);
  v20 = v85;
LABEL_28:
  _R11 = &v230;
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
  return v20;
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

  __asm { vxorps  xmm3, xmm3, xmm3; approachDist }
  return AINavigator2D::GetModifierApproachDir(this, flags, checkDist, *(float *)&_XMM3, outStartPoint, outEndPoint, &outApproachDir, &outModifierDir);
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
  nav_cornerdata_t *v9; 
  __int64 result; 
  __int64 m_CurPathPoint; 
  int v16; 
  bool v23; 
  bfx::CornerLinkType *p_m_LinkType; 
  bool v39; 
  nav_cornerdata_t *v40; 
  unsigned int v41; 

  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  v9 = pOutCorners;
  _R15 = this;
  __asm { vmovaps xmm6, xmm3 }
  if ( this->m_Path.m_NumPoints > 0 )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_58], xmm7
      vmovaps [rsp+0B8h+var_68], xmm8
    }
    if ( maxCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1012, ASSERT_TYPE_ASSERT, "( maxCorners > 0 )", (const char *)&queryFormat, "maxCorners > 0") )
      __debugbreak();
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1013, ASSERT_TYPE_ASSERT, "( pOutCorners )", (const char *)&queryFormat, "pOutCorners") )
      __debugbreak();
    __asm { vmovss  xmm0, cs:__real@7f7fffff }
    m_CurPathPoint = _R15->m_CurPathPoint;
    v16 = 0;
    __asm
    {
      vmovss  xmm5, dword ptr [r15+54h]
      vmovss  xmm7, dword ptr [r15+5Ch]
      vxorps  xmm8, xmm8, xmm8
      vcmpless xmm1, xmm6, xmm8
      vblendvps xmm0, xmm6, xmm0, xmm1
      vmovss  xmm6, dword ptr [r15+58h]
      vmovss  [rsp+0B8h+arg_18], xmm0
    }
    if ( (int)m_CurPathPoint < _R15->m_Path.m_NumPoints )
    {
      v23 = __CFADD__(3 * m_CurPathPoint, 3 * m_CurPathPoint);
      p_m_LinkType = &v9->m_LinkType;
      __asm
      {
        vmovaps [rsp+0B8h+var_78], xmm9
        vmovss  xmm9, [rsp+0B8h+arg_18]
      }
      _RSI = &_R15->m_Path.m_Points[m_CurPathPoint].m_Flags;
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi-0Ch]
          vmovss  xmm1, dword ptr [rsi-8]
          vsubss  xmm3, xmm0, xmm5
          vmovss  xmm0, dword ptr [rsi-4]
          vsubss  xmm2, xmm1, xmm6
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vsubss  xmm4, xmm0, xmm7
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vaddss  xmm8, xmm8, xmm1
          vcomiss xmm8, xmm9
        }
        v39 = !v23;
        if ( v23 || bGetCornerAfterThreshold )
        {
          v40 = &v9[v16];
          nav_path_t::GetPathPoint(&_R15->m_Path, m_CurPathPoint, &v40->m_Pos);
          nav_path_t::GetLinkForPathPoint(&_R15->m_Path, m_CurPathPoint, &v40->m_hLink);
          if ( _RSI[1] == -1 )
          {
            *p_m_LinkType = CORNER_NOT_A_LINK;
          }
          else if ( (*_RSI & 2) != 0 )
          {
            *p_m_LinkType = CORNER_LINK_START;
          }
          else if ( (*_RSI & 4) != 0 )
          {
            *p_m_LinkType = CORNER_LINK_END;
          }
          ++v16;
          *((_BYTE *)p_m_LinkType + 20) = *(_BYTE *)_RSI & 1;
          v41 = *_RSI;
          *((_DWORD *)p_m_LinkType + 6) = m_CurPathPoint;
          *((_BYTE *)p_m_LinkType + 21) = (v41 & 8) != 0;
          p_m_LinkType += 10;
          __asm
          {
            vmovss  xmm5, dword ptr [rsi-0Ch]
            vmovss  xmm6, dword ptr [rsi-8]
            vmovss  xmm7, dword ptr [rsi-4]
          }
          if ( v16 >= maxCorners || v39 )
          {
LABEL_23:
            __asm { vmovaps xmm9, [rsp+0B8h+var_78] }
            break;
          }
          v9 = pOutCorners;
        }
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        _RSI += 12;
        v23 = (unsigned int)m_CurPathPoint < _R15->m_Path.m_NumPoints;
        if ( (int)m_CurPathPoint >= _R15->m_Path.m_NumPoints )
          goto LABEL_23;
      }
    }
    __asm { vmovaps xmm8, [rsp+0B8h+var_68] }
    result = (unsigned int)v16;
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_58]
      vmovaps xmm6, [rsp+0B8h+var_48]
    }
  }
  else
  {
    result = 0i64;
    __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  }
  return result;
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
  __int64 m_CurPathPoint; 
  int v23; 
  __int64 m_NumPoints; 
  __int64 v25; 
  unsigned __int64 v40; 
  __int64 v103; 

  _RBX = this;
  if ( this->m_Path.m_NumPoints > 0 )
  {
    if ( AINavigator::ShouldPathOutOfBounds(this) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vmovss  xmm1, dword ptr [rbx+1Ch]
        vsubss  xmm4, xmm0, dword ptr [rax+130h]
        vsubss  xmm2, xmm1, dword ptr [rax+134h]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm3, xmm2, xmm2
        vaddss  xmm1, xmm3, xmm0
        vsqrtss xmm0, xmm1, xmm1
      }
    }
    else
    {
      m_CurPathPoint = _RBX->m_CurPathPoint;
      __asm { vmovaps [rsp+0D8h+var_18], xmm6 }
      _RCX = 6 * m_CurPathPoint;
      v23 = m_CurPathPoint + 1;
      m_NumPoints = _RBX->m_Path.m_NumPoints;
      v25 = v23;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rcx*8+0C8h]
        vsubss  xmm3, xmm0, dword ptr [rbx+54h]
        vmovss  xmm1, dword ptr [rbx+rcx*8+0CCh]
        vsubss  xmm2, xmm1, dword ptr [rbx+58h]
        vmovss  xmm0, dword ptr [rbx+rcx*8+0D0h]
        vsubss  xmm4, xmm0, dword ptr [rbx+5Ch]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm6, xmm2, xmm2
        vmovss  [rsp+0D8h+var_B8], xmm6
      }
      if ( v23 < m_NumPoints )
      {
        if ( m_NumPoints - v23 >= 4 )
        {
          __asm
          {
            vmovaps [rsp+0D8h+var_28], xmm7
            vmovaps [rsp+0D8h+var_38], xmm8
            vmovaps [rsp+0D8h+var_48], xmm9
            vmovaps [rsp+0D8h+var_58], xmm10
            vmovaps [rsp+0D8h+var_68], xmm11
            vmovaps [rsp+0D8h+var_78], xmm12
          }
          _R9 = (__int64)&_RBX->m_ReevalPathTask.pPrev + 48 * v23 + 4;
          __asm
          {
            vmovss  xmm2, dword ptr [r9]
            vmovaps [rsp+0D8h+var_88], xmm13
          }
          v40 = ((unsigned __int64)(m_NumPoints - v23 - 4) >> 2) + 1;
          __asm
          {
            vmovaps [rsp+0D8h+var_98], xmm14
            vmovaps [rsp+0D8h+var_A8], xmm15
          }
          v25 = v23 + 4 * v40;
          do
          {
            __asm
            {
              vmovss  xmm1, dword ptr [r9+30h]
              vmovss  xmm4, dword ptr [r9+60h]
              vmovss  xmm0, dword ptr [r9+2Ch]
              vsubss  xmm11, xmm0, dword ptr [r9-4]
              vmovss  xmm3, dword ptr [r9+5Ch]
            }
            _R9 += 192i64;
            __asm
            {
              vsubss  xmm5, xmm1, xmm2
              vmovss  xmm2, dword ptr [r9-8Ch]
              vsubss  xmm6, xmm2, dword ptr [r9-0BCh]
              vsubss  xmm14, xmm3, xmm0
              vmovss  xmm0, dword ptr [r9-5Ch]
              vsubss  xmm8, xmm0, xmm2
              vmovss  xmm2, dword ptr [r9-30h]
              vsubss  xmm9, xmm2, xmm4
              vsubss  xmm7, xmm4, xmm1
              vmovss  xmm1, dword ptr [r9-34h]
              vsubss  xmm15, xmm1, xmm3
              vmovss  xmm3, dword ptr [r9-2Ch]
              vsubss  xmm12, xmm3, xmm0
              vmovss  xmm0, dword ptr [r9-4]
              vsubss  xmm4, xmm0, xmm1
              vmovss  xmm0, dword ptr [r9]
              vsubss  xmm10, xmm0, xmm2
              vmovss  [rsp+0D8h+var_B0], xmm0
              vmovss  xmm0, dword ptr [r9+4]
              vsubss  xmm13, xmm0, xmm3
              vmulss  xmm2, xmm5, xmm5
              vmulss  xmm0, xmm6, xmm6
              vmovss  [rsp+0D8h+var_B4], xmm4
              vmulss  xmm1, xmm11, xmm11
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vaddss  xmm4, xmm1, [rsp+0D8h+var_B8]
              vmulss  xmm3, xmm7, xmm7
              vmulss  xmm0, xmm14, xmm14
              vaddss  xmm2, xmm3, xmm0
              vmulss  xmm1, xmm8, xmm8
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vaddss  xmm5, xmm4, xmm0
              vmulss  xmm3, xmm9, xmm9
              vmulss  xmm1, xmm15, xmm15
              vaddss  xmm2, xmm3, xmm1
              vmulss  xmm0, xmm12, xmm12
              vaddss  xmm2, xmm2, xmm0
              vmovss  xmm0, [rsp+0D8h+var_B4]
              vsqrtss xmm1, xmm2, xmm2
              vmulss  xmm0, xmm0, xmm0
              vaddss  xmm4, xmm5, xmm1
              vmulss  xmm3, xmm10, xmm10
              vaddss  xmm2, xmm3, xmm0
              vmulss  xmm1, xmm13, xmm13
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vmovss  xmm2, [rsp+0D8h+var_B0]
              vaddss  xmm6, xmm4, xmm0
              vmovss  [rsp+0D8h+var_B8], xmm6
            }
            --v40;
          }
          while ( v40 );
          __asm
          {
            vmovaps xmm15, [rsp+0D8h+var_A8]
            vmovaps xmm14, [rsp+0D8h+var_98]
            vmovaps xmm13, [rsp+0D8h+var_88]
            vmovaps xmm12, [rsp+0D8h+var_78]
            vmovaps xmm11, [rsp+0D8h+var_68]
            vmovaps xmm10, [rsp+0D8h+var_58]
            vmovaps xmm9, [rsp+0D8h+var_48]
            vmovaps xmm8, [rsp+0D8h+var_38]
            vmovaps xmm7, [rsp+0D8h+var_28]
          }
        }
        if ( v25 < m_NumPoints )
        {
          v103 = m_NumPoints - v25;
          _RCX = (__int64)&_RBX->m_ReevalPathTask.pPrev + 48 * v25 + 4;
          __asm { vmovss  xmm1, dword ptr [rcx] }
          do
          {
            __asm
            {
              vmovss  xmm5, dword ptr [rcx+30h]
              vmovss  xmm0, dword ptr [rcx+2Ch]
              vsubss  xmm3, xmm0, dword ptr [rcx-4]
              vmovss  xmm0, dword ptr [rcx+34h]
              vsubss  xmm4, xmm0, dword ptr [rcx+4]
            }
            _RCX += 48i64;
            __asm
            {
              vsubss  xmm1, xmm5, xmm1
              vmulss  xmm2, xmm1, xmm1
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm4, xmm4
              vaddss  xmm3, xmm3, xmm2
              vsqrtss xmm1, xmm3, xmm3
              vaddss  xmm6, xmm6, xmm1
              vmovaps xmm1, xmm5
            }
            --v103;
          }
          while ( v103 );
        }
      }
      __asm
      {
        vmovaps xmm0, xmm6
        vmovaps xmm6, [rsp+0D8h+var_18]
      }
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
AINavigator2D::GetPathDistToGoalOrLink
==============
*/
float AINavigator2D::GetPathDistToGoalOrLink(AINavigator2D *this)
{
  __int64 m_CurPathPoint; 
  __int64 m_NumPoints; 
  __int64 v17; 

  _RBX = this;
  if ( this->m_Path.m_NumPoints > 0 )
  {
    if ( AINavigator::ShouldPathOutOfBounds(this) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vmovss  xmm1, dword ptr [rbx+1Ch]
        vsubss  xmm4, xmm0, dword ptr [rax+130h]
        vsubss  xmm2, xmm1, dword ptr [rax+134h]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm3, xmm2, xmm2
        vaddss  xmm1, xmm3, xmm0
        vsqrtss xmm0, xmm1, xmm1
      }
    }
    else
    {
      m_CurPathPoint = _RBX->m_CurPathPoint;
      m_NumPoints = _RBX->m_Path.m_NumPoints;
      _RCX = 6 * m_CurPathPoint;
      v17 = (int)m_CurPathPoint + 1;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rcx*8+0C8h]
        vsubss  xmm3, xmm0, dword ptr [rbx+54h]
        vmovss  xmm1, dword ptr [rbx+rcx*8+0CCh]
        vsubss  xmm2, xmm1, dword ptr [rbx+58h]
        vmovss  xmm0, dword ptr [rbx+rcx*8+0D0h]
        vsubss  xmm4, xmm0, dword ptr [rbx+5Ch]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm5, xmm2, xmm2
      }
      if ( v17 < m_NumPoints )
      {
        __asm
        {
          vmovaps [rsp+58h+var_18], xmm6
          vmovaps [rsp+58h+var_28], xmm7
          vmovaps [rsp+58h+var_38], xmm8
        }
        if ( m_NumPoints - v17 < 4 )
        {
LABEL_13:
          if ( v17 < m_NumPoints )
          {
            _RCX = (__int64)&_RBX->m_ReevalPathTask.pPrev + 48 * v17 + 4;
            do
            {
              if ( (*(_BYTE *)(_RCX + 8) & 2) != 0 )
                break;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+2Ch]
                vsubss  xmm3, xmm0, dword ptr [rcx-4]
                vmovss  xmm1, dword ptr [rcx+30h]
                vsubss  xmm2, xmm1, dword ptr [rcx]
                vmovss  xmm0, dword ptr [rcx+34h]
                vsubss  xmm4, xmm0, dword ptr [rcx+4]
                vmulss  xmm1, xmm3, xmm3
                vmulss  xmm2, xmm2, xmm2
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm2, xmm4, xmm4
                vaddss  xmm3, xmm3, xmm2
              }
              ++v17;
              _RCX += 48i64;
              __asm
              {
                vsqrtss xmm1, xmm3, xmm3
                vaddss  xmm5, xmm5, xmm1
              }
            }
            while ( v17 < m_NumPoints );
          }
        }
        else
        {
          _RCX = (char *)&_RBX->m_ReevalPathTask.pPrev + 48 * v17 + 4;
          while ( (_RCX[8] & 2) == 0 )
          {
            __asm
            {
              vmovss  xmm6, dword ptr [rcx+30h]
              vsubss  xmm0, xmm6, dword ptr [rcx]
              vmovss  xmm4, dword ptr [rcx+2Ch]
              vsubss  xmm2, xmm4, dword ptr [rcx-4]
              vmovss  xmm7, dword ptr [rcx+34h]
              vsubss  xmm3, xmm7, dword ptr [rcx+4]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vaddss  xmm5, xmm5, xmm0
            }
            if ( (_RCX[56] & 2) != 0 )
              break;
            __asm
            {
              vmovss  xmm8, dword ptr [rcx+5Ch]
              vsubss  xmm2, xmm8, xmm4
              vmovss  xmm4, dword ptr [rcx+60h]
              vsubss  xmm0, xmm4, xmm6
              vmovss  xmm6, dword ptr [rcx+64h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vsubss  xmm3, xmm6, xmm7
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vaddss  xmm5, xmm5, xmm0
            }
            if ( (_RCX[104] & 2) != 0 )
              break;
            __asm
            {
              vmovss  xmm7, dword ptr [rcx+8Ch]
              vsubss  xmm2, xmm7, xmm8
              vmovss  xmm8, dword ptr [rcx+90h]
              vsubss  xmm0, xmm8, xmm4
              vmovss  xmm4, dword ptr [rcx+94h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vsubss  xmm3, xmm4, xmm6
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vaddss  xmm5, xmm5, xmm0
            }
            if ( (_RCX[152] & 2) != 0 )
              break;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+0BCh]
              vmovss  xmm1, dword ptr [rcx+0C0h]
              vsubss  xmm3, xmm0, xmm7
              vmovss  xmm0, dword ptr [rcx+0C4h]
              vsubss  xmm2, xmm1, xmm8
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vsubss  xmm4, xmm0, xmm4
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm0
            }
            v17 += 4i64;
            _RCX += 192;
            __asm
            {
              vsqrtss xmm1, xmm2, xmm2
              vaddss  xmm5, xmm5, xmm1
            }
            if ( v17 >= m_NumPoints - 3 )
              goto LABEL_13;
          }
        }
        __asm
        {
          vmovaps xmm7, [rsp+58h+var_28]
          vmovaps xmm6, [rsp+58h+var_18]
          vmovaps xmm8, [rsp+58h+var_38]
        }
      }
      __asm { vmovaps xmm0, xmm5 }
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
AINavigator2D::GetPathLength
==============
*/
float AINavigator2D::GetPathLength(AINavigator2D *this)
{
  __int64 m_NumPoints; 
  int v16; 
  __int64 v19; 
  int v20; 
  int v21; 
  unsigned __int64 v23; 
  __int64 v80; 

  m_NumPoints = this->m_Path.m_NumPoints;
  _RDX = this;
  if ( (int)m_NumPoints > 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0C8h]
      vsubss  xmm3, xmm0, dword ptr [rcx+60h]
      vmovss  xmm1, dword ptr [rcx+0CCh]
      vsubss  xmm2, xmm1, dword ptr [rcx+64h]
      vmovss  xmm0, dword ptr [rcx+0D0h]
      vsubss  xmm4, xmm0, dword ptr [rcx+68h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
    }
    v16 = 1;
    __asm
    {
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm5, xmm2, xmm2
    }
    if ( m_NumPoints > 1 )
    {
      v19 = 1i64;
      if ( m_NumPoints >= 5 )
      {
        v20 = m_NumPoints - 1;
        __asm { vmovaps [rsp+18h+var_18], xmm6 }
        v21 = 3;
        _RCX = &this->m_Path.m_Points[0].m_LocalPos.v[2];
        v23 = ((unsigned __int64)(m_NumPoints - 5) >> 2) + 1;
        v19 = 4 * v23 + 1;
        do
        {
          if ( v16 == v20 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+3Ch]
              vsubss  xmm3, xmm0, dword ptr [rcx-8]
              vmovss  xmm0, dword ptr [rdx+44h]
              vmovss  xmm1, dword ptr [rdx+40h]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+28h]
              vsubss  xmm3, xmm0, dword ptr [rcx-8]
              vmovss  xmm0, dword ptr [rcx+30h]
              vmovss  xmm1, dword ptr [rcx+2Ch]
            }
          }
          __asm
          {
            vsubss  xmm2, xmm1, dword ptr [rcx-4]
            vsubss  xmm4, xmm0, dword ptr [rcx]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm2, xmm2
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm1, xmm3, xmm0
            vsqrtss xmm0, xmm1, xmm1
            vaddss  xmm6, xmm0, xmm5
          }
          if ( v21 - 1 == v20 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+3Ch]
              vsubss  xmm3, xmm0, dword ptr [rcx+28h]
              vmovss  xmm0, dword ptr [rdx+44h]
              vmovss  xmm1, dword ptr [rdx+40h]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+58h]
              vsubss  xmm3, xmm0, dword ptr [rcx+28h]
              vmovss  xmm0, dword ptr [rcx+60h]
              vmovss  xmm1, dword ptr [rcx+5Ch]
            }
          }
          __asm
          {
            vsubss  xmm2, xmm1, dword ptr [rcx+2Ch]
            vsubss  xmm4, xmm0, dword ptr [rcx+30h]
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
            vsqrtss xmm0, xmm5, xmm5
            vaddss  xmm6, xmm0, xmm6
          }
          if ( v21 == v20 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+3Ch]
              vsubss  xmm3, xmm0, dword ptr [rcx+58h]
              vmovss  xmm0, dword ptr [rdx+44h]
              vmovss  xmm1, dword ptr [rdx+40h]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+88h]
              vsubss  xmm3, xmm0, dword ptr [rcx+58h]
              vmovss  xmm0, dword ptr [rcx+90h]
              vmovss  xmm1, dword ptr [rcx+8Ch]
            }
          }
          __asm
          {
            vsubss  xmm2, xmm1, dword ptr [rcx+5Ch]
            vsubss  xmm4, xmm0, dword ptr [rcx+60h]
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
            vsqrtss xmm0, xmm5, xmm5
            vaddss  xmm6, xmm0, xmm6
          }
          if ( v21 + 1 == v20 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+3Ch]
              vsubss  xmm3, xmm0, dword ptr [rcx+88h]
              vmovss  xmm0, dword ptr [rdx+44h]
              vmovss  xmm1, dword ptr [rdx+40h]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+0B8h]
              vsubss  xmm3, xmm0, dword ptr [rcx+88h]
              vmovss  xmm0, dword ptr [rcx+0C0h]
              vmovss  xmm1, dword ptr [rcx+0BCh]
            }
          }
          __asm
          {
            vsubss  xmm2, xmm1, dword ptr [rcx+8Ch]
            vsubss  xmm4, xmm0, dword ptr [rcx+90h]
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
          }
          v16 += 4;
          v21 += 4;
          _RCX += 48;
          __asm
          {
            vsqrtss xmm0, xmm5, xmm5
            vaddss  xmm5, xmm0, xmm6
          }
          --v23;
        }
        while ( v23 );
        __asm { vmovaps xmm6, [rsp+18h+var_18] }
      }
      if ( v19 < m_NumPoints )
      {
        v80 = m_NumPoints - v19;
        _RCX = (__int64)&_RDX->m_ReevalPathTask.pPrev + 48 * v19 + 4;
        do
        {
          if ( v16 == (_DWORD)m_NumPoints - 1 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+3Ch]
              vmovss  xmm1, dword ptr [rdx+40h]
              vsubss  xmm2, xmm0, dword ptr [rcx-4]
              vmovss  xmm0, dword ptr [rdx+44h]
              vsubss  xmm3, xmm1, dword ptr [rcx]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+2Ch]
              vmovss  xmm1, dword ptr [rcx+30h]
              vsubss  xmm3, xmm0, dword ptr [rcx-4]
              vmovss  xmm0, dword ptr [rcx+34h]
              vsubss  xmm2, xmm1, dword ptr [rcx]
            }
          }
          __asm
          {
            vsubss  xmm4, xmm0, dword ptr [rcx+4]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm3, xmm0
          }
          ++v16;
          _RCX += 48i64;
          __asm
          {
            vsqrtss xmm1, xmm1, xmm1
            vaddss  xmm5, xmm1, xmm5
          }
          --v80;
        }
        while ( v80 );
      }
    }
    __asm { vmovaps xmm0, xmm5 }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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

void __fastcall AINavigator2D::GetPosAlongPath(AINavigator2D *this, double dist, bool bStopAtLink, nav_posAlongPathResults_t *pOutResults)
{
  bfx::Vector3 pos; 
  char v25; 
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
  _R14 = pOutResults;
  __asm { vmovaps xmm10, xmm1 }
  if ( !pOutResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 786, ASSERT_TYPE_ASSERT, "( pOutResults )", (const char *)&queryFormat, "pOutResults") )
    __debugbreak();
  _R14->m_PathDistToPos = 0.0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm10, xmm0
  }
  this->GetCurPos(this, (vec3_t *)&pos);
  __asm
  {
    vmovss  xmm0, [rbp+4Fh+pos.m_x]
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm1, [rbp+4Fh+pos.m_y]
    vmovss  dword ptr [r14+4], xmm1
    vmovss  xmm0, [rbp+4Fh+pos.m_z]
    vmovss  dword ptr [r14+8], xmm0
  }
  bfx::AreaHandle::operator=(&_R14->m_hArea, &this->m_hCurArea);
  bfx::LinkHandle::Release(&_R14->m_hLink);
  _R14->m_numPointsAlongPath = 0;
  _R14->m_PosType = POS_ON_SURFACE;
  _R11 = &v25;
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
  int v9; 
  unsigned int *p_m_Flags; 
  vec3_t outDir; 

  m_CurPathPoint = this->m_CurPathPoint;
  _RBP = corner;
  if ( m_CurPathPoint )
  {
    v9 = m_CurPathPoint - 1;
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovaps [rsp+0A8h+var_48], xmm8
      vmovaps [rsp+0A8h+var_58], xmm9
    }
    if ( v9 < 0 )
    {
LABEL_8:
      if ( v9 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 973, ASSERT_TYPE_ASSERT, "(prevCornerIndex == -1)", (const char *)&queryFormat, "prevCornerIndex == -1") )
        __debugbreak();
    }
    else
    {
      __asm { vxorps  xmm9, xmm9, xmm9 }
      p_m_Flags = &this->m_Path.m_Points[v9].m_Flags;
      while ( 1 )
      {
        nav_path_t::GetPathPoint(&this->m_Path, v9, _RBP);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0]
          vsubss  xmm6, xmm0, dword ptr [rsi+30h]
          vmovss  xmm0, dword ptr [rbp+8]
          vmovss  xmm1, dword ptr [rbp+4]
          vsubss  xmm8, xmm0, dword ptr [rsi+38h]
          vsubss  xmm7, xmm1, dword ptr [rsi+34h]
        }
        nav_path_t::GetDir(&this->m_Path, v9, &outDir);
        if ( (*p_m_Flags & 2) != 0 || (*p_m_Flags & 0xC10) != 0 )
          break;
        __asm
        {
          vmulss  xmm1, xmm7, dword ptr [rsp+0A8h+outDir+4]
          vmulss  xmm0, xmm6, dword ptr [rsp+0A8h+outDir]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, dword ptr [rsp+0A8h+outDir+8]
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm3, xmm9
        }
        p_m_Flags -= 12;
        if ( --v9 < 0 )
          goto LABEL_8;
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_48]
      vmovaps xmm7, [rsp+0A8h+var_38]
      vmovaps xmm6, [rsp+0A8h+var_28]
      vmovaps xmm9, [rsp+0A8h+var_58]
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

__int64 __fastcall AINavigator2D::GetStairsStateAtDist(AINavigator2D *this, double checkDist, vec3_t *outPosAtDist)
{
  unsigned int v16; 
  __int64 result; 
  bfx::PathSpec *pathSpec; 
  __int64 m_CurPathPoint; 
  __int64 p_m_Length; 
  char v62; 
  char v63; 
  bfx::ProbeSpec probeSpec; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  bfx::AreaHandle startingArea; 
  bfx::ProbeResults results; 
  __int64 v90; 
  vec3_t outPoint; 
  vec3_t outUp; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  v90 = -2i64;
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
  }
  _R15 = outPosAtDist;
  __asm { vmovss  [rsp+1C0h+var_17C], xmm1 }
  _RBX = this;
  v16 = 0;
  *(_QWORD *)outPosAtDist->v = 0i64;
  outPosAtDist->v[2] = 0.0;
  if ( this->m_Path.m_NumPoints > 0 )
  {
    probeSpec.m_probeType = NAVPROBE_TYPE_HORIZONTAL;
    pathSpec = &this->m_PathSpecOfCurPath;
    __asm { vxorps  xmm10, xmm10, xmm10 }
    bfx::AreaHandle::AreaHandle(&startingArea);
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+30h]
      vmovss  xmm8, dword ptr [rbx+34h]
      vmovss  xmm9, dword ptr [rbx+38h]
    }
    bfx::AreaHandle::operator=(&startingArea, &_RBX->m_hCurArea);
    m_CurPathPoint = _RBX->m_CurPathPoint;
    if ( (int)m_CurPathPoint < _RBX->m_Path.m_NumPoints )
    {
      __asm
      {
        vmovaps xmm6, xmm7
        vmovaps xmm11, xmm8
        vmovaps xmm12, xmm9
      }
      p_m_Length = (__int64)&_RBX->m_Path.m_Points[m_CurPathPoint].m_Length;
      while ( 1 )
      {
        nav_path_t::GetPathPoint(&_RBX->m_Path, m_CurPathPoint, &outPoint);
        __asm
        {
          vmovss  xmm13, dword ptr [rbp+0C0h+outPoint]
          vsubss  xmm4, xmm13, xmm6
          vmovss  xmm14, dword ptr [rbp+0C0h+outPoint+4]
          vsubss  xmm5, xmm14, xmm11
          vmovss  xmm11, dword ptr [rbp+0C0h+outPoint+8]
          vsubss  xmm6, xmm11, xmm12
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vmovss  xmm2, cs:__real@3f800000
          vblendvps xmm1, xmm3, xmm2, xmm0
          vmovss  [rsp+1C0h+var_180], xmm1
          vdivss  xmm0, xmm2, xmm1
          vmulss  xmm12, xmm4, xmm0
          vmulss  xmm15, xmm5, xmm0
          vmulss  xmm1, xmm6, xmm0
          vmovss  [rsp+1C0h+var_180], xmm1
          vaddss  xmm0, xmm10, dword ptr [r14]
          vmovss  xmm2, [rsp+1C0h+var_17C]
        }
        _RCX = 6i64 * (int)m_CurPathPoint;
        __asm { vcomiss xmm0, xmm2 }
        if ( !__CFADD__(3i64 * (int)m_CurPathPoint, 3i64 * (int)m_CurPathPoint) )
          break;
        __asm
        {
          vmovaps xmm10, xmm0
          vmovaps xmm7, xmm13
          vmovaps xmm8, xmm14
          vmovaps xmm9, xmm11
        }
        bfx::AreaHandle::operator=(&startingArea, &_RBX->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        p_m_Length += 48i64;
        __asm
        {
          vmovaps xmm6, xmm7
          vmovaps xmm11, xmm14
          vmovaps xmm12, xmm9
        }
        if ( (int)m_CurPathPoint >= _RBX->m_Path.m_NumPoints )
          goto LABEL_15;
      }
      if ( (_RBX->m_Path.m_Points[(int)m_CurPathPoint].m_Flags & 0x10) != 0 )
      {
        __asm
        {
          vmovss  [rsp+1C0h+iStartPos.m_x], xmm7
          vmovss  [rsp+1C0h+iStartPos.m_y], xmm8
          vmovss  [rsp+1C0h+iStartPos.m_z], xmm9
          vmovss  [rsp+1C0h+dir.m_x], xmm12
          vmovss  [rsp+1C0h+dir.m_y], xmm15
          vmovss  [rsp+1C0h+dir.m_z], xmm1
          vsubss  xmm1, xmm2, xmm10
          vmovss  xmm0, dword ptr [rbx+rcx*8+0DCh]
          vminss  xmm1, xmm0, xmm1
          vmaxss  xmm6, xmm1, cs:__real@3dcccccd
        }
        bfx::AreaHandle::AreaHandle(&results.m_endArea);
        results.m_collided = 0;
        results.m_collideEdgeIndex = -1;
        results.m_generatePath = 0;
        bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
        __asm { vmovaps xmm3, xmm6; dist }
        bfx::NavProbe(&startingArea, &iStartPos, &dir, *(float *)&_XMM3, pathSpec, &probeSpec, &results);
        if ( bfx::AreaHandle::IsValid(&results.m_endArea) && (bfx::AreaHandle::GetAreaUsageFlags(&results.m_endArea) & 0x80000000) != 0 )
        {
          __asm
          {
            vmovss  xmm0, [rbp+0C0h+var_140.m_endPos.m_x]
            vmovss  dword ptr [r15], xmm0
            vmovss  xmm1, [rbp+0C0h+var_140.m_endPos.m_y]
            vmovss  dword ptr [r15+4], xmm1
            vmovss  xmm0, [rbp+0C0h+var_140.m_endPos.m_z]
            vmovss  dword ptr [r15+8], xmm0
          }
          Nav_GetSpaceUp(_RBX->m_pSpace, &outUp);
          __asm
          {
            vmulss  xmm3, xmm12, dword ptr [rbp+0C0h+outUp]
            vmulss  xmm2, xmm15, dword ptr [rbp+0C0h+outUp+4]
            vaddss  xmm3, xmm3, xmm2
            vmovss  xmm0, [rsp+1C0h+var_180]
            vmulss  xmm0, xmm0, dword ptr [rbp+0C0h+outUp+8]
            vaddss  xmm4, xmm3, xmm0
            vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vcomiss xmm1, cs:__real@3a83126f
          }
          if ( !v62 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcomiss xmm4, xmm0
            }
            v16 = 1;
            if ( v62 | v63 )
              v16 = 2;
          }
        }
        bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
        bfx::AreaHandle::~AreaHandle(&results.m_endArea);
      }
    }
LABEL_15:
    bfx::AreaHandle::~AreaHandle(&startingArea);
    result = v16;
  }
  else
  {
    result = 0i64;
  }
  _R11 = &v93;
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
  return result;
}

/*
==============
AINavigator2D::GetStairsStateWithinDist
==============
*/

__int64 __fastcall AINavigator2D::GetStairsStateWithinDist(AINavigator2D *this, double checkDist, bool bCurrentlyOnStairs)
{
  __int64 result; 
  __int64 m_CurPathPoint; 
  __int64 v41; 
  int v45; 
  bool v46; 
  int AreaUsageFlags; 
  char v83; 
  char v84; 
  int v92; 
  unsigned int v93; 
  bfx::ProbeSpec probeSpec; 
  bfx::AreaHandle startingArea; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  bfx::ProbeResults results; 
  __int64 v115; 
  vec3_t outPoint; 
  vec3_t outUp; 
  bfx::PathSpec pathSpec; 
  char v119; 
  void *retaddr; 

  _RAX = &retaddr;
  v115 = -2i64;
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
    vmovaps xmm10, xmm1
    vmovss  [rsp+210h+var_1CC], xmm1
  }
  _RBX = this;
  if ( this->m_Path.m_NumPoints > 0 )
  {
    _ECX = 0;
    __asm { vmovd   xmm1, ecx }
    _EAX = bCurrentlyOnStairs;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm2, cs:__real@3e849ba6
      vmovss  xmm1, cs:__real@3e322d0e
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  [rsp+210h+var_1C0], xmm0
      vmovd   xmm1, ecx
    }
    _EAX = bCurrentlyOnStairs;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm2, cs:__real@42200000
      vmovss  xmm1, cs:__real@41a00000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  [rsp+210h+var_1BC], xmm0
    }
    probeSpec.m_probeType = NAVPROBE_TYPE_HORIZONTAL;
    __asm
    {
      vmovups ymm2, ymmword ptr [rbx+4F4h]
      vmovups ymmword ptr [rbp+110h+var_120.m_obstacleMode], ymm2
      vmovups ymm0, ymmword ptr [rbx+514h]
      vmovups ymmword ptr [rbp+110h+var_120.m_maxSearchDist], ymm0
      vmovups xmm1, xmmword ptr [rbx+534h]
      vmovups xmmword ptr [rbp+110h+var_120.m_penaltyTable.m_perFlagPenalties+18h], xmm1
      vpextrd rax, xmm2, 2
    }
    pathSpec.m_areaUsageFlags = _RAX & 0x7FFFFFFF;
    __asm { vxorps  xmm14, xmm14, xmm14 }
    bfx::AreaHandle::AreaHandle(&startingArea, &_RBX->m_hCurArea);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+30h]
      vmovss  xmm8, dword ptr [rbx+34h]
      vmovss  xmm9, dword ptr [rbx+38h]
    }
    m_CurPathPoint = _RBX->m_CurPathPoint;
    if ( (int)m_CurPathPoint < _RBX->m_Path.m_NumPoints )
    {
      v41 = _RBX->m_CurPathPoint;
      __asm
      {
        vmovaps xmm7, xmm6
        vmovaps xmm12, xmm8
        vmovaps xmm13, xmm9
      }
      v45 = m_CurPathPoint + 1;
      v46 = __CFADD__(3 * m_CurPathPoint, 3 * m_CurPathPoint) || 6 * m_CurPathPoint == 0;
      _R12 = &_RBX->m_Path.m_Points[m_CurPathPoint].m_Flags;
      __asm { vmovss  xmm15, cs:__real@3f800000 }
      while ( 1 )
      {
        __asm { vcomiss xmm14, xmm10 }
        if ( !v46 )
          break;
        nav_path_t::GetPathPoint(&_RBX->m_Path, m_CurPathPoint, &outPoint);
        __asm
        {
          vmovss  xmm10, dword ptr [rbp+110h+outPoint]
          vsubss  xmm3, xmm10, xmm7
          vmovss  xmm11, dword ptr [rbp+110h+outPoint+4]
          vsubss  xmm4, xmm11, xmm12
          vmovss  xmm12, dword ptr [rbp+110h+outPoint+8]
          vsubss  xmm5, xmm12, xmm13
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm7, xmm2, xmm2
          vcmpless xmm0, xmm7, cs:__real@80000000
          vblendvps xmm1, xmm7, xmm15, xmm0
          vmovss  [rsp+210h+var_1D0], xmm1
          vdivss  xmm0, xmm15, xmm1
          vmulss  xmm2, xmm3, xmm0
          vmovss  [rsp+210h+var_1C4], xmm2
          vmulss  xmm1, xmm4, xmm0
          vmovss  [rsp+210h+var_1D0], xmm1
          vmulss  xmm13, xmm5, xmm0
        }
        if ( (_DWORD)m_CurPathPoint != _RBX->m_CurPathPoint )
          __asm { vmovss  xmm7, dword ptr [r12+8] }
        if ( (*(_BYTE *)_R12 & 0x10) != 0 )
        {
          __asm
          {
            vmovss  [rsp+210h+iStartPos.m_x], xmm6
            vmovss  [rsp+210h+iStartPos.m_y], xmm8
            vmovss  [rbp+110h+iStartPos.m_z], xmm9
            vmovss  [rsp+210h+dir.m_x], xmm2
            vmovss  [rsp+210h+dir.m_y], xmm1
            vmovss  [rsp+210h+dir.m_z], xmm13
          }
          bfx::AreaHandle::AreaHandle(&results.m_endArea);
          results.m_collided = 0;
          results.m_collideEdgeIndex = -1;
          results.m_generatePath = 0;
          bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
          __asm { vmovaps xmm3, xmm7; dist }
          bfx::NavProbe(&startingArea, &iStartPos, &dir, *(float *)&_XMM3, &pathSpec, &probeSpec, &results);
          if ( bfx::AreaHandle::IsValid(&results.m_endArea) )
          {
            __asm
            {
              vmovss  xmm6, [rbp+110h+var_188.m_endPos.m_x]
              vmovss  xmm8, [rbp+110h+var_188.m_endPos.m_y]
              vmovss  xmm9, [rbp+110h+var_188.m_endPos.m_z]
            }
            AreaUsageFlags = bfx::AreaHandle::GetAreaUsageFlags(&startingArea);
            if ( AreaUsageFlags >= 0 )
            {
              __asm
              {
                vmovss  xmm1, [rbp+110h+var_188.m_distTravelled]
                vaddss  xmm0, xmm1, xmm14
                vcomiss xmm0, [rsp+210h+var_1CC]
              }
              goto LABEL_24;
            }
            __asm
            {
              vmovaps xmm2, xmm7
              vmovss  xmm6, [rsp+210h+var_1C4]
              vmovss  xmm8, [rsp+210h+var_1D0]
              vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vandps  xmm0, xmm13, xmm9
              vcomiss xmm0, [rsp+210h+var_1C0]
              vcomiss xmm2, [rsp+210h+var_1BC]
            }
            if ( (bfx::AreaHandle::GetAreaUsageFlags(&results.m_endArea) & 0x80000000) != 0 || results.m_collideEdgeIndex >= 0 || (bfx::AreaHandle::GetAreaUsageFlags(&startingArea) & 0x80000000) != 0 )
            {
              Nav_GetSpaceUp(_RBX->m_pSpace, &outUp);
              __asm
              {
                vmulss  xmm3, xmm6, dword ptr [rbp+110h+outUp]
                vmulss  xmm2, xmm8, dword ptr [rbp+110h+outUp+4]
                vaddss  xmm4, xmm3, xmm2
                vmulss  xmm1, xmm13, dword ptr [rbp+110h+outUp+8]
                vaddss  xmm3, xmm4, xmm1
                vandps  xmm2, xmm3, xmm9
                vcomiss xmm2, cs:__real@3a83126f
              }
              if ( !v83 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcomiss xmm3, xmm0
                }
                if ( !(v83 | v84) )
                {
                  v92 = 1;
                  goto LABEL_25;
                }
                v93 = 2;
LABEL_26:
                bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
                bfx::AreaHandle::~AreaHandle(&results.m_endArea);
                goto LABEL_28;
              }
LABEL_24:
              v92 = 0;
LABEL_25:
              v93 = v92;
              goto LABEL_26;
            }
          }
          bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
          bfx::AreaHandle::~AreaHandle(&results.m_endArea);
          __asm
          {
            vmovss  xmm12, dword ptr [rbp+110h+outPoint+8]
            vmovss  xmm11, dword ptr [rbp+110h+outPoint+4]
            vmovss  xmm10, dword ptr [rbp+110h+outPoint]
          }
        }
        __asm
        {
          vaddss  xmm14, xmm14, xmm7
          vmovaps xmm6, xmm10
          vmovaps xmm8, xmm11
          vmovaps xmm9, xmm12
        }
        bfx::AreaHandle::operator=(&startingArea, &_RBX->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        ++v45;
        ++v41;
        _R12 += 12;
        __asm
        {
          vmovaps xmm7, xmm6
          vmovaps xmm12, xmm11
          vmovaps xmm13, xmm9
        }
        v46 = (unsigned int)m_CurPathPoint <= _RBX->m_Path.m_NumPoints;
        if ( (int)m_CurPathPoint >= _RBX->m_Path.m_NumPoints )
          break;
        __asm { vmovss  xmm10, [rsp+210h+var_1CC] }
      }
    }
    v93 = 0;
LABEL_28:
    bfx::AreaHandle::~AreaHandle(&startingArea);
    result = v93;
  }
  else
  {
    result = 0i64;
  }
  _R11 = &v119;
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
  return result;
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

bool __fastcall AINavigator2D::GetStairsWithinDist_OLD(AINavigator2D *this, double checkDist)
{
  bool v15; 
  __int64 m_CurPathPoint; 
  bool v24; 
  char v51; 
  bool v55; 
  bfx::ProbeSpec probeSpec; 
  bfx::Vector3 dir; 
  bfx::Vector3 iStartPos; 
  bfx::AreaHandle result; 
  bfx::ProbeResults results; 
  bfx::AreaHandle startingArea; 
  __int64 v73; 
  vec3_t outPoint; 
  bfx::PathSpec pathSpec; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  v73 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
    vmovaps xmm15, xmm1
  }
  _RBX = this;
  if ( this->m_Path.m_NumPoints > 0 )
  {
    if ( bfx::AreaHandle::IsValid(&this->m_hCurArea) && (bfx::AreaHandle::GetAreaUsageFlags(&_RBX->m_hCurArea) & 0x80000000) != 0 )
    {
      v15 = 1;
    }
    else
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
      bfx::AreaHandle::AreaHandle(&startingArea, &_RBX->m_hCurArea);
      __asm
      {
        vmovss  xmm11, dword ptr [rbx+30h]
        vmovss  xmm12, dword ptr [rbx+34h]
        vmovss  xmm13, dword ptr [rbx+38h]
      }
      m_CurPathPoint = _RBX->m_CurPathPoint;
      if ( (int)m_CurPathPoint < _RBX->m_Path.m_NumPoints )
      {
        __asm
        {
          vmovaps xmm7, xmm11
          vmovaps xmm10, xmm12
          vmovaps xmm14, xmm13
        }
        v24 = __CFSHL__(3 * m_CurPathPoint, 4) || 48 * m_CurPathPoint == 0;
        _RSI = &_RBX->m_Path.m_Points[m_CurPathPoint].m_Flags;
        do
        {
          __asm { vcomiss xmm6, xmm15 }
          if ( !v24 )
            break;
          nav_path_t::GetPathPoint(&_RBX->m_Path, m_CurPathPoint, &outPoint);
          __asm
          {
            vmovss  xmm8, dword ptr [rbp+0E0h+outPoint]
            vsubss  xmm5, xmm8, xmm7
            vmovss  xmm9, dword ptr [rbp+0E0h+outPoint+4]
            vsubss  xmm4, xmm9, xmm10
            vmovss  xmm10, dword ptr [rbp+0E0h+outPoint+8]
            vsubss  xmm3, xmm10, xmm14
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm0, xmm5, xmm5
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm7, xmm2, xmm2
            vcmpless xmm0, xmm7, cs:__real@80000000
            vmovss  xmm2, cs:__real@3f800000
            vblendvps xmm1, xmm7, xmm2, xmm0
            vmovss  [rsp+1E0h+var_1A0.m_probeType], xmm1
            vdivss  xmm0, xmm2, xmm1
            vmulss  xmm2, xmm0, xmm5
            vmulss  xmm1, xmm0, xmm4
            vmulss  xmm5, xmm0, xmm3
          }
          if ( (_DWORD)m_CurPathPoint != _RBX->m_CurPathPoint )
            __asm { vmovss  xmm7, dword ptr [rsi+8] }
          if ( (*(_BYTE *)_RSI & 0x10) != 0 )
          {
            __asm
            {
              vmovss  [rsp+1E0h+iStartPos.m_x], xmm11
              vmovss  [rsp+1E0h+iStartPos.m_y], xmm12
              vmovss  [rsp+1E0h+iStartPos.m_z], xmm13
              vmovss  [rsp+1E0h+dir.m_x], xmm2
              vmovss  [rsp+1E0h+dir.m_y], xmm1
              vmovss  [rsp+1E0h+dir.m_z], xmm5
            }
            probeSpec.m_probeType = NAVPROBE_TYPE_HORIZONTAL;
            __asm
            {
              vmovups ymm2, ymmword ptr [rbx+4F4h]
              vmovups ymmword ptr [rbp+0E0h+var_100.m_obstacleMode], ymm2
              vmovups ymm0, ymmword ptr [rbx+514h]
              vmovups ymmword ptr [rbp+0E0h+var_100.m_maxSearchDist], ymm0
              vmovups xmm1, xmmword ptr [rbx+534h]
              vmovups xmmword ptr [rbp+0E0h+var_100.m_penaltyTable.m_perFlagPenalties+18h], xmm1
              vpextrd rax, xmm2, 2
            }
            pathSpec.m_areaUsageFlags = _RAX & 0x7FFFFFFF;
            bfx::AreaHandle::AreaHandle(&results.m_endArea);
            results.m_collided = 0;
            results.m_collideEdgeIndex = -1;
            results.m_generatePath = 0;
            bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
            __asm { vmovaps xmm3, xmm7; dist }
            bfx::NavProbe(&startingArea, &iStartPos, &dir, *(float *)&_XMM3, &pathSpec, &probeSpec, &results);
            __asm
            {
              vaddss  xmm1, xmm6, [rbp+0E0h+var_168.m_distTravelled]
              vcomiss xmm1, xmm15
            }
            if ( !v51 )
            {
              v55 = 0;
              goto LABEL_27;
            }
            if ( bfx::AreaHandle::IsValid(&results.m_endArea) )
            {
              if ( (bfx::AreaHandle::GetAreaUsageFlags(&results.m_endArea) & 0x80000000) != 0 )
              {
                v55 = 1;
                goto LABEL_27;
              }
              if ( results.m_collideEdgeIndex >= 0 )
              {
                bfx::AreaHandle::GetAdjacentArea(&results.m_endArea, &result, results.m_collideEdgeIndex);
                if ( bfx::AreaHandle::IsValid(&result) && (bfx::AreaHandle::GetAreaUsageFlags(&result) & 0x80000000) != 0 )
                {
                  v55 = 1;
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
            __asm
            {
              vmovss  xmm10, dword ptr [rbp+0E0h+outPoint+8]
              vmovss  xmm9, dword ptr [rbp+0E0h+outPoint+4]
              vmovss  xmm8, dword ptr [rbp+0E0h+outPoint]
            }
          }
          __asm
          {
            vaddss  xmm6, xmm6, xmm7
            vmovaps xmm11, xmm8
            vmovaps xmm12, xmm9
            vmovaps xmm13, xmm10
          }
          bfx::AreaHandle::operator=(&startingArea, &_RBX->m_Path.m_Points[(int)m_CurPathPoint].m_hArea);
          LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
          _RSI += 12;
          __asm
          {
            vmovaps xmm7, xmm8
            vmovaps xmm10, xmm9
            vmovaps xmm14, xmm13
          }
          v24 = (unsigned int)m_CurPathPoint <= _RBX->m_Path.m_NumPoints;
        }
        while ( (int)m_CurPathPoint < _RBX->m_Path.m_NumPoints );
      }
      v55 = 0;
LABEL_22:
      bfx::AreaHandle::~AreaHandle(&startingArea);
      v15 = v55;
    }
  }
  else
  {
    v15 = 0;
  }
  _R11 = &vars0;
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
  return v15;
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

char __fastcall AINavigator2D::HasTraversalWithin(AINavigator2D *this, double checkDist)
{
  __int64 m_NumPoints; 
  __int64 m_CurPathPoint; 
  __int64 v9; 
  char result; 

  m_NumPoints = this->m_Path.m_NumPoints;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm5, xmm1
  }
  if ( (int)m_NumPoints <= 0 )
    goto LABEL_7;
  m_CurPathPoint = this->m_CurPathPoint;
  v9 = this->m_Path.m_NumPoints;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+54h]
    vmovss  xmm1, dword ptr [rcx+58h]
    vmovss  xmm3, dword ptr [rcx+5Ch]
    vxorps  xmm4, xmm4, xmm4
  }
  if ( m_CurPathPoint >= m_NumPoints )
  {
LABEL_7:
    result = 0;
    __asm
    {
      vmovaps xmm6, [rsp+38h+var_18]
      vmovaps xmm7, [rsp+38h+var_28]
      vmovaps xmm8, [rsp+38h+var_38]
    }
  }
  else
  {
    _RCX = &this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2];
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rcx-8]
        vmovss  xmm7, dword ptr [rcx-4]
        vmovss  xmm8, dword ptr [rcx]
        vsubss  xmm2, xmm0, xmm6
        vsubss  xmm0, xmm1, xmm7
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vsubss  xmm3, xmm3, xmm8
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vaddss  xmm4, xmm4, xmm0
      }
      if ( ((_BYTE)_RCX[1] & 2) != 0 )
        break;
      __asm { vcomiss xmm4, xmm5 }
      if ( ((_BYTE)_RCX[1] & 2) == 0 )
      {
        ++m_CurPathPoint;
        _RCX += 12;
        __asm
        {
          vmovaps xmm0, xmm6
          vmovaps xmm1, xmm7
          vmovaps xmm3, xmm8
        }
        if ( m_CurPathPoint < v9 )
          continue;
      }
      goto LABEL_7;
    }
    __asm
    {
      vmovaps xmm6, [rsp+38h+var_18]
      vmovaps xmm7, [rsp+38h+var_28]
      vmovaps xmm8, [rsp+38h+var_38]
      vcomiss xmm5, xmm4
    }
    return 1;
  }
  return result;
}

/*
==============
AINavigator2D::IncreaseLinkWeightsForPath
==============
*/
void AINavigator2D::IncreaseLinkWeightsForPath(AINavigator2D *this)
{
  int v3; 
  __int64 v4; 
  const dvar_t *v5; 
  int integer; 
  __int64 v14; 
  __int64 v15; 
  bfx::LinkHandle phLink; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1537, ASSERT_TYPE_ASSERT, "(m_Path.Exists())", (const char *)&queryFormat, "m_Path.Exists()") )
    __debugbreak();
  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1538, ASSERT_TYPE_ASSERT, "(m_pEnt)", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  v3 = 0;
  if ( this->m_Path.m_NumPoints > 0 )
  {
    v4 = 0i64;
    do
    {
      if ( (this->m_Path.m_Points[v4].m_Flags & 2) != 0 )
      {
        bfx::LinkHandle::LinkHandle(&phLink);
        if ( (unsigned int)v3 >= this->m_Path.m_NumPoints )
        {
          LODWORD(v15) = this->m_Path.m_NumPoints;
          LODWORD(v14) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( Nav_GetLinkByID(this->m_Path.m_Points[v4].m_LinkID, &phLink) )
        {
          v5 = DVARINT_ai_linkWeightTime;
          if ( !DVARINT_ai_linkWeightTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_linkWeightTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v5);
          integer = v5->current.integer;
          _RDI = DVARFLT_ai_linkWeightPerUserMax;
          if ( !DVARFLT_ai_linkWeightPerUserMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_linkWeightPerUserMax") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vmovss  xmm6, dword ptr [rdi+28h] }
          _RDI = DVARFLT_ai_linkWeightPerUserMin;
          if ( !DVARFLT_ai_linkWeightPerUserMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_linkWeightPerUserMin") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vmovaps xmm1, xmm6; max
            vmovss  xmm0, dword ptr [rdi+28h]; min
          }
          *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vmovaps xmm2, xmm0; weight }
          Nav_ModifyLinkWeightForTime(this->m_pEnt->s.number, &phLink, *(float *)&_XMM2, integer);
        }
        bfx::LinkHandle::~LinkHandle(&phLink);
      }
      ++v3;
      ++v4;
    }
    while ( v3 < this->m_Path.m_NumPoints );
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
}

/*
==============
AINavigator2D::IsApproachingPlayerObstacle
==============
*/

bool __fastcall AINavigator2D::IsApproachingPlayerObstacle(AINavigator2D *this, double maxDistance)
{
  __int64 m_CurPathPoint; 
  __int64 m_NumPoints; 
  bool result; 

  m_CurPathPoint = this->m_CurPathPoint;
  m_NumPoints = this->m_Path.m_NumPoints;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps [rsp+48h+var_38], xmm8
    vmovaps [rsp+48h+var_48], xmm9
    vmovss  xmm0, dword ptr [rcx+54h]
    vmovss  xmm3, dword ptr [rcx+58h]
    vmovss  xmm7, dword ptr [rcx+5Ch]
    vmovaps xmm9, xmm1
    vxorps  xmm8, xmm8, xmm8
  }
  if ( m_CurPathPoint >= m_NumPoints )
  {
LABEL_6:
    result = 0;
  }
  else
  {
    _RCX = &this->m_Path.m_Points[m_CurPathPoint].m_LocalPos.v[2];
    while ( ((_DWORD)_RCX[1] & 0x800) == 0 )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rcx-8]
        vmovss  xmm5, dword ptr [rcx-4]
        vmovss  xmm6, dword ptr [rcx]
        vsubss  xmm2, xmm4, xmm0
        vsubss  xmm0, xmm5, xmm3
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vsubss  xmm3, xmm6, xmm7
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vaddss  xmm8, xmm8, xmm0
        vcomiss xmm8, xmm9
      }
      if ( ((_DWORD)_RCX[1] & 0x800) == 0 )
      {
        ++m_CurPathPoint;
        _RCX += 12;
        __asm
        {
          vmovaps xmm0, xmm4
          vmovaps xmm3, xmm5
          vmovaps xmm7, xmm6
        }
        if ( m_CurPathPoint < m_NumPoints )
          continue;
      }
      goto LABEL_6;
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovaps xmm8, [rsp+48h+var_38]
    vmovaps xmm9, [rsp+48h+var_48]
  }
  return result;
}

/*
==============
AINavigator2D::IsApproachingTightQuarters
==============
*/

bool __fastcall AINavigator2D::IsApproachingTightQuarters(AINavigator2D *this, double maxDistance)
{
  __int64 m_NumPoints; 
  __int64 m_CurPathPoint; 
  __int64 v28; 
  int v33; 
  bool result; 

  m_NumPoints = this->m_Path.m_NumPoints;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps [rsp+68h+var_58], xmm10
    vmovaps [rsp+68h+var_68], xmm11
  }
  if ( (int)m_NumPoints <= 0 )
    goto LABEL_9;
  m_CurPathPoint = this->m_CurPathPoint;
  __asm
  {
    vmovss  xmm2, cs:__real@7f7fffff
    vxorps  xmm0, xmm0, xmm0
    vcmpless xmm3, xmm1, xmm0
    vblendvps xmm11, xmm1, xmm2, xmm3
  }
  _RDX = 6 * m_CurPathPoint;
  __asm
  {
    vmovss  xmm9, dword ptr [rcx+rdx*8+0CCh]
    vsubss  xmm0, xmm9, dword ptr [rcx+58h]
    vmovss  xmm8, dword ptr [rcx+rdx*8+0C8h]
    vsubss  xmm2, xmm8, dword ptr [rcx+54h]
    vmovss  xmm10, dword ptr [rcx+rdx*8+0D0h]
    vsubss  xmm3, xmm10, dword ptr [rcx+5Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcomiss xmm4, xmm11
  }
  if ( !__CFADD__(3 * m_CurPathPoint, 3 * m_CurPathPoint) && 6 * m_CurPathPoint != 0 )
    goto LABEL_9;
  v28 = (int)m_CurPathPoint + 1;
  if ( v28 < m_NumPoints )
  {
    _RCX = &this->m_Path.m_Points[v28].m_LocalPos.v[2];
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rcx-4]
        vmovss  xmm5, dword ptr [rcx-8]
        vmovss  xmm7, dword ptr [rcx]
      }
      v33 = *((_DWORD *)_RCX + 1);
      __asm
      {
        vsubss  xmm0, xmm6, xmm9
        vmulss  xmm1, xmm0, xmm0
        vsubss  xmm2, xmm5, xmm8
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vsubss  xmm3, xmm7, xmm10
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vaddss  xmm4, xmm4, xmm0
      }
      if ( (v33 & 0x40) != 0 || (v33 & 0x100) != 0 )
        break;
      __asm { vcomiss xmm4, xmm11 }
      if ( (v33 & 0x100) != 0 )
      {
        ++v28;
        _RCX += 12;
        __asm
        {
          vmovaps xmm8, xmm5
          vmovaps xmm9, xmm6
          vmovaps xmm10, xmm7
        }
        if ( v28 < m_NumPoints )
          continue;
      }
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
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm10, [rsp+68h+var_58]
    vmovaps xmm11, [rsp+68h+var_68]
  }
  return result;
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

bool __fastcall AINavigator2D::IsGoalPosWithin(AINavigator2D *this, double radius)
{
  char v10; 
  char v25; 
  bool result; 
  vec3_t outUp; 
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
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  AINavigator::GetUpVector(this, &outUp);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vsubss  xmm4, xmm0, dword ptr [rbx+54h]
    vmovss  xmm2, dword ptr [rbx+4Ch]
    vmovss  xmm0, dword ptr [rbx+50h]
    vsubss  xmm8, xmm0, dword ptr [rbx+5Ch]
    vsubss  xmm7, xmm2, dword ptr [rbx+58h]
    vmovss  xmm9, dword ptr [rsp+98h+outUp+4]
    vmovss  xmm5, dword ptr [rsp+98h+outUp]
    vmovss  xmm10, dword ptr [rsp+98h+outUp+8]
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm1, xmm7, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm10
    vaddss  xmm0, xmm2, xmm1
    vcomiss xmm0, cs:__real@40c00000
  }
  if ( v10 | v25 )
  {
    __asm
    {
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm5, xmm3
      vaddss  xmm5, xmm0, xmm4
      vmulss  xmm1, xmm9, xmm3
      vmulss  xmm0, xmm10, xmm3
      vaddss  xmm2, xmm1, xmm7
      vaddss  xmm4, xmm0, xmm8
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm1, xmm6, xmm6
      vcomiss xmm1, xmm4
    }
    result = !v10;
  }
  else
  {
    result = 0;
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
    vmovaps xmm10, [rsp+98h+var_58]
  }
  return result;
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
  bool v6; 
  bfx::AreaHandle pOutArea; 
  __int64 v8; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t outClosestPos; 

  v8 = -2i64;
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
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0E8h+var_78.m_pathSharingPenalty], xmm0
      vmovss  [rsp+0E8h+var_78.m_maxPathSharingPenalty], xmm0
      vmovss  [rsp+0E8h+var_78.m_maxSearchDist], xmm0
    }
    bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
    pPathSpec.m_snapMode = SNAP_CLOSEST;
    Nav_GetSpaceUp(this->m_pSpace, &outUp);
    pPathSpec.m_obstacleBlockageFlags = 0;
    Nav_GetClosestVerticalPosWithHint(&this->m_pEnt->r.currentOrigin, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &pPathSpec, &outClosestPos, hHintArea, &pOutArea);
    if ( !bfx::AreaHandle::IsValid(&pOutArea) )
      goto LABEL_6;
    if ( bfx::AreaHandle::operator==(&pOutArea, hHintArea) )
      v6 = 0;
    else
LABEL_6:
      v6 = !bfx::AreaHandle::IsUsable(&pOutArea, &this->m_BasePathSpec);
    bfx::AreaHandle::~AreaHandle(&pOutArea);
    return v6;
  }
  return result;
}

/*
==============
AINavigator2D::IsInOrApproachingTightQuarters
==============
*/

bool __fastcall AINavigator2D::IsInOrApproachingTightQuarters(AINavigator2D *this, double maxDistance)
{
  __int64 m_NumPoints; 
  bool result; 
  __int64 m_CurPathPoint; 
  __int64 v31; 
  int v36; 

  m_NumPoints = this->m_Path.m_NumPoints;
  _R8 = this;
  __asm { vmovaps xmm3, xmm1 }
  if ( (int)m_NumPoints <= 0 )
    return 0;
  if ( (this->m_Path.m_Points[this->m_CurPathPoint].m_Flags & 0x140) != 0 )
    return 1;
  if ( (int)m_NumPoints <= 0 )
    return 0;
  m_CurPathPoint = this->m_CurPathPoint;
  __asm
  {
    vmovss  xmm1, cs:__real@7f7fffff
    vmovaps [rsp+68h+var_38], xmm8
    vxorps  xmm0, xmm0, xmm0
    vcmpless xmm2, xmm3, xmm0
    vmovaps [rsp+68h+var_48], xmm9
  }
  _RCX = 6 * m_CurPathPoint;
  __asm
  {
    vmovaps [rsp+68h+var_58], xmm10
    vmovaps [rsp+68h+var_68], xmm11
    vblendvps xmm11, xmm3, xmm1, xmm2
    vmovss  xmm9, dword ptr [r8+rcx*8+0CCh]
    vsubss  xmm0, xmm9, dword ptr [r8+58h]
    vmovss  xmm8, dword ptr [r8+rcx*8+0C8h]
    vsubss  xmm2, xmm8, dword ptr [r8+54h]
    vmovss  xmm10, dword ptr [r8+rcx*8+0D0h]
    vsubss  xmm3, xmm10, dword ptr [r8+5Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcomiss xmm4, xmm11
  }
  if ( __CFADD__(3 * m_CurPathPoint, 3 * m_CurPathPoint) || 6 * m_CurPathPoint == 0 )
  {
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    v31 = (int)m_CurPathPoint + 1;
    __asm { vmovaps [rsp+68h+var_28], xmm7 }
    if ( v31 >= m_NumPoints )
    {
LABEL_14:
      result = 0;
    }
    else
    {
      _RCX = (__int64)&_R8->m_Path.m_Points[v31].m_LocalPos.z;
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rcx-4]
          vmovss  xmm5, dword ptr [rcx-8]
          vmovss  xmm7, dword ptr [rcx]
        }
        v36 = *(_DWORD *)(_RCX + 4);
        __asm
        {
          vsubss  xmm0, xmm6, xmm9
          vmulss  xmm1, xmm0, xmm0
          vsubss  xmm2, xmm5, xmm8
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vsubss  xmm3, xmm7, xmm10
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vaddss  xmm4, xmm4, xmm0
        }
        if ( (v36 & 0x40) != 0 || (v36 & 0x100) != 0 )
          break;
        __asm { vcomiss xmm4, xmm11 }
        if ( (v36 & 0x100) != 0 )
        {
          ++v31;
          _RCX += 48i64;
          __asm
          {
            vmovaps xmm8, xmm5
            vmovaps xmm9, xmm6
            vmovaps xmm10, xmm7
          }
          if ( v31 < m_NumPoints )
            continue;
        }
        goto LABEL_14;
      }
      result = 1;
    }
    __asm
    {
      vmovaps xmm7, [rsp+68h+var_28]
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
  else
  {
    result = 0;
  }
  __asm
  {
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm10, [rsp+68h+var_58]
    vmovaps xmm11, [rsp+68h+var_68]
  }
  return result;
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

bool __fastcall AINavigator2D::IsPathDistToGoalAtLeast(AINavigator2D *this, double dist)
{
  bool result; 
  __int64 m_CurPathPoint; 
  signed __int64 m_NumPoints; 
  int v32; 
  unsigned __int64 v33; 
  bool v34; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( this->m_Path.m_NumPoints <= 0 )
    goto LABEL_9;
  if ( AINavigator::ShouldPathOutOfBounds(this) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vsubss  xmm2, xmm1, dword ptr [rax+4]
      vsubss  xmm4, xmm0, dword ptr [rax]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcomiss xmm2, xmm7
    }
    result = !__CFADD__(_RBX->m_pEnt, 304i64);
    __asm
    {
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm7, [rsp+48h+var_28]
    }
    return result;
  }
  m_CurPathPoint = _RBX->m_CurPathPoint;
  _RCX = 6 * m_CurPathPoint;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rcx*8+0C8h]
    vsubss  xmm3, xmm0, dword ptr [rbx+54h]
    vmovss  xmm1, dword ptr [rbx+rcx*8+0CCh]
    vsubss  xmm2, xmm1, dword ptr [rbx+58h]
    vmovss  xmm0, dword ptr [rbx+rcx*8+0D0h]
    vsubss  xmm4, xmm0, dword ptr [rbx+5Ch]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
    vcomiss xmm6, xmm7
  }
  if ( !__CFADD__(3 * m_CurPathPoint, 3 * m_CurPathPoint) )
    goto LABEL_10;
  m_NumPoints = _RBX->m_Path.m_NumPoints;
  v32 = m_CurPathPoint + 1;
  v33 = v32;
  if ( v32 >= m_NumPoints )
  {
LABEL_9:
    result = 0;
    __asm
    {
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm7, [rsp+48h+var_28]
    }
    return result;
  }
  v34 = __CFSHL__(3i64 * v32, 4);
  _RCX = (__int64)&_RBX->m_ReevalPathTask.pPrev + 48 * v32 + 4;
  __asm { vmovss  xmm1, dword ptr [rcx] }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vsubss  xmm3, xmm0, dword ptr [rcx-4]
      vmovss  xmm0, dword ptr [rcx+34h]
      vmovss  xmm5, dword ptr [rcx+30h]
      vsubss  xmm4, xmm0, dword ptr [rcx+4]
      vsubss  xmm1, xmm5, xmm1
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vaddss  xmm6, xmm6, xmm1
      vcomiss xmm6, xmm7
    }
    if ( !v34 )
      break;
    ++v33;
    _RCX += 48i64;
    __asm { vmovaps xmm1, xmm5 }
    v34 = v33 < m_NumPoints;
    if ( (__int64)v33 >= m_NumPoints )
      goto LABEL_9;
  }
LABEL_10:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  result = 1;
  __asm { vmovaps xmm7, [rsp+48h+var_28] }
  return result;
}

/*
==============
AINavigator2D::IsPathDistToGoalOrLinkAtLeast
==============
*/

bool __fastcall AINavigator2D::IsPathDistToGoalOrLinkAtLeast(AINavigator2D *this, double dist)
{
  bool result; 
  __int64 m_CurPathPoint; 
  __int64 v29; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( this->m_Path.m_NumPoints <= 0 )
    goto LABEL_8;
  if ( AINavigator::ShouldPathOutOfBounds(this) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vsubss  xmm2, xmm1, dword ptr [rax+4]
      vsubss  xmm4, xmm0, dword ptr [rax]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcomiss xmm2, xmm6
    }
    result = !__CFADD__(_RBX->m_pEnt, 304i64);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return result;
  }
  m_CurPathPoint = _RBX->m_CurPathPoint;
  _RCX = 6 * m_CurPathPoint;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rcx*8+0C8h]
    vsubss  xmm3, xmm0, dword ptr [rbx+54h]
    vmovss  xmm1, dword ptr [rbx+rcx*8+0CCh]
    vsubss  xmm2, xmm1, dword ptr [rbx+58h]
    vmovss  xmm0, dword ptr [rbx+rcx*8+0D0h]
    vsubss  xmm4, xmm0, dword ptr [rbx+5Ch]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm5, xmm2, xmm2
    vcomiss xmm5, xmm6
  }
  if ( !__CFADD__(3 * m_CurPathPoint, 3 * m_CurPathPoint) )
    goto LABEL_9;
  v29 = (int)m_CurPathPoint + 1;
  if ( v29 >= _RBX->m_Path.m_NumPoints || (_RCX = (__int64)&_RBX->m_ReevalPathTask.pPrev + 48 * v29 + 4, (*(_BYTE *)(&_RBX->m_MaxDeviationFromPath + 12 * v29) & 2) != 0) )
  {
LABEL_8:
    result = 0;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return result;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vsubss  xmm3, xmm0, dword ptr [rcx-4]
    vmovss  xmm1, dword ptr [rcx+30h]
    vsubss  xmm2, xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+34h]
    vsubss  xmm4, xmm0, dword ptr [rcx+4]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vaddss  xmm5, xmm5, xmm1
    vcomiss xmm5, xmm6
  }
LABEL_9:
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  return 1;
}

/*
==============
AINavigator2D::IsPathLengthAtLeast
==============
*/

char __fastcall AINavigator2D::IsPathLengthAtLeast(AINavigator2D *this, double dist)
{
  char result; 

  __asm
  {
    vmovaps [rsp+18h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( this->m_Path.m_NumPoints <= 0 )
  {
    result = 0;
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0C8h]
      vsubss  xmm5, xmm0, dword ptr [rcx+60h]
      vmovss  xmm2, dword ptr [rcx+0CCh]
      vsubss  xmm3, xmm2, dword ptr [rcx+64h]
      vmovss  xmm0, dword ptr [rcx+0D0h]
      vsubss  xmm4, xmm0, dword ptr [rcx+68h]
      vmulss  xmm2, xmm3, xmm3
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm5, xmm2, xmm2
      vcomiss xmm5, xmm6
      vmovaps xmm6, [rsp+18h+var_18]
    }
    return 1;
  }
  return result;
}

/*
==============
AINavigator2D::IsPointVisibleOnPath
==============
*/

bool __fastcall AINavigator2D::IsPointVisibleOnPath(AINavigator2D *this, const vec3_t *pathStartPos, const vec3_t *point, double ignoreDistance)
{
  int m_NumPoints; 
  int v9; 
  const tacpoint_t *ClosestPoint; 
  char v23; 
  char v24; 
  const tacpoint_t *v25; 
  bool result; 
  vec3_t outPoint; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  m_NumPoints = this->m_Path.m_NumPoints;
  _RSI = pathStartPos;
  __asm { vmovaps xmm6, xmm3 }
  v9 = 0;
  ClosestPoint = TacGraph_FindClosestPoint(point);
  if ( m_NumPoints <= 0 )
  {
LABEL_5:
    result = 0;
  }
  else
  {
    while ( 1 )
    {
      nav_path_t::GetPathPoint(&this->m_Path, v9, &outPoint);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm3, xmm0, dword ptr [rsp+68h+outPoint]
        vmovss  xmm1, dword ptr [rsi+4]
        vsubss  xmm2, xmm1, dword ptr [rsp+68h+outPoint+4]
        vmovss  xmm0, dword ptr [rsi+8]
        vsubss  xmm4, xmm0, dword ptr [rsp+68h+outPoint+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcomiss xmm1, xmm6
      }
      if ( !(v23 | v24) )
      {
        v25 = TacGraph_FindClosestPoint(&outPoint);
        if ( TacVisGraph_HasVis(ClosestPoint, v25) )
          break;
      }
      if ( ++v9 >= m_NumPoints )
        goto LABEL_5;
    }
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
AINavigator2D::IsPosReachable
==============
*/
_BOOL8 AINavigator2D::IsPosReachable(AINavigator2D *this, const vec3_t *goalPos)
{
  bool IsAreaReachableFromArea; 
  float pPathSpec; 
  bfx::AreaHandle areaB; 
  __int64 v10; 
  vec3_t outUp; 
  vec3_t point; 

  v10 = -2i64;
  bfx::AreaHandle::AreaHandle(&areaB);
  AINavigator::GetUpVector(this, &outUp);
  if ( !Nav_GetClosestVerticalPos(goalPos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &this->m_BasePathSpec, &point, &areaB) )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, cs:__real@42900000
    vmovss  dword ptr [rsp+88h+pPathSpec], xmm0
    vmovss  xmm3, cs:__real@41400000; radius
  }
  if ( Nav_PointWithinCylinderWithUp(&point, goalPos, &outUp, *(float *)&_XMM3, pPathSpec) )
    IsAreaReachableFromArea = bfx::IsAreaReachableFromArea(&this->m_hCurArea, &areaB, &this->m_BasePathSpec);
  else
LABEL_4:
    IsAreaReachableFromArea = 0;
  bfx::AreaHandle::~AreaHandle(&areaB);
  return IsAreaReachableFromArea;
}

/*
==============
AINavigator2D::IsPosUsable
==============
*/
_BOOL8 AINavigator2D::IsPosUsable(AINavigator2D *this, const vec3_t *pos)
{
  bool v6; 
  bfx::AreaHandle pOutArea; 
  __int64 v9; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t outClosestPos; 

  v9 = -2i64;
  bfx::AreaHandle::AreaHandle(&pOutArea);
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0E8h+var_78.m_pathSharingPenalty], xmm0
    vmovss  [rsp+0E8h+var_78.m_maxPathSharingPenalty], xmm0
    vmovss  [rsp+0E8h+var_78.m_maxSearchDist], xmm0
  }
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  Nav_GetSpaceUp(this->m_pSpace, &outUp);
  pPathSpec.m_obstacleBlockageFlags = 0;
  Nav_GetClosestVerticalPos(pos, &outUp, this->m_Layer, &this->m_pSpace->hSpace, &pPathSpec, &outClosestPos, &pOutArea);
  v6 = bfx::AreaHandle::IsValid(&pOutArea) && bfx::AreaHandle::IsUsable(&pOutArea, &this->m_BasePathSpec);
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  return v6;
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
  bool v19; 
  nav_space_s *spaceHandle; 
  AINavLayer layer; 
  bool v58; 
  bool v60; 
  bool v62; 
  char v64; 
  bool result; 
  float v75; 
  float v76; 
  vec3_t vec; 
  vec3_t centerPoint; 
  vec3_t v79; 
  vec4_t quat; 
  vec3_t angles; 
  bfx::PathSpec pathSpec; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm6, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [r8+4]
    vsubss  xmm5, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm4, xmm0, dword ptr [rdx+8]
  }
  v19 = !this->m_bPathRequested;
  _RAX = 1268i64;
  spaceHandle = this->m_pSpace;
  layer = this->m_Layer;
  _RBP = outRemainingLength;
  __asm
  {
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm13, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm12, xmm2, xmm2
    vcmpless xmm0, xmm12, cs:__real@80000000
    vblendvps xmm0, xmm12, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm8, xmm6, xmm2
    vmulss  xmm5, xmm5, xmm2
    vmulss  xmm4, xmm4, xmm2
    vmulss  xmm2, xmm8, cs:__real@c1c80000
    vmovss  dword ptr [rsp+168h+vec+4], xmm5
    vminss  xmm11, xmm13, xmm12
    vmulss  xmm3, xmm11, cs:__real@3f000000
    vmulss  xmm1, xmm5, xmm3
    vaddss  xmm7, xmm1, dword ptr [rdx+4]
    vmulss  xmm5, xmm5, cs:__real@41c80000
    vmulss  xmm0, xmm8, xmm3
    vaddss  xmm6, xmm0, dword ptr [rdx]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm3, xmm0, dword ptr [rdx+8]
    vaddss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rsp+168h+var_108+4], xmm0
    vaddss  xmm1, xmm5, xmm6
    vsubss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rsp+168h+var_108], xmm1
    vmovss  dword ptr [rsp+168h+centerPoint+4], xmm0
    vsubss  xmm1, xmm6, xmm5
  }
  if ( v19 )
    _RAX = 1188i64;
  __asm
  {
    vmovss  dword ptr [rsp+168h+centerPoint], xmm1
    vmovss  dword ptr [rsp+168h+vec], xmm8
    vmovss  dword ptr [rsp+168h+vec+8], xmm4
    vmovups ymm0, ymmword ptr [rax+rcx]
    vmovups ymm1, ymmword ptr [rax+rcx+20h]
    vmovups ymmword ptr [rsp+168h+var_D8.m_obstacleMode], ymm0
    vmovups xmm0, xmmword ptr [rax+rcx+40h]
    vmovups xmmword ptr [rsp+168h+var_D8.m_penaltyTable.m_perFlagPenalties+18h], xmm0
    vmovss  dword ptr [rsp+168h+var_108+8], xmm3
    vmovss  dword ptr [rsp+168h+centerPoint+8], xmm3
    vmovups ymmword ptr [rsp+168h+var_D8.m_maxSearchDist], ymm1
  }
  vectoangles(&vec, &angles);
  AnglesToQuat(&angles, &quat);
  __asm
  {
    vmovss  xmm7, cs:__real@42c80000
    vmovss  xmm3, cs:__real@41f00000; width
    vmovaps xmm2, xmm11; length
    vmovss  [rsp+168h+var_148], xmm7
  }
  v58 = Nav_CheckBoxFit(&centerPoint, &quat, *(const float *)&_XMM2, *(const float *)&_XMM3, v75, layer, &pathSpec, &spaceHandle->hSpace);
  __asm { vmovss  xmm3, cs:__real@41f00000; width }
  v60 = v58;
  __asm
  {
    vmovss  [rsp+168h+var_148], xmm7
    vmovaps xmm2, xmm11; length
  }
  v62 = Nav_CheckBoxFit(&v79, &quat, *(const float *)&_XMM2, *(const float *)&_XMM3, v76, layer, &pathSpec, &spaceHandle->hSpace);
  __asm
  {
    vcomiss xmm13, xmm12
    vsubss  xmm1, xmm12, xmm13
  }
  *outFullyProcessed = !v64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmaxss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbp+0], xmm1
  }
  result = !v60 && !v62;
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-60h]
  }
  return result;
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
  __asm
  {
    vmovdqu xmm0, cs:__xmm@000007ff000007ff000007ff000007ff
    vmovdqu xmmword ptr cs:s_SuppressionObstacleReservations, xmm0
  }
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
  bool v10; 
  __int64 v11; 
  __int64 v15; 
  int j; 
  int v20; 
  int v21; 
  int k; 
  int v23; 
  bfx::AreaHandle *p_m_hArea; 
  __int64 v25; 
  int v26; 
  int v27; 
  int m_NumPoints; 
  int v29; 
  __int64 v30; 
  int v31; 
  unsigned int *p_m_Flags; 
  int v33; 
  unsigned int *v34; 
  __int64 v35; 
  int i; 
  __int64 v37; 
  bfx::AreaHandle *v42; 
  __int64 v43; 
  int v44; 
  _DWORD *v45; 
  bool pbOutHasDoors; 
  int v47; 
  bfx::PolylinePathRCPtr result; 
  __int64 v49; 
  nav_pathfind_input_t pInput; 
  __int64 v51; 
  _OWORD ptr[62]; 
  vec3_t outPoint; 

  v51 = -2i64;
  v2 = iPointToPathTo;
  _RBX = this;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "RefindPathToPoint");
  if ( (unsigned int)v2 >= _RBX->m_Path.m_NumPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2147, ASSERT_TYPE_ASSERT, "(unsigned)( iPointToPathTo ) < (unsigned)( m_Path.m_NumPoints )", "iPointToPathTo doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", v2, _RBX->m_Path.m_NumPoints) )
    __debugbreak();
  if ( (_RBX->m_Path.m_Points[v2].m_Flags & 2) != 0 )
  {
    LODWORD(v2) = v2 + 1;
    if ( (int)v2 >= _RBX->m_Path.m_NumPoints )
    {
      _RBX->ClearPath(_RBX);
      Sys_ProfEndNamedEvent();
      return 0;
    }
  }
  nav_path_t::GetPathPoint(&_RBX->m_Path, v2, &outPoint);
  bfx::AreaHandle::AreaHandle(&pInput.m_hStartArea);
  bfx::AreaHandle::AreaHandle(&pInput.m_hGoalArea);
  pInput.m_pPathSpec = NULL;
  *(_WORD *)&pInput.m_bSnapPoints = 257;
  pInput.m_bModifyLinkWeights = 1;
  pInput.m_pStartPos = &_RBX->m_CurSnappedPos;
  bfx::AreaHandle::operator=(&pInput.m_hStartArea, &_RBX->m_hCurArea);
  pInput.m_pGoalPos = &outPoint;
  pInput.m_pPathSpec = &_RBX->m_PathSpecOfCurPath;
  AINavigator2D::FindPath(_RBX, &result, &pInput);
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
    *(_QWORD *)&ptr[61] = _RBX->m_pSpace;
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GeneratePath");
    AINavigator2D::ExtractCornersFromRawPath(_RBX, &result, (nav_path_t *)ptr, 20, &_RBX->m_PathSpecOfCurPath, &pbOutHasDoors);
    Sys_ProfEndNamedEvent();
    v8 = ptr[60];
    v9 = LODWORD(ptr[60]) - 1;
    v10 = LODWORD(ptr[60]) == 1;
    if ( LODWORD(ptr[60]) - 1 > 0 )
    {
      v11 = 0i64;
      _RAX = (char *)&ptr[3] + 4;
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax-4]
          vucomiss xmm0, dword ptr [rax-34h]
        }
        if ( v10 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vucomiss xmm0, dword ptr [rax-30h]
          }
          if ( v10 )
            break;
        }
        ++v11;
        _RAX += 48;
        v10 = v11 == v9;
        if ( v11 >= v9 )
          goto LABEL_18;
      }
      Nav_PrintPath("Path Points:", (const nav_path_t::pathpoint_t *)ptr, ptr[60]);
      v8 = ptr[60];
    }
LABEL_18:
    if ( (int)v2 < _RBX->m_Path.m_NumPoints - 1 )
    {
      HIDWORD(ptr[3 * v8 - 3]) &= ~1u;
      v8 = ptr[60];
    }
    v15 = (int)v2;
    v49 = (int)v2;
    HIDWORD(ptr[3 * v8 - 3]) |= _RBX->m_Path.m_Points[(int)v2].m_Flags & 0x402;
    __asm
    {
      vmovss  xmm0, [rbp+3E0h+var_6C]
      vmovss  dword ptr [rbx+48Ch], xmm0
      vmovss  xmm1, [rbp+3E0h+var_68]
      vmovss  dword ptr [rbx+490h], xmm1
      vmovss  xmm0, [rbp+3E0h+var_64]
      vmovss  dword ptr [rbx+494h], xmm0
    }
    if ( LODWORD(ptr[60]) - 1 > (int)v2 )
    {
      v27 = LODWORD(ptr[60]) - v2 - 1;
      v47 = v27;
      if ( v27 <= 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2215, ASSERT_TYPE_ASSERT, "( delta > 0 )", (const char *)&queryFormat, "delta > 0") )
          __debugbreak();
        v15 = v49;
      }
      m_NumPoints = _RBX->m_Path.m_NumPoints;
      v29 = m_NumPoints - 1;
      v30 = m_NumPoints - 1;
      if ( m_NumPoints > m_NumPoints - v27 )
      {
        v31 = v29 + v27;
        p_m_Flags = &_RBX->m_Path.m_Points[v29].m_Flags;
        while ( v31 < 20 || (*p_m_Flags & 0x401) != 1024 )
        {
          v30 = (unsigned int)(v30 - 1);
          --v31;
          p_m_Flags -= 12;
          if ( (int)v30 < m_NumPoints - v27 )
            goto LABEL_44;
        }
        ((void (__fastcall *)(AINavigator2D *, __int64))_RBX->ClearPath)(_RBX, v30);
        nav_path_t::Reset((nav_path_t *)ptr);
        Sys_ProfEndNamedEvent();
        v5 = 0;
        goto LABEL_76;
      }
LABEL_44:
      if ( v29 >= v15 )
      {
        v33 = v29 + v27;
        v34 = &_RBX->m_Path.m_Points[v29].m_Flags;
        v35 = v29 - v15 + 1;
        do
        {
          if ( v33 < 20 )
          {
            nav_path_t::CopyPathPoint(&_RBX->m_Path, &_RBX->m_Path.m_Points[v29], &_RBX->m_Path.m_Points[v33]);
          }
          else if ( (*v34 & 0x401) == 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2233, ASSERT_TYPE_ASSERT, "( !( m_Path.m_Points[iPt].m_Flags & NAVPP_FLAG_MULTIGOAL ) || m_Path.m_Points[ iPt ].m_Flags & NAVPP_FLAG_PATH_END )", (const char *)&queryFormat, "!( m_Path.m_Points[iPt].m_Flags & NAVPP_FLAG_MULTIGOAL ) || m_Path.m_Points[ iPt ].m_Flags & NAVPP_FLAG_PATH_END") )
          {
            __debugbreak();
          }
          --v29;
          --v33;
          v34 -= 12;
          --v35;
        }
        while ( v35 );
        v27 = v47;
      }
      for ( i = 0; i < SLODWORD(ptr[60]); ++i )
        nav_path_t::CopyPathPoint(&_RBX->m_Path, (const nav_path_t::pathpoint_t *)&ptr[3 * i], &_RBX->m_Path.m_Points[i]);
      v37 = LODWORD(ptr[60]) - 1;
      _RAX = 6 * v37;
      __asm
      {
        vmovss  xmm0, [rbp+3E0h+ptr]
        vucomiss xmm0, dword ptr [rbx+rax*8+0C8h]
      }
      if ( !(6 * v37) )
      {
        __asm
        {
          vmovss  xmm0, [rbp+3E0h+var_42C]
          vucomiss xmm0, dword ptr [rbx+rax*8+0CCh]
        }
        if ( !(6 * v37) )
        {
          __asm
          {
            vmovss  xmm0, [rbp+3E0h+var_428]
            vucomiss xmm0, dword ptr [rbx+rax*8+0D0h]
          }
          if ( !(6 * v37) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2243, ASSERT_TYPE_ASSERT, "(!Vec3Compare( m_Path.m_Points[ firstSubPathCorners.m_NumPoints - 1 ].m_LocalPos, firstSubPathCorners.m_Points[ 0 ].m_LocalPos ))", (const char *)&queryFormat, "!Vec3Compare( m_Path.m_Points[ firstSubPathCorners.m_NumPoints - 1 ].m_LocalPos, firstSubPathCorners.m_Points[ 0 ].m_LocalPos )") )
            __debugbreak();
        }
      }
      v26 = 20;
      if ( v27 + _RBX->m_Path.m_NumPoints < 20 )
        v26 = v27 + _RBX->m_Path.m_NumPoints;
      _RBX->m_Path.m_NumPoints = v26;
    }
    else
    {
      for ( j = 0; j < SLODWORD(ptr[60]); ++j )
        nav_path_t::CopyPathPoint(&_RBX->m_Path, (const nav_path_t::pathpoint_t *)&ptr[3 * j], &_RBX->m_Path.m_Points[j]);
      v20 = ptr[60];
      v21 = v2 + 1;
      if ( SLODWORD(ptr[60]) < (int)v2 + 1 )
      {
        for ( k = _RBX->m_Path.m_NumPoints; v21 < k; k = _RBX->m_Path.m_NumPoints )
          nav_path_t::CopyPathPoint(&_RBX->m_Path, &_RBX->m_Path.m_Points[v21++], &_RBX->m_Path.m_Points[v20++]);
        v23 = v20;
        if ( v20 < k )
        {
          do
            bfx::AreaHandle::Release(&_RBX->m_Path.m_Points[v23++].m_hArea);
          while ( v23 < _RBX->m_Path.m_NumPoints );
        }
        _RBX->m_Path.m_NumPoints = v20;
        if ( v20 < 20 )
        {
          p_m_hArea = &_RBX->m_Path.m_Points[v20].m_hArea;
          v25 = (unsigned int)(20 - v20);
          do
          {
            if ( bfx::AreaHandle::IsValid(p_m_hArea) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2208, ASSERT_TYPE_ASSERT, "(!m_Path.m_Points[iPoint].m_hArea.IsValid())", (const char *)&queryFormat, "!m_Path.m_Points[iPoint].m_hArea.IsValid()") )
              __debugbreak();
            p_m_hArea += 3;
            --v25;
          }
          while ( v25 );
        }
      }
      v26 = _RBX->m_Path.m_NumPoints;
    }
    if ( v26 < 20 )
    {
      v42 = &_RBX->m_Path.m_Points[v26].m_hArea;
      v43 = (unsigned int)(20 - v26);
      do
      {
        if ( bfx::AreaHandle::IsValid(v42) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2250, ASSERT_TYPE_ASSERT, "(!m_Path.m_Points[iPoint].m_hArea.IsValid())", (const char *)&queryFormat, "!m_Path.m_Points[iPoint].m_hArea.IsValid()") )
          __debugbreak();
        v42 += 3;
        --v43;
      }
      while ( v43 );
    }
    v44 = 0;
    if ( SLODWORD(ptr[60]) > 0 )
    {
      v45 = (_DWORD *)ptr + 3;
      do
      {
        bfx::AreaHandle::Release((bfx::AreaHandle *)&ptr[3 * v44 + 2]);
        v45[1] = -1;
        *v45 = 0;
        v45[3] = -1082130432;
        ++v44;
        v45 += 12;
      }
      while ( v44 < SLODWORD(ptr[60]) );
    }
    LODWORD(ptr[60]) = 0;
    if ( pbOutHasDoors )
      GScr_Notify(_RBX->m_pEnt, scr_const.path_has_door, 0);
    _RBX->m_CurPathPoint = 0;
    Sys_ProfEndNamedEvent();
    v5 = 1;
LABEL_76:
    `eh vector destructor iterator'(ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))nav_path_t::pathpoint_t::~pathpoint_t);
    goto LABEL_77;
  }
  _RBX->ClearPath(_RBX);
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
  __int64 v5; 
  gentity_s *v6; 
  __int64 v7; 
  __int64 v8; 
  nav_space_s *SpaceByEntNum; 
  bool v11; 
  int *m_SuppressionIDs; 
  __int64 v13; 
  const nav_space_s *m_pSpace; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *pOutArea; 
  unsigned __int8 p; 
  char v25[3]; 
  int entNum; 
  unsigned int v27; 
  AINavLayer planLayer; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t v31; 

  MemFile_ReadData(memFile, 1ui64, &p);
  MemFile_ReadData(memFile, 4ui64, &v27);
  v5 = (int)v27;
  if ( v27 >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4093, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v27, 2048) )
      __debugbreak();
    LODWORD(pOutArea) = 2048;
    LODWORD(outClosestPos) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClosestPos, pOutArea) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4094, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  v6 = &g_entities[v5];
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  MemFile_ReadData(memFile, 4ui64, &entNum);
  Nav_Create2DNavigator(v6, planLayer, index);
  v8 = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4101, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  _RDI = (AINavigator2D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 592i64))(v8);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4104, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  SpaceByEntNum = Nav_GetSpaceByEntNum(entNum);
  _RDI->SetSpace(_RDI, SpaceByEntNum);
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+30h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+34h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+38h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+54h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+58h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+5Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+18h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+1Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+20h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+40h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+44h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+24h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+28h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+2Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+48h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+4Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+50h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+60h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+64h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+68h], xmm0 }
  MemFile_ReadData(memFile, 0x50ui64, &_RDI->m_BasePathSpec);
  MemFile_ReadData(memFile, 0x50ui64, &_RDI->m_PathSpecOfCurPath);
  MemFile_ReadData(memFile, 4ui64, &entNum);
  _RDI->m_TimeOfLastPathUpdate = entNum;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  _RDI->m_TimeOfLastBlockage = entNum;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  _RDI->m_TimeOfLastPathFindFail = entNum;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  _RDI->m_TimeOfLastPathSuppressed = entNum;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+0A0h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+0A4h], xmm0 }
  MemFile_ReadData(memFile, 1ui64, v25);
  _RDI->m_bPathingOutOfBounds = v25[0];
  MemFile_ReadData(memFile, 4ui64, &entNum);
  _RDI->m_AllowedStances = entNum;
  MemFile_ReadData(memFile, 1ui64, v25);
  _RDI->m_bTeamWalkEnabled = v25[0];
  MemFile_ReadData(memFile, 1ui64, v25);
  v11 = p < 2u;
  _RDI->m_bAllowSkipMultigoalPoint = v25[0];
  if ( v11 )
  {
    _RDI->m_bPathReevalRequested = 0;
  }
  else
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    _RDI->m_bPathReevalRequested = p;
  }
  MemFile_ReadData(memFile, 4ui64, &entNum);
  if ( entNum >= 0 )
  {
    Nav_GetLinkByID(entNum, &_RDI->m_hLink);
    if ( !bfx::LinkHandle::IsValid(&_RDI->m_hLink) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4142, ASSERT_TYPE_ASSERT, "( pNav2D->m_hLink.IsValid() )", (const char *)&queryFormat, "pNav2D->m_hLink.IsValid()") )
      __debugbreak();
  }
  m_SuppressionIDs = (int *)_RDI->m_SuppressionIDs;
  v13 = 4i64;
  do
  {
    MemFile_ReadData(memFile, 4ui64, &entNum);
    *m_SuppressionIDs++ = entNum;
    --v13;
  }
  while ( v13 );
  MemFile_ReadData(memFile, 4ui64, &entNum);
  _RDI->m_SuppressionTimestamp = entNum;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RDI->m_bMultiGoalPath = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RDI->m_bPathRequested = p;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  _RDI->m_CurPathPoint = entNum;
  _RDI->m_ReevalPathTask.entNum = v5;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RDI->m_ReevalPathTask.status[0] = p;
  MemFile_ReadData(memFile, 4ui64, &entNum);
  m_pSpace = _RDI->m_pSpace;
  _RDI->m_ReevalPathTask.timestamp = entNum;
  Nav_GetSpaceUp(m_pSpace, &outUp);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+4A4h]
    vmovups ymmword ptr [rbp+57h+pPathSpec.m_obstacleMode], ymm0
    vmovups ymm1, ymmword ptr [rdi+4C4h]
    vmovups ymmword ptr [rbp+57h+pPathSpec.m_maxSearchDist], ymm1
    vmovups xmm0, xmmword ptr [rdi+4E4h]
    vmovups xmmword ptr [rbp+57h+pPathSpec.m_penaltyTable.m_perFlagPenalties+18h], xmm0
  }
  if ( _RDI->m_bPathRequested )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+4F4h]
      vmovups ymmword ptr [rbp+57h+pPathSpec.m_obstacleMode], ymm0
      vmovups ymm1, ymmword ptr [rdi+514h]
      vmovups ymmword ptr [rbp+57h+pPathSpec.m_maxSearchDist], ymm1
      vmovups xmm0, xmmword ptr [rdi+534h]
      vmovups xmmword ptr [rbp+57h+pPathSpec.m_penaltyTable.m_perFlagPenalties+18h], xmm0
    }
  }
  pPathSpec.m_obstacleBlockageFlags = 1;
  Nav_GetClosestVerticalPos(&_RDI->m_CurSnappedPos, &outUp, _RDI->m_Layer, &_RDI->m_pSpace->hSpace, &pPathSpec, &v31, &_RDI->m_hCurArea);
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( p )
    AINavigator2D::ReadPath(_RDI, memFile);
  else
    bfx::AreaHandle::operator=(&_RDI->m_hGoalArea, &_RDI->m_hCurArea);
  return _RDI;
}

/*
==============
AINavigator2D::ReadPath
==============
*/
void AINavigator2D::ReadPath(AINavigator2D *pNav, MemoryFile *memFile)
{
  int v10; 
  int v11; 
  int v13; 
  int m_NumPoints; 
  unsigned int *p_m_Flags; 
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
  __int64 v56; 
  bfx::AreaHandle result; 
  bfx::AreaHandle v58; 
  vec3_t outPoint; 
  vec3_t v60; 
  vec3_t v61; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  v56 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _R15 = pNav;
  nav_path_t::Reset(&pNav->m_Path);
  MemFile_ReadData(memFile, 4ui64, &p);
  v10 = p;
  _R15->m_Path.m_NumPoints = p;
  _R15->m_Path.m_pSpace = _R15->m_pSpace;
  if ( v10 <= 0 )
  {
    bfx::AreaHandle::operator=(&_R15->m_hGoalArea, &_R15->m_hCurArea);
  }
  else
  {
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r15+48Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r15+490h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r15+494h], xmm0 }
    v11 = 0;
    if ( _R15->m_Path.m_NumPoints > 0 )
    {
      _RBX = &_R15->m_Path.m_Points[0].m_LocalPos.v[2];
      do
      {
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  dword ptr [rbx-8], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  dword ptr [rbx-4], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  dword ptr [rbx], xmm0 }
        MemFile_ReadData(memFile, 4ui64, &p);
        *((_DWORD *)_RBX + 1) = p;
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
        MemFile_ReadData(memFile, 4ui64, &probeSpec);
        *((bfx::ProbeSpec *)_RBX + 2) = probeSpec;
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  dword ptr [rbx+10h], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  dword ptr [rbx+14h], xmm0 }
        ++v11;
        _RBX += 12;
      }
      while ( v11 < _R15->m_Path.m_NumPoints );
    }
    bfx::SpaceHandle::SpaceHandle(&spaceHandle, &_R15->m_pSpace->hSpace);
    v13 = 0;
    m_NumPoints = _R15->m_Path.m_NumPoints;
    if ( m_NumPoints > 0 )
    {
      p_m_Flags = &_R15->m_Path.m_Points[0].m_Flags;
      __asm
      {
        vmovss  xmm8, cs:__real@80000000
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm9, cs:__real@40c00000
      }
      do
      {
        if ( !v13 || (*(_BYTE *)p_m_Flags & 4) != 0 )
        {
          nav_path_t::GetPathPoint(&_R15->m_Path, v13, &v61);
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+90h+var_90]
            vmovsd  qword ptr [rsp+190h+pos.m_x], xmm0
          }
          pos.m_z = v61.v[2];
          ClosestArea = bfx::GetClosestArea(&v58, &spaceHandle, &pos, _R15->m_Layer, &_R15->m_PathSpecOfCurPath);
          bfx::AreaHandle::operator=(&_R15->m_Path.m_Points[v13].m_hArea, ClosestArea);
          bfx::AreaHandle::~AreaHandle(&v58);
        }
        else
        {
          nav_path_t::GetPathPoint(&_R15->m_Path, v13, &outPoint);
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+90h+outPoint]
            vmovsd  qword ptr [rsp+190h+iStartPos.m_x], xmm0
          }
          iStartPos.m_z = outPoint.v[2];
          nav_path_t::GetPathPoint(&_R15->m_Path, v13 - 1, &v60);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+90h+outPoint]
            vsubss  xmm6, xmm0, dword ptr [rbp+90h+var_A0]
            vmovss  xmm1, dword ptr [rbp+90h+outPoint+4]
            vsubss  xmm5, xmm1, dword ptr [rbp+90h+var_A0+4]
            vmovss  xmm0, dword ptr [rbp+90h+outPoint+8]
            vsubss  xmm4, xmm0, dword ptr [rbp+90h+var_A0+8]
            vmulss  xmm2, xmm5, xmm5
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcmpless xmm0, xmm1, xmm8
            vblendvps xmm1, xmm1, xmm7, xmm0
            vmovss  [rsp+190h+var_150.m_probeType], xmm1
            vdivss  xmm0, xmm7, xmm1
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm0, xmm5
            vmulss  xmm3, xmm0, xmm4
            vmovss  [rsp+190h+dir.m_x], xmm1
            vmovss  [rsp+190h+dir.m_y], xmm2
            vmovss  [rsp+190h+dir.m_z], xmm3
          }
          probeSpec.m_probeType = NAVPROBE_TYPE_FULL3D;
          bfx::AreaHandle::AreaHandle(&results.m_endArea);
          results.m_collided = 0;
          results.m_collideEdgeIndex = -1;
          results.m_generatePath = 0;
          bfx::PolylinePathRCPtr::PolylinePathRCPtr(&results.m_path);
          results.m_generatePath = 1;
          __asm { vmovaps xmm3, xmm9; dist }
          bfx::NavProbe(&spaceHandle, &iStartPos, &dir, *(float *)&_XMM3, _R15->m_Layer, &_R15->m_PathSpecOfCurPath, &probeSpec, &results);
          if ( bfx::PolylinePathRCPtr::GetSegmentType(&results.m_path, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4460, ASSERT_TYPE_ASSERT, "(results.m_path.GetSegmentType( 0 ) == bfx::SURFACE_SEGMENT)", (const char *)&queryFormat, "results.m_path.GetSegmentType( 0 ) == bfx::SURFACE_SEGMENT") )
            __debugbreak();
          SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(&results.m_path, 0);
          if ( !SurfaceSegment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4462, ASSERT_TYPE_ASSERT, "(pSegment)", (const char *)&queryFormat, "pSegment") )
            __debugbreak();
          Area = bfx::SurfaceSegment::GetArea(SurfaceSegment, &result);
          bfx::AreaHandle::operator=(&_R15->m_Path.m_Points[v13].m_hArea, Area);
          bfx::AreaHandle::~AreaHandle(&result);
          bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&results.m_path);
          bfx::AreaHandle::~AreaHandle(&results.m_endArea);
        }
        ++v13;
        p_m_Flags += 12;
        m_NumPoints = _R15->m_Path.m_NumPoints;
      }
      while ( v13 < m_NumPoints );
    }
    bfx::AreaHandle::operator=(&_R15->m_hGoalArea, (const bfx::AreaHandle *)&_R15->m_hLink.m_pSpace + 3 * m_NumPoints);
    bfx::SpaceHandle::~SpaceHandle(&spaceHandle);
  }
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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

void __fastcall AINavigator2D::SetCornerCurrentAngle(AINavigator2D *this, int cornerIndex, double currentAngle)
{
  __int64 v5; 
  int m_NumPoints; 
  int v12; 

  _RDI = this;
  v5 = cornerIndex;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( (unsigned int)cornerIndex >= this->m_Path.m_NumPoints )
  {
    m_NumPoints = this->m_Path.m_NumPoints;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4373, ASSERT_TYPE_ASSERT, "(unsigned)( cornerIndex ) < (unsigned)( m_Path.m_NumPoints )", "cornerIndex doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", cornerIndex, m_NumPoints) )
      __debugbreak();
  }
  __asm { vmovss  [rsp+58h+arg_8], xmm6 }
  if ( (v12 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4374, ASSERT_TYPE_ASSERT, "( !IS_NAN( currentAngle ) )", (const char *)&queryFormat, "!IS_NAN( currentAngle )") )
    __debugbreak();
  _RCX = 6 * v5;
  __asm
  {
    vmovss  dword ptr [rdi+rcx*8+0E0h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
AINavigator2D::SetCurPos
==============
*/
void AINavigator2D::SetCurPos(AINavigator2D *this, const vec3_t *curPos)
{
  __int64 m_CurPathPoint; 
  __int64 v12; 
  __int64 v13; 
  unsigned int m_Flags; 
  int v15; 
  char v48; 
  char v49; 
  bool v59; 
  bool MultiGoalPath; 
  int m_NumPoints; 
  __int64 v68; 
  int v69; 
  __int64 v70; 
  unsigned int *p_m_Flags; 
  int v72; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *hHintArea; 
  bfx::LinkHandle phLink; 
  bfx::AreaHandle hNewArea; 
  bfx::AreaHandle v84; 
  __int64 v85; 
  vec3_t v86; 
  vec3_t worldPos; 
  vec3_t outPoint; 
  vec3_t outLocalPos; 
  vec3_t outUp; 
  vec3_t goalPos; 
  bfx::PathSpec pPathSpec; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  v85 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _R15 = curPos;
  _RDI = this;
  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 265, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  AINavigator::GetUpVector(_RDI, &outUp);
  bfx::AreaHandle::AreaHandle(&hNewArea);
  if ( bfx::LinkHandle::IsValid(&_RDI->m_hLink) && _RDI->m_Path.m_NumPoints > 0 )
  {
    bfx::LinkHandle::LinkHandle(&phLink);
    m_CurPathPoint = _RDI->m_CurPathPoint;
    if ( (unsigned int)m_CurPathPoint >= _RDI->m_Path.m_NumPoints )
    {
      LODWORD(outClosestPos) = _RDI->m_CurPathPoint;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", outClosestPos, _RDI->m_Path.m_NumPoints) )
        __debugbreak();
    }
    if ( Nav_GetLinkByID(_RDI->m_Path.m_Points[m_CurPathPoint].m_LinkID, &phLink) && bfx::LinkHandle::operator==(&phLink, &_RDI->m_hLink) )
    {
      v12 = _RDI->m_CurPathPoint;
      v13 = v12;
      m_Flags = _RDI->m_Path.m_Points[v12].m_Flags;
      if ( (m_Flags & 2) != 0 )
      {
        v15 = v12 + 1;
        if ( (unsigned int)(v12 + 1) >= _RDI->m_Path.m_NumPoints )
        {
          LODWORD(hHintArea) = _RDI->m_Path.m_NumPoints;
          LODWORD(outClosestPos) = v12 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( iLinkEnd ) < (unsigned)( m_Path.m_NumPoints )", "iLinkEnd doesn't index m_Path.m_NumPoints\n\t%i not in [0, %i)", outClosestPos, hHintArea) )
            __debugbreak();
        }
        _RBX = 2 * (3 * v13 + 3);
        if ( (*(_BYTE *)(&_RDI->m_Path.m_Points[0].m_Flags + 2 * _RBX) & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 286, ASSERT_TYPE_ASSERT, "(m_Path.m_Points[ iLinkEnd ].m_Flags & NAVPP_FLAG_LINK_END)", (const char *)&queryFormat, "m_Path.m_Points[ iLinkEnd ].m_Flags & NAVPP_FLAG_LINK_END") )
          __debugbreak();
        nav_path_t::GetPathPoint(&_RDI->m_Path, _RDI->m_CurPathPoint, &outPoint);
        nav_path_t::GetPathPoint(&_RDI->m_Path, v15, &v86);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0C0h+var_140]
          vsubss  xmm11, xmm0, dword ptr [rbp+0C0h+outPoint]
          vmovss  xmm1, dword ptr [rbp+0C0h+var_140+4]
          vsubss  xmm9, xmm1, dword ptr [rbp+0C0h+outPoint+4]
          vmovss  xmm0, dword ptr [rbp+0C0h+var_140+8]
          vsubss  xmm10, xmm0, dword ptr [rbp+0C0h+outPoint+8]
          vmovss  xmm1, dword ptr [r15]
          vsubss  xmm8, xmm1, dword ptr [rbp+0C0h+outPoint]
          vmovss  xmm0, dword ptr [r15+4]
          vsubss  xmm4, xmm0, dword ptr [rbp+0C0h+outPoint+4]
          vmovss  xmm1, dword ptr [r15+8]
          vsubss  xmm7, xmm1, dword ptr [rbp+0C0h+outPoint+8]
          vmulss  xmm2, xmm9, xmm9
          vmulss  xmm0, xmm11, xmm11
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm10, xmm10
          vaddss  xmm2, xmm3, xmm1
          vsqrtss xmm6, xmm2, xmm2
          vcmpless xmm0, xmm6, cs:__real@80000000
          vmovss  xmm2, cs:__real@3f800000
          vblendvps xmm1, xmm6, xmm2, xmm0
          vdivss  xmm5, xmm2, xmm1
          vmulss  xmm0, xmm9, xmm5
          vmulss  xmm3, xmm0, xmm4
          vmulss  xmm1, xmm11, xmm5
          vmulss  xmm2, xmm1, xmm8
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm0, xmm10, xmm5
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm3, xmm4, xmm1
          vmulss  xmm2, xmm6, cs:__real@3f000000
          vcomiss xmm3, xmm2
        }
        if ( !(v48 | v49) )
        {
          bfx::AreaHandle::operator=(&_RDI->m_hCurArea, (const bfx::AreaHandle *)((char *)&_RDI->m_Path.m_Points[0].m_hArea + 8 * _RBX));
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0C0h+var_140]
            vmovss  dword ptr [rdi+30h], xmm0
            vmovss  xmm1, dword ptr [rbp+0C0h+var_140+4]
            vmovss  dword ptr [rdi+34h], xmm1
            vmovss  xmm0, dword ptr [rbp+0C0h+var_140+8]
            vmovss  dword ptr [rdi+38h], xmm0
          }
          _RDI->m_LocalCurSnappedPos.v[0] = _RDI->m_Path.m_Points[0].m_LocalPos.v[2 * _RBX];
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+rbx*8+0CCh]
            vmovss  dword ptr [rdi+58h], xmm0
            vmovss  xmm1, dword ptr [rdi+rbx*8+0D0h]
            vmovss  dword ptr [rdi+5Ch], xmm1
          }
          ++_RDI->m_CurPathPoint;
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
  bfx::AreaHandle::AreaHandle(&v84);
  if ( !bfx::LinkHandle::IsValid(&_RDI->m_hLink) )
    bfx::AreaHandle::operator=(&v84, &_RDI->m_hCurArea);
  _RAX = 1268i64;
  if ( !_RDI->m_bPathRequested )
    _RAX = 1188i64;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rdi]
    vmovups ymmword ptr [rbp+0C0h+pPathSpec.m_obstacleMode], ymm0
    vmovups ymm1, ymmword ptr [rax+rdi+20h]
    vmovups ymmword ptr [rbp+0C0h+pPathSpec.m_maxSearchDist], ymm1
    vmovups xmm0, xmmword ptr [rax+rdi+40h]
    vmovups xmmword ptr [rbp+0C0h+pPathSpec.m_penaltyTable.m_perFlagPenalties+18h], xmm0
  }
  pPathSpec.m_obstacleBlockageFlags = 1;
  Nav_GetClosestVerticalPosWithHint(_R15, &outUp, _RDI->m_Layer, &_RDI->m_pSpace->hSpace, &pPathSpec, &worldPos, &v84, &hNewArea);
  AINavigator::LocalizePosToSpace(_RDI, &worldPos, &outLocalPos);
  v59 = 0;
  AINavigator2D::FixUpGoalAreaIfNecessary(_RDI);
  if ( _RDI->m_bPathRequested )
    v59 = _RDI->m_Path.m_NumPoints <= 0 || !AINavigator2D::UpdateCurSegment(_RDI, &worldPos, &hNewArea);
  _RDI->GetRequestedGoalPos(_RDI, &goalPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0C0h+outLocalPos]
    vmovss  dword ptr [rdi+54h], xmm0
    vmovss  xmm1, dword ptr [rbp+0C0h+outLocalPos+4]
    vmovss  dword ptr [rdi+58h], xmm1
    vmovss  xmm0, dword ptr [rbp+0C0h+outLocalPos+8]
    vmovss  dword ptr [rdi+5Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+0C0h+worldPos]
    vmovss  dword ptr [rdi+30h], xmm1
    vmovss  xmm0, dword ptr [rbp+0C0h+worldPos+4]
    vmovss  dword ptr [rdi+34h], xmm0
    vmovss  xmm1, dword ptr [rbp+0C0h+worldPos+8]
    vmovss  dword ptr [rdi+38h], xmm1
  }
  bfx::AreaHandle::operator=(&_RDI->m_hCurArea, &hNewArea);
  _RDI->m_AllowedStances = AINavigator2D::GetAllowedStances(_RDI, &_RDI->m_hCurArea);
  if ( v59 )
  {
    if ( _RDI->m_bMultiGoalPath && _RDI->HasPath(_RDI) )
    {
      MultiGoalPath = AINavigator2D::ReFindMultiGoalPath(_RDI, 1);
    }
    else
    {
      m_NumPoints = _RDI->m_Path.m_NumPoints;
      if ( m_NumPoints <= 0 )
        goto LABEL_47;
      v68 = _RDI->m_CurPathPoint;
      v69 = _RDI->m_CurPathPoint;
      v70 = v68;
      if ( v68 >= m_NumPoints )
        goto LABEL_44;
      p_m_Flags = &_RDI->m_Path.m_Points[v68].m_Flags;
      while ( (*(_BYTE *)p_m_Flags & 2) == 0 )
      {
        ++v69;
        ++v70;
        p_m_Flags += 12;
        if ( v70 >= m_NumPoints )
          goto LABEL_44;
      }
      if ( v69 >= 0 )
      {
LABEL_47:
        MultiGoalPath = _RDI->DoPathFind(_RDI);
      }
      else
      {
LABEL_44:
        v72 = m_NumPoints - 1;
        if ( (int)v68 + 3 < m_NumPoints - 1 )
          v72 = v68 + 3;
        MultiGoalPath = AINavigator2D::ReFindPathToPoint(_RDI, v72);
      }
    }
    if ( !MultiGoalPath )
    {
      AINavigator::BadPathNotify(_RDI, &goalPos);
      _RDI->m_TimeOfLastPathFindFail = level.time;
    }
  }
  else
  {
    _RDI->UpdatePathOutOfBounds(_RDI);
  }
  if ( _RDI->m_bPathReevalRequested && !bfx::LinkHandle::IsValid(&_RDI->m_hLink) && _RDI->m_ReevalPathTask.status[0] != 1 )
  {
    AIScheduler::AddReevalPathTask(&_RDI->m_ReevalPathTask);
    _RDI->m_bPathReevalRequested = 0;
  }
  bfx::AreaHandle::~AreaHandle(&v84);
LABEL_56:
  bfx::AreaHandle::~AreaHandle(&hNewArea);
  _R11 = &v93;
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
AINavigator2D::SetGoalPos
==============
*/
char AINavigator2D::SetGoalPos(AINavigator2D *this, const vec3_t *goalPos)
{
  bool v7; 
  AINavigator_vtbl *v8; 
  bool v9; 

  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 400, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  if ( this->HasPath(this) )
  {
    __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
    if ( VecNCompareCustomEpsilon(goalPos->v, this->m_RequestedGoalPos.v, *(float *)&_XMM2, 3) )
      return 1;
  }
  AINavigator::LocalizePosToSpace(this, goalPos, &this->m_LocalRequestedGoalPos);
  AINavigator::WorldifyPosFromSpace(this, &this->m_LocalRequestedGoalPos, &this->m_RequestedGoalPos);
  AINavigator2D::FixUpStartAreaIfNecessary(this);
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  v7 = VecNCompareCustomEpsilon(this->m_CurSnappedPos.v, this->m_RequestedGoalPos.v, *(float *)&_XMM2, 3);
  v8 = this->__vftable;
  if ( v7 )
  {
    v8->ClearPath(this);
    return 1;
  }
  else
  {
    v9 = v8->DoPathFind(this);
    if ( !v9 )
    {
      AINavigator::BadPathNotify(this, goalPos);
      this->m_TimeOfLastPathFindFail = level.time;
    }
    this->m_bPathRequested = v9;
    return v9;
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
  __int64 v12; 
  __int64 v13; 
  bfx::LinkHandle phLink; 
  bfx::LinkDat result; 

  _RDI = this;
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
          if ( (unsigned int)m_CurPathPoint >= _RDI->m_Path.m_NumPoints )
          {
            LODWORD(v13) = _RDI->m_Path.m_NumPoints;
            LODWORD(v12) = m_CurPathPoint;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4221, ASSERT_TYPE_ASSERT, "(unsigned)( iPoint ) < (unsigned)( m_NumPoints )", "iPoint doesn't index m_NumPoints\n\t%i not in [0, %i)", v12, v13) )
              __debugbreak();
          }
          if ( Nav_GetLinkByID(*(int *)((char *)&_RDI->m_Path.m_Points[0].m_LinkID + (_QWORD)p_m_Flags + v7), &phLink) )
          {
            bfx::LinkHandle::GetLinkDat(&phLink, &result);
            m_forwardLinkUsageFlags = result.m_forwardLinkUsageFlags;
            if ( (*(_BYTE *)p_m_Flags & 8) != 0 )
              m_forwardLinkUsageFlags = result.m_backwardLinkUsageFlags;
            if ( (m_forwardLinkUsageFlags & flags) == 0 )
            {
              Nav_ClearLinkWeightsForEnt(_RDI->m_pEnt->s.number);
              nav_path_t::Reset(&_RDI->m_Path);
              __asm
              {
                vmovups ymm0, ymmword ptr [rdi+4A4h]
                vmovups ymmword ptr [rdi+4F4h], ymm0
                vmovups ymm1, ymmword ptr [rdi+4C4h]
                vmovups ymmword ptr [rdi+514h], ymm1
                vmovups xmm0, xmmword ptr [rdi+4E4h]
                vmovups xmmword ptr [rdi+534h], xmm0
              }
              bfx::LinkHandle::~LinkHandle(&phLink);
              return;
            }
          }
          bfx::LinkHandle::~LinkHandle(&phLink);
        }
        LODWORD(m_CurPathPoint) = m_CurPathPoint + 1;
        p_m_Flags += 12;
      }
      while ( (int)m_CurPathPoint < _RDI->m_Path.m_NumPoints );
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
  const dvar_t *v10; 
  const vec3_t *m_pGoalPos; 
  bfx::Color color; 
  bool pbOutHasDoors; 

  _RBX = this;
  if ( !bfx::PolylinePathRCPtr::IsValid((bfx::PolylinePathRCPtr *)path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1490, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1491, ASSERT_TYPE_ASSERT, "( pInput )", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  if ( _RBX->m_ReevalPathTask.status[0] == 1 )
    AIScheduler::RemoveReevalPathTask(&_RBX->m_ReevalPathTask);
  _RAX = pInput->m_pPathSpec;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+4F4h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+514h], ymm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbx+534h], xmm0
  }
  _RBX->m_TimeOfLastPathUpdate = level.time;
  if ( bfx::AreaHandle::IsValid(&pInput->m_hStartArea) && !bfx::AreaHandle::IsValid(&_RBX->m_hCurArea) )
    bfx::AreaHandle::operator=(&_RBX->m_hCurArea, &pInput->m_hStartArea);
  v10 = DCONST_DVARBOOL_ai_showBfxPath;
  if ( !DCONST_DVARBOOL_ai_showBfxPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showBfxPath") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rsp+68h+color.m_r], xmm0
    }
    bfx::PolylinePathRCPtr::Draw((bfx::PolylinePathRCPtr *)path, &color);
  }
  AINavigator2D::GeneratePath(_RBX, path, &_RBX->m_Path, &_RBX->m_PathSpecOfCurPath, &pbOutHasDoors);
  _RBX->m_CurPathPoint = 0;
  AINavigator::LocalizePosToSpace(_RBX, pInput->m_pStartPos, &_RBX->m_LocalSnappedPathStartPos);
  AINavigator::LocalizePosToSpace(_RBX, pInput->m_pGoalPos, &_RBX->m_LocalSnappedGoalPos);
  m_pGoalPos = pInput->m_pGoalPos;
  _RBX->m_SnappedGoalPos.v[0] = m_pGoalPos->v[0];
  _RBX->m_SnappedGoalPos.v[1] = m_pGoalPos->v[1];
  _RBX->m_SnappedGoalPos.v[2] = m_pGoalPos->v[2];
  bfx::AreaHandle::operator=(&_RBX->m_hGoalArea, (const bfx::AreaHandle *)&_RBX->m_hLink.m_pSpace + 3 * _RBX->m_Path.m_NumPoints);
  _RBX->m_bPathRequested = 1;
  *(_WORD *)&_RBX->m_bPathingOutOfBounds = 0;
  if ( pInput->m_bModifyLinkWeights )
    AINavigator2D::IncreaseLinkWeightsForPath(_RBX);
  if ( pbOutHasDoors )
    GScr_Notify(_RBX->m_pEnt, scr_const.path_has_door, 0);
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
  _RBX = pPlanes;
  _RDI = this;
  if ( !pPlanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2556, ASSERT_TYPE_ASSERT, "( pPlanes )", (const char *)&queryFormat, "pPlanes") )
    __debugbreak();
  if ( _RBX->iPlaneCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2557, ASSERT_TYPE_ASSERT, "( pPlanes->iPlaneCount <= 4 )", (const char *)&queryFormat, "pPlanes->iPlaneCount <= MAX_PATH_BLOCK_PLANES") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi+564h], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rdi+584h], xmm1
  }
  _RDI->m_BlockPlanes.iPlaneCount = _RBX->iPlaneCount;
}

/*
==============
AINavigator2D::ShouldRefreshSuppressionPlanes
==============
*/
bool AINavigator2D::ShouldRefreshSuppressionPlanes(AINavigator2D *this)
{
  __int64 iPlaneCount; 
  __int64 v4; 
  unsigned int *m_SuppressionIDs; 
  bool result; 
  int v8; 
  float *fDist; 
  __int64 v10; 
  unsigned int v12; 
  int v13; 
  nav_obstacle_s *ObstacleByID; 
  bool v15; 
  bool v16; 

  iPlaneCount = this->m_BlockPlanes.iPlaneCount;
  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  if ( !(_DWORD)iPlaneCount )
  {
    v4 = 0i64;
    m_SuppressionIDs = this->m_SuppressionIDs;
    while ( *m_SuppressionIDs == -1 )
    {
      ++v4;
      ++m_SuppressionIDs;
      if ( v4 >= 4 )
      {
        result = 0;
        goto LABEL_21;
      }
    }
    goto LABEL_20;
  }
  if ( LODWORD(this->m_BlockPlanes.fDist[iPlaneCount + 4]) == -1 )
  {
LABEL_20:
    result = 1;
    goto LABEL_21;
  }
  __asm { vmovss  xmm6, cs:__real@358637be }
  v8 = 0;
  fDist = this->m_BlockPlanes.fDist;
  v10 = 0i64;
  _R15 = &this->m_BlockPlanes;
  while ( 1 )
  {
    v12 = *((_DWORD *)fDist + 5);
    v13 = this->m_BlockPlanes.iPlaneCount;
    if ( v12 == -1 )
      break;
    if ( v8 >= v13 )
      goto LABEL_20;
    ObstacleByID = Nav_GetObstacleByID(v12);
    if ( !ObstacleByID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2589, ASSERT_TYPE_ASSERT, "( pObstacle )", (const char *)&queryFormat, "pObstacle") )
      __debugbreak();
    v15 = !ObstacleByID->m_bUsesExtents;
    if ( !ObstacleByID->m_bUsesExtents )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 2590, ASSERT_TYPE_ASSERT, "( pObstacle->m_bUsesExtents )", (const char *)&queryFormat, "pObstacle->m_bUsesExtents");
      v15 = !v16;
      if ( v16 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+4]
      vmovss  xmm1, dword ptr [r15]
      vmulss  xmm3, xmm0, dword ptr [rdi+20h]
      vmulss  xmm2, xmm1, dword ptr [rdi+1Ch]
      vaddss  xmm0, xmm3, xmm2
      vsubss  xmm3, xmm0, dword ptr [rsi]
      vmulss  xmm1, xmm3, xmm3
      vcomiss xmm1, xmm6
    }
    if ( !v15 )
      goto LABEL_20;
    ++v8;
    ++v10;
    ++fDist;
    _R15 = (PathBlockPlanes *)((char *)_R15 + 8);
    if ( v10 >= 4 )
    {
      result = 0;
      goto LABEL_21;
    }
  }
  result = v8 < v13;
LABEL_21:
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
  return result;
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
  __int64 result; 
  nav_probe_results_s pOutResults; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RBP = outHitPos;
  _RDI = endPos;
  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  LOBYTE(this) = Nav_Trace(this->m_pSpace, startPos, _RDI, this->m_Layer, &this->m_BasePathSpec, &pOutResults);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm5, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm6, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm7, xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm1, xmm2, xmm0
    vdivss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm4
    vmovss  xmm3, [rsp+0E8h+var_A8.m_DistTraveled]
    vmulss  xmm0, xmm0, xmm3
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rbp+0], xmm1
    vmulss  xmm2, xmm6, xmm4
    vmulss  xmm0, xmm2, xmm3
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+4], xmm1
    vmulss  xmm2, xmm7, xmm4
    vmulss  xmm0, xmm2, xmm3
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+8], xmm1
  }
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  result = (unsigned __int8)this;
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_38]
    vmovaps xmm7, [rsp+0E8h+var_48]
  }
  return result;
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
  int m_CurPathPoint; 
  int v21; 
  char v22; 
  char v36; 
  bool updated; 
  unsigned int m_Flags; 
  bool v45; 
  __int64 m_NumPoints; 
  int v52; 
  _BOOL8 result; 
  vec3_t outDir; 
  vec3_t outPoint; 
  bfx::PathSpec pPathSpec; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _RSI = newPos;
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_UpdateCurSegment");
  if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1740, ASSERT_TYPE_ASSERT, "( m_Path.Exists() )", (const char *)&queryFormat, "m_Path.Exists()", -2i64) )
    __debugbreak();
  if ( AINavigator::ShouldPathOutOfBounds(this) && this->IsNextCornerGoal(this) )
    goto LABEL_37;
  _RBP = &this->m_PathSpecOfCurPath;
  __asm
  {
    vmovups ymm2, ymmword ptr [rbp+0]
    vmovups ymmword ptr [rsp+158h+pPathSpec.m_obstacleMode], ymm2
    vmovups ymm0, ymmword ptr [rbp+20h]
    vmovups ymmword ptr [rsp+158h+pPathSpec.m_maxSearchDist], ymm0
    vmovups xmm1, xmmword ptr [rbp+40h]
    vmovups xmmword ptr [rsp+158h+pPathSpec.m_penaltyTable.m_perFlagPenalties+18h], xmm1
    vmovq   rax, xmm2
  }
  pPathSpec.m_obstacleBlockageFlags = HIDWORD(_RAX) | 0x2000;
  AINavigator2D::AdjustCornersForTeamWalking(this);
  if ( this->m_CurPathPoint >= this->m_Path.m_NumPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1750, ASSERT_TYPE_ASSERT, "( m_CurPathPoint < m_Path.m_NumPoints )", (const char *)&queryFormat, "m_CurPathPoint < m_Path.m_NumPoints") )
    __debugbreak();
  m_CurPathPoint = this->m_CurPathPoint;
  v21 = m_CurPathPoint + 1;
  nav_path_t::GetPathPoint(&this->m_Path, m_CurPathPoint, &outPoint);
  if ( v21 >= this->m_Path.m_NumPoints )
    goto LABEL_23;
  nav_path_t::GetDir(&this->m_Path, this->m_CurPathPoint, &outDir);
  __asm
  {
    vmovss  xmm8, dword ptr [rsi]
    vmovss  xmm9, dword ptr [rsp+158h+outPoint]
    vsubss  xmm5, xmm9, xmm8
    vmovss  xmm10, dword ptr [rsi+4]
    vmovss  xmm11, dword ptr [rsp+158h+outPoint+4]
    vsubss  xmm6, xmm11, xmm10
    vmovss  xmm0, dword ptr [rsp+158h+outPoint+8]
    vsubss  xmm7, xmm0, dword ptr [rsi+8]
    vmulss  xmm3, xmm6, dword ptr [rsp+158h+outDir+4]
    vmulss  xmm2, xmm5, dword ptr [rsp+158h+outDir]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm1, xmm7, dword ptr [rsp+158h+outDir+8]
    vaddss  xmm4, xmm3, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm4, xmm0
  }
  if ( !(v22 | v36) )
  {
    __asm { vcomiss xmm4, cs:__real@41900000 }
    if ( v22 )
    {
      if ( this->m_CurPathPoint > 0 )
      {
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vsubss  xmm2, xmm3, xmm0
          vcomiss xmm2, cs:__real@44dc8000
        }
        if ( this->m_CurPathPoint )
          goto LABEL_24;
      }
    }
    m_Flags = this->m_Path.m_Points[this->m_CurPathPoint].m_Flags;
    v45 = (m_Flags & 2) == 0;
    if ( (m_Flags & 2) == 0 )
    {
      if ( this->m_bAllowSkipMultigoalPoint && (m_Flags & 0x400) != 0 )
        goto LABEL_21;
      if ( (m_Flags & 0xC10) != 0 )
      {
        __asm
        {
          vsubss  xmm0, xmm8, xmm9
          vsubss  xmm1, xmm10, xmm11
          vmulss  xmm2, xmm0, xmm0
          vmulss  xmm0, xmm1, xmm1
          vaddss  xmm1, xmm2, xmm0
          vcomiss xmm1, cs:__real@43100000
        }
        v45 = 0;
      }
      if ( v45 )
      {
LABEL_21:
        nav_path_t::GetPathPoint(&this->m_Path, v21, &outDir);
        if ( Nav_IsStraightLineReachable(_RSI, hNewArea, &outDir, &this->m_Path.m_Points[v21].m_hArea, &pPathSpec) )
        {
          ++this->m_CurPathPoint;
LABEL_37:
          updated = 1;
          goto LABEL_38;
        }
      }
    }
LABEL_23:
    if ( Nav_IsStraightLineReachable(_RSI, hNewArea, &outPoint, &this->m_Path.m_Points[this->m_CurPathPoint].m_hArea, &this->m_PathSpecOfCurPath) )
    {
      m_NumPoints = this->m_Path.m_NumPoints;
      if ( (int)m_NumPoints > 0 && (*(_DWORD *)(&this->m_MaxDeviationFromPath + 12 * m_NumPoints) & 1) == 0 )
      {
        *(double *)&_XMM0 = ((double (__fastcall *)(AINavigator2D *))this->GetPathDistToGoal)(this);
        __asm { vcomiss xmm0, cs:__real@44098000 }
        if ( v22 )
        {
          v52 = this->m_CurPathPoint;
          if ( v52 > 0 || this->m_Path.m_NumPoints < 20 )
          {
            nav_path_t::TrimLeadingPathPoints(&this->m_Path, v52);
            this->m_CurPathPoint = 0;
            if ( this->m_Path.m_NumPoints <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 1838, ASSERT_TYPE_ASSERT, "(m_Path.m_NumPoints > 0)", (const char *)&queryFormat, "m_Path.m_NumPoints > 0") )
              __debugbreak();
            nav_path_t::GetPathPoint(&this->m_Path, this->m_Path.m_NumPoints - 1, &outDir);
            if ( !AINavigator2D::ExtendPath(this, &outDir, (const bfx::AreaHandle *)&this->m_hLink.m_pSpace + 3 * this->m_Path.m_NumPoints, &this->m_SnappedGoalPos) )
              AINavigator::BadPathNotify(this, &this->m_RequestedGoalPos);
          }
        }
      }
      goto LABEL_37;
    }
LABEL_24:
    updated = 0;
    goto LABEL_38;
  }
  ++this->m_CurPathPoint;
  updated = AINavigator2D::UpdateCurSegment(this, _RSI, hNewArea);
LABEL_38:
  Sys_ProfEndNamedEvent();
  result = updated;
  _R11 = &v64;
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
AINavigator2D::UpdateTightQuarters
==============
*/

void __fastcall AINavigator2D::UpdateTightQuarters(AINavigator2D *this, double updateDistance)
{
  int m_NumPoints; 
  __int64 m_CurPathPoint; 
  unsigned int v28; 
  int v43; 
  bool outFullyProcessed; 
  float outRemainingLength; 
  __int64 v70; 
  vec3_t startPoint; 
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps [rsp+108h+var_98], xmm13
    vmovaps [rsp+108h+var_A8], xmm14
    vmovaps xmm6, xmm1
  }
  _RDI = this;
  Sys_ProfBeginNamedEvent(0xFF808080, "UpdateTightQuarters");
  m_NumPoints = _RDI->m_Path.m_NumPoints;
  if ( m_NumPoints > 0 )
  {
    __asm
    {
      vxorps  xmm11, xmm11, xmm11
      vcmpless xmm1, xmm6, xmm11
      vmovss  xmm0, cs:__real@7f7fffff
      vblendvps xmm0, xmm6, xmm0, xmm1
      vmovss  [rsp+108h+var_D4], xmm0
      vxorps  xmm10, xmm10, xmm10
      vmovss  xmm9, dword ptr [rdi+54h]
      vmovss  dword ptr [rsp+108h+startPoint], xmm9
      vmovss  xmm7, dword ptr [rdi+58h]
      vmovss  dword ptr [rsp+108h+startPoint+4], xmm7
      vmovss  xmm8, dword ptr [rdi+5Ch]
      vmovss  dword ptr [rsp+108h+startPoint+8], xmm8
    }
    m_CurPathPoint = _RDI->m_CurPathPoint;
    if ( (int)m_CurPathPoint < m_NumPoints )
    {
      _RBX = &_RDI->m_Path.m_Points[m_CurPathPoint].m_Flags;
      __asm
      {
        vmovss  xmm14, cs:__real@42480000
        vmovss  xmm12, cs:__real@42c80000
        vmovss  xmm13, [rsp+108h+var_D4]
      }
      v28 = *_RBX;
      if ( (*_RBX & 0xC0) == 0 )
      {
        if ( (v28 & 0x300) == 0 )
          goto LABEL_6;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-0Ch]
          vsubss  xmm3, xmm0, dword ptr [rdi+54h]
          vmovss  xmm1, dword ptr [rbx-8]
          vsubss  xmm2, xmm1, dword ptr [rdi+58h]
          vmovss  xmm0, dword ptr [rbx-4]
          vsubss  xmm4, xmm0, dword ptr [rdi+5Ch]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vsubss  xmm3, xmm1, dword ptr [rbx+10h]
          vcomiss xmm3, xmm14
        }
        if ( (v28 & 0x300) == 0 )
        {
LABEL_6:
          outFullyProcessed = 0;
          __asm { vmovss  [rsp+108h+var_D4], xmm11 }
          *_RBX = v28 & 0xFFFFFCFF;
          __asm { vmovaps xmm3, xmm12; maxDistance }
          if ( AINavigator2D::IsTightPathSegment(_RDI, &startPoint, &_RDI->m_Path.m_Points[m_CurPathPoint].m_LocalPos, *(const float *)&_XMM3, &outFullyProcessed, &outRemainingLength) )
          {
            v43 = 256;
            if ( outFullyProcessed )
              v43 = 64;
          }
          else
          {
            v43 = 512;
            if ( outFullyProcessed )
              v43 = 128;
          }
          *_RBX |= v43;
          __asm
          {
            vmovss  xmm0, [rsp+108h+var_D4]
            vmovss  dword ptr [rbx+10h], xmm0
          }
        }
      }
      __asm
      {
        vmovss  xmm4, dword ptr [rbx-0Ch]
        vsubss  xmm2, xmm4, xmm9
        vmovss  xmm5, dword ptr [rbx-8]
        vsubss  xmm0, xmm5, xmm7
        vmovss  xmm6, dword ptr [rbx-4]
        vsubss  xmm3, xmm6, xmm8
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vaddss  xmm10, xmm10, xmm0
        vcomiss xmm10, xmm13
      }
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v74;
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
    vmovaps xmm14, [rsp+108h+var_A8]
  }
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
  int *m_SuppressionIDs; 
  __int64 v8; 
  int m_NumPoints; 
  unsigned __int32 p; 

  LOBYTE(p) = 2;
  _RSI = this;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( !_RSI->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_2d.cpp", 4026, ASSERT_TYPE_ASSERT, "( m_pEnt )", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  p = _RSI->m_pEnt->s.number;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RSI->m_Layer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RSI->m_pSpace->parentEntNum;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, &_RSI->m_CurSnappedPos);
  MemFile_WriteData(memFile, 0xCui64, &_RSI->m_LocalCurSnappedPos);
  MemFile_WriteData(memFile, 0xCui64, &_RSI->m_RequestedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &_RSI->m_LocalRequestedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &_RSI->m_SnappedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &_RSI->m_LocalSnappedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &_RSI->m_LocalSnappedPathStartPos);
  MemFile_WriteData(memFile, 0x50ui64, &_RSI->m_BasePathSpec);
  MemFile_WriteData(memFile, 0x50ui64, &_RSI->m_PathSpecOfCurPath);
  p = _RSI->m_TimeOfLastPathUpdate;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RSI->m_TimeOfLastBlockage;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RSI->m_TimeOfLastPathFindFail;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RSI->m_TimeOfLastPathSuppressed;
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rsi+0A0h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rsi+0A4h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  LOBYTE(p) = _RSI->m_bPathingOutOfBounds;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = _RSI->m_AllowedStances;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = _RSI->m_bTeamWalkEnabled;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RSI->m_bAllowSkipMultigoalPoint;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RSI->m_bPathReevalRequested;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( bfx::LinkHandle::IsValid(&_RSI->m_hLink) )
    LinkID = Nav_GetLinkID(&_RSI->m_hLink);
  else
    LinkID = -1;
  p = LinkID;
  MemFile_WriteData(memFile, 4ui64, &p);
  m_SuppressionIDs = (int *)_RSI->m_SuppressionIDs;
  v8 = 4i64;
  do
  {
    p = *m_SuppressionIDs;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++m_SuppressionIDs;
    --v8;
  }
  while ( v8 );
  p = _RSI->m_SuppressionTimestamp;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = _RSI->m_bMultiGoalPath;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RSI->m_bPathRequested;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = _RSI->m_CurPathPoint;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = _RSI->m_ReevalPathTask.status[0];
  MemFile_WriteData(memFile, 1ui64, &p);
  p = _RSI->m_ReevalPathTask.timestamp;
  MemFile_WriteData(memFile, 4ui64, &p);
  m_NumPoints = _RSI->m_Path.m_NumPoints;
  LOBYTE(p) = m_NumPoints > 0;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( m_NumPoints > 0 )
  {
    p = _RSI->m_Path.m_NumPoints;
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( _RSI->m_Path.m_NumPoints > 0 )
    {
      MemFile_WriteData(memFile, 0xCui64, &_RSI->m_Path.m_LocalStartPoint);
      if ( _RSI->m_Path.m_NumPoints > 0 )
      {
        _RBX = &_RSI->m_Path.m_Points[0].m_Length;
        do
        {
          MemFile_WriteData(memFile, 0xCui64, _RBX - 5);
          p = *((_DWORD *)_RBX - 2);
          MemFile_WriteData(memFile, 4ui64, &p);
          __asm { vmovss  xmm1, dword ptr [rbx]; value }
          MemFile_WriteFloat(memFile, *(float *)&_XMM1);
          p = *((_DWORD *)_RBX - 1);
          MemFile_WriteData(memFile, 4ui64, &p);
          __asm { vmovss  xmm1, dword ptr [rbx+4]; value }
          MemFile_WriteFloat(memFile, *(float *)&_XMM1);
          __asm { vmovss  xmm1, dword ptr [rbx+8]; value }
          MemFile_WriteFloat(memFile, *(float *)&_XMM1);
          LODWORD(v8) = v8 + 1;
          _RBX += 12;
        }
        while ( (int)v8 < _RSI->m_Path.m_NumPoints );
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
  int p; 

  p = this->m_Path.m_NumPoints;
  MemFile_WriteData(memFile, 4ui64, &p);
  if ( this->m_Path.m_NumPoints > 0 )
  {
    MemFile_WriteData(memFile, 0xCui64, &this->m_Path.m_LocalStartPoint);
    v4 = 0;
    if ( this->m_Path.m_NumPoints > 0 )
    {
      _RBX = &this->m_Path.m_Points[0].m_Length;
      do
      {
        MemFile_WriteData(memFile, 0xCui64, _RBX - 5);
        p = *((_DWORD *)_RBX - 2);
        MemFile_WriteData(memFile, 4ui64, &p);
        __asm { vmovss  xmm1, dword ptr [rbx]; value }
        MemFile_WriteFloat(memFile, *(float *)&_XMM1);
        p = *((_DWORD *)_RBX - 1);
        MemFile_WriteData(memFile, 4ui64, &p);
        __asm { vmovss  xmm1, dword ptr [rbx+4]; value }
        MemFile_WriteFloat(memFile, *(float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rbx+8]; value }
        MemFile_WriteFloat(memFile, *(float *)&_XMM1);
        ++v4;
        _RBX += 12;
      }
      while ( v4 < this->m_Path.m_NumPoints );
    }
  }
}

