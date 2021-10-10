/*
==============
AIScriptedInterface::Cover_ScoreOnCoverType
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnCoverType(AIScriptedInterface *this, const pathnode_t *node, float coverWeight, float concealWeight, float exposedWeight, float ambushWeight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnCoverType@AIScriptedInterface@@QEBAMPEBUpathnode_t@@MMMM@Z(this, node, coverWeight, concealWeight, exposedWeight, ambushWeight);
  return result;
}

/*
==============
AIScriptedInterface::Cover_IsValidCover
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsValidCover(AIScriptedInterface *this, const pathnode_t *node, bool isForNewCoverSearch)
{
  return ?Cover_IsValidCover@AIScriptedInterface@@UEBA_NPEBUpathnode_t@@_N@Z(this, node, isForNewCoverSearch);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnNodeAngle
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnNodeAngle(AIScriptedInterface *this, const pathnode_t *node, const vec3_t *lastKnownEnemyPos)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnNodeAngle@AIScriptedInterface@@QEBAMPEBUpathnode_t@@AEBTvec3_t@@@Z(this, node, lastKnownEnemyPos);
  return result;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnPlayerLOS
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnPlayerLOS(AIScriptedInterface *this, const pathnode_t *node)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnPlayerLOS@AIScriptedInterface@@QEBAMPEBUpathnode_t@@@Z(this, node);
  return result;
}

/*
==============
AIScriptedInterface::Cover_IsValidAgainstEnemy
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsValidAgainstEnemy(AIScriptedInterface *this, const pathnode_t *node, bool bUseLastKnownPos)
{
  return ?Cover_IsValidAgainstEnemy@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@_N@Z(this, node, bUseLastKnownPos);
}

/*
==============
AIScriptedInterface::Cover_IsWithinNodeAngle
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsWithinNodeAngle(const vec3_t *pos, const pathnode_t *node, const pathnodeRange_t *range)
{
  return ?Cover_IsWithinNodeAngle@AIScriptedInterface@@SA_NAEBTvec3_t@@PEBUpathnode_t@@PEBUpathnodeRange_t@@@Z(pos, node, range);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnLMGMountable
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnLMGMountable(AIScriptedInterface *this, const pathnode_t *node, float weight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnLMGMountable@AIScriptedInterface@@QEBAMPEBUpathnode_t@@M@Z(this, node, weight);
  return result;
}

/*
==============
AIScriptedInterface::Cover_MinHeightAtCover
==============
*/

double __fastcall AIScriptedInterface::Cover_MinHeightAtCover(pathnode_t *node)
{
  double result; 

  *(float *)&result = ?Cover_MinHeightAtCover@AIScriptedInterface@@SAMPEAUpathnode_t@@@Z(node);
  return result;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnDangerousNode
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnDangerousNode(AIScriptedInterface *this, const pathnode_t *node)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnDangerousNode@AIScriptedInterface@@QEBAMPEBUpathnode_t@@@Z(this, node);
  return result;
}

/*
==============
AIScriptedInterface::IsMountedAtLMGNode
==============
*/

bool __fastcall AIScriptedInterface::IsMountedAtLMGNode(AIScriptedInterface *this)
{
  return ?IsMountedAtLMGNode@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnEngagement
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnEngagement(AIScriptedInterface *this, float distToEnemy)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnEngagement@AIScriptedInterface@@QEBAMM@Z(this, distToEnemy);
  return result;
}

/*
==============
AIScriptedInterface::Cover_AdjustSearchOrigin
==============
*/

void __fastcall AIScriptedInterface::Cover_AdjustSearchOrigin(AIScriptedInterface *this, float searchRadius, const vec3_t *desiredOrigin, vec3_t *outSearchOrigin)
{
  ?Cover_AdjustSearchOrigin@AIScriptedInterface@@QEBAXMAEBTvec3_t@@AEAT2@@Z(this, searchRadius, desiredOrigin, outSearchOrigin);
}

/*
==============
AIScriptedInterface::Cover_FindBestCoverList
==============
*/

int __fastcall AIScriptedInterface::Cover_FindBestCoverList(AIScriptedInterface *this, pathnode_t **bestNodes, int bestNodesInList, CombatMode combatMode, bool searchCenteredOnAI, scr_string_t coverSelectorName, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  return ?Cover_FindBestCoverList@AIScriptedInterface@@QEBAHPEAPEAUpathnode_t@@HW4CombatMode@@_NW4scr_string_t@@PEAUCoverNodeMetricParams@@AEAM@Z(this, bestNodes, bestNodesInList, combatMode, searchCenteredOnAI, coverSelectorName, pMetricParams, outBestScore);
}

/*
==============
AIScriptedInterface::Cover_IsNodeSafeFromAnyEnemy
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsNodeSafeFromAnyEnemy(AIScriptedInterface *this, const pathnode_t *node)
{
  return ?Cover_IsNodeSafeFromAnyEnemy@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@@Z(this, node);
}

/*
==============
AIScriptedInterface::Cover_GetCoverNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_GetCoverNode(AIScriptedInterface *this)
{
  return ?Cover_GetCoverNode@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::Cover_IsValidCoverFromPoint
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsValidCoverFromPoint(AIScriptedInterface *this, const pathnode_t *node, const vec3_t *fromPoint)
{
  return ?Cover_IsValidCoverFromPoint@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@AEBTvec3_t@@@Z(this, node, fromPoint);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnTargetDir
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnTargetDir(AIScriptedInterface *this, const vec3_t *nodeOrigin, const CoverNodeMetricParams *metricParams)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnTargetDir@AIScriptedInterface@@QEBAMAEBTvec3_t@@PEBUCoverNodeMetricParams@@@Z(this, nodeOrigin, metricParams);
  return result;
}

/*
==============
CoverSelector_Add
==============
*/

void __fastcall CoverSelector_Add(CoverSelector *pCoverSelector)
{
  ?CoverSelector_Add@@YAXPEAUCoverSelector@@@Z(pCoverSelector);
}

/*
==============
AIScriptedInterface::Cover_FindCoverFromPoint
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_FindCoverFromPoint(AIScriptedInterface *this, const vec3_t *vPoint, float fMinSafeDist, CombatMode combatMode, gentity_s *pIgnoreEnt)
{
  return ?Cover_FindCoverFromPoint@AIScriptedInterface@@QEBAPEAUpathnode_t@@AEBTvec3_t@@MW4CombatMode@@PEAUgentity_s@@@Z(this, vPoint, fMinSafeDist, combatMode, pIgnoreEnt);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnAmbushVisibility
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnAmbushVisibility(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnAmbushVisibility@AIScriptedInterface@@QEBAMPEBUpathnode_t@@0@Z(this, node, enemyNode);
  return result;
}

/*
==============
AIScriptedInterface::Cover_NodeRangeValid
==============
*/

int __fastcall AIScriptedInterface::Cover_NodeRangeValid(AIScriptedInterface *this, const vec3_t *pos, const pathnode_t *node, const pathnodeRange_t *range)
{
  return ?Cover_NodeRangeValid@AIScriptedInterface@@QEBAHAEBTvec3_t@@PEBUpathnode_t@@PEBUpathnodeRange_t@@@Z(this, pos, node, range);
}

/*
==============
AIScriptedInterface::Cover_GetRange
==============
*/

const pathnodeRange_t *__fastcall AIScriptedInterface::Cover_GetRange(const pathnode_t *node)
{
  return ?Cover_GetRange@AIScriptedInterface@@SAPEBUpathnodeRange_t@@PEBUpathnode_t@@@Z(node);
}

/*
==============
AIScriptedInterface::Cover_FindBestCover
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_FindBestCover(AIScriptedInterface *this, scr_string_t coverSelector, const pathnode_t *pNodeToAvoid, bool searchCenteredOnAI, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  return ?Cover_FindBestCover@AIScriptedInterface@@QEBAPEAUpathnode_t@@W4scr_string_t@@PEBU2@_NPEAUCoverNodeMetricParams@@AEAM@Z(this, coverSelector, pNodeToAvoid, searchCenteredOnAI, pMetricParams, outBestScore);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnCrowdedness_Tac
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnCrowdedness_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, float weight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnCrowdedness_Tac@AIScriptedInterface@@QEBAMPEBUtacpoint_t@@M@Z(this, pPoint, weight);
  return result;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnPriority
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnPriority(AIScriptedInterface *this, const pathnode_t *node)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnPriority@AIScriptedInterface@@QEBAMPEBUpathnode_t@@@Z(this, node);
  return result;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnStickiness
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnStickiness(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *claimedNode, float weight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnStickiness@AIScriptedInterface@@QEBAMPEBUpathnode_t@@0M@Z(this, node, claimedNode, weight);
  return result;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnVisibility
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnVisibility(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, const tacpoint_t *pEnemyTacPoint, float visibleWeight, float notVisibleWeight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnVisibility@AIScriptedInterface@@QEBAMPEBUpathnode_t@@0PEBUtacpoint_t@@MM@Z(this, node, enemyNode, pEnemyTacPoint, visibleWeight, notVisibleWeight);
  return result;
}

/*
==============
AIScriptedInterface::IsValidCoverTacPoint
==============
*/

bool __fastcall AIScriptedInterface::IsValidCoverTacPoint(AIScriptedInterface *this, const tacpoint_t *pTacpoint)
{
  return ?IsValidCoverTacPoint@AIScriptedInterface@@QEBA_NPEBUtacpoint_t@@@Z(this, pTacpoint);
}

/*
==============
AIScriptedInterface::Cover_FindBestTacPoint
==============
*/

const tacpoint_t *__fastcall AIScriptedInterface::Cover_FindBestTacPoint(AIScriptedInterface *this, scr_string_t coverSelectorOverride, bool bRequestDifferentCover, const gentity_s *volume, bool searchCenteredOnAI, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  return ?Cover_FindBestTacPoint@AIScriptedInterface@@QEBAPEBUtacpoint_t@@W4scr_string_t@@_NPEBUgentity_s@@1PEAUCoverNodeMetricParams@@AEAM@Z(this, coverSelectorOverride, bRequestDifferentCover, volume, searchCenteredOnAI, pMetricParams, outBestScore);
}

/*
==============
AIScriptedInterface::Cover_GetValidNodeMetrics
==============
*/

int __fastcall AIScriptedInterface::Cover_GetValidNodeMetrics(AIScriptedInterface *this, pathsort_s *nodes, int iNodeCount, gentity_s *volume, const PathBlockPlanes *blockPlanes, const CoverSelector *pCoverSelector, CoverNodeMetricParams *pMetricParams)
{
  return ?Cover_GetValidNodeMetrics@AIScriptedInterface@@QEBAHPEAUpathsort_s@@HPEAUgentity_s@@PEBUPathBlockPlanes@@PEBUCoverSelector@@PEAUCoverNodeMetricParams@@@Z(this, nodes, iNodeCount, volume, blockPlanes, pCoverSelector, pMetricParams);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnSecondaryTargets
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnSecondaryTargets(AIScriptedInterface *this, const pathnode_t *node)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnSecondaryTargets@AIScriptedInterface@@QEBAMPEBUpathnode_t@@@Z(this, node);
  return result;
}

/*
==============
AIScriptedInterface::DebugDrawNodesInVolume
==============
*/

