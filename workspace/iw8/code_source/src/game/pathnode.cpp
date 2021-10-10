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
  bool v10; 
  team_t v11; 
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
  v10 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v11 = TEAM_FOLLOWER;
  if ( v10 )
    v11 = TEAM_FOUR;
  pathFindInput.pPath->eTeam = v11;
  pathFindInput.pPath->iTraceMask = traceMask;
  pNodeFrom = pathFindInput.pNodeFrom;
  pathFindInput.useChokePoints = 0;
  if ( startNode )
    pNodeFrom = startNode;
  path->fLookaheadAmount = 0.0;
  pathFindInput.pNodeFrom = pNodeFrom;
  pNodeTo = pathFindInput.pNodeTo;
  pathFindInput.badplacePercent = 0.0;
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
  int v3; 
  scr_string_t *p_targetname; 
  char *(*spawnVars)[2]; 
  const char *v6; 
  const char *v7; 
  scr_string_t String; 
  scr_string_t *name; 
  node_field_t *v10; 
  unsigned int CanonicalString; 
  scrContext_t *v12; 
  unsigned int Field; 
  int v14; 
  unsigned __int16 v16; 
  __int64 v17; 
  VariableType type[8]; 
  float v19; 
  float v20; 
  char v21; 
  vec3_t pos; 

  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2220, ASSERT_TYPE_ASSERT, "(level.spawnVar.spawnVarsValid)", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  v3 = 0;
  if ( level.spawnVar.numSpawnVars > 0 )
  {
    p_targetname = &node->constant.targetname;
    spawnVars = level.spawnVar.spawnVars;
    do
    {
      v6 = (*spawnVars)[1];
      v7 = (*spawnVars)[0];
      PathNode_UpdateStringField("target", &node->constant.target, (*spawnVars)[0], v6);
      PathNode_UpdateStringField("targetname", p_targetname, v7, v6);
      PathNode_UpdateStringField("script_linkname", &node->constant.script_linkName, v7, v6);
      PathNode_UpdateStringField("script_noteworthy", &node->constant.script_noteworthy, v7, v6);
      PathNode_UpdateStringField("parentname", &node->constant.parent.name, v7, v6);
      if ( node->constant.parent.name )
        pathData.parentIndexResolved = 0;
      if ( ((1 << LOBYTE(node->constant.type)) & 0x62700000) == 0 && !I_stricmp(v7, "origin") && (node->constant.spawnflags & 0x4000) == 0 && !node->constant.parent.index )
      {
        pathnode_t::GetPos(node, &pos);
        if ( j_sscanf(v6, "%f %f %f", &v19, &v20, &v21) != 3 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA2C48, 457i64, v6);
        _XMM0 = LODWORD(v19);
        if ( (float)((float)(v19 - pos.v[0]) * (float)(v19 - pos.v[0])) > 0.010000001 || (_XMM0 = LODWORD(v20), (float)((float)(v20 - pos.v[1]) * (float)(v20 - pos.v[1])) > 0.010000001) )
          ++g_path.originErrors;
      }
      String = SL_FindString(v7);
      name = fields_2[0].name;
      v10 = fields_2;
      if ( fields_2[0].name )
      {
        while ( *name != String )
        {
          name = v10[1].name;
          ++v10;
          if ( !name )
            goto LABEL_20;
        }
        goto LABEL_33;
      }
LABEL_20:
      CanonicalString = SL_GetCanonicalString(v7);
      v12 = ScriptContext_Server();
      Field = Scr_FindField(v12, CanonicalString, type);
      if ( Field )
      {
        switch ( type[0] )
        {
          case VAR_STRING:
            Scr_AddString(v12, v6);
            break;
          case VAR_VECTOR:
            Scr_Error(COM_ERR_2468, v12, "G_SetPathnodeScriptVariable: vector is an unsupported script variable type for pathnodes");
            break;
          case VAR_FLOAT:
            *(double *)&_XMM0 = atof(v6);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
            Scr_AddFloat(v12, *(float *)&_XMM1);
            break;
          case VAR_INTEGER:
            v14 = atoi(v6);
            Scr_AddInt(v12, v14);
            break;
          default:
            LODWORD(v17) = (unsigned __int8)type[0];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2086, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_SetPathnodeScriptVariable: bad case %d", v17) )
              __debugbreak();
            goto LABEL_32;
        }
        v16 = Path_ConvertNodeToIndex(node);
        Scr_SetDynamicEntityField(v12, LOCAL_CLIENT_0, v16, ENTITY_CLASS_PATHNODE, Field);
      }
LABEL_32:
      p_targetname = &node->constant.targetname;
LABEL_33:
      ++v3;
      ++spawnVars;
    }
    while ( v3 < level.spawnVar.numSpawnVars );
  }
}

/*
==============
G_SpawnCoverNode
==============
*/
__int64 G_SpawnCoverNode(vec3_t *origin, const vec3_t *angles, int nodeType, unsigned int spawnflags, scr_string_t targetname, scr_string_t parentname, bool calledFromScript)
{
  float v7; 
  float v8; 
  float v9; 
  float fraction; 
  char *v15; 
  float v17; 
  float v18; 
  unsigned __int16 v19; 
  const pathnode_t *v20; 
  const char *v21; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  v7 = origin->v[2];
  v8 = origin->v[0];
  v9 = origin->v[1];
  start.v[2] = v7 + 12.0;
  end.v[2] = v7 - 36.0;
  start.v[0] = v8;
  start.v[1] = v9;
  end.v[0] = v8;
  end.v[1] = v9;
  G_Main_TraceCapsule(&results, &start, &end, &actorBox, 2047, 131089);
  if ( *(_WORD *)&results.allsolid )
  {
    v21 = vtos(origin);
    Com_PrintError(16, "SpawnCoverNode: pos %s is inside a solid.", v21);
    return 0xFFFFi64;
  }
  else
  {
    if ( ((1 << nodeType) & 0x1E300000) == 0 )
    {
      fraction = results.fraction;
      if ( results.fraction >= 1.0 && calledFromScript )
      {
        v15 = vtos(origin);
        Com_PrintError(16, "SpawnCoverNode: unable to find anything solid underneath pos %s within %.0f.", v15, DOUBLE_36_0);
        return 0xFFFFi64;
      }
      v17 = (float)(end.v[1] - start.v[1]) * results.fraction;
      v18 = end.v[2] - start.v[2];
      origin->v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      origin->v[1] = v17 + start.v[1];
      origin->v[2] = (float)(v18 * fraction) + start.v[2];
    }
    v19 = Path_SpawnNode(origin, angles, nodeType, spawnflags, targetname, parentname);
    if ( v19 != 0xFFFF && calledFromScript )
    {
      v20 = Path_ConvertIndexToNode(v19);
      Scr_AddPathnode(v20);
    }
    return v19;
  }
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
  pathnode_t *v2; 
  unsigned __int16 type; 
  unsigned int spawnflags; 
  __int16 v5; 
  __int64 v6; 
  __int64 v7; 
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
        v2 = &pathData.nodes[g_path.actualNodeCount++];
        if ( actualNodeCount + 1 > pathData.nodeCount )
        {
          if ( pathData.zoneCount > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2885, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_SpawnPathnodeDynamic(): Additional nodes may not be spawned when using node zones") )
            __debugbreak();
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
        if ( (v2->constant.spawnflags & 0x4000) != 0 )
          PrintPathNodeError(v2);
        G_ParsePathnodeScriptFields(v2);
        type = v2->constant.type;
        if ( ((1 << type) & 0x62700000) == 0 )
        {
          YawVectors(v2->constant.yaw_orient.fLocalAngle, &forward, NULL);
          v2->constant.yaw_orient.localForward.v[0] = forward.v[0];
          v2->constant.yaw_orient.localForward.v[1] = forward.v[1];
          type = v2->constant.type;
        }
        if ( type >= 0x20u )
        {
          LODWORD(v7) = 32;
          LODWORD(v6) = type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2910, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( NODE_NUMTYPES )", "type doesn't index NODE_NUMTYPES\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        if ( type == 18 )
        {
          v2->dynamic.turretEntNumber = -1;
        }
        else if ( type > 0x1Cu )
        {
          if ( type <= 0x1Eu )
          {
            g_path.qbUsingJumpNodes = 1;
          }
          else if ( type == 31 )
          {
            spawnflags = v2->constant.spawnflags;
            v5 = 0;
            if ( (v2->constant.spawnflags & 0x100000) != 0 )
            {
              v2->dynamic.turretEntNumber = 3;
            }
            else if ( (spawnflags & 0x200) != 0 )
            {
              v2->dynamic.turretEntNumber = 2;
            }
            else if ( (spawnflags & 0x400) != 0 || (spawnflags & 0x200000) != 0 )
            {
              v2->dynamic.turretEntNumber = 7;
            }
            else
            {
              if ( (spawnflags & 0x800) != 0 || (spawnflags & 0x400000) != 0 )
                v5 = 6;
              v2->dynamic.turretEntNumber = v5;
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
  return vector.v[1];
}

/*
==============
pathnode_t::GetAngles
==============
*/
void pathnode_t::GetAngles(pathnode_t *this, vec3_t *vector)
{
  float fLocalAngle; 
  float v4; 
  gentity_s *Parent; 
  float v6; 
  float v9; 
  float v10; 
  float v12; 
  float v13; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  fLocalAngle = this->constant.yaw_orient.fLocalAngle;
  if ( ((1 << LOBYTE(this->constant.type)) & 0x62700000) != 0 )
  {
    v4 = this->constant.yaw_orient.localForward.v[0];
    angles.v[0] = this->constant.yaw_orient.fLocalAngle;
    angles.v[2] = this->constant.yaw_orient.localForward.v[1];
    angles.v[1] = v4;
  }
  else
  {
    angles.v[0] = 0.0;
    angles.v[2] = 0.0;
    angles.v[1] = fLocalAngle;
  }
  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    AxisToAngles(&out, vector);
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v9 = vector->v[1] * 0.0027777778;
    v10 = (float)(vector->v[0] * 0.0027777778) - *(float *)&_XMM2;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    *(float *)&_XMM2 = vector->v[2];
    vector->v[0] = v10 * 360.0;
    v12 = v9 - *(float *)&_XMM3;
    v13 = *(float *)&_XMM2 * 0.0027777778;
    vector->v[1] = v12 * 360.0;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    vector->v[2] = (float)(v13 - *(float *)&_XMM2) * 360.0;
  }
  else
  {
    v6 = angles.v[1];
    vector->v[0] = angles.v[0];
    vector->v[2] = angles.v[2];
    vector->v[1] = v6;
  }
}

/*
==============
pathnode_t::GetForward
==============
*/
void pathnode_t::GetForward(pathnode_t *this, vec2_t *forward)
{
  __int128 v4; 
  float v8; 
  float v9; 
  float v10; 
  vec3_t vector; 
  vec3_t forwarda; 
  vec3_t v13; 

  if ( ((1 << LOBYTE(this->constant.type)) & 0x62700000) != 0 )
  {
    pathnode_t::GetAngles(this, &vector);
    AngleVectors(&vector, &forwarda, NULL, NULL);
    v4 = LODWORD(forwarda.v[1]);
    *(float *)&v4 = fsqrt((float)(*(float *)&v4 * *(float *)&v4) + (float)(forwarda.v[0] * forwarda.v[0]));
    _XMM2 = v4;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v8 = 1.0 / *(float *)&_XMM0;
    v9 = forwarda.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v10 = forwarda.v[1] * v8;
  }
  else
  {
    if ( !pathnode_t::GetParent(this) )
    {
      forward->v[0] = this->constant.yaw_orient.localForward.v[0];
      forward->v[1] = this->constant.yaw_orient.localForward.v[1];
      return;
    }
    pathnode_t::GetAngles(this, &vector);
    YawVectors(vector.v[1], &v13, NULL);
    v9 = v13.v[0];
    v10 = v13.v[1];
  }
  forward->v[1] = v10;
  forward->v[0] = v9;
}

/*
==============
GetNodeExposedOffset
==============
*/
void GetNodeExposedOffset(const pathnode_t *inNode, vec3_t *outOffset)
{
  scr_string_t HighestNodeStance; 
  ai_stance_e v5; 
  unsigned __int16 type; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t outEyeOffset; 
  tmat33_t<vec3_t> axis; 
  vec3_t vector; 

  *(_QWORD *)outOffset->v = 0i64;
  outOffset->v[2] = 0.0;
  HighestNodeStance = Path_GetHighestNodeStance(inNode);
  if ( !HighestNodeStance )
    HighestNodeStance = scr_const.crouch;
  v5 = AI_StringToStance(HighestNodeStance);
  type = inNode->constant.type;
  if ( type == 31 )
    type = inNode->dynamic.coverMultiType;
  GetNodeExposedEyeOffset(type, v5, &outEyeOffset);
  v7 = outEyeOffset.v[0];
  outEyeOffset.v[0] = outEyeOffset.v[1];
  outEyeOffset.v[1] = v7;
  pathnode_t::GetAngles((pathnode_t *)inNode, &vector);
  AnglesToAxis(&vector, &axis);
  LODWORD(axis.m[1].v[0]) ^= _xmm;
  LODWORD(axis.m[1].v[2]) ^= _xmm;
  LODWORD(axis.m[1].v[1]) ^= _xmm;
  if ( &outEyeOffset == outOffset && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v8 = outEyeOffset.v[0];
  v9 = outEyeOffset.v[2];
  v10 = outEyeOffset.v[0] * axis.m[0].v[1];
  outOffset->v[0] = (float)((float)(axis.m[1].v[0] * outEyeOffset.v[1]) + (float)(outEyeOffset.v[0] * axis.m[0].v[0])) + (float)(outEyeOffset.v[2] * axis.m[2].v[0]);
  v11 = v10 + (float)(axis.m[1].v[1] * outEyeOffset.v[1]);
  v12 = v8 * axis.m[0].v[2];
  v13 = axis.m[1].v[2];
  outOffset->v[1] = v11 + (float)(v9 * axis.m[2].v[1]);
  outOffset->v[2] = (float)(v12 + (float)(v13 * outEyeOffset.v[1])) + (float)(v9 * axis.m[2].v[2]);
}

/*
==============
GetNodesInRadius
==============
*/
void GetNodesInRadius(scrContext_t *scrContext, int sorted)
{
  signed __int64 v2; 
  void *v3; 
  float v4; 
  int v5; 
  int typeFlags; 
  double Float; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  unsigned __int16 v13; 
  const char *String; 
  char v15; 
  const char **v16; 
  const char *v17; 
  __int64 v18; 
  const char *v19; 
  signed __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  int Int; 
  unsigned int v27; 
  unsigned int v28; 
  pathnode_t *node; 
  float v30; 
  float v31; 
  float v32; 
  gentity_s *Parent; 
  gentity_s *v34; 
  float v35; 
  pathnode_t *v36; 
  unsigned int spawnflags; 
  int v38; 
  unsigned int v39; 
  const char *v40; 
  signed int v41; 
  pathnode_t *v42; 
  scrContext_t *v43; 
  unsigned __int16 v44; 
  __int64 maxNodes; 
  __int64 allowDontLinkNodes; 
  vec3_t vectorValue; 
  tmat33_t<vec3_t> axis; 
  pathsort_s nodes[256]; 

  v3 = alloca(v2);
  v4 = FLOAT_512_0;
  v5 = sorted;
  typeFlags = -1;
  Scr_GetVector(scrContext, 0, &vectorValue);
  Float = Scr_GetFloat(scrContext, 1u);
  v9 = *(float *)&Float;
  v10 = Scr_GetFloat(scrContext, 2u);
  v11 = *(float *)&v10 * *(float *)&v10;
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    v12 = Scr_GetFloat(scrContext, 3u);
    v4 = *(float *)&v12;
  }
  v13 = 0;
  if ( Scr_GetNumParam(scrContext) > 4 )
  {
    String = Scr_GetString(scrContext, 4u);
    if ( I_stricmp("Cover", String) )
    {
      v15 = 0;
      v16 = nodeStringTable;
      do
      {
        v17 = *v16;
        v18 = 0x7FFFFFFFi64;
        v19 = String;
        if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v20 = v17 - String;
        while ( 1 )
        {
          v21 = (unsigned __int8)v19[v20];
          v22 = v18;
          v23 = *(unsigned __int8 *)v19++;
          --v18;
          if ( !v22 )
          {
LABEL_22:
            typeFlags = 1 << v15;
            goto LABEL_25;
          }
          if ( v21 != v23 )
          {
            v24 = v21 + 32;
            if ( (unsigned int)(v21 - 65) > 0x19 )
              v24 = v21;
            v21 = v24;
            v25 = v23 + 32;
            if ( (unsigned int)(v23 - 65) > 0x19 )
              v25 = v23;
            if ( v21 != v25 )
              break;
          }
          if ( !v21 )
            goto LABEL_22;
        }
        ++v15;
        ++v16;
      }
      while ( (__int64)v16 < (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_691 );
      typeFlags = -1;
LABEL_25:
      v5 = sorted;
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
  v27 = Path_NodesInCylinder(&vectorValue, NULL, v9, v4, nodes, 256, typeFlags, 0);
  v28 = v27;
  if ( v5 )
    std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(nodes, &nodes[v27], v27, Path_CompareNodesIncreasing);
  Scr_MakeArray(scrContext);
  if ( v28 )
  {
    do
    {
      if ( !Path_NodeValid(v13) )
        goto LABEL_53;
      node = nodes[v13].node;
      v30 = node->constant.vLocalOrigin.v[0];
      v31 = node->constant.vLocalOrigin.v[1];
      v32 = node->constant.vLocalOrigin.v[2];
      Parent = pathnode_t::GetParent(node);
      v34 = Parent;
      v35 = v30;
      if ( Parent )
      {
        AnglesToAxis(&Parent->r.currentAngles, &axis);
        v35 = (float)((float)((float)(v30 * axis.m[0].v[0]) + (float)(v31 * axis.m[1].v[0])) + (float)(v32 * axis.m[2].v[0])) + v34->r.currentOrigin.v[0];
        v31 = (float)((float)((float)(v31 * axis.m[1].v[1]) + (float)(v30 * axis.m[0].v[1])) + (float)(v32 * axis.m[2].v[1])) + v34->r.currentOrigin.v[1];
      }
      if ( v11 != 0.0 && v11 > (float)((float)((float)(v31 - vectorValue.v[1]) * (float)(v31 - vectorValue.v[1])) + (float)((float)(v35 - vectorValue.v[0]) * (float)(v35 - vectorValue.v[0]))) )
        goto LABEL_53;
      v36 = nodes[v13].node;
      if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10274, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      spawnflags = v36->constant.spawnflags;
      v38 = ((v36->constant.spawnflags & 4) == 0) | 4;
      if ( (v36->constant.spawnflags & 8) == 0 )
        v38 = ((v36->constant.spawnflags & 4) == 0) | 6;
      v39 = v38 & 0xFFFFFFFB;
      if ( (v36->constant.spawnflags & 0x10) == 0 )
        v39 = v38;
      if ( v39 )
      {
        if ( v39 == 7 )
          goto LABEL_49;
      }
      else
      {
        v40 = vtos(&v36->constant.vLocalOrigin);
        LODWORD(allowDontLinkNodes) = spawnflags;
        LODWORD(maxNodes) = Path_ConvertNodeToIndex(v36);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10285, ASSERT_TYPE_ASSERT, "( eAllowedStances )", "Node %d at %s has no valid stances.  Spawnflags: %d", maxNodes, v40, allowDontLinkNodes) )
          __debugbreak();
      }
      if ( (v39 & Int) != 0 )
      {
LABEL_49:
        v41 = g_path.actualNodeCount - pathData.zoneCount;
        if ( Path_ConvertNodeToIndex(nodes[v13].node) >= v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3206, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( nodes[i].node ) < Path_NodeCount())", (const char *)&queryFormat, "Path_ConvertNodeToIndex( nodes[i].node ) < Path_NodeCount()") )
          __debugbreak();
        v42 = nodes[v13].node;
        v43 = ScriptContext_Server();
        v44 = Path_ConvertNodeToIndex(v42);
        Scr_AddEntityNum(v43, v44, ENTITY_CLASS_PATHNODE);
        Scr_AddArray(scrContext);
      }
LABEL_53:
      ++v13;
    }
    while ( v13 < v28 );
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
void GetPathNodeListForSightToPathNodeCheck(const vec3_t *position, const float maxRadius, unsigned __int16 *pathNodeIndexListOut, unsigned __int64 maxPathNodeListItems, unsigned int *pathNodeListOutCount)
{
  signed __int64 v5; 
  void *v6; 
  unsigned int v10; 
  const pathnode_t *v11; 
  unsigned int v12; 
  pathsort_s *p_nodes; 
  signed int v14; 
  unsigned __int16 v15; 
  pathsort_s nodes; 

  v6 = alloca(v5);
  if ( !pathNodeIndexListOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4302, ASSERT_TYPE_ASSERT, "(pathNodeIndexListOut)", (const char *)&queryFormat, "pathNodeIndexListOut") )
    __debugbreak();
  if ( !pathNodeListOutCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4303, ASSERT_TYPE_ASSERT, "(pathNodeListOutCount)", (const char *)&queryFormat, "pathNodeListOutCount") )
    __debugbreak();
  v10 = 0;
  *pathNodeListOutCount = 0;
  Profile_Begin(772);
  v11 = Path_NearestNodeForLineOfSight(position, 65537, NULL);
  Profile_EndInternal(NULL);
  if ( v11 )
    pathNodeIndexListOut[(*pathNodeListOutCount)++] = Path_ConvertNodeToIndex(v11);
  if ( !*pathNodeListOutCount )
  {
    Profile_Begin(773);
    v12 = Path_NodesInCylinder(position, NULL, maxRadius, 256.0, &nodes, 512, -1, 0);
    Profile_EndInternal(NULL);
    if ( v12 )
    {
      p_nodes = &nodes;
      do
      {
        if ( v10 >= maxPathNodeListItems )
          break;
        v14 = g_path.actualNodeCount - pathData.zoneCount;
        if ( Path_ConvertNodeToIndex(p_nodes->node) >= v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4342, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( nodesAroundEntity[nodeIndex].node ) < Path_NodeCount())", (const char *)&queryFormat, "Path_ConvertNodeToIndex( nodesAroundEntity[nodeIndex].node ) < Path_NodeCount()") )
          __debugbreak();
        v15 = Path_ConvertNodeToIndex(p_nodes->node);
        ++v10;
        ++p_nodes;
        pathNodeIndexListOut[(*pathNodeListOutCount)++] = v15;
      }
      while ( v10 < v12 );
    }
  }
}

/*
==============
pathnode_t::GetPos
==============
*/
void pathnode_t::GetPos(pathnode_t *this, vec3_t *pos)
{
  gentity_s *Parent; 
  float *p_number; 
  float v5; 
  float v6; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 

  *pos = this->constant.vLocalOrigin;
  Parent = pathnode_t::GetParent(this);
  p_number = (float *)&Parent->s.number;
  if ( Parent )
  {
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    MatrixTransformVector(pos, &axis, &out);
    v5 = out.v[1];
    pos->v[0] = out.v[0] + p_number[76];
    v6 = out.v[2];
    pos->v[1] = v5 + p_number[77];
    pos->v[2] = v6 + p_number[78];
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
  float v4; 
  float v5; 
  float v6; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    v4 = dir->v[1];
    v5 = dir->v[0];
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    MatrixInverse(&axis, &out);
    v6 = (float)(v5 * out.m[0].v[0]) + (float)(v4 * out.m[1].v[0]);
    dir->v[1] = (float)(v4 * out.m[1].v[1]) + (float)(v5 * out.m[0].v[1]);
    dir->v[0] = v6;
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
  float v4; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    v4 = pos->v[1] - Parent->r.currentOrigin.v[1];
    in1.v[0] = pos->v[0] - Parent->r.currentOrigin.v[0];
    in1.v[2] = pos->v[2] - Parent->r.currentOrigin.v[2];
    in1.v[1] = v4;
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    MatrixInverse(&axis, &out);
    MatrixTransformVector(&in1, &out, pos);
  }
}

/*
==============
LogNoPathNodesAroundUser
==============
*/
void LogNoPathNodesAroundUser(gentity_s *pEntity, float radiusDistance)
{
  int v3; 

  v3 = Sys_Milliseconds();
  if ( v3 - lastTimeDisplayed > 1000 )
  {
    Com_PrintWarning(16, "Player @ X[%f] Y[%f] Z[%f] found no path nodes within %3.2f radius, this will break spawning checks.\n", pEntity->r.currentOrigin.v[0], pEntity->r.currentOrigin.v[1], pEntity->r.currentOrigin.v[2], radiusDistance);
    lastTimeDisplayed = v3;
  }
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
  __int128 v3; 
  __int128 v7; 
  __int128 v11; 
  bool v15; 
  const dvar_t *v16; 
  float value; 
  const dvar_t *v18; 
  const char *v19; 
  const dvar_t *v20; 
  vec3_t toNormal; 
  vec3_t up; 
  vec3_t toPoint; 
  vec3_t pos; 
  __int128 v26; 

  v26 = v3;
  if ( !workData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10779, ASSERT_TYPE_ASSERT, "(workData)", (const char *)&queryFormat, "workData") )
    __debugbreak();
  pathnode_t::GetPos(pNodeFrom, &pos);
  AngleVectors((const vec3_t *)&pNodeFrom->constant.44, NULL, NULL, &up);
  v7 = LODWORD(up.v[0]);
  *(float *)&v7 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(up.v[1] * up.v[1])) + (float)(up.v[2] * up.v[2]));
  _XMM3 = v7;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  up.v[0] = up.v[0] * (float)(1.0 / *(float *)&_XMM0);
  up.v[2] = up.v[2] * (float)(1.0 / *(float *)&_XMM0);
  up.v[1] = up.v[1] * (float)(1.0 / *(float *)&_XMM0);
  pathnode_t::GetPos(pNodeTo, &toPoint);
  AngleVectors((const vec3_t *)&pNodeTo->constant.44, NULL, NULL, &toNormal);
  v11 = LODWORD(toNormal.v[0]);
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(toNormal.v[1] * toNormal.v[1])) + (float)(toNormal.v[2] * toNormal.v[2]));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  toNormal.v[0] = toNormal.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v15 = (float)(toNormal.v[2] * (float)(1.0 / *(float *)&_XMM0)) <= 0.85000002;
  toNormal.v[1] = toNormal.v[1] * (float)(1.0 / *(float *)&_XMM0);
  toNormal.v[2] = toNormal.v[2] * (float)(1.0 / *(float *)&_XMM0);
  if ( v15 )
  {
    v20 = DVARFLT_agent_jumpWallSpeed;
    if ( !DVARFLT_agent_jumpWallSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "agent_jumpWallSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    value = v20->current.value;
    v18 = DVARFLT_agent_jumpWallGravity;
    if ( !DVARFLT_agent_jumpWallGravity )
    {
      v19 = "agent_jumpWallGravity";
LABEL_15:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v19) )
        __debugbreak();
    }
  }
  else
  {
    v16 = DVARFLT_agent_jumpSpeed;
    if ( !DVARFLT_agent_jumpSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "agent_jumpSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    value = v16->current.value;
    v18 = DVARFLT_agent_jumpGravity;
    if ( !DVARFLT_agent_jumpGravity )
    {
      v19 = "agent_jumpGravity";
      goto LABEL_15;
    }
  }
  Dvar_CheckFrontendServerThread(v18);
  return Path_TrajectoryCanAttemptAccurateJump(&pos, &up, &toPoint, &toNormal, v18->current.value, value * 1.01, workData);
}

/*
==============
Path_AttemptInPlaneJumpLink
==============
*/
_BOOL8 Path_AttemptInPlaneJumpLink(pathnode_t *pNodeFrom, pathnode_t *pNodeTo)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  __int128 v8; 
  float v12; 
  float v13; 
  float v14; 
  int v15; 
  float v16; 
  float v17; 
  float v19; 
  vec3_t pos; 
  vec3_t start; 
  vec3_t v22; 
  vec3_t end; 
  trace_t results; 

  pathnode_t::GetPos(pNodeFrom, &pos);
  pathnode_t::GetPos(pNodeTo, &v22);
  v3 = v22.v[0];
  v4 = pos.v[0];
  v5 = v22.v[1];
  v6 = pos.v[1];
  v7 = pos.v[2];
  v8 = LODWORD(v22.v[1]);
  *(float *)&v8 = fsqrt((float)((float)(v22.v[1] - pos.v[1]) * (float)(v22.v[1] - pos.v[1])) + (float)((float)(v22.v[0] - pos.v[0]) * (float)(v22.v[0] - pos.v[0])));
  _XMM2 = v8;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm12, xmm0
  }
  v12 = 1.0 / *(float *)&_XMM0;
  v13 = (float)((float)(v22.v[1] - pos.v[1]) * (float)(1.0 / *(float *)&_XMM0)) * 4.0;
  v14 = (float)(v12 * (float)(v22.v[0] - pos.v[0])) * 4.0;
  v19 = v13;
  v15 = 0;
  while ( 1 )
  {
    v16 = v4 + v14;
    v17 = v13 + v6;
    if ( (float)((float)((float)(v5 - (float)(v13 + v6)) * (float)(v5 - (float)(v13 + v6))) + (float)((float)(v3 - (float)(v4 + v14)) * (float)(v3 - (float)(v4 + v14)))) < 16.0 )
      return 0i64;
    pos.v[2] = v7 - 10.0;
    start.v[2] = v7 + 10.0;
    pos.v[0] = v4 + v14;
    pos.v[1] = v13 + v6;
    start.v[0] = v4 + v14;
    start.v[1] = v13 + v6;
    G_Main_TraceCapsule(&results, &start, &pos, &pathConnectWalkActorBox, 2047, 131089);
    if ( results.startsolid || results.fraction == 1.0 )
      break;
    v4 = (float)((float)(pos.v[0] - start.v[0]) * results.fraction) + start.v[0];
    v6 = (float)((float)(pos.v[1] - start.v[1]) * results.fraction) + start.v[1];
    if ( (float)((float)((float)((float)(v6 - v17) * (float)(v6 - v17)) + (float)((float)(v4 - v16) * (float)(v4 - v16))) + (float)((float)((float)((float)((float)(pos.v[2] - start.v[2]) * results.fraction) + start.v[2]) - v7) * (float)((float)((float)((float)(pos.v[2] - start.v[2]) * results.fraction) + start.v[2]) - v7))) <= 100.0 )
    {
      v13 = v19;
      ++v15;
      v7 = (float)((float)(pos.v[2] - start.v[2]) * results.fraction) + start.v[2];
      if ( v15 < 96 )
        continue;
    }
    return 0i64;
  }
  end.v[2] = v22.v[2] + 10.0;
  end.v[0] = v3;
  end.v[1] = v5;
  G_Main_TraceCapsule(&results, &start, &end, &pathConnectWalkActorBox, 2047, 529);
  return results.fraction == 1.0;
}

