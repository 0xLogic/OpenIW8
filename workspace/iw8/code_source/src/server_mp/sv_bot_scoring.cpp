/*
==============
Bot_Score_NodeIsDangerous
==============
*/

int __fastcall Bot_Score_NodeIsDangerous(const pathnode_t *node, __int16 botEntityNum, float radius)
{
  return ?Bot_Score_NodeIsDangerous@@YAHPEBUpathnode_t@@FM@Z(node, botEntityNum, radius);
}

/*
==============
Bot_Score_RndPick
==============
*/

int __fastcall Bot_Score_RndPick(bot_score_item_s *items, int itemCount)
{
  return ?Bot_Score_RndPick@@YAHPEAUbot_score_item_s@@H@Z(items, itemCount);
}

/*
==============
Bot_Score_NodeExposureVis
==============
*/

int __fastcall Bot_Score_NodeExposureVis(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeExposureVis@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Factor_NotRecentlyUsed
==============
*/

int __fastcall Bot_Score_Factor_NotRecentlyUsed(const pathnode_t *node, const bot_score_parms_s *parms)
{
  return ?Bot_Score_Factor_NotRecentlyUsed@@YAHPEBUpathnode_t@@PEBUbot_score_parms_s@@@Z(node, parms);
}

/*
==============
Bot_Score_Factor_CoverRearFromPoint
==============
*/

int __fastcall Bot_Score_Factor_CoverRearFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  return ?Bot_Score_Factor_CoverRearFromPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookAtPoint);
}

/*
==============
Bot_Score_NodeCapture
==============
*/

int __fastcall Bot_Score_NodeCapture(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeCapture@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Factor_ConcealedRearFromDir
==============
*/

int __fastcall Bot_Score_Factor_ConcealedRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  return ?Bot_Score_Factor_ConcealedRearFromDir@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookDir);
}

/*
==============
Bot_Score_Dbg_NodeTrap
==============
*/

void __fastcall Bot_Score_Dbg_NodeTrap(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  ?Bot_Score_Dbg_NodeTrap@@YAXPEAUbot_score_item_s@@HPEAUbot_score_parms_s@@@Z(items, itemCount, parms);
}

/*
==============
Bot_Score_NodeIsNearAllySentient
==============
*/

int __fastcall Bot_Score_NodeIsNearAllySentient(const pathnode_t *node, __int16 botEntityNum, float radius)
{
  return ?Bot_Score_NodeIsNearAllySentient@@YAHPEBUpathnode_t@@FM@Z(node, botEntityNum, radius);
}

/*
==============
Bot_Score_ScoreNodesPick
==============
*/

int __fastcall Bot_Score_ScoreNodesPick(const bot_data_t *botData, bot_score_item_s *objects, int objectsCount, int selectCount, bot_score_parms_s *parms, int nodesToPick, int *nodesPicked)
{
  return ?Bot_Score_ScoreNodesPick@@YAHPEBUbot_data_t@@PEAUbot_score_item_s@@HHPEAUbot_score_parms_s@@HPEAH@Z(botData, objects, objectsCount, selectCount, parms, nodesToPick, nodesPicked);
}

/*
==============
Bot_Score_SortTop
==============
*/

void __fastcall Bot_Score_SortTop(bot_score_item_s *items, int itemCount, int topRange)
{
  ?Bot_Score_SortTop@@YAXPEAUbot_score_item_s@@HH@Z(items, itemCount, topRange);
}

/*
==============
Bot_Score_Factor_NoTrafficRearFromDir
==============
*/

int __fastcall Bot_Score_Factor_NoTrafficRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  return ?Bot_Score_Factor_NoTrafficRearFromDir@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookDir);
}

/*
==============
Bot_Score_NodeAmbush
==============
*/

