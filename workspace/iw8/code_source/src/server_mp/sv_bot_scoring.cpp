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
  bool v5; 
  __int64 entityNum; 
  const char *v17; 
  _BYTE v22[32]; 
  vec3_t xyz; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  v5 = (unsigned __int64)v22 == _security_cookie;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [r8+14h]
  }
  _RDI = parms;
  if ( (unsigned __int64)v22 != _security_cookie )
    goto LABEL_4;
  __asm { vucomiss xmm6, dword ptr [r8+18h] }
  if ( (unsigned __int64)v22 != _security_cookie )
    goto LABEL_4;
  __asm { vucomiss xmm6, dword ptr [r8+1Ch] }
  if ( (unsigned __int64)v22 != _security_cookie )
  {
LABEL_4:
    __asm { vxorps  xmm2, xmm2, xmm2; yaw }
    G_DebugBox(&parms->vector1, &targetBox, *(float *)&_XMM2, &colorBlue, 1, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+14h]
      vmovss  xmm1, dword ptr [rdi+18h]
    }
    entityNum = (unsigned int)_RDI->entityNum;
    __asm
    {
      vmovss  dword ptr [rsp+68h+xyz], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vmulss  xmm2, xmm0, cs:__real@41000000
      vmovss  dword ptr [rsp+68h+xyz+4], xmm1
      vmovss  xmm1, cs:__real@43100000
      vsubss  xmm2, xmm1, xmm2
      vaddss  xmm0, xmm2, dword ptr [rdi+1Ch]
      vmovss  dword ptr [rsp+68h+xyz+8], xmm0
    }
    v17 = j_va("client %i", entityNum);
    __asm { vmovss  xmm3, cs:__real@3f800000; scale }
    SV_BotDebugString(NULL, &xyz, &colorBlue, *(float *)&_XMM3, v17, 0);
  }
  _RCX = &_RDI->vector2;
  __asm { vucomiss xmm6, dword ptr [rcx] }
  if ( !v5 )
    goto LABEL_8;
  __asm { vucomiss xmm6, dword ptr [rcx+4] }
  if ( !v5 )
    goto LABEL_8;
  __asm { vucomiss xmm6, dword ptr [rcx+8] }
  if ( !v5 )
  {
LABEL_8:
    __asm { vxorps  xmm2, xmm2, xmm2; yaw }
    G_DebugBox(_RCX, &targetBox, *(float *)&_XMM2, &colorRed, 1, 1);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
Bot_Score_Dbg_NodeTrap
==============
*/
void Bot_Score_Dbg_NodeTrap(bot_score_item_s *items, int itemCount, bot_score_parms_s *parms)
{
  int integer1; 
  unsigned __int16 v7; 
  pathnode_t *v8; 
  pathnode_t *v9; 
  __int64 entityNum; 
  const char *v20; 
  __int64 v25; 
  const char *v31; 
  vec3_t xyz; 
  vec3_t pos; 
  vec3_t origin; 

  integer1 = parms->integer1;
  if ( integer1 != 0xFFFF && parms->integer2 != 0xFFFF && Path_NodeValid(integer1) && Path_NodeValid(parms->integer2) )
  {
    v7 = parms->integer1;
    __asm { vmovaps [rsp+88h+var_18], xmm8 }
    v8 = Path_ConvertIndexToNode(v7);
    v9 = Path_ConvertIndexToNode(parms->integer2);
    pathnode_t::GetPos(v8, &pos);
    pathnode_t::GetPos(v9, &origin);
    __asm { vxorps  xmm2, xmm2, xmm2; yaw }
    G_DebugBox(&pos, &targetBox_0, *(float *)&_XMM2, &colorBlue, 1, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+pos]
      vmovss  xmm1, dword ptr [rsp+88h+pos+4]
    }
    entityNum = (unsigned int)parms->entityNum;
    __asm
    {
      vmovss  xmm8, cs:__real@43100000
      vmovss  dword ptr [rsp+88h+xyz], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vmovss  dword ptr [rsp+88h+xyz+4], xmm1
      vmulss  xmm1, xmm0, cs:__real@41000000
      vsubss  xmm0, xmm8, xmm1
      vaddss  xmm1, xmm0, dword ptr [rsp+88h+pos+8]
      vmovss  dword ptr [rsp+88h+xyz+8], xmm1
    }
    v20 = j_va("client %i", entityNum);
    __asm { vmovss  xmm3, cs:__real@3f800000; scale }
    SV_BotDebugString(NULL, &xyz, &colorBlue, *(float *)&_XMM3, v20, 0);
    __asm { vxorps  xmm2, xmm2, xmm2; yaw }
    G_DebugBox(&origin, &targetBox_0, *(float *)&_XMM2, &colorGreen, 1, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+origin]
      vmovss  xmm1, dword ptr [rsp+88h+origin+4]
    }
    v25 = (unsigned int)parms->entityNum;
    __asm
    {
      vmovss  dword ptr [rsp+88h+xyz], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vmovss  dword ptr [rsp+88h+xyz+4], xmm1
      vmulss  xmm1, xmm0, cs:__real@41000000
      vsubss  xmm1, xmm8, xmm1
      vaddss  xmm0, xmm1, dword ptr [rsp+88h+origin+8]
      vmovss  dword ptr [rsp+88h+xyz+8], xmm0
    }
    v31 = j_va("client %i", v25);
    __asm { vmovss  xmm3, cs:__real@3f800000; scale }
    SV_BotDebugString(NULL, &xyz, &colorGreen, *(float *)&_XMM3, v31, 0);
    __asm { vmovaps xmm8, [rsp+88h+var_18] }
  }
}

/*
==============
Bot_Score_NodeCapture
==============
*/
__int64 Bot_Score_NodeCapture(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v5; 
  const pathnode_t *v6; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v11; 
  int v14; 
  bot_score_type_t v15; 
  int v16; 
  int v17; 
  int v19; 
  bot_score_type_t v20; 
  int v21; 
  int v22; 
  int v25; 
  bot_score_type_t v26; 
  int v27; 
  int v28; 
  int v30; 
  __int64 result; 

  _RSI = parms;
  v5 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 828, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v6 = Path_ConvertIndexToNode(v5);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 831, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  if ( Bot_Score_NodeShouldIgnore(v6, _RSI->entityNum, _RSI) )
    goto LABEL_10;
  __asm { vmovss  xmm2, cs:__real@42000000; radius }
  if ( Bot_Score_NodeIsDangerous(v6, _RSI->entityNum, *(float *)&_XMM2) )
  {
LABEL_10:
    result = 0i64;
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm6, dword ptr [rsi+14h]
      vucomiss xmm6, dword ptr [rsi+18h]
      vucomiss xmm6, dword ptr [rsi+1Ch]
      vucomiss xmm6, dword ptr [rsi+20h]
      vmovaps [rsp+78h+var_48], xmm7
      vucomiss xmm6, dword ptr [rsi+24h]
      vucomiss xmm6, dword ptr [rsi+28h]
    }
    entityNum = _RSI->entityNum;
    scoreType = _RSI->scoreType;
    v11 = Bot_Score_Factor_ProneCover360(v6);
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vmovaps xmm1, xmm7; weight
    }
    v14 = BotScoreDebugFactor(0, *(float *)&_XMM1, v11, scoreType, entityNum);
    LOWORD(scoreType) = _RSI->entityNum;
    v15 = _RSI->scoreType;
    v16 = v14;
    v17 = Bot_Score_Factor_NoTraffic360(v6);
    __asm { vmovaps xmm1, xmm7; weight }
    v19 = BotScoreDebugFactor(1, *(float *)&_XMM1, v17, v15, scoreType);
    LOWORD(scoreType) = _RSI->entityNum;
    v20 = _RSI->scoreType;
    v21 = v19 + v16;
    v22 = Bot_Score_Factor_AwayFromAlliedPlayers(v6, _RSI->entityNum);
    __asm
    {
      vmovss  xmm6, cs:__real@40000000
      vmovaps xmm1, xmm6; weight
    }
    v25 = BotScoreDebugFactor(2, *(float *)&_XMM1, v22, v20, scoreType);
    LOWORD(scoreType) = _RSI->entityNum;
    v26 = _RSI->scoreType;
    v27 = v25 + v21;
    v28 = Bot_Score_Factor_NotRecentlyUsed(v6, _RSI);
    __asm { vmovss  xmm1, cs:__real@3f333333; weight }
    v30 = BotScoreDebugFactor(3, *(float *)&_XMM1, v28, v26, scoreType) + v27;
    __asm { vmovaps xmm7, [rsp+78h+var_48] }
    result = (unsigned int)(v30 + Bot_Score_Factor_HideFromAerialEnemiesHelper(v6, _RSI, 5));
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
  return result;
}

/*
==============
Bot_Score_NodeProtect
==============
*/

__int64 __fastcall Bot_Score_NodeProtect(int object, const bot_score_parms_s *parms, __int64 a3, double _XMM3_8)
{
  unsigned __int16 v5; 
  const pathnode_t *v6; 
  int flags; 
  const pathnode_t *v9; 
  int StopGoalStance; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v15; 
  int v17; 
  bot_score_type_t v18; 
  int v19; 
  int v20; 
  int v22; 
  bot_score_type_t v23; 
  int v24; 
  int v25; 
  int v27; 
  bot_score_type_t v28; 
  int v30; 
  int v31; 
  int v33; 
  bot_score_type_t v34; 
  int v35; 
  int v36; 
  int v38; 
  bot_score_type_t v39; 
  int v40; 
  int v41; 
  int v44; 
  int v45; 
  int v46; 
  bot_score_type_t v47; 
  int v48; 
  int v50; 
  bot_score_type_t v51; 
  int v52; 
  int v53; 
  int v55; 

  v5 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 924, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v6 = Path_ConvertIndexToNode(v5);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 927, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  flags = parms->flags;
  if ( parms->integer1 == 0xFFFF )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@40a00000; recentUseTime }
  if ( Bot_Score_NodeWasRecentlyUsed(v6, parms, *(float *)&_XMM2) || Path_NodeExposureGetTraffic(v6) )
    return 0i64;
  v9 = Path_ConvertIndexToNode(parms->integer1);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 946, ASSERT_TYPE_ASSERT, "( nodeNearestPoint )", (const char *)&queryFormat, "nodeNearestPoint") )
    __debugbreak();
  if ( !Path_NodesVisibleAreaNoPeek(v9, v6) )
    return 0i64;
  StopGoalStance = Bot_GetStopGoalStance(v6);
  if ( !Path_NodeExposedToPoint(v6, &parms->vector1, StopGoalStance) )
    return 0i64;
  if ( Bot_Score_NodeShouldIgnore(v6, parms->entityNum, parms) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@43fa0000; radius }
  if ( Bot_Score_NodeIsDangerous(v6, parms->entityNum, *(float *)&_XMM2) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@42c80000; radius }
  if ( Bot_Score_NodeIsNearAllySentient(v6, parms->entityNum, *(float *)&_XMM2) || (flags & 0x10) != 0 && !Path_NodesVisibleNoPeek(v9, v6) )
    return 0i64;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v15 = Bot_Score_Factor_CoverRearFromPoint(v6, &parms->vector1);
  __asm { vmovss  xmm1, cs:__real@3f800000; weight }
  v17 = BotScoreDebugFactor(0, *(float *)&_XMM1, v15, scoreType, entityNum);
  LOWORD(scoreType) = parms->entityNum;
  v18 = parms->scoreType;
  v19 = v17;
  v20 = Bot_Score_Factor_ProneCoverFacingPoint(v6, &parms->vector1);
  __asm { vmovss  xmm1, cs:__real@3f000000; weight }
  v22 = BotScoreDebugFactor(1, *(float *)&_XMM1, v20, v18, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v23 = parms->scoreType;
  v24 = v22 + v19;
  v25 = Bot_Score_Factor_ProneCover360(v6);
  __asm { vmovss  xmm1, cs:__real@3f000000; weight }
  v27 = BotScoreDebugFactor(2, *(float *)&_XMM1, v25, v23, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v28 = parms->scoreType;
  __asm { vxorps  xmm3, xmm3, xmm3; addDistance }
  v30 = v27 + v24;
  v31 = Bot_Score_Factor_IdealRangeWeapon(v6, parms->entityNum, &parms->vector1, *(const float *)&_XMM3);
  __asm { vmovss  xmm1, cs:__real@3f99999a; weight }
  v33 = BotScoreDebugFactor(3, *(float *)&_XMM1, v31, v28, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v34 = parms->scoreType;
  v35 = v33 + v30;
  v36 = Bot_Score_Factor_NoTrafficRearFromPoint(v6, &parms->vector1);
  __asm { vmovss  xmm1, cs:__real@40000000; weight }
  v38 = BotScoreDebugFactor(4, *(float *)&_XMM1, v36, v34, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v39 = parms->scoreType;
  v40 = v38 + v35;
  v41 = Bot_Score_Factor_VisibilityToNode(v6, v9);
  __asm
  {
    vmovss  xmm1, cs:__real@40000000; weight
    vmovss  xmm3, cs:__real@3f99999a; weight
  }
  v44 = BotScoreDebugFactor(5, *(float *)&_XMM1, v41, v39, scoreType) + v40;
  v45 = Bot_Score_Factor_AwayFromCenterPointHelper(v6, parms, 6, *(float *)&_XMM3);
  LOWORD(scoreType) = parms->entityNum;
  v46 = v45 + v44;
  v47 = parms->scoreType;
  v48 = Bot_Score_Factor_AwayFromAlliedPlayers(v6, parms->entityNum);
  __asm { vmovss  xmm1, cs:__real@3f800000; weight }
  v50 = BotScoreDebugFactor(7, *(float *)&_XMM1, v48, v47, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v51 = parms->scoreType;
  v52 = v50 + v46;
  v53 = Bot_Score_Factor_NotRecentlyUsed(v6, parms);
  __asm { vmovss  xmm1, cs:__real@3f800000; weight }
  v55 = BotScoreDebugFactor(8, *(float *)&_XMM1, v53, v51, scoreType) + v52;
  return (unsigned int)(v55 + Bot_Score_Factor_HideFromAerialEnemiesHelper(v6, parms, 10));
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
  int v14; 
  bot_score_type_t v17; 
  int v19; 
  int v20; 
  int v22; 
  bot_score_type_t v23; 
  int v24; 
  int v25; 
  float fmt; 
  __int64 v28; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 997, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v28) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 998, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v28, level.num_entities) )
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
    __asm { vmovss  xmm1, cs:__real@3f800000; weight }
    v14 = BotScoreDebugFactor(0, *(float *)&_XMM1, v12, scoreType, entityNum);
    __asm
    {
      vmovss  xmm2, cs:__real@44098000; minRange
      vmovss  xmm0, cs:__real@40000000
    }
    LOWORD(scoreType) = parms->entityNum;
    v17 = parms->scoreType;
    __asm
    {
      vmovaps xmm3, xmm2; maxRange
      vmovss  dword ptr [rsp+68h+fmt], xmm0
    }
    v19 = v14;
    v20 = Bot_Score_Factor_IdealRange(v6, &parms->vector1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
    __asm { vmovss  xmm1, cs:__real@3f800000; weight }
    v22 = BotScoreDebugFactor(1, *(float *)&_XMM1, v20, v17, scoreType);
    LOWORD(scoreType) = parms->entityNum;
    v23 = parms->scoreType;
    v24 = v22 + v19;
    v25 = Bot_Score_Factor_VisibilityToNode(v6, v7);
    __asm { vmovss  xmm1, cs:__real@3ecccccd; weight }
    return (unsigned int)(BotScoreDebugFactor(2, *(float *)&_XMM1, v25, v23, scoreType) + v24);
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
  char v22; 
  char v23; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int RawMax; 
  int v35; 
  __int16 v36; 
  bot_score_type_t v37; 
  int v38; 
  int v39; 
  __int64 v41; 
  vec3_t pos; 
  vec3_t v43; 
  vec2_t vec; 

  v3 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1045, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v41) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1046, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v41, level.num_entities) )
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
  _R14 = &v5->r.currentOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm3, xmm0, dword ptr [rsp+0B8h+pos]
    vmovss  xmm1, dword ptr [r14+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+0B8h+pos+4]
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+0B8h+pos+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@47afc800
  }
  if ( !(v22 | v23) && Path_NodeExposedToPoint(v6, &parms->vector1, 7) && Path_NodesVisibleNoPeek(v6, v7) && (!v8 || Path_NodesVisibleNoPeek(v6, v8)) && Path_NodeExposedToPoint(v6, &v5->r.currentOrigin, 1) )
  {
    entityNum = parms->entityNum;
    scoreType = parms->scoreType;
    pathnode_t::GetPos(v6, &v43);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+var_68]
      vsubss  xmm1, xmm0, dword ptr [r14]
      vmovss  xmm2, dword ptr [rsp+0B8h+var_68+4]
      vsubss  xmm0, xmm2, dword ptr [r14+4]
      vmovss  dword ptr [rsp+0B8h+vec], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+var_68+8]
      vsubss  xmm2, xmm1, dword ptr [r14+8]
      vmovss  [rsp+0B8h+var_50], xmm2
      vmovss  dword ptr [rsp+0B8h+vec+4], xmm0
    }
    *(double *)&_XMM0 = vectoyaw(&vec);
    __asm { vmovaps xmm1, xmm0; yaw }
    RawMax = Path_NodeExposureGetRawMax(v6, *(float *)&_XMM1, 1);
    __asm { vmovss  xmm1, cs:__real@3f000000; weight }
    if ( RawMax > 10 )
      RawMax = 10;
    if ( RawMax < 0 )
      RawMax = 0;
    v35 = BotScoreDebugFactor(0, *(float *)&_XMM1, 10 * (10 - RawMax), scoreType, entityNum);
    v36 = parms->entityNum;
    v37 = parms->scoreType;
    v38 = v35;
    v39 = Bot_Score_Factor_CloseToPoint(v6, &parms->vector1, 1000);
    __asm { vmovss  xmm1, cs:__real@3f800000; weight }
    return (unsigned int)(BotScoreDebugFactor(1, *(float *)&_XMM1, v39, v37, v36) + v38);
  }
  return v9;
}