/*
==============
Path_AutoDisconnectPaths
==============
*/
void Path_AutoDisconnectPaths(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  gentity_s *v3; 
  nav_space_s *SpaceByEntity; 
  nav_space_s *MostLikelySpace; 
  __int64 bNow; 
  __int64 userDataFlags; 

  v0 = 0;
  if ( level.num_entities > 0 )
  {
    v1 = 0i64;
    v2 = 0i64;
    do
    {
      v3 = &level.gentities[v2];
      if ( (unsigned int)v0 >= 0x800 )
      {
        LODWORD(userDataFlags) = 2048;
        LODWORD(bNow) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", bNow, userDataFlags) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v2].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v1] && (v3->flags.m_flags[0] & 0xC0) == 0xC0 )
      {
        if ( (v3->flags.m_flags[0] & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10389, ASSERT_TYPE_ASSERT, "(Path_IsDynamicBlockingEntity( ent ))", (const char *)&queryFormat, "Path_IsDynamicBlockingEntity( ent )") )
          __debugbreak();
        Nav_DestroyObstacleByEnt(v3);
        if ( (v3->flags.m_flags[0] & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10319, ASSERT_TYPE_ASSERT, "(Path_IsDynamicBlockingEntity( ent ))", (const char *)&queryFormat, "Path_IsDynamicBlockingEntity( ent )") )
          __debugbreak();
        v3->flags.m_flags[0] |= 0x100u;
        SpaceByEntity = Nav_GetSpaceByEntity(v3);
        MostLikelySpace = Nav_FindMostLikelySpace(&v3->r.currentOrigin, NAV_LAYER_HUMAN, SpaceByEntity);
        if ( MostLikelySpace )
          Nav_CreateObstacleByEnt(MostLikelySpace, v3, 15.0, 0xFFFFFFFF, 0xFFFFE07F, 1, 0);
        v3->flags.m_flags[0] &= ~0x100u;
        v3->iDisconnectTime = level.time;
      }
      ++v0;
      ++v1;
      ++v2;
    }
    while ( v0 < level.num_entities );
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
char Path_CanStealPriorityNode(const pathnode_t *const node, const sentient_s *const claimer)
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
  float v16; 
  __int64 v17; 
  AIWrapper v18; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9531, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (node->constant.spawnflags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9532, ASSERT_TYPE_ASSERT, "(node->constant.spawnflags & PNF_PRIORITY)", (const char *)&queryFormat, "node->constant.spawnflags & PNF_PRIORITY") )
    __debugbreak();
  if ( !claimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9533, ASSERT_TYPE_ASSERT, "(claimer)", (const char *)&queryFormat, "claimer") )
    __debugbreak();
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9534, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", (const char *)&queryFormat, "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  NodeTeam = Path_GetNodeTeam(claimer->eTeam);
  if ( !Path_GetNodeOwnerCount(node, NodeTeam) )
    return 1;
  if ( Path_GetNumClaimedOverlapNodes(node, NodeTeam) <= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      NodeOwner = Path_GetNodeOwner(node, v13, NodeTeam);
      v15 = NodeOwner;
      if ( NodeOwner )
      {
        AIWrapper::AIWrapper(&v18, NodeOwner->ent);
        if ( !v18.m_pAI )
          break;
        if ( v15 != claimer )
        {
          if ( v15->eTeam != claimer->eTeam )
            break;
          if ( !((unsigned __int8 (*)(void))v18.m_pAI->IsDying)() )
          {
            pathnode_t::GetPos((pathnode_t *)node, &pos);
            v16 = (float)((float)(pos.v[1] - v15->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - v15->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - v15->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - v15->ent->r.currentOrigin.v[0]));
            if ( v16 < 225.0 || (float)((float)((float)((float)(pos.v[1] - claimer->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - claimer->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - claimer->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - claimer->ent->r.currentOrigin.v[0]))) + 225.0) >= v16 )
              break;
          }
        }
      }
      if ( ++v13 >= 3 )
        return 1;
    }
  }
  else
  {
    if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
      NodeTeam = 0;
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
      LODWORD(v17) = NodeTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v17, v6) )
        __debugbreak();
    }
    if ( SentientHandle::isDefined(&node->dynamic.pOwners[NodeTeam]) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9553, ASSERT_TYPE_ASSERT, "(!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined())", (const char *)&queryFormat, "!Path_NodeOwnerSentHandleConst( node, nodeTeam )->isDefined()") )
        __debugbreak();
    }
  }
  return 0;
}

/*
==============
Path_CheckValidJumpAngles
==============
*/
_BOOL8 Path_CheckValidJumpAngles(pathnode_t *pNodeFrom, pathnode_t *pNodeTo)
{
  __int128 v4; 
  $934789BA12C0671A9461497ABF95DE7A *v8; 
  __int128 v9; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v20; 
  float v21; 
  float v22; 
  BOOL v23; 
  int v24; 
  float v25; 
  _BOOL8 result; 
  vec3_t up; 
  vec3_t v28; 
  vec3_t v29; 

  AngleVectors((const vec3_t *)&pNodeFrom->constant.44, NULL, NULL, &up);
  v4 = LODWORD(up.v[0]);
  *(float *)&v4 = fsqrt((float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(up.v[1] * up.v[1])) + (float)(up.v[2] * up.v[2]));
  _XMM3 = v4;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  up.v[0] = up.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v8 = &pNodeTo->constant.44;
  up.v[2] = up.v[2] * (float)(1.0 / *(float *)&_XMM0);
  up.v[1] = up.v[1] * (float)(1.0 / *(float *)&_XMM0);
  AngleVectors((const vec3_t *)&pNodeTo->constant.44, NULL, NULL, &v28);
  v9 = LODWORD(v28.v[0]);
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v28.v[1] * v28.v[1])) + (float)(v28.v[2] * v28.v[2]));
  _XMM3 = v9;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v28.v[0] = v28.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v28.v[2] = v28.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v13 = pNodeTo->constant.vLocalOrigin.v[0] - pNodeFrom->constant.vLocalOrigin.v[0];
  v14 = pNodeTo->constant.vLocalOrigin.v[2] - pNodeFrom->constant.vLocalOrigin.v[2];
  v28.v[1] = v28.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v16 = LODWORD(pNodeTo->constant.vLocalOrigin.v[1]);
  v15 = pNodeTo->constant.vLocalOrigin.v[1] - pNodeFrom->constant.vLocalOrigin.v[1];
  *(float *)&v16 = fsqrt((float)((float)(v15 * v15) + (float)(v13 * v13)) + (float)(v14 * v14));
  _XMM1 = v16;
  __asm
  {
    vcmpless xmm0, xmm1, xmm7
    vblendvps xmm0, xmm1, xmm8, xmm0
  }
  v20 = v13 * (float)(1.0 / *(float *)&_XMM0);
  v21 = v15 * (float)(1.0 / *(float *)&_XMM0);
  v22 = v14 * (float)(1.0 / *(float *)&_XMM0);
  AngleVectors((const vec3_t *)&pNodeFrom->constant.44, NULL, NULL, &v29);
  v24 = 0;
  v23 = v29.v[2] > 0.85000002;
  AngleVectors((const vec3_t *)v8, NULL, NULL, &v29);
  LOBYTE(v24) = v29.v[2] > 0.85000002;
  result = 0;
  if ( (v23 || (float)((float)((float)(v20 * up.v[0]) + (float)(v21 * up.v[1])) + (float)(up.v[2] * v22)) >= 0.34200001) && (v24 || (float)((float)((float)(v20 * v28.v[0]) + (float)(v21 * v28.v[1])) + (float)(v28.v[2] * v22)) <= -0.34200001) )
  {
    if ( v23 || v24 )
      return 1;
    v25 = (float)((float)(v28.v[0] * up.v[0]) + (float)(v28.v[1] * up.v[1])) + (float)(v28.v[2] * up.v[2]);
    if ( v25 <= 0.85000002 && (up.v[2] >= -0.14999998 || v28.v[2] >= -0.14999998) && v25 < 0.5 )
      return 1;
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
bool Path_CompareNodesIncreasing(const pathsort_s *ps1, const pathsort_s *ps2)
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
  return ps1->metric < ps2->metric;
}

/*
==============
Path_CompareNodesIncreasingDistOnly
==============
*/
bool Path_CompareNodesIncreasingDistOnly(const pathsort_s *ps1, const pathsort_s *ps2)
{
  return ps1->metric < ps2->metric;
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
  cg_t *LocalClientGlobals; 
  unsigned __int16 v1; 
  float v2; 
  float v3; 
  unsigned __int16 result; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  pathnode_t *v11; 
  pathnode_t *v12; 
  unsigned __int16 type; 
  bool v14; 
  pathnode_t *v15; 
  float v16; 
  float v17; 
  int v18; 
  const vec4_t *v19; 
  vec3_t *p_pointCenter; 
  const vec4_t *v21; 
  vec3_t *p_pointB; 
  vec3_t pos; 
  vec3_t outPos; 
  vec3_t end; 
  vec3_t v26; 
  PathJumpLinkWorkData workData; 
  trace_t results; 

  CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v1 = 0;
  v2 = LocalClientGlobals->refdef.view.axis.m[0].v[2];
  v3 = (float)(16000.0 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outPos.v[1];
  end.v[0] = (float)(16000.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outPos.v[0];
  end.v[2] = (float)(16000.0 * v2) + outPos.v[2];
  end.v[1] = v3;
  G_Main_TraceCapsule(&results, &outPos, &end, &bounds_origin, 0, 33685521);
  result = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount);
  v5 = -1;
  v6 = 0;
  v7 = FLOAT_2_56e8;
  v8 = (float)((float)(end.v[0] - outPos.v[0]) * results.fraction) + outPos.v[0];
  v9 = (float)((float)(end.v[1] - outPos.v[1]) * results.fraction) + outPos.v[1];
  v10 = (float)((float)(end.v[2] - outPos.v[2]) * results.fraction) + outPos.v[2];
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
  {
    do
    {
      if ( Path_NodeValid(v6) )
      {
        v11 = &pathData.nodes[v6];
        if ( (unsigned __int16)(v11->constant.type - 29) <= 1u )
        {
          pathnode_t::GetPos(v11, &pos);
          if ( (float)((float)((float)((float)(pos.v[1] - v9) * (float)(pos.v[1] - v9)) + (float)((float)(pos.v[0] - v8) * (float)(pos.v[0] - v8))) + (float)((float)(pos.v[2] - v10) * (float)(pos.v[2] - v10))) < v7 )
          {
            v7 = (float)((float)((float)(pos.v[1] - v9) * (float)(pos.v[1] - v9)) + (float)((float)(pos.v[0] - v8) * (float)(pos.v[0] - v8))) + (float)((float)(pos.v[2] - v10) * (float)(pos.v[2] - v10));
            v5 = v6;
          }
        }
      }
      result = ++v6;
    }
    while ( v6 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
    if ( v5 != 0xFFFF )
    {
      v12 = &pathData.nodes[v5];
      type = v12->constant.type;
      v14 = type == 29;
      result = type - 29;
      if ( (v14 || result == 1) && (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
      {
        do
        {
          if ( !Path_NodeValid(v1) )
            goto LABEL_33;
          v15 = &pathData.nodes[v1];
          if ( v1 == v5 )
            goto LABEL_33;
          if ( (unsigned __int16)(v15->constant.type - 29) > 1u )
            goto LABEL_33;
          pathnode_t::GetPos(v12, &pos);
          pathnode_t::GetPos(v15, &v26);
          v16 = v26.v[2] - pos.v[2];
          if ( (float)(v26.v[2] - pos.v[2]) > 264.0 )
            goto LABEL_33;
          v17 = (float)((float)((float)(v26.v[1] - pos.v[1]) * (float)(v26.v[1] - pos.v[1])) + (float)((float)(v26.v[0] - pos.v[0]) * (float)(v26.v[0] - pos.v[0]))) + (float)(v16 * v16);
          if ( v17 >= 262144.0 )
            goto LABEL_33;
          if ( v17 <= 10000.0 )
          {
            v21 = &colorRed;
          }
          else
          {
            if ( Path_IsOrientedNodeUpright(v12) && Path_IsOrientedNodeUpright(v15) && COERCE_FLOAT(LODWORD(v16) & _xmm) < 32.0 )
            {
              if ( Path_AttemptInPlaneJumpLink(v12, v15) )
              {
                v18 = Path_AttemptAccurateTrajectoryJumpLink(v12, v15, &workData);
                v19 = &colorCyan;
                if ( !v18 )
                  v19 = &colorYellow;
                G_DebugLine(&workData.pointA, &workData.pointCenter, v19, 0);
                p_pointCenter = &workData.pointCenter;
                v21 = v19;
                p_pointB = &workData.pointB;
              }
              else
              {
                p_pointCenter = &pos;
                v21 = &colorLtOrange;
                p_pointB = &v26;
              }
              goto LABEL_32;
            }
            if ( Path_CheckValidJumpAngles(v12, v15) )
            {
              if ( Path_AttemptAccurateTrajectoryJumpLink(v12, v15, &workData) )
              {
                G_DebugLine(&workData.pointA, &workData.pointCenter, &colorCyan, 0);
                v21 = &colorCyan;
              }
              else
              {
                G_DebugLine(&workData.pointA, &workData.pointCenter, &colorMagenta, 0);
                v21 = &colorMagenta;
              }
              p_pointB = &workData.pointB;
              p_pointCenter = &workData.pointCenter;
              goto LABEL_32;
            }
            v21 = &colorRedFaded;
          }
          p_pointCenter = &pos;
          p_pointB = &v26;
LABEL_32:
          G_DebugLine(p_pointCenter, p_pointB, v21, 0);
LABEL_33:
          result = ++v1;
        }
        while ( v1 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
      }
    }
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
    Nav_CreateObstacleByEnt(MostLikelySpace, ent, 15.0, 0xFFFFFFFF, 0xFFFFE07F, bNow, 0);
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
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  void *v5; 
  unsigned int v6; 
  const dvar_t *v7; 
  float value; 
  gclient_s *client; 
  float v10; 
  float v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int i; 
  __int64 v15; 
  pathnode_t *v16; 
  unsigned int v17; 
  unsigned __int16 v18; 
  pathnode_t *v19; 
  float v20; 
  __int64 v21; 
  unsigned __int16 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  pathnode_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  unsigned int v30; 
  unsigned int v31; 
  int v32; 
  float v33; 
  __int64 RawMax; 
  const dvar_t *v35; 
  __m128 v36; 
  const char *v37; 
  const dvar_t *v38; 
  unsigned int Traffic; 
  unsigned int v40; 
  __m128 v41; 
  __m128 v42; 
  const char *v43; 
  unsigned int v44; 
  pathnode_t *v45; 
  unsigned int v46; 
  __int128 v47; 
  float v51; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  const char *v54; 
  const vec4_t *v55; 
  const dvar_t *v56; 
  const vec4_t *v57; 
  unsigned __int16 v58; 
  unsigned __int16 v59; 
  const vec4_t *v60; 
  const char *v61; 
  unsigned int j; 
  float v63; 
  unsigned __int16 v64; 
  const vec4_t *v65; 
  unsigned __int16 v66; 
  bool IsNodeIndexExposedSkyBase; 
  unsigned __int16 v68; 
  unsigned int v69; 
  const char *v70; 
  unsigned int v71; 
  int nodeNum; 
  pathnode_t *v73; 
  float v74; 
  float v75; 
  float v76; 
  int v77; 
  unsigned int totalLinkCount; 
  unsigned int v79; 
  __int64 v80; 
  unsigned __int16 v81; 
  const char *v82; 
  int Int_Internal_DebugName; 
  bool v84; 
  unsigned int wLinkCount; 
  unsigned int k; 
  int v87; 
  pathnode_t *v88; 
  float v89; 
  unsigned __int16 v90; 
  int v91; 
  unsigned int m; 
  pathnode_t *v93; 
  int v94; 
  __int64 v95; 
  double Float_Internal_DebugName; 
  __int64 v97; 
  __int64 v98; 
  const pathnode_t **v99; 
  __int64 n; 
  unsigned __int16 ii; 
  pathnode_t *v102; 
  unsigned int jj; 
  sentient_s *v104; 
  pathnode_t *v105; 
  gclient_s *v106; 
  const vec3_t *p_origin; 
  float v108; 
  float v109; 
  int v110; 
  float v111; 
  const char *v112; 
  pathnode_t *v113; 
  __m128 v114; 
  double Angle; 
  __int64 priority; 
  const char *v117; 
  double v118; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 duration; 
  __int64 typeFlags; 
  unsigned __int16 v124; 
  unsigned int v125; 
  float v126; 
  vec3_t pos; 
  vec3_t xyz; 
  vec3_t start; 
  vec3_t v130; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outPos; 
  vec3_t targetDirection; 
  Bounds v135; 
  vec3_t vEyePosOut; 
  vec3_t v137; 
  vec4_t v138; 
  Bounds color; 
  vec3_t viewDir; 
  vec3_t v141; 
  vec3_t end; 
  ai_search_t dest[5]; 
  __int64 Base[2000]; 
  unsigned __int16 results[4]; 
  __int64 v146; 
  __int64 v147; 
  __int64 v148; 
  __int64 v149; 
  __int64 v150; 
  __int64 v151; 
  __int64 v152; 
  __int128 v153; 
  __int128 v154; 
  __int128 v155; 
  __int128 v156; 

  v5 = alloca(v0);
  v6 = tls_index;
  if ( dword_14C8E241C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14C8E241C);
    if ( dword_14C8E241C == -1 )
    {
      VIEW_FOV_DOT_0 = FLOAT_0_7402181;
      j__Init_thread_footer(&dword_14C8E241C);
    }
  }
  v7 = DVARFLT_ai_showNodesDist;
  if ( !DVARFLT_ai_showNodesDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodesDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  v126 = value;
  if ( SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME )
  {
    client = level.gentities->client;
    if ( client )
    {
      if ( client->sess.connected == CON_CONNECTED && cg_t::ms_allocatedCount > 0 )
      {
        Path_NavTests();
        if ( g_platformWarning )
          Com_PrintWarning(1, "Please reconnect paths for level. Parented moving platform nodes with old version.\n");
        CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
        viewDir = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->refdef.view.axis.m[0];
        v10 = FLOAT_60_0;
        v11 = FLOAT_90_0;
        v12 = 0;
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") )
        {
          v13 = 0;
          v154 = v3;
          for ( i = g_path.actualNodeCount - pathData.zoneCount; v13 < g_path.actualNodeCount; *(_QWORD *)&v16->transient.nodeCost = 0i64 )
          {
            v15 = v13++;
            v16 = &pathData.nodes[v15];
            *(_QWORD *)&v16->transient.iSearchFrame = 0i64;
            v16->transient.pNextOpen = NULL;
            v16->transient.pPrevOpen = NULL;
            v16->transient.pParent = NULL;
            *(_QWORD *)&v16->transient.fCost = 0i64;
          }
          v125 = 0;
          v17 = 0;
          v18 = 0;
          if ( i )
          {
            do
            {
              if ( Path_NodeValid(v18) )
              {
                v19 = &pathData.nodes[v18];
                pathnode_t::GetPos(v19, &pos);
                v20 = (float)((float)((float)(outPos.v[1] - pos.v[1]) * (float)(outPos.v[1] - pos.v[1])) + (float)((float)(outPos.v[0] - pos.v[0]) * (float)(outPos.v[0] - pos.v[0]))) + (float)((float)(outPos.v[2] - pos.v[2]) * (float)(outPos.v[2] - pos.v[2]));
                v19->transient.fCost = v20;
                if ( (value == 0.0 || v20 <= (float)(value * value)) && Path_NodeInOrNearPlayerView(v19, &outPos, &viewDir, VIEW_FOV_DOT_0) )
                {
                  v21 = v17++;
                  Base[v21] = (__int64)v19;
                }
              }
              ++v18;
            }
            while ( v18 < i );
            v125 = v17;
          }
          qsort(Base, v17, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)Path_NodeCompareCost);
          v22 = 0;
          v124 = 0;
          v23 = FLOAT_40_0;
          if ( v17 )
          {
            v24 = FLOAT_0_0039215689;
            v25 = FLOAT_25_0;
            v26 = FLOAT_70_0;
            v156 = v1;
            v155 = v2;
            v153 = v4;
            do
            {
              v27 = (pathnode_t *)Base[v22];
              pathnode_t::GetPos(v27, &pos);
              if ( !pathData.usePathExtraData )
                goto LABEL_118;
              v28 = DVARINT_ai_showNodes;
              if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v28);
              if ( v28->current.integer >= 5 )
              {
                v29 = DVARINT_ai_showNodes;
                if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v29);
                if ( v29->current.integer <= 7 )
                {
                  angles.v[0] = 0.0;
                  angles.v[1] = 0.0;
                  angles.v[2] = 0.0;
                  if ( !pathData.pathExposure )
                    goto LABEL_137;
                  v30 = 0;
                  while ( 1 )
                  {
                    v31 = 0;
                    v32 = __ROL4__(1, v30);
                    do
                    {
                      v33 = (float)v31;
                      angles.v[1] = (float)(v33 * 45.0) - 22.5;
                      AngleVectors(&angles, &forward, NULL, NULL);
                      xyz.v[0] = (float)(20.0 * forward.v[0]) + pos.v[0];
                      xyz.v[1] = (float)(20.0 * forward.v[1]) + pos.v[1];
                      xyz.v[2] = (float)(20.0 * forward.v[2]) + pos.v[2];
                      if ( !v31 )
                      {
                        angles.v[1] = angles.v[1] + -45.0;
                        AngleVectors(&angles, &forward, NULL, NULL);
                        v130.v[0] = (float)(20.0 * forward.v[0]) + pos.v[0];
                        v130.v[1] = (float)(20.0 * forward.v[1]) + pos.v[1];
                        v130.v[2] = (float)(20.0 * forward.v[2]) + pos.v[2];
                      }
                      RawMax = Path_NodeExposureGetRawMax(v27, angles.v[1], v32);
                      if ( v30 )
                      {
                        if ( v30 == 1 )
                        {
                          v51 = v23 + pos.v[2];
                        }
                        else
                        {
                          if ( v30 != 2 )
                          {
                            v35 = DVARINT_ai_showNodes;
                            xyz.v[2] = pos.v[2] + 10.0;
                            v130.v[2] = pos.v[2] + 10.0;
                            if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                              __debugbreak();
                            Dvar_CheckFrontendServerThread(v35);
                            if ( v35->current.integer == 7 )
                            {
                              v36 = 0i64;
                              v36.m128_f32[0] = (float)RawMax;
                              v36.m128_f32[0] = v36.m128_f32[0] * v24;
                              *(__m128 *)color.midPoint.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)colorRed, (__m128)colorOrange), _mm_shuffle_ps(v36, v36, 0)), (__m128)colorOrange);
                              if ( !(_DWORD)RawMax )
                                *(vec4_t *)color.midPoint.v = colorGreen;
                              v37 = j_va("%X", (unsigned int)RawMax);
                              G_Main_AddDebugString(&xyz, (const vec4_t *)&color, 0.5, v37);
                              v24 = FLOAT_0_0039215689;
                            }
                            goto LABEL_50;
                          }
                          v51 = pos.v[2] + 11.0;
                        }
                        v52 = DVARINT_ai_showNodes;
                        v130.v[2] = v51;
                        xyz.v[2] = v51;
                        if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                          __debugbreak();
                        Dvar_CheckFrontendServerThread(v52);
                        if ( v52->current.integer != 5 )
                        {
LABEL_70:
                          v53 = DVARINT_ai_showNodes;
                          if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                            __debugbreak();
                          Dvar_CheckFrontendServerThread(v53);
                          if ( v53->current.integer == 6 )
                          {
                            v54 = j_va("%X", (unsigned int)RawMax);
                            v55 = &colorOrange;
                            if ( (unsigned int)RawMax <= 2 )
                              v55 = &colorBlue;
                            G_Main_AddDebugString(&xyz, v55, 0.5, v54);
                          }
                          goto LABEL_50;
                        }
                      }
                      else
                      {
                        v56 = DVARINT_ai_showNodes;
                        xyz.v[2] = v10 + pos.v[2];
                        v130.v[2] = v10 + pos.v[2];
                        if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                          __debugbreak();
                        Dvar_CheckFrontendServerThread(v56);
                        if ( v56->current.integer != 5 )
                          goto LABEL_70;
                      }
                      v57 = &colorOrange;
                      if ( (unsigned int)RawMax <= 2 )
                        v57 = &colorBlue;
                      G_DebugLine(&xyz, &v130, v57, 1);
LABEL_50:
                      ++v31;
                      v130 = xyz;
                    }
                    while ( v31 < 8 );
                    ++v30;
                    v12 = 0;
                    if ( v30 >= 4 )
                    {
                      v38 = DVARINT_ai_showNodes;
                      if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
                        __debugbreak();
                      Dvar_CheckFrontendServerThread(v38);
                      if ( v38->current.integer == 7 )
                      {
                        Traffic = Path_NodeExposureGetTraffic(v27);
                        v40 = Traffic;
                        v41 = 0i64;
                        v41.m128_f32[0] = (float)Traffic;
                        v41.m128_f32[0] = v41.m128_f32[0] * v24;
                        v42 = _mm_shuffle_ps(v41, v41, 0);
                        *(__m128 *)v135.midPoint.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)colorRed, (__m128)colorOrange), v42), (__m128)colorOrange);
                        if ( !Traffic )
                          *(vec4_t *)v135.midPoint.v = colorGreen;
                        start.v[0] = pos.v[0];
                        start.v[1] = pos.v[1];
                        start.v[2] = pos.v[2] + 10.0;
                        v43 = j_va("%X", Traffic);
                        G_Main_AddDebugString(&start, (const vec4_t *)&v135, 0.5, v43);
                        if ( v40 )
                        {
                          v44 = 0;
                          *(__m128 *)v135.midPoint.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)colorRed, (__m128)colorOrange), v42), (__m128)colorOrange);
                          if ( v27->constant.totalLinkCount )
                          {
                            do
                            {
                              v45 = Path_ConvertIndexToNode(v27->constant.Links[v44].nodeNum);
                              v46 = Path_NodeExposureGetTraffic(v45);
                              pathnode_t::GetPos(v45, &v141);
                              if ( v46 )
                              {
                                v47 = LODWORD(v141.v[1]);
                                *(float *)&v47 = fsqrt((float)((float)((float)(v141.v[1] - pos.v[1]) * (float)(v141.v[1] - pos.v[1])) + (float)((float)(v141.v[0] - pos.v[0]) * (float)(v141.v[0] - pos.v[0]))) + (float)((float)(v141.v[2] - pos.v[2]) * (float)(v141.v[2] - pos.v[2])));
                                _XMM4 = v47;
                                __asm
                                {
                                  vcmpless xmm0, xmm4, cs:__real@80000000
                                  vblendvps xmm1, xmm4, xmm13, xmm0
                                }
                                end.v[0] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * (float)(v141.v[0] - pos.v[0])) * (float)(*(float *)&v47 * 0.5)) + start.v[0];
                                end.v[1] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * (float)(v141.v[1] - pos.v[1])) * (float)(*(float *)&v47 * 0.5)) + start.v[1];
                                end.v[2] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * (float)(v141.v[2] - pos.v[2])) * (float)(*(float *)&v47 * 0.5)) + start.v[2];
                                G_DebugLine(&start, &end, (const vec4_t *)&v135, 1);
                              }
                              ++v44;
                            }
                            while ( v44 < v27->constant.totalLinkCount );
                            v23 = FLOAT_40_0;
                            v25 = FLOAT_25_0;
                          }
                        }
                      }
                      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 6 )
                      {
                        xyz.v[0] = pos.v[0];
                        xyz.v[1] = pos.v[1];
                        xyz.v[2] = pos.v[2] + 20.0;
                        v58 = Path_ConvertNodeToIndex(v27);
                        if ( Path_IsNodeIndexExposedSkyBase(v58, 0) )
                        {
                          v59 = Path_ConvertNodeToIndex(v27);
                          if ( Path_IsNodeIndexExposedSkyBase(v59, 1) )
                          {
                            v60 = &colorOrange;
                            v61 = j_va("skyStrict");
                          }
                          else
                          {
                            v60 = &colorYellow;
                            v61 = j_va("sky");
                          }
                        }
                        else
                        {
                          v60 = &colorBlue;
                          v61 = j_va("top");
                        }
                        G_Main_AddDebugString(&xyz, v60, 0.5, v61);
                      }
                      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 5 )
                      {
                        angles.v[1] = FLOAT_N90_0;
                        AngleVectors(&angles, &forward, NULL, NULL);
                        v130.v[0] = (float)(v25 * forward.v[0]) + pos.v[0];
                        v130.v[1] = (float)(v25 * forward.v[1]) + pos.v[1];
                        v130.v[2] = (float)(v25 * forward.v[2]) + pos.v[2];
                        for ( j = 0; j < 4; ++j )
                        {
                          v63 = (float)j;
                          angles.v[1] = v63 * 90.0;
                          AngleVectors(&angles, &forward, NULL, NULL);
                          xyz.v[0] = (float)(v25 * forward.v[0]) + pos.v[0];
                          xyz.v[2] = v26 + pos.v[2];
                          v130.v[2] = v26 + pos.v[2];
                          xyz.v[1] = (float)(v25 * forward.v[1]) + pos.v[1];
                          v64 = Path_ConvertNodeToIndex(v27);
                          if ( Path_IsNodeIndexExposedSkyBase(v64, 1) )
                          {
                            v65 = &colorOrange;
                          }
                          else
                          {
                            v66 = Path_ConvertNodeToIndex(v27);
                            IsNodeIndexExposedSkyBase = Path_IsNodeIndexExposedSkyBase(v66, 0);
                            v65 = &colorYellow;
                            if ( !IsNodeIndexExposedSkyBase )
                              v65 = &colorBlue;
                          }
                          G_DebugLine(&xyz, &v130, v65, 1);
                          v130 = xyz;
                        }
                      }
                      goto LABEL_137;
                    }
                  }
                }
              }
              if ( pathData.usePathExtraData && (Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 11 || Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 12) )
              {
                if ( pathData.pathZones )
                {
                  v68 = Path_ConvertNodeToIndex(v27);
                  v69 = Path_NodeZoneFromIndex(v68);
                  if ( v69 != 255 )
                  {
                    if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 12 )
                    {
                      if ( Path_ZoneIsTraversalIsland(v69) )
                        v138 = colorRed;
                      else
                        v138 = colorBlue;
                    }
                    else
                    {
                      v138 = *zoneColor[v69 & 7];
                    }
                    v70 = j_va("%i", v69);
                    G_Main_AddDebugString(&pos, &v138, 0.5, v70);
                    v71 = 0;
                    if ( v27->constant.totalLinkCount )
                    {
                      do
                      {
                        nodeNum = v27->constant.Links[v71].nodeNum;
                        v73 = Path_ConvertIndexToNode(v27->constant.Links[v71].nodeNum);
                        pathnode_t::GetPos(v73, &targetDirection);
                        v74 = (float)((float)(pos.v[0] - targetDirection.v[0]) * 0.5) + targetDirection.v[0];
                        v75 = (float)((float)(pos.v[1] - targetDirection.v[1]) * 0.5) + targetDirection.v[1];
                        v76 = (float)((float)(pos.v[2] - targetDirection.v[2]) * 0.5) + targetDirection.v[2];
                        targetDirection.v[2] = v76;
                        targetDirection.v[0] = v74;
                        targetDirection.v[1] = v75;
                        v77 = Path_NodeZoneFromIndex(nodeNum);
                        if ( v77 != 255 )
                        {
                          v137.v[1] = pos.v[1];
                          v137.v[2] = pos.v[2] + 15.0;
                          v137.v[0] = pos.v[0];
                          vEyePosOut.v[0] = v74;
                          vEyePosOut.v[1] = v75;
                          vEyePosOut.v[2] = v76 + 15.0;
                          if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 11 )
                          {
                            if ( v77 == v69 )
                              v138 = *zoneColor[v69 & 7];
                            else
                              v138 = colorDkGrey;
                          }
                          G_DebugLine(&v137, &vEyePosOut, &v138, 1);
                        }
                        ++v71;
                      }
                      while ( v71 < v27->constant.totalLinkCount );
                      v10 = FLOAT_60_0;
                      v25 = FLOAT_25_0;
                      v26 = FLOAT_70_0;
                    }
                  }
                }
              }
              else
              {
LABEL_118:
                if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") != 16 )
                {
                  if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") > 4 )
                    goto LABEL_137;
                  if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 2 || Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 4 )
                  {
                    v81 = Path_ConvertNodeToIndex(v27);
                    v82 = j_va("%i", v81);
                    G_Main_AddDebugString(&pos, &colorWhite, 1.0, v82);
                  }
                  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes");
                  v84 = Int_Internal_DebugName >= 3;
                  if ( Int_Internal_DebugName < 3 )
                    wLinkCount = v27->dynamic.wLinkCount;
                  else
                    wLinkCount = v27->constant.totalLinkCount;
                  if ( wLinkCount )
                  {
                    for ( k = 0; k < wLinkCount; ++k )
                      Path_DrawDebugLink(v27, k, v84);
                    goto LABEL_137;
                  }
LABEL_134:
                  Path_DrawDebugNoLinks(v27, &colorRed, 0);
                  goto LABEL_137;
                }
                if ( (v27->constant.spawnflags & 0x40000) == 0 )
                  goto LABEL_137;
                totalLinkCount = v27->constant.totalLinkCount;
                if ( !v27->constant.totalLinkCount )
                  goto LABEL_134;
                v79 = 0;
                v80 = 0i64;
                do
                {
                  if ( (Path_ConvertIndexToNode(v27->constant.Links[v80].nodeNum)->constant.spawnflags & 0x40000) != 0 )
                    Path_DrawDebugLink(v27, v79, 0);
                  ++v79;
                  ++v80;
                }
                while ( v79 < totalLinkCount );
              }
