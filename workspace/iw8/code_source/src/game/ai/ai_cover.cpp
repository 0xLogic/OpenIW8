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
  ntl::red_black_tree_node_base *mp_right; 
  ntl::pair<enum scr_string_t,CoverSelector *> r_element; 
  __m256i v19; 
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
    _RCX = g_coverSelectorMap.m_freelist.m_head.mp_next;
    v19.m256i_i32[0] = 0;
    v19.m256i_i64[1] = (__int64)v8;
    __asm { vmovups xmm1, xmmword ptr [rsp+98h+r_element.first] }
    g_coverSelectorMap.m_freelist.m_head.mp_next = g_coverSelectorMap.m_freelist.m_head.mp_next->mp_next;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+98h+var_48+10h], xmm0
      vmovups ymm0, ymmword ptr [rsp+98h+var_48]
      vmovups ymmword ptr [rcx], ymm0
      vmovups xmmword ptr [rcx+20h], xmm1
    }
    if ( v8 == &g_coverSelectorMap.m_endNodeBase )
    {
      g_coverSelectorMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
      g_coverSelectorMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
      g_coverSelectorMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
    }
    else if ( v7 >= v8[1].m_color )
    {
      v8->mp_right = (ntl::red_black_tree_node_base *)_RCX;
      mp_right = g_coverSelectorMap.m_endNodeBase.mp_right;
      if ( v8 == g_coverSelectorMap.m_endNodeBase.mp_right )
        mp_right = (ntl::red_black_tree_node_base *)_RCX;
      g_coverSelectorMap.m_endNodeBase.mp_right = mp_right;
    }
    else
    {
      v8->mp_left = (ntl::red_black_tree_node_base *)_RCX;
      if ( v8 == g_coverSelectorMap.m_endNodeBase.mp_left )
        g_coverSelectorMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
    }
    ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &g_coverSelectorMap.m_endNodeBase.mp_parent);
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

void __fastcall AIScriptedInterface::Cover_AdjustSearchOrigin(AIScriptedInterface *this, double searchRadius, const vec3_t *desiredOrigin, vec3_t *outSearchOrigin)
{
  bool v10; 
  bool v15; 
  bool v17; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  v10 = this->m_pAI == NULL;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = outSearchOrigin;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RBX = desiredOrigin;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm6, xmm1
  }
  if ( v10 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2667, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI");
    v10 = !v15;
    if ( v15 )
      __debugbreak();
  }
  _RAX = this->m_pAI;
  __asm { vcomiss xmm6, dword ptr [rax+264h] }
  if ( !v10 )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2668, ASSERT_TYPE_ASSERT, "(searchRadius <= m_pAI->codeGoal.radius)", (const char *)&queryFormat, "searchRadius <= m_pAI->codeGoal.radius");
    v10 = !v17;
    if ( v17 )
      __debugbreak();
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm3, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rax+258h]
    vsubss  xmm8, xmm0, xmm3
    vmovss  xmm0, dword ptr [rax+25Ch]
    vsubss  xmm9, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rax+260h]
    vsubss  xmm10, xmm0, dword ptr [rbx+8]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm7, xmm2, xmm2
    vaddss  xmm0, xmm7, xmm6
    vcomiss xmm0, dword ptr [rax+264h]
  }
  if ( v10 )
  {
    __asm { vmovss  dword ptr [rdi], xmm3 }
    _RDI->v[1] = _RBX->v[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm7, xmm0
    }
    if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2679, ASSERT_TYPE_ASSERT, "(distToCenter > 0.f)", (const char *)&queryFormat, "distToCenter > 0.f") )
      __debugbreak();
    __asm { vmovss  xmm1, cs:__real@3f800000 }
    _RAX = this->m_pAI;
    __asm
    {
      vcmpless xmm0, xmm7, cs:__real@80000000
      vblendvps xmm0, xmm7, xmm1, xmm0
      vdivss  xmm4, xmm1, xmm0
      vmovss  xmm0, dword ptr [rax+264h]
      vsubss  xmm1, xmm0, xmm6
      vsubss  xmm3, xmm7, xmm1
      vmulss  xmm0, xmm8, xmm4
      vmulss  xmm1, xmm0, xmm3
      vaddss  xmm2, xmm1, dword ptr [rbx]
      vmovss  dword ptr [rdi], xmm2
      vmulss  xmm0, xmm9, xmm4
      vmulss  xmm1, xmm0, xmm3
      vaddss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rdi+4], xmm2
      vmulss  xmm0, xmm10, xmm4
      vmulss  xmm1, xmm0, xmm3
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm7, [rsp+88h+var_28]
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
  pathnode_t *result; 
  AIScriptedInterface_vtbl *v17; 
  AIScriptedInterface_vtbl *v18; 
  int v22; 
  int v23; 
  __int64 v28; 
  char v37; 
  __int64 v38; 
  float outBestScore; 
  vec3_t pos; 
  pathnode_t *bestNodes[256]; 

  _RBX = avoidEnt;
  if ( !avoidEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2002, ASSERT_TYPE_ASSERT, "(avoidEnt)", (const char *)&queryFormat, "avoidEnt") )
    __debugbreak();
  BestCoverList = AIScriptedInterface::Cover_FindBestCoverList(this, bestNodes, 256, this->m_pAI->combat.combatMode, searchCenteredAroundAI, coverSelector, pMetricParams, &outBestScore);
  if ( !BestCoverList )
    return 0i64;
  v17 = this->__vftable;
  __asm
  {
    vmovaps [rsp+8E8h+var_48], xmm7
    vmovaps [rsp+8E8h+var_58], xmm8
    vmovaps [rsp+8E8h+var_68], xmm9
    vmovaps [rsp+8E8h+var_78], xmm10
  }
  if ( v17->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2011, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  v18 = this->__vftable;
  __asm { vmovaps [rsp+8E8h+var_38], xmm6 }
  _RAX = (__int64)v18->GetEntity(this);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
  }
  v22 = BestCoverList - 1;
  v23 = v22;
  __asm
  {
    vmovss  xmm7, dword ptr [rax+130h]
    vmovss  xmm8, dword ptr [rax+134h]
    vsubss  xmm9, xmm0, xmm7
    vsubss  xmm10, xmm1, xmm8
  }
  if ( v22 < 0 )
  {
LABEL_15:
    v38 = v22;
  }
  else
  {
    v28 = v22;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    while ( 1 )
    {
      if ( !bRequestDifferentCover || bestNodes[v28] != this->m_pAI->sentient->pClaimedNode )
      {
        pathnode_t::GetPos(bestNodes[v28], &pos);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+8E8h+pos]
          vmovss  xmm2, dword ptr [rsp+8E8h+pos+4]
          vsubss  xmm1, xmm0, xmm7
          vmulss  xmm3, xmm1, xmm9
          vsubss  xmm0, xmm2, xmm8
          vmulss  xmm1, xmm0, xmm10
          vaddss  xmm3, xmm3, xmm1
          vcomiss xmm3, xmm6
        }
        if ( v37 )
          break;
      }
      --v23;
      if ( --v28 < 0 )
        goto LABEL_15;
    }
    v38 = v23;
  }
  result = bestNodes[v38];
  __asm
  {
    vmovaps xmm6, [rsp+8E8h+var_38]
    vmovaps xmm8, [rsp+8E8h+var_58]
    vmovaps xmm7, [rsp+8E8h+var_48]
    vmovaps xmm9, [rsp+8E8h+var_68]
    vmovaps xmm10, [rsp+8E8h+var_78]
  }
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindBestCoverInList
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindBestCoverInList(AIScriptedInterface *this, const pathsort_s *nodes, int nodeCount, bool bCheckReachability, float *outBestScore)
{
  int v7; 
  int v12; 
  bool v14; 
  pathnode_t *result; 

  _R12 = outBestScore;
  v7 = 0;
  __asm { vmovaps [rsp+58h+var_38], xmm6 }
  v12 = -1;
  *outBestScore = 0.0;
  __asm { vmovss  xmm6, cs:__real@ff7fffff }
  v14 = 0;
  if ( nodeCount <= 0 )
    goto LABEL_10;
  _RBX = &nodes->metric;
  do
  {
    __asm { vcomiss xmm6, dword ptr [rbx] }
    if ( v14 && (!bCheckReachability || this->m_pAI->pNavigator->IsNodeReachable(this->m_pAI->pNavigator, (const pathnode_t *)*((_QWORD *)_RBX - 1))) )
    {
      __asm { vmovss  xmm6, dword ptr [rbx] }
      v12 = v7;
    }
    ++v7;
    _RBX += 4;
    v14 = v7 < (unsigned int)nodeCount;
  }
  while ( v7 < nodeCount );
  if ( v12 < 0 )
  {
LABEL_10:
    result = NULL;
  }
  else
  {
    __asm { vmovss  dword ptr [r12], xmm6 }
    result = nodes[v12].node;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_38] }
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindBestCoverList
==============
*/
__int64 AIScriptedInterface::Cover_FindBestCoverList(AIScriptedInterface *this, pathnode_t **bestNodes, int bestNodesInList, CombatMode combatMode, bool searchCenteredOnAI, scr_string_t coverSelectorName, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  unsigned int v11; 
  scr_string_t defaultcoverselector; 
  ai_scripted_t *m_pAI; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *v18; 
  const CoverSelector *v19; 
  const dvar_t *v29; 
  ai_scripted_t *v30; 
  const dvar_t *v31; 
  vec3_t *p_lastKnownEnemyOrigin; 
  int v37; 
  unsigned int v39; 
  const dvar_t *v43; 
  int isDefined; 
  bool v45; 
  gentity_s *v46; 
  int ValidNodeMetrics; 
  int v48; 
  ai_scripted_t *v49; 
  int number; 
  __int64 v51; 
  __int64 v52; 
  int v53; 
  const char *v54; 
  const char *v55; 
  __int64 result; 
  int v58; 
  int v59; 
  __int64 v60; 
  bool v62; 
  pathnode_t *node; 
  unsigned int BestNodesFromList; 
  char *fmt; 
  __int64 duration; 
  __int64 durationa; 
  __int64 typeFlags; 
  vec3_t outSearchOrigin; 
  PathBlockPlanes blockPlanes; 
  pathsort_s nodes[256]; 

  _R12 = outBestScore;
  v11 = 0;
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
  v18 = g_coverSelectorMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
  if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( v18[1].m_color < coverSelectorName )
    {
      v18 = v18->mp_right;
    }
    else
    {
      p_m_endNodeBase = v18;
      v18 = v18->mp_left;
    }
  }
  while ( v18 );