int __fastcall Bot_Score_NodeAmbush(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeAmbush@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Factor_AwayFromAlliedPlayers
==============
*/

int __fastcall Bot_Score_Factor_AwayFromAlliedPlayers(const pathnode_t *node, __int16 entityNum)
{
  return ?Bot_Score_Factor_AwayFromAlliedPlayers@@YAHPEBUpathnode_t@@F@Z(node, entityNum);
}

/*
==============
Bot_Score_Dbg_Direction
==============
*/

void __fastcall Bot_Score_Dbg_Direction(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  ?Bot_Score_Dbg_Direction@@YAXPEAUbot_score_item_s@@HPEAUbot_score_parms_s@@@Z(items, itemCount, parms);
}

/*
==============
Bot_Score_Dbg_TargetNode
==============
*/

void __fastcall Bot_Score_Dbg_TargetNode(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  ?Bot_Score_Dbg_TargetNode@@YAXPEAUbot_score_item_s@@HPEAUbot_score_parms_s@@@Z(items, itemCount, parms);
}

/*
==============
Bot_Score_ScoreSet
==============
*/

int __fastcall Bot_Score_ScoreSet(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  return ?Bot_Score_ScoreSet@@YAHPEAUbot_score_item_s@@HPEAUbot_score_parms_s@@@Z(items, itemCount, parms);
}

/*
==============
Bot_Score_DrawDebugParms
==============
*/

void __fastcall Bot_Score_DrawDebugParms(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  ?Bot_Score_DrawDebugParms@@YAXPEAUbot_score_item_s@@HPEAUbot_score_parms_s@@@Z(items, itemCount, parms);
}

/*
==============
Bot_Score_Factor_NoTraffic360
==============
*/

int __fastcall Bot_Score_Factor_NoTraffic360(const pathnode_t *node)
{
  return ?Bot_Score_Factor_NoTraffic360@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Bot_Score_NodeHideFrom
==============
*/

int __fastcall Bot_Score_NodeHideFrom(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeHideFrom@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Factor_ProneCover360
==============
*/

int __fastcall Bot_Score_Factor_ProneCover360(const pathnode_t *node)
{
  return ?Bot_Score_Factor_ProneCover360@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Bot_Score_Factor_VisibilityToNode
==============
*/

int __fastcall Bot_Score_Factor_VisibilityToNode(const pathnode_t *node, const pathnode_t *lookAtNode)
{
  return ?Bot_Score_Factor_VisibilityToNode@@YAHPEBUpathnode_t@@0@Z(node, lookAtNode);
}

/*
==============
Bot_Score_Factor_ProneCoverFacingDir
==============
*/

int __fastcall Bot_Score_Factor_ProneCoverFacingDir(const pathnode_t *node, const vec3_t *lookDir)
{
  return ?Bot_Score_Factor_ProneCoverFacingDir@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookDir);
}

/*
==============
Bot_Score_NodeSentry
==============
*/

int __fastcall Bot_Score_NodeSentry(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeSentry@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_NodeGrenade_Target
==============
*/

int __fastcall Bot_Score_NodeGrenade_Target(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeGrenade_Target@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Factor_ConcealedRearFromPoint
==============
*/

int __fastcall Bot_Score_Factor_ConcealedRearFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  return ?Bot_Score_Factor_ConcealedRearFromPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookAtPoint);
}

/*
==============
Bot_Score_Factor_HighTraffic360
==============
*/

int __fastcall Bot_Score_Factor_HighTraffic360(const pathnode_t *node)
{
  return ?Bot_Score_Factor_HighTraffic360@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Bot_Score_Factor_IdealRange
==============
*/

int __fastcall Bot_Score_Factor_IdealRange(const pathnode_t *node, const vec3_t *point, float minRange, float maxRange, float zeroFraction)
{
  return ?Bot_Score_Factor_IdealRange@@YAHPEBUpathnode_t@@AEBTvec3_t@@MMM@Z(node, point, minRange, maxRange, zeroFraction);
}

/*
==============
Bot_Score_RndPickSortedSingle
==============
*/

int __fastcall Bot_Score_RndPickSortedSingle(bot_score_item_s *items, int itemCount)
{
  return ?Bot_Score_RndPickSortedSingle@@YAHPEAUbot_score_item_s@@H@Z(items, itemCount);
}

/*
==============
Bot_Score_NodeTraffic
==============
*/

int __fastcall Bot_Score_NodeTraffic(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeTraffic@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_NodeTrap
==============
*/

int __fastcall Bot_Score_NodeTrap(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeTrap@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_NodeShouldIgnore
==============
*/

int __fastcall Bot_Score_NodeShouldIgnore(const pathnode_t *node, __int16 botEntityNum, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeShouldIgnore@@YAHPEBUpathnode_t@@FPEBUbot_score_parms_s@@@Z(node, botEntityNum, parms);
}

/*
==============
Bot_GetScoreFlag
==============
*/

bot_score_flag_t __fastcall Bot_GetScoreFlag(const char *scoreFlagName)
{
  return ?Bot_GetScoreFlag@@YA?AW4bot_score_flag_t@@PEBD@Z(scoreFlagName);
}

/*
==============
Bot_Score_NodeHide
==============
*/

int __fastcall Bot_Score_NodeHide(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeHide@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_GetScoreType
==============
*/

bot_score_type_t __fastcall Bot_GetScoreType(const char *scoreTypeName)
{
  return ?Bot_GetScoreType@@YA?AW4bot_score_type_t@@PEBD@Z(scoreTypeName);
}

/*
==============
Bot_Score_Factor_NoExposurePastNode
==============
*/

int __fastcall Bot_Score_Factor_NoExposurePastNode(const pathnode_t *node, const vec3_t *point, int exposeFlags)
{
  return ?Bot_Score_Factor_NoExposurePastNode@@YAHPEBUpathnode_t@@AEBTvec3_t@@H@Z(node, point, exposeFlags);
}

/*
==============
Bot_Score_Factor_NoTrafficRearFromPoint
==============
*/

int __fastcall Bot_Score_Factor_NoTrafficRearFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  return ?Bot_Score_Factor_NoTrafficRearFromPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookAtPoint);
}

/*
==============
Bot_Score_Factor_HighTrafficSelf
==============
*/

int __fastcall Bot_Score_Factor_HighTrafficSelf(const pathnode_t *node)
{
  return ?Bot_Score_Factor_HighTrafficSelf@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Bot_Score_Factor_StandingCoverFacingPoint
==============
*/

int __fastcall Bot_Score_Factor_StandingCoverFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  return ?Bot_Score_Factor_StandingCoverFacingPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookAtPoint);
}

/*
==============
Bot_Score_ScoreNodesSort
==============
*/

int __fastcall Bot_Score_ScoreNodesSort(const bot_data_t *botData, bot_score_item_s *objects, int objectsCount, bot_score_parms_s *parms, int *nodesPicked)
{
  return ?Bot_Score_ScoreNodesSort@@YAHPEBUbot_data_t@@PEAUbot_score_item_s@@HPEAUbot_score_parms_s@@PEAH@Z(botData, objects, objectsCount, parms, nodesPicked);
}

/*
==============
Bot_Score_NodeCamp
==============
*/

int __fastcall Bot_Score_NodeCamp(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeCamp@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Factor_IdealRangeWeapon
==============
*/

int __fastcall Bot_Score_Factor_IdealRangeWeapon(const pathnode_t *node, __int16 entityNum, const vec3_t *targetPoint, const float addDistance)
{
  return ?Bot_Score_Factor_IdealRangeWeapon@@YAHPEBUpathnode_t@@FAEBTvec3_t@@M@Z(node, entityNum, targetPoint, addDistance);
}

/*
==============
Bot_Score_Factor_GeneralExposure
==============
*/

int __fastcall Bot_Score_Factor_GeneralExposure(const pathnode_t *node, int exposeFlags, int maxExposeValue)
{
  return ?Bot_Score_Factor_GeneralExposure@@YAHPEBUpathnode_t@@HH@Z(node, exposeFlags, maxExposeValue);
}

/*
==============
Bot_Score_NodeGrenade_From
==============
*/

int __fastcall Bot_Score_NodeGrenade_From(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeGrenade_From@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_NodeCombat
==============
*/

int __fastcall Bot_Score_NodeCombat(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeCombat@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_NodeWasRecentlyUsed
==============
*/

int __fastcall Bot_Score_NodeWasRecentlyUsed(const pathnode_t *node, const bot_score_parms_s *parms, float recentUseTime)
{
  return ?Bot_Score_NodeWasRecentlyUsed@@YAHPEBUpathnode_t@@PEBUbot_score_parms_s@@M@Z(node, parms, recentUseTime);
}

/*
==============
Bot_Score_Factor_CrouchSightFacingPoint
==============
*/

int __fastcall Bot_Score_Factor_CrouchSightFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  return ?Bot_Score_Factor_CrouchSightFacingPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookAtPoint);
}

/*
==============
Bot_Score_Sort
==============
*/

void __fastcall Bot_Score_Sort(bot_score_item_s *items, int itemCount)
{
  ?Bot_Score_Sort@@YAXPEAUbot_score_item_s@@H@Z(items, itemCount);
}

/*
==============
Bot_Score_Factor_LowTrafficSelf
==============
*/

int __fastcall Bot_Score_Factor_LowTrafficSelf(const pathnode_t *node)
{
  return ?Bot_Score_Factor_LowTrafficSelf@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Bot_Score_NodeProtect
==============
*/

int __fastcall Bot_Score_NodeProtect(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeProtect@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_ScoreNodesInitParms
==============
*/

void __fastcall Bot_Score_ScoreNodesInitParms(const bot_data_t *botData, bot_score_parms_s *parms, bot_score_type_t scoreType)
{
  ?Bot_Score_ScoreNodesInitParms@@YAXPEBUbot_data_t@@PEAUbot_score_parms_s@@W4bot_score_type_t@@@Z(botData, parms, scoreType);
}

/*
==============
Bot_Score_NodeExposed
==============
*/

int __fastcall Bot_Score_NodeExposed(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeExposed@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Factor_AwayFromPoint
==============
*/

int __fastcall Bot_Score_Factor_AwayFromPoint(const pathnode_t *node, const vec3_t *point, int maxDistAway)
{
  return ?Bot_Score_Factor_AwayFromPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@H@Z(node, point, maxDistAway);
}

/*
==============
Bot_Score_Factor_ExposedToSky
==============
*/

int __fastcall Bot_Score_Factor_ExposedToSky(const pathnode_t *node)
{
  return ?Bot_Score_Factor_ExposedToSky@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Bot_Score_NodeHideAnywhere
==============
*/

int __fastcall Bot_Score_NodeHideAnywhere(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeHideAnywhere@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Factor_HideFromAerialEnemiesHelper
==============
*/

int __fastcall Bot_Score_Factor_HideFromAerialEnemiesHelper(const pathnode_t *node, const bot_score_parms_s *parms, int index)
{
  return ?Bot_Score_Factor_HideFromAerialEnemiesHelper@@YAHPEBUpathnode_t@@PEBUbot_score_parms_s@@H@Z(node, parms, index);
}

/*
==============
Bot_Score_Factor_CrouchSightFacingDir
==============
*/

int __fastcall Bot_Score_Factor_CrouchSightFacingDir(const pathnode_t *node, const vec3_t *lookDir)
{
  return ?Bot_Score_Factor_CrouchSightFacingDir@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookDir);
}

/*
==============
Bot_Score_Factor_CloseToPoint
==============
*/

int __fastcall Bot_Score_Factor_CloseToPoint(const pathnode_t *node, const vec3_t *point, int maxDistAway)
{
  return ?Bot_Score_Factor_CloseToPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@H@Z(node, point, maxDistAway);
}

/*
==============
Bot_Score_Factor_ProneCoverFacingPoint
==============
*/

int __fastcall Bot_Score_Factor_ProneCoverFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  return ?Bot_Score_Factor_ProneCoverFacingPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookAtPoint);
}

/*
==============
Bot_Score_Factor_FacesAwayFromPoint
==============
*/

int __fastcall Bot_Score_Factor_FacesAwayFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint, const vec3_t *facingCheckPoint)
{
  return ?Bot_Score_Factor_FacesAwayFromPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@1@Z(node, lookAtPoint, facingCheckPoint);
}

/*
==============
Bot_Score_Factor_AwayFromCenterPointHelper
==============
*/

int __fastcall Bot_Score_Factor_AwayFromCenterPointHelper(const pathnode_t *node, const bot_score_parms_s *parms, int index, float weight)
{
  return ?Bot_Score_Factor_AwayFromCenterPointHelper@@YAHPEBUpathnode_t@@PEBUbot_score_parms_s@@HM@Z(node, parms, index, weight);
}

/*
==============
Bot_Score_NodeIgnoreTraversalIslandMismatch
==============
*/

int __fastcall Bot_Score_NodeIgnoreTraversalIslandMismatch(const pathnode_t *node, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeIgnoreTraversalIslandMismatch@@YAHPEBUpathnode_t@@PEBUbot_score_parms_s@@@Z(node, parms);
}

/*
==============
Bot_Score_Factor_InFrontOf
==============
*/

int __fastcall Bot_Score_Factor_InFrontOf(const pathnode_t *node, const vec3_t *eyePoint, const vec3_t *eyeForward)
{
  return ?Bot_Score_Factor_InFrontOf@@YAHPEBUpathnode_t@@AEBTvec3_t@@1@Z(node, eyePoint, eyeForward);
}

/*
==============
Bot_Score_RndPickSortedMultiple
==============
*/

void __fastcall Bot_Score_RndPickSortedMultiple(bot_score_item_s *items, int itemCount, int numToPick, int *nodesPicked)
{
  ?Bot_Score_RndPickSortedMultiple@@YAXPEAUbot_score_item_s@@HHPEAH@Z(items, itemCount, numToPick, nodesPicked);
}

/*
==============
Bot_Score_Factor_Behind
==============
*/

int __fastcall Bot_Score_Factor_Behind(const pathnode_t *node, const vec3_t *eyePoint, const vec3_t *eyeForward)
{
  return ?Bot_Score_Factor_Behind@@YAHPEBUpathnode_t@@AEBTvec3_t@@1@Z(node, eyePoint, eyeForward);
}

/*
==============
Bot_Score_Factor_HighTrafficViewToPoint
==============
*/

int __fastcall Bot_Score_Factor_HighTrafficViewToPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  return ?Bot_Score_Factor_HighTrafficViewToPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookAtPoint);
}

/*
==============
Bot_Score_Factor_CoverRearFromDir
==============
*/

int __fastcall Bot_Score_Factor_CoverRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  return ?Bot_Score_Factor_CoverRearFromDir@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookDir);
}

/*
==============
Bot_Score_NodeIsCurrentlyOccupied
==============
*/

int __fastcall Bot_Score_NodeIsCurrentlyOccupied(const pathnode_t *node, __int16 botEntityNum, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeIsCurrentlyOccupied@@YAHPEBUpathnode_t@@FPEBUbot_score_parms_s@@@Z(node, botEntityNum, parms);
}

/*
==============
Bot_Score_NodeAerialTarget
==============
*/

int __fastcall Bot_Score_NodeAerialTarget(int object, const bot_score_parms_s *parms)
{
  return ?Bot_Score_NodeAerialTarget@@YAHHPEBUbot_score_parms_s@@@Z(object, parms);
}

/*
==============
Bot_Score_Prep_Normal
==============
*/

void __fastcall Bot_Score_Prep_Normal(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  ?Bot_Score_Prep_Normal@@YAXPEAUbot_score_item_s@@HPEAUbot_score_parms_s@@@Z(items, itemCount, parms);
}

/*
==============
Bot_Score_Factor_HighTrafficViewDir
==============
*/

int __fastcall Bot_Score_Factor_HighTrafficViewDir(const pathnode_t *node, const vec3_t *lookDir)
{
  return ?Bot_Score_Factor_HighTrafficViewDir@@YAHPEBUpathnode_t@@AEBTvec3_t@@@Z(node, lookDir);
}

/*
==============
Bot_Score_Dbg_TargetNode
==============
*/
void Bot_Score_Dbg_TargetNode(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  float v4; 
  __int64 entityNum; 
  const char *v6; 
  vec3_t xyz; 

  if ( parms->vector1.v[0] != 0.0 || parms->vector1.v[1] != 0.0 || parms->vector1.v[2] != 0.0 )
  {
    G_DebugBox(&parms->vector1, &targetBox, 0.0, &colorBlue, 1, 1);
    v4 = parms->vector1.v[1];
    entityNum = (unsigned int)parms->entityNum;
    xyz.v[0] = parms->vector1.v[0];
    xyz.v[1] = v4;
    xyz.v[2] = (float)(144.0 - (float)((float)(int)entityNum * 8.0)) + parms->vector1.v[2];
    v6 = j_va("client %i", entityNum);
    SV_BotDebugString(NULL, &xyz, &colorBlue, 1.0, v6, 0);
  }
  if ( parms->vector2.v[0] != 0.0 || parms->vector2.v[1] != 0.0 || parms->vector2.v[2] != 0.0 )
    G_DebugBox(&parms->vector2, &targetBox, 0.0, &colorRed, 1, 1);
}

/*
==============
Bot_Score_Dbg_NodeTrap
==============
*/
void Bot_Score_Dbg_NodeTrap(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  int integer1; 
  pathnode_t *v5; 
  pathnode_t *v6; 
  __int64 entityNum; 
  const char *v8; 
  __int64 v9; 
  const char *v10; 
  vec3_t xyz; 
  vec3_t pos; 
  vec3_t origin; 

  integer1 = parms->integer1;
  if ( integer1 != 0xFFFF && parms->integer2 != 0xFFFF && Path_NodeValid(integer1) && Path_NodeValid(parms->integer2) )
  {
    v5 = Path_ConvertIndexToNode(parms->integer1);
    v6 = Path_ConvertIndexToNode(parms->integer2);
    pathnode_t::GetPos(v5, &pos);
    pathnode_t::GetPos(v6, &origin);
    G_DebugBox(&pos, &targetBox_0, 0.0, &colorBlue, 1, 1);
    entityNum = (unsigned int)parms->entityNum;
    xyz.v[0] = pos.v[0];
    xyz.v[1] = pos.v[1];
    xyz.v[2] = (float)(144.0 - (float)((float)(int)entityNum * 8.0)) + pos.v[2];
    v8 = j_va("client %i", entityNum);
    SV_BotDebugString(NULL, &xyz, &colorBlue, 1.0, v8, 0);
    G_DebugBox(&origin, &targetBox_0, 0.0, &colorGreen, 1, 1);
    v9 = (unsigned int)parms->entityNum;
    xyz.v[0] = origin.v[0];
    xyz.v[1] = origin.v[1];
    xyz.v[2] = (float)(144.0 - (float)((float)(int)v9 * 8.0)) + origin.v[2];
    v10 = j_va("client %i", v9);
    SV_BotDebugString(NULL, &xyz, &colorGreen, 1.0, v10, 0);
  }
}

/*
==============
Bot_Score_NodeCapture
==============
*/
__int64 Bot_Score_NodeCapture(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  const pathnode_t *v4; 
  const pathnode_t *v5; 
  int flags; 
  int integer1; 
  int StopGoalStance; 
  unsigned __int16 NearestNode; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v12; 
  int v13; 
  bot_score_type_t v14; 
  int v15; 
  int v16; 
  int v17; 
  bot_score_type_t v18; 
  int v19; 
  int v20; 
  int v21; 
  bot_score_type_t v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  __int16 v27; 
  bot_score_type_t v28; 
  int v29; 
  int v30; 
  __int16 v31; 
  bot_score_type_t v32; 
  int v33; 
  int v34; 
  __int16 v35; 
  bot_score_type_t v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  __int16 v41; 
  bot_score_type_t v42; 
  int v43; 
  int v44; 
  int v45; 
  __int16 v46; 
  bot_score_type_t v47; 
  int v48; 
  int v49; 
  int v50; 
  __int16 v51; 
  bot_score_type_t v52; 
  int v53; 
  int v54; 
  pathnode_t *lookAtNode; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 828, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v4 = Path_ConvertIndexToNode(v3);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 831, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v5 = NULL;
  flags = parms->flags;
  lookAtNode = NULL;
  if ( Bot_Score_NodeShouldIgnore(v4, parms->entityNum, parms) || Bot_Score_NodeIsDangerous(v4, parms->entityNum, 32.0) )
    return 0i64;
  if ( parms->vector1.v[0] != 0.0 || parms->vector1.v[1] != 0.0 || parms->vector1.v[2] != 0.0 )
  {
    integer1 = parms->integer1;
    if ( integer1 == 0xFFFF )
      return 0i64;
    v5 = Path_ConvertIndexToNode(integer1);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 858, ASSERT_TYPE_ASSERT, "( nodeCenterOfCaptureZone )", (const char *)&queryFormat, "nodeCenterOfCaptureZone") )
      __debugbreak();
    StopGoalStance = Bot_GetStopGoalStance(v4);
    if ( !Path_NodesVisibleAreaNoPeek(v5, v4) || !Path_NodeExposedToPoint(v4, &parms->vector1, StopGoalStance) || (flags & 0x10) != 0 && !Path_NodesVisibleNoPeek(v5, v4) )
      return 0i64;
  }
  if ( parms->vector2.v[0] != 0.0 || parms->vector2.v[1] != 0.0 || parms->vector2.v[2] != 0.0 )
  {
    NearestNode = Bot_Score_GetNearestNode(parms, &parms->vector2);
    lookAtNode = Path_ConvertIndexToNode(NearestNode);
    if ( !lookAtNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 875, ASSERT_TYPE_ASSERT, "( nodeToFace )", (const char *)&queryFormat, "nodeToFace") )
      __debugbreak();
  }
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v12 = Bot_Score_Factor_ProneCover360(v4);
  v13 = BotScoreDebugFactor(0, 1.0, v12, scoreType, entityNum);
  LOWORD(scoreType) = parms->entityNum;
  v14 = parms->scoreType;
  v15 = v13;
  v16 = Bot_Score_Factor_NoTraffic360(v4);
  v17 = BotScoreDebugFactor(1, 1.0, v16, v14, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v18 = parms->scoreType;
  v19 = v17 + v15;
  v20 = Bot_Score_Factor_AwayFromAlliedPlayers(v4, parms->entityNum);
  v21 = BotScoreDebugFactor(2, 2.0, v20, v18, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v22 = parms->scoreType;
  v23 = v21 + v19;
  v24 = Bot_Score_Factor_NotRecentlyUsed(v4, parms);
  v25 = BotScoreDebugFactor(3, 0.69999999, v24, v22, scoreType) + v23;
  v26 = 5;
  if ( v5 )
  {
    v27 = parms->entityNum;
    v28 = parms->scoreType;
    v29 = Bot_Score_Factor_VisibilityToNode(v4, v5);
    v30 = BotScoreDebugFactor(5, 2.0, v29, v28, v27) + v25;
    v25 = Bot_Score_Factor_AwayFromCenterPointHelper(v4, parms, 6, 0.30000001) + v30;
    v26 = 7;
  }
  if ( lookAtNode )
  {
    v31 = parms->entityNum;
    v32 = parms->scoreType;
    v33 = Bot_Score_Factor_VisibilityToNode(v4, lookAtNode);
    v34 = BotScoreDebugFactor(v26, 2.0, v33, v32, v31);
    v35 = parms->entityNum;
    v36 = parms->scoreType;
    v37 = v34 + v25;
    v38 = v26 + 1;
    v39 = Bot_Score_Factor_NoTrafficRearFromDir(v4, &parms->vector2);
    v40 = BotScoreDebugFactor(v38, 1.0, v39, v36, v35);
    v41 = parms->entityNum;
    v42 = parms->scoreType;
    v43 = v40 + v37;
    v44 = Bot_Score_Factor_CoverRearFromDir(v4, &parms->vector2);
    v45 = BotScoreDebugFactor(v38 + 1, 1.0, v44, v42, v41);
    v46 = parms->entityNum;
    v47 = parms->scoreType;
    v48 = v45 + v43;
    v38 += 2;
    v49 = Bot_Score_Factor_ProneCoverFacingDir(v4, &parms->vector2);
    v50 = BotScoreDebugFactor(v38, 1.0, v49, v47, v46);
    v51 = parms->entityNum;
    v52 = parms->scoreType;
    v53 = v50 + v48;
    v54 = Bot_Score_Factor_AwayFromPoint(v4, &parms->vector2, 1000);
    v25 = BotScoreDebugFactor(v38 + 1, 0.69999999, v54, v52, v51) + v53;
    v26 = v38 + 2;
  }
  return (unsigned int)(v25 + Bot_Score_Factor_HideFromAerialEnemiesHelper(v4, parms, v26));
}

/*
==============
Bot_Score_NodeProtect
==============
*/
__int64 Bot_Score_NodeProtect(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  const pathnode_t *v4; 
  int flags; 
  const pathnode_t *v6; 
  int StopGoalStance; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v10; 
  int v11; 
  bot_score_type_t v12; 
  int v13; 
  int v14; 
  int v15; 
  bot_score_type_t v16; 
  int v17; 
  int v18; 
  int v19; 
  bot_score_type_t v20; 
  int v21; 
  int v22; 
  int v23; 
  bot_score_type_t v24; 
  int v25; 
  int v26; 
  int v27; 
  bot_score_type_t v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  bot_score_type_t v34; 
  int v35; 
  int v36; 
  bot_score_type_t v37; 
  int v38; 
  int v39; 
  int v40; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 924, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v4 = Path_ConvertIndexToNode(v3);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 927, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  flags = parms->flags;
  if ( parms->integer1 == 0xFFFF || Bot_Score_NodeWasRecentlyUsed(v4, parms, 5.0) || Path_NodeExposureGetTraffic(v4) )
    return 0i64;
  v6 = Path_ConvertIndexToNode(parms->integer1);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 946, ASSERT_TYPE_ASSERT, "( nodeNearestPoint )", (const char *)&queryFormat, "nodeNearestPoint") )
    __debugbreak();
  if ( !Path_NodesVisibleAreaNoPeek(v6, v4) )
    return 0i64;
  StopGoalStance = Bot_GetStopGoalStance(v4);
  if ( !Path_NodeExposedToPoint(v4, &parms->vector1, StopGoalStance) || Bot_Score_NodeShouldIgnore(v4, parms->entityNum, parms) || Bot_Score_NodeIsDangerous(v4, parms->entityNum, 500.0) || Bot_Score_NodeIsNearAllySentient(v4, parms->entityNum, 100.0) || (flags & 0x10) != 0 && !Path_NodesVisibleNoPeek(v6, v4) )
    return 0i64;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v10 = Bot_Score_Factor_CoverRearFromPoint(v4, &parms->vector1);
  v11 = BotScoreDebugFactor(0, 1.0, v10, scoreType, entityNum);
  LOWORD(scoreType) = parms->entityNum;
  v12 = parms->scoreType;
  v13 = v11;
  v14 = Bot_Score_Factor_ProneCoverFacingPoint(v4, &parms->vector1);
  v15 = BotScoreDebugFactor(1, 0.5, v14, v12, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v16 = parms->scoreType;
  v17 = v15 + v13;
  v18 = Bot_Score_Factor_ProneCover360(v4);
  v19 = BotScoreDebugFactor(2, 0.5, v18, v16, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v20 = parms->scoreType;
  v21 = v19 + v17;
  v22 = Bot_Score_Factor_IdealRangeWeapon(v4, parms->entityNum, &parms->vector1, 0.0);
  v23 = BotScoreDebugFactor(3, 1.2, v22, v20, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v24 = parms->scoreType;
  v25 = v23 + v21;
  v26 = Bot_Score_Factor_NoTrafficRearFromPoint(v4, &parms->vector1);
  v27 = BotScoreDebugFactor(4, 2.0, v26, v24, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v28 = parms->scoreType;
  v29 = v27 + v25;
  v30 = Bot_Score_Factor_VisibilityToNode(v4, v6);
  v31 = BotScoreDebugFactor(5, 2.0, v30, v28, scoreType) + v29;
  v32 = Bot_Score_Factor_AwayFromCenterPointHelper(v4, parms, 6, 1.2);
  LOWORD(scoreType) = parms->entityNum;
  v33 = v32 + v31;
  v34 = parms->scoreType;
  v35 = Bot_Score_Factor_AwayFromAlliedPlayers(v4, parms->entityNum);
  v36 = BotScoreDebugFactor(7, 1.0, v35, v34, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v37 = parms->scoreType;
  v38 = v36 + v33;
  v39 = Bot_Score_Factor_NotRecentlyUsed(v4, parms);
  v40 = BotScoreDebugFactor(8, 1.0, v39, v37, scoreType) + v38;
  return (unsigned int)(v40 + Bot_Score_Factor_HideFromAerialEnemiesHelper(v4, parms, 10));
}

/*
==============
Bot_Score_NodeGrenade_From
==============
*/
__int64 Bot_Score_NodeGrenade_From(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  gentity_s *v5; 
  const pathnode_t *v6; 
  const pathnode_t *v7; 
  const pathnode_t *v8; 
  unsigned int v9; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v12; 
  int v13; 
  bot_score_type_t v14; 
  int v15; 
  int v16; 
  int v17; 
  bot_score_type_t v18; 
  int v19; 
  int v20; 
  __int64 v21; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 997, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v21) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 998, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v21, level.num_entities) )
      __debugbreak();
  }
  if ( parms->integer1 == 0xFFFF )
    return 0i64;
  v5 = &level.gentities[parms->entityNum];
  if ( !v5->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1008, ASSERT_TYPE_ASSERT, "( entity->sentient )", (const char *)&queryFormat, "entity->sentient") )
    __debugbreak();
  v6 = Path_ConvertIndexToNode(v3);
  v7 = Path_ConvertIndexToNode(parms->integer1);
  v8 = Sentient_NearestNode(v5->sentient);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1013, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1014, ASSERT_TYPE_ASSERT, "( nodeNearestPoint )", (const char *)&queryFormat, "nodeNearestPoint") )
    __debugbreak();
  v9 = 0;
  if ( Path_NodeExposedToPoint(v6, &parms->vector1, 7) && Path_NodesVisibleNoPeek(v7, v6) && (!v8 || Path_NodesVisibleNoPeek(v6, v8)) )
  {
    entityNum = parms->entityNum;
    scoreType = parms->scoreType;
    v12 = Bot_Score_Factor_CloseToPoint(v6, &v5->r.currentOrigin, 1000);
    v13 = BotScoreDebugFactor(0, 1.0, v12, scoreType, entityNum);
    LOWORD(scoreType) = parms->entityNum;
    v14 = parms->scoreType;
    v15 = v13;
    v16 = Bot_Score_Factor_IdealRange(v6, &parms->vector1, 550.0, 550.0, 2.0);
    v17 = BotScoreDebugFactor(1, 1.0, v16, v14, scoreType);
    LOWORD(scoreType) = parms->entityNum;
    v18 = parms->scoreType;
    v19 = v17 + v15;
    v20 = Bot_Score_Factor_VisibilityToNode(v6, v7);
    return (unsigned int)(BotScoreDebugFactor(2, 0.40000001, v20, v18, scoreType) + v19);
  }
  return v9;
}