/*
==============
Bot_Score_NodeAmbush
==============
*/

__int64 __fastcall Bot_Score_NodeAmbush(int object, const bot_score_parms_s *parms, __int64 a3, double _XMM3_8)
{
  unsigned __int16 v6; 
  const pathnode_t *v7; 
  const pathnode_t *v8; 
  int StopGoalStance; 
  unsigned int v12; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v15; 
  int v17; 
  bot_score_type_t v18; 
  int v19; 
  int v20; 
  int v22; 
  bot_score_type_t v23; 
  int v25; 
  int v26; 
  int v28; 
  bot_score_type_t v29; 
  int v30; 
  int v31; 
  int v34; 
  bot_score_type_t v35; 
  int v36; 
  int v37; 
  int v39; 
  bot_score_type_t v40; 
  int v41; 
  int v42; 

  v6 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 369, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( parms->integer1 == 0xFFFF )
    return 0i64;
  v7 = Path_ConvertIndexToNode(v6);
  v8 = Path_ConvertIndexToNode(parms->integer1);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 379, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 380, ASSERT_TYPE_ASSERT, "( nodeNearestPoint )", (const char *)&queryFormat, "nodeNearestPoint") )
    __debugbreak();
  StopGoalStance = Bot_GetStopGoalStance(v7);
  if ( Bot_Score_NodeShouldIgnore(v7, parms->entityNum, parms) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@43fa0000; radius }
  if ( Bot_Score_NodeIsDangerous(v7, parms->entityNum, *(float *)&_XMM2) )
    return 0i64;
  if ( Path_NodeExposureGetTraffic(v7) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@42c80000; radius }
  if ( Bot_Score_NodeIsNearAllySentient(v7, parms->entityNum, *(float *)&_XMM2) )
    return 0i64;
  v12 = 0;
  if ( v7 != v8 && Path_NodesVisibleNoPeek(v8, v7) )
  {
    if ( Path_NodeExposedToPoint(v7, &parms->vector1, StopGoalStance) )
    {
      entityNum = parms->entityNum;
      scoreType = parms->scoreType;
      __asm { vmovaps [rsp+58h+var_28], xmm6 }
      v15 = Bot_Score_Factor_CoverRearFromPoint(v7, &parms->vector1);
      __asm { vmovss  xmm1, cs:__real@3fc00000; weight }
      v17 = BotScoreDebugFactor(0, *(float *)&_XMM1, v15, scoreType, entityNum);
      LOWORD(scoreType) = parms->entityNum;
      v18 = parms->scoreType;
      v19 = v17;
      v20 = Bot_Score_Factor_ProneCover360(v7);
      __asm { vmovss  xmm1, cs:__real@3fc00000; weight }
      v22 = BotScoreDebugFactor(1, *(float *)&_XMM1, v20, v18, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v23 = parms->scoreType;
      __asm { vxorps  xmm3, xmm3, xmm3; addDistance }
      v25 = v22 + v19;
      v26 = Bot_Score_Factor_IdealRangeWeapon(v7, parms->entityNum, &parms->vector1, *(const float *)&_XMM3);
      __asm { vmovss  xmm1, cs:__real@3f400000; weight }
      v28 = BotScoreDebugFactor(2, *(float *)&_XMM1, v26, v23, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v29 = parms->scoreType;
      v30 = v28 + v25;
      v31 = Bot_Score_Factor_NoTrafficRearFromPoint(v7, &parms->vector1);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm1, xmm6; weight
      }
      v34 = BotScoreDebugFactor(3, *(float *)&_XMM1, v31, v29, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v35 = parms->scoreType;
      v36 = v34 + v30;
      v37 = Bot_Score_Factor_ProneCoverFacingPoint(v7, &parms->vector1);
      __asm { vmovaps xmm1, xmm6; weight }
      v39 = BotScoreDebugFactor(4, *(float *)&_XMM1, v37, v35, scoreType);
      LOWORD(scoreType) = parms->entityNum;
      v40 = parms->scoreType;
      v41 = v39 + v36;
      v42 = Bot_Score_Factor_NotRecentlyUsed(v7, parms);
      __asm
      {
        vmovaps xmm1, xmm6; weight
        vmovaps xmm6, [rsp+58h+var_28]
      }
      return (unsigned int)(BotScoreDebugFactor(5, *(float *)&_XMM1, v42, v40, scoreType) + v41);
    }
  }
  return v12;
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
  unsigned int v9; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v12; 
  int v14; 
  bot_score_type_t v15; 
  int v16; 
  int v17; 
  int v19; 
  bot_score_type_t v23; 
  int v24; 
  int v25; 
  float fmt; 
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
  if ( Bot_Score_NodeShouldIgnore(v4, parms->entityNum, parms) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@43fa0000; radius }
  if ( Bot_Score_NodeIsDangerous(v4, parms->entityNum, *(float *)&_XMM2) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@42c80000; radius }
  if ( Bot_Score_NodeIsNearAllySentient(v4, parms->entityNum, *(float *)&_XMM2) )
    return 0i64;
  v9 = 0;
  pathnode_t::GetPos(v4, &pos);
  if ( v4 != v5 && Path_NodesVisibleNoPeek(v5, v4) )
  {
    if ( Path_NodeExposedToPoint(v4, &parms->vector1, StopGoalStance) )
    {
      entityNum = parms->entityNum;
      scoreType = parms->scoreType;
      v12 = Bot_Score_Factor_CoverRearFromPoint(v4, &parms->vector1);
      __asm { vmovss  xmm1, cs:__real@40000000; weight }
      v14 = BotScoreDebugFactor(0, *(float *)&_XMM1, v12, scoreType, entityNum);
      LOWORD(scoreType) = parms->entityNum;
      v15 = parms->scoreType;
      v16 = v14;
      v17 = Bot_Score_Factor_NoTrafficRearFromPoint(v4, &parms->vector1);
      __asm { vmovss  xmm1, cs:__real@3f800000; weight }
      v19 = BotScoreDebugFactor(1, *(float *)&_XMM1, v17, v15, scoreType);
      __asm
      {
        vmovss  xmm0, cs:__real@3f000000
        vmovss  xmm3, cs:__real@44a28000; maxRange
        vmovss  xmm2, cs:__real@44480000; minRange
      }
      LOWORD(scoreType) = parms->entityNum;
      v23 = parms->scoreType;
      __asm { vmovss  dword ptr [rsp+78h+fmt], xmm0 }
      v24 = v19 + v16;
      v25 = Bot_Score_Factor_IdealRange(v4, &parms->vector1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
      __asm { vmovss  xmm1, cs:__real@3f800000; weight }
      return (unsigned int)(BotScoreDebugFactor(2, *(float *)&_XMM1, v25, v23, scoreType) + v24);
    }
  }
  return v9;
}

/*
==============
Bot_Score_NodeTraffic
==============
*/
int Bot_Score_NodeTraffic(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v4; 
  const pathnode_t *v5; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 

  v4 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 482, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v5 = Path_ConvertIndexToNode(v4);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 485, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  Path_NodeExposureGetTraffic(v5);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3ec8c8c9
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si r8d, xmm1; factor
    vmovss  xmm1, cs:__real@3f800000; weight
  }
  return BotScoreDebugFactor(0, *(float *)&_XMM1, _ER8, scoreType, entityNum);
}

/*
==============
Bot_Score_NodeExposed
==============
*/
int Bot_Score_NodeExposed(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v4; 
  const pathnode_t *v5; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 

  v4 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 502, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v5 = Path_ConvertIndexToNode(v4);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 505, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  Path_NodeExposureGeneral(v5, 4);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3ec8c8c9
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si r8d, xmm1; factor
    vmovss  xmm1, cs:__real@3f800000; weight
  }
  return BotScoreDebugFactor(0, *(float *)&_XMM1, _ER8, scoreType, entityNum);
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
  unsigned __int16 v8; 
  __int64 entityNum; 
  pathnode_t *v10; 
  pathnode_t *v11; 
  const pathnode_t *v13; 
  __int16 v16; 
  bot_score_type_t scoreType; 
  int v55; 
  int v56; 
  int v58; 
  __int16 v59; 
  bot_score_type_t v60; 
  int v61; 
  int v72; 
  __int16 v73; 
  bot_score_type_t v74; 
  int v75; 
  int v76; 
  int v78; 
  __int16 v79; 
  bot_score_type_t v80; 
  int v81; 
  int v82; 
  int v84; 
  __int64 result; 
  __int64 v91; 
  __int64 v92; 
  vec3_t point; 
  vec3_t pos; 
  vec2_t vec; 
  vec3_t eyeForward; 

  v8 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 598, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v91) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 599, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v91, level.num_entities) )
      __debugbreak();
  }
  entityNum = parms->entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v92) = 2048;
    LODWORD(v91) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v91, v92) )
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
  v10 = Path_ConvertIndexToNode(v8);
  v11 = Path_ConvertIndexToNode(parms->integer1);
  _RBP = &level.gentities[parms->entityNum];
  v13 = Sentient_NearestNode(_RBP->sentient);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 608, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 609, ASSERT_TYPE_ASSERT, "( hideFromNode )", (const char *)&queryFormat, "hideFromNode") )
    __debugbreak();
  pathnode_t::GetPos(v10, &pos);
  pathnode_t::GetPos(v11, &point);
  if ( Bot_Score_NodeShouldIgnore(v10, parms->entityNum, parms) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@41200000; recentUseTime }
  if ( Bot_Score_NodeWasRecentlyUsed(v10, parms, *(float *)&_XMM2) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@43fa0000; radius }
  if ( Bot_Score_NodeIsDangerous(v10, parms->entityNum, *(float *)&_XMM2) || (parms->flags & 0x20) != 0 && (Bot_Score_NodeIgnoreTraversalIslandMismatch(v10, parms) || v13 && !Path_NodesVisibleNoPeek(v10, v13)) )
    return 0i64;
  if ( Path_NodeExposedToPoint(v10, &point, 4) )
    return 0i64;
  v16 = parms->entityNum;
  scoreType = parms->scoreType;
  __asm
  {
    vmovaps [rsp+108h+var_38], xmm6
    vmovaps [rsp+108h+var_48], xmm7
    vmovss  xmm7, dword ptr [rsp+108h+point]
    vsubss  xmm4, xmm7, dword ptr [rsp+108h+pos]
    vmulss  xmm0, xmm4, xmm4
    vmovaps [rsp+108h+var_58], xmm8
    vmovss  xmm8, dword ptr [rsp+108h+point+4]
    vsubss  xmm5, xmm8, dword ptr [rsp+108h+pos+4]
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+108h+var_68], xmm9
    vmovss  xmm9, dword ptr [rsp+108h+point+8]
    vsubss  xmm6, xmm9, dword ptr [rsp+108h+pos+8]
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovaps [rsp+108h+var_78], xmm11
    vmovss  xmm11, cs:__real@3f800000
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+108h+vec], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  [rsp+108h+var_A0], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+108h+vec+4], xmm1
    vmovss  xmm0, dword ptr [rbp+130h]
    vmovss  xmm1, dword ptr [rbp+134h]
    vsubss  xmm4, xmm0, xmm7
    vmovss  xmm0, dword ptr [rbp+138h]
    vsubss  xmm6, xmm0, xmm9
    vsubss  xmm5, xmm1, xmm8
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+108h+eyeForward], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+108h+eyeForward+8], xmm0
    vmovss  dword ptr [rsp+108h+eyeForward+4], xmm1
  }
  v55 = Path_NodesVisibleNoPeek(v10, v11);
  v56 = 100;
  if ( v55 )
    v56 = 0;
  __asm { vmovaps xmm1, xmm11; weight }
  v58 = BotScoreDebugFactor(0, *(float *)&_XMM1, v56, scoreType, v16);
  v59 = parms->entityNum;
  v60 = parms->scoreType;
  v61 = v58;
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vmovss  xmm2, cs:__real@41c80000; coneAngle
    vmovaps xmm1, xmm0; arcYaw
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcSum(v10, *(float *)&_XMM1, *(float *)&_XMM2, 4);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@41480000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si r8d, xmm1; factor
    vmovaps xmm1, xmm11; weight
  }
  v72 = BotScoreDebugFactor(1, *(float *)&_XMM1, _ER8, v60, v59);
  v73 = parms->entityNum;
  v74 = parms->scoreType;
  v75 = v72 + v61;
  v76 = Bot_Score_Factor_CloseToPoint(v10, &_RBP->r.currentOrigin, parms->integer2);
  __asm { vmovaps xmm1, xmm11; weight }
  v78 = BotScoreDebugFactor(2, *(float *)&_XMM1, v76, v74, v73);
  v79 = parms->entityNum;
  v80 = parms->scoreType;
  v81 = v78 + v75;
  v82 = Bot_Score_Factor_InFrontOf(v10, &_RBP->r.currentOrigin, &eyeForward);
  __asm { vmovaps xmm1, xmm11; weight }
  v84 = BotScoreDebugFactor(3, *(float *)&_XMM1, v82, v80, v79);
  __asm { vmovaps xmm11, [rsp+108h+var_78] }
  result = (unsigned int)(v81 + v84);
  __asm
  {
    vmovaps xmm9, [rsp+108h+var_68]
    vmovaps xmm8, [rsp+108h+var_58]
    vmovaps xmm7, [rsp+108h+var_48]
    vmovaps xmm6, [rsp+108h+var_38]
  }
  return result;
}