void __fastcall AIScriptedInterface::DebugDrawNodesInVolume(AIScriptedInterface *this)
{
  ?DebugDrawNodesInVolume@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetCoverNodeMetricParams
==============
*/

void __fastcall AIScriptedInterface::GetCoverNodeMetricParams(AIScriptedInterface *this, CoverNodeMetricParams *metricParams)
{
  ?GetCoverNodeMetricParams@AIScriptedInterface@@QEBAXPEAUCoverNodeMetricParams@@@Z(this, metricParams);
}

/*
==============
AIScriptedInterface::Cover_GetSearchRadiusAndOrigin
==============
*/

double __fastcall AIScriptedInterface::Cover_GetSearchRadiusAndOrigin(AIScriptedInterface *this, vec3_t *outSearchOrigin)
{
  double result; 

  *(float *)&result = ?Cover_GetSearchRadiusAndOrigin@AIScriptedInterface@@QEBAMAEATvec3_t@@@Z(this, outSearchOrigin);
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindBestCover
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_FindBestCover(AIScriptedInterface *this, scr_string_t coverSelector, bool bRequestDifferentCover, bool searchCenteredOnAI, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  return ?Cover_FindBestCover@AIScriptedInterface@@QEBAPEAUpathnode_t@@W4scr_string_t@@_N1PEAUCoverNodeMetricParams@@AEAM@Z(this, coverSelector, bRequestDifferentCover, searchCenteredOnAI, pMetricParams, outBestScore);
}

/*
==============
AIScriptedInterface::Cover_IsNodeMinDistFromAllTargets
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsNodeMinDistFromAllTargets(AIScriptedInterface *this, const pathnode_t *node)
{
  return ?Cover_IsNodeMinDistFromAllTargets@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@@Z(this, node);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnVisibility_Tac
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnVisibility_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, const tacpoint_t *pEnemyTacPoint, float visibleWeight, float notVisibleWeight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnVisibility_Tac@AIScriptedInterface@@QEBAMPEBUtacpoint_t@@0MM@Z(this, pPoint, pEnemyTacPoint, visibleWeight, notVisibleWeight);
  return result;
}

/*
==============
AIScriptedInterface::ShouldKeepClaimedNode
==============
*/

bool __fastcall AIScriptedInterface::ShouldKeepClaimedNode(AIScriptedInterface *this)
{
  return ?ShouldKeepClaimedNode@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Cover_SetAimLimits
==============
*/

void __fastcall AIScriptedInterface::Cover_SetAimLimits(AIScriptedInterface *this, const pathnode_t *node)
{
  ?Cover_SetAimLimits@AIScriptedInterface@@QEBAXPEBUpathnode_t@@@Z(this, node);
}

/*
==============
AIScriptedInterface::Cover_FindCoverNode
==============
*/

void __fastcall AIScriptedInterface::Cover_FindCoverNode(AIScriptedInterface *this, CombatMode combatMode)
{
  ?Cover_FindCoverNode@AIScriptedInterface@@QEBAXW4CombatMode@@@Z(this, combatMode);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnMoveTowardsTargetWeight
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnMoveTowardsTargetWeight(AIScriptedInterface *this, const vec3_t *nodeOrigin, const CoverNodeMetricParams *metricParams)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnMoveTowardsTargetWeight@AIScriptedInterface@@QEBAMAEBTvec3_t@@PEBUCoverNodeMetricParams@@@Z(this, nodeOrigin, metricParams);
  return result;
}

/*
==============
AIScriptedInterface::Cover_GetTacMetric
==============
*/

double __fastcall AIScriptedInterface::Cover_GetTacMetric(AIScriptedInterface *this, const tacpoint_t *pPoint, const CoverNodeMetricParams *metricParams, const CoverSelector *pCoverSelector)
{
  double result; 

  *(float *)&result = ?Cover_GetTacMetric@AIScriptedInterface@@QEBAMPEBUtacpoint_t@@PEBUCoverNodeMetricParams@@PEBUCoverSelector@@@Z(this, pPoint, metricParams, pCoverSelector);
  return result;
}

/*
==============
CoverSelector_Remove
==============
*/

void __fastcall CoverSelector_Remove(CoverSelector *pCoverSelector)
{
  ?CoverSelector_Remove@@YAXPEAUCoverSelector@@@Z(pCoverSelector);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnStickiness_Tac
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnStickiness_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, const tacpoint_t *pCurPoint, float weight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnStickiness_Tac@AIScriptedInterface@@QEBAMPEBUtacpoint_t@@0M@Z(this, pPoint, pCurPoint, weight);
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindBestCoverInList
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_FindBestCoverInList(AIScriptedInterface *this, const pathsort_s *nodes, int nodeCount, bool bCheckReachability, float *outBestScore)
{
  return ?Cover_FindBestCoverInList@AIScriptedInterface@@QEBAPEAUpathnode_t@@PEBUpathsort_s@@H_NAEAM@Z(this, nodes, nodeCount, bCheckReachability, outBestScore);
}

/*
==============
AIScriptedInterface::Cover_IsPathToShuffleNodeClear
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsPathToShuffleNodeClear(AIScriptedInterface *this, pathnode_t *node, const vec2_t *dirToNode, float distToNode)
{
  return ?Cover_IsPathToShuffleNodeClear@AIScriptedInterface@@QEBA_NPEAUpathnode_t@@AEBTvec2_t@@M@Z(this, node, dirToNode, distToNode);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnDistance
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnDistance(AIScriptedInterface *this, const vec3_t *nodeOrigin, vec3_t *referenceOrigin, float distanceMin, float distanceOptimal, float distanceMax, bool useDistSqr)
{
  return ?Cover_ScoreOnDistance@AIScriptedInterface@@QEBAMAEBTvec3_t@@T2@MMM_N@Z(this, nodeOrigin, referenceOrigin, distanceMin, distanceOptimal, distanceMax, useDistSqr);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnNearAllies
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnNearAllies(AIScriptedInterface *this, const vec3_t *nodeOrigin)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnNearAllies@AIScriptedInterface@@QEBAMAEBTvec3_t@@@Z(this, nodeOrigin);
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindNearByCoverNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_FindNearByCoverNode(AIScriptedInterface *this, const vec3_t *origin, float searchRadius, CombatMode combatMode)
{
  return ?Cover_FindNearByCoverNode@AIScriptedInterface@@QEBAPEAUpathnode_t@@AEBTvec3_t@@MW4CombatMode@@@Z(this, origin, searchRadius, combatMode);
}

/*
==============
AIScriptedInterface::Cover_UseCoverNode
==============
*/

bool __fastcall AIScriptedInterface::Cover_UseCoverNode(AIScriptedInterface *this, pathnode_t *node)
{
  return ?Cover_UseCoverNode@AIScriptedInterface@@QEBA_NPEAUpathnode_t@@@Z(this, node);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnInOutDoor
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnInOutDoor(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, float indoorWeight, float outdoorWeight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnInOutDoor@AIScriptedInterface@@QEBAMPEBUpathnode_t@@0MM@Z(this, node, enemyNode, indoorWeight, outdoorWeight);
  return result;
}

/*
==============
CoverSelector_Get
==============
*/

const CoverSelector *__fastcall CoverSelector_Get(const scr_string_t name)
{
  return ?CoverSelector_Get@@YAPEBUCoverSelector@@W4scr_string_t@@@Z(name);
}

/*
==============
AIScriptedInterface::Cover_FromPoint_GetNodeMetric
==============
*/

double __fastcall AIScriptedInterface::Cover_FromPoint_GetNodeMetric(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, const tacpoint_t *pEnemyTacPoint, const CoverSelector *pCoverSelector)
{
  double result; 

  *(float *)&result = ?Cover_FromPoint_GetNodeMetric@AIScriptedInterface@@QEBAMPEBUpathnode_t@@0PEBUtacpoint_t@@PEBUCoverSelector@@@Z(this, node, enemyNode, pEnemyTacPoint, pCoverSelector);
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindBestCoverAwayFrom
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_FindBestCoverAwayFrom(AIScriptedInterface *this, const gentity_s *avoidEnt, scr_string_t coverSelector, bool bRequestDifferentCover, bool searchCenteredAroundAI, CoverNodeMetricParams *pMetricParams)
{
  return ?Cover_FindBestCoverAwayFrom@AIScriptedInterface@@QEBAPEAUpathnode_t@@PEBUgentity_s@@W4scr_string_t@@_N2PEAUCoverNodeMetricParams@@@Z(this, avoidEnt, coverSelector, bRequestDifferentCover, searchCenteredAroundAI, pMetricParams);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnSecondaryTargets_Tac
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnSecondaryTargets_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnSecondaryTargets_Tac@AIScriptedInterface@@QEBAMPEBUtacpoint_t@@@Z(this, pPoint);
  return result;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnHeight
==============
*/

double __fastcall AIScriptedInterface::Cover_ScoreOnHeight(AIScriptedInterface *this, const vec3_t *nodeOrigin, const vec3_t *currentOrigin, float weight)
{
  double result; 

  *(float *)&result = ?Cover_ScoreOnHeight@AIScriptedInterface@@QEBAMAEBTvec3_t@@0M@Z(this, nodeOrigin, currentOrigin, weight);
  return result;
}

/*
==============
AIScriptedInterface::Cover_IsRoughlyValidCover
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsRoughlyValidCover(AIScriptedInterface *this, const pathnode_t *node)
{
  return ?Cover_IsRoughlyValidCover@AIScriptedInterface@@QEBA_NPEBUpathnode_t@@@Z(this, node);
}

/*
==============
AIScriptedInterface::Cover_FindShuffleCoverNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_FindShuffleCoverNode(AIScriptedInterface *this)
{
  return ?Cover_FindShuffleCoverNode@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::KeepClaimedNode
==============
*/

bool __fastcall AIScriptedInterface::KeepClaimedNode(AIScriptedInterface *this)
{
  return ?KeepClaimedNode@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
DebugDrawNodeSelectionOverlay
==============
*/

void DebugDrawNodeSelectionOverlay(void)
{
  ?DebugDrawNodeSelectionOverlay@@YAXXZ();
}

/*
==============
AIScriptedInterface::Cover_GetBestNodesFromList
==============
*/

int __fastcall AIScriptedInterface::Cover_GetBestNodesFromList(AIScriptedInterface *this, pathsort_s *nodes, int nodeCount, pathnode_t **bestNodes, int bestNodesInList, bool bCheckReachability, float *outBestScore)
{
  return ?Cover_GetBestNodesFromList@AIScriptedInterface@@QEBAHPEAUpathsort_s@@HPEAPEAUpathnode_t@@H_NAEAM@Z(this, nodes, nodeCount, bestNodes, bestNodesInList, bCheckReachability, outBestScore);
}

/*
==============
AIScriptedInterface::Cover_GetNodeMetric
==============
*/

double __fastcall AIScriptedInterface::Cover_GetNodeMetric(AIScriptedInterface *this, const pathnode_t *node, const CoverNodeMetricParams *metricParams, const CoverSelector *pCoverSelector)
{
  double result; 

  *(float *)&result = ?Cover_GetNodeMetric@AIScriptedInterface@@QEBAMPEBUpathnode_t@@PEBUCoverNodeMetricParams@@PEBUCoverSelector@@@Z(this, node, metricParams, pCoverSelector);
  return result;
}

/*
==============
AIScriptedInterface::Cover_IsValidCoverNode
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsValidCoverNode(const pathnode_t *node, const vec3_t *attackPosition)
{
  return ?Cover_IsValidCoverNode@AIScriptedInterface@@SA_NPEBUpathnode_t@@AEBTvec3_t@@@Z(node, attackPosition);
}

/*
==============
CoverSelector_Add
==============
*/
void CoverSelector_Add(CoverSelector *pCoverSelector)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v5; 
  scr_string_t scrName; 
  scr_string_t v7; 
  ntl::red_black_tree_node_base *v8; 
  bool v9; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v12; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::pair<enum scr_string_t,CoverSelector *> v14; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::pair<enum scr_string_t,CoverSelector *> r_element; 
  __m256i v18; 
  ntl::red_black_tree_iterator<enum scr_string_t,ntl::red_black_tree_node<ntl::pair<enum scr_string_t,CoverSelector *> >,ntl::pair<enum scr_string_t,CoverSelector *> *,ntl::pair<enum scr_string_t,CoverSelector *> &> result; 

  mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
  v5 = g_coverSelectorMap.m_endNodeBase.mp_parent;
  if ( g_coverSelectorMap.m_endNodeBase.mp_parent )
  {
    scrName = pCoverSelector->scrName;
    do
    {
      if ( v5[1].m_color < scrName )
      {
        v5 = v5->mp_right;
      }
      else
      {
        p_m_endNodeBase = v5;
        v5 = v5->mp_left;
      }
    }
    while ( v5 );
    if ( p_m_endNodeBase != &g_coverSelectorMap.m_endNodeBase && scrName >= p_m_endNodeBase[1].m_color && (CoverSelector *)p_m_endNodeBase[1].mp_parent != pCoverSelector )
    {
      CoverSelector_Remove(pCoverSelector);
      mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
    }
  }
  v7 = pCoverSelector->scrName;
  v8 = &g_coverSelectorMap.m_endNodeBase;
  r_element.first = v7;
  v9 = 1;
  r_element.second = pCoverSelector;
  while ( mp_parent )
  {
    v8 = mp_parent;
    v9 = v7 < mp_parent[1].m_color;
    if ( v7 >= mp_parent[1].m_color )
      mp_parent = mp_parent->mp_right;
    else
      mp_parent = mp_parent->mp_left;
  }
  mp_left = v8;
  if ( v9 )
  {
    if ( v8 == g_coverSelectorMap.m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<enum scr_string_t,ntl::pair<enum scr_string_t,CoverSelector *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<enum scr_string_t,CoverSelector *>>,64,8>,ntl::return_pair_first<enum scr_string_t,CoverSelector *>,ntl::less<enum scr_string_t,enum scr_string_t>>::insert_node(&g_coverSelectorMap, &result, v8, &r_element, 1, 0);
      return;
    }
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( v8->m_color || v8->mp_parent->mp_parent != v8 )
    {
      mp_left = v8->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = v8->mp_parent;
        if ( v8 == mp_left->mp_left )
        {
          do
          {
            v12 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v12 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = v8->mp_right;
    }
  }
  if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( mp_left[1].m_color < v7 )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
      __debugbreak();
    if ( !g_coverSelectorMap.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !g_coverSelectorMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<48> *)g_coverSelectorMap.m_freelist.m_head.mp_next == &g_coverSelectorMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x30ui64, 0x40ui64) )
      __debugbreak();
    mp_next = g_coverSelectorMap.m_freelist.m_head.mp_next;
    v18.m256i_i32[0] = 0;
    v18.m256i_i64[1] = (__int64)v8;
    v14 = r_element;
    g_coverSelectorMap.m_freelist.m_head.mp_next = g_coverSelectorMap.m_freelist.m_head.mp_next->mp_next;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v18.m256i_u64[2] = _XMM0;
    *(__m256i *)&mp_next->mp_next = v18;
    *(ntl::pair<enum scr_string_t,CoverSelector *> *)&mp_next[4].mp_next = v14;
    if ( v8 == &g_coverSelectorMap.m_endNodeBase )
    {
      g_coverSelectorMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
      g_coverSelectorMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
      g_coverSelectorMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
    }
    else if ( v7 >= v8[1].m_color )
    {
      v8->mp_right = (ntl::red_black_tree_node_base *)mp_next;
      mp_right = g_coverSelectorMap.m_endNodeBase.mp_right;
      if ( v8 == g_coverSelectorMap.m_endNodeBase.mp_right )
        mp_right = (ntl::red_black_tree_node_base *)mp_next;
      g_coverSelectorMap.m_endNodeBase.mp_right = mp_right;
    }
    else
    {
      v8->mp_left = (ntl::red_black_tree_node_base *)mp_next;
      if ( v8 == g_coverSelectorMap.m_endNodeBase.mp_left )
        g_coverSelectorMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
    }
    ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &g_coverSelectorMap.m_endNodeBase.mp_parent);
    ++g_coverSelectorMap.m_size;
  }
}

/*
==============
CoverSelector_Get
==============
*/
ntl::red_black_tree_node_base *CoverSelector_Get(const scr_string_t name)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
  if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( mp_parent[1].m_color < name )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_coverSelectorMap.m_endNodeBase || name < p_m_endNodeBase[1].m_color )
    return 0i64;
  else
    return p_m_endNodeBase[1].mp_parent;
}

/*
==============
CoverSelector_Remove
==============
*/
void CoverSelector_Remove(CoverSelector *pCoverSelector)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v3; 
  scr_string_t scrName; 
  ntl::red_black_tree_node_base *v5; 
  ntl::red_black_tree_node_base *v6; 
  scr_string_t v7; 

  mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
  v3 = g_coverSelectorMap.m_endNodeBase.mp_parent;
  if ( g_coverSelectorMap.m_endNodeBase.mp_parent )
  {
    scrName = pCoverSelector->scrName;
    do
    {
      if ( v3[1].m_color < scrName )
      {
        v3 = v3->mp_right;
      }
      else
      {
        p_m_endNodeBase = v3;
        v3 = v3->mp_left;
      }
    }
    while ( v3 );
    if ( p_m_endNodeBase == &g_coverSelectorMap.m_endNodeBase )
      return;
    v5 = &g_coverSelectorMap.m_endNodeBase;
    if ( scrName >= p_m_endNodeBase[1].m_color )
      v5 = p_m_endNodeBase;
    p_m_endNodeBase = v5;
  }
  if ( p_m_endNodeBase != &g_coverSelectorMap.m_endNodeBase )
  {
    v6 = &g_coverSelectorMap.m_endNodeBase;
    if ( g_coverSelectorMap.m_endNodeBase.mp_parent )
    {
      v7 = pCoverSelector->scrName;
      do
      {
        if ( mp_parent[1].m_color < v7 )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          v6 = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      while ( mp_parent );
      if ( v6 != &g_coverSelectorMap.m_endNodeBase && v7 >= v6[1].m_color )
      {
        if ( !g_coverSelectorMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        ntl::red_black_tree_node_base::get_next(v6);
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
          __debugbreak();
        if ( v6 == &g_coverSelectorMap.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
          __debugbreak();
        ntl::red_black_tree_node_base::rebalance_for_erase(v6, &g_coverSelectorMap.m_endNodeBase.mp_parent, &g_coverSelectorMap.m_endNodeBase.mp_left, &g_coverSelectorMap.m_endNodeBase.mp_right);
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)&v6->m_color = g_coverSelectorMap.m_freelist.m_head.mp_next;
        --g_coverSelectorMap.m_size;
        g_coverSelectorMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v6;
      }
    }
  }
}

/*
==============
AIScriptedInterface::Cover_AdjustSearchOrigin
==============
*/
void AIScriptedInterface::Cover_AdjustSearchOrigin(AIScriptedInterface *this, float searchRadius, const vec3_t *desiredOrigin, vec3_t *outSearchOrigin)
{
  ai_scripted_t *m_pAI; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v12; 
  float v15; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2667, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( searchRadius > this->m_pAI->codeGoal.radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2668, ASSERT_TYPE_ASSERT, "(searchRadius <= m_pAI->codeGoal.radius)", (const char *)&queryFormat, "searchRadius <= m_pAI->codeGoal.radius") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v8 = m_pAI->codeGoal.pos.v[0] - desiredOrigin->v[0];
  v12 = LODWORD(m_pAI->codeGoal.pos.v[1]);
  v9 = m_pAI->codeGoal.pos.v[1] - desiredOrigin->v[1];
  v10 = m_pAI->codeGoal.pos.v[2] - desiredOrigin->v[2];
  *(float *)&v12 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  _XMM7 = v12;
  if ( (float)(*(float *)&v12 + searchRadius) > m_pAI->codeGoal.radius )
  {
    if ( *(float *)&v12 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2679, ASSERT_TYPE_ASSERT, "(distToCenter > 0.f)", (const char *)&queryFormat, "distToCenter > 0.f") )
      __debugbreak();
    __asm
    {
      vcmpless xmm0, xmm7, cs:__real@80000000
      vblendvps xmm0, xmm7, xmm1, xmm0
    }
    v15 = *(float *)&v12 - (float)(this->m_pAI->codeGoal.radius - searchRadius);
    outSearchOrigin->v[0] = (float)((float)(v8 * (float)(1.0 / *(float *)&_XMM0)) * v15) + desiredOrigin->v[0];
    outSearchOrigin->v[1] = (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * v15) + desiredOrigin->v[1];
    outSearchOrigin->v[2] = (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * v15) + desiredOrigin->v[2];
  }
  else
  {
    outSearchOrigin->v[0] = desiredOrigin->v[0];
    outSearchOrigin->v[1] = desiredOrigin->v[1];
    outSearchOrigin->v[2] = desiredOrigin->v[2];
  }
}

/*
==============
AIScriptedInterface::Cover_FindBestCover
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindBestCover(AIScriptedInterface *this, scr_string_t coverSelector, const pathnode_t *pNodeToAvoid, bool searchCenteredOnAI, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  CombatMode combatMode; 
  int BestCoverList; 
  pathnode_t *result; 
  int v10; 
  pathnode_t *v11[2]; 
  pathnode_t *bestNodes[256]; 

  combatMode = this->m_pAI->combat.combatMode;
  if ( combatMode == AI_COMBAT_COVER_3D )
  {
    BestCoverList = AIScriptedInterface::Cover_FindBestCoverList(this, bestNodes, 5, AI_COMBAT_COVER_3D, searchCenteredOnAI, coverSelector, pMetricParams, outBestScore);
    if ( BestCoverList > 0 )
      return bestNodes[G_irand(0, BestCoverList)];
    return 0i64;
  }
  v10 = AIScriptedInterface::Cover_FindBestCoverList(this, v11, (pNodeToAvoid != NULL) + 1, combatMode, searchCenteredOnAI, coverSelector, pMetricParams, outBestScore);
  result = v11[0];
  if ( v10 <= 1 )
  {
    if ( v10 > 0 )
      return result;
    return 0i64;
  }
  if ( pNodeToAvoid )
  {
    if ( v11[0] == pNodeToAvoid )
      return v11[1];
  }
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindBestCover
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindBestCover(AIScriptedInterface *this, scr_string_t coverSelector, bool bRequestDifferentCover, bool searchCenteredOnAI, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  CombatMode combatMode; 
  int BestCoverList; 
  pathnode_t *result; 
  int v13; 
  pathnode_t *v14[2]; 
  pathnode_t *bestNodes[256]; 

  m_pAI = this->m_pAI;
  if ( bRequestDifferentCover )
    pClaimedNode = m_pAI->sentient->pClaimedNode;
  else
    pClaimedNode = NULL;
  combatMode = m_pAI->combat.combatMode;
  if ( combatMode == AI_COMBAT_COVER_3D )
  {
    BestCoverList = AIScriptedInterface::Cover_FindBestCoverList(this, bestNodes, 5, AI_COMBAT_COVER_3D, searchCenteredOnAI, coverSelector, pMetricParams, outBestScore);
    if ( BestCoverList > 0 )
      return bestNodes[G_irand(0, BestCoverList)];
    return 0i64;
  }
  v13 = AIScriptedInterface::Cover_FindBestCoverList(this, v14, (pClaimedNode != NULL) + 1, combatMode, searchCenteredOnAI, coverSelector, pMetricParams, outBestScore);
  if ( v13 <= 1 )
  {
    if ( v13 > 0 )
      return v14[0];
    return 0i64;
  }
  result = v14[0];
  if ( pClaimedNode )
  {
    if ( v14[0] == pClaimedNode )
      return v14[1];
  }
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindBestCoverAwayFrom
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindBestCoverAwayFrom(AIScriptedInterface *this, const gentity_s *avoidEnt, scr_string_t coverSelector, bool bRequestDifferentCover, bool searchCenteredAroundAI, CoverNodeMetricParams *pMetricParams)
{
  int BestCoverList; 
  gentity_s *v12; 
  int v13; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  __int64 v20; 
  float outBestScore; 
  vec3_t pos; 
  pathnode_t *bestNodes[256]; 

  if ( !avoidEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2002, ASSERT_TYPE_ASSERT, "(avoidEnt)", (const char *)&queryFormat, "avoidEnt") )
    __debugbreak();
  BestCoverList = AIScriptedInterface::Cover_FindBestCoverList(this, bestNodes, 256, this->m_pAI->combat.combatMode, searchCenteredAroundAI, coverSelector, pMetricParams, &outBestScore);
  if ( !BestCoverList )
    return 0i64;
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2011, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  v12 = this->GetEntity(this);
  v13 = BestCoverList - 1;
  v14 = v13;
  v15 = v12->r.currentOrigin.v[0];
  v16 = v12->r.currentOrigin.v[1];
  v17 = avoidEnt->r.currentOrigin.v[0] - v15;
  v18 = avoidEnt->r.currentOrigin.v[1] - v16;
  if ( v13 < 0 )
  {
LABEL_15:
    v20 = v13;
  }
  else
  {
    v19 = v13;
    while ( 1 )
    {
      if ( !bRequestDifferentCover || bestNodes[v19] != this->m_pAI->sentient->pClaimedNode )
      {
        pathnode_t::GetPos(bestNodes[v19], &pos);
        if ( (float)((float)((float)(pos.v[0] - v15) * v17) + (float)((float)(pos.v[1] - v16) * v18)) < 0.0 )
          break;
      }
      --v14;
      if ( --v19 < 0 )
        goto LABEL_15;
    }
    v20 = v14;
  }
  return bestNodes[v20];
}

/*
==============
AIScriptedInterface::Cover_FindBestCoverInList
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindBestCoverInList(AIScriptedInterface *this, const pathsort_s *nodes, int nodeCount, bool bCheckReachability, float *outBestScore)
{
  int v5; 
  int v10; 
  float v11; 
  float *p_metric; 

  v5 = 0;
  v10 = -1;
  *outBestScore = 0.0;
  v11 = FLOAT_N3_4028235e38;
  if ( nodeCount <= 0 )
    return 0i64;
  p_metric = &nodes->metric;
  do
  {
    if ( v11 < *p_metric && (!bCheckReachability || this->m_pAI->pNavigator->IsNodeReachable(this->m_pAI->pNavigator, (const pathnode_t *)*((_QWORD *)p_metric - 1))) )
    {
      v11 = *p_metric;
      v10 = v5;
    }
    ++v5;
    p_metric += 4;
  }
  while ( v5 < nodeCount );
  if ( v10 < 0 )
    return 0i64;
  *outBestScore = v11;
  return nodes[v10].node;
}

/*
==============
AIScriptedInterface::Cover_FindBestCoverList
==============
*/
__int64 AIScriptedInterface::Cover_FindBestCoverList(AIScriptedInterface *this, pathnode_t **bestNodes, int bestNodesInList, CombatMode combatMode, bool searchCenteredOnAI, scr_string_t coverSelectorName, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  unsigned int v8; 
  scr_string_t defaultcoverselector; 
  ai_scripted_t *m_pAI; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *v15; 
  const CoverSelector *v16; 
  float v17; 
  double SearchRadiusAndOrigin; 
  const dvar_t *v19; 
  ai_scripted_t *v20; 
  const dvar_t *v21; 
  vec3_t *p_lastKnownEnemyOrigin; 
  int v23; 
  ai_scripted_t *v24; 
  unsigned int v25; 
  const dvar_t *v26; 
  int isDefined; 
  bool v28; 
  gentity_s *v29; 
  int ValidNodeMetrics; 
  int v31; 
  ai_scripted_t *v32; 
  int number; 
  __int64 v34; 
  __int64 v35; 
  int v36; 
  const char *v37; 
  const char *v38; 
  int v40; 
  int v41; 
  __int64 v42; 
  float v43; 
  float *p_metric; 
  pathnode_t *node; 
  unsigned int BestNodesFromList; 
  char *fmt; 
  __int64 duration; 
  __int64 durationa; 
  __int64 typeFlags; 
  vec3_t outSearchOrigin; 
  PathBlockPlanes blockPlanes; 
  pathsort_s nodes[256]; 

  v8 = 0;
  defaultcoverselector = coverSelectorName;
  *outBestScore = 0.0;
  if ( !coverSelectorName )
  {
    m_pAI = this->m_pAI;
    p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
    defaultcoverselector = m_pAI->nodeSelect.defaultcoverselector;
    mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
    if ( g_coverSelectorMap.m_endNodeBase.mp_parent )
    {
      do
      {
        if ( mp_parent[1].m_color < defaultcoverselector )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          p_m_endNodeBase = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      while ( mp_parent );
      goto LABEL_13;
    }
    return 0i64;
  }
  v15 = g_coverSelectorMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
  if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( v15[1].m_color < coverSelectorName )
    {
      v15 = v15->mp_right;
    }
    else
    {
      p_m_endNodeBase = v15;
      v15 = v15->mp_left;
    }
  }
  while ( v15 );
LABEL_13:
  if ( p_m_endNodeBase == &g_coverSelectorMap.m_endNodeBase )
    return 0i64;
  if ( defaultcoverselector < p_m_endNodeBase[1].m_color )
    return 0i64;
  v16 = (const CoverSelector *)p_m_endNodeBase[1].mp_parent;
  if ( !v16 )
    return 0i64;
  Profile_Begin(485);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2215, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2216, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !pMetricParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2217, ASSERT_TYPE_ASSERT, "(pMetricParams)", (const char *)&queryFormat, "pMetricParams") )
    __debugbreak();
  if ( (unsigned int)(bestNodesInList - 1) > 0xFF )
  {
    LODWORD(duration) = bestNodesInList;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2218, ASSERT_TYPE_ASSERT, "( 1 ) <= ( bestNodesInList ) && ( bestNodesInList ) <= ( 256 )", "bestNodesInList not in [1, AI_GOAL_NODES_SIZE]\n\t%i not in [%i, %i]", duration, 1, 256) )
      __debugbreak();
  }
  this->m_pAI->nodeSelect.requestDifferentCover = 0;
  if ( EntHandle::isDefined(&this->m_pAI->coverSelectionFocusEnt) )
  {
    v17 = FLOAT_1024_0;
    outSearchOrigin = EntHandle::ent(&this->m_pAI->coverSelectionFocusEnt)->r.currentOrigin;
  }
  else if ( searchCenteredOnAI )
  {
    v17 = FLOAT_1024_0;
    outSearchOrigin = this->m_pAI->ent->r.currentOrigin;
  }
  else
  {
    SearchRadiusAndOrigin = AIScriptedInterface::Cover_GetSearchRadiusAndOrigin(this, &outSearchOrigin);
    v17 = *(float *)&SearchRadiusAndOrigin;
  }
  v19 = DVARINT_ai_debugCoverSelection;
  v20 = this->m_pAI;
  if ( !DVARINT_ai_debugCoverSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCoverSelection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer == 1 )
  {
    v21 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.integer == v20->ent->s.number )
      G_DebugCircle(&outSearchOrigin, v17, &colorYellow, 0, 1, 250);
  }
  p_lastKnownEnemyOrigin = &pMetricParams->lastKnownEnemyOrigin;
  if ( !pMetricParams->lastKnownValid )
    p_lastKnownEnemyOrigin = NULL;
  v23 = Path_NodesInCylinder(&outSearchOrigin, p_lastKnownEnemyOrigin, v17, this->m_pAI->codeGoal.height, nodes, 256, nodeTypeFlags[combatMode]);
  v24 = this->m_pAI;
  v25 = v23;
  if ( v23 == 256 )
    Com_PrintError(18, "AI %d not considering all nodes in radius %0.f\n", (unsigned int)v24->ent->s.number, v24->codeGoal.radius);
  v26 = DVARINT_ai_debugCoverSelection;
  if ( !DVARINT_ai_debugCoverSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCoverSelection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.integer == 1 )
  {
    LODWORD(fmt) = level.time;
    Com_DPrintf(18, "AI %d FindBestCoverList on %d nodes at time %d\n", (unsigned int)v24->ent->s.number, v25, fmt);
  }
  if ( AIScriptedInterface::IsDoingAmbush(this) )
    blockPlanes.iPlaneCount = 0;
  else
    AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
  isDefined = EntHandle::isDefined(&this->m_pAI->codeGoal.hVolume);
  v28 = isDefined != 0;
  if ( isDefined )
    v29 = EntHandle::ent(&this->m_pAI->codeGoal.hVolume);
  else
    v29 = NULL;
  ValidNodeMetrics = AIScriptedInterface::Cover_GetValidNodeMetrics(this, nodes, v25, v29, &blockPlanes, v16, pMetricParams);
  v31 = ValidNodeMetrics;
  this->m_pAI->nodeSelect.numCoverNodesInGoal = ValidNodeMetrics;
  if ( ValidNodeMetrics )
  {
    if ( bestNodesInList == 1 )
    {
      *outBestScore = 0.0;
      v40 = -1;
      v41 = 0;
      v42 = ValidNodeMetrics;
      v43 = FLOAT_N3_4028235e38;
      if ( ValidNodeMetrics <= 0 )
        goto LABEL_85;
      p_metric = &nodes[0].metric;
      do
      {
        if ( v43 < *p_metric && this->m_pAI->pNavigator->IsNodeReachable(this->m_pAI->pNavigator, (const pathnode_t *)*((_QWORD *)p_metric - 1)) )
        {
          v43 = *p_metric;
          v40 = v41;
        }
        ++v41;
        p_metric += 4;
        --v42;
      }
      while ( v42 );
      if ( v40 < 0 )
      {
LABEL_85:
        node = NULL;
      }
      else
      {
        *outBestScore = v43;
        node = nodes[v40].node;
      }
      *bestNodes = node;
      Profile_EndInternal(NULL);
      LOBYTE(v8) = *bestNodes != NULL;
      return v8;
    }
    else
    {
      if ( bestNodesInList < ValidNodeMetrics )
        ValidNodeMetrics = bestNodesInList;
      BestNodesFromList = AIScriptedInterface::Cover_GetBestNodesFromList(this, nodes, v31, bestNodes, ValidNodeMetrics, 1, outBestScore);
      Profile_EndInternal(NULL);
      return BestNodesFromList;
    }
  }
  else
  {
    if ( v28 )
    {
      v32 = this->m_pAI;
      number = v32->codeGoal.hVolume.number;
      if ( (unsigned int)(number - 1) >= 0x7FF )
      {
        LODWORD(typeFlags) = 2047;
        LODWORD(durationa) = number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", durationa, typeFlags) )
          __debugbreak();
      }
      v34 = v32->codeGoal.hVolume.number;
      if ( (unsigned int)(v34 - 1) >= 0x800 )
      {
        LODWORD(typeFlags) = 2048;
        LODWORD(durationa) = v34 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", durationa, typeFlags) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v35 = v34 - 1;
      if ( g_entities[v35].r.isInUse != g_entityIsInUse[v35] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v35] )
      {
        LODWORD(typeFlags) = v32->codeGoal.hVolume.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", typeFlags) )
          __debugbreak();
      }
      v36 = (__int16)(v32->codeGoal.hVolume.number - 1);
      v37 = vtos(&outSearchOrigin);
      v38 = vtos(&this->m_pAI->ent->r.currentOrigin);
      LODWORD(durationa) = v36;
      Com_PrintWarning(18, "AI (entity %d, origin %s) didn't find nodes within its goal volume (origin %s, entity %d)", (unsigned int)this->m_pAI->ent->s.number, v38, v37, durationa);
    }
    Profile_EndInternal(NULL);
    return 0i64;
  }
}