/*
==============
Bot_Score_NodeGrenade_Target
==============
*/
__int64 Bot_Score_NodeGrenade_Target(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  gentity_s *v5; 
  pathnode_t *v6; 
  const pathnode_t *v7; 
  const pathnode_t *v8; 
  unsigned int v9; 
  float *v; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  float v13; 
  double v14; 
  int RawMax; 
  int v16; 
  __int16 v17; 
  bot_score_type_t v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  vec3_t pos; 
  vec3_t v23; 
  vec2_t vec; 
  float v25; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1045, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v21) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1046, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v21, level.num_entities) )
      __debugbreak();
  }
  if ( parms->integer1 == 0xFFFF )
    return 0i64;
  v5 = &level.gentities[parms->entityNum];
  if ( !v5->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1056, ASSERT_TYPE_ASSERT, "( entity->sentient )", (const char *)&queryFormat, "entity->sentient") )
    __debugbreak();
  v6 = Path_ConvertIndexToNode(v3);
  v7 = Path_ConvertIndexToNode(parms->integer1);
  v8 = Sentient_NearestNode(v5->sentient);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1061, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1062, ASSERT_TYPE_ASSERT, "( nodeNearestPoint )", (const char *)&queryFormat, "nodeNearestPoint") )
    __debugbreak();
  v9 = 0;
  pathnode_t::GetPos(v6, &pos);
  v = v5->r.currentOrigin.v;
  if ( (float)((float)((float)((float)(v5->r.currentOrigin.v[1] - pos.v[1]) * (float)(v5->r.currentOrigin.v[1] - pos.v[1])) + (float)((float)(v5->r.currentOrigin.v[0] - pos.v[0]) * (float)(v5->r.currentOrigin.v[0] - pos.v[0]))) + (float)((float)(v5->r.currentOrigin.v[2] - pos.v[2]) * (float)(v5->r.currentOrigin.v[2] - pos.v[2]))) > 90000.0 && Path_NodeExposedToPoint(v6, &parms->vector1, 7) && Path_NodesVisibleNoPeek(v6, v7) && (!v8 || Path_NodesVisibleNoPeek(v6, v8)) && Path_NodeExposedToPoint(v6, &v5->r.currentOrigin, 1) )
  {
    entityNum = parms->entityNum;
    scoreType = parms->scoreType;
    pathnode_t::GetPos(v6, &v23);
    v13 = v23.v[1] - v[1];
    vec.v[0] = v23.v[0] - *v;
    v25 = v23.v[2] - v[2];
    vec.v[1] = v13;
    v14 = vectoyaw(&vec);
    RawMax = Path_NodeExposureGetRawMax(v6, *(float *)&v14, 1);
    if ( RawMax > 10 )
      RawMax = 10;
    if ( RawMax < 0 )
      RawMax = 0;
    v16 = BotScoreDebugFactor(0, 0.5, 10 * (10 - RawMax), scoreType, entityNum);
    v17 = parms->entityNum;
    v18 = parms->scoreType;
    v19 = v16;
    v20 = Bot_Score_Factor_CloseToPoint(v6, &parms->vector1, 1000);
    return (unsigned int)(BotScoreDebugFactor(1, 1.0, v20, v18, v17) + v19);
  }
  return v9;
}

/*
==============
Bot_Score_NodeAmbush
==============
*/
__int64 Bot_Score_NodeAmbush(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  const pathnode_t *v4; 
  const pathnode_t *v5; 
  int StopGoalStance; 
  unsigned int v7; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v10; 
  int v11; 
  bot_score_type_t v12; 
  int v13; 
  int v14; 
  int v15; 
  bot_score_type_t v16; 
  int v17; 
  int v18; 
  int v19; 
  bot_score_type_t v20; 
  int v21; 
  int v22; 
  int v23; 
  bot_score_type_t v24; 
  int v25; 
  int v26; 
  int v27; 
  bot_score_type_t v28; 
  int v29; 
  int v30; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 369, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( parms->integer1 == 0xFFFF )
    return 0i64;
  v4 = Path_ConvertIndexToNode(v3);
  v5 = Path_ConvertIndexToNode(parms->integer1);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 379, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 380, ASSERT_TYPE_ASSERT, "( nodeNearestPoint )", (const char *)&queryFormat, "nodeNearestPoint") )
    __debugbreak();
  StopGoalStance = Bot_GetStopGoalStance(v4);
  if ( Bot_Score_NodeShouldIgnore(v4, parms->entityNum, parms) || Bot_Score_NodeIsDangerous(v4, parms->entityNum, 500.0) || Path_NodeExposureGetTraffic(v4) || Bot_Score_NodeIsNearAllySentient(v4, parms->entityNum, 100.0) )
    return 0i64;
  v7 = 0;
  if ( v4 != v5 && Path_NodesVisibleNoPeek(v5, v4) )
  {
    if ( Path_NodeExposedToPoint(v4, &parms->vector1, StopGoalStance) )
    {
      entityNum = parms->entityNum;
      scoreType = parms->scoreType;
      v10 = Bot_Score_Factor_CoverRearFromPoint(v4, &parms->vector1);
      v11 = BotScoreDebugFactor(0, 1.5, v10, scoreType, entityNum);
      LOWORD(scoreType) = parms->entityNum;
      v12 = parms->scoreType;
      v13 = v11;
      v14 = Bot_Score_Factor_ProneCover360(v4);
      v15 = BotScoreDebugFactor(1, 1.5, v14, v12, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v16 = parms->scoreType;
      v17 = v15 + v13;
      v18 = Bot_Score_Factor_IdealRangeWeapon(v4, parms->entityNum, &parms->vector1, 0.0);
      v19 = BotScoreDebugFactor(2, 0.75, v18, v16, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v20 = parms->scoreType;
      v21 = v19 + v17;
      v22 = Bot_Score_Factor_NoTrafficRearFromPoint(v4, &parms->vector1);
      v23 = BotScoreDebugFactor(3, 1.0, v22, v20, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v24 = parms->scoreType;
      v25 = v23 + v21;
      v26 = Bot_Score_Factor_ProneCoverFacingPoint(v4, &parms->vector1);
      v27 = BotScoreDebugFactor(4, 1.0, v26, v24, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v28 = parms->scoreType;
      v29 = v27 + v25;
      v30 = Bot_Score_Factor_NotRecentlyUsed(v4, parms);
      return (unsigned int)(BotScoreDebugFactor(5, 1.0, v30, v28, scoreType) + v29);
    }
  }
  return v7;
}

/*
==============
Bot_Score_NodeSentry
==============
*/
__int64 Bot_Score_NodeSentry(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  pathnode_t *v4; 
  const pathnode_t *v5; 
  int StopGoalStance; 
  unsigned int v7; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v10; 
  int v11; 
  bot_score_type_t v12; 
  int v13; 
  int v14; 
  int v15; 
  bot_score_type_t v16; 
  int v17; 
  int v18; 
  vec3_t pos; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 427, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( parms->integer1 == 0xFFFF )
    return 0i64;
  v4 = Path_ConvertIndexToNode(v3);
  v5 = Path_ConvertIndexToNode(parms->integer1);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 437, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 438, ASSERT_TYPE_ASSERT, "( nodeNearestPoint )", (const char *)&queryFormat, "nodeNearestPoint") )
    __debugbreak();
  StopGoalStance = Bot_GetStopGoalStance(v4);
  if ( Bot_Score_NodeShouldIgnore(v4, parms->entityNum, parms) || Bot_Score_NodeIsDangerous(v4, parms->entityNum, 500.0) || Bot_Score_NodeIsNearAllySentient(v4, parms->entityNum, 100.0) )
    return 0i64;
  v7 = 0;
  pathnode_t::GetPos(v4, &pos);
  if ( v4 != v5 && Path_NodesVisibleNoPeek(v5, v4) )
  {
    if ( Path_NodeExposedToPoint(v4, &parms->vector1, StopGoalStance) )
    {
      entityNum = parms->entityNum;
      scoreType = parms->scoreType;
      v10 = Bot_Score_Factor_CoverRearFromPoint(v4, &parms->vector1);
      v11 = BotScoreDebugFactor(0, 2.0, v10, scoreType, entityNum);
      LOWORD(scoreType) = parms->entityNum;
      v12 = parms->scoreType;
      v13 = v11;
      v14 = Bot_Score_Factor_NoTrafficRearFromPoint(v4, &parms->vector1);
      v15 = BotScoreDebugFactor(1, 1.0, v14, v12, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v16 = parms->scoreType;
      v17 = v15 + v13;
      v18 = Bot_Score_Factor_IdealRange(v4, &parms->vector1, 800.0, 1300.0, 0.5);
      return (unsigned int)(BotScoreDebugFactor(2, 1.0, v18, v16, scoreType) + v17);
    }
  }
  return v7;
}

/*
==============
Bot_Score_NodeTraffic
==============
*/
int Bot_Score_NodeTraffic(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  const pathnode_t *v4; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 482, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v4 = Path_ConvertIndexToNode(v3);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 485, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  Path_NodeExposureGetTraffic(v4);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return BotScoreDebugFactor(0, 1.0, (int)*(float *)&_XMM1, scoreType, entityNum);
}

/*
==============
Bot_Score_NodeExposed
==============
*/
int Bot_Score_NodeExposed(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  const pathnode_t *v4; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 502, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v4 = Path_ConvertIndexToNode(v3);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 505, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  Path_NodeExposureGeneral(v4, 4);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return BotScoreDebugFactor(0, 1.0, (int)*(float *)&_XMM1, scoreType, entityNum);
}

/*
==============
Bot_Score_NodeHide
==============
*/
int Bot_Score_NodeHide(int object, const bot_score_parms_s *parms)
{
  return Bot_Score_NodeHideCommon(object, parms, 1);
}

/*
==============
Bot_Score_NodeHideAnywhere
==============
*/
int Bot_Score_NodeHideAnywhere(int object, const bot_score_parms_s *parms)
{
  return Bot_Score_NodeHideCommon(object, parms, 0);
}

/*
==============
Bot_Score_NodeHideFrom
==============
*/
__int64 Bot_Score_NodeHideFrom(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  __int64 entityNum; 
  pathnode_t *v5; 
  pathnode_t *v6; 
  gentity_s *v7; 
  const pathnode_t *v8; 
  __int16 v9; 
  bot_score_type_t scoreType; 
  __int128 v11; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  int v22; 
  int v23; 
  int v24; 
  __int16 v25; 
  bot_score_type_t v26; 
  int v27; 
  double v28; 
  int v31; 
  __int16 v32; 
  bot_score_type_t v33; 
  int v34; 
  int v35; 
  int v36; 
  __int16 v37; 
  bot_score_type_t v38; 
  int v39; 
  int v40; 
  __int64 v42; 
  __int64 v43; 
  vec3_t point; 
  vec3_t pos; 
  vec2_t vec; 
  float v47; 
  vec3_t eyeForward; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 598, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v42) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 599, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v42, level.num_entities) )
      __debugbreak();
  }
  entityNum = parms->entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v43) = 2048;
    LODWORD(v42) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v42, v43) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entityNum].r.isInUse != g_entityIsInUse[entityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 600, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( parms->entityNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( parms->entityNum )") )
    __debugbreak();
  if ( parms->integer2 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 601, ASSERT_TYPE_ASSERT, "( parms->integer2 > 0 )", (const char *)&queryFormat, "parms->integer2 > 0") )
    __debugbreak();
  v5 = Path_ConvertIndexToNode(v3);
  v6 = Path_ConvertIndexToNode(parms->integer1);
  v7 = &level.gentities[parms->entityNum];
  v8 = Sentient_NearestNode(v7->sentient);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 608, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 609, ASSERT_TYPE_ASSERT, "( hideFromNode )", (const char *)&queryFormat, "hideFromNode") )
    __debugbreak();
  pathnode_t::GetPos(v5, &pos);
  pathnode_t::GetPos(v6, &point);
  if ( Bot_Score_NodeShouldIgnore(v5, parms->entityNum, parms) || Bot_Score_NodeWasRecentlyUsed(v5, parms, 10.0) || Bot_Score_NodeIsDangerous(v5, parms->entityNum, 500.0) || (parms->flags & 0x20) != 0 && (Bot_Score_NodeIgnoreTraversalIslandMismatch(v5, parms) || v8 && !Path_NodesVisibleNoPeek(v5, v8)) || Path_NodeExposedToPoint(v5, &point, 4) )
    return 0i64;
  v9 = parms->entityNum;
  scoreType = parms->scoreType;
  v11 = LODWORD(point.v[1]);
  *(float *)&v11 = fsqrt((float)((float)((float)(point.v[1] - pos.v[1]) * (float)(point.v[1] - pos.v[1])) + (float)((float)(point.v[0] - pos.v[0]) * (float)(point.v[0] - pos.v[0]))) + (float)((float)(point.v[2] - pos.v[2]) * (float)(point.v[2] - pos.v[2])));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  vec.v[0] = (float)(point.v[0] - pos.v[0]) * (float)(1.0 / *(float *)&_XMM0);
  v47 = (float)(point.v[2] - pos.v[2]) * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = (float)(point.v[1] - pos.v[1]) * (float)(1.0 / *(float *)&_XMM0);
  v15 = v7->r.currentOrigin.v[0] - point.v[0];
  v16 = v7->r.currentOrigin.v[2] - point.v[2];
  v18 = LODWORD(v7->r.currentOrigin.v[1]);
  v17 = v7->r.currentOrigin.v[1] - point.v[1];
  *(float *)&v18 = fsqrt((float)((float)(v17 * v17) + (float)(v15 * v15)) + (float)(v16 * v16));
  _XMM1 = v18;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  eyeForward.v[0] = v15 * (float)(1.0 / *(float *)&_XMM0);
  eyeForward.v[2] = v16 * (float)(1.0 / *(float *)&_XMM0);
  eyeForward.v[1] = v17 * (float)(1.0 / *(float *)&_XMM0);
  v22 = Path_NodesVisibleNoPeek(v5, v6);
  v23 = 100;
  if ( v22 )
    v23 = 0;
  v24 = BotScoreDebugFactor(0, 1.0, v23, scoreType, v9);
  v25 = parms->entityNum;
  v26 = parms->scoreType;
  v27 = v24;
  v28 = vectoyaw(&vec);
  Path_NodeExposureGetRawArcSum(v5, *(float *)&v28, 25.0, 4);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  v31 = BotScoreDebugFactor(1, 1.0, (int)*(float *)&_XMM1, v26, v25);
  v32 = parms->entityNum;
  v33 = parms->scoreType;
  v34 = v31 + v27;
  v35 = Bot_Score_Factor_CloseToPoint(v5, &v7->r.currentOrigin, parms->integer2);
  v36 = BotScoreDebugFactor(2, 1.0, v35, v33, v32);
  v37 = parms->entityNum;
  v38 = parms->scoreType;
  v39 = v36 + v34;
  v40 = Bot_Score_Factor_InFrontOf(v5, &v7->r.currentOrigin, &eyeForward);
  return (unsigned int)(v39 + BotScoreDebugFactor(3, 1.0, v40, v38, v37));
}

/*
==============
Bot_Score_NodeCombat
==============
*/
__int64 Bot_Score_NodeCombat(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  __int64 entityNum; 
  pathnode_t *v5; 
  pathnode_t *v6; 
  gentity_s *v7; 
  bot_data_t *EntityData; 
  gentity_s *v9; 
  const sentient_info_t *SentientInfo; 
  __int128 v11; 
  __int16 v15; 
  bot_score_type_t scoreType; 
  int v17; 
  int v18; 
  __int16 v19; 
  bot_score_type_t v20; 
  double v21; 
  int v24; 
  __int16 v25; 
  bot_score_type_t v26; 
  int v27; 
  int v28; 
  __int64 v30; 
  __int64 v31; 
  vec3_t outLastKnownPos; 
  vec3_t pos; 
  vec2_t vec; 
  float v35; 
  vec3_t forward; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 666, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v30) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 667, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v30, level.num_entities) )
      __debugbreak();
  }
  entityNum = parms->entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v31) = 2048;
    LODWORD(v30) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v30, v31) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entityNum].r.isInUse != g_entityIsInUse[entityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 668, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( parms->entityNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( parms->entityNum )") )
    __debugbreak();
  if ( parms->integer2 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 669, ASSERT_TYPE_ASSERT, "( parms->integer2 > 0 )", (const char *)&queryFormat, "parms->integer2 > 0") )
    __debugbreak();
  v5 = Path_ConvertIndexToNode(v3);
  v6 = Path_ConvertIndexToNode(parms->integer1);
  v7 = &level.gentities[parms->entityNum];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 675, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 676, ASSERT_TYPE_ASSERT, "( enemyNode )", (const char *)&queryFormat, "enemyNode") )
    __debugbreak();
  pathnode_t::GetPos(v5, &pos);
  pathnode_t::GetPos(v6, &outLastKnownPos);
  EntityData = Bot_GetEntityData(v7);
  if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 695, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( EntHandle::isDefined(&EntityData->botInfo.sentient->targetEnt) )
  {
    if ( EntHandle::isDefined(&EntityData->botInfo.sentient->targetEnt) )
    {
      v9 = EntHandle::ent(&EntityData->botInfo.sentient->targetEnt);
      if ( v9 )
      {
LABEL_38:
        if ( !v9->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 700, ASSERT_TYPE_ASSERT, "( enemy->sentient )", (const char *)&queryFormat, "enemy->sentient") )
          __debugbreak();
        if ( !EntityData->botInfo.sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 701, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentient )", (const char *)&queryFormat, "botData->botInfo.sentient") )
          __debugbreak();
        SentientInfo = Sentient_GetSentientInfo(EntityData->botInfo.sentient, v9->sentient);
        if ( !SentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 703, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
          __debugbreak();
        SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos);
        goto LABEL_48;
      }
    }
    else
    {
      v9 = NULL;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 699, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
      __debugbreak();
    goto LABEL_38;
  }
