/*
==============
AINavigator::Get3DNavigator
==============
*/

AINavigator3D *__fastcall AINavigator::Get3DNavigator(AINavigator *this)
{
  return ?Get3DNavigator@AINavigator@@UEAAPEAVAINavigator3D@@XZ(this);
}

/*
==============
AINavigator::IsPosUsable
==============
*/

bool __fastcall AINavigator::IsPosUsable(AINavigator *this, const vec3_t *pos)
{
  return ?IsPosUsable@AINavigator@@UEBA_NAEBTvec3_t@@@Z(this, pos);
}

/*
==============
AINavigator::GetStairsWithinDist_OLD
==============
*/

bool __fastcall AINavigator::GetStairsWithinDist_OLD(AINavigator *this, float checkDist)
{
  return ?GetStairsWithinDist_OLD@AINavigator@@UEBA_NM@Z(this, checkDist);
}

/*
==============
AINavigator::Get2DNavigator
==============
*/

AINavigator2D *__fastcall AINavigator::Get2DNavigator(AINavigator *this)
{
  return ?Get2DNavigator@AINavigator@@UEAAPEAVAINavigator2D@@XZ(this);
}

/*
==============
AINavigator::IsNodeUsable
==============
*/

bool __fastcall AINavigator::IsNodeUsable(AINavigator *this, const pathnode_t *pNode)
{
  return ?IsNodeUsable@AINavigator@@UEBA_NPEBUpathnode_t@@@Z(this, pNode);
}

/*
==============
AINavigator::IsStraightLineReachable
==============
*/

bool __fastcall AINavigator::IsStraightLineReachable(AINavigator *this, const vec3_t *endPos)
{
  return ?IsStraightLineReachable@AINavigator@@QEBA_NAEBTvec3_t@@@Z(this, endPos);
}

/*
==============
AINavigator::GetLastPathPointWithinRadius
==============
*/

bool __fastcall AINavigator::GetLastPathPointWithinRadius(AINavigator *this, const vec3_t *origin, float radius, vec3_t *outPoint)
{
  return ?GetLastPathPointWithinRadius@AINavigator@@UEBA_NAEBTvec3_t@@MAEAT2@@Z(this, origin, radius, outPoint);
}

/*
==============
AINavigator::GetStairsStateWithinDist
==============
*/

AI_STAIRS_STATE __fastcall AINavigator::GetStairsStateWithinDist(AINavigator *this, float checkDist, bool bCurrentlyOnStairs)
{
  return ?GetStairsStateWithinDist@AINavigator@@UEBA?AW4AI_STAIRS_STATE@@M_N@Z(this, checkDist, bCurrentlyOnStairs);
}

/*
==============
AINavigator::SetCurPos
==============
*/

void __fastcall AINavigator::SetCurPos(AINavigator *this, const vec3_t *curPos)
{
  ?SetCurPos@AINavigator@@UEAAXAEBTvec3_t@@@Z(this, curPos);
}

/*
==============
AINavigator::IsInBadPlace
==============
*/

bool __fastcall AINavigator::IsInBadPlace(AINavigator *this)
{
  return ?IsInBadPlace@AINavigator@@UEBA_NXZ(this);
}

/*
==============
AINavigator::SetLinkUsageFlags
==============
*/

void __fastcall AINavigator::SetLinkUsageFlags(AINavigator *this, unsigned int flags)
{
  ?SetLinkUsageFlags@AINavigator@@UEAAXI@Z(this, flags);
}

/*
==============
AINavigator::SetPenaltyTableValue
==============
*/

void __fastcall AINavigator::SetPenaltyTableValue(AINavigator *this, unsigned int index, char value)
{
  ?SetPenaltyTableValue@AINavigator@@UEAAXID@Z(this, index, value);
}

/*
==============
AINavigator::SetPenaltyTableMode
==============
*/

void __fastcall AINavigator::SetPenaltyTableMode(AINavigator *this, bfx::PenaltyTableMode mode)
{
  ?SetPenaltyTableMode@AINavigator@@UEAAXW4PenaltyTableMode@bfx@@@Z(this, mode);
}

/*
==============
AINavigator::IsStraightLineToGoalOrLink
==============
*/

bool __fastcall AINavigator::IsStraightLineToGoalOrLink(AINavigator *this)
{
  return ?IsStraightLineToGoalOrLink@AINavigator@@UEBA_NXZ(this);
}

/*
==============
AINavigator::FindClosestStraightLineReachableTacPoint
==============
*/

const tacpoint_t *__fastcall AINavigator::FindClosestStraightLineReachableTacPoint(AINavigator *this)
{
  return ?FindClosestStraightLineReachableTacPoint@AINavigator@@UEBAPEBUtacpoint_t@@XZ(this);
}