LABEL_13:
  if ( p_m_endNodeBase == &g_coverSelectorMap.m_endNodeBase )
    return 0i64;
  if ( defaultcoverselector < p_m_endNodeBase[1].m_color )
    return 0i64;
  v19 = (const CoverSelector *)p_m_endNodeBase[1].mp_parent;
  if ( !v19 )
    return 0i64;
  __asm { vmovaps [rsp+1108h+var_58], xmm6 }
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
    __asm { vmovss  xmm6, cs:__real@44800000 }
    _RAX = EntHandle::ent(&this->m_pAI->coverSelectionFocusEnt);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rsp+1108h+outSearchOrigin], xmm0
      vmovss  xmm1, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+1108h+outSearchOrigin+4], xmm1
      vmovss  xmm0, dword ptr [rax+138h]
      vmovss  dword ptr [rsp+1108h+outSearchOrigin+8], xmm0
    }
  }
  else if ( searchCenteredOnAI )
  {
    __asm { vmovss  xmm6, cs:__real@44800000 }
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rsp+1108h+outSearchOrigin], xmm0
      vmovss  xmm1, dword ptr [rcx+134h]
      vmovss  dword ptr [rsp+1108h+outSearchOrigin+4], xmm1
      vmovss  xmm0, dword ptr [rcx+138h]
      vmovss  dword ptr [rsp+1108h+outSearchOrigin+8], xmm0
    }
  }
  else
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_GetSearchRadiusAndOrigin(this, &outSearchOrigin);
    __asm { vmovaps xmm6, xmm0 }
  }
  v29 = DVARINT_ai_debugCoverSelection;
  v30 = this->m_pAI;
  if ( !DVARINT_ai_debugCoverSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCoverSelection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v29->current.integer == 1 )
  {
    v31 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.integer == v30->ent->s.number )
    {
      __asm { vmovaps xmm1, xmm6; radius }
      G_DebugCircle(&outSearchOrigin, *(float *)&_XMM1, &colorYellow, 0, 1, 250);
    }
  }
  p_lastKnownEnemyOrigin = &pMetricParams->lastKnownEnemyOrigin;
  __asm { vmovaps xmm2, xmm6; maxDist }
  if ( !pMetricParams->lastKnownValid )
    p_lastKnownEnemyOrigin = NULL;
  _RAX = this->m_pAI;
  __asm { vmovss  xmm3, dword ptr [rax+268h]; maxHeight }
  v37 = Path_NodesInCylinder(&outSearchOrigin, p_lastKnownEnemyOrigin, *(float *)&_XMM2, *(float *)&_XMM3, nodes, 256, nodeTypeFlags[combatMode]);
  _RDI = this->m_pAI;
  v39 = v37;
  if ( v37 == 256 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+264h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    Com_PrintError(18, "AI %d not considering all nodes in radius %0.f\n", (unsigned int)_RDI->ent->s.number, _R9);
  }
  v43 = DVARINT_ai_debugCoverSelection;
  if ( !DVARINT_ai_debugCoverSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCoverSelection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( v43->current.integer == 1 )
  {
    LODWORD(fmt) = level.time;
    Com_DPrintf(18, "AI %d FindBestCoverList on %d nodes at time %d\n", (unsigned int)_RDI->ent->s.number, v39, fmt);
  }
  if ( AIScriptedInterface::IsDoingAmbush(this) )
    blockPlanes.iPlaneCount = 0;
  else
    AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
  isDefined = EntHandle::isDefined(&this->m_pAI->codeGoal.hVolume);
  v45 = isDefined != 0;
  if ( isDefined )
    v46 = EntHandle::ent(&this->m_pAI->codeGoal.hVolume);
  else
    v46 = NULL;
  ValidNodeMetrics = AIScriptedInterface::Cover_GetValidNodeMetrics(this, nodes, v39, v46, &blockPlanes, v19, pMetricParams);
  v48 = ValidNodeMetrics;
  this->m_pAI->nodeSelect.numCoverNodesInGoal = ValidNodeMetrics;
  if ( ValidNodeMetrics )
  {
    if ( bestNodesInList == 1 )
    {
      *outBestScore = 0.0;
      v58 = -1;
      v59 = 0;
      v60 = ValidNodeMetrics;
      __asm { vmovss  xmm6, cs:__real@ff7fffff }
      v62 = 0;
      if ( ValidNodeMetrics <= 0 )
        goto LABEL_86;
      _RBX = &nodes[0].metric;
      do
      {
        __asm { vcomiss xmm6, dword ptr [rbx] }
        if ( v62 && this->m_pAI->pNavigator->IsNodeReachable(this->m_pAI->pNavigator, (const pathnode_t *)*((_QWORD *)_RBX - 1)) )
        {
          __asm { vmovss  xmm6, dword ptr [rbx] }
          v58 = v59;
        }
        ++v59;
        _RBX += 4;
        v62 = v60-- == 0;
      }
      while ( v60 );
      if ( v58 < 0 )
      {
LABEL_86:
        node = NULL;
      }
      else
      {
        __asm { vmovss  dword ptr [r12], xmm6 }
        node = nodes[v58].node;
      }
      *bestNodes = node;
      Profile_EndInternal(NULL);
      LOBYTE(v11) = *bestNodes != NULL;
      result = v11;
    }
    else
    {
      if ( bestNodesInList < ValidNodeMetrics )
        ValidNodeMetrics = bestNodesInList;
      BestNodesFromList = AIScriptedInterface::Cover_GetBestNodesFromList(this, nodes, v48, bestNodes, ValidNodeMetrics, 1, outBestScore);
      Profile_EndInternal(NULL);
      result = BestNodesFromList;
    }
  }
  else
  {
    if ( v45 )
    {
      v49 = this->m_pAI;
      number = v49->codeGoal.hVolume.number;
      if ( (unsigned int)(number - 1) >= 0x7FF )
      {
        LODWORD(typeFlags) = 2047;
        LODWORD(durationa) = number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", durationa, typeFlags) )
          __debugbreak();
      }
      v51 = v49->codeGoal.hVolume.number;
      if ( (unsigned int)(v51 - 1) >= 0x800 )
      {
        LODWORD(typeFlags) = 2048;
        LODWORD(durationa) = v51 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", durationa, typeFlags) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v52 = v51 - 1;
      if ( g_entities[v52].r.isInUse != g_entityIsInUse[v52] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v52] )
      {
        LODWORD(typeFlags) = v49->codeGoal.hVolume.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", typeFlags) )
          __debugbreak();
      }
      v53 = (__int16)(v49->codeGoal.hVolume.number - 1);
      v54 = vtos(&outSearchOrigin);
      v55 = vtos(&this->m_pAI->ent->r.currentOrigin);
      LODWORD(durationa) = v53;
      Com_PrintWarning(18, "AI (entity %d, origin %s) didn't find nodes within its goal volume (origin %s, entity %d)", (unsigned int)this->m_pAI->ent->s.number, v55, v54, durationa);
    }
    Profile_EndInternal(NULL);
    result = 0i64;
  }
  __asm { vmovaps xmm6, [rsp+1108h+var_58] }
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindBestTacPoint
==============
*/
const tacpoint_t *AIScriptedInterface::Cover_FindBestTacPoint(AIScriptedInterface *this, scr_string_t coverSelectorOverride, bool bRequestDifferentCover, const gentity_s *volume, bool searchCenteredOnAI, CoverNodeMetricParams *pMetricParams, float *outBestScore)
{
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  const CoverSelector *v17; 
  scr_string_t defaultcoverselector; 
  ntl::red_black_tree_node_base *v19; 
  ntl::red_black_tree_node_base *v20; 
  sentient_s *enemy; 
  pathnode_t *pClaimedNode; 
  __int64 PointsInRadiusWithVis_Sorted; 
  const tacpoint_t *v36; 
  AINavigator2D *v37; 
  const bfx::AreaHandle *CurArea; 
  int v42; 
  __int64 v43; 
  __int64 v45; 
  tacpoint_t *v46; 
  tacpoint_t *v47; 
  char v51; 
  char v52; 
  const bfx::AreaHandle *AreaForPoint; 
  const tacpoint_t *result; 
  const tacpoint_t *PointForPathnode; 
  __int64 v59; 
  unsigned int physicsInstanceId; 
  const tacpoint_t *PointForPathnodeVis; 
  bfx::AreaHandle areaA; 
  __int64 v64; 
  pathsort_s nodes; 
  vec3_t outSearchOrigin; 
  bfx::PathSpec pathSpec; 
  tacpoint_t *pPoint[257]; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  v64 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  if ( coverSelectorOverride )
  {
    p_m_endNodeBase = &g_coverSelectorMap.m_endNodeBase;
    mp_parent = g_coverSelectorMap.m_endNodeBase.mp_parent;
    if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
      goto LABEL_60;
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
      goto LABEL_60;
    v17 = (const CoverSelector *)p_m_endNodeBase[1].mp_parent;
  }
  else
  {
    defaultcoverselector = this->m_pAI->nodeSelect.defaultcoverselector;
    v19 = &g_coverSelectorMap.m_endNodeBase;
    v20 = g_coverSelectorMap.m_endNodeBase.mp_parent;
    if ( !g_coverSelectorMap.m_endNodeBase.mp_parent )
      goto LABEL_60;
    do
    {
      if ( v20[1].m_color < defaultcoverselector )
      {
        v20 = v20->mp_right;
      }
      else
      {
        v19 = v20;
        v20 = v20->mp_left;
      }
    }
    while ( v20 );
    if ( v19 == &g_coverSelectorMap.m_endNodeBase || defaultcoverselector < v19[1].m_color )
      goto LABEL_60;
    v17 = (const CoverSelector *)v19[1].mp_parent;
  }
  if ( !v17 || !v17->considerTacPoints || !pMetricParams->pEnemyTacPoint || (enemy = pMetricParams->enemy) != NULL && enemy->bNearestTacPointBad )
  {
LABEL_60:
    result = NULL;
    goto LABEL_61;
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
    _RAX = EntHandle::ent(&this->m_pAI->coverSelectionFocusEnt);
    __asm
    {
      vmovss  xmm2, cs:__real@44800000
      vmovss  xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rbp+860h+outSearchOrigin], xmm0
      vmovss  xmm1, dword ptr [rax+134h]
      vmovss  dword ptr [rbp+860h+outSearchOrigin+4], xmm1
      vmovss  xmm0, dword ptr [rax+138h]
    }
  }
  else if ( searchCenteredOnAI )
  {
    __asm { vmovss  xmm2, cs:__real@44800000 }
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rbp+860h+outSearchOrigin], xmm0
      vmovss  xmm1, dword ptr [rcx+134h]
      vmovss  dword ptr [rbp+860h+outSearchOrigin+4], xmm1
      vmovss  xmm0, dword ptr [rcx+138h]
    }
  }
  else
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_GetSearchRadiusAndOrigin(this, &outSearchOrigin);
    __asm
    {
      vmovaps xmm2, xmm0; maxRadius
      vmovss  xmm0, dword ptr [rbp+860h+outSearchOrigin+8]
    }
  }
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@42700000
    vmovss  dword ptr [rbp+860h+outSearchOrigin+8], xmm1
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm3, xmm3, xmm3; minRadiusZ
    vxorps  xmm1, xmm1, xmm1; minRadius
  }
  PointsInRadiusWithVis_Sorted = TacGraph_FindPointsInRadiusWithVis_Sorted(&outSearchOrigin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, pMetricParams->pEnemyTacPoint, (const tacpoint_t **)pPoint, 256);
  v36 = NULL;
  *outBestScore = 0.0;
  physicsInstanceId = -1;
  if ( volume )
    physicsInstanceId = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, volume);
  bfx::AreaHandle::AreaHandle(&areaA);
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  __asm
  {
    vmovss  [rbp+860h+pathSpec.m_pathSharingPenalty], xmm6
    vmovss  [rbp+860h+pathSpec.m_maxPathSharingPenalty], xmm6
    vmovss  [rbp+860h+pathSpec.m_maxSearchDist], xmm6
  }
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  v37 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  _R12 = v37;
  if ( v37 )
  {
    CurArea = AINavigator2D::GetCurArea(v37);
    bfx::AreaHandle::operator=(&areaA, CurArea);
    __asm
    {
      vmovups ymm0, ymmword ptr [r12+4A4h]
      vmovups ymmword ptr [rbp+860h+pathSpec.m_obstacleMode], ymm0
      vmovups ymm1, ymmword ptr [r12+4C4h]
      vmovups ymmword ptr [rbp+860h+pathSpec.m_maxSearchDist], ymm1
      vmovups xmm0, xmmword ptr [r12+4E4h]
      vmovups xmmword ptr [rbp-10h], xmm0
    }
  }
  v42 = 0;
  v59 = PointsInRadiusWithVis_Sorted;
  if ( PointsInRadiusWithVis_Sorted > 0 )
  {
    v43 = 0i64;
    __asm { vmovss  xmm7, cs:__real@40800000 }
    v45 = PointsInRadiusWithVis_Sorted;
    v46 = (tacpoint_t *)PointForPathnode;
    do
    {
      v47 = pPoint[v43];
      if ( v46 == v47 || PointForPathnodeVis == v47 )
        goto LABEL_58;
      if ( !volume || PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pPoint[v43]->m_Pos, physicsInstanceId, volume) )
      {
        if ( v47->m_Type != 1 )
          goto LABEL_50;
        __asm { vmovaps xmm1, xmm7; maxDist }
        if ( Path_NodesInRadius(&v47->m_Pos, *(float *)&_XMM1, &nodes, 1, -1) <= 0 || ((1 << LOBYTE(nodes.node->constant.type)) & 0x78030000) == 0 )
        {
LABEL_50:
          *(double *)&_XMM0 = AIScriptedInterface::Cover_GetTacMetric(this, v47, pMetricParams, v17);
          __asm { vmovaps xmm6, xmm0 }
          _RAX = outBestScore;
          __asm { vcomiss xmm0, dword ptr [rax] }
          if ( v51 | v52 )
          {
            if ( v36 )
            {
LABEL_56:
              if ( ++v42 >= 16 )
                break;
            }
          }
          else
          {
            if ( _R12 )
            {
              AreaForPoint = TacGraph_GetAreaForPoint(v47);
              if ( !bfx::IsAreaReachableFromArea(&areaA, AreaForPoint, &pathSpec) )
                goto LABEL_56;
              _RAX = outBestScore;
            }
            v36 = v47;
            __asm { vmovss  dword ptr [rax], xmm6 }
            v42 = 0;
          }
        }
      }
      v46 = (tacpoint_t *)PointForPathnode;
      v45 = v59;
LABEL_58:
      ++v43;
    }
    while ( v43 < v45 );
  }
  bfx::AreaHandle::~AreaHandle(&areaA);
  Sys_ProfEndNamedEvent();
  result = v36;
LABEL_61:
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindCoverFromPoint
==============
*/

pathnode_t *__fastcall AIScriptedInterface::Cover_FindCoverFromPoint(AIScriptedInterface *this, const vec3_t *vPoint, double fMinSafeDist, CombatMode combatMode, gentity_s *pIgnoreEnt)
{
  signed __int64 v5; 
  void *v13; 
  __int64 v15; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  scr_string_t defaultcoverselector; 
  ntl::red_black_tree_node_base *mp_parent; 
  const CoverSelector *v21; 
  pathnode_t *pClaimedNode; 
  __int64 v35; 
  pathnode_t *v36; 
  ai_scripted_t *m_pAI; 
  pathnode_t *v38; 
  GCombat *v41; 
  __int64 v42; 
  pathsort_s *p_nodes; 
  pathnode_t *node; 
  _BOOL8 v48; 
  char v50; 
  char v51; 
  bool v52; 
  pathnode_t *result; 
  int maxNodes; 
  int typeFlags; 
  float v77; 
  tacpoint_t *pEnemyTacPoint; 
  vec3_t forward; 
  vec3_t origin; 
  vec3_t vector; 
  pathsort_s nodes; 
  char v90; 

  v13 = alloca(v5);
  __asm
  {
    vmovaps [rsp+1178h+var_68], xmm7
    vmovaps [rsp+1178h+var_98], xmm10
    vmovaps [rsp+1178h+var_B8], xmm12
  }
  v15 = combatMode;
  _R14 = vPoint;
  __asm { vmovaps xmm12, xmm2 }
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
    v21 = NULL;
  }
  else
  {
    v21 = (const CoverSelector *)p_m_endNodeBase[1].mp_parent;
    if ( v21 )
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1654, ASSERT_TYPE_ASSERT, "(pCoverSelector)", (const char *)&queryFormat, "pCoverSelector") )
    __debugbreak();
LABEL_19:
  _RCX = this->m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vmovss  dword ptr [rsp+1178h+origin], xmm0
    vmovss  xmm1, dword ptr [rcx+134h]
    vmovss  dword ptr [rsp+1178h+origin+4], xmm1
    vmovss  xmm0, dword ptr [rcx+138h]
    vmovss  xmm1, cs:__real@42800000; dist
    vmovss  dword ptr [rsp+1178h+origin+8], xmm0
  }
  if ( AICommonInterface::NearClaimNode(this, *(float *)&_XMM1) )
  {
    pClaimedNode = this->m_pAI->sentient->pClaimedNode;
    if ( !pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1665, ASSERT_TYPE_ASSERT, "(claimNode)", (const char *)&queryFormat, "claimNode") )
      __debugbreak();
    pathnode_t::GetAngles(pClaimedNode, &vector);
    AngleVectors(&vector, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm3, cs:__real@c3800000
      vmulss  xmm2, xmm3, dword ptr [rsp+1178h+forward]
      vaddss  xmm2, xmm2, dword ptr [rsp+1178h+origin]
      vmulss  xmm3, xmm3, dword ptr [rsp+1178h+forward+4]
      vmovss  dword ptr [rsp+1178h+origin], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+1178h+origin+4]
      vmovss  dword ptr [rsp+1178h+origin+4], xmm2
    }
  }
  __asm
  {
    vmovss  xmm3, cs:__real@42a00000; maxHeight
    vmovss  xmm2, cs:__real@44000000; maxDist
  }
  v35 = Path_NodesInCylinder(&origin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, &nodes, 256, nodeTypeFlags[v15]);
  v36 = Sentient_NearestNodeOfEnemy(this->m_pAI->sentient);
  m_pAI = this->m_pAI;
  *(_QWORD *)vector.v = v36;
  v38 = NULL;
  pEnemyTacPoint = (tacpoint_t *)Sentient_NearestTacPointOfEnemy(m_pAI->sentient);
  __asm
  {
    vmulss  xmm10, xmm12, xmm12
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v41 = GCombat::ms_gCombatSystem;
  v42 = v35;
  if ( (int)v35 > 0 )
  {
    __asm { vmovaps [rsp+1178h+var_58], xmm6 }
    p_nodes = &nodes;
    __asm
    {
      vmovaps [rsp+1178h+var_78], xmm8
      vmovss  xmm8, cs:__real@42100000
      vmovaps [rsp+1178h+var_88], xmm9
      vmovss  xmm9, cs:__real@41a00000
      vmovaps [rsp+1178h+var_A8], xmm11
      vmovss  xmm11, cs:__real@3f800000
    }
    do
    {
      node = p_nodes->node;
      pathnode_t::GetPos(p_nodes->node, &forward);
      *(double *)&_XMM0 = AIScriptedInterface::Cover_FromPoint_GetNodeMetric(this, node, *(const pathnode_t **)vector.v, pEnemyTacPoint, v21);
      __asm
      {
        vcomiss xmm0, xmm7
        vmovaps xmm6, xmm0
      }
      if ( !(v50 | v51) )
      {
        LOBYTE(v48) = 1;
        if ( this->Cover_IsValidCover(this, node, v48) )
        {
          v52 = this->Is3D(this);
          __asm
          {
            vmovss  xmm0, dword ptr [r14]
            vmovss  xmm2, dword ptr [r14+4]
          }
          if ( v52 )
          {
            __asm
            {
              vsubss  xmm3, xmm0, dword ptr [rsp+1178h+forward]
              vsubss  xmm1, xmm2, dword ptr [rsp+1178h+forward+4]
              vmovss  xmm0, dword ptr [r14+8]
              vsubss  xmm4, xmm0, dword ptr [rsp+1178h+forward+8]
              vmulss  xmm2, xmm1, xmm1
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm5, xmm3, xmm0
            }
          }
          else
          {
            __asm
            {
              vsubss  xmm1, xmm0, dword ptr [rsp+1178h+forward]
              vsubss  xmm0, xmm2, dword ptr [rsp+1178h+forward+4]
              vmulss  xmm2, xmm0, xmm0
              vmulss  xmm1, xmm1, xmm1
              vaddss  xmm5, xmm2, xmm1
            }
          }
          __asm { vcomiss xmm5, xmm10 }
          if ( v52 )
            goto LABEL_43;
          if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1611, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( ((1 << LOBYTE(node->constant.type)) & 0x1020) != 0 || (node->constant.spawnflags & 8) != 0 )
            __asm { vmovaps xmm0, xmm9 }
          else
            __asm { vmovaps xmm0, xmm8 }
          __asm
          {
            vmovss  [rsp+1178h+var_1138], xmm0
            vmovss  [rsp+1178h+typeFlags], xmm11
            vmovss  [rsp+1178h+maxNodes], xmm12
          }
          if ( !GCombat::CanRadiusDamageFromPos(v41, this->m_pAI->ent, &forward, pIgnoreEnt, _R14, *(float *)&maxNodes, *(float *)&typeFlags, NULL, v77, 0, 9441297, 0, NULL) )
          {
LABEL_43:
            __asm { vmovaps xmm7, xmm6 }
            v38 = node;
          }
        }
      }
      ++p_nodes;
      --v42;
    }
    while ( v42 );
    __asm
    {
      vmovaps xmm11, [rsp+1178h+var_A8]
      vmovaps xmm9, [rsp+1178h+var_88]
      vmovaps xmm8, [rsp+1178h+var_78]
      vmovaps xmm6, [rsp+1178h+var_58]
    }
  }
  Profile_EndInternal(NULL);
  result = v38;
  _R11 = &v90;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-80h]
  }
  return result;
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

pathnode_t *__fastcall AIScriptedInterface::Cover_FindNearByCoverNode(AIScriptedInterface *this, const vec3_t *origin, double searchRadius, CombatMode combatMode)
{
  signed __int64 v4; 
  void *v7; 
  __int64 v9; 
  ai_scripted_t *m_pAI; 
  bool v12; 
  bool v13; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  scr_string_t defaultcoverselector; 
  ntl::red_black_tree_node_base *mp_parent; 
  const CoverSelector *v18; 
  bool v22; 
  bool v23; 
  bool v25; 
  int v42; 
  __int64 v44; 
  pathnode_t *result; 
  pathnode_t *v46; 
  _BOOL8 v47; 
  __int64 v48; 
  const pathnode_t *node; 
  sentient_s *sentient; 
  int v52; 
  PathBlockPlanes *p_blockPlanes; 
  char v59; 
  vec3_t pos; 
  PathBlockPlanes blockPlanes; 
  CoverNodeMetricParams metricParams; 
  pathsort_s nodes; 

  v7 = alloca(v4);
  __asm
  {
    vmovaps [rsp+1148h+var_58], xmm7
    vmovaps [rsp+1148h+var_48], xmm6
  }
  v9 = combatMode;
  __asm { vmovaps xmm6, xmm2 }
  Profile_Begin(485);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2705, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v12 = m_pAI->sentient == NULL;
  if ( !m_pAI->sentient )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2706, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2707, ASSERT_TYPE_ASSERT, "(searchRadius > 0.f)", (const char *)&queryFormat, "searchRadius > 0.f") )
    __debugbreak();
  if ( (unsigned int)v9 > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2708, ASSERT_TYPE_ASSERT, "(combatMode >= 0 && combatMode < NUM_COMBAT_MODES)", (const char *)&queryFormat, "combatMode >= 0 && combatMode < NUM_COMBAT_MODES") )
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
    v18 = NULL;
  }
  else
  {
    v18 = (const CoverSelector *)p_m_endNodeBase[1].mp_parent;
    if ( v18 )
      goto LABEL_25;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2712, ASSERT_TYPE_ASSERT, "(pCoverSelector)", (const char *)&queryFormat, "pCoverSelector") )
    __debugbreak();