LABEL_48:
  if ( Bot_Score_NodeShouldIgnore(v5, parms->entityNum, parms) )
    return 0i64;
  if ( Bot_Score_NodeWasRecentlyUsed(v5, parms, 10.0) )
    return 0i64;
  if ( Bot_Score_NodeIsDangerous(v5, parms->entityNum, 500.0) )
    return 0i64;
  if ( !Path_NodesVisibleNoPeek(v5, v6) )
    return 0i64;
  if ( Path_NodeExposedToPoint(v5, &outLastKnownPos, 4) )
    return 0i64;
  if ( Bot_Score_NodeIgnoreTraversalIslandMismatch(v5, parms) )
    return 0i64;
  v11 = LODWORD(outLastKnownPos.v[1]);
  *(float *)&v11 = fsqrt((float)((float)((float)(outLastKnownPos.v[1] - pos.v[1]) * (float)(outLastKnownPos.v[1] - pos.v[1])) + (float)((float)(outLastKnownPos.v[0] - pos.v[0]) * (float)(outLastKnownPos.v[0] - pos.v[0]))) + (float)((float)(outLastKnownPos.v[2] - pos.v[2]) * (float)(outLastKnownPos.v[2] - pos.v[2])));
  _XMM1 = v11;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm7, xmm0
  }
  vec.v[0] = (float)(outLastKnownPos.v[0] - pos.v[0]) * (float)(1.0 / *(float *)&_XMM0);
  v35 = (float)(outLastKnownPos.v[2] - pos.v[2]) * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = (float)(outLastKnownPos.v[1] - pos.v[1]) * (float)(1.0 / *(float *)&_XMM0);
  AngleVectors(&v7->r.currentAngles, &forward, NULL, NULL);
  v15 = parms->entityNum;
  scoreType = parms->scoreType;
  v17 = Bot_Score_Factor_IdealRangeWeapon(v5, parms->entityNum, &outLastKnownPos, 256.0);
  v18 = BotScoreDebugFactor(0, 1.0, v17, scoreType, v15);
  if ( !v18 )
    return 0i64;
  v19 = parms->entityNum;
  v20 = parms->scoreType;
  v21 = vectoyaw(&vec);
  Path_NodeExposureGetRawArcSum(v5, *(float *)&v21, 25.0, 4);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  v24 = BotScoreDebugFactor(1, 1.0, (int)*(float *)&_XMM1, v20, v19);
  v25 = parms->entityNum;
  v26 = parms->scoreType;
  v27 = v24 + v18;
  v28 = Bot_Score_Factor_CloseToPoint(v5, &v7->r.currentOrigin, parms->integer2);
  return (unsigned int)(v27 + BotScoreDebugFactor(2, 1.0, v28, v26, v25));
}

/*
==============
Bot_Score_NodeCamp
==============
*/
__int64 Bot_Score_NodeCamp(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  const pathnode_t *v4; 
  unsigned int flags; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v12; 
  int v13; 
  int v14; 
  __int16 v15; 
  bot_score_type_t v16; 
  int v17; 
  int v18; 
  int v19; 
  __int16 v20; 
  bot_score_type_t v21; 
  int v22; 
  int v23; 
  int v24; 
  __int16 v25; 
  bot_score_type_t v26; 
  int v27; 
  int v28; 
  __int16 v29; 
  bot_score_type_t v30; 
  int v31; 
  int v32; 
  int v33; 
  __int16 v34; 
  bot_score_type_t v35; 
  int v36; 
  int v37; 
  int v38; 
  __int16 v39; 
  bot_score_type_t v40; 
  int v41; 
  int v42; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 752, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v4 = Path_ConvertIndexToNode(v3);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 755, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  flags = parms->flags;
  if ( Bot_Score_NodeShouldIgnore(v4, parms->entityNum, parms) )
    return 0i64;
  _XMM6 = LODWORD(FLOAT_100_0);
  _XMM0 = flags & 8;
  __asm
  {
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm2, xmm6, xmm2, xmm3; radius
  }
  if ( Bot_Score_NodeIsDangerous(v4, parms->entityNum, *(float *)&_XMM2) || (flags & 8) == 0 && Bot_Score_NodeWasRecentlyUsed(v4, parms, 10.0) )
    return 0i64;
  if ( Path_NodeExposureGetTraffic(v4) > 4 * ((flags >> 3) & 1) + 1 || Bot_Score_NodeIsNearAllySentient(v4, parms->entityNum, 100.0) )
    return 0i64;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v12 = Bot_Score_Factor_HighTrafficViewDir(v4, &parms->vector1);
  v13 = BotScoreDebugFactor(0, 2.0, v12, scoreType, entityNum);
  v14 = 20;
  if ( (flags & 8) != 0 )
    v14 = 8;
  if ( v13 < v14 )
    return 0i64;
  v15 = parms->entityNum;
  v16 = parms->scoreType;
  v17 = Bot_Score_Factor_CrouchSightFacingDir(v4, &parms->vector1);
  v18 = BotScoreDebugFactor(1, 1.0, v17, v16, v15);
  v19 = 50;
  if ( (flags & 8) != 0 )
    v19 = 20;
  if ( v18 < v19 )
    return 0i64;
  v20 = parms->entityNum;
  v21 = parms->scoreType;
  v22 = v18 + v13;
  v23 = Bot_Score_Factor_ConcealedRearFromDir(v4, &parms->vector1);
  v24 = BotScoreDebugFactor(2, 2.0, v23, v21, v20);
  if ( !v24 && (flags & 8) == 0 )
    return 0i64;
  v25 = parms->entityNum;
  v26 = parms->scoreType;
  v27 = Bot_Score_Factor_NoTrafficRearFromDir(v4, &parms->vector1);
  v28 = BotScoreDebugFactor(3, 1.0, v27, v26, v25);
  v29 = parms->entityNum;
  v30 = parms->scoreType;
  v31 = v24 + v28 + v22;
  v32 = Bot_Score_Factor_CoverRearFromDir(v4, &parms->vector1);
  v33 = BotScoreDebugFactor(4, 1.0, v32, v30, v29);
  v34 = parms->entityNum;
  v35 = parms->scoreType;
  v36 = v33 + v31;
  v37 = Bot_Score_Factor_ProneCoverFacingDir(v4, &parms->vector1);
  v38 = BotScoreDebugFactor(5, 1.0, v37, v35, v34);
  v39 = parms->entityNum;
  v40 = parms->scoreType;
  v41 = v38 + v36;
  v42 = Bot_Score_Factor_NotRecentlyUsed(v4, parms);
  return (unsigned int)(v41 + BotScoreDebugFactor(6, 1.0, v42, v40, v39));
}

/*
==============
Bot_Score_NodeTrap
==============
*/
__int64 Bot_Score_NodeTrap(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  pathnode_t *v4; 
  const pathnode_t *v5; 
  pathnode_t *v6; 
  double v7; 
  double RangeArcMax; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v11; 
  int v12; 
  bot_score_type_t v13; 
  int v14; 
  int v17; 
  bot_score_type_t v18; 
  int v19; 
  int v20; 
  vec2_t vec; 
  float v23; 
  vec3_t v24; 
  vec3_t pos; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1099, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v4 = Path_ConvertIndexToNode(v3);
  v5 = Path_ConvertIndexToNode(parms->integer1);
  v6 = Path_ConvertIndexToNode(parms->integer2);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1105, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1106, ASSERT_TYPE_ASSERT, "( ambush_node )", (const char *)&queryFormat, "ambush_node") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1107, ASSERT_TYPE_ASSERT, "( entrance_node )", (const char *)&queryFormat, "entrance_node") )
    __debugbreak();
  if ( v4 == v5 )
    return 0i64;
  if ( v4 == v6 )
    return 0i64;
  if ( Bot_Score_NodeShouldIgnore(v4, parms->entityNum, parms) )
    return 0i64;
  if ( Bot_Score_NodeWasRecentlyUsed(v4, parms, 10.0) )
    return 0i64;
  if ( Bot_Score_NodeIsNearAllySentient(v4, parms->entityNum, 100.0) )
    return 0i64;
  if ( Bot_Score_NodeIsDangerous(v4, parms->entityNum, 500.0) )
    return 0i64;
  pathnode_t::GetPos(v4, &pos);
  pathnode_t::GetPos(v6, &v24);
  vec.v[0] = v24.v[0] - pos.v[0];
  v23 = v24.v[2] - pos.v[2];
  vec.v[1] = v24.v[1] - pos.v[1];
  v7 = vectoyaw(&vec);
  RangeArcMax = Path_NodeExposureGetRangeArcMax(v4, *(float *)&v7, 0.0, 4);
  if ( (float)(*(float *)&RangeArcMax * *(float *)&RangeArcMax) < (float)((float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) + (float)(v23 * v23)) )
    return 0i64;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v11 = Bot_Score_Factor_ProneCover360(v4);
  v12 = BotScoreDebugFactor(0, 2.0, v11, scoreType, entityNum);
  LOWORD(scoreType) = parms->entityNum;
  v13 = parms->scoreType;
  v14 = v12;
  Path_NodeExposureGetTraffic(v4);
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  v17 = BotScoreDebugFactor(1, 1.0, (int)*(float *)&_XMM4, v13, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v18 = parms->scoreType;
  v19 = v17 + v14;
  v20 = Bot_Score_Factor_VisibilityToNode(v4, v5);
  return (unsigned int)(v19 + BotScoreDebugFactor(2, 1.0, v20, v18, scoreType));
}

/*
==============
Bot_Score_NodeAerialTarget
==============
*/
__int64 Bot_Score_NodeAerialTarget(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  pathnode_t *v4; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v7; 
  int v10; 
  __int16 v11; 
  bot_score_type_t v12; 
  int v13; 
  int IsExposedSky; 
  __int64 v15; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1153, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v4 = Path_ConvertIndexToNode(v3);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1156, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Bot_Score_NodeShouldIgnore(v4, parms->entityNum, parms) || Bot_Score_NodeIsDangerous(v4, parms->entityNum, 32.0) )
    return 0i64;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  Path_NodeExposureGeneral(v4, 1);
  v7 = 0;
  _XMM6 = 0i64;
  __asm { vroundss xmm3, xmm6, xmm2, 1 }
  v10 = BotScoreDebugFactor(0, 0.80000001, (int)*(float *)&_XMM3, scoreType, entityNum);
  v11 = parms->entityNum;
  v12 = parms->scoreType;
  v13 = v10;
  IsExposedSky = Path_IsExposedSky(v4);
  if ( v4->dynamic.wLinkCount > 0 )
  {
    v15 = 0i64;
    do
    {
      if ( Path_IsNodeIndexExposedSky(v4->constant.Links[v15].nodeNum) )
        ++IsExposedSky;
      ++v7;
      ++v15;
    }
    while ( v7 < v4->dynamic.wLinkCount );
  }
  __asm { vroundss xmm2, xmm6, xmm3, 1 }
  return (unsigned int)(v13 + BotScoreDebugFactor(0, 1.0, (int)*(float *)&_XMM2, v12, v11));
}

/*
==============
Bot_Score_NodeExposureVis
==============
*/
__int64 Bot_Score_NodeExposureVis(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v3; 
  const pathnode_t *v4; 
  unsigned int v5; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1185, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v4 = Path_ConvertIndexToNode(v3);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1188, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v5 = 0;
  if ( Path_NodeExposedToPoint(v4, &parms->vector1, parms->integer1) )
    return 100;
  return v5;
}

/*
==============
Bot_Score_Prep_Normal
==============
*/
void Bot_Score_Prep_Normal(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  unsigned int scoreType; 
  int v5; 
  unsigned __int16 NearestNode; 
  bool v7; 
  __int64 entityNum; 
  gentity_s *v9; 
  bitarray<224> *AllTeamFlags; 
  sentient_s *i; 
  bitarray<224> iTeamFlags; 

  scoreType = parms->scoreType;
  if ( scoreType <= 0xE )
  {
    v5 = 20992;
    if ( _bittest(&v5, scoreType) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1213, ASSERT_TYPE_ASSERT, "( (parms->scoreType != BOT_SCORE_NODE_COMBAT) && (parms->scoreType != BOT_SCORE_NODE_TRAP) && (parms->scoreType != BOT_SCORE_NODE_HIDE) )", (const char *)&queryFormat, "(parms->scoreType != BOT_SCORE_NODE_COMBAT) && (parms->scoreType != BOT_SCORE_NODE_TRAP) && (parms->scoreType != BOT_SCORE_NODE_HIDE)") )
        __debugbreak();
    }
  }
  NearestNode = Bot_Score_GetNearestNode(parms, &parms->vector1);
  v7 = SLOBYTE(parms->flags) >= 0;
  parms->integer1 = NearestNode;
  if ( !v7 )
  {
    entityNum = parms->entityNum;
    parms->integer2 = 2047;
    parms->integer3 = 2047;
    v9 = &level.gentities[entityNum];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1226, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
      __debugbreak();
    if ( !v9->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1227, ASSERT_TYPE_ASSERT, "( entity->sentient )", (const char *)&queryFormat, "entity->sentient") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
    else
      AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
    iTeamFlags = *AllTeamFlags;
    for ( i = Sentient_FirstSentient(&iTeamFlags); i; i = Sentient_NextSentient(i, &iTeamFlags) )
    {
      if ( Bot_IsCharacterActive(i->ent) && !AI_IsAlliedSentient(v9->sentient, i) && Sentient_IsAerial(i) )
      {
        if ( parms->integer2 == 2047 )
        {
          parms->integer2 = i->ent->s.number;
        }
        else if ( parms->integer3 == 2047 )
        {
          parms->integer3 = i->ent->s.number;
        }
      }
    }
  }
}

