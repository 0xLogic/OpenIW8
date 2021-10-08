/*
==============
Path_EntIsNodeParent
==============
*/

bool __fastcall Path_EntIsNodeParent(int entNum)
{
  return ?Path_EntIsNodeParent@@YA_NH@Z(entNum);
}

/*
==============
Path_RelinquishNode
==============
*/

void __fastcall Path_RelinquishNode(sentient_s *claimer, int timeUntilRelinquished)
{
  ?Path_RelinquishNode@@YAXPEAUsentient_s@@H@Z(claimer, timeUntilRelinquished);
}

/*
==============
Path_GetHighestNodeStance
==============
*/

scr_string_t __fastcall Path_GetHighestNodeStance(const pathnode_t *node)
{
  return ?Path_GetHighestNodeStance@@YA?AW4scr_string_t@@PEBUpathnode_t@@@Z(node);
}

/*
==============
Scr_GetZoneCount
==============
*/

void __fastcall Scr_GetZoneCount(scrContext_t *scrContext)
{
  ?Scr_GetZoneCount@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NodeUnclaimedByOther
==============
*/

bool __fastcall Path_NodeUnclaimedByOther(const pathnode_t *const node, const sentient_s *const claimer)
{
  return ?Path_NodeUnclaimedByOther@@YA_NQEBUpathnode_t@@QEBUsentient_s@@@Z(node, claimer);
}

/*
==============
Path_ResolveParentIndices
==============
*/

void Path_ResolveParentIndices(void)
{
  ?Path_ResolveParentIndices@@YAXXZ();
}

/*
==============
Path_PreShutdown
==============
*/

void Path_PreShutdown(void)
{
  ?Path_PreShutdown@@YAXXZ();
}

/*
==============
Path_NearestNodeForLineOfSight
==============
*/

pathnode_t *__fastcall Path_NearestNodeForLineOfSight(const vec3_t *vOrigin, int traceMask, PathBlockPlanes *blockPlanes)
{
  return ?Path_NearestNodeForLineOfSight@@YAPEAUpathnode_t@@AEBTvec3_t@@HPEAUPathBlockPlanes@@@Z(vOrigin, traceMask, blockPlanes);
}

/*
==============
G_Spawn_SpawnableNodes
==============
*/

void G_Spawn_SpawnableNodes(void)
{
  ?G_Spawn_SpawnableNodes@@YAXXZ();
}

/*
==============
Path_ActorMarkAllConnectedNodesDangerous
==============
*/

void __fastcall Path_ActorMarkAllConnectedNodesDangerous(pathnode_t *node, team_t eTeam)
{
  ?Path_ActorMarkAllConnectedNodesDangerous@@YAXPEAUpathnode_t@@W4team_t@@@Z(node, eTeam);
}

/*
==============
Path_IsNodeIndexExposedSky
==============
*/

bool __fastcall Path_IsNodeIndexExposedSky(int nodeIndex)
{
  return ?Path_IsNodeIndexExposedSky@@YA_NH@Z(nodeIndex);
}

/*
==============
pathnode_t::WorldifyPosFromParent
==============
*/

void __fastcall pathnode_t::WorldifyPosFromParent(pathnode_t *this, vec3_t *pos)
{
  ?WorldifyPosFromParent@pathnode_t@@QEBAXAEATvec3_t@@@Z(this, pos);
}

/*
==============
Path_TrajectoryCanAttemptAccurateJump
==============
*/

int __fastcall Path_TrajectoryCanAttemptAccurateJump(const vec3_t *fromPoint, const vec3_t *fromNormal, const vec3_t *toPoint, const vec3_t *toNormal, float gravity, float speedScale, PathJumpLinkWorkData *workData)
{
  return ?Path_TrajectoryCanAttemptAccurateJump@@YAHAEBTvec3_t@@000MMPEAUPathJumpLinkWorkData@@@Z(fromPoint, fromNormal, toPoint, toNormal, gravity, speedScale, workData);
}

/*
==============
Path_ZoneIsTraversalIsland
==============
*/

int __fastcall Path_ZoneIsTraversalIsland(int zoneIndex)
{
  return ?Path_ZoneIsTraversalIsland@@YAHH@Z(zoneIndex);
}

/*
==============
Path_ResetAllNodeTransientLinkIndex
==============
*/

void Path_ResetAllNodeTransientLinkIndex(void)
{
  ?Path_ResetAllNodeTransientLinkIndex@@YAXXZ();
}

/*
==============
Path_PostStep
==============
*/

void Path_PostStep(void)
{
  ?Path_PostStep@@YAXXZ();
}

/*
==============
Scr_GetZoneNodes
==============
*/

void __fastcall Scr_GetZoneNodes(scrContext_t *scrContext)
{
  ?Scr_GetZoneNodes@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_DespawnNode
==============
*/

void __fastcall Path_DespawnNode(unsigned __int16 nodeIndex)
{
  ?Path_DespawnNode@@YAXG@Z(nodeIndex);
}

/*
==============
ScrCmd_GetValidCoverPeekOuts
==============
*/

void __fastcall ScrCmd_GetValidCoverPeekOuts(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_GetValidCoverPeekOuts@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Scr_AddPathnode
==============
*/

void __fastcall Scr_AddPathnode(const pathnode_t *node)
{
  ?Scr_AddPathnode@@YAXPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_LoadNode
==============
*/

pathnode_t *__fastcall Path_LoadNode(unsigned __int16 index)
{
  return ?Path_LoadNode@@YAPEAUpathnode_t@@G@Z(index);
}

/*
==============
Path_CompareNodesIncreasingDistOnly
==============
*/

bool __fastcall Path_CompareNodesIncreasingDistOnly(const pathsort_s *ps1, const pathsort_s *ps2)
{
  return ?Path_CompareNodesIncreasingDistOnly@@YA_NAEBUpathsort_s@@0@Z(ps1, ps2);
}

/*
==============
Path_ZoneCount
==============
*/

int __fastcall Path_ZoneCount()
{
  return ?Path_ZoneCount@@YAHXZ();
}

/*
==============
ScrCmd_GetHighestNodeStance
==============
*/

void __fastcall ScrCmd_GetHighestNodeStance(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_GetHighestNodeStance@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Path_NearestNodeOriented
==============
*/

pathnode_t *__fastcall Path_NearestNodeOriented(const vec3_t *vOrigin, int traceMask, pathsort_s *nodes, int maxNodes, int typeFlags, float fMaxDist, const float boundsRadius, const vec3_t *normal, int *returnCount)
{
  return ?Path_NearestNodeOriented@@YAPEAUpathnode_t@@AEBTvec3_t@@HPEAUpathsort_s@@HHMM0PEAH@Z(vOrigin, traceMask, nodes, maxNodes, typeFlags, fMaxDist, boundsRadius, normal, returnCount);
}

/*
==============
Scr_GetNodeOwner
==============
*/

void __fastcall Scr_GetNodeOwner(scrContext_t *scrContext)
{
  ?Scr_GetNodeOwner@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_PrecomputedLOSDataSightTest
==============
*/

void __fastcall Scr_PrecomputedLOSDataSightTest(scrContext_t *scrContext)
{
  ?Scr_PrecomputedLOSDataSightTest@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_IsNodeOccupied
==============
*/

void __fastcall Scr_IsNodeOccupied(scrContext_t *scrContext)
{
  ?Scr_IsNodeOccupied@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NodeExposureGetRawArcMin
==============
*/

unsigned int __fastcall Path_NodeExposureGetRawArcMin(const pathnode_t *node, float arcYaw, float coneAngle, int exposeFlags)
{
  return ?Path_NodeExposureGetRawArcMin@@YAIPEBUpathnode_t@@MMH@Z(node, arcYaw, coneAngle, exposeFlags);
}

/*
==============
Scr_GetNodeByIndex
==============
*/

void __fastcall Scr_GetNodeByIndex(scrContext_t *scrContext)
{
  ?Scr_GetNodeByIndex@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_InitLinkCounts
==============
*/

void Path_InitLinkCounts(void)
{
  ?Path_InitLinkCounts@@YAXXZ();
}

/*
==============
Scr_GetNearNodeListForSightToPathNodeCheck
==============
*/

void __fastcall Scr_GetNearNodeListForSightToPathNodeCheck(scrContext_t *scrContext, gentity_s *const pEntity)
{
  ?Scr_GetNearNodeListForSightToPathNodeCheck@@YAXAEAUscrContext_t@@QEAUgentity_s@@@Z(scrContext, pEntity);
}

/*
==============
pathnode_t::LocalizeDirToParent
==============
*/

void __fastcall pathnode_t::LocalizeDirToParent(pathnode_t *this, vec2_t *dir)
{
  ?LocalizeDirToParent@pathnode_t@@QEBAXAEATvec2_t@@@Z(this, dir);
}

/*
==============
Path_DebugNodeColor
==============
*/

const vec4_t *__fastcall Path_DebugNodeColor(const pathnode_t *node)
{
  return ?Path_DebugNodeColor@@YAAEBTvec4_t@@PEBUpathnode_t@@@Z(node);
}

/*
==============
Path_GetNodeOwnerCount
==============
*/

int __fastcall Path_GetNodeOwnerCount(const pathnode_t *node, int nodeTeam)
{
  return ?Path_GetNodeOwnerCount@@YAHPEBUpathnode_t@@H@Z(node, nodeTeam);
}

/*
==============
Scr_NodeToEntitySightTest
==============
*/

void __fastcall Scr_NodeToEntitySightTest(scrContext_t *scrContext)
{
  ?Scr_NodeToEntitySightTest@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NodeCount
==============
*/

int __fastcall Path_NodeCount()
{
  return ?Path_NodeCount@@YAHXZ();
}

/*
==============
Path_NodesInCylinder
==============
*/

int __fastcall Path_NodesInCylinder(const vec3_t *origin, const vec3_t *enemyPos, float maxDist, float maxHeight, pathsort_s *nodes, int maxNodes, int typeFlags, bool allowDontLinkNodes)
{
  return ?Path_NodesInCylinder@@YAHAEBTvec3_t@@PEBT1@MMPEAUpathsort_s@@HH_N@Z(origin, enemyPos, maxDist, maxHeight, nodes, maxNodes, typeFlags, allowDontLinkNodes);
}

/*
==============
Path_Shutdown
==============
*/

void __fastcall Path_Shutdown(bool bDoExtraCleanup)
{
  ?Path_Shutdown@@YAX_N@Z(bDoExtraCleanup);
}

/*
==============
Path_NearestNodeForLineOfSightSystem
==============
*/

pathnode_t *__fastcall Path_NearestNodeForLineOfSightSystem(const NearestNodeInput *pInput, pathsort_s *nodes, int maxNodes, int *returnCount)
{
  return ?Path_NearestNodeForLineOfSightSystem@@YAPEAUpathnode_t@@PEBUNearestNodeInput@@PEAUpathsort_s@@HPEAH@Z(pInput, nodes, maxNodes, returnCount);
}

/*
==============
Scr_GetNodesInRadiusSorted
==============
*/

void __fastcall Scr_GetNodesInRadiusSorted(scrContext_t *scrContext)
{
  ?Scr_GetNodesInRadiusSorted@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_SpawnPathnodeDynamic
==============
*/

void G_SpawnPathnodeDynamic(void)
{
  ?G_SpawnPathnodeDynamic@@YAXXZ();
}

/*
==============
Path_NearestNodeByDistanceOnly
==============
*/

pathnode_t *__fastcall Path_NearestNodeByDistanceOnly(const vec3_t *vOrigin, float fMaxDist)
{
  return ?Path_NearestNodeByDistanceOnly@@YAPEAUpathnode_t@@AEBTvec3_t@@M@Z(vOrigin, fMaxDist);
}

/*
==============
Scr_SpawnCoverNode
==============
*/

void __fastcall Scr_SpawnCoverNode(scrContext_t *scrContext)
{
  ?Scr_SpawnCoverNode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_SaveIndex
==============
*/

unsigned __int16 __fastcall Path_SaveIndex(const pathnode_t *node)
{
  return ?Path_SaveIndex@@YAGPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_IsExposedSkyStrict
==============
*/

bool __fastcall Path_IsExposedSkyStrict(const pathnode_t *node)
{
  return ?Path_IsExposedSkyStrict@@YA_NPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_GetAngles
==============
*/

void __fastcall Path_GetAngles(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  ?Path_GetAngles@@YAXAEAUscrContext_t@@PEAUpathnode_t@@H@Z(scrContext, node, offset);
}

/*
==============
Path_NextNode
==============
*/

pathnode_t *__fastcall Path_NextNode(pathnode_t *prevNode, int typeFlags)
{
  return ?Path_NextNode@@YAPEAUpathnode_t@@PEAU1@H@Z(prevNode, typeFlags);
}

/*
==============
Path_NodesVisibleAreaNoPeek
==============
*/

int __fastcall Path_NodesVisibleAreaNoPeek(const pathnode_t *pNodeArea, const pathnode_t *pNodeEye)
{
  return ?Path_NodesVisibleAreaNoPeek@@YAHPEBUpathnode_t@@0@Z(pNodeArea, pNodeEye);
}

/*
==============
Path_ClaimNode
==============
*/

void __fastcall Path_ClaimNode(pathnode_t *claimNode, sentient_s *claimer)
{
  ?Path_ClaimNode@@YAXPEAUpathnode_t@@PEAUsentient_s@@@Z(claimNode, claimer);
}

/*
==============
Path_AttemptInPlaneJumpLink
==============
*/

int __fastcall Path_AttemptInPlaneJumpLink(pathnode_t *pNodeFrom, pathnode_t *pNodeTo)
{
  return ?Path_AttemptInPlaneJumpLink@@YAHPEAUpathnode_t@@0@Z(pNodeFrom, pNodeTo);
}

/*
==============
Path_IsOrientedNodeUpright
==============
*/

int __fastcall Path_IsOrientedNodeUpright(const pathnode_t *node)
{
  return ?Path_IsOrientedNodeUpright@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_ConvertNodeToIndex
==============
*/

unsigned __int16 __fastcall Path_ConvertNodeToIndex(const pathnode_t *node)
{
  return ?Path_ConvertNodeToIndex@@YAGPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_NodeExposureGetRawArcSum
==============
*/

unsigned int __fastcall Path_NodeExposureGetRawArcSum(const pathnode_t *node, float arcYaw, float coneAngle, int exposeFlags)
{
  return ?Path_NodeExposureGetRawArcSum@@YAIPEBUpathnode_t@@MMH@Z(node, arcYaw, coneAngle, exposeFlags);
}

/*
==============
Scr_GetIsLOSDataFileLoaded
==============
*/

void __fastcall Scr_GetIsLOSDataFileLoaded(scrContext_t *scrContext)
{
  ?Scr_GetIsLOSDataFileLoaded@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_SpawnNode
==============
*/

unsigned __int16 __fastcall Path_SpawnNode(const vec3_t *origin, const vec3_t *angles, int nodeType, unsigned int additionalSpawnflags, const scr_string_t targetname, const scr_string_t parentname)
{
  return ?Path_SpawnNode@@YAGAEBTvec3_t@@0HIW4scr_string_t@@1@Z(origin, angles, nodeType, additionalSpawnflags, targetname, parentname);
}

/*
==============
Path_IsNodeDisconnected
==============
*/

bool __fastcall Path_IsNodeDisconnected(unsigned __int16 nodeIndex)
{
  return ?Path_IsNodeDisconnected@@YA_NG@Z(nodeIndex);
}

/*
==============
Path_Init
==============
*/

void __fastcall Path_Init(int restart, bool enforceDataExists)
{
  ?Path_Init@@YAXH_N@Z(restart, enforceDataExists);
}

/*
==============
Scr_GetZoneNearest
==============
*/

void __fastcall Scr_GetZoneNearest(scrContext_t *scrContext)
{
  ?Scr_GetZoneNearest@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NodeSafeFrom
==============
*/

bool __fastcall Path_NodeSafeFrom(const pathnode_t *pNode, const tacpoint_t *pPoint)
{
  return ?Path_NodeSafeFrom@@YA_NPEBUpathnode_t@@PEBUtacpoint_t@@@Z(pNode, pPoint);
}

/*
==============
Path_NearestNodeExtended
==============
*/

pathnode_t *__fastcall Path_NearestNodeExtended(const NearestNodeInput *pInput, pathsort_s *nodes, int maxNodes, int *returnCount, bool allowDontLinkNodes)
{
  return ?Path_NearestNodeExtended@@YAPEAUpathnode_t@@PEBUNearestNodeInput@@PEAUpathsort_s@@HPEAH_N@Z(pInput, nodes, maxNodes, returnCount, allowDontLinkNodes);
}

/*
==============
Path_ForceClaimNode
==============
*/

void __fastcall Path_ForceClaimNode(pathnode_t *node, sentient_s *claimer)
{
  ?Path_ForceClaimNode@@YAXPEAUpathnode_t@@PEAUsentient_s@@@Z(node, claimer);
}

/*
==============
Scr_CacheSpawnPathNodesInCode
==============
*/

void __fastcall Scr_CacheSpawnPathNodesInCode(scrContext_t *scrContext)
{
  ?Scr_CacheSpawnPathNodesInCode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_PathSightTest
==============
*/

void __fastcall Scr_PathSightTest(scrContext_t *scrContext)
{
  ?Scr_PathSightTest@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetZoneNodeForIndex
==============
*/

void __fastcall Scr_GetZoneNodeForIndex(scrContext_t *scrContext)
{
  ?Scr_GetZoneNodeForIndex@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_GetNodeFromEntref
==============
*/

pathnode_t *__fastcall Path_GetNodeFromEntref(scrContext_t *scrContext, scr_entref_t entref)
{
  return ?Path_GetNodeFromEntref@@YAPEAUpathnode_t@@AEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Path_NodesInCylinder
==============
*/

int __fastcall Path_NodesInCylinder(const vec3_t *origin, const vec3_t *enemyPos, float maxDist, float maxHeight, pathsort_s *nodes, int maxNodes, int typeFlags)
{
  return ?Path_NodesInCylinder@@YAHAEBTvec3_t@@PEBT1@MMPEAUpathsort_s@@HH@Z(origin, enemyPos, maxDist, maxHeight, nodes, maxNodes, typeFlags);
}

/*
==============
Path_NodeValid
==============
*/

bool __fastcall Path_NodeValid(unsigned __int16 iNode)
{
  return ?Path_NodeValid@@YA_NG@Z(iNode);
}

/*
==============
Scr_GetPathnode
==============
*/

pathnode_t *__fastcall Scr_GetPathnode(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetPathnode@@YAPEAUpathnode_t@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_SetTurretNode
==============
*/

void __fastcall Scr_SetTurretNode(scrContext_t *scrContext)
{
  ?Scr_SetTurretNode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_SetCoverMultiNodeType
==============
*/

void __fastcall ScrCmd_SetCoverMultiNodeType(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_SetCoverMultiNodeType@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Path_DoesNodeAllowStance
==============
*/

bool __fastcall Path_DoesNodeAllowStance(const pathnode_t *node, const scr_string_t stance)
{
  return ?Path_DoesNodeAllowStance@@YA_NPEBUpathnode_t@@W4scr_string_t@@@Z(node, stance);
}

/*
==============
Scr_GetNodeArray
==============
*/

void __fastcall Scr_GetNodeArray(scrContext_t *scrContext)
{
  ?Scr_GetNodeArray@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
PathNodeError
==============
*/

void __fastcall PathNodeError(pathnode_t *node, PathNodeErrorCode error)
{
  ?PathNodeError@@YAXPEAUpathnode_t@@W4PathNodeErrorCode@@@Z(node, error);
}

/*
==============
Path_ConvertZoneIndexToZone
==============
*/

pathnode_t *__fastcall Path_ConvertZoneIndexToZone(int zoneIndex)
{
  return ?Path_ConvertZoneIndexToZone@@YAPEAUpathnode_t@@H@Z(zoneIndex);
}

/*
==============
Path_UpdateGlobalBadPlaceCount
==============
*/

void __fastcall Path_UpdateGlobalBadPlaceCount(const bitarray<224> *teamflags, int flags, int delta)
{
  ?Path_UpdateGlobalBadPlaceCount@@YAXAEBV?$bitarray@$0OA@@@HH@Z(teamflags, flags, delta);
}

/*
==============
Path_GetMaskSolidDisconnectPathMask
==============
*/

unsigned int __fastcall Path_GetMaskSolidDisconnectPathMask()
{
  return ?Path_GetMaskSolidDisconnectPathMask@@YAIXZ();
}

/*
==============
Path_ZoneColor
==============
*/

const vec4_t *__fastcall Path_ZoneColor(int zone)
{
  return ?Path_ZoneColor@@YAAEBTvec4_t@@H@Z(zone);
}

/*
==============
Path_Reset
==============
*/

void Path_Reset(void)
{
  ?Path_Reset@@YAXXZ();
}

/*
==============
Scr_DespawnCoverNode
==============
*/

void __fastcall Scr_DespawnCoverNode(scrContext_t *scrContext)
{
  ?Scr_DespawnCoverNode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_ParentIndexToParentNameUsingMap
==============
*/

void Path_ParentIndexToParentNameUsingMap(void)
{
  ?Path_ParentIndexToParentNameUsingMap@@YAXXZ();
}

/*
==============
G_FreePathnodesScriptInfo
==============
*/

void G_FreePathnodesScriptInfo(void)
{
  ?G_FreePathnodesScriptInfo@@YAXXZ();
}

/*
==============
Scr_NodeExposedToSky
==============
*/

void __fastcall Scr_NodeExposedToSky(scrContext_t *scrContext)
{
  ?Scr_NodeExposedToSky@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_IsNodeLMGMountable
==============
*/

void __fastcall ScrCmd_IsNodeLMGMountable(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_IsNodeLMGMountable@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Path_GetParentName
==============
*/

void __fastcall Path_GetParentName(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  ?Path_GetParentName@@YAXAEAUscrContext_t@@PEAUpathnode_t@@H@Z(scrContext, node, offset);
}

/*
==============
Path_GetPeekOutLine
==============
*/

void __fastcall Path_GetPeekOutLine(const pathnode_t *node, const vec3_t *offset, vec3_t *outStart, vec3_t *outEnd)
{
  ?Path_GetPeekOutLine@@YAXPEBUpathnode_t@@AEBTvec3_t@@AEAT2@2@Z(node, offset, outStart, outEnd);
}

/*
==============
LogNoPathNodesAroundUser
==============
*/

void __fastcall LogNoPathNodesAroundUser(gentity_s *pEntity, float radiusDistance)
{
  ?LogNoPathNodesAroundUser@@YAXPEAUgentity_s@@M@Z(pEntity, radiusDistance);
}

/*
==============
TurretNode_GetAngles
==============
*/

void __fastcall TurretNode_GetAngles(const pathnode_t *node, float *angleMin, float *angleMax)
{
  ?TurretNode_GetAngles@@YAXPEBUpathnode_t@@PEAM1@Z(node, angleMin, angleMax);
}

/*
==============
Path_NodeExposureGetRawMax
==============
*/

unsigned int __fastcall Path_NodeExposureGetRawMax(const pathnode_t *node, float yaw, int exposeFlags)
{
  return ?Path_NodeExposureGetRawMax@@YAIPEBUpathnode_t@@MH@Z(node, yaw, exposeFlags);
}

/*
==============
Path_NodeZoneFromIndex
==============
*/

int __fastcall Path_NodeZoneFromIndex(const int nodeIndex)
{
  return ?Path_NodeZoneFromIndex@@YAHH@Z(nodeIndex);
}

/*
==============
Path_NodeExposedToPoint_Fast
==============
*/

int __fastcall Path_NodeExposedToPoint_Fast(const pathnode_t *node, const vec3_t *nodeWorldOrigin, const vec3_t *point, const int exposeFlags)
{
  return ?Path_NodeExposedToPoint_Fast@@YAHPEBUpathnode_t@@AEBTvec3_t@@1H@Z(node, nodeWorldOrigin, point, exposeFlags);
}

/*
==============
Path_IsNodeIndex
==============
*/

int __fastcall Path_IsNodeIndex(const pathnode_t *node, unsigned __int16 nodeIndexToCheck)
{
  return ?Path_IsNodeIndex@@YAHPEBUpathnode_t@@G@Z(node, nodeIndexToCheck);
}

/*
==============
Path_PostSpawnInitPaths
==============
*/

void __fastcall Path_PostSpawnInitPaths(bool snapNodesToMesh, bool bSaveLoad)
{
  ?Path_PostSpawnInitPaths@@YAX_N0@Z(snapNodesToMesh, bSaveLoad);
}

/*
==============
Path_GetOrigin
==============
*/

void __fastcall Path_GetOrigin(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  ?Path_GetOrigin@@YAXAEAUscrContext_t@@PEAUpathnode_t@@H@Z(scrContext, node, offset);
}

/*
==============
PrintPathNodeError
==============
*/

void __fastcall PrintPathNodeError(const pathnode_t *node)
{
  ?PrintPathNodeError@@YAXPEBUpathnode_t@@@Z(node);
}

/*
==============
pathnode_t::GetParent
==============
*/

gentity_s *__fastcall pathnode_t::GetParent(pathnode_t *this)
{
  return ?GetParent@pathnode_t@@QEBAPEAUgentity_s@@XZ(this);
}

/*
==============
Path_IsNodeIndexExposedSkyBase
==============
*/

bool __fastcall Path_IsNodeIndexExposedSkyBase(int nodeIndex, int bufferBit)
{
  return ?Path_IsNodeIndexExposedSkyBase@@YA_NHH@Z(nodeIndex, bufferBit);
}

/*
==============
ScrCmd_IsCoverMultiNode
==============
*/

void __fastcall ScrCmd_IsCoverMultiNode(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_IsCoverMultiNode@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Scr_GetLinkedNodes
==============
*/

void __fastcall Scr_GetLinkedNodes(scrContext_t *scrContext)
{
  ?Scr_GetLinkedNodes@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NodeExposedToPoint
==============
*/

int __fastcall Path_NodeExposedToPoint(const pathnode_t *node, const vec3_t *point, int exposeFlags)
{
  return ?Path_NodeExposedToPoint@@YAHPEBUpathnode_t@@AEBTvec3_t@@H@Z(node, point, exposeFlags);
}

/*
==============
Scr_GetNodesInTrigger
==============
*/

void __fastcall Scr_GetNodesInTrigger(scrContext_t *scrContext)
{
  ?Scr_GetNodesInTrigger@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_DoesNodeAllowStance
==============
*/

void __fastcall ScrCmd_DoesNodeAllowStance(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_DoesNodeAllowStance@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Path_IsNodeFacingToward
==============
*/

bool __fastcall Path_IsNodeFacingToward(const pathnode_t *node, const vec3_t *origin, float dotLimit)
{
  return ?Path_IsNodeFacingToward@@YA_NPEBUpathnode_t@@AEBTvec3_t@@M@Z(node, origin, dotLimit);
}

/*
==============
Path_GetNodeOwner
==============
*/

sentient_s *__fastcall Path_GetNodeOwner(const pathnode_t *node, int ownerIndex, int nodeTeam)
{
  return ?Path_GetNodeOwner@@YAPEAUsentient_s@@PEBUpathnode_t@@HH@Z(node, ownerIndex, nodeTeam);
}

/*
==============
Path_ConvertZoneToZoneIndex
==============
*/

int __fastcall Path_ConvertZoneToZoneIndex(const pathnode_t *zoneNode)
{
  return ?Path_ConvertZoneToZoneIndex@@YAHPEBUpathnode_t@@@Z(zoneNode);
}

/*
==============
Scr_GetNodesInRadius
==============
*/

void __fastcall Scr_GetNodesInRadius(scrContext_t *scrContext)
{
  ?Scr_GetNodesInRadius@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NearestNode
==============
*/

pathnode_t *__fastcall Path_NearestNode(const vec3_t *vOrigin, int traceMask, PathBlockPlanes *blockPlanes)
{
  return ?Path_NearestNode@@YAPEAUpathnode_t@@AEBTvec3_t@@HPEAUPathBlockPlanes@@@Z(vOrigin, traceMask, blockPlanes);
}

/*
==============
Path_CompareNodesIncreasing
==============
*/

bool __fastcall Path_CompareNodesIncreasing(const pathsort_s *ps1, const pathsort_s *ps2)
{
  return ?Path_CompareNodesIncreasing@@YA_NAEBUpathsort_s@@0@Z(ps1, ps2);
}

/*
==============
Scr_GetNodeIndex
==============
*/

void __fastcall Scr_GetNodeIndex(scrContext_t *scrContext)
{
  ?Scr_GetNodeIndex@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_GetType
==============
*/

void __fastcall Path_GetType(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  ?Path_GetType@@YAXAEAUscrContext_t@@PEAUpathnode_t@@H@Z(scrContext, node, offset);
}

/*
==============
Path_IsDynamicBlockingEntity
==============
*/

int __fastcall Path_IsDynamicBlockingEntity(const gentity_s *ent)
{
  return ?Path_IsDynamicBlockingEntity@@YAHPEBUgentity_s@@@Z(ent);
}

/*
==============
Path_GetActorBounds
==============
*/

const Bounds *__fastcall Path_GetActorBounds(pathnode_t *pNode)
{
  return ?Path_GetActorBounds@@YAPEBUBounds@@PEAUpathnode_t@@@Z(pNode);
}

/*
==============
Path_CanClaimNode
==============
*/

bool __fastcall Path_CanClaimNode(const pathnode_t *const node, const sentient_s *const claimer)
{
  return ?Path_CanClaimNode@@YA_NQEBUpathnode_t@@QEBUsentient_s@@@Z(node, claimer);
}

/*
==============
Path_AttemptAccurateTrajectoryJumpLink
==============
*/

int __fastcall Path_AttemptAccurateTrajectoryJumpLink(pathnode_t *pNodeFrom, pathnode_t *pNodeTo, PathJumpLinkWorkData *workData)
{
  return ?Path_AttemptAccurateTrajectoryJumpLink@@YAHPEAUpathnode_t@@0PEAUPathJumpLinkWorkData@@@Z(pNodeFrom, pNodeTo, workData);
}

/*
==============
Path_RelinquishNodeNow
==============
*/

void __fastcall Path_RelinquishNodeNow(sentient_s *claimer)
{
  ?Path_RelinquishNodeNow@@YAXPEAUsentient_s@@@Z(claimer);
}

/*
==============
Path_NonNegativeFloat
==============
*/

void __fastcall Path_NonNegativeFloat(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  ?Path_NonNegativeFloat@@YAXAEAUscrContext_t@@PEAUpathnode_t@@H@Z(scrContext, node, offset);
}

/*
==============
Path_ConnectPathsForEntity
==============
*/

void __fastcall Path_ConnectPathsForEntity(gentity_s *ent)
{
  ?Path_ConnectPathsForEntity@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
pathnode_t::SetWorldAngles
==============
*/

void __fastcall pathnode_t::SetWorldAngles(pathnode_t *this, const vec3_t *worldAngles)
{
  ?SetWorldAngles@pathnode_t@@QEAAXAEBTvec3_t@@@Z(this, worldAngles);
}

/*
==============
pathnode_t::LocalizePosToParent
==============
*/

void __fastcall pathnode_t::LocalizePosToParent(pathnode_t *this, vec3_t *pos)
{
  ?LocalizePosToParent@pathnode_t@@QEBAXAEATvec3_t@@@Z(this, pos);
}

/*
==============
Path_ActorIsDangerousNode
==============
*/

int __fastcall Path_ActorIsDangerousNode(const pathnode_t *node, team_t eTeam)
{
  return ?Path_ActorIsDangerousNode@@YAHPEBUpathnode_t@@W4team_t@@@Z(node, eTeam);
}

/*
==============
Path_ZoneNodeValid
==============
*/

bool __fastcall Path_ZoneNodeValid(unsigned __int16 iNode)
{
  return ?Path_ZoneNodeValid@@YA_NG@Z(iNode);
}

/*
==============
Path_GetDebugStringScale
==============
*/

double __fastcall Path_GetDebugStringScale(const vec3_t *cameraPos, const vec3_t *origin)
{
  double result; 

  *(float *)&result = ?Path_GetDebugStringScale@@YAMAEBTvec3_t@@0@Z(cameraPos, origin);
  return result;
}

/*
==============
GScr_AddFieldsForPathnode
==============
*/

void __fastcall GScr_AddFieldsForPathnode(scrContext_t *scrContext)
{
  ?GScr_AddFieldsForPathnode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_ConvertIndexToNode
==============
*/

pathnode_t *__fastcall Path_ConvertIndexToNode(unsigned __int16 index)
{
  return ?Path_ConvertIndexToNode@@YAPEAUpathnode_t@@G@Z(index);
}

/*
==============
Path_DrawDebug
==============
*/

void Path_DrawDebug(void)
{
  ?Path_DrawDebug@@YAXXZ();
}

/*
==============
Scr_NodesVisible
==============
*/

void __fastcall Scr_NodesVisible(scrContext_t *scrContext)
{
  ?Scr_NodesVisible@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NodeExposureGetRangeMax
==============
*/

double __fastcall Path_NodeExposureGetRangeMax(const pathnode_t *node, float yaw, int exposeFlags)
{
  double result; 

  *(float *)&result = ?Path_NodeExposureGetRangeMax@@YAMPEBUpathnode_t@@MH@Z(node, yaw, exposeFlags);
  return result;
}

/*
==============
Path_FirstNode
==============
*/

pathnode_t *__fastcall Path_FirstNode(int typeFlags)
{
  return ?Path_FirstNode@@YAPEAUpathnode_t@@H@Z(typeFlags);
}

/*
==============
Path_RelinquishNodeSoon
==============
*/

void __fastcall Path_RelinquishNodeSoon(sentient_s *claimer)
{
  ?Path_RelinquishNodeSoon@@YAXPEAUsentient_s@@@Z(claimer);
}

/*
==============
Path_CallFunctionForNodes
==============
*/

void __fastcall Path_CallFunctionForNodes(void (__fastcall *function)(pathnode_t *, void *), void *data)
{
  ?Path_CallFunctionForNodes@@YAXP6AXPEAUpathnode_t@@PEAX@Z1@Z(function, data);
}

/*
==============
Path_SentientNearNode
==============
*/

int __fastcall Path_SentientNearNode(const sentient_s *sentient, const pathnode_t *node)
{
  return ?Path_SentientNearNode@@YAHPEBUsentient_s@@PEBUpathnode_t@@@Z(sentient, node);
}

/*
==============
Path_IsExposedSky
==============
*/

bool __fastcall Path_IsExposedSky(const pathnode_t *node)
{
  return ?Path_IsExposedSky@@YA_NPEBUpathnode_t@@@Z(node);
}

/*
==============
Scr_GetZonePath
==============
*/

void __fastcall Scr_GetZonePath(scrContext_t *scrContext)
{
  ?Scr_GetZonePath@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
WriteSpawnedPathNodes
==============
*/

void __fastcall WriteSpawnedPathNodes(MemoryFile *memFile)
{
  ?WriteSpawnedPathNodes@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Path_NodeExposureGeneral
==============
*/

unsigned int __fastcall Path_NodeExposureGeneral(const pathnode_t *node, int exposeFlags)
{
  return ?Path_NodeExposureGeneral@@YAIPEBUpathnode_t@@H@Z(node, exposeFlags);
}

/*
==============
Path_MarkNodeInvalid
==============
*/

void __fastcall Path_MarkNodeInvalid(pathnode_t *node, team_t eTeam, int invalidTime)
{
  ?Path_MarkNodeInvalid@@YAXPEAUpathnode_t@@W4team_t@@H@Z(node, eTeam, invalidTime);
}

/*
==============
ScrCmd_ReEvaluateMultiNode
==============
*/

void __fastcall ScrCmd_ReEvaluateMultiNode(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_ReEvaluateMultiNode@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
ScrCmd_GetNodeOffset
==============
*/

void __fastcall ScrCmd_GetNodeOffset(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_GetNodeOffset@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Scr_GetNode
==============
*/

void __fastcall Scr_GetNode(scrContext_t *scrContext)
{
  ?Scr_GetNode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NodesInRadius
==============
*/

int __fastcall Path_NodesInRadius(const vec3_t *origin, float maxDist, pathsort_s *nodes, int maxNodes, int typeFlags, bool allowDontLinkNodes)
{
  return ?Path_NodesInRadius@@YAHAEBTvec3_t@@MPEAUpathsort_s@@HH_N@Z(origin, maxDist, nodes, maxNodes, typeFlags, allowDontLinkNodes);
}

/*
==============
Path_NodeExposureGetRangeArcSum
==============
*/

double __fastcall Path_NodeExposureGetRangeArcSum(const pathnode_t *node, float arcYaw, float coneAngle, int exposeFlags)
{
  double result; 

  *(float *)&result = ?Path_NodeExposureGetRangeArcSum@@YAMPEBUpathnode_t@@MMH@Z(node, arcYaw, coneAngle, exposeFlags);
  return result;
}

/*
==============
ReadSpawnedPathNodes
==============
*/

void __fastcall ReadSpawnedPathNodes(SaveGame *save)
{
  ?ReadSpawnedPathNodes@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
Path_NodeExposureGetRangeArcMax
==============
*/

double __fastcall Path_NodeExposureGetRangeArcMax(const pathnode_t *node, float arcYaw, float coneAngle, int exposeFlags)
{
  double result; 

  *(float *)&result = ?Path_NodeExposureGetRangeArcMax@@YAMPEBUpathnode_t@@MMH@Z(node, arcYaw, coneAngle, exposeFlags);
  return result;
}

/*
==============
Path_ParentIndexToParentName
==============
*/

void Path_ParentIndexToParentName(void)
{
  ?Path_ParentIndexToParentName@@YAXXZ();
}

/*
==============
Path_UsePathExtraData
==============
*/

bool __fastcall Path_UsePathExtraData()
{
  return ?Path_UsePathExtraData@@YA_NXZ();
}

/*
==============
GScr_SetDynamicPathnodeField
==============
*/

void __fastcall GScr_SetDynamicPathnodeField(scrContext_t *scrContext, pathnode_t *node, unsigned int index)
{
  ?GScr_SetDynamicPathnodeField@@YAXAEAUscrContext_t@@PEAUpathnode_t@@I@Z(scrContext, node, index);
}

/*
==============
Path_DrawDebugNodeBox
==============
*/

void __fastcall Path_DrawDebugNodeBox(const pathnode_t *node)
{
  ?Path_DrawDebugNodeBox@@YAXPEBUpathnode_t@@@Z(node);
}

/*
==============
Scr_GetAllNodes
==============
*/

void __fastcall Scr_GetAllNodes(scrContext_t *scrContext)
{
  ?Scr_GetAllNodes@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_NavTests
==============
*/

void Path_NavTests(void)
{
  ?Path_NavTests@@YAXXZ();
}

/*
==============
Scr_SetPathnodeField
==============
*/

void __fastcall Scr_SetPathnodeField(scrContext_t *scrContext, int entnum, int offset)
{
  ?Scr_SetPathnodeField@@YAXAEAUscrContext_t@@HH@Z(scrContext, entnum, offset);
}

/*
==============
Path_ClearAllNodeTransientData
==============
*/

void Path_ClearAllNodeTransientData(void)
{
  ?Path_ClearAllNodeTransientData@@YAXXZ();
}

/*
==============
Path_NodeExposureGetTraffic
==============
*/

unsigned int __fastcall Path_NodeExposureGetTraffic(const pathnode_t *node)
{
  return ?Path_NodeExposureGetTraffic@@YAIPEBUpathnode_t@@@Z(node);
}

/*
==============
Scr_FindEntrances
==============
*/

void __fastcall Scr_FindEntrances(scrContext_t *scrContext)
{
  ?Scr_FindEntrances@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GetPathNodeListForSightToPathNodeCheck
==============
*/

void __fastcall GetPathNodeListForSightToPathNodeCheck(const vec3_t *position, const float maxRadius, unsigned __int16 *pathNodeIndexListOut, unsigned __int64 maxPathNodeListItems, unsigned int *pathNodeListOutCount)
{
  ?GetPathNodeListForSightToPathNodeCheck@@YAXAEBTvec3_t@@MPEAG_KPEAI@Z(position, maxRadius, pathNodeIndexListOut, maxPathNodeListItems, pathNodeListOutCount);
}

/*
==============
Scr_GetZoneNodesByDist
==============
*/

void __fastcall Scr_GetZoneNodesByDist(scrContext_t *scrContext)
{
  ?Scr_GetZoneNodesByDist@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_GetValidCoverMultiNodeTypes
==============
*/

void __fastcall ScrCmd_GetValidCoverMultiNodeTypes(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_GetValidCoverMultiNodeTypes@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Path_NodesVisible
==============
*/

int __fastcall Path_NodesVisible(const pathnode_t *node0, const pathnode_t *node1)
{
  return ?Path_NodesVisible@@YAHPEBUpathnode_t@@0@Z(node0, node1);
}

/*
==============
Path_ActorMarkNodeDangerous
==============
*/

void __fastcall Path_ActorMarkNodeDangerous(pathnode_t *node, team_t eTeam)
{
  ?Path_ActorMarkNodeDangerous@@YAXPEAUpathnode_t@@W4team_t@@@Z(node, eTeam);
}

/*
==============
Path_FixedNodeCount
==============
*/

int __fastcall Path_FixedNodeCount()
{
  return ?Path_FixedNodeCount@@YAHXZ();
}

/*
==============
Scr_GetRandomNodeDestination
==============
*/

void __fastcall Scr_GetRandomNodeDestination(scrContext_t *scrContext)
{
  ?Scr_GetRandomNodeDestination@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_PreStep
==============
*/

void Path_PreStep(void)
{
  ?Path_PreStep@@YAXXZ();
}

/*
==============
Path_UpdatePerFrameVersionWarning
==============
*/

void Path_UpdatePerFrameVersionWarning(void)
{
  ?Path_UpdatePerFrameVersionWarning@@YAXXZ();
}

/*
==============
pathnode_t::GetAngle
==============
*/

double __fastcall pathnode_t::GetAngle(pathnode_t *this)
{
  double result; 

  *(float *)&result = ?GetAngle@pathnode_t@@QEBAMXZ(this);
  return result;
}

/*
==============
Path_NodeUnclaimedByNodeTeam
==============
*/

bool __fastcall Path_NodeUnclaimedByNodeTeam(const pathnode_t *const node, const int nodeTeam)
{
  return ?Path_NodeUnclaimedByNodeTeam@@YA_NQEBUpathnode_t@@H@Z(node, nodeTeam);
}

/*
==============
Path_IsNodeIndexExposedSkyStrict
==============
*/

bool __fastcall Path_IsNodeIndexExposedSkyStrict(int nodeIndex)
{
  return ?Path_IsNodeIndexExposedSkyStrict@@YA_NH@Z(nodeIndex);
}

/*
==============
Path_IsNodeTraversalOrOverlapsTraversal
==============
*/

int __fastcall Path_IsNodeTraversalOrOverlapsTraversal(const pathnode_t *node)
{
  return ?Path_IsNodeTraversalOrOverlapsTraversal@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_DisconnectPathsForEntity
==============
*/

void __fastcall Path_DisconnectPathsForEntity(gentity_s *ent, bool bNow)
{
  ?Path_DisconnectPathsForEntity@@YAXPEAUgentity_s@@_N@Z(ent, bNow);
}

/*
==============
Scr_GetZoneOrigin
==============
*/

void __fastcall Scr_GetZoneOrigin(scrContext_t *scrContext)
{
  ?Scr_GetZoneOrigin@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_SpawnPathnodeZone
==============
*/

void G_SpawnPathnodeZone(void)
{
  ?G_SpawnPathnodeZone@@YAXXZ();
}

/*
==============
Path_SetNodeTypeError
==============
*/

void __fastcall Path_SetNodeTypeError(pathnode_t *node)
{
  ?Path_SetNodeTypeError@@YAXPEAUpathnode_t@@@Z(node);
}

/*
==============
Path_PreSpawnInitPaths
==============
*/

void Path_PreSpawnInitPaths(void)
{
  ?Path_PreSpawnInitPaths@@YAXXZ();
}

/*
==============
Scr_GetClosestNodeInSight
==============
*/

void __fastcall Scr_GetClosestNodeInSight(scrContext_t *scrContext)
{
  ?Scr_GetClosestNodeInSight@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_AutoDisconnectPaths
==============
*/

void Path_AutoDisconnectPaths(void)
{
  ?Path_AutoDisconnectPaths@@YAXXZ();
}

/*
==============
Path_NodeSafeFrom
==============
*/

bool __fastcall Path_NodeSafeFrom(const pathnode_t *node0, const pathnode_t *node1)
{
  return ?Path_NodeSafeFrom@@YA_NPEBUpathnode_t@@0@Z(node0, node1);
}

/*
==============
Scr_GetPathnodeAllowNull
==============
*/

pathnode_t *__fastcall Scr_GetPathnodeAllowNull(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetPathnodeAllowNull@@YAPEAUpathnode_t@@AEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Path_IsNodeTraversalBegin
==============
*/

int __fastcall Path_IsNodeTraversalBegin(const pathnode_t *node)
{
  return ?Path_IsNodeTraversalBegin@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_NodeExposureGetRawArcMax
==============
*/

unsigned int __fastcall Path_NodeExposureGetRawArcMax(const pathnode_t *node, float arcYaw, float coneAngle, int exposeFlags)
{
  return ?Path_NodeExposureGetRawArcMax@@YAIPEBUpathnode_t@@MMH@Z(node, arcYaw, coneAngle, exposeFlags);
}

/*
==============
G_UpdateTrackExtraNodes
==============
*/

void G_UpdateTrackExtraNodes(void)
{
  ?G_UpdateTrackExtraNodes@@YAXXZ();
}

/*
==============
Path_ZoneGetIndoorPercent
==============
*/

double __fastcall Path_ZoneGetIndoorPercent(int zoneNum)
{
  double result; 

  *(float *)&result = ?Path_ZoneGetIndoorPercent@@YAMH@Z(zoneNum);
  return result;
}

/*
==============
GetNodeExposedOffset
==============
*/

void __fastcall GetNodeExposedOffset(const pathnode_t *inNode, vec3_t *outOffset)
{
  ?GetNodeExposedOffset@@YAXPEBUpathnode_t@@AEATvec3_t@@@Z(inNode, outOffset);
}

/*
==============
Scr_GetPathnodeField
==============
*/

void __fastcall Scr_GetPathnodeField(scrContext_t *scrContext, int entnum, int offset)
{
  ?Scr_GetPathnodeField@@YAXAEAUscrContext_t@@HH@Z(scrContext, entnum, offset);
}

/*
==============
Path_LogStrandedNodes
==============
*/

void Path_LogStrandedNodes(void)
{
  ?Path_LogStrandedNodes@@YAXXZ();
}

/*
==============
pathnode_t::GetPos
==============
*/

void __fastcall pathnode_t::GetPos(pathnode_t *this, vec3_t *pos)
{
  ?GetPos@pathnode_t@@QEBAXAEATvec3_t@@@Z(this, pos);
}

/*
==============
Path_NodesInRadius
==============
*/

int __fastcall Path_NodesInRadius(const vec3_t *origin, float maxDist, pathsort_s *nodes, int maxNodes, int typeFlags)
{
  return ?Path_NodesInRadius@@YAHAEBTvec3_t@@MPEAUpathsort_s@@HH@Z(origin, maxDist, nodes, maxNodes, typeFlags);
}

/*
==============
Scr_UnsetTurretNode
==============
*/

void __fastcall Scr_UnsetTurretNode(scrContext_t *scrContext)
{
  ?Scr_UnsetTurretNode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetNodeCount
==============
*/

void __fastcall Scr_GetNodeCount(scrContext_t *scrContext)
{
  ?Scr_GetNodeCount@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_SpawnZoneNodes
==============
*/

void Path_SpawnZoneNodes(void)
{
  ?Path_SpawnZoneNodes@@YAXXZ();
}

/*
==============
Path_IsDynamicSpawnNode
==============
*/

bool __fastcall Path_IsDynamicSpawnNode(unsigned __int16 nodeIndex)
{
  return ?Path_IsDynamicSpawnNode@@YA_NG@Z(nodeIndex);
}

/*
==============
Path_CheckValidJumpAngles
==============
*/

int __fastcall Path_CheckValidJumpAngles(pathnode_t *pNodeFrom, pathnode_t *pNodeTo)
{
  return ?Path_CheckValidJumpAngles@@YAHPEAUpathnode_t@@0@Z(pNodeFrom, pNodeTo);
}

/*
==============
Path_PrintAllNodeErrors
==============
*/

void Path_PrintAllNodeErrors(void)
{
  ?Path_PrintAllNodeErrors@@YAXXZ();
}

/*
==============
Path_IsNodeTraversal
==============
*/

int __fastcall Path_IsNodeTraversal(const pathnode_t *node)
{
  return ?Path_IsNodeTraversal@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_AllowedStancesForNode
==============
*/

ai_stance_e __fastcall Path_AllowedStancesForNode(const pathnode_t *node)
{
  return ?Path_AllowedStancesForNode@@YA?AW4ai_stance_e@@PEBUpathnode_t@@@Z(node);
}

/*
==============
Path_DrawDebugNode
==============
*/

void __fastcall Path_DrawDebugNode(const vec3_t *cameraPos, const pathnode_t *node)
{
  ?Path_DrawDebugNode@@YAXAEBTvec3_t@@PEBUpathnode_t@@@Z(cameraPos, node);
}

/*
==============
Path_ActorIsReallyDangerousNode
==============
*/

int __fastcall Path_ActorIsReallyDangerousNode(const pathnode_t *node, team_t eTeam)
{
  return ?Path_ActorIsReallyDangerousNode@@YAHPEBUpathnode_t@@W4team_t@@@Z(node, eTeam);
}

/*
==============
Path_InitPaths
==============
*/

void Path_InitPaths(void)
{
  ?Path_InitPaths@@YAXXZ();
}

/*
==============
Path_NodeActorAngleYawOffset
==============
*/

double __fastcall Path_NodeActorAngleYawOffset(const pathnode_t *node)
{
  double result; 

  *(float *)&result = ?Path_NodeActorAngleYawOffset@@YAMPEBUpathnode_t@@@Z(node);
  return result;
}

/*
==============
pathnode_t::GetAngles
==============
*/

void __fastcall pathnode_t::GetAngles(pathnode_t *this, vec3_t *vector)
{
  ?GetAngles@pathnode_t@@QEBAXAEATvec3_t@@@Z(this, vector);
}

/*
==============
G_SpawnCoverNode
==============
*/

unsigned __int16 __fastcall G_SpawnCoverNode(vec3_t *origin, const vec3_t *angles, int nodeType, unsigned int spawnflags, scr_string_t targetname, scr_string_t parentname, bool calledFromScript)
{
  return ?G_SpawnCoverNode@@YAGAEATvec3_t@@AEBT1@HIW4scr_string_t@@2_N@Z(origin, angles, nodeType, spawnflags, targetname, parentname, calledFromScript);
}

/*
==============
Scr_GetNodesOnPath
==============
*/

void __fastcall Scr_GetNodesOnPath(scrContext_t *scrContext)
{
  ?Scr_GetNodesOnPath@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetNodeZone
==============
*/

void __fastcall Scr_GetNodeZone(scrContext_t *scrContext)
{
  ?Scr_GetNodeZone@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Path_DrawDebugNodeBoxWithParams
==============
*/

void __fastcall Path_DrawDebugNodeBoxWithParams(const pathnode_t *node, const vec4_t *color, float width, int duration)
{
  ?Path_DrawDebugNodeBoxWithParams@@YAXPEBUpathnode_t@@AEBTvec4_t@@MH@Z(node, color, width, duration);
}

/*
==============
Path_NodeInOrNearPlayerView
==============
*/

bool __fastcall Path_NodeInOrNearPlayerView(const pathnode_t *node, const vec3_t *viewPos, const vec3_t *viewDir, float viewFovDot)
{
  return ?Path_NodeInOrNearPlayerView@@YA_NPEBUpathnode_t@@AEBTvec3_t@@1M@Z(node, viewPos, viewDir, viewFovDot);
}

/*
==============
Scr_SetNodePriority
==============
*/

void __fastcall Scr_SetNodePriority(scrContext_t *scrContext)
{
  ?Scr_SetNodePriority@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
pathnode_t::SetWorldPos
==============
*/

void __fastcall pathnode_t::SetWorldPos(pathnode_t *this, const vec3_t *worldPos)
{
  ?SetWorldPos@pathnode_t@@QEAAXAEBTvec3_t@@@Z(this, worldPos);
}

/*
==============
Path_IsNodeTraversalEnd
==============
*/

int __fastcall Path_IsNodeTraversalEnd(const pathnode_t *node)
{
  return ?Path_IsNodeTraversalEnd@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
pathnode_t::GetForward
==============
*/

void __fastcall pathnode_t::GetForward(pathnode_t *this, vec2_t *forward)
{
  ?GetForward@pathnode_t@@QEBAXAEATvec2_t@@@Z(this, forward);
}

/*
==============
Path_IsOnlyOwner
==============
*/

int __fastcall Path_IsOnlyOwner(const pathnode_t *node, const sentient_s *owner)
{
  return ?Path_IsOnlyOwner@@YAHPEBUpathnode_t@@PEBUsentient_s@@@Z(node, owner);
}

/*
==============
Path_NodesVisibleNoPeek
==============
*/

int __fastcall Path_NodesVisibleNoPeek(const pathnode_t *node0, const pathnode_t *node1)
{
  return ?Path_NodesVisibleNoPeek@@YAHPEBUpathnode_t@@0@Z(node0, node1);
}

/*
==============
Path_NodeZoneFromNode
==============
*/

int __fastcall Path_NodeZoneFromNode(const pathnode_t *node)
{
  return ?Path_NodeZoneFromNode@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_DrawDebugNoLinks
==============
*/

void __fastcall Path_DrawDebugNoLinks(const pathnode_t *node, const vec4_t *color, int duration)
{
  ?Path_DrawDebugNoLinks@@YAXPEBUpathnode_t@@AEBTvec4_t@@H@Z(node, color, duration);
}

/*
==============
Path_GetType
==============
*/
void Path_GetType(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  unsigned __int16 type; 
  int v5; 
  int v6; 

  type = node->constant.type;
  if ( type == 31 )
    type = node->dynamic.coverMultiType;
  if ( type >= 0x20u )
  {
    v6 = 32;
    v5 = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1959, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( NODE_NUMTYPES )", "type doesn't index NODE_NUMTYPES\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  Scr_AddString(scrContext, nodeStringTable[type]);
}

/*
==============
Path_GetAngles
==============
*/
void Path_GetAngles(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  vec3_t vector; 

  pathnode_t::GetAngles(node, &vector);
  Scr_AddVector(scrContext, vector.v);
}

/*
==============
Path_GetOrigin
==============
*/
void Path_GetOrigin(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  vec3_t pos; 

  pathnode_t::GetPos(node, &pos);
  Scr_AddVector(scrContext, pos.v);
}

/*
==============
Path_GetParentName
==============
*/
void Path_GetParentName(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  scr_string_t ParentNameFromParentIndex; 

  if ( GetParentNameFromParentIndex(node) )
  {
    ParentNameFromParentIndex = GetParentNameFromParentIndex(node);
    Scr_AddConstString(scrContext, ParentNameFromParentIndex);
  }
}

/*
==============
FindSimplePath
==============
*/
int FindSimplePath(path_t *path, const vec3_t *start, const vec3_t *end, pathnode_t *startNode, pathnode_t *endNode, int traceMask)
{
  bool v11; 
  team_t v12; 
  pathnode_t *pNodeFrom; 
  pathnode_t *pNodeTo; 
  PathFindInput pathFindInput; 

  pathFindInput.pNodeFrom = NULL;
  pathFindInput.pNodeTo = NULL;
  *(_QWORD *)&pathFindInput.bAllowJumpLinks = 0i64;
  memset_0(&pathFindInput.avoidExpStances, 0, 0xE0ui64);
  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3396, ASSERT_TYPE_ASSERT, "( path )", (const char *)&queryFormat, "path") )
    __debugbreak();
  pathFindInput.pPath = path;
  v11 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v12 = TEAM_FOLLOWER;
  if ( v11 )
    v12 = TEAM_FOUR;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  pathFindInput.pPath->eTeam = v12;
  pathFindInput.pPath->iTraceMask = traceMask;
  pNodeFrom = pathFindInput.pNodeFrom;
  pathFindInput.useChokePoints = 0;
  if ( startNode )
    pNodeFrom = startNode;
  path->fLookaheadAmount = 0.0;
  pathFindInput.pNodeFrom = pNodeFrom;
  pNodeTo = pathFindInput.pNodeTo;
  __asm { vmovss  [rsp+188h+pathFindInput.badplacePercent], xmm0 }
  if ( endNode )
    pNodeTo = endNode;
  pathFindInput.vStartPos = start;
  pathFindInput.pNodeTo = pNodeTo;
  pathFindInput.vGoalPos = end;
  pathFindInput.bAllowNegotiationLinks = 1;
  pathFindInput.searchEntNum = 2047;
  return Path_FindPath(&pathFindInput);
}

/*
==============
GScr_AddFieldsForPathnode
==============
*/
void GScr_AddFieldsForPathnode(scrContext_t *scrContext)
{
  node_field_t *i; 
  __int64 v3; 
  unsigned int v4; 

  for ( i = fields_2; i->name; ++i )
  {
    v3 = (char *)&i->canonicalString - (char *)&fields_2[0].canonicalString;
    v4 = (unsigned __int16)(v3 / 40);
    if ( v3 / 40 != (unsigned __int16)(v3 / 40) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2976, ASSERT_TYPE_ASSERT, "((f - fields) == (unsigned short)( f - fields ))", (const char *)&queryFormat, "(f - fields) == (unsigned short)( f - fields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_PATHNODE, *i->name, i->canonicalString, v4);
  }
}

/*
==============
GScr_SetDynamicPathnodeField
==============
*/
void GScr_SetDynamicPathnodeField(scrContext_t *scrContext, pathnode_t *node, unsigned int index)
{
  unsigned __int16 v5; 

  v5 = Path_ConvertNodeToIndex(node);
  Scr_SetDynamicEntityField(scrContext, LOCAL_CLIENT_0, v5, ENTITY_CLASS_PATHNODE, index);
}

/*
==============
G_FreePathnodesScriptInfo
==============
*/
void G_FreePathnodesScriptInfo(void)
{
  __int64 v0; 
  int v1; 
  __int64 v2; 
  __int64 i; 
  int v4; 
  const char *GameType; 
  int v6; 
  pathnode_t *v7; 
  bool v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  const char *v14; 
  int v15; 
  int v16; 
  const char *v17; 
  int v18; 
  unsigned __int16 number; 
  unsigned __int16 v20; 
  gentity_s *ent; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int entnum; 
  scrContext_t *scrContext; 

  Path_ShutdownBadPlaces();
  v0 = 0i64;
  scrContext = ScriptContext_Server();
  for ( entnum = 0; (unsigned int)v0 < g_path.actualNodeCount; entnum = v0 )
  {
    v1 = 0;
    v2 = v0;
    for ( i = 0i64; ; ++i )
    {
      if ( !&pathData.nodes[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        GameType = SV_GameMP_GetGameType();
        v6 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
        if ( !v6 )
        {
          v6 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
          if ( !v6 )
            v6 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
        }
        v4 = (v6 != 0) + 1;
      }
      else
      {
        v4 = 1;
      }
      if ( v1 >= v4 )
        break;
      v7 = &pathData.nodes[v2];
      if ( BG_BotSystemEnabled() )
      {
        v9 = SV_GameMP_GetGameType();
        v10 = *(unsigned __int8 *)v9 - (unsigned __int8)aBr_2[0];
        if ( !v10 )
        {
          v10 = *((unsigned __int8 *)v9 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v10 )
            v10 = *((unsigned __int8 *)v9 + 2) - (unsigned __int8)aBr_2[2];
        }
        v8 = v10 == 0;
      }
      else
      {
        v8 = 1;
      }
      v11 = i;
      v12 = v1;
      if ( v8 )
        v11 = 0i64;
      if ( v8 )
        v12 = 0;
      if ( !v7 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v14 = SV_GameMP_GetGameType();
        v15 = *(unsigned __int8 *)v14 - (unsigned __int8)aBr_2[0];
        if ( !v15 )
        {
          v15 = *((unsigned __int8 *)v14 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v15 )
            v15 = *((unsigned __int8 *)v14 + 2) - (unsigned __int8)aBr_2[2];
        }
        v13 = (v15 != 0) + 1;
      }
      else
      {
        v13 = 1;
      }
      if ( v12 >= v13 )
      {
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          v17 = SV_GameMP_GetGameType();
          v18 = *(unsigned __int8 *)v17 - (unsigned __int8)aBr_2[0];
          if ( !v18 )
          {
            v18 = *((unsigned __int8 *)v17 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v18 )
              v18 = *((unsigned __int8 *)v17 + 2) - (unsigned __int8)aBr_2[2];
          }
          v16 = (v18 != 0) + 1;
        }
        else
        {
          v16 = 1;
        }
        LODWORD(v25) = v16;
        LODWORD(v24) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      number = v7->dynamic.pOwners[v11].number;
      if ( number )
      {
        if ( !level.sentients[number - 1].ent )
        {
          LODWORD(v25) = number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 136, ASSERT_TYPE_ASSERT, "( ( !number || level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( !number || level.sentients[number - 1].ent )", v25) )
            __debugbreak();
        }
        v20 = v7->dynamic.pOwners[v11].number;
        if ( v20 )
        {
          ent = level.sentients[v20 - 1].ent;
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v22 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
          v23 = (v22 >> 63) + v22;
          if ( (unsigned int)v23 >= 0x800 )
          {
            LODWORD(v25) = 2048;
            LODWORD(v24) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          v23 = (__int16)v23;
          if ( (unsigned int)(__int16)v23 >= 0x800 )
          {
            LODWORD(v25) = 2048;
            LODWORD(v24) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v23].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v23] )
          {
            LODWORD(v25) = v7->dynamic.pOwners[v11].number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 137, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v25) )
              __debugbreak();
          }
          if ( v7->dynamic.pOwners[v11].number )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5291, ASSERT_TYPE_ASSERT, "(!Path_NodeOwnerSentHandleConst( &pathData.nodes[nodeIndex], nodeTeam )->isDefined())", (const char *)&queryFormat, "!Path_NodeOwnerSentHandleConst( &pathData.nodes[nodeIndex], nodeTeam )->isDefined()") )
              __debugbreak();
          }
        }
      }
      ++v1;
    }
    Scr_FreeEntityNum(scrContext, entnum, ENTITY_CLASS_PATHNODE);
    v0 = entnum + 1;
  }
}

/*
==============
G_ParsePathnodeScriptFields
==============
*/
void G_ParsePathnodeScriptFields(pathnode_t *node)
{
  int v4; 
  scr_string_t *p_targetname; 
  char *(*spawnVars)[2]; 
  const char *v8; 
  const char *v9; 
  unsigned int v10; 
  bool v11; 
  bool v12; 
  scr_string_t String; 
  scr_string_t *name; 
  node_field_t *v19; 
  unsigned int CanonicalString; 
  scrContext_t *v21; 
  unsigned int Field; 
  int v23; 
  unsigned __int16 v25; 
  __int64 v27; 
  VariableType type[8]; 
  int v29; 
  int v30; 
  char v31; 
  vec3_t pos; 

  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2220, ASSERT_TYPE_ASSERT, "(level.spawnVar.spawnVarsValid)", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  v4 = 0;
  if ( level.spawnVar.numSpawnVars > 0 )
  {
    p_targetname = &node->constant.targetname;
    spawnVars = level.spawnVar.spawnVars;
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovss  xmm6, cs:__real@3c23d70b
    }
    while ( 1 )
    {
      v8 = (*spawnVars)[1];
      v9 = (*spawnVars)[0];
      PathNode_UpdateStringField("target", &node->constant.target, (*spawnVars)[0], v8);
      PathNode_UpdateStringField("targetname", p_targetname, v9, v8);
      PathNode_UpdateStringField("script_linkname", &node->constant.script_linkName, v9, v8);
      PathNode_UpdateStringField("script_noteworthy", &node->constant.script_noteworthy, v9, v8);
      PathNode_UpdateStringField("parentname", &node->constant.parent.name, v9, v8);
      if ( node->constant.parent.name )
        pathData.parentIndexResolved = 0;
      if ( ((1 << LOBYTE(node->constant.type)) & 0x62700000) == 0 && !I_stricmp(v9, "origin") && (node->constant.spawnflags & 0x4000) == 0 && !node->constant.parent.index )
      {
        pathnode_t::GetPos(node, &pos);
        v10 = j_sscanf(v8, "%f %f %f", &v29, &v30, &v31);
        v11 = v10 < 3;
        v12 = v10 == 3;
        if ( v10 != 3 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA2C48, 457i64, v8);
        __asm
        {
          vmovss  xmm0, [rsp+98h+var_60]
          vsubss  xmm1, xmm0, dword ptr [rsp+98h+pos]
          vmulss  xmm2, xmm1, xmm1
          vcomiss xmm2, xmm6
        }
        if ( !v11 && !v12 )
          goto LABEL_16;
        __asm
        {
          vmovss  xmm0, [rsp+98h+var_5C]
          vsubss  xmm1, xmm0, dword ptr [rsp+98h+pos+4]
          vmulss  xmm2, xmm1, xmm1
          vcomiss xmm2, xmm6
        }
        if ( !v11 && !v12 )
LABEL_16:
          ++g_path.originErrors;
      }
      String = SL_FindString(v9);
      name = fields_2[0].name;
      v19 = fields_2;
      if ( fields_2[0].name )
      {
        while ( *name != String )
        {
          name = v19[1].name;
          ++v19;
          if ( !name )
            goto LABEL_20;
        }
        goto LABEL_33;
      }
LABEL_20:
      CanonicalString = SL_GetCanonicalString(v9);
      v21 = ScriptContext_Server();
      Field = Scr_FindField(v21, CanonicalString, type);
      if ( Field )
      {
        switch ( type[0] )
        {
          case VAR_STRING:
            Scr_AddString(v21, v8);
            break;
          case VAR_VECTOR:
            Scr_Error(COM_ERR_2468, v21, "G_SetPathnodeScriptVariable: vector is an unsupported script variable type for pathnodes");
            break;
          case VAR_FLOAT:
            *(double *)&_XMM0 = atof(v8);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
            Scr_AddFloat(v21, *(float *)&_XMM1);
            break;
          case VAR_INTEGER:
            v23 = atoi(v8);
            Scr_AddInt(v21, v23);
            break;
          default:
            LODWORD(v27) = (unsigned __int8)type[0];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2086, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_SetPathnodeScriptVariable: bad case %d", v27) )
              __debugbreak();
            goto LABEL_32;
        }
        v25 = Path_ConvertNodeToIndex(node);
        Scr_SetDynamicEntityField(v21, LOCAL_CLIENT_0, v25, ENTITY_CLASS_PATHNODE, Field);
      }
LABEL_32:
      p_targetname = &node->constant.targetname;
LABEL_33:
      ++v4;
      ++spawnVars;
      if ( v4 >= level.spawnVar.numSpawnVars )
      {
        __asm { vmovaps xmm6, [rsp+98h+var_38] }
        return;
      }
    }
  }
}

/*
==============
G_SpawnCoverNode
==============
*/
__int64 G_SpawnCoverNode(vec3_t *origin, const vec3_t *angles, int nodeType, unsigned int spawnflags, scr_string_t targetname, scr_string_t parentname, bool calledFromScript)
{
  char *v18; 
  __int64 result; 
  unsigned __int16 v35; 
  const pathnode_t *v36; 
  const char *v37; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx+8]
    vmovss  xmm3, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vaddss  xmm0, xmm1, cs:__real@41400000
    vmovss  dword ptr [rsp+0F8h+start+8], xmm0
    vsubss  xmm0, xmm1, cs:__real@42100000
  }
  _RBX = origin;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+end+8], xmm0
    vmovss  dword ptr [rsp+0F8h+start], xmm3
    vmovss  dword ptr [rsp+0F8h+start+4], xmm2
    vmovss  dword ptr [rsp+0F8h+end], xmm3
    vmovss  dword ptr [rsp+0F8h+end+4], xmm2
  }
  G_Main_TraceCapsule(&results, &start, &end, &actorBox, 2047, 131089);
  if ( !*(_WORD *)&results.allsolid )
  {
    __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
    if ( ((1 << nodeType) & 0x1E300000) == 0 )
    {
      __asm
      {
        vmovss  xmm6, [rsp+0F8h+results.fraction]
        vcomiss xmm6, cs:__real@3f800000
      }
      if ( calledFromScript )
      {
        v18 = vtos(_RBX);
        __asm
        {
          vmovsd  xmm3, cs:__real@4042000000000000
          vmovq   r9, xmm3
        }
        Com_PrintError(16, "SpawnCoverNode: unable to find anything solid underneath pos %s within %.0f.", v18, _R9);
        result = 0xFFFFi64;
LABEL_5:
        __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
        return result;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0F8h+end]
        vsubss  xmm1, xmm0, dword ptr [rsp+0F8h+start]
        vmovss  xmm0, dword ptr [rsp+0F8h+end+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsp+0F8h+start]
        vsubss  xmm1, xmm0, dword ptr [rsp+0F8h+start+4]
        vmovss  xmm0, dword ptr [rsp+0F8h+end+8]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rsp+0F8h+start+8]
        vmovss  dword ptr [rbx], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsp+0F8h+start+4]
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbx+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsp+0F8h+start+8]
        vmovss  dword ptr [rbx+8], xmm3
      }
    }
    v35 = Path_SpawnNode(_RBX, angles, nodeType, spawnflags, targetname, parentname);
    if ( v35 != 0xFFFF && calledFromScript )
    {
      v36 = Path_ConvertIndexToNode(v35);
      Scr_AddPathnode(v36);
    }
    result = v35;
    goto LABEL_5;
  }
  v37 = vtos(_RBX);
  Com_PrintError(16, "SpawnCoverNode: pos %s is inside a solid.", v37);
  return 0xFFFFi64;
}

/*
==============
G_SpawnPathnodeDynamic
==============
*/
void G_SpawnPathnodeDynamic(void)
{
  const dvar_t *v0; 
  unsigned int actualNodeCount; 
  unsigned __int16 type; 
  unsigned int spawnflags; 
  __int16 v8; 
  __int64 v9; 
  __int64 v10; 
  vec3_t forward; 

  if ( !BG_ActorOrAgentSystemEnabled() )
    goto LABEL_6;
  v0 = DVARBOOL_ai_spawn;
  if ( !DVARBOOL_ai_spawn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_spawn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
LABEL_6:
    actualNodeCount = g_path.actualNodeCount;
    if ( g_path.actualNodeCount < 0xFFFF )
    {
      if ( g_path.actualNodeCount - pathData.zoneCount == pathData.nodeCount - pathData.maxDynamicSpawnedNodeCount )
      {
        ++g_path.extraNodes;
      }
      else
      {
        _RBX = &pathData.nodes[g_path.actualNodeCount++];
        if ( actualNodeCount + 1 > pathData.nodeCount )
        {
          if ( pathData.zoneCount > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2885, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_SpawnPathnodeDynamic(): Additional nodes may not be spawned when using node zones") )
            __debugbreak();
          *(_QWORD *)&_RBX->dynamic.pOwners[0].number = 0i64;
          *(_QWORD *)_RBX->dynamic.iFreeTime = 0i64;
          *(_QWORD *)_RBX->dynamic.iValidTime = 0i64;
          *(_QWORD *)&_RBX->dynamic.iValidTime[2] = 0i64;
          *(_QWORD *)&_RBX->dynamic.bInactive = 0i64;
          *(_QWORD *)&_RBX->dynamic.bots.recentUseProxTimes[1] = 0i64;
          _RBX->dynamic.actors.inPlayerLOSTime = 0;
          *(_QWORD *)&_RBX->transient.iSearchFrame = 0i64;
          _RBX->transient.pNextOpen = NULL;
          _RBX->transient.pPrevOpen = NULL;
          _RBX->transient.pParent = NULL;
          *(_QWORD *)&_RBX->transient.fCost = 0i64;
          *(_QWORD *)&_RBX->transient.nodeCost = 0i64;
        }
        if ( (_RBX->constant.spawnflags & 0x4000) != 0 )
          PrintPathNodeError(_RBX);
        G_ParsePathnodeScriptFields(_RBX);
        type = _RBX->constant.type;
        if ( ((1 << type) & 0x62700000) == 0 )
        {
          __asm { vmovss  xmm0, dword ptr [rbx+2Ch]; yaw }
          YawVectors(*(float *)&_XMM0, &forward, NULL);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+68h+forward]
            vmovss  dword ptr [rbx+30h], xmm0
            vmovss  xmm1, dword ptr [rsp+68h+forward+4]
            vmovss  dword ptr [rbx+34h], xmm1
          }
          type = _RBX->constant.type;
        }
        if ( type >= 0x20u )
        {
          LODWORD(v10) = 32;
          LODWORD(v9) = type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2910, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( NODE_NUMTYPES )", "type doesn't index NODE_NUMTYPES\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        if ( type == 18 )
        {
          _RBX->dynamic.turretEntNumber = -1;
        }
        else if ( type > 0x1Cu )
        {
          if ( type <= 0x1Eu )
          {
            g_path.qbUsingJumpNodes = 1;
          }
          else if ( type == 31 )
          {
            spawnflags = _RBX->constant.spawnflags;
            v8 = 0;
            if ( (_RBX->constant.spawnflags & 0x100000) != 0 )
            {
              _RBX->dynamic.turretEntNumber = 3;
            }
            else if ( (spawnflags & 0x200) != 0 )
            {
              _RBX->dynamic.turretEntNumber = 2;
            }
            else if ( (spawnflags & 0x400) != 0 || (spawnflags & 0x200000) != 0 )
            {
              _RBX->dynamic.turretEntNumber = 7;
            }
            else
            {
              if ( (spawnflags & 0x800) != 0 || (spawnflags & 0x400000) != 0 )
                v8 = 6;
              _RBX->dynamic.turretEntNumber = v8;
            }
          }
        }
      }
    }
    else
    {
      Com_Printf(18, "PATH_MAX_NODES (%i) exceeded.  Nodecount: %d\n", 0xFFFFi64, ++overCount + g_path.actualNodeCount);
    }
  }
}

/*
==============
G_SpawnPathnodeZone
==============
*/
void G_SpawnPathnodeZone(void)
{
  pathnode_t *v0; 

  if ( g_path.actualNodeCount < 0xFFFF )
  {
    v0 = &pathData.nodes[g_path.actualNodeCount++];
    *(_QWORD *)&v0->dynamic.pOwners[0].number = 0i64;
    *(_QWORD *)v0->dynamic.iFreeTime = 0i64;
    *(_QWORD *)v0->dynamic.iValidTime = 0i64;
    *(_QWORD *)&v0->dynamic.iValidTime[2] = 0i64;
    *(_QWORD *)&v0->dynamic.bInactive = 0i64;
    *(_QWORD *)&v0->dynamic.bots.recentUseProxTimes[1] = 0i64;
    v0->dynamic.actors.inPlayerLOSTime = 0;
    *(_QWORD *)&v0->transient.iSearchFrame = 0i64;
    v0->transient.pNextOpen = NULL;
    v0->transient.pPrevOpen = NULL;
    v0->transient.pParent = NULL;
    *(_QWORD *)&v0->transient.fCost = 0i64;
    *(_QWORD *)&v0->transient.nodeCost = 0i64;
    v0->dynamic.turretEntNumber = -1;
    Path_InitLinkCount(v0);
  }
  else
  {
    Com_Printf(18, "PATH_MAX_NODES (%i) exceeded.  Nodecount: %d\n", 0xFFFFi64, g_path.actualNodeCount + 1);
  }
}

/*
==============
G_Spawn_SpawnableNodes
==============
*/
void G_Spawn_SpawnableNodes(void)
{
  memset_0(&pathData.nodes[pathData.fixedNodeCount], 0, 192i64 * pathData.maxDynamicSpawnedNodeCount);
  g_path.actualNodeCount += pathData.maxDynamicSpawnedNodeCount;
}

/*
==============
G_UpdateTrackExtraNodes
==============
*/
void G_UpdateTrackExtraNodes(void)
{
  unsigned int nodeCount; 

  if ( g_path.originErrors )
    Com_PrintError(1, "There are %d path node origins that don't match.  If this number is higher than expected then you may want to recompile the map before using MyMapEnts..\n", g_path.originErrors);
  if ( g_path.extraNodes )
    Com_PrintError(18, "There are %d extra path nodes in the entity string.  Ignoring extra path nodes, and some of the key value pairs are likely mapped to the wrong nodes.\n", g_path.extraNodes);
  nodeCount = pathData.nodeCount;
  if ( g_path.actualNodeCount < pathData.nodeCount )
  {
    Com_PrintError(18, "There %d less path nodes in the entity string than in the compiled map.  Some of the key value pairs are likely mapped to the wrong nodes.\n", pathData.nodeCount - g_path.actualNodeCount);
    nodeCount = pathData.nodeCount;
  }
  g_path.actualNodeCount = nodeCount;
}

/*
==============
pathnode_t::GetAngle
==============
*/
float pathnode_t::GetAngle(pathnode_t *this)
{
  vec3_t vector; 

  pathnode_t::GetAngles(this, &vector);
  __asm { vmovss  xmm0, dword ptr [rsp+48h+vector+4] }
  return *(float *)&_XMM0;
}

/*
==============
pathnode_t::GetAngles
==============
*/
void pathnode_t::GetAngles(pathnode_t *this, vec3_t *vector)
{
  gentity_s *Parent; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  _R8 = this;
  _RBX = vector;
  __asm { vmovss  xmm0, dword ptr [r8+2Ch] }
  if ( ((1 << LOBYTE(this->constant.type)) & 0x62700000) != 0 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r8+30h]
      vmovss  dword ptr [rsp+0C8h+angles], xmm0
      vmovss  xmm0, dword ptr [r8+34h]
      vmovss  dword ptr [rsp+0C8h+angles+8], xmm0
      vmovss  dword ptr [rsp+0C8h+angles+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmovss  dword ptr [rsp+0C8h+angles], xmm1
      vmovss  dword ptr [rsp+0C8h+angles+8], xmm1
      vmovss  dword ptr [rsp+0C8h+angles+4], xmm0
    }
  }
  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    __asm { vmovaps [rsp+0C8h+var_18], xmm8 }
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    AxisToAngles(&out, _RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vmovss  xmm5, cs:__real@43b40000
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vmovss  xmm1, dword ptr [rbx+4]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vsubss  xmm0, xmm3, xmm2
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm8, xmm2, 1
      vmovss  xmm2, dword ptr [rbx+8]
      vmulss  xmm0, xmm0, xmm5
      vmovss  dword ptr [rbx], xmm0
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm3, xmm2, cs:__real@3b360b61
      vmulss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbx+4], xmm1
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vroundss xmm2, xmm8, xmm1, 1
      vmovaps xmm8, [rsp+0C8h+var_18]
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+angles]
      vmovss  xmm1, dword ptr [rsp+0C8h+angles+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+0C8h+angles+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
}

/*
==============
pathnode_t::GetForward
==============
*/
void pathnode_t::GetForward(pathnode_t *this, vec2_t *forward)
{
  vec3_t vector; 
  vec3_t forwarda; 
  vec3_t v19; 

  _RDI = forward;
  if ( ((1 << LOBYTE(this->constant.type)) & 0x62700000) != 0 )
  {
    pathnode_t::GetAngles(this, &vector);
    AngleVectors(&vector, &forwarda, NULL, NULL);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+68h+forward+4]
      vmovss  xmm3, dword ptr [rsp+68h+forward]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm1, xmm4, xmm1
    }
  }
  else
  {
    if ( !pathnode_t::GetParent(this) )
    {
      _RDI->v[0] = this->constant.yaw_orient.localForward.v[0];
      _RDI->v[1] = this->constant.yaw_orient.localForward.v[1];
      return;
    }
    pathnode_t::GetAngles(this, &vector);
    __asm { vmovss  xmm0, dword ptr [rsp+68h+vector+4]; yaw }
    YawVectors(*(float *)&_XMM0, &v19, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+var_28]
      vmovss  xmm1, dword ptr [rsp+68h+var_28+4]
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi], xmm0
  }
}

/*
==============
GetNodeExposedOffset
==============
*/
void GetNodeExposedOffset(const pathnode_t *inNode, vec3_t *outOffset)
{
  scr_string_t HighestNodeStance; 
  ai_stance_e v7; 
  unsigned __int16 type; 
  vec3_t outEyeOffset; 
  tmat33_t<vec3_t> axis; 
  vec3_t vector; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = outOffset;
  *(_QWORD *)outOffset->v = 0i64;
  outOffset->v[2] = 0.0;
  HighestNodeStance = Path_GetHighestNodeStance(inNode);
  if ( !HighestNodeStance )
    HighestNodeStance = scr_const.crouch;
  v7 = AI_StringToStance(HighestNodeStance);
  type = inNode->constant.type;
  if ( type == 31 )
    type = inNode->dynamic.coverMultiType;
  GetNodeExposedEyeOffset(type, v7, &outEyeOffset);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+57h+outEyeOffset]
    vmovss  xmm0, dword ptr [rbp+57h+outEyeOffset+4]
    vmovss  dword ptr [rbp+57h+outEyeOffset], xmm0
    vmovss  dword ptr [rbp+57h+outEyeOffset+4], xmm1
  }
  pathnode_t::GetAngles((pathnode_t *)inNode, &vector);
  AnglesToAxis(&vector, &axis);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rbp+57h+axis+0Ch]
    vmovss  xmm2, dword ptr [rbp+57h+axis+10h]
    vxorps  xmm1, xmm0, xmm3
    vxorps  xmm0, xmm2, xmm3
    vmovss  dword ptr [rbp+57h+axis+0Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+axis+14h]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbp+57h+axis+14h], xmm2
    vmovss  dword ptr [rbp+57h+axis+10h], xmm0
  }
  if ( &outEyeOffset == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+57h+outEyeOffset]
    vmovss  xmm6, dword ptr [rbp+57h+outEyeOffset+8]
    vmovss  xmm0, dword ptr [rbp+57h+axis+0Ch]
    vmulss  xmm2, xmm0, dword ptr [rbp+57h+outEyeOffset+4]
    vmulss  xmm0, xmm5, dword ptr [rbp+57h+axis]
    vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+18h]
    vmulss  xmm3, xmm5, dword ptr [rbp+57h+axis+4]
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+axis+10h]
    vmulss  xmm1, xmm0, dword ptr [rbp+57h+outEyeOffset+4]
    vmulss  xmm0, xmm6, dword ptr [rbp+57h+axis+1Ch]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm3, xmm5, dword ptr [rbp+57h+axis+8]
    vaddss  xmm1, xmm4, xmm0
    vmovss  xmm0, dword ptr [rbp+57h+axis+14h]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm1, xmm0, dword ptr [rbp+57h+outEyeOffset+4]
    vmulss  xmm0, xmm6, dword ptr [rbp+57h+axis+20h]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmovss  dword ptr [rdi+8], xmm1
  }
  _R11 = &vars0;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
GetNodesInRadius
==============
*/
void GetNodesInRadius(scrContext_t *scrContext, int sorted)
{
  signed __int64 v2; 
  void *v9; 
  int v11; 
  int typeFlags; 
  unsigned __int16 v16; 
  const char *String; 
  char v18; 
  const char **v19; 
  const char *v20; 
  __int64 v21; 
  const char *v22; 
  signed __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  int Int; 
  unsigned int v32; 
  unsigned int v33; 
  gentity_s *Parent; 
  char v41; 
  bool v42; 
  pathnode_t *node; 
  unsigned int spawnflags; 
  int v60; 
  unsigned int v61; 
  const char *v62; 
  signed int v63; 
  pathnode_t *v64; 
  scrContext_t *v65; 
  unsigned __int16 v66; 
  __int64 maxNodes; 
  __int64 allowDontLinkNodes; 
  vec3_t vectorValue; 
  tmat33_t<vec3_t> axis; 
  pathsort_s nodes[256]; 
  char v85; 

  v9 = alloca(v2);
  __asm
  {
    vmovaps [rsp+1118h+var_38], xmm6
    vmovaps [rsp+1118h+var_48], xmm7
    vmovaps [rsp+1118h+var_78], xmm10
    vmovss  xmm6, cs:__real@44000000
  }
  v11 = sorted;
  typeFlags = -1;
  Scr_GetVector(scrContext, 0, &vectorValue);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm { vmulss  xmm10, xmm0, xmm0 }
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm { vmovaps xmm6, xmm0 }
  }
  v16 = 0;
  if ( Scr_GetNumParam(scrContext) > 4 )
  {
    String = Scr_GetString(scrContext, 4u);
    if ( I_stricmp("Cover", String) )
    {
      v18 = 0;
      v19 = nodeStringTable;
      do
      {
        v20 = *v19;
        v21 = 0x7FFFFFFFi64;
        v22 = String;
        if ( !*v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v23 = v20 - String;
        while ( 1 )
        {
          v24 = (unsigned __int8)v22[v23];
          v25 = v21;
          v26 = *(unsigned __int8 *)v22++;
          --v21;
          if ( !v25 )
          {
LABEL_22:
            typeFlags = 1 << v18;
            goto LABEL_25;
          }
          if ( v24 != v26 )
          {
            v27 = v24 + 32;
            if ( (unsigned int)(v24 - 65) > 0x19 )
              v27 = v24;
            v24 = v27;
            v28 = v26 + 32;
            if ( (unsigned int)(v26 - 65) > 0x19 )
              v28 = v26;
            if ( v24 != v28 )
              break;
          }
          if ( !v24 )
            goto LABEL_22;
        }
        ++v18;
        ++v19;
      }
      while ( (__int64)v19 < (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_691 );
      typeFlags = -1;
LABEL_25:
      v11 = sorted;
    }
    else
    {
      typeFlags = -2107367684;
    }
  }
  if ( Scr_GetNumParam(scrContext) <= 5 )
    Int = 7;
  else
    Int = Scr_GetInt(scrContext, 5u);
  __asm
  {
    vmovaps xmm3, xmm6; maxHeight
    vmovaps xmm2, xmm7; maxDist
  }
  v32 = Path_NodesInCylinder(&vectorValue, NULL, *(float *)&_XMM2, *(float *)&_XMM3, nodes, 256, typeFlags, 0);
  v33 = v32;
  if ( v11 )
    std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(nodes, &nodes[v32], v32, Path_CompareNodesIncreasing);
  Scr_MakeArray(scrContext);
  if ( v33 )
  {
    __asm
    {
      vmovaps [rsp+1118h+var_68], xmm9
      vxorps  xmm9, xmm9, xmm9
      vmovaps [rsp+1118h+var_58], xmm8
    }
    while ( 1 )
    {
      if ( !Path_NodeValid(v16) )
        goto LABEL_54;
      _RCX = nodes[v16].node;
      __asm
      {
        vmovss  xmm7, dword ptr [rcx+20h]
        vmovss  xmm6, dword ptr [rcx+24h]
        vmovss  xmm8, dword ptr [rcx+28h]
      }
      Parent = pathnode_t::GetParent(_RCX);
      __asm { vmovaps xmm5, xmm7 }
      v41 = 0;
      v42 = Parent == NULL;
      if ( Parent )
      {
        AnglesToAxis(&Parent->r.currentAngles, &axis);
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rsp+1118h+axis+0Ch]
          vmulss  xmm1, xmm7, dword ptr [rsp+1118h+axis]
          vmulss  xmm3, xmm6, dword ptr [rsp+1118h+axis+10h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, dword ptr [rsp+1118h+axis+18h]
          vmulss  xmm0, xmm8, dword ptr [rsp+1118h+axis+1Ch]
          vaddss  xmm2, xmm2, xmm1
          vmulss  xmm1, xmm7, dword ptr [rsp+1118h+axis+4]
          vaddss  xmm5, xmm2, dword ptr [rbx+130h]
          vaddss  xmm4, xmm3, xmm1
          vaddss  xmm1, xmm4, xmm0
          vaddss  xmm6, xmm1, dword ptr [rbx+134h]
        }
      }
      __asm { vucomiss xmm10, xmm9 }
      if ( !v42 )
      {
        __asm
        {
          vsubss  xmm1, xmm5, dword ptr [rsp+1118h+vectorValue]
          vsubss  xmm0, xmm6, dword ptr [rsp+1118h+vectorValue+4]
          vmulss  xmm2, xmm0, xmm0
          vmulss  xmm1, xmm1, xmm1
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm10, xmm2
        }
        if ( !(v41 | v42) )
          goto LABEL_54;
      }
      node = nodes[v16].node;
      if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10274, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      spawnflags = node->constant.spawnflags;
      v60 = ((node->constant.spawnflags & 4) == 0) | 4;
      if ( (node->constant.spawnflags & 8) == 0 )
        v60 = ((node->constant.spawnflags & 4) == 0) | 6;
      v61 = v60 & 0xFFFFFFFB;
      if ( (node->constant.spawnflags & 0x10) == 0 )
        v61 = v60;
      if ( v61 )
      {
        if ( v61 == 7 )
          goto LABEL_50;
      }
      else
      {
        v62 = vtos(&node->constant.vLocalOrigin);
        LODWORD(allowDontLinkNodes) = spawnflags;
        LODWORD(maxNodes) = Path_ConvertNodeToIndex(node);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10285, ASSERT_TYPE_ASSERT, "( eAllowedStances )", "Node %d at %s has no valid stances.  Spawnflags: %d", maxNodes, v62, allowDontLinkNodes) )
          __debugbreak();
      }
      if ( (v61 & Int) != 0 )
      {
LABEL_50:
        v63 = g_path.actualNodeCount - pathData.zoneCount;
        if ( Path_ConvertNodeToIndex(nodes[v16].node) >= v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3206, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( nodes[i].node ) < Path_NodeCount())", (const char *)&queryFormat, "Path_ConvertNodeToIndex( nodes[i].node ) < Path_NodeCount()") )
          __debugbreak();
        v64 = nodes[v16].node;
        v65 = ScriptContext_Server();
        v66 = Path_ConvertNodeToIndex(v64);
        Scr_AddEntityNum(v65, v66, ENTITY_CLASS_PATHNODE);
        Scr_AddArray(scrContext);
      }
LABEL_54:
      if ( ++v16 >= v33 )
      {
        __asm
        {
          vmovaps xmm9, [rsp+1118h+var_68]
          vmovaps xmm8, [rsp+1118h+var_58]
        }
        break;
      }
    }
  }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
pathnode_t::GetParent
==============
*/
gentity_s *pathnode_t::GetParent(pathnode_t *this)
{
  unsigned __int16 index; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !this->constant.parent.index )
    return 0i64;
  if ( !pathData.parentIndexResolved && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 539, ASSERT_TYPE_ASSERT, "(pathData.parentIndexResolved)", (const char *)&queryFormat, "pathData.parentIndexResolved") )
    __debugbreak();
  index = this->constant.parent.index;
  if ( index >= 0x800u )
  {
    LODWORD(v5) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 541, ASSERT_TYPE_ASSERT, "( ( constant.parent.index < ( 2048 ) ) )", "( constant.parent.index ) = %i", v5) )
      __debugbreak();
  }
  v4 = this->constant.parent.index;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v5) = this->constant.parent.index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] )
  {
    LODWORD(v6) = this->constant.parent.index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 542, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( constant.parent.index ))", "%s\n\tEntity %d is not a valid node parent. Try rebuilding paths.", "G_IsEntityInUse( constant.parent.index )", v6) )
      __debugbreak();
  }
  return &g_entities[this->constant.parent.index];
}

/*
==============
GetParentNameFromParentIndex
==============
*/
__int64 GetParentNameFromParentIndex(const pathnode_t *node)
{
  unsigned __int16 index; 

  if ( !pathData.parentIndexResolved )
    return (unsigned int)node->constant.parent.name;
  if ( node->constant.parent.index >= 0x7FEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1984, ASSERT_TYPE_ASSERT, "(node->constant.parent.index < ENTITYNUM_ORDINARY_END)", (const char *)&queryFormat, "node->constant.parent.index < ENTITYNUM_ORDINARY_END") )
    __debugbreak();
  index = node->constant.parent.index;
  if ( index )
    return (unsigned int)g_entities[index].targetname;
  else
    return 0i64;
}

/*
==============
GetPathNodeListForSightToPathNodeCheck
==============
*/

void __fastcall GetPathNodeListForSightToPathNodeCheck(const vec3_t *position, double maxRadius, unsigned __int16 *pathNodeIndexListOut, unsigned __int64 maxPathNodeListItems, unsigned int *pathNodeListOutCount)
{
  signed __int64 v5; 
  void *v7; 
  unsigned int v12; 
  const pathnode_t *v13; 
  unsigned int v16; 
  pathsort_s *p_nodes; 
  signed int v18; 
  unsigned __int16 v19; 
  pathsort_s nodes; 

  v7 = alloca(v5);
  __asm
  {
    vmovaps [rsp+2098h+var_48], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !pathNodeIndexListOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4302, ASSERT_TYPE_ASSERT, "(pathNodeIndexListOut)", (const char *)&queryFormat, "pathNodeIndexListOut") )
    __debugbreak();
  if ( !pathNodeListOutCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4303, ASSERT_TYPE_ASSERT, "(pathNodeListOutCount)", (const char *)&queryFormat, "pathNodeListOutCount") )
    __debugbreak();
  v12 = 0;
  *pathNodeListOutCount = 0;
  Profile_Begin(772);
  v13 = Path_NearestNodeForLineOfSight(position, 65537, NULL);
  Profile_EndInternal(NULL);
  if ( v13 )
    pathNodeIndexListOut[(*pathNodeListOutCount)++] = Path_ConvertNodeToIndex(v13);
  if ( !*pathNodeListOutCount )
  {
    Profile_Begin(773);
    __asm
    {
      vmovss  xmm3, cs:__real@43800000; maxHeight
      vmovaps xmm2, xmm6; maxDist
    }
    v16 = Path_NodesInCylinder(position, NULL, *(float *)&_XMM2, *(float *)&_XMM3, &nodes, 512, -1, 0);
    Profile_EndInternal(NULL);
    if ( v16 )
    {
      p_nodes = &nodes;
      do
      {
        if ( v12 >= maxPathNodeListItems )
          break;
        v18 = g_path.actualNodeCount - pathData.zoneCount;
        if ( Path_ConvertNodeToIndex(p_nodes->node) >= v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4342, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( nodesAroundEntity[nodeIndex].node ) < Path_NodeCount())", (const char *)&queryFormat, "Path_ConvertNodeToIndex( nodesAroundEntity[nodeIndex].node ) < Path_NodeCount()") )
          __debugbreak();
        v19 = Path_ConvertNodeToIndex(p_nodes->node);
        ++v12;
        ++p_nodes;
        pathNodeIndexListOut[(*pathNodeListOutCount)++] = v19;
      }
      while ( v12 < v16 );
    }
  }
  __asm { vmovaps xmm6, [rsp+2098h+var_48] }
}

/*
==============
pathnode_t::GetPos
==============
*/
void pathnode_t::GetPos(pathnode_t *this, vec3_t *pos)
{
  gentity_s *Parent; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 

  _RBX = pos;
  *pos = this->constant.vLocalOrigin;
  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    MatrixTransformVector(_RBX, &axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+out]
      vaddss  xmm1, xmm0, dword ptr [rdi+130h]
      vmovss  xmm2, dword ptr [rsp+68h+out+4]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm0, xmm2, dword ptr [rdi+134h]
      vmovss  xmm1, dword ptr [rsp+68h+out+8]
      vmovss  dword ptr [rbx+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rdi+138h]
      vmovss  dword ptr [rbx+8], xmm2
    }
  }
}

/*
==============
pathnode_t::LocalizeDirToParent
==============
*/
void pathnode_t::LocalizeDirToParent(pathnode_t *this, vec2_t *dir)
{
  gentity_s *Parent; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  _RBX = dir;
  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovss  xmm6, dword ptr [rbx+4]
      vmovaps [rsp+0A8h+var_28], xmm7
      vmovss  xmm7, dword ptr [rbx]
    }
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    MatrixInverse(&axis, &out);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsp+0A8h+out+0Ch]
      vmulss  xmm1, xmm7, dword ptr [rsp+0A8h+out]
      vmulss  xmm2, xmm6, dword ptr [rsp+0A8h+out+10h]
      vmovaps xmm6, [rsp+0A8h+var_18]
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm0, xmm7, dword ptr [rsp+0A8h+out+4]
      vmovaps xmm7, [rsp+0A8h+var_28]
      vaddss  xmm2, xmm2, xmm0
      vmovss  dword ptr [rbx+4], xmm2
      vmovss  dword ptr [rbx], xmm3
    }
  }
}

/*
==============
pathnode_t::LocalizePosToParent
==============
*/
void pathnode_t::LocalizePosToParent(pathnode_t *this, vec3_t *pos)
{
  gentity_s *Parent; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  _RBX = pos;
  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, dword ptr [rax+130h]
      vmovss  xmm2, dword ptr [rbx+4]
      vsubss  xmm0, xmm2, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+98h+in1], xmm1
      vmovss  xmm1, dword ptr [rbx+8]
      vsubss  xmm2, xmm1, dword ptr [rax+138h]
      vmovss  dword ptr [rsp+98h+in1+8], xmm2
      vmovss  dword ptr [rsp+98h+in1+4], xmm0
    }
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    MatrixInverse(&axis, &out);
    MatrixTransformVector(&in1, &out, _RBX);
  }
}

/*
==============
LogNoPathNodesAroundUser
==============
*/

void __fastcall LogNoPathNodesAroundUser(gentity_s *pEntity, double radiusDistance)
{
  int v5; 
  __int64 v16; 
  __int64 v17; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = pEntity;
  __asm { vmovaps xmm6, xmm1 }
  v5 = Sys_Milliseconds();
  if ( v5 - lastTimeDisplayed > 1000 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+134h]
      vmovss  xmm2, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rbx+138h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm6, xmm6
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+48h+var_20], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+48h+var_28], xmm1
    }
    Com_PrintWarning(16, "Player @ X[%f] Y[%f] Z[%f] found no path nodes within %3.2f radius, this will break spawning checks.\n", _R8, _R9, v16, v17);
    lastTimeDisplayed = v5;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
PathNodeError
==============
*/
void PathNodeError(pathnode_t *node, PathNodeErrorCode error)
{
  if ( node )
  {
    node->constant.spawnflags |= 0x4000u;
    node->constant.error = error;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 526, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    MEMORY[0] |= 0x4000u;
    MEMORY[0x3C] = error;
  }
}

/*
==============
PathNode_UpdateStringField
==============
*/
void PathNode_UpdateStringField(const char *destKey, scr_string_t *destScrString, const char *key, const char *value)
{
  const char *v8; 
  const char *v9; 
  int v10; 
  int v11; 

  if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2120, ASSERT_TYPE_ASSERT, "(key)", (const char *)&queryFormat, "key") )
    __debugbreak();
  if ( !destKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2121, ASSERT_TYPE_ASSERT, "(destKey)", (const char *)&queryFormat, "destKey") )
    __debugbreak();
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2122, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( !I_stricmp(key, destKey) )
  {
    v8 = SL_ConvertToString(*destScrString);
    if ( !v8 )
      goto LABEL_16;
    v9 = (const char *)(value - v8);
    do
    {
      v10 = (unsigned __int8)v9[(_QWORD)v8];
      v11 = *(unsigned __int8 *)v8 - v10;
      if ( v11 )
        break;
      ++v8;
    }
    while ( v10 );
    if ( v11 )
LABEL_16:
      *destScrString = SL_GetString(value, 1u);
  }
}

/*
==============
Path_ActorIsDangerousNode
==============
*/
_BOOL8 Path_ActorIsDangerousNode(const pathnode_t *node, team_t eTeam)
{
  __int64 NodeTeam; 
  __int64 v5; 

  NodeTeam = Path_GetNodeTeam(eTeam);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10199, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (unsigned int)NodeTeam >= 3 )
  {
    LODWORD(v5) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10200, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v5, 3) )
      __debugbreak();
  }
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10201, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", "%s\n\tAccess to pathnode_dynamic_t::actors", "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  return node->dynamic.actors.dangerousNodeTime[NodeTeam] > level.time;
}

/*
==============
Path_ActorIsReallyDangerousNode
==============
*/
_BOOL8 Path_ActorIsReallyDangerousNode(const pathnode_t *node, team_t eTeam)
{
  __int64 NodeTeam; 
  __int64 v5; 

  NodeTeam = Path_GetNodeTeam(eTeam);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10211, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (unsigned int)NodeTeam >= 3 )
  {
    LODWORD(v5) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10212, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v5, 3) )
      __debugbreak();
  }
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10213, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", "%s\n\tAccess to pathnode_dynamic_t::actors", "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  return node->dynamic.actors.dangerousNodeTime[NodeTeam] > level.time + 15000;
}

/*
==============
Path_ActorMarkAllConnectedNodesDangerous
==============
*/
void Path_ActorMarkAllConnectedNodesDangerous(pathnode_t *node, team_t eTeam)
{
  __int64 NodeTeam; 
  bitarray<224> *AllCombatTeamFlags; 
  int time; 
  int v7; 
  __int64 v8; 
  int IsDangerousNode; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  unsigned __int16 nodeNum; 
  const pathnode_t *v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 

  NodeTeam = Path_GetNodeTeam(eTeam);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10168, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllCombatTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllCombatTeamFlags();
  else
    AllCombatTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
  if ( !bitarray_base<bitarray<224>>::testBit(AllCombatTeamFlags, eTeam) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10169, ASSERT_TYPE_ASSERT, "( Sentient_IsCombatTeam( eTeam ) )", (const char *)&queryFormat, "Sentient_IsCombatTeam( eTeam )") )
    __debugbreak();
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10170, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", "%s\n\tAccess to pathnode_dynamic_t::actors", "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  time = level.time;
  v7 = level.time + 60000;
  if ( (unsigned int)NodeTeam >= 3 )
  {
    LODWORD(v17) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10175, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v17, 3) )
      __debugbreak();
  }
  v8 = 4 * NodeTeam + 124;
  IsDangerousNode = Path_ActorIsDangerousNode(node, eTeam);
  v10 = time + 15000;
  if ( IsDangerousNode )
    v10 = v7;
  *(unsigned int *)((char *)&node->constant.spawnflags + v8) = v10;
  v11 = 0;
  if ( node->constant.totalLinkCount )
  {
    v12 = 0i64;
    do
    {
      nodeNum = node->constant.Links[v12].nodeNum;
      if ( nodeNum == 0xFFFF )
      {
        v14 = NULL;
      }
      else
      {
        if ( nodeNum >= g_path.actualNodeCount )
        {
          LODWORD(v18) = g_path.actualNodeCount;
          LODWORD(v17) = nodeNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v14 = &pathData.nodes[nodeNum];
      }
      v15 = Path_ActorIsDangerousNode(v14, eTeam);
      v16 = time + 15000;
      if ( v15 )
        v16 = v7;
      ++v11;
      *(unsigned int *)((char *)&v14->constant.spawnflags + v8) = v16;
      ++v12;
    }
    while ( v11 < node->constant.totalLinkCount );
  }
}

/*
==============
Path_ActorMarkNodeDangerous
==============
*/
void Path_ActorMarkNodeDangerous(pathnode_t *node, team_t eTeam)
{
  __int64 NodeTeam; 
  unsigned __int16 *wOverlapNode; 
  int v5; 
  int v6; 
  unsigned __int16 v7; 
  __int64 v8; 

  NodeTeam = Path_GetNodeTeam(eTeam);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10142, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (unsigned int)NodeTeam >= 3 )
  {
    LODWORD(v8) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10143, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v8, 3) )
      __debugbreak();
  }
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10144, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", "%s\n\tAccess to pathnode_dynamic_t::actors", "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  wOverlapNode = node->constant.wOverlapNode;
  v5 = 0;
  v6 = level.time + 15000;
  node->dynamic.actors.dangerousNodeTime[NodeTeam] = level.time + 15000;
  do
  {
    v7 = *wOverlapNode;
    if ( *wOverlapNode == 0xFFFF )
      break;
    ++v5;
    ++wOverlapNode;
    pathData.nodes[v7].dynamic.actors.dangerousNodeTime[NodeTeam] = v6;
  }
  while ( v5 < 2 );
}

/*
==============
Path_AllowedStancesForNode
==============
*/
__int64 Path_AllowedStancesForNode(const pathnode_t *node)
{
  unsigned int spawnflags; 
  int v3; 
  unsigned int v4; 
  const char *v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  __int64 v9; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10274, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  spawnflags = node->constant.spawnflags;
  v3 = ((node->constant.spawnflags & 4) == 0) | 4;
  if ( (node->constant.spawnflags & 8) == 0 )
    v3 = ((node->constant.spawnflags & 4) == 0) | 6;
  v4 = v3 & 0xFFFFFFFB;
  if ( (node->constant.spawnflags & 0x10) == 0 )
    v4 = v3;
  if ( !v4 )
  {
    v5 = vtos(&node->constant.vLocalOrigin);
    v6 = (__int64)((unsigned __int128)(((char *)node - (char *)pathData.nodes) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 5;
    v7 = (v6 >> 63) + v6;
    if ( (unsigned int)v7 >= g_path.actualNodeCount )
    {
      LODWORD(v9) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5329, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( g_path.actualNodeCount )", "nodeIndex doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v9, g_path.actualNodeCount) )
        __debugbreak();
    }
    LODWORD(v9) = (unsigned __int16)v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10285, ASSERT_TYPE_ASSERT, "( eAllowedStances )", "Node %d at %s has no valid stances.  Spawnflags: %d", v9, v5, spawnflags) )
      __debugbreak();
  }
  return v4;
}

/*
==============
Path_AttemptAccurateTrajectoryJumpLink
==============
*/
int Path_AttemptAccurateTrajectoryJumpLink(pathnode_t *pNodeFrom, pathnode_t *pNodeTo, PathJumpLinkWorkData *workData)
{
  char v41; 
  char v42; 
  const char *v46; 
  int result; 
  float fmt; 
  float speedScale; 
  vec3_t toNormal; 
  vec3_t up; 
  vec3_t toPoint; 
  vec3_t pos; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm8
  }
  if ( !workData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10779, ASSERT_TYPE_ASSERT, "(workData)", (const char *)&queryFormat, "workData") )
    __debugbreak();
  pathnode_t::GetPos(pNodeFrom, &pos);
  AngleVectors((const vec3_t *)&pNodeFrom->constant.44, NULL, NULL, &up);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+0C8h+up]
    vmovss  xmm6, dword ptr [rsp+0C8h+up+4]
    vmovss  xmm4, dword ptr [rsp+0C8h+up+8]
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+0C8h+up], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0C8h+up+8], xmm0
    vmovss  dword ptr [rsp+0C8h+up+4], xmm1
  }
  pathnode_t::GetPos(pNodeTo, &toPoint);
  AngleVectors((const vec3_t *)&pNodeTo->constant.44, NULL, NULL, &toNormal);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+0C8h+toNormal]
    vmovss  xmm6, dword ptr [rsp+0C8h+toNormal+4]
    vmovss  xmm4, dword ptr [rsp+0C8h+toNormal+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmovaps xmm8, [rsp+0C8h+var_38]
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+0C8h+toNormal], xmm0
    vmulss  xmm0, xmm4, xmm2
    vcomiss xmm0, cs:__real@3f59999a
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0C8h+toNormal+4], xmm1
    vmovss  dword ptr [rsp+0C8h+toNormal+8], xmm0
  }
  if ( v41 | v42 )
  {
    _RSI = DVARFLT_agent_jumpWallSpeed;
    if ( !DVARFLT_agent_jumpWallSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "agent_jumpWallSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    _RSI = DVARFLT_agent_jumpWallGravity;
    if ( !DVARFLT_agent_jumpWallGravity )
    {
      v46 = "agent_jumpWallGravity";
LABEL_15:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v46) )
        __debugbreak();
    }
  }
  else
  {
    _RSI = DVARFLT_agent_jumpSpeed;
    if ( !DVARFLT_agent_jumpSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "agent_jumpSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    _RSI = DVARFLT_agent_jumpGravity;
    if ( !DVARFLT_agent_jumpGravity )
    {
      v46 = "agent_jumpGravity";
      goto LABEL_15;
    }
  }
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@3f8147ae
    vmovss  xmm1, dword ptr [rsi+28h]
    vmovss  [rsp+0C8h+speedScale], xmm0
    vmovss  dword ptr [rsp+0C8h+fmt], xmm1
  }
  result = Path_TrajectoryCanAttemptAccurateJump(&pos, &up, &toPoint, &toNormal, fmt, speedScale, workData);
  __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
  return result;
}

/*
==============
Path_AttemptInPlaneJumpLink
==============
*/
__int64 Path_AttemptInPlaneJumpLink(pathnode_t *pNodeFrom, pathnode_t *pNodeTo)
{
  __int64 result; 
  char v58; 
  vec3_t pos; 
  vec3_t start; 
  vec3_t v62; 
  vec3_t end; 
  trace_t results; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
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
  }
  pathnode_t::GetPos(pNodeFrom, &pos);
  pathnode_t::GetPos(pNodeTo, &v62);
  __asm
  {
    vmovss  xmm12, cs:__real@3f800000
    vmovss  xmm13, dword ptr [rsp+190h+var_138]
    vmovss  xmm10, dword ptr [rsp+190h+pos]
    vmovss  xmm14, dword ptr [rsp+190h+var_138+4]
    vmovss  xmm11, dword ptr [rsp+190h+pos+4]
    vmovss  xmm8, dword ptr [rsp+190h+pos+8]
    vmovss  xmm9, cs:__real@41200000
    vsubss  xmm4, xmm13, xmm10
    vmulss  xmm0, xmm4, xmm4
    vsubss  xmm5, xmm14, xmm11
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm12, xmm0
    vdivss  xmm3, xmm12, xmm0
    vmulss  xmm0, xmm5, xmm3
    vmulss  xmm0, xmm0, cs:__real@40800000
    vmulss  xmm1, xmm3, xmm4
    vmulss  xmm15, xmm1, cs:__real@40800000
    vmovss  [rsp+190h+var_160], xmm0
    vaddss  xmm6, xmm10, xmm15
    vaddss  xmm7, xmm0, xmm11
    vsubss  xmm1, xmm13, xmm6
    vsubss  xmm0, xmm14, xmm7
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@41800000
    vsubss  xmm0, xmm8, xmm9
    vmovss  dword ptr [rsp+190h+pos+8], xmm0
    vaddss  xmm0, xmm8, xmm9
    vmovss  dword ptr [rsp+190h+start+8], xmm0
    vmovss  dword ptr [rsp+190h+pos], xmm6
    vmovss  dword ptr [rsp+190h+pos+4], xmm7
    vmovss  dword ptr [rsp+190h+start], xmm6
    vmovss  dword ptr [rsp+190h+start+4], xmm7
  }
  G_Main_TraceCapsule(&results, &start, &pos, &pathConnectWalkActorBox, 2047, 131089);
  if ( !results.startsolid )
  {
    __asm
    {
      vmovss  xmm5, [rbp+90h+results.fraction]
      vucomiss xmm5, xmm12
    }
  }
  __asm
  {
    vaddss  xmm1, xmm9, dword ptr [rsp+190h+var_138+8]
    vmovss  dword ptr [rsp+190h+end+8], xmm1
    vmovss  dword ptr [rsp+190h+end], xmm13
    vmovss  dword ptr [rsp+190h+end+4], xmm14
  }
  G_Main_TraceCapsule(&results, &start, &end, &pathConnectWalkActorBox, 2047, 529);
  __asm
  {
    vmovss  xmm0, [rbp+90h+results.fraction]
    vucomiss xmm0, xmm12
  }
  if ( v58 )
    result = 1i64;
  else
    result = 0i64;
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
  return result;
}

/*
==============
Path_AutoDisconnectPaths
==============
*/
void Path_AutoDisconnectPaths()
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  gentity_s *v6; 
  nav_space_s *SpaceByEntity; 
  nav_space_s *MostLikelySpace; 
  __int64 bNow; 
  __int64 userDataFlags; 
  void *retaddr; 

  _RAX = &retaddr;
  v2 = 0;
  if ( level.num_entities > 0 )
  {
    v3 = 0i64;
    v4 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovss  xmm6, cs:__real@41700000
    }
    do
    {
      v6 = &level.gentities[v4];
      if ( (unsigned int)v2 >= 0x800 )
      {
        LODWORD(userDataFlags) = 2048;
        LODWORD(bNow) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", bNow, userDataFlags) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] && (v6->flags.m_flags[0] & 0xC0) == 0xC0 )
      {
        if ( (v6->flags.m_flags[0] & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10389, ASSERT_TYPE_ASSERT, "(Path_IsDynamicBlockingEntity( ent ))", (const char *)&queryFormat, "Path_IsDynamicBlockingEntity( ent )") )
          __debugbreak();
        Nav_DestroyObstacleByEnt(v6);
        if ( (v6->flags.m_flags[0] & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10319, ASSERT_TYPE_ASSERT, "(Path_IsDynamicBlockingEntity( ent ))", (const char *)&queryFormat, "Path_IsDynamicBlockingEntity( ent )") )
          __debugbreak();
        v6->flags.m_flags[0] |= 0x100u;
        SpaceByEntity = Nav_GetSpaceByEntity(v6);
        MostLikelySpace = Nav_FindMostLikelySpace(&v6->r.currentOrigin, NAV_LAYER_HUMAN, SpaceByEntity);
        if ( MostLikelySpace )
        {
          __asm { vmovaps xmm2, xmm6; penalty }
          Nav_CreateObstacleByEnt(MostLikelySpace, v6, *(float *)&_XMM2, 0xFFFFFFFF, 0xFFFFE07F, 1, 0);
        }
        v6->flags.m_flags[0] &= ~0x100u;
        v6->iDisconnectTime = level.time;
      }
      ++v2;
      ++v3;
      ++v4;
    }
    while ( v2 < level.num_entities );
    __asm { vmovaps xmm6, [rsp+78h+var_38] }
  }
}

/*
==============
Path_CallFunctionForNodes
==============
*/
void Path_CallFunctionForNodes(void (*function)(pathnode_t *, void *), void *data)
{
  unsigned int fixedNodeCount; 
  __int64 v5; 
  __int64 v6; 

  if ( !function && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2039, ASSERT_TYPE_ASSERT, "(function)", (const char *)&queryFormat, "function") )
    __debugbreak();
  fixedNodeCount = pathData.fixedNodeCount;
  if ( !pathData.fixedNodeCount )
    fixedNodeCount = pathData.nodeCount;
  if ( fixedNodeCount )
  {
    v5 = 0i64;
    v6 = fixedNodeCount;
    do
    {
      function(&pathData.nodes[v5++], data);
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
Path_CanClaimNode
==============
*/
char Path_CanClaimNode(const pathnode_t *const node, const sentient_s *const claimer)
{
  __int64 NodeTeam; 
  int v5; 
  bool v6; 
  sentient_s *NodeOwner; 
  __int64 v9; 
  int v10; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9753, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !claimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9754, ASSERT_TYPE_ASSERT, "(claimer)", (const char *)&queryFormat, "claimer") )
    __debugbreak();
  if ( Path_IsOnlyOwner(node, claimer) )
    return 1;
  NodeTeam = Path_GetNodeTeam(claimer->eTeam);
  v5 = 0;
  if ( (unsigned int)NodeTeam >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
  {
    v10 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2;
    LODWORD(v9) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9764, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( level.time > node->dynamic.iValidTime[NodeTeam] )
  {
    if ( level.time >= Path_NodeGetFreeTime(node, NodeTeam) )
      return 1;
    v6 = SV_BotIsBotEnt(claimer->ent) || Path_CanStealNode(node, claimer);
    if ( Path_NodeIsClaimed(node, NodeTeam) && v6 )
    {
      do
      {
        NodeOwner = Path_GetNodeOwner(node, v5, NodeTeam);
        if ( NodeOwner )
          Path_RelinquishNode(NodeOwner, 0);
        ++v5;
      }
      while ( v5 < 3 );
      return 1;
    }
    if ( BG_ActorOrAgentSystemEnabled() && (node->constant.spawnflags & 0x40) != 0 && Path_CanStealPriorityNode(node, claimer) )
      return 1;
  }
  return 0;
}

/*
==============
Path_CanStealNode
==============
*/
char Path_CanStealNode(const pathnode_t *const node, const sentient_s *const claimer)
{
  unsigned int NodeTeam; 
  const char *GameType; 
  int v6; 
  unsigned int v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  int v11; 
  int v13; 
  sentient_s *NodeOwner; 
  const sentient_s *v15; 
  __int64 v16; 
  AIWrapper v17; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9630, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !claimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9631, ASSERT_TYPE_ASSERT, "(claimer)", (const char *)&queryFormat, "claimer") )
    __debugbreak();
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9632, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", (const char *)&queryFormat, "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  NodeTeam = Path_GetNodeTeam(claimer->eTeam);
  if ( !Path_GetNodeOwnerCount(node, NodeTeam) )
    return 1;
  if ( Path_GetNumClaimedOverlapNodes(node, NodeTeam) <= 1 )
  {
    AIWrapper::AIWrapper(&v17, claimer->ent);
    if ( v17.m_pAI && !claimer->pClaimedNode && !((unsigned __int8 (*)(void))v17.m_pAI->IsMoving)() )
    {
      v13 = 0;
      while ( 1 )
      {
        NodeOwner = Path_GetNodeOwner(node, v13, NodeTeam);
        v15 = NodeOwner;
        if ( NodeOwner )
        {
          if ( !AI_GetAIScripted(NodeOwner->ent) || v15 != claimer && (!Path_SentientNearNode(claimer, node) || Path_SentientNearNode(v15, node)) )
            break;
        }
        if ( ++v13 >= 3 )
          return 1;
      }
    }
  }
  else
  {
    if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
      NodeTeam = 0;
    if ( !node )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    v6 = 1;
    if ( BG_BotSystemEnabled() )
    {
      v8 = SV_GameMP_GetGameType();
      v9 = *(unsigned __int8 *)v8 - (unsigned __int8)aBr_2[0];
      if ( !v9 )
      {
        v9 = *((unsigned __int8 *)v8 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v9 )
          v9 = *((unsigned __int8 *)v8 + 2) - (unsigned __int8)aBr_2[2];
      }
      v7 = (v9 != 0) + 1;
    }
    else
    {
      v7 = 1;
    }
    if ( NodeTeam >= v7 )
    {
      if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        v10 = SV_GameMP_GetGameType();
        v11 = *(unsigned __int8 *)v10 - (unsigned __int8)aBr_2[0];
        if ( !v11 )
        {
          v11 = *((unsigned __int8 *)v10 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v11 )
            v11 = *((unsigned __int8 *)v10 + 2) - (unsigned __int8)aBr_2[2];
        }
        v6 = (v11 != 0) + 1;
      }
      LODWORD(v16) = NodeTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v16, v6) )
        __debugbreak();
    }
    if ( SentientHandle::isDefined(&node->dynamic.pOwners[NodeTeam]) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9649, ASSERT_TYPE_ASSERT, "(!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined())", (const char *)&queryFormat, "!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined()") )
        __debugbreak();
    }
  }
  return 0;
}

/*
==============
Path_CanStealPriorityNode
==============
*/
bool Path_CanStealPriorityNode(const pathnode_t *const node, const sentient_s *const claimer)
{
  team_t eTeam; 
  unsigned int NodeTeam; 
  const char *GameType; 
  int v8; 
  unsigned int v9; 
  const char *v10; 
  int v11; 
  const char *v12; 
  int v13; 
  bool result; 
  int v16; 
  sentient_s *NodeOwner; 
  sentient_s *v18; 
  __int64 v33; 
  AIWrapper v34; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9531, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (node->constant.spawnflags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9532, ASSERT_TYPE_ASSERT, "(node->constant.spawnflags & PNF_PRIORITY)", (const char *)&queryFormat, "node->constant.spawnflags & PNF_PRIORITY") )
    __debugbreak();
  if ( !claimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9533, ASSERT_TYPE_ASSERT, "(claimer)", (const char *)&queryFormat, "claimer") )
    __debugbreak();
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9534, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", (const char *)&queryFormat, "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  eTeam = claimer->eTeam;
  __asm { vmovaps [rsp+0E8h+var_38], xmm6 }
  NodeTeam = Path_GetNodeTeam(eTeam);
  if ( Path_GetNodeOwnerCount(node, NodeTeam) )
  {
    if ( Path_GetNumClaimedOverlapNodes(node, NodeTeam) <= 1 )
    {
      __asm { vmovss  xmm6, cs:__real@43610000 }
      v16 = 0;
      while ( 1 )
      {
        NodeOwner = Path_GetNodeOwner(node, v16, NodeTeam);
        v18 = NodeOwner;
        if ( NodeOwner )
        {
          AIWrapper::AIWrapper(&v34, NodeOwner->ent);
          if ( !v34.m_pAI )
            break;
          if ( v18 != claimer )
          {
            if ( v18->eTeam != claimer->eTeam )
              break;
            if ( !((unsigned __int8 (*)(void))v34.m_pAI->IsDying)() )
            {
              pathnode_t::GetPos((pathnode_t *)node, &pos);
              __asm
              {
                vmovss  xmm3, dword ptr [rsp+0E8h+pos]
                vmovss  xmm4, dword ptr [rsp+0E8h+pos+4]
                vsubss  xmm1, xmm3, dword ptr [rax]
                vsubss  xmm0, xmm4, dword ptr [rax+4]
                vmulss  xmm2, xmm0, xmm0
                vmulss  xmm1, xmm1, xmm1
                vaddss  xmm5, xmm2, xmm1
                vcomiss xmm5, xmm6
              }
              if ( v18->ent >= (gentity_s *)0xFFFFFFFFFFFFFED0i64 )
                break;
              __asm
              {
                vsubss  xmm0, xmm4, dword ptr [rax+4]
                vsubss  xmm1, xmm3, dword ptr [rax]
                vmulss  xmm2, xmm0, xmm0
                vmulss  xmm1, xmm1, xmm1
                vaddss  xmm2, xmm2, xmm1
                vaddss  xmm0, xmm2, xmm6
                vcomiss xmm0, xmm5
              }
              if ( claimer->ent < (gentity_s *)0xFFFFFFFFFFFFFED0i64 )
                break;
            }
          }
        }
        if ( ++v16 >= 3 )
          goto LABEL_47;
      }
    }
    else
    {
      if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
        NodeTeam = 0;
      v8 = 1;
      if ( BG_BotSystemEnabled() )
      {
        v10 = SV_GameMP_GetGameType();
        v11 = *(unsigned __int8 *)v10 - (unsigned __int8)aBr_2[0];
        if ( !v11 )
        {
          v11 = *((unsigned __int8 *)v10 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v11 )
            v11 = *((unsigned __int8 *)v10 + 2) - (unsigned __int8)aBr_2[2];
        }
        v9 = (v11 != 0) + 1;
      }
      else
      {
        v9 = 1;
      }
      if ( NodeTeam >= v9 )
      {
        if ( BG_BotSystemEnabled() )
        {
          v12 = SV_GameMP_GetGameType();
          v13 = *(unsigned __int8 *)v12 - (unsigned __int8)aBr_2[0];
          if ( !v13 )
          {
            v13 = *((unsigned __int8 *)v12 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v13 )
              v13 = *((unsigned __int8 *)v12 + 2) - (unsigned __int8)aBr_2[2];
          }
          v8 = (v13 != 0) + 1;
        }
        LODWORD(v33) = NodeTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v33, v8) )
          __debugbreak();
      }
      if ( SentientHandle::isDefined(&node->dynamic.pOwners[NodeTeam]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9553, ASSERT_TYPE_ASSERT, "(!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined())", (const char *)&queryFormat, "!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined()") )
        __debugbreak();
    }
    result = 0;
  }
  else
  {
LABEL_47:
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+0E8h+var_38] }
  return result;
}

/*
==============
Path_CheckValidJumpAngles
==============
*/
__int64 Path_CheckValidJumpAngles(pathnode_t *pNodeFrom, pathnode_t *pNodeTo)
{
  char v62; 
  char v63; 
  __int64 result; 
  vec3_t up; 
  vec3_t v96; 
  vec3_t v97; 
  char v98; 
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
  }
  _RSI = pNodeTo;
  AngleVectors((const vec3_t *)&pNodeFrom->constant.44, NULL, NULL, &up);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+57h+up]
    vmovss  xmm6, dword ptr [rbp+57h+up+4]
    vmovss  xmm4, dword ptr [rbp+57h+up+8]
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm7, cs:__real@80000000
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+57h+up], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+57h+up+8], xmm0
    vmovss  dword ptr [rbp+57h+up+4], xmm1
  }
  AngleVectors((const vec3_t *)&_RSI->constant.44, NULL, NULL, &v96);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+57h+var_A0]
    vmovss  xmm6, dword ptr [rbp+57h+var_A0+4]
    vmovss  xmm4, dword ptr [rbp+57h+var_A0+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+57h+var_A0], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+57h+var_A0+8], xmm0
    vmovss  xmm0, dword ptr [rsi+20h]
    vsubss  xmm6, xmm0, dword ptr [rdi+20h]
    vmovss  xmm0, dword ptr [rsi+28h]
    vsubss  xmm4, xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rbp+57h+var_A0+4], xmm1
    vmovss  xmm1, dword ptr [rsi+24h]
    vsubss  xmm5, xmm1, dword ptr [rdi+24h]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, xmm7
    vblendvps xmm0, xmm1, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm9, xmm6, xmm1
    vmulss  xmm10, xmm5, xmm1
    vmulss  xmm11, xmm4, xmm1
  }
  AngleVectors((const vec3_t *)&pNodeFrom->constant.44, NULL, NULL, &v97);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+var_90+8]
    vcomiss xmm0, cs:__real@3f59999a
  }
  AngleVectors((const vec3_t *)&_RSI->constant.44, NULL, NULL, &v97);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+var_90+8]
    vcomiss xmm0, cs:__real@3f59999a
    vmovss  xmm5, dword ptr [rbp+57h+up+8]
    vmovss  xmm7, dword ptr [rbp+57h+up+4]
    vmovss  xmm8, dword ptr [rbp+57h+up]
    vmulss  xmm1, xmm9, xmm8
    vmulss  xmm0, xmm10, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm11
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@3eaf1aa0
    vmovss  xmm3, dword ptr [rbp+57h+var_A0+8]
    vmovss  xmm4, dword ptr [rbp+57h+var_A0+4]
    vmovss  xmm6, dword ptr [rbp+57h+var_A0]
  }
  if ( v62 | v63 )
  {
    __asm
    {
      vmulss  xmm1, xmm9, xmm6
      vmulss  xmm0, xmm10, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm11
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@beaf1aa0
    }
  }
  if ( v62 | v63 )
  {
    __asm
    {
      vmulss  xmm1, xmm6, xmm8
      vmulss  xmm0, xmm4, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm5
      vaddss  xmm4, xmm2, xmm1
      vcomiss xmm4, cs:__real@3f59999a
      vmovss  xmm0, cs:__real@be199998
      vcomiss xmm5, xmm0
      vcomiss xmm4, cs:__real@3f000000
    }
    result = 0i64;
  }
  else
  {
    result = 1i64;
  }
  _R11 = &v98;
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
Path_ClaimNode
==============
*/
void Path_ClaimNode(pathnode_t *claimNode, sentient_s *claimer)
{
  sentient_s *v2; 
  __int64 NodeTeam; 
  const char *GameType; 
  unsigned int v6; 
  unsigned int v7; 
  const char *v8; 
  int v9; 
  int v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  unsigned int v14; 
  unsigned int v15; 
  const char *v16; 
  int v17; 
  int v18; 
  const char *v19; 
  int v20; 
  SentientHandle *v21; 
  __int64 v22; 
  unsigned __int16 v23; 
  pathnode_t *v24; 
  const char *v25; 
  char v26; 
  unsigned int v27; 
  __int64 v28; 
  unsigned int v29; 
  const char *v30; 
  int v31; 
  int v32; 
  const char *v33; 
  int v34; 
  SentientHandle *v35; 
  bool v36; 
  const char *v37; 
  char v38; 
  unsigned int v39; 
  __int64 v40; 
  unsigned int v41; 
  const char *v42; 
  int v43; 
  int v44; 
  const char *v45; 
  int v46; 
  unsigned __int8 v47; 
  bool v48; 
  char v49; 
  int v50; 
  SentientHandle *v51; 
  const char *v52; 
  char v53; 
  unsigned int v54; 
  __int64 v55; 
  unsigned int v56; 
  const char *v57; 
  int v58; 
  int v59; 
  const char *v60; 
  int v61; 
  unsigned __int16 number; 
  int v63; 
  gentity_s *ent; 
  unsigned __int64 v65; 
  unsigned __int64 v66; 
  unsigned __int16 v67; 
  __int64 v68; 
  gentity_s *v69; 
  unsigned __int64 v70; 
  unsigned __int64 v71; 
  __int64 v72; 
  SentientHandle *v73; 
  const char *v74; 
  char v75; 
  unsigned int v76; 
  __int64 v77; 
  unsigned int v78; 
  const char *v79; 
  int v80; 
  int v81; 
  const char *v82; 
  int v83; 
  const char *v84; 
  char v85; 
  unsigned int v86; 
  __int64 v87; 
  unsigned int v88; 
  const char *v89; 
  int v90; 
  int v91; 
  const char *v92; 
  int v93; 
  const char *v94; 
  char v95; 
  unsigned int v96; 
  __int64 v97; 
  unsigned int v98; 
  const char *v99; 
  int v100; 
  int v101; 
  const char *v102; 
  int v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  int v107; 
  __int64 v109; 

  v2 = claimer;
  if ( !claimNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9833, ASSERT_TYPE_ASSERT, "(claimNode)", (const char *)&queryFormat, "claimNode") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9834, ASSERT_TYPE_ASSERT, "(claimer)", (const char *)&queryFormat, "claimer") )
    __debugbreak();
  NodeTeam = Path_GetNodeTeam(v2->eTeam);
  if ( !Path_IsOnlyOwner(claimNode, v2) )
  {
    if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
      v6 = 0;
    else
      v6 = NodeTeam;
    if ( !claimNode )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 413, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v8 = SV_GameMP_GetGameType();
      v9 = *(unsigned __int8 *)v8 - (unsigned __int8)aBr_2[0];
      if ( !v9 )
      {
        v9 = *((unsigned __int8 *)v8 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v9 )
          v9 = *((unsigned __int8 *)v8 + 2) - (unsigned __int8)aBr_2[2];
      }
      v7 = (v9 != 0) + 1;
    }
    else
    {
      v7 = 1;
    }
    if ( v6 >= v7 )
    {
      if ( !claimNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        v11 = SV_GameMP_GetGameType();
        v12 = *(unsigned __int8 *)v11 - (unsigned __int8)aBr_2[0];
        if ( !v12 )
        {
          v12 = *((unsigned __int8 *)v11 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v12 )
            v12 = *((unsigned __int8 *)v11 + 2) - (unsigned __int8)aBr_2[2];
        }
        v10 = (v12 != 0) + 1;
      }
      else
      {
        v10 = 1;
      }
      LODWORD(v104) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 414, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v104, v10) )
        __debugbreak();
    }
    if ( claimNode->dynamic.iFreeTime[v6] > level.time )
    {
      if ( !BG_BotSystemEnabled() || (v13 = SV_GameMP_GetGameType(), *v13 == aBr_2[0]) && v13[1] == aBr_2[1] && v13[2] == aBr_2[2] )
        v14 = 0;
      else
        v14 = NodeTeam;
      if ( !claimNode )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 413, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
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
        if ( !claimNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
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
        LODWORD(v105) = v18;
        LODWORD(v104) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 414, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v104, v105) )
          __debugbreak();
      }
      LODWORD(v104) = claimNode->dynamic.iFreeTime[v14];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9838, ASSERT_TYPE_ASSERT, "( ( Path_IsOnlyOwner( claimNode, claimer ) || ( Path_NodeGetFreeTime( claimNode, nodeTeam ) <= level.time ) ) )", "( Path_NodeGetFreeTime( claimNode, nodeTeam ) ) = %i", v104) )
        __debugbreak();
    }
  }
  if ( (unsigned int)NodeTeam >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
  {
    LODWORD(v105) = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2;
    LODWORD(v104) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9839, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v104, v105) )
      __debugbreak();
  }
  if ( Path_GetNodeOwnerCount(claimNode, NodeTeam) && !Path_IsOnlyOwner(claimNode, v2) && level.time <= claimNode->dynamic.iValidTime[NodeTeam] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9840, ASSERT_TYPE_ASSERT, "(Path_GetNodeOwnerCount( claimNode, nodeTeam ) == 0 || Path_IsOnlyOwner( claimNode, claimer ) || ( level.time > claimNode->dynamic.iValidTime[nodeTeam] ))", (const char *)&queryFormat, "Path_GetNodeOwnerCount( claimNode, nodeTeam ) == 0 || Path_IsOnlyOwner( claimNode, claimer ) || ( level.time > claimNode->dynamic.iValidTime[nodeTeam] )") )
    __debugbreak();
  v21 = Path_NodeOwnerSentHandle(claimNode, NodeTeam);
  SentientHandle::setSentient(v21, v2);
  if ( !claimNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 433, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  Path_NodeSetFreeTime(claimNode, NodeTeam, 0x7FFFFFFF);
  v22 = 0i64;
  v107 = 0;
  v109 = 0i64;
  do
  {
    v23 = claimNode->constant.wOverlapNode[v22];
    if ( v23 == 0xFFFF )
      break;
    v24 = &pathData.nodes[v23];
    if ( !BG_BotSystemEnabled() || (v25 = SV_GameMP_GetGameType(), *v25 == aBr_2[0]) && v25[1] == aBr_2[1] && v25[2] == aBr_2[2] )
    {
      v27 = 0;
      v26 = 1;
    }
    else
    {
      v26 = 0;
      v27 = NodeTeam;
    }
    v28 = NodeTeam;
    if ( v26 )
      v28 = 0i64;
    if ( !v24 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v30 = SV_GameMP_GetGameType();
      v31 = *(unsigned __int8 *)v30 - (unsigned __int8)aBr_2[0];
      if ( !v31 )
      {
        v31 = *((unsigned __int8 *)v30 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v31 )
          v31 = *((unsigned __int8 *)v30 + 2) - (unsigned __int8)aBr_2[2];
      }
      v29 = (v31 != 0) + 1;
    }
    else
    {
      v29 = 1;
    }
    if ( v27 >= v29 )
    {
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        v33 = SV_GameMP_GetGameType();
        v34 = *(unsigned __int8 *)v33 - (unsigned __int8)aBr_2[0];
        if ( !v34 )
        {
          v34 = *((unsigned __int8 *)v33 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v34 )
            v34 = *((unsigned __int8 *)v33 + 2) - (unsigned __int8)aBr_2[2];
        }
        v32 = (v34 != 0) + 1;
      }
      else
      {
        v32 = 1;
      }
      LODWORD(v105) = v32;
      LODWORD(v104) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v104, v105) )
        __debugbreak();
    }
    v35 = &v24->dynamic.pOwners[v28];
    v36 = SentientHandle::isDefined(v35) && SentientHandle::sentient(&v24->dynamic.pOwners[v28]) == v2;
    if ( !BG_BotSystemEnabled() || (v37 = SV_GameMP_GetGameType(), *v37 == aBr_2[0]) && v37[1] == aBr_2[1] && v37[2] == aBr_2[2] )
    {
      v38 = 1;
      v39 = 0;
    }
    else
    {
      v38 = 0;
      v39 = NodeTeam;
    }
    v40 = NodeTeam;
    if ( v38 )
      v40 = 0i64;
    if ( !v24 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 402, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v42 = SV_GameMP_GetGameType();
      v43 = *(unsigned __int8 *)v42 - (unsigned __int8)aBr_2[0];
      if ( !v43 )
      {
        v43 = *((unsigned __int8 *)v42 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v43 )
          v43 = *((unsigned __int8 *)v42 + 2) - (unsigned __int8)aBr_2[2];
      }
      v41 = (v43 != 0) + 1;
    }
    else
    {
      v41 = 1;
    }
    if ( v39 >= v41 )
    {
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        v45 = SV_GameMP_GetGameType();
        v46 = *(unsigned __int8 *)v45 - (unsigned __int8)aBr_2[0];
        if ( !v46 )
        {
          v46 = *((unsigned __int8 *)v45 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v46 )
            v46 = *((unsigned __int8 *)v45 + 2) - (unsigned __int8)aBr_2[2];
        }
        v44 = (v46 != 0) + 1;
      }
      else
      {
        v44 = 1;
      }
      LODWORD(v105) = v44;
      LODWORD(v104) = v39;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 403, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v104, v105) )
        __debugbreak();
    }
    v47 = v24->dynamic.wOverlapCount[v40];
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 444, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    v48 = Path_NodeGetFreeTime(v24, NodeTeam) == 0x7FFFFFFF;
    if ( !v36 && !v47 && v48 )
    {
      v49 = 0;
      if ( Path_NodeMaxNumTeamOwners(claimNode) <= 1 )
        goto LABEL_169;
      v50 = 0;
      if ( Path_NodeMaxNumTeamOwners(v24) <= 0 )
        goto LABEL_169;
      do
      {
        if ( v50 != (_DWORD)NodeTeam )
        {
          if ( v49 || (v51 = (SentientHandle *)Path_NodeOwnerSentHandleConst(v24, v50), SentientHandle::isDefined(v51)) )
            v49 = 1;
          if ( v36 || Path_GetNumClaimedOverlapNodes(v24, v50) > 0 )
            v36 = 1;
        }
        ++v50;
      }
      while ( v50 < Path_NodeMaxNumTeamOwners(v24) );
      if ( !v49 && !v36 )
      {
LABEL_169:
        if ( !BG_BotSystemEnabled() || (v52 = SV_GameMP_GetGameType(), *v52 == aBr_2[0]) && v52[1] == aBr_2[1] && v52[2] == aBr_2[2] )
        {
          v53 = 1;
          v54 = 0;
        }
        else
        {
          v53 = 0;
          v54 = NodeTeam;
        }
        v55 = NodeTeam;
        if ( v53 )
          v55 = 0i64;
        if ( !v24 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 413, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
        }
        if ( BG_BotSystemEnabled() )
        {
          v57 = SV_GameMP_GetGameType();
          v58 = *(unsigned __int8 *)v57 - (unsigned __int8)aBr_2[0];
          if ( !v58 )
          {
            v58 = *((unsigned __int8 *)v57 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v58 )
              v58 = *((unsigned __int8 *)v57 + 2) - (unsigned __int8)aBr_2[2];
          }
          v56 = (v58 != 0) + 1;
        }
        else
        {
          v56 = 1;
        }
        if ( v54 >= v56 )
        {
          if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( BG_BotSystemEnabled() )
          {
            v60 = SV_GameMP_GetGameType();
            v61 = *(unsigned __int8 *)v60 - (unsigned __int8)aBr_2[0];
            if ( !v61 )
            {
              v61 = *((unsigned __int8 *)v60 + 1) - (unsigned __int8)aBr_2[1];
              if ( !v61 )
                v61 = *((unsigned __int8 *)v60 + 2) - (unsigned __int8)aBr_2[2];
            }
            v59 = (v61 != 0) + 1;
          }
          else
          {
            v59 = 1;
          }
          LODWORD(v105) = v59;
          LODWORD(v104) = v54;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 414, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v104, v105) )
            __debugbreak();
        }
        number = v35->number;
        v63 = v24->dynamic.iFreeTime[v55];
        if ( !v35->number )
          goto LABEL_246;
        if ( !level.sentients[number - 1].ent )
        {
          LODWORD(v105) = number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 136, ASSERT_TYPE_ASSERT, "( ( !number || level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( !number || level.sentients[number - 1].ent )", v105) )
            __debugbreak();
        }
        if ( !v35->number )
          goto LABEL_246;
        ent = level.sentients[v35->number - 1].ent;
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v65 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
        v66 = (v65 >> 63) + v65;
        if ( (unsigned int)v66 >= 0x800 )
        {
          LODWORD(v105) = 2048;
          LODWORD(v104) = v66;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v104, v105) )
            __debugbreak();
        }
        v66 = (__int16)v66;
        if ( (unsigned int)(__int16)v66 >= 0x800 )
        {
          LODWORD(v105) = 2048;
          LODWORD(v104) = v66;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v104, v105) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v66].r.isInUse != g_entityIsInUse[v66] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v66] )
        {
          LODWORD(v105) = v35->number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 137, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v105) )
            __debugbreak();
        }
        v67 = v35->number;
        if ( v35->number )
        {
          if ( (unsigned int)v67 - 1 >= level.maxSentients )
          {
            LODWORD(v105) = level.maxSentients;
            LODWORD(v104) = v67 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( level.maxSentients )", "number - 1 doesn't index level.maxSentients\n\t%i not in [0, %i)", v104, v105) )
              __debugbreak();
          }
          v68 = v35->number;
          if ( !level.sentients[v68 - 1].ent )
          {
            LODWORD(v105) = v68 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 146, ASSERT_TYPE_ASSERT, "( ( level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( level.sentients[number - 1].ent )", v105) )
              __debugbreak();
          }
          v69 = level.sentients[v35->number - 1].ent;
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v70 = (__int64)((unsigned __int128)(((char *)v69 - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
          v71 = (v70 >> 63) + v70;
          if ( (unsigned int)v71 >= 0x800 )
          {
            LODWORD(v105) = 2048;
            LODWORD(v104) = v71;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v104, v105) )
              __debugbreak();
          }
          v71 = (__int16)v71;
          if ( (unsigned int)(__int16)v71 >= 0x800 )
          {
            LODWORD(v105) = 2048;
            LODWORD(v104) = v71;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v104, v105) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v71].r.isInUse != g_entityIsInUse[v71] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v71] )
          {
            LODWORD(v105) = v35->number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 147, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v105) )
              __debugbreak();
          }
          v72 = (184i64 * v35->number - 184) / 184;
        }
        else
        {
LABEL_246:
          v72 = -1i64;
        }
        LODWORD(v106) = v63;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9890, ASSERT_TYPE_ASSERT, "(claimedByOtherTeam || overlapsClaimByOtherTeam)", "%s\n\tnode = %zi, owner = %zi, free time = %i", "claimedByOtherTeam || overlapsClaimByOtherTeam", v24 - pathData.nodes, v72, v106) )
          __debugbreak();
      }
    }
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9817, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    v73 = Path_NodeOwnerSentHandle(v24, NodeTeam);
    SentientHandle::setSentient(v73, NULL);
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 433, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    Path_NodeSetFreeTime(v24, NodeTeam, 0x7FFFFFFF);
    Path_AddToNumClaimedOverlapNodes(v24, NodeTeam, 1);
    if ( !BG_BotSystemEnabled() || (v74 = SV_GameMP_GetGameType(), *v74 == aBr_2[0]) && v74[1] == aBr_2[1] && v74[2] == aBr_2[2] )
    {
      v75 = 1;
      v76 = 0;
    }
    else
    {
      v75 = 0;
      v76 = NodeTeam;
    }
    v77 = NodeTeam;
    if ( v75 )
      v77 = 0i64;
    if ( !v24 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 402, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v79 = SV_GameMP_GetGameType();
      v80 = *(unsigned __int8 *)v79 - (unsigned __int8)aBr_2[0];
      if ( !v80 )
      {
        v80 = *((unsigned __int8 *)v79 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v80 )
          v80 = *((unsigned __int8 *)v79 + 2) - (unsigned __int8)aBr_2[2];
      }
      v78 = (v80 != 0) + 1;
    }
    else
    {
      v78 = 1;
    }
    if ( v76 >= v78 )
    {
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        v82 = SV_GameMP_GetGameType();
        v83 = *(unsigned __int8 *)v82 - (unsigned __int8)aBr_2[0];
        if ( !v83 )
        {
          v83 = *((unsigned __int8 *)v82 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v83 )
            v83 = *((unsigned __int8 *)v82 + 2) - (unsigned __int8)aBr_2[2];
        }
        v81 = (v83 != 0) + 1;
      }
      else
      {
        v81 = 1;
      }
      LODWORD(v105) = v81;
      LODWORD(v104) = v76;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 403, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v104, v105) )
        __debugbreak();
    }
    if ( v24->dynamic.wOverlapCount[v77] >= 3u )
    {
      if ( !BG_BotSystemEnabled() || (v84 = SV_GameMP_GetGameType(), *v84 == aBr_2[0]) && v84[1] == aBr_2[1] && v84[2] == aBr_2[2] )
      {
        v86 = 0;
        v85 = 1;
      }
      else
      {
        v85 = 0;
        v86 = NodeTeam;
      }
      v87 = NodeTeam;
      if ( v85 )
        v87 = 0i64;
      if ( !v24 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 402, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v89 = SV_GameMP_GetGameType();
        v90 = *(unsigned __int8 *)v89 - (unsigned __int8)aBr_2[0];
        if ( !v90 )
        {
          v90 = *((unsigned __int8 *)v89 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v90 )
            v90 = *((unsigned __int8 *)v89 + 2) - (unsigned __int8)aBr_2[2];
        }
        v88 = (v90 != 0) + 1;
      }
      else
      {
        v88 = 1;
      }
      if ( v86 >= v88 )
      {
        if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          v92 = SV_GameMP_GetGameType();
          v93 = *(unsigned __int8 *)v92 - (unsigned __int8)aBr_2[0];
          if ( !v93 )
          {
            v93 = *((unsigned __int8 *)v92 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v93 )
              v93 = *((unsigned __int8 *)v92 + 2) - (unsigned __int8)aBr_2[2];
          }
          v91 = (v93 != 0) + 1;
        }
        else
        {
          v91 = 1;
        }
        LODWORD(v105) = v91;
        LODWORD(v104) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 403, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v104, v105) )
          __debugbreak();
      }
      LODWORD(v105) = 3;
      LODWORD(v104) = v24->dynamic.wOverlapCount[v87];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9896, ASSERT_TYPE_ASSERT, "(unsigned)( Path_GetNumClaimedOverlapNodes( overlapNode, nodeTeam ) ) < (unsigned)( ( sizeof( *array_counter( overlapNode->constant.wOverlapNode ) ) + 0 ) + 1 )", "Path_GetNumClaimedOverlapNodes( overlapNode, nodeTeam ) doesn't index ARRAY_COUNT( overlapNode->constant.wOverlapNode ) + 1\n\t%i not in [0, %i)", v104, v105) )
        __debugbreak();
    }
    if ( !BG_BotSystemEnabled() || (v94 = SV_GameMP_GetGameType(), *v94 == aBr_2[0]) && v94[1] == aBr_2[1] && v94[2] == aBr_2[2] )
    {
      v96 = 0;
      v95 = 1;
    }
    else
    {
      v95 = 0;
      v96 = NodeTeam;
    }
    v97 = NodeTeam;
    if ( v95 )
      v97 = 0i64;
    if ( !v24 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 402, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v99 = SV_GameMP_GetGameType();
      v100 = *(unsigned __int8 *)v99 - (unsigned __int8)aBr_2[0];
      if ( !v100 )
      {
        v100 = *((unsigned __int8 *)v99 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v100 )
          v100 = *((unsigned __int8 *)v99 + 2) - (unsigned __int8)aBr_2[2];
      }
      v98 = (v100 != 0) + 1;
    }
    else
    {
      v98 = 1;
    }
    if ( v96 >= v98 )
    {
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        v102 = SV_GameMP_GetGameType();
        v103 = *(unsigned __int8 *)v102 - (unsigned __int8)aBr_2[0];
        if ( !v103 )
        {
          v103 = *((unsigned __int8 *)v102 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v103 )
            v103 = *((unsigned __int8 *)v102 + 2) - (unsigned __int8)aBr_2[2];
        }
        v101 = (v103 != 0) + 1;
      }
      else
      {
        v101 = 1;
      }
      LODWORD(v105) = v101;
      LODWORD(v104) = v96;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 403, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v104, v105) )
        __debugbreak();
    }
    if ( *((_WORD *)&v24->constant.error + v24->dynamic.wOverlapCount[v97] + 1) == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9897, ASSERT_TYPE_ASSERT, "(overlapNode->constant.wOverlapNode[Path_GetNumClaimedOverlapNodes( overlapNode, nodeTeam ) - 1] != 0xffff)", (const char *)&queryFormat, "overlapNode->constant.wOverlapNode[Path_GetNumClaimedOverlapNodes( overlapNode, nodeTeam ) - 1] != PATHNODE_INVALID") )
      __debugbreak();
    v2 = claimer;
    v22 = v109 + 1;
    ++v107;
    ++v109;
  }
  while ( v107 < 2 );
  Path_ClaimNodeInternal(claimNode, v2);
}

/*
==============
Path_ClaimNodeInternal
==============
*/
void Path_ClaimNodeInternal(pathnode_t *node, sentient_s *claimer)
{
  AIWrapper v4; 

  if ( !claimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9801, ASSERT_TYPE_ASSERT, "(claimer)", (const char *)&queryFormat, "claimer") )
    __debugbreak();
  if ( !claimer->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9802, ASSERT_TYPE_ASSERT, "(claimer->ent)", (const char *)&queryFormat, "claimer->ent") )
    __debugbreak();
  AIWrapper::AIWrapper(&v4, claimer->ent);
  if ( v4.m_pAI && AIScriptedInterface::KeepClaimedNode(v4.m_pAI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9806, ASSERT_TYPE_ASSERT, "(!pAI || !pAI->KeepClaimedNode())", (const char *)&queryFormat, "!pAI || !pAI->KeepClaimedNode()") )
    __debugbreak();
  claimer->pClaimedNode = node;
  claimer->banNodeTime = 0;
  Sentient_BanNearNodes(claimer, 0);
}

/*
==============
Path_ClearAllNodeTransientData
==============
*/
void Path_ClearAllNodeTransientData(void)
{
  unsigned __int64 i; 
  pathnode_t *nodes; 
  unsigned __int64 v2; 

  for ( i = 0i64; (unsigned int)i < g_path.actualNodeCount; *(_QWORD *)&nodes[v2].transient.nodeCost = 0i64 )
  {
    nodes = pathData.nodes;
    v2 = i;
    i = (unsigned int)(i + 1);
    *(_QWORD *)&pathData.nodes[v2].transient.iSearchFrame = 0i64;
    nodes[v2].transient.pNextOpen = NULL;
    nodes[v2].transient.pPrevOpen = NULL;
    nodes[v2].transient.pParent = NULL;
    *(_QWORD *)&nodes[v2].transient.fCost = 0i64;
  }
}

/*
==============
Path_CompareNodesIncreasing
==============
*/
char Path_CompareNodesIncreasing(const pathsort_s *ps1, const pathsort_s *ps2)
{
  __int16 wLinkCount; 

  wLinkCount = ps2->node->dynamic.wLinkCount;
  if ( ps1->node->dynamic.wLinkCount )
  {
    if ( !wLinkCount )
      return 1;
  }
  else if ( wLinkCount )
  {
    return 0;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vcomiss xmm0, dword ptr [rdx+8]
  }
  return 0;
}

/*
==============
Path_CompareNodesIncreasingDistOnly
==============
*/
bool Path_CompareNodesIncreasingDistOnly(const pathsort_s *ps1, const pathsort_s *ps2)
{
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vcomiss xmm0, dword ptr [rdx+8]
  }
  return v2;
}

/*
==============
Path_ConnectPathsForEntity
==============
*/
void Path_ConnectPathsForEntity(gentity_s *ent)
{
  Nav_DestroyObstacleByEnt(ent);
  if ( (ent->flags.m_flags[0] & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10319, ASSERT_TYPE_ASSERT, "(Path_IsDynamicBlockingEntity( ent ))", (const char *)&queryFormat, "Path_IsDynamicBlockingEntity( ent )") )
    __debugbreak();
  ent->flags.m_flags[0] |= 0x100u;
}

/*
==============
Path_ConvertIndexToNode
==============
*/
pathnode_t *Path_ConvertIndexToNode(unsigned __int16 index)
{
  if ( index == 0xFFFF )
    return 0i64;
  if ( index >= g_path.actualNodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", index, g_path.actualNodeCount) )
    __debugbreak();
  return &pathData.nodes[index];
}

/*
==============
Path_ConvertNodeToIndex
==============
*/
__int64 Path_ConvertNodeToIndex(const pathnode_t *node)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  __int64 v5; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5326, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v2 = (__int64)((unsigned __int128)(((char *)node - (char *)pathData.nodes) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 5;
  v3 = (v2 >> 63) + v2;
  if ( (unsigned int)v3 >= g_path.actualNodeCount )
  {
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5329, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( g_path.actualNodeCount )", "nodeIndex doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v5, g_path.actualNodeCount) )
      __debugbreak();
  }
  return (unsigned __int16)v3;
}

/*
==============
Path_ConvertZoneIndexToZone
==============
*/
pathnode_t *Path_ConvertZoneIndexToZone(int zoneIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  if ( !pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8556, ASSERT_TYPE_ASSERT, "(pathData.zoneCount)", (const char *)&queryFormat, "pathData.zoneCount") )
    __debugbreak();
  if ( zoneIndex == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8557, ASSERT_TYPE_ASSERT, "(zoneIndex != 255)", (const char *)&queryFormat, "zoneIndex != PATH_INVALID_ZONE") )
    __debugbreak();
  if ( (unsigned int)zoneIndex >= pathData.zoneCount )
  {
    LODWORD(v4) = zoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8558, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( pathData.zoneCount )", "zoneIndex doesn't index pathData.zoneCount\n\t%i not in [0, %i)", v4, pathData.zoneCount) )
      __debugbreak();
  }
  if ( g_path.extraNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8560, ASSERT_TYPE_ASSERT, "(g_path.extraNodes == 0)", (const char *)&queryFormat, "g_path.extraNodes == 0") )
    __debugbreak();
  v2 = zoneIndex + pathData.nodeCount - pathData.zoneCount;
  if ( (unsigned int)v2 >= g_path.actualNodeCount )
  {
    LODWORD(v5) = g_path.actualNodeCount;
    LODWORD(v4) = zoneIndex + pathData.nodeCount - pathData.zoneCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8564, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( g_path.actualNodeCount )", "nodeIndex doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return &pathData.nodes[v2];
}

/*
==============
Path_ConvertZoneToZoneIndex
==============
*/
__int64 Path_ConvertZoneToZoneIndex(const pathnode_t *zoneNode)
{
  unsigned __int64 v2; 
  unsigned int v3; 
  __int64 v5; 

  if ( !zoneNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8540, ASSERT_TYPE_ASSERT, "(zoneNode)", (const char *)&queryFormat, "zoneNode") )
    __debugbreak();
  if ( !pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8541, ASSERT_TYPE_ASSERT, "(pathData.zoneCount)", (const char *)&queryFormat, "pathData.zoneCount") )
    __debugbreak();
  if ( g_path.extraNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8543, ASSERT_TYPE_ASSERT, "(g_path.extraNodes == 0)", (const char *)&queryFormat, "g_path.extraNodes == 0") )
    __debugbreak();
  v2 = (__int64)((unsigned __int128)(((char *)zoneNode - (char *)pathData.nodes) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 5;
  v3 = pathData.zoneCount + (v2 >> 63) + v2 - pathData.nodeCount;
  if ( v3 >= pathData.zoneCount )
  {
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8547, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( pathData.zoneCount )", "zoneIndex doesn't index pathData.zoneCount\n\t%i not in [0, %i)", v5, pathData.zoneCount) )
      __debugbreak();
  }
  return v3;
}

/*
==============
Path_DebugDrawJumpNodeLinks
==============
*/
unsigned __int16 Path_DebugDrawJumpNodeLinks()
{
  unsigned __int16 v9; 
  unsigned __int16 result; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  pathnode_t *v35; 
  pathnode_t *v47; 
  unsigned __int16 type; 
  pathnode_t *v54; 
  bool v55; 
  char v56; 
  const vec4_t *v69; 
  vec3_t *p_pointB; 
  vec3_t *p_pointCenter; 
  vec3_t pos; 
  vec3_t outPos; 
  vec3_t end; 
  vec3_t v82; 
  PathJumpLinkWorkData workData; 
  trace_t results; 
  char v87; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
  _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  __asm { vmovss  xmm3, cs:__real@467a0000 }
  v9 = 0;
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [rax+6944h]
    vmovss  xmm2, dword ptr [rax+6948h]
    vmovss  xmm4, dword ptr [rax+694Ch]
    vaddss  xmm1, xmm0, dword ptr [rsp+1A0h+outPos]
    vmulss  xmm2, xmm3, xmm2
    vaddss  xmm0, xmm2, dword ptr [rsp+1A0h+outPos+4]
    vmovss  dword ptr [rsp+1A0h+end], xmm1
    vmulss  xmm1, xmm3, xmm4
    vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+outPos+8]
    vmovss  dword ptr [rsp+1A0h+end+8], xmm2
    vmovss  dword ptr [rsp+1A0h+end+4], xmm0
  }
  G_Main_TraceCapsule(&results, &outPos, &end, &bounds_origin, 0, 33685521);
  __asm
  {
    vmovss  xmm5, [rbp+0A0h+results.fraction]
    vmovss  xmm0, dword ptr [rsp+1A0h+end]
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+outPos]
    vmovss  xmm0, dword ptr [rsp+1A0h+end+4]
  }
  result = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount);
  v23 = -1;
  v24 = 0;
  __asm
  {
    vmovss  xmm6, cs:__real@4d742400
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm7, xmm1, dword ptr [rsp+1A0h+outPos]
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+outPos+4]
    vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+outPos+8]
    vaddss  xmm8, xmm2, dword ptr [rsp+1A0h+outPos+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm9, xmm2, dword ptr [rsp+1A0h+outPos+8]
  }
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
  {
    do
    {
      if ( Path_NodeValid(v24) )
      {
        v35 = &pathData.nodes[v24];
        if ( (unsigned __int16)(v35->constant.type - 29) <= 1u )
        {
          pathnode_t::GetPos(v35, &pos);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1A0h+pos]
            vmovss  xmm1, dword ptr [rsp+1A0h+pos+4]
            vsubss  xmm3, xmm0, xmm7
            vmovss  xmm0, dword ptr [rsp+1A0h+pos+8]
            vsubss  xmm2, xmm1, xmm8
            vsubss  xmm4, xmm0, xmm9
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
            vcomiss xmm5, xmm6
          }
          if ( v55 )
          {
            __asm { vmovaps xmm6, xmm5 }
            v23 = v24;
          }
        }
      }
      result = ++v24;
    }
    while ( v24 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
    if ( v23 != 0xFFFF )
    {
      v47 = &pathData.nodes[v23];
      type = v47->constant.type;
      v55 = type == 29;
      result = type - 29;
      if ( (v55 || result == 1) && (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
      {
        __asm
        {
          vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm8, cs:__real@461c4000
          vmovss  xmm9, cs:__real@42000000
          vmovaps [rsp+1A0h+var_70], xmm10
          vmovss  xmm10, cs:__real@48800000
          vmovaps [rsp+1A0h+var_80], xmm11
          vmovss  xmm11, cs:__real@43840000
        }
        while ( 1 )
        {
          if ( !Path_NodeValid(v9) )
            goto LABEL_29;
          v54 = &pathData.nodes[v9];
          if ( v9 == v23 )
            goto LABEL_29;
          if ( (unsigned __int16)(v54->constant.type - 29) > 1u )
            goto LABEL_29;
          pathnode_t::GetPos(v47, &pos);
          pathnode_t::GetPos(v54, &v82);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1A0h+var_140]
            vsubss  xmm2, xmm0, dword ptr [rsp+1A0h+pos]
            vmovss  xmm0, dword ptr [rsp+1A0h+var_140+8]
            vsubss  xmm6, xmm0, dword ptr [rsp+1A0h+pos+8]
            vcomiss xmm6, xmm11
            vmovss  xmm1, dword ptr [rsp+1A0h+var_140+4]
            vsubss  xmm3, xmm1, dword ptr [rsp+1A0h+pos+4]
          }
          if ( !(v55 | v56) )
            goto LABEL_29;
          __asm
          {
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm3, xmm2, xmm1
            vcomiss xmm3, xmm10
          }
          if ( !v55 )
            goto LABEL_29;
          __asm { vcomiss xmm3, xmm8 }
          if ( v55 | v56 )
          {
            v69 = &colorRed;
          }
          else
          {
            if ( Path_IsOrientedNodeUpright(v47) && Path_IsOrientedNodeUpright(v54) )
            {
              __asm
              {
                vandps  xmm6, xmm6, xmm7
                vcomiss xmm6, xmm9
              }
            }
            if ( Path_CheckValidJumpAngles(v47, v54) )
            {
              if ( Path_AttemptAccurateTrajectoryJumpLink(v47, v54, &workData) )
              {
                G_DebugLine(&workData.pointA, &workData.pointCenter, &colorCyan, 0);
                v69 = &colorCyan;
              }
              else
              {
                G_DebugLine(&workData.pointA, &workData.pointCenter, &colorMagenta, 0);
                v69 = &colorMagenta;
              }
              p_pointB = &workData.pointB;
              p_pointCenter = &workData.pointCenter;
              goto LABEL_28;
            }
            v69 = &colorRedFaded;
          }
          p_pointCenter = &pos;
          p_pointB = &v82;
LABEL_28:
          G_DebugLine(p_pointCenter, p_pointB, v69, 0);
LABEL_29:
          result = ++v9;
          if ( v9 >= (signed int)(g_path.actualNodeCount - pathData.zoneCount) )
          {
            __asm
            {
              vmovaps xmm11, [rsp+1A0h+var_80]
              vmovaps xmm10, [rsp+1A0h+var_70]
            }
            break;
          }
        }
      }
    }
  }
  _R11 = &v87;
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
Path_DebugNodeColor
==============
*/
const vec4_t *Path_DebugNodeColor(const pathnode_t *node)
{
  return &nodeColorTable[node->constant.type];
}

/*
==============
Path_DespawnNode
==============
*/
void Path_DespawnNode(unsigned __int16 nodeIndex)
{
  pathnode_t *v2; 
  unsigned __int64 SpawnedNodeIndex; 

  if ( Path_NodeValid(nodeIndex) )
  {
    SpawnedNode_Dissociate(nodeIndex);
    v2 = &pathData.nodes[nodeIndex];
    Scr_SetString(&v2->constant.targetname, (scr_string_t)0);
    Scr_SetString(&v2->constant.animscript, (scr_string_t)0);
    Scr_FreePathnode(v2);
    SpawnedNodeIndex = Path_GetSpawnedNodeIndex(nodeIndex);
    if ( SpawnedNodeIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 159, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    g_path.spawnedNodesValid.m_data[SpawnedNodeIndex >> 6] &= ~(0x8000000000000000ui64 >> (SpawnedNodeIndex & 0x3F));
  }
}

/*
==============
Path_DisconnectPathsForEntity
==============
*/
void Path_DisconnectPathsForEntity(gentity_s *ent, bool bNow)
{
  nav_space_s *SpaceByEntity; 
  nav_space_s *MostLikelySpace; 

  if ( (ent->flags.m_flags[0] & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10389, ASSERT_TYPE_ASSERT, "(Path_IsDynamicBlockingEntity( ent ))", (const char *)&queryFormat, "Path_IsDynamicBlockingEntity( ent )") )
    __debugbreak();
  Nav_DestroyObstacleByEnt(ent);
  if ( (ent->flags.m_flags[0] & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10319, ASSERT_TYPE_ASSERT, "(Path_IsDynamicBlockingEntity( ent ))", (const char *)&queryFormat, "Path_IsDynamicBlockingEntity( ent )") )
    __debugbreak();
  ent->flags.m_flags[0] |= 0x100u;
  SpaceByEntity = Nav_GetSpaceByEntity(ent);
  MostLikelySpace = Nav_FindMostLikelySpace(&ent->r.currentOrigin, NAV_LAYER_HUMAN, SpaceByEntity);
  if ( MostLikelySpace )
  {
    __asm { vmovss  xmm2, cs:__real@41700000; penalty }
    Nav_CreateObstacleByEnt(MostLikelySpace, ent, *(float *)&_XMM2, 0xFFFFFFFF, 0xFFFFE07F, bNow, 0);
  }
  ent->flags.m_flags[0] &= ~0x100u;
  ent->iDisconnectTime = level.time;
}

/*
==============
Path_DoesNodeAllowStance
==============
*/
char Path_DoesNodeAllowStance(const pathnode_t *node, const scr_string_t stance)
{
  int v3; 
  unsigned int spawnflags; 
  unsigned __int16 type; 
  __int16 turretEntNumber; 
  int v7; 

  if ( stance == scr_const.stand )
  {
    v3 = 4;
  }
  else if ( stance == scr_const.crouch )
  {
    v3 = 8;
  }
  else
  {
    v3 = 0;
    if ( stance == scr_const.prone )
      v3 = 16;
  }
  spawnflags = node->constant.spawnflags;
  if ( (node->constant.spawnflags & v3) != 0 )
    return 0;
  type = node->constant.type;
  turretEntNumber = type;
  if ( ((1 << type) & 0x82641EFC) == 0 )
    return 1;
  if ( type == 31 )
    turretEntNumber = node->dynamic.turretEntNumber;
  if ( turretEntNumber != 7 )
  {
    if ( turretEntNumber == 6 )
    {
      if ( stance == scr_const.stand )
      {
        v7 = 2048;
      }
      else
      {
        if ( stance != scr_const.crouch )
          return stance != scr_const.stand || (unsigned __int16)(turretEntNumber - 6) > 1u || (spawnflags & 0x200) == 0;
        v7 = 0x400000;
      }
    }
    else
    {
      if ( turretEntNumber == 3 )
      {
        v7 = 0x100000;
      }
      else
      {
        if ( turretEntNumber != 2 )
        {
          if ( turretEntNumber == 5 && stance != scr_const.prone )
            return 0;
          return stance != scr_const.stand || (unsigned __int16)(turretEntNumber - 6) > 1u || (spawnflags & 0x200) == 0;
        }
        v7 = 512;
      }
      if ( type != 31 )
        v7 = 0;
      if ( !v7 )
        return stance != scr_const.stand || (unsigned __int16)(turretEntNumber - 6) > 1u || (spawnflags & 0x200) == 0;
    }
LABEL_28:
    if ( (spawnflags & v7) == 0 )
      return 0;
    return stance != scr_const.stand || (unsigned __int16)(turretEntNumber - 6) > 1u || (spawnflags & 0x200) == 0;
  }
  if ( stance == scr_const.stand )
  {
    v7 = 1024;
    goto LABEL_28;
  }
  if ( stance == scr_const.crouch )
  {
    v7 = 0x200000;
    goto LABEL_28;
  }
  return stance != scr_const.stand || (unsigned __int16)(turretEntNumber - 6) > 1u || (spawnflags & 0x200) == 0;
}

/*
==============
Path_DrawDebug
==============
*/
void Path_DrawDebug()
{
  signed __int64 v0; 
  void *v11; 
  unsigned int v12; 
  gclient_s *client; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  __int64 v27; 
  pathnode_t *v28; 
  unsigned int v29; 
  unsigned __int16 v30; 
  char v33; 
  char v34; 
  __int64 v46; 
  unsigned __int16 v47; 
  pathnode_t *v56; 
  const dvar_t *v57; 
  const dvar_t *v58; 
  unsigned int v59; 
  unsigned int v60; 
  int v61; 
  unsigned int RawMax; 
  const dvar_t *v82; 
  const char *v92; 
  const dvar_t *v95; 
  unsigned int Traffic; 
  unsigned int v97; 
  const char *v109; 
  unsigned int v111; 
  pathnode_t *v117; 
  unsigned int v118; 
  const dvar_t *v144; 
  const dvar_t *v145; 
  const char *v146; 
  const vec4_t *v147; 
  const dvar_t *v150; 
  const vec4_t *v151; 
  unsigned __int16 v154; 
  unsigned __int16 v155; 
  const vec4_t *v156; 
  const char *v157; 
  unsigned int v165; 
  unsigned __int16 v174; 
  const vec4_t *v175; 
  unsigned __int16 v176; 
  bool IsNodeIndexExposedSkyBase; 
  unsigned __int16 v178; 
  unsigned int v179; 
  const char *v184; 
  unsigned int v186; 
  int nodeNum; 
  pathnode_t *v189; 
  int v201; 
  unsigned int totalLinkCount; 
  unsigned int v210; 
  __int64 v211; 
  unsigned __int16 v212; 
  const char *v213; 
  int Int_Internal_DebugName; 
  bool v216; 
  unsigned int wLinkCount; 
  unsigned int i; 
  int v223; 
  pathnode_t *v225; 
  char v226; 
  char v227; 
  unsigned __int16 v241; 
  int v242; 
  unsigned int j; 
  pathnode_t *v249; 
  int v278; 
  __int64 v279; 
  __int64 v282; 
  __int64 v283; 
  const pathnode_t **v284; 
  __int64 k; 
  unsigned __int16 m; 
  pathnode_t *v287; 
  unsigned int n; 
  sentient_s *v289; 
  pathnode_t *v290; 
  int v312; 
  const char *v327; 
  pathnode_t *v330; 
  __int64 priority; 
  const char *v343; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 duration; 
  __int64 typeFlags; 
  unsigned __int16 v358; 
  unsigned int v359; 
  vec3_t pos; 
  vec3_t xyz; 
  vec3_t start; 
  vec3_t v364; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outPos; 
  vec3_t targetDirection; 
  Bounds v369; 
  vec3_t vEyePosOut; 
  vec3_t v371; 
  vec4_t v372; 
  Bounds color; 
  vec3_t viewDir; 
  vec3_t v375; 
  vec3_t end; 
  ai_search_t dest[5]; 
  __int64 Base[2000]; 
  unsigned __int16 results[4]; 
  __int64 v380; 
  __int64 v381; 
  __int64 v382; 
  __int64 v383; 
  __int64 v384; 
  __int64 v385; 
  __int64 v386; 

  v11 = alloca(v0);
  __asm { vmovaps [rsp+50F0h+var_40], xmm7 }
  v12 = tls_index;
  if ( dword_14C8E241C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14C8E241C);
    if ( dword_14C8E241C == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f3d7eef
        vmovss  cs:VIEW_FOV_DOT_0, xmm0
      }
      j__Init_thread_footer(&dword_14C8E241C);
    }
  }
  _RBX = DVARFLT_ai_showNodesDist;
  if ( !DVARFLT_ai_showNodesDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodesDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+28h]
    vmovss  [rsp+50F0h+var_50A8], xmm7
  }
  if ( SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME )
  {
    client = level.gentities->client;
    if ( client )
    {
      if ( client->sess.connected == CON_CONNECTED && cg_t::ms_allocatedCount > 0 )
      {
        __asm
        {
          vmovaps [rsp+50F0h+var_60], xmm9
          vmovaps [rsp+50F0h+var_70], xmm10
          vmovaps [rsp+50F0h+var_C0], xmm15
        }
        Path_NavTests();
        if ( g_platformWarning )
          Com_PrintWarning(1, "Please reconnect paths for level. Parented moving platform nodes with old version.\n");
        __asm
        {
          vmovaps [rsp+50F0h+var_30], xmm6
          vmovaps [rsp+50F0h+var_50], xmm8
        }
        CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
        _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+6944h]
          vmovss  dword ptr [rbp+4FF0h+viewDir], xmm0
          vmovss  xmm1, dword ptr [rax+6948h]
          vmovss  dword ptr [rbp+4FF0h+viewDir+4], xmm1
          vmovss  xmm0, dword ptr [rax+694Ch]
          vmovss  dword ptr [rbp+4FF0h+viewDir+8], xmm0
          vmovss  xmm9, cs:__real@3f000000
          vmovss  xmm15, cs:__real@42700000
          vmovss  xmm10, cs:__real@42b40000
        }
        v24 = 0;
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") )
        {
          v25 = 0;
          __asm { vmovaps [rsp+50F0h+var_A0], xmm13 }
          v26 = g_path.actualNodeCount - pathData.zoneCount;
          if ( g_path.actualNodeCount )
          {
            do
            {
              v27 = v25++;
              v28 = &pathData.nodes[v27];
              *(_QWORD *)&v28->transient.iSearchFrame = 0i64;
              v28->transient.pNextOpen = NULL;
              v28->transient.pPrevOpen = NULL;
              v28->transient.pParent = NULL;
              *(_QWORD *)&v28->transient.fCost = 0i64;
              *(_QWORD *)&v28->transient.nodeCost = 0i64;
            }
            while ( v25 < g_path.actualNodeCount );
          }
          v359 = 0;
          v29 = 0;
          v30 = 0;
          __asm { vxorps  xmm8, xmm8, xmm8 }
          if ( v26 )
          {
            do
            {
              if ( Path_NodeValid(v30) )
              {
                _RBX = &pathData.nodes[v30];
                pathnode_t::GetPos(_RBX, &pos);
                __asm
                {
                  vucomiss xmm7, xmm8
                  vmovss  xmm0, dword ptr [rbp+4FF0h+outPos]
                  vsubss  xmm3, xmm0, dword ptr [rsp+50F0h+pos]
                  vmovss  xmm1, dword ptr [rbp+4FF0h+outPos+4]
                  vmovss  xmm0, dword ptr [rbp+4FF0h+outPos+8]
                  vsubss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+4]
                  vsubss  xmm4, xmm0, dword ptr [rsp+50F0h+pos+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm5, xmm3, xmm0
                  vmovss  dword ptr [rbx+0B0h], xmm5
                }
                if ( v34 )
                  goto LABEL_20;
                __asm
                {
                  vmulss  xmm0, xmm7, xmm7
                  vcomiss xmm5, xmm0
                }
                if ( v33 | v34 )
                {
LABEL_20:
                  __asm { vmovss  xmm3, cs:VIEW_FOV_DOT_0; viewFovDot }
                  if ( Path_NodeInOrNearPlayerView(_RBX, &outPos, &viewDir, *(float *)&_XMM3) )
                  {
                    v46 = v29++;
                    Base[v46] = (__int64)_RBX;
                  }
                }
              }
              ++v30;
            }
            while ( v30 < v26 );
            v359 = v29;
          }
          qsort(Base, v29, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)Path_NodeCompareCost);
          v47 = 0;
          v358 = 0;
          __asm { vmovss  xmm13, cs:__real@42200000 }
          if ( v29 )
          {
            __asm
            {
              vmovss  xmm10, cs:__real@41a00000
              vmovss  xmm6, cs:__real@3b808081
              vmovss  xmm7, cs:__real@41c80000
              vmovss  xmm8, cs:__real@428c0000
              vmovaps [rsp+50F0h+var_80], xmm11
              vmovss  xmm11, cs:__real@41200000
              vmovaps [rsp+50F0h+var_90], xmm12
              vmovss  xmm12, cs:__real@41300000
              vmovaps [rsp+50F0h+var_B0], xmm14
              vmovss  xmm14, cs:__real@c2340000
            }
            do
            {
              v56 = (pathnode_t *)Base[v47];
              pathnode_t::GetPos(v56, &pos);
              if ( !pathData.usePathExtraData )
                goto LABEL_120;
              v57 = DVARINT_ai_showNodes;
              if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v57);
              if ( v57->current.integer >= 5 )
              {
                v58 = DVARINT_ai_showNodes;
                if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v58);
                if ( v58->current.integer <= 7 )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vmovss  dword ptr [rbp+4FF0h+angles], xmm0
                    vmovss  dword ptr [rbp+4FF0h+angles+4], xmm0
                    vmovss  dword ptr [rbp+4FF0h+angles+8], xmm0
                  }
                  if ( !pathData.pathExposure )
                    goto LABEL_139;
                  v59 = 0;
                  while ( 1 )
                  {
                    v60 = 0;
                    v61 = __ROL4__(1, v59);
                    do
                    {
                      __asm
                      {
                        vxorps  xmm0, xmm0, xmm0
                        vcvtsi2ss xmm0, xmm0, rax
                        vmulss  xmm1, xmm0, cs:__real@42340000
                        vsubss  xmm2, xmm1, cs:__real@41b40000
                        vmovss  dword ptr [rbp+4FF0h+angles+4], xmm2
                      }
                      AngleVectors(&angles, &forward, NULL, NULL);
                      __asm
                      {
                        vmulss  xmm1, xmm10, dword ptr [rbp+4FF0h+forward]
                        vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos]
                        vmulss  xmm1, xmm10, dword ptr [rbp+4FF0h+forward+4]
                        vmovss  dword ptr [rsp+50F0h+xyz], xmm2
                        vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+4]
                        vmulss  xmm1, xmm10, dword ptr [rbp+4FF0h+forward+8]
                        vmovss  dword ptr [rsp+50F0h+xyz+4], xmm2
                        vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+8]
                        vmovss  dword ptr [rsp+50F0h+xyz+8], xmm2
                      }
                      if ( !v60 )
                      {
                        __asm
                        {
                          vaddss  xmm1, xmm14, dword ptr [rbp+4FF0h+angles+4]
                          vmovss  dword ptr [rbp+4FF0h+angles+4], xmm1
                        }
                        AngleVectors(&angles, &forward, NULL, NULL);
                        __asm
                        {
                          vmulss  xmm1, xmm10, dword ptr [rbp+4FF0h+forward]
                          vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos]
                          vmulss  xmm1, xmm10, dword ptr [rbp+4FF0h+forward+4]
                          vmovss  dword ptr [rbp+4FF0h+var_5070], xmm2
                          vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+4]
                          vmulss  xmm1, xmm10, dword ptr [rbp+4FF0h+forward+8]
                          vmovss  dword ptr [rbp+4FF0h+var_5070+4], xmm2
                          vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+8]
                          vmovss  dword ptr [rbp+4FF0h+var_5070+8], xmm2
                        }
                      }
                      __asm { vmovss  xmm1, dword ptr [rbp+4FF0h+angles+4]; yaw }
                      RawMax = Path_NodeExposureGetRawMax(v56, *(float *)&_XMM1, v61);
                      if ( v59 )
                      {
                        if ( v59 == 1 )
                        {
                          __asm { vaddss  xmm1, xmm13, dword ptr [rsp+50F0h+pos+8] }
                        }
                        else
                        {
                          if ( v59 != 2 )
                          {
                            __asm { vaddss  xmm1, xmm11, dword ptr [rsp+50F0h+pos+8] }
                            v82 = DVARINT_ai_showNodes;
                            __asm
                            {
                              vmovss  dword ptr [rsp+50F0h+xyz+8], xmm1
                              vmovss  dword ptr [rbp+4FF0h+var_5070+8], xmm1
                            }
                            if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                              __debugbreak();
                            Dvar_CheckFrontendServerThread(v82);
                            if ( v82->current.integer == 7 )
                            {
                              __asm
                              {
                                vmovups xmm3, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                                vsubps  xmm3, xmm3, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
                                vxorps  xmm0, xmm0, xmm0
                                vcvtsi2ss xmm0, xmm0, rdi
                                vmulss  xmm6, xmm0, xmm6
                                vshufps xmm6, xmm6, xmm6, 0
                                vmulps  xmm3, xmm3, xmm6
                                vaddps  xmm3, xmm3, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
                                vmovups xmmword ptr [rbp+4FF0h+color], xmm3
                              }
                              if ( !RawMax )
                              {
                                __asm
                                {
                                  vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
                                  vmovups xmmword ptr [rbp+4FF0h+color], xmm0
                                }
                              }
                              v92 = j_va("%X", RawMax);
                              __asm { vmovaps xmm2, xmm9; scale }
                              G_Main_AddDebugString(&xyz, (const vec4_t *)&color, *(float *)&_XMM2, v92);
                              __asm { vmovss  xmm6, cs:__real@3b808081 }
                            }
                            goto LABEL_50;
                          }
                          __asm { vaddss  xmm1, xmm12, dword ptr [rsp+50F0h+pos+8] }
                        }
                        v144 = DVARINT_ai_showNodes;
                        __asm
                        {
                          vmovss  dword ptr [rbp+4FF0h+var_5070+8], xmm1
                          vmovss  dword ptr [rsp+50F0h+xyz+8], xmm1
                        }
                        if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                          __debugbreak();
                        Dvar_CheckFrontendServerThread(v144);
                        if ( v144->current.integer != 5 )
                        {
LABEL_71:
                          v145 = DVARINT_ai_showNodes;
                          if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                            __debugbreak();
                          Dvar_CheckFrontendServerThread(v145);
                          if ( v145->current.integer == 6 )
                          {
                            v146 = j_va("%X", RawMax);
                            v147 = &colorOrange;
                            if ( RawMax <= 2 )
                              v147 = &colorBlue;
                            __asm { vmovaps xmm2, xmm9; scale }
                            G_Main_AddDebugString(&xyz, v147, *(float *)&_XMM2, v146);
                          }
                          goto LABEL_50;
                        }
                      }
                      else
                      {
                        __asm { vaddss  xmm1, xmm15, dword ptr [rsp+50F0h+pos+8] }
                        v150 = DVARINT_ai_showNodes;
                        __asm
                        {
                          vmovss  dword ptr [rsp+50F0h+xyz+8], xmm1
                          vmovss  dword ptr [rbp+4FF0h+var_5070+8], xmm1
                        }
                        if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                          __debugbreak();
                        Dvar_CheckFrontendServerThread(v150);
                        if ( v150->current.integer != 5 )
                          goto LABEL_71;
                      }
                      v151 = &colorOrange;
                      if ( RawMax <= 2 )
                        v151 = &colorBlue;
                      G_DebugLine(&xyz, &v364, v151, 1);
LABEL_50:
                      __asm { vmovsd  xmm0, qword ptr [rsp+50F0h+xyz] }
                      ++v60;
                      v364.v[2] = xyz.v[2];
                      __asm { vmovsd  qword ptr [rbp+4FF0h+var_5070], xmm0 }
                    }
                    while ( v60 < 8 );
                    ++v59;
                    v24 = 0;
                    if ( v59 >= 4 )
                    {
                      v95 = DVARINT_ai_showNodes;
                      if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                        __debugbreak();
                      Dvar_CheckFrontendServerThread(v95);
                      if ( v95->current.integer == 7 )
                      {
                        Traffic = Path_NodeExposureGetTraffic(v56);
                        v97 = Traffic;
                        __asm
                        {
                          vmovups xmm3, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                          vsubps  xmm3, xmm3, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
                          vxorps  xmm0, xmm0, xmm0
                          vcvtsi2ss xmm0, xmm0, rbx
                          vmulss  xmm6, xmm0, xmm6
                          vshufps xmm6, xmm6, xmm6, 0
                          vmulps  xmm3, xmm3, xmm6
                          vaddps  xmm3, xmm3, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
                          vmovups xmmword ptr [rbp+4FF0h+var_5020], xmm3
                        }
                        if ( !Traffic )
                        {
                          __asm
                          {
                            vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
                            vmovups xmmword ptr [rbp+4FF0h+var_5020], xmm0
                          }
                        }
                        __asm
                        {
                          vmovss  xmm0, dword ptr [rsp+50F0h+pos]
                          vmovss  xmm1, dword ptr [rsp+50F0h+pos+4]
                          vaddss  xmm2, xmm11, dword ptr [rsp+50F0h+pos+8]
                          vmovss  dword ptr [rsp+50F0h+start], xmm0
                          vmovss  dword ptr [rsp+50F0h+start+4], xmm1
                          vmovss  dword ptr [rsp+50F0h+start+8], xmm2
                        }
                        v109 = j_va("%X", Traffic);
                        __asm { vmovaps xmm2, xmm9; scale }
                        G_Main_AddDebugString(&start, (const vec4_t *)&v369, *(float *)&_XMM2, v109);
                        if ( v97 )
                        {
                          v111 = 0;
                          __asm
                          {
                            vmovups xmm3, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                            vsubps  xmm3, xmm3, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
                            vmulps  xmm3, xmm3, xmm6
                            vaddps  xmm3, xmm3, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
                            vmovups xmmword ptr [rbp+4FF0h+var_5020], xmm3
                          }
                          if ( v56->constant.totalLinkCount )
                          {
                            __asm { vmovss  xmm13, cs:__real@3f800000 }
                            do
                            {
                              v117 = Path_ConvertIndexToNode(v56->constant.Links[v111].nodeNum);
                              v118 = Path_NodeExposureGetTraffic(v117);
                              pathnode_t::GetPos(v117, &v375);
                              if ( v118 )
                              {
                                __asm
                                {
                                  vmovss  xmm0, dword ptr [rbp+4FF0h+var_4FB0]
                                  vsubss  xmm5, xmm0, dword ptr [rsp+50F0h+pos]
                                  vmovss  xmm1, dword ptr [rbp+4FF0h+var_4FB0+4]
                                  vsubss  xmm6, xmm1, dword ptr [rsp+50F0h+pos+4]
                                  vmovss  xmm0, dword ptr [rbp+4FF0h+var_4FB0+8]
                                  vsubss  xmm7, xmm0, dword ptr [rsp+50F0h+pos+8]
                                  vmulss  xmm1, xmm5, xmm5
                                  vmulss  xmm0, xmm7, xmm7
                                  vmulss  xmm2, xmm6, xmm6
                                  vaddss  xmm3, xmm2, xmm1
                                  vaddss  xmm2, xmm3, xmm0
                                  vsqrtss xmm4, xmm2, xmm2
                                  vcmpless xmm0, xmm4, cs:__real@80000000
                                  vblendvps xmm1, xmm4, xmm13, xmm0
                                  vdivss  xmm3, xmm13, xmm1
                                  vmulss  xmm4, xmm4, xmm9
                                  vmulss  xmm0, xmm3, xmm5
                                  vmulss  xmm1, xmm0, xmm4
                                  vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+start]
                                  vmulss  xmm0, xmm3, xmm6
                                  vmulss  xmm1, xmm0, xmm4
                                  vmovss  dword ptr [rbp+4FF0h+end], xmm2
                                  vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+start+4]
                                  vmulss  xmm0, xmm3, xmm7
                                  vmulss  xmm1, xmm0, xmm4
                                  vmovss  dword ptr [rbp+4FF0h+end+4], xmm2
                                  vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+start+8]
                                  vmovss  dword ptr [rbp+4FF0h+end+8], xmm2
                                }
                                G_DebugLine(&start, &end, (const vec4_t *)&v369, 1);
                              }
                              ++v111;
                            }
                            while ( v111 < v56->constant.totalLinkCount );
                            __asm
                            {
                              vmovss  xmm13, cs:__real@42200000
                              vmovss  xmm7, cs:__real@41c80000
                            }
                          }
                        }
                      }
                      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 6 )
                      {
                        __asm
                        {
                          vmovss  xmm0, dword ptr [rsp+50F0h+pos]
                          vmovss  xmm1, dword ptr [rsp+50F0h+pos+4]
                          vaddss  xmm2, xmm10, dword ptr [rsp+50F0h+pos+8]
                          vmovss  dword ptr [rsp+50F0h+xyz], xmm0
                          vmovss  dword ptr [rsp+50F0h+xyz+4], xmm1
                          vmovss  dword ptr [rsp+50F0h+xyz+8], xmm2
                        }
                        v154 = Path_ConvertNodeToIndex(v56);
                        if ( Path_IsNodeIndexExposedSkyBase(v154, 0) )
                        {
                          v155 = Path_ConvertNodeToIndex(v56);
                          if ( Path_IsNodeIndexExposedSkyBase(v155, 1) )
                          {
                            v156 = &colorOrange;
                            v157 = j_va("skyStrict");
                          }
                          else
                          {
                            v156 = &colorYellow;
                            v157 = j_va("sky");
                          }
                        }
                        else
                        {
                          v156 = &colorBlue;
                          v157 = j_va("top");
                        }
                        __asm { vmovaps xmm2, xmm9; scale }
                        G_Main_AddDebugString(&xyz, v156, *(float *)&_XMM2, v157);
                      }
                      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 5 )
                      {
                        __asm
                        {
                          vmovss  xmm0, cs:__real@c2b40000
                          vmovss  dword ptr [rbp+4FF0h+angles+4], xmm0
                        }
                        AngleVectors(&angles, &forward, NULL, NULL);
                        __asm
                        {
                          vmulss  xmm1, xmm7, dword ptr [rbp+4FF0h+forward]
                          vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos]
                          vmulss  xmm1, xmm7, dword ptr [rbp+4FF0h+forward+4]
                          vmovss  dword ptr [rbp+4FF0h+var_5070], xmm2
                          vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+4]
                          vmulss  xmm1, xmm7, dword ptr [rbp+4FF0h+forward+8]
                          vmovss  dword ptr [rbp+4FF0h+var_5070+4], xmm2
                          vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+8]
                          vmovss  dword ptr [rbp+4FF0h+var_5070+8], xmm2
                        }
                        v165 = 0;
                        do
                        {
                          __asm
                          {
                            vxorps  xmm0, xmm0, xmm0
                            vcvtsi2ss xmm0, xmm0, rax
                            vmulss  xmm1, xmm0, cs:__real@42b40000
                            vmovss  dword ptr [rbp+4FF0h+angles+4], xmm1
                          }
                          AngleVectors(&angles, &forward, NULL, NULL);
                          __asm
                          {
                            vmulss  xmm1, xmm7, dword ptr [rbp+4FF0h+forward]
                            vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos]
                            vmulss  xmm1, xmm7, dword ptr [rbp+4FF0h+forward+4]
                            vmovss  dword ptr [rsp+50F0h+xyz], xmm2
                            vaddss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+4]
                            vaddss  xmm1, xmm8, dword ptr [rsp+50F0h+pos+8]
                            vmovss  dword ptr [rsp+50F0h+xyz+8], xmm1
                            vmovss  dword ptr [rbp+4FF0h+var_5070+8], xmm1
                            vmovss  dword ptr [rsp+50F0h+xyz+4], xmm2
                          }
                          v174 = Path_ConvertNodeToIndex(v56);
                          if ( Path_IsNodeIndexExposedSkyBase(v174, 1) )
                          {
                            v175 = &colorOrange;
                          }
                          else
                          {
                            v176 = Path_ConvertNodeToIndex(v56);
                            IsNodeIndexExposedSkyBase = Path_IsNodeIndexExposedSkyBase(v176, 0);
                            v175 = &colorYellow;
                            if ( !IsNodeIndexExposedSkyBase )
                              v175 = &colorBlue;
                          }
                          G_DebugLine(&xyz, &v364, v175, 1);
                          __asm { vmovsd  xmm0, qword ptr [rsp+50F0h+xyz] }
                          ++v165;
                          v364.v[2] = xyz.v[2];
                          __asm { vmovsd  qword ptr [rbp+4FF0h+var_5070], xmm0 }
                        }
                        while ( v165 < 4 );
                      }
                      goto LABEL_139;
                    }
                  }
                }
              }
              if ( pathData.usePathExtraData && (Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 11 || Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 12) )
              {
                if ( pathData.pathZones )
                {
                  v178 = Path_ConvertNodeToIndex(v56);
                  v179 = Path_NodeZoneFromIndex(v178);
                  if ( v179 != 255 )
                  {
                    if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 12 )
                    {
                      if ( Path_ZoneIsTraversalIsland(v179) )
                      {
                        __asm
                        {
                          vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                          vmovups xmmword ptr [rbp+4FF0h+var_4FE8], xmm0
                        }
                      }
                      else
                      {
                        __asm
                        {
                          vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
                          vmovups xmmword ptr [rbp+4FF0h+var_4FE8], xmm0
                        }
                      }
                    }
                    else
                    {
                      _RCX = zoneColor[v179 & 7];
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rcx]
                        vmovss  dword ptr [rbp+4FF0h+var_4FE8], xmm0
                        vmovss  xmm1, dword ptr [rcx+4]
                        vmovss  dword ptr [rbp+4FF0h+var_4FE8+4], xmm1
                        vmovss  xmm0, dword ptr [rcx+8]
                        vmovss  dword ptr [rbp+4FF0h+var_4FE8+8], xmm0
                        vmovss  xmm1, dword ptr [rcx+0Ch]
                        vmovss  dword ptr [rbp+4FF0h+var_4FE8+0Ch], xmm1
                      }
                    }
                    v184 = j_va("%i", v179);
                    __asm { vmovaps xmm2, xmm9; scale }
                    G_Main_AddDebugString(&pos, &v372, *(float *)&_XMM2, v184);
                    v186 = 0;
                    if ( v56->constant.totalLinkCount )
                    {
                      __asm { vmovss  xmm15, cs:__real@41700000 }
                      do
                      {
                        nodeNum = v56->constant.Links[v186].nodeNum;
                        v189 = Path_ConvertIndexToNode(v56->constant.Links[v186].nodeNum);
                        pathnode_t::GetPos(v189, &targetDirection);
                        __asm
                        {
                          vmovss  xmm0, dword ptr [rsp+50F0h+pos]
                          vsubss  xmm1, xmm0, dword ptr [rbp+4FF0h+targetDirection]
                          vmovss  xmm0, dword ptr [rsp+50F0h+pos+4]
                          vmulss  xmm2, xmm1, xmm9
                          vsubss  xmm1, xmm0, dword ptr [rbp+4FF0h+targetDirection+4]
                          vaddss  xmm6, xmm2, dword ptr [rbp+4FF0h+targetDirection]
                          vmovss  xmm0, dword ptr [rsp+50F0h+pos+8]
                          vmulss  xmm2, xmm1, xmm9
                          vsubss  xmm1, xmm0, dword ptr [rbp+4FF0h+targetDirection+8]
                          vaddss  xmm7, xmm2, dword ptr [rbp+4FF0h+targetDirection+4]
                          vmulss  xmm2, xmm1, xmm9
                          vaddss  xmm8, xmm2, dword ptr [rbp+4FF0h+targetDirection+8]
                          vmovss  dword ptr [rbp+4FF0h+targetDirection+8], xmm8
                          vmovss  dword ptr [rbp+4FF0h+targetDirection], xmm6
                          vmovss  dword ptr [rbp+4FF0h+targetDirection+4], xmm7
                        }
                        v201 = Path_NodeZoneFromIndex(nodeNum);
                        if ( v201 != 255 )
                        {
                          __asm
                          {
                            vmovss  xmm1, dword ptr [rsp+50F0h+pos+4]
                            vmovss  xmm0, dword ptr [rsp+50F0h+pos]
                            vmovss  dword ptr [rbp+4FF0h+var_4FF8+4], xmm1
                            vaddss  xmm1, xmm15, dword ptr [rsp+50F0h+pos+8]
                            vaddss  xmm2, xmm8, xmm15
                            vmovss  dword ptr [rbp+4FF0h+var_4FF8+8], xmm1
                            vmovss  dword ptr [rbp+4FF0h+var_4FF8], xmm0
                            vmovss  dword ptr [rbp+4FF0h+vEyePosOut], xmm6
                            vmovss  dword ptr [rbp+4FF0h+vEyePosOut+4], xmm7
                            vmovss  dword ptr [rbp+4FF0h+vEyePosOut+8], xmm2
                          }
                          if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 11 )
                          {
                            if ( v201 == v179 )
                            {
                              _RCX = zoneColor[v179 & 7];
                              __asm
                              {
                                vmovss  xmm0, dword ptr [rcx]
                                vmovss  dword ptr [rbp+4FF0h+var_4FE8], xmm0
                                vmovss  xmm1, dword ptr [rcx+4]
                                vmovss  dword ptr [rbp+4FF0h+var_4FE8+4], xmm1
                                vmovss  xmm0, dword ptr [rcx+8]
                                vmovss  dword ptr [rbp+4FF0h+var_4FE8+8], xmm0
                                vmovss  xmm1, dword ptr [rcx+0Ch]
                                vmovss  dword ptr [rbp+4FF0h+var_4FE8+0Ch], xmm1
                              }
                            }
                            else
                            {
                              __asm
                              {
                                vmovups xmm0, xmmword ptr cs:?colorDkGrey@@3Tvec4_t@@B; vec4_t const colorDkGrey
                                vmovups xmmword ptr [rbp+4FF0h+var_4FE8], xmm0
                              }
                            }
                          }
                          G_DebugLine(&v371, &vEyePosOut, &v372, 1);
                        }
                        ++v186;
                      }
                      while ( v186 < v56->constant.totalLinkCount );
                      __asm
                      {
                        vmovss  xmm15, cs:__real@42700000
                        vmovss  xmm7, cs:__real@41c80000
                        vmovss  xmm8, cs:__real@428c0000
                      }
                    }
                  }
                }
              }
              else
              {
LABEL_120:
                if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") != 16 )
                {
                  if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") > 4 )
                    goto LABEL_139;
                  if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 2 || Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 4 )
                  {
                    v212 = Path_ConvertNodeToIndex(v56);
                    v213 = j_va("%i", v212);
                    __asm { vmovss  xmm2, cs:__real@3f800000; scale }
                    G_Main_AddDebugString(&pos, &colorWhite, *(float *)&_XMM2, v213);
                  }
                  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes");
                  v216 = Int_Internal_DebugName >= 3;
                  if ( Int_Internal_DebugName < 3 )
                    wLinkCount = v56->dynamic.wLinkCount;
                  else
                    wLinkCount = v56->constant.totalLinkCount;
                  if ( wLinkCount )
                  {
                    for ( i = 0; i < wLinkCount; ++i )
                      Path_DrawDebugLink(v56, i, v216);
                    goto LABEL_139;
                  }
LABEL_136:
                  Path_DrawDebugNoLinks(v56, &colorRed, 0);
                  goto LABEL_139;
                }
                if ( (v56->constant.spawnflags & 0x40000) == 0 )
                  goto LABEL_139;
                totalLinkCount = v56->constant.totalLinkCount;
                if ( !v56->constant.totalLinkCount )
                  goto LABEL_136;
                v210 = 0;
                v211 = 0i64;
                do
                {
                  if ( (Path_ConvertIndexToNode(v56->constant.Links[v211].nodeNum)->constant.spawnflags & 0x40000) != 0 )
                    Path_DrawDebugLink(v56, v210, 0);
                  ++v210;
                  ++v211;
                }
                while ( v210 < totalLinkCount );
              }
LABEL_139:
              __asm { vmovss  xmm6, cs:__real@3b808081 }
              v47 = ++v358;
            }
            while ( v358 < v359 );
            __asm
            {
              vmovss  xmm7, [rsp+50F0h+var_50A8]
              vmovss  xmm10, cs:__real@42b40000
            }
            v12 = tls_index;
            __asm
            {
              vmovaps xmm14, [rsp+50F0h+var_B0]
              vmovaps xmm12, [rsp+50F0h+var_90]
              vmovaps xmm11, [rsp+50F0h+var_80]
              vxorps  xmm8, xmm8, xmm8
            }
          }
          if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") >= 8 && Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") <= 10 )
          {
            *(_QWORD *)results = 0i64;
            v380 = 0i64;
            v381 = 0i64;
            v382 = 0i64;
            v383 = 0i64;
            v384 = 0i64;
            v385 = 0i64;
            v386 = 0i64;
            AI_FindEntrances(&outPos, results, 32);
          }
          if ( pathData.usePathExtraData && (Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 11 || Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 12) )
          {
            v223 = 0;
            __asm
            {
              vmovss  xmm6, cs:__real@42000000
              vmovups xmm0, cs:__xmm@42000000000000000000000000000000
              vmovss  [rbp+4FF0h+var_4FC8], xmm6
              vmovss  [rbp+4FF0h+var_4FC4], xmm6
              vmovups xmmword ptr [rbp+4FF0h+color], xmm0
            }
            if ( pathData.zoneCount )
            {
              while ( 1 )
              {
                v225 = Path_ConvertZoneIndexToZone(v223);
                if ( !v225 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7863, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
                  __debugbreak();
                pathnode_t::GetPos(v225, &pos);
                __asm
                {
                  vucomiss xmm7, xmm8
                  vaddss  xmm4, xmm6, dword ptr [rsp+50F0h+pos+8]
                  vmovss  dword ptr [rsp+50F0h+pos+8], xmm4
                }
                if ( !v227 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+4FF0h+outPos]
                    vsubss  xmm3, xmm0, dword ptr [rsp+50F0h+pos]
                    vmovss  xmm1, dword ptr [rbp+4FF0h+outPos+4]
                    vsubss  xmm2, xmm1, dword ptr [rsp+50F0h+pos+4]
                    vmovss  xmm0, dword ptr [rbp+4FF0h+outPos+8]
                    vsubss  xmm4, xmm0, xmm4
                    vmulss  xmm1, xmm3, xmm3
                    vmulss  xmm2, xmm2, xmm2
                    vaddss  xmm3, xmm2, xmm1
                    vmulss  xmm0, xmm4, xmm4
                    vaddss  xmm4, xmm3, xmm0
                    vmulss  xmm1, xmm7, xmm7
                    vcomiss xmm4, xmm1
                  }
                  if ( !(v226 | v227) )
                    goto LABEL_168;
                }
                __asm { vmovss  xmm3, cs:VIEW_FOV_DOT_0; viewFovDot }
                if ( !Path_NodeInOrNearPlayerView(v225, &outPos, &viewDir, *(float *)&_XMM3) )
                  goto LABEL_168;
                if ( !pathData.pathZones )
                  break;
                v241 = Path_ConvertNodeToIndex(v225);
                v242 = Path_NodeZoneFromIndex(v241);
                if ( v242 == 255 )
                  goto LABEL_159;
LABEL_161:
                if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 12 )
                {
                  if ( Path_ZoneIsTraversalIsland(v242) )
                  {
                    __asm
                    {
                      vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                      vmovups xmmword ptr [rbp+4FF0h+var_5020], xmm0
                    }
                  }
                  else
                  {
                    __asm
                    {
                      vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
                      vmovups xmmword ptr [rbp+4FF0h+var_5020], xmm0
                    }
                  }
                }
                else
                {
                  _RCX = zoneColor[v242 & 7];
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rcx]
                    vmovss  dword ptr [rbp+4FF0h+var_5020], xmm0
                    vmovss  xmm1, dword ptr [rcx+4]
                    vmovss  dword ptr [rbp+4FF0h+var_5020+4], xmm1
                    vmovss  xmm0, dword ptr [rcx+8]
                    vmovss  dword ptr [rbp+4FF0h+var_5020+8], xmm0
                    vmovss  xmm1, dword ptr [rcx+0Ch]
                    vmovss  dword ptr [rbp+4FF0h+var_5020+0Ch], xmm1
                  }
                }
                __asm { vmovaps xmm2, xmm8; yaw }
                G_DebugBox(&pos, &color, *(float *)&_XMM2, (const vec4_t *)&v369, 0, 0);
                for ( j = 0; j < v225->dynamic.wLinkCount; ++j )
                {
                  v249 = Path_ConvertIndexToNode(v225->constant.Links[j].nodeNum);
                  pathnode_t::GetPos(v249, &start);
                  __asm
                  {
                    vaddss  xmm5, xmm6, dword ptr [rsp+50F0h+start+8]
                    vmovss  xmm1, dword ptr [rsp+50F0h+pos]
                    vsubss  xmm0, xmm1, dword ptr [rsp+50F0h+start]
                    vmulss  xmm2, xmm0, xmm9
                    vaddss  xmm3, xmm2, dword ptr [rsp+50F0h+start]
                    vmovss  xmm0, dword ptr [rsp+50F0h+pos+4]
                    vsubss  xmm1, xmm0, dword ptr [rsp+50F0h+start+4]
                    vmovss  xmm0, dword ptr [rsp+50F0h+pos+8]
                    vmulss  xmm2, xmm1, xmm9
                    vmovss  dword ptr [rsp+50F0h+start], xmm3
                    vaddss  xmm3, xmm2, dword ptr [rsp+50F0h+start+4]
                    vsubss  xmm1, xmm0, xmm5
                    vmulss  xmm2, xmm1, xmm9
                    vmovss  dword ptr [rsp+50F0h+start+4], xmm3
                    vaddss  xmm3, xmm2, xmm5
                    vmovss  dword ptr [rsp+50F0h+start+8], xmm3
                  }
                  G_DebugLine(&pos, &start, (const vec4_t *)&v369, 0);
                }
LABEL_168:
                if ( (unsigned int)++v223 >= pathData.zoneCount )
                {
                  v12 = tls_index;
                  goto LABEL_170;
                }
              }
              v242 = 255;
LABEL_159:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7879, ASSERT_TYPE_ASSERT, "( nodeZone != 255 )", (const char *)&queryFormat, "nodeZone != PATH_INVALID_ZONE") )
                __debugbreak();
              goto LABEL_161;
            }
          }
LABEL_170:
          if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 14 )
          {
            __asm
            {
              vmovss  xmm6, cs:__real@3fc00000
              vmovaps xmm3, xmm6; scale
              vmovaps xmm1, xmm15; y
              vmovaps xmm0, xmm13; x
            }
            G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, "Path Extra Data Size");
            Com_sprintf((char *)dest, 0x200ui64, "Num path nodes (for reference): %i", g_path.actualNodeCount - pathData.zoneCount);
            __asm
            {
              vmovss  xmm1, cs:__real@42e40000; y
              vmovaps xmm3, xmm6; scale
              vmovaps xmm0, xmm13; x
            }
            G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, (const char *)dest);
            LODWORD(fmt) = pathData.zonesBytes / 1024;
            Com_sprintf((char *)dest, 0x200ui64, "Path Zones bytes: %d (%d K)", (unsigned int)pathData.zonesBytes, fmt);
            __asm
            {
              vmovss  xmm1, cs:__real@430d0000; y
              vmovaps xmm3, xmm6; scale
              vmovaps xmm0, xmm13; x
            }
            G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, (const char *)dest);
            LODWORD(fmta) = pathData.exposureBytes / 1024;
            Com_sprintf((char *)dest, 0x200ui64, "Path Exposure bytes: %d (%d K)", (unsigned int)pathData.exposureBytes, fmta);
            __asm
            {
              vmovss  xmm1, cs:__real@43280000; y
              vmovaps xmm3, xmm6; scale
              vmovaps xmm0, xmm13; x
            }
            G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, (const char *)dest);
            LODWORD(fmtb) = pathData.noPeekVisBytes / 1024;
            Com_sprintf((char *)dest, 0x200ui64, "No Peek Vis bytes: %d (%d K)", (unsigned int)pathData.noPeekVisBytes, fmtb);
            __asm
            {
              vmovss  xmm1, cs:__real@43430000; y
              vmovaps xmm3, xmm6; scale
              vmovaps xmm0, xmm13; x
            }
            G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, (const char *)dest);
          }
          __asm { vmovaps xmm13, [rsp+50F0h+var_A0] }
        }
        else
        {
          __asm { vxorps  xmm8, xmm8, xmm8 }
        }
        Nav_SetDebugDrawFlags();
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 15 )
          Path_DebugDrawJumpNodeLinks();
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNearbyNodes, "ai_showNearbyNodes") )
        {
          v278 = Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNearbyNodes, "ai_showNearbyNodes");
          v279 = v278;
          if ( !v278 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7178, ASSERT_TYPE_ASSERT, "(numNodes)", (const char *)&queryFormat, "numNodes") )
            __debugbreak();
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_showNodesDist, "ai_showNodesDist");
          __asm
          {
            vmovss  xmm3, cs:__real@4e6e6b28; maxHeight
            vmovaps xmm2, xmm0; maxDist
          }
          v282 = Path_NodesInCylinder(&outPos, NULL, *(float *)&_XMM2, *(float *)&_XMM3, (pathsort_s *)dest, 256, -1, 0);
          std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>((pathsort_s *)dest, (pathsort_s *)dest + v282, v282, Path_CompareNodesIncreasingDistOnly);
          if ( v282 > 0 )
          {
            v283 = v279;
            v284 = (const pathnode_t **)dest;
            for ( k = 0i64; k < v282; ++k )
            {
              if ( k >= v283 )
                break;
              Path_DrawDebugNode(&outPos, *v284);
              v284 += 2;
            }
          }
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_showPathFindNodes, "ai_showPathFindNodes") )
        {
          for ( m = 0; m < (signed int)(g_path.actualNodeCount - pathData.zoneCount); ++m )
          {
            if ( Path_NodeValid(m) )
            {
              v287 = &pathData.nodes[m];
              if ( v287->transient.iSearchFrame == level.iSearchFrame )
                Path_DrawDebugNode(&outPos, v287);
            }
          }
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_showNearestNodes, "ai_showNearestNodes") )
        {
          if ( !level.sentients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7211, ASSERT_TYPE_ASSERT, "(level.sentients != 0)", (const char *)&queryFormat, "level.sentients != NULL") )
            __debugbreak();
          for ( n = 0; n < level.maxSentients; ++n )
          {
            v289 = &level.sentients[n];
            if ( v289->inuse && v289->ent->s.eType != ET_INVISIBLE )
            {
              v290 = Sentient_NearestNode(&level.sentients[n]);
              if ( v290 )
              {
                Sentient_GetDebugEyePosition(v289, &vEyePosOut);
                pathnode_t::GetPos(v290, &v371);
                G_DebugLine(&vEyePosOut, &v371, &nodeColorTable[v290->constant.type], 1);
                Path_DrawDebugNode(&outPos, v290);
              }
            }
          }
        }
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showVisData, "ai_showVisData") )
          Path_DrawVisData();
        if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && Dvar_GetInt_Internal_DebugName(DVARINT_ai_searchDebug, "ai_searchDebug") > 0 )
        {
          if ( dword_14C8E2424 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v12) + 1772i64) )
          {
            j__Init_thread_header(&dword_14C8E2424);
            if ( dword_14C8E2424 == -1 )
            {
              s_aiSearchDebug_LastTime = level.time - 15000;
              j__Init_thread_footer(&dword_14C8E2424);
            }
          }
          if ( (int)abs32(level.time - s_aiSearchDebug_LastTime) > 20000 )
          {
            __asm
            {
              vmovss  xmm1, cs:__real@41700000
              vmovups xmm0, cs:__xmm@41700000423800000000000000000000
              vmovss  [rbp+4FF0h+var_5010], xmm1
              vmovss  xmm1, cs:__real@42380000
              vmovss  [rbp+4FF0h+var_500C], xmm1
              vmovups xmmword ptr [rbp+4FF0h+var_5020], xmm0
            }
            _RBX = &level.clients[level.gentities->s.number];
            if ( !level.gentities->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7973, ASSERT_TYPE_ASSERT, "( localEnt && localEnt->client )", (const char *)&queryFormat, "localEnt && localEnt->client") )
              __debugbreak();
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7974, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
              __debugbreak();
            AngleVectors(&_RBX->ps.viewangles, &targetDirection, NULL, NULL);
            _RDI = &_RBX->ps.origin;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi]
              vmovss  dword ptr [rbp+4FF0h+dest], xmm0
              vmovss  xmm1, dword ptr [rdi+4]
              vmovss  [rbp+4FF0h+var_4F8C], xmm1
              vmovss  xmm0, dword ptr [rdi+8]
              vmovss  [rbp+4FF0h+var_4F88], xmm0
            }
            Dvar_GetInt_Internal_DebugName(DVARINT_ai_searchDebug, "ai_searchDebug");
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, cs:__real@42ff0000; fMaxDist
            }
            dest[0].nodeNearestSearchOrigin = Path_NearestNodeByDistanceOnly(&_RBX->ps.origin, *(float *)&_XMM1);
            if ( !dest[0].nodeNearestSearchOrigin )
              goto LABEL_222;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+3Ch]
              vmovss  xmm2, dword ptr [rbx+40h]
              vmovss  xmm3, dword ptr [rbx+44h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmovss  xmm0, cs:__real@3f400000
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm6, xmm2, xmm2
              vmovss  [rbp+4FF0h+var_4F6C], xmm9
              vmovss  [rbp+4FF0h+var_4F68], xmm0
            }
            v312 = Dvar_GetInt_Internal_DebugName(DVARINT_ai_searchDebug, "ai_searchDebug");
            __asm { vmovaps xmm2, xmm6; targetVelocity }
            AI_BuildSearchArea(dest, &targetDirection, *(float *)&_XMM2, 1000 * v312, NULL, 0, AI_SEARCH_THOROUGH);
            __asm { vmovaps xmm2, xmm8; yaw }
            G_DebugBox(_RDI, &v369, *(float *)&_XMM2, &colorBlue, 1, 360);
            __asm
            {
              vmovss  xmm2, dword ptr [rdi]
              vmulss  xmm1, xmm10, dword ptr [rbp+4FF0h+targetDirection]
              vmovss  dword ptr [rbp+4FF0h+vEyePosOut], xmm2
              vmovss  xmm4, dword ptr [rdi+4]
              vaddss  xmm2, xmm1, xmm2
              vmulss  xmm1, xmm10, dword ptr [rbp+4FF0h+targetDirection+4]
              vmovss  dword ptr [rbp+4FF0h+vEyePosOut+4], xmm4
              vmovss  xmm0, dword ptr [rdi+8]
              vaddss  xmm3, xmm0, cs:__real@42480000
              vmovss  dword ptr [rbp+4FF0h+var_4FF8], xmm2
              vaddss  xmm2, xmm1, xmm4
              vmovss  dword ptr [rbp+4FF0h+vEyePosOut+8], xmm3
              vmovss  dword ptr [rbp+4FF0h+var_4FF8+4], xmm2
              vmovss  dword ptr [rbp+4FF0h+var_4FF8+8], xmm3
              vmovss  dword ptr [rbp+4FF0h+targetDirection+8], xmm8
            }
            G_DebugLineWithDuration(&vEyePosOut, &v371, &colorBlue, 1, 360);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi]
              vmovss  dword ptr [rsp+50F0h+start], xmm0
              vmovss  xmm1, dword ptr [rdi+4]
              vmovss  dword ptr [rsp+50F0h+start+4], xmm1
              vaddss  xmm2, xmm15, dword ptr [rdi+8]
              vcvtss2sd xmm1, xmm6, xmm6
              vmovq   rdx, xmm1
              vmovss  dword ptr [rsp+50F0h+start+8], xmm2
            }
            v327 = j_va("%f", _RDX);
            __asm { vmovaps xmm2, xmm9; scale }
            CL_AddDebugString(&start, &colorBlue, *(float *)&_XMM2, v327, 1, 360);
            if ( dest[0].currentNodeCount )
            {
              __asm { vmovss  xmm6, cs:__real@3a83126f }
              do
              {
                if ( v24 >= 0x80 )
                {
                  LODWORD(typeFlags) = 128;
                  LODWORD(duration) = v24;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8014, ASSERT_TYPE_ASSERT, "(unsigned)( searchNodesIndex ) < (unsigned)( 128 )", "searchNodesIndex doesn't index PATH_MAX_AI_SEARCH_NODES\n\t%i not in [0, %i)", duration, typeFlags) )
                    __debugbreak();
                }
                v330 = Path_ConvertIndexToNode(dest[0].nodes[v24].nodeIndex);
                pathnode_t::GetPos(v330, &angles);
                __asm
                {
                  vmovups xmm1, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
                  vsubps  xmm2, xmm1, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ecx
                  vmulss  xmm0, xmm0, xmm6
                  vshufps xmm0, xmm0, xmm0, 0
                  vmulps  xmm0, xmm2, xmm0
                  vaddps  xmm1, xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
                  vmovups xmmword ptr [rbp+4FF0h+color], xmm1
                }
                *(double *)&_XMM0 = pathnode_t::GetAngle(v330);
                __asm { vmovaps xmm2, xmm0; yaw }
                G_DebugBox(&angles, &v369, *(float *)&_XMM2, (const vec4_t *)&color, 1, 360);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+4FF0h+angles]
                  vmovss  xmm1, dword ptr [rbp+4FF0h+angles+4]
                  vaddss  xmm2, xmm15, dword ptr [rbp+4FF0h+angles+8]
                }
                priority = dest[0].nodes[v24].priority;
                __asm
                {
                  vmovss  dword ptr [rsp+50F0h+start], xmm0
                  vmovss  dword ptr [rsp+50F0h+start+4], xmm1
                  vmovss  dword ptr [rsp+50F0h+start+8], xmm2
                }
                v343 = j_va("%i", priority);
                __asm { vmovaps xmm2, xmm9; scale }
                CL_AddDebugString(&start, (const vec4_t *)&color, *(float *)&_XMM2, v343, 1, 360);
                ++v24;
              }
              while ( v24 < dest[0].currentNodeCount );
            }
            s_aiSearchDebug_LastTime = level.time;
          }
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_shownavdist, "ai_shownavdist");
        __asm
        {
          vmovss  xmm3, cs:__real@42a90000; fov
          vmovaps xmm2, xmm0; clipDist
        }
        Nav_DrawUpdate(&outPos, &viewDir, *(float *)&_XMM2, *(float *)&_XMM3);
LABEL_222:
        __asm
        {
          vmovaps xmm8, [rsp+50F0h+var_50]
          vmovaps xmm6, [rsp+50F0h+var_30]
          vmovaps xmm9, [rsp+50F0h+var_60]
          vmovaps xmm10, [rsp+50F0h+var_70]
          vmovaps xmm15, [rsp+50F0h+var_C0]
        }
      }
    }
  }
  __asm { vmovaps xmm7, [rsp+50F0h+var_40] }
}

/*
==============
Path_DrawDebugClaimedNode
==============
*/

void __fastcall Path_DrawDebugClaimedNode(const pathnode_t *node, double scale)
{
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  __int64 v14; 
  bool v15; 
  const char *GameType; 
  int v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  const char *v21; 
  int v22; 
  int v23; 
  const char *v24; 
  int v25; 
  SentientHandle *v26; 
  int number; 
  __int64 v28; 
  gentity_s *ent; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  int v32; 
  scr_string_t *v33; 
  const char *v34; 
  sentient_s *v35; 
  const char *v36; 
  sentient_s *v37; 
  int time; 
  int *iValidTime; 
  unsigned int i; 
  const char *v48; 
  int v51; 
  $7A0F6C62E0364555C5F0E34018BDFBD3 *v52; 
  unsigned int j; 
  const char *v58; 
  unsigned int v61; 
  __int64 v62; 
  bool v63; 
  const char *v64; 
  int v65; 
  __int64 v66; 
  unsigned int v67; 
  unsigned int v68; 
  const char *v69; 
  int v70; 
  int v71; 
  const char *v72; 
  int v73; 
  int v74; 
  int v77; 
  scr_string_t *v78; 
  const char *v79; 
  const char *v82; 
  bool v88; 
  const char *v91; 
  __int64 v94; 
  __int64 v95; 
  vec3_t pos; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmulss  xmm8, xmm1, cs:__real@3f333333
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v10 = 0;
  v11 = Path_NodeMaxNumTeamOwners(node);
  v12 = v11;
  __asm { vmulss  xmm9, xmm8, cs:__real@41400000 }
  if ( v11 > 0 )
  {
    v14 = 0i64;
    do
    {
      if ( BG_BotSystemEnabled() )
      {
        GameType = SV_GameMP_GetGameType();
        v17 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
        if ( !v17 )
        {
          v17 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
          if ( !v17 )
            v17 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
        }
        v15 = v17 == 0;
      }
      else
      {
        v15 = 1;
      }
      v18 = v14;
      v19 = v10;
      if ( v15 )
        v18 = 0i64;
      if ( v15 )
        v19 = 0;
      if ( !node )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v21 = SV_GameMP_GetGameType();
        v22 = *(unsigned __int8 *)v21 - (unsigned __int8)aBr_2[0];
        if ( !v22 )
        {
          v22 = *((unsigned __int8 *)v21 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v22 )
            v22 = *((unsigned __int8 *)v21 + 2) - (unsigned __int8)aBr_2[2];
        }
        v20 = (v22 != 0) + 1;
      }
      else
      {
        v20 = 1;
      }
      if ( v19 >= v20 )
      {
        if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          v24 = SV_GameMP_GetGameType();
          v25 = *(unsigned __int8 *)v24 - (unsigned __int8)aBr_2[0];
          if ( !v25 )
          {
            v25 = *((unsigned __int8 *)v24 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v25 )
              v25 = *((unsigned __int8 *)v24 + 2) - (unsigned __int8)aBr_2[2];
          }
          v23 = (v25 != 0) + 1;
        }
        else
        {
          v23 = 1;
        }
        LODWORD(v95) = v23;
        LODWORD(v94) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v94, v95) )
          __debugbreak();
      }
      v26 = &node->dynamic.pOwners[v18];
      if ( SentientHandle::isDefined(v26) )
      {
        number = v26->number;
        if ( number - 1 >= level.maxSentients )
        {
          LODWORD(v95) = level.maxSentients;
          LODWORD(v94) = number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( level.maxSentients )", "number - 1 doesn't index level.maxSentients\n\t%i not in [0, %i)", v94, v95) )
            __debugbreak();
        }
        v28 = v26->number;
        if ( !level.sentients[v28 - 1].ent )
        {
          LODWORD(v95) = v28 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 146, ASSERT_TYPE_ASSERT, "( ( level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( level.sentients[number - 1].ent )", v95) )
            __debugbreak();
        }
        ent = level.sentients[v26->number - 1].ent;
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v30 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
        v31 = (v30 >> 63) + v30;
        if ( (unsigned int)v31 >= 0x800 )
        {
          LODWORD(v95) = 2048;
          LODWORD(v94) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v94, v95) )
            __debugbreak();
        }
        v31 = (__int16)v31;
        if ( (unsigned int)(__int16)v31 >= 0x800 )
        {
          LODWORD(v95) = 2048;
          LODWORD(v94) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v94, v95) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v31].r.isInUse != g_entityIsInUse[v31] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v31] )
        {
          LODWORD(v95) = v26->number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 147, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v95) )
            __debugbreak();
        }
        if ( !level.sentients[v26->number - 1].ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6855, ASSERT_TYPE_ASSERT, "(nodeOwnerSentHandle->sentient()->ent)", (const char *)&queryFormat, "nodeOwnerSentHandle->sentient()->ent") )
          __debugbreak();
        if ( v12 <= 1 )
        {
          v37 = SentientHandle::sentient(v26);
          v36 = j_va("Owner: %d", (unsigned int)v37->ent->s.number);
        }
        else
        {
          if ( v10 >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
          {
            LODWORD(v95) = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2;
            LODWORD(v94) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 219, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v94, v95) )
              __debugbreak();
          }
          v32 = v10 + 1;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          {
            if ( v32 < 0 || (unsigned int)v32 >= 6 )
            {
              LODWORD(v94) = v10 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v94) )
                __debugbreak();
            }
            if ( !S_TEAMS_SP_SCR_STRINGS_10[v14 + 1] )
            {
              LODWORD(v94) = v10 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 275, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )", "( team ) = %i", v94) )
                __debugbreak();
            }
            v33 = (scr_string_t *)S_TEAMS_SP_SCR_STRINGS_10[v14 + 1];
          }
          else
          {
            if ( v32 < 0 || (unsigned int)v32 >= 0xCB )
            {
              LODWORD(v94) = v10 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v94) )
                __debugbreak();
            }
            if ( !S_TEAMS_MP_SCR_STRINGS_10[v14 + 1] )
            {
              LODWORD(v94) = v10 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 284, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )", "( team ) = %i", v94) )
                __debugbreak();
            }
            v33 = (scr_string_t *)S_TEAMS_MP_SCR_STRINGS_10[v14 + 1];
          }
          v34 = SL_ConvertToString(*v33);
          v35 = SentientHandle::sentient(v26);
          v36 = j_va("Owner: %d (%s)", (unsigned int)v35->ent->s.number, v34);
        }
        __asm { vmovaps xmm2, xmm8; scale }
        G_Main_AddDebugString(&pos, &colorGreen, *(float *)&_XMM2, v36);
      }
      __asm { vaddss  xmm1, xmm9, dword ptr [rsp+0D8h+pos+8] }
      ++v10;
      ++v14;
      __asm { vmovss  dword ptr [rsp+0D8h+pos+8], xmm1 }
    }
    while ( v14 < v12 );
  }
  __asm { vmovss  xmm7, cs:__real@3a83126f }
  time = level.time;
  iValidTime = node->dynamic.iValidTime;
  for ( i = 0; i < 3; ++i )
  {
    if ( time < *iValidTime )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vcvtss2sd xmm2, xmm1, xmm1
        vmovq   r8, xmm2
      }
      v48 = j_va("Invalid %i: %2.1f", i, _R8);
      __asm { vmovaps xmm2, xmm8; scale }
      G_Main_AddDebugString(&pos, &colorYellow, *(float *)&_XMM2, v48);
      __asm { vaddss  xmm1, xmm9, dword ptr [rsp+0D8h+pos+8] }
      time = level.time;
      __asm { vmovss  dword ptr [rsp+0D8h+pos+8], xmm1 }
    }
    ++iValidTime;
  }
  if ( BG_ActorOrAgentSystemEnabled() )
  {
    v51 = level.time;
    v52 = &node->dynamic.36;
    for ( j = 0; j < 3; ++j )
    {
      if ( v51 < v52->actors.dangerousNodeTime[0] )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
          vcvtss2sd xmm2, xmm1, xmm1
          vmovq   r8, xmm2
        }
        v58 = j_va("Dangerous %i: %2.1f", j, _R8);
        __asm { vmovaps xmm2, xmm8; scale }
        G_Main_AddDebugString(&pos, &colorYellow, *(float *)&_XMM2, v58);
        __asm { vaddss  xmm1, xmm9, dword ptr [rsp+0D8h+pos+8] }
        v51 = level.time;
        __asm { vmovss  dword ptr [rsp+0D8h+pos+8], xmm1 }
      }
      v52 = ($7A0F6C62E0364555C5F0E34018BDFBD3 *)((char *)v52 + 4);
    }
  }
  v61 = 0;
  if ( v12 > 0 )
  {
    v62 = 0i64;
    __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
    do
    {
      if ( BG_BotSystemEnabled() )
      {
        v64 = SV_GameMP_GetGameType();
        v65 = *(unsigned __int8 *)v64 - (unsigned __int8)aBr_2[0];
        if ( !v65 )
        {
          v65 = *((unsigned __int8 *)v64 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v65 )
            v65 = *((unsigned __int8 *)v64 + 2) - (unsigned __int8)aBr_2[2];
        }
        v63 = v65 == 0;
      }
      else
      {
        v63 = 1;
      }
      v66 = v62;
      v67 = v61;
      if ( v63 )
        v66 = 0i64;
      if ( v63 )
        v67 = 0;
      if ( !node )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 413, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v69 = SV_GameMP_GetGameType();
        v70 = *(unsigned __int8 *)v69 - (unsigned __int8)aBr_2[0];
        if ( !v70 )
        {
          v70 = *((unsigned __int8 *)v69 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v70 )
            v70 = *((unsigned __int8 *)v69 + 2) - (unsigned __int8)aBr_2[2];
        }
        v68 = (v70 != 0) + 1;
      }
      else
      {
        v68 = 1;
      }
      if ( v67 >= v68 )
      {
        if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          v72 = SV_GameMP_GetGameType();
          v73 = *(unsigned __int8 *)v72 - (unsigned __int8)aBr_2[0];
          if ( !v73 )
          {
            v73 = *((unsigned __int8 *)v72 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v73 )
              v73 = *((unsigned __int8 *)v72 + 2) - (unsigned __int8)aBr_2[2];
          }
          v71 = (v73 != 0) + 1;
        }
        else
        {
          v71 = 1;
        }
        LODWORD(v95) = v71;
        LODWORD(v94) = v67;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 414, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v94, v95) )
          __debugbreak();
      }
      v74 = node->dynamic.iFreeTime[v66];
      if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 444, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( Path_NodeGetFreeTime(node, v61) != 0x7FFFFFFF && level.time < v74 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm6, xmm0, xmm7
        }
        if ( v12 <= 1 )
        {
          __asm
          {
            vcvtss2sd xmm1, xmm6, xmm6
            vmovq   rdx, xmm1
          }
          v82 = j_va("Delay: %2.1f", _RDX);
        }
        else
        {
          if ( v61 >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
          {
            LODWORD(v95) = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2;
            LODWORD(v94) = v61;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 219, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v94, v95) )
              __debugbreak();
          }
          v77 = v61 + 1;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          {
            if ( v77 < 0 || (unsigned int)v77 >= 6 )
            {
              LODWORD(v94) = v61 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v94) )
                __debugbreak();
            }
            if ( !S_TEAMS_SP_SCR_STRINGS_10[v62 + 1] )
            {
              LODWORD(v94) = v61 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 275, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )", "( team ) = %i", v94) )
                __debugbreak();
            }
            v78 = (scr_string_t *)S_TEAMS_SP_SCR_STRINGS_10[v62 + 1];
          }
          else
          {
            if ( v77 < 0 || (unsigned int)v77 >= 0xCB )
            {
              LODWORD(v94) = v61 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v94) )
                __debugbreak();
            }
            if ( !S_TEAMS_MP_SCR_STRINGS_10[v62 + 1] )
            {
              LODWORD(v94) = v61 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 284, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )", "( team ) = %i", v94) )
                __debugbreak();
            }
            v78 = (scr_string_t *)S_TEAMS_MP_SCR_STRINGS_10[v62 + 1];
          }
          v79 = SL_ConvertToString(*v78);
          __asm
          {
            vcvtss2sd xmm1, xmm6, xmm6
            vmovq   rdx, xmm1
          }
          v82 = j_va("Delay: %2.1f (%s)", _RDX, v79);
        }
        __asm { vmovaps xmm2, xmm8; scale }
        G_Main_AddDebugString(&pos, &colorYellow, *(float *)&_XMM2, v82);
        __asm
        {
          vaddss  xmm1, xmm9, dword ptr [rsp+0D8h+pos+8]
          vmovss  dword ptr [rsp+0D8h+pos+8], xmm1
        }
      }
      ++v61;
      ++v62;
    }
    while ( v62 < v12 );
    __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
  }
  v88 = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH);
  __asm
  {
    vmovaps xmm9, [rsp+0D8h+var_78]
    vmovaps xmm7, [rsp+0D8h+var_58]
  }
  if ( v88 )
  {
    if ( BG_BotSystemEnabled() )
    {
      v91 = SV_GameMP_GetGameType();
      if ( *v91 != aBr_2[0] || v91[1] != aBr_2[1] || v91[2] != aBr_2[2] )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6915, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", "%s\n\tAccess to pathnode_dynamic::bots", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
          __debugbreak();
        if ( node->dynamic.bots.hasGlobalBadPlaceLink )
        {
          __asm { vmovaps xmm2, xmm8; scale }
          G_Main_AddDebugString(&pos, &colorRed, *(float *)&_XMM2, "badplace link");
        }
      }
    }
  }
  __asm { vmovaps xmm8, [rsp+0D8h+var_68] }
}

/*
==============
Path_DrawDebugLink
==============
*/
void Path_DrawDebugLink(const pathnode_t *node, const int i, bool bShowAll)
{
  __int64 v10; 
  __int64 nodeNum; 
  pathnode_t *v12; 
  int totalLinkCount; 
  pathlink_s *v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned __int16 *p_nodeNum; 
  pathlink_s *Links; 
  int v32; 
  __int64 j; 
  const vec4_t *v34; 
  const vec4_t *v35; 
  pathlink_s *v36; 
  __int64 v37; 
  __int64 v38; 
  int v39; 
  unsigned __int8 flags; 
  const vec4_t *v41; 
  unsigned __int16 *wOverlapNode; 
  vec4_t *v43; 
  bool v44; 
  vec3_t end; 
  vec3_t pos; 
  vec3_t v123; 
  vec3_t up; 
  vec3_t start; 
  vec3_t v126; 
  vec3_t vector; 
  vec3_t angles; 

  __asm { vmovaps [rsp+130h+var_40], xmm6 }
  v10 = i;
  nodeNum = node->constant.Links[i].nodeNum;
  v12 = &pathData.nodes[nodeNum];
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  pathnode_t::GetPos(v12, &end);
  pathnode_t::GetAngles((pathnode_t *)node, &vector);
  AngleVectors(&vector, NULL, NULL, &up);
  __asm
  {
    vmovss  xmm6, cs:__real@41800000
    vmulss  xmm3, xmm6, dword ptr [rsp+130h+up+4]
    vmulss  xmm2, xmm6, dword ptr [rsp+130h+up]
    vaddss  xmm2, xmm2, dword ptr [rsp+130h+pos]
    vmovss  dword ptr [rsp+130h+pos], xmm2
    vaddss  xmm2, xmm3, dword ptr [rsp+130h+pos+4]
    vmulss  xmm3, xmm6, dword ptr [rsp+130h+up+8]
    vmovss  dword ptr [rsp+130h+pos+4], xmm2
    vaddss  xmm2, xmm3, dword ptr [rsp+130h+pos+8]
    vmovss  dword ptr [rsp+130h+pos+8], xmm2
  }
  pathnode_t::GetAngles(v12, &angles);
  AngleVectors(&angles, NULL, NULL, &up);
  __asm
  {
    vmulss  xmm3, xmm6, dword ptr [rsp+130h+up+4]
    vmulss  xmm2, xmm6, dword ptr [rsp+130h+up]
    vaddss  xmm2, xmm2, dword ptr [rsp+130h+end]
    vmovss  dword ptr [rsp+130h+end], xmm2
    vaddss  xmm2, xmm3, dword ptr [rsp+130h+end+4]
    vmulss  xmm3, xmm6, dword ptr [rsp+130h+up+8]
    vmovss  dword ptr [rsp+130h+end+4], xmm2
    vaddss  xmm2, xmm3, dword ptr [rsp+130h+end+8]
    vmovss  dword ptr [rsp+130h+end+8], xmm2
  }
  if ( bShowAll )
    totalLinkCount = v12->constant.totalLinkCount;
  else
    totalLinkCount = v12->dynamic.wLinkCount;
  __asm
  {
    vmovaps [rsp+130h+var_50], xmm7
    vmovaps [rsp+130h+var_60], xmm8
    vmovaps [rsp+130h+var_70], xmm9
    vmovaps [rsp+130h+var_80], xmm10
  }
  if ( totalLinkCount <= 0 )
  {
LABEL_8:
    Links = node->constant.Links;
    v32 = 2;
    for ( j = 2i64; j >= 0; --j )
    {
      if ( Links[v10].ubBadPlaceCount[j] )
        break;
      --v32;
    }
    if ( Path_IsNegotiationLink(node, &pathData.nodes[Links[v10].nodeNum]) )
    {
      v34 = &colorOrange;
      v35 = &colorOrange;
    }
    else
    {
      v34 = &colorRed;
      v35 = &colorMagenta;
      if ( v32 < 0 )
        v35 = &colorRed;
    }
    G_DebugLine(&pos, &end, v35, 1);
    __asm
    {
      vmovss  xmm5, cs:__real@41000000
      vmovss  xmm4, cs:__real@3f000000
      vmovss  xmm6, dword ptr [rsp+130h+pos]
      vaddss  xmm0, xmm6, dword ptr [rsp+130h+end]
      vmovss  xmm3, dword ptr [rsp+130h+pos+4]
      vmovss  xmm1, dword ptr [rsp+130h+pos+8]
      vsubss  xmm7, xmm1, dword ptr [rsp+130h+end+8]
      vmulss  xmm10, xmm0, xmm4
      vaddss  xmm0, xmm3, dword ptr [rsp+130h+end+4]
      vmulss  xmm9, xmm0, xmm4
      vaddss  xmm0, xmm1, dword ptr [rsp+130h+end+8]
      vmulss  xmm8, xmm0, xmm4
      vsubss  xmm4, xmm6, dword ptr [rsp+130h+end]
      vsubss  xmm6, xmm3, dword ptr [rsp+130h+end+4]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm2
      vmulss  xmm0, xmm1, xmm5
      vaddss  xmm4, xmm0, xmm10
      vmulss  xmm1, xmm6, xmm2
      vmulss  xmm0, xmm1, xmm5
      vaddss  xmm3, xmm0, xmm9
      vmulss  xmm1, xmm7, xmm2
      vmulss  xmm0, xmm1, xmm5
      vaddss  xmm2, xmm0, xmm8
      vaddss  xmm0, xmm2, xmm5
      vsubss  xmm1, xmm2, xmm5
      vmovss  dword ptr [rsp+130h+start+8], xmm0
      vmovss  dword ptr [rsp+130h+var_C0+8], xmm1
      vmovss  dword ptr [rsp+130h+var_F0], xmm10
      vmovss  dword ptr [rsp+130h+var_F0+4], xmm9
      vmovss  dword ptr [rsp+130h+var_F0+8], xmm8
      vmovss  dword ptr [rsp+130h+start], xmm4
      vmovss  dword ptr [rsp+130h+start+4], xmm3
      vmovss  dword ptr [rsp+130h+var_C0], xmm4
      vmovss  dword ptr [rsp+130h+var_C0+4], xmm3
    }
    G_DebugLine(&start, &v123, v34, 0);
    G_DebugLine(&v126, &v123, v34, 0);
  }
  else
  {
    v27 = v12->constant.Links;
    v28 = 0i64;
    v29 = 0i64;
    p_nodeNum = &v27->nodeNum;
    while ( node != &pathData.nodes[*p_nodeNum] )
    {
      ++v29;
      p_nodeNum += 6;
      if ( v29 >= totalLinkCount )
        goto LABEL_8;
    }
    if ( node > v12 )
    {
      v36 = node->constant.Links;
      v37 = 2i64;
      v38 = 2i64;
      v39 = 0;
      do
      {
        if ( v36[v10].ubBadPlaceCount[v38] )
        {
          v39 = 1;
          break;
        }
        --v38;
      }
      while ( v38 >= 0 );
      while ( !v27[v29].ubBadPlaceCount[v37] )
      {
        if ( --v37 < 0 )
          goto LABEL_23;
      }
      v39 |= 2u;
LABEL_23:
      if ( v39 )
      {
        v41 = &colorYellow;
        v44 = v39 == 3;
        v43 = &colorBlue;
      }
      else
      {
        flags = v36[v10].flags;
        v41 = &colorCyan;
        if ( flags )
          v41 = &colorGreen;
        wOverlapNode = node->constant.wOverlapNode;
        while ( *wOverlapNode != (_WORD)nodeNum )
        {
          ++v28;
          ++wOverlapNode;
          if ( v28 >= 2 )
            goto LABEL_34;
        }
        v43 = &colorLtOrange;
        v44 = flags == 0;
        v41 = &colorMagenta;
      }
      if ( !v44 )
        v41 = v43;
LABEL_34:
      G_DebugLine(&pos, &end, v41, 1);
      if ( (unsigned int)(v39 - 1) <= 1 )
      {
        __asm
        {
          vmovss  xmm4, cs:__real@3f000000
          vmovss  xmm6, dword ptr [rsp+130h+pos]
          vaddss  xmm0, xmm6, dword ptr [rsp+130h+end]
          vmovss  xmm3, dword ptr [rsp+130h+pos+4]
          vmovss  xmm1, dword ptr [rsp+130h+pos+8]
          vsubss  xmm5, xmm3, dword ptr [rsp+130h+end+4]
          vmulss  xmm8, xmm0, xmm4
          vaddss  xmm0, xmm3, dword ptr [rsp+130h+end+4]
          vmulss  xmm9, xmm0, xmm4
          vaddss  xmm0, xmm1, dword ptr [rsp+130h+end+8]
          vmulss  xmm10, xmm0, xmm4
          vsubss  xmm4, xmm6, dword ptr [rsp+130h+end]
          vsubss  xmm6, xmm1, dword ptr [rsp+130h+end+8]
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm2, xmm4, xmm1
          vmulss  xmm5, xmm5, xmm1
          vmulss  xmm6, xmm6, xmm1
          vmovss  dword ptr [rsp+130h+var_F0], xmm8
          vmovss  dword ptr [rsp+130h+var_F0+4], xmm9
          vmovss  dword ptr [rsp+130h+var_F0+8], xmm10
        }
        if ( v39 == 1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:__xmm@80000000800000008000000080000000
            vxorps  xmm2, xmm2, xmm0
            vxorps  xmm5, xmm5, xmm0
            vxorps  xmm6, xmm6, xmm0
          }
        }
        __asm
        {
          vmovss  xmm4, cs:__real@41000000
          vmulss  xmm0, xmm2, xmm4
          vaddss  xmm3, xmm0, xmm8
          vmulss  xmm1, xmm5, xmm4
          vaddss  xmm2, xmm1, xmm9
          vmulss  xmm0, xmm6, xmm4
          vaddss  xmm1, xmm0, xmm10
          vaddss  xmm0, xmm1, xmm4
          vsubss  xmm1, xmm1, xmm4
          vmovss  dword ptr [rsp+130h+var_C0+8], xmm1
          vmovss  dword ptr [rsp+130h+start], xmm3
          vmovss  dword ptr [rsp+130h+start+4], xmm2
          vmovss  dword ptr [rsp+130h+var_C0], xmm3
          vmovss  dword ptr [rsp+130h+var_C0+4], xmm2
          vmovss  dword ptr [rsp+130h+start+8], xmm0
        }
        G_DebugLine(&start, &v123, v41, 1);
        G_DebugLine(&v126, &v123, v41, 1);
      }
    }
  }
  __asm
  {
    vmovaps xmm10, [rsp+130h+var_80]
    vmovaps xmm9, [rsp+130h+var_70]
    vmovaps xmm8, [rsp+130h+var_60]
    vmovaps xmm7, [rsp+130h+var_50]
    vmovaps xmm6, [rsp+130h+var_40]
  }
}

/*
==============
Path_DrawDebugNoLinks
==============
*/
void Path_DrawDebugNoLinks(const pathnode_t *node, const vec4_t *color, int duration)
{
  vec3_t end; 
  vec3_t start; 
  vec3_t pos; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm7
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
  }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+pos+8]
    vaddss  xmm10, xmm0, cs:__real@3f800000
    vmovss  xmm8, dword ptr [rsp+0B8h+pos]
    vmovss  xmm9, cs:__real@40ddb3d7
    vmovss  xmm7, dword ptr [rsp+0B8h+pos+4]
    vaddss  xmm0, xmm8, xmm9
    vmovss  dword ptr [rsp+0B8h+start], xmm0
    vaddss  xmm0, xmm7, cs:__real@40800000
    vmovss  dword ptr [rsp+0B8h+start+4], xmm0
    vsubss  xmm0, xmm7, cs:__real@40800000
    vsubss  xmm1, xmm8, xmm9
    vmovss  dword ptr [rsp+0B8h+end+4], xmm0
    vmovss  dword ptr [rsp+0B8h+start+8], xmm10
    vmovss  dword ptr [rsp+0B8h+end], xmm1
    vmovss  dword ptr [rsp+0B8h+end+8], xmm10
  }
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  __asm
  {
    vsubss  xmm0, xmm8, cs:__real@40800000
    vaddss  xmm1, xmm7, xmm9
    vmovss  dword ptr [rsp+0B8h+start], xmm0
    vsubss  xmm0, xmm8, cs:__real@c0800000
    vmovss  dword ptr [rsp+0B8h+start+4], xmm1
    vsubss  xmm1, xmm7, xmm9
    vmovss  dword ptr [rsp+0B8h+end], xmm0
    vmovss  dword ptr [rsp+0B8h+end+4], xmm1
    vmovss  dword ptr [rsp+0B8h+start+8], xmm10
    vmovss  dword ptr [rsp+0B8h+end+8], xmm10
  }
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  _R11 = &v31;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
  }
}

/*
==============
Path_DrawDebugNode
==============
*/
void Path_DrawDebugNode(const vec3_t *cameraPos, const pathnode_t *node)
{
  const dvar_t *v8; 
  int integer; 
  bool v10; 
  bool v11; 
  unsigned __int16 type; 
  __int64 v13; 
  const dvar_t *v33; 
  unsigned __int16 v35; 
  char *v36; 
  const vec4_t *v37; 
  int v38; 
  const char *v39; 
  unsigned __int16 v46; 
  unsigned __int16 v47; 
  bool IsNodeIndexExposedSkyBase; 
  const char *v49; 
  unsigned __int16 v51; 
  const char *v52; 
  vec3_t xyz; 
  vec3_t pos; 

  _RSI = cameraPos;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7076, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v8 = DVARINT_ai_showNodesFilter;
  if ( !DVARINT_ai_showNodesFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodesFilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  if ( integer )
  {
    switch ( integer )
    {
      case 1:
        v10 = ((1 << LOBYTE(node->constant.type)) & 0x806400FC) == 0;
        goto LABEL_22;
      case 2:
        v11 = ((1 << LOBYTE(node->constant.type)) & 0x806400FC) == 0;
        goto LABEL_23;
      case 3:
        v11 = node->constant.type == 6;
        goto LABEL_23;
      case 4:
        v11 = node->constant.type == 7;
        goto LABEL_23;
      case 5:
        type = node->constant.type;
        if ( type != 2 && type != 22 )
          return;
        break;
      case 6:
        v11 = node->constant.type == 3;
        goto LABEL_23;
      case 7:
        v11 = node->constant.type == 4;
        goto LABEL_23;
      case 8:
        v11 = node->constant.type == 5;
        goto LABEL_23;
      case 9:
        v11 = node->constant.type == 31;
        goto LABEL_23;
      case 10:
        v11 = (unsigned int)node->constant.type - 10 <= 2;
        goto LABEL_23;
      case 11:
        v10 = ((1 << LOBYTE(node->constant.type)) & 0x78030000) == 0;
LABEL_22:
        v11 = !v10;
LABEL_23:
        if ( v11 )
          break;
        return;
      default:
        break;
    }
  }
  v13 = node->constant.type;
  __asm
  {
    vmovss  xmm2, cs:__real@41800000; width
    vmovaps [rsp+0C8h+var_28], xmm6
    vmovaps [rsp+0C8h+var_38], xmm7
    vmovaps [rsp+0C8h+var_48], xmm8
    vmovaps [rsp+0C8h+var_58], xmm9
  }
  Path_DrawDebugNodeBoxWithParams(node, &nodeColorTable[v13], *(float *)&_XMM2, 0);
  if ( (node->constant.spawnflags & 0x4000) != 0 && node->constant.error == PNERR_NOPEEKOUT )
    Path_DrawDebugPeekOuts(node);
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm9, dword ptr [rsp+0C8h+pos+8]
    vaddss  xmm0, xmm9, cs:__real@41000000
    vmovss  xmm7, dword ptr [rsp+0C8h+pos]
    vmovss  xmm8, dword ptr [rsp+0C8h+pos+4]
    vmovss  xmm6, cs:__real@3f800000
    vmovss  dword ptr [rsp+0C8h+xyz+8], xmm0
    vmovss  dword ptr [rsp+0C8h+xyz], xmm7
    vmovss  dword ptr [rsp+0C8h+xyz+4], xmm8
  }
  if ( G_Utils_FindEntity(NULL, 380, scr_const.player) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm5, xmm0, dword ptr [rsp+0C8h+xyz]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm2, xmm0, dword ptr [rsp+0C8h+xyz+8]
      vsubss  xmm4, xmm1, dword ptr [rsp+0C8h+xyz+4]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, dword ptr [rax+1E8h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmulss  xmm6, xmm0, cs:__real@3b11a2b4
    }
  }
  v33 = DVARINT_path_nodeInfoType;
  __asm { vmulss  xmm6, xmm6, cs:__real@3f400000 }
  if ( !DVARINT_path_nodeInfoType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "path_nodeInfoType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  switch ( v33->current.integer )
  {
    case 0:
      v38 = Path_ConvertNodeToIndex(node);
      if ( v38 < pathData.fixedNodeCount || (v39 = "%d*", v38 >= pathData.maxDynamicSpawnedNodeCount + pathData.fixedNodeCount) )
        v39 = "%d";
      v36 = j_va(v39);
      v37 = &colorYellow;
      goto LABEL_60;
    case 1:
      v35 = node->constant.type;
      if ( (node->constant.spawnflags & 0x20) != 0 )
      {
        v36 = j_va("%s:Choke", nodeStringTable[v35]);
        v37 = &colorYellow;
      }
      else if ( v35 == 31 )
      {
        v36 = j_va("%s:%s", nodeStringTable[31], nodeStringTable[node->dynamic.coverMultiType]);
        v37 = &colorYellow;
      }
      else
      {
        v37 = &colorYellow;
        v36 = (char *)nodeStringTable[v35];
      }
      goto LABEL_60;
    case 2:
      __asm
      {
        vcvtss2sd xmm3, xmm9, xmm9; jumptable 00000001412125C4 case 2
        vcvtss2sd xmm2, xmm8, xmm8
        vcvtss2sd xmm1, xmm7, xmm7
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v36 = j_va("(%0.f %0.f %0.f)", _RDX, _R8, _R9);
      v37 = &colorYellow;
      goto LABEL_60;
    case 3:
      if ( pathData.usePathExtraData )
      {
        v46 = Path_ConvertNodeToIndex(node);
        if ( Path_IsNodeIndexExposedSkyBase(v46, 0) )
        {
          v47 = Path_ConvertNodeToIndex(node);
          IsNodeIndexExposedSkyBase = Path_IsNodeIndexExposedSkyBase(v47, 1);
          v49 = "SkyStrict";
          if ( !IsNodeIndexExposedSkyBase )
            v49 = "Sky";
          v37 = &colorYellow;
          goto LABEL_61;
        }
LABEL_49:
        v49 = "In";
        v37 = &colorYellow;
        goto LABEL_61;
      }
      if ( (node->constant.spawnflags & 0x2000) != 0 )
        goto LABEL_49;
      v49 = "Transition";
      if ( (node->constant.spawnflags & 2) == 0 )
        v49 = "Out";
      v37 = &colorYellow;
LABEL_61:
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&xyz, v37, *(float *)&_XMM2, v49);
LABEL_62:
      __asm
      {
        vmovaps xmm8, [rsp+0C8h+var_48]; jumptable 00000001412125C4 default case
        vmovaps xmm7, [rsp+0C8h+var_38]
        vmovaps xmm6, [rsp+0C8h+var_28]
        vmovaps xmm9, [rsp+0C8h+var_58]
      }
      return;
    case 4:
      __asm { vmovaps xmm1, xmm6; jumptable 00000001412125C4 case 4 }
      Path_DrawDebugClaimedNode(node, *(double *)&_XMM1);
      goto LABEL_62;
    case 5:
      Path_DrawDebugPeekOuts(node);
      goto LABEL_62;
    case 6:
      v51 = node->constant.type;
      if ( (node->constant.spawnflags & 0x10000) != 0 )
      {
        v36 = j_va("%s:LMG Mountable", nodeStringTable[v51]);
        v37 = &colorYellow;
      }
      else
      {
        v52 = "%s:DONT LMG";
        if ( (node->constant.spawnflags & 0x80u) == 0 )
          v52 = "%s:Not Mountable";
        v36 = j_va(v52, nodeStringTable[v51]);
        v37 = &colorRed;
      }
LABEL_60:
      v49 = v36;
      goto LABEL_61;
    default:
      goto LABEL_62;
  }
}

/*
==============
Path_DrawDebugNodeBox
==============
*/
void Path_DrawDebugNodeBox(const pathnode_t *node)
{
  __asm { vmovss  xmm2, cs:__real@41800000; width }
  Path_DrawDebugNodeBoxWithParams(node, &nodeColorTable[node->constant.type], *(float *)&_XMM2, 0);
}

/*
==============
Path_DrawDebugNodeBoxWithParams
==============
*/

void __fastcall Path_DrawDebugNodeBoxWithParams(const pathnode_t *node, const vec4_t *color, double width, int duration)
{
  int v14; 
  float c; 
  float s; 
  vec3_t start; 
  vec3_t end; 
  vec3_t pos; 
  vec3_t vector; 
  Bounds box; 
  vec3_t up; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+120h+var_20], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6764, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmulss  xmm1, xmm6, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
  }
  v14 = 1 << LOBYTE(node->constant.type);
  __asm
  {
    vmovss  dword ptr [rsp+120h+box.midPoint], xmm0
    vmovss  dword ptr [rsp+120h+box.midPoint+4], xmm0
    vmovss  dword ptr [rbp+20h+box.midPoint+8], xmm1
    vmovss  dword ptr [rbp+20h+box.halfSize], xmm6
    vmovss  dword ptr [rbp+20h+box.halfSize+4], xmm6
    vmovss  dword ptr [rbp+20h+box.halfSize+8], xmm1
  }
  if ( (v14 & 0x62700000) != 0 )
  {
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    AnglesToAxis(&vector, &axis);
    G_DebugBoxOriented(&pos, &box, &axis, color, 1, duration);
  }
  else
  {
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    __asm { vmovss  xmm2, dword ptr [rsp+120h+vector+4]; yaw }
    G_DebugBox(&pos, &box, *(float *)&_XMM2, color, 1, duration);
  }
  if ( (node->constant.spawnflags & 0x8000) != 0 )
  {
    if ( ((1 << LOBYTE(node->constant.type)) & 0x62700000) != 0 )
    {
      __asm
      {
        vmovaps [rsp+120h+var_30], xmm7
        vmovaps [rsp+120h+var_40], xmm8
      }
      pathnode_t::GetAngles((pathnode_t *)node, &vector);
      AngleVectors(&vector, NULL, NULL, &up);
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+20h+box.midPoint+8]
        vmulss  xmm0, xmm1, dword ptr [rbp+20h+up]
        vaddss  xmm2, xmm0, dword ptr [rsp+120h+pos]
        vmulss  xmm0, xmm1, dword ptr [rbp+20h+up+4]
        vaddss  xmm5, xmm0, dword ptr [rsp+120h+pos+4]
        vmulss  xmm0, xmm1, dword ptr [rbp+20h+up+8]
        vaddss  xmm4, xmm0, dword ptr [rsp+120h+pos+8]
        vmovss  xmm3, dword ptr [rbp+20h+box.halfSize+8]
        vmulss  xmm0, xmm3, dword ptr [rbp+20h+up]
        vaddss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rsp+120h+start], xmm2
        vmulss  xmm2, xmm3, dword ptr [rbp+20h+up+4]
        vaddss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rsp+120h+end], xmm1
        vmulss  xmm1, xmm3, dword ptr [rbp+20h+up+8]
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rsp+120h+end+8], xmm2
        vmovss  dword ptr [rsp+120h+start+4], xmm5
        vmovss  dword ptr [rsp+120h+start+8], xmm4
        vmovss  dword ptr [rsp+120h+end+4], xmm0
      }
      G_DebugLineWithDuration(&start, &end, color, 1, duration);
      AngleVectors(&vector, &forward, NULL, NULL);
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+20h+box.halfSize]
        vmulss  xmm1, xmm3, dword ptr [rbp+20h+forward]
        vaddss  xmm2, xmm1, dword ptr [rsp+120h+start]
        vmulss  xmm1, xmm3, dword ptr [rbp+20h+forward+4]
        vmovaps xmm8, [rsp+120h+var_40]
        vmovaps xmm7, [rsp+120h+var_30]
        vmovss  dword ptr [rsp+120h+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+120h+start+4]
        vmulss  xmm1, xmm3, dword ptr [rbp+20h+forward+8]
        vmovss  dword ptr [rsp+120h+end+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+120h+start+8]
        vmovss  dword ptr [rsp+120h+end+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+120h+box.midPoint]
        vaddss  xmm1, xmm0, dword ptr [rsp+120h+pos]
        vmovss  xmm2, dword ptr [rsp+120h+box.midPoint+4]
        vaddss  xmm0, xmm2, dword ptr [rsp+120h+pos+4]
        vmovss  dword ptr [rsp+120h+start], xmm1
        vmovss  xmm1, dword ptr [rsp+120h+pos+8]
        vaddss  xmm2, xmm1, dword ptr [rbp+20h+box.midPoint+8]
        vmovss  dword ptr [rsp+120h+start+8], xmm2
        vmovss  dword ptr [rsp+120h+start+4], xmm0
      }
      pathnode_t::GetAngles((pathnode_t *)node, &vector);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+120h+vector+4]
        vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
      }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+20h+box.halfSize]
        vmulss  xmm0, xmm2, [rsp+120h+c]
        vaddss  xmm1, xmm0, dword ptr [rsp+120h+start]
        vmulss  xmm2, xmm2, [rsp+120h+s]
        vaddss  xmm0, xmm2, dword ptr [rsp+120h+start+4]
        vmovss  dword ptr [rsp+120h+end], xmm1
        vmovss  xmm1, dword ptr [rsp+120h+start+8]
        vmovss  dword ptr [rsp+120h+end+8], xmm1
        vmovss  dword ptr [rsp+120h+end+4], xmm0
      }
    }
    G_DebugLineWithDuration(&start, &end, color, 1, duration);
  }
  __asm { vmovaps xmm6, [rsp+120h+var_20] }
}

/*
==============
Path_DrawDebugPeekOutOffset
==============
*/
void Path_DrawDebugPeekOutOffset(const pathnode_t *node, const vec3_t *offset, const vec4_t *color, const char *traceEndDebugStr)
{
  char v6; 
  vec3_t end; 
  vec3_t xyz; 
  vec3_t v51; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  vec3_t vector; 
  vec3_t pos; 

  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rdx]
  }
  _RDI = (vec3_t *)offset;
  if ( !v6 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rdx+4]
  }
  if ( !v6 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rdx+8]
  }
  if ( !v6 )
  {
LABEL_4:
    __asm
    {
      vmovaps [rsp+100h+var_30], xmm6
      vmovaps [rsp+100h+var_40], xmm8
    }
    pathnode_t::GetPos((pathnode_t *)node, &pos);
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6930, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( (node->constant.spawnflags & 0x8000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6931, ASSERT_TYPE_ASSERT, "(node->constant.spawnflags & PNF_ANGLEVALID)", (const char *)&queryFormat, "node->constant.spawnflags & PNF_ANGLEVALID") )
      __debugbreak();
    pathnode_t::GetPos((pathnode_t *)node, &v51);
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    AngleVectors(&vector, &forward, NULL, NULL);
    AnglesToAxis(&vector, &axis);
    if ( _RDI == &end && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm5, dword ptr [rdi+4]
      vmulss  xmm3, xmm5, dword ptr [rbp+57h+axis+0Ch]
      vmovss  xmm1, dword ptr [rbp+57h+axis]
      vmulss  xmm2, xmm1, dword ptr [rdi]
      vmovss  xmm0, dword ptr [rbp+57h+axis+18h]
      vmulss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  xmm0, dword ptr [rbp+57h+axis+1Ch]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm5, dword ptr [rbp+57h+axis+10h]
      vaddss  xmm2, xmm4, xmm1
      vaddss  xmm8, xmm2, dword ptr [rbp+57h+var_B0]
      vmovss  xmm1, dword ptr [rbp+57h+axis+4]
      vmulss  xmm2, xmm1, dword ptr [rdi]
      vmulss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  xmm0, dword ptr [rbp+57h+axis+20h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm5, dword ptr [rbp+57h+axis+14h]
      vaddss  xmm2, xmm4, xmm1
      vaddss  xmm6, xmm2, dword ptr [rbp+57h+var_B0+4]
      vmovss  xmm1, dword ptr [rbp+57h+axis+8]
      vmulss  xmm2, xmm1, dword ptr [rdi]
      vmulss  xmm1, xmm0, dword ptr [rdi+8]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm3, cs:__real@42000000
      vaddss  xmm2, xmm4, xmm1
      vaddss  xmm5, xmm2, dword ptr [rbp+57h+var_B0+8]
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+forward]
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+forward+4]
      vmovss  dword ptr [rbp+57h+xyz], xmm2
      vaddss  xmm2, xmm1, xmm6
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+forward+8]
      vmovss  dword ptr [rbp+57h+xyz+4], xmm2
      vaddss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rbp+57h+xyz+8], xmm2
      vmovss  dword ptr [rbp+57h+end], xmm8
      vmovss  dword ptr [rbp+57h+end+4], xmm6
      vmovss  dword ptr [rbp+57h+end+8], xmm5
    }
    G_DebugLine(&pos, &end, color, 1);
    G_DebugLine(&end, &xyz, color, 1);
    __asm
    {
      vmovaps xmm8, [rsp+100h+var_40]
      vmovaps xmm6, [rsp+100h+var_30]
    }
    if ( traceEndDebugStr )
    {
      __asm { vmovss  xmm2, cs:__real@3e19999a; scale }
      G_Main_AddDebugString(&xyz, color, *(float *)&_XMM2, traceEndDebugStr);
    }
  }
}

/*
==============
Path_DrawDebugPeekOuts
==============
*/
void Path_DrawDebugPeekOuts(const pathnode_t *node)
{
  const vec3_t *v2; 
  __int64 v3; 
  const unsigned int *v4; 
  unsigned int v5; 
  const vec4_t *v6; 
  const char *v7; 

  v2 = nodePeekOutOffsets[node->constant.type];
  if ( v2 )
  {
    v3 = 6i64;
    v4 = nodeConstPeekOutFlags;
    do
    {
      v5 = *v4;
      if ( (*v4 & 0xE00) != 0 && (node->constant.spawnflags & 4) != 0 )
      {
        v6 = &colorWhiteFaded;
        v7 = "DONTSTAND";
      }
      else if ( (v5 & 0x700000) != 0 && (node->constant.spawnflags & 8) != 0 )
      {
        v6 = &colorWhiteFaded;
        v7 = "DONTCROUCH";
      }
      else if ( (v5 & 0xC00) != 0 && (node->constant.spawnflags & 0x200) != 0 )
      {
        v6 = &colorWhiteFaded;
        v7 = "NOCOVER";
      }
      else
      {
        if ( (v5 & node->constant.spawnflags) != 0 )
          v6 = &nodeColorTable[node->constant.type];
        else
          v6 = &colorRed;
        v7 = NULL;
      }
      Path_DrawDebugPeekOutOffset(node, v2++, v6, v7);
      ++v4;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
Path_DrawVisData
==============
*/
void Path_DrawVisData()
{
  gentity_s *Entity; 
  gentity_s *v1; 
  const dvar_t *v2; 
  pathnode_t *v3; 
  const pathnode_t *v4; 
  unsigned __int16 v5; 
  unsigned int v6; 
  pathnode_t *v7; 
  const dvar_t *v8; 
  char v18; 
  char v19; 
  const vec4_t *v20; 
  vec3_t end; 
  vec3_t pos; 
  vec3_t outPos; 

  Entity = G_Utils_FindEntity(NULL, 380, scr_const.player);
  v1 = Entity;
  if ( Entity )
  {
    if ( !Entity->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7248, ASSERT_TYPE_ASSERT, "( player->sentient )", (const char *)&queryFormat, "player->sentient") )
      __debugbreak();
    v2 = DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates;
    if ( !DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_DisablePlayerNearestDataUpdates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
      Sentient_InvalidateNearestNode(v1->sentient);
    v3 = Sentient_NearestNode(v1->sentient);
    v4 = v3;
    if ( v3 )
    {
      pathnode_t::GetPos(v3, &pos);
      CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
      Path_DrawDebugNode(&outPos, v4);
      v5 = 0;
      v6 = g_path.actualNodeCount - pathData.zoneCount;
      if ( g_path.actualNodeCount != pathData.zoneCount )
      {
        do
        {
          if ( !Path_NodeValid(v5) )
            goto LABEL_38;
          v7 = &pathData.nodes[v5];
          if ( v7 == v4 )
            goto LABEL_38;
          v8 = DVARINT_ai_showVisData;
          if ( !DVARINT_ai_showVisData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showVisData") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          if ( v8->current.integer == 2 && ((1 << LOBYTE(v7->constant.type)) & 0x82641EFC) == 0 )
            goto LABEL_38;
          pathnode_t::GetPos(v7, &end);
          _RDI = DVARFLT_ai_showVisDataDist;
          if ( !DVARFLT_ai_showVisDataDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showVisDataDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0A8h+end]
            vmovss  xmm1, dword ptr [rsp+0A8h+end+4]
            vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+pos+4]
            vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+pos]
            vmulss  xmm3, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm3, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vcomiss xmm2, dword ptr [rdi+28h]
          }
          if ( !(v18 | v19) )
            goto LABEL_38;
          if ( pathData.usePathExtraData && Dvar_GetInt_Internal_DebugName(DVARINT_ai_showVisData, "ai_showVisData") == 4 )
          {
            if ( pathData.pathNoPeekVis )
            {
              Path_DrawDebugNode(&outPos, v7);
              if ( !Path_NodesVisibleNoPeek(v4, v7) )
              {
LABEL_36:
                v20 = &colorYellow;
                goto LABEL_37;
              }
              v20 = &colorRed;
LABEL_37:
              G_DebugLine(&pos, &end, v20, 0);
            }
          }
          else
          {
            if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showVisData, "ai_showVisData") != 3 && Path_NodeSafeFrom(v4, v7) && Path_NodesVisible(v4, v7) )
            {
              Path_DrawDebugNode(&outPos, v7);
              v20 = &colorGreen;
              goto LABEL_37;
            }
            if ( Path_NodesVisible(v4, v7) )
            {
              Path_DrawDebugNode(&outPos, v7);
              v20 = &colorRed;
              goto LABEL_37;
            }
            if ( Path_NodeSafeFrom(v4, v7) )
            {
              Path_DrawDebugNode(&outPos, v7);
              goto LABEL_36;
            }
          }
LABEL_38:
          ++v5;
        }
        while ( v5 < v6 );
      }
    }
  }
}

/*
==============
Path_EntIsNodeParent
==============
*/
char Path_EntIsNodeParent(int entNum)
{
  int v1; 
  PathDynamicNodeGroup *i; 

  v1 = 0;
  if ( pathData.dynamicNodeGroupCount <= 0 )
    return 0;
  for ( i = pathData.dynamicNodeGroups; i->parentIndex != entNum; ++i )
  {
    if ( ++v1 >= pathData.dynamicNodeGroupCount )
      return 0;
  }
  return 1;
}

/*
==============
Path_FirstNode
==============
*/
pathnode_t *Path_FirstNode(int typeFlags)
{
  unsigned __int16 v1; 

  v1 = 0;
  if ( !g_path.actualNodeCount )
    return 0i64;
  while ( !_bittest(&typeFlags, LOBYTE(pathData.nodes[v1].constant.type)) )
  {
    if ( ++v1 >= g_path.actualNodeCount )
      return 0i64;
  }
  return &pathData.nodes[v1];
}

/*
==============
Path_FixedNodeCount
==============
*/
__int64 Path_FixedNodeCount()
{
  __int64 result; 

  result = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount) < 0 )
    return 0i64;
  return result;
}

/*
==============
Path_ForceClaimNode
==============
*/
void Path_ForceClaimNode(pathnode_t *node, sentient_s *claimer)
{
  int NodeTeam; 
  pathnode_t *pClaimedNode; 
  SentientHandle *v6; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9937, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !claimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9938, ASSERT_TYPE_ASSERT, "(claimer)", (const char *)&queryFormat, "claimer") )
    __debugbreak();
  NodeTeam = Path_GetNodeTeam(claimer->eTeam);
  pClaimedNode = claimer->pClaimedNode;
  if ( pClaimedNode && pClaimedNode != node )
    Path_RelinquishNode(claimer, 5000);
  v6 = Path_NodeOwnerSentHandle(node, NodeTeam);
  if ( SentientHandle::isDefined(v6) && SentientHandle::sentient(v6) == claimer )
  {
    if ( claimer->pClaimedNode != node )
      Path_ClaimNode(node, claimer);
  }
  else
  {
    Path_RevokeClaim(node, claimer);
    v7 = node->constant.wOverlapNode[0];
    if ( v7 != 0xFFFF )
    {
      Path_RevokeClaim(&pathData.nodes[v7], claimer);
      v8 = node->constant.wOverlapNode[1];
      if ( v8 != 0xFFFF )
        Path_RevokeClaim(&pathData.nodes[v8], claimer);
    }
    if ( !Path_NodeIsClaimed(node, NodeTeam) )
    {
      SentientHandle::setSentient(v6, claimer);
      Path_NodeSetFreeTime_Claimed(node, NodeTeam);
      v9 = node->constant.wOverlapNode[0];
      if ( v9 != 0xFFFF )
      {
        Path_MarkNodeOverlap(&pathData.nodes[v9], NodeTeam);
        v10 = node->constant.wOverlapNode[1];
        if ( v10 != 0xFFFF )
          Path_MarkNodeOverlap(&pathData.nodes[v10], NodeTeam);
      }
      Path_ClaimNodeInternal(node, claimer);
    }
  }
}

/*
==============
Path_GetActorBounds
==============
*/
Bounds *Path_GetActorBounds(pathnode_t *pNode)
{
  unsigned int v1; 

  if ( !pNode || 1 << LOBYTE(pNode->constant.type) != ((1 << LOBYTE(pNode->constant.type)) & 0x78130002) )
    return &actorBox;
  v1 = pNode->constant.spawnflags & 0x5C;
  if ( v1 != 68 )
  {
    if ( v1 == 76 )
      return &actorBoxProne;
    if ( v1 != 84 )
      return &actorBox;
  }
  return &actorBoxCrouch;
}

/*
==============
Path_GetDebugStringScale
==============
*/
float Path_GetDebugStringScale(const vec3_t *cameraPos, const vec3_t *origin)
{
  _RDI = cameraPos;
  if ( G_Utils_FindEntity(NULL, 380, scr_const.player) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm5, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm2, xmm0, dword ptr [rbx+8]
      vsubss  xmm4, xmm1, dword ptr [rbx+4]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, dword ptr [rax+1E8h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmulss  xmm0, xmm0, cs:__real@3b11a2b4
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Path_GetHighestNodeStance
==============
*/
__int64 Path_GetHighestNodeStance(const pathnode_t *node)
{
  scr_string_t stand; 
  bool DoesNodeAllowStance; 
  unsigned int v5; 

  stand = scr_const.stand;
  if ( Path_DoesNodeAllowStance(node, (const scr_string_t)scr_const.stand) )
    return (unsigned int)stand;
  stand = scr_const.crouch;
  if ( Path_DoesNodeAllowStance(node, (const scr_string_t)scr_const.crouch) )
    return (unsigned int)stand;
  DoesNodeAllowStance = Path_DoesNodeAllowStance(node, (const scr_string_t)scr_const.prone);
  v5 = 0;
  if ( DoesNodeAllowStance )
    return (unsigned int)scr_const.prone;
  return v5;
}

/*
==============
Path_GetMaskSolidDisconnectPathMask
==============
*/
__int64 Path_GetMaskSolidDisconnectPathMask()
{
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 33767441i64;
  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
    return 33685521i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10382, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No active AI types") )
    __debugbreak();
  return 0i64;
}

/*
==============
Path_GetNodeFromEntref
==============
*/
pathnode_t *Path_GetNodeFromEntref(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned __int16 v3; 

  if ( entref.entclass == ENTITY_CLASS_PATHNODE )
  {
    v3 = truncate_cast<unsigned short,unsigned int>(entref.entnum);
    if ( !Path_NodeValid(v3) && (!pathData.usePathExtraData || (signed int)(g_path.actualNodeCount - pathData.zoneCount) > v3 || v3 > (signed int)(g_path.actualNodeCount - 1)) )
      Scr_Error(COM_ERR_2521, scrContext, "GetNodeFromEntref: called on despawned node.");
    return Path_ConvertIndexToNode(v3);
  }
  else
  {
    Scr_Error(COM_ERR_2522, scrContext, "Not a pathnode");
    return 0i64;
  }
}

/*
==============
Path_GetNodeOwner
==============
*/
sentient_s *Path_GetNodeOwner(const pathnode_t *node, int ownerIndex, int nodeTeam)
{
  __int64 v3; 
  pathnode_t *v6; 
  SentientHandle *v7; 
  unsigned __int16 v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = ownerIndex;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9484, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (unsigned int)v3 >= 3 )
  {
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9485, ASSERT_TYPE_ASSERT, "(unsigned)( ownerIndex ) < (unsigned)( (2 + 1) )", "ownerIndex doesn't index MAX_PATH_NODE_OWNERS\n\t%i not in [0, %i)", v10, 3) )
      __debugbreak();
  }
  if ( (_DWORD)v3 )
  {
    if ( (unsigned int)(v3 - 1) >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = v3 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9496, ASSERT_TYPE_ASSERT, "(unsigned)( overlapIndex ) < (unsigned)( 2 )", "overlapIndex doesn't index MAX_OVERLAP_NODES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v9 = *((_WORD *)&node->constant.error + v3 + 1);
    if ( v9 == 0xFFFF )
      return 0i64;
    v6 = &pathData.nodes[v9];
  }
  else
  {
    v6 = (pathnode_t *)node;
  }
  v7 = (SentientHandle *)Path_NodeOwnerSentHandleConst(v6, nodeTeam);
  if ( SentientHandle::isDefined(v7) )
    return SentientHandle::sentient(v7);
  return 0i64;
}

/*
==============
Path_GetNodeOwnerCount
==============
*/
__int64 Path_GetNodeOwnerCount(const pathnode_t *node, int nodeTeam)
{
  SentientHandle *v4; 
  unsigned __int16 *wOverlapNode; 
  unsigned int v6; 
  __int64 v7; 
  pathnode_t *v8; 
  bool v9; 
  const char *GameType; 
  int v11; 
  int v12; 
  unsigned int v13; 
  const char *v14; 
  int v15; 
  int v16; 
  const char *v17; 
  int v18; 
  __int64 v20; 
  __int64 v21; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9457, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v4 = (SentientHandle *)Path_NodeOwnerSentHandleConst(node, nodeTeam);
  wOverlapNode = node->constant.wOverlapNode;
  v6 = 0;
  v7 = 2i64;
  if ( SentientHandle::isDefined(v4) )
    v6 = 1;
  do
  {
    if ( *wOverlapNode != 0xFFFF )
    {
      v8 = &pathData.nodes[*wOverlapNode];
      if ( BG_BotSystemEnabled() )
      {
        GameType = SV_GameMP_GetGameType();
        v11 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
        if ( !v11 )
        {
          v11 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
          if ( !v11 )
            v11 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
        }
        v9 = v11 == 0;
      }
      else
      {
        v9 = 1;
      }
      v12 = nodeTeam;
      if ( v9 )
        v12 = 0;
      if ( !v8 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v14 = SV_GameMP_GetGameType();
        v15 = *(unsigned __int8 *)v14 - (unsigned __int8)aBr_2[0];
        if ( !v15 )
        {
          v15 = *((unsigned __int8 *)v14 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v15 )
            v15 = *((unsigned __int8 *)v14 + 2) - (unsigned __int8)aBr_2[2];
        }
        v13 = (v15 != 0) + 1;
      }
      else
      {
        v13 = 1;
      }
      if ( v12 >= v13 )
      {
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          v17 = SV_GameMP_GetGameType();
          v18 = *(unsigned __int8 *)v17 - (unsigned __int8)aBr_2[0];
          if ( !v18 )
          {
            v18 = *((unsigned __int8 *)v17 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v18 )
              v18 = *((unsigned __int8 *)v17 + 2) - (unsigned __int8)aBr_2[2];
          }
          v16 = (v18 != 0) + 1;
        }
        else
        {
          v16 = 1;
        }
        LODWORD(v21) = v16;
        LODWORD(v20) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( SentientHandle::isDefined(&v8->dynamic.pOwners[v12]) )
        ++v6;
    }
    ++wOverlapNode;
    --v7;
  }
  while ( v7 );
  return v6;
}

/*
==============
Path_GetPeekOutLine
==============
*/
void Path_GetPeekOutLine(const pathnode_t *node, const vec3_t *offset, vec3_t *outStart, vec3_t *outEnd)
{
  vec3_t pos; 
  vec3_t forward; 
  vec3_t vector; 
  tmat33_t<vec3_t> axis; 

  _RSI = outEnd;
  _RDI = outStart;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6930, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (node->constant.spawnflags & 0x8000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6931, ASSERT_TYPE_ASSERT, "(node->constant.spawnflags & PNF_ANGLEVALID)", (const char *)&queryFormat, "node->constant.spawnflags & PNF_ANGLEVALID") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  pathnode_t::GetAngles((pathnode_t *)node, &vector);
  AngleVectors(&vector, &forward, NULL, NULL);
  AnglesToAxis(&vector, &axis);
  MatrixTransformVector(offset, &axis, _RDI);
  __asm
  {
    vmovss  xmm3, cs:__real@42000000
    vmovss  xmm0, dword ptr [rsp+0B8h+pos]
    vaddss  xmm2, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsp+0B8h+pos+4]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsp+0B8h+pos+8]
    vmovss  dword ptr [rdi+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm1
    vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+forward]
    vmovss  dword ptr [rdi], xmm2
    vaddss  xmm2, xmm1, xmm2
    vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+forward+4]
    vmovss  dword ptr [rsi], xmm2
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+forward+8]
    vmovss  dword ptr [rsi+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rsi+8], xmm2
  }
}

/*
==============
Path_GetSpawnedNodeIndex
==============
*/
__int64 Path_GetSpawnedNodeIndex(unsigned __int16 nodeIndex)
{
  signed int v1; 
  signed int v2; 
  int v3; 
  signed int v4; 
  __int16 v5; 
  unsigned __int16 v6; 
  __int16 v7; 

  v1 = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  v2 = nodeIndex;
  if ( v1 < 0 )
    v1 = 0;
  v3 = nodeIndex;
  if ( nodeIndex < v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1745, ASSERT_TYPE_ASSERT, "(nodeIndex >= Path_FixedNodeCount())", (const char *)&queryFormat, "nodeIndex >= Path_FixedNodeCount()") )
    __debugbreak();
  if ( v2 >= (signed int)(g_path.actualNodeCount - pathData.zoneCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1746, ASSERT_TYPE_ASSERT, "(nodeIndex < Path_NodeCount())", (const char *)&queryFormat, "nodeIndex < Path_NodeCount()") )
    __debugbreak();
  v4 = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  v5 = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount) - LOWORD(pathData.maxDynamicSpawnedNodeCount);
  if ( v4 < 0 )
    v5 = 0;
  v6 = v2 - v5;
  if ( v4 < 0 )
    v4 = 0;
  if ( v3 - v4 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1747, ASSERT_TYPE_ASSERT, "(nodeIndex - Path_FixedNodeCount() == static_cast<pathnode_id>(nodeIndex - Path_FixedNodeCount()))", (const char *)&queryFormat, "nodeIndex - Path_FixedNodeCount() == static_cast<pathnode_id>(nodeIndex - Path_FixedNodeCount())") )
    __debugbreak();
  v7 = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount) - LOWORD(pathData.maxDynamicSpawnedNodeCount);
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount) < 0 )
    v7 = 0;
  return (unsigned __int16)(v3 - v7);
}

/*
==============
Path_Init
==============
*/
void Path_Init(int restart, bool enforceDataExists)
{
  const char *MapName; 
  const char *CompileBSPFilename; 

  Nav_InitNavPower();
  if ( enforceDataExists )
  {
    MapName = SV_Game_GetMapName();
    CompileBSPFilename = Com_GetCompileBSPFilename(MapName);
    if ( DB_FindXAssetHeader(ASSET_TYPE_PATHDATA, CompileBSPFilename, 1).pathData != &pathData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5510, ASSERT_TYPE_ASSERT, "(header.pathData == &pathData)", (const char *)&queryFormat, "header.pathData == &pathData") )
      __debugbreak();
    if ( !pathData.nodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5524, ASSERT_TYPE_ASSERT, "(pathData.nodes)", (const char *)&queryFormat, "pathData.nodes") )
      __debugbreak();
  }
  memset_0(&g_path, 0, sizeof(g_path));
  debugPath = NULL;
  Path_InitBadPlaces();
  s_numPathParentMaps = 0;
  s_bNeedToMapParentIndexToParentName = 0;
}

/*
==============
Path_InitLinkCount
==============
*/
void Path_InitLinkCount(pathnode_t *node)
{
  unsigned int totalLinkCount; 
  __int64 v3; 
  __int64 v4; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6139, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  LOWORD(totalLinkCount) = node->constant.totalLinkCount;
  v3 = 0i64;
  node->dynamic.wLinkCount = totalLinkCount;
  if ( (_WORD)totalLinkCount )
  {
    do
    {
      v4 = v3;
      v3 = (unsigned int)(v3 + 1);
      node->constant.Links[v4].ubBadPlaceCount[0] = 0;
      node->constant.Links[v4].ubBadPlaceCount[1] = 0;
      node->constant.Links[v4].ubBadPlaceCount[2] = 0;
      totalLinkCount = node->constant.totalLinkCount;
    }
    while ( (unsigned int)v3 < totalLinkCount );
  }
  qsort(node->constant.Links, (unsigned __int16)totalLinkCount, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)Path_LinkCompare);
}

/*
==============
Path_InitLinkCounts
==============
*/
void Path_InitLinkCounts(void)
{
  unsigned int i; 
  pathnode_t *v1; 
  unsigned int totalLinkCount; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 

  for ( i = 0; i < pathData.nodeCount; ++i )
  {
    v1 = &pathData.nodes[i];
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6139, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    LOWORD(totalLinkCount) = v1->constant.totalLinkCount;
    v3 = 0;
    v1->dynamic.wLinkCount = totalLinkCount;
    if ( (_WORD)totalLinkCount )
    {
      do
      {
        v4 = v3++;
        v5 = v4;
        v1->constant.Links[v5].ubBadPlaceCount[0] = 0;
        v1->constant.Links[v5].ubBadPlaceCount[1] = 0;
        v1->constant.Links[v5].ubBadPlaceCount[2] = 0;
        totalLinkCount = v1->constant.totalLinkCount;
      }
      while ( v3 < totalLinkCount );
    }
    qsort(v1->constant.Links, (unsigned __int16)totalLinkCount, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)Path_LinkCompare);
  }
}

/*
==============
Path_InitPaths
==============
*/
void Path_InitPaths(void)
{
  Path_InitLinkCounts();
  if ( BG_BotOrAgentSystemEnabled() )
    SV_BotPathsInit();
}

/*
==============
Path_InitSpawnNode
==============
*/
void Path_InitSpawnNode(pathnode_t *pNode)
{
  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1753, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  memset_0(pNode, 0, 0x58ui64);
  pNode->constant.spawnflags = 0x8000;
  *(_DWORD *)pNode->constant.wOverlapNode = -1;
  *(_QWORD *)&pNode->dynamic.pOwners[0].number = 0i64;
  *(_QWORD *)pNode->dynamic.iFreeTime = 0i64;
  *(_QWORD *)pNode->dynamic.iValidTime = 0i64;
  *(_QWORD *)&pNode->dynamic.iValidTime[2] = 0i64;
  *(_QWORD *)&pNode->dynamic.bInactive = 0i64;
  *(_QWORD *)&pNode->dynamic.bots.recentUseProxTimes[1] = 0i64;
  pNode->dynamic.actors.inPlayerLOSTime = 0;
  *(_QWORD *)&pNode->transient.iSearchFrame = 0i64;
  pNode->transient.pNextOpen = NULL;
  pNode->transient.pPrevOpen = NULL;
  pNode->transient.pParent = NULL;
  *(_QWORD *)&pNode->transient.fCost = 0i64;
  *(_QWORD *)&pNode->transient.nodeCost = 0i64;
  pNode->dynamic.turretEntNumber = -1;
}

/*
==============
Path_IsDynamicBlockingEntity
==============
*/
__int64 Path_IsDynamicBlockingEntity(const gentity_s *ent)
{
  return (ent->flags.m_flags[0] >> 6) & 1;
}

/*
==============
Path_IsDynamicSpawnNode
==============
*/
bool Path_IsDynamicSpawnNode(unsigned __int16 nodeIndex)
{
  return nodeIndex >= pathData.fixedNodeCount && nodeIndex < pathData.maxDynamicSpawnedNodeCount + pathData.fixedNodeCount;
}

/*
==============
Path_IsExposedSky
==============
*/
bool Path_IsExposedSky(const pathnode_t *node)
{
  unsigned __int16 v1; 

  v1 = Path_ConvertNodeToIndex(node);
  return Path_IsNodeIndexExposedSkyBase(v1, 0);
}

/*
==============
Path_IsExposedSkyStrict
==============
*/
bool Path_IsExposedSkyStrict(const pathnode_t *node)
{
  unsigned __int16 v1; 

  v1 = Path_ConvertNodeToIndex(node);
  return Path_IsNodeIndexExposedSkyBase(v1, 1);
}

/*
==============
Path_IsNodeDisconnected
==============
*/
char Path_IsNodeDisconnected(unsigned __int16 nodeIndex)
{
  pathnode_t *v3; 
  const tacpoint_t *PointForPathnode; 
  char v13; 
  char v14; 
  bfx::AreaHandle *AreaForPoint; 
  vec3_t pos; 
  vec3_t v19; 
  bfx::PathSpec pathSpec; 

  if ( nodeIndex >= pathData.nodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10328, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.nodeCount )", "nodeIndex doesn't index pathData.nodeCount\n\t%i not in [0, %i)", nodeIndex, pathData.nodeCount) )
    __debugbreak();
  if ( !Path_NodeValid(nodeIndex) || pathData.nodes[nodeIndex].dynamic.bInactive )
    return 1;
  v3 = Path_ConvertIndexToNode(nodeIndex);
  PointForPathnode = TacGraph_GetPointForPathnode(v3);
  if ( PointForPathnode || (pathnode_t::GetPos(v3, &pos), (PointForPathnode = TacGraph_FindClosestPoint(&pos)) != NULL) )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
    pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    __asm
    {
      vmovss  [rsp+0C8h+pathSpec.m_pathSharingPenalty], xmm0
      vmovss  [rsp+0C8h+pathSpec.m_maxPathSharingPenalty], xmm0
      vmovss  [rsp+0C8h+pathSpec.m_maxSearchDist], xmm0
    }
    pathSpec.m_usePathSharingPenalty = 0;
    *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
    bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
    pathSpec.m_snapMode = SNAP_CLOSEST;
    AreaForPoint = TacGraph_GetAreaForPoint(PointForPathnode);
    if ( !bfx::AreaHandle::IsUsable(AreaForPoint, &pathSpec) )
      return 1;
  }
  else
  {
    pathnode_t::GetPos(v3, &v19);
    __asm { vmovss  xmm2, cs:__real@41700000; radius }
    Nav_GetClosestVerticalPosInMostLikelySpace(&v19, NAV_LAYER_HUMAN, *(float *)&_XMM2, NULL, &pos, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0C8h+pos]
      vmovss  xmm1, dword ptr [rsp+0C8h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+0C8h+var_78+4]
      vsubss  xmm4, xmm0, dword ptr [rsp+0C8h+var_78]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, cs:__real@43610000
    }
    if ( !(v13 | v14) )
      return 1;
  }
  return 0;
}

/*
==============
Path_IsNodeFacingToward
==============
*/

bool __fastcall Path_IsNodeFacingToward(const pathnode_t *node, const vec3_t *origin, double dotLimit)
{
  char v27; 
  bool v28; 
  gentity_s *Parent; 
  bool result; 
  vec3_t pos; 
  vec3_t vector; 

  __asm { vmovaps [rsp+0B8h+var_58], xmm10 }
  _RDI = origin;
  _RBX = (pathnode_t *)node;
  __asm { vmovaps xmm10, xmm2 }
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8071, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0B8h+var_18], xmm6
    vmovaps [rsp+0B8h+var_28], xmm7
  }
  pathnode_t::GetPos(_RBX, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
  }
  if ( ((1 << LOBYTE(_RBX->constant.type)) & 0x62700000) != 0 )
  {
    __asm
    {
      vsubss  xmm7, xmm1, dword ptr [rsp+0B8h+pos+4]
      vmulss  xmm2, xmm7, xmm7
      vmovaps [rsp+0B8h+var_38], xmm8
      vsubss  xmm8, xmm0, dword ptr [rsp+0B8h+pos]
      vmovss  xmm0, dword ptr [rdi+8]
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vmovaps [rsp+0B8h+var_48], xmm9
      vsubss  xmm9, xmm0, dword ptr [rsp+0B8h+pos+8]
      vmulss  xmm0, xmm9, xmm9
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm6, xmm1, xmm0
    }
    pathnode_t::GetAngles(_RBX, &vector);
    AngleVectors(&vector, &pos, NULL, NULL);
    __asm
    {
      vmulss  xmm1, xmm8, xmm6
      vmulss  xmm2, xmm1, dword ptr [rsp+0B8h+pos]
      vmovaps xmm8, [rsp+0B8h+var_38]
      vmulss  xmm0, xmm7, xmm6
      vmulss  xmm3, xmm0, dword ptr [rsp+0B8h+pos+4]
      vmulss  xmm0, xmm9, xmm6
      vmulss  xmm1, xmm0, dword ptr [rsp+0B8h+pos+8]
      vmovaps xmm9, [rsp+0B8h+var_48]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm10
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm4, xmm1, dword ptr [rsp+0B8h+pos+4]
      vsubss  xmm3, xmm0, dword ptr [rsp+0B8h+pos]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm6, xmm3, xmm1
      vmulss  xmm7, xmm4, xmm1
    }
    Parent = pathnode_t::GetParent(_RBX);
    v27 = 0;
    v28 = Parent == NULL;
    if ( Parent )
    {
      pathnode_t::GetAngles(_RBX, &vector);
      __asm { vmovss  xmm0, dword ptr [rsp+0B8h+vector+4]; yaw }
      YawVectors(*(float *)&_XMM0, &pos, NULL);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+pos]
        vmovss  xmm1, dword ptr [rsp+0B8h+pos+4]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+30h]
        vmovss  xmm1, dword ptr [rbx+34h]
      }
    }
    __asm
    {
      vmulss  xmm1, xmm7, xmm1
      vmulss  xmm0, xmm6, xmm0
      vaddss  xmm1, xmm1, xmm0
      vcomiss xmm1, xmm10
    }
  }
  __asm { vmovaps xmm7, [rsp+0B8h+var_28] }
  result = !(v27 | v28);
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_18]
    vmovaps xmm10, [rsp+0B8h+var_58]
  }
  return result;
}

/*
==============
Path_IsNodeIndex
==============
*/
__int64 Path_IsNodeIndex(const pathnode_t *node, unsigned __int16 nodeIndexToCheck)
{
  unsigned int v4; 
  unsigned __int16 i; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8047, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v4 = 0;
  for ( i = 0; i < g_path.actualNodeCount; ++i )
  {
    if ( &pathData.nodes[i] == node )
      break;
  }
  if ( i == g_path.actualNodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8054, ASSERT_TYPE_ASSERT, "(nodeIndex != g_path.actualNodeCount)", (const char *)&queryFormat, "nodeIndex != g_path.actualNodeCount") )
    __debugbreak();
  LOBYTE(v4) = i == nodeIndexToCheck;
  return v4;
}

/*
==============
Path_IsNodeIndexExposedSky
==============
*/
bool Path_IsNodeIndexExposedSky(int nodeIndex)
{
  return Path_IsNodeIndexExposedSkyBase(nodeIndex, 0);
}

/*
==============
Path_IsNodeIndexExposedSkyBase
==============
*/
bool Path_IsNodeIndexExposedSkyBase(int nodeIndex, int bufferBit)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int8 *v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v11; 
  unsigned int v12; 

  if ( bufferBit >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8343, ASSERT_TYPE_ASSERT, "(bufferBit < ( 2 ))", (const char *)&queryFormat, "bufferBit < PATH_EXP_SKY_NUM_BITS") )
    __debugbreak();
  v4 = Path_ExposureSizeSky();
  if ( !pathData.pathExposure )
    return 0;
  v5 = Path_ExposureSizeNodes();
  if ( pathData.exposureBytes < (int)(Path_ExposureSizeSky() + v5) )
    return 0;
  v6 = &pathData.pathExposure[Path_ExposureSizeNodes()];
  if ( !v6 )
    return 0;
  v7 = nodeIndex / 8;
  v8 = nodeIndex % 8;
  v9 = v7 + bufferBit * ((pathData.nodeCount + 7) >> 3);
  if ( (unsigned int)v9 >= v4 )
  {
    v12 = v4;
    LODWORD(v11) = v7 + bufferBit * ((pathData.nodeCount + 7) >> 3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8350, ASSERT_TYPE_ASSERT, "(unsigned)( bufferPosition ) < (unsigned)( expSize )", "bufferPosition doesn't index expSize\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  return ((unsigned __int8)(1 << v8) & v6[v9]) != 0;
}

/*
==============
Path_IsNodeIndexExposedSkyStrict
==============
*/
bool Path_IsNodeIndexExposedSkyStrict(int nodeIndex)
{
  return Path_IsNodeIndexExposedSkyBase(nodeIndex, 1);
}

/*
==============
Path_IsNodeTraversal
==============
*/
_BOOL8 Path_IsNodeTraversal(const pathnode_t *node)
{
  unsigned __int16 type; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10250, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  type = node->constant.type;
  return (unsigned __int16)(type - 16) <= 1u || (unsigned __int16)(type - 27) <= 1u;
}

/*
==============
Path_IsNodeTraversalBegin
==============
*/
_BOOL8 Path_IsNodeTraversalBegin(const pathnode_t *node)
{
  unsigned __int16 type; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10250, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  type = node->constant.type;
  return type == 16 || type == 27;
}

/*
==============
Path_IsNodeTraversalEnd
==============
*/
_BOOL8 Path_IsNodeTraversalEnd(const pathnode_t *node)
{
  unsigned __int16 type; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10261, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  type = node->constant.type;
  return type == 17 || type == 28;
}

/*
==============
Path_IsNodeTraversalOrOverlapsTraversal
==============
*/
__int64 Path_IsNodeTraversalOrOverlapsTraversal(const pathnode_t *node)
{
  int v2; 
  unsigned __int16 *wOverlapNode; 
  const pathnode_t *v4; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10227, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( Path_IsNodeTraversal(node) )
    return 1i64;
  v2 = 0;
  wOverlapNode = node->constant.wOverlapNode;
  do
  {
    if ( *wOverlapNode == 0xFFFF )
      break;
    v4 = Path_ConvertIndexToNode(*wOverlapNode);
    if ( Path_IsNodeTraversal(v4) )
      return 1i64;
    ++v2;
    ++wOverlapNode;
  }
  while ( v2 < 2 );
  return 0i64;
}

/*
==============
Path_IsOnlyOwner
==============
*/
__int64 Path_IsOnlyOwner(const pathnode_t *node, const sentient_s *owner)
{
  int NodeTeam; 
  unsigned int v5; 
  SentientHandle *v6; 
  __int64 v7; 
  unsigned __int16 *wOverlapNode; 
  pathnode_t *v9; 
  const char *GameType; 
  unsigned int v11; 
  unsigned int v12; 
  const char *v13; 
  int v14; 
  int v15; 
  const char *v16; 
  int v17; 
  SentientHandle *v18; 
  __int64 v20; 
  __int64 v21; 

  NodeTeam = Path_GetNodeTeam(owner->eTeam);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9419, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v5 = 0;
  v6 = (SentientHandle *)Path_NodeOwnerSentHandleConst(node, NodeTeam);
  if ( SentientHandle::isDefined(v6) )
  {
    if ( SentientHandle::sentient(v6) != owner )
      return 0i64;
    v5 = 1;
  }
  v7 = 0i64;
  wOverlapNode = node->constant.wOverlapNode;
  do
  {
    if ( *wOverlapNode != 0xFFFF )
    {
      v9 = &pathData.nodes[*wOverlapNode];
      if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
        v11 = 0;
      else
        v11 = NodeTeam;
      if ( !v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v13 = SV_GameMP_GetGameType();
        v14 = *(unsigned __int8 *)v13 - (unsigned __int8)aBr_2[0];
        if ( !v14 )
        {
          v14 = *((unsigned __int8 *)v13 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v14 )
            v14 = *((unsigned __int8 *)v13 + 2) - (unsigned __int8)aBr_2[2];
        }
        v12 = (v14 != 0) + 1;
      }
      else
      {
        v12 = 1;
      }
      if ( v11 >= v12 )
      {
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
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
        LODWORD(v21) = v15;
        LODWORD(v20) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v18 = &v9->dynamic.pOwners[v11];
      if ( SentientHandle::isDefined(v18) )
      {
        if ( SentientHandle::sentient(v18) != owner )
          return 0i64;
        v5 = 1;
      }
    }
    ++v7;
    ++wOverlapNode;
  }
  while ( v7 < 2 );
  return v5;
}

/*
==============
Path_IsOrientedNodeUpright
==============
*/
__int64 Path_IsOrientedNodeUpright(const pathnode_t *node)
{
  vec3_t up; 

  AngleVectors((const vec3_t *)&node->constant.44, NULL, NULL, &up);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+up+8]
    vcomiss xmm0, cs:__real@3f59999a
  }
  return 0i64;
}

/*
==============
Path_LinkCompare
==============
*/
__int64 Path_LinkCompare(const void *link0, const void *link1)
{
  return *((unsigned __int16 *)link0 + 2) - (unsigned int)*((unsigned __int16 *)link1 + 2);
}

/*
==============
Path_LoadNode
==============
*/
pathnode_t *Path_LoadNode(unsigned __int16 index)
{
  if ( index == 0xFFFF )
    return 0i64;
  if ( index > g_path.actualNodeCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA6A78, 460i64);
  return &pathData.nodes[index];
}

/*
==============
Path_LogStrandedNodes
==============
*/
void Path_LogStrandedNodes()
{
  unsigned int actualNodeCount; 
  int zoneCount; 
  int maxDynamicSpawnedNodeCount; 
  signed int v8; 
  unsigned __int16 v9; 
  unsigned int v10; 
  gentity_s *Parent; 
  const char *v37; 
  int v38; 
  vec3_t v; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  actualNodeCount = g_path.actualNodeCount;
  zoneCount = pathData.zoneCount;
  maxDynamicSpawnedNodeCount = pathData.maxDynamicSpawnedNodeCount;
  v8 = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  v9 = 0;
  if ( v8 < 0 )
    v8 = 0;
  if ( v8 > 0 )
  {
    v10 = 0;
    __asm
    {
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
    }
    do
    {
      _RCX = &pathData.nodes[v9];
      if ( !_RCX->dynamic.wLinkCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+20h]
          vmovss  dword ptr [rsp+0A8h+v], xmm0
          vmovss  xmm1, dword ptr [rcx+24h]
          vmovss  dword ptr [rsp+0A8h+v+4], xmm1
          vmovss  xmm0, dword ptr [rcx+28h]
          vmovss  dword ptr [rsp+0A8h+v+8], xmm0
        }
        Parent = pathnode_t::GetParent(_RCX);
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          __asm
          {
            vmovss  xmm2, dword ptr [rsp+0A8h+v]
            vmulss  xmm7, xmm2, dword ptr [rsp+0A8h+axis+4]
            vmulss  xmm8, xmm2, dword ptr [rsp+0A8h+axis+8]
            vmovss  xmm6, dword ptr [rsp+0A8h+v+4]
            vmulss  xmm2, xmm2, dword ptr [rsp+0A8h+axis]
            vmovss  xmm5, dword ptr [rsp+0A8h+v+8]
            vmulss  xmm3, xmm6, dword ptr [rsp+0A8h+axis+0Ch]
            vmulss  xmm1, xmm5, dword ptr [rsp+0A8h+axis+18h]
            vmulss  xmm0, xmm5, dword ptr [rsp+0A8h+axis+1Ch]
            vmulss  xmm9, xmm6, dword ptr [rsp+0A8h+axis+14h]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vaddss  xmm3, xmm2, dword ptr [rsi+130h]
            vmulss  xmm1, xmm6, dword ptr [rsp+0A8h+axis+10h]
            vmulss  xmm2, xmm5, dword ptr [rsp+0A8h+axis+20h]
            vmovss  dword ptr [rsp+0A8h+v], xmm3
            vaddss  xmm3, xmm1, xmm7
            vaddss  xmm1, xmm3, xmm0
            vaddss  xmm3, xmm1, dword ptr [rsi+134h]
            vaddss  xmm1, xmm8, xmm9
            vaddss  xmm2, xmm2, xmm1
            vmovss  dword ptr [rsp+0A8h+v+4], xmm3
            vaddss  xmm0, xmm2, dword ptr [rsi+138h]
            vmovss  dword ptr [rsp+0A8h+v+8], xmm0
          }
        }
        v37 = vtos(&v);
        Com_PrintWarning(18, "Pathnode %d at pos %s has no links to other nodes and is stranded! This node cannot be used by the spawn system, place another path node near this or verify this node is on nav mesh!\n", v10, v37);
        maxDynamicSpawnedNodeCount = pathData.maxDynamicSpawnedNodeCount;
        zoneCount = pathData.zoneCount;
        actualNodeCount = g_path.actualNodeCount;
      }
      v10 = ++v9;
      v38 = actualNodeCount - zoneCount - maxDynamicSpawnedNodeCount;
      if ( v38 < 0 )
        v38 = 0;
    }
    while ( v9 < v38 );
    __asm
    {
      vmovaps xmm9, [rsp+0A8h+var_48]
      vmovaps xmm8, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_28]
      vmovaps xmm6, [rsp+0A8h+var_18]
    }
  }
}

/*
==============
Path_MarkNodeInvalid
==============
*/
void Path_MarkNodeInvalid(pathnode_t *node, team_t eTeam, int invalidTime)
{
  __int64 NodeTeam; 
  SentientHandle *v7; 
  sentient_s *v8; 
  unsigned __int16 *wOverlapNode; 
  int i; 
  pathnode_t *v11; 
  const char *GameType; 
  char v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  const char *v17; 
  int v18; 
  int v19; 
  const char *v20; 
  int v21; 
  SentientHandle *v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 

  NodeTeam = Path_GetNodeTeam(eTeam);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10096, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v7 = (SentientHandle *)Path_NodeOwnerSentHandleConst(node, NodeTeam);
  if ( SentientHandle::isDefined(v7) && SentientHandle::sentient(v7)->eTeam == eTeam && SentientHandle::sentient(v7)->pClaimedNode )
  {
    v8 = SentientHandle::sentient(v7);
    Path_RelinquishNode(v8, 0);
  }
  if ( (unsigned int)NodeTeam >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
  {
    v25 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2;
    LODWORD(v23) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10104, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v23, v25) )
      __debugbreak();
  }
  node->dynamic.iValidTime[NodeTeam] = invalidTime + level.time;
  if ( !Path_GetNumClaimedOverlapNodes(node, NodeTeam) )
  {
    Path_NodeSetFreeTime(node, NodeTeam, 0);
    wOverlapNode = node->constant.wOverlapNode;
    for ( i = 0; i < 2; ++i )
    {
      if ( *wOverlapNode == 0xFFFF )
        break;
      v11 = &pathData.nodes[*wOverlapNode];
      if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
      {
        v14 = 0;
        v13 = 1;
      }
      else
      {
        v13 = 0;
        v14 = NodeTeam;
      }
      v15 = NodeTeam;
      if ( v13 )
        v15 = 0i64;
      if ( !v11 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 402, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v17 = SV_GameMP_GetGameType();
        v18 = *(unsigned __int8 *)v17 - (unsigned __int8)aBr_2[0];
        if ( !v18 )
        {
          v18 = *((unsigned __int8 *)v17 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v18 )
            v18 = *((unsigned __int8 *)v17 + 2) - (unsigned __int8)aBr_2[2];
        }
        v16 = (v18 != 0) + 1;
      }
      else
      {
        v16 = 1;
      }
      if ( v14 >= v16 )
      {
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          v20 = SV_GameMP_GetGameType();
          v21 = *(unsigned __int8 *)v20 - (unsigned __int8)aBr_2[0];
          if ( !v21 )
          {
            v21 = *((unsigned __int8 *)v20 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v21 )
              v21 = *((unsigned __int8 *)v20 + 2) - (unsigned __int8)aBr_2[2];
          }
          v19 = (v21 != 0) + 1;
        }
        else
        {
          v19 = 1;
        }
        LODWORD(v24) = v19;
        LODWORD(v23) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 403, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( !v11->dynamic.wOverlapCount[v15] && !Path_NodeIsClaimed(v11, NodeTeam) )
      {
        v22 = Path_NodeOwnerSentHandle(v11, NodeTeam);
        if ( SentientHandle::isDefined(v22) && SentientHandle::sentient(v22)->eTeam == eTeam )
          SentientHandle::setSentient(v22, NULL);
        Path_NodeSetFreeTime(v11, NodeTeam, 0);
      }
      ++wOverlapNode;
    }
  }
  if ( SentientHandle::isDefined(v7) && SentientHandle::sentient(v7)->eTeam == eTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10132, ASSERT_TYPE_ASSERT, "(!nodeOwnerSentHandle->isDefined() || (nodeOwnerSentHandle->sentient()->eTeam != eTeam))", (const char *)&queryFormat, "!nodeOwnerSentHandle->isDefined() || (nodeOwnerSentHandle->sentient()->eTeam != eTeam)") )
    __debugbreak();
}

/*
==============
Path_MarkNodeOverlap
==============
*/
void Path_MarkNodeOverlap(pathnode_t *node, int nodeTeam)
{
  SentientHandle *v4; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9817, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v4 = Path_NodeOwnerSentHandle(node, nodeTeam);
  SentientHandle::setSentient(v4, NULL);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 433, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  Path_NodeSetFreeTime(node, nodeTeam, 0x7FFFFFFF);
  Path_AddToNumClaimedOverlapNodes(node, nodeTeam, 1);
}

/*
==============
Path_NavTests
==============
*/
void Path_NavTests()
{
  const dvar_t *v11; 
  int integer; 
  char v29; 
  bool v30; 
  nav_space_s *DefaultSpace; 
  vec3_t *p_outClosestPos; 
  nav_space_s *v70; 
  nav_space_s *v72; 
  bool IsPointOnMesh; 
  nav_space_s *v74; 
  bool v75; 
  nav_space_s *v76; 
  const char *v186; 
  float fmt; 
  bfx::Path3DSpec pathSpec; 
  vec3_t start; 
  vec3_t outPos; 
  vec2_t vec; 
  vec3_t outClosestPos; 
  tmat33_t<vec3_t> axis; 
  vec3_t v211; 
  vec3_t v212; 
  vec3_t v213; 
  vec3_t end; 
  Bounds box; 
  nav_probe_results_3D_s pOutResults; 
  char vars0; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm12
  }
  v11 = DCONST_DVARINT_ai_testNavVolumes;
  if ( !DCONST_DVARINT_ai_testNavVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_testNavVolumes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  _RBX = DCONST_DVARFLT_ai_testNav3DReachable;
  if ( !DCONST_DVARFLT_ai_testNav3DReachable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_testNav3DReachable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+28h]
    vxorps  xmm12, xmm12, xmm12
  }
  if ( integer > 0 )
    goto LABEL_29;
  __asm { vcomiss xmm7, xmm12 }
  if ( integer )
  {
LABEL_29:
    if ( Nav_MeshLoaded() )
    {
      __asm
      {
        vmovaps xmmword ptr [rsp+1F0h+var_18+8], xmm6
        vmovaps xmmword ptr [rsp+1F0h+var_38+8], xmm8
        vmovaps [rsp+1F0h+var_48+8], xmm9
        vmovaps [rsp+1F0h+var_58+8], xmm10
        vmovaps [rsp+1F0h+var_68+8], xmm11
        vmovaps xmmword ptr [rsp+1F0h+var_88+8], xmm13
      }
      CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
      _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+6944h]
        vmovss  dword ptr [rbp+0F0h+vec], xmm0
        vmovss  xmm1, dword ptr [rax+6948h]
        vmovss  dword ptr [rbp+0F0h+vec+4], xmm1
        vmovss  xmm0, dword ptr [rax+694Ch]
        vmovss  [rbp+0F0h+var_160], xmm0
      }
      *(double *)&_XMM0 = vectoyaw(&vec);
      __asm
      {
        vmovss  [rsp+1F0h+var_18C], xmm0
        vmovaps xmm8, xmm0
      }
      _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      __asm
      {
        vmovss  xmm6, cs:__real@40200000
        vmovss  xmm1, dword ptr cs:?bounds_origin@@3UBounds@@B.midPoint; Bounds const bounds_origin
        vmovss  xmm2, dword ptr cs:?bounds_origin@@3UBounds@@B.midPoint+4; Bounds const bounds_origin
        vmovss  xmm10, dword ptr [rax+695Ch]
        vmovss  xmm11, dword ptr [rax+6960h]
        vmovss  xmm13, dword ptr [rax+6964h]
      }
      *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
      __asm
      {
        vmovss  dword ptr [rbp+0F0h+box.midPoint], xmm1
        vmovss  xmm1, dword ptr cs:?bounds_origin@@3UBounds@@B.midPoint+8; Bounds const bounds_origin
        vmovss  dword ptr [rbp+0F0h+box.midPoint+8], xmm1
        vmovss  dword ptr [rbp+0F0h+box.midPoint+4], xmm2
        vmovss  dword ptr [rbp+0F0h+box.halfSize], xmm6
        vmovss  dword ptr [rbp+0F0h+box.halfSize+4], xmm6
        vmovss  dword ptr [rbp+0F0h+box.halfSize+8], xmm6
        vmovss  [rsp+1F0h+pathSpec.m_maxSearchDist], xmm12
      }
      v29 = 0;
      v30 = integer == 0;
      if ( integer > 0 )
      {
        DefaultSpace = Nav_GetDefaultSpace();
        if ( Nav3D_GetClosestPointOnMesh(DefaultSpace, &pathSpec, &outPos, &outClosestPos) )
        {
          __asm
          {
            vmovss  xmm2, dword ptr [rsp+1F0h+outPos]
            vucomiss xmm2, dword ptr [rbp+0F0h+outClosestPos]
            vmovss  xmm5, dword ptr [rbp+0F0h+outPos+8]
            vmovss  xmm9, dword ptr [rsp+1F0h+outPos+4]
            vmovss  xmm4, cs:__real@41200000
            vmulss  xmm1, xmm4, dword ptr [rbp+0F0h+vec]
            vaddss  xmm3, xmm1, xmm2
            vmulss  xmm2, xmm10, xmm6
            vsubss  xmm0, xmm3, xmm2
            vmulss  xmm2, xmm4, dword ptr [rbp+0F0h+vec+4]
            vaddss  xmm3, xmm2, xmm9
            vmovss  dword ptr [rsp+1F0h+start], xmm0
            vmulss  xmm0, xmm11, xmm6
            vsubss  xmm1, xmm3, xmm0
            vmulss  xmm0, xmm4, [rbp+0F0h+var_160]
            vmovss  dword ptr [rsp+1F0h+start+4], xmm1
            vaddss  xmm3, xmm0, xmm5
            vmulss  xmm1, xmm13, xmm6
            vsubss  xmm2, xmm3, xmm1
            vmovss  dword ptr [rsp+1F0h+start+8], xmm2
          }
          G_DebugLine(&start, &outClosestPos, &colorRed, 1);
          p_outClosestPos = &outClosestPos;
        }
        else
        {
          __asm
          {
            vmovss  xmm3, cs:__real@41700000
            vmulss  xmm1, xmm3, dword ptr [rbp+0F0h+vec]
            vaddss  xmm2, xmm1, dword ptr [rsp+1F0h+outPos]
            vmulss  xmm1, xmm3, dword ptr [rbp+0F0h+vec+4]
            vmovss  dword ptr [rsp+1F0h+start], xmm2
            vaddss  xmm2, xmm1, dword ptr [rsp+1F0h+outPos+4]
            vmulss  xmm1, xmm3, [rbp+0F0h+var_160]
            vmovss  dword ptr [rsp+1F0h+start+4], xmm2
            vaddss  xmm2, xmm1, dword ptr [rbp+0F0h+outPos+8]
            vmovss  dword ptr [rsp+1F0h+start+8], xmm2
          }
          p_outClosestPos = &start;
        }
        __asm { vmovaps xmm2, xmm8; yaw }
        G_DebugBox(p_outClosestPos, &box, *(float *)&_XMM2, &colorRed, 1, 1);
      }
      __asm { vcomiss xmm7, xmm12 }
      if ( v29 | v30 )
        goto LABEL_25;
      __asm
      {
        vmovss  xmm3, cs:__real@c0400000
        vmulss  xmm1, xmm7, dword ptr [rbp+0F0h+vec]
        vaddss  xmm1, xmm1, dword ptr [rsp+1F0h+outPos]
        vmulss  xmm2, xmm7, dword ptr [rbp+0F0h+vec+4]
        vmovss  dword ptr [rsp+1F0h+start], xmm1
        vaddss  xmm1, xmm2, dword ptr [rsp+1F0h+outPos+4]
        vmulss  xmm2, xmm7, [rbp+0F0h+var_160]
        vmovss  dword ptr [rsp+1F0h+start+4], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+0F0h+outPos+8]
        vmulss  xmm0, xmm10, xmm3
        vmovss  dword ptr [rsp+1F0h+start+8], xmm1
        vaddss  xmm1, xmm0, dword ptr [rsp+1F0h+outPos]
        vmulss  xmm2, xmm11, xmm3
        vaddss  xmm0, xmm2, dword ptr [rsp+1F0h+outPos+4]
        vmovss  dword ptr [rsp+1F0h+outPos], xmm1
        vmulss  xmm1, xmm13, xmm3
        vaddss  xmm2, xmm1, dword ptr [rbp+0F0h+outPos+8]
        vmovss  dword ptr [rbp+0F0h+outPos+8], xmm2
        vmovss  dword ptr [rsp+1F0h+outPos+4], xmm0
      }
      v70 = Nav_GetDefaultSpace();
      if ( Nav3D_IsStraightLineReachable(v70, &outPos, &start, &pathSpec) )
      {
        G_DebugLine(&outPos, &start, &colorBlue, 1);
        __asm { vmovaps xmm2, xmm8; yaw }
        G_DebugBox(&start, &box, *(float *)&_XMM2, &colorBlue, 1, 1);
LABEL_25:
        __asm
        {
          vmovaps xmm11, [rsp+1F0h+var_68+8]
          vmovaps xmm10, [rsp+1F0h+var_58+8]
          vmovaps xmm9, [rsp+1F0h+var_48+8]
          vmovaps xmm8, xmmword ptr [rsp+1F0h+var_38+8]
          vmovaps xmm6, xmmword ptr [rsp+1F0h+var_18+8]
          vmovaps xmm13, xmmword ptr [rsp+1F0h+var_88+8]
        }
        goto LABEL_26;
      }
      v72 = Nav_GetDefaultSpace();
      IsPointOnMesh = Nav3D_IsPointOnMesh(v72, &outPos, &pathSpec);
      v74 = Nav_GetDefaultSpace();
      v75 = Nav3D_IsPointOnMesh(v74, &start, &pathSpec);
      G_DebugLine(&outPos, &start, &colorRed, 1);
      if ( IsPointOnMesh )
      {
        __asm
        {
          vmovaps [rsp+1F0h+var_98+8], xmm14
          vmovaps [rsp+1F0h+var_A8+8], xmm15
        }
        v76 = Nav_GetDefaultSpace();
        Nav_Trace3D(v76, &outPos, &start, &pathSpec, &pOutResults);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1F0h+start]
          vsubss  xmm6, xmm0, dword ptr [rsp+1F0h+outPos]
          vmovss  xmm1, dword ptr [rsp+1F0h+start+4]
          vsubss  xmm7, xmm1, dword ptr [rsp+1F0h+outPos+4]
          vmovss  xmm0, dword ptr [rsp+1F0h+start+8]
          vsubss  xmm8, xmm0, dword ptr [rbp+0F0h+outPos+8]
          vmulss  xmm2, xmm7, xmm7
          vmulss  xmm0, xmm8, xmm8
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vaddss  xmm2, xmm3, xmm0
          vmovss  xmm3, [rbp+0F0h+pOutResults.m_DistTraveled]
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, cs:__real@80000000
          vblendvps xmm0, xmm4, xmm1, xmm0
          vdivss  xmm5, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm5
          vmulss  xmm0, xmm1, xmm3
          vaddss  xmm0, xmm0, dword ptr [rsp+1F0h+outPos]
          vmulss  xmm1, xmm7, xmm5
          vmovss  xmm7, cs:__real@c2b40000
          vmulss  xmm2, xmm1, xmm3
          vaddss  xmm10, xmm2, dword ptr [rsp+1F0h+outPos+4]
          vmovss  dword ptr [rsp+1F0h+var_1B0], xmm0
          vmulss  xmm0, xmm8, xmm5
          vmulss  xmm1, xmm0, xmm3
          vaddss  xmm9, xmm1, dword ptr [rbp+0F0h+outPos+8]
          vmovss  [rsp+1F0h+var_190], xmm9
          vmovss  [rsp+1F0h+var_194], xmm10
          vmovss  dword ptr [rbp+0F0h+outClosestPos], xmm7
          vmovss  dword ptr [rbp+0F0h+outClosestPos+4], xmm12
          vmovss  dword ptr [rbp+0F0h+outClosestPos+8], xmm12
        }
        AnglesToAxis(&outClosestPos, &axis);
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+0F0h+pOutResults.m_Normal+4]
          vmovss  xmm6, dword ptr [rbp+0F0h+pOutResults.m_Normal]
          vmovss  xmm4, dword ptr [rbp+0F0h+pOutResults.m_Normal+8]
          vmulss  xmm0, xmm5, dword ptr [rbp+0F0h+axis+4]
          vmulss  xmm1, xmm6, dword ptr [rbp+0F0h+axis]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, dword ptr [rbp+0F0h+axis+8]
          vmulss  xmm0, xmm5, dword ptr [rbp+0F0h+axis+10h]
          vaddss  xmm8, xmm2, xmm1
          vmulss  xmm2, xmm6, dword ptr [rbp+0F0h+axis+0Ch]
          vmulss  xmm1, xmm4, dword ptr [rbp+0F0h+axis+14h]
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm2, xmm6, dword ptr [rbp+0F0h+axis+18h]
          vmulss  xmm0, xmm5, dword ptr [rbp+0F0h+axis+1Ch]
          vaddss  xmm15, xmm3, xmm1
          vmulss  xmm1, xmm4, dword ptr [rbp+0F0h+axis+20h]
          vaddss  xmm3, xmm2, xmm0
          vaddss  xmm14, xmm3, xmm1
          vmovss  [rsp+1F0h+var_198], xmm8
          vmovss  dword ptr [rbp+0F0h+outClosestPos], xmm12
          vmovss  dword ptr [rbp+0F0h+outClosestPos+4], xmm7
          vmovss  dword ptr [rbp+0F0h+outClosestPos+8], xmm12
        }
        AnglesToAxis(&outClosestPos, &axis);
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+0F0h+pOutResults.m_Normal+4]
          vmovss  xmm6, dword ptr [rbp+0F0h+pOutResults.m_Normal]
          vmulss  xmm0, xmm5, dword ptr [rbp+0F0h+axis+4]
          vmulss  xmm1, xmm6, dword ptr [rbp+0F0h+axis]
          vmovss  xmm4, dword ptr [rbp+0F0h+pOutResults.m_Normal+8]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, dword ptr [rbp+0F0h+axis+8]
          vmulss  xmm0, xmm5, dword ptr [rbp+0F0h+axis+10h]
          vaddss  xmm7, xmm2, xmm1
          vmulss  xmm2, xmm6, dword ptr [rbp+0F0h+axis+0Ch]
          vmulss  xmm1, xmm4, dword ptr [rbp+0F0h+axis+14h]
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm0, xmm5, dword ptr [rbp+0F0h+axis+1Ch]
          vmulss  xmm2, xmm6, dword ptr [rbp+0F0h+axis+18h]
          vaddss  xmm13, xmm3, xmm1
          vmulss  xmm1, xmm4, dword ptr [rbp+0F0h+axis+20h]
          vaddss  xmm3, xmm2, xmm0
          vmovss  xmm0, dword ptr [rsp+1F0h+start]
          vsubss  xmm5, xmm0, dword ptr [rsp+1F0h+outPos]
          vmovss  xmm0, dword ptr [rsp+1F0h+start+8]
          vsubss  xmm4, xmm0, dword ptr [rbp+0F0h+outPos+8]
          vaddss  xmm12, xmm3, xmm1
          vmovss  xmm1, dword ptr [rsp+1F0h+start+4]
          vsubss  xmm2, xmm1, dword ptr [rsp+1F0h+outPos+4]
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vmulss  xmm4, xmm1, cs:__real@3e800000
          vmulss  xmm0, xmm8, xmm4
          vaddss  xmm2, xmm0, dword ptr [rsp+1F0h+var_1B0]
          vmulss  xmm11, xmm7, xmm4
          vmulss  xmm0, xmm14, xmm4
          vaddss  xmm8, xmm0, xmm9
          vmulss  xmm1, xmm4, xmm15
          vaddss  xmm3, xmm1, xmm10
          vmulss  xmm9, xmm12, xmm4
          vmulss  xmm10, xmm13, xmm4
          vxorps  xmm4, xmm4, cs:__xmm@80000000800000008000000080000000
          vaddss  xmm1, xmm11, xmm2
          vmovss  dword ptr [rbp+0F0h+var_110], xmm1
          vaddss  xmm0, xmm10, xmm3
          vmovss  dword ptr [rbp+0F0h+var_110+4], xmm0
          vmulss  xmm7, xmm7, xmm4
          vmulss  xmm6, xmm13, xmm4
          vaddss  xmm0, xmm7, xmm2
          vmovss  dword ptr [rbp+0F0h+end], xmm0
          vmulss  xmm5, xmm12, xmm4
          vaddss  xmm1, xmm9, xmm8
          vmovss  dword ptr [rbp+0F0h+var_110+8], xmm1
          vaddss  xmm1, xmm6, xmm3
          vmovss  dword ptr [rbp+0F0h+end+4], xmm1
          vmulss  xmm1, xmm4, [rsp+1F0h+var_198]
          vaddss  xmm2, xmm1, dword ptr [rsp+1F0h+var_1B0]
          vaddss  xmm0, xmm5, xmm8
          vmovss  dword ptr [rbp+0F0h+end+8], xmm0
          vmulss  xmm0, xmm4, xmm15
          vaddss  xmm3, xmm0, [rsp+1F0h+var_194]
          vmulss  xmm1, xmm14, xmm4
          vaddss  xmm4, xmm1, [rsp+1F0h+var_190]
          vaddss  xmm1, xmm6, xmm3
          vaddss  xmm0, xmm7, xmm2
          vmovss  dword ptr [rbp+0F0h+var_120+4], xmm1
          vmovss  dword ptr [rbp+0F0h+var_120], xmm0
          vaddss  xmm1, xmm11, xmm2
          vaddss  xmm0, xmm5, xmm4
          vmovss  dword ptr [rbp+0F0h+var_100], xmm1
          vmovss  dword ptr [rbp+0F0h+var_120+8], xmm0
          vaddss  xmm1, xmm9, xmm4
          vaddss  xmm0, xmm10, xmm3
          vmovss  dword ptr [rbp+0F0h+var_100+8], xmm1
          vmovss  dword ptr [rbp+0F0h+var_100+4], xmm0
        }
        G_DebugLine(&v212, &end, &colorRed, 1);
        G_DebugLine(&end, &v211, &colorRed, 1);
        G_DebugLine(&v211, &v213, &colorRed, 1);
        G_DebugLine(&v213, &v212, &colorRed, 1);
        G_DebugLine(&v212, &v211, &colorRed, 1);
        G_DebugLine(&end, &v213, &colorRed, 1);
        __asm
        {
          vmovaps xmm15, [rsp+1F0h+var_A8+8]
          vmovaps xmm14, [rsp+1F0h+var_98+8]
        }
        if ( v75 )
        {
          __asm { vmovss  xmm2, [rsp+1F0h+var_18C]; yaw }
          G_DebugBox(&start, &box, *(float *)&_XMM2, &colorRed, 1, 1);
          goto LABEL_25;
        }
        v186 = "End pos off mesh";
      }
      else
      {
        v186 = "Start and End pos off mesh";
        if ( v75 )
          v186 = "Start pos off mesh";
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3e4ccccd
        vmovss  dword ptr [rsp+1F0h+fmt], xmm0
      }
      G_DebugStarWithText(&start, &colorRed, &colorRed, v186, fmt);
      goto LABEL_25;
    }
  }
LABEL_26:
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
Path_NearestNode
==============
*/
pathnode_t *Path_NearestNode(const vec3_t *vOrigin, int traceMask, PathBlockPlanes *blockPlanes)
{
  bool v5; 
  const Bounds *v6; 
  NearestNodeInput pInput; 
  void *retaddr; 
  int returnCount; 

  _RAX = &retaddr;
  __asm { vmovss  xmm0, cs:__real@43400000 }
  pInput.vOrigin = vOrigin;
  __asm { vmovss  dword ptr [rax-38h], xmm0 }
  pInput.typeFlags = -2;
  pInput.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
  pInput.entNum = 2047;
  *(_WORD *)&pInput.bAllowCrouch = 257;
  pInput.bAllowFailedUnuseable = 1;
  pInput.traceMask = traceMask;
  pInput.blockPlanes = blockPlanes;
  v5 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE);
  v6 = &actorBox;
  if ( v5 )
    v6 = NULL;
  pInput.baseBounds = v6;
  return Path_NearestNodeExtended(&pInput, g_nearestNodes, 64, &returnCount, 0);
}

/*
==============
Path_NearestNodeByDistanceOnly
==============
*/

pathnode_t *__fastcall Path_NearestNodeByDistanceOnly(const vec3_t *vOrigin, double fMaxDist)
{
  pathnode_t *v5; 
  unsigned __int16 v6; 
  unsigned int v9; 
  pathnode_t *v10; 
  char v11; 
  pathnode_t *result; 
  __int64 v27; 
  __int64 v28; 
  vec3_t pos; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
  }
  _RBP = vOrigin;
  v5 = NULL;
  v6 = 0;
  __asm
  {
    vmovss  xmm7, cs:__real@7f7fffff
    vmovaps xmm6, xmm1
  }
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
  {
    v9 = 0;
    do
    {
      if ( Path_NodeValid(v6) )
      {
        if ( v6 == 0xFFFF )
        {
          v10 = NULL;
        }
        else
        {
          if ( v9 >= g_path.actualNodeCount )
          {
            LODWORD(v28) = g_path.actualNodeCount;
            LODWORD(v27) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v27, v28) )
              __debugbreak();
          }
          v10 = &pathData.nodes[v6];
        }
        if ( (v10->constant.spawnflags & 1) == 0 && v10->constant.error == PNERR_NONE )
        {
          if ( v10->constant.totalLinkCount )
          {
            pathnode_t::GetPos(v10, &pos);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0]
              vsubss  xmm3, xmm0, dword ptr [rsp+98h+pos]
              vmovss  xmm1, dword ptr [rbp+4]
              vmovss  xmm0, dword ptr [rbp+8]
              vsubss  xmm2, xmm1, dword ptr [rsp+98h+pos+4]
              vsubss  xmm4, xmm0, dword ptr [rsp+98h+pos+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm5, xmm3, xmm0
              vcomiss xmm5, xmm7
            }
            if ( v11 )
            {
              __asm
              {
                vmulss  xmm0, xmm6, xmm6
                vcomiss xmm5, xmm0
              }
              if ( v11 )
              {
                v5 = v10;
                __asm { vmovaps xmm7, xmm5 }
              }
            }
          }
        }
      }
      v9 = ++v6;
    }
    while ( v6 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
  }
  result = v5;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
  return result;
}

/*
==============
Path_NearestNodeExtended
==============
*/
pathnode_t *Path_NearestNodeExtended(const NearestNodeInput *pInput, pathsort_s *nodes, int maxNodes, int *returnCount, bool allowDontLinkNodes)
{
  int *v16; 
  PathBlockPlanes *blockPlanes; 
  unsigned __int16 v21; 
  int iPlaneCount; 
  int v30; 
  int v31; 
  int v32; 
  gentity_s *Parent; 
  const Bounds **p_baseBounds; 
  int v90; 
  unsigned __int16 v91; 
  gentity_s *v101; 
  int v126; 
  unsigned int entNum; 
  bool v144; 
  bool IsNodeUseableBy; 
  unsigned __int64 v167; 
  bool v168; 
  unsigned __int16 v175; 
  pathnode_t *v177; 
  int v178; 
  pathnode_t *result; 
  pathnode_t *v194; 
  char v195; 
  char v196; 
  int v210; 
  const vec3_t *vOrigin; 
  int typeFlags; 
  unsigned int typeFlagsa; 
  unsigned int typeFlagsb; 
  int v234; 
  int v235; 
  const Bounds **v236; 
  pathnode_t **v238; 
  vec3_t origin; 
  Bounds v240; 
  tmat33_t<vec3_t> axis; 
  vec3_t up; 
  pathnode_t *v243[256]; 
  char v247; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v16 = returnCount;
  _R13 = nodes;
  _RBX = pInput;
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8883, ASSERT_TYPE_ASSERT, "(pInput)", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  if ( !_RBX->vOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8884, ASSERT_TYPE_ASSERT, "(pInput->vOrigin)", (const char *)&queryFormat, "pInput->vOrigin") )
    __debugbreak();
  if ( !_RBX->traceMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8885, ASSERT_TYPE_ASSERT, "(pInput->traceMask != 0)", (const char *)&queryFormat, "pInput->traceMask != 0") )
    __debugbreak();
  Profile_Begin(277);
  blockPlanes = _RBX->blockPlanes;
  v21 = 0;
  if ( blockPlanes )
    iPlaneCount = blockPlanes->iPlaneCount;
  else
    iPlaneCount = 0;
  __asm
  {
    vmovaps xmmword ptr [rsp+9B0h+var_78+8], xmm8
    vmovaps [rsp+9B0h+var_88+8], xmm9
  }
  if ( _RBX->heightCheck )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@4e6e6b28; maxHeight
      vmovss  xmm2, dword ptr [rbx+10h]; maxDist
    }
    v31 = Path_NodesInCylinder(_RBX->vOrigin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, _R13, maxNodes, _RBX->typeFlags, allowDontLinkNodes);
    v235 = v31;
  }
  else
  {
    _RAX = _RBX->vOrigin;
    __asm
    {
      vmovss  xmm3, cs:__real@43380000; maxHeight
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rsp+9B0h+origin], xmm0
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm2, xmm0, cs:__real@42f00000
    }
    typeFlags = _RBX->typeFlags;
    __asm
    {
      vmovss  dword ptr [rsp+9B0h+origin+8], xmm2
      vmovss  xmm2, dword ptr [rbx+10h]; maxDist
      vmovss  dword ptr [rsp+9B0h+origin+4], xmm1
    }
    v30 = Path_NodesInCylinder(&origin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, _R13, maxNodes, typeFlags, allowDontLinkNodes);
    v235 = v30;
    v31 = v30;
    if ( v30 > 0 )
    {
      v32 = v30;
      do
      {
        _RDI = 2i64 * v21;
        _RCX = _R13[v21].node;
        __asm
        {
          vmovss  xmm7, dword ptr [rcx+20h]
          vmovss  xmm8, dword ptr [rcx+24h]
          vmovss  xmm6, dword ptr [rcx+28h]
        }
        Parent = pathnode_t::GetParent(_RCX);
        __asm
        {
          vmovaps xmm5, xmm7
          vmovaps xmm9, xmm8
        }
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          __asm
          {
            vmulss  xmm0, xmm6, dword ptr [rbp+8B0h+axis+18h]
            vmulss  xmm2, xmm7, dword ptr [rbp+8B0h+axis]
            vmulss  xmm1, xmm8, dword ptr [rbp+8B0h+axis+0Ch]
            vmulss  xmm4, xmm8, dword ptr [rbp+8B0h+axis+14h]
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm7, dword ptr [rbp+8B0h+axis+4]
            vaddss  xmm1, xmm3, xmm0
            vaddss  xmm5, xmm1, dword ptr [rsi+130h]
            vmulss  xmm1, xmm8, dword ptr [rbp+8B0h+axis+10h]
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm6, dword ptr [rbp+8B0h+axis+1Ch]
            vmulss  xmm1, xmm7, dword ptr [rbp+8B0h+axis+8]
            vaddss  xmm0, xmm3, xmm2
            vaddss  xmm9, xmm0, dword ptr [rsi+134h]
            vmulss  xmm0, xmm6, dword ptr [rbp+8B0h+axis+20h]
            vaddss  xmm2, xmm4, xmm1
            vaddss  xmm2, xmm2, xmm0
            vaddss  xmm6, xmm2, dword ptr [rsi+138h]
          }
        }
        _RAX = _RBX->vOrigin;
        ++v21;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm1, dword ptr [rax+4]
          vsubss  xmm3, xmm0, xmm5
          vmovss  xmm0, dword ptr [rax+8]
          vsubss  xmm2, xmm1, xmm9
          vmulss  xmm2, xmm2, xmm2
          vsubss  xmm4, xmm0, xmm6
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vmovss  dword ptr [r13+rdi*8+8], xmm2
        }
      }
      while ( v21 < v32 );
      v16 = returnCount;
      v31 = v235;
    }
  }
  std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(_R13, &_R13[v31], v31, Path_CompareNodesIncreasing);
  p_baseBounds = &_RBX->baseBounds;
  v236 = &_RBX->baseBounds;
  __asm
  {
    vmovss  xmm6, cs:__real@40000000
    vmovss  xmm13, cs:__real@3f000000
    vmovss  xmm14, cs:__real@3dcccccd
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) || *p_baseBounds )
  {
    _RAX = *p_baseBounds;
    v236 = &_RBX->baseBounds;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+9B0h+var_948], xmm1
      vmovsd  xmm0, qword ptr [rax+10h]
      vmovsd  qword ptr [rsp+9B0h+var_93C+4], xmm0
      vshufps xmm1, xmm1, xmm1, 0FFh
      vmaxss  xmm4, xmm1, xmm0
      vmovss  dword ptr [rsp+9B0h+var_93C], xmm4
      vmovss  dword ptr [rsp+9B0h+var_93C+4], xmm4
      vmulss  xmm3, xmm6, dword ptr [rax+14h]
      vsubss  xmm0, xmm3, cs:__real@41880000
      vmulss  xmm1, xmm3, xmm13
      vaddss  xmm2, xmm1, cs:__real@41080000
      vaddss  xmm1, xmm4, xmm14
      vmulss  xmm3, xmm0, xmm13
      vmovss  dword ptr [rsp+9B0h+var_948+8], xmm2
      vmaxss  xmm2, xmm3, xmm1
      vmovss  dword ptr [rsp+9B0h+var_93C+8], xmm2
    }
  }
  *v16 = v31;
  v90 = 0;
  v234 = 0;
  v91 = 0;
  __asm
  {
    vmovaps xmmword ptr [rsp+9B0h+var_B8+8], xmm12
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm15, cs:__real@41100000
    vmovss  xmm7, cs:__real@40900000
    vmovss  xmm11, cs:__real@3f800000
  }
  if ( v31 <= 0 )
  {
LABEL_62:
    v175 = 0;
    if ( v90 <= 0 )
    {
LABEL_87:
      Profile_EndInternal(NULL);
      result = NULL;
      goto LABEL_88;
    }
    while ( 1 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) || *p_baseBounds )
        goto LABEL_81;
      _R8 = &actorBox;
      v177 = v243[v175];
      if ( v177 && 1 << LOBYTE(v177->constant.type) == ((1 << LOBYTE(v177->constant.type)) & 0x78130002) )
      {
        v178 = v177->constant.spawnflags & 0x5C;
        if ( v178 != 68 )
        {
          if ( v178 == 76 )
          {
            _R8 = &actorBoxProne;
            goto LABEL_70;
          }
          if ( v178 != 84 )
            goto LABEL_70;
        }
        _R8 = &actorBoxCrouch;
      }
LABEL_70:
      __asm
      {
        vmovups xmm0, xmmword ptr [r8]
        vmovsd  xmm1, qword ptr [r8+10h]
        vmovups xmmword ptr [rsp+9B0h+var_948], xmm0
        vmovsd  qword ptr [rsp+9B0h+var_93C+4], xmm1
      }
      if ( _R8 == &actorBoxCrouch && !_RBX->bAllowCrouch || _R8 == &actorBoxProne && !_RBX->bAllowProne || _R8 == &actorBox )
      {
        *vec3_t::operator[](&v240.midPoint, 2) = 44.5;
        *vec3_t::operator[](&v240.halfSize, 2) = 27.5;
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsp+9B0h+var_93C]
          vaddss  xmm6, xmm1, xmm15
        }
        _RAX = vec3_t::operator[](&v240.midPoint, 2);
        __asm
        {
          vmulss  xmm0, xmm6, xmm13
          vaddss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rax], xmm1
        }
        _RAX = vec3_t::operator[](&v240.halfSize, 2);
        __asm
        {
          vsubss  xmm0, xmm6, xmm15
          vmulss  xmm1, xmm0, xmm13
          vmovss  dword ptr [rax], xmm1
          vaddss  xmm0, xmm14, dword ptr [rsp+9B0h+var_93C]
          vmaxss  xmm3, xmm0, dword ptr [rsp+9B0h+var_93C+8]
          vaddss  xmm2, xmm14, dword ptr [rsp+9B0h+var_93C+4]
          vmaxss  xmm0, xmm3, xmm2
          vmovss  dword ptr [rsp+9B0h+var_93C+8], xmm0
        }
      }
LABEL_81:
      v194 = v243[v175];
      pathnode_t::GetPos(v194, &origin);
      _RAX = _RBX->vOrigin;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  xmm1, dword ptr [rax+4]
        vsubss  xmm2, xmm0, dword ptr [rsp+9B0h+origin]
        vsubss  xmm3, xmm1, dword ptr [rsp+9B0h+origin+4]
        vmovss  xmm0, dword ptr [rax+8]
        vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize; Bounds const actorBox
        vsubss  xmm4, xmm0, dword ptr [rsp+9B0h+origin+8]
        vandps  xmm2, xmm2, xmm10
        vsubss  xmm2, xmm2, dword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
        vandps  xmm2, xmm2, xmm10
        vcomiss xmm2, xmm1
        vandps  xmm3, xmm3, xmm10
        vandps  xmm4, xmm4, xmm10
      }
      v210 = 0;
      if ( v195 | v196 )
      {
        __asm
        {
          vsubss  xmm2, xmm3, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+4; Bounds const actorBox
          vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
          vandps  xmm2, xmm2, xmm10
          vcomiss xmm2, xmm1
        }
        if ( v195 | v196 )
        {
          __asm
          {
            vsubss  xmm2, xmm4, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+8; Bounds const actorBox
            vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox
            vandps  xmm2, xmm2, xmm10
            vcomiss xmm2, xmm1
          }
          LOBYTE(v210) = v195 | v196;
        }
      }
      if ( v210 )
        goto LABEL_89;
      pathnode_t::GetPos(v194, &up);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+9B0h+var_93C+8]
        vmaxss  xmm1, xmm0, dword ptr [rsp+9B0h+var_93C]
      }
      vOrigin = _RBX->vOrigin;
      typeFlagsb = _RBX->traceMask & 0xFDFFBFFF;
      __asm { vmovss  dword ptr [rsp+9B0h+var_93C+8], xmm1 }
      if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, vOrigin, &up, &v240, 2047, 2047, typeFlagsb) )
      {
LABEL_89:
        Profile_EndInternal(NULL);
        result = v194;
        goto LABEL_88;
      }
      __asm { vmovss  xmm6, cs:__real@40000000 }
      p_baseBounds = v236;
      if ( ++v175 >= v234 )
        goto LABEL_87;
    }
  }
  __asm { vmovss  xmm12, cs:__real@3f59999a }
  v238 = v243;
  while ( 1 )
  {
    _RDI = _R13[v91].node;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+20h]
      vmovss  dword ptr [rsp+9B0h+origin], xmm0
      vmovss  xmm1, dword ptr [rdi+24h]
      vmovss  dword ptr [rsp+9B0h+origin+4], xmm1
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  dword ptr [rsp+9B0h+origin+8], xmm0
    }
    v101 = pathnode_t::GetParent(_RDI);
    if ( v101 )
    {
      AnglesToAxis(&v101->r.currentAngles, &axis);
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+9B0h+origin+4]
        vmovss  xmm2, dword ptr [rsp+9B0h+origin]
        vmulss  xmm7, xmm2, dword ptr [rbp+8B0h+axis+4]
        vmulss  xmm8, xmm2, dword ptr [rbp+8B0h+axis+8]
        vmulss  xmm2, xmm2, dword ptr [rbp+8B0h+axis]
        vmovss  xmm5, dword ptr [rsp+9B0h+origin+8]
        vmulss  xmm3, xmm6, dword ptr [rbp+8B0h+axis+0Ch]
        vmulss  xmm1, xmm5, dword ptr [rbp+8B0h+axis+18h]
        vmulss  xmm0, xmm5, dword ptr [rbp+8B0h+axis+1Ch]
        vmulss  xmm9, xmm6, dword ptr [rbp+8B0h+axis+14h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vaddss  xmm3, xmm2, dword ptr [rsi+130h]
        vmulss  xmm1, xmm6, dword ptr [rbp+8B0h+axis+10h]
        vmulss  xmm2, xmm5, dword ptr [rbp+8B0h+axis+20h]
        vmovss  xmm6, cs:__real@40000000
        vmovss  dword ptr [rsp+9B0h+origin], xmm3
        vaddss  xmm3, xmm1, xmm7
        vmovss  xmm7, cs:__real@40900000
        vaddss  xmm1, xmm3, xmm0
        vaddss  xmm3, xmm1, dword ptr [rsi+134h]
        vaddss  xmm1, xmm9, xmm8
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+9B0h+origin+4], xmm3
        vaddss  xmm0, xmm2, dword ptr [rsi+138h]
        vmovss  dword ptr [rsp+9B0h+origin+8], xmm0
      }
    }
    if ( ((1 << LOBYTE(_RDI->constant.type)) & 0x62700000) != 0 )
    {
      AngleVectors((const vec3_t *)&_RDI->constant.44, NULL, NULL, &up);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+8B0h+up+8]
        vcomiss xmm0, xmm12
      }
      if ( v195 | v196 )
        goto $failed_node;
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && !*v236 )
    {
      _R8 = &actorBox;
      if ( 1 << LOBYTE(_RDI->constant.type) != ((1 << LOBYTE(_RDI->constant.type)) & 0x78130002) )
        goto LABEL_37;
      v126 = _RDI->constant.spawnflags & 0x5C;
      if ( v126 != 68 )
      {
        if ( v126 == 76 )
        {
          _R8 = &actorBoxProne;
LABEL_37:
          __asm
          {
            vmovups xmm0, xmmword ptr [r8]
            vmovsd  xmm1, qword ptr [r8+10h]
            vmovups xmmword ptr [rsp+9B0h+var_948], xmm0
            vmovsd  qword ptr [rsp+9B0h+var_93C+4], xmm1
          }
          if ( _R8 == &actorBoxCrouch && !_RBX->bAllowCrouch || _R8 == &actorBoxProne && !_RBX->bAllowProne || _R8 == &actorBox )
          {
            *vec3_t::operator[](&v240.midPoint, 2) = 44.5;
            *vec3_t::operator[](&v240.halfSize, 2) = 27.5;
          }
          else
          {
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [rsp+9B0h+var_93C]
              vaddss  xmm6, xmm1, xmm15
            }
            _RAX = vec3_t::operator[](&v240.midPoint, 2);
            __asm
            {
              vmulss  xmm0, xmm6, xmm13
              vaddss  xmm1, xmm0, xmm7
              vmovss  dword ptr [rax], xmm1
            }
            _RAX = vec3_t::operator[](&v240.halfSize, 2);
            __asm
            {
              vsubss  xmm0, xmm6, xmm15
              vmulss  xmm1, xmm0, xmm13
              vmovss  dword ptr [rax], xmm1
              vaddss  xmm0, xmm14, dword ptr [rsp+9B0h+var_93C]
              vmaxss  xmm3, xmm0, dword ptr [rsp+9B0h+var_93C+8]
              vaddss  xmm2, xmm14, dword ptr [rsp+9B0h+var_93C+4]
              vmaxss  xmm0, xmm3, xmm2
              vmovss  dword ptr [rsp+9B0h+var_93C+8], xmm0
            }
          }
          goto LABEL_45;
        }
        if ( v126 != 84 )
          goto LABEL_37;
      }
      _R8 = &actorBoxCrouch;
      goto LABEL_37;
    }
LABEL_45:
    if ( ((1 << LOBYTE(_RDI->constant.type)) & 0x1E300000) != 0 )
    {
      __asm { vmovss  xmm6, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox }
      *vec3_t::operator[](&v240.midPoint, 2) = 0.0;
      _RAX = vec3_t::operator[](&v240.halfSize, 2);
      __asm { vmovss  dword ptr [rax], xmm6 }
    }
    entNum = _RBX->entNum;
    v144 = entNum <= 0x7FF;
    if ( entNum != 2047 )
    {
      IsNodeUseableBy = Path_IsNodeUseableBy(_RDI, entNum);
      v144 = !IsNodeUseableBy;
      if ( !IsNodeUseableBy )
      {
        if ( !_RBX->bAllowFailedUnuseable )
          goto LABEL_59;
        goto $failed_node;
      }
    }
    _R10 = _RBX->vOrigin;
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+9B0h+origin]
      vmovss  xmm4, dword ptr [rsp+9B0h+origin+4]
      vmovss  xmm0, dword ptr [r10]
      vmovss  xmm1, dword ptr [r10+4]
      vsubss  xmm2, xmm0, xmm3
      vmovss  xmm0, dword ptr [r10+8]
      vsubss  xmm6, xmm0, dword ptr [rsp+9B0h+origin+8]
      vandps  xmm2, xmm2, xmm10
      vsubss  xmm2, xmm2, dword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
      vsubss  xmm5, xmm1, xmm4
      vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize; Bounds const actorBox
      vandps  xmm2, xmm2, xmm10
      vcomiss xmm2, xmm1
      vandps  xmm5, xmm5, xmm10
      vandps  xmm6, xmm6, xmm10
    }
    if ( v144 )
    {
      __asm
      {
        vsubss  xmm2, xmm5, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+4; Bounds const actorBox
        vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
        vandps  xmm2, xmm2, xmm10
        vcomiss xmm2, xmm1
      }
      if ( v144 )
      {
        __asm
        {
          vsubss  xmm2, xmm6, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+8; Bounds const actorBox
          vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox
          vandps  xmm2, xmm2, xmm10
          vcomiss xmm2, xmm1
        }
        if ( v144 )
          break;
      }
    }
    v167 = 0i64;
    v168 = iPlaneCount == 0i64;
    if ( iPlaneCount <= 0i64 )
    {
LABEL_58:
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+9B0h+var_93C+8]
        vmaxss  xmm1, xmm0, dword ptr [rsp+9B0h+var_93C]
      }
      typeFlagsa = _RBX->traceMask & 0xFDFFBFFF;
      __asm { vmovss  dword ptr [rsp+9B0h+var_93C+8], xmm1 }
      if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, _R10, &origin, &v240, 2047, 2047, typeFlagsa) )
        break;
LABEL_59:
      v90 = v234;
      goto LABEL_60;
    }
    _RCX = (__int64)_RBX->blockPlanes->fDist;
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm4, dword ptr [rdx+rax*8+4]
        vmulss  xmm0, xmm3, dword ptr [rdx+rax*8]
        vaddss  xmm1, xmm1, xmm0
        vcomiss xmm1, dword ptr [rcx]
      }
      if ( !v168 )
        break;
      ++v167;
      _RCX += 4i64;
      v168 = v167 <= iPlaneCount;
      if ( (__int64)v167 >= iPlaneCount )
        goto LABEL_58;
    }
$failed_node:
    v90 = ++v234;
    *v238++ = _RDI;
LABEL_60:
    __asm { vmovss  xmm6, cs:__real@40000000 }
    if ( ++v91 >= v235 )
    {
      p_baseBounds = v236;
      goto LABEL_62;
    }
  }
  Profile_EndInternal(NULL);
  result = _RDI;
LABEL_88:
  __asm
  {
    vmovaps xmm12, xmmword ptr [rsp+9B0h+var_B8+8]
    vmovaps xmm9, [rsp+9B0h+var_88+8]
    vmovaps xmm8, xmmword ptr [rsp+9B0h+var_78+8]
  }
  _R11 = &v247;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-90h]
    vmovaps xmm14, xmmword ptr [r11-0A0h]
    vmovaps xmm15, xmmword ptr [r11-0B0h]
  }
  return result;
}

/*
==============
Path_NearestNodeForLineOfSight
==============
*/
pathnode_t *Path_NearestNodeForLineOfSight(const vec3_t *vOrigin, int traceMask, PathBlockPlanes *blockPlanes)
{
  int v12; 
  NearestNodeInput v13; 
  int v14[4]; 
  __int128 v15; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  xmm0, cs:__real@43400000
    vmovss  [rsp+98h+var_60], xmm0
    vmovss  xmm0, dword ptr [rcx]
  }
  v13.typeFlags = -2;
  v13.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
  v13.entNum = 2047;
  *(_WORD *)&v13.bAllowCrouch = 257;
  v13.bAllowFailedUnuseable = 1;
  __asm
  {
    vmovss  [rsp+98h+var_38], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vaddss  xmm2, xmm0, cs:__real@41300000
  }
  v13.vOrigin = (const vec3_t *)v14;
  v13.traceMask = traceMask;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_34], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovups [rsp+98h+var_28], xmm1
  }
  v13.blockPlanes = blockPlanes;
  v13.baseBounds = (const Bounds *)&v15;
  __asm
  {
    vmovss  dword ptr [r11-18h], xmm0
    vmovss  dword ptr [r11-14h], xmm0
    vmovss  [rsp+98h+var_30], xmm2
  }
  return Path_NearestNodeForLineOfSightSystem(&v13, g_nearestNodes, 64, &v12);
}

/*
==============
Path_NearestNodeForLineOfSightSystem
==============
*/
pathnode_t *Path_NearestNodeForLineOfSightSystem(const NearestNodeInput *pInput, pathsort_s *nodes, int maxNodes, int *returnCount)
{
  int *v15; 
  PathBlockPlanes *blockPlanes; 
  unsigned __int16 v20; 
  int iPlaneCount; 
  int v29; 
  int v30; 
  int v31; 
  gentity_s *Parent; 
  const Bounds **p_baseBounds; 
  int v89; 
  unsigned __int16 v90; 
  gentity_s *v102; 
  int v126; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  int v130; 
  unsigned int entNum; 
  bool v148; 
  bool IsNodeUseableBy; 
  unsigned __int64 v171; 
  bool v172; 
  unsigned __int16 v179; 
  pathnode_t *v181; 
  int v182; 
  pathnode_t *result; 
  pathnode_t *v198; 
  char v199; 
  char v200; 
  int v214; 
  const vec3_t *vOrigin; 
  int typeFlags; 
  unsigned int typeFlagsa; 
  int v237; 
  int v238; 
  const Bounds **v239; 
  pathnode_t **v241; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t origin; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  vec3_t up; 
  pathnode_t *v247[256]; 
  char v251; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  v15 = returnCount;
  _R13 = nodes;
  _RBX = pInput;
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9098, ASSERT_TYPE_ASSERT, "(pInput)", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  if ( !_RBX->vOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9099, ASSERT_TYPE_ASSERT, "(pInput->vOrigin)", (const char *)&queryFormat, "pInput->vOrigin") )
    __debugbreak();
  if ( !_RBX->traceMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9100, ASSERT_TYPE_ASSERT, "(pInput->traceMask != 0)", (const char *)&queryFormat, "pInput->traceMask != 0") )
    __debugbreak();
  Profile_Begin(277);
  blockPlanes = _RBX->blockPlanes;
  v20 = 0;
  if ( blockPlanes )
    iPlaneCount = blockPlanes->iPlaneCount;
  else
    iPlaneCount = 0;
  if ( _RBX->heightCheck )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@4e6e6b28; maxHeight
      vmovss  xmm2, dword ptr [rbx+10h]; maxDist
    }
    v30 = Path_NodesInCylinder(_RBX->vOrigin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, _R13, maxNodes, _RBX->typeFlags, 0);
    v238 = v30;
  }
  else
  {
    _RAX = _RBX->vOrigin;
    __asm
    {
      vmovss  xmm3, cs:__real@43380000; maxHeight
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+8D0h+origin], xmm0
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm2, xmm0, cs:__real@42f00000
    }
    typeFlags = _RBX->typeFlags;
    __asm
    {
      vmovss  dword ptr [rbp+8D0h+origin+8], xmm2
      vmovss  xmm2, dword ptr [rbx+10h]; maxDist
      vmovss  dword ptr [rbp+8D0h+origin+4], xmm1
    }
    v29 = Path_NodesInCylinder(&origin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, _R13, maxNodes, typeFlags, 0);
    v238 = v29;
    v30 = v29;
    if ( v29 > 0 )
    {
      v31 = v29;
      do
      {
        _RSI = 2i64 * v20;
        _RCX = _R13[v20].node;
        __asm
        {
          vmovss  xmm7, dword ptr [rcx+20h]
          vmovss  xmm8, dword ptr [rcx+24h]
          vmovss  xmm6, dword ptr [rcx+28h]
        }
        Parent = pathnode_t::GetParent(_RCX);
        __asm
        {
          vmovaps xmm4, xmm7
          vmovaps xmm5, xmm8
        }
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          __asm
          {
            vmulss  xmm1, xmm8, dword ptr [rbp+8D0h+axis+0Ch]
            vmulss  xmm0, xmm7, dword ptr [rbp+8D0h+axis]
            vmulss  xmm3, xmm8, dword ptr [rbp+8D0h+axis+10h]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+axis+18h]
            vmulss  xmm0, xmm7, dword ptr [rbp+8D0h+axis+4]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm4, xmm2, dword ptr [rdi+130h]
            vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+axis+1Ch]
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm3, xmm8, dword ptr [rbp+8D0h+axis+14h]
            vmulss  xmm0, xmm7, dword ptr [rbp+8D0h+axis+8]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm5, xmm2, dword ptr [rdi+134h]
            vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+axis+20h]
            vaddss  xmm2, xmm3, xmm0
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm6, xmm2, dword ptr [rdi+138h]
          }
        }
        _RAX = _RBX->vOrigin;
        ++v20;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm1, dword ptr [rax+4]
          vsubss  xmm3, xmm0, xmm4
          vmovss  xmm0, dword ptr [rax+8]
          vsubss  xmm2, xmm1, xmm5
          vmulss  xmm2, xmm2, xmm2
          vsubss  xmm4, xmm0, xmm6
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vmovss  dword ptr [r13+rsi*8+8], xmm2
        }
      }
      while ( v20 < v31 );
      v15 = returnCount;
      v30 = v238;
    }
  }
  std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(_R13, &_R13[v30], v30, Path_CompareNodesIncreasingDistOnly);
  p_baseBounds = &_RBX->baseBounds;
  v239 = &_RBX->baseBounds;
  __asm
  {
    vmovss  xmm6, cs:__real@40000000
    vmovss  xmm12, cs:__real@3f000000
    vmovss  xmm7, cs:__real@3dcccccd
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) || *p_baseBounds )
  {
    _RAX = *p_baseBounds;
    v239 = &_RBX->baseBounds;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+8D0h+bounds.midPoint], xmm1
      vmovsd  xmm0, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+8D0h+bounds.halfSize+4], xmm0
      vshufps xmm1, xmm1, xmm1, 0FFh
      vmaxss  xmm4, xmm1, xmm0
      vmovss  dword ptr [rbp+8D0h+bounds.halfSize], xmm4
      vmovss  dword ptr [rbp+8D0h+bounds.halfSize+4], xmm4
      vmulss  xmm3, xmm6, dword ptr [rax+14h]
      vsubss  xmm0, xmm3, cs:__real@41880000
      vmulss  xmm1, xmm3, xmm12
      vaddss  xmm2, xmm1, cs:__real@41080000
      vaddss  xmm1, xmm4, xmm7
      vmulss  xmm3, xmm0, xmm12
      vmovss  dword ptr [rbp+8D0h+bounds.midPoint+8], xmm2
      vmaxss  xmm2, xmm3, xmm1
      vmovss  dword ptr [rbp+8D0h+bounds.halfSize+8], xmm2
    }
  }
  __asm { vmovaps xmmword ptr [rsp+9D0h+var_C8+8], xmm13 }
  v89 = 0;
  __asm { vmovaps [rsp+9D0h+var_D8+8], xmm14 }
  *v15 = v30;
  v90 = 0;
  __asm { vmovaps [rsp+9D0h+var_E8+8], xmm15 }
  v237 = 0;
  __asm
  {
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@41100000
    vmovss  xmm9, cs:__real@40900000
    vmovss  xmm11, cs:__real@3f800000
  }
  if ( v30 <= 0 )
  {
LABEL_66:
    v179 = 0;
    if ( v89 <= 0 )
    {
LABEL_91:
      Profile_EndInternal(NULL);
      result = NULL;
      goto LABEL_92;
    }
    while ( 1 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) || *p_baseBounds )
        goto LABEL_85;
      _R8 = &actorBox;
      v181 = v247[v179];
      if ( v181 && 1 << LOBYTE(v181->constant.type) == ((1 << LOBYTE(v181->constant.type)) & 0x78130002) )
      {
        v182 = v181->constant.spawnflags & 0x5C;
        if ( v182 != 68 )
        {
          if ( v182 == 76 )
          {
            _R8 = &actorBoxProne;
            goto LABEL_74;
          }
          if ( v182 != 84 )
            goto LABEL_74;
        }
        _R8 = &actorBoxCrouch;
      }
LABEL_74:
      __asm
      {
        vmovups xmm0, xmmword ptr [r8]
        vmovsd  xmm1, qword ptr [r8+10h]
        vmovups xmmword ptr [rbp+8D0h+bounds.midPoint], xmm0
        vmovsd  qword ptr [rbp+8D0h+bounds.halfSize+4], xmm1
      }
      if ( _R8 == &actorBoxCrouch && !_RBX->bAllowCrouch || _R8 == &actorBoxProne && !_RBX->bAllowProne || _R8 == &actorBox )
      {
        *vec3_t::operator[](&bounds.midPoint, 2) = 44.5;
        *vec3_t::operator[](&bounds.halfSize, 2) = 27.5;
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+bounds.halfSize]
          vaddss  xmm6, xmm1, xmm8
        }
        _RAX = vec3_t::operator[](&bounds.midPoint, 2);
        __asm
        {
          vmulss  xmm0, xmm6, xmm12
          vaddss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rax], xmm1
        }
        _RAX = vec3_t::operator[](&bounds.halfSize, 2);
        __asm
        {
          vsubss  xmm0, xmm6, xmm8
          vmulss  xmm1, xmm0, xmm12
          vmovss  dword ptr [rax], xmm1
          vaddss  xmm0, xmm7, dword ptr [rbp+8D0h+bounds.halfSize]
          vmaxss  xmm3, xmm0, dword ptr [rbp+8D0h+bounds.halfSize+8]
          vaddss  xmm2, xmm7, dword ptr [rbp+8D0h+bounds.halfSize+4]
          vmaxss  xmm0, xmm3, xmm2
          vmovss  dword ptr [rbp+8D0h+bounds.halfSize+8], xmm0
        }
      }
LABEL_85:
      v198 = v247[v179];
      pathnode_t::GetPos(v198, &origin);
      _RAX = _RBX->vOrigin;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  xmm1, dword ptr [rax+4]
        vsubss  xmm2, xmm0, dword ptr [rbp+8D0h+origin]
        vsubss  xmm3, xmm1, dword ptr [rbp+8D0h+origin+4]
        vmovss  xmm0, dword ptr [rax+8]
        vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize; Bounds const actorBox
        vsubss  xmm4, xmm0, dword ptr [rbp+8D0h+origin+8]
        vandps  xmm2, xmm2, xmm10
        vsubss  xmm2, xmm2, dword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
        vandps  xmm2, xmm2, xmm10
        vcomiss xmm2, xmm1
        vandps  xmm3, xmm3, xmm10
        vandps  xmm4, xmm4, xmm10
      }
      v214 = 0;
      if ( v199 | v200 )
      {
        __asm
        {
          vsubss  xmm2, xmm3, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+4; Bounds const actorBox
          vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
          vandps  xmm2, xmm2, xmm10
          vcomiss xmm2, xmm1
        }
        if ( v199 | v200 )
        {
          __asm
          {
            vsubss  xmm2, xmm4, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+8; Bounds const actorBox
            vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox
            vandps  xmm2, xmm2, xmm10
            vcomiss xmm2, xmm1
          }
          LOBYTE(v214) = v199 | v200;
        }
      }
      if ( v214 )
        goto LABEL_93;
      pathnode_t::GetPos(v198, &up);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+8D0h+bounds.halfSize+8]
        vmaxss  xmm1, xmm0, dword ptr [rbp+8D0h+bounds.halfSize]
      }
      vOrigin = _RBX->vOrigin;
      typeFlagsa = _RBX->traceMask & 0xFDFFBFFF;
      __asm { vmovss  dword ptr [rbp+8D0h+bounds.halfSize+8], xmm1 }
      if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, vOrigin, &up, &bounds, 2047, 2047, typeFlagsa) )
      {
LABEL_93:
        Profile_EndInternal(NULL);
        result = v198;
        goto LABEL_92;
      }
      __asm { vmovss  xmm6, cs:__real@40000000 }
      p_baseBounds = v239;
      if ( ++v179 >= v237 )
        goto LABEL_91;
    }
  }
  __asm
  {
    vmovss  xmm15, cs:__real@3f59999a
    vmovss  xmm14, cs:__real@3f7ae148
  }
  v241 = v247;
  __asm { vxorps  xmm13, xmm13, xmm13 }
  while ( 1 )
  {
    _RDI = _R13[v90].node;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+20h]
      vmovss  dword ptr [rbp+8D0h+origin], xmm0
      vmovss  xmm1, dword ptr [rdi+24h]
      vmovss  dword ptr [rbp+8D0h+origin+4], xmm1
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  dword ptr [rbp+8D0h+origin+8], xmm0
    }
    v102 = pathnode_t::GetParent(_RDI);
    if ( v102 )
    {
      AnglesToAxis(&v102->r.currentAngles, &axis);
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+8D0h+origin+4]
        vmovss  xmm2, dword ptr [rbp+8D0h+origin]
        vmulss  xmm7, xmm2, dword ptr [rbp+8D0h+axis+4]
        vmulss  xmm8, xmm2, dword ptr [rbp+8D0h+axis+8]
        vmulss  xmm2, xmm2, dword ptr [rbp+8D0h+axis]
        vmovss  xmm5, dword ptr [rbp+8D0h+origin+8]
        vmulss  xmm3, xmm6, dword ptr [rbp+8D0h+axis+0Ch]
        vmulss  xmm9, xmm6, dword ptr [rbp+8D0h+axis+14h]
        vmulss  xmm1, xmm5, dword ptr [rbp+8D0h+axis+18h]
        vmulss  xmm0, xmm5, dword ptr [rbp+8D0h+axis+1Ch]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vaddss  xmm3, xmm2, dword ptr [rsi+130h]
        vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+axis+10h]
        vmovss  xmm6, cs:__real@40000000
        vmovss  dword ptr [rbp+8D0h+origin], xmm3
        vaddss  xmm3, xmm1, xmm7
        vmovss  xmm7, cs:__real@3dcccccd
        vaddss  xmm1, xmm3, xmm0
        vaddss  xmm3, xmm1, dword ptr [rsi+134h]
        vmulss  xmm1, xmm5, dword ptr [rbp+8D0h+axis+20h]
        vaddss  xmm2, xmm9, xmm8
        vmovss  xmm8, cs:__real@41100000
        vmovss  xmm9, cs:__real@40900000
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rbp+8D0h+origin+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsi+138h]
        vmovss  dword ptr [rbp+8D0h+origin+8], xmm3
      }
    }
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.ignoreBodies = NULL;
    extendedData.phaseSelection = All;
    v126 = _RBX->traceMask & 0xFDFFBFFF;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    extendedData.contents = v126;
    __asm { vmovss  [rsp+9D0h+extendedData.collisionBuffer], xmm13 }
    *(_WORD *)&extendedData.collectInsideHits = 256;
    ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_FIRST);
    if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9161, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
      __debugbreak();
    if ( ((1 << LOBYTE(_RDI->constant.type)) & 0x62700000) != 0 )
    {
      AngleVectors((const vec3_t *)&_RDI->constant.44, NULL, NULL, &up);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+8D0h+up+8]
        vcomiss xmm0, xmm15
      }
      if ( v199 | v200 )
        goto $failed_node_0;
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && !*v239 )
    {
      _R8 = &actorBox;
      if ( 1 << LOBYTE(_RDI->constant.type) != ((1 << LOBYTE(_RDI->constant.type)) & 0x78130002) )
        goto LABEL_40;
      v130 = _RDI->constant.spawnflags & 0x5C;
      if ( v130 != 68 )
      {
        if ( v130 == 76 )
        {
          _R8 = &actorBoxProne;
LABEL_40:
          __asm
          {
            vmovups xmm0, xmmword ptr [r8]
            vmovsd  xmm1, qword ptr [r8+10h]
            vmovups xmmword ptr [rbp+8D0h+bounds.midPoint], xmm0
            vmovsd  qword ptr [rbp+8D0h+bounds.halfSize+4], xmm1
          }
          if ( _R8 == &actorBoxCrouch && !_RBX->bAllowCrouch || _R8 == &actorBoxProne && !_RBX->bAllowProne || _R8 == &actorBox )
          {
            *vec3_t::operator[](&bounds.midPoint, 2) = 44.5;
            *vec3_t::operator[](&bounds.halfSize, 2) = 27.5;
          }
          else
          {
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [rbp+8D0h+bounds.halfSize]
              vaddss  xmm6, xmm1, xmm8
            }
            _RAX = vec3_t::operator[](&bounds.midPoint, 2);
            __asm
            {
              vmulss  xmm0, xmm6, xmm12
              vaddss  xmm1, xmm0, xmm9
              vmovss  dword ptr [rax], xmm1
            }
            _RAX = vec3_t::operator[](&bounds.halfSize, 2);
            __asm
            {
              vsubss  xmm0, xmm6, xmm8
              vmulss  xmm1, xmm0, xmm12
              vmovss  dword ptr [rax], xmm1
              vaddss  xmm0, xmm7, dword ptr [rbp+8D0h+bounds.halfSize]
              vmaxss  xmm3, xmm0, dword ptr [rbp+8D0h+bounds.halfSize+8]
              vaddss  xmm2, xmm7, dword ptr [rbp+8D0h+bounds.halfSize+4]
              vmaxss  xmm0, xmm3, xmm2
              vmovss  dword ptr [rbp+8D0h+bounds.halfSize+8], xmm0
            }
          }
          goto LABEL_48;
        }
        if ( v130 != 84 )
          goto LABEL_40;
      }
      _R8 = &actorBoxCrouch;
      goto LABEL_40;
    }
LABEL_48:
    if ( ((1 << LOBYTE(_RDI->constant.type)) & 0x1E300000) != 0 )
    {
      __asm { vmovss  xmm6, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox }
      *vec3_t::operator[](&bounds.midPoint, 2) = 0.0;
      _RAX = vec3_t::operator[](&bounds.halfSize, 2);
      __asm { vmovss  dword ptr [rax], xmm6 }
    }
    entNum = _RBX->entNum;
    v148 = entNum <= 0x7FF;
    if ( entNum != 2047 )
    {
      IsNodeUseableBy = Path_IsNodeUseableBy(_RDI, entNum);
      v148 = !IsNodeUseableBy;
      if ( !IsNodeUseableBy )
      {
        if ( !_RBX->bAllowFailedUnuseable )
          goto LABEL_63;
        goto $failed_node_0;
      }
    }
    _RAX = _RBX->vOrigin;
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+8D0h+origin]
      vmovss  xmm5, dword ptr [rbp+8D0h+origin+4]
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vsubss  xmm2, xmm0, xmm4
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm6, xmm0, dword ptr [rbp+8D0h+origin+8]
      vandps  xmm2, xmm2, xmm10
      vsubss  xmm2, xmm2, dword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
      vsubss  xmm3, xmm1, xmm5
      vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize; Bounds const actorBox
      vandps  xmm2, xmm2, xmm10
      vcomiss xmm2, xmm1
      vandps  xmm3, xmm3, xmm10
      vandps  xmm6, xmm6, xmm10
    }
    if ( v148 )
    {
      __asm
      {
        vsubss  xmm2, xmm3, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+4; Bounds const actorBox
        vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
        vandps  xmm2, xmm2, xmm10
        vcomiss xmm2, xmm1
      }
      if ( v148 )
      {
        __asm
        {
          vsubss  xmm2, xmm6, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+8; Bounds const actorBox
          vaddss  xmm1, xmm11, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox
          vandps  xmm2, xmm2, xmm10
          vcomiss xmm2, xmm1
        }
        if ( v148 )
          break;
      }
    }
    v171 = 0i64;
    v172 = iPlaneCount == 0i64;
    if ( iPlaneCount <= 0i64 )
    {
LABEL_61:
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+8D0h+bounds.halfSize+8]
        vmaxss  xmm1, xmm0, dword ptr [rbp+8D0h+bounds.halfSize]
        vmovss  dword ptr [rbp+8D0h+bounds.halfSize+8], xmm1
      }
      HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
      Physics_Raycast(PHYSICS_WORLD_ID_FIRST, _RBX->vOrigin, &origin, &extendedData, ClosestResult);
      if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
        break;
      *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
      __asm { vcomiss xmm0, xmm14 }
      if ( !v199 )
        break;
LABEL_63:
      v89 = v237;
      goto LABEL_64;
    }
    _RCX = (__int64)_RBX->blockPlanes->fDist;
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [rdx+rax*8+4]
        vmulss  xmm0, xmm4, dword ptr [rdx+rax*8]
        vaddss  xmm1, xmm1, xmm0
        vcomiss xmm1, dword ptr [rcx]
      }
      if ( !v172 )
        break;
      ++v171;
      _RCX += 4i64;
      v172 = v171 <= iPlaneCount;
      if ( (__int64)v171 >= iPlaneCount )
        goto LABEL_61;
    }
$failed_node_0:
    v89 = ++v237;
    *v241++ = _RDI;
LABEL_64:
    __asm { vmovss  xmm6, cs:__real@40000000 }
    if ( ++v90 >= v238 )
    {
      p_baseBounds = v239;
      goto LABEL_66;
    }
  }
  Profile_EndInternal(NULL);
  result = _RDI;
LABEL_92:
  __asm
  {
    vmovaps xmm15, [rsp+9D0h+var_E8+8]
    vmovaps xmm14, [rsp+9D0h+var_D8+8]
    vmovaps xmm13, xmmword ptr [rsp+9D0h+var_C8+8]
  }
  _R11 = &v251;
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
  return result;
}

/*
==============
Path_NearestNodeOriented
==============
*/
pathnode_t *Path_NearestNodeOriented(const vec3_t *vOrigin, int traceMask, pathsort_s *nodes, int maxNodes, int typeFlags, float fMaxDist, const float boundsRadius, const vec3_t *normal, int *returnCount)
{
  int v23; 
  unsigned __int16 v25; 
  gentity_s *Parent; 
  char v44; 
  pathnode_t *result; 
  vec3_t up; 
  vec3_t end; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec3_t vector; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
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
  }
  _R15 = vOrigin;
  Profile_Begin(295);
  __asm
  {
    vmovss  xmm2, [rbp+80h+fMaxDist]; maxDist
    vmovaps xmm3, xmm2; maxHeight
  }
  v23 = Path_NodesInCylinder(_R15, NULL, *(float *)&_XMM2, *(float *)&_XMM3, nodes, maxNodes, typeFlags, 0);
  std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(nodes, &nodes[v23], v23, Path_CompareNodesIncreasing);
  __asm { vmovss  xmm0, [rbp+80h+boundsRadius] }
  *returnCount = v23;
  v25 = 0;
  __asm { vmulss  xmm13, xmm0, xmm0 }
  if ( v23 <= 0 )
  {
LABEL_9:
    Profile_EndInternal(NULL);
    result = NULL;
  }
  else
  {
    __asm
    {
      vmovss  xmm12, cs:__real@3f59999a
      vmovss  xmm11, cs:__real@41200000
    }
    while ( 1 )
    {
      _RBX = nodes[v25].node;
      pathnode_t::GetAngles(_RBX, &vector);
      AngleVectors(&vector, NULL, NULL, &up);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+180h+up]
        vmovss  xmm1, dword ptr [rsp+180h+up+4]
        vmulss  xmm2, xmm1, dword ptr [rsi+4]
        vmulss  xmm3, xmm0, dword ptr [rsi]
        vmovss  xmm0, dword ptr [rsp+180h+up+8]
        vmulss  xmm1, xmm0, dword ptr [rsi+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, xmm12
      }
      if ( !v44 )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rbx+20h]
          vmovss  xmm8, dword ptr [rbx+24h]
          vmovss  xmm6, dword ptr [rbx+28h]
        }
        Parent = pathnode_t::GetParent(_RBX);
        __asm
        {
          vmovaps xmm5, xmm7
          vmovaps xmm9, xmm8
        }
        v44 = 0;
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          __asm
          {
            vmulss  xmm1, xmm8, dword ptr [rbp+80h+axis+0Ch]
            vmulss  xmm0, xmm7, dword ptr [rsp+180h+axis]
            vmulss  xmm3, xmm8, dword ptr [rbp+80h+axis+10h]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rbp+80h+axis+18h]
            vmulss  xmm0, xmm7, dword ptr [rsp+180h+axis+4]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm5, xmm2, dword ptr [r14+130h]
            vmulss  xmm2, xmm6, dword ptr [rbp+80h+axis+1Ch]
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm3, xmm8, dword ptr [rbp+80h+axis+14h]
            vaddss  xmm0, xmm4, xmm2
            vmulss  xmm2, xmm7, dword ptr [rbp+80h+axis+8]
            vaddss  xmm9, xmm0, dword ptr [r14+134h]
            vmulss  xmm0, xmm6, dword ptr [rbp+80h+axis+20h]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm0
            vaddss  xmm6, xmm2, dword ptr [r14+138h]
          }
        }
        __asm
        {
          vmovss  xmm8, dword ptr [r15+4]
          vmovss  xmm7, dword ptr [r15]
          vmovss  xmm10, dword ptr [r15+8]
          vsubss  xmm0, xmm9, xmm8
          vmulss  xmm1, xmm0, xmm0
          vsubss  xmm2, xmm5, xmm7
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vsubss  xmm3, xmm6, xmm10
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm13
        }
        if ( v44 )
          break;
        __asm
        {
          vmulss  xmm4, xmm11, dword ptr [rsi]
          vmulss  xmm3, xmm11, dword ptr [rsi+4]
          vmulss  xmm2, xmm11, dword ptr [rsi+8]
          vaddss  xmm1, xmm4, xmm7
          vmovss  dword ptr [rsp+180h+start], xmm1
          vaddss  xmm1, xmm3, xmm8
          vmovss  dword ptr [rsp+180h+start+4], xmm1
          vaddss  xmm1, xmm2, xmm10
          vaddss  xmm0, xmm4, xmm5
          vmovss  dword ptr [rsp+180h+start+8], xmm1
          vmovss  dword ptr [rsp+180h+end], xmm0
          vaddss  xmm1, xmm3, xmm9
          vaddss  xmm0, xmm2, xmm6
          vmovss  dword ptr [rsp+180h+end+4], xmm1
          vmovss  dword ptr [rsp+180h+end+8], xmm0
        }
        if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &end, &bounds_origin, 2047, 2047, traceMask & 0xFDFFBFFF) )
          break;
      }
      if ( ++v25 >= v23 )
        goto LABEL_9;
    }
    Profile_EndInternal(NULL);
    result = _RBX;
  }
  _R11 = &v96;
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
  }
  return result;
}

/*
==============
Path_NextNode
==============
*/
pathnode_t *Path_NextNode(pathnode_t *prevNode, int typeFlags)
{
  unsigned __int16 v3; 

  v3 = Path_ConvertNodeToIndex(prevNode) + 1;
  if ( v3 >= g_path.actualNodeCount )
    return 0i64;
  while ( !_bittest(&typeFlags, LOBYTE(pathData.nodes[v3].constant.type)) )
  {
    if ( ++v3 >= g_path.actualNodeCount )
      return 0i64;
  }
  return &pathData.nodes[v3];
}

/*
==============
Path_NodeActorAngleYawOffset
==============
*/
float Path_NodeActorAngleYawOffset(const pathnode_t *node)
{
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8110, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( ((1 << LOBYTE(node->constant.type)) & 0xC0) != 0 )
  {
    __asm { vmovss  xmm2, cs:__real@c2b40000 }
    _ECX = 0;
    _EAX = (1 << LOBYTE(node->constant.type)) & 0x80;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@42b40000
      vblendvps xmm0, xmm1, xmm2, xmm3
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
Path_NodeCompareCost
==============
*/
__int64 Path_NodeCompareCost(const void *node0, const void *node1)
{
  _RAX = *(_QWORD *)node0;
  _RCX = *(_QWORD *)node1;
  __asm
  {
    vcvttss2si eax, dword ptr [rax+0B0h]
    vcvttss2si edx, dword ptr [rcx+0B0h]
  }
  return (unsigned int)(_RAX - _EDX);
}

/*
==============
Path_NodeCount
==============
*/
__int64 Path_NodeCount()
{
  return g_path.actualNodeCount - pathData.zoneCount;
}

/*
==============
Path_NodeExposedToPoint
==============
*/
__int64 Path_NodeExposedToPoint(const pathnode_t *node, const vec3_t *point, int exposeFlags)
{
  __int64 result; 
  vec3_t pos; 
  vec2_t vec; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  _RBX = point;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm4, xmm0, dword ptr [rsp+78h+pos]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm5, xmm1, dword ptr [rsp+78h+pos+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm6, xmm0, dword ptr [rsp+78h+pos+8]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm7, xmm2, xmm2
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+78h+vec], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  [rsp+78h+var_40], xmm0
    vmovss  dword ptr [rsp+78h+vec+4], xmm1
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm { vmovaps xmm1, xmm0; yaw }
  Path_NodeExposureGetRawMax(node, *(float *)&_XMM1, exposeFlags);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@42c80000
    vcomiss xmm1, xmm7
  }
  result = 1i64;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return result;
}

/*
==============
Path_NodeExposedToPoint_Fast
==============
*/
__int64 Path_NodeExposedToPoint_Fast(const pathnode_t *node, const vec3_t *nodeWorldOrigin, const vec3_t *point, const int exposeFlags)
{
  __int128 v59; 
  char v62; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RDI = point;
  __asm { vmovaps [rsp+68h+var_38], xmm8 }
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8487, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node", v59) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm8, xmm0, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm7, xmm0, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm6, xmm1, dword ptr [rsi+4]
    vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm3, xmm0, cs:__real@2edbe6ff
    vxorps  xmm5, xmm5, xmm5
    vaddss  xmm4, xmm8, xmm3
    vsubss  xmm1, xmm8, xmm3
    vcmpless xmm0, xmm5, xmm8
    vblendvps xmm2, xmm4, xmm1, xmm0
    vsubss  xmm1, xmm3, xmm8
    vcmpless xmm0, xmm5, xmm8
    vblendvps xmm0, xmm1, xmm4, xmm0
    vdivss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm3, cs:__real@3e4902de
    vmulss  xmm2, xmm1, xmm3
    vsubss  xmm0, xmm2, cs:__real@3f7b50b1
    vmovss  xmm1, cs:__real@3f490fdb
    vmulss  xmm4, xmm0, xmm3
    vmovss  xmm0, cs:__real@4016cbe4
    vcmpless xmm2, xmm5, xmm8
    vblendvps xmm1, xmm0, xmm1, xmm2
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm2, xmm3, xmm0
    vmulss  xmm4, xmm0, cs:__real@42652ee0
    vmovss  xmm0, cs:__real@43b40000
    vcmpless xmm1, xmm5, xmm4
    vblendvps xmm1, xmm0, xmm5, xmm1
    vaddss  xmm1, xmm1, xmm4; yaw
  }
  Path_NodeExposureGetRawMax(node, *(float *)&_XMM1, exposeFlags);
  _R11 = &v62;
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vmulss  xmm0, xmm8, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm2, xmm1, xmm0
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vmulss  xmm1, xmm7, xmm7
    vmovaps xmm7, [rsp+68h+var_28]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm3, xmm0, cs:__real@461c4000
    vaddss  xmm4, xmm2, xmm1
    vcomiss xmm3, xmm4
  }
  return 1i64;
}

/*
==============
Path_NodeExposureGeneral
==============
*/
unsigned int Path_NodeExposureGeneral(const pathnode_t *node, int exposeFlags)
{
  unsigned int v2; 
  char v3; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int result; 

  v2 = 0;
  v3 = exposeFlags;
  if ( (exposeFlags & 1) != 0 )
    v2 = Path_NodeExposureSum360(node, PATH_EXPOSE_STAND);
  if ( (v3 & 2) != 0 )
  {
    v5 = Path_NodeExposureSum360(node, PATH_EXPOSE_CROUCH);
    if ( v2 > v5 )
      v5 = v2;
    v2 = v5;
  }
  if ( (v3 & 4) != 0 )
  {
    v6 = Path_NodeExposureSum360(node, PATH_EXPOSE_PRONE);
    if ( v2 > v6 )
      v6 = v2;
    v2 = v6;
  }
  if ( (v3 & 8) == 0 )
    return v2;
  result = Path_NodeExposureSum360(node, PATH_EXPOSE_TRAFFIC);
  if ( v2 > result )
    return v2;
  return result;
}

/*
==============
Path_NodeExposureGetRangeArcMax
==============
*/
float Path_NodeExposureGetRangeArcMax(const pathnode_t *node, float arcYaw, float coneAngle, int exposeFlags)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  Path_NodeExposureGetRawArcMax(node, arcYaw, coneAngle, exposeFlags);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, cs:__real@42c80000
  }
  return *(float *)&_XMM0;
}

/*
==============
Path_NodeExposureGetRangeArcSum
==============
*/
float Path_NodeExposureGetRangeArcSum(const pathnode_t *node, float arcYaw, float coneAngle, int exposeFlags)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  Path_NodeExposureGetRawArcSum(node, arcYaw, coneAngle, exposeFlags);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, cs:__real@42c80000
  }
  return *(float *)&_XMM0;
}

/*
==============
Path_NodeExposureGetRangeMax
==============
*/
float Path_NodeExposureGetRangeMax(const pathnode_t *node, float yaw, int exposeFlags)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  Path_NodeExposureGetRawMax(node, yaw, exposeFlags);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, cs:__real@42c80000
  }
  return *(float *)&_XMM0;
}

/*
==============
Path_NodeExposureGetRawArcMax
==============
*/

__int64 __fastcall Path_NodeExposureGetRawArcMax(const pathnode_t *node, double arcYaw, float coneAngle, int exposeFlags)
{
  unsigned int v12; 
  char v13; 
  unsigned int v21; 
  unsigned __int8 *pathExposure; 
  unsigned int v23; 
  __int64 v32; 
  __int64 v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  bool v37; 
  __int64 result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v12 = 0;
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  v13 = exposeFlags;
  __asm
  {
    vaddss  xmm7, xmm1, xmm2
    vsubss  xmm6, xmm1, xmm2
    vcomiss xmm6, xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm8, cs:__real@42340000
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm9, cs:__real@3b360b61
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm10, cs:__real@3f000000
    vmovaps [rsp+0B8h+var_88], xmm11
    vmovss  xmm11, cs:__real@c3b40000
  }
  do
  {
    v21 = Path_ExposureSizeNodes();
    if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
      __debugbreak();
    pathExposure = pathData.pathExposure;
    v23 = 0;
    if ( pathData.pathExposure )
    {
      __asm
      {
        vmulss  xmm4, xmm6, xmm9
        vaddss  xmm1, xmm4, xmm10
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm2, xmm0, xmm1
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm11
        vcvttss2si eax, xmm1
      }
      v32 = 33 * Path_ConvertNodeToIndex(node) + (180 - _EAX) / 0x2Du;
      if ( (unsigned int)v32 >= v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8305, ASSERT_TYPE_ASSERT, "(offset < expSize)", (const char *)&queryFormat, "offset < expSize") )
        __debugbreak();
      v33 = (unsigned int)(v32 + 24);
      if ( (unsigned int)v33 >= v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8306, ASSERT_TYPE_ASSERT, "(( offset + ( ( PATH_EXPOSE_MAX - 1 ) * ( ( uint(8) ) ) ) ) < expSize)", (const char *)&queryFormat, "( offset + ( ( PATH_EXPOSE_MAX - 1 ) * PATH_EXP_STRIDE_STANCE ) ) < expSize") )
        __debugbreak();
      if ( (v13 & 1) != 0 )
        v23 = pathExposure[v32];
      if ( (v13 & 2) != 0 )
      {
        v34 = pathExposure[(unsigned int)(v32 + 8)];
        if ( v23 > v34 )
          v34 = v23;
        v23 = v34;
      }
      if ( (v13 & 4) != 0 )
      {
        v35 = pathExposure[(unsigned int)(v32 + 16)];
        if ( v23 > v35 )
          v35 = v23;
        v23 = v35;
      }
      if ( (v13 & 8) != 0 )
      {
        v36 = pathExposure[v33];
        if ( v23 > v36 )
          v36 = v23;
        v23 = v36;
      }
    }
    v37 = v12 <= v23;
    __asm { vaddss  xmm6, xmm6, xmm8 }
    if ( v12 > v23 )
      v23 = v12;
    __asm { vcomiss xmm6, xmm7 }
    v12 = v23;
  }
  while ( v37 );
  __asm
  {
    vmovaps xmm11, [rsp+0B8h+var_88]
    vmovaps xmm10, [rsp+0B8h+var_78]
    vmovaps xmm9, [rsp+0B8h+var_68]
    vmovaps xmm8, [rsp+0B8h+var_58]
    vmovaps xmm6, [rsp+0B8h+var_38]
  }
  result = v23;
  __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
  return result;
}

/*
==============
Path_NodeExposureGetRawArcMin
==============
*/

__int64 __fastcall Path_NodeExposureGetRawArcMin(const pathnode_t *node, double arcYaw, float coneAngle, int exposeFlags)
{
  __int64 result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vaddss  xmm7, xmm1, xmm2
    vsubss  xmm6, xmm1, xmm2
    vcomiss xmm6, xmm7
    vmovaps xmm6, [rsp+0B8h+var_38]
  }
  result = 255i64;
  __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
  return result;
}

/*
==============
Path_NodeExposureGetRawArcSum
==============
*/

__int64 __fastcall Path_NodeExposureGetRawArcSum(const pathnode_t *node, double arcYaw, float coneAngle, int exposeFlags)
{
  unsigned int v12; 
  char v13; 
  unsigned int v21; 
  unsigned __int8 *pathExposure; 
  unsigned int v23; 
  __int64 v32; 
  __int64 v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  bool v37; 
  __int64 result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v12 = 0;
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  v13 = exposeFlags;
  __asm
  {
    vaddss  xmm7, xmm1, xmm2
    vsubss  xmm6, xmm1, xmm2
    vcomiss xmm6, xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm8, cs:__real@42340000
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm9, cs:__real@3b360b61
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm10, cs:__real@3f000000
    vmovaps [rsp+0B8h+var_88], xmm11
    vmovss  xmm11, cs:__real@c3b40000
  }
  do
  {
    v21 = Path_ExposureSizeNodes();
    if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
      __debugbreak();
    pathExposure = pathData.pathExposure;
    v23 = 0;
    if ( pathData.pathExposure )
    {
      __asm
      {
        vmulss  xmm4, xmm6, xmm9
        vaddss  xmm1, xmm4, xmm10
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm2, xmm0, xmm1
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm11
        vcvttss2si eax, xmm1
      }
      v32 = 33 * Path_ConvertNodeToIndex(node) + (180 - _EAX) / 0x2Du;
      if ( (unsigned int)v32 >= v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8305, ASSERT_TYPE_ASSERT, "(offset < expSize)", (const char *)&queryFormat, "offset < expSize") )
        __debugbreak();
      v33 = (unsigned int)(v32 + 24);
      if ( (unsigned int)v33 >= v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8306, ASSERT_TYPE_ASSERT, "(( offset + ( ( PATH_EXPOSE_MAX - 1 ) * ( ( uint(8) ) ) ) ) < expSize)", (const char *)&queryFormat, "( offset + ( ( PATH_EXPOSE_MAX - 1 ) * PATH_EXP_STRIDE_STANCE ) ) < expSize") )
        __debugbreak();
      if ( (v13 & 1) != 0 )
        v23 = pathExposure[v32];
      if ( (v13 & 2) != 0 )
      {
        v34 = pathExposure[(unsigned int)(v32 + 8)];
        if ( v23 > v34 )
          v34 = v23;
        v23 = v34;
      }
      if ( (v13 & 4) != 0 )
      {
        v35 = pathExposure[(unsigned int)(v32 + 16)];
        if ( v23 > v35 )
          v35 = v23;
        v23 = v35;
      }
      if ( (v13 & 8) != 0 )
      {
        v36 = pathExposure[v33];
        if ( v23 > v36 )
          v36 = v23;
        v23 = v36;
      }
    }
    v37 = __CFADD__(v23, v12) || v23 + v12 == 0;
    v12 += v23;
    __asm
    {
      vaddss  xmm6, xmm6, xmm8
      vcomiss xmm6, xmm7
    }
  }
  while ( v37 );
  __asm
  {
    vmovaps xmm11, [rsp+0B8h+var_88]
    vmovaps xmm10, [rsp+0B8h+var_78]
    vmovaps xmm9, [rsp+0B8h+var_68]
    vmovaps xmm8, [rsp+0B8h+var_58]
    vmovaps xmm6, [rsp+0B8h+var_38]
  }
  result = v12;
  __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
  return result;
}

/*
==============
Path_NodeExposureGetRawMax
==============
*/

__int64 __fastcall Path_NodeExposureGetRawMax(const pathnode_t *node, double yaw, int exposeFlags)
{
  char v5; 
  unsigned int v8; 
  unsigned __int8 *pathExposure; 
  __int64 result; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  v5 = exposeFlags;
  __asm { vmovaps xmm6, xmm1 }
  v8 = Path_ExposureSizeNodes();
  if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
    __debugbreak();
  pathExposure = pathData.pathExposure;
  if ( pathData.pathExposure )
  {
    __asm
    {
      vmulss  xmm4, xmm6, cs:__real@3b360b61
      vaddss  xmm1, xmm4, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm2, xmm0, xmm1
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, cs:__real@c3b40000
      vcvttss2si eax, xmm1
    }
    v20 = 0;
    v21 = 33 * Path_ConvertNodeToIndex(node) + (180 - _EAX) / 0x2Du;
    if ( (unsigned int)v21 >= v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8305, ASSERT_TYPE_ASSERT, "(offset < expSize)", (const char *)&queryFormat, "offset < expSize") )
      __debugbreak();
    v22 = (unsigned int)(v21 + 24);
    if ( (unsigned int)v22 >= v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8306, ASSERT_TYPE_ASSERT, "(( offset + ( ( PATH_EXPOSE_MAX - 1 ) * ( ( uint(8) ) ) ) ) < expSize)", (const char *)&queryFormat, "( offset + ( ( PATH_EXPOSE_MAX - 1 ) * PATH_EXP_STRIDE_STANCE ) ) < expSize") )
      __debugbreak();
    if ( (v5 & 1) != 0 )
      v20 = pathExposure[v21];
    if ( (v5 & 2) != 0 )
    {
      v23 = pathExposure[(unsigned int)(v21 + 8)];
      if ( v20 > v23 )
        v23 = v20;
      v20 = v23;
    }
    if ( (v5 & 4) != 0 )
    {
      v24 = pathExposure[(unsigned int)(v21 + 16)];
      if ( v20 > v24 )
        v24 = v20;
      v20 = v24;
    }
    if ( (v5 & 8) != 0 )
    {
      v25 = pathExposure[v22];
      if ( v20 > v25 )
        v25 = v20;
      v20 = v25;
    }
    result = v20;
  }
  else
  {
    result = 0i64;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return result;
}

/*
==============
Path_NodeExposureGetTraffic
==============
*/
__int64 Path_NodeExposureGetTraffic(const pathnode_t *node)
{
  unsigned int v2; 
  unsigned __int8 *pathExposure; 
  __int64 v5; 

  v2 = Path_ExposureSizeNodes();
  if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
    __debugbreak();
  pathExposure = pathData.pathExposure;
  if ( !pathData.pathExposure )
    return 0i64;
  v5 = 33 * (unsigned int)Path_ConvertNodeToIndex(node) + 32;
  if ( (unsigned int)v5 >= v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8284, ASSERT_TYPE_ASSERT, "(offset < expSize)", (const char *)&queryFormat, "offset < expSize") )
    __debugbreak();
  return pathExposure[v5];
}

/*
==============
Path_NodeExposureSum360
==============
*/
__int64 Path_NodeExposureSum360(const pathnode_t *node, path_exposure_e exposeStance)
{
  unsigned int v4; 
  unsigned __int8 *pathExposure; 
  unsigned __int32 v7; 
  unsigned __int8 *v8; 

  v4 = Path_ExposureSizeNodes();
  if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
    __debugbreak();
  pathExposure = pathData.pathExposure;
  if ( !pathData.pathExposure )
    return 0i64;
  v7 = 33 * Path_ConvertNodeToIndex(node) + 8 * exposeStance;
  if ( v7 > v4 - 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8386, ASSERT_TYPE_ASSERT, "(offset <= ( expSize - ( uint(8) ) ))", (const char *)&queryFormat, "offset <= ( expSize - PATH_EXP_SECTORS )") )
    __debugbreak();
  v8 = &pathExposure[v7];
  return *v8 + v8[1] + v8[2] + v8[3] + v8[4] + v8[6] + v8[7] + (unsigned int)v8[5];
}

/*
==============
Path_NodeInOrNearPlayerView
==============
*/

bool __fastcall Path_NodeInOrNearPlayerView(const pathnode_t *node, const vec3_t *viewPos, const vec3_t *viewDir, double viewFovDot)
{
  int wLinkCount; 
  int v14; 
  __int64 v17; 
  gentity_s *Parent; 
  char v25; 
  bool result; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+0E8h+var_78], xmm11
    vmovaps xmm11, xmm3
  }
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7480, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  wLinkCount = node->dynamic.wLinkCount;
  v14 = 0;
  __asm
  {
    vmovaps [rsp+0E8h+var_28], xmm6
    vmovaps [rsp+0E8h+var_38], xmm7
    vmovaps [rsp+0E8h+var_48], xmm8
    vmovaps [rsp+0E8h+var_58], xmm9
    vmovaps [rsp+0E8h+var_68], xmm10
    vmovaps [rsp+0E8h+var_88], xmm12
  }
  if ( wLinkCount + 1 <= 0 )
  {
LABEL_13:
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm12, cs:__real@80000000
      vmovss  xmm10, cs:__real@3f800000
    }
    v17 = 0i64;
    while ( 1 )
    {
      _RCX = v14 >= (__int16)wLinkCount ? (pathnode_t *)node : &pathData.nodes[node->constant.Links[v17].nodeNum];
      __asm
      {
        vmovss  xmm6, dword ptr [rcx+20h]
        vmovss  xmm7, dword ptr [rcx+24h]
        vmovss  xmm8, dword ptr [rcx+28h]
      }
      Parent = pathnode_t::GetParent(_RCX);
      __asm
      {
        vmovaps xmm5, xmm6
        vmovaps xmm9, xmm7
      }
      v25 = 0;
      if ( Parent )
      {
        AnglesToAxis(&Parent->r.currentAngles, &axis);
        __asm
        {
          vmulss  xmm1, xmm8, dword ptr [rsp+0E8h+axis+18h]
          vmulss  xmm3, xmm6, dword ptr [rsp+0E8h+axis]
          vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+axis+0Ch]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm3, xmm6, dword ptr [rsp+0E8h+axis+4]
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm5, xmm2, dword ptr [rbp+130h]
          vmulss  xmm1, xmm8, dword ptr [rsp+0E8h+axis+1Ch]
          vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+axis+10h]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm3, xmm6, dword ptr [rsp+0E8h+axis+8]
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm9, xmm2, dword ptr [rbp+134h]
          vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+axis+14h]
          vmulss  xmm1, xmm8, dword ptr [rsp+0E8h+axis+20h]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm8, xmm2, dword ptr [rbp+138h]
        }
      }
      __asm
      {
        vsubss  xmm6, xmm5, dword ptr [r15]
        vsubss  xmm4, xmm9, dword ptr [r15+4]
        vsubss  xmm7, xmm8, dword ptr [r15+8]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm12
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm5, xmm10, xmm0
        vmulss  xmm0, xmm5, xmm4
        vmulss  xmm3, xmm0, dword ptr [r14+4]
        vmulss  xmm1, xmm5, xmm6
        vmulss  xmm2, xmm1, dword ptr [r14]
        vmulss  xmm0, xmm5, xmm7
        vmulss  xmm1, xmm0, dword ptr [r14+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, xmm11
      }
      if ( !v25 )
        break;
      wLinkCount = node->dynamic.wLinkCount;
      ++v14;
      ++v17;
      if ( v14 >= wLinkCount + 1 )
        goto LABEL_13;
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm12, [rsp+0E8h+var_88]
    vmovaps xmm10, [rsp+0E8h+var_68]
    vmovaps xmm9, [rsp+0E8h+var_58]
    vmovaps xmm8, [rsp+0E8h+var_48]
    vmovaps xmm7, [rsp+0E8h+var_38]
    vmovaps xmm6, [rsp+0E8h+var_28]
    vmovaps xmm11, [rsp+0E8h+var_78]
  }
  return result;
}

/*
==============
Path_NodeSafeFrom
==============
*/
bool Path_NodeSafeFrom(const pathnode_t *node0, const pathnode_t *node1)
{
  vec3_t pos; 

  if ( !Path_NodesVisible(node0, node1) )
    return 1;
  if ( ((1 << LOBYTE(node0->constant.type)) & 0x806400FC) == 0 )
    return 0;
  pathnode_t::GetPos((pathnode_t *)node1, &pos);
  __asm { vmovss  xmm2, cs:__real@3f000000; dotLimit }
  return Path_IsNodeFacingToward(node0, &pos, *(float *)&_XMM2);
}

/*
==============
Path_NodeSafeFrom
==============
*/
bool Path_NodeSafeFrom(const pathnode_t *pNode, const tacpoint_t *pPoint)
{
  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8749, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  if ( !pPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8750, ASSERT_TYPE_ASSERT, "(pPoint)", (const char *)&queryFormat, "pPoint") )
    __debugbreak();
  if ( !TacGraph_HasVis(pPoint, pNode) )
    return 1;
  if ( ((1 << LOBYTE(pNode->constant.type)) & 0x806400FC) == 0 )
    return 0;
  __asm { vmovss  xmm2, cs:__real@3f000000; dotLimit }
  return Path_IsNodeFacingToward(pNode, &pPoint->m_Pos, *(float *)&_XMM2);
}

/*
==============
Path_NodeUnclaimedByNodeTeam
==============
*/
bool Path_NodeUnclaimedByNodeTeam(const pathnode_t *const node, const int nodeTeam)
{
  __int64 v2; 
  int v4; 
  __int64 v6; 

  v2 = nodeTeam;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9728, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v4 = 0;
  if ( (unsigned int)v2 >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
  {
    LOBYTE(v4) = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9732, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v6, v4 + 2) )
      __debugbreak();
  }
  return level.time > node->dynamic.iValidTime[v2] && level.time >= Path_NodeGetFreeTime(node, v2);
}

/*
==============
Path_NodeUnclaimedByOther
==============
*/
bool Path_NodeUnclaimedByOther(const pathnode_t *const node, const sentient_s *const claimer)
{
  __int64 NodeTeam; 
  int v6; 
  __int64 v7; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9713, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !claimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9714, ASSERT_TYPE_ASSERT, "(claimer)", (const char *)&queryFormat, "claimer") )
    __debugbreak();
  if ( Path_IsOnlyOwner(node, claimer) )
    return 1;
  NodeTeam = Path_GetNodeTeam(claimer->eTeam);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9728, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v6 = 0;
  if ( (unsigned int)NodeTeam >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
  {
    LOBYTE(v6) = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    LODWORD(v7) = NodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9732, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v7, v6 + 2) )
      __debugbreak();
  }
  return level.time > node->dynamic.iValidTime[NodeTeam] && level.time >= Path_NodeGetFreeTime(node, NodeTeam);
}

/*
==============
Path_NodeValid
==============
*/
bool Path_NodeValid(unsigned __int16 iNode)
{
  unsigned __int16 v1; 
  unsigned __int64 v3; 

  if ( iNode == 0xFFFF )
    return 0;
  v1 = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount) - LOWORD(pathData.maxDynamicSpawnedNodeCount);
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount) < 0 )
    v1 = 0;
  if ( iNode < v1 )
    return 1;
  if ( iNode >= (signed int)(g_path.actualNodeCount - pathData.zoneCount) )
    return 0;
  v3 = iNode - (unsigned __int64)v1;
  if ( v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 159, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return ((0x8000000000000000ui64 >> (v3 & 0x3F)) & g_path.spawnedNodesValid.m_data[v3 >> 6]) != 0;
}

/*
==============
Path_NodeZoneFromIndex
==============
*/
__int64 Path_NodeZoneFromIndex(const int nodeIndex)
{
  __int64 v1; 

  v1 = nodeIndex;
  if ( !pathData.pathZones )
    return 255i64;
  if ( (unsigned int)nodeIndex >= pathData.zonesBytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8510, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.zonesBytes )", "nodeIndex doesn't index pathData.zonesBytes\n\t%i not in [0, %i)", nodeIndex, pathData.zonesBytes) )
    __debugbreak();
  return pathData.pathZones[v1];
}

/*
==============
Path_NodeZoneFromNode
==============
*/
int Path_NodeZoneFromNode(const pathnode_t *node)
{
  unsigned __int16 v1; 

  if ( !pathData.pathZones )
    return 255;
  v1 = Path_ConvertNodeToIndex(node);
  return Path_NodeZoneFromIndex(v1);
}

/*
==============
Path_NodesInCylinder
==============
*/
int Path_NodesInCylinder(const vec3_t *origin, const vec3_t *enemyPos, float maxDist, float maxHeight, pathsort_s *nodes, int maxNodes, int typeFlags)
{
  return Path_NodesInCylinder(origin, enemyPos, maxDist, maxHeight, nodes, maxNodes, typeFlags, 0);
}

/*
==============
Path_NodesInCylinder
==============
*/

__int64 __fastcall Path_NodesInCylinder(const vec3_t *origin, const vec3_t *enemyPos, double maxDist, double maxHeight, pathsort_s *nodes, int maxNodes, int typeFlags, bool allowDontLinkNodes)
{
  pathsort_s *v18; 
  int nodeCount; 
  signed int v28; 
  __int64 v29; 
  pathnode_t *v31; 
  int v33; 
  __int64 v34; 
  __int64 parentIndex; 
  __int64 v90; 
  __int64 v91; 
  float outDistSq; 
  pathsort_s *v93; 
  const vec3_t *v94; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovss  xmm0, dword ptr [rcx] }
  v18 = nodes;
  v94 = origin;
  _R12 = enemyPos;
  v93 = nodes;
  __asm
  {
    vmovss  dword ptr cs:g_path.circle.origin, xmm0
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr cs:g_path.circle.origin+4, xmm1
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr cs:g_path.circle.origin+8, xmm0
  }
  if ( enemyPos )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vmovss  dword ptr cs:g_path.circle.enemyPos, xmm0
      vmovss  xmm1, dword ptr [rdx+4]
      vmovss  dword ptr cs:g_path.circle.enemyPos+4, xmm1
    }
    g_path.circle.checkEnemyPos = 1;
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr cs:g_path.circle.enemyPos, xmm0
      vmovss  dword ptr cs:g_path.circle.enemyPos+4, xmm0
    }
    g_path.circle.checkEnemyPos = 0;
  }
  nodeCount = 0;
  if ( pathData.nodeTree )
  {
    __asm
    {
      vmulss  xmm0, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmovss  cs:g_path.circle.maxDistSq, xmm0
      vmovss  cs:g_path.circle.maxHeightSq, xmm1
      vmovss  cs:g_path.circle.maxDist, xmm2
    }
    g_path.circle.typeFlags = typeFlags;
    g_path.circle.nodes = nodes;
    g_path.circle.maxNodes = maxNodes;
    g_path.circle.nodeCount = 0;
    Path_NodesInCylinder_r(pathData.nodeTree, allowDontLinkNodes);
    nodeCount = g_path.circle.nodeCount;
  }
  v28 = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  if ( v28 < 0 )
    LOWORD(v28) = 0;
  if ( (unsigned __int16)v28 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) )
  {
    v29 = nodeCount;
    _RSI = &v93[nodeCount];
    do
    {
      if ( v29 >= maxNodes )
        break;
      if ( Path_NodeValid(v28) )
      {
        v31 = &pathData.nodes[(unsigned __int16)v28];
        if ( Path_NodesInCylinder_Evaluate(v31, &outDistSq, 1, allowDontLinkNodes) )
        {
          __asm { vmovss  xmm0, [rsp+178h+outDistSq] }
          ++nodeCount;
          _RSI->node = v31;
          ++v29;
          __asm { vmovss  dword ptr [rsi+8], xmm0 }
          ++_RSI;
        }
      }
      LOWORD(v28) = v28 + 1;
    }
    while ( (unsigned __int16)v28 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
    v18 = v93;
  }
  if ( pathData.dynamicNodeGroupCount > 0 && pathData.parentIndexResolved )
  {
    v33 = 0;
    if ( pathData.dynamicNodeGroupCount > 0 )
    {
      __asm
      {
        vmovaps [rsp+178h+var_48], xmm6
        vmovaps [rsp+178h+var_58], xmm7
        vmovaps [rsp+178h+var_68], xmm8
        vmovaps [rsp+178h+var_78], xmm9
      }
      v34 = 0i64;
      __asm
      {
        vmovaps [rsp+178h+var_88], xmm10
        vmovaps [rsp+178h+var_98], xmm11
        vmovaps [rsp+178h+var_A8], xmm12
        vmovaps [rsp+178h+var_B8], xmm13
        vmovaps [rsp+178h+var_C8], xmm14
      }
      do
      {
        parentIndex = pathData.dynamicNodeGroups[v34].parentIndex;
        if ( (unsigned int)parentIndex >= 0x800 )
        {
          LODWORD(v91) = 2048;
          LODWORD(v90) = pathData.dynamicNodeGroups[v34].parentIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v90, v91) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[parentIndex].r.isInUse != g_entityIsInUse[parentIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[parentIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5972, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( pathData.dynamicNodeGroups[ iNodeGroup ].parentIndex ))", (const char *)&queryFormat, "G_IsEntityInUse( pathData.dynamicNodeGroups[ iNodeGroup ].parentIndex )") )
          __debugbreak();
        AnglesToAxis(&g_entities[pathData.dynamicNodeGroups[v34].parentIndex].r.currentAngles, &axis);
        MatrixInverse(&axis, &out);
        _RAX = v94;
        __asm
        {
          vmovss  xmm9, dword ptr [rsp+178h+out]
          vmovss  xmm10, dword ptr [rsp+178h+out+0Ch]
          vmovss  xmm11, dword ptr [rsp+178h+out+18h]
          vmovss  xmm0, dword ptr [rax]
          vsubss  xmm8, xmm0, dword ptr [rbx+130h]
          vmovss  xmm1, dword ptr [rax+4]
          vsubss  xmm4, xmm1, dword ptr [rbx+134h]
          vmovss  xmm0, dword ptr [rax+8]
          vsubss  xmm7, xmm0, dword ptr [rbx+138h]
          vmovss  xmm12, dword ptr [rsp+178h+out+4]
          vmovss  xmm13, dword ptr [rsp+178h+out+10h]
          vmovss  xmm14, dword ptr [rsp+178h+out+1Ch]
          vmulss  xmm0, xmm4, xmm10
          vmulss  xmm1, xmm8, xmm9
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm0, xmm4, xmm13
          vmulss  xmm1, xmm7, xmm11
          vaddss  xmm6, xmm2, xmm1
          vmulss  xmm3, xmm8, xmm12
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm0, xmm4, dword ptr [rsp+178h+out+14h]
          vmulss  xmm1, xmm7, xmm14
          vaddss  xmm5, xmm2, xmm1
          vmulss  xmm2, xmm8, dword ptr [rsp+178h+out+8]
          vmulss  xmm1, xmm7, dword ptr [rsp+178h+out+20h]
          vaddss  xmm3, xmm2, xmm0
          vaddss  xmm4, xmm3, xmm1
          vmovss  dword ptr cs:g_path.circle.origin+8, xmm4
          vmovss  dword ptr cs:g_path.circle.origin, xmm6
          vmovss  dword ptr cs:g_path.circle.origin+4, xmm5
        }
        if ( _R12 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r12]
            vsubss  xmm7, xmm0, dword ptr [rbx+130h]
            vmovss  xmm1, dword ptr [r12+4]
            vsubss  xmm4, xmm1, dword ptr [rbx+134h]
            vmovss  xmm0, dword ptr [r12+8]
            vsubss  xmm6, xmm0, dword ptr [rbx+138h]
            vmulss  xmm1, xmm4, xmm10
            vmulss  xmm2, xmm7, xmm9
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm11
            vaddss  xmm5, xmm3, xmm0
            vmulss  xmm1, xmm4, xmm13
            vmulss  xmm2, xmm7, xmm12
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm14
            vaddss  xmm4, xmm3, xmm0
            vmovss  dword ptr cs:g_path.circle.enemyPos+4, xmm4
            vmovss  dword ptr cs:g_path.circle.enemyPos, xmm5
          }
        }
        g_path.circle.nodeCount = 0;
        g_path.circle.nodes = &v18[nodeCount];
        g_path.circle.maxNodes = maxNodes - nodeCount;
        Path_NodesInCylinder_r(pathData.dynamicNodeGroups[v34].nodeTree, allowDontLinkNodes);
        nodeCount += g_path.circle.nodeCount;
        ++v33;
        ++v34;
      }
      while ( v33 < pathData.dynamicNodeGroupCount );
      __asm
      {
        vmovaps xmm14, [rsp+178h+var_C8]
        vmovaps xmm13, [rsp+178h+var_B8]
        vmovaps xmm12, [rsp+178h+var_A8]
        vmovaps xmm11, [rsp+178h+var_98]
        vmovaps xmm10, [rsp+178h+var_88]
        vmovaps xmm9, [rsp+178h+var_78]
        vmovaps xmm8, [rsp+178h+var_68]
        vmovaps xmm7, [rsp+178h+var_58]
        vmovaps xmm6, [rsp+178h+var_48]
      }
    }
  }
  g_path.circle.nodes = NULL;
  *(_QWORD *)&g_path.circle.maxNodes = 0i64;
  return (unsigned int)nodeCount;
}

/*
==============
Path_NodesInCylinder_Evaluate
==============
*/
bool Path_NodesInCylinder_Evaluate(pathnode_t *pathNode, float *outDistSq, bool bDoHeightCheck, bool allowDontLinkNodes)
{
  bool v27; 
  bool v28; 
  unsigned __int16 type; 
  char v43; 
  bool result; 
  vec3_t angles; 
  vec3_t forward; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm7, dword ptr [rcx+20h]
    vmovss  xmm8, dword ptr [rcx+24h]
    vmovss  xmm9, dword ptr [rcx+28h]
  }
  _RDI = outDistSq;
  _RBX = pathNode;
  if ( (unsigned __int16)(pathNode->constant.type - 29) <= 1u && pathNode->constant.target )
  {
    __asm
    {
      vsubss  xmm0, xmm8, dword ptr cs:g_path.circle.origin+4
      vsubss  xmm2, xmm7, dword ptr cs:g_path.circle.origin
      vsubss  xmm3, xmm9, dword ptr cs:g_path.circle.origin+8
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm1, xmm7, dword ptr cs:g_path.circle.origin
      vsubss  xmm0, xmm8, dword ptr cs:g_path.circle.origin+4
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
    }
  }
  __asm { vaddss  xmm6, xmm2, xmm1 }
  v27 = outDistSq == NULL;
  if ( !outDistSq )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5785, ASSERT_TYPE_ASSERT, "(outDistSq)", (const char *)&queryFormat, "outDistSq");
    v27 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vmovss  dword ptr [rdi], xmm6
    vcomiss xmm6, cs:g_path.circle.maxDistSq
  }
  if ( !v27 )
    goto LABEL_20;
  type = _RBX->constant.type;
  if ( (g_path.circle.typeFlags & (1 << type)) == 0 || !allowDontLinkNodes && (_RBX->constant.spawnflags & 1) != 0 && (g_path.circle.typeFlags & 1) == 0 )
    goto LABEL_20;
  if ( !bDoHeightCheck )
  {
    if ( g_path.circle.checkEnemyPos && type != 25 && type != 20 )
    {
      if ( ((1 << type) & 0x62700000) != 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vmovss  xmm1, dword ptr [rbx+30h]
          vmovss  dword ptr [rsp+0A8h+angles], xmm0
          vmovss  xmm0, dword ptr [rbx+34h]
          vmovss  dword ptr [rsp+0A8h+angles+8], xmm0
          vmovss  dword ptr [rsp+0A8h+angles+4], xmm1
        }
        AngleVectors(&angles, &forward, NULL, NULL);
        __asm
        {
          vmovss  xmm0, dword ptr cs:g_path.circle.enemyPos
          vmovss  xmm2, dword ptr cs:g_path.circle.enemyPos+4
          vsubss  xmm1, xmm0, xmm7
          vmulss  xmm3, xmm1, dword ptr [rsp+0A8h+forward]
          vsubss  xmm0, xmm2, xmm8
          vmulss  xmm1, xmm0, dword ptr [rsp+0A8h+forward+4]
          vaddss  xmm3, xmm3, xmm1
          vxorps  xmm2, xmm2, xmm2
          vcomiss xmm3, xmm2
        }
        if ( v43 )
          goto LABEL_20;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:g_path.circle.enemyPos+4
          vmovss  xmm2, dword ptr cs:g_path.circle.enemyPos
          vsubss  xmm1, xmm0, xmm8
          vmulss  xmm3, xmm1, dword ptr [rbx+34h]
          vsubss  xmm0, xmm2, xmm7
          vmulss  xmm1, xmm0, dword ptr [rbx+30h]
          vaddss  xmm3, xmm3, xmm1
          vxorps  xmm2, xmm2, xmm2
          vcomiss xmm3, xmm2
        }
      }
    }
    result = 1;
    goto LABEL_21;
  }
  __asm
  {
    vsubss  xmm0, xmm9, dword ptr cs:g_path.circle.origin+8
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm1, cs:g_path.circle.maxHeightSq
  }
LABEL_20:
  result = 0;
LABEL_21:
  _R11 = &v60;
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
Path_NodesInCylinder_r
==============
*/
void Path_NodesInCylinder_r(pathnode_tree_t *tree, bool allowDontLinkNodes)
{
  unsigned int axis; 
  pathnode_tree_t *v5; 
  bool v8; 
  bool v9; 
  bool v10; 
  unsigned __int16 *nodes; 
  int i; 
  pathnode_t *v20; 
  __int64 v24; 
  __int64 v25; 
  float outDistSq; 

  axis = tree->axis;
  v5 = tree;
  if ( tree->axis >= 0 )
  {
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    _RSI = &g_path.circle;
    while ( 1 )
    {
      v8 = axis < 3;
      v9 = axis <= 3;
      if ( axis >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = axis;
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25);
        v8 = 0;
        v9 = !v10;
        if ( v10 )
          __debugbreak();
      }
      __asm { vmovss  xmm2, cs:g_path.circle.maxDist }
      _RAX = (int)axis;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rax*4]
        vsubss  xmm1, xmm0, dword ptr [rbx+4]
        vcomiss xmm1, xmm2
      }
      if ( !v9 )
        goto LABEL_10;
      __asm
      {
        vxorps  xmm0, xmm2, xmm6
        vcomiss xmm1, xmm0
      }
      if ( !v8 )
        break;
      v5 = v5->u.child[0];
LABEL_11:
      axis = v5->axis;
      if ( v5->axis < 0 )
      {
        __asm { vmovaps xmm6, [rsp+68h+var_28] }
        goto LABEL_13;
      }
    }
    Path_NodesInCylinder_r(v5->u.child[0], allowDontLinkNodes);
LABEL_10:
    v5 = v5->u.child[1];
    goto LABEL_11;
  }
LABEL_13:
  __asm
  {
    vmovss  xmm0, cs:g_path.circle.maxHeightSq
    vcomiss xmm0, cs:__real@5368d4a5
  }
  nodes = v5->u.s.nodes;
  for ( i = 0; i < v5->u.s.nodeCount; ++nodes )
  {
    v20 = &pathData.nodes[*nodes];
    if ( Path_NodesInCylinder_Evaluate(v20, &outDistSq, 0, allowDontLinkNodes) )
    {
      if ( g_path.circle.nodeCount == g_path.circle.maxNodes )
        return;
      __asm { vmovss  xmm0, [rsp+68h+outDistSq] }
      g_path.circle.nodes[g_path.circle.nodeCount].node = v20;
      _RAX = g_path.circle.nodes;
      _RCX = 2i64 * g_path.circle.nodeCount;
      __asm { vmovss  dword ptr [rax+rcx*8+8], xmm0 }
      ++g_path.circle.nodeCount;
    }
    ++i;
  }
}

/*
==============
Path_NodesInRadius
==============
*/

int __fastcall Path_NodesInRadius(const vec3_t *origin, double maxDist, pathsort_s *nodes, int maxNodes, int typeFlags)
{
  __asm
  {
    vmovss  xmm3, cs:__real@4e6e6b28; maxHeight
    vmovaps xmm2, xmm1; maxDist
  }
  return Path_NodesInCylinder(origin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, nodes, maxNodes, typeFlags, 0);
}

/*
==============
Path_NodesInRadius
==============
*/

int __fastcall Path_NodesInRadius(const vec3_t *origin, double maxDist, pathsort_s *nodes, int maxNodes, int typeFlags, bool allowDontLinkNodes)
{
  __asm
  {
    vmovss  xmm3, cs:__real@4e6e6b28; maxHeight
    vmovaps xmm2, xmm1; maxDist
  }
  return Path_NodesInCylinder(origin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, nodes, maxNodes, typeFlags, allowDontLinkNodes);
}

/*
==============
Path_NodesVisible
==============
*/
_BOOL8 Path_NodesVisible(const pathnode_t *node0, const pathnode_t *node1)
{
  unsigned int v4; 
  unsigned __int16 v5; 
  __int64 v7; 
  __int64 v8; 

  if ( !node0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8639, ASSERT_TYPE_ASSERT, "(node0)", (const char *)&queryFormat, "node0") )
    __debugbreak();
  if ( !node1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8640, ASSERT_TYPE_ASSERT, "(node1)", (const char *)&queryFormat, "node1") )
    __debugbreak();
  v4 = Path_ConvertNodeToIndex(node0);
  v5 = Path_ConvertNodeToIndex(node1);
  if ( v4 >= g_path.actualNodeCount - pathData.zoneCount )
  {
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8645, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex0 ) < (unsigned)( Path_NodeCount() )", "nodeIndex0 doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v7, g_path.actualNodeCount - pathData.zoneCount) )
      __debugbreak();
  }
  if ( v5 >= g_path.actualNodeCount - pathData.zoneCount )
  {
    LODWORD(v8) = g_path.actualNodeCount - pathData.zoneCount;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8646, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex1 ) < (unsigned)( Path_NodeCount() )", "nodeIndex1 doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return Path_NodeValid(v4) && Path_NodeValid(v5) && TacGraph_Exists() && TacVisGraph_HasVis(node0, node1);
}

/*
==============
Path_NodesVisibleAreaNoPeek
==============
*/
__int64 Path_NodesVisibleAreaNoPeek(const pathnode_t *pNodeArea, const pathnode_t *pNodeEye)
{
  int v4; 
  unsigned __int16 nodeNum; 
  const pathnode_t *v6; 
  __int64 v8; 
  __int64 v9; 

  if ( !pNodeArea && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8667, ASSERT_TYPE_ASSERT, "( pNodeArea )", (const char *)&queryFormat, "pNodeArea") )
    __debugbreak();
  if ( !pNodeEye && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8668, ASSERT_TYPE_ASSERT, "( pNodeEye )", (const char *)&queryFormat, "pNodeEye") )
    __debugbreak();
  if ( !Path_NodesVisibleNoPeek(pNodeArea, pNodeEye) )
  {
    v4 = 0;
    if ( !pNodeArea->constant.totalLinkCount )
      return 0i64;
    while ( 1 )
    {
      nodeNum = pNodeArea->constant.Links[v4].nodeNum;
      if ( nodeNum == 0xFFFF )
      {
        v6 = NULL;
      }
      else
      {
        if ( nodeNum >= g_path.actualNodeCount )
        {
          LODWORD(v9) = g_path.actualNodeCount;
          LODWORD(v8) = nodeNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        v6 = &pathData.nodes[nodeNum];
      }
      if ( Path_NodesVisibleNoPeek(v6, pNodeEye) )
        break;
      if ( ++v4 >= (unsigned int)pNodeArea->constant.totalLinkCount )
        return 0i64;
    }
  }
  return 1i64;
}

/*
==============
Path_NodesVisibleNoPeek
==============
*/
int Path_NodesVisibleNoPeek(const pathnode_t *node0, const pathnode_t *node1)
{
  unsigned __int8 *pathNoPeekVis; 
  __int64 v5; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  int v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 

  if ( !node0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8690, ASSERT_TYPE_ASSERT, "( node0 )", (const char *)&queryFormat, "node0") )
    __debugbreak();
  if ( !node1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8691, ASSERT_TYPE_ASSERT, "( node1 )", (const char *)&queryFormat, "node1") )
    __debugbreak();
  if ( !pathData.pathNoPeekVis )
    return Path_NodesVisible(node0, node1);
  if ( pathData.noPeekVisBytes < (signed int)(2 * pathData.nodeCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8695, ASSERT_TYPE_ASSERT, "( pathData.noPeekVisBytes >= static_cast<int>( pathData.nodeCount * sizeof( pathnode_id ) ) )", (const char *)&queryFormat, "pathData.noPeekVisBytes >= static_cast<int>( pathData.nodeCount * sizeof( pathnode_id ) )") )
    __debugbreak();
  pathNoPeekVis = pathData.pathNoPeekVis;
  v5 = Path_ConvertNodeToIndex(node0);
  v6 = Path_ConvertNodeToIndex(node1);
  v7 = *(_WORD *)&pathNoPeekVis[2 * v5];
  v8 = v6;
  v9 = *(_WORD *)&pathNoPeekVis[2 * v6];
  v10 = Path_NoPeekVisSizeTable();
  v11 = Path_NoPeekVisSizeStride();
  if ( v7 == 0xFFFF )
  {
    if ( v9 == 0xFFFF )
      return Path_NodesVisible(node0, node1);
    v8 = v5;
    v12 = &pathData.pathNoPeekVis[v11 * v9];
  }
  else
  {
    v12 = &pathData.pathNoPeekVis[v11 * v7];
  }
  v13 = &v12[v10];
  if ( v8 != 0xFFFF && v13 )
    return ((unsigned __int8)(1 << (v8 & 7)) & v13[(unsigned __int64)v8 >> 3]) != 0;
  return Path_NodesVisible(node0, node1);
}

/*
==============
Path_NonNegativeFloat
==============
*/
void Path_NonNegativeFloat(scrContext_t *scrContext, pathnode_t *node, int offset)
{
  __int64 v6; 
  char v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 

  _RSI = node;
  __asm { vmovaps [rsp+48h+var_28], xmm6 }
  v6 = offset;
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmovaps xmm6, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( _RSI->constant.targetname )
    {
      v11 = SL_ConvertToString(*fields_2[v6].name);
      v12 = j_va("pathnode property '%s' must be non-negative\n", v11);
      Scr_Error(COM_ERR_2466, scrContext, v12);
    }
    else
    {
      v13 = SL_ConvertToString((scr_string_t)0);
      v14 = SL_ConvertToString(*fields_2[v6].name);
      v15 = j_va("pathnode property '%s' must be non-negative for pathnode '%s'\n", v14, v13);
      Scr_Error(COM_ERR_2467, scrContext, v15);
    }
  }
  _RAX = fields_2[v6].ofs;
  __asm
  {
    vmovss  dword ptr [rsi+rax], xmm6
    vmovaps xmm6, [rsp+48h+var_28]
  }
}

/*
==============
Path_ParentIndexToParentName
==============
*/
void Path_ParentIndexToParentName(void)
{
  signed int v0; 
  unsigned __int16 v1; 
  signed int v2; 
  unsigned __int16 v3; 
  unsigned __int64 v4; 
  pathnode_t *v5; 
  unsigned __int16 index; 

  if ( pathData.parentIndexResolved )
  {
    v0 = g_path.actualNodeCount - pathData.zoneCount;
    v1 = 0;
    pathData.parentIndexResolved = 0;
    if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
    {
      v2 = 0;
      do
      {
        if ( v1 != 0xFFFF )
        {
          v3 = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.maxDynamicSpawnedNodeCount) - LOWORD(pathData.zoneCount);
          if ( (signed int)(g_path.actualNodeCount - pathData.maxDynamicSpawnedNodeCount - pathData.zoneCount) < 0 )
            v3 = 0;
          if ( v1 < v3 )
            goto LABEL_13;
          if ( v2 < v0 )
          {
            v4 = (unsigned int)v2 - (unsigned __int64)v3;
            if ( v4 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 159, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
              __debugbreak();
            if ( ((0x8000000000000000ui64 >> (v4 & 0x3F)) & g_path.spawnedNodesValid.m_data[v4 >> 6]) != 0 )
            {
LABEL_13:
              v5 = &pathData.nodes[v1];
              index = v5->constant.parent.index;
              if ( index )
              {
                if ( index >= 0x7FEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5608, ASSERT_TYPE_ASSERT, "(node->constant.parent.index < ENTITYNUM_ORDINARY_END)", (const char *)&queryFormat, "node->constant.parent.index < ENTITYNUM_ORDINARY_END") )
                  __debugbreak();
                v5->constant.parent.name = g_entities[v5->constant.parent.index].targetname;
              }
            }
          }
        }
        v0 = g_path.actualNodeCount - pathData.zoneCount;
        v2 = ++v1;
      }
      while ( v1 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
    }
  }
}

/*
==============
Path_ParentIndexToParentNameUsingMap
==============
*/
void Path_ParentIndexToParentNameUsingMap(void)
{
  unsigned __int16 v0; 
  pathnode_t *v1; 
  unsigned __int16 index; 
  int v3; 
  int v4; 
  __int64 v5; 

  if ( !pathData.parentIndexResolved && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5621, ASSERT_TYPE_ASSERT, "(pathData.parentIndexResolved)", (const char *)&queryFormat, "pathData.parentIndexResolved") )
    __debugbreak();
  if ( !s_bNeedToMapParentIndexToParentName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5622, ASSERT_TYPE_ASSERT, "(s_bNeedToMapParentIndexToParentName)", (const char *)&queryFormat, "s_bNeedToMapParentIndexToParentName") )
    __debugbreak();
  if ( s_numPathParentMaps <= 0 )
  {
    s_bNeedToMapParentIndexToParentName = 0;
  }
  else
  {
    v0 = 0;
    if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount) <= 0 )
    {
      s_bNeedToMapParentIndexToParentName = 0;
    }
    else
    {
      do
      {
        if ( Path_NodeValid(v0) )
        {
          v1 = &pathData.nodes[v0];
          index = v1->constant.parent.index;
          if ( index )
          {
            v3 = s_numPathParentMaps;
            v4 = 0;
            v5 = 0i64;
            if ( s_numPathParentMaps > 0 )
            {
              while ( s_pathParentMapping[v5].parentIndex != index )
              {
                ++v4;
                ++v5;
                if ( v4 >= s_numPathParentMaps )
                  goto LABEL_16;
              }
              v1->constant.parent.name = s_pathParentMapping[v5].parentName;
              v3 = s_numPathParentMaps;
            }
LABEL_16:
            if ( v4 == v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5643, ASSERT_TYPE_ASSERT, "(iMap != s_numPathParentMaps)", (const char *)&queryFormat, "iMap != s_numPathParentMaps") )
              __debugbreak();
          }
        }
        ++v0;
      }
      while ( v0 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
      s_bNeedToMapParentIndexToParentName = 0;
    }
  }
}

/*
==============
Path_ParentNameToParentIndex
==============
*/
void Path_ParentNameToParentIndex()
{
  signed int v0; 
  int v1; 
  unsigned __int16 v2; 
  int v3; 
  pathnode_t *v4; 
  pathnode_t *v5; 
  unsigned __int16 v6; 
  const char *v7; 
  __int64 v8; 
  PathDynamicNodeGroup *dynamicNodeGroups; 
  pathnode_tree_t *i; 

  if ( !pathData.parentIndexResolved )
  {
    v0 = g_path.actualNodeCount - pathData.zoneCount;
    v1 = 0;
    v2 = 0;
    pathData.parentIndexResolved = 1;
    if ( pathData.version >= 0x14u )
    {
      if ( v0 > 0 )
      {
        do
        {
          v5 = &pathData.nodes[v2];
          if ( v5->constant.parent.index )
          {
            v6 = 0;
            if ( level.num_entities <= 0 )
            {
LABEL_15:
              v7 = SL_ConvertToString(v5->constant.parent.name);
              Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143FA5038, 458i64, v7);
            }
            else
            {
              while ( g_entities[v6].targetname != v5->constant.parent.name )
              {
                if ( ++v6 >= level.num_entities )
                  goto LABEL_15;
              }
              v5->constant.parent.index = v6;
            }
          }
          ++v2;
        }
        while ( v2 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
      }
      if ( pathData.dynamicNodeGroupCount > 0 )
      {
        v8 = 0i64;
        do
        {
          dynamicNodeGroups = pathData.dynamicNodeGroups;
          for ( i = pathData.dynamicNodeGroups[v8].nodeTree; i->axis >= 0; i = i->u.child[0] )
            ;
          if ( !i->u.s.nodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6322, ASSERT_TYPE_ASSERT, "(tree->u.s.nodeCount)", (const char *)&queryFormat, "tree->u.s.nodeCount") )
            __debugbreak();
          ++v1;
          dynamicNodeGroups[v8++].parentIndex = pathData.nodes[*i->u.s.nodes].constant.parent.index;
        }
        while ( v1 < pathData.dynamicNodeGroupCount );
      }
    }
    else
    {
      v3 = 0;
      if ( v0 > 0 )
      {
        do
        {
          if ( Path_NodeValid(v2) )
          {
            v4 = &pathData.nodes[v2];
            if ( v4->constant.parent.index )
            {
              v3 = 1;
              v4->constant.parent.index = 0;
            }
          }
          ++v2;
        }
        while ( v2 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
        if ( v3 )
          g_platformWarning = 1;
      }
    }
  }
}

/*
==============
Path_PostSpawnInitPaths
==============
*/
void Path_PostSpawnInitPaths(bool snapNodesToMesh, bool bSaveLoad)
{
  Nav_PostSpawnInit(snapNodesToMesh, bSaveLoad);
  Nav_InitStaticNavigatorData();
}

/*
==============
Path_PostStep
==============
*/

void __fastcall Path_PostStep(double _XMM0_8)
{
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm0, xmm0, cs:__real@3a83126f; seconds
  }
  Nav_SystemSimulate(*(float *)&_XMM0);
}

/*
==============
Path_PreShutdown
==============
*/
void Path_PreShutdown(void)
{
  int v0; 
  __int64 v1; 
  PathDynamicNodeGroup *v2; 
  unsigned __int16 parentIndex; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  gentity_s *v7; 
  int v8; 
  char v9; 
  __int64 v10; 
  __int64 v11; 

  Nav_PreShutdown();
  if ( pathData.parentIndexResolved )
  {
    if ( pathData.dynamicNodeGroupCount > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5665, ASSERT_TYPE_ASSERT, "(pathData.dynamicNodeGroupCount <= MAX_DYNAMIC_NODE_GROUPS)", (const char *)&queryFormat, "pathData.dynamicNodeGroupCount <= MAX_DYNAMIC_NODE_GROUPS") )
      __debugbreak();
    v0 = 0;
    s_numPathParentMaps = 0;
    if ( pathData.dynamicNodeGroupCount > 0 )
    {
      v1 = 0i64;
      do
      {
        v2 = &pathData.dynamicNodeGroups[v1];
        parentIndex = pathData.dynamicNodeGroups[v1].parentIndex;
        if ( parentIndex >= 0x800u )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = parentIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5675, ASSERT_TYPE_ASSERT, "(unsigned)( pGroup->parentIndex ) < (unsigned)( ( 2048 ) )", "pGroup->parentIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        v4 = v2->parentIndex;
        if ( (unsigned int)v4 >= 0x800 )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = v2->parentIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5676, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( pGroup->parentIndex ))", (const char *)&queryFormat, "G_IsEntityInUse( pGroup->parentIndex )") )
          __debugbreak();
        v5 = s_numPathParentMaps;
        v6 = v2->parentIndex;
        v7 = g_entities;
        s_pathParentMapping[s_numPathParentMaps].parentIndex = v6;
        s_pathParentMapping[v5].parentName = v7[v6].targetname;
        v8 = v5 + 1;
        s_numPathParentMaps = v8;
        if ( v8 >= 32 )
          break;
        ++v0;
        ++v1;
      }
      while ( v0 < pathData.dynamicNodeGroupCount );
      v9 = s_bNeedToMapParentIndexToParentName;
      if ( v8 > 0 )
        v9 = 1;
      s_bNeedToMapParentIndexToParentName = v9;
    }
  }
}

/*
==============
Path_PreSpawnInitPaths
==============
*/
void Path_PreSpawnInitPaths(void)
{
  __int64 i; 
  __int64 v1; 
  pathnode_t *v2; 

  for ( i = 0i64; (unsigned int)i < pathData.nodeCount; v2->dynamic.turretEntNumber = -1 )
  {
    v1 = i;
    i = (unsigned int)(i + 1);
    v2 = &pathData.nodes[v1];
    *(_QWORD *)&v2->dynamic.pOwners[0].number = 0i64;
    *(_QWORD *)v2->dynamic.iFreeTime = 0i64;
    *(_QWORD *)v2->dynamic.iValidTime = 0i64;
    *(_QWORD *)&v2->dynamic.iValidTime[2] = 0i64;
    *(_QWORD *)&v2->dynamic.bInactive = 0i64;
    *(_QWORD *)&v2->dynamic.bots.recentUseProxTimes[1] = 0i64;
    v2->dynamic.actors.inPlayerLOSTime = 0;
    *(_QWORD *)&v2->transient.iSearchFrame = 0i64;
    v2->transient.pNextOpen = NULL;
    v2->transient.pPrevOpen = NULL;
    v2->transient.pParent = NULL;
    *(_QWORD *)&v2->transient.fCost = 0i64;
    *(_QWORD *)&v2->transient.nodeCost = 0i64;
  }
  Path_InitLinkCounts();
  g_path.qbUsingJumpNodes = 0;
  g_path.spawnedNodesValid.m_data[0] = 0i64;
}

/*
==============
Path_PreStep
==============
*/

void Path_PreStep(void)
{
  Nav_PreUpdate();
}

/*
==============
Path_PrintAllNodeErrors
==============
*/
void Path_PrintAllNodeErrors(void)
{
  __int64 i; 
  pathnode_t *v1; 

  Path_ParentNameToParentIndex();
  for ( i = 0i64; (unsigned int)i < pathData.nodeCount; i = (unsigned int)(i + 1) )
  {
    v1 = &pathData.nodes[i];
    if ( v1->constant.error )
    {
      PrintPathNodeError(&pathData.nodes[i]);
      if ( v1->constant.error == PNERR_NOPEEKOUT )
        Path_DrawDebugPeekOuts(v1);
    }
  }
}

/*
==============
Path_RelinquishNode
==============
*/
void Path_RelinquishNode(sentient_s *claimer, int timeUntilRelinquished)
{
  pathnode_t *pClaimedNode; 
  int NodeTeam; 
  SentientHandle *v6; 
  int v7; 
  int i; 
  int v9; 
  const char *GameType; 
  int v11; 
  gentity_s *ent; 
  __int64 v13; 
  int v14; 
  unsigned __int16 *wOverlapNode; 
  pathnode_t *v16; 
  bool v17; 
  const char *v18; 
  int v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  const char *v23; 
  int v24; 
  int v25; 
  const char *v26; 
  int v27; 
  unsigned __int16 number; 
  SentientHandle *v29; 
  gentity_s *v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  bool v33; 
  const char *v34; 
  int v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  const char *v39; 
  int v40; 
  int v41; 
  const char *v42; 
  int v43; 
  __int64 v44; 
  __int64 v45; 
  AIWrapper v46; 

  pClaimedNode = claimer->pClaimedNode;
  if ( !pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10018, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  NodeTeam = Path_GetNodeTeam(claimer->eTeam);
  v6 = Path_NodeOwnerSentHandle(pClaimedNode, NodeTeam);
  v7 = 0;
  if ( Path_NodeMaxNumTeamOwners(pClaimedNode) > 1 && (!SentientHandle::isDefined(v6) || SentientHandle::sentient(v6) != claimer) )
  {
    for ( i = 0; ; ++i )
    {
      if ( !pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        GameType = SV_GameMP_GetGameType();
        v11 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
        if ( !v11 )
        {
          v11 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
          if ( !v11 )
            v11 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
        }
        v9 = (v11 != 0) + 1;
      }
      else
      {
        v9 = 1;
      }
      if ( i >= v9 )
        break;
      if ( i != NodeTeam )
      {
        v6 = Path_NodeOwnerSentHandle(pClaimedNode, i);
        if ( SentientHandle::sentient(v6) == claimer )
        {
          NodeTeam = i;
          break;
        }
      }
    }
  }
  if ( !SentientHandle::isDefined(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10046, ASSERT_TYPE_ASSERT, "(nodeOwnerSentHandle->isDefined())", (const char *)&queryFormat, "nodeOwnerSentHandle->isDefined()") )
    __debugbreak();
  if ( SentientHandle::sentient(v6) != claimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10047, ASSERT_TYPE_ASSERT, "(nodeOwnerSentHandle->sentient() == claimer)", (const char *)&queryFormat, "nodeOwnerSentHandle->sentient() == claimer") )
    __debugbreak();
  Sentient_SetPrevClaimNode(claimer);
  ent = claimer->ent;
  claimer->pClaimedNode = NULL;
  GScr_Notify(ent, scr_const.node_relinquished, 0);
  AIWrapper::AIWrapper(&v46, claimer->ent);
  if ( v46.m_pAI )
    claimer->bNearestNodeValid = 0;
  if ( timeUntilRelinquished > 0 )
    v7 = level.time + timeUntilRelinquished;
  Path_NodeSetFreeTime(pClaimedNode, NodeTeam, v7);
  SentientHandle::setSentient(v6, NULL);
  v13 = NodeTeam;
  v14 = 0;
  wOverlapNode = pClaimedNode->constant.wOverlapNode;
  do
  {
    if ( *wOverlapNode == 0xFFFF )
      break;
    v16 = &pathData.nodes[*wOverlapNode];
    if ( BG_BotSystemEnabled() )
    {
      v18 = SV_GameMP_GetGameType();
      v19 = *(unsigned __int8 *)v18 - (unsigned __int8)aBr_2[0];
      if ( !v19 )
      {
        v19 = *((unsigned __int8 *)v18 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v19 )
          v19 = *((unsigned __int8 *)v18 + 2) - (unsigned __int8)aBr_2[2];
      }
      v17 = v19 == 0;
    }
    else
    {
      v17 = 1;
    }
    v20 = v13;
    v21 = NodeTeam;
    if ( v17 )
      v20 = 0i64;
    if ( v17 )
      v21 = 0;
    if ( !v16 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 366, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v23 = SV_GameMP_GetGameType();
      v24 = *(unsigned __int8 *)v23 - (unsigned __int8)aBr_2[0];
      if ( !v24 )
      {
        v24 = *((unsigned __int8 *)v23 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v24 )
          v24 = *((unsigned __int8 *)v23 + 2) - (unsigned __int8)aBr_2[2];
      }
      v22 = (v24 != 0) + 1;
    }
    else
    {
      v22 = 1;
    }
    if ( v21 >= v22 )
    {
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
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
      LODWORD(v45) = v25;
      LODWORD(v44) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 367, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v44, v45) )
        __debugbreak();
    }
    number = v16->dynamic.pOwners[v20].number;
    v29 = &v16->dynamic.pOwners[v20];
    if ( number )
    {
      if ( !level.sentients[number - 1].ent )
      {
        LODWORD(v45) = number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 136, ASSERT_TYPE_ASSERT, "( ( !number || level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( !number || level.sentients[number - 1].ent )", v45) )
          __debugbreak();
      }
      if ( v29->number )
      {
        v30 = level.sentients[v29->number - 1].ent;
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v31 = (__int64)((unsigned __int128)(((char *)v30 - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
        v32 = (v31 >> 63) + v31;
        if ( (unsigned int)v32 >= 0x800 )
        {
          LODWORD(v45) = 2048;
          LODWORD(v44) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        v32 = (__int16)v32;
        if ( (unsigned int)(__int16)v32 >= 0x800 )
        {
          LODWORD(v45) = 2048;
          LODWORD(v44) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v32].r.isInUse != g_entityIsInUse[v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v32] )
        {
          LODWORD(v45) = v29->number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 137, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v45) )
            __debugbreak();
        }
        if ( v29->number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10079, ASSERT_TYPE_ASSERT, "(!overlapNodeOwnerSentHandle->isDefined())", (const char *)&queryFormat, "!overlapNodeOwnerSentHandle->isDefined()") )
          __debugbreak();
      }
    }
    Path_AddToNumClaimedOverlapNodes(v16, NodeTeam, -1);
    if ( BG_BotSystemEnabled() )
    {
      v34 = SV_GameMP_GetGameType();
      v35 = *(unsigned __int8 *)v34 - (unsigned __int8)aBr_2[0];
      if ( !v35 )
      {
        v35 = *((unsigned __int8 *)v34 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v35 )
          v35 = *((unsigned __int8 *)v34 + 2) - (unsigned __int8)aBr_2[2];
      }
      v33 = v35 == 0;
    }
    else
    {
      v33 = 1;
    }
    v36 = NodeTeam;
    v37 = NodeTeam;
    if ( v33 )
      v37 = 0;
    if ( v33 )
      v36 = 0i64;
    if ( !v16 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 402, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v39 = SV_GameMP_GetGameType();
      v40 = *(unsigned __int8 *)v39 - (unsigned __int8)aBr_2[0];
      if ( !v40 )
      {
        v40 = *((unsigned __int8 *)v39 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v40 )
          v40 = *((unsigned __int8 *)v39 + 2) - (unsigned __int8)aBr_2[2];
      }
      v38 = (v40 != 0) + 1;
    }
    else
    {
      v38 = 1;
    }
    if ( v37 >= v38 )
    {
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( BG_BotSystemEnabled() )
      {
        v42 = SV_GameMP_GetGameType();
        v43 = *(unsigned __int8 *)v42 - (unsigned __int8)aBr_2[0];
        if ( !v43 )
        {
          v43 = *((unsigned __int8 *)v42 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v43 )
            v43 = *((unsigned __int8 *)v42 + 2) - (unsigned __int8)aBr_2[2];
        }
        v41 = (v43 != 0) + 1;
      }
      else
      {
        v41 = 1;
      }
      LODWORD(v45) = v41;
      LODWORD(v44) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 403, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v44, v45) )
        __debugbreak();
    }
    if ( !v16->dynamic.wOverlapCount[v36] )
    {
      SentientHandle::setSentient(v29, NULL);
      Path_NodeSetFreeTime(v16, NodeTeam, v7);
    }
    ++v14;
    v13 = NodeTeam;
    ++wOverlapNode;
  }
  while ( v14 < 2 );
}

/*
==============
Path_RelinquishNodeNow
==============
*/
void Path_RelinquishNodeNow(sentient_s *claimer)
{
  Path_RelinquishNode(claimer, 0);
}

/*
==============
Path_RelinquishNodeSoon
==============
*/
void Path_RelinquishNodeSoon(sentient_s *claimer)
{
  Path_RelinquishNode(claimer, 5000);
}

/*
==============
Path_Reset
==============
*/
void Path_Reset(void)
{
  memset_0(&g_path, 0, sizeof(g_path));
  debugPath = NULL;
  Path_InitBadPlaces();
  s_numPathParentMaps = 0;
  s_bNeedToMapParentIndexToParentName = 0;
}

/*
==============
Path_ResetAllNodeTransientLinkIndex
==============
*/
void Path_ResetAllNodeTransientLinkIndex(void)
{
  __int64 i; 
  __int64 v1; 

  for ( i = 0i64; (unsigned int)i < g_path.actualNodeCount; pathData.nodes[v1].transient.linkIndex = 0xFFFF )
  {
    v1 = i;
    i = (unsigned int)(i + 1);
  }
}

/*
==============
Path_ResolveParentIndices
==============
*/

void Path_ResolveParentIndices(void)
{
  Path_ParentNameToParentIndex();
}

/*
==============
Path_RevokeClaim
==============
*/
void Path_RevokeClaim(pathnode_t *node, sentient_s *pNewClaimer)
{
  int NodeTeam; 
  SentientHandle *v5; 
  sentient_s *v6; 
  sentient_s *v7; 
  AIWrapper v8; 

  NodeTeam = Path_GetNodeTeam(pNewClaimer->eTeam);
  v5 = (SentientHandle *)Path_NodeOwnerSentHandleConst(node, NodeTeam);
  if ( SentientHandle::isDefined(v5) )
  {
    if ( !BG_ActorOrAgentSystemEnabled() || !SentientHandle::sentient(v5)->ent || (v6 = SentientHandle::sentient(v5), AIWrapper::AIWrapper(&v8, v6->ent), v8.m_pAI) || SV_BotIsBotEnt(pNewClaimer->ent) )
    {
      if ( SentientHandle::sentient(v5) != pNewClaimer && Path_NodeIsClaimed(node, NodeTeam) )
      {
        v7 = SentientHandle::sentient(v5);
        Sentient_NodeClaimRevoked(v7, node);
        if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 444, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( Path_NodeGetFreeTime(node, NodeTeam) == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9928, ASSERT_TYPE_ASSERT, "(!Path_NodeIsClaimed( node, nodeTeam ))", (const char *)&queryFormat, "!Path_NodeIsClaimed( node, nodeTeam )") )
          __debugbreak();
      }
    }
  }
}

/*
==============
Path_SaveIndex
==============
*/
unsigned __int16 Path_SaveIndex(const pathnode_t *node)
{
  if ( !node )
    return -1;
  if ( (node < pathData.nodes || node >= &pathData.nodes[(unsigned __int64)g_path.actualNodeCount]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10292, ASSERT_TYPE_ASSERT, "(node == nullptr || (node >= pathData.nodes && node < &pathData.nodes[g_path.actualNodeCount]))", (const char *)&queryFormat, "node == nullptr || (node >= pathData.nodes && node < &pathData.nodes[g_path.actualNodeCount])") )
    __debugbreak();
  return Path_ConvertNodeToIndex(node);
}

/*
==============
Path_SentientNearNode
==============
*/
_BOOL8 Path_SentientNearNode(const sentient_s *sentient, const pathnode_t *node)
{
  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9514, ASSERT_TYPE_ASSERT, "(sentient)", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9515, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  return AI_PointNearNode(sentient->ai, &sentient->ent->r.currentOrigin, node);
}

/*
==============
Path_SetNodeTypeError
==============
*/
void Path_SetNodeTypeError(pathnode_t *node)
{
  if ( node )
  {
    node->constant.type = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1356, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    MEMORY[0x52] = 0;
  }
}

/*
==============
Path_Shutdown
==============
*/
void Path_Shutdown(bool bDoExtraCleanup)
{
  unsigned __int16 v2; 
  unsigned __int16 i; 
  unsigned __int16 j; 
  pathnode_t *v5; 
  unsigned __int16 index; 
  int v7; 
  int v8; 
  __int64 v9; 
  pathnode_t *k; 
  scr_string_t target; 
  unsigned int User; 
  scr_string_t targetname; 
  unsigned int v14; 
  scr_string_t script_linkName; 
  unsigned int v16; 
  scr_string_t script_noteworthy; 
  unsigned int v18; 
  scr_string_t name; 
  unsigned int v20; 
  pathnode_t *m; 
  int n; 
  int v23; 
  const char *GameType; 
  int v25; 
  bool v26; 
  const char *v27; 
  int v28; 
  unsigned int v29; 
  unsigned int v30; 
  const char *v31; 
  int v32; 
  int v33; 
  const char *v34; 
  int v35; 
  pathnode_t *ii; 
  __int64 v37; 
  __int64 v38; 

  Path_ShutdownBadPlaces();
  v2 = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount) - LOWORD(pathData.maxDynamicSpawnedNodeCount);
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount) < 0 )
    v2 = 0;
  for ( i = v2 + LOWORD(pathData.maxDynamicSpawnedNodeCount); v2 < i; ++v2 )
  {
    if ( Path_NodeValid(v2) )
      Path_DespawnNode(v2);
  }
  g_path.spawnedNodesValid.m_data[0] = 0i64;
  if ( s_bNeedToMapParentIndexToParentName )
  {
    if ( !pathData.parentIndexResolved && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5621, ASSERT_TYPE_ASSERT, "(pathData.parentIndexResolved)", (const char *)&queryFormat, "pathData.parentIndexResolved") )
      __debugbreak();
    if ( !s_bNeedToMapParentIndexToParentName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5622, ASSERT_TYPE_ASSERT, "(s_bNeedToMapParentIndexToParentName)", (const char *)&queryFormat, "s_bNeedToMapParentIndexToParentName") )
      __debugbreak();
    if ( s_numPathParentMaps > 0 )
    {
      for ( j = 0; j < (signed int)(g_path.actualNodeCount - pathData.zoneCount); ++j )
      {
        if ( Path_NodeValid(j) )
        {
          v5 = &pathData.nodes[j];
          index = v5->constant.parent.index;
          if ( index )
          {
            v7 = s_numPathParentMaps;
            v8 = 0;
            v9 = 0i64;
            if ( s_numPathParentMaps > 0 )
            {
              while ( s_pathParentMapping[v9].parentIndex != index )
              {
                ++v8;
                ++v9;
                if ( v8 >= s_numPathParentMaps )
                  goto LABEL_23;
              }
              v5->constant.parent.name = s_pathParentMapping[v9].parentName;
              v7 = s_numPathParentMaps;
            }
LABEL_23:
            if ( v8 == v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5643, ASSERT_TYPE_ASSERT, "(iMap != s_numPathParentMaps)", (const char *)&queryFormat, "iMap != s_numPathParentMaps") )
              __debugbreak();
          }
        }
      }
    }
    s_bNeedToMapParentIndexToParentName = 0;
    pathData.parentIndexResolved = 0;
  }
  for ( k = pathData.nodes; k != &pathData.nodes[g_path.actualNodeCount]; ++k )
  {
    target = k->constant.target;
    if ( target )
    {
      User = j_SL_GetUser(target);
      if ( !User || (User & 1) != 0 )
        k->constant.target = 0;
    }
    targetname = k->constant.targetname;
    if ( targetname )
    {
      v14 = j_SL_GetUser(targetname);
      if ( !v14 || (v14 & 1) != 0 )
        k->constant.targetname = 0;
    }
    script_linkName = k->constant.script_linkName;
    if ( script_linkName )
    {
      v16 = j_SL_GetUser(script_linkName);
      if ( !v16 || (v16 & 1) != 0 )
        k->constant.script_linkName = 0;
    }
    script_noteworthy = k->constant.script_noteworthy;
    if ( script_noteworthy )
    {
      v18 = j_SL_GetUser(script_noteworthy);
      if ( !v18 || (v18 & 1) != 0 )
        k->constant.script_noteworthy = 0;
    }
    name = k->constant.parent.name;
    if ( name )
    {
      v20 = j_SL_GetUser(name);
      if ( !v20 || (v20 & 1) != 0 )
        k->constant.parent.name = 0;
    }
  }
  *(_QWORD *)&g_path.extraNodes = 0i64;
  if ( bDoExtraCleanup )
  {
    for ( m = pathData.nodes; m != &pathData.nodes[g_path.actualNodeCount]; ++m )
    {
      for ( n = 0; ; ++n )
      {
        if ( !m && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          GameType = SV_GameMP_GetGameType();
          v25 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
          if ( !v25 )
          {
            v25 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
            if ( !v25 )
              v25 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
          }
          v23 = (v25 != 0) + 1;
        }
        else
        {
          v23 = 1;
        }
        if ( n >= v23 )
          break;
        if ( BG_BotSystemEnabled() )
        {
          v27 = SV_GameMP_GetGameType();
          v28 = *(unsigned __int8 *)v27 - (unsigned __int8)aBr_2[0];
          if ( !v28 )
          {
            v28 = *((unsigned __int8 *)v27 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v28 )
              v28 = *((unsigned __int8 *)v27 + 2) - (unsigned __int8)aBr_2[2];
          }
          v26 = v28 == 0;
        }
        else
        {
          v26 = 1;
        }
        v29 = n;
        if ( v26 )
          v29 = 0;
        if ( !m )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 366, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
        }
        if ( BG_BotSystemEnabled() )
        {
          v31 = SV_GameMP_GetGameType();
          v32 = *(unsigned __int8 *)v31 - (unsigned __int8)aBr_2[0];
          if ( !v32 )
          {
            v32 = *((unsigned __int8 *)v31 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v32 )
              v32 = *((unsigned __int8 *)v31 + 2) - (unsigned __int8)aBr_2[2];
          }
          v30 = (v32 != 0) + 1;
        }
        else
        {
          v30 = 1;
        }
        if ( v29 >= v30 )
        {
          if ( !m && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( BG_BotSystemEnabled() )
          {
            v34 = SV_GameMP_GetGameType();
            v35 = *(unsigned __int8 *)v34 - (unsigned __int8)aBr_2[0];
            if ( !v35 )
            {
              v35 = *((unsigned __int8 *)v34 + 1) - (unsigned __int8)aBr_2[1];
              if ( !v35 )
                v35 = *((unsigned __int8 *)v34 + 2) - (unsigned __int8)aBr_2[2];
            }
            v33 = (v35 != 0) + 1;
          }
          else
          {
            v33 = 1;
          }
          LODWORD(v38) = v33;
          LODWORD(v37) = v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 367, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        SentientHandle::setSentient(&m->dynamic.pOwners[v29], NULL);
      }
    }
  }
  for ( ii = pathData.nodes; ii != &pathData.nodes[g_path.actualNodeCount]; ++ii )
    Scr_FreePathnode(ii);
  g_path.actualNodeCount = 0;
  debugPath = NULL;
  G_TacGraph_Shutdown();
  Nav_CleanupNavMesh();
}

/*
==============
Path_SpawnNode
==============
*/
__int64 Path_SpawnNode(const vec3_t *origin, const vec3_t *angles, int nodeType, unsigned int additionalSpawnflags, const scr_string_t targetname, const scr_string_t parentname)
{
  unsigned int v9; 
  const vec3_t *v11; 
  unsigned __int16 v12; 
  unsigned __int16 v14; 
  pathnode_t *v16; 
  __int64 v17; 
  unsigned __int64 SpawnedNodeIndex; 
  __int64 v47; 
  __int64 v48; 
  const vec3_t *v50; 
  tmat33_t<vec3_t> mat; 

  v9 = 0;
  v11 = angles;
  v12 = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount) - LOWORD(pathData.maxDynamicSpawnedNodeCount);
  v50 = angles;
  _R13 = origin;
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount) < 0 )
    v12 = 0;
  v14 = v12 + LOWORD(pathData.maxDynamicSpawnedNodeCount);
  if ( v12 >= (unsigned __int16)(v12 + LOWORD(pathData.maxDynamicSpawnedNodeCount)) )
    return 0xFFFFi64;
  while ( Path_NodeValid(v12) )
  {
    if ( ++v12 >= v14 )
      return 0xFFFFi64;
  }
  v16 = &pathData.nodes[v12];
  Path_InitSpawnNode(v16);
  v16->constant.parent.index = 0;
  if ( parentname && level.num_entities > 0 )
  {
    while ( 1 )
    {
      if ( v9 >= 0x800 )
      {
        LODWORD(v48) = 2048;
        LODWORD(v47) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v47, v48) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v17 = (int)v9;
      if ( g_entities[v17].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v9] && level.gentities[v17].targetname == targetname )
        break;
      if ( (int)++v9 >= level.num_entities )
        goto LABEL_23;
    }
    v16->constant.parent.index = v9;
LABEL_23:
    v11 = v50;
  }
  Scr_SetString(&v16->constant.targetname, targetname);
  v16->constant.spawnflags |= additionalSpawnflags;
  if ( (unsigned int)nodeType >= 0x20 )
  {
    LODWORD(v48) = 32;
    LODWORD(v47) = nodeType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1797, ASSERT_TYPE_ASSERT, "(unsigned)( nodeType ) < (unsigned)( NODE_NUMTYPES )", "nodeType doesn't index NODE_NUMTYPES\n\t%i not in [0, %i)", v47, v48) )
      __debugbreak();
  }
  v16->constant.type = nodeType;
  _RAX = pathnode_t::GetParent(v16);
  _RDI = (__int64 *)&v16->constant.vLocalOrigin;
  __asm { vmovss  xmm0, dword ptr [r13+0] }
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r13+8]
      vmovaps [rsp+0F8h+var_48], xmm6
      vsubss  xmm6, xmm0, dword ptr [rax+130h]
      vmovss  xmm0, dword ptr [r13+4]
      vmovaps [rsp+0F8h+var_58], xmm7
      vsubss  xmm7, xmm0, dword ptr [rax+134h]
      vmovss  xmm0, dword ptr [rax+140h]
      vmovaps [rsp+0F8h+var_68], xmm8
      vsubss  xmm8, xmm1, dword ptr [rax+138h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000; degrees
    }
    MatrixRotationZ(&mat, *(float *)&_XMM1);
    if ( &v50 == (const vec3_t **)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmulss  xmm3, xmm7, dword ptr [rsp+0F8h+mat+0Ch]
      vmulss  xmm2, xmm6, dword ptr [rsp+0F8h+mat]
      vmulss  xmm1, xmm8, dword ptr [rsp+0F8h+mat+18h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm7, dword ptr [rsp+0F8h+mat+10h]
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm8, dword ptr [rsp+0F8h+mat+1Ch]
      vmovss  dword ptr [rdi], xmm2
      vmulss  xmm2, xmm6, dword ptr [rsp+0F8h+mat+4]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm7, dword ptr [rsp+0F8h+mat+14h]
      vmovaps xmm7, [rsp+0F8h+var_58]
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm8, dword ptr [rsp+0F8h+mat+20h]
      vmovaps xmm8, [rsp+0F8h+var_68]
      vmovss  dword ptr [rdi+4], xmm2
      vmulss  xmm2, xmm6, dword ptr [rsp+0F8h+mat+8]
      vmovaps xmm6, [rsp+0F8h+var_48]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rdi], xmm0 }
    v16->constant.vLocalOrigin.v[1] = _R13->v[1];
    __asm { vmovss  xmm0, dword ptr [r13+8] }
  }
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  pathnode_t::SetWorldAngles(v16, v11);
  SpawnedNodeIndex = (unsigned __int16)Path_GetSpawnedNodeIndex(v12);
  if ( SpawnedNodeIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 159, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  g_path.spawnedNodesValid.m_data[SpawnedNodeIndex >> 6] = (0x8000000000000000ui64 >> (SpawnedNodeIndex & 0x3F)) | g_path.spawnedNodesValid.m_data[SpawnedNodeIndex >> 6] & ~(0x8000000000000000ui64 >> (SpawnedNodeIndex & 0x3F));
  return v12;
}

/*
==============
Path_SpawnZoneNodes
==============
*/
void Path_SpawnZoneNodes(void)
{
  unsigned int actualNodeCount; 
  int v1; 
  pathnode_t *v2; 
  __int64 v3; 
  unsigned int v4; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8606, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  actualNodeCount = g_path.actualNodeCount;
  if ( g_path.actualNodeCount != pathData.nodeCount - pathData.zoneCount )
  {
    v4 = pathData.nodeCount - pathData.zoneCount;
    LODWORD(v3) = g_path.actualNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8607, ASSERT_TYPE_ASSERT, "( g_path.actualNodeCount ) == ( (pathData.nodeCount - pathData.zoneCount) )", "g_path.actualNodeCount == (pathData.nodeCount - pathData.zoneCount)\n\t%i, %i", v3, v4) )
      __debugbreak();
    actualNodeCount = g_path.actualNodeCount;
  }
  v1 = 0;
  if ( pathData.zoneCount > 0 )
  {
    while ( 1 )
    {
      if ( actualNodeCount < 0xFFFF )
      {
        g_path.actualNodeCount = actualNodeCount + 1;
        v2 = &pathData.nodes[actualNodeCount];
        *(_QWORD *)&v2->dynamic.pOwners[0].number = 0i64;
        *(_QWORD *)v2->dynamic.iFreeTime = 0i64;
        *(_QWORD *)v2->dynamic.iValidTime = 0i64;
        *(_QWORD *)&v2->dynamic.iValidTime[2] = 0i64;
        *(_QWORD *)&v2->dynamic.bInactive = 0i64;
        *(_QWORD *)&v2->dynamic.bots.recentUseProxTimes[1] = 0i64;
        v2->dynamic.actors.inPlayerLOSTime = 0;
        *(_QWORD *)&v2->transient.iSearchFrame = 0i64;
        v2->transient.pNextOpen = NULL;
        v2->transient.pPrevOpen = NULL;
        v2->transient.pParent = NULL;
        *(_QWORD *)&v2->transient.fCost = 0i64;
        *(_QWORD *)&v2->transient.nodeCost = 0i64;
        v2->dynamic.turretEntNumber = -1;
        Path_InitLinkCount(v2);
      }
      else
      {
        Com_Printf(18, "PATH_MAX_NODES (%i) exceeded.  Nodecount: %d\n", 0xFFFFi64, actualNodeCount + 1);
      }
      if ( ++v1 >= pathData.zoneCount )
        break;
      actualNodeCount = g_path.actualNodeCount;
    }
  }
}

/*
==============
Path_TrajectoryCanAttemptAccurateJump
==============
*/
__int64 Path_TrajectoryCanAttemptAccurateJump(const vec3_t *fromPoint, const vec3_t *fromNormal, const vec3_t *toPoint, const vec3_t *toNormal, float gravity, float speedScale, PathJumpLinkWorkData *workData)
{
  char v52; 
  __int64 result; 
  vec3_t gravityVector; 
  vec3_t returnVector; 
  trace_t results; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
  }
  _RBX = workData;
  _RSI = toNormal;
  _RBP = fromNormal;
  if ( !workData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10726, ASSERT_TYPE_ASSERT, "(workData)", (const char *)&queryFormat, "workData") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, cs:__real@41b80000
    vmovss  xmm8, [rsp+0E8h+gravity]
  }
  *(_QWORD *)workData->pointA.v = *(_QWORD *)fromPoint->v;
  workData->pointA.v[2] = fromPoint->v[2];
  workData->pointB = *toPoint;
  __asm
  {
    vmulss  xmm0, xmm5, dword ptr [rbp+0]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbp+8]
    vmovss  xmm2, dword ptr [rbp+4]
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm2, xmm5, xmm2
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm1, xmm5, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm2
    vmulss  xmm1, xmm5, dword ptr [rsi]
    vaddss  xmm2, xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi+8]
    vmovss  dword ptr [rbx+0Ch], xmm2
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm1, xmm0, dword ptr [rbx+10h]
    vmulss  xmm2, xmm5, xmm4
    vmovss  dword ptr [rbx+10h], xmm1
    vaddss  xmm0, xmm2, dword ptr [rbx+14h]
    vmovaps xmm2, xmm8; gravity
    vmovss  dword ptr [rbx+14h], xmm0
  }
  *(double *)&_XMM0 = TrajectoryCalculateMinimumVelocity(&workData->pointA, &workData->pointB, *(const float *)&_XMM2);
  __asm
  {
    vmulss  xmm2, xmm0, [rsp+0E8h+speedScale]; velocity
    vmovaps xmm3, xmm8; gravity
  }
  *(double *)&_XMM0 = TrajectoryEstimateDesiredInAirTime(&workData->pointA, &workData->pointB, *(const float *)&_XMM2, *(const float *)&_XMM3);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+0E8h+gravityVector], xmm2
    vmovss  dword ptr [rsp+0E8h+gravityVector+4], xmm2
    vxorps  xmm2, xmm8, cs:__xmm@80000000800000008000000080000000
    vmovaps xmm3, xmm0; totalTime
    vmovss  dword ptr [rsp+0E8h+gravityVector+8], xmm2
    vmovaps xmm6, xmm0
  }
  TrajectoryCalculateInitialVelocity(&workData->pointA, &workData->pointB, &gravityVector, *(const float *)&_XMM3, &returnVector);
  __asm
  {
    vmulss  xmm2, xmm6, cs:__real@3f000000; time
    vmovss  xmm0, dword ptr [rsp+0E8h+returnVector+8]; verticalVelocity
    vmovaps xmm1, xmm8; gravity
  }
  *(double *)&_XMM0 = TrajectoryComputeDeltaHeightAtTime(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
  __asm
  {
    vaddss  xmm4, xmm0, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rbx+10h]
    vaddss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm3, xmm1, cs:__real@3f000000
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vmovss  dword ptr [rbx+18h], xmm2
    vmovss  dword ptr [rbx+1Ch], xmm3
    vmovss  dword ptr [rbx+20h], xmm4
  }
  G_Main_TraceCapsule(&results, &workData->pointA, &workData->pointCenter, &pathConnectJumpActorBox, 2047, 529);
  __asm
  {
    vmovss  xmm0, [rsp+0E8h+results.fraction]
    vmovss  xmm6, cs:__real@3f800000
    vcomiss xmm0, xmm6
  }
  if ( v52 )
    goto LABEL_11;
  if ( results.startsolid )
    goto LABEL_11;
  if ( results.allsolid )
    goto LABEL_11;
  G_Main_TraceCapsule(&results, &workData->pointCenter, &workData->pointB, &pathConnectJumpActorBox, 2047, 529);
  __asm
  {
    vmovss  xmm0, [rsp+0E8h+results.fraction]
    vcomiss xmm0, xmm6
  }
  if ( v52 || results.startsolid || results.allsolid )
LABEL_11:
    result = 0i64;
  else
    result = 1i64;
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
Path_UpdateGlobalBadPlaceCount
==============
*/
void Path_UpdateGlobalBadPlaceCount(const bitarray<224> *teamflags, int flags, int delta)
{
  const bitarray<224> *v3; 
  int v4; 
  unsigned __int16 v5; 
  pathnode_t *v6; 
  __int64 v7; 
  unsigned int v8; 
  char *v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  const char *GameType; 
  unsigned int v15; 
  pathlink_s *Links; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  pathnode_t *v22; 
  unsigned __int16 i; 

  v3 = teamflags;
  v4 = flags;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10458, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
    __debugbreak();
  v5 = 0;
  for ( i = 0; v5 < (signed int)(g_path.actualNodeCount - pathData.zoneCount); i = v5 )
  {
    if ( Path_NodeValid(v5) )
    {
      v6 = &pathData.nodes[v5];
      v22 = v6;
      if ( Path_BadPlaceAppliesViaFlags(v4, v6) )
      {
        v20 = 0;
        if ( v6->constant.totalLinkCount )
        {
          v7 = 0i64;
          v21 = 0i64;
          do
          {
            v8 = 1;
            v9 = (char *)v6->constant.Links + v7;
            v10 = 1i64;
            v11 = 0i64;
            v12 = 3i64;
            do
            {
              if ( v8 >= 0xE0 )
              {
                LODWORD(v18) = 224;
                LODWORD(v17) = v8;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
                  __debugbreak();
              }
              if ( ((0x80000000 >> (v8 & 0x1F)) & v3->array[v10 >> 5]) != 0 )
              {
                v13 = delta + (unsigned __int8)v9[v11 + 9];
                if ( v13 > 0xFF )
                {
                  LODWORD(v19) = 255;
                  LODWORD(v17) = delta + (unsigned __int8)v9[v11 + 9];
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10415, ASSERT_TYPE_ASSERT, "( 0 ) <= ( newCount ) && ( newCount ) <= ( 255 )", "newCount not in [0, 255]\n\t%i not in [%i, %i]", v17, 0i64, v19) )
                    __debugbreak();
                }
                v9[v11 + 9] = v13;
                v3 = teamflags;
              }
              ++v8;
              ++v10;
              ++v11;
              --v12;
            }
            while ( v12 );
            v6 = v22;
            v7 = v21 + 12;
            ++v20;
            v21 += 12i64;
          }
          while ( v20 < v22->constant.totalLinkCount );
          v5 = i;
          v4 = flags;
        }
        if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10430, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10431, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", "%s\n\tAccess to pathnode_dynamic::bots", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
          __debugbreak();
        if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10432, ASSERT_TYPE_ASSERT, "(!Path_MapUsesScriptedAIData())", "%s\n\tmap/mode is only set up to use scripted soldier data, should not be accessing pathnode_dynamic::bots", "!Path_MapUsesScriptedAIData()") )
            __debugbreak();
        }
        v15 = 0;
        v6->dynamic.bots.hasGlobalBadPlaceLink = 0;
        if ( v6->constant.totalLinkCount )
        {
          Links = v6->constant.Links;
          do
          {
            if ( Links[v15].ubBadPlaceCount[0] )
              v6->dynamic.bots.hasGlobalBadPlaceLink |= 1u;
            if ( Links[v15].ubBadPlaceCount[1] )
              v6->dynamic.bots.hasGlobalBadPlaceLink |= 2u;
            if ( Links[v15].ubBadPlaceCount[2] )
              v6->dynamic.bots.hasGlobalBadPlaceLink |= 4u;
            ++v15;
          }
          while ( v15 < v6->constant.totalLinkCount );
        }
      }
    }
    ++v5;
  }
}

/*
==============
Path_UpdatePerFrameVersionWarning
==============
*/
void Path_UpdatePerFrameVersionWarning(void)
{
  if ( g_platformWarning )
    Com_PrintWarning(1, "Please reconnect paths for level. Parented moving platform nodes with old version.\n");
}

/*
==============
Path_UsePathExtraData
==============
*/
_BOOL8 Path_UsePathExtraData()
{
  return pathData.usePathExtraData;
}

/*
==============
Path_ZoneColor
==============
*/
const vec4_t *Path_ZoneColor(int zone)
{
  return zoneColor[zone & 7];
}

/*
==============
Path_ZoneCount
==============
*/
__int64 Path_ZoneCount()
{
  return (unsigned int)pathData.zoneCount;
}

/*
==============
Path_ZoneGetIndoorPercent
==============
*/

float __fastcall Path_ZoneGetIndoorPercent(int zoneNum, double _XMM1_8)
{
  int v4; 
  signed int v5; 
  int v6; 
  unsigned __int16 v7; 
  unsigned int v8; 
  int v9; 
  __int64 v16; 
  __int64 v17; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2670, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  if ( zoneNum == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2671, ASSERT_TYPE_ASSERT, "( zoneNum != 255 )", (const char *)&queryFormat, "zoneNum != PATH_INVALID_ZONE") )
    __debugbreak();
  v4 = 0;
  v5 = g_path.actualNodeCount - pathData.zoneCount;
  v6 = 0;
  v7 = 0;
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
  {
    v8 = 0;
    do
    {
      if ( Path_NodeValid(v7) )
      {
        if ( pathData.pathZones )
        {
          if ( v8 >= pathData.zonesBytes )
          {
            LODWORD(v17) = pathData.zonesBytes;
            LODWORD(v16) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8510, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.zonesBytes )", "nodeIndex doesn't index pathData.zonesBytes\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          v9 = pathData.pathZones[v8];
        }
        else
        {
          v9 = 255;
        }
        if ( v9 == zoneNum )
        {
          if ( Path_IsNodeIndexExposedSkyBase(v8, 0) )
            ++v6;
          else
            ++v4;
        }
      }
      v8 = ++v7;
    }
    while ( v7 < v5 );
  }
  if ( v6 + v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2692, ASSERT_TYPE_ASSERT, "((numIndoor + numOutdoor > 0))", "%s\n\tEmpty zone", "(numIndoor + numOutdoor > 0)") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, esi
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm0, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Path_ZoneIsTraversalIsland
==============
*/
__int64 Path_ZoneIsTraversalIsland(int zoneIndex)
{
  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2662, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  return (Path_ConvertZoneIndexToZone(zoneIndex)->constant.spawnflags >> 8) & 1;
}

/*
==============
Path_ZoneNodeValid
==============
*/
bool Path_ZoneNodeValid(unsigned __int16 iNode)
{
  return pathData.usePathExtraData && (signed int)(g_path.actualNodeCount - pathData.zoneCount) <= iNode && iNode <= (signed int)(g_path.actualNodeCount - 1);
}

/*
==============
PrintPathNodeError
==============
*/
void PrintPathNodeError(const pathnode_t *node)
{
  scr_string_t name; 
  const char *v6; 
  PathNodeParentUnion v7; 
  const char *v8; 
  const char *v9; 
  char *v10; 
  const char *v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  scr_string_t ParentNameFromParentIndex; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  unsigned __int16 v20; 
  __int64 v21; 
  __int128 v; 

  _RBP = (pathnode_t *)node;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 484, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (_RBP->constant.spawnflags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 485, ASSERT_TYPE_ASSERT, "(node->constant.spawnflags & PNF_ERROR)", (const char *)&queryFormat, "node->constant.spawnflags & PNF_ERROR") )
    __debugbreak();
  if ( _RBP->constant.error >= (unsigned int)NUM_PATH_NODE_ERRORS )
  {
    LODWORD(v21) = _RBP->constant.error;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 486, ASSERT_TYPE_ASSERT, "(unsigned)( node->constant.error ) < (unsigned)( NUM_PATH_NODE_ERRORS )", "node->constant.error doesn't index NUM_PATH_NODE_ERRORS\n\t%i not in [0, %i)", v21, 11) )
      __debugbreak();
  }
  if ( !Nav_MeshLoaded() && !Nav_MeshWillBeLoaded() || _RBP->constant.error != PNERR_NOLINK )
  {
    if ( !_RBP->constant.parent.index || pathData.parentIndexResolved )
    {
      pathnode_t::GetPos(_RBP, (vec3_t *)&v);
      if ( (unsigned int)GetParentNameFromParentIndex(_RBP) )
      {
        ParentNameFromParentIndex = (unsigned int)GetParentNameFromParentIndex(_RBP);
        v14 = SL_ConvertToString(ParentNameFromParentIndex);
      }
      else
      {
        v14 = (char *)&queryFormat.fmt + 3;
      }
      v16 = "Parent:";
      if ( !(unsigned int)GetParentNameFromParentIndex(_RBP) )
        v16 = (char *)&queryFormat.fmt + 3;
      v17 = pathNodeErrorStrTable[_RBP->constant.error];
      v18 = vtos((const vec3_t *)&v);
      v19 = nodeStringTable[_RBP->constant.type];
      v20 = Path_ConvertNodeToIndex(_RBP);
      Com_PrintError(18, "ERROR: Pathnode %d (%s) at %s %s. %s%s\n", v20, v19, v18, v17, v16, v14);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+20h]
        vmovss  xmm1, dword ptr [rbp+24h]
      }
      name = _RBP->constant.parent.name;
      __asm
      {
        vmovss  dword ptr [rsp+88h+v], xmm0
        vmovss  xmm0, dword ptr [rbp+28h]
        vmovss  dword ptr [rsp+88h+v+8], xmm0
        vmovss  dword ptr [rsp+88h+v+4], xmm1
      }
      if ( name )
      {
        v8 = SL_ConvertToString(name);
        v7.name = (scr_string_t)_RBP->constant.parent;
        v6 = v8;
      }
      else
      {
        v6 = (char *)&queryFormat.fmt + 3;
        v7.name = 0;
      }
      v9 = pathNodeErrorStrTable[_RBP->constant.error];
      v10 = vtos((const vec3_t *)&v);
      v11 = nodeStringTable[_RBP->constant.type];
      v12 = "Parent:";
      v13 = Path_ConvertNodeToIndex(_RBP);
      if ( !v7.name )
        v12 = (char *)&queryFormat.fmt + 3;
      Com_PrintError(18, "ERROR: Pathnode %d (%s) at local pos %s %s. %s%s\n", v13, v11, v10, v9, v12, v6, v);
    }
  }
}

/*
==============
ReadSpawnedPathNodes
==============
*/
void ReadSpawnedPathNodes(SaveGame *save)
{
  MemoryFile *MemoryFile; 
  __int64 v3; 
  int v4; 
  signed int v5; 
  __int64 v6; 
  __int64 v7; 
  const char *CString; 
  scr_string_t String; 
  unsigned __int16 v11[2]; 
  unsigned int v12[3]; 
  char v13; 
  unsigned __int16 v14; 
  int p; 

  MemoryFile = SaveMemory_GetMemoryFile(save);
  MemFile_ReadData(MemoryFile, 4ui64, &p);
  v3 = p;
  if ( pathData.maxDynamicSpawnedNodeCount != p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10539, ASSERT_TYPE_ASSERT, "(pathData.maxDynamicSpawnedNodeCount == maxSpawnedCount)", (const char *)&queryFormat, "pathData.maxDynamicSpawnedNodeCount == maxSpawnedCount") )
    __debugbreak();
  v4 = 0;
  v5 = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  v6 = v3;
  if ( (int)v3 > 0 )
  {
    if ( v5 < 0 )
      v5 = 0;
    v7 = v5;
    do
    {
      MemFile_ReadData(MemoryFile, 1ui64, &v13);
      if ( v13 )
      {
        _RBX = &pathData.nodes[v7];
        Path_InitSpawnNode(&pathData.nodes[v7]);
        *(double *)&_XMM0 = MemFile_ReadFloat(MemoryFile);
        __asm { vmovss  dword ptr [rbx+20h], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(MemoryFile);
        __asm { vmovss  dword ptr [rbx+24h], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(MemoryFile);
        __asm { vmovss  dword ptr [rbx+28h], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(MemoryFile);
        __asm { vmovss  dword ptr [rbx+2Ch], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(MemoryFile);
        __asm { vmovss  dword ptr [rbx+30h], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(MemoryFile);
        __asm { vmovss  dword ptr [rbx+34h], xmm0 }
        MemFile_ReadData(MemoryFile, 4ui64, v11);
        _RBX->constant.type = v11[0];
        MemFile_ReadData(MemoryFile, 4ui64, v12);
        _RBX->constant.spawnflags = v12[0];
        MemFile_ReadData(MemoryFile, 2ui64, &v14);
        _RBX->constant.parent.index = v14;
        CString = MemFile_ReadCString(MemoryFile);
        if ( *CString )
          String = SL_GetString(CString, 0);
        else
          String = 0;
        _RBX->constant.targetname = String;
        if ( (unsigned __int64)v4 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 159, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        g_path.spawnedNodesValid.m_data[(unsigned __int64)v4 >> 6] = (0x8000000000000000ui64 >> (v4 & 0x3F)) | g_path.spawnedNodesValid.m_data[(unsigned __int64)v4 >> 6] & ~(0x8000000000000000ui64 >> (v4 & 0x3F));
      }
      ++v4;
      ++v7;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
ScrCmd_DoesNodeAllowStance
==============
*/
void ScrCmd_DoesNodeAllowStance(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  unsigned __int16 v4; 
  const pathnode_t *v5; 
  scr_string_t ConstString; 
  bool DoesNodeAllowStance; 

  entnum = entref.entnum;
  if ( entref.entclass == ENTITY_CLASS_PATHNODE )
  {
    if ( entref.entnum >= g_path.actualNodeCount - pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5112, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( Path_NodeCount() )", "entref.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", entref.entnum, g_path.actualNodeCount - pathData.zoneCount) )
      __debugbreak();
    v4 = truncate_cast<unsigned short,unsigned int>(entnum);
    if ( Path_NodeValid(v4) )
    {
      v5 = &pathData.nodes[entnum];
      ConstString = Scr_GetConstString(scrContext, 0);
      DoesNodeAllowStance = Path_DoesNodeAllowStance(v5, ConstString);
      Scr_AddBool(scrContext, DoesNodeAllowStance);
    }
    else
    {
      Scr_Error(COM_ERR_2516, scrContext, "DoesNodeAllowStance: called on despawned pathnode.");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2517, scrContext, "DoesNodeAllowStance not called on pathnode.");
  }
}

/*
==============
ScrCmd_GetHighestNodeStance
==============
*/
void ScrCmd_GetHighestNodeStance(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  unsigned __int16 v4; 
  scr_string_t HighestNodeStance; 

  entnum = entref.entnum;
  if ( entref.entclass == ENTITY_CLASS_PATHNODE )
  {
    if ( entref.entnum >= g_path.actualNodeCount - pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5070, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( Path_NodeCount() )", "entref.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", entref.entnum, g_path.actualNodeCount - pathData.zoneCount) )
      __debugbreak();
    v4 = truncate_cast<unsigned short,unsigned int>(entnum);
    if ( Path_NodeValid(v4) )
    {
      HighestNodeStance = Path_GetHighestNodeStance(&pathData.nodes[entnum]);
      if ( !HighestNodeStance )
        HighestNodeStance = scr_const.crouch;
      Scr_AddConstString(scrContext, HighestNodeStance);
    }
    else
    {
      Scr_Error(COM_ERR_2513, scrContext, "GetHighestNodeStance: called on despawned pathnode.");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2514, scrContext, "GetHighestNodeStance not called on pathnode.");
  }
}

/*
==============
ScrCmd_GetNodeOffset
==============
*/
void ScrCmd_GetNodeOffset(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  unsigned __int16 v5; 
  const char *v6; 
  ComErrorCode v7; 
  pathnode_t *v8; 
  scr_string_t HighestNodeStance; 
  ai_stance_e v11; 
  unsigned __int16 type; 
  vec3_t outEyeOffset; 
  float value; 
  tmat33_t<vec3_t> axis; 
  vec3_t vector; 

  entnum = entref.entnum;
  if ( entref.entclass != ENTITY_CLASS_PATHNODE )
  {
    v6 = "GetNodeOffset_Code not called on pathnode.";
    v7 = COM_ERR_6498;
    goto LABEL_15;
  }
  if ( entref.entnum >= g_path.actualNodeCount - pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5024, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( Path_NodeCount() )", "entref.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", entref.entnum, g_path.actualNodeCount - pathData.zoneCount) )
    __debugbreak();
  v5 = truncate_cast<unsigned short,unsigned int>(entnum);
  if ( !Path_NodeValid(v5) )
  {
    v6 = "GetNodeOffset_Code: called on despawned pathnode.";
    v7 = COM_ERR_6497;
LABEL_15:
    Scr_Error(v7, scrContext, v6);
    return;
  }
  v8 = &pathData.nodes[entnum];
  if ( v8->constant.type == 21 )
    Scr_Error(COM_ERR_6499, scrContext, "nodes of type NODE_COVER_3D are not currently supported by GetNodeOffset_Code.");
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+57h+value], xmm0
    vmovss  [rbp+57h+var_4C], xmm0
    vmovss  [rbp+57h+var_48], xmm0
  }
  HighestNodeStance = Path_GetHighestNodeStance(v8);
  if ( !HighestNodeStance )
    HighestNodeStance = scr_const.crouch;
  v11 = AI_StringToStance(HighestNodeStance);
  type = v8->constant.type;
  if ( type == 31 )
    type = v8->dynamic.coverMultiType;
  GetNodeExposedEyeOffset(type, v11, &outEyeOffset);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+57h+outEyeOffset]
    vmovss  xmm0, dword ptr [rbp+57h+outEyeOffset+4]
    vmovss  dword ptr [rbp+57h+outEyeOffset], xmm0
    vmovss  dword ptr [rbp+57h+outEyeOffset+4], xmm1
  }
  pathnode_t::GetAngles(v8, &vector);
  AnglesToAxis(&vector, &axis);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+57h+outEyeOffset+8]
    vmovss  xmm0, dword ptr [rbp+57h+axis]
    vmulss  xmm2, xmm0, dword ptr [rbp+57h+outEyeOffset]
    vmovss  xmm1, dword ptr [rbp+57h+axis+0Ch]
    vmulss  xmm0, xmm1, dword ptr [rbp+57h+outEyeOffset+4]
    vmulss  xmm1, xmm5, dword ptr [rbp+57h+axis+18h]
    vsubss  xmm2, xmm2, xmm0
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm2, dword ptr [rbp+57h+axis+4]
    vmulss  xmm3, xmm2, dword ptr [rbp+57h+outEyeOffset]
    vmovss  xmm2, dword ptr [rbp+57h+axis+8]
    vmovss  [rbp+57h+value], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+axis+10h]
    vmulss  xmm1, xmm0, dword ptr [rbp+57h+outEyeOffset+4]
    vmulss  xmm0, xmm5, dword ptr [rbp+57h+axis+1Ch]
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm3, xmm2, dword ptr [rbp+57h+outEyeOffset]
    vaddss  xmm1, xmm4, xmm0
    vmovss  xmm0, dword ptr [rbp+57h+axis+14h]
    vmovss  [rbp+57h+var_4C], xmm1
    vmulss  xmm1, xmm0, dword ptr [rbp+57h+outEyeOffset+4]
    vmulss  xmm0, xmm5, dword ptr [rbp+57h+axis+20h]
    vsubss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmovss  [rbp+57h+var_48], xmm1
  }
  Scr_AddVector(scrContext, &value);
}

/*
==============
ScrCmd_GetValidCoverMultiNodeTypes
==============
*/
void ScrCmd_GetValidCoverMultiNodeTypes(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  unsigned __int16 v4; 
  pathnode_t *v5; 
  unsigned int spawnflags; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 

  entnum = entref.entnum;
  if ( entref.entclass == ENTITY_CLASS_PATHNODE )
  {
    if ( entref.entnum >= g_path.actualNodeCount - pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4777, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( Path_NodeCount() )", "entref.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", entref.entnum, g_path.actualNodeCount - pathData.zoneCount) )
      __debugbreak();
    v4 = truncate_cast<unsigned short,unsigned int>(entnum);
    if ( Path_NodeValid(v4) )
    {
      v5 = &pathData.nodes[entnum];
      if ( v5->constant.type == 31 )
      {
        Scr_MakeArray(scrContext);
        spawnflags = v5->constant.spawnflags;
        if ( (v5->constant.spawnflags & 0x100000) != 0 && (v5->constant.spawnflags & 8) == 0 )
        {
          Scr_AddConstString(scrContext, scr_const.cover_crouch_cc);
          Scr_AddArray(scrContext);
          spawnflags = v5->constant.spawnflags;
        }
        v7 = spawnflags;
        if ( (spawnflags & 0x200) != 0 && (spawnflags & 4) == 0 )
        {
          Scr_AddConstString(scrContext, scr_const.cover_stand_cc);
          Scr_AddArray(scrContext);
          v7 = v5->constant.spawnflags;
        }
        v8 = v7;
        if ( (v7 & 0x200000) != 0 && (v7 & 8) == 0 )
        {
          Scr_AddConstString(scrContext, scr_const.cover_left_crouch_cc);
          Scr_AddArray(scrContext);
          v8 = v5->constant.spawnflags;
        }
        v9 = v8;
        if ( (v8 & 0x400) != 0 && (v8 & 0x204) == 0 )
        {
          Scr_AddConstString(scrContext, scr_const.cover_left_cc);
          Scr_AddArray(scrContext);
          v9 = v5->constant.spawnflags;
        }
        LOWORD(v10) = v9;
        if ( (v9 & 0x400000) != 0 && (v9 & 8) == 0 )
        {
          Scr_AddConstString(scrContext, scr_const.cover_right_crouch_cc);
          Scr_AddArray(scrContext);
          v10 = v5->constant.spawnflags;
        }
        if ( (v10 & 0x800) != 0 && (v10 & 0x204) == 0 )
        {
          Scr_AddConstString(scrContext, scr_const.cover_right_cc);
          Scr_AddArray(scrContext);
        }
      }
      else
      {
        Scr_Error(COM_ERR_2509, scrContext, "GetValidCoverMultiNodeTypes: not called on Cover Multi node.");
      }
    }
    else
    {
      Scr_Error(COM_ERR_2508, scrContext, "GetValidCoverMultiNodeTypes: called on despawned pathnode.");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2510, scrContext, "GetValidCoverMultiNodeTypes: not called on pathnode. ");
  }
}

/*
==============
ScrCmd_GetValidCoverPeekOuts
==============
*/
void ScrCmd_GetValidCoverPeekOuts(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  unsigned __int16 v4; 
  pathnode_t *v5; 
  unsigned int spawnflags; 
  unsigned int v7; 
  unsigned int v8; 

  entnum = entref.entnum;
  if ( entref.entclass == ENTITY_CLASS_PATHNODE )
  {
    if ( entref.entnum >= g_path.actualNodeCount - pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4710, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( Path_NodeCount() )", "entref.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", entref.entnum, g_path.actualNodeCount - pathData.zoneCount) )
      __debugbreak();
    v4 = truncate_cast<unsigned short,unsigned int>(entnum);
    if ( Path_NodeValid(v4) )
    {
      v5 = &pathData.nodes[entnum];
      Scr_MakeArray(scrContext);
      spawnflags = v5->constant.spawnflags;
      if ( (v5->constant.spawnflags & 0x100000) != 0 && (spawnflags & 8) == 0 || (spawnflags & 0x200) != 0 && (spawnflags & 4) == 0 )
      {
        Scr_AddConstString(scrContext, scr_const.over);
        Scr_AddArray(scrContext);
      }
      v7 = v5->constant.spawnflags;
      if ( (v5->constant.spawnflags & 0x200000) != 0 && (v7 & 8) == 0 || (v7 & 0x400) != 0 && (v7 & 0x204) == 0 )
      {
        Scr_AddConstString(scrContext, scr_const.left);
        Scr_AddArray(scrContext);
      }
      v8 = v5->constant.spawnflags;
      if ( (v5->constant.spawnflags & 0x400000) != 0 && (v8 & 8) == 0 || (v8 & 0x800) != 0 && (v8 & 0x204) == 0 )
      {
        Scr_AddConstString(scrContext, scr_const.right);
        Scr_AddArray(scrContext);
      }
    }
    else
    {
      Scr_Error(COM_ERR_2506, scrContext, "GetValidCoverPeekOuts: called on despawned pathnode.");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2507, scrContext, "GetValidCoverPeekOuts not called on pathnode. ");
  }
}

/*
==============
ScrCmd_IsCoverMultiNode
==============
*/
void ScrCmd_IsCoverMultiNode(scrContext_t *scrContext, scr_entref_t entref)
{
  pathnode_t *NodeFromEntref; 

  NodeFromEntref = Path_GetNodeFromEntref(scrContext, entref);
  Scr_AddBool(scrContext, NodeFromEntref->constant.type == 31);
}

/*
==============
ScrCmd_IsNodeLMGMountable
==============
*/
void ScrCmd_IsNodeLMGMountable(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  unsigned __int16 v4; 

  entnum = entref.entnum;
  if ( entref.entclass == ENTITY_CLASS_PATHNODE )
  {
    if ( entref.entnum >= g_path.actualNodeCount - pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4854, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( Path_NodeCount() )", "entref.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", entref.entnum, g_path.actualNodeCount - pathData.zoneCount) )
      __debugbreak();
    v4 = truncate_cast<unsigned short,unsigned int>(entnum);
    if ( Path_NodeValid(v4) )
    {
      if ( (pathData.nodes[entnum].constant.spawnflags & 0x10000) != 0 )
        Scr_AddBool(scrContext, 1);
      else
        Scr_AddBool(scrContext, 0);
    }
    else
    {
      Scr_Error(COM_ERR_2511, scrContext, "IsNodeLMGMountable: called on despawned pathnode.");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2512, scrContext, "IsNodeLMGMountable not called on pathnode. ");
  }
}

/*
==============
ScrCmd_ReEvaluateMultiNode
==============
*/
void ScrCmd_ReEvaluateMultiNode(scrContext_t *scrContext, scr_entref_t entref)
{
  Scr_Error(COM_ERR_2518, scrContext, "Dynamic Peekouts disabled");
}

/*
==============
ScrCmd_SetCoverMultiNodeType
==============
*/
void ScrCmd_SetCoverMultiNodeType(scrContext_t *scrContext, scr_entref_t entref)
{
  pathnode_t *NodeFromEntref; 
  scr_string_t ConstString; 
  const char *v5; 
  const char *v6; 

  NodeFromEntref = Path_GetNodeFromEntref(scrContext, entref);
  if ( NodeFromEntref->constant.type == 31 )
  {
    ConstString = Scr_GetConstString(scrContext, 0);
    if ( ConstString == scr_const.cover_stand_cc )
    {
      NodeFromEntref->dynamic.turretEntNumber = 2;
    }
    else if ( ConstString == scr_const.cover_crouch_cc )
    {
      NodeFromEntref->dynamic.turretEntNumber = 3;
    }
    else if ( ConstString == scr_const.cover_left_cc )
    {
      NodeFromEntref->dynamic.turretEntNumber = 7;
    }
    else if ( ConstString == scr_const.cover_right_cc )
    {
      NodeFromEntref->dynamic.turretEntNumber = 6;
    }
    else
    {
      v5 = SL_ConvertToString(ConstString);
      v6 = j_va("SetCoverMultiNodeType : Unsupported node type : %s", v5);
      Scr_Error(COM_ERR_2520, scrContext, v6);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2519, scrContext, "SetCoverMultiNodeType : This function must be called only on cover multi nodes.");
  }
}

/*
==============
Scr_AddPathnode
==============
*/
void Scr_AddPathnode(const pathnode_t *node)
{
  scrContext_t *v2; 
  unsigned __int16 v3; 

  v2 = ScriptContext_Server();
  v3 = Path_ConvertNodeToIndex(node);
  Scr_AddEntityNum(v2, v3, ENTITY_CLASS_PATHNODE);
}

/*
==============
Scr_CacheSpawnPathNodesInCode
==============
*/
void Scr_CacheSpawnPathNodesInCode(scrContext_t *scrContext)
{
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  __int64 v4; 
  unsigned int FirstSibling; 
  unsigned int Object; 
  scr_entref_t EntityIdRef; 
  unsigned __int16 v8; 
  const char *v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int16 pathNodeIndexList[2048]; 

  ArrayObject = BGScr_Main_GetArrayObject(scrContext, 0);
  ArraySize = GetArraySize(scrContext, ArrayObject);
  if ( ArraySize <= 0x800 )
  {
    if ( ArraySize && LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData) )
    {
      v4 = 0i64;
      memset_0(pathNodeIndexList, 0, sizeof(pathNodeIndexList));
      FirstSibling = FindFirstSibling(scrContext, ArrayObject);
      if ( FirstSibling )
      {
        do
        {
          Object = FindObject(scrContext, FirstSibling);
          if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4253, ASSERT_TYPE_ASSERT, "( objectIdPathNode )", (const char *)&queryFormat, "objectIdPathNode") )
            __debugbreak();
          if ( GetObjectType(scrContext, Object) == VAR_ENTITY )
          {
            EntityIdRef = Scr_GetEntityIdRef(scrContext, Object);
            if ( EntityIdRef.entclass != ENTITY_CLASS_PATHNODE )
              Scr_ParamError(COM_ERR_2497, scrContext, Object, "path node list included an index that is not a pathnode");
            if ( EntityIdRef.entnum >= g_path.actualNodeCount - pathData.zoneCount )
            {
              LODWORD(v12) = g_path.actualNodeCount - pathData.zoneCount;
              LODWORD(v11) = EntityIdRef.entnum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4265, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v11, v12) )
                __debugbreak();
            }
            v8 = Path_ConvertNodeToIndex(&pathData.nodes[EntityIdRef.entnum]);
            if ( (unsigned int)v4 < 0x800 )
            {
              pathNodeIndexList[v4] = v8;
              v4 = (unsigned int)(v4 + 1);
            }
          }
          FirstSibling = FindNextSibling(scrContext, FirstSibling);
        }
        while ( FirstSibling );
        if ( (_DWORD)v4 )
          LOSPrecomputeSystem::CacheSpawnNodeList(&g_losPrecomputeData, pathNodeIndexList, v4);
      }
    }
    else
    {
      v9 = "false";
      if ( LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData) )
        v9 = "true";
      v10 = GetArraySize(scrContext, ArrayObject);
      Com_Printf(16, "Scr_CacheSpawnPathNodesInCode exiting due to array size %d or system enabled == %s\n", v10, v9);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2496, scrContext, "spawnPointNodes parameter too large to buffer, increase MAX_SPAWN_PATHNODE_LIST or reduce the number of spawn points in this map!");
  }
}

/*
==============
Scr_DespawnCoverNode
==============
*/
void Scr_DespawnCoverNode(scrContext_t *scrContext)
{
  const pathnode_t *Pathnode; 
  unsigned __int16 v3; 
  unsigned int actualNodeCount; 
  int zoneCount; 
  unsigned __int16 v6; 
  int v7; 
  const char *v8; 
  int v9; 

  Pathnode = Scr_GetPathnode(scrContext, 0);
  v3 = Path_ConvertNodeToIndex(Pathnode);
  actualNodeCount = g_path.actualNodeCount;
  zoneCount = pathData.zoneCount;
  v6 = v3;
  v7 = v3;
  if ( v3 > (signed int)(g_path.actualNodeCount - pathData.zoneCount) )
  {
    v8 = j_va("DespawnCoverNode: invalid node index %d.", v3);
    Scr_Error(COM_ERR_2463, scrContext, v8);
    actualNodeCount = g_path.actualNodeCount;
    zoneCount = pathData.zoneCount;
  }
  v9 = actualNodeCount - pathData.maxDynamicSpawnedNodeCount - zoneCount;
  if ( v9 < 0 )
    v9 = 0;
  if ( v7 < v9 )
    Scr_Error(COM_ERR_2464, scrContext, "DespawnCoverNode: Attempting to delete a node that was not spawned with SpawnCoverNode().");
  Path_DespawnNode(v6);
}

/*
==============
Scr_FindEntrances
==============
*/
void Scr_FindEntrances(scrContext_t *scrContext)
{
  __int64 Entrances; 
  __int64 v3; 
  __int64 v4; 
  unsigned __int16 v5; 
  const pathnode_t *v6; 
  scrContext_t *v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  __int64 v10; 
  vec3_t vectorValue; 
  unsigned __int16 results[4]; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3966, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  Scr_GetVector(scrContext, 0, &vectorValue);
  *(_QWORD *)results = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  v18 = 0i64;
  v19 = 0i64;
  Entrances = AI_FindEntrances(&vectorValue, results, 32);
  Scr_MakeArray(scrContext);
  v3 = Entrances;
  if ( (int)Entrances > 0 )
  {
    v4 = 0i64;
    do
    {
      v5 = results[v4];
      if ( v5 == 0xFFFF )
      {
        v6 = NULL;
      }
      else
      {
        if ( v5 >= g_path.actualNodeCount )
        {
          LODWORD(v10) = g_path.actualNodeCount;
          LODWORD(v9) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        v6 = &pathData.nodes[v5];
      }
      v7 = ScriptContext_Server();
      v8 = Path_ConvertNodeToIndex(v6);
      Scr_AddEntityNum(v7, v8, ENTITY_CLASS_PATHNODE);
      Scr_AddArray(scrContext);
      ++v4;
    }
    while ( v4 < v3 );
  }
}

/*
==============
Scr_FreePathnode
==============
*/
void Scr_FreePathnode(pathnode_t *node)
{
  int v1; 
  __int64 i; 
  int v4; 
  const char *GameType; 
  int v6; 
  bool v7; 
  const char *v8; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  const char *v13; 
  int v14; 
  int v15; 
  const char *v16; 
  int v17; 
  unsigned __int16 number; 
  unsigned __int16 v19; 
  gentity_s *ent; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  scrContext_t *v23; 
  unsigned __int16 v24; 
  __int64 v25; 
  __int64 v26; 

  v1 = 0;
  for ( i = 0i64; ; ++i )
  {
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( BG_BotSystemEnabled() )
    {
      GameType = SV_GameMP_GetGameType();
      v6 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
      if ( !v6 )
      {
        v6 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
        if ( !v6 )
          v6 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
      }
      v4 = (v6 != 0) + 1;
    }
    else
    {
      v4 = 1;
    }
    if ( v1 >= v4 )
      break;
    if ( BG_BotSystemEnabled() )
    {
      v8 = SV_GameMP_GetGameType();
      v9 = *(unsigned __int8 *)v8 - (unsigned __int8)aBr_2[0];
      if ( !v9 )
      {
        v9 = *((unsigned __int8 *)v8 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v9 )
          v9 = *((unsigned __int8 *)v8 + 2) - (unsigned __int8)aBr_2[2];
      }
      v7 = v9 == 0;
    }
    else
    {
      v7 = 1;
    }
    v10 = i;
    v11 = v1;
    if ( v7 )
      v10 = 0i64;
    if ( v7 )
      v11 = 0;
    if ( !node )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
    }
    if ( BG_BotSystemEnabled() )
    {
      v13 = SV_GameMP_GetGameType();
      v14 = *(unsigned __int8 *)v13 - (unsigned __int8)aBr_2[0];
      if ( !v14 )
      {
        v14 = *((unsigned __int8 *)v13 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v14 )
          v14 = *((unsigned __int8 *)v13 + 2) - (unsigned __int8)aBr_2[2];
      }
      v12 = (v14 != 0) + 1;
    }
    else
    {
      v12 = 1;
    }
    if ( v11 >= v12 )
    {
      if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
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
      LODWORD(v26) = v15;
      LODWORD(v25) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    number = node->dynamic.pOwners[v10].number;
    if ( number )
    {
      if ( !level.sentients[number - 1].ent )
      {
        LODWORD(v26) = number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 136, ASSERT_TYPE_ASSERT, "( ( !number || level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( !number || level.sentients[number - 1].ent )", v26) )
          __debugbreak();
      }
      v19 = node->dynamic.pOwners[v10].number;
      if ( v19 )
      {
        ent = level.sentients[v19 - 1].ent;
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v21 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
        v22 = (v21 >> 63) + v21;
        if ( (unsigned int)v22 >= 0x800 )
        {
          LODWORD(v26) = 2048;
          LODWORD(v25) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        v22 = (__int16)v22;
        if ( (unsigned int)(__int16)v22 >= 0x800 )
        {
          LODWORD(v26) = 2048;
          LODWORD(v25) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v22].r.isInUse != g_entityIsInUse[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v22] )
        {
          LODWORD(v26) = node->dynamic.pOwners[v10].number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 137, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v26) )
            __debugbreak();
        }
        if ( node->dynamic.pOwners[v10].number )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1259, ASSERT_TYPE_ASSERT, "(!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined())", (const char *)&queryFormat, "!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined()") )
            __debugbreak();
        }
      }
    }
    ++v1;
  }
  v23 = ScriptContext_Server();
  v24 = Path_ConvertNodeToIndex(node);
  Scr_FreeEntityNum(v23, v24, ENTITY_CLASS_PATHNODE);
}

/*
==============
Scr_GetAllNodes
==============
*/
void Scr_GetAllNodes(scrContext_t *scrContext)
{
  unsigned int v2; 
  unsigned __int16 i; 
  const pathnode_t *v4; 
  scrContext_t *v5; 
  unsigned __int16 v6; 

  v2 = g_path.actualNodeCount - pathData.zoneCount;
  Scr_MakeArray(scrContext);
  for ( i = 0; i < v2; ++i )
  {
    if ( Path_NodeValid(i) )
    {
      v4 = &pathData.nodes[i];
      v5 = ScriptContext_Server();
      v6 = Path_ConvertNodeToIndex(v4);
      Scr_AddEntityNum(v5, v6, ENTITY_CLASS_PATHNODE);
      Scr_AddArray(scrContext);
    }
  }
}

/*
==============
Scr_GetClosestNodeInSight
==============
*/
void Scr_GetClosestNodeInSight(scrContext_t *scrContext)
{
  const pathnode_t *v2; 
  scrContext_t *v3; 
  unsigned __int16 v4; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  v2 = Path_NearestNodeForLineOfSight(&vectorValue, 33685521, NULL);
  if ( v2 )
  {
    v3 = ScriptContext_Server();
    v4 = Path_ConvertNodeToIndex(v2);
    Scr_AddEntityNum(v3, v4, ENTITY_CLASS_PATHNODE);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
Scr_GetIsLOSDataFileLoaded
==============
*/
void Scr_GetIsLOSDataFileLoaded(scrContext_t *scrContext)
{
  bool IsDataLoaded; 

  IsDataLoaded = LOSPrecomputeSystem::IsDataLoaded(&g_losPrecomputeData);
  Scr_AddBool(scrContext, IsDataLoaded);
}

/*
==============
Scr_GetLinkedNodes
==============
*/
void Scr_GetLinkedNodes(scrContext_t *scrContext)
{
  pathnode_t *Pathnode; 
  int v3; 
  __int64 v4; 
  const pathnode_t *v5; 
  scrContext_t *v6; 
  unsigned __int16 v7; 

  Pathnode = Scr_GetPathnode(scrContext, 0);
  Scr_MakeArray(scrContext);
  v3 = 0;
  if ( Pathnode->constant.totalLinkCount )
  {
    v4 = 0i64;
    do
    {
      v5 = &pathData.nodes[Pathnode->constant.Links[v4].nodeNum];
      v6 = ScriptContext_Server();
      v7 = Path_ConvertNodeToIndex(v5);
      Scr_AddEntityNum(v6, v7, ENTITY_CLASS_PATHNODE);
      Scr_AddArray(scrContext);
      ++v4;
      ++v3;
    }
    while ( v3 < Pathnode->constant.totalLinkCount );
  }
}

/*
==============
Scr_GetNearNodeListForSightToPathNodeCheck
==============
*/
void Scr_GetNearNodeListForSightToPathNodeCheck(scrContext_t *scrContext, gentity_s *const pEntity)
{
  unsigned int v8; 
  __int64 v9; 
  __int64 v11; 
  signed int v12; 
  const pathnode_t *v13; 
  scrContext_t *v14; 
  unsigned __int16 v15; 
  unsigned int pathNodeListOutCount[4]; 
  unsigned __int16 pathNodeIndexListOut[512]; 

  __asm { vmovaps [rsp+498h+var_48], xmm6 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmovaps xmm6, xmm0 }
  memset_0(pathNodeIndexListOut, 0, sizeof(pathNodeIndexListOut));
  __asm { vmovaps xmm1, xmm6; maxRadius }
  GetPathNodeListForSightToPathNodeCheck(&pEntity->r.currentOrigin, *(const float *)&_XMM1, pathNodeIndexListOut, 0x200ui64, pathNodeListOutCount);
  Scr_MakeArray(scrContext);
  v8 = pathNodeListOutCount[0];
  v9 = 0i64;
  __asm { vmovaps xmm6, [rsp+498h+var_48] }
  if ( pathNodeListOutCount[0] )
  {
    do
    {
      v11 = pathNodeIndexListOut[v9];
      v12 = g_path.actualNodeCount - pathData.zoneCount;
      if ( Path_ConvertNodeToIndex(&pathData.nodes[v11]) >= v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4370, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( &pathData.nodes[ pathNodeIndexList[i] ] ) < Path_NodeCount())", (const char *)&queryFormat, "Path_ConvertNodeToIndex( &pathData.nodes[ pathNodeIndexList[i] ] ) < Path_NodeCount()") )
      {
        __debugbreak();
        LOWORD(v11) = pathNodeIndexListOut[v9];
      }
      v13 = &pathData.nodes[(unsigned __int16)v11];
      v14 = ScriptContext_Server();
      v15 = Path_ConvertNodeToIndex(v13);
      Scr_AddEntityNum(v14, v15, ENTITY_CLASS_PATHNODE);
      Scr_AddArray(scrContext);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < v8 );
  }
}

/*
==============
Scr_GetNode
==============
*/
void Scr_GetNode(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  const char *String; 
  int Offset; 
  __int64 v5; 
  __int64 v6; 
  pathnode_t *nodes; 
  const pathnode_t *v8; 
  unsigned __int16 v9; 
  int v10; 
  scrContext_t *v11; 
  unsigned __int16 v12; 

  ConstString = Scr_GetConstString(scrContext, 0);
  String = Scr_GetString(scrContext, 1u);
  Offset = Scr_GetOffset(scrContext, ENTITY_CLASS_PATHNODE, String);
  v5 = Offset;
  if ( Offset >= 0 )
  {
    if ( (unsigned int)Offset >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3011, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( fields ) ) + 0 ) - 1 )", "offset doesn't index ARRAY_COUNT( fields ) - 1\n\t%i not in [0, %i)", Offset, 12) )
      __debugbreak();
    v6 = v5;
    if ( fields_2[v5].type != F_STRING )
      Scr_ParamError(COM_ERR_2469, scrContext, 1u, "key is not internally a string");
    nodes = pathData.nodes;
    v8 = NULL;
    if ( pathData.nodes != &pathData.nodes[g_path.actualNodeCount] )
    {
      do
      {
        v9 = Path_ConvertNodeToIndex(nodes);
        if ( Path_NodeValid(v9) )
        {
          v10 = fields_2[v6].getter == Path_GetParentName ? GetParentNameFromParentIndex(nodes) : *(unsigned int *)((char *)&nodes->constant.spawnflags + fields_2[v6].ofs);
          if ( v10 && v10 == ConstString )
          {
            if ( v8 )
              Scr_Error(COM_ERR_2470, scrContext, "getnode used with more than one node");
            v8 = nodes;
          }
        }
        ++nodes;
      }
      while ( nodes != &pathData.nodes[g_path.actualNodeCount] );
      if ( v8 )
      {
        v11 = ScriptContext_Server();
        v12 = Path_ConvertNodeToIndex(v8);
        Scr_AddEntityNum(v11, v12, ENTITY_CLASS_PATHNODE);
      }
    }
  }
}

/*
==============
Scr_GetNodeArray
==============
*/
void Scr_GetNodeArray(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  const char *String; 
  int Offset; 
  __int64 v5; 
  const char *v6; 
  __int64 v7; 
  pathnode_t *i; 
  unsigned __int16 v9; 
  int ParentNameFromParentIndex; 
  scrContext_t *v11; 
  unsigned __int16 v12; 
  int v13; 
  int v14; 

  ConstString = Scr_GetConstString(scrContext, 0);
  String = Scr_GetString(scrContext, 1u);
  Offset = Scr_GetOffset(scrContext, ENTITY_CLASS_PATHNODE, String);
  v5 = Offset;
  if ( Offset < 0 )
  {
    v6 = j_va("key '%s' does not internally belong to nodes", String);
    Scr_ParamError(COM_ERR_2471, scrContext, 1u, v6);
  }
  if ( (unsigned int)v5 >= 0xC )
  {
    v14 = 12;
    v13 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3075, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( fields ) ) + 0 ) - 1 )", "offset doesn't index ARRAY_COUNT( fields ) - 1\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v7 = v5;
  if ( fields_2[v5].type != F_STRING )
    Scr_ParamError(COM_ERR_2472, scrContext, 1u, "key is not internally a string");
  Scr_MakeArray(scrContext);
  for ( i = pathData.nodes; i != &pathData.nodes[g_path.actualNodeCount]; ++i )
  {
    v9 = Path_ConvertNodeToIndex(i);
    if ( Path_NodeValid(v9) )
    {
      if ( fields_2[v7].getter == Path_GetParentName )
        ParentNameFromParentIndex = GetParentNameFromParentIndex(i);
      else
        ParentNameFromParentIndex = *(unsigned int *)((char *)&i->constant.spawnflags + fields_2[v7].ofs);
      if ( ParentNameFromParentIndex )
      {
        if ( ParentNameFromParentIndex == ConstString )
        {
          v11 = ScriptContext_Server();
          v12 = Path_ConvertNodeToIndex(i);
          Scr_AddEntityNum(v11, v12, ENTITY_CLASS_PATHNODE);
          Scr_AddArray(scrContext);
        }
      }
    }
  }
}

/*
==============
Scr_GetNodeByIndex
==============
*/
void Scr_GetNodeByIndex(scrContext_t *scrContext)
{
  int Int; 
  unsigned __int16 v2; 
  const pathnode_t *v3; 
  scrContext_t *v4; 
  unsigned __int16 v5; 

  Int = Scr_GetInt(scrContext, 0);
  v2 = truncate_cast<unsigned short,int>(Int);
  if ( Path_NodeValid(v2) )
  {
    v3 = Path_ConvertIndexToNode(v2);
    v4 = ScriptContext_Server();
    v5 = Path_ConvertNodeToIndex(v3);
    Scr_AddEntityNum(v4, v5, ENTITY_CLASS_PATHNODE);
  }
}

/*
==============
Scr_GetNodeCount
==============
*/
void Scr_GetNodeCount(scrContext_t *scrContext)
{
  Scr_AddInt(scrContext, g_path.actualNodeCount - pathData.zoneCount);
}

/*
==============
Scr_GetNodeIndex
==============
*/
void Scr_GetNodeIndex(scrContext_t *scrContext)
{
  const pathnode_t *Pathnode; 
  unsigned __int16 v3; 

  Pathnode = Scr_GetPathnode(scrContext, 0);
  v3 = Path_ConvertNodeToIndex(Pathnode);
  Scr_AddInt(scrContext, v3);
}

/*
==============
Scr_GetNodeOwner
==============
*/
void Scr_GetNodeOwner(scrContext_t *scrContext)
{
  const pathnode_t *Pathnode; 
  SentientHandle *v3; 
  sentient_s *v4; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Pathnode = Scr_GetPathnode(scrContext, 0);
    if ( Path_NodeMaxNumTeamOwners(Pathnode) <= 1 )
    {
      v3 = (SentientHandle *)Path_NodeOwnerSentHandleConst(Pathnode, 0);
      if ( SentientHandle::isDefined(v3) )
      {
        v4 = SentientHandle::sentient(v3);
        GScr_AddEntity(v4->ent);
      }
    }
    else
    {
      Scr_Error(COM_ERR_5296, scrContext, "GetNodeOwner needs to be modified to work with node team ownership");
    }
  }
  else
  {
    Scr_Error(COM_ERR_5295, scrContext, "illegal call to GetNodeOwner()");
  }
}

/*
==============
Scr_GetNodeZone
==============
*/
void Scr_GetNodeZone(scrContext_t *scrContext)
{
  const pathnode_t *Pathnode; 
  unsigned __int16 v3; 
  int v4; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3554, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  if ( pathData.zoneCount > 0 )
  {
    Pathnode = Scr_GetPathnode(scrContext, 0);
    if ( !Pathnode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3563, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( pathData.pathZones )
    {
      v3 = Path_ConvertNodeToIndex(Pathnode);
      v4 = Path_NodeZoneFromIndex(v3);
      if ( v4 != 255 )
        Scr_AddInt(scrContext, v4);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2477, scrContext, "Invalid call to GetNodeZone() in map without zones");
  }
}

/*
==============
Scr_GetNodesInRadius
==============
*/
void Scr_GetNodesInRadius(scrContext_t *scrContext)
{
  GetNodesInRadius(scrContext, 0);
}

/*
==============
Scr_GetNodesInRadiusSorted
==============
*/
void Scr_GetNodesInRadiusSorted(scrContext_t *scrContext)
{
  GetNodesInRadius(scrContext, 1);
}

/*
==============
Scr_GetNodesInTrigger
==============
*/
void Scr_GetNodesInTrigger(scrContext_t *scrContext)
{
  unsigned int v6; 
  const gentity_s *Entity; 
  bool v8; 
  unsigned __int16 v10; 
  unsigned int v11; 
  gentity_s *Parent; 
  unsigned int Instance; 
  int v47; 
  scrContext_t *v48; 
  unsigned __int16 v49; 
  __int64 v54; 
  __int64 v55; 
  vec3_t pos; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 

  v6 = g_path.actualNodeCount - pathData.zoneCount;
  Entity = GScr_GetEntity(0);
  v8 = 0;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) )
    v8 = Scr_GetInt(scrContext, 1u) != 0;
  Scr_MakeArray(scrContext);
  _RDI = NULL;
  v10 = 0;
  if ( v6 )
  {
    v11 = 0;
    __asm
    {
      vmovaps [rsp+100h+var_30], xmm6
      vmovaps [rsp+100h+var_40], xmm7
      vmovaps [rsp+100h+var_50], xmm8
      vmovaps [rsp+100h+var_60], xmm9
    }
    do
    {
      if ( Path_NodeValid(v10) )
      {
        if ( v10 != 0xFFFF )
        {
          if ( v11 >= g_path.actualNodeCount )
          {
            LODWORD(v55) = g_path.actualNodeCount;
            LODWORD(v54) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v54, v55) )
              __debugbreak();
          }
          _RDI = &pathData.nodes[v10];
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+20h]
          vmovss  dword ptr [rbp+57h+pos], xmm0
          vmovss  xmm1, dword ptr [rdi+24h]
          vmovss  dword ptr [rbp+57h+pos+4], xmm1
          vmovss  xmm0, dword ptr [rdi+28h]
          vmovss  dword ptr [rbp+57h+pos+8], xmm0
        }
        Parent = pathnode_t::GetParent(_RDI);
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          __asm
          {
            vmovss  xmm2, dword ptr [rbp+57h+pos]
            vmulss  xmm7, xmm2, dword ptr [rbp+57h+axis+4]
            vmulss  xmm8, xmm2, dword ptr [rbp+57h+axis+8]
            vmovss  xmm6, dword ptr [rbp+57h+pos+4]
            vmulss  xmm2, xmm2, dword ptr [rbp+57h+axis]
            vmovss  xmm5, dword ptr [rbp+57h+pos+8]
            vmulss  xmm3, xmm6, dword ptr [rbp+57h+axis+0Ch]
            vmulss  xmm1, xmm5, dword ptr [rbp+57h+axis+18h]
            vmulss  xmm0, xmm5, dword ptr [rbp+57h+axis+1Ch]
            vmulss  xmm9, xmm6, dword ptr [rbp+57h+axis+14h]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vaddss  xmm3, xmm2, dword ptr [rbx+130h]
            vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+10h]
            vmulss  xmm2, xmm5, dword ptr [rbp+57h+axis+20h]
            vmovss  dword ptr [rbp+57h+pos], xmm3
            vaddss  xmm3, xmm1, xmm7
            vaddss  xmm1, xmm3, xmm0
            vaddss  xmm3, xmm1, dword ptr [rbx+134h]
            vaddss  xmm1, xmm8, xmm9
            vaddss  xmm2, xmm2, xmm1
            vmovss  dword ptr [rbp+57h+pos+4], xmm3
            vaddss  xmm0, xmm2, dword ptr [rbx+138h]
            vmovss  dword ptr [rbp+57h+pos+8], xmm0
          }
        }
        Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, Entity);
        if ( v8 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:?playerBox@@3UBounds@@B.midPoint; Bounds const playerBox
            vaddss  xmm1, xmm0, dword ptr [rbp+57h+pos]
            vmovss  xmm2, dword ptr cs:?playerBox@@3UBounds@@B.midPoint+4; Bounds const playerBox
            vaddss  xmm0, xmm2, dword ptr [rbp+57h+pos+4]
            vmovss  dword ptr [rbp+57h+bounds.midPoint+4], xmm0
            vmovss  xmm0, dword ptr cs:?playerBox@@3UBounds@@B.halfSize; Bounds const playerBox
            vmovss  dword ptr [rbp+57h+bounds.midPoint], xmm1
            vmovss  xmm1, dword ptr [rbp+57h+pos+8]
            vaddss  xmm2, xmm1, dword ptr cs:?playerBox@@3UBounds@@B.midPoint+8; Bounds const playerBox
            vmovss  xmm1, dword ptr cs:?playerBox@@3UBounds@@B.halfSize+4; Bounds const playerBox
            vmovss  dword ptr [rbp+57h+bounds.halfSize], xmm0
            vmovss  xmm0, dword ptr cs:?playerBox@@3UBounds@@B.halfSize+8; Bounds const playerBox
            vmovss  dword ptr [rbp+57h+bounds.halfSize+8], xmm0
            vmovss  dword ptr [rbp+57h+bounds.midPoint+8], xmm2
            vmovss  dword ptr [rbp+57h+bounds.halfSize+4], xmm1
          }
          v47 = PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, Instance, Entity);
        }
        else
        {
          v47 = PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pos, Instance, Entity);
        }
        if ( v47 )
        {
          v48 = ScriptContext_Server();
          v49 = Path_ConvertNodeToIndex(_RDI);
          Scr_AddEntityNum(v48, v49, ENTITY_CLASS_PATHNODE);
          Scr_AddArray(scrContext);
        }
        _RDI = NULL;
      }
      v11 = ++v10;
    }
    while ( v10 < v6 );
    __asm
    {
      vmovaps xmm9, [rsp+100h+var_60]
      vmovaps xmm8, [rsp+100h+var_50]
      vmovaps xmm7, [rsp+100h+var_40]
      vmovaps xmm6, [rsp+100h+var_30]
    }
  }
}

/*
==============
Scr_GetNodesOnPath
==============
*/
void Scr_GetNodesOnPath(scrContext_t *scrContext)
{
  __int64 v2; 
  unsigned __int16 *v3; 
  __int64 v4; 
  unsigned __int16 *p_iNodeNum; 
  unsigned __int16 v6; 
  const pathnode_t *v7; 
  char wPathLen; 
  int v9; 
  unsigned __int16 *v10; 
  const char *v11; 
  scrContext_t *v12; 
  unsigned __int16 v13; 
  __int64 traceMask; 
  __int64 v15; 
  path_t pPath; 
  vec3_t end; 
  vec3_t vectorValue; 

  if ( Scr_GetNumParam(scrContext) < 2 )
  {
    Scr_Error(COM_ERR_2475, scrContext, "GetNodesOnPath() requires vectors <start> and <end>");
    return;
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &end);
  Path_Begin(&pPath);
  if ( !FindSimplePath(&pPath, &vectorValue, &end, NULL, NULL, 33685521) )
    goto LABEL_27;
  v2 = pPath.wPathLen - 1;
  if ( pPath.wPathLen - 1 < 0 )
  {
LABEL_8:
    Scr_MakeArray(scrContext);
    v4 = pPath.wPathLen - 1;
    if ( pPath.wPathLen - 1 >= 0 )
    {
      p_iNodeNum = &pPath.pts[v4].iNodeNum;
      do
      {
        v6 = *p_iNodeNum;
        if ( !Path_NodeValid(*p_iNodeNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3483, ASSERT_TYPE_ASSERT, "(Path_NodeValid( nodeNum ))", (const char *)&queryFormat, "Path_NodeValid( nodeNum )") )
          __debugbreak();
        if ( v6 == 0xFFFF )
        {
          v7 = NULL;
        }
        else
        {
          if ( v6 >= g_path.actualNodeCount )
          {
            LODWORD(v15) = g_path.actualNodeCount;
            LODWORD(traceMask) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", traceMask, v15) )
              __debugbreak();
          }
          v7 = &pathData.nodes[v6];
          if ( v7 )
            goto LABEL_26;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3486, ASSERT_TYPE_ASSERT, "(currentNode)", (const char *)&queryFormat, "currentNode") )
          __debugbreak();
LABEL_26:
        v12 = ScriptContext_Server();
        v13 = Path_ConvertNodeToIndex(v7);
        Scr_AddEntityNum(v12, v13, ENTITY_CLASS_PATHNODE);
        Scr_AddArray(scrContext);
        p_iNodeNum -= 14;
        --v4;
      }
      while ( v4 >= 0 );
    }
LABEL_27:
    Path_Clear(&pPath);
    return;
  }
  v3 = &pPath.pts[v2].iNodeNum;
  while ( Path_NodeValid(*v3) )
  {
    v3 -= 14;
    if ( --v2 < 0 )
      goto LABEL_8;
  }
  wPathLen = pPath.wPathLen;
  v9 = pPath.wPathLen - 1;
  if ( v9 >= 0 )
  {
    v10 = &pPath.pts[v9].iNodeNum;
    do
    {
      Com_Printf(18, "newPath.pts[%i].iNodeNum = %i\n", (unsigned int)v9--, *v10);
      v10 -= 14;
    }
    while ( v9 >= 0 );
    wPathLen = pPath.wPathLen;
  }
  v11 = j_va("GetNodesOnPath() found an invalid node in the newPath of length %i, see array output above.\n", (unsigned int)wPathLen);
  Scr_Error(COM_ERR_6131, scrContext, v11);
}

/*
==============
Scr_GetPathnode
==============
*/
pathnode_t *Scr_GetPathnode(scrContext_t *scrContext, unsigned int index)
{
  scr_entref_t EntityRef; 
  unsigned __int16 v5; 

  EntityRef = Scr_GetEntityRef(scrContext, index);
  if ( EntityRef.entclass == ENTITY_CLASS_PATHNODE )
  {
    v5 = truncate_cast<unsigned short,unsigned int>(EntityRef.entnum);
    if ( !Path_NodeValid(v5) && (!pathData.usePathExtraData || (signed int)(g_path.actualNodeCount - pathData.zoneCount) > v5 || v5 > (signed int)(g_path.actualNodeCount - 1)) )
      Scr_Error(COM_ERR_2523, scrContext, "GetPathnode: called on despawned node.");
    return Path_ConvertIndexToNode(v5);
  }
  else
  {
    Scr_ParamError(COM_ERR_2524, scrContext, index, "not a pathnode");
    return 0i64;
  }
}

/*
==============
Scr_GetPathnodeAllowNull
==============
*/
pathnode_t *Scr_GetPathnodeAllowNull(scrContext_t *scrContext, unsigned int index)
{
  scr_entref_t EntityRef; 
  unsigned __int16 v5; 

  if ( Scr_GetType(scrContext, index) == VAR_UNDEFINED )
    return 0i64;
  EntityRef = Scr_GetEntityRef(scrContext, index);
  if ( EntityRef.entclass != ENTITY_CLASS_PATHNODE )
  {
    Scr_ParamError(COM_ERR_2526, scrContext, index, "not a pathnode");
    return 0i64;
  }
  v5 = truncate_cast<unsigned short,unsigned int>(EntityRef.entnum);
  if ( !Path_NodeValid(v5) && (!pathData.usePathExtraData || (signed int)(g_path.actualNodeCount - pathData.zoneCount) > v5 || v5 > (signed int)(g_path.actualNodeCount - 1)) )
    Scr_Error(COM_ERR_2525, scrContext, "GetPathnode: called on despawned node.");
  return Path_ConvertIndexToNode(v5);
}

/*
==============
Scr_GetPathnodeField
==============
*/
void Scr_GetPathnodeField(scrContext_t *scrContext, int entnum, int offset)
{
  __int64 v3; 
  __int64 v5; 
  unsigned __int8 *v6; 
  void (__fastcall *getter)(scrContext_t *, pathnode_t *, int); 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v3 = offset;
  v5 = entnum;
  if ( (unsigned int)offset >= 0xC )
  {
    v11 = 12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2018, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( fields ) ) + 0 ) - 1 )", "offset doesn't index ARRAY_COUNT( fields ) - 1\n\t%i not in [0, %i)", offset, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= g_path.actualNodeCount )
  {
    LODWORD(v10) = g_path.actualNodeCount;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2019, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( g_path.actualNodeCount )", "entnum doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  v6 = (unsigned __int8 *)&pathData.nodes[v5];
  getter = fields_2[v3].getter;
  if ( getter )
    getter(scrContext, (pathnode_t *)v6, v3);
  else
    Scr_GetGenericField(scrContext, v6, fields_2[v3].type, fields_2[v3].ofs);
}

/*
==============
Scr_GetRandomNodeDestination
==============
*/
void Scr_GetRandomNodeDestination(scrContext_t *scrContext)
{
  vec3_t nonBotOverrideAngles; 
  vec3_t vectorValue; 
  vec3_t goalOut; 

  if ( Scr_GetNumParam(scrContext) >= 2 && Scr_GetType(scrContext, 0) && Scr_GetType(scrContext, 1u) )
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    Scr_GetVector(scrContext, 1u, &nonBotOverrideAngles);
    if ( SV_BotFindRandomGoal(NULL, &vectorValue, &nonBotOverrideAngles, &goalOut) )
      Scr_AddVector(scrContext, goalOut.v);
  }
}

/*
==============
Scr_GetZoneCount
==============
*/
void Scr_GetZoneCount(scrContext_t *scrContext)
{
  Scr_AddInt(scrContext, pathData.zoneCount);
}

/*
==============
Scr_GetZoneNearest
==============
*/
void Scr_GetZoneNearest(scrContext_t *scrContext)
{
  bool v3; 
  const Bounds *v4; 
  const pathnode_t *v5; 
  unsigned __int16 v7; 
  int v8; 
  int returnCount; 
  NearestNodeInput pInput; 
  vec3_t vectorValue; 

  if ( pathData.zoneCount > 0 )
  {
    if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3523, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
      __debugbreak();
    Scr_GetVector(scrContext, 0, &vectorValue);
    __asm { vmovss  xmm0, cs:__real@43400000 }
    pInput.typeFlags = -2;
    pInput.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
    __asm { vmovss  [rsp+98h+pInput.fMaxDist], xmm0 }
    pInput.entNum = 2047;
    *(_WORD *)&pInput.bAllowCrouch = 257;
    pInput.bAllowFailedUnuseable = 1;
    pInput.vOrigin = &vectorValue;
    pInput.traceMask = 33685521;
    pInput.blockPlanes = NULL;
    v3 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE);
    v4 = &actorBox;
    if ( v3 )
      v4 = NULL;
    pInput.baseBounds = v4;
    v5 = Path_NearestNodeExtended(&pInput, g_nearestNodes, 64, &returnCount, 0);
    if ( v5 )
      goto LABEL_9;
    __asm { vmovss  xmm1, cs:__real@44fa0000; fMaxDist }
    v5 = Path_NearestNodeByDistanceOnly(&vectorValue, *(float *)&_XMM1);
    if ( v5 )
    {
LABEL_9:
      if ( pathData.pathZones )
      {
        v7 = Path_ConvertNodeToIndex(v5);
        v8 = Path_NodeZoneFromIndex(v7);
        if ( v8 != 255 )
          Scr_AddInt(scrContext, v8);
      }
    }
  }
}

/*
==============
Scr_GetZoneNodeForIndex
==============
*/
void Scr_GetZoneNodeForIndex(scrContext_t *scrContext)
{
  int Int; 
  const pathnode_t *v3; 
  scrContext_t *v4; 
  unsigned __int16 v5; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3854, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  if ( pathData.zoneCount > 0 )
  {
    Int = Scr_GetInt(scrContext, 0);
    if ( Int == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3863, ASSERT_TYPE_ASSERT, "( zone != 255 )", (const char *)&queryFormat, "zone != PATH_INVALID_ZONE") )
      __debugbreak();
    v3 = Path_ConvertZoneIndexToZone(Int);
    v4 = ScriptContext_Server();
    v5 = Path_ConvertNodeToIndex(v3);
    Scr_AddEntityNum(v4, v5, ENTITY_CLASS_PATHNODE);
  }
  else
  {
    Scr_Error(COM_ERR_2484, scrContext, "Invalid call to GetZoneNodeForIndex() in map without zones");
  }
}

/*
==============
Scr_GetZoneNodes
==============
*/
void Scr_GetZoneNodes(scrContext_t *scrContext)
{
  int zoneCount; 
  int Int; 
  int v4; 
  int i; 
  pathnode_t *v6; 
  pathnode_t *pNextOpen; 
  pathnode_t *v8; 
  unsigned __int16 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  unsigned __int16 nodeNum; 
  pathnode_t *v16; 
  unsigned __int16 v17; 
  unsigned int v18; 
  char v19; 
  unsigned int v20; 
  const pathnode_t *v21; 
  scrContext_t *v22; 
  unsigned __int16 v23; 
  const char *v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  signed int v28; 
  __int64 v30[4]; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3652, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  zoneCount = pathData.zoneCount;
  v28 = g_path.actualNodeCount - pathData.zoneCount;
  if ( pathData.zoneCount > 0 )
  {
    Int = Scr_GetInt(scrContext, 0);
    if ( Int == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3664, ASSERT_TYPE_ASSERT, "( zone != 255 )", (const char *)&queryFormat, "zone != PATH_INVALID_ZONE") )
      __debugbreak();
    if ( Scr_GetNumParam(scrContext) <= 1 )
      v4 = 0;
    else
      v4 = Scr_GetInt(scrContext, 1u);
    v27 = v4;
    if ( Int < 0 || Int >= zoneCount )
    {
      v24 = j_va("Invalid zone for GetZoneNodes(zone:%d, maxSteps:%d)", (unsigned int)Int, (unsigned int)v4);
      Scr_Error(COM_ERR_2481, scrContext, v24);
    }
    else
    {
      for ( i = 0; i < zoneCount; v6->transient.iSearchFrame = -1 )
      {
        v6 = Path_ConvertZoneIndexToZone(i++);
        *(_QWORD *)&v6->transient.iSearchFrame = 0i64;
        v6->transient.pNextOpen = NULL;
        v6->transient.pPrevOpen = NULL;
        v6->transient.pParent = NULL;
        *(_QWORD *)&v6->transient.fCost = 0i64;
        *(_QWORD *)&v6->transient.nodeCost = 0i64;
      }
      pNextOpen = Path_ConvertZoneIndexToZone(Int);
      if ( !pNextOpen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3685, ASSERT_TYPE_ASSERT, "( nodeCur )", (const char *)&queryFormat, "nodeCur") )
        __debugbreak();
      pNextOpen->transient.iSearchFrame = v4;
      memset(v30, 0, sizeof(v30));
      v8 = pNextOpen;
      do
      {
        if ( pathData.pathZones )
        {
          v9 = Path_ConvertNodeToIndex(pNextOpen);
          v10 = Path_NodeZoneFromIndex(v9);
        }
        else
        {
          v10 = 255;
        }
        v11 = v10 / 8;
        v12 = v10 % 8;
        if ( (unsigned int)(v10 / 8) >= 0x20 )
        {
          LODWORD(v26) = 32;
          LODWORD(v25) = v10 / 8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3694, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCurZone / 8 ) < (unsigned)( ( ( 256 ) / 8 ) )", "nodeCurZone / 8 doesn't index BOT_ZONE_STACK_VISIT_MAX\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        *((_BYTE *)v30 + v11) |= 1 << v12;
        if ( v4 < 0 || pNextOpen->transient.iSearchFrame >= 1 )
        {
          v13 = 0;
          if ( pNextOpen->dynamic.wLinkCount > 0 )
          {
            v14 = 0i64;
            do
            {
              nodeNum = pNextOpen->constant.Links[v14].nodeNum;
              if ( nodeNum == 0xFFFF )
              {
                v16 = NULL;
              }
              else
              {
                if ( nodeNum >= g_path.actualNodeCount )
                {
                  LODWORD(v26) = g_path.actualNodeCount;
                  LODWORD(v25) = nodeNum;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v25, v26) )
                    __debugbreak();
                }
                v16 = &pathData.nodes[nodeNum];
              }
              if ( v16->transient.iSearchFrame == -1 )
              {
                v16->transient.iSearchFrame = pNextOpen->transient.iSearchFrame - 1;
                v8->transient.pNextOpen = v16;
                v8 = v16;
              }
              ++v13;
              ++v14;
            }
            while ( v13 < pNextOpen->dynamic.wLinkCount );
            v4 = v27;
          }
        }
        pNextOpen = pNextOpen->transient.pNextOpen;
      }
      while ( pNextOpen );
      Scr_MakeArray(scrContext);
      v17 = 0;
      if ( v28 > 0 )
      {
        v18 = 0;
        do
        {
          if ( pathData.pathZones )
          {
            if ( v18 >= pathData.zonesBytes )
            {
              LODWORD(v26) = pathData.zonesBytes;
              LODWORD(v25) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8510, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.zonesBytes )", "nodeIndex doesn't index pathData.zonesBytes\n\t%i not in [0, %i)", v25, v26) )
                __debugbreak();
            }
            v19 = pathData.pathZones[v18] % 8u;
            v20 = pathData.pathZones[v18] / 8u;
            if ( v20 >= 0x20 )
            {
              LODWORD(v26) = 32;
              LODWORD(v25) = pathData.pathZones[v18] / 8u;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3719, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCurZone / 8 ) < (unsigned)( ( ( 256 ) / 8 ) )", "nodeCurZone / 8 doesn't index BOT_ZONE_STACK_VISIT_MAX\n\t%i not in [0, %i)", v25, v26) )
                __debugbreak();
            }
          }
          else
          {
            v19 = 7;
            v20 = 31;
          }
          if ( (*((_BYTE *)v30 + (int)v20) & (unsigned __int8)(1 << v19)) != 0 )
          {
            if ( v17 == 0xFFFF )
            {
              v21 = NULL;
            }
            else
            {
              if ( v18 >= g_path.actualNodeCount )
              {
                LODWORD(v26) = g_path.actualNodeCount;
                LODWORD(v25) = v18;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v25, v26) )
                  __debugbreak();
              }
              v21 = &pathData.nodes[v17];
            }
            v22 = ScriptContext_Server();
            v23 = Path_ConvertNodeToIndex(v21);
            Scr_AddEntityNum(v22, v23, ENTITY_CLASS_PATHNODE);
            Scr_AddArray(scrContext);
          }
          v18 = ++v17;
        }
        while ( v17 < v28 );
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_2480, scrContext, "Invalid call to GetZoneNodes() in map without zones");
  }
}

/*
==============
Scr_GetZoneNodesByDist
==============
*/
void Scr_GetZoneNodesByDist(scrContext_t *scrContext)
{
  int zoneCount; 
  int Int; 
  int v8; 
  int v9; 
  pathnode_t *v10; 
  pathnode_t *v13; 
  unsigned __int16 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  unsigned __int8 v20; 
  int v21; 
  __int64 v22; 
  unsigned __int16 nodeNum; 
  bool v24; 
  __int64 v26; 
  unsigned __int16 v30; 
  __int64 v31; 
  char v32; 
  unsigned int v33; 
  const pathnode_t *v34; 
  scrContext_t *v35; 
  unsigned __int16 v36; 
  const char *v40; 
  __int64 v41; 
  __int64 v42; 
  int v43; 
  signed int v44; 
  __int64 v46[4]; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3756, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  zoneCount = pathData.zoneCount;
  v44 = g_path.actualNodeCount - pathData.zoneCount;
  if ( pathData.zoneCount > 0 )
  {
    __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
    Int = Scr_GetInt(scrContext, 0);
    if ( Int == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3768, ASSERT_TYPE_ASSERT, "( zone != 255 )", (const char *)&queryFormat, "zone != PATH_INVALID_ZONE") )
      __debugbreak();
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm { vmovaps xmm6, xmm0 }
    if ( Int < 0 || Int >= zoneCount )
    {
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      v40 = j_va("Invalid zone for GetZoneNodesByDist(zone:%d, dist:%f)", (unsigned int)Int, _R8);
      Scr_Error(COM_ERR_2483, scrContext, v40);
    }
    else
    {
      __asm { vmovaps [rsp+0C8h+var_48], xmm7 }
      v8 = 0;
      if ( Scr_GetNumParam(scrContext) <= 2 )
        v9 = 0;
      else
        v9 = Scr_GetInt(scrContext, 2u);
      v43 = v9;
      if ( zoneCount > 0 )
      {
        do
        {
          v10 = Path_ConvertZoneIndexToZone(v8++);
          *(_QWORD *)&v10->transient.iSearchFrame = 0i64;
          v10->transient.pNextOpen = NULL;
          v10->transient.pPrevOpen = NULL;
          v10->transient.pParent = NULL;
          *(_QWORD *)&v10->transient.fCost = 0i64;
          *(_QWORD *)&v10->transient.nodeCost = 0i64;
          v10->transient.fCost = 1.1754944e-38;
        }
        while ( v8 < zoneCount );
      }
      _RBX = Path_ConvertZoneIndexToZone(Int);
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3791, ASSERT_TYPE_ASSERT, "( nodeCur )", (const char *)&queryFormat, "nodeCur") )
        __debugbreak();
      __asm
      {
        vmovss  dword ptr [rbx+0B0h], xmm6
        vmovss  xmm6, cs:__real@00800000
      }
      memset(v46, 0, sizeof(v46));
      v13 = _RBX;
      __asm { vxorps  xmm7, xmm7, xmm7 }
      do
      {
        if ( v9 )
        {
          if ( pathData.pathZones )
          {
            v15 = Path_ConvertNodeToIndex(_RBX);
            v16 = Path_NodeZoneFromIndex(v15);
          }
          else
          {
            v16 = 255;
          }
          v17 = v16 / 8;
          v18 = v16 % 8;
          if ( (unsigned int)(v16 / 8) >= 0x20 )
          {
            LODWORD(v42) = 32;
            LODWORD(v41) = v16 / 8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3802, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCurZone / 8 ) < (unsigned)( ( ( 256 ) / 8 ) )", "nodeCurZone / 8 doesn't index BOT_ZONE_STACK_VISIT_MAX\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          v19 = *((unsigned __int8 *)v46 + v17);
          v20 = _bittestandset(&v19, v18);
          __asm { vcomiss xmm7, dword ptr [rbx+0B0h] }
          *((_BYTE *)v46 + v17) = v19;
          if ( v20 )
          {
            v21 = 0;
            if ( _RBX->dynamic.wLinkCount > 0 )
            {
              v22 = 0i64;
              do
              {
                nodeNum = _RBX->constant.Links[v22].nodeNum;
                v24 = nodeNum == 0xFFFF;
                if ( nodeNum == 0xFFFF )
                {
                  _RCX = NULL;
                }
                else
                {
                  if ( nodeNum >= g_path.actualNodeCount )
                  {
                    LODWORD(v42) = g_path.actualNodeCount;
                    LODWORD(v41) = nodeNum;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v41, v42) )
                      __debugbreak();
                  }
                  v26 = nodeNum;
                  v24 = &pathData.nodes[v26] == NULL;
                  _RCX = &pathData.nodes[v26];
                }
                __asm { vucomiss xmm6, dword ptr [rcx+0B0h] }
                if ( v24 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+0B0h]
                    vsubss  xmm1, xmm0, dword ptr [rsi+rax]
                    vmovss  dword ptr [rcx+0B0h], xmm1
                  }
                  v13->transient.pNextOpen = _RCX;
                  v13 = _RCX;
                }
                ++v21;
                ++v22;
              }
              while ( v21 < _RBX->dynamic.wLinkCount );
              v9 = v43;
            }
          }
        }
        else
        {
          __asm { vcomiss xmm7, dword ptr [rbx+0B0h] }
        }
        _RBX = _RBX->transient.pNextOpen;
      }
      while ( _RBX );
      Scr_MakeArray(scrContext);
      __asm { vmovaps xmm7, [rsp+0C8h+var_48] }
      v30 = 0;
      if ( v44 > 0 )
      {
        v31 = 0i64;
        do
        {
          if ( pathData.pathZones )
          {
            if ( (unsigned int)v31 >= pathData.zonesBytes )
            {
              LODWORD(v42) = pathData.zonesBytes;
              LODWORD(v41) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8510, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.zonesBytes )", "nodeIndex doesn't index pathData.zonesBytes\n\t%i not in [0, %i)", v41, v42) )
                __debugbreak();
            }
            v32 = pathData.pathZones[v31] % 8u;
            v33 = pathData.pathZones[v31] / 8u;
            if ( v33 >= 0x20 )
            {
              LODWORD(v42) = 32;
              LODWORD(v41) = pathData.pathZones[v31] / 8u;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3828, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCurZone / 8 ) < (unsigned)( ( ( 256 ) / 8 ) )", "nodeCurZone / 8 doesn't index BOT_ZONE_STACK_VISIT_MAX\n\t%i not in [0, %i)", v41, v42) )
                __debugbreak();
            }
          }
          else
          {
            v32 = 7;
            v33 = 31;
          }
          if ( (*((_BYTE *)v46 + (int)v33) & (unsigned __int8)(1 << v32)) != 0 )
          {
            if ( v30 == 0xFFFF )
            {
              v34 = NULL;
            }
            else
            {
              if ( (unsigned int)v31 >= g_path.actualNodeCount )
              {
                LODWORD(v42) = g_path.actualNodeCount;
                LODWORD(v41) = v31;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v41, v42) )
                  __debugbreak();
              }
              v34 = &pathData.nodes[v30];
            }
            v35 = ScriptContext_Server();
            v36 = Path_ConvertNodeToIndex(v34);
            Scr_AddEntityNum(v35, v36, ENTITY_CLASS_PATHNODE);
            Scr_AddArray(scrContext);
          }
          v31 = ++v30;
        }
        while ( v30 < v44 );
      }
    }
    __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
  }
  else
  {
    Scr_Error(COM_ERR_2482, scrContext, "Invalid call to GetZoneNodesByDist() in map without zones");
  }
}

/*
==============
Scr_GetZoneOrigin
==============
*/
void Scr_GetZoneOrigin(scrContext_t *scrContext)
{
  const char *v2; 
  ComErrorCode v3; 
  int Int; 
  pathnode_t *v5; 
  vec3_t pos; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3598, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  if ( pathData.zoneCount <= 0 )
  {
    v2 = "Invalid call to GetZoneOrigin() in map without zones";
    v3 = COM_ERR_2478;
LABEL_13:
    Scr_Error(v3, scrContext, v2);
    return;
  }
  Int = Scr_GetInt(scrContext, 0);
  if ( Int < 0 || Int >= pathData.zoneCount )
  {
    v2 = j_va("Invalid zone for GetZoneOrigin(zone:%d)", (unsigned int)Int);
    v3 = COM_ERR_2479;
    goto LABEL_13;
  }
  v5 = Path_ConvertZoneIndexToZone(Int);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3618, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  pathnode_t::GetPos(v5, &pos);
  Scr_AddVector(scrContext, pos.v);
}

/*
==============
Scr_GetZonePath
==============
*/
void Scr_GetZonePath(scrContext_t *scrContext)
{
  int Int; 
  pathnode_t *v3; 
  unsigned int v4; 
  const char *v5; 
  int v6; 
  pathnode_t *v7; 
  unsigned int v8; 
  const char *v9; 
  int v10; 
  unsigned __int16 *p_iNodeNum; 
  int v12; 
  vec3_t end; 
  vec3_t pos; 
  path_t pPath; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3891, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  if ( pathData.zoneCount > 0 )
  {
    if ( Scr_GetNumParam(scrContext) >= 2 )
    {
      Int = Scr_GetInt(scrContext, 0);
      v3 = Path_ConvertZoneIndexToZone(Int);
      if ( v3 )
      {
        v6 = Scr_GetInt(scrContext, 1u);
        v7 = Path_ConvertZoneIndexToZone(v6);
        if ( v7 )
        {
          Path_Begin(&pPath);
          pathnode_t::GetPos(v3, &pos);
          pathnode_t::GetPos(v7, &end);
          if ( FindSimplePath(&pPath, &pos, &end, v3, v7, 0) )
          {
            Scr_MakeArray(scrContext);
            v10 = pPath.wPathLen - 1;
            if ( v10 >= 0 )
            {
              p_iNodeNum = &pPath.pts[v10].iNodeNum;
              do
              {
                v12 = Path_NodeZoneFromIndex(*p_iNodeNum);
                if ( v12 == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3935, ASSERT_TYPE_ASSERT, "( currentNodeZone != 255 )", (const char *)&queryFormat, "currentNodeZone != PATH_INVALID_ZONE") )
                  __debugbreak();
                Scr_AddInt(scrContext, v12);
                Scr_AddArray(scrContext);
                p_iNodeNum -= 14;
                --v10;
              }
              while ( v10 >= 0 );
            }
          }
          Path_Clear(&pPath);
        }
        else
        {
          v8 = Scr_GetInt(scrContext, 1u);
          v9 = j_va("GetZonePath(): Invalid <zone_index_end> %d", v8);
          Scr_Error(COM_ERR_2488, scrContext, v9);
        }
      }
      else
      {
        v4 = Scr_GetInt(scrContext, 0);
        v5 = j_va("GetZonePath(): Invalid <zone_index_start> %d", v4);
        Scr_Error(COM_ERR_2487, scrContext, v5);
      }
    }
    else
    {
      Scr_Error(COM_ERR_2486, scrContext, "GetZonePath() requires <zone_index_start> and <zone_index_end>");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2485, scrContext, "Invalid call to GetZonePath() in map without zones");
  }
}

/*
==============
Scr_IsNodeOccupied
==============
*/
void Scr_IsNodeOccupied(scrContext_t *scrContext)
{
  const pathnode_t *Pathnode; 
  int FreeTime; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Pathnode = Scr_GetPathnode(scrContext, 0);
    if ( Path_NodeMaxNumTeamOwners(Pathnode) <= 1 )
    {
      FreeTime = Path_NodeGetFreeTime(Pathnode, 0);
      Scr_AddBool(scrContext, level.time < FreeTime);
    }
    else
    {
      Scr_Error(COM_ERR_5294, scrContext, "IsNodeOccupied needs to be modified to work with node team ownership");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2455, scrContext, "illegal call to isnodeoccupied()");
  }
}

/*
==============
Scr_NodeExposedToSky
==============
*/
void Scr_NodeExposedToSky(scrContext_t *scrContext)
{
  const pathnode_t *Pathnode; 
  int v3; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3999, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  Pathnode = Scr_GetPathnode(scrContext, 0);
  if ( !Pathnode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4002, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v3 = 1;
  if ( Scr_GetNumParam(scrContext) >= 2 && Scr_GetType(scrContext, 1u) && Scr_GetInt(scrContext, 1u) )
  {
    v4 = Path_ConvertNodeToIndex(Pathnode);
    if ( Path_IsNodeIndexExposedSkyBase(v4, 1) )
      goto LABEL_14;
    goto LABEL_13;
  }
  v5 = Path_ConvertNodeToIndex(Pathnode);
  if ( !Path_IsNodeIndexExposedSkyBase(v5, 0) )
LABEL_13:
    v3 = 0;
LABEL_14:
  Scr_AddInt(scrContext, v3);
}

/*
==============
Scr_NodeToEntitySightTest
==============
*/
void Scr_NodeToEntitySightTest(scrContext_t *scrContext)
{
  signed __int64 v1; 
  void *v8; 
  scrContext_t *v9; 
  gentity_s *Entity; 
  unsigned int v11; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v18; 
  __int64 v21; 
  signed int v22; 
  gentity_s *Parent; 
  char v29; 
  bool v30; 
  unsigned int FirstSibling; 
  unsigned int NextSibling; 
  unsigned int Object; 
  scr_entref_t EntityIdRef; 
  unsigned int v58; 
  const pathnode_t *v59; 
  const pathnode_t **v60; 
  unsigned int v61; 
  const pathnode_t **v62; 
  unsigned int v63; 
  unsigned int v64; 
  scr_entref_t v65; 
  unsigned int v66; 
  const pathnode_t *v67; 
  const pathnode_t **v68; 
  unsigned int v69; 
  const pathnode_t **v70; 
  __int64 maxNodes; 
  __int64 typeFlags; 
  unsigned int ArrayObject; 
  unsigned int parentId; 
  tmat33_t<vec3_t> axis; 
  __int128 v80[512]; 
  __int128 v81[512]; 
  pathsort_s nodes; 
  char v88; 

  v8 = alloca(v1);
  __asm { vmovaps [rsp+6108h+var_78], xmm10 }
  v9 = scrContext;
  __asm
  {
    vmovaps [rsp+6108h+var_38], xmm6
    vmovaps [rsp+6108h+var_68], xmm9
  }
  Entity = GScr_GetEntity(0);
  ArrayObject = BGScr_Main_GetArrayObject(v9, 1u);
  v11 = ArrayObject;
  parentId = BGScr_Main_GetArrayObject(v9, 2u);
  *(double *)&_XMM0 = Scr_GetFloat(v9, 3u);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(v9, 4u);
  __asm { vmovss  xmm3, cs:__real@43800000; maxHeight }
  v14 = 0;
  v15 = 0;
  __asm
  {
    vmovaps xmm2, xmm6; maxDist
    vmulss  xmm9, xmm0, xmm0
  }
  v18 = Path_NodesInCylinder(&Entity->r.currentOrigin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, &nodes, 512, -1, 0);
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( v18 )
  {
    __asm { vmovaps [rsp+6108h+var_48], xmm7 }
    _RDI = &nodes;
    __asm { vmovaps [rsp+6108h+var_58], xmm8 }
    v21 = v18;
    do
    {
      v22 = g_path.actualNodeCount - pathData.zoneCount;
      if ( Path_ConvertNodeToIndex(_RDI->node) >= v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4070, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( nodesAll[i].node ) < Path_NodeCount())", (const char *)&queryFormat, "Path_ConvertNodeToIndex( nodesAll[i].node ) < Path_NodeCount()") )
        __debugbreak();
      _RCX = _RDI->node;
      __asm
      {
        vmovss  xmm7, dword ptr [rcx+20h]
        vmovss  xmm6, dword ptr [rcx+24h]
        vmovss  xmm8, dword ptr [rcx+28h]
      }
      Parent = pathnode_t::GetParent(_RDI->node);
      __asm { vmovaps xmm4, xmm7 }
      v29 = 0;
      v30 = Parent == NULL;
      if ( Parent )
      {
        AnglesToAxis(&Parent->r.currentAngles, &axis);
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rsp+6108h+axis+0Ch]
          vmulss  xmm1, xmm7, dword ptr [rsp+6108h+axis]
          vmulss  xmm3, xmm7, dword ptr [rsp+6108h+axis+4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, dword ptr [rsp+6108h+axis+18h]
          vmulss  xmm0, xmm6, dword ptr [rsp+6108h+axis+10h]
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm4, xmm2, dword ptr [rbx+130h]
          vmulss  xmm1, xmm8, dword ptr [rsp+6108h+axis+1Ch]
          vaddss  xmm2, xmm3, xmm0
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm6, xmm2, dword ptr [rbx+134h]
        }
      }
      __asm { vcomiss xmm9, xmm10 }
      if ( v29 | v30 )
        goto LABEL_11;
      __asm
      {
        vsubss  xmm1, xmm4, dword ptr [r12+130h]
        vsubss  xmm0, xmm6, dword ptr [r12+134h]
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm9, xmm2
      }
      if ( v29 | v30 )
      {
LABEL_11:
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        _RAX = 2i64 * v15++;
        __asm { vmovups [rsp+rax*8+6108h+var_6088], xmm0 }
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        _RAX = 2i64 * v14++;
        __asm { vmovups [rsp+rax*8+6108h+var_4088], xmm0 }
      }
      ++_RDI;
      --v21;
    }
    while ( v21 );
    v9 = scrContext;
    v11 = ArrayObject;
    __asm
    {
      vmovaps xmm8, [rsp+6108h+var_58]
      vmovaps xmm7, [rsp+6108h+var_48]
    }
  }
  FirstSibling = FindFirstSibling(v9, v11);
  __asm { vmovaps xmm9, [rsp+6108h+var_68] }
  NextSibling = FirstSibling;
  __asm { vmovaps xmm6, [rsp+6108h+var_38] }
  if ( FirstSibling )
  {
    do
    {
      Object = FindObject(v9, NextSibling);
      if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4089, ASSERT_TYPE_ASSERT, "( objectIdPathNode )", (const char *)&queryFormat, "objectIdPathNode") )
        __debugbreak();
      if ( GetObjectType(v9, Object) == VAR_ENTITY )
      {
        EntityIdRef = Scr_GetEntityIdRef(v9, Object);
        if ( EntityIdRef.entclass != ENTITY_CLASS_PATHNODE )
          Scr_ParamError(COM_ERR_2494, v9, Object, "close list included an index that is not a pathnode");
        if ( EntityIdRef.entnum >= g_path.actualNodeCount - pathData.zoneCount )
        {
          LODWORD(typeFlags) = g_path.actualNodeCount - pathData.zoneCount;
          LODWORD(maxNodes) = EntityIdRef.entnum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4101, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", maxNodes, typeFlags) )
            __debugbreak();
        }
        v58 = 0;
        v59 = &pathData.nodes[EntityIdRef.entnum];
        if ( v15 )
        {
          v60 = (const pathnode_t **)v80;
          do
          {
            if ( Path_NodesVisible(v59, *v60) )
            {
              __asm { vmovss  xmm10, cs:__real@3f800000 }
              goto LABEL_57;
            }
            ++v58;
            v60 += 2;
          }
          while ( v58 < v15 );
        }
        v61 = 0;
        if ( v14 )
        {
          v62 = (const pathnode_t **)v81;
          do
          {
            if ( Path_NodesVisible(v59, *v62) )
              goto LABEL_35;
            ++v61;
            v62 += 2;
          }
          while ( v61 < v14 );
        }
      }
      NextSibling = FindNextSibling(v9, NextSibling);
    }
    while ( NextSibling );
  }
  v63 = FindFirstSibling(v9, parentId);
  if ( !v63 )
    goto LABEL_57;
  while ( 1 )
  {
    v64 = FindObject(v9, v63);
    if ( !v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4129, ASSERT_TYPE_ASSERT, "( objectIdPathNode )", (const char *)&queryFormat, "objectIdPathNode") )
      __debugbreak();
    if ( GetObjectType(v9, v64) != VAR_ENTITY )
      goto LABEL_54;
    v65 = Scr_GetEntityIdRef(v9, v64);
    if ( v65.entclass != ENTITY_CLASS_PATHNODE )
      Scr_ParamError(COM_ERR_2495, v9, v64, "far list included an index that is not a pathnode");
    if ( v65.entnum >= g_path.actualNodeCount - pathData.zoneCount )
    {
      LODWORD(typeFlags) = g_path.actualNodeCount - pathData.zoneCount;
      LODWORD(maxNodes) = v65.entnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4141, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", maxNodes, typeFlags) )
        __debugbreak();
    }
    v66 = 0;
    v67 = &pathData.nodes[v65.entnum];
    if ( v15 )
      break;
LABEL_50:
    v69 = 0;
    if ( v14 )
    {
      v70 = (const pathnode_t **)v81;
      while ( !Path_NodesVisible(v67, *v70) )
      {
        ++v69;
        v70 += 2;
        if ( v69 >= v14 )
          goto LABEL_54;
      }
      __asm { vmovss  xmm10, cs:__real@3e800000 }
      goto LABEL_57;
    }
LABEL_54:
    v63 = FindNextSibling(v9, v63);
    if ( !v63 )
      goto LABEL_57;
  }
  v68 = (const pathnode_t **)v80;
  while ( !Path_NodesVisible(v67, *v68) )
  {
    ++v66;
    v68 += 2;
    if ( v66 >= v15 )
      goto LABEL_50;
  }
LABEL_35:
  __asm { vmovss  xmm10, cs:__real@3f000000 }
LABEL_57:
  __asm { vmovaps xmm1, xmm10; value }
  Scr_AddFloat(v9, *(float *)&_XMM1);
  _R11 = &v88;
  __asm { vmovaps xmm10, xmmword ptr [r11-50h] }
}

/*
==============
Scr_NodesVisible
==============
*/
void Scr_NodesVisible(scrContext_t *scrContext)
{
  const pathnode_t *Pathnode; 
  pathnode_t *v3; 
  const pathnode_t *v4; 
  int v5; 

  if ( Scr_GetNumParam(scrContext) < 2 )
  {
    Scr_Error(COM_ERR_2473, scrContext, "NodesVisible() requires pathnodes nodeA and nodeB");
    Scr_AddBool(scrContext, 0);
    return;
  }
  Pathnode = Scr_GetPathnode(scrContext, 0);
  v3 = Scr_GetPathnode(scrContext, 1u);
  v4 = v3;
  if ( Pathnode && v3 )
  {
    if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetInt(scrContext, 2u) )
    {
      if ( !pathData.usePathExtraData )
      {
        Scr_Error(COM_ERR_5730, scrContext, "NodesVisible() with the <nopeek> option requires extra path data to be compiled for this map");
        return;
      }
      v5 = Path_NodesVisibleNoPeek(Pathnode, v4);
    }
    else
    {
      v5 = Path_NodesVisible(Pathnode, v4);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2474, scrContext, "NodesVisible() requires two valid pathnodes nodeA and nodeB");
    v5 = 0;
  }
  Scr_AddBool(scrContext, v5);
}

/*
==============
Scr_PathSightTest
==============
*/
void Scr_PathSightTest(scrContext_t *scrContext)
{
  unsigned int ArrayObject; 
  int v3; 
  unsigned int ArraySize; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int NextSibling; 
  unsigned int Object; 
  scr_entref_t EntityIdRef; 
  const pathnode_t *v10; 
  unsigned int FirstSibling; 
  unsigned int v12; 
  scr_entref_t v13; 
  __int64 v14; 
  __int64 v15; 

  ArrayObject = BGScr_Main_GetArrayObject(scrContext, 0);
  v3 = 1;
  ArraySize = GetArraySize(scrContext, ArrayObject);
  v5 = BGScr_Main_GetArrayObject(scrContext, 1u);
  v6 = GetArraySize(scrContext, v5);
  if ( ArraySize && v6 && (NextSibling = FindFirstSibling(scrContext, ArrayObject)) != 0 )
  {
    while ( 1 )
    {
      Object = FindObject(scrContext, NextSibling);
      if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4552, ASSERT_TYPE_ASSERT, "( objectId_A )", (const char *)&queryFormat, "objectId_A") )
        __debugbreak();
      if ( GetObjectType(scrContext, Object) == VAR_ENTITY )
      {
        EntityIdRef = Scr_GetEntityIdRef(scrContext, Object);
        if ( EntityIdRef.entclass != ENTITY_CLASS_PATHNODE )
          Scr_ParamError(COM_ERR_2504, scrContext, Object, "list A included an index that is not a pathnode");
        if ( EntityIdRef.entnum >= g_path.actualNodeCount - pathData.zoneCount )
        {
          LODWORD(v15) = g_path.actualNodeCount - pathData.zoneCount;
          LODWORD(v14) = EntityIdRef.entnum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4564, ASSERT_TYPE_ASSERT, "(unsigned)( entRef_A.entnum ) < (unsigned)( Path_NodeCount() )", "entRef_A.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v10 = &pathData.nodes[EntityIdRef.entnum];
        FirstSibling = FindFirstSibling(scrContext, v5);
        if ( FirstSibling )
          break;
      }
LABEL_25:
      NextSibling = FindNextSibling(scrContext, NextSibling);
      if ( !NextSibling )
        goto LABEL_26;
    }
    while ( 1 )
    {
      v12 = FindObject(scrContext, FirstSibling);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4570, ASSERT_TYPE_ASSERT, "( objectId_B )", (const char *)&queryFormat, "objectId_B") )
        __debugbreak();
      if ( GetObjectType(scrContext, v12) == VAR_ENTITY )
      {
        v13 = Scr_GetEntityIdRef(scrContext, v12);
        if ( v13.entclass != ENTITY_CLASS_PATHNODE )
          Scr_ParamError(COM_ERR_2505, scrContext, v12, "list B included an index that is not a pathnode");
        if ( v13.entnum >= g_path.actualNodeCount - pathData.zoneCount )
        {
          LODWORD(v15) = g_path.actualNodeCount - pathData.zoneCount;
          LODWORD(v14) = v13.entnum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4582, ASSERT_TYPE_ASSERT, "(unsigned)( entRef_B.entnum ) < (unsigned)( Path_NodeCount() )", "entRef_B.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( Path_NodesVisible(v10, &pathData.nodes[v13.entnum]) )
          break;
      }
      FirstSibling = FindNextSibling(scrContext, FirstSibling);
      if ( !FirstSibling )
        goto LABEL_25;
    }
  }
  else
  {
LABEL_26:
    v3 = 0;
  }
  Scr_AddBool(scrContext, v3);
}

/*
==============
Scr_PrecomputedLOSDataSightTest
==============
*/
void Scr_PrecomputedLOSDataSightTest(scrContext_t *scrContext)
{
  unsigned int ArrayObject; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int FirstSibling; 
  unsigned int Object; 
  scr_entref_t EntityIdRef; 
  unsigned __int16 v12; 
  __int64 v13; 
  unsigned int NextSibling; 
  unsigned int v15; 
  scr_entref_t v16; 
  unsigned __int16 MinimumValueBetweenNodeLists; 
  unsigned __int8 v18; 
  __int64 v31; 
  __int64 v32; 
  unsigned int v33; 
  unsigned __int16 pathNodeIndexListB[512]; 
  unsigned __int16 pathNodeIndexListA[4096]; 

  ArrayObject = BGScr_Main_GetArrayObject(scrContext, 0);
  v6 = BGScr_Main_GetArrayObject(scrContext, 1u);
  if ( GetArraySize(scrContext, ArrayObject) )
  {
    if ( GetArraySize(scrContext, v6) )
    {
      if ( LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData) )
      {
        if ( LOSPrecomputeSystem::IsDataLoaded(&g_losPrecomputeData) )
        {
          v7 = 0i64;
          __asm { vmovaps [rsp+24A8h+var_38], xmm6 }
          v8 = 0;
          v33 = 0;
          __asm { vmovaps [rsp+24A8h+var_48], xmm8 }
          memset_0(pathNodeIndexListA, 0, sizeof(pathNodeIndexListA));
          memset_0(pathNodeIndexListA, 0, 0x400ui64);
          memset_0(pathNodeIndexListB, 0, sizeof(pathNodeIndexListB));
          FirstSibling = FindFirstSibling(scrContext, ArrayObject);
          if ( FirstSibling )
          {
            do
            {
              Object = FindObject(scrContext, FirstSibling);
              if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4453, ASSERT_TYPE_ASSERT, "( objectIdPathNode )", (const char *)&queryFormat, "objectIdPathNode") )
                __debugbreak();
              if ( GetObjectType(scrContext, Object) == VAR_ENTITY )
              {
                EntityIdRef = Scr_GetEntityIdRef(scrContext, Object);
                if ( EntityIdRef.entclass != ENTITY_CLASS_PATHNODE )
                  Scr_ParamError(COM_ERR_2502, scrContext, Object, "entity path node list included an index that is not a pathnode");
                if ( EntityIdRef.entnum >= g_path.actualNodeCount - pathData.zoneCount )
                {
                  LODWORD(v32) = g_path.actualNodeCount - pathData.zoneCount;
                  LODWORD(v31) = EntityIdRef.entnum;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4465, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v31, v32) )
                    __debugbreak();
                }
                v12 = Path_ConvertNodeToIndex(&pathData.nodes[EntityIdRef.entnum]);
                v13 = v8++;
                pathNodeIndexListB[v13] = v12;
              }
              FirstSibling = FindNextSibling(scrContext, FirstSibling);
            }
            while ( FirstSibling );
            v33 = v8;
            v7 = 0i64;
          }
          NextSibling = FindFirstSibling(scrContext, v6);
          if ( NextSibling )
          {
            do
            {
              v15 = FindObject(scrContext, NextSibling);
              if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4480, ASSERT_TYPE_ASSERT, "( objectIdPathNode )", (const char *)&queryFormat, "objectIdPathNode") )
                __debugbreak();
              if ( GetObjectType(scrContext, v15) == VAR_ENTITY )
              {
                v16 = Scr_GetEntityIdRef(scrContext, v15);
                if ( v16.entclass != ENTITY_CLASS_PATHNODE )
                  Scr_ParamError(COM_ERR_2503, scrContext, v15, "spawn point path node list included an index that is not a pathnode");
                if ( v16.entnum >= g_path.actualNodeCount - pathData.zoneCount )
                {
                  LODWORD(v32) = g_path.actualNodeCount - pathData.zoneCount;
                  LODWORD(v31) = v16.entnum;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4492, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v31, v32) )
                    __debugbreak();
                }
                pathNodeIndexListA[v7] = Path_ConvertNodeToIndex(&pathData.nodes[v16.entnum]);
                v7 = (unsigned int)(v7 + 1);
              }
              NextSibling = FindNextSibling(scrContext, NextSibling);
            }
            while ( NextSibling );
            v8 = v33;
          }
          MinimumValueBetweenNodeLists = LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists(&g_losPrecomputeData, pathNodeIndexListA, v7, pathNodeIndexListB, v8);
          v18 = MinimumValueBetweenNodeLists;
          truncate_cast<unsigned char,int>(HIBYTE(MinimumValueBetweenNodeLists));
          __asm
          {
            vmovss  xmm6, cs:__real@437f0000
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vsubss  xmm0, xmm6, xmm0
            vmulss  xmm8, xmm0, cs:__real@3b808081
          }
          truncate_cast<unsigned char,int>(v18);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vsubss  xmm6, xmm6, xmm0
          }
          Scr_MakeArray(scrContext);
          __asm { vmulss  xmm1, xmm6, cs:__real@3b808081; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
          Scr_AddArray(scrContext);
          __asm { vmovaps xmm1, xmm8; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
          Scr_AddArray(scrContext);
          __asm
          {
            vmovaps xmm8, [rsp+24A8h+var_48]
            vmovaps xmm6, [rsp+24A8h+var_38]
          }
        }
        else
        {
          Scr_Error(COM_ERR_2501, scrContext, "precomputedlosdatatest requires a generated data file for LOS data, this map appears to not have one, script should call GetIsLOSDataFileLoaded before precomputedlosdatatest!");
        }
      }
      else
      {
        Scr_Error(COM_ERR_2500, scrContext, "precomputedlosdatatest requires the system to be enabled with dvar sv_usePrecomputedLOSData set via the playlist");
      }
    }
    else
    {
      Scr_Error(COM_ERR_2499, scrContext, "precomputedlosdatatest requires non empty node lists, this means a spawn point in the map has no path node nearby!");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2498, scrContext, "precomputedlosdatatest requires non empty node lists, this means a entity in the map has no path node nearby!");
  }
}

/*
==============
Scr_SetNodePriority
==============
*/
void Scr_SetNodePriority(scrContext_t *scrContext)
{
  pathnode_t *Pathnode; 
  int Int; 
  NodeTypeToName *v4; 
  int v5; 
  unsigned int v6; 
  const char **p_name; 
  __int64 v8; 
  unsigned int spawnflags; 

  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Pathnode = Scr_GetPathnode(scrContext, 0);
    Int = Scr_GetInt(scrContext, 1u);
    v4 = priorityAllowedNodes;
    v5 = Int;
    v6 = 0;
    while ( Pathnode->constant.type != v4->type )
    {
      ++v6;
      ++v4;
      if ( v6 >= 0xC )
      {
        Scr_Error(COM_ERR_2453, scrContext, "Cannot enable disable priority for this node type. Priority can only be set for :");
        p_name = &priorityAllowedNodes[0].name;
        v8 = 12i64;
        do
        {
          Scr_Error(COM_ERR_2454, scrContext, *p_name);
          p_name += 2;
          --v8;
        }
        while ( v8 );
        break;
      }
    }
    spawnflags = Pathnode->constant.spawnflags;
    if ( v5 )
      Pathnode->constant.spawnflags = spawnflags | 0x40;
    else
      Pathnode->constant.spawnflags = spawnflags & 0xFFFFFFBF;
  }
  else
  {
    Scr_Error(COM_ERR_2452, scrContext, "Illegal call to setnodepriority");
  }
}

/*
==============
Scr_SetPathnodeField
==============
*/
void Scr_SetPathnodeField(scrContext_t *scrContext, int entnum, int offset)
{
  __int64 v3; 
  const char *v6; 
  const char *v7; 

  v3 = offset;
  if ( (unsigned int)offset >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2006, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( fields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( fields ) - 1") )
    __debugbreak();
  if ( (unsigned int)entnum >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2007, ASSERT_TYPE_ASSERT, "((unsigned)entnum < 65535)", (const char *)&queryFormat, "(unsigned)entnum < PATH_MAX_NODES") )
    __debugbreak();
  v6 = SL_ConvertToString(*fields_2[v3].name);
  v7 = j_va("pathnode property '%s' is read-only", v6);
  Scr_Error(COM_ERR_2465, scrContext, v7);
}

/*
==============
Scr_SetTurretNode
==============
*/
void Scr_SetTurretNode(scrContext_t *scrContext)
{
  pathnode_t *Pathnode; 
  gentity_s *Entity; 

  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Pathnode = Scr_GetPathnode(scrContext, 0);
    if ( Pathnode->constant.type == 18 )
    {
      Entity = GScr_GetEntity(1u);
      if ( !Entity->turretHandle.m_objIndex )
        Scr_Error(COM_ERR_2458, scrContext, "Entity is not a turret");
      Pathnode->dynamic.turretEntNumber = truncate_cast<unsigned short,int>(Entity->s.number);
    }
    else
    {
      Scr_Error(COM_ERR_2457, scrContext, "Can only set arc angle for node_turret");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2456, scrContext, "Wrong number of arguments to setturretnode");
  }
}

/*
==============
Scr_SpawnCoverNode
==============
*/
void Scr_SpawnCoverNode(scrContext_t *scrContext)
{
  const char *String; 
  const char **v4; 
  int v5; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  const char *v16; 
  int NumParam; 
  unsigned int Int; 
  scr_string_t ConstString; 
  scr_string_t v20; 
  const char *v21; 
  char *v28; 
  unsigned __int16 v32; 
  const pathnode_t *v33; 
  scrContext_t *v34; 
  unsigned __int16 v35; 
  pathnode_t *v36; 
  const char *v37; 
  scr_string_t from; 
  vec3_t vectorValue; 
  vec3_t start; 
  vec3_t end; 
  vec3_t angles; 
  trace_t results; 

  from = 0;
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  String = Scr_GetString(scrContext, 2u);
  v4 = nodeStringTable;
  v5 = 0;
  while ( 2 )
  {
    v6 = *v4;
    v7 = 0x7FFFFFFFi64;
    v8 = String;
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = v6 - String;
    while ( 1 )
    {
      v10 = (unsigned __int8)v8[v9];
      v11 = v7;
      v12 = *(unsigned __int8 *)v8++;
      --v7;
      if ( !v11 )
      {
LABEL_17:
        v15 = v5;
        if ( v5 != -1 )
          goto LABEL_22;
        goto LABEL_21;
      }
      if ( v10 != v12 )
      {
        v13 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v13 = v10;
        v10 = v13;
        v14 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v14 = v12;
        if ( v10 != v14 )
          break;
      }
      if ( !v10 )
        goto LABEL_17;
    }
    ++v5;
    if ( (__int64)++v4 < (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_691 )
      continue;
    break;
  }
  v15 = -1;
LABEL_21:
  v16 = j_va("SpawnCoverNode: Unrecognized node type %s.", String);
  Scr_Error(COM_ERR_2461, scrContext, v16);
LABEL_22:
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam > 3 && Scr_GetType(scrContext, 3u) )
    Int = Scr_GetInt(scrContext, 3u);
  else
    Int = 0;
  if ( NumParam > 4 && Scr_GetType(scrContext, 4u) )
    ConstString = Scr_GetConstString(scrContext, 4u);
  else
    ConstString = 0;
  if ( NumParam > 5 && Scr_GetType(scrContext, 5u) )
    v20 = Scr_GetConstString(scrContext, 5u);
  else
    v20 = 0;
  if ( v15 == 16 && (NumParam <= 6 || (from = Scr_GetConstString(scrContext, 6u)) == 0) )
  {
    v21 = j_va("SpawnCoverNode: node type %s must have the 'animscript' parameter passed-in.", String);
    Scr_Error(COM_ERR_2462, scrContext, v21);
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+120h+vectorValue+8]
    vaddss  xmm0, xmm1, cs:__real@41400000
    vmovss  xmm3, dword ptr [rsp+120h+vectorValue]
    vmovss  xmm2, dword ptr [rsp+120h+vectorValue+4]
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vsubss  xmm0, xmm1, cs:__real@42100000
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm3
    vmovss  dword ptr [rbp+57h+start+4], xmm2
    vmovss  dword ptr [rbp+57h+end], xmm3
    vmovss  dword ptr [rbp+57h+end+4], xmm2
  }
  G_Main_TraceCapsule(&results, &start, &end, &actorBox, 2047, 131089);
  if ( results.startsolid || results.allsolid )
  {
    v37 = vtos(&vectorValue);
    Com_PrintError(16, "SpawnCoverNode: pos %s is inside a solid.", v37);
  }
  else
  {
    __asm { vmovaps xmmword ptr [rsp+120h+var_38+8], xmm6 }
    if ( ((1 << v15) & 0x1E300000) != 0 )
    {
      v32 = Path_SpawnNode(&vectorValue, &angles, v15, Int, ConstString, v20);
      if ( v32 != 0xFFFF )
      {
        v33 = Path_ConvertIndexToNode(v32);
        v34 = ScriptContext_Server();
        v35 = Path_ConvertNodeToIndex(v33);
        Scr_AddEntityNum(v34, v35, ENTITY_CLASS_PATHNODE);
        if ( v15 == 16 )
        {
          v36 = Path_ConvertIndexToNode(v32);
          Scr_SetString(&v36->constant.animscript, from);
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, [rbp+57h+results.fraction]
        vcomiss xmm6, cs:__real@3f800000
      }
      v28 = vtos(&vectorValue);
      __asm
      {
        vmovsd  xmm3, cs:__real@4042000000000000
        vmovq   r9, xmm3
      }
      Com_PrintError(16, "SpawnCoverNode: unable to find anything solid underneath pos %s within %.0f.", v28, _R9);
    }
    __asm { vmovaps xmm6, xmmword ptr [rsp+120h+var_38+8] }
  }
}

/*
==============
Scr_UnsetTurretNode
==============
*/
void Scr_UnsetTurretNode(scrContext_t *scrContext)
{
  pathnode_t *Pathnode; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Pathnode = Scr_GetPathnode(scrContext, 0);
    if ( Pathnode->constant.type == 18 )
      Pathnode->dynamic.turretEntNumber = -1;
    else
      Scr_Error(COM_ERR_2460, scrContext, "Can only do this call for node_turret");
  }
  else
  {
    Scr_Error(COM_ERR_2459, scrContext, " USAGE : Must have a node_turret as a parameter.");
  }
}

/*
==============
pathnode_t::SetWorldAngles
==============
*/
void pathnode_t::SetWorldAngles(pathnode_t *this, const vec3_t *worldAngles)
{
  gentity_s *Parent; 
  vec3_t angles; 
  vec4_t quat; 
  vec4_t v67; 
  vec4_t v68; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 

  _RBX = this;
  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    __asm
    {
      vmovaps [rsp+110h+var_10], xmm6
      vmovaps [rsp+110h+var_20], xmm7
      vmovaps [rsp+110h+var_30], xmm8
      vmovaps [rsp+110h+var_40], xmm9
      vmovaps [rsp+110h+var_50], xmm10
      vmovaps [rsp+110h+var_60], xmm11
      vmovaps [rsp+110h+var_70], xmm12
    }
    AnglesToQuat(&Parent->r.currentAngles, &quat);
    __asm
    {
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rsp+110h+quat]
      vmovss  xmm1, dword ptr [rsp+110h+quat+4]
      vmovss  xmm9, dword ptr [rsp+110h+quat+0Ch]
      vxorps  xmm10, xmm0, xmm2
      vmovss  xmm0, dword ptr [rsp+110h+quat+8]
      vxorps  xmm12, xmm0, xmm2
      vxorps  xmm11, xmm1, xmm2
    }
    AnglesToQuat(worldAngles, &v67);
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+110h+var_D0+0Ch]
      vmovss  xmm6, dword ptr [rsp+110h+var_D0]
      vmovss  xmm8, dword ptr [rsp+110h+var_D0+8]
      vmovss  xmm5, dword ptr [rsp+110h+var_D0+4]
      vmulss  xmm1, xmm7, xmm10
      vmulss  xmm0, xmm6, xmm9
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm11
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm5, xmm12
      vsubss  xmm1, xmm3, xmm0
      vmovss  dword ptr [rsp+110h+var_C0], xmm1
      vmulss  xmm0, xmm8, xmm10
      vmulss  xmm2, xmm5, xmm9
      vsubss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm7, xmm11
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm0, xmm6, xmm12
      vaddss  xmm2, xmm4, xmm0
      vmovss  dword ptr [rsp+110h+var_C0+4], xmm2
      vmulss  xmm0, xmm8, xmm9
      vmulss  xmm1, xmm5, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm11
      vsubss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm12
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm0, xmm6, xmm10
      vmulss  xmm1, xmm7, xmm9
      vmovss  dword ptr [rsp+110h+var_C0+8], xmm2
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm11
      vsubss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm8, xmm12
      vsubss  xmm2, xmm3, xmm0
      vmovss  dword ptr [rsp+110h+var_C0+0Ch], xmm2
    }
    QuatToAxis(&v68, &axis);
    AxisToAngles(&axis, &angles);
    __asm
    {
      vmovaps xmm12, [rsp+110h+var_70]
      vmovaps xmm11, [rsp+110h+var_60]
      vmovaps xmm10, [rsp+110h+var_50]
      vmovaps xmm9, [rsp+110h+var_40]
      vmovaps xmm8, [rsp+110h+var_30]
      vmovaps xmm7, [rsp+110h+var_20]
      vmovaps xmm6, [rsp+110h+var_10]
    }
    if ( ((1 << LOBYTE(_RBX->constant.type)) & 0x62700000) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+110h+angles]
        vmovss  xmm1, dword ptr [rsp+110h+angles+4]
        vmovss  dword ptr [rbx+2Ch], xmm0
        vmovss  xmm0, dword ptr [rsp+110h+angles+8]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+110h+angles+4]
        vmovss  xmm1, dword ptr [rsp+110h+axis]
        vmovss  dword ptr [rbx+2Ch], xmm0
        vmovss  xmm0, dword ptr [rsp+110h+axis+4]
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+34h], xmm0
      vmovss  dword ptr [rbx+30h], xmm1
    }
  }
  else if ( ((1 << LOBYTE(_RBX->constant.type)) & 0x62700000) != 0 )
  {
    _RBX->constant.yaw_orient.fLocalAngle = worldAngles->v[0];
    _RBX->constant.yaw_orient.localForward.v[0] = worldAngles->v[1];
    _RBX->constant.yaw_orient.localForward.v[1] = worldAngles->v[2];
  }
  else
  {
    _RBX->constant.yaw_orient.fLocalAngle = worldAngles->v[1];
    AngleVectors(worldAngles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+110h+forward]
      vmovss  xmm1, dword ptr [rsp+110h+forward+4]
      vmovss  dword ptr [rbx+30h], xmm0
      vmovss  dword ptr [rbx+34h], xmm1
    }
  }
}

/*
==============
pathnode_t::SetWorldPos
==============
*/
void pathnode_t::SetWorldPos(pathnode_t *this, const vec3_t *worldPos)
{
  vec3_t in1; 
  tmat33_t<vec3_t> mat; 

  _RDI = worldPos;
  _RBX = this;
  _RAX = pathnode_t::GetParent(this);
  __asm { vmovss  xmm0, dword ptr [rdi] }
  if ( _RAX )
  {
    __asm
    {
      vsubss  xmm0, xmm0, dword ptr [rax+130h]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm2, xmm1, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+68h+in1], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm1, xmm0, dword ptr [rax+138h]
      vmovss  dword ptr [rsp+68h+in1+4], xmm2
      vmovss  xmm2, dword ptr [rax+140h]
      vmovss  dword ptr [rsp+68h+in1+8], xmm1
      vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; degrees
    }
    MatrixRotationZ(&mat, *(float *)&_XMM1);
    MatrixTransformVector(&in1, &mat, &_RBX->constant.vLocalOrigin);
  }
  else
  {
    __asm { vmovss  dword ptr [rbx+20h], xmm0 }
    _RBX->constant.vLocalOrigin.v[1] = _RDI->v[1];
    _RBX->constant.vLocalOrigin.v[2] = _RDI->v[2];
  }
}

/*
==============
SpawnedNode_Dissociate
==============
*/
void SpawnedNode_Dissociate(unsigned __int16 nodeIndex)
{
  unsigned int maxSentients; 
  __int64 v3; 
  unsigned int v4; 
  pathnode_t *i; 
  sentient_s *v6; 
  __int64 v7; 
  __int64 v8; 
  actor_s *v9; 
  bool v10; 
  unsigned int j; 
  signed int v12; 
  __int64 v13; 
  const gentity_s *v14; 
  AICommonInterface *m_pAI; 
  unsigned int k; 
  const gentity_s *v17; 
  AICommonInterface *v18; 
  __int64 v19; 
  __int64 v20; 
  AICommonWrapper v21; 

  if ( nodeIndex >= pathData.nodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1816, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.nodeCount )", "nodeIndex doesn't index pathData.nodeCount\n\t%i not in [0, %i)", nodeIndex, pathData.nodeCount) )
    __debugbreak();
  maxSentients = level.maxSentients;
  v3 = nodeIndex;
  v4 = 0;
  for ( i = &pathData.nodes[v3]; v4 < maxSentients; ++v4 )
  {
    v6 = &level.sentients[v4];
    if ( v6->inuse )
    {
      Sentient_DissociateNode(v6, i);
      maxSentients = level.maxSentients;
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
  {
    v7 = 0i64;
    v8 = 38i64;
    do
    {
      v9 = &level.actors[v7];
      if ( level.actors[v7].inuse )
      {
        AIActorInterface::AIActorInterface(&v21.m_actorInterface);
        AIAgentInterface::AIAgentInterface(&v21.m_newAgentInterface);
        v10 = v9->ent == NULL;
        v21.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 41, ASSERT_TYPE_ASSERT, "( pActor->ent )", (const char *)&queryFormat, "pActor->ent") )
          __debugbreak();
        if ( !v9->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 42, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo )", (const char *)&queryFormat, "pActor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v21.m_actorInterface, v9);
        v21.m_botInterface.__vftable = (AIBotInterface_vtbl *)&v21;
        v21.m_actorInterface.DissociateNode((AICommonInterface *)&v21, i);
      }
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) )
  {
    for ( j = 0; (int)j < level.maxagents; ++j )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( j >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v20) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v19) = j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v12 = j + ComCharacterLimits::ms_gameData.m_clientCount;
      if ( j + ComCharacterLimits::ms_gameData.m_clientCount >= 0x800 )
      {
        LODWORD(v20) = 2048;
        LODWORD(v19) = j + ComCharacterLimits::ms_gameData.m_clientCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v13 = v12;
      if ( g_entities[v13].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v12] )
      {
        v14 = &g_entities[v13];
        if ( !g_entities[v13].agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1851, ASSERT_TYPE_ASSERT, "(pEnt->agent)", (const char *)&queryFormat, "pEnt->agent") )
          __debugbreak();
        AIActorInterface::AIActorInterface(&v21.m_actorInterface);
        AIAgentInterface::AIAgentInterface(&v21.m_newAgentInterface);
        v21.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        AICommonInterface::AICommonInterface(&v21.m_botInterface);
        v21.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
        AICommonInterface::AICommonInterface(&v21.m_botAgentInterface);
        v21.m_pAI = NULL;
        v21.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
        AICommonWrapper::Setup(&v21, v14);
        m_pAI = v21.m_pAI;
        if ( !v21.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1854, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        m_pAI->DissociateNode(m_pAI, i);
      }
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    for ( k = 0; k < level.maxclients; ++k )
    {
      if ( SV_BotIsBot(k) )
      {
        if ( k >= 0x800 )
        {
          LODWORD(v20) = 2048;
          LODWORD(v19) = k;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[k].r.isInUse != g_entityIsInUse[k] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[k] )
        {
          v17 = &g_entities[k];
          AIActorInterface::AIActorInterface(&v21.m_actorInterface);
          AIAgentInterface::AIAgentInterface(&v21.m_newAgentInterface);
          v21.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          AICommonInterface::AICommonInterface(&v21.m_botInterface);
          v21.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
          AICommonInterface::AICommonInterface(&v21.m_botAgentInterface);
          v21.m_pAI = NULL;
          v21.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
          AICommonWrapper::Setup(&v21, v17);
          v18 = v21.m_pAI;
          if ( !v21.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1869, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
            __debugbreak();
          v18->DissociateNode(v18, i);
        }
      }
    }
  }
}

/*
==============
TurretNode_GetAngles
==============
*/
void TurretNode_GetAngles(const pathnode_t *node, float *angleMin, float *angleMax)
{
  __int16 turretEntNumber; 
  gentity_s *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v14; 
  __int64 v15; 

  _RSI = angleMax;
  _R14 = angleMin;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1471, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1472, ASSERT_TYPE_ASSERT, "( angleMin )", (const char *)&queryFormat, "angleMin") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1473, ASSERT_TYPE_ASSERT, "( angleMax )", (const char *)&queryFormat, "angleMax") )
    __debugbreak();
  if ( node->constant.type != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1474, ASSERT_TYPE_ASSERT, "( node->constant.type == NODE_TURRET )", (const char *)&queryFormat, "node->constant.type == NODE_TURRET") )
    __debugbreak();
  turretEntNumber = node->dynamic.turretEntNumber;
  if ( turretEntNumber >= 0 )
  {
    if ( (unsigned __int16)turretEntNumber >= 0x800u )
    {
      LODWORD(v14) = turretEntNumber;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1483, ASSERT_TYPE_ASSERT, "(unsigned)( node->dynamic.turretEntNumber ) < (unsigned)( ( 2048 ) )", "node->dynamic.turretEntNumber doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, 2048) )
        __debugbreak();
    }
    v8 = g_entities;
    v9 = node->dynamic.turretEntNumber;
    if ( !g_entities[v9].turretHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
      __debugbreak();
    v10 = v8[v9].turretHandle.m_objIndex - 1;
    if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 226, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( (unsigned int)v10 >= 0x80 )
    {
      LODWORD(v15) = 128;
      LODWORD(v14) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 227, ASSERT_TYPE_ASSERT, "(unsigned)( turretIndex ) < (unsigned)( ( sizeof( *array_counter( ms_turretArray ) ) + 0 ) )", "turretIndex doesn't index ARRAY_COUNT( ms_turretArray )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !GTurret::ms_turretArray[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 228, ASSERT_TYPE_ASSERT, "( ms_turretArray[turretIndex] )", (const char *)&queryFormat, "ms_turretArray[turretIndex]") )
      __debugbreak();
    _RBX = GTurret::ms_turretArray[v10];
    __asm { vmovss  xmm0, dword ptr [rbx+20h]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [r14], xmm0
      vmovss  xmm0, dword ptr [rbx+28h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  dword ptr [rsi], xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@42340000 }
    *_R14 = 315.0;
    __asm { vmovss  dword ptr [rsi], xmm0 }
  }
}

/*
==============
pathnode_t::WorldifyPosFromParent
==============
*/
void pathnode_t::WorldifyPosFromParent(pathnode_t *this, vec3_t *pos)
{
  gentity_s *Parent; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 

  _RDI = pos;
  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    MatrixTransformVector(_RDI, &axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+out]
      vaddss  xmm1, xmm0, dword ptr [rbx+130h]
      vmovss  xmm2, dword ptr [rsp+68h+out+4]
      vmovss  dword ptr [rdi], xmm1
      vaddss  xmm0, xmm2, dword ptr [rbx+134h]
      vmovss  xmm1, dword ptr [rsp+68h+out+8]
      vmovss  dword ptr [rdi+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+138h]
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
}

/*
==============
WriteSpawnedPathNodes
==============
*/
void WriteSpawnedPathNodes(MemoryFile *memFile)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  pathnode_t *v4; 
  scr_string_t targetname; 
  const char *v6; 
  unsigned int p; 

  p = pathData.maxDynamicSpawnedNodeCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  v2 = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount) - LOWORD(pathData.maxDynamicSpawnedNodeCount);
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount) < 0 )
    v2 = 0;
  if ( pathData.maxDynamicSpawnedNodeCount > 0 )
  {
    v3 = v2;
    do
    {
      if ( Path_NodeValid(v3) )
      {
        LOBYTE(p) = 1;
        MemFile_WriteData(memFile, 1ui64, &p);
        v4 = &pathData.nodes[v3];
        MemFile_WriteData(memFile, 0xCui64, &v4->constant.vLocalOrigin);
        MemFile_WriteData(memFile, 0xCui64, &v4->constant.44);
        p = v4->constant.type;
        MemFile_WriteData(memFile, 4ui64, &p);
        p = v4->constant.spawnflags;
        MemFile_WriteData(memFile, 4ui64, &p);
        LOWORD(p) = v4->constant.parent.index;
        MemFile_WriteData(memFile, 2ui64, &p);
        targetname = v4->constant.targetname;
        if ( targetname )
        {
          v6 = SL_ConvertToString(targetname);
          MemFile_WriteCString(memFile, v6);
        }
        else
        {
          MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
        }
      }
      else
      {
        LOBYTE(p) = 0;
        MemFile_WriteData(memFile, 1ui64, &p);
      }
      ++v3;
    }
    while ( (unsigned __int16)(v3 - v2) < pathData.maxDynamicSpawnedNodeCount );
  }
}