LABEL_25:
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+264h]
    vminss  xmm6, xmm0, xmm6
  }
  v22 = _RAX == NULL;
  if ( !_RAX )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2667, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  _RAX = this->m_pAI;
  __asm { vcomiss xmm6, dword ptr [rax+264h] }
  if ( !v22 )
  {
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2668, ASSERT_TYPE_ASSERT, "(searchRadius <= m_pAI->codeGoal.radius)", (const char *)&queryFormat, "searchRadius <= m_pAI->codeGoal.radius");
    v22 = !v25;
    if ( v25 )
      __debugbreak();
  }
  _RDX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+258h]
    vsubss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdx+25Ch]
    vsubss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rdx+260h]
    vsubss  xmm4, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm5, xmm2, xmm2
    vaddss  xmm1, xmm5, xmm6
    vcomiss xmm1, dword ptr [rdx+264h]
  }
  if ( !v22 )
  {
    __asm { vcomiss xmm5, xmm7 }
    if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2679, ASSERT_TYPE_ASSERT, "(distToCenter > 0.f)", (const char *)&queryFormat, "distToCenter > 0.f") )
      __debugbreak();
    _RDX = this->m_pAI;
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+268h]; maxHeight
    vmovaps xmm2, xmm6; maxDist
  }
  v42 = Path_NodesInCylinder(&_RDX->ent->r.currentOrigin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, &nodes, 256, nodeTypeFlags[v9]);
  __asm { vmovaps xmm6, [rsp+1148h+var_48] }
  v44 = v42;
  if ( v42 > 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2718, ASSERT_TYPE_ASSERT, "(iNodeCount <= 256)", (const char *)&queryFormat, "iNodeCount <= AI_GOAL_NODES_SIZE") )
    __debugbreak();
  if ( (_DWORD)v44 )
  {
    v46 = NULL;
    AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
    AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
    v48 = v44;
    if ( (int)v44 > 0 )
    {
      _R14 = &nodes;
      do
      {
        node = _R14->node;
        sentient = this->m_pAI->sentient;
        if ( _R14->node != sentient->pClaimedNode && node != sentient->pPrevClaimedNode )
        {
          LOBYTE(v47) = 1;
          if ( this->Cover_IsValidCover(this, node, v47) )
          {
            if ( !blockPlanes.iPlaneCount )
              goto LABEL_54;
            if ( this->Is3D(this) )
              goto LABEL_54;
            v52 = 0;
            if ( blockPlanes.iPlaneCount <= 0 )
              goto LABEL_54;
            _RSI = blockPlanes.fDist;
            p_blockPlanes = &blockPlanes;
            while ( 1 )
            {
              pathnode_t::GetPos(_R14->node, &pos);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+1148h+pos+4]
                vmovss  xmm1, dword ptr [rsp+1148h+pos]
                vmulss  xmm3, xmm0, dword ptr [rbx+4]
                vmulss  xmm2, xmm1, dword ptr [rbx]
                vaddss  xmm0, xmm3, xmm2
                vcomiss xmm0, dword ptr [rsi]
              }
              if ( !(v59 | v12) )
                break;
              ++v52;
              p_blockPlanes = (PathBlockPlanes *)((char *)p_blockPlanes + 8);
              ++_RSI;
              if ( v52 >= blockPlanes.iPlaneCount )
                goto LABEL_54;
            }
            if ( v52 >= blockPlanes.iPlaneCount )
            {
LABEL_54:
              *(double *)&_XMM0 = AIScriptedInterface::Cover_GetNodeMetric(this, _R14->node, &metricParams, v18);
              __asm
              {
                vcomiss xmm7, xmm0
                vmovss  dword ptr [r14+8], xmm0
              }
              if ( v59 )
              {
                v46 = _R14->node;
                __asm { vmovaps xmm7, xmm0 }
              }
            }
          }
        }
        ++_R14;
        --v48;
      }
      while ( v48 );
    }
    Profile_EndInternal(NULL);
    result = v46;
  }
  else
  {
    Profile_EndInternal(NULL);
    result = NULL;
  }
  __asm { vmovaps xmm7, [rsp+1148h+var_58] }
  return result;
}

/*
==============
AIScriptedInterface::Cover_FindShuffleCoverNode
==============
*/
pathnode_t *AIScriptedInterface::Cover_FindShuffleCoverNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v5; 
  pathnode_t *pClaimedNode; 
  __int16 wLinkCount; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  _OWORD *v11; 
  pathlink_s *Links; 
  pathnode_t *v13; 
  _BOOL8 v14; 
  bool v15; 
  int v16; 
  PathBlockPlanes *p_blockPlanes; 
  const pathnodeRange_t *Range; 
  const gentity_s *TargetEntity; 
  int v26; 
  __int64 v45; 
  __int64 i; 
  __int64 v47; 
  int v48; 
  pathnode_t *v51; 
  pathnode_t *result; 
  pathnode_t *v68; 
  CoverNodeMetricParams metricParams; 
  vec2_t dirToNode; 
  vec3_t vPoint; 
  vec3_t pos; 
  vec3_t outLastKnownPos; 
  PathBlockPlanes blockPlanes; 
  int v75[8]; 
  char v76; 
  _QWORD node[128]; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2521, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2522, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2523, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm { vmovaps [rsp+650h+var_30], xmm6 }
  m_pAI->nodeSelect.requestDifferentCover = 0;
  v5 = this->m_pAI;
  __asm { vmovaps [rsp+650h+var_40], xmm7 }
  pClaimedNode = v5->sentient->pClaimedNode;
  v68 = pClaimedNode;
  if ( !pClaimedNode )
    goto LABEL_52;
  pathnode_t::GetPos(pClaimedNode, &pos);
  wLinkCount = pClaimedNode->dynamic.wLinkCount;
  if ( wLinkCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2534, ASSERT_TYPE_ASSERT, "(nodeCount <= 64)", (const char *)&queryFormat, "nodeCount <= AI_NEAREST_NODES_SIZE") )
    __debugbreak();
  AIScriptedInterface::GetSuppressionPlanes(this, &blockPlanes);
  AIScriptedInterface::GetCoverNodeMetricParams(this, &metricParams);
  v8 = 0i64;
  dirToNode = (vec2_t)wLinkCount;
  v9 = 0;
  if ( wLinkCount > 0 )
  {
    v10 = 0i64;
    v11 = node;
    do
    {
      Links = pClaimedNode->constant.Links;
      if ( Links[v10].flags )
      {
        v13 = Path_ConvertIndexToNode(Links[v10].nodeNum);
        if ( ((1 << LOBYTE(v13->constant.type)) & 0x4000DC) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2554, ASSERT_TYPE_ASSERT, "(Path_IsWallCoverNode( node ) || Path_IsCornerNode( node ))", (const char *)&queryFormat, "Path_IsWallCoverNode( node ) || Path_IsCornerNode( node )") )
          __debugbreak();
        pathnode_t::GetPos(v13, &vPoint);
        if ( AICommonInterface::PointAtGoal(this, &vPoint, &this->m_pAI->codeGoal) )
        {
          LOBYTE(v14) = 1;
          if ( this->Cover_IsValidCover(this, v13, v14) && (!metricParams.enemyNode || Path_NodesVisible(v13, metricParams.enemyNode)) && !Path_ActorIsDangerousNode(v13, this->m_pAI->sentient->eTeam) )
          {
            v15 = blockPlanes.iPlaneCount == 0;
            if ( !blockPlanes.iPlaneCount )
              goto LABEL_32;
            v16 = 0;
            if ( blockPlanes.iPlaneCount <= 0 )
              goto LABEL_32;
            __asm
            {
              vmovss  xmm2, dword ptr [rbp+550h+vPoint+4]
              vmovss  xmm3, dword ptr [rbp+550h+vPoint]
            }
            _RDX = blockPlanes.fDist;
            p_blockPlanes = &blockPlanes;
            while ( 1 )
            {
              __asm
              {
                vmulss  xmm1, xmm2, dword ptr [rax+4]
                vmulss  xmm0, xmm3, dword ptr [rax]
                vaddss  xmm1, xmm1, xmm0
                vcomiss xmm1, dword ptr [rdx]
              }
              if ( !v15 )
                break;
              ++v16;
              p_blockPlanes = (PathBlockPlanes *)((char *)p_blockPlanes + 8);
              ++_RDX;
              v15 = (unsigned int)v16 <= blockPlanes.iPlaneCount;
              if ( v16 >= blockPlanes.iPlaneCount )
                goto LABEL_32;
            }
            if ( v16 >= blockPlanes.iPlaneCount )
            {
LABEL_32:
              if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 505, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
                __debugbreak();
              Range = AIScriptedInterface::Cover_GetRange(v13);
              TargetEntity = AICommonInterface::GetTargetEntity(this);
              if ( TargetEntity )
              {
                Sentient_GetLastKnownEnemyPosWithDuration(this->m_pAI->sentient, TargetEntity, 500, &outLastKnownPos);
                v26 = AIScriptedInterface::Cover_NodeRangeValid(this, &outLastKnownPos, v13, Range);
                pClaimedNode = v68;
                if ( v26 )
                {
                  ++v9;
                  *(_QWORD *)v11++ = v13;
                }
              }
              else
              {
                pClaimedNode = v68;
              }
            }
          }
        }
      }
      ++v10;
      --*(_QWORD *)&dirToNode;
    }
    while ( dirToNode );
  }
  _ECX = 0;
  if ( v9 > 0 && (unsigned int)v9 >= 0x10 )
  {
    __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
    _RDX = &v76;
    _ER8 = 8;
    do
    {
      _EAX = _ER8 - 4;
      __asm
      {
        vmovd   xmm0, ecx
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [rdx-20h], xmm1
        vmovd   xmm0, eax
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [rdx-10h], xmm1
        vmovd   xmm0, r8d
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [rdx], xmm1
      }
      _EAX = _ER8 + 4;
      _ECX += 16;
      __asm
      {
        vmovd   xmm0, eax
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      _ER8 += 16;
      __asm { vmovdqu xmmword ptr [rdx+10h], xmm1 }
      _RDX += 64;
    }
    while ( _ECX < (int)(v9 - (v9 & 0x8000000F)) );
  }
  v45 = _ECX;
  if ( _ECX < (__int64)v9 )
  {
    do
      v75[v45++] = _ECX++;
    while ( v45 < v9 );
  }
  if ( v9 > 0 )
  {
    for ( i = 0i64; i < v9; v75[i++] = v48 )
    {
      v47 = G_rand() % v9;
      v48 = v75[v47];
      v75[v47] = v75[i];
    }
    __asm
    {
      vmovss  xmm7, cs:__real@80000000
      vmovss  xmm6, cs:__real@3f800000
    }
    while ( 1 )
    {
      v51 = (pathnode_t *)node[2 * v75[v8]];
      pathnode_t::GetPos(v51, &vPoint);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+550h+vPoint]
        vsubss  xmm4, xmm0, dword ptr [rbp+550h+pos]
        vmovss  xmm1, dword ptr [rbp+550h+vPoint+4]
        vsubss  xmm5, xmm1, dword ptr [rbp+550h+pos+4]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm2, xmm5, xmm5
        vaddss  xmm1, xmm2, xmm0
        vsqrtss xmm3, xmm1, xmm1; distToNode
        vcmpless xmm0, xmm3, xmm7
        vblendvps xmm0, xmm3, xmm6, xmm0
        vdivss  xmm1, xmm6, xmm0
        vmulss  xmm0, xmm1, xmm4
        vmulss  xmm1, xmm1, xmm5
        vmovss  dword ptr [rbp+550h+dirToNode+4], xmm1
        vmovss  dword ptr [rbp+550h+dirToNode], xmm0
      }
      if ( AIScriptedInterface::Cover_IsPathToShuffleNodeClear(this, v51, &dirToNode, *(float *)&_XMM3) )
        break;
      if ( ++v8 >= v9 )
        goto LABEL_52;
    }
    result = v51;
  }
  else
  {
LABEL_52:
    result = NULL;
  }
  __asm
  {
    vmovaps xmm7, [rsp+650h+var_40]
    vmovaps xmm6, [rsp+650h+var_30]
  }
  return result;
}

/*
==============
AIScriptedInterface::Cover_FromPoint_GetNodeMetric
==============
*/
float AIScriptedInterface::Cover_FromPoint_GetNodeMetric(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, const tacpoint_t *pEnemyTacPoint, const CoverSelector *pCoverSelector)
{
  int isDefined; 
  ai_scripted_t *m_pAI; 
  int v33; 
  bool v34; 
  const pathnodeRange_t *Range; 
  float fmt; 
  float v66; 
  bool useDistanceSquared; 
  float v69; 
  vec3_t outPos; 
  vec3_t pos; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _RBX = pCoverSelector;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1255, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1256, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1257, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm9, xmm9, xmm9
  }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm { vcomiss xmm6, dword ptr [rbx+0Ch] }
  if ( v34 )
  {
    isDefined = EntHandle::isDefined(&this->m_pAI->coverSelectionFocusEnt);
    m_pAI = this->m_pAI;
    if ( isDefined )
      _RAX = EntHandle::ent(&m_pAI->coverSelectionFocusEnt);
    else
      _RAX = m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vmovss  xmm1, dword ptr [rax+134h]
      vmovss  xmm3, dword ptr [rbx+14h]
      vmovss  dword ptr [rsp+118h+var_D0], xmm0
      vmovss  xmm0, dword ptr [rax+138h]
      vmovss  [rsp+118h+var_C8], xmm0
      vmovss  dword ptr [rsp+118h+var_D0+4], xmm1
      vmovsd  xmm0, [rsp+118h+var_D0]
      vmovss  xmm1, dword ptr [rbx+18h]
    }
    outPos.v[2] = v69;
    useDistanceSquared = pCoverSelector->useDistanceSquared;
    __asm
    {
      vmovsd  qword ptr [rsp+118h+outPos], xmm0
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rsp+118h+var_F0], xmm0
      vmovss  dword ptr [rsp+118h+fmt], xmm1
    }
    *(float *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnDistance(this, &pos, &outPos, *(float *)&_XMM3, fmt, v66, useDistanceSquared);
    __asm { vmulss  xmm10, xmm0, dword ptr [rbx+0Ch] }
  }
  __asm { vmovss  xmm7, dword ptr [rbx+30h] }
  _ER15 = 0;
  __asm
  {
    vcomiss xmm7, xmm6
    vcomiss xmm6, dword ptr [rbx+34h]
  }
  v33 = 1 << LOBYTE(node->constant.type);
  v34 = 0;
  if ( (v33 & 0x806400FC) != 0 )
  {
    __asm { vmovss  xmm7, dword ptr [rbx+3Ch] }
  }
  else
  {
    v34 = 0;
    if ( (v33 & 0x1C00) != 0 )
    {
      __asm { vmovss  xmm7, dword ptr [rbx+40h] }
    }
    else
    {
      v34 = 0;
      if ( (v33 & 0x2000200) != 0 )
      {
        __asm { vmovss  xmm7, dword ptr [rbx+44h] }
      }
      else
      {
        v34 = ((1 << LOBYTE(node->constant.type)) & 0x100) != 0;
        if ( (v33 & 0x100) != 0 )
          __asm { vmovss  xmm7, dword ptr [rbx+48h] }
        else
          __asm { vxorps  xmm7, xmm7, xmm7 }
      }
    }
  }
  __asm { vcomiss xmm6, dword ptr [rbx+4Ch] }
  if ( v34 )
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
    if ( enemyNode )
    {
      pathnode_t::GetPos((pathnode_t *)enemyNode, &outPos);
    }
    else
    {
      if ( !pEnemyTacPoint )
      {
LABEL_32:
        __asm { vmulss  xmm9, xmm1, dword ptr [rbx+4Ch] }
        goto LABEL_33;
      }
      TacGraph_GetApproxGroundPosForPoint(pEnemyTacPoint, &outPos);
    }
    Range = AIScriptedInterface::Cover_GetRange(node);
    if ( Path_NodeIgnoresAngles(node) )
    {
      __asm { vmovss  xmm1, cs:__real@3f800000 }
    }
    else
    {
      __asm { vmovd   xmm1, r15d }
      _EAX = AIScriptedInterface::Cover_IsWithinNodeAngle(&outPos, node, Range);
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vblendvps xmm1, xmm1, xmm6, xmm2
      }
    }
    goto LABEL_32;
  }