LABEL_137:
              v24 = FLOAT_0_0039215689;
              v22 = ++v124;
            }
            while ( v124 < v125 );
            value = v126;
            v11 = FLOAT_90_0;
            v6 = tls_index;
          }
          if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") >= 8 && Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") <= 10 )
          {
            *(_QWORD *)results = 0i64;
            v146 = 0i64;
            v147 = 0i64;
            v148 = 0i64;
            v149 = 0i64;
            v150 = 0i64;
            v151 = 0i64;
            v152 = 0i64;
            AI_FindEntrances(&outPos, results, 32);
          }
          if ( pathData.usePathExtraData && (Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 11 || Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 12) )
          {
            v87 = 0;
            color.halfSize.v[1] = FLOAT_32_0;
            color.halfSize.v[2] = FLOAT_32_0;
            *(_OWORD *)color.midPoint.v = _xmm;
            if ( pathData.zoneCount )
            {
              while ( 1 )
              {
                v88 = Path_ConvertZoneIndexToZone(v87);
                if ( !v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7863, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
                  __debugbreak();
                pathnode_t::GetPos(v88, &pos);
                v89 = pos.v[2] + 32.0;
                pos.v[2] = pos.v[2] + 32.0;
                if ( value != 0.0 && (float)((float)((float)((float)(outPos.v[1] - pos.v[1]) * (float)(outPos.v[1] - pos.v[1])) + (float)((float)(outPos.v[0] - pos.v[0]) * (float)(outPos.v[0] - pos.v[0]))) + (float)((float)(outPos.v[2] - v89) * (float)(outPos.v[2] - v89))) > (float)(value * value) || !Path_NodeInOrNearPlayerView(v88, &outPos, &viewDir, VIEW_FOV_DOT_0) )
                  goto LABEL_166;
                if ( !pathData.pathZones )
                  break;
                v90 = Path_ConvertNodeToIndex(v88);
                v91 = Path_NodeZoneFromIndex(v90);
                if ( v91 == 255 )
                  goto LABEL_157;
LABEL_159:
                if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 12 )
                {
                  if ( Path_ZoneIsTraversalIsland(v91) )
                    *(vec4_t *)v135.midPoint.v = colorRed;
                  else
                    *(vec4_t *)v135.midPoint.v = colorBlue;
                }
                else
                {
                  *(vec4_t *)v135.midPoint.v = *zoneColor[v91 & 7];
                }
                G_DebugBox(&pos, &color, 0.0, (const vec4_t *)&v135, 0, 0);
                for ( m = 0; m < v88->dynamic.wLinkCount; ++m )
                {
                  v93 = Path_ConvertIndexToNode(v88->constant.Links[m].nodeNum);
                  pathnode_t::GetPos(v93, &start);
                  start.v[0] = (float)((float)(pos.v[0] - start.v[0]) * 0.5) + start.v[0];
                  start.v[1] = (float)((float)(pos.v[1] - start.v[1]) * 0.5) + start.v[1];
                  start.v[2] = (float)((float)(pos.v[2] - (float)(start.v[2] + 32.0)) * 0.5) + (float)(start.v[2] + 32.0);
                  G_DebugLine(&pos, &start, (const vec4_t *)&v135, 0);
                }
LABEL_166:
                if ( (unsigned int)++v87 >= pathData.zoneCount )
                {
                  v6 = tls_index;
                  goto LABEL_168;
                }
              }
              v91 = 255;
LABEL_157:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7879, ASSERT_TYPE_ASSERT, "( nodeZone != 255 )", (const char *)&queryFormat, "nodeZone != PATH_INVALID_ZONE") )
                __debugbreak();
              goto LABEL_159;
            }
          }
LABEL_168:
          if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 14 )
          {
            G_Main_AddDebugString2D(v23, v10, &colorYellow, 1.5, "Path Extra Data Size");
            Com_sprintf((char *)dest, 0x200ui64, "Num path nodes (for reference): %i", g_path.actualNodeCount - pathData.zoneCount);
            G_Main_AddDebugString2D(v23, 114.0, &colorYellow, 1.5, (const char *)dest);
            LODWORD(fmt) = pathData.zonesBytes / 1024;
            Com_sprintf((char *)dest, 0x200ui64, "Path Zones bytes: %d (%d K)", (unsigned int)pathData.zonesBytes, fmt);
            G_Main_AddDebugString2D(v23, 141.0, &colorYellow, 1.5, (const char *)dest);
            LODWORD(fmta) = pathData.exposureBytes / 1024;
            Com_sprintf((char *)dest, 0x200ui64, "Path Exposure bytes: %d (%d K)", (unsigned int)pathData.exposureBytes, fmta);
            G_Main_AddDebugString2D(v23, 168.0, &colorYellow, 1.5, (const char *)dest);
            LODWORD(fmtb) = pathData.noPeekVisBytes / 1024;
            Com_sprintf((char *)dest, 0x200ui64, "No Peek Vis bytes: %d (%d K)", (unsigned int)pathData.noPeekVisBytes, fmtb);
            G_Main_AddDebugString2D(v23, 195.0, &colorYellow, 1.5, (const char *)dest);
          }
        }
        Nav_SetDebugDrawFlags();
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 15 )
          Path_DebugDrawJumpNodeLinks();
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNearbyNodes, "ai_showNearbyNodes") )
        {
          v94 = Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNearbyNodes, "ai_showNearbyNodes");
          v95 = v94;
          if ( !v94 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7178, ASSERT_TYPE_ASSERT, "(numNodes)", (const char *)&queryFormat, "numNodes") )
            __debugbreak();
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_ai_showNodesDist, "ai_showNodesDist");
          v97 = Path_NodesInCylinder(&outPos, NULL, *(float *)&Float_Internal_DebugName, 1000000000.0, (pathsort_s *)dest, 256, -1, 0);
          std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>((pathsort_s *)dest, (pathsort_s *)dest + v97, v97, Path_CompareNodesIncreasingDistOnly);
          if ( v97 > 0 )
          {
            v98 = v95;
            v99 = (const pathnode_t **)dest;
            for ( n = 0i64; n < v97; ++n )
            {
              if ( n >= v98 )
                break;
              Path_DrawDebugNode(&outPos, *v99);
              v99 += 2;
            }
          }
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_showPathFindNodes, "ai_showPathFindNodes") )
        {
          for ( ii = 0; ii < (signed int)(g_path.actualNodeCount - pathData.zoneCount); ++ii )
          {
            if ( Path_NodeValid(ii) )
            {
              v102 = &pathData.nodes[ii];
              if ( v102->transient.iSearchFrame == level.iSearchFrame )
                Path_DrawDebugNode(&outPos, v102);
            }
          }
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ai_showNearestNodes, "ai_showNearestNodes") )
        {
          if ( !level.sentients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7211, ASSERT_TYPE_ASSERT, "(level.sentients != 0)", (const char *)&queryFormat, "level.sentients != NULL") )
            __debugbreak();
          for ( jj = 0; jj < level.maxSentients; ++jj )
          {
            v104 = &level.sentients[jj];
            if ( v104->inuse && v104->ent->s.eType != ET_INVISIBLE )
            {
              v105 = Sentient_NearestNode(&level.sentients[jj]);
              if ( v105 )
              {
                Sentient_GetDebugEyePosition(v104, &vEyePosOut);
                pathnode_t::GetPos(v105, &v137);
                G_DebugLine(&vEyePosOut, &v137, &nodeColorTable[v105->constant.type], 1);
                Path_DrawDebugNode(&outPos, v105);
              }
            }
          }
        }
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showVisData, "ai_showVisData") )
          Path_DrawVisData();
        if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || Dvar_GetInt_Internal_DebugName(DVARINT_ai_searchDebug, "ai_searchDebug") <= 0 )
          goto LABEL_217;
        if ( dword_14C8E2424 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 1772i64) )
        {
          j__Init_thread_header(&dword_14C8E2424);
          if ( dword_14C8E2424 == -1 )
          {
            s_aiSearchDebug_LastTime = level.time - 15000;
            j__Init_thread_footer(&dword_14C8E2424);
          }
        }
        if ( (int)abs32(level.time - s_aiSearchDebug_LastTime) <= 20000 )
          goto LABEL_217;
        v135.halfSize.v[1] = FLOAT_15_0;
        v135.halfSize.v[2] = FLOAT_46_0;
        *(_OWORD *)v135.midPoint.v = _xmm;
        v106 = &level.clients[level.gentities->s.number];
        if ( !level.gentities->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7973, ASSERT_TYPE_ASSERT, "( localEnt && localEnt->client )", (const char *)&queryFormat, "localEnt && localEnt->client") )
          __debugbreak();
        if ( !v106 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7974, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
          __debugbreak();
        AngleVectors(&v106->ps.viewangles, &targetDirection, NULL, NULL);
        p_origin = &v106->ps.origin;
        *(_QWORD *)dest[0].searchOrigin.v = *(_QWORD *)v106->ps.origin.v;
        dest[0].searchOrigin.v[2] = v106->ps.origin.v[2];
        v108 = (float)Dvar_GetInt_Internal_DebugName(DVARINT_ai_searchDebug, "ai_searchDebug");
        dest[0].nodeNearestSearchOrigin = Path_NearestNodeByDistanceOnly(&v106->ps.origin, v108 * 127.5);
        if ( dest[0].nodeNearestSearchOrigin )
        {
          v109 = fsqrt((float)((float)(v106->ps.velocity.v[0] * v106->ps.velocity.v[0]) + (float)(v106->ps.velocity.v[1] * v106->ps.velocity.v[1])) + (float)(v106->ps.velocity.v[2] * v106->ps.velocity.v[2]));
          dest[0].highestPriorityDistScalar = FLOAT_0_5;
          dest[0].maxSearchDistScalar = FLOAT_0_75;
          v110 = Dvar_GetInt_Internal_DebugName(DVARINT_ai_searchDebug, "ai_searchDebug");
          AI_BuildSearchArea(dest, &targetDirection, v109, 1000 * v110, NULL, 0, AI_SEARCH_THOROUGH);
          G_DebugBox(p_origin, &v135, 0.0, &colorBlue, 1, 360);
          *(_QWORD *)vEyePosOut.v = *(_QWORD *)p_origin->v;
          v111 = v106->ps.origin.v[2] + 50.0;
          v137.v[0] = (float)(v11 * targetDirection.v[0]) + vEyePosOut.v[0];
          vEyePosOut.v[2] = v111;
          v137.v[1] = (float)(v11 * targetDirection.v[1]) + vEyePosOut.v[1];
          v137.v[2] = v111;
          targetDirection.v[2] = 0.0;
          G_DebugLineWithDuration(&vEyePosOut, &v137, &colorBlue, 1, 360);
          *(_QWORD *)start.v = *(_QWORD *)p_origin->v;
          start.v[2] = v10 + v106->ps.origin.v[2];
          v112 = j_va("%f", v109);
          CL_AddDebugString(&start, &colorBlue, 0.5, v112, 1, 360);
          if ( dest[0].currentNodeCount )
          {
            do
            {
              if ( v12 >= 0x80 )
              {
                LODWORD(typeFlags) = 128;
                LODWORD(duration) = v12;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8014, ASSERT_TYPE_ASSERT, "(unsigned)( searchNodesIndex ) < (unsigned)( 128 )", "searchNodesIndex doesn't index PATH_MAX_AI_SEARCH_NODES\n\t%i not in [0, %i)", duration, typeFlags) )
                  __debugbreak();
              }
              v113 = Path_ConvertIndexToNode(dest[0].nodes[v12].nodeIndex);
              pathnode_t::GetPos(v113, &angles);
              v114 = 0i64;
              v114.m128_f32[0] = (float)dest[0].nodes[v12].priority * 0.001;
              *(__m128 *)color.midPoint.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)colorGreen, (__m128)colorRed), _mm_shuffle_ps(v114, v114, 0)), (__m128)colorRed);
              Angle = pathnode_t::GetAngle(v113);
              G_DebugBox(&angles, &v135, *(float *)&Angle, (const vec4_t *)&color, 1, 360);
              priority = dest[0].nodes[v12].priority;
              start.v[0] = angles.v[0];
              start.v[1] = angles.v[1];
              start.v[2] = v10 + angles.v[2];
              v117 = j_va("%i", priority);
              CL_AddDebugString(&start, (const vec4_t *)&color, 0.5, v117, 1, 360);
              ++v12;
            }
            while ( v12 < dest[0].currentNodeCount );
          }
          s_aiSearchDebug_LastTime = level.time;
LABEL_217:
          v118 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ai_shownavdist, "ai_shownavdist");
          Nav_DrawUpdate(&outPos, &viewDir, *(float *)&v118, 84.5);
        }
      }
    }
  }
}

/*
==============
Path_DrawDebugClaimedNode
==============
*/
void Path_DrawDebugClaimedNode(const pathnode_t *node, float scale)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  float v5; 
  unsigned int v7; 
  int v8; 
  __int64 v9; 
  float v10; 
  __int64 v11; 
  bool v12; 
  const char *GameType; 
  int v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  const char *v18; 
  int v19; 
  int v20; 
  const char *v21; 
  int v22; 
  SentientHandle *v23; 
  int number; 
  __int64 v25; 
  gentity_s *ent; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  int v29; 
  scr_string_t *v30; 
  const char *v31; 
  sentient_s *v32; 
  const char *v33; 
  sentient_s *v34; 
  int time; 
  int *iValidTime; 
  unsigned int i; 
  const char *v38; 
  int v39; 
  $7A0F6C62E0364555C5F0E34018BDFBD3 *v40; 
  unsigned int j; 
  const char *v42; 
  unsigned int v43; 
  __int64 v44; 
  bool v45; 
  const char *v46; 
  int v47; 
  __int64 v48; 
  unsigned int v49; 
  unsigned int v50; 
  const char *v51; 
  int v52; 
  int v53; 
  const char *v54; 
  int v55; 
  int v56; 
  float v57; 
  int v58; 
  scr_string_t *v59; 
  const char *v60; 
  const char *v61; 
  const char *v62; 
  __int64 v63; 
  __int64 v64; 
  vec3_t pos; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 

  v5 = scale * 0.69999999;
  v67 = v3;
  v66 = v4;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v7 = 0;
  v8 = Path_NodeMaxNumTeamOwners(node);
  v9 = v8;
  v10 = (float)(scale * 0.69999999) * 12.0;
  if ( v8 > 0 )
  {
    v11 = 0i64;
    do
    {
      if ( BG_BotSystemEnabled() )
      {
        GameType = SV_GameMP_GetGameType();
        v14 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
        if ( !v14 )
        {
          v14 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
          if ( !v14 )
            v14 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
        }
        v12 = v14 == 0;
      }
      else
      {
        v12 = 1;
      }
      v15 = v11;
      v16 = v7;
      if ( v12 )
        v15 = 0i64;
      if ( v12 )
        v16 = 0;
      if ( !node )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
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
        v17 = (v19 != 0) + 1;
      }
      else
      {
        v17 = 1;
      }
      if ( v16 >= v17 )
      {
        if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
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
        LODWORD(v64) = v20;
        LODWORD(v63) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v63, v64) )
          __debugbreak();
      }
      v23 = &node->dynamic.pOwners[v15];
      if ( SentientHandle::isDefined(v23) )
      {
        number = v23->number;
        if ( number - 1 >= level.maxSentients )
        {
          LODWORD(v64) = level.maxSentients;
          LODWORD(v63) = number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( level.maxSentients )", "number - 1 doesn't index level.maxSentients\n\t%i not in [0, %i)", v63, v64) )
            __debugbreak();
        }
        v25 = v23->number;
        if ( !level.sentients[v25 - 1].ent )
        {
          LODWORD(v64) = v25 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 146, ASSERT_TYPE_ASSERT, "( ( level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( level.sentients[number - 1].ent )", v64) )
            __debugbreak();
        }
        ent = level.sentients[v23->number - 1].ent;
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v27 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
        v28 = (v27 >> 63) + v27;
        if ( (unsigned int)v28 >= 0x800 )
        {
          LODWORD(v64) = 2048;
          LODWORD(v63) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v63, v64) )
            __debugbreak();
        }
        v28 = (__int16)v28;
        if ( (unsigned int)(__int16)v28 >= 0x800 )
        {
          LODWORD(v64) = 2048;
          LODWORD(v63) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v63, v64) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v28].r.isInUse != g_entityIsInUse[v28] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v28] )
        {
          LODWORD(v64) = v23->number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 147, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v64) )
            __debugbreak();
        }
        if ( !level.sentients[v23->number - 1].ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6855, ASSERT_TYPE_ASSERT, "(nodeOwnerSentHandle->sentient()->ent)", (const char *)&queryFormat, "nodeOwnerSentHandle->sentient()->ent") )
          __debugbreak();
        if ( v9 <= 1 )
        {
          v34 = SentientHandle::sentient(v23);
          v33 = j_va("Owner: %d", (unsigned int)v34->ent->s.number);
        }
        else
        {
          if ( v7 >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
          {
            LODWORD(v64) = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2;
            LODWORD(v63) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 219, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v63, v64) )
              __debugbreak();
          }
          v29 = v7 + 1;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          {
            if ( v29 < 0 || (unsigned int)v29 >= 6 )
            {
              LODWORD(v63) = v7 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v63) )
                __debugbreak();
            }
            if ( !S_TEAMS_SP_SCR_STRINGS_10[v11 + 1] )
            {
              LODWORD(v63) = v7 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 275, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )", "( team ) = %i", v63) )
                __debugbreak();
            }
            v30 = (scr_string_t *)S_TEAMS_SP_SCR_STRINGS_10[v11 + 1];
          }
          else
          {
            if ( v29 < 0 || (unsigned int)v29 >= 0xCB )
            {
              LODWORD(v63) = v7 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v63) )
                __debugbreak();
            }
            if ( !S_TEAMS_MP_SCR_STRINGS_10[v11 + 1] )
            {
              LODWORD(v63) = v7 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 284, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )", "( team ) = %i", v63) )
                __debugbreak();
            }
            v30 = (scr_string_t *)S_TEAMS_MP_SCR_STRINGS_10[v11 + 1];
          }
          v31 = SL_ConvertToString(*v30);
          v32 = SentientHandle::sentient(v23);
          v33 = j_va("Owner: %d (%s)", (unsigned int)v32->ent->s.number, v31);
        }
        G_Main_AddDebugString(&pos, &colorGreen, v5, v33);
      }
      ++v7;
      ++v11;
      pos.v[2] = v10 + pos.v[2];
    }
    while ( v11 < v9 );
  }
  time = level.time;
  iValidTime = node->dynamic.iValidTime;
  for ( i = 0; i < 3; ++i )
  {
    if ( time < *iValidTime )
    {
      v38 = j_va("Invalid %i: %2.1f", i, (float)((float)(*iValidTime - time) * 0.001));
      G_Main_AddDebugString(&pos, &colorYellow, v5, v38);
      time = level.time;
      pos.v[2] = v10 + pos.v[2];
    }
    ++iValidTime;
  }
  if ( BG_ActorOrAgentSystemEnabled() )
  {
    v39 = level.time;
    v40 = &node->dynamic.36;
    for ( j = 0; j < 3; ++j )
    {
      if ( v39 < v40->actors.dangerousNodeTime[0] )
      {
        v42 = j_va("Dangerous %i: %2.1f", j, (float)((float)(v40->actors.dangerousNodeTime[0] - v39) * 0.001));
        G_Main_AddDebugString(&pos, &colorYellow, v5, v42);
        v39 = level.time;
        pos.v[2] = v10 + pos.v[2];
      }
      v40 = ($7A0F6C62E0364555C5F0E34018BDFBD3 *)((char *)v40 + 4);
    }
  }
  v43 = 0;
  if ( v9 > 0 )
  {
    v44 = 0i64;
    v68 = v2;
    do
    {
      if ( BG_BotSystemEnabled() )
      {
        v46 = SV_GameMP_GetGameType();
        v47 = *(unsigned __int8 *)v46 - (unsigned __int8)aBr_2[0];
        if ( !v47 )
        {
          v47 = *((unsigned __int8 *)v46 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v47 )
            v47 = *((unsigned __int8 *)v46 + 2) - (unsigned __int8)aBr_2[2];
        }
        v45 = v47 == 0;
      }
      else
      {
        v45 = 1;
      }
      v48 = v44;
      v49 = v43;
      if ( v45 )
        v48 = 0i64;
      if ( v45 )
        v49 = 0;
      if ( !node )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 413, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
      }
      if ( BG_BotSystemEnabled() )
      {
        v51 = SV_GameMP_GetGameType();
        v52 = *(unsigned __int8 *)v51 - (unsigned __int8)aBr_2[0];
        if ( !v52 )
        {
          v52 = *((unsigned __int8 *)v51 + 1) - (unsigned __int8)aBr_2[1];
          if ( !v52 )
            v52 = *((unsigned __int8 *)v51 + 2) - (unsigned __int8)aBr_2[2];
        }
        v50 = (v52 != 0) + 1;
      }
      else
      {
        v50 = 1;
      }
      if ( v49 >= v50 )
      {
        if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( BG_BotSystemEnabled() )
        {
          v54 = SV_GameMP_GetGameType();
          v55 = *(unsigned __int8 *)v54 - (unsigned __int8)aBr_2[0];
          if ( !v55 )
          {
            v55 = *((unsigned __int8 *)v54 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v55 )
              v55 = *((unsigned __int8 *)v54 + 2) - (unsigned __int8)aBr_2[2];
          }
          v53 = (v55 != 0) + 1;
        }
        else
        {
          v53 = 1;
        }
        LODWORD(v64) = v53;
        LODWORD(v63) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 414, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v63, v64) )
          __debugbreak();
      }
      v56 = node->dynamic.iFreeTime[v48];
      if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 444, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( Path_NodeGetFreeTime(node, v43) != 0x7FFFFFFF && level.time < v56 )
      {
        v57 = (float)(v56 - level.time) * 0.001;
        if ( v9 <= 1 )
        {
          v61 = j_va("Delay: %2.1f", v57);
        }
        else
        {
          if ( v43 >= (unsigned int)Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2 )
          {
            LODWORD(v64) = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) + 2;
            LODWORD(v63) = v43;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 219, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? (3) : (2) )", "nodeTeam doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) ? MAX_NODE_TEAMS_SP : MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v63, v64) )
              __debugbreak();
          }
          v58 = v43 + 1;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          {
            if ( v58 < 0 || (unsigned int)v58 >= 6 )
            {
              LODWORD(v63) = v43 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v63) )
                __debugbreak();
            }
            if ( !S_TEAMS_SP_SCR_STRINGS_10[v44 + 1] )
            {
              LODWORD(v63) = v43 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 275, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )", "( team ) = %i", v63) )
                __debugbreak();
            }
            v59 = (scr_string_t *)S_TEAMS_SP_SCR_STRINGS_10[v44 + 1];
          }
          else
          {
            if ( v58 < 0 || (unsigned int)v58 >= 0xCB )
            {
              LODWORD(v63) = v43 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v63) )
                __debugbreak();
            }
            if ( !S_TEAMS_MP_SCR_STRINGS_10[v44 + 1] )
            {
              LODWORD(v63) = v43 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 284, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )", "( team ) = %i", v63) )
                __debugbreak();
            }
            v59 = (scr_string_t *)S_TEAMS_MP_SCR_STRINGS_10[v44 + 1];
          }
          v60 = SL_ConvertToString(*v59);
          v61 = j_va("Delay: %2.1f (%s)", v57, v60);
        }
        G_Main_AddDebugString(&pos, &colorYellow, v5, v61);
        pos.v[2] = (float)((float)(scale * 0.69999999) * 12.0) + pos.v[2];
      }
      ++v43;
      ++v44;
    }
    while ( v44 < v9 );
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    if ( BG_BotSystemEnabled() )
    {
      v62 = SV_GameMP_GetGameType();
      if ( *v62 != aBr_2[0] || v62[1] != aBr_2[1] || v62[2] != aBr_2[2] )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6915, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", "%s\n\tAccess to pathnode_dynamic::bots", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
          __debugbreak();
        if ( node->dynamic.bots.hasGlobalBadPlaceLink )
          G_Main_AddDebugString(&pos, &colorRed, v5, "badplace link");
      }
    }
  }
}