/*
==============
BotScoreDebugFactor
==============
*/
__int64 BotScoreDebugFactor(int index, float weight, int factor, bot_score_type_t type, __int16 entityNum)
{
  __int64 v5; 
  __int16 v6; 
  float v7; 
  __int64 v8; 
  const dvar_t *v9; 
  unsigned int v10; 
  const dvar_t **v11; 
  const dvar_t *v12; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  __int16 v18; 
  unsigned int v19; 
  bot_data_t *EntityData; 
  bot_debug_data_t *p_botDebugData; 
  bot_debug_score_t *v22; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  __int64 v39; 
  __int64 v40; 

  v5 = type;
  v6 = factor;
  v7 = weight;
  v8 = index;
  if ( dword_14E9320B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14E9320B0);
    if ( dword_14E9320B0 == -1 )
    {
      v24 = DVARFLT_bot_ScoreVal0;
      if ( !DVARFLT_bot_ScoreVal0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[0] = v24;
      v25 = DVARFLT_bot_ScoreVal1;
      if ( !DVARFLT_bot_ScoreVal1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[1] = v25;
      v26 = DVARFLT_bot_ScoreVal2;
      if ( !DVARFLT_bot_ScoreVal2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[2] = v26;
      v27 = DVARFLT_bot_ScoreVal3;
      if ( !DVARFLT_bot_ScoreVal3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[3] = v27;
      v28 = DVARFLT_bot_ScoreVal4;
      if ( !DVARFLT_bot_ScoreVal4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[4] = v28;
      v29 = DVARFLT_bot_ScoreVal5;
      if ( !DVARFLT_bot_ScoreVal5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[5] = v29;
      v30 = DVARFLT_bot_ScoreVal6;
      if ( !DVARFLT_bot_ScoreVal6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[6] = v30;
      v31 = DVARFLT_bot_ScoreVal7;
      if ( !DVARFLT_bot_ScoreVal7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[7] = v31;
      v32 = DVARFLT_bot_ScoreVal8;
      if ( !DVARFLT_bot_ScoreVal8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[8] = v32;
      v33 = DVARFLT_bot_ScoreVal9;
      if ( !DVARFLT_bot_ScoreVal9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[9] = v33;
      v34 = DVARFLT_bot_ScoreVal10;
      if ( !DVARFLT_bot_ScoreVal10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[10] = v34;
      v35 = DVARFLT_bot_ScoreVal11;
      if ( !DVARFLT_bot_ScoreVal11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[11] = v35;
      v36 = DVARFLT_bot_ScoreVal12;
      if ( !DVARFLT_bot_ScoreVal12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[12] = v36;
      v37 = DVARFLT_bot_ScoreVal13;
      if ( !DVARFLT_bot_ScoreVal13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[13] = v37;
      v38 = DVARFLT_bot_ScoreVal14;
      if ( !DVARFLT_bot_ScoreVal14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[14] = v38;
      j__Init_thread_footer(&dword_14E9320B0);
    }
  }
  v9 = DVARBOOL_bot_ScoreValReset;
  if ( !DVARBOOL_bot_ScoreValReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreValReset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v10 = 0;
    v11 = FACTOR_OFFSET_DVARS;
    do
    {
      Dvar_SetFloat_Internal(*v11, 0.0);
      ++v10;
      ++v11;
    }
    while ( v10 < 0xF );
    Dvar_SetBool_Internal(DVARBOOL_bot_ScoreValReset, 0);
  }
  v12 = DVARINT_bot_ScoreType;
  if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer == (_DWORD)v5 )
  {
    if ( (unsigned int)v8 >= 0xF )
    {
      LODWORD(v40) = 15;
      LODWORD(v39) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2735, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( FACTOR_OFFSET_DVARS ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( FACTOR_OFFSET_DVARS )\n\t%i not in [0, %i)", v39, v40) )
        __debugbreak();
    }
    v7 = weight + FACTOR_OFFSET_DVARS[v8]->current.value;
  }
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  if ( v7 < 0.0 || v7 >= 1000.0 )
    Com_Printf(16, "*** Invalid bot score factor weight: %f ***\n", v7);
  if ( (unsigned int)v5 >= 0x11 )
  {
    LODWORD(v40) = 17;
    LODWORD(v39) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2710, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( BOT_SCORE_TYPE_COUNT )", "type doesn't index BOT_SCORE_TYPE_COUNT\n\t%i not in [0, %i)", v39, v40) )
      __debugbreak();
  }
  if ( BOT_SCORE_FUNCS[v5].pathNodes )
  {
    v15 = DVARINT_bot_ScoreType;
    if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer == (_DWORD)v5 )
    {
      v16 = DVARINT_bot_ScoreClient;
      if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.integer == -1 )
      {
        v18 = entityNum;
        v19 = entityNum;
      }
      else
      {
        v17 = DVARINT_bot_ScoreClient;
        if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        v18 = entityNum;
        v19 = entityNum;
        if ( v17->current.integer != entityNum )
          return (unsigned int)(int)*(float *)&_XMM1;
      }
      if ( v19 >= level.num_entities )
      {
        LODWORD(v40) = level.num_entities;
        LODWORD(v39) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2756, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( level.num_entities )", "entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      EntityData = Bot_GetEntityData(&level.gentities[v18]);
      if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2758, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
        __debugbreak();
      p_botDebugData = &EntityData->botDebugData;
      if ( !p_botDebugData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2761, ASSERT_TYPE_ASSERT, "( botDebug )", (const char *)&queryFormat, "botDebug") )
        __debugbreak();
      if ( p_botDebugData->debugScoresCount >= 0x400u )
      {
        LODWORD(v40) = 1024;
        LODWORD(v39) = p_botDebugData->debugScoresCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2763, ASSERT_TYPE_ASSERT, "(unsigned)( botDebug->debugScoresCount ) < (unsigned)( 1024 )", "botDebug->debugScoresCount doesn't index BOT_SCORE_MAX\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      v22 = &p_botDebugData->debugScores[p_botDebugData->debugScoresCount];
      if ( (unsigned int)((int)(*((_DWORD *)v22 + 2) << 27) >> 27) >= 0xF )
      {
        LODWORD(v40) = 15;
        LODWORD(v39) = (int)(*((_DWORD *)v22 + 2) << 27) >> 27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2765, ASSERT_TYPE_ASSERT, "(unsigned)( debugScore->factorCount ) < (unsigned)( 15 )", "debugScore->factorCount doesn't index BOT_SCORE_FACTOR_MAX\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      if ( p_botDebugData->debugScoresSaving )
      {
        *(_WORD *)&v22->factors[(__int64)(int)(*((_DWORD *)v22 + 2) << 27) >> 27] = v6;
        *((_WORD *)&v22->factors[(__int64)(int)(*((_DWORD *)v22 + 2) << 27) >> 27] + 1) = (int)(float)(v7 * 65.535004);
        *((_DWORD *)v22 + 2) ^= ((unsigned __int8)*((_DWORD *)v22 + 2) ^ (unsigned __int8)(*((_DWORD *)v22 + 2) + 1)) & 0x1F;
      }
    }
  }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
BotScoreDebugNode
==============
*/
void BotScoreDebugNode(int score, unsigned __int16 nodeIndex, bot_score_type_t type, __int16 entityNum)
{
  __int64 v4; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  unsigned int v11; 
  bot_data_t *EntityData; 
  _DWORD *v13; 
  __int64 v14; 
  __int64 v15; 

  v4 = type;
  if ( (unsigned int)type >= BOT_SCORE_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2710, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( BOT_SCORE_TYPE_COUNT )", "type doesn't index BOT_SCORE_TYPE_COUNT\n\t%i not in [0, %i)", type, 17) )
    __debugbreak();
  if ( BOT_SCORE_FUNCS[v4].pathNodes )
  {
    v8 = DVARINT_bot_ScoreType;
    if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.integer == (_DWORD)v4 )
    {
      v9 = DVARINT_bot_ScoreClient;
      if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.integer == -1 )
      {
        v11 = entityNum;
LABEL_19:
        if ( v11 >= level.num_entities )
        {
          LODWORD(v15) = level.num_entities;
          LODWORD(v14) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2790, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( level.num_entities )", "entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        EntityData = Bot_GetEntityData(&level.gentities[entityNum]);
        if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2792, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
          __debugbreak();
        if ( EntityData->botDebugData.debugScoresCount >= 0x400u )
        {
          LODWORD(v15) = 1024;
          LODWORD(v14) = EntityData->botDebugData.debugScoresCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2795, ASSERT_TYPE_ASSERT, "(unsigned)( botDebug->debugScoresCount ) < (unsigned)( 1024 )", "botDebug->debugScoresCount doesn't index BOT_SCORE_MAX\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( EntityData->botDebugData.debugScoresSaving )
        {
          v13 = (_DWORD *)&EntityData->scriptedAgentInfo.threat + 18 * EntityData->botDebugData.debugScoresCount + 8226;
          *v13 = nodeIndex;
          v13[1] = score;
          ++EntityData->botDebugData.debugScoresCount;
        }
        return;
      }
      v10 = DVARINT_bot_ScoreClient;
      if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      v11 = entityNum;
      if ( v10->current.integer == entityNum )
        goto LABEL_19;
    }
  }
}

/*
==============
Bot_GetScoreFlag
==============
*/
__int64 Bot_GetScoreFlag(const char *scoreFlagName)
{
  const char *v1; 
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 
  const char *v6; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  v1 = BOT_STR_TBL_SCORE_FLAG[0];
  v2 = 0;
  if ( BOT_STR_TBL_SCORE_FLAG[0] )
  {
    v4 = 0i64;
    do
    {
      if ( !*v1 )
        break;
      v5 = 0x7FFFFFFFi64;
      v6 = scoreFlagName;
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !scoreFlagName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v7 = v1 - scoreFlagName;
      while ( 1 )
      {
        v8 = (unsigned __int8)v6[v7];
        v9 = v5;
        v10 = *(unsigned __int8 *)v6++;
        --v5;
        if ( !v9 )
          return v2;
        if ( v8 != v10 )
        {
          v11 = v8 + 32;
          if ( (unsigned int)(v8 - 65) > 0x19 )
            v11 = v8;
          v8 = v11;
          v12 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v12 = v10;
          if ( v8 != v12 )
            break;
        }
        if ( !v8 )
          return v2;
      }
      v1 = BOT_STR_TBL_SCORE_FLAG[++v4];
      ++v2;
    }
    while ( v1 );
  }
  return 10i64;
}

/*
==============
Bot_GetScoreType
==============
*/
__int64 Bot_GetScoreType(const char *scoreTypeName)
{
  const char *v1; 
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 
  const char *v6; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  v1 = BOT_STR_TBL_SCORE_TYPES[0];
  v2 = 0;
  if ( BOT_STR_TBL_SCORE_TYPES[0] )
  {
    v4 = 0i64;
    do
    {
      if ( !*v1 )
        break;
      v5 = 0x7FFFFFFFi64;
      v6 = scoreTypeName;
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !scoreTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v7 = v1 - scoreTypeName;
      while ( 1 )
      {
        v8 = (unsigned __int8)v6[v7];
        v9 = v5;
        v10 = *(unsigned __int8 *)v6++;
        --v5;
        if ( !v9 )
          return v2;
        if ( v8 != v10 )
        {
          v11 = v8 + 32;
          if ( (unsigned int)(v8 - 65) > 0x19 )
            v11 = v8;
          v8 = v11;
          v12 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v12 = v10;
          if ( v8 != v12 )
            break;
        }
        if ( !v8 )
          return v2;
      }
      v1 = BOT_STR_TBL_SCORE_TYPES[++v4];
      ++v2;
    }
    while ( v1 );
  }
  return 0i64;
}

/*
==============
Bot_Score_Dbg_Direction
==============
*/
void Bot_Score_Dbg_Direction(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  __int64 v3; 
  __int64 v12; 
  pathnode_t *v13; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t start; 
  vec3_t pos; 
  vec3_t end; 
  vec3_t v26; 

  v3 = itemCount;
  _XMM9 = LODWORD(FLOAT_99999_0);
  _XMM6 = LODWORD(FLOAT_N99999_0);
  *(float *)&_XMM10 = FLOAT_99999_0;
  *(float *)&_XMM11 = FLOAT_99999_0;
  *(float *)&_XMM7 = FLOAT_N99999_0;
  *(float *)&_XMM12 = FLOAT_N99999_0;
  if ( itemCount > 0 )
  {
    v12 = 0i64;
    do
    {
      v13 = Path_ConvertIndexToNode(items[v12].object);
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2875, ASSERT_TYPE_ASSERT, "( pathnode )", (const char *)&queryFormat, "pathnode") )
        __debugbreak();
      pathnode_t::GetPos(v13, &pos);
      _XMM1 = LODWORD(pos.v[1]);
      _XMM0 = LODWORD(pos.v[2]);
      __asm
      {
        vminss  xmm9, xmm9, dword ptr [rsp+118h+pos]
        vmaxss  xmm6, xmm6, dword ptr [rsp+118h+pos]
      }
      ++v12;
      __asm
      {
        vminss  xmm10, xmm1, xmm10
        vminss  xmm11, xmm0, xmm11
        vmaxss  xmm7, xmm1, xmm7
        vmaxss  xmm12, xmm0, xmm12
      }
    }
    while ( v12 < v3 );
  }
  v16 = (float)((float)(*(float *)&_XMM6 - *(float *)&_XMM9) * 0.5) + *(float *)&_XMM9;
  v17 = (float)((float)(*(float *)&_XMM7 - *(float *)&_XMM10) * 0.5) + *(float *)&_XMM10;
  v18 = (float)((float)(*(float *)&_XMM12 - *(float *)&_XMM11) * 0.5) + *(float *)&_XMM11;
  v19 = fsqrt((float)((float)((float)(*(float *)&_XMM10 - v17) * (float)(*(float *)&_XMM10 - v17)) + (float)((float)(*(float *)&_XMM9 - v16) * (float)(*(float *)&_XMM9 - v16))) + (float)((float)(*(float *)&_XMM11 - v18) * (float)(*(float *)&_XMM11 - v18)));
  v20 = v19 * parms->vector1.v[0];
  v21 = v19 * parms->vector1.v[1];
  v22 = v19 * parms->vector1.v[2];
  end.v[0] = v20 + v16;
  end.v[1] = v21 + v17;
  start.v[0] = v16 - v20;
  end.v[2] = (float)(v22 + v18) + 50.0;
  start.v[1] = v17 - v21;
  v26.v[0] = v16;
  v26.v[1] = v17;
  v26.v[2] = v18;
  start.v[2] = (float)(v18 - v22) + 50.0;
  G_DebugLine(&start, &end, &colorCyan, 0);
  G_DebugLine(&start, &v26, &colorCyan, 0);
}

/*
==============
Bot_Score_DrawDebugParms
==============
*/
void Bot_Score_DrawDebugParms(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  void (__fastcall *debugFunc)(bot_score_item_s *, int, bot_score_parms_s *); 
  __int64 v7; 

  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2903, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( parms->scoreType >= (unsigned int)BOT_SCORE_TYPE_COUNT )
  {
    LODWORD(v7) = parms->scoreType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2904, ASSERT_TYPE_ASSERT, "(unsigned)( parms->scoreType ) < (unsigned)( BOT_SCORE_TYPE_COUNT )", "parms->scoreType doesn't index BOT_SCORE_TYPE_COUNT\n\t%i not in [0, %i)", v7, 17) )
      __debugbreak();
  }
  debugFunc = BOT_SCORE_FUNCS[parms->scoreType].debugFunc;
  if ( debugFunc )
    debugFunc(items, itemCount, parms);
}

/*
==============
Bot_Score_Factor_AwayFromAlliedPlayers
==============
*/
__int64 Bot_Score_Factor_AwayFromAlliedPlayers(const pathnode_t *node, __int16 entityNum)
{
  unsigned int v2; 
  __int128 v3; 
  gentity_s *v4; 
  bitarray<224> *AllTeamFlags; 
  sentient_s *i; 
  const gentity_s *ent; 
  float v8; 
  __int128 v9; 
  const bot_data_t *EntityData; 
  float v11; 
  __int128 v12; 
  vec3_t pos; 
  vec3_t goal; 
  bitarray<224> iTeamFlags; 

  v2 = entityNum;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v3 = 0i64;
  if ( v2 >= level.num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1938, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( level.num_entities )", "entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v2, level.num_entities) )
    __debugbreak();
  v4 = &level.gentities[(__int16)v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1940, ASSERT_TYPE_ASSERT, "( thisEnt )", (const char *)&queryFormat, "thisEnt") )
    __debugbreak();
  if ( !v4->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1941, ASSERT_TYPE_ASSERT, "( thisEnt->sentient )", (const char *)&queryFormat, "thisEnt->sentient") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
  iTeamFlags = *AllTeamFlags;
  for ( i = Sentient_FirstSentient(&iTeamFlags); i; i = Sentient_NextSentient(i, &iTeamFlags) )
  {
    if ( !i->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1946, ASSERT_TYPE_ASSERT, "( allySentient->ent )", (const char *)&queryFormat, "allySentient->ent") )
      __debugbreak();
    if ( Bot_IsCharacterActive(i->ent) )
    {
      if ( AI_IsAlliedSentient(v4->sentient, i) )
      {
        if ( i != v4->sentient )
        {
          ent = i->ent;
          if ( i->ent->client || ent->agent && ent->s.otherEntityNum == 2047 )
          {
            v8 = fsqrt((float)((float)((float)(v4->r.currentOrigin.v[1] - pos.v[1]) * (float)(v4->r.currentOrigin.v[1] - pos.v[1])) + (float)((float)(v4->r.currentOrigin.v[0] - pos.v[0]) * (float)(v4->r.currentOrigin.v[0] - pos.v[0]))) + (float)((float)(v4->r.currentOrigin.v[2] - pos.v[2]) * (float)(v4->r.currentOrigin.v[2] - pos.v[2])));
            if ( v8 <= 500.0 )
            {
              v9 = v3;
              *(float *)&v9 = *(float *)&v3 + (float)(500.0 - v8);
              v3 = v9;
            }
            if ( SV_BotIsBotEnt(ent) )
            {
              EntityData = Bot_GetEntityData(i->ent);
              if ( Bot_HasScriptGoal(EntityData) )
              {
                Bot_GetScriptGoal(EntityData, &goal);
                v11 = fsqrt((float)((float)((float)(goal.v[1] - pos.v[1]) * (float)(goal.v[1] - pos.v[1])) + (float)((float)(goal.v[0] - pos.v[0]) * (float)(goal.v[0] - pos.v[0]))) + (float)((float)(goal.v[2] - pos.v[2]) * (float)(goal.v[2] - pos.v[2])));
                if ( v11 <= 500.0 )
                {
                  v12 = v3;
                  *(float *)&v12 = *(float *)&v3 + (float)(500.0 - v11);
                  v3 = v12;
                }
              }
            }
          }
        }
      }
    }
  }
  I_fclamp(*(float *)&v3, 0.0, 1000.0);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_AwayFromCenterPointHelper
==============
*/
__int64 Bot_Score_Factor_AwayFromCenterPointHelper(const pathnode_t *node, const bot_score_parms_s *parms, int index, float weight)
{
  float v7; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v10; 
  __int64 v12; 

  v7 = weight;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2026, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2027, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( index < 0 )
  {
    LODWORD(v12) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2028, ASSERT_TYPE_ASSERT, "( index ) >= ( 0 )", "index >= 0\n\t%i, %i", v12, 0i64) )
      __debugbreak();
  }
  if ( weight <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2029, ASSERT_TYPE_ASSERT, "( weight ) > ( 0 )", "weight > 0\n\t%g, %g", weight, 0.0) )
    __debugbreak();
  if ( (parms->flags & 0x40) != 0 )
    v7 = weight * 3.0;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v10 = Bot_Score_Factor_AwayFromPoint(node, &parms->vector1, 1000);
  return BotScoreDebugFactor(index, v7, v10, scoreType, entityNum);
}

/*
==============
Bot_Score_Factor_AwayFromPoint
==============
*/
__int64 Bot_Score_Factor_AwayFromPoint(const pathnode_t *node, const vec3_t *point, int maxDistAway)
{
  __int64 result; 
  vec3_t pos; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  fsqrt((float)((float)((float)(point->v[1] - pos.v[1]) * (float)(point->v[1] - pos.v[1])) + (float)((float)(point->v[0] - pos.v[0]) * (float)(point->v[0] - pos.v[0]))) + (float)((float)(point->v[2] - pos.v[2]) * (float)(point->v[2] - pos.v[2])));
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm4, 1 }
  result = (unsigned int)(int)*(float *)&_XMM3;
  if ( (int)result > 100 )
    result = 100i64;
  if ( (int)result < 0 )
    return 0i64;
  return result;
}

/*
==============
Bot_Score_Factor_Behind
==============
*/
__int64 Bot_Score_Factor_Behind(const pathnode_t *node, const vec3_t *eyePoint, const vec3_t *eyeForward)
{
  return (unsigned int)(100 - Bot_Score_Factor_InFrontOf(node, eyePoint, eyeForward));
}

/*
==============
Bot_Score_Factor_CloseToPoint
==============
*/
__int64 Bot_Score_Factor_CloseToPoint(const pathnode_t *node, const vec3_t *point, int maxDistAway)
{
  __int64 result; 
  vec3_t pos; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  fsqrt((float)((float)((float)(point->v[1] - pos.v[1]) * (float)(point->v[1] - pos.v[1])) + (float)((float)(point->v[0] - pos.v[0]) * (float)(point->v[0] - pos.v[0]))) + (float)((float)(point->v[2] - pos.v[2]) * (float)(point->v[2] - pos.v[2])));
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  result = (unsigned int)(int)*(float *)&_XMM4;
  if ( (int)result > 100 )
    result = 100i64;
  if ( (int)result < 0 )
    return 0i64;
  return result;
}

/*
==============
Bot_Score_Factor_ConcealedRearFromDir
==============
*/
__int64 Bot_Score_Factor_ConcealedRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  double v3; 

  v3 = vectoyaw((const vec2_t *)lookDir);
  Path_NodeExposureGetRawArcMax(node, *(float *)&v3 + 180.0, 90.0, 4);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  return (unsigned int)(int)*(float *)&_XMM4;
}

/*
==============
Bot_Score_Factor_ConcealedRearFromPoint
==============
*/
__int64 Bot_Score_Factor_ConcealedRearFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  float v4; 
  double v5; 
  vec3_t pos; 
  vec2_t vec; 
  float v11; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v4 = lookAtPoint->v[1] - pos.v[1];
  vec.v[0] = lookAtPoint->v[0] - pos.v[0];
  v11 = lookAtPoint->v[2] - pos.v[2];
  vec.v[1] = v4;
  v5 = vectoyaw(&vec);
  Path_NodeExposureGetRawArcMax(node, *(float *)&v5 + 180.0, 90.0, 4);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  return (unsigned int)(int)*(float *)&_XMM4;
}

/*
==============
Bot_Score_Factor_CoverRearFromDir
==============
*/
__int64 Bot_Score_Factor_CoverRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  int StopGoalStance; 
  double v5; 
  int RawArcSum; 

  StopGoalStance = Bot_GetStopGoalStance(node);
  v5 = vectoyaw((const vec2_t *)lookDir);
  RawArcSum = Path_NodeExposureGetRawArcSum(node, *(float *)&v5 + 180.0, 90.0, StopGoalStance);
  if ( RawArcSum > 100 )
    RawArcSum = 100;
  if ( RawArcSum < 0 )
    RawArcSum = 0;
  return (unsigned int)(100 - RawArcSum);
}

/*
==============
Bot_Score_Factor_CoverRearFromPoint
==============
*/
__int64 Bot_Score_Factor_CoverRearFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  float v4; 
  double v5; 
  int RawArcSum; 
  vec3_t pos; 
  vec2_t vec; 
  float v10; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v4 = lookAtPoint->v[1] - pos.v[1];
  vec.v[0] = lookAtPoint->v[0] - pos.v[0];
  v10 = lookAtPoint->v[2] - pos.v[2];
  vec.v[1] = v4;
  LODWORD(lookAtPoint) = Bot_GetStopGoalStance(node);
  v5 = vectoyaw(&vec);
  RawArcSum = Path_NodeExposureGetRawArcSum(node, *(float *)&v5 + 180.0, 90.0, (int)lookAtPoint);
  if ( RawArcSum > 100 )
    RawArcSum = 100;
  if ( RawArcSum < 0 )
    RawArcSum = 0;
  return (unsigned int)(100 - RawArcSum);
}

/*
==============
Bot_Score_Factor_CrouchSightFacingDir
==============
*/
__int64 Bot_Score_Factor_CrouchSightFacingDir(const pathnode_t *node, const vec3_t *lookDir)
{
  double v3; 

  v3 = vectoyaw((const vec2_t *)lookDir);
  Path_NodeExposureGetRawArcSum(node, *(float *)&v3, 25.0, 2);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_CrouchSightFacingPoint
==============
*/
__int64 Bot_Score_Factor_CrouchSightFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  float v4; 
  double v5; 
  vec3_t pos; 
  vec2_t vec; 
  float v11; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v4 = lookAtPoint->v[1] - pos.v[1];
  vec.v[0] = lookAtPoint->v[0] - pos.v[0];
  v11 = lookAtPoint->v[2] - pos.v[2];
  vec.v[1] = v4;
  v5 = vectoyaw(&vec);
  Path_NodeExposureGetRawArcSum(node, *(float *)&v5, 25.0, 2);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_ExposedToSky
==============
*/
__int64 Bot_Score_Factor_ExposedToSky(const pathnode_t *node)
{
  int v2; 
  bool IsExposedSky; 
  int wLinkCount; 
  unsigned int v5; 
  __int64 v6; 

  v2 = 0;
  IsExposedSky = Path_IsExposedSky(node);
  LOWORD(wLinkCount) = node->dynamic.wLinkCount;
  v5 = IsExposedSky;
  if ( (__int16)wLinkCount > 0 )
  {
    v6 = 0i64;
    do
    {
      if ( Path_IsNodeIndexExposedSky(node->constant.Links[v6].nodeNum) )
        ++v5;
      wLinkCount = node->dynamic.wLinkCount;
      ++v2;
      ++v6;
    }
    while ( v2 < wLinkCount );
  }
  _mm_cvtepi32_ps((__m128i)(unsigned int)((__int16)wLinkCount + 1));
  _mm_cvtepi32_ps((__m128i)v5);
  _XMM1 = 0i64;
  __asm { vroundss xmm2, xmm1, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM2;
}

/*
==============
Bot_Score_Factor_FacesAwayFromPoint
==============
*/
__int64 Bot_Score_Factor_FacesAwayFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint, const vec3_t *facingCheckPoint)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v10; 
  __int128 v13; 
  vec3_t pos; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v5 = LODWORD(lookAtPoint->v[1]);
  *(float *)&v5 = (float)((float)((float)(lookAtPoint->v[1] - pos.v[1]) * (float)(lookAtPoint->v[1] - pos.v[1])) + (float)((float)(lookAtPoint->v[0] - pos.v[0]) * (float)(lookAtPoint->v[0] - pos.v[0]))) + (float)((float)(lookAtPoint->v[2] - pos.v[2]) * (float)(lookAtPoint->v[2] - pos.v[2]));
  v6 = v5;
  v8 = LODWORD(facingCheckPoint->v[1]);
  *(float *)&v8 = facingCheckPoint->v[1] - pos.v[1];
  v7 = v8;
  v10 = v6;
  *(float *)&v10 = fsqrt(*(float *)&v6);
  _XMM3 = v10;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  v13 = v7;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)((float)(facingCheckPoint->v[0] - pos.v[0]) * (float)(facingCheckPoint->v[0] - pos.v[0]))) + (float)((float)(facingCheckPoint->v[2] - pos.v[2]) * (float)(facingCheckPoint->v[2] - pos.v[2])));
  _XMM1 = v13;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm9, xmm0
  }
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  return (unsigned int)(int)*(float *)&_XMM4;
}