LABEL_33:
  __asm { vmovd   xmm1, r15d }
  _EAX = node->constant.spawnflags & 0x40;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, dword ptr [rbx+58h]
    vblendvps xmm3, xmm1, xmm6, xmm2
    vaddss  xmm0, xmm8, xmm10
    vaddss  xmm2, xmm0, xmm7
    vaddss  xmm1, xmm2, xmm9
    vaddss  xmm0, xmm3, xmm1
  }
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return *(float *)&_XMM0;
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
  bool v33; 
  bool v34; 
  bool v35; 
  bool v36; 
  int v49; 
  bool v50; 
  bool v64; 
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  float fmt; 
  __int64 v125; 
  float v126; 
  __int64 v127; 
  bool useDistanceSquared; 
  vec3_t v139; 
  vec3_t pos; 
  char v141; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RBX = pCoverSelector;
  _R14 = metricParams;
  _R15 = (pathnode_t *)node;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1017, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1018, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1019, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "getnodemetric");
  pathnode_t::GetPos(_R15, &pos);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+0Ch]
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm10, xmm10, xmm10
    vmovss  [rsp+168h+var_128], xmm7
    vmovss  [rsp+168h+var_124], xmm8
    vmovss  [rsp+168h+var_120], xmm10
    vmovss  [rsp+168h+var_11C], xmm8
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm15, xmm15, xmm15
    vxorps  xmm14, xmm14, xmm14
    vxorps  xmm13, xmm13, xmm13
  }
  if ( v33 )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [r14+3Ch]
      vmovss  xmm1, dword ptr [rbx+18h]
      vmovss  xmm3, dword ptr [rbx+14h]
    }
    v139.v[2] = _R14->referenceOrigin.v[2];
    useDistanceSquared = _RBX->useDistanceSquared;
    __asm
    {
      vmovsd  [rsp+168h+var_108], xmm0
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rsp+168h+var_140], xmm0
      vmovss  dword ptr [rsp+168h+fmt], xmm1
    }
    *(float *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnDistance(this, &pos, &v139, *(float *)&_XMM3, fmt, v126, useDistanceSquared);
    __asm
    {
      vmulss  xmm0, xmm0, dword ptr [rbx+0Ch]
      vmovss  [rsp+168h+var_128], xmm0
    }
  }
  _RSI = Path_GetNodeTeam(this->m_pAI->sentient->eTeam);
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 565, ASSERT_TYPE_ASSERT, "( BG_ActorOrAgentSystemEnabled() )", "Access to pathnode_dynamic_t::actors") )
    __debugbreak();
  v33 = (unsigned int)_RSI < 3;
  v34 = (_DWORD)_RSI == 3;
  v35 = (unsigned int)_RSI <= 3;
  if ( (unsigned int)_RSI >= 3 )
  {
    LODWORD(v127) = 3;
    LODWORD(v125) = _RSI;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v125, v127);
    v33 = 0;
    v34 = !v36;
    v35 = !v36;
    if ( v36 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovd   xmm1, dword ptr [r15+rsi*4+7Ch]
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovd   xmm2, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
    vpcmpgtd xmm0, xmm1, xmm2
    vmovss  xmm1, dword ptr [rbx+20h]
    vcomiss xmm1, xmm6
    vblendvps xmm0, xmm6, xmm3, xmm0
    vmovss  [rsp+168h+var_114], xmm0
  }
  if ( !v35 )
  {
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+34h]
      vcomiss xmm0, dword ptr [rax+510h]
      vcomiss xmm0, dword ptr [rax+518h]
    }
    if ( v33 )
      __asm { vmovaps xmm12, xmm1 }
  }
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v33 )
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnTargetDir(this, &pos, _R14);
    __asm { vmulss  xmm15, xmm0, dword ptr [rbx+28h] }
  }
  __asm { vucomiss xmm6, dword ptr [rbx+2Ch] }
  if ( !v34 )
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnMoveTowardsTargetWeight(this, &pos, _R14);
    __asm
    {
      vmulss  xmm0, xmm0, dword ptr [rbx+2Ch]
      vmovss  [rsp+168h+var_124], xmm0
    }
  }
  __asm { vmovss  xmm7, dword ptr [rbx+30h] }
  _ESI = 0;
  __asm
  {
    vcomiss xmm7, xmm6
    vcomiss xmm6, dword ptr [rbx+34h]
  }
  v49 = 1 << LOBYTE(_R15->constant.type);
  v50 = 0;
  if ( (v49 & 0x806400FC) != 0 )
  {
    __asm { vmovss  xmm9, dword ptr [rbx+3Ch] }
  }
  else
  {
    v50 = 0;
    if ( (v49 & 0x1C00) != 0 )
    {
      __asm { vmovss  xmm9, dword ptr [rbx+40h] }
    }
    else
    {
      v50 = 0;
      if ( (v49 & 0x2000200) != 0 )
      {
        __asm { vmovss  xmm9, dword ptr [rbx+44h] }
      }
      else
      {
        v50 = ((1 << LOBYTE(_R15->constant.type)) & 0x100) != 0;
        if ( (v49 & 0x100) != 0 )
          __asm { vmovss  xmm9, dword ptr [rbx+48h] }
        else
          __asm { vxorps  xmm9, xmm9, xmm9 }
      }
    }
  }
  __asm { vcomiss xmm6, dword ptr [rbx+4Ch] }
  if ( v50 )
  {
    v50 = 0;
    if ( _R14->lastKnownValid )
    {
      *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnNodeAngle(this, _R15, &_R14->lastKnownEnemyOrigin);
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rbx+4Ch]
        vmovss  [rsp+168h+var_120], xmm0
      }
    }
  }
  __asm { vcomiss xmm6, dword ptr [rbx+50h] }
  if ( v50 )
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnSecondaryTargets(this, _R15);
    __asm
    {
      vmulss  xmm0, xmm0, dword ptr [rbx+50h]
      vmovss  [rsp+168h+var_11C], xmm0
    }
  }
  __asm { vmovss  xmm11, dword ptr [rbx+60h] }
  _EAX = _R15->constant.spawnflags & 0x40;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, esi
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, dword ptr [rbx+58h]
    vblendvps xmm0, xmm1, xmm6, xmm2
    vmovss  [rsp+168h+var_118], xmm0
  }
  v64 = _R14->enemyNode == NULL;
  if ( !_R14->enemyNode )
  {
    __asm { vmovss  xmm2, dword ptr [rbx+64h] }
    _ECX = _R15->constant.spawnflags & 0x2000;
    v64 = _ECX == 0;
    __asm
    {
      vmovd   xmm0, ecx
      vmovd   xmm1, esi
      vpcmpeqd xmm3, xmm0, xmm1
      vblendvps xmm11, xmm11, xmm2, xmm3
    }
  }
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+168h+pos+8]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm4, cs:__real@42a00000
  }
  _RAX = m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+138h]
    vsubss  xmm1, xmm0, xmm2
    vandps  xmm1, xmm1, xmm3
    vcomiss xmm1, xmm4
  }
  if ( v64 )
    __asm { vmovss  xmm10, dword ptr [rbx+68h] }
  if ( _R14->lastKnownValid )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14+1Ch]
      vsubss  xmm1, xmm0, xmm2
      vandps  xmm1, xmm1, xmm3
      vcomiss xmm1, xmm4
    }
    if ( !_R14->lastKnownValid )
      __asm { vmovss  xmm13, dword ptr [rbx+6Ch] }
  }
  sentient = m_pAI->sentient;
  __asm { vmovss  xmm7, dword ptr [rbx+70h] }
  pClaimedNode = sentient->pClaimedNode;
  if ( _R15 == pClaimedNode )
  {
    if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 838, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    __asm { vmovss  xmm2, cs:__real@3f800000 }
    if ( pClaimedNode && level.time - this->m_pAI->sentient->timeOfNodeClaim <= 4000 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3983126f
        vsubss  xmm1, xmm2, xmm1
        vmulss  xmm0, xmm1, cs:__real@40000000
        vaddss  xmm2, xmm0, xmm2
      }
    }
    m_pAI = this->m_pAI;
    __asm { vmulss  xmm8, xmm2, xmm7 }
  }
  else
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  if ( (_R15->constant.spawnflags & 0x10000) != 0 )
    __asm { vmovss  xmm7, dword ptr [rbx+5Ch] }
  else
    __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( (m_pAI->postGoldPadding & 1) != 0 )
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnNearAllies(this, &pos);
    __asm { vmovaps xmm6, xmm0 }
  }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovss  xmm1, [rsp+168h+var_114]
    vaddss  xmm2, xmm1, [rsp+168h+var_128]
    vaddss  xmm3, xmm2, xmm12
    vaddss  xmm4, xmm3, xmm15
    vaddss  xmm1, xmm4, [rsp+168h+var_124]
    vaddss  xmm2, xmm1, xmm14
    vaddss  xmm3, xmm2, xmm9
    vaddss  xmm4, xmm3, [rsp+168h+var_120]
    vaddss  xmm1, xmm4, [rsp+168h+var_11C]
    vaddss  xmm2, xmm1, [rsp+168h+var_118]
    vaddss  xmm3, xmm2, xmm11
    vaddss  xmm0, xmm3, xmm10
    vaddss  xmm1, xmm0, xmm13
    vaddss  xmm2, xmm1, xmm8
    vaddss  xmm3, xmm2, xmm7
    vaddss  xmm0, xmm3, xmm6
  }
  _R11 = &v141;
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
  return *(float *)&_XMM0;
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
    __asm
    {
      vmovss  xmm0, cs:__real@47800000
      vmovss  cs:nodeRangeTurret.minSqDist, xmm0
    }
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
  aiGoalSources codeGoalSrc; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2073, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RCX = this->m_pAI;
  _EAX = 0;
  __asm
  {
    vmovss  xmm2, cs:__real@44333333
    vmovd   xmm1, eax
  }
  _EAX = _RCX->threat.allEnemiesInSimilarDir;
  __asm
  {
    vmovss  xmm8, dword ptr [rcx+264h]
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@44800000
    vblendvps xmm7, xmm1, xmm2, xmm3
    vcomiss xmm8, xmm7
  }
  outSearchOrigin->v[0] = _RCX->codeGoal.pos.v[0];
  outSearchOrigin->v[1] = _RCX->codeGoal.pos.v[1];
  outSearchOrigin->v[2] = _RCX->codeGoal.pos.v[2];
  _RAX = this->m_pAI;
  codeGoalSrc = _RAX->codeGoalSrc;
  if ( codeGoalSrc == AI_GOAL_SRC_SCRIPT_ENTITY_GOAL || codeGoalSrc == AI_GOAL_SRC_BT_ENTITY_GOAL )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+264h]
      vsubss  xmm1, xmm0, cs:__real@43000000
      vmaxss  xmm0, xmm1, cs:__real@42800000
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rax+264h] }
  }
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
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
  char v20; 
  bool v21; 
  const tacpoint_t *pEnemyTacPoint; 
  float fmt; 
  float v92; 
  bool useDistanceSquared; 
  vec3_t v94; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  v21 = this->m_pAI == NULL;
  _RBX = pCoverSelector;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RBP = metricParams;
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  _RSI = pPoint;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
  }
  if ( v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1159, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1160, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1161, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "getnodemetric_tac");
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm7, dword ptr [rbx+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+118h+arg_0], xmm0
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm14, xmm14, xmm14
    vxorps  xmm15, xmm15, xmm15
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm9, xmm9, xmm9
  }
  if ( v20 )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+3Ch]
      vmovss  xmm1, dword ptr [rbx+18h]
      vmovss  xmm3, dword ptr [rbx+14h]
    }
    v94.v[2] = _RBP->referenceOrigin.v[2];
    useDistanceSquared = _RBX->useDistanceSquared;
    __asm
    {
      vmovsd  [rsp+118h+var_D8], xmm0
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rsp+118h+var_F0], xmm0
      vmovss  dword ptr [rsp+118h+fmt], xmm1
    }
    *(float *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnDistance(this, &_RSI->m_Pos, &v94, *(float *)&_XMM3, fmt, v92, useDistanceSquared);
    __asm
    {
      vmulss  xmm0, xmm0, dword ptr [rbx+0Ch]
      vmovss  [rsp+118h+arg_0], xmm0
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+20h]
    vcomiss xmm1, xmm7
  }
  if ( !(v20 | v21) )
  {
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+34h]
      vcomiss xmm0, dword ptr [rax+510h]
    }
    if ( !(v20 | v21) )
    {
      __asm { vcomiss xmm0, dword ptr [rax+518h] }
      if ( v20 )
        __asm { vmovaps xmm10, xmm1 }
    }
  }
  __asm { vcomiss xmm7, dword ptr [rbx+28h] }
  if ( v20 )
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnTargetDir(this, &_RSI->m_Pos, _RBP);
    __asm { vmulss  xmm14, xmm0, dword ptr [rbx+28h] }
  }
  __asm { vucomiss xmm7, dword ptr [rbx+2Ch] }
  if ( !v21 )
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnMoveTowardsTargetWeight(this, &_RSI->m_Pos, _RBP);
    __asm { vmulss  xmm15, xmm0, dword ptr [rbx+2Ch] }
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+30h]
    vcomiss xmm6, xmm7
  }
  if ( !(v20 | v21) )
    goto LABEL_22;
  __asm { vcomiss xmm7, dword ptr [rbx+34h] }
  if ( v20 )
  {
LABEL_22:
    pEnemyTacPoint = _RBP->pEnemyTacPoint;
    __asm { vmovss  xmm8, dword ptr [rbx+34h] }
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 773, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
      __debugbreak();
    LOBYTE(_EAX) = 1;
    if ( pEnemyTacPoint )
      LOBYTE(_EAX) = TacVisGraph_HasVis(_RSI, pEnemyTacPoint);
    v20 = 0;
    v21 = 1;
    _ECX = 0;
    _EAX = (unsigned __int8)_EAX;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm12, xmm6, xmm8, xmm2
    }
  }
  __asm
  {
    vcomiss xmm7, dword ptr [rbx+50h]
    vmovss  xmm11, dword ptr [rbx+44h]
  }
  if ( v20 )
  {
    *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnSecondaryTargets_Tac(this, _RSI);
    __asm { vmulss  xmm13, xmm0, dword ptr [rbx+50h] }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+8]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm4, cs:__real@42a00000
  }
  _RCX = this->m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+138h]
    vsubss  xmm1, xmm0, xmm2
    vandps  xmm1, xmm1, xmm3
    vcomiss xmm1, xmm4
  }
  if ( v20 | v21 )
    __asm { vmovss  xmm8, dword ptr [rbx+68h] }
  else
    __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( _RBP->lastKnownValid )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1Ch]
      vsubss  xmm1, xmm0, xmm2
      vandps  xmm1, xmm1, xmm3
      vcomiss xmm1, xmm4
    }
    if ( !_RBP->lastKnownValid )
      __asm { vmovss  xmm9, dword ptr [rbx+6Ch] }
  }
  __asm { vmovss  xmm6, dword ptr [rbx+70h] }
  _RAX = AIScriptedInterface::GetCoverTacPoint(this);
  __asm
  {
    vmovq   xmm1, rax
    vmovq   xmm0, rsi
    vpcmpeqq xmm2, xmm0, xmm1
    vblendvps xmm7, xmm7, xmm6, xmm2
    vmovss  xmm2, cs:cCrowdednessWeight; weight
  }
  *(double *)&_XMM0 = AIScriptedInterface::Cover_ScoreOnCrowdedness_Tac(this, _RSI, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  Sys_ProfEndNamedEvent();
  __asm { vaddss  xmm1, xmm11, [rsp+118h+arg_0] }
  _R11 = &v98;
  __asm
  {
    vmovaps xmm11, xmmword ptr [r11-68h]
    vaddss  xmm2, xmm1, xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
    vaddss  xmm3, xmm2, xmm14
    vmovaps xmm14, [rsp+118h+var_B8]
    vaddss  xmm4, xmm3, xmm15
    vmovaps xmm15, [rsp+118h+var_C8]
    vaddss  xmm1, xmm4, xmm12
    vmovaps xmm12, xmmword ptr [r11-78h]
    vaddss  xmm2, xmm1, xmm13
    vmovaps xmm13, [rsp+118h+var_A8]
    vaddss  xmm3, xmm2, xmm8
    vmovaps xmm8, xmmword ptr [r11-38h]
    vaddss  xmm4, xmm3, xmm9
    vmovaps xmm9, xmmword ptr [r11-48h]
    vaddss  xmm1, xmm4, xmm7
    vmovaps xmm7, xmmword ptr [r11-28h]
    vaddss  xmm0, xmm1, xmm6
    vmovaps xmm6, xmmword ptr [r11-18h]
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_GetValidNodeMetrics
==============
*/
__int64 AIScriptedInterface::Cover_GetValidNodeMetrics(AIScriptedInterface *this, pathsort_s *nodes, int iNodeCount, gentity_s *volume, const PathBlockPlanes *blockPlanes, const CoverSelector *pCoverSelector, CoverNodeMetricParams *pMetricParams)
{
  __int64 v11; 
  unsigned __int16 v12; 
  char v15; 
  pathnode_t *node; 
  _BOOL8 v17; 
  ai_scripted_t *v18; 
  const char *v19; 
  sentient_s *sentient; 
  pathnode_t *pNearestNode; 
  unsigned __int16 v22; 
  unsigned __int64 iPlaneCount; 
  unsigned __int64 v24; 
  int v25; 
  bool v26; 
  ai_scripted_t *m_pAI; 
  const char *v36; 
  unsigned __int16 v37; 
  vec3_t pos; 

  _RDI = nodes;
  v11 = iNodeCount;
  if ( !blockPlanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1851, ASSERT_TYPE_ASSERT, "(blockPlanes)", (const char *)&queryFormat, "blockPlanes") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1852, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "GetValidNodeMetrics");
  v37 = 0;
  v12 = 0;
  if ( (int)v11 > 0 )
  {
    _R12 = &_RDI[v11];
    while ( 1 )
    {
      _R14 = 2i64 * v12;
      v15 = 1;
      node = _RDI[v12].node;
      pathnode_t::GetPos(node, &pos);
      if ( !pMetricParams->enemy && pMetricParams->lastKnownValid )
        break;
      LOBYTE(v17) = 1;
      if ( this->Cover_IsValidCover(this, node, v17) )
        goto LABEL_31;
LABEL_36:
      v15 = 0;
LABEL_37:
      if ( !blockPlanes->iPlaneCount || this->Is3D(this) )
        goto LABEL_48;
      iPlaneCount = blockPlanes->iPlaneCount;
      v24 = 0i64;
      v25 = 0;
      v26 = (_DWORD)iPlaneCount == 0;
      if ( (int)iPlaneCount > 0 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rsp+0A8h+pos+4]
          vmovss  xmm3, dword ptr [rsp+0A8h+pos]
        }
        _RCX = blockPlanes->fDist;
        do
        {
          __asm
          {
            vmulss  xmm1, xmm3, dword ptr [rbp+rax*8+0]
            vmulss  xmm0, xmm2, dword ptr [rbp+rax*8+4]
            vaddss  xmm1, xmm1, xmm0
            vcomiss xmm1, dword ptr [rcx]
          }
          if ( !v26 )
            break;
          ++v25;
          ++v24;
          ++_RCX;
          v26 = v24 <= iPlaneCount;
        }
        while ( (__int64)v24 < (__int64)iPlaneCount );
      }
      if ( v25 >= (int)iPlaneCount )
      {
LABEL_48:
        if ( v15 )
        {
          *(double *)&_XMM0 = AIScriptedInterface::Cover_GetNodeMetric(this, node, pMetricParams, pCoverSelector);
          _RAX = nodes;
          __asm
          {
            vcvtss2sd xmm1, xmm0, xmm0
            vmovq   rdx, xmm1
            vmovss  dword ptr [rax+r14*8+8], xmm0
          }
          m_pAI = this->m_pAI;
          v36 = j_va("%3.1f", _RDX);
          DebugDrawNodePicking(v36, m_pAI, node, &colorWhite);
          _RDI = nodes;
          v12 = ++v37;
          goto LABEL_46;
        }
      }
      else
      {
        DebugDrawNodePicking("sup", this->m_pAI, node, &colorRed);
      }
      _RDI = nodes;
      LODWORD(v11) = v11 - 1;
      __asm { vmovups xmm0, xmmword ptr [r12-10h] }
      v12 = v37;
      --_R12;
      __asm { vmovups xmmword ptr [rdi+r14*8], xmm0 }
LABEL_46:
      if ( v12 >= (int)v11 )
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
      if ( Path_NodeIgnoresAngles(node) )
        goto LABEL_28;
      __asm { vxorps  xmm2, xmm2, xmm2; dotLimit }
      if ( Path_IsNodeFacingToward(node, &pMetricParams->lastKnownEnemyOrigin, *(float *)&_XMM2) )
      {
LABEL_28:
        v22 = Path_ConvertNodeToIndex(node);
        if ( Path_IsNodeDisconnected(v22) )
        {
          v19 = "dis";
        }
        else
        {
LABEL_31:
          if ( !volume || isNodeInRegion(node, volume) )
            goto LABEL_37;
          v19 = "vol";
        }
      }
      else
      {
        v19 = "dir";
      }
      v18 = this->m_pAI;
    }
    else
    {
      v18 = this->m_pAI;
      v19 = "clm";
    }
    DebugDrawNodePicking(v19, v18, node, &colorRed);
    goto LABEL_36;
  }