/*
==============
AIScriptedInterface::Cover_FindBestTacPoint
==============
*/
tacpoint_t *AIScriptedInterface::Cover_FindBestTacPoint(AIScriptedInterface *this, scr_string_t coverSelectorOverride, bool bRequestDifferentCover, const gentity_s *volume, bool searchCenteredOnAI, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  const CoverSelector *v12; 
  scr_string_t defaultcoverselector; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *v15; 
  sentient_s *enemy; 
  pathnode_t *pClaimedNode; 
  gentity_s *v18; 
  float v19; 
  float v20; 
  ai_scripted_t *m_pAI; 
  gentity_s *v22; 
  double SearchRadiusAndOrigin; 
  __int64 PointsInRadiusWithVis_Sorted; 
  tacpoint_t *v25; 
  AINavigator2D *v26; 
  AINavigator2D *v27; 
  const bfx::AreaHandle *CurArea; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  tacpoint_t *v32; 
  tacpoint_t *v33; 
  double TacMetric; 
  float *v35; 
  const bfx::AreaHandle *AreaForPoint; 
  const tacpoint_t *PointForPathnode; 
  __int64 v39; 
  unsigned int physicsInstanceId; 
  const tacpoint_t *PointForPathnodeVis; 
  bfx::AreaHandle areaA; 
  __int64 v44; 
  pathsort_s nodes; 
  vec3_t outSearchOrigin; 
  bfx::PathSpec pathSpec; 
  tacpoint_t *pPoint[257]; 

  v44 = -2i64;
  if ( coverSelectorOverride )
  {
    p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
    mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
    if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
      return 0i64;
    do
    {
      if ( mp_parent[1].m_color < coverSelectorOverride )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase == &g_coverSelectorMap.m_endNodeBase || coverSelectorOverride < p_m_endNodeBase[1].m_color )
      return 0i64;
    v12 = (const CoverSelector *)p_m_endNodeBase[1].mp_parent;
  }
  else
  {
    defaultcoverselector = this->m_pAI->nodeSelect.defaultcoverselector;
    v14 = &g_coverSelectorMap.m_endNodeBase;
    v15 = g_coverSelectorMap.m_endNodeBase.mp_parent;
    if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
      return 0i64;
    do
    {
      if ( v15[1].m_color < defaultcoverselector )
      {
        v15 = v15->mp_right;
      }
      else
      {
        v14 = v15;
        v15 = v15->mp_left;
      }
    }
    while ( v15 );
    if ( v14 == &g_coverSelectorMap.m_endNodeBase || defaultcoverselector < v14[1].m_color )
      return 0i64;
    v12 = (const CoverSelector *)v14[1].mp_parent;
  }
  if ( !v12 )
    return 0i64;
  if ( !v12->considerTacPoints )
    return 0i64;
  if ( !pMetricParams->pEnemyTacPoint )
    return 0i64;
  enemy = pMetricParams->enemy;
  if ( enemy )
  {
    if ( enemy->bNearestTacPointBad )
      return 0i64;
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "AIFindBestTacCover");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2315, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2316, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  PointForPathnode = NULL;
  PointForPathnodeVis = NULL;
  if ( bRequestDifferentCover )
  {
    pClaimedNode = this->m_pAI->sentient->pClaimedNode;
    if ( pClaimedNode )
    {
      PointForPathnode = TacGraph_GetPointForPathnode(pClaimedNode);
      PointForPathnodeVis = TacGraph_GetPointForPathnodeVis(this->m_pAI->sentient->pClaimedNode);
    }
  }
  this->m_pAI->nodeSelect.requestDifferentCover = 0;
  if ( EntHandle::isDefined(&this->m_pAI->coverSelectionFocusEnt) )
  {
    v18 = EntHandle::ent(&this->m_pAI->coverSelectionFocusEnt);
    v19 = FLOAT_1024_0;
    *(_QWORD *)outSearchOrigin.v = *(_QWORD *)v18->r.currentOrigin.v;
    v20 = v18->r.currentOrigin.v[2];
  }
  else if ( searchCenteredOnAI )
  {
    v19 = FLOAT_1024_0;
    m_pAI = this->m_pAI;
    v22 = m_pAI->ent;
    *(_QWORD *)outSearchOrigin.v = *(_QWORD *)m_pAI->ent->r.currentOrigin.v;
    v20 = v22->r.currentOrigin.v[2];
  }
  else
  {
    SearchRadiusAndOrigin = AIScriptedInterface::Cover_GetSearchRadiusAndOrigin(this, &outSearchOrigin);
    v19 = *(float *)&SearchRadiusAndOrigin;
    v20 = outSearchOrigin.v[2];
  }
  outSearchOrigin.v[2] = v20 + 60.0;
  PointsInRadiusWithVis_Sorted = TacGraph_FindPointsInRadiusWithVis_Sorted(&outSearchOrigin, 0.0, v19, 0.0, pMetricParams->pEnemyTacPoint, (const tacpoint_t **)pPoint, 256);
  v25 = NULL;
  *outBestScore = 0.0;
  physicsInstanceId = -1;
  if ( volume )
    physicsInstanceId = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, volume);
  bfx::AreaHandle::AreaHandle(&areaA);
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  pathSpec.m_pathSharingPenalty = 0.0;
  pathSpec.m_maxPathSharingPenalty = 0.0;
  pathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  v26 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  v27 = v26;
  if ( v26 )
  {
    CurArea = AINavigator2D::GetCurArea(v26);
    bfx::AreaHandle::operator=(&areaA, CurArea);
    pathSpec = v27->m_BasePathSpec;
  }
  v29 = 0;
  v39 = PointsInRadiusWithVis_Sorted;
  if ( PointsInRadiusWithVis_Sorted > 0 )
  {
    v30 = 0i64;
    v31 = PointsInRadiusWithVis_Sorted;
    v32 = (tacpoint_t *)PointForPathnode;
    do
    {
      v33 = pPoint[v30];
      if ( v32 == v33 || PointForPathnodeVis == v33 )
        goto LABEL_58;
      if ( (!volume || PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pPoint[v30]->m_Pos, physicsInstanceId, volume)) && (v33->m_Type != 1 || Path_NodesInRadius(&v33->m_Pos, 4.0, &nodes, 1, -1) <= 0 || ((1 << LOBYTE(nodes.node->constant.type)) & 0x78030000) == 0) )
      {
        TacMetric = AIScriptedInterface::Cover_GetTacMetric(this, v33, pMetricParams, v12);
        v35 = outBestScore;
        if ( *(float *)&TacMetric <= *outBestScore )
        {
          if ( v25 )
          {
LABEL_56:
            if ( ++v29 >= 16 )
              break;
          }
        }
        else
        {
          if ( v27 )
          {
            AreaForPoint = TacGraph_GetAreaForPoint(v33);
            if ( !bfx::IsAreaReachableFromArea(&areaA, AreaForPoint, &pathSpec) )
              goto LABEL_56;
            v35 = outBestScore;
          }
          v25 = v33;
          *v35 = *(float *)&TacMetric;
          v29 = 0;
        }
      }
      v32 = (tacpoint_t *)PointForPathnode;
      v31 = v39;
LABEL_58:
      ++v30;
    }
    while ( v30 < v31 );
  }
  bfx::AreaHandle::~AreaHandle(&areaA);
  Sys_ProfEndNamedEvent();
  return v25;
}

/*
==============
AIScriptedInterface::Cover_FindCoverFromPoint
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindCoverFromPoint(AIScriptedInterface *this, const vec3_t *vPoint, float fMinSafeDist, CombatMode combatMode, gentity_s *pIgnoreEnt)
{
  signed __int64 v5; 
  void *v6; 
  __int64 v8; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  scr_string_t defaultcoverselector; 
  ntl::red_black_tree_node_base *mp_parent; 
  const CoverSelector *v14; 
  pathnode_t *pClaimedNode; 
  __int64 v16; 
  pathnode_t *v17; 
  ai_scripted_t *m_pAI; 
  pathnode_t *v19; 
  float v20; 
  GCombat *v21; 
  __int64 v22; 
  pathsort_s *p_nodes; 
  pathnode_t *node; 
  _BOOL8 v25; 
  double NodeMetric; 
  float v27; 
  bool v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  tacpoint_t *pEnemyTacPoint; 
  vec3_t forward; 
  vec3_t origin; 
  vec3_t vector; 
  pathsort_s nodes; 

  v6 = alloca(v5);
  v8 = combatMode;
  Profile_Begin(485);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1650, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1651, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
  defaultcoverselector = this->m_pAI->nodeSelect.defaultcoverselector;
  mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
  if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
    goto LABEL_16;
  do
  {
    if ( mp_parent[1].m_color < defaultcoverselector )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_coverSelectorMap.m_endNodeBase || defaultcoverselector < p_m_endNodeBase[1].m_color )
  {
LABEL_16:
    v14 = NULL;
  }
  else
  {
    v14 = (const CoverSelector *)p_m_endNodeBase[1].mp_parent;
    if ( v14 )
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1654, ASSERT_TYPE_ASSERT, "(pCoverSelector)", (const char *)&queryFormat, "pCoverSelector") )
    __debugbreak();
LABEL_19:
  origin = this->m_pAI->ent->r.currentOrigin;
  if ( AICommonInterface::NearClaimNode(this, 64.0) )
  {
    pClaimedNode = this->m_pAI->sentient->pClaimedNode;
    if ( !pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1665, ASSERT_TYPE_ASSERT, "(claimNode)", (const char *)&queryFormat, "claimNode") )
      __debugbreak();
    pathnode_t::GetAngles(pClaimedNode, &vector);
    AngleVectors(&vector, &forward, NULL, NULL);
    origin.v[0] = (float)(-256.0 * forward.v[0]) + origin.v[0];
    origin.v[1] = (float)(-256.0 * forward.v[1]) + origin.v[1];
  }
  v16 = Path_NodesInCylinder(&origin, NULL, 512.0, 80.0, &nodes, 256, nodeTypeFlags[v8]);
  v17 = Sentient_NearestNodeOfEnemy(this->m_pAI->sentient);
  m_pAI = this->m_pAI;
  *(_QWORD *)vector.v = v17;
  v19 = NULL;
  pEnemyTacPoint = (tacpoint_t *)Sentient_NearestTacPointOfEnemy(m_pAI->sentient);
  v20 = 0.0;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v21 = GCombat::ms_gCombatSystem;
  v22 = v16;
  if ( (int)v16 > 0 )
  {
    p_nodes = &nodes;
    do
    {
      node = p_nodes->node;
      pathnode_t::GetPos(p_nodes->node, &forward);
      NodeMetric = AIScriptedInterface::Cover_FromPoint_GetNodeMetric(this, node, *(const pathnode_t **)vector.v, pEnemyTacPoint, v14);
      v27 = *(float *)&NodeMetric;
      if ( *(float *)&NodeMetric > v20 )
      {
        LOBYTE(v25) = 1;
        if ( this->Cover_IsValidCover(this, node, v25) )
        {
          v28 = this->Is3D(this);
          v29 = vPoint->v[0];
          v30 = vPoint->v[1];
          v31 = v28 ? (float)((float)((float)(v30 - forward.v[1]) * (float)(v30 - forward.v[1])) + (float)((float)(v29 - forward.v[0]) * (float)(v29 - forward.v[0]))) + (float)((float)(vPoint->v[2] - forward.v[2]) * (float)(vPoint->v[2] - forward.v[2])) : (float)((float)(v30 - forward.v[1]) * (float)(v30 - forward.v[1])) + (float)((float)(v29 - forward.v[0]) * (float)(v29 - forward.v[0]));
          if ( v31 > (float)(fMinSafeDist * fMinSafeDist) )
            goto LABEL_43;
          if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1611, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          v32 = ((1 << LOBYTE(node->constant.type)) & 0x1020) != 0 || (node->constant.spawnflags & 8) != 0 ? FLOAT_20_0 : FLOAT_36_0;
          if ( !GCombat::CanRadiusDamageFromPos(v21, this->m_pAI->ent, &forward, pIgnoreEnt, vPoint, fMinSafeDist, 1.0, NULL, v32, 0, 9441297, 0, NULL) )
          {
LABEL_43:
            v20 = v27;
            v19 = node;
          }
        }
      }
      ++p_nodes;
      --v22;
    }
    while ( v22 );
  }
  Profile_EndInternal(NULL);
  return v19;
}

/*
==============
AIScriptedInterface::Cover_FindCoverNode
==============
*/
void AIScriptedInterface::Cover_FindCoverNode(AIScriptedInterface *this, CombatMode combatMode)
{
  ai_scripted_t *m_pAI; 
  int v5; 
  __int64 v6; 
  pathnode_t **v7; 
  unsigned __int16 v8; 
  float outBestScore[4]; 
  CoverNodeMetricParams metricParams; 
  pathnode_t *bestNodes[10]; 

  m_pAI = this->m_pAI;
  if ( m_pAI->eState[m_pAI->stateLevel] == AIS_BEHAVE )
  {
    AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
    v5 = 0;
    if ( AICommonInterface::GetTargetEntity(this) )
    {
      this->m_pAI->nodeSelect.iPotentialCoverNodeCount = AIScriptedInterface::Cover_FindBestCoverList(this, bestNodes, 10, combatMode, 0, (scr_string_t)0, &metricParams, outBestScore);
      if ( this->m_pAI->nodeSelect.iPotentialCoverNodeCount > 0 )
      {
        v6 = 1480i64;
        v7 = bestNodes;
        do
        {
          v8 = Path_ConvertNodeToIndex(*v7);
          v6 += 2i64;
          ++v5;
          ++v7;
          *(_WORD *)((char *)this->m_pAI + v6 - 2) = v8;
        }
        while ( v5 < this->m_pAI->nodeSelect.iPotentialCoverNodeCount );
      }
    }
    else
    {
      this->m_pAI->nodeSelect.iPotentialCoverNodeCount = 0;
    }
  }
  else
  {
    m_pAI->nodeSelect.iPotentialCoverNodeCount = 0;
  }
}