/*
==============
Bot_Score_Factor_GeneralExposure
==============
*/
__int64 Bot_Score_Factor_GeneralExposure(const pathnode_t *node, int exposeFlags, int maxExposeValue)
{
  Path_NodeExposureGeneral(node, exposeFlags);
  if ( maxExposeValue < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", 0, maxExposeValue) )
    __debugbreak();
  _XMM1 = 0i64;
  __asm { vroundss xmm2, xmm1, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM2;
}

/*
==============
Bot_Score_Factor_HideFromAerialEnemiesHelper
==============
*/
__int64 Bot_Score_Factor_HideFromAerialEnemiesHelper(const pathnode_t *node, const bot_score_parms_s *parms, int index)
{
  unsigned int v6; 
  gentity_s *v7; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v10; 
  gentity_s *v12; 
  __int16 v13; 
  bot_score_type_t v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2046, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2047, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v6 = 0;
  if ( index < 0 )
  {
    LODWORD(v16) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2048, ASSERT_TYPE_ASSERT, "( index ) >= ( 0 )", "index >= 0\n\t%i, %i", v16, 0i64) )
      __debugbreak();
  }
  if ( SLOBYTE(parms->flags) >= 0 )
    return 0i64;
  if ( parms->integer2 != 2047 )
  {
    if ( Path_IsExposedSky(node) )
    {
      if ( parms->integer2 >= (unsigned int)level.num_entities )
      {
        LODWORD(v17) = level.num_entities;
        LODWORD(v16) = parms->integer2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2067, ASSERT_TYPE_ASSERT, "(unsigned)( parms->integer2 ) < (unsigned)( level.num_entities )", "parms->integer2 doesn't index level.num_entities\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v7 = &level.gentities[parms->integer2];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2069, ASSERT_TYPE_ASSERT, "( aerialEntity )", (const char *)&queryFormat, "aerialEntity") )
        __debugbreak();
      entityNum = parms->entityNum;
      scoreType = parms->scoreType;
      v10 = Bot_Score_Factor_StandingCoverFacingPoint(node, &v7->r.currentOrigin);
      v6 = BotScoreDebugFactor(index, 4.0, v10, scoreType, entityNum);
    }
    else
    {
      v6 = 400;
    }
  }
  if ( parms->integer3 == 2047 )
    return v6;
  if ( !Path_IsExposedSky(node) )
    return v6 + 400;
  if ( parms->integer2 >= (unsigned int)level.num_entities )
  {
    LODWORD(v17) = level.num_entities;
    LODWORD(v16) = parms->integer2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2083, ASSERT_TYPE_ASSERT, "(unsigned)( parms->integer2 ) < (unsigned)( level.num_entities )", "parms->integer2 doesn't index level.num_entities\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v12 = &level.gentities[parms->integer3];
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2085, ASSERT_TYPE_ASSERT, "( aerialEntity )", (const char *)&queryFormat, "aerialEntity") )
    __debugbreak();
  v13 = parms->entityNum;
  v14 = parms->scoreType;
  v15 = Bot_Score_Factor_StandingCoverFacingPoint(node, &v12->r.currentOrigin);
  return v6 + (unsigned int)BotScoreDebugFactor(index + 1, 4.0, v15, v14, v13);
}

/*
==============
Bot_Score_Factor_HighTraffic360
==============
*/
__int64 Bot_Score_Factor_HighTraffic360(const pathnode_t *node)
{
  Path_NodeExposureGetRawArcSum(node, 0.0, 180.0, 8);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_HighTrafficSelf
==============
*/
__int64 Bot_Score_Factor_HighTrafficSelf(const pathnode_t *node)
{
  Path_NodeExposureGetTraffic(node);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_HighTrafficViewDir
==============
*/
__int64 Bot_Score_Factor_HighTrafficViewDir(const pathnode_t *node, const vec3_t *lookDir)
{
  double v4; 
  __int128 v6; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1678, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v4 = vectoyaw((const vec2_t *)lookDir);
  v6 = 0i64;
  *(float *)&v6 = (float)Path_NodeExposureGetRawArcMax(node, *(float *)&v4, 23.0, 8);
  _XMM0 = v6;
  __asm { vminss  xmm1, xmm0, cs:__real@437f0000 }
  _XMM1 = 0i64;
  __asm { vroundss xmm2, xmm1, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM2;
}

/*
==============
Bot_Score_Factor_HighTrafficViewToPoint
==============
*/
int Bot_Score_Factor_HighTrafficViewToPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  float v4; 
  vec3_t pos; 
  vec3_t lookDir; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v4 = lookAtPoint->v[1] - pos.v[1];
  lookDir.v[0] = lookAtPoint->v[0] - pos.v[0];
  lookDir.v[2] = lookAtPoint->v[2] - pos.v[2];
  lookDir.v[1] = v4;
  return Bot_Score_Factor_HighTrafficViewDir(node, &lookDir);
}

/*
==============
Bot_Score_Factor_IdealRange
==============
*/
__int64 Bot_Score_Factor_IdealRange(const pathnode_t *node, const vec3_t *point, float minRange, float maxRange, float zeroFraction)
{
  float v7; 
  float v8; 
  float v9; 
  __int64 result; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1390, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( zeroFraction < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1391, ASSERT_TYPE_ASSERT, "( zeroFraction >= 0.0f )", (const char *)&queryFormat, "zeroFraction >= 0.0f") )
    __debugbreak();
  if ( minRange >= 0.0 && minRange > maxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1392, ASSERT_TYPE_ASSERT, "( (minRange < 0.0f) || (minRange <= maxRange) )", (const char *)&queryFormat, "(minRange < 0.0f) || (minRange <= maxRange)") )
    __debugbreak();
  if ( maxRange >= 0.0 && maxRange < minRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1393, ASSERT_TYPE_ASSERT, "( (maxRange < 0.0f) || (maxRange >= minRange) )", (const char *)&queryFormat, "(maxRange < 0.0f) || (maxRange >= minRange)") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v7 = fsqrt((float)((float)((float)(pos.v[1] - point->v[1]) * (float)(pos.v[1] - point->v[1])) + (float)((float)(pos.v[0] - point->v[0]) * (float)(pos.v[0] - point->v[0]))) + (float)((float)(pos.v[2] - point->v[2]) * (float)(pos.v[2] - point->v[2])));
  if ( v7 < minRange && minRange >= 0.0 )
  {
    v8 = minRange - v7;
    v9 = minRange * zeroFraction;
LABEL_21:
    result = (unsigned int)(int)(float)((float)(v8 / v9) * 100.0);
    goto LABEL_23;
  }
  if ( v7 > maxRange && maxRange >= 0.0 )
  {
    v8 = v7 - maxRange;
    v9 = maxRange * zeroFraction;
    goto LABEL_21;
  }
  result = 100i64;
LABEL_23:
  if ( (int)result > 100 )
    result = 100i64;
  if ( (int)result < 0 )
    return 0i64;
  return result;
}

/*
==============
Bot_Score_Factor_IdealRangeWeapon
==============
*/
__int64 Bot_Score_Factor_IdealRangeWeapon(const pathnode_t *node, __int16 entityNum, const vec3_t *targetPoint, const float addDistance)
{
  const playerState_s *EntityPlayerState; 
  const Weapon *ViewmodelWeapon; 
  unsigned int v10; 
  float v11; 
  double IdealFiringRange; 
  float min; 
  float max; 
  vec3_t pos; 

  if ( (unsigned int)entityNum >= level.num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1792, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( level.num_entities )", "entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", entityNum, level.num_entities) )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(&level.gentities[entityNum]);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1795, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = Bot_Weap_GetViewmodelWeapon(EntityPlayerState);
  if ( Bot_Weap_IsNone(ViewmodelWeapon) )
    return 0i64;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v10 = 0;
  v11 = fsqrt((float)((float)((float)(pos.v[1] - targetPoint->v[1]) * (float)(pos.v[1] - targetPoint->v[1])) + (float)((float)(pos.v[0] - targetPoint->v[0]) * (float)(pos.v[0] - targetPoint->v[0]))) + (float)((float)(pos.v[2] - targetPoint->v[2]) * (float)(pos.v[2] - targetPoint->v[2]))) + addDistance;
  Bot_Weap_EffectiveRange(EntityPlayerState, ViewmodelWeapon, &min, &max, 0);
  IdealFiringRange = Bot_Weap_GetIdealFiringRange(EntityPlayerState, ViewmodelWeapon);
  if ( v11 >= min )
  {
    if ( v11 >= *(float *)&IdealFiringRange )
    {
      if ( v11 < max )
        return (unsigned int)(int)(float)((float)(1.0 - (float)((float)(v11 - *(float *)&IdealFiringRange) / (float)(max - *(float *)&IdealFiringRange))) * 100.0);
    }
    else
    {
      return (unsigned int)(int)(float)((float)((float)(v11 - min) / (float)(*(float *)&IdealFiringRange - min)) * 100.0);
    }
  }
  return v10;
}

/*
==============
Bot_Score_Factor_InFrontOf
==============
*/
__int64 Bot_Score_Factor_InFrontOf(const pathnode_t *node, const vec3_t *eyePoint, const vec3_t *eyeForward)
{
  __int128 v6; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1363, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( eyeForward->v[0] == 0.0 && eyeForward->v[1] == 0.0 && eyeForward->v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1364, ASSERT_TYPE_ASSERT, "( Vec3NotZero( eyeForward ) )", (const char *)&queryFormat, "Vec3NotZero( eyeForward )") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v6 = LODWORD(eyePoint->v[1]);
  *(float *)&v6 = fsqrt((float)((float)((float)(eyePoint->v[1] - pos.v[1]) * (float)(eyePoint->v[1] - pos.v[1])) + (float)((float)(eyePoint->v[0] - pos.v[0]) * (float)(eyePoint->v[0] - pos.v[0]))) + (float)((float)(eyePoint->v[2] - pos.v[2]) * (float)(eyePoint->v[2] - pos.v[2])));
  _XMM4 = v6;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm4, 1 }
  return (unsigned int)(int)*(float *)&_XMM3;
}

/*
==============
Bot_Score_Factor_LowTrafficSelf
==============
*/
__int64 Bot_Score_Factor_LowTrafficSelf(const pathnode_t *node)
{
  Path_NodeExposureGetTraffic(node);
  _XMM1 = 0i64;
  __asm { vroundss xmm2, xmm1, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM2;
}

/*
==============
Bot_Score_Factor_NoExposurePastNode
==============
*/
__int64 Bot_Score_Factor_NoExposurePastNode(const pathnode_t *node, const vec3_t *point, int exposeFlags)
{
  float v6; 
  double v7; 
  int RawMax; 
  vec3_t pos; 
  vec2_t vec; 
  float v12; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v6 = pos.v[1] - point->v[1];
  vec.v[0] = pos.v[0] - point->v[0];
  v12 = pos.v[2] - point->v[2];
  vec.v[1] = v6;
  v7 = vectoyaw(&vec);
  RawMax = Path_NodeExposureGetRawMax(node, *(float *)&v7, exposeFlags);
  if ( RawMax > 10 )
    RawMax = 10;
  if ( RawMax < 0 )
    RawMax = 0;
  return (unsigned int)(10 * (10 - RawMax));
}

/*
==============
Bot_Score_Factor_NoTraffic360
==============
*/
__int64 Bot_Score_Factor_NoTraffic360(const pathnode_t *node)
{
  Path_NodeExposureGetRawArcSum(node, 0.0, 180.0, 8);
  _XMM1 = 0i64;
  __asm { vroundss xmm2, xmm1, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM2;
}

/*
==============
Bot_Score_Factor_NoTrafficRearFromDir
==============
*/
__int64 Bot_Score_Factor_NoTrafficRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  double v4; 
  __int128 v6; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1639, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v4 = vectoyaw((const vec2_t *)lookDir);
  v6 = 0i64;
  *(float *)&v6 = (float)Path_NodeExposureGetRawArcSum(node, *(float *)&v4 + 180.0, 157.0, 8);
  _XMM0 = v6;
  __asm { vminss  xmm1, xmm0, cs:__real@43800000 }
  _XMM0 = 0i64;
  __asm { vroundss xmm3, xmm0, xmm4, 1 }
  return (unsigned int)(int)*(float *)&_XMM3;
}

/*
==============
Bot_Score_Factor_NoTrafficRearFromPoint
==============
*/
int Bot_Score_Factor_NoTrafficRearFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  float v4; 
  vec3_t pos; 
  vec3_t lookDir; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v4 = lookAtPoint->v[1] - pos.v[1];
  lookDir.v[0] = lookAtPoint->v[0] - pos.v[0];
  lookDir.v[2] = lookAtPoint->v[2] - pos.v[2];
  lookDir.v[1] = v4;
  return Bot_Score_Factor_NoTrafficRearFromDir(node, &lookDir);
}