/*
==============
AINavigator::EnableTeamWalking
==============
*/

void __fastcall AINavigator::EnableTeamWalking(AINavigator *this, bool bEnable)
{
  ?EnableTeamWalking@AINavigator@@UEAAX_N@Z(this, bEnable);
}

/*
==============
AINavigator::PathRequested
==============
*/

bool __fastcall AINavigator::PathRequested(AINavigator *this)
{
  return ?PathRequested@AINavigator@@UEBA_NXZ(this);
}

/*
==============
AINavigator::ClearPenaltyTable
==============
*/

void __fastcall AINavigator::ClearPenaltyTable(AINavigator *this)
{
  ?ClearPenaltyTable@AINavigator@@UEAAXXZ(this);
}

/*
==============
AINavigator::IsPointVisibleOnPath
==============
*/

bool __fastcall AINavigator::IsPointVisibleOnPath(AINavigator *this, const vec3_t *pathStartPos, const vec3_t *point, float ignoreDistance)
{
  return ?IsPointVisibleOnPath@AINavigator@@UEBA_NAEBTvec3_t@@0M@Z(this, pathStartPos, point, ignoreDistance);
}

/*
==============
AINavigator::FindLastTacPointOnPathWithVis
==============
*/

const tacpoint_t *__fastcall AINavigator::FindLastTacPointOnPathWithVis(AINavigator *this, const vec3_t *startPos, const tacpoint_t *pTacPoint, const vec3_t *goalPos, vec3_t *outCornerPos)
{
  return ?FindLastTacPointOnPathWithVis@AINavigator@@UEBAPEBUtacpoint_t@@AEBTvec3_t@@PEBU2@0AEAT3@@Z(this, startPos, pTacPoint, goalPos, outCornerPos);
}

/*
==============
AINavigator::IsStraightLineToGoal
==============
*/

bool __fastcall AINavigator::IsStraightLineToGoal(AINavigator *this)
{
  return ?IsStraightLineToGoal@AINavigator@@UEBA_NXZ(this);
}

/*
==============
AINavigator::GetStairsStateAtDist
==============
*/

AI_STAIRS_STATE __fastcall AINavigator::GetStairsStateAtDist(AINavigator *this, float checkDist, vec3_t *outPosAtDist)
{
  return ?GetStairsStateAtDist@AINavigator@@UEBA?AW4AI_STAIRS_STATE@@MAEATvec3_t@@@Z(this, checkDist, outPosAtDist);
}

/*
==============
AINavigator::GetStairsWithinDist
==============
*/

bool __fastcall AINavigator::GetStairsWithinDist(AINavigator *this, float checkDist)
{
  return ?GetStairsWithinDist@AINavigator@@UEBA_NM@Z(this, checkDist);
}

/*
==============
AINavigator::GetObstacleBlockageFlags
==============
*/

unsigned int __fastcall AINavigator::GetObstacleBlockageFlags(AINavigator *this)
{
  return ?GetObstacleBlockageFlags@AINavigator@@UEBAIXZ(this);
}

/*
==============
AINavigator::HasTraversalWithin
==============
*/

bool __fastcall AINavigator::HasTraversalWithin(AINavigator *this, float checkDist)
{
  return ?HasTraversalWithin@AINavigator@@UEBA_NM@Z(this, checkDist);
}

/*
==============
AINavigator::FindLastPointOnPathWithinRegion
==============
*/

bool __fastcall AINavigator::FindLastPointOnPathWithinRegion(AINavigator *this, const vec3_t *goalPos, const gentity_s *pRegion, vec3_t *outPoint)
{
  return ?FindLastPointOnPathWithinRegion@AINavigator@@UEBA_NAEBTvec3_t@@PEBUgentity_s@@AEAT2@@Z(this, goalPos, pRegion, outPoint);
}

/*
==============
AINavigator::IsStraightLineReachable
==============
*/

bool __fastcall AINavigator::IsStraightLineReachable(AINavigator *this, const vec3_t *startPos, const vec3_t *endPos)
{
  return ?IsStraightLineReachable@AINavigator@@UEBA_NAEBTvec3_t@@0@Z(this, startPos, endPos);
}

/*
==============
AINavigator::GetUsableCurPos
==============
*/

void __fastcall AINavigator::GetUsableCurPos(AINavigator *this, vec3_t *closestUsablePos)
{
  ?GetUsableCurPos@AINavigator@@UEBAXAEATvec3_t@@@Z(this, closestUsablePos);
}

/*
==============
AINavigator::SetGoalPos
==============
*/

bool __fastcall AINavigator::SetGoalPos(AINavigator *this, const vec3_t *goalPos)
{
  return ?SetGoalPos@AINavigator@@UEAA_NAEBTvec3_t@@@Z(this, goalPos);
}