/*
==============
AIScriptedInterface::Cover_FindNearByCoverNode
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindNearByCoverNode(AIScriptedInterface *this, const vec3_t *origin, float searchRadius, CombatMode combatMode)
{
  signed __int64 v4; 
  __int128 v5; 
  void *v6; 
  __int64 v8; 
  float v10; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  scr_string_t defaultcoverselector; 
  ntl::red_black_tree_node_base *mp_parent; 
  const CoverSelector *v14; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  int v22; 
  __int64 v23; 
  pathnode_t *v25; 
  _BOOL8 v26; 
  __int64 v27; 
  pathsort_s *p_nodes; 
  const pathnode_t *node; 
  sentient_s *sentient; 
  int v31; 
  float *fDist; 
  PathBlockPlanes *p_blockPlanes; 
  double NodeMetric; 
  vec3_t pos; 
  PathBlockPlanes blockPlanes; 
  CoverNodeMetricParams metricParams; 
  pathsort_s nodes; 
  __int128 v39; 

  v6 = alloca(v4);
  v39 = v5;
  v8 = combatMode;
  Profile_Begin(485);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2705, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2706, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v10 = 0.0;
  if ( searchRadius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2707, ASSERT_TYPE_ASSERT, "(searchRadius > 0.f)", (const char *)&queryFormat, "searchRadius > 0.f") )
    __debugbreak();
  if ( (unsigned int)v8 > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2708, ASSERT_TYPE_ASSERT, "(combatMode >= 0 && combatMode < NUM_COMBAT_MODES)", (const char *)&queryFormat, "combatMode >= 0 && combatMode < NUM_COMBAT_MODES") )
    __debugbreak();
  p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
  this->m_pAI->nodeSelect.requestDifferentCover = 0;
  defaultcoverselector = this->m_pAI->nodeSelect.defaultcoverselector;
  mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
  if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
    goto LABEL_22;
  do
  {
    if ( mp_parent[1].m_color < defaultcoverselector )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_coverSelectorMap.m_endNodeBase || defaultcoverselector < p_m_endNodeBase[1].m_color )
  {
LABEL_22:
    v14 = NULL;
  }
  else
  {
    v14 = (const CoverSelector *)p_m_endNodeBase[1].mp_parent;
    if ( v14 )
      goto LABEL_25;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2712, ASSERT_TYPE_ASSERT, "(pCoverSelector)", (const char *)&queryFormat, "pCoverSelector") )
    __debugbreak();
LABEL_25:
  m_pAI = this->m_pAI;
  _XMM0 = LODWORD(m_pAI->codeGoal.radius);
  __asm { vminss  xmm6, xmm0, xmm6 }
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2667, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( *(float *)&_XMM6 > this->m_pAI->codeGoal.radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2668, ASSERT_TYPE_ASSERT, "(searchRadius <= m_pAI->codeGoal.radius)", (const char *)&queryFormat, "searchRadius <= m_pAI->codeGoal.radius") )
    __debugbreak();
  v18 = this->m_pAI;
  v19 = v18->codeGoal.pos.v[1] - origin->v[1];
  v20 = v18->codeGoal.pos.v[2] - origin->v[2];
  v21 = fsqrt((float)((float)(v19 * v19) + (float)((float)(v18->codeGoal.pos.v[0] - origin->v[0]) * (float)(v18->codeGoal.pos.v[0] - origin->v[0]))) + (float)(v20 * v20));
  if ( (float)(v21 + *(float *)&_XMM6) > v18->codeGoal.radius )
  {
    if ( v21 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2679, ASSERT_TYPE_ASSERT, "(distToCenter > 0.f)", (const char *)&queryFormat, "distToCenter > 0.f") )
      __debugbreak();
    v18 = this->m_pAI;
  }
  v22 = Path_NodesInCylinder(&v18->ent->r.currentOrigin, NULL, *(float *)&_XMM6, v18->codeGoal.height, &nodes, 256, nodeTypeFlags[v8]);
  v23 = v22;
  if ( v22 > 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2718, ASSERT_TYPE_ASSERT, "(iNodeCount <= 256)", (const char *)&queryFormat, "iNodeCount <= AI_GOAL_NODES_SIZE") )
    __debugbreak();
  if ( (_DWORD)v23 )
  {
    v25 = NULL;
    AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
    AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
    v27 = v23;
    if ( (int)v23 > 0 )
    {
      p_nodes = &nodes;
      do
      {
        node = p_nodes->node;
        sentient = this->m_pAI->sentient;
        if ( p_nodes->node != sentient->pClaimedNode && node != sentient->pPrevClaimedNode )
        {
          LOBYTE(v26) = 1;
          if ( this->Cover_IsValidCover(this, node, v26) )
          {
            if ( !blockPlanes.iPlaneCount )
              goto LABEL_54;
            if ( this->Is3D(this) )
              goto LABEL_54;
            v31 = 0;
            if ( blockPlanes.iPlaneCount <= 0 )
              goto LABEL_54;
            fDist = blockPlanes.fDist;
            p_blockPlanes = &blockPlanes;
            while ( 1 )
            {
              pathnode_t::GetPos(p_nodes->node, &pos);
              if ( (float)((float)(pos.v[1] * p_blockPlanes->vNormal[0].v[1]) + (float)(pos.v[0] * p_blockPlanes->vNormal[0].v[0])) > *fDist )
                break;
              ++v31;
              p_blockPlanes = (PathBlockPlanes *)((char *)p_blockPlanes + 8);
              ++fDist;
              if ( v31 >= blockPlanes.iPlaneCount )
                goto LABEL_54;
            }
            if ( v31 >= blockPlanes.iPlaneCount )
            {
LABEL_54:
              NodeMetric = AIScriptedInterface::Cover_GetNodeMetric(this, p_nodes->node, &metricParams, v14);
              p_nodes->metric = *(float *)&NodeMetric;
              if ( v10 < *(float *)&NodeMetric )
              {
                v25 = p_nodes->node;
                v10 = *(float *)&NodeMetric;
              }
            }
          }
        }
        ++p_nodes;
        --v27;
      }
      while ( v27 );
    }
    Profile_EndInternal(NULL);
    return v25;
  }
  else
  {
    Profile_EndInternal(NULL);
    return 0i64;
  }
}

/*
==============
AIScriptedInterface::Cover_FindShuffleCoverNode
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindShuffleCoverNode(AIScriptedInterface *this)
{
  pathnode_t *pClaimedNode; 
  __int16 wLinkCount; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  _OWORD *v7; 
  pathlink_s *Links; 
  pathnode_t *v9; 
  _BOOL8 v10; 
  int v11; 
  float *fDist; 
  PathBlockPlanes *p_blockPlanes; 
  const pathnodeRange_t *Range; 
  const gentity_s *TargetEntity; 
  int v16; 
  int v17; 
  char *v18; 
  unsigned int v19; 
  __int64 v32; 
  __int64 i; 
  __int64 v34; 
  int v35; 
  pathnode_t *v36; 
  __int128 v37; 
  pathnode_t *v42; 
  CoverNodeMetricParams metricParams; 
  vec2_t dirToNode; 
  vec3_t vPoint; 
  vec3_t pos; 
  vec3_t outLastKnownPos; 
  PathBlockPlanes blockPlanes; 
  int v49[8]; 
  char v50; 
  _QWORD node[128]; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2521, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2522, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2523, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  this->m_pAI->nodeSelect.requestDifferentCover = 0;
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  v42 = pClaimedNode;
  if ( !pClaimedNode )
    return 0i64;
  pathnode_t::GetPos(pClaimedNode, &pos);
  wLinkCount = pClaimedNode->dynamic.wLinkCount;
  if ( wLinkCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2534, ASSERT_TYPE_ASSERT, "(nodeCount <= 64)", (const char *)&queryFormat, "nodeCount <= AI_NEAREST_NODES_SIZE") )
    __debugbreak();
  AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
  AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
  v4 = 0i64;
  dirToNode = (vec2_t)wLinkCount;
  v5 = 0;
  if ( wLinkCount > 0 )
  {
    v6 = 0i64;
    v7 = node;
    do
    {
      Links = pClaimedNode->constant.Links;
      if ( Links[v6].flags )
      {
        v9 = Path_ConvertIndexToNode(Links[v6].nodeNum);
        if ( ((1 << LOBYTE(v9->constant.type)) & 0x4000DC) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2554, ASSERT_TYPE_ASSERT, "(Path_IsWallCoverNode( node ) || Path_IsCornerNode( node ))", (const char *)&queryFormat, "Path_IsWallCoverNode( node ) || Path_IsCornerNode( node )") )
          __debugbreak();
        pathnode_t::GetPos(v9, &vPoint);
        if ( AICommonInterface::PointAtGoal(this, &vPoint, &this->m_pAI->codeGoal) )
        {
          LOBYTE(v10) = 1;
          if ( this->Cover_IsValidCover(this, v9, v10) && (!metricParams.enemyNode || Path_NodesVisible(v9, metricParams.enemyNode)) && !Path_ActorIsDangerousNode(v9, this->m_pAI->sentient->eTeam) )
          {
            if ( !blockPlanes.iPlaneCount )
              goto LABEL_32;
            v11 = 0;
            if ( blockPlanes.iPlaneCount <= 0 )
              goto LABEL_32;
            fDist = blockPlanes.fDist;
            p_blockPlanes = &blockPlanes;
            while ( (float)((float)(vPoint.v[1] * p_blockPlanes->vNormal[0].v[1]) + (float)(vPoint.v[0] * p_blockPlanes->vNormal[0].v[0])) <= *fDist )
            {
              ++v11;
              p_blockPlanes = (PathBlockPlanes *)((char *)p_blockPlanes + 8);
              ++fDist;
              if ( v11 >= blockPlanes.iPlaneCount )
                goto LABEL_32;
            }
            if ( v11 >= blockPlanes.iPlaneCount )
            {
LABEL_32:
              if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 505, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
                __debugbreak();
              Range = AIScriptedInterface::Cover_GetRange(v9);
              TargetEntity = AICommonInterface::GetTargetEntity(this);
              if ( TargetEntity )
              {
                Sentient_GetLastKnownEnemyPosWithDuration(this->m_pAI->sentient, TargetEntity, 500, &outLastKnownPos);
                v16 = AIScriptedInterface::Cover_NodeRangeValid(this, &outLastKnownPos, v9, Range);
                pClaimedNode = v42;
                if ( v16 )
                {
                  ++v5;
                  *(_QWORD *)v7++ = v9;
                }
              }
              else
              {
                pClaimedNode = v42;
              }
            }
          }
        }
      }
      ++v6;
      --*(_QWORD *)&dirToNode;
    }
    while ( dirToNode );
  }
  v17 = 0;
  if ( v5 > 0 && (unsigned int)v5 >= 0x10 )
  {
    v18 = &v50;
    v19 = 8;
    do
    {
      _XMM0 = (unsigned int)v17;
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      *((_OWORD *)v18 - 2) = _XMM1;
      _XMM0 = v19 - 4;
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      *((_OWORD *)v18 - 1) = _XMM1;
      _XMM0 = v19;
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      *(_OWORD *)v18 = _XMM1;
      v17 += 16;
      _XMM0 = v19 + 4;
      __asm
      {
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      v19 += 16;
      *((_OWORD *)v18 + 1) = _XMM1;
      v18 += 64;
    }
    while ( v17 < v5 - (v5 & 0xF) );
  }
  v32 = v17;
  if ( v17 < (__int64)v5 )
  {
    do
      v49[v32++] = v17++;
    while ( v32 < v5 );
  }
  if ( v5 <= 0 )
    return 0i64;
  for ( i = 0i64; i < v5; v49[i++] = v35 )
  {
    v34 = G_rand() % v5;
    v35 = v49[v34];
    v49[v34] = v49[i];
  }
  while ( 1 )
  {
    v36 = (pathnode_t *)node[2 * v49[v4]];
    pathnode_t::GetPos(v36, &vPoint);
    v37 = LODWORD(vPoint.v[1]);
    *(float *)&v37 = fsqrt((float)((float)(vPoint.v[1] - pos.v[1]) * (float)(vPoint.v[1] - pos.v[1])) + (float)((float)(vPoint.v[0] - pos.v[0]) * (float)(vPoint.v[0] - pos.v[0])));
    _XMM3 = v37;
    __asm
    {
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm6, xmm0
    }
    dirToNode.v[1] = (float)(1.0 / *(float *)&_XMM0) * (float)(vPoint.v[1] - pos.v[1]);
    dirToNode.v[0] = (float)(1.0 / *(float *)&_XMM0) * (float)(vPoint.v[0] - pos.v[0]);
    if ( AIScriptedInterface::Cover_IsPathToShuffleNodeClear(this, v36, &dirToNode, *(float *)&v37) )
      break;
    if ( ++v4 >= v5 )
      return 0i64;
  }
  return v36;
}

/*
==============
AIScriptedInterface::Cover_FromPoint_GetNodeMetric
==============
*/
float AIScriptedInterface::Cover_FromPoint_GetNodeMetric(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, const tacpoint_t *pEnemyTacPoint, const CoverSelector *pCoverSelector)
{
  float v9; 
  float v11; 
  int isDefined; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  float distanceMin; 
  float distanceOptimal; 
  bool HasVis; 
  int v21; 
  float strictCoverNodeWeight; 
  const pathnodeRange_t *Range; 
  bool useDistanceSquared; 
  double v34; 
  vec3_t outPos; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1255, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1256, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1257, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v9 = 0.0;
  LODWORD(_XMM8) = 0;
  v11 = 0.0;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( pCoverSelector->distanceWeight > 0.0 )
  {
    isDefined = EntHandle::isDefined(&this->m_pAI->coverSelectionFocusEnt);
    m_pAI = this->m_pAI;
    if ( isDefined )
      ent = EntHandle::ent(&m_pAI->coverSelectionFocusEnt);
    else
      ent = m_pAI->ent;
    distanceMin = pCoverSelector->distanceMin;
    v34 = *(double *)ent->r.currentOrigin.v;
    distanceOptimal = pCoverSelector->distanceOptimal;
    outPos.v[2] = ent->r.currentOrigin.v[2];
    useDistanceSquared = pCoverSelector->useDistanceSquared;
    *(double *)outPos.v = v34;
    v9 = AIScriptedInterface::Cover_ScoreOnDistance(this, &pos, &outPos, distanceMin, distanceOptimal, pCoverSelector->distanceMax, useDistanceSquared) * pCoverSelector->distanceWeight;
  }
  _XMM7 = LODWORD(pCoverSelector->visibleWeight);
  if ( *(float *)&_XMM7 > 0.0 || pCoverSelector->notVisibleWeight > 0.0 )
  {
    HasVis = 1;
    if ( pEnemyTacPoint )
    {
      HasVis = TacGraph_HasVis(pEnemyTacPoint, node);
    }
    else if ( enemyNode )
    {
      HasVis = Path_NodesVisible(node, enemyNode) == 1;
    }
    _XMM0 = HasVis;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm8, xmm7, xmm8, xmm2
    }
  }
  v21 = 1 << LOBYTE(node->constant.type);
  if ( (v21 & 0x806400FC) != 0 )
  {
    strictCoverNodeWeight = pCoverSelector->strictCoverNodeWeight;
  }
  else if ( (v21 & 0x1C00) != 0 )
  {
    strictCoverNodeWeight = pCoverSelector->concealNodeWeight;
  }
  else if ( (v21 & 0x2000200) != 0 )
  {
    strictCoverNodeWeight = pCoverSelector->exposedNodeWeight;
  }
  else if ( (v21 & 0x100) != 0 )
  {
    strictCoverNodeWeight = pCoverSelector->ambushNodeWeight;
  }
  else
  {
    strictCoverNodeWeight = 0.0;
  }
  if ( pCoverSelector->nodeAngleWeight > 0.0 )
  {
    LODWORD(_XMM1) = 0;
    if ( enemyNode )
    {
      pathnode_t::GetPos((pathnode_t *)enemyNode, &outPos);
    }
    else
    {
      if ( !pEnemyTacPoint )
      {
LABEL_39:
        v11 = *(float *)&_XMM1 * pCoverSelector->nodeAngleWeight;
        goto LABEL_40;
      }
      TacGraph_GetApproxGroundPosForPoint(pEnemyTacPoint, &outPos);
    }
    Range = AIScriptedInterface::Cover_GetRange(node);
    if ( Path_NodeIgnoresAngles(node) )
    {
      *(float *)&_XMM1 = FLOAT_1_0;
    }
    else
    {
      _XMM0 = AIScriptedInterface::Cover_IsWithinNodeAngle(&outPos, node, Range);
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_1_0);
      __asm { vblendvps xmm1, xmm1, xmm6, xmm2 }
    }
    goto LABEL_39;
  }
LABEL_40:
  _XMM0 = node->constant.spawnflags & 0x40;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(pCoverSelector->priorityWeight);
  __asm { vblendvps xmm3, xmm1, xmm6, xmm2 }
  return *(float *)&_XMM3 + (float)((float)((float)(*(float *)&_XMM8 + v9) + strictCoverNodeWeight) + v11);
}

/*
==============
AIScriptedInterface::Cover_GetBestNodesFromList
==============
*/
__int64 AIScriptedInterface::Cover_GetBestNodesFromList(AIScriptedInterface *this, pathsort_s *nodes, int nodeCount, pathnode_t **bestNodes, int bestNodesInList, bool bCheckReachability, float *outBestScore)
{
  int v7; 
  size_t v9; 
  AIScriptedInterface *v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  pathsort_s *v17; 
  const pathnode_t *v18; 
  ai_scripted_t *m_pAI; 
  const char *v20; 

  v7 = bestNodesInList;
  v9 = nodeCount;
  v11 = this;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2154, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !nodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2155, ASSERT_TYPE_ASSERT, "(nodes)", (const char *)&queryFormat, "nodes") )
    __debugbreak();
  if ( !bestNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2156, ASSERT_TYPE_ASSERT, "(bestNodes)", (const char *)&queryFormat, "bestNodes") )
    __debugbreak();
  if ( bestNodesInList <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2157, ASSERT_TYPE_ASSERT, "(bestNodesInList > 0)", (const char *)&queryFormat, "bestNodesInList > 0") )
    __debugbreak();
  v12 = 0;
  *outBestScore = 0.0;
  qsort(nodes, v9, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_node_sort);
  v13 = bestNodesInList - 1;
  v14 = bestNodesInList - 1i64;
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = 0i64;
    v17 = &nodes[v14];
    do
    {
      if ( !bCheckReachability || this->m_pAI->pNavigator->IsNodeReachable(this->m_pAI->pNavigator, v17->node) )
      {
        if ( !v16 )
          *outBestScore = v17->metric;
        ++v12;
        bestNodes[v16++] = v17->node;
      }
      --v17;
      --v14;
    }
    while ( v14 >= 0 );
    v7 = bestNodesInList;
    v11 = this;
    v13 = bestNodesInList - 1;
    v15 = bestNodesInList - 1i64;
  }
  if ( v7 > 0 )
  {
    v18 = bestNodes[v15];
    m_pAI = v11->m_pAI;
    v20 = j_va("best%d", v13);
    DebugDrawNodePicking(v20, m_pAI, v18, &colorGreen);
  }
  return v12;
}

/*
==============
AIScriptedInterface::Cover_GetCoverNode
==============
*/
pathnode_t *AIScriptedInterface::Cover_GetCoverNode(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2813, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2814, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  m_pAI = this->m_pAI;
  if ( !TargetEntity )
    goto LABEL_8;
  if ( !m_pAI->nodeSelect.iPotentialCoverNodeCount )
    return 0i64;
  if ( !AICommonInterface::HasPath(this) )
  {
    m_pAI = this->m_pAI;
    if ( level.time < m_pAI->iTeamMoveWaitTime )
    {
LABEL_8:
      m_pAI->nodeSelect.iPotentialCoverNodeCount = 0;
      return 0i64;
    }
  }
  return Path_ConvertIndexToNode(this->m_pAI->potentialCoverNode[--this->m_pAI->nodeSelect.iPotentialCoverNodeCount]);
}

/*
==============
AIScriptedInterface::Cover_GetNodeMetric
==============
*/
float AIScriptedInterface::Cover_GetNodeMetric(AIScriptedInterface *this, const pathnode_t *node, const CoverNodeMetricParams *metricParams, const CoverSelector *pCoverSelector)
{
  float heightWeight; 
  float engagementWeight; 
  float v11; 
  float v12; 
  float targetHeightWeight; 
  double v14; 
  float distanceOptimal; 
  float distanceMin; 
  __int64 NodeTeam; 
  ai_scripted_t *m_pAI; 
  float distToEnemy; 
  double v23; 
  double v24; 
  const tacpoint_t *pEnemyTacPoint; 
  bool HasVis; 
  pathnode_t *enemyNode; 
  int v32; 
  float strictCoverNodeWeight; 
  double v34; 
  double v35; 
  ai_scripted_t *v43; 
  sentient_s *sentient; 
  float stickinessWeight; 
  const pathnode_t *pClaimedNode; 
  float v47; 
  int v48; 
  float v49; 
  float lmgMountableWeight; 
  double v51; 
  __int64 v53; 
  __int64 v54; 
  bool useDistanceSquared; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  vec3_t v62; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1017, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1018, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1019, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "getnodemetric");
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  _XMM6 = 0i64;
  heightWeight = 0.0;
  v56 = 0.0;
  v57 = 0.0;
  v58 = 0.0;
  v59 = 0.0;
  engagementWeight = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  targetHeightWeight = 0.0;
  if ( pCoverSelector->distanceWeight > 0.0 )
  {
    v14 = *(double *)metricParams->referenceOrigin.v;
    distanceOptimal = pCoverSelector->distanceOptimal;
    distanceMin = pCoverSelector->distanceMin;
    v62.v[2] = metricParams->referenceOrigin.v[2];
    useDistanceSquared = pCoverSelector->useDistanceSquared;
    *(double *)v62.v = v14;
    v56 = AIScriptedInterface::Cover_ScoreOnDistance(this, &pos, &v62, distanceMin, distanceOptimal, pCoverSelector->distanceMax, useDistanceSquared) * pCoverSelector->distanceWeight;
  }
  NodeTeam = Path_GetNodeTeam(this->m_pAI->sentient->eTeam);
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 565, ASSERT_TYPE_ASSERT, "( BG_ActorOrAgentSystemEnabled() )", "Access to pathnode_dynamic_t::actors") )
    __debugbreak();
  if ( (unsigned int)NodeTeam >= 3 )
  {
    LODWORD(v54) = 3;
    LODWORD(v53) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v53, v54) )
      __debugbreak();
  }
  _XMM1 = (unsigned int)node->dynamic.actors.dangerousNodeTime[NodeTeam];
  __asm
  {
    vpcmpgtd xmm0, xmm1, xmm2
    vblendvps xmm0, xmm6, xmm3, xmm0
  }
  v61 = *(float *)&_XMM0;
  if ( pCoverSelector->engagementWeight > 0.0 )
  {
    m_pAI = this->m_pAI;
    distToEnemy = metricParams->distToEnemy;
    if ( distToEnemy > m_pAI->nodeSelect.engageMinDist && distToEnemy < m_pAI->nodeSelect.engageMaxDist )
      engagementWeight = pCoverSelector->engagementWeight;
  }
  if ( pCoverSelector->targetDirWeight > 0.0 )
  {
    v23 = AIScriptedInterface::Cover_ScoreOnTargetDir(this, &pos, metricParams);
    v11 = *(float *)&v23 * pCoverSelector->targetDirWeight;
  }
  if ( pCoverSelector->moveTowardsTargetWeight != 0.0 )
  {
    v24 = AIScriptedInterface::Cover_ScoreOnMoveTowardsTargetWeight(this, &pos, metricParams);
    v57 = *(float *)&v24 * pCoverSelector->moveTowardsTargetWeight;
  }
  _XMM7 = LODWORD(pCoverSelector->visibleWeight);
  if ( *(float *)&_XMM7 > 0.0 || pCoverSelector->notVisibleWeight > 0.0 )
  {
    pEnemyTacPoint = metricParams->pEnemyTacPoint;
    HasVis = 1;
    enemyNode = metricParams->enemyNode;
    if ( pEnemyTacPoint )
    {
      HasVis = TacGraph_HasVis(pEnemyTacPoint, node);
    }
    else if ( enemyNode )
    {
      HasVis = Path_NodesVisible(node, enemyNode) == 1;
    }
    _XMM0 = HasVis;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm7, xmm8, xmm2
    }
    v12 = *(float *)&_XMM0;
  }
  v32 = 1 << LOBYTE(node->constant.type);
  if ( (v32 & 0x806400FC) != 0 )
  {
    strictCoverNodeWeight = pCoverSelector->strictCoverNodeWeight;
  }
  else if ( (v32 & 0x1C00) != 0 )
  {
    strictCoverNodeWeight = pCoverSelector->concealNodeWeight;
  }
  else if ( (v32 & 0x2000200) != 0 )
  {
    strictCoverNodeWeight = pCoverSelector->exposedNodeWeight;
  }
  else if ( (v32 & 0x100) != 0 )
  {
    strictCoverNodeWeight = pCoverSelector->ambushNodeWeight;
  }
  else
  {
    strictCoverNodeWeight = 0.0;
  }
  if ( pCoverSelector->nodeAngleWeight > 0.0 && metricParams->lastKnownValid )
  {
    v34 = AIScriptedInterface::Cover_ScoreOnNodeAngle(this, node, &metricParams->lastKnownEnemyOrigin);
    v58 = *(float *)&v34 * pCoverSelector->nodeAngleWeight;
  }
  if ( pCoverSelector->secondaryTargetWeight > 0.0 )
  {
    v35 = AIScriptedInterface::Cover_ScoreOnSecondaryTargets(this, node);
    v59 = *(float *)&v35 * pCoverSelector->secondaryTargetWeight;
  }
  _XMM11 = LODWORD(pCoverSelector->indoorWeight);
  _XMM0 = node->constant.spawnflags & 0x40;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(pCoverSelector->priorityWeight);
  __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
  v60 = *(float *)&_XMM0;
  if ( !metricParams->enemyNode )
  {
    _XMM0 = node->constant.spawnflags & 0x2000;
    __asm
    {
      vpcmpeqd xmm3, xmm0, xmm1
      vblendvps xmm11, xmm11, xmm2, xmm3
    }
  }
  v43 = this->m_pAI;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v43->ent->r.currentOrigin.v[2] - pos.v[2]) & _xmm) <= 80.0 )
    heightWeight = pCoverSelector->heightWeight;
  if ( metricParams->lastKnownValid && COERCE_FLOAT(COERCE_UNSIGNED_INT(metricParams->lastKnownEnemyOrigin.v[2] - pos.v[2]) & _xmm) <= 80.0 )
    targetHeightWeight = pCoverSelector->targetHeightWeight;
  sentient = v43->sentient;
  stickinessWeight = pCoverSelector->stickinessWeight;
  pClaimedNode = sentient->pClaimedNode;
  if ( node == pClaimedNode )
  {
    if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 838, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    v47 = FLOAT_1_0;
    if ( pClaimedNode )
    {
      v48 = level.time - this->m_pAI->sentient->timeOfNodeClaim;
      if ( v48 <= 4000 )
        v47 = (float)((float)(1.0 - (float)((float)v48 * 0.00025000001)) * 2.0) + 1.0;
    }
    v43 = this->m_pAI;
    v49 = v47 * stickinessWeight;
  }
  else
  {
    v49 = 0.0;
  }
  if ( (node->constant.spawnflags & 0x10000) != 0 )
    lmgMountableWeight = pCoverSelector->lmgMountableWeight;
  else
    lmgMountableWeight = 0.0;
  if ( (v43->postGoldPadding & 1) != 0 )
  {
    v51 = AIScriptedInterface::Cover_ScoreOnNearAllies(this, &pos);
    LODWORD(_XMM6) = LODWORD(v51);
  }
  Sys_ProfEndNamedEvent();
  return (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v61 + v56) + engagementWeight) + v11) + v57) + v12) + strictCoverNodeWeight) + v58) + v59) + v60) + *(float *)&_XMM11) + heightWeight) + targetHeightWeight) + v49) + lmgMountableWeight) + *(float *)&_XMM6;
}