LABEL_47:
  Sys_ProfEndNamedEvent();
  return (unsigned int)v11;
}

/*
==============
AIScriptedInterface::Cover_IsNodeMinDistFromAllTargets
==============
*/
bool AIScriptedInterface::Cover_IsNodeMinDistFromAllTargets(AIScriptedInterface *this, const pathnode_t *node)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v8; 
  int v9; 
  __int64 v10; 
  unsigned __int16 number; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  __int64 v17; 
  bool result; 
  __int64 v45; 
  __int64 v46; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 245, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 246, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  if ( m_pAI->sentient->pClaimedNode != node )
    goto LABEL_10;
  __asm { vmovss  xmm1, cs:__real@42800000; dist }
  if ( AICommonInterface::NearClaimNode(this, *(float *)&_XMM1) )
    __asm { vmovss  xmm6, cs:__real@46800000 }
  else
LABEL_10:
    __asm { vmovss  xmm6, cs:__real@47800000 }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v8 = this->m_pAI;
  v9 = 0;
  if ( v8->threat.numSecondaryTarget <= 0 )
  {
LABEL_44:
    _RAX = AICommonInterface::GetTargetEntity(this);
    if ( _RAX )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+130h]
        vsubss  xmm3, xmm0, dword ptr [rsp+0A8h+pos]
        vmovss  xmm1, dword ptr [rax+134h]
        vmovss  xmm0, dword ptr [rax+138h]
        vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+pos+4]
        vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+pos+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, xmm6
      }
      result = _RAX != NULL;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    v10 = 0i64;
    while ( 1 )
    {
      number = v8->threat.secondaryTargets[v10].entity.number;
      if ( number )
      {
        v12 = number;
        v13 = number - 1;
        if ( v13 >= 0x800 )
        {
          LODWORD(v46) = 2048;
          LODWORD(v45) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v45, v46) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v14 = v12 - 1;
        if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v14] )
        {
          LODWORD(v46) = v8->threat.secondaryTargets[v10].entity.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v46) )
            __debugbreak();
        }
        v15 = v8->threat.secondaryTargets[v10].entity.number;
        if ( v15 )
        {
          if ( (unsigned int)v15 - 1 >= 0x7FF )
          {
            LODWORD(v46) = 2047;
            LODWORD(v45) = v15 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v45, v46) )
              __debugbreak();
          }
          v16 = v8->threat.secondaryTargets[v10].entity.number;
          if ( (unsigned int)(v16 - 1) >= 0x800 )
          {
            LODWORD(v46) = 2048;
            LODWORD(v45) = v16 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v45, v46) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v17 = v16 - 1;
          if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v17] )
          {
            LODWORD(v46) = v8->threat.secondaryTargets[v10].entity.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v46) )
              __debugbreak();
          }
          _RCX = 1456i64 * v8->threat.secondaryTargets[v10].entity.number;
          _RAX = g_entities;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rax-480h]
            vsubss  xmm3, xmm0, dword ptr [rsp+0A8h+pos]
            vmovss  xmm1, dword ptr [rcx+rax-47Ch]
            vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+pos+4]
            vmovss  xmm0, dword ptr [rcx+rax-478h]
            vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+pos+8]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, xmm6
          }
          if ( !is_mul_ok(0x5B0ui64, v8->threat.secondaryTargets[v10].entity.number) )
            break;
        }
      }
      v8 = this->m_pAI;
      ++v9;
      ++v10;
      if ( v9 >= v8->threat.numSecondaryTarget )
        goto LABEL_44;
    }
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
  return result;
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

bool __fastcall AIScriptedInterface::Cover_IsPathToShuffleNodeClear(AIScriptedInterface *this, pathnode_t *node, const vec2_t *dirToNode, double distToNode)
{
  ai_scripted_t *m_pAI; 
  sentient_s *sentient; 
  int NodeTeam; 
  pathnode_t *pClaimedNode; 
  __int64 wLinkCount; 
  __int64 v16; 
  __int64 v20; 
  __int64 v21; 
  pathnode_t *v22; 
  const char *GameType; 
  unsigned int v24; 
  unsigned int v25; 
  const char *v26; 
  int v27; 
  int v28; 
  const char *v29; 
  int v30; 
  char v31; 
  char v48; 
  bool result; 
  __int64 v54; 
  __int64 v55; 
  vec3_t v56; 
  vec3_t pos; 

  __asm
  {
    vmovaps [rsp+0D8h+var_38], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2461, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2462, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentient->pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2463, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->pClaimedNode)", (const char *)&queryFormat, "m_pAI->sentient->pClaimedNode") )
    __debugbreak();
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2464, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm { vmovaps [rsp+0D8h+var_48], xmm7 }
  sentient = m_pAI->sentient;
  __asm
  {
    vmovaps [rsp+0D8h+var_58], xmm8
    vmovaps [rsp+0D8h+var_68], xmm9
  }
  NodeTeam = Path_GetNodeTeam(sentient->eTeam);
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  wLinkCount = pClaimedNode->dynamic.wLinkCount;
  pathnode_t::GetPos(pClaimedNode, &pos);
  v16 = wLinkCount;
  if ( wLinkCount <= 0 )
  {
LABEL_49:
    result = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm8, cs:__real@80000000
      vmovss  xmm7, cs:__real@3f800000
      vmovss  xmm9, cs:__real@3f3504f3
    }
    v20 = 0i64;
    v21 = 0i64;
    while ( 1 )
    {
      v22 = Path_ConvertIndexToNode(pClaimedNode->constant.Links[v21].nodeNum);
      if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
        v24 = 0;
      else
        v24 = NodeTeam;
      if ( !v22 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v26 = SV_GameMP_GetGameType();
        v27 = *(unsigned __int8 *)v26 - (unsigned __int8)aBr_2[0];
        if ( !v27 )
        {
          v27 = *((unsigned __int8 *)v26 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v27 )
            v27 = *((unsigned __int8 *)v26 + 2) - (unsigned __int8)aBr_2[2];
        }
        v25 = (v27 != 0) + 1;
      }
      else
      {
        v25 = 1;
      }
      if ( v24 >= v25 )
      {
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          v29 = SV_GameMP_GetGameType();
          v30 = *(unsigned __int8 *)v29 - (unsigned __int8)aBr_2[0];
          if ( !v30 )
          {
            v30 = *((unsigned __int8 *)v29 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v30 )
              v30 = *((unsigned __int8 *)v29 + 2) - (unsigned __int8)aBr_2[2];
          }
          v28 = (v30 != 0) + 1;
        }
        else
        {
          v28 = 1;
        }
        LODWORD(v55) = v28;
        LODWORD(v54) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v54, v55) )
          __debugbreak();
      }
      if ( node != v22 )
      {
        if ( SentientHandle::isDefined(&v22->dynamic.pOwners[v24]) )
        {
          pathnode_t::GetPos(v22, &v56);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0D8h+var_90]
            vsubss  xmm4, xmm0, dword ptr [rsp+0D8h+pos]
            vmovss  xmm1, dword ptr [rsp+0D8h+var_90+4]
            vsubss  xmm3, xmm1, dword ptr [rsp+0D8h+pos+4]
            vmulss  xmm2, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm2, xmm0
            vsqrtss xmm5, xmm1, xmm1
            vcmpless xmm0, xmm5, xmm8
            vblendvps xmm0, xmm5, xmm7, xmm0
            vdivss  xmm1, xmm7, xmm0
            vmulss  xmm0, xmm1, xmm3
            vmulss  xmm3, xmm0, dword ptr [rax+4]
            vmulss  xmm1, xmm1, xmm4
            vmulss  xmm2, xmm1, dword ptr [rax]
            vaddss  xmm0, xmm3, xmm2
            vcomiss xmm0, xmm9
          }
          if ( !(v31 | v48) )
          {
            __asm { vcomiss xmm5, xmm6 }
            if ( v31 )
              break;
          }
        }
      }
      ++v20;
      ++v21;
      if ( v20 >= v16 )
        goto LABEL_49;
    }
    result = 0;
  }
  __asm
  {
    vmovaps xmm9, [rsp+0D8h+var_68]
    vmovaps xmm8, [rsp+0D8h+var_58]
    vmovaps xmm7, [rsp+0D8h+var_48]
    vmovaps xmm6, [rsp+0D8h+var_38]
  }
  return result;
}

/*
==============
AIScriptedInterface::Cover_IsRoughlyValidCover
==============
*/

char __fastcall AIScriptedInterface::Cover_IsRoughlyValidCover(AIScriptedInterface *this, const pathnode_t *node, double _XMM2_8)
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
    if ( !TargetSentient )
      return 1;
    if ( Path_NodeIgnoresAngles(node) )
      return 1;
    __asm { vxorps  xmm2, xmm2, xmm2; dotLimit }
    if ( Path_IsNodeFacingToward(node, &TargetSentient->ent->r.currentOrigin, *(float *)&_XMM2) )
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
  vec3_t outLastKnownPos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 505, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 506, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  Range = AIScriptedInterface::Cover_GetRange(node);
  _RAX = AICommonInterface::GetTargetEntity(this);
  if ( _RAX )
  {
    if ( bUseLastKnownPos )
    {
      Sentient_GetLastKnownEnemyPosWithDuration(this->m_pAI->sentient, _RAX, 500, &outLastKnownPos);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+130h]
        vmovss  dword ptr [rsp+68h+outLastKnownPos], xmm0
        vmovss  xmm1, dword ptr [rax+134h]
        vmovss  dword ptr [rsp+68h+outLastKnownPos+4], xmm1
        vmovss  xmm0, dword ptr [rax+138h]
        vmovss  dword ptr [rsp+68h+outLastKnownPos+8], xmm0
      }
    }
    LOBYTE(_RAX) = AIScriptedInterface::Cover_NodeRangeValid(this, &outLastKnownPos, node, Range) != 0;
  }
  return (char)_RAX;
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
  unsigned __int16 v9; 
  sentient_s *TargetSentient; 
  const char *v11; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v13; 
  int v14; 
  int v15; 
  const tacpoint_t *Point; 
  const gentity_s *TargetEntity; 
  const tacpoint_t *LastKnownEnemyTacPoint; 
  int v19; 
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
  v9 = Path_ConvertNodeToIndex(node);
  if ( Path_IsNodeDisconnected(v9) )
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
    v11 = "dist";
LABEL_45:
    DebugDrawNodePicking(v11, this->m_pAI, node, &colorRed);
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
  v13 = this->m_pAI;
  v14 = 0;
  v15 = 0;
  if ( v13->threat.numSecondaryTarget > 0 )
  {
    do
    {
      Point = tacpoint_ref_t::GetPoint(&v13->threat.secondaryTargets[v15].tacpoint);
      if ( Point )
      {
        if ( Path_NodeSafeFrom(node, Point) )
          goto LABEL_37;
      }
      v13 = this->m_pAI;
    }
    while ( ++v15 < v13->threat.numSecondaryTarget );
  }
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity || (LastKnownEnemyTacPoint = AICommonInterface::GetLastKnownEnemyTacPoint(this, TargetEntity)) == NULL || !Path_NodeSafeFrom(node, LastKnownEnemyTacPoint) )
LABEL_36:
    v14 = 1;
LABEL_37:
  v19 = Path_NodeIgnoresAngles(node);
  if ( !v14 || v19 )
    return 1;
  p_backupCoverFromPos = &outLastKnownPos;
LABEL_43:
  __asm { vxorps  xmm2, xmm2, xmm2; dotLimit }
  if ( !Path_IsNodeFacingToward(node, p_backupCoverFromPos, *(float *)&_XMM2) )
  {
    v11 = "dir";
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
  if ( Path_NodeIgnoresAngles(node) )
    return 1;
  __asm { vxorps  xmm2, xmm2, xmm2; dotLimit }
  if ( Path_IsNodeFacingToward(node, fromPoint, *(float *)&_XMM2) )
    return 1;
  DebugDrawNodePicking("dir", this->m_pAI, node, &colorRed);
  return 0;
}

/*
==============
AIScriptedInterface::Cover_IsValidCoverNode
==============
*/