/*
==============
Path_DrawDebugLink
==============
*/
void Path_DrawDebugLink(const pathnode_t *node, const int i, bool bShowAll)
{
  __int64 v5; 
  __int64 nodeNum; 
  pathnode_t *v7; 
  int totalLinkCount; 
  pathlink_s *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int16 *p_nodeNum; 
  pathlink_s *Links; 
  int v14; 
  __int64 j; 
  const vec4_t *v16; 
  const vec4_t *v17; 
  pathlink_s *v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  unsigned __int8 flags; 
  const vec4_t *v23; 
  unsigned __int16 *wOverlapNode; 
  vec4_t *v25; 
  bool v26; 
  __int128 v27; 
  float v28; 
  float v29; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  __int128 v37; 
  float v41; 
  vec3_t end; 
  vec3_t pos; 
  vec3_t v44; 
  vec3_t up; 
  vec3_t start; 
  vec3_t v47; 
  vec3_t vector; 
  vec3_t angles; 

  v5 = i;
  nodeNum = node->constant.Links[i].nodeNum;
  v7 = &pathData.nodes[nodeNum];
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  pathnode_t::GetPos(v7, &end);
  pathnode_t::GetAngles((pathnode_t *)node, &vector);
  AngleVectors(&vector, NULL, NULL, &up);
  pos.v[0] = (float)(16.0 * up.v[0]) + pos.v[0];
  pos.v[1] = (float)(16.0 * up.v[1]) + pos.v[1];
  pos.v[2] = (float)(16.0 * up.v[2]) + pos.v[2];
  pathnode_t::GetAngles(v7, &angles);
  AngleVectors(&angles, NULL, NULL, &up);
  end.v[0] = (float)(16.0 * up.v[0]) + end.v[0];
  end.v[1] = (float)(16.0 * up.v[1]) + end.v[1];
  end.v[2] = (float)(16.0 * up.v[2]) + end.v[2];
  if ( bShowAll )
    totalLinkCount = v7->constant.totalLinkCount;
  else
    totalLinkCount = v7->dynamic.wLinkCount;
  if ( totalLinkCount <= 0 )
  {
LABEL_8:
    Links = node->constant.Links;
    v14 = 2;
    for ( j = 2i64; j >= 0; --j )
    {
      if ( Links[v5].ubBadPlaceCount[j] )
        break;
      --v14;
    }
    if ( Path_IsNegotiationLink(node, &pathData.nodes[Links[v5].nodeNum]) )
    {
      v16 = &colorOrange;
      v17 = &colorOrange;
    }
    else
    {
      v16 = &colorRed;
      v17 = &colorMagenta;
      if ( v14 < 0 )
        v17 = &colorRed;
    }
    G_DebugLine(&pos, &end, v17, 1);
    v37 = LODWORD(pos.v[1]);
    *(float *)&v37 = fsqrt((float)((float)((float)(pos.v[1] - end.v[1]) * (float)(pos.v[1] - end.v[1])) + (float)((float)(pos.v[0] - end.v[0]) * (float)(pos.v[0] - end.v[0]))) + (float)((float)(pos.v[2] - end.v[2]) * (float)(pos.v[2] - end.v[2])));
    _XMM3 = v37;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v41 = (float)((float)((float)(pos.v[2] - end.v[2]) * (float)(1.0 / *(float *)&_XMM0)) * 8.0) + (float)((float)(pos.v[2] + end.v[2]) * 0.5);
    start.v[2] = v41 + 8.0;
    v47.v[2] = v41 - 8.0;
    v44.v[0] = (float)(pos.v[0] + end.v[0]) * 0.5;
    v44.v[1] = (float)(pos.v[1] + end.v[1]) * 0.5;
    v44.v[2] = (float)(pos.v[2] + end.v[2]) * 0.5;
    start.v[0] = (float)((float)((float)(pos.v[0] - end.v[0]) * (float)(1.0 / *(float *)&_XMM0)) * 8.0) + v44.v[0];
    start.v[1] = (float)((float)((float)(pos.v[1] - end.v[1]) * (float)(1.0 / *(float *)&_XMM0)) * 8.0) + v44.v[1];
    v47.v[0] = start.v[0];
    v47.v[1] = start.v[1];
    G_DebugLine(&start, &v44, v16, 0);
    G_DebugLine(&v47, &v44, v16, 0);
  }
  else
  {
    v9 = v7->constant.Links;
    v10 = 0i64;
    v11 = 0i64;
    p_nodeNum = &v9->nodeNum;
    while ( node != &pathData.nodes[*p_nodeNum] )
    {
      ++v11;
      p_nodeNum += 6;
      if ( v11 >= totalLinkCount )
        goto LABEL_8;
    }
    if ( node > v7 )
    {
      v18 = node->constant.Links;
      v19 = 2i64;
      v20 = 2i64;
      v21 = 0;
      do
      {
        if ( v18[v5].ubBadPlaceCount[v20] )
        {
          v21 = 1;
          break;
        }
        --v20;
      }
      while ( v20 >= 0 );
      while ( !v9[v11].ubBadPlaceCount[v19] )
      {
        if ( --v19 < 0 )
          goto LABEL_23;
      }
      v21 |= 2u;
LABEL_23:
      if ( v21 )
      {
        v23 = &colorYellow;
        v26 = v21 == 3;
        v25 = &colorBlue;
      }
      else
      {
        flags = v18[v5].flags;
        v23 = &colorCyan;
        if ( flags )
          v23 = &colorGreen;
        wOverlapNode = node->constant.wOverlapNode;
        while ( *wOverlapNode != (_WORD)nodeNum )
        {
          ++v10;
          ++wOverlapNode;
          if ( v10 >= 2 )
            goto LABEL_34;
        }
        v25 = &colorLtOrange;
        v26 = flags == 0;
        v23 = &colorMagenta;
      }
      if ( !v26 )
        v23 = v25;
LABEL_34:
      G_DebugLine(&pos, &end, v23, 1);
      if ( (unsigned int)(v21 - 1) <= 1 )
      {
        v27 = LODWORD(pos.v[1]);
        v28 = (float)(pos.v[0] + end.v[0]) * 0.5;
        v29 = (float)(pos.v[1] + end.v[1]) * 0.5;
        *(float *)&v27 = fsqrt((float)((float)((float)(pos.v[1] - end.v[1]) * (float)(pos.v[1] - end.v[1])) + (float)((float)(pos.v[0] - end.v[0]) * (float)(pos.v[0] - end.v[0]))) + (float)((float)(pos.v[2] - end.v[2]) * (float)(pos.v[2] - end.v[2])));
        _XMM3 = v27;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        v33 = (float)(pos.v[0] - end.v[0]) * (float)(1.0 / *(float *)&_XMM0);
        v34 = (float)(pos.v[1] - end.v[1]) * (float)(1.0 / *(float *)&_XMM0);
        v35 = (float)(pos.v[2] - end.v[2]) * (float)(1.0 / *(float *)&_XMM0);
        v44.v[0] = v28;
        v44.v[1] = v29;
        v44.v[2] = (float)(pos.v[2] + end.v[2]) * 0.5;
        if ( v21 == 1 )
        {
          LODWORD(v33) ^= _xmm;
          LODWORD(v34) ^= _xmm;
          LODWORD(v35) = COERCE_UNSIGNED_INT((float)(pos.v[2] - end.v[2]) * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
        }
        v36 = (float)(v35 * 8.0) + (float)((float)(pos.v[2] + end.v[2]) * 0.5);
        v47.v[2] = v36 - 8.0;
        start.v[0] = (float)(v33 * 8.0) + v28;
        start.v[1] = (float)(v34 * 8.0) + v29;
        v47.v[0] = start.v[0];
        v47.v[1] = start.v[1];
        start.v[2] = v36 + 8.0;
        G_DebugLine(&start, &v44, v23, 1);
        G_DebugLine(&v47, &v44, v23, 1);
      }
    }
  }
}

/*
==============
Path_DrawDebugNoLinks
==============
*/
void Path_DrawDebugNoLinks(const pathnode_t *node, const vec4_t *color, int duration)
{
  float v5; 
  float v6; 
  float v7; 
  vec3_t end; 
  vec3_t start; 
  vec3_t pos; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v5 = pos.v[2] + 1.0;
  v6 = pos.v[0];
  v7 = pos.v[1];
  start.v[0] = pos.v[0] + 6.9282031;
  start.v[1] = pos.v[1] + 4.0;
  end.v[1] = pos.v[1] - 4.0;
  start.v[2] = pos.v[2] + 1.0;
  end.v[0] = pos.v[0] - 6.9282031;
  end.v[2] = pos.v[2] + 1.0;
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  start.v[0] = v6 - 4.0;
  start.v[1] = v7 + 6.9282031;
  end.v[0] = v6 - -4.0;
  end.v[1] = v7 - 6.9282031;
  start.v[2] = v5;
  end.v[2] = v5;
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
}

/*
==============
Path_DrawDebugNode
==============
*/
void Path_DrawDebugNode(const vec3_t *cameraPos, const pathnode_t *node)
{
  const dvar_t *v4; 
  int integer; 
  bool v6; 
  bool v7; 
  unsigned __int16 type; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  gentity_s *Entity; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  unsigned __int16 v18; 
  char *v19; 
  const vec4_t *v20; 
  int v21; 
  const char *v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  bool IsNodeIndexExposedSkyBase; 
  const char *v26; 
  unsigned __int16 v27; 
  const char *v28; 
  vec3_t xyz; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7076, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v4 = DVARINT_ai_showNodesFilter;
  if ( !DVARINT_ai_showNodesFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodesFilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer )
  {
    switch ( integer )
    {
      case 1:
        v6 = ((1 << LOBYTE(node->constant.type)) & 0x806400FC) == 0;
        goto LABEL_22;
      case 2:
        v7 = ((1 << LOBYTE(node->constant.type)) & 0x806400FC) == 0;
        goto LABEL_23;
      case 3:
        v7 = node->constant.type == 6;
        goto LABEL_23;
      case 4:
        v7 = node->constant.type == 7;
        goto LABEL_23;
      case 5:
        type = node->constant.type;
        if ( type != 2 && type != 22 )
          return;
        break;
      case 6:
        v7 = node->constant.type == 3;
        goto LABEL_23;
      case 7:
        v7 = node->constant.type == 4;
        goto LABEL_23;
      case 8:
        v7 = node->constant.type == 5;
        goto LABEL_23;
      case 9:
        v7 = node->constant.type == 31;
        goto LABEL_23;
      case 10:
        v7 = (unsigned int)node->constant.type - 10 <= 2;
        goto LABEL_23;
      case 11:
        v6 = ((1 << LOBYTE(node->constant.type)) & 0x78030000) == 0;
LABEL_22:
        v7 = !v6;
LABEL_23:
        if ( v7 )
          break;
        return;
      default:
        break;
    }
  }
  Path_DrawDebugNodeBoxWithParams(node, &nodeColorTable[node->constant.type], 16.0, 0);
  if ( (node->constant.spawnflags & 0x4000) != 0 && node->constant.error == PNERR_NOPEEKOUT )
    Path_DrawDebugPeekOuts(node);
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v9 = pos.v[2];
  v10 = pos.v[0];
  v11 = pos.v[1];
  v12 = FLOAT_1_0;
  xyz.v[2] = pos.v[2] + 8.0;
  xyz.v[0] = pos.v[0];
  xyz.v[1] = pos.v[1];
  Entity = G_Utils_FindEntity(NULL, 380, scr_const.player);
  if ( Entity )
  {
    v14 = (float)(cameraPos->v[2] - xyz.v[2]) + Entity->client->ps.viewHeightCurrent;
    v12 = fsqrt((float)((float)((float)(cameraPos->v[1] - xyz.v[1]) * (float)(cameraPos->v[1] - xyz.v[1])) + (float)((float)(cameraPos->v[0] - xyz.v[0]) * (float)(cameraPos->v[0] - xyz.v[0]))) + (float)(v14 * v14)) * 0.0022222223;
  }
  v15 = DVARINT_path_nodeInfoType;
  v17 = v12 * 0.75;
  v16 = v12 * 0.75;
  if ( !DVARINT_path_nodeInfoType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "path_nodeInfoType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  switch ( v15->current.integer )
  {
    case 0:
      v21 = Path_ConvertNodeToIndex(node);
      if ( v21 < pathData.fixedNodeCount || (v22 = "%d*", v21 >= pathData.maxDynamicSpawnedNodeCount + pathData.fixedNodeCount) )
        v22 = "%d";
      v19 = j_va(v22);
      v20 = &colorYellow;
      goto LABEL_60;
    case 1:
      v18 = node->constant.type;
      if ( (node->constant.spawnflags & 0x20) != 0 )
      {
        v19 = j_va("%s:Choke", nodeStringTable[v18]);
        v20 = &colorYellow;
      }
      else if ( v18 == 31 )
      {
        v19 = j_va("%s:%s", nodeStringTable[31], nodeStringTable[node->dynamic.coverMultiType]);
        v20 = &colorYellow;
      }
      else
      {
        v20 = &colorYellow;
        v19 = (char *)nodeStringTable[v18];
      }
      goto LABEL_60;
    case 2:
      v19 = j_va("(%0.f %0.f %0.f)", v10, v11, v9);
      v20 = &colorYellow;
      goto LABEL_60;
    case 3:
      if ( !pathData.usePathExtraData )
      {
        if ( (node->constant.spawnflags & 0x2000) == 0 )
        {
          v26 = "Transition";
          if ( (node->constant.spawnflags & 2) == 0 )
            v26 = "Out";
          v20 = &colorYellow;
          goto LABEL_61;
        }
LABEL_49:
        v26 = "In";
        v20 = &colorYellow;
        goto LABEL_61;
      }
      v23 = Path_ConvertNodeToIndex(node);
      if ( !Path_IsNodeIndexExposedSkyBase(v23, 0) )
        goto LABEL_49;
      v24 = Path_ConvertNodeToIndex(node);
      IsNodeIndexExposedSkyBase = Path_IsNodeIndexExposedSkyBase(v24, 1);
      v26 = "SkyStrict";
      if ( !IsNodeIndexExposedSkyBase )
        v26 = "Sky";
      v20 = &colorYellow;
LABEL_61:
      G_Main_AddDebugString(&xyz, v20, v16, v26);
      return;
    case 4:
      Path_DrawDebugClaimedNode(node, v17);
      return;
    case 5:
      Path_DrawDebugPeekOuts(node);
      return;
    case 6:
      v27 = node->constant.type;
      if ( (node->constant.spawnflags & 0x10000) != 0 )
      {
        v19 = j_va("%s:LMG Mountable", nodeStringTable[v27]);
        v20 = &colorYellow;
      }
      else
      {
        v28 = "%s:DONT LMG";
        if ( (node->constant.spawnflags & 0x80u) == 0 )
          v28 = "%s:Not Mountable";
        v19 = j_va(v28, nodeStringTable[v27]);
        v20 = &colorRed;
      }
LABEL_60:
      v26 = v19;
      goto LABEL_61;
    default:
      return;
  }
}

/*
==============
Path_DrawDebugNodeBox
==============
*/
void Path_DrawDebugNodeBox(const pathnode_t *node)
{
  Path_DrawDebugNodeBoxWithParams(node, &nodeColorTable[node->constant.type], 16.0, 0);
}

/*
==============
Path_DrawDebugNodeBoxWithParams
==============
*/
void Path_DrawDebugNodeBoxWithParams(const pathnode_t *node, const vec4_t *color, float width, int duration)
{
  int v7; 
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

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6764, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v7 = 1 << LOBYTE(node->constant.type);
  box.midPoint.v[0] = 0.0;
  box.midPoint.v[1] = 0.0;
  box.midPoint.v[2] = width * 0.5;
  box.halfSize.v[0] = width;
  box.halfSize.v[1] = width;
  box.halfSize.v[2] = width * 0.5;
  if ( (v7 & 0x62700000) != 0 )
  {
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    AnglesToAxis(&vector, &axis);
    G_DebugBoxOriented(&pos, &box, &axis, color, 1, duration);
  }
  else
  {
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    G_DebugBox(&pos, &box, vector.v[1], color, 1, duration);
  }
  if ( (node->constant.spawnflags & 0x8000) != 0 )
  {
    if ( ((1 << LOBYTE(node->constant.type)) & 0x62700000) != 0 )
    {
      pathnode_t::GetAngles((pathnode_t *)node, &vector);
      AngleVectors(&vector, NULL, NULL, &up);
      start.v[0] = (float)(box.midPoint.v[2] * up.v[0]) + pos.v[0];
      end.v[0] = (float)(box.halfSize.v[2] * up.v[0]) + start.v[0];
      end.v[2] = (float)(box.halfSize.v[2] * up.v[2]) + (float)((float)(box.midPoint.v[2] * up.v[2]) + pos.v[2]);
      start.v[1] = (float)(box.midPoint.v[2] * up.v[1]) + pos.v[1];
      start.v[2] = (float)(box.midPoint.v[2] * up.v[2]) + pos.v[2];
      end.v[1] = (float)(box.halfSize.v[2] * up.v[1]) + start.v[1];
      G_DebugLineWithDuration(&start, &end, color, 1, duration);
      AngleVectors(&vector, &forward, NULL, NULL);
      end.v[0] = (float)(box.halfSize.v[0] * forward.v[0]) + start.v[0];
      end.v[1] = (float)(box.halfSize.v[0] * forward.v[1]) + start.v[1];
      end.v[2] = (float)(box.halfSize.v[0] * forward.v[2]) + start.v[2];
    }
    else
    {
      start.v[0] = box.midPoint.v[0] + pos.v[0];
      start.v[2] = pos.v[2] + box.midPoint.v[2];
      start.v[1] = box.midPoint.v[1] + pos.v[1];
      pathnode_t::GetAngles((pathnode_t *)node, &vector);
      FastSinCos(vector.v[1] * 0.017453292, &s, &c);
      end.v[0] = (float)(box.halfSize.v[0] * c) + start.v[0];
      end.v[2] = start.v[2];
      end.v[1] = (float)(box.halfSize.v[0] * s) + start.v[1];
    }
    G_DebugLineWithDuration(&start, &end, color, 1, duration);
  }
}

/*
==============
Path_DrawDebugPeekOutOffset
==============
*/
void Path_DrawDebugPeekOutOffset(const pathnode_t *node, const vec3_t *offset, const vec4_t *color, const char *traceEndDebugStr)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t end; 
  vec3_t xyz; 
  vec3_t v14; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  vec3_t vector; 
  vec3_t pos; 

  if ( 0.0 != offset->v[0] || 0.0 != offset->v[1] || 0.0 != offset->v[2] )
  {
    pathnode_t::GetPos((pathnode_t *)node, &pos);
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6930, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( (node->constant.spawnflags & 0x8000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6931, ASSERT_TYPE_ASSERT, "(node->constant.spawnflags & PNF_ANGLEVALID)", (const char *)&queryFormat, "node->constant.spawnflags & PNF_ANGLEVALID") )
      __debugbreak();
    pathnode_t::GetPos((pathnode_t *)node, &v14);
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    AngleVectors(&vector, &forward, NULL, NULL);
    AnglesToAxis(&vector, &axis);
    if ( offset == &end && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v8 = offset->v[1];
    v9 = (float)((float)((float)(v8 * axis.m[1].v[0]) + (float)(axis.m[0].v[0] * offset->v[0])) + (float)(axis.m[2].v[0] * offset->v[2])) + v14.v[0];
    v10 = (float)((float)((float)(v8 * axis.m[1].v[1]) + (float)(axis.m[0].v[1] * offset->v[0])) + (float)(axis.m[2].v[1] * offset->v[2])) + v14.v[1];
    v11 = (float)((float)((float)(v8 * axis.m[1].v[2]) + (float)(axis.m[0].v[2] * offset->v[0])) + (float)(axis.m[2].v[2] * offset->v[2])) + v14.v[2];
    xyz.v[0] = (float)(32.0 * forward.v[0]) + v9;
    xyz.v[1] = (float)(32.0 * forward.v[1]) + v10;
    xyz.v[2] = (float)(32.0 * forward.v[2]) + v11;
    end.v[0] = v9;
    end.v[1] = v10;
    end.v[2] = v11;
    G_DebugLine(&pos, &end, color, 1);
    G_DebugLine(&end, &xyz, color, 1);
    if ( traceEndDebugStr )
      G_Main_AddDebugString(&xyz, color, 0.15000001, traceEndDebugStr);
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
  const dvar_t *v9; 
  const vec4_t *v10; 
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
          v9 = DVARFLT_ai_showVisDataDist;
          if ( !DVARFLT_ai_showVisDataDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showVisDataDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v9);
          if ( fsqrt((float)((float)(end.v[1] - pos.v[1]) * (float)(end.v[1] - pos.v[1])) + (float)((float)(end.v[0] - pos.v[0]) * (float)(end.v[0] - pos.v[0]))) > v9->current.value )
            goto LABEL_38;
          if ( pathData.usePathExtraData && Dvar_GetInt_Internal_DebugName(DVARINT_ai_showVisData, "ai_showVisData") == 4 )
          {
            if ( pathData.pathNoPeekVis )
            {
              Path_DrawDebugNode(&outPos, v7);
              if ( !Path_NodesVisibleNoPeek(v4, v7) )
              {
LABEL_36:
                v10 = &colorYellow;
                goto LABEL_37;
              }
              v10 = &colorRed;
LABEL_37:
              G_DebugLine(&pos, &end, v10, 0);
            }
          }
          else
          {
            if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showVisData, "ai_showVisData") != 3 && Path_NodeSafeFrom(v4, v7) && Path_NodesVisible(v4, v7) )
            {
              Path_DrawDebugNode(&outPos, v7);
              v10 = &colorGreen;
              goto LABEL_37;
            }
            if ( Path_NodesVisible(v4, v7) )
            {
              Path_DrawDebugNode(&outPos, v7);
              v10 = &colorRed;
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
  gentity_s *Entity; 
  float v5; 
  float v6; 

  Entity = G_Utils_FindEntity(NULL, 380, scr_const.player);
  if ( !Entity )
    return FLOAT_1_0;
  v5 = cameraPos->v[1] - origin->v[1];
  v6 = (float)(cameraPos->v[2] - origin->v[2]) + Entity->client->ps.viewHeightCurrent;
  return fsqrt((float)((float)(v5 * v5) + (float)((float)(cameraPos->v[0] - origin->v[0]) * (float)(cameraPos->v[0] - origin->v[0]))) + (float)(v6 * v6)) * 0.0022222223;
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
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t pos; 
  vec3_t forward; 
  vec3_t vector; 
  tmat33_t<vec3_t> axis; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6930, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (node->constant.spawnflags & 0x8000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 6931, ASSERT_TYPE_ASSERT, "(node->constant.spawnflags & PNF_ANGLEVALID)", (const char *)&queryFormat, "node->constant.spawnflags & PNF_ANGLEVALID") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  pathnode_t::GetAngles((pathnode_t *)node, &vector);
  AngleVectors(&vector, &forward, NULL, NULL);
  AnglesToAxis(&vector, &axis);
  MatrixTransformVector(offset, &axis, outStart);
  v8 = pos.v[0] + outStart->v[0];
  v9 = pos.v[2];
  outStart->v[1] = pos.v[1] + outStart->v[1];
  outStart->v[2] = v9 + outStart->v[2];
  v10 = 32.0 * forward.v[0];
  outStart->v[0] = v8;
  v11 = v10 + v8;
  v12 = 32.0 * forward.v[1];
  outEnd->v[0] = v11;
  v13 = 32.0 * forward.v[2];
  outEnd->v[1] = v12 + outStart->v[1];
  outEnd->v[2] = v13 + outStart->v[2];
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
  pathnode_t *v2; 
  const tacpoint_t *PointForPathnode; 
  bfx::AreaHandle *AreaForPoint; 
  vec3_t pos; 
  vec3_t v7; 
  bfx::PathSpec pathSpec; 

  if ( nodeIndex >= pathData.nodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10328, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.nodeCount )", "nodeIndex doesn't index pathData.nodeCount\n\t%i not in [0, %i)", nodeIndex, pathData.nodeCount) )
    __debugbreak();
  if ( !Path_NodeValid(nodeIndex) || pathData.nodes[nodeIndex].dynamic.bInactive )
    return 1;
  v2 = Path_ConvertIndexToNode(nodeIndex);
  PointForPathnode = TacGraph_GetPointForPathnode(v2);
  if ( PointForPathnode || (pathnode_t::GetPos(v2, &pos), (PointForPathnode = TacGraph_FindClosestPoint(&pos)) != NULL) )
  {
    *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
    pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    pathSpec.m_pathSharingPenalty = 0.0;
    pathSpec.m_maxPathSharingPenalty = 0.0;
    pathSpec.m_maxSearchDist = 0.0;
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
    pathnode_t::GetPos(v2, &v7);
    Nav_GetClosestVerticalPosInMostLikelySpace(&v7, NAV_LAYER_HUMAN, 15.0, NULL, &pos, NULL);
    if ( (float)((float)((float)(pos.v[1] - v7.v[1]) * (float)(pos.v[1] - v7.v[1])) + (float)((float)(pos.v[0] - v7.v[0]) * (float)(pos.v[0] - v7.v[0]))) > 225.0 )
      return 1;
  }
  return 0;
}

/*
==============
Path_IsNodeFacingToward
==============
*/
bool Path_IsNodeFacingToward(const pathnode_t *node, const vec3_t *origin, float dotLimit)
{
  float v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  bool v15; 
  bool v16; 
  __int128 v17; 
  float v18; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  vec3_t pos; 
  vec3_t vector; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8071, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v6 = origin->v[0];
  v7 = origin->v[1];
  if ( ((1 << LOBYTE(node->constant.type)) & 0x62700000) != 0 )
  {
    v9 = LODWORD(origin->v[1]);
    v8 = v7 - pos.v[1];
    v10 = v6 - pos.v[0];
    v11 = origin->v[2] - pos.v[2];
    *(float *)&v9 = fsqrt((float)((float)(v8 * v8) + (float)(v10 * v10)) + (float)(v11 * v11));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    pathnode_t::GetAngles((pathnode_t *)node, &vector);
    AngleVectors(&vector, &pos, NULL, NULL);
    *(float *)&v9 = (float)((float)((float)(v8 * (float)(1.0 / *(float *)&_XMM0)) * pos.v[1]) + (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * pos.v[0])) + (float)((float)(v11 * (float)(1.0 / *(float *)&_XMM0)) * pos.v[2]);
    v15 = *(float *)&v9 < dotLimit;
    v16 = *(float *)&v9 == dotLimit;
  }
  else
  {
    v17 = LODWORD(origin->v[1]);
    v18 = v6 - pos.v[0];
    *(float *)&v17 = fsqrt((float)((float)(v7 - pos.v[1]) * (float)(v7 - pos.v[1])) + (float)(v18 * v18));
    _XMM2 = v17;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v22 = v18 * (float)(1.0 / *(float *)&_XMM0);
    v23 = (float)(v7 - pos.v[1]) * (float)(1.0 / *(float *)&_XMM0);
    if ( pathnode_t::GetParent((pathnode_t *)node) )
    {
      pathnode_t::GetAngles((pathnode_t *)node, &vector);
      YawVectors(vector.v[1], &pos, NULL);
      v24 = pos.v[0];
      v25 = pos.v[1];
    }
    else
    {
      v24 = node->constant.yaw_orient.localForward.v[0];
      v25 = node->constant.yaw_orient.localForward.v[1];
    }
    v26 = (float)(v23 * v25) + (float)(v22 * v24);
    v15 = v26 < dotLimit;
    v16 = v26 == dotLimit;
  }
  return !v15 && !v16;
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
_BOOL8 Path_IsOrientedNodeUpright(const pathnode_t *node)
{
  vec3_t up; 

  AngleVectors((const vec3_t *)&node->constant.44, NULL, NULL, &up);
  return up.v[2] > 0.85000002;
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
void Path_LogStrandedNodes(void)
{
  unsigned int actualNodeCount; 
  int zoneCount; 
  int maxDynamicSpawnedNodeCount; 
  signed int v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  pathnode_t *v6; 
  gentity_s *Parent; 
  float *p_number; 
  float v9; 
  float v10; 
  float v11; 
  const char *v12; 
  int v13; 
  vec3_t v; 
  tmat33_t<vec3_t> axis; 

  actualNodeCount = g_path.actualNodeCount;
  zoneCount = pathData.zoneCount;
  maxDynamicSpawnedNodeCount = pathData.maxDynamicSpawnedNodeCount;
  v3 = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  v4 = 0;
  if ( v3 < 0 )
    v3 = 0;
  if ( v3 > 0 )
  {
    v5 = 0;
    do
    {
      v6 = &pathData.nodes[v4];
      if ( !v6->dynamic.wLinkCount )
      {
        v = v6->constant.vLocalOrigin;
        Parent = pathnode_t::GetParent(v6);
        p_number = (float *)&Parent->s.number;
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          v9 = v.v[0] * axis.m[0].v[1];
          v10 = v.v[0] * axis.m[0].v[2];
          v.v[0] = (float)((float)((float)(v.v[1] * axis.m[1].v[0]) + (float)(v.v[0] * axis.m[0].v[0])) + (float)(v.v[2] * axis.m[2].v[0])) + p_number[76];
          v11 = (float)(v.v[2] * axis.m[2].v[2]) + (float)(v10 + (float)(v.v[1] * axis.m[1].v[2]));
          v.v[1] = (float)((float)((float)(v.v[1] * axis.m[1].v[1]) + v9) + (float)(v.v[2] * axis.m[2].v[1])) + p_number[77];
          v.v[2] = v11 + p_number[78];
        }
        v12 = vtos(&v);
        Com_PrintWarning(18, "Pathnode %d at pos %s has no links to other nodes and is stranded! This node cannot be used by the spawn system, place another path node near this or verify this node is on nav mesh!\n", v5, v12);
        maxDynamicSpawnedNodeCount = pathData.maxDynamicSpawnedNodeCount;
        zoneCount = pathData.zoneCount;
        actualNodeCount = g_path.actualNodeCount;
      }
      v5 = ++v4;
      v13 = actualNodeCount - zoneCount - maxDynamicSpawnedNodeCount;
      if ( v13 < 0 )
        v13 = 0;
    }
    while ( v4 < v13 );
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
void Path_NavTests(void)
{
  const dvar_t *v0; 
  int integer; 
  const dvar_t *v2; 
  float value; 
  cg_t *LocalClientGlobals; 
  double v5; 
  cg_t *v6; 
  float v7; 
  float v8; 
  float v9; 
  nav_space_s *DefaultSpace; 
  vec3_t *p_start; 
  const vec4_t *v12; 
  nav_space_s *v13; 
  nav_space_s *v14; 
  bool IsPointOnMesh; 
  nav_space_s *v16; 
  bool v17; 
  nav_space_s *v18; 
  __int128 v19; 
  float v23; 
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
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  const char *v45; 
  float v46; 
  bfx::Path3DSpec pathSpec; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  vec3_t start; 
  vec3_t outPos; 
  vec2_t vec; 
  float v55; 
  vec3_t outClosestPos; 
  tmat33_t<vec3_t> axis; 
  vec3_t v58; 
  vec3_t v59; 
  vec3_t v60; 
  vec3_t end; 
  Bounds box; 
  nav_probe_results_3D_s pOutResults; 

  v0 = DCONST_DVARINT_ai_testNavVolumes;
  if ( !DCONST_DVARINT_ai_testNavVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_testNavVolumes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  v2 = DCONST_DVARFLT_ai_testNav3DReachable;
  if ( !DCONST_DVARFLT_ai_testNav3DReachable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_testNav3DReachable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  if ( integer <= 0 && value <= 0.0 || !Nav_MeshLoaded() )
    return;
  CL_GetViewPos(LOCAL_CLIENT_0, &outPos);
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  vec = *(vec2_t *)LocalClientGlobals->refdef.view.axis.m[0].v;
  v55 = LocalClientGlobals->refdef.view.axis.m[0].v[2];
  v5 = vectoyaw(&vec);
  v51 = *(float *)&v5;
  v6 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v7 = v6->refdef.view.axis.m[2].v[0];
  v8 = v6->refdef.view.axis.m[2].v[1];
  v9 = v6->refdef.view.axis.m[2].v[2];
  *(_QWORD *)&pathSpec.m_volumeUsageFlags = -1i64;
  box.midPoint.v[0] = bounds_origin.midPoint.v[0];
  box.midPoint.v[2] = bounds_origin.midPoint.v[2];
  box.midPoint.v[1] = bounds_origin.midPoint.v[1];
  box.halfSize.v[0] = FLOAT_2_5;
  box.halfSize.v[1] = FLOAT_2_5;
  box.halfSize.v[2] = FLOAT_2_5;
  pathSpec.m_maxSearchDist = 0.0;
  if ( integer > 0 )
  {
    DefaultSpace = Nav_GetDefaultSpace();
    if ( Nav3D_GetClosestPointOnMesh(DefaultSpace, &pathSpec, &outPos, &outClosestPos) )
    {
      if ( outPos.v[0] == outClosestPos.v[0] && outPos.v[1] == outClosestPos.v[1] && outPos.v[2] == outClosestPos.v[2] )
      {
        start.v[0] = (float)(15.0 * vec.v[0]) + outPos.v[0];
        start.v[1] = (float)(15.0 * vec.v[1]) + outPos.v[1];
        start.v[2] = (float)(15.0 * v55) + outPos.v[2];
        v12 = &colorBlue;
        p_start = &start;
LABEL_19:
        G_DebugBox(p_start, &box, *(float *)&v5, v12, 1, 1);
        goto LABEL_20;
      }
      start.v[0] = (float)((float)(10.0 * vec.v[0]) + outPos.v[0]) - (float)(v7 * 2.5);
      start.v[1] = (float)((float)(10.0 * vec.v[1]) + outPos.v[1]) - (float)(v8 * 2.5);
      start.v[2] = (float)((float)(10.0 * v55) + outPos.v[2]) - (float)(v9 * 2.5);
      G_DebugLine(&start, &outClosestPos, &colorRed, 1);
      p_start = &outClosestPos;
    }
    else
    {
      start.v[0] = (float)(15.0 * vec.v[0]) + outPos.v[0];
      start.v[1] = (float)(15.0 * vec.v[1]) + outPos.v[1];
      start.v[2] = (float)(15.0 * v55) + outPos.v[2];
      p_start = &start;
    }
    v12 = &colorRed;
    goto LABEL_19;
  }
LABEL_20:
  if ( value <= 0.0 )
    return;
  start.v[0] = (float)(value * vec.v[0]) + outPos.v[0];
  start.v[1] = (float)(value * vec.v[1]) + outPos.v[1];
  start.v[2] = (float)(value * v55) + outPos.v[2];
  outPos.v[0] = (float)(v7 * -3.0) + outPos.v[0];
  outPos.v[2] = (float)(v9 * -3.0) + outPos.v[2];
  outPos.v[1] = (float)(v8 * -3.0) + outPos.v[1];
  v13 = Nav_GetDefaultSpace();
  if ( Nav3D_IsStraightLineReachable(v13, &outPos, &start, &pathSpec) )
  {
    G_DebugLine(&outPos, &start, &colorBlue, 1);
    G_DebugBox(&start, &box, *(float *)&v5, &colorBlue, 1, 1);
    return;
  }
  v14 = Nav_GetDefaultSpace();
  IsPointOnMesh = Nav3D_IsPointOnMesh(v14, &outPos, &pathSpec);
  v16 = Nav_GetDefaultSpace();
  v17 = Nav3D_IsPointOnMesh(v16, &start, &pathSpec);
  G_DebugLine(&outPos, &start, &colorRed, 1);
  if ( IsPointOnMesh )
  {
    v18 = Nav_GetDefaultSpace();
    Nav_Trace3D(v18, &outPos, &start, &pathSpec, &pOutResults);
    v19 = LODWORD(start.v[1]);
    *(float *)&v19 = fsqrt((float)((float)((float)(start.v[1] - outPos.v[1]) * (float)(start.v[1] - outPos.v[1])) + (float)((float)(start.v[0] - outPos.v[0]) * (float)(start.v[0] - outPos.v[0]))) + (float)((float)(start.v[2] - outPos.v[2]) * (float)(start.v[2] - outPos.v[2])));
    _XMM4 = v19;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v23 = (float)((float)((float)(start.v[1] - outPos.v[1]) * (float)(1.0 / *(float *)&_XMM0)) * pOutResults.m_DistTraveled) + outPos.v[1];
    v46 = (float)((float)((float)(start.v[0] - outPos.v[0]) * (float)(1.0 / *(float *)&_XMM0)) * pOutResults.m_DistTraveled) + outPos.v[0];
    v24 = (float)((float)((float)(start.v[2] - outPos.v[2]) * (float)(1.0 / *(float *)&_XMM0)) * pOutResults.m_DistTraveled) + outPos.v[2];
    v50 = v24;
    v49 = v23;
    outClosestPos.v[0] = FLOAT_N90_0;
    outClosestPos.v[1] = 0.0;
    outClosestPos.v[2] = 0.0;
    AnglesToAxis(&outClosestPos, &axis);
    v25 = (float)((float)(pOutResults.m_Normal.v[0] * axis.m[0].v[0]) + (float)(pOutResults.m_Normal.v[1] * axis.m[0].v[1])) + (float)(pOutResults.m_Normal.v[2] * axis.m[0].v[2]);
    v26 = (float)((float)(pOutResults.m_Normal.v[0] * axis.m[1].v[0]) + (float)(pOutResults.m_Normal.v[1] * axis.m[1].v[1])) + (float)(pOutResults.m_Normal.v[2] * axis.m[1].v[2]);
    v27 = (float)((float)(pOutResults.m_Normal.v[0] * axis.m[2].v[0]) + (float)(pOutResults.m_Normal.v[1] * axis.m[2].v[1])) + (float)(pOutResults.m_Normal.v[2] * axis.m[2].v[2]);
    v48 = v25;
    outClosestPos.v[0] = 0.0;
    outClosestPos.v[1] = FLOAT_N90_0;
    outClosestPos.v[2] = 0.0;
    AnglesToAxis(&outClosestPos, &axis);
    v28 = (float)((float)(pOutResults.m_Normal.v[0] * axis.m[0].v[0]) + (float)(pOutResults.m_Normal.v[1] * axis.m[0].v[1])) + (float)(pOutResults.m_Normal.v[2] * axis.m[0].v[2]);
    v29 = (float)((float)(pOutResults.m_Normal.v[0] * axis.m[1].v[0]) + (float)(pOutResults.m_Normal.v[1] * axis.m[1].v[1])) + (float)(pOutResults.m_Normal.v[2] * axis.m[1].v[2]);
    v30 = (float)((float)(pOutResults.m_Normal.v[0] * axis.m[2].v[0]) + (float)(pOutResults.m_Normal.v[1] * axis.m[2].v[1])) + (float)(pOutResults.m_Normal.v[2] * axis.m[2].v[2]);
    v31 = fsqrt((float)((float)((float)(start.v[1] - outPos.v[1]) * (float)(start.v[1] - outPos.v[1])) + (float)((float)(start.v[0] - outPos.v[0]) * (float)(start.v[0] - outPos.v[0]))) + (float)((float)(start.v[2] - outPos.v[2]) * (float)(start.v[2] - outPos.v[2]))) * 0.25;
    v32 = (float)(v25 * v31) + v46;
    v33 = v28 * v31;
    v34 = (float)(v27 * v31) + v24;
    v35 = (float)(v31 * v26) + v23;
    v36 = v30 * v31;
    v37 = v29 * v31;
    LODWORD(v38) = LODWORD(v31) ^ _xmm;
    v59.v[0] = v33 + v32;
    v59.v[1] = v37 + v35;
    v39 = v28 * v38;
    v40 = v29 * v38;
    end.v[0] = v39 + v32;
    v41 = v30 * v38;
    v59.v[2] = v36 + v34;
    end.v[1] = (float)(v29 * v38) + v35;
    v42 = (float)(v38 * v48) + v46;
    end.v[2] = (float)(v30 * v38) + v34;
    v43 = (float)(v38 * v26) + v49;
    v44 = (float)(v27 * v38) + v50;
    v58.v[1] = v40 + v43;
    v58.v[0] = v39 + v42;
    v60.v[0] = v33 + v42;
    v58.v[2] = v41 + v44;
    v60.v[2] = v36 + v44;
    v60.v[1] = v37 + v43;
    G_DebugLine(&v59, &end, &colorRed, 1);
    G_DebugLine(&end, &v58, &colorRed, 1);
    G_DebugLine(&v58, &v60, &colorRed, 1);
    G_DebugLine(&v60, &v59, &colorRed, 1);
    G_DebugLine(&v59, &v58, &colorRed, 1);
    G_DebugLine(&end, &v60, &colorRed, 1);
    if ( v17 )
    {
      G_DebugBox(&start, &box, v51, &colorRed, 1, 1);
      return;
    }
    v45 = "End pos off mesh";
  }
  else
  {
    v45 = "Start and End pos off mesh";
    if ( v17 )
      v45 = "Start pos off mesh";
  }
  G_DebugStarWithText(&start, &colorRed, &colorRed, v45, 0.2);
}

/*
==============
Path_NearestNode
==============
*/
pathnode_t *Path_NearestNode(const vec3_t *vOrigin, int traceMask, PathBlockPlanes *blockPlanes)
{
  bool v3; 
  const Bounds *v4; 
  NearestNodeInput pInput; 
  int returnCount; 

  pInput.vOrigin = vOrigin;
  pInput.fMaxDist = FLOAT_192_0;
  pInput.typeFlags = -2;
  pInput.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
  pInput.entNum = 2047;
  *(_WORD *)&pInput.bAllowCrouch = 257;
  pInput.bAllowFailedUnuseable = 1;
  pInput.traceMask = traceMask;
  pInput.blockPlanes = blockPlanes;
  v3 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE);
  v4 = &actorBox;
  if ( v3 )
    v4 = NULL;
  pInput.baseBounds = v4;
  return Path_NearestNodeExtended(&pInput, g_nearestNodes, 64, &returnCount, 0);
}

/*
==============
Path_NearestNodeByDistanceOnly
==============
*/
pathnode_t *Path_NearestNodeByDistanceOnly(const vec3_t *vOrigin, float fMaxDist)
{
  pathnode_t *v3; 
  unsigned __int16 v4; 
  float v5; 
  unsigned int v6; 
  pathnode_t *v7; 
  float v8; 
  __int64 v10; 
  __int64 v11; 
  vec3_t pos; 

  v3 = NULL;
  v4 = 0;
  v5 = FLOAT_3_4028235e38;
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
  {
    v6 = 0;
    do
    {
      if ( Path_NodeValid(v4) )
      {
        if ( v4 == 0xFFFF )
        {
          v7 = NULL;
        }
        else
        {
          if ( v6 >= g_path.actualNodeCount )
          {
            LODWORD(v11) = g_path.actualNodeCount;
            LODWORD(v10) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v10, v11) )
              __debugbreak();
          }
          v7 = &pathData.nodes[v4];
        }
        if ( (v7->constant.spawnflags & 1) == 0 && v7->constant.error == PNERR_NONE )
        {
          if ( v7->constant.totalLinkCount )
          {
            pathnode_t::GetPos(v7, &pos);
            v8 = (float)((float)((float)(vOrigin->v[1] - pos.v[1]) * (float)(vOrigin->v[1] - pos.v[1])) + (float)((float)(vOrigin->v[0] - pos.v[0]) * (float)(vOrigin->v[0] - pos.v[0]))) + (float)((float)(vOrigin->v[2] - pos.v[2]) * (float)(vOrigin->v[2] - pos.v[2]));
            if ( v8 < v5 && v8 < (float)(fMaxDist * fMaxDist) )
            {
              v3 = v7;
              v5 = (float)((float)((float)(vOrigin->v[1] - pos.v[1]) * (float)(vOrigin->v[1] - pos.v[1])) + (float)((float)(vOrigin->v[0] - pos.v[0]) * (float)(vOrigin->v[0] - pos.v[0]))) + (float)((float)(vOrigin->v[2] - pos.v[2]) * (float)(vOrigin->v[2] - pos.v[2]));
            }
          }
        }
      }
      v6 = ++v4;
    }
    while ( v4 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
  }
  return v3;
}

/*
==============
Path_NearestNodeExtended
==============
*/
pathnode_t *Path_NearestNodeExtended(const NearestNodeInput *pInput, pathsort_s *nodes, int maxNodes, int *returnCount, bool allowDontLinkNodes)
{
  int *v5; 
  PathBlockPlanes *blockPlanes; 
  unsigned __int16 v10; 
  int iPlaneCount; 
  const vec3_t *vOrigin; 
  float v13; 
  float fMaxDist; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  pathnode_t *node; 
  float v20; 
  float v21; 
  float v22; 
  gentity_s *Parent; 
  float *p_number; 
  float v25; 
  float v26; 
  Bounds **p_baseBounds; 
  float v28; 
  Bounds *v29; 
  float v32; 
  __int128 v33; 
  float v34; 
  int v37; 
  unsigned __int16 v38; 
  float v39; 
  pathnode_t *v40; 
  gentity_s *v41; 
  float *v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  Bounds *v48; 
  int v49; 
  double v50; 
  float v51; 
  __int128 v53; 
  int entNum; 
  const vec3_t *v57; 
  __int64 v58; 
  PathBlockPlanes *v59; 
  float *fDist; 
  unsigned __int16 v63; 
  Bounds *v64; 
  pathnode_t *v65; 
  int v66; 
  double v67; 
  float v69; 
  __int128 v71; 
  pathnode_t *v74; 
  int v75; 
  const vec3_t *v78; 
  int typeFlags; 
  unsigned int typeFlagsa; 
  unsigned int typeFlagsb; 
  int v82; 
  int v83; 
  const Bounds **v84; 
  pathnode_t **v86; 
  vec3_t origin; 
  Bounds v88; 
  tmat33_t<vec3_t> axis; 
  vec3_t up; 
  pathnode_t *v91[256]; 

  v5 = returnCount;
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8883, ASSERT_TYPE_ASSERT, "(pInput)", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  if ( !pInput->vOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8884, ASSERT_TYPE_ASSERT, "(pInput->vOrigin)", (const char *)&queryFormat, "pInput->vOrigin") )
    __debugbreak();
  if ( !pInput->traceMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8885, ASSERT_TYPE_ASSERT, "(pInput->traceMask != 0)", (const char *)&queryFormat, "pInput->traceMask != 0") )
    __debugbreak();
  Profile_Begin(277);
  blockPlanes = pInput->blockPlanes;
  v10 = 0;
  if ( blockPlanes )
    iPlaneCount = blockPlanes->iPlaneCount;
  else
    iPlaneCount = 0;
  if ( pInput->heightCheck )
  {
    v16 = Path_NodesInCylinder(pInput->vOrigin, NULL, pInput->fMaxDist, 1000000000.0, nodes, maxNodes, pInput->typeFlags, allowDontLinkNodes);
    v83 = v16;
  }
  else
  {
    vOrigin = pInput->vOrigin;
    v13 = pInput->vOrigin->v[1];
    origin.v[0] = pInput->vOrigin->v[0];
    typeFlags = pInput->typeFlags;
    origin.v[2] = vOrigin->v[2] - 120.0;
    fMaxDist = pInput->fMaxDist;
    origin.v[1] = v13;
    v15 = Path_NodesInCylinder(&origin, NULL, fMaxDist, 184.0, nodes, maxNodes, typeFlags, allowDontLinkNodes);
    v83 = v15;
    v16 = v15;
    if ( v15 > 0 )
    {
      v17 = v15;
      do
      {
        v18 = v10;
        node = nodes[v10].node;
        v20 = node->constant.vLocalOrigin.v[0];
        v21 = node->constant.vLocalOrigin.v[1];
        v22 = node->constant.vLocalOrigin.v[2];
        Parent = pathnode_t::GetParent(node);
        p_number = (float *)&Parent->s.number;
        v25 = v20;
        v26 = v21;
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          v25 = (float)((float)((float)(v20 * axis.m[0].v[0]) + (float)(v21 * axis.m[1].v[0])) + (float)(v22 * axis.m[2].v[0])) + p_number[76];
          v26 = (float)((float)((float)(v20 * axis.m[0].v[1]) + (float)(v21 * axis.m[1].v[1])) + (float)(v22 * axis.m[2].v[1])) + p_number[77];
          v22 = (float)((float)((float)(v21 * axis.m[1].v[2]) + (float)(v20 * axis.m[0].v[2])) + (float)(v22 * axis.m[2].v[2])) + p_number[78];
        }
        ++v10;
        nodes[v18].metric = (float)((float)((float)(pInput->vOrigin->v[1] - v26) * (float)(pInput->vOrigin->v[1] - v26)) + (float)((float)(pInput->vOrigin->v[0] - v25) * (float)(pInput->vOrigin->v[0] - v25))) + (float)((float)(pInput->vOrigin->v[2] - v22) * (float)(pInput->vOrigin->v[2] - v22));
      }
      while ( v10 < v17 );
      v5 = returnCount;
      v16 = v83;
    }
  }
  std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(nodes, &nodes[v16], v16, Path_CompareNodesIncreasing);
  p_baseBounds = (Bounds **)&pInput->baseBounds;
  v84 = &pInput->baseBounds;
  v28 = FLOAT_2_0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) || *p_baseBounds )
  {
    v29 = *p_baseBounds;
    v84 = &pInput->baseBounds;
    v88 = **p_baseBounds;
    _XMM1 = _mm_shuffle_ps(*(__m128 *)v88.midPoint.v, *(__m128 *)v88.midPoint.v, 255);
    __asm { vmaxss  xmm4, xmm1, xmm0 }
    v88.halfSize.v[0] = *(float *)&_XMM4;
    v88.halfSize.v[1] = *(float *)&_XMM4;
    v33 = LODWORD(FLOAT_2_0);
    v32 = 2.0 * v29->halfSize.v[2];
    v34 = (float)(v32 * 0.5) + 8.5;
    *(float *)&v33 = (float)(v32 - 17.0) * 0.5;
    _XMM3 = v33;
    v88.midPoint.v[2] = v34;
    __asm { vmaxss  xmm2, xmm3, xmm1 }
    v88.halfSize.v[2] = *(float *)&_XMM2;
  }
  *v5 = v16;
  v37 = 0;
  v82 = 0;
  v38 = 0;
  v39 = FLOAT_4_5;
  if ( v16 <= 0 )
    goto LABEL_62;
  v86 = v91;
  do
  {
    v40 = nodes[v38].node;
    origin = v40->constant.vLocalOrigin;
    v41 = pathnode_t::GetParent(v40);
    v42 = (float *)&v41->s.number;
    if ( v41 )
    {
      AnglesToAxis(&v41->r.currentAngles, &axis);
      v43 = origin.v[0] * axis.m[0].v[1];
      v44 = origin.v[0] * axis.m[0].v[2];
      v28 = FLOAT_2_0;
      origin.v[0] = (float)((float)((float)(origin.v[1] * axis.m[1].v[0]) + (float)(origin.v[0] * axis.m[0].v[0])) + (float)(origin.v[2] * axis.m[2].v[0])) + v42[76];
      v45 = (float)(origin.v[1] * axis.m[1].v[1]) + v43;
      v39 = FLOAT_4_5;
      v46 = (float)(v45 + (float)(origin.v[2] * axis.m[2].v[1])) + v42[77];
      v47 = (float)(origin.v[2] * axis.m[2].v[2]) + (float)((float)(origin.v[1] * axis.m[1].v[2]) + v44);
      origin.v[1] = v46;
      origin.v[2] = v47 + v42[78];
    }
    if ( ((1 << LOBYTE(v40->constant.type)) & 0x62700000) != 0 )
    {
      AngleVectors((const vec3_t *)&v40->constant.44, NULL, NULL, &up);
      if ( up.v[2] <= 0.85000002 )
        goto $failed_node;
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && !*v84 )
    {
      v48 = &actorBox;
      if ( 1 << LOBYTE(v40->constant.type) != ((1 << LOBYTE(v40->constant.type)) & 0x78130002) )
        goto LABEL_37;
      v49 = v40->constant.spawnflags & 0x5C;
      if ( v49 != 68 )
      {
        if ( v49 == 76 )
        {
          v48 = &actorBoxProne;
LABEL_37:
          v50 = *(double *)&v48->halfSize.y;
          *(_OWORD *)v88.midPoint.v = *(_OWORD *)v48->midPoint.v;
          *(double *)&v88.halfSize.y = v50;
          if ( v48 == &actorBoxCrouch && !pInput->bAllowCrouch || v48 == &actorBoxProne && !pInput->bAllowProne || v48 == &actorBox )
          {
            *vec3_t::operator[](&v88.midPoint, 2) = 44.5;
            *vec3_t::operator[](&v88.halfSize, 2) = 27.5;
          }
          else
          {
            v51 = (float)(v28 * v88.halfSize.v[0]) + 9.0;
            *vec3_t::operator[](&v88.midPoint, 2) = (float)(v51 * 0.5) + v39;
            *vec3_t::operator[](&v88.halfSize, 2) = (float)(v51 - 9.0) * 0.5;
            v53 = LODWORD(FLOAT_0_1);
            *(float *)&v53 = v88.halfSize.v[0] + 0.1;
            _XMM0 = v53;
            __asm
            {
              vmaxss  xmm3, xmm0, dword ptr [rsp+9B0h+var_93C+8]
              vmaxss  xmm0, xmm3, xmm2
            }
            v88.halfSize.v[2] = *(float *)&_XMM0;
          }
          goto LABEL_45;
        }
        if ( v49 != 84 )
          goto LABEL_37;
      }
      v48 = &actorBoxCrouch;
      goto LABEL_37;
    }
LABEL_45:
    if ( ((1 << LOBYTE(v40->constant.type)) & 0x1E300000) != 0 )
    {
      *vec3_t::operator[](&v88.midPoint, 2) = 0.0;
      *vec3_t::operator[](&v88.halfSize, 2) = actorBox.halfSize.v[2];
    }
    entNum = pInput->entNum;
    if ( entNum == 2047 || Path_IsNodeUseableBy(v40, entNum) )
    {
      v57 = pInput->vOrigin;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[0] - origin.v[0]) & _xmm) - 0.0) & _xmm) <= (float)(1.0 + 15.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[1] - origin.v[1]) & _xmm) - 0.0) & _xmm) <= (float)(1.0 + 15.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[2] - origin.v[2]) & _xmm) - 36.0) & _xmm) <= (float)(1.0 + 36.0) )
      {
LABEL_76:
        Profile_EndInternal(NULL);
        return v40;
      }
      v58 = 0i64;
      if ( iPlaneCount > 0i64 )
      {
        v59 = pInput->blockPlanes;
        fDist = v59->fDist;
        while ( (float)((float)(origin.v[1] * v59->vNormal[v58].v[1]) + (float)(origin.v[0] * v59->vNormal[v58].v[0])) <= *fDist )
        {
          ++v58;
          ++fDist;
          if ( v58 >= iPlaneCount )
            goto LABEL_58;
        }
$failed_node:
        v37 = ++v82;
        *v86++ = v40;
        goto LABEL_60;
      }