/*
==============
AIScriptedInterface::Cover_GetRange
==============
*/
pathnodeRange_t *AIScriptedInterface::Cover_GetRange(const pathnode_t *node)
{
  unsigned __int16 type; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 434, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  type = node->constant.type;
  if ( type == 18 )
  {
    TurretNode_GetAngles(node, &nodeRangeTurret.fAngleMin, &nodeRangeTurret.fAngleMax);
    nodeRangeTurret.minSqDist = FLOAT_65536_0;
    return &nodeRangeTurret;
  }
  if ( (node->constant.spawnflags & 0x100200) == 0 )
    goto LABEL_17;
  if ( ((1 << type) & 0x40) != 0 )
    return &nodeRangeRightWide;
  if ( ((1 << type) & 0x80u) != 0 )
    return &nodeRangeLeftWide;
LABEL_17:
  if ( !nodeRangeTable[type] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 452, ASSERT_TYPE_ASSERT, "(nodeRangeTable[ node->constant.type ])", (const char *)&queryFormat, "nodeRangeTable[ node->constant.type ]") )
    __debugbreak();
  return (pathnodeRange_t *)nodeRangeTable[node->constant.type];
}

/*
==============
AIScriptedInterface::Cover_GetSearchRadiusAndOrigin
==============
*/
float AIScriptedInterface::Cover_GetSearchRadiusAndOrigin(AIScriptedInterface *this, vec3_t *outSearchOrigin)
{
  ai_scripted_t *m_pAI; 
  float radius; 
  ai_scripted_t *v10; 
  aiGoalSources codeGoalSrc; 
  __int128 radius_low; 
  gentity_s *ent; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v21; 
  float v24; 
  float v25; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2073, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  radius = m_pAI->codeGoal.radius;
  _XMM0 = m_pAI->threat.allEnemiesInSimilarDir;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1024_0);
  __asm { vblendvps xmm7, xmm1, xmm2, xmm3 }
  if ( radius > *(float *)&_XMM7 )
  {
    ent = m_pAI->ent;
    v21 = LODWORD(m_pAI->codeGoal.pos.v[1]);
    v16 = m_pAI->codeGoal.pos.v[1] - m_pAI->ent->r.currentOrigin.v[1];
    v17 = m_pAI->ent->r.currentOrigin.v[0];
    v18 = m_pAI->codeGoal.pos.v[0] - v17;
    v19 = m_pAI->codeGoal.pos.v[2] - m_pAI->ent->r.currentOrigin.v[2];
    *(float *)&v21 = fsqrt((float)((float)(v16 * v16) + (float)(v18 * v18)) + (float)(v19 * v19));
    _XMM4 = v21;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    if ( (float)(radius - *(float *)&v21) <= *(float *)&_XMM7 )
    {
      v25 = *(float *)&v21 - (float)(radius - *(float *)&_XMM7);
      outSearchOrigin->v[0] = (float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * v25) + v17;
      v24 = (float)((float)(v16 * (float)(1.0 / *(float *)&_XMM0)) * v25) + ent->r.currentOrigin.v[1];
    }
    else
    {
      outSearchOrigin->v[0] = v17;
      v24 = ent->r.currentOrigin.v[1];
    }
    outSearchOrigin->v[1] = v24;
    LODWORD(_XMM0) = _XMM7;
    outSearchOrigin->v[2] = this->m_pAI->codeGoal.pos.v[2];
  }
  else
  {
    outSearchOrigin->v[0] = m_pAI->codeGoal.pos.v[0];
    outSearchOrigin->v[1] = m_pAI->codeGoal.pos.v[1];
    outSearchOrigin->v[2] = m_pAI->codeGoal.pos.v[2];
    v10 = this->m_pAI;
    codeGoalSrc = v10->codeGoalSrc;
    if ( codeGoalSrc == AI_GOAL_SRC_SCRIPT_ENTITY_GOAL || codeGoalSrc == AI_GOAL_SRC_BT_ENTITY_GOAL )
    {
      radius_low = LODWORD(v10->codeGoal.radius);
      *(float *)&radius_low = v10->codeGoal.radius - 128.0;
      _XMM1 = radius_low;
      __asm { vmaxss  xmm0, xmm1, cs:__real@42800000 }
    }
    else
    {
      *(float *)&_XMM0 = v10->codeGoal.radius;
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_GetTacMetric
==============
*/
float AIScriptedInterface::Cover_GetTacMetric(AIScriptedInterface *this, const tacpoint_t *pPoint, const CoverNodeMetricParams *metricParams, const CoverSelector *pCoverSelector)
{
  float engagementWeight; 
  float v10; 
  float v11; 
  float v13; 
  float targetHeightWeight; 
  double v15; 
  float distanceOptimal; 
  float distanceMin; 
  ai_scripted_t *m_pAI; 
  float distToEnemy; 
  double v20; 
  double v21; 
  const tacpoint_t *pEnemyTacPoint; 
  bool HasVis; 
  float exposedNodeWeight; 
  double v28; 
  float v29; 
  float heightWeight; 
  bool useDistanceSquared; 
  vec3_t v36; 
  float v37; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1159, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1160, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1161, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "getnodemetric_tac");
  _XMM7 = 0i64;
  v37 = 0.0;
  engagementWeight = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  LODWORD(_XMM12) = 0;
  v13 = 0.0;
  targetHeightWeight = 0.0;
  if ( pCoverSelector->distanceWeight > 0.0 )
  {
    v15 = *(double *)metricParams->referenceOrigin.v;
    distanceOptimal = pCoverSelector->distanceOptimal;
    distanceMin = pCoverSelector->distanceMin;
    v36.v[2] = metricParams->referenceOrigin.v[2];
    useDistanceSquared = pCoverSelector->useDistanceSquared;
    *(double *)v36.v = v15;
    v37 = AIScriptedInterface::Cover_ScoreOnDistance(this, &pPoint->m_Pos, &v36, distanceMin, distanceOptimal, pCoverSelector->distanceMax, useDistanceSquared) * pCoverSelector->distanceWeight;
  }
  if ( pCoverSelector->engagementWeight > 0.0 )
  {
    m_pAI = this->m_pAI;
    distToEnemy = metricParams->distToEnemy;
    if ( distToEnemy > m_pAI->nodeSelect.engageMinDist && distToEnemy < m_pAI->nodeSelect.engageMaxDist )
      engagementWeight = pCoverSelector->engagementWeight;
  }
  if ( pCoverSelector->targetDirWeight > 0.0 )
  {
    v20 = AIScriptedInterface::Cover_ScoreOnTargetDir(this, &pPoint->m_Pos, metricParams);
    v10 = *(float *)&v20 * pCoverSelector->targetDirWeight;
  }
  if ( pCoverSelector->moveTowardsTargetWeight != 0.0 )
  {
    v21 = AIScriptedInterface::Cover_ScoreOnMoveTowardsTargetWeight(this, &pPoint->m_Pos, metricParams);
    v11 = *(float *)&v21 * pCoverSelector->moveTowardsTargetWeight;
  }
  _XMM6 = LODWORD(pCoverSelector->visibleWeight);
  if ( *(float *)&_XMM6 > 0.0 || pCoverSelector->notVisibleWeight > 0.0 )
  {
    pEnemyTacPoint = metricParams->pEnemyTacPoint;
    if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 773, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
      __debugbreak();
    HasVis = 1;
    if ( pEnemyTacPoint )
      HasVis = TacVisGraph_HasVis(pPoint, pEnemyTacPoint);
    _XMM0 = HasVis;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm12, xmm6, xmm8, xmm2
    }
  }
  exposedNodeWeight = pCoverSelector->exposedNodeWeight;
  if ( pCoverSelector->secondaryTargetWeight > 0.0 )
  {
    v28 = AIScriptedInterface::Cover_ScoreOnSecondaryTargets_Tac(this, pPoint);
    v13 = *(float *)&v28 * pCoverSelector->secondaryTargetWeight;
  }
  v29 = pPoint->m_Pos.v[2];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(this->m_pAI->ent->r.currentOrigin.v[2] - v29) & _xmm) <= 80.0 )
    heightWeight = pCoverSelector->heightWeight;
  else
    heightWeight = 0.0;
  if ( metricParams->lastKnownValid && COERCE_FLOAT(COERCE_UNSIGNED_INT(metricParams->lastKnownEnemyOrigin.v[2] - v29) & _xmm) <= 80.0 )
    targetHeightWeight = pCoverSelector->targetHeightWeight;
  AIScriptedInterface::GetCoverTacPoint(this);
  _XMM0 = (unsigned __int64)pPoint;
  __asm
  {
    vpcmpeqq xmm2, xmm0, xmm1
    vblendvps xmm7, xmm7, xmm6, xmm2
  }
  *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnCrowdedness_Tac(this, pPoint, cCrowdednessWeight);
  Sys_ProfEndNamedEvent();
  return (float)((float)((float)((float)((float)((float)((float)((float)((float)(exposedNodeWeight + v37) + engagementWeight) + v10) + v11) + *(float *)&_XMM12) + v13) + heightWeight) + targetHeightWeight) + *(float *)&_XMM7) + *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_GetValidNodeMetrics
==============
*/
__int64 AIScriptedInterface::Cover_GetValidNodeMetrics(AIScriptedInterface *this, pathsort_s *nodes, int iNodeCount, gentity_s *volume, const PathBlockPlanes *blockPlanes, const CoverSelector *pCoverSelector, CoverNodeMetricParams *pMetricParams)
{
  pathsort_s *v8; 
  __int64 v9; 
  unsigned __int16 v10; 
  pathsort_s *v11; 
  __int64 v12; 
  char v13; 
  pathnode_t *node; 
  _BOOL8 v15; 
  ai_scripted_t *v16; 
  const char *v17; 
  sentient_s *sentient; 
  pathnode_t *pNearestNode; 
  unsigned __int16 v20; 
  __int64 iPlaneCount; 
  __int64 v22; 
  int v23; 
  float *fDist; 
  pathsort_s v25; 
  double NodeMetric; 
  ai_scripted_t *m_pAI; 
  const char *v29; 
  unsigned __int16 v30; 
  vec3_t pos; 

  v8 = nodes;
  v9 = iNodeCount;
  if ( !blockPlanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1851, ASSERT_TYPE_ASSERT, "(blockPlanes)", (const char *)&queryFormat, "blockPlanes") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1852, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GetValidNodeMetrics");
  v30 = 0;
  v10 = 0;
  if ( (int)v9 > 0 )
  {
    v11 = &v8[v9];
    while ( 1 )
    {
      v12 = v10;
      v13 = 1;
      node = v8[v10].node;
      pathnode_t::GetPos(node, &pos);
      if ( !pMetricParams->enemy && pMetricParams->lastKnownValid )
        break;
      LOBYTE(v15) = 1;
      if ( this->Cover_IsValidCover(this, node, v15) )
        goto LABEL_31;
LABEL_36:
      v13 = 0;
LABEL_37:
      if ( !blockPlanes->iPlaneCount || this->Is3D(this) )
        goto LABEL_48;
      iPlaneCount = blockPlanes->iPlaneCount;
      v22 = 0i64;
      v23 = 0;
      if ( (int)iPlaneCount > 0 )
      {
        fDist = blockPlanes->fDist;
        do
        {
          if ( (float)((float)(pos.v[0] * blockPlanes->vNormal[v22].v[0]) + (float)(pos.v[1] * blockPlanes->vNormal[v22].v[1])) > *fDist )
            break;
          ++v23;
          ++v22;
          ++fDist;
        }
        while ( v22 < iPlaneCount );
      }
      if ( v23 >= (int)iPlaneCount )
      {
LABEL_48:
        if ( v13 )
        {
          NodeMetric = AIScriptedInterface::Cover_GetNodeMetric(this, node, pMetricParams, pCoverSelector);
          nodes[v12].metric = *(float *)&NodeMetric;
          m_pAI = this->m_pAI;
          v29 = j_va("%3.1f", *(float *)&NodeMetric);
          DebugDrawNodePicking(v29, m_pAI, node, &colorWhite);
          v8 = nodes;
          v10 = ++v30;
          goto LABEL_46;
        }
      }
      else
      {
        DebugDrawNodePicking("sup", this->m_pAI, node, &colorRed);
      }
      v8 = nodes;
      LODWORD(v9) = v9 - 1;
      v25 = v11[-1];
      v10 = v30;
      --v11;
      nodes[v12] = v25;
LABEL_46:
      if ( v10 >= (int)v9 )
        goto LABEL_47;
    }
    if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1347, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1348, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( Path_CanClaimNode(node, this->m_pAI->sentient) )
    {
      sentient = this->m_pAI->sentient;
      pNearestNode = sentient->pNearestNode;
      if ( pNearestNode && sentient->bNearestNodeValid && pNearestNode->constant.parent.index != node->constant.parent.index )
        goto LABEL_36;
      if ( Path_NodeIgnoresAngles(node) || Path_IsNodeFacingToward(node, &pMetricParams->lastKnownEnemyOrigin, 0.0) )
      {
        v20 = Path_ConvertNodeToIndex(node);
        if ( Path_IsNodeDisconnected(v20) )
        {
          v17 = "dis";
        }
        else
        {
LABEL_31:
          if ( !volume || isNodeInRegion(node, volume) )
            goto LABEL_37;
          v17 = "vol";
        }
      }
      else
      {
        v17 = "dir";
      }
      v16 = this->m_pAI;
    }
    else
    {
      v16 = this->m_pAI;
      v17 = "clm";
    }
    DebugDrawNodePicking(v17, v16, node, &colorRed);
    goto LABEL_36;
  }
LABEL_47:
  Sys_ProfEndNamedEvent();
  return (unsigned int)v9;
}

/*
==============
AIScriptedInterface::Cover_IsNodeMinDistFromAllTargets
==============
*/
bool AIScriptedInterface::Cover_IsNodeMinDistFromAllTargets(AIScriptedInterface *this, const pathnode_t *node)
{
  float v4; 
  ai_scripted_t *m_pAI; 
  int v6; 
  __int64 v7; 
  unsigned __int16 number; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  gentity_s *TargetEntity; 
  __int64 v18; 
  __int64 v19; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 245, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 246, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( this->m_pAI->sentient->pClaimedNode == node && AICommonInterface::NearClaimNode(this, 64.0) )
    v4 = FLOAT_16384_0;
  else
    v4 = FLOAT_65536_0;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  m_pAI = this->m_pAI;
  v6 = 0;
  if ( m_pAI->threat.numSecondaryTarget <= 0 )
  {
LABEL_44:
    TargetEntity = AICommonInterface::GetTargetEntity(this);
    return !TargetEntity || (float)((float)((float)((float)(TargetEntity->r.currentOrigin.v[1] - pos.v[1]) * (float)(TargetEntity->r.currentOrigin.v[1] - pos.v[1])) + (float)((float)(TargetEntity->r.currentOrigin.v[0] - pos.v[0]) * (float)(TargetEntity->r.currentOrigin.v[0] - pos.v[0]))) + (float)((float)(TargetEntity->r.currentOrigin.v[2] - pos.v[2]) * (float)(TargetEntity->r.currentOrigin.v[2] - pos.v[2]))) > v4;
  }
  else
  {
    v7 = 0i64;
    while ( 1 )
    {
      number = m_pAI->threat.secondaryTargets[v7].entity.number;
      if ( number )
      {
        v9 = number;
        v10 = number - 1;
        if ( v10 >= 0x800 )
        {
          LODWORD(v19) = 2048;
          LODWORD(v18) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v11 = v9 - 1;
        if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v11] )
        {
          LODWORD(v19) = m_pAI->threat.secondaryTargets[v7].entity.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v19) )
            __debugbreak();
        }
        v12 = m_pAI->threat.secondaryTargets[v7].entity.number;
        if ( v12 )
        {
          if ( (unsigned int)v12 - 1 >= 0x7FF )
          {
            LODWORD(v19) = 2047;
            LODWORD(v18) = v12 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v13 = m_pAI->threat.secondaryTargets[v7].entity.number;
          if ( (unsigned int)(v13 - 1) >= 0x800 )
          {
            LODWORD(v19) = 2048;
            LODWORD(v18) = v13 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v14 = v13 - 1;
          if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v14] )
          {
            LODWORD(v19) = m_pAI->threat.secondaryTargets[v7].entity.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v19) )
              __debugbreak();
          }
          v15 = m_pAI->threat.secondaryTargets[v7].entity.number;
          if ( (float)((float)((float)((float)(g_entities[v15 - 1].r.currentOrigin.v[1] - pos.v[1]) * (float)(g_entities[v15 - 1].r.currentOrigin.v[1] - pos.v[1])) + (float)((float)(g_entities[v15 - 1].r.currentOrigin.v[0] - pos.v[0]) * (float)(g_entities[v15 - 1].r.currentOrigin.v[0] - pos.v[0]))) + (float)((float)(g_entities[v15 - 1].r.currentOrigin.v[2] - pos.v[2]) * (float)(g_entities[v15 - 1].r.currentOrigin.v[2] - pos.v[2]))) < v4 )
            return 0;
        }
      }
      m_pAI = this->m_pAI;
      ++v6;
      ++v7;
      if ( v6 >= m_pAI->threat.numSecondaryTarget )
        goto LABEL_44;
    }
  }
}

/*
==============
AIScriptedInterface::Cover_IsNodeSafeFromAnyEnemy
==============
*/
char AIScriptedInterface::Cover_IsNodeSafeFromAnyEnemy(AIScriptedInterface *this, const pathnode_t *node)
{
  ai_scripted_t *m_pAI; 
  int v5; 
  const tacpoint_t *Point; 
  const gentity_s *TargetEntity; 
  const tacpoint_t *LastKnownEnemyTacPoint; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 290, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 291, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( AICommonInterface::HasSecondaryTargets(this) )
  {
    m_pAI = this->m_pAI;
    v5 = 0;
    if ( m_pAI->threat.numSecondaryTarget > 0 )
    {
      do
      {
        Point = tacpoint_ref_t::GetPoint(&m_pAI->threat.secondaryTargets[v5].tacpoint);
        if ( Point )
        {
          if ( Path_NodeSafeFrom(node, Point) )
            return 1;
        }
        m_pAI = this->m_pAI;
      }
      while ( ++v5 < m_pAI->threat.numSecondaryTarget );
    }
    TargetEntity = AICommonInterface::GetTargetEntity(this);
    if ( TargetEntity )
    {
      LastKnownEnemyTacPoint = AICommonInterface::GetLastKnownEnemyTacPoint(this, TargetEntity);
      if ( LastKnownEnemyTacPoint )
      {
        if ( Path_NodeSafeFrom(node, LastKnownEnemyTacPoint) )
          return 1;
      }
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::Cover_IsPathToShuffleNodeClear
==============
*/
char AIScriptedInterface::Cover_IsPathToShuffleNodeClear(AIScriptedInterface *this, pathnode_t *node, const vec2_t *dirToNode, float distToNode)
{
  int NodeTeam; 
  pathnode_t *pClaimedNode; 
  __int64 wLinkCount; 
  __int64 v9; 
  __int64 v10; 
  __int64 i; 
  pathnode_t *v12; 
  const char *GameType; 
  unsigned int v14; 
  unsigned int v15; 
  const char *v16; 
  int v17; 
  int v18; 
  const char *v19; 
  int v20; 
  __int128 v22; 
  __int64 v26; 
  __int64 v27; 
  vec3_t v29; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2461, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2462, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentient->pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2463, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->pClaimedNode)", (const char *)&queryFormat, "m_pAI->sentient->pClaimedNode") )
    __debugbreak();
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2464, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  NodeTeam = Path_GetNodeTeam(this->m_pAI->sentient->eTeam);
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  wLinkCount = pClaimedNode->dynamic.wLinkCount;
  pathnode_t::GetPos(pClaimedNode, &pos);
  v9 = wLinkCount;
  if ( wLinkCount <= 0 )
    return 1;
  v10 = 0i64;
  for ( i = 0i64; ; ++i )
  {
    v12 = Path_ConvertIndexToNode(pClaimedNode->constant.Links[i].nodeNum);
    if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
      v14 = 0;
    else
      v14 = NodeTeam;
    if ( !v12 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v16 = SV_GameMP_GetGameType();
      v17 = *(unsigned __int8 *)v16 - (unsigned __int8)aBr_2[0];
      if ( !v17 )
      {
        v17 = *((unsigned __int8 *)v16 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v17 )
          v17 = *((unsigned __int8 *)v16 + 2) - (unsigned __int8)aBr_2[2];
      }
      v15 = (v17 != 0) + 1;
    }
    else
    {
      v15 = 1;
    }
    if ( v14 >= v15 )
    {
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        v19 = SV_GameMP_GetGameType();
        v20 = *(unsigned __int8 *)v19 - (unsigned __int8)aBr_2[0];
        if ( !v20 )
        {
          v20 = *((unsigned __int8 *)v19 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v20 )
            v20 = *((unsigned __int8 *)v19 + 2) - (unsigned __int8)aBr_2[2];
        }
        v18 = (v20 != 0) + 1;
      }
      else
      {
        v18 = 1;
      }
      LODWORD(v27) = v18;
      LODWORD(v26) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    if ( node != v12 )
    {
      if ( SentientHandle::isDefined(&v12->dynamic.pOwners[v14]) )
      {
        pathnode_t::GetPos(v12, &v29);
        v22 = LODWORD(v29.v[1]);
        *(float *)&v22 = fsqrt((float)((float)(v29.v[1] - pos.v[1]) * (float)(v29.v[1] - pos.v[1])) + (float)((float)(v29.v[0] - pos.v[0]) * (float)(v29.v[0] - pos.v[0])));
        _XMM5 = v22;
        __asm
        {
          vcmpless xmm0, xmm5, xmm8
          vblendvps xmm0, xmm5, xmm7, xmm0
        }
        if ( (float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(v29.v[1] - pos.v[1])) * dirToNode->v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(v29.v[0] - pos.v[0])) * dirToNode->v[0])) > 0.70710677 && *(float *)&v22 < distToNode )
          break;
      }
    }
    if ( ++v10 >= v9 )
      return 1;
  }
  return 0;
}