/*
==============
Bot_Score_NodeCombat
==============
*/
__int64 Bot_Score_NodeCombat(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v5; 
  __int64 entityNum; 
  pathnode_t *v7; 
  pathnode_t *v8; 
  gentity_s *v9; 
  bot_data_t *EntityData; 
  gentity_s *v11; 
  const sentient_info_t *SentientInfo; 
  __int16 v13; 
  __int16 v35; 
  bot_score_type_t scoreType; 
  int v38; 
  int v40; 
  int v42; 
  __int16 v43; 
  bot_score_type_t v44; 
  int v55; 
  __int16 v56; 
  bot_score_type_t v57; 
  int v58; 
  int v59; 
  __int64 result; 
  __int64 v63; 
  __int64 v64; 
  vec3_t outLastKnownPos; 
  vec3_t pos; 
  vec2_t vec; 
  vec3_t forward; 

  v5 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 666, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v63) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 667, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v63, level.num_entities) )
      __debugbreak();
  }
  entityNum = parms->entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v64) = 2048;
    LODWORD(v63) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v63, v64) )
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
  v7 = Path_ConvertIndexToNode(v5);
  v8 = Path_ConvertIndexToNode(parms->integer1);
  v9 = &level.gentities[parms->entityNum];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 675, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 676, ASSERT_TYPE_ASSERT, "( enemyNode )", (const char *)&queryFormat, "enemyNode") )
    __debugbreak();
  pathnode_t::GetPos(v7, &pos);
  pathnode_t::GetPos(v8, &outLastKnownPos);
  EntityData = Bot_GetEntityData(v9);
  if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 695, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( EntHandle::isDefined(&EntityData->botInfo.sentient->targetEnt) )
  {
    if ( EntHandle::isDefined(&EntityData->botInfo.sentient->targetEnt) )
    {
      v11 = EntHandle::ent(&EntityData->botInfo.sentient->targetEnt);
      if ( v11 )
      {
LABEL_38:
        if ( !v11->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 700, ASSERT_TYPE_ASSERT, "( enemy->sentient )", (const char *)&queryFormat, "enemy->sentient") )
          __debugbreak();
        if ( !EntityData->botInfo.sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 701, ASSERT_TYPE_ASSERT, "( botData->botInfo.sentient )", (const char *)&queryFormat, "botData->botInfo.sentient") )
          __debugbreak();
        SentientInfo = Sentient_GetSentientInfo(EntityData->botInfo.sentient, v11->sentient);
        if ( !SentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 703, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
          __debugbreak();
        SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos);
        goto LABEL_48;
      }
    }
    else
    {
      v11 = NULL;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 699, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
      __debugbreak();
    goto LABEL_38;
  }
LABEL_48:
  v13 = parms->entityNum;
  __asm { vmovaps [rsp+0E8h+var_58], xmm7 }
  if ( Bot_Score_NodeShouldIgnore(v7, v13, parms) )
    goto LABEL_56;
  __asm { vmovss  xmm2, cs:__real@41200000; recentUseTime }
  if ( Bot_Score_NodeWasRecentlyUsed(v7, parms, *(float *)&_XMM2) )
    goto LABEL_56;
  __asm { vmovss  xmm2, cs:__real@43fa0000; radius }
  if ( Bot_Score_NodeIsDangerous(v7, parms->entityNum, *(float *)&_XMM2) )
    goto LABEL_56;
  if ( !Path_NodesVisibleNoPeek(v7, v8) )
    goto LABEL_56;
  if ( Path_NodeExposedToPoint(v7, &outLastKnownPos, 4) )
    goto LABEL_56;
  if ( Bot_Score_NodeIgnoreTraversalIslandMismatch(v7, parms) )
    goto LABEL_56;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+outLastKnownPos]
    vsubss  xmm4, xmm0, dword ptr [rsp+0E8h+pos]
    vmovss  xmm1, dword ptr [rsp+0E8h+outLastKnownPos+4]
    vsubss  xmm5, xmm1, dword ptr [rsp+0E8h+pos+4]
    vmovss  xmm0, dword ptr [rsp+0E8h+outLastKnownPos+8]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmovaps [rsp+0E8h+var_48], xmm6
    vsubss  xmm6, xmm0, dword ptr [rsp+0E8h+pos+8]
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0E8h+vec], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  [rsp+0E8h+var_80], xmm0
    vmovss  dword ptr [rsp+0E8h+vec+4], xmm1
  }
  AngleVectors(&v9->r.currentAngles, &forward, NULL, NULL);
  v35 = parms->entityNum;
  __asm { vmovss  xmm3, cs:__real@43800000; addDistance }
  scoreType = parms->scoreType;
  v38 = Bot_Score_Factor_IdealRangeWeapon(v7, parms->entityNum, &outLastKnownPos, *(const float *)&_XMM3);
  __asm { vmovaps xmm1, xmm7; weight }
  v40 = BotScoreDebugFactor(0, *(float *)&_XMM1, v38, scoreType, v35);
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
  v42 = v40;
  if ( !v40 )
  {
LABEL_56:
    result = 0i64;
  }
  else
  {
    v43 = parms->entityNum;
    v44 = parms->scoreType;
    *(double *)&_XMM0 = vectoyaw(&vec);
    __asm
    {
      vmovss  xmm2, cs:__real@41c80000; coneAngle
      vmovaps xmm1, xmm0; arcYaw
      vxorps  xmm0, xmm0, xmm0
    }
    Path_NodeExposureGetRawArcSum(v7, *(float *)&_XMM1, *(float *)&_XMM2, 4);
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, cs:__real@41480000
      vaddss  xmm3, xmm1, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm1, xmm0, xmm3, 1
      vcvttss2si r8d, xmm1; factor
      vmovaps xmm1, xmm7; weight
    }
    v55 = BotScoreDebugFactor(1, *(float *)&_XMM1, _ER8, v44, v43);
    v56 = parms->entityNum;
    v57 = parms->scoreType;
    v58 = v55 + v42;
    v59 = Bot_Score_Factor_CloseToPoint(v7, &v9->r.currentOrigin, parms->integer2);
    __asm { vmovaps xmm1, xmm7; weight }
    result = (unsigned int)(v58 + BotScoreDebugFactor(2, *(float *)&_XMM1, v59, v57, v56));
  }
  __asm { vmovaps xmm7, [rsp+0E8h+var_58] }
  return result;
}

/*
==============
Bot_Score_NodeCamp
==============
*/
__int64 Bot_Score_NodeCamp(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v5; 
  const pathnode_t *v6; 
  unsigned int flags; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v20; 
  int v23; 
  int v24; 
  __int16 v25; 
  bot_score_type_t v26; 
  int v27; 
  int v30; 
  int v31; 
  __int16 v32; 
  bot_score_type_t v33; 
  int v34; 
  int v35; 
  int v37; 
  __int16 v38; 
  bot_score_type_t v39; 
  int v40; 
  int v42; 
  __int16 v43; 
  bot_score_type_t v44; 
  int v45; 
  int v46; 
  int v48; 
  __int16 v49; 
  bot_score_type_t v50; 
  int v51; 
  int v52; 
  int v54; 
  __int16 v55; 
  bot_score_type_t v56; 
  int v57; 
  int v58; 
  __int64 result; 

  v5 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 752, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v6 = Path_ConvertIndexToNode(v5);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 755, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  flags = parms->flags;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps [rsp+78h+var_48], xmm7
  }
  if ( Bot_Score_NodeShouldIgnore(v6, parms->entityNum, parms) )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm2, cs:__real@43fa0000
    vmovss  xmm6, cs:__real@42c80000
  }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = flags & 8;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm2, xmm6, xmm2, xmm3; radius
  }
  if ( Bot_Score_NodeIsDangerous(v6, parms->entityNum, *(float *)&_XMM2) )
    goto LABEL_22;
  if ( (flags & 8) == 0 )
  {
    __asm { vmovss  xmm2, cs:__real@41200000; recentUseTime }
    if ( Bot_Score_NodeWasRecentlyUsed(v6, parms, *(float *)&_XMM2) )
      goto LABEL_22;
  }
  if ( Path_NodeExposureGetTraffic(v6) > 4 * ((flags >> 3) & 1) + 1 )
    goto LABEL_22;
  __asm { vmovaps xmm2, xmm6; radius }
  if ( Bot_Score_NodeIsNearAllySentient(v6, parms->entityNum, *(float *)&_XMM2) )
    goto LABEL_22;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v20 = Bot_Score_Factor_HighTrafficViewDir(v6, &parms->vector1);
  __asm
  {
    vmovss  xmm6, cs:__real@40000000
    vmovaps xmm1, xmm6; weight
  }
  v23 = BotScoreDebugFactor(0, *(float *)&_XMM1, v20, scoreType, entityNum);
  v24 = 20;
  if ( (flags & 8) != 0 )
    v24 = 8;
  if ( v23 < v24 )
    goto LABEL_22;
  v25 = parms->entityNum;
  v26 = parms->scoreType;
  v27 = Bot_Score_Factor_CrouchSightFacingDir(v6, &parms->vector1);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm1, xmm7; weight
  }
  v30 = BotScoreDebugFactor(1, *(float *)&_XMM1, v27, v26, v25);
  v31 = 50;
  if ( (flags & 8) != 0 )
    v31 = 20;
  if ( v30 < v31 )
    goto LABEL_22;
  v32 = parms->entityNum;
  v33 = parms->scoreType;
  v34 = v30 + v23;
  v35 = Bot_Score_Factor_ConcealedRearFromDir(v6, &parms->vector1);
  __asm { vmovaps xmm1, xmm6; weight }
  v37 = BotScoreDebugFactor(2, *(float *)&_XMM1, v35, v33, v32);
  if ( v37 )
    goto LABEL_21;
  if ( (flags & 8) == 0 )
  {
LABEL_22:
    result = 0i64;
  }
  else
  {
LABEL_21:
    v38 = parms->entityNum;
    v39 = parms->scoreType;
    v40 = Bot_Score_Factor_NoTrafficRearFromDir(v6, &parms->vector1);
    __asm { vmovaps xmm1, xmm7; weight }
    v42 = BotScoreDebugFactor(3, *(float *)&_XMM1, v40, v39, v38);
    v43 = parms->entityNum;
    v44 = parms->scoreType;
    v45 = v37 + v42 + v34;
    v46 = Bot_Score_Factor_CoverRearFromDir(v6, &parms->vector1);
    __asm { vmovaps xmm1, xmm7; weight }
    v48 = BotScoreDebugFactor(4, *(float *)&_XMM1, v46, v44, v43);
    v49 = parms->entityNum;
    v50 = parms->scoreType;
    v51 = v48 + v45;
    v52 = Bot_Score_Factor_ProneCoverFacingDir(v6, &parms->vector1);
    __asm { vmovaps xmm1, xmm7; weight }
    v54 = BotScoreDebugFactor(5, *(float *)&_XMM1, v52, v50, v49);
    v55 = parms->entityNum;
    v56 = parms->scoreType;
    v57 = v54 + v51;
    v58 = Bot_Score_Factor_NotRecentlyUsed(v6, parms);
    __asm { vmovaps xmm1, xmm7; weight }
    result = (unsigned int)(v57 + BotScoreDebugFactor(6, *(float *)&_XMM1, v58, v56, v55));
  }
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_48]
    vmovaps xmm6, [rsp+78h+var_38]
  }
  return result;
}