/*
==============
Bot_Score_Factor_NotRecentlyUsed
==============
*/
__int64 Bot_Score_Factor_NotRecentlyUsed(const pathnode_t *node, const bot_score_parms_s *parms)
{
  gentity_s *GEntity; 
  gentity_s *v4; 
  const char *GameType; 
  unsigned int NodeTeam; 
  __int64 v10; 

  GEntity = G_GetGEntity(parms->entityNum);
  v4 = GEntity;
  if ( (parms->flags & 1) != 0 )
    return 100i64;
  if ( (!GEntity || !GEntity->sentient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1897, ASSERT_TYPE_ASSERT, "( thisEnt && thisEnt->sentient )", (const char *)&queryFormat, "thisEnt && thisEnt->sentient") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1898, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", "%s\n\tAccess to pathnode_dynamic_t::bots", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
    __debugbreak();
  if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1899, ASSERT_TYPE_ASSERT, "(!Path_MapUsesScriptedAIData())", "%s\n\tmap/mode is only set up to use scripted soldier data, should not be accessing pathnode_dynamic::bots", "!Path_MapUsesScriptedAIData()") )
      __debugbreak();
  }
  NodeTeam = Path_GetNodeTeam(v4->sentient->eTeam);
  if ( NodeTeam >= 2 )
  {
    LODWORD(v10) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1905, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( (2) )", "nodeTeam doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_ProneCover360
==============
*/
__int64 Bot_Score_Factor_ProneCover360(const pathnode_t *node)
{
  Path_NodeExposureGeneral(node, 4);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_ProneCoverFacingDir
==============
*/
__int64 Bot_Score_Factor_ProneCoverFacingDir(const pathnode_t *node, const vec3_t *lookDir)
{
  double v3; 

  v3 = vectoyaw((const vec2_t *)lookDir);
  Path_NodeExposureGetRawArcSum(node, *(float *)&v3, 25.0, 4);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_ProneCoverFacingPoint
==============
*/
__int64 Bot_Score_Factor_ProneCoverFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  float v4; 
  double v5; 
  vec3_t pos; 
  vec2_t vec; 
  float v11; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v4 = lookAtPoint->v[1] - pos.v[1];
  vec.v[0] = lookAtPoint->v[0] - pos.v[0];
  v11 = lookAtPoint->v[2] - pos.v[2];
  vec.v[1] = v4;
  v5 = vectoyaw(&vec);
  Path_NodeExposureGetRawArcSum(node, *(float *)&v5, 25.0, 4);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_StandingCoverFacingPoint
==============
*/
__int64 Bot_Score_Factor_StandingCoverFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  float v4; 
  double v5; 
  vec3_t pos; 
  vec2_t vec; 
  float v11; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v4 = lookAtPoint->v[1] - pos.v[1];
  vec.v[0] = lookAtPoint->v[0] - pos.v[0];
  v11 = lookAtPoint->v[2] - pos.v[2];
  vec.v[1] = v4;
  v5 = vectoyaw(&vec);
  Path_NodeExposureGetRawArcSum(node, *(float *)&v5, 45.0, 1);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_Factor_VisibilityToNode
==============
*/
__int64 Bot_Score_Factor_VisibilityToNode(const pathnode_t *node, const pathnode_t *lookAtNode)
{
  int v4; 
  unsigned int v5; 
  const pathnode_t *v6; 

  v4 = 0;
  v5 = 0;
  if ( Path_NodesVisibleNoPeek(lookAtNode, node) )
    v4 = 1;
  if ( lookAtNode->constant.totalLinkCount )
  {
    do
    {
      v6 = Path_ConvertIndexToNode(lookAtNode->constant.Links[v5].nodeNum);
      if ( Path_NodesVisibleNoPeek(v6, node) )
        ++v4;
      ++v5;
    }
    while ( v5 < lookAtNode->constant.totalLinkCount );
  }
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
Bot_Score_GetNearestNode
==============
*/
unsigned __int16 Bot_Score_GetNearestNode(const bot_score_parms_s *parms, const vec3_t *originPoint)
{
  __int16 entityNum; 
  int clipmask; 
  pathnode_t *node; 
  int v7; 
  __int64 maxNodes; 
  pathsort_s nodes[64]; 

  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 295, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  entityNum = parms->entityNum;
  clipmask = 33685521;
  if ( parms->entityNum == 2047 )
    goto LABEL_17;
  if ( (unsigned __int16)entityNum >= 0x800u )
  {
    LODWORD(maxNodes) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( ( 2048 ) )", "parms->entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", maxNodes, 2048) )
      __debugbreak();
  }
  if ( !G_IsEntityInUse(parms->entityNum) || (clipmask = level.gentities[parms->entityNum].clipmask) != 0 )
  {
LABEL_17:
    node = Path_NearestNode(originPoint, clipmask, NULL);
    if ( node )
      return Path_ConvertNodeToIndex(node);
  }
  v7 = Path_NodesInCylinder(originPoint, NULL, 192.0, 64.0, nodes, 64, -2);
  if ( v7 > 0 && (std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(nodes, &nodes[v7], v7, Path_CompareNodesIncreasing), (node = nodes[0].node) != NULL) )
    return Path_ConvertNodeToIndex(node);
  else
    return -1;
}

/*
==============
Bot_Score_NodeHideCommon
==============
*/
__int64 Bot_Score_NodeHideCommon(int object, const bot_score_parms_s *parms, int checkSightToBot)
{
  unsigned __int16 v5; 
  const pathnode_t *v6; 
  gentity_s *v7; 
  const pathnode_t *v8; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v11; 
  int v12; 
  bot_score_type_t v13; 
  int v14; 
  int v15; 
  int v16; 
  bot_score_type_t v17; 
  int v18; 
  int v19; 
  __int64 v21; 

  v5 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 517, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v21) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v21, level.num_entities) )
      __debugbreak();
  }
  v6 = Path_ConvertIndexToNode(v5);
  v7 = &level.gentities[parms->entityNum];
  v8 = Sentient_NearestNode(v7->sentient);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 523, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Bot_Score_NodeShouldIgnore(v6, parms->entityNum, parms) || Bot_Score_NodeWasRecentlyUsed(v6, parms, 10.0) || Bot_Score_NodeIsDangerous(v6, parms->entityNum, 500.0) || (parms->flags & 0x20) != 0 && (Bot_Score_NodeIgnoreTraversalIslandMismatch(v6, parms) || v8 && !Path_NodesVisibleNoPeek(v6, v8)) || Path_NodeExposureGetTraffic(v6) || Bot_Score_NodeIsNearAllySentient(v6, parms->entityNum, 100.0) || checkSightToBot && v8 && !Path_NodesVisibleAreaNoPeek(v6, v8) )
    return 0i64;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v11 = Bot_Score_Factor_ProneCover360(v6);
  v12 = BotScoreDebugFactor(0, 1.0, v11, scoreType, entityNum);
  LOWORD(scoreType) = parms->entityNum;
  v13 = parms->scoreType;
  v14 = v12;
  v15 = Bot_Score_Factor_NoTraffic360(v6);
  v16 = BotScoreDebugFactor(1, 1.0, v15, v13, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v17 = parms->scoreType;
  v18 = v16 + v14;
  v19 = Bot_Score_Factor_CloseToPoint(v6, &v7->r.currentOrigin, 1000);
  return v18 + (unsigned int)BotScoreDebugFactor(2, 1.0, v19, v17, scoreType);
}

/*
==============
Bot_Score_NodeIgnoreTraversalIslandMismatch
==============
*/
_BOOL8 Bot_Score_NodeIgnoreTraversalIslandMismatch(const pathnode_t *node, const bot_score_parms_s *parms)
{
  __int64 entityNum; 
  gentity_s *v5; 
  sentient_s *sentient; 
  const pathnode_t *v7; 
  int v8; 
  int v9; 
  _BOOL8 result; 
  __int64 v11; 
  __int64 v12; 

  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2245, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v11) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2246, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v11, level.num_entities) )
      __debugbreak();
  }
  entityNum = parms->entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v12) = 2048;
    LODWORD(v11) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entityNum].r.isInUse != g_entityIsInUse[entityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2247, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( parms->entityNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( parms->entityNum )") )
    __debugbreak();
  v5 = &level.gentities[parms->entityNum];
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2251, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  sentient = v5->sentient;
  result = 0;
  if ( sentient )
  {
    if ( sentient->bNearestNodeValid )
    {
      v7 = Sentient_NearestNode(sentient);
      if ( v7 )
      {
        v8 = Path_NodeZoneFromNode(node);
        v9 = Path_NodeZoneFromNode(v7);
        if ( v8 == 255 || v9 != 255 && v8 != v9 && (Path_ZoneIsTraversalIsland(v8) || Path_ZoneIsTraversalIsland(v9)) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
Bot_Score_NodeIsCurrentlyOccupied
==============
*/
__int64 Bot_Score_NodeIsCurrentlyOccupied(const pathnode_t *node, __int16 botEntityNum, const bot_score_parms_s *parms)
{
  bot_data_t *EntityData; 
  const gentity_s *v7; 
  __int64 v9; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2101, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2102, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (parms->flags & 1) != 0 )
    return 0i64;
  if ( (unsigned int)botEntityNum >= level.num_entities )
  {
    LODWORD(v9) = botEntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2110, ASSERT_TYPE_ASSERT, "(unsigned)( botEntityNum ) < (unsigned)( level.num_entities )", "botEntityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v9, level.num_entities) )
      __debugbreak();
  }
  EntityData = Bot_GetEntityData(&level.gentities[botEntityNum]);
  if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2112, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !EntityData->botInfo.ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2113, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent )", (const char *)&queryFormat, "botData->botInfo.ent") )
    __debugbreak();
  if ( !EntityData->botInfo.ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2114, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent->sentient )", (const char *)&queryFormat, "botData->botInfo.ent->sentient") )
    __debugbreak();
  if ( Path_NodeUnclaimedByOther(node, EntityData->botInfo.ent->sentient) && ((pathnode_t::GetPos((pathnode_t *)node, &pos), !EntHandle::isDefined(&EntityData->botInfo.ent->r.ownerNum)) || (v7 = EntHandle::ent(&EntityData->botInfo.ent->r.ownerNum), !Bot_EntityOccupiesLocation(v7, &pos, 1.0))) )
    return 0i64;
  else
    return 1i64;
}

/*
==============
Bot_Score_NodeIsDangerous
==============
*/
__int64 Bot_Score_NodeIsDangerous(const pathnode_t *node, __int16 botEntityNum, float radius)
{
  bot_data_t *EntityData; 
  AIBotInterface *m_pAI; 
  unsigned __int64 eTeam; 
  gentity_s *ent; 
  bot_mem_event_t *v9; 
  __int64 v11; 
  bitarray<224> v12; 
  AIBotWrapper v13; 
  __int128 v14; 
  double v15; 
  unsigned int v16; 
  vec3_t pos; 
  bot_mem_iterator_t memIt; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2165, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (unsigned int)botEntityNum >= level.num_entities )
  {
    LODWORD(v11) = botEntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2174, ASSERT_TYPE_ASSERT, "(unsigned)( botEntityNum ) < (unsigned)( level.num_entities )", "botEntityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v11, level.num_entities) )
      __debugbreak();
  }
  EntityData = Bot_GetEntityData(&level.gentities[botEntityNum]);
  if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2176, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  AIBotWrapper::AIBotWrapper(&v13, EntityData);
  m_pAI = v13.m_pAI;
  if ( !v13.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2177, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  eTeam = (unsigned int)EntityData->botInfo.sentient->eTeam;
  v14 = 0ui64;
  v15 = 0.0;
  v16 = 0;
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  *((_DWORD *)&v14 + (eTeam >> 5)) |= 0x80000000 >> (eTeam & 0x1F);
  v12.array[6] = v16;
  ent = EntityData->botInfo.ent;
  *(_OWORD *)v12.array = v14;
  *(double *)&v12.array[4] = v15;
  if ( !AICommonInterface::BadPlace_IsNodeInAnyBadPlace(m_pAI, node, ent->clipmask, &v12) )
  {
    Bot_MemoryIterateInit(&memIt);
    v9 = Bot_MemoryIterate(EntityData, level.time, level.time - 60000, &memIt);
    if ( !v9 )
      return 0i64;
    while ( 1 )
    {
      if ( v9->type == BOT_MEM_DEATH )
      {
        pathnode_t::GetPos((pathnode_t *)node, &pos);
        if ( (float)((float)((float)((float)(pos.v[1] - v9->location2.v[1]) * (float)(pos.v[1] - v9->location2.v[1])) + (float)((float)(pos.v[0] - v9->location2.v[0]) * (float)(pos.v[0] - v9->location2.v[0]))) + (float)((float)(pos.v[2] - v9->location2.v[2]) * (float)(pos.v[2] - v9->location2.v[2]))) < (float)(radius * radius) )
          break;
      }
      v9 = Bot_MemoryIterate(EntityData, level.time, level.time - 60000, &memIt);
      if ( !v9 )
        return 0i64;
    }
  }
  return 1i64;
}

/*
==============
Bot_Score_NodeIsNearAllySentient
==============
*/
__int64 Bot_Score_NodeIsNearAllySentient(const pathnode_t *node, __int16 botEntityNum, float radius)
{
  gentity_s *v5; 
  bitarray<224> *AllTeamFlags; 
  sentient_s *v7; 
  vec3_t pos; 
  bitarray<224> iTeamFlags; 

  if ( (unsigned int)botEntityNum >= level.num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2205, ASSERT_TYPE_ASSERT, "(unsigned)( botEntityNum ) < (unsigned)( level.num_entities )", "botEntityNum doesn't index level.num_entities\n\t%i not in [0, %i)", botEntityNum, level.num_entities) )
    __debugbreak();
  v5 = &level.gentities[botEntityNum];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2215, ASSERT_TYPE_ASSERT, "( botEnt )", (const char *)&queryFormat, "botEnt") )
    __debugbreak();
  if ( !v5->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2216, ASSERT_TYPE_ASSERT, "( botEnt->sentient )", (const char *)&queryFormat, "botEnt->sentient") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
  iTeamFlags = *AllTeamFlags;
  v7 = Sentient_FirstSentient(&iTeamFlags);
  if ( !v7 )
    return 0i64;
  while ( 1 )
  {
    if ( !v7->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2222, ASSERT_TYPE_ASSERT, "( sentient->ent )", (const char *)&queryFormat, "sentient->ent") )
      __debugbreak();
    if ( Bot_IsCharacterActive(v7->ent) && AI_IsAlliedSentient(v5->sentient, v7) && v7 != v5->sentient && (float)((float)((float)((float)(pos.v[1] - v7->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - v7->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - v7->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - v7->ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - v7->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - v7->ent->r.currentOrigin.v[2]))) < (float)(radius * radius) )
      break;
    v7 = Sentient_NextSentient(v7, &iTeamFlags);
    if ( !v7 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
Bot_Score_NodeShouldIgnore
==============
*/
__int64 Bot_Score_NodeShouldIgnore(const pathnode_t *node, __int16 botEntityNum, const bot_score_parms_s *parms)
{
  bot_data_t *EntityData; 
  unsigned __int16 v7; 
  bool IsExposedSky; 
  int v9; 
  BOOL IsNodeIndexExposedSky; 
  __int64 v11; 
  pathlink_s *Links; 
  bool v14; 
  BOOL v15; 
  int v16; 
  __int64 v17; 
  pathlink_s *v18; 
  int v19; 
  ai_stance_e v20; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2287, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2288, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  EntityData = Bot_GetEntityData(&level.gentities[botEntityNum]);
  if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2291, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !EntityData->botInfo.ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2292, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent )", (const char *)&queryFormat, "botData->botInfo.ent") )
    __debugbreak();
  if ( !EntityData->botInfo.ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2293, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent->sentient )", (const char *)&queryFormat, "botData->botInfo.ent->sentient") )
    __debugbreak();
  v7 = Path_ConvertNodeToIndex(node);
  if ( Path_IsNodeDisconnected(v7) || node->constant.parent.index || Path_IsNodeTraversalOrOverlapsTraversal(node) && (parms->flags & 0x100) == 0 || Bot_Score_NodeIsCurrentlyOccupied(node, botEntityNum, parms) )
    return 1i64;
  if ( (parms->flags & 4) != 0 )
  {
    IsExposedSky = Path_IsExposedSky(node);
    v9 = 0;
    IsNodeIndexExposedSky = IsExposedSky;
    if ( !IsExposedSky )
    {
      v11 = 0i64;
      while ( v9 < node->dynamic.wLinkCount )
      {
        Links = node->constant.Links;
        if ( Links[v11].fDist <= 100.0 )
          IsNodeIndexExposedSky = Path_IsNodeIndexExposedSky(Links[v11].nodeNum);
        ++v9;
        ++v11;
        if ( IsNodeIndexExposedSky )
          return 1i64;
      }
    }
    if ( IsNodeIndexExposedSky )
      return 1i64;
  }
  if ( (parms->flags & 2) != 0 )
  {
    v14 = Path_IsExposedSky(node);
    v15 = !v14;
    v16 = 0;
    if ( v14 )
    {
      v17 = 0i64;
      while ( v16 < node->dynamic.wLinkCount )
      {
        v18 = node->constant.Links;
        if ( v18[v17].fDist <= 100.0 )
          v15 = !Path_IsNodeIndexExposedSky(v18[v17].nodeNum);
        ++v16;
        ++v17;
        if ( v15 )
          return 1i64;
      }
    }
    if ( v15 )
      return 1i64;
  }
  if ( (parms->flags & 0x200) != 0 )
    return 0i64;
  v19 = 7;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityData->botInfo.playerState->pm_flags, ACTIVE, 0x21u) )
    v19 = 6;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityData->botInfo.playerState->pm_flags, ACTIVE, 0x23u) )
    v19 &= ~4u;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityData->botInfo.playerState->pm_flags, ACTIVE, 0x22u) )
    v19 &= ~2u;
  if ( v19 != 7 && (v20 = Path_AllowedStancesForNode(node), (v20 & 7) == 0) && (v20 & v19) == 0 )
    return 1i64;
  else
    return 0i64;
}