/*
==============
AIScriptedInterface::Cover_IsRoughlyValidCover
==============
*/
char AIScriptedInterface::Cover_IsRoughlyValidCover(AIScriptedInterface *this, const pathnode_t *node)
{
  sentient_s *TargetSentient; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1501, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1502, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1503, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Path_CanClaimNode(node, this->m_pAI->sentient) )
  {
    TargetSentient = AICommonInterface::GetTargetSentient(this);
    if ( !TargetSentient || Path_NodeIgnoresAngles(node) || Path_IsNodeFacingToward(node, &TargetSentient->ent->r.currentOrigin, 0.0) )
    {
      return 1;
    }
    else
    {
      DebugDrawNodePicking("dir", this->m_pAI, node, &colorRed);
      return 0;
    }
  }
  else
  {
    DebugDrawNodePicking("clm", this->m_pAI, node, &colorRed);
    return 0;
  }
}

/*
==============
AIScriptedInterface::Cover_IsValidAgainstEnemy
==============
*/
bool AIScriptedInterface::Cover_IsValidAgainstEnemy(AIScriptedInterface *this, const pathnode_t *node, bool bUseLastKnownPos)
{
  const pathnodeRange_t *Range; 
  gentity_s *TargetEntity; 
  vec3_t outLastKnownPos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 505, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 506, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  Range = AIScriptedInterface::Cover_GetRange(node);
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( TargetEntity )
  {
    if ( bUseLastKnownPos )
      Sentient_GetLastKnownEnemyPosWithDuration(this->m_pAI->sentient, TargetEntity, 500, &outLastKnownPos);
    else
      outLastKnownPos = TargetEntity->r.currentOrigin;
    LOBYTE(TargetEntity) = AIScriptedInterface::Cover_NodeRangeValid(this, &outLastKnownPos, node, Range) != 0;
  }
  return (char)TargetEntity;
}

/*
==============
AIScriptedInterface::Cover_IsValidCover
==============
*/
char AIScriptedInterface::Cover_IsValidCover(AIScriptedInterface *this, const pathnode_t *node, bool isForNewCoverSearch)
{
  sentient_s *sentient; 
  pathnode_t *pNearestNode; 
  unsigned __int16 v8; 
  sentient_s *TargetSentient; 
  const char *v10; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v12; 
  int v13; 
  int v14; 
  const tacpoint_t *Point; 
  const gentity_s *TargetEntity; 
  const tacpoint_t *LastKnownEnemyTacPoint; 
  int v18; 
  vec3_t *p_backupCoverFromPos; 
  vec3_t outLastKnownPos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1403, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1404, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1405, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !Path_CanClaimNode(node, this->m_pAI->sentient) )
  {
    DebugDrawNodePicking("clm", this->m_pAI, node, &colorRed);
    return 0;
  }
  sentient = this->m_pAI->sentient;
  pNearestNode = sentient->pNearestNode;
  if ( pNearestNode && sentient->bNearestNodeValid && pNearestNode->constant.parent.index != node->constant.parent.index )
    return 0;
  v8 = Path_ConvertNodeToIndex(node);
  if ( Path_IsNodeDisconnected(v8) )
    return 0;
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
  {
    if ( !this->m_pAI->bUseBackupCoverFromPos || Path_NodeIgnoresAngles(node) )
      return 1;
    p_backupCoverFromPos = &this->m_pAI->backupCoverFromPos;
    goto LABEL_43;
  }
  if ( !AIScriptedInterface::IsDoingAmbush(this) && !AIScriptedInterface::Cover_IsNodeMinDistFromAllTargets(this, node) )
  {
    v10 = "dist";
LABEL_45:
    DebugDrawNodePicking(v10, this->m_pAI, node, &colorRed);
    return 0;
  }
  Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, TargetSentient->ent, &outLastKnownPos);
  m_pAI = this->m_pAI;
  if ( m_pAI->threat.allEnemiesInSimilarDir )
    goto LABEL_36;
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 290, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 291, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !AICommonInterface::HasSecondaryTargets(this) )
    goto LABEL_36;
  v12 = this->m_pAI;
  v13 = 0;
  v14 = 0;
  if ( v12->threat.numSecondaryTarget > 0 )
  {
    do
    {
      Point = tacpoint_ref_t::GetPoint(&v12->threat.secondaryTargets[v14].tacpoint);
      if ( Point )
      {
        if ( Path_NodeSafeFrom(node, Point) )
          goto LABEL_37;
      }
      v12 = this->m_pAI;
    }
    while ( ++v14 < v12->threat.numSecondaryTarget );
  }
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity || (LastKnownEnemyTacPoint = AICommonInterface::GetLastKnownEnemyTacPoint(this, TargetEntity)) == NULL || !Path_NodeSafeFrom(node, LastKnownEnemyTacPoint) )
LABEL_36:
    v13 = 1;
LABEL_37:
  v18 = Path_NodeIgnoresAngles(node);
  if ( !v13 || v18 )
    return 1;
  p_backupCoverFromPos = &outLastKnownPos;
LABEL_43:
  if ( !Path_IsNodeFacingToward(node, p_backupCoverFromPos, 0.0) )
  {
    v10 = "dir";
    goto LABEL_45;
  }
  return 1;
}

/*
==============
AIScriptedInterface::Cover_IsValidCoverFromPoint
==============
*/
char AIScriptedInterface::Cover_IsValidCoverFromPoint(AIScriptedInterface *this, const pathnode_t *node, const vec3_t *fromPoint)
{
  sentient_s *sentient; 
  pathnode_t *pNearestNode; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1347, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1348, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !Path_CanClaimNode(node, this->m_pAI->sentient) )
  {
    DebugDrawNodePicking("clm", this->m_pAI, node, &colorRed);
    return 0;
  }
  sentient = this->m_pAI->sentient;
  pNearestNode = sentient->pNearestNode;
  if ( pNearestNode && sentient->bNearestNodeValid && pNearestNode->constant.parent.index != node->constant.parent.index )
    return 0;
  if ( Path_NodeIgnoresAngles(node) || Path_IsNodeFacingToward(node, fromPoint, 0.0) )
    return 1;
  DebugDrawNodePicking("dir", this->m_pAI, node, &colorRed);
  return 0;
}

/*
==============
AIScriptedInterface::Cover_IsValidCoverNode
==============
*/
bool AIScriptedInterface::Cover_IsValidCoverNode(const pathnode_t *node, const vec3_t *attackPosition)
{
  bool result; 
  const pathnodeRange_t *Range; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1536, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Path_NodeIgnoresAngles(node) || (result = Path_IsNodeFacingToward(node, attackPosition, 0.0)) )
  {
    Range = AIScriptedInterface::Cover_GetRange(node);
    return AIScriptedInterface::Cover_IsWithinNodeAngle(attackPosition, node, Range);
  }
  return result;
}

/*
==============
AIScriptedInterface::Cover_IsWithinNodeAngle
==============
*/
bool AIScriptedInterface::Cover_IsWithinNodeAngle(const vec3_t *pos, const pathnode_t *node, const pathnodeRange_t *range)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  double Angle; 
  double v15; 
  float v16; 
  float fAngleMin; 
  float fAngleMax; 
  float v19; 
  float v20; 
  vec3_t posa; 
  vec3_t vec; 
  tmat33_t<vec3_t> out; 
  vec3_t vector; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 333, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 334, ASSERT_TYPE_ASSERT, "(range)", (const char *)&queryFormat, "range") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &posa);
  v6 = pos->v[0];
  v7 = pos->v[1];
  if ( ((1 << LOBYTE(node->constant.type)) & 0x62700000) != 0 )
  {
    v8 = v6 - posa.v[0];
    v9 = pos->v[2] - posa.v[2];
    v11 = v7 - posa.v[1];
    v10 = v7 - posa.v[1];
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    AnglesToAxis(&vector, &axis);
    MatrixInverse(&axis, &out);
    vec.v[0] = (float)((float)(v8 * out.m[0].v[0]) + (float)(v11 * out.m[1].v[0])) + (float)(v9 * out.m[2].v[0]);
    vec.v[1] = (float)((float)(v8 * out.m[0].v[1]) + (float)(v10 * out.m[1].v[1])) + (float)(v9 * out.m[2].v[1]);
    vec.v[2] = (float)((float)(v8 * out.m[0].v[2]) + (float)(v10 * out.m[1].v[2])) + (float)(v9 * out.m[2].v[2]);
    vectoangles(&vec, &angles);
    v12 = angles.v[1];
  }
  else
  {
    v13 = atan2f_0(v7 - posa.v[1], v6 - posa.v[0]) * 57.295776;
    Angle = pathnode_t::GetAngle((pathnode_t *)node);
    v12 = v13 - *(float *)&Angle;
  }
  v15 = AngleNormalize360(v12);
  v16 = *(float *)&v15;
  fAngleMin = range->fAngleMin;
  if ( (range->fAngleMin < 0.0 || fAngleMin >= 360.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 370, ASSERT_TYPE_ASSERT, "( ( range->fAngleMin >= 0 && range->fAngleMin < 360 ) )", "( range->fAngleMin ) = %g", fAngleMin) )
    __debugbreak();
  fAngleMax = range->fAngleMax;
  if ( (fAngleMax < 0.0 || fAngleMax >= 360.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 371, ASSERT_TYPE_ASSERT, "( ( range->fAngleMax >= 0 && range->fAngleMax < 360 ) )", "( range->fAngleMax ) = %g", fAngleMax) )
    __debugbreak();
  if ( (v16 < 0.0 || v16 >= 360.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 372, ASSERT_TYPE_ASSERT, "( ( fAngle >= 0 && fAngle < 360 ) )", "( fAngle ) = %g", v16) )
    __debugbreak();
  v19 = range->fAngleMin;
  v20 = range->fAngleMax;
  if ( range->fAngleMin <= v20 )
    return v16 >= v19 && v16 <= v20;
  return v16 >= v19 || v16 <= v20;
}

/*
==============
AIScriptedInterface::Cover_MinHeightAtCover
==============
*/
float AIScriptedInterface::Cover_MinHeightAtCover(pathnode_t *node)
{
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1611, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( ((1 << LOBYTE(node->constant.type)) & 0x1020) != 0 || (node->constant.spawnflags & 8) != 0 )
    return FLOAT_20_0;
  else
    return FLOAT_36_0;
}

/*
==============
AIScriptedInterface::Cover_NodeRangeValid
==============
*/
_BOOL8 AIScriptedInterface::Cover_NodeRangeValid(AIScriptedInterface *this, const vec3_t *pos, const pathnode_t *node, const pathnodeRange_t *range)
{
  ai_scripted_t *m_pAI; 
  float minSqDistCurrentNode; 
  int v10; 
  bool v11; 
  vec3_t posa; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 396, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 397, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 398, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 399, ASSERT_TYPE_ASSERT, "(range)", (const char *)&queryFormat, "range") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->sentient->pClaimedNode != node )
    goto LABEL_29;
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2873, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2874, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2875, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentient->pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2876, ASSERT_TYPE_ASSERT, "( m_pAI->sentient->pClaimedNode )", (const char *)&queryFormat, "m_pAI->sentient->pClaimedNode") )
    __debugbreak();
  if ( AIScriptedInterface::KeepClaimedNode(this) || AIScriptedInterface::PointNearClaimNode(this, &this->m_pAI->ent->r.currentOrigin) )
    minSqDistCurrentNode = range->minSqDistCurrentNode;
  else
LABEL_29:
    minSqDistCurrentNode = range->minSqDist;
  pathnode_t::GetPos((pathnode_t *)node, &posa);
  if ( AICommonInterface::Use3DPathing(this) && ((v10 = 1 << LOBYTE(node->constant.type), (v10 & 0x1E300000) != 0) || (v10 & 0x400000) != 0) )
    v11 = (float)((float)((float)((float)(posa.v[1] - pos->v[1]) * (float)(posa.v[1] - pos->v[1])) + (float)((float)(posa.v[0] - pos->v[0]) * (float)(posa.v[0] - pos->v[0]))) + (float)((float)(posa.v[2] - pos->v[2]) * (float)(posa.v[2] - pos->v[2]))) < minSqDistCurrentNode;
  else
    v11 = (float)((float)((float)(posa.v[1] - pos->v[1]) * (float)(posa.v[1] - pos->v[1])) + (float)((float)(posa.v[0] - pos->v[0]) * (float)(posa.v[0] - pos->v[0]))) < minSqDistCurrentNode;
  if ( v11 )
    return 0i64;
  if ( Path_NodeIgnoresAngles(node) )
    return 1i64;
  return AIScriptedInterface::Cover_IsWithinNodeAngle(pos, node, range);
}

/*
==============
AIScriptedInterface::Cover_ScoreOnAmbushVisibility
==============
*/
float AIScriptedInterface::Cover_ScoreOnAmbushVisibility(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode)
{
  if ( enemyNode && Path_NodesVisible(node, enemyNode) )
    return 0.0;
  else
    return FLOAT_1_0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnCoverType
==============
*/
float AIScriptedInterface::Cover_ScoreOnCoverType(AIScriptedInterface *this, const pathnode_t *node, float coverWeight, float concealWeight, float exposedWeight, float ambushWeight)
{
  int v6; 

  v6 = 1 << LOBYTE(node->constant.type);
  if ( (v6 & 0x806400FC) != 0 )
    return coverWeight;
  if ( (v6 & 0x1C00) != 0 )
    return concealWeight;
  if ( (v6 & 0x2000200) != 0 )
    return exposedWeight;
  _XMM0 = v6 & 0x100;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(ambushWeight);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnCrowdedness_Tac
==============
*/
float AIScriptedInterface::Cover_ScoreOnCrowdedness_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, float weight)
{
  int v3; 
  unsigned __int64 eTeam; 
  sentient_s *v8; 
  ai_common_t *ai; 
  ai_common_t *v10; 
  int v11; 
  int v12; 
  int v13; 
  const gentity_s *ent; 
  float v15; 
  float result; 
  AIWrapper v17; 
  int v18; 
  int v19; 
  int v20; 
  bitarray<224> iTeamFlags; 
  vec3_t outPos; 

  v3 = 0;
  eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
  memset(&iTeamFlags, 0, sizeof(iTeamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  iTeamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  TacGraph_GetApproxGroundPosForPoint(pPoint, &outPos);
  v8 = Sentient_FirstSentient(&iTeamFlags);
  if ( !v8 )
    return 0.0;
  do
  {
    if ( v8 != this->m_pAI->sentient )
    {
      ai = v8->ai;
      if ( (!ai || ai->pNavigator) && v8->ent->health > 0 )
      {
        AIWrapper::AIWrapper(&v17, v8->ent);
        if ( v17.m_pAI && AIScriptedInterface::GetCoverTacPoint(v17.m_pAI) == pPoint )
          goto LABEL_23;
        v10 = v8->ai;
        if ( v10 && v10->pNavigator->HasPath(v10->pNavigator) )
        {
          v8->ai->pNavigator->GetGoalPos(v8->ai->pNavigator, (vec3_t *)&v18);
          v11 = v20;
          v12 = v19;
          v13 = v18;
        }
        else
        {
          ent = v8->ent;
          v13 = SLODWORD(v8->ent->r.currentOrigin.v[0]);
          v18 = v13;
          v12 = SLODWORD(ent->r.currentOrigin.v[1]);
          v19 = v12;
          v11 = SLODWORD(ent->r.currentOrigin.v[2]);
          v20 = v11;
        }
        v15 = (float)((float)((float)(*(float *)&v12 - outPos.v[1]) * (float)(*(float *)&v12 - outPos.v[1])) + (float)((float)(*(float *)&v13 - outPos.v[0]) * (float)(*(float *)&v13 - outPos.v[0]))) + (float)((float)(*(float *)&v11 - outPos.v[2]) * (float)(*(float *)&v11 - outPos.v[2]));
        if ( v15 < 2304.0 )
        {
LABEL_23:
          LODWORD(result) = LODWORD(weight) ^ _xmm;
          return result;
        }
        if ( v15 < 9216.0 )
          ++v3;
      }
    }
    v8 = Sentient_NextSentient(v8, &iTeamFlags);
  }
  while ( v8 );
  if ( !v3 )
    return 0.0;
  if ( v3 > 3 )
    v3 = 3;
  return (float)(weight * -0.33333334) * (float)v3;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnDangerousNode
==============
*/
float AIScriptedInterface::Cover_ScoreOnDangerousNode(AIScriptedInterface *this, const pathnode_t *node)
{
  __int64 NodeTeam; 
  int v9; 
  int v10; 

  NodeTeam = Path_GetNodeTeam(this->m_pAI->sentient->eTeam);
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 565, ASSERT_TYPE_ASSERT, "( BG_ActorOrAgentSystemEnabled() )", "Access to pathnode_dynamic_t::actors") )
    __debugbreak();
  if ( (unsigned int)NodeTeam >= 3 )
  {
    v10 = 3;
    v9 = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  _XMM0 = (unsigned int)node->dynamic.actors.dangerousNodeTime[NodeTeam];
  __asm { vpcmpgtd xmm3, xmm0, xmm1 }
  _XMM1 = 0i64;
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnDistance
==============
*/
float AIScriptedInterface::Cover_ScoreOnDistance(AIScriptedInterface *this, const vec3_t *nodeOrigin, vec3_t *referenceOrigin, float distanceMin, float distanceOptimal, float distanceMax, bool useDistSqr)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  double v14; 
  float v16; 

  v7 = referenceOrigin->v[1] - nodeOrigin->v[1];
  v8 = distanceMin;
  v9 = referenceOrigin->v[2] - nodeOrigin->v[2];
  v11 = (float)((float)(v7 * v7) + (float)((float)(referenceOrigin->v[0] - nodeOrigin->v[0]) * (float)(referenceOrigin->v[0] - nodeOrigin->v[0]))) + (float)(v9 * v9);
  v10 = v11;
  if ( useDistSqr )
  {
    v12 = distanceOptimal * distanceOptimal;
    v13 = distanceMax * distanceMax;
    v8 = distanceMin * distanceMin;
  }
  else
  {
    v13 = distanceMax;
    v12 = distanceOptimal;
    v10 = fsqrt(v11);
  }
  v14 = I_fclamp(v10, v8, v13);
  if ( *(float *)&v14 > v12 )
  {
    v16 = v13 - v12;
    if ( v16 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 556, ASSERT_TYPE_ASSERT, "(distanceMax-distanceOptimal > 0.f)", (const char *)&queryFormat, "distanceMax-distanceOptimal > 0.f") )
      __debugbreak();
    return 1.0 - (float)((float)(*(float *)&v14 - v12) / v16);
  }
  else if ( v12 == 0.0 )
  {
    return FLOAT_1_0;
  }
  else
  {
    if ( v12 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 552, ASSERT_TYPE_ASSERT, "(distanceOptimal > 0.f)", (const char *)&queryFormat, "distanceOptimal > 0.f") )
      __debugbreak();
    return *(float *)&v14 / v12;
  }
}

/*
==============
AIScriptedInterface::Cover_ScoreOnEngagement
==============
*/
float AIScriptedInterface::Cover_ScoreOnEngagement(AIScriptedInterface *this, float distToEnemy)
{
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  if ( distToEnemy <= m_pAI->nodeSelect.engageMinDist || distToEnemy >= m_pAI->nodeSelect.engageMaxDist )
    return 0.0;
  else
    return FLOAT_1_0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnHeight
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnHeight(AIScriptedInterface *this, const vec3_t *nodeOrigin, const vec3_t *currentOrigin, double weight)
{
  _XMM1 = LODWORD(FLOAT_80_0);
  __asm
  {
    vcmpltss xmm4, xmm1, xmm2
    vblendvps xmm0, xmm3, xmm0, xmm4
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnInOutDoor
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnInOutDoor(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, double indoorWeight)
{
  if ( enemyNode )
  {
    LODWORD(_XMM0) = LODWORD(indoorWeight);
  }
  else
  {
    _XMM0 = node->constant.spawnflags & 0x2000;
    __asm
    {
      vpcmpeqd xmm4, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm2, xmm4
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnLMGMountable
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnLMGMountable(AIScriptedInterface *this, const pathnode_t *node, double weight)
{
  _XMM0 = node->constant.spawnflags & 0x10000;
  __asm
  {
    vpcmpeqd xmm4, xmm0, xmm1
    vblendvps xmm0, xmm2, xmm3, xmm4
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnMoveTowardsTargetWeight
==============
*/
float AIScriptedInterface::Cover_ScoreOnMoveTowardsTargetWeight(AIScriptedInterface *this, const vec3_t *nodeOrigin, const CoverNodeMetricParams *metricParams)
{
  float v4; 
  float v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  float v15; 
  float result; 

  v4 = nodeOrigin->v[0] - metricParams->referenceOrigin.v[0];
  v6 = LODWORD(nodeOrigin->v[1]);
  v5 = nodeOrigin->v[1] - metricParams->referenceOrigin.v[1];
  *(float *)&v6 = v5 * v5;
  v7 = v6;
  v9 = LODWORD(nodeOrigin->v[2]);
  *(float *)&v9 = nodeOrigin->v[2] - metricParams->referenceOrigin.v[2];
  v8 = v9;
  v10 = v7;
  *(float *)&v10 = *(float *)&v7 + (float)(v4 * v4);
  if ( this->Is3D(this) )
  {
    v11 = v8;
    *(float *)&v11 = fsqrt((float)(*(float *)&v8 * *(float *)&v8) + (float)(*(float *)&v7 + (float)(v4 * v4)));
    _XMM2 = v11;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v15 = (float)((float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[1]) + (float)((float)(v4 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[0])) + (float)((float)(*(float *)&v8 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[2]);
  }
  else
  {
    *(float *)&v10 = fsqrt(*(float *)&v10);
    _XMM2 = v10;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v15 = (float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[1]) + (float)((float)(v4 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[0]);
  }
  if ( v15 > 0.2 )
    return (float)(COERCE_FLOAT(LODWORD(v15) & _xmm) - 0.2) * 1.25;
  if ( v15 >= -0.2 )
    return 0.0;
  LODWORD(result) = COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v15) & _xmm) - 0.2) * 1.25) ^ _xmm;
  return result;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnNearAllies
==============
*/
float AIScriptedInterface::Cover_ScoreOnNearAllies(AIScriptedInterface *this, const vec3_t *nodeOrigin)
{
  __int128 v2; 
  __int128 v3; 
  int v4; 
  const dvar_t *v5; 
  int v8; 
  float v9; 
  __int64 v10; 
  __int64 v11; 
  team_t eTeam; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  AIIterator *v17; 
  const gentity_s *v18; 
  ai_agent_t *ScriptedAgentInfo; 
  __int64 (__fastcall ***v20)(_QWORD); 
  actor_s *actor; 
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  bool v24; 
  sentient_s *v25; 
  int v26; 
  int v27; 
  int v28; 
  gentity_s *ent; 
  float v30; 
  const dvar_t *v31; 
  __int128 unsignedInt; 
  const dvar_t *v33; 
  __int128 v34; 
  __int128 v36; 
  __int128 v37; 
  __int128 v40; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  AIActorInterface v45; 
  AIAgentInterface v46; 
  __int64 (__fastcall ***v47)(_QWORD); 
  int v48; 
  int v49; 
  int v50; 
  __int128 v51; 
  __int128 v52; 

  v4 = 0;
  v5 = DVARFLT_ai_retreatProximity;
  v52 = v2;
  v51 = v3;
  v44 = 0;
  if ( !DVARFLT_ai_retreatProximity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_retreatProximity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v8 = 0;
  v9 = v5->current.value * v5->current.value;
  if ( level.maxclients > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    do
    {
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v43) = 2048;
        LODWORD(v42) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v11].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v10] )
      {
        eTeam = this->m_pAI->sentient->eTeam;
        if ( eTeam == TEAM_ZERO || eTeam != g_entities[v11].sentient->eTeam )
        {
          v13 = nodeOrigin->v[2];
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - g_entities[v11].r.currentOrigin.v[2]) & _xmm) <= 256.0 )
          {
            v14 = g_entities[v11].r.currentOrigin.v[0] - nodeOrigin->v[0];
            v15 = g_entities[v11].r.currentOrigin.v[1] - nodeOrigin->v[1];
            if ( (float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)((float)(g_entities[v11].r.currentOrigin.v[2] - v13) * (float)(g_entities[v11].r.currentOrigin.v[2] - v13))) < v9 )
              ++v4;
          }
        }
      }
      ++v8;
      ++v10;
      ++v11;
    }
    while ( v8 < level.maxclients );
    v44 = v4;
  }
  v16 = 0;
  v17 = this->GetAIIterator(this);
  v18 = (const gentity_s *)v17->GetFirst(v17);
  if ( v18 )
  {
    while ( 1 )
    {
      AIActorInterface::AIActorInterface(&v45);
      AIAgentInterface::AIAgentInterface(&v46);
      v46.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v47 = NULL;
      if ( v18->agent )
      {
        if ( SV_Agent_IsScripted(v18->s.number) )
          break;
      }
      actor = v18->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v45, v18->actor);
        v20 = (__int64 (__fastcall ***)(_QWORD))&v45;
        goto LABEL_38;
      }
LABEL_39:
      m_pAI = this->m_pAI;
      if ( (ai_scripted_t *)(**v47)(v47) != m_pAI )
      {
        sentient = v18->sentient;
        if ( m_pAI->sentient->eTeam == sentient->eTeam )
        {
          v24 = sentient->ai->pNavigator->HasPath(sentient->ai->pNavigator);
          v25 = v18->sentient;
          if ( v24 )
          {
            v25->ai->pNavigator->GetGoalPos(v25->ai->pNavigator, (vec3_t *)&v48);
            v26 = v50;
            v27 = v49;
            v28 = v48;
          }
          else
          {
            ent = v25->ent;
            v28 = SLODWORD(v25->ent->r.currentOrigin.v[0]);
            v48 = v28;
            v27 = SLODWORD(ent->r.currentOrigin.v[1]);
            v49 = v27;
            v26 = SLODWORD(ent->r.currentOrigin.v[2]);
            v50 = v26;
          }
          v30 = nodeOrigin->v[2];
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - *(float *)&v26) & _xmm) <= 256.0 && (float)((float)((float)((float)(*(float *)&v27 - nodeOrigin->v[1]) * (float)(*(float *)&v27 - nodeOrigin->v[1])) + (float)((float)(*(float *)&v28 - nodeOrigin->v[0]) * (float)(*(float *)&v28 - nodeOrigin->v[0]))) + (float)((float)(*(float *)&v26 - v30) * (float)(*(float *)&v26 - v30))) < v9 )
            ++v16;
        }
      }
      v18 = v17->GetNext(v17);
      if ( !v18 )
      {
        v4 = v44;
        goto LABEL_49;
      }
    }
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v18);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
      __debugbreak();
    AINewAgentInterface::SetAgent((AINewAgentInterface *)&v46, ScriptedAgentInfo);
    v20 = (__int64 (__fastcall ***)(_QWORD))&v46;