/*
==============
AINavigator::GetAllowedStances
==============
*/

ai_stance_e __fastcall AINavigator::GetAllowedStances(AINavigator *this)
{
  return ?GetAllowedStances@AINavigator@@UEBA?AW4ai_stance_e@@XZ(this);
}

/*
==============
AINavigator::DrawPath
==============
*/

void __fastcall AINavigator::DrawPath(AINavigator *this, int mode)
{
  ?DrawPath@AINavigator@@UEBAXH@Z(this, mode);
}

/*
==============
AINavigator::GetGoalOrLink
==============
*/

void __fastcall AINavigator::GetGoalOrLink(AINavigator *this, vec3_t *outPos)
{
  ?GetGoalOrLink@AINavigator@@UEBAXAEATvec3_t@@@Z(this, outPos);
}

/*
==============
AINavigator::SetObstacleBlockageFlags
==============
*/

void __fastcall AINavigator::SetObstacleBlockageFlags(AINavigator *this, unsigned int flags)
{
  ?SetObstacleBlockageFlags@AINavigator@@UEAAXI@Z(this, flags);
}

/*
==============
AINavigator::GetLinkUsageFlags
==============
*/

unsigned int __fastcall AINavigator::GetLinkUsageFlags(AINavigator *this)
{
  return ?GetLinkUsageFlags@AINavigator@@UEBAIXZ(this);
}

/*
==============
AINavigator::IsAreaReachable
==============
*/

bool __fastcall AINavigator::IsAreaReachable(AINavigator *this, const bfx::AreaHandle *hArea)
{
  return ?IsAreaReachable@AINavigator@@UEBA_NAEBVAreaHandle@bfx@@@Z(this, hArea);
}

/*
==============
AINavigator::GetNextCornerAfterLink
==============
*/

bool __fastcall AINavigator::GetNextCornerAfterLink(AINavigator *this, vec3_t *corner)
{
  return ?GetNextCornerAfterLink@AINavigator@@UEBA_NAEATvec3_t@@@Z(this, corner);
}

/*
==============
AINavigator::Get3DNavigator
==============
*/
AINavigator3D *AINavigator::Get3DNavigator(AINavigator *this)
{
  return 0i64;
}

/*
==============
AINavigator::PathRequested
==============
*/
_BOOL8 AINavigator::PathRequested(AINavigator *this)
{
  return this->m_bPathRequested;
}

/*
==============
AINavigator::ClearPenaltyTable
==============
*/
void AINavigator::ClearPenaltyTable(AINavigator *this)
{
  ;
}

/*
==============
AINavigator::EnableTeamWalking
==============
*/
void AINavigator::EnableTeamWalking(AINavigator *this, bool bEnable)
{
  ;
}

/*
==============
AINavigator::FindClosestStraightLineReachableTacPoint
==============
*/
const tacpoint_t *AINavigator::FindClosestStraightLineReachableTacPoint(AINavigator *this)
{
  return 0i64;
}

/*
==============
AINavigator::FindLastPointOnPathWithinRegion
==============
*/
bool AINavigator::FindLastPointOnPathWithinRegion(AINavigator *this, const vec3_t *goalPos, const gentity_s *pRegion, vec3_t *outPoint)
{
  return 0;
}

/*
==============
AINavigator::FindLastTacPointOnPathWithVis
==============
*/
const tacpoint_t *AINavigator::FindLastTacPointOnPathWithVis(AINavigator *this, const vec3_t *startPos, const tacpoint_t *pTacPoint, const vec3_t *goalPos)
{
  return 0i64;
}

/*
==============
AINavigator::Get2DNavigator
==============
*/
AINavigator2D *AINavigator::Get2DNavigator(AINavigator *this)
{
  return 0i64;
}

/*
==============
AINavigator::GetAllowedStances
==============
*/
__int64 AINavigator::GetAllowedStances(AINavigator *this)
{
  return 7i64;
}

/*
==============
AINavigator::GetGoalOrLink
==============
*/
void AINavigator::GetGoalOrLink(AINavigator *this, vec3_t *outPos)
{
  this->GetGoalPos(this, outPos);
}

/*
==============
AINavigator::GetLastPathPointWithinRadius
==============
*/
bool AINavigator::GetLastPathPointWithinRadius(AINavigator *this, const vec3_t *origin, float radius, vec3_t *outPoint)
{
  return 0;
}

/*
==============
AINavigator::GetLinkUsageFlags
==============
*/
__int64 AINavigator::GetLinkUsageFlags(AINavigator *this)
{
  return 0i64;
}

/*
==============
AINavigator::GetNextCornerAfterLink
==============
*/
bool AINavigator::GetNextCornerAfterLink(AINavigator *this, vec3_t *corner)
{
  return 0;
}