LABEL_58:
      _XMM0 = LODWORD(v88.halfSize.v[2]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rsp+9B0h+var_93C] }
      typeFlagsa = pInput->traceMask & 0xFDFFBFFF;
      v88.halfSize.v[2] = *(float *)&_XMM1;
      if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, v57, &origin, &v88, 2047, 2047, typeFlagsa) )
        goto LABEL_76;
    }
    else if ( pInput->bAllowFailedUnuseable )
    {
      goto $failed_node;
    }
    v37 = v82;
LABEL_60:
    v28 = FLOAT_2_0;
    ++v38;
  }
  while ( v38 < v83 );
  p_baseBounds = (Bounds **)v84;
LABEL_62:
  v63 = 0;
  if ( v37 <= 0 )
  {
LABEL_87:
    Profile_EndInternal(NULL);
    return 0i64;
  }
  while ( 2 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && !*p_baseBounds )
    {
      v64 = &actorBox;
      v65 = v91[v63];
      if ( v65 && 1 << LOBYTE(v65->constant.type) == ((1 << LOBYTE(v65->constant.type)) & 0x78130002) )
      {
        v66 = v65->constant.spawnflags & 0x5C;
        switch ( v66 )
        {
          case 'D':
            goto LABEL_78;
          case 'L':
            v64 = &actorBoxProne;
            break;
          case 'T':
LABEL_78:
            v64 = &actorBoxCrouch;
            break;
        }
      }
      v67 = *(double *)&v64->halfSize.y;
      *(_OWORD *)v88.midPoint.v = *(_OWORD *)v64->midPoint.v;
      *(double *)&v88.halfSize.y = v67;
      if ( v64 == &actorBoxCrouch && !pInput->bAllowCrouch || v64 == &actorBoxProne && !pInput->bAllowProne || v64 == &actorBox )
      {
        *vec3_t::operator[](&v88.midPoint, 2) = 44.5;
        *vec3_t::operator[](&v88.halfSize, 2) = 27.5;
      }
      else
      {
        v69 = (float)(v28 * v88.halfSize.v[0]) + 9.0;
        *vec3_t::operator[](&v88.midPoint, 2) = (float)(v69 * 0.5) + v39;
        *vec3_t::operator[](&v88.halfSize, 2) = (float)(v69 - 9.0) * 0.5;
        v71 = LODWORD(FLOAT_0_1);
        *(float *)&v71 = v88.halfSize.v[0] + 0.1;
        _XMM0 = v71;
        __asm
        {
          vmaxss  xmm3, xmm0, dword ptr [rsp+9B0h+var_93C+8]
          vmaxss  xmm0, xmm3, xmm2
        }
        v88.halfSize.v[2] = *(float *)&_XMM0;
      }
    }
    v74 = v91[v63];
    pathnode_t::GetPos(v74, &origin);
    v75 = 0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[0] - origin.v[0]) & _xmm) - 0.0) & _xmm) <= (float)(1.0 + 15.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[1] - origin.v[1]) & _xmm) - 0.0) & _xmm) <= (float)(1.0 + 15.0) )
      LOBYTE(v75) = COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[2] - origin.v[2]) & _xmm) - 36.0) & _xmm) <= (float)(1.0 + 36.0);
    if ( !v75 )
    {
      pathnode_t::GetPos(v74, &up);
      _XMM0 = LODWORD(v88.halfSize.v[2]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rsp+9B0h+var_93C] }
      v78 = pInput->vOrigin;
      typeFlagsb = pInput->traceMask & 0xFDFFBFFF;
      v88.halfSize.v[2] = *(float *)&_XMM1;
      if ( PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, v78, &up, &v88, 2047, 2047, typeFlagsb) )
      {
        v28 = FLOAT_2_0;
        p_baseBounds = (Bounds **)v84;
        if ( ++v63 >= v82 )
          goto LABEL_87;
        continue;
      }
    }
    break;
  }
  Profile_EndInternal(NULL);
  return v74;
}

/*
==============
Path_NearestNodeForLineOfSight
==============
*/
pathnode_t *Path_NearestNodeForLineOfSight(const vec3_t *vOrigin, int traceMask, PathBlockPlanes *blockPlanes)
{
  float v3; 
  float v4; 
  int v5; 
  int v7; 
  NearestNodeInput v8; 
  int v9[4]; 
  __int128 v10; 
  float v11; 
  float v12; 

  v3 = vOrigin->v[1];
  v8.fMaxDist = FLOAT_192_0;
  v4 = vOrigin->v[0];
  v8.typeFlags = -2;
  v8.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
  v8.entNum = 2047;
  *(_WORD *)&v8.bAllowCrouch = 257;
  v8.bAllowFailedUnuseable = 1;
  *(float *)v9 = v4;
  *(float *)&v5 = vOrigin->v[2] + 11.0;
  v8.vOrigin = (const vec3_t *)v9;
  v8.traceMask = traceMask;
  *(float *)&v9[1] = v3;
  v10 = 0i64;
  v8.blockPlanes = blockPlanes;
  v8.baseBounds = (const Bounds *)&v10;
  v11 = 0.0;
  v12 = 0.0;
  v9[2] = v5;
  return Path_NearestNodeForLineOfSightSystem(&v8, g_nearestNodes, 64, &v7);
}

/*
==============
Path_NearestNodeForLineOfSightSystem
==============
*/
pathnode_t *Path_NearestNodeForLineOfSightSystem(const NearestNodeInput *pInput, pathsort_s *nodes, int maxNodes, int *returnCount)
{
  int *v4; 
  PathBlockPlanes *blockPlanes; 
  unsigned __int16 v9; 
  int iPlaneCount; 
  const vec3_t *vOrigin; 
  float v12; 
  float fMaxDist; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  pathnode_t *node; 
  float v19; 
  float v20; 
  float v21; 
  gentity_s *Parent; 
  float *p_number; 
  float v24; 
  float v25; 
  Bounds **p_baseBounds; 
  float v27; 
  __int128 v28; 
  Bounds *v29; 
  float v32; 
  __int128 v33; 
  float v34; 
  int v37; 
  unsigned __int16 v38; 
  float v39; 
  float v40; 
  pathnode_t *v41; 
  gentity_s *v42; 
  float *v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  int v48; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  Bounds *v50; 
  int v51; 
  double v52; 
  float v53; 
  __int128 v55; 
  int entNum; 
  __int64 v59; 
  PathBlockPlanes *v60; 
  float *fDist; 
  double RaycastHitFraction; 
  unsigned __int16 v65; 
  Bounds *v66; 
  pathnode_t *v67; 
  int v68; 
  double v69; 
  float v71; 
  __int128 v73; 
  pathnode_t *v76; 
  int v77; 
  const vec3_t *v80; 
  int typeFlags; 
  unsigned int typeFlagsa; 
  int v83; 
  int v84; 
  const Bounds **v85; 
  pathnode_t **v87; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t origin; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  vec3_t up; 
  pathnode_t *v93[256]; 

  v4 = returnCount;
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9098, ASSERT_TYPE_ASSERT, "(pInput)", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  if ( !pInput->vOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9099, ASSERT_TYPE_ASSERT, "(pInput->vOrigin)", (const char *)&queryFormat, "pInput->vOrigin") )
    __debugbreak();
  if ( !pInput->traceMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9100, ASSERT_TYPE_ASSERT, "(pInput->traceMask != 0)", (const char *)&queryFormat, "pInput->traceMask != 0") )
    __debugbreak();
  Profile_Begin(277);
  blockPlanes = pInput->blockPlanes;
  v9 = 0;
  if ( blockPlanes )
    iPlaneCount = blockPlanes->iPlaneCount;
  else
    iPlaneCount = 0;
  if ( pInput->heightCheck )
  {
    v15 = Path_NodesInCylinder(pInput->vOrigin, NULL, pInput->fMaxDist, 1000000000.0, nodes, maxNodes, pInput->typeFlags, 0);
    v84 = v15;
  }
  else
  {
    vOrigin = pInput->vOrigin;
    v12 = pInput->vOrigin->v[1];
    origin.v[0] = pInput->vOrigin->v[0];
    typeFlags = pInput->typeFlags;
    origin.v[2] = vOrigin->v[2] - 120.0;
    fMaxDist = pInput->fMaxDist;
    origin.v[1] = v12;
    v14 = Path_NodesInCylinder(&origin, NULL, fMaxDist, 184.0, nodes, maxNodes, typeFlags, 0);
    v84 = v14;
    v15 = v14;
    if ( v14 > 0 )
    {
      v16 = v14;
      do
      {
        v17 = v9;
        node = nodes[v9].node;
        v19 = node->constant.vLocalOrigin.v[0];
        v20 = node->constant.vLocalOrigin.v[1];
        v21 = node->constant.vLocalOrigin.v[2];
        Parent = pathnode_t::GetParent(node);
        p_number = (float *)&Parent->s.number;
        v24 = v19;
        v25 = v20;
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          v24 = (float)((float)((float)(v20 * axis.m[1].v[0]) + (float)(v19 * axis.m[0].v[0])) + (float)(v21 * axis.m[2].v[0])) + p_number[76];
          v25 = (float)((float)((float)(v20 * axis.m[1].v[1]) + (float)(v19 * axis.m[0].v[1])) + (float)(v21 * axis.m[2].v[1])) + p_number[77];
          v21 = (float)((float)((float)(v20 * axis.m[1].v[2]) + (float)(v19 * axis.m[0].v[2])) + (float)(v21 * axis.m[2].v[2])) + p_number[78];
        }
        ++v9;
        nodes[v17].metric = (float)((float)((float)(pInput->vOrigin->v[1] - v25) * (float)(pInput->vOrigin->v[1] - v25)) + (float)((float)(pInput->vOrigin->v[0] - v24) * (float)(pInput->vOrigin->v[0] - v24))) + (float)((float)(pInput->vOrigin->v[2] - v21) * (float)(pInput->vOrigin->v[2] - v21));
      }
      while ( v9 < v16 );
      v4 = returnCount;
      v15 = v84;
    }
  }
  std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(nodes, &nodes[v15], v15, Path_CompareNodesIncreasingDistOnly);
  p_baseBounds = (Bounds **)&pInput->baseBounds;
  v85 = &pInput->baseBounds;
  v27 = FLOAT_2_0;
  v28 = LODWORD(FLOAT_0_1);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) || *p_baseBounds )
  {
    v29 = *p_baseBounds;
    v85 = &pInput->baseBounds;
    bounds = **p_baseBounds;
    _XMM1 = _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255);
    __asm { vmaxss  xmm4, xmm1, xmm0 }
    bounds.halfSize.v[0] = *(float *)&_XMM4;
    bounds.halfSize.v[1] = *(float *)&_XMM4;
    v33 = LODWORD(FLOAT_2_0);
    v32 = 2.0 * v29->halfSize.v[2];
    v34 = (float)(v32 * 0.5) + 8.5;
    *(float *)&v33 = (float)(v32 - 17.0) * 0.5;
    _XMM3 = v33;
    bounds.midPoint.v[2] = v34;
    __asm { vmaxss  xmm2, xmm3, xmm1 }
    bounds.halfSize.v[2] = *(float *)&_XMM2;
  }
  v37 = 0;
  *v4 = v15;
  v38 = 0;
  v83 = 0;
  v39 = FLOAT_9_0;
  v40 = FLOAT_4_5;
  if ( v15 <= 0 )
    goto LABEL_66;
  v87 = v93;
  do
  {
    v41 = nodes[v38].node;
    origin = v41->constant.vLocalOrigin;
    v42 = pathnode_t::GetParent(v41);
    v43 = (float *)&v42->s.number;
    if ( v42 )
    {
      AnglesToAxis(&v42->r.currentAngles, &axis);
      v44 = origin.v[0] * axis.m[0].v[1];
      v45 = origin.v[0] * axis.m[0].v[2];
      v27 = FLOAT_2_0;
      origin.v[0] = (float)((float)((float)(origin.v[1] * axis.m[1].v[0]) + (float)(origin.v[0] * axis.m[0].v[0])) + (float)(origin.v[2] * axis.m[2].v[0])) + v43[76];
      v46 = (float)(origin.v[1] * axis.m[1].v[1]) + v44;
      v28 = LODWORD(FLOAT_0_1);
      v47 = (float)(origin.v[1] * axis.m[1].v[2]) + v45;
      v39 = FLOAT_9_0;
      v40 = FLOAT_4_5;
      origin.v[1] = (float)(v46 + (float)(origin.v[2] * axis.m[2].v[1])) + v43[77];
      origin.v[2] = (float)(v47 + (float)(origin.v[2] * axis.m[2].v[2])) + v43[78];
    }
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.ignoreBodies = NULL;
    extendedData.phaseSelection = All;
    v48 = pInput->traceMask & 0xFDFFBFFF;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    extendedData.contents = v48;
    extendedData.collisionBuffer = 0.0;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_FIRST);
    if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 9161, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
      __debugbreak();
    if ( ((1 << LOBYTE(v41->constant.type)) & 0x62700000) != 0 )
    {
      AngleVectors((const vec3_t *)&v41->constant.44, NULL, NULL, &up);
      if ( up.v[2] <= 0.85000002 )
        goto $failed_node_0;
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && !*v85 )
    {
      v50 = &actorBox;
      if ( 1 << LOBYTE(v41->constant.type) != ((1 << LOBYTE(v41->constant.type)) & 0x78130002) )
        goto LABEL_40;
      v51 = v41->constant.spawnflags & 0x5C;
      if ( v51 != 68 )
      {
        if ( v51 == 76 )
        {
          v50 = &actorBoxProne;
LABEL_40:
          v52 = *(double *)&v50->halfSize.y;
          *(_OWORD *)bounds.midPoint.v = *(_OWORD *)v50->midPoint.v;
          *(double *)&bounds.halfSize.y = v52;
          if ( v50 == &actorBoxCrouch && !pInput->bAllowCrouch || v50 == &actorBoxProne && !pInput->bAllowProne || v50 == &actorBox )
          {
            *vec3_t::operator[](&bounds.midPoint, 2) = 44.5;
            *vec3_t::operator[](&bounds.halfSize, 2) = 27.5;
          }
          else
          {
            v53 = (float)(v27 * bounds.halfSize.v[0]) + v39;
            *vec3_t::operator[](&bounds.midPoint, 2) = (float)(v53 * 0.5) + v40;
            *vec3_t::operator[](&bounds.halfSize, 2) = (float)(v53 - v39) * 0.5;
            v55 = v28;
            *(float *)&v55 = *(float *)&v28 + bounds.halfSize.v[0];
            _XMM0 = v55;
            __asm
            {
              vmaxss  xmm3, xmm0, dword ptr [rbp+8D0h+bounds.halfSize+8]
              vmaxss  xmm0, xmm3, xmm2
            }
            bounds.halfSize.v[2] = *(float *)&_XMM0;
          }
          goto LABEL_48;
        }
        if ( v51 != 84 )
          goto LABEL_40;
      }
      v50 = &actorBoxCrouch;
      goto LABEL_40;
    }