/*
==============
Bot_Score_NodeTrap
==============
*/
__int64 Bot_Score_NodeTrap(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v4; 
  pathnode_t *v5; 
  const pathnode_t *v6; 
  pathnode_t *v7; 
  char v29; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v32; 
  int v34; 
  bot_score_type_t v35; 
  int v36; 
  int v46; 
  bot_score_type_t v47; 
  int v48; 
  int v49; 
  __int64 result; 
  vec2_t vec; 
  vec3_t v55; 
  vec3_t pos; 

  v4 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1099, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v5 = Path_ConvertIndexToNode(v4);
  v6 = Path_ConvertIndexToNode(parms->integer1);
  v7 = Path_ConvertIndexToNode(parms->integer2);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1105, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1106, ASSERT_TYPE_ASSERT, "( ambush_node )", (const char *)&queryFormat, "ambush_node") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1107, ASSERT_TYPE_ASSERT, "( entrance_node )", (const char *)&queryFormat, "entrance_node") )
    __debugbreak();
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  if ( v5 == v6 )
    goto LABEL_21;
  if ( v5 == v7 )
    goto LABEL_21;
  if ( Bot_Score_NodeShouldIgnore(v5, parms->entityNum, parms) )
    goto LABEL_21;
  __asm { vmovss  xmm2, cs:__real@41200000; recentUseTime }
  if ( Bot_Score_NodeWasRecentlyUsed(v5, parms, *(float *)&_XMM2) )
    goto LABEL_21;
  __asm
  {
    vmovss  xmm6, cs:__real@42c80000
    vmovaps xmm2, xmm6; radius
  }
  if ( Bot_Score_NodeIsNearAllySentient(v5, parms->entityNum, *(float *)&_XMM2) )
    goto LABEL_21;
  __asm { vmovss  xmm2, cs:__real@43fa0000; radius }
  if ( Bot_Score_NodeIsDangerous(v5, parms->entityNum, *(float *)&_XMM2) )
    goto LABEL_21;
  pathnode_t::GetPos(v5, &pos);
  pathnode_t::GetPos(v7, &v55);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+var_68]
    vsubss  xmm1, xmm0, dword ptr [rsp+0A8h+pos]
    vmovss  xmm2, dword ptr [rsp+0A8h+var_68+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+0A8h+pos+4]
    vmovss  dword ptr [rsp+0A8h+vec], xmm1
    vmovss  xmm1, dword ptr [rsp+0A8h+var_68+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+pos+8]
    vmovss  [rsp+0A8h+var_70], xmm2
    vmovss  dword ptr [rsp+0A8h+vec+4], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vmovaps xmm1, xmm0; arcYaw
    vxorps  xmm2, xmm2, xmm2; coneAngle
  }
  *(double *)&_XMM0 = Path_NodeExposureGetRangeArcMax(v5, *(float *)&_XMM1, *(float *)&_XMM2, 4);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0A8h+vec+4]
    vmulss  xmm5, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+vec]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm3, xmm1, xmm1
    vmovss  xmm1, [rsp+0A8h+var_70]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm1, xmm1
    vaddss  xmm2, xmm4, xmm0
    vcomiss xmm5, xmm2
  }
  if ( v29 )
  {
LABEL_21:
    result = 0i64;
  }
  else
  {
    entityNum = parms->entityNum;
    scoreType = parms->scoreType;
    v32 = Bot_Score_Factor_ProneCover360(v5);
    __asm { vmovss  xmm1, cs:__real@40000000; weight }
    v34 = BotScoreDebugFactor(0, *(float *)&_XMM1, v32, scoreType, entityNum);
    LOWORD(scoreType) = parms->entityNum;
    v35 = parms->scoreType;
    v36 = v34;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    Path_NodeExposureGetTraffic(v5);
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, cs:__real@3ec8c8c9
      vsubss  xmm1, xmm6, xmm1
      vaddss  xmm2, xmm1, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm2, 1
      vmovss  xmm1, cs:__real@3f800000; weight
      vcvttss2si r8d, xmm4; factor
    }
    v46 = BotScoreDebugFactor(1, *(float *)&_XMM1, _ER8, v35, scoreType);
    LOWORD(scoreType) = parms->entityNum;
    v47 = parms->scoreType;
    v48 = v46 + v36;
    v49 = Bot_Score_Factor_VisibilityToNode(v5, v6);
    __asm { vmovss  xmm1, cs:__real@3f800000; weight }
    result = (unsigned int)(v48 + BotScoreDebugFactor(2, *(float *)&_XMM1, v49, v47, scoreType));
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
Bot_Score_NodeAerialTarget
==============
*/
__int64 Bot_Score_NodeAerialTarget(int object, const bot_score_parms_s *parms)
{
  unsigned __int16 v5; 
  pathnode_t *v6; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v11; 
  int v19; 
  __int16 v20; 
  bot_score_type_t v21; 
  int v22; 
  int IsExposedSky; 
  __int64 v24; 

  v5 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1153, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v6 = Path_ConvertIndexToNode(v5);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1156, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Bot_Score_NodeShouldIgnore(v6, parms->entityNum, parms) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@42000000; radius }
  if ( Bot_Score_NodeIsDangerous(v6, parms->entityNum, *(float *)&_XMM2) )
    return 0i64;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm6
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGeneral(v6, 1);
  v11 = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3f44ec4f
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vmovss  xmm1, cs:__real@3f4ccccd; weight
    vroundss xmm3, xmm6, xmm2, 1
    vcvttss2si r8d, xmm3; factor
  }
  v19 = BotScoreDebugFactor(0, *(float *)&_XMM1, _ER8, scoreType, entityNum);
  v20 = parms->entityNum;
  v21 = parms->scoreType;
  v22 = v19;
  IsExposedSky = Path_IsExposedSky(v6);
  if ( v6->dynamic.wLinkCount > 0 )
  {
    v24 = 0i64;
    do
    {
      if ( Path_IsNodeIndexExposedSky(v6->constant.Links[v24].nodeNum) )
        ++IsExposedSky;
      ++v11;
      ++v24;
    }
    while ( v11 < v6->dynamic.wLinkCount );
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, cs:__real@42c80000
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vmovss  xmm1, cs:__real@3f800000; weight
    vroundss xmm2, xmm6, xmm3, 1
    vcvttss2si r8d, xmm2; factor
    vmovaps xmm6, [rsp+68h+var_38]
  }
  return (unsigned int)(v22 + BotScoreDebugFactor(0, *(float *)&_XMM1, _ER8, v21, v20));
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
      _RAX = Com_TeamsSP_GetAllTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+68h+iTeamFlags.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rsp+68h+iTeamFlags.array+10h], xmm1
    }
    iTeamFlags.array[6] = _RAX->array[6];
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

__int64 __fastcall BotScoreDebugFactor(int index, double weight, int factor, bot_score_type_t type, __int16 entityNum)
{
  __int64 v9; 
  __int16 v10; 
  const dvar_t *v13; 
  unsigned int v15; 
  const dvar_t **v16; 
  const dvar_t *v18; 
  bool v19; 
  bool v20; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  __int16 v33; 
  unsigned int v34; 
  bot_data_t *EntityData; 
  bot_debug_data_t *p_botDebugData; 
  bot_debug_score_t *v37; 
  __int64 result; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  const dvar_t *v49; 
  const dvar_t *v50; 
  const dvar_t *v51; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  const dvar_t *v54; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  __int64 v58; 
  __int64 v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v9 = type;
  v10 = factor;
  __asm { vmovaps xmm7, xmm1 }
  if ( dword_14E9320B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14E9320B0);
    if ( dword_14E9320B0 == -1 )
    {
      v43 = DVARFLT_bot_ScoreVal0;
      if ( !DVARFLT_bot_ScoreVal0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[0] = v43;
      v44 = DVARFLT_bot_ScoreVal1;
      if ( !DVARFLT_bot_ScoreVal1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[1] = v44;
      v45 = DVARFLT_bot_ScoreVal2;
      if ( !DVARFLT_bot_ScoreVal2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[2] = v45;
      v46 = DVARFLT_bot_ScoreVal3;
      if ( !DVARFLT_bot_ScoreVal3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[3] = v46;
      v47 = DVARFLT_bot_ScoreVal4;
      if ( !DVARFLT_bot_ScoreVal4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[4] = v47;
      v48 = DVARFLT_bot_ScoreVal5;
      if ( !DVARFLT_bot_ScoreVal5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[5] = v48;
      v49 = DVARFLT_bot_ScoreVal6;
      if ( !DVARFLT_bot_ScoreVal6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[6] = v49;
      v50 = DVARFLT_bot_ScoreVal7;
      if ( !DVARFLT_bot_ScoreVal7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[7] = v50;
      v51 = DVARFLT_bot_ScoreVal8;
      if ( !DVARFLT_bot_ScoreVal8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[8] = v51;
      v52 = DVARFLT_bot_ScoreVal9;
      if ( !DVARFLT_bot_ScoreVal9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[9] = v52;
      v53 = DVARFLT_bot_ScoreVal10;
      if ( !DVARFLT_bot_ScoreVal10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[10] = v53;
      v54 = DVARFLT_bot_ScoreVal11;
      if ( !DVARFLT_bot_ScoreVal11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[11] = v54;
      v55 = DVARFLT_bot_ScoreVal12;
      if ( !DVARFLT_bot_ScoreVal12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[12] = v55;
      v56 = DVARFLT_bot_ScoreVal13;
      if ( !DVARFLT_bot_ScoreVal13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[13] = v56;
      v57 = DVARFLT_bot_ScoreVal14;
      if ( !DVARFLT_bot_ScoreVal14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      FACTOR_OFFSET_DVARS[14] = v57;
      j__Init_thread_footer(&dword_14E9320B0);
    }
  }
  v13 = DVARBOOL_bot_ScoreValReset;
  if ( !DVARBOOL_bot_ScoreValReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreValReset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( v13->current.enabled )
  {
    v15 = 0;
    v16 = FACTOR_OFFSET_DVARS;
    do
    {
      __asm { vmovaps xmm1, xmm6; value }
      Dvar_SetFloat_Internal(*v16, *(float *)&_XMM1);
      ++v15;
      ++v16;
    }
    while ( v15 < 0xF );
    Dvar_SetBool_Internal(DVARBOOL_bot_ScoreValReset, 0);
  }
  v18 = DVARINT_bot_ScoreType;
  if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = v18->current.integer < (unsigned int)v9;
  if ( v18->current.integer == (_DWORD)v9 )
  {
    v19 = (unsigned int)index < 0xF;
    if ( (unsigned int)index >= 0xF )
    {
      LODWORD(v59) = 15;
      LODWORD(v58) = index;
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2735, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( FACTOR_OFFSET_DVARS ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( FACTOR_OFFSET_DVARS )\n\t%i not in [0, %i)", v58, v59);
      v19 = 0;
      if ( v20 )
        __debugbreak();
    }
    __asm { vaddss  xmm7, xmm7, dword ptr [rcx+28h] }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si esi, xmm1
    vcomiss xmm7, xmm6
  }
  if ( !v19 )
    __asm { vcomiss xmm7, cs:__real@447a0000 }
  __asm
  {
    vcvtss2sd xmm2, xmm7, xmm7
    vmovq   r8, xmm2
  }
  Com_Printf(16, "*** Invalid bot score factor weight: %f ***\n", *(double *)&_XMM2);
  if ( (unsigned int)v9 >= 0x11 )
  {
    LODWORD(v59) = 17;
    LODWORD(v58) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2710, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( BOT_SCORE_TYPE_COUNT )", "type doesn't index BOT_SCORE_TYPE_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  if ( BOT_SCORE_FUNCS[v9].pathNodes )
  {
    v30 = DVARINT_bot_ScoreType;
    if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.integer == (_DWORD)v9 )
    {
      v31 = DVARINT_bot_ScoreClient;
      if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.integer == -1 )
      {
        v33 = entityNum;
        v34 = entityNum;
      }
      else
      {
        v32 = DVARINT_bot_ScoreClient;
        if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        v33 = entityNum;
        v34 = entityNum;
        if ( v32->current.integer != entityNum )
          goto LABEL_55;
      }
      if ( v34 >= level.num_entities )
      {
        LODWORD(v59) = level.num_entities;
        LODWORD(v58) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2756, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( level.num_entities )", "entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v58, v59) )
          __debugbreak();
      }
      EntityData = Bot_GetEntityData(&level.gentities[v33]);
      if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2758, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
        __debugbreak();
      p_botDebugData = &EntityData->botDebugData;
      if ( !p_botDebugData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2761, ASSERT_TYPE_ASSERT, "( botDebug )", (const char *)&queryFormat, "botDebug") )
        __debugbreak();
      if ( p_botDebugData->debugScoresCount >= 0x400u )
      {
        LODWORD(v59) = 1024;
        LODWORD(v58) = p_botDebugData->debugScoresCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2763, ASSERT_TYPE_ASSERT, "(unsigned)( botDebug->debugScoresCount ) < (unsigned)( 1024 )", "botDebug->debugScoresCount doesn't index BOT_SCORE_MAX\n\t%i not in [0, %i)", v58, v59) )
          __debugbreak();
      }
      v37 = &p_botDebugData->debugScores[p_botDebugData->debugScoresCount];
      if ( (unsigned int)((int)(*((_DWORD *)v37 + 2) << 27) >> 27) >= 0xF )
      {
        LODWORD(v59) = 15;
        LODWORD(v58) = (int)(*((_DWORD *)v37 + 2) << 27) >> 27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2765, ASSERT_TYPE_ASSERT, "(unsigned)( debugScore->factorCount ) < (unsigned)( 15 )", "debugScore->factorCount doesn't index BOT_SCORE_FACTOR_MAX\n\t%i not in [0, %i)", v58, v59) )
          __debugbreak();
      }
      if ( p_botDebugData->debugScoresSaving )
      {
        *(_WORD *)&v37->factors[(__int64)(int)(*((_DWORD *)v37 + 2) << 27) >> 27] = v10;
        __asm
        {
          vmulss  xmm0, xmm7, cs:__real@428311ec
          vcvttss2si rdx, xmm0
        }
        *((_WORD *)&v37->factors[(__int64)(int)(*((_DWORD *)v37 + 2) << 27) >> 27] + 1) = _RDX;
        *((_DWORD *)v37 + 2) ^= ((unsigned __int8)*((_DWORD *)v37 + 2) ^ (unsigned __int8)(*((_DWORD *)v37 + 2) + 1)) & 0x1F;
      }
    }
  }
LABEL_55:
  result = _ESI;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
  }
  return result;
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
  __int64 v11; 
  __int64 v19; 
  pathnode_t *v20; 
  vec3_t start; 
  vec3_t pos; 
  vec3_t end; 
  vec3_t v64; 
  char v65; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
  }
  v11 = itemCount;
  __asm
  {
    vmovss  xmm9, cs:__real@47c34f80
    vmovss  xmm6, cs:__real@c7c34f80
    vmovaps xmm10, xmm9
    vmovaps xmm11, xmm9
    vmovaps xmm7, xmm6
    vmovaps xmm12, xmm6
  }
  if ( itemCount > 0 )
  {
    v19 = 0i64;
    do
    {
      v20 = Path_ConvertIndexToNode(items[v19].object);
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2875, ASSERT_TYPE_ASSERT, "( pathnode )", (const char *)&queryFormat, "pathnode") )
        __debugbreak();
      pathnode_t::GetPos(v20, &pos);
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+118h+pos+4]
        vmovss  xmm0, dword ptr [rsp+118h+pos+8]
        vminss  xmm9, xmm9, dword ptr [rsp+118h+pos]
        vmaxss  xmm6, xmm6, dword ptr [rsp+118h+pos]
      }
      ++v19;
      __asm
      {
        vminss  xmm10, xmm1, xmm10
        vminss  xmm11, xmm0, xmm11
        vmaxss  xmm7, xmm1, xmm7
        vmaxss  xmm12, xmm0, xmm12
      }
    }
    while ( v19 < v11 );
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vsubss  xmm0, xmm6, xmm9
    vmulss  xmm0, xmm0, xmm2
    vaddss  xmm8, xmm0, xmm9
    vsubss  xmm1, xmm7, xmm10
    vmulss  xmm0, xmm1, xmm2
    vaddss  xmm7, xmm0, xmm10
    vsubss  xmm1, xmm12, xmm11
    vmulss  xmm0, xmm1, xmm2
    vaddss  xmm6, xmm0, xmm11
    vsubss  xmm0, xmm10, xmm7
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm2, xmm9, xmm8
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vsubss  xmm3, xmm11, xmm6
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vmulss  xmm1, xmm4, dword ptr [r14+14h]
    vmulss  xmm5, xmm4, dword ptr [r14+18h]
    vmulss  xmm3, xmm4, dword ptr [r14+1Ch]
    vaddss  xmm0, xmm1, xmm8
    vmovss  dword ptr [rsp+118h+end], xmm0
    vaddss  xmm0, xmm5, xmm7
    vmovss  dword ptr [rsp+118h+end+4], xmm0
    vaddss  xmm0, xmm3, xmm6
    vaddss  xmm0, xmm0, cs:__real@42480000
    vsubss  xmm1, xmm8, xmm1
    vmovss  dword ptr [rsp+118h+start], xmm1
    vsubss  xmm1, xmm6, xmm3
    vaddss  xmm2, xmm1, cs:__real@42480000
    vmovss  dword ptr [rsp+118h+end+8], xmm0
    vsubss  xmm0, xmm7, xmm5
    vmovss  dword ptr [rsp+118h+start+4], xmm0
    vmovss  dword ptr [rsp+118h+var_B8], xmm8
    vmovss  dword ptr [rsp+118h+var_B8+4], xmm7
    vmovss  dword ptr [rsp+118h+var_B8+8], xmm6
    vmovss  dword ptr [rsp+118h+start+8], xmm2
  }
  G_DebugLine(&start, &end, &colorCyan, 0);
  G_DebugLine(&start, &v64, &colorCyan, 0);
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm12, xmmword ptr [r11-80h]
  }
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
int Bot_Score_Factor_AwayFromAlliedPlayers(const pathnode_t *node, __int16 entityNum)
{
  unsigned int v5; 
  sentient_s *v11; 
  const gentity_s *ent; 
  bool v14; 
  const bot_data_t *EntityData; 
  char v39; 
  char v40; 
  int result; 
  vec3_t pos; 
  vec3_t goal; 
  bitarray<224> iTeamFlags; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v5 = entityNum;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( v5 >= level.num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1938, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( level.num_entities )", "entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v5, level.num_entities) )
    __debugbreak();
  _RDI = &level.gentities[(__int16)v5];
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1940, ASSERT_TYPE_ASSERT, "( thisEnt )", (const char *)&queryFormat, "thisEnt") )
    __debugbreak();
  if ( !_RDI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1941, ASSERT_TYPE_ASSERT, "( thisEnt->sentient )", (const char *)&queryFormat, "thisEnt->sentient") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+0D8h+iTeamFlags.array], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rsp+0D8h+iTeamFlags.array+10h], xmm1
  }
  iTeamFlags.array[6] = _RAX->array[6];
  v11 = Sentient_FirstSentient(&iTeamFlags);
  if ( v11 )
  {
    __asm { vmovss  xmm6, cs:__real@43fa0000 }
    do
    {
      if ( !v11->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1946, ASSERT_TYPE_ASSERT, "( allySentient->ent )", (const char *)&queryFormat, "allySentient->ent") )
        __debugbreak();
      if ( Bot_IsCharacterActive(v11->ent) )
      {
        if ( AI_IsAlliedSentient(_RDI->sentient, v11) )
        {
          if ( v11 != _RDI->sentient )
          {
            ent = v11->ent;
            v14 = v11->ent->client == NULL;
            if ( v11->ent->client || ent->agent && (v14 = ent->s.otherEntityNum <= 0x7FFu, ent->s.otherEntityNum == 2047) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+130h]
                vsubss  xmm3, xmm0, dword ptr [rsp+0D8h+pos]
                vmovss  xmm1, dword ptr [rdi+134h]
                vsubss  xmm2, xmm1, dword ptr [rsp+0D8h+pos+4]
                vmovss  xmm0, dword ptr [rdi+138h]
                vsubss  xmm4, xmm0, dword ptr [rsp+0D8h+pos+8]
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm0
                vsqrtss xmm1, xmm2, xmm2
                vcomiss xmm1, xmm6
              }
              if ( v14 )
              {
                __asm
                {
                  vsubss  xmm0, xmm6, xmm1
                  vaddss  xmm7, xmm7, xmm0
                }
              }
              if ( SV_BotIsBotEnt(ent) )
              {
                EntityData = Bot_GetEntityData(v11->ent);
                if ( Bot_HasScriptGoal(EntityData) )
                {
                  Bot_GetScriptGoal(EntityData, &goal);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+0D8h+goal]
                    vsubss  xmm3, xmm0, dword ptr [rsp+0D8h+pos]
                    vmovss  xmm1, dword ptr [rsp+0D8h+goal+4]
                    vsubss  xmm2, xmm1, dword ptr [rsp+0D8h+pos+4]
                    vmovss  xmm0, dword ptr [rsp+0D8h+goal+8]
                    vsubss  xmm4, xmm0, dword ptr [rsp+0D8h+pos+8]
                    vmulss  xmm2, xmm2, xmm2
                    vmulss  xmm1, xmm3, xmm3
                    vaddss  xmm3, xmm2, xmm1
                    vmulss  xmm0, xmm4, xmm4
                    vaddss  xmm2, xmm3, xmm0
                    vsqrtss xmm1, xmm2, xmm2
                    vcomiss xmm1, xmm6
                  }
                  if ( v39 | v40 )
                  {
                    __asm
                    {
                      vsubss  xmm0, xmm6, xmm1
                      vaddss  xmm7, xmm7, xmm0
                    }
                  }
                }
              }
            }
          }
        }
      }
      v11 = Sentient_NextSentient(v11, &iTeamFlags);
    }
    while ( v11 );
  }
  __asm
  {
    vmovss  xmm6, cs:__real@447a0000
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm7; val
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm6, xmm0
    vmulss  xmm1, xmm0, cs:__real@3dcccccd
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
    vmovaps xmm6, [rsp+0D8h+var_38]
    vmovaps xmm7, [rsp+0D8h+var_48]
  }
  return result;
}