bool __fastcall AIScriptedInterface::Cover_IsValidCoverNode(const pathnode_t *node, const vec3_t *attackPosition, double _XMM2_8)
{
  bool result; 
  const pathnodeRange_t *Range; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1536, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Path_NodeIgnoresAngles(node) )
    goto LABEL_6;
  __asm { vxorps  xmm2, xmm2, xmm2; dotLimit }
  result = Path_IsNodeFacingToward(node, attackPosition, *(float *)&_XMM2);
  if ( result )
  {
LABEL_6:
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
  char v38; 
  bool v43; 
  bool result; 
  double v51; 
  double v52; 
  double v53; 
  vec3_t posa; 
  vec3_t vec; 
  tmat33_t<vec3_t> out; 
  vec3_t vector; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBX = range;
  _RSI = pos;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 333, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 334, ASSERT_TYPE_ASSERT, "(range)", (const char *)&queryFormat, "range") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &posa);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsi+4]
  }
  if ( ((1 << LOBYTE(node->constant.type)) & 0x62700000) != 0 )
  {
    __asm
    {
      vsubss  xmm6, xmm0, dword ptr [rsp+110h+pos]
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm8, xmm0, dword ptr [rsp+110h+pos+8]
      vsubss  xmm7, xmm2, dword ptr [rsp+110h+pos+4]
    }
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    AnglesToAxis(&vector, &axis);
    MatrixInverse(&axis, &out);
    __asm
    {
      vmulss  xmm3, xmm6, dword ptr [rbp+57h+out]
      vmulss  xmm2, xmm7, dword ptr [rbp+57h+out+0Ch]
      vmulss  xmm1, xmm8, dword ptr [rbp+57h+out+18h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm6, dword ptr [rbp+57h+out+4]
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm8, dword ptr [rbp+57h+out+1Ch]
      vmovss  dword ptr [rbp+57h+vec], xmm2
      vmulss  xmm2, xmm7, dword ptr [rbp+57h+out+10h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm6, dword ptr [rbp+57h+out+8]
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm8, dword ptr [rbp+57h+out+20h]
      vmovss  dword ptr [rbp+57h+vec+4], xmm2
      vmulss  xmm2, xmm7, dword ptr [rbp+57h+out+14h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rbp+57h+vec+8], xmm2
    }
    vectoangles(&vec, &angles);
    __asm { vmovss  xmm0, dword ptr [rbp+57h+angles+4] }
  }
  else
  {
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rsp+110h+pos]; X
      vsubss  xmm0, xmm2, dword ptr [rsp+110h+pos+4]; Y
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmulss  xmm6, xmm0, cs:__real@42652ee0 }
    pathnode_t::GetAngle((pathnode_t *)node);
    __asm { vsubss  xmm0, xmm6, xmm0; angle }
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  xmm7, cs:__real@43b40000
    vmovaps xmm6, xmm0
    vmovss  xmm0, dword ptr [rbx]
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
  }
  if ( !v38 )
    __asm { vcomiss xmm0, xmm7 }
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+110h+var_E8], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 370, ASSERT_TYPE_ASSERT, "( ( range->fAngleMin >= 0 && range->fAngleMin < 360 ) )", "( range->fAngleMin ) = %g", v51) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, xmm8
    vcomiss xmm0, xmm7
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+110h+var_E8], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 371, ASSERT_TYPE_ASSERT, "( ( range->fAngleMax >= 0 && range->fAngleMax < 360 ) )", "( range->fAngleMax ) = %g", v52) )
    __debugbreak();
  __asm
  {
    vcomiss xmm6, xmm8
    vcomiss xmm6, xmm7
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  [rsp+110h+var_E8], xmm0
  }
  v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 372, ASSERT_TYPE_ASSERT, "( ( fAngle >= 0 && fAngle < 360 ) )", "( fAngle ) = %g", v53);
  if ( v43 )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm1, xmm0
  }
  if ( v43 )
  {
    __asm { vcomiss xmm6, xmm1 }
  }
  else
  {
    __asm
    {
      vcomiss xmm6, xmm1
      vcomiss xmm6, xmm0
    }
  }
  result = 1;
  _R11 = &v60;
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
AIScriptedInterface::Cover_MinHeightAtCover
==============
*/
float AIScriptedInterface::Cover_MinHeightAtCover(pathnode_t *node)
{
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1611, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( ((1 << LOBYTE(node->constant.type)) & 0x1020) != 0 || (node->constant.spawnflags & 8) != 0 )
    __asm { vmovss  xmm0, cs:__real@41a00000 }
  else
    __asm { vmovss  xmm0, cs:__real@42100000 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_NodeRangeValid
==============
*/
_BOOL8 AIScriptedInterface::Cover_NodeRangeValid(AIScriptedInterface *this, const vec3_t *pos, const pathnode_t *node, const pathnodeRange_t *range)
{
  ai_scripted_t *m_pAI; 
  bool v11; 
  bool v12; 
  int v13; 
  _BOOL8 result; 
  vec3_t posa; 

  _RSI = range;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 396, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 397, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 398, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 399, ASSERT_TYPE_ASSERT, "(range)", (const char *)&queryFormat, "range") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm { vmovaps [rsp+98h+var_48], xmm6 }
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
    __asm { vmovss  xmm6, dword ptr [rsi+0Ch] }
  else
LABEL_29:
    __asm { vmovss  xmm6, dword ptr [rsi+8] }
  pathnode_t::GetPos((pathnode_t *)node, &posa);
  v11 = AICommonInterface::Use3DPathing(this);
  v12 = 0;
  if ( v11 && ((v13 = 1 << LOBYTE(node->constant.type), v12 = 0, (v13 & 0x1E300000) != 0) || (v12 = (v13 & 0x400000) != 0)) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+pos]
      vsubss  xmm3, xmm0, dword ptr [rbp+0]
      vmovss  xmm1, dword ptr [rsp+98h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+4]
      vmovss  xmm0, dword ptr [rsp+98h+pos+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm6
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+pos]
      vmovss  xmm1, dword ptr [rsp+98h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+4]
      vsubss  xmm4, xmm0, dword ptr [rbp+0]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, xmm6
    }
  }
  if ( v12 )
  {
    result = 0i64;
  }
  else if ( Path_NodeIgnoresAngles(node) )
  {
    result = 1i64;
  }
  else
  {
    result = AIScriptedInterface::Cover_IsWithinNodeAngle(pos, node, _RSI);
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
  return result;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnAmbushVisibility
==============
*/
float AIScriptedInterface::Cover_ScoreOnAmbushVisibility(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode)
{
  if ( enemyNode && Path_NodesVisible(node, enemyNode) )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  else
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnCoverType
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnCoverType(AIScriptedInterface *this, const pathnode_t *node, double coverWeight, double concealWeight, float exposedWeight, float ambushWeight)
{
  int v6; 

  v6 = 1 << LOBYTE(node->constant.type);
  if ( (v6 & 0x806400FC) != 0 )
  {
    __asm { vmovaps xmm0, xmm2 }
  }
  else if ( (v6 & 0x1C00) != 0 )
  {
    __asm { vmovaps xmm0, xmm3 }
  }
  else if ( (v6 & 0x2000200) != 0 )
  {
    __asm { vmovss  xmm0, [rsp+exposedWeight] }
  }
  else
  {
    _EAX = (1 << LOBYTE(node->constant.type)) & 0x100;
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, [rsp+ambushWeight]
      vxorps  xmm2, xmm2, xmm2
      vblendvps xmm0, xmm1, xmm2, xmm3
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnCrowdedness_Tac
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnCrowdedness_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, double weight)
{
  int v8; 
  unsigned __int64 eTeam; 
  sentient_s *v13; 
  ai_common_t *ai; 
  ai_common_t *v17; 
  char v18; 
  bool v19; 
  AIWrapper v40; 
  int v41; 
  bitarray<224> iTeamFlags; 
  vec3_t outPos; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm8 }
  v8 = 0;
  __asm { vmovaps xmm8, xmm2 }
  eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
  memset(&iTeamFlags, 0, sizeof(iTeamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  __asm
  {
    vmovaps xmmword ptr [rsp+130h+var_28+8], xmm6
    vmovaps [rsp+130h+var_38+8], xmm7
  }
  iTeamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  TacGraph_GetApproxGroundPosForPoint(pPoint, &outPos);
  v13 = Sentient_FirstSentient(&iTeamFlags);
  if ( v13 )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@45100000
      vmovss  xmm6, cs:__real@46100000
    }
    do
    {
      if ( v13 != this->m_pAI->sentient )
      {
        ai = v13->ai;
        if ( (!ai || ai->pNavigator) && v13->ent->health > 0 )
        {
          AIWrapper::AIWrapper(&v40, v13->ent);
          if ( v40.m_pAI && AIScriptedInterface::GetCoverTacPoint(v40.m_pAI) == pPoint )
            goto LABEL_22;
          v17 = v13->ai;
          v18 = 0;
          if ( v17 && (v19 = v17->pNavigator->HasPath(v17->pNavigator), v18 = 0, v19) )
          {
            v13->ai->pNavigator->GetGoalPos(v13->ai->pNavigator, (vec3_t *)&v41);
            __asm
            {
              vmovss  xmm1, [rbp+30h+var_88]
              vmovss  xmm0, [rbp+30h+var_8C]
              vmovss  xmm2, [rbp+30h+var_90]
            }
          }
          else
          {
            _RAX = v13->ent;
            __asm
            {
              vmovss  xmm2, dword ptr [rax+130h]
              vmovss  [rbp+30h+var_90], xmm2
              vmovss  xmm0, dword ptr [rax+134h]
              vmovss  [rbp+30h+var_8C], xmm0
              vmovss  xmm1, dword ptr [rax+138h]
              vmovss  [rbp+30h+var_88], xmm1
            }
          }
          __asm
          {
            vsubss  xmm0, xmm0, dword ptr [rbp+30h+outPos+4]
            vsubss  xmm2, xmm2, dword ptr [rbp+30h+outPos]
            vsubss  xmm3, xmm1, dword ptr [rbp+30h+outPos+8]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm4, xmm2, xmm1
            vcomiss xmm4, xmm7
          }
          if ( v18 )
          {
LABEL_22:
            __asm { vxorps  xmm0, xmm8, cs:__xmm@80000000800000008000000080000000 }
            goto LABEL_24;
          }
          __asm { vcomiss xmm4, xmm6 }
          if ( v18 )
            ++v8;
        }
      }
      v13 = Sentient_NextSentient(v13, &iTeamFlags);
    }
    while ( v13 );
    if ( !v8 )
      goto LABEL_23;
    __asm
    {
      vmulss  xmm1, xmm8, cs:__real@beaaaaab
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm0, xmm1, xmm0
    }
  }
  else
  {
LABEL_23:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
LABEL_24:
  __asm
  {
    vmovaps xmm7, [rsp+130h+var_38+8]
    vmovaps xmm6, xmmword ptr [rsp+130h+var_28+8]
  }
  _R11 = &v48;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnDangerousNode
==============
*/
float AIScriptedInterface::Cover_ScoreOnDangerousNode(AIScriptedInterface *this, const pathnode_t *node)
{
  int v11; 
  int v12; 

  _RDI = node;
  _RBX = Path_GetNodeTeam(this->m_pAI->sentient->eTeam);
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 565, ASSERT_TYPE_ASSERT, "( BG_ActorOrAgentSystemEnabled() )", "Access to pathnode_dynamic_t::actors") )
    __debugbreak();
  if ( (unsigned int)_RBX >= 3 )
  {
    v12 = 3;
    v11 = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  __asm
  {
    vmovd   xmm0, dword ptr [rdi+rbx*4+7Ch]
    vmovd   xmm1, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
    vmovss  xmm2, cs:__real@3f800000
    vpcmpgtd xmm3, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vblendvps xmm0, xmm1, xmm2, xmm3
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnDistance
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnDistance(AIScriptedInterface *this, const vec3_t *nodeOrigin, vec3_t *referenceOrigin, double distanceMin, float distanceOptimal, float distanceMax, bool useDistSqr)
{
  char v29; 
  char v30; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [r8+4]
    vsubss  xmm2, xmm1, dword ptr [rdx+4]
    vmovaps xmm5, xmm3
    vsubss  xmm3, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm4, xmm0, dword ptr [rdx+8]
    vmovaps [rsp+68h+var_18], xmm6
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmovaps [rsp+68h+var_28], xmm7
    vaddss  xmm4, xmm3, xmm0
    vmovaps [rsp+68h+var_38], xmm8
  }
  if ( useDistSqr )
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+arg_20]
      vmovss  xmm1, [rsp+68h+arg_28]
      vmulss  xmm6, xmm0, xmm0
      vmulss  xmm7, xmm1, xmm1
      vmulss  xmm5, xmm5, xmm5
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, [rsp+68h+arg_28]
      vmovss  xmm6, [rsp+68h+arg_20]
      vsqrtss xmm4, xmm4, xmm4
    }
  }
  __asm
  {
    vmovaps xmm2, xmm7; max
    vmovaps xmm1, xmm5; min
    vmovaps xmm0, xmm4; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm8, xmm0
    vcomiss xmm8, xmm6
    vxorps  xmm0, xmm0, xmm0
  }
  if ( v29 | v30 )
  {
    __asm { vucomiss xmm6, xmm0 }
    if ( v30 )
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    else
    {
      __asm { vcomiss xmm6, xmm0 }
      if ( v29 | v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 552, ASSERT_TYPE_ASSERT, "(distanceOptimal > 0.f)", (const char *)&queryFormat, "distanceOptimal > 0.f") )
        __debugbreak();
      __asm { vdivss  xmm0, xmm8, xmm6 }
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm7, xmm7, xmm6
      vcomiss xmm7, xmm0
    }
    if ( v29 | v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 556, ASSERT_TYPE_ASSERT, "(distanceMax-distanceOptimal > 0.f)", (const char *)&queryFormat, "distanceMax-distanceOptimal > 0.f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm0, xmm8, xmm6
      vdivss  xmm2, xmm0, xmm7
      vsubss  xmm0, xmm1, xmm2
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnEngagement
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnEngagement(AIScriptedInterface *this, double distToEnemy)
{
  char v2; 
  char v3; 

  _RAX = this->m_pAI;
  __asm { vcomiss xmm1, dword ptr [rax+510h] }
  if ( v2 | v3 )
    goto LABEL_4;
  __asm { vcomiss xmm1, dword ptr [rax+518h] }
  if ( !v2 )
LABEL_4:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  else
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnHeight
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnHeight(AIScriptedInterface *this, const vec3_t *nodeOrigin, const vec3_t *currentOrigin, double weight)
{
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm2, xmm0, dword ptr [rdx+8]
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm1, cs:__real@42a00000
    vcmpltss xmm4, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vblendvps xmm0, xmm3, xmm0, xmm4
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnInOutDoor
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnInOutDoor(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, double indoorWeight, float outdoorWeight)
{
  if ( enemyNode )
  {
    __asm { vmovaps xmm0, xmm3 }
  }
  else
  {
    __asm { vmovss  xmm2, [rsp+outdoorWeight] }
    _EAX = node->constant.spawnflags & 0x2000;
    __asm { vmovd   xmm0, eax }
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
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

float __fastcall AIScriptedInterface::Cover_ScoreOnLMGMountable(AIScriptedInterface *this, const pathnode_t *node, double weight, double _XMM3_8)
{
  _ECX = 0;
  _EAX = node->constant.spawnflags & 0x10000;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm4, xmm0, xmm1
    vxorps  xmm3, xmm3, xmm3
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
  bool v16; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovaps [rsp+68h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [r8+3Ch]
    vmovss  xmm0, dword ptr [rdx+8]
    vmovaps [rsp+68h+var_28], xmm7
    vsubss  xmm7, xmm1, dword ptr [r8+40h]
    vmovaps [rsp+68h+var_38], xmm8
    vmulss  xmm1, xmm7, xmm7
    vmovaps [rsp+68h+var_48], xmm9
    vsubss  xmm9, xmm0, dword ptr [r8+44h]
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm8, xmm1, xmm0
  }
  v16 = this->Is3D(this);
  if ( v16 )
  {
    __asm
    {
      vmulss  xmm0, xmm9, xmm9
      vaddss  xmm1, xmm0, xmm8
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm5, xmm1, xmm0
      vmulss  xmm0, xmm7, xmm5
      vmulss  xmm3, xmm0, dword ptr [rbx+2Ch]
      vmulss  xmm1, xmm6, xmm5
      vmulss  xmm2, xmm1, dword ptr [rbx+28h]
      vmulss  xmm0, xmm9, xmm5
      vmulss  xmm1, xmm0, dword ptr [rbx+30h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm2, xmm8, xmm8
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm7, xmm1
      vmulss  xmm3, xmm0, dword ptr [rbx+2Ch]
      vmulss  xmm1, xmm6, xmm1
      vmulss  xmm2, xmm1, dword ptr [rbx+28h]
      vaddss  xmm2, xmm3, xmm2
    }
  }
  __asm
  {
    vcomiss xmm2, cs:__real@3e4ccccd
    vandps  xmm0, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm0, cs:__real@3e4ccccd
    vmulss  xmm3, xmm0, cs:__real@3fa00000
  }
  if ( v16 )
  {
    __asm { vmovaps xmm0, xmm3 }
  }
  else
  {
    __asm
    {
      vcomiss xmm2, cs:__real@be4ccccd
      vxorps  xmm0, xmm0, xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnNearAllies
==============
*/
float AIScriptedInterface::Cover_ScoreOnNearAllies(AIScriptedInterface *this, const vec3_t *nodeOrigin)
{
  int v7; 
  int v14; 
  __int64 v16; 
  team_t eTeam; 
  bool v20; 
  bool v21; 
  sentient_s *sentient; 
  int v36; 
  AIIterator *v37; 
  const gentity_s *v38; 
  ai_agent_t *ScriptedAgentInfo; 
  __int64 (__fastcall ***v40)(_QWORD); 
  actor_s *actor; 
  ai_scripted_t *m_pAI; 
  sentient_s *v43; 
  bool v44; 
  sentient_s *v45; 
  char v46; 
  bool v47; 
  __int64 v78; 
  __int64 v79; 
  int v80; 
  AIActorInterface v81; 
  AIAgentInterface v82; 
  __int64 (__fastcall ***v83)(_QWORD); 
  int v84; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  v7 = 0;
  _RBX = DVARFLT_ai_retreatProximity;
  _R15 = nodeOrigin;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  v80 = 0;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_retreatProximity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@43800000
  }
  v14 = 0;
  __asm { vmulss  xmm8, xmm0, xmm0 }
  if ( level.maxclients > 0 )
  {
    v16 = 0i64;
    _RBX = 0i64;
    do
    {
      if ( (unsigned int)v14 >= 0x800 )
      {
        LODWORD(v79) = 2048;
        LODWORD(v78) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v78, v79) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[_RBX].r.isInUse != g_entityIsInUse[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v16] )
      {
        _RDX = g_entities;
        eTeam = this->m_pAI->sentient->eTeam;
        v20 = 0;
        v21 = eTeam == TEAM_ZERO;
        if ( eTeam == TEAM_ZERO || (sentient = g_entities[_RBX].sentient, v20 = (unsigned int)eTeam < sentient->eTeam, v21 = (unsigned int)eTeam <= sentient->eTeam, eTeam != sentient->eTeam) )
        {
          __asm
          {
            vmovss  xmm4, dword ptr [r15+8]
            vsubss  xmm0, xmm4, dword ptr [rbx+rdx+138h]
            vandps  xmm0, xmm0, xmm6
            vcomiss xmm0, xmm7
          }
          if ( v21 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+rdx+130h]
              vsubss  xmm3, xmm0, dword ptr [r15]
              vmovss  xmm1, dword ptr [rbx+rdx+134h]
              vsubss  xmm2, xmm1, dword ptr [r15+4]
              vmovss  xmm0, dword ptr [rbx+rdx+138h]
              vmulss  xmm2, xmm2, xmm2
              vsubss  xmm4, xmm0, xmm4
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vcomiss xmm2, xmm8
            }
            if ( v20 )
              ++v7;
          }
        }
      }
      ++v14;
      ++v16;
      ++_RBX;
    }
    while ( v14 < level.maxclients );
    v80 = v7;
  }
  v36 = 0;
  v37 = this->GetAIIterator(this);
  v38 = (const gentity_s *)v37->GetFirst(v37);
  if ( v38 )
  {
    while ( 1 )
    {
      AIActorInterface::AIActorInterface(&v81);
      AIAgentInterface::AIAgentInterface(&v82);
      v82.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v83 = NULL;
      if ( v38->agent )
      {
        if ( SV_Agent_IsScripted(v38->s.number) )
          break;
      }
      actor = v38->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v81, v38->actor);
        v40 = (__int64 (__fastcall ***)(_QWORD))&v81;
        goto LABEL_38;
      }
LABEL_39:
      m_pAI = this->m_pAI;
      if ( (ai_scripted_t *)(**v83)(v83) != m_pAI )
      {
        v43 = v38->sentient;
        if ( m_pAI->sentient->eTeam == v43->eTeam )
        {
          v44 = v43->ai->pNavigator->HasPath(v43->ai->pNavigator);
          v45 = v38->sentient;
          v46 = 0;
          v47 = !v44;
          if ( v44 )
          {
            v45->ai->pNavigator->GetGoalPos(v45->ai->pNavigator, (vec3_t *)&v84);
            __asm
            {
              vmovss  xmm1, [rsp+118h+var_70]
              vmovss  xmm3, [rsp+118h+var_74]
              vmovss  xmm2, [rsp+118h+var_78]
            }
          }
          else
          {
            _RAX = v45->ent;
            __asm
            {
              vmovss  xmm2, dword ptr [rax+130h]
              vmovss  [rsp+118h+var_78], xmm2
              vmovss  xmm3, dword ptr [rax+134h]
              vmovss  [rsp+118h+var_74], xmm3
              vmovss  xmm1, dword ptr [rax+138h]
              vmovss  [rsp+118h+var_70], xmm1
            }
          }
          __asm
          {
            vmovss  xmm4, dword ptr [r15+8]
            vsubss  xmm0, xmm4, xmm1
            vandps  xmm0, xmm0, xmm6
            vcomiss xmm0, xmm7
          }
          if ( v46 | v47 )
          {
            __asm
            {
              vsubss  xmm0, xmm3, dword ptr [r15+4]
              vsubss  xmm2, xmm2, dword ptr [r15]
              vsubss  xmm3, xmm1, xmm4
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vcomiss xmm2, xmm8
            }
            if ( v46 )
              ++v36;
          }
        }
      }
      v38 = v37->GetNext(v37);
      if ( !v38 )
      {
        v7 = v80;
        goto LABEL_49;
      }
    }
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v38);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
      __debugbreak();
    AINewAgentInterface::SetAgent((AINewAgentInterface *)&v82, ScriptedAgentInfo);
    v40 = (__int64 (__fastcall ***)(_QWORD))&v82;
LABEL_38:
    v83 = v40;
    goto LABEL_39;
  }
LABEL_49:
  _RBX = DVARFLT_ai_retreatCoverBaseVal;
  __asm
  {
    vmovaps xmm8, [rsp+118h+var_58]
    vmovaps xmm7, [rsp+118h+var_48]
  }
  if ( !DVARFLT_ai_retreatCoverBaseVal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_retreatCoverBaseVal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_ai_retreatCoverMaxVal;
  if ( !DVARFLT_ai_retreatCoverMaxVal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_retreatCoverMaxVal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+28h]
    vmovss  xmm0, cs:__real@3f800000
  }
  if ( v7 > 0 )
  {
    if ( !v36 )
    {
      __asm { vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000 }
      goto LABEL_62;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, esi
      vcvtsi2ss xmm0, xmm0, ebp
      vdivss  xmm0, xmm1, xmm0
    }
  }
  if ( v36 >= v7 )
  {
    __asm
    {
      vmulss  xmm0, xmm0, xmm6
      vminss  xmm0, xmm0, xmm2
    }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm6, xmm0
      vminss  xmm1, xmm0, xmm2
      vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    }
  }
LABEL_62:
  __asm { vmovaps xmm6, [rsp+118h+var_38] }
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
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
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
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnPriority
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnPriority(AIScriptedInterface *this, const pathnode_t *node, double _XMM2_8)
{
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = node->constant.spawnflags & 0x40;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
    vblendvps xmm0, xmm1, xmm2, xmm3
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnSecondaryTargets
==============
*/
float AIScriptedInterface::Cover_ScoreOnSecondaryTargets(AIScriptedInterface *this, const pathnode_t *node)
{
  int v5; 
  ai_scripted_t *m_pAI; 
  int v7; 
  __int64 v8; 
  unsigned __int16 number; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  __int64 v15; 
  bool v18; 
  const tacpoint_t *Point; 
  __int64 v41; 
  __int64 v42; 
  vec3_t pos; 

  v5 = 0;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  m_pAI = this->m_pAI;
  v7 = 0;
  if ( m_pAI->threat.numSecondaryTarget > 0 )
  {
    v8 = 0i64;
    do
    {
      number = m_pAI->threat.secondaryTargets[v8].entity.number;
      if ( number )
      {
        v10 = number;
        v11 = number - 1;
        if ( v11 >= 0x800 )
        {
          LODWORD(v42) = 2048;
          LODWORD(v41) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, v42) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v12 = v10 - 1;
        if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v12] )
        {
          LODWORD(v42) = m_pAI->threat.secondaryTargets[v8].entity.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v42) )
            __debugbreak();
        }
        v13 = m_pAI->threat.secondaryTargets[v8].entity.number;
        if ( v13 )
        {
          if ( (unsigned int)v13 - 1 >= 0x7FF )
          {
            LODWORD(v42) = 2047;
            LODWORD(v41) = v13 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          v14 = m_pAI->threat.secondaryTargets[v8].entity.number;
          if ( (unsigned int)(v14 - 1) >= 0x800 )
          {
            LODWORD(v42) = 2048;
            LODWORD(v41) = v14 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v15 = v14 - 1;
          if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v15] )
          {
            LODWORD(v42) = m_pAI->threat.secondaryTargets[v8].entity.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v42) )
              __debugbreak();
          }
          _RDI = g_entities;
          _RBX = 1456i64 * m_pAI->threat.secondaryTargets[v8].entity.number;
          v18 = this->Is3D(this);
          _RCX = this->m_pAI;
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+rdi-47Ch]
            vsubss  xmm2, xmm1, dword ptr [rsp+98h+pos+4]
            vmovss  xmm0, dword ptr [rbx+rdi-480h]
          }
          if ( v18 )
          {
            __asm
            {
              vsubss  xmm5, xmm0, dword ptr [rsp+98h+pos]
              vmovss  xmm0, dword ptr [rbx+rdi-478h]
              vsubss  xmm3, xmm0, dword ptr [rsp+98h+pos+8]
              vmovss  xmm4, dword ptr [rcx+510h]
              vmulss  xmm0, xmm5, xmm5
              vmulss  xmm1, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vcomiss xmm3, xmm0
            }
          }
          else
          {
            __asm
            {
              vsubss  xmm4, xmm0, dword ptr [rsp+98h+pos]
              vmovss  xmm5, dword ptr [rcx+510h]
              vmulss  xmm0, xmm4, xmm4
              vmulss  xmm3, xmm2, xmm2
              vaddss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm5, xmm5
              vcomiss xmm4, xmm1
            }
          }
          Point = tacpoint_ref_t::GetPoint(&m_pAI->threat.secondaryTargets[v8].tacpoint);
          if ( Point && Path_NodeSafeFrom(node, Point) )
            ++v5;
        }
      }
      m_pAI = this->m_pAI;
      ++v7;
      ++v8;
    }
    while ( v7 < m_pAI->threat.numSecondaryTarget );
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnSecondaryTargets_Tac
==============
*/
float AIScriptedInterface::Cover_ScoreOnSecondaryTargets_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint)
{
  ai_scripted_t *m_pAI; 
  int v6; 
  int v7; 
  __int64 v8; 
  unsigned __int16 number; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  __int64 v15; 
  bool v18; 
  const tacpoint_t *Point; 
  __int64 v41; 
  __int64 v42; 

  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 634, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v6 = 0;
  v7 = 0;
  if ( m_pAI->threat.numSecondaryTarget > 0 )
  {
    v8 = 0i64;
    do
    {
      number = m_pAI->threat.secondaryTargets[v8].entity.number;
      if ( number )
      {
        v10 = number;
        v11 = number - 1;
        if ( v11 >= 0x800 )
        {
          LODWORD(v42) = 2048;
          LODWORD(v41) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, v42) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v12 = v10 - 1;
        if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v12] )
        {
          LODWORD(v42) = m_pAI->threat.secondaryTargets[v8].entity.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v42) )
            __debugbreak();
        }
        v13 = m_pAI->threat.secondaryTargets[v8].entity.number;
        if ( v13 )
        {
          if ( (unsigned int)v13 - 1 >= 0x7FF )
          {
            LODWORD(v42) = 2047;
            LODWORD(v41) = v13 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          v14 = m_pAI->threat.secondaryTargets[v8].entity.number;
          if ( (unsigned int)(v14 - 1) >= 0x800 )
          {
            LODWORD(v42) = 2048;
            LODWORD(v41) = v14 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v15 = v14 - 1;
          if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v15] )
          {
            LODWORD(v42) = m_pAI->threat.secondaryTargets[v8].entity.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v42) )
              __debugbreak();
          }
          _RSI = g_entities;
          _RBX = 1456i64 * m_pAI->threat.secondaryTargets[v8].entity.number;
          v18 = this->Is3D(this);
          _RCX = this->m_pAI;
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+rsi-47Ch]
            vsubss  xmm2, xmm1, dword ptr [r15+4]
            vmovss  xmm0, dword ptr [rbx+rsi-480h]
          }
          if ( v18 )
          {
            __asm
            {
              vsubss  xmm5, xmm0, dword ptr [r15]
              vmovss  xmm0, dword ptr [rbx+rsi-478h]
              vsubss  xmm3, xmm0, dword ptr [r15+8]
              vmovss  xmm4, dword ptr [rcx+510h]
              vmulss  xmm0, xmm5, xmm5
              vmulss  xmm1, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vcomiss xmm3, xmm0
            }
          }
          else
          {
            __asm
            {
              vsubss  xmm4, xmm0, dword ptr [r15]
              vmovss  xmm5, dword ptr [rcx+510h]
              vmulss  xmm0, xmm4, xmm4
              vmulss  xmm3, xmm2, xmm2
              vaddss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm5, xmm5
              vcomiss xmm4, xmm1
            }
          }
          Point = tacpoint_ref_t::GetPoint(&m_pAI->threat.secondaryTargets[v8].tacpoint);
          if ( Point && !TacVisGraph_HasVis(pPoint, Point) )
            ++v6;
        }
      }
      m_pAI = this->m_pAI;
      ++v7;
      ++v8;
    }
    while ( v7 < m_pAI->threat.numSecondaryTarget );
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnStickiness
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnStickiness(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *claimedNode, double weight)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( node == claimedNode )
  {
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 838, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    __asm { vmovss  xmm2, cs:__real@3f800000 }
    if ( claimedNode && level.time - this->m_pAI->sentient->timeOfNodeClaim <= 4000 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3983126f
        vsubss  xmm1, xmm2, xmm1
        vmulss  xmm0, xmm1, cs:__real@40000000
        vaddss  xmm2, xmm0, xmm2
      }
    }
    __asm
    {
      vmulss  xmm0, xmm2, xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm6, [rsp+48h+var_18]
      vxorps  xmm0, xmm0, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnStickiness_Tac
==============
*/
float AIScriptedInterface::Cover_ScoreOnStickiness_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, const tacpoint_t *pCurPoint, float weight)
{
  __asm
  {
    vmovq   xmm1, r8
    vmovq   xmm0, rdx
    vpcmpeqq xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vblendvps xmm0, xmm1, xmm3, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnTargetDir
==============
*/
float AIScriptedInterface::Cover_ScoreOnTargetDir(AIScriptedInterface *this, const vec3_t *nodeOrigin, const CoverNodeMetricParams *metricParams)
{
  bool v19; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = metricParams;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [r8+38h]
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps [rsp+78h+var_58], xmm10
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm7, xmm0, dword ptr [r8+3Ch]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm8, xmm1, dword ptr [r8+40h]
    vsubss  xmm10, xmm0, dword ptr [r8+44h]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm9, xmm1, xmm0
  }
  v19 = this->Is3D(this);
  if ( v19 )
  {
    __asm
    {
      vmulss  xmm0, xmm10, xmm10
      vaddss  xmm1, xmm0, xmm9
      vsqrtss xmm2, xmm1, xmm1
      vcomiss xmm2, cs:__real@42800000
      vmovss  xmm1, cs:__real@3f800000
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm3, xmm7, xmm1
      vmulss  xmm4, xmm8, xmm1
      vmulss  xmm5, xmm10, xmm1
      vmulss  xmm1, xmm4, dword ptr [rbx+2Ch]
      vmulss  xmm0, xmm3, dword ptr [rbx+28h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbx+30h]
      vaddss  xmm0, xmm2, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm2, xmm9, xmm9
      vcomiss xmm2, cs:__real@42800000
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm3, xmm7, xmm1
      vmulss  xmm4, xmm8, xmm1
      vmulss  xmm1, xmm4, dword ptr [rbx+2Ch]
      vmulss  xmm0, xmm3, dword ptr [rbx+28h]
      vaddss  xmm0, xmm1, xmm0
    }
  }
  __asm { vcomiss xmm0, cs:__real@3e4ccccd }
  if ( v19 )
  {
    __asm { vmovss  xmm0, dword ptr [rbx+38h] }
  }
  else
  {
    __asm
    {
      vcomiss xmm0, cs:__real@be4ccccd
      vxorps  xmm0, xmm0, xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm10, [rsp+78h+var_58]
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnVisibility
==============
*/
float AIScriptedInterface::Cover_ScoreOnVisibility(AIScriptedInterface *this, const pathnode_t *node, const pathnode_t *enemyNode, const tacpoint_t *pEnemyTacPoint, float visibleWeight, float notVisibleWeight)
{
  LOBYTE(_EAX) = 1;
  if ( pEnemyTacPoint )
  {
    LOBYTE(_EAX) = TacGraph_HasVis(pEnemyTacPoint, node);
  }
  else if ( enemyNode )
  {
    LOBYTE(_EAX) = Path_NodesVisible(node, enemyNode) == 1;
  }
  __asm { vmovss  xmm2, [rsp+28h+notVisibleWeight] }
  _ECX = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, [rsp+28h+visibleWeight]
    vblendvps xmm0, xmm1, xmm2, xmm3
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::Cover_ScoreOnVisibility_Tac
==============
*/

float __fastcall AIScriptedInterface::Cover_ScoreOnVisibility_Tac(AIScriptedInterface *this, const tacpoint_t *pPoint, const tacpoint_t *pEnemyTacPoint, double visibleWeight, float notVisibleWeight)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 773, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  LOBYTE(_EAX) = 1;
  if ( pEnemyTacPoint )
    LOBYTE(_EAX) = TacVisGraph_HasVis(pPoint, pEnemyTacPoint);
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, [rsp+48h+notVisibleWeight]
    vblendvps xmm0, xmm6, xmm1, xmm2
    vmovaps xmm6, [rsp+48h+var_18]
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
      __asm { vmovaps [rsp+48h+var_18], xmm7 }
      if ( node->constant.type != 4 && !AIScriptedInterface::Cover_GetRange(node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 487, ASSERT_TYPE_ASSERT, "(range)", (const char *)&queryFormat, "range") )
        __debugbreak();
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm4, cs:__real@3b360b61
        vmulss  xmm3, xmm4, dword ptr [rdi]
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vxorps  xmm7, xmm7, xmm7
        vroundss xmm2, xmm7, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rax+0F0h], xmm1
        vmulss  xmm4, xmm4, dword ptr [rdi+4]
        vaddss  xmm2, xmm4, cs:__real@3f000000
      }
      _RAX = this->m_pAI;
      __asm
      {
        vroundss xmm3, xmm7, xmm2, 1
        vmovaps xmm7, [rsp+48h+var_18]
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, cs:__real@43b40000
        vmovss  dword ptr [rax+0F4h], xmm0
      }
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
void DebugDrawNodeSelectionOverlay()
{
  const dvar_t *v9; 
  __int64 v10; 
  pathnode_t *v19; 
  const char *v20; 
  const char *v40; 
  vec3_t outPos; 

  if ( debugNodeIndex )
  {
    v9 = DVARINT_ai_debugCoverSelection;
    if ( !DVARINT_ai_debugCoverSelection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCoverSelection") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.integer == 1 )
    {
      CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
      v10 = 0i64;
      if ( debugNodeIndex )
      {
        __asm
        {
          vmovaps [rsp+108h+var_28], xmm6
          vmovss  xmm6, cs:__real@42400000
          vmovaps [rsp+108h+var_38], xmm7
          vmovss  xmm7, cs:__real@42000000
          vmovaps [rsp+108h+var_48], xmm8
          vmovss  xmm8, cs:__real@41800000
          vmovaps [rsp+108h+var_68], xmm10
          vmovss  xmm10, cs:__real@3a83126f
          vmovaps [rsp+108h+var_78], xmm11
          vmovss  xmm11, dword ptr [rsp+108h+outPos+8]
          vmovaps [rsp+108h+var_88], xmm12
          vmovss  xmm12, dword ptr [rsp+108h+outPos+4]
          vmovaps [rsp+108h+var_98], xmm13
          vmovss  xmm13, dword ptr [rsp+108h+outPos]
          vmovaps [rsp+108h+var_A8], xmm14
          vmovss  xmm14, cs:__real@3ada740e
          vmovaps [rsp+108h+var_58], xmm9
        }
        do
        {
          v19 = (pathnode_t *)debugCoverNode[v10];
          Path_DrawDebugNodeBox(v19);
          v20 = debugCoverNodeMsg[(unsigned int)v10];
          if ( v20 )
          {
            pathnode_t::GetPos(v19, &outPos);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+108h+outPos]
              vmovss  xmm1, dword ptr [rsp+108h+outPos+4]
              vsubss  xmm3, xmm0, xmm13
              vmovss  xmm0, dword ptr [rsp+108h+outPos+8]
              vsubss  xmm2, xmm1, xmm12
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vsubss  xmm4, xmm0, xmm11
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vmulss  xmm9, xmm1, xmm14
            }
            if ( !strncmp(v20, "best", 4ui64) )
            {
              __asm { vaddss  xmm1, xmm6, dword ptr [rsp+108h+outPos+8] }
            }
            else if ( !strncmp(v20, "adv", 3ui64) )
            {
              __asm { vaddss  xmm1, xmm7, dword ptr [rsp+108h+outPos+8] }
            }
            else
            {
              __asm { vaddss  xmm1, xmm8, dword ptr [rsp+108h+outPos+8] }
            }
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmovss  dword ptr [rsp+108h+outPos+8], xmm1
              vmulss  xmm1, xmm0, xmm10
              vcvtss2sd xmm2, xmm1, xmm1
              vmovq   r8, xmm2
            }
            v40 = j_va("%s  (%2.1f)", v20, _R8);
            __asm { vmovaps xmm2, xmm9; scale }
            G_Main_AddDebugString(&outPos, &debugCoverNodeColors[(unsigned int)v10], *(float *)&_XMM2, v40);
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < debugNodeIndex );
        __asm
        {
          vmovaps xmm14, [rsp+108h+var_A8]
          vmovaps xmm13, [rsp+108h+var_98]
          vmovaps xmm12, [rsp+108h+var_88]
          vmovaps xmm11, [rsp+108h+var_78]
          vmovaps xmm10, [rsp+108h+var_68]
          vmovaps xmm9, [rsp+108h+var_58]
          vmovaps xmm8, [rsp+108h+var_48]
          vmovaps xmm7, [rsp+108h+var_38]
          vmovaps xmm6, [rsp+108h+var_28]
        }
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
  gentity_s *v9; 
  int v12; 
  __int64 v13; 
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
  _RDX = this->m_pAI;
  v9 = v7;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+268h]; maxHeight
    vmovss  xmm2, dword ptr [rdx+264h]; maxDist
  }
  v12 = Path_NodesInCylinder(&_RDX->codeGoal.pos, NULL, *(float *)&_XMM2, *(float *)&_XMM3, &nodes, 512, -2107367684);
  v13 = v12;
  if ( v12 > 0 )
  {
    p_nodes = &nodes;
    do
    {
      node = p_nodes->node;
      if ( isNodeInRegion(p_nodes->node, v9) )
        Path_DrawDebugNode(&outPos, node);
      ++p_nodes;
      --v13;
    }
    while ( v13 );
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
  sentient_s *sentient; 
  bool v11; 
  bool v13; 
  ai_scripted_t *v70; 

  _RBX = metricParams;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1765, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1766, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1767, ASSERT_TYPE_ASSERT, "(metricParams)", (const char *)&queryFormat, "metricParams") )
    __debugbreak();
  _RBX->pEnemyTacPoint = Sentient_NearestTacPointOfEnemy(this->m_pAI->sentient);
  _RBX->enemyNode = Sentient_NearestNodeOfEnemy(this->m_pAI->sentient);
  *(_QWORD *)&_RBX->distToEnemy = 0i64;
  _RBX->enemy = NULL;
  isDefined = EntHandle::isDefined(&this->m_pAI->coverSelectionFocusEnt);
  m_pAI = this->m_pAI;
  if ( isDefined )
  {
    _RAX = EntHandle::ent(&m_pAI->coverSelectionFocusEnt);
    _RBX->referenceOrigin.v[0] = _RAX->r.currentOrigin.v[0];
    _RBX->referenceOrigin.v[1] = _RAX->r.currentOrigin.v[1];
    __asm { vmovss  xmm0, dword ptr [rax+138h] }
  }
  else
  {
    _RCX = m_pAI->ent;
    _RBX->referenceOrigin.v[0] = _RCX->r.currentOrigin.v[0];
    _RBX->referenceOrigin.v[1] = _RCX->r.currentOrigin.v[1];
    __asm { vmovss  xmm0, dword ptr [rcx+138h] }
  }
  __asm { vmovss  dword ptr [rbx+44h], xmm0 }
  _RSI = AICommonInterface::GetTargetEntity(this);
  if ( _RSI && (!this->m_pAI->bUseBackupCoverFromPos || AIScriptedInterface::IsCurrentEnemyValid(this)) )
  {
    sentient = _RSI->sentient;
    if ( sentient )
      _RBX->enemy = sentient;
    v11 = this->Is3D(this);
    __asm { vmovss  xmm0, dword ptr [rsi+130h] }
    v13 = !v11;
    if ( v11 )
    {
      __asm
      {
        vsubss  xmm4, xmm0, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbx+28h], xmm4
        vmovss  xmm0, dword ptr [rsi+134h]
        vsubss  xmm2, xmm0, dword ptr [rbx+40h]
        vmovss  dword ptr [rbx+2Ch], xmm2
        vmovss  xmm1, dword ptr [rsi+138h]
        vsubss  xmm3, xmm1, dword ptr [rbx+44h]
        vmulss  xmm0, xmm2, xmm2
        vmovss  dword ptr [rbx+30h], xmm3
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm5, xmm2, xmm2
        vcmpless xmm0, xmm5, cs:__real@80000000
        vblendvps xmm0, xmm5, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbx+28h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+2Ch]
        vmovss  dword ptr [rbx+2Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+30h]
        vmovss  dword ptr [rbx+30h], xmm0
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbx+28h], xmm1
        vmovss  xmm2, dword ptr [rsi+134h]
        vsubss  xmm0, xmm2, dword ptr [rbx+40h]
        vmovss  dword ptr [rbx+2Ch], xmm0
      }
      _RBX->dirToEnemy.v[2] = 0.0;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vmovss  xmm2, dword ptr [rbx+28h]
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm2, xmm2
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm5, xmm1, xmm1
        vcmpless xmm0, xmm5, cs:__real@80000000
        vmovss  xmm1, cs:__real@3f800000
        vblendvps xmm0, xmm5, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rbx+28h], xmm0
        vmulss  xmm1, xmm1, dword ptr [rbx+2Ch]
        vmovss  dword ptr [rbx+2Ch], xmm1
      }
    }
    __asm { vmovss  dword ptr [rbx+34h], xmm5 }
    _RAX = this->m_pAI;
    __asm
    {
      vcomiss xmm5, dword ptr [rax+514h]
      vcomiss xmm5, dword ptr [rax+510h]
      vcomiss xmm5, dword ptr [rax+51Ch]
    }
    if ( v13 )
      __asm { vcomiss xmm5, dword ptr [rax+518h] }
    else
      _RBX->engagementDirWeight = 1.0;
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, _RSI, &_RBX->lastKnownEnemyOrigin);
    _RBX->lastKnownValid = 1;
  }
  else
  {
    _RCX = this->m_pAI;
    if ( _RCX->bUseBackupCoverFromPos )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+0C1Ch]
        vsubss  xmm1, xmm0, dword ptr [rax+130h]
        vmovss  dword ptr [rbx+28h], xmm1
        vmovss  xmm2, dword ptr [rcx+0C20h]
        vsubss  xmm0, xmm2, dword ptr [rax+134h]
        vmovss  dword ptr [rbx+2Ch], xmm0
        vmovss  xmm1, dword ptr [rcx+0C24h]
        vsubss  xmm2, xmm1, dword ptr [rax+138h]
        vmovss  dword ptr [rbx+30h], xmm2
      }
      if ( !this->Is3D(this) )
        _RBX->dirToEnemy.v[2] = 0.0;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vmovss  xmm5, dword ptr [rbx+28h]
        vmovss  xmm3, dword ptr [rbx+30h]
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rbx+28h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+2Ch]
        vmovss  dword ptr [rbx+2Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+30h]
        vmovss  dword ptr [rbx+30h], xmm0
        vmovss  dword ptr [rbx+34h], xmm4
      }
      v70 = this->m_pAI;
      _RBX->lastKnownEnemyOrigin.v[0] = v70->backupCoverFromPos.v[0];
      _RBX->lastKnownEnemyOrigin.v[1] = v70->backupCoverFromPos.v[1];
      _RBX->lastKnownEnemyOrigin.v[2] = v70->backupCoverFromPos.v[2];
      _RBX->lastKnownValid = 1;
    }
    else
    {
      *(_QWORD *)_RBX->dirToEnemy.v = 0i64;
      _RBX->dirToEnemy.v[2] = 0.0;
      *(_QWORD *)_RBX->lastKnownEnemyOrigin.v = 0i64;
      _RBX->lastKnownEnemyOrigin.v[2] = 0.0;
      _RBX->lastKnownValid = 0;
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
bool AIScriptedInterface::IsValidCoverTacPoint(AIScriptedInterface *this, const tacpoint_t *pTacpoint)
{
  sentient_s *TargetSentient; 
  const tacpoint_t *v6; 
  bool v7; 
  bool v8; 
  sentient_s *v18; 
  ai_common_t *ai; 
  ai_common_t *v21; 
  bool v22; 
  bool v35; 
  AIWrapper v37; 
  int v38; 
  bitarray<224> result; 

  if ( !pTacpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 1555, ASSERT_TYPE_ASSERT, "(pTacpoint)", (const char *)&queryFormat, "pTacpoint") )
    __debugbreak();
  __asm { vmovaps [rsp+0D8h+var_18], xmm6 }
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    goto LABEL_25;
  v6 = Sentient_NearestTacPoint(TargetSentient);
  if ( v6 )
  {
    if ( !TacVisGraph_HasVis(pTacpoint, v6) )
      goto LABEL_25;
  }
  v7 = AIScriptedInterface::PathPending(this);
  v8 = !v7;
  if ( !v7 )
  {
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+838h]
      vmovss  xmm2, dword ptr [rax+83Ch]
      vmovss  xmm3, dword ptr [rax+840h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@3a83126f
    }
    if ( v8 && AIScriptedInterface::IsCurrentlyBlockingOtherAI(this) )
    {
LABEL_25:
      v35 = 0;
      goto LABEL_26;
    }
  }
  Com_Teams_GetTeamFlag(&result, this->m_pAI->sentient->eTeam);
  v18 = Sentient_FirstSentient(&result);
  if ( v18 )
  {
    __asm { vmovss  xmm6, cs:__real@42000000 }
    do
    {
      if ( v18 != this->m_pAI->sentient )
      {
        ai = v18->ai;
        if ( (!ai || ai->pNavigator) && v18->ent->health > 0 )
        {
          AIWrapper::AIWrapper(&v37, v18->ent);
          if ( v37.m_pAI )
          {
            if ( AIScriptedInterface::GetCoverTacPoint(v37.m_pAI) == pTacpoint )
              goto LABEL_25;
          }
          v21 = v18->ai;
          if ( v21 && v21->pNavigator->HasPath(v21->pNavigator) )
          {
            v18->ai->pNavigator->GetGoalPos(v18->ai->pNavigator, (vec3_t *)&v38);
            __asm
            {
              vmovss  xmm1, [rsp+0D8h+var_50]
              vmovss  xmm0, [rsp+0D8h+var_54]
              vmovss  xmm2, [rsp+0D8h+var_58]
            }
          }
          else
          {
            v22 = __CFADD__(v18->ent, 304i64);
            _RAX = (__int64)&v18->ent->r.currentOrigin;
            __asm
            {
              vmovss  xmm2, dword ptr [rax]
              vmovss  [rsp+0D8h+var_58], xmm2
              vmovss  xmm0, dword ptr [rax+4]
              vmovss  [rsp+0D8h+var_54], xmm0
              vmovss  xmm1, dword ptr [rax+8]
              vmovss  [rsp+0D8h+var_50], xmm1
            }
          }
          __asm
          {
            vsubss  xmm2, xmm2, dword ptr [rdi]
            vsubss  xmm0, xmm0, dword ptr [rdi+4]
            vsubss  xmm3, xmm1, dword ptr [rdi+8]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, xmm6
          }
          if ( v22 )
            goto LABEL_25;
        }
      }
      v18 = Sentient_NextSentient(v18, &result);
    }
    while ( v18 );
  }
  v35 = 1;