LABEL_48:
    if ( ((1 << LOBYTE(v41->constant.type)) & 0x1E300000) != 0 )
    {
      *vec3_t::operator[](&bounds.midPoint, 2) = 0.0;
      *vec3_t::operator[](&bounds.halfSize, 2) = actorBox.halfSize.v[2];
    }
    entNum = pInput->entNum;
    if ( entNum == 2047 || Path_IsNodeUseableBy(v41, entNum) )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[0] - origin.v[0]) & _xmm) - 0.0) & _xmm) <= (float)(1.0 + 15.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[1] - origin.v[1]) & _xmm) - 0.0) & _xmm) <= (float)(1.0 + 15.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[2] - origin.v[2]) & _xmm) - 36.0) & _xmm) <= (float)(1.0 + 36.0) )
      {
LABEL_80:
        Profile_EndInternal(NULL);
        return v41;
      }
      v59 = 0i64;
      if ( iPlaneCount > 0i64 )
      {
        v60 = pInput->blockPlanes;
        fDist = v60->fDist;
        while ( (float)((float)(origin.v[1] * v60->vNormal[v59].v[1]) + (float)(origin.v[0] * v60->vNormal[v59].v[0])) <= *fDist )
        {
          ++v59;
          ++fDist;
          if ( v59 >= iPlaneCount )
            goto LABEL_61;
        }
$failed_node_0:
        v37 = ++v83;
        *v87++ = v41;
        goto LABEL_64;
      }
LABEL_61:
      _XMM0 = LODWORD(bounds.halfSize.v[2]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rbp+8D0h+bounds.halfSize] }
      bounds.halfSize.v[2] = *(float *)&_XMM1;
      HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
      Physics_Raycast(PHYSICS_WORLD_ID_FIRST, pInput->vOrigin, &origin, &extendedData, ClosestResult);
      if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
        goto LABEL_80;
      RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
      if ( *(float *)&RaycastHitFraction >= 0.98000002 )
        goto LABEL_80;
    }
    else if ( pInput->bAllowFailedUnuseable )
    {
      goto $failed_node_0;
    }
    v37 = v83;
LABEL_64:
    v27 = FLOAT_2_0;
    ++v38;
  }
  while ( v38 < v84 );
  p_baseBounds = (Bounds **)v85;
LABEL_66:
  v65 = 0;
  if ( v37 <= 0 )
  {
LABEL_91:
    Profile_EndInternal(NULL);
    return 0i64;
  }
  while ( 2 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && !*p_baseBounds )
    {
      v66 = &actorBox;
      v67 = v93[v65];
      if ( v67 && 1 << LOBYTE(v67->constant.type) == ((1 << LOBYTE(v67->constant.type)) & 0x78130002) )
      {
        v68 = v67->constant.spawnflags & 0x5C;
        switch ( v68 )
        {
          case 'D':
            goto LABEL_82;
          case 'L':
            v66 = &actorBoxProne;
            break;
          case 'T':
LABEL_82:
            v66 = &actorBoxCrouch;
            break;
        }
      }
      v69 = *(double *)&v66->halfSize.y;
      *(_OWORD *)bounds.midPoint.v = *(_OWORD *)v66->midPoint.v;
      *(double *)&bounds.halfSize.y = v69;
      if ( v66 == &actorBoxCrouch && !pInput->bAllowCrouch || v66 == &actorBoxProne && !pInput->bAllowProne || v66 == &actorBox )
      {
        *vec3_t::operator[](&bounds.midPoint, 2) = 44.5;
        *vec3_t::operator[](&bounds.halfSize, 2) = 27.5;
      }
      else
      {
        v71 = (float)(v27 * bounds.halfSize.v[0]) + v39;
        *vec3_t::operator[](&bounds.midPoint, 2) = (float)(v71 * 0.5) + v40;
        *vec3_t::operator[](&bounds.halfSize, 2) = (float)(v71 - v39) * 0.5;
        v73 = v28;
        *(float *)&v73 = *(float *)&v28 + bounds.halfSize.v[0];
        _XMM0 = v73;
        __asm
        {
          vmaxss  xmm3, xmm0, dword ptr [rbp+8D0h+bounds.halfSize+8]
          vmaxss  xmm0, xmm3, xmm2
        }
        bounds.halfSize.v[2] = *(float *)&_XMM0;
      }
    }
    v76 = v93[v65];
    pathnode_t::GetPos(v76, &origin);
    v77 = 0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[0] - origin.v[0]) & _xmm) - 0.0) & _xmm) <= (float)(1.0 + 15.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[1] - origin.v[1]) & _xmm) - 0.0) & _xmm) <= (float)(1.0 + 15.0) )
      LOBYTE(v77) = COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT(pInput->vOrigin->v[2] - origin.v[2]) & _xmm) - 36.0) & _xmm) <= (float)(1.0 + 36.0);
    if ( !v77 )
    {
      pathnode_t::GetPos(v76, &up);
      _XMM0 = LODWORD(bounds.halfSize.v[2]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rbp+8D0h+bounds.halfSize] }
      v80 = pInput->vOrigin;
      typeFlagsa = pInput->traceMask & 0xFDFFBFFF;
      bounds.halfSize.v[2] = *(float *)&_XMM1;
      if ( PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, v80, &up, &bounds, 2047, 2047, typeFlagsa) )
      {
        v27 = FLOAT_2_0;
        p_baseBounds = (Bounds **)v85;
        if ( ++v65 >= v83 )
          goto LABEL_91;
        continue;
      }
    }
    break;
  }
  Profile_EndInternal(NULL);
  return v76;
}

/*
==============
Path_NearestNodeOriented
==============
*/
pathnode_t *Path_NearestNodeOriented(const vec3_t *vOrigin, int traceMask, pathsort_s *nodes, int maxNodes, int typeFlags, float fMaxDist, const float boundsRadius, const vec3_t *normal, int *returnCount)
{
  int v12; 
  unsigned __int16 v13; 
  pathnode_t *node; 
  float v15; 
  float v16; 
  float v17; 
  gentity_s *Parent; 
  float *p_number; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  vec3_t up; 
  vec3_t end; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec3_t vector; 

  Profile_Begin(295);
  v12 = Path_NodesInCylinder(vOrigin, NULL, fMaxDist, fMaxDist, nodes, maxNodes, typeFlags, 0);
  std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(nodes, &nodes[v12], v12, Path_CompareNodesIncreasing);
  *returnCount = v12;
  v13 = 0;
  if ( v12 <= 0 )
  {
LABEL_8:
    Profile_EndInternal(NULL);
    return 0i64;
  }
  else
  {
    while ( 1 )
    {
      node = nodes[v13].node;
      pathnode_t::GetAngles(node, &vector);
      AngleVectors(&vector, NULL, NULL, &up);
      if ( (float)((float)((float)(up.v[0] * normal->v[0]) + (float)(up.v[1] * normal->v[1])) + (float)(up.v[2] * normal->v[2])) >= 0.85000002 )
      {
        v15 = node->constant.vLocalOrigin.v[0];
        v16 = node->constant.vLocalOrigin.v[1];
        v17 = node->constant.vLocalOrigin.v[2];
        Parent = pathnode_t::GetParent(node);
        p_number = (float *)&Parent->s.number;
        v20 = v15;
        v21 = v16;
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          v20 = (float)((float)((float)(v16 * axis.m[1].v[0]) + (float)(v15 * axis.m[0].v[0])) + (float)(v17 * axis.m[2].v[0])) + p_number[76];
          v21 = (float)((float)((float)(v16 * axis.m[1].v[1]) + (float)(v15 * axis.m[0].v[1])) + (float)(v17 * axis.m[2].v[1])) + p_number[77];
          v17 = (float)((float)((float)(v16 * axis.m[1].v[2]) + (float)(v15 * axis.m[0].v[2])) + (float)(v17 * axis.m[2].v[2])) + p_number[78];
        }
        v22 = vOrigin->v[1];
        v23 = vOrigin->v[0];
        v24 = vOrigin->v[2];
        if ( (float)((float)((float)((float)(v21 - v22) * (float)(v21 - v22)) + (float)((float)(v20 - v23) * (float)(v20 - v23))) + (float)((float)(v17 - v24) * (float)(v17 - v24))) < (float)(boundsRadius * boundsRadius) )
          break;
        v25 = 10.0 * normal->v[0];
        v26 = 10.0 * normal->v[1];
        v27 = 10.0 * normal->v[2];
        start.v[0] = v25 + v23;
        start.v[1] = v26 + v22;
        start.v[2] = v27 + v24;
        end.v[0] = v25 + v20;
        end.v[1] = v26 + v21;
        end.v[2] = v27 + v17;
        if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &end, &bounds_origin, 2047, 2047, traceMask & 0xFDFFBFFF) )
          break;
      }
      if ( ++v13 >= v12 )
        goto LABEL_8;
    }
    Profile_EndInternal(NULL);
    return node;
  }
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
  int v2; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8110, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v2 = 1 << LOBYTE(node->constant.type);
  if ( (v2 & 0xC0) != 0 )
  {
    _XMM0 = (unsigned __int8)v2 & 0x80;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_90_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  }
  else
  {
    LODWORD(_XMM0) = 0;
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
  return (unsigned int)((int)*(float *)(*(_QWORD *)node0 + 176i64) - (int)*(float *)(*(_QWORD *)node1 + 176i64));
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
_BOOL8 Path_NodeExposedToPoint(const pathnode_t *node, const vec3_t *point, int exposeFlags)
{
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  vec3_t pos; 
  vec2_t vec; 
  float v16; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v6 = point->v[0] - pos.v[0];
  v8 = LODWORD(point->v[1]);
  v7 = point->v[1] - pos.v[1];
  v9 = point->v[2] - pos.v[2];
  *(float *)&v8 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v9 * v9));
  _XMM7 = v8;
  __asm
  {
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
  }
  vec.v[0] = v6 * (float)(1.0 / *(float *)&_XMM0);
  v16 = v9 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = v7 * (float)(1.0 / *(float *)&_XMM0);
  *(double *)&_XMM0 = vectoyaw(&vec);
  *(float *)&v8 = (float)Path_NodeExposureGetRawMax(node, *(float *)&_XMM0, exposeFlags);
  return (float)(*(float *)&v8 * 100.0) >= *(float *)&_XMM7;
}

/*
==============
Path_NodeExposedToPoint_Fast
==============
*/
_BOOL8 Path_NodeExposedToPoint_Fast(const pathnode_t *node, const vec3_t *nodeWorldOrigin, const vec3_t *point, const int exposeFlags)
{
  __int128 v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v17; 
  __int128 v21; 
  __int128 v24; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8487, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v9 = LODWORD(point->v[0]);
  *(float *)&v9 = point->v[0] - nodeWorldOrigin->v[0];
  v8 = v9;
  v10 = point->v[2] - nodeWorldOrigin->v[2];
  v12 = LODWORD(point->v[1]);
  *(float *)&v12 = point->v[1] - nodeWorldOrigin->v[1];
  v11 = *(float *)&v12;
  v14 = v12 & _xmm;
  *(float *)&v14 = *(float *)&v14 + 1.0e-10;
  v13 = v14;
  _XMM5 = 0i64;
  v17 = v8;
  *(float *)&v17 = *(float *)&v8 + *(float *)&v13;
  _XMM4 = v17;
  __asm
  {
    vcmpless xmm0, xmm5, xmm8
    vblendvps xmm2, xmm4, xmm1, xmm0
  }
  v21 = v13;
  *(float *)&v21 = *(float *)&v13 - *(float *)&v8;
  _XMM1 = v21;
  __asm
  {
    vcmpless xmm0, xmm5, xmm8
    vblendvps xmm0, xmm1, xmm4, xmm0
  }
  v24 = _XMM2;
  *(float *)&v24 = (float)((float)((float)((float)(*(float *)&_XMM2 / *(float *)&_XMM0) * 0.1963) * (float)(*(float *)&_XMM2 / *(float *)&_XMM0)) - 0.9817) * (float)(*(float *)&_XMM2 / *(float *)&_XMM0);
  _XMM0 = LODWORD(FLOAT_2_3561945);
  __asm
  {
    vcmpless xmm2, xmm5, xmm8
    vblendvps xmm1, xmm0, xmm1, xmm2
  }
  *(float *)&v24 = *(float *)&v24 + *(float *)&_XMM1;
  _XMM2 = v24 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm2, xmm3, xmm0
  }
  *(float *)&_XMM4 = *(float *)&_XMM0 * 57.295776;
  _XMM0 = LODWORD(FLOAT_360_0);
  __asm
  {
    vcmpless xmm1, xmm5, xmm4
    vblendvps xmm1, xmm0, xmm5, xmm1
  }
  *(float *)&v13 = (float)Path_NodeExposureGetRawMax(node, *(float *)&_XMM1 + *(float *)&_XMM4, exposeFlags);
  return (float)((float)(*(float *)&v13 * *(float *)&v13) * 10000.0) >= (float)((float)((float)(v11 * v11) + (float)(*(float *)&v8 * *(float *)&v8)) + (float)(v10 * v10));
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
  float RawArcMax; 

  RawArcMax = (float)Path_NodeExposureGetRawArcMax(node, arcYaw, coneAngle, exposeFlags);
  return RawArcMax * 100.0;
}

/*
==============
Path_NodeExposureGetRangeArcSum
==============
*/
float Path_NodeExposureGetRangeArcSum(const pathnode_t *node, float arcYaw, float coneAngle, int exposeFlags)
{
  float RawArcSum; 

  RawArcSum = (float)Path_NodeExposureGetRawArcSum(node, arcYaw, coneAngle, exposeFlags);
  return RawArcSum * 100.0;
}

/*
==============
Path_NodeExposureGetRangeMax
==============
*/
float Path_NodeExposureGetRangeMax(const pathnode_t *node, float yaw, int exposeFlags)
{
  float RawMax; 

  RawMax = (float)Path_NodeExposureGetRawMax(node, yaw, exposeFlags);
  return RawMax * 100.0;
}

/*
==============
Path_NodeExposureGetRawArcMax
==============
*/

__int64 __fastcall Path_NodeExposureGetRawArcMax(const pathnode_t *node, double arcYaw, float coneAngle, int exposeFlags)
{
  unsigned int v4; 
  char v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  unsigned int v10; 
  unsigned __int8 *pathExposure; 
  unsigned int v12; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int128 v20; 

  v4 = 0;
  v5 = exposeFlags;
  v6 = *(float *)&arcYaw + coneAngle;
  v8 = *(_OWORD *)&arcYaw;
  *(float *)&v8 = *(float *)&arcYaw - coneAngle;
  v7 = v8;
  if ( (float)(*(float *)&arcYaw - coneAngle) <= (float)(*(float *)&arcYaw + coneAngle) )
  {
    do
    {
      v10 = Path_ExposureSizeNodes();
      if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
        __debugbreak();
      pathExposure = pathData.pathExposure;
      v12 = 0;
      if ( pathData.pathExposure )
      {
        _XMM1 = 0i64;
        __asm { vroundss xmm3, xmm1, xmm2, 1 }
        v15 = 33 * Path_ConvertNodeToIndex(node) + (180 - (int)(float)((float)((float)(*(float *)&v7 * 0.0027777778) - *(float *)&_XMM3) * -360.0)) / 0x2Du;
        if ( (unsigned int)v15 >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8305, ASSERT_TYPE_ASSERT, "(offset < expSize)", (const char *)&queryFormat, "offset < expSize") )
          __debugbreak();
        v16 = (unsigned int)(v15 + 24);
        if ( (unsigned int)v16 >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8306, ASSERT_TYPE_ASSERT, "(( offset + ( ( PATH_EXPOSE_MAX - 1 ) * ( ( uint(8) ) ) ) ) < expSize)", (const char *)&queryFormat, "( offset + ( ( PATH_EXPOSE_MAX - 1 ) * PATH_EXP_STRIDE_STANCE ) ) < expSize") )
          __debugbreak();
        if ( (v5 & 1) != 0 )
          v12 = pathExposure[v15];
        if ( (v5 & 2) != 0 )
        {
          v17 = pathExposure[(unsigned int)(v15 + 8)];
          if ( v12 > v17 )
            v17 = v12;
          v12 = v17;
        }
        if ( (v5 & 4) != 0 )
        {
          v18 = pathExposure[(unsigned int)(v15 + 16)];
          if ( v12 > v18 )
            v18 = v12;
          v12 = v18;
        }
        if ( (v5 & 8) != 0 )
        {
          v19 = pathExposure[v16];
          if ( v12 > v19 )
            v19 = v12;
          v12 = v19;
        }
      }
      v20 = v7;
      *(float *)&v20 = *(float *)&v7 + 45.0;
      v7 = v20;
      if ( v4 > v12 )
        v12 = v4;
      v4 = v12;
    }
    while ( *(float *)&v20 <= v6 );
  }
  return v4;
}

/*
==============
Path_NodeExposureGetRawArcMin
==============
*/

__int64 __fastcall Path_NodeExposureGetRawArcMin(const pathnode_t *node, double arcYaw, float coneAngle, int exposeFlags)
{
  char v4; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int8 *pathExposure; 
  unsigned int v12; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int128 v20; 

  v4 = exposeFlags;
  v6 = *(float *)&arcYaw + coneAngle;
  v8 = *(_OWORD *)&arcYaw;
  *(float *)&v8 = *(float *)&arcYaw - coneAngle;
  v7 = v8;
  v9 = 255;
  if ( (float)(*(float *)&arcYaw - coneAngle) <= (float)(*(float *)&arcYaw + coneAngle) )
  {
    do
    {
      v10 = Path_ExposureSizeNodes();
      if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
        __debugbreak();
      pathExposure = pathData.pathExposure;
      v12 = 0;
      if ( pathData.pathExposure )
      {
        _XMM1 = 0i64;
        __asm { vroundss xmm3, xmm1, xmm2, 1 }
        v15 = 33 * Path_ConvertNodeToIndex(node) + (180 - (int)(float)((float)((float)(*(float *)&v7 * 0.0027777778) - *(float *)&_XMM3) * -360.0)) / 0x2Du;
        if ( (unsigned int)v15 >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8305, ASSERT_TYPE_ASSERT, "(offset < expSize)", (const char *)&queryFormat, "offset < expSize") )
          __debugbreak();
        v16 = (unsigned int)(v15 + 24);
        if ( (unsigned int)v16 >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8306, ASSERT_TYPE_ASSERT, "(( offset + ( ( PATH_EXPOSE_MAX - 1 ) * ( ( uint(8) ) ) ) ) < expSize)", (const char *)&queryFormat, "( offset + ( ( PATH_EXPOSE_MAX - 1 ) * PATH_EXP_STRIDE_STANCE ) ) < expSize") )
          __debugbreak();
        if ( (v4 & 1) != 0 )
          v12 = pathExposure[v15];
        if ( (v4 & 2) != 0 )
        {
          v17 = pathExposure[(unsigned int)(v15 + 8)];
          if ( v12 > v17 )
            v17 = v12;
          v12 = v17;
        }
        if ( (v4 & 4) != 0 )
        {
          v18 = pathExposure[(unsigned int)(v15 + 16)];
          if ( v12 > v18 )
            v18 = v12;
          v12 = v18;
        }
        if ( (v4 & 8) != 0 )
        {
          v19 = pathExposure[v16];
          if ( v12 > v19 )
            v19 = v12;
          v12 = v19;
        }
      }
      v20 = v7;
      *(float *)&v20 = *(float *)&v7 + 45.0;
      v7 = v20;
      if ( v12 > v9 )
        v12 = v9;
      v9 = v12;
    }
    while ( *(float *)&v20 <= v6 );
  }
  return v9;
}

/*
==============
Path_NodeExposureGetRawArcSum
==============
*/

__int64 __fastcall Path_NodeExposureGetRawArcSum(const pathnode_t *node, double arcYaw, float coneAngle, int exposeFlags)
{
  unsigned int v4; 
  char v5; 
  float v6; 
  __int128 v7; 
  __int128 v8; 
  unsigned int v10; 
  unsigned __int8 *pathExposure; 
  unsigned int v12; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int128 v20; 

  v4 = 0;
  v5 = exposeFlags;
  v6 = *(float *)&arcYaw + coneAngle;
  v8 = *(_OWORD *)&arcYaw;
  *(float *)&v8 = *(float *)&arcYaw - coneAngle;
  v7 = v8;
  if ( (float)(*(float *)&arcYaw - coneAngle) <= (float)(*(float *)&arcYaw + coneAngle) )
  {
    do
    {
      v10 = Path_ExposureSizeNodes();
      if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
        __debugbreak();
      pathExposure = pathData.pathExposure;
      v12 = 0;
      if ( pathData.pathExposure )
      {
        _XMM1 = 0i64;
        __asm { vroundss xmm3, xmm1, xmm2, 1 }
        v15 = 33 * Path_ConvertNodeToIndex(node) + (180 - (int)(float)((float)((float)(*(float *)&v7 * 0.0027777778) - *(float *)&_XMM3) * -360.0)) / 0x2Du;
        if ( (unsigned int)v15 >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8305, ASSERT_TYPE_ASSERT, "(offset < expSize)", (const char *)&queryFormat, "offset < expSize") )
          __debugbreak();
        v16 = (unsigned int)(v15 + 24);
        if ( (unsigned int)v16 >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8306, ASSERT_TYPE_ASSERT, "(( offset + ( ( PATH_EXPOSE_MAX - 1 ) * ( ( uint(8) ) ) ) ) < expSize)", (const char *)&queryFormat, "( offset + ( ( PATH_EXPOSE_MAX - 1 ) * PATH_EXP_STRIDE_STANCE ) ) < expSize") )
          __debugbreak();
        if ( (v5 & 1) != 0 )
          v12 = pathExposure[v15];
        if ( (v5 & 2) != 0 )
        {
          v17 = pathExposure[(unsigned int)(v15 + 8)];
          if ( v12 > v17 )
            v17 = v12;
          v12 = v17;
        }
        if ( (v5 & 4) != 0 )
        {
          v18 = pathExposure[(unsigned int)(v15 + 16)];
          if ( v12 > v18 )
            v18 = v12;
          v12 = v18;
        }
        if ( (v5 & 8) != 0 )
        {
          v19 = pathExposure[v16];
          if ( v12 > v19 )
            v19 = v12;
          v12 = v19;
        }
      }
      v4 += v12;
      v20 = v7;
      *(float *)&v20 = *(float *)&v7 + 45.0;
      v7 = v20;
    }
    while ( *(float *)&v20 <= v6 );
  }
  return v4;
}