/*
==============
Bot_Score_Factor_AwayFromCenterPointHelper
==============
*/

__int64 __fastcall Bot_Score_Factor_AwayFromCenterPointHelper(const pathnode_t *node, const bot_score_parms_s *parms, int index, double weight)
{
  bool v10; 
  bool v11; 
  __int16 entityNum; 
  bot_score_type_t scoreType; 
  int v16; 
  __int64 result; 
  __int64 v20; 
  double v21; 
  double v22; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2026, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2027, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v10 = index == 0;
  if ( index < 0 )
  {
    LODWORD(v20) = index;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2028, ASSERT_TYPE_ASSERT, "( index ) >= ( 0 )", "index >= 0\n\t%i, %i", v20, 0i64);
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 )
  {
    __asm
    {
      vmovsd  [rsp+58h+var_28], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2029, ASSERT_TYPE_ASSERT, "( weight ) > ( 0 )", "weight > 0\n\t%g, %g", v21, v22) )
      __debugbreak();
  }
  if ( (parms->flags & 0x40) != 0 )
    __asm { vmulss  xmm6, xmm6, cs:__real@40400000 }
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v16 = Bot_Score_Factor_AwayFromPoint(node, &parms->vector1, 1000);
  __asm { vmovaps xmm1, xmm6; weight }
  result = BotScoreDebugFactor(index, *(double *)&_XMM1, v16, scoreType, entityNum);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
Bot_Score_Factor_AwayFromPoint
==============
*/
int Bot_Score_Factor_AwayFromPoint(const pathnode_t *node, const vec3_t *point, int maxDistAway)
{
  int result; 
  vec3_t pos; 

  _RBX = point;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm3, xmm0, dword ptr [rsp+48h+pos]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+48h+pos+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+48h+pos+8]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vdivss  xmm1, xmm0, xmm1
    vsqrtss xmm5, xmm2, xmm2
    vmulss  xmm2, xmm5, xmm1
    vmulss  xmm3, xmm2, cs:__real@42c80000
    vaddss  xmm4, xmm3, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm4, 1
    vcvttss2si eax, xmm3
  }
  if ( result > 100 )
    result = 100;
  if ( result < 0 )
    return 0;
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
int Bot_Score_Factor_CloseToPoint(const pathnode_t *node, const vec3_t *point, int maxDistAway)
{
  int result; 
  vec3_t pos; 

  _RBX = point;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm3, xmm0, dword ptr [rsp+48h+pos]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+48h+pos+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+48h+pos+8]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm3, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vdivss  xmm0, xmm3, xmm1
    vsqrtss xmm5, xmm2, xmm2
    vmulss  xmm1, xmm5, xmm0
    vsubss  xmm1, xmm3, xmm1
    vmulss  xmm0, xmm1, cs:__real@42c80000
    vaddss  xmm3, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
  }
  if ( result > 100 )
    result = 100;
  if ( result < 0 )
    return 0;
  return result;
}

/*
==============
Bot_Score_Factor_ConcealedRearFromDir
==============
*/
int Bot_Score_Factor_ConcealedRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  int result; 

  *(double *)&_XMM0 = vectoyaw((const vec2_t *)lookDir);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@43340000; arcYaw
    vmovss  xmm2, cs:__real@42b40000; coneAngle
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcMax(node, *(float *)&_XMM1, *(float *)&_XMM2, 4);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si eax, xmm4
  }
  return result;
}

/*
==============
Bot_Score_Factor_ConcealedRearFromPoint
==============
*/
int Bot_Score_Factor_ConcealedRearFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  int result; 
  vec3_t pos; 
  vec2_t vec; 

  _RBX = lookAtPoint;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rsp+58h+pos]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+58h+pos+4]
    vmovss  dword ptr [rsp+58h+vec], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+pos+8]
    vmovss  [rsp+58h+var_20], xmm2
    vmovss  dword ptr [rsp+58h+vec+4], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@43340000; arcYaw
    vmovss  xmm2, cs:__real@42b40000; coneAngle
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcMax(node, *(float *)&_XMM1, *(float *)&_XMM2, 4);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si eax, xmm4
  }
  return result;
}

/*
==============
Bot_Score_Factor_CoverRearFromDir
==============
*/
__int64 Bot_Score_Factor_CoverRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  int StopGoalStance; 
  int RawArcSum; 

  StopGoalStance = Bot_GetStopGoalStance(node);
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)lookDir);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@43340000; arcYaw
    vmovss  xmm2, cs:__real@42b40000; coneAngle
  }
  RawArcSum = Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, StopGoalStance);
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
  int RawArcSum; 
  vec3_t pos; 
  vec2_t vec; 

  _RBX = lookAtPoint;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rsp+58h+pos]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+58h+pos+4]
    vmovss  dword ptr [rsp+58h+vec], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+pos+8]
    vmovss  [rsp+58h+var_20], xmm2
    vmovss  dword ptr [rsp+58h+vec+4], xmm0
  }
  LODWORD(_RBX) = Bot_GetStopGoalStance(node);
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@43340000; arcYaw
    vmovss  xmm2, cs:__real@42b40000; coneAngle
  }
  RawArcSum = Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, (int)_RBX);
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
int Bot_Score_Factor_CrouchSightFacingDir(const pathnode_t *node, const vec3_t *lookDir)
{
  int result; 

  *(double *)&_XMM0 = vectoyaw((const vec2_t *)lookDir);
  __asm
  {
    vmovss  xmm2, cs:__real@41c80000; coneAngle
    vmovaps xmm1, xmm0; arcYaw
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, 2);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@40555555
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_CrouchSightFacingPoint
==============
*/
int Bot_Score_Factor_CrouchSightFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  int result; 
  vec3_t pos; 
  vec2_t vec; 

  _RBX = lookAtPoint;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rsp+58h+pos]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+58h+pos+4]
    vmovss  dword ptr [rsp+58h+vec], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+pos+8]
    vmovss  [rsp+58h+var_20], xmm2
    vmovss  dword ptr [rsp+58h+vec+4], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vmovss  xmm2, cs:__real@41c80000; coneAngle
    vmovaps xmm1, xmm0; arcYaw
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, 2);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@40555555
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_ExposedToSky
==============
*/
int Bot_Score_Factor_ExposedToSky(const pathnode_t *node)
{
  int v2; 
  bool IsExposedSky; 
  int wLinkCount; 
  __int64 v6; 
  int result; 

  v2 = 0;
  IsExposedSky = Path_IsExposedSky(node);
  LOWORD(wLinkCount) = node->dynamic.wLinkCount;
  _ESI = IsExposedSky;
  if ( (__int16)wLinkCount > 0 )
  {
    v6 = 0i64;
    do
    {
      if ( Path_IsNodeIndexExposedSky(node->constant.Links[v6].nodeNum) )
        ++_ESI;
      wLinkCount = node->dynamic.wLinkCount;
      ++v2;
      ++v6;
    }
    while ( v2 < wLinkCount );
  }
  _EAX = (__int16)wLinkCount + 1;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, esi
    vcvtdq2ps xmm1, xmm1
    vcvtdq2ps xmm0, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, cs:__real@42c80000
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm2, xmm1, xmm3, 1
    vcvttss2si eax, xmm2
  }
  return result;
}