LABEL_38:
    v47 = v20;
    goto LABEL_39;
  }
LABEL_49:
  v31 = DVARFLT_ai_retreatCoverBaseVal;
  if ( !DVARFLT_ai_retreatCoverBaseVal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_retreatCoverBaseVal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  unsignedInt = v31->current.unsignedInt;
  v33 = DVARFLT_ai_retreatCoverMaxVal;
  if ( !DVARFLT_ai_retreatCoverMaxVal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_retreatCoverMaxVal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  v34 = LODWORD(FLOAT_1_0);
  if ( v4 > 0 )
  {
    if ( !v16 )
    {
      LODWORD(_XMM0) = v33->current.integer ^ _xmm;
      return *(float *)&_XMM0;
    }
    v36 = 0i64;
    *(float *)&v36 = (float)v16 / (float)v4;
    v34 = v36;
  }
  if ( v16 >= v4 )
  {
    v40 = v34;
    *(float *)&v40 = *(float *)&v34 * *(float *)&unsignedInt;
    _XMM0 = v40;
    __asm { vminss  xmm0, xmm0, xmm2 }
  }
  else
  {
    v37 = unsignedInt;
    *(float *)&v37 = *(float *)&unsignedInt / *(float *)&v34;
    _XMM0 = v37;
    __asm { vminss  xmm1, xmm0, xmm2 }
    LODWORD(_XMM0) = _XMM1 ^ _xmm;
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnNodeAngle
==============
*/
float AIScriptedInterface::Cover_ScoreOnNodeAngle(AIScriptedInterface *this, const pathnode_t *node, const vec3_t *lastKnownEnemyPos)
{
  const pathnodeRange_t *Range; 

  Range = AIScriptedInterface::Cover_GetRange(node);
  if ( Path_NodeIgnoresAngles(node) || AIScriptedInterface::Cover_IsWithinNodeAngle(lastKnownEnemyPos, node, Range) )
    return FLOAT_1_0;
  else
    return 0.0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnPlayerLOS
==============
*/
float AIScriptedInterface::Cover_ScoreOnPlayerLOS(AIScriptedInterface *this, const pathnode_t *node)
{
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 745, ASSERT_TYPE_ASSERT, "( BG_ActorOrAgentSystemEnabled() )", "Access to pathnode_dynamic_t::actors") )
    __debugbreak();
  if ( this->m_pAI->sentient->eTeam == TEAM_TWO && node->dynamic.actors.inPlayerLOSTime < level.time )
    return FLOAT_1_0;
  else
    return 0.0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnPriority
==============
*/
float AIScriptedInterface::Cover_ScoreOnPriority(AIScriptedInterface *this, const pathnode_t *node)
{
  _XMM0 = node->constant.spawnflags & 0x40;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnSecondaryTargets
==============
*/
float AIScriptedInterface::Cover_ScoreOnSecondaryTargets(AIScriptedInterface *this, const pathnode_t *node)
{
  int v4; 
  ai_scripted_t *m_pAI; 
  int v6; 
  __int64 v7; 
  unsigned __int16 number; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 
  gentity_s *v15; 
  __int64 v16; 
  bool v17; 
  ai_scripted_t *v18; 
  float v19; 
  float v20; 
  bool v21; 
  const tacpoint_t *Point; 
  __int64 v24; 
  __int64 v25; 
  vec3_t pos; 

  v4 = 0;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  m_pAI = this->m_pAI;
  v6 = 0;
  if ( m_pAI->threat.numSecondaryTarget > 0 )
  {
    v7 = 0i64;
    do
    {
      number = m_pAI->threat.secondaryTargets[v7].entity.number;
      if ( number )
      {
        v9 = number;
        v10 = number - 1;
        if ( v10 >= 0x800 )
        {
          LODWORD(v25) = 2048;
          LODWORD(v24) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v25) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v11 = v9 - 1;
        if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v11] )
        {
          LODWORD(v25) = m_pAI->threat.secondaryTargets[v7].entity.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v25) )
            __debugbreak();
        }
        v12 = m_pAI->threat.secondaryTargets[v7].entity.number;
        if ( v12 )
        {
          if ( (unsigned int)v12 - 1 >= 0x7FF )
          {
            LODWORD(v25) = 2047;
            LODWORD(v24) = v12 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          v13 = m_pAI->threat.secondaryTargets[v7].entity.number;
          if ( (unsigned int)(v13 - 1) >= 0x800 )
          {
            LODWORD(v25) = 2048;
            LODWORD(v24) = v13 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v14 = v13 - 1;
          if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v14] )
          {
            LODWORD(v25) = m_pAI->threat.secondaryTargets[v7].entity.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v25) )
              __debugbreak();
          }
          v15 = g_entities;
          v16 = m_pAI->threat.secondaryTargets[v7].entity.number;
          v17 = this->Is3D(this);
          v18 = this->m_pAI;
          v19 = v15[v16 - 1].r.currentOrigin.v[1] - pos.v[1];
          v20 = v15[v16 - 1].r.currentOrigin.v[0];
          if ( v17 )
            v21 = (float)((float)((float)(v19 * v19) + (float)((float)(v20 - pos.v[0]) * (float)(v20 - pos.v[0]))) + (float)((float)(v15[v16 - 1].r.currentOrigin.v[2] - pos.v[2]) * (float)(v15[v16 - 1].r.currentOrigin.v[2] - pos.v[2]))) < (float)(v18->nodeSelect.engageMinDist * v18->nodeSelect.engageMinDist);
          else
            v21 = (float)((float)(v19 * v19) + (float)((float)(v20 - pos.v[0]) * (float)(v20 - pos.v[0]))) < (float)(v18->nodeSelect.engageMinDist * v18->nodeSelect.engageMinDist);
          if ( !v21 )
          {
            Point = tacpoint_ref_t::GetPoint(&m_pAI->threat.secondaryTargets[v7].tacpoint);
            if ( Point )
            {
              if ( Path_NodeSafeFrom(node, Point) )
                ++v4;
            }
          }
        }
      }
      m_pAI = this->m_pAI;
      ++v6;
      ++v7;
    }
    while ( v6 < m_pAI->threat.numSecondaryTarget );
  }
  return (float)v4;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnSecondaryTargets_Tac
==============
*/
float AIScriptedInterface::Cover_ScoreOnSecondaryTargets_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint)
{
  ai_scripted_t *m_pAI; 
  int v5; 
  int v6; 
  __int64 v7; 
  unsigned __int16 number; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 
  gentity_s *v15; 
  __int64 v16; 
  bool v17; 
  ai_scripted_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  bool v22; 
  const tacpoint_t *Point; 
  __int64 v25; 
  __int64 v26; 

  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 634, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = 0;
  v6 = 0;
  if ( m_pAI->threat.numSecondaryTarget > 0 )
  {
    v7 = 0i64;
    do
    {
      number = m_pAI->threat.secondaryTargets[v7].entity.number;
      if ( number )
      {
        v9 = number;
        v10 = number - 1;
        if ( v10 >= 0x800 )
        {
          LODWORD(v26) = 2048;
          LODWORD(v25) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v11 = v9 - 1;
        if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v11] )
        {
          LODWORD(v26) = m_pAI->threat.secondaryTargets[v7].entity.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v26) )
            __debugbreak();
        }
        v12 = m_pAI->threat.secondaryTargets[v7].entity.number;
        if ( v12 )
        {
          if ( (unsigned int)v12 - 1 >= 0x7FF )
          {
            LODWORD(v26) = 2047;
            LODWORD(v25) = v12 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v25, v26) )
              __debugbreak();
          }
          v13 = m_pAI->threat.secondaryTargets[v7].entity.number;
          if ( (unsigned int)(v13 - 1) >= 0x800 )
          {
            LODWORD(v26) = 2048;
            LODWORD(v25) = v13 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v14 = v13 - 1;
          if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v14] )
          {
            LODWORD(v26) = m_pAI->threat.secondaryTargets[v7].entity.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v26) )
              __debugbreak();
          }
          v15 = g_entities;
          v16 = m_pAI->threat.secondaryTargets[v7].entity.number;
          v17 = this->Is3D(this);
          v18 = this->m_pAI;
          v19 = v15[v16 - 1].r.currentOrigin.v[1] - pPoint->m_Pos.v[1];
          v20 = v15[v16 - 1].r.currentOrigin.v[0];
          if ( v17 )
          {
            v21 = v15[v16 - 1].r.currentOrigin.v[2] - pPoint->m_Pos.v[2];
            v22 = (float)((float)((float)(v19 * v19) + (float)((float)(v20 - pPoint->m_Pos.v[0]) * (float)(v20 - pPoint->m_Pos.v[0]))) + (float)(v21 * v21)) < (float)(v18->nodeSelect.engageMinDist * v18->nodeSelect.engageMinDist);
          }
          else
          {
            v22 = (float)((float)(v19 * v19) + (float)((float)(v20 - pPoint->m_Pos.v[0]) * (float)(v20 - pPoint->m_Pos.v[0]))) < (float)(v18->nodeSelect.engageMinDist * v18->nodeSelect.engageMinDist);
          }
          if ( !v22 )
          {
            Point = tacpoint_ref_t::GetPoint(&m_pAI->threat.secondaryTargets[v7].tacpoint);
            if ( Point )
            {
              if ( !TacVisGraph_HasVis(pPoint, Point) )
                ++v5;
            }
          }
        }
      }
      m_pAI = this->m_pAI;
      ++v6;
      ++v7;
    }
    while ( v6 < m_pAI->threat.numSecondaryTarget );
  }
  return (float)v5;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnStickiness
==============
*/
float AIScriptedInterface::Cover_ScoreOnStickiness(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *claimedNode, float weight)
{
  float v6; 
  int v7; 

  if ( node != claimedNode )
    return 0.0;
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 838, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v6 = FLOAT_1_0;
  if ( claimedNode )
  {
    v7 = level.time - this->m_pAI->sentient->timeOfNodeClaim;
    if ( v7 <= 4000 )
      v6 = (float)((float)(1.0 - (float)((float)v7 * 0.00025000001)) * 2.0) + 1.0;
  }
  return v6 * weight;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnStickiness_Tac
==============
*/
float AIScriptedInterface::Cover_ScoreOnStickiness_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, const tacpoint_t *pCurPoint, float weight)
{
  _XMM0 = (unsigned __int64)pPoint;
  __asm { vpcmpeqq xmm2, xmm0, xmm1 }
  _XMM1 = 0i64;
  __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnTargetDir
==============
*/
float AIScriptedInterface::Cover_ScoreOnTargetDir(AIScriptedInterface *this, const vec3_t *nodeOrigin, const CoverNodeMetricParams *metricParams)
{
  __int128 v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  float v14; 
  float result; 

  if ( metricParams->engagementDirWeight == 0.0 )
    return 0.0;
  v5 = LODWORD(nodeOrigin->v[0]);
  *(float *)&v5 = nodeOrigin->v[0] - metricParams->referenceOrigin.v[0];
  v4 = v5;
  v6 = nodeOrigin->v[1] - metricParams->referenceOrigin.v[1];
  v8 = LODWORD(nodeOrigin->v[2]);
  *(float *)&v8 = nodeOrigin->v[2] - metricParams->referenceOrigin.v[2];
  v7 = v8;
  v9 = v4;
  *(float *)&v9 = (float)(*(float *)&v4 * *(float *)&v4) + (float)(v6 * v6);
  if ( this->Is3D(this) )
  {
    v10 = v7;
    *(float *)&v10 = fsqrt((float)(*(float *)&v7 * *(float *)&v7) + (float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(v6 * v6)));
    _XMM2 = v10;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    if ( *(float *)&v10 < 64.0 )
      return 0.0;
    v14 = (float)((float)((float)(v6 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[1]) + (float)((float)(*(float *)&v4 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[0])) + (float)((float)(*(float *)&v7 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[2]);
  }
  else
  {
    *(float *)&v9 = fsqrt(*(float *)&v9);
    _XMM2 = v9;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    if ( *(float *)&v9 < 64.0 )
      return 0.0;
    v14 = (float)((float)(v6 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[1]) + (float)((float)(*(float *)&v4 * (float)(1.0 / *(float *)&_XMM0)) * metricParams->dirToEnemy.v[0]);
  }
  if ( v14 > 0.2 )
    return metricParams->engagementDirWeight;
  if ( v14 < -0.2 )
  {
    LODWORD(result) = LODWORD(metricParams->engagementDirWeight) ^ _xmm;
    return result;
  }
  return 0.0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnVisibility
==============
*/
float AIScriptedInterface::Cover_ScoreOnVisibility(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, const tacpoint_t *pEnemyTacPoint, float visibleWeight)
{
  bool HasVis; 

  HasVis = 1;
  if ( pEnemyTacPoint )
  {
    HasVis = TacGraph_HasVis(pEnemyTacPoint, node);
  }
  else if ( enemyNode )
  {
    HasVis = Path_NodesVisible(node, enemyNode) == 1;
  }
  _XMM0 = HasVis;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(visibleWeight);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnVisibility_Tac
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnVisibility_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, const tacpoint_t *pEnemyTacPoint, double visibleWeight)
{
  bool HasVis; 

  _XMM6 = *(_OWORD *)&visibleWeight;
  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 773, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  HasVis = 1;
  if ( pEnemyTacPoint )
    HasVis = TacVisGraph_HasVis(pPoint, pEnemyTacPoint);
  _XMM0 = HasVis;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm1, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_SetAimLimits
==============
*/
void AIScriptedInterface::Cover_SetAimLimits(AIScriptedInterface *this, const pathnode_t *node)
{
  ai_scripted_t *m_pAI; 
  pathnodeRange_t *Range; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 463, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->unitType == AI_UNITTYPE_JUGGERNAUT )
  {
    m_pAI->sight.rightAimLimit = -60.0;
    this->m_pAI->sight.leftAimLimit = 60.0;
    this->m_pAI->sight.upAimLimit = -80.0;
  }
  else
  {
    if ( node )
    {
      if ( node->constant.type == 4 )
      {
        Range = &nodeRangeForward;
      }
      else
      {
        Range = (pathnodeRange_t *)AIScriptedInterface::Cover_GetRange(node);
        if ( !Range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 487, ASSERT_TYPE_ASSERT, "(range)", (const char *)&queryFormat, "range") )
          __debugbreak();
      }
      _XMM7 = 0i64;
      __asm { vroundss xmm2, xmm7, xmm1, 1 }
      this->m_pAI->sight.rightAimLimit = (float)((float)(0.0027777778 * Range->fAngleMin) - *(float *)&_XMM2) * 360.0;
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      this->m_pAI->sight.leftAimLimit = (float)((float)(0.0027777778 * Range->fAngleMax) - *(float *)&_XMM3) * 360.0;
    }
    else
    {
      m_pAI->sight.rightAimLimit = -60.0;
      this->m_pAI->sight.leftAimLimit = 60.0;
    }
    this->m_pAI->sight.upAimLimit = -45.0;
  }
  this->m_pAI->sight.downAimLimit = 45.0;
}

/*
==============
AIScriptedInterface::Cover_UseCoverNode
==============
*/
char AIScriptedInterface::Cover_UseCoverNode(AIScriptedInterface *this, pathnode_t *node)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2949, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2950, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2951, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( this->m_pAI->nodeSelect.keepClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2952, ASSERT_TYPE_ASSERT, "(!m_pAI->nodeSelect.keepClaimedNode)", (const char *)&queryFormat, "!m_pAI->nodeSelect.keepClaimedNode") )
    __debugbreak();
  if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 1 || !this->Cover_IsValidCover(this, node, 0) )
    return 0;
  if ( !this->m_pAI->ent->tagInfo && !AIScriptedInterface::FindPathToClaimNode(this, node, 1, 0) )
  {
    AIScriptedInterface::Debug_NotMoving(this, "cover - no path to claimed node");
    AIScriptedInterface::TeamMoveBlocked(this);
    return 0;
  }
  Sentient_ClaimNode(this->m_pAI->sentient, node);
  this->m_pAI->nodeSelect.iPotentialCoverNodeCount = 0;
  this->m_pAI->nodeSelect.nextFindBestCoverTime = level.time + AIScriptedInterface::GetCoverSearchInterval(this);
  if ( this->m_pAI->eState[this->m_pAI->stateLevel] != AIS_BEHAVE )
    AIScriptedInterface::SetState(this, AIS_BEHAVE);
  AIScriptedInterface::SetSubState(this, STATE_EXPOSED_COMBAT);
  return 1;
}

/*
==============
DebugDrawNodePicking
==============
*/
void DebugDrawNodePicking(const char *msg, ai_scripted_t *self, const pathnode_t *node, const vec4_t *color)
{
  const dvar_t *v4; 
  const dvar_t *v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  vec4_t *v12; 
  float v13; 
  __int64 v14; 
  char *v15; 
  char v16; 

  v4 = DVARINT_ai_debugCoverSelection;
  if ( !DVARINT_ai_debugCoverSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCoverSelection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == 1 )
  {
    v9 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.integer == self->ent->s.number )
    {
      if ( debugNodeTimestamp == level.time )
      {
        v10 = debugNodeIndex;
        if ( debugNodeIndex >= 0x100 )
        {
          Com_PrintWarning(18, "DebugDrawNodePicking: Hit max [%d] debug nodes\n", 256i64);
          return;
        }
      }
      else
      {
        v10 = 0;
        debugNodeIndex = 0;
      }
      if ( msg )
      {
        v11 = -1i64;
        do
          ++v11;
        while ( msg[v11] );
        if ( v11 >= 0x14 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 172, ASSERT_TYPE_ASSERT, "(!msg || strlen (msg) < 20)", (const char *)&queryFormat, "!msg || strlen (msg) < MAX_DEBUG_NODE_STRLEN") )
            __debugbreak();
          v10 = debugNodeIndex;
        }
      }
      v12 = &debugCoverNodeColors[v10];
      v13 = color->v[0];
      debugCoverNode[v10] = node;
      v12->v[0] = v13;
      v12->v[1] = color->v[1];
      v12->v[2] = color->v[2];
      v12->v[3] = color->v[3];
      v14 = v10;
      if ( msg )
      {
        v15 = &debugCoverNodeMsg[0][v14 * 21 - (_QWORD)msg];
        do
        {
          v16 = *msg;
          msg[(_QWORD)v15] = *msg;
          ++msg;
        }
        while ( v16 );
      }
      else
      {
        debugCoverNodeMsg[v14][0] = 0;
      }
      debugNodeIndex = v10 + 1;
      debugNodeTimestamp = level.time;
    }
  }
}