/*
==============
Path_NodeExposureGetRawMax
==============
*/
__int64 Path_NodeExposureGetRawMax(const pathnode_t *node, float yaw, int exposeFlags)
{
  char v3; 
  unsigned int v5; 
  unsigned __int8 *pathExposure; 
  float v8; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 

  v3 = exposeFlags;
  v5 = Path_ExposureSizeNodes();
  if ( pathData.pathExposure && pathData.exposureBytes < (int)Path_ExposureSizeNodes() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8149, ASSERT_TYPE_ASSERT, "(!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() )))", (const char *)&queryFormat, "!pathData.pathExposure || (pathData.exposureBytes >= static_cast<int>( Path_ExposureSizeNodes() ))") )
    __debugbreak();
  pathExposure = pathData.pathExposure;
  if ( !pathData.pathExposure )
    return 0i64;
  v8 = yaw * 0.0027777778;
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  v11 = 0;
  v12 = 33 * Path_ConvertNodeToIndex(node) + (180 - (int)(float)((float)(v8 - *(float *)&_XMM3) * -360.0)) / 0x2Du;
  if ( (unsigned int)v12 >= v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8305, ASSERT_TYPE_ASSERT, "(offset < expSize)", (const char *)&queryFormat, "offset < expSize") )
    __debugbreak();
  v13 = (unsigned int)(v12 + 24);
  if ( (unsigned int)v13 >= v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8306, ASSERT_TYPE_ASSERT, "(( offset + ( ( PATH_EXPOSE_MAX - 1 ) * ( ( uint(8) ) ) ) ) < expSize)", (const char *)&queryFormat, "( offset + ( ( PATH_EXPOSE_MAX - 1 ) * PATH_EXP_STRIDE_STANCE ) ) < expSize") )
    __debugbreak();
  if ( (v3 & 1) != 0 )
    v11 = pathExposure[v12];
  if ( (v3 & 2) != 0 )
  {
    v14 = pathExposure[(unsigned int)(v12 + 8)];
    if ( v11 > v14 )
      v14 = v11;
    v11 = v14;
  }
  if ( (v3 & 4) != 0 )
  {
    v15 = pathExposure[(unsigned int)(v12 + 16)];
    if ( v11 > v15 )
      v15 = v11;
    v11 = v15;
  }
  if ( (v3 & 8) != 0 )
  {
    v16 = pathExposure[v13];
    if ( v11 > v16 )
      return v11;
    return v16;
  }
  return v11;
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
char Path_NodeInOrNearPlayerView(const pathnode_t *node, const vec3_t *viewPos, const vec3_t *viewDir, float viewFovDot)
{
  int wLinkCount; 
  int v9; 
  __int64 i; 
  pathnode_t *v11; 
  __int128 v12; 
  __int128 v13; 
  float v14; 
  gentity_s *Parent; 
  float *p_number; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  tmat33_t<vec3_t> axis; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 7480, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  wLinkCount = node->dynamic.wLinkCount;
  v9 = 0;
  if ( wLinkCount + 1 <= 0 )
    return 0;
  for ( i = 0i64; ; ++i )
  {
    v11 = v9 >= (__int16)wLinkCount ? (pathnode_t *)node : &pathData.nodes[node->constant.Links[i].nodeNum];
    v12 = LODWORD(v11->constant.vLocalOrigin.v[0]);
    v13 = LODWORD(v11->constant.vLocalOrigin.v[1]);
    v14 = v11->constant.vLocalOrigin.v[2];
    Parent = pathnode_t::GetParent(v11);
    p_number = (float *)&Parent->s.number;
    v17 = *(float *)&v12;
    v18 = v13;
    if ( Parent )
    {
      AnglesToAxis(&Parent->r.currentAngles, &axis);
      v19 = v12;
      v17 = (float)((float)((float)(*(float *)&v12 * axis.m[0].v[0]) + (float)(*(float *)&v13 * axis.m[1].v[0])) + (float)(v14 * axis.m[2].v[0])) + p_number[76];
      *(float *)&v19 = (float)((float)((float)(*(float *)&v12 * axis.m[0].v[1]) + (float)(*(float *)&v13 * axis.m[1].v[1])) + (float)(v14 * axis.m[2].v[1])) + p_number[77];
      v18 = v19;
      v14 = (float)((float)((float)(*(float *)&v12 * axis.m[0].v[2]) + (float)(*(float *)&v13 * axis.m[1].v[2])) + (float)(v14 * axis.m[2].v[2])) + p_number[78];
    }
    v20 = v17 - viewPos->v[0];
    v22 = v18;
    v21 = *(float *)&v18 - viewPos->v[1];
    v23 = v14 - viewPos->v[2];
    *(float *)&v22 = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v23 * v23));
    _XMM3 = v22;
    __asm
    {
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v21) * viewDir->v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v20) * viewDir->v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v23) * viewDir->v[2])) >= viewFovDot )
      break;
    wLinkCount = node->dynamic.wLinkCount;
    if ( ++v9 >= wLinkCount + 1 )
      return 0;
  }
  return 1;
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
  return Path_IsNodeFacingToward(node0, &pos, 0.5);
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
  if ( ((1 << LOBYTE(pNode->constant.type)) & 0x806400FC) != 0 )
    return Path_IsNodeFacingToward(pNode, &pPoint->m_Pos, 0.5);
  return 0;
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
__int64 Path_NodesInCylinder(const vec3_t *origin, const vec3_t *enemyPos, float maxDist, float maxHeight, pathsort_s *nodes, int maxNodes, int typeFlags, bool allowDontLinkNodes)
{
  float v8; 
  pathsort_s *v9; 
  int nodeCount; 
  signed int v12; 
  __int64 v13; 
  pathsort_s *v14; 
  pathnode_t *v15; 
  float v16; 
  int v17; 
  __int64 v18; 
  __int64 parentIndex; 
  gentity_s *v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int64 v28; 
  __int64 v29; 
  float outDistSq; 
  pathsort_s *v31; 
  const vec3_t *v32; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  v8 = origin->v[0];
  v9 = nodes;
  v32 = origin;
  v31 = nodes;
  g_path.circle.origin.v[0] = v8;
  *(_QWORD *)&g_path.circle.origin.y = *(_QWORD *)&origin->y;
  if ( enemyPos )
  {
    g_path.circle.enemyPos = *(vec2_t *)enemyPos->v;
    g_path.circle.checkEnemyPos = 1;
  }
  else
  {
    g_path.circle.enemyPos.v[0] = 0.0;
    g_path.circle.enemyPos.v[1] = 0.0;
    g_path.circle.checkEnemyPos = 0;
  }
  nodeCount = 0;
  if ( pathData.nodeTree )
  {
    g_path.circle.maxDistSq = maxDist * maxDist;
    g_path.circle.maxHeightSq = maxHeight * maxHeight;
    g_path.circle.maxDist = maxDist;
    g_path.circle.typeFlags = typeFlags;
    g_path.circle.nodes = nodes;
    g_path.circle.maxNodes = maxNodes;
    g_path.circle.nodeCount = 0;
    Path_NodesInCylinder_r(pathData.nodeTree, allowDontLinkNodes);
    nodeCount = g_path.circle.nodeCount;
  }
  v12 = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  if ( v12 < 0 )
    LOWORD(v12) = 0;
  if ( (unsigned __int16)v12 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) )
  {
    v13 = nodeCount;
    v14 = &v31[nodeCount];
    do
    {
      if ( v13 >= maxNodes )
        break;
      if ( Path_NodeValid(v12) )
      {
        v15 = &pathData.nodes[(unsigned __int16)v12];
        if ( Path_NodesInCylinder_Evaluate(v15, &outDistSq, 1, allowDontLinkNodes) )
        {
          v16 = outDistSq;
          ++nodeCount;
          v14->node = v15;
          ++v13;
          v14->metric = v16;
          ++v14;
        }
      }
      LOWORD(v12) = v12 + 1;
    }
    while ( (unsigned __int16)v12 < (signed int)(g_path.actualNodeCount - pathData.zoneCount) );
    v9 = v31;
  }
  if ( pathData.dynamicNodeGroupCount > 0 && pathData.parentIndexResolved )
  {
    v17 = 0;
    if ( pathData.dynamicNodeGroupCount > 0 )
    {
      v18 = 0i64;
      do
      {
        parentIndex = pathData.dynamicNodeGroups[v18].parentIndex;
        if ( (unsigned int)parentIndex >= 0x800 )
        {
          LODWORD(v29) = 2048;
          LODWORD(v28) = pathData.dynamicNodeGroups[v18].parentIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, v29) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[parentIndex].r.isInUse != g_entityIsInUse[parentIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[parentIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5972, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( pathData.dynamicNodeGroups[ iNodeGroup ].parentIndex ))", (const char *)&queryFormat, "G_IsEntityInUse( pathData.dynamicNodeGroups[ iNodeGroup ].parentIndex )") )
          __debugbreak();
        v20 = &g_entities[pathData.dynamicNodeGroups[v18].parentIndex];
        AnglesToAxis(&v20->r.currentAngles, &axis);
        MatrixInverse(&axis, &out);
        v21 = v32->v[0] - v20->r.currentOrigin.v[0];
        v22 = v32->v[1] - v20->r.currentOrigin.v[1];
        v23 = v32->v[2] - v20->r.currentOrigin.v[2];
        g_path.circle.origin.v[2] = (float)((float)(v21 * out.m[0].v[2]) + (float)(v22 * out.m[1].v[2])) + (float)(v23 * out.m[2].v[2]);
        g_path.circle.origin.v[0] = (float)((float)(v21 * out.m[0].v[0]) + (float)(v22 * out.m[1].v[0])) + (float)(v23 * out.m[2].v[0]);
        g_path.circle.origin.v[1] = (float)((float)(v21 * out.m[0].v[1]) + (float)(v22 * out.m[1].v[1])) + (float)(v23 * out.m[2].v[1]);
        if ( enemyPos )
        {
          v24 = enemyPos->v[0] - v20->r.currentOrigin.v[0];
          v25 = enemyPos->v[1] - v20->r.currentOrigin.v[1];
          v26 = enemyPos->v[2] - v20->r.currentOrigin.v[2];
          g_path.circle.enemyPos.v[1] = (float)((float)(v24 * out.m[0].v[1]) + (float)(v25 * out.m[1].v[1])) + (float)(v26 * out.m[2].v[1]);
          g_path.circle.enemyPos.v[0] = (float)((float)(v24 * out.m[0].v[0]) + (float)(v25 * out.m[1].v[0])) + (float)(v26 * out.m[2].v[0]);
        }
        g_path.circle.nodeCount = 0;
        g_path.circle.nodes = &v9[nodeCount];
        g_path.circle.maxNodes = maxNodes - nodeCount;
        Path_NodesInCylinder_r(pathData.dynamicNodeGroups[v18].nodeTree, allowDontLinkNodes);
        nodeCount += g_path.circle.nodeCount;
        ++v17;
        ++v18;
      }
      while ( v17 < pathData.dynamicNodeGroupCount );
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
char Path_NodesInCylinder_Evaluate(pathnode_t *pathNode, float *outDistSq, bool bDoHeightCheck, bool allowDontLinkNodes)
{
  float v5; 
  float v6; 
  float v7; 
  float v11; 
  float v12; 
  float v13; 
  unsigned __int16 type; 
  float v15; 
  vec3_t angles; 
  vec3_t forward; 

  v5 = pathNode->constant.vLocalOrigin.v[0];
  v6 = pathNode->constant.vLocalOrigin.v[1];
  v7 = pathNode->constant.vLocalOrigin.v[2];
  if ( (unsigned __int16)(pathNode->constant.type - 29) <= 1u && pathNode->constant.target )
  {
    v11 = (float)((float)(v6 - g_path.circle.origin.v[1]) * (float)(v6 - g_path.circle.origin.v[1])) + (float)((float)(v5 - g_path.circle.origin.v[0]) * (float)(v5 - g_path.circle.origin.v[0]));
    v12 = (float)(v7 - g_path.circle.origin.v[2]) * (float)(v7 - g_path.circle.origin.v[2]);
  }
  else
  {
    v11 = (float)(v6 - g_path.circle.origin.v[1]) * (float)(v6 - g_path.circle.origin.v[1]);
    v12 = (float)(v5 - g_path.circle.origin.v[0]) * (float)(v5 - g_path.circle.origin.v[0]);
  }
  v13 = v11 + v12;
  if ( !outDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5785, ASSERT_TYPE_ASSERT, "(outDistSq)", (const char *)&queryFormat, "outDistSq") )
    __debugbreak();
  *outDistSq = v13;
  if ( v13 > g_path.circle.maxDistSq )
    return 0;
  type = pathNode->constant.type;
  if ( (g_path.circle.typeFlags & (1 << type)) == 0 || !allowDontLinkNodes && (pathNode->constant.spawnflags & 1) != 0 && (g_path.circle.typeFlags & 1) == 0 )
    return 0;
  if ( bDoHeightCheck && (float)((float)(v7 - g_path.circle.origin.v[2]) * (float)(v7 - g_path.circle.origin.v[2])) > g_path.circle.maxHeightSq )
    return 0;
  if ( !g_path.circle.checkEnemyPos || type == 25 || type == 20 )
    return 1;
  if ( ((1 << type) & 0x62700000) == 0 )
    return (float)((float)((float)(g_path.circle.enemyPos.v[1] - v6) * pathNode->constant.yaw_orient.localForward.v[1]) + (float)((float)(g_path.circle.enemyPos.v[0] - v5) * pathNode->constant.yaw_orient.localForward.v[0])) >= 0.0;
  v15 = pathNode->constant.yaw_orient.localForward.v[0];
  angles.v[0] = pathNode->constant.yaw_orient.fLocalAngle;
  angles.v[2] = pathNode->constant.yaw_orient.localForward.v[1];
  angles.v[1] = v15;
  AngleVectors(&angles, &forward, NULL, NULL);
  return (float)((float)((float)(g_path.circle.enemyPos.v[0] - v5) * forward.v[0]) + (float)((float)(g_path.circle.enemyPos.v[1] - v6) * forward.v[1])) >= 0.0;
}

/*
==============
Path_NodesInCylinder_r
==============
*/
void Path_NodesInCylinder_r(pathnode_tree_t *tree, bool allowDontLinkNodes)
{
  unsigned int axis; 
  pathnode_tree_t *v4; 
  float v5; 
  unsigned __int16 *nodes; 
  bool v7; 
  int i; 
  pathnode_t *v9; 
  float v10; 
  __int64 v11; 
  __int64 v12; 
  float outDistSq; 

  axis = tree->axis;
  v4 = tree;
  if ( tree->axis >= 0 )
  {
    while ( 1 )
    {
      if ( axis >= 3 )
      {
        LODWORD(v12) = 3;
        LODWORD(v11) = axis;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v5 = g_path.circle.origin.v[axis] - v4->dist;
      if ( v5 > g_path.circle.maxDist )
        goto LABEL_9;
      if ( v5 >= COERCE_FLOAT(LODWORD(g_path.circle.maxDist) ^ _xmm) )
        break;
      v4 = v4->u.child[0];
LABEL_10:
      axis = v4->axis;
      if ( v4->axis < 0 )
        goto LABEL_11;
    }
    Path_NodesInCylinder_r(v4->u.child[0], allowDontLinkNodes);
LABEL_9:
    v4 = v4->u.child[1];
    goto LABEL_10;
  }
LABEL_11:
  nodes = v4->u.s.nodes;
  v7 = g_path.circle.maxHeightSq < 1.0e12;
  for ( i = 0; i < v4->u.s.nodeCount; ++nodes )
  {
    v9 = &pathData.nodes[*nodes];
    if ( Path_NodesInCylinder_Evaluate(v9, &outDistSq, v7, allowDontLinkNodes) )
    {
      if ( g_path.circle.nodeCount == g_path.circle.maxNodes )
        return;
      v10 = outDistSq;
      g_path.circle.nodes[g_path.circle.nodeCount].node = v9;
      g_path.circle.nodes[g_path.circle.nodeCount++].metric = v10;
    }
    ++i;
  }
}

/*
==============
Path_NodesInRadius
==============
*/
int Path_NodesInRadius(const vec3_t *origin, float maxDist, pathsort_s *nodes, int maxNodes, int typeFlags)
{
  return Path_NodesInCylinder(origin, NULL, maxDist, 1000000000.0, nodes, maxNodes, typeFlags, 0);
}

/*
==============
Path_NodesInRadius
==============
*/
int Path_NodesInRadius(const vec3_t *origin, float maxDist, pathsort_s *nodes, int maxNodes, int typeFlags, bool allowDontLinkNodes)
{
  return Path_NodesInCylinder(origin, NULL, maxDist, 1000000000.0, nodes, maxNodes, typeFlags, allowDontLinkNodes);
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
  __int64 v4; 
  double Float; 
  float v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 

  v4 = offset;
  Float = Scr_GetFloat(scrContext, 0);
  v7 = *(float *)&Float;
  if ( *(float *)&Float < 0.0 )
  {
    v7 = 0.0;
    if ( node->constant.targetname )
    {
      v8 = SL_ConvertToString(*fields_2[v4].name);
      v9 = j_va("pathnode property '%s' must be non-negative\n", v8);
      Scr_Error(COM_ERR_2466, scrContext, v9);
    }
    else
    {
      v10 = SL_ConvertToString((scr_string_t)0);
      v11 = SL_ConvertToString(*fields_2[v4].name);
      v12 = j_va("pathnode property '%s' must be non-negative for pathnode '%s'\n", v11, v10);
      Scr_Error(COM_ERR_2467, scrContext, v12);
    }
  }
  *(float *)((char *)&node->constant.spawnflags + fields_2[v4].ofs) = v7;
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
void Path_PostStep(void)
{
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  Nav_SystemSimulate((float)level.frameDuration * 0.001);
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
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  unsigned int v9; 
  const vec3_t *v11; 
  unsigned __int16 v12; 
  unsigned __int16 v14; 
  pathnode_t *v16; 
  __int64 v17; 
  gentity_s *Parent; 
  __int64 *p_vLocalOrigin; 
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
  float v31; 
  float v32; 
  float v33; 
  unsigned __int64 SpawnedNodeIndex; 
  __int64 v35; 
  __int64 v36; 
  const vec3_t *v38; 
  tmat33_t<vec3_t> mat; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 

  v9 = 0;
  v11 = angles;
  v12 = LOWORD(g_path.actualNodeCount) - LOWORD(pathData.zoneCount) - LOWORD(pathData.maxDynamicSpawnedNodeCount);
  v38 = angles;
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
        LODWORD(v36) = 2048;
        LODWORD(v35) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v35, v36) )
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
    v11 = v38;
  }
  Scr_SetString(&v16->constant.targetname, targetname);
  v16->constant.spawnflags |= additionalSpawnflags;
  if ( (unsigned int)nodeType >= 0x20 )
  {
    LODWORD(v36) = 32;
    LODWORD(v35) = nodeType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1797, ASSERT_TYPE_ASSERT, "(unsigned)( nodeType ) < (unsigned)( NODE_NUMTYPES )", "nodeType doesn't index NODE_NUMTYPES\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
  }
  v16->constant.type = nodeType;
  Parent = pathnode_t::GetParent(v16);
  p_vLocalOrigin = (__int64 *)&v16->constant.vLocalOrigin;
  v20 = origin->v[0];
  if ( Parent )
  {
    v22 = origin->v[2];
    v42 = v6;
    v23 = v20 - Parent->r.currentOrigin.v[0];
    v24 = origin->v[1];
    v41 = v7;
    v25 = v24 - Parent->r.currentOrigin.v[1];
    v26 = Parent->r.currentAngles.v[1];
    v40 = v8;
    v27 = v22 - Parent->r.currentOrigin.v[2];
    MatrixRotationZ(&mat, COERCE_FLOAT(LODWORD(v26) ^ _xmm));
    if ( &v38 == (const vec3_t **)p_vLocalOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v28 = v25 * mat.m[1].v[1];
    v29 = v27 * mat.m[2].v[1];
    *(float *)p_vLocalOrigin = (float)((float)(v25 * mat.m[1].v[0]) + (float)(v23 * mat.m[0].v[0])) + (float)(v27 * mat.m[2].v[0]);
    v30 = v28 + (float)(v23 * mat.m[0].v[1]);
    v31 = v25 * mat.m[1].v[2];
    v32 = v30 + v29;
    v33 = v27 * mat.m[2].v[2];
    v16->constant.vLocalOrigin.v[1] = v32;
    v21 = (float)(v31 + (float)(v23 * mat.m[0].v[2])) + v33;
  }
  else
  {
    *(float *)p_vLocalOrigin = v20;
    v16->constant.vLocalOrigin.v[1] = origin->v[1];
    v21 = origin->v[2];
  }
  v16->constant.vLocalOrigin.v[2] = v21;
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
_BOOL8 Path_TrajectoryCanAttemptAccurateJump(const vec3_t *fromPoint, const vec3_t *fromNormal, const vec3_t *toPoint, const vec3_t *toNormal, float gravity, float speedScale, PathJumpLinkWorkData *workData)
{
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  double v15; 
  double v16; 
  double v17; 
  float v18; 
  float v19; 
  _BOOL8 result; 
  vec3_t gravityVector; 
  vec3_t returnVector; 
  trace_t results; 

  if ( !workData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10726, ASSERT_TYPE_ASSERT, "(workData)", (const char *)&queryFormat, "workData") )
    __debugbreak();
  *(_QWORD *)workData->pointA.v = *(_QWORD *)fromPoint->v;
  workData->pointA.v[2] = fromPoint->v[2];
  workData->pointB = *toPoint;
  v11 = fromNormal->v[2];
  v12 = fromNormal->v[1];
  workData->pointA.v[0] = (float)(23.0 * fromNormal->v[0]) + workData->pointA.v[0];
  workData->pointA.v[1] = (float)(23.0 * v12) + workData->pointA.v[1];
  workData->pointA.v[2] = (float)(23.0 * v11) + workData->pointA.v[2];
  v13 = toNormal->v[1];
  v14 = toNormal->v[2];
  workData->pointB.v[0] = (float)(23.0 * toNormal->v[0]) + workData->pointB.v[0];
  workData->pointB.v[1] = (float)(23.0 * v13) + workData->pointB.v[1];
  workData->pointB.v[2] = (float)(23.0 * v14) + workData->pointB.v[2];
  v15 = TrajectoryCalculateMinimumVelocity(&workData->pointA, &workData->pointB, gravity);
  v16 = TrajectoryEstimateDesiredInAirTime(&workData->pointA, &workData->pointB, *(float *)&v15 * speedScale, gravity);
  gravityVector.v[0] = 0.0;
  gravityVector.v[1] = 0.0;
  LODWORD(gravityVector.v[2]) = LODWORD(gravity) ^ _xmm;
  TrajectoryCalculateInitialVelocity(&workData->pointA, &workData->pointB, &gravityVector, *(const float *)&v16, &returnVector);
  v17 = TrajectoryComputeDeltaHeightAtTime(returnVector.v[2], gravity, *(float *)&v16 * 0.5);
  v18 = *(float *)&v17 + workData->pointA.v[2];
  v19 = (float)(workData->pointB.v[1] + workData->pointA.v[1]) * 0.5;
  workData->pointCenter.v[0] = (float)(workData->pointB.v[0] + workData->pointA.v[0]) * 0.5;
  workData->pointCenter.v[1] = v19;
  workData->pointCenter.v[2] = v18;
  G_Main_TraceCapsule(&results, &workData->pointA, &workData->pointCenter, &pathConnectJumpActorBox, 2047, 529);
  result = 0;
  if ( results.fraction >= 1.0 && !results.startsolid && !results.allsolid )
  {
    G_Main_TraceCapsule(&results, &workData->pointCenter, &workData->pointB, &pathConnectJumpActorBox, 2047, 529);
    if ( results.fraction >= 1.0 && !results.startsolid && !results.allsolid )
      return 1;
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
float Path_ZoneGetIndoorPercent(int zoneNum)
{
  int v2; 
  signed int v3; 
  int v4; 
  unsigned __int16 v5; 
  unsigned int v6; 
  int v7; 
  __int64 v9; 
  __int64 v10; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2670, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  if ( zoneNum == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2671, ASSERT_TYPE_ASSERT, "( zoneNum != 255 )", (const char *)&queryFormat, "zoneNum != PATH_INVALID_ZONE") )
    __debugbreak();
  v2 = 0;
  v3 = g_path.actualNodeCount - pathData.zoneCount;
  v4 = 0;
  v5 = 0;
  if ( (signed int)(g_path.actualNodeCount - pathData.zoneCount) > 0 )
  {
    v6 = 0;
    do
    {
      if ( Path_NodeValid(v5) )
      {
        if ( pathData.pathZones )
        {
          if ( v6 >= pathData.zonesBytes )
          {
            LODWORD(v10) = pathData.zonesBytes;
            LODWORD(v9) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8510, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.zonesBytes )", "nodeIndex doesn't index pathData.zonesBytes\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          v7 = pathData.pathZones[v6];
        }
        else
        {
          v7 = 255;
        }
        if ( v7 == zoneNum )
        {
          if ( Path_IsNodeIndexExposedSkyBase(v6, 0) )
            ++v4;
          else
            ++v2;
        }
      }
      v6 = ++v5;
    }
    while ( v5 < v3 );
  }
  if ( v4 + v2 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 2692, ASSERT_TYPE_ASSERT, "((numIndoor + numOutdoor > 0))", "%s\n\tEmpty zone", "(numIndoor + numOutdoor > 0)") )
    __debugbreak();
  return (float)v2 / (float)(v4 + v2);
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
  float v2; 
  PathNodeParentUnion v3; 
  const char *v4; 
  PathNodeParentUnion v5; 
  const char *v6; 
  const char *v7; 
  char *v8; 
  const char *v9; 
  const char *v10; 
  __int64 v11; 
  const char *v12; 
  scr_string_t ParentNameFromParentIndex; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  __int128 v; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 484, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (node->constant.spawnflags & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 485, ASSERT_TYPE_ASSERT, "(node->constant.spawnflags & PNF_ERROR)", (const char *)&queryFormat, "node->constant.spawnflags & PNF_ERROR") )
    __debugbreak();
  if ( node->constant.error >= (unsigned int)NUM_PATH_NODE_ERRORS )
  {
    LODWORD(v19) = node->constant.error;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 486, ASSERT_TYPE_ASSERT, "(unsigned)( node->constant.error ) < (unsigned)( NUM_PATH_NODE_ERRORS )", "node->constant.error doesn't index NUM_PATH_NODE_ERRORS\n\t%i not in [0, %i)", v19, 11) )
      __debugbreak();
  }
  if ( !Nav_MeshLoaded() && !Nav_MeshWillBeLoaded() || node->constant.error != PNERR_NOLINK )
  {
    if ( !node->constant.parent.index || pathData.parentIndexResolved )
    {
      pathnode_t::GetPos((pathnode_t *)node, (vec3_t *)&v);
      if ( (unsigned int)GetParentNameFromParentIndex(node) )
      {
        ParentNameFromParentIndex = (unsigned int)GetParentNameFromParentIndex(node);
        v12 = SL_ConvertToString(ParentNameFromParentIndex);
      }
      else
      {
        v12 = (char *)&queryFormat.fmt + 3;
      }
      v14 = "Parent:";
      if ( !(unsigned int)GetParentNameFromParentIndex(node) )
        v14 = (char *)&queryFormat.fmt + 3;
      v15 = pathNodeErrorStrTable[node->constant.error];
      v16 = vtos((const vec3_t *)&v);
      v17 = nodeStringTable[node->constant.type];
      v18 = Path_ConvertNodeToIndex(node);
      Com_PrintError(18, "ERROR: Pathnode %d (%s) at %s %s. %s%s\n", v18, v17, v16, v15, v14, v12);
    }
    else
    {
      v2 = node->constant.vLocalOrigin.v[1];
      v3.name = (scr_string_t)node->constant.parent;
      *(float *)&v = node->constant.vLocalOrigin.v[0];
      DWORD2(v) = LODWORD(node->constant.vLocalOrigin.v[2]);
      *((float *)&v + 1) = v2;
      if ( v3.name )
      {
        v6 = SL_ConvertToString(v3.name);
        v5.name = (scr_string_t)node->constant.parent;
        v4 = v6;
      }
      else
      {
        v4 = (char *)&queryFormat.fmt + 3;
        v5.name = 0;
      }
      v7 = pathNodeErrorStrTable[node->constant.error];
      v8 = vtos((const vec3_t *)&v);
      v9 = nodeStringTable[node->constant.type];
      v10 = "Parent:";
      v11 = Path_ConvertNodeToIndex(node);
      if ( !v5.name )
        v10 = (char *)&queryFormat.fmt + 3;
      Com_PrintError(18, "ERROR: Pathnode %d (%s) at local pos %s %s. %s%s\n", v11, v9, v8, v7, v10, v4, v);
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
  __int64 v2; 
  int v3; 
  signed int v4; 
  __int64 v5; 
  __int64 v6; 
  pathnode_t *v7; 
  double Float; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  const char *CString; 
  scr_string_t String; 
  unsigned __int16 v16[2]; 
  unsigned int v17[3]; 
  char v18; 
  unsigned __int16 v19; 
  int p; 

  MemoryFile = SaveMemory_GetMemoryFile(save);
  MemFile_ReadData(MemoryFile, 4ui64, &p);
  v2 = p;
  if ( pathData.maxDynamicSpawnedNodeCount != p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 10539, ASSERT_TYPE_ASSERT, "(pathData.maxDynamicSpawnedNodeCount == maxSpawnedCount)", (const char *)&queryFormat, "pathData.maxDynamicSpawnedNodeCount == maxSpawnedCount") )
    __debugbreak();
  v3 = 0;
  v4 = g_path.actualNodeCount - pathData.zoneCount - pathData.maxDynamicSpawnedNodeCount;
  v5 = v2;
  if ( (int)v2 > 0 )
  {
    if ( v4 < 0 )
      v4 = 0;
    v6 = v4;
    do
    {
      MemFile_ReadData(MemoryFile, 1ui64, &v18);
      if ( v18 )
      {
        v7 = &pathData.nodes[v6];
        Path_InitSpawnNode(&pathData.nodes[v6]);
        Float = MemFile_ReadFloat(MemoryFile);
        v7->constant.vLocalOrigin.v[0] = *(float *)&Float;
        v9 = MemFile_ReadFloat(MemoryFile);
        v7->constant.vLocalOrigin.v[1] = *(float *)&v9;
        v10 = MemFile_ReadFloat(MemoryFile);
        v7->constant.vLocalOrigin.v[2] = *(float *)&v10;
        v11 = MemFile_ReadFloat(MemoryFile);
        v7->constant.yaw_orient.fLocalAngle = *(float *)&v11;
        v12 = MemFile_ReadFloat(MemoryFile);
        v7->constant.yaw_orient.localForward.v[0] = *(float *)&v12;
        v13 = MemFile_ReadFloat(MemoryFile);
        v7->constant.yaw_orient.localForward.v[1] = *(float *)&v13;
        MemFile_ReadData(MemoryFile, 4ui64, v16);
        v7->constant.type = v16[0];
        MemFile_ReadData(MemoryFile, 4ui64, v17);
        v7->constant.spawnflags = v17[0];
        MemFile_ReadData(MemoryFile, 2ui64, &v19);
        v7->constant.parent.index = v19;
        CString = MemFile_ReadCString(MemoryFile);
        if ( *CString )
          String = SL_GetString(CString, 0);
        else
          String = 0;
        v7->constant.targetname = String;
        if ( (unsigned __int64)v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 159, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        g_path.spawnedNodesValid.m_data[(unsigned __int64)v3 >> 6] = (0x8000000000000000ui64 >> (v3 & 0x3F)) | g_path.spawnedNodesValid.m_data[(unsigned __int64)v3 >> 6] & ~(0x8000000000000000ui64 >> (v3 & 0x3F));
      }
      ++v3;
      ++v6;
      --v5;
    }
    while ( v5 );
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
  unsigned __int16 v4; 
  const char *v5; 
  ComErrorCode v6; 
  pathnode_t *v7; 
  scr_string_t HighestNodeStance; 
  ai_stance_e v9; 
  unsigned __int16 type; 
  float v11; 
  vec3_t outEyeOffset; 
  float value; 
  float v14; 
  float v15; 
  tmat33_t<vec3_t> axis; 
  vec3_t vector; 

  entnum = entref.entnum;
  if ( entref.entclass != ENTITY_CLASS_PATHNODE )
  {
    v5 = "GetNodeOffset_Code not called on pathnode.";
    v6 = COM_ERR_6498;
    goto LABEL_15;
  }
  if ( entref.entnum >= g_path.actualNodeCount - pathData.zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5024, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( Path_NodeCount() )", "entref.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", entref.entnum, g_path.actualNodeCount - pathData.zoneCount) )
    __debugbreak();
  v4 = truncate_cast<unsigned short,unsigned int>(entnum);
  if ( !Path_NodeValid(v4) )
  {
    v5 = "GetNodeOffset_Code: called on despawned pathnode.";
    v6 = COM_ERR_6497;
LABEL_15:
    Scr_Error(v6, scrContext, v5);
    return;
  }
  v7 = &pathData.nodes[entnum];
  if ( v7->constant.type == 21 )
    Scr_Error(COM_ERR_6499, scrContext, "nodes of type NODE_COVER_3D are not currently supported by GetNodeOffset_Code.");
  value = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  HighestNodeStance = Path_GetHighestNodeStance(v7);
  if ( !HighestNodeStance )
    HighestNodeStance = scr_const.crouch;
  v9 = AI_StringToStance(HighestNodeStance);
  type = v7->constant.type;
  if ( type == 31 )
    type = v7->dynamic.coverMultiType;
  GetNodeExposedEyeOffset(type, v9, &outEyeOffset);
  v11 = outEyeOffset.v[0];
  outEyeOffset.v[0] = outEyeOffset.v[1];
  outEyeOffset.v[1] = v11;
  pathnode_t::GetAngles(v7, &vector);
  AnglesToAxis(&vector, &axis);
  value = (float)((float)(axis.m[0].v[0] * outEyeOffset.v[0]) - (float)(axis.m[1].v[0] * outEyeOffset.v[1])) + (float)(outEyeOffset.v[2] * axis.m[2].v[0]);
  v14 = (float)((float)(axis.m[0].v[1] * outEyeOffset.v[0]) - (float)(axis.m[1].v[1] * outEyeOffset.v[1])) + (float)(outEyeOffset.v[2] * axis.m[2].v[1]);
  v15 = (float)((float)(axis.m[0].v[2] * outEyeOffset.v[0]) - (float)(axis.m[1].v[2] * outEyeOffset.v[1])) + (float)(outEyeOffset.v[2] * axis.m[2].v[2]);
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
  __int128 v2; 
  double Float; 
  unsigned int v6; 
  __int64 i; 
  __int64 v8; 
  signed int v9; 
  const pathnode_t *v10; 
  scrContext_t *v11; 
  unsigned __int16 v12; 
  unsigned int pathNodeListOutCount[4]; 
  unsigned __int16 pathNodeIndexListOut[512]; 
  __int128 v15; 

  v15 = v2;
  Float = Scr_GetFloat(scrContext, 0);
  memset_0(pathNodeIndexListOut, 0, sizeof(pathNodeIndexListOut));
  GetPathNodeListForSightToPathNodeCheck(&pEntity->r.currentOrigin, *(const float *)&Float, pathNodeIndexListOut, 0x200ui64, pathNodeListOutCount);
  Scr_MakeArray(scrContext);
  v6 = pathNodeListOutCount[0];
  for ( i = 0i64; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v8 = pathNodeIndexListOut[i];
    v9 = g_path.actualNodeCount - pathData.zoneCount;
    if ( Path_ConvertNodeToIndex(&pathData.nodes[v8]) >= v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4370, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( &pathData.nodes[ pathNodeIndexList[i] ] ) < Path_NodeCount())", (const char *)&queryFormat, "Path_ConvertNodeToIndex( &pathData.nodes[ pathNodeIndexList[i] ] ) < Path_NodeCount()") )
    {
      __debugbreak();
      LOWORD(v8) = pathNodeIndexListOut[i];
    }
    v10 = &pathData.nodes[(unsigned __int16)v8];
    v11 = ScriptContext_Server();
    v12 = Path_ConvertNodeToIndex(v10);
    Scr_AddEntityNum(v11, v12, ENTITY_CLASS_PATHNODE);
    Scr_AddArray(scrContext);
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
  unsigned int v2; 
  const gentity_s *Entity; 
  bool v4; 
  pathnode_t *v5; 
  unsigned __int16 v6; 
  unsigned int v7; 
  gentity_s *Parent; 
  float *p_number; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int Instance; 
  int v14; 
  scrContext_t *v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  __int64 v18; 
  vec3_t pos; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 

  v2 = g_path.actualNodeCount - pathData.zoneCount;
  Entity = GScr_GetEntity(0);
  v4 = 0;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) )
    v4 = Scr_GetInt(scrContext, 1u) != 0;
  Scr_MakeArray(scrContext);
  v5 = NULL;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0;
    do
    {
      if ( Path_NodeValid(v6) )
      {
        if ( v6 != 0xFFFF )
        {
          if ( v7 >= g_path.actualNodeCount )
          {
            LODWORD(v18) = g_path.actualNodeCount;
            LODWORD(v17) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          v5 = &pathData.nodes[v6];
        }
        pos = v5->constant.vLocalOrigin;
        Parent = pathnode_t::GetParent(v5);
        p_number = (float *)&Parent->s.number;
        if ( Parent )
        {
          AnglesToAxis(&Parent->r.currentAngles, &axis);
          v10 = pos.v[0] * axis.m[0].v[1];
          v11 = pos.v[0] * axis.m[0].v[2];
          pos.v[0] = (float)((float)((float)(pos.v[1] * axis.m[1].v[0]) + (float)(pos.v[0] * axis.m[0].v[0])) + (float)(pos.v[2] * axis.m[2].v[0])) + p_number[76];
          v12 = (float)(pos.v[2] * axis.m[2].v[2]) + (float)(v11 + (float)(pos.v[1] * axis.m[1].v[2]));
          pos.v[1] = (float)((float)((float)(pos.v[1] * axis.m[1].v[1]) + v10) + (float)(pos.v[2] * axis.m[2].v[1])) + p_number[77];
          pos.v[2] = v12 + p_number[78];
        }
        Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, Entity);
        if ( v4 )
        {
          bounds.midPoint.v[1] = pos.v[1] + 0.0;
          bounds.midPoint.v[0] = pos.v[0] + 0.0;
          bounds.halfSize = playerBox.halfSize;
          bounds.midPoint.v[2] = pos.v[2] + 35.0;
          v14 = PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, Instance, Entity);
        }
        else
        {
          v14 = PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &pos, Instance, Entity);
        }
        if ( v14 )
        {
          v15 = ScriptContext_Server();
          v16 = Path_ConvertNodeToIndex(v5);
          Scr_AddEntityNum(v15, v16, ENTITY_CLASS_PATHNODE);
          Scr_AddArray(scrContext);
        }
        v5 = NULL;
      }
      v7 = ++v6;
    }
    while ( v6 < v2 );
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
  bool v2; 
  const Bounds *v3; 
  const pathnode_t *v4; 
  unsigned __int16 v5; 
  int v6; 
  int returnCount; 
  NearestNodeInput pInput; 
  vec3_t vectorValue; 

  if ( pathData.zoneCount > 0 )
  {
    if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3523, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
      __debugbreak();
    Scr_GetVector(scrContext, 0, &vectorValue);
    pInput.typeFlags = -2;
    pInput.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
    pInput.fMaxDist = FLOAT_192_0;
    pInput.entNum = 2047;
    *(_WORD *)&pInput.bAllowCrouch = 257;
    pInput.bAllowFailedUnuseable = 1;
    pInput.vOrigin = &vectorValue;
    pInput.traceMask = 33685521;
    pInput.blockPlanes = NULL;
    v2 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE);
    v3 = &actorBox;
    if ( v2 )
      v3 = NULL;
    pInput.baseBounds = v3;
    v4 = Path_NearestNodeExtended(&pInput, g_nearestNodes, 64, &returnCount, 0);
    if ( v4 || (v4 = Path_NearestNodeByDistanceOnly(&vectorValue, 2000.0)) != NULL )
    {
      if ( pathData.pathZones )
      {
        v5 = Path_ConvertNodeToIndex(v4);
        v6 = Path_NodeZoneFromIndex(v5);
        if ( v6 != 255 )
          Scr_AddInt(scrContext, v6);
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
  __int128 v1; 
  int zoneCount; 
  int Int; 
  double Float; 
  int v6; 
  int v7; 
  pathnode_t *v8; 
  pathnode_t *pNextOpen; 
  pathnode_t *v10; 
  unsigned __int16 v11; 
  int v12; 
  int v13; 
  int v14; 
  bool v15; 
  int v16; 
  __int64 v17; 
  unsigned __int16 nodeNum; 
  pathnode_t *v19; 
  unsigned __int16 v20; 
  __int64 v21; 
  char v22; 
  unsigned int v23; 
  const pathnode_t *v24; 
  scrContext_t *v25; 
  unsigned __int16 v26; 
  const char *v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  signed int v31; 
  __int64 v33[4]; 
  __int128 v34; 

  if ( !pathData.usePathExtraData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3756, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  zoneCount = pathData.zoneCount;
  v31 = g_path.actualNodeCount - pathData.zoneCount;
  if ( pathData.zoneCount > 0 )
  {
    Int = Scr_GetInt(scrContext, 0);
    if ( Int == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3768, ASSERT_TYPE_ASSERT, "( zone != 255 )", (const char *)&queryFormat, "zone != PATH_INVALID_ZONE") )
      __debugbreak();
    Float = Scr_GetFloat(scrContext, 1u);
    if ( Int < 0 || Int >= zoneCount )
    {
      v27 = j_va("Invalid zone for GetZoneNodesByDist(zone:%d, dist:%f)", (unsigned int)Int, *(float *)&Float);
      Scr_Error(COM_ERR_2483, scrContext, v27);
    }
    else
    {
      v34 = v1;
      v6 = 0;
      if ( Scr_GetNumParam(scrContext) <= 2 )
        v7 = 0;
      else
        v7 = Scr_GetInt(scrContext, 2u);
      v30 = v7;
      if ( zoneCount > 0 )
      {
        do
        {
          v8 = Path_ConvertZoneIndexToZone(v6++);
          *(_QWORD *)&v8->transient.iSearchFrame = 0i64;
          v8->transient.pNextOpen = NULL;
          v8->transient.pPrevOpen = NULL;
          v8->transient.pParent = NULL;
          *(_QWORD *)&v8->transient.fCost = 0i64;
          *(_QWORD *)&v8->transient.nodeCost = 0i64;
          v8->transient.fCost = 1.1754944e-38;
        }
        while ( v6 < zoneCount );
      }
      pNextOpen = Path_ConvertZoneIndexToZone(Int);
      if ( !pNextOpen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3791, ASSERT_TYPE_ASSERT, "( nodeCur )", (const char *)&queryFormat, "nodeCur") )
        __debugbreak();
      pNextOpen->transient.fCost = *(float *)&Float;
      memset(v33, 0, sizeof(v33));
      v10 = pNextOpen;
      do
      {
        if ( v7 || pNextOpen->transient.fCost > 0.0 )
        {
          if ( pathData.pathZones )
          {
            v11 = Path_ConvertNodeToIndex(pNextOpen);
            v12 = Path_NodeZoneFromIndex(v11);
          }
          else
          {
            v12 = 255;
          }
          v13 = v12 / 8;
          v14 = v12 % 8;
          if ( (unsigned int)(v12 / 8) >= 0x20 )
          {
            LODWORD(v29) = 32;
            LODWORD(v28) = v12 / 8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3802, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCurZone / 8 ) < (unsigned)( ( ( 256 ) / 8 ) )", "nodeCurZone / 8 doesn't index BOT_ZONE_STACK_VISIT_MAX\n\t%i not in [0, %i)", v28, v29) )
              __debugbreak();
          }
          v15 = pNextOpen->transient.fCost > 0.0;
          *((_BYTE *)v33 + v13) |= 1 << v14;
          if ( v15 )
          {
            v16 = 0;
            if ( pNextOpen->dynamic.wLinkCount > 0 )
            {
              v17 = 0i64;
              do
              {
                nodeNum = pNextOpen->constant.Links[v17].nodeNum;
                if ( nodeNum == 0xFFFF )
                {
                  v19 = NULL;
                }
                else
                {
                  if ( nodeNum >= g_path.actualNodeCount )
                  {
                    LODWORD(v29) = g_path.actualNodeCount;
                    LODWORD(v28) = nodeNum;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v28, v29) )
                      __debugbreak();
                  }
                  v19 = &pathData.nodes[nodeNum];
                }
                if ( 1.1754944e-38 == v19->transient.fCost )
                {
                  v19->transient.fCost = pNextOpen->transient.fCost - pNextOpen->constant.Links[v17].fDist;
                  v10->transient.pNextOpen = v19;
                  v10 = v19;
                }
                ++v16;
                ++v17;
              }
              while ( v16 < pNextOpen->dynamic.wLinkCount );
              v7 = v30;
            }
          }
        }
        pNextOpen = pNextOpen->transient.pNextOpen;
      }
      while ( pNextOpen );
      Scr_MakeArray(scrContext);
      v20 = 0;
      if ( v31 > 0 )
      {
        v21 = 0i64;
        do
        {
          if ( pathData.pathZones )
          {
            if ( (unsigned int)v21 >= pathData.zonesBytes )
            {
              LODWORD(v29) = pathData.zonesBytes;
              LODWORD(v28) = v21;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 8510, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.zonesBytes )", "nodeIndex doesn't index pathData.zonesBytes\n\t%i not in [0, %i)", v28, v29) )
                __debugbreak();
            }
            v22 = pathData.pathZones[v21] % 8u;
            v23 = pathData.pathZones[v21] / 8u;
            if ( v23 >= 0x20 )
            {
              LODWORD(v29) = 32;
              LODWORD(v28) = pathData.pathZones[v21] / 8u;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 3828, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCurZone / 8 ) < (unsigned)( ( ( 256 ) / 8 ) )", "nodeCurZone / 8 doesn't index BOT_ZONE_STACK_VISIT_MAX\n\t%i not in [0, %i)", v28, v29) )
                __debugbreak();
            }
          }
          else
          {
            v22 = 7;
            v23 = 31;
          }
          if ( (*((_BYTE *)v33 + (int)v23) & (unsigned __int8)(1 << v22)) != 0 )
          {
            if ( v20 == 0xFFFF )
            {
              v24 = NULL;
            }
            else
            {
              if ( (unsigned int)v21 >= g_path.actualNodeCount )
              {
                LODWORD(v29) = g_path.actualNodeCount;
                LODWORD(v28) = v21;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( g_path.actualNodeCount )", "index doesn't index g_path.actualNodeCount\n\t%i not in [0, %i)", v28, v29) )
                  __debugbreak();
              }
              v24 = &pathData.nodes[v20];
            }
            v25 = ScriptContext_Server();
            v26 = Path_ConvertNodeToIndex(v24);
            Scr_AddEntityNum(v25, v26, ENTITY_CLASS_PATHNODE);
            Scr_AddArray(scrContext);
          }
          v21 = ++v20;
        }
        while ( v20 < v31 );
      }
    }
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
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  void *v6; 
  scrContext_t *v7; 
  gentity_s *Entity; 
  unsigned int v9; 
  double Float; 
  float v11; 
  double v12; 
  unsigned int v13; 
  unsigned int v14; 
  float v15; 
  unsigned int v16; 
  float v17; 
  pathsort_s *p_nodes; 
  __int64 v19; 
  signed int v20; 
  float v21; 
  float v22; 
  float v23; 
  gentity_s *Parent; 
  gentity_s *v25; 
  float v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int i; 
  unsigned int Object; 
  scr_entref_t EntityIdRef; 
  unsigned int v32; 
  const pathnode_t *v33; 
  const pathnode_t **v34; 
  unsigned int v35; 
  const pathnode_t **v36; 
  unsigned int FirstSibling; 
  unsigned int v38; 
  scr_entref_t v39; 
  unsigned int v40; 
  const pathnode_t *v41; 
  const pathnode_t **v42; 
  unsigned int v43; 
  const pathnode_t **v44; 
  __int64 maxNodes; 
  __int64 typeFlags; 
  unsigned int ArrayObject; 
  unsigned int parentId; 
  tmat33_t<vec3_t> axis; 
  __int128 v51[512]; 
  __int128 v52[512]; 
  pathsort_s nodes; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 

  v6 = alloca(v1);
  v7 = scrContext;
  v57 = v2;
  v54 = v5;
  Entity = GScr_GetEntity(0);
  ArrayObject = BGScr_Main_GetArrayObject(v7, 1u);
  v9 = ArrayObject;
  parentId = BGScr_Main_GetArrayObject(v7, 2u);
  Float = Scr_GetFloat(v7, 3u);
  v11 = *(float *)&Float;
  v12 = Scr_GetFloat(v7, 4u);
  v13 = 0;
  v14 = 0;
  v15 = *(float *)&v12 * *(float *)&v12;
  v16 = Path_NodesInCylinder(&Entity->r.currentOrigin, NULL, v11, 256.0, &nodes, 512, -1, 0);
  v17 = 0.0;
  if ( v16 )
  {
    v56 = v3;
    p_nodes = &nodes;
    v55 = v4;
    v19 = v16;
    do
    {
      v20 = g_path.actualNodeCount - pathData.zoneCount;
      if ( Path_ConvertNodeToIndex(p_nodes->node) >= v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4070, ASSERT_TYPE_ASSERT, "(Path_ConvertNodeToIndex( nodesAll[i].node ) < Path_NodeCount())", (const char *)&queryFormat, "Path_ConvertNodeToIndex( nodesAll[i].node ) < Path_NodeCount()") )
        __debugbreak();
      v21 = p_nodes->node->constant.vLocalOrigin.v[0];
      v22 = p_nodes->node->constant.vLocalOrigin.v[1];
      v23 = p_nodes->node->constant.vLocalOrigin.v[2];
      Parent = pathnode_t::GetParent(p_nodes->node);
      v25 = Parent;
      v26 = v21;
      if ( Parent )
      {
        AnglesToAxis(&Parent->r.currentAngles, &axis);
        v26 = (float)((float)((float)(v21 * axis.m[0].v[0]) + (float)(v22 * axis.m[1].v[0])) + (float)(v23 * axis.m[2].v[0])) + v25->r.currentOrigin.v[0];
        v22 = (float)((float)((float)(v21 * axis.m[0].v[1]) + (float)(v22 * axis.m[1].v[1])) + (float)(v23 * axis.m[2].v[1])) + v25->r.currentOrigin.v[1];
      }
      if ( v15 <= 0.0 || v15 <= (float)((float)((float)(v22 - Entity->r.currentOrigin.v[1]) * (float)(v22 - Entity->r.currentOrigin.v[1])) + (float)((float)(v26 - Entity->r.currentOrigin.v[0]) * (float)(v26 - Entity->r.currentOrigin.v[0]))) )
      {
        v28 = v14++;
        v51[v28] = (__int128)*p_nodes;
      }
      else
      {
        v27 = v13++;
        v52[v27] = (__int128)*p_nodes;
      }
      ++p_nodes;
      --v19;
    }
    while ( v19 );
    v7 = scrContext;
    v9 = ArrayObject;
  }
  for ( i = FindFirstSibling(v7, v9); i; i = FindNextSibling(v7, i) )
  {
    Object = FindObject(v7, i);
    if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4089, ASSERT_TYPE_ASSERT, "( objectIdPathNode )", (const char *)&queryFormat, "objectIdPathNode") )
      __debugbreak();
    if ( GetObjectType(v7, Object) == VAR_ENTITY )
    {
      EntityIdRef = Scr_GetEntityIdRef(v7, Object);
      if ( EntityIdRef.entclass != ENTITY_CLASS_PATHNODE )
        Scr_ParamError(COM_ERR_2494, v7, Object, "close list included an index that is not a pathnode");
      if ( EntityIdRef.entnum >= g_path.actualNodeCount - pathData.zoneCount )
      {
        LODWORD(typeFlags) = g_path.actualNodeCount - pathData.zoneCount;
        LODWORD(maxNodes) = EntityIdRef.entnum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4101, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", maxNodes, typeFlags) )
          __debugbreak();
      }
      v32 = 0;
      v33 = &pathData.nodes[EntityIdRef.entnum];
      if ( v14 )
      {
        v34 = (const pathnode_t **)v51;
        do
        {
          if ( Path_NodesVisible(v33, *v34) )
          {
            v17 = FLOAT_1_0;
            goto LABEL_57;
          }
          ++v32;
          v34 += 2;
        }
        while ( v32 < v14 );
      }
      v35 = 0;
      if ( v13 )
      {
        v36 = (const pathnode_t **)v52;
        do
        {
          if ( Path_NodesVisible(v33, *v36) )
            goto LABEL_35;
          ++v35;
          v36 += 2;
        }
        while ( v35 < v13 );
      }
    }
  }
  FirstSibling = FindFirstSibling(v7, parentId);
  if ( !FirstSibling )
    goto LABEL_57;
  while ( 1 )
  {
    v38 = FindObject(v7, FirstSibling);
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4129, ASSERT_TYPE_ASSERT, "( objectIdPathNode )", (const char *)&queryFormat, "objectIdPathNode") )
      __debugbreak();
    if ( GetObjectType(v7, v38) != VAR_ENTITY )
      goto LABEL_54;
    v39 = Scr_GetEntityIdRef(v7, v38);
    if ( v39.entclass != ENTITY_CLASS_PATHNODE )
      Scr_ParamError(COM_ERR_2495, v7, v38, "far list included an index that is not a pathnode");
    if ( v39.entnum >= g_path.actualNodeCount - pathData.zoneCount )
    {
      LODWORD(typeFlags) = g_path.actualNodeCount - pathData.zoneCount;
      LODWORD(maxNodes) = v39.entnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4141, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", maxNodes, typeFlags) )
        __debugbreak();
    }
    v40 = 0;
    v41 = &pathData.nodes[v39.entnum];
    if ( v14 )
      break;