/*
==============
Bot_Score_Factor_FacesAwayFromPoint
==============
*/
int Bot_Score_Factor_FacesAwayFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint, const vec3_t *facingCheckPoint)
{
  int result; 
  vec3_t pos; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
  }
  _RBX = lookAtPoint;
  _RDI = facingCheckPoint;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm13, xmm0, dword ptr [rsp+0B8h+pos]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm11, xmm1, dword ptr [rsp+0B8h+pos+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm12, xmm0, dword ptr [rsp+0B8h+pos+8]
    vmulss  xmm0, xmm13, xmm13
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm12
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm4, xmm1, dword ptr [rsp+0B8h+pos+4]
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm10, xmm9, xmm0
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm6, xmm0, dword ptr [rsp+0B8h+pos]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm7, xmm0, dword ptr [rsp+0B8h+pos+8]
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm9, xmm0
    vdivss  xmm5, xmm9, xmm0
    vmulss  xmm1, xmm4, xmm5
    vmulss  xmm0, xmm11, xmm10
    vmulss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm10
    vmulss  xmm2, xmm6, xmm5
    vmulss  xmm0, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm12, xmm10
    vmulss  xmm3, xmm7, xmm5
    vmulss  xmm0, xmm3, xmm1
    vaddss  xmm2, xmm4, xmm0
    vmovss  xmm4, cs:__real@42480000
    vmulss  xmm1, xmm2, xmm4
    vsubss  xmm0, xmm4, xmm1
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si eax, xmm4
  }
  _R11 = &v71;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
  }
  return result;
}

/*
==============
Bot_Score_Factor_GeneralExposure
==============
*/
int Bot_Score_Factor_GeneralExposure(const pathnode_t *node, int exposeFlags, int maxExposeValue)
{
  int result; 

  Path_NodeExposureGeneral(node, exposeFlags);
  if ( maxExposeValue < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", 0, maxExposeValue) )
    __debugbreak();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, rax
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, cs:__real@42c80000
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm2, xmm1, xmm3, 1
    vcvttss2si eax, xmm2
  }
  return result;
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
  gentity_s *v13; 
  __int16 v14; 
  bot_score_type_t v15; 
  int v16; 
  __int64 v18; 
  __int64 v19; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2046, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2047, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v6 = 0;
  if ( index < 0 )
  {
    LODWORD(v18) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2048, ASSERT_TYPE_ASSERT, "( index ) >= ( 0 )", "index >= 0\n\t%i, %i", v18, 0i64) )
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
        LODWORD(v19) = level.num_entities;
        LODWORD(v18) = parms->integer2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2067, ASSERT_TYPE_ASSERT, "(unsigned)( parms->integer2 ) < (unsigned)( level.num_entities )", "parms->integer2 doesn't index level.num_entities\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v7 = &level.gentities[parms->integer2];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2069, ASSERT_TYPE_ASSERT, "( aerialEntity )", (const char *)&queryFormat, "aerialEntity") )
        __debugbreak();
      entityNum = parms->entityNum;
      scoreType = parms->scoreType;
      v10 = Bot_Score_Factor_StandingCoverFacingPoint(node, &v7->r.currentOrigin);
      __asm { vmovss  xmm1, cs:__real@40800000; weight }
      v6 = BotScoreDebugFactor(index, *(double *)&_XMM1, v10, scoreType, entityNum);
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
    LODWORD(v19) = level.num_entities;
    LODWORD(v18) = parms->integer2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2083, ASSERT_TYPE_ASSERT, "(unsigned)( parms->integer2 ) < (unsigned)( level.num_entities )", "parms->integer2 doesn't index level.num_entities\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v13 = &level.gentities[parms->integer3];
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2085, ASSERT_TYPE_ASSERT, "( aerialEntity )", (const char *)&queryFormat, "aerialEntity") )
    __debugbreak();
  v14 = parms->entityNum;
  v15 = parms->scoreType;
  v16 = Bot_Score_Factor_StandingCoverFacingPoint(node, &v13->r.currentOrigin);
  __asm { vmovss  xmm1, cs:__real@40800000; weight }
  return v6 + (unsigned int)BotScoreDebugFactor(index + 1, *(double *)&_XMM1, v16, v15, v14);
}

/*
==============
Bot_Score_Factor_HighTraffic360
==============
*/

int __fastcall Bot_Score_Factor_HighTraffic360(const pathnode_t *node, double _XMM1_8)
{
  int result; 

  __asm
  {
    vmovss  xmm2, cs:__real@43340000; coneAngle
    vxorps  xmm1, xmm1, xmm1; arcYaw
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, 8);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3e05db31
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_HighTrafficSelf
==============
*/
int Bot_Score_Factor_HighTrafficSelf(const pathnode_t *node)
{
  int result; 

  __asm { vxorps  xmm0, xmm0, xmm0 }
  Path_NodeExposureGetTraffic(node);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3ec8c8c9
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_HighTrafficViewDir
==============
*/
int Bot_Score_Factor_HighTrafficViewDir(const pathnode_t *node, const vec3_t *lookDir)
{
  int result; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1678, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)lookDir);
  __asm
  {
    vmovss  xmm2, cs:__real@41b80000; coneAngle
    vmovaps xmm1, xmm0; arcYaw
  }
  Path_NodeExposureGetRawArcMax(node, *(float *)&_XMM1, *(float *)&_XMM2, 8);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vminss  xmm1, xmm0, cs:__real@437f0000
    vmulss  xmm2, xmm1, cs:__real@3ec8c8c9
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm2, xmm1, xmm3, 1
    vcvttss2si eax, xmm2
  }
  return result;
}

/*
==============
Bot_Score_Factor_HighTrafficViewToPoint
==============
*/
int Bot_Score_Factor_HighTrafficViewToPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  vec3_t pos; 
  vec3_t lookDir; 

  _RBX = lookAtPoint;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rsp+58h+pos]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+58h+pos+4]
    vmovss  dword ptr [rsp+58h+lookDir], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+pos+8]
    vmovss  dword ptr [rsp+58h+lookDir+8], xmm2
    vmovss  dword ptr [rsp+58h+lookDir+4], xmm0
  }
  return Bot_Score_Factor_HighTrafficViewDir(node, &lookDir);
}

/*
==============
Bot_Score_Factor_IdealRange
==============
*/

int __fastcall Bot_Score_Factor_IdealRange(const pathnode_t *node, const vec3_t *point, double minRange, double maxRange, float zeroFraction)
{
  bool v13; 
  bool v14; 
  char v17; 
  char v18; 
  int result; 
  vec3_t pos; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  v13 = node == NULL;
  if ( !node )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1390, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, [rsp+98h+zeroFraction]
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm9, xmm8
    vcomiss xmm7, xmm8
    vcomiss xmm7, xmm6
  }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1392, ASSERT_TYPE_ASSERT, "( (minRange < 0.0f) || (minRange <= maxRange) )", (const char *)&queryFormat, "(minRange < 0.0f) || (minRange <= maxRange)") )
    __debugbreak();
  __asm
  {
    vcomiss xmm6, xmm8
    vcomiss xmm6, xmm7
  }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+pos]
    vsubss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rsp+98h+pos+4]
    vsubss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsp+98h+pos+8]
    vsubss  xmm4, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcomiss xmm1, xmm7
  }
  if ( v17 )
  {
    __asm { vcomiss xmm7, xmm8 }
    if ( !v17 )
    {
      __asm
      {
        vsubss  xmm1, xmm7, xmm1
        vmulss  xmm0, xmm7, xmm9
      }
LABEL_13:
      __asm
      {
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, cs:__real@42c80000
        vcvttss2si eax, xmm2
      }
      goto LABEL_15;
    }
  }
  __asm { vcomiss xmm1, xmm6 }
  if ( !(v17 | v18) )
  {
    __asm { vcomiss xmm6, xmm8 }
    if ( !v17 )
    {
      __asm
      {
        vsubss  xmm1, xmm1, xmm6
        vmulss  xmm0, xmm6, xmm9
      }
      goto LABEL_13;
    }
  }
  result = 100;
LABEL_15:
  if ( result > 100 )
    result = 100;
  if ( result < 0 )
    result = 0;
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
Bot_Score_Factor_IdealRangeWeapon
==============
*/

__int64 __fastcall Bot_Score_Factor_IdealRangeWeapon(const pathnode_t *node, __int16 entityNum, const vec3_t *targetPoint, double addDistance)
{
  const playerState_s *EntityPlayerState; 
  const Weapon *ViewmodelWeapon; 
  __int64 result; 
  char v24; 
  float min; 
  float max; 
  vec3_t pos; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)entityNum >= level.num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1792, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( level.num_entities )", "entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", entityNum, level.num_entities) )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(&level.gentities[entityNum]);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1795, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = Bot_Weap_GetViewmodelWeapon(EntityPlayerState);
  if ( Bot_Weap_IsNone(ViewmodelWeapon) )
  {
    result = 0i64;
  }
  else
  {
    pathnode_t::GetPos((pathnode_t *)node, &pos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+pos]
      vsubss  xmm3, xmm0, dword ptr [rbp+0]
      vmovss  xmm1, dword ptr [rsp+88h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+4]
      vmovss  xmm0, dword ptr [rsp+88h+pos+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
    }
    _EBX = 0;
    __asm { vaddss  xmm6, xmm1, xmm6 }
    Bot_Weap_EffectiveRange(EntityPlayerState, ViewmodelWeapon, &min, &max, 0);
    *(double *)&_XMM0 = Bot_Weap_GetIdealFiringRange(EntityPlayerState, ViewmodelWeapon);
    __asm
    {
      vmovss  xmm2, [rsp+88h+min]
      vcomiss xmm6, xmm2
    }
    if ( !v24 )
    {
      __asm { vcomiss xmm6, xmm0 }
      if ( v24 )
      {
        __asm
        {
          vsubss  xmm1, xmm6, xmm2
          vsubss  xmm0, xmm0, xmm2
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm2, xmm1, cs:__real@42c80000
          vcvttss2si ebx, xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm2, [rsp+88h+max]
          vcomiss xmm6, xmm2
        }
        if ( v24 )
        {
          __asm
          {
            vsubss  xmm1, xmm6, xmm0
            vsubss  xmm0, xmm2, xmm0
            vdivss  xmm2, xmm1, xmm0
            vmovss  xmm1, cs:__real@3f800000
            vsubss  xmm2, xmm1, xmm2
            vmulss  xmm0, xmm2, cs:__real@42c80000
            vcvttss2si ebx, xmm0
          }
        }
      }
    }
    result = _EBX;
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  return result;
}

/*
==============
Bot_Score_Factor_InFrontOf
==============
*/
int Bot_Score_Factor_InFrontOf(const pathnode_t *node, const vec3_t *eyePoint, const vec3_t *eyeForward)
{
  bool v10; 
  bool v11; 
  int result; 
  vec3_t pos; 
  char v50; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  _RBX = eyeForward;
  _RSI = eyePoint;
  v10 = node == NULL;
  if ( !node )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1363, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx]
  }
  if ( v10 )
  {
    __asm { vucomiss xmm0, dword ptr [rbx+4] }
    if ( v10 )
    {
      __asm { vucomiss xmm0, dword ptr [rbx+8] }
      if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1364, ASSERT_TYPE_ASSERT, "( Vec3NotZero( eyeForward ) )", (const char *)&queryFormat, "Vec3NotZero( eyeForward )") )
        __debugbreak();
    }
  }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm8, xmm0, dword ptr [rsp+88h+pos]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm6, xmm1, dword ptr [rsp+88h+pos+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm7, xmm0, dword ptr [rsp+88h+pos+8]
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
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm8, xmm5
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm7, xmm5
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm2, cs:__real@42480000
    vaddss  xmm4, xmm3, cs:__real@424a0000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm4, 1
    vcvttss2si eax, xmm3
  }
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
Bot_Score_Factor_LowTrafficSelf
==============
*/
int Bot_Score_Factor_LowTrafficSelf(const pathnode_t *node)
{
  int result; 

  __asm
  {
    vmovss  xmm1, cs:__real@42c80000
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetTraffic(node);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, cs:__real@3ec8c8c9
    vsubss  xmm2, xmm1, xmm2
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm2, xmm1, xmm3, 1
    vcvttss2si eax, xmm2
  }
  return result;
}

/*
==============
Bot_Score_Factor_NoExposurePastNode
==============
*/
__int64 Bot_Score_Factor_NoExposurePastNode(const pathnode_t *node, const vec3_t *point, int exposeFlags)
{
  int RawMax; 
  vec3_t pos; 
  vec2_t vec; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+pos]
    vsubss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rsp+58h+pos+4]
    vsubss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+58h+vec], xmm1
    vmovss  xmm1, dword ptr [rsp+58h+pos+8]
    vsubss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  [rsp+58h+var_20], xmm2
    vmovss  dword ptr [rsp+58h+vec+4], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm { vmovaps xmm1, xmm0; yaw }
  RawMax = Path_NodeExposureGetRawMax(node, *(float *)&_XMM1, exposeFlags);
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

int __fastcall Bot_Score_Factor_NoTraffic360(const pathnode_t *node, double _XMM1_8)
{
  int result; 

  __asm
  {
    vmovss  xmm2, cs:__real@43340000; coneAngle
    vxorps  xmm1, xmm1, xmm1; arcYaw
  }
  Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, 8);
  __asm
  {
    vmovss  xmm1, cs:__real@42c80000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, cs:__real@3e05db31
    vsubss  xmm2, xmm1, xmm2
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm2, xmm1, xmm3, 1
    vcvttss2si eax, xmm2
  }
  return result;
}

/*
==============
Bot_Score_Factor_NoTrafficRearFromDir
==============
*/
int Bot_Score_Factor_NoTrafficRearFromDir(const pathnode_t *node, const vec3_t *lookDir)
{
  int result; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1639, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)lookDir);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@43340000; arcYaw
    vmovss  xmm2, cs:__real@431d0000; coneAngle
  }
  Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, 8);
  __asm
  {
    vmovss  xmm2, cs:__real@42c80000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vminss  xmm1, xmm0, cs:__real@43800000
    vmulss  xmm3, xmm1, cs:__real@3ec80000
    vsubss  xmm0, xmm2, xmm3
    vaddss  xmm4, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm3, xmm0, xmm4, 1
    vcvttss2si eax, xmm3
  }
  return result;
}