/*
==============
DebugDrawNodeSelectionOverlay
==============
*/
void DebugDrawNodeSelectionOverlay(void)
{
  const dvar_t *v0; 
  __int64 v1; 
  float v2; 
  float v3; 
  float v4; 
  pathnode_t *v5; 
  const char *v6; 
  float v7; 
  float v8; 
  const char *v9; 
  vec3_t outPos; 

  if ( debugNodeIndex )
  {
    v0 = DVARINT_ai_debugCoverSelection;
    if ( !DVARINT_ai_debugCoverSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCoverSelection") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.integer == 1 )
    {
      CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
      v1 = 0i64;
      if ( debugNodeIndex )
      {
        v2 = outPos.v[2];
        v3 = outPos.v[1];
        v4 = outPos.v[0];
        do
        {
          v5 = (pathnode_t *)debugCoverNode[v1];
          Path_DrawDebugNodeBox(v5);
          v6 = debugCoverNodeMsg[(unsigned int)v1];
          if ( v6 )
          {
            pathnode_t::GetPos(v5, &outPos);
            v7 = fsqrt((float)((float)((float)(outPos.v[1] - v3) * (float)(outPos.v[1] - v3)) + (float)((float)(outPos.v[0] - v4) * (float)(outPos.v[0] - v4))) + (float)((float)(outPos.v[2] - v2) * (float)(outPos.v[2] - v2))) * 0.0016666667;
            if ( !strncmp(v6, "best", 4ui64) )
            {
              v8 = outPos.v[2] + 48.0;
            }
            else if ( !strncmp(v6, "adv", 3ui64) )
            {
              v8 = outPos.v[2] + 32.0;
            }
            else
            {
              v8 = outPos.v[2] + 16.0;
            }
            outPos.v[2] = v8;
            v9 = j_va("%s  (%2.1f)", v6, (float)((float)(level.time - debugNodeTimestamp) * 0.001));
            G_Main_AddDebugString(&outPos, &debugCoverNodeColors[(unsigned int)v1], v7, v9);
          }
          v1 = (unsigned int)(v1 + 1);
        }
        while ( (unsigned int)v1 < debugNodeIndex );
      }
    }
  }
}

/*
==============
AIScriptedInterface::DebugDrawNodesInVolume
==============
*/
void AIScriptedInterface::DebugDrawNodesInVolume(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  gentity_s *v7; 
  int v8; 
  __int64 v9; 
  pathsort_s *p_nodes; 
  const pathnode_t *node; 
  int maxNodes; 
  __int64 typeFlags; 
  int typeFlagsa; 
  vec3_t outPos; 
  pathsort_s nodes; 

  CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
  m_pAI = this->m_pAI;
  number = m_pAI->codeGoal.hVolume.number;
  if ( !number )
    goto LABEL_24;
  v4 = number;
  v5 = number - 1;
  if ( v5 >= 0x800 )
  {
    typeFlagsa = 2048;
    maxNodes = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", maxNodes, typeFlagsa) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = v4 - 1;
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(typeFlags) = m_pAI->codeGoal.hVolume.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", typeFlags) )
      __debugbreak();
  }
  if ( !m_pAI->codeGoal.hVolume.number )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2852, ASSERT_TYPE_ASSERT, "(m_pAI->codeGoal.hVolume.isDefined())", (const char *)&queryFormat, "m_pAI->codeGoal.hVolume.isDefined()") )
      __debugbreak();
  }
  v7 = EntHandle::ent(&this->m_pAI->codeGoal.hVolume);
  v8 = Path_NodesInCylinder(&this->m_pAI->codeGoal.pos, NULL, this->m_pAI->codeGoal.radius, this->m_pAI->codeGoal.height, &nodes, 512, -2107367684);
  v9 = v8;
  if ( v8 > 0 )
  {
    p_nodes = &nodes;
    do
    {
      node = p_nodes->node;
      if ( isNodeInRegion(p_nodes->node, v7) )
        Path_DrawDebugNode(&outPos, node);
      ++p_nodes;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
AIScriptedInterface::GetCoverNodeMetricParams
==============
*/
void AIScriptedInterface::GetCoverNodeMetricParams(AIScriptedInterface *this, CoverNodeMetricParams *metricParams)
{
  int isDefined; 
  ai_scripted_t *m_pAI; 
  gentity_s *v6; 
  float v7; 
  float *p_number; 
  gentity_s *TargetEntity; 
  sentient_s *sentient; 
  bool v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  float v16; 
  __int128 v20; 
  __int128 v21; 
  ai_scripted_t *v24; 
  ai_scripted_t *v25; 
  gentity_s *ent; 
  __int128 v27; 
  __int128 v28; 
  ai_scripted_t *v32; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1765, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1766, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !metricParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1767, ASSERT_TYPE_ASSERT, "(metricParams)", (const char *)&queryFormat, "metricParams") )
    __debugbreak();
  metricParams->pEnemyTacPoint = Sentient_NearestTacPointOfEnemy(this->m_pAI->sentient);
  metricParams->enemyNode = Sentient_NearestNodeOfEnemy(this->m_pAI->sentient);
  *(_QWORD *)&metricParams->distToEnemy = 0i64;
  metricParams->enemy = NULL;
  isDefined = EntHandle::isDefined(&this->m_pAI->coverSelectionFocusEnt);
  m_pAI = this->m_pAI;
  if ( isDefined )
  {
    v6 = EntHandle::ent(&m_pAI->coverSelectionFocusEnt);
    metricParams->referenceOrigin.v[0] = v6->r.currentOrigin.v[0];
    metricParams->referenceOrigin.v[1] = v6->r.currentOrigin.v[1];
    v7 = v6->r.currentOrigin.v[2];
  }
  else
  {
    p_number = (float *)&m_pAI->ent->s.number;
    metricParams->referenceOrigin.v[0] = p_number[76];
    metricParams->referenceOrigin.v[1] = p_number[77];
    v7 = p_number[78];
  }
  metricParams->referenceOrigin.v[2] = v7;
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( TargetEntity && (!this->m_pAI->bUseBackupCoverFromPos || AIScriptedInterface::IsCurrentEnemyValid(this)) )
  {
    sentient = TargetEntity->sentient;
    if ( sentient )
      metricParams->enemy = sentient;
    v11 = this->Is3D(this);
    v12 = TargetEntity->r.currentOrigin.v[0];
    if ( v11 )
    {
      v14 = LODWORD(TargetEntity->r.currentOrigin.v[0]);
      v13 = v12 - metricParams->referenceOrigin.v[0];
      metricParams->dirToEnemy.v[0] = v13;
      v15 = TargetEntity->r.currentOrigin.v[1] - metricParams->referenceOrigin.v[1];
      metricParams->dirToEnemy.v[1] = v15;
      v16 = TargetEntity->r.currentOrigin.v[2] - metricParams->referenceOrigin.v[2];
      metricParams->dirToEnemy.v[2] = v16;
      *(float *)&v14 = fsqrt((float)((float)(v13 * v13) + (float)(v15 * v15)) + (float)(v16 * v16));
      _XMM5 = v14;
      __asm
      {
        vcmpless xmm0, xmm5, cs:__real@80000000
        vblendvps xmm0, xmm5, xmm1, xmm0
      }
      metricParams->dirToEnemy.v[0] = v13 * (float)(1.0 / *(float *)&_XMM0);
      metricParams->dirToEnemy.v[1] = (float)(1.0 / *(float *)&_XMM0) * metricParams->dirToEnemy.v[1];
      metricParams->dirToEnemy.v[2] = (float)(1.0 / *(float *)&_XMM0) * metricParams->dirToEnemy.v[2];
    }
    else
    {
      metricParams->dirToEnemy.v[0] = v12 - metricParams->referenceOrigin.v[0];
      metricParams->dirToEnemy.v[1] = TargetEntity->r.currentOrigin.v[1] - metricParams->referenceOrigin.v[1];
      metricParams->dirToEnemy.v[2] = 0.0;
      v20 = LODWORD(metricParams->dirToEnemy.v[0]);
      v21 = v20;
      *(float *)&v21 = fsqrt((float)(*(float *)&v20 * *(float *)&v20) + (float)(metricParams->dirToEnemy.v[1] * metricParams->dirToEnemy.v[1]));
      _XMM5 = v21;
      __asm
      {
        vcmpless xmm0, xmm5, cs:__real@80000000
        vblendvps xmm0, xmm5, xmm1, xmm0
      }
      metricParams->dirToEnemy.v[0] = *(float *)&v20 * (float)(1.0 / *(float *)&_XMM0);
      metricParams->dirToEnemy.v[1] = (float)(1.0 / *(float *)&_XMM0) * metricParams->dirToEnemy.v[1];
    }
    metricParams->distToEnemy = *(float *)&_XMM5;
    v24 = this->m_pAI;
    if ( *(float *)&_XMM5 >= v24->nodeSelect.engageMinFalloffDist )
    {
      if ( *(float *)&_XMM5 >= v24->nodeSelect.engageMinDist )
      {
        if ( *(float *)&_XMM5 <= v24->nodeSelect.engageMaxFalloffDist )
        {
          if ( *(float *)&_XMM5 > v24->nodeSelect.engageMaxDist )
            metricParams->engagementDirWeight = 0.5;
        }
        else
        {
          metricParams->engagementDirWeight = 1.0;
        }
      }
      else
      {
        metricParams->engagementDirWeight = -0.5;
      }
    }
    else
    {
      metricParams->engagementDirWeight = -1.0;
    }
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, TargetEntity, &metricParams->lastKnownEnemyOrigin);
    metricParams->lastKnownValid = 1;
  }
  else
  {
    v25 = this->m_pAI;
    if ( v25->bUseBackupCoverFromPos )
    {
      ent = v25->ent;
      metricParams->dirToEnemy.v[0] = v25->backupCoverFromPos.v[0] - v25->ent->r.currentOrigin.v[0];
      metricParams->dirToEnemy.v[1] = v25->backupCoverFromPos.v[1] - ent->r.currentOrigin.v[1];
      metricParams->dirToEnemy.v[2] = v25->backupCoverFromPos.v[2] - ent->r.currentOrigin.v[2];
      if ( !this->Is3D(this) )
        metricParams->dirToEnemy.v[2] = 0.0;
      v27 = LODWORD(metricParams->dirToEnemy.v[0]);
      v28 = v27;
      *(float *)&v28 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(metricParams->dirToEnemy.v[1] * metricParams->dirToEnemy.v[1])) + (float)(metricParams->dirToEnemy.v[2] * metricParams->dirToEnemy.v[2]));
      _XMM4 = v28;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
      }
      metricParams->dirToEnemy.v[0] = *(float *)&v27 * (float)(1.0 / *(float *)&_XMM0);
      metricParams->dirToEnemy.v[1] = (float)(1.0 / *(float *)&_XMM0) * metricParams->dirToEnemy.v[1];
      metricParams->dirToEnemy.v[2] = (float)(1.0 / *(float *)&_XMM0) * metricParams->dirToEnemy.v[2];
      metricParams->distToEnemy = *(float *)&v28;
      v32 = this->m_pAI;
      metricParams->lastKnownEnemyOrigin.v[0] = v32->backupCoverFromPos.v[0];
      metricParams->lastKnownEnemyOrigin.v[1] = v32->backupCoverFromPos.v[1];
      metricParams->lastKnownEnemyOrigin.v[2] = v32->backupCoverFromPos.v[2];
      metricParams->lastKnownValid = 1;
    }
    else
    {
      *(_QWORD *)metricParams->dirToEnemy.v = 0i64;
      metricParams->dirToEnemy.v[2] = 0.0;
      *(_QWORD *)metricParams->lastKnownEnemyOrigin.v = 0i64;
      metricParams->lastKnownEnemyOrigin.v[2] = 0.0;
      metricParams->lastKnownValid = 0;
    }
  }
}

/*
==============
AIScriptedInterface::IsMountedAtLMGNode
==============
*/
bool AIScriptedInterface::IsMountedAtLMGNode(AIScriptedInterface *this)
{
  const Weapon *v2; 
  pathnode_t *CoverNode; 
  bool result; 

  v2 = this->GetEquippedWeapon(this);
  result = 0;
  if ( BG_GetWeaponClass(v2, 0) == WEAPCLASS_MG )
  {
    CoverNode = AIScriptedInterface::GetCoverNode(this);
    if ( CoverNode )
    {
      if ( (CoverNode->constant.spawnflags & 0x10000) != 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
AIScriptedInterface::IsValidCoverTacPoint
==============
*/
char AIScriptedInterface::IsValidCoverTacPoint(AIScriptedInterface *this, const tacpoint_t *pTacpoint)
{
  sentient_s *TargetSentient; 
  const tacpoint_t *v5; 
  ai_scripted_t *m_pAI; 
  sentient_s *v7; 
  ai_common_t *ai; 
  ai_common_t *v9; 
  int v10; 
  int v11; 
  float v12; 
  float *v; 
  AIWrapper v15; 
  float v16; 
  int v17; 
  int v18; 
  bitarray<224> result; 

  if ( !pTacpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1555, ASSERT_TYPE_ASSERT, "(pTacpoint)", (const char *)&queryFormat, "pTacpoint") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( TargetSentient )
  {
    v5 = Sentient_NearestTacPoint(TargetSentient);
    if ( !v5 || TacVisGraph_HasVis(pTacpoint, v5) )
    {
      if ( AIScriptedInterface::PathPending(this) || (m_pAI = this->m_pAI, (float)((float)((float)(m_pAI->Physics.vVelocity.v[0] * m_pAI->Physics.vVelocity.v[0]) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1])) + (float)(m_pAI->Physics.vVelocity.v[2] * m_pAI->Physics.vVelocity.v[2])) > 0.001) || !AIScriptedInterface::IsCurrentlyBlockingOtherAI(this) )
      {
        Com_Teams_GetTeamFlag(&result, this->m_pAI->sentient->eTeam);
        v7 = Sentient_FirstSentient(&result);
        if ( !v7 )
          return 1;
        while ( 1 )
        {
          if ( v7 != this->m_pAI->sentient )
          {
            ai = v7->ai;
            if ( (!ai || ai->pNavigator) && v7->ent->health > 0 )
            {
              AIWrapper::AIWrapper(&v15, v7->ent);
              if ( v15.m_pAI )
              {
                if ( AIScriptedInterface::GetCoverTacPoint(v15.m_pAI) == pTacpoint )
                  break;
              }
              v9 = v7->ai;
              if ( v9 && v9->pNavigator->HasPath(v9->pNavigator) )
              {
                v7->ai->pNavigator->GetGoalPos(v7->ai->pNavigator, (vec3_t *)&v16);
                v10 = v18;
                v11 = v17;
                v12 = v16;
              }
              else
              {
                v = v7->ent->r.currentOrigin.v;
                v12 = *v;
                v16 = *v;
                v11 = *((int *)v + 1);
                v17 = v11;
                v10 = *((int *)v + 2);
                v18 = v10;
              }
              if ( (float)((float)((float)((float)(*(float *)&v11 - pTacpoint->m_Pos.v[1]) * (float)(*(float *)&v11 - pTacpoint->m_Pos.v[1])) + (float)((float)(v12 - pTacpoint->m_Pos.v[0]) * (float)(v12 - pTacpoint->m_Pos.v[0]))) + (float)((float)(*(float *)&v10 - pTacpoint->m_Pos.v[2]) * (float)(*(float *)&v10 - pTacpoint->m_Pos.v[2]))) < 32.0 )
                break;
            }
          }
          v7 = Sentient_NextSentient(v7, &result);
          if ( !v7 )
            return 1;
        }
      }
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::KeepClaimedNode
==============
*/
char AIScriptedInterface::KeepClaimedNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  const dvar_t *v4; 
  ai_scripted_t *v5; 
  float v6; 
  sentient_s *TargetSentient; 
  float *p_number; 
  ai_scripted_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  ai_scripted_t *v13; 
  const ai_goal_t *p_codeGoal; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2890, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->nodeSelect.keepClaimedNode )
  {
    if ( !m_pAI->nodeSelect.keepClaimedNodeIfValid )
      return 0;
    pClaimedNode = m_pAI->sentient->pClaimedNode;
    if ( !pClaimedNode )
      goto LABEL_18;
    pathnode_t::GetPos(pClaimedNode, &pos);
    v4 = DCONST_DVARFLT_ai_boundingOverwatchGoalProximity;
    if ( !DCONST_DVARFLT_ai_boundingOverwatchGoalProximity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_boundingOverwatchGoalProximity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = this->m_pAI;
    v6 = v4->current.value * v4->current.value;
    if ( v5->squadNumber >= 0 && v5->squadMovementAllowed )
      goto LABEL_19;
    TargetSentient = AICommonInterface::GetTargetSentient(this);
    if ( TargetSentient )
    {
      p_number = (float *)&TargetSentient->ent->s.number;
      v9 = this->m_pAI;
      v10 = v9->ent->r.currentOrigin.v[0] - p_number[76];
      v11 = v9->ent->r.currentOrigin.v[1] - p_number[77];
      v12 = v9->ent->r.currentOrigin.v[2] - p_number[78];
      if ( (float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12)) < 4096.0 )
      {
        if ( AICommonInterface::CanSeeEnemy(this) )
          goto LABEL_18;
      }
    }
    v13 = this->m_pAI;
    p_codeGoal = &v13->codeGoal;
    if ( (!v13->boundingOverwatchEnabled || (float)((float)((float)((float)(v13->codeGoal.pos.v[1] - pos.v[1]) * (float)(v13->codeGoal.pos.v[1] - pos.v[1])) + (float)((float)(p_codeGoal->pos.v[0] - pos.v[0]) * (float)(p_codeGoal->pos.v[0] - pos.v[0]))) + (float)((float)(v13->codeGoal.pos.v[2] - pos.v[2]) * (float)(v13->codeGoal.pos.v[2] - pos.v[2]))) <= v6) && !AICommonInterface::PointAtGoal(this, &pos, p_codeGoal) )
    {
LABEL_18:
      v5 = this->m_pAI;
LABEL_19:
      v5->nodeSelect.keepClaimedNodeIfValid = 0;
      return 0;
    }
  }
  return 1;
}

/*
==============
AIScriptedInterface::ShouldKeepClaimedNode
==============
*/
bool AIScriptedInterface::ShouldKeepClaimedNode(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2873, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2874, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2875, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentient->pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2876, ASSERT_TYPE_ASSERT, "( m_pAI->sentient->pClaimedNode )", (const char *)&queryFormat, "m_pAI->sentient->pClaimedNode") )
    __debugbreak();
  return AIScriptedInterface::KeepClaimedNode(this) || AIScriptedInterface::PointNearClaimNode(this, &this->m_pAI->ent->r.currentOrigin);
}

/*
==============
compare_node_sort
==============
*/
__int64 compare_node_sort(const void *pe1, const void *pe2)
{
  float v2; 

  v2 = *((float *)pe2 + 2) - *((float *)pe1 + 2);
  if ( v2 >= 0.0 )
    return v2 > 0.0;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
isNodeInRegion
==============
*/
int isNodeInRegion(pathnode_t *node, gentity_s *volume)
{
  unsigned int Instance; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1747, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !volume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1748, ASSERT_TYPE_ASSERT, "(volume)", (const char *)&queryFormat, "volume") )
    __debugbreak();
  pathnode_t::GetPos(node, &pos);
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, volume);
  return PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pos, Instance, volume);
}