LABEL_50:
    v43 = 0;
    if ( v13 )
    {
      v44 = (const pathnode_t **)v52;
      while ( !Path_NodesVisible(v41, *v44) )
      {
        ++v43;
        v44 += 2;
        if ( v43 >= v13 )
          goto LABEL_54;
      }
      v17 = FLOAT_0_25;
      goto LABEL_57;
    }
LABEL_54:
    FirstSibling = FindNextSibling(v7, FirstSibling);
    if ( !FirstSibling )
      goto LABEL_57;
  }
  v42 = (const pathnode_t **)v51;
  while ( !Path_NodesVisible(v41, *v42) )
  {
    ++v40;
    v42 += 2;
    if ( v40 >= v14 )
      goto LABEL_50;
  }
LABEL_35:
  v17 = FLOAT_0_5;
LABEL_57:
  Scr_AddFloat(v7, v17);
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
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int FirstSibling; 
  unsigned int Object; 
  scr_entref_t EntityIdRef; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned int NextSibling; 
  unsigned int v12; 
  scr_entref_t v13; 
  unsigned __int16 MinimumValueBetweenNodeLists; 
  unsigned __int8 v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned __int16 pathNodeIndexListB[512]; 
  unsigned __int16 pathNodeIndexListA[4096]; 

  ArrayObject = BGScr_Main_GetArrayObject(scrContext, 0);
  v3 = BGScr_Main_GetArrayObject(scrContext, 1u);
  if ( GetArraySize(scrContext, ArrayObject) )
  {
    if ( GetArraySize(scrContext, v3) )
    {
      if ( LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData) )
      {
        if ( LOSPrecomputeSystem::IsDataLoaded(&g_losPrecomputeData) )
        {
          v4 = 0i64;
          v5 = 0;
          v20 = 0;
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
                  LODWORD(v19) = g_path.actualNodeCount - pathData.zoneCount;
                  LODWORD(v18) = EntityIdRef.entnum;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4465, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v18, v19) )
                    __debugbreak();
                }
                v9 = Path_ConvertNodeToIndex(&pathData.nodes[EntityIdRef.entnum]);
                v10 = v5++;
                pathNodeIndexListB[v10] = v9;
              }
              FirstSibling = FindNextSibling(scrContext, FirstSibling);
            }
            while ( FirstSibling );
            v20 = v5;
            v4 = 0i64;
          }
          NextSibling = FindFirstSibling(scrContext, v3);
          if ( NextSibling )
          {
            do
            {
              v12 = FindObject(scrContext, NextSibling);
              if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4480, ASSERT_TYPE_ASSERT, "( objectIdPathNode )", (const char *)&queryFormat, "objectIdPathNode") )
                __debugbreak();
              if ( GetObjectType(scrContext, v12) == VAR_ENTITY )
              {
                v13 = Scr_GetEntityIdRef(scrContext, v12);
                if ( v13.entclass != ENTITY_CLASS_PATHNODE )
                  Scr_ParamError(COM_ERR_2503, scrContext, v12, "spawn point path node list included an index that is not a pathnode");
                if ( v13.entnum >= g_path.actualNodeCount - pathData.zoneCount )
                {
                  LODWORD(v19) = g_path.actualNodeCount - pathData.zoneCount;
                  LODWORD(v18) = v13.entnum;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 4492, ASSERT_TYPE_ASSERT, "(unsigned)( entRefNode.entnum ) < (unsigned)( Path_NodeCount() )", "entRefNode.entnum doesn't index Path_NodeCount()\n\t%i not in [0, %i)", v18, v19) )
                    __debugbreak();
                }
                pathNodeIndexListA[v4] = Path_ConvertNodeToIndex(&pathData.nodes[v13.entnum]);
                v4 = (unsigned int)(v4 + 1);
              }
              NextSibling = FindNextSibling(scrContext, NextSibling);
            }
            while ( NextSibling );
            v5 = v20;
          }
          MinimumValueBetweenNodeLists = LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists(&g_losPrecomputeData, pathNodeIndexListA, v4, pathNodeIndexListB, v5);
          v15 = MinimumValueBetweenNodeLists;
          v16 = (float)(255.0 - (float)truncate_cast<unsigned char,int>(HIBYTE(MinimumValueBetweenNodeLists))) * 0.0039215689;
          v17 = (float)truncate_cast<unsigned char,int>(v15);
          Scr_MakeArray(scrContext);
          Scr_AddFloat(scrContext, (float)(255.0 - v17) * 0.0039215689);
          Scr_AddArray(scrContext);
          Scr_AddFloat(scrContext, v16);
          Scr_AddArray(scrContext);
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
  const char **v3; 
  int v4; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  const char *v15; 
  int NumParam; 
  unsigned int Int; 
  scr_string_t ConstString; 
  scr_string_t v19; 
  const char *v20; 
  char *v21; 
  unsigned __int16 v22; 
  const pathnode_t *v23; 
  scrContext_t *v24; 
  unsigned __int16 v25; 
  pathnode_t *v26; 
  const char *v27; 
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
  v3 = nodeStringTable;
  v4 = 0;
  while ( 2 )
  {
    v5 = *v3;
    v6 = 0x7FFFFFFFi64;
    v7 = String;
    if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = v5 - String;
    while ( 1 )
    {
      v9 = (unsigned __int8)v7[v8];
      v10 = v6;
      v11 = *(unsigned __int8 *)v7++;
      --v6;
      if ( !v10 )
      {
LABEL_17:
        v14 = v4;
        if ( v4 != -1 )
          goto LABEL_22;
        goto LABEL_21;
      }
      if ( v9 != v11 )
      {
        v12 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v12 = v9;
        v9 = v12;
        v13 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v13 = v11;
        if ( v9 != v13 )
          break;
      }
      if ( !v9 )
        goto LABEL_17;
    }
    ++v4;
    if ( (__int64)++v3 < (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_691 )
      continue;
    break;
  }
  v14 = -1;
LABEL_21:
  v15 = j_va("SpawnCoverNode: Unrecognized node type %s.", String);
  Scr_Error(COM_ERR_2461, scrContext, v15);
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
    v19 = Scr_GetConstString(scrContext, 5u);
  else
    v19 = 0;
  if ( v14 == 16 && (NumParam <= 6 || (from = Scr_GetConstString(scrContext, 6u)) == 0) )
  {
    v20 = j_va("SpawnCoverNode: node type %s must have the 'animscript' parameter passed-in.", String);
    Scr_Error(COM_ERR_2462, scrContext, v20);
  }
  start.v[2] = vectorValue.v[2] + 12.0;
  end.v[2] = vectorValue.v[2] - 36.0;
  start.v[0] = vectorValue.v[0];
  start.v[1] = vectorValue.v[1];
  end.v[0] = vectorValue.v[0];
  end.v[1] = vectorValue.v[1];
  G_Main_TraceCapsule(&results, &start, &end, &actorBox, 2047, 131089);
  if ( results.startsolid || results.allsolid )
  {
    v27 = vtos(&vectorValue);
    Com_PrintError(16, "SpawnCoverNode: pos %s is inside a solid.", v27);
    return;
  }
  if ( ((1 << v14) & 0x1E300000) == 0 )
  {
    if ( results.fraction >= 1.0 )
    {
      v21 = vtos(&vectorValue);
      Com_PrintError(16, "SpawnCoverNode: unable to find anything solid underneath pos %s within %.0f.", v21, DOUBLE_36_0);
      return;
    }
    vectorValue.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    vectorValue.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
    vectorValue.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  }
  v22 = Path_SpawnNode(&vectorValue, &angles, v14, Int, ConstString, v19);
  if ( v22 != 0xFFFF )
  {
    v23 = Path_ConvertIndexToNode(v22);
    v24 = ScriptContext_Server();
    v25 = Path_ConvertNodeToIndex(v23);
    Scr_AddEntityNum(v24, v25, ENTITY_CLASS_PATHNODE);
    if ( v14 == 16 )
    {
      v26 = Path_ConvertIndexToNode(v22);
      Scr_SetString(&v26->constant.animscript, from);
    }
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
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t angles; 
  vec4_t quat; 
  vec4_t v14; 
  vec4_t v15; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 

  Parent = pathnode_t::GetParent(this);
  if ( Parent )
  {
    AnglesToQuat(&Parent->r.currentAngles, &quat);
    v6 = quat.v[3];
    LODWORD(v7) = LODWORD(quat.v[0]) ^ _xmm;
    LODWORD(v8) = LODWORD(quat.v[2]) ^ _xmm;
    LODWORD(v9) = LODWORD(quat.v[1]) ^ _xmm;
    AnglesToQuat(worldAngles, &v14);
    v15.v[0] = (float)((float)((float)(v14.v[3] * v7) + (float)(v14.v[0] * v6)) + (float)(v14.v[2] * v9)) - (float)(v14.v[1] * v8);
    v15.v[1] = (float)((float)((float)(v14.v[1] * v6) - (float)(v14.v[2] * v7)) + (float)(v14.v[3] * v9)) + (float)(v14.v[0] * v8);
    v15.v[2] = (float)((float)((float)(v14.v[1] * v7) + (float)(v14.v[2] * v6)) - (float)(v14.v[0] * v9)) + (float)(v14.v[3] * v8);
    v15.v[3] = (float)((float)((float)(v14.v[3] * v6) - (float)(v14.v[0] * v7)) - (float)(v14.v[1] * v9)) - (float)(v14.v[2] * v8);
    QuatToAxis(&v15, &axis);
    AxisToAngles(&axis, &angles);
    if ( ((1 << LOBYTE(this->constant.type)) & 0x62700000) != 0 )
    {
      v10 = angles.v[1];
      this->constant.yaw_orient.fLocalAngle = angles.v[0];
      v11 = angles.v[2];
    }
    else
    {
      v10 = axis.m[0].v[0];
      this->constant.yaw_orient.fLocalAngle = angles.v[1];
      v11 = axis.m[0].v[1];
    }
    this->constant.yaw_orient.localForward.v[1] = v11;
    this->constant.yaw_orient.localForward.v[0] = v10;
  }
  else if ( ((1 << LOBYTE(this->constant.type)) & 0x62700000) != 0 )
  {
    this->constant.yaw_orient.fLocalAngle = worldAngles->v[0];
    this->constant.yaw_orient.localForward.v[0] = worldAngles->v[1];
    this->constant.yaw_orient.localForward.v[1] = worldAngles->v[2];
  }
  else
  {
    this->constant.yaw_orient.fLocalAngle = worldAngles->v[1];
    AngleVectors(worldAngles, &forward, NULL, NULL);
    v5 = forward.v[1];
    this->constant.yaw_orient.localForward.v[0] = forward.v[0];
    this->constant.yaw_orient.localForward.v[1] = v5;
  }
}

/*
==============
pathnode_t::SetWorldPos
==============
*/
void pathnode_t::SetWorldPos(pathnode_t *this, const vec3_t *worldPos)
{
  gentity_s *Parent; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  vec3_t in1; 
  tmat33_t<vec3_t> mat; 

  Parent = pathnode_t::GetParent(this);
  v5 = worldPos->v[0];
  if ( Parent )
  {
    v6 = worldPos->v[1] - Parent->r.currentOrigin.v[1];
    in1.v[0] = v5 - Parent->r.currentOrigin.v[0];
    v7 = worldPos->v[2] - Parent->r.currentOrigin.v[2];
    in1.v[1] = v6;
    v8 = Parent->r.currentAngles.v[1];
    in1.v[2] = v7;
    MatrixRotationZ(&mat, COERCE_FLOAT(LODWORD(v8) ^ _xmm));
    MatrixTransformVector(&in1, &mat, &this->constant.vLocalOrigin);
  }
  else
  {
    this->constant.vLocalOrigin.v[0] = v5;
    this->constant.vLocalOrigin.v[1] = worldPos->v[1];
    this->constant.vLocalOrigin.v[2] = worldPos->v[2];
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
  gentity_s *v7; 
  __int64 v8; 
  __int64 v9; 
  GTurret *v10; 
  double v11; 
  double v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1471, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !angleMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1472, ASSERT_TYPE_ASSERT, "( angleMin )", (const char *)&queryFormat, "angleMin") )
    __debugbreak();
  if ( !angleMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1473, ASSERT_TYPE_ASSERT, "( angleMax )", (const char *)&queryFormat, "angleMax") )
    __debugbreak();
  if ( node->constant.type != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1474, ASSERT_TYPE_ASSERT, "( node->constant.type == NODE_TURRET )", (const char *)&queryFormat, "node->constant.type == NODE_TURRET") )
    __debugbreak();
  turretEntNumber = node->dynamic.turretEntNumber;
  if ( turretEntNumber >= 0 )
  {
    if ( (unsigned __int16)turretEntNumber >= 0x800u )
    {
      LODWORD(v13) = turretEntNumber;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.cpp", 1483, ASSERT_TYPE_ASSERT, "(unsigned)( node->dynamic.turretEntNumber ) < (unsigned)( ( 2048 ) )", "node->dynamic.turretEntNumber doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, 2048) )
        __debugbreak();
    }
    v7 = g_entities;
    v8 = node->dynamic.turretEntNumber;
    if ( !g_entities[v8].turretHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
      __debugbreak();
    v9 = v7[v8].turretHandle.m_objIndex - 1;
    if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 226, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( (unsigned int)v9 >= 0x80 )
    {
      LODWORD(v14) = 128;
      LODWORD(v13) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 227, ASSERT_TYPE_ASSERT, "(unsigned)( turretIndex ) < (unsigned)( ( sizeof( *array_counter( ms_turretArray ) ) + 0 ) )", "turretIndex doesn't index ARRAY_COUNT( ms_turretArray )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( !GTurret::ms_turretArray[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 228, ASSERT_TYPE_ASSERT, "( ms_turretArray[turretIndex] )", (const char *)&queryFormat, "ms_turretArray[turretIndex]") )
      __debugbreak();
    v10 = GTurret::ms_turretArray[v9];
    v11 = AngleNormalize360(v10->m_data.arcmin.v[1]);
    *angleMin = *(float *)&v11;
    v12 = AngleNormalize360(v10->m_data.arcmax.v[1]);
    *angleMax = *(float *)&v12;
  }
  else
  {
    *angleMin = 315.0;
    *angleMax = FLOAT_45_0;
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
  float *p_number; 
  float v5; 
  float v6; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 

  Parent = pathnode_t::GetParent(this);
  p_number = (float *)&Parent->s.number;
  if ( Parent )
  {
    AnglesToAxis(&Parent->r.currentAngles, &axis);
    MatrixTransformVector(pos, &axis, &out);
    v5 = out.v[1];
    pos->v[0] = out.v[0] + p_number[76];
    v6 = out.v[2];
    pos->v[1] = v5 + p_number[77];
    pos->v[2] = v6 + p_number[78];
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