/*
==============
Bot_Score_Factor_NoTrafficRearFromPoint
==============
*/
int Bot_Score_Factor_NoTrafficRearFromPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  vec3_t pos; 
  vec3_t lookDir; 

  _RBX = lookAtPoint;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rsp+58h+pos]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+58h+pos+4]
    vmovss  dword ptr [rsp+58h+lookDir], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+pos+8]
    vmovss  dword ptr [rsp+58h+lookDir+8], xmm2
    vmovss  dword ptr [rsp+58h+lookDir+4], xmm0
  }
  return Bot_Score_Factor_NoTrafficRearFromDir(node, &lookDir);
}

/*
==============
Bot_Score_Factor_NotRecentlyUsed
==============
*/
int Bot_Score_Factor_NotRecentlyUsed(const pathnode_t *node, const bot_score_parms_s *parms)
{
  gentity_s *GEntity; 
  gentity_s *v5; 
  int result; 
  const char *GameType; 
  unsigned int NodeTeam; 
  __int64 v15; 

  GEntity = G_GetGEntity(parms->entityNum);
  v5 = GEntity;
  if ( (parms->flags & 1) != 0 )
    return 100;
  if ( (!GEntity || !GEntity->sentient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1897, ASSERT_TYPE_ASSERT, "( thisEnt && thisEnt->sentient )", (const char *)&queryFormat, "thisEnt && thisEnt->sentient") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1898, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", "%s\n\tAccess to pathnode_dynamic_t::bots", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
    __debugbreak();
  if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1899, ASSERT_TYPE_ASSERT, "(!Path_MapUsesScriptedAIData())", "%s\n\tmap/mode is only set up to use scripted soldier data, should not be accessing pathnode_dynamic::bots", "!Path_MapUsesScriptedAIData()") )
      __debugbreak();
  }
  NodeTeam = Path_GetNodeTeam(v5->sentient->eTeam);
  if ( NodeTeam >= 2 )
  {
    LODWORD(v15) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 1905, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( (2) )", "nodeTeam doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3fd55555
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_ProneCover360
==============
*/
int Bot_Score_Factor_ProneCover360(const pathnode_t *node)
{
  int result; 

  __asm { vxorps  xmm0, xmm0, xmm0 }
  Path_NodeExposureGeneral(node, 4);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3f44ec4f
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_ProneCoverFacingDir
==============
*/
int Bot_Score_Factor_ProneCoverFacingDir(const pathnode_t *node, const vec3_t *lookDir)
{
  int result; 

  *(double *)&_XMM0 = vectoyaw((const vec2_t *)lookDir);
  __asm
  {
    vmovss  xmm2, cs:__real@41c80000; coneAngle
    vmovaps xmm1, xmm0; arcYaw
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, 4);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@41480000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_ProneCoverFacingPoint
==============
*/
int Bot_Score_Factor_ProneCoverFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  int result; 
  vec3_t pos; 
  vec2_t vec; 

  _RBX = lookAtPoint;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rsp+58h+pos]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+58h+pos+4]
    vmovss  dword ptr [rsp+58h+vec], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+pos+8]
    vmovss  [rsp+58h+var_20], xmm2
    vmovss  dword ptr [rsp+58h+vec+4], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vmovss  xmm2, cs:__real@41c80000; coneAngle
    vmovaps xmm1, xmm0; arcYaw
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, 4);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@41480000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_StandingCoverFacingPoint
==============
*/
int Bot_Score_Factor_StandingCoverFacingPoint(const pathnode_t *node, const vec3_t *lookAtPoint)
{
  int result; 
  vec3_t pos; 
  vec2_t vec; 

  _RBX = lookAtPoint;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rsp+58h+pos]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+58h+pos+4]
    vmovss  dword ptr [rsp+58h+vec], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+pos+8]
    vmovss  [rsp+58h+var_20], xmm2
    vmovss  dword ptr [rsp+58h+vec+4], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vmovss  xmm2, cs:__real@42340000; coneAngle
    vmovaps xmm1, xmm0; arcYaw
    vxorps  xmm0, xmm0, xmm0
  }
  Path_NodeExposureGetRawArcSum(node, *(float *)&_XMM1, *(float *)&_XMM2, 1);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@40480000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Bot_Score_Factor_VisibilityToNode
==============
*/
int Bot_Score_Factor_VisibilityToNode(const pathnode_t *node, const pathnode_t *lookAtNode)
{
  int v5; 
  unsigned int v6; 
  const pathnode_t *v7; 
  int result; 

  v5 = 0;
  v6 = 0;
  if ( Path_NodesVisibleNoPeek(lookAtNode, node) )
    v5 = 1;
  if ( lookAtNode->constant.totalLinkCount )
  {
    do
    {
      v7 = Path_ConvertIndexToNode(lookAtNode->constant.Links[v6].nodeNum);
      if ( Path_NodesVisibleNoPeek(v7, node) )
        ++v5;
      ++v6;
    }
    while ( v6 < lookAtNode->constant.totalLinkCount );
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@41200000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
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
  int v9; 
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
  __asm
  {
    vmovss  xmm3, cs:__real@42800000; maxHeight
    vmovss  xmm2, cs:__real@43400000; maxDist
  }
  v9 = Path_NodesInCylinder(originPoint, NULL, *(float *)&_XMM2, *(float *)&_XMM3, nodes, 64, -2);
  if ( v9 <= 0 )
    return -1;
  std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(nodes, &nodes[v9], v9, Path_CompareNodesIncreasing);
  node = nodes[0].node;
  if ( nodes[0].node )
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
  int v14; 
  int v16; 
  bot_score_type_t v17; 
  int v18; 
  int v19; 
  int v21; 
  bot_score_type_t v22; 
  int v23; 
  int v24; 
  __int64 v27; 

  v5 = object;
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 517, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (unsigned int)parms->entityNum >= level.num_entities )
  {
    LODWORD(v27) = parms->entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( parms->entityNum ) < (unsigned)( level.num_entities )", "parms->entityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v27, level.num_entities) )
      __debugbreak();
  }
  v6 = Path_ConvertIndexToNode(v5);
  v7 = &level.gentities[parms->entityNum];
  v8 = Sentient_NearestNode(v7->sentient);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 523, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Bot_Score_NodeShouldIgnore(v6, parms->entityNum, parms) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@41200000; recentUseTime }
  if ( Bot_Score_NodeWasRecentlyUsed(v6, parms, *(float *)&_XMM2) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@43fa0000; radius }
  if ( Bot_Score_NodeIsDangerous(v6, parms->entityNum, *(float *)&_XMM2) || (parms->flags & 0x20) != 0 && (Bot_Score_NodeIgnoreTraversalIslandMismatch(v6, parms) || v8 && !Path_NodesVisibleNoPeek(v6, v8)) )
    return 0i64;
  if ( Path_NodeExposureGetTraffic(v6) )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@42c80000; radius }
  if ( Bot_Score_NodeIsNearAllySentient(v6, parms->entityNum, *(float *)&_XMM2) || checkSightToBot && v8 && !Path_NodesVisibleAreaNoPeek(v6, v8) )
    return 0i64;
  entityNum = parms->entityNum;
  scoreType = parms->scoreType;
  v14 = Bot_Score_Factor_ProneCover360(v6);
  __asm { vmovss  xmm1, cs:__real@3f800000; weight }
  v16 = BotScoreDebugFactor(0, *(double *)&_XMM1, v14, scoreType, entityNum);
  LOWORD(scoreType) = parms->entityNum;
  v17 = parms->scoreType;
  v18 = v16;
  v19 = Bot_Score_Factor_NoTraffic360(v6);
  __asm { vmovss  xmm1, cs:__real@3f800000; weight }
  v21 = BotScoreDebugFactor(1, *(double *)&_XMM1, v19, v17, scoreType);
  LOWORD(scoreType) = parms->entityNum;
  v22 = parms->scoreType;
  v23 = v21 + v18;
  v24 = Bot_Score_Factor_CloseToPoint(v6, &v7->r.currentOrigin, 1000);
  __asm { vmovss  xmm1, cs:__real@3f800000; weight }
  return v23 + (unsigned int)BotScoreDebugFactor(2, *(double *)&_XMM1, v24, v22, scoreType);
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
_BOOL8 Bot_Score_NodeIsCurrentlyOccupied(const pathnode_t *node, __int16 botEntityNum, const bot_score_parms_s *parms)
{
  bot_data_t *EntityData; 
  const gentity_s *v7; 
  __int64 v10; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2101, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2102, ASSERT_TYPE_ASSERT, "( parms )", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( (parms->flags & 1) != 0 )
    return 0i64;
  if ( (unsigned int)botEntityNum >= level.num_entities )
  {
    LODWORD(v10) = botEntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2110, ASSERT_TYPE_ASSERT, "(unsigned)( botEntityNum ) < (unsigned)( level.num_entities )", "botEntityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v10, level.num_entities) )
      __debugbreak();
  }
  EntityData = Bot_GetEntityData(&level.gentities[botEntityNum]);
  if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2112, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !EntityData->botInfo.ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2113, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent )", (const char *)&queryFormat, "botData->botInfo.ent") )
    __debugbreak();
  if ( !EntityData->botInfo.ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2114, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent->sentient )", (const char *)&queryFormat, "botData->botInfo.ent->sentient") )
    __debugbreak();
  if ( !Path_NodeUnclaimedByOther(node, EntityData->botInfo.ent->sentient) )
    return 1i64;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( !EntHandle::isDefined(&EntityData->botInfo.ent->r.ownerNum) )
    return 0i64;
  v7 = EntHandle::ent(&EntityData->botInfo.ent->r.ownerNum);
  __asm { vmovss  xmm2, cs:__real@3f800000; distanceScalar }
  return Bot_EntityOccupiesLocation(v7, &pos, *(float *)&_XMM2) != 0;
}

/*
==============
Bot_Score_NodeIsDangerous
==============
*/

__int64 __fastcall Bot_Score_NodeIsDangerous(const pathnode_t *node, __int16 botEntityNum, double radius)
{
  bot_data_t *EntityData; 
  AIBotInterface *m_pAI; 
  unsigned __int64 eTeam; 
  gentity_s *ent; 
  bot_mem_event_t *i; 
  char v26; 
  __int64 result; 
  __int64 v29; 
  bitarray<224> v30; 
  AIBotWrapper v31; 
  __int128 v32; 
  __int64 v33; 
  unsigned int v34; 
  vec3_t pos; 
  bot_mem_iterator_t memIt; 

  __asm
  {
    vmovaps [rsp+310h+var_30], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2165, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  __asm { vmulss  xmm6, xmm6, xmm6 }
  if ( (unsigned int)botEntityNum >= level.num_entities )
  {
    LODWORD(v29) = botEntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2174, ASSERT_TYPE_ASSERT, "(unsigned)( botEntityNum ) < (unsigned)( level.num_entities )", "botEntityNum doesn't index level.num_entities\n\t%i not in [0, %i)", v29, level.num_entities) )
      __debugbreak();
  }
  EntityData = Bot_GetEntityData(&level.gentities[botEntityNum]);
  if ( !EntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2176, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  AIBotWrapper::AIBotWrapper(&v31, EntityData);
  m_pAI = v31.m_pAI;
  if ( !v31.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2177, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  eTeam = (unsigned int)EntityData->botInfo.sentient->eTeam;
  v32 = 0ui64;
  v33 = 0i64;
  v34 = 0;
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  *((_DWORD *)&v32 + (eTeam >> 5)) |= 0x80000000 >> (eTeam & 0x1F);
  __asm
  {
    vmovups xmm0, [rbp+210h+var_268]
    vmovsd  xmm1, [rbp+210h+var_258]
  }
  v30.array[6] = v34;
  ent = EntityData->botInfo.ent;
  __asm
  {
    vmovups [rsp+310h+var_2C0], xmm0
    vmovsd  [rsp+310h+var_2B0], xmm1
  }
  if ( AICommonInterface::BadPlace_IsNodeInAnyBadPlace(m_pAI, node, ent->clipmask, &v30) )
  {
LABEL_22:
    result = 1i64;
    goto LABEL_23;
  }
  Bot_MemoryIterateInit(&memIt);
  for ( i = Bot_MemoryIterate(EntityData, level.time, level.time - 60000, &memIt); i; i = Bot_MemoryIterate(EntityData, level.time, level.time - 60000, &memIt) )
  {
    if ( i->type == BOT_MEM_DEATH )
    {
      pathnode_t::GetPos((pathnode_t *)node, &pos);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+210h+pos]
        vsubss  xmm3, xmm0, dword ptr [rbx+14h]
        vmovss  xmm1, dword ptr [rbp+210h+pos+4]
        vsubss  xmm2, xmm1, dword ptr [rbx+18h]
        vmovss  xmm0, dword ptr [rbp+210h+pos+8]
        vsubss  xmm4, xmm0, dword ptr [rbx+1Ch]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, xmm6
      }
      if ( v26 )
        goto LABEL_22;
    }
  }
  result = 0i64;
LABEL_23:
  __asm { vmovaps xmm6, [rsp+310h+var_30] }
  return result;
}

/*
==============
Bot_Score_NodeIsNearAllySentient
==============
*/

__int64 __fastcall Bot_Score_NodeIsNearAllySentient(const pathnode_t *node, __int16 botEntityNum, double radius)
{
  gentity_s *v8; 
  sentient_s *v12; 
  __int64 result; 
  vec3_t pos; 
  bitarray<224> iTeamFlags; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  if ( (unsigned int)botEntityNum >= level.num_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2205, ASSERT_TYPE_ASSERT, "(unsigned)( botEntityNum ) < (unsigned)( level.num_entities )", "botEntityNum doesn't index level.num_entities\n\t%i not in [0, %i)", botEntityNum, level.num_entities) )
    __debugbreak();
  __asm { vmulss  xmm6, xmm6, xmm6 }
  v8 = &level.gentities[botEntityNum];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2215, ASSERT_TYPE_ASSERT, "( botEnt )", (const char *)&queryFormat, "botEnt") )
    __debugbreak();
  if ( !v8->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2216, ASSERT_TYPE_ASSERT, "( botEnt->sentient )", (const char *)&queryFormat, "botEnt->sentient") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+0A8h+iTeamFlags.array], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rsp+0A8h+iTeamFlags.array+10h], xmm1
  }
  iTeamFlags.array[6] = _RAX->array[6];
  v12 = Sentient_FirstSentient(&iTeamFlags);
  if ( v12 )
  {
    while ( 1 )
    {
      if ( !v12->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2222, ASSERT_TYPE_ASSERT, "( sentient->ent )", (const char *)&queryFormat, "sentient->ent") )
        __debugbreak();
      if ( Bot_IsCharacterActive(v12->ent) )
      {
        if ( AI_IsAlliedSentient(v8->sentient, v12) )
        {
          if ( v12 != v8->sentient )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0A8h+pos]
              vmovss  xmm1, dword ptr [rsp+0A8h+pos+4]
              vsubss  xmm3, xmm0, dword ptr [rax+130h]
              vsubss  xmm2, xmm1, dword ptr [rax+134h]
              vmovss  xmm0, dword ptr [rsp+0A8h+pos+8]
              vsubss  xmm4, xmm0, dword ptr [rax+138h]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vcomiss xmm2, xmm6
            }
            if ( v12 < v8->sentient )
              break;
          }
        }
      }
      v12 = Sentient_NextSentient(v12, &iTeamFlags);
      if ( !v12 )
        goto LABEL_22;
    }
    result = 1i64;
  }
  else
  {
LABEL_22:
    result = 0i64;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
  return result;
}