/*
==============
Bot_Score_NodeWasRecentlyUsed
==============
*/
_BOOL8 Bot_Score_NodeWasRecentlyUsed(const pathnode_t *node, const bot_score_parms_s *parms, float recentUseTime)
{
  gentity_s *GEntity; 
  gentity_s *v6; 
  const char *GameType; 
  int NodeTeam; 
  __int64 v9; 
  int v10; 
  __int64 v12; 

  GEntity = G_GetGEntity(parms->entityNum);
  v6 = GEntity;
  if ( (parms->flags & 1) != 0 )
    return 0i64;
  if ( (!GEntity || !GEntity->sentient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2139, ASSERT_TYPE_ASSERT, "( thisEnt && thisEnt->sentient )", (const char *)&queryFormat, "thisEnt && thisEnt->sentient") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2140, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", "%s\n\tAccess to pathnode_dynamic_t::bots", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
    __debugbreak();
  if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2141, ASSERT_TYPE_ASSERT, "(!Path_MapUsesScriptedAIData())", "%s\n\tmap/mode is only set up to use scripted soldier data, should not be accessing pathnode_dynamic::bots", "!Path_MapUsesScriptedAIData()") )
      __debugbreak();
  }
  NodeTeam = Path_GetNodeTeam(v6->sentient->eTeam);
  v9 = NodeTeam;
  if ( (unsigned int)NodeTeam >= 2 )
  {
    LODWORD(v12) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2144, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( (2) )", "nodeTeam doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  v10 = node->dynamic.actors.dangerousNodeTime[v9];
  return v10 > 0 && (float)((float)(level.time - v10) * 0.001) <= recentUseTime;
}

/*
==============
Bot_Score_RndPick
==============
*/
__int64 Bot_Score_RndPick(bot_score_item_s *items, int itemCount)
{
  if ( !items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2431, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
    __debugbreak();
  if ( itemCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2432, ASSERT_TYPE_ASSERT, "( itemCount >= 0 )", (const char *)&queryFormat, "itemCount >= 0") )
    __debugbreak();
  return (unsigned int)items[G_rand() % itemCount].object;
}

/*
==============
Bot_Score_RndPickSortedMultiple
==============
*/
void Bot_Score_RndPickSortedMultiple(bot_score_item_s *items, int itemCount, int numToPick, int *nodesPicked)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11[2048]; 

  v4 = numToPick;
  v6 = itemCount;
  if ( !items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2454, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
    __debugbreak();
  if ( (int)v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2455, ASSERT_TYPE_ASSERT, "( itemCount >= 0 )", (const char *)&queryFormat, "itemCount >= 0") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2456, ASSERT_TYPE_ASSERT, "( numToPick > 0 )", (const char *)&queryFormat, "numToPick > 0") )
    __debugbreak();
  if ( (int)v4 > (int)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2457, ASSERT_TYPE_ASSERT, "( numToPick <= itemCount )", (const char *)&queryFormat, "numToPick <= itemCount") )
    __debugbreak();
  memcpy_0(v11, items, 8 * v6);
  if ( (int)v4 > 0 )
  {
    v8 = 0i64;
    while ( 1 )
    {
      v9 = (int)fsqrt((float)(G_rand() % ((int)v6 * (int)v6)));
      v10 = (int)v6 - v9 - 1i64;
      nodesPicked[v8++] = v11[2 * v10];
      if ( v8 >= v4 )
        break;
      if ( v10 < (int)v6 - 1 )
        qmemcpy(&v11[2 * v10], &v11[2 * v10 + 2], 8 * ((int)v6 - 1 - (__int64)((int)v6 - v9 - 1)));
      LODWORD(v6) = v6 - 1;
    }
  }
}

/*
==============
Bot_Score_RndPickSortedSingle
==============
*/
__int64 Bot_Score_RndPickSortedSingle(bot_score_item_s *items, int itemCount)
{
  if ( !items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2442, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
    __debugbreak();
  if ( itemCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2443, ASSERT_TYPE_ASSERT, "( itemCount >= 0 )", (const char *)&queryFormat, "itemCount >= 0") )
    __debugbreak();
  return (unsigned int)items[itemCount - (int)fsqrt((float)(G_rand() % (itemCount * itemCount))) - 1].object;
}

/*
==============
Bot_Score_ScoreNodesInitParms
==============
*/
void Bot_Score_ScoreNodesInitParms(const bot_data_t *botData, bot_score_parms_s *parms, bot_score_type_t scoreType)
{
  __int64 v6; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2557, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2558, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)scoreType >= BOT_SCORE_TYPE_COUNT )
  {
    LODWORD(v6) = scoreType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2559, ASSERT_TYPE_ASSERT, "(unsigned)( scoreType ) < (unsigned)( BOT_SCORE_TYPE_COUNT )", "scoreType doesn't index BOT_SCORE_TYPE_COUNT\n\t%i not in [0, %i)", v6, 17) )
      __debugbreak();
  }
  *(_QWORD *)&parms->entityNum = 0i64;
  *(_QWORD *)&parms->integer1 = 0i64;
  *(_QWORD *)&parms->integer3 = 0i64;
  *(_QWORD *)&parms->vector1.y = 0i64;
  *(_QWORD *)parms->vector2.v = 0i64;
  *(_QWORD *)&parms->vector2.z = 0i64;
  parms->entityNum = botData->botInfo.ent->s.number;
  parms->scoreType = scoreType;
}

/*
==============
Bot_Score_ScoreNodesPick
==============
*/
__int64 Bot_Score_ScoreNodesPick(const bot_data_t *botData, bot_score_item_s *objects, int objectsCount, int selectCount, bot_score_parms_s *parms, int nodesToPick, int *nodesPicked)
{
  __int64 v7; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  int v15; 
  int *p_score; 
  int v17; 

  v7 = objectsCount;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2572, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !objects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2573, ASSERT_TYPE_ASSERT, "( objects )", (const char *)&queryFormat, "objects") )
    __debugbreak();
  if ( (int)v7 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2574, ASSERT_TYPE_ASSERT, "( objectsCount > 0 )", (const char *)&queryFormat, "objectsCount > 0") )
    __debugbreak();
  if ( selectCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2575, ASSERT_TYPE_ASSERT, "( selectCount > 0 )", (const char *)&queryFormat, "selectCount > 0") )
    __debugbreak();
  if ( selectCount > (int)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2576, ASSERT_TYPE_ASSERT, "( selectCount <= objectsCount )", (const char *)&queryFormat, "selectCount <= objectsCount") )
    __debugbreak();
  if ( nodesToPick <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2577, ASSERT_TYPE_ASSERT, "( nodesToPick > 0 )", (const char *)&queryFormat, "nodesToPick > 0") )
    __debugbreak();
  if ( nodesToPick > (int)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2578, ASSERT_TYPE_ASSERT, "( nodesToPick <= objectsCount )", (const char *)&queryFormat, "nodesToPick <= objectsCount") )
    __debugbreak();
  if ( nodesToPick > selectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2579, ASSERT_TYPE_ASSERT, "( nodesToPick <= selectCount )", (const char *)&queryFormat, "nodesToPick <= selectCount") )
    __debugbreak();
  botData->botDebugData.debugScoresSaving = 0;
  v11 = DVARINT_bot_ScoreType;
  if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer == parms->scoreType )
  {
    v12 = DVARINT_bot_ScoreClient;
    if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer == -1 )
      goto LABEL_37;
    v13 = DVARINT_bot_ScoreClient;
    if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.integer == botData->botInfo.ent->s.number )
    {
LABEL_37:
      v14 = DVARBOOL_bot_ScoreHold;
      if ( !DVARBOOL_bot_ScoreHold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreHold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( !v14->current.enabled || botData->botDebugData.debugScoresCount <= 0 )
      {
        botData->botDebugData.debugScoresSaving = 1;
        botData->botDebugData.debugScoresCount = 0;
        botData->botDebugData.debugScoresPicked = -1;
        memset_0(botData->botDebugData.debugScores, 0, sizeof(botData->botDebugData.debugScores));
        botData->botDebugData.debugScoresParms = *parms;
      }
    }
  }
  Bot_Score_ScoreSet(objects, v7, parms);
  Bot_Score_SortTop(objects, v7, selectCount);
  v15 = selectCount - 1;
  if ( selectCount - 1 >= 0 )
  {
    p_score = &objects[v15].score;
    do
    {
      if ( *p_score > 0 )
        break;
      p_score -= 2;
      selectCount = v15--;
    }
    while ( v15 >= 0 );
  }
  v17 = selectCount;
  if ( nodesToPick < selectCount )
    v17 = nodesToPick;
  if ( v17 == 1 )
  {
    if ( !objects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2442, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
      __debugbreak();
    if ( selectCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2443, ASSERT_TYPE_ASSERT, "( itemCount >= 0 )", (const char *)&queryFormat, "itemCount >= 0") )
      __debugbreak();
    *nodesPicked = objects[selectCount - (int)fsqrt((float)(G_rand() % (selectCount * selectCount))) - 1].object;
  }
  else if ( v17 > 1 )
  {
    Bot_Score_RndPickSortedMultiple(objects, selectCount, v17, nodesPicked);
  }
  if ( botData->botDebugData.debugScoresSaving )
  {
    if ( (int)v7 > 0 )
      std::_Sort_unchecked<bot_debug_score_t *,int (*)(bot_debug_score_t const &,bot_debug_score_t const &)>(botData->botDebugData.debugScores, (bot_debug_score_t *)&botData->scriptedAgentInfo.threat + v7 + 457, (8 * (9 * v7 + 9) - 72) / 72, CompareBotDebugScoreDecreasing);
    botData->botDebugData.debugScoresPicked = *nodesPicked;
    botData->botDebugData.debugScoresSelectCount = selectCount;
  }
  return (unsigned int)v17;
}

/*
==============
Bot_Score_ScoreNodesSort
==============
*/
__int64 Bot_Score_ScoreNodesSort(const bot_data_t *botData, bot_score_item_s *objects, int objectsCount, bot_score_parms_s *parms, int *nodesPicked)
{
  __int64 v5; 
  __int64 v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 

  v5 = objectsCount;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2650, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !objects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2651, ASSERT_TYPE_ASSERT, "( objects )", (const char *)&queryFormat, "objects") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2652, ASSERT_TYPE_ASSERT, "( objectsCount > 0 )", (const char *)&queryFormat, "objectsCount > 0") )
    __debugbreak();
  v9 = 0i64;
  botData->botDebugData.debugScoresSaving = 0;
  v10 = DVARINT_bot_ScoreType;
  if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer == parms->scoreType )
  {
    v11 = DVARINT_bot_ScoreClient;
    if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.integer == -1 )
      goto LABEL_22;
    v12 = DVARINT_bot_ScoreClient;
    if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer == botData->botInfo.ent->s.number )
    {
LABEL_22:
      v13 = DVARBOOL_bot_ScoreHold;
      if ( !DVARBOOL_bot_ScoreHold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreHold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( !v13->current.enabled || botData->botDebugData.debugScoresCount <= 0 )
      {
        botData->botDebugData.debugScoresSaving = 1;
        botData->botDebugData.debugScoresCount = 0;
        botData->botDebugData.debugScoresPicked = -1;
        memset_0(botData->botDebugData.debugScores, 0, sizeof(botData->botDebugData.debugScores));
        *(__m256i *)&botData->botDebugData.debugScoresParms.entityNum = *(__m256i *)&parms->entityNum;
        *(_OWORD *)botData->botDebugData.debugScoresParms.vector2.v = *(_OWORD *)parms->vector2.v;
      }
    }
  }
  Bot_Score_ScoreSet(objects, v5, parms);
  Bot_Score_Sort(objects, v5);
  if ( (int)v5 > 0 )
  {
    do
    {
      nodesPicked[v9] = objects[v9].object;
      ++v9;
    }
    while ( v9 < v5 );
  }
  if ( botData->botDebugData.debugScoresSaving )
  {
    if ( (int)v5 > 0 )
      std::_Sort_unchecked<bot_debug_score_t *,int (*)(bot_debug_score_t const &,bot_debug_score_t const &)>(botData->botDebugData.debugScores, (bot_debug_score_t *)&botData->scriptedAgentInfo.threat + v5 + 457, (8 * (9 * v5 + 9) - 72) / 72, CompareBotDebugScoreDecreasing);
    botData->botDebugData.debugScoresPicked = *nodesPicked;
    botData->botDebugData.debugScoresSelectCount = v5;
  }
  return (unsigned int)v5;
}

/*
==============
Bot_Score_ScoreSet
==============
*/
__int64 Bot_Score_ScoreSet(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  __int64 v3; 
  __int64 scoreType; 
  void (__fastcall *prepFunc)(bot_score_item_s *, int, bot_score_parms_s *); 
  unsigned int v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  __int64 v13; 
  int (__fastcall *scoreFunc)(int, const bot_score_parms_s *); 

  v3 = itemCount;
  if ( !items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2385, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2386, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( parms->scoreType >= (unsigned int)BOT_SCORE_TYPE_COUNT )
  {
    LODWORD(v13) = parms->scoreType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2387, ASSERT_TYPE_ASSERT, "(unsigned)( parms->scoreType ) < (unsigned)( BOT_SCORE_TYPE_COUNT )", "parms->scoreType doesn't index BOT_SCORE_TYPE_COUNT\n\t%i not in [0, %i)", v13, 17) )
      __debugbreak();
  }
  if ( parms->scoreType == BOT_SCORE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2388, ASSERT_TYPE_ASSERT, "( parms->scoreType != BOT_SCORE_NONE )", (const char *)&queryFormat, "parms->scoreType != BOT_SCORE_NONE") )
    __debugbreak();
  if ( !BOT_SCORE_FUNCS[parms->scoreType].scoreFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2389, ASSERT_TYPE_ASSERT, "( BOT_SCORE_FUNCS[parms->scoreType].scoreFunc != 0 )", (const char *)&queryFormat, "BOT_SCORE_FUNCS[parms->scoreType].scoreFunc != NULL") )
    __debugbreak();
  scoreType = parms->scoreType;
  prepFunc = BOT_SCORE_FUNCS[scoreType].prepFunc;
  scoreFunc = BOT_SCORE_FUNCS[scoreType].scoreFunc;
  if ( prepFunc )
    prepFunc(items, v3, parms);
  v8 = 0;
  v9 = 0;
  if ( (int)v3 > 0 )
  {
    v10 = 0i64;
    v9 = v3;
    do
    {
      v11 = scoreFunc(items[v10].object, parms);
      BotScoreDebugNode(v11, items[v10].object, parms->scoreType, parms->entityNum);
      items[v10++].score = v11;
    }
    while ( v10 < v3 );
    v8 = 0;
  }
  LOBYTE(v8) = v9 - 1 == (_DWORD)v3;
  return v8;
}

/*
==============
Bot_Score_Sort
==============
*/
void Bot_Score_Sort(bot_score_item_s *items, int itemCount)
{
  __int64 v2; 

  v2 = itemCount;
  if ( !items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2420, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
    __debugbreak();
  if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2421, ASSERT_TYPE_ASSERT, "( itemCount >= 0 )", (const char *)&queryFormat, "itemCount >= 0") )
    __debugbreak();
  std::_Sort_unchecked<bot_score_item_s *,int (*)(bot_score_item_s const &,bot_score_item_s const &)>(items, &items[v2], v2, CompareBotScoreItemDecreasing);
}

/*
==============
Bot_Score_SortTop
==============
*/
void Bot_Score_SortTop(bot_score_item_s *items, int itemCount, int topRange)
{
  int score; 
  int v7; 
  int v8; 
  bot_score_item_s *v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  bot_score_item_s *v14; 
  bot_score_item_s v15; 
  int *p_score; 
  int v17; 
  bool v18; 
  int v19; 

  if ( !items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2490, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
    __debugbreak();
  if ( itemCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2491, ASSERT_TYPE_ASSERT, "( itemCount >= 0 )", (const char *)&queryFormat, "itemCount >= 0") )
    __debugbreak();
  if ( topRange < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2492, ASSERT_TYPE_ASSERT, "( topRange >= 0 )", (const char *)&queryFormat, "topRange >= 0") )
    __debugbreak();
  if ( topRange > itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2493, ASSERT_TYPE_ASSERT, "( topRange <= itemCount )", (const char *)&queryFormat, "topRange <= itemCount") )
    __debugbreak();
  score = 0x7FFFFFFF;
  v7 = -1;
  if ( topRange <= itemCount / 3 )
  {
    v8 = 0;
    if ( itemCount > 0 )
    {
      v9 = items;
      do
      {
        v10 = v7;
        v11 = score;
        if ( v8 >= topRange )
        {
          if ( v7 >= 0 && v9->score > score )
          {
            v12 = 0;
            v13 = v7;
            v7 = -1;
            v14 = &items[v13];
            v15 = *v14;
            *v14 = *v9;
            score = 0x7FFFFFFF;
            *v9 = v15;
            if ( topRange > 0 )
            {
              p_score = &items->score;
              do
              {
                v17 = *p_score;
                p_score += 2;
                v18 = v17 < score;
                v19 = v12;
                if ( v17 >= score )
                  v17 = score;
                if ( !v18 )
                  v19 = v7;
                ++v12;
                v7 = v19;
                score = v17;
              }
              while ( v12 < topRange );
            }
          }
        }
        else
        {
          score = v9->score;
          v7 = v8;
          if ( score >= v11 )
            v7 = v10;
          if ( score >= v11 )
            score = v11;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < itemCount );
    }
    itemCount = topRange;
  }
  Bot_Score_Sort(items, itemCount);
}

/*
==============
CompareBotDebugScoreDecreasing
==============
*/
_BOOL8 CompareBotDebugScoreDecreasing(const bot_debug_score_t *obj1, const bot_debug_score_t *obj2)
{
  return obj2->score < obj1->score;
}

/*
==============
CompareBotScoreItemDecreasing
==============
*/
_BOOL8 CompareBotScoreItemDecreasing(const bot_score_item_s *obj1, const bot_score_item_s *obj2)
{
  return obj2->score < obj1->score;
}