LABEL_26:
  __asm { vmovaps xmm6, [rsp+0D8h+var_18] }
  return v35;
}

/*
==============
AIScriptedInterface::KeepClaimedNode
==============
*/
bool AIScriptedInterface::KeepClaimedNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  ai_scripted_t *v7; 
  ai_scripted_t *v21; 
  bool result; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_cover.cpp", 2890, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  if ( m_pAI->nodeSelect.keepClaimedNode )
    goto LABEL_20;
  if ( m_pAI->nodeSelect.keepClaimedNodeIfValid )
  {
    pClaimedNode = m_pAI->sentient->pClaimedNode;
    if ( !pClaimedNode )
      goto LABEL_17;
    pathnode_t::GetPos(pClaimedNode, &pos);
    _RDI = DCONST_DVARFLT_ai_boundingOverwatchGoalProximity;
    if ( !DCONST_DVARFLT_ai_boundingOverwatchGoalProximity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_boundingOverwatchGoalProximity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    v7 = this->m_pAI;
    __asm { vmulss  xmm6, xmm0, xmm0 }
    if ( v7->squadNumber >= 0 && v7->squadMovementAllowed )
      goto LABEL_18;
    if ( AICommonInterface::GetTargetSentient(this) )
    {
      _RDX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+130h]
        vsubss  xmm3, xmm0, dword ptr [rax+130h]
        vmovss  xmm1, dword ptr [rdx+134h]
        vsubss  xmm2, xmm1, dword ptr [rax+134h]
        vmovss  xmm0, dword ptr [rdx+138h]
        vsubss  xmm4, xmm0, dword ptr [rax+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@45800000
      }
    }
    v21 = this->m_pAI;
    _R8 = &v21->codeGoal;
    if ( !v21->boundingOverwatchEnabled )
      goto LABEL_24;
    __asm
    {
      vmovss  xmm0, dword ptr [r8]
      vsubss  xmm3, xmm0, dword ptr [rsp+78h+pos]
      vmovss  xmm1, dword ptr [r8+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+78h+pos+4]
      vmovss  xmm0, dword ptr [r8+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+78h+pos+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm6
    }
    if ( !v21->boundingOverwatchEnabled )
    {
LABEL_24:
      if ( !AICommonInterface::PointAtGoal(this, &pos, _R8) )
      {
LABEL_17:
        v7 = this->m_pAI;
LABEL_18:
        v7->nodeSelect.keepClaimedNodeIfValid = 0;
        goto LABEL_19;
      }
    }
LABEL_20:
    result = 1;
    goto LABEL_21;
  }
LABEL_19:
  result = 0;
LABEL_21:
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
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

__int64 __fastcall compare_node_sort(const void *pe1, const void *pe2, double _XMM2_8)
{
  char v3; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm1, xmm2
  }
  if ( v3 )
    return 0xFFFFFFFFi64;
  __asm { vcomiss xmm1, xmm2 }
  return 0i64;
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