/*
==============
Bot_Score_NodeShouldIgnore
==============
*/
__int64 Bot_Score_NodeShouldIgnore(const pathnode_t *node, __int16 botEntityNum, const bot_score_parms_s *parms)
{
  bot_data_t *EntityData; 
  unsigned __int16 v8; 
  bool IsExposedSky; 
  unsigned int v11; 
  BOOL IsNodeIndexExposedSky; 
  unsigned int wLinkCount; 
  bool v15; 
  __int64 result; 
  bool v19; 
  BOOL v20; 
  unsigned int v21; 
  unsigned int v23; 
  bool v24; 
  int v26; 
  ai_stance_e v27; 

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
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v8 = Path_ConvertNodeToIndex(node);
  if ( Path_IsNodeDisconnected(v8) || node->constant.parent.index || Path_IsNodeTraversalOrOverlapsTraversal(node) && (parms->flags & 0x100) == 0 || Bot_Score_NodeIsCurrentlyOccupied(node, botEntityNum, parms) )
    goto LABEL_28;
  __asm { vmovss  xmm6, cs:__real@42c80000 }
  if ( (parms->flags & 4) != 0 )
  {
    IsExposedSky = Path_IsExposedSky(node);
    v11 = 0;
    IsNodeIndexExposedSky = IsExposedSky;
    if ( !IsExposedSky )
    {
      _RDI = 0i64;
      while ( 1 )
      {
        wLinkCount = node->dynamic.wLinkCount;
        v15 = v11 < wLinkCount;
        if ( (int)v11 >= (int)wLinkCount )
          break;
        _RAX = node->constant.Links;
        __asm { vcomiss xmm6, dword ptr [rax+rdi] }
        if ( !v15 )
          IsNodeIndexExposedSky = Path_IsNodeIndexExposedSky(_RAX[_RDI].nodeNum);
        ++v11;
        ++_RDI;
        if ( IsNodeIndexExposedSky )
          goto LABEL_28;
      }
    }
    if ( IsNodeIndexExposedSky )
      goto LABEL_28;
  }
  if ( (parms->flags & 2) != 0 )
  {
    v19 = Path_IsExposedSky(node);
    v20 = !v19;
    v21 = 0;
    if ( v19 )
    {
      _RDI = 0i64;
      while ( 1 )
      {
        v23 = node->dynamic.wLinkCount;
        v24 = v21 < v23;
        if ( (int)v21 >= (int)v23 )
          break;
        _RAX = node->constant.Links;
        __asm { vcomiss xmm6, dword ptr [rax+rdi] }
        if ( !v24 )
          v20 = !Path_IsNodeIndexExposedSky(_RAX[_RDI].nodeNum);
        ++v21;
        ++_RDI;
        if ( v20 )
          goto LABEL_28;
      }
    }
    if ( v20 )
      goto LABEL_28;
  }
  if ( (parms->flags & 0x200) != 0 )
    goto LABEL_50;
  v26 = 7;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityData->botInfo.playerState->pm_flags, ACTIVE, 0x21u) )
    v26 = 6;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityData->botInfo.playerState->pm_flags, ACTIVE, 0x23u) )
    v26 &= ~4u;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityData->botInfo.playerState->pm_flags, ACTIVE, 0x22u) )
    v26 &= ~2u;
  if ( v26 != 7 && (v27 = Path_AllowedStancesForNode(node), (v27 & 7) == 0) && (v27 & v26) == 0 )
LABEL_28:
    result = 1i64;
  else
LABEL_50:
    result = 0i64;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
Bot_Score_NodeWasRecentlyUsed
==============
*/

__int64 __fastcall Bot_Score_NodeWasRecentlyUsed(const pathnode_t *node, const bot_score_parms_s *parms, double recentUseTime)
{
  gentity_s *GEntity; 
  gentity_s *v9; 
  const char *GameType; 
  int NodeTeam; 
  __int64 v12; 
  int v13; 
  __int64 result; 
  __int64 v19; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  GEntity = G_GetGEntity(parms->entityNum);
  v9 = GEntity;
  if ( (parms->flags & 1) != 0 )
    goto LABEL_21;
  if ( (!GEntity || !GEntity->sentient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2139, ASSERT_TYPE_ASSERT, "( thisEnt && thisEnt->sentient )", (const char *)&queryFormat, "thisEnt && thisEnt->sentient") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2140, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", "%s\n\tAccess to pathnode_dynamic_t::bots", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
    __debugbreak();
  if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2141, ASSERT_TYPE_ASSERT, "(!Path_MapUsesScriptedAIData())", "%s\n\tmap/mode is only set up to use scripted soldier data, should not be accessing pathnode_dynamic::bots", "!Path_MapUsesScriptedAIData()") )
      __debugbreak();
  }
  NodeTeam = Path_GetNodeTeam(v9->sentient->eTeam);
  v12 = NodeTeam;
  if ( (unsigned int)NodeTeam >= 2 )
  {
    LODWORD(v19) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2144, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( (2) )", "nodeTeam doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v19, 2) )
      __debugbreak();
  }
  v13 = node->dynamic.actors.dangerousNodeTime[v12];
  if ( v13 <= 0 )
    goto LABEL_21;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vcomiss xmm1, xmm6
  }
  if ( level.time > (unsigned int)v13 )
LABEL_21:
    result = 0i64;
  else
    result = 1i64;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
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
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  __int64 v13; 
  int v14[2048]; 

  v5 = numToPick;
  v7 = itemCount;
  if ( !items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2454, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
    __debugbreak();
  if ( (int)v7 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2455, ASSERT_TYPE_ASSERT, "( itemCount >= 0 )", (const char *)&queryFormat, "itemCount >= 0") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2456, ASSERT_TYPE_ASSERT, "( numToPick > 0 )", (const char *)&queryFormat, "numToPick > 0") )
    __debugbreak();
  if ( (int)v5 > (int)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2457, ASSERT_TYPE_ASSERT, "( numToPick <= itemCount )", (const char *)&queryFormat, "numToPick <= itemCount") )
    __debugbreak();
  memcpy_0(v14, items, 8 * v7);
  if ( (int)v5 > 0 )
  {
    v9 = 0i64;
    while ( 1 )
    {
      G_rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vsqrtss xmm1, xmm0, xmm0
        vcvttss2si r8d, xmm1
      }
      v13 = (int)v7 - _ER8 - 1i64;
      nodesPicked[v9++] = v14[2 * v13];
      if ( v9 >= v5 )
        break;
      if ( v13 < (int)v7 - 1 )
        qmemcpy(&v14[2 * v13], &v14[2 * v13 + 2], 8 * ((int)v7 - 1 - (__int64)((int)v7 - _ER8 - 1)));
      LODWORD(v7) = v7 - 1;
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
  G_rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vsqrtss xmm1, xmm0, xmm0
    vcvttss2si eax, xmm1
  }
  return (unsigned int)items[itemCount - _EAX - 1].object;
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
  __int64 v8; 
  const dvar_t *v12; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  int v19; 
  int *p_score; 
  int v21; 

  v8 = objectsCount;
  _RDI = botData;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2572, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !objects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2573, ASSERT_TYPE_ASSERT, "( objects )", (const char *)&queryFormat, "objects") )
    __debugbreak();
  if ( (int)v8 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2574, ASSERT_TYPE_ASSERT, "( objectsCount > 0 )", (const char *)&queryFormat, "objectsCount > 0") )
    __debugbreak();
  if ( selectCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2575, ASSERT_TYPE_ASSERT, "( selectCount > 0 )", (const char *)&queryFormat, "selectCount > 0") )
    __debugbreak();
  if ( selectCount > (int)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2576, ASSERT_TYPE_ASSERT, "( selectCount <= objectsCount )", (const char *)&queryFormat, "selectCount <= objectsCount") )
    __debugbreak();
  if ( nodesToPick <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2577, ASSERT_TYPE_ASSERT, "( nodesToPick > 0 )", (const char *)&queryFormat, "nodesToPick > 0") )
    __debugbreak();
  if ( nodesToPick > (int)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2578, ASSERT_TYPE_ASSERT, "( nodesToPick <= objectsCount )", (const char *)&queryFormat, "nodesToPick <= objectsCount") )
    __debugbreak();
  if ( nodesToPick > selectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2579, ASSERT_TYPE_ASSERT, "( nodesToPick <= selectCount )", (const char *)&queryFormat, "nodesToPick <= selectCount") )
    __debugbreak();
  _RDI->botDebugData.debugScoresSaving = 0;
  v12 = DVARINT_bot_ScoreType;
  if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  _R15 = parms;
  if ( v12->current.integer == parms->scoreType )
  {
    v14 = DVARINT_bot_ScoreClient;
    if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.integer == -1 )
      goto LABEL_37;
    v15 = DVARINT_bot_ScoreClient;
    if ( !DVARINT_bot_ScoreClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreClient") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer == _RDI->botInfo.ent->s.number )
    {
LABEL_37:
      v16 = DVARBOOL_bot_ScoreHold;
      if ( !DVARBOOL_bot_ScoreHold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreHold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( !v16->current.enabled || _RDI->botDebugData.debugScoresCount <= 0 )
      {
        _RDI->botDebugData.debugScoresSaving = 1;
        _RDI->botDebugData.debugScoresCount = 0;
        _RDI->botDebugData.debugScoresPicked = -1;
        memset_0(_RDI->botDebugData.debugScores, 0, sizeof(_RDI->botDebugData.debugScores));
        __asm
        {
          vmovups ymm0, ymmword ptr [r15]
          vmovups ymmword ptr [rdi+806Ch], ymm0
          vmovups xmm1, xmmword ptr [r15+20h]
          vmovups xmmword ptr [rdi+808Ch], xmm1
        }
      }
    }
  }
  Bot_Score_ScoreSet(objects, v8, parms);
  Bot_Score_SortTop(objects, v8, selectCount);
  v19 = selectCount - 1;
  if ( selectCount - 1 >= 0 )
  {
    p_score = &objects[v19].score;
    do
    {
      if ( *p_score > 0 )
        break;
      p_score -= 2;
      selectCount = v19--;
    }
    while ( v19 >= 0 );
  }
  v21 = selectCount;
  if ( nodesToPick < selectCount )
    v21 = nodesToPick;
  if ( v21 == 1 )
  {
    if ( !objects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2442, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
      __debugbreak();
    if ( selectCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2443, ASSERT_TYPE_ASSERT, "( itemCount >= 0 )", (const char *)&queryFormat, "itemCount >= 0") )
      __debugbreak();
    G_rand();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vsqrtss xmm1, xmm0, xmm0
      vcvttss2si eax, xmm1
    }
    *nodesPicked = objects[selectCount - _EAX - 1].object;
  }
  else if ( v21 > 1 )
  {
    Bot_Score_RndPickSortedMultiple(objects, selectCount, v21, nodesPicked);
  }
  if ( _RDI->botDebugData.debugScoresSaving )
  {
    if ( (int)v8 > 0 )
      std::_Sort_unchecked<bot_debug_score_t *,int (*)(bot_debug_score_t const &,bot_debug_score_t const &)>(_RDI->botDebugData.debugScores, (bot_debug_score_t *)&_RDI->scriptedAgentInfo.threat + v8 + 457, (8 * (9 * v8 + 9) - 72) / 72, CompareBotDebugScoreDecreasing);
    _RDI->botDebugData.debugScoresPicked = *nodesPicked;
    _RDI->botDebugData.debugScoresSelectCount = selectCount;
  }
  return (unsigned int)v21;
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
  _RBP = parms;
  _R15 = botData;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2650, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !objects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2651, ASSERT_TYPE_ASSERT, "( objects )", (const char *)&queryFormat, "objects") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_scoring.cpp", 2652, ASSERT_TYPE_ASSERT, "( objectsCount > 0 )", (const char *)&queryFormat, "objectsCount > 0") )
    __debugbreak();
  v9 = 0i64;
  _R15->botDebugData.debugScoresSaving = 0;
  v10 = DVARINT_bot_ScoreType;
  if ( !DVARINT_bot_ScoreType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer == _RBP->scoreType )
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
    if ( v12->current.integer == _R15->botInfo.ent->s.number )
    {
LABEL_22:
      v13 = DVARBOOL_bot_ScoreHold;
      if ( !DVARBOOL_bot_ScoreHold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_ScoreHold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( !v13->current.enabled || _R15->botDebugData.debugScoresCount <= 0 )
      {
        _R15->botDebugData.debugScoresSaving = 1;
        _R15->botDebugData.debugScoresCount = 0;
        _R15->botDebugData.debugScoresPicked = -1;
        memset_0(_R15->botDebugData.debugScores, 0, sizeof(_R15->botDebugData.debugScores));
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0]
          vmovups ymmword ptr [r15+806Ch], ymm0
          vmovups xmm1, xmmword ptr [rbp+20h]
          vmovups xmmword ptr [r15+808Ch], xmm1
        }
      }
    }
  }
  Bot_Score_ScoreSet(objects, v5, _RBP);
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
  if ( _R15->botDebugData.debugScoresSaving )
  {
    if ( (int)v5 > 0 )
      std::_Sort_unchecked<bot_debug_score_t *,int (*)(bot_debug_score_t const &,bot_debug_score_t const &)>(_R15->botDebugData.debugScores, (bot_debug_score_t *)&_R15->scriptedAgentInfo.threat + v5 + 457, (8 * (9 * v5 + 9) - 72) / 72, CompareBotDebugScoreDecreasing);
    _R15->botDebugData.debugScoresPicked = *nodesPicked;
    _R15->botDebugData.debugScoresSelectCount = v5;
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