/*
==============
AINavigator::GetObstacleBlockageFlags
==============
*/
__int64 AINavigator::GetObstacleBlockageFlags(AINavigator *this)
{
  return 0i64;
}

/*
==============
AINavigator::GetStairsStateAtDist
==============
*/
__int64 AINavigator::GetStairsStateAtDist(AINavigator *this, float checkDist, vec3_t *outPosAtDist)
{
  return 0i64;
}

/*
==============
AINavigator::GetStairsStateWithinDist
==============
*/
__int64 AINavigator::GetStairsStateWithinDist(AINavigator *this, float checkDist, bool bCurrentlyOnStairs)
{
  return 0i64;
}

/*
==============
AINavigator::GetStairsWithinDist
==============
*/
bool AINavigator::GetStairsWithinDist(AINavigator *this, float checkDist)
{
  return 0;
}

/*
==============
AINavigator::GetStairsWithinDist_OLD
==============
*/
bool AINavigator::GetStairsWithinDist_OLD(AINavigator *this, float checkDist)
{
  return 0;
}

/*
==============
AINavigator::GetUsableCurPos
==============
*/
void AINavigator::GetUsableCurPos(AINavigator *this, vec3_t *closestUsablePos)
{
  this->GetCurPos(this, closestUsablePos);
}

/*
==============
AINavigator::HasTraversalWithin
==============
*/
bool AINavigator::HasTraversalWithin(AINavigator *this, float checkDist)
{
  return 0;
}

/*
==============
AINavigator::IsAreaReachable
==============
*/
bool AINavigator::IsAreaReachable(AINavigator *this, const bfx::AreaHandle *hArea)
{
  return 0;
}

/*
==============
AINavigator::IsInBadPlace
==============
*/
bool AINavigator::IsInBadPlace(AINavigator *this)
{
  return 0;
}

/*
==============
AINavigator::IsNodeUsable
==============
*/
char AINavigator::IsNodeUsable(AINavigator *this, const pathnode_t *pNode)
{
  return 1;
}

/*
==============
AINavigator::IsPointVisibleOnPath
==============
*/
bool AINavigator::IsPointVisibleOnPath(AINavigator *this, const vec3_t *pathStartPos, const vec3_t *point, float ignoreDistance)
{
  return 0;
}

/*
==============
AINavigator::IsPosUsable
==============
*/
char AINavigator::IsPosUsable(AINavigator *this, const vec3_t *pos)
{
  return 1;
}

/*
==============
AINavigator::IsStraightLineToGoalOrLink
==============
*/
bool AINavigator::IsStraightLineToGoalOrLink(AINavigator *this)
{
  return 0;
}

/*
==============
AINavigator::SetLinkUsageFlags
==============
*/
void AINavigator::SetLinkUsageFlags(AINavigator *this, unsigned int flags)
{
  ;
}

/*
==============
AINavigator::SetObstacleBlockageFlags
==============
*/
void AINavigator::SetObstacleBlockageFlags(AINavigator *this, unsigned int flags)
{
  ;
}

/*
==============
AINavigator::SetPenaltyTableMode
==============
*/
void AINavigator::SetPenaltyTableMode(AINavigator *this, bfx::PenaltyTableMode mode)
{
  ;
}

/*
==============
AINavigator::SetPenaltyTableValue
==============
*/
void AINavigator::SetPenaltyTableValue(AINavigator *this, unsigned int index, char value)
{
  ;
}

/*
==============
AINavigator::DrawPath
==============
*/
void AINavigator::DrawPath(AINavigator *this, int mode)
{
  ;
}

/*
==============
AINavigator::IsStraightLineReachable
==============
*/
__int64 AINavigator::IsStraightLineReachable(AINavigator *this, const vec3_t *endPos)
{
  char v5[16]; 

  this->GetCurPos(this, (vec3_t *)v5);
  return ((__int64 (__fastcall *)(AINavigator *, char *, const vec3_t *))this->IsStraightLineReachable)(this, v5, endPos);
}

/*
==============
AINavigator::IsStraightLineReachable
==============
*/
bool AINavigator::IsStraightLineReachable(AINavigator *this, const vec3_t *startPos, const vec3_t *endPos)
{
  return 0;
}

/*
==============
AINavigator::IsStraightLineToGoal
==============
*/
bool AINavigator::IsStraightLineToGoal(AINavigator *this)
{
  return 0;
}

/*
==============
AINavigator::SetCurPos
==============
*/
void AINavigator::SetCurPos(AINavigator *this, const vec3_t *curPos)
{
  ;
}

/*
==============
AINavigator::SetGoalPos
==============
*/
char AINavigator::SetGoalPos(AINavigator *this, const vec3_t *goalPos)
{
  return 1;
}

